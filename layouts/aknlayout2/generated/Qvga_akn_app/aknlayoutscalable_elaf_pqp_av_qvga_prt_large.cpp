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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002b8d6 };

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
0xd2a2,	// (0x00038b78) Screen

0xd2ac,	// (0x00038b82) application_window_ParamLimits

0xd2ac,	// (0x00038b82) application_window

0x7260,	// (0x00032b36) screen_g1

0xd2ba,	// (0x00038b90) area_bottom_pane_ParamLimits

0xd2ba,	// (0x00038b90) area_bottom_pane

0x72ee,	// (0x00032bc4) area_top_pane_ParamLimits

0x72ee,	// (0x00032bc4) area_top_pane

0x7366,	// (0x00032c3c) main_pane_ParamLimits

0x7366,	// (0x00032c3c) main_pane

0x741f,	// (0x00032cf5) misc_graphics

0xd9c9,	// (0x0003929f) battery_pane_ParamLimits

0xd9c9,	// (0x0003929f) battery_pane

0xb1f7,	// (0x00036acd) bg_status_flat_pane_g8

0xb1ff,	// (0x00036ad5) bg_status_flat_pane_g9

0xa932,	// (0x00036208) context_pane_ParamLimits

0xa932,	// (0x00036208) context_pane

0xdb01,	// (0x000393d7) navi_pane_ParamLimits

0xdb01,	// (0x000393d7) navi_pane

0xdb6d,	// (0x00039443) signal_pane_ParamLimits

0xdb6d,	// (0x00039443) signal_pane

0x0008,

0xf852,	// (0x0003b128) bg_status_flat_pane_g

0xdbce,	// (0x000394a4) status_pane_g1_ParamLimits

0xdbce,	// (0x000394a4) status_pane_g1

0xdbda,	// (0x000394b0) status_pane_g2_ParamLimits

0xdbda,	// (0x000394b0) status_pane_g2

0xa998,	// (0x0003626e) status_pane_g3_ParamLimits

0xa998,	// (0x0003626e) status_pane_g3

0x0004,

0xf780,	// (0x0003b056) status_pane_g_ParamLimits

0xf780,	// (0x0003b056) status_pane_g

0xdbe6,	// (0x000394bc) title_pane_ParamLimits

0xdbe6,	// (0x000394bc) title_pane

0xdc23,	// (0x000394f9) uni_indicator_pane_ParamLimits

0xdc23,	// (0x000394f9) uni_indicator_pane

0xa889,	// (0x0003615f) bg_list_pane_ParamLimits

0xa889,	// (0x0003615f) bg_list_pane

0x877b,	// (0x00034051) find_pane

0xd96c,	// (0x00039242) listscroll_app_pane_ParamLimits

0xd96c,	// (0x00039242) listscroll_app_pane

0xa8a9,	// (0x0003617f) listscroll_form_pane

0x8783,	// (0x00034059) listscroll_gen_pane_ParamLimits

0x8783,	// (0x00034059) listscroll_gen_pane

0x8798,	// (0x0003406e) listscroll_set_pane

0xd610,	// (0x00038ee6) main_idle_act_pane

0xa6f4,	// (0x00035fca) main_idle_trad_pane

0xa6f4,	// (0x00035fca) main_list_empty_pane

0x87a0,	// (0x00034076) main_midp_pane

0xa8c3,	// (0x00036199) main_pane_g1_ParamLimits

0xa8c3,	// (0x00036199) main_pane_g1

0x87ac,	// (0x00034082) popup_ai_message_window_ParamLimits

0x87ac,	// (0x00034082) popup_ai_message_window

0x8842,	// (0x00034118) popup_fep_china_uni_window_ParamLimits

0x8842,	// (0x00034118) popup_fep_china_uni_window

0x8880,	// (0x00034156) popup_fep_japan_candidate_window_ParamLimits

0x8880,	// (0x00034156) popup_fep_japan_candidate_window

0x889e,	// (0x00034174) popup_fep_japan_predictive_window_ParamLimits

0x889e,	// (0x00034174) popup_fep_japan_predictive_window

0x88ca,	// (0x000341a0) popup_find_window

0x88d7,	// (0x000341ad) popup_grid_graphic_window_ParamLimits

0x88d7,	// (0x000341ad) popup_grid_graphic_window

0x88f5,	// (0x000341cb) popup_large_graphic_colour_window

0x8914,	// (0x000341ea) popup_menu_window_ParamLimits

0x8914,	// (0x000341ea) popup_menu_window

0x8a4c,	// (0x00034322) popup_note_image_window

0x8a3a,	// (0x00034310) popup_note_wait_window_ParamLimits

0x8a3a,	// (0x00034310) popup_note_wait_window

0x8a3a,	// (0x00034310) popup_note_window_ParamLimits

0x8a3a,	// (0x00034310) popup_note_window

0x8aa0,	// (0x00034376) popup_query_code_window_ParamLimits

0x8aa0,	// (0x00034376) popup_query_code_window

0x8ab2,	// (0x00034388) popup_query_data_code_window_ParamLimits

0x8ab2,	// (0x00034388) popup_query_data_code_window

0x8ac7,	// (0x0003439d) popup_query_data_window_ParamLimits

0x8ac7,	// (0x0003439d) popup_query_data_window

0x8add,	// (0x000343b3) popup_query_sat_info_window_ParamLimits

0x8add,	// (0x000343b3) popup_query_sat_info_window

0x8b0e,	// (0x000343e4) popup_snote_single_graphic_window_ParamLimits

0x8b0e,	// (0x000343e4) popup_snote_single_graphic_window

0x8b0e,	// (0x000343e4) popup_snote_single_text_window_ParamLimits

0x8b0e,	// (0x000343e4) popup_snote_single_text_window

0x8b21,	// (0x000343f7) popup_sub_window_general

0x8c25,	// (0x000344fb) popup_window_general_ParamLimits

0x8c25,	// (0x000344fb) popup_window_general

0xa8d1,	// (0x000361a7) power_save_pane

0x8617,	// (0x00033eed) control_pane_g1_ParamLimits

0x8617,	// (0x00033eed) control_pane_g1

0x8638,	// (0x00033f0e) control_pane_g2_ParamLimits

0x8638,	// (0x00033f0e) control_pane_g2

0xa87b,	// (0x00036151) control_pane_g3_ParamLimits

0xa87b,	// (0x00036151) control_pane_g3

0x0007,

0xf768,	// (0x0003b03e) control_pane_g_ParamLimits

0xf768,	// (0x0003b03e) control_pane_g

0x867a,	// (0x00033f50) control_pane_t1_ParamLimits

0x867a,	// (0x00033f50) control_pane_t1

0x86cc,	// (0x00033fa2) control_pane_t2_ParamLimits

0x86cc,	// (0x00033fa2) control_pane_t2

0x0002,

0xf779,	// (0x0003b04f) control_pane_t_ParamLimits

0xf779,	// (0x0003b04f) control_pane_t

0xa823,	// (0x000360f9) navi_navi_volume_pane_cp1

0xa82b,	// (0x00036101) status_small_icon_pane

0xa833,	// (0x00036109) status_small_pane_g1_ParamLimits

0xa833,	// (0x00036109) status_small_pane_g1

0xd8c4,	// (0x0003919a) status_small_pane_g2_ParamLimits

0xd8c4,	// (0x0003919a) status_small_pane_g2

0xd8d0,	// (0x000391a6) status_small_pane_g3_ParamLimits

0xd8d0,	// (0x000391a6) status_small_pane_g3

0xd8dc,	// (0x000391b2) status_small_pane_g4_ParamLimits

0xd8dc,	// (0x000391b2) status_small_pane_g4

0xd8e8,	// (0x000391be) status_small_pane_g5_ParamLimits

0xd8e8,	// (0x000391be) status_small_pane_g5

0xa867,	// (0x0003613d) status_small_pane_g6_ParamLimits

0xa867,	// (0x0003613d) status_small_pane_g6

0x0007,

0xf757,	// (0x0003b02d) status_small_pane_g_ParamLimits

0xf757,	// (0x0003b02d) status_small_pane_g

0xd917,	// (0x000391ed) status_small_pane_t1

0xd931,	// (0x00039207) status_small_wait_pane_ParamLimits

0xd931,	// (0x00039207) status_small_wait_pane

0xd74b,	// (0x00039021) aid_levels_signal_ParamLimits

0xd74b,	// (0x00039021) aid_levels_signal

0xd75c,	// (0x00039032) signal_pane_g1_ParamLimits

0xd75c,	// (0x00039032) signal_pane_g1

0xd772,	// (0x00039048) signal_pane_g2_ParamLimits

0xd772,	// (0x00039048) signal_pane_g2

0x0003,

0xf6e8,	// (0x0003afbe) signal_pane_g_ParamLimits

0xf6e8,	// (0x0003afbe) signal_pane_g

0xa299,	// (0x00035b6f) context_pane_g1

0xd31f,	// (0x00038bf5) title_pane_g1

0xd349,	// (0x00038c1f) title_pane_t1

0x757b,	// (0x00032e51) title_pane_t2

0x75a1,	// (0x00032e77) title_pane_t3

0x0002,

0xf532,	// (0x0003ae08) title_pane_t

0xdc39,	// (0x0003950f) aid_levels_battery_ParamLimits

0xdc39,	// (0x0003950f) aid_levels_battery

0xdc4c,	// (0x00039522) battery_pane_g1_ParamLimits

0xdc4c,	// (0x00039522) battery_pane_g1

0xdc61,	// (0x00039537) battery_pane_g2_ParamLimits

0xdc61,	// (0x00039537) battery_pane_g2

0x0001,

0xf78b,	// (0x0003b061) battery_pane_g_ParamLimits

0xf78b,	// (0x0003b061) battery_pane_g

0xddbd,	// (0x00039693) uni_indicator_pane_g1

0xddd1,	// (0x000396a7) uni_indicator_pane_g2

0xdde6,	// (0x000396bc) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x0003b1d0) uni_indicator_pane_g

0x7db6,	// (0x0003368c) navi_icon_pane_ParamLimits

0x7db6,	// (0x0003368c) navi_icon_pane

0x741f,	// (0x00032cf5) navi_midp_pane

0x741f,	// (0x00032cf5) navi_navi_pane

0x7db6,	// (0x0003368c) navi_text_pane_ParamLimits

0x7db6,	// (0x0003368c) navi_text_pane

0x7260,	// (0x00032b36) status_small_wait_pane_g1

0x7940,	// (0x00033216) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x0003b1cb) status_small_wait_pane_g

0xb761,	// (0x00037037) navi_navi_icon_text_pane

0xb769,	// (0x0003703f) navi_navi_pane_g1_ParamLimits

0xb769,	// (0x0003703f) navi_navi_pane_g1

0xb77b,	// (0x00037051) navi_navi_pane_g2_ParamLimits

0xb77b,	// (0x00037051) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x0003b199) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x0003b199) navi_navi_pane_g

0xb78d,	// (0x00037063) navi_navi_tabs_pane

0xb761,	// (0x00037037) navi_navi_text_pane

0xb761,	// (0x00037037) navi_navi_volume_pane

0xb73d,	// (0x00037013) navi_text_pane_t1

0xb731,	// (0x00037007) navi_icon_pane_g1

0xb685,	// (0x00036f5b) navi_navi_text_pane_t1

0x8e8c,	// (0x00034762) navi_navi_volume_pane_g1

0x8e94,	// (0x0003476a) volume_small_pane

0xdd0a,	// (0x000395e0) navi_navi_icon_text_pane_g1

0xdd12,	// (0x000395e8) navi_navi_icon_text_pane_t1

0xb23f,	// (0x00036b15) navi_tabs_2_long_pane

0xb23f,	// (0x00036b15) navi_tabs_2_pane

0xb23f,	// (0x00036b15) navi_tabs_3_long_pane

0xb23f,	// (0x00036b15) navi_tabs_3_pane

0xb23f,	// (0x00036b15) navi_tabs_4_pane

0x8e6c,	// (0x00034742) tabs_2_active_pane_ParamLimits

0x8e6c,	// (0x00034742) tabs_2_active_pane

0x8e7c,	// (0x00034752) tabs_2_passive_pane_ParamLimits

0x8e7c,	// (0x00034752) tabs_2_passive_pane

0x8e3a,	// (0x00034710) tabs_3_active_pane_ParamLimits

0x8e3a,	// (0x00034710) tabs_3_active_pane

0x8e4a,	// (0x00034720) tabs_3_passive_pane_ParamLimits

0x8e4a,	// (0x00034720) tabs_3_passive_pane

0x8e5b,	// (0x00034731) tabs_3_passive_pane_cp_ParamLimits

0x8e5b,	// (0x00034731) tabs_3_passive_pane_cp

0x8df6,	// (0x000346cc) tabs_4_active_pane_ParamLimits

0x8df6,	// (0x000346cc) tabs_4_active_pane

0x8e07,	// (0x000346dd) tabs_4_passive_pane_ParamLimits

0x8e07,	// (0x000346dd) tabs_4_passive_pane

0x8e18,	// (0x000346ee) tabs_4_passive_pane_cp_ParamLimits

0x8e18,	// (0x000346ee) tabs_4_passive_pane_cp

0x8e29,	// (0x000346ff) tabs_4_passive_pane_cp2_ParamLimits

0x8e29,	// (0x000346ff) tabs_4_passive_pane_cp2

0x8dd6,	// (0x000346ac) tabs_2_long_active_pane_ParamLimits

0x8dd6,	// (0x000346ac) tabs_2_long_active_pane

0x8de6,	// (0x000346bc) tabs_2_long_passive_pane_ParamLimits

0x8de6,	// (0x000346bc) tabs_2_long_passive_pane

0x8da1,	// (0x00034677) tabs_3_long_active_pane_ParamLimits

0x8da1,	// (0x00034677) tabs_3_long_active_pane

0x8db2,	// (0x00034688) tabs_3_long_passive_pane_ParamLimits

0x8db2,	// (0x00034688) tabs_3_long_passive_pane

0x8dc5,	// (0x0003469b) tabs_3_long_passive_pane_cp_ParamLimits

0x8dc5,	// (0x0003469b) tabs_3_long_passive_pane_cp

0x8d47,	// (0x0003461d) volume_small_pane_g1

0x8d50,	// (0x00034626) volume_small_pane_g2

0x8d59,	// (0x0003462f) volume_small_pane_g3

0x8d62,	// (0x00034638) volume_small_pane_g4

0x8d6b,	// (0x00034641) volume_small_pane_g5

0x8d74,	// (0x0003464a) volume_small_pane_g6

0x8d7d,	// (0x00034653) volume_small_pane_g7

0x8d86,	// (0x0003465c) volume_small_pane_g8

0x8d8f,	// (0x00034665) volume_small_pane_g9

0x8d98,	// (0x0003466e) volume_small_pane_g10

0x0009,

0xf88f,	// (0x0003b165) volume_small_pane_g

0x75b3,	// (0x00032e89) bg_active_tab_pane_cp2_ParamLimits

0x75b3,	// (0x00032e89) bg_active_tab_pane_cp2

0x75c1,	// (0x00032e97) tabs_3_active_pane_g1

0xd3b1,	// (0x00038c87) tabs_3_active_pane_t1

0x75b3,	// (0x00032e89) bg_passive_tab_pane_cp2_ParamLimits

0x75b3,	// (0x00032e89) bg_passive_tab_pane_cp2

0x75c1,	// (0x00032e97) tabs_3_passive_pane_g1

0xd3b1,	// (0x00038c87) tabs_3_passive_pane_t1

0x75b3,	// (0x00032e89) bg_active_tab_pane_cp3_ParamLimits

0x75b3,	// (0x00032e89) bg_active_tab_pane_cp3

0xd3c3,	// (0x00038c99) tabs_4_active_pane_g1

0xd3cb,	// (0x00038ca1) tabs_4_active_pane_t1

0x75b3,	// (0x00032e89) bg_passive_tab_pane_cp3_ParamLimits

0x75b3,	// (0x00032e89) bg_passive_tab_pane_cp3

0xd3c3,	// (0x00038c99) tabs_4_1_passive_pane_g1

0xd3cb,	// (0x00038ca1) tabs_4_1_passive_pane_t1

0x87a0,	// (0x00034076) list_highlight_pane_cp2

0xde2f,	// (0x00039705) list_set_pane_ParamLimits

0xde2f,	// (0x00039705) list_set_pane

0xdebd,	// (0x00039793) main_pane_set_t1_ParamLimits

0xdebd,	// (0x00039793) main_pane_set_t1

0xdedd,	// (0x000397b3) main_pane_set_t2_ParamLimits

0xdedd,	// (0x000397b3) main_pane_set_t2

0xdeef,	// (0x000397c5) main_pane_set_t3_ParamLimits

0xdeef,	// (0x000397c5) main_pane_set_t3

0xdf01,	// (0x000397d7) main_pane_set_t4_ParamLimits

0xdf01,	// (0x000397d7) main_pane_set_t4

0x0003,

0xf95f,	// (0x0003b235) main_pane_set_t_ParamLimits

0xf95f,	// (0x0003b235) main_pane_set_t

0xdf13,	// (0x000397e9) setting_code_pane

0xdf1b,	// (0x000397f1) setting_slider_graphic_pane

0xdf1b,	// (0x000397f1) setting_slider_pane

0xdf1b,	// (0x000397f1) setting_text_pane

0xdf1b,	// (0x000397f1) setting_volume_pane

0x75c9,	// (0x00032e9f) volume_set_pane

0x75b3,	// (0x00032e89) bg_set_opt_pane_cp

0x75d1,	// (0x00032ea7) setting_slider_pane_t1

0x75e7,	// (0x00032ebd) setting_slider_pane_t2

0x7600,	// (0x00032ed6) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0003ae0f) setting_slider_pane_t

0x7617,	// (0x00032eed) slider_set_pane

0x741f,	// (0x00032cf5) bg_set_opt_pane_cp2

0x762d,	// (0x00032f03) setting_slider_graphic_pane_g1

0x7636,	// (0x00032f0c) setting_slider_graphic_pane_t1

0x7645,	// (0x00032f1b) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0003ae16) setting_slider_graphic_pane_t

0x7654,	// (0x00032f2a) slider_set_pane_cp

0x741f,	// (0x00032cf5) input_focus_pane_cp1

0xbbae,	// (0x00037484) list_set_text_pane

0x7260,	// (0x00032b36) setting_text_pane_g1

0x741f,	// (0x00032cf5) input_focus_pane_cp2

0x7260,	// (0x00032b36) setting_code_pane_g1

0x765c,	// (0x00032f32) setting_code_pane_t1

0x63f9,	// (0x00031ccf) set_text_pane_t1_ParamLimits

0x63f9,	// (0x00031ccf) set_text_pane_t1

0x7d04,	// (0x000335da) set_opt_bg_pane_g1

0x7d0c,	// (0x000335e2) set_opt_bg_pane_g2

0xddfb,	// (0x000396d1) set_opt_bg_pane_g3

0x7d1c,	// (0x000335f2) set_opt_bg_pane_g4

0x7d24,	// (0x000335fa) set_opt_bg_pane_g5

0x7d2c,	// (0x00033602) set_opt_bg_pane_g6

0xde03,	// (0x000396d9) set_opt_bg_pane_g7

0xde0b,	// (0x000396e1) set_opt_bg_pane_g8

0xde13,	// (0x000396e9) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x0003b222) set_opt_bg_pane_g

0xbba1,	// (0x00037477) slider_set_pane_g1

0x8f01,	// (0x000347d7) slider_set_pane_g2

0x0006,

0xf93d,	// (0x0003b213) slider_set_pane_g

0x8e9d,	// (0x00034773) volume_set_pane_g1

0x8ea5,	// (0x0003477b) volume_set_pane_g2

0x8ead,	// (0x00034783) volume_set_pane_g3

0x8eb5,	// (0x0003478b) volume_set_pane_g4

0x8ebd,	// (0x00034793) volume_set_pane_g5

0x8ec5,	// (0x0003479b) volume_set_pane_g6

0x8ecd,	// (0x000347a3) volume_set_pane_g7

0x8ed5,	// (0x000347ab) volume_set_pane_g8

0x8edd,	// (0x000347b3) volume_set_pane_g9

0x8ee5,	// (0x000347bb) volume_set_pane_g10

0x0009,

0xf915,	// (0x0003b1eb) volume_set_pane_g

0xd3dd,	// (0x00038cb3) indicator_pane_ParamLimits

0xd3dd,	// (0x00038cb3) indicator_pane

0xd3e9,	// (0x00038cbf) main_idle_pane_g2_ParamLimits

0xd3e9,	// (0x00038cbf) main_idle_pane_g2

0xd40d,	// (0x00038ce3) main_pane_idle_g1_ParamLimits

0xd40d,	// (0x00038ce3) main_pane_idle_g1

0x766a,	// (0x00032f40) popup_clock_digital_analogue_window_ParamLimits

0x766a,	// (0x00032f40) popup_clock_digital_analogue_window

0xd41a,	// (0x00038cf0) soft_indicator_pane_ParamLimits

0xd41a,	// (0x00038cf0) soft_indicator_pane

0xd426,	// (0x00038cfc) wallpaper_pane_ParamLimits

0xd426,	// (0x00038cfc) wallpaper_pane

0x7260,	// (0x00032b36) wallpaper_pane_g1

0xd432,	// (0x00038d08) indicator_pane_g1_ParamLimits

0xd432,	// (0x00038d08) indicator_pane_g1

0xbcd1,	// (0x000375a7) navi_navi_icon_text_pane_srt_g1

0x7698,	// (0x00032f6e) soft_indicator_pane_t1

0x76b2,	// (0x00032f88) aid_ps_area_pane

0xd43e,	// (0x00038d14) aid_ps_clock_pane

0x76c3,	// (0x00032f99) aid_ps_indicator_pane

0x76cf,	// (0x00032fa5) indicator_ps_pane_ParamLimits

0x76cf,	// (0x00032fa5) indicator_ps_pane

0x76de,	// (0x00032fb4) power_save_pane_g1_ParamLimits

0x76de,	// (0x00032fb4) power_save_pane_g1

0x76ea,	// (0x00032fc0) power_save_pane_g2_ParamLimits

0x76ea,	// (0x00032fc0) power_save_pane_g2

0x726a,	// (0x00032b40) aid_navinavi_width_pane

0x76b2,	// (0x00032f88) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0003ae1b) power_save_pane_g_ParamLimits

0xf545,	// (0x0003ae1b) power_save_pane_g

0x76f8,	// (0x00032fce) power_save_pane_t1_ParamLimits

0x76f8,	// (0x00032fce) power_save_pane_t1

0xd43e,	// (0x00038d14) aid_ps_clock_pane_ParamLimits

0x76c3,	// (0x00032f99) aid_ps_indicator_pane_ParamLimits

0x770a,	// (0x00032fe0) power_save_pane_t4_ParamLimits

0x770a,	// (0x00032fe0) power_save_pane_t4

0x0001,

0xf54a,	// (0x0003ae20) power_save_pane_t_ParamLimits

0xf54a,	// (0x0003ae20) power_save_pane_t

0x7734,	// (0x0003300a) power_save_t3_ParamLimits

0x7734,	// (0x0003300a) power_save_t3

0x771f,	// (0x00032ff5) power_save_t2_ParamLimits

0x771f,	// (0x00032ff5) power_save_t2

0x7749,	// (0x0003301f) indicator_ps_pane_g1

0xd44a,	// (0x00038d20) ai_gene_pane_ParamLimits

0xd44a,	// (0x00038d20) ai_gene_pane

0xd456,	// (0x00038d2c) ai_links_pane_ParamLimits

0xd456,	// (0x00038d2c) ai_links_pane

0xd462,	// (0x00038d38) indicator_pane_cp1_ParamLimits

0xd462,	// (0x00038d38) indicator_pane_cp1

0xd46e,	// (0x00038d44) main_pane_idle_g1_cp_ParamLimits

0xd46e,	// (0x00038d44) main_pane_idle_g1_cp

0x7752,	// (0x00033028) popup_ai_links_title_window

0xd47a,	// (0x00038d50) soft_indicator_pane_cp1_ParamLimits

0xd47a,	// (0x00038d50) soft_indicator_pane_cp1

0xb9f7,	// (0x000372cd) ai_links_pane_g1

0xba00,	// (0x000372d6) grid_ai_links_pane

0xddb4,	// (0x0003968a) ai_gene_pane_1

0xb9e5,	// (0x000372bb) ai_gene_pane_2

0xb9ee,	// (0x000372c4) list_highlight_pane_cp4

0xdd98,	// (0x0003966e) cell_ai_link_pane_ParamLimits

0xdd98,	// (0x0003966e) cell_ai_link_pane

0xb9dd,	// (0x000372b3) cell_ai_link_pane_g1

0x7940,	// (0x00033216) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x0003b1c6) cell_ai_link_pane_g

0x741f,	// (0x00032cf5) grid_highlight_cp2

0x741f,	// (0x00032cf5) bg_popup_sub_pane_cp1

0x7769,	// (0x0003303f) popup_ai_links_title_window_t1

0xb92f,	// (0x00037205) ai_gene_pane_1_g1_ParamLimits

0xb92f,	// (0x00037205) ai_gene_pane_1_g1

0xb93b,	// (0x00037211) ai_gene_pane_1_g2_ParamLimits

0xb93b,	// (0x00037211) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x0003b1bc) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x0003b1bc) ai_gene_pane_1_g

0xb948,	// (0x0003721e) ai_gene_pane_1_t1_ParamLimits

0xb948,	// (0x0003721e) ai_gene_pane_1_t1

0xb97c,	// (0x00037252) grid_ai_soft_ind_pane

0xb91a,	// (0x000371f0) ai_gene_pane_2_t1_ParamLimits

0xb91a,	// (0x000371f0) ai_gene_pane_2_t1

0xd486,	// (0x00038d5c) main_pane_empty_t1_ParamLimits

0xd486,	// (0x00038d5c) main_pane_empty_t1

0xd4a3,	// (0x00038d79) main_pane_empty_t2_ParamLimits

0xd4a3,	// (0x00038d79) main_pane_empty_t2

0xd4bb,	// (0x00038d91) main_pane_empty_t3_ParamLimits

0xd4bb,	// (0x00038d91) main_pane_empty_t3

0xd4ce,	// (0x00038da4) main_pane_empty_t4_ParamLimits

0xd4ce,	// (0x00038da4) main_pane_empty_t4

0xd4e1,	// (0x00038db7) main_pane_empty_t5_ParamLimits

0xd4e1,	// (0x00038db7) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0003ae25) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0003ae25) main_pane_empty_t

0x7db6,	// (0x0003368c) bg_popup_window_pane_ParamLimits

0x7db6,	// (0x0003368c) bg_popup_window_pane

0xb694,	// (0x00036f6a) find_popup_pane_cp2_ParamLimits

0xb694,	// (0x00036f6a) find_popup_pane_cp2

0xb6a0,	// (0x00036f76) heading_pane_ParamLimits

0xb6a0,	// (0x00036f76) heading_pane

0x741f,	// (0x00032cf5) bg_popup_sub_pane

0xdd2c,	// (0x00039602) bg_popup_window_pane_g1_ParamLimits

0xdd2c,	// (0x00039602) bg_popup_window_pane_g1

0xdd38,	// (0x0003960e) bg_popup_window_pane_g2_ParamLimits

0xdd38,	// (0x0003960e) bg_popup_window_pane_g2

0xdd44,	// (0x0003961a) bg_popup_window_pane_g3_ParamLimits

0xdd44,	// (0x0003961a) bg_popup_window_pane_g3

0xdd50,	// (0x00039626) bg_popup_window_pane_g4_ParamLimits

0xdd50,	// (0x00039626) bg_popup_window_pane_g4

0xdd5c,	// (0x00039632) bg_popup_window_pane_g5_ParamLimits

0xdd5c,	// (0x00039632) bg_popup_window_pane_g5

0xdd68,	// (0x0003963e) bg_popup_window_pane_g6_ParamLimits

0xdd68,	// (0x0003963e) bg_popup_window_pane_g6

0xdd74,	// (0x0003964a) bg_popup_window_pane_g7_ParamLimits

0xdd74,	// (0x0003964a) bg_popup_window_pane_g7

0xdd80,	// (0x00039656) bg_popup_window_pane_g8_ParamLimits

0xdd80,	// (0x00039656) bg_popup_window_pane_g8

0xdd8c,	// (0x00039662) bg_popup_window_pane_g9_ParamLimits

0xdd8c,	// (0x00039662) bg_popup_window_pane_g9

0xb679,	// (0x00036f4f) bg_popup_window_pane_g10_ParamLimits

0xb679,	// (0x00036f4f) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x0003b184) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x0003b184) bg_popup_window_pane_g

0xb630,	// (0x00036f06) bg_popup_heading_pane_ParamLimits

0xb630,	// (0x00036f06) bg_popup_heading_pane

0x8ff7,	// (0x000348cd) tabs_4_passive_pane_cp_srt_ParamLimits

0x8ff7,	// (0x000348cd) tabs_4_passive_pane_cp_srt

0x9009,	// (0x000348df) tabs_4_passive_pane_srt_ParamLimits

0xb644,	// (0x00036f1a) heading_pane_g2

0x9009,	// (0x000348df) tabs_4_passive_pane_srt

0x87a0,	// (0x00034076) bg_passive_tab_pane_cp3_srt_ParamLimits

0x87a0,	// (0x00034076) bg_passive_tab_pane_cp3_srt

0xb64c,	// (0x00036f22) heading_pane_t1_ParamLimits

0xb64c,	// (0x00036f22) heading_pane_t1

0xb663,	// (0x00036f39) heading_pane_t2_ParamLimits

0xb663,	// (0x00036f39) heading_pane_t2

0x0001,

0xf8a9,	// (0x0003b17f) heading_pane_t_ParamLimits

0xf8a9,	// (0x0003b17f) heading_pane_t

0xb1bf,	// (0x00036a95) bg_popup_heading_pane_g1

0xb250,	// (0x00036b26) bg_popup_heading_pane_g2

0xb258,	// (0x00036b2e) bg_popup_heading_pane_g3

0xb260,	// (0x00036b36) bg_popup_heading_pane_g4

0xb268,	// (0x00036b3e) bg_popup_heading_pane_g5

0xb270,	// (0x00036b46) bg_popup_heading_pane_g6

0xb278,	// (0x00036b4e) bg_popup_heading_pane_g7

0xb280,	// (0x00036b56) bg_popup_heading_pane_g8

0xb288,	// (0x00036b5e) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x0003b13b) bg_popup_heading_pane_g

0xaa80,	// (0x00036356) bg_popup_sub_pane_g1

0xaa88,	// (0x0003635e) bg_popup_sub_pane_g2

0xaa90,	// (0x00036366) bg_popup_sub_pane_g3

0xaa98,	// (0x0003636e) bg_popup_sub_pane_g4

0xaaa0,	// (0x00036376) bg_popup_sub_pane_g5

0xaaa8,	// (0x0003637e) bg_popup_sub_pane_g6

0xaab0,	// (0x00036386) bg_popup_sub_pane_g7

0xaab8,	// (0x0003638e) bg_popup_sub_pane_g8

0xaac0,	// (0x00036396) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x0003b115) bg_popup_sub_pane_g

0x7778,	// (0x0003304e) bg_popup_window_pane_cp5_ParamLimits

0x7778,	// (0x0003304e) bg_popup_window_pane_cp5

0x7794,	// (0x0003306a) popup_note_window_g1_ParamLimits

0x7794,	// (0x0003306a) popup_note_window_g1

0x77a0,	// (0x00033076) popup_note_window_t1_ParamLimits

0x77a0,	// (0x00033076) popup_note_window_t1

0x77b6,	// (0x0003308c) popup_note_window_t2_ParamLimits

0x77b6,	// (0x0003308c) popup_note_window_t2

0x77cc,	// (0x000330a2) popup_note_window_t3_ParamLimits

0x77cc,	// (0x000330a2) popup_note_window_t3

0x77e2,	// (0x000330b8) popup_note_window_t4_ParamLimits

0x77e2,	// (0x000330b8) popup_note_window_t4

0x780a,	// (0x000330e0) popup_note_window_t5_ParamLimits

0x780a,	// (0x000330e0) popup_note_window_t5

0x0004,

0xf55a,	// (0x0003ae30) popup_note_window_t_ParamLimits

0xf55a,	// (0x0003ae30) popup_note_window_t

0x7854,	// (0x0003312a) bg_popup_window_pane_cp6_ParamLimits

0x7854,	// (0x0003312a) bg_popup_window_pane_cp6

0xb13b,	// (0x00036a11) popup_note_image_window_g1_ParamLimits

0xb13b,	// (0x00036a11) popup_note_image_window_g1

0xb147,	// (0x00036a1d) popup_note_image_window_g2_ParamLimits

0xb147,	// (0x00036a1d) popup_note_image_window_g2

0x0001,

0xf833,	// (0x0003b109) popup_note_image_window_g_ParamLimits

0xf833,	// (0x0003b109) popup_note_image_window_g

0xb160,	// (0x00036a36) popup_note_image_window_t1_ParamLimits

0xb160,	// (0x00036a36) popup_note_image_window_t1

0xb179,	// (0x00036a4f) popup_note_image_window_t2_ParamLimits

0xb179,	// (0x00036a4f) popup_note_image_window_t2

0xb192,	// (0x00036a68) popup_note_image_window_t3_ParamLimits

0xb192,	// (0x00036a68) popup_note_image_window_t3

0x0002,

0xf838,	// (0x0003b10e) popup_note_image_window_t_ParamLimits

0xf838,	// (0x0003b10e) popup_note_image_window_t

0xb026,	// (0x000368fc) bg_popup_window_pane_cp7_ParamLimits

0xb026,	// (0x000368fc) bg_popup_window_pane_cp7

0xb056,	// (0x0003692c) popup_note_wait_window_g1_ParamLimits

0xb056,	// (0x0003692c) popup_note_wait_window_g1

0xb062,	// (0x00036938) popup_note_wait_window_g2_ParamLimits

0xb062,	// (0x00036938) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x0003b0f7) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x0003b0f7) popup_note_wait_window_g

0xb07a,	// (0x00036950) popup_note_wait_window_t1_ParamLimits

0xb07a,	// (0x00036950) popup_note_wait_window_t1

0xb0a1,	// (0x00036977) popup_note_wait_window_t2_ParamLimits

0xb0a1,	// (0x00036977) popup_note_wait_window_t2

0xb0be,	// (0x00036994) popup_note_wait_window_t3_ParamLimits

0xb0be,	// (0x00036994) popup_note_wait_window_t3

0xb0d1,	// (0x000369a7) popup_note_wait_window_t4_ParamLimits

0xb0d1,	// (0x000369a7) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x0003b0fe) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x0003b0fe) popup_note_wait_window_t

0xb0f6,	// (0x000369cc) wait_bar_pane_ParamLimits

0xb0f6,	// (0x000369cc) wait_bar_pane

0x741f,	// (0x00032cf5) wait_anim_pane

0x741f,	// (0x00032cf5) wait_border_pane

0x7260,	// (0x00032b36) wait_anim_pane_g1

0x7260,	// (0x00032b36) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0003afb9) wait_anim_pane_g

0xafd6,	// (0x000368ac) wait_border_pane_g1

0xafdf,	// (0x000368b5) wait_border_pane_g2

0xafe8,	// (0x000368be) wait_border_pane_g3

0x0002,

0xf81a,	// (0x0003b0f0) wait_border_pane_g

0xae46,	// (0x0003671c) bg_popup_window_pane_cp16_ParamLimits

0xae46,	// (0x0003671c) bg_popup_window_pane_cp16

0xaf46,	// (0x0003681c) indicator_popup_pane_cp4_ParamLimits

0xaf46,	// (0x0003681c) indicator_popup_pane_cp4

0xaf5a,	// (0x00036830) popup_query_data_window_t1_ParamLimits

0xaf5a,	// (0x00036830) popup_query_data_window_t1

0xaf6c,	// (0x00036842) popup_query_data_window_t2_ParamLimits

0xaf6c,	// (0x00036842) popup_query_data_window_t2

0xaf85,	// (0x0003685b) popup_query_data_window_t3_ParamLimits

0xaf85,	// (0x0003685b) popup_query_data_window_t3

0x0002,

0xf813,	// (0x0003b0e9) popup_query_data_window_t_ParamLimits

0xf813,	// (0x0003b0e9) popup_query_data_window_t

0xaf9f,	// (0x00036875) query_popup_data_pane_ParamLimits

0xaf9f,	// (0x00036875) query_popup_data_pane

0xafb3,	// (0x00036889) query_popup_data_pane_cp1_ParamLimits

0xafb3,	// (0x00036889) query_popup_data_pane_cp1

0xae46,	// (0x0003671c) bg_popup_window_pane_cp10_ParamLimits

0xae46,	// (0x0003671c) bg_popup_window_pane_cp10

0xae78,	// (0x0003674e) indicator_popup_pane_ParamLimits

0xae78,	// (0x0003674e) indicator_popup_pane

0xae9a,	// (0x00036770) popup_query_code_window_t1_ParamLimits

0xae9a,	// (0x00036770) popup_query_code_window_t1

0xaeb4,	// (0x0003678a) popup_query_code_window_t2_ParamLimits

0xaeb4,	// (0x0003678a) popup_query_code_window_t2

0xaefd,	// (0x000367d3) popup_query_code_window_t3_ParamLimits

0xaefd,	// (0x000367d3) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x0003b0e2) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x0003b0e2) popup_query_code_window_t

0xaf2c,	// (0x00036802) query_popup_pane_ParamLimits

0xaf2c,	// (0x00036802) query_popup_pane

0x7854,	// (0x0003312a) bg_popup_window_pane_cp15_ParamLimits

0x7854,	// (0x0003312a) bg_popup_window_pane_cp15

0x7872,	// (0x00033148) indicator_popup_pane_cp1_ParamLimits

0x7872,	// (0x00033148) indicator_popup_pane_cp1

0x7885,	// (0x0003315b) indicator_popup_pane_cp2_ParamLimits

0x7885,	// (0x0003315b) indicator_popup_pane_cp2

0x7898,	// (0x0003316e) popup_query_data_code_window_g1_ParamLimits

0x7898,	// (0x0003316e) popup_query_data_code_window_g1

0x78ab,	// (0x00033181) popup_query_data_code_window_t1_ParamLimits

0x78ab,	// (0x00033181) popup_query_data_code_window_t1

0x78bd,	// (0x00033193) popup_query_data_code_window_t2_ParamLimits

0x78bd,	// (0x00033193) popup_query_data_code_window_t2

0x78cf,	// (0x000331a5) popup_query_data_code_window_t3_ParamLimits

0x78cf,	// (0x000331a5) popup_query_data_code_window_t3

0x78e5,	// (0x000331bb) popup_query_data_code_window_t4_ParamLimits

0x78e5,	// (0x000331bb) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0003ae3b) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0003ae3b) popup_query_data_code_window_t

0xa575,	// (0x00035e4b) list_single_midp_graphic_pane_g3

0x78fd,	// (0x000331d3) query_popup_data_pane_cp2_ParamLimits

0x7910,	// (0x000331e6) query_popup_pane_cp2_ParamLimits

0x7910,	// (0x000331e6) query_popup_pane_cp2

0x741f,	// (0x00032cf5) bg_popup_window_pane_cp11

0xae2a,	// (0x00036700) heading_pane_cp5

0xae32,	// (0x00036708) listscroll_popup_info_pane

0x741f,	// (0x00032cf5) input_focus_pane_cp3

0x7923,	// (0x000331f9) query_popup_pane_t1

0x7931,	// (0x00033207) list_popup_info_pane_ParamLimits

0x7931,	// (0x00033207) list_popup_info_pane

0x7940,	// (0x00033216) listscroll_popup_info_pane_g1

0x7948,	// (0x0003321e) scroll_pane_cp7

0x7950,	// (0x00033226) popup_info_list_pane_t1_ParamLimits

0x7950,	// (0x00033226) popup_info_list_pane_t1

0x796a,	// (0x00033240) popup_info_list_pane_t2_ParamLimits

0x796a,	// (0x00033240) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0003ae44) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0003ae44) popup_info_list_pane_t

0x741f,	// (0x00032cf5) bg_popup_window_pane_cp12

0xbceb,	// (0x000375c1) find_popup_pane

0x75b3,	// (0x00032e89) bg_popup_window_pane_cp3

0x7984,	// (0x0003325a) heading_pane_cp3

0x7993,	// (0x00033269) listscroll_popup_graphic_pane

0x741f,	// (0x00032cf5) bg_popup_window_pane_cp4

0xd544,	// (0x00038e1a) heading_pane_cp4

0x79a2,	// (0x00033278) listscroll_popup_colour_pane

0x79aa,	// (0x00033280) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x79aa,	// (0x00033280) cell_large_graphic_colour_none_popup_pane

0xd54c,	// (0x00038e22) grid_large_graphic_colour_popup_pane_ParamLimits

0xd54c,	// (0x00038e22) grid_large_graphic_colour_popup_pane

0xd568,	// (0x00038e3e) listscroll_popup_colour_pane_g1_ParamLimits

0xd568,	// (0x00038e3e) listscroll_popup_colour_pane_g1

0xd57f,	// (0x00038e55) listscroll_popup_colour_pane_g2_ParamLimits

0xd57f,	// (0x00038e55) listscroll_popup_colour_pane_g2

0x79ba,	// (0x00033290) listscroll_popup_colour_pane_g3_ParamLimits

0x79ba,	// (0x00033290) listscroll_popup_colour_pane_g3

0xd593,	// (0x00038e69) listscroll_popup_colour_pane_g4_ParamLimits

0xd593,	// (0x00038e69) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0003ae49) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0003ae49) listscroll_popup_colour_pane_g

0x79ca,	// (0x000332a0) scroll_pane_cp6_ParamLimits

0x79ca,	// (0x000332a0) scroll_pane_cp6

0xd5a2,	// (0x00038e78) cell_large_graphic_colour_popup_pane_ParamLimits

0xd5a2,	// (0x00038e78) cell_large_graphic_colour_popup_pane

0x79dc,	// (0x000332b2) cell_large_graphic_colour_none_popup_pane_t1

0x741f,	// (0x00032cf5) grid_highlight_pane_cp5

0x79eb,	// (0x000332c1) cell_large_graphic_colour_popup_pane_g1

0x79f3,	// (0x000332c9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0003ae52) cell_large_graphic_colour_popup_pane_g

0x79fb,	// (0x000332d1) cell_large_graphic_colour_popup_pane_g2_copy1

0x7a04,	// (0x000332da) grid_highlight_pane_cp4

0x7a0c,	// (0x000332e2) bg_popup_window_pane_cp8_ParamLimits

0x7a0c,	// (0x000332e2) bg_popup_window_pane_cp8

0x7a27,	// (0x000332fd) popup_snote_single_text_window_g1_ParamLimits

0x7a27,	// (0x000332fd) popup_snote_single_text_window_g1

0x7a39,	// (0x0003330f) popup_snote_single_text_window_t1_ParamLimits

0x7a39,	// (0x0003330f) popup_snote_single_text_window_t1

0x7a4c,	// (0x00033322) popup_snote_single_text_window_t2_ParamLimits

0x7a4c,	// (0x00033322) popup_snote_single_text_window_t2

0x7a5f,	// (0x00033335) popup_snote_single_text_window_t3_ParamLimits

0x7a5f,	// (0x00033335) popup_snote_single_text_window_t3

0x7a98,	// (0x0003336e) popup_snote_single_text_window_t4_ParamLimits

0x7a98,	// (0x0003336e) popup_snote_single_text_window_t4

0x7acc,	// (0x000333a2) popup_snote_single_text_window_t5_ParamLimits

0x7acc,	// (0x000333a2) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0003ae57) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0003ae57) popup_snote_single_text_window_t

0x7afb,	// (0x000333d1) bg_popup_window_pane_cp9_ParamLimits

0x7afb,	// (0x000333d1) bg_popup_window_pane_cp9

0x7a27,	// (0x000332fd) popup_snote_single_graphic_window_g1_ParamLimits

0x7a27,	// (0x000332fd) popup_snote_single_graphic_window_g1

0x7b09,	// (0x000333df) popup_snote_single_graphic_window_g2_ParamLimits

0x7b09,	// (0x000333df) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0003ae62) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0003ae62) popup_snote_single_graphic_window_g

0x7b15,	// (0x000333eb) popup_snote_single_graphic_window_t1_ParamLimits

0x7b15,	// (0x000333eb) popup_snote_single_graphic_window_t1

0x7b28,	// (0x000333fe) popup_snote_single_graphic_window_t2_ParamLimits

0x7b28,	// (0x000333fe) popup_snote_single_graphic_window_t2

0x7a5f,	// (0x00033335) popup_snote_single_graphic_window_t3_ParamLimits

0x7a5f,	// (0x00033335) popup_snote_single_graphic_window_t3

0x7a98,	// (0x0003336e) popup_snote_single_graphic_window_t4_ParamLimits

0x7a98,	// (0x0003336e) popup_snote_single_graphic_window_t4

0x7acc,	// (0x000333a2) popup_snote_single_graphic_window_t5_ParamLimits

0x7acc,	// (0x000333a2) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0003ae67) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0003ae67) popup_snote_single_graphic_window_t

0xe7bd,	// (0x0003a093) grid_graphic_popup_pane_ParamLimits

0xe7bd,	// (0x0003a093) grid_graphic_popup_pane

0xe7e0,	// (0x0003a0b6) listscroll_popup_graphic_pane_g1_ParamLimits

0xe7e0,	// (0x0003a0b6) listscroll_popup_graphic_pane_g1

0xe7f4,	// (0x0003a0ca) listscroll_popup_graphic_pane_g2_ParamLimits

0xe7f4,	// (0x0003a0ca) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x0003b25f) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x0003b25f) listscroll_popup_graphic_pane_g

0xbca3,	// (0x00037579) scroll_pane_cp5

0xdf9b,	// (0x00039871) cell_graphic_popup_pane_ParamLimits

0xdf9b,	// (0x00039871) cell_graphic_popup_pane

0xbc6e,	// (0x00037544) cell_graphic_popup_pane_g1

0xbc76,	// (0x0003754c) cell_graphic_popup_pane_g2

0x79fb,	// (0x000332d1) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x0003b258) cell_graphic_popup_pane_g

0xbc7f,	// (0x00037555) cell_graphic_popup_pane_t2

0x7a04,	// (0x000332da) grid_highlight_pane_cp3

0x7b4d,	// (0x00033423) list_gen_pane_ParamLimits

0x7b4d,	// (0x00033423) list_gen_pane

0x7b76,	// (0x0003344c) scroll_pane

0xdf6c,	// (0x00039842) bg_list_pane_g1_ParamLimits

0xdf6c,	// (0x00039842) bg_list_pane_g1

0xbc1d,	// (0x000374f3) bg_list_pane_g2_ParamLimits

0xbc1d,	// (0x000374f3) bg_list_pane_g2

0xbc30,	// (0x00037506) bg_list_pane_g3_ParamLimits

0xbc30,	// (0x00037506) bg_list_pane_g3

0xbc42,	// (0x00037518) bg_list_pane_g4_ParamLimits

0xbc42,	// (0x00037518) bg_list_pane_g4

0xdf83,	// (0x00039859) bg_list_pane_g5_ParamLimits

0xdf83,	// (0x00039859) bg_list_pane_g5

0x0004,

0xf977,	// (0x0003b24d) bg_list_pane_g_ParamLimits

0xf977,	// (0x0003b24d) bg_list_pane_g

0xdf48,	// (0x0003981e) list_double2_graphic_large_graphic_pane_ParamLimits

0xdf48,	// (0x0003981e) list_double2_graphic_large_graphic_pane

0xdf48,	// (0x0003981e) list_double2_graphic_pane_ParamLimits

0xdf48,	// (0x0003981e) list_double2_graphic_pane

0xdf48,	// (0x0003981e) list_double2_large_graphic_pane_ParamLimits

0xdf48,	// (0x0003981e) list_double2_large_graphic_pane

0xdf48,	// (0x0003981e) list_double2_pane_ParamLimits

0xdf48,	// (0x0003981e) list_double2_pane

0xdf48,	// (0x0003981e) list_double_graphic_heading_pane_ParamLimits

0xdf48,	// (0x0003981e) list_double_graphic_heading_pane

0xdf48,	// (0x0003981e) list_double_graphic_pane_ParamLimits

0xdf48,	// (0x0003981e) list_double_graphic_pane

0xdf48,	// (0x0003981e) list_double_heading_pane_ParamLimits

0xdf48,	// (0x0003981e) list_double_heading_pane

0xdf48,	// (0x0003981e) list_double_large_graphic_pane_ParamLimits

0xdf48,	// (0x0003981e) list_double_large_graphic_pane

0xdf48,	// (0x0003981e) list_double_number_pane_ParamLimits

0xdf48,	// (0x0003981e) list_double_number_pane

0xdf48,	// (0x0003981e) list_double_pane_ParamLimits

0xdf48,	// (0x0003981e) list_double_pane

0xdf48,	// (0x0003981e) list_double_time_pane_ParamLimits

0xdf48,	// (0x0003981e) list_double_time_pane

0xdf48,	// (0x0003981e) list_setting_number_pane_ParamLimits

0xdf48,	// (0x0003981e) list_setting_number_pane

0xdf48,	// (0x0003981e) list_setting_pane_ParamLimits

0xdf48,	// (0x0003981e) list_setting_pane

0x8fa7,	// (0x0003487d) list_single_2graphic_pane_ParamLimits

0x8fa7,	// (0x0003487d) list_single_2graphic_pane

0x8fa7,	// (0x0003487d) list_single_graphic_heading_pane_ParamLimits

0x8fa7,	// (0x0003487d) list_single_graphic_heading_pane

0x8fa7,	// (0x0003487d) list_single_graphic_pane_ParamLimits

0x8fa7,	// (0x0003487d) list_single_graphic_pane

0x8fa7,	// (0x0003487d) list_single_heading_pane_ParamLimits

0x8fa7,	// (0x0003487d) list_single_heading_pane

0x8fbd,	// (0x00034893) list_single_large_graphic_pane_ParamLimits

0x8fbd,	// (0x00034893) list_single_large_graphic_pane

0x8fa7,	// (0x0003487d) list_single_number_heading_pane_ParamLimits

0x8fa7,	// (0x0003487d) list_single_number_heading_pane

0x8fa7,	// (0x0003487d) list_single_number_pane_ParamLimits

0x8fa7,	// (0x0003487d) list_single_number_pane

0x8fa7,	// (0x0003487d) list_single_pane_ParamLimits

0x8fa7,	// (0x0003487d) list_single_pane

0x741f,	// (0x00032cf5) list_highlight_pane_cp1

0x7bab,	// (0x00033481) list_single_pane_g1_ParamLimits

0x7bab,	// (0x00033481) list_single_pane_g1

0x7bb7,	// (0x0003348d) list_single_pane_g2_ParamLimits

0x7bb7,	// (0x0003348d) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0003ae83) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0003ae83) list_single_pane_g

0x6ca3,	// (0x00032579) list_single_pane_t1_ParamLimits

0x6ca3,	// (0x00032579) list_single_pane_t1

0x7bab,	// (0x00033481) list_single_number_pane_g1_ParamLimits

0x7bab,	// (0x00033481) list_single_number_pane_g1

0x7bb7,	// (0x0003348d) list_single_number_pane_g2_ParamLimits

0x7bb7,	// (0x0003348d) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0003ae83) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0003ae83) list_single_number_pane_g

0x6420,	// (0x00031cf6) list_single_number_pane_t1_ParamLimits

0x6420,	// (0x00031cf6) list_single_number_pane_t1

0x6c62,	// (0x00032538) list_single_number_pane_t2_ParamLimits

0x6c62,	// (0x00032538) list_single_number_pane_t2

0x0001,

0xf938,	// (0x0003b20e) list_single_number_pane_t_ParamLimits

0xf938,	// (0x0003b20e) list_single_number_pane_t

0x6414,	// (0x00031cea) list_single_graphic_pane_g1_ParamLimits

0x6414,	// (0x00031cea) list_single_graphic_pane_g1

0x7bab,	// (0x00033481) list_single_graphic_pane_g2_ParamLimits

0x7bab,	// (0x00033481) list_single_graphic_pane_g2

0x7bb7,	// (0x0003348d) list_single_graphic_pane_g3_ParamLimits

0x7bb7,	// (0x0003348d) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0003ae72) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0003ae72) list_single_graphic_pane_g

0x6420,	// (0x00031cf6) list_single_graphic_pane_t1_ParamLimits

0x6420,	// (0x00031cf6) list_single_graphic_pane_t1

0x6436,	// (0x00031d0c) list_single_heading_pane_g1_ParamLimits

0x6436,	// (0x00031d0c) list_single_heading_pane_g1

0x7bb7,	// (0x0003348d) list_single_heading_pane_g2_ParamLimits

0x7bb7,	// (0x0003348d) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003ae79) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003ae79) list_single_heading_pane_g

0x6449,	// (0x00031d1f) list_single_heading_pane_t1_ParamLimits

0x6449,	// (0x00031d1f) list_single_heading_pane_t1

0x7bc3,	// (0x00033499) list_single_heading_pane_t2_ParamLimits

0x7bc3,	// (0x00033499) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0003ae7e) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0003ae7e) list_single_heading_pane_t

0x7bab,	// (0x00033481) list_single_number_heading_pane_g1_ParamLimits

0x7bab,	// (0x00033481) list_single_number_heading_pane_g1

0x7bb7,	// (0x0003348d) list_single_number_heading_pane_g2_ParamLimits

0x7bb7,	// (0x0003348d) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0003ae83) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0003ae83) list_single_number_heading_pane_g

0x645f,	// (0x00031d35) list_single_number_heading_pane_t1_ParamLimits

0x645f,	// (0x00031d35) list_single_number_heading_pane_t1

0x6475,	// (0x00031d4b) list_single_number_heading_pane_t2_ParamLimits

0x6475,	// (0x00031d4b) list_single_number_heading_pane_t2

0x6487,	// (0x00031d5d) list_single_number_heading_pane_t3_ParamLimits

0x6487,	// (0x00031d5d) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0003ae88) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0003ae88) list_single_number_heading_pane_t

0x6499,	// (0x00031d6f) list_single_graphic_heading_pane_g1_ParamLimits

0x6499,	// (0x00031d6f) list_single_graphic_heading_pane_g1

0x7bd5,	// (0x000334ab) list_single_graphic_heading_pane_g4_ParamLimits

0x7bd5,	// (0x000334ab) list_single_graphic_heading_pane_g4

0x7bb7,	// (0x0003348d) list_single_graphic_heading_pane_g5_ParamLimits

0x7bb7,	// (0x0003348d) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0003ae8f) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0003ae8f) list_single_graphic_heading_pane_g

0x645f,	// (0x00031d35) list_single_graphic_heading_pane_t1_ParamLimits

0x645f,	// (0x00031d35) list_single_graphic_heading_pane_t1

0x64ad,	// (0x00031d83) list_single_graphic_heading_pane_t2_ParamLimits

0x64ad,	// (0x00031d83) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0003ae96) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0003ae96) list_single_graphic_heading_pane_t

0x7be4,	// (0x000334ba) list_single_large_graphic_pane_g1_ParamLimits

0x7be4,	// (0x000334ba) list_single_large_graphic_pane_g1

0x7bf0,	// (0x000334c6) list_single_large_graphic_pane_g2_ParamLimits

0x7bf0,	// (0x000334c6) list_single_large_graphic_pane_g2

0x7bfc,	// (0x000334d2) list_single_large_graphic_pane_g3_ParamLimits

0x7bfc,	// (0x000334d2) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0003ae9b) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0003ae9b) list_single_large_graphic_pane_g

0xafdf,	// (0x000368b5) wait_border_pane_g2_copy1

0x7c08,	// (0x000334de) list_single_large_graphic_pane_g4_cp2

0x64c5,	// (0x00031d9b) list_single_large_graphic_pane_t1_ParamLimits

0x64c5,	// (0x00031d9b) list_single_large_graphic_pane_t1

0x7c10,	// (0x000334e6) list_double_pane_g1_ParamLimits

0x7c10,	// (0x000334e6) list_double_pane_g1

0x7c1c,	// (0x000334f2) list_double_pane_g2_ParamLimits

0x7c1c,	// (0x000334f2) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0003aea2) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0003aea2) list_double_pane_g

0x64db,	// (0x00031db1) list_double_pane_t1_ParamLimits

0x64db,	// (0x00031db1) list_double_pane_t1

0x64f1,	// (0x00031dc7) list_double_pane_t2_ParamLimits

0x64f1,	// (0x00031dc7) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0003aea7) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0003aea7) list_double_pane_t

0x6503,	// (0x00031dd9) list_double2_pane_g1_ParamLimits

0x6503,	// (0x00031dd9) list_double2_pane_g1

0x6512,	// (0x00031de8) list_double2_pane_g2_ParamLimits

0x6512,	// (0x00031de8) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0003aeac) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0003aeac) list_double2_pane_g

0x651e,	// (0x00031df4) list_double2_pane_t1_ParamLimits

0x651e,	// (0x00031df4) list_double2_pane_t1

0x6534,	// (0x00031e0a) list_double2_pane_t2_ParamLimits

0x6534,	// (0x00031e0a) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0003aeb1) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0003aeb1) list_double2_pane_t

0x7c10,	// (0x000334e6) list_double_number_pane_g1_ParamLimits

0x7c10,	// (0x000334e6) list_double_number_pane_g1

0x7c1c,	// (0x000334f2) list_double_number_pane_g2_ParamLimits

0x7c1c,	// (0x000334f2) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0003aea2) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0003aea2) list_double_number_pane_g

0x6546,	// (0x00031e1c) list_double_number_pane_t1_ParamLimits

0x6546,	// (0x00031e1c) list_double_number_pane_t1

0x6558,	// (0x00031e2e) list_double_number_pane_t2_ParamLimits

0x6558,	// (0x00031e2e) list_double_number_pane_t2

0x656e,	// (0x00031e44) list_double_number_pane_t3_ParamLimits

0x656e,	// (0x00031e44) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0003aeb6) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0003aeb6) list_double_number_pane_t

0x6580,	// (0x00031e56) list_double_graphic_pane_g1_ParamLimits

0x6580,	// (0x00031e56) list_double_graphic_pane_g1

0x658c,	// (0x00031e62) list_double_graphic_pane_g2_ParamLimits

0x658c,	// (0x00031e62) list_double_graphic_pane_g2

0x659b,	// (0x00031e71) list_double_graphic_pane_g3_ParamLimits

0x659b,	// (0x00031e71) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0003aebd) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0003aebd) list_double_graphic_pane_g

0x65a7,	// (0x00031e7d) list_double_graphic_pane_t1_ParamLimits

0x65a7,	// (0x00031e7d) list_double_graphic_pane_t1

0x65bd,	// (0x00031e93) list_double_graphic_pane_t2_ParamLimits

0x65bd,	// (0x00031e93) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0003aec6) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0003aec6) list_double_graphic_pane_t

0x65cf,	// (0x00031ea5) list_double2_graphic_pane_g1_ParamLimits

0x65cf,	// (0x00031ea5) list_double2_graphic_pane_g1

0x7c34,	// (0x0003350a) list_double2_graphic_pane_g2_ParamLimits

0x7c34,	// (0x0003350a) list_double2_graphic_pane_g2

0x7c40,	// (0x00033516) list_double2_graphic_pane_g3_ParamLimits

0x7c40,	// (0x00033516) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0003aecb) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0003aecb) list_double2_graphic_pane_g

0x65db,	// (0x00031eb1) list_double2_graphic_pane_t1_ParamLimits

0x65db,	// (0x00031eb1) list_double2_graphic_pane_t1

0x65f1,	// (0x00031ec7) list_double2_graphic_pane_t2_ParamLimits

0x65f1,	// (0x00031ec7) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0003aed2) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0003aed2) list_double2_graphic_pane_t

0x6603,	// (0x00031ed9) list_double_large_graphic_pane_g1_ParamLimits

0x6603,	// (0x00031ed9) list_double_large_graphic_pane_g1

0x662c,	// (0x00031f02) list_double_large_graphic_pane_g2_ParamLimits

0x662c,	// (0x00031f02) list_double_large_graphic_pane_g2

0x7c1c,	// (0x000334f2) list_double_large_graphic_pane_g3_ParamLimits

0x7c1c,	// (0x000334f2) list_double_large_graphic_pane_g3

0x6640,	// (0x00031f16) list_double_large_graphic_pane_g4_ParamLimits

0x6640,	// (0x00031f16) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0003aed7) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0003aed7) list_double_large_graphic_pane_g

0x6651,	// (0x00031f27) list_double_large_graphic_pane_t1_ParamLimits

0x6651,	// (0x00031f27) list_double_large_graphic_pane_t1

0x666a,	// (0x00031f40) list_double_large_graphic_pane_t2_ParamLimits

0x666a,	// (0x00031f40) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0003aee2) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0003aee2) list_double_large_graphic_pane_t

0x7c61,	// (0x00033537) list_double2_large_graphic_pane_g1_ParamLimits

0x7c61,	// (0x00033537) list_double2_large_graphic_pane_g1

0x667c,	// (0x00031f52) list_double2_large_graphic_pane_g2_ParamLimits

0x667c,	// (0x00031f52) list_double2_large_graphic_pane_g2

0x7c40,	// (0x00033516) list_double2_large_graphic_pane_g3_ParamLimits

0x7c40,	// (0x00033516) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0003aee7) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0003aee7) list_double2_large_graphic_pane_g

0x668b,	// (0x00031f61) list_double2_large_graphic_pane_t1_ParamLimits

0x668b,	// (0x00031f61) list_double2_large_graphic_pane_t1

0x66a1,	// (0x00031f77) list_double2_large_graphic_pane_t2_ParamLimits

0x66a1,	// (0x00031f77) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0003aeee) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0003aeee) list_double2_large_graphic_pane_t

0x66b3,	// (0x00031f89) list_double_heading_pane_g1_ParamLimits

0x66b3,	// (0x00031f89) list_double_heading_pane_g1

0x66c2,	// (0x00031f98) list_double_heading_pane_g2_ParamLimits

0x66c2,	// (0x00031f98) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0003aef3) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0003aef3) list_double_heading_pane_g

0x66ce,	// (0x00031fa4) list_double_heading_pane_t1_ParamLimits

0x66ce,	// (0x00031fa4) list_double_heading_pane_t1

0x6534,	// (0x00031e0a) list_double_heading_pane_t2_ParamLimits

0x6534,	// (0x00031e0a) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0003aef8) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0003aef8) list_double_heading_pane_t

0x66e4,	// (0x00031fba) list_double_graphic_heading_pane_g1_ParamLimits

0x66e4,	// (0x00031fba) list_double_graphic_heading_pane_g1

0x66b3,	// (0x00031f89) list_double_graphic_heading_pane_g2_ParamLimits

0x66b3,	// (0x00031f89) list_double_graphic_heading_pane_g2

0x66c2,	// (0x00031f98) list_double_graphic_heading_pane_g3_ParamLimits

0x66c2,	// (0x00031f98) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0003aefd) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0003aefd) list_double_graphic_heading_pane_g

0x66f0,	// (0x00031fc6) list_double_graphic_heading_pane_t1_ParamLimits

0x66f0,	// (0x00031fc6) list_double_graphic_heading_pane_t1

0x65f1,	// (0x00031ec7) list_double_graphic_heading_pane_t2_ParamLimits

0x65f1,	// (0x00031ec7) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0003af04) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0003af04) list_double_graphic_heading_pane_t

0x6706,	// (0x00031fdc) list_double_time_pane_g1_ParamLimits

0x6706,	// (0x00031fdc) list_double_time_pane_g1

0x6715,	// (0x00031feb) list_double_time_pane_g2_ParamLimits

0x6715,	// (0x00031feb) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0003af09) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0003af09) list_double_time_pane_g

0x6721,	// (0x00031ff7) list_double_time_pane_t1_ParamLimits

0x6721,	// (0x00031ff7) list_double_time_pane_t1

0x6737,	// (0x0003200d) list_double_time_pane_t2_ParamLimits

0x6737,	// (0x0003200d) list_double_time_pane_t2

0x6749,	// (0x0003201f) list_double_time_pane_t3_ParamLimits

0x6749,	// (0x0003201f) list_double_time_pane_t3

0x675b,	// (0x00032031) list_double_time_pane_t4_ParamLimits

0x675b,	// (0x00032031) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0003af0e) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0003af0e) list_double_time_pane_t

0x676d,	// (0x00032043) list_setting_pane_g1_ParamLimits

0x676d,	// (0x00032043) list_setting_pane_g1

0x6779,	// (0x0003204f) list_setting_pane_g2_ParamLimits

0x6779,	// (0x0003204f) list_setting_pane_g2

0x0001,

0xf641,	// (0x0003af17) list_setting_pane_g_ParamLimits

0xf641,	// (0x0003af17) list_setting_pane_g

0x6785,	// (0x0003205b) list_setting_pane_t1_ParamLimits

0x6785,	// (0x0003205b) list_setting_pane_t1

0x679f,	// (0x00032075) list_setting_pane_t2_ParamLimits

0x679f,	// (0x00032075) list_setting_pane_t2

0x0002,

0xf646,	// (0x0003af1c) list_setting_pane_t_ParamLimits

0xf646,	// (0x0003af1c) list_setting_pane_t

0x67dc,	// (0x000320b2) set_value_pane_cp_ParamLimits

0x67dc,	// (0x000320b2) set_value_pane_cp

0x67e8,	// (0x000320be) list_setting_number_pane_g1_ParamLimits

0x67e8,	// (0x000320be) list_setting_number_pane_g1

0x67f4,	// (0x000320ca) list_setting_number_pane_g2_ParamLimits

0x67f4,	// (0x000320ca) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0003af23) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0003af23) list_setting_number_pane_g

0x6800,	// (0x000320d6) list_setting_number_pane_t1_ParamLimits

0x6800,	// (0x000320d6) list_setting_number_pane_t1

0x6817,	// (0x000320ed) list_setting_number_pane_t2_ParamLimits

0x6817,	// (0x000320ed) list_setting_number_pane_t2

0x6831,	// (0x00032107) list_setting_number_pane_t3_ParamLimits

0x6831,	// (0x00032107) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0003af28) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0003af28) list_setting_number_pane_t

0x67dc,	// (0x000320b2) set_value_pane_ParamLimits

0x67dc,	// (0x000320b2) set_value_pane

0x7c6d,	// (0x00033543) bg_set_opt_pane_ParamLimits

0x7c6d,	// (0x00033543) bg_set_opt_pane

0x6872,	// (0x00032148) set_value_pane_t1

0x7c8e,	// (0x00033564) slider_set_pane_cp3

0x7c97,	// (0x0003356d) volume_small_pane_cp

0x7ca0,	// (0x00033576) list_form_gen_pane

0x7b9a,	// (0x00033470) scroll_pane_cp8

0x6890,	// (0x00032166) form_field_data_pane_ParamLimits

0x6890,	// (0x00032166) form_field_data_pane

0x68b0,	// (0x00032186) form_field_data_wide_pane_ParamLimits

0x68b0,	// (0x00032186) form_field_data_wide_pane

0x68cf,	// (0x000321a5) form_field_popup_pane_ParamLimits

0x68cf,	// (0x000321a5) form_field_popup_pane

0x68e7,	// (0x000321bd) form_field_popup_wide_pane_ParamLimits

0x68e7,	// (0x000321bd) form_field_popup_wide_pane

0x68fe,	// (0x000321d4) form_field_slider_pane_ParamLimits

0x68fe,	// (0x000321d4) form_field_slider_pane

0x6911,	// (0x000321e7) form_field_slider_wide_pane_ParamLimits

0x6911,	// (0x000321e7) form_field_slider_wide_pane

0x7ca9,	// (0x0003357f) data_form_pane

0x692c,	// (0x00032202) form_field_data_pane_t1

0x7cb5,	// (0x0003358b) input_focus_pane

0x7cc3,	// (0x00033599) data_form_wide_pane

0x6950,	// (0x00032226) form_field_data_wide_pane_t1

0x7a19,	// (0x000332ef) input_focus_pane_cp6

0x6972,	// (0x00032248) form_field_popup_pane_t1

0x7cb5,	// (0x0003358b) input_focus_pane_cp7

0x7ca9,	// (0x0003357f) list_form_pane

0x6992,	// (0x00032268) form_field_popup_wide_pane_t1

0x7cb5,	// (0x0003358b) input_focus_pane_cp8

0x7ce3,	// (0x000335b9) list_form_wide_pane

0x69af,	// (0x00032285) form_field_slider_pane_t1_ParamLimits

0x69af,	// (0x00032285) form_field_slider_pane_t1

0x69c5,	// (0x0003229b) form_field_slider_pane_t2_ParamLimits

0x69c5,	// (0x0003229b) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0003af38) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0003af38) form_field_slider_pane_t

0x7778,	// (0x0003304e) input_focus_pane_cp9_ParamLimits

0x7778,	// (0x0003304e) input_focus_pane_cp9

0x69da,	// (0x000322b0) slider_cont_pane_ParamLimits

0x69da,	// (0x000322b0) slider_cont_pane

0x7cf2,	// (0x000335c8) form_field_slider_wide_pane_t1_ParamLimits

0x7cf2,	// (0x000335c8) form_field_slider_wide_pane_t1

0x69ee,	// (0x000322c4) form_field_slider_wide_pane_t2_ParamLimits

0x69ee,	// (0x000322c4) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0003af3d) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0003af3d) form_field_slider_wide_pane_t

0x7778,	// (0x0003304e) input_focus_pane_cp10_ParamLimits

0x7778,	// (0x0003304e) input_focus_pane_cp10

0x6a00,	// (0x000322d6) slider_cont_pane_cp1_ParamLimits

0x6a00,	// (0x000322d6) slider_cont_pane_cp1

0x6a16,	// (0x000322ec) slider_form_pane_cp

0x7d04,	// (0x000335da) input_focus_pane_g1

0x7d0c,	// (0x000335e2) input_focus_pane_g2

0x7d14,	// (0x000335ea) input_focus_pane_g3

0x7d1c,	// (0x000335f2) input_focus_pane_g4

0x7d24,	// (0x000335fa) input_focus_pane_g5

0x7d2c,	// (0x00033602) input_focus_pane_g6

0x7d34,	// (0x0003360a) input_focus_pane_g7

0x7d3c,	// (0x00033612) input_focus_pane_g8

0x7d44,	// (0x0003361a) input_focus_pane_g9

0x7260,	// (0x00032b36) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0003af42) input_focus_pane_g

0xafe8,	// (0x000368be) wait_border_pane_g3_copy1

0x6a1e,	// (0x000322f4) data_form_pane_t1

0x7260,	// (0x00032b36) wait_anim_pane_g1_copy1

0x6c74,	// (0x0003254a) data_form_wide_pane_t1

0x6a38,	// (0x0003230e) list_form_graphic_pane_cp_ParamLimits

0x6a38,	// (0x0003230e) list_form_graphic_pane_cp

0xbbd4,	// (0x000374aa) slider_form_pane_g1

0xbbdd,	// (0x000374b3) slider_form_pane_g2

0x0006,

0xf968,	// (0x0003b23e) slider_form_pane_g

0x6a4c,	// (0x00032322) list_form_graphic_pane_ParamLimits

0x6a4c,	// (0x00032322) list_form_graphic_pane

0x6a62,	// (0x00032338) list_form_graphic_pane_g1

0x6a6a,	// (0x00032340) list_form_graphic_pane_t1_ParamLimits

0x6a6a,	// (0x00032340) list_form_graphic_pane_t1

0x75b3,	// (0x00032e89) list_highlight_pane_cp5_ParamLimits

0x75b3,	// (0x00032e89) list_highlight_pane_cp5

0x6a7f,	// (0x00032355) find_pane_g1

0x7d4c,	// (0x00033622) input_find_pane

0x6a88,	// (0x0003235e) input_find_pane_g1_ParamLimits

0x6a88,	// (0x0003235e) input_find_pane_g1

0x6a94,	// (0x0003236a) input_find_pane_t1_ParamLimits

0x6a94,	// (0x0003236a) input_find_pane_t1

0x6aa9,	// (0x0003237f) input_find_pane_t2_ParamLimits

0x6aa9,	// (0x0003237f) input_find_pane_t2

0x0001,

0xf681,	// (0x0003af57) input_find_pane_t_ParamLimits

0xf681,	// (0x0003af57) input_find_pane_t

0x7d55,	// (0x0003362b) input_focus_pane_cp5_ParamLimits

0x7d55,	// (0x0003362b) input_focus_pane_cp5

0x7778,	// (0x0003304e) bg_popup_window_pane_cp2_ParamLimits

0x7778,	// (0x0003304e) bg_popup_window_pane_cp2

0x7d74,	// (0x0003364a) listscroll_menu_pane_ParamLimits

0x7d74,	// (0x0003364a) listscroll_menu_pane

0x7d80,	// (0x00033656) popup_submenu_window_ParamLimits

0x7d80,	// (0x00033656) popup_submenu_window

0x7da4,	// (0x0003367a) find_popup_pane_g1

0x7dac,	// (0x00033682) input_popup_find_pane_cp

0x7db6,	// (0x0003368c) input_focus_pane_cp4_ParamLimits

0x7db6,	// (0x0003368c) input_focus_pane_cp4

0x7dc4,	// (0x0003369a) input_popup_find_pane_t1_ParamLimits

0x7dc4,	// (0x0003369a) input_popup_find_pane_t1

0x741f,	// (0x00032cf5) bg_popup_sub_pane_cp

0x7df2,	// (0x000336c8) listscroll_popup_sub_pane

0x7dfa,	// (0x000336d0) list_submenu_pane_ParamLimits

0x7dfa,	// (0x000336d0) list_submenu_pane

0x7e0b,	// (0x000336e1) scroll_pane_cp4

0x7e13,	// (0x000336e9) list_single_popup_submenu_pane_ParamLimits

0x7e13,	// (0x000336e9) list_single_popup_submenu_pane

0x7e25,	// (0x000336fb) list_single_popup_submenu_pane_g1

0x7e2d,	// (0x00033703) list_single_popup_submenu_pane_t1_ParamLimits

0x7e2d,	// (0x00033703) list_single_popup_submenu_pane_t1

0x75b3,	// (0x00032e89) bg_active_tab_pane_cp1_ParamLimits

0x75b3,	// (0x00032e89) bg_active_tab_pane_cp1

0xd5d5,	// (0x00038eab) tabs_2_active_pane_g1

0xd5dd,	// (0x00038eb3) tabs_2_active_pane_t1

0x75b3,	// (0x00032e89) bg_passive_tab_pane_cp1_ParamLimits

0x75b3,	// (0x00032e89) bg_passive_tab_pane_cp1

0xd5d5,	// (0x00038eab) tabs_2_passive_pane_g1

0xd5dd,	// (0x00038eb3) tabs_2_passive_pane_t1

0xd5ef,	// (0x00038ec5) bg_active_tab_pane_cp4

0xd5fd,	// (0x00038ed3) tabs_2_long_active_pane_t1

0xd610,	// (0x00038ee6) bg_passive_tab_pane_cp4

0xaac8,	// (0x0003639e) list_single_midp_graphic_pane_g4_ParamLimits

0xd5ef,	// (0x00038ec5) bg_active_tab_pane_cp5

0xd61c,	// (0x00038ef2) tabs_3_long_active_pane_t1

0xd610,	// (0x00038ee6) bg_passive_tab_pane_cp5

0xaac8,	// (0x0003639e) list_single_midp_graphic_pane_g4

0x75b3,	// (0x00032e89) bg_popup_window_pane_cp13_ParamLimits

0x75b3,	// (0x00032e89) bg_popup_window_pane_cp13

0x7e4b,	// (0x00033721) listscroll_popup_fast_pane_ParamLimits

0x7e4b,	// (0x00033721) listscroll_popup_fast_pane

0x7e5a,	// (0x00033730) grid_popup_fast_pane_ParamLimits

0x7e5a,	// (0x00033730) grid_popup_fast_pane

0x7e6c,	// (0x00033742) scroll_pane_cp9_ParamLimits

0x7e6c,	// (0x00033742) scroll_pane_cp9

0xcedc,	// (0x000387b2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcedc,	// (0x000387b2) list_single_graphic_hl_pane_t1_cp2

0x7e90,	// (0x00033766) input_focus_pane_cp20_ParamLimits

0x7e90,	// (0x00033766) input_focus_pane_cp20

0x7e9e,	// (0x00033774) query_popup_data_pane_t1_ParamLimits

0x7e9e,	// (0x00033774) query_popup_data_pane_t1

0x7eb1,	// (0x00033787) query_popup_data_pane_t2_ParamLimits

0x7eb1,	// (0x00033787) query_popup_data_pane_t2

0x7ef7,	// (0x000337cd) query_popup_data_pane_t3_ParamLimits

0x7ef7,	// (0x000337cd) query_popup_data_pane_t3

0x7f38,	// (0x0003380e) query_popup_data_pane_t4_ParamLimits

0x7f38,	// (0x0003380e) query_popup_data_pane_t4

0x7f74,	// (0x0003384a) query_popup_data_pane_t5_ParamLimits

0x7f74,	// (0x0003384a) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0003af5c) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0003af5c) query_popup_data_pane_t

0x7d04,	// (0x000335da) bg_set_opt_pane_g1

0x7d0c,	// (0x000335e2) bg_set_opt_pane_g2

0x7d14,	// (0x000335ea) bg_set_opt_pane_g3

0x7d1c,	// (0x000335f2) bg_set_opt_pane_g4

0x7d24,	// (0x000335fa) bg_set_opt_pane_g5

0x7d2c,	// (0x00033602) bg_set_opt_pane_g6

0x7d34,	// (0x0003360a) bg_set_opt_pane_g7

0x7d3c,	// (0x00033612) bg_set_opt_pane_g8

0x7d44,	// (0x0003361a) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0003af67) bg_set_opt_pane_g

0x8441,	// (0x00033d17) control_top_pane_stacon_ParamLimits

0x8441,	// (0x00033d17) control_top_pane_stacon

0x8494,	// (0x00033d6a) signal_pane_stacon_ParamLimits

0x8494,	// (0x00033d6a) signal_pane_stacon

0xa407,	// (0x00035cdd) stacon_top_pane_g1_ParamLimits

0xa407,	// (0x00035cdd) stacon_top_pane_g1

0x84b9,	// (0x00033d8f) title_pane_stacon_ParamLimits

0x84b9,	// (0x00033d8f) title_pane_stacon

0x84db,	// (0x00033db1) uni_indicator_pane_stacon_ParamLimits

0x84db,	// (0x00033db1) uni_indicator_pane_stacon

0x84f0,	// (0x00033dc6) battery_pane_stacon_ParamLimits

0x84f0,	// (0x00033dc6) battery_pane_stacon

0x8530,	// (0x00033e06) control_bottom_pane_stacon_ParamLimits

0x8530,	// (0x00033e06) control_bottom_pane_stacon

0x854f,	// (0x00033e25) navi_pane_stacon_ParamLimits

0x854f,	// (0x00033e25) navi_pane_stacon

0xa429,	// (0x00035cff) stacon_bottom_pane_g1_ParamLimits

0xa429,	// (0x00035cff) stacon_bottom_pane_g1

0x7fab,	// (0x00033881) aid_levels_signal_lsc_ParamLimits

0x7fab,	// (0x00033881) aid_levels_signal_lsc

0x7fb8,	// (0x0003388e) signal_pane_stacon_g1_ParamLimits

0x7fb8,	// (0x0003388e) signal_pane_stacon_g1

0x7fc4,	// (0x0003389a) signal_pane_stacon_g2_ParamLimits

0x7fc4,	// (0x0003389a) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0003af7a) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0003af7a) signal_pane_stacon_g

0x8005,	// (0x000338db) title_pane_stacon_t1_ParamLimits

0x8005,	// (0x000338db) title_pane_stacon_t1

0x802a,	// (0x00033900) uni_indicator_pane_stacon_g1

0x8034,	// (0x0003390a) uni_indicator_pane_stacon_g2

0x803e,	// (0x00033914) uni_indicator_pane_stacon_g3

0x8048,	// (0x0003391e) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0003af86) uni_indicator_pane_stacon_g

0x8052,	// (0x00033928) control_top_pane_stacon_g1

0x805a,	// (0x00033930) control_top_pane_stacon_t1_ParamLimits

0x805a,	// (0x00033930) control_top_pane_stacon_t1

0x808b,	// (0x00033961) aid_levels_battery_lsc_ParamLimits

0x808b,	// (0x00033961) aid_levels_battery_lsc

0x8099,	// (0x0003396f) battery_pane_stacon_g1_ParamLimits

0x8099,	// (0x0003396f) battery_pane_stacon_g1

0x80a5,	// (0x0003397b) battery_pane_stacon_g2_ParamLimits

0x80a5,	// (0x0003397b) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0003af8f) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0003af8f) battery_pane_stacon_g

0x80d4,	// (0x000339aa) navi_icon_pane_stacon

0x80e4,	// (0x000339ba) navi_navi_pane_stacon

0x80d4,	// (0x000339aa) navi_text_pane_stacon

0x8052,	// (0x00033928) control_bottom_pane_stacon_g1

0x80f4,	// (0x000339ca) control_bottom_pane_stacon_t1_ParamLimits

0x80f4,	// (0x000339ca) control_bottom_pane_stacon_t1

0xd62e,	// (0x00038f04) grid_app_pane_ParamLimits

0xd62e,	// (0x00038f04) grid_app_pane

0xd64a,	// (0x00038f20) scroll_pane_cp15_ParamLimits

0xd64a,	// (0x00038f20) scroll_pane_cp15

0xd65b,	// (0x00038f31) cell_app_pane_ParamLimits

0xd65b,	// (0x00038f31) cell_app_pane

0xd67f,	// (0x00038f55) cell_app_pane_g1_ParamLimits

0xd67f,	// (0x00038f55) cell_app_pane_g1

0x813f,	// (0x00033a15) cell_app_pane_g2_ParamLimits

0x813f,	// (0x00033a15) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0003af94) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0003af94) cell_app_pane_g

0xd6a3,	// (0x00038f79) cell_app_pane_t1_ParamLimits

0xd6a3,	// (0x00038f79) cell_app_pane_t1

0x814b,	// (0x00033a21) grid_highlight_pane_ParamLimits

0x814b,	// (0x00033a21) grid_highlight_pane

0x7d04,	// (0x000335da) cell_highlight_pane_g1

0x7d0c,	// (0x000335e2) cell_highlight_pane_g2

0x7d14,	// (0x000335ea) cell_highlight_pane_g3

0x7d1c,	// (0x000335f2) cell_highlight_pane_g4

0x7d24,	// (0x000335fa) cell_highlight_pane_g5

0x7d2c,	// (0x00033602) cell_highlight_pane_g6

0x7d34,	// (0x0003360a) cell_highlight_pane_g7

0x7d3c,	// (0x00033612) cell_highlight_pane_g8

0x7d44,	// (0x0003361a) cell_highlight_pane_g9

0x7260,	// (0x00032b36) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0003af42) cell_highlight_pane_g

0x816f,	// (0x00033a45) bg_scroll_pane

0x818e,	// (0x00033a64) scroll_handle_pane

0x81df,	// (0x00033ab5) scroll_bg_pane_g1

0x81f4,	// (0x00033aca) scroll_bg_pane_g2

0x820c,	// (0x00033ae2) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0003af99) scroll_bg_pane_g

0x8221,	// (0x00033af7) scroll_handle_focus_pane_ParamLimits

0x8221,	// (0x00033af7) scroll_handle_focus_pane

0x81df,	// (0x00033ab5) scroll_handle_pane_g1

0x822e,	// (0x00033b04) scroll_handle_pane_g2

0x820c,	// (0x00033ae2) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0003afa0) scroll_handle_pane_g

0x7db6,	// (0x0003368c) bg_popup_sub_pane_cp21_ParamLimits

0x7db6,	// (0x0003368c) bg_popup_sub_pane_cp21

0x8242,	// (0x00033b18) popup_fep_japan_predictive_window_t1_ParamLimits

0x8242,	// (0x00033b18) popup_fep_japan_predictive_window_t1

0x8259,	// (0x00033b2f) popup_fep_japan_predictive_window_t2_ParamLimits

0x8259,	// (0x00033b2f) popup_fep_japan_predictive_window_t2

0x828c,	// (0x00033b62) popup_fep_japan_predictive_window_t3_ParamLimits

0x828c,	// (0x00033b62) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0003afa7) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0003afa7) popup_fep_japan_predictive_window_t

0x741f,	// (0x00032cf5) bg_popup_sub_pane_cp23

0x82c3,	// (0x00033b99) listscroll_japin_cand_pane

0x82cb,	// (0x00033ba1) popup_fep_japan_candidate_window_t1

0x82d9,	// (0x00033baf) candidate_pane_ParamLimits

0x82d9,	// (0x00033baf) candidate_pane

0x82ec,	// (0x00033bc2) scroll_pane_cp30

0x82f4,	// (0x00033bca) list_single_popup_jap_candidate_pane_ParamLimits

0x82f4,	// (0x00033bca) list_single_popup_jap_candidate_pane

0x741f,	// (0x00032cf5) list_highlight_pane_cp30

0x8309,	// (0x00033bdf) list_single_popup_jap_candidate_pane_t1

0xd6ba,	// (0x00038f90) level_1_signal

0xd6c7,	// (0x00038f9d) level_2_signal

0xd6d4,	// (0x00038faa) level_3_signal

0xd6e1,	// (0x00038fb7) level_4_signal

0xd6ee,	// (0x00038fc4) level_5_signal

0xd6fb,	// (0x00038fd1) level_6_signal

0xd708,	// (0x00038fde) level_7_signal

0xd6ba,	// (0x00038f90) level_1_battery

0xd6c7,	// (0x00038f9d) level_2_battery

0xd6d4,	// (0x00038faa) level_3_battery

0xd6e1,	// (0x00038fb7) level_4_battery

0xd6ee,	// (0x00038fc4) level_5_battery

0xd6fb,	// (0x00038fd1) level_6_battery

0xd708,	// (0x00038fde) level_7_battery

0x834f,	// (0x00033c25) list_menu_pane_ParamLimits

0x834f,	// (0x00033c25) list_menu_pane

0x8365,	// (0x00033c3b) scroll_pane_cp25_ParamLimits

0x8365,	// (0x00033c3b) scroll_pane_cp25

0xd715,	// (0x00038feb) list_double2_graphic_pane_cp2_ParamLimits

0xd715,	// (0x00038feb) list_double2_graphic_pane_cp2

0xd715,	// (0x00038feb) list_double2_large_graphic_pane_cp2_ParamLimits

0xd715,	// (0x00038feb) list_double2_large_graphic_pane_cp2

0xd715,	// (0x00038feb) list_double2_pane_cp2_ParamLimits

0xd715,	// (0x00038feb) list_double2_pane_cp2

0xd715,	// (0x00038feb) list_double_graphic_pane_cp2_ParamLimits

0xd715,	// (0x00038feb) list_double_graphic_pane_cp2

0xd715,	// (0x00038feb) list_double_large_graphic_pane_cp2_ParamLimits

0xd715,	// (0x00038feb) list_double_large_graphic_pane_cp2

0xd715,	// (0x00038feb) list_double_number_pane_cp2_ParamLimits

0xd715,	// (0x00038feb) list_double_number_pane_cp2

0xd715,	// (0x00038feb) list_double_pane_cp2_ParamLimits

0xd715,	// (0x00038feb) list_double_pane_cp2

0xd725,	// (0x00038ffb) list_single_2graphic_pane_cp2_ParamLimits

0xd725,	// (0x00038ffb) list_single_2graphic_pane_cp2

0xd725,	// (0x00038ffb) list_single_graphic_heading_pane_cp2_ParamLimits

0xd725,	// (0x00038ffb) list_single_graphic_heading_pane_cp2

0xd725,	// (0x00038ffb) list_single_graphic_pane_cp2_ParamLimits

0xd725,	// (0x00038ffb) list_single_graphic_pane_cp2

0xd725,	// (0x00038ffb) list_single_heading_pane_cp2_ParamLimits

0xd725,	// (0x00038ffb) list_single_heading_pane_cp2

0xd73a,	// (0x00039010) list_single_large_graphic_pane_cp2_ParamLimits

0xd73a,	// (0x00039010) list_single_large_graphic_pane_cp2

0xd725,	// (0x00038ffb) list_single_number_heading_pane_cp2_ParamLimits

0xd725,	// (0x00038ffb) list_single_number_heading_pane_cp2

0xd725,	// (0x00038ffb) list_single_number_pane_cp2_ParamLimits

0xd725,	// (0x00038ffb) list_single_number_pane_cp2

0xd725,	// (0x00038ffb) list_single_pane_cp2_ParamLimits

0xd725,	// (0x00038ffb) list_single_pane_cp2

0xa2a2,	// (0x00035b78) bg_popup_sub_pane_cp22

0x83dd,	// (0x00033cb3) popup_side_volume_key_window_g1

0x8401,	// (0x00033cd7) popup_side_volume_key_window_t1

0x841d,	// (0x00033cf3) volume_small_pane_cp1

0x7778,	// (0x0003304e) bg_popup_sub_pane_cp24_ParamLimits

0x7778,	// (0x0003304e) bg_popup_sub_pane_cp24

0xa2b8,	// (0x00035b8e) fep_china_uni_candidate_pane_ParamLimits

0xa2b8,	// (0x00035b8e) fep_china_uni_candidate_pane

0xa2cc,	// (0x00035ba2) fep_china_uni_entry_pane

0xa2dc,	// (0x00035bb2) popup_fep_china_uni_window_g1

0xa2f8,	// (0x00035bce) fep_china_uni_entry_pane_g1

0xa300,	// (0x00035bd6) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0003afd8) fep_china_uni_entry_pane_g

0xa308,	// (0x00035bde) fep_entry_item_pane

0xa312,	// (0x00035be8) fep_candidate_item_pane

0xa31a,	// (0x00035bf0) fep_china_uni_candidate_pane_g1

0xa322,	// (0x00035bf8) fep_china_uni_candidate_pane_g2

0xa32a,	// (0x00035c00) fep_china_uni_candidate_pane_g3

0xa332,	// (0x00035c08) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0003afdd) fep_china_uni_candidate_pane_g

0x7260,	// (0x00032b36) fep_entry_item_pane_g1

0xa33a,	// (0x00035c10) fep_entry_item_pane_t1_ParamLimits

0xa33a,	// (0x00035c10) fep_entry_item_pane_t1

0xa350,	// (0x00035c26) fep_candidate_item_pane_t1_ParamLimits

0xa350,	// (0x00035c26) fep_candidate_item_pane_t1

0xa365,	// (0x00035c3b) fep_candidate_item_pane_t2_ParamLimits

0xa365,	// (0x00035c3b) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0003afe6) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0003afe6) fep_candidate_item_pane_t

0x75b3,	// (0x00032e89) list_highlight_pane_cp31_ParamLimits

0x75b3,	// (0x00032e89) list_highlight_pane_cp31

0xa377,	// (0x00035c4d) level_1_signal_lsc

0xa380,	// (0x00035c56) level_2_signal_lsc

0xa389,	// (0x00035c5f) level_3_signal_lsc

0xa392,	// (0x00035c68) level_4_signal_lsc

0xa39b,	// (0x00035c71) level_5_signal_lsc

0xa3a4,	// (0x00035c7a) level_6_signal_lsc

0xa3ad,	// (0x00035c83) level_7_signal_lsc

0xa3ad,	// (0x00035c83) level_1_battery_lsc

0xa3b6,	// (0x00035c8c) level_2_battery_lsc

0xa3bf,	// (0x00035c95) level_3_battery_lsc

0xa3c8,	// (0x00035c9e) level_4_battery_lsc

0xa3d1,	// (0x00035ca7) level_5_battery_lsc

0xa3da,	// (0x00035cb0) level_6_battery_lsc

0xa377,	// (0x00035c4d) level_7_battery_lsc

0xa3e3,	// (0x00035cb9) scroll_handle_focus_pane_g1

0xa3ec,	// (0x00035cc2) scroll_handle_focus_pane_g2

0xa3f5,	// (0x00035ccb) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0003afeb) scroll_handle_focus_pane_g

0x6abe,	// (0x00032394) list_single_2graphic_pane_g1_ParamLimits

0x6abe,	// (0x00032394) list_single_2graphic_pane_g1

0x7bd5,	// (0x000334ab) list_single_2graphic_pane_g2_ParamLimits

0x7bd5,	// (0x000334ab) list_single_2graphic_pane_g2

0x7bb7,	// (0x0003348d) list_single_2graphic_pane_g3_ParamLimits

0x7bb7,	// (0x0003348d) list_single_2graphic_pane_g3

0x8425,	// (0x00033cfb) list_single_2graphic_pane_g4_ParamLimits

0x8425,	// (0x00033cfb) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0003aff2) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0003aff2) list_single_2graphic_pane_g

0x6aca,	// (0x000323a0) list_single_2graphic_pane_t1_ParamLimits

0x6aca,	// (0x000323a0) list_single_2graphic_pane_t1

0x8431,	// (0x00033d07) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8431,	// (0x00033d07) list_double2_graphic_large_graphic_pane_g1

0x667c,	// (0x00031f52) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x667c,	// (0x00031f52) list_double2_graphic_large_graphic_pane_g2

0x7c40,	// (0x00033516) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7c40,	// (0x00033516) list_double2_graphic_large_graphic_pane_g3

0x6af8,	// (0x000323ce) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6af8,	// (0x000323ce) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0003affb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0003affb) list_double2_graphic_large_graphic_pane_g

0x6b04,	// (0x000323da) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6b04,	// (0x000323da) list_double2_graphic_large_graphic_pane_t1

0x6b1a,	// (0x000323f0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6b1a,	// (0x000323f0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0003b004) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0003b004) list_double2_graphic_large_graphic_pane_t

0xa4d0,	// (0x00035da6) popup_fast_swap_window_ParamLimits

0xa4d0,	// (0x00035da6) popup_fast_swap_window

0xa4ec,	// (0x00035dc2) popup_side_volume_key_window

0xa506,	// (0x00035ddc) stacon_top_pane

0xa510,	// (0x00035de6) status_pane_ParamLimits

0xa510,	// (0x00035de6) status_pane

0xd80c,	// (0x000390e2) status_small_pane

0x741f,	// (0x00032cf5) control_pane

0x741f,	// (0x00032cf5) stacon_bottom_pane

0x7b9a,	// (0x00033470) scroll_pane_cp121

0x7ca0,	// (0x00033576) set_content_pane

0xd7ad,	// (0x00039083) bg_active_tab_pane_g1_cp1

0xa3fe,	// (0x00035cd4) bg_active_tab_pane_g2_cp1

0xd7b6,	// (0x0003908c) bg_active_tab_pane_g3_cp1

0xd7ad,	// (0x00039083) bg_passive_tab_pane_g1_cp1

0xa3fe,	// (0x00035cd4) bg_passive_tab_pane_g2_cp1

0xd7b6,	// (0x0003908c) bg_passive_tab_pane_g3_cp1

0xd7bf,	// (0x00039095) bg_active_tab_pane_g1_cp2

0xa3fe,	// (0x00035cd4) bg_active_tab_pane_g2_cp2

0xd7c8,	// (0x0003909e) bg_active_tab_pane_g3_cp2

0xd7bf,	// (0x00039095) bg_passive_tab_pane_g1_cp2

0xa3fe,	// (0x00035cd4) bg_passive_tab_pane_g2_cp2

0xd7c8,	// (0x0003909e) bg_passive_tab_pane_g3_cp2

0xd7d1,	// (0x000390a7) bg_active_tab_pane_g1_cp3

0xa3fe,	// (0x00035cd4) bg_active_tab_pane_g2_cp3

0xd7da,	// (0x000390b0) bg_active_tab_pane_g3_cp3

0xd7d1,	// (0x000390a7) bg_passive_tab_pane_g1_cp3

0xa3fe,	// (0x00035cd4) bg_passive_tab_pane_g2_cp3

0xd7da,	// (0x000390b0) bg_passive_tab_pane_g3_cp3

0xd7e3,	// (0x000390b9) bg_active_tab_pane_g1_cp4

0xa3fe,	// (0x00035cd4) bg_active_tab_pane_g2_cp4

0xd7ec,	// (0x000390c2) bg_active_tab_pane_g3_cp4

0xd7e3,	// (0x000390b9) bg_passive_tab_pane_g1_cp4

0xa3fe,	// (0x00035cd4) bg_passive_tab_pane_g2_cp4

0xd7ec,	// (0x000390c2) bg_passive_tab_pane_g3_cp4

0xa445,	// (0x00035d1b) bg_active_tab_pane_g1_cp5

0xa3fe,	// (0x00035cd4) bg_active_tab_pane_g2_cp5

0xa44e,	// (0x00035d24) bg_active_tab_pane_g3_cp5

0xa445,	// (0x00035d1b) bg_passive_tab_pane_g1_cp5

0xa3fe,	// (0x00035cd4) bg_passive_tab_pane_g2_cp5

0xa44e,	// (0x00035d24) bg_passive_tab_pane_g3_cp5

0xd7f5,	// (0x000390cb) list_set_graphic_pane_ParamLimits

0xd7f5,	// (0x000390cb) list_set_graphic_pane

0x741f,	// (0x00032cf5) bg_set_opt_pane_cp4

0xa457,	// (0x00035d2d) list_set_graphic_pane_g1_ParamLimits

0xa457,	// (0x00035d2d) list_set_graphic_pane_g1

0xa463,	// (0x00035d39) list_set_graphic_pane_g2_ParamLimits

0xa463,	// (0x00035d39) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0003b009) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0003b009) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0003b380) volume_small_pane_cp_g

0xa485,	// (0x00035d5b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa485,	// (0x00035d5b) list_double2_large_graphic_pane_g1_cp2

0xa491,	// (0x00035d67) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa491,	// (0x00035d67) list_double2_large_graphic_pane_g2_cp2

0xa4a0,	// (0x00035d76) list_double2_large_graphic_pane_g3_cp2

0xa4a8,	// (0x00035d7e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xa4a8,	// (0x00035d7e) list_double2_large_graphic_pane_t1_cp2

0xa4be,	// (0x00035d94) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xa4be,	// (0x00035d94) list_double2_large_graphic_pane_t2_cp2

0xb98c,	// (0x00037262) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb98c,	// (0x00037262) list_double_large_graphic_pane_g1_cp2

0xb99d,	// (0x00037273) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb99d,	// (0x00037273) list_double_large_graphic_pane_g2_cp2

0xa5eb,	// (0x00035ec1) list_double_large_graphic_pane_g3_cp2

0xb9ac,	// (0x00037282) list_double_large_graphic_pane_g4_cp

0xb9b4,	// (0x0003728a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xb9b4,	// (0x0003728a) list_double_large_graphic_pane_t1_cp2

0xb9cb,	// (0x000372a1) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xb9cb,	// (0x000372a1) list_double_large_graphic_pane_t2_cp2

0xa51e,	// (0x00035df4) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa51e,	// (0x00035df4) list_double2_graphic_pane_g1_cp2

0xa52a,	// (0x00035e00) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa52a,	// (0x00035e00) list_double2_graphic_pane_g2_cp2

0xa539,	// (0x00035e0f) list_double2_graphic_pane_g3_cp2

0xa541,	// (0x00035e17) list_double2_graphic_pane_t1_cp2_ParamLimits

0xa541,	// (0x00035e17) list_double2_graphic_pane_t1_cp2

0xa557,	// (0x00035e2d) list_double2_graphic_pane_t2_cp2_ParamLimits

0xa557,	// (0x00035e2d) list_double2_graphic_pane_t2_cp2

0xa569,	// (0x00035e3f) list_single_number_heading_pane_g1_cp2_ParamLimits

0xa569,	// (0x00035e3f) list_single_number_heading_pane_g1_cp2

0xa575,	// (0x00035e4b) list_single_number_heading_pane_g2_cp2

0xa57d,	// (0x00035e53) list_single_number_heading_pane_t1_cp2_ParamLimits

0xa57d,	// (0x00035e53) list_single_number_heading_pane_t1_cp2

0xa593,	// (0x00035e69) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa593,	// (0x00035e69) list_single_number_heading_pane_t2_cp2

0xa5a5,	// (0x00035e7b) list_single_number_heading_pane_t3_cp2_ParamLimits

0xa5a5,	// (0x00035e7b) list_single_number_heading_pane_t3_cp2

0xa569,	// (0x00035e3f) list_single_heading_pane_g1_cp2_ParamLimits

0xa569,	// (0x00035e3f) list_single_heading_pane_g1_cp2

0xa575,	// (0x00035e4b) list_single_heading_pane_g2_cp2

0xa57d,	// (0x00035e53) list_single_heading_pane_t1_cp2_ParamLimits

0xa57d,	// (0x00035e53) list_single_heading_pane_t1_cp2

0xb796,	// (0x0003706c) list_single_heading_pane_t2_cp2_ParamLimits

0xb796,	// (0x0003706c) list_single_heading_pane_t2_cp2

0xb6e6,	// (0x00036fbc) list_double_graphic_pane_g1_cp2_ParamLimits

0xb6e6,	// (0x00036fbc) list_double_graphic_pane_g1_cp2

0xb6f2,	// (0x00036fc8) list_double_graphic_pane_g2_cp2_ParamLimits

0xb6f2,	// (0x00036fc8) list_double_graphic_pane_g2_cp2

0xb701,	// (0x00036fd7) list_double_graphic_pane_g3_cp2

0xb709,	// (0x00036fdf) list_double_graphic_pane_t1_cp2_ParamLimits

0xb709,	// (0x00036fdf) list_double_graphic_pane_t1_cp2

0xb71f,	// (0x00036ff5) list_double_graphic_pane_t2_cp2_ParamLimits

0xb71f,	// (0x00036ff5) list_double_graphic_pane_t2_cp2

0xa5df,	// (0x00035eb5) list_double_number_pane_g1_cp2_ParamLimits

0xa5df,	// (0x00035eb5) list_double_number_pane_g1_cp2

0xa5eb,	// (0x00035ec1) list_double_number_pane_g2_cp2

0xb6ac,	// (0x00036f82) list_double_number_pane_t1_cp2_ParamLimits

0xb6ac,	// (0x00036f82) list_double_number_pane_t1_cp2

0xb6be,	// (0x00036f94) list_double_number_pane_t2_cp2_ParamLimits

0xb6be,	// (0x00036f94) list_double_number_pane_t2_cp2

0xb6d4,	// (0x00036faa) list_double_number_pane_t3_cp2_ParamLimits

0xb6d4,	// (0x00036faa) list_double_number_pane_t3_cp2

0xb624,	// (0x00036efa) list_single_graphic_pane_g1_cp2_ParamLimits

0xb624,	// (0x00036efa) list_single_graphic_pane_g1_cp2

0xa569,	// (0x00035e3f) list_single_graphic_pane_g2_cp2_ParamLimits

0xa569,	// (0x00035e3f) list_single_graphic_pane_g2_cp2

0xa575,	// (0x00035e4b) list_single_graphic_pane_g3_cp2

0xb5fc,	// (0x00036ed2) list_single_graphic_pane_t1_cp2_ParamLimits

0xb5fc,	// (0x00036ed2) list_single_graphic_pane_t1_cp2

0xa569,	// (0x00035e3f) list_single_number_pane_g1_cp2_ParamLimits

0xa569,	// (0x00035e3f) list_single_number_pane_g1_cp2

0xa575,	// (0x00035e4b) list_single_number_pane_g2_cp2

0xb5fc,	// (0x00036ed2) list_single_number_pane_t1_cp2_ParamLimits

0xb5fc,	// (0x00036ed2) list_single_number_pane_t1_cp2

0xb612,	// (0x00036ee8) list_single_number_pane_t2_cp2_ParamLimits

0xb612,	// (0x00036ee8) list_single_number_pane_t2_cp2

0xa491,	// (0x00035d67) list_double2_pane_g1_cp2_ParamLimits

0xa491,	// (0x00035d67) list_double2_pane_g1_cp2

0xa4a0,	// (0x00035d76) list_double2_pane_g2_cp2

0xa5b7,	// (0x00035e8d) list_double2_pane_t1_cp2_ParamLimits

0xa5b7,	// (0x00035e8d) list_double2_pane_t1_cp2

0xa5cd,	// (0x00035ea3) list_double2_pane_t2_cp2_ParamLimits

0xa5cd,	// (0x00035ea3) list_double2_pane_t2_cp2

0xa5df,	// (0x00035eb5) list_double_pane_g1_cp2_ParamLimits

0xa5df,	// (0x00035eb5) list_double_pane_g1_cp2

0xa5eb,	// (0x00035ec1) list_double_pane_g2_cp2

0xa5f3,	// (0x00035ec9) list_double_pane_t1_cp2_ParamLimits

0xa5f3,	// (0x00035ec9) list_double_pane_t1_cp2

0xa609,	// (0x00035edf) list_double_pane_t2_cp2_ParamLimits

0xa609,	// (0x00035edf) list_double_pane_t2_cp2

0xa631,	// (0x00035f07) list_single_pane_cp2_g3

0xa569,	// (0x00035e3f) list_single_pane_g1_cp2_ParamLimits

0xa569,	// (0x00035e3f) list_single_pane_g1_cp2

0xa575,	// (0x00035e4b) list_single_pane_g2_cp2

0xa641,	// (0x00035f17) list_single_pane_t1_cp2_ParamLimits

0xa641,	// (0x00035f17) list_single_pane_t1_cp2

0xa659,	// (0x00035f2f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa659,	// (0x00035f2f) list_single_large_graphic_pane_g1_cp2

0xa665,	// (0x00035f3b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xa665,	// (0x00035f3b) list_single_large_graphic_pane_g2_cp2

0xa671,	// (0x00035f47) list_single_large_graphic_pane_g3_cp2

0xa679,	// (0x00035f4f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa679,	// (0x00035f4f) list_single_large_graphic_pane_g4_cp1

0xa693,	// (0x00035f69) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xa693,	// (0x00035f69) list_single_large_graphic_pane_t1_cp2

0xb5de,	// (0x00036eb4) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb5de,	// (0x00036eb4) list_single_graphic_heading_pane_g1_cp2

0xb5b9,	// (0x00036e8f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb5b9,	// (0x00036e8f) list_single_graphic_heading_pane_g4_cp2

0xa575,	// (0x00035e4b) list_single_graphic_heading_pane_g5_cp2

0xa57d,	// (0x00035e53) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa57d,	// (0x00035e53) list_single_graphic_heading_pane_t1_cp2

0xb5ea,	// (0x00036ec0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb5ea,	// (0x00036ec0) list_single_graphic_heading_pane_t2_cp2

0xb5ad,	// (0x00036e83) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb5ad,	// (0x00036e83) list_single_2graphic_pane_g1_cp2

0xb5b9,	// (0x00036e8f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb5b9,	// (0x00036e8f) list_single_2graphic_pane_g2_cp2

0xa575,	// (0x00035e4b) list_single_2graphic_pane_g3_cp2

0xaac8,	// (0x0003639e) list_single_2graphic_pane_g4_cp2_ParamLimits

0xaac8,	// (0x0003639e) list_single_2graphic_pane_g4_cp2

0xb5c8,	// (0x00036e9e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb5c8,	// (0x00036e9e) list_single_2graphic_pane_t1_cp2

0x7260,	// (0x00032b36) list_highlight_pane_g10_cp1

0xb1bf,	// (0x00036a95) list_highlight_pane_g1_cp1

0xb1c7,	// (0x00036a9d) list_highlight_pane_g2_cp1

0xb1cf,	// (0x00036aa5) list_highlight_pane_g3_cp1

0xb1d7,	// (0x00036aad) list_highlight_pane_g4_cp1

0xb1df,	// (0x00036ab5) list_highlight_pane_g5_cp1

0xb1e7,	// (0x00036abd) list_highlight_pane_g6_cp1

0xb1ef,	// (0x00036ac5) list_highlight_pane_g7_cp1

0xb1f7,	// (0x00036acd) list_highlight_pane_g8_cp1

0xb1ff,	// (0x00036ad5) list_highlight_pane_g9_cp1

0xdcd6,	// (0x000395ac) form_field_slider_pane_t3

0xdce4,	// (0x000395ba) form_field_slider_pane_t4

0xb109,	// (0x000369df) slider_form_pane_ParamLimits

0xb109,	// (0x000369df) slider_form_pane

0x741f,	// (0x00032cf5) control_abbreviations

0x741f,	// (0x00032cf5) control_conventions

0x741f,	// (0x00032cf5) control_definitions

0x741f,	// (0x00032cf5) format_table_attribute

0xb7e0,	// (0x000370b6) bg_popup_preview_window_pane_g9

0x741f,	// (0x00032cf5) format_table_data2

0x741f,	// (0x00032cf5) format_table_data3

0x741f,	// (0x00032cf5) format_table_data_example

0x0008,

0x741f,	// (0x00032cf5) intro_purpose

0xf8c8,	// (0x0003b19e) bg_popup_preview_window_pane_g

0x741f,	// (0x00032cf5) texts_category

0x741f,	// (0x00032cf5) texts_graphics

0xa6a9,	// (0x00035f7f) text_digital

0xa6b8,	// (0x00035f8e) text_primary

0xa6c7,	// (0x00035f9d) text_primary_small

0xa6d6,	// (0x00035fac) text_secondary

0xa6e5,	// (0x00035fbb) text_title

0xbc54,	// (0x0003752a) bg_passive_tab_pane_g1_cp3_srt

0xa3fe,	// (0x00035cd4) bg_passive_tab_pane_g2_cp3_srt

0xbc5d,	// (0x00037533) bg_passive_tab_pane_g3_cp3_srt

0x75b3,	// (0x00032e89) bg_active_tab_pane_cp3_srt_ParamLimits

0x75b3,	// (0x00032e89) bg_active_tab_pane_cp3_srt

0xbc66,	// (0x0003753c) tabs_4_active_pane_srt_g1

0xd3cb,	// (0x00038ca1) tabs_4_active_pane_srt_t1_ParamLimits

0xd3cb,	// (0x00038ca1) tabs_4_active_pane_srt_t1

0xbc54,	// (0x0003752a) bg_active_tab_pane_g1_cp3_copy1

0xa3fe,	// (0x00035cd4) bg_active_tab_pane_g2_cp3_copy1

0xbc5d,	// (0x00037533) bg_active_tab_pane_g3_cp3_copy1

0x75b3,	// (0x00032e89) tabs_2_long_active_pane_srt_ParamLimits

0x75b3,	// (0x00032e89) tabs_2_long_active_pane_srt

0x75b3,	// (0x00032e89) tabs_2_long_passive_pane_srt_ParamLimits

0x75b3,	// (0x00032e89) tabs_2_long_passive_pane_srt

0xd610,	// (0x00038ee6) bg_passive_tab_pane_cp4_srt_ParamLimits

0xd610,	// (0x00038ee6) bg_passive_tab_pane_cp4_srt

0xbb8f,	// (0x00037465) bg_passive_tab_pane_g1_cp4_srt

0xa3fe,	// (0x00035cd4) bg_passive_tab_pane_g2_cp4_srt

0xbb98,	// (0x0003746e) bg_passive_tab_pane_g3_cp4_srt

0xd5ef,	// (0x00038ec5) bg_active_tab_pane_cp4_srt_ParamLimits

0xd5ef,	// (0x00038ec5) bg_active_tab_pane_cp4_srt

0xd5fd,	// (0x00038ed3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd5fd,	// (0x00038ed3) tabs_2_long_active_pane_srt_t1

0xbb8f,	// (0x00037465) bg_active_tab_pane_g1_cp4_srt

0xa3fe,	// (0x00035cd4) bg_active_tab_pane_g2_cp4_srt

0xbb98,	// (0x0003746e) bg_active_tab_pane_g3_cp4_srt

0x7778,	// (0x0003304e) tabs_3_long_active_pane_srt_ParamLimits

0x7778,	// (0x0003304e) tabs_3_long_active_pane_srt

0x7778,	// (0x0003304e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7778,	// (0x0003304e) tabs_3_long_passive_pane_cp_srt

0x7778,	// (0x0003304e) tabs_3_long_passive_pane_srt_ParamLimits

0x7778,	// (0x0003304e) tabs_3_long_passive_pane_srt

0xd610,	// (0x00038ee6) bg_passive_tab_pane_cp5_srt_ParamLimits

0xd610,	// (0x00038ee6) bg_passive_tab_pane_cp5_srt

0xa445,	// (0x00035d1b) bg_passive_tab_pane_g1_cp5_srt

0xa3fe,	// (0x00035cd4) bg_passive_tab_pane_g2_cp5_srt

0xa44e,	// (0x00035d24) bg_passive_tab_pane_g3_cp5_srt

0xd5ef,	// (0x00038ec5) bg_active_tab_pane_cp5_srt_ParamLimits

0xd5ef,	// (0x00038ec5) bg_active_tab_pane_cp5_srt

0xd61c,	// (0x00038ef2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd61c,	// (0x00038ef2) tabs_3_long_active_pane_srt_t1

0xa445,	// (0x00035d1b) bg_active_tab_pane_g1_cp5_srt

0xa3fe,	// (0x00035cd4) bg_active_tab_pane_g2_cp5_srt

0xa44e,	// (0x00035d24) bg_active_tab_pane_g3_cp5_srt

0xbb81,	// (0x00037457) navi_text_pane_srt_t1

0xbb79,	// (0x0003744f) navi_icon_pane_srt_g1

0xa7fd,	// (0x000360d3) midp_editing_number_pane_srt

0xa6f4,	// (0x00035fca) midp_ticker_pane_srt

0xa805,	// (0x000360db) midp_ticker_pane_srt_g1

0xa80d,	// (0x000360e3) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0003b028) midp_ticker_pane_srt_g

0xa815,	// (0x000360eb) midp_ticker_pane_srt_t1

0xbb6a,	// (0x00037440) midp_editing_number_pane_t1_copy1

0xd815,	// (0x000390eb) listscroll_midp_pane

0xd815,	// (0x000390eb) midp_form_pane

0xa6fc,	// (0x00035fd2) midp_info_popup_window_ParamLimits

0xa6fc,	// (0x00035fd2) midp_info_popup_window

0x7db6,	// (0x0003368c) bg_popup_sub_pane_cp50_ParamLimits

0x7db6,	// (0x0003368c) bg_popup_sub_pane_cp50

0xae1e,	// (0x000366f4) listscroll_midp_info_pane_ParamLimits

0xae1e,	// (0x000366f4) listscroll_midp_info_pane

0xae06,	// (0x000366dc) listscroll_form_midp_pane_ParamLimits

0xae06,	// (0x000366dc) listscroll_form_midp_pane

0xae12,	// (0x000366e8) scroll_bar_cp050

0xdcbe,	// (0x00039594) list_midp_pane

0xc484,	// (0x00037d5a) signal_pane_g2_cp

0xad38,	// (0x0003660e) listscroll_midp_info_pane_t1_ParamLimits

0xad38,	// (0x0003660e) listscroll_midp_info_pane_t1

0xad50,	// (0x00036626) listscroll_midp_info_pane_t2_ParamLimits

0xad50,	// (0x00036626) listscroll_midp_info_pane_t2

0xad8e,	// (0x00036664) listscroll_midp_info_pane_t3_ParamLimits

0xad8e,	// (0x00036664) listscroll_midp_info_pane_t3

0xadc8,	// (0x0003669e) listscroll_midp_info_pane_t4_ParamLimits

0xadc8,	// (0x0003669e) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x0003b0d9) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x0003b0d9) listscroll_midp_info_pane_t

0x7e0b,	// (0x000336e1) scroll_pane_cp21

0xacdc,	// (0x000365b2) form_midp_field_choice_group_pane

0xace5,	// (0x000365bb) form_midp_field_text_pane

0xad1e,	// (0x000365f4) form_midp_field_time_pane

0xad26,	// (0x000365fc) form_midp_gauge_slider_pane

0xad2f,	// (0x00036605) form_midp_gauge_wait_pane

0x741f,	// (0x00032cf5) form_midp_image_pane

0x6c4d,	// (0x00032523) list_single_midp_pane_ParamLimits

0x6c4d,	// (0x00032523) list_single_midp_pane

0xacaa,	// (0x00036580) form_midp_field_text_pane_t1

0xab00,	// (0x000363d6) input_focus_pane_cp050

0xaccb,	// (0x000365a1) list_midp_form_text_pane

0xac79,	// (0x0003654f) form_midp_field_choice_group_pane_t1

0xac87,	// (0x0003655d) input_focus_pane_cp051

0xac9b,	// (0x00036571) list_midp_choice_pane

0x741f,	// (0x00032cf5) status_idle_pane

0xac5d,	// (0x00036533) form_midp_field_time_pane_t1

0x7260,	// (0x00032b36) wait_anim_pane_g2_copy1

0xac6b,	// (0x00036541) form_midp_field_time_pane_t2

0x0001,

0xa767,	// (0x0003603d) aid_navinavi_width_2_pane

0xf7fe,	// (0x0003b0d4) form_midp_field_time_pane_t

0x741f,	// (0x00032cf5) input_focus_pane_cp052

0x741f,	// (0x00032cf5) bg_input_focus_pane_cp040

0xac39,	// (0x0003650f) form_midp_gauge_slider_pane_t1

0xac47,	// (0x0003651d) form_midp_gauge_slider_pane_t2

0xdca2,	// (0x00039578) form_midp_gauge_slider_pane_t3

0xdcb0,	// (0x00039586) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x0003b0cb) form_midp_gauge_slider_pane_t

0xac55,	// (0x0003652b) form_midp_slider_pane

0x75b3,	// (0x00032e89) bg_input_focus_pane_cp041_ParamLimits

0x75b3,	// (0x00032e89) bg_input_focus_pane_cp041

0xac09,	// (0x000364df) form_midp_gauge_wait_pane_t1_ParamLimits

0xac09,	// (0x000364df) form_midp_gauge_wait_pane_t1

0xac1b,	// (0x000364f1) form_midp_gauge_wait_pane_t2_ParamLimits

0xac1b,	// (0x000364f1) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x0003b0c6) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x0003b0c6) form_midp_gauge_wait_pane_t

0xac2d,	// (0x00036503) form_midp_wait_pane_ParamLimits

0xac2d,	// (0x00036503) form_midp_wait_pane

0xabd3,	// (0x000364a9) form_midp_image_pane_g1

0xabdc,	// (0x000364b2) form_midp_image_pane_t1

0xabeb,	// (0x000364c1) form_midp_image_pane_t2

0xabfa,	// (0x000364d0) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x0003b0bf) form_midp_image_pane_t

0xabca,	// (0x000364a0) list_single_midp_pane_g1

0x6c3e,	// (0x00032514) list_single_midp_pane_t1

0xabb6,	// (0x0003648c) list_midp_form_item_pane_ParamLimits

0xabb6,	// (0x0003648c) list_midp_form_item_pane

0xa70f,	// (0x00035fe5) list_midp_form_item_pane_t1

0xa71e,	// (0x00035ff4) midp_ticker_pane_g1

0xa72a,	// (0x00036000) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0003b00e) midp_ticker_pane_g

0xa736,	// (0x0003600c) midp_ticker_pane_t1

0xbb6a,	// (0x00037440) midp_editing_number_pane_t1

0xbbfe,	// (0x000374d4) midp_editing_number_pane

0xbc0a,	// (0x000374e0) midp_ticker_pane

0xbb5a,	// (0x00037430) ai_message_heading_pane

0x741f,	// (0x00032cf5) bg_popup_window_pane_cp14

0xbb62,	// (0x00037438) listscroll_ai_message_pane

0xbae4,	// (0x000373ba) ai_message_heading_pane_g1_ParamLimits

0xbae4,	// (0x000373ba) ai_message_heading_pane_g1

0xbaf0,	// (0x000373c6) ai_message_heading_pane_g2_ParamLimits

0xbaf0,	// (0x000373c6) ai_message_heading_pane_g2

0xbafc,	// (0x000373d2) ai_message_heading_pane_g3_ParamLimits

0xbafc,	// (0x000373d2) ai_message_heading_pane_g3

0xbb08,	// (0x000373de) ai_message_heading_pane_g4_ParamLimits

0xbb08,	// (0x000373de) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x0003b200) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x0003b200) ai_message_heading_pane_g

0xbb14,	// (0x000373ea) ai_message_heading_pane_t1_ParamLimits

0xbb14,	// (0x000373ea) ai_message_heading_pane_t1

0xbb2e,	// (0x00037404) ai_message_heading_pane_t2_ParamLimits

0xbb2e,	// (0x00037404) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x0003b209) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x0003b209) ai_message_heading_pane_t

0xbb40,	// (0x00037416) bg_popup_heading_pane_cp1_ParamLimits

0xbb40,	// (0x00037416) bg_popup_heading_pane_cp1

0xbad2,	// (0x000373a8) list_ai_message_pane_ParamLimits

0xbad2,	// (0x000373a8) list_ai_message_pane

0x7e0b,	// (0x000336e1) scroll_pane_cp10

0xba6e,	// (0x00037344) list_ai_message_pane_g1

0xba76,	// (0x0003734c) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x0003b1dd) list_ai_message_pane_g

0xba7e,	// (0x00037354) list_ai_message_pane_t1_ParamLimits

0xba7e,	// (0x00037354) list_ai_message_pane_t1

0xba93,	// (0x00037369) list_ai_message_pane_t2_ParamLimits

0xba93,	// (0x00037369) list_ai_message_pane_t2

0xbaa8,	// (0x0003737e) list_ai_message_pane_t3_ParamLimits

0xbaa8,	// (0x0003737e) list_ai_message_pane_t3

0xbabd,	// (0x00037393) list_ai_message_pane_t4_ParamLimits

0xbabd,	// (0x00037393) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x0003b1e2) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x0003b1e2) list_ai_message_pane_t

0xba5c,	// (0x00037332) cell_ai_soft_ind_pane_ParamLimits

0xba5c,	// (0x00037332) cell_ai_soft_ind_pane

0xa748,	// (0x0003601e) cell_ai_soft_ind_pane_g1_ParamLimits

0xa748,	// (0x0003601e) cell_ai_soft_ind_pane_g1

0x741f,	// (0x00032cf5) grid_highlight_cp1

0xa755,	// (0x0003602b) text_secondary_cp56_ParamLimits

0xa755,	// (0x0003602b) text_secondary_cp56

0xba31,	// (0x00037307) example_general_pane_ParamLimits

0xba31,	// (0x00037307) example_general_pane

0xba3d,	// (0x00037313) example_parent_pane_g1_ParamLimits

0xba3d,	// (0x00037313) example_parent_pane_g1

0xba49,	// (0x0003731f) example_parent_pane_t1_ParamLimits

0xba49,	// (0x0003731f) example_parent_pane_t1

0x8a58,	// (0x0003432e) popup_preview_text_window_ParamLimits

0x8a58,	// (0x0003432e) popup_preview_text_window

0xa639,	// (0x00035f0f) list_single_pane_cp2_g4

0x7854,	// (0x0003312a) bg_popup_preview_window_pane_ParamLimits

0x7854,	// (0x0003312a) bg_popup_preview_window_pane

0xb7e8,	// (0x000370be) popup_preview_text_window_t1_ParamLimits

0xb7e8,	// (0x000370be) popup_preview_text_window_t1

0xb806,	// (0x000370dc) popup_preview_text_window_t2_ParamLimits

0xb806,	// (0x000370dc) popup_preview_text_window_t2

0xb84f,	// (0x00037125) popup_preview_text_window_t3_ParamLimits

0xb84f,	// (0x00037125) popup_preview_text_window_t3

0xb894,	// (0x0003716a) popup_preview_text_window_t4_ParamLimits

0xb894,	// (0x0003716a) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x0003b1b1) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x0003b1b1) popup_preview_text_window_t

0xb912,	// (0x000371e8) scroll_pane_cp11

0xaa80,	// (0x00036356) bg_popup_preview_window_pane_g1

0xb7a8,	// (0x0003707e) bg_popup_preview_window_pane_g2

0xb7b0,	// (0x00037086) bg_popup_preview_window_pane_g3

0xb7b8,	// (0x0003708e) bg_popup_preview_window_pane_g4

0xb7c0,	// (0x00037096) bg_popup_preview_window_pane_g5

0xb7c8,	// (0x0003709e) bg_popup_preview_window_pane_g6

0xb7d0,	// (0x000370a6) bg_popup_preview_window_pane_g7

0xb7d8,	// (0x000370ae) bg_popup_preview_window_pane_g8

0x7272,	// (0x00032b48) aid_popup_width_pane

0x8a3a,	// (0x00034310) popup_midp_note_alarm_window_ParamLimits

0x8a3a,	// (0x00034310) popup_midp_note_alarm_window

0x7ca9,	// (0x0003357f) data_form_pane_ParamLimits

0x6924,	// (0x000321fa) form_field_data_pane_g1

0x692c,	// (0x00032202) form_field_data_pane_t1_ParamLimits

0x7cb5,	// (0x0003358b) input_focus_pane_ParamLimits

0x7cc3,	// (0x00033599) data_form_wide_pane_ParamLimits

0x6944,	// (0x0003221a) form_field_data_wide_pane_g1

0x6950,	// (0x00032226) form_field_data_wide_pane_t1_ParamLimits

0x7a19,	// (0x000332ef) input_focus_pane_cp6_ParamLimits

0xd5c9,	// (0x00038e9f) input_popup_find_pane_g1_ParamLimits

0xd5c9,	// (0x00038e9f) input_popup_find_pane_g1

0x80b5,	// (0x0003398b) aid_navi_side_left_pane

0x80c5,	// (0x0003399b) aid_navi_side_right_pane

0xb290,	// (0x00036b66) bg_popup_window_pane_cp30_ParamLimits

0xb290,	// (0x00036b66) bg_popup_window_pane_cp30

0xb30a,	// (0x00036be0) popup_midp_note_alarm_window_g1_ParamLimits

0xb30a,	// (0x00036be0) popup_midp_note_alarm_window_g1

0xb33a,	// (0x00036c10) popup_midp_note_alarm_window_t1_ParamLimits

0xb33a,	// (0x00036c10) popup_midp_note_alarm_window_t1

0xb3db,	// (0x00036cb1) popup_midp_note_alarm_window_t2_ParamLimits

0xb3db,	// (0x00036cb1) popup_midp_note_alarm_window_t2

0xb489,	// (0x00036d5f) popup_midp_note_alarm_window_t3_ParamLimits

0xb489,	// (0x00036d5f) popup_midp_note_alarm_window_t3

0xb4b1,	// (0x00036d87) popup_midp_note_alarm_window_t4_ParamLimits

0xb4b1,	// (0x00036d87) popup_midp_note_alarm_window_t4

0xb4d1,	// (0x00036da7) popup_midp_note_alarm_window_t5_ParamLimits

0xb4d1,	// (0x00036da7) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x0003b14e) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x0003b14e) popup_midp_note_alarm_window_t

0xb57d,	// (0x00036e53) wait_bar_pane_cp1_ParamLimits

0xb57d,	// (0x00036e53) wait_bar_pane_cp1

0x741f,	// (0x00032cf5) wait_anim_pane_copy1

0x741f,	// (0x00032cf5) wait_border_pane_copy1

0xafd6,	// (0x000368ac) wait_border_pane_g1_copy1

0x696a,	// (0x00032240) form_field_popup_pane_g1

0x6972,	// (0x00032248) form_field_popup_pane_t1_ParamLimits

0x7cb5,	// (0x0003358b) input_focus_pane_cp7_ParamLimits

0x7ca9,	// (0x0003357f) list_form_pane_ParamLimits

0x698a,	// (0x00032260) form_field_popup_wide_pane_g1

0x6992,	// (0x00032268) form_field_popup_wide_pane_t1_ParamLimits

0x7cb5,	// (0x0003358b) input_focus_pane_cp8_ParamLimits

0x7ce3,	// (0x000335b9) list_form_wide_pane_ParamLimits

0xbc8d,	// (0x00037563) aid_size_cell_graphic_pane

0x6a1e,	// (0x000322f4) data_form_pane_t1_ParamLimits

0x6c74,	// (0x0003254a) data_form_wide_pane_t1_ParamLimits

0xda08,	// (0x000392de) bg_status_flat_pane

0xd349,	// (0x00038c1f) title_pane_t1_ParamLimits

0x757b,	// (0x00032e51) title_pane_t2_ParamLimits

0x75a1,	// (0x00032e77) title_pane_t3_ParamLimits

0xf532,	// (0x0003ae08) title_pane_t_ParamLimits

0xd6ba,	// (0x00038f90) level_1_signal_ParamLimits

0xd6c7,	// (0x00038f9d) level_2_signal_ParamLimits

0xd6d4,	// (0x00038faa) level_3_signal_ParamLimits

0xd6e1,	// (0x00038fb7) level_4_signal_ParamLimits

0xd6ee,	// (0x00038fc4) level_5_signal_ParamLimits

0xd6fb,	// (0x00038fd1) level_6_signal_ParamLimits

0xd708,	// (0x00038fde) level_7_signal_ParamLimits

0xd6ba,	// (0x00038f90) level_1_battery_ParamLimits

0xd6c7,	// (0x00038f9d) level_2_battery_ParamLimits

0xd6d4,	// (0x00038faa) level_3_battery_ParamLimits

0xd6e1,	// (0x00038fb7) level_4_battery_ParamLimits

0xd6ee,	// (0x00038fc4) level_5_battery_ParamLimits

0xd6fb,	// (0x00038fd1) level_6_battery_ParamLimits

0xd708,	// (0x00038fde) level_7_battery_ParamLimits

0xb1bf,	// (0x00036a95) bg_status_flat_pane_g1

0xb1c7,	// (0x00036a9d) bg_status_flat_pane_g2

0xb1cf,	// (0x00036aa5) bg_status_flat_pane_g3

0xb1d7,	// (0x00036aad) bg_status_flat_pane_g4

0xb1df,	// (0x00036ab5) bg_status_flat_pane_g5

0xb1e7,	// (0x00036abd) bg_status_flat_pane_g6

0xb1ef,	// (0x00036ac5) bg_status_flat_pane_g7

0xd3b1,	// (0x00038c87) tabs_3_active_pane_t1_ParamLimits

0xd3b1,	// (0x00038c87) tabs_3_passive_pane_t1_ParamLimits

0xd3cb,	// (0x00038ca1) tabs_4_active_pane_t1_ParamLimits

0xd3cb,	// (0x00038ca1) tabs_4_1_passive_pane_t1_ParamLimits

0xd5dd,	// (0x00038eb3) tabs_2_active_pane_t1_ParamLimits

0xd5dd,	// (0x00038eb3) tabs_2_passive_pane_t1_ParamLimits

0xd5ef,	// (0x00038ec5) bg_active_tab_pane_cp4_ParamLimits

0xd5fd,	// (0x00038ed3) tabs_2_long_active_pane_t1_ParamLimits

0xd610,	// (0x00038ee6) bg_passive_tab_pane_cp4_ParamLimits

0x8c9c,	// (0x00034572) list_single_midp_graphic_pane_t1_ParamLimits

0xd5ef,	// (0x00038ec5) bg_active_tab_pane_cp5_ParamLimits

0xd61c,	// (0x00038ef2) tabs_3_long_active_pane_t1_ParamLimits

0xd610,	// (0x00038ee6) bg_passive_tab_pane_cp5_ParamLimits

0x8c9c,	// (0x00034572) list_single_midp_graphic_pane_t1

0xda08,	// (0x000392de) bg_status_flat_pane_ParamLimits

0xa95f,	// (0x00036235) indicator_pane_cp2_ParamLimits

0xa95f,	// (0x00036235) indicator_pane_cp2

0xdb51,	// (0x00039427) navi_pane_srt_ParamLimits

0xdb51,	// (0x00039427) navi_pane_srt

0xa987,	// (0x0003625d) popup_clock_digital_analogue_window_cp1

0x7689,	// (0x00032f5f) indicator_pane_t1

0xa6f4,	// (0x00035fca) copy_highlight_pane

0xa6f4,	// (0x00035fca) cursor_graphics_pane

0xa6f4,	// (0x00035fca) graphic_within_text_pane

0xa6f4,	// (0x00035fca) link_highlight_pane

0xb8d5,	// (0x000371ab) popup_preview_text_window_t5_ParamLimits

0xb8d5,	// (0x000371ab) popup_preview_text_window_t5

0xa76f,	// (0x00036045) cursor_digital_pane

0xa76f,	// (0x00036045) cursor_primary_pane

0xa780,	// (0x00036056) cursor_primary_small_pane

0xa788,	// (0x0003605e) cursor_secondary_pane

0xa790,	// (0x00036066) cursor_title_pane

0xa76f,	// (0x00036045) link_highlight_digital_pane

0xa777,	// (0x0003604d) link_highlight_primary_pane

0xa780,	// (0x00036056) link_highlight_primary_small_pane

0xa788,	// (0x0003605e) link_highlight_secondary_pane

0xa790,	// (0x00036066) link_highlight_title_pane

0xa76f,	// (0x00036045) copy_highlight_digital_pane

0xa76f,	// (0x00036045) copy_highlight_primary_pane

0xa780,	// (0x00036056) copy_highlight_primary_small_pane

0xa788,	// (0x0003605e) copy_highlight_secondary_pane

0xa790,	// (0x00036066) copy_highlight_title_pane

0xa788,	// (0x0003605e) graphic_text_digital_pane

0xb23f,	// (0x00036b15) graphic_text_primary_pane

0xb248,	// (0x00036b1e) graphic_text_primary_small_pane

0xa780,	// (0x00036056) graphic_text_secondary_pane

0xa76f,	// (0x00036045) graphic_text_title_pane

0xd8bc,	// (0x00039192) cursor_primary_pane_g1

0xb231,	// (0x00036b07) cursor_text_primary_t1

0xdd02,	// (0x000395d8) cursor_primary_small_pane_g1

0xb223,	// (0x00036af9) cursor_text_primary_small_t1

0xdcfa,	// (0x000395d0) cursor_primary_small_pane_g1_copy1

0xb215,	// (0x00036aeb) cursor_text_primary_small_t1_copy1

0xb207,	// (0x00036add) cursor_text_title_t1

0xdcf2,	// (0x000395c8) cursor_title_pane_g1

0xd8bc,	// (0x00039192) cursor_digital_pane_g1

0xa798,	// (0x0003606e) cursor_text_digital_t1

0xa7a6,	// (0x0003607c) link_highlight_primary_pane_g1

0xb1b0,	// (0x00036a86) link_highlight_primary_pane_t1

0xa7a6,	// (0x0003607c) link_highlight_primary_small_pane_g1

0xa7ae,	// (0x00036084) link_highlight_primary_small_pane_t1

0xa7bd,	// (0x00036093) link_highlight_secondary_pane_g1

0xa7c5,	// (0x0003609b) link_highlight_secondary_pane_t1

0xb115,	// (0x000369eb) link_highlight_title_pane_g1

0xb12c,	// (0x00036a02) link_highlight_title_pane_t1

0xb115,	// (0x000369eb) link_highlight_digital_pane_g1

0xb11d,	// (0x000369f3) link_highlight_digital_pane_t1

0xaff1,	// (0x000368c7) copy_highlight_primary_pane_g1

0xb017,	// (0x000368ed) copy_highlight_primary_pane_t1

0xaff1,	// (0x000368c7) copy_highlight_primary_small_pane_g1

0xb008,	// (0x000368de) copy_highlight_primary_small_pane_t1

0xa7d4,	// (0x000360aa) copy_highlight_secondary_pane_g1

0xa7dc,	// (0x000360b2) copy_highlight_secondary_pane_t1

0xaff1,	// (0x000368c7) copy_highlight_title_pane_g1

0xaff9,	// (0x000368cf) copy_highlight_title_pane_t1

0xaff1,	// (0x000368c7) copy_highlight_digital_pane_g1

0xbdae,	// (0x00037684) copy_highlight_digital_pane_t1

0xbd02,	// (0x000375d8) graphic_text_primary_pane_g1

0xbd92,	// (0x00037668) graphic_text_primary_pane_t1

0xbda0,	// (0x00037676) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x0003b278) graphic_text_primary_pane_t

0xbd6e,	// (0x00037644) graphic_text_primary_small_pane_g1

0xbd76,	// (0x0003764c) graphic_text_primary_small_pane_t1

0xbd84,	// (0x0003765a) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x0003b273) graphic_text_primary_small_pane_t

0xbd4a,	// (0x00037620) graphic_text_secondary_pane_g1

0xbd52,	// (0x00037628) graphic_text_secondary_pane_t1

0xbd60,	// (0x00037636) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x0003b26e) graphic_text_secondary_pane_t

0xbd26,	// (0x000375fc) graphic_text_title_pane_g1

0xbd2e,	// (0x00037604) graphic_text_title_pane_t1

0xbd3c,	// (0x00037612) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x0003b269) graphic_text_title_pane_t

0xbd02,	// (0x000375d8) graphic_text_digital_pane_g1

0xbd0a,	// (0x000375e0) graphic_text_digital_pane_t1

0xbd18,	// (0x000375ee) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x0003b264) graphic_text_digital_pane_t

0x75b3,	// (0x00032e89) navi_icon_pane_srt_ParamLimits

0x75b3,	// (0x00032e89) navi_icon_pane_srt

0x741f,	// (0x00032cf5) navi_midp_pane_srt

0x741f,	// (0x00032cf5) navi_navi_pane_srt

0x75b3,	// (0x00032e89) navi_text_pane_srt_ParamLimits

0x75b3,	// (0x00032e89) navi_text_pane_srt

0xb761,	// (0x00037037) navi_navi_icon_text_pane_srt

0xb769,	// (0x0003703f) navi_navi_pane_srt_g1_ParamLimits

0xb769,	// (0x0003703f) navi_navi_pane_srt_g1

0xb77b,	// (0x00037051) navi_navi_pane_srt_g2_ParamLimits

0xb77b,	// (0x00037051) navi_navi_pane_srt_g2

0x0001,

0xf8c3,	// (0x0003b199) navi_navi_pane_srt_g_ParamLimits

0xf8c3,	// (0x0003b199) navi_navi_pane_srt_g

0xb78d,	// (0x00037063) navi_navi_tabs_pane_srt

0xb761,	// (0x00037037) navi_navi_text_pane_srt

0xb761,	// (0x00037037) navi_navi_volume_pane_srt

0xbcf3,	// (0x000375c9) navi_navi_text_pane_srt_t1

0x906e,	// (0x00034944) navi_navi_volume_pane_srt_g1

0x9076,	// (0x0003494c) volume_small_pane_srt_ParamLimits

0x9076,	// (0x0003494c) volume_small_pane_srt

0x856e,	// (0x00033e44) volume_small_pane_srt_g1_ParamLimits

0x856e,	// (0x00033e44) volume_small_pane_srt_g1

0x857e,	// (0x00033e54) volume_small_pane_srt_g2_ParamLimits

0x857e,	// (0x00033e54) volume_small_pane_srt_g2

0x858f,	// (0x00033e65) volume_small_pane_srt_g3_ParamLimits

0x858f,	// (0x00033e65) volume_small_pane_srt_g3

0x85a0,	// (0x00033e76) volume_small_pane_srt_g4_ParamLimits

0x85a0,	// (0x00033e76) volume_small_pane_srt_g4

0x85b1,	// (0x00033e87) volume_small_pane_srt_g5_ParamLimits

0x85b1,	// (0x00033e87) volume_small_pane_srt_g5

0x85c2,	// (0x00033e98) volume_small_pane_srt_g6_ParamLimits

0x85c2,	// (0x00033e98) volume_small_pane_srt_g6

0x85d3,	// (0x00033ea9) volume_small_pane_srt_g7_ParamLimits

0x85d3,	// (0x00033ea9) volume_small_pane_srt_g7

0x85e4,	// (0x00033eba) volume_small_pane_srt_g8_ParamLimits

0x85e4,	// (0x00033eba) volume_small_pane_srt_g8

0x85f5,	// (0x00033ecb) volume_small_pane_srt_g9_ParamLimits

0x85f5,	// (0x00033ecb) volume_small_pane_srt_g9

0x8606,	// (0x00033edc) volume_small_pane_srt_g10_ParamLimits

0x8606,	// (0x00033edc) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0003b013) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0003b013) volume_small_pane_srt_g

0x78fd,	// (0x000331d3) query_popup_data_pane_cp2

0xbcd9,	// (0x000375af) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xbcd9,	// (0x000375af) navi_navi_icon_text_pane_srt_t1

0xb23f,	// (0x00036b15) navi_tabs_2_long_pane_srt

0xb23f,	// (0x00036b15) navi_tabs_2_pane_srt

0xb23f,	// (0x00036b15) navi_tabs_3_long_pane_srt

0xb23f,	// (0x00036b15) navi_tabs_3_pane_srt

0xb23f,	// (0x00036b15) navi_tabs_4_pane_srt

0x904e,	// (0x00034924) tabs_2_active_pane_srt_ParamLimits

0x904e,	// (0x00034924) tabs_2_active_pane_srt

0x905e,	// (0x00034934) tabs_2_passive_pane_srt_ParamLimits

0x905e,	// (0x00034934) tabs_2_passive_pane_srt

0x87a0,	// (0x00034076) bg_passive_tab_pane_cp1_srt_ParamLimits

0x87a0,	// (0x00034076) bg_passive_tab_pane_cp1_srt

0xbcb7,	// (0x0003758d) bg_passive_tab_pane_g1_cp1_srt

0xa3fe,	// (0x00035cd4) bg_passive_tab_pane_g2_cp1_srt

0xbcc0,	// (0x00037596) bg_passive_tab_pane_g3_cp1_srt

0x75b3,	// (0x00032e89) bg_active_tab_pane_cp1_srt_ParamLimits

0x75b3,	// (0x00032e89) bg_active_tab_pane_cp1_srt

0xbcc9,	// (0x0003759f) tabs_2_active_pane_srt_g1

0xd5dd,	// (0x00038eb3) tabs_2_active_pane_srt_t1_ParamLimits

0xd5dd,	// (0x00038eb3) tabs_2_active_pane_srt_t1

0xbcb7,	// (0x0003758d) bg_active_tab_pane_g1_cp1_srt

0xa3fe,	// (0x00035cd4) bg_active_tab_pane_g2_cp1_srt

0xbcc0,	// (0x00037596) bg_active_tab_pane_g3_cp1_srt

0x901b,	// (0x000348f1) tabs_3_active_pane_srt_ParamLimits

0x901b,	// (0x000348f1) tabs_3_active_pane_srt

0x902c,	// (0x00034902) tabs_3_passive_pane_cp_srt_ParamLimits

0x902c,	// (0x00034902) tabs_3_passive_pane_cp_srt

0x903d,	// (0x00034913) tabs_3_passive_pane_srt_ParamLimits

0x903d,	// (0x00034913) tabs_3_passive_pane_srt

0x87a0,	// (0x00034076) bg_passive_tab_pane_cp2_srt_ParamLimits

0x87a0,	// (0x00034076) bg_passive_tab_pane_cp2_srt

0xa7eb,	// (0x000360c1) bg_passive_tab_pane_g1_cp2_srt

0xa3fe,	// (0x00035cd4) bg_passive_tab_pane_g2_cp2_srt

0xa7f4,	// (0x000360ca) bg_passive_tab_pane_g3_cp2_srt

0x75b3,	// (0x00032e89) bg_active_tab_pane_cp2_srt_ParamLimits

0x75b3,	// (0x00032e89) bg_active_tab_pane_cp2_srt

0xbcaf,	// (0x00037585) tabs_3_active_pane_srt_g1

0xd3b1,	// (0x00038c87) tabs_3_active_pane_srt_t1_ParamLimits

0xd3b1,	// (0x00038c87) tabs_3_active_pane_srt_t1

0xa7eb,	// (0x000360c1) bg_active_tab_pane_g1_cp2_srt

0xa3fe,	// (0x00035cd4) bg_active_tab_pane_g2_cp2_srt

0xa7f4,	// (0x000360ca) bg_active_tab_pane_g3_cp2_srt

0x8fd3,	// (0x000348a9) tabs_4_active_pane_srt_ParamLimits

0x8fd3,	// (0x000348a9) tabs_4_active_pane_srt

0x8fe5,	// (0x000348bb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8fe5,	// (0x000348bb) tabs_4_passive_pane_cp2_srt

0x876b,	// (0x00034041) aid_size_cell_toolbar

0xd610,	// (0x00038ee6) main_idle_act_pane_ParamLimits

0x88f5,	// (0x000341cb) popup_large_graphic_colour_window_ParamLimits

0x8ba9,	// (0x0003447f) popup_toolbar_window_ParamLimits

0x8ba9,	// (0x0003447f) popup_toolbar_window

0x6cb9,	// (0x0003258f) list_single_graphic_2heading_pane_ParamLimits

0x6cb9,	// (0x0003258f) list_single_graphic_2heading_pane

0x8125,	// (0x000339fb) aid_size_cell_apps_grid_lsc_pane

0x8137,	// (0x00033a0d) aid_size_cell_apps_grid_prt_pane

0x87a0,	// (0x00034076) bg_wml_button_pane_cp1_ParamLimits

0x87a0,	// (0x00034076) bg_wml_button_pane_cp1

0xacaa,	// (0x00036580) form_midp_field_text_pane_t1_ParamLimits

0xab00,	// (0x000363d6) input_focus_pane_cp050_ParamLimits

0xaccb,	// (0x000365a1) list_midp_form_text_pane_ParamLimits

0xac87,	// (0x0003655d) input_focus_pane_cp051_ParamLimits

0xac9b,	// (0x00036571) list_midp_choice_pane_ParamLimits

0xab84,	// (0x0003645a) list_single_2graphic_pane_cp3_ParamLimits

0xab84,	// (0x0003645a) list_single_2graphic_pane_cp3

0xab97,	// (0x0003646d) list_single_midp_graphic_pane_ParamLimits

0xab97,	// (0x0003646d) list_single_midp_graphic_pane

0x6b3c,	// (0x00032412) list_single_graphic_2heading_pane_g1_ParamLimits

0x6b3c,	// (0x00032412) list_single_graphic_2heading_pane_g1

0x6b48,	// (0x0003241e) list_single_graphic_2heading_pane_g4_ParamLimits

0x6b48,	// (0x0003241e) list_single_graphic_2heading_pane_g4

0x6512,	// (0x00031de8) list_single_graphic_2heading_pane_g5_ParamLimits

0x6512,	// (0x00031de8) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0003b066) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0003b066) list_single_graphic_2heading_pane_g

0x6b54,	// (0x0003242a) list_single_graphic_2heading_pane_t1_ParamLimits

0x6b54,	// (0x0003242a) list_single_graphic_2heading_pane_t1

0x6b68,	// (0x0003243e) list_single_graphic_2heading_pane_t2_ParamLimits

0x6b68,	// (0x0003243e) list_single_graphic_2heading_pane_t2

0x6b82,	// (0x00032458) list_single_graphic_2heading_pane_t3_ParamLimits

0x6b82,	// (0x00032458) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0003b06d) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0003b06d) list_single_graphic_2heading_pane_t

0xa9ca,	// (0x000362a0) bg_popup_sub_pane_cp2

0xa9f0,	// (0x000362c6) grid_toobar_pane

0x8c38,	// (0x0003450e) cell_toolbar_pane_ParamLimits

0x8c38,	// (0x0003450e) cell_toolbar_pane

0xaa26,	// (0x000362fc) cell_toolbar_pane_g1_ParamLimits

0xaa26,	// (0x000362fc) cell_toolbar_pane_g1

0xaa38,	// (0x0003630e) cell_toolbar_pane_g2_ParamLimits

0xaa38,	// (0x0003630e) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x0003b074) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x0003b074) cell_toolbar_pane_g

0xaa5a,	// (0x00036330) grid_highlight_pane_cp2_ParamLimits

0xaa5a,	// (0x00036330) grid_highlight_pane_cp2

0xaa74,	// (0x0003634a) toolbar_button_pane

0xaa80,	// (0x00036356) toolbar_button_pane_g1

0xaa88,	// (0x0003635e) toolbar_button_pane_g2

0xaa90,	// (0x00036366) toolbar_button_pane_g3

0xaa98,	// (0x0003636e) toolbar_button_pane_g4

0xaaa0,	// (0x00036376) toolbar_button_pane_g5

0xaaa8,	// (0x0003637e) toolbar_button_pane_g6

0xaab0,	// (0x00036386) toolbar_button_pane_g7

0xaab8,	// (0x0003638e) toolbar_button_pane_g8

0xaac0,	// (0x00036396) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x0003b079) toolbar_button_pane_g

0x8c67,	// (0x0003453d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8c67,	// (0x0003453d) list_single_2graphic_pane_g1_cp3

0x8c73,	// (0x00034549) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8c73,	// (0x00034549) list_single_2graphic_pane_g2_cp3

0xa575,	// (0x00035e4b) list_single_2graphic_pane_g3_cp3

0xaac8,	// (0x0003639e) list_single_2graphic_pane_g4_cp3_ParamLimits

0xaac8,	// (0x0003639e) list_single_2graphic_pane_g4_cp3

0x8c82,	// (0x00034558) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8c82,	// (0x00034558) list_single_2graphic_pane_t1_cp3

0xa569,	// (0x00035e3f) list_single_midp_graphic_pane_g2_ParamLimits

0xa569,	// (0x00035e3f) list_single_midp_graphic_pane_g2

0x6b2c,	// (0x00032402) aid_zoom_text_primary

0x8773,	// (0x00034049) aid_zoom_text_secondary

0xd8f4,	// (0x000391ca) status_small_pane_g7_ParamLimits

0xd8f4,	// (0x000391ca) status_small_pane_g7

0xd917,	// (0x000391ed) status_small_pane_t1_ParamLimits

0xd32c,	// (0x00038c02) title_pane_g2

0x0003,

0xf529,	// (0x0003adff) title_pane_g

0xd4f4,	// (0x00038dca) aid_size_cell_colour_1_pane_ParamLimits

0xd4f4,	// (0x00038dca) aid_size_cell_colour_1_pane

0xd508,	// (0x00038dde) aid_size_cell_colour_2_pane_ParamLimits

0xd508,	// (0x00038dde) aid_size_cell_colour_2_pane

0xd51c,	// (0x00038df2) aid_size_cell_colour_3_pane_ParamLimits

0xd51c,	// (0x00038df2) aid_size_cell_colour_3_pane

0xd530,	// (0x00038e06) aid_size_cell_colour_4_pane_ParamLimits

0xd530,	// (0x00038e06) aid_size_cell_colour_4_pane

0x7fd4,	// (0x000338aa) title_pane_stacon_g1_ParamLimits

0x7fd4,	// (0x000338aa) title_pane_stacon_g1

0xb06e,	// (0x00036944) popup_note_wait_window_g3_ParamLimits

0xb06e,	// (0x00036944) popup_note_wait_window_g3

0xb0e4,	// (0x000369ba) popup_note_wait_window_t5_ParamLimits

0xb0e4,	// (0x000369ba) popup_note_wait_window_t5

0x741f,	// (0x00032cf5) main_feb_china_hwr_fs_writing_pane

0x880a,	// (0x000340e0) popup_feb_china_hwr_fs_window_ParamLimits

0x880a,	// (0x000340e0) popup_feb_china_hwr_fs_window

0x8cb2,	// (0x00034588) aid_size_cell_hwr_fs_ParamLimits

0x8cb2,	// (0x00034588) aid_size_cell_hwr_fs

0xab00,	// (0x000363d6) bg_popup_sub_pane_cp3_ParamLimits

0xab00,	// (0x000363d6) bg_popup_sub_pane_cp3

0x8cc7,	// (0x0003459d) grid_hwr_fs_pane_ParamLimits

0x8cc7,	// (0x0003459d) grid_hwr_fs_pane

0x8cdb,	// (0x000345b1) linegrid_hwr_fs_pane_ParamLimits

0x8cdb,	// (0x000345b1) linegrid_hwr_fs_pane

0x8ceb,	// (0x000345c1) cell_hwr_fs_pane_ParamLimits

0x8ceb,	// (0x000345c1) cell_hwr_fs_pane

0xab0c,	// (0x000363e2) linegrid_hwr_fs_pane_g1_ParamLimits

0xab0c,	// (0x000363e2) linegrid_hwr_fs_pane_g1

0xdc76,	// (0x0003954c) linegrid_hwr_fs_pane_g2_ParamLimits

0xdc76,	// (0x0003954c) linegrid_hwr_fs_pane_g2

0xab18,	// (0x000363ee) linegrid_hwr_fs_pane_g3_ParamLimits

0xab18,	// (0x000363ee) linegrid_hwr_fs_pane_g3

0x8d09,	// (0x000345df) linegrid_hwr_fs_pane_g4_ParamLimits

0x8d09,	// (0x000345df) linegrid_hwr_fs_pane_g4

0x8d23,	// (0x000345f9) linegrid_hwr_fs_pane_g5_ParamLimits

0x8d23,	// (0x000345f9) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x0003b0a4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x0003b0a4) linegrid_hwr_fs_pane_g

0xab24,	// (0x000363fa) cell_hwr_fs_pane_g1_ParamLimits

0xab24,	// (0x000363fa) cell_hwr_fs_pane_g1

0xa998,	// (0x0003626e) cell_hwr_fs_pane_g2_ParamLimits

0xa998,	// (0x0003626e) cell_hwr_fs_pane_g2

0xdc88,	// (0x0003955e) cell_hwr_fs_pane_g3_ParamLimits

0xdc88,	// (0x0003955e) cell_hwr_fs_pane_g3

0xdc95,	// (0x0003956b) cell_hwr_fs_pane_g4_ParamLimits

0xdc95,	// (0x0003956b) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x0003b0af) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x0003b0af) cell_hwr_fs_pane_g

0x8d39,	// (0x0003460f) cell_hwr_fs_pane_t1

0x741f,	// (0x00032cf5) grid_highlight_pane_cp6

0x741f,	// (0x00032cf5) main_idle_act2_pane

0x7df2,	// (0x000336c8) aid_inside_area_popup_secondary

0xdd20,	// (0x000395f6) aid_inside_area_window_primary_ParamLimits

0xdd20,	// (0x000395f6) aid_inside_area_window_primary

0xbdbd,	// (0x00037693) ai2_news_ticker_pane

0xbdc5,	// (0x0003769b) aid_size_cell_ai1_link_ParamLimits

0xbdc5,	// (0x0003769b) aid_size_cell_ai1_link

0xe808,	// (0x0003a0de) popup_ai2_data_window_ParamLimits

0xe808,	// (0x0003a0de) popup_ai2_data_window

0xbddf,	// (0x000376b5) popup_ai2_link_window_ParamLimits

0xbddf,	// (0x000376b5) popup_ai2_link_window

0xab00,	// (0x000363d6) bg_popup_sub_pane_cp4_ParamLimits

0xab00,	// (0x000363d6) bg_popup_sub_pane_cp4

0xbdf3,	// (0x000376c9) grid_ai2_link_pane_ParamLimits

0xbdf3,	// (0x000376c9) grid_ai2_link_pane

0xbe0a,	// (0x000376e0) popup_ai2_link_window_g1_ParamLimits

0xbe0a,	// (0x000376e0) popup_ai2_link_window_g1

0xbe16,	// (0x000376ec) popup_ai2_link_window_g2_ParamLimits

0xbe16,	// (0x000376ec) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x0003b27d) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x0003b27d) popup_ai2_link_window_g

0xbe25,	// (0x000376fb) ai2_mp_button_pane

0xbe2d,	// (0x00037703) ai2_mp_volume_pane

0xac87,	// (0x0003655d) bg_popup_sub_pane_cp5_ParamLimits

0xac87,	// (0x0003655d) bg_popup_sub_pane_cp5

0xbe35,	// (0x0003770b) heading_ai2_gene_pane_ParamLimits

0xbe35,	// (0x0003770b) heading_ai2_gene_pane

0xbe41,	// (0x00037717) list_ai2_gene_pane_ParamLimits

0xbe41,	// (0x00037717) list_ai2_gene_pane

0xbe89,	// (0x0003775f) cell_ai2_link_pane_ParamLimits

0xbe89,	// (0x0003775f) cell_ai2_link_pane

0xbe9f,	// (0x00037775) cell_ai2_link_pane_g1

0x741f,	// (0x00032cf5) grid_highlight_pane_cp7

0x908b,	// (0x00034961) ai2_mp_volume_pane_g1

0xbf3c,	// (0x00037812) ai2_mp_volume_pane_g2

0xe833,	// (0x0003a109) list_ai2_gene_pane_t1

0xbf44,	// (0x0003781a) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x0003b296) ai2_mp_volume_pane_g

0x9093,	// (0x00034969) volume_small_pane_cp3

0xbf4c,	// (0x00037822) aid_size_cell_ai2_button

0xbf54,	// (0x0003782a) grid_ai2_button_pane

0xbf5d,	// (0x00037833) cell_ai2_button_pane_ParamLimits

0xbf5d,	// (0x00037833) cell_ai2_button_pane

0x7260,	// (0x00032b36) cell_ai2_button_pane_g1

0x741f,	// (0x00032cf5) grid_highlight_pane_cp8

0xbefc,	// (0x000377d2) ai2_gene_pane_t1_ParamLimits

0xbefc,	// (0x000377d2) ai2_gene_pane_t1

0x8761,	// (0x00034037) aid_height_parent_landscape

0xbbb6,	// (0x0003748c) aid_height_set_list

0xbbc2,	// (0x00037498) aid_size_parent

0xbc8d,	// (0x00037563) aid_size_cell_graphic_pane_ParamLimits

0xbe51,	// (0x00037727) popup_ai2_data_window_g1_ParamLimits

0xbe51,	// (0x00037727) popup_ai2_data_window_g1

0xbe5d,	// (0x00037733) ai2_news_ticker_pane_g1

0xbe65,	// (0x0003773b) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x0003b282) ai2_news_ticker_pane_g

0xbe6d,	// (0x00037743) ai2_news_ticker_pane_t1

0xbe7b,	// (0x00037751) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x0003b287) ai2_news_ticker_pane_t

0xbea8,	// (0x0003777e) heading_ai2_gene_pane_g1

0xbeb0,	// (0x00037786) heading_ai2_gene_pane_t1_ParamLimits

0xbeb0,	// (0x00037786) heading_ai2_gene_pane_t1

0xbec5,	// (0x0003779b) list_highlight_pane_cp6

0xe81c,	// (0x0003a0f2) ai2_gene_pane_ParamLimits

0xe81c,	// (0x0003a0f2) ai2_gene_pane

0xe841,	// (0x0003a117) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x0003b28c) list_ai2_gene_pane_t

0xbecd,	// (0x000377a3) list_highlight_pane_cp8_ParamLimits

0xbecd,	// (0x000377a3) list_highlight_pane_cp8

0xbede,	// (0x000377b4) ai2_gene_pane_g1_ParamLimits

0xbede,	// (0x000377b4) ai2_gene_pane_g1

0xbef0,	// (0x000377c6) ai2_gene_pane_g2_ParamLimits

0xbef0,	// (0x000377c6) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x0003b291) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x0003b291) ai2_gene_pane_g

0x7b9a,	// (0x00033470) scroll_pane_cp12

0x8718,	// (0x00033fee) control_pane_t3_ParamLimits

0x8718,	// (0x00033fee) control_pane_t3

0xd908,	// (0x000391de) status_small_pane_g8_ParamLimits

0xd908,	// (0x000391de) status_small_pane_g8

0x88ca,	// (0x000341a0) popup_find_window_ParamLimits

0x8a4c,	// (0x00034322) popup_note_image_window_ParamLimits

0x65cf,	// (0x00031ea5) list_double2_graphic_pane_vc_g1_ParamLimits

0x65cf,	// (0x00031ea5) list_double2_graphic_pane_vc_g1

0x7c34,	// (0x0003350a) list_double2_graphic_pane_vc_g2_ParamLimits

0x7c34,	// (0x0003350a) list_double2_graphic_pane_vc_g2

0x7c40,	// (0x00033516) list_double2_graphic_pane_vc_g3_ParamLimits

0x7c40,	// (0x00033516) list_double2_graphic_pane_vc_g3

0x0002,

0xf5f5,	// (0x0003aecb) list_double2_graphic_pane_vc_g_ParamLimits

0xf5f5,	// (0x0003aecb) list_double2_graphic_pane_vc_g

0x65db,	// (0x00031eb1) list_double2_graphic_pane_vc_t1_ParamLimits

0x65db,	// (0x00031eb1) list_double2_graphic_pane_vc_t1

0x7c34,	// (0x0003350a) list_single_heading_pane_vc_g1_ParamLimits

0x7c34,	// (0x0003350a) list_single_heading_pane_vc_g1

0x7c40,	// (0x00033516) list_single_heading_pane_vc_g2_ParamLimits

0x7c40,	// (0x00033516) list_single_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003b08e) list_single_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003b08e) list_single_heading_pane_vc_g

0x6b9a,	// (0x00032470) list_single_heading_pane_vc_t1_ParamLimits

0x6b9a,	// (0x00032470) list_single_heading_pane_vc_t1

0x6bb0,	// (0x00032486) list_single_heading_pane_vc_t2_ParamLimits

0x6bb0,	// (0x00032486) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x0003b093) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x0003b093) list_single_heading_pane_vc_t

0x6bc2,	// (0x00032498) list_setting_number_pane_vc_g1_ParamLimits

0x6bc2,	// (0x00032498) list_setting_number_pane_vc_g1

0x6bce,	// (0x000324a4) list_setting_number_pane_vc_g2_ParamLimits

0x6bce,	// (0x000324a4) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x0003b098) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x0003b098) list_setting_number_pane_vc_g

0x6bda,	// (0x000324b0) list_setting_number_pane_vc_t1_ParamLimits

0x6bda,	// (0x000324b0) list_setting_number_pane_vc_t1

0x6bee,	// (0x000324c4) list_setting_number_pane_vc_t2_ParamLimits

0x6bee,	// (0x000324c4) list_setting_number_pane_vc_t2

0x6c0a,	// (0x000324e0) list_setting_number_pane_vc_t3_ParamLimits

0x6c0a,	// (0x000324e0) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x0003b09d) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x0003b09d) list_setting_number_pane_vc_t

0x6c32,	// (0x00032508) set_value_pane_vc_ParamLimits

0x6c32,	// (0x00032508) set_value_pane_vc

0x6cb9,	// (0x0003258f) list_double2_graphic_pane_vc_ParamLimits

0x6cb9,	// (0x0003258f) list_double2_graphic_pane_vc

0x8f65,	// (0x0003483b) list_double2_large_graphic_pane_vc_ParamLimits

0x8f65,	// (0x0003483b) list_double2_large_graphic_pane_vc

0x6cb9,	// (0x0003258f) list_double2_pane_vc_ParamLimits

0x6cb9,	// (0x0003258f) list_double2_pane_vc

0x6cb9,	// (0x0003258f) list_double_graphic_heading_pane_vc_ParamLimits

0x6cb9,	// (0x0003258f) list_double_graphic_heading_pane_vc

0x6cb9,	// (0x0003258f) list_double_graphic_pane_vc_ParamLimits

0x6cb9,	// (0x0003258f) list_double_graphic_pane_vc

0x6cb9,	// (0x0003258f) list_double_heading_pane_vc_ParamLimits

0x6cb9,	// (0x0003258f) list_double_heading_pane_vc

0x8f76,	// (0x0003484c) list_double_large_graphic_pane_vc_ParamLimits

0x8f76,	// (0x0003484c) list_double_large_graphic_pane_vc

0x6cb9,	// (0x0003258f) list_double_number_pane_vc_ParamLimits

0x6cb9,	// (0x0003258f) list_double_number_pane_vc

0x6cb9,	// (0x0003258f) list_double_pane_vc_ParamLimits

0x6cb9,	// (0x0003258f) list_double_pane_vc

0x6cb9,	// (0x0003258f) list_double_time_pane_vc_ParamLimits

0x6cb9,	// (0x0003258f) list_double_time_pane_vc

0x6cb9,	// (0x0003258f) list_setting_number_pane_vc_ParamLimits

0x6cb9,	// (0x0003258f) list_setting_number_pane_vc

0x6cb9,	// (0x0003258f) list_setting_pane_vc_ParamLimits

0x6cb9,	// (0x0003258f) list_setting_pane_vc

0x6cb9,	// (0x0003258f) list_single_graphic_heading_pane_vc_ParamLimits

0x6cb9,	// (0x0003258f) list_single_graphic_heading_pane_vc

0x6cb9,	// (0x0003258f) list_single_heading_pane_vc_ParamLimits

0x6cb9,	// (0x0003258f) list_single_heading_pane_vc

0x8f92,	// (0x00034868) list_single_number_heading_pane_vc_ParamLimits

0x8f92,	// (0x00034868) list_single_number_heading_pane_vc

0x65cf,	// (0x00031ea5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x65cf,	// (0x00031ea5) list_double_graphic_heading_pane_vc_g1

0x7c34,	// (0x0003350a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7c34,	// (0x0003350a) list_double_graphic_heading_pane_vc_g2

0x7c40,	// (0x00033516) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7c40,	// (0x00033516) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5f5,	// (0x0003aecb) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5f5,	// (0x0003aecb) list_double_graphic_heading_pane_vc_g

0x6cf6,	// (0x000325cc) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6cf6,	// (0x000325cc) list_double_graphic_heading_pane_vc_t1

0x6d0c,	// (0x000325e2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6d0c,	// (0x000325e2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c7,	// (0x0003b29d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c7,	// (0x0003b29d) list_double_graphic_heading_pane_vc_t

0x6bc2,	// (0x00032498) list_setting_pane_vc_g1_ParamLimits

0x6bc2,	// (0x00032498) list_setting_pane_vc_g1

0x6bce,	// (0x000324a4) list_setting_pane_vc_g2_ParamLimits

0x6bce,	// (0x000324a4) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x0003b098) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x0003b098) list_setting_pane_vc_g

0x6d24,	// (0x000325fa) list_setting_pane_vc_t1_ParamLimits

0x6d24,	// (0x000325fa) list_setting_pane_vc_t1

0x6d38,	// (0x0003260e) list_setting_pane_vc_t2_ParamLimits

0x6d38,	// (0x0003260e) list_setting_pane_vc_t2

0x0001,

0xfa0a,	// (0x0003b2e0) list_setting_pane_vc_t_ParamLimits

0xfa0a,	// (0x0003b2e0) list_setting_pane_vc_t

0x6c32,	// (0x00032508) set_value_pane_cp_vc_ParamLimits

0x6c32,	// (0x00032508) set_value_pane_cp_vc

0x7c34,	// (0x0003350a) list_single_number_heading_pane_vc_g1_ParamLimits

0x7c34,	// (0x0003350a) list_single_number_heading_pane_vc_g1

0x7c40,	// (0x00033516) list_single_number_heading_pane_vc_g2_ParamLimits

0x7c40,	// (0x00033516) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003b08e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003b08e) list_single_number_heading_pane_vc_g

0x6b9a,	// (0x00032470) list_single_number_heading_pane_vc_t1_ParamLimits

0x6b9a,	// (0x00032470) list_single_number_heading_pane_vc_t1

0x6d4c,	// (0x00032622) list_single_number_heading_pane_vc_t2_ParamLimits

0x6d4c,	// (0x00032622) list_single_number_heading_pane_vc_t2

0x6d5e,	// (0x00032634) list_single_number_heading_pane_vc_t3_ParamLimits

0x6d5e,	// (0x00032634) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0f,	// (0x0003b2e5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0003b2e5) list_single_number_heading_pane_vc_t

0x65cf,	// (0x00031ea5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x65cf,	// (0x00031ea5) list_single_graphic_heading_pane_vc_g1

0x7c34,	// (0x0003350a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7c34,	// (0x0003350a) list_single_graphic_heading_pane_vc_g4

0x7c40,	// (0x00033516) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7c40,	// (0x00033516) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5f5,	// (0x0003aecb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5f5,	// (0x0003aecb) list_single_graphic_heading_pane_vc_g

0x6b9a,	// (0x00032470) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6b9a,	// (0x00032470) list_single_graphic_heading_pane_vc_t1

0x6d70,	// (0x00032646) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6d70,	// (0x00032646) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x0003b2ec) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x0003b2ec) list_single_graphic_heading_pane_vc_t

0x7c34,	// (0x0003350a) list_double2_pane_vc_g1_ParamLimits

0x7c34,	// (0x0003350a) list_double2_pane_vc_g1

0x7c40,	// (0x00033516) list_double2_pane_vc_g2_ParamLimits

0x7c40,	// (0x00033516) list_double2_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003b08e) list_double2_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003b08e) list_double2_pane_vc_g

0x6d82,	// (0x00032658) list_double2_pane_vc_t1_ParamLimits

0x6d82,	// (0x00032658) list_double2_pane_vc_t1

0x7be4,	// (0x000334ba) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7be4,	// (0x000334ba) list_double2_large_graphic_pane_vc_g1

0x7bf0,	// (0x000334c6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7bf0,	// (0x000334c6) list_double2_large_graphic_pane_vc_g2

0x7bfc,	// (0x000334d2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7bfc,	// (0x000334d2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0003ae9b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0003ae9b) list_double2_large_graphic_pane_vc_g

0x64c5,	// (0x00031d9b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x64c5,	// (0x00031d9b) list_double2_large_graphic_pane_vc_t1

0x6d98,	// (0x0003266e) list_double_time_pane_vc_g1_ParamLimits

0x6d98,	// (0x0003266e) list_double_time_pane_vc_g1

0x6da4,	// (0x0003267a) list_double_time_pane_vc_g2_ParamLimits

0x6da4,	// (0x0003267a) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0003b2f1) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0003b2f1) list_double_time_pane_vc_g

0x6db0,	// (0x00032686) list_double_time_pane_vc_t1_ParamLimits

0x6db0,	// (0x00032686) list_double_time_pane_vc_t1

0x6dce,	// (0x000326a4) list_double_time_pane_vc_t2_ParamLimits

0x6dce,	// (0x000326a4) list_double_time_pane_vc_t2

0x6e17,	// (0x000326ed) list_double_time_pane_vc_t3_ParamLimits

0x6e17,	// (0x000326ed) list_double_time_pane_vc_t3

0x6e29,	// (0x000326ff) list_double_time_pane_vc_t4_ParamLimits

0x6e29,	// (0x000326ff) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0003b2f6) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0003b2f6) list_double_time_pane_vc_t

0x7c34,	// (0x0003350a) list_double_pane_vc_g1_ParamLimits

0x7c34,	// (0x0003350a) list_double_pane_vc_g1

0x7c40,	// (0x00033516) list_double_pane_vc_g2_ParamLimits

0x7c40,	// (0x00033516) list_double_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003b08e) list_double_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003b08e) list_double_pane_vc_g

0x6e3b,	// (0x00032711) list_double_pane_vc_t1_ParamLimits

0x6e3b,	// (0x00032711) list_double_pane_vc_t1

0x6e4d,	// (0x00032723) list_double_pane_vc_t2_ParamLimits

0x6e4d,	// (0x00032723) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0003b2ff) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0003b2ff) list_double_pane_vc_t

0x7c34,	// (0x0003350a) list_double_number_pane_vc_g1_ParamLimits

0x7c34,	// (0x0003350a) list_double_number_pane_vc_g1

0x7c40,	// (0x00033516) list_double_number_pane_vc_g2_ParamLimits

0x7c40,	// (0x00033516) list_double_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003b08e) list_double_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003b08e) list_double_number_pane_vc_g

0x6e63,	// (0x00032739) list_double_number_pane_vc_t1_ParamLimits

0x6e63,	// (0x00032739) list_double_number_pane_vc_t1

0x6e77,	// (0x0003274d) list_double_number_pane_vc_t2_ParamLimits

0x6e77,	// (0x0003274d) list_double_number_pane_vc_t2

0x6e89,	// (0x0003275f) list_double_number_pane_vc_t3_ParamLimits

0x6e89,	// (0x0003275f) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0003b304) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003b304) list_double_number_pane_vc_t

0x90ed,	// (0x000349c3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x90ed,	// (0x000349c3) list_double_large_graphic_pane_vc_g1

0x9115,	// (0x000349eb) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9115,	// (0x000349eb) list_double_large_graphic_pane_vc_g2

0x9129,	// (0x000349ff) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9129,	// (0x000349ff) list_double_large_graphic_pane_vc_g3

0x6e9f,	// (0x00032775) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6e9f,	// (0x00032775) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0003b30b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0003b30b) list_double_large_graphic_pane_vc_g

0x6eaf,	// (0x00032785) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6eaf,	// (0x00032785) list_double_large_graphic_pane_vc_t1

0x6ec9,	// (0x0003279f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6ec9,	// (0x0003279f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0003b314) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003b314) list_double_large_graphic_pane_vc_t

0x7c34,	// (0x0003350a) list_double_heading_pane_vc_g1_ParamLimits

0x7c34,	// (0x0003350a) list_double_heading_pane_vc_g1

0x7c40,	// (0x00033516) list_double_heading_pane_vc_g2_ParamLimits

0x7c40,	// (0x00033516) list_double_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003b08e) list_double_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003b08e) list_double_heading_pane_vc_g

0x6ee9,	// (0x000327bf) list_double_heading_pane_vc_t1_ParamLimits

0x6ee9,	// (0x000327bf) list_double_heading_pane_vc_t1

0x6b9a,	// (0x00032470) list_double_heading_pane_vc_t2_ParamLimits

0x6b9a,	// (0x00032470) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0003b319) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0003b319) list_double_heading_pane_vc_t

0x6efb,	// (0x000327d1) list_double_graphic_pane_vc_g1_ParamLimits

0x6efb,	// (0x000327d1) list_double_graphic_pane_vc_g1

0x6f07,	// (0x000327dd) list_double_graphic_pane_vc_g2_ParamLimits

0x6f07,	// (0x000327dd) list_double_graphic_pane_vc_g2

0x7c34,	// (0x0003350a) list_double_graphic_pane_vc_g3_ParamLimits

0x7c34,	// (0x0003350a) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0003b31e) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0003b31e) list_double_graphic_pane_vc_g

0x6f24,	// (0x000327fa) list_double_graphic_pane_vc_t1_ParamLimits

0x6f24,	// (0x000327fa) list_double_graphic_pane_vc_t1

0x6f42,	// (0x00032818) list_double_graphic_pane_vc_t2_ParamLimits

0x6f42,	// (0x00032818) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0003b327) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0003b327) list_double_graphic_pane_vc_t

0x727a,	// (0x00032b50) aid_size_cell_fastswap

0x7282,	// (0x00032b58) aid_size_cell_touch_ParamLimits

0x7282,	// (0x00032b58) aid_size_cell_touch

0x7449,	// (0x00032d1f) popup_fast_swap_wide_window_ParamLimits

0x7449,	// (0x00032d1f) popup_fast_swap_wide_window

0x750f,	// (0x00032de5) touch_pane_ParamLimits

0x750f,	// (0x00032de5) touch_pane

0x6880,	// (0x00032156) button_value_adjust_pane_cp2

0x6888,	// (0x0003215e) button_value_adjust_pane_cp4

0x68a8,	// (0x0003217e) form_field_data_pane_cp2

0x68c7,	// (0x0003219d) form_field_data_wide_pane_cp2

0x816f,	// (0x00033a45) bg_scroll_pane_ParamLimits

0x818e,	// (0x00033a64) scroll_handle_pane_ParamLimits

0x81a2,	// (0x00033a78) scroll_sc2_down_pane_ParamLimits

0x81a2,	// (0x00033a78) scroll_sc2_down_pane

0x81c9,	// (0x00033a9f) scroll_sc2_up_pane_ParamLimits

0x81c9,	// (0x00033a9f) scroll_sc2_up_pane

0xe978,	// (0x0003a24e) grid_wheel_folder_pane_g1_ParamLimits

0xe978,	// (0x0003a24e) grid_wheel_folder_pane_g1

0x8512,	// (0x00033de8) clock_nsta_pane_cp2_ParamLimits

0x8512,	// (0x00033de8) clock_nsta_pane_cp2

0xd815,	// (0x000390eb) listscroll_midp_pane_ParamLimits

0xd821,	// (0x000390f7) midp_canvas_pane

0x8759,	// (0x0003402f) nsta_clock_indic_pane

0xa8a9,	// (0x0003617f) listscroll_form_pane_vc

0xa8b1,	// (0x00036187) listscroll_set_pane_vc_ParamLimits

0xa8b1,	// (0x00036187) listscroll_set_pane_vc

0xda24,	// (0x000392fa) clock_nsta_pane

0xda37,	// (0x0003930d) indicator_nsta_pane

0xa9ca,	// (0x000362a0) bg_popup_sub_pane_cp2_ParamLimits

0xa9de,	// (0x000362b4) find_pane_cp2_ParamLimits

0xa9de,	// (0x000362b4) find_pane_cp2

0xa9f0,	// (0x000362c6) grid_toobar_pane_ParamLimits

0xaad4,	// (0x000363aa) list_form_gen_pane_vc_ParamLimits

0xaad4,	// (0x000363aa) list_form_gen_pane_vc

0xaaea,	// (0x000363c0) scroll_pane_cp8_vc_ParamLimits

0xaaea,	// (0x000363c0) scroll_pane_cp8_vc

0xab3a,	// (0x00036410) data_form_wide_pane_vc_ParamLimits

0xab3a,	// (0x00036410) data_form_wide_pane_vc

0xab46,	// (0x0003641c) form_field_data_wide_pane_vc_g1

0xab4e,	// (0x00036424) form_field_data_wide_pane_vc_t1_ParamLimits

0xab4e,	// (0x00036424) form_field_data_wide_pane_vc_t1

0x7cb5,	// (0x0003358b) input_focus_pane_cp6_vc_ParamLimits

0x7cb5,	// (0x0003358b) input_focus_pane_cp6_vc

0xdcbe,	// (0x00039594) list_midp_pane_ParamLimits

0xdcca,	// (0x000395a0) scroll_pane_cp16_ParamLimits

0xdcca,	// (0x000395a0) scroll_pane_cp16

0xae54,	// (0x0003672a) button_value_adjust_pane_ParamLimits

0xae54,	// (0x0003672a) button_value_adjust_pane

0xde1b,	// (0x000396f1) button_value_adjust_pane_cp6_ParamLimits

0xde1b,	// (0x000396f1) button_value_adjust_pane_cp6

0xdf23,	// (0x000397f9) settings_code_pane_cp_ParamLimits

0xdf23,	// (0x000397f9) settings_code_pane_cp

0x7260,	// (0x00032b36) cell_touch_pane_g1

0x7260,	// (0x00032b36) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0003afb9) cell_touch_pane_g

0xe84f,	// (0x0003a125) cell_touch_pane_cp_ParamLimits

0xe84f,	// (0x0003a125) cell_touch_pane_cp

0xe85f,	// (0x0003a135) cell_touch_pane_ParamLimits

0xe85f,	// (0x0003a135) cell_touch_pane

0x7260,	// (0x00032b36) scroll_sc2_down_pane_g1

0x7260,	// (0x00032b36) scroll_sc2_up_pane_g1

0x741f,	// (0x00032cf5) bg_set_opt_pane_cp4_vc

0xbf6f,	// (0x00037845) list_set_graphic_pane_vc_g1_ParamLimits

0xbf6f,	// (0x00037845) list_set_graphic_pane_vc_g1

0xbf7b,	// (0x00037851) list_set_graphic_pane_vc_g2_ParamLimits

0xbf7b,	// (0x00037851) list_set_graphic_pane_vc_g2

0x0001,

0xf9cc,	// (0x0003b2a2) list_set_graphic_pane_vc_g_ParamLimits

0xf9cc,	// (0x0003b2a2) list_set_graphic_pane_vc_g

0xbf87,	// (0x0003785d) text_primary_small_cp13_vc_ParamLimits

0xbf87,	// (0x0003785d) text_primary_small_cp13_vc

0xbf9f,	// (0x00037875) list_set_graphic_pane_vc_ParamLimits

0xbf9f,	// (0x00037875) list_set_graphic_pane_vc

0x741f,	// (0x00032cf5) input_focus_pane_cp2_vc

0x7260,	// (0x00032b36) setting_code_pane_vc_g1

0xbfb2,	// (0x00037888) setting_code_pane_vc_t1

0xbfc0,	// (0x00037896) set_text_pane_vc_t1_ParamLimits

0xbfc0,	// (0x00037896) set_text_pane_vc_t1

0x741f,	// (0x00032cf5) input_focus_pane_cp1_vc

0xbfdb,	// (0x000378b1) list_set_text_pane_vc

0x7260,	// (0x00032b36) setting_text_pane_vc_g1

0x741f,	// (0x00032cf5) bg_set_opt_pane_cp2_vc

0xbfe5,	// (0x000378bb) setting_slider_graphic_pane_vc_g1

0xbfed,	// (0x000378c3) setting_slider_graphic_pane_vc_t1

0xbffb,	// (0x000378d1) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d1,	// (0x0003b2a7) setting_slider_graphic_pane_vc_t

0xc009,	// (0x000378df) slider_set_pane_cp_vc

0xc011,	// (0x000378e7) slider_set_pane_vc_g1

0xc01a,	// (0x000378f0) slider_set_pane_vc_g2

0x0006,

0xf9d6,	// (0x0003b2ac) slider_set_pane_vc_g

0x7d04,	// (0x000335da) set_opt_bg_pane_g1_copy1

0x7d0c,	// (0x000335e2) set_opt_bg_pane_g2_copy1

0xc046,	// (0x0003791c) set_opt_bg_pane_g3_copy1

0x7d1c,	// (0x000335f2) set_opt_bg_pane_g4_copy1

0x7d24,	// (0x000335fa) set_opt_bg_pane_g5_copy1

0x7d2c,	// (0x00033602) set_opt_bg_pane_g6_copy1

0xc04e,	// (0x00037924) set_opt_bg_pane_g7_copy1

0xc056,	// (0x0003792c) set_opt_bg_pane_g8_copy1

0xc05e,	// (0x00037934) set_opt_bg_pane_g9_copy1

0x741f,	// (0x00032cf5) bg_set_opt_pane_cp_vc

0xc066,	// (0x0003793c) setting_slider_pane_vc_t1

0xbfed,	// (0x000378c3) setting_slider_pane_vc_t2

0xbffb,	// (0x000378d1) setting_slider_pane_vc_t3

0x0002,

0xf9e5,	// (0x0003b2bb) setting_slider_pane_vc_t

0xc009,	// (0x000378df) slider_set_pane_vc

0x8d47,	// (0x0003461d) volume_set_pane_vc_g1

0x909c,	// (0x00034972) volume_set_pane_vc_g2

0x90a5,	// (0x0003497b) volume_set_pane_vc_g3

0x90ae,	// (0x00034984) volume_set_pane_vc_g4

0x90b7,	// (0x0003498d) volume_set_pane_vc_g5

0x90c0,	// (0x00034996) volume_set_pane_vc_g6

0x90c9,	// (0x0003499f) volume_set_pane_vc_g7

0x90d2,	// (0x000349a8) volume_set_pane_vc_g8

0x90db,	// (0x000349b1) volume_set_pane_vc_g9

0x90e4,	// (0x000349ba) volume_set_pane_vc_g10

0x0009,

0xf9ec,	// (0x0003b2c2) volume_set_pane_vc_g

0xc075,	// (0x0003794b) volume_set_pane_vc

0xc07d,	// (0x00037953) button_value_adjust_pane_cp1_vc

0xc087,	// (0x0003795d) list_highlight_pane_cp2_vc

0xc090,	// (0x00037966) list_set_pane_vc_ParamLimits

0xc090,	// (0x00037966) list_set_pane_vc

0xc0e2,	// (0x000379b8) main_pane_set_vc_t1_ParamLimits

0xc0e2,	// (0x000379b8) main_pane_set_vc_t1

0xc0f7,	// (0x000379cd) main_pane_set_vc_t2_ParamLimits

0xc0f7,	// (0x000379cd) main_pane_set_vc_t2

0xc109,	// (0x000379df) main_pane_set_vc_t3_ParamLimits

0xc109,	// (0x000379df) main_pane_set_vc_t3

0xc11b,	// (0x000379f1) main_pane_set_vc_t4_ParamLimits

0xc11b,	// (0x000379f1) main_pane_set_vc_t4

0x0003,

0xfa01,	// (0x0003b2d7) main_pane_set_vc_t_ParamLimits

0xfa01,	// (0x0003b2d7) main_pane_set_vc_t

0xc12d,	// (0x00037a03) setting_code_pane_vc_ParamLimits

0xc12d,	// (0x00037a03) setting_code_pane_vc

0xc13c,	// (0x00037a12) setting_slider_graphic_pane_vc

0xc13c,	// (0x00037a12) setting_slider_pane_vc

0xc13c,	// (0x00037a12) setting_text_pane_vc

0xc13c,	// (0x00037a12) setting_volume_pane_vc

0xc144,	// (0x00037a1a) scroll_pane_cp121_vc

0x7ca0,	// (0x00033576) set_content_pane_vc

0xc14c,	// (0x00037a22) button_value_adjust_pane_g1

0xc155,	// (0x00037a2b) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0003b32c) button_value_adjust_pane_g

0xc15e,	// (0x00037a34) form_field_slider_wide_pane_vc_t1_ParamLimits

0xc15e,	// (0x00037a34) form_field_slider_wide_pane_vc_t1

0xc174,	// (0x00037a4a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xc174,	// (0x00037a4a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0003b331) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003b331) form_field_slider_wide_pane_vc_t

0x7778,	// (0x0003304e) input_focus_pane_cp10_vc_ParamLimits

0x7778,	// (0x0003304e) input_focus_pane_cp10_vc

0xc19f,	// (0x00037a75) slider_cont_pane_cp1_vc_ParamLimits

0xc19f,	// (0x00037a75) slider_cont_pane_cp1_vc

0xc011,	// (0x000378e7) slider_form_pane_g1_cp2

0xc01a,	// (0x000378f0) slider_form_pane_g2_cp2

0xc1ba,	// (0x00037a90) form_field_slider_pane_vc_t3

0xc1c8,	// (0x00037a9e) form_field_slider_pane_vc_t4

0xc1d6,	// (0x00037aac) slider_form_pane_vc_ParamLimits

0xc1d6,	// (0x00037aac) slider_form_pane_vc

0xc1e3,	// (0x00037ab9) form_field_slider_pane_vc_t1_ParamLimits

0xc1e3,	// (0x00037ab9) form_field_slider_pane_vc_t1

0xc1f9,	// (0x00037acf) form_field_slider_pane_vc_t2_ParamLimits

0xc1f9,	// (0x00037acf) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0003b343) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003b343) form_field_slider_pane_vc_t

0x7778,	// (0x0003304e) input_focus_pane_cp9_vc_ParamLimits

0x7778,	// (0x0003304e) input_focus_pane_cp9_vc

0xc20b,	// (0x00037ae1) slider_cont_pane_vc_ParamLimits

0xc20b,	// (0x00037ae1) slider_cont_pane_vc

0xc21d,	// (0x00037af3) list_form_graphic_pane_cp_vc_ParamLimits

0xc21d,	// (0x00037af3) list_form_graphic_pane_cp_vc

0xab46,	// (0x0003641c) form_field_popup_wide_pane_vc_g1

0xc232,	// (0x00037b08) form_field_popup_wide_pane_vc_t1_ParamLimits

0xc232,	// (0x00037b08) form_field_popup_wide_pane_vc_t1

0x7cb5,	// (0x0003358b) input_focus_pane_cp8_vc_ParamLimits

0x7cb5,	// (0x0003358b) input_focus_pane_cp8_vc

0xc271,	// (0x00037b47) list_form_wide_pane_vc_ParamLimits

0xc271,	// (0x00037b47) list_form_wide_pane_vc

0xc27d,	// (0x00037b53) list_form_graphic_pane_vc_g1

0xc285,	// (0x00037b5b) list_form_graphic_pane_vc_t1_ParamLimits

0xc285,	// (0x00037b5b) list_form_graphic_pane_vc_t1

0x75b3,	// (0x00032e89) list_highlight_pane_cp5_vc_ParamLimits

0x75b3,	// (0x00032e89) list_highlight_pane_cp5_vc

0xc2a1,	// (0x00037b77) list_form_graphic_pane_vc_ParamLimits

0xc2a1,	// (0x00037b77) list_form_graphic_pane_vc

0xab46,	// (0x0003641c) form_field_popup_pane_vc_g1

0xc2b7,	// (0x00037b8d) form_field_popup_pane_vc_t1_ParamLimits

0xc2b7,	// (0x00037b8d) form_field_popup_pane_vc_t1

0x7cb5,	// (0x0003358b) input_focus_pane_cp7_vc_ParamLimits

0x7cb5,	// (0x0003358b) input_focus_pane_cp7_vc

0xc2cc,	// (0x00037ba2) list_form_pane_vc_ParamLimits

0xc2cc,	// (0x00037ba2) list_form_pane_vc

0xc2d8,	// (0x00037bae) data_form_pane_vc_t1_ParamLimits

0xc2d8,	// (0x00037bae) data_form_pane_vc_t1

0x7d04,	// (0x000335da) input_focus_pane_vc_g1

0x7d0c,	// (0x000335e2) input_focus_pane_vc_g2

0x7d14,	// (0x000335ea) input_focus_pane_vc_g3

0x7d1c,	// (0x000335f2) input_focus_pane_vc_g4

0x7d24,	// (0x000335fa) input_focus_pane_vc_g5

0x7d2c,	// (0x00033602) input_focus_pane_vc_g6

0x7d34,	// (0x0003360a) input_focus_pane_vc_g7

0x7d3c,	// (0x00033612) input_focus_pane_vc_g8

0x7d44,	// (0x0003361a) input_focus_pane_vc_g9

0x7260,	// (0x00032b36) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0003af42) input_focus_pane_vc_g

0xab3a,	// (0x00036410) data_form_pane_vc_ParamLimits

0xab3a,	// (0x00036410) data_form_pane_vc

0xab46,	// (0x0003641c) form_field_data_pane_vc_g1

0xc2f3,	// (0x00037bc9) form_field_data_pane_vc_t1_ParamLimits

0xc2f3,	// (0x00037bc9) form_field_data_pane_vc_t1

0x7cb5,	// (0x0003358b) input_focus_pane_vc_ParamLimits

0x7cb5,	// (0x0003358b) input_focus_pane_vc

0xc309,	// (0x00037bdf) button_value_adjust_pane_cp3_vc

0xc311,	// (0x00037be7) button_value_adjust_pane_cp5_vc

0xc319,	// (0x00037bef) form_field_data_pane_vc_ParamLimits

0xc319,	// (0x00037bef) form_field_data_pane_vc

0xc330,	// (0x00037c06) form_field_data_pane_vc_cp2

0xc338,	// (0x00037c0e) form_field_data_wide_pane_vc_ParamLimits

0xc338,	// (0x00037c0e) form_field_data_wide_pane_vc

0xc34e,	// (0x00037c24) form_field_data_wide_pane_vc_cp2

0xc356,	// (0x00037c2c) form_field_popup_pane_vc_ParamLimits

0xc356,	// (0x00037c2c) form_field_popup_pane_vc

0xc36d,	// (0x00037c43) form_field_popup_wide_pane_vc_ParamLimits

0xc36d,	// (0x00037c43) form_field_popup_wide_pane_vc

0xc383,	// (0x00037c59) form_field_slider_pane_vc_ParamLimits

0xc383,	// (0x00037c59) form_field_slider_pane_vc

0xc396,	// (0x00037c6c) form_field_slider_wide_pane_vc_ParamLimits

0xc396,	// (0x00037c6c) form_field_slider_wide_pane_vc

0xe871,	// (0x0003a147) grid_touch_1_pane_ParamLimits

0xe871,	// (0x0003a147) grid_touch_1_pane

0xe87d,	// (0x0003a153) grid_touch_2_pane_ParamLimits

0xe87d,	// (0x0003a153) grid_touch_2_pane

0xa87b,	// (0x00036151) touch_pane_g1_ParamLimits

0xa87b,	// (0x00036151) touch_pane_g1

0xc3a9,	// (0x00037c7f) cell_app_pane_cp_wide_ParamLimits

0xc3a9,	// (0x00037c7f) cell_app_pane_cp_wide

0xc3b9,	// (0x00037c8f) grid_popup_fast_wide_pane_ParamLimits

0xc3b9,	// (0x00037c8f) grid_popup_fast_wide_pane

0xc3cd,	// (0x00037ca3) scroll_pane_cp19_ParamLimits

0xc3cd,	// (0x00037ca3) scroll_pane_cp19

0x741f,	// (0x00032cf5) bg_popup_window_pane_cp20

0xc3e1,	// (0x00037cb7) listscroll_popup_fast_wide_pane

0xe895,	// (0x0003a16b) grid_indicator_nsta_pane

0xc3e9,	// (0x00037cbf) clock_nsta_pane_g1

0xc3f2,	// (0x00037cc8) clock_nsta_pane_t1

0xe8a7,	// (0x0003a17d) cell_indicator_nsta_pane_ParamLimits

0xe8a7,	// (0x0003a17d) cell_indicator_nsta_pane

0xc40e,	// (0x00037ce4) cell_indicator_nsta_pane_g1

0xe8d8,	// (0x0003a1ae) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0003b354) cell_indicator_nsta_pane_g

0xc41c,	// (0x00037cf2) clock_nsta_pane_cp

0xc424,	// (0x00037cfa) indicator_nsta_pane_cp

0xc42d,	// (0x00037d03) nsta_clock_indic_pane_g1

0x7681,	// (0x00032f57) grid_indicator_pane

0x82bb,	// (0x00033b91) scroll_pane_cp29

0x8469,	// (0x00033d3f) indicator_nsta_pane_cp2_ParamLimits

0x8469,	// (0x00033d3f) indicator_nsta_pane_cp2

0x75b3,	// (0x00032e89) main_apps_wheel_pane

0xace5,	// (0x000365bb) form_midp_field_text_pane_ParamLimits

0xae12,	// (0x000366e8) scroll_bar_cp050_ParamLimits

0xc496,	// (0x00037d6c) cell_indicator_pane_ParamLimits

0xc496,	// (0x00037d6c) cell_indicator_pane

0xc4ac,	// (0x00037d82) cell_indicator_pane_g1

0xe8e8,	// (0x0003a1be) grid_wheel_folder_pane_ParamLimits

0xe8e8,	// (0x0003a1be) grid_wheel_folder_pane

0xe8fa,	// (0x0003a1d0) list_wheel_apps_pane_ParamLimits

0xe8fa,	// (0x0003a1d0) list_wheel_apps_pane

0xe909,	// (0x0003a1df) main_apps_wheel_pane_g1_ParamLimits

0xe909,	// (0x0003a1df) main_apps_wheel_pane_g1

0xe91d,	// (0x0003a1f3) main_apps_wheel_pane_g2_ParamLimits

0xe91d,	// (0x0003a1f3) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0003b370) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0003b370) main_apps_wheel_pane_g

0xe931,	// (0x0003a207) main_apps_wheel_pane_t1_ParamLimits

0xe931,	// (0x0003a207) main_apps_wheel_pane_t1

0xe950,	// (0x0003a226) list_wheel_apps_pane_g1

0xe958,	// (0x0003a22e) list_wheel_apps_pane_g2

0xe960,	// (0x0003a236) list_wheel_apps_pane_g3

0xe968,	// (0x0003a23e) list_wheel_apps_pane_g4

0xe970,	// (0x0003a246) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0003b375) list_wheel_apps_pane_g

0x75b3,	// (0x00032e89) navi_icon_text_pane

0xd978,	// (0x0003924e) aid_fill_nsta

0xc4b6,	// (0x00037d8c) navi_icon_text_pane_g1

0xc4c2,	// (0x00037d98) navi_icon_text_pane_t1

0xa46f,	// (0x00035d45) list_set_graphic_pane_t1_ParamLimits

0xa46f,	// (0x00035d45) list_set_graphic_pane_t1

0xb500,	// (0x00036dd6) popup_midp_note_alarm_window_t6_ParamLimits

0xb500,	// (0x00036dd6) popup_midp_note_alarm_window_t6

0xb512,	// (0x00036de8) popup_midp_note_alarm_window_t7_ParamLimits

0xb512,	// (0x00036de8) popup_midp_note_alarm_window_t7

0xb524,	// (0x00036dfa) popup_midp_note_alarm_window_t8_ParamLimits

0xb524,	// (0x00036dfa) popup_midp_note_alarm_window_t8

0xb536,	// (0x00036e0c) popup_midp_note_alarm_window_t9_ParamLimits

0xb536,	// (0x00036e0c) popup_midp_note_alarm_window_t9

0xb548,	// (0x00036e1e) popup_midp_note_alarm_window_t10_ParamLimits

0xb548,	// (0x00036e1e) popup_midp_note_alarm_window_t10

0xb55a,	// (0x00036e30) popup_midp_note_alarm_window_t11_ParamLimits

0xb55a,	// (0x00036e30) popup_midp_note_alarm_window_t11

0xb56c,	// (0x00036e42) scroll_pane_cp17_ParamLimits

0xb56c,	// (0x00036e42) scroll_pane_cp17

0x8d47,	// (0x0003461d) volume_small_pane_cp_g1

0x9138,	// (0x00034a0e) volume_small_pane_cp_g2

0x9141,	// (0x00034a17) volume_small_pane_cp_g3

0x914a,	// (0x00034a20) volume_small_pane_cp_g4

0x8d74,	// (0x0003464a) volume_small_pane_cp_g5

0x9153,	// (0x00034a29) volume_small_pane_cp_g6

0x915c,	// (0x00034a32) volume_small_pane_cp_g7

0x9165,	// (0x00034a3b) volume_small_pane_cp_g8

0x916e,	// (0x00034a44) volume_small_pane_cp_g9

0x9177,	// (0x00034a4d) volume_small_pane_cp_g10

0xa71e,	// (0x00035ff4) midp_ticker_pane_g1_ParamLimits

0xa72a,	// (0x00036000) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0003b00e) midp_ticker_pane_g_ParamLimits

0xa736,	// (0x0003600c) midp_ticker_pane_t1_ParamLimits

0xd988,	// (0x0003925e) aid_fill_nsta_2

0xadfe,	// (0x000366d4) list_form2_midp_pane

0xbbfe,	// (0x000374d4) midp_editing_number_pane_ParamLimits

0xbc0a,	// (0x000374e0) midp_ticker_pane_ParamLimits

0xc4d4,	// (0x00037daa) form2_midp_field_pane

0xc4dc,	// (0x00037db2) scroll_pane_cp51

0xc4fc,	// (0x00037dd2) form2_midp_button_pane_ParamLimits

0xc4fc,	// (0x00037dd2) form2_midp_button_pane

0xc50e,	// (0x00037de4) form2_midp_content_pane_ParamLimits

0xc50e,	// (0x00037de4) form2_midp_content_pane

0xc528,	// (0x00037dfe) form2_midp_field_choice_group_pane

0xc530,	// (0x00037e06) form2_midp_field_pane_g1

0xc538,	// (0x00037e0e) form2_midp_field_pane_g2

0xc540,	// (0x00037e16) form2_midp_field_pane_g3

0xc548,	// (0x00037e1e) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0003b39a) form2_midp_field_pane_g

0xc550,	// (0x00037e26) form2_midp_gauge_slider_pane

0xc558,	// (0x00037e2e) form2_midp_gauge_wait_pane

0xc560,	// (0x00037e36) form2_midp_image_pane_ParamLimits

0xc560,	// (0x00037e36) form2_midp_image_pane

0xc57b,	// (0x00037e51) form2_midp_label_pane_ParamLimits

0xc57b,	// (0x00037e51) form2_midp_label_pane

0xe9ab,	// (0x0003a281) form2_midp_label_pane_cp_ParamLimits

0xe9ab,	// (0x0003a281) form2_midp_label_pane_cp

0xc594,	// (0x00037e6a) form2_midp_string_pane_ParamLimits

0xc594,	// (0x00037e6a) form2_midp_string_pane

0x6f60,	// (0x00032836) form2_midp_text_pane_ParamLimits

0x6f60,	// (0x00032836) form2_midp_text_pane

0xc5a6,	// (0x00037e7c) form2_midp_time_pane

0xc5b6,	// (0x00037e8c) input_focus_pane_cp51_ParamLimits

0xc5b6,	// (0x00037e8c) input_focus_pane_cp51

0xc5ce,	// (0x00037ea4) form2_midp_label_pane_t1_ParamLimits

0xc5ce,	// (0x00037ea4) form2_midp_label_pane_t1

0x6f79,	// (0x0003284f) form2_mdip_text_pane_t1_ParamLimits

0x6f79,	// (0x0003284f) form2_mdip_text_pane_t1

0x6f92,	// (0x00032868) form2_midp_time_pane_t1

0xc616,	// (0x00037eec) form2_midp_gauge_slider_pane_t1

0xe9ca,	// (0x0003a2a0) form2_midp_gauge_slider_pane_t2

0xe9dc,	// (0x0003a2b2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0003b3a3) form2_midp_gauge_slider_pane_t

0xc628,	// (0x00037efe) form2_midp_slider_pane

0xc634,	// (0x00037f0a) form2_midp_gauge_wait_pane_t1

0xc642,	// (0x00037f18) form2_midp_wait_pane_ParamLimits

0xc642,	// (0x00037f18) form2_midp_wait_pane

0xab84,	// (0x0003645a) list_single_2graphic_pane_cp4_ParamLimits

0xab84,	// (0x0003645a) list_single_2graphic_pane_cp4

0xc66d,	// (0x00037f43) list_single_midp_graphic_pane_cp_ParamLimits

0xc66d,	// (0x00037f43) list_single_midp_graphic_pane_cp

0x741f,	// (0x00032cf5) list_highlight_pane_cp20

0xc68b,	// (0x00037f61) list_single_2graphic_pane_g1_cp4

0xbea8,	// (0x0003777e) list_single_2graphic_pane_g2_cp4

0xc693,	// (0x00037f69) list_single_2graphic_pane_t1_cp4

0x75b3,	// (0x00032e89) list_highlight_pane_cp21

0xc6a2,	// (0x00037f78) list_single_midp_graphic_pane_g4_cp

0xc6b1,	// (0x00037f87) list_single_midp_graphic_pane_t1_cp

0xc6c6,	// (0x00037f9c) form2_mdip_string_pane_t1_ParamLimits

0xc6c6,	// (0x00037f9c) form2_mdip_string_pane_t1

0x741f,	// (0x00032cf5) bg_wml_button_pane_cp2

0x7260,	// (0x00032b36) form2_midp_image_pane_g1

0x7c4c,	// (0x00033522) list_double_large_graphic_pane_g5_ParamLimits

0x7c4c,	// (0x00033522) list_double_large_graphic_pane_g5

0xd815,	// (0x000390eb) midp_form_pane_ParamLimits

0x75b3,	// (0x00032e89) main_apps_wheel_pane_ParamLimits

0x8a70,	// (0x00034346) popup_preview_window_ParamLimits

0x8a70,	// (0x00034346) popup_preview_window

0x8beb,	// (0x000344c1) popup_touch_info_window_ParamLimits

0x8beb,	// (0x000344c1) popup_touch_info_window

0x8c09,	// (0x000344df) popup_touch_menu_window_ParamLimits

0x8c09,	// (0x000344df) popup_touch_menu_window

0x7256,	// (0x00032b2c) bg_popup_sub_pane_cp6

0xc730,	// (0x00038006) list_touch_menu_pane

0xc738,	// (0x0003800e) list_single_touch_menu_pane_ParamLimits

0xc738,	// (0x0003800e) list_single_touch_menu_pane

0xc74f,	// (0x00038025) list_single_touch_menu_pane_t1

0x75b3,	// (0x00032e89) bg_popup_sub_pane_cp7_ParamLimits

0x75b3,	// (0x00032e89) bg_popup_sub_pane_cp7

0xc75d,	// (0x00038033) heading_sub_pane

0xc765,	// (0x0003803b) list_touch_info_pane_ParamLimits

0xc765,	// (0x0003803b) list_touch_info_pane

0xc774,	// (0x0003804a) list_single_touch_info_pane_ParamLimits

0xc774,	// (0x0003804a) list_single_touch_info_pane

0xc785,	// (0x0003805b) list_single_touch_info_pane_t1

0xc793,	// (0x00038069) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0003b3b1) list_single_touch_info_pane_t

0xa6f4,	// (0x00035fca) bg_popup_heading_pane_cp

0xc7a1,	// (0x00038077) heading_sub_pane_t1

0xab00,	// (0x000363d6) bg_popup_preview_window_pane_cp_ParamLimits

0xab00,	// (0x000363d6) bg_popup_preview_window_pane_cp

0xc75d,	// (0x00038033) heading_preview_pane

0xc765,	// (0x0003803b) list_preview_pane_ParamLimits

0xc765,	// (0x0003803b) list_preview_pane

0xc7af,	// (0x00038085) popup_preview_window_g1

0xc774,	// (0x0003804a) list_single_preview_pane_ParamLimits

0xc774,	// (0x0003804a) list_single_preview_pane

0xc7b7,	// (0x0003808d) list_single_preview_pane_g1

0xc7bf,	// (0x00038095) list_single_preview_pane_t1

0xc785,	// (0x0003805b) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0003b3b6) list_single_preview_pane_t

0xc7cd,	// (0x000380a3) bg_popup_heading_pane_cp2_ParamLimits

0xc7cd,	// (0x000380a3) bg_popup_heading_pane_cp2

0xc7e3,	// (0x000380b9) heading_preview_pane_g1

0xc7eb,	// (0x000380c1) heading_preview_pane_t1_ParamLimits

0xc7eb,	// (0x000380c1) heading_preview_pane_t1

0x7698,	// (0x00032f6e) soft_indicator_pane_t1_ParamLimits

0x7b76,	// (0x0003344c) scroll_pane_ParamLimits

0x81b7,	// (0x00033a8d) scroll_sc2_left_pane

0x81c0,	// (0x00033a96) scroll_sc2_right_pane

0x81df,	// (0x00033ab5) scroll_bg_pane_g1_ParamLimits

0x81f4,	// (0x00033aca) scroll_bg_pane_g2_ParamLimits

0x820c,	// (0x00033ae2) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0003af99) scroll_bg_pane_g_ParamLimits

0x81df,	// (0x00033ab5) scroll_handle_pane_g1_ParamLimits

0x822e,	// (0x00033b04) scroll_handle_pane_g2_ParamLimits

0x820c,	// (0x00033ae2) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0003afa0) scroll_handle_pane_g_ParamLimits

0x87b8,	// (0x0003408e) popup_choice_list_window_ParamLimits

0x87b8,	// (0x0003408e) popup_choice_list_window

0xa9d6,	// (0x000362ac) choice_list_pane

0xaa4c,	// (0x00036322) cell_toolbar_pane_t1

0xaa74,	// (0x0003634a) toolbar_button_pane_ParamLimits

0xb967,	// (0x0003723d) ai_gene_pane_1_t2_ParamLimits

0xb967,	// (0x0003723d) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x0003b1c1) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x0003b1c1) ai_gene_pane_1_t

0xc808,	// (0x000380de) scroll_sc2_left_pane_g1

0xc808,	// (0x000380de) scroll_sc2_right_pane_g1

0x87a0,	// (0x00034076) bg_popup_sub_pane_cp10

0xc812,	// (0x000380e8) list_choice_list_pane

0xc829,	// (0x000380ff) list_single_choice_list_pane_ParamLimits

0xc829,	// (0x000380ff) list_single_choice_list_pane

0xc83b,	// (0x00038111) list_single_choice_list_pane_g1

0x7e2d,	// (0x00033703) list_single_choice_list_pane_t1_ParamLimits

0x7e2d,	// (0x00033703) list_single_choice_list_pane_t1

0xc843,	// (0x00038119) choice_list_pane_g1

0xc84b,	// (0x00038121) choice_list_pane_t1

0x7256,	// (0x00032b2c) input_focus_pane_cp11

0x7fe8,	// (0x000338be) title_pane_stacon_g2_ParamLimits

0x7fe8,	// (0x000338be) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0003af7f) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0003af7f) title_pane_stacon_g

0xa6f4,	// (0x00035fca) cursor_press_pane

0x8854,	// (0x0003412a) popup_fep_hwr_window_ParamLimits

0x8854,	// (0x0003412a) popup_fep_hwr_window

0x88b0,	// (0x00034186) popup_fep_vkb_window_ParamLimits

0x88b0,	// (0x00034186) popup_fep_vkb_window

0xc859,	// (0x0003812f) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0003b3df) fep_vkb_side_pane_g_ParamLimits

0x91b5,	// (0x00034a8b) fep_hwr_candidate_pane_ParamLimits

0x91b5,	// (0x00034a8b) fep_hwr_candidate_pane

0x91dd,	// (0x00034ab3) fep_hwr_side_pane_ParamLimits

0x91dd,	// (0x00034ab3) fep_hwr_side_pane

0x91fd,	// (0x00034ad3) fep_hwr_top_pane_ParamLimits

0x91fd,	// (0x00034ad3) fep_hwr_top_pane

0x9215,	// (0x00034aeb) fep_hwr_write_pane_ParamLimits

0x9215,	// (0x00034aeb) fep_hwr_write_pane

0xfb09,	// (0x0003b3df) fep_vkb_side_pane_g

0xc861,	// (0x00038137) fep_hwr_top_pane_g1

0xc873,	// (0x00038149) fep_hwr_top_pane_g2

0x9241,	// (0x00034b17) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0003b3bb) fep_hwr_top_pane_g

0x9256,	// (0x00034b2c) fep_hwr_top_text_pane

0x8328,	// (0x00033bfe) fep_hwr_top_text_pane_g1

0xc8a9,	// (0x0003817f) fep_hwr_top_text_pane_t1

0x9344,	// (0x00034c1a) fep_hwr_candidate_pane_g1

0xca72,	// (0x00038348) fep_vkb_keypad_pane_g3_ParamLimits

0xca72,	// (0x00038348) fep_vkb_keypad_pane_g3

0xca94,	// (0x0003836a) fep_vkb_keypad_pane_g4_ParamLimits

0xca94,	// (0x0003836a) fep_vkb_keypad_pane_g4

0xcb03,	// (0x000383d9) fep_vkb_bottom_pane_g2_ParamLimits

0xcb03,	// (0x000383d9) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0003b3e6) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0003b3e6) fep_vkb_bottom_pane_g

0xc808,	// (0x000380de) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0003b3f0) cell_vkb_side_pane_g

0xcb47,	// (0x0003841d) cell_vkb_side_pane_t1

0xcb55,	// (0x0003842b) cell_vkb_side_pane_t1_copy1

0xc808,	// (0x000380de) bg_fep_vkb_candidate_pane_g2

0xcc23,	// (0x000384f9) cell_vkb_candidate_pane_ParamLimits

0xc8b7,	// (0x0003818d) aid_size_cell_vkb_ParamLimits

0xc8b7,	// (0x0003818d) aid_size_cell_vkb

0xcc23,	// (0x000384f9) cell_vkb_candidate_pane

0x935e,	// (0x00034c34) bg_popup_fep_shadow_pane_g1

0xc921,	// (0x000381f7) fep_vkb_bottom_pane_ParamLimits

0xc921,	// (0x000381f7) fep_vkb_bottom_pane

0xc95e,	// (0x00038234) fep_vkb_candidate_pane_ParamLimits

0xc95e,	// (0x00038234) fep_vkb_candidate_pane

0xc97a,	// (0x00038250) fep_vkb_keypad_pane_ParamLimits

0xc97a,	// (0x00038250) fep_vkb_keypad_pane

0xc9ae,	// (0x00038284) fep_vkb_side_pane_ParamLimits

0xc9ae,	// (0x00038284) fep_vkb_side_pane

0xc9da,	// (0x000382b0) fep_vkb_top_pane_ParamLimits

0xc9da,	// (0x000382b0) fep_vkb_top_pane

0xca06,	// (0x000382dc) fep_vkb_top_pane_g1_ParamLimits

0xca06,	// (0x000382dc) fep_vkb_top_pane_g1

0xca15,	// (0x000382eb) fep_vkb_top_pane_g2_ParamLimits

0xca15,	// (0x000382eb) fep_vkb_top_pane_g2

0xca24,	// (0x000382fa) fep_vkb_top_pane_g3_ParamLimits

0xca24,	// (0x000382fa) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0003b3d6) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0003b3d6) fep_vkb_top_pane_g

0xca42,	// (0x00038318) fep_vkb_top_text_pane_ParamLimits

0xca42,	// (0x00038318) fep_vkb_top_text_pane

0xe9fa,	// (0x0003a2d0) fep_vkb_side_pane_g1_ParamLimits

0xe9fa,	// (0x0003a2d0) fep_vkb_side_pane_g1

0xca61,	// (0x00038337) grid_vkb_side_pane_ParamLimits

0xca61,	// (0x00038337) grid_vkb_side_pane

0x9366,	// (0x00034c3c) bg_popup_fep_shadow_pane_g2

0x936f,	// (0x00034c45) bg_popup_fep_shadow_pane_g3

0x9377,	// (0x00034c4d) bg_popup_fep_shadow_pane_g4

0x9380,	// (0x00034c56) bg_popup_fep_shadow_pane_g5

0x9388,	// (0x00034c5e) bg_popup_fep_shadow_pane_g6

0x9390,	// (0x00034c66) bg_popup_fep_shadow_pane_g7

0x7d24,	// (0x000335fa) bg_popup_fep_shadow_pane_g8

0xcab2,	// (0x00038388) grid_vkb_keypad_number_pane_ParamLimits

0xcab2,	// (0x00038388) grid_vkb_keypad_number_pane

0xcac2,	// (0x00038398) grid_vkb_keypad_pane_ParamLimits

0xcac2,	// (0x00038398) grid_vkb_keypad_pane

0xcae8,	// (0x000383be) fep_vkb_bottom_pane_g1_ParamLimits

0xcae8,	// (0x000383be) fep_vkb_bottom_pane_g1

0xcb11,	// (0x000383e7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xcb11,	// (0x000383e7) grid_vkb_keypad_bottom_left_pane

0xcb26,	// (0x000383fc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xcb26,	// (0x000383fc) grid_vkb_keypad_bottom_right_pane

0xcb3b,	// (0x00038411) fep_vkb_top_text_pane_g1

0xea44,	// (0x0003a31a) fep_vkb_top_text_pane_t1

0xea59,	// (0x0003a32f) cell_vkb_side_pane_ParamLimits

0xea59,	// (0x0003a32f) cell_vkb_side_pane

0xc808,	// (0x000380de) cell_vkb_side_pane_g1

0xcb63,	// (0x00038439) cell_vkb_keypad_pane_ParamLimits

0xcb63,	// (0x00038439) cell_vkb_keypad_pane

0xcbd0,	// (0x000384a6) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0003b403) bg_popup_fep_shadow_pane_g

0xc808,	// (0x000380de) cell_hwr_side_pane_g1

0xc808,	// (0x000380de) cell_hwr_side_pane_g2

0xcbda,	// (0x000384b0) cell_vkb_keypad_pane_t1

0xea7c,	// (0x0003a352) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xea7c,	// (0x0003a352) cell_vkb_keypad_bottom_left_pane

0xea99,	// (0x0003a36f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xea99,	// (0x0003a36f) cell_vkb_keypad_bottom_right_pane

0xc808,	// (0x000380de) cell_vkb_keypad_bottom_left_pane_g1

0xc808,	// (0x000380de) cell_vkb_keypad_bottom_right_pane_g1

0xcbe8,	// (0x000384be) cell_vkb_keypad_number_pane_ParamLimits

0xcbe8,	// (0x000384be) cell_vkb_keypad_number_pane

0xcc07,	// (0x000384dd) cell_vkb_keypad_number_pane_g1

0xcc11,	// (0x000384e7) cell_vkb_keypad_number_pane_g2

0xcc1a,	// (0x000384f0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0003b3f5) cell_vkb_keypad_number_pane_g

0xcbda,	// (0x000384b0) cell_vkb_keypad_number_pane_t1

0xcc3c,	// (0x00038512) fep_vkb_candidate_pane_g1

0x0001,

0xfb1a,	// (0x0003b3f0) cell_hwr_side_pane_g

0xcc55,	// (0x0003852b) cell_hwr_side_pane_t1

0x93a0,	// (0x00034c76) cell_hwr_side_pane_t1_copy1

0xca34,	// (0x0003830a) cell_hwr_candidate_pane_g1

0x93ae,	// (0x00034c84) cell_hwr_candidate_pane_t1

0xc808,	// (0x000380de) cell_vkb_candidate_pane_g2

0xccdb,	// (0x000385b1) cell_vkb_candidate_pane_t1

0x9180,	// (0x00034a56) bg_popup_fep_shadow_pane_ParamLimits

0x9180,	// (0x00034a56) bg_popup_fep_shadow_pane

0x342a,	// (0x0002ed00) bg_fep_hwr_top_pane_g4

0xc885,	// (0x0003815b) bg_hwr_side_pane_g1_ParamLimits

0xc885,	// (0x0003815b) bg_hwr_side_pane_g1

0x9292,	// (0x00034b68) cell_hwr_side_pane_ParamLimits

0x9292,	// (0x00034b68) cell_hwr_side_pane

0x92cd,	// (0x00034ba3) fep_hwr_write_pane_g1_ParamLimits

0x92cd,	// (0x00034ba3) fep_hwr_write_pane_g1

0x92da,	// (0x00034bb0) fep_hwr_write_pane_g2_ParamLimits

0x92da,	// (0x00034bb0) fep_hwr_write_pane_g2

0x92e7,	// (0x00034bbd) fep_hwr_write_pane_g3_ParamLimits

0x92e7,	// (0x00034bbd) fep_hwr_write_pane_g3

0x92f5,	// (0x00034bcb) fep_hwr_write_pane_g4_ParamLimits

0x92f5,	// (0x00034bcb) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0003b3c2) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0003b3c2) fep_hwr_write_pane_g

0x342a,	// (0x0002ed00) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x342a,	// (0x0002ed00) bg_fep_hwr_candidate_pane_g2

0x930a,	// (0x00034be0) cell_hwr_candidate_pane_ParamLimits

0x930a,	// (0x00034be0) cell_hwr_candidate_pane

0x9344,	// (0x00034c1a) fep_hwr_candidate_pane_g1_ParamLimits

0xc8e5,	// (0x000381bb) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc8e5,	// (0x000381bb) bg_popup_fep_shadow_pane_cp2

0xca34,	// (0x0003830a) fep_vkb_top_pane_g4_ParamLimits

0xca34,	// (0x0003830a) fep_vkb_top_pane_g4

0xca53,	// (0x00038329) fep_vkb_side_pane_g2_ParamLimits

0xca53,	// (0x00038329) fep_vkb_side_pane_g2

0x67b1,	// (0x00032087) list_setting_pane_t4_ParamLimits

0x67b1,	// (0x00032087) list_setting_pane_t4

0x6847,	// (0x0003211d) list_setting_number_pane_t5_ParamLimits

0x6847,	// (0x0003211d) list_setting_number_pane_t5

0xd715,	// (0x00038feb) list_double_heading_pane_cp2_ParamLimits

0xd715,	// (0x00038feb) list_double_heading_pane_cp2

0xa569,	// (0x00035e3f) list_double_heading_pane_g1_cp2_ParamLimits

0xa569,	// (0x00035e3f) list_double_heading_pane_g1_cp2

0xcce9,	// (0x000385bf) list_double_heading_pane_g2_cp2_ParamLimits

0xcce9,	// (0x000385bf) list_double_heading_pane_g2_cp2

0xccfd,	// (0x000385d3) list_double_heading_pane_t1_cp2_ParamLimits

0xccfd,	// (0x000385d3) list_double_heading_pane_t1_cp2

0xcd13,	// (0x000385e9) list_double_heading_pane_t2_cp2_ParamLimits

0xcd13,	// (0x000385e9) list_double_heading_pane_t2_cp2

0x724e,	// (0x00032b24) aid_value_unit2

0x7485,	// (0x00032d5b) popup_preview_fixed_window

0x7786,	// (0x0003305c) bg_popup_preview_window_pane_cp02

0xcd25,	// (0x000385fb) list_preview_fixed_pane

0xcd6b,	// (0x00038641) list_empty_pane_fp_ParamLimits

0xcd6b,	// (0x00038641) list_empty_pane_fp

0xcd6b,	// (0x00038641) list_single_cale_day_pane_fp_ParamLimits

0xcd6b,	// (0x00038641) list_single_cale_day_pane_fp

0xcd6b,	// (0x00038641) list_single_graphic_heading_pane_fp_ParamLimits

0xcd6b,	// (0x00038641) list_single_graphic_heading_pane_fp

0xcd6b,	// (0x00038641) list_single_graphic_pane_fp_ParamLimits

0xcd6b,	// (0x00038641) list_single_graphic_pane_fp

0xcd6b,	// (0x00038641) list_single_heading_pane_fp_ParamLimits

0xcd6b,	// (0x00038641) list_single_heading_pane_fp

0xcd6b,	// (0x00038641) list_single_pane_fp_ParamLimits

0xcd6b,	// (0x00038641) list_single_pane_fp

0xcd7f,	// (0x00038655) list_single_pane_fp_g1_ParamLimits

0xcd7f,	// (0x00038655) list_single_pane_fp_g1

0x7c34,	// (0x0003350a) list_single_pane_fp_g2_ParamLimits

0x7c34,	// (0x0003350a) list_single_pane_fp_g2

0x93cb,	// (0x00034ca1) list_single_pane_fp_g3_ParamLimits

0x93cb,	// (0x00034ca1) list_single_pane_fp_g3

0xcd8b,	// (0x00038661) list_single_pane_fp_g4_ParamLimits

0xcd8b,	// (0x00038661) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0003b424) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0003b424) list_single_pane_fp_g

0x6fa5,	// (0x0003287b) list_single_pane_fp_t1_ParamLimits

0x6fa5,	// (0x0003287b) list_single_pane_fp_t1

0x6fbc,	// (0x00032892) list_single_graphic_pane_fp_g1_ParamLimits

0x6fbc,	// (0x00032892) list_single_graphic_pane_fp_g1

0xcd7f,	// (0x00038655) list_single_graphic_pane_fp_g2_ParamLimits

0xcd7f,	// (0x00038655) list_single_graphic_pane_fp_g2

0x7c34,	// (0x0003350a) list_single_graphic_pane_fp_g3_ParamLimits

0x7c34,	// (0x0003350a) list_single_graphic_pane_fp_g3

0x93cb,	// (0x00034ca1) list_single_graphic_pane_fp_g4_ParamLimits

0x93cb,	// (0x00034ca1) list_single_graphic_pane_fp_g4

0xcd8b,	// (0x00038661) list_single_graphic_pane_fp_g5_ParamLimits

0xcd8b,	// (0x00038661) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0003b42d) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0003b42d) list_single_graphic_pane_fp_g

0x6fc8,	// (0x0003289e) list_single_graphic_pane_fp_t1_ParamLimits

0x6fc8,	// (0x0003289e) list_single_graphic_pane_fp_t1

0x6fbc,	// (0x00032892) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6fbc,	// (0x00032892) list_single_graphic_heading_pane_fp_g1

0xcd7f,	// (0x00038655) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xcd7f,	// (0x00038655) list_single_graphic_heading_pane_fp_g2

0x7c34,	// (0x0003350a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7c34,	// (0x0003350a) list_single_graphic_heading_pane_fp_g3

0x93cb,	// (0x00034ca1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x93cb,	// (0x00034ca1) list_single_graphic_heading_pane_fp_g4

0xcd8b,	// (0x00038661) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xcd8b,	// (0x00038661) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0003b42d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0003b42d) list_single_graphic_heading_pane_fp_g

0x6fde,	// (0x000328b4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6fde,	// (0x000328b4) list_single_graphic_heading_pane_fp_t1

0x6ff4,	// (0x000328ca) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6ff4,	// (0x000328ca) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0003b438) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0003b438) list_single_graphic_heading_pane_fp_t

0x7006,	// (0x000328dc) list_single_cale_day_pane_fp_g1_ParamLimits

0x7006,	// (0x000328dc) list_single_cale_day_pane_fp_g1

0xcd97,	// (0x0003866d) list_single_cale_day_pane_fp_g2_ParamLimits

0xcd97,	// (0x0003866d) list_single_cale_day_pane_fp_g2

0x93df,	// (0x00034cb5) list_single_cale_day_pane_fp_g3_ParamLimits

0x93df,	// (0x00034cb5) list_single_cale_day_pane_fp_g3

0x9407,	// (0x00034cdd) list_single_cale_day_pane_fp_g4_ParamLimits

0x9407,	// (0x00034cdd) list_single_cale_day_pane_fp_g4

0x942b,	// (0x00034d01) list_single_cale_day_pane_fp_g5_ParamLimits

0x942b,	// (0x00034d01) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0003b43d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0003b43d) list_single_cale_day_pane_fp_g

0x703e,	// (0x00032914) list_single_cale_day_pane_fp_t1_ParamLimits

0x703e,	// (0x00032914) list_single_cale_day_pane_fp_t1

0x7064,	// (0x0003293a) list_single_cale_day_pane_fp_t2_ParamLimits

0x7064,	// (0x0003293a) list_single_cale_day_pane_fp_t2

0x707d,	// (0x00032953) list_single_cale_day_pane_fp_t3_ParamLimits

0x707d,	// (0x00032953) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0003b448) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0003b448) list_single_cale_day_pane_fp_t

0xcd7f,	// (0x00038655) list_empty_pane_fp_g1_ParamLimits

0xcd7f,	// (0x00038655) list_empty_pane_fp_g1

0x7096,	// (0x0003296c) list_empty_pane_fp_t1

0x70a4,	// (0x0003297a) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0003b44f) list_empty_pane_fp_t

0xcd7f,	// (0x00038655) list_single_heading_pane_fp_g1_ParamLimits

0xcd7f,	// (0x00038655) list_single_heading_pane_fp_g1

0x7c34,	// (0x0003350a) list_single_heading_pane_fp_g2_ParamLimits

0x7c34,	// (0x0003350a) list_single_heading_pane_fp_g2

0x93cb,	// (0x00034ca1) list_single_heading_pane_fp_g3_ParamLimits

0x93cb,	// (0x00034ca1) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0003b454) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003b454) list_single_heading_pane_fp_g

0x70b2,	// (0x00032988) list_single_heading_pane_fp_t1_ParamLimits

0x70b2,	// (0x00032988) list_single_heading_pane_fp_t1

0x70c4,	// (0x0003299a) list_single_heading_pane_fp_t2_ParamLimits

0x70c4,	// (0x0003299a) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0003b45b) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0003b45b) list_single_heading_pane_fp_t

0x7e42,	// (0x00033718) aid_size_cell_fast

0x775b,	// (0x00033031) soft_indicator_pane_cp1_t1

0x7e7f,	// (0x00033755) cell_app_pane_cp2_ParamLimits

0x7e7f,	// (0x00033755) cell_app_pane_cp2

0x91a2,	// (0x00034a78) fep_hwr_candidate_drop_down_list_pane

0x3748,	// (0x0002f01e) fep_hwr_candidate_pane_g3_ParamLimits

0x3748,	// (0x0002f01e) fep_hwr_candidate_pane_g3

0x3755,	// (0x0002f02b) fep_hwr_candidate_pane_g4_ParamLimits

0x3755,	// (0x0002f02b) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0003b3cf) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0003b3cf) fep_hwr_candidate_pane_g

0xc94d,	// (0x00038223) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc94d,	// (0x00038223) fep_vkb_candidate_drop_down_list_pane

0xcc44,	// (0x0003851a) fep_vkb_candidate_pane_g3

0xcc4c,	// (0x00038522) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0003b3fc) fep_vkb_candidate_pane_g

0xca34,	// (0x0003830a) cell_hwr_candidate_pane_g1_ParamLimits

0xcc63,	// (0x00038539) cell_hwr_candidate_pane_g3_ParamLimits

0xcc63,	// (0x00038539) cell_hwr_candidate_pane_g3

0xcc84,	// (0x0003855a) cell_hwr_candidate_pane_g4_ParamLimits

0xcc84,	// (0x0003855a) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0003b416) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0003b416) cell_hwr_candidate_pane_g

0xcca5,	// (0x0003857b) cell_vkb_candidate_pane_g3_ParamLimits

0xcca5,	// (0x0003857b) cell_vkb_candidate_pane_g3

0xccc0,	// (0x00038596) cell_vkb_candidate_pane_g4_ParamLimits

0xccc0,	// (0x00038596) cell_vkb_candidate_pane_g4

0xcda3,	// (0x00038679) cell_app_pane_cp2_g1_ParamLimits

0xcda3,	// (0x00038679) cell_app_pane_cp2_g1

0xcdc1,	// (0x00038697) cell_app_pane_cp2_g2_ParamLimits

0xcdc1,	// (0x00038697) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0003b460) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0003b460) cell_app_pane_cp2_g

0xcdcd,	// (0x000386a3) cell_app_pane_cp2_t1_ParamLimits

0xcdcd,	// (0x000386a3) cell_app_pane_cp2_t1

0x7cb5,	// (0x0003358b) grid_highlight_pane_cp1_ParamLimits

0x7cb5,	// (0x0003358b) grid_highlight_pane_cp1

0x944f,	// (0x00034d25) cell_hwr_candidate_pane_cp1_ParamLimits

0x944f,	// (0x00034d25) cell_hwr_candidate_pane_cp1

0xca34,	// (0x0003830a) fep_hwr_candidate_drop_down_list_pane_g1

0xcddf,	// (0x000386b5) fep_hwr_candidate_drop_down_list_pane_g2

0xcdec,	// (0x000386c2) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0003b465) fep_hwr_candidate_drop_down_list_pane_g

0x946d,	// (0x00034d43) fep_hwr_candidate_drop_down_list_scroll_pane

0x9476,	// (0x00034d4c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9476,	// (0x00034d4c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x9483,	// (0x00034d59) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9483,	// (0x00034d59) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x9490,	// (0x00034d66) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9490,	// (0x00034d66) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xcca5,	// (0x0003857b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xcca5,	// (0x0003857b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xccc0,	// (0x00038596) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xccc0,	// (0x00038596) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x949d,	// (0x00034d73) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x949d,	// (0x00034d73) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x94b8,	// (0x00034d8e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x94b8,	// (0x00034d8e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x94d3,	// (0x00034da9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x94d3,	// (0x00034da9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0003b46c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0003b46c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xead2,	// (0x0003a3a8) cell_vkb_candidate_pane_cp1_ParamLimits

0xead2,	// (0x0003a3a8) cell_vkb_candidate_pane_cp1

0xca34,	// (0x0003830a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xca34,	// (0x0003830a) fep_vkb_candidate_drop_down_list_pane_g1

0xcddf,	// (0x000386b5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xcddf,	// (0x000386b5) fep_vkb_candidate_drop_down_list_pane_g2

0xcdec,	// (0x000386c2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xcdec,	// (0x000386c2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0003b465) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8f,	// (0x0003b465) fep_vkb_candidate_drop_down_list_pane_g

0xcdf9,	// (0x000386cf) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xcdf9,	// (0x000386cf) fep_vkb_candidate_drop_down_list_scroll_pane

0xce06,	// (0x000386dc) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xce06,	// (0x000386dc) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xce13,	// (0x000386e9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xce13,	// (0x000386e9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xce1f,	// (0x000386f5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xce1f,	// (0x000386f5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xcc63,	// (0x00038539) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xcc63,	// (0x00038539) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xcc84,	// (0x0003855a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xcc84,	// (0x0003855a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xce2b,	// (0x00038701) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xce2b,	// (0x00038701) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xce4c,	// (0x00038722) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xce4c,	// (0x00038722) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xce6d,	// (0x00038743) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xce6d,	// (0x00038743) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0003b47d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0003b47d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd31f,	// (0x00038bf5) title_pane_g1_ParamLimits

0xd32c,	// (0x00038c02) title_pane_g2_ParamLimits

0xf529,	// (0x0003adff) title_pane_g_ParamLimits

0x8318,	// (0x00033bee) aid_call2_pane

0x8320,	// (0x00033bf6) aid_call_pane

0x8328,	// (0x00033bfe) popup_clock_analogue_window_g1

0x8328,	// (0x00033bfe) popup_clock_analogue_window_g2

0x8330,	// (0x00033c06) popup_clock_analogue_window_g3

0x8339,	// (0x00033c0f) popup_clock_analogue_window_g4

0x7260,	// (0x00032b36) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0003afae) popup_clock_analogue_window_g

0x8341,	// (0x00033c17) popup_clock_analogue_window_t1

0x8376,	// (0x00033c4c) clock_digital_number_pane_ParamLimits

0x8376,	// (0x00033c4c) clock_digital_number_pane

0x8382,	// (0x00033c58) clock_digital_number_pane_cp02_ParamLimits

0x8382,	// (0x00033c58) clock_digital_number_pane_cp02

0x838e,	// (0x00033c64) clock_digital_number_pane_cp03_ParamLimits

0x838e,	// (0x00033c64) clock_digital_number_pane_cp03

0x839a,	// (0x00033c70) clock_digital_number_pane_cp04_ParamLimits

0x839a,	// (0x00033c70) clock_digital_number_pane_cp04

0x83a6,	// (0x00033c7c) clock_digital_separator_pane_ParamLimits

0x83a6,	// (0x00033c7c) clock_digital_separator_pane

0x83b2,	// (0x00033c88) popup_clock_digital_window_t1_ParamLimits

0x83b2,	// (0x00033c88) popup_clock_digital_window_t1

0x7260,	// (0x00032b36) clock_digital_number_pane_g1

0x7260,	// (0x00032b36) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0003afb9) clock_digital_number_pane_g

0x7260,	// (0x00032b36) clock_digital_separator_pane_g1

0x7260,	// (0x00032b36) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0003afb9) clock_digital_separator_pane_g

0xd978,	// (0x0003924e) aid_fill_nsta_ParamLimits

0xda37,	// (0x0003930d) indicator_nsta_pane_ParamLimits

0xa97f,	// (0x00036255) popup_clock_analogue_window

0xa97f,	// (0x00036255) popup_clock_digital_window

0xe895,	// (0x0003a16b) grid_indicator_nsta_pane_ParamLimits

0xc400,	// (0x00037cd6) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0003b34f) clock_nsta_pane_t

0x815c,	// (0x00033a32) aid_size_max_handle

0x8166,	// (0x00033a3c) aid_size_min_handle

0xa6f4,	// (0x00035fca) editor_scroll_pane

0xce88,	// (0x0003875e) ex_editor_pane

0x7e0b,	// (0x000336e1) scroll_pane_cp13

0x7ba3,	// (0x00033479) scroll_pane_cp14

0xa291,	// (0x00035b67) scroll_pane_cp36

0xd725,	// (0x00038ffb) list_single_graphic_hl_pane_cp2_ParamLimits

0xd725,	// (0x00038ffb) list_single_graphic_hl_pane_cp2

0x6ce2,	// (0x000325b8) list_single_graphic_hl_pane_ParamLimits

0x6ce2,	// (0x000325b8) list_single_graphic_hl_pane

0x70da,	// (0x000329b0) aid_size_min_hl_cp1

0xce90,	// (0x00038766) list_highlight_pane_cp34_ParamLimits

0xce90,	// (0x00038766) list_highlight_pane_cp34

0xcea1,	// (0x00038777) list_single_graphic_hl_pane_g1_ParamLimits

0xcea1,	// (0x00038777) list_single_graphic_hl_pane_g1

0x70e3,	// (0x000329b9) list_single_graphic_hl_pane_g2_ParamLimits

0x70e3,	// (0x000329b9) list_single_graphic_hl_pane_g2

0x70e3,	// (0x000329b9) list_single_graphic_hl_pane_g3_ParamLimits

0x70e3,	// (0x000329b9) list_single_graphic_hl_pane_g3

0x7c34,	// (0x0003350a) list_single_graphic_hl_pane_g4_ParamLimits

0x7c34,	// (0x0003350a) list_single_graphic_hl_pane_g4

0x93cb,	// (0x00034ca1) list_single_graphic_hl_pane_g5_ParamLimits

0x93cb,	// (0x00034ca1) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0003b48e) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0003b48e) list_single_graphic_hl_pane_g

0x65a7,	// (0x00031e7d) list_single_graphic_hl_pane_t1_ParamLimits

0x65a7,	// (0x00031e7d) list_single_graphic_hl_pane_t1

0xceae,	// (0x00038784) aid_size_min_hl_cp2

0xceb7,	// (0x0003878d) list_highlight_pane_cp34_cp2_ParamLimits

0xceb7,	// (0x0003878d) list_highlight_pane_cp34_cp2

0xcea1,	// (0x00038777) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcea1,	// (0x00038777) list_single_graphic_hl_pane_g1_cp2

0xcec4,	// (0x0003879a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcec4,	// (0x0003879a) list_single_graphic_hl_pane_g2_cp2

0xced0,	// (0x000387a6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xced0,	// (0x000387a6) list_single_graphic_hl_pane_g3_cp2

0xa569,	// (0x00035e3f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa569,	// (0x00035e3f) list_single_graphic_hl_pane_g4_cp2

0xcce9,	// (0x000385bf) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcce9,	// (0x000385bf) list_single_graphic_hl_pane_g5_cp2

0x8659,	// (0x00033f2f) control_pane_g4_ParamLimits

0x8659,	// (0x00033f2f) control_pane_g4

0x87a0,	// (0x00034076) bg_popup_sub_pane_cp10_ParamLimits

0xc812,	// (0x000380e8) list_choice_list_pane_ParamLimits

0xc821,	// (0x000380f7) scroll_pane_cp23

0x7786,	// (0x0003305c) bg_popup_preview_window_pane_cp02_ParamLimits

0xcd25,	// (0x000385fb) list_preview_fixed_pane_ParamLimits

0xcd3b,	// (0x00038611) list_preview_fixed_pane_cp_ParamLimits

0xcd3b,	// (0x00038611) list_preview_fixed_pane_cp

0xcd47,	// (0x0003861d) popup_preview_fixed_window_g1_ParamLimits

0xcd47,	// (0x0003861d) popup_preview_fixed_window_g1

0xcd53,	// (0x00038629) popup_preview_fixed_window_g2_ParamLimits

0xcd53,	// (0x00038629) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0003b41d) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0003b41d) popup_preview_fixed_window_g

0x80b5,	// (0x0003398b) aid_navi_side_left_pane_ParamLimits

0x80c5,	// (0x0003399b) aid_navi_side_right_pane_ParamLimits

0x80d4,	// (0x000339aa) navi_icon_pane_stacon_ParamLimits

0x80e4,	// (0x000339ba) navi_navi_pane_stacon_ParamLimits

0x80d4,	// (0x000339aa) navi_text_pane_stacon_ParamLimits

0x7256,	// (0x00032b2c) main_text_info_pane

0xcef2,	// (0x000387c8) listscroll_text_info_pane

0xcefa,	// (0x000387d0) list_text_info_pane_ParamLimits

0xcefa,	// (0x000387d0) list_text_info_pane

0xcf09,	// (0x000387df) scroll_pane_cp24_ParamLimits

0xcf09,	// (0x000387df) scroll_pane_cp24

0xeaf5,	// (0x0003a3cb) list_text_info_pane_t1_ParamLimits

0xeaf5,	// (0x0003a3cb) list_text_info_pane_t1

0x87d2,	// (0x000340a8) popup_fast_swap2_window_ParamLimits

0x87d2,	// (0x000340a8) popup_fast_swap2_window

0xcf27,	// (0x000387fd) aid_size_cell_fast2

0x7256,	// (0x00032b2c) bg_popup_window_pane_cp17

0xae2a,	// (0x00036700) heading_pane_cp2

0xae32,	// (0x00036708) listscroll_fast2_pane

0xcf31,	// (0x00038807) grid_fast2_pane

0xcf39,	// (0x0003880f) listscroll_fast2_pane_g1

0xcf41,	// (0x00038817) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0003b499) listscroll_fast2_pane_g

0x7e0b,	// (0x000336e1) scroll_pane_cp26

0xcf49,	// (0x0003881f) cell_fast2_pane_ParamLimits

0xcf49,	// (0x0003881f) cell_fast2_pane

0xcf5f,	// (0x00038835) cell_fast2_pane_g1

0xcf68,	// (0x0003883e) cell_fast2_pane_g2

0xcf71,	// (0x00038847) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0003b49e) cell_fast2_pane_g

0x7a04,	// (0x000332da) grid_highlight_pane_cp9

0x7a19,	// (0x000332ef) main_eswt_pane_ParamLimits

0x7a19,	// (0x000332ef) main_eswt_pane

0xcf1e,	// (0x000387f4) list_single_text_info_pane

0xcf79,	// (0x0003884f) eswt_ctrl_button_pane

0xcf79,	// (0x0003884f) eswt_ctrl_canvas_pane

0xcf81,	// (0x00038857) eswt_ctrl_combo_pane

0xcf79,	// (0x0003884f) eswt_ctrl_default_pane

0xcf79,	// (0x0003884f) eswt_ctrl_label_pane

0xcf89,	// (0x0003885f) eswt_ctrl_wait_pane

0xcf91,	// (0x00038867) eswt_shell_pane

0x7256,	// (0x00032b2c) listscroll_eswt_app_pane

0xcfad,	// (0x00038883) popup_eswt_tasktip_window_ParamLimits

0xcfad,	// (0x00038883) popup_eswt_tasktip_window

0xab00,	// (0x000363d6) bg_popup_window_pane_cp18

0xcfbe,	// (0x00038894) eswt_control_pane_g1_ParamLimits

0xcfbe,	// (0x00038894) eswt_control_pane_g1

0xcfcb,	// (0x000388a1) eswt_control_pane_g2_ParamLimits

0xcfcb,	// (0x000388a1) eswt_control_pane_g2

0xcfd8,	// (0x000388ae) eswt_control_pane_g3_ParamLimits

0xcfd8,	// (0x000388ae) eswt_control_pane_g3

0xcfe5,	// (0x000388bb) eswt_control_pane_g4_ParamLimits

0xcfe5,	// (0x000388bb) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0003b4a5) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0003b4a5) eswt_control_pane_g

0x7cb5,	// (0x0003358b) bg_button_pane_ParamLimits

0x7cb5,	// (0x0003358b) bg_button_pane

0x7a19,	// (0x000332ef) common_borders_pane_copy2_ParamLimits

0x7a19,	// (0x000332ef) common_borders_pane_copy2

0xcff2,	// (0x000388c8) control_button_pane_g1_ParamLimits

0xcff2,	// (0x000388c8) control_button_pane_g1

0xcffe,	// (0x000388d4) control_button_pane_g2_ParamLimits

0xcffe,	// (0x000388d4) control_button_pane_g2

0xd00a,	// (0x000388e0) control_button_pane_g3_ParamLimits

0xd00a,	// (0x000388e0) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0003b4ae) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0003b4ae) control_button_pane_g

0xd01e,	// (0x000388f4) control_button_pane_t1

0xd02c,	// (0x00038902) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0003b4b5) control_button_pane_t

0xaa80,	// (0x00036356) bg_button_pane_g1

0xaa88,	// (0x0003635e) bg_button_pane_g2

0xaa90,	// (0x00036366) bg_button_pane_g3

0xaa98,	// (0x0003636e) bg_button_pane_g4

0xaaa0,	// (0x00036376) bg_button_pane_g5

0xaaa8,	// (0x0003637e) bg_button_pane_g6

0xaab0,	// (0x00036386) bg_button_pane_g7

0xaab8,	// (0x0003638e) bg_button_pane_g8

0xaac0,	// (0x00036396) bg_button_pane_g9

0x0008,

0xf83f,	// (0x0003b115) bg_button_pane_g

0xc7cd,	// (0x000380a3) common_borders_pane_ParamLimits

0xc7cd,	// (0x000380a3) common_borders_pane

0xcfbe,	// (0x00038894) eswt_control_pane_g1_copy1_ParamLimits

0xcfbe,	// (0x00038894) eswt_control_pane_g1_copy1

0xcfcb,	// (0x000388a1) eswt_control_pane_g2_copy1_ParamLimits

0xcfcb,	// (0x000388a1) eswt_control_pane_g2_copy1

0xcfd8,	// (0x000388ae) eswt_control_pane_g3_copy1_ParamLimits

0xcfd8,	// (0x000388ae) eswt_control_pane_g3_copy1

0xcfe5,	// (0x000388bb) eswt_control_pane_g4_copy1_ParamLimits

0xcfe5,	// (0x000388bb) eswt_control_pane_g4_copy1

0xc808,	// (0x000380de) bg_eswt_ctrl_canvas_pane_g1

0xc7cd,	// (0x000380a3) common_borders_pane_cp2_ParamLimits

0xc7cd,	// (0x000380a3) common_borders_pane_cp2

0xc7cd,	// (0x000380a3) common_borders_pane_cp3_ParamLimits

0xc7cd,	// (0x000380a3) common_borders_pane_cp3

0xd03a,	// (0x00038910) separator_horizontal_pane

0x81b7,	// (0x00033a8d) separator_vertical_pane

0xcfbe,	// (0x00038894) eswt_control_pane_g1_copy2_ParamLimits

0xcfbe,	// (0x00038894) eswt_control_pane_g1_copy2

0xcfcb,	// (0x000388a1) eswt_control_pane_g2_copy2_ParamLimits

0xcfcb,	// (0x000388a1) eswt_control_pane_g2_copy2

0xcfd8,	// (0x000388ae) eswt_control_pane_g3_copy2_ParamLimits

0xcfd8,	// (0x000388ae) eswt_control_pane_g3_copy2

0xcfe5,	// (0x000388bb) eswt_control_pane_g4_copy2_ParamLimits

0xcfe5,	// (0x000388bb) eswt_control_pane_g4_copy2

0x7256,	// (0x00032b2c) common_borders_pane_cp4

0xd042,	// (0x00038918) separator_horizontal_pane_g1

0xd04b,	// (0x00038921) separator_horizontal_pane_g2

0xd054,	// (0x0003892a) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0003b4ba) separator_horizontal_pane_g

0xcfbe,	// (0x00038894) eswt_control_pane_g1_copy3_ParamLimits

0xcfbe,	// (0x00038894) eswt_control_pane_g1_copy3

0xcfcb,	// (0x000388a1) eswt_control_pane_g2_copy3_ParamLimits

0xcfcb,	// (0x000388a1) eswt_control_pane_g2_copy3

0xcfd8,	// (0x000388ae) eswt_control_pane_g3_copy3_ParamLimits

0xcfd8,	// (0x000388ae) eswt_control_pane_g3_copy3

0xcfe5,	// (0x000388bb) eswt_control_pane_g4_copy3_ParamLimits

0xcfe5,	// (0x000388bb) eswt_control_pane_g4_copy3

0x7256,	// (0x00032b2c) common_borders_pane_cp5

0xd05d,	// (0x00038933) separator_vertical_pane_g1

0xd066,	// (0x0003893c) separator_vertical_pane_g2

0xd06f,	// (0x00038945) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0003b4c1) separator_vertical_pane_g

0xcfbe,	// (0x00038894) eswt_control_pane_g1_copy4_ParamLimits

0xcfbe,	// (0x00038894) eswt_control_pane_g1_copy4

0xcfcb,	// (0x000388a1) eswt_control_pane_g2_copy4_ParamLimits

0xcfcb,	// (0x000388a1) eswt_control_pane_g2_copy4

0xcfd8,	// (0x000388ae) eswt_control_pane_g3_copy4_ParamLimits

0xcfd8,	// (0x000388ae) eswt_control_pane_g3_copy4

0xcfe5,	// (0x000388bb) eswt_control_pane_g4_copy4_ParamLimits

0xcfe5,	// (0x000388bb) eswt_control_pane_g4_copy4

0xeb12,	// (0x0003a3e8) eswt_ctrl_combo_button_pane

0xeb1a,	// (0x0003a3f0) eswt_ctrl_input_pane

0xeb22,	// (0x0003a3f8) popup_choice_list_window_cp70

0xeb2a,	// (0x0003a400) eswt_ctrl_input_pane_t1

0x7256,	// (0x00032b2c) input_focus_pane_cp70

0xc7cd,	// (0x000380a3) bg_button_pane_cp70_ParamLimits

0xc7cd,	// (0x000380a3) bg_button_pane_cp70

0xeb38,	// (0x0003a40e) eswt_ctrl_combo_button_pane_g1

0xd078,	// (0x0003894e) wait_bar_pane_cp70

0xab00,	// (0x000363d6) bg_popup_window_pane_cp70_ParamLimits

0xab00,	// (0x000363d6) bg_popup_window_pane_cp70

0xd080,	// (0x00038956) popup_eswt_tasktip_window_t1

0xd096,	// (0x0003896c) wait_bar_pane_cp71_ParamLimits

0xd096,	// (0x0003896c) wait_bar_pane_cp71

0xd0a2,	// (0x00038978) grid_eswt_app_pane

0x81c0,	// (0x00033a96) scroll_pane_cp70

0xeb40,	// (0x0003a416) cell_eswt_app_pane_ParamLimits

0xeb40,	// (0x0003a416) cell_eswt_app_pane

0xeb68,	// (0x0003a43e) cell_eswt_app_pane_g1_ParamLimits

0xeb68,	// (0x0003a43e) cell_eswt_app_pane_g1

0xeb97,	// (0x0003a46d) cell_eswt_app_pane_g2_ParamLimits

0xeb97,	// (0x0003a46d) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x0003b4c8) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x0003b4c8) cell_eswt_app_pane_g

0xebc0,	// (0x0003a496) cell_eswt_app_pane_t1_ParamLimits

0xebc0,	// (0x0003a496) cell_eswt_app_pane_t1

0xd0ab,	// (0x00038981) grid_highlight_pane_cp70_ParamLimits

0xd0ab,	// (0x00038981) grid_highlight_pane_cp70

0x7bab,	// (0x00033481) set_content_pane_g1

0xa873,	// (0x00036149) status_small_volume_pane

0x94ee,	// (0x00034dc4) status_small_volume_pane_g1

0x94f6,	// (0x00034dcc) volume_small2_pane

0x94ff,	// (0x00034dd5) volume_small2_pane_g1

0x9508,	// (0x00034dde) volume_small2_pane_g2

0x9511,	// (0x00034de7) volume_small2_pane_g3

0x951a,	// (0x00034df0) volume_small2_pane_g4

0x9523,	// (0x00034df9) volume_small2_pane_g5

0x952c,	// (0x00034e02) volume_small2_pane_g6

0x9535,	// (0x00034e0b) volume_small2_pane_g7

0x953e,	// (0x00034e14) volume_small2_pane_g8

0x9547,	// (0x00034e1d) volume_small2_pane_g9

0x9550,	// (0x00034e26) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0003b4cd) volume_small2_pane_g

0xcb3b,	// (0x00038411) fep_vkb_top_text_pane_g1_ParamLimits

0xea44,	// (0x0003a31a) fep_vkb_top_text_pane_t1_ParamLimits

0xcd5f,	// (0x00038635) popup_preview_fixed_window_g3_ParamLimits

0xcd5f,	// (0x00038635) popup_preview_fixed_window_g3

0x8b94,	// (0x0003446a) popup_toolbar_trans_pane

0xbbb6,	// (0x0003748c) aid_height_set_list_ParamLimits

0xbbc2,	// (0x00037498) aid_size_parent_ParamLimits

0x87a0,	// (0x00034076) list_highlight_pane_cp2_ParamLimits

0x7bab,	// (0x00033481) set_content_pane_g1_ParamLimits

0xdf5a,	// (0x00039830) list_single_image_pane_ParamLimits

0xdf5a,	// (0x00039830) list_single_image_pane

0xebf2,	// (0x0003a4c8) aid_size_cell_image_ParamLimits

0xebf2,	// (0x0003a4c8) aid_size_cell_image

0xebff,	// (0x0003a4d5) grid_single_image_pane_ParamLimits

0xebff,	// (0x0003a4d5) grid_single_image_pane

0x7bab,	// (0x00033481) list_single_image_pane_g1_ParamLimits

0x7bab,	// (0x00033481) list_single_image_pane_g1

0x7ccf,	// (0x000335a5) list_single_image_pane_g2_ParamLimits

0x7ccf,	// (0x000335a5) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0003b4e2) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0003b4e2) list_single_image_pane_g

0xd0b7,	// (0x0003898d) list_single_image_pane_t1_ParamLimits

0xd0b7,	// (0x0003898d) list_single_image_pane_t1

0xec0b,	// (0x0003a4e1) cell_image_list_pane_ParamLimits

0xec0b,	// (0x0003a4e1) cell_image_list_pane

0xec1e,	// (0x0003a4f4) cell_image_list_pane_g1

0xec27,	// (0x0003a4fd) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0003b4e7) cell_image_list_pane_g

0xd0cd,	// (0x000389a3) aid_size_cell_tb_trans_pane

0x7cb5,	// (0x0003358b) bg_tb_trans_pane

0xd0df,	// (0x000389b5) grid_tb_trans_pane

0xaa80,	// (0x00036356) bg_tb_trans_pane_g1

0xaa88,	// (0x0003635e) bg_tb_trans_pane_g2

0xaa90,	// (0x00036366) bg_tb_trans_pane_g3

0xaa98,	// (0x0003636e) bg_tb_trans_pane_g4

0xaaa0,	// (0x00036376) bg_tb_trans_pane_g5

0xaab8,	// (0x0003638e) bg_tb_trans_pane_g6

0xaac0,	// (0x00036396) bg_tb_trans_pane_g7

0xaaa8,	// (0x0003637e) bg_tb_trans_pane_g8

0xaab0,	// (0x00036386) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x0003b4ec) bg_tb_trans_pane_g

0xd0f3,	// (0x000389c9) cell_toolbar_trans_pane_ParamLimits

0xd0f3,	// (0x000389c9) cell_toolbar_trans_pane

0xc808,	// (0x000380de) cell_toolbar_trans_pane_g1

0xe98f,	// (0x0003a265) list_form2_midp_pane_t1

0xe99d,	// (0x0003a273) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0003b395) list_form2_midp_pane_t

0xc4dc,	// (0x00037db2) scroll_pane_cp51_ParamLimits

0xc652,	// (0x00037f28) form2_midp_wait_pane_g1

0xc65b,	// (0x00037f31) form2_midp_wait_pane_g2

0xc664,	// (0x00037f3a) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0003b3aa) form2_midp_wait_pane_g

0x75b3,	// (0x00032e89) list_highlight_pane_cp21_ParamLimits

0xc6a2,	// (0x00037f78) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc6b1,	// (0x00037f87) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x8f92,	// (0x00034868) list_single_2graphic_im_pane_ParamLimits

0x8f92,	// (0x00034868) list_single_2graphic_im_pane

0xec30,	// (0x0003a506) list_single_2graphic_im_pane_g1_ParamLimits

0xec30,	// (0x0003a506) list_single_2graphic_im_pane_g1

0xec41,	// (0x0003a517) list_single_2graphic_im_pane_g2_ParamLimits

0xec41,	// (0x0003a517) list_single_2graphic_im_pane_g2

0xec4d,	// (0x0003a523) list_single_2graphic_im_pane_g3_ParamLimits

0xec4d,	// (0x0003a523) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x0003b4ff) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x0003b4ff) list_single_2graphic_im_pane_g

0xec61,	// (0x0003a537) list_single_2graphic_im_pane_t1_ParamLimits

0xec61,	// (0x0003a537) list_single_2graphic_im_pane_t1

0xcd6b,	// (0x00038641) list_single_graphic_2heading_pane_fp_ParamLimits

0xcd6b,	// (0x00038641) list_single_graphic_2heading_pane_fp

0x6fbc,	// (0x00032892) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6fbc,	// (0x00032892) list_single_graphic_2heading_pane_fp_g1

0xcd7f,	// (0x00038655) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xcd7f,	// (0x00038655) list_single_graphic_2heading_pane_fp_g2

0x7c34,	// (0x0003350a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7c34,	// (0x0003350a) list_single_graphic_2heading_pane_fp_g3

0x93cb,	// (0x00034ca1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x93cb,	// (0x00034ca1) list_single_graphic_2heading_pane_fp_g4

0xcd8b,	// (0x00038661) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xcd8b,	// (0x00038661) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0003b42d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0003b42d) list_single_graphic_2heading_pane_fp_g

0x70ef,	// (0x000329c5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x70ef,	// (0x000329c5) list_single_graphic_2heading_pane_fp_t1

0x6ff4,	// (0x000328ca) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6ff4,	// (0x000328ca) list_single_graphic_2heading_pane_fp_t2

0x7105,	// (0x000329db) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7105,	// (0x000329db) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x0003b508) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x0003b508) list_single_graphic_2heading_pane_fp_t

0xc891,	// (0x00038167) fep_hwr_write_pane_g5_ParamLimits

0xc891,	// (0x00038167) fep_hwr_write_pane_g5

0xc89d,	// (0x00038173) fep_hwr_write_pane_g6_ParamLimits

0xc89d,	// (0x00038173) fep_hwr_write_pane_g6

0xcf91,	// (0x00038867) eswt_shell_pane_ParamLimits

0xab00,	// (0x000363d6) bg_popup_window_pane_cp18_ParamLimits

0xbb5a,	// (0x00037430) heading_pane_cp70

0xd080,	// (0x00038956) popup_eswt_tasktip_window_t1_ParamLimits

0xd9ae,	// (0x00039284) aid_touch_tab_arrow_left

0xd9ba,	// (0x00039290) aid_touch_tab_arrow_right

0xd33d,	// (0x00038c13) title_pane_g3_ParamLimits

0xd33d,	// (0x00038c13) title_pane_g3

0x7c85,	// (0x0003355b) set_value_pane_g1

0x8b94,	// (0x0003446a) popup_toolbar_trans_pane_ParamLimits

0xd0cd,	// (0x000389a3) aid_size_cell_tb_trans_pane_ParamLimits

0x7cb5,	// (0x0003358b) bg_tb_trans_pane_ParamLimits

0xd0df,	// (0x000389b5) grid_tb_trans_pane_ParamLimits

0x7786,	// (0x0003305c) cont_note_pane_ParamLimits

0x7786,	// (0x0003305c) cont_note_pane

0x7a19,	// (0x000332ef) cont_snote2_single_text_pane_ParamLimits

0x7a19,	// (0x000332ef) cont_snote2_single_text_pane

0x7a19,	// (0x000332ef) cont_snote2_single_graphic_pane_ParamLimits

0x7a19,	// (0x000332ef) cont_snote2_single_graphic_pane

0xb048,	// (0x0003691e) cont_note_wait_pane_ParamLimits

0xb048,	// (0x0003691e) cont_note_wait_pane

0xb048,	// (0x0003691e) cont_note_image_pane_ParamLimits

0xb048,	// (0x0003691e) cont_note_image_pane

0xd125,	// (0x000389fb) popup_note2_window_g1_ParamLimits

0xd125,	// (0x000389fb) popup_note2_window_g1

0xd156,	// (0x00038a2c) popup_note2_window_t1_ParamLimits

0xd156,	// (0x00038a2c) popup_note2_window_t1

0xd19b,	// (0x00038a71) popup_note2_window_t2_ParamLimits

0xd19b,	// (0x00038a71) popup_note2_window_t2

0xd1e0,	// (0x00038ab6) popup_note2_window_t3_ParamLimits

0xd1e0,	// (0x00038ab6) popup_note2_window_t3

0xd225,	// (0x00038afb) popup_note2_window_t4_ParamLimits

0xd225,	// (0x00038afb) popup_note2_window_t4

0x780a,	// (0x000330e0) popup_note2_window_t5_ParamLimits

0x780a,	// (0x000330e0) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0003b514) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0003b514) popup_note2_window_t

0xd254,	// (0x00038b2a) popup_note2_image_window_g1_ParamLimits

0xd254,	// (0x00038b2a) popup_note2_image_window_g1

0xd260,	// (0x00038b36) popup_note2_image_window_g2_ParamLimits

0xd260,	// (0x00038b36) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x0003b51f) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x0003b51f) popup_note2_image_window_g

0xd272,	// (0x00038b48) popup_note2_image_window_t1_ParamLimits

0xd272,	// (0x00038b48) popup_note2_image_window_t1

0xd28a,	// (0x00038b60) popup_note2_image_window_t2_ParamLimits

0xd28a,	// (0x00038b60) popup_note2_image_window_t2

0xdfe1,	// (0x000398b7) popup_note2_image_window_t3_ParamLimits

0xdfe1,	// (0x000398b7) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0003b524) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0003b524) popup_note2_image_window_t

0xb056,	// (0x0003692c) popup_note2_wait_window_g1_ParamLimits

0xb056,	// (0x0003692c) popup_note2_wait_window_g1

0xb062,	// (0x00036938) popup_note2_wait_window_g2_ParamLimits

0xb062,	// (0x00036938) popup_note2_wait_window_g2

0xb06e,	// (0x00036944) popup_note2_wait_window_g3_ParamLimits

0xb06e,	// (0x00036944) popup_note2_wait_window_g3

0x0002,

0xf821,	// (0x0003b0f7) popup_note2_wait_window_g_ParamLimits

0xf821,	// (0x0003b0f7) popup_note2_wait_window_g

0xdffd,	// (0x000398d3) popup_note2_wait_window_t1_ParamLimits

0xdffd,	// (0x000398d3) popup_note2_wait_window_t1

0xe01b,	// (0x000398f1) popup_note2_wait_window_t2_ParamLimits

0xe01b,	// (0x000398f1) popup_note2_wait_window_t2

0xe039,	// (0x0003990f) popup_note2_wait_window_t3_ParamLimits

0xe039,	// (0x0003990f) popup_note2_wait_window_t3

0xe04b,	// (0x00039921) popup_note2_wait_window_t4_ParamLimits

0xe04b,	// (0x00039921) popup_note2_wait_window_t4

0x0003,

0xfc55,	// (0x0003b52b) popup_note2_wait_window_t_ParamLimits

0xfc55,	// (0x0003b52b) popup_note2_wait_window_t

0xe05d,	// (0x00039933) wait_bar2_pane_ParamLimits

0xe05d,	// (0x00039933) wait_bar2_pane

0xe075,	// (0x0003994b) popup_snote2_single_text_window_g1_ParamLimits

0xe075,	// (0x0003994b) popup_snote2_single_text_window_g1

0xe09d,	// (0x00039973) popup_snote2_single_text_window_t1_ParamLimits

0xe09d,	// (0x00039973) popup_snote2_single_text_window_t1

0xe0e9,	// (0x000399bf) popup_snote2_single_text_window_t2_ParamLimits

0xe0e9,	// (0x000399bf) popup_snote2_single_text_window_t2

0xe135,	// (0x00039a0b) popup_snote2_single_text_window_t3_ParamLimits

0xe135,	// (0x00039a0b) popup_snote2_single_text_window_t3

0xe176,	// (0x00039a4c) popup_snote2_single_text_window_t4_ParamLimits

0xe176,	// (0x00039a4c) popup_snote2_single_text_window_t4

0xe1ac,	// (0x00039a82) popup_snote2_single_text_window_t5_ParamLimits

0xe1ac,	// (0x00039a82) popup_snote2_single_text_window_t5

0x0004,

0xfc5e,	// (0x0003b534) popup_snote2_single_text_window_t_ParamLimits

0xfc5e,	// (0x0003b534) popup_snote2_single_text_window_t

0xe1d7,	// (0x00039aad) popup_snote2_single_graphic_window_g1_ParamLimits

0xe1d7,	// (0x00039aad) popup_snote2_single_graphic_window_g1

0xe1ff,	// (0x00039ad5) popup_snote2_single_graphic_window_g2_ParamLimits

0xe1ff,	// (0x00039ad5) popup_snote2_single_graphic_window_g2

0x0001,

0xfc69,	// (0x0003b53f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc69,	// (0x0003b53f) popup_snote2_single_graphic_window_g

0xe227,	// (0x00039afd) popup_snote2_single_graphic_window_t1_ParamLimits

0xe227,	// (0x00039afd) popup_snote2_single_graphic_window_t1

0xe273,	// (0x00039b49) popup_snote2_single_graphic_window_t2_ParamLimits

0xe273,	// (0x00039b49) popup_snote2_single_graphic_window_t2

0xe135,	// (0x00039a0b) popup_snote2_single_graphic_window_t3_ParamLimits

0xe135,	// (0x00039a0b) popup_snote2_single_graphic_window_t3

0xe176,	// (0x00039a4c) popup_snote2_single_graphic_window_t4_ParamLimits

0xe176,	// (0x00039a4c) popup_snote2_single_graphic_window_t4

0xe1ac,	// (0x00039a82) popup_snote2_single_graphic_window_t5_ParamLimits

0xe1ac,	// (0x00039a82) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6e,	// (0x0003b544) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6e,	// (0x0003b544) popup_snote2_single_graphic_window_t

0xc475,	// (0x00037d4b) clock_nsta_pane_cp2_t1

0xc475,	// (0x00037d4b) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0003b36b) clock_nsta_pane_cp2_t

0x6944,	// (0x0003221a) form_field_data_wide_pane_g1_ParamLimits

0x7bab,	// (0x00033481) form_field_data_wide_pane_g2_ParamLimits

0x7bab,	// (0x00033481) form_field_data_wide_pane_g2

0x7ccf,	// (0x000335a5) form_field_data_wide_pane_g3_ParamLimits

0x7ccf,	// (0x000335a5) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0003af31) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0003af31) form_field_data_wide_pane_g

0xe889,	// (0x0003a15f) grid_touch_3_pane_ParamLimits

0xe889,	// (0x0003a15f) grid_touch_3_pane

0xec92,	// (0x0003a568) cell_touch_3_pane_ParamLimits

0xec92,	// (0x0003a568) cell_touch_3_pane

0xc808,	// (0x000380de) cell_touch_3_pane_g1

0xc808,	// (0x000380de) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0003b3f0) cell_touch_3_pane_g

0x7862,	// (0x00033138) cont_query_data_pane

0x786a,	// (0x00033140) cont_query_data_pane_cp1

0xe2bf,	// (0x00039b95) button_value_adjust_pane_cp7

0xe2c7,	// (0x00039b9d) query_popup_pane_cp3

0xa2a2,	// (0x00035b78) bg_popup_sub_pane_cp22_ParamLimits

0x83d1,	// (0x00033ca7) navi_navi_volume_pane_cp2

0x83e9,	// (0x00033cbf) popup_side_volume_key_window_g2

0x83f5,	// (0x00033ccb) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0003afc7) popup_side_volume_key_window_g

0x840f,	// (0x00033ce5) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0003afce) popup_side_volume_key_window_t

0xa4ec,	// (0x00035dc2) popup_side_volume_key_window_ParamLimits

0x7c28,	// (0x000334fe) list_double_graphic_pane_g4_ParamLimits

0x7c28,	// (0x000334fe) list_double_graphic_pane_g4

0x6ccc,	// (0x000325a2) list_single_2heading_msg_pane_ParamLimits

0x6ccc,	// (0x000325a2) list_single_2heading_msg_pane

0x7123,	// (0x000329f9) list_single_2heading_msg_pane_g1_ParamLimits

0x7123,	// (0x000329f9) list_single_2heading_msg_pane_g1

0x7bab,	// (0x00033481) list_single_2heading_msg_pane_g2_ParamLimits

0x7bab,	// (0x00033481) list_single_2heading_msg_pane_g2

0x712f,	// (0x00032a05) list_single_2heading_msg_pane_g3_ParamLimits

0x712f,	// (0x00032a05) list_single_2heading_msg_pane_g3

0x713b,	// (0x00032a11) list_single_2heading_msg_pane_g4_ParamLimits

0x713b,	// (0x00032a11) list_single_2heading_msg_pane_g4

0x0003,

0xfc79,	// (0x0003b54f) list_single_2heading_msg_pane_g_ParamLimits

0xfc79,	// (0x0003b54f) list_single_2heading_msg_pane_g

0x7153,	// (0x00032a29) list_single_2heading_msg_pane_t1_ParamLimits

0x7153,	// (0x00032a29) list_single_2heading_msg_pane_t1

0x717b,	// (0x00032a51) list_single_2heading_msg_pane_t2_ParamLimits

0x717b,	// (0x00032a51) list_single_2heading_msg_pane_t2

0x71aa,	// (0x00032a80) list_single_2heading_msg_pane_t3_ParamLimits

0x71aa,	// (0x00032a80) list_single_2heading_msg_pane_t3

0x71e3,	// (0x00032ab9) list_single_2heading_msg_pane_t4_ParamLimits

0x71e3,	// (0x00032ab9) list_single_2heading_msg_pane_t4

0x0003,

0xfc82,	// (0x0003b558) list_single_2heading_msg_pane_t_ParamLimits

0xfc82,	// (0x0003b558) list_single_2heading_msg_pane_t

0x756f,	// (0x00032e45) title_pane_g4_ParamLimits

0x756f,	// (0x00032e45) title_pane_g4

0x7ff5,	// (0x000338cb) title_pane_stacon_g3_ParamLimits

0x7ff5,	// (0x000338cb) title_pane_stacon_g3

0xd119,	// (0x000389ef) list_single_2graphic_im_pane_g4_ParamLimits

0xd119,	// (0x000389ef) list_single_2graphic_im_pane_g4

0xb984,	// (0x0003725a) popup_side_volume_key_window_cp

0xbdd1,	// (0x000376a7) main_idle_act2_pane_t1

0x8c5f,	// (0x00034535) toolbar_button_pane_g10

0xd5c1,	// (0x00038e97) popup_toolbar_window_cp1

0xc466,	// (0x00037d3c) clock_nsta_pane_cp_t1

0xc466,	// (0x00037d3c) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0003b366) clock_nsta_pane_cp_t

0x83d1,	// (0x00033ca7) navi_navi_volume_pane_cp2_ParamLimits

0x83dd,	// (0x00033cb3) popup_side_volume_key_window_g1_ParamLimits

0x83e9,	// (0x00033cbf) popup_side_volume_key_window_g2_ParamLimits

0x83f5,	// (0x00033ccb) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0003afc7) popup_side_volume_key_window_g_ParamLimits

0x918e,	// (0x00034a64) fep_hwr_aid_pane

0x342a,	// (0x0002ed00) bg_fep_hwr_top_pane_g4_ParamLimits

0xc861,	// (0x00038137) fep_hwr_top_pane_g1_ParamLimits

0xc873,	// (0x00038149) fep_hwr_top_pane_g2_ParamLimits

0x9241,	// (0x00034b17) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0003b3bb) fep_hwr_top_pane_g_ParamLimits

0x9256,	// (0x00034b2c) fep_hwr_top_text_pane_ParamLimits

0xb74f,	// (0x00037025) aid_touch_tab_arrow_arrow_2

0xb758,	// (0x0003702e) aid_touch_tab_arrow_left_2

0x91a2,	// (0x00034a78) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x91d5,	// (0x00034aab) fep_hwr_prediction_pane

0xc9a6,	// (0x0003827c) fep_vkb_prediction_pane

0xea21,	// (0x0003a2f7) fep_vkb_side_pane_g3_ParamLimits

0xea21,	// (0x0003a2f7) fep_vkb_side_pane_g3

0xca34,	// (0x0003830a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xcddf,	// (0x000386b5) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xcdec,	// (0x000386c2) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0003b465) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xe2d8,	// (0x00039bae) fep_hwr_prediction_pane_g1

0x9559,	// (0x00034e2f) fep_hwr_prediction_pane_g2

0x9561,	// (0x00034e37) fep_hwr_prediction_pane_g3

0x9569,	// (0x00034e3f) fep_hwr_prediction_pane_g4

0x0003,

0xfc8b,	// (0x0003b561) fep_hwr_prediction_pane_g

0xe2d8,	// (0x00039bae) fep_vkb_prediction_pane_g1

0xe2e2,	// (0x00039bb8) fep_vkb_prediction_pane_g2

0xe2ea,	// (0x00039bc0) fep_vkb_prediction_pane_g3

0xe2f2,	// (0x00039bc8) fep_vkb_prediction_pane_g4

0x0003,

0xfc94,	// (0x0003b56a) fep_vkb_prediction_pane_g

0x8f0d,	// (0x000347e3) slider_set_pane_g3

0x8f21,	// (0x000347f7) slider_set_pane_g4

0x8f39,	// (0x0003480f) slider_set_pane_g5

0x8f0d,	// (0x000347e3) slider_set_pane_g6

0x8f4f,	// (0x00034825) slider_set_pane_g7

0xbbe5,	// (0x000374bb) slider_form_pane_g3

0xbbee,	// (0x000374c4) slider_form_pane_g4

0xbbf6,	// (0x000374cc) slider_form_pane_g5

0xbbe5,	// (0x000374bb) slider_form_pane_g6

0xdf3f,	// (0x00039815) slider_form_pane_g7

0xc022,	// (0x000378f8) slider_set_pane_vc_g3

0xc02b,	// (0x00037901) slider_set_pane_vc_g4

0xc034,	// (0x0003790a) slider_set_pane_vc_g5

0xc022,	// (0x000378f8) slider_set_pane_vc_g6

0xc03d,	// (0x00037913) slider_set_pane_vc_g7

0xc022,	// (0x000378f8) slider_form_pane_vc_g1

0xc02b,	// (0x00037901) slider_form_pane_vc_g2

0xc034,	// (0x0003790a) slider_form_pane_vc_g3

0xc022,	// (0x000378f8) slider_form_pane_vc_g4

0xc1b1,	// (0x00037a87) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0003b338) slider_form_pane_vc_g

0x7256,	// (0x00032b2c) main_idle_act3_pane

0xe2fa,	// (0x00039bd0) ai3_links_pane

0xecd3,	// (0x0003a5a9) popup_ai3_data_window_ParamLimits

0xecd3,	// (0x0003a5a9) popup_ai3_data_window

0x7256,	// (0x00032b2c) grid_ai3_links_pane

0xeceb,	// (0x0003a5c1) cell_ai3_links_pane_ParamLimits

0xeceb,	// (0x0003a5c1) cell_ai3_links_pane

0xe303,	// (0x00039bd9) bg_popup_sub_pane_cp11

0xe310,	// (0x00039be6) cell_ai3_links_pane_g1

0x7256,	// (0x00032b2c) bg_popup_sub_pane_cp12

0xe335,	// (0x00039c0b) heading_ai3_data_pane

0xe33d,	// (0x00039c13) list_ai3_gene_pane

0xe349,	// (0x00039c1f) popup_ai3_data_window_g1

0xe351,	// (0x00039c27) heading_ai3_data_pane_g1

0xe359,	// (0x00039c2f) heading_ai3_data_pane_t1

0xe367,	// (0x00039c3d) list_double_ai3_gene_pane_ParamLimits

0xe367,	// (0x00039c3d) list_double_ai3_gene_pane

0xe374,	// (0x00039c4a) list_single_ai3_gene_pane_ParamLimits

0xe374,	// (0x00039c4a) list_single_ai3_gene_pane

0xc7cd,	// (0x000380a3) list_highlight_pane_cp7_ParamLimits

0xc7cd,	// (0x000380a3) list_highlight_pane_cp7

0xe381,	// (0x00039c57) list_single_a13_gene_pane_t1_ParamLimits

0xe381,	// (0x00039c57) list_single_a13_gene_pane_t1

0xe398,	// (0x00039c6e) list_single_ai3_gene_pane_g1

0xe3a1,	// (0x00039c77) list_single_ai3_gene_pane_g2

0x0001,

0xfc9d,	// (0x0003b573) list_single_ai3_gene_pane_g

0xe3a9,	// (0x00039c7f) list_double_ai3_gene_pane_g1_ParamLimits

0xe3a9,	// (0x00039c7f) list_double_ai3_gene_pane_g1

0xe3b5,	// (0x00039c8b) list_double_ai3_gene_pane_t1_ParamLimits

0xe3b5,	// (0x00039c8b) list_double_ai3_gene_pane_t1

0xe3d1,	// (0x00039ca7) list_double_ai3_gene_pane_t2_ParamLimits

0xe3d1,	// (0x00039ca7) list_double_ai3_gene_pane_t2

0xe3e6,	// (0x00039cbc) list_double_ai3_gene_pane_t3_ParamLimits

0xe3e6,	// (0x00039cbc) list_double_ai3_gene_pane_t3

0x0002,

0xfca2,	// (0x0003b578) list_double_ai3_gene_pane_t_ParamLimits

0xfca2,	// (0x0003b578) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x711b,	// (0x000329f1) aid_size_min_col_2

0xecbf,	// (0x0003a595) aid_size_min_msg_ParamLimits

0xecbf,	// (0x0003a595) aid_size_min_msg

0xea35,	// (0x0003a30b) fep_vkb_top_text_pane_g2_ParamLimits

0xea35,	// (0x0003a30b) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0003b3eb) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0003b3eb) fep_vkb_top_text_pane_g

0x7256,	// (0x00032b2c) main_hc_apps_shell_pane

0xe403,	// (0x00039cd9) grid_hc_apps_pane_ParamLimits

0xe403,	// (0x00039cd9) grid_hc_apps_pane

0xe415,	// (0x00039ceb) list_hc_apps_pane

0xe41d,	// (0x00039cf3) scroll_pane_cp37_ParamLimits

0xe41d,	// (0x00039cf3) scroll_pane_cp37

0xecff,	// (0x0003a5d5) cell_hc_apps_pane_ParamLimits

0xecff,	// (0x0003a5d5) cell_hc_apps_pane

0xed8d,	// (0x0003a663) cell_hc_apps_pane_g1_ParamLimits

0xed8d,	// (0x0003a663) cell_hc_apps_pane_g1

0xe429,	// (0x00039cff) cell_hc_apps_pane_g2_ParamLimits

0xe429,	// (0x00039cff) cell_hc_apps_pane_g2

0xe445,	// (0x00039d1b) cell_hc_apps_pane_g3_ParamLimits

0xe445,	// (0x00039d1b) cell_hc_apps_pane_g3

0x0002,

0xfca9,	// (0x0003b57f) cell_hc_apps_pane_g_ParamLimits

0xfca9,	// (0x0003b57f) cell_hc_apps_pane_g

0xedb9,	// (0x0003a68f) cell_hc_apps_pane_t1_ParamLimits

0xedb9,	// (0x0003a68f) cell_hc_apps_pane_t1

0x7786,	// (0x0003305c) grid_highlight_pane_cp10_ParamLimits

0x7786,	// (0x0003305c) grid_highlight_pane_cp10

0xedf7,	// (0x0003a6cd) list_single_hc_apps_pane_ParamLimits

0xedf7,	// (0x0003a6cd) list_single_hc_apps_pane

0xee27,	// (0x0003a6fd) list_single_hc_apps_pane_g1

0x9571,	// (0x00034e47) list_single_hc_apps_pane_g2

0x0001,

0xfcb0,	// (0x0003b586) list_single_hc_apps_pane_g

0x958a,	// (0x00034e60) list_single_hc_apps_pane_g2_copy1

0x7208,	// (0x00032ade) list_single_hc_apps_pane_t1

0x75b3,	// (0x00032e89) bg_set_opt_pane_cp_ParamLimits

0x75d1,	// (0x00032ea7) setting_slider_pane_t1_ParamLimits

0x75e7,	// (0x00032ebd) setting_slider_pane_t2_ParamLimits

0x7600,	// (0x00032ed6) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0003ae0f) setting_slider_pane_t_ParamLimits

0x7617,	// (0x00032eed) slider_set_pane_ParamLimits

0x866d,	// (0x00033f43) control_pane_g5_ParamLimits

0x866d,	// (0x00033f43) control_pane_g5

0xbba1,	// (0x00037477) slider_set_pane_g1_ParamLimits

0x8f01,	// (0x000347d7) slider_set_pane_g2_ParamLimits

0x8f0d,	// (0x000347e3) slider_set_pane_g3_ParamLimits

0x8f21,	// (0x000347f7) slider_set_pane_g4_ParamLimits

0x8f39,	// (0x0003480f) slider_set_pane_g5_ParamLimits

0x8f0d,	// (0x000347e3) slider_set_pane_g6_ParamLimits

0x8f4f,	// (0x00034825) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x0003b213) slider_set_pane_g_ParamLimits

0x75b3,	// (0x00032e89) navi_icon_text_pane_ParamLimits

0xd988,	// (0x0003925e) aid_fill_nsta_2_ParamLimits

0xd9ae,	// (0x00039284) aid_touch_tab_arrow_left_ParamLimits

0xd9ba,	// (0x00039290) aid_touch_tab_arrow_right_ParamLimits

0xda24,	// (0x000392fa) clock_nsta_pane_ParamLimits

0xb731,	// (0x00037007) navi_icon_pane_g1_ParamLimits

0xb73d,	// (0x00037013) navi_text_pane_t1_ParamLimits

0xc4b6,	// (0x00037d8c) navi_icon_text_pane_g1_ParamLimits

0xc4c2,	// (0x00037d98) navi_icon_text_pane_t1_ParamLimits

0xee27,	// (0x0003a6fd) list_single_hc_apps_pane_g1_ParamLimits

0x9571,	// (0x00034e47) list_single_hc_apps_pane_g2_ParamLimits

0xfcb0,	// (0x0003b586) list_single_hc_apps_pane_g_ParamLimits

0x958a,	// (0x00034e60) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7208,	// (0x00032ade) list_single_hc_apps_pane_t1_ParamLimits

0x74a9,	// (0x00032d7f) popup_toolbar2_fixed_window_ParamLimits

0x74a9,	// (0x00032d7f) popup_toolbar2_fixed_window

0x8b8c,	// (0x00034462) popup_toolbar2_float_window

0x7256,	// (0x00032b2c) bg_popup_sub_pane_cp27

0xe467,	// (0x00039d3d) grid_toolbar2_float_pane

0x7256,	// (0x00032b2c) bg_popup_sub_pane_cp26

0xe467,	// (0x00039d3d) grid_toolbar2_fixed_pane

0xee40,	// (0x0003a716) cell_toolbar2_fixed_pane_ParamLimits

0xee40,	// (0x0003a716) cell_toolbar2_fixed_pane

0xee51,	// (0x0003a727) cell_toolbar2_fixed_pane_g1

0xe46f,	// (0x00039d45) toolbar2_fixed_button_pane

0xaa80,	// (0x00036356) toolbar2_fixed_button_pane_g1

0xaa88,	// (0x0003635e) toolbar2_fixed_button_pane_g2

0xaa90,	// (0x00036366) toolbar2_fixed_button_pane_g3

0xaa98,	// (0x0003636e) toolbar2_fixed_button_pane_g4

0xaaa0,	// (0x00036376) toolbar2_fixed_button_pane_g5

0xaaa8,	// (0x0003637e) toolbar2_fixed_button_pane_g6

0xaab0,	// (0x00036386) toolbar2_fixed_button_pane_g7

0xaab8,	// (0x0003638e) toolbar2_fixed_button_pane_g8

0xaac0,	// (0x00036396) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x0003b115) toolbar2_fixed_button_pane_g

0xe477,	// (0x00039d4d) cell_toolbar2_float_pane_ParamLimits

0xe477,	// (0x00039d4d) cell_toolbar2_float_pane

0xe488,	// (0x00039d5e) cell_toolbar2_float_pane_g1

0xe46f,	// (0x00039d45) toolbar2_fixed_button_pane_cp

0xe9ee,	// (0x0003a2c4) fep_vkb_accented_list_pane_ParamLimits

0xe9ee,	// (0x0003a2c4) fep_vkb_accented_list_pane

0x9398,	// (0x00034c6e) bg_popup_fep_shadow_pane_g9

0xa6f4,	// (0x00035fca) bg_popup_fep_shadow_pane_cp3

0x7df2,	// (0x000336c8) list_accented_list_pane

0xe491,	// (0x00039d67) list_single_accented_list_pane_ParamLimits

0xe491,	// (0x00039d67) list_single_accented_list_pane

0xa6f4,	// (0x00035fca) list_highlight_pane_cp10

0xe4a2,	// (0x00039d78) list_single_accented_list_pane_t1

0x8af2,	// (0x000343c8) popup_slider_window_ParamLimits

0x8af2,	// (0x000343c8) popup_slider_window

0xe2cf,	// (0x00039ba5) aid_indentation_list_msg

0xeeec,	// (0x0003a7c2) bg_popup_window_pane_cp19

0xe508,	// (0x00039dde) popup_slider_window_g1

0xe524,	// (0x00039dfa) popup_slider_window_g2

0xe540,	// (0x00039e16) popup_slider_window_g3

0x0005,

0xfcb5,	// (0x0003b58b) popup_slider_window_g

0xe55c,	// (0x00039e32) popup_slider_window_t1

0xe5a0,	// (0x00039e76) small_volume_slider_vertical_pane

0xc808,	// (0x000380de) small_volume_slider_vertical_pane_g1

0xc808,	// (0x000380de) small_volume_slider_vertical_pane_g2

0xe5bc,	// (0x00039e92) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc7,	// (0x0003b59d) small_volume_slider_vertical_pane_g

0x72a5,	// (0x00032b7b) area_side_right_pane_ParamLimits

0x72a5,	// (0x00032b7b) area_side_right_pane

0x95a6,	// (0x00034e7c) aid_size_side_button_ParamLimits

0x95a6,	// (0x00034e7c) aid_size_side_button

0x95ba,	// (0x00034e90) grid_sctrl_middle_pane_ParamLimits

0x95ba,	// (0x00034e90) grid_sctrl_middle_pane

0x95d6,	// (0x00034eac) sctrl_sk_bottom_pane

0x95e7,	// (0x00034ebd) sctrl_sk_top_pane

0x95f9,	// (0x00034ecf) aid_touch_sctrl_top

0x7786,	// (0x0003305c) bg_sctrl_sk_pane_ParamLimits

0x7786,	// (0x0003305c) bg_sctrl_sk_pane

0x9606,	// (0x00034edc) sctrl_sk_top_pane_g1

0x9613,	// (0x00034ee9) sctrl_sk_top_pane_t1

0x95f9,	// (0x00034ecf) aid_touch_sctrl_bottom

0x7786,	// (0x0003305c) bg_sctrl_sk_pane_cp_ParamLimits

0x7786,	// (0x0003305c) bg_sctrl_sk_pane_cp

0x962e,	// (0x00034f04) sctrl_sk_bottom_pane_g1

0x9613,	// (0x00034ee9) sctrl_sk_bottom_pane_t1

0x9637,	// (0x00034f0d) cell_sctrl_middle_pane_ParamLimits

0x9637,	// (0x00034f0d) cell_sctrl_middle_pane

0x9652,	// (0x00034f28) aid_touch_sctrl_middle_ParamLimits

0x9652,	// (0x00034f28) aid_touch_sctrl_middle

0x7cb5,	// (0x0003358b) bg_sctrl_middle_pane_ParamLimits

0x7cb5,	// (0x0003358b) bg_sctrl_middle_pane

0xca34,	// (0x0003830a) cell_sctrl_middle_pane_g1_ParamLimits

0xca34,	// (0x0003830a) cell_sctrl_middle_pane_g1

0x9663,	// (0x00034f39) cell_sctrl_middle_pane_g2_ParamLimits

0x9663,	// (0x00034f39) cell_sctrl_middle_pane_g2

0x0001,

0xfcd3,	// (0x0003b5a9) cell_sctrl_middle_pane_g_ParamLimits

0xfcd3,	// (0x0003b5a9) cell_sctrl_middle_pane_g

0xaa80,	// (0x00036356) bg_sctrl_middle_pane_g1

0xaa88,	// (0x0003635e) bg_sctrl_middle_pane_g2

0xaa90,	// (0x00036366) bg_sctrl_middle_pane_g3

0xaa98,	// (0x0003636e) bg_sctrl_middle_pane_g4

0xaaa0,	// (0x00036376) bg_sctrl_middle_pane_g5

0xaaa8,	// (0x0003637e) bg_sctrl_middle_pane_g6

0xaab0,	// (0x00036386) bg_sctrl_middle_pane_g7

0xaab8,	// (0x0003638e) bg_sctrl_middle_pane_g8

0x0007,

0xfcd8,	// (0x0003b5ae) bg_sctrl_middle_pane_g

0xaac0,	// (0x00036396) bg_sctrl_middle_pane_g8_copy1

0xaa80,	// (0x00036356) bg_sctrl_sk_pane_g1

0xaa88,	// (0x0003635e) bg_sctrl_sk_pane_g2

0xaa90,	// (0x00036366) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x0003b115) bg_sctrl_sk_pane_g

0x7b3b,	// (0x00033411) aid_size_touch_scroll_bar

0xaa98,	// (0x0003636e) bg_sctrl_sk_pane_g4

0xaaa0,	// (0x00036376) bg_sctrl_sk_pane_g5

0xaaa8,	// (0x0003637e) bg_sctrl_sk_pane_g6

0xaab0,	// (0x00036386) bg_sctrl_sk_pane_g7

0xaab8,	// (0x0003638e) bg_sctrl_sk_pane_g8

0xaac0,	// (0x00036396) bg_sctrl_sk_pane_g9

0x8828,	// (0x000340fe) popup_fep_china_hwr2_fs_candidate_window

0x8830,	// (0x00034106) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8830,	// (0x00034106) popup_fep_china_hwr2_fs_control_window

0xca34,	// (0x0003830a) sctrl_sk_top_pane_g2

0x0001,

0xfcce,	// (0x0003b5a4) sctrl_sk_top_pane_g

0xef66,	// (0x0003a83c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xef66,	// (0x0003a83c) aid_fep_china_hwr2_fs_cell

0xef77,	// (0x0003a84d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xef77,	// (0x0003a84d) bg_popup_fep_shadow_pane_cp4

0xef8e,	// (0x0003a864) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xef8e,	// (0x0003a864) bg_popup_fep_shadow_pane_cp5

0xefa0,	// (0x0003a876) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xefa0,	// (0x0003a876) popup_fep_china_hwr2_fs_control_bar_grid

0xefb0,	// (0x0003a886) popup_fep_china_hwr2_fs_control_funtion_grid

0xe5c5,	// (0x00039e9b) aid_fep_china_hwr2_fs_candi_cell

0x7256,	// (0x00032b2c) bg_popup_fep_shadow_pane_cp6

0xe5cf,	// (0x00039ea5) popup_fep_china_hwr2_fs_candidate_grid

0xefb8,	// (0x0003a88e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xefb8,	// (0x0003a88e) cell_fep_china_hwr2_fs_funtion_grid

0xc808,	// (0x000380de) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe5d7,	// (0x00039ead) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe5d7,	// (0x00039ead) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe5e5,	// (0x00039ebb) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe5e5,	// (0x00039ebb) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce9,	// (0x0003b5bf) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce9,	// (0x0003b5bf) cell_fep_china_hwr2_fs_funtion_grid_g

0xefd0,	// (0x0003a8a6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xefd0,	// (0x0003a8a6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xefe5,	// (0x0003a8bb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xefe5,	// (0x0003a8bb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcee,	// (0x0003b5c4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcee,	// (0x0003b5c4) cell_fep_china_hwr2_fs_funtion_grid_t

0xe5fb,	// (0x00039ed1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe603,	// (0x00039ed9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe60b,	// (0x00039ee1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf3,	// (0x0003b5c9) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe613,	// (0x00039ee9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe613,	// (0x00039ee9) cell_fep_china_hwr2_fs_candidate_grid

0xe62c,	// (0x00039f02) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe634,	// (0x00039f0a) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc808,	// (0x000380de) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc808,	// (0x000380de) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0003b3f0) cell_fep_china_hwr2_fs_candidate_grid_g

0xe63c,	// (0x00039f12) cell_fep_china_hwr2_fs_candidate_grid_t1

0xa8e5,	// (0x000361bb) clock_nsta_pane_cp_24_ParamLimits

0xa8e5,	// (0x000361bb) clock_nsta_pane_cp_24

0xa942,	// (0x00036218) indicator_nsta_pane_cp_24_ParamLimits

0xa942,	// (0x00036218) indicator_nsta_pane_cp_24

0xb63c,	// (0x00036f12) heading_pane_g1

0x0001,

0xf8a4,	// (0x0003b17a) heading_pane_g

0xe7d8,	// (0x0003a0ae) grid_sct_catagory_button_pane

0xbca3,	// (0x00037579) scroll_pane_cp5_ParamLimits

0xc4e8,	// (0x00037dbe) button_value_adjust_pane_cp5_ParamLimits

0xc4e8,	// (0x00037dbe) button_value_adjust_pane_cp5

0xc5a6,	// (0x00037e7c) form2_midp_time_pane_ParamLimits

0xe64a,	// (0x00039f20) cell_sct_catagory_button_pane_ParamLimits

0xe64a,	// (0x00039f20) cell_sct_catagory_button_pane

0xc7cd,	// (0x000380a3) bg_button_pane_cp01_ParamLimits

0xc7cd,	// (0x000380a3) bg_button_pane_cp01

0xc808,	// (0x000380de) cell_sct_catagory_button_pane_g1

0x8b29,	// (0x000343ff) popup_tb_extension_window

0xf001,	// (0x0003a8d7) aid_size_cell_ext_ParamLimits

0xf001,	// (0x0003a8d7) aid_size_cell_ext

0x7786,	// (0x0003305c) bg_tb_trans_pane_cp1_ParamLimits

0x7786,	// (0x0003305c) bg_tb_trans_pane_cp1

0xf021,	// (0x0003a8f7) grid_tb_ext_pane_ParamLimits

0xf021,	// (0x0003a8f7) grid_tb_ext_pane

0xf047,	// (0x0003a91d) cell_tb_ext_pane_ParamLimits

0xf047,	// (0x0003a91d) cell_tb_ext_pane

0xf05c,	// (0x0003a932) cell_tb_ext_pane_g1_ParamLimits

0xf05c,	// (0x0003a932) cell_tb_ext_pane_g1

0xe65c,	// (0x00039f32) cell_tb_ext_pane_t1

0x7786,	// (0x0003305c) list_highlight_pane_cp11_ParamLimits

0x7786,	// (0x0003305c) list_highlight_pane_cp11

0x74c8,	// (0x00032d9e) popup_uni_indicator_window_ParamLimits

0x74c8,	// (0x00032d9e) popup_uni_indicator_window

0x7cb5,	// (0x0003358b) bg_popup_sub_pane_cp14

0xe677,	// (0x00039f4d) list_uniindi_pane

0xe683,	// (0x00039f59) uniindi_top_pane

0x7786,	// (0x0003305c) bg_uniindi_top_pane

0xe6a2,	// (0x00039f78) uniindi_top_pane_g1

0xe6b8,	// (0x00039f8e) uniindi_top_pane_g2

0x0003,

0xfcfa,	// (0x0003b5d0) uniindi_top_pane_g

0xe6e2,	// (0x00039fb8) uniindi_top_pane_t1

0xe70c,	// (0x00039fe2) list_single_uniindi_pane_ParamLimits

0xe70c,	// (0x00039fe2) list_single_uniindi_pane

0xc808,	// (0x000380de) bg_uniindi_top_pane_g1

0xe71e,	// (0x00039ff4) list_single_uniindi_pane_g1

0xe731,	// (0x0003a007) list_single_uniindi_pane_t1

0x7256,	// (0x00032b2c) control_bg_pane

0xe756,	// (0x0003a02c) bg_sctrl_sk_pane_cp1

0xe75f,	// (0x0003a035) bg_sctrl_sk_pane_cp2

0xe768,	// (0x0003a03e) control_bg_pane_g1

0xe771,	// (0x0003a047) control_bg_pane_g2

0x0001,

0xfd03,	// (0x0003b5d9) control_bg_pane_g

0xc40e,	// (0x00037ce4) cell_indicator_nsta_pane_g1_ParamLimits

0xe8d8,	// (0x0003a1ae) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0003b354) cell_indicator_nsta_pane_g_ParamLimits

0x6f92,	// (0x00032868) form2_midp_time_pane_t1_ParamLimits

0x7a19,	// (0x000332ef) main_idle_act4_pane_ParamLimits

0x7a19,	// (0x000332ef) main_idle_act4_pane

0x8b29,	// (0x000343ff) popup_tb_extension_window_ParamLimits

0xf03b,	// (0x0003a911) tb_ext_find_pane_ParamLimits

0xf03b,	// (0x0003a911) tb_ext_find_pane

0xe77a,	// (0x0003a050) ai_gene_pane_1_cp1

0xa788,	// (0x0003605e) ai_gene_pane_2_cp1

0xe782,	// (0x0003a058) list_single_idle_plugin_calendar_pane

0xe78b,	// (0x0003a061) list_single_idle_plugin_notification_pane

0xe794,	// (0x0003a06a) list_single_idle_plugin_player_pane

0xf079,	// (0x0003a94f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf079,	// (0x0003a94f) list_single_idle_plugin_shortcut_pane

0xf09b,	// (0x0003a971) main_idle_act4_pane_t1

0xf0ad,	// (0x0003a983) main_idle_act4_pane_t2

0x0001,

0xfd08,	// (0x0003b5de) main_idle_act4_pane_t

0xf0bf,	// (0x0003a995) middle_sk_idle_act4_pane_ParamLimits

0xf0bf,	// (0x0003a995) middle_sk_idle_act4_pane

0xf0d5,	// (0x0003a9ab) popup_clock_digital_analogue_window_cp2

0xf0ef,	// (0x0003a9c5) shortcut_wheel_idle_act4_pane_ParamLimits

0xf0ef,	// (0x0003a9c5) shortcut_wheel_idle_act4_pane

0xc808,	// (0x000380de) shortcut_wheel_idle_act4_pane_g1

0xc808,	// (0x000380de) shortcut_wheel_idle_act4_pane_g2

0xc808,	// (0x000380de) shortcut_wheel_idle_act4_pane_g3

0xc808,	// (0x000380de) shortcut_wheel_idle_act4_pane_g4

0xc808,	// (0x000380de) shortcut_wheel_idle_act4_pane_g5

0xe79d,	// (0x0003a073) shortcut_wheel_idle_act4_pane_g6

0xe7a5,	// (0x0003a07b) shortcut_wheel_idle_act4_pane_g7

0xe7ad,	// (0x0003a083) shortcut_wheel_idle_act4_pane_g8

0xe7b5,	// (0x0003a08b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0d,	// (0x0003b5e3) shortcut_wheel_idle_act4_pane_g

0xca34,	// (0x0003830a) middle_sk_idle_act4_pane_g1_ParamLimits

0xca34,	// (0x0003830a) middle_sk_idle_act4_pane_g1

0xf15f,	// (0x0003aa35) middle_sk_idle_act4_pane_g2_ParamLimits

0xf15f,	// (0x0003aa35) middle_sk_idle_act4_pane_g2

0x0001,

0xfd30,	// (0x0003b606) middle_sk_idle_act4_pane_g_ParamLimits

0xfd30,	// (0x0003b606) middle_sk_idle_act4_pane_g

0xf16b,	// (0x0003aa41) middle_sk_idle_act4_pane_t1_ParamLimits

0xf16b,	// (0x0003aa41) middle_sk_idle_act4_pane_t1

0xf188,	// (0x0003aa5e) grid_ai_shortcut_pane_ParamLimits

0xf188,	// (0x0003aa5e) grid_ai_shortcut_pane

0xf1a1,	// (0x0003aa77) list_highlight_pane_cp16_ParamLimits

0xf1a1,	// (0x0003aa77) list_highlight_pane_cp16

0xf1ae,	// (0x0003aa84) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf1ae,	// (0x0003aa84) list_single_idle_plugin_shortcut_pane_g1

0xf1ba,	// (0x0003aa90) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf1ba,	// (0x0003aa90) list_single_idle_plugin_shortcut_pane_g2

0xf1d2,	// (0x0003aaa8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf1d2,	// (0x0003aaa8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd35,	// (0x0003b60b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd35,	// (0x0003b60b) list_single_idle_plugin_shortcut_pane_g

0xf1e5,	// (0x0003aabb) cell_ai_shortcut_pane_ParamLimits

0xf1e5,	// (0x0003aabb) cell_ai_shortcut_pane

0xf206,	// (0x0003aadc) cell_ai_shortcut_pane_g1_ParamLimits

0xf206,	// (0x0003aadc) cell_ai_shortcut_pane_g1

0xe77a,	// (0x0003a050) ai_gene_pane_1_cp2

0xf228,	// (0x0003aafe) ai_gene_pane_2_cp2

0xf230,	// (0x0003ab06) list_highlight_pane_cp15

0xf239,	// (0x0003ab0f) list_single_idle_plugin_calendar_pane_g1

0xf230,	// (0x0003ab06) list_highlight_pane_cp17

0xf241,	// (0x0003ab17) list_single_idle_plugin_calendar_pane_g1_copy1

0xf249,	// (0x0003ab1f) list_single_idle_plugin_player_pane_g1

0xbe5d,	// (0x00037733) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3c,	// (0x0003b612) list_single_idle_plugin_player_pane_g

0xf251,	// (0x0003ab27) list_single_idle_plugin_player_pane_t1

0xf25f,	// (0x0003ab35) list_single_idle_plugin_player_pane_t2

0xf26d,	// (0x0003ab43) list_single_idle_plugin_player_pane_t3

0xf27b,	// (0x0003ab51) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd41,	// (0x0003b617) list_single_idle_plugin_player_pane_t

0xf289,	// (0x0003ab5f) wait_bar_pane_cp15

0xf291,	// (0x0003ab67) grid_ai_notification_pane

0xbe5d,	// (0x00037733) list_single_idle_plugin_notification_pane_g1

0xf29a,	// (0x0003ab70) cell_ai_notification_pane_ParamLimits

0xf29a,	// (0x0003ab70) cell_ai_notification_pane

0xf2a7,	// (0x0003ab7d) cell_ai_notification_pane_g1

0xf2af,	// (0x0003ab85) cell_ai_notification_pane_t1

0xf2bd,	// (0x0003ab93) tb_ext_find_button_pane

0xf2c5,	// (0x0003ab9b) tb_ext_find_pane_g1

0xf2cd,	// (0x0003aba3) tb_ext_find_pane_t1

0x8328,	// (0x00033bfe) tb_ext_find_button_pane_g1

0xf2db,	// (0x0003abb1) tb_ext_find_button_pane_g2

0x0001,

0xfd4a,	// (0x0003b620) tb_ext_find_button_pane_g

0xf09b,	// (0x0003a971) main_idle_act4_pane_t1_ParamLimits

0xf0ad,	// (0x0003a983) main_idle_act4_pane_t2_ParamLimits

0xfd08,	// (0x0003b5de) main_idle_act4_pane_t_ParamLimits

0xf0d5,	// (0x0003a9ab) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf0e3,	// (0x0003a9b9) sat_plugin_idle_act4_pane_ParamLimits

0xf0e3,	// (0x0003a9b9) sat_plugin_idle_act4_pane

0xf2e4,	// (0x0003abba) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf2e4,	// (0x0003abba) sat_plugin_idle_act4_pane_t1

0xf2f7,	// (0x0003abcd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf2f7,	// (0x0003abcd) sat_plugin_idle_act4_pane_t2

0xf30a,	// (0x0003abe0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf30a,	// (0x0003abe0) sat_plugin_idle_act4_pane_t3

0xf31d,	// (0x0003abf3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf31d,	// (0x0003abf3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4f,	// (0x0003b625) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4f,	// (0x0003b625) sat_plugin_idle_act4_pane_t

0x7429,	// (0x00032cff) popup_battery_window_ParamLimits

0x7429,	// (0x00032cff) popup_battery_window

0x7786,	// (0x0003305c) bg_popup_sub_pane_cp25_ParamLimits

0x7786,	// (0x0003305c) bg_popup_sub_pane_cp25

0xf330,	// (0x0003ac06) popup_battery_window_g1_ParamLimits

0xf330,	// (0x0003ac06) popup_battery_window_g1

0xf33c,	// (0x0003ac12) popup_battery_window_t1_ParamLimits

0xf33c,	// (0x0003ac12) popup_battery_window_t1

0xf34e,	// (0x0003ac24) popup_battery_window_t2_ParamLimits

0xf34e,	// (0x0003ac24) popup_battery_window_t2

0x0001,

0xfd58,	// (0x0003b62e) popup_battery_window_t_ParamLimits

0xfd58,	// (0x0003b62e) popup_battery_window_t

0xd821,	// (0x000390f7) midp_canvas_pane_ParamLimits

0xd87d,	// (0x00039153) midp_keypad_pane_ParamLimits

0xd87d,	// (0x00039153) midp_keypad_pane

0x87a0,	// (0x00034076) main_midp_pane_ParamLimits

0xc484,	// (0x00037d5a) signal_pane_g2_cp_ParamLimits

0xf36b,	// (0x0003ac41) aid_size_cell_midp_keypad_ParamLimits

0xf36b,	// (0x0003ac41) aid_size_cell_midp_keypad

0xf385,	// (0x0003ac5b) midp_keyp_game_grid_pane_ParamLimits

0xf385,	// (0x0003ac5b) midp_keyp_game_grid_pane

0xf39f,	// (0x0003ac75) midp_keyp_rocker_pane_ParamLimits

0xf39f,	// (0x0003ac75) midp_keyp_rocker_pane

0xf3cc,	// (0x0003aca2) midp_keyp_sk_left_pane_ParamLimits

0xf3cc,	// (0x0003aca2) midp_keyp_sk_left_pane

0xf424,	// (0x0003acfa) midp_keyp_sk_right_pane_ParamLimits

0xf424,	// (0x0003acfa) midp_keyp_sk_right_pane

0x7256,	// (0x00032b2c) bg_button_pane_cp03

0xf476,	// (0x0003ad4c) midp_keyp_sk_left_pane_g1

0x7256,	// (0x00032b2c) bg_button_pane_cp04

0xf476,	// (0x0003ad4c) midp_keyp_sk_right_pane_g1

0xc808,	// (0x000380de) midp_keyp_rocker_pane_g1

0xf47f,	// (0x0003ad55) keyp_game_cell_pane_ParamLimits

0xf47f,	// (0x0003ad55) keyp_game_cell_pane

0x7256,	// (0x00032b2c) bg_button_pane_cp02

0xf490,	// (0x0003ad66) keyp_game_cell_pane_g1

0x745f,	// (0x00032d35) popup_fep_vkb2_window_ParamLimits

0x745f,	// (0x00032d35) popup_fep_vkb2_window

0x9687,	// (0x00034f5d) aid_size_cell_vkb2_ParamLimits

0x9687,	// (0x00034f5d) aid_size_cell_vkb2

0x96db,	// (0x00034fb1) popup_fep_vkb2_window_g1_ParamLimits

0x96db,	// (0x00034fb1) popup_fep_vkb2_window_g1

0x9723,	// (0x00034ff9) vkb2_area_bottom_pane_ParamLimits

0x9723,	// (0x00034ff9) vkb2_area_bottom_pane

0x975b,	// (0x00035031) vkb2_area_keypad_pane_ParamLimits

0x975b,	// (0x00035031) vkb2_area_keypad_pane

0x9793,	// (0x00035069) vkb2_area_top_pane_ParamLimits

0x9793,	// (0x00035069) vkb2_area_top_pane

0x9803,	// (0x000350d9) vkb2_top_entry_pane_ParamLimits

0x9803,	// (0x000350d9) vkb2_top_entry_pane

0x982d,	// (0x00035103) vkb2_top_grid_left_pane_ParamLimits

0x982d,	// (0x00035103) vkb2_top_grid_left_pane

0x984b,	// (0x00035121) vkb2_top_grid_right_pane_ParamLimits

0x984b,	// (0x00035121) vkb2_top_grid_right_pane

0x9869,	// (0x0003513f) vkb2_cell_keypad_pane_ParamLimits

0x9869,	// (0x0003513f) vkb2_cell_keypad_pane

0x991a,	// (0x000351f0) vkb2_area_bottom_grid_pane_ParamLimits

0x991a,	// (0x000351f0) vkb2_area_bottom_grid_pane

0x993e,	// (0x00035214) vkb2_area_bottom_pane_g1_ParamLimits

0x993e,	// (0x00035214) vkb2_area_bottom_pane_g1

0x9962,	// (0x00035238) vkb2_area_bottom_pane_g2_ParamLimits

0x9962,	// (0x00035238) vkb2_area_bottom_pane_g2

0x9990,	// (0x00035266) vkb2_area_bottom_pane_g3_ParamLimits

0x9990,	// (0x00035266) vkb2_area_bottom_pane_g3

0x0002,

0xfd5d,	// (0x0003b633) vkb2_area_bottom_pane_g_ParamLimits

0xfd5d,	// (0x0003b633) vkb2_area_bottom_pane_g

0x99e1,	// (0x000352b7) vkb2_top_cell_left_pane_ParamLimits

0x99e1,	// (0x000352b7) vkb2_top_cell_left_pane

0xf4a1,	// (0x0003ad77) vkb2_top_entry_pane_g1_ParamLimits

0xf4a1,	// (0x0003ad77) vkb2_top_entry_pane_g1

0xf4af,	// (0x0003ad85) vkb2_top_entry_pane_t1_ParamLimits

0xf4af,	// (0x0003ad85) vkb2_top_entry_pane_t1

0xf4e1,	// (0x0003adb7) vkb2_top_entry_pane_t2_ParamLimits

0xf4e1,	// (0x0003adb7) vkb2_top_entry_pane_t2

0xf513,	// (0x0003ade9) vkb2_top_entry_pane_t3_ParamLimits

0xf513,	// (0x0003ade9) vkb2_top_entry_pane_t3

0x0002,

0xfd64,	// (0x0003b63a) vkb2_top_entry_pane_t_ParamLimits

0xfd64,	// (0x0003b63a) vkb2_top_entry_pane_t

0x9a2e,	// (0x00035304) vkb2_top_grid_right_pane_g1_ParamLimits

0x9a2e,	// (0x00035304) vkb2_top_grid_right_pane_g1

0x9a44,	// (0x0003531a) vkb2_top_grid_right_pane_g2_ParamLimits

0x9a44,	// (0x0003531a) vkb2_top_grid_right_pane_g2

0x9a5c,	// (0x00035332) vkb2_top_grid_right_pane_g3_ParamLimits

0x9a5c,	// (0x00035332) vkb2_top_grid_right_pane_g3

0x9a74,	// (0x0003534a) vkb2_top_grid_right_pane_g4_ParamLimits

0x9a74,	// (0x0003534a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6b,	// (0x0003b641) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6b,	// (0x0003b641) vkb2_top_grid_right_pane_g

0x9a8a,	// (0x00035360) vkb2_top_cell_left_pane_g1

0x9aa1,	// (0x00035377) vkb2_cell_keypad_pane_g1_ParamLimits

0x9aa1,	// (0x00035377) vkb2_cell_keypad_pane_g1

0x0bc5,	// (0x0002c49b) vkb2_cell_keypad_pane_t1_ParamLimits

0x0bc5,	// (0x0002c49b) vkb2_cell_keypad_pane_t1

0x9aaf,	// (0x00035385) vkb2_cell_bottom_grid_pane_ParamLimits

0x9aaf,	// (0x00035385) vkb2_cell_bottom_grid_pane

0x9ae8,	// (0x000353be) vkb2_cell_bottom_grid_pane_g1

0xf103,	// (0x0003a9d9) aid_call2_pane_cp02

0xf10b,	// (0x0003a9e1) aid_call_pane_cp02

0xf113,	// (0x0003a9e9) clock_digital_number_pane_cp10

0xf11b,	// (0x0003a9f1) clock_digital_number_pane_cp11

0xf123,	// (0x0003a9f9) clock_digital_number_pane_cp12

0xf12b,	// (0x0003aa01) clock_digital_number_pane_cp13

0xf133,	// (0x0003aa09) clock_digital_separator_pane_cp10

0x8328,	// (0x00033bfe) popup_clock_digital_analogue_window_cp2_g1

0x8328,	// (0x00033bfe) popup_clock_digital_analogue_window_cp2_g2

0xf13b,	// (0x0003aa11) popup_clock_digital_analogue_window_cp2_g3

0x8328,	// (0x00033bfe) popup_clock_digital_analogue_window_cp2_g4

0xf13b,	// (0x0003aa11) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd20,	// (0x0003b5f6) popup_clock_digital_analogue_window_cp2_g

0xf143,	// (0x0003aa19) popup_clock_digital_analogue_window_cp2_t1

0xf151,	// (0x0003aa27) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2b,	// (0x0003b601) popup_clock_digital_analogue_window_cp2_t

0xc808,	// (0x000380de) clock_digital_number_pane_cp10_g1

0xc808,	// (0x000380de) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003b3f0) clock_digital_number_pane_cp10_g

0xc808,	// (0x000380de) clock_digital_separator_pane_cp10_g1

0xc808,	// (0x000380de) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003b3f0) clock_digital_separator_pane_cp10_g

0xe6c4,	// (0x00039f9a) uniindi_top_pane_g3

0xe6d5,	// (0x00039fab) uniindi_top_pane_g4

0x98d4,	// (0x000351aa) vkb2_row_keypad_pane_ParamLimits

0x98d4,	// (0x000351aa) vkb2_row_keypad_pane

0x9b04,	// (0x000353da) vkb2_cell_t_keypad_pane_ParamLimits

0x9b04,	// (0x000353da) vkb2_cell_t_keypad_pane

0x9b11,	// (0x000353e7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9b11,	// (0x000353e7) vkb2_cell_t_keypad_pane_cp08

0x9b21,	// (0x000353f7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9b21,	// (0x000353f7) vkb2_cell_t_keypad_pane_cp09

0x9b32,	// (0x00035408) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9b32,	// (0x00035408) vkb2_cell_t_keypad_pane_cp01

0x9b42,	// (0x00035418) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9b42,	// (0x00035418) vkb2_cell_t_keypad_pane_cp02

0x9b52,	// (0x00035428) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9b52,	// (0x00035428) vkb2_cell_t_keypad_pane_cp03

0x9b62,	// (0x00035438) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9b62,	// (0x00035438) vkb2_cell_t_keypad_pane_cp04

0x9b72,	// (0x00035448) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9b72,	// (0x00035448) vkb2_cell_t_keypad_pane_cp05

0x9b82,	// (0x00035458) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9b82,	// (0x00035458) vkb2_cell_t_keypad_pane_cp06

0x9b92,	// (0x00035468) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9b92,	// (0x00035468) vkb2_cell_t_keypad_pane_cp07

0x9ba2,	// (0x00035478) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9ba2,	// (0x00035478) vkb2_cell_t_keypad_pane_cp10

0xca34,	// (0x0003830a) vkb2_cell_t_keypad_pane_g1

0x0bdc,	// (0x0002c4b2) vkb2_cell_t_keypad_pane_t1

0x7256,	// (0x00032b2c) popup_grid_graphic2_window

0x17ab,	// (0x0002d081) aid_size_cell_graphic2_ParamLimits

0x17ab,	// (0x0002d081) aid_size_cell_graphic2

0x17e3,	// (0x0002d0b9) bg_popup_window_pane_cp21_ParamLimits

0x17e3,	// (0x0002d0b9) bg_popup_window_pane_cp21

0x17f1,	// (0x0002d0c7) graphic2_pages_pane_ParamLimits

0x17f1,	// (0x0002d0c7) graphic2_pages_pane

0x182b,	// (0x0002d101) grid_graphic2_control_pane_ParamLimits

0x182b,	// (0x0002d101) grid_graphic2_control_pane

0x1861,	// (0x0002d137) grid_graphic2_pane_ParamLimits

0x1861,	// (0x0002d137) grid_graphic2_pane

0x18c1,	// (0x0002d197) cell_graphic2_pane

0x7256,	// (0x00032b2c) main_comp_mode_pane

0xe33d,	// (0x00039c13) list_ai3_gene_pane_ParamLimits

0xeeec,	// (0x0003a7c2) bg_popup_window_pane_cp19_ParamLimits

0xe4b0,	// (0x00039d86) bg_touch_area_indi_pane_ParamLimits

0xe4b0,	// (0x00039d86) bg_touch_area_indi_pane

0xe4c6,	// (0x00039d9c) bg_touch_area_indi_pane_cp01_ParamLimits

0xe4c6,	// (0x00039d9c) bg_touch_area_indi_pane_cp01

0xe4dc,	// (0x00039db2) bg_touch_area_indi_pane_cp02_ParamLimits

0xe4dc,	// (0x00039db2) bg_touch_area_indi_pane_cp02

0xe4f2,	// (0x00039dc8) bg_touch_area_indi_pane_cp03_ParamLimits

0xe4f2,	// (0x00039dc8) bg_touch_area_indi_pane_cp03

0xe508,	// (0x00039dde) popup_slider_window_g1_ParamLimits

0xe524,	// (0x00039dfa) popup_slider_window_g2_ParamLimits

0xe540,	// (0x00039e16) popup_slider_window_g3_ParamLimits

0xfcb5,	// (0x0003b58b) popup_slider_window_g_ParamLimits

0xe55c,	// (0x00039e32) popup_slider_window_t1_ParamLimits

0xe5a0,	// (0x00039e76) small_volume_slider_vertical_pane_ParamLimits

0x18c1,	// (0x0002d197) cell_graphic2_pane_ParamLimits

0x18fd,	// (0x0002d1d3) bg_button_pane_cp10_ParamLimits

0x18fd,	// (0x0002d1d3) bg_button_pane_cp10

0x190e,	// (0x0002d1e4) bg_button_pane_cp11_ParamLimits

0x190e,	// (0x0002d1e4) bg_button_pane_cp11

0x191f,	// (0x0002d1f5) graphic2_pages_pane_g1_ParamLimits

0x191f,	// (0x0002d1f5) graphic2_pages_pane_g1

0x1932,	// (0x0002d208) graphic2_pages_pane_g2_ParamLimits

0x1932,	// (0x0002d208) graphic2_pages_pane_g2

0x0001,

0xfd79,	// (0x0003b64f) graphic2_pages_pane_g_ParamLimits

0xfd79,	// (0x0003b64f) graphic2_pages_pane_g

0x1948,	// (0x0002d21e) graphic2_pages_pane_t1_ParamLimits

0x1948,	// (0x0002d21e) graphic2_pages_pane_t1

0x195e,	// (0x0002d234) cell_graphic2_control_pane_ParamLimits

0x195e,	// (0x0002d234) cell_graphic2_control_pane

0x197d,	// (0x0002d253) cell_graphic2_pane_g1_ParamLimits

0x197d,	// (0x0002d253) cell_graphic2_pane_g1

0x198a,	// (0x0002d260) cell_graphic2_pane_g2_ParamLimits

0x198a,	// (0x0002d260) cell_graphic2_pane_g2

0x1997,	// (0x0002d26d) cell_graphic2_pane_g3_ParamLimits

0x1997,	// (0x0002d26d) cell_graphic2_pane_g3

0x19a4,	// (0x0002d27a) cell_graphic2_pane_g4_ParamLimits

0x19a4,	// (0x0002d27a) cell_graphic2_pane_g4

0x19b1,	// (0x0002d287) cell_graphic2_pane_g5_ParamLimits

0x19b1,	// (0x0002d287) cell_graphic2_pane_g5

0x0004,

0xfd7e,	// (0x0003b654) cell_graphic2_pane_g_ParamLimits

0xfd7e,	// (0x0003b654) cell_graphic2_pane_g

0x19ca,	// (0x0002d2a0) cell_graphic2_pane_t1_ParamLimits

0x19ca,	// (0x0002d2a0) cell_graphic2_pane_t1

0xab00,	// (0x000363d6) grid_highlight_pane_cp11_ParamLimits

0xab00,	// (0x000363d6) grid_highlight_pane_cp11

0x7786,	// (0x0003305c) bg_button_pane_cp05

0x19f2,	// (0x0002d2c8) cell_graphic2_control_pane_g1

0xc808,	// (0x000380de) bg_touch_area_indi_pane_g1

0x0bee,	// (0x0002c4c4) aid_cmod_rocker_key_size

0x0bf8,	// (0x0002c4ce) aid_cmode_itu_key_size

0x0c02,	// (0x0002c4d8) main_cmode_video_pane

0x0c0a,	// (0x0002c4e0) main_comp_mode_itu_pane

0x0c14,	// (0x0002c4ea) main_comp_mode_rocker_pane

0x0c1c,	// (0x0002c4f2) cell_cmode_rocker_pane_ParamLimits

0x0c1c,	// (0x0002c4f2) cell_cmode_rocker_pane

0x0c2e,	// (0x0002c504) cell_cmode_itu_pane_ParamLimits

0x0c2e,	// (0x0002c504) cell_cmode_itu_pane

0x7cb5,	// (0x0003358b) bg_button_pane_cp06_ParamLimits

0x7cb5,	// (0x0003358b) bg_button_pane_cp06

0xca34,	// (0x0003830a) cell_cmode_rocker_pane_g1_ParamLimits

0xca34,	// (0x0003830a) cell_cmode_rocker_pane_g1

0xe5d7,	// (0x00039ead) cell_cmode_rocker_pane_g2_ParamLimits

0xe5d7,	// (0x00039ead) cell_cmode_rocker_pane_g2

0x0001,

0xfd8e,	// (0x0003b664) cell_cmode_rocker_pane_g_ParamLimits

0xfd8e,	// (0x0003b664) cell_cmode_rocker_pane_g

0x7256,	// (0x00032b2c) bg_button_pane_cp07

0x0c43,	// (0x0002c519) cell_cmode_itu_pane_g1

0x0c4c,	// (0x0002c522) cell_cmode_itu_pane_t1

0x0c5a,	// (0x0002c530) cell_cmode_itu_pane_t2

0x0001,

0xfd93,	// (0x0003b669) cell_cmode_itu_pane_t

0xe746,	// (0x0003a01c) aid_touch_ctrl_left

0xe74e,	// (0x0003a024) aid_touch_ctrl_right

0x7256,	// (0x00032b2c) compa_mode_pane

0x1a1a,	// (0x0002d2f0) aid_cmod_rocker_key_size_cp

0x1a24,	// (0x0002d2fa) aid_cmode_itu_key_size_cp

0x0c68,	// (0x0002c53e) compa_mode_pane_g1

0x0c70,	// (0x0002c546) compa_mode_pane_g2

0x0c78,	// (0x0002c54e) compa_mode_pane_g3

0x0002,

0xfd98,	// (0x0003b66e) compa_mode_pane_g

0x1a2e,	// (0x0002d304) main_comp_mode_itu_pane_cp

0x1a36,	// (0x0002d30c) main_comp_mode_rocker_pane_cp

0x1a3e,	// (0x0002d314) cell_cmode_itu_pane_cp_ParamLimits

0x1a3e,	// (0x0002d314) cell_cmode_itu_pane_cp

0x1a53,	// (0x0002d329) cell_cmode_rocker_pane_cp_ParamLimits

0x1a53,	// (0x0002d329) cell_cmode_rocker_pane_cp

0x7cb5,	// (0x0003358b) bg_button_pane_cp06_cp_ParamLimits

0x7cb5,	// (0x0003358b) bg_button_pane_cp06_cp

0xca34,	// (0x0003830a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xca34,	// (0x0003830a) cell_cmode_rocker_pane_g1_cp

0xc808,	// (0x000380de) cell_cmode_rocker_pane_g2_cp

0x7256,	// (0x00032b2c) bg_button_pane_cp07_cp

0x1a65,	// (0x0002d33b) cell_cmode_itu_pane_g1_cp

0x1a6e,	// (0x0002d344) cell_cmode_itu_pane_t1_cp

0x1a7c,	// (0x0002d352) cell_cmode_itu_pane_t2_cp

0xdf37,	// (0x0003980d) settings_code_pane_cp2

0x75b3,	// (0x00032e89) bg_popup_window_pane_cp3_ParamLimits

0x7984,	// (0x0003325a) heading_pane_cp3_ParamLimits

0x7993,	// (0x00033269) listscroll_popup_graphic_pane_ParamLimits

0x918e,	// (0x00034a64) fep_hwr_aid_pane_ParamLimits

0x95f9,	// (0x00034ecf) aid_touch_sctrl_top_ParamLimits

0x9606,	// (0x00034edc) sctrl_sk_top_pane_g1_ParamLimits

0xca34,	// (0x0003830a) sctrl_sk_top_pane_g2_ParamLimits

0xfcce,	// (0x0003b5a4) sctrl_sk_top_pane_g_ParamLimits

0x9613,	// (0x00034ee9) sctrl_sk_top_pane_t1_ParamLimits

0x95f9,	// (0x00034ecf) aid_touch_sctrl_bottom_ParamLimits

0x9613,	// (0x00034ee9) sctrl_sk_bottom_pane_t1_ParamLimits

0xe690,	// (0x00039f66) aid_area_touch_clock

0x97cb,	// (0x000350a1) aid_vkb2_area_top_pane_cell_ParamLimits

0x97cb,	// (0x000350a1) aid_vkb2_area_top_pane_cell

0x98f6,	// (0x000351cc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x98f6,	// (0x000351cc) aid_vkb2_area_bottom_pane_cell

0xf499,	// (0x0003ad6f) popup_char_count_window

0x0c80,	// (0x0002c556) popup_char_count_window_g1

0x0c89,	// (0x0002c55f) popup_char_count_window_g2

0x0c92,	// (0x0002c568) popup_char_count_window_g3

0x0002,

0xfd9f,	// (0x0003b675) popup_char_count_window_g

0x0c9b,	// (0x0002c571) popup_char_count_window_t1

0x96b9,	// (0x00034f8f) popup_fep_char_preview_window_ParamLimits

0x96b9,	// (0x00034f8f) popup_fep_char_preview_window

0x97e9,	// (0x000350bf) vkb2_top_candi_pane_ParamLimits

0x97e9,	// (0x000350bf) vkb2_top_candi_pane

0x1a8a,	// (0x0002d360) cell_vkb2_top_candi_pane_ParamLimits

0x1a8a,	// (0x0002d360) cell_vkb2_top_candi_pane

0xb048,	// (0x0003691e) bg_popup_fep_char_preview_window_ParamLimits

0xb048,	// (0x0003691e) bg_popup_fep_char_preview_window

0x9bb7,	// (0x0003548d) popup_fep_char_preview_window_t1_ParamLimits

0x9bb7,	// (0x0003548d) popup_fep_char_preview_window_t1

0x0cb9,	// (0x0002c58f) bg_popup_fep_char_preview_window_g1

0x0cb1,	// (0x0002c587) bg_popup_fep_char_preview_window_g2

0x0ca9,	// (0x0002c57f) bg_popup_fep_char_preview_window_g3

0x0ce1,	// (0x0002c5b7) bg_popup_fep_char_preview_window_g4

0x0cd9,	// (0x0002c5af) bg_popup_fep_char_preview_window_g5

0x0cd1,	// (0x0002c5a7) bg_popup_fep_char_preview_window_g6

0x0cc9,	// (0x0002c59f) bg_popup_fep_char_preview_window_g7

0x0cc1,	// (0x0002c597) bg_popup_fep_char_preview_window_g8

0x0ce9,	// (0x0002c5bf) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda6,	// (0x0003b67c) bg_popup_fep_char_preview_window_g

0xca34,	// (0x0003830a) cell_vkb2_top_candi_pane_g1_ParamLimits

0xca34,	// (0x0003830a) cell_vkb2_top_candi_pane_g1

0xcc63,	// (0x00038539) cell_vkb2_top_candi_pane_g2_ParamLimits

0xcc63,	// (0x00038539) cell_vkb2_top_candi_pane_g2

0xcc84,	// (0x0003855a) cell_vkb2_top_candi_pane_g3_ParamLimits

0xcc84,	// (0x0003855a) cell_vkb2_top_candi_pane_g3

0x9bf9,	// (0x000354cf) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9bf9,	// (0x000354cf) cell_vkb2_top_candi_pane_g4

0x082b,	// (0x0002c101) cell_vkb2_top_candi_pane_g5_ParamLimits

0x082b,	// (0x0002c101) cell_vkb2_top_candi_pane_g5

0xe5d7,	// (0x00039ead) cell_vkb2_top_candi_pane_g6_ParamLimits

0xe5d7,	// (0x00039ead) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbb,	// (0x0003b691) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbb,	// (0x0003b691) cell_vkb2_top_candi_pane_g

0x9c1a,	// (0x000354f0) cell_vkb2_top_candi_pane_t1

0x8eed,	// (0x000347c3) aid_size_touch_slider_mark_ParamLimits

0x8eed,	// (0x000347c3) aid_size_touch_slider_mark

0x181f,	// (0x0002d0f5) grid_graphic2_catg_pane_ParamLimits

0x181f,	// (0x0002d0f5) grid_graphic2_catg_pane

0x189d,	// (0x0002d173) popup_grid_graphic2_window_t1_ParamLimits

0x189d,	// (0x0002d173) popup_grid_graphic2_window_t1

0x18af,	// (0x0002d185) popup_grid_graphic2_window_t2_ParamLimits

0x18af,	// (0x0002d185) popup_grid_graphic2_window_t2

0x0001,

0xfd74,	// (0x0003b64a) popup_grid_graphic2_window_t_ParamLimits

0xfd74,	// (0x0003b64a) popup_grid_graphic2_window_t

0x7786,	// (0x0003305c) bg_button_pane_cp05_ParamLimits

0x19f2,	// (0x0002d2c8) cell_graphic2_control_pane_g1_ParamLimits

0x1ac3,	// (0x0002d399) cell_graphic2_catg_pane_ParamLimits

0x1ac3,	// (0x0002d399) cell_graphic2_catg_pane

0x7256,	// (0x00032b2c) bg_button_pane_cp12

0x1ad5,	// (0x0002d3ab) cell_graphic2_catg_pane_g1

0xe65c,	// (0x00039f32) cell_tb_ext_pane_t1_ParamLimits

0x9a01,	// (0x000352d7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9a01,	// (0x000352d7) vkb2_top_cell_right_narrow_pane

0x9a19,	// (0x000352ef) vkb2_top_cell_right_wide_pane_ParamLimits

0x9a19,	// (0x000352ef) vkb2_top_cell_right_wide_pane

0x9180,	// (0x00034a56) bg_vkb2_func_pane_ParamLimits

0x9180,	// (0x00034a56) bg_vkb2_func_pane

0x9a8a,	// (0x00035360) vkb2_top_cell_left_pane_g1_ParamLimits

0x9180,	// (0x00034a56) bg_vkb2_fuc_pane_cp03_ParamLimits

0x9180,	// (0x00034a56) bg_vkb2_fuc_pane_cp03

0x9ae8,	// (0x000353be) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xaa88,	// (0x0003635e) bg_vkb2_func_pane_g1

0xaa90,	// (0x00036366) bg_vkb2_func_pane_g2

0xaaa0,	// (0x00036376) bg_vkb2_func_pane_g3

0xaa98,	// (0x0003636e) bg_vkb2_func_pane_g4

0xaaa8,	// (0x0003637e) bg_vkb2_func_pane_g5

0xaab0,	// (0x00036386) bg_vkb2_func_pane_g6

0xaab8,	// (0x0003638e) bg_vkb2_func_pane_g7

0xaac0,	// (0x00036396) bg_vkb2_func_pane_g8

0xaa80,	// (0x00036356) bg_vkb2_func_pane_g9

0x0008,

0xfdc8,	// (0x0003b69e) bg_vkb2_func_pane_g

0x9180,	// (0x00034a56) bg_vkb2_fuc_pane_cp01_ParamLimits

0x9180,	// (0x00034a56) bg_vkb2_fuc_pane_cp01

0x9a8a,	// (0x00035360) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9a8a,	// (0x00035360) vkb2_top_cell_right_wide_pane_g1

0x9180,	// (0x00034a56) bg_vkb2_fuc_pane_cp02_ParamLimits

0x9180,	// (0x00034a56) bg_vkb2_fuc_pane_cp02

0x9ae8,	// (0x000353be) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9ae8,	// (0x000353be) vkb2_top_cell_right_narrow_pane_g1

0xee7e,	// (0x0003a754) aid_touch_area_decrease_ParamLimits

0xee7e,	// (0x0003a754) aid_touch_area_decrease

0xee96,	// (0x0003a76c) aid_touch_area_increase_ParamLimits

0xee96,	// (0x0003a76c) aid_touch_area_increase

0xeea2,	// (0x0003a778) aid_touch_area_mute_ParamLimits

0xeea2,	// (0x0003a778) aid_touch_area_mute

0xeebe,	// (0x0003a794) aid_touch_area_slider_ParamLimits

0xeebe,	// (0x0003a794) aid_touch_area_slider

0xeef8,	// (0x0003a7ce) popup_slider_window_g4_ParamLimits

0xeef8,	// (0x0003a7ce) popup_slider_window_g4

0xef04,	// (0x0003a7da) popup_slider_window_g5_ParamLimits

0xef04,	// (0x0003a7da) popup_slider_window_g5

0xef26,	// (0x0003a7fc) popup_slider_window_g6_ParamLimits

0xef26,	// (0x0003a7fc) popup_slider_window_g6

0xe588,	// (0x00039e5e) popup_slider_window_t2_ParamLimits

0xe588,	// (0x00039e5e) popup_slider_window_t2

0x0001,

0xfcc2,	// (0x0003b598) popup_slider_window_t_ParamLimits

0xfcc2,	// (0x0003b598) popup_slider_window_t

0xef38,	// (0x0003a80e) slider_pane_ParamLimits

0xef38,	// (0x0003a80e) slider_pane

0x0cf1,	// (0x0002c5c7) slider_pane_g1_ParamLimits

0x0cf1,	// (0x0002c5c7) slider_pane_g1

0x0d05,	// (0x0002c5db) slider_pane_g2_ParamLimits

0x0d05,	// (0x0002c5db) slider_pane_g2

0x0d1b,	// (0x0002c5f1) slider_pane_g3_ParamLimits

0x0d1b,	// (0x0002c5f1) slider_pane_g3

0x0003,

0xfddb,	// (0x0003b6b1) slider_pane_g_ParamLimits

0xfddb,	// (0x0003b6b1) slider_pane_g

0x8b79,	// (0x0003444f) popup_tb_float_extension_window_ParamLimits

0x8b79,	// (0x0003444f) popup_tb_float_extension_window

0x0d47,	// (0x0002c61d) aid_size_cell_tb_float_ext

0x7256,	// (0x00032b2c) bg_popup_sub_window_cp28

0x0d52,	// (0x0002c628) grid_tb_float_ext_pane

0x0d5a,	// (0x0002c630) cell_tb_float_ext_pane_ParamLimits

0x0d5a,	// (0x0002c630) cell_tb_float_ext_pane

0x0d72,	// (0x0002c648) cell_tb_float_ext_pane_g1

0x0d7b,	// (0x0002c651) grid_highlight_pane_cp12

0x92bb,	// (0x00034b91) cell_last_hwr_side_pane_ParamLimits

0x92bb,	// (0x00034b91) cell_last_hwr_side_pane

0xc808,	// (0x000380de) cell_last_hwr_side_pane_g1

0x0d84,	// (0x0002c65a) cell_last_hwr_side_pane_g2

0x0001,

0xfde4,	// (0x0003b6ba) cell_last_hwr_side_pane_g

0x99be,	// (0x00035294) vkb2_area_bottom_space_btn_pane_ParamLimits

0x99be,	// (0x00035294) vkb2_area_bottom_space_btn_pane

0xca34,	// (0x0003830a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x0bdc,	// (0x0002c4b2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9c1a,	// (0x000354f0) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9c30,	// (0x00035506) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9c30,	// (0x00035506) vkb2_area_bottom_space_btn_pane_g1

0x9c66,	// (0x0003553c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9c66,	// (0x0003553c) vkb2_area_bottom_space_btn_pane_g2

0x9c9c,	// (0x00035572) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9c9c,	// (0x00035572) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde9,	// (0x0003b6bf) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde9,	// (0x0003b6bf) vkb2_area_bottom_space_btn_pane_g

0x922f,	// (0x00034b05) cel_fep_hwr_func_pane_ParamLimits

0x922f,	// (0x00034b05) cel_fep_hwr_func_pane

0x926b,	// (0x00034b41) cell_hwr_side_button_pane_ParamLimits

0x926b,	// (0x00034b41) cell_hwr_side_button_pane

0xe690,	// (0x00039f66) aid_area_touch_clock_ParamLimits

0x7786,	// (0x0003305c) bg_uniindi_top_pane_ParamLimits

0xe6a2,	// (0x00039f78) uniindi_top_pane_g1_ParamLimits

0xe6b8,	// (0x00039f8e) uniindi_top_pane_g2_ParamLimits

0xe6c4,	// (0x00039f9a) uniindi_top_pane_g3_ParamLimits

0xe6d5,	// (0x00039fab) uniindi_top_pane_g4_ParamLimits

0xfcfa,	// (0x0003b5d0) uniindi_top_pane_g_ParamLimits

0xe6e2,	// (0x00039fb8) uniindi_top_pane_t1_ParamLimits

0x7786,	// (0x0003305c) bg_vkb2_func_pane_cp01_ParamLimits

0x7786,	// (0x0003305c) bg_vkb2_func_pane_cp01

0x0d8d,	// (0x0002c663) cel_fep_hwr_func_pane_g1_ParamLimits

0x0d8d,	// (0x0002c663) cel_fep_hwr_func_pane_g1

0x7786,	// (0x0003305c) bg_vkb2_func_pane_cp02_ParamLimits

0x7786,	// (0x0003305c) bg_vkb2_func_pane_cp02

0x0d8d,	// (0x0002c663) cell_hwr_side_button_pane_g1_ParamLimits

0x0d8d,	// (0x0002c663) cell_hwr_side_button_pane_g1

0xa9a4,	// (0x0003627a) status_pane_g4_ParamLimits

0xa9a4,	// (0x0003627a) status_pane_g4

0xa9bc,	// (0x00036292) status_pane_t1

0xc60e,	// (0x00037ee4) form2_midp_gauge_slider_cont_pane

0xc616,	// (0x00037eec) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe9ca,	// (0x0003a2a0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe9dc,	// (0x0003a2b2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0003b3a3) form2_midp_gauge_slider_pane_t_ParamLimits

0xc628,	// (0x00037efe) form2_midp_slider_pane_ParamLimits

0x9679,	// (0x00034f4f) aid_size_cell_func_vkb2_ParamLimits

0x9679,	// (0x00034f4f) aid_size_cell_func_vkb2

0x0d33,	// (0x0002c609) slider_pane_g4_ParamLimits

0x0d33,	// (0x0002c609) slider_pane_g4

0x9ce2,	// (0x000355b8) form2_midp_gauge_slider_pane_t2_cp01

0x9cf0,	// (0x000355c6) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9cf0,	// (0x000355c6) form2_midp_gauge_slider_pane_t3_cp01

0x9d0d,	// (0x000355e3) form2_midp_slider_pane_cp01

0x7256,	// (0x00032b2c) navi_smil_pane

0x0dbd,	// (0x0002c693) navi_smil_pane_g1

0x0dc5,	// (0x0002c69b) navi_smil_pane_t1

0x0d9b,	// (0x0002c671) form2_midp_slider_pane_g1

0x0da4,	// (0x0002c67a) form2_midp_slider_pane_g2

0x0dac,	// (0x0002c682) form2_midp_slider_pane_g3

0x0d9b,	// (0x0002c671) form2_midp_slider_pane_g4

0x1ade,	// (0x0002d3b4) form2_midp_slider_pane_g5

0x0004,

0xfdf2,	// (0x0003b6c8) form2_midp_slider_pane_g

0x9cd2,	// (0x000355a8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9cd2,	// (0x000355a8) vkb2_area_bottom_space_btn_pane_g4

0xda4d,	// (0x00039323) lc0_navi_pane_ParamLimits

0xda4d,	// (0x00039323) lc0_navi_pane

0xdac3,	// (0x00039399) lc0_stat_indi_pane_ParamLimits

0xdac3,	// (0x00039399) lc0_stat_indi_pane

0xdada,	// (0x000393b0) ls0_title_pane_ParamLimits

0xdada,	// (0x000393b0) ls0_title_pane

0x7cb5,	// (0x0003358b) bg_popup_sub_pane_cp14_ParamLimits

0xe677,	// (0x00039f4d) list_uniindi_pane_ParamLimits

0xe683,	// (0x00039f59) uniindi_top_pane_ParamLimits

0xe71e,	// (0x00039ff4) list_single_uniindi_pane_g1_ParamLimits

0xe731,	// (0x0003a007) list_single_uniindi_pane_t1_ParamLimits

0x9d16,	// (0x000355ec) lc0_stat_clock_pane_ParamLimits

0x9d16,	// (0x000355ec) lc0_stat_clock_pane

0x1af4,	// (0x0002d3ca) lc0_stat_indi_pane_g1_ParamLimits

0x1af4,	// (0x0002d3ca) lc0_stat_indi_pane_g1

0x1ae7,	// (0x0002d3bd) lc0_stat_indi_pane_g2_ParamLimits

0x1ae7,	// (0x0002d3bd) lc0_stat_indi_pane_g2

0x0001,

0xfdfd,	// (0x0003b6d3) lc0_stat_indi_pane_g_ParamLimits

0xfdfd,	// (0x0003b6d3) lc0_stat_indi_pane_g

0x9d23,	// (0x000355f9) lc0_uni_indicator_pane_ParamLimits

0x9d23,	// (0x000355f9) lc0_uni_indicator_pane

0x0dd3,	// (0x0002c6a9) ls0_title_pane_g1_ParamLimits

0x0dd3,	// (0x0002c6a9) ls0_title_pane_g1

0x1b01,	// (0x0002d3d7) ls0_title_pane_t1_ParamLimits

0x1b01,	// (0x0002d3d7) ls0_title_pane_t1

0x9d30,	// (0x00035606) lc0_uni_indicator_pane_g1_ParamLimits

0x9d30,	// (0x00035606) lc0_uni_indicator_pane_g1

0x0de7,	// (0x0002c6bd) lc0_stat_clock_pane_t1

0x7256,	// (0x00032b2c) main_ai5_pane

0x0df5,	// (0x0002c6cb) ai5_sk_pane_ParamLimits

0x0df5,	// (0x0002c6cb) ai5_sk_pane

0x1b37,	// (0x0002d40d) cell_ai5_widget_pane_ParamLimits

0x1b37,	// (0x0002d40d) cell_ai5_widget_pane

0x0e02,	// (0x0002c6d8) aid_size_cell_widget_grid

0x0e0f,	// (0x0002c6e5) bg_ai5_widget_pane_ParamLimits

0x0e0f,	// (0x0002c6e5) bg_ai5_widget_pane

0x1bca,	// (0x0002d4a0) cell_ai5_widget_pane_g2

0x1bde,	// (0x0002d4b4) cell_ai5_widget_pane_g3

0x1bf8,	// (0x0002d4ce) cell_ai5_widget_pane_g4

0x1c08,	// (0x0002d4de) cell_ai5_widget_pane_g5

0x1c18,	// (0x0002d4ee) cell_ai5_widget_pane_g6

0x1c24,	// (0x0002d4fa) cell_ai5_widget_pane_g7

0x1c90,	// (0x0002d566) cell_ai5_widget_pane_t1_ParamLimits

0x1c90,	// (0x0002d566) cell_ai5_widget_pane_t1

0x1cad,	// (0x0002d583) cell_ai5_widget_pane_t2_ParamLimits

0x1cad,	// (0x0002d583) cell_ai5_widget_pane_t2

0x1cc5,	// (0x0002d59b) cell_ai5_widget_pane_t3_ParamLimits

0x1cc5,	// (0x0002d59b) cell_ai5_widget_pane_t3

0x1cdd,	// (0x0002d5b3) cell_ai5_widget_pane_t4_ParamLimits

0x1cdd,	// (0x0002d5b3) cell_ai5_widget_pane_t4

0x1d03,	// (0x0002d5d9) cell_ai5_widget_pane_t5_ParamLimits

0x1d03,	// (0x0002d5d9) cell_ai5_widget_pane_t5

0x0e49,	// (0x0002c71f) cell_ai5_widget_pane_t6_ParamLimits

0x0e49,	// (0x0002c71f) cell_ai5_widget_pane_t6

0x0e5b,	// (0x0002c731) cell_ai5_widget_pane_t7_ParamLimits

0x0e5b,	// (0x0002c731) cell_ai5_widget_pane_t7

0x1d22,	// (0x0002d5f8) cell_ai5_widget_pane_t8_ParamLimits

0x1d22,	// (0x0002d5f8) cell_ai5_widget_pane_t8

0x000b,

0xfe1d,	// (0x0003b6f3) cell_ai5_widget_pane_t_ParamLimits

0xfe1d,	// (0x0003b6f3) cell_ai5_widget_pane_t

0x1da5,	// (0x0002d67b) grid_ai5_widget_pane

0x7cb5,	// (0x0003358b) highlight_cell_ai5_widget_pane_ParamLimits

0x7cb5,	// (0x0003358b) highlight_cell_ai5_widget_pane

0x1db1,	// (0x0002d687) ai5_sk_left_pane

0x1dbb,	// (0x0002d691) ai5_sk_middle_pane

0x1dc5,	// (0x0002d69b) ai5_sk_right_pane

0x0e7a,	// (0x0002c750) bg_ai5_widget_pane_g1_ParamLimits

0x0e7a,	// (0x0002c750) bg_ai5_widget_pane_g1

0x0e86,	// (0x0002c75c) bg_ai5_widget_pane_g2_ParamLimits

0x0e86,	// (0x0002c75c) bg_ai5_widget_pane_g2

0x0e92,	// (0x0002c768) bg_ai5_widget_pane_g3_ParamLimits

0x0e92,	// (0x0002c768) bg_ai5_widget_pane_g3

0x0e9e,	// (0x0002c774) bg_ai5_widget_pane_g4_ParamLimits

0x0e9e,	// (0x0002c774) bg_ai5_widget_pane_g4

0x0eaa,	// (0x0002c780) bg_ai5_widget_pane_g5_ParamLimits

0x0eaa,	// (0x0002c780) bg_ai5_widget_pane_g5

0x0eb6,	// (0x0002c78c) bg_ai5_widget_pane_g6_ParamLimits

0x0eb6,	// (0x0002c78c) bg_ai5_widget_pane_g6

0x0ec2,	// (0x0002c798) bg_ai5_widget_pane_g7_ParamLimits

0x0ec2,	// (0x0002c798) bg_ai5_widget_pane_g7

0x0ece,	// (0x0002c7a4) bg_ai5_widget_pane_g8_ParamLimits

0x0ece,	// (0x0002c7a4) bg_ai5_widget_pane_g8

0x0eda,	// (0x0002c7b0) bg_ai5_widget_pane_g9_ParamLimits

0x0eda,	// (0x0002c7b0) bg_ai5_widget_pane_g9

0x0008,

0xfe36,	// (0x0003b70c) bg_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x0003b70c) bg_ai5_widget_pane_g

0x0f0a,	// (0x0002c7e0) cell_shortcut_ai5_widget_pane_ParamLimits

0x0f0a,	// (0x0002c7e0) cell_shortcut_ai5_widget_pane

0x0f1b,	// (0x0002c7f1) bg_cell_shortcut_ai5_widget_pane

0x7940,	// (0x00033216) cell_grid_ai5_widget_pane_g1

0xa6f4,	// (0x00035fca) highlight_cell_shortcut_ai5_widget_pane

0xaa90,	// (0x00036366) ai5_sk_left_pane_g1

0x0f23,	// (0x0002c7f9) ai5_sk_left_pane_g2

0x0f2b,	// (0x0002c801) ai5_sk_left_pane_g3

0x0f33,	// (0x0002c809) ai5_sk_left_pane_g4

0x0003,

0xfe49,	// (0x0003b71f) ai5_sk_left_pane_g

0x0f3b,	// (0x0002c811) ai5_sk_left_pane_t1

0xaa88,	// (0x0003635e) ai5_sk_right_pane_g1

0x0f49,	// (0x0002c81f) ai5_sk_right_pane_g2

0x0f51,	// (0x0002c827) ai5_sk_right_pane_g3

0x0f59,	// (0x0002c82f) ai5_sk_right_pane_g4

0x0003,

0xfe52,	// (0x0003b728) ai5_sk_right_pane_g

0x0f61,	// (0x0002c837) ai5_sk_right_pane_t1

0xaa88,	// (0x0003635e) ai5_sk_middle_pane_g1

0xaa90,	// (0x00036366) ai5_sk_middle_pane_g2

0xaaa8,	// (0x0003637e) ai5_sk_middle_pane_g3

0x0f51,	// (0x0002c827) ai5_sk_middle_pane_g4

0x0f2b,	// (0x0002c801) ai5_sk_middle_pane_g5

0x0f6f,	// (0x0002c845) ai5_sk_middle_pane_g6

0x1dcf,	// (0x0002d6a5) ai5_sk_middle_pane_g7

0x0006,

0xfe5b,	// (0x0003b731) ai5_sk_middle_pane_g

0xd994,	// (0x0003926a) aid_touch_area_size_lc0_ParamLimits

0xd994,	// (0x0003926a) aid_touch_area_size_lc0

0x93ae,	// (0x00034c84) cell_hwr_candidate_pane_t1_ParamLimits

0xa8d9,	// (0x000361af) aid_touch_navi_pane

0xdbac,	// (0x00039482) status_dt_navi_pane_ParamLimits

0xdbac,	// (0x00039482) status_dt_navi_pane

0xdbb9,	// (0x0003948f) status_dt_sta_pane_ParamLimits

0xdbb9,	// (0x0003948f) status_dt_sta_pane

0x1dd7,	// (0x0002d6ad) dt_sta_controll_pane

0x1de4,	// (0x0002d6ba) dt_sta_indi_pane

0x1df5,	// (0x0002d6cb) dt_sta_title_pane

0x7786,	// (0x0003305c) bg_dt_sta_indi_pane_ParamLimits

0x7786,	// (0x0003305c) bg_dt_sta_indi_pane

0x1e08,	// (0x0002d6de) dt_sta_battery_pane

0x1e10,	// (0x0002d6e6) dt_sta_indi_pane_g1

0x1e19,	// (0x0002d6ef) dt_sta_indi_pane_g2

0x1e22,	// (0x0002d6f8) dt_sta_indi_pane_g3

0x0002,

0xfe6a,	// (0x0003b740) dt_sta_indi_pane_g

0x1e2b,	// (0x0002d701) dt_sta_signal_pane

0x7cb5,	// (0x0003358b) bg_dt_sta_title_pane_ParamLimits

0x7cb5,	// (0x0003358b) bg_dt_sta_title_pane

0x1e34,	// (0x0002d70a) dt_sta_title_pane_g1

0x1e3c,	// (0x0002d712) dt_sta_title_pane_t1_ParamLimits

0x1e3c,	// (0x0002d712) dt_sta_title_pane_t1

0x7256,	// (0x00032b2c) bg_dt_sta_control_pane

0x1e51,	// (0x0002d727) dt_sta_controll_pane_g1

0x1e5a,	// (0x0002d730) bg_dt_sta_title_pane_g1

0x1e63,	// (0x0002d739) bg_dt_sta_title_pane_g2

0x1e6c,	// (0x0002d742) bg_dt_sta_title_pane_g3

0x0002,

0xfe71,	// (0x0003b747) bg_dt_sta_title_pane_g

0xc808,	// (0x000380de) bg_dt_sta_indi_pane_g1

0x1e75,	// (0x0002d74b) dt_sta_signal_pane_g1

0x1e7d,	// (0x0002d753) dt_sta_signal_pane_g2

0x0001,

0xfe78,	// (0x0003b74e) dt_sta_signal_pane_g

0x0f77,	// (0x0002c84d) dt_sta_battery_pane_g1

0x0f80,	// (0x0002c856) dt_sta_battery_pane_t1

0xc808,	// (0x000380de) bg_dt_sta_control_pane_g1

0xa2c4,	// (0x00035b9a) fep_china_uni_eep_pane

0xa2cc,	// (0x00035ba2) fep_china_uni_entry_pane_ParamLimits

0xa2dc,	// (0x00035bb2) popup_fep_china_uni_window_g1_ParamLimits

0xa2ec,	// (0x00035bc2) popup_fep_china_uni_window_g2_ParamLimits

0xa2ec,	// (0x00035bc2) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0003afd3) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0003afd3) popup_fep_china_uni_window_g

0x0f8f,	// (0x0002c865) fep_china_uni_eep_pane_g1

0x0f97,	// (0x0002c86d) fep_china_uni_eep_pane_t1

0x0db4,	// (0x0002c68a) aid_touch_area_size_smil_player

0xa977,	// (0x0003624d) lc0_clock_pane

0xa9b0,	// (0x00036286) status_pane_g5_ParamLimits

0xa9b0,	// (0x00036286) status_pane_g5

0x88ed,	// (0x000341c3) popup_keymap_window

0xa990,	// (0x00036266) status_icon_pane

0x1bde,	// (0x0002d4b4) cell_ai5_widget_pane_g3_ParamLimits

0x1bf8,	// (0x0002d4ce) cell_ai5_widget_pane_g4_ParamLimits

0x1c08,	// (0x0002d4de) cell_ai5_widget_pane_g5_ParamLimits

0x1c30,	// (0x0002d506) cell_ai5_widget_pane_g8_ParamLimits

0x1c30,	// (0x0002d506) cell_ai5_widget_pane_g8

0x1c44,	// (0x0002d51a) cell_ai5_widget_pane_g9_ParamLimits

0x1c44,	// (0x0002d51a) cell_ai5_widget_pane_g9

0x1c58,	// (0x0002d52e) cell_ai5_widget_pane_g10_ParamLimits

0x1c58,	// (0x0002d52e) cell_ai5_widget_pane_g10

0x0fa6,	// (0x0002c87c) status_icon_pane_g1

0x7256,	// (0x00032b2c) bg_popup_sub_pane_cp13

0x0fae,	// (0x0002c884) popup_keymap_window_t1

0xd945,	// (0x0003921b) control_pane_g6_ParamLimits

0xd945,	// (0x0003921b) control_pane_g6

0xd952,	// (0x00039228) control_pane_g7_ParamLimits

0xd952,	// (0x00039228) control_pane_g7

0xd95f,	// (0x00039235) control_pane_g8_ParamLimits

0xd95f,	// (0x00039235) control_pane_g8

0x1dd7,	// (0x0002d6ad) dt_sta_controll_pane_ParamLimits

0x1de4,	// (0x0002d6ba) dt_sta_indi_pane_ParamLimits

0x1df5,	// (0x0002d6cb) dt_sta_title_pane_ParamLimits

0x7b44,	// (0x0003341a) aid_size_touch_scroll_bar_cale

0x743d,	// (0x00032d13) popup_discreet_window_ParamLimits

0x743d,	// (0x00032d13) popup_discreet_window

0x74a1,	// (0x00032d77) popup_sk_window

0xb048,	// (0x0003691e) bg_popup_sub_pane_cp28_ParamLimits

0xb048,	// (0x0003691e) bg_popup_sub_pane_cp28

0x0fbc,	// (0x0002c892) popup_discreet_window_g1_ParamLimits

0x0fbc,	// (0x0002c892) popup_discreet_window_g1

0x0fdc,	// (0x0002c8b2) popup_discreet_window_t1_ParamLimits

0x0fdc,	// (0x0002c8b2) popup_discreet_window_t1

0x0ffa,	// (0x0002c8d0) popup_discreet_window_t2_ParamLimits

0x0ffa,	// (0x0002c8d0) popup_discreet_window_t2

0x0002,

0xfe7d,	// (0x0003b753) popup_discreet_window_t_ParamLimits

0xfe7d,	// (0x0003b753) popup_discreet_window_t

0x9d42,	// (0x00035618) popup_sk_window_g1

0x9d4b,	// (0x00035621) popup_sk_window_g2

0x0001,

0xfe84,	// (0x0003b75a) popup_sk_window_g

0x9d54,	// (0x0003562a) popup_sk_window_t1

0x9d62,	// (0x00035638) popup_sk_window_t1_copy1

0x1bca,	// (0x0002d4a0) cell_ai5_widget_pane_g2_ParamLimits

0x1d34,	// (0x0002d60a) cell_ai5_widget_pane_t9_ParamLimits

0x1d34,	// (0x0002d60a) cell_ai5_widget_pane_t9

0x7256,	// (0x00032b2c) main_fep_fshwr2_pane

0x9d70,	// (0x00035646) aid_fshwr2_btn_pane

0x9d7c,	// (0x00035652) aid_fshwr2_syb_pane

0x9d8e,	// (0x00035664) aid_fshwr2_txt_pane

0x9d9a,	// (0x00035670) fshwr2_func_candi_pane

0x9dae,	// (0x00035684) fshwr2_hwr_syb_pane

0x9dc0,	// (0x00035696) fshwr2_icf_pane

0x7256,	// (0x00032b2c) fshwr2_icf_bg_pane

0x9de8,	// (0x000356be) fshwr2_icf_pane_t1_ParamLimits

0x9de8,	// (0x000356be) fshwr2_icf_pane_t1

0x8328,	// (0x00033bfe) fshwr2_func_candi_pane_g1

0x1e85,	// (0x0002d75b) fshwr2_func_candi_row_pane_ParamLimits

0x1e85,	// (0x0002d75b) fshwr2_func_candi_row_pane

0x9e00,	// (0x000356d6) cell_fshwr2_syb_pane_ParamLimits

0x9e00,	// (0x000356d6) cell_fshwr2_syb_pane

0x0d8d,	// (0x0002c663) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0d8d,	// (0x0002c663) fshwr2_hwr_syb_pane_g1

0x7256,	// (0x00032b2c) bg_popup_call_pane_cp01

0x9e1f,	// (0x000356f5) fshwr2_func_candi_cell_pane_ParamLimits

0x9e1f,	// (0x000356f5) fshwr2_func_candi_cell_pane

0xb630,	// (0x00036f06) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xb630,	// (0x00036f06) fshwr2_func_candi_cell_bg_pane

0x9e5e,	// (0x00035734) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9e5e,	// (0x00035734) fshwr2_func_candi_cell_pane_g1

0x9e7e,	// (0x00035754) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9e7e,	// (0x00035754) fshwr2_func_candi_cell_pane_t1

0x7256,	// (0x00032b2c) bg_button_pane_cp08

0x87a0,	// (0x00034076) cell_fshwr2_syb_bg_pane

0x9e91,	// (0x00035767) cell_fshwr2_syb_bg_pane_g1

0x9ea5,	// (0x0003577b) cell_fshwr2_syb_bg_pane_t1

0x7cb5,	// (0x0003358b) main_tmo_pane

0xddbd,	// (0x00039693) uni_indicator_pane_g1_ParamLimits

0xddd1,	// (0x000396a7) uni_indicator_pane_g2_ParamLimits

0xdde6,	// (0x000396bc) uni_indicator_pane_g3_ParamLimits

0xba09,	// (0x000372df) uni_indicator_pane_g4_ParamLimits

0xba09,	// (0x000372df) uni_indicator_pane_g4

0xba1d,	// (0x000372f3) uni_indicator_pane_g5_ParamLimits

0xba1d,	// (0x000372f3) uni_indicator_pane_g5

0xba1d,	// (0x000372f3) uni_indicator_pane_g6_ParamLimits

0xba1d,	// (0x000372f3) uni_indicator_pane_g6

0xf8fa,	// (0x0003b1d0) uni_indicator_pane_g_ParamLimits

0xee62,	// (0x0003a738) popup_tmo_note_window_ParamLimits

0xee62,	// (0x0003a738) popup_tmo_note_window

0x7cb5,	// (0x0003358b) fshwr2_bg_pane

0x9e6f,	// (0x00035745) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9e6f,	// (0x00035745) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe89,	// (0x0003b75f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe89,	// (0x0003b75f) fshwr2_func_candi_cell_pane_g

0xc808,	// (0x000380de) bg_popup_window_pane_cp01

0x9ebb,	// (0x00035791) bg_popup_window_pane_g1_cp01

0x104c,	// (0x0002c922) bg_popup_window_pane_cp22_ParamLimits

0x104c,	// (0x0002c922) bg_popup_window_pane_cp22

0x105a,	// (0x0002c930) listscroll_tmo_link_pane_ParamLimits

0x105a,	// (0x0002c930) listscroll_tmo_link_pane

0x109a,	// (0x0002c970) popup_tmo_note_window_g1_ParamLimits

0x109a,	// (0x0002c970) popup_tmo_note_window_g1

0x10a7,	// (0x0002c97d) tmo_note_info_pane_ParamLimits

0x10a7,	// (0x0002c97d) tmo_note_info_pane

0x9ec4,	// (0x0003579a) list_tmo_note_info_pane_g1_ParamLimits

0x9ec4,	// (0x0003579a) list_tmo_note_info_pane_g1

0x10c1,	// (0x0002c997) list_tmo_note_info_pane_g2_ParamLimits

0x10c1,	// (0x0002c997) list_tmo_note_info_pane_g2

0x0001,

0xfe8e,	// (0x0003b764) list_tmo_note_info_pane_g_ParamLimits

0xfe8e,	// (0x0003b764) list_tmo_note_info_pane_g

0x10dd,	// (0x0002c9b3) list_tmo_note_info_text_pane_ParamLimits

0x10dd,	// (0x0002c9b3) list_tmo_note_info_text_pane

0x111f,	// (0x0002c9f5) list_tmo_link_pane

0x112c,	// (0x0002ca02) scroll_pane_cp20

0x1139,	// (0x0002ca0f) list_single_tmo_link_pane_ParamLimits

0x1139,	// (0x0002ca0f) list_single_tmo_link_pane

0x1149,	// (0x0002ca1f) list_single_tmo_link_pane_t1

0x1157,	// (0x0002ca2d) list_tmo_note_info_text_pane_t1_ParamLimits

0x1157,	// (0x0002ca2d) list_tmo_note_info_text_pane_t1

0x7d68,	// (0x0003363e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7d68,	// (0x0003363e) aid_size_touch_scroll_bar_cp01

0x69a7,	// (0x0003227d) aid_size_touch_slider_marker

0x748d,	// (0x00032d63) popup_settings_window_ParamLimits

0x748d,	// (0x00032d63) popup_settings_window

0x6b34,	// (0x0003240a) popup_candi_list_indi_window

0xa8d9,	// (0x000361af) aid_touch_navi_pane_ParamLimits

0x95cd,	// (0x00034ea3) rs_clock_indi_pane

0x95d6,	// (0x00034eac) sctrl_sk_bottom_pane_ParamLimits

0x95e7,	// (0x00034ebd) sctrl_sk_top_pane_ParamLimits

0x96d3,	// (0x00034fa9) popup_fep_tooltip_window

0x0e02,	// (0x0002c6d8) aid_size_cell_widget_grid_ParamLimits

0x1bb6,	// (0x0002d48c) cell_ai5_widget_pane_g1_ParamLimits

0x1bb6,	// (0x0002d48c) cell_ai5_widget_pane_g1

0x1c18,	// (0x0002d4ee) cell_ai5_widget_pane_g6_ParamLimits

0x1c24,	// (0x0002d4fa) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe02,	// (0x0003b6d8) cell_ai5_widget_pane_g_ParamLimits

0xfe02,	// (0x0003b6d8) cell_ai5_widget_pane_g

0x1d63,	// (0x0002d639) cell_ai5_widget_pane_t10_ParamLimits

0x1d63,	// (0x0002d639) cell_ai5_widget_pane_t10

0x1da5,	// (0x0002d67b) grid_ai5_widget_pane_ParamLimits

0x0ee6,	// (0x0002c7bc) cell_contacts_ai5_widget_pane_ParamLimits

0x0ee6,	// (0x0002c7bc) cell_contacts_ai5_widget_pane

0x100f,	// (0x0002c8e5) popup_discreet_window_t3_ParamLimits

0x100f,	// (0x0002c8e5) popup_discreet_window_t3

0x9dd6,	// (0x000356ac) popup_fshwr2_char_preview_window_ParamLimits

0x9dd6,	// (0x000356ac) popup_fshwr2_char_preview_window

0x9edb,	// (0x000357b1) tmo_note_info_pane_t1

0x9ef0,	// (0x000357c6) tmo_note_info_pane_t2

0x9f05,	// (0x000357db) tmo_note_info_pane_t3

0x10fb,	// (0x0002c9d1) tmo_note_info_pane_t4

0x110d,	// (0x0002c9e3) tmo_note_info_pane_t5

0x0004,

0xfe93,	// (0x0003b769) tmo_note_info_pane_t

0x111f,	// (0x0002c9f5) list_tmo_link_pane_ParamLimits

0x112c,	// (0x0002ca02) scroll_pane_cp20_ParamLimits

0x7256,	// (0x00032b2c) bg_popup_fep_char_preview_window_cp01

0x1170,	// (0x0002ca46) popup_fshwr2_char_preview_window_t1

0x117e,	// (0x0002ca54) popup_candi_list_indi_window_g1

0x1187,	// (0x0002ca5d) bg_cell_contacts_ai5_widget_pane

0x1193,	// (0x0002ca69) cell_contacts_ai5_widget_pane_g1

0x11a8,	// (0x0002ca7e) cell_contacts_ai5_widget_pane_g2

0x11b4,	// (0x0002ca8a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9e,	// (0x0003b774) cell_contacts_ai5_widget_pane_g

0x11c0,	// (0x0002ca96) cell_contacts_ai5_widget_pane_t1

0x7cb5,	// (0x0003358b) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1235,	// (0x0002cb0b) settings_container_pane

0xa6f4,	// (0x00035fca) listscroll_set_pane_copy1

0xc144,	// (0x00037a1a) scroll_pane_cp121_copy1

0x1241,	// (0x0002cb17) set_content_pane_copy1

0x1249,	// (0x0002cb1f) aid_height_set_list_copy1_ParamLimits

0x1249,	// (0x0002cb1f) aid_height_set_list_copy1

0xbbc2,	// (0x00037498) aid_size_parent_copy1_ParamLimits

0xbbc2,	// (0x00037498) aid_size_parent_copy1

0x1255,	// (0x0002cb2b) button_value_adjust_pane_cp6_copy1_ParamLimits

0x1255,	// (0x0002cb2b) button_value_adjust_pane_cp6_copy1

0x87a0,	// (0x00034076) list_highlight_pane_cp2_copy1_ParamLimits

0x87a0,	// (0x00034076) list_highlight_pane_cp2_copy1

0x1269,	// (0x0002cb3f) list_set_pane_copy1_ParamLimits

0x1269,	// (0x0002cb3f) list_set_pane_copy1

0x11d2,	// (0x0002caa8) main_pane_set_t1_copy1_ParamLimits

0x11d2,	// (0x0002caa8) main_pane_set_t1_copy1

0x120c,	// (0x0002cae2) main_pane_set_t2_copy1_ParamLimits

0x120c,	// (0x0002cae2) main_pane_set_t2_copy1

0x12f7,	// (0x0002cbcd) main_pane_set_t3_copy1

0x1305,	// (0x0002cbdb) main_pane_set_t4_copy1

0x1229,	// (0x0002caff) set_content_pane_g1_copy1_ParamLimits

0x1229,	// (0x0002caff) set_content_pane_g1_copy1

0x1313,	// (0x0002cbe9) setting_code_pane_copy1

0x131b,	// (0x0002cbf1) setting_slider_graphic_pane_copy1

0x131b,	// (0x0002cbf1) setting_slider_pane_copy1

0x131b,	// (0x0002cbf1) setting_text_pane_copy1

0x131b,	// (0x0002cbf1) setting_volume_pane_copy1

0x1323,	// (0x0002cbf9) settings_code_pane_cp2_copy1

0x132b,	// (0x0002cc01) settings_code_pane_cp_copy1_ParamLimits

0x132b,	// (0x0002cc01) settings_code_pane_cp_copy1

0x9f1a,	// (0x000357f0) volume_set_pane_copy1

0x133f,	// (0x0002cc15) volume_set_pane_g10_copy1

0x1347,	// (0x0002cc1d) volume_set_pane_g1_copy1

0x134f,	// (0x0002cc25) volume_set_pane_g2_copy1

0x1357,	// (0x0002cc2d) volume_set_pane_g3_copy1

0x135f,	// (0x0002cc35) volume_set_pane_g4_copy1

0x1367,	// (0x0002cc3d) volume_set_pane_g5_copy1

0x136f,	// (0x0002cc45) volume_set_pane_g6_copy1

0x1377,	// (0x0002cc4d) volume_set_pane_g7_copy1

0x137f,	// (0x0002cc55) volume_set_pane_g8_copy1

0x1387,	// (0x0002cc5d) volume_set_pane_g9_copy1

0x75b3,	// (0x00032e89) bg_set_opt_pane_cp_copy1_ParamLimits

0x75b3,	// (0x00032e89) bg_set_opt_pane_cp_copy1

0x9f22,	// (0x000357f8) setting_slider_pane_t1_copy1_ParamLimits

0x9f22,	// (0x000357f8) setting_slider_pane_t1_copy1

0x9f39,	// (0x0003580f) setting_slider_pane_t2_copy1_ParamLimits

0x9f39,	// (0x0003580f) setting_slider_pane_t2_copy1

0x9f52,	// (0x00035828) setting_slider_pane_t3_copy1_ParamLimits

0x9f52,	// (0x00035828) setting_slider_pane_t3_copy1

0x7617,	// (0x00032eed) slider_set_pane_copy1_ParamLimits

0x7617,	// (0x00032eed) slider_set_pane_copy1

0x7d04,	// (0x000335da) set_opt_bg_pane_g1_copy2

0x7d0c,	// (0x000335e2) set_opt_bg_pane_g2_copy2

0x138f,	// (0x0002cc65) set_opt_bg_pane_g3_copy2

0x7d1c,	// (0x000335f2) set_opt_bg_pane_g4_copy2

0x7d24,	// (0x000335fa) set_opt_bg_pane_g5_copy2

0x7d2c,	// (0x00033602) set_opt_bg_pane_g6_copy2

0x1397,	// (0x0002cc6d) set_opt_bg_pane_g7_copy2

0x139f,	// (0x0002cc75) set_opt_bg_pane_g8_copy2

0x13a7,	// (0x0002cc7d) set_opt_bg_pane_g9_copy2

0x8eed,	// (0x000347c3) aid_size_touch_slider_mark_copy1_ParamLimits

0x8eed,	// (0x000347c3) aid_size_touch_slider_mark_copy1

0xbbd4,	// (0x000374aa) slider_set_pane_g1_copy1

0xbbdd,	// (0x000374b3) slider_set_pane_g2_copy1

0x8f0d,	// (0x000347e3) slider_set_pane_g3_copy1_ParamLimits

0x8f0d,	// (0x000347e3) slider_set_pane_g3_copy1

0x8f21,	// (0x000347f7) slider_set_pane_g4_copy1_ParamLimits

0x8f21,	// (0x000347f7) slider_set_pane_g4_copy1

0x8f39,	// (0x0003480f) slider_set_pane_g5_copy1_ParamLimits

0x8f39,	// (0x0003480f) slider_set_pane_g5_copy1

0x8f0d,	// (0x000347e3) slider_set_pane_g6_copy1_ParamLimits

0x8f0d,	// (0x000347e3) slider_set_pane_g6_copy1

0x9f69,	// (0x0003583f) slider_set_pane_g7_copy1_ParamLimits

0x9f69,	// (0x0003583f) slider_set_pane_g7_copy1

0x741f,	// (0x00032cf5) bg_set_opt_pane_cp2_copy1

0x762d,	// (0x00032f03) setting_slider_graphic_pane_g1_copy1

0x9f7f,	// (0x00035855) setting_slider_graphic_pane_t1_copy1

0x9f8e,	// (0x00035864) setting_slider_graphic_pane_t2_copy1

0x9f9d,	// (0x00035873) slider_set_pane_cp_copy1

0x13b7,	// (0x0002cc8d) input_focus_pane_cp1_copy1

0x13c0,	// (0x0002cc96) list_set_text_pane_copy1

0x13c8,	// (0x0002cc9e) setting_text_pane_g1_copy1

0x7236,	// (0x00032b0c) set_text_pane_t1_copy1

0x13b7,	// (0x0002cc8d) input_focus_pane_cp2_copy1

0x13c8,	// (0x0002cc9e) setting_code_pane_g1_copy1

0x13ea,	// (0x0002ccc0) setting_code_pane_t1_copy1

0x13f8,	// (0x0002ccce) list_set_graphic_pane_copy1

0x741f,	// (0x00032cf5) bg_set_opt_pane_cp4_copy1

0xa457,	// (0x00035d2d) list_set_graphic_pane_g1_copy1_ParamLimits

0xa457,	// (0x00035d2d) list_set_graphic_pane_g1_copy1

0x140d,	// (0x0002cce3) list_set_graphic_pane_g2_copy1

0xa46f,	// (0x00035d45) list_set_graphic_pane_t1_copy1_ParamLimits

0xa46f,	// (0x00035d45) list_set_graphic_pane_t1_copy1

0xc808,	// (0x000380de) rs_clock_indi_pane_g1

0x1415,	// (0x0002cceb) rs_clock_indi_pane_t1

0x1423,	// (0x0002ccf9) rs_indi_pane

0x142b,	// (0x0002cd01) rs_indi_pane_g1

0x1434,	// (0x0002cd0a) rs_indi_pane_g2

0x117e,	// (0x0002ca54) rs_indi_pane_g3

0x0002,

0xfea5,	// (0x0003b77b) rs_indi_pane_g

0xa6f4,	// (0x00035fca) bg_popup_preview_window_pane_cp03

0x143d,	// (0x0002cd13) popup_fep_tooltip_window_t1

0xd149,	// (0x00038a1f) popup_note2_window_g2_ParamLimits

0xd149,	// (0x00038a1f) popup_note2_window_g2

0x0001,

0xfc39,	// (0x0003b50f) popup_note2_window_g_ParamLimits

0xfc39,	// (0x0003b50f) popup_note2_window_g

0xe303,	// (0x00039bd9) bg_popup_sub_pane_cp11_ParamLimits

0xe310,	// (0x00039be6) cell_ai3_links_pane_g1_ParamLimits

0xe327,	// (0x00039bfd) cell_ai3_links_pane_t1

0x7236,	// (0x00032b0c) set_text_pane_t1_copy1_ParamLimits

0xa61b,	// (0x00035ef1) cell_graphic_popup_pane_cp2_ParamLimits

0xa61b,	// (0x00035ef1) cell_graphic_popup_pane_cp2

0x144b,	// (0x0002cd21) cell_graphic_popup_pane_g1_cp2

0x79f3,	// (0x000332c9) cell_graphic_popup_pane_g2_cp2

0x1453,	// (0x0002cd29) cell_graphic_popup_pane_g3_cp2

0x145b,	// (0x0002cd31) cell_graphic_popup_pane_t2_cp2

0x7a04,	// (0x000332da) grid_highlight_pane_cp3_cp2

0x8125,	// (0x000339fb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7cb5,	// (0x0003358b) main_tmo_pane_ParamLimits

0xee5a,	// (0x0003a730) popup_tmo_big_image_note_window

0x0e41,	// (0x0002c717) cell_ai5_widget_list_pane

0x1bad,	// (0x0002d483) cell_ai5_widget_lrg_icon_pane

0x9edb,	// (0x000357b1) tmo_note_info_pane_t1_ParamLimits

0x9ef0,	// (0x000357c6) tmo_note_info_pane_t2_ParamLimits

0x9f05,	// (0x000357db) tmo_note_info_pane_t3_ParamLimits

0x10fb,	// (0x0002c9d1) tmo_note_info_pane_t4_ParamLimits

0x110d,	// (0x0002c9e3) tmo_note_info_pane_t5_ParamLimits

0xfe93,	// (0x0003b769) tmo_note_info_pane_t_ParamLimits

0x1235,	// (0x0002cb0b) settings_container_pane_ParamLimits

0x13af,	// (0x0002cc85) indicator_popup_pane_cp5

0x13af,	// (0x0002cc85) indicator_popup_pane_cp6

0x13f8,	// (0x0002ccce) list_set_graphic_pane_copy1_ParamLimits

0x7256,	// (0x00032b2c) bg_popup_window_pane_cp23

0x1469,	// (0x0002cd3f) popup_tmo_big_image_note_window_g1

0x1472,	// (0x0002cd48) popup_tmo_big_image_note_window_t1

0x1480,	// (0x0002cd56) popup_tmo_big_image_note_window_t2

0x148e,	// (0x0002cd64) popup_tmo_big_image_note_window_t3

0x0002,

0xfeac,	// (0x0003b782) popup_tmo_big_image_note_window_t

0xc808,	// (0x000380de) cell_ai5_widget_lrg_icon_pane_g1

0x149c,	// (0x0002cd72) cell_ai5_widget_lrg_icon_pane_t1

0x9fa5,	// (0x0003587b) cell_ai5_widget_list_row_pane_ParamLimits

0x9fa5,	// (0x0003587b) cell_ai5_widget_list_row_pane

0x9fbc,	// (0x00035892) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x9fbc,	// (0x00035892) cell_ai5_widget_list_row_pane_g1

0x9fc9,	// (0x0003589f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x9fc9,	// (0x0003589f) cell_ai5_widget_list_row_pane_t1

0x9ff7,	// (0x000358cd) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x9ff7,	// (0x000358cd) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb3,	// (0x0003b789) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb3,	// (0x0003b789) cell_ai5_widget_list_row_pane_t

0x7256,	// (0x00032b2c) main_fep_vtchi_ss_pane

0x14b7,	// (0x0002cd8d) popup_fep_char_pre_window

0x14bf,	// (0x0002cd95) popup_fep_ituss_window

0xa04f,	// (0x00035925) popup_fep_vkbss_window

0x14fa,	// (0x0002cdd0) grid_vkbss_keypad_pane_ParamLimits

0x14fa,	// (0x0002cdd0) grid_vkbss_keypad_pane

0x150a,	// (0x0002cde0) ituss_keypad_pane

0xa06c,	// (0x00035942) aid_vkbss_key_offset_ParamLimits

0xa06c,	// (0x00035942) aid_vkbss_key_offset

0xa078,	// (0x0003594e) cell_vkbss_key_pane_ParamLimits

0xa078,	// (0x0003594e) cell_vkbss_key_pane

0x1519,	// (0x0002cdef) bg_cell_vkbss_key_g1_ParamLimits

0x1519,	// (0x0002cdef) bg_cell_vkbss_key_g1

0x1525,	// (0x0002cdfb) cell_vkbss_key_3p_pane_ParamLimits

0x1525,	// (0x0002cdfb) cell_vkbss_key_3p_pane

0x155b,	// (0x0002ce31) cell_vkbss_key_g1_ParamLimits

0x155b,	// (0x0002ce31) cell_vkbss_key_g1

0x1591,	// (0x0002ce67) cell_vkbss_key_t1_ParamLimits

0x1591,	// (0x0002ce67) cell_vkbss_key_t1

0xa0ac,	// (0x00035982) cell_ituss_key_pane_ParamLimits

0xa0ac,	// (0x00035982) cell_ituss_key_pane

0x1601,	// (0x0002ced7) bg_cell_ituss_key_g1_ParamLimits

0x1601,	// (0x0002ced7) bg_cell_ituss_key_g1

0x160d,	// (0x0002cee3) cell_ituss_key_pane_g1_ParamLimits

0x160d,	// (0x0002cee3) cell_ituss_key_pane_g1

0xa0bd,	// (0x00035993) cell_ituss_key_pane_g2_ParamLimits

0xa0bd,	// (0x00035993) cell_ituss_key_pane_g2

0x0005,

0xfeba,	// (0x0003b790) cell_ituss_key_pane_g_ParamLimits

0xfeba,	// (0x0003b790) cell_ituss_key_pane_g

0xa141,	// (0x00035a17) cell_ituss_key_t1_ParamLimits

0xa141,	// (0x00035a17) cell_ituss_key_t1

0xa177,	// (0x00035a4d) cell_ituss_key_t2_ParamLimits

0xa177,	// (0x00035a4d) cell_ituss_key_t2

0xa1a8,	// (0x00035a7e) cell_ituss_key_t3_ParamLimits

0xa1a8,	// (0x00035a7e) cell_ituss_key_t3

0xa177,	// (0x00035a4d) cell_ituss_key_t4_ParamLimits

0xa177,	// (0x00035a4d) cell_ituss_key_t4

0x0004,

0xfec7,	// (0x0003b79d) cell_ituss_key_t_ParamLimits

0xfec7,	// (0x0003b79d) cell_ituss_key_t

0x1643,	// (0x0002cf19) cell_vkbss_key_3p_pane_g1

0x163b,	// (0x0002cf11) cell_vkbss_key_3p_pane_g2

0x1633,	// (0x0002cf09) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed2,	// (0x0003b7a8) cell_vkbss_key_3p_pane_g

0xa6f4,	// (0x00035fca) bg_popup_fep_char_preview_window_cp02

0x164b,	// (0x0002cf21) popup_fep_char_pre_window_t1

0x1b9a,	// (0x0002d470) main_ai5_sk_pane

0x1187,	// (0x0002ca5d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x1193,	// (0x0002ca69) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x11a8,	// (0x0002ca7e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x11b4,	// (0x0002ca8a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9e,	// (0x0003b774) cell_contacts_ai5_widget_pane_g_ParamLimits

0x11c0,	// (0x0002ca96) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7cb5,	// (0x0003358b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xa1eb,	// (0x00035ac1) main_ai5_sk_pane_g1

0xae92,	// (0x00036768) popup_query_code_window_g1

0xa039,	// (0x0003590f) popup_fep_vkb_icf_pane

0x14d1,	// (0x0002cda7) popup_fep_vtchi_icf_pane

0x87a0,	// (0x00034076) bg_icf_pane

0x87a0,	// (0x00034076) list_vkb_icf_pane

0x1659,	// (0x0002cf2f) bg_icf_pane_cp01

0x166c,	// (0x0002cf42) vtchi_icf_list_pane

0xa234,	// (0x00035b0a) list_vkb_icf_pane_t1_ParamLimits

0xa234,	// (0x00035b0a) list_vkb_icf_pane_t1

0x167c,	// (0x0002cf52) vtchi_icf_list_pane_t1_ParamLimits

0x167c,	// (0x0002cf52) vtchi_icf_list_pane_t1

0x14bf,	// (0x0002cd95) popup_fep_ituss_window_ParamLimits

0x14d1,	// (0x0002cda7) popup_fep_vtchi_icf_pane_ParamLimits

0x150a,	// (0x0002cde0) ituss_keypad_pane_ParamLimits

0xa062,	// (0x00035938) ituss_sks_pane

0x87a0,	// (0x00034076) bg_icf_pane_ParamLimits

0xa01f,	// (0x000358f5) icf_edit_indi_pane_ParamLimits

0xa01f,	// (0x000358f5) icf_edit_indi_pane

0x87a0,	// (0x00034076) list_vkb_icf_pane_ParamLimits

0x1659,	// (0x0002cf2f) bg_icf_pane_cp01_ParamLimits

0x14aa,	// (0x0002cd80) icf_edit_indi_pane_cp01_ParamLimits

0x14aa,	// (0x0002cd80) icf_edit_indi_pane_cp01

0x1674,	// (0x0002cf4a) vtchi_query_pane

0x0d8d,	// (0x0002c663) icf_edit_indi_pane_g1_ParamLimits

0x0d8d,	// (0x0002c663) icf_edit_indi_pane_g1

0xa25f,	// (0x00035b35) icf_edit_indi_pane_g2_ParamLimits

0xa25f,	// (0x00035b35) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003b7d3) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003b7d3) icf_edit_indi_pane_g

0xa273,	// (0x00035b49) icf_edit_indi_pane_t1

0x1694,	// (0x0002cf6a) bg_input_focus_pane_cp042

0x169d,	// (0x0002cf73) vtchi_button_pane

0x16a6,	// (0x0002cf7c) vtchi_query_pane_t1

0x16b4,	// (0x0002cf8a) vtchi_query_pane_t2

0x16c2,	// (0x0002cf98) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003b7c2) vtchi_query_pane_t

0x7256,	// (0x00032b2c) bg_button_pane_cp13

0x16d0,	// (0x0002cfa6) vtchi_button_pane_g1

0xa24d,	// (0x00035b23) ituss_sks_pane_g1

0xa256,	// (0x00035b2c) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003b7c9) ituss_sks_pane_g

0x16e6,	// (0x0002cfbc) ituss_sks_pane_t1

0x16d8,	// (0x0002cfae) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003b7ce) ituss_sks_pane_t

0xc435,	// (0x00037d0b) indicator_nsta_pane_cp_g1

0xc43e,	// (0x00037d14) indicator_nsta_pane_cp_g2

0xc446,	// (0x00037d1c) indicator_nsta_pane_cp_g3

0xc44e,	// (0x00037d24) indicator_nsta_pane_cp_g4

0xc456,	// (0x00037d2c) indicator_nsta_pane_cp_g5

0xc45e,	// (0x00037d34) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0003b359) indicator_nsta_pane_cp_g

0x19e0,	// (0x0002d2b6) cell_graphic2_pane_t2_ParamLimits

0x19e0,	// (0x0002d2b6) cell_graphic2_pane_t2

0x0001,

0xfd89,	// (0x0003b65f) cell_graphic2_pane_t_ParamLimits

0xfd89,	// (0x0003b65f) cell_graphic2_pane_t

0x1a0c,	// (0x0002d2e2) cell_graphic2_control_pane_t1

0xd788,	// (0x0003905e) signal_pane_g3_ParamLimits

0xd788,	// (0x0003905e) signal_pane_g3

0xd799,	// (0x0003906f) signal_pane_g4_ParamLimits

0xd799,	// (0x0003906f) signal_pane_g4

0xa009,	// (0x000358df) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa009,	// (0x000358df) cell_ai5_widget_list_row_pane_t3

0x1621,	// (0x0002cef7) cell_ituss_key_pane_t1_ParamLimits

0x1621,	// (0x0002cef7) cell_ituss_key_pane_t1

0xab60,	// (0x00036436) form_field_data_wide_pane_vc_t2_ParamLimits

0xab60,	// (0x00036436) form_field_data_wide_pane_vc_t2

0xab72,	// (0x00036448) form_field_data_wide_pane_vc_t3_ParamLimits

0xab72,	// (0x00036448) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x0003b0b8) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x0003b0b8) form_field_data_wide_pane_vc_t

0xc189,	// (0x00037a5f) form_field_slider_wide_pane_vc_t3_ParamLimits

0xc189,	// (0x00037a5f) form_field_slider_wide_pane_vc_t3

0xc247,	// (0x00037b1d) form_field_popup_wide_pane_vc_t2_ParamLimits

0xc247,	// (0x00037b1d) form_field_popup_wide_pane_vc_t2

0xc25c,	// (0x00037b32) form_field_popup_wide_pane_vc_t3_ParamLimits

0xc25c,	// (0x00037b32) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0003b348) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0003b348) form_field_popup_wide_pane_vc_t

0x9d70,	// (0x00035646) aid_fshwr2_btn_pane_ParamLimits

0x9d7c,	// (0x00035652) aid_fshwr2_syb_pane_ParamLimits

0x9d8e,	// (0x00035664) aid_fshwr2_txt_pane_ParamLimits

0x7cb5,	// (0x0003358b) fshwr2_bg_pane_ParamLimits

0x9d9a,	// (0x00035670) fshwr2_func_candi_pane_ParamLimits

0x9dae,	// (0x00035684) fshwr2_hwr_syb_pane_ParamLimits

0x9dc0,	// (0x00035696) fshwr2_icf_pane_ParamLimits

0x6f18,	// (0x000327ee) list_double_graphic_pane_vc_g4_ParamLimits

0x6f18,	// (0x000327ee) list_double_graphic_pane_vc_g4

0xa0dd,	// (0x000359b3) cell_ituss_key_pane_g3_ParamLimits

0xa0dd,	// (0x000359b3) cell_ituss_key_pane_g3

0xa1d9,	// (0x00035aaf) cell_ituss_key_t5_ParamLimits

0xa1d9,	// (0x00035aaf) cell_ituss_key_t5

0xa04f,	// (0x00035925) popup_fep_vkbss_window_ParamLimits

0x1ba4,	// (0x0002d47a) aid_cell_ai5_quarter

0xa273,	// (0x00035b49) icf_edit_indi_pane_t1_ParamLimits

0x782e,	// (0x00033104) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x782e,	// (0x00033104) aid_tch_indicator_popup_pane_cp2

0x7841,	// (0x00033117) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7841,	// (0x00033117) aid_tch_query_popup_data_pane_cp2

0xae3a,	// (0x00036710) aid_tch_query_popup_pane_ParamLimits

0xae3a,	// (0x00036710) aid_tch_query_popup_pane

0xae3a,	// (0x00036710) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xae3a,	// (0x00036710) aid_tch_query_popup_data_pane_cp1

0x87a0,	// (0x00034076) cell_fshwr2_syb_bg_pane_ParamLimits

0x9e91,	// (0x00035767) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9ea5,	// (0x0003577b) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xa039,	// (0x0003590f) popup_fep_vkb_icf_pane_ParamLimits

0x9bf1,	// (0x000354c7) bg_popup_fep_char_preview_window_g10

0x1c6c,	// (0x0002d542) cell_ai5_widget_pane_g11_ParamLimits

0x1c6c,	// (0x0002d542) cell_ai5_widget_pane_g11

0x1c78,	// (0x0002d54e) cell_ai5_widget_pane_g12_ParamLimits

0x1c78,	// (0x0002d54e) cell_ai5_widget_pane_g12

0x1c84,	// (0x0002d55a) cell_ai5_widget_pane_g13_ParamLimits

0x1c84,	// (0x0002d55a) cell_ai5_widget_pane_g13

0x1d81,	// (0x0002d657) cell_ai5_widget_pane_t11_ParamLimits

0x1d81,	// (0x0002d657) cell_ai5_widget_pane_t11

0x1d93,	// (0x0002d669) cell_ai5_widget_pane_t12_ParamLimits

0x1d93,	// (0x0002d669) cell_ai5_widget_pane_t12

0xa0e9,	// (0x000359bf) cell_ituss_key_pane_g4_ParamLimits

0xa0e9,	// (0x000359bf) cell_ituss_key_pane_g4

0xa105,	// (0x000359db) cell_ituss_key_pane_g5_ParamLimits

0xa105,	// (0x000359db) cell_ituss_key_pane_g5

0xa121,	// (0x000359f7) cell_ituss_key_pane_g6_ParamLimits

0xa121,	// (0x000359f7) cell_ituss_key_pane_g6

0xaa80,	// (0x00036356) bg_icf_pane_g1

0xa1f4,	// (0x00035aca) bg_icf_pane_g2

0xa1fc,	// (0x00035ad2) bg_icf_pane_g3

0xa204,	// (0x00035ada) bg_icf_pane_g4

0xa20c,	// (0x00035ae2) bg_icf_pane_g5

0xa214,	// (0x00035aea) bg_icf_pane_g6

0xa21c,	// (0x00035af2) bg_icf_pane_g7

0xa224,	// (0x00035afa) bg_icf_pane_g8

0xa22c,	// (0x00035b02) bg_icf_pane_g9

0x0008,

0xfed9,	// (0x0003b7af) bg_icf_pane_g

0x14e7,	// (0x0002cdbd) popup_hyb_candi_window_ParamLimits

0x14e7,	// (0x0002cdbd) popup_hyb_candi_window

0xab00,	// (0x000363d6) bg_popup_sub_pane_cp01_ParamLimits

0xab00,	// (0x000363d6) bg_popup_sub_pane_cp01

0x16f4,	// (0x0002cfca) entry_hyb_candi_pane_ParamLimits

0x16f4,	// (0x0002cfca) entry_hyb_candi_pane

0x1703,	// (0x0002cfd9) grid_hyb_candi_pane_ParamLimits

0x1703,	// (0x0002cfd9) grid_hyb_candi_pane

0x1718,	// (0x0002cfee) grid_hyb_phrase_pane_ParamLimits

0x1718,	// (0x0002cfee) grid_hyb_phrase_pane

0x1727,	// (0x0002cffd) cell_hyb_candi_pane_ParamLimits

0x1727,	// (0x0002cffd) cell_hyb_candi_pane

0x173f,	// (0x0002d015) cell_hyb_candi_scroll_pane

0x8328,	// (0x00033bfe) cell_hyb_candi_pane_g1

0x1748,	// (0x0002d01e) cell_hyb_candi_pane_t1

0x1756,	// (0x0002d02c) cell_hyb_phrase_pane

0x8328,	// (0x00033bfe) cell_hyb_phrase_pane_g1

0x175f,	// (0x0002d035) cell_hyb_phrase_pane_t1

0x176d,	// (0x0002d043) entry_hyb_candi_pane_t1

0xa6f4,	// (0x00035fca) input_focus_pane_cp06

0x177b,	// (0x0002d051) cell_hyb_candi_scroll_pane_g1

0x1783,	// (0x0002d059) cell_hyb_candi_scroll_pane_g1_aid

0x178b,	// (0x0002d061) cell_hyb_candi_scroll_pane_g2

0x1793,	// (0x0002d069) cell_hyb_candi_scroll_pane_g2_aid

0x179b,	// (0x0002d071) cell_hyb_candi_scroll_pane_g3

0x17a3,	// (0x0002d079) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large

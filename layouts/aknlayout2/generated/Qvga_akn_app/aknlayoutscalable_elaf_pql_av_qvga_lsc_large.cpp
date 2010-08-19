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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002f12d };

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
0xee5e,	// (0x0003df8b) Screen

0xee68,	// (0x0003df95) application_window_ParamLimits

0xee68,	// (0x0003df95) application_window

0x3a09,	// (0x00032b36) screen_g1

0xee76,	// (0x0003dfa3) area_bottom_pane_ParamLimits

0xee76,	// (0x0003dfa3) area_bottom_pane

0x3a97,	// (0x00032bc4) area_top_pane_ParamLimits

0x3a97,	// (0x00032bc4) area_top_pane

0x3b0f,	// (0x00032c3c) main_pane_ParamLimits

0x3b0f,	// (0x00032c3c) main_pane

0x3bc8,	// (0x00032cf5) misc_graphics

0x0dce,	// (0x0002fefb) battery_pane_ParamLimits

0x0dce,	// (0x0002fefb) battery_pane

0x79a0,	// (0x00036acd) bg_status_flat_pane_g8

0x79a8,	// (0x00036ad5) bg_status_flat_pane_g9

0x70db,	// (0x00036208) context_pane_ParamLimits

0x70db,	// (0x00036208) context_pane

0x0f28,	// (0x00030055) navi_pane_ParamLimits

0x0f28,	// (0x00030055) navi_pane

0x0f9d,	// (0x000300ca) signal_pane_ParamLimits

0x0f9d,	// (0x000300ca) signal_pane

0x0008,

0xf84d,	// (0x0003e97a) bg_status_flat_pane_g

0x1029,	// (0x00030156) status_pane_g1_ParamLimits

0x1029,	// (0x00030156) status_pane_g1

0x1035,	// (0x00030162) status_pane_g2_ParamLimits

0x1035,	// (0x00030162) status_pane_g2

0x7141,	// (0x0003626e) status_pane_g3_ParamLimits

0x7141,	// (0x0003626e) status_pane_g3

0x0004,

0xf780,	// (0x0003e8ad) status_pane_g_ParamLimits

0xf780,	// (0x0003e8ad) status_pane_g

0x1041,	// (0x0003016e) title_pane_ParamLimits

0x1041,	// (0x0003016e) title_pane

0x109c,	// (0x000301c9) uni_indicator_pane_ParamLimits

0x109c,	// (0x000301c9) uni_indicator_pane

0x7032,	// (0x0003615f) bg_list_pane_ParamLimits

0x7032,	// (0x0003615f) bg_list_pane

0xcc6c,	// (0x0003bd99) find_pane

0xd19a,	// (0x0003c2c7) listscroll_app_pane_ParamLimits

0xd19a,	// (0x0003c2c7) listscroll_app_pane

0x7052,	// (0x0003617f) listscroll_form_pane

0xcc74,	// (0x0003bda1) listscroll_gen_pane_ParamLimits

0xcc74,	// (0x0003bda1) listscroll_gen_pane

0x4f41,	// (0x0003406e) listscroll_set_pane

0xd1aa,	// (0x0003c2d7) main_idle_act_pane

0x6e9d,	// (0x00035fca) main_idle_trad_pane

0x6e9d,	// (0x00035fca) main_list_empty_pane

0x4f49,	// (0x00034076) main_midp_pane

0x706c,	// (0x00036199) main_pane_g1_ParamLimits

0x706c,	// (0x00036199) main_pane_g1

0xd1bd,	// (0x0003c2ea) popup_ai_message_window_ParamLimits

0xd1bd,	// (0x0003c2ea) popup_ai_message_window

0xd241,	// (0x0003c36e) popup_fep_china_uni_window_ParamLimits

0xd241,	// (0x0003c36e) popup_fep_china_uni_window

0x5029,	// (0x00034156) popup_fep_japan_candidate_window_ParamLimits

0x5029,	// (0x00034156) popup_fep_japan_candidate_window

0x5047,	// (0x00034174) popup_fep_japan_predictive_window_ParamLimits

0x5047,	// (0x00034174) popup_fep_japan_predictive_window

0xd27f,	// (0x0003c3ac) popup_find_window

0xd298,	// (0x0003c3c5) popup_grid_graphic_window_ParamLimits

0xd298,	// (0x0003c3c5) popup_grid_graphic_window

0x509e,	// (0x000341cb) popup_large_graphic_colour_window

0xd314,	// (0x0003c441) popup_menu_window_ParamLimits

0xd314,	// (0x0003c441) popup_menu_window

0xd472,	// (0x0003c59f) popup_note_image_window

0xd43a,	// (0x0003c567) popup_note_wait_window_ParamLimits

0xd43a,	// (0x0003c567) popup_note_wait_window

0xd488,	// (0x0003c5b5) popup_note_window_ParamLimits

0xd488,	// (0x0003c5b5) popup_note_window

0xd51c,	// (0x0003c649) popup_query_code_window_ParamLimits

0xd51c,	// (0x0003c649) popup_query_code_window

0x525b,	// (0x00034388) popup_query_data_code_window_ParamLimits

0x525b,	// (0x00034388) popup_query_data_code_window

0xd554,	// (0x0003c681) popup_query_data_window_ParamLimits

0xd554,	// (0x0003c681) popup_query_data_window

0xd5c8,	// (0x0003c6f5) popup_query_sat_info_window_ParamLimits

0xd5c8,	// (0x0003c6f5) popup_query_sat_info_window

0xd655,	// (0x0003c782) popup_snote_single_graphic_window_ParamLimits

0xd655,	// (0x0003c782) popup_snote_single_graphic_window

0xd655,	// (0x0003c782) popup_snote_single_text_window_ParamLimits

0xd655,	// (0x0003c782) popup_snote_single_text_window

0x52ca,	// (0x000343f7) popup_sub_window_general

0x53ce,	// (0x000344fb) popup_window_general_ParamLimits

0x53ce,	// (0x000344fb) popup_window_general

0x707a,	// (0x000361a7) power_save_pane

0xd06b,	// (0x0003c198) control_pane_g1_ParamLimits

0xd06b,	// (0x0003c198) control_pane_g1

0x4de1,	// (0x00033f0e) control_pane_g2_ParamLimits

0x4de1,	// (0x00033f0e) control_pane_g2

0x7024,	// (0x00036151) control_pane_g3_ParamLimits

0x7024,	// (0x00036151) control_pane_g3

0x0007,

0xf768,	// (0x0003e895) control_pane_g_ParamLimits

0xf768,	// (0x0003e895) control_pane_g

0xd0a0,	// (0x0003c1cd) control_pane_t1_ParamLimits

0xd0a0,	// (0x0003c1cd) control_pane_t1

0xd0fc,	// (0x0003c229) control_pane_t2_ParamLimits

0xd0fc,	// (0x0003c229) control_pane_t2

0x0002,

0xf779,	// (0x0003e8a6) control_pane_t_ParamLimits

0xf779,	// (0x0003e8a6) control_pane_t

0x6fcc,	// (0x000360f9) navi_navi_volume_pane_cp1

0x6fd4,	// (0x00036101) status_small_icon_pane

0x6fdc,	// (0x00036109) status_small_pane_g1_ParamLimits

0x6fdc,	// (0x00036109) status_small_pane_g1

0x0c9a,	// (0x0002fdc7) status_small_pane_g2_ParamLimits

0x0c9a,	// (0x0002fdc7) status_small_pane_g2

0x0ca6,	// (0x0002fdd3) status_small_pane_g3_ParamLimits

0x0ca6,	// (0x0002fdd3) status_small_pane_g3

0x0cb2,	// (0x0002fddf) status_small_pane_g4_ParamLimits

0x0cb2,	// (0x0002fddf) status_small_pane_g4

0x0cbe,	// (0x0002fdeb) status_small_pane_g5_ParamLimits

0x0cbe,	// (0x0002fdeb) status_small_pane_g5

0x7010,	// (0x0003613d) status_small_pane_g6_ParamLimits

0x7010,	// (0x0003613d) status_small_pane_g6

0x0007,

0xf757,	// (0x0003e884) status_small_pane_g_ParamLimits

0xf757,	// (0x0003e884) status_small_pane_g

0x0ced,	// (0x0002fe1a) status_small_pane_t1

0x0d07,	// (0x0002fe34) status_small_wait_pane_ParamLimits

0x0d07,	// (0x0002fe34) status_small_wait_pane

0x088a,	// (0x0002f9b7) aid_levels_signal_ParamLimits

0x088a,	// (0x0002f9b7) aid_levels_signal

0x089e,	// (0x0002f9cb) signal_pane_g1_ParamLimits

0x089e,	// (0x0002f9cb) signal_pane_g1

0x08b8,	// (0x0002f9e5) signal_pane_g2_ParamLimits

0x08b8,	// (0x0002f9e5) signal_pane_g2

0x0003,

0xf6e8,	// (0x0003e815) signal_pane_g_ParamLimits

0xf6e8,	// (0x0003e815) signal_pane_g

0x6a42,	// (0x00035b6f) context_pane_g1

0x00ef,	// (0x0002f21c) title_pane_g1

0x0131,	// (0x0002f25e) title_pane_t1

0x3d24,	// (0x00032e51) title_pane_t2

0x3d4a,	// (0x00032e77) title_pane_t3

0x0002,

0xf532,	// (0x0003e65f) title_pane_t

0x10c2,	// (0x000301ef) aid_levels_battery_ParamLimits

0x10c2,	// (0x000301ef) aid_levels_battery

0x10da,	// (0x00030207) battery_pane_g1_ParamLimits

0x10da,	// (0x00030207) battery_pane_g1

0x10f5,	// (0x00030222) battery_pane_g2_ParamLimits

0x10f5,	// (0x00030222) battery_pane_g2

0x0001,

0xf78b,	// (0x0003e8b8) battery_pane_g_ParamLimits

0xf78b,	// (0x0003e8b8) battery_pane_g

0x129b,	// (0x000303c8) uni_indicator_pane_g1

0x12af,	// (0x000303dc) uni_indicator_pane_g2

0x12c4,	// (0x000303f1) uni_indicator_pane_g3

0x0005,

0xf8f5,	// (0x0003ea22) uni_indicator_pane_g

0x455f,	// (0x0003368c) navi_icon_pane_ParamLimits

0x455f,	// (0x0003368c) navi_icon_pane

0x3bc8,	// (0x00032cf5) navi_midp_pane

0x3bc8,	// (0x00032cf5) navi_navi_pane

0x455f,	// (0x0003368c) navi_text_pane_ParamLimits

0x455f,	// (0x0003368c) navi_text_pane

0x3a09,	// (0x00032b36) status_small_wait_pane_g1

0x40e9,	// (0x00033216) status_small_wait_pane_g2

0x0001,

0xf8f0,	// (0x0003ea1d) status_small_wait_pane_g

0x1241,	// (0x0003036e) navi_navi_icon_text_pane

0x125b,	// (0x00030388) navi_navi_pane_g1_ParamLimits

0x125b,	// (0x00030388) navi_navi_pane_g1

0x1249,	// (0x00030376) navi_navi_pane_g2_ParamLimits

0x1249,	// (0x00030376) navi_navi_pane_g2

0x0001,

0xf8be,	// (0x0003e9eb) navi_navi_pane_g_ParamLimits

0xf8be,	// (0x0003e9eb) navi_navi_pane_g

0x126d,	// (0x0003039a) navi_navi_tabs_pane

0x1241,	// (0x0003036e) navi_navi_text_pane

0x1241,	// (0x0003036e) navi_navi_volume_pane

0x7ee6,	// (0x00037013) navi_text_pane_t1

0x7eda,	// (0x00037007) navi_icon_pane_g1

0x7e2e,	// (0x00036f5b) navi_navi_text_pane_t1

0x5635,	// (0x00034762) navi_navi_volume_pane_g1

0xd8a3,	// (0x0003c9d0) volume_small_pane

0x119d,	// (0x000302ca) navi_navi_icon_text_pane_g1

0x11a5,	// (0x000302d2) navi_navi_icon_text_pane_t1

0x79e8,	// (0x00036b15) navi_tabs_2_long_pane

0x79e8,	// (0x00036b15) navi_tabs_2_pane

0x79e8,	// (0x00036b15) navi_tabs_3_long_pane

0x79e8,	// (0x00036b15) navi_tabs_3_pane

0x79e8,	// (0x00036b15) navi_tabs_4_pane

0xd883,	// (0x0003c9b0) tabs_2_active_pane_ParamLimits

0xd883,	// (0x0003c9b0) tabs_2_active_pane

0xd893,	// (0x0003c9c0) tabs_2_passive_pane_ParamLimits

0xd893,	// (0x0003c9c0) tabs_2_passive_pane

0xd851,	// (0x0003c97e) tabs_3_active_pane_ParamLimits

0xd851,	// (0x0003c97e) tabs_3_active_pane

0xd861,	// (0x0003c98e) tabs_3_passive_pane_ParamLimits

0xd861,	// (0x0003c98e) tabs_3_passive_pane

0xd872,	// (0x0003c99f) tabs_3_passive_pane_cp_ParamLimits

0xd872,	// (0x0003c99f) tabs_3_passive_pane_cp

0xd80d,	// (0x0003c93a) tabs_4_active_pane_ParamLimits

0xd80d,	// (0x0003c93a) tabs_4_active_pane

0xd81e,	// (0x0003c94b) tabs_4_passive_pane_ParamLimits

0xd81e,	// (0x0003c94b) tabs_4_passive_pane

0xd82f,	// (0x0003c95c) tabs_4_passive_pane_cp_ParamLimits

0xd82f,	// (0x0003c95c) tabs_4_passive_pane_cp

0xd840,	// (0x0003c96d) tabs_4_passive_pane_cp2_ParamLimits

0xd840,	// (0x0003c96d) tabs_4_passive_pane_cp2

0xd7ed,	// (0x0003c91a) tabs_2_long_active_pane_ParamLimits

0xd7ed,	// (0x0003c91a) tabs_2_long_active_pane

0xd7fd,	// (0x0003c92a) tabs_2_long_passive_pane_ParamLimits

0xd7fd,	// (0x0003c92a) tabs_2_long_passive_pane

0xd7b6,	// (0x0003c8e3) tabs_3_long_active_pane_ParamLimits

0xd7b6,	// (0x0003c8e3) tabs_3_long_active_pane

0xd7c9,	// (0x0003c8f6) tabs_3_long_passive_pane_ParamLimits

0xd7c9,	// (0x0003c8f6) tabs_3_long_passive_pane

0xd7da,	// (0x0003c907) tabs_3_long_passive_pane_cp_ParamLimits

0xd7da,	// (0x0003c907) tabs_3_long_passive_pane_cp

0x54f0,	// (0x0003461d) volume_small_pane_g1

0x54f9,	// (0x00034626) volume_small_pane_g2

0x5502,	// (0x0003462f) volume_small_pane_g3

0x550b,	// (0x00034638) volume_small_pane_g4

0x5514,	// (0x00034641) volume_small_pane_g5

0x551d,	// (0x0003464a) volume_small_pane_g6

0x5526,	// (0x00034653) volume_small_pane_g7

0x552f,	// (0x0003465c) volume_small_pane_g8

0x5538,	// (0x00034665) volume_small_pane_g9

0x5541,	// (0x0003466e) volume_small_pane_g10

0x0009,

0xf88a,	// (0x0003e9b7) volume_small_pane_g

0x3f21,	// (0x0003304e) bg_active_tab_pane_cp2_ParamLimits

0x3f21,	// (0x0003304e) bg_active_tab_pane_cp2

0x3d6a,	// (0x00032e97) tabs_3_active_pane_g1

0x01be,	// (0x0002f2eb) tabs_3_active_pane_t1

0x3f21,	// (0x0003304e) bg_passive_tab_pane_cp2_ParamLimits

0x3f21,	// (0x0003304e) bg_passive_tab_pane_cp2

0x3d6a,	// (0x00032e97) tabs_3_passive_pane_g1

0x01be,	// (0x0002f2eb) tabs_3_passive_pane_t1

0x3f21,	// (0x0003304e) bg_active_tab_pane_cp3_ParamLimits

0x3f21,	// (0x0003304e) bg_active_tab_pane_cp3

0x840f,	// (0x0003753c) tabs_4_active_pane_g1

0x01d4,	// (0x0002f301) tabs_4_active_pane_t1

0x3f21,	// (0x0003304e) bg_passive_tab_pane_cp3_ParamLimits

0x3f21,	// (0x0003304e) bg_passive_tab_pane_cp3

0x840f,	// (0x0003753c) tabs_4_1_passive_pane_g1

0x01d4,	// (0x0002f301) tabs_4_1_passive_pane_t1

0x4f49,	// (0x00034076) list_highlight_pane_cp2

0x130d,	// (0x0003043a) list_set_pane_ParamLimits

0x130d,	// (0x0003043a) list_set_pane

0x139b,	// (0x000304c8) main_pane_set_t1_ParamLimits

0x139b,	// (0x000304c8) main_pane_set_t1

0x13bb,	// (0x000304e8) main_pane_set_t2_ParamLimits

0x13bb,	// (0x000304e8) main_pane_set_t2

0x13cf,	// (0x000304fc) main_pane_set_t3_ParamLimits

0x13cf,	// (0x000304fc) main_pane_set_t3

0x13e1,	// (0x0003050e) main_pane_set_t4_ParamLimits

0x13e1,	// (0x0003050e) main_pane_set_t4

0x0003,

0xf95a,	// (0x0003ea87) main_pane_set_t_ParamLimits

0xf95a,	// (0x0003ea87) main_pane_set_t

0x13f3,	// (0x00030520) setting_code_pane

0x13fb,	// (0x00030528) setting_slider_graphic_pane

0x13fb,	// (0x00030528) setting_slider_pane

0x13fb,	// (0x00030528) setting_text_pane

0x13fb,	// (0x00030528) setting_volume_pane

0xcf8a,	// (0x0003c0b7) volume_set_pane

0x3d5c,	// (0x00032e89) bg_set_opt_pane_cp

0x3d7a,	// (0x00032ea7) setting_slider_pane_t1

0xcf92,	// (0x0003c0bf) setting_slider_pane_t2

0xcfab,	// (0x0003c0d8) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0003e666) setting_slider_pane_t

0x3dc0,	// (0x00032eed) slider_set_pane

0x3bc8,	// (0x00032cf5) bg_set_opt_pane_cp2

0x3dd6,	// (0x00032f03) setting_slider_graphic_pane_g1

0xcfc2,	// (0x0003c0ef) setting_slider_graphic_pane_t1

0xcfd1,	// (0x0003c0fe) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0003e66d) setting_slider_graphic_pane_t

0xcfe0,	// (0x0003c10d) slider_set_pane_cp

0x3bc8,	// (0x00032cf5) input_focus_pane_cp1

0x8357,	// (0x00037484) list_set_text_pane

0x3a09,	// (0x00032b36) setting_text_pane_g1

0x3bc8,	// (0x00032cf5) input_focus_pane_cp2

0x3a09,	// (0x00032b36) setting_code_pane_g1

0x3e05,	// (0x00032f32) setting_code_pane_t1

0xc6ab,	// (0x0003b7d8) set_text_pane_t1_ParamLimits

0xc6ab,	// (0x0003b7d8) set_text_pane_t1

0x44ad,	// (0x000335da) set_opt_bg_pane_g1

0x44b5,	// (0x000335e2) set_opt_bg_pane_g2

0x12d9,	// (0x00030406) set_opt_bg_pane_g3

0x44c5,	// (0x000335f2) set_opt_bg_pane_g4

0x44cd,	// (0x000335fa) set_opt_bg_pane_g5

0x44d5,	// (0x00033602) set_opt_bg_pane_g6

0x12e1,	// (0x0003040e) set_opt_bg_pane_g7

0x12e9,	// (0x00030416) set_opt_bg_pane_g8

0x12f1,	// (0x0003041e) set_opt_bg_pane_g9

0x0008,

0xf947,	// (0x0003ea74) set_opt_bg_pane_g

0x834a,	// (0x00037477) slider_set_pane_g1

0x56aa,	// (0x000347d7) slider_set_pane_g2

0x0006,

0xf938,	// (0x0003ea65) slider_set_pane_g

0xd8ac,	// (0x0003c9d9) volume_set_pane_g1

0xd8b4,	// (0x0003c9e1) volume_set_pane_g2

0xd8bc,	// (0x0003c9e9) volume_set_pane_g3

0xd8c4,	// (0x0003c9f1) volume_set_pane_g4

0xd8cc,	// (0x0003c9f9) volume_set_pane_g5

0xd8d4,	// (0x0003ca01) volume_set_pane_g6

0xd8dc,	// (0x0003ca09) volume_set_pane_g7

0xd8e4,	// (0x0003ca11) volume_set_pane_g8

0xd8ec,	// (0x0003ca19) volume_set_pane_g9

0xd8f4,	// (0x0003ca21) volume_set_pane_g10

0x0009,

0xf910,	// (0x0003ea3d) volume_set_pane_g

0x0204,	// (0x0002f331) indicator_pane_ParamLimits

0x0204,	// (0x0002f331) indicator_pane

0x022c,	// (0x0002f359) main_idle_pane_g2_ParamLimits

0x022c,	// (0x0002f359) main_idle_pane_g2

0x025c,	// (0x0002f389) main_pane_idle_g1_ParamLimits

0x025c,	// (0x0002f389) main_pane_idle_g1

0x3e13,	// (0x00032f40) popup_clock_digital_analogue_window_ParamLimits

0x3e13,	// (0x00032f40) popup_clock_digital_analogue_window

0x0281,	// (0x0002f3ae) soft_indicator_pane_ParamLimits

0x0281,	// (0x0002f3ae) soft_indicator_pane

0x029b,	// (0x0002f3c8) wallpaper_pane_ParamLimits

0x029b,	// (0x0002f3c8) wallpaper_pane

0x3a09,	// (0x00032b36) wallpaper_pane_g1

0x02ad,	// (0x0002f3da) indicator_pane_g1_ParamLimits

0x02ad,	// (0x0002f3da) indicator_pane_g1

0x847a,	// (0x000375a7) navi_navi_icon_text_pane_srt_g1

0x3e41,	// (0x00032f6e) soft_indicator_pane_t1

0x3e5b,	// (0x00032f88) aid_ps_area_pane

0x02c6,	// (0x0002f3f3) aid_ps_clock_pane

0x3e6c,	// (0x00032f99) aid_ps_indicator_pane

0x3e78,	// (0x00032fa5) indicator_ps_pane_ParamLimits

0x3e78,	// (0x00032fa5) indicator_ps_pane

0x3e87,	// (0x00032fb4) power_save_pane_g1_ParamLimits

0x3e87,	// (0x00032fb4) power_save_pane_g1

0x3e93,	// (0x00032fc0) power_save_pane_g2_ParamLimits

0x3e93,	// (0x00032fc0) power_save_pane_g2

0x3a13,	// (0x00032b40) aid_navinavi_width_pane

0x3e5b,	// (0x00032f88) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0003e672) power_save_pane_g_ParamLimits

0xf545,	// (0x0003e672) power_save_pane_g

0x3ea1,	// (0x00032fce) power_save_pane_t1_ParamLimits

0x3ea1,	// (0x00032fce) power_save_pane_t1

0x02c6,	// (0x0002f3f3) aid_ps_clock_pane_ParamLimits

0x3e6c,	// (0x00032f99) aid_ps_indicator_pane_ParamLimits

0x3eb3,	// (0x00032fe0) power_save_pane_t4_ParamLimits

0x3eb3,	// (0x00032fe0) power_save_pane_t4

0x0001,

0xf54a,	// (0x0003e677) power_save_pane_t_ParamLimits

0xf54a,	// (0x0003e677) power_save_pane_t

0x3edd,	// (0x0003300a) power_save_t3_ParamLimits

0x3edd,	// (0x0003300a) power_save_t3

0x3ec8,	// (0x00032ff5) power_save_t2_ParamLimits

0x3ec8,	// (0x00032ff5) power_save_t2

0x3ef2,	// (0x0003301f) indicator_ps_pane_g1

0x02d2,	// (0x0002f3ff) ai_gene_pane_ParamLimits

0x02d2,	// (0x0002f3ff) ai_gene_pane

0x02e9,	// (0x0002f416) ai_links_pane_ParamLimits

0x02e9,	// (0x0002f416) ai_links_pane

0x02fb,	// (0x0002f428) indicator_pane_cp1_ParamLimits

0x02fb,	// (0x0002f428) indicator_pane_cp1

0x030a,	// (0x0002f437) main_pane_idle_g1_cp_ParamLimits

0x030a,	// (0x0002f437) main_pane_idle_g1_cp

0x3efb,	// (0x00033028) popup_ai_links_title_window

0x0322,	// (0x0002f44f) soft_indicator_pane_cp1_ParamLimits

0x0322,	// (0x0002f44f) soft_indicator_pane_cp1

0x81a0,	// (0x000372cd) ai_links_pane_g1

0x81a9,	// (0x000372d6) grid_ai_links_pane

0x1292,	// (0x000303bf) ai_gene_pane_1

0x818e,	// (0x000372bb) ai_gene_pane_2

0x8197,	// (0x000372c4) list_highlight_pane_cp4

0x1276,	// (0x000303a3) cell_ai_link_pane_ParamLimits

0x1276,	// (0x000303a3) cell_ai_link_pane

0x8186,	// (0x000372b3) cell_ai_link_pane_g1

0x40e9,	// (0x00033216) cell_ai_link_pane_g2

0x0001,

0xf8eb,	// (0x0003ea18) cell_ai_link_pane_g

0x3bc8,	// (0x00032cf5) grid_highlight_cp2

0x3bc8,	// (0x00032cf5) bg_popup_sub_pane_cp1

0x3f12,	// (0x0003303f) popup_ai_links_title_window_t1

0x80d8,	// (0x00037205) ai_gene_pane_1_g1_ParamLimits

0x80d8,	// (0x00037205) ai_gene_pane_1_g1

0x80e4,	// (0x00037211) ai_gene_pane_1_g2_ParamLimits

0x80e4,	// (0x00037211) ai_gene_pane_1_g2

0x0001,

0xf8e1,	// (0x0003ea0e) ai_gene_pane_1_g_ParamLimits

0xf8e1,	// (0x0003ea0e) ai_gene_pane_1_g

0x80f1,	// (0x0003721e) ai_gene_pane_1_t1_ParamLimits

0x80f1,	// (0x0003721e) ai_gene_pane_1_t1

0x8125,	// (0x00037252) grid_ai_soft_ind_pane

0x80c3,	// (0x000371f0) ai_gene_pane_2_t1_ParamLimits

0x80c3,	// (0x000371f0) ai_gene_pane_2_t1

0x0336,	// (0x0002f463) main_pane_empty_t1_ParamLimits

0x0336,	// (0x0002f463) main_pane_empty_t1

0x0353,	// (0x0002f480) main_pane_empty_t2_ParamLimits

0x0353,	// (0x0002f480) main_pane_empty_t2

0x036b,	// (0x0002f498) main_pane_empty_t3_ParamLimits

0x036b,	// (0x0002f498) main_pane_empty_t3

0x037e,	// (0x0002f4ab) main_pane_empty_t4_ParamLimits

0x037e,	// (0x0002f4ab) main_pane_empty_t4

0x0391,	// (0x0002f4be) main_pane_empty_t5_ParamLimits

0x0391,	// (0x0002f4be) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0003e67c) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0003e67c) main_pane_empty_t

0x455f,	// (0x0003368c) bg_popup_window_pane_ParamLimits

0x455f,	// (0x0003368c) bg_popup_window_pane

0x7e3d,	// (0x00036f6a) find_popup_pane_cp2_ParamLimits

0x7e3d,	// (0x00036f6a) find_popup_pane_cp2

0x7e49,	// (0x00036f76) heading_pane_ParamLimits

0x7e49,	// (0x00036f76) heading_pane

0x3bc8,	// (0x00032cf5) bg_popup_sub_pane

0x11c2,	// (0x000302ef) bg_popup_window_pane_g1_ParamLimits

0x11c2,	// (0x000302ef) bg_popup_window_pane_g1

0x11d1,	// (0x000302fe) bg_popup_window_pane_g2_ParamLimits

0x11d1,	// (0x000302fe) bg_popup_window_pane_g2

0x11dd,	// (0x0003030a) bg_popup_window_pane_g3_ParamLimits

0x11dd,	// (0x0003030a) bg_popup_window_pane_g3

0x11e9,	// (0x00030316) bg_popup_window_pane_g4_ParamLimits

0x11e9,	// (0x00030316) bg_popup_window_pane_g4

0x11f8,	// (0x00030325) bg_popup_window_pane_g5_ParamLimits

0x11f8,	// (0x00030325) bg_popup_window_pane_g5

0x1208,	// (0x00030335) bg_popup_window_pane_g6_ParamLimits

0x1208,	// (0x00030335) bg_popup_window_pane_g6

0x1214,	// (0x00030341) bg_popup_window_pane_g7_ParamLimits

0x1214,	// (0x00030341) bg_popup_window_pane_g7

0x1223,	// (0x00030350) bg_popup_window_pane_g8_ParamLimits

0x1223,	// (0x00030350) bg_popup_window_pane_g8

0x1232,	// (0x0003035f) bg_popup_window_pane_g9_ParamLimits

0x1232,	// (0x0003035f) bg_popup_window_pane_g9

0x7e22,	// (0x00036f4f) bg_popup_window_pane_g10_ParamLimits

0x7e22,	// (0x00036f4f) bg_popup_window_pane_g10

0x0009,

0xf8a9,	// (0x0003e9d6) bg_popup_window_pane_g_ParamLimits

0xf8a9,	// (0x0003e9d6) bg_popup_window_pane_g

0x7dd9,	// (0x00036f06) bg_popup_heading_pane_ParamLimits

0x7dd9,	// (0x00036f06) bg_popup_heading_pane

0x57a0,	// (0x000348cd) tabs_4_passive_pane_cp_srt_ParamLimits

0x57a0,	// (0x000348cd) tabs_4_passive_pane_cp_srt

0x57b2,	// (0x000348df) tabs_4_passive_pane_srt_ParamLimits

0x7ded,	// (0x00036f1a) heading_pane_g2

0x57b2,	// (0x000348df) tabs_4_passive_pane_srt

0x72a9,	// (0x000363d6) bg_passive_tab_pane_cp3_srt_ParamLimits

0x72a9,	// (0x000363d6) bg_passive_tab_pane_cp3_srt

0x7df5,	// (0x00036f22) heading_pane_t1_ParamLimits

0x7df5,	// (0x00036f22) heading_pane_t1

0x7e0c,	// (0x00036f39) heading_pane_t2_ParamLimits

0x7e0c,	// (0x00036f39) heading_pane_t2

0x0001,

0xf8a4,	// (0x0003e9d1) heading_pane_t_ParamLimits

0xf8a4,	// (0x0003e9d1) heading_pane_t

0x7968,	// (0x00036a95) bg_popup_heading_pane_g1

0x79f9,	// (0x00036b26) bg_popup_heading_pane_g2

0x7a01,	// (0x00036b2e) bg_popup_heading_pane_g3

0x7a09,	// (0x00036b36) bg_popup_heading_pane_g4

0x7a11,	// (0x00036b3e) bg_popup_heading_pane_g5

0x7a19,	// (0x00036b46) bg_popup_heading_pane_g6

0x7a21,	// (0x00036b4e) bg_popup_heading_pane_g7

0x7a29,	// (0x00036b56) bg_popup_heading_pane_g8

0x7a31,	// (0x00036b5e) bg_popup_heading_pane_g9

0x0008,

0xf860,	// (0x0003e98d) bg_popup_heading_pane_g

0x7229,	// (0x00036356) bg_popup_sub_pane_g1

0x7231,	// (0x0003635e) bg_popup_sub_pane_g2

0x7239,	// (0x00036366) bg_popup_sub_pane_g3

0x7241,	// (0x0003636e) bg_popup_sub_pane_g4

0x7249,	// (0x00036376) bg_popup_sub_pane_g5

0x7251,	// (0x0003637e) bg_popup_sub_pane_g6

0x7259,	// (0x00036386) bg_popup_sub_pane_g7

0x7261,	// (0x0003638e) bg_popup_sub_pane_g8

0x7269,	// (0x00036396) bg_popup_sub_pane_g9

0x0008,

0xf83a,	// (0x0003e967) bg_popup_sub_pane_g

0x3f21,	// (0x0003304e) bg_popup_window_pane_cp5_ParamLimits

0x3f21,	// (0x0003304e) bg_popup_window_pane_cp5

0x3f3d,	// (0x0003306a) popup_note_window_g1_ParamLimits

0x3f3d,	// (0x0003306a) popup_note_window_g1

0x3f49,	// (0x00033076) popup_note_window_t1_ParamLimits

0x3f49,	// (0x00033076) popup_note_window_t1

0x3f5f,	// (0x0003308c) popup_note_window_t2_ParamLimits

0x3f5f,	// (0x0003308c) popup_note_window_t2

0x3f75,	// (0x000330a2) popup_note_window_t3_ParamLimits

0x3f75,	// (0x000330a2) popup_note_window_t3

0x3f8b,	// (0x000330b8) popup_note_window_t4_ParamLimits

0x3f8b,	// (0x000330b8) popup_note_window_t4

0x3fb3,	// (0x000330e0) popup_note_window_t5_ParamLimits

0x3fb3,	// (0x000330e0) popup_note_window_t5

0x0004,

0xf55a,	// (0x0003e687) popup_note_window_t_ParamLimits

0xf55a,	// (0x0003e687) popup_note_window_t

0x3ffd,	// (0x0003312a) bg_popup_window_pane_cp6_ParamLimits

0x3ffd,	// (0x0003312a) bg_popup_window_pane_cp6

0x78e4,	// (0x00036a11) popup_note_image_window_g1_ParamLimits

0x78e4,	// (0x00036a11) popup_note_image_window_g1

0x78f0,	// (0x00036a1d) popup_note_image_window_g2_ParamLimits

0x78f0,	// (0x00036a1d) popup_note_image_window_g2

0x0001,

0xf82e,	// (0x0003e95b) popup_note_image_window_g_ParamLimits

0xf82e,	// (0x0003e95b) popup_note_image_window_g

0x7909,	// (0x00036a36) popup_note_image_window_t1_ParamLimits

0x7909,	// (0x00036a36) popup_note_image_window_t1

0x7922,	// (0x00036a4f) popup_note_image_window_t2_ParamLimits

0x7922,	// (0x00036a4f) popup_note_image_window_t2

0x793b,	// (0x00036a68) popup_note_image_window_t3_ParamLimits

0x793b,	// (0x00036a68) popup_note_image_window_t3

0x0002,

0xf833,	// (0x0003e960) popup_note_image_window_t_ParamLimits

0xf833,	// (0x0003e960) popup_note_image_window_t

0x77cf,	// (0x000368fc) bg_popup_window_pane_cp7_ParamLimits

0x77cf,	// (0x000368fc) bg_popup_window_pane_cp7

0x77ff,	// (0x0003692c) popup_note_wait_window_g1_ParamLimits

0x77ff,	// (0x0003692c) popup_note_wait_window_g1

0x780b,	// (0x00036938) popup_note_wait_window_g2_ParamLimits

0x780b,	// (0x00036938) popup_note_wait_window_g2

0x0002,

0xf81c,	// (0x0003e949) popup_note_wait_window_g_ParamLimits

0xf81c,	// (0x0003e949) popup_note_wait_window_g

0x7823,	// (0x00036950) popup_note_wait_window_t1_ParamLimits

0x7823,	// (0x00036950) popup_note_wait_window_t1

0x784a,	// (0x00036977) popup_note_wait_window_t2_ParamLimits

0x784a,	// (0x00036977) popup_note_wait_window_t2

0x7867,	// (0x00036994) popup_note_wait_window_t3_ParamLimits

0x7867,	// (0x00036994) popup_note_wait_window_t3

0x787a,	// (0x000369a7) popup_note_wait_window_t4_ParamLimits

0x787a,	// (0x000369a7) popup_note_wait_window_t4

0x0004,

0xf823,	// (0x0003e950) popup_note_wait_window_t_ParamLimits

0xf823,	// (0x0003e950) popup_note_wait_window_t

0x789f,	// (0x000369cc) wait_bar_pane_ParamLimits

0x789f,	// (0x000369cc) wait_bar_pane

0x3bc8,	// (0x00032cf5) wait_anim_pane

0x3bc8,	// (0x00032cf5) wait_border_pane

0x3a09,	// (0x00032b36) wait_anim_pane_g1

0x3a09,	// (0x00032b36) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0003e810) wait_anim_pane_g

0x777f,	// (0x000368ac) wait_border_pane_g1

0x7788,	// (0x000368b5) wait_border_pane_g2

0x7791,	// (0x000368be) wait_border_pane_g3

0x0002,

0xf815,	// (0x0003e942) wait_border_pane_g

0x75ef,	// (0x0003671c) bg_popup_window_pane_cp16_ParamLimits

0x75ef,	// (0x0003671c) bg_popup_window_pane_cp16

0x76ef,	// (0x0003681c) indicator_popup_pane_cp4_ParamLimits

0x76ef,	// (0x0003681c) indicator_popup_pane_cp4

0x7703,	// (0x00036830) popup_query_data_window_t1_ParamLimits

0x7703,	// (0x00036830) popup_query_data_window_t1

0x7715,	// (0x00036842) popup_query_data_window_t2_ParamLimits

0x7715,	// (0x00036842) popup_query_data_window_t2

0x772e,	// (0x0003685b) popup_query_data_window_t3_ParamLimits

0x772e,	// (0x0003685b) popup_query_data_window_t3

0x0002,

0xf80e,	// (0x0003e93b) popup_query_data_window_t_ParamLimits

0xf80e,	// (0x0003e93b) popup_query_data_window_t

0x7748,	// (0x00036875) query_popup_data_pane_ParamLimits

0x7748,	// (0x00036875) query_popup_data_pane

0x775c,	// (0x00036889) query_popup_data_pane_cp1_ParamLimits

0x775c,	// (0x00036889) query_popup_data_pane_cp1

0x75ef,	// (0x0003671c) bg_popup_window_pane_cp10_ParamLimits

0x75ef,	// (0x0003671c) bg_popup_window_pane_cp10

0x7621,	// (0x0003674e) indicator_popup_pane_ParamLimits

0x7621,	// (0x0003674e) indicator_popup_pane

0x7643,	// (0x00036770) popup_query_code_window_t1_ParamLimits

0x7643,	// (0x00036770) popup_query_code_window_t1

0x765d,	// (0x0003678a) popup_query_code_window_t2_ParamLimits

0x765d,	// (0x0003678a) popup_query_code_window_t2

0x76a6,	// (0x000367d3) popup_query_code_window_t3_ParamLimits

0x76a6,	// (0x000367d3) popup_query_code_window_t3

0x0002,

0xf807,	// (0x0003e934) popup_query_code_window_t_ParamLimits

0xf807,	// (0x0003e934) popup_query_code_window_t

0x76d5,	// (0x00036802) query_popup_pane_ParamLimits

0x76d5,	// (0x00036802) query_popup_pane

0x3ffd,	// (0x0003312a) bg_popup_window_pane_cp15_ParamLimits

0x3ffd,	// (0x0003312a) bg_popup_window_pane_cp15

0x401b,	// (0x00033148) indicator_popup_pane_cp1_ParamLimits

0x401b,	// (0x00033148) indicator_popup_pane_cp1

0x402e,	// (0x0003315b) indicator_popup_pane_cp2_ParamLimits

0x402e,	// (0x0003315b) indicator_popup_pane_cp2

0x4041,	// (0x0003316e) popup_query_data_code_window_g1_ParamLimits

0x4041,	// (0x0003316e) popup_query_data_code_window_g1

0x4054,	// (0x00033181) popup_query_data_code_window_t1_ParamLimits

0x4054,	// (0x00033181) popup_query_data_code_window_t1

0x4066,	// (0x00033193) popup_query_data_code_window_t2_ParamLimits

0x4066,	// (0x00033193) popup_query_data_code_window_t2

0x4078,	// (0x000331a5) popup_query_data_code_window_t3_ParamLimits

0x4078,	// (0x000331a5) popup_query_data_code_window_t3

0x408e,	// (0x000331bb) popup_query_data_code_window_t4_ParamLimits

0x408e,	// (0x000331bb) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0003e692) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0003e692) popup_query_data_code_window_t

0x6d1e,	// (0x00035e4b) list_single_midp_graphic_pane_g3

0x40a6,	// (0x000331d3) query_popup_data_pane_cp2_ParamLimits

0x40b9,	// (0x000331e6) query_popup_pane_cp2_ParamLimits

0x40b9,	// (0x000331e6) query_popup_pane_cp2

0x3bc8,	// (0x00032cf5) bg_popup_window_pane_cp11

0x75d3,	// (0x00036700) heading_pane_cp5

0x75db,	// (0x00036708) listscroll_popup_info_pane

0x3bc8,	// (0x00032cf5) input_focus_pane_cp3

0x40cc,	// (0x000331f9) query_popup_pane_t1

0x40da,	// (0x00033207) list_popup_info_pane_ParamLimits

0x40da,	// (0x00033207) list_popup_info_pane

0x40e9,	// (0x00033216) listscroll_popup_info_pane_g1

0x40f1,	// (0x0003321e) scroll_pane_cp7

0x40f9,	// (0x00033226) popup_info_list_pane_t1_ParamLimits

0x40f9,	// (0x00033226) popup_info_list_pane_t1

0x4113,	// (0x00033240) popup_info_list_pane_t2_ParamLimits

0x4113,	// (0x00033240) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0003e69b) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0003e69b) popup_info_list_pane_t

0x3bc8,	// (0x00032cf5) bg_popup_window_pane_cp12

0x8494,	// (0x000375c1) find_popup_pane

0x3d5c,	// (0x00032e89) bg_popup_window_pane_cp3

0x412d,	// (0x0003325a) heading_pane_cp3

0x413c,	// (0x00033269) listscroll_popup_graphic_pane

0x3bc8,	// (0x00032cf5) bg_popup_window_pane_cp4

0x03f4,	// (0x0002f521) heading_pane_cp4

0x414b,	// (0x00033278) listscroll_popup_colour_pane

0x4153,	// (0x00033280) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x4153,	// (0x00033280) cell_large_graphic_colour_none_popup_pane

0x03fc,	// (0x0002f529) grid_large_graphic_colour_popup_pane_ParamLimits

0x03fc,	// (0x0002f529) grid_large_graphic_colour_popup_pane

0x0418,	// (0x0002f545) listscroll_popup_colour_pane_g1_ParamLimits

0x0418,	// (0x0002f545) listscroll_popup_colour_pane_g1

0x042f,	// (0x0002f55c) listscroll_popup_colour_pane_g2_ParamLimits

0x042f,	// (0x0002f55c) listscroll_popup_colour_pane_g2

0x4163,	// (0x00033290) listscroll_popup_colour_pane_g3_ParamLimits

0x4163,	// (0x00033290) listscroll_popup_colour_pane_g3

0x0443,	// (0x0002f570) listscroll_popup_colour_pane_g4_ParamLimits

0x0443,	// (0x0002f570) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0003e6a0) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0003e6a0) listscroll_popup_colour_pane_g

0x4173,	// (0x000332a0) scroll_pane_cp6_ParamLimits

0x4173,	// (0x000332a0) scroll_pane_cp6

0x0452,	// (0x0002f57f) cell_large_graphic_colour_popup_pane_ParamLimits

0x0452,	// (0x0002f57f) cell_large_graphic_colour_popup_pane

0x4185,	// (0x000332b2) cell_large_graphic_colour_none_popup_pane_t1

0x3bc8,	// (0x00032cf5) grid_highlight_pane_cp5

0x4194,	// (0x000332c1) cell_large_graphic_colour_popup_pane_g1

0x419c,	// (0x000332c9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0003e6a9) cell_large_graphic_colour_popup_pane_g

0x41a4,	// (0x000332d1) cell_large_graphic_colour_popup_pane_g2_copy1

0x41ad,	// (0x000332da) grid_highlight_pane_cp4

0x41b5,	// (0x000332e2) bg_popup_window_pane_cp8_ParamLimits

0x41b5,	// (0x000332e2) bg_popup_window_pane_cp8

0x41d0,	// (0x000332fd) popup_snote_single_text_window_g1_ParamLimits

0x41d0,	// (0x000332fd) popup_snote_single_text_window_g1

0x41e2,	// (0x0003330f) popup_snote_single_text_window_t1_ParamLimits

0x41e2,	// (0x0003330f) popup_snote_single_text_window_t1

0x41f5,	// (0x00033322) popup_snote_single_text_window_t2_ParamLimits

0x41f5,	// (0x00033322) popup_snote_single_text_window_t2

0x4208,	// (0x00033335) popup_snote_single_text_window_t3_ParamLimits

0x4208,	// (0x00033335) popup_snote_single_text_window_t3

0x4241,	// (0x0003336e) popup_snote_single_text_window_t4_ParamLimits

0x4241,	// (0x0003336e) popup_snote_single_text_window_t4

0x4275,	// (0x000333a2) popup_snote_single_text_window_t5_ParamLimits

0x4275,	// (0x000333a2) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0003e6ae) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0003e6ae) popup_snote_single_text_window_t

0x42a4,	// (0x000333d1) bg_popup_window_pane_cp9_ParamLimits

0x42a4,	// (0x000333d1) bg_popup_window_pane_cp9

0x41d0,	// (0x000332fd) popup_snote_single_graphic_window_g1_ParamLimits

0x41d0,	// (0x000332fd) popup_snote_single_graphic_window_g1

0x42b2,	// (0x000333df) popup_snote_single_graphic_window_g2_ParamLimits

0x42b2,	// (0x000333df) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0003e6b9) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0003e6b9) popup_snote_single_graphic_window_g

0x42be,	// (0x000333eb) popup_snote_single_graphic_window_t1_ParamLimits

0x42be,	// (0x000333eb) popup_snote_single_graphic_window_t1

0x42d1,	// (0x000333fe) popup_snote_single_graphic_window_t2_ParamLimits

0x42d1,	// (0x000333fe) popup_snote_single_graphic_window_t2

0x4208,	// (0x00033335) popup_snote_single_graphic_window_t3_ParamLimits

0x4208,	// (0x00033335) popup_snote_single_graphic_window_t3

0x4241,	// (0x0003336e) popup_snote_single_graphic_window_t4_ParamLimits

0x4241,	// (0x0003336e) popup_snote_single_graphic_window_t4

0x4275,	// (0x000333a2) popup_snote_single_graphic_window_t5_ParamLimits

0x4275,	// (0x000333a2) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0003e6be) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0003e6be) popup_snote_single_graphic_window_t

0x14c0,	// (0x000305ed) grid_graphic_popup_pane_ParamLimits

0x14c0,	// (0x000305ed) grid_graphic_popup_pane

0x14e3,	// (0x00030610) listscroll_popup_graphic_pane_g1_ParamLimits

0x14e3,	// (0x00030610) listscroll_popup_graphic_pane_g1

0x14f7,	// (0x00030624) listscroll_popup_graphic_pane_g2_ParamLimits

0x14f7,	// (0x00030624) listscroll_popup_graphic_pane_g2

0x0001,

0xf984,	// (0x0003eab1) listscroll_popup_graphic_pane_g_ParamLimits

0xf984,	// (0x0003eab1) listscroll_popup_graphic_pane_g

0x844c,	// (0x00037579) scroll_pane_cp5

0x147c,	// (0x000305a9) cell_graphic_popup_pane_ParamLimits

0x147c,	// (0x000305a9) cell_graphic_popup_pane

0x8417,	// (0x00037544) cell_graphic_popup_pane_g1

0x841f,	// (0x0003754c) cell_graphic_popup_pane_g2

0x41a4,	// (0x000332d1) cell_graphic_popup_pane_g3

0x0002,

0xf97d,	// (0x0003eaaa) cell_graphic_popup_pane_g

0x8428,	// (0x00037555) cell_graphic_popup_pane_t2

0x41ad,	// (0x000332da) grid_highlight_pane_cp3

0x42f6,	// (0x00033423) list_gen_pane_ParamLimits

0x42f6,	// (0x00033423) list_gen_pane

0x431f,	// (0x0003344c) scroll_pane

0x144f,	// (0x0003057c) bg_list_pane_g1_ParamLimits

0x144f,	// (0x0003057c) bg_list_pane_g1

0x83c6,	// (0x000374f3) bg_list_pane_g2_ParamLimits

0x83c6,	// (0x000374f3) bg_list_pane_g2

0x83d9,	// (0x00037506) bg_list_pane_g3_ParamLimits

0x83d9,	// (0x00037506) bg_list_pane_g3

0x83eb,	// (0x00037518) bg_list_pane_g4_ParamLimits

0x83eb,	// (0x00037518) bg_list_pane_g4

0x146a,	// (0x00030597) bg_list_pane_g5_ParamLimits

0x146a,	// (0x00030597) bg_list_pane_g5

0x0004,

0xf972,	// (0x0003ea9f) bg_list_pane_g_ParamLimits

0xf972,	// (0x0003ea9f) bg_list_pane_g

0xd912,	// (0x0003ca3f) list_double2_graphic_large_graphic_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_double2_graphic_large_graphic_pane

0xd912,	// (0x0003ca3f) list_double2_graphic_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_double2_graphic_pane

0xd912,	// (0x0003ca3f) list_double2_large_graphic_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_double2_large_graphic_pane

0xd912,	// (0x0003ca3f) list_double2_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_double2_pane

0xd912,	// (0x0003ca3f) list_double_graphic_heading_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_double_graphic_heading_pane

0xd912,	// (0x0003ca3f) list_double_graphic_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_double_graphic_pane

0xd912,	// (0x0003ca3f) list_double_heading_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_double_heading_pane

0xd912,	// (0x0003ca3f) list_double_large_graphic_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_double_large_graphic_pane

0xd912,	// (0x0003ca3f) list_double_number_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_double_number_pane

0xd912,	// (0x0003ca3f) list_double_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_double_pane

0xd912,	// (0x0003ca3f) list_double_time_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_double_time_pane

0xd912,	// (0x0003ca3f) list_setting_number_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_setting_number_pane

0xd912,	// (0x0003ca3f) list_setting_pane_ParamLimits

0xd912,	// (0x0003ca3f) list_setting_pane

0xccd7,	// (0x0003be04) list_single_2graphic_pane_ParamLimits

0xccd7,	// (0x0003be04) list_single_2graphic_pane

0xccd7,	// (0x0003be04) list_single_graphic_heading_pane_ParamLimits

0xccd7,	// (0x0003be04) list_single_graphic_heading_pane

0xccd7,	// (0x0003be04) list_single_graphic_pane_ParamLimits

0xccd7,	// (0x0003be04) list_single_graphic_pane

0xccd7,	// (0x0003be04) list_single_heading_pane_ParamLimits

0xccd7,	// (0x0003be04) list_single_heading_pane

0x1428,	// (0x00030555) list_single_large_graphic_pane_ParamLimits

0x1428,	// (0x00030555) list_single_large_graphic_pane

0xccd7,	// (0x0003be04) list_single_number_heading_pane_ParamLimits

0xccd7,	// (0x0003be04) list_single_number_heading_pane

0xccd7,	// (0x0003be04) list_single_number_pane_ParamLimits

0xccd7,	// (0x0003be04) list_single_number_pane

0xccd7,	// (0x0003be04) list_single_pane_ParamLimits

0xccd7,	// (0x0003be04) list_single_pane

0x3bc8,	// (0x00032cf5) list_highlight_pane_cp1

0x43dd,	// (0x0003350a) list_single_pane_g1_ParamLimits

0x43dd,	// (0x0003350a) list_single_pane_g1

0x43e9,	// (0x00033516) list_single_pane_g2_ParamLimits

0x43e9,	// (0x00033516) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0003e6da) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0003e6da) list_single_pane_g

0x352b,	// (0x00032658) list_single_pane_t1_ParamLimits

0x352b,	// (0x00032658) list_single_pane_t1

0x43dd,	// (0x0003350a) list_single_number_pane_g1_ParamLimits

0x43dd,	// (0x0003350a) list_single_number_pane_g1

0x43e9,	// (0x00033516) list_single_number_pane_g2_ParamLimits

0x43e9,	// (0x00033516) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0003e6da) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0003e6da) list_single_number_pane_g

0x2d84,	// (0x00031eb1) list_single_number_pane_t1_ParamLimits

0x2d84,	// (0x00031eb1) list_single_number_pane_t1

0xcc9e,	// (0x0003bdcb) list_single_number_pane_t2_ParamLimits

0xcc9e,	// (0x0003bdcb) list_single_number_pane_t2

0x0001,

0xf933,	// (0x0003ea60) list_single_number_pane_t_ParamLimits

0xf933,	// (0x0003ea60) list_single_number_pane_t

0x2d78,	// (0x00031ea5) list_single_graphic_pane_g1_ParamLimits

0x2d78,	// (0x00031ea5) list_single_graphic_pane_g1

0x43dd,	// (0x0003350a) list_single_graphic_pane_g2_ParamLimits

0x43dd,	// (0x0003350a) list_single_graphic_pane_g2

0x43e9,	// (0x00033516) list_single_graphic_pane_g3_ParamLimits

0x43e9,	// (0x00033516) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0003e6c9) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0003e6c9) list_single_graphic_pane_g

0x2d84,	// (0x00031eb1) list_single_graphic_pane_t1_ParamLimits

0x2d84,	// (0x00031eb1) list_single_graphic_pane_t1

0xc6c4,	// (0x0003b7f1) list_single_heading_pane_g1_ParamLimits

0xc6c4,	// (0x0003b7f1) list_single_heading_pane_g1

0x43e9,	// (0x00033516) list_single_heading_pane_g2_ParamLimits

0x43e9,	// (0x00033516) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003e6d0) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003e6d0) list_single_heading_pane_g

0xc6d7,	// (0x0003b804) list_single_heading_pane_t1_ParamLimits

0xc6d7,	// (0x0003b804) list_single_heading_pane_t1

0xc6ed,	// (0x0003b81a) list_single_heading_pane_t2_ParamLimits

0xc6ed,	// (0x0003b81a) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0003e6d5) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0003e6d5) list_single_heading_pane_t

0x43dd,	// (0x0003350a) list_single_number_heading_pane_g1_ParamLimits

0x43dd,	// (0x0003350a) list_single_number_heading_pane_g1

0x43e9,	// (0x00033516) list_single_number_heading_pane_g2_ParamLimits

0x43e9,	// (0x00033516) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0003e6da) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0003e6da) list_single_number_heading_pane_g

0x2e34,	// (0x00031f61) list_single_number_heading_pane_t1_ParamLimits

0x2e34,	// (0x00031f61) list_single_number_heading_pane_t1

0xc6ff,	// (0x0003b82c) list_single_number_heading_pane_t2_ParamLimits

0xc6ff,	// (0x0003b82c) list_single_number_heading_pane_t2

0x3507,	// (0x00032634) list_single_number_heading_pane_t3_ParamLimits

0x3507,	// (0x00032634) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0003e6df) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0003e6df) list_single_number_heading_pane_t

0xc711,	// (0x0003b83e) list_single_graphic_heading_pane_g1_ParamLimits

0xc711,	// (0x0003b83e) list_single_graphic_heading_pane_g1

0xcfe8,	// (0x0003c115) list_single_graphic_heading_pane_g4_ParamLimits

0xcfe8,	// (0x0003c115) list_single_graphic_heading_pane_g4

0x43e9,	// (0x00033516) list_single_graphic_heading_pane_g5_ParamLimits

0x43e9,	// (0x00033516) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0003e6e6) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0003e6e6) list_single_graphic_heading_pane_g

0x2e34,	// (0x00031f61) list_single_graphic_heading_pane_t1_ParamLimits

0x2e34,	// (0x00031f61) list_single_graphic_heading_pane_t1

0xc725,	// (0x0003b852) list_single_graphic_heading_pane_t2_ParamLimits

0xc725,	// (0x0003b852) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0003e6ed) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0003e6ed) list_single_graphic_heading_pane_t

0x438d,	// (0x000334ba) list_single_large_graphic_pane_g1_ParamLimits

0x438d,	// (0x000334ba) list_single_large_graphic_pane_g1

0x4399,	// (0x000334c6) list_single_large_graphic_pane_g2_ParamLimits

0x4399,	// (0x000334c6) list_single_large_graphic_pane_g2

0x43a5,	// (0x000334d2) list_single_large_graphic_pane_g3_ParamLimits

0x43a5,	// (0x000334d2) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0003e6f2) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0003e6f2) list_single_large_graphic_pane_g

0x7788,	// (0x000368b5) wait_border_pane_g2_copy1

0x43b1,	// (0x000334de) list_single_large_graphic_pane_g4_cp2

0x2c6e,	// (0x00031d9b) list_single_large_graphic_pane_t1_ParamLimits

0x2c6e,	// (0x00031d9b) list_single_large_graphic_pane_t1

0x6d88,	// (0x00035eb5) list_double_pane_g1_ParamLimits

0x6d88,	// (0x00035eb5) list_double_pane_g1

0xcff9,	// (0x0003c126) list_double_pane_g2_ParamLimits

0xcff9,	// (0x0003c126) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0003e6f9) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0003e6f9) list_double_pane_g

0xc73d,	// (0x0003b86a) list_double_pane_t1_ParamLimits

0xc73d,	// (0x0003b86a) list_double_pane_t1

0xc753,	// (0x0003b880) list_double_pane_t2_ParamLimits

0xc753,	// (0x0003b880) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0003e6fe) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0003e6fe) list_double_pane_t

0xc765,	// (0x0003b892) list_double2_pane_g1_ParamLimits

0xc765,	// (0x0003b892) list_double2_pane_g1

0xc776,	// (0x0003b8a3) list_double2_pane_g2_ParamLimits

0xc776,	// (0x0003b8a3) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0003e703) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0003e703) list_double2_pane_g

0xc782,	// (0x0003b8af) list_double2_pane_t1_ParamLimits

0xc782,	// (0x0003b8af) list_double2_pane_t1

0xc798,	// (0x0003b8c5) list_double2_pane_t2_ParamLimits

0xc798,	// (0x0003b8c5) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0003e708) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0003e708) list_double2_pane_t

0x6d88,	// (0x00035eb5) list_double_number_pane_g1_ParamLimits

0x6d88,	// (0x00035eb5) list_double_number_pane_g1

0xcff9,	// (0x0003c126) list_double_number_pane_g2_ParamLimits

0xcff9,	// (0x0003c126) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0003e6f9) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0003e6f9) list_double_number_pane_g

0xc7aa,	// (0x0003b8d7) list_double_number_pane_t1_ParamLimits

0xc7aa,	// (0x0003b8d7) list_double_number_pane_t1

0xc7bc,	// (0x0003b8e9) list_double_number_pane_t2_ParamLimits

0xc7bc,	// (0x0003b8e9) list_double_number_pane_t2

0xc7d2,	// (0x0003b8ff) list_double_number_pane_t3_ParamLimits

0xc7d2,	// (0x0003b8ff) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0003e70d) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0003e70d) list_double_number_pane_t

0xc7e4,	// (0x0003b911) list_double_graphic_pane_g1_ParamLimits

0xc7e4,	// (0x0003b911) list_double_graphic_pane_g1

0x7e9b,	// (0x00036fc8) list_double_graphic_pane_g2_ParamLimits

0x7e9b,	// (0x00036fc8) list_double_graphic_pane_g2

0xd005,	// (0x0003c132) list_double_graphic_pane_g3_ParamLimits

0xd005,	// (0x0003c132) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0003e714) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0003e714) list_double_graphic_pane_g

0xc7fc,	// (0x0003b929) list_double_graphic_pane_t1_ParamLimits

0xc7fc,	// (0x0003b929) list_double_graphic_pane_t1

0xc812,	// (0x0003b93f) list_double_graphic_pane_t2_ParamLimits

0xc812,	// (0x0003b93f) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0003e71d) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0003e71d) list_double_graphic_pane_t

0x2e8d,	// (0x00031fba) list_double2_graphic_pane_g1_ParamLimits

0x2e8d,	// (0x00031fba) list_double2_graphic_pane_g1

0xd011,	// (0x0003c13e) list_double2_graphic_pane_g2_ParamLimits

0xd011,	// (0x0003c13e) list_double2_graphic_pane_g2

0xd01d,	// (0x0003c14a) list_double2_graphic_pane_g3_ParamLimits

0xd01d,	// (0x0003c14a) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0003e722) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0003e722) list_double2_graphic_pane_g

0xc824,	// (0x0003b951) list_double2_graphic_pane_t1_ParamLimits

0xc824,	// (0x0003b951) list_double2_graphic_pane_t1

0xc83a,	// (0x0003b967) list_double2_graphic_pane_t2_ParamLimits

0xc83a,	// (0x0003b967) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0003e729) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0003e729) list_double2_graphic_pane_t

0xc84c,	// (0x0003b979) list_double_large_graphic_pane_g1_ParamLimits

0xc84c,	// (0x0003b979) list_double_large_graphic_pane_g1

0xc870,	// (0x0003b99d) list_double_large_graphic_pane_g2_ParamLimits

0xc870,	// (0x0003b99d) list_double_large_graphic_pane_g2

0xcff9,	// (0x0003c126) list_double_large_graphic_pane_g3_ParamLimits

0xcff9,	// (0x0003c126) list_double_large_graphic_pane_g3

0xc886,	// (0x0003b9b3) list_double_large_graphic_pane_g4_ParamLimits

0xc886,	// (0x0003b9b3) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0003e72e) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0003e72e) list_double_large_graphic_pane_g

0xc897,	// (0x0003b9c4) list_double_large_graphic_pane_t1_ParamLimits

0xc897,	// (0x0003b9c4) list_double_large_graphic_pane_t1

0xc8b0,	// (0x0003b9dd) list_double_large_graphic_pane_t2_ParamLimits

0xc8b0,	// (0x0003b9dd) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0003e739) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0003e739) list_double_large_graphic_pane_t

0xd029,	// (0x0003c156) list_double2_large_graphic_pane_g1_ParamLimits

0xd029,	// (0x0003c156) list_double2_large_graphic_pane_g1

0xd035,	// (0x0003c162) list_double2_large_graphic_pane_g2_ParamLimits

0xd035,	// (0x0003c162) list_double2_large_graphic_pane_g2

0xd01d,	// (0x0003c14a) list_double2_large_graphic_pane_g3_ParamLimits

0xd01d,	// (0x0003c14a) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0003e73e) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0003e73e) list_double2_large_graphic_pane_g

0xc8c2,	// (0x0003b9ef) list_double2_large_graphic_pane_t1_ParamLimits

0xc8c2,	// (0x0003b9ef) list_double2_large_graphic_pane_t1

0xc8d8,	// (0x0003ba05) list_double2_large_graphic_pane_t2_ParamLimits

0xc8d8,	// (0x0003ba05) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0003e745) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0003e745) list_double2_large_graphic_pane_t

0xc8ea,	// (0x0003ba17) list_double_heading_pane_g1_ParamLimits

0xc8ea,	// (0x0003ba17) list_double_heading_pane_g1

0x4360,	// (0x0003348d) list_double_heading_pane_g2_ParamLimits

0x4360,	// (0x0003348d) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0003e74a) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0003e74a) list_double_heading_pane_g

0xc8fb,	// (0x0003ba28) list_double_heading_pane_t1_ParamLimits

0xc8fb,	// (0x0003ba28) list_double_heading_pane_t1

0xc798,	// (0x0003b8c5) list_double_heading_pane_t2_ParamLimits

0xc798,	// (0x0003b8c5) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0003e74f) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0003e74f) list_double_heading_pane_t

0x2e8d,	// (0x00031fba) list_double_graphic_heading_pane_g1_ParamLimits

0x2e8d,	// (0x00031fba) list_double_graphic_heading_pane_g1

0xc8ea,	// (0x0003ba17) list_double_graphic_heading_pane_g2_ParamLimits

0xc8ea,	// (0x0003ba17) list_double_graphic_heading_pane_g2

0x4360,	// (0x0003348d) list_double_graphic_heading_pane_g3_ParamLimits

0x4360,	// (0x0003348d) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0003e754) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0003e754) list_double_graphic_heading_pane_g

0xc911,	// (0x0003ba3e) list_double_graphic_heading_pane_t1_ParamLimits

0xc911,	// (0x0003ba3e) list_double_graphic_heading_pane_t1

0xc83a,	// (0x0003b967) list_double_graphic_heading_pane_t2_ParamLimits

0xc83a,	// (0x0003b967) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0003e75b) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0003e75b) list_double_graphic_heading_pane_t

0xc927,	// (0x0003ba54) list_double_time_pane_g1_ParamLimits

0xc927,	// (0x0003ba54) list_double_time_pane_g1

0xc938,	// (0x0003ba65) list_double_time_pane_g2_ParamLimits

0xc938,	// (0x0003ba65) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0003e760) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0003e760) list_double_time_pane_g

0xc944,	// (0x0003ba71) list_double_time_pane_t1_ParamLimits

0xc944,	// (0x0003ba71) list_double_time_pane_t1

0xc95a,	// (0x0003ba87) list_double_time_pane_t2_ParamLimits

0xc95a,	// (0x0003ba87) list_double_time_pane_t2

0xc96c,	// (0x0003ba99) list_double_time_pane_t3_ParamLimits

0xc96c,	// (0x0003ba99) list_double_time_pane_t3

0xc97e,	// (0x0003baab) list_double_time_pane_t4_ParamLimits

0xc97e,	// (0x0003baab) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0003e765) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0003e765) list_double_time_pane_t

0xc990,	// (0x0003babd) list_setting_pane_g1_ParamLimits

0xc990,	// (0x0003babd) list_setting_pane_g1

0x2ebe,	// (0x00031feb) list_setting_pane_g2_ParamLimits

0x2ebe,	// (0x00031feb) list_setting_pane_g2

0x0001,

0xf641,	// (0x0003e76e) list_setting_pane_g_ParamLimits

0xf641,	// (0x0003e76e) list_setting_pane_g

0xc99c,	// (0x0003bac9) list_setting_pane_t1_ParamLimits

0xc99c,	// (0x0003bac9) list_setting_pane_t1

0xc9b6,	// (0x0003bae3) list_setting_pane_t2_ParamLimits

0xc9b6,	// (0x0003bae3) list_setting_pane_t2

0x0002,

0xf646,	// (0x0003e773) list_setting_pane_t_ParamLimits

0xf646,	// (0x0003e773) list_setting_pane_t

0xc9f3,	// (0x0003bb20) set_value_pane_cp_ParamLimits

0xc9f3,	// (0x0003bb20) set_value_pane_cp

0xc9ff,	// (0x0003bb2c) list_setting_number_pane_g1_ParamLimits

0xc9ff,	// (0x0003bb2c) list_setting_number_pane_g1

0xca0b,	// (0x0003bb38) list_setting_number_pane_g2_ParamLimits

0xca0b,	// (0x0003bb38) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0003e77a) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0003e77a) list_setting_number_pane_g

0xca17,	// (0x0003bb44) list_setting_number_pane_t1_ParamLimits

0xca17,	// (0x0003bb44) list_setting_number_pane_t1

0xca30,	// (0x0003bb5d) list_setting_number_pane_t2_ParamLimits

0xca30,	// (0x0003bb5d) list_setting_number_pane_t2

0xca4a,	// (0x0003bb77) list_setting_number_pane_t3_ParamLimits

0xca4a,	// (0x0003bb77) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0003e77f) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0003e77f) list_setting_number_pane_t

0xc9f3,	// (0x0003bb20) set_value_pane_ParamLimits

0xc9f3,	// (0x0003bb20) set_value_pane

0x4416,	// (0x00033543) bg_set_opt_pane_ParamLimits

0x4416,	// (0x00033543) bg_set_opt_pane

0x301b,	// (0x00032148) set_value_pane_t1

0x4437,	// (0x00033564) slider_set_pane_cp3

0x4440,	// (0x0003356d) volume_small_pane_cp

0x4449,	// (0x00033576) list_form_gen_pane

0x4343,	// (0x00033470) scroll_pane_cp8

0xca8d,	// (0x0003bbba) form_field_data_pane_ParamLimits

0xca8d,	// (0x0003bbba) form_field_data_pane

0xcaa4,	// (0x0003bbd1) form_field_data_wide_pane_ParamLimits

0xcaa4,	// (0x0003bbd1) form_field_data_wide_pane

0xcac4,	// (0x0003bbf1) form_field_popup_pane_ParamLimits

0xcac4,	// (0x0003bbf1) form_field_popup_pane

0xcadc,	// (0x0003bc09) form_field_popup_wide_pane_ParamLimits

0xcadc,	// (0x0003bc09) form_field_popup_wide_pane

0x30a7,	// (0x000321d4) form_field_slider_pane_ParamLimits

0x30a7,	// (0x000321d4) form_field_slider_pane

0x30ba,	// (0x000321e7) form_field_slider_wide_pane_ParamLimits

0x30ba,	// (0x000321e7) form_field_slider_wide_pane

0x4452,	// (0x0003357f) data_form_pane

0xcafd,	// (0x0003bc2a) form_field_data_pane_t1

0x445e,	// (0x0003358b) input_focus_pane

0x446c,	// (0x00033599) data_form_wide_pane

0x30f9,	// (0x00032226) form_field_data_wide_pane_t1

0x41c2,	// (0x000332ef) input_focus_pane_cp6

0xcb15,	// (0x0003bc42) form_field_popup_pane_t1

0x445e,	// (0x0003358b) input_focus_pane_cp7

0x4452,	// (0x0003357f) list_form_pane

0x313b,	// (0x00032268) form_field_popup_wide_pane_t1

0x445e,	// (0x0003358b) input_focus_pane_cp8

0x448c,	// (0x000335b9) list_form_wide_pane

0xcb35,	// (0x0003bc62) form_field_slider_pane_t1_ParamLimits

0xcb35,	// (0x0003bc62) form_field_slider_pane_t1

0xcb4b,	// (0x0003bc78) form_field_slider_pane_t2_ParamLimits

0xcb4b,	// (0x0003bc78) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0003e78f) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0003e78f) form_field_slider_pane_t

0x3f21,	// (0x0003304e) input_focus_pane_cp9_ParamLimits

0x3f21,	// (0x0003304e) input_focus_pane_cp9

0xcb60,	// (0x0003bc8d) slider_cont_pane_ParamLimits

0xcb60,	// (0x0003bc8d) slider_cont_pane

0x449b,	// (0x000335c8) form_field_slider_wide_pane_t1_ParamLimits

0x449b,	// (0x000335c8) form_field_slider_wide_pane_t1

0x3197,	// (0x000322c4) form_field_slider_wide_pane_t2_ParamLimits

0x3197,	// (0x000322c4) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0003e794) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0003e794) form_field_slider_wide_pane_t

0x3f21,	// (0x0003304e) input_focus_pane_cp10_ParamLimits

0x3f21,	// (0x0003304e) input_focus_pane_cp10

0xcb74,	// (0x0003bca1) slider_cont_pane_cp1_ParamLimits

0xcb74,	// (0x0003bca1) slider_cont_pane_cp1

0xcb8a,	// (0x0003bcb7) slider_form_pane_cp

0x44ad,	// (0x000335da) input_focus_pane_g1

0x44b5,	// (0x000335e2) input_focus_pane_g2

0x44bd,	// (0x000335ea) input_focus_pane_g3

0x44c5,	// (0x000335f2) input_focus_pane_g4

0x44cd,	// (0x000335fa) input_focus_pane_g5

0x44d5,	// (0x00033602) input_focus_pane_g6

0x44dd,	// (0x0003360a) input_focus_pane_g7

0x44e5,	// (0x00033612) input_focus_pane_g8

0x44ed,	// (0x0003361a) input_focus_pane_g9

0x3a09,	// (0x00032b36) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0003e799) input_focus_pane_g

0x7791,	// (0x000368be) wait_border_pane_g3_copy1

0xcb92,	// (0x0003bcbf) data_form_pane_t1

0x3a09,	// (0x00032b36) wait_anim_pane_g1_copy1

0xccb0,	// (0x0003bddd) data_form_wide_pane_t1

0xcbaa,	// (0x0003bcd7) list_form_graphic_pane_cp_ParamLimits

0xcbaa,	// (0x0003bcd7) list_form_graphic_pane_cp

0x837d,	// (0x000374aa) slider_form_pane_g1

0x8386,	// (0x000374b3) slider_form_pane_g2

0x0006,

0xf963,	// (0x0003ea90) slider_form_pane_g

0x31e1,	// (0x0003230e) list_form_graphic_pane_ParamLimits

0x31e1,	// (0x0003230e) list_form_graphic_pane

0x320b,	// (0x00032338) list_form_graphic_pane_g1

0x3213,	// (0x00032340) list_form_graphic_pane_t1_ParamLimits

0x3213,	// (0x00032340) list_form_graphic_pane_t1

0x3d5c,	// (0x00032e89) list_highlight_pane_cp5_ParamLimits

0x3d5c,	// (0x00032e89) list_highlight_pane_cp5

0xcbbd,	// (0x0003bcea) find_pane_g1

0x44f5,	// (0x00033622) input_find_pane

0xcbc8,	// (0x0003bcf5) input_find_pane_g1_ParamLimits

0xcbc8,	// (0x0003bcf5) input_find_pane_g1

0xcbd4,	// (0x0003bd01) input_find_pane_t1_ParamLimits

0xcbd4,	// (0x0003bd01) input_find_pane_t1

0xcbe9,	// (0x0003bd16) input_find_pane_t2_ParamLimits

0xcbe9,	// (0x0003bd16) input_find_pane_t2

0x0001,

0xf681,	// (0x0003e7ae) input_find_pane_t_ParamLimits

0xf681,	// (0x0003e7ae) input_find_pane_t

0x44fe,	// (0x0003362b) input_focus_pane_cp5_ParamLimits

0x44fe,	// (0x0003362b) input_focus_pane_cp5

0x3f21,	// (0x0003304e) bg_popup_window_pane_cp2_ParamLimits

0x3f21,	// (0x0003304e) bg_popup_window_pane_cp2

0x451d,	// (0x0003364a) listscroll_menu_pane_ParamLimits

0x451d,	// (0x0003364a) listscroll_menu_pane

0x4529,	// (0x00033656) popup_submenu_window_ParamLimits

0x4529,	// (0x00033656) popup_submenu_window

0x454d,	// (0x0003367a) find_popup_pane_g1

0x4555,	// (0x00033682) input_popup_find_pane_cp

0x455f,	// (0x0003368c) input_focus_pane_cp4_ParamLimits

0x455f,	// (0x0003368c) input_focus_pane_cp4

0x456d,	// (0x0003369a) input_popup_find_pane_t1_ParamLimits

0x456d,	// (0x0003369a) input_popup_find_pane_t1

0x3bc8,	// (0x00032cf5) bg_popup_sub_pane_cp

0x459b,	// (0x000336c8) listscroll_popup_sub_pane

0x45a3,	// (0x000336d0) list_submenu_pane_ParamLimits

0x45a3,	// (0x000336d0) list_submenu_pane

0x45b4,	// (0x000336e1) scroll_pane_cp4

0x45bc,	// (0x000336e9) list_single_popup_submenu_pane_ParamLimits

0x45bc,	// (0x000336e9) list_single_popup_submenu_pane

0x45ce,	// (0x000336fb) list_single_popup_submenu_pane_g1

0x45d6,	// (0x00033703) list_single_popup_submenu_pane_t1_ParamLimits

0x45d6,	// (0x00033703) list_single_popup_submenu_pane_t1

0x3f21,	// (0x0003304e) bg_active_tab_pane_cp1_ParamLimits

0x3f21,	// (0x0003304e) bg_active_tab_pane_cp1

0x8472,	// (0x0003759f) tabs_2_active_pane_g1

0x06ce,	// (0x0002f7fb) tabs_2_active_pane_t1

0x3f21,	// (0x0003304e) bg_passive_tab_pane_cp1_ParamLimits

0x3f21,	// (0x0003304e) bg_passive_tab_pane_cp1

0x8472,	// (0x0003759f) tabs_2_passive_pane_g1

0x06ce,	// (0x0002f7fb) tabs_2_passive_pane_t1

0x3d5c,	// (0x00032e89) bg_active_tab_pane_cp4

0x06e4,	// (0x0002f811) tabs_2_long_active_pane_t1

0x4f49,	// (0x00034076) bg_passive_tab_pane_cp4

0x7271,	// (0x0003639e) list_single_midp_graphic_pane_g4_ParamLimits

0x3d5c,	// (0x00032e89) bg_active_tab_pane_cp5

0x06fb,	// (0x0002f828) tabs_3_long_active_pane_t1

0x4f49,	// (0x00034076) bg_passive_tab_pane_cp5

0x7271,	// (0x0003639e) list_single_midp_graphic_pane_g4

0x3d5c,	// (0x00032e89) bg_popup_window_pane_cp13_ParamLimits

0x3d5c,	// (0x00032e89) bg_popup_window_pane_cp13

0x45f4,	// (0x00033721) listscroll_popup_fast_pane_ParamLimits

0x45f4,	// (0x00033721) listscroll_popup_fast_pane

0x4603,	// (0x00033730) grid_popup_fast_pane_ParamLimits

0x4603,	// (0x00033730) grid_popup_fast_pane

0x4615,	// (0x00033742) scroll_pane_cp9_ParamLimits

0x4615,	// (0x00033742) scroll_pane_cp9

0x9685,	// (0x000387b2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x9685,	// (0x000387b2) list_single_graphic_hl_pane_t1_cp2

0x4639,	// (0x00033766) input_focus_pane_cp20_ParamLimits

0x4639,	// (0x00033766) input_focus_pane_cp20

0x4647,	// (0x00033774) query_popup_data_pane_t1_ParamLimits

0x4647,	// (0x00033774) query_popup_data_pane_t1

0x465a,	// (0x00033787) query_popup_data_pane_t2_ParamLimits

0x465a,	// (0x00033787) query_popup_data_pane_t2

0x46a0,	// (0x000337cd) query_popup_data_pane_t3_ParamLimits

0x46a0,	// (0x000337cd) query_popup_data_pane_t3

0x46e1,	// (0x0003380e) query_popup_data_pane_t4_ParamLimits

0x46e1,	// (0x0003380e) query_popup_data_pane_t4

0x471d,	// (0x0003384a) query_popup_data_pane_t5_ParamLimits

0x471d,	// (0x0003384a) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0003e7b3) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0003e7b3) query_popup_data_pane_t

0x44ad,	// (0x000335da) bg_set_opt_pane_g1

0x44b5,	// (0x000335e2) bg_set_opt_pane_g2

0x44bd,	// (0x000335ea) bg_set_opt_pane_g3

0x44c5,	// (0x000335f2) bg_set_opt_pane_g4

0x44cd,	// (0x000335fa) bg_set_opt_pane_g5

0x44d5,	// (0x00033602) bg_set_opt_pane_g6

0x44dd,	// (0x0003360a) bg_set_opt_pane_g7

0x44e5,	// (0x00033612) bg_set_opt_pane_g8

0x44ed,	// (0x0003361a) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0003e7be) bg_set_opt_pane_g

0x4bea,	// (0x00033d17) control_top_pane_stacon_ParamLimits

0x4bea,	// (0x00033d17) control_top_pane_stacon

0x4c3d,	// (0x00033d6a) signal_pane_stacon_ParamLimits

0x4c3d,	// (0x00033d6a) signal_pane_stacon

0x6bb0,	// (0x00035cdd) stacon_top_pane_g1_ParamLimits

0x6bb0,	// (0x00035cdd) stacon_top_pane_g1

0x4c62,	// (0x00033d8f) title_pane_stacon_ParamLimits

0x4c62,	// (0x00033d8f) title_pane_stacon

0x4c84,	// (0x00033db1) uni_indicator_pane_stacon_ParamLimits

0x4c84,	// (0x00033db1) uni_indicator_pane_stacon

0x4c99,	// (0x00033dc6) battery_pane_stacon_ParamLimits

0x4c99,	// (0x00033dc6) battery_pane_stacon

0x4cd9,	// (0x00033e06) control_bottom_pane_stacon_ParamLimits

0x4cd9,	// (0x00033e06) control_bottom_pane_stacon

0x4cf8,	// (0x00033e25) navi_pane_stacon_ParamLimits

0x4cf8,	// (0x00033e25) navi_pane_stacon

0x6bd2,	// (0x00035cff) stacon_bottom_pane_g1_ParamLimits

0x6bd2,	// (0x00035cff) stacon_bottom_pane_g1

0x4754,	// (0x00033881) aid_levels_signal_lsc_ParamLimits

0x4754,	// (0x00033881) aid_levels_signal_lsc

0x4761,	// (0x0003388e) signal_pane_stacon_g1_ParamLimits

0x4761,	// (0x0003388e) signal_pane_stacon_g1

0x476d,	// (0x0003389a) signal_pane_stacon_g2_ParamLimits

0x476d,	// (0x0003389a) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0003e7d1) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0003e7d1) signal_pane_stacon_g

0x47ae,	// (0x000338db) title_pane_stacon_t1_ParamLimits

0x47ae,	// (0x000338db) title_pane_stacon_t1

0x47d3,	// (0x00033900) uni_indicator_pane_stacon_g1

0x47dd,	// (0x0003390a) uni_indicator_pane_stacon_g2

0x47e7,	// (0x00033914) uni_indicator_pane_stacon_g3

0x47f1,	// (0x0003391e) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0003e7dd) uni_indicator_pane_stacon_g

0x47fb,	// (0x00033928) control_top_pane_stacon_g1

0x4803,	// (0x00033930) control_top_pane_stacon_t1_ParamLimits

0x4803,	// (0x00033930) control_top_pane_stacon_t1

0x4834,	// (0x00033961) aid_levels_battery_lsc_ParamLimits

0x4834,	// (0x00033961) aid_levels_battery_lsc

0x4842,	// (0x0003396f) battery_pane_stacon_g1_ParamLimits

0x4842,	// (0x0003396f) battery_pane_stacon_g1

0x484e,	// (0x0003397b) battery_pane_stacon_g2_ParamLimits

0x484e,	// (0x0003397b) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0003e7e6) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0003e7e6) battery_pane_stacon_g

0x487d,	// (0x000339aa) navi_icon_pane_stacon

0x488d,	// (0x000339ba) navi_navi_pane_stacon

0x487d,	// (0x000339aa) navi_text_pane_stacon

0x47fb,	// (0x00033928) control_bottom_pane_stacon_g1

0x489d,	// (0x000339ca) control_bottom_pane_stacon_t1_ParamLimits

0x489d,	// (0x000339ca) control_bottom_pane_stacon_t1

0x0711,	// (0x0002f83e) grid_app_pane_ParamLimits

0x0711,	// (0x0002f83e) grid_app_pane

0x073f,	// (0x0002f86c) scroll_pane_cp15_ParamLimits

0x073f,	// (0x0002f86c) scroll_pane_cp15

0x0752,	// (0x0002f87f) cell_app_pane_ParamLimits

0x0752,	// (0x0002f87f) cell_app_pane

0x078f,	// (0x0002f8bc) cell_app_pane_g1_ParamLimits

0x078f,	// (0x0002f8bc) cell_app_pane_g1

0x48e8,	// (0x00033a15) cell_app_pane_g2_ParamLimits

0x48e8,	// (0x00033a15) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0003e7eb) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0003e7eb) cell_app_pane_g

0x07b3,	// (0x0002f8e0) cell_app_pane_t1_ParamLimits

0x07b3,	// (0x0002f8e0) cell_app_pane_t1

0x48f4,	// (0x00033a21) grid_highlight_pane_ParamLimits

0x48f4,	// (0x00033a21) grid_highlight_pane

0x44ad,	// (0x000335da) cell_highlight_pane_g1

0x44b5,	// (0x000335e2) cell_highlight_pane_g2

0x44bd,	// (0x000335ea) cell_highlight_pane_g3

0x44c5,	// (0x000335f2) cell_highlight_pane_g4

0x44cd,	// (0x000335fa) cell_highlight_pane_g5

0x44d5,	// (0x00033602) cell_highlight_pane_g6

0x44dd,	// (0x0003360a) cell_highlight_pane_g7

0x44e5,	// (0x00033612) cell_highlight_pane_g8

0x44ed,	// (0x0003361a) cell_highlight_pane_g9

0x3a09,	// (0x00032b36) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0003e799) cell_highlight_pane_g

0x4918,	// (0x00033a45) bg_scroll_pane

0x4937,	// (0x00033a64) scroll_handle_pane

0x4988,	// (0x00033ab5) scroll_bg_pane_g1

0x499d,	// (0x00033aca) scroll_bg_pane_g2

0x49b5,	// (0x00033ae2) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0003e7f0) scroll_bg_pane_g

0x49ca,	// (0x00033af7) scroll_handle_focus_pane_ParamLimits

0x49ca,	// (0x00033af7) scroll_handle_focus_pane

0x4988,	// (0x00033ab5) scroll_handle_pane_g1

0x49d7,	// (0x00033b04) scroll_handle_pane_g2

0x49b5,	// (0x00033ae2) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0003e7f7) scroll_handle_pane_g

0x455f,	// (0x0003368c) bg_popup_sub_pane_cp21_ParamLimits

0x455f,	// (0x0003368c) bg_popup_sub_pane_cp21

0x49eb,	// (0x00033b18) popup_fep_japan_predictive_window_t1_ParamLimits

0x49eb,	// (0x00033b18) popup_fep_japan_predictive_window_t1

0x4a02,	// (0x00033b2f) popup_fep_japan_predictive_window_t2_ParamLimits

0x4a02,	// (0x00033b2f) popup_fep_japan_predictive_window_t2

0x4a35,	// (0x00033b62) popup_fep_japan_predictive_window_t3_ParamLimits

0x4a35,	// (0x00033b62) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0003e7fe) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0003e7fe) popup_fep_japan_predictive_window_t

0x3bc8,	// (0x00032cf5) bg_popup_sub_pane_cp23

0x4a6c,	// (0x00033b99) listscroll_japin_cand_pane

0x4a74,	// (0x00033ba1) popup_fep_japan_candidate_window_t1

0x4a82,	// (0x00033baf) candidate_pane_ParamLimits

0x4a82,	// (0x00033baf) candidate_pane

0x4a95,	// (0x00033bc2) scroll_pane_cp30

0x4a9d,	// (0x00033bca) list_single_popup_jap_candidate_pane_ParamLimits

0x4a9d,	// (0x00033bca) list_single_popup_jap_candidate_pane

0x3bc8,	// (0x00032cf5) list_highlight_pane_cp30

0x4ab2,	// (0x00033bdf) list_single_popup_jap_candidate_pane_t1

0x07ca,	// (0x0002f8f7) level_1_signal

0x07dc,	// (0x0002f909) level_2_signal

0x07ef,	// (0x0002f91c) level_3_signal

0x0802,	// (0x0002f92f) level_4_signal

0x0815,	// (0x0002f942) level_5_signal

0x0828,	// (0x0002f955) level_6_signal

0x083b,	// (0x0002f968) level_7_signal

0x07ca,	// (0x0002f8f7) level_1_battery

0x07dc,	// (0x0002f909) level_2_battery

0x07ef,	// (0x0002f91c) level_3_battery

0x0802,	// (0x0002f92f) level_4_battery

0x0815,	// (0x0002f942) level_5_battery

0x0828,	// (0x0002f955) level_6_battery

0x083b,	// (0x0002f968) level_7_battery

0x4af8,	// (0x00033c25) list_menu_pane_ParamLimits

0x4af8,	// (0x00033c25) list_menu_pane

0x4b0e,	// (0x00033c3b) scroll_pane_cp25_ParamLimits

0x4b0e,	// (0x00033c3b) scroll_pane_cp25

0x084e,	// (0x0002f97b) list_double2_graphic_pane_cp2_ParamLimits

0x084e,	// (0x0002f97b) list_double2_graphic_pane_cp2

0x084e,	// (0x0002f97b) list_double2_large_graphic_pane_cp2_ParamLimits

0x084e,	// (0x0002f97b) list_double2_large_graphic_pane_cp2

0x084e,	// (0x0002f97b) list_double2_pane_cp2_ParamLimits

0x084e,	// (0x0002f97b) list_double2_pane_cp2

0x084e,	// (0x0002f97b) list_double_graphic_pane_cp2_ParamLimits

0x084e,	// (0x0002f97b) list_double_graphic_pane_cp2

0x084e,	// (0x0002f97b) list_double_large_graphic_pane_cp2_ParamLimits

0x084e,	// (0x0002f97b) list_double_large_graphic_pane_cp2

0x084e,	// (0x0002f97b) list_double_number_pane_cp2_ParamLimits

0x084e,	// (0x0002f97b) list_double_number_pane_cp2

0x084e,	// (0x0002f97b) list_double_pane_cp2_ParamLimits

0x084e,	// (0x0002f97b) list_double_pane_cp2

0x0869,	// (0x0002f996) list_single_2graphic_pane_cp2_ParamLimits

0x0869,	// (0x0002f996) list_single_2graphic_pane_cp2

0x0869,	// (0x0002f996) list_single_graphic_heading_pane_cp2_ParamLimits

0x0869,	// (0x0002f996) list_single_graphic_heading_pane_cp2

0x0869,	// (0x0002f996) list_single_graphic_pane_cp2_ParamLimits

0x0869,	// (0x0002f996) list_single_graphic_pane_cp2

0x0869,	// (0x0002f996) list_single_heading_pane_cp2_ParamLimits

0x0869,	// (0x0002f996) list_single_heading_pane_cp2

0x087a,	// (0x0002f9a7) list_single_large_graphic_pane_cp2_ParamLimits

0x087a,	// (0x0002f9a7) list_single_large_graphic_pane_cp2

0x0869,	// (0x0002f996) list_single_number_heading_pane_cp2_ParamLimits

0x0869,	// (0x0002f996) list_single_number_heading_pane_cp2

0x0869,	// (0x0002f996) list_single_number_pane_cp2_ParamLimits

0x0869,	// (0x0002f996) list_single_number_pane_cp2

0x0869,	// (0x0002f996) list_single_pane_cp2_ParamLimits

0x0869,	// (0x0002f996) list_single_pane_cp2

0x6a4b,	// (0x00035b78) bg_popup_sub_pane_cp22

0x4b86,	// (0x00033cb3) popup_side_volume_key_window_g1

0x4baa,	// (0x00033cd7) popup_side_volume_key_window_t1

0x4bc6,	// (0x00033cf3) volume_small_pane_cp1

0x3f21,	// (0x0003304e) bg_popup_sub_pane_cp24_ParamLimits

0x3f21,	// (0x0003304e) bg_popup_sub_pane_cp24

0x6a61,	// (0x00035b8e) fep_china_uni_candidate_pane_ParamLimits

0x6a61,	// (0x00035b8e) fep_china_uni_candidate_pane

0x6a75,	// (0x00035ba2) fep_china_uni_entry_pane

0x6a85,	// (0x00035bb2) popup_fep_china_uni_window_g1

0x6aa1,	// (0x00035bce) fep_china_uni_entry_pane_g1

0x6aa9,	// (0x00035bd6) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0003e82f) fep_china_uni_entry_pane_g

0x6ab1,	// (0x00035bde) fep_entry_item_pane

0x6abb,	// (0x00035be8) fep_candidate_item_pane

0x6ac3,	// (0x00035bf0) fep_china_uni_candidate_pane_g1

0x6acb,	// (0x00035bf8) fep_china_uni_candidate_pane_g2

0x6ad3,	// (0x00035c00) fep_china_uni_candidate_pane_g3

0x6adb,	// (0x00035c08) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0003e834) fep_china_uni_candidate_pane_g

0x3a09,	// (0x00032b36) fep_entry_item_pane_g1

0x6ae3,	// (0x00035c10) fep_entry_item_pane_t1_ParamLimits

0x6ae3,	// (0x00035c10) fep_entry_item_pane_t1

0x6af9,	// (0x00035c26) fep_candidate_item_pane_t1_ParamLimits

0x6af9,	// (0x00035c26) fep_candidate_item_pane_t1

0x6b0e,	// (0x00035c3b) fep_candidate_item_pane_t2_ParamLimits

0x6b0e,	// (0x00035c3b) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0003e83d) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0003e83d) fep_candidate_item_pane_t

0x3d5c,	// (0x00032e89) list_highlight_pane_cp31_ParamLimits

0x3d5c,	// (0x00032e89) list_highlight_pane_cp31

0x6b20,	// (0x00035c4d) level_1_signal_lsc

0x6b29,	// (0x00035c56) level_2_signal_lsc

0x6b32,	// (0x00035c5f) level_3_signal_lsc

0x6b3b,	// (0x00035c68) level_4_signal_lsc

0x6b44,	// (0x00035c71) level_5_signal_lsc

0x6b4d,	// (0x00035c7a) level_6_signal_lsc

0x6b56,	// (0x00035c83) level_7_signal_lsc

0x6b56,	// (0x00035c83) level_1_battery_lsc

0x6b5f,	// (0x00035c8c) level_2_battery_lsc

0x6b68,	// (0x00035c95) level_3_battery_lsc

0x6b71,	// (0x00035c9e) level_4_battery_lsc

0x6b7a,	// (0x00035ca7) level_5_battery_lsc

0x6b83,	// (0x00035cb0) level_6_battery_lsc

0x6b20,	// (0x00035c4d) level_7_battery_lsc

0x6b8c,	// (0x00035cb9) scroll_handle_focus_pane_g1

0x6b95,	// (0x00035cc2) scroll_handle_focus_pane_g2

0x6b9e,	// (0x00035ccb) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0003e842) scroll_handle_focus_pane_g

0xcbfe,	// (0x0003bd2b) list_single_2graphic_pane_g1_ParamLimits

0xcbfe,	// (0x0003bd2b) list_single_2graphic_pane_g1

0xcfe8,	// (0x0003c115) list_single_2graphic_pane_g2_ParamLimits

0xcfe8,	// (0x0003c115) list_single_2graphic_pane_g2

0x43e9,	// (0x00033516) list_single_2graphic_pane_g3_ParamLimits

0x43e9,	// (0x00033516) list_single_2graphic_pane_g3

0xcc0a,	// (0x0003bd37) list_single_2graphic_pane_g4_ParamLimits

0xcc0a,	// (0x0003bd37) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0003e849) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0003e849) list_single_2graphic_pane_g

0xcc16,	// (0x0003bd43) list_single_2graphic_pane_t1_ParamLimits

0xcc16,	// (0x0003bd43) list_single_2graphic_pane_t1

0xd04f,	// (0x0003c17c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd04f,	// (0x0003c17c) list_double2_graphic_large_graphic_pane_g1

0xd035,	// (0x0003c162) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xd035,	// (0x0003c162) list_double2_graphic_large_graphic_pane_g2

0xd01d,	// (0x0003c14a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd01d,	// (0x0003c14a) list_double2_graphic_large_graphic_pane_g3

0xd05f,	// (0x0003c18c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd05f,	// (0x0003c18c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0003e852) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0003e852) list_double2_graphic_large_graphic_pane_g

0xcc44,	// (0x0003bd71) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xcc44,	// (0x0003bd71) list_double2_graphic_large_graphic_pane_t1

0xcc5a,	// (0x0003bd87) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xcc5a,	// (0x0003bd87) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0003e85b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0003e85b) list_double2_graphic_large_graphic_pane_t

0x6c79,	// (0x00035da6) popup_fast_swap_window_ParamLimits

0x6c79,	// (0x00035da6) popup_fast_swap_window

0x6c95,	// (0x00035dc2) popup_side_volume_key_window

0x6caf,	// (0x00035ddc) stacon_top_pane

0x6cb9,	// (0x00035de6) status_pane_ParamLimits

0x6cb9,	// (0x00035de6) status_pane

0x0990,	// (0x0002fabd) status_small_pane

0x3bc8,	// (0x00032cf5) control_pane

0x3bc8,	// (0x00032cf5) stacon_bottom_pane

0x4343,	// (0x00033470) scroll_pane_cp121

0x4449,	// (0x00033576) set_content_pane

0x8460,	// (0x0003758d) bg_active_tab_pane_g1_cp1

0x6ba7,	// (0x00035cd4) bg_active_tab_pane_g2_cp1

0x8469,	// (0x00037596) bg_active_tab_pane_g3_cp1

0x8460,	// (0x0003758d) bg_passive_tab_pane_g1_cp1

0x6ba7,	// (0x00035cd4) bg_passive_tab_pane_g2_cp1

0x8469,	// (0x00037596) bg_passive_tab_pane_g3_cp1

0x0963,	// (0x0002fa90) bg_active_tab_pane_g1_cp2

0x6ba7,	// (0x00035cd4) bg_active_tab_pane_g2_cp2

0x095a,	// (0x0002fa87) bg_active_tab_pane_g3_cp2

0x0963,	// (0x0002fa90) bg_passive_tab_pane_g1_cp2

0x6ba7,	// (0x00035cd4) bg_passive_tab_pane_g2_cp2

0x095a,	// (0x0002fa87) bg_passive_tab_pane_g3_cp2

0x0975,	// (0x0002faa2) bg_active_tab_pane_g1_cp3

0x6ba7,	// (0x00035cd4) bg_active_tab_pane_g2_cp3

0x096c,	// (0x0002fa99) bg_active_tab_pane_g3_cp3

0x0975,	// (0x0002faa2) bg_passive_tab_pane_g1_cp3

0x6ba7,	// (0x00035cd4) bg_passive_tab_pane_g2_cp3

0x096c,	// (0x0002fa99) bg_passive_tab_pane_g3_cp3

0x0987,	// (0x0002fab4) bg_active_tab_pane_g1_cp4

0x6ba7,	// (0x00035cd4) bg_active_tab_pane_g2_cp4

0x097e,	// (0x0002faab) bg_active_tab_pane_g3_cp4

0x0987,	// (0x0002fab4) bg_passive_tab_pane_g1_cp4

0x6ba7,	// (0x00035cd4) bg_passive_tab_pane_g2_cp4

0x097e,	// (0x0002faab) bg_passive_tab_pane_g3_cp4

0x6bee,	// (0x00035d1b) bg_active_tab_pane_g1_cp5

0x6ba7,	// (0x00035cd4) bg_active_tab_pane_g2_cp5

0x6bf7,	// (0x00035d24) bg_active_tab_pane_g3_cp5

0x6bee,	// (0x00035d1b) bg_passive_tab_pane_g1_cp5

0x6ba7,	// (0x00035cd4) bg_passive_tab_pane_g2_cp5

0x6bf7,	// (0x00035d24) bg_passive_tab_pane_g3_cp5

0xeedf,	// (0x0003e00c) list_set_graphic_pane_ParamLimits

0xeedf,	// (0x0003e00c) list_set_graphic_pane

0x3bc8,	// (0x00032cf5) bg_set_opt_pane_cp4

0x6c00,	// (0x00035d2d) list_set_graphic_pane_g1_ParamLimits

0x6c00,	// (0x00035d2d) list_set_graphic_pane_g1

0x6c0c,	// (0x00035d39) list_set_graphic_pane_g2_ParamLimits

0x6c0c,	// (0x00035d39) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0003e860) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0003e860) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0003ebd7) volume_small_pane_cp_g

0x6c2e,	// (0x00035d5b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6c2e,	// (0x00035d5b) list_double2_large_graphic_pane_g1_cp2

0x6c3a,	// (0x00035d67) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6c3a,	// (0x00035d67) list_double2_large_graphic_pane_g2_cp2

0x6c49,	// (0x00035d76) list_double2_large_graphic_pane_g3_cp2

0x6c51,	// (0x00035d7e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6c51,	// (0x00035d7e) list_double2_large_graphic_pane_t1_cp2

0x6c67,	// (0x00035d94) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x6c67,	// (0x00035d94) list_double2_large_graphic_pane_t2_cp2

0x8135,	// (0x00037262) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x8135,	// (0x00037262) list_double_large_graphic_pane_g1_cp2

0x8146,	// (0x00037273) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x8146,	// (0x00037273) list_double_large_graphic_pane_g2_cp2

0x6d94,	// (0x00035ec1) list_double_large_graphic_pane_g3_cp2

0x8155,	// (0x00037282) list_double_large_graphic_pane_g4_cp

0x815d,	// (0x0003728a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x815d,	// (0x0003728a) list_double_large_graphic_pane_t1_cp2

0x8174,	// (0x000372a1) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x8174,	// (0x000372a1) list_double_large_graphic_pane_t2_cp2

0x6cc7,	// (0x00035df4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6cc7,	// (0x00035df4) list_double2_graphic_pane_g1_cp2

0x6cd3,	// (0x00035e00) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6cd3,	// (0x00035e00) list_double2_graphic_pane_g2_cp2

0x6ce2,	// (0x00035e0f) list_double2_graphic_pane_g3_cp2

0x6cea,	// (0x00035e17) list_double2_graphic_pane_t1_cp2_ParamLimits

0x6cea,	// (0x00035e17) list_double2_graphic_pane_t1_cp2

0x6d00,	// (0x00035e2d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x6d00,	// (0x00035e2d) list_double2_graphic_pane_t2_cp2

0x6d12,	// (0x00035e3f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x6d12,	// (0x00035e3f) list_single_number_heading_pane_g1_cp2

0x6d1e,	// (0x00035e4b) list_single_number_heading_pane_g2_cp2

0x6d26,	// (0x00035e53) list_single_number_heading_pane_t1_cp2_ParamLimits

0x6d26,	// (0x00035e53) list_single_number_heading_pane_t1_cp2

0x6d3c,	// (0x00035e69) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6d3c,	// (0x00035e69) list_single_number_heading_pane_t2_cp2

0x6d4e,	// (0x00035e7b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x6d4e,	// (0x00035e7b) list_single_number_heading_pane_t3_cp2

0x6d12,	// (0x00035e3f) list_single_heading_pane_g1_cp2_ParamLimits

0x6d12,	// (0x00035e3f) list_single_heading_pane_g1_cp2

0x6d1e,	// (0x00035e4b) list_single_heading_pane_g2_cp2

0x6d26,	// (0x00035e53) list_single_heading_pane_t1_cp2_ParamLimits

0x6d26,	// (0x00035e53) list_single_heading_pane_t1_cp2

0x7f3f,	// (0x0003706c) list_single_heading_pane_t2_cp2_ParamLimits

0x7f3f,	// (0x0003706c) list_single_heading_pane_t2_cp2

0x7e8f,	// (0x00036fbc) list_double_graphic_pane_g1_cp2_ParamLimits

0x7e8f,	// (0x00036fbc) list_double_graphic_pane_g1_cp2

0x7e9b,	// (0x00036fc8) list_double_graphic_pane_g2_cp2_ParamLimits

0x7e9b,	// (0x00036fc8) list_double_graphic_pane_g2_cp2

0x7eaa,	// (0x00036fd7) list_double_graphic_pane_g3_cp2

0x7eb2,	// (0x00036fdf) list_double_graphic_pane_t1_cp2_ParamLimits

0x7eb2,	// (0x00036fdf) list_double_graphic_pane_t1_cp2

0x7ec8,	// (0x00036ff5) list_double_graphic_pane_t2_cp2_ParamLimits

0x7ec8,	// (0x00036ff5) list_double_graphic_pane_t2_cp2

0x6d88,	// (0x00035eb5) list_double_number_pane_g1_cp2_ParamLimits

0x6d88,	// (0x00035eb5) list_double_number_pane_g1_cp2

0x6d94,	// (0x00035ec1) list_double_number_pane_g2_cp2

0x7e55,	// (0x00036f82) list_double_number_pane_t1_cp2_ParamLimits

0x7e55,	// (0x00036f82) list_double_number_pane_t1_cp2

0x7e67,	// (0x00036f94) list_double_number_pane_t2_cp2_ParamLimits

0x7e67,	// (0x00036f94) list_double_number_pane_t2_cp2

0x7e7d,	// (0x00036faa) list_double_number_pane_t3_cp2_ParamLimits

0x7e7d,	// (0x00036faa) list_double_number_pane_t3_cp2

0x7dcd,	// (0x00036efa) list_single_graphic_pane_g1_cp2_ParamLimits

0x7dcd,	// (0x00036efa) list_single_graphic_pane_g1_cp2

0x6d12,	// (0x00035e3f) list_single_graphic_pane_g2_cp2_ParamLimits

0x6d12,	// (0x00035e3f) list_single_graphic_pane_g2_cp2

0x6d1e,	// (0x00035e4b) list_single_graphic_pane_g3_cp2

0x7da5,	// (0x00036ed2) list_single_graphic_pane_t1_cp2_ParamLimits

0x7da5,	// (0x00036ed2) list_single_graphic_pane_t1_cp2

0x6d12,	// (0x00035e3f) list_single_number_pane_g1_cp2_ParamLimits

0x6d12,	// (0x00035e3f) list_single_number_pane_g1_cp2

0x6d1e,	// (0x00035e4b) list_single_number_pane_g2_cp2

0x7da5,	// (0x00036ed2) list_single_number_pane_t1_cp2_ParamLimits

0x7da5,	// (0x00036ed2) list_single_number_pane_t1_cp2

0x7dbb,	// (0x00036ee8) list_single_number_pane_t2_cp2_ParamLimits

0x7dbb,	// (0x00036ee8) list_single_number_pane_t2_cp2

0x6c3a,	// (0x00035d67) list_double2_pane_g1_cp2_ParamLimits

0x6c3a,	// (0x00035d67) list_double2_pane_g1_cp2

0x6c49,	// (0x00035d76) list_double2_pane_g2_cp2

0x6d60,	// (0x00035e8d) list_double2_pane_t1_cp2_ParamLimits

0x6d60,	// (0x00035e8d) list_double2_pane_t1_cp2

0x6d76,	// (0x00035ea3) list_double2_pane_t2_cp2_ParamLimits

0x6d76,	// (0x00035ea3) list_double2_pane_t2_cp2

0x6d88,	// (0x00035eb5) list_double_pane_g1_cp2_ParamLimits

0x6d88,	// (0x00035eb5) list_double_pane_g1_cp2

0x6d94,	// (0x00035ec1) list_double_pane_g2_cp2

0x6d9c,	// (0x00035ec9) list_double_pane_t1_cp2_ParamLimits

0x6d9c,	// (0x00035ec9) list_double_pane_t1_cp2

0x6db2,	// (0x00035edf) list_double_pane_t2_cp2_ParamLimits

0x6db2,	// (0x00035edf) list_double_pane_t2_cp2

0x6dda,	// (0x00035f07) list_single_pane_cp2_g3

0x6d12,	// (0x00035e3f) list_single_pane_g1_cp2_ParamLimits

0x6d12,	// (0x00035e3f) list_single_pane_g1_cp2

0x6d1e,	// (0x00035e4b) list_single_pane_g2_cp2

0x6dea,	// (0x00035f17) list_single_pane_t1_cp2_ParamLimits

0x6dea,	// (0x00035f17) list_single_pane_t1_cp2

0x6e02,	// (0x00035f2f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6e02,	// (0x00035f2f) list_single_large_graphic_pane_g1_cp2

0x6e0e,	// (0x00035f3b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x6e0e,	// (0x00035f3b) list_single_large_graphic_pane_g2_cp2

0x6e1a,	// (0x00035f47) list_single_large_graphic_pane_g3_cp2

0x6e22,	// (0x00035f4f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x6e22,	// (0x00035f4f) list_single_large_graphic_pane_g4_cp1

0x6e3c,	// (0x00035f69) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x6e3c,	// (0x00035f69) list_single_large_graphic_pane_t1_cp2

0x7d87,	// (0x00036eb4) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x7d87,	// (0x00036eb4) list_single_graphic_heading_pane_g1_cp2

0x7d62,	// (0x00036e8f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x7d62,	// (0x00036e8f) list_single_graphic_heading_pane_g4_cp2

0x6d1e,	// (0x00035e4b) list_single_graphic_heading_pane_g5_cp2

0x6d26,	// (0x00035e53) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6d26,	// (0x00035e53) list_single_graphic_heading_pane_t1_cp2

0x7d93,	// (0x00036ec0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x7d93,	// (0x00036ec0) list_single_graphic_heading_pane_t2_cp2

0x7d56,	// (0x00036e83) list_single_2graphic_pane_g1_cp2_ParamLimits

0x7d56,	// (0x00036e83) list_single_2graphic_pane_g1_cp2

0x7d62,	// (0x00036e8f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x7d62,	// (0x00036e8f) list_single_2graphic_pane_g2_cp2

0x6d1e,	// (0x00035e4b) list_single_2graphic_pane_g3_cp2

0x7271,	// (0x0003639e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x7271,	// (0x0003639e) list_single_2graphic_pane_g4_cp2

0x7d71,	// (0x00036e9e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x7d71,	// (0x00036e9e) list_single_2graphic_pane_t1_cp2

0x3a09,	// (0x00032b36) list_highlight_pane_g10_cp1

0x7968,	// (0x00036a95) list_highlight_pane_g1_cp1

0x7970,	// (0x00036a9d) list_highlight_pane_g2_cp1

0x7978,	// (0x00036aa5) list_highlight_pane_g3_cp1

0x7980,	// (0x00036aad) list_highlight_pane_g4_cp1

0x7988,	// (0x00036ab5) list_highlight_pane_g5_cp1

0x7990,	// (0x00036abd) list_highlight_pane_g6_cp1

0x7998,	// (0x00036ac5) list_highlight_pane_g7_cp1

0x79a0,	// (0x00036acd) list_highlight_pane_g8_cp1

0x79a8,	// (0x00036ad5) list_highlight_pane_g9_cp1

0x1163,	// (0x00030290) form_field_slider_pane_t3

0x1171,	// (0x0003029e) form_field_slider_pane_t4

0x78b2,	// (0x000369df) slider_form_pane_ParamLimits

0x78b2,	// (0x000369df) slider_form_pane

0x3bc8,	// (0x00032cf5) control_abbreviations

0x3bc8,	// (0x00032cf5) control_conventions

0x3bc8,	// (0x00032cf5) control_definitions

0x3bc8,	// (0x00032cf5) format_table_attribute

0x7f89,	// (0x000370b6) bg_popup_preview_window_pane_g9

0x3bc8,	// (0x00032cf5) format_table_data2

0x3bc8,	// (0x00032cf5) format_table_data3

0x3bc8,	// (0x00032cf5) format_table_data_example

0x0008,

0x3bc8,	// (0x00032cf5) intro_purpose

0xf8c3,	// (0x0003e9f0) bg_popup_preview_window_pane_g

0x3bc8,	// (0x00032cf5) texts_category

0x3bc8,	// (0x00032cf5) texts_graphics

0x6e52,	// (0x00035f7f) text_digital

0x6e61,	// (0x00035f8e) text_primary

0x6e70,	// (0x00035f9d) text_primary_small

0x6e7f,	// (0x00035fac) text_secondary

0x6e8e,	// (0x00035fbb) text_title

0x83fd,	// (0x0003752a) bg_passive_tab_pane_g1_cp3_srt

0x6ba7,	// (0x00035cd4) bg_passive_tab_pane_g2_cp3_srt

0x8406,	// (0x00037533) bg_passive_tab_pane_g3_cp3_srt

0x3f21,	// (0x0003304e) bg_active_tab_pane_cp3_srt_ParamLimits

0x3f21,	// (0x0003304e) bg_active_tab_pane_cp3_srt

0x840f,	// (0x0003753c) tabs_4_active_pane_srt_g1

0x01d4,	// (0x0002f301) tabs_4_active_pane_srt_t1_ParamLimits

0x01d4,	// (0x0002f301) tabs_4_active_pane_srt_t1

0x83fd,	// (0x0003752a) bg_active_tab_pane_g1_cp3_copy1

0x6ba7,	// (0x00035cd4) bg_active_tab_pane_g2_cp3_copy1

0x8406,	// (0x00037533) bg_active_tab_pane_g3_cp3_copy1

0x3d5c,	// (0x00032e89) tabs_2_long_active_pane_srt_ParamLimits

0x3d5c,	// (0x00032e89) tabs_2_long_active_pane_srt

0x3d5c,	// (0x00032e89) tabs_2_long_passive_pane_srt_ParamLimits

0x3d5c,	// (0x00032e89) tabs_2_long_passive_pane_srt

0x4f49,	// (0x00034076) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4f49,	// (0x00034076) bg_passive_tab_pane_cp4_srt

0x8338,	// (0x00037465) bg_passive_tab_pane_g1_cp4_srt

0x6ba7,	// (0x00035cd4) bg_passive_tab_pane_g2_cp4_srt

0x8341,	// (0x0003746e) bg_passive_tab_pane_g3_cp4_srt

0x3d5c,	// (0x00032e89) bg_active_tab_pane_cp4_srt_ParamLimits

0x3d5c,	// (0x00032e89) bg_active_tab_pane_cp4_srt

0x06e4,	// (0x0002f811) tabs_2_long_active_pane_srt_t1_ParamLimits

0x06e4,	// (0x0002f811) tabs_2_long_active_pane_srt_t1

0x8338,	// (0x00037465) bg_active_tab_pane_g1_cp4_srt

0x6ba7,	// (0x00035cd4) bg_active_tab_pane_g2_cp4_srt

0x8341,	// (0x0003746e) bg_active_tab_pane_g3_cp4_srt

0x3f21,	// (0x0003304e) tabs_3_long_active_pane_srt_ParamLimits

0x3f21,	// (0x0003304e) tabs_3_long_active_pane_srt

0x3f21,	// (0x0003304e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3f21,	// (0x0003304e) tabs_3_long_passive_pane_cp_srt

0x3f21,	// (0x0003304e) tabs_3_long_passive_pane_srt_ParamLimits

0x3f21,	// (0x0003304e) tabs_3_long_passive_pane_srt

0x4f49,	// (0x00034076) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4f49,	// (0x00034076) bg_passive_tab_pane_cp5_srt

0x6bee,	// (0x00035d1b) bg_passive_tab_pane_g1_cp5_srt

0x6ba7,	// (0x00035cd4) bg_passive_tab_pane_g2_cp5_srt

0x6bf7,	// (0x00035d24) bg_passive_tab_pane_g3_cp5_srt

0x3d5c,	// (0x00032e89) bg_active_tab_pane_cp5_srt_ParamLimits

0x3d5c,	// (0x00032e89) bg_active_tab_pane_cp5_srt

0x06fb,	// (0x0002f828) tabs_3_long_active_pane_srt_t1_ParamLimits

0x06fb,	// (0x0002f828) tabs_3_long_active_pane_srt_t1

0x6bee,	// (0x00035d1b) bg_active_tab_pane_g1_cp5_srt

0x6ba7,	// (0x00035cd4) bg_active_tab_pane_g2_cp5_srt

0x6bf7,	// (0x00035d24) bg_active_tab_pane_g3_cp5_srt

0x832a,	// (0x00037457) navi_text_pane_srt_t1

0x8322,	// (0x0003744f) navi_icon_pane_srt_g1

0x6fa6,	// (0x000360d3) midp_editing_number_pane_srt

0x6e9d,	// (0x00035fca) midp_ticker_pane_srt

0x6fae,	// (0x000360db) midp_ticker_pane_srt_g1

0x6fb6,	// (0x000360e3) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0003e87f) midp_ticker_pane_srt_g

0x6fbe,	// (0x000360eb) midp_ticker_pane_srt_t1

0x8313,	// (0x00037440) midp_editing_number_pane_t1_copy1

0x0999,	// (0x0002fac6) listscroll_midp_pane

0x0999,	// (0x0002fac6) midp_form_pane

0x6ea5,	// (0x00035fd2) midp_info_popup_window_ParamLimits

0x6ea5,	// (0x00035fd2) midp_info_popup_window

0x455f,	// (0x0003368c) bg_popup_sub_pane_cp50_ParamLimits

0x455f,	// (0x0003368c) bg_popup_sub_pane_cp50

0x75c7,	// (0x000366f4) listscroll_midp_info_pane_ParamLimits

0x75c7,	// (0x000366f4) listscroll_midp_info_pane

0x75af,	// (0x000366dc) listscroll_form_midp_pane_ParamLimits

0x75af,	// (0x000366dc) listscroll_form_midp_pane

0x75bb,	// (0x000366e8) scroll_bar_cp050

0x1157,	// (0x00030284) list_midp_pane

0x8c2d,	// (0x00037d5a) signal_pane_g2_cp

0x74e1,	// (0x0003660e) listscroll_midp_info_pane_t1_ParamLimits

0x74e1,	// (0x0003660e) listscroll_midp_info_pane_t1

0x74f9,	// (0x00036626) listscroll_midp_info_pane_t2_ParamLimits

0x74f9,	// (0x00036626) listscroll_midp_info_pane_t2

0x7537,	// (0x00036664) listscroll_midp_info_pane_t3_ParamLimits

0x7537,	// (0x00036664) listscroll_midp_info_pane_t3

0x7571,	// (0x0003669e) listscroll_midp_info_pane_t4_ParamLimits

0x7571,	// (0x0003669e) listscroll_midp_info_pane_t4

0x0003,

0xf7fe,	// (0x0003e92b) listscroll_midp_info_pane_t_ParamLimits

0xf7fe,	// (0x0003e92b) listscroll_midp_info_pane_t

0x45b4,	// (0x000336e1) scroll_pane_cp21

0x7485,	// (0x000365b2) form_midp_field_choice_group_pane

0x748e,	// (0x000365bb) form_midp_field_text_pane

0x74c7,	// (0x000365f4) form_midp_field_time_pane

0x74cf,	// (0x000365fc) form_midp_gauge_slider_pane

0x74d8,	// (0x00036605) form_midp_gauge_wait_pane

0x3bc8,	// (0x00032cf5) form_midp_image_pane

0xcc89,	// (0x0003bdb6) list_single_midp_pane_ParamLimits

0xcc89,	// (0x0003bdb6) list_single_midp_pane

0x7453,	// (0x00036580) form_midp_field_text_pane_t1

0x72a9,	// (0x000363d6) input_focus_pane_cp050

0x7474,	// (0x000365a1) list_midp_form_text_pane

0x7422,	// (0x0003654f) form_midp_field_choice_group_pane_t1

0x7430,	// (0x0003655d) input_focus_pane_cp051

0x7444,	// (0x00036571) list_midp_choice_pane

0x3bc8,	// (0x00032cf5) status_idle_pane

0x7406,	// (0x00036533) form_midp_field_time_pane_t1

0x3a09,	// (0x00032b36) wait_anim_pane_g2_copy1

0x7414,	// (0x00036541) form_midp_field_time_pane_t2

0x0001,

0x6f10,	// (0x0003603d) aid_navinavi_width_2_pane

0xf7f9,	// (0x0003e926) form_midp_field_time_pane_t

0x3bc8,	// (0x00032cf5) input_focus_pane_cp052

0x3bc8,	// (0x00032cf5) bg_input_focus_pane_cp040

0x73e2,	// (0x0003650f) form_midp_gauge_slider_pane_t1

0x73f0,	// (0x0003651d) form_midp_gauge_slider_pane_t2

0x113b,	// (0x00030268) form_midp_gauge_slider_pane_t3

0x1149,	// (0x00030276) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f0,	// (0x0003e91d) form_midp_gauge_slider_pane_t

0x73fe,	// (0x0003652b) form_midp_slider_pane

0x3d5c,	// (0x00032e89) bg_input_focus_pane_cp041_ParamLimits

0x3d5c,	// (0x00032e89) bg_input_focus_pane_cp041

0x73b2,	// (0x000364df) form_midp_gauge_wait_pane_t1_ParamLimits

0x73b2,	// (0x000364df) form_midp_gauge_wait_pane_t1

0x73c4,	// (0x000364f1) form_midp_gauge_wait_pane_t2_ParamLimits

0x73c4,	// (0x000364f1) form_midp_gauge_wait_pane_t2

0x0001,

0xf7eb,	// (0x0003e918) form_midp_gauge_wait_pane_t_ParamLimits

0xf7eb,	// (0x0003e918) form_midp_gauge_wait_pane_t

0x73d6,	// (0x00036503) form_midp_wait_pane_ParamLimits

0x73d6,	// (0x00036503) form_midp_wait_pane

0x737c,	// (0x000364a9) form_midp_image_pane_g1

0x7385,	// (0x000364b2) form_midp_image_pane_t1

0x7394,	// (0x000364c1) form_midp_image_pane_t2

0x73a3,	// (0x000364d0) form_midp_image_pane_t3

0x0002,

0xf7e4,	// (0x0003e911) form_midp_image_pane_t

0x7373,	// (0x000364a0) list_single_midp_pane_g1

0x33e7,	// (0x00032514) list_single_midp_pane_t1

0x735f,	// (0x0003648c) list_midp_form_item_pane_ParamLimits

0x735f,	// (0x0003648c) list_midp_form_item_pane

0x6eb8,	// (0x00035fe5) list_midp_form_item_pane_t1

0x6ec7,	// (0x00035ff4) midp_ticker_pane_g1

0x6ed3,	// (0x00036000) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0003e865) midp_ticker_pane_g

0x6edf,	// (0x0003600c) midp_ticker_pane_t1

0x8313,	// (0x00037440) midp_editing_number_pane_t1

0x83a7,	// (0x000374d4) midp_editing_number_pane

0x83b3,	// (0x000374e0) midp_ticker_pane

0x8303,	// (0x00037430) ai_message_heading_pane

0x3bc8,	// (0x00032cf5) bg_popup_window_pane_cp14

0x830b,	// (0x00037438) listscroll_ai_message_pane

0x828d,	// (0x000373ba) ai_message_heading_pane_g1_ParamLimits

0x828d,	// (0x000373ba) ai_message_heading_pane_g1

0x8299,	// (0x000373c6) ai_message_heading_pane_g2_ParamLimits

0x8299,	// (0x000373c6) ai_message_heading_pane_g2

0x82a5,	// (0x000373d2) ai_message_heading_pane_g3_ParamLimits

0x82a5,	// (0x000373d2) ai_message_heading_pane_g3

0x82b1,	// (0x000373de) ai_message_heading_pane_g4_ParamLimits

0x82b1,	// (0x000373de) ai_message_heading_pane_g4

0x0003,

0xf925,	// (0x0003ea52) ai_message_heading_pane_g_ParamLimits

0xf925,	// (0x0003ea52) ai_message_heading_pane_g

0x82bd,	// (0x000373ea) ai_message_heading_pane_t1_ParamLimits

0x82bd,	// (0x000373ea) ai_message_heading_pane_t1

0x82d7,	// (0x00037404) ai_message_heading_pane_t2_ParamLimits

0x82d7,	// (0x00037404) ai_message_heading_pane_t2

0x0001,

0xf92e,	// (0x0003ea5b) ai_message_heading_pane_t_ParamLimits

0xf92e,	// (0x0003ea5b) ai_message_heading_pane_t

0x82e9,	// (0x00037416) bg_popup_heading_pane_cp1_ParamLimits

0x82e9,	// (0x00037416) bg_popup_heading_pane_cp1

0x827b,	// (0x000373a8) list_ai_message_pane_ParamLimits

0x827b,	// (0x000373a8) list_ai_message_pane

0x45b4,	// (0x000336e1) scroll_pane_cp10

0x8217,	// (0x00037344) list_ai_message_pane_g1

0x821f,	// (0x0003734c) list_ai_message_pane_g2

0x0001,

0xf902,	// (0x0003ea2f) list_ai_message_pane_g

0x8227,	// (0x00037354) list_ai_message_pane_t1_ParamLimits

0x8227,	// (0x00037354) list_ai_message_pane_t1

0x823c,	// (0x00037369) list_ai_message_pane_t2_ParamLimits

0x823c,	// (0x00037369) list_ai_message_pane_t2

0x8251,	// (0x0003737e) list_ai_message_pane_t3_ParamLimits

0x8251,	// (0x0003737e) list_ai_message_pane_t3

0x8266,	// (0x00037393) list_ai_message_pane_t4_ParamLimits

0x8266,	// (0x00037393) list_ai_message_pane_t4

0x0003,

0xf907,	// (0x0003ea34) list_ai_message_pane_t_ParamLimits

0xf907,	// (0x0003ea34) list_ai_message_pane_t

0x8205,	// (0x00037332) cell_ai_soft_ind_pane_ParamLimits

0x8205,	// (0x00037332) cell_ai_soft_ind_pane

0x6ef1,	// (0x0003601e) cell_ai_soft_ind_pane_g1_ParamLimits

0x6ef1,	// (0x0003601e) cell_ai_soft_ind_pane_g1

0x3bc8,	// (0x00032cf5) grid_highlight_cp1

0x6efe,	// (0x0003602b) text_secondary_cp56_ParamLimits

0x6efe,	// (0x0003602b) text_secondary_cp56

0x81da,	// (0x00037307) example_general_pane_ParamLimits

0x81da,	// (0x00037307) example_general_pane

0x81e6,	// (0x00037313) example_parent_pane_g1_ParamLimits

0x81e6,	// (0x00037313) example_parent_pane_g1

0x81f2,	// (0x0003731f) example_parent_pane_t1_ParamLimits

0x81f2,	// (0x0003731f) example_parent_pane_t1

0xd4b8,	// (0x0003c5e5) popup_preview_text_window_ParamLimits

0xd4b8,	// (0x0003c5e5) popup_preview_text_window

0x6de2,	// (0x00035f0f) list_single_pane_cp2_g4

0x3ffd,	// (0x0003312a) bg_popup_preview_window_pane_ParamLimits

0x3ffd,	// (0x0003312a) bg_popup_preview_window_pane

0x7f91,	// (0x000370be) popup_preview_text_window_t1_ParamLimits

0x7f91,	// (0x000370be) popup_preview_text_window_t1

0x7faf,	// (0x000370dc) popup_preview_text_window_t2_ParamLimits

0x7faf,	// (0x000370dc) popup_preview_text_window_t2

0x7ff8,	// (0x00037125) popup_preview_text_window_t3_ParamLimits

0x7ff8,	// (0x00037125) popup_preview_text_window_t3

0x803d,	// (0x0003716a) popup_preview_text_window_t4_ParamLimits

0x803d,	// (0x0003716a) popup_preview_text_window_t4

0x0004,

0xf8d6,	// (0x0003ea03) popup_preview_text_window_t_ParamLimits

0xf8d6,	// (0x0003ea03) popup_preview_text_window_t

0x80bb,	// (0x000371e8) scroll_pane_cp11

0x7229,	// (0x00036356) bg_popup_preview_window_pane_g1

0x7f51,	// (0x0003707e) bg_popup_preview_window_pane_g2

0x7f59,	// (0x00037086) bg_popup_preview_window_pane_g3

0x7f61,	// (0x0003708e) bg_popup_preview_window_pane_g4

0x7f69,	// (0x00037096) bg_popup_preview_window_pane_g5

0x7f71,	// (0x0003709e) bg_popup_preview_window_pane_g6

0x7f79,	// (0x000370a6) bg_popup_preview_window_pane_g7

0x7f81,	// (0x000370ae) bg_popup_preview_window_pane_g8

0x3a1b,	// (0x00032b48) aid_popup_width_pane

0xd43a,	// (0x0003c567) popup_midp_note_alarm_window_ParamLimits

0xd43a,	// (0x0003c567) popup_midp_note_alarm_window

0x4452,	// (0x0003357f) data_form_pane_ParamLimits

0xcaf3,	// (0x0003bc20) form_field_data_pane_g1

0xcafd,	// (0x0003bc2a) form_field_data_pane_t1_ParamLimits

0x445e,	// (0x0003358b) input_focus_pane_ParamLimits

0x446c,	// (0x00033599) data_form_wide_pane_ParamLimits

0x30ed,	// (0x0003221a) form_field_data_wide_pane_g1

0x30f9,	// (0x00032226) form_field_data_wide_pane_t1_ParamLimits

0x41c2,	// (0x000332ef) input_focus_pane_cp6_ParamLimits

0x06c2,	// (0x0002f7ef) input_popup_find_pane_g1_ParamLimits

0x06c2,	// (0x0002f7ef) input_popup_find_pane_g1

0x485e,	// (0x0003398b) aid_navi_side_left_pane

0x486e,	// (0x0003399b) aid_navi_side_right_pane

0x7a39,	// (0x00036b66) bg_popup_window_pane_cp30_ParamLimits

0x7a39,	// (0x00036b66) bg_popup_window_pane_cp30

0x7ab3,	// (0x00036be0) popup_midp_note_alarm_window_g1_ParamLimits

0x7ab3,	// (0x00036be0) popup_midp_note_alarm_window_g1

0x7ae3,	// (0x00036c10) popup_midp_note_alarm_window_t1_ParamLimits

0x7ae3,	// (0x00036c10) popup_midp_note_alarm_window_t1

0x7b84,	// (0x00036cb1) popup_midp_note_alarm_window_t2_ParamLimits

0x7b84,	// (0x00036cb1) popup_midp_note_alarm_window_t2

0x7c32,	// (0x00036d5f) popup_midp_note_alarm_window_t3_ParamLimits

0x7c32,	// (0x00036d5f) popup_midp_note_alarm_window_t3

0x7c5a,	// (0x00036d87) popup_midp_note_alarm_window_t4_ParamLimits

0x7c5a,	// (0x00036d87) popup_midp_note_alarm_window_t4

0x7c7a,	// (0x00036da7) popup_midp_note_alarm_window_t5_ParamLimits

0x7c7a,	// (0x00036da7) popup_midp_note_alarm_window_t5

0x000a,

0xf873,	// (0x0003e9a0) popup_midp_note_alarm_window_t_ParamLimits

0xf873,	// (0x0003e9a0) popup_midp_note_alarm_window_t

0x7d26,	// (0x00036e53) wait_bar_pane_cp1_ParamLimits

0x7d26,	// (0x00036e53) wait_bar_pane_cp1

0x3bc8,	// (0x00032cf5) wait_anim_pane_copy1

0x3bc8,	// (0x00032cf5) wait_border_pane_copy1

0x777f,	// (0x000368ac) wait_border_pane_g1_copy1

0x3113,	// (0x00032240) form_field_popup_pane_g1

0xcb15,	// (0x0003bc42) form_field_popup_pane_t1_ParamLimits

0x445e,	// (0x0003358b) input_focus_pane_cp7_ParamLimits

0x4452,	// (0x0003357f) list_form_pane_ParamLimits

0x3133,	// (0x00032260) form_field_popup_wide_pane_g1

0x313b,	// (0x00032268) form_field_popup_wide_pane_t1_ParamLimits

0x445e,	// (0x0003358b) input_focus_pane_cp8_ParamLimits

0x448c,	// (0x000335b9) list_form_wide_pane_ParamLimits

0x8436,	// (0x00037563) aid_size_cell_graphic_pane

0xcb92,	// (0x0003bcbf) data_form_pane_t1_ParamLimits

0xccb0,	// (0x0003bddd) data_form_wide_pane_t1_ParamLimits

0x0e2b,	// (0x0002ff58) bg_status_flat_pane

0x0131,	// (0x0002f25e) title_pane_t1_ParamLimits

0x3d24,	// (0x00032e51) title_pane_t2_ParamLimits

0x3d4a,	// (0x00032e77) title_pane_t3_ParamLimits

0xf532,	// (0x0003e65f) title_pane_t_ParamLimits

0x07ca,	// (0x0002f8f7) level_1_signal_ParamLimits

0x07dc,	// (0x0002f909) level_2_signal_ParamLimits

0x07ef,	// (0x0002f91c) level_3_signal_ParamLimits

0x0802,	// (0x0002f92f) level_4_signal_ParamLimits

0x0815,	// (0x0002f942) level_5_signal_ParamLimits

0x0828,	// (0x0002f955) level_6_signal_ParamLimits

0x083b,	// (0x0002f968) level_7_signal_ParamLimits

0x07ca,	// (0x0002f8f7) level_1_battery_ParamLimits

0x07dc,	// (0x0002f909) level_2_battery_ParamLimits

0x07ef,	// (0x0002f91c) level_3_battery_ParamLimits

0x0802,	// (0x0002f92f) level_4_battery_ParamLimits

0x0815,	// (0x0002f942) level_5_battery_ParamLimits

0x0828,	// (0x0002f955) level_6_battery_ParamLimits

0x083b,	// (0x0002f968) level_7_battery_ParamLimits

0x7968,	// (0x00036a95) bg_status_flat_pane_g1

0x7970,	// (0x00036a9d) bg_status_flat_pane_g2

0x7978,	// (0x00036aa5) bg_status_flat_pane_g3

0x7980,	// (0x00036aad) bg_status_flat_pane_g4

0x7988,	// (0x00036ab5) bg_status_flat_pane_g5

0x7990,	// (0x00036abd) bg_status_flat_pane_g6

0x7998,	// (0x00036ac5) bg_status_flat_pane_g7

0x01be,	// (0x0002f2eb) tabs_3_active_pane_t1_ParamLimits

0x01be,	// (0x0002f2eb) tabs_3_passive_pane_t1_ParamLimits

0x01d4,	// (0x0002f301) tabs_4_active_pane_t1_ParamLimits

0x01d4,	// (0x0002f301) tabs_4_1_passive_pane_t1_ParamLimits

0x06ce,	// (0x0002f7fb) tabs_2_active_pane_t1_ParamLimits

0x06ce,	// (0x0002f7fb) tabs_2_passive_pane_t1_ParamLimits

0x3d5c,	// (0x00032e89) bg_active_tab_pane_cp4_ParamLimits

0x06e4,	// (0x0002f811) tabs_2_long_active_pane_t1_ParamLimits

0x4f49,	// (0x00034076) bg_passive_tab_pane_cp4_ParamLimits

0x5445,	// (0x00034572) list_single_midp_graphic_pane_t1_ParamLimits

0x3d5c,	// (0x00032e89) bg_active_tab_pane_cp5_ParamLimits

0x06fb,	// (0x0002f828) tabs_3_long_active_pane_t1_ParamLimits

0x4f49,	// (0x00034076) bg_passive_tab_pane_cp5_ParamLimits

0x5445,	// (0x00034572) list_single_midp_graphic_pane_t1

0x0e2b,	// (0x0002ff58) bg_status_flat_pane_ParamLimits

0x7108,	// (0x00036235) indicator_pane_cp2_ParamLimits

0x7108,	// (0x00036235) indicator_pane_cp2

0x0f91,	// (0x000300be) navi_pane_srt_ParamLimits

0x0f91,	// (0x000300be) navi_pane_srt

0x7130,	// (0x0003625d) popup_clock_digital_analogue_window_cp1

0x3e32,	// (0x00032f5f) indicator_pane_t1

0x6e9d,	// (0x00035fca) copy_highlight_pane

0x6e9d,	// (0x00035fca) cursor_graphics_pane

0x6e9d,	// (0x00035fca) graphic_within_text_pane

0x6e9d,	// (0x00035fca) link_highlight_pane

0x807e,	// (0x000371ab) popup_preview_text_window_t5_ParamLimits

0x807e,	// (0x000371ab) popup_preview_text_window_t5

0x6f18,	// (0x00036045) cursor_digital_pane

0x6f18,	// (0x00036045) cursor_primary_pane

0x6f29,	// (0x00036056) cursor_primary_small_pane

0x6f31,	// (0x0003605e) cursor_secondary_pane

0x6f39,	// (0x00036066) cursor_title_pane

0x6f18,	// (0x00036045) link_highlight_digital_pane

0x6f20,	// (0x0003604d) link_highlight_primary_pane

0x6f29,	// (0x00036056) link_highlight_primary_small_pane

0x6f31,	// (0x0003605e) link_highlight_secondary_pane

0x6f39,	// (0x00036066) link_highlight_title_pane

0x6f18,	// (0x00036045) copy_highlight_digital_pane

0x6f18,	// (0x00036045) copy_highlight_primary_pane

0x6f29,	// (0x00036056) copy_highlight_primary_small_pane

0x6f31,	// (0x0003605e) copy_highlight_secondary_pane

0x6f39,	// (0x00036066) copy_highlight_title_pane

0x6f31,	// (0x0003605e) graphic_text_digital_pane

0x79e8,	// (0x00036b15) graphic_text_primary_pane

0x79f1,	// (0x00036b1e) graphic_text_primary_small_pane

0x6f29,	// (0x00036056) graphic_text_secondary_pane

0x6f18,	// (0x00036045) graphic_text_title_pane

0x0c90,	// (0x0002fdbd) cursor_primary_pane_g1

0x79da,	// (0x00036b07) cursor_text_primary_t1

0x1193,	// (0x000302c0) cursor_primary_small_pane_g1

0x79cc,	// (0x00036af9) cursor_text_primary_small_t1

0x1189,	// (0x000302b6) cursor_primary_small_pane_g1_copy1

0x79be,	// (0x00036aeb) cursor_text_primary_small_t1_copy1

0x79b0,	// (0x00036add) cursor_text_title_t1

0x117f,	// (0x000302ac) cursor_title_pane_g1

0x0c90,	// (0x0002fdbd) cursor_digital_pane_g1

0x6f41,	// (0x0003606e) cursor_text_digital_t1

0x6f4f,	// (0x0003607c) link_highlight_primary_pane_g1

0x7959,	// (0x00036a86) link_highlight_primary_pane_t1

0x6f4f,	// (0x0003607c) link_highlight_primary_small_pane_g1

0x6f57,	// (0x00036084) link_highlight_primary_small_pane_t1

0x6f66,	// (0x00036093) link_highlight_secondary_pane_g1

0x6f6e,	// (0x0003609b) link_highlight_secondary_pane_t1

0x78be,	// (0x000369eb) link_highlight_title_pane_g1

0x78d5,	// (0x00036a02) link_highlight_title_pane_t1

0x78be,	// (0x000369eb) link_highlight_digital_pane_g1

0x78c6,	// (0x000369f3) link_highlight_digital_pane_t1

0x779a,	// (0x000368c7) copy_highlight_primary_pane_g1

0x77c0,	// (0x000368ed) copy_highlight_primary_pane_t1

0x779a,	// (0x000368c7) copy_highlight_primary_small_pane_g1

0x77b1,	// (0x000368de) copy_highlight_primary_small_pane_t1

0x6f7d,	// (0x000360aa) copy_highlight_secondary_pane_g1

0x6f85,	// (0x000360b2) copy_highlight_secondary_pane_t1

0x779a,	// (0x000368c7) copy_highlight_title_pane_g1

0x77a2,	// (0x000368cf) copy_highlight_title_pane_t1

0x779a,	// (0x000368c7) copy_highlight_digital_pane_g1

0x8557,	// (0x00037684) copy_highlight_digital_pane_t1

0x84ab,	// (0x000375d8) graphic_text_primary_pane_g1

0x853b,	// (0x00037668) graphic_text_primary_pane_t1

0x8549,	// (0x00037676) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x0003eacf) graphic_text_primary_pane_t

0x8517,	// (0x00037644) graphic_text_primary_small_pane_g1

0x851f,	// (0x0003764c) graphic_text_primary_small_pane_t1

0x852d,	// (0x0003765a) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x0003eaca) graphic_text_primary_small_pane_t

0x84f3,	// (0x00037620) graphic_text_secondary_pane_g1

0x84fb,	// (0x00037628) graphic_text_secondary_pane_t1

0x8509,	// (0x00037636) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x0003eac5) graphic_text_secondary_pane_t

0x84cf,	// (0x000375fc) graphic_text_title_pane_g1

0x84d7,	// (0x00037604) graphic_text_title_pane_t1

0x84e5,	// (0x00037612) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x0003eac0) graphic_text_title_pane_t

0x84ab,	// (0x000375d8) graphic_text_digital_pane_g1

0x84b3,	// (0x000375e0) graphic_text_digital_pane_t1

0x84c1,	// (0x000375ee) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x0003eabb) graphic_text_digital_pane_t

0x3d5c,	// (0x00032e89) navi_icon_pane_srt_ParamLimits

0x3d5c,	// (0x00032e89) navi_icon_pane_srt

0x3bc8,	// (0x00032cf5) navi_midp_pane_srt

0x3bc8,	// (0x00032cf5) navi_navi_pane_srt

0x3d5c,	// (0x00032e89) navi_text_pane_srt_ParamLimits

0x3d5c,	// (0x00032e89) navi_text_pane_srt

0x7f0a,	// (0x00037037) navi_navi_icon_text_pane_srt

0x7f12,	// (0x0003703f) navi_navi_pane_srt_g1_ParamLimits

0x7f12,	// (0x0003703f) navi_navi_pane_srt_g1

0x7f24,	// (0x00037051) navi_navi_pane_srt_g2_ParamLimits

0x7f24,	// (0x00037051) navi_navi_pane_srt_g2

0x0001,

0xf989,	// (0x0003eab6) navi_navi_pane_srt_g_ParamLimits

0xf989,	// (0x0003eab6) navi_navi_pane_srt_g

0x7f36,	// (0x00037063) navi_navi_tabs_pane_srt

0x7f0a,	// (0x00037037) navi_navi_text_pane_srt

0x7f0a,	// (0x00037037) navi_navi_volume_pane_srt

0x849c,	// (0x000375c9) navi_navi_text_pane_srt_t1

0x5817,	// (0x00034944) navi_navi_volume_pane_srt_g1

0x581f,	// (0x0003494c) volume_small_pane_srt_ParamLimits

0x581f,	// (0x0003494c) volume_small_pane_srt

0x4d17,	// (0x00033e44) volume_small_pane_srt_g1_ParamLimits

0x4d17,	// (0x00033e44) volume_small_pane_srt_g1

0x4d27,	// (0x00033e54) volume_small_pane_srt_g2_ParamLimits

0x4d27,	// (0x00033e54) volume_small_pane_srt_g2

0x4d38,	// (0x00033e65) volume_small_pane_srt_g3_ParamLimits

0x4d38,	// (0x00033e65) volume_small_pane_srt_g3

0x4d49,	// (0x00033e76) volume_small_pane_srt_g4_ParamLimits

0x4d49,	// (0x00033e76) volume_small_pane_srt_g4

0x4d5a,	// (0x00033e87) volume_small_pane_srt_g5_ParamLimits

0x4d5a,	// (0x00033e87) volume_small_pane_srt_g5

0x4d6b,	// (0x00033e98) volume_small_pane_srt_g6_ParamLimits

0x4d6b,	// (0x00033e98) volume_small_pane_srt_g6

0x4d7c,	// (0x00033ea9) volume_small_pane_srt_g7_ParamLimits

0x4d7c,	// (0x00033ea9) volume_small_pane_srt_g7

0x4d8d,	// (0x00033eba) volume_small_pane_srt_g8_ParamLimits

0x4d8d,	// (0x00033eba) volume_small_pane_srt_g8

0x4d9e,	// (0x00033ecb) volume_small_pane_srt_g9_ParamLimits

0x4d9e,	// (0x00033ecb) volume_small_pane_srt_g9

0x4daf,	// (0x00033edc) volume_small_pane_srt_g10_ParamLimits

0x4daf,	// (0x00033edc) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0003e86a) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0003e86a) volume_small_pane_srt_g

0x40a6,	// (0x000331d3) query_popup_data_pane_cp2

0x8482,	// (0x000375af) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x8482,	// (0x000375af) navi_navi_icon_text_pane_srt_t1

0x79e8,	// (0x00036b15) navi_tabs_2_long_pane_srt

0x79e8,	// (0x00036b15) navi_tabs_2_pane_srt

0x79e8,	// (0x00036b15) navi_tabs_3_long_pane_srt

0x79e8,	// (0x00036b15) navi_tabs_3_pane_srt

0x79e8,	// (0x00036b15) navi_tabs_4_pane_srt

0x57f7,	// (0x00034924) tabs_2_active_pane_srt_ParamLimits

0x57f7,	// (0x00034924) tabs_2_active_pane_srt

0x5807,	// (0x00034934) tabs_2_passive_pane_srt_ParamLimits

0x5807,	// (0x00034934) tabs_2_passive_pane_srt

0x72a9,	// (0x000363d6) bg_passive_tab_pane_cp1_srt_ParamLimits

0x72a9,	// (0x000363d6) bg_passive_tab_pane_cp1_srt

0x8460,	// (0x0003758d) bg_passive_tab_pane_g1_cp1_srt

0x6ba7,	// (0x00035cd4) bg_passive_tab_pane_g2_cp1_srt

0x8469,	// (0x00037596) bg_passive_tab_pane_g3_cp1_srt

0x3f21,	// (0x0003304e) bg_active_tab_pane_cp1_srt_ParamLimits

0x3f21,	// (0x0003304e) bg_active_tab_pane_cp1_srt

0x8472,	// (0x0003759f) tabs_2_active_pane_srt_g1

0x06ce,	// (0x0002f7fb) tabs_2_active_pane_srt_t1_ParamLimits

0x06ce,	// (0x0002f7fb) tabs_2_active_pane_srt_t1

0x8460,	// (0x0003758d) bg_active_tab_pane_g1_cp1_srt

0x6ba7,	// (0x00035cd4) bg_active_tab_pane_g2_cp1_srt

0x8469,	// (0x00037596) bg_active_tab_pane_g3_cp1_srt

0x57c4,	// (0x000348f1) tabs_3_active_pane_srt_ParamLimits

0x57c4,	// (0x000348f1) tabs_3_active_pane_srt

0x57d5,	// (0x00034902) tabs_3_passive_pane_cp_srt_ParamLimits

0x57d5,	// (0x00034902) tabs_3_passive_pane_cp_srt

0x57e6,	// (0x00034913) tabs_3_passive_pane_srt_ParamLimits

0x57e6,	// (0x00034913) tabs_3_passive_pane_srt

0x72a9,	// (0x000363d6) bg_passive_tab_pane_cp2_srt_ParamLimits

0x72a9,	// (0x000363d6) bg_passive_tab_pane_cp2_srt

0x6f94,	// (0x000360c1) bg_passive_tab_pane_g1_cp2_srt

0x6ba7,	// (0x00035cd4) bg_passive_tab_pane_g2_cp2_srt

0x6f9d,	// (0x000360ca) bg_passive_tab_pane_g3_cp2_srt

0x3f21,	// (0x0003304e) bg_active_tab_pane_cp2_srt_ParamLimits

0x3f21,	// (0x0003304e) bg_active_tab_pane_cp2_srt

0x8458,	// (0x00037585) tabs_3_active_pane_srt_g1

0x01be,	// (0x0002f2eb) tabs_3_active_pane_srt_t1_ParamLimits

0x01be,	// (0x0002f2eb) tabs_3_active_pane_srt_t1

0x6f94,	// (0x000360c1) bg_active_tab_pane_g1_cp2_srt

0x6ba7,	// (0x00035cd4) bg_active_tab_pane_g2_cp2_srt

0x6f9d,	// (0x000360ca) bg_active_tab_pane_g3_cp2_srt

0x577c,	// (0x000348a9) tabs_4_active_pane_srt_ParamLimits

0x577c,	// (0x000348a9) tabs_4_active_pane_srt

0x578e,	// (0x000348bb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x578e,	// (0x000348bb) tabs_4_passive_pane_cp2_srt

0x4f14,	// (0x00034041) aid_size_cell_toolbar

0xd1aa,	// (0x0003c2d7) main_idle_act_pane_ParamLimits

0x509e,	// (0x000341cb) popup_large_graphic_colour_window_ParamLimits

0xd708,	// (0x0003c835) popup_toolbar_window_ParamLimits

0xd708,	// (0x0003c835) popup_toolbar_window

0x3462,	// (0x0003258f) list_single_graphic_2heading_pane_ParamLimits

0x3462,	// (0x0003258f) list_single_graphic_2heading_pane

0x48ce,	// (0x000339fb) aid_size_cell_apps_grid_lsc_pane

0x48e0,	// (0x00033a0d) aid_size_cell_apps_grid_prt_pane

0x4f49,	// (0x00034076) bg_wml_button_pane_cp1_ParamLimits

0x4f49,	// (0x00034076) bg_wml_button_pane_cp1

0x7453,	// (0x00036580) form_midp_field_text_pane_t1_ParamLimits

0x72a9,	// (0x000363d6) input_focus_pane_cp050_ParamLimits

0x7474,	// (0x000365a1) list_midp_form_text_pane_ParamLimits

0x7430,	// (0x0003655d) input_focus_pane_cp051_ParamLimits

0x7444,	// (0x00036571) list_midp_choice_pane_ParamLimits

0x732d,	// (0x0003645a) list_single_2graphic_pane_cp3_ParamLimits

0x732d,	// (0x0003645a) list_single_2graphic_pane_cp3

0x7340,	// (0x0003646d) list_single_midp_graphic_pane_ParamLimits

0x7340,	// (0x0003646d) list_single_midp_graphic_pane

0x32e5,	// (0x00032412) list_single_graphic_2heading_pane_g1_ParamLimits

0x32e5,	// (0x00032412) list_single_graphic_2heading_pane_g1

0x32f1,	// (0x0003241e) list_single_graphic_2heading_pane_g4_ParamLimits

0x32f1,	// (0x0003241e) list_single_graphic_2heading_pane_g4

0x2cbb,	// (0x00031de8) list_single_graphic_2heading_pane_g5_ParamLimits

0x2cbb,	// (0x00031de8) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0003e8bd) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0003e8bd) list_single_graphic_2heading_pane_g

0x32fd,	// (0x0003242a) list_single_graphic_2heading_pane_t1_ParamLimits

0x32fd,	// (0x0003242a) list_single_graphic_2heading_pane_t1

0x3311,	// (0x0003243e) list_single_graphic_2heading_pane_t2_ParamLimits

0x3311,	// (0x0003243e) list_single_graphic_2heading_pane_t2

0x332b,	// (0x00032458) list_single_graphic_2heading_pane_t3_ParamLimits

0x332b,	// (0x00032458) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0003e8c4) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0003e8c4) list_single_graphic_2heading_pane_t

0x7173,	// (0x000362a0) bg_popup_sub_pane_cp2

0x7199,	// (0x000362c6) grid_toobar_pane

0x53e1,	// (0x0003450e) cell_toolbar_pane_ParamLimits

0x53e1,	// (0x0003450e) cell_toolbar_pane

0x71cf,	// (0x000362fc) cell_toolbar_pane_g1_ParamLimits

0x71cf,	// (0x000362fc) cell_toolbar_pane_g1

0x71e1,	// (0x0003630e) cell_toolbar_pane_g2_ParamLimits

0x71e1,	// (0x0003630e) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x0003e8cb) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x0003e8cb) cell_toolbar_pane_g

0x7203,	// (0x00036330) grid_highlight_pane_cp2_ParamLimits

0x7203,	// (0x00036330) grid_highlight_pane_cp2

0x721d,	// (0x0003634a) toolbar_button_pane

0x7229,	// (0x00036356) toolbar_button_pane_g1

0x7231,	// (0x0003635e) toolbar_button_pane_g2

0x7239,	// (0x00036366) toolbar_button_pane_g3

0x7241,	// (0x0003636e) toolbar_button_pane_g4

0x7249,	// (0x00036376) toolbar_button_pane_g5

0x7251,	// (0x0003637e) toolbar_button_pane_g6

0x7259,	// (0x00036386) toolbar_button_pane_g7

0x7261,	// (0x0003638e) toolbar_button_pane_g8

0x7269,	// (0x00036396) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x0003e8d0) toolbar_button_pane_g

0x5410,	// (0x0003453d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5410,	// (0x0003453d) list_single_2graphic_pane_g1_cp3

0xd74a,	// (0x0003c877) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd74a,	// (0x0003c877) list_single_2graphic_pane_g2_cp3

0x6d1e,	// (0x00035e4b) list_single_2graphic_pane_g3_cp3

0x7271,	// (0x0003639e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7271,	// (0x0003639e) list_single_2graphic_pane_g4_cp3

0x542b,	// (0x00034558) list_single_2graphic_pane_t1_cp3_ParamLimits

0x542b,	// (0x00034558) list_single_2graphic_pane_t1_cp3

0x6d12,	// (0x00035e3f) list_single_midp_graphic_pane_g2_ParamLimits

0x6d12,	// (0x00035e3f) list_single_midp_graphic_pane_g2

0x32d5,	// (0x00032402) aid_zoom_text_primary

0x4f1c,	// (0x00034049) aid_zoom_text_secondary

0x0cca,	// (0x0002fdf7) status_small_pane_g7_ParamLimits

0x0cca,	// (0x0002fdf7) status_small_pane_g7

0x0ced,	// (0x0002fe1a) status_small_pane_t1_ParamLimits

0x0106,	// (0x0002f233) title_pane_g2

0x0003,

0xf529,	// (0x0003e656) title_pane_g

0x03a4,	// (0x0002f4d1) aid_size_cell_colour_1_pane_ParamLimits

0x03a4,	// (0x0002f4d1) aid_size_cell_colour_1_pane

0x03b8,	// (0x0002f4e5) aid_size_cell_colour_2_pane_ParamLimits

0x03b8,	// (0x0002f4e5) aid_size_cell_colour_2_pane

0x03cc,	// (0x0002f4f9) aid_size_cell_colour_3_pane_ParamLimits

0x03cc,	// (0x0002f4f9) aid_size_cell_colour_3_pane

0x03e0,	// (0x0002f50d) aid_size_cell_colour_4_pane_ParamLimits

0x03e0,	// (0x0002f50d) aid_size_cell_colour_4_pane

0x477d,	// (0x000338aa) title_pane_stacon_g1_ParamLimits

0x477d,	// (0x000338aa) title_pane_stacon_g1

0x7817,	// (0x00036944) popup_note_wait_window_g3_ParamLimits

0x7817,	// (0x00036944) popup_note_wait_window_g3

0x788d,	// (0x000369ba) popup_note_wait_window_t5_ParamLimits

0x788d,	// (0x000369ba) popup_note_wait_window_t5

0x3bc8,	// (0x00032cf5) main_feb_china_hwr_fs_writing_pane

0xd20b,	// (0x0003c338) popup_feb_china_hwr_fs_window_ParamLimits

0xd20b,	// (0x0003c338) popup_feb_china_hwr_fs_window

0xd75b,	// (0x0003c888) aid_size_cell_hwr_fs_ParamLimits

0xd75b,	// (0x0003c888) aid_size_cell_hwr_fs

0x72a9,	// (0x000363d6) bg_popup_sub_pane_cp3_ParamLimits

0x72a9,	// (0x000363d6) bg_popup_sub_pane_cp3

0xd770,	// (0x0003c89d) grid_hwr_fs_pane_ParamLimits

0xd770,	// (0x0003c89d) grid_hwr_fs_pane

0x5484,	// (0x000345b1) linegrid_hwr_fs_pane_ParamLimits

0x5484,	// (0x000345b1) linegrid_hwr_fs_pane

0xd788,	// (0x0003c8b5) cell_hwr_fs_pane_ParamLimits

0xd788,	// (0x0003c8b5) cell_hwr_fs_pane

0x72b5,	// (0x000363e2) linegrid_hwr_fs_pane_g1_ParamLimits

0x72b5,	// (0x000363e2) linegrid_hwr_fs_pane_g1

0x110f,	// (0x0003023c) linegrid_hwr_fs_pane_g2_ParamLimits

0x110f,	// (0x0003023c) linegrid_hwr_fs_pane_g2

0x72c1,	// (0x000363ee) linegrid_hwr_fs_pane_g3_ParamLimits

0x72c1,	// (0x000363ee) linegrid_hwr_fs_pane_g3

0x54b2,	// (0x000345df) linegrid_hwr_fs_pane_g4_ParamLimits

0x54b2,	// (0x000345df) linegrid_hwr_fs_pane_g4

0x54cc,	// (0x000345f9) linegrid_hwr_fs_pane_g5_ParamLimits

0x54cc,	// (0x000345f9) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c9,	// (0x0003e8f6) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c9,	// (0x0003e8f6) linegrid_hwr_fs_pane_g

0x72cd,	// (0x000363fa) cell_hwr_fs_pane_g1_ParamLimits

0x72cd,	// (0x000363fa) cell_hwr_fs_pane_g1

0x7141,	// (0x0003626e) cell_hwr_fs_pane_g2_ParamLimits

0x7141,	// (0x0003626e) cell_hwr_fs_pane_g2

0x1121,	// (0x0003024e) cell_hwr_fs_pane_g3_ParamLimits

0x1121,	// (0x0003024e) cell_hwr_fs_pane_g3

0x112e,	// (0x0003025b) cell_hwr_fs_pane_g4_ParamLimits

0x112e,	// (0x0003025b) cell_hwr_fs_pane_g4

0x0003,

0xf7d4,	// (0x0003e901) cell_hwr_fs_pane_g_ParamLimits

0xf7d4,	// (0x0003e901) cell_hwr_fs_pane_g

0xd7a8,	// (0x0003c8d5) cell_hwr_fs_pane_t1

0x3bc8,	// (0x00032cf5) grid_highlight_pane_cp6

0x3bc8,	// (0x00032cf5) main_idle_act2_pane

0x459b,	// (0x000336c8) aid_inside_area_popup_secondary

0x11b3,	// (0x000302e0) aid_inside_area_window_primary_ParamLimits

0x11b3,	// (0x000302e0) aid_inside_area_window_primary

0x8566,	// (0x00037693) ai2_news_ticker_pane

0x856e,	// (0x0003769b) aid_size_cell_ai1_link_ParamLimits

0x856e,	// (0x0003769b) aid_size_cell_ai1_link

0x150b,	// (0x00030638) popup_ai2_data_window_ParamLimits

0x150b,	// (0x00030638) popup_ai2_data_window

0x8588,	// (0x000376b5) popup_ai2_link_window_ParamLimits

0x8588,	// (0x000376b5) popup_ai2_link_window

0x72a9,	// (0x000363d6) bg_popup_sub_pane_cp4_ParamLimits

0x72a9,	// (0x000363d6) bg_popup_sub_pane_cp4

0x859c,	// (0x000376c9) grid_ai2_link_pane_ParamLimits

0x859c,	// (0x000376c9) grid_ai2_link_pane

0x85b3,	// (0x000376e0) popup_ai2_link_window_g1_ParamLimits

0x85b3,	// (0x000376e0) popup_ai2_link_window_g1

0x85bf,	// (0x000376ec) popup_ai2_link_window_g2_ParamLimits

0x85bf,	// (0x000376ec) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x0003ead4) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x0003ead4) popup_ai2_link_window_g

0x85ce,	// (0x000376fb) ai2_mp_button_pane

0x85d6,	// (0x00037703) ai2_mp_volume_pane

0x7430,	// (0x0003655d) bg_popup_sub_pane_cp5_ParamLimits

0x7430,	// (0x0003655d) bg_popup_sub_pane_cp5

0x85de,	// (0x0003770b) heading_ai2_gene_pane_ParamLimits

0x85de,	// (0x0003770b) heading_ai2_gene_pane

0x85ea,	// (0x00037717) list_ai2_gene_pane_ParamLimits

0x85ea,	// (0x00037717) list_ai2_gene_pane

0x8632,	// (0x0003775f) cell_ai2_link_pane_ParamLimits

0x8632,	// (0x0003775f) cell_ai2_link_pane

0x8648,	// (0x00037775) cell_ai2_link_pane_g1

0x3bc8,	// (0x00032cf5) grid_highlight_pane_cp7

0x5834,	// (0x00034961) ai2_mp_volume_pane_g1

0x86e5,	// (0x00037812) ai2_mp_volume_pane_g2

0x1535,	// (0x00030662) list_ai2_gene_pane_t1

0x86ed,	// (0x0003781a) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x0003eaed) ai2_mp_volume_pane_g

0x583c,	// (0x00034969) volume_small_pane_cp3

0x86f5,	// (0x00037822) aid_size_cell_ai2_button

0x86fd,	// (0x0003782a) grid_ai2_button_pane

0x8706,	// (0x00037833) cell_ai2_button_pane_ParamLimits

0x8706,	// (0x00037833) cell_ai2_button_pane

0x3a09,	// (0x00032b36) cell_ai2_button_pane_g1

0x3bc8,	// (0x00032cf5) grid_highlight_pane_cp8

0x86a5,	// (0x000377d2) ai2_gene_pane_t1_ParamLimits

0x86a5,	// (0x000377d2) ai2_gene_pane_t1

0xd192,	// (0x0003c2bf) aid_height_parent_landscape

0x835f,	// (0x0003748c) aid_height_set_list

0x836b,	// (0x00037498) aid_size_parent

0x8436,	// (0x00037563) aid_size_cell_graphic_pane_ParamLimits

0x85fa,	// (0x00037727) popup_ai2_data_window_g1_ParamLimits

0x85fa,	// (0x00037727) popup_ai2_data_window_g1

0x8606,	// (0x00037733) ai2_news_ticker_pane_g1

0x860e,	// (0x0003773b) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x0003ead9) ai2_news_ticker_pane_g

0x8616,	// (0x00037743) ai2_news_ticker_pane_t1

0x8624,	// (0x00037751) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x0003eade) ai2_news_ticker_pane_t

0x8651,	// (0x0003777e) heading_ai2_gene_pane_g1

0x8659,	// (0x00037786) heading_ai2_gene_pane_t1_ParamLimits

0x8659,	// (0x00037786) heading_ai2_gene_pane_t1

0x866e,	// (0x0003779b) list_highlight_pane_cp6

0x151f,	// (0x0003064c) ai2_gene_pane_ParamLimits

0x151f,	// (0x0003064c) ai2_gene_pane

0x1543,	// (0x00030670) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x0003eae3) list_ai2_gene_pane_t

0x8676,	// (0x000377a3) list_highlight_pane_cp8_ParamLimits

0x8676,	// (0x000377a3) list_highlight_pane_cp8

0x8687,	// (0x000377b4) ai2_gene_pane_g1_ParamLimits

0x8687,	// (0x000377b4) ai2_gene_pane_g1

0x8699,	// (0x000377c6) ai2_gene_pane_g2_ParamLimits

0x8699,	// (0x000377c6) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x0003eae8) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x0003eae8) ai2_gene_pane_g

0x4343,	// (0x00033470) scroll_pane_cp12

0xd151,	// (0x0003c27e) control_pane_t3_ParamLimits

0xd151,	// (0x0003c27e) control_pane_t3

0x0cde,	// (0x0002fe0b) status_small_pane_g8_ParamLimits

0x0cde,	// (0x0002fe0b) status_small_pane_g8

0xd27f,	// (0x0003c3ac) popup_find_window_ParamLimits

0xd472,	// (0x0003c59f) popup_note_image_window_ParamLimits

0x2d78,	// (0x00031ea5) list_double2_graphic_pane_vc_g1_ParamLimits

0x2d78,	// (0x00031ea5) list_double2_graphic_pane_vc_g1

0x43dd,	// (0x0003350a) list_double2_graphic_pane_vc_g2_ParamLimits

0x43dd,	// (0x0003350a) list_double2_graphic_pane_vc_g2

0x43e9,	// (0x00033516) list_double2_graphic_pane_vc_g3_ParamLimits

0x43e9,	// (0x00033516) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0003e6c9) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0003e6c9) list_double2_graphic_pane_vc_g

0x2d84,	// (0x00031eb1) list_double2_graphic_pane_vc_t1_ParamLimits

0x2d84,	// (0x00031eb1) list_double2_graphic_pane_vc_t1

0x43dd,	// (0x0003350a) list_single_heading_pane_vc_g1_ParamLimits

0x43dd,	// (0x0003350a) list_single_heading_pane_vc_g1

0x43e9,	// (0x00033516) list_single_heading_pane_vc_g2_ParamLimits

0x43e9,	// (0x00033516) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0003e6da) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0003e6da) list_single_heading_pane_vc_g

0x3343,	// (0x00032470) list_single_heading_pane_vc_t1_ParamLimits

0x3343,	// (0x00032470) list_single_heading_pane_vc_t1

0x3359,	// (0x00032486) list_single_heading_pane_vc_t2_ParamLimits

0x3359,	// (0x00032486) list_single_heading_pane_vc_t2

0x0001,

0xf7b8,	// (0x0003e8e5) list_single_heading_pane_vc_t_ParamLimits

0xf7b8,	// (0x0003e8e5) list_single_heading_pane_vc_t

0x336b,	// (0x00032498) list_setting_number_pane_vc_g1_ParamLimits

0x336b,	// (0x00032498) list_setting_number_pane_vc_g1

0x3377,	// (0x000324a4) list_setting_number_pane_vc_g2_ParamLimits

0x3377,	// (0x000324a4) list_setting_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x0003e8ea) list_setting_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x0003e8ea) list_setting_number_pane_vc_g

0x3383,	// (0x000324b0) list_setting_number_pane_vc_t1_ParamLimits

0x3383,	// (0x000324b0) list_setting_number_pane_vc_t1

0x3397,	// (0x000324c4) list_setting_number_pane_vc_t2_ParamLimits

0x3397,	// (0x000324c4) list_setting_number_pane_vc_t2

0x33b3,	// (0x000324e0) list_setting_number_pane_vc_t3_ParamLimits

0x33b3,	// (0x000324e0) list_setting_number_pane_vc_t3

0x0002,

0xf7c2,	// (0x0003e8ef) list_setting_number_pane_vc_t_ParamLimits

0xf7c2,	// (0x0003e8ef) list_setting_number_pane_vc_t

0x33db,	// (0x00032508) set_value_pane_vc_ParamLimits

0x33db,	// (0x00032508) set_value_pane_vc

0x3462,	// (0x0003258f) list_double2_graphic_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_double2_graphic_pane_vc

0x570e,	// (0x0003483b) list_double2_large_graphic_pane_vc_ParamLimits

0x570e,	// (0x0003483b) list_double2_large_graphic_pane_vc

0x3462,	// (0x0003258f) list_double2_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_double2_pane_vc

0x3462,	// (0x0003258f) list_double_graphic_heading_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_double_graphic_heading_pane_vc

0x3462,	// (0x0003258f) list_double_graphic_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_double_graphic_pane_vc

0x3462,	// (0x0003258f) list_double_heading_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_double_heading_pane_vc

0x571f,	// (0x0003484c) list_double_large_graphic_pane_vc_ParamLimits

0x571f,	// (0x0003484c) list_double_large_graphic_pane_vc

0x3462,	// (0x0003258f) list_double_number_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_double_number_pane_vc

0x3462,	// (0x0003258f) list_double_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_double_pane_vc

0x3462,	// (0x0003258f) list_double_time_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_double_time_pane_vc

0x3462,	// (0x0003258f) list_setting_number_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_setting_number_pane_vc

0x3462,	// (0x0003258f) list_setting_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_setting_pane_vc

0x3462,	// (0x0003258f) list_single_graphic_heading_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_single_graphic_heading_pane_vc

0x3462,	// (0x0003258f) list_single_heading_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_single_heading_pane_vc

0x3462,	// (0x0003258f) list_single_number_heading_pane_vc_ParamLimits

0x3462,	// (0x0003258f) list_single_number_heading_pane_vc

0x2d78,	// (0x00031ea5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2d78,	// (0x00031ea5) list_double_graphic_heading_pane_vc_g1

0x43dd,	// (0x0003350a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x43dd,	// (0x0003350a) list_double_graphic_heading_pane_vc_g2

0x43e9,	// (0x00033516) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x43e9,	// (0x00033516) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf59c,	// (0x0003e6c9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0003e6c9) list_double_graphic_heading_pane_vc_g

0x349f,	// (0x000325cc) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x349f,	// (0x000325cc) list_double_graphic_heading_pane_vc_t1

0x34b5,	// (0x000325e2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x34b5,	// (0x000325e2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c7,	// (0x0003eaf4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c7,	// (0x0003eaf4) list_double_graphic_heading_pane_vc_t

0x336b,	// (0x00032498) list_setting_pane_vc_g1_ParamLimits

0x336b,	// (0x00032498) list_setting_pane_vc_g1

0x3377,	// (0x000324a4) list_setting_pane_vc_g2_ParamLimits

0x3377,	// (0x000324a4) list_setting_pane_vc_g2

0x0001,

0xf7bd,	// (0x0003e8ea) list_setting_pane_vc_g_ParamLimits

0xf7bd,	// (0x0003e8ea) list_setting_pane_vc_g

0x34cd,	// (0x000325fa) list_setting_pane_vc_t1_ParamLimits

0x34cd,	// (0x000325fa) list_setting_pane_vc_t1

0x34e1,	// (0x0003260e) list_setting_pane_vc_t2_ParamLimits

0x34e1,	// (0x0003260e) list_setting_pane_vc_t2

0x0001,

0xfa0a,	// (0x0003eb37) list_setting_pane_vc_t_ParamLimits

0xfa0a,	// (0x0003eb37) list_setting_pane_vc_t

0x33db,	// (0x00032508) set_value_pane_cp_vc_ParamLimits

0x33db,	// (0x00032508) set_value_pane_cp_vc

0x43dd,	// (0x0003350a) list_single_number_heading_pane_vc_g1_ParamLimits

0x43dd,	// (0x0003350a) list_single_number_heading_pane_vc_g1

0x43e9,	// (0x00033516) list_single_number_heading_pane_vc_g2_ParamLimits

0x43e9,	// (0x00033516) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0003e6da) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0003e6da) list_single_number_heading_pane_vc_g

0x3343,	// (0x00032470) list_single_number_heading_pane_vc_t1_ParamLimits

0x3343,	// (0x00032470) list_single_number_heading_pane_vc_t1

0x34f5,	// (0x00032622) list_single_number_heading_pane_vc_t2_ParamLimits

0x34f5,	// (0x00032622) list_single_number_heading_pane_vc_t2

0x3507,	// (0x00032634) list_single_number_heading_pane_vc_t3_ParamLimits

0x3507,	// (0x00032634) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0f,	// (0x0003eb3c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0003eb3c) list_single_number_heading_pane_vc_t

0x2d78,	// (0x00031ea5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2d78,	// (0x00031ea5) list_single_graphic_heading_pane_vc_g1

0x43dd,	// (0x0003350a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x43dd,	// (0x0003350a) list_single_graphic_heading_pane_vc_g4

0x43e9,	// (0x00033516) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x43e9,	// (0x00033516) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf59c,	// (0x0003e6c9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0003e6c9) list_single_graphic_heading_pane_vc_g

0x3343,	// (0x00032470) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3343,	// (0x00032470) list_single_graphic_heading_pane_vc_t1

0x3519,	// (0x00032646) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3519,	// (0x00032646) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x0003eb43) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x0003eb43) list_single_graphic_heading_pane_vc_t

0x43dd,	// (0x0003350a) list_double2_pane_vc_g1_ParamLimits

0x43dd,	// (0x0003350a) list_double2_pane_vc_g1

0x43e9,	// (0x00033516) list_double2_pane_vc_g2_ParamLimits

0x43e9,	// (0x00033516) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0003e6da) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0003e6da) list_double2_pane_vc_g

0x352b,	// (0x00032658) list_double2_pane_vc_t1_ParamLimits

0x352b,	// (0x00032658) list_double2_pane_vc_t1

0x438d,	// (0x000334ba) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x438d,	// (0x000334ba) list_double2_large_graphic_pane_vc_g1

0x4399,	// (0x000334c6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4399,	// (0x000334c6) list_double2_large_graphic_pane_vc_g2

0x43a5,	// (0x000334d2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x43a5,	// (0x000334d2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0003e6f2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0003e6f2) list_double2_large_graphic_pane_vc_g

0x2c6e,	// (0x00031d9b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2c6e,	// (0x00031d9b) list_double2_large_graphic_pane_vc_t1

0x3541,	// (0x0003266e) list_double_time_pane_vc_g1_ParamLimits

0x3541,	// (0x0003266e) list_double_time_pane_vc_g1

0x354d,	// (0x0003267a) list_double_time_pane_vc_g2_ParamLimits

0x354d,	// (0x0003267a) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0003eb48) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0003eb48) list_double_time_pane_vc_g

0x3559,	// (0x00032686) list_double_time_pane_vc_t1_ParamLimits

0x3559,	// (0x00032686) list_double_time_pane_vc_t1

0x3577,	// (0x000326a4) list_double_time_pane_vc_t2_ParamLimits

0x3577,	// (0x000326a4) list_double_time_pane_vc_t2

0x35c0,	// (0x000326ed) list_double_time_pane_vc_t3_ParamLimits

0x35c0,	// (0x000326ed) list_double_time_pane_vc_t3

0x35d2,	// (0x000326ff) list_double_time_pane_vc_t4_ParamLimits

0x35d2,	// (0x000326ff) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0003eb4d) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0003eb4d) list_double_time_pane_vc_t

0x43dd,	// (0x0003350a) list_double_pane_vc_g1_ParamLimits

0x43dd,	// (0x0003350a) list_double_pane_vc_g1

0x43e9,	// (0x00033516) list_double_pane_vc_g2_ParamLimits

0x43e9,	// (0x00033516) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0003e6da) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0003e6da) list_double_pane_vc_g

0x35e4,	// (0x00032711) list_double_pane_vc_t1_ParamLimits

0x35e4,	// (0x00032711) list_double_pane_vc_t1

0x35f6,	// (0x00032723) list_double_pane_vc_t2_ParamLimits

0x35f6,	// (0x00032723) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0003eb56) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0003eb56) list_double_pane_vc_t

0x43dd,	// (0x0003350a) list_double_number_pane_vc_g1_ParamLimits

0x43dd,	// (0x0003350a) list_double_number_pane_vc_g1

0x43e9,	// (0x00033516) list_double_number_pane_vc_g2_ParamLimits

0x43e9,	// (0x00033516) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0003e6da) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0003e6da) list_double_number_pane_vc_g

0x360c,	// (0x00032739) list_double_number_pane_vc_t1_ParamLimits

0x360c,	// (0x00032739) list_double_number_pane_vc_t1

0x3620,	// (0x0003274d) list_double_number_pane_vc_t2_ParamLimits

0x3620,	// (0x0003274d) list_double_number_pane_vc_t2

0x3632,	// (0x0003275f) list_double_number_pane_vc_t3_ParamLimits

0x3632,	// (0x0003275f) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0003eb5b) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003eb5b) list_double_number_pane_vc_t

0x5896,	// (0x000349c3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5896,	// (0x000349c3) list_double_large_graphic_pane_vc_g1

0x58be,	// (0x000349eb) list_double_large_graphic_pane_vc_g2_ParamLimits

0x58be,	// (0x000349eb) list_double_large_graphic_pane_vc_g2

0x58d2,	// (0x000349ff) list_double_large_graphic_pane_vc_g3_ParamLimits

0x58d2,	// (0x000349ff) list_double_large_graphic_pane_vc_g3

0x3648,	// (0x00032775) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3648,	// (0x00032775) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0003eb62) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0003eb62) list_double_large_graphic_pane_vc_g

0x3658,	// (0x00032785) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3658,	// (0x00032785) list_double_large_graphic_pane_vc_t1

0x3672,	// (0x0003279f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3672,	// (0x0003279f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0003eb6b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003eb6b) list_double_large_graphic_pane_vc_t

0x43dd,	// (0x0003350a) list_double_heading_pane_vc_g1_ParamLimits

0x43dd,	// (0x0003350a) list_double_heading_pane_vc_g1

0x43e9,	// (0x00033516) list_double_heading_pane_vc_g2_ParamLimits

0x43e9,	// (0x00033516) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0003e6da) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0003e6da) list_double_heading_pane_vc_g

0x3692,	// (0x000327bf) list_double_heading_pane_vc_t1_ParamLimits

0x3692,	// (0x000327bf) list_double_heading_pane_vc_t1

0x3343,	// (0x00032470) list_double_heading_pane_vc_t2_ParamLimits

0x3343,	// (0x00032470) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0003eb70) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0003eb70) list_double_heading_pane_vc_t

0x36a4,	// (0x000327d1) list_double_graphic_pane_vc_g1_ParamLimits

0x36a4,	// (0x000327d1) list_double_graphic_pane_vc_g1

0x36b0,	// (0x000327dd) list_double_graphic_pane_vc_g2_ParamLimits

0x36b0,	// (0x000327dd) list_double_graphic_pane_vc_g2

0x43dd,	// (0x0003350a) list_double_graphic_pane_vc_g3_ParamLimits

0x43dd,	// (0x0003350a) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0003eb75) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0003eb75) list_double_graphic_pane_vc_g

0x36cd,	// (0x000327fa) list_double_graphic_pane_vc_t1_ParamLimits

0x36cd,	// (0x000327fa) list_double_graphic_pane_vc_t1

0x36eb,	// (0x00032818) list_double_graphic_pane_vc_t2_ParamLimits

0x36eb,	// (0x00032818) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0003eb7e) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0003eb7e) list_double_graphic_pane_vc_t

0x3a23,	// (0x00032b50) aid_size_cell_fastswap

0xce3c,	// (0x0003bf69) aid_size_cell_touch_ParamLimits

0xce3c,	// (0x0003bf69) aid_size_cell_touch

0x3bf2,	// (0x00032d1f) popup_fast_swap_wide_window_ParamLimits

0x3bf2,	// (0x00032d1f) popup_fast_swap_wide_window

0xcf34,	// (0x0003c061) touch_pane_ParamLimits

0xcf34,	// (0x0003c061) touch_pane

0x3029,	// (0x00032156) button_value_adjust_pane_cp2

0x3031,	// (0x0003215e) button_value_adjust_pane_cp4

0x3051,	// (0x0003217e) form_field_data_pane_cp2

0xcaba,	// (0x0003bbe7) form_field_data_wide_pane_cp2

0x4918,	// (0x00033a45) bg_scroll_pane_ParamLimits

0x4937,	// (0x00033a64) scroll_handle_pane_ParamLimits

0x494b,	// (0x00033a78) scroll_sc2_down_pane_ParamLimits

0x494b,	// (0x00033a78) scroll_sc2_down_pane

0x4972,	// (0x00033a9f) scroll_sc2_up_pane_ParamLimits

0x4972,	// (0x00033a9f) scroll_sc2_up_pane

0x1665,	// (0x00030792) grid_wheel_folder_pane_g1_ParamLimits

0x1665,	// (0x00030792) grid_wheel_folder_pane_g1

0x4cbb,	// (0x00033de8) clock_nsta_pane_cp2_ParamLimits

0x4cbb,	// (0x00033de8) clock_nsta_pane_cp2

0x0999,	// (0x0002fac6) listscroll_midp_pane_ParamLimits

0x09a8,	// (0x0002fad5) midp_canvas_pane

0x4f02,	// (0x0003402f) nsta_clock_indic_pane

0x7052,	// (0x0003617f) listscroll_form_pane_vc

0x705a,	// (0x00036187) listscroll_set_pane_vc_ParamLimits

0x705a,	// (0x00036187) listscroll_set_pane_vc

0x0e53,	// (0x0002ff80) clock_nsta_pane

0x0e76,	// (0x0002ffa3) indicator_nsta_pane

0x7173,	// (0x000362a0) bg_popup_sub_pane_cp2_ParamLimits

0x7187,	// (0x000362b4) find_pane_cp2_ParamLimits

0x7187,	// (0x000362b4) find_pane_cp2

0x7199,	// (0x000362c6) grid_toobar_pane_ParamLimits

0x727d,	// (0x000363aa) list_form_gen_pane_vc_ParamLimits

0x727d,	// (0x000363aa) list_form_gen_pane_vc

0x7293,	// (0x000363c0) scroll_pane_cp8_vc_ParamLimits

0x7293,	// (0x000363c0) scroll_pane_cp8_vc

0x72e3,	// (0x00036410) data_form_wide_pane_vc_ParamLimits

0x72e3,	// (0x00036410) data_form_wide_pane_vc

0x72ef,	// (0x0003641c) form_field_data_wide_pane_vc_g1

0x72f7,	// (0x00036424) form_field_data_wide_pane_vc_t1_ParamLimits

0x72f7,	// (0x00036424) form_field_data_wide_pane_vc_t1

0x445e,	// (0x0003358b) input_focus_pane_cp6_vc_ParamLimits

0x445e,	// (0x0003358b) input_focus_pane_cp6_vc

0x1157,	// (0x00030284) list_midp_pane_ParamLimits

0x844c,	// (0x00037579) scroll_pane_cp16_ParamLimits

0x844c,	// (0x00037579) scroll_pane_cp16

0x75fd,	// (0x0003672a) button_value_adjust_pane_ParamLimits

0x75fd,	// (0x0003672a) button_value_adjust_pane

0x12f9,	// (0x00030426) button_value_adjust_pane_cp6_ParamLimits

0x12f9,	// (0x00030426) button_value_adjust_pane_cp6

0x1403,	// (0x00030530) settings_code_pane_cp_ParamLimits

0x1403,	// (0x00030530) settings_code_pane_cp

0x3a09,	// (0x00032b36) cell_touch_pane_g1

0x3a09,	// (0x00032b36) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0003e810) cell_touch_pane_g

0x1551,	// (0x0003067e) cell_touch_pane_cp_ParamLimits

0x1551,	// (0x0003067e) cell_touch_pane_cp

0x156d,	// (0x0003069a) cell_touch_pane_ParamLimits

0x156d,	// (0x0003069a) cell_touch_pane

0x3a09,	// (0x00032b36) scroll_sc2_down_pane_g1

0x3a09,	// (0x00032b36) scroll_sc2_up_pane_g1

0x3bc8,	// (0x00032cf5) bg_set_opt_pane_cp4_vc

0x8718,	// (0x00037845) list_set_graphic_pane_vc_g1_ParamLimits

0x8718,	// (0x00037845) list_set_graphic_pane_vc_g1

0x8724,	// (0x00037851) list_set_graphic_pane_vc_g2_ParamLimits

0x8724,	// (0x00037851) list_set_graphic_pane_vc_g2

0x0001,

0xf9cc,	// (0x0003eaf9) list_set_graphic_pane_vc_g_ParamLimits

0xf9cc,	// (0x0003eaf9) list_set_graphic_pane_vc_g

0x8730,	// (0x0003785d) text_primary_small_cp13_vc_ParamLimits

0x8730,	// (0x0003785d) text_primary_small_cp13_vc

0x8748,	// (0x00037875) list_set_graphic_pane_vc_ParamLimits

0x8748,	// (0x00037875) list_set_graphic_pane_vc

0x3bc8,	// (0x00032cf5) input_focus_pane_cp2_vc

0x3a09,	// (0x00032b36) setting_code_pane_vc_g1

0x875b,	// (0x00037888) setting_code_pane_vc_t1

0x8769,	// (0x00037896) set_text_pane_vc_t1_ParamLimits

0x8769,	// (0x00037896) set_text_pane_vc_t1

0x3bc8,	// (0x00032cf5) input_focus_pane_cp1_vc

0x8784,	// (0x000378b1) list_set_text_pane_vc

0x3a09,	// (0x00032b36) setting_text_pane_vc_g1

0x3bc8,	// (0x00032cf5) bg_set_opt_pane_cp2_vc

0x878e,	// (0x000378bb) setting_slider_graphic_pane_vc_g1

0x8796,	// (0x000378c3) setting_slider_graphic_pane_vc_t1

0x87a4,	// (0x000378d1) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d1,	// (0x0003eafe) setting_slider_graphic_pane_vc_t

0x87b2,	// (0x000378df) slider_set_pane_cp_vc

0x87ba,	// (0x000378e7) slider_set_pane_vc_g1

0x87c3,	// (0x000378f0) slider_set_pane_vc_g2

0x0006,

0xf9d6,	// (0x0003eb03) slider_set_pane_vc_g

0x44ad,	// (0x000335da) set_opt_bg_pane_g1_copy1

0x44b5,	// (0x000335e2) set_opt_bg_pane_g2_copy1

0x87ef,	// (0x0003791c) set_opt_bg_pane_g3_copy1

0x44c5,	// (0x000335f2) set_opt_bg_pane_g4_copy1

0x44cd,	// (0x000335fa) set_opt_bg_pane_g5_copy1

0x44d5,	// (0x00033602) set_opt_bg_pane_g6_copy1

0x87f7,	// (0x00037924) set_opt_bg_pane_g7_copy1

0x87ff,	// (0x0003792c) set_opt_bg_pane_g8_copy1

0x8807,	// (0x00037934) set_opt_bg_pane_g9_copy1

0x3bc8,	// (0x00032cf5) bg_set_opt_pane_cp_vc

0x880f,	// (0x0003793c) setting_slider_pane_vc_t1

0x8796,	// (0x000378c3) setting_slider_pane_vc_t2

0x87a4,	// (0x000378d1) setting_slider_pane_vc_t3

0x0002,

0xf9e5,	// (0x0003eb12) setting_slider_pane_vc_t

0x87b2,	// (0x000378df) slider_set_pane_vc

0x54f0,	// (0x0003461d) volume_set_pane_vc_g1

0x5845,	// (0x00034972) volume_set_pane_vc_g2

0x584e,	// (0x0003497b) volume_set_pane_vc_g3

0x5857,	// (0x00034984) volume_set_pane_vc_g4

0x5860,	// (0x0003498d) volume_set_pane_vc_g5

0x5869,	// (0x00034996) volume_set_pane_vc_g6

0x5872,	// (0x0003499f) volume_set_pane_vc_g7

0x587b,	// (0x000349a8) volume_set_pane_vc_g8

0x5884,	// (0x000349b1) volume_set_pane_vc_g9

0x588d,	// (0x000349ba) volume_set_pane_vc_g10

0x0009,

0xf9ec,	// (0x0003eb19) volume_set_pane_vc_g

0x881e,	// (0x0003794b) volume_set_pane_vc

0x8826,	// (0x00037953) button_value_adjust_pane_cp1_vc

0x8830,	// (0x0003795d) list_highlight_pane_cp2_vc

0x8839,	// (0x00037966) list_set_pane_vc_ParamLimits

0x8839,	// (0x00037966) list_set_pane_vc

0x888b,	// (0x000379b8) main_pane_set_vc_t1_ParamLimits

0x888b,	// (0x000379b8) main_pane_set_vc_t1

0x88a0,	// (0x000379cd) main_pane_set_vc_t2_ParamLimits

0x88a0,	// (0x000379cd) main_pane_set_vc_t2

0x88b2,	// (0x000379df) main_pane_set_vc_t3_ParamLimits

0x88b2,	// (0x000379df) main_pane_set_vc_t3

0x88c4,	// (0x000379f1) main_pane_set_vc_t4_ParamLimits

0x88c4,	// (0x000379f1) main_pane_set_vc_t4

0x0003,

0xfa01,	// (0x0003eb2e) main_pane_set_vc_t_ParamLimits

0xfa01,	// (0x0003eb2e) main_pane_set_vc_t

0x88d6,	// (0x00037a03) setting_code_pane_vc_ParamLimits

0x88d6,	// (0x00037a03) setting_code_pane_vc

0x88e5,	// (0x00037a12) setting_slider_graphic_pane_vc

0x88e5,	// (0x00037a12) setting_slider_pane_vc

0x88e5,	// (0x00037a12) setting_text_pane_vc

0x88e5,	// (0x00037a12) setting_volume_pane_vc

0x88ed,	// (0x00037a1a) scroll_pane_cp121_vc

0x4449,	// (0x00033576) set_content_pane_vc

0x88f5,	// (0x00037a22) button_value_adjust_pane_g1

0x88fe,	// (0x00037a2b) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0003eb83) button_value_adjust_pane_g

0x8907,	// (0x00037a34) form_field_slider_wide_pane_vc_t1_ParamLimits

0x8907,	// (0x00037a34) form_field_slider_wide_pane_vc_t1

0x891d,	// (0x00037a4a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x891d,	// (0x00037a4a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0003eb88) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003eb88) form_field_slider_wide_pane_vc_t

0x3f21,	// (0x0003304e) input_focus_pane_cp10_vc_ParamLimits

0x3f21,	// (0x0003304e) input_focus_pane_cp10_vc

0x8948,	// (0x00037a75) slider_cont_pane_cp1_vc_ParamLimits

0x8948,	// (0x00037a75) slider_cont_pane_cp1_vc

0x87ba,	// (0x000378e7) slider_form_pane_g1_cp2

0x87c3,	// (0x000378f0) slider_form_pane_g2_cp2

0x8963,	// (0x00037a90) form_field_slider_pane_vc_t3

0x8971,	// (0x00037a9e) form_field_slider_pane_vc_t4

0x897f,	// (0x00037aac) slider_form_pane_vc_ParamLimits

0x897f,	// (0x00037aac) slider_form_pane_vc

0x898c,	// (0x00037ab9) form_field_slider_pane_vc_t1_ParamLimits

0x898c,	// (0x00037ab9) form_field_slider_pane_vc_t1

0x89a2,	// (0x00037acf) form_field_slider_pane_vc_t2_ParamLimits

0x89a2,	// (0x00037acf) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0003eb9a) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003eb9a) form_field_slider_pane_vc_t

0x3f21,	// (0x0003304e) input_focus_pane_cp9_vc_ParamLimits

0x3f21,	// (0x0003304e) input_focus_pane_cp9_vc

0x89b4,	// (0x00037ae1) slider_cont_pane_vc_ParamLimits

0x89b4,	// (0x00037ae1) slider_cont_pane_vc

0x89c6,	// (0x00037af3) list_form_graphic_pane_cp_vc_ParamLimits

0x89c6,	// (0x00037af3) list_form_graphic_pane_cp_vc

0x72ef,	// (0x0003641c) form_field_popup_wide_pane_vc_g1

0x89db,	// (0x00037b08) form_field_popup_wide_pane_vc_t1_ParamLimits

0x89db,	// (0x00037b08) form_field_popup_wide_pane_vc_t1

0x445e,	// (0x0003358b) input_focus_pane_cp8_vc_ParamLimits

0x445e,	// (0x0003358b) input_focus_pane_cp8_vc

0x8a1a,	// (0x00037b47) list_form_wide_pane_vc_ParamLimits

0x8a1a,	// (0x00037b47) list_form_wide_pane_vc

0x8a26,	// (0x00037b53) list_form_graphic_pane_vc_g1

0x8a2e,	// (0x00037b5b) list_form_graphic_pane_vc_t1_ParamLimits

0x8a2e,	// (0x00037b5b) list_form_graphic_pane_vc_t1

0x3d5c,	// (0x00032e89) list_highlight_pane_cp5_vc_ParamLimits

0x3d5c,	// (0x00032e89) list_highlight_pane_cp5_vc

0x8a4a,	// (0x00037b77) list_form_graphic_pane_vc_ParamLimits

0x8a4a,	// (0x00037b77) list_form_graphic_pane_vc

0x72ef,	// (0x0003641c) form_field_popup_pane_vc_g1

0x8a60,	// (0x00037b8d) form_field_popup_pane_vc_t1_ParamLimits

0x8a60,	// (0x00037b8d) form_field_popup_pane_vc_t1

0x445e,	// (0x0003358b) input_focus_pane_cp7_vc_ParamLimits

0x445e,	// (0x0003358b) input_focus_pane_cp7_vc

0x8a75,	// (0x00037ba2) list_form_pane_vc_ParamLimits

0x8a75,	// (0x00037ba2) list_form_pane_vc

0x8a81,	// (0x00037bae) data_form_pane_vc_t1_ParamLimits

0x8a81,	// (0x00037bae) data_form_pane_vc_t1

0x44ad,	// (0x000335da) input_focus_pane_vc_g1

0x44b5,	// (0x000335e2) input_focus_pane_vc_g2

0x44bd,	// (0x000335ea) input_focus_pane_vc_g3

0x44c5,	// (0x000335f2) input_focus_pane_vc_g4

0x44cd,	// (0x000335fa) input_focus_pane_vc_g5

0x44d5,	// (0x00033602) input_focus_pane_vc_g6

0x44dd,	// (0x0003360a) input_focus_pane_vc_g7

0x44e5,	// (0x00033612) input_focus_pane_vc_g8

0x44ed,	// (0x0003361a) input_focus_pane_vc_g9

0x3a09,	// (0x00032b36) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0003e799) input_focus_pane_vc_g

0x72e3,	// (0x00036410) data_form_pane_vc_ParamLimits

0x72e3,	// (0x00036410) data_form_pane_vc

0x72ef,	// (0x0003641c) form_field_data_pane_vc_g1

0x8a9c,	// (0x00037bc9) form_field_data_pane_vc_t1_ParamLimits

0x8a9c,	// (0x00037bc9) form_field_data_pane_vc_t1

0x445e,	// (0x0003358b) input_focus_pane_vc_ParamLimits

0x445e,	// (0x0003358b) input_focus_pane_vc

0x8ab2,	// (0x00037bdf) button_value_adjust_pane_cp3_vc

0x8aba,	// (0x00037be7) button_value_adjust_pane_cp5_vc

0x8ac2,	// (0x00037bef) form_field_data_pane_vc_ParamLimits

0x8ac2,	// (0x00037bef) form_field_data_pane_vc

0x8ad9,	// (0x00037c06) form_field_data_pane_vc_cp2

0x8ae1,	// (0x00037c0e) form_field_data_wide_pane_vc_ParamLimits

0x8ae1,	// (0x00037c0e) form_field_data_wide_pane_vc

0x8af7,	// (0x00037c24) form_field_data_wide_pane_vc_cp2

0x8aff,	// (0x00037c2c) form_field_popup_pane_vc_ParamLimits

0x8aff,	// (0x00037c2c) form_field_popup_pane_vc

0x8b16,	// (0x00037c43) form_field_popup_wide_pane_vc_ParamLimits

0x8b16,	// (0x00037c43) form_field_popup_wide_pane_vc

0x8b2c,	// (0x00037c59) form_field_slider_pane_vc_ParamLimits

0x8b2c,	// (0x00037c59) form_field_slider_pane_vc

0x8b3f,	// (0x00037c6c) form_field_slider_wide_pane_vc_ParamLimits

0x8b3f,	// (0x00037c6c) form_field_slider_wide_pane_vc

0x158b,	// (0x000306b8) grid_touch_1_pane_ParamLimits

0x158b,	// (0x000306b8) grid_touch_1_pane

0x159f,	// (0x000306cc) grid_touch_2_pane_ParamLimits

0x159f,	// (0x000306cc) grid_touch_2_pane

0x8bb7,	// (0x00037ce4) touch_pane_g1_ParamLimits

0x8bb7,	// (0x00037ce4) touch_pane_g1

0x8b52,	// (0x00037c7f) cell_app_pane_cp_wide_ParamLimits

0x8b52,	// (0x00037c7f) cell_app_pane_cp_wide

0x8b62,	// (0x00037c8f) grid_popup_fast_wide_pane_ParamLimits

0x8b62,	// (0x00037c8f) grid_popup_fast_wide_pane

0x8b76,	// (0x00037ca3) scroll_pane_cp19_ParamLimits

0x8b76,	// (0x00037ca3) scroll_pane_cp19

0x3bc8,	// (0x00032cf5) bg_popup_window_pane_cp20

0x8b8a,	// (0x00037cb7) listscroll_popup_fast_wide_pane

0x15c9,	// (0x000306f6) grid_indicator_nsta_pane

0x8b92,	// (0x00037cbf) clock_nsta_pane_g1

0x8b9b,	// (0x00037cc8) clock_nsta_pane_t1

0x15d5,	// (0x00030702) cell_indicator_nsta_pane_ParamLimits

0x15d5,	// (0x00030702) cell_indicator_nsta_pane

0x8bb7,	// (0x00037ce4) cell_indicator_nsta_pane_g1

0x15ec,	// (0x00030719) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0003ebab) cell_indicator_nsta_pane_g

0x8bc5,	// (0x00037cf2) clock_nsta_pane_cp

0x8bcd,	// (0x00037cfa) indicator_nsta_pane_cp

0x8bd6,	// (0x00037d03) nsta_clock_indic_pane_g1

0x3e2a,	// (0x00032f57) grid_indicator_pane

0x4a64,	// (0x00033b91) scroll_pane_cp29

0x4c12,	// (0x00033d3f) indicator_nsta_pane_cp2_ParamLimits

0x4c12,	// (0x00033d3f) indicator_nsta_pane_cp2

0x3d5c,	// (0x00032e89) main_apps_wheel_pane

0x748e,	// (0x000365bb) form_midp_field_text_pane_ParamLimits

0x75bb,	// (0x000366e8) scroll_bar_cp050_ParamLimits

0x8c3f,	// (0x00037d6c) cell_indicator_pane_ParamLimits

0x8c3f,	// (0x00037d6c) cell_indicator_pane

0x8c55,	// (0x00037d82) cell_indicator_pane_g1

0x15f9,	// (0x00030726) grid_wheel_folder_pane_ParamLimits

0x15f9,	// (0x00030726) grid_wheel_folder_pane

0x1607,	// (0x00030734) list_wheel_apps_pane_ParamLimits

0x1607,	// (0x00030734) list_wheel_apps_pane

0x1613,	// (0x00030740) main_apps_wheel_pane_g1_ParamLimits

0x1613,	// (0x00030740) main_apps_wheel_pane_g1

0x161f,	// (0x0003074c) main_apps_wheel_pane_g2_ParamLimits

0x161f,	// (0x0003074c) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0003ebc7) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0003ebc7) main_apps_wheel_pane_g

0x162b,	// (0x00030758) main_apps_wheel_pane_t1_ParamLimits

0x162b,	// (0x00030758) main_apps_wheel_pane_t1

0x163d,	// (0x0003076a) list_wheel_apps_pane_g1

0x1645,	// (0x00030772) list_wheel_apps_pane_g2

0x164d,	// (0x0003077a) list_wheel_apps_pane_g3

0x1655,	// (0x00030782) list_wheel_apps_pane_g4

0x165d,	// (0x0003078a) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0003ebcc) list_wheel_apps_pane_g

0x3d5c,	// (0x00032e89) navi_icon_text_pane

0x0d5f,	// (0x0002fe8c) aid_fill_nsta

0x8c5f,	// (0x00037d8c) navi_icon_text_pane_g1

0x8c6b,	// (0x00037d98) navi_icon_text_pane_t1

0x6c18,	// (0x00035d45) list_set_graphic_pane_t1_ParamLimits

0x6c18,	// (0x00035d45) list_set_graphic_pane_t1

0x7ca9,	// (0x00036dd6) popup_midp_note_alarm_window_t6_ParamLimits

0x7ca9,	// (0x00036dd6) popup_midp_note_alarm_window_t6

0x7cbb,	// (0x00036de8) popup_midp_note_alarm_window_t7_ParamLimits

0x7cbb,	// (0x00036de8) popup_midp_note_alarm_window_t7

0x7ccd,	// (0x00036dfa) popup_midp_note_alarm_window_t8_ParamLimits

0x7ccd,	// (0x00036dfa) popup_midp_note_alarm_window_t8

0x7cdf,	// (0x00036e0c) popup_midp_note_alarm_window_t9_ParamLimits

0x7cdf,	// (0x00036e0c) popup_midp_note_alarm_window_t9

0x7cf1,	// (0x00036e1e) popup_midp_note_alarm_window_t10_ParamLimits

0x7cf1,	// (0x00036e1e) popup_midp_note_alarm_window_t10

0x7d03,	// (0x00036e30) popup_midp_note_alarm_window_t11_ParamLimits

0x7d03,	// (0x00036e30) popup_midp_note_alarm_window_t11

0x7d15,	// (0x00036e42) scroll_pane_cp17_ParamLimits

0x7d15,	// (0x00036e42) scroll_pane_cp17

0x54f0,	// (0x0003461d) volume_small_pane_cp_g1

0x58e1,	// (0x00034a0e) volume_small_pane_cp_g2

0x58ea,	// (0x00034a17) volume_small_pane_cp_g3

0x58f3,	// (0x00034a20) volume_small_pane_cp_g4

0x551d,	// (0x0003464a) volume_small_pane_cp_g5

0x58fc,	// (0x00034a29) volume_small_pane_cp_g6

0x5905,	// (0x00034a32) volume_small_pane_cp_g7

0x590e,	// (0x00034a3b) volume_small_pane_cp_g8

0x5917,	// (0x00034a44) volume_small_pane_cp_g9

0x5920,	// (0x00034a4d) volume_small_pane_cp_g10

0x6ec7,	// (0x00035ff4) midp_ticker_pane_g1_ParamLimits

0x6ed3,	// (0x00036000) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0003e865) midp_ticker_pane_g_ParamLimits

0x6edf,	// (0x0003600c) midp_ticker_pane_t1_ParamLimits

0x0d75,	// (0x0002fea2) aid_fill_nsta_2

0x75a7,	// (0x000366d4) list_form2_midp_pane

0x83a7,	// (0x000374d4) midp_editing_number_pane_ParamLimits

0x83b3,	// (0x000374e0) midp_ticker_pane_ParamLimits

0x8c7d,	// (0x00037daa) form2_midp_field_pane

0x8c85,	// (0x00037db2) scroll_pane_cp51

0x8ca5,	// (0x00037dd2) form2_midp_button_pane_ParamLimits

0x8ca5,	// (0x00037dd2) form2_midp_button_pane

0x8cb7,	// (0x00037de4) form2_midp_content_pane_ParamLimits

0x8cb7,	// (0x00037de4) form2_midp_content_pane

0x8cd1,	// (0x00037dfe) form2_midp_field_choice_group_pane

0x8cd9,	// (0x00037e06) form2_midp_field_pane_g1

0x8ce1,	// (0x00037e0e) form2_midp_field_pane_g2

0x8ce9,	// (0x00037e16) form2_midp_field_pane_g3

0x8cf1,	// (0x00037e1e) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0003ebf1) form2_midp_field_pane_g

0x8cf9,	// (0x00037e26) form2_midp_gauge_slider_pane

0x8d01,	// (0x00037e2e) form2_midp_gauge_wait_pane

0x8d09,	// (0x00037e36) form2_midp_image_pane_ParamLimits

0x8d09,	// (0x00037e36) form2_midp_image_pane

0x8d24,	// (0x00037e51) form2_midp_label_pane_ParamLimits

0x8d24,	// (0x00037e51) form2_midp_label_pane

0x1692,	// (0x000307bf) form2_midp_label_pane_cp_ParamLimits

0x1692,	// (0x000307bf) form2_midp_label_pane_cp

0x8d3d,	// (0x00037e6a) form2_midp_string_pane_ParamLimits

0x8d3d,	// (0x00037e6a) form2_midp_string_pane

0x3709,	// (0x00032836) form2_midp_text_pane_ParamLimits

0x3709,	// (0x00032836) form2_midp_text_pane

0x8d4f,	// (0x00037e7c) form2_midp_time_pane

0x8d5f,	// (0x00037e8c) input_focus_pane_cp51_ParamLimits

0x8d5f,	// (0x00037e8c) input_focus_pane_cp51

0x8d77,	// (0x00037ea4) form2_midp_label_pane_t1_ParamLimits

0x8d77,	// (0x00037ea4) form2_midp_label_pane_t1

0x3722,	// (0x0003284f) form2_mdip_text_pane_t1_ParamLimits

0x3722,	// (0x0003284f) form2_mdip_text_pane_t1

0x373b,	// (0x00032868) form2_midp_time_pane_t1

0x8dbf,	// (0x00037eec) form2_midp_gauge_slider_pane_t1

0x16b1,	// (0x000307de) form2_midp_gauge_slider_pane_t2

0x16c3,	// (0x000307f0) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0003ebfa) form2_midp_gauge_slider_pane_t

0x8dd1,	// (0x00037efe) form2_midp_slider_pane

0x8ddd,	// (0x00037f0a) form2_midp_gauge_wait_pane_t1

0x8deb,	// (0x00037f18) form2_midp_wait_pane_ParamLimits

0x8deb,	// (0x00037f18) form2_midp_wait_pane

0x732d,	// (0x0003645a) list_single_2graphic_pane_cp4_ParamLimits

0x732d,	// (0x0003645a) list_single_2graphic_pane_cp4

0x8e16,	// (0x00037f43) list_single_midp_graphic_pane_cp_ParamLimits

0x8e16,	// (0x00037f43) list_single_midp_graphic_pane_cp

0x3bc8,	// (0x00032cf5) list_highlight_pane_cp20

0x8e34,	// (0x00037f61) list_single_2graphic_pane_g1_cp4

0x8651,	// (0x0003777e) list_single_2graphic_pane_g2_cp4

0x8e3c,	// (0x00037f69) list_single_2graphic_pane_t1_cp4

0x3d5c,	// (0x00032e89) list_highlight_pane_cp21

0x8e4b,	// (0x00037f78) list_single_midp_graphic_pane_g4_cp

0x8e5a,	// (0x00037f87) list_single_midp_graphic_pane_t1_cp

0x8e6f,	// (0x00037f9c) form2_mdip_string_pane_t1_ParamLimits

0x8e6f,	// (0x00037f9c) form2_mdip_string_pane_t1

0x3bc8,	// (0x00032cf5) bg_wml_button_pane_cp2

0x3a09,	// (0x00032b36) form2_midp_image_pane_g1

0x43f5,	// (0x00033522) list_double_large_graphic_pane_g5_ParamLimits

0x43f5,	// (0x00033522) list_double_large_graphic_pane_g5

0x0999,	// (0x0002fac6) midp_form_pane_ParamLimits

0x3d5c,	// (0x00032e89) main_apps_wheel_pane_ParamLimits

0xd4ec,	// (0x0003c619) popup_preview_window_ParamLimits

0xd4ec,	// (0x0003c619) popup_preview_window

0x5394,	// (0x000344c1) popup_touch_info_window_ParamLimits

0x5394,	// (0x000344c1) popup_touch_info_window

0x53b2,	// (0x000344df) popup_touch_menu_window_ParamLimits

0x53b2,	// (0x000344df) popup_touch_menu_window

0x39ff,	// (0x00032b2c) bg_popup_sub_pane_cp6

0x8ed9,	// (0x00038006) list_touch_menu_pane

0x8ee1,	// (0x0003800e) list_single_touch_menu_pane_ParamLimits

0x8ee1,	// (0x0003800e) list_single_touch_menu_pane

0x8ef8,	// (0x00038025) list_single_touch_menu_pane_t1

0x3d5c,	// (0x00032e89) bg_popup_sub_pane_cp7_ParamLimits

0x3d5c,	// (0x00032e89) bg_popup_sub_pane_cp7

0x8f06,	// (0x00038033) heading_sub_pane

0x8f0e,	// (0x0003803b) list_touch_info_pane_ParamLimits

0x8f0e,	// (0x0003803b) list_touch_info_pane

0x8f1d,	// (0x0003804a) list_single_touch_info_pane_ParamLimits

0x8f1d,	// (0x0003804a) list_single_touch_info_pane

0x8f2e,	// (0x0003805b) list_single_touch_info_pane_t1

0x8f3c,	// (0x00038069) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0003ec08) list_single_touch_info_pane_t

0x6e9d,	// (0x00035fca) bg_popup_heading_pane_cp

0x8f4a,	// (0x00038077) heading_sub_pane_t1

0x72a9,	// (0x000363d6) bg_popup_preview_window_pane_cp_ParamLimits

0x72a9,	// (0x000363d6) bg_popup_preview_window_pane_cp

0x8f06,	// (0x00038033) heading_preview_pane

0x8f0e,	// (0x0003803b) list_preview_pane_ParamLimits

0x8f0e,	// (0x0003803b) list_preview_pane

0x8f58,	// (0x00038085) popup_preview_window_g1

0x8f1d,	// (0x0003804a) list_single_preview_pane_ParamLimits

0x8f1d,	// (0x0003804a) list_single_preview_pane

0x8f60,	// (0x0003808d) list_single_preview_pane_g1

0x8f68,	// (0x00038095) list_single_preview_pane_t1

0x8f2e,	// (0x0003805b) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0003ec0d) list_single_preview_pane_t

0x8f76,	// (0x000380a3) bg_popup_heading_pane_cp2_ParamLimits

0x8f76,	// (0x000380a3) bg_popup_heading_pane_cp2

0x8f8c,	// (0x000380b9) heading_preview_pane_g1

0x8f94,	// (0x000380c1) heading_preview_pane_t1_ParamLimits

0x8f94,	// (0x000380c1) heading_preview_pane_t1

0x3e41,	// (0x00032f6e) soft_indicator_pane_t1_ParamLimits

0x431f,	// (0x0003344c) scroll_pane_ParamLimits

0x4960,	// (0x00033a8d) scroll_sc2_left_pane

0x4969,	// (0x00033a96) scroll_sc2_right_pane

0x4988,	// (0x00033ab5) scroll_bg_pane_g1_ParamLimits

0x499d,	// (0x00033aca) scroll_bg_pane_g2_ParamLimits

0x49b5,	// (0x00033ae2) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0003e7f0) scroll_bg_pane_g_ParamLimits

0x4988,	// (0x00033ab5) scroll_handle_pane_g1_ParamLimits

0x49d7,	// (0x00033b04) scroll_handle_pane_g2_ParamLimits

0x49b5,	// (0x00033ae2) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0003e7f7) scroll_handle_pane_g_ParamLimits

0x4f61,	// (0x0003408e) popup_choice_list_window_ParamLimits

0x4f61,	// (0x0003408e) popup_choice_list_window

0x717f,	// (0x000362ac) choice_list_pane

0x71f5,	// (0x00036322) cell_toolbar_pane_t1

0x721d,	// (0x0003634a) toolbar_button_pane_ParamLimits

0x8110,	// (0x0003723d) ai_gene_pane_1_t2_ParamLimits

0x8110,	// (0x0003723d) ai_gene_pane_1_t2

0x0001,

0xf8e6,	// (0x0003ea13) ai_gene_pane_1_t_ParamLimits

0xf8e6,	// (0x0003ea13) ai_gene_pane_1_t

0x8fb1,	// (0x000380de) scroll_sc2_left_pane_g1

0x8fb1,	// (0x000380de) scroll_sc2_right_pane_g1

0x4f49,	// (0x00034076) bg_popup_sub_pane_cp10

0x8fbb,	// (0x000380e8) list_choice_list_pane

0x8fd2,	// (0x000380ff) list_single_choice_list_pane_ParamLimits

0x8fd2,	// (0x000380ff) list_single_choice_list_pane

0x8fe4,	// (0x00038111) list_single_choice_list_pane_g1

0x45d6,	// (0x00033703) list_single_choice_list_pane_t1_ParamLimits

0x45d6,	// (0x00033703) list_single_choice_list_pane_t1

0x8fec,	// (0x00038119) choice_list_pane_g1

0x8ff4,	// (0x00038121) choice_list_pane_t1

0x39ff,	// (0x00032b2c) input_focus_pane_cp11

0x4791,	// (0x000338be) title_pane_stacon_g2_ParamLimits

0x4791,	// (0x000338be) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0003e7d6) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0003e7d6) title_pane_stacon_g

0x6e9d,	// (0x00035fca) cursor_press_pane

0xd253,	// (0x0003c380) popup_fep_hwr_window_ParamLimits

0xd253,	// (0x0003c380) popup_fep_hwr_window

0x5059,	// (0x00034186) popup_fep_vkb_window_ParamLimits

0x5059,	// (0x00034186) popup_fep_vkb_window

0x9002,	// (0x0003812f) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0003ec36) fep_vkb_side_pane_g_ParamLimits

0x595e,	// (0x00034a8b) fep_hwr_candidate_pane_ParamLimits

0x595e,	// (0x00034a8b) fep_hwr_candidate_pane

0x5986,	// (0x00034ab3) fep_hwr_side_pane_ParamLimits

0x5986,	// (0x00034ab3) fep_hwr_side_pane

0x59a6,	// (0x00034ad3) fep_hwr_top_pane_ParamLimits

0x59a6,	// (0x00034ad3) fep_hwr_top_pane

0x59be,	// (0x00034aeb) fep_hwr_write_pane_ParamLimits

0x59be,	// (0x00034aeb) fep_hwr_write_pane

0xfb09,	// (0x0003ec36) fep_vkb_side_pane_g

0x900a,	// (0x00038137) fep_hwr_top_pane_g1

0x901c,	// (0x00038149) fep_hwr_top_pane_g2

0x59ea,	// (0x00034b17) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0003ec12) fep_hwr_top_pane_g

0x59ff,	// (0x00034b2c) fep_hwr_top_text_pane

0x4ad1,	// (0x00033bfe) fep_hwr_top_text_pane_g1

0x9052,	// (0x0003817f) fep_hwr_top_text_pane_t1

0x5aed,	// (0x00034c1a) fep_hwr_candidate_pane_g1

0x921b,	// (0x00038348) fep_vkb_keypad_pane_g3_ParamLimits

0x921b,	// (0x00038348) fep_vkb_keypad_pane_g3

0x923d,	// (0x0003836a) fep_vkb_keypad_pane_g4_ParamLimits

0x923d,	// (0x0003836a) fep_vkb_keypad_pane_g4

0x92ac,	// (0x000383d9) fep_vkb_bottom_pane_g2_ParamLimits

0x92ac,	// (0x000383d9) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0003ec3d) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0003ec3d) fep_vkb_bottom_pane_g

0x8fb1,	// (0x000380de) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0003ec47) cell_vkb_side_pane_g

0x92f0,	// (0x0003841d) cell_vkb_side_pane_t1

0x92fe,	// (0x0003842b) cell_vkb_side_pane_t1_copy1

0x8fb1,	// (0x000380de) bg_fep_vkb_candidate_pane_g2

0x93cc,	// (0x000384f9) cell_vkb_candidate_pane_ParamLimits

0x9060,	// (0x0003818d) aid_size_cell_vkb_ParamLimits

0x9060,	// (0x0003818d) aid_size_cell_vkb

0x93cc,	// (0x000384f9) cell_vkb_candidate_pane

0x5b07,	// (0x00034c34) bg_popup_fep_shadow_pane_g1

0x90ca,	// (0x000381f7) fep_vkb_bottom_pane_ParamLimits

0x90ca,	// (0x000381f7) fep_vkb_bottom_pane

0x9107,	// (0x00038234) fep_vkb_candidate_pane_ParamLimits

0x9107,	// (0x00038234) fep_vkb_candidate_pane

0x9123,	// (0x00038250) fep_vkb_keypad_pane_ParamLimits

0x9123,	// (0x00038250) fep_vkb_keypad_pane

0x9157,	// (0x00038284) fep_vkb_side_pane_ParamLimits

0x9157,	// (0x00038284) fep_vkb_side_pane

0x9183,	// (0x000382b0) fep_vkb_top_pane_ParamLimits

0x9183,	// (0x000382b0) fep_vkb_top_pane

0x91af,	// (0x000382dc) fep_vkb_top_pane_g1_ParamLimits

0x91af,	// (0x000382dc) fep_vkb_top_pane_g1

0x91be,	// (0x000382eb) fep_vkb_top_pane_g2_ParamLimits

0x91be,	// (0x000382eb) fep_vkb_top_pane_g2

0x91cd,	// (0x000382fa) fep_vkb_top_pane_g3_ParamLimits

0x91cd,	// (0x000382fa) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0003ec2d) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0003ec2d) fep_vkb_top_pane_g

0x91eb,	// (0x00038318) fep_vkb_top_text_pane_ParamLimits

0x91eb,	// (0x00038318) fep_vkb_top_text_pane

0x16e5,	// (0x00030812) fep_vkb_side_pane_g1_ParamLimits

0x16e5,	// (0x00030812) fep_vkb_side_pane_g1

0x920a,	// (0x00038337) grid_vkb_side_pane_ParamLimits

0x920a,	// (0x00038337) grid_vkb_side_pane

0x5b0f,	// (0x00034c3c) bg_popup_fep_shadow_pane_g2

0x5b18,	// (0x00034c45) bg_popup_fep_shadow_pane_g3

0x5b20,	// (0x00034c4d) bg_popup_fep_shadow_pane_g4

0x5b29,	// (0x00034c56) bg_popup_fep_shadow_pane_g5

0x5b31,	// (0x00034c5e) bg_popup_fep_shadow_pane_g6

0x5b39,	// (0x00034c66) bg_popup_fep_shadow_pane_g7

0x44cd,	// (0x000335fa) bg_popup_fep_shadow_pane_g8

0x925b,	// (0x00038388) grid_vkb_keypad_number_pane_ParamLimits

0x925b,	// (0x00038388) grid_vkb_keypad_number_pane

0x926b,	// (0x00038398) grid_vkb_keypad_pane_ParamLimits

0x926b,	// (0x00038398) grid_vkb_keypad_pane

0x9291,	// (0x000383be) fep_vkb_bottom_pane_g1_ParamLimits

0x9291,	// (0x000383be) fep_vkb_bottom_pane_g1

0x92ba,	// (0x000383e7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x92ba,	// (0x000383e7) grid_vkb_keypad_bottom_left_pane

0x92cf,	// (0x000383fc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x92cf,	// (0x000383fc) grid_vkb_keypad_bottom_right_pane

0x92e4,	// (0x00038411) fep_vkb_top_text_pane_g1

0x172c,	// (0x00030859) fep_vkb_top_text_pane_t1

0x173e,	// (0x0003086b) cell_vkb_side_pane_ParamLimits

0x173e,	// (0x0003086b) cell_vkb_side_pane

0x8fb1,	// (0x000380de) cell_vkb_side_pane_g1

0x930c,	// (0x00038439) cell_vkb_keypad_pane_ParamLimits

0x930c,	// (0x00038439) cell_vkb_keypad_pane

0x9379,	// (0x000384a6) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0003ec5a) bg_popup_fep_shadow_pane_g

0x8fb1,	// (0x000380de) cell_hwr_side_pane_g1

0x8fb1,	// (0x000380de) cell_hwr_side_pane_g2

0x9383,	// (0x000384b0) cell_vkb_keypad_pane_t1

0x1754,	// (0x00030881) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x1754,	// (0x00030881) cell_vkb_keypad_bottom_left_pane

0x1769,	// (0x00030896) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x1769,	// (0x00030896) cell_vkb_keypad_bottom_right_pane

0x8fb1,	// (0x000380de) cell_vkb_keypad_bottom_left_pane_g1

0x8fb1,	// (0x000380de) cell_vkb_keypad_bottom_right_pane_g1

0x9391,	// (0x000384be) cell_vkb_keypad_number_pane_ParamLimits

0x9391,	// (0x000384be) cell_vkb_keypad_number_pane

0x93b0,	// (0x000384dd) cell_vkb_keypad_number_pane_g1

0x93ba,	// (0x000384e7) cell_vkb_keypad_number_pane_g2

0x93c3,	// (0x000384f0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0003ec4c) cell_vkb_keypad_number_pane_g

0x9383,	// (0x000384b0) cell_vkb_keypad_number_pane_t1

0x93e5,	// (0x00038512) fep_vkb_candidate_pane_g1

0x0001,

0xfb1a,	// (0x0003ec47) cell_hwr_side_pane_g

0x93fe,	// (0x0003852b) cell_hwr_side_pane_t1

0x5b49,	// (0x00034c76) cell_hwr_side_pane_t1_copy1

0x91dd,	// (0x0003830a) cell_hwr_candidate_pane_g1

0x5b57,	// (0x00034c84) cell_hwr_candidate_pane_t1

0x8fb1,	// (0x000380de) cell_vkb_candidate_pane_g2

0x9484,	// (0x000385b1) cell_vkb_candidate_pane_t1

0x5929,	// (0x00034a56) bg_popup_fep_shadow_pane_ParamLimits

0x5929,	// (0x00034a56) bg_popup_fep_shadow_pane

0xf501,	// (0x0003e62e) bg_fep_hwr_top_pane_g4

0x902e,	// (0x0003815b) bg_hwr_side_pane_g1_ParamLimits

0x902e,	// (0x0003815b) bg_hwr_side_pane_g1

0xd963,	// (0x0003ca90) cell_hwr_side_pane_ParamLimits

0xd963,	// (0x0003ca90) cell_hwr_side_pane

0x5a76,	// (0x00034ba3) fep_hwr_write_pane_g1_ParamLimits

0x5a76,	// (0x00034ba3) fep_hwr_write_pane_g1

0x5a83,	// (0x00034bb0) fep_hwr_write_pane_g2_ParamLimits

0x5a83,	// (0x00034bb0) fep_hwr_write_pane_g2

0x5a90,	// (0x00034bbd) fep_hwr_write_pane_g3_ParamLimits

0x5a90,	// (0x00034bbd) fep_hwr_write_pane_g3

0xd983,	// (0x0003cab0) fep_hwr_write_pane_g4_ParamLimits

0xd983,	// (0x0003cab0) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0003ec19) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0003ec19) fep_hwr_write_pane_g

0xf501,	// (0x0003e62e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xf501,	// (0x0003e62e) bg_fep_hwr_candidate_pane_g2

0x5ab3,	// (0x00034be0) cell_hwr_candidate_pane_ParamLimits

0x5ab3,	// (0x00034be0) cell_hwr_candidate_pane

0x5aed,	// (0x00034c1a) fep_hwr_candidate_pane_g1_ParamLimits

0x908e,	// (0x000381bb) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x908e,	// (0x000381bb) bg_popup_fep_shadow_pane_cp2

0x91dd,	// (0x0003830a) fep_vkb_top_pane_g4_ParamLimits

0x91dd,	// (0x0003830a) fep_vkb_top_pane_g4

0x91fc,	// (0x00038329) fep_vkb_side_pane_g2_ParamLimits

0x91fc,	// (0x00038329) fep_vkb_side_pane_g2

0xc9c8,	// (0x0003baf5) list_setting_pane_t4_ParamLimits

0xc9c8,	// (0x0003baf5) list_setting_pane_t4

0xca62,	// (0x0003bb8f) list_setting_number_pane_t5_ParamLimits

0xca62,	// (0x0003bb8f) list_setting_number_pane_t5

0x085d,	// (0x0002f98a) list_double_heading_pane_cp2_ParamLimits

0x085d,	// (0x0002f98a) list_double_heading_pane_cp2

0x6d12,	// (0x00035e3f) list_double_heading_pane_g1_cp2_ParamLimits

0x6d12,	// (0x00035e3f) list_double_heading_pane_g1_cp2

0x9492,	// (0x000385bf) list_double_heading_pane_g2_cp2_ParamLimits

0x9492,	// (0x000385bf) list_double_heading_pane_g2_cp2

0x94a6,	// (0x000385d3) list_double_heading_pane_t1_cp2_ParamLimits

0x94a6,	// (0x000385d3) list_double_heading_pane_t1_cp2

0x94bc,	// (0x000385e9) list_double_heading_pane_t2_cp2_ParamLimits

0x94bc,	// (0x000385e9) list_double_heading_pane_t2_cp2

0x39f7,	// (0x00032b24) aid_value_unit2

0x3c2e,	// (0x00032d5b) popup_preview_fixed_window

0x3f2f,	// (0x0003305c) bg_popup_preview_window_pane_cp02

0x94ce,	// (0x000385fb) list_preview_fixed_pane

0x9514,	// (0x00038641) list_empty_pane_fp_ParamLimits

0x9514,	// (0x00038641) list_empty_pane_fp

0x9514,	// (0x00038641) list_single_cale_day_pane_fp_ParamLimits

0x9514,	// (0x00038641) list_single_cale_day_pane_fp

0x9514,	// (0x00038641) list_single_graphic_heading_pane_fp_ParamLimits

0x9514,	// (0x00038641) list_single_graphic_heading_pane_fp

0x9514,	// (0x00038641) list_single_graphic_pane_fp_ParamLimits

0x9514,	// (0x00038641) list_single_graphic_pane_fp

0x9514,	// (0x00038641) list_single_heading_pane_fp_ParamLimits

0x9514,	// (0x00038641) list_single_heading_pane_fp

0x9514,	// (0x00038641) list_single_pane_fp_ParamLimits

0x9514,	// (0x00038641) list_single_pane_fp

0x9528,	// (0x00038655) list_single_pane_fp_g1_ParamLimits

0x9528,	// (0x00038655) list_single_pane_fp_g1

0x43dd,	// (0x0003350a) list_single_pane_fp_g2_ParamLimits

0x43dd,	// (0x0003350a) list_single_pane_fp_g2

0x5b74,	// (0x00034ca1) list_single_pane_fp_g3_ParamLimits

0x5b74,	// (0x00034ca1) list_single_pane_fp_g3

0x9534,	// (0x00038661) list_single_pane_fp_g4_ParamLimits

0x9534,	// (0x00038661) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0003ec7b) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0003ec7b) list_single_pane_fp_g

0x374e,	// (0x0003287b) list_single_pane_fp_t1_ParamLimits

0x374e,	// (0x0003287b) list_single_pane_fp_t1

0x3765,	// (0x00032892) list_single_graphic_pane_fp_g1_ParamLimits

0x3765,	// (0x00032892) list_single_graphic_pane_fp_g1

0x9528,	// (0x00038655) list_single_graphic_pane_fp_g2_ParamLimits

0x9528,	// (0x00038655) list_single_graphic_pane_fp_g2

0x43dd,	// (0x0003350a) list_single_graphic_pane_fp_g3_ParamLimits

0x43dd,	// (0x0003350a) list_single_graphic_pane_fp_g3

0x5b74,	// (0x00034ca1) list_single_graphic_pane_fp_g4_ParamLimits

0x5b74,	// (0x00034ca1) list_single_graphic_pane_fp_g4

0x9534,	// (0x00038661) list_single_graphic_pane_fp_g5_ParamLimits

0x9534,	// (0x00038661) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0003ec84) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0003ec84) list_single_graphic_pane_fp_g

0x3771,	// (0x0003289e) list_single_graphic_pane_fp_t1_ParamLimits

0x3771,	// (0x0003289e) list_single_graphic_pane_fp_t1

0x3765,	// (0x00032892) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3765,	// (0x00032892) list_single_graphic_heading_pane_fp_g1

0x9528,	// (0x00038655) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x9528,	// (0x00038655) list_single_graphic_heading_pane_fp_g2

0x43dd,	// (0x0003350a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x43dd,	// (0x0003350a) list_single_graphic_heading_pane_fp_g3

0x5b74,	// (0x00034ca1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5b74,	// (0x00034ca1) list_single_graphic_heading_pane_fp_g4

0x9534,	// (0x00038661) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x9534,	// (0x00038661) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0003ec84) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0003ec84) list_single_graphic_heading_pane_fp_g

0x3787,	// (0x000328b4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3787,	// (0x000328b4) list_single_graphic_heading_pane_fp_t1

0x379d,	// (0x000328ca) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x379d,	// (0x000328ca) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0003ec8f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0003ec8f) list_single_graphic_heading_pane_fp_t

0x37af,	// (0x000328dc) list_single_cale_day_pane_fp_g1_ParamLimits

0x37af,	// (0x000328dc) list_single_cale_day_pane_fp_g1

0x9540,	// (0x0003866d) list_single_cale_day_pane_fp_g2_ParamLimits

0x9540,	// (0x0003866d) list_single_cale_day_pane_fp_g2

0x5b88,	// (0x00034cb5) list_single_cale_day_pane_fp_g3_ParamLimits

0x5b88,	// (0x00034cb5) list_single_cale_day_pane_fp_g3

0x5bb0,	// (0x00034cdd) list_single_cale_day_pane_fp_g4_ParamLimits

0x5bb0,	// (0x00034cdd) list_single_cale_day_pane_fp_g4

0x5bd4,	// (0x00034d01) list_single_cale_day_pane_fp_g5_ParamLimits

0x5bd4,	// (0x00034d01) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0003ec94) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0003ec94) list_single_cale_day_pane_fp_g

0x37e7,	// (0x00032914) list_single_cale_day_pane_fp_t1_ParamLimits

0x37e7,	// (0x00032914) list_single_cale_day_pane_fp_t1

0x380d,	// (0x0003293a) list_single_cale_day_pane_fp_t2_ParamLimits

0x380d,	// (0x0003293a) list_single_cale_day_pane_fp_t2

0x3826,	// (0x00032953) list_single_cale_day_pane_fp_t3_ParamLimits

0x3826,	// (0x00032953) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0003ec9f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0003ec9f) list_single_cale_day_pane_fp_t

0x9528,	// (0x00038655) list_empty_pane_fp_g1_ParamLimits

0x9528,	// (0x00038655) list_empty_pane_fp_g1

0x383f,	// (0x0003296c) list_empty_pane_fp_t1

0x384d,	// (0x0003297a) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0003eca6) list_empty_pane_fp_t

0x9528,	// (0x00038655) list_single_heading_pane_fp_g1_ParamLimits

0x9528,	// (0x00038655) list_single_heading_pane_fp_g1

0x43dd,	// (0x0003350a) list_single_heading_pane_fp_g2_ParamLimits

0x43dd,	// (0x0003350a) list_single_heading_pane_fp_g2

0x5b74,	// (0x00034ca1) list_single_heading_pane_fp_g3_ParamLimits

0x5b74,	// (0x00034ca1) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0003ecab) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003ecab) list_single_heading_pane_fp_g

0x385b,	// (0x00032988) list_single_heading_pane_fp_t1_ParamLimits

0x385b,	// (0x00032988) list_single_heading_pane_fp_t1

0x386d,	// (0x0003299a) list_single_heading_pane_fp_t2_ParamLimits

0x386d,	// (0x0003299a) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0003ecb2) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0003ecb2) list_single_heading_pane_fp_t

0x45eb,	// (0x00033718) aid_size_cell_fast

0x3f04,	// (0x00033031) soft_indicator_pane_cp1_t1

0x4628,	// (0x00033755) cell_app_pane_cp2_ParamLimits

0x4628,	// (0x00033755) cell_app_pane_cp2

0x594b,	// (0x00034a78) fep_hwr_candidate_drop_down_list_pane

0xf50f,	// (0x0003e63c) fep_hwr_candidate_pane_g3_ParamLimits

0xf50f,	// (0x0003e63c) fep_hwr_candidate_pane_g3

0xf51c,	// (0x0003e649) fep_hwr_candidate_pane_g4_ParamLimits

0xf51c,	// (0x0003e649) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0003ec26) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0003ec26) fep_hwr_candidate_pane_g

0x90f6,	// (0x00038223) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x90f6,	// (0x00038223) fep_vkb_candidate_drop_down_list_pane

0x93ed,	// (0x0003851a) fep_vkb_candidate_pane_g3

0x93f5,	// (0x00038522) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0003ec53) fep_vkb_candidate_pane_g

0x91dd,	// (0x0003830a) cell_hwr_candidate_pane_g1_ParamLimits

0x940c,	// (0x00038539) cell_hwr_candidate_pane_g3_ParamLimits

0x940c,	// (0x00038539) cell_hwr_candidate_pane_g3

0x942d,	// (0x0003855a) cell_hwr_candidate_pane_g4_ParamLimits

0x942d,	// (0x0003855a) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0003ec6d) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0003ec6d) cell_hwr_candidate_pane_g

0x944e,	// (0x0003857b) cell_vkb_candidate_pane_g3_ParamLimits

0x944e,	// (0x0003857b) cell_vkb_candidate_pane_g3

0x9469,	// (0x00038596) cell_vkb_candidate_pane_g4_ParamLimits

0x9469,	// (0x00038596) cell_vkb_candidate_pane_g4

0x954c,	// (0x00038679) cell_app_pane_cp2_g1_ParamLimits

0x954c,	// (0x00038679) cell_app_pane_cp2_g1

0x956a,	// (0x00038697) cell_app_pane_cp2_g2_ParamLimits

0x956a,	// (0x00038697) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0003ecb7) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0003ecb7) cell_app_pane_cp2_g

0x9576,	// (0x000386a3) cell_app_pane_cp2_t1_ParamLimits

0x9576,	// (0x000386a3) cell_app_pane_cp2_t1

0x445e,	// (0x0003358b) grid_highlight_pane_cp1_ParamLimits

0x445e,	// (0x0003358b) grid_highlight_pane_cp1

0x5bf8,	// (0x00034d25) cell_hwr_candidate_pane_cp1_ParamLimits

0x5bf8,	// (0x00034d25) cell_hwr_candidate_pane_cp1

0x91dd,	// (0x0003830a) fep_hwr_candidate_drop_down_list_pane_g1

0x9588,	// (0x000386b5) fep_hwr_candidate_drop_down_list_pane_g2

0x9595,	// (0x000386c2) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0003ecbc) fep_hwr_candidate_drop_down_list_pane_g

0x5c16,	// (0x00034d43) fep_hwr_candidate_drop_down_list_scroll_pane

0x5c1f,	// (0x00034d4c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5c1f,	// (0x00034d4c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5c2c,	// (0x00034d59) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5c2c,	// (0x00034d59) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5c39,	// (0x00034d66) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5c39,	// (0x00034d66) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x944e,	// (0x0003857b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x944e,	// (0x0003857b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x9469,	// (0x00038596) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9469,	// (0x00038596) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5c46,	// (0x00034d73) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5c46,	// (0x00034d73) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5c61,	// (0x00034d8e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5c61,	// (0x00034d8e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5c7c,	// (0x00034da9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5c7c,	// (0x00034da9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0003ecc3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0003ecc3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x1784,	// (0x000308b1) cell_vkb_candidate_pane_cp1_ParamLimits

0x1784,	// (0x000308b1) cell_vkb_candidate_pane_cp1

0x91dd,	// (0x0003830a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x91dd,	// (0x0003830a) fep_vkb_candidate_drop_down_list_pane_g1

0x9588,	// (0x000386b5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x9588,	// (0x000386b5) fep_vkb_candidate_drop_down_list_pane_g2

0x9595,	// (0x000386c2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x9595,	// (0x000386c2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0003ecbc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8f,	// (0x0003ecbc) fep_vkb_candidate_drop_down_list_pane_g

0x95a2,	// (0x000386cf) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x95a2,	// (0x000386cf) fep_vkb_candidate_drop_down_list_scroll_pane

0x95af,	// (0x000386dc) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x95af,	// (0x000386dc) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x95bc,	// (0x000386e9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x95bc,	// (0x000386e9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x95c8,	// (0x000386f5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x95c8,	// (0x000386f5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x940c,	// (0x00038539) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x940c,	// (0x00038539) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x942d,	// (0x0003855a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x942d,	// (0x0003855a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x95d4,	// (0x00038701) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x95d4,	// (0x00038701) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x95f5,	// (0x00038722) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x95f5,	// (0x00038722) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x9616,	// (0x00038743) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9616,	// (0x00038743) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0003ecd4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0003ecd4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x00ef,	// (0x0002f21c) title_pane_g1_ParamLimits

0x0106,	// (0x0002f233) title_pane_g2_ParamLimits

0xf529,	// (0x0003e656) title_pane_g_ParamLimits

0x4ac1,	// (0x00033bee) aid_call2_pane

0x4ac9,	// (0x00033bf6) aid_call_pane

0x4ad1,	// (0x00033bfe) popup_clock_analogue_window_g1

0x4ad1,	// (0x00033bfe) popup_clock_analogue_window_g2

0x4ad9,	// (0x00033c06) popup_clock_analogue_window_g3

0x4ae2,	// (0x00033c0f) popup_clock_analogue_window_g4

0x3a09,	// (0x00032b36) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0003e805) popup_clock_analogue_window_g

0x4aea,	// (0x00033c17) popup_clock_analogue_window_t1

0x4b1f,	// (0x00033c4c) clock_digital_number_pane_ParamLimits

0x4b1f,	// (0x00033c4c) clock_digital_number_pane

0x4b2b,	// (0x00033c58) clock_digital_number_pane_cp02_ParamLimits

0x4b2b,	// (0x00033c58) clock_digital_number_pane_cp02

0x4b37,	// (0x00033c64) clock_digital_number_pane_cp03_ParamLimits

0x4b37,	// (0x00033c64) clock_digital_number_pane_cp03

0x4b43,	// (0x00033c70) clock_digital_number_pane_cp04_ParamLimits

0x4b43,	// (0x00033c70) clock_digital_number_pane_cp04

0x4b4f,	// (0x00033c7c) clock_digital_separator_pane_ParamLimits

0x4b4f,	// (0x00033c7c) clock_digital_separator_pane

0x4b5b,	// (0x00033c88) popup_clock_digital_window_t1_ParamLimits

0x4b5b,	// (0x00033c88) popup_clock_digital_window_t1

0x3a09,	// (0x00032b36) clock_digital_number_pane_g1

0x3a09,	// (0x00032b36) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0003e810) clock_digital_number_pane_g

0x3a09,	// (0x00032b36) clock_digital_separator_pane_g1

0x3a09,	// (0x00032b36) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0003e810) clock_digital_separator_pane_g

0x0d5f,	// (0x0002fe8c) aid_fill_nsta_ParamLimits

0x0e76,	// (0x0002ffa3) indicator_nsta_pane_ParamLimits

0x7128,	// (0x00036255) popup_clock_analogue_window

0x7128,	// (0x00036255) popup_clock_digital_window

0x15c9,	// (0x000306f6) grid_indicator_nsta_pane_ParamLimits

0x8ba9,	// (0x00037cd6) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0003eba6) clock_nsta_pane_t

0x4905,	// (0x00033a32) aid_size_max_handle

0xd046,	// (0x0003c173) aid_size_min_handle

0x6e9d,	// (0x00035fca) editor_scroll_pane

0x9631,	// (0x0003875e) ex_editor_pane

0x45b4,	// (0x000336e1) scroll_pane_cp13

0x434c,	// (0x00033479) scroll_pane_cp14

0x6a3a,	// (0x00035b67) scroll_pane_cp36

0x0869,	// (0x0002f996) list_single_graphic_hl_pane_cp2_ParamLimits

0x0869,	// (0x0002f996) list_single_graphic_hl_pane_cp2

0xd938,	// (0x0003ca65) list_single_graphic_hl_pane_ParamLimits

0xd938,	// (0x0003ca65) list_single_graphic_hl_pane

0x3883,	// (0x000329b0) aid_size_min_hl_cp1

0x9639,	// (0x00038766) list_highlight_pane_cp34_ParamLimits

0x9639,	// (0x00038766) list_highlight_pane_cp34

0x964a,	// (0x00038777) list_single_graphic_hl_pane_g1_ParamLimits

0x964a,	// (0x00038777) list_single_graphic_hl_pane_g1

0xcceb,	// (0x0003be18) list_single_graphic_hl_pane_g2_ParamLimits

0xcceb,	// (0x0003be18) list_single_graphic_hl_pane_g2

0xcceb,	// (0x0003be18) list_single_graphic_hl_pane_g3_ParamLimits

0xcceb,	// (0x0003be18) list_single_graphic_hl_pane_g3

0x4354,	// (0x00033481) list_single_graphic_hl_pane_g4_ParamLimits

0x4354,	// (0x00033481) list_single_graphic_hl_pane_g4

0x4478,	// (0x000335a5) list_single_graphic_hl_pane_g5_ParamLimits

0x4478,	// (0x000335a5) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0003ece5) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0003ece5) list_single_graphic_hl_pane_g

0xccf7,	// (0x0003be24) list_single_graphic_hl_pane_t1_ParamLimits

0xccf7,	// (0x0003be24) list_single_graphic_hl_pane_t1

0x9657,	// (0x00038784) aid_size_min_hl_cp2

0x9660,	// (0x0003878d) list_highlight_pane_cp34_cp2_ParamLimits

0x9660,	// (0x0003878d) list_highlight_pane_cp34_cp2

0x964a,	// (0x00038777) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x964a,	// (0x00038777) list_single_graphic_hl_pane_g1_cp2

0x966d,	// (0x0003879a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x966d,	// (0x0003879a) list_single_graphic_hl_pane_g2_cp2

0x9679,	// (0x000387a6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x9679,	// (0x000387a6) list_single_graphic_hl_pane_g3_cp2

0x6d12,	// (0x00035e3f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6d12,	// (0x00035e3f) list_single_graphic_hl_pane_g4_cp2

0x9492,	// (0x000385bf) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x9492,	// (0x000385bf) list_single_graphic_hl_pane_g5_cp2

0xd08c,	// (0x0003c1b9) control_pane_g4_ParamLimits

0xd08c,	// (0x0003c1b9) control_pane_g4

0x4f49,	// (0x00034076) bg_popup_sub_pane_cp10_ParamLimits

0x8fbb,	// (0x000380e8) list_choice_list_pane_ParamLimits

0x8fca,	// (0x000380f7) scroll_pane_cp23

0x3f2f,	// (0x0003305c) bg_popup_preview_window_pane_cp02_ParamLimits

0x94ce,	// (0x000385fb) list_preview_fixed_pane_ParamLimits

0x94e4,	// (0x00038611) list_preview_fixed_pane_cp_ParamLimits

0x94e4,	// (0x00038611) list_preview_fixed_pane_cp

0x94f0,	// (0x0003861d) popup_preview_fixed_window_g1_ParamLimits

0x94f0,	// (0x0003861d) popup_preview_fixed_window_g1

0x94fc,	// (0x00038629) popup_preview_fixed_window_g2_ParamLimits

0x94fc,	// (0x00038629) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0003ec74) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0003ec74) popup_preview_fixed_window_g

0x485e,	// (0x0003398b) aid_navi_side_left_pane_ParamLimits

0x486e,	// (0x0003399b) aid_navi_side_right_pane_ParamLimits

0x487d,	// (0x000339aa) navi_icon_pane_stacon_ParamLimits

0x488d,	// (0x000339ba) navi_navi_pane_stacon_ParamLimits

0x487d,	// (0x000339aa) navi_text_pane_stacon_ParamLimits

0x39ff,	// (0x00032b2c) main_text_info_pane

0x969b,	// (0x000387c8) listscroll_text_info_pane

0x96a3,	// (0x000387d0) list_text_info_pane_ParamLimits

0x96a3,	// (0x000387d0) list_text_info_pane

0x96b2,	// (0x000387df) scroll_pane_cp24_ParamLimits

0x96b2,	// (0x000387df) scroll_pane_cp24

0x17a4,	// (0x000308d1) list_text_info_pane_t1_ParamLimits

0x17a4,	// (0x000308d1) list_text_info_pane_t1

0xd1d3,	// (0x0003c300) popup_fast_swap2_window_ParamLimits

0xd1d3,	// (0x0003c300) popup_fast_swap2_window

0x96d0,	// (0x000387fd) aid_size_cell_fast2

0x39ff,	// (0x00032b2c) bg_popup_window_pane_cp17

0x75d3,	// (0x00036700) heading_pane_cp2

0x75db,	// (0x00036708) listscroll_fast2_pane

0x96da,	// (0x00038807) grid_fast2_pane

0x96e2,	// (0x0003880f) listscroll_fast2_pane_g1

0x96ea,	// (0x00038817) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0003ecf0) listscroll_fast2_pane_g

0x45b4,	// (0x000336e1) scroll_pane_cp26

0x96f2,	// (0x0003881f) cell_fast2_pane_ParamLimits

0x96f2,	// (0x0003881f) cell_fast2_pane

0x9708,	// (0x00038835) cell_fast2_pane_g1

0x9711,	// (0x0003883e) cell_fast2_pane_g2

0x971a,	// (0x00038847) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0003ecf5) cell_fast2_pane_g

0x41ad,	// (0x000332da) grid_highlight_pane_cp9

0x41c2,	// (0x000332ef) main_eswt_pane_ParamLimits

0x41c2,	// (0x000332ef) main_eswt_pane

0x96c7,	// (0x000387f4) list_single_text_info_pane

0x9722,	// (0x0003884f) eswt_ctrl_button_pane

0x9722,	// (0x0003884f) eswt_ctrl_canvas_pane

0x972a,	// (0x00038857) eswt_ctrl_combo_pane

0x9722,	// (0x0003884f) eswt_ctrl_default_pane

0x9722,	// (0x0003884f) eswt_ctrl_label_pane

0x9732,	// (0x0003885f) eswt_ctrl_wait_pane

0x973a,	// (0x00038867) eswt_shell_pane

0x39ff,	// (0x00032b2c) listscroll_eswt_app_pane

0x9756,	// (0x00038883) popup_eswt_tasktip_window_ParamLimits

0x9756,	// (0x00038883) popup_eswt_tasktip_window

0x72a9,	// (0x000363d6) bg_popup_window_pane_cp18

0x9767,	// (0x00038894) eswt_control_pane_g1_ParamLimits

0x9767,	// (0x00038894) eswt_control_pane_g1

0x9774,	// (0x000388a1) eswt_control_pane_g2_ParamLimits

0x9774,	// (0x000388a1) eswt_control_pane_g2

0x9781,	// (0x000388ae) eswt_control_pane_g3_ParamLimits

0x9781,	// (0x000388ae) eswt_control_pane_g3

0x978e,	// (0x000388bb) eswt_control_pane_g4_ParamLimits

0x978e,	// (0x000388bb) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0003ecfc) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0003ecfc) eswt_control_pane_g

0x445e,	// (0x0003358b) bg_button_pane_ParamLimits

0x445e,	// (0x0003358b) bg_button_pane

0x41c2,	// (0x000332ef) common_borders_pane_copy2_ParamLimits

0x41c2,	// (0x000332ef) common_borders_pane_copy2

0x979b,	// (0x000388c8) control_button_pane_g1_ParamLimits

0x979b,	// (0x000388c8) control_button_pane_g1

0x97a7,	// (0x000388d4) control_button_pane_g2_ParamLimits

0x97a7,	// (0x000388d4) control_button_pane_g2

0x97b3,	// (0x000388e0) control_button_pane_g3_ParamLimits

0x97b3,	// (0x000388e0) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0003ed05) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0003ed05) control_button_pane_g

0x97c7,	// (0x000388f4) control_button_pane_t1

0x97d5,	// (0x00038902) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0003ed0c) control_button_pane_t

0x7229,	// (0x00036356) bg_button_pane_g1

0x7231,	// (0x0003635e) bg_button_pane_g2

0x7239,	// (0x00036366) bg_button_pane_g3

0x7241,	// (0x0003636e) bg_button_pane_g4

0x7249,	// (0x00036376) bg_button_pane_g5

0x7251,	// (0x0003637e) bg_button_pane_g6

0x7259,	// (0x00036386) bg_button_pane_g7

0x7261,	// (0x0003638e) bg_button_pane_g8

0x7269,	// (0x00036396) bg_button_pane_g9

0x0008,

0xf83a,	// (0x0003e967) bg_button_pane_g

0x8f76,	// (0x000380a3) common_borders_pane_ParamLimits

0x8f76,	// (0x000380a3) common_borders_pane

0x9767,	// (0x00038894) eswt_control_pane_g1_copy1_ParamLimits

0x9767,	// (0x00038894) eswt_control_pane_g1_copy1

0x9774,	// (0x000388a1) eswt_control_pane_g2_copy1_ParamLimits

0x9774,	// (0x000388a1) eswt_control_pane_g2_copy1

0x9781,	// (0x000388ae) eswt_control_pane_g3_copy1_ParamLimits

0x9781,	// (0x000388ae) eswt_control_pane_g3_copy1

0x978e,	// (0x000388bb) eswt_control_pane_g4_copy1_ParamLimits

0x978e,	// (0x000388bb) eswt_control_pane_g4_copy1

0x8fb1,	// (0x000380de) bg_eswt_ctrl_canvas_pane_g1

0x8f76,	// (0x000380a3) common_borders_pane_cp2_ParamLimits

0x8f76,	// (0x000380a3) common_borders_pane_cp2

0x8f76,	// (0x000380a3) common_borders_pane_cp3_ParamLimits

0x8f76,	// (0x000380a3) common_borders_pane_cp3

0x97e3,	// (0x00038910) separator_horizontal_pane

0x4960,	// (0x00033a8d) separator_vertical_pane

0x9767,	// (0x00038894) eswt_control_pane_g1_copy2_ParamLimits

0x9767,	// (0x00038894) eswt_control_pane_g1_copy2

0x9774,	// (0x000388a1) eswt_control_pane_g2_copy2_ParamLimits

0x9774,	// (0x000388a1) eswt_control_pane_g2_copy2

0x9781,	// (0x000388ae) eswt_control_pane_g3_copy2_ParamLimits

0x9781,	// (0x000388ae) eswt_control_pane_g3_copy2

0x978e,	// (0x000388bb) eswt_control_pane_g4_copy2_ParamLimits

0x978e,	// (0x000388bb) eswt_control_pane_g4_copy2

0x39ff,	// (0x00032b2c) common_borders_pane_cp4

0x97eb,	// (0x00038918) separator_horizontal_pane_g1

0x97f4,	// (0x00038921) separator_horizontal_pane_g2

0x97fd,	// (0x0003892a) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0003ed11) separator_horizontal_pane_g

0x9767,	// (0x00038894) eswt_control_pane_g1_copy3_ParamLimits

0x9767,	// (0x00038894) eswt_control_pane_g1_copy3

0x9774,	// (0x000388a1) eswt_control_pane_g2_copy3_ParamLimits

0x9774,	// (0x000388a1) eswt_control_pane_g2_copy3

0x9781,	// (0x000388ae) eswt_control_pane_g3_copy3_ParamLimits

0x9781,	// (0x000388ae) eswt_control_pane_g3_copy3

0x978e,	// (0x000388bb) eswt_control_pane_g4_copy3_ParamLimits

0x978e,	// (0x000388bb) eswt_control_pane_g4_copy3

0x39ff,	// (0x00032b2c) common_borders_pane_cp5

0x9806,	// (0x00038933) separator_vertical_pane_g1

0x980f,	// (0x0003893c) separator_vertical_pane_g2

0x9818,	// (0x00038945) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0003ed18) separator_vertical_pane_g

0x9767,	// (0x00038894) eswt_control_pane_g1_copy4_ParamLimits

0x9767,	// (0x00038894) eswt_control_pane_g1_copy4

0x9774,	// (0x000388a1) eswt_control_pane_g2_copy4_ParamLimits

0x9774,	// (0x000388a1) eswt_control_pane_g2_copy4

0x9781,	// (0x000388ae) eswt_control_pane_g3_copy4_ParamLimits

0x9781,	// (0x000388ae) eswt_control_pane_g3_copy4

0x978e,	// (0x000388bb) eswt_control_pane_g4_copy4_ParamLimits

0x978e,	// (0x000388bb) eswt_control_pane_g4_copy4

0x17bf,	// (0x000308ec) eswt_ctrl_combo_button_pane

0x17c7,	// (0x000308f4) eswt_ctrl_input_pane

0x17cf,	// (0x000308fc) popup_choice_list_window_cp70

0x17d7,	// (0x00030904) eswt_ctrl_input_pane_t1

0x39ff,	// (0x00032b2c) input_focus_pane_cp70

0x8f76,	// (0x000380a3) bg_button_pane_cp70_ParamLimits

0x8f76,	// (0x000380a3) bg_button_pane_cp70

0x860e,	// (0x0003773b) eswt_ctrl_combo_button_pane_g1

0x9821,	// (0x0003894e) wait_bar_pane_cp70

0x72a9,	// (0x000363d6) bg_popup_window_pane_cp70_ParamLimits

0x72a9,	// (0x000363d6) bg_popup_window_pane_cp70

0x9829,	// (0x00038956) popup_eswt_tasktip_window_t1

0x983f,	// (0x0003896c) wait_bar_pane_cp71_ParamLimits

0x983f,	// (0x0003896c) wait_bar_pane_cp71

0x984b,	// (0x00038978) grid_eswt_app_pane

0x4969,	// (0x00033a96) scroll_pane_cp70

0x17e5,	// (0x00030912) cell_eswt_app_pane_ParamLimits

0x17e5,	// (0x00030912) cell_eswt_app_pane

0x180d,	// (0x0003093a) cell_eswt_app_pane_g1_ParamLimits

0x180d,	// (0x0003093a) cell_eswt_app_pane_g1

0x183c,	// (0x00030969) cell_eswt_app_pane_g2_ParamLimits

0x183c,	// (0x00030969) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x0003ed1f) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x0003ed1f) cell_eswt_app_pane_g

0x1865,	// (0x00030992) cell_eswt_app_pane_t1_ParamLimits

0x1865,	// (0x00030992) cell_eswt_app_pane_t1

0x9854,	// (0x00038981) grid_highlight_pane_cp70_ParamLimits

0x9854,	// (0x00038981) grid_highlight_pane_cp70

0x4354,	// (0x00033481) set_content_pane_g1

0x701c,	// (0x00036149) status_small_volume_pane

0x5c97,	// (0x00034dc4) status_small_volume_pane_g1

0x5c9f,	// (0x00034dcc) volume_small2_pane

0x5ca8,	// (0x00034dd5) volume_small2_pane_g1

0x5cb1,	// (0x00034dde) volume_small2_pane_g2

0x5cba,	// (0x00034de7) volume_small2_pane_g3

0x5cc3,	// (0x00034df0) volume_small2_pane_g4

0x5ccc,	// (0x00034df9) volume_small2_pane_g5

0x5cd5,	// (0x00034e02) volume_small2_pane_g6

0x5cde,	// (0x00034e0b) volume_small2_pane_g7

0x5ce7,	// (0x00034e14) volume_small2_pane_g8

0x5cf0,	// (0x00034e1d) volume_small2_pane_g9

0x5cf9,	// (0x00034e26) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0003ed24) volume_small2_pane_g

0x92e4,	// (0x00038411) fep_vkb_top_text_pane_g1_ParamLimits

0x172c,	// (0x00030859) fep_vkb_top_text_pane_t1_ParamLimits

0x9508,	// (0x00038635) popup_preview_fixed_window_g3_ParamLimits

0x9508,	// (0x00038635) popup_preview_fixed_window_g3

0xd6f3,	// (0x0003c820) popup_toolbar_trans_pane

0x835f,	// (0x0003748c) aid_height_set_list_ParamLimits

0x836b,	// (0x00037498) aid_size_parent_ParamLimits

0x4f49,	// (0x00034076) list_highlight_pane_cp2_ParamLimits

0x4354,	// (0x00033481) set_content_pane_g1_ParamLimits

0x4628,	// (0x00033755) list_single_image_pane_ParamLimits

0x4628,	// (0x00033755) list_single_image_pane

0x1897,	// (0x000309c4) aid_size_cell_image_ParamLimits

0x1897,	// (0x000309c4) aid_size_cell_image

0x18a4,	// (0x000309d1) grid_single_image_pane_ParamLimits

0x18a4,	// (0x000309d1) grid_single_image_pane

0x4354,	// (0x00033481) list_single_image_pane_g1_ParamLimits

0x4354,	// (0x00033481) list_single_image_pane_g1

0x4478,	// (0x000335a5) list_single_image_pane_g2_ParamLimits

0x4478,	// (0x000335a5) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0003ed39) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0003ed39) list_single_image_pane_g

0x9860,	// (0x0003898d) list_single_image_pane_t1_ParamLimits

0x9860,	// (0x0003898d) list_single_image_pane_t1

0x18b2,	// (0x000309df) cell_image_list_pane_ParamLimits

0x18b2,	// (0x000309df) cell_image_list_pane

0x18c6,	// (0x000309f3) cell_image_list_pane_g1

0x18cf,	// (0x000309fc) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0003ed3e) cell_image_list_pane_g

0x9876,	// (0x000389a3) aid_size_cell_tb_trans_pane

0x445e,	// (0x0003358b) bg_tb_trans_pane

0x9888,	// (0x000389b5) grid_tb_trans_pane

0x7229,	// (0x00036356) bg_tb_trans_pane_g1

0x7231,	// (0x0003635e) bg_tb_trans_pane_g2

0x7239,	// (0x00036366) bg_tb_trans_pane_g3

0x7241,	// (0x0003636e) bg_tb_trans_pane_g4

0x7249,	// (0x00036376) bg_tb_trans_pane_g5

0x7261,	// (0x0003638e) bg_tb_trans_pane_g6

0x7269,	// (0x00036396) bg_tb_trans_pane_g7

0x7251,	// (0x0003637e) bg_tb_trans_pane_g8

0x7259,	// (0x00036386) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x0003ed43) bg_tb_trans_pane_g

0x989c,	// (0x000389c9) cell_toolbar_trans_pane_ParamLimits

0x989c,	// (0x000389c9) cell_toolbar_trans_pane

0x8fb1,	// (0x000380de) cell_toolbar_trans_pane_g1

0x1676,	// (0x000307a3) list_form2_midp_pane_t1

0x1684,	// (0x000307b1) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0003ebec) list_form2_midp_pane_t

0x8c85,	// (0x00037db2) scroll_pane_cp51_ParamLimits

0x8dfb,	// (0x00037f28) form2_midp_wait_pane_g1

0x8e04,	// (0x00037f31) form2_midp_wait_pane_g2

0x8e0d,	// (0x00037f3a) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0003ec01) form2_midp_wait_pane_g

0x3d5c,	// (0x00032e89) list_highlight_pane_cp21_ParamLimits

0x8e4b,	// (0x00037f78) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x8e5a,	// (0x00037f87) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3462,	// (0x0003258f) list_single_2graphic_im_pane_ParamLimits

0x3462,	// (0x0003258f) list_single_2graphic_im_pane

0x18d8,	// (0x00030a05) list_single_2graphic_im_pane_g1_ParamLimits

0x18d8,	// (0x00030a05) list_single_2graphic_im_pane_g1

0x18e9,	// (0x00030a16) list_single_2graphic_im_pane_g2_ParamLimits

0x18e9,	// (0x00030a16) list_single_2graphic_im_pane_g2

0x18f5,	// (0x00030a22) list_single_2graphic_im_pane_g3_ParamLimits

0x18f5,	// (0x00030a22) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x0003ed56) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x0003ed56) list_single_2graphic_im_pane_g

0x1909,	// (0x00030a36) list_single_2graphic_im_pane_t1_ParamLimits

0x1909,	// (0x00030a36) list_single_2graphic_im_pane_t1

0x9514,	// (0x00038641) list_single_graphic_2heading_pane_fp_ParamLimits

0x9514,	// (0x00038641) list_single_graphic_2heading_pane_fp

0x3765,	// (0x00032892) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3765,	// (0x00032892) list_single_graphic_2heading_pane_fp_g1

0x9528,	// (0x00038655) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x9528,	// (0x00038655) list_single_graphic_2heading_pane_fp_g2

0x43dd,	// (0x0003350a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x43dd,	// (0x0003350a) list_single_graphic_2heading_pane_fp_g3

0x5b74,	// (0x00034ca1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5b74,	// (0x00034ca1) list_single_graphic_2heading_pane_fp_g4

0x9534,	// (0x00038661) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x9534,	// (0x00038661) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0003ec84) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0003ec84) list_single_graphic_2heading_pane_fp_g

0x3898,	// (0x000329c5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3898,	// (0x000329c5) list_single_graphic_2heading_pane_fp_t1

0x379d,	// (0x000328ca) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x379d,	// (0x000328ca) list_single_graphic_2heading_pane_fp_t2

0x38ae,	// (0x000329db) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x38ae,	// (0x000329db) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x0003ed5f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x0003ed5f) list_single_graphic_2heading_pane_fp_t

0x903a,	// (0x00038167) fep_hwr_write_pane_g5_ParamLimits

0x903a,	// (0x00038167) fep_hwr_write_pane_g5

0x9046,	// (0x00038173) fep_hwr_write_pane_g6_ParamLimits

0x9046,	// (0x00038173) fep_hwr_write_pane_g6

0x973a,	// (0x00038867) eswt_shell_pane_ParamLimits

0x72a9,	// (0x000363d6) bg_popup_window_pane_cp18_ParamLimits

0x8303,	// (0x00037430) heading_pane_cp70

0x9829,	// (0x00038956) popup_eswt_tasktip_window_t1_ParamLimits

0x0da3,	// (0x0002fed0) aid_touch_tab_arrow_left

0x0db7,	// (0x0002fee4) aid_touch_tab_arrow_right

0x0125,	// (0x0002f252) title_pane_g3_ParamLimits

0x0125,	// (0x0002f252) title_pane_g3

0x442e,	// (0x0003355b) set_value_pane_g1

0xd6f3,	// (0x0003c820) popup_toolbar_trans_pane_ParamLimits

0x9876,	// (0x000389a3) aid_size_cell_tb_trans_pane_ParamLimits

0x445e,	// (0x0003358b) bg_tb_trans_pane_ParamLimits

0x9888,	// (0x000389b5) grid_tb_trans_pane_ParamLimits

0x3f2f,	// (0x0003305c) cont_note_pane_ParamLimits

0x3f2f,	// (0x0003305c) cont_note_pane

0x41c2,	// (0x000332ef) cont_snote2_single_text_pane_ParamLimits

0x41c2,	// (0x000332ef) cont_snote2_single_text_pane

0x41c2,	// (0x000332ef) cont_snote2_single_graphic_pane_ParamLimits

0x41c2,	// (0x000332ef) cont_snote2_single_graphic_pane

0x77f1,	// (0x0003691e) cont_note_wait_pane_ParamLimits

0x77f1,	// (0x0003691e) cont_note_wait_pane

0x77f1,	// (0x0003691e) cont_note_image_pane_ParamLimits

0x77f1,	// (0x0003691e) cont_note_image_pane

0x98ce,	// (0x000389fb) popup_note2_window_g1_ParamLimits

0x98ce,	// (0x000389fb) popup_note2_window_g1

0x98ff,	// (0x00038a2c) popup_note2_window_t1_ParamLimits

0x98ff,	// (0x00038a2c) popup_note2_window_t1

0x9944,	// (0x00038a71) popup_note2_window_t2_ParamLimits

0x9944,	// (0x00038a71) popup_note2_window_t2

0x9989,	// (0x00038ab6) popup_note2_window_t3_ParamLimits

0x9989,	// (0x00038ab6) popup_note2_window_t3

0x99ce,	// (0x00038afb) popup_note2_window_t4_ParamLimits

0x99ce,	// (0x00038afb) popup_note2_window_t4

0x3fb3,	// (0x000330e0) popup_note2_window_t5_ParamLimits

0x3fb3,	// (0x000330e0) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0003ed6b) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0003ed6b) popup_note2_window_t

0x99fd,	// (0x00038b2a) popup_note2_image_window_g1_ParamLimits

0x99fd,	// (0x00038b2a) popup_note2_image_window_g1

0x9a09,	// (0x00038b36) popup_note2_image_window_g2_ParamLimits

0x9a09,	// (0x00038b36) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x0003ed76) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x0003ed76) popup_note2_image_window_g

0x9a1b,	// (0x00038b48) popup_note2_image_window_t1_ParamLimits

0x9a1b,	// (0x00038b48) popup_note2_image_window_t1

0x9a33,	// (0x00038b60) popup_note2_image_window_t2_ParamLimits

0x9a33,	// (0x00038b60) popup_note2_image_window_t2

0xa78a,	// (0x000398b7) popup_note2_image_window_t3_ParamLimits

0xa78a,	// (0x000398b7) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0003ed7b) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0003ed7b) popup_note2_image_window_t

0x77ff,	// (0x0003692c) popup_note2_wait_window_g1_ParamLimits

0x77ff,	// (0x0003692c) popup_note2_wait_window_g1

0x780b,	// (0x00036938) popup_note2_wait_window_g2_ParamLimits

0x780b,	// (0x00036938) popup_note2_wait_window_g2

0x7817,	// (0x00036944) popup_note2_wait_window_g3_ParamLimits

0x7817,	// (0x00036944) popup_note2_wait_window_g3

0x0002,

0xf81c,	// (0x0003e949) popup_note2_wait_window_g_ParamLimits

0xf81c,	// (0x0003e949) popup_note2_wait_window_g

0xa7a6,	// (0x000398d3) popup_note2_wait_window_t1_ParamLimits

0xa7a6,	// (0x000398d3) popup_note2_wait_window_t1

0xa7c4,	// (0x000398f1) popup_note2_wait_window_t2_ParamLimits

0xa7c4,	// (0x000398f1) popup_note2_wait_window_t2

0xa7e2,	// (0x0003990f) popup_note2_wait_window_t3_ParamLimits

0xa7e2,	// (0x0003990f) popup_note2_wait_window_t3

0xa7f4,	// (0x00039921) popup_note2_wait_window_t4_ParamLimits

0xa7f4,	// (0x00039921) popup_note2_wait_window_t4

0x0003,

0xfc55,	// (0x0003ed82) popup_note2_wait_window_t_ParamLimits

0xfc55,	// (0x0003ed82) popup_note2_wait_window_t

0xa806,	// (0x00039933) wait_bar2_pane_ParamLimits

0xa806,	// (0x00039933) wait_bar2_pane

0xa81e,	// (0x0003994b) popup_snote2_single_text_window_g1_ParamLimits

0xa81e,	// (0x0003994b) popup_snote2_single_text_window_g1

0xa846,	// (0x00039973) popup_snote2_single_text_window_t1_ParamLimits

0xa846,	// (0x00039973) popup_snote2_single_text_window_t1

0xa892,	// (0x000399bf) popup_snote2_single_text_window_t2_ParamLimits

0xa892,	// (0x000399bf) popup_snote2_single_text_window_t2

0xa8de,	// (0x00039a0b) popup_snote2_single_text_window_t3_ParamLimits

0xa8de,	// (0x00039a0b) popup_snote2_single_text_window_t3

0xa91f,	// (0x00039a4c) popup_snote2_single_text_window_t4_ParamLimits

0xa91f,	// (0x00039a4c) popup_snote2_single_text_window_t4

0xa955,	// (0x00039a82) popup_snote2_single_text_window_t5_ParamLimits

0xa955,	// (0x00039a82) popup_snote2_single_text_window_t5

0x0004,

0xfc5e,	// (0x0003ed8b) popup_snote2_single_text_window_t_ParamLimits

0xfc5e,	// (0x0003ed8b) popup_snote2_single_text_window_t

0xa980,	// (0x00039aad) popup_snote2_single_graphic_window_g1_ParamLimits

0xa980,	// (0x00039aad) popup_snote2_single_graphic_window_g1

0xa9a8,	// (0x00039ad5) popup_snote2_single_graphic_window_g2_ParamLimits

0xa9a8,	// (0x00039ad5) popup_snote2_single_graphic_window_g2

0x0001,

0xfc69,	// (0x0003ed96) popup_snote2_single_graphic_window_g_ParamLimits

0xfc69,	// (0x0003ed96) popup_snote2_single_graphic_window_g

0xa9d0,	// (0x00039afd) popup_snote2_single_graphic_window_t1_ParamLimits

0xa9d0,	// (0x00039afd) popup_snote2_single_graphic_window_t1

0xaa1c,	// (0x00039b49) popup_snote2_single_graphic_window_t2_ParamLimits

0xaa1c,	// (0x00039b49) popup_snote2_single_graphic_window_t2

0xa8de,	// (0x00039a0b) popup_snote2_single_graphic_window_t3_ParamLimits

0xa8de,	// (0x00039a0b) popup_snote2_single_graphic_window_t3

0xa91f,	// (0x00039a4c) popup_snote2_single_graphic_window_t4_ParamLimits

0xa91f,	// (0x00039a4c) popup_snote2_single_graphic_window_t4

0xa955,	// (0x00039a82) popup_snote2_single_graphic_window_t5_ParamLimits

0xa955,	// (0x00039a82) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6e,	// (0x0003ed9b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6e,	// (0x0003ed9b) popup_snote2_single_graphic_window_t

0x8c1e,	// (0x00037d4b) clock_nsta_pane_cp2_t1

0x8c1e,	// (0x00037d4b) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0003ebc2) clock_nsta_pane_cp2_t

0x30ed,	// (0x0003221a) form_field_data_wide_pane_g1_ParamLimits

0x4354,	// (0x00033481) form_field_data_wide_pane_g2_ParamLimits

0x4354,	// (0x00033481) form_field_data_wide_pane_g2

0x4478,	// (0x000335a5) form_field_data_wide_pane_g3_ParamLimits

0x4478,	// (0x000335a5) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0003e788) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0003e788) form_field_data_wide_pane_g

0x15b3,	// (0x000306e0) grid_touch_3_pane_ParamLimits

0x15b3,	// (0x000306e0) grid_touch_3_pane

0x193a,	// (0x00030a67) cell_touch_3_pane_ParamLimits

0x193a,	// (0x00030a67) cell_touch_3_pane

0x8fb1,	// (0x000380de) cell_touch_3_pane_g1

0x8fb1,	// (0x000380de) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0003ec47) cell_touch_3_pane_g

0x400b,	// (0x00033138) cont_query_data_pane

0x4013,	// (0x00033140) cont_query_data_pane_cp1

0xaa68,	// (0x00039b95) button_value_adjust_pane_cp7

0xaa70,	// (0x00039b9d) query_popup_pane_cp3

0x6a4b,	// (0x00035b78) bg_popup_sub_pane_cp22_ParamLimits

0x4b7a,	// (0x00033ca7) navi_navi_volume_pane_cp2

0x4b92,	// (0x00033cbf) popup_side_volume_key_window_g2

0x4b9e,	// (0x00033ccb) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0003e81e) popup_side_volume_key_window_g

0x4bb8,	// (0x00033ce5) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0003e825) popup_side_volume_key_window_t

0x6c95,	// (0x00035dc2) popup_side_volume_key_window_ParamLimits

0xc7f0,	// (0x0003b91d) list_double_graphic_pane_g4_ParamLimits

0xc7f0,	// (0x0003b91d) list_double_graphic_pane_g4

0xd923,	// (0x0003ca50) list_single_2heading_msg_pane_ParamLimits

0xd923,	// (0x0003ca50) list_single_2heading_msg_pane

0xd998,	// (0x0003cac5) list_single_2heading_msg_pane_g1_ParamLimits

0xd998,	// (0x0003cac5) list_single_2heading_msg_pane_g1

0xd9a4,	// (0x0003cad1) list_single_2heading_msg_pane_g2_ParamLimits

0xd9a4,	// (0x0003cad1) list_single_2heading_msg_pane_g2

0xd9b7,	// (0x0003cae4) list_single_2heading_msg_pane_g3_ParamLimits

0xd9b7,	// (0x0003cae4) list_single_2heading_msg_pane_g3

0xd9c3,	// (0x0003caf0) list_single_2heading_msg_pane_g4_ParamLimits

0xd9c3,	// (0x0003caf0) list_single_2heading_msg_pane_g4

0x0003,

0xfc79,	// (0x0003eda6) list_single_2heading_msg_pane_g_ParamLimits

0xfc79,	// (0x0003eda6) list_single_2heading_msg_pane_g

0xcd0d,	// (0x0003be3a) list_single_2heading_msg_pane_t1_ParamLimits

0xcd0d,	// (0x0003be3a) list_single_2heading_msg_pane_t1

0xcd35,	// (0x0003be62) list_single_2heading_msg_pane_t2_ParamLimits

0xcd35,	// (0x0003be62) list_single_2heading_msg_pane_t2

0xcda0,	// (0x0003becd) list_single_2heading_msg_pane_t3_ParamLimits

0xcda0,	// (0x0003becd) list_single_2heading_msg_pane_t3

0x398c,	// (0x00032ab9) list_single_2heading_msg_pane_t4_ParamLimits

0x398c,	// (0x00032ab9) list_single_2heading_msg_pane_t4

0x0003,

0xfc82,	// (0x0003edaf) list_single_2heading_msg_pane_t_ParamLimits

0xfc82,	// (0x0003edaf) list_single_2heading_msg_pane_t

0x3d18,	// (0x00032e45) title_pane_g4_ParamLimits

0x3d18,	// (0x00032e45) title_pane_g4

0x479e,	// (0x000338cb) title_pane_stacon_g3_ParamLimits

0x479e,	// (0x000338cb) title_pane_stacon_g3

0x98c2,	// (0x000389ef) list_single_2graphic_im_pane_g4_ParamLimits

0x98c2,	// (0x000389ef) list_single_2graphic_im_pane_g4

0x812d,	// (0x0003725a) popup_side_volume_key_window_cp

0x857a,	// (0x000376a7) main_idle_act2_pane_t1

0x5408,	// (0x00034535) toolbar_button_pane_g10

0x0471,	// (0x0002f59e) popup_toolbar_window_cp1

0x8c0f,	// (0x00037d3c) clock_nsta_pane_cp_t1

0x8c0f,	// (0x00037d3c) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0003ebbd) clock_nsta_pane_cp_t

0x4b7a,	// (0x00033ca7) navi_navi_volume_pane_cp2_ParamLimits

0x4b86,	// (0x00033cb3) popup_side_volume_key_window_g1_ParamLimits

0x4b92,	// (0x00033cbf) popup_side_volume_key_window_g2_ParamLimits

0x4b9e,	// (0x00033ccb) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0003e81e) popup_side_volume_key_window_g_ParamLimits

0x5937,	// (0x00034a64) fep_hwr_aid_pane

0xf501,	// (0x0003e62e) bg_fep_hwr_top_pane_g4_ParamLimits

0x900a,	// (0x00038137) fep_hwr_top_pane_g1_ParamLimits

0x901c,	// (0x00038149) fep_hwr_top_pane_g2_ParamLimits

0x59ea,	// (0x00034b17) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0003ec12) fep_hwr_top_pane_g_ParamLimits

0x59ff,	// (0x00034b2c) fep_hwr_top_text_pane_ParamLimits

0x7ef8,	// (0x00037025) aid_touch_tab_arrow_arrow_2

0x7f01,	// (0x0003702e) aid_touch_tab_arrow_left_2

0x594b,	// (0x00034a78) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x597e,	// (0x00034aab) fep_hwr_prediction_pane

0x914f,	// (0x0003827c) fep_vkb_prediction_pane

0x170c,	// (0x00030839) fep_vkb_side_pane_g3_ParamLimits

0x170c,	// (0x00030839) fep_vkb_side_pane_g3

0x91dd,	// (0x0003830a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x9588,	// (0x000386b5) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x9595,	// (0x000386c2) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0003ecbc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xaa81,	// (0x00039bae) fep_hwr_prediction_pane_g1

0x5d02,	// (0x00034e2f) fep_hwr_prediction_pane_g2

0x5d0a,	// (0x00034e37) fep_hwr_prediction_pane_g3

0x5d12,	// (0x00034e3f) fep_hwr_prediction_pane_g4

0x0003,

0xfc8b,	// (0x0003edb8) fep_hwr_prediction_pane_g

0xaa81,	// (0x00039bae) fep_vkb_prediction_pane_g1

0xaa8b,	// (0x00039bb8) fep_vkb_prediction_pane_g2

0xaa93,	// (0x00039bc0) fep_vkb_prediction_pane_g3

0xaa9b,	// (0x00039bc8) fep_vkb_prediction_pane_g4

0x0003,

0xfc94,	// (0x0003edc1) fep_vkb_prediction_pane_g

0x56b6,	// (0x000347e3) slider_set_pane_g3

0x56ca,	// (0x000347f7) slider_set_pane_g4

0x56e2,	// (0x0003480f) slider_set_pane_g5

0x56b6,	// (0x000347e3) slider_set_pane_g6

0xd8fc,	// (0x0003ca29) slider_set_pane_g7

0x838e,	// (0x000374bb) slider_form_pane_g3

0x8397,	// (0x000374c4) slider_form_pane_g4

0x839f,	// (0x000374cc) slider_form_pane_g5

0x838e,	// (0x000374bb) slider_form_pane_g6

0x141f,	// (0x0003054c) slider_form_pane_g7

0x87cb,	// (0x000378f8) slider_set_pane_vc_g3

0x87d4,	// (0x00037901) slider_set_pane_vc_g4

0x87dd,	// (0x0003790a) slider_set_pane_vc_g5

0x87cb,	// (0x000378f8) slider_set_pane_vc_g6

0x87e6,	// (0x00037913) slider_set_pane_vc_g7

0x87cb,	// (0x000378f8) slider_form_pane_vc_g1

0x87d4,	// (0x00037901) slider_form_pane_vc_g2

0x87dd,	// (0x0003790a) slider_form_pane_vc_g3

0x87cb,	// (0x000378f8) slider_form_pane_vc_g4

0x895a,	// (0x00037a87) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0003eb8f) slider_form_pane_vc_g

0x39ff,	// (0x00032b2c) main_idle_act3_pane

0xaaa3,	// (0x00039bd0) ai3_links_pane

0x1981,	// (0x00030aae) popup_ai3_data_window_ParamLimits

0x1981,	// (0x00030aae) popup_ai3_data_window

0x39ff,	// (0x00032b2c) grid_ai3_links_pane

0x1999,	// (0x00030ac6) cell_ai3_links_pane_ParamLimits

0x1999,	// (0x00030ac6) cell_ai3_links_pane

0xaaac,	// (0x00039bd9) bg_popup_sub_pane_cp11

0xaab9,	// (0x00039be6) cell_ai3_links_pane_g1

0x39ff,	// (0x00032b2c) bg_popup_sub_pane_cp12

0xaade,	// (0x00039c0b) heading_ai3_data_pane

0xaae6,	// (0x00039c13) list_ai3_gene_pane

0xaaf2,	// (0x00039c1f) popup_ai3_data_window_g1

0xaafa,	// (0x00039c27) heading_ai3_data_pane_g1

0xab02,	// (0x00039c2f) heading_ai3_data_pane_t1

0xab10,	// (0x00039c3d) list_double_ai3_gene_pane_ParamLimits

0xab10,	// (0x00039c3d) list_double_ai3_gene_pane

0xab1d,	// (0x00039c4a) list_single_ai3_gene_pane_ParamLimits

0xab1d,	// (0x00039c4a) list_single_ai3_gene_pane

0x8f76,	// (0x000380a3) list_highlight_pane_cp7_ParamLimits

0x8f76,	// (0x000380a3) list_highlight_pane_cp7

0xab2a,	// (0x00039c57) list_single_a13_gene_pane_t1_ParamLimits

0xab2a,	// (0x00039c57) list_single_a13_gene_pane_t1

0xab41,	// (0x00039c6e) list_single_ai3_gene_pane_g1

0xab4a,	// (0x00039c77) list_single_ai3_gene_pane_g2

0x0001,

0xfc9d,	// (0x0003edca) list_single_ai3_gene_pane_g

0xab52,	// (0x00039c7f) list_double_ai3_gene_pane_g1_ParamLimits

0xab52,	// (0x00039c7f) list_double_ai3_gene_pane_g1

0xab5e,	// (0x00039c8b) list_double_ai3_gene_pane_t1_ParamLimits

0xab5e,	// (0x00039c8b) list_double_ai3_gene_pane_t1

0xab7a,	// (0x00039ca7) list_double_ai3_gene_pane_t2_ParamLimits

0xab7a,	// (0x00039ca7) list_double_ai3_gene_pane_t2

0xab8f,	// (0x00039cbc) list_double_ai3_gene_pane_t3_ParamLimits

0xab8f,	// (0x00039cbc) list_double_ai3_gene_pane_t3

0x0002,

0xfca2,	// (0x0003edcf) list_double_ai3_gene_pane_t_ParamLimits

0xfca2,	// (0x0003edcf) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x38c4,	// (0x000329f1) aid_size_min_col_2

0x196d,	// (0x00030a9a) aid_size_min_msg_ParamLimits

0x196d,	// (0x00030a9a) aid_size_min_msg

0x1720,	// (0x0003084d) fep_vkb_top_text_pane_g2_ParamLimits

0x1720,	// (0x0003084d) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0003ec42) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0003ec42) fep_vkb_top_text_pane_g

0x39ff,	// (0x00032b2c) main_hc_apps_shell_pane

0xabac,	// (0x00039cd9) grid_hc_apps_pane_ParamLimits

0xabac,	// (0x00039cd9) grid_hc_apps_pane

0xabbe,	// (0x00039ceb) list_hc_apps_pane

0xabc6,	// (0x00039cf3) scroll_pane_cp37_ParamLimits

0xabc6,	// (0x00039cf3) scroll_pane_cp37

0x19af,	// (0x00030adc) cell_hc_apps_pane_ParamLimits

0x19af,	// (0x00030adc) cell_hc_apps_pane

0x1a49,	// (0x00030b76) cell_hc_apps_pane_g1_ParamLimits

0x1a49,	// (0x00030b76) cell_hc_apps_pane_g1

0xabd2,	// (0x00039cff) cell_hc_apps_pane_g2_ParamLimits

0xabd2,	// (0x00039cff) cell_hc_apps_pane_g2

0xabee,	// (0x00039d1b) cell_hc_apps_pane_g3_ParamLimits

0xabee,	// (0x00039d1b) cell_hc_apps_pane_g3

0x0002,

0xfca9,	// (0x0003edd6) cell_hc_apps_pane_g_ParamLimits

0xfca9,	// (0x0003edd6) cell_hc_apps_pane_g

0x1a75,	// (0x00030ba2) cell_hc_apps_pane_t1_ParamLimits

0x1a75,	// (0x00030ba2) cell_hc_apps_pane_t1

0x3f2f,	// (0x0003305c) grid_highlight_pane_cp10_ParamLimits

0x3f2f,	// (0x0003305c) grid_highlight_pane_cp10

0x1ab3,	// (0x00030be0) list_single_hc_apps_pane_ParamLimits

0x1ab3,	// (0x00030be0) list_single_hc_apps_pane

0x1adf,	// (0x00030c0c) list_single_hc_apps_pane_g1

0xd9db,	// (0x0003cb08) list_single_hc_apps_pane_g2

0x0001,

0xfcb0,	// (0x0003eddd) list_single_hc_apps_pane_g

0xd9f4,	// (0x0003cb21) list_single_hc_apps_pane_g2_copy1

0xce0e,	// (0x0003bf3b) list_single_hc_apps_pane_t1

0x3d5c,	// (0x00032e89) bg_set_opt_pane_cp_ParamLimits

0x3d7a,	// (0x00032ea7) setting_slider_pane_t1_ParamLimits

0xcf92,	// (0x0003c0bf) setting_slider_pane_t2_ParamLimits

0xcfab,	// (0x0003c0d8) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0003e666) setting_slider_pane_t_ParamLimits

0x3dc0,	// (0x00032eed) slider_set_pane_ParamLimits

0x4e16,	// (0x00033f43) control_pane_g5_ParamLimits

0x4e16,	// (0x00033f43) control_pane_g5

0x834a,	// (0x00037477) slider_set_pane_g1_ParamLimits

0x56aa,	// (0x000347d7) slider_set_pane_g2_ParamLimits

0x56b6,	// (0x000347e3) slider_set_pane_g3_ParamLimits

0x56ca,	// (0x000347f7) slider_set_pane_g4_ParamLimits

0x56e2,	// (0x0003480f) slider_set_pane_g5_ParamLimits

0x56b6,	// (0x000347e3) slider_set_pane_g6_ParamLimits

0xd8fc,	// (0x0003ca29) slider_set_pane_g7_ParamLimits

0xf938,	// (0x0003ea65) slider_set_pane_g_ParamLimits

0x3d5c,	// (0x00032e89) navi_icon_text_pane_ParamLimits

0x0d75,	// (0x0002fea2) aid_fill_nsta_2_ParamLimits

0x0da3,	// (0x0002fed0) aid_touch_tab_arrow_left_ParamLimits

0x0db7,	// (0x0002fee4) aid_touch_tab_arrow_right_ParamLimits

0x0e53,	// (0x0002ff80) clock_nsta_pane_ParamLimits

0x7eda,	// (0x00037007) navi_icon_pane_g1_ParamLimits

0x7ee6,	// (0x00037013) navi_text_pane_t1_ParamLimits

0x8c5f,	// (0x00037d8c) navi_icon_text_pane_g1_ParamLimits

0x8c6b,	// (0x00037d98) navi_icon_text_pane_t1_ParamLimits

0x1adf,	// (0x00030c0c) list_single_hc_apps_pane_g1_ParamLimits

0xd9db,	// (0x0003cb08) list_single_hc_apps_pane_g2_ParamLimits

0xfcb0,	// (0x0003eddd) list_single_hc_apps_pane_g_ParamLimits

0xd9f4,	// (0x0003cb21) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xce0e,	// (0x0003bf3b) list_single_hc_apps_pane_t1_ParamLimits

0xced8,	// (0x0003c005) popup_toolbar2_fixed_window_ParamLimits

0xced8,	// (0x0003c005) popup_toolbar2_fixed_window

0xd6eb,	// (0x0003c818) popup_toolbar2_float_window

0x39ff,	// (0x00032b2c) bg_popup_sub_pane_cp27

0xac10,	// (0x00039d3d) grid_toolbar2_float_pane

0x39ff,	// (0x00032b2c) bg_popup_sub_pane_cp26

0xac10,	// (0x00039d3d) grid_toolbar2_fixed_pane

0x1af8,	// (0x00030c25) cell_toolbar2_fixed_pane_ParamLimits

0x1af8,	// (0x00030c25) cell_toolbar2_fixed_pane

0x1b13,	// (0x00030c40) cell_toolbar2_fixed_pane_g1

0xac18,	// (0x00039d45) toolbar2_fixed_button_pane

0x7229,	// (0x00036356) toolbar2_fixed_button_pane_g1

0x7231,	// (0x0003635e) toolbar2_fixed_button_pane_g2

0x7239,	// (0x00036366) toolbar2_fixed_button_pane_g3

0x7241,	// (0x0003636e) toolbar2_fixed_button_pane_g4

0x7249,	// (0x00036376) toolbar2_fixed_button_pane_g5

0x7251,	// (0x0003637e) toolbar2_fixed_button_pane_g6

0x7259,	// (0x00036386) toolbar2_fixed_button_pane_g7

0x7261,	// (0x0003638e) toolbar2_fixed_button_pane_g8

0x7269,	// (0x00036396) toolbar2_fixed_button_pane_g9

0x0008,

0xf83a,	// (0x0003e967) toolbar2_fixed_button_pane_g

0xac20,	// (0x00039d4d) cell_toolbar2_float_pane_ParamLimits

0xac20,	// (0x00039d4d) cell_toolbar2_float_pane

0xac31,	// (0x00039d5e) cell_toolbar2_float_pane_g1

0xac18,	// (0x00039d45) toolbar2_fixed_button_pane_cp

0x16d5,	// (0x00030802) fep_vkb_accented_list_pane_ParamLimits

0x16d5,	// (0x00030802) fep_vkb_accented_list_pane

0x5b41,	// (0x00034c6e) bg_popup_fep_shadow_pane_g9

0x6e9d,	// (0x00035fca) bg_popup_fep_shadow_pane_cp3

0x459b,	// (0x000336c8) list_accented_list_pane

0xac3a,	// (0x00039d67) list_single_accented_list_pane_ParamLimits

0xac3a,	// (0x00039d67) list_single_accented_list_pane

0x6e9d,	// (0x00035fca) list_highlight_pane_cp10

0xac4b,	// (0x00039d78) list_single_accented_list_pane_t1

0xd62d,	// (0x0003c75a) popup_slider_window_ParamLimits

0xd62d,	// (0x0003c75a) popup_slider_window

0xaa78,	// (0x00039ba5) aid_indentation_list_msg

0x1bf2,	// (0x00030d1f) bg_popup_window_pane_cp19

0xacb1,	// (0x00039dde) popup_slider_window_g1

0xaccd,	// (0x00039dfa) popup_slider_window_g2

0xace9,	// (0x00039e16) popup_slider_window_g3

0x0005,

0xfcb5,	// (0x0003ede2) popup_slider_window_g

0xad05,	// (0x00039e32) popup_slider_window_t1

0xad49,	// (0x00039e76) small_volume_slider_vertical_pane

0x8fb1,	// (0x000380de) small_volume_slider_vertical_pane_g1

0x8fb1,	// (0x000380de) small_volume_slider_vertical_pane_g2

0xad65,	// (0x00039e92) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc7,	// (0x0003edf4) small_volume_slider_vertical_pane_g

0xce5c,	// (0x0003bf89) area_side_right_pane_ParamLimits

0xce5c,	// (0x0003bf89) area_side_right_pane

0xda10,	// (0x0003cb3d) aid_size_side_button_ParamLimits

0xda10,	// (0x0003cb3d) aid_size_side_button

0xda29,	// (0x0003cb56) grid_sctrl_middle_pane_ParamLimits

0xda29,	// (0x0003cb56) grid_sctrl_middle_pane

0x5d7f,	// (0x00034eac) sctrl_sk_bottom_pane

0x5d90,	// (0x00034ebd) sctrl_sk_top_pane

0x5da2,	// (0x00034ecf) aid_touch_sctrl_top

0x3f2f,	// (0x0003305c) bg_sctrl_sk_pane_ParamLimits

0x3f2f,	// (0x0003305c) bg_sctrl_sk_pane

0x5daf,	// (0x00034edc) sctrl_sk_top_pane_g1

0x5dbc,	// (0x00034ee9) sctrl_sk_top_pane_t1

0x5da2,	// (0x00034ecf) aid_touch_sctrl_bottom

0x3f2f,	// (0x0003305c) bg_sctrl_sk_pane_cp_ParamLimits

0x3f2f,	// (0x0003305c) bg_sctrl_sk_pane_cp

0x5dd7,	// (0x00034f04) sctrl_sk_bottom_pane_g1

0x5dbc,	// (0x00034ee9) sctrl_sk_bottom_pane_t1

0xda3f,	// (0x0003cb6c) cell_sctrl_middle_pane_ParamLimits

0xda3f,	// (0x0003cb6c) cell_sctrl_middle_pane

0xda50,	// (0x0003cb7d) aid_touch_sctrl_middle_ParamLimits

0xda50,	// (0x0003cb7d) aid_touch_sctrl_middle

0xda5d,	// (0x0003cb8a) bg_sctrl_middle_pane_ParamLimits

0xda5d,	// (0x0003cb8a) bg_sctrl_middle_pane

0xad80,	// (0x00039ead) cell_sctrl_middle_pane_g1_ParamLimits

0xad80,	// (0x00039ead) cell_sctrl_middle_pane_g1

0xda6b,	// (0x0003cb98) cell_sctrl_middle_pane_g2_ParamLimits

0xda6b,	// (0x0003cb98) cell_sctrl_middle_pane_g2

0x0001,

0xfcd3,	// (0x0003ee00) cell_sctrl_middle_pane_g_ParamLimits

0xfcd3,	// (0x0003ee00) cell_sctrl_middle_pane_g

0x7229,	// (0x00036356) bg_sctrl_middle_pane_g1

0x7231,	// (0x0003635e) bg_sctrl_middle_pane_g2

0x7239,	// (0x00036366) bg_sctrl_middle_pane_g3

0x7241,	// (0x0003636e) bg_sctrl_middle_pane_g4

0x7249,	// (0x00036376) bg_sctrl_middle_pane_g5

0x7251,	// (0x0003637e) bg_sctrl_middle_pane_g6

0x7259,	// (0x00036386) bg_sctrl_middle_pane_g7

0x7261,	// (0x0003638e) bg_sctrl_middle_pane_g8

0x0007,

0xfcd8,	// (0x0003ee05) bg_sctrl_middle_pane_g

0x7269,	// (0x00036396) bg_sctrl_middle_pane_g8_copy1

0x7229,	// (0x00036356) bg_sctrl_sk_pane_g1

0x7231,	// (0x0003635e) bg_sctrl_sk_pane_g2

0x7239,	// (0x00036366) bg_sctrl_sk_pane_g3

0x0008,

0xf83a,	// (0x0003e967) bg_sctrl_sk_pane_g

0x42e4,	// (0x00033411) aid_size_touch_scroll_bar

0x7241,	// (0x0003636e) bg_sctrl_sk_pane_g4

0x7249,	// (0x00036376) bg_sctrl_sk_pane_g5

0x7251,	// (0x0003637e) bg_sctrl_sk_pane_g6

0x7259,	// (0x00036386) bg_sctrl_sk_pane_g7

0x7261,	// (0x0003638e) bg_sctrl_sk_pane_g8

0x7269,	// (0x00036396) bg_sctrl_sk_pane_g9

0x4fd1,	// (0x000340fe) popup_fep_china_hwr2_fs_candidate_window

0xd228,	// (0x0003c355) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xd228,	// (0x0003c355) popup_fep_china_hwr2_fs_control_window

0x91dd,	// (0x0003830a) sctrl_sk_top_pane_g2

0x0001,

0xfcce,	// (0x0003edfb) sctrl_sk_top_pane_g

0x1caa,	// (0x00030dd7) aid_fep_china_hwr2_fs_cell_ParamLimits

0x1caa,	// (0x00030dd7) aid_fep_china_hwr2_fs_cell

0x1cbe,	// (0x00030deb) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x1cbe,	// (0x00030deb) bg_popup_fep_shadow_pane_cp4

0x1cd5,	// (0x00030e02) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x1cd5,	// (0x00030e02) bg_popup_fep_shadow_pane_cp5

0x1ce7,	// (0x00030e14) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x1ce7,	// (0x00030e14) popup_fep_china_hwr2_fs_control_bar_grid

0x1cfb,	// (0x00030e28) popup_fep_china_hwr2_fs_control_funtion_grid

0xad6e,	// (0x00039e9b) aid_fep_china_hwr2_fs_candi_cell

0x39ff,	// (0x00032b2c) bg_popup_fep_shadow_pane_cp6

0xad78,	// (0x00039ea5) popup_fep_china_hwr2_fs_candidate_grid

0x1d03,	// (0x00030e30) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x1d03,	// (0x00030e30) cell_fep_china_hwr2_fs_funtion_grid

0x8fb1,	// (0x000380de) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xad80,	// (0x00039ead) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xad80,	// (0x00039ead) cell_fep_china_hwr2_fs_funtion_grid_g1

0xad8e,	// (0x00039ebb) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xad8e,	// (0x00039ebb) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce9,	// (0x0003ee16) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce9,	// (0x0003ee16) cell_fep_china_hwr2_fs_funtion_grid_g

0x1d1b,	// (0x00030e48) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x1d1b,	// (0x00030e48) cell_fep_china_hwr2_fs_funtion_grid_t1

0x1d30,	// (0x00030e5d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x1d30,	// (0x00030e5d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcee,	// (0x0003ee1b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcee,	// (0x0003ee1b) cell_fep_china_hwr2_fs_funtion_grid_t

0xada4,	// (0x00039ed1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xadac,	// (0x00039ed9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xadb4,	// (0x00039ee1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf3,	// (0x0003ee20) popup_fep_china_hwr2_fs_control_bar_grid_g

0xadbc,	// (0x00039ee9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xadbc,	// (0x00039ee9) cell_fep_china_hwr2_fs_candidate_grid

0xadd5,	// (0x00039f02) popup_fep_china_hwr2_fs_candidate_grid_g20

0xaddd,	// (0x00039f0a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x8fb1,	// (0x000380de) cell_fep_china_hwr2_fs_candidate_grid_g1

0x8fb1,	// (0x000380de) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0003ec47) cell_fep_china_hwr2_fs_candidate_grid_g

0xade5,	// (0x00039f12) cell_fep_china_hwr2_fs_candidate_grid_t1

0x708e,	// (0x000361bb) clock_nsta_pane_cp_24_ParamLimits

0x708e,	// (0x000361bb) clock_nsta_pane_cp_24

0x70eb,	// (0x00036218) indicator_nsta_pane_cp_24_ParamLimits

0x70eb,	// (0x00036218) indicator_nsta_pane_cp_24

0x7de5,	// (0x00036f12) heading_pane_g1

0x0001,

0xf89f,	// (0x0003e9cc) heading_pane_g

0x14db,	// (0x00030608) grid_sct_catagory_button_pane

0x844c,	// (0x00037579) scroll_pane_cp5_ParamLimits

0x8c91,	// (0x00037dbe) button_value_adjust_pane_cp5_ParamLimits

0x8c91,	// (0x00037dbe) button_value_adjust_pane_cp5

0x8d4f,	// (0x00037e7c) form2_midp_time_pane_ParamLimits

0xadf3,	// (0x00039f20) cell_sct_catagory_button_pane_ParamLimits

0xadf3,	// (0x00039f20) cell_sct_catagory_button_pane

0x8f76,	// (0x000380a3) bg_button_pane_cp01_ParamLimits

0x8f76,	// (0x000380a3) bg_button_pane_cp01

0x8fb1,	// (0x000380de) cell_sct_catagory_button_pane_g1

0xd69c,	// (0x0003c7c9) popup_tb_extension_window

0x1d4c,	// (0x00030e79) aid_size_cell_ext_ParamLimits

0x1d4c,	// (0x00030e79) aid_size_cell_ext

0x41c2,	// (0x000332ef) bg_tb_trans_pane_cp1_ParamLimits

0x41c2,	// (0x000332ef) bg_tb_trans_pane_cp1

0x1d72,	// (0x00030e9f) grid_tb_ext_pane_ParamLimits

0x1d72,	// (0x00030e9f) grid_tb_ext_pane

0x1da8,	// (0x00030ed5) cell_tb_ext_pane_ParamLimits

0x1da8,	// (0x00030ed5) cell_tb_ext_pane

0x1dcc,	// (0x00030ef9) cell_tb_ext_pane_g1_ParamLimits

0x1dcc,	// (0x00030ef9) cell_tb_ext_pane_g1

0xae05,	// (0x00039f32) cell_tb_ext_pane_t1

0x3f2f,	// (0x0003305c) list_highlight_pane_cp11_ParamLimits

0x3f2f,	// (0x0003305c) list_highlight_pane_cp11

0xceed,	// (0x0003c01a) popup_uni_indicator_window_ParamLimits

0xceed,	// (0x0003c01a) popup_uni_indicator_window

0x445e,	// (0x0003358b) bg_popup_sub_pane_cp14

0xae20,	// (0x00039f4d) list_uniindi_pane

0xae2c,	// (0x00039f59) uniindi_top_pane

0x3f2f,	// (0x0003305c) bg_uniindi_top_pane

0xae4b,	// (0x00039f78) uniindi_top_pane_g1

0xae61,	// (0x00039f8e) uniindi_top_pane_g2

0x0003,

0xfcfa,	// (0x0003ee27) uniindi_top_pane_g

0xae8b,	// (0x00039fb8) uniindi_top_pane_t1

0xaeb5,	// (0x00039fe2) list_single_uniindi_pane_ParamLimits

0xaeb5,	// (0x00039fe2) list_single_uniindi_pane

0x8fb1,	// (0x000380de) bg_uniindi_top_pane_g1

0xaec7,	// (0x00039ff4) list_single_uniindi_pane_g1

0xaeda,	// (0x0003a007) list_single_uniindi_pane_t1

0x39ff,	// (0x00032b2c) control_bg_pane

0xaeff,	// (0x0003a02c) bg_sctrl_sk_pane_cp1

0xaf08,	// (0x0003a035) bg_sctrl_sk_pane_cp2

0xaf11,	// (0x0003a03e) control_bg_pane_g1

0xaf1a,	// (0x0003a047) control_bg_pane_g2

0x0001,

0xfd03,	// (0x0003ee30) control_bg_pane_g

0x8bb7,	// (0x00037ce4) cell_indicator_nsta_pane_g1_ParamLimits

0x15ec,	// (0x00030719) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0003ebab) cell_indicator_nsta_pane_g_ParamLimits

0x373b,	// (0x00032868) form2_midp_time_pane_t1_ParamLimits

0x5929,	// (0x00034a56) main_idle_act4_pane_ParamLimits

0x5929,	// (0x00034a56) main_idle_act4_pane

0xd69c,	// (0x0003c7c9) popup_tb_extension_window_ParamLimits

0x1d92,	// (0x00030ebf) tb_ext_find_pane_ParamLimits

0x1d92,	// (0x00030ebf) tb_ext_find_pane

0xaf23,	// (0x0003a050) ai_gene_pane_1_cp1

0x6f31,	// (0x0003605e) ai_gene_pane_2_cp1

0xaf2b,	// (0x0003a058) list_single_idle_plugin_calendar_pane

0xaf34,	// (0x0003a061) list_single_idle_plugin_notification_pane

0xaf3d,	// (0x0003a06a) list_single_idle_plugin_player_pane

0x1de9,	// (0x00030f16) list_single_idle_plugin_shortcut_pane_ParamLimits

0x1de9,	// (0x00030f16) list_single_idle_plugin_shortcut_pane

0x1e11,	// (0x00030f3e) main_idle_act4_pane_t1

0x1e27,	// (0x00030f54) main_idle_act4_pane_t2

0x0001,

0xfd08,	// (0x0003ee35) main_idle_act4_pane_t

0x1e3d,	// (0x00030f6a) middle_sk_idle_act4_pane_ParamLimits

0x1e3d,	// (0x00030f6a) middle_sk_idle_act4_pane

0x1e59,	// (0x00030f86) popup_clock_digital_analogue_window_cp2

0x1e7f,	// (0x00030fac) shortcut_wheel_idle_act4_pane_ParamLimits

0x1e7f,	// (0x00030fac) shortcut_wheel_idle_act4_pane

0x8fb1,	// (0x000380de) shortcut_wheel_idle_act4_pane_g1

0x8fb1,	// (0x000380de) shortcut_wheel_idle_act4_pane_g2

0x8fb1,	// (0x000380de) shortcut_wheel_idle_act4_pane_g3

0x8fb1,	// (0x000380de) shortcut_wheel_idle_act4_pane_g4

0x8fb1,	// (0x000380de) shortcut_wheel_idle_act4_pane_g5

0xaf46,	// (0x0003a073) shortcut_wheel_idle_act4_pane_g6

0xaf4e,	// (0x0003a07b) shortcut_wheel_idle_act4_pane_g7

0xaf56,	// (0x0003a083) shortcut_wheel_idle_act4_pane_g8

0xaf5e,	// (0x0003a08b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0d,	// (0x0003ee3a) shortcut_wheel_idle_act4_pane_g

0xf501,	// (0x0003e62e) middle_sk_idle_act4_pane_g1_ParamLimits

0xf501,	// (0x0003e62e) middle_sk_idle_act4_pane_g1

0x1efa,	// (0x00031027) middle_sk_idle_act4_pane_g2_ParamLimits

0x1efa,	// (0x00031027) middle_sk_idle_act4_pane_g2

0x0001,

0xfd30,	// (0x0003ee5d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd30,	// (0x0003ee5d) middle_sk_idle_act4_pane_g

0x1f12,	// (0x0003103f) middle_sk_idle_act4_pane_t1_ParamLimits

0x1f12,	// (0x0003103f) middle_sk_idle_act4_pane_t1

0x1f41,	// (0x0003106e) grid_ai_shortcut_pane_ParamLimits

0x1f41,	// (0x0003106e) grid_ai_shortcut_pane

0x1f5e,	// (0x0003108b) list_highlight_pane_cp16_ParamLimits

0x1f5e,	// (0x0003108b) list_highlight_pane_cp16

0x1f6b,	// (0x00031098) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x1f6b,	// (0x00031098) list_single_idle_plugin_shortcut_pane_g1

0x1f77,	// (0x000310a4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x1f77,	// (0x000310a4) list_single_idle_plugin_shortcut_pane_g2

0x1f93,	// (0x000310c0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x1f93,	// (0x000310c0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd35,	// (0x0003ee62) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd35,	// (0x0003ee62) list_single_idle_plugin_shortcut_pane_g

0x1fa8,	// (0x000310d5) cell_ai_shortcut_pane_ParamLimits

0x1fa8,	// (0x000310d5) cell_ai_shortcut_pane

0x1fbe,	// (0x000310eb) cell_ai_shortcut_pane_g1_ParamLimits

0x1fbe,	// (0x000310eb) cell_ai_shortcut_pane_g1

0xaf23,	// (0x0003a050) ai_gene_pane_1_cp2

0xb9d1,	// (0x0003aafe) ai_gene_pane_2_cp2

0xb9d9,	// (0x0003ab06) list_highlight_pane_cp15

0xb9e2,	// (0x0003ab0f) list_single_idle_plugin_calendar_pane_g1

0xb9d9,	// (0x0003ab06) list_highlight_pane_cp17

0xb9ea,	// (0x0003ab17) list_single_idle_plugin_calendar_pane_g1_copy1

0xb9f2,	// (0x0003ab1f) list_single_idle_plugin_player_pane_g1

0x8606,	// (0x00037733) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3c,	// (0x0003ee69) list_single_idle_plugin_player_pane_g

0xb9fa,	// (0x0003ab27) list_single_idle_plugin_player_pane_t1

0xba08,	// (0x0003ab35) list_single_idle_plugin_player_pane_t2

0xba16,	// (0x0003ab43) list_single_idle_plugin_player_pane_t3

0xba24,	// (0x0003ab51) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd41,	// (0x0003ee6e) list_single_idle_plugin_player_pane_t

0xba32,	// (0x0003ab5f) wait_bar_pane_cp15

0xba3a,	// (0x0003ab67) grid_ai_notification_pane

0x8606,	// (0x00037733) list_single_idle_plugin_notification_pane_g1

0x1fe0,	// (0x0003110d) cell_ai_notification_pane_ParamLimits

0x1fe0,	// (0x0003110d) cell_ai_notification_pane

0xba50,	// (0x0003ab7d) cell_ai_notification_pane_g1

0xba58,	// (0x0003ab85) cell_ai_notification_pane_t1

0x1fed,	// (0x0003111a) tb_ext_find_button_pane

0x1ff5,	// (0x00031122) tb_ext_find_pane_g1

0x1ffd,	// (0x0003112a) tb_ext_find_pane_t1

0x4ad1,	// (0x00033bfe) tb_ext_find_button_pane_g1

0xba84,	// (0x0003abb1) tb_ext_find_button_pane_g2

0x0001,

0xfd4a,	// (0x0003ee77) tb_ext_find_button_pane_g

0x1e11,	// (0x00030f3e) main_idle_act4_pane_t1_ParamLimits

0x1e27,	// (0x00030f54) main_idle_act4_pane_t2_ParamLimits

0xfd08,	// (0x0003ee35) main_idle_act4_pane_t_ParamLimits

0x1e59,	// (0x00030f86) popup_clock_digital_analogue_window_cp2_ParamLimits

0x1e6f,	// (0x00030f9c) sat_plugin_idle_act4_pane_ParamLimits

0x1e6f,	// (0x00030f9c) sat_plugin_idle_act4_pane

0x200b,	// (0x00031138) sat_plugin_idle_act4_pane_t1_ParamLimits

0x200b,	// (0x00031138) sat_plugin_idle_act4_pane_t1

0x2023,	// (0x00031150) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2023,	// (0x00031150) sat_plugin_idle_act4_pane_t2

0x203b,	// (0x00031168) sat_plugin_idle_act4_pane_t3_ParamLimits

0x203b,	// (0x00031168) sat_plugin_idle_act4_pane_t3

0x2053,	// (0x00031180) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2053,	// (0x00031180) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4f,	// (0x0003ee7c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4f,	// (0x0003ee7c) sat_plugin_idle_act4_pane_t

0x3bd2,	// (0x00032cff) popup_battery_window_ParamLimits

0x3bd2,	// (0x00032cff) popup_battery_window

0x3f2f,	// (0x0003305c) bg_popup_sub_pane_cp25_ParamLimits

0x3f2f,	// (0x0003305c) bg_popup_sub_pane_cp25

0xbad9,	// (0x0003ac06) popup_battery_window_g1_ParamLimits

0xbad9,	// (0x0003ac06) popup_battery_window_g1

0xbae5,	// (0x0003ac12) popup_battery_window_t1_ParamLimits

0xbae5,	// (0x0003ac12) popup_battery_window_t1

0xbaf7,	// (0x0003ac24) popup_battery_window_t2_ParamLimits

0xbaf7,	// (0x0003ac24) popup_battery_window_t2

0x0001,

0xfd58,	// (0x0003ee85) popup_battery_window_t_ParamLimits

0xfd58,	// (0x0003ee85) popup_battery_window_t

0x09a8,	// (0x0002fad5) midp_canvas_pane_ParamLimits

0x0c58,	// (0x0002fd85) midp_keypad_pane_ParamLimits

0x0c58,	// (0x0002fd85) midp_keypad_pane

0x4f49,	// (0x00034076) main_midp_pane_ParamLimits

0x8c2d,	// (0x00037d5a) signal_pane_g2_cp_ParamLimits

0x206b,	// (0x00031198) aid_size_cell_midp_keypad_ParamLimits

0x206b,	// (0x00031198) aid_size_cell_midp_keypad

0x2089,	// (0x000311b6) midp_keyp_game_grid_pane_ParamLimits

0x2089,	// (0x000311b6) midp_keyp_game_grid_pane

0x20a8,	// (0x000311d5) midp_keyp_rocker_pane_ParamLimits

0x20a8,	// (0x000311d5) midp_keyp_rocker_pane

0x20e9,	// (0x00031216) midp_keyp_sk_left_pane_ParamLimits

0x20e9,	// (0x00031216) midp_keyp_sk_left_pane

0x213b,	// (0x00031268) midp_keyp_sk_right_pane_ParamLimits

0x213b,	// (0x00031268) midp_keyp_sk_right_pane

0x39ff,	// (0x00032b2c) bg_button_pane_cp03

0x2187,	// (0x000312b4) midp_keyp_sk_left_pane_g1

0x39ff,	// (0x00032b2c) bg_button_pane_cp04

0x2187,	// (0x000312b4) midp_keyp_sk_right_pane_g1

0x8fb1,	// (0x000380de) midp_keyp_rocker_pane_g1

0x2190,	// (0x000312bd) keyp_game_cell_pane_ParamLimits

0x2190,	// (0x000312bd) keyp_game_cell_pane

0x39ff,	// (0x00032b2c) bg_button_pane_cp02

0x21b2,	// (0x000312df) keyp_game_cell_pane_g1

0xce9e,	// (0x0003bfcb) popup_fep_vkb2_window_ParamLimits

0xce9e,	// (0x0003bfcb) popup_fep_vkb2_window

0xda78,	// (0x0003cba5) aid_size_cell_vkb2_ParamLimits

0xda78,	// (0x0003cba5) aid_size_cell_vkb2

0xdaae,	// (0x0003cbdb) popup_fep_vkb2_window_g1_ParamLimits

0xdaae,	// (0x0003cbdb) popup_fep_vkb2_window_g1

0xdafe,	// (0x0003cc2b) vkb2_area_bottom_pane_ParamLimits

0xdafe,	// (0x0003cc2b) vkb2_area_bottom_pane

0xdb3c,	// (0x0003cc69) vkb2_area_keypad_pane_ParamLimits

0xdb3c,	// (0x0003cc69) vkb2_area_keypad_pane

0xdb7a,	// (0x0003cca7) vkb2_area_top_pane_ParamLimits

0xdb7a,	// (0x0003cca7) vkb2_area_top_pane

0xdbf6,	// (0x0003cd23) vkb2_top_entry_pane_ParamLimits

0xdbf6,	// (0x0003cd23) vkb2_top_entry_pane

0xdc23,	// (0x0003cd50) vkb2_top_grid_left_pane_ParamLimits

0xdc23,	// (0x0003cd50) vkb2_top_grid_left_pane

0xdc43,	// (0x0003cd70) vkb2_top_grid_right_pane_ParamLimits

0xdc43,	// (0x0003cd70) vkb2_top_grid_right_pane

0x6012,	// (0x0003513f) vkb2_cell_keypad_pane_ParamLimits

0x6012,	// (0x0003513f) vkb2_cell_keypad_pane

0xdc89,	// (0x0003cdb6) vkb2_area_bottom_grid_pane_ParamLimits

0xdc89,	// (0x0003cdb6) vkb2_area_bottom_grid_pane

0xdcaf,	// (0x0003cddc) vkb2_area_bottom_pane_g1_ParamLimits

0xdcaf,	// (0x0003cddc) vkb2_area_bottom_pane_g1

0xdcd5,	// (0x0003ce02) vkb2_area_bottom_pane_g2_ParamLimits

0xdcd5,	// (0x0003ce02) vkb2_area_bottom_pane_g2

0xdd06,	// (0x0003ce33) vkb2_area_bottom_pane_g3_ParamLimits

0xdd06,	// (0x0003ce33) vkb2_area_bottom_pane_g3

0x0002,

0xfd5d,	// (0x0003ee8a) vkb2_area_bottom_pane_g_ParamLimits

0xfd5d,	// (0x0003ee8a) vkb2_area_bottom_pane_g

0x618a,	// (0x000352b7) vkb2_top_cell_left_pane_ParamLimits

0x618a,	// (0x000352b7) vkb2_top_cell_left_pane

0xdd5c,	// (0x0003ce89) vkb2_top_entry_pane_g1_ParamLimits

0xdd5c,	// (0x0003ce89) vkb2_top_entry_pane_g1

0xdd6a,	// (0x0003ce97) vkb2_top_entry_pane_t1_ParamLimits

0xdd6a,	// (0x0003ce97) vkb2_top_entry_pane_t1

0xbc8a,	// (0x0003adb7) vkb2_top_entry_pane_t2_ParamLimits

0xbc8a,	// (0x0003adb7) vkb2_top_entry_pane_t2

0xbcbc,	// (0x0003ade9) vkb2_top_entry_pane_t3_ParamLimits

0xbcbc,	// (0x0003ade9) vkb2_top_entry_pane_t3

0x0002,

0xfd64,	// (0x0003ee91) vkb2_top_entry_pane_t_ParamLimits

0xfd64,	// (0x0003ee91) vkb2_top_entry_pane_t

0xdda3,	// (0x0003ced0) vkb2_top_grid_right_pane_g1_ParamLimits

0xdda3,	// (0x0003ced0) vkb2_top_grid_right_pane_g1

0x61ed,	// (0x0003531a) vkb2_top_grid_right_pane_g2_ParamLimits

0x61ed,	// (0x0003531a) vkb2_top_grid_right_pane_g2

0x6205,	// (0x00035332) vkb2_top_grid_right_pane_g3_ParamLimits

0x6205,	// (0x00035332) vkb2_top_grid_right_pane_g3

0xddb9,	// (0x0003cee6) vkb2_top_grid_right_pane_g4_ParamLimits

0xddb9,	// (0x0003cee6) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6b,	// (0x0003ee98) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6b,	// (0x0003ee98) vkb2_top_grid_right_pane_g

0x6233,	// (0x00035360) vkb2_top_cell_left_pane_g1

0x624a,	// (0x00035377) vkb2_cell_keypad_pane_g1_ParamLimits

0x624a,	// (0x00035377) vkb2_cell_keypad_pane_g1

0xddcf,	// (0x0003cefc) vkb2_cell_keypad_pane_t1_ParamLimits

0xddcf,	// (0x0003cefc) vkb2_cell_keypad_pane_t1

0x6258,	// (0x00035385) vkb2_cell_bottom_grid_pane_ParamLimits

0x6258,	// (0x00035385) vkb2_cell_bottom_grid_pane

0x6291,	// (0x000353be) vkb2_cell_bottom_grid_pane_g1

0x1e9e,	// (0x00030fcb) aid_call2_pane_cp02

0x1ea6,	// (0x00030fd3) aid_call_pane_cp02

0x1eae,	// (0x00030fdb) clock_digital_number_pane_cp10

0x1eb6,	// (0x00030fe3) clock_digital_number_pane_cp11

0x1ebe,	// (0x00030feb) clock_digital_number_pane_cp12

0x1ec6,	// (0x00030ff3) clock_digital_number_pane_cp13

0x1ece,	// (0x00030ffb) clock_digital_separator_pane_cp10

0x4ad1,	// (0x00033bfe) popup_clock_digital_analogue_window_cp2_g1

0x4ad1,	// (0x00033bfe) popup_clock_digital_analogue_window_cp2_g2

0x1ed6,	// (0x00031003) popup_clock_digital_analogue_window_cp2_g3

0x4ad1,	// (0x00033bfe) popup_clock_digital_analogue_window_cp2_g4

0x1ed6,	// (0x00031003) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd20,	// (0x0003ee4d) popup_clock_digital_analogue_window_cp2_g

0x1ede,	// (0x0003100b) popup_clock_digital_analogue_window_cp2_t1

0x1eec,	// (0x00031019) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2b,	// (0x0003ee58) popup_clock_digital_analogue_window_cp2_t

0x8fb1,	// (0x000380de) clock_digital_number_pane_cp10_g1

0x8fb1,	// (0x000380de) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003ec47) clock_digital_number_pane_cp10_g

0x8fb1,	// (0x000380de) clock_digital_separator_pane_cp10_g1

0x8fb1,	// (0x000380de) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003ec47) clock_digital_separator_pane_cp10_g

0xae6d,	// (0x00039f9a) uniindi_top_pane_g3

0xae7e,	// (0x00039fab) uniindi_top_pane_g4

0x607d,	// (0x000351aa) vkb2_row_keypad_pane_ParamLimits

0x607d,	// (0x000351aa) vkb2_row_keypad_pane

0x62ad,	// (0x000353da) vkb2_cell_t_keypad_pane_ParamLimits

0x62ad,	// (0x000353da) vkb2_cell_t_keypad_pane

0x62ba,	// (0x000353e7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x62ba,	// (0x000353e7) vkb2_cell_t_keypad_pane_cp08

0x62ca,	// (0x000353f7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x62ca,	// (0x000353f7) vkb2_cell_t_keypad_pane_cp09

0x62db,	// (0x00035408) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x62db,	// (0x00035408) vkb2_cell_t_keypad_pane_cp01

0x62eb,	// (0x00035418) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x62eb,	// (0x00035418) vkb2_cell_t_keypad_pane_cp02

0x62fb,	// (0x00035428) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x62fb,	// (0x00035428) vkb2_cell_t_keypad_pane_cp03

0x630b,	// (0x00035438) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x630b,	// (0x00035438) vkb2_cell_t_keypad_pane_cp04

0x631b,	// (0x00035448) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x631b,	// (0x00035448) vkb2_cell_t_keypad_pane_cp05

0x632b,	// (0x00035458) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x632b,	// (0x00035458) vkb2_cell_t_keypad_pane_cp06

0x633b,	// (0x00035468) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x633b,	// (0x00035468) vkb2_cell_t_keypad_pane_cp07

0x634b,	// (0x00035478) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x634b,	// (0x00035478) vkb2_cell_t_keypad_pane_cp10

0x91dd,	// (0x0003830a) vkb2_cell_t_keypad_pane_g1

0xdde6,	// (0x0003cf13) vkb2_cell_t_keypad_pane_t1

0x39ff,	// (0x00032b2c) popup_grid_graphic2_window

0xddf8,	// (0x0003cf25) aid_size_cell_graphic2_ParamLimits

0xddf8,	// (0x0003cf25) aid_size_cell_graphic2

0xde36,	// (0x0003cf63) bg_popup_window_pane_cp21_ParamLimits

0xde36,	// (0x0003cf63) bg_popup_window_pane_cp21

0xde44,	// (0x0003cf71) graphic2_pages_pane_ParamLimits

0xde44,	// (0x0003cf71) graphic2_pages_pane

0xde8d,	// (0x0003cfba) grid_graphic2_control_pane_ParamLimits

0xde8d,	// (0x0003cfba) grid_graphic2_control_pane

0xdecb,	// (0x0003cff8) grid_graphic2_pane_ParamLimits

0xdecb,	// (0x0003cff8) grid_graphic2_pane

0xdf3a,	// (0x0003d067) cell_graphic2_pane

0x39ff,	// (0x00032b2c) main_comp_mode_pane

0xaae6,	// (0x00039c13) list_ai3_gene_pane_ParamLimits

0x1bf2,	// (0x00030d1f) bg_popup_window_pane_cp19_ParamLimits

0xac59,	// (0x00039d86) bg_touch_area_indi_pane_ParamLimits

0xac59,	// (0x00039d86) bg_touch_area_indi_pane

0xac6f,	// (0x00039d9c) bg_touch_area_indi_pane_cp01_ParamLimits

0xac6f,	// (0x00039d9c) bg_touch_area_indi_pane_cp01

0xac85,	// (0x00039db2) bg_touch_area_indi_pane_cp02_ParamLimits

0xac85,	// (0x00039db2) bg_touch_area_indi_pane_cp02

0xac9b,	// (0x00039dc8) bg_touch_area_indi_pane_cp03_ParamLimits

0xac9b,	// (0x00039dc8) bg_touch_area_indi_pane_cp03

0xacb1,	// (0x00039dde) popup_slider_window_g1_ParamLimits

0xaccd,	// (0x00039dfa) popup_slider_window_g2_ParamLimits

0xace9,	// (0x00039e16) popup_slider_window_g3_ParamLimits

0xfcb5,	// (0x0003ede2) popup_slider_window_g_ParamLimits

0xad05,	// (0x00039e32) popup_slider_window_t1_ParamLimits

0xad49,	// (0x00039e76) small_volume_slider_vertical_pane_ParamLimits

0xdf3a,	// (0x0003d067) cell_graphic2_pane_ParamLimits

0xdf85,	// (0x0003d0b2) bg_button_pane_cp10_ParamLimits

0xdf85,	// (0x0003d0b2) bg_button_pane_cp10

0xdf96,	// (0x0003d0c3) bg_button_pane_cp11_ParamLimits

0xdf96,	// (0x0003d0c3) bg_button_pane_cp11

0xdfa7,	// (0x0003d0d4) graphic2_pages_pane_g1_ParamLimits

0xdfa7,	// (0x0003d0d4) graphic2_pages_pane_g1

0xdfc2,	// (0x0003d0ef) graphic2_pages_pane_g2_ParamLimits

0xdfc2,	// (0x0003d0ef) graphic2_pages_pane_g2

0x0001,

0xfd79,	// (0x0003eea6) graphic2_pages_pane_g_ParamLimits

0xfd79,	// (0x0003eea6) graphic2_pages_pane_g

0xdfda,	// (0x0003d107) graphic2_pages_pane_t1_ParamLimits

0xdfda,	// (0x0003d107) graphic2_pages_pane_t1

0xdff2,	// (0x0003d11f) cell_graphic2_control_pane_ParamLimits

0xdff2,	// (0x0003d11f) cell_graphic2_control_pane

0xe01c,	// (0x0003d149) cell_graphic2_pane_g1_ParamLimits

0xe01c,	// (0x0003d149) cell_graphic2_pane_g1

0xf50f,	// (0x0003e63c) cell_graphic2_pane_g2_ParamLimits

0xf50f,	// (0x0003e63c) cell_graphic2_pane_g2

0xe029,	// (0x0003d156) cell_graphic2_pane_g3_ParamLimits

0xe029,	// (0x0003d156) cell_graphic2_pane_g3

0xf51c,	// (0x0003e649) cell_graphic2_pane_g4_ParamLimits

0xf51c,	// (0x0003e649) cell_graphic2_pane_g4

0xe036,	// (0x0003d163) cell_graphic2_pane_g5_ParamLimits

0xe036,	// (0x0003d163) cell_graphic2_pane_g5

0x0004,

0xfd7e,	// (0x0003eeab) cell_graphic2_pane_g_ParamLimits

0xfd7e,	// (0x0003eeab) cell_graphic2_pane_g

0xe053,	// (0x0003d180) cell_graphic2_pane_t1_ParamLimits

0xe053,	// (0x0003d180) cell_graphic2_pane_t1

0x7dd9,	// (0x00036f06) grid_highlight_pane_cp11_ParamLimits

0x7dd9,	// (0x00036f06) grid_highlight_pane_cp11

0x3f2f,	// (0x0003305c) bg_button_pane_cp05

0xe088,	// (0x0003d1b5) cell_graphic2_control_pane_g1

0x8fb1,	// (0x000380de) bg_touch_area_indi_pane_g1

0xe0b0,	// (0x0003d1dd) aid_cmod_rocker_key_size

0xe0ba,	// (0x0003d1e7) aid_cmode_itu_key_size

0xe0c4,	// (0x0003d1f1) main_cmode_video_pane

0xe0cc,	// (0x0003d1f9) main_comp_mode_itu_pane

0xe0d6,	// (0x0003d203) main_comp_mode_rocker_pane

0xe0de,	// (0x0003d20b) cell_cmode_rocker_pane_ParamLimits

0xe0de,	// (0x0003d20b) cell_cmode_rocker_pane

0xe0f0,	// (0x0003d21d) cell_cmode_itu_pane_ParamLimits

0xe0f0,	// (0x0003d21d) cell_cmode_itu_pane

0x445e,	// (0x0003358b) bg_button_pane_cp06_ParamLimits

0x445e,	// (0x0003358b) bg_button_pane_cp06

0x91dd,	// (0x0003830a) cell_cmode_rocker_pane_g1_ParamLimits

0x91dd,	// (0x0003830a) cell_cmode_rocker_pane_g1

0xad80,	// (0x00039ead) cell_cmode_rocker_pane_g2_ParamLimits

0xad80,	// (0x00039ead) cell_cmode_rocker_pane_g2

0x0001,

0xfd8e,	// (0x0003eebb) cell_cmode_rocker_pane_g_ParamLimits

0xfd8e,	// (0x0003eebb) cell_cmode_rocker_pane_g

0x39ff,	// (0x00032b2c) bg_button_pane_cp07

0xe105,	// (0x0003d232) cell_cmode_itu_pane_g1

0xe10e,	// (0x0003d23b) cell_cmode_itu_pane_t1

0xe11c,	// (0x0003d249) cell_cmode_itu_pane_t2

0x0001,

0xfd93,	// (0x0003eec0) cell_cmode_itu_pane_t

0xaeef,	// (0x0003a01c) aid_touch_ctrl_left

0xaef7,	// (0x0003a024) aid_touch_ctrl_right

0x39ff,	// (0x00032b2c) compa_mode_pane

0xe12a,	// (0x0003d257) aid_cmod_rocker_key_size_cp

0xe134,	// (0x0003d261) aid_cmode_itu_key_size_cp

0xe13e,	// (0x0003d26b) compa_mode_pane_g1

0xe146,	// (0x0003d273) compa_mode_pane_g2

0xe14e,	// (0x0003d27b) compa_mode_pane_g3

0x0002,

0xfd98,	// (0x0003eec5) compa_mode_pane_g

0xe156,	// (0x0003d283) main_comp_mode_itu_pane_cp

0xe160,	// (0x0003d28d) main_comp_mode_rocker_pane_cp

0xe16a,	// (0x0003d297) cell_cmode_itu_pane_cp_ParamLimits

0xe16a,	// (0x0003d297) cell_cmode_itu_pane_cp

0xe17f,	// (0x0003d2ac) cell_cmode_rocker_pane_cp_ParamLimits

0xe17f,	// (0x0003d2ac) cell_cmode_rocker_pane_cp

0x445e,	// (0x0003358b) bg_button_pane_cp06_cp_ParamLimits

0x445e,	// (0x0003358b) bg_button_pane_cp06_cp

0x91dd,	// (0x0003830a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x91dd,	// (0x0003830a) cell_cmode_rocker_pane_g1_cp

0x8fb1,	// (0x000380de) cell_cmode_rocker_pane_g2_cp

0x39ff,	// (0x00032b2c) bg_button_pane_cp07_cp

0xe191,	// (0x0003d2be) cell_cmode_itu_pane_g1_cp

0xe19a,	// (0x0003d2c7) cell_cmode_itu_pane_t1_cp

0xe1a8,	// (0x0003d2d5) cell_cmode_itu_pane_t2_cp

0x1417,	// (0x00030544) settings_code_pane_cp2

0x3d5c,	// (0x00032e89) bg_popup_window_pane_cp3_ParamLimits

0x412d,	// (0x0003325a) heading_pane_cp3_ParamLimits

0x413c,	// (0x00033269) listscroll_popup_graphic_pane_ParamLimits

0x5937,	// (0x00034a64) fep_hwr_aid_pane_ParamLimits

0x5da2,	// (0x00034ecf) aid_touch_sctrl_top_ParamLimits

0x5daf,	// (0x00034edc) sctrl_sk_top_pane_g1_ParamLimits

0x91dd,	// (0x0003830a) sctrl_sk_top_pane_g2_ParamLimits

0xfcce,	// (0x0003edfb) sctrl_sk_top_pane_g_ParamLimits

0x5dbc,	// (0x00034ee9) sctrl_sk_top_pane_t1_ParamLimits

0x5da2,	// (0x00034ecf) aid_touch_sctrl_bottom_ParamLimits

0x5dbc,	// (0x00034ee9) sctrl_sk_bottom_pane_t1_ParamLimits

0xae39,	// (0x00039f66) aid_area_touch_clock

0xdbb8,	// (0x0003cce5) aid_vkb2_area_top_pane_cell_ParamLimits

0xdbb8,	// (0x0003cce5) aid_vkb2_area_top_pane_cell

0xdc63,	// (0x0003cd90) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xdc63,	// (0x0003cd90) aid_vkb2_area_bottom_pane_cell

0xbc42,	// (0x0003ad6f) popup_char_count_window

0xe1b6,	// (0x0003d2e3) popup_char_count_window_g1

0xe1bf,	// (0x0003d2ec) popup_char_count_window_g2

0xe1c8,	// (0x0003d2f5) popup_char_count_window_g3

0x0002,

0xfd9f,	// (0x0003eecc) popup_char_count_window_g

0xe1d1,	// (0x0003d2fe) popup_char_count_window_t1

0x5e62,	// (0x00034f8f) popup_fep_char_preview_window_ParamLimits

0x5e62,	// (0x00034f8f) popup_fep_char_preview_window

0xdbd8,	// (0x0003cd05) vkb2_top_candi_pane_ParamLimits

0xdbd8,	// (0x0003cd05) vkb2_top_candi_pane

0xe1df,	// (0x0003d30c) cell_vkb2_top_candi_pane_ParamLimits

0xe1df,	// (0x0003d30c) cell_vkb2_top_candi_pane

0x77f1,	// (0x0003691e) bg_popup_fep_char_preview_window_ParamLimits

0x77f1,	// (0x0003691e) bg_popup_fep_char_preview_window

0x6360,	// (0x0003548d) popup_fep_char_preview_window_t1_ParamLimits

0x6360,	// (0x0003548d) popup_fep_char_preview_window_t1

0xe229,	// (0x0003d356) bg_popup_fep_char_preview_window_g1

0xe231,	// (0x0003d35e) bg_popup_fep_char_preview_window_g2

0xe239,	// (0x0003d366) bg_popup_fep_char_preview_window_g3

0xe241,	// (0x0003d36e) bg_popup_fep_char_preview_window_g4

0xe249,	// (0x0003d376) bg_popup_fep_char_preview_window_g5

0xe251,	// (0x0003d37e) bg_popup_fep_char_preview_window_g6

0xe259,	// (0x0003d386) bg_popup_fep_char_preview_window_g7

0xe261,	// (0x0003d38e) bg_popup_fep_char_preview_window_g8

0xe269,	// (0x0003d396) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda6,	// (0x0003eed3) bg_popup_fep_char_preview_window_g

0x91dd,	// (0x0003830a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x91dd,	// (0x0003830a) cell_vkb2_top_candi_pane_g1

0x940c,	// (0x00038539) cell_vkb2_top_candi_pane_g2_ParamLimits

0x940c,	// (0x00038539) cell_vkb2_top_candi_pane_g2

0x942d,	// (0x0003855a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x942d,	// (0x0003855a) cell_vkb2_top_candi_pane_g3

0x63a2,	// (0x000354cf) cell_vkb2_top_candi_pane_g4_ParamLimits

0x63a2,	// (0x000354cf) cell_vkb2_top_candi_pane_g4

0xe279,	// (0x0003d3a6) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe279,	// (0x0003d3a6) cell_vkb2_top_candi_pane_g5

0xad80,	// (0x00039ead) cell_vkb2_top_candi_pane_g6_ParamLimits

0xad80,	// (0x00039ead) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbb,	// (0x0003eee8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbb,	// (0x0003eee8) cell_vkb2_top_candi_pane_g

0x63c3,	// (0x000354f0) cell_vkb2_top_candi_pane_t1

0x5696,	// (0x000347c3) aid_size_touch_slider_mark_ParamLimits

0x5696,	// (0x000347c3) aid_size_touch_slider_mark

0xde78,	// (0x0003cfa5) grid_graphic2_catg_pane_ParamLimits

0xde78,	// (0x0003cfa5) grid_graphic2_catg_pane

0xdf0f,	// (0x0003d03c) popup_grid_graphic2_window_t1_ParamLimits

0xdf0f,	// (0x0003d03c) popup_grid_graphic2_window_t1

0xdf24,	// (0x0003d051) popup_grid_graphic2_window_t2_ParamLimits

0xdf24,	// (0x0003d051) popup_grid_graphic2_window_t2

0x0001,

0xfd74,	// (0x0003eea1) popup_grid_graphic2_window_t_ParamLimits

0xfd74,	// (0x0003eea1) popup_grid_graphic2_window_t

0x3f2f,	// (0x0003305c) bg_button_pane_cp05_ParamLimits

0xe088,	// (0x0003d1b5) cell_graphic2_control_pane_g1_ParamLimits

0xaeb5,	// (0x00039fe2) cell_graphic2_catg_pane_ParamLimits

0xaeb5,	// (0x00039fe2) cell_graphic2_catg_pane

0x39ff,	// (0x00032b2c) bg_button_pane_cp12

0xe29a,	// (0x0003d3c7) cell_graphic2_catg_pane_g1

0xae05,	// (0x00039f32) cell_tb_ext_pane_t1_ParamLimits

0x61aa,	// (0x000352d7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x61aa,	// (0x000352d7) vkb2_top_cell_right_narrow_pane

0x61c2,	// (0x000352ef) vkb2_top_cell_right_wide_pane_ParamLimits

0x61c2,	// (0x000352ef) vkb2_top_cell_right_wide_pane

0x5929,	// (0x00034a56) bg_vkb2_func_pane_ParamLimits

0x5929,	// (0x00034a56) bg_vkb2_func_pane

0x6233,	// (0x00035360) vkb2_top_cell_left_pane_g1_ParamLimits

0x5929,	// (0x00034a56) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5929,	// (0x00034a56) bg_vkb2_fuc_pane_cp03

0x6291,	// (0x000353be) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x7231,	// (0x0003635e) bg_vkb2_func_pane_g1

0x7239,	// (0x00036366) bg_vkb2_func_pane_g2

0x7249,	// (0x00036376) bg_vkb2_func_pane_g3

0x7241,	// (0x0003636e) bg_vkb2_func_pane_g4

0x7251,	// (0x0003637e) bg_vkb2_func_pane_g5

0x7259,	// (0x00036386) bg_vkb2_func_pane_g6

0x7261,	// (0x0003638e) bg_vkb2_func_pane_g7

0x7269,	// (0x00036396) bg_vkb2_func_pane_g8

0x7229,	// (0x00036356) bg_vkb2_func_pane_g9

0x0008,

0xfdc8,	// (0x0003eef5) bg_vkb2_func_pane_g

0x5929,	// (0x00034a56) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5929,	// (0x00034a56) bg_vkb2_fuc_pane_cp01

0x6233,	// (0x00035360) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6233,	// (0x00035360) vkb2_top_cell_right_wide_pane_g1

0x5929,	// (0x00034a56) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5929,	// (0x00034a56) bg_vkb2_fuc_pane_cp02

0x6291,	// (0x000353be) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6291,	// (0x000353be) vkb2_top_cell_right_narrow_pane_g1

0x1b40,	// (0x00030c6d) aid_touch_area_decrease_ParamLimits

0x1b40,	// (0x00030c6d) aid_touch_area_decrease

0x1b6e,	// (0x00030c9b) aid_touch_area_increase_ParamLimits

0x1b6e,	// (0x00030c9b) aid_touch_area_increase

0x1b96,	// (0x00030cc3) aid_touch_area_mute_ParamLimits

0x1b96,	// (0x00030cc3) aid_touch_area_mute

0x1bbe,	// (0x00030ceb) aid_touch_area_slider_ParamLimits

0x1bbe,	// (0x00030ceb) aid_touch_area_slider

0x1bfe,	// (0x00030d2b) popup_slider_window_g4_ParamLimits

0x1bfe,	// (0x00030d2b) popup_slider_window_g4

0x1c26,	// (0x00030d53) popup_slider_window_g5_ParamLimits

0x1c26,	// (0x00030d53) popup_slider_window_g5

0x1c5a,	// (0x00030d87) popup_slider_window_g6_ParamLimits

0x1c5a,	// (0x00030d87) popup_slider_window_g6

0xad31,	// (0x00039e5e) popup_slider_window_t2_ParamLimits

0xad31,	// (0x00039e5e) popup_slider_window_t2

0x0001,

0xfcc2,	// (0x0003edef) popup_slider_window_t_ParamLimits

0xfcc2,	// (0x0003edef) popup_slider_window_t

0x1c76,	// (0x00030da3) slider_pane_ParamLimits

0x1c76,	// (0x00030da3) slider_pane

0xe2a3,	// (0x0003d3d0) slider_pane_g1_ParamLimits

0xe2a3,	// (0x0003d3d0) slider_pane_g1

0xe2b7,	// (0x0003d3e4) slider_pane_g2_ParamLimits

0xe2b7,	// (0x0003d3e4) slider_pane_g2

0xe2cd,	// (0x0003d3fa) slider_pane_g3_ParamLimits

0xe2cd,	// (0x0003d3fa) slider_pane_g3

0x0003,

0xfddb,	// (0x0003ef08) slider_pane_g_ParamLimits

0xfddb,	// (0x0003ef08) slider_pane_g

0xd6d8,	// (0x0003c805) popup_tb_float_extension_window_ParamLimits

0xd6d8,	// (0x0003c805) popup_tb_float_extension_window

0xe2f9,	// (0x0003d426) aid_size_cell_tb_float_ext

0x39ff,	// (0x00032b2c) bg_popup_sub_window_cp28

0xe304,	// (0x0003d431) grid_tb_float_ext_pane

0xe30c,	// (0x0003d439) cell_tb_float_ext_pane_ParamLimits

0xe30c,	// (0x0003d439) cell_tb_float_ext_pane

0xe324,	// (0x0003d451) cell_tb_float_ext_pane_g1

0xe32d,	// (0x0003d45a) grid_highlight_pane_cp12

0xd976,	// (0x0003caa3) cell_last_hwr_side_pane_ParamLimits

0xd976,	// (0x0003caa3) cell_last_hwr_side_pane

0x8fb1,	// (0x000380de) cell_last_hwr_side_pane_g1

0xe336,	// (0x0003d463) cell_last_hwr_side_pane_g2

0x0001,

0xfde4,	// (0x0003ef11) cell_last_hwr_side_pane_g

0xdd37,	// (0x0003ce64) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdd37,	// (0x0003ce64) vkb2_area_bottom_space_btn_pane

0x91dd,	// (0x0003830a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdde6,	// (0x0003cf13) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x63c3,	// (0x000354f0) cell_vkb2_top_candi_pane_t1_ParamLimits

0x63d9,	// (0x00035506) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x63d9,	// (0x00035506) vkb2_area_bottom_space_btn_pane_g1

0x640f,	// (0x0003553c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x640f,	// (0x0003553c) vkb2_area_bottom_space_btn_pane_g2

0x6445,	// (0x00035572) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6445,	// (0x00035572) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde9,	// (0x0003ef16) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde9,	// (0x0003ef16) vkb2_area_bottom_space_btn_pane_g

0x59d8,	// (0x00034b05) cel_fep_hwr_func_pane_ParamLimits

0x59d8,	// (0x00034b05) cel_fep_hwr_func_pane

0xd94b,	// (0x0003ca78) cell_hwr_side_button_pane_ParamLimits

0xd94b,	// (0x0003ca78) cell_hwr_side_button_pane

0xae39,	// (0x00039f66) aid_area_touch_clock_ParamLimits

0x3f2f,	// (0x0003305c) bg_uniindi_top_pane_ParamLimits

0xae4b,	// (0x00039f78) uniindi_top_pane_g1_ParamLimits

0xae61,	// (0x00039f8e) uniindi_top_pane_g2_ParamLimits

0xae6d,	// (0x00039f9a) uniindi_top_pane_g3_ParamLimits

0xae7e,	// (0x00039fab) uniindi_top_pane_g4_ParamLimits

0xfcfa,	// (0x0003ee27) uniindi_top_pane_g_ParamLimits

0xae8b,	// (0x00039fb8) uniindi_top_pane_t1_ParamLimits

0x3f2f,	// (0x0003305c) bg_vkb2_func_pane_cp01_ParamLimits

0x3f2f,	// (0x0003305c) bg_vkb2_func_pane_cp01

0xe33f,	// (0x0003d46c) cel_fep_hwr_func_pane_g1_ParamLimits

0xe33f,	// (0x0003d46c) cel_fep_hwr_func_pane_g1

0x3f2f,	// (0x0003305c) bg_vkb2_func_pane_cp02_ParamLimits

0x3f2f,	// (0x0003305c) bg_vkb2_func_pane_cp02

0xe33f,	// (0x0003d46c) cell_hwr_side_button_pane_g1_ParamLimits

0xe33f,	// (0x0003d46c) cell_hwr_side_button_pane_g1

0x714d,	// (0x0003627a) status_pane_g4_ParamLimits

0x714d,	// (0x0003627a) status_pane_g4

0x7165,	// (0x00036292) status_pane_t1

0x8db7,	// (0x00037ee4) form2_midp_gauge_slider_cont_pane

0x8dbf,	// (0x00037eec) form2_midp_gauge_slider_pane_t1_ParamLimits

0x16b1,	// (0x000307de) form2_midp_gauge_slider_pane_t2_ParamLimits

0x16c3,	// (0x000307f0) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0003ebfa) form2_midp_gauge_slider_pane_t_ParamLimits

0x8dd1,	// (0x00037efe) form2_midp_slider_pane_ParamLimits

0x5e22,	// (0x00034f4f) aid_size_cell_func_vkb2_ParamLimits

0x5e22,	// (0x00034f4f) aid_size_cell_func_vkb2

0xe2e5,	// (0x0003d412) slider_pane_g4_ParamLimits

0xe2e5,	// (0x0003d412) slider_pane_g4

0xe34d,	// (0x0003d47a) form2_midp_gauge_slider_pane_t2_cp01

0xe35b,	// (0x0003d488) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe35b,	// (0x0003d488) form2_midp_gauge_slider_pane_t3_cp01

0x64b6,	// (0x000355e3) form2_midp_slider_pane_cp01

0x39ff,	// (0x00032b2c) navi_smil_pane

0xe3a3,	// (0x0003d4d0) navi_smil_pane_g1

0xe3ab,	// (0x0003d4d8) navi_smil_pane_t1

0xe378,	// (0x0003d4a5) form2_midp_slider_pane_g1

0xe381,	// (0x0003d4ae) form2_midp_slider_pane_g2

0xe389,	// (0x0003d4b6) form2_midp_slider_pane_g3

0xe378,	// (0x0003d4a5) form2_midp_slider_pane_g4

0xe391,	// (0x0003d4be) form2_midp_slider_pane_g5

0x0004,

0xfdf2,	// (0x0003ef1f) form2_midp_slider_pane_g

0x647b,	// (0x000355a8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x647b,	// (0x000355a8) vkb2_area_bottom_space_btn_pane_g4

0x0e8f,	// (0x0002ffbc) lc0_navi_pane_ParamLimits

0x0e8f,	// (0x0002ffbc) lc0_navi_pane

0x0ef9,	// (0x00030026) lc0_stat_indi_pane_ParamLimits

0x0ef9,	// (0x00030026) lc0_stat_indi_pane

0x0f0e,	// (0x0003003b) ls0_title_pane_ParamLimits

0x0f0e,	// (0x0003003b) ls0_title_pane

0x445e,	// (0x0003358b) bg_popup_sub_pane_cp14_ParamLimits

0xae20,	// (0x00039f4d) list_uniindi_pane_ParamLimits

0xae2c,	// (0x00039f59) uniindi_top_pane_ParamLimits

0xaec7,	// (0x00039ff4) list_single_uniindi_pane_g1_ParamLimits

0xaeda,	// (0x0003a007) list_single_uniindi_pane_t1_ParamLimits

0xe3b9,	// (0x0003d4e6) lc0_stat_clock_pane_ParamLimits

0xe3b9,	// (0x0003d4e6) lc0_stat_clock_pane

0xe3c6,	// (0x0003d4f3) lc0_stat_indi_pane_g1_ParamLimits

0xe3c6,	// (0x0003d4f3) lc0_stat_indi_pane_g1

0xe3d3,	// (0x0003d500) lc0_stat_indi_pane_g2_ParamLimits

0xe3d3,	// (0x0003d500) lc0_stat_indi_pane_g2

0x0001,

0xfdfd,	// (0x0003ef2a) lc0_stat_indi_pane_g_ParamLimits

0xfdfd,	// (0x0003ef2a) lc0_stat_indi_pane_g

0xe3e0,	// (0x0003d50d) lc0_uni_indicator_pane_ParamLimits

0xe3e0,	// (0x0003d50d) lc0_uni_indicator_pane

0xe3ed,	// (0x0003d51a) ls0_title_pane_g1_ParamLimits

0xe3ed,	// (0x0003d51a) ls0_title_pane_g1

0xe401,	// (0x0003d52e) ls0_title_pane_t1_ParamLimits

0xe401,	// (0x0003d52e) ls0_title_pane_t1

0xe42f,	// (0x0003d55c) lc0_uni_indicator_pane_g1_ParamLimits

0xe42f,	// (0x0003d55c) lc0_uni_indicator_pane_g1

0xe444,	// (0x0003d571) lc0_stat_clock_pane_t1

0x39ff,	// (0x00032b2c) main_ai5_pane

0xe452,	// (0x0003d57f) ai5_sk_pane_ParamLimits

0xe452,	// (0x0003d57f) ai5_sk_pane

0xe45f,	// (0x0003d58c) cell_ai5_widget_pane_ParamLimits

0xe45f,	// (0x0003d58c) cell_ai5_widget_pane

0xe4cf,	// (0x0003d5fc) aid_size_cell_widget_grid

0xe4dc,	// (0x0003d609) bg_ai5_widget_pane_ParamLimits

0xe4dc,	// (0x0003d609) bg_ai5_widget_pane

0xe533,	// (0x0003d660) cell_ai5_widget_pane_g2

0xe547,	// (0x0003d674) cell_ai5_widget_pane_g3

0xe561,	// (0x0003d68e) cell_ai5_widget_pane_g4

0xe571,	// (0x0003d69e) cell_ai5_widget_pane_g5

0xe581,	// (0x0003d6ae) cell_ai5_widget_pane_g6

0xe58d,	// (0x0003d6ba) cell_ai5_widget_pane_g7

0xe5f9,	// (0x0003d726) cell_ai5_widget_pane_t1_ParamLimits

0xe5f9,	// (0x0003d726) cell_ai5_widget_pane_t1

0xe616,	// (0x0003d743) cell_ai5_widget_pane_t2_ParamLimits

0xe616,	// (0x0003d743) cell_ai5_widget_pane_t2

0xe62e,	// (0x0003d75b) cell_ai5_widget_pane_t3_ParamLimits

0xe62e,	// (0x0003d75b) cell_ai5_widget_pane_t3

0xe646,	// (0x0003d773) cell_ai5_widget_pane_t4_ParamLimits

0xe646,	// (0x0003d773) cell_ai5_widget_pane_t4

0xe66c,	// (0x0003d799) cell_ai5_widget_pane_t5_ParamLimits

0xe66c,	// (0x0003d799) cell_ai5_widget_pane_t5

0xe68b,	// (0x0003d7b8) cell_ai5_widget_pane_t6_ParamLimits

0xe68b,	// (0x0003d7b8) cell_ai5_widget_pane_t6

0xe69d,	// (0x0003d7ca) cell_ai5_widget_pane_t7_ParamLimits

0xe69d,	// (0x0003d7ca) cell_ai5_widget_pane_t7

0xe6bc,	// (0x0003d7e9) cell_ai5_widget_pane_t8_ParamLimits

0xe6bc,	// (0x0003d7e9) cell_ai5_widget_pane_t8

0x000b,

0xfe1d,	// (0x0003ef4a) cell_ai5_widget_pane_t_ParamLimits

0xfe1d,	// (0x0003ef4a) cell_ai5_widget_pane_t

0xe740,	// (0x0003d86d) grid_ai5_widget_pane

0x445e,	// (0x0003358b) highlight_cell_ai5_widget_pane_ParamLimits

0x445e,	// (0x0003358b) highlight_cell_ai5_widget_pane

0xe74c,	// (0x0003d879) ai5_sk_left_pane

0xe756,	// (0x0003d883) ai5_sk_middle_pane

0xe760,	// (0x0003d88d) ai5_sk_right_pane

0xe76a,	// (0x0003d897) bg_ai5_widget_pane_g1_ParamLimits

0xe76a,	// (0x0003d897) bg_ai5_widget_pane_g1

0xe776,	// (0x0003d8a3) bg_ai5_widget_pane_g2_ParamLimits

0xe776,	// (0x0003d8a3) bg_ai5_widget_pane_g2

0xe782,	// (0x0003d8af) bg_ai5_widget_pane_g3_ParamLimits

0xe782,	// (0x0003d8af) bg_ai5_widget_pane_g3

0xe78e,	// (0x0003d8bb) bg_ai5_widget_pane_g4_ParamLimits

0xe78e,	// (0x0003d8bb) bg_ai5_widget_pane_g4

0xe79a,	// (0x0003d8c7) bg_ai5_widget_pane_g5_ParamLimits

0xe79a,	// (0x0003d8c7) bg_ai5_widget_pane_g5

0xe7a6,	// (0x0003d8d3) bg_ai5_widget_pane_g6_ParamLimits

0xe7a6,	// (0x0003d8d3) bg_ai5_widget_pane_g6

0xe7b2,	// (0x0003d8df) bg_ai5_widget_pane_g7_ParamLimits

0xe7b2,	// (0x0003d8df) bg_ai5_widget_pane_g7

0xe7be,	// (0x0003d8eb) bg_ai5_widget_pane_g8_ParamLimits

0xe7be,	// (0x0003d8eb) bg_ai5_widget_pane_g8

0xe7ca,	// (0x0003d8f7) bg_ai5_widget_pane_g9_ParamLimits

0xe7ca,	// (0x0003d8f7) bg_ai5_widget_pane_g9

0x0008,

0xfe36,	// (0x0003ef63) bg_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x0003ef63) bg_ai5_widget_pane_g

0xe7fa,	// (0x0003d927) cell_shortcut_ai5_widget_pane_ParamLimits

0xe7fa,	// (0x0003d927) cell_shortcut_ai5_widget_pane

0xe80b,	// (0x0003d938) bg_cell_shortcut_ai5_widget_pane

0x40e9,	// (0x00033216) cell_grid_ai5_widget_pane_g1

0x6e9d,	// (0x00035fca) highlight_cell_shortcut_ai5_widget_pane

0x7239,	// (0x00036366) ai5_sk_left_pane_g1

0xe813,	// (0x0003d940) ai5_sk_left_pane_g2

0xe81b,	// (0x0003d948) ai5_sk_left_pane_g3

0xe823,	// (0x0003d950) ai5_sk_left_pane_g4

0x0003,

0xfe49,	// (0x0003ef76) ai5_sk_left_pane_g

0xe82b,	// (0x0003d958) ai5_sk_left_pane_t1

0x7231,	// (0x0003635e) ai5_sk_right_pane_g1

0xe839,	// (0x0003d966) ai5_sk_right_pane_g2

0xe841,	// (0x0003d96e) ai5_sk_right_pane_g3

0xe849,	// (0x0003d976) ai5_sk_right_pane_g4

0x0003,

0xfe52,	// (0x0003ef7f) ai5_sk_right_pane_g

0xe851,	// (0x0003d97e) ai5_sk_right_pane_t1

0x7231,	// (0x0003635e) ai5_sk_middle_pane_g1

0x7239,	// (0x00036366) ai5_sk_middle_pane_g2

0x7251,	// (0x0003637e) ai5_sk_middle_pane_g3

0xe841,	// (0x0003d96e) ai5_sk_middle_pane_g4

0xe81b,	// (0x0003d948) ai5_sk_middle_pane_g5

0xe85f,	// (0x0003d98c) ai5_sk_middle_pane_g6

0xe867,	// (0x0003d994) ai5_sk_middle_pane_g7

0x0006,

0xfe5b,	// (0x0003ef88) ai5_sk_middle_pane_g

0x0d8d,	// (0x0002feba) aid_touch_area_size_lc0_ParamLimits

0x0d8d,	// (0x0002feba) aid_touch_area_size_lc0

0x5b57,	// (0x00034c84) cell_hwr_candidate_pane_t1_ParamLimits

0x7082,	// (0x000361af) aid_touch_navi_pane

0x0ffa,	// (0x00030127) status_dt_navi_pane_ParamLimits

0x0ffa,	// (0x00030127) status_dt_navi_pane

0x1012,	// (0x0003013f) status_dt_sta_pane_ParamLimits

0x1012,	// (0x0003013f) status_dt_sta_pane

0xe86f,	// (0x0003d99c) dt_sta_controll_pane

0xe87c,	// (0x0003d9a9) dt_sta_indi_pane

0xe889,	// (0x0003d9b6) dt_sta_title_pane

0x3f2f,	// (0x0003305c) bg_dt_sta_indi_pane_ParamLimits

0x3f2f,	// (0x0003305c) bg_dt_sta_indi_pane

0xe89b,	// (0x0003d9c8) dt_sta_battery_pane

0xe8a3,	// (0x0003d9d0) dt_sta_indi_pane_g1

0xe8ac,	// (0x0003d9d9) dt_sta_indi_pane_g2

0xe8b5,	// (0x0003d9e2) dt_sta_indi_pane_g3

0x0002,

0xfe6a,	// (0x0003ef97) dt_sta_indi_pane_g

0xe8be,	// (0x0003d9eb) dt_sta_signal_pane

0x445e,	// (0x0003358b) bg_dt_sta_title_pane_ParamLimits

0x445e,	// (0x0003358b) bg_dt_sta_title_pane

0xe8c7,	// (0x0003d9f4) dt_sta_title_pane_g1

0xe8cf,	// (0x0003d9fc) dt_sta_title_pane_t1_ParamLimits

0xe8cf,	// (0x0003d9fc) dt_sta_title_pane_t1

0x39ff,	// (0x00032b2c) bg_dt_sta_control_pane

0xe8e4,	// (0x0003da11) dt_sta_controll_pane_g1

0xe8ed,	// (0x0003da1a) bg_dt_sta_title_pane_g1

0xe8f6,	// (0x0003da23) bg_dt_sta_title_pane_g2

0xe8ff,	// (0x0003da2c) bg_dt_sta_title_pane_g3

0x0002,

0xfe71,	// (0x0003ef9e) bg_dt_sta_title_pane_g

0x8fb1,	// (0x000380de) bg_dt_sta_indi_pane_g1

0xe908,	// (0x0003da35) dt_sta_signal_pane_g1

0xe910,	// (0x0003da3d) dt_sta_signal_pane_g2

0x0001,

0xfe78,	// (0x0003efa5) dt_sta_signal_pane_g

0xe918,	// (0x0003da45) dt_sta_battery_pane_g1

0xe921,	// (0x0003da4e) dt_sta_battery_pane_t1

0x8fb1,	// (0x000380de) bg_dt_sta_control_pane_g1

0x6a6d,	// (0x00035b9a) fep_china_uni_eep_pane

0x6a75,	// (0x00035ba2) fep_china_uni_entry_pane_ParamLimits

0x6a85,	// (0x00035bb2) popup_fep_china_uni_window_g1_ParamLimits

0x6a95,	// (0x00035bc2) popup_fep_china_uni_window_g2_ParamLimits

0x6a95,	// (0x00035bc2) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0003e82a) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0003e82a) popup_fep_china_uni_window_g

0xe930,	// (0x0003da5d) fep_china_uni_eep_pane_g1

0xe938,	// (0x0003da65) fep_china_uni_eep_pane_t1

0xe39a,	// (0x0003d4c7) aid_touch_area_size_smil_player

0x7120,	// (0x0003624d) lc0_clock_pane

0x7159,	// (0x00036286) status_pane_g5_ParamLimits

0x7159,	// (0x00036286) status_pane_g5

0xd30c,	// (0x0003c439) popup_keymap_window

0x7139,	// (0x00036266) status_icon_pane

0xe547,	// (0x0003d674) cell_ai5_widget_pane_g3_ParamLimits

0xe561,	// (0x0003d68e) cell_ai5_widget_pane_g4_ParamLimits

0xe571,	// (0x0003d69e) cell_ai5_widget_pane_g5_ParamLimits

0xe599,	// (0x0003d6c6) cell_ai5_widget_pane_g8_ParamLimits

0xe599,	// (0x0003d6c6) cell_ai5_widget_pane_g8

0xe5ad,	// (0x0003d6da) cell_ai5_widget_pane_g9_ParamLimits

0xe5ad,	// (0x0003d6da) cell_ai5_widget_pane_g9

0xe5c1,	// (0x0003d6ee) cell_ai5_widget_pane_g10_ParamLimits

0xe5c1,	// (0x0003d6ee) cell_ai5_widget_pane_g10

0xe947,	// (0x0003da74) status_icon_pane_g1

0x39ff,	// (0x00032b2c) bg_popup_sub_pane_cp13

0xe94f,	// (0x0003da7c) popup_keymap_window_t1

0x0d35,	// (0x0002fe62) control_pane_g6_ParamLimits

0x0d35,	// (0x0002fe62) control_pane_g6

0x0d28,	// (0x0002fe55) control_pane_g7_ParamLimits

0x0d28,	// (0x0002fe55) control_pane_g7

0x0d1b,	// (0x0002fe48) control_pane_g8_ParamLimits

0x0d1b,	// (0x0002fe48) control_pane_g8

0xe86f,	// (0x0003d99c) dt_sta_controll_pane_ParamLimits

0xe87c,	// (0x0003d9a9) dt_sta_indi_pane_ParamLimits

0xe889,	// (0x0003d9b6) dt_sta_title_pane_ParamLimits

0x42ed,	// (0x0003341a) aid_size_touch_scroll_bar_cale

0x3be6,	// (0x00032d13) popup_discreet_window_ParamLimits

0x3be6,	// (0x00032d13) popup_discreet_window

0xced0,	// (0x0003bffd) popup_sk_window

0x77f1,	// (0x0003691e) bg_popup_sub_pane_cp28_ParamLimits

0x77f1,	// (0x0003691e) bg_popup_sub_pane_cp28

0xe95d,	// (0x0003da8a) popup_discreet_window_g1_ParamLimits

0xe95d,	// (0x0003da8a) popup_discreet_window_g1

0xe97d,	// (0x0003daaa) popup_discreet_window_t1_ParamLimits

0xe97d,	// (0x0003daaa) popup_discreet_window_t1

0xe99b,	// (0x0003dac8) popup_discreet_window_t2_ParamLimits

0xe99b,	// (0x0003dac8) popup_discreet_window_t2

0x0002,

0xfe7d,	// (0x0003efaa) popup_discreet_window_t_ParamLimits

0xfe7d,	// (0x0003efaa) popup_discreet_window_t

0x64eb,	// (0x00035618) popup_sk_window_g1

0x64f4,	// (0x00035621) popup_sk_window_g2

0x0001,

0xfe84,	// (0x0003efb1) popup_sk_window_g

0x64fd,	// (0x0003562a) popup_sk_window_t1

0x650b,	// (0x00035638) popup_sk_window_t1_copy1

0xe533,	// (0x0003d660) cell_ai5_widget_pane_g2_ParamLimits

0xe6ce,	// (0x0003d7fb) cell_ai5_widget_pane_t9_ParamLimits

0xe6ce,	// (0x0003d7fb) cell_ai5_widget_pane_t9

0x39ff,	// (0x00032b2c) main_fep_fshwr2_pane

0xe9ed,	// (0x0003db1a) aid_fshwr2_btn_pane

0xea01,	// (0x0003db2e) aid_fshwr2_syb_pane

0xea15,	// (0x0003db42) aid_fshwr2_txt_pane

0xea25,	// (0x0003db52) fshwr2_func_candi_pane

0xea3d,	// (0x0003db6a) fshwr2_hwr_syb_pane

0xea55,	// (0x0003db82) fshwr2_icf_pane

0x39ff,	// (0x00032b2c) fshwr2_icf_bg_pane

0xea7f,	// (0x0003dbac) fshwr2_icf_pane_t1_ParamLimits

0xea7f,	// (0x0003dbac) fshwr2_icf_pane_t1

0x4ad1,	// (0x00033bfe) fshwr2_func_candi_pane_g1

0xea96,	// (0x0003dbc3) fshwr2_func_candi_row_pane_ParamLimits

0xea96,	// (0x0003dbc3) fshwr2_func_candi_row_pane

0xeab9,	// (0x0003dbe6) cell_fshwr2_syb_pane_ParamLimits

0xeab9,	// (0x0003dbe6) cell_fshwr2_syb_pane

0xe33f,	// (0x0003d46c) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe33f,	// (0x0003d46c) fshwr2_hwr_syb_pane_g1

0x39ff,	// (0x00032b2c) bg_popup_call_pane_cp01

0xeadb,	// (0x0003dc08) fshwr2_func_candi_cell_pane_ParamLimits

0xeadb,	// (0x0003dc08) fshwr2_func_candi_cell_pane

0x75e3,	// (0x00036710) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x75e3,	// (0x00036710) fshwr2_func_candi_cell_bg_pane

0xeb1a,	// (0x0003dc47) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xeb1a,	// (0x0003dc47) fshwr2_func_candi_cell_pane_g1

0xeb51,	// (0x0003dc7e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xeb51,	// (0x0003dc7e) fshwr2_func_candi_cell_pane_t1

0x39ff,	// (0x00032b2c) bg_button_pane_cp08

0x4f49,	// (0x00034076) cell_fshwr2_syb_bg_pane

0xeb6c,	// (0x0003dc99) cell_fshwr2_syb_bg_pane_g1

0xeb7c,	// (0x0003dca9) cell_fshwr2_syb_bg_pane_t1

0x445e,	// (0x0003358b) main_tmo_pane

0x129b,	// (0x000303c8) uni_indicator_pane_g1_ParamLimits

0x12af,	// (0x000303dc) uni_indicator_pane_g2_ParamLimits

0x12c4,	// (0x000303f1) uni_indicator_pane_g3_ParamLimits

0x81b2,	// (0x000372df) uni_indicator_pane_g4_ParamLimits

0x81b2,	// (0x000372df) uni_indicator_pane_g4

0x81c6,	// (0x000372f3) uni_indicator_pane_g5_ParamLimits

0x81c6,	// (0x000372f3) uni_indicator_pane_g5

0x81c6,	// (0x000372f3) uni_indicator_pane_g6_ParamLimits

0x81c6,	// (0x000372f3) uni_indicator_pane_g6

0xf8f5,	// (0x0003ea22) uni_indicator_pane_g_ParamLimits

0x1b24,	// (0x00030c51) popup_tmo_note_window_ParamLimits

0x1b24,	// (0x00030c51) popup_tmo_note_window

0x445e,	// (0x0003358b) fshwr2_bg_pane

0xeb42,	// (0x0003dc6f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeb42,	// (0x0003dc6f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe89,	// (0x0003efb6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe89,	// (0x0003efb6) fshwr2_func_candi_cell_pane_g

0x8fb1,	// (0x000380de) bg_popup_window_pane_cp01

0x6664,	// (0x00035791) bg_popup_window_pane_g1_cp01

0xeb92,	// (0x0003dcbf) bg_popup_window_pane_cp22_ParamLimits

0xeb92,	// (0x0003dcbf) bg_popup_window_pane_cp22

0xeba0,	// (0x0003dccd) listscroll_tmo_link_pane_ParamLimits

0xeba0,	// (0x0003dccd) listscroll_tmo_link_pane

0xebe0,	// (0x0003dd0d) popup_tmo_note_window_g1_ParamLimits

0xebe0,	// (0x0003dd0d) popup_tmo_note_window_g1

0xebed,	// (0x0003dd1a) tmo_note_info_pane_ParamLimits

0xebed,	// (0x0003dd1a) tmo_note_info_pane

0xec07,	// (0x0003dd34) list_tmo_note_info_pane_g1_ParamLimits

0xec07,	// (0x0003dd34) list_tmo_note_info_pane_g1

0xec1e,	// (0x0003dd4b) list_tmo_note_info_pane_g2_ParamLimits

0xec1e,	// (0x0003dd4b) list_tmo_note_info_pane_g2

0x0001,

0xfe8e,	// (0x0003efbb) list_tmo_note_info_pane_g_ParamLimits

0xfe8e,	// (0x0003efbb) list_tmo_note_info_pane_g

0xec3a,	// (0x0003dd67) list_tmo_note_info_text_pane_ParamLimits

0xec3a,	// (0x0003dd67) list_tmo_note_info_text_pane

0xecbb,	// (0x0003dde8) list_tmo_link_pane

0xecc8,	// (0x0003ddf5) scroll_pane_cp20

0xecd5,	// (0x0003de02) list_single_tmo_link_pane_ParamLimits

0xecd5,	// (0x0003de02) list_single_tmo_link_pane

0xece5,	// (0x0003de12) list_single_tmo_link_pane_t1

0xecf3,	// (0x0003de20) list_tmo_note_info_text_pane_t1_ParamLimits

0xecf3,	// (0x0003de20) list_tmo_note_info_text_pane_t1

0x4511,	// (0x0003363e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x4511,	// (0x0003363e) aid_size_touch_scroll_bar_cp01

0xcb2d,	// (0x0003bc5a) aid_size_touch_slider_marker

0xcec4,	// (0x0003bff1) popup_settings_window_ParamLimits

0xcec4,	// (0x0003bff1) popup_settings_window

0x32dd,	// (0x0003240a) popup_candi_list_indi_window

0x7082,	// (0x000361af) aid_touch_navi_pane_ParamLimits

0x5d76,	// (0x00034ea3) rs_clock_indi_pane

0x5d7f,	// (0x00034eac) sctrl_sk_bottom_pane_ParamLimits

0x5d90,	// (0x00034ebd) sctrl_sk_top_pane_ParamLimits

0x5e7c,	// (0x00034fa9) popup_fep_tooltip_window

0xe4cf,	// (0x0003d5fc) aid_size_cell_widget_grid_ParamLimits

0xe51f,	// (0x0003d64c) cell_ai5_widget_pane_g1_ParamLimits

0xe51f,	// (0x0003d64c) cell_ai5_widget_pane_g1

0xe581,	// (0x0003d6ae) cell_ai5_widget_pane_g6_ParamLimits

0xe58d,	// (0x0003d6ba) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe02,	// (0x0003ef2f) cell_ai5_widget_pane_g_ParamLimits

0xfe02,	// (0x0003ef2f) cell_ai5_widget_pane_g

0xe6fd,	// (0x0003d82a) cell_ai5_widget_pane_t10_ParamLimits

0xe6fd,	// (0x0003d82a) cell_ai5_widget_pane_t10

0xe740,	// (0x0003d86d) grid_ai5_widget_pane_ParamLimits

0xe7d6,	// (0x0003d903) cell_contacts_ai5_widget_pane_ParamLimits

0xe7d6,	// (0x0003d903) cell_contacts_ai5_widget_pane

0xe9b0,	// (0x0003dadd) popup_discreet_window_t3_ParamLimits

0xe9b0,	// (0x0003dadd) popup_discreet_window_t3

0xea6d,	// (0x0003db9a) popup_fshwr2_char_preview_window_ParamLimits

0xea6d,	// (0x0003db9a) popup_fshwr2_char_preview_window

0xec58,	// (0x0003dd85) tmo_note_info_pane_t1

0xec6d,	// (0x0003dd9a) tmo_note_info_pane_t2

0xec82,	// (0x0003ddaf) tmo_note_info_pane_t3

0xec97,	// (0x0003ddc4) tmo_note_info_pane_t4

0xeca9,	// (0x0003ddd6) tmo_note_info_pane_t5

0x0004,

0xfe93,	// (0x0003efc0) tmo_note_info_pane_t

0xecbb,	// (0x0003dde8) list_tmo_link_pane_ParamLimits

0xecc8,	// (0x0003ddf5) scroll_pane_cp20_ParamLimits

0x39ff,	// (0x00032b2c) bg_popup_fep_char_preview_window_cp01

0xeef4,	// (0x0003e021) popup_fshwr2_char_preview_window_t1

0xef02,	// (0x0003e02f) popup_candi_list_indi_window_g1

0xef0b,	// (0x0003e038) bg_cell_contacts_ai5_widget_pane

0xef17,	// (0x0003e044) cell_contacts_ai5_widget_pane_g1

0xef2c,	// (0x0003e059) cell_contacts_ai5_widget_pane_g2

0xef38,	// (0x0003e065) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9e,	// (0x0003efcb) cell_contacts_ai5_widget_pane_g

0xef44,	// (0x0003e071) cell_contacts_ai5_widget_pane_t1

0x445e,	// (0x0003358b) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefb9,	// (0x0003e0e6) settings_container_pane

0x6e9d,	// (0x00035fca) listscroll_set_pane_copy1

0x88ed,	// (0x00037a1a) scroll_pane_cp121_copy1

0xefc5,	// (0x0003e0f2) set_content_pane_copy1

0xefcd,	// (0x0003e0fa) aid_height_set_list_copy1_ParamLimits

0xefcd,	// (0x0003e0fa) aid_height_set_list_copy1

0x836b,	// (0x00037498) aid_size_parent_copy1_ParamLimits

0x836b,	// (0x00037498) aid_size_parent_copy1

0xefd9,	// (0x0003e106) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd9,	// (0x0003e106) button_value_adjust_pane_cp6_copy1

0x4f49,	// (0x00034076) list_highlight_pane_cp2_copy1_ParamLimits

0x4f49,	// (0x00034076) list_highlight_pane_cp2_copy1

0xefed,	// (0x0003e11a) list_set_pane_copy1_ParamLimits

0xefed,	// (0x0003e11a) list_set_pane_copy1

0xef56,	// (0x0003e083) main_pane_set_t1_copy1_ParamLimits

0xef56,	// (0x0003e083) main_pane_set_t1_copy1

0xef90,	// (0x0003e0bd) main_pane_set_t2_copy1_ParamLimits

0xef90,	// (0x0003e0bd) main_pane_set_t2_copy1

0xf07b,	// (0x0003e1a8) main_pane_set_t3_copy1

0xf089,	// (0x0003e1b6) main_pane_set_t4_copy1

0xefad,	// (0x0003e0da) set_content_pane_g1_copy1_ParamLimits

0xefad,	// (0x0003e0da) set_content_pane_g1_copy1

0xf097,	// (0x0003e1c4) setting_code_pane_copy1

0xf09f,	// (0x0003e1cc) setting_slider_graphic_pane_copy1

0xf09f,	// (0x0003e1cc) setting_slider_pane_copy1

0xf09f,	// (0x0003e1cc) setting_text_pane_copy1

0xf09f,	// (0x0003e1cc) setting_volume_pane_copy1

0xf0a7,	// (0x0003e1d4) settings_code_pane_cp2_copy1

0xf0af,	// (0x0003e1dc) settings_code_pane_cp_copy1_ParamLimits

0xf0af,	// (0x0003e1dc) settings_code_pane_cp_copy1

0x66c3,	// (0x000357f0) volume_set_pane_copy1

0xf0c3,	// (0x0003e1f0) volume_set_pane_g10_copy1

0xf0cb,	// (0x0003e1f8) volume_set_pane_g1_copy1

0xf0d3,	// (0x0003e200) volume_set_pane_g2_copy1

0xf0db,	// (0x0003e208) volume_set_pane_g3_copy1

0xf0e3,	// (0x0003e210) volume_set_pane_g4_copy1

0xf0eb,	// (0x0003e218) volume_set_pane_g5_copy1

0xf0f3,	// (0x0003e220) volume_set_pane_g6_copy1

0xf0fb,	// (0x0003e228) volume_set_pane_g7_copy1

0xf103,	// (0x0003e230) volume_set_pane_g8_copy1

0xf10b,	// (0x0003e238) volume_set_pane_g9_copy1

0x3d5c,	// (0x00032e89) bg_set_opt_pane_cp_copy1_ParamLimits

0x3d5c,	// (0x00032e89) bg_set_opt_pane_cp_copy1

0x66cb,	// (0x000357f8) setting_slider_pane_t1_copy1_ParamLimits

0x66cb,	// (0x000357f8) setting_slider_pane_t1_copy1

0x66e2,	// (0x0003580f) setting_slider_pane_t2_copy1_ParamLimits

0x66e2,	// (0x0003580f) setting_slider_pane_t2_copy1

0x66fb,	// (0x00035828) setting_slider_pane_t3_copy1_ParamLimits

0x66fb,	// (0x00035828) setting_slider_pane_t3_copy1

0x3dc0,	// (0x00032eed) slider_set_pane_copy1_ParamLimits

0x3dc0,	// (0x00032eed) slider_set_pane_copy1

0x44ad,	// (0x000335da) set_opt_bg_pane_g1_copy2

0x44b5,	// (0x000335e2) set_opt_bg_pane_g2_copy2

0xf113,	// (0x0003e240) set_opt_bg_pane_g3_copy2

0x44c5,	// (0x000335f2) set_opt_bg_pane_g4_copy2

0x44cd,	// (0x000335fa) set_opt_bg_pane_g5_copy2

0x44d5,	// (0x00033602) set_opt_bg_pane_g6_copy2

0xf11b,	// (0x0003e248) set_opt_bg_pane_g7_copy2

0xf123,	// (0x0003e250) set_opt_bg_pane_g8_copy2

0xf12b,	// (0x0003e258) set_opt_bg_pane_g9_copy2

0x5696,	// (0x000347c3) aid_size_touch_slider_mark_copy1_ParamLimits

0x5696,	// (0x000347c3) aid_size_touch_slider_mark_copy1

0x837d,	// (0x000374aa) slider_set_pane_g1_copy1

0x8386,	// (0x000374b3) slider_set_pane_g2_copy1

0x56b6,	// (0x000347e3) slider_set_pane_g3_copy1_ParamLimits

0x56b6,	// (0x000347e3) slider_set_pane_g3_copy1

0x56ca,	// (0x000347f7) slider_set_pane_g4_copy1_ParamLimits

0x56ca,	// (0x000347f7) slider_set_pane_g4_copy1

0x56e2,	// (0x0003480f) slider_set_pane_g5_copy1_ParamLimits

0x56e2,	// (0x0003480f) slider_set_pane_g5_copy1

0x56b6,	// (0x000347e3) slider_set_pane_g6_copy1_ParamLimits

0x56b6,	// (0x000347e3) slider_set_pane_g6_copy1

0x6712,	// (0x0003583f) slider_set_pane_g7_copy1_ParamLimits

0x6712,	// (0x0003583f) slider_set_pane_g7_copy1

0x3bc8,	// (0x00032cf5) bg_set_opt_pane_cp2_copy1

0x3dd6,	// (0x00032f03) setting_slider_graphic_pane_g1_copy1

0x6728,	// (0x00035855) setting_slider_graphic_pane_t1_copy1

0x6737,	// (0x00035864) setting_slider_graphic_pane_t2_copy1

0x6746,	// (0x00035873) slider_set_pane_cp_copy1

0xf13b,	// (0x0003e268) input_focus_pane_cp1_copy1

0xf144,	// (0x0003e271) list_set_text_pane_copy1

0xf14c,	// (0x0003e279) setting_text_pane_g1_copy1

0x39df,	// (0x00032b0c) set_text_pane_t1_copy1

0xf13b,	// (0x0003e268) input_focus_pane_cp2_copy1

0xf14c,	// (0x0003e279) setting_code_pane_g1_copy1

0xf155,	// (0x0003e282) setting_code_pane_t1_copy1

0xeedf,	// (0x0003e00c) list_set_graphic_pane_copy1

0x3bc8,	// (0x00032cf5) bg_set_opt_pane_cp4_copy1

0x6c00,	// (0x00035d2d) list_set_graphic_pane_g1_copy1_ParamLimits

0x6c00,	// (0x00035d2d) list_set_graphic_pane_g1_copy1

0xf163,	// (0x0003e290) list_set_graphic_pane_g2_copy1

0x6c18,	// (0x00035d45) list_set_graphic_pane_t1_copy1_ParamLimits

0x6c18,	// (0x00035d45) list_set_graphic_pane_t1_copy1

0x8fb1,	// (0x000380de) rs_clock_indi_pane_g1

0xf16b,	// (0x0003e298) rs_clock_indi_pane_t1

0xf179,	// (0x0003e2a6) rs_indi_pane

0xf181,	// (0x0003e2ae) rs_indi_pane_g1

0xf18a,	// (0x0003e2b7) rs_indi_pane_g2

0xef02,	// (0x0003e02f) rs_indi_pane_g3

0x0002,

0xfea5,	// (0x0003efd2) rs_indi_pane_g

0x6e9d,	// (0x00035fca) bg_popup_preview_window_pane_cp03

0xf193,	// (0x0003e2c0) popup_fep_tooltip_window_t1

0x98f2,	// (0x00038a1f) popup_note2_window_g2_ParamLimits

0x98f2,	// (0x00038a1f) popup_note2_window_g2

0x0001,

0xfc39,	// (0x0003ed66) popup_note2_window_g_ParamLimits

0xfc39,	// (0x0003ed66) popup_note2_window_g

0xaaac,	// (0x00039bd9) bg_popup_sub_pane_cp11_ParamLimits

0xaab9,	// (0x00039be6) cell_ai3_links_pane_g1_ParamLimits

0xaad0,	// (0x00039bfd) cell_ai3_links_pane_t1

0x39df,	// (0x00032b0c) set_text_pane_t1_copy1_ParamLimits

0x6dc4,	// (0x00035ef1) cell_graphic_popup_pane_cp2_ParamLimits

0x6dc4,	// (0x00035ef1) cell_graphic_popup_pane_cp2

0xf1a1,	// (0x0003e2ce) cell_graphic_popup_pane_g1_cp2

0x419c,	// (0x000332c9) cell_graphic_popup_pane_g2_cp2

0xf1a9,	// (0x0003e2d6) cell_graphic_popup_pane_g3_cp2

0xf1b1,	// (0x0003e2de) cell_graphic_popup_pane_t2_cp2

0x41ad,	// (0x000332da) grid_highlight_pane_cp3_cp2

0x48ce,	// (0x000339fb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x445e,	// (0x0003358b) main_tmo_pane_ParamLimits

0x1b1c,	// (0x00030c49) popup_tmo_big_image_note_window

0xe50e,	// (0x0003d63b) cell_ai5_widget_list_pane

0xe516,	// (0x0003d643) cell_ai5_widget_lrg_icon_pane

0xec58,	// (0x0003dd85) tmo_note_info_pane_t1_ParamLimits

0xec6d,	// (0x0003dd9a) tmo_note_info_pane_t2_ParamLimits

0xec82,	// (0x0003ddaf) tmo_note_info_pane_t3_ParamLimits

0xec97,	// (0x0003ddc4) tmo_note_info_pane_t4_ParamLimits

0xeca9,	// (0x0003ddd6) tmo_note_info_pane_t5_ParamLimits

0xfe93,	// (0x0003efc0) tmo_note_info_pane_t_ParamLimits

0xefb9,	// (0x0003e0e6) settings_container_pane_ParamLimits

0xf133,	// (0x0003e260) indicator_popup_pane_cp5

0xf133,	// (0x0003e260) indicator_popup_pane_cp6

0xeedf,	// (0x0003e00c) list_set_graphic_pane_copy1_ParamLimits

0x39ff,	// (0x00032b2c) bg_popup_window_pane_cp23

0xf1bf,	// (0x0003e2ec) popup_tmo_big_image_note_window_g1

0xf1c8,	// (0x0003e2f5) popup_tmo_big_image_note_window_t1

0xf1d6,	// (0x0003e303) popup_tmo_big_image_note_window_t2

0xf1e4,	// (0x0003e311) popup_tmo_big_image_note_window_t3

0x0002,

0xfeac,	// (0x0003efd9) popup_tmo_big_image_note_window_t

0x8fb1,	// (0x000380de) cell_ai5_widget_lrg_icon_pane_g1

0xf1f2,	// (0x0003e31f) cell_ai5_widget_lrg_icon_pane_t1

0xed0c,	// (0x0003de39) cell_ai5_widget_list_row_pane_ParamLimits

0xed0c,	// (0x0003de39) cell_ai5_widget_list_row_pane

0xed23,	// (0x0003de50) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xed23,	// (0x0003de50) cell_ai5_widget_list_row_pane_g1

0xed30,	// (0x0003de5d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xed30,	// (0x0003de5d) cell_ai5_widget_list_row_pane_t1

0xed61,	// (0x0003de8e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xed61,	// (0x0003de8e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb3,	// (0x0003efe0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb3,	// (0x0003efe0) cell_ai5_widget_list_row_pane_t

0x39ff,	// (0x00032b2c) main_fep_vtchi_ss_pane

0xf20d,	// (0x0003e33a) popup_fep_char_pre_window

0xf215,	// (0x0003e342) popup_fep_ituss_window

0xedb4,	// (0x0003dee1) popup_fep_vkbss_window

0xf250,	// (0x0003e37d) grid_vkbss_keypad_pane_ParamLimits

0xf250,	// (0x0003e37d) grid_vkbss_keypad_pane

0xf260,	// (0x0003e38d) ituss_keypad_pane

0x6815,	// (0x00035942) aid_vkbss_key_offset_ParamLimits

0x6815,	// (0x00035942) aid_vkbss_key_offset

0x6821,	// (0x0003594e) cell_vkbss_key_pane_ParamLimits

0x6821,	// (0x0003594e) cell_vkbss_key_pane

0xf26f,	// (0x0003e39c) bg_cell_vkbss_key_g1_ParamLimits

0xf26f,	// (0x0003e39c) bg_cell_vkbss_key_g1

0xf27b,	// (0x0003e3a8) cell_vkbss_key_3p_pane_ParamLimits

0xf27b,	// (0x0003e3a8) cell_vkbss_key_3p_pane

0xf2b1,	// (0x0003e3de) cell_vkbss_key_g1_ParamLimits

0xf2b1,	// (0x0003e3de) cell_vkbss_key_g1

0xf2e7,	// (0x0003e414) cell_vkbss_key_t1_ParamLimits

0xf2e7,	// (0x0003e414) cell_vkbss_key_t1

0x6855,	// (0x00035982) cell_ituss_key_pane_ParamLimits

0x6855,	// (0x00035982) cell_ituss_key_pane

0xf357,	// (0x0003e484) bg_cell_ituss_key_g1_ParamLimits

0xf357,	// (0x0003e484) bg_cell_ituss_key_g1

0xf363,	// (0x0003e490) cell_ituss_key_pane_g1_ParamLimits

0xf363,	// (0x0003e490) cell_ituss_key_pane_g1

0x6866,	// (0x00035993) cell_ituss_key_pane_g2_ParamLimits

0x6866,	// (0x00035993) cell_ituss_key_pane_g2

0x0005,

0xfeba,	// (0x0003efe7) cell_ituss_key_pane_g_ParamLimits

0xfeba,	// (0x0003efe7) cell_ituss_key_pane_g

0x68ea,	// (0x00035a17) cell_ituss_key_t1_ParamLimits

0x68ea,	// (0x00035a17) cell_ituss_key_t1

0x6920,	// (0x00035a4d) cell_ituss_key_t2_ParamLimits

0x6920,	// (0x00035a4d) cell_ituss_key_t2

0x6951,	// (0x00035a7e) cell_ituss_key_t3_ParamLimits

0x6951,	// (0x00035a7e) cell_ituss_key_t3

0x6920,	// (0x00035a4d) cell_ituss_key_t4_ParamLimits

0x6920,	// (0x00035a4d) cell_ituss_key_t4

0x0004,

0xfec7,	// (0x0003eff4) cell_ituss_key_t_ParamLimits

0xfec7,	// (0x0003eff4) cell_ituss_key_t

0xf389,	// (0x0003e4b6) cell_vkbss_key_3p_pane_g1

0xf391,	// (0x0003e4be) cell_vkbss_key_3p_pane_g2

0xf399,	// (0x0003e4c6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed2,	// (0x0003efff) cell_vkbss_key_3p_pane_g

0x6e9d,	// (0x00035fca) bg_popup_fep_char_preview_window_cp02

0xf3a1,	// (0x0003e4ce) popup_fep_char_pre_window_t1

0xe4bc,	// (0x0003d5e9) main_ai5_sk_pane

0xef0b,	// (0x0003e038) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef17,	// (0x0003e044) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef2c,	// (0x0003e059) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef38,	// (0x0003e065) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9e,	// (0x0003efcb) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef44,	// (0x0003e071) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x445e,	// (0x0003358b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xedc1,	// (0x0003deee) main_ai5_sk_pane_g1

0x763b,	// (0x00036768) popup_query_code_window_g1

0xeda5,	// (0x0003ded2) popup_fep_vkb_icf_pane

0xf227,	// (0x0003e354) popup_fep_vtchi_icf_pane

0x4f49,	// (0x00034076) bg_icf_pane

0x4f49,	// (0x00034076) list_vkb_icf_pane

0xf3af,	// (0x0003e4dc) bg_icf_pane_cp01

0xf3c2,	// (0x0003e4ef) vtchi_icf_list_pane

0xee16,	// (0x0003df43) list_vkb_icf_pane_t1_ParamLimits

0xee16,	// (0x0003df43) list_vkb_icf_pane_t1

0xf3d2,	// (0x0003e4ff) vtchi_icf_list_pane_t1_ParamLimits

0xf3d2,	// (0x0003e4ff) vtchi_icf_list_pane_t1

0xf215,	// (0x0003e342) popup_fep_ituss_window_ParamLimits

0xf227,	// (0x0003e354) popup_fep_vtchi_icf_pane_ParamLimits

0xf260,	// (0x0003e38d) ituss_keypad_pane_ParamLimits

0x680b,	// (0x00035938) ituss_sks_pane

0x4f49,	// (0x00034076) bg_icf_pane_ParamLimits

0xed89,	// (0x0003deb6) icf_edit_indi_pane_ParamLimits

0xed89,	// (0x0003deb6) icf_edit_indi_pane

0x4f49,	// (0x00034076) list_vkb_icf_pane_ParamLimits

0xf3af,	// (0x0003e4dc) bg_icf_pane_cp01_ParamLimits

0xf200,	// (0x0003e32d) icf_edit_indi_pane_cp01_ParamLimits

0xf200,	// (0x0003e32d) icf_edit_indi_pane_cp01

0xf3ca,	// (0x0003e4f7) vtchi_query_pane

0xe33f,	// (0x0003d46c) icf_edit_indi_pane_g1_ParamLimits

0xe33f,	// (0x0003d46c) icf_edit_indi_pane_g1

0xee2c,	// (0x0003df59) icf_edit_indi_pane_g2_ParamLimits

0xee2c,	// (0x0003df59) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003f02a) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003f02a) icf_edit_indi_pane_g

0xee40,	// (0x0003df6d) icf_edit_indi_pane_t1

0xf3ea,	// (0x0003e517) bg_input_focus_pane_cp042

0xf3f3,	// (0x0003e520) vtchi_button_pane

0xf3fc,	// (0x0003e529) vtchi_query_pane_t1

0xf40a,	// (0x0003e537) vtchi_query_pane_t2

0xf418,	// (0x0003e545) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003f019) vtchi_query_pane_t

0x39ff,	// (0x00032b2c) bg_button_pane_cp13

0xf426,	// (0x0003e553) vtchi_button_pane_g1

0x69f6,	// (0x00035b23) ituss_sks_pane_g1

0x69ff,	// (0x00035b2c) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003f020) ituss_sks_pane_g

0xf42e,	// (0x0003e55b) ituss_sks_pane_t1

0xf43c,	// (0x0003e569) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003f025) ituss_sks_pane_t

0x8bde,	// (0x00037d0b) indicator_nsta_pane_cp_g1

0x8be7,	// (0x00037d14) indicator_nsta_pane_cp_g2

0x8bef,	// (0x00037d1c) indicator_nsta_pane_cp_g3

0x8bf7,	// (0x00037d24) indicator_nsta_pane_cp_g4

0x8bff,	// (0x00037d2c) indicator_nsta_pane_cp_g5

0x8c07,	// (0x00037d34) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0003ebb0) indicator_nsta_pane_cp_g

0xe06a,	// (0x0003d197) cell_graphic2_pane_t2_ParamLimits

0xe06a,	// (0x0003d197) cell_graphic2_pane_t2

0x0001,

0xfd89,	// (0x0003eeb6) cell_graphic2_pane_t_ParamLimits

0xfd89,	// (0x0003eeb6) cell_graphic2_pane_t

0xe0a2,	// (0x0003d1cf) cell_graphic2_control_pane_t1

0x08d3,	// (0x0002fa00) signal_pane_g3_ParamLimits

0x08d3,	// (0x0002fa00) signal_pane_g3

0x08e7,	// (0x0002fa14) signal_pane_g4_ParamLimits

0x08e7,	// (0x0002fa14) signal_pane_g4

0xed73,	// (0x0003dea0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xed73,	// (0x0003dea0) cell_ai5_widget_list_row_pane_t3

0xf377,	// (0x0003e4a4) cell_ituss_key_pane_t1_ParamLimits

0xf377,	// (0x0003e4a4) cell_ituss_key_pane_t1

0x7309,	// (0x00036436) form_field_data_wide_pane_vc_t2_ParamLimits

0x7309,	// (0x00036436) form_field_data_wide_pane_vc_t2

0x731b,	// (0x00036448) form_field_data_wide_pane_vc_t3_ParamLimits

0x731b,	// (0x00036448) form_field_data_wide_pane_vc_t3

0x0002,

0xf7dd,	// (0x0003e90a) form_field_data_wide_pane_vc_t_ParamLimits

0xf7dd,	// (0x0003e90a) form_field_data_wide_pane_vc_t

0x8932,	// (0x00037a5f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x8932,	// (0x00037a5f) form_field_slider_wide_pane_vc_t3

0x89f0,	// (0x00037b1d) form_field_popup_wide_pane_vc_t2_ParamLimits

0x89f0,	// (0x00037b1d) form_field_popup_wide_pane_vc_t2

0x8a05,	// (0x00037b32) form_field_popup_wide_pane_vc_t3_ParamLimits

0x8a05,	// (0x00037b32) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0003eb9f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0003eb9f) form_field_popup_wide_pane_vc_t

0xe9ed,	// (0x0003db1a) aid_fshwr2_btn_pane_ParamLimits

0xea01,	// (0x0003db2e) aid_fshwr2_syb_pane_ParamLimits

0xea15,	// (0x0003db42) aid_fshwr2_txt_pane_ParamLimits

0x445e,	// (0x0003358b) fshwr2_bg_pane_ParamLimits

0xea25,	// (0x0003db52) fshwr2_func_candi_pane_ParamLimits

0xea3d,	// (0x0003db6a) fshwr2_hwr_syb_pane_ParamLimits

0xea55,	// (0x0003db82) fshwr2_icf_pane_ParamLimits

0x36c1,	// (0x000327ee) list_double_graphic_pane_vc_g4_ParamLimits

0x36c1,	// (0x000327ee) list_double_graphic_pane_vc_g4

0x6886,	// (0x000359b3) cell_ituss_key_pane_g3_ParamLimits

0x6886,	// (0x000359b3) cell_ituss_key_pane_g3

0x6982,	// (0x00035aaf) cell_ituss_key_t5_ParamLimits

0x6982,	// (0x00035aaf) cell_ituss_key_t5

0xedb4,	// (0x0003dee1) popup_fep_vkbss_window_ParamLimits

0xe4c6,	// (0x0003d5f3) aid_cell_ai5_quarter

0xee40,	// (0x0003df6d) icf_edit_indi_pane_t1_ParamLimits

0x3fd7,	// (0x00033104) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3fd7,	// (0x00033104) aid_tch_indicator_popup_pane_cp2

0x3fea,	// (0x00033117) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3fea,	// (0x00033117) aid_tch_query_popup_data_pane_cp2

0x75e3,	// (0x00036710) aid_tch_query_popup_pane_ParamLimits

0x75e3,	// (0x00036710) aid_tch_query_popup_pane

0x75e3,	// (0x00036710) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x75e3,	// (0x00036710) aid_tch_query_popup_data_pane_cp1

0x4f49,	// (0x00034076) cell_fshwr2_syb_bg_pane_ParamLimits

0xeb6c,	// (0x0003dc99) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xeb7c,	// (0x0003dca9) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeda5,	// (0x0003ded2) popup_fep_vkb_icf_pane_ParamLimits

0xe271,	// (0x0003d39e) bg_popup_fep_char_preview_window_g10

0xe5d5,	// (0x0003d702) cell_ai5_widget_pane_g11_ParamLimits

0xe5d5,	// (0x0003d702) cell_ai5_widget_pane_g11

0xe5e1,	// (0x0003d70e) cell_ai5_widget_pane_g12_ParamLimits

0xe5e1,	// (0x0003d70e) cell_ai5_widget_pane_g12

0xe5ed,	// (0x0003d71a) cell_ai5_widget_pane_g13_ParamLimits

0xe5ed,	// (0x0003d71a) cell_ai5_widget_pane_g13

0xe71c,	// (0x0003d849) cell_ai5_widget_pane_t11_ParamLimits

0xe71c,	// (0x0003d849) cell_ai5_widget_pane_t11

0xe72e,	// (0x0003d85b) cell_ai5_widget_pane_t12_ParamLimits

0xe72e,	// (0x0003d85b) cell_ai5_widget_pane_t12

0x6892,	// (0x000359bf) cell_ituss_key_pane_g4_ParamLimits

0x6892,	// (0x000359bf) cell_ituss_key_pane_g4

0x68ae,	// (0x000359db) cell_ituss_key_pane_g5_ParamLimits

0x68ae,	// (0x000359db) cell_ituss_key_pane_g5

0x68ca,	// (0x000359f7) cell_ituss_key_pane_g6_ParamLimits

0x68ca,	// (0x000359f7) cell_ituss_key_pane_g6

0x7229,	// (0x00036356) bg_icf_pane_g1

0xedca,	// (0x0003def7) bg_icf_pane_g2

0xedd4,	// (0x0003df01) bg_icf_pane_g3

0xeddc,	// (0x0003df09) bg_icf_pane_g4

0xede6,	// (0x0003df13) bg_icf_pane_g5

0xedf0,	// (0x0003df1d) bg_icf_pane_g6

0xedfa,	// (0x0003df27) bg_icf_pane_g7

0xee02,	// (0x0003df2f) bg_icf_pane_g8

0xee0c,	// (0x0003df39) bg_icf_pane_g9

0x0008,

0xfed9,	// (0x0003f006) bg_icf_pane_g

0xf23d,	// (0x0003e36a) popup_hyb_candi_window_ParamLimits

0xf23d,	// (0x0003e36a) popup_hyb_candi_window

0x72a9,	// (0x000363d6) bg_popup_sub_pane_cp01_ParamLimits

0x72a9,	// (0x000363d6) bg_popup_sub_pane_cp01

0xf44a,	// (0x0003e577) entry_hyb_candi_pane_ParamLimits

0xf44a,	// (0x0003e577) entry_hyb_candi_pane

0xf459,	// (0x0003e586) grid_hyb_candi_pane_ParamLimits

0xf459,	// (0x0003e586) grid_hyb_candi_pane

0xf46e,	// (0x0003e59b) grid_hyb_phrase_pane_ParamLimits

0xf46e,	// (0x0003e59b) grid_hyb_phrase_pane

0xf47d,	// (0x0003e5aa) cell_hyb_candi_pane_ParamLimits

0xf47d,	// (0x0003e5aa) cell_hyb_candi_pane

0xf495,	// (0x0003e5c2) cell_hyb_candi_scroll_pane

0x4ad1,	// (0x00033bfe) cell_hyb_candi_pane_g1

0xf49e,	// (0x0003e5cb) cell_hyb_candi_pane_t1

0xf4ac,	// (0x0003e5d9) cell_hyb_phrase_pane

0x4ad1,	// (0x00033bfe) cell_hyb_phrase_pane_g1

0xf4b5,	// (0x0003e5e2) cell_hyb_phrase_pane_t1

0xf4c3,	// (0x0003e5f0) entry_hyb_candi_pane_t1

0x6e9d,	// (0x00035fca) input_focus_pane_cp06

0xf4d1,	// (0x0003e5fe) cell_hyb_candi_scroll_pane_g1

0xf4d9,	// (0x0003e606) cell_hyb_candi_scroll_pane_g1_aid

0xf4e1,	// (0x0003e60e) cell_hyb_candi_scroll_pane_g2

0xf4e9,	// (0x0003e616) cell_hyb_candi_scroll_pane_g2_aid

0xf4f1,	// (0x0003e61e) cell_hyb_candi_scroll_pane_g3

0xf4f9,	// (0x0003e626) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large

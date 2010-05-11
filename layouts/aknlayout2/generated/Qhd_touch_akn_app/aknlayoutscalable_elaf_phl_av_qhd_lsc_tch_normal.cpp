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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00000000 };

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
0xb540,	// (0x0000b540) Screen

0xb54c,	// (0x0000b54c) application_window_ParamLimits

0xb54c,	// (0x0000b54c) application_window

0x002e,	// (0x0000002e) screen_g1

0xb584,	// (0x0000b584) area_bottom_pane_ParamLimits

0xb584,	// (0x0000b584) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xccc4,	// (0x0000ccc4) battery_pane_ParamLimits

0xccc4,	// (0x0000ccc4) battery_pane

0x4143,	// (0x00004143) bg_status_flat_pane_g8

0x414b,	// (0x0000414b) bg_status_flat_pane_g9

0x328d,	// (0x0000328d) context_pane_ParamLimits

0x328d,	// (0x0000328d) context_pane

0xce2f,	// (0x0000ce2f) navi_pane_ParamLimits

0xce2f,	// (0x0000ce2f) navi_pane

0xcead,	// (0x0000cead) signal_pane_ParamLimits

0xcead,	// (0x0000cead) signal_pane

0x0008,

0xaeab,	// (0x0000aeab) bg_status_flat_pane_g

0xcf3d,	// (0x0000cf3d) status_pane_g1_ParamLimits

0xcf3d,	// (0x0000cf3d) status_pane_g1

0xcf53,	// (0x0000cf53) status_pane_g2_ParamLimits

0xcf53,	// (0x0000cf53) status_pane_g2

0x34b4,	// (0x000034b4) status_pane_g3_ParamLimits

0x34b4,	// (0x000034b4) status_pane_g3

0x0004,

0xf571,	// (0x0000f571) status_pane_g_ParamLimits

0xf571,	// (0x0000f571) status_pane_g

0xcf5f,	// (0x0000cf5f) title_pane_ParamLimits

0xcf5f,	// (0x0000cf5f) title_pane

0xcfc2,	// (0x0000cfc2) uni_indicator_pane_ParamLimits

0xcfc2,	// (0x0000cfc2) uni_indicator_pane

0x2b26,	// (0x00002b26) bg_list_pane_ParamLimits

0x2b26,	// (0x00002b26) bg_list_pane

0xc56b,	// (0x0000c56b) find_pane

0xc573,	// (0x0000c573) listscroll_app_pane_ParamLimits

0xc573,	// (0x0000c573) listscroll_app_pane

0x2b5a,	// (0x00002b5a) listscroll_form_pane

0xc583,	// (0x0000c583) listscroll_gen_pane_ParamLimits

0xc583,	// (0x0000c583) listscroll_gen_pane

0x2b76,	// (0x00002b76) listscroll_set_pane

0x4f19,	// (0x00004f19) main_idle_act_pane

0x2619,	// (0x00002619) main_idle_trad_pane

0x2619,	// (0x00002619) main_list_empty_pane

0x2b90,	// (0x00002b90) main_midp_pane

0x2b9c,	// (0x00002b9c) main_pane_g1_ParamLimits

0x2b9c,	// (0x00002b9c) main_pane_g1

0xc597,	// (0x0000c597) popup_ai_message_window_ParamLimits

0xc597,	// (0x0000c597) popup_ai_message_window

0xc628,	// (0x0000c628) popup_fep_china_uni_window_ParamLimits

0xc628,	// (0x0000c628) popup_fep_china_uni_window

0x2cb4,	// (0x00002cb4) popup_fep_japan_candidate_window_ParamLimits

0x2cb4,	// (0x00002cb4) popup_fep_japan_candidate_window

0x2cd4,	// (0x00002cd4) popup_fep_japan_predictive_window_ParamLimits

0x2cd4,	// (0x00002cd4) popup_fep_japan_predictive_window

0xc684,	// (0x0000c684) popup_find_window

0xc6a1,	// (0x0000c6a1) popup_grid_graphic_window_ParamLimits

0xc6a1,	// (0x0000c6a1) popup_grid_graphic_window

0x2d3b,	// (0x00002d3b) popup_large_graphic_colour_window

0xc73f,	// (0x0000c73f) popup_menu_window_ParamLimits

0xc73f,	// (0x0000c73f) popup_menu_window

0xc911,	// (0x0000c911) popup_note_image_window

0xc8d7,	// (0x0000c8d7) popup_note_wait_window_ParamLimits

0xc8d7,	// (0x0000c8d7) popup_note_wait_window

0xc929,	// (0x0000c929) popup_note_window_ParamLimits

0xc929,	// (0x0000c929) popup_note_window

0xc9cf,	// (0x0000c9cf) popup_query_code_window_ParamLimits

0xc9cf,	// (0x0000c9cf) popup_query_code_window

0x2f83,	// (0x00002f83) popup_query_data_code_window_ParamLimits

0x2f83,	// (0x00002f83) popup_query_data_code_window

0xca09,	// (0x0000ca09) popup_query_data_window_ParamLimits

0xca09,	// (0x0000ca09) popup_query_data_window

0xca8b,	// (0x0000ca8b) popup_query_sat_info_window_ParamLimits

0xca8b,	// (0x0000ca8b) popup_query_sat_info_window

0xcb22,	// (0x0000cb22) popup_snote_single_graphic_window_ParamLimits

0xcb22,	// (0x0000cb22) popup_snote_single_graphic_window

0xcb22,	// (0x0000cb22) popup_snote_single_text_window_ParamLimits

0xcb22,	// (0x0000cb22) popup_snote_single_text_window

0x300a,	// (0x0000300a) popup_sub_window_general

0x313a,	// (0x0000313a) popup_window_general_ParamLimits

0x313a,	// (0x0000313a) popup_window_general

0x314f,	// (0x0000314f) power_save_pane

0xc3d3,	// (0x0000c3d3) control_pane_g1_ParamLimits

0xc3d3,	// (0x0000c3d3) control_pane_g1

0xc3fc,	// (0x0000c3fc) control_pane_g2_ParamLimits

0xc3fc,	// (0x0000c3fc) control_pane_g2

0x29cb,	// (0x000029cb) control_pane_g3_ParamLimits

0x29cb,	// (0x000029cb) control_pane_g3

0x0007,

0xf559,	// (0x0000f559) control_pane_g_ParamLimits

0xf559,	// (0x0000f559) control_pane_g

0xc464,	// (0x0000c464) control_pane_t1_ParamLimits

0xc464,	// (0x0000c464) control_pane_t1

0xc4c2,	// (0x0000c4c2) control_pane_t2_ParamLimits

0xc4c2,	// (0x0000c4c2) control_pane_t2

0x0002,

0xf56a,	// (0x0000f56a) control_pane_t_ParamLimits

0xf56a,	// (0x0000f56a) control_pane_t

0xc32c,	// (0x0000c32c) navi_navi_volume_pane_cp1

0xc334,	// (0x0000c334) status_small_icon_pane

0x28b2,	// (0x000028b2) status_small_pane_g1_ParamLimits

0x28b2,	// (0x000028b2) status_small_pane_g1

0xc33c,	// (0x0000c33c) status_small_pane_g2_ParamLimits

0xc33c,	// (0x0000c33c) status_small_pane_g2

0xc348,	// (0x0000c348) status_small_pane_g3_ParamLimits

0xc348,	// (0x0000c348) status_small_pane_g3

0xc354,	// (0x0000c354) status_small_pane_g4_ParamLimits

0xc354,	// (0x0000c354) status_small_pane_g4

0xc360,	// (0x0000c360) status_small_pane_g5_ParamLimits

0xc360,	// (0x0000c360) status_small_pane_g5

0xc36e,	// (0x0000c36e) status_small_pane_g6_ParamLimits

0xc36e,	// (0x0000c36e) status_small_pane_g6

0x0007,

0xf548,	// (0x0000f548) status_small_pane_g_ParamLimits

0xf548,	// (0x0000f548) status_small_pane_g

0xc39d,	// (0x0000c39d) status_small_pane_t1

0xc3bf,	// (0x0000c3bf) status_small_wait_pane_ParamLimits

0xc3bf,	// (0x0000c3bf) status_small_wait_pane

0xc142,	// (0x0000c142) aid_levels_signal_ParamLimits

0xc142,	// (0x0000c142) aid_levels_signal

0xc15a,	// (0x0000c15a) signal_pane_g1_ParamLimits

0xc15a,	// (0x0000c15a) signal_pane_g1

0xc175,	// (0x0000c175) signal_pane_g2_ParamLimits

0xc175,	// (0x0000c175) signal_pane_g2

0x0003,

0xf523,	// (0x0000f523) signal_pane_g_ParamLimits

0xf523,	// (0x0000f523) signal_pane_g

0x1ec0,	// (0x00001ec0) context_pane_g1

0xb762,	// (0x0000b762) title_pane_g1

0xb799,	// (0x0000b799) title_pane_t1

0x04cf,	// (0x000004cf) title_pane_t2

0x04f5,	// (0x000004f5) title_pane_t3

0x0002,

0xf450,	// (0x0000f450) title_pane_t

0xcfea,	// (0x0000cfea) aid_levels_battery_ParamLimits

0xcfea,	// (0x0000cfea) aid_levels_battery

0xd006,	// (0x0000d006) battery_pane_g1_ParamLimits

0xd006,	// (0x0000d006) battery_pane_g1

0xd023,	// (0x0000d023) battery_pane_g2_ParamLimits

0xd023,	// (0x0000d023) battery_pane_g2

0x0001,

0xf57c,	// (0x0000f57c) battery_pane_g_ParamLimits

0xf57c,	// (0x0000f57c) battery_pane_g

0xd27b,	// (0x0000d27b) uni_indicator_pane_g1

0xd291,	// (0x0000d291) uni_indicator_pane_g2

0xd2a7,	// (0x0000d2a7) uni_indicator_pane_g3

0x0005,

0xf5b3,	// (0x0000f5b3) uni_indicator_pane_g

0x248b,	// (0x0000248b) navi_icon_pane_ParamLimits

0x248b,	// (0x0000248b) navi_icon_pane

0x23c9,	// (0x000023c9) navi_midp_pane

0x24a7,	// (0x000024a7) navi_navi_pane

0x24b1,	// (0x000024b1) navi_text_pane_ParamLimits

0x24b1,	// (0x000024b1) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09cf,	// (0x000009cf) status_small_wait_pane_g2

0x0001,

0xaf4e,	// (0x0000af4e) status_small_wait_pane_g

0x4902,	// (0x00004902) navi_navi_icon_text_pane

0x490a,	// (0x0000490a) navi_navi_pane_g1_ParamLimits

0x490a,	// (0x0000490a) navi_navi_pane_g1

0x491c,	// (0x0000491c) navi_navi_pane_g2_ParamLimits

0x491c,	// (0x0000491c) navi_navi_pane_g2

0x0001,

0xaf1c,	// (0x0000af1c) navi_navi_pane_g_ParamLimits

0xaf1c,	// (0x0000af1c) navi_navi_pane_g

0x492e,	// (0x0000492e) navi_navi_tabs_pane

0x4937,	// (0x00004937) navi_navi_text_pane

0x4902,	// (0x00004902) navi_navi_volume_pane

0x48de,	// (0x000048de) navi_text_pane_t1

0x48d2,	// (0x000048d2) navi_icon_pane_g1

0x4825,	// (0x00004825) navi_navi_text_pane_t1

0x4814,	// (0x00004814) navi_navi_volume_pane_g1

0x481c,	// (0x0000481c) volume_small_pane

0x477a,	// (0x0000477a) navi_navi_icon_text_pane_g1

0x4782,	// (0x00004782) navi_navi_icon_text_pane_t1

0x24a7,	// (0x000024a7) navi_tabs_2_long_pane

0x24a7,	// (0x000024a7) navi_tabs_2_pane

0x24a7,	// (0x000024a7) navi_tabs_3_long_pane

0x24a7,	// (0x000024a7) navi_tabs_3_pane

0x24a7,	// (0x000024a7) navi_tabs_4_pane

0x46d9,	// (0x000046d9) tabs_2_active_pane_ParamLimits

0x46d9,	// (0x000046d9) tabs_2_active_pane

0x46e9,	// (0x000046e9) tabs_2_passive_pane_ParamLimits

0x46e9,	// (0x000046e9) tabs_2_passive_pane

0x46a7,	// (0x000046a7) tabs_3_active_pane_ParamLimits

0x46a7,	// (0x000046a7) tabs_3_active_pane

0x46b7,	// (0x000046b7) tabs_3_passive_pane_ParamLimits

0x46b7,	// (0x000046b7) tabs_3_passive_pane

0x46c8,	// (0x000046c8) tabs_3_passive_pane_cp_ParamLimits

0x46c8,	// (0x000046c8) tabs_3_passive_pane_cp

0x4663,	// (0x00004663) tabs_4_active_pane_ParamLimits

0x4663,	// (0x00004663) tabs_4_active_pane

0x4674,	// (0x00004674) tabs_4_passive_pane_ParamLimits

0x4674,	// (0x00004674) tabs_4_passive_pane

0x4685,	// (0x00004685) tabs_4_passive_pane_cp_ParamLimits

0x4685,	// (0x00004685) tabs_4_passive_pane_cp

0x4696,	// (0x00004696) tabs_4_passive_pane_cp2_ParamLimits

0x4696,	// (0x00004696) tabs_4_passive_pane_cp2

0x463f,	// (0x0000463f) tabs_2_long_active_pane_ParamLimits

0x463f,	// (0x0000463f) tabs_2_long_active_pane

0x4651,	// (0x00004651) tabs_2_long_passive_pane_ParamLimits

0x4651,	// (0x00004651) tabs_2_long_passive_pane

0x4600,	// (0x00004600) tabs_3_long_active_pane_ParamLimits

0x4600,	// (0x00004600) tabs_3_long_active_pane

0x4613,	// (0x00004613) tabs_3_long_passive_pane_ParamLimits

0x4613,	// (0x00004613) tabs_3_long_passive_pane

0x462c,	// (0x0000462c) tabs_3_long_passive_pane_cp_ParamLimits

0x462c,	// (0x0000462c) tabs_3_long_passive_pane_cp

0x45a6,	// (0x000045a6) volume_small_pane_g1

0x45af,	// (0x000045af) volume_small_pane_g2

0x45b8,	// (0x000045b8) volume_small_pane_g3

0x45c1,	// (0x000045c1) volume_small_pane_g4

0x45ca,	// (0x000045ca) volume_small_pane_g5

0x45d3,	// (0x000045d3) volume_small_pane_g6

0x45dc,	// (0x000045dc) volume_small_pane_g7

0x45e5,	// (0x000045e5) volume_small_pane_g8

0x45ee,	// (0x000045ee) volume_small_pane_g9

0x45f7,	// (0x000045f7) volume_small_pane_g10

0x0009,

0xaee8,	// (0x0000aee8) volume_small_pane_g

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_active_pane_g1

0xb825,	// (0x0000b825) tabs_3_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_passive_pane_g1

0xb825,	// (0x0000b825) tabs_3_passive_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_active_pane_g1

0xb837,	// (0x0000b837) tabs_4_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_1_passive_pane_g1

0xb837,	// (0x0000b837) tabs_4_1_passive_pane_t1

0x2b90,	// (0x00002b90) list_highlight_pane_cp2

0xd341,	// (0x0000d341) list_set_pane_ParamLimits

0xd341,	// (0x0000d341) list_set_pane

0xd3db,	// (0x0000d3db) main_pane_set_t1_ParamLimits

0xd3db,	// (0x0000d3db) main_pane_set_t1

0xd3fb,	// (0x0000d3fb) main_pane_set_t2_ParamLimits

0xd3fb,	// (0x0000d3fb) main_pane_set_t2

0xd40f,	// (0x0000d40f) main_pane_set_t3_ParamLimits

0xd40f,	// (0x0000d40f) main_pane_set_t3

0xd421,	// (0x0000d421) main_pane_set_t4_ParamLimits

0xd421,	// (0x0000d421) main_pane_set_t4

0x0003,

0xf5c5,	// (0x0000f5c5) main_pane_set_t_ParamLimits

0xf5c5,	// (0x0000f5c5) main_pane_set_t

0xd433,	// (0x0000d433) setting_code_pane

0xd43d,	// (0x0000d43d) setting_slider_graphic_pane

0xd43d,	// (0x0000d43d) setting_slider_pane

0xd43d,	// (0x0000d43d) setting_text_pane

0xd43d,	// (0x0000d43d) setting_volume_pane

0x0549,	// (0x00000549) volume_set_pane

0x0507,	// (0x00000507) bg_set_opt_pane_cp

0x0551,	// (0x00000551) setting_slider_pane_t1

0x056a,	// (0x0000056a) setting_slider_pane_t2

0x0584,	// (0x00000584) setting_slider_pane_t3

0x0002,

0xab9c,	// (0x0000ab9c) setting_slider_pane_t

0x059c,	// (0x0000059c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_g1

0x05bb,	// (0x000005bb) setting_slider_graphic_pane_t1

0x05cb,	// (0x000005cb) setting_slider_graphic_pane_t2

0x0001,

0xaba3,	// (0x0000aba3) setting_slider_graphic_pane_t

0x05db,	// (0x000005db) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4f00,	// (0x00004f00) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05e3,	// (0x000005e3) setting_code_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_ParamLimits

0x05f1,	// (0x000005f1) set_text_pane_t1

0x14c5,	// (0x000014c5) set_opt_bg_pane_g1

0x14cd,	// (0x000014cd) set_opt_bg_pane_g2

0x4eda,	// (0x00004eda) set_opt_bg_pane_g3

0x14dd,	// (0x000014dd) set_opt_bg_pane_g4

0x14e5,	// (0x000014e5) set_opt_bg_pane_g5

0x14ed,	// (0x000014ed) set_opt_bg_pane_g6

0x4ee4,	// (0x00004ee4) set_opt_bg_pane_g7

0x4eec,	// (0x00004eec) set_opt_bg_pane_g8

0x4ef6,	// (0x00004ef6) set_opt_bg_pane_g9

0x0008,

0xafa5,	// (0x0000afa5) set_opt_bg_pane_g

0x4e69,	// (0x00004e69) slider_set_pane_g1

0x4e76,	// (0x00004e76) slider_set_pane_g2

0x0006,

0xaf96,	// (0x0000af96) slider_set_pane_g

0x4ce9,	// (0x00004ce9) volume_set_pane_g1

0x4cf1,	// (0x00004cf1) volume_set_pane_g2

0x4cf9,	// (0x00004cf9) volume_set_pane_g3

0x4d01,	// (0x00004d01) volume_set_pane_g4

0x4d09,	// (0x00004d09) volume_set_pane_g5

0x4d11,	// (0x00004d11) volume_set_pane_g6

0x4d19,	// (0x00004d19) volume_set_pane_g7

0x4d21,	// (0x00004d21) volume_set_pane_g8

0x4d29,	// (0x00004d29) volume_set_pane_g9

0x4d31,	// (0x00004d31) volume_set_pane_g10

0x0009,

0xaf6e,	// (0x0000af6e) volume_set_pane_g

0xb849,	// (0x0000b849) indicator_pane_ParamLimits

0xb849,	// (0x0000b849) indicator_pane

0xb871,	// (0x0000b871) main_idle_pane_g2_ParamLimits

0xb871,	// (0x0000b871) main_idle_pane_g2

0xb8a9,	// (0x0000b8a9) main_pane_idle_g1_ParamLimits

0xb8a9,	// (0x0000b8a9) main_pane_idle_g1

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window_ParamLimits

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window

0xb8d0,	// (0x0000b8d0) soft_indicator_pane_ParamLimits

0xb8d0,	// (0x0000b8d0) soft_indicator_pane

0xb8ea,	// (0x0000b8ea) wallpaper_pane_ParamLimits

0xb8ea,	// (0x0000b8ea) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb8fc,	// (0x0000b8fc) indicator_pane_g1_ParamLimits

0xb8fc,	// (0x0000b8fc) indicator_pane_g1

0x5468,	// (0x00005468) navi_navi_icon_text_pane_srt_g1

0x069e,	// (0x0000069e) soft_indicator_pane_t1

0x06b8,	// (0x000006b8) aid_ps_area_pane

0xb912,	// (0x0000b912) aid_ps_clock_pane

0x06d7,	// (0x000006d7) aid_ps_indicator_pane

0x06e3,	// (0x000006e3) indicator_ps_pane_ParamLimits

0x06e3,	// (0x000006e3) indicator_ps_pane

0x06f2,	// (0x000006f2) power_save_pane_g1_ParamLimits

0x06f2,	// (0x000006f2) power_save_pane_g1

0x06fe,	// (0x000006fe) power_save_pane_g2_ParamLimits

0x06fe,	// (0x000006fe) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06b8,	// (0x000006b8) aid_ps_area_pane_ParamLimits

0x0001,

0xaba8,	// (0x0000aba8) power_save_pane_g_ParamLimits

0xaba8,	// (0x0000aba8) power_save_pane_g

0x070c,	// (0x0000070c) power_save_pane_t1_ParamLimits

0x070c,	// (0x0000070c) power_save_pane_t1

0xb912,	// (0x0000b912) aid_ps_clock_pane_ParamLimits

0x06d7,	// (0x000006d7) aid_ps_indicator_pane_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4

0x0001,

0xabad,	// (0x0000abad) power_save_pane_t_ParamLimits

0xabad,	// (0x0000abad) power_save_pane_t

0x0748,	// (0x00000748) power_save_t3_ParamLimits

0x0748,	// (0x00000748) power_save_t3

0x0733,	// (0x00000733) power_save_t2_ParamLimits

0x0733,	// (0x00000733) power_save_t2

0x075d,	// (0x0000075d) indicator_ps_pane_g1

0xb920,	// (0x0000b920) ai_gene_pane_ParamLimits

0xb920,	// (0x0000b920) ai_gene_pane

0xb937,	// (0x0000b937) ai_links_pane_ParamLimits

0xb937,	// (0x0000b937) ai_links_pane

0xb94f,	// (0x0000b94f) indicator_pane_cp1_ParamLimits

0xb94f,	// (0x0000b94f) indicator_pane_cp1

0xb95e,	// (0x0000b95e) main_pane_idle_g1_cp_ParamLimits

0xb95e,	// (0x0000b95e) main_pane_idle_g1_cp

0x0796,	// (0x00000796) popup_ai_links_title_window

0xb976,	// (0x0000b976) soft_indicator_pane_cp1_ParamLimits

0xb976,	// (0x0000b976) soft_indicator_pane_cp1

0x4bcb,	// (0x00004bcb) ai_links_pane_g1

0x4bd4,	// (0x00004bd4) grid_ai_links_pane

0xd272,	// (0x0000d272) ai_gene_pane_1

0x4bb9,	// (0x00004bb9) ai_gene_pane_2

0x4bc2,	// (0x00004bc2) list_highlight_pane_cp4

0xd24e,	// (0x0000d24e) cell_ai_link_pane_ParamLimits

0xd24e,	// (0x0000d24e) cell_ai_link_pane

0x4b8a,	// (0x00004b8a) cell_ai_link_pane_g1

0x09cf,	// (0x000009cf) cell_ai_link_pane_g2

0x0001,

0xaf49,	// (0x0000af49) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07b9,	// (0x000007b9) popup_ai_links_title_window_t1

0x4ad8,	// (0x00004ad8) ai_gene_pane_1_g1_ParamLimits

0x4ad8,	// (0x00004ad8) ai_gene_pane_1_g1

0x4ae4,	// (0x00004ae4) ai_gene_pane_1_g2_ParamLimits

0x4ae4,	// (0x00004ae4) ai_gene_pane_1_g2

0x0001,

0xaf3f,	// (0x0000af3f) ai_gene_pane_1_g_ParamLimits

0xaf3f,	// (0x0000af3f) ai_gene_pane_1_g

0x4af1,	// (0x00004af1) ai_gene_pane_1_t1_ParamLimits

0x4af1,	// (0x00004af1) ai_gene_pane_1_t1

0x4b25,	// (0x00004b25) grid_ai_soft_ind_pane

0x4ac3,	// (0x00004ac3) ai_gene_pane_2_t1_ParamLimits

0x4ac3,	// (0x00004ac3) ai_gene_pane_2_t1

0xb98a,	// (0x0000b98a) main_pane_empty_t1_ParamLimits

0xb98a,	// (0x0000b98a) main_pane_empty_t1

0xb9a2,	// (0x0000b9a2) main_pane_empty_t2_ParamLimits

0xb9a2,	// (0x0000b9a2) main_pane_empty_t2

0xb9b7,	// (0x0000b9b7) main_pane_empty_t3_ParamLimits

0xb9b7,	// (0x0000b9b7) main_pane_empty_t3

0xb9c9,	// (0x0000b9c9) main_pane_empty_t4_ParamLimits

0xb9c9,	// (0x0000b9c9) main_pane_empty_t4

0xb9db,	// (0x0000b9db) main_pane_empty_t5_ParamLimits

0xb9db,	// (0x0000b9db) main_pane_empty_t5

0x0004,

0xf457,	// (0x0000f457) main_pane_empty_t_ParamLimits

0xf457,	// (0x0000f457) main_pane_empty_t

0x15c2,	// (0x000015c2) bg_popup_window_pane_ParamLimits

0x15c2,	// (0x000015c2) bg_popup_window_pane

0x4833,	// (0x00004833) find_popup_pane_cp2_ParamLimits

0x4833,	// (0x00004833) find_popup_pane_cp2

0x483f,	// (0x0000483f) heading_pane_ParamLimits

0x483f,	// (0x0000483f) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd1cf,	// (0x0000d1cf) bg_popup_window_pane_g1_ParamLimits

0xd1cf,	// (0x0000d1cf) bg_popup_window_pane_g1

0xd1de,	// (0x0000d1de) bg_popup_window_pane_g2_ParamLimits

0xd1de,	// (0x0000d1de) bg_popup_window_pane_g2

0xd1ea,	// (0x0000d1ea) bg_popup_window_pane_g3_ParamLimits

0xd1ea,	// (0x0000d1ea) bg_popup_window_pane_g3

0xd1f6,	// (0x0000d1f6) bg_popup_window_pane_g4_ParamLimits

0xd1f6,	// (0x0000d1f6) bg_popup_window_pane_g4

0xd205,	// (0x0000d205) bg_popup_window_pane_g5_ParamLimits

0xd205,	// (0x0000d205) bg_popup_window_pane_g5

0xd215,	// (0x0000d215) bg_popup_window_pane_g6_ParamLimits

0xd215,	// (0x0000d215) bg_popup_window_pane_g6

0xd221,	// (0x0000d221) bg_popup_window_pane_g7_ParamLimits

0xd221,	// (0x0000d221) bg_popup_window_pane_g7

0xd230,	// (0x0000d230) bg_popup_window_pane_g8_ParamLimits

0xd230,	// (0x0000d230) bg_popup_window_pane_g8

0xd23f,	// (0x0000d23f) bg_popup_window_pane_g9_ParamLimits

0xd23f,	// (0x0000d23f) bg_popup_window_pane_g9

0x4808,	// (0x00004808) bg_popup_window_pane_g10_ParamLimits

0x4808,	// (0x00004808) bg_popup_window_pane_g10

0x0009,

0xf59e,	// (0x0000f59e) bg_popup_window_pane_g_ParamLimits

0xf59e,	// (0x0000f59e) bg_popup_window_pane_g

0x4731,	// (0x00004731) bg_popup_heading_pane_ParamLimits

0x4731,	// (0x00004731) bg_popup_heading_pane

0x53ab,	// (0x000053ab) tabs_4_passive_pane_cp_srt_ParamLimits

0x53ab,	// (0x000053ab) tabs_4_passive_pane_cp_srt

0x53bd,	// (0x000053bd) tabs_4_passive_pane_srt_ParamLimits

0x4745,	// (0x00004745) heading_pane_g2

0x53bd,	// (0x000053bd) tabs_4_passive_pane_srt

0x389f,	// (0x0000389f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x389f,	// (0x0000389f) bg_passive_tab_pane_cp3_srt

0x474d,	// (0x0000474d) heading_pane_t1_ParamLimits

0x474d,	// (0x0000474d) heading_pane_t1

0x4764,	// (0x00004764) heading_pane_t2_ParamLimits

0x4764,	// (0x00004764) heading_pane_t2

0x0001,

0xaf02,	// (0x0000af02) heading_pane_t_ParamLimits

0xaf02,	// (0x0000af02) heading_pane_t

0x410b,	// (0x0000410b) bg_popup_heading_pane_g1

0x41ba,	// (0x000041ba) bg_popup_heading_pane_g2

0x41c4,	// (0x000041c4) bg_popup_heading_pane_g3

0x41ce,	// (0x000041ce) bg_popup_heading_pane_g4

0x41d8,	// (0x000041d8) bg_popup_heading_pane_g5

0x41e2,	// (0x000041e2) bg_popup_heading_pane_g6

0x41ea,	// (0x000041ea) bg_popup_heading_pane_g7

0x41f2,	// (0x000041f2) bg_popup_heading_pane_g8

0x41fc,	// (0x000041fc) bg_popup_heading_pane_g9

0x0008,

0xaebe,	// (0x0000aebe) bg_popup_heading_pane_g

0x36e5,	// (0x000036e5) bg_popup_sub_pane_g1

0x36ed,	// (0x000036ed) bg_popup_sub_pane_g2

0x36f5,	// (0x000036f5) bg_popup_sub_pane_g3

0x36fd,	// (0x000036fd) bg_popup_sub_pane_g4

0x3705,	// (0x00003705) bg_popup_sub_pane_g5

0x370d,	// (0x0000370d) bg_popup_sub_pane_g6

0x3715,	// (0x00003715) bg_popup_sub_pane_g7

0x371d,	// (0x0000371d) bg_popup_sub_pane_g8

0x3725,	// (0x00003725) bg_popup_sub_pane_g9

0x0008,

0xae98,	// (0x0000ae98) bg_popup_sub_pane_g

0x082d,	// (0x0000082d) bg_popup_window_pane_cp5_ParamLimits

0x082d,	// (0x0000082d) bg_popup_window_pane_cp5

0x0849,	// (0x00000849) popup_note_window_g1_ParamLimits

0x0849,	// (0x00000849) popup_note_window_g1

0x0855,	// (0x00000855) popup_note_window_t1_ParamLimits

0x0855,	// (0x00000855) popup_note_window_t1

0x086b,	// (0x0000086b) popup_note_window_t2_ParamLimits

0x086b,	// (0x0000086b) popup_note_window_t2

0x0881,	// (0x00000881) popup_note_window_t3_ParamLimits

0x0881,	// (0x00000881) popup_note_window_t3

0x0897,	// (0x00000897) popup_note_window_t4_ParamLimits

0x0897,	// (0x00000897) popup_note_window_t4

0x08bf,	// (0x000008bf) popup_note_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note_window_t5

0x0004,

0xabbd,	// (0x0000abbd) popup_note_window_t_ParamLimits

0xabbd,	// (0x0000abbd) popup_note_window_t

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp6_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp6

0x4087,	// (0x00004087) popup_note_image_window_g1_ParamLimits

0x4087,	// (0x00004087) popup_note_image_window_g1

0x4093,	// (0x00004093) popup_note_image_window_g2_ParamLimits

0x4093,	// (0x00004093) popup_note_image_window_g2

0x0001,

0xae8c,	// (0x0000ae8c) popup_note_image_window_g_ParamLimits

0xae8c,	// (0x0000ae8c) popup_note_image_window_g

0x40ac,	// (0x000040ac) popup_note_image_window_t1_ParamLimits

0x40ac,	// (0x000040ac) popup_note_image_window_t1

0x40c5,	// (0x000040c5) popup_note_image_window_t2_ParamLimits

0x40c5,	// (0x000040c5) popup_note_image_window_t2

0x40de,	// (0x000040de) popup_note_image_window_t3_ParamLimits

0x40de,	// (0x000040de) popup_note_image_window_t3

0x0002,

0xae91,	// (0x0000ae91) popup_note_image_window_t_ParamLimits

0xae91,	// (0x0000ae91) popup_note_image_window_t

0x3f48,	// (0x00003f48) bg_popup_window_pane_cp7_ParamLimits

0x3f48,	// (0x00003f48) bg_popup_window_pane_cp7

0x3f78,	// (0x00003f78) popup_note_wait_window_g1_ParamLimits

0x3f78,	// (0x00003f78) popup_note_wait_window_g1

0x3f84,	// (0x00003f84) popup_note_wait_window_g2_ParamLimits

0x3f84,	// (0x00003f84) popup_note_wait_window_g2

0x0002,

0xae7a,	// (0x0000ae7a) popup_note_wait_window_g_ParamLimits

0xae7a,	// (0x0000ae7a) popup_note_wait_window_g

0x3f9c,	// (0x00003f9c) popup_note_wait_window_t1_ParamLimits

0x3f9c,	// (0x00003f9c) popup_note_wait_window_t1

0x3fc3,	// (0x00003fc3) popup_note_wait_window_t2_ParamLimits

0x3fc3,	// (0x00003fc3) popup_note_wait_window_t2

0x3fe0,	// (0x00003fe0) popup_note_wait_window_t3_ParamLimits

0x3fe0,	// (0x00003fe0) popup_note_wait_window_t3

0x3ff3,	// (0x00003ff3) popup_note_wait_window_t4_ParamLimits

0x3ff3,	// (0x00003ff3) popup_note_wait_window_t4

0x0004,

0xae81,	// (0x0000ae81) popup_note_wait_window_t_ParamLimits

0xae81,	// (0x0000ae81) popup_note_wait_window_t

0x4018,	// (0x00004018) wait_bar_pane_ParamLimits

0x4018,	// (0x00004018) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xad3c,	// (0x0000ad3c) wait_anim_pane_g

0x3eec,	// (0x00003eec) wait_border_pane_g1

0x3ef7,	// (0x00003ef7) wait_border_pane_g2

0x3f00,	// (0x00003f00) wait_border_pane_g3

0x0002,

0xae73,	// (0x0000ae73) wait_border_pane_g

0x3d57,	// (0x00003d57) bg_popup_window_pane_cp16_ParamLimits

0x3d57,	// (0x00003d57) bg_popup_window_pane_cp16

0x3e57,	// (0x00003e57) indicator_popup_pane_cp4_ParamLimits

0x3e57,	// (0x00003e57) indicator_popup_pane_cp4

0x3e6b,	// (0x00003e6b) popup_query_data_window_t1_ParamLimits

0x3e6b,	// (0x00003e6b) popup_query_data_window_t1

0x3e7d,	// (0x00003e7d) popup_query_data_window_t2_ParamLimits

0x3e7d,	// (0x00003e7d) popup_query_data_window_t2

0x3e96,	// (0x00003e96) popup_query_data_window_t3_ParamLimits

0x3e96,	// (0x00003e96) popup_query_data_window_t3

0x0002,

0xae6c,	// (0x0000ae6c) popup_query_data_window_t_ParamLimits

0xae6c,	// (0x0000ae6c) popup_query_data_window_t

0x3eb0,	// (0x00003eb0) query_popup_data_pane_ParamLimits

0x3eb0,	// (0x00003eb0) query_popup_data_pane

0x3ec4,	// (0x00003ec4) query_popup_data_pane_cp1_ParamLimits

0x3ec4,	// (0x00003ec4) query_popup_data_pane_cp1

0x3d57,	// (0x00003d57) bg_popup_window_pane_cp10_ParamLimits

0x3d57,	// (0x00003d57) bg_popup_window_pane_cp10

0x3d89,	// (0x00003d89) indicator_popup_pane_ParamLimits

0x3d89,	// (0x00003d89) indicator_popup_pane

0x3dab,	// (0x00003dab) popup_query_code_window_t1_ParamLimits

0x3dab,	// (0x00003dab) popup_query_code_window_t1

0x3dc5,	// (0x00003dc5) popup_query_code_window_t2_ParamLimits

0x3dc5,	// (0x00003dc5) popup_query_code_window_t2

0x3e0e,	// (0x00003e0e) popup_query_code_window_t3_ParamLimits

0x3e0e,	// (0x00003e0e) popup_query_code_window_t3

0x0002,

0xae65,	// (0x0000ae65) popup_query_code_window_t_ParamLimits

0xae65,	// (0x0000ae65) popup_query_code_window_t

0x3e3d,	// (0x00003e3d) query_popup_pane_ParamLimits

0x3e3d,	// (0x00003e3d) query_popup_pane

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp15_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp15

0x0901,	// (0x00000901) indicator_popup_pane_cp1_ParamLimits

0x0901,	// (0x00000901) indicator_popup_pane_cp1

0x0914,	// (0x00000914) indicator_popup_pane_cp2_ParamLimits

0x0914,	// (0x00000914) indicator_popup_pane_cp2

0x0927,	// (0x00000927) popup_query_data_code_window_g1_ParamLimits

0x0927,	// (0x00000927) popup_query_data_code_window_g1

0x093a,	// (0x0000093a) popup_query_data_code_window_t1_ParamLimits

0x093a,	// (0x0000093a) popup_query_data_code_window_t1

0x094c,	// (0x0000094c) popup_query_data_code_window_t2_ParamLimits

0x094c,	// (0x0000094c) popup_query_data_code_window_t2

0x095e,	// (0x0000095e) popup_query_data_code_window_t3_ParamLimits

0x095e,	// (0x0000095e) popup_query_data_code_window_t3

0x0974,	// (0x00000974) popup_query_data_code_window_t4_ParamLimits

0x0974,	// (0x00000974) popup_query_data_code_window_t4

0x0003,

0xabc8,	// (0x0000abc8) popup_query_data_code_window_t_ParamLimits

0xabc8,	// (0x0000abc8) popup_query_data_code_window_t

0x3752,	// (0x00003752) list_single_midp_graphic_pane_g3

0x098c,	// (0x0000098c) query_popup_data_pane_cp2_ParamLimits

0x099f,	// (0x0000099f) query_popup_pane_cp2_ParamLimits

0x099f,	// (0x0000099f) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3d4f,	// (0x00003d4f) heading_pane_cp5

0x0a8a,	// (0x00000a8a) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09b2,	// (0x000009b2) query_popup_pane_t1

0x09c0,	// (0x000009c0) list_popup_info_pane_ParamLimits

0x09c0,	// (0x000009c0) list_popup_info_pane

0x09cf,	// (0x000009cf) listscroll_popup_info_pane_g1

0x09d7,	// (0x000009d7) scroll_pane_cp7

0x09e1,	// (0x000009e1) popup_info_list_pane_t1_ParamLimits

0x09e1,	// (0x000009e1) popup_info_list_pane_t1

0x09fb,	// (0x000009fb) popup_info_list_pane_t2_ParamLimits

0x09fb,	// (0x000009fb) popup_info_list_pane_t2

0x0001,

0xabd1,	// (0x0000abd1) popup_info_list_pane_t_ParamLimits

0xabd1,	// (0x0000abd1) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x549f,	// (0x0000549f) find_popup_pane

0x0507,	// (0x00000507) bg_popup_window_pane_cp3

0x0a15,	// (0x00000a15) heading_pane_cp3

0x0a21,	// (0x00000a21) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xba3d,	// (0x0000ba3d) heading_pane_cp4

0x0a8a,	// (0x00000a8a) listscroll_popup_colour_pane

0x0a92,	// (0x00000a92) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a92,	// (0x00000a92) cell_large_graphic_colour_none_popup_pane

0xba45,	// (0x0000ba45) grid_large_graphic_colour_popup_pane_ParamLimits

0xba45,	// (0x0000ba45) grid_large_graphic_colour_popup_pane

0x0ad2,	// (0x00000ad2) listscroll_popup_colour_pane_g1_ParamLimits

0x0ad2,	// (0x00000ad2) listscroll_popup_colour_pane_g1

0x0ae9,	// (0x00000ae9) listscroll_popup_colour_pane_g2_ParamLimits

0x0ae9,	// (0x00000ae9) listscroll_popup_colour_pane_g2

0x0b00,	// (0x00000b00) listscroll_popup_colour_pane_g3_ParamLimits

0x0b00,	// (0x00000b00) listscroll_popup_colour_pane_g3

0xba69,	// (0x0000ba69) listscroll_popup_colour_pane_g4_ParamLimits

0xba69,	// (0x0000ba69) listscroll_popup_colour_pane_g4

0x0003,

0xf462,	// (0x0000f462) listscroll_popup_colour_pane_g_ParamLimits

0xf462,	// (0x0000f462) listscroll_popup_colour_pane_g

0x0b24,	// (0x00000b24) scroll_pane_cp6_ParamLimits

0x0b24,	// (0x00000b24) scroll_pane_cp6

0xba79,	// (0x0000ba79) cell_large_graphic_colour_popup_pane_ParamLimits

0xba79,	// (0x0000ba79) cell_large_graphic_colour_popup_pane

0x0b55,	// (0x00000b55) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b64,	// (0x00000b64) cell_large_graphic_colour_popup_pane_g1

0x0b6c,	// (0x00000b6c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xabdf,	// (0x0000abdf) cell_large_graphic_colour_popup_pane_g

0x0b74,	// (0x00000b74) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp4

0x0b85,	// (0x00000b85) bg_popup_window_pane_cp8_ParamLimits

0x0b85,	// (0x00000b85) bg_popup_window_pane_cp8

0x0ba0,	// (0x00000ba0) popup_snote_single_text_window_g1_ParamLimits

0x0ba0,	// (0x00000ba0) popup_snote_single_text_window_g1

0x0bb2,	// (0x00000bb2) popup_snote_single_text_window_t1_ParamLimits

0x0bb2,	// (0x00000bb2) popup_snote_single_text_window_t1

0x0bc5,	// (0x00000bc5) popup_snote_single_text_window_t2_ParamLimits

0x0bc5,	// (0x00000bc5) popup_snote_single_text_window_t2

0x0bd8,	// (0x00000bd8) popup_snote_single_text_window_t3_ParamLimits

0x0bd8,	// (0x00000bd8) popup_snote_single_text_window_t3

0x0c11,	// (0x00000c11) popup_snote_single_text_window_t4_ParamLimits

0x0c11,	// (0x00000c11) popup_snote_single_text_window_t4

0x0c45,	// (0x00000c45) popup_snote_single_text_window_t5_ParamLimits

0x0c45,	// (0x00000c45) popup_snote_single_text_window_t5

0x0004,

0xabe4,	// (0x0000abe4) popup_snote_single_text_window_t_ParamLimits

0xabe4,	// (0x0000abe4) popup_snote_single_text_window_t

0x0c74,	// (0x00000c74) bg_popup_window_pane_cp9_ParamLimits

0x0c74,	// (0x00000c74) bg_popup_window_pane_cp9

0x0ba0,	// (0x00000ba0) popup_snote_single_graphic_window_g1_ParamLimits

0x0ba0,	// (0x00000ba0) popup_snote_single_graphic_window_g1

0x0c82,	// (0x00000c82) popup_snote_single_graphic_window_g2_ParamLimits

0x0c82,	// (0x00000c82) popup_snote_single_graphic_window_g2

0x0001,

0xabef,	// (0x0000abef) popup_snote_single_graphic_window_g_ParamLimits

0xabef,	// (0x0000abef) popup_snote_single_graphic_window_g

0x0c8e,	// (0x00000c8e) popup_snote_single_graphic_window_t1_ParamLimits

0x0c8e,	// (0x00000c8e) popup_snote_single_graphic_window_t1

0x0ca1,	// (0x00000ca1) popup_snote_single_graphic_window_t2_ParamLimits

0x0ca1,	// (0x00000ca1) popup_snote_single_graphic_window_t2

0x0cb4,	// (0x00000cb4) popup_snote_single_graphic_window_t3_ParamLimits

0x0cb4,	// (0x00000cb4) popup_snote_single_graphic_window_t3

0x0ced,	// (0x00000ced) popup_snote_single_graphic_window_t4_ParamLimits

0x0ced,	// (0x00000ced) popup_snote_single_graphic_window_t4

0x0d21,	// (0x00000d21) popup_snote_single_graphic_window_t5_ParamLimits

0x0d21,	// (0x00000d21) popup_snote_single_graphic_window_t5

0x0004,

0xabf4,	// (0x0000abf4) popup_snote_single_graphic_window_t_ParamLimits

0xabf4,	// (0x0000abf4) popup_snote_single_graphic_window_t

0x532b,	// (0x0000532b) grid_graphic_popup_pane_ParamLimits

0x532b,	// (0x0000532b) grid_graphic_popup_pane

0x5353,	// (0x00005353) listscroll_popup_graphic_pane_g1_ParamLimits

0x5353,	// (0x00005353) listscroll_popup_graphic_pane_g1

0xd573,	// (0x0000d573) listscroll_popup_graphic_pane_g2_ParamLimits

0xd573,	// (0x0000d573) listscroll_popup_graphic_pane_g2

0x0001,

0xf5e8,	// (0x0000f5e8) listscroll_popup_graphic_pane_g_ParamLimits

0xf5e8,	// (0x0000f5e8) listscroll_popup_graphic_pane_g

0x537b,	// (0x0000537b) scroll_pane_cp5

0xd52f,	// (0x0000d52f) cell_graphic_popup_pane_ParamLimits

0xd52f,	// (0x0000d52f) cell_graphic_popup_pane

0x52a9,	// (0x000052a9) cell_graphic_popup_pane_g1

0x52b1,	// (0x000052b1) cell_graphic_popup_pane_g2

0x0b74,	// (0x00000b74) cell_graphic_popup_pane_g3

0x0002,

0xafdb,	// (0x0000afdb) cell_graphic_popup_pane_g

0x52ba,	// (0x000052ba) cell_graphic_popup_pane_t2

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp3

0x0d62,	// (0x00000d62) list_gen_pane_ParamLimits

0x0d62,	// (0x00000d62) list_gen_pane

0x0d94,	// (0x00000d94) scroll_pane

0xd4e6,	// (0x0000d4e6) bg_list_pane_g1_ParamLimits

0xd4e6,	// (0x0000d4e6) bg_list_pane_g1

0x521e,	// (0x0000521e) bg_list_pane_g2_ParamLimits

0x521e,	// (0x0000521e) bg_list_pane_g2

0x5233,	// (0x00005233) bg_list_pane_g3_ParamLimits

0x5233,	// (0x00005233) bg_list_pane_g3

0x5247,	// (0x00005247) bg_list_pane_g4_ParamLimits

0x5247,	// (0x00005247) bg_list_pane_g4

0xd503,	// (0x0000d503) bg_list_pane_g5_ParamLimits

0xd503,	// (0x0000d503) bg_list_pane_g5

0x0004,

0xf5dd,	// (0x0000f5dd) bg_list_pane_g_ParamLimits

0xf5dd,	// (0x0000f5dd) bg_list_pane_g

0xd48c,	// (0x0000d48c) list_double2_graphic_large_graphic_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_double2_graphic_large_graphic_pane

0xd48c,	// (0x0000d48c) list_double2_graphic_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_double2_graphic_pane

0xd48c,	// (0x0000d48c) list_double2_large_graphic_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_double2_large_graphic_pane

0xd48c,	// (0x0000d48c) list_double2_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_double2_pane

0xd48c,	// (0x0000d48c) list_double_graphic_heading_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_double_graphic_heading_pane

0xd48c,	// (0x0000d48c) list_double_graphic_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_double_graphic_pane

0xd48c,	// (0x0000d48c) list_double_heading_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_double_heading_pane

0xd48c,	// (0x0000d48c) list_double_large_graphic_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_double_large_graphic_pane

0xd48c,	// (0x0000d48c) list_double_number_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_double_number_pane

0xd48c,	// (0x0000d48c) list_double_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_double_pane

0xd48c,	// (0x0000d48c) list_double_time_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_double_time_pane

0xd48c,	// (0x0000d48c) list_setting_number_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_setting_number_pane

0xd48c,	// (0x0000d48c) list_setting_pane_ParamLimits

0xd48c,	// (0x0000d48c) list_setting_pane

0xd49e,	// (0x0000d49e) list_single_2graphic_pane_ParamLimits

0xd49e,	// (0x0000d49e) list_single_2graphic_pane

0xd49e,	// (0x0000d49e) list_single_graphic_heading_pane_ParamLimits

0xd49e,	// (0x0000d49e) list_single_graphic_heading_pane

0xd49e,	// (0x0000d49e) list_single_graphic_pane_ParamLimits

0xd49e,	// (0x0000d49e) list_single_graphic_pane

0xd49e,	// (0x0000d49e) list_single_heading_pane_ParamLimits

0xd49e,	// (0x0000d49e) list_single_heading_pane

0xd49e,	// (0x0000d49e) list_single_large_graphic_pane_ParamLimits

0xd49e,	// (0x0000d49e) list_single_large_graphic_pane

0xd49e,	// (0x0000d49e) list_single_number_heading_pane_ParamLimits

0xd49e,	// (0x0000d49e) list_single_number_heading_pane

0xd49e,	// (0x0000d49e) list_single_number_pane_ParamLimits

0xd49e,	// (0x0000d49e) list_single_number_pane

0xd49e,	// (0x0000d49e) list_single_pane_ParamLimits

0xd49e,	// (0x0000d49e) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x2552,	// (0x00002552) list_single_pane_g1_ParamLimits

0x2552,	// (0x00002552) list_single_pane_g1

0x3589,	// (0x00003589) list_single_pane_g2_ParamLimits

0x3589,	// (0x00003589) list_single_pane_g2

0x0001,

0xae11,	// (0x0000ae11) list_single_pane_g_ParamLimits

0xae11,	// (0x0000ae11) list_single_pane_g

0x5aa6,	// (0x00005aa6) list_single_pane_t1_ParamLimits

0x5aa6,	// (0x00005aa6) list_single_pane_t1

0x2552,	// (0x00002552) list_single_number_pane_g1_ParamLimits

0x2552,	// (0x00002552) list_single_number_pane_g1

0x3589,	// (0x00003589) list_single_number_pane_g2_ParamLimits

0x3589,	// (0x00003589) list_single_number_pane_g2

0x0001,

0xae11,	// (0x0000ae11) list_single_number_pane_g_ParamLimits

0xae11,	// (0x0000ae11) list_single_number_pane_g

0x3673,	// (0x00003673) list_single_number_pane_t1_ParamLimits

0x3673,	// (0x00003673) list_single_number_pane_t1

0xd2dd,	// (0x0000d2dd) list_single_number_pane_t2_ParamLimits

0xd2dd,	// (0x0000d2dd) list_single_number_pane_t2

0x0001,

0xf5c0,	// (0x0000f5c0) list_single_number_pane_t_ParamLimits

0xf5c0,	// (0x0000f5c0) list_single_number_pane_t

0xbaa2,	// (0x0000baa2) list_single_graphic_pane_g1_ParamLimits

0xbaa2,	// (0x0000baa2) list_single_graphic_pane_g1

0x2552,	// (0x00002552) list_single_graphic_pane_g2_ParamLimits

0x2552,	// (0x00002552) list_single_graphic_pane_g2

0x3589,	// (0x00003589) list_single_graphic_pane_g3_ParamLimits

0x3589,	// (0x00003589) list_single_graphic_pane_g3

0x0002,

0xf46b,	// (0x0000f46b) list_single_graphic_pane_g_ParamLimits

0xf46b,	// (0x0000f46b) list_single_graphic_pane_g

0xbaae,	// (0x0000baae) list_single_graphic_pane_t1_ParamLimits

0xbaae,	// (0x0000baae) list_single_graphic_pane_t1

0x2552,	// (0x00002552) list_single_heading_pane_g1_ParamLimits

0x2552,	// (0x00002552) list_single_heading_pane_g1

0x3589,	// (0x00003589) list_single_heading_pane_g2_ParamLimits

0x3589,	// (0x00003589) list_single_heading_pane_g2

0x0001,

0xae11,	// (0x0000ae11) list_single_heading_pane_g_ParamLimits

0xae11,	// (0x0000ae11) list_single_heading_pane_g

0xbac4,	// (0x0000bac4) list_single_heading_pane_t1_ParamLimits

0xbac4,	// (0x0000bac4) list_single_heading_pane_t1

0xbada,	// (0x0000bada) list_single_heading_pane_t2_ParamLimits

0xbada,	// (0x0000bada) list_single_heading_pane_t2

0x0001,

0xf472,	// (0x0000f472) list_single_heading_pane_t_ParamLimits

0xf472,	// (0x0000f472) list_single_heading_pane_t

0x2552,	// (0x00002552) list_single_number_heading_pane_g1_ParamLimits

0x2552,	// (0x00002552) list_single_number_heading_pane_g1

0x3589,	// (0x00003589) list_single_number_heading_pane_g2_ParamLimits

0x3589,	// (0x00003589) list_single_number_heading_pane_g2

0x0001,

0xae11,	// (0x0000ae11) list_single_number_heading_pane_g_ParamLimits

0xae11,	// (0x0000ae11) list_single_number_heading_pane_g

0xbac4,	// (0x0000bac4) list_single_number_heading_pane_t1_ParamLimits

0xbac4,	// (0x0000bac4) list_single_number_heading_pane_t1

0xbaec,	// (0x0000baec) list_single_number_heading_pane_t2_ParamLimits

0xbaec,	// (0x0000baec) list_single_number_heading_pane_t2

0x5a80,	// (0x00005a80) list_single_number_heading_pane_t3_ParamLimits

0x5a80,	// (0x00005a80) list_single_number_heading_pane_t3

0x0002,

0xf477,	// (0x0000f477) list_single_number_heading_pane_t_ParamLimits

0xf477,	// (0x0000f477) list_single_number_heading_pane_t

0x357d,	// (0x0000357d) list_single_graphic_heading_pane_g1_ParamLimits

0x357d,	// (0x0000357d) list_single_graphic_heading_pane_g1

0xbafe,	// (0x0000bafe) list_single_graphic_heading_pane_g4_ParamLimits

0xbafe,	// (0x0000bafe) list_single_graphic_heading_pane_g4

0x3589,	// (0x00003589) list_single_graphic_heading_pane_g5_ParamLimits

0x3589,	// (0x00003589) list_single_graphic_heading_pane_g5

0x0002,

0xf47e,	// (0x0000f47e) list_single_graphic_heading_pane_g_ParamLimits

0xf47e,	// (0x0000f47e) list_single_graphic_heading_pane_g

0xbac4,	// (0x0000bac4) list_single_graphic_heading_pane_t1_ParamLimits

0xbac4,	// (0x0000bac4) list_single_graphic_heading_pane_t1

0xbb0f,	// (0x0000bb0f) list_single_graphic_heading_pane_t2_ParamLimits

0xbb0f,	// (0x0000bb0f) list_single_graphic_heading_pane_t2

0x0001,

0xf485,	// (0x0000f485) list_single_graphic_heading_pane_t_ParamLimits

0xf485,	// (0x0000f485) list_single_graphic_heading_pane_t

0x5abc,	// (0x00005abc) list_single_large_graphic_pane_g1_ParamLimits

0x5abc,	// (0x00005abc) list_single_large_graphic_pane_g1

0x2552,	// (0x00002552) list_single_large_graphic_pane_g2_ParamLimits

0x2552,	// (0x00002552) list_single_large_graphic_pane_g2

0x3589,	// (0x00003589) list_single_large_graphic_pane_g3_ParamLimits

0x3589,	// (0x00003589) list_single_large_graphic_pane_g3

0x0002,

0xb06b,	// (0x0000b06b) list_single_large_graphic_pane_g_ParamLimits

0xb06b,	// (0x0000b06b) list_single_large_graphic_pane_g

0x3ef7,	// (0x00003ef7) wait_border_pane_g2_copy1

0xbb21,	// (0x0000bb21) list_single_large_graphic_pane_g4_cp2

0x5ac8,	// (0x00005ac8) list_single_large_graphic_pane_t1_ParamLimits

0x5ac8,	// (0x00005ac8) list_single_large_graphic_pane_t1

0x37b6,	// (0x000037b6) list_double_pane_g1_ParamLimits

0x37b6,	// (0x000037b6) list_double_pane_g1

0xbb29,	// (0x0000bb29) list_double_pane_g2_ParamLimits

0xbb29,	// (0x0000bb29) list_double_pane_g2

0x0001,

0xf48a,	// (0x0000f48a) list_double_pane_g_ParamLimits

0xf48a,	// (0x0000f48a) list_double_pane_g

0x775f,	// (0x0000775f) list_double_pane_t1_ParamLimits

0x775f,	// (0x0000775f) list_double_pane_t1

0xbb35,	// (0x0000bb35) list_double_pane_t2_ParamLimits

0xbb35,	// (0x0000bb35) list_double_pane_t2

0x0001,

0xf48f,	// (0x0000f48f) list_double_pane_t_ParamLimits

0xf48f,	// (0x0000f48f) list_double_pane_t

0xbb47,	// (0x0000bb47) list_double2_pane_g1_ParamLimits

0xbb47,	// (0x0000bb47) list_double2_pane_g1

0xbb58,	// (0x0000bb58) list_double2_pane_g2_ParamLimits

0xbb58,	// (0x0000bb58) list_double2_pane_g2

0x0001,

0xf494,	// (0x0000f494) list_double2_pane_g_ParamLimits

0xf494,	// (0x0000f494) list_double2_pane_g

0xbb64,	// (0x0000bb64) list_double2_pane_t1_ParamLimits

0xbb64,	// (0x0000bb64) list_double2_pane_t1

0xbb7a,	// (0x0000bb7a) list_double2_pane_t2_ParamLimits

0xbb7a,	// (0x0000bb7a) list_double2_pane_t2

0x0001,

0xf499,	// (0x0000f499) list_double2_pane_t_ParamLimits

0xf499,	// (0x0000f499) list_double2_pane_t

0x37b6,	// (0x000037b6) list_double_number_pane_g1_ParamLimits

0x37b6,	// (0x000037b6) list_double_number_pane_g1

0xbb29,	// (0x0000bb29) list_double_number_pane_g2_ParamLimits

0xbb29,	// (0x0000bb29) list_double_number_pane_g2

0x0001,

0xf48a,	// (0x0000f48a) list_double_number_pane_g_ParamLimits

0xf48a,	// (0x0000f48a) list_double_number_pane_g

0xbb8c,	// (0x0000bb8c) list_double_number_pane_t1_ParamLimits

0xbb8c,	// (0x0000bb8c) list_double_number_pane_t1

0xbb9e,	// (0x0000bb9e) list_double_number_pane_t2_ParamLimits

0xbb9e,	// (0x0000bb9e) list_double_number_pane_t2

0xbbb4,	// (0x0000bbb4) list_double_number_pane_t3_ParamLimits

0xbbb4,	// (0x0000bbb4) list_double_number_pane_t3

0x0002,

0xf49e,	// (0x0000f49e) list_double_number_pane_t_ParamLimits

0xf49e,	// (0x0000f49e) list_double_number_pane_t

0xbbc6,	// (0x0000bbc6) list_double_graphic_pane_g1_ParamLimits

0xbbc6,	// (0x0000bbc6) list_double_graphic_pane_g1

0xbbd2,	// (0x0000bbd2) list_double_graphic_pane_g2_ParamLimits

0xbbd2,	// (0x0000bbd2) list_double_graphic_pane_g2

0xbbe1,	// (0x0000bbe1) list_double_graphic_pane_g3_ParamLimits

0xbbe1,	// (0x0000bbe1) list_double_graphic_pane_g3

0x0003,

0xf4a5,	// (0x0000f4a5) list_double_graphic_pane_g_ParamLimits

0xf4a5,	// (0x0000f4a5) list_double_graphic_pane_g

0x37c2,	// (0x000037c2) list_double_graphic_pane_t1_ParamLimits

0x37c2,	// (0x000037c2) list_double_graphic_pane_t1

0xbbf9,	// (0x0000bbf9) list_double_graphic_pane_t2_ParamLimits

0xbbf9,	// (0x0000bbf9) list_double_graphic_pane_t2

0x0001,

0xf4ae,	// (0x0000f4ae) list_double_graphic_pane_t_ParamLimits

0xf4ae,	// (0x0000f4ae) list_double_graphic_pane_t

0xbc0b,	// (0x0000bc0b) list_double2_graphic_pane_g1_ParamLimits

0xbc0b,	// (0x0000bc0b) list_double2_graphic_pane_g1

0x243d,	// (0x0000243d) list_double2_graphic_pane_g2_ParamLimits

0x243d,	// (0x0000243d) list_double2_graphic_pane_g2

0xbb58,	// (0x0000bb58) list_double2_graphic_pane_g3_ParamLimits

0xbb58,	// (0x0000bb58) list_double2_graphic_pane_g3

0x0002,

0xf4b3,	// (0x0000f4b3) list_double2_graphic_pane_g_ParamLimits

0xf4b3,	// (0x0000f4b3) list_double2_graphic_pane_g

0xbc17,	// (0x0000bc17) list_double2_graphic_pane_t1_ParamLimits

0xbc17,	// (0x0000bc17) list_double2_graphic_pane_t1

0xbc2d,	// (0x0000bc2d) list_double2_graphic_pane_t2_ParamLimits

0xbc2d,	// (0x0000bc2d) list_double2_graphic_pane_t2

0x0001,

0xf4ba,	// (0x0000f4ba) list_double2_graphic_pane_t_ParamLimits

0xf4ba,	// (0x0000f4ba) list_double2_graphic_pane_t

0xbc3f,	// (0x0000bc3f) list_double_large_graphic_pane_g1_ParamLimits

0xbc3f,	// (0x0000bc3f) list_double_large_graphic_pane_g1

0xbc5e,	// (0x0000bc5e) list_double_large_graphic_pane_g2_ParamLimits

0xbc5e,	// (0x0000bc5e) list_double_large_graphic_pane_g2

0xbb29,	// (0x0000bb29) list_double_large_graphic_pane_g3_ParamLimits

0xbb29,	// (0x0000bb29) list_double_large_graphic_pane_g3

0xbc6f,	// (0x0000bc6f) list_double_large_graphic_pane_g4_ParamLimits

0xbc6f,	// (0x0000bc6f) list_double_large_graphic_pane_g4

0x0004,

0xf4bf,	// (0x0000f4bf) list_double_large_graphic_pane_g_ParamLimits

0xf4bf,	// (0x0000f4bf) list_double_large_graphic_pane_g

0xbc81,	// (0x0000bc81) list_double_large_graphic_pane_t1_ParamLimits

0xbc81,	// (0x0000bc81) list_double_large_graphic_pane_t1

0xbc9a,	// (0x0000bc9a) list_double_large_graphic_pane_t2_ParamLimits

0xbc9a,	// (0x0000bc9a) list_double_large_graphic_pane_t2

0x0001,

0xf4ca,	// (0x0000f4ca) list_double_large_graphic_pane_t_ParamLimits

0xf4ca,	// (0x0000f4ca) list_double_large_graphic_pane_t

0xbcac,	// (0x0000bcac) list_double2_large_graphic_pane_g1_ParamLimits

0xbcac,	// (0x0000bcac) list_double2_large_graphic_pane_g1

0xbb47,	// (0x0000bb47) list_double2_large_graphic_pane_g2_ParamLimits

0xbb47,	// (0x0000bb47) list_double2_large_graphic_pane_g2

0xbb58,	// (0x0000bb58) list_double2_large_graphic_pane_g3_ParamLimits

0xbb58,	// (0x0000bb58) list_double2_large_graphic_pane_g3

0x0002,

0xf4cf,	// (0x0000f4cf) list_double2_large_graphic_pane_g_ParamLimits

0xf4cf,	// (0x0000f4cf) list_double2_large_graphic_pane_g

0xbcb8,	// (0x0000bcb8) list_double2_large_graphic_pane_t1_ParamLimits

0xbcb8,	// (0x0000bcb8) list_double2_large_graphic_pane_t1

0xbcce,	// (0x0000bcce) list_double2_large_graphic_pane_t2_ParamLimits

0xbcce,	// (0x0000bcce) list_double2_large_graphic_pane_t2

0x0001,

0xf4d6,	// (0x0000f4d6) list_double2_large_graphic_pane_t_ParamLimits

0xf4d6,	// (0x0000f4d6) list_double2_large_graphic_pane_t

0xbce0,	// (0x0000bce0) list_double_heading_pane_g1_ParamLimits

0xbce0,	// (0x0000bce0) list_double_heading_pane_g1

0xbcf1,	// (0x0000bcf1) list_double_heading_pane_g2_ParamLimits

0xbcf1,	// (0x0000bcf1) list_double_heading_pane_g2

0x0001,

0xf4db,	// (0x0000f4db) list_double_heading_pane_g_ParamLimits

0xf4db,	// (0x0000f4db) list_double_heading_pane_g

0xbcfd,	// (0x0000bcfd) list_double_heading_pane_t1_ParamLimits

0xbcfd,	// (0x0000bcfd) list_double_heading_pane_t1

0xbd13,	// (0x0000bd13) list_double_heading_pane_t2_ParamLimits

0xbd13,	// (0x0000bd13) list_double_heading_pane_t2

0x0001,

0xf4e0,	// (0x0000f4e0) list_double_heading_pane_t_ParamLimits

0xf4e0,	// (0x0000f4e0) list_double_heading_pane_t

0x0f7e,	// (0x00000f7e) list_double_graphic_heading_pane_g1_ParamLimits

0x0f7e,	// (0x00000f7e) list_double_graphic_heading_pane_g1

0xbce0,	// (0x0000bce0) list_double_graphic_heading_pane_g2_ParamLimits

0xbce0,	// (0x0000bce0) list_double_graphic_heading_pane_g2

0xbcf1,	// (0x0000bcf1) list_double_graphic_heading_pane_g3_ParamLimits

0xbcf1,	// (0x0000bcf1) list_double_graphic_heading_pane_g3

0x0002,

0xf4e5,	// (0x0000f4e5) list_double_graphic_heading_pane_g_ParamLimits

0xf4e5,	// (0x0000f4e5) list_double_graphic_heading_pane_g

0xbd25,	// (0x0000bd25) list_double_graphic_heading_pane_t1_ParamLimits

0xbd25,	// (0x0000bd25) list_double_graphic_heading_pane_t1

0xbd3b,	// (0x0000bd3b) list_double_graphic_heading_pane_t2_ParamLimits

0xbd3b,	// (0x0000bd3b) list_double_graphic_heading_pane_t2

0x0001,

0xf4ec,	// (0x0000f4ec) list_double_graphic_heading_pane_t_ParamLimits

0xf4ec,	// (0x0000f4ec) list_double_graphic_heading_pane_t

0xbc5e,	// (0x0000bc5e) list_double_time_pane_g1_ParamLimits

0xbc5e,	// (0x0000bc5e) list_double_time_pane_g1

0xbb29,	// (0x0000bb29) list_double_time_pane_g2_ParamLimits

0xbb29,	// (0x0000bb29) list_double_time_pane_g2

0x0001,

0xf4f1,	// (0x0000f4f1) list_double_time_pane_g_ParamLimits

0xf4f1,	// (0x0000f4f1) list_double_time_pane_g

0xbd4d,	// (0x0000bd4d) list_double_time_pane_t1_ParamLimits

0xbd4d,	// (0x0000bd4d) list_double_time_pane_t1

0xbd63,	// (0x0000bd63) list_double_time_pane_t2_ParamLimits

0xbd63,	// (0x0000bd63) list_double_time_pane_t2

0xbd75,	// (0x0000bd75) list_double_time_pane_t3_ParamLimits

0xbd75,	// (0x0000bd75) list_double_time_pane_t3

0xbd87,	// (0x0000bd87) list_double_time_pane_t4_ParamLimits

0xbd87,	// (0x0000bd87) list_double_time_pane_t4

0x0003,

0xf4f6,	// (0x0000f4f6) list_double_time_pane_t_ParamLimits

0xf4f6,	// (0x0000f4f6) list_double_time_pane_t

0x243d,	// (0x0000243d) list_setting_pane_g1_ParamLimits

0x243d,	// (0x0000243d) list_setting_pane_g1

0xbb58,	// (0x0000bb58) list_setting_pane_g2_ParamLimits

0xbb58,	// (0x0000bb58) list_setting_pane_g2

0x0001,

0xf4ff,	// (0x0000f4ff) list_setting_pane_g_ParamLimits

0xf4ff,	// (0x0000f4ff) list_setting_pane_g

0xbd99,	// (0x0000bd99) list_setting_pane_t1_ParamLimits

0xbd99,	// (0x0000bd99) list_setting_pane_t1

0xbdb0,	// (0x0000bdb0) list_setting_pane_t2_ParamLimits

0xbdb0,	// (0x0000bdb0) list_setting_pane_t2

0x0002,

0xf504,	// (0x0000f504) list_setting_pane_t_ParamLimits

0xf504,	// (0x0000f504) list_setting_pane_t

0xbdef,	// (0x0000bdef) set_value_pane_cp_ParamLimits

0xbdef,	// (0x0000bdef) set_value_pane_cp

0x243d,	// (0x0000243d) list_setting_number_pane_g1_ParamLimits

0x243d,	// (0x0000243d) list_setting_number_pane_g1

0xbb58,	// (0x0000bb58) list_setting_number_pane_g2_ParamLimits

0xbb58,	// (0x0000bb58) list_setting_number_pane_g2

0x0001,

0xf4ff,	// (0x0000f4ff) list_setting_number_pane_g_ParamLimits

0xf4ff,	// (0x0000f4ff) list_setting_number_pane_g

0xbdfb,	// (0x0000bdfb) list_setting_number_pane_t1_ParamLimits

0xbdfb,	// (0x0000bdfb) list_setting_number_pane_t1

0xbe0f,	// (0x0000be0f) list_setting_number_pane_t2_ParamLimits

0xbe0f,	// (0x0000be0f) list_setting_number_pane_t2

0xbe26,	// (0x0000be26) list_setting_number_pane_t3_ParamLimits

0xbe26,	// (0x0000be26) list_setting_number_pane_t3

0x0003,

0xf50b,	// (0x0000f50b) list_setting_number_pane_t_ParamLimits

0xf50b,	// (0x0000f50b) list_setting_number_pane_t

0xbdef,	// (0x0000bdef) set_value_pane_ParamLimits

0xbdef,	// (0x0000bdef) set_value_pane

0x1263,	// (0x00001263) bg_set_opt_pane_ParamLimits

0x1263,	// (0x00001263) bg_set_opt_pane

0x1284,	// (0x00001284) set_value_pane_t1

0x1292,	// (0x00001292) slider_set_pane_cp3

0x129b,	// (0x0000129b) volume_small_pane_cp

0x12a4,	// (0x000012a4) list_form_gen_pane

0x12ad,	// (0x000012ad) scroll_pane_cp8

0xbe69,	// (0x0000be69) form_field_data_pane_ParamLimits

0xbe69,	// (0x0000be69) form_field_data_pane

0xbe80,	// (0x0000be80) form_field_data_wide_pane_ParamLimits

0xbe80,	// (0x0000be80) form_field_data_wide_pane

0xbea0,	// (0x0000bea0) form_field_popup_pane_ParamLimits

0xbea0,	// (0x0000bea0) form_field_popup_pane

0xbeb8,	// (0x0000beb8) form_field_popup_wide_pane_ParamLimits

0xbeb8,	// (0x0000beb8) form_field_popup_wide_pane

0x1348,	// (0x00001348) form_field_slider_pane_ParamLimits

0x1348,	// (0x00001348) form_field_slider_pane

0x135b,	// (0x0000135b) form_field_slider_wide_pane_ParamLimits

0x135b,	// (0x0000135b) form_field_slider_wide_pane

0x136e,	// (0x0000136e) data_form_pane

0xbed9,	// (0x0000bed9) form_field_data_pane_t1

0x139c,	// (0x0000139c) input_focus_pane

0x13aa,	// (0x000013aa) data_form_wide_pane

0x13d6,	// (0x000013d6) form_field_data_wide_pane_t1

0x0b92,	// (0x00000b92) input_focus_pane_cp6

0xbef3,	// (0x0000bef3) form_field_popup_pane_t1

0x139c,	// (0x0000139c) input_focus_pane_cp7

0x140d,	// (0x0000140d) list_form_pane

0x1421,	// (0x00001421) form_field_popup_wide_pane_t1

0x139c,	// (0x0000139c) input_focus_pane_cp8

0x1436,	// (0x00001436) list_form_wide_pane

0xbf15,	// (0x0000bf15) form_field_slider_pane_t1_ParamLimits

0xbf15,	// (0x0000bf15) form_field_slider_pane_t1

0xbf2d,	// (0x0000bf2d) form_field_slider_pane_t2_ParamLimits

0xbf2d,	// (0x0000bf2d) form_field_slider_pane_t2

0x0001,

0xf514,	// (0x0000f514) form_field_slider_pane_t_ParamLimits

0xf514,	// (0x0000f514) form_field_slider_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9

0xbf42,	// (0x0000bf42) slider_cont_pane_ParamLimits

0xbf42,	// (0x0000bf42) slider_cont_pane

0x1485,	// (0x00001485) form_field_slider_wide_pane_t1_ParamLimits

0x1485,	// (0x00001485) form_field_slider_wide_pane_t1

0x1497,	// (0x00001497) form_field_slider_wide_pane_t2_ParamLimits

0x1497,	// (0x00001497) form_field_slider_wide_pane_t2

0x0001,

0xacc0,	// (0x0000acc0) form_field_slider_wide_pane_t_ParamLimits

0xacc0,	// (0x0000acc0) form_field_slider_wide_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10

0xbf56,	// (0x0000bf56) slider_cont_pane_cp1_ParamLimits

0xbf56,	// (0x0000bf56) slider_cont_pane_cp1

0xbf6a,	// (0x0000bf6a) slider_form_pane_cp

0x14c5,	// (0x000014c5) input_focus_pane_g1

0x14cd,	// (0x000014cd) input_focus_pane_g2

0x14d5,	// (0x000014d5) input_focus_pane_g3

0x14dd,	// (0x000014dd) input_focus_pane_g4

0x14e5,	// (0x000014e5) input_focus_pane_g5

0x14ed,	// (0x000014ed) input_focus_pane_g6

0x14f5,	// (0x000014f5) input_focus_pane_g7

0x14fd,	// (0x000014fd) input_focus_pane_g8

0x1505,	// (0x00001505) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xacc5,	// (0x0000acc5) input_focus_pane_g

0x3f00,	// (0x00003f00) wait_border_pane_g3_copy1

0xbf72,	// (0x0000bf72) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd470,	// (0x0000d470) data_form_wide_pane_t1

0xbf8c,	// (0x0000bf8c) list_form_graphic_pane_cp_ParamLimits

0xbf8c,	// (0x0000bf8c) list_form_graphic_pane_cp

0x5075,	// (0x00005075) slider_form_pane_g1

0x507e,	// (0x0000507e) slider_form_pane_g2

0x0006,

0xf5ce,	// (0x0000f5ce) slider_form_pane_g

0xbf8c,	// (0x0000bf8c) list_form_graphic_pane_ParamLimits

0xbf8c,	// (0x0000bf8c) list_form_graphic_pane

0x155d,	// (0x0000155d) list_form_graphic_pane_g1

0x1565,	// (0x00001565) list_form_graphic_pane_t1_ParamLimits

0x1565,	// (0x00001565) list_form_graphic_pane_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5

0xbf9e,	// (0x0000bf9e) find_pane_g1

0x1583,	// (0x00001583) input_find_pane

0xbfa7,	// (0x0000bfa7) input_find_pane_g1_ParamLimits

0xbfa7,	// (0x0000bfa7) input_find_pane_g1

0xbfb3,	// (0x0000bfb3) input_find_pane_t1_ParamLimits

0xbfb3,	// (0x0000bfb3) input_find_pane_t1

0xbfc8,	// (0x0000bfc8) input_find_pane_t2_ParamLimits

0xbfc8,	// (0x0000bfc8) input_find_pane_t2

0x0001,

0xf519,	// (0x0000f519) input_find_pane_t_ParamLimits

0xf519,	// (0x0000f519) input_find_pane_t

0x15c2,	// (0x000015c2) input_focus_pane_cp5_ParamLimits

0x15c2,	// (0x000015c2) input_focus_pane_cp5

0x15dc,	// (0x000015dc) bg_popup_window_pane_cp2_ParamLimits

0x15dc,	// (0x000015dc) bg_popup_window_pane_cp2

0x15e9,	// (0x000015e9) listscroll_menu_pane_ParamLimits

0x15e9,	// (0x000015e9) listscroll_menu_pane

0xbfe9,	// (0x0000bfe9) popup_submenu_window_ParamLimits

0xbfe9,	// (0x0000bfe9) popup_submenu_window

0x1621,	// (0x00001621) find_popup_pane_g1

0x1629,	// (0x00001629) input_popup_find_pane_cp

0x15c2,	// (0x000015c2) input_focus_pane_cp4_ParamLimits

0x15c2,	// (0x000015c2) input_focus_pane_cp4

0x163f,	// (0x0000163f) input_popup_find_pane_t1_ParamLimits

0x163f,	// (0x0000163f) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x166d,	// (0x0000166d) listscroll_popup_sub_pane

0x1675,	// (0x00001675) list_submenu_pane_ParamLimits

0x1675,	// (0x00001675) list_submenu_pane

0x1686,	// (0x00001686) scroll_pane_cp4

0x168e,	// (0x0000168e) list_single_popup_submenu_pane_ParamLimits

0x168e,	// (0x0000168e) list_single_popup_submenu_pane

0x16a2,	// (0x000016a2) list_single_popup_submenu_pane_g1

0x16aa,	// (0x000016aa) list_single_popup_submenu_pane_t1_ParamLimits

0x16aa,	// (0x000016aa) list_single_popup_submenu_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1

0x16bf,	// (0x000016bf) tabs_2_active_pane_g1

0xc023,	// (0x0000c023) tabs_2_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1

0x16bf,	// (0x000016bf) tabs_2_passive_pane_g1

0xc023,	// (0x0000c023) tabs_2_passive_pane_t1

0x0507,	// (0x00000507) bg_active_tab_pane_cp4

0xc035,	// (0x0000c035) tabs_2_long_active_pane_t1

0x2b90,	// (0x00002b90) bg_passive_tab_pane_cp4

0x375a,	// (0x0000375a) list_single_midp_graphic_pane_g4_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5

0xc048,	// (0x0000c048) tabs_3_long_active_pane_t1

0x2b90,	// (0x00002b90) bg_passive_tab_pane_cp5

0x375a,	// (0x0000375a) list_single_midp_graphic_pane_g4

0x0507,	// (0x00000507) bg_popup_window_pane_cp13_ParamLimits

0x0507,	// (0x00000507) bg_popup_window_pane_cp13

0x1721,	// (0x00001721) listscroll_popup_fast_pane_ParamLimits

0x1721,	// (0x00001721) listscroll_popup_fast_pane

0x1730,	// (0x00001730) grid_popup_fast_pane_ParamLimits

0x1730,	// (0x00001730) grid_popup_fast_pane

0x1742,	// (0x00001742) scroll_pane_cp9_ParamLimits

0x1742,	// (0x00001742) scroll_pane_cp9

0x73c3,	// (0x000073c3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x73c3,	// (0x000073c3) list_single_graphic_hl_pane_t1_cp2

0x1766,	// (0x00001766) input_focus_pane_cp20_ParamLimits

0x1766,	// (0x00001766) input_focus_pane_cp20

0x1774,	// (0x00001774) query_popup_data_pane_t1_ParamLimits

0x1774,	// (0x00001774) query_popup_data_pane_t1

0x1787,	// (0x00001787) query_popup_data_pane_t2_ParamLimits

0x1787,	// (0x00001787) query_popup_data_pane_t2

0x17cd,	// (0x000017cd) query_popup_data_pane_t3_ParamLimits

0x17cd,	// (0x000017cd) query_popup_data_pane_t3

0x180e,	// (0x0000180e) query_popup_data_pane_t4_ParamLimits

0x180e,	// (0x0000180e) query_popup_data_pane_t4

0x184a,	// (0x0000184a) query_popup_data_pane_t5_ParamLimits

0x184a,	// (0x0000184a) query_popup_data_pane_t5

0x0004,

0xacdf,	// (0x0000acdf) query_popup_data_pane_t_ParamLimits

0xacdf,	// (0x0000acdf) query_popup_data_pane_t

0x14c5,	// (0x000014c5) bg_set_opt_pane_g1

0x14cd,	// (0x000014cd) bg_set_opt_pane_g2

0x14d5,	// (0x000014d5) bg_set_opt_pane_g3

0x14dd,	// (0x000014dd) bg_set_opt_pane_g4

0x14e5,	// (0x000014e5) bg_set_opt_pane_g5

0x14ed,	// (0x000014ed) bg_set_opt_pane_g6

0x14f5,	// (0x000014f5) bg_set_opt_pane_g7

0x14fd,	// (0x000014fd) bg_set_opt_pane_g8

0x1505,	// (0x00001505) bg_set_opt_pane_g9

0x0008,

0xacea,	// (0x0000acea) bg_set_opt_pane_g

0x2166,	// (0x00002166) control_top_pane_stacon_ParamLimits

0x2166,	// (0x00002166) control_top_pane_stacon

0x21b9,	// (0x000021b9) signal_pane_stacon_ParamLimits

0x21b9,	// (0x000021b9) signal_pane_stacon

0x21de,	// (0x000021de) stacon_top_pane_g1_ParamLimits

0x21de,	// (0x000021de) stacon_top_pane_g1

0x2200,	// (0x00002200) title_pane_stacon_ParamLimits

0x2200,	// (0x00002200) title_pane_stacon

0x222a,	// (0x0000222a) uni_indicator_pane_stacon_ParamLimits

0x222a,	// (0x0000222a) uni_indicator_pane_stacon

0x223f,	// (0x0000223f) battery_pane_stacon_ParamLimits

0x223f,	// (0x0000223f) battery_pane_stacon

0x2283,	// (0x00002283) control_bottom_pane_stacon_ParamLimits

0x2283,	// (0x00002283) control_bottom_pane_stacon

0x22a6,	// (0x000022a6) navi_pane_stacon_ParamLimits

0x22a6,	// (0x000022a6) navi_pane_stacon

0x22c9,	// (0x000022c9) stacon_bottom_pane_g1_ParamLimits

0x22c9,	// (0x000022c9) stacon_bottom_pane_g1

0x1881,	// (0x00001881) aid_levels_signal_lsc_ParamLimits

0x1881,	// (0x00001881) aid_levels_signal_lsc

0x1897,	// (0x00001897) signal_pane_stacon_g1_ParamLimits

0x1897,	// (0x00001897) signal_pane_stacon_g1

0x18ab,	// (0x000018ab) signal_pane_stacon_g2_ParamLimits

0x18ab,	// (0x000018ab) signal_pane_stacon_g2

0x0001,

0xacfd,	// (0x0000acfd) signal_pane_stacon_g_ParamLimits

0xacfd,	// (0x0000acfd) signal_pane_stacon_g

0x18ed,	// (0x000018ed) title_pane_stacon_t1_ParamLimits

0x18ed,	// (0x000018ed) title_pane_stacon_t1

0x1912,	// (0x00001912) uni_indicator_pane_stacon_g1

0x191c,	// (0x0000191c) uni_indicator_pane_stacon_g2

0x1926,	// (0x00001926) uni_indicator_pane_stacon_g3

0x1930,	// (0x00001930) uni_indicator_pane_stacon_g4

0x0003,

0xad09,	// (0x0000ad09) uni_indicator_pane_stacon_g

0x193a,	// (0x0000193a) control_top_pane_stacon_g1

0x1942,	// (0x00001942) control_top_pane_stacon_t1_ParamLimits

0x1942,	// (0x00001942) control_top_pane_stacon_t1

0x1979,	// (0x00001979) aid_levels_battery_lsc_ParamLimits

0x1979,	// (0x00001979) aid_levels_battery_lsc

0x1990,	// (0x00001990) battery_pane_stacon_g1_ParamLimits

0x1990,	// (0x00001990) battery_pane_stacon_g1

0x19a3,	// (0x000019a3) battery_pane_stacon_g2_ParamLimits

0x19a3,	// (0x000019a3) battery_pane_stacon_g2

0x0001,

0xad12,	// (0x0000ad12) battery_pane_stacon_g_ParamLimits

0xad12,	// (0x0000ad12) battery_pane_stacon_g

0x19e1,	// (0x000019e1) navi_icon_pane_stacon

0x19f5,	// (0x000019f5) navi_navi_pane_stacon

0x19e1,	// (0x000019e1) navi_text_pane_stacon

0x193a,	// (0x0000193a) control_bottom_pane_stacon_g1

0x1a09,	// (0x00001a09) control_bottom_pane_stacon_t1_ParamLimits

0x1a09,	// (0x00001a09) control_bottom_pane_stacon_t1

0xc05a,	// (0x0000c05a) grid_app_pane_ParamLimits

0xc05a,	// (0x0000c05a) grid_app_pane

0xc092,	// (0x0000c092) scroll_pane_cp15_ParamLimits

0xc092,	// (0x0000c092) scroll_pane_cp15

0xc0a7,	// (0x0000c0a7) cell_app_pane_ParamLimits

0xc0a7,	// (0x0000c0a7) cell_app_pane

0xc0ec,	// (0x0000c0ec) cell_app_pane_g1_ParamLimits

0xc0ec,	// (0x0000c0ec) cell_app_pane_g1

0x1ad9,	// (0x00001ad9) cell_app_pane_g2_ParamLimits

0x1ad9,	// (0x00001ad9) cell_app_pane_g2

0x0001,

0xf51e,	// (0x0000f51e) cell_app_pane_g_ParamLimits

0xf51e,	// (0x0000f51e) cell_app_pane_g

0xc110,	// (0x0000c110) cell_app_pane_t1_ParamLimits

0xc110,	// (0x0000c110) cell_app_pane_t1

0x1afc,	// (0x00001afc) grid_highlight_pane_ParamLimits

0x1afc,	// (0x00001afc) grid_highlight_pane

0x14c5,	// (0x000014c5) cell_highlight_pane_g1

0x14cd,	// (0x000014cd) cell_highlight_pane_g2

0x14d5,	// (0x000014d5) cell_highlight_pane_g3

0x14dd,	// (0x000014dd) cell_highlight_pane_g4

0x14e5,	// (0x000014e5) cell_highlight_pane_g5

0x14ed,	// (0x000014ed) cell_highlight_pane_g6

0x14f5,	// (0x000014f5) cell_highlight_pane_g7

0x14fd,	// (0x000014fd) cell_highlight_pane_g8

0x1505,	// (0x00001505) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xacc5,	// (0x0000acc5) cell_highlight_pane_g

0x1b20,	// (0x00001b20) bg_scroll_pane

0x1b3f,	// (0x00001b3f) scroll_handle_pane

0x1b90,	// (0x00001b90) scroll_bg_pane_g1

0x1ba5,	// (0x00001ba5) scroll_bg_pane_g2

0x1bbd,	// (0x00001bbd) scroll_bg_pane_g3

0x0002,

0xad1c,	// (0x0000ad1c) scroll_bg_pane_g

0x1bd2,	// (0x00001bd2) scroll_handle_focus_pane_ParamLimits

0x1bd2,	// (0x00001bd2) scroll_handle_focus_pane

0x1b90,	// (0x00001b90) scroll_handle_pane_g1

0x1bdf,	// (0x00001bdf) scroll_handle_pane_g2

0x1bbd,	// (0x00001bbd) scroll_handle_pane_g3

0x0002,

0xad23,	// (0x0000ad23) scroll_handle_pane_g

0x15c2,	// (0x000015c2) bg_popup_sub_pane_cp21_ParamLimits

0x15c2,	// (0x000015c2) bg_popup_sub_pane_cp21

0x1bf3,	// (0x00001bf3) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bf3,	// (0x00001bf3) popup_fep_japan_predictive_window_t1

0x1c0d,	// (0x00001c0d) popup_fep_japan_predictive_window_t2_ParamLimits

0x1c0d,	// (0x00001c0d) popup_fep_japan_predictive_window_t2

0x1c40,	// (0x00001c40) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c40,	// (0x00001c40) popup_fep_japan_predictive_window_t3

0x0002,

0xad2a,	// (0x0000ad2a) popup_fep_japan_predictive_window_t_ParamLimits

0xad2a,	// (0x0000ad2a) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c77,	// (0x00001c77) listscroll_japin_cand_pane

0x1c7f,	// (0x00001c7f) popup_fep_japan_candidate_window_t1

0x1c8d,	// (0x00001c8d) candidate_pane_ParamLimits

0x1c8d,	// (0x00001c8d) candidate_pane

0x1c9f,	// (0x00001c9f) scroll_pane_cp30

0x1ca7,	// (0x00001ca7) list_single_popup_jap_candidate_pane_ParamLimits

0x1ca7,	// (0x00001ca7) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1cbc,	// (0x00001cbc) list_single_popup_jap_candidate_pane_t1

0x1ccb,	// (0x00001ccb) level_1_signal

0x1cdd,	// (0x00001cdd) level_2_signal

0x1cf0,	// (0x00001cf0) level_3_signal

0x1d03,	// (0x00001d03) level_4_signal

0x1d16,	// (0x00001d16) level_5_signal

0x1d29,	// (0x00001d29) level_6_signal

0x1d3c,	// (0x00001d3c) level_7_signal

0x1ccb,	// (0x00001ccb) level_1_battery

0x1cdd,	// (0x00001cdd) level_2_battery

0x1cf0,	// (0x00001cf0) level_3_battery

0x1d03,	// (0x00001d03) level_4_battery

0x1d16,	// (0x00001d16) level_5_battery

0x1d29,	// (0x00001d29) level_6_battery

0x1d3c,	// (0x00001d3c) level_7_battery

0x1d86,	// (0x00001d86) list_menu_pane_ParamLimits

0x1d86,	// (0x00001d86) list_menu_pane

0x1d9c,	// (0x00001d9c) scroll_pane_cp25_ParamLimits

0x1d9c,	// (0x00001d9c) scroll_pane_cp25

0x1db5,	// (0x00001db5) list_double2_graphic_pane_cp2_ParamLimits

0x1db5,	// (0x00001db5) list_double2_graphic_pane_cp2

0x1db5,	// (0x00001db5) list_double2_large_graphic_pane_cp2_ParamLimits

0x1db5,	// (0x00001db5) list_double2_large_graphic_pane_cp2

0x1db5,	// (0x00001db5) list_double2_pane_cp2_ParamLimits

0x1db5,	// (0x00001db5) list_double2_pane_cp2

0x1db5,	// (0x00001db5) list_double_graphic_pane_cp2_ParamLimits

0x1db5,	// (0x00001db5) list_double_graphic_pane_cp2

0x1db5,	// (0x00001db5) list_double_large_graphic_pane_cp2_ParamLimits

0x1db5,	// (0x00001db5) list_double_large_graphic_pane_cp2

0x1db5,	// (0x00001db5) list_double_number_pane_cp2_ParamLimits

0x1db5,	// (0x00001db5) list_double_number_pane_cp2

0x1db5,	// (0x00001db5) list_double_pane_cp2_ParamLimits

0x1db5,	// (0x00001db5) list_double_pane_cp2

0xc130,	// (0x0000c130) list_single_2graphic_pane_cp2_ParamLimits

0xc130,	// (0x0000c130) list_single_2graphic_pane_cp2

0xc130,	// (0x0000c130) list_single_graphic_heading_pane_cp2_ParamLimits

0xc130,	// (0x0000c130) list_single_graphic_heading_pane_cp2

0xc130,	// (0x0000c130) list_single_graphic_pane_cp2_ParamLimits

0xc130,	// (0x0000c130) list_single_graphic_pane_cp2

0xc130,	// (0x0000c130) list_single_heading_pane_cp2_ParamLimits

0xc130,	// (0x0000c130) list_single_heading_pane_cp2

0x1df2,	// (0x00001df2) list_single_large_graphic_pane_cp2_ParamLimits

0x1df2,	// (0x00001df2) list_single_large_graphic_pane_cp2

0xc130,	// (0x0000c130) list_single_number_heading_pane_cp2_ParamLimits

0xc130,	// (0x0000c130) list_single_number_heading_pane_cp2

0xc130,	// (0x0000c130) list_single_number_pane_cp2_ParamLimits

0xc130,	// (0x0000c130) list_single_number_pane_cp2

0xc130,	// (0x0000c130) list_single_pane_cp2_ParamLimits

0xc130,	// (0x0000c130) list_single_pane_cp2

0x1ec9,	// (0x00001ec9) bg_popup_sub_pane_cp22

0x1eee,	// (0x00001eee) popup_side_volume_key_window_g1

0x1f18,	// (0x00001f18) popup_side_volume_key_window_t1

0x1f34,	// (0x00001f34) volume_small_pane_cp1

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24_ParamLimits

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24

0x1f3c,	// (0x00001f3c) fep_china_uni_candidate_pane_ParamLimits

0x1f3c,	// (0x00001f3c) fep_china_uni_candidate_pane

0x1f50,	// (0x00001f50) fep_china_uni_entry_pane

0x1f60,	// (0x00001f60) popup_fep_china_uni_window_g1

0x1f7c,	// (0x00001f7c) fep_china_uni_entry_pane_g1

0x1f84,	// (0x00001f84) fep_china_uni_entry_pane_g2

0x0001,

0xad5b,	// (0x0000ad5b) fep_china_uni_entry_pane_g

0x1f8c,	// (0x00001f8c) fep_entry_item_pane

0x1f96,	// (0x00001f96) fep_candidate_item_pane

0x1f9e,	// (0x00001f9e) fep_china_uni_candidate_pane_g1

0x1fa6,	// (0x00001fa6) fep_china_uni_candidate_pane_g2

0x1fae,	// (0x00001fae) fep_china_uni_candidate_pane_g3

0x1fb6,	// (0x00001fb6) fep_china_uni_candidate_pane_g4

0x0003,

0xad60,	// (0x0000ad60) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1fbe,	// (0x00001fbe) fep_entry_item_pane_t1_ParamLimits

0x1fbe,	// (0x00001fbe) fep_entry_item_pane_t1

0x1fd4,	// (0x00001fd4) fep_candidate_item_pane_t1_ParamLimits

0x1fd4,	// (0x00001fd4) fep_candidate_item_pane_t1

0x1fe9,	// (0x00001fe9) fep_candidate_item_pane_t2_ParamLimits

0x1fe9,	// (0x00001fe9) fep_candidate_item_pane_t2

0x0001,

0xad69,	// (0x0000ad69) fep_candidate_item_pane_t_ParamLimits

0xad69,	// (0x0000ad69) fep_candidate_item_pane_t

0x0507,	// (0x00000507) list_highlight_pane_cp31_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp31

0x1ffb,	// (0x00001ffb) level_1_signal_lsc

0x2004,	// (0x00002004) level_2_signal_lsc

0x200d,	// (0x0000200d) level_3_signal_lsc

0x2016,	// (0x00002016) level_4_signal_lsc

0x201f,	// (0x0000201f) level_5_signal_lsc

0x2028,	// (0x00002028) level_6_signal_lsc

0x2031,	// (0x00002031) level_7_signal_lsc

0x2031,	// (0x00002031) level_1_battery_lsc

0x203a,	// (0x0000203a) level_2_battery_lsc

0x2043,	// (0x00002043) level_3_battery_lsc

0x204c,	// (0x0000204c) level_4_battery_lsc

0x2055,	// (0x00002055) level_5_battery_lsc

0x205e,	// (0x0000205e) level_6_battery_lsc

0x1ffb,	// (0x00001ffb) level_7_battery_lsc

0x2067,	// (0x00002067) scroll_handle_focus_pane_g1

0x2070,	// (0x00002070) scroll_handle_focus_pane_g2

0x2079,	// (0x00002079) scroll_handle_focus_pane_g3

0x0002,

0xad6e,	// (0x0000ad6e) scroll_handle_focus_pane_g

0xc1bd,	// (0x0000c1bd) list_single_2graphic_pane_g1_ParamLimits

0xc1bd,	// (0x0000c1bd) list_single_2graphic_pane_g1

0xbafe,	// (0x0000bafe) list_single_2graphic_pane_g2_ParamLimits

0xbafe,	// (0x0000bafe) list_single_2graphic_pane_g2

0x3589,	// (0x00003589) list_single_2graphic_pane_g3_ParamLimits

0x3589,	// (0x00003589) list_single_2graphic_pane_g3

0xc1c9,	// (0x0000c1c9) list_single_2graphic_pane_g4_ParamLimits

0xc1c9,	// (0x0000c1c9) list_single_2graphic_pane_g4

0x0003,

0xf52c,	// (0x0000f52c) list_single_2graphic_pane_g_ParamLimits

0xf52c,	// (0x0000f52c) list_single_2graphic_pane_g

0xc1da,	// (0x0000c1da) list_single_2graphic_pane_t1_ParamLimits

0xc1da,	// (0x0000c1da) list_single_2graphic_pane_t1

0xc208,	// (0x0000c208) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc208,	// (0x0000c208) list_double2_graphic_large_graphic_pane_g1

0xbb47,	// (0x0000bb47) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbb47,	// (0x0000bb47) list_double2_graphic_large_graphic_pane_g2

0xbb58,	// (0x0000bb58) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbb58,	// (0x0000bb58) list_double2_graphic_large_graphic_pane_g3

0xc21a,	// (0x0000c21a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc21a,	// (0x0000c21a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf535,	// (0x0000f535) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf535,	// (0x0000f535) list_double2_graphic_large_graphic_pane_g

0xc226,	// (0x0000c226) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc226,	// (0x0000c226) list_double2_graphic_large_graphic_pane_t1

0xc23c,	// (0x0000c23c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc23c,	// (0x0000c23c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf53e,	// (0x0000f53e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf53e,	// (0x0000f53e) list_double2_graphic_large_graphic_pane_t

0x2391,	// (0x00002391) popup_fast_swap_window_ParamLimits

0x2391,	// (0x00002391) popup_fast_swap_window

0x23ad,	// (0x000023ad) popup_side_volume_key_window

0x23c9,	// (0x000023c9) stacon_top_pane

0x23d3,	// (0x000023d3) status_pane_ParamLimits

0x23d3,	// (0x000023d3) status_pane

0xc27e,	// (0x0000c27e) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x12ad,	// (0x000012ad) scroll_pane_cp121

0x12a4,	// (0x000012a4) set_content_pane

0x2111,	// (0x00002111) bg_active_tab_pane_g1_cp1

0x211a,	// (0x0000211a) bg_active_tab_pane_g2_cp1

0x2123,	// (0x00002123) bg_active_tab_pane_g3_cp1

0x2111,	// (0x00002111) bg_passive_tab_pane_g1_cp1

0x211a,	// (0x0000211a) bg_passive_tab_pane_g2_cp1

0x2123,	// (0x00002123) bg_passive_tab_pane_g3_cp1

0x212c,	// (0x0000212c) bg_active_tab_pane_g1_cp2

0x211a,	// (0x0000211a) bg_active_tab_pane_g2_cp2

0x2135,	// (0x00002135) bg_active_tab_pane_g3_cp2

0x212c,	// (0x0000212c) bg_passive_tab_pane_g1_cp2

0x211a,	// (0x0000211a) bg_passive_tab_pane_g2_cp2

0x2135,	// (0x00002135) bg_passive_tab_pane_g3_cp2

0x213e,	// (0x0000213e) bg_active_tab_pane_g1_cp3

0x211a,	// (0x0000211a) bg_active_tab_pane_g2_cp3

0x2147,	// (0x00002147) bg_active_tab_pane_g3_cp3

0x213e,	// (0x0000213e) bg_passive_tab_pane_g1_cp3

0x211a,	// (0x0000211a) bg_passive_tab_pane_g2_cp3

0x2147,	// (0x00002147) bg_passive_tab_pane_g3_cp3

0x2150,	// (0x00002150) bg_active_tab_pane_g1_cp4

0x211a,	// (0x0000211a) bg_active_tab_pane_g2_cp4

0x215b,	// (0x0000215b) bg_active_tab_pane_g3_cp4

0x2150,	// (0x00002150) bg_passive_tab_pane_g1_cp4

0x211a,	// (0x0000211a) bg_passive_tab_pane_g2_cp4

0x215b,	// (0x0000215b) bg_passive_tab_pane_g3_cp4

0x22e5,	// (0x000022e5) bg_active_tab_pane_g1_cp5

0x211a,	// (0x0000211a) bg_active_tab_pane_g2_cp5

0x22ee,	// (0x000022ee) bg_active_tab_pane_g3_cp5

0x22e5,	// (0x000022e5) bg_passive_tab_pane_g1_cp5

0x211a,	// (0x0000211a) bg_passive_tab_pane_g2_cp5

0x22ee,	// (0x000022ee) bg_passive_tab_pane_g3_cp5

0x5856,	// (0x00005856) list_set_graphic_pane_ParamLimits

0x5856,	// (0x00005856) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xc24e,	// (0x0000c24e) list_set_graphic_pane_g1_ParamLimits

0xc24e,	// (0x0000c24e) list_set_graphic_pane_g1

0xc25a,	// (0x0000c25a) list_set_graphic_pane_g2_ParamLimits

0xc25a,	// (0x0000c25a) list_set_graphic_pane_g2

0x0001,

0xf543,	// (0x0000f543) list_set_graphic_pane_g_ParamLimits

0xf543,	// (0x0000f543) list_set_graphic_pane_g

0x0009,

0xb106,	// (0x0000b106) volume_small_pane_cp_g

0x2344,	// (0x00002344) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2344,	// (0x00002344) list_double2_large_graphic_pane_g1_cp2

0x2350,	// (0x00002350) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2350,	// (0x00002350) list_double2_large_graphic_pane_g2_cp2

0x2361,	// (0x00002361) list_double2_large_graphic_pane_g3_cp2

0x2369,	// (0x00002369) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2369,	// (0x00002369) list_double2_large_graphic_pane_t1_cp2

0x237f,	// (0x0000237f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x237f,	// (0x0000237f) list_double2_large_graphic_pane_t2_cp2

0x4b37,	// (0x00004b37) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4b37,	// (0x00004b37) list_double_large_graphic_pane_g1_cp2

0x4b48,	// (0x00004b48) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4b48,	// (0x00004b48) list_double_large_graphic_pane_g2_cp2

0x24fa,	// (0x000024fa) list_double_large_graphic_pane_g3_cp2

0x4b59,	// (0x00004b59) list_double_large_graphic_pane_g4_cp

0x4b61,	// (0x00004b61) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4b61,	// (0x00004b61) list_double_large_graphic_pane_t1_cp2

0x4b78,	// (0x00004b78) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4b78,	// (0x00004b78) list_double_large_graphic_pane_t2_cp2

0x23ec,	// (0x000023ec) list_double2_graphic_pane_g1_cp2_ParamLimits

0x23ec,	// (0x000023ec) list_double2_graphic_pane_g1_cp2

0x23fa,	// (0x000023fa) list_double2_graphic_pane_g2_cp2_ParamLimits

0x23fa,	// (0x000023fa) list_double2_graphic_pane_g2_cp2

0x240b,	// (0x0000240b) list_double2_graphic_pane_g3_cp2

0x2415,	// (0x00002415) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2415,	// (0x00002415) list_double2_graphic_pane_t1_cp2

0x242b,	// (0x0000242b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x242b,	// (0x0000242b) list_double2_graphic_pane_t2_cp2

0x243d,	// (0x0000243d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x243d,	// (0x0000243d) list_single_number_heading_pane_g1_cp2

0x2449,	// (0x00002449) list_single_number_heading_pane_g2_cp2

0x2451,	// (0x00002451) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2451,	// (0x00002451) list_single_number_heading_pane_t1_cp2

0x2467,	// (0x00002467) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2467,	// (0x00002467) list_single_number_heading_pane_t2_cp2

0x2479,	// (0x00002479) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2479,	// (0x00002479) list_single_number_heading_pane_t3_cp2

0x243d,	// (0x0000243d) list_single_heading_pane_g1_cp2_ParamLimits

0x243d,	// (0x0000243d) list_single_heading_pane_g1_cp2

0x2449,	// (0x00002449) list_single_heading_pane_g2_cp2

0x2451,	// (0x00002451) list_single_heading_pane_t1_cp2_ParamLimits

0x2451,	// (0x00002451) list_single_heading_pane_t1_cp2

0x493f,	// (0x0000493f) list_single_heading_pane_t2_cp2_ParamLimits

0x493f,	// (0x0000493f) list_single_heading_pane_t2_cp2

0x4887,	// (0x00004887) list_double_graphic_pane_g1_cp2_ParamLimits

0x4887,	// (0x00004887) list_double_graphic_pane_g1_cp2

0x4893,	// (0x00004893) list_double_graphic_pane_g2_cp2_ParamLimits

0x4893,	// (0x00004893) list_double_graphic_pane_g2_cp2

0x48a2,	// (0x000048a2) list_double_graphic_pane_g3_cp2

0x48aa,	// (0x000048aa) list_double_graphic_pane_t1_cp2_ParamLimits

0x48aa,	// (0x000048aa) list_double_graphic_pane_t1_cp2

0x48c0,	// (0x000048c0) list_double_graphic_pane_t2_cp2_ParamLimits

0x48c0,	// (0x000048c0) list_double_graphic_pane_t2_cp2

0x24ee,	// (0x000024ee) list_double_number_pane_g1_cp2_ParamLimits

0x24ee,	// (0x000024ee) list_double_number_pane_g1_cp2

0x24fa,	// (0x000024fa) list_double_number_pane_g2_cp2

0x484b,	// (0x0000484b) list_double_number_pane_t1_cp2_ParamLimits

0x484b,	// (0x0000484b) list_double_number_pane_t1_cp2

0x485f,	// (0x0000485f) list_double_number_pane_t2_cp2_ParamLimits

0x485f,	// (0x0000485f) list_double_number_pane_t2_cp2

0x4875,	// (0x00004875) list_double_number_pane_t3_cp2_ParamLimits

0x4875,	// (0x00004875) list_double_number_pane_t3_cp2

0x4723,	// (0x00004723) list_single_graphic_pane_g1_cp2_ParamLimits

0x4723,	// (0x00004723) list_single_graphic_pane_g1_cp2

0x2552,	// (0x00002552) list_single_graphic_pane_g2_cp2_ParamLimits

0x2552,	// (0x00002552) list_single_graphic_pane_g2_cp2

0x255e,	// (0x0000255e) list_single_graphic_pane_g3_cp2

0x46f9,	// (0x000046f9) list_single_graphic_pane_t1_cp2_ParamLimits

0x46f9,	// (0x000046f9) list_single_graphic_pane_t1_cp2

0x2552,	// (0x00002552) list_single_number_pane_g1_cp2_ParamLimits

0x2552,	// (0x00002552) list_single_number_pane_g1_cp2

0x255e,	// (0x0000255e) list_single_number_pane_g2_cp2

0x46f9,	// (0x000046f9) list_single_number_pane_t1_cp2_ParamLimits

0x46f9,	// (0x000046f9) list_single_number_pane_t1_cp2

0x470f,	// (0x0000470f) list_single_number_pane_t2_cp2_ParamLimits

0x470f,	// (0x0000470f) list_single_number_pane_t2_cp2

0x2350,	// (0x00002350) list_double2_pane_g1_cp2_ParamLimits

0x2350,	// (0x00002350) list_double2_pane_g1_cp2

0x2361,	// (0x00002361) list_double2_pane_g2_cp2

0x24c6,	// (0x000024c6) list_double2_pane_t1_cp2_ParamLimits

0x24c6,	// (0x000024c6) list_double2_pane_t1_cp2

0x24dc,	// (0x000024dc) list_double2_pane_t2_cp2_ParamLimits

0x24dc,	// (0x000024dc) list_double2_pane_t2_cp2

0x24ee,	// (0x000024ee) list_double_pane_g1_cp2_ParamLimits

0x24ee,	// (0x000024ee) list_double_pane_g1_cp2

0x24fa,	// (0x000024fa) list_double_pane_g2_cp2

0x2502,	// (0x00002502) list_double_pane_t1_cp2_ParamLimits

0x2502,	// (0x00002502) list_double_pane_t1_cp2

0x2518,	// (0x00002518) list_double_pane_t2_cp2_ParamLimits

0x2518,	// (0x00002518) list_double_pane_t2_cp2

0x2542,	// (0x00002542) list_single_pane_cp2_g3

0x2552,	// (0x00002552) list_single_pane_g1_cp2_ParamLimits

0x2552,	// (0x00002552) list_single_pane_g1_cp2

0x255e,	// (0x0000255e) list_single_pane_g2_cp2

0x2566,	// (0x00002566) list_single_pane_t1_cp2_ParamLimits

0x2566,	// (0x00002566) list_single_pane_t1_cp2

0x257e,	// (0x0000257e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x257e,	// (0x0000257e) list_single_large_graphic_pane_g1_cp2

0x258a,	// (0x0000258a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x258a,	// (0x0000258a) list_single_large_graphic_pane_g2_cp2

0x2596,	// (0x00002596) list_single_large_graphic_pane_g3_cp2

0x259e,	// (0x0000259e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x259e,	// (0x0000259e) list_single_large_graphic_pane_g4_cp1

0x25b8,	// (0x000025b8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x25b8,	// (0x000025b8) list_single_large_graphic_pane_t1_cp2

0x4572,	// (0x00004572) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4572,	// (0x00004572) list_single_graphic_heading_pane_g1_cp2

0x453f,	// (0x0000453f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x453f,	// (0x0000453f) list_single_graphic_heading_pane_g4_cp2

0x255e,	// (0x0000255e) list_single_graphic_heading_pane_g5_cp2

0x457e,	// (0x0000457e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x457e,	// (0x0000457e) list_single_graphic_heading_pane_t1_cp2

0x4594,	// (0x00004594) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4594,	// (0x00004594) list_single_graphic_heading_pane_t2_cp2

0x4533,	// (0x00004533) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4533,	// (0x00004533) list_single_2graphic_pane_g1_cp2

0x453f,	// (0x0000453f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x453f,	// (0x0000453f) list_single_2graphic_pane_g2_cp2

0x255e,	// (0x0000255e) list_single_2graphic_pane_g3_cp2

0x4550,	// (0x00004550) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4550,	// (0x00004550) list_single_2graphic_pane_g4_cp2

0x455c,	// (0x0000455c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x455c,	// (0x0000455c) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x410b,	// (0x0000410b) list_highlight_pane_g1_cp1

0x4113,	// (0x00004113) list_highlight_pane_g2_cp1

0x411b,	// (0x0000411b) list_highlight_pane_g3_cp1

0x4123,	// (0x00004123) list_highlight_pane_g4_cp1

0x412b,	// (0x0000412b) list_highlight_pane_g5_cp1

0x4133,	// (0x00004133) list_highlight_pane_g6_cp1

0x413b,	// (0x0000413b) list_highlight_pane_g7_cp1

0x4143,	// (0x00004143) list_highlight_pane_g8_cp1

0x414b,	// (0x0000414b) list_highlight_pane_g9_cp1

0xd186,	// (0x0000d186) form_field_slider_pane_t3

0xd194,	// (0x0000d194) form_field_slider_pane_t4

0x4047,	// (0x00004047) slider_form_pane_ParamLimits

0x4047,	// (0x00004047) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4989,	// (0x00004989) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xaf21,	// (0x0000af21) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x25ce,	// (0x000025ce) text_digital

0x25dd,	// (0x000025dd) text_primary

0x25ec,	// (0x000025ec) text_primary_small

0x25fb,	// (0x000025fb) text_secondary

0x260a,	// (0x0000260a) text_title

0x527d,	// (0x0000527d) bg_passive_tab_pane_g1_cp3_srt

0x211a,	// (0x0000211a) bg_passive_tab_pane_g2_cp3_srt

0x5286,	// (0x00005286) bg_passive_tab_pane_g3_cp3_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt

0x528f,	// (0x0000528f) tabs_4_active_pane_srt_g1

0xd519,	// (0x0000d519) tabs_4_active_pane_srt_t1_ParamLimits

0xd519,	// (0x0000d519) tabs_4_active_pane_srt_t1

0x527d,	// (0x0000527d) bg_active_tab_pane_g1_cp3_copy1

0x211a,	// (0x0000211a) bg_active_tab_pane_g2_cp3_copy1

0x5286,	// (0x00005286) bg_active_tab_pane_g3_cp3_copy1

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt

0x2b90,	// (0x00002b90) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b90,	// (0x00002b90) bg_passive_tab_pane_cp4_srt

0x4e30,	// (0x00004e30) bg_passive_tab_pane_g1_cp4_srt

0x211a,	// (0x0000211a) bg_passive_tab_pane_g2_cp4_srt

0x4e39,	// (0x00004e39) bg_passive_tab_pane_g3_cp4_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt

0xd305,	// (0x0000d305) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd305,	// (0x0000d305) tabs_2_long_active_pane_srt_t1

0x4e30,	// (0x00004e30) bg_active_tab_pane_g1_cp4_srt

0x211a,	// (0x0000211a) bg_active_tab_pane_g2_cp4_srt

0x4e39,	// (0x00004e39) bg_active_tab_pane_g3_cp4_srt

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt

0x2b90,	// (0x00002b90) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b90,	// (0x00002b90) bg_passive_tab_pane_cp5_srt

0x22e5,	// (0x000022e5) bg_passive_tab_pane_g1_cp5_srt

0x211a,	// (0x0000211a) bg_passive_tab_pane_g2_cp5_srt

0x22ee,	// (0x000022ee) bg_passive_tab_pane_g3_cp5_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt

0xd2ef,	// (0x0000d2ef) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd2ef,	// (0x0000d2ef) tabs_3_long_active_pane_srt_t1

0x22e5,	// (0x000022e5) bg_active_tab_pane_g1_cp5_srt

0x211a,	// (0x0000211a) bg_active_tab_pane_g2_cp5_srt

0x22ee,	// (0x000022ee) bg_active_tab_pane_g3_cp5_srt

0x4e10,	// (0x00004e10) navi_text_pane_srt_t1

0x4e08,	// (0x00004e08) navi_icon_pane_srt_g1

0x287c,	// (0x0000287c) midp_editing_number_pane_srt

0x2619,	// (0x00002619) midp_ticker_pane_srt

0x2884,	// (0x00002884) midp_ticker_pane_srt_g1

0x288c,	// (0x0000288c) midp_ticker_pane_srt_g2

0x0001,

0xadab,	// (0x0000adab) midp_ticker_pane_srt_g

0x2894,	// (0x00002894) midp_ticker_pane_srt_t1

0x4df9,	// (0x00004df9) midp_editing_number_pane_t1_copy1

0x2b90,	// (0x00002b90) listscroll_midp_pane

0x2b90,	// (0x00002b90) midp_form_pane

0x2685,	// (0x00002685) midp_info_popup_window_ParamLimits

0x2685,	// (0x00002685) midp_info_popup_window

0x15c2,	// (0x000015c2) bg_popup_sub_pane_cp50_ParamLimits

0x15c2,	// (0x000015c2) bg_popup_sub_pane_cp50

0x3d43,	// (0x00003d43) listscroll_midp_info_pane_ParamLimits

0x3d43,	// (0x00003d43) listscroll_midp_info_pane

0x3d2b,	// (0x00003d2b) listscroll_form_midp_pane_ParamLimits

0x3d2b,	// (0x00003d2b) listscroll_form_midp_pane

0x3d37,	// (0x00003d37) scroll_bar_cp050

0xd17a,	// (0x0000d17a) list_midp_pane

0x60b2,	// (0x000060b2) signal_pane_g2_cp

0x3c45,	// (0x00003c45) listscroll_midp_info_pane_t1_ParamLimits

0x3c45,	// (0x00003c45) listscroll_midp_info_pane_t1

0x3c5d,	// (0x00003c5d) listscroll_midp_info_pane_t2_ParamLimits

0x3c5d,	// (0x00003c5d) listscroll_midp_info_pane_t2

0x3c9b,	// (0x00003c9b) listscroll_midp_info_pane_t3_ParamLimits

0x3c9b,	// (0x00003c9b) listscroll_midp_info_pane_t3

0x3cd5,	// (0x00003cd5) listscroll_midp_info_pane_t4_ParamLimits

0x3cd5,	// (0x00003cd5) listscroll_midp_info_pane_t4

0x0003,

0xae5c,	// (0x0000ae5c) listscroll_midp_info_pane_t_ParamLimits

0xae5c,	// (0x0000ae5c) listscroll_midp_info_pane_t

0x1686,	// (0x00001686) scroll_pane_cp21

0x3be3,	// (0x00003be3) form_midp_field_choice_group_pane

0x3bec,	// (0x00003bec) form_midp_field_text_pane

0x3c2b,	// (0x00003c2b) form_midp_field_time_pane

0x3c33,	// (0x00003c33) form_midp_gauge_slider_pane

0x3c3c,	// (0x00003c3c) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xd163,	// (0x0000d163) list_single_midp_pane_ParamLimits

0xd163,	// (0x0000d163) list_single_midp_pane

0xd141,	// (0x0000d141) form_midp_field_text_pane_t1

0x389f,	// (0x0000389f) input_focus_pane_cp050

0x3ba3,	// (0x00003ba3) list_midp_form_text_pane

0x3b3b,	// (0x00003b3b) form_midp_field_choice_group_pane_t1

0x3b49,	// (0x00003b49) input_focus_pane_cp051

0x3b5d,	// (0x00003b5d) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3b1f,	// (0x00003b1f) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3b2d,	// (0x00003b2d) form_midp_field_time_pane_t2

0x0001,

0x2733,	// (0x00002733) aid_navinavi_width_2_pane

0xae57,	// (0x0000ae57) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3adf,	// (0x00003adf) form_midp_gauge_slider_pane_t1

0x3aed,	// (0x00003aed) form_midp_gauge_slider_pane_t2

0xd125,	// (0x0000d125) form_midp_gauge_slider_pane_t3

0xd133,	// (0x0000d133) form_midp_gauge_slider_pane_t4

0x0003,

0xf595,	// (0x0000f595) form_midp_gauge_slider_pane_t

0x3b17,	// (0x00003b17) form_midp_slider_pane

0x0507,	// (0x00000507) bg_input_focus_pane_cp041_ParamLimits

0x0507,	// (0x00000507) bg_input_focus_pane_cp041

0x3aac,	// (0x00003aac) form_midp_gauge_wait_pane_t1_ParamLimits

0x3aac,	// (0x00003aac) form_midp_gauge_wait_pane_t1

0x3abe,	// (0x00003abe) form_midp_gauge_wait_pane_t2_ParamLimits

0x3abe,	// (0x00003abe) form_midp_gauge_wait_pane_t2

0x0001,

0xae49,	// (0x0000ae49) form_midp_gauge_wait_pane_t_ParamLimits

0xae49,	// (0x0000ae49) form_midp_gauge_wait_pane_t

0x3ad0,	// (0x00003ad0) form_midp_wait_pane_ParamLimits

0x3ad0,	// (0x00003ad0) form_midp_wait_pane

0x3a76,	// (0x00003a76) form_midp_image_pane_g1

0x3a7f,	// (0x00003a7f) form_midp_image_pane_t1

0x3a8e,	// (0x00003a8e) form_midp_image_pane_t2

0x3a9d,	// (0x00003a9d) form_midp_image_pane_t3

0x0002,

0xae42,	// (0x0000ae42) form_midp_image_pane_t

0x3a5e,	// (0x00003a5e) list_single_midp_pane_g1

0x3a67,	// (0x00003a67) list_single_midp_pane_t1

0xd110,	// (0x0000d110) list_midp_form_item_pane_ParamLimits

0xd110,	// (0x0000d110) list_midp_form_item_pane

0x26db,	// (0x000026db) list_midp_form_item_pane_t1

0x26ea,	// (0x000026ea) midp_ticker_pane_g1

0x26f6,	// (0x000026f6) midp_ticker_pane_g2

0x0001,

0xad91,	// (0x0000ad91) midp_ticker_pane_g

0x2702,	// (0x00002702) midp_ticker_pane_t1

0x50f5,	// (0x000050f5) midp_editing_number_pane_t1

0x50d3,	// (0x000050d3) midp_editing_number_pane

0x50e2,	// (0x000050e2) midp_ticker_pane

0x4dc1,	// (0x00004dc1) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4dc9,	// (0x00004dc9) listscroll_ai_message_pane

0x4d4b,	// (0x00004d4b) ai_message_heading_pane_g1_ParamLimits

0x4d4b,	// (0x00004d4b) ai_message_heading_pane_g1

0x4d57,	// (0x00004d57) ai_message_heading_pane_g2_ParamLimits

0x4d57,	// (0x00004d57) ai_message_heading_pane_g2

0x4d63,	// (0x00004d63) ai_message_heading_pane_g3_ParamLimits

0x4d63,	// (0x00004d63) ai_message_heading_pane_g3

0x4d6f,	// (0x00004d6f) ai_message_heading_pane_g4_ParamLimits

0x4d6f,	// (0x00004d6f) ai_message_heading_pane_g4

0x0003,

0xaf83,	// (0x0000af83) ai_message_heading_pane_g_ParamLimits

0xaf83,	// (0x0000af83) ai_message_heading_pane_g

0x4d7b,	// (0x00004d7b) ai_message_heading_pane_t1_ParamLimits

0x4d7b,	// (0x00004d7b) ai_message_heading_pane_t1

0x4d95,	// (0x00004d95) ai_message_heading_pane_t2_ParamLimits

0x4d95,	// (0x00004d95) ai_message_heading_pane_t2

0x0001,

0xaf8c,	// (0x0000af8c) ai_message_heading_pane_t_ParamLimits

0xaf8c,	// (0x0000af8c) ai_message_heading_pane_t

0x4da7,	// (0x00004da7) bg_popup_heading_pane_cp1_ParamLimits

0x4da7,	// (0x00004da7) bg_popup_heading_pane_cp1

0x4d39,	// (0x00004d39) list_ai_message_pane_ParamLimits

0x4d39,	// (0x00004d39) list_ai_message_pane

0x1686,	// (0x00001686) scroll_pane_cp10

0x4c85,	// (0x00004c85) list_ai_message_pane_g1

0x4c8d,	// (0x00004c8d) list_ai_message_pane_g2

0x0001,

0xaf60,	// (0x0000af60) list_ai_message_pane_g

0x4c95,	// (0x00004c95) list_ai_message_pane_t1_ParamLimits

0x4c95,	// (0x00004c95) list_ai_message_pane_t1

0x4caa,	// (0x00004caa) list_ai_message_pane_t2_ParamLimits

0x4caa,	// (0x00004caa) list_ai_message_pane_t2

0x4cbf,	// (0x00004cbf) list_ai_message_pane_t3_ParamLimits

0x4cbf,	// (0x00004cbf) list_ai_message_pane_t3

0x4cd4,	// (0x00004cd4) list_ai_message_pane_t4_ParamLimits

0x4cd4,	// (0x00004cd4) list_ai_message_pane_t4

0x0003,

0xaf65,	// (0x0000af65) list_ai_message_pane_t_ParamLimits

0xaf65,	// (0x0000af65) list_ai_message_pane_t

0xd2bc,	// (0x0000d2bc) cell_ai_soft_ind_pane_ParamLimits

0xd2bc,	// (0x0000d2bc) cell_ai_soft_ind_pane

0x2714,	// (0x00002714) cell_ai_soft_ind_pane_g1_ParamLimits

0x2714,	// (0x00002714) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x2721,	// (0x00002721) text_secondary_cp56_ParamLimits

0x2721,	// (0x00002721) text_secondary_cp56

0x4c45,	// (0x00004c45) example_general_pane_ParamLimits

0x4c45,	// (0x00004c45) example_general_pane

0x4c51,	// (0x00004c51) example_parent_pane_g1_ParamLimits

0x4c51,	// (0x00004c51) example_parent_pane_g1

0x4c5d,	// (0x00004c5d) example_parent_pane_t1_ParamLimits

0x4c5d,	// (0x00004c5d) example_parent_pane_t1

0xc95b,	// (0x0000c95b) popup_preview_text_window_ParamLimits

0xc95b,	// (0x0000c95b) popup_preview_text_window

0x254a,	// (0x0000254a) list_single_pane_cp2_g4

0x08e3,	// (0x000008e3) bg_popup_preview_window_pane_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_preview_window_pane

0x4991,	// (0x00004991) popup_preview_text_window_t1_ParamLimits

0x4991,	// (0x00004991) popup_preview_text_window_t1

0x49af,	// (0x000049af) popup_preview_text_window_t2_ParamLimits

0x49af,	// (0x000049af) popup_preview_text_window_t2

0x49f8,	// (0x000049f8) popup_preview_text_window_t3_ParamLimits

0x49f8,	// (0x000049f8) popup_preview_text_window_t3

0x4a3d,	// (0x00004a3d) popup_preview_text_window_t4_ParamLimits

0x4a3d,	// (0x00004a3d) popup_preview_text_window_t4

0x0004,

0xaf34,	// (0x0000af34) popup_preview_text_window_t_ParamLimits

0xaf34,	// (0x0000af34) popup_preview_text_window_t

0x4abb,	// (0x00004abb) scroll_pane_cp11

0x36e5,	// (0x000036e5) bg_popup_preview_window_pane_g1

0x4951,	// (0x00004951) bg_popup_preview_window_pane_g2

0x4959,	// (0x00004959) bg_popup_preview_window_pane_g3

0x4961,	// (0x00004961) bg_popup_preview_window_pane_g4

0x4969,	// (0x00004969) bg_popup_preview_window_pane_g5

0x4971,	// (0x00004971) bg_popup_preview_window_pane_g6

0x4979,	// (0x00004979) bg_popup_preview_window_pane_g7

0x4981,	// (0x00004981) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc8d7,	// (0x0000c8d7) popup_midp_note_alarm_window_ParamLimits

0xc8d7,	// (0x0000c8d7) popup_midp_note_alarm_window

0x136e,	// (0x0000136e) data_form_pane_ParamLimits

0xbecf,	// (0x0000becf) form_field_data_pane_g1

0xbed9,	// (0x0000bed9) form_field_data_pane_t1_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_ParamLimits

0x13aa,	// (0x000013aa) data_form_wide_pane_ParamLimits

0x13b6,	// (0x000013b6) form_field_data_wide_pane_g1

0x13d6,	// (0x000013d6) form_field_data_wide_pane_t1_ParamLimits

0x0b92,	// (0x00000b92) input_focus_pane_cp6_ParamLimits

0xc015,	// (0x0000c015) input_popup_find_pane_g1_ParamLimits

0xc015,	// (0x0000c015) input_popup_find_pane_g1

0x19b4,	// (0x000019b4) aid_navi_side_left_pane

0x19c9,	// (0x000019c9) aid_navi_side_right_pane

0x4206,	// (0x00004206) bg_popup_window_pane_cp30_ParamLimits

0x4206,	// (0x00004206) bg_popup_window_pane_cp30

0x4280,	// (0x00004280) popup_midp_note_alarm_window_g1_ParamLimits

0x4280,	// (0x00004280) popup_midp_note_alarm_window_g1

0x42b0,	// (0x000042b0) popup_midp_note_alarm_window_t1_ParamLimits

0x42b0,	// (0x000042b0) popup_midp_note_alarm_window_t1

0x4351,	// (0x00004351) popup_midp_note_alarm_window_t2_ParamLimits

0x4351,	// (0x00004351) popup_midp_note_alarm_window_t2

0x43ff,	// (0x000043ff) popup_midp_note_alarm_window_t3_ParamLimits

0x43ff,	// (0x000043ff) popup_midp_note_alarm_window_t3

0x4431,	// (0x00004431) popup_midp_note_alarm_window_t4_ParamLimits

0x4431,	// (0x00004431) popup_midp_note_alarm_window_t4

0x4457,	// (0x00004457) popup_midp_note_alarm_window_t5_ParamLimits

0x4457,	// (0x00004457) popup_midp_note_alarm_window_t5

0x000a,

0xaed1,	// (0x0000aed1) popup_midp_note_alarm_window_t_ParamLimits

0xaed1,	// (0x0000aed1) popup_midp_note_alarm_window_t

0x4503,	// (0x00004503) wait_bar_pane_cp1_ParamLimits

0x4503,	// (0x00004503) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3eec,	// (0x00003eec) wait_border_pane_g1_copy1

0x13ed,	// (0x000013ed) form_field_popup_pane_g1

0xbef3,	// (0x0000bef3) form_field_popup_pane_t1_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp7_ParamLimits

0x140d,	// (0x0000140d) list_form_pane_ParamLimits

0x1419,	// (0x00001419) form_field_popup_wide_pane_g1

0x1421,	// (0x00001421) form_field_popup_wide_pane_t1_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp8_ParamLimits

0x1436,	// (0x00001436) list_form_wide_pane_ParamLimits

0x5315,	// (0x00005315) aid_size_cell_graphic_pane

0xbf72,	// (0x0000bf72) data_form_pane_t1_ParamLimits

0xd470,	// (0x0000d470) data_form_wide_pane_t1_ParamLimits

0xcd23,	// (0x0000cd23) bg_status_flat_pane

0xb799,	// (0x0000b799) title_pane_t1_ParamLimits

0x04cf,	// (0x000004cf) title_pane_t2_ParamLimits

0x04f5,	// (0x000004f5) title_pane_t3_ParamLimits

0xf450,	// (0x0000f450) title_pane_t_ParamLimits

0x1ccb,	// (0x00001ccb) level_1_signal_ParamLimits

0x1cdd,	// (0x00001cdd) level_2_signal_ParamLimits

0x1cf0,	// (0x00001cf0) level_3_signal_ParamLimits

0x1d03,	// (0x00001d03) level_4_signal_ParamLimits

0x1d16,	// (0x00001d16) level_5_signal_ParamLimits

0x1d29,	// (0x00001d29) level_6_signal_ParamLimits

0x1d3c,	// (0x00001d3c) level_7_signal_ParamLimits

0x1ccb,	// (0x00001ccb) level_1_battery_ParamLimits

0x1cdd,	// (0x00001cdd) level_2_battery_ParamLimits

0x1cf0,	// (0x00001cf0) level_3_battery_ParamLimits

0x1d03,	// (0x00001d03) level_4_battery_ParamLimits

0x1d16,	// (0x00001d16) level_5_battery_ParamLimits

0x1d29,	// (0x00001d29) level_6_battery_ParamLimits

0x1d3c,	// (0x00001d3c) level_7_battery_ParamLimits

0x410b,	// (0x0000410b) bg_status_flat_pane_g1

0x4113,	// (0x00004113) bg_status_flat_pane_g2

0x411b,	// (0x0000411b) bg_status_flat_pane_g3

0x4123,	// (0x00004123) bg_status_flat_pane_g4

0x412b,	// (0x0000412b) bg_status_flat_pane_g5

0x4133,	// (0x00004133) bg_status_flat_pane_g6

0x413b,	// (0x0000413b) bg_status_flat_pane_g7

0xb825,	// (0x0000b825) tabs_3_active_pane_t1_ParamLimits

0xb825,	// (0x0000b825) tabs_3_passive_pane_t1_ParamLimits

0xb837,	// (0x0000b837) tabs_4_active_pane_t1_ParamLimits

0xb837,	// (0x0000b837) tabs_4_1_passive_pane_t1_ParamLimits

0xc023,	// (0x0000c023) tabs_2_active_pane_t1_ParamLimits

0xc023,	// (0x0000c023) tabs_2_passive_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_ParamLimits

0xc035,	// (0x0000c035) tabs_2_long_active_pane_t1_ParamLimits

0x2b90,	// (0x00002b90) bg_passive_tab_pane_cp4_ParamLimits

0x37c2,	// (0x000037c2) list_single_midp_graphic_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_ParamLimits

0xc048,	// (0x0000c048) tabs_3_long_active_pane_t1_ParamLimits

0x2b90,	// (0x00002b90) bg_passive_tab_pane_cp5_ParamLimits

0x37c2,	// (0x000037c2) list_single_midp_graphic_pane_t1

0xcd23,	// (0x0000cd23) bg_status_flat_pane_ParamLimits

0x32cf,	// (0x000032cf) indicator_pane_cp2_ParamLimits

0x32cf,	// (0x000032cf) indicator_pane_cp2

0xcea1,	// (0x0000cea1) navi_pane_srt_ParamLimits

0xcea1,	// (0x0000cea1) navi_pane_srt

0x341e,	// (0x0000341e) popup_clock_digital_analogue_window_cp1

0x068f,	// (0x0000068f) indicator_pane_t1

0x2619,	// (0x00002619) copy_highlight_pane

0x2619,	// (0x00002619) cursor_graphics_pane

0x2619,	// (0x00002619) graphic_within_text_pane

0x2619,	// (0x00002619) link_highlight_pane

0x4a7e,	// (0x00004a7e) popup_preview_text_window_t5_ParamLimits

0x4a7e,	// (0x00004a7e) popup_preview_text_window_t5

0x273b,	// (0x0000273b) cursor_digital_pane

0x273b,	// (0x0000273b) cursor_primary_pane

0x274c,	// (0x0000274c) cursor_primary_small_pane

0x2754,	// (0x00002754) cursor_secondary_pane

0x275c,	// (0x0000275c) cursor_title_pane

0x273b,	// (0x0000273b) link_highlight_digital_pane

0x2743,	// (0x00002743) link_highlight_primary_pane

0x274c,	// (0x0000274c) link_highlight_primary_small_pane

0x2754,	// (0x00002754) link_highlight_secondary_pane

0x275c,	// (0x0000275c) link_highlight_title_pane

0x273b,	// (0x0000273b) copy_highlight_digital_pane

0x273b,	// (0x0000273b) copy_highlight_primary_pane

0x274c,	// (0x0000274c) copy_highlight_primary_small_pane

0x2754,	// (0x00002754) copy_highlight_secondary_pane

0x275c,	// (0x0000275c) copy_highlight_title_pane

0x2754,	// (0x00002754) graphic_text_digital_pane

0x41a9,	// (0x000041a9) graphic_text_primary_pane

0x41b2,	// (0x000041b2) graphic_text_primary_small_pane

0x274c,	// (0x0000274c) graphic_text_secondary_pane

0x273b,	// (0x0000273b) graphic_text_title_pane

0xc322,	// (0x0000c322) cursor_primary_pane_g1

0x419b,	// (0x0000419b) cursor_text_primary_t1

0xd1b6,	// (0x0000d1b6) cursor_primary_small_pane_g1

0x418d,	// (0x0000418d) cursor_text_primary_small_t1

0xd1ac,	// (0x0000d1ac) cursor_primary_small_pane_g1_copy1

0x4175,	// (0x00004175) cursor_text_primary_small_t1_copy1

0x4153,	// (0x00004153) cursor_text_title_t1

0xd1a2,	// (0x0000d1a2) cursor_title_pane_g1

0xc322,	// (0x0000c322) cursor_digital_pane_g1

0x276e,	// (0x0000276e) cursor_text_digital_t1

0x2793,	// (0x00002793) link_highlight_primary_pane_g1

0x40fc,	// (0x000040fc) link_highlight_primary_pane_t1

0x277c,	// (0x0000277c) link_highlight_primary_small_pane_g1

0x2784,	// (0x00002784) link_highlight_primary_small_pane_t1

0x2793,	// (0x00002793) link_highlight_secondary_pane_g1

0x279b,	// (0x0000279b) link_highlight_secondary_pane_t1

0x4070,	// (0x00004070) link_highlight_title_pane_g1

0x4078,	// (0x00004078) link_highlight_title_pane_t1

0x4059,	// (0x00004059) link_highlight_digital_pane_g1

0x4061,	// (0x00004061) link_highlight_digital_pane_t1

0x3f31,	// (0x00003f31) copy_highlight_primary_pane_g1

0x3f39,	// (0x00003f39) copy_highlight_primary_pane_t1

0x3f0b,	// (0x00003f0b) copy_highlight_primary_small_pane_g1

0x3f22,	// (0x00003f22) copy_highlight_primary_small_pane_t1

0x27aa,	// (0x000027aa) copy_highlight_secondary_pane_g1

0x27b2,	// (0x000027b2) copy_highlight_secondary_pane_t1

0x3f0b,	// (0x00003f0b) copy_highlight_title_pane_g1

0x3f13,	// (0x00003f13) copy_highlight_title_pane_t1

0x3f31,	// (0x00003f31) copy_highlight_digital_pane_g1

0x5597,	// (0x00005597) copy_highlight_digital_pane_t1

0x54eb,	// (0x000054eb) graphic_text_primary_pane_g1

0x557b,	// (0x0000557b) graphic_text_primary_pane_t1

0x5589,	// (0x00005589) graphic_text_primary_pane_t2

0x0001,

0xb000,	// (0x0000b000) graphic_text_primary_pane_t

0x5557,	// (0x00005557) graphic_text_primary_small_pane_g1

0x555f,	// (0x0000555f) graphic_text_primary_small_pane_t1

0x556d,	// (0x0000556d) graphic_text_primary_small_pane_t2

0x0001,

0xaffb,	// (0x0000affb) graphic_text_primary_small_pane_t

0x5533,	// (0x00005533) graphic_text_secondary_pane_g1

0x553b,	// (0x0000553b) graphic_text_secondary_pane_t1

0x5549,	// (0x00005549) graphic_text_secondary_pane_t2

0x0001,

0xaff6,	// (0x0000aff6) graphic_text_secondary_pane_t

0x550f,	// (0x0000550f) graphic_text_title_pane_g1

0x5517,	// (0x00005517) graphic_text_title_pane_t1

0x5525,	// (0x00005525) graphic_text_title_pane_t2

0x0001,

0xaff1,	// (0x0000aff1) graphic_text_title_pane_t

0x54eb,	// (0x000054eb) graphic_text_digital_pane_g1

0x54f3,	// (0x000054f3) graphic_text_digital_pane_t1

0x5501,	// (0x00005501) graphic_text_digital_pane_t2

0x0001,

0xafec,	// (0x0000afec) graphic_text_digital_pane_t

0x0507,	// (0x00000507) navi_icon_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x0507,	// (0x00000507) navi_text_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_text_pane_srt

0x54b6,	// (0x000054b6) navi_navi_icon_text_pane_srt

0x54be,	// (0x000054be) navi_navi_pane_srt_g1_ParamLimits

0x54be,	// (0x000054be) navi_navi_pane_srt_g1

0x54d0,	// (0x000054d0) navi_navi_pane_srt_g2_ParamLimits

0x54d0,	// (0x000054d0) navi_navi_pane_srt_g2

0x0001,

0xafe7,	// (0x0000afe7) navi_navi_pane_srt_g_ParamLimits

0xafe7,	// (0x0000afe7) navi_navi_pane_srt_g

0x54e2,	// (0x000054e2) navi_navi_tabs_pane_srt

0x54b6,	// (0x000054b6) navi_navi_text_pane_srt

0x54b6,	// (0x000054b6) navi_navi_volume_pane_srt

0x54a7,	// (0x000054a7) navi_navi_text_pane_srt_t1

0x5482,	// (0x00005482) navi_navi_volume_pane_srt_g1

0x548a,	// (0x0000548a) volume_small_pane_srt_ParamLimits

0x548a,	// (0x0000548a) volume_small_pane_srt

0x27c1,	// (0x000027c1) volume_small_pane_srt_g1_ParamLimits

0x27c1,	// (0x000027c1) volume_small_pane_srt_g1

0x27d1,	// (0x000027d1) volume_small_pane_srt_g2_ParamLimits

0x27d1,	// (0x000027d1) volume_small_pane_srt_g2

0x27e2,	// (0x000027e2) volume_small_pane_srt_g3_ParamLimits

0x27e2,	// (0x000027e2) volume_small_pane_srt_g3

0x27f3,	// (0x000027f3) volume_small_pane_srt_g4_ParamLimits

0x27f3,	// (0x000027f3) volume_small_pane_srt_g4

0x2804,	// (0x00002804) volume_small_pane_srt_g5_ParamLimits

0x2804,	// (0x00002804) volume_small_pane_srt_g5

0x2815,	// (0x00002815) volume_small_pane_srt_g6_ParamLimits

0x2815,	// (0x00002815) volume_small_pane_srt_g6

0x2826,	// (0x00002826) volume_small_pane_srt_g7_ParamLimits

0x2826,	// (0x00002826) volume_small_pane_srt_g7

0x2837,	// (0x00002837) volume_small_pane_srt_g8_ParamLimits

0x2837,	// (0x00002837) volume_small_pane_srt_g8

0x2848,	// (0x00002848) volume_small_pane_srt_g9_ParamLimits

0x2848,	// (0x00002848) volume_small_pane_srt_g9

0x2859,	// (0x00002859) volume_small_pane_srt_g10_ParamLimits

0x2859,	// (0x00002859) volume_small_pane_srt_g10

0x0009,

0xad96,	// (0x0000ad96) volume_small_pane_srt_g_ParamLimits

0xad96,	// (0x0000ad96) volume_small_pane_srt_g

0x098c,	// (0x0000098c) query_popup_data_pane_cp2

0x5470,	// (0x00005470) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5470,	// (0x00005470) navi_navi_icon_text_pane_srt_t1

0x41a9,	// (0x000041a9) navi_tabs_2_long_pane_srt

0x41a9,	// (0x000041a9) navi_tabs_2_pane_srt

0x41a9,	// (0x000041a9) navi_tabs_3_long_pane_srt

0x41a9,	// (0x000041a9) navi_tabs_3_pane_srt

0x41a9,	// (0x000041a9) navi_tabs_4_pane_srt

0x5448,	// (0x00005448) tabs_2_active_pane_srt_ParamLimits

0x5448,	// (0x00005448) tabs_2_active_pane_srt

0x5458,	// (0x00005458) tabs_2_passive_pane_srt_ParamLimits

0x5458,	// (0x00005458) tabs_2_passive_pane_srt

0x389f,	// (0x0000389f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x389f,	// (0x0000389f) bg_passive_tab_pane_cp1_srt

0x541c,	// (0x0000541c) bg_passive_tab_pane_g1_cp1_srt

0x211a,	// (0x0000211a) bg_passive_tab_pane_g2_cp1_srt

0x5425,	// (0x00005425) bg_passive_tab_pane_g3_cp1_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt

0x542e,	// (0x0000542e) tabs_2_active_pane_srt_g1

0xd59d,	// (0x0000d59d) tabs_2_active_pane_srt_t1_ParamLimits

0xd59d,	// (0x0000d59d) tabs_2_active_pane_srt_t1

0x541c,	// (0x0000541c) bg_active_tab_pane_g1_cp1_srt

0x211a,	// (0x0000211a) bg_active_tab_pane_g2_cp1_srt

0x5425,	// (0x00005425) bg_active_tab_pane_g3_cp1_srt

0x53e9,	// (0x000053e9) tabs_3_active_pane_srt_ParamLimits

0x53e9,	// (0x000053e9) tabs_3_active_pane_srt

0x53fa,	// (0x000053fa) tabs_3_passive_pane_cp_srt_ParamLimits

0x53fa,	// (0x000053fa) tabs_3_passive_pane_cp_srt

0x540b,	// (0x0000540b) tabs_3_passive_pane_srt_ParamLimits

0x540b,	// (0x0000540b) tabs_3_passive_pane_srt

0x389f,	// (0x0000389f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x389f,	// (0x0000389f) bg_passive_tab_pane_cp2_srt

0x286a,	// (0x0000286a) bg_passive_tab_pane_g1_cp2_srt

0x211a,	// (0x0000211a) bg_passive_tab_pane_g2_cp2_srt

0x2873,	// (0x00002873) bg_passive_tab_pane_g3_cp2_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt

0x53cf,	// (0x000053cf) tabs_3_active_pane_srt_g1

0xd587,	// (0x0000d587) tabs_3_active_pane_srt_t1_ParamLimits

0xd587,	// (0x0000d587) tabs_3_active_pane_srt_t1

0x286a,	// (0x0000286a) bg_active_tab_pane_g1_cp2_srt

0x211a,	// (0x0000211a) bg_active_tab_pane_g2_cp2_srt

0x2873,	// (0x00002873) bg_active_tab_pane_g3_cp2_srt

0x5387,	// (0x00005387) tabs_4_active_pane_srt_ParamLimits

0x5387,	// (0x00005387) tabs_4_active_pane_srt

0x5399,	// (0x00005399) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5399,	// (0x00005399) tabs_4_passive_pane_cp2_srt

0x2b0e,	// (0x00002b0e) aid_size_cell_toolbar

0x4f19,	// (0x00004f19) main_idle_act_pane_ParamLimits

0x2d3b,	// (0x00002d3b) popup_large_graphic_colour_window_ParamLimits

0xcbe7,	// (0x0000cbe7) popup_toolbar_window_ParamLimits

0xcbe7,	// (0x0000cbe7) popup_toolbar_window

0x511f,	// (0x0000511f) list_single_graphic_2heading_pane_ParamLimits

0x511f,	// (0x0000511f) list_single_graphic_2heading_pane

0x1a40,	// (0x00001a40) aid_size_cell_apps_grid_lsc_pane

0x1a52,	// (0x00001a52) aid_size_cell_apps_grid_prt_pane

0x2b90,	// (0x00002b90) bg_wml_button_pane_cp1_ParamLimits

0x2b90,	// (0x00002b90) bg_wml_button_pane_cp1

0xd141,	// (0x0000d141) form_midp_field_text_pane_t1_ParamLimits

0x389f,	// (0x0000389f) input_focus_pane_cp050_ParamLimits

0x3ba3,	// (0x00003ba3) list_midp_form_text_pane_ParamLimits

0x3b49,	// (0x00003b49) input_focus_pane_cp051_ParamLimits

0x3b5d,	// (0x00003b5d) list_midp_choice_pane_ParamLimits

0xd0de,	// (0x0000d0de) list_single_2graphic_pane_cp3_ParamLimits

0xd0de,	// (0x0000d0de) list_single_2graphic_pane_cp3

0xd0f1,	// (0x0000d0f1) list_single_midp_graphic_pane_ParamLimits

0xd0f1,	// (0x0000d0f1) list_single_midp_graphic_pane

0x357d,	// (0x0000357d) list_single_graphic_2heading_pane_g1_ParamLimits

0x357d,	// (0x0000357d) list_single_graphic_2heading_pane_g1

0x2552,	// (0x00002552) list_single_graphic_2heading_pane_g4_ParamLimits

0x2552,	// (0x00002552) list_single_graphic_2heading_pane_g4

0x3589,	// (0x00003589) list_single_graphic_2heading_pane_g5_ParamLimits

0x3589,	// (0x00003589) list_single_graphic_2heading_pane_g5

0x0002,

0xade9,	// (0x0000ade9) list_single_graphic_2heading_pane_g_ParamLimits

0xade9,	// (0x0000ade9) list_single_graphic_2heading_pane_g

0x3595,	// (0x00003595) list_single_graphic_2heading_pane_t1_ParamLimits

0x3595,	// (0x00003595) list_single_graphic_2heading_pane_t1

0x35a9,	// (0x000035a9) list_single_graphic_2heading_pane_t2_ParamLimits

0x35a9,	// (0x000035a9) list_single_graphic_2heading_pane_t2

0x35c5,	// (0x000035c5) list_single_graphic_2heading_pane_t3_ParamLimits

0x35c5,	// (0x000035c5) list_single_graphic_2heading_pane_t3

0x0002,

0xadf0,	// (0x0000adf0) list_single_graphic_2heading_pane_t_ParamLimits

0xadf0,	// (0x0000adf0) list_single_graphic_2heading_pane_t

0x35dd,	// (0x000035dd) bg_popup_sub_pane_cp2

0x3607,	// (0x00003607) grid_toobar_pane

0x3643,	// (0x00003643) cell_toolbar_pane_ParamLimits

0x3643,	// (0x00003643) cell_toolbar_pane

0x3689,	// (0x00003689) cell_toolbar_pane_g1_ParamLimits

0x3689,	// (0x00003689) cell_toolbar_pane_g1

0x369d,	// (0x0000369d) cell_toolbar_pane_g2_ParamLimits

0x369d,	// (0x0000369d) cell_toolbar_pane_g2

0x0001,

0xadf7,	// (0x0000adf7) cell_toolbar_pane_g_ParamLimits

0xadf7,	// (0x0000adf7) cell_toolbar_pane_g

0x36bf,	// (0x000036bf) grid_highlight_pane_cp2_ParamLimits

0x36bf,	// (0x000036bf) grid_highlight_pane_cp2

0x36d9,	// (0x000036d9) toolbar_button_pane

0x36e5,	// (0x000036e5) toolbar_button_pane_g1

0x36ed,	// (0x000036ed) toolbar_button_pane_g2

0x36f5,	// (0x000036f5) toolbar_button_pane_g3

0x36fd,	// (0x000036fd) toolbar_button_pane_g4

0x3705,	// (0x00003705) toolbar_button_pane_g5

0x370d,	// (0x0000370d) toolbar_button_pane_g6

0x3715,	// (0x00003715) toolbar_button_pane_g7

0x371d,	// (0x0000371d) toolbar_button_pane_g8

0x3725,	// (0x00003725) toolbar_button_pane_g9

0x0009,

0xadfc,	// (0x0000adfc) toolbar_button_pane_g

0x3735,	// (0x00003735) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3735,	// (0x00003735) list_single_2graphic_pane_g1_cp3

0xd040,	// (0x0000d040) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd040,	// (0x0000d040) list_single_2graphic_pane_g2_cp3

0x3752,	// (0x00003752) list_single_2graphic_pane_g3_cp3

0x375a,	// (0x0000375a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x375a,	// (0x0000375a) list_single_2graphic_pane_g4_cp3

0x3766,	// (0x00003766) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3766,	// (0x00003766) list_single_2graphic_pane_t1_cp3

0x37b6,	// (0x000037b6) list_single_midp_graphic_pane_g2_ParamLimits

0x37b6,	// (0x000037b6) list_single_midp_graphic_pane_g2

0x2b16,	// (0x00002b16) aid_zoom_text_primary

0x2b1e,	// (0x00002b1e) aid_zoom_text_secondary

0xc37a,	// (0x0000c37a) status_small_pane_g7_ParamLimits

0xc37a,	// (0x0000c37a) status_small_pane_g7

0xc39d,	// (0x0000c39d) status_small_pane_t1_ParamLimits

0xb775,	// (0x0000b775) title_pane_g2

0x0003,

0xf447,	// (0x0000f447) title_pane_g

0xb9ed,	// (0x0000b9ed) aid_size_cell_colour_1_pane_ParamLimits

0xb9ed,	// (0x0000b9ed) aid_size_cell_colour_1_pane

0xba01,	// (0x0000ba01) aid_size_cell_colour_2_pane_ParamLimits

0xba01,	// (0x0000ba01) aid_size_cell_colour_2_pane

0xba15,	// (0x0000ba15) aid_size_cell_colour_3_pane_ParamLimits

0xba15,	// (0x0000ba15) aid_size_cell_colour_3_pane

0xba29,	// (0x0000ba29) aid_size_cell_colour_4_pane_ParamLimits

0xba29,	// (0x0000ba29) aid_size_cell_colour_4_pane

0x18bc,	// (0x000018bc) title_pane_stacon_g1_ParamLimits

0x18bc,	// (0x000018bc) title_pane_stacon_g1

0x3f90,	// (0x00003f90) popup_note_wait_window_g3_ParamLimits

0x3f90,	// (0x00003f90) popup_note_wait_window_g3

0x4006,	// (0x00004006) popup_note_wait_window_t5_ParamLimits

0x4006,	// (0x00004006) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc5ef,	// (0x0000c5ef) popup_feb_china_hwr_fs_window_ParamLimits

0xc5ef,	// (0x0000c5ef) popup_feb_china_hwr_fs_window

0xd051,	// (0x0000d051) aid_size_cell_hwr_fs_ParamLimits

0xd051,	// (0x0000d051) aid_size_cell_hwr_fs

0x389f,	// (0x0000389f) bg_popup_sub_pane_cp3_ParamLimits

0x389f,	// (0x0000389f) bg_popup_sub_pane_cp3

0xd066,	// (0x0000d066) grid_hwr_fs_pane_ParamLimits

0xd066,	// (0x0000d066) grid_hwr_fs_pane

0x38c3,	// (0x000038c3) linegrid_hwr_fs_pane_ParamLimits

0x38c3,	// (0x000038c3) linegrid_hwr_fs_pane

0xd07e,	// (0x0000d07e) cell_hwr_fs_pane_ParamLimits

0xd07e,	// (0x0000d07e) cell_hwr_fs_pane

0x38f5,	// (0x000038f5) linegrid_hwr_fs_pane_g1_ParamLimits

0x38f5,	// (0x000038f5) linegrid_hwr_fs_pane_g1

0xd0a4,	// (0x0000d0a4) linegrid_hwr_fs_pane_g2_ParamLimits

0xd0a4,	// (0x0000d0a4) linegrid_hwr_fs_pane_g2

0x3913,	// (0x00003913) linegrid_hwr_fs_pane_g3_ParamLimits

0x3913,	// (0x00003913) linegrid_hwr_fs_pane_g3

0x391f,	// (0x0000391f) linegrid_hwr_fs_pane_g4_ParamLimits

0x391f,	// (0x0000391f) linegrid_hwr_fs_pane_g4

0x3939,	// (0x00003939) linegrid_hwr_fs_pane_g5_ParamLimits

0x3939,	// (0x00003939) linegrid_hwr_fs_pane_g5

0x0004,

0xf581,	// (0x0000f581) linegrid_hwr_fs_pane_g_ParamLimits

0xf581,	// (0x0000f581) linegrid_hwr_fs_pane_g

0x394f,	// (0x0000394f) cell_hwr_fs_pane_g1_ParamLimits

0x394f,	// (0x0000394f) cell_hwr_fs_pane_g1

0x34b4,	// (0x000034b4) cell_hwr_fs_pane_g2_ParamLimits

0x34b4,	// (0x000034b4) cell_hwr_fs_pane_g2

0xd0b6,	// (0x0000d0b6) cell_hwr_fs_pane_g3_ParamLimits

0xd0b6,	// (0x0000d0b6) cell_hwr_fs_pane_g3

0xd0c3,	// (0x0000d0c3) cell_hwr_fs_pane_g4_ParamLimits

0xd0c3,	// (0x0000d0c3) cell_hwr_fs_pane_g4

0x0003,

0xf58c,	// (0x0000f58c) cell_hwr_fs_pane_g_ParamLimits

0xf58c,	// (0x0000f58c) cell_hwr_fs_pane_g

0xd0d0,	// (0x0000d0d0) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x166d,	// (0x0000166d) aid_inside_area_popup_secondary

0xd1c0,	// (0x0000d1c0) aid_inside_area_window_primary_ParamLimits

0xd1c0,	// (0x0000d1c0) aid_inside_area_window_primary

0x55a6,	// (0x000055a6) ai2_news_ticker_pane

0x55ae,	// (0x000055ae) aid_size_cell_ai1_link_ParamLimits

0x55ae,	// (0x000055ae) aid_size_cell_ai1_link

0xd5b3,	// (0x0000d5b3) popup_ai2_data_window_ParamLimits

0xd5b3,	// (0x0000d5b3) popup_ai2_data_window

0x55de,	// (0x000055de) popup_ai2_link_window_ParamLimits

0x55de,	// (0x000055de) popup_ai2_link_window

0x389f,	// (0x0000389f) bg_popup_sub_pane_cp4_ParamLimits

0x389f,	// (0x0000389f) bg_popup_sub_pane_cp4

0x55f2,	// (0x000055f2) grid_ai2_link_pane_ParamLimits

0x55f2,	// (0x000055f2) grid_ai2_link_pane

0x5609,	// (0x00005609) popup_ai2_link_window_g1_ParamLimits

0x5609,	// (0x00005609) popup_ai2_link_window_g1

0x5615,	// (0x00005615) popup_ai2_link_window_g2_ParamLimits

0x5615,	// (0x00005615) popup_ai2_link_window_g2

0x0001,

0xb005,	// (0x0000b005) popup_ai2_link_window_g_ParamLimits

0xb005,	// (0x0000b005) popup_ai2_link_window_g

0x5624,	// (0x00005624) ai2_mp_button_pane

0x562c,	// (0x0000562c) ai2_mp_volume_pane

0x3b49,	// (0x00003b49) bg_popup_sub_pane_cp5_ParamLimits

0x3b49,	// (0x00003b49) bg_popup_sub_pane_cp5

0x5634,	// (0x00005634) heading_ai2_gene_pane_ParamLimits

0x5634,	// (0x00005634) heading_ai2_gene_pane

0x5640,	// (0x00005640) list_ai2_gene_pane_ParamLimits

0x5640,	// (0x00005640) list_ai2_gene_pane

0x5688,	// (0x00005688) cell_ai2_link_pane_ParamLimits

0x5688,	// (0x00005688) cell_ai2_link_pane

0x569e,	// (0x0000569e) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x576e,	// (0x0000576e) ai2_mp_volume_pane_g1

0x5776,	// (0x00005776) ai2_mp_volume_pane_g2

0xd5dd,	// (0x0000d5dd) list_ai2_gene_pane_t1

0x577e,	// (0x0000577e) ai2_mp_volume_pane_g3

0x0002,

0xb01e,	// (0x0000b01e) ai2_mp_volume_pane_g

0x5786,	// (0x00005786) volume_small_pane_cp3

0x578f,	// (0x0000578f) aid_size_cell_ai2_button

0x5797,	// (0x00005797) grid_ai2_button_pane

0x57a0,	// (0x000057a0) cell_ai2_button_pane_ParamLimits

0x57a0,	// (0x000057a0) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x572e,	// (0x0000572e) ai2_gene_pane_t1_ParamLimits

0x572e,	// (0x0000572e) ai2_gene_pane_t1

0xc561,	// (0x0000c561) aid_height_parent_landscape

0xd31c,	// (0x0000d31c) aid_height_set_list

0x4f19,	// (0x00004f19) aid_size_parent

0x5315,	// (0x00005315) aid_size_cell_graphic_pane_ParamLimits

0x5650,	// (0x00005650) popup_ai2_data_window_g1_ParamLimits

0x5650,	// (0x00005650) popup_ai2_data_window_g1

0x565c,	// (0x0000565c) ai2_news_ticker_pane_g1

0x5664,	// (0x00005664) ai2_news_ticker_pane_g2

0x0001,

0xb00a,	// (0x0000b00a) ai2_news_ticker_pane_g

0x566c,	// (0x0000566c) ai2_news_ticker_pane_t1

0x567a,	// (0x0000567a) ai2_news_ticker_pane_t2

0x0001,

0xb00f,	// (0x0000b00f) ai2_news_ticker_pane_t

0x56a7,	// (0x000056a7) heading_ai2_gene_pane_g1

0x56af,	// (0x000056af) heading_ai2_gene_pane_t1_ParamLimits

0x56af,	// (0x000056af) heading_ai2_gene_pane_t1

0x56c4,	// (0x000056c4) list_highlight_pane_cp6

0xd5c7,	// (0x0000d5c7) ai2_gene_pane_ParamLimits

0xd5c7,	// (0x0000d5c7) ai2_gene_pane

0xd5eb,	// (0x0000d5eb) list_ai2_gene_pane_t2

0x0001,

0xf5ed,	// (0x0000f5ed) list_ai2_gene_pane_t

0x56ff,	// (0x000056ff) list_highlight_pane_cp8_ParamLimits

0x56ff,	// (0x000056ff) list_highlight_pane_cp8

0x5710,	// (0x00005710) ai2_gene_pane_g1_ParamLimits

0x5710,	// (0x00005710) ai2_gene_pane_g1

0x5722,	// (0x00005722) ai2_gene_pane_g2_ParamLimits

0x5722,	// (0x00005722) ai2_gene_pane_g2

0x0001,

0xb019,	// (0x0000b019) ai2_gene_pane_g_ParamLimits

0xb019,	// (0x0000b019) ai2_gene_pane_g

0x0db7,	// (0x00000db7) scroll_pane_cp12

0xc520,	// (0x0000c520) control_pane_t3_ParamLimits

0xc520,	// (0x0000c520) control_pane_t3

0xc38e,	// (0x0000c38e) status_small_pane_g8_ParamLimits

0xc38e,	// (0x0000c38e) status_small_pane_g8

0xc684,	// (0x0000c684) popup_find_window_ParamLimits

0xc911,	// (0x0000c911) popup_note_image_window_ParamLimits

0x357d,	// (0x0000357d) list_double2_graphic_pane_vc_g1_ParamLimits

0x357d,	// (0x0000357d) list_double2_graphic_pane_vc_g1

0x2552,	// (0x00002552) list_double2_graphic_pane_vc_g2_ParamLimits

0x2552,	// (0x00002552) list_double2_graphic_pane_vc_g2

0x3589,	// (0x00003589) list_double2_graphic_pane_vc_g3_ParamLimits

0x3589,	// (0x00003589) list_double2_graphic_pane_vc_g3

0x0002,

0xade9,	// (0x0000ade9) list_double2_graphic_pane_vc_g_ParamLimits

0xade9,	// (0x0000ade9) list_double2_graphic_pane_vc_g

0x3673,	// (0x00003673) list_double2_graphic_pane_vc_t1_ParamLimits

0x3673,	// (0x00003673) list_double2_graphic_pane_vc_t1

0x2552,	// (0x00002552) list_single_heading_pane_vc_g1_ParamLimits

0x2552,	// (0x00002552) list_single_heading_pane_vc_g1

0x3589,	// (0x00003589) list_single_heading_pane_vc_g2_ParamLimits

0x3589,	// (0x00003589) list_single_heading_pane_vc_g2

0x0001,

0xae11,	// (0x0000ae11) list_single_heading_pane_vc_g_ParamLimits

0xae11,	// (0x0000ae11) list_single_heading_pane_vc_g

0x3782,	// (0x00003782) list_single_heading_pane_vc_t1_ParamLimits

0x3782,	// (0x00003782) list_single_heading_pane_vc_t1

0x379a,	// (0x0000379a) list_single_heading_pane_vc_t2_ParamLimits

0x379a,	// (0x0000379a) list_single_heading_pane_vc_t2

0x0001,

0xae16,	// (0x0000ae16) list_single_heading_pane_vc_t_ParamLimits

0xae16,	// (0x0000ae16) list_single_heading_pane_vc_t

0x37d8,	// (0x000037d8) list_setting_number_pane_vc_g1_ParamLimits

0x37d8,	// (0x000037d8) list_setting_number_pane_vc_g1

0x37e4,	// (0x000037e4) list_setting_number_pane_vc_g2_ParamLimits

0x37e4,	// (0x000037e4) list_setting_number_pane_vc_g2

0x0001,

0xae1b,	// (0x0000ae1b) list_setting_number_pane_vc_g_ParamLimits

0xae1b,	// (0x0000ae1b) list_setting_number_pane_vc_g

0x37f0,	// (0x000037f0) list_setting_number_pane_vc_t1_ParamLimits

0x37f0,	// (0x000037f0) list_setting_number_pane_vc_t1

0x3804,	// (0x00003804) list_setting_number_pane_vc_t2_ParamLimits

0x3804,	// (0x00003804) list_setting_number_pane_vc_t2

0x3820,	// (0x00003820) list_setting_number_pane_vc_t3_ParamLimits

0x3820,	// (0x00003820) list_setting_number_pane_vc_t3

0x0002,

0xae20,	// (0x0000ae20) list_setting_number_pane_vc_t_ParamLimits

0xae20,	// (0x0000ae20) list_setting_number_pane_vc_t

0x384e,	// (0x0000384e) set_value_pane_vc_ParamLimits

0x384e,	// (0x0000384e) set_value_pane_vc

0x511f,	// (0x0000511f) list_double2_graphic_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_double2_graphic_pane_vc

0x511f,	// (0x0000511f) list_double2_large_graphic_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_double2_large_graphic_pane_vc

0x511f,	// (0x0000511f) list_double2_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_double2_pane_vc

0x511f,	// (0x0000511f) list_double_graphic_heading_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_double_graphic_heading_pane_vc

0x511f,	// (0x0000511f) list_double_graphic_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_double_graphic_pane_vc

0x511f,	// (0x0000511f) list_double_heading_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_double_heading_pane_vc

0x5131,	// (0x00005131) list_double_large_graphic_pane_vc_ParamLimits

0x5131,	// (0x00005131) list_double_large_graphic_pane_vc

0x511f,	// (0x0000511f) list_double_number_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_double_number_pane_vc

0x511f,	// (0x0000511f) list_double_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_double_pane_vc

0x511f,	// (0x0000511f) list_double_time_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_double_time_pane_vc

0x511f,	// (0x0000511f) list_setting_number_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_setting_number_pane_vc

0x511f,	// (0x0000511f) list_setting_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_setting_pane_vc

0x511f,	// (0x0000511f) list_single_graphic_heading_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_single_graphic_heading_pane_vc

0x511f,	// (0x0000511f) list_single_heading_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_single_heading_pane_vc

0x511f,	// (0x0000511f) list_single_number_heading_pane_vc_ParamLimits

0x511f,	// (0x0000511f) list_single_number_heading_pane_vc

0x357d,	// (0x0000357d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x357d,	// (0x0000357d) list_double_graphic_heading_pane_vc_g1

0x57d4,	// (0x000057d4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x57d4,	// (0x000057d4) list_double_graphic_heading_pane_vc_g2

0x57e0,	// (0x000057e0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x57e0,	// (0x000057e0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xb025,	// (0x0000b025) list_double_graphic_heading_pane_vc_g_ParamLimits

0xb025,	// (0x0000b025) list_double_graphic_heading_pane_vc_g

0x57ec,	// (0x000057ec) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x57ec,	// (0x000057ec) list_double_graphic_heading_pane_vc_t1

0x5808,	// (0x00005808) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5808,	// (0x00005808) list_double_graphic_heading_pane_vc_t2

0x0001,

0xb02c,	// (0x0000b02c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xb02c,	// (0x0000b02c) list_double_graphic_heading_pane_vc_t

0x37d8,	// (0x000037d8) list_setting_pane_vc_g1_ParamLimits

0x37d8,	// (0x000037d8) list_setting_pane_vc_g1

0x37e4,	// (0x000037e4) list_setting_pane_vc_g2_ParamLimits

0x37e4,	// (0x000037e4) list_setting_pane_vc_g2

0x0001,

0xae1b,	// (0x0000ae1b) list_setting_pane_vc_g_ParamLimits

0xae1b,	// (0x0000ae1b) list_setting_pane_vc_g

0x5a34,	// (0x00005a34) list_setting_pane_vc_t1_ParamLimits

0x5a34,	// (0x00005a34) list_setting_pane_vc_t1

0x5a50,	// (0x00005a50) list_setting_pane_vc_t2_ParamLimits

0x5a50,	// (0x00005a50) list_setting_pane_vc_t2

0x0001,

0xb05a,	// (0x0000b05a) list_setting_pane_vc_t_ParamLimits

0xb05a,	// (0x0000b05a) list_setting_pane_vc_t

0x384e,	// (0x0000384e) set_value_pane_cp_vc_ParamLimits

0x384e,	// (0x0000384e) set_value_pane_cp_vc

0x2552,	// (0x00002552) list_single_number_heading_pane_vc_g1_ParamLimits

0x2552,	// (0x00002552) list_single_number_heading_pane_vc_g1

0x3589,	// (0x00003589) list_single_number_heading_pane_vc_g2_ParamLimits

0x3589,	// (0x00003589) list_single_number_heading_pane_vc_g2

0x0001,

0xae11,	// (0x0000ae11) list_single_number_heading_pane_vc_g_ParamLimits

0xae11,	// (0x0000ae11) list_single_number_heading_pane_vc_g

0x3782,	// (0x00003782) list_single_number_heading_pane_vc_t1_ParamLimits

0x3782,	// (0x00003782) list_single_number_heading_pane_vc_t1

0x5a6c,	// (0x00005a6c) list_single_number_heading_pane_vc_t2_ParamLimits

0x5a6c,	// (0x00005a6c) list_single_number_heading_pane_vc_t2

0x5a80,	// (0x00005a80) list_single_number_heading_pane_vc_t3_ParamLimits

0x5a80,	// (0x00005a80) list_single_number_heading_pane_vc_t3

0x0002,

0xb05f,	// (0x0000b05f) list_single_number_heading_pane_vc_t_ParamLimits

0xb05f,	// (0x0000b05f) list_single_number_heading_pane_vc_t

0x357d,	// (0x0000357d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x357d,	// (0x0000357d) list_single_graphic_heading_pane_vc_g1

0x2552,	// (0x00002552) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2552,	// (0x00002552) list_single_graphic_heading_pane_vc_g4

0x3589,	// (0x00003589) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3589,	// (0x00003589) list_single_graphic_heading_pane_vc_g5

0x0002,

0xade9,	// (0x0000ade9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xade9,	// (0x0000ade9) list_single_graphic_heading_pane_vc_g

0x3782,	// (0x00003782) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3782,	// (0x00003782) list_single_graphic_heading_pane_vc_t1

0x5a92,	// (0x00005a92) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5a92,	// (0x00005a92) list_single_graphic_heading_pane_vc_t2

0x0001,

0xb066,	// (0x0000b066) list_single_graphic_heading_pane_vc_t_ParamLimits

0xb066,	// (0x0000b066) list_single_graphic_heading_pane_vc_t

0x2552,	// (0x00002552) list_double2_pane_vc_g1_ParamLimits

0x2552,	// (0x00002552) list_double2_pane_vc_g1

0x3589,	// (0x00003589) list_double2_pane_vc_g2_ParamLimits

0x3589,	// (0x00003589) list_double2_pane_vc_g2

0x0001,

0xae11,	// (0x0000ae11) list_double2_pane_vc_g_ParamLimits

0xae11,	// (0x0000ae11) list_double2_pane_vc_g

0x5aa6,	// (0x00005aa6) list_double2_pane_vc_t1_ParamLimits

0x5aa6,	// (0x00005aa6) list_double2_pane_vc_t1

0x5abc,	// (0x00005abc) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5abc,	// (0x00005abc) list_double2_large_graphic_pane_vc_g1

0x2552,	// (0x00002552) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2552,	// (0x00002552) list_double2_large_graphic_pane_vc_g2

0x3589,	// (0x00003589) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3589,	// (0x00003589) list_double2_large_graphic_pane_vc_g3

0x0002,

0xb06b,	// (0x0000b06b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xb06b,	// (0x0000b06b) list_double2_large_graphic_pane_vc_g

0x5ac8,	// (0x00005ac8) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5ac8,	// (0x00005ac8) list_double2_large_graphic_pane_vc_t1

0x5ade,	// (0x00005ade) list_double_time_pane_vc_g1_ParamLimits

0x5ade,	// (0x00005ade) list_double_time_pane_vc_g1

0x5aea,	// (0x00005aea) list_double_time_pane_vc_g2_ParamLimits

0x5aea,	// (0x00005aea) list_double_time_pane_vc_g2

0x0001,

0xb072,	// (0x0000b072) list_double_time_pane_vc_g_ParamLimits

0xb072,	// (0x0000b072) list_double_time_pane_vc_g

0x5af6,	// (0x00005af6) list_double_time_pane_vc_t1_ParamLimits

0x5af6,	// (0x00005af6) list_double_time_pane_vc_t1

0x5b1a,	// (0x00005b1a) list_double_time_pane_vc_t2_ParamLimits

0x5b1a,	// (0x00005b1a) list_double_time_pane_vc_t2

0x5b49,	// (0x00005b49) list_double_time_pane_vc_t3_ParamLimits

0x5b49,	// (0x00005b49) list_double_time_pane_vc_t3

0x5b5b,	// (0x00005b5b) list_double_time_pane_vc_t4_ParamLimits

0x5b5b,	// (0x00005b5b) list_double_time_pane_vc_t4

0x0003,

0xb077,	// (0x0000b077) list_double_time_pane_vc_t_ParamLimits

0xb077,	// (0x0000b077) list_double_time_pane_vc_t

0x2552,	// (0x00002552) list_double_pane_vc_g1_ParamLimits

0x2552,	// (0x00002552) list_double_pane_vc_g1

0x3589,	// (0x00003589) list_double_pane_vc_g2_ParamLimits

0x3589,	// (0x00003589) list_double_pane_vc_g2

0x0001,

0xae11,	// (0x0000ae11) list_double_pane_vc_g_ParamLimits

0xae11,	// (0x0000ae11) list_double_pane_vc_g

0x5b6f,	// (0x00005b6f) list_double_pane_vc_t1_ParamLimits

0x5b6f,	// (0x00005b6f) list_double_pane_vc_t1

0x5b83,	// (0x00005b83) list_double_pane_vc_t2_ParamLimits

0x5b83,	// (0x00005b83) list_double_pane_vc_t2

0x0001,

0xb080,	// (0x0000b080) list_double_pane_vc_t_ParamLimits

0xb080,	// (0x0000b080) list_double_pane_vc_t

0x2552,	// (0x00002552) list_double_number_pane_vc_g1_ParamLimits

0x2552,	// (0x00002552) list_double_number_pane_vc_g1

0x3589,	// (0x00003589) list_double_number_pane_vc_g2_ParamLimits

0x3589,	// (0x00003589) list_double_number_pane_vc_g2

0x0001,

0xae11,	// (0x0000ae11) list_double_number_pane_vc_g_ParamLimits

0xae11,	// (0x0000ae11) list_double_number_pane_vc_g

0x5b9b,	// (0x00005b9b) list_double_number_pane_vc_t1_ParamLimits

0x5b9b,	// (0x00005b9b) list_double_number_pane_vc_t1

0x5bad,	// (0x00005bad) list_double_number_pane_vc_t2_ParamLimits

0x5bad,	// (0x00005bad) list_double_number_pane_vc_t2

0x5bc1,	// (0x00005bc1) list_double_number_pane_vc_t3_ParamLimits

0x5bc1,	// (0x00005bc1) list_double_number_pane_vc_t3

0x0002,

0xb085,	// (0x0000b085) list_double_number_pane_vc_t_ParamLimits

0xb085,	// (0x0000b085) list_double_number_pane_vc_t

0x5bd9,	// (0x00005bd9) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5bd9,	// (0x00005bd9) list_double_large_graphic_pane_vc_g1

0x5bfb,	// (0x00005bfb) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5bfb,	// (0x00005bfb) list_double_large_graphic_pane_vc_g2

0x5c0f,	// (0x00005c0f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5c0f,	// (0x00005c0f) list_double_large_graphic_pane_vc_g3

0x5c1e,	// (0x00005c1e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5c1e,	// (0x00005c1e) list_double_large_graphic_pane_vc_g4

0x0003,

0xb08c,	// (0x0000b08c) list_double_large_graphic_pane_vc_g_ParamLimits

0xb08c,	// (0x0000b08c) list_double_large_graphic_pane_vc_g

0x5c2a,	// (0x00005c2a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5c2a,	// (0x00005c2a) list_double_large_graphic_pane_vc_t1

0x5c46,	// (0x00005c46) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5c46,	// (0x00005c46) list_double_large_graphic_pane_vc_t2

0x0001,

0xb095,	// (0x0000b095) list_double_large_graphic_pane_vc_t_ParamLimits

0xb095,	// (0x0000b095) list_double_large_graphic_pane_vc_t

0x57d4,	// (0x000057d4) list_double_heading_pane_vc_g1_ParamLimits

0x57d4,	// (0x000057d4) list_double_heading_pane_vc_g1

0x57e0,	// (0x000057e0) list_double_heading_pane_vc_g2_ParamLimits

0x57e0,	// (0x000057e0) list_double_heading_pane_vc_g2

0x0001,

0xb09a,	// (0x0000b09a) list_double_heading_pane_vc_g_ParamLimits

0xb09a,	// (0x0000b09a) list_double_heading_pane_vc_g

0x5c68,	// (0x00005c68) list_double_heading_pane_vc_t1_ParamLimits

0x5c68,	// (0x00005c68) list_double_heading_pane_vc_t1

0x3782,	// (0x00003782) list_double_heading_pane_vc_t2_ParamLimits

0x3782,	// (0x00003782) list_double_heading_pane_vc_t2

0x0001,

0xb09f,	// (0x0000b09f) list_double_heading_pane_vc_t_ParamLimits

0xb09f,	// (0x0000b09f) list_double_heading_pane_vc_t

0x5c7c,	// (0x00005c7c) list_double_graphic_pane_vc_g1_ParamLimits

0x5c7c,	// (0x00005c7c) list_double_graphic_pane_vc_g1

0x5c88,	// (0x00005c88) list_double_graphic_pane_vc_g2_ParamLimits

0x5c88,	// (0x00005c88) list_double_graphic_pane_vc_g2

0x2552,	// (0x00002552) list_double_graphic_pane_vc_g3_ParamLimits

0x2552,	// (0x00002552) list_double_graphic_pane_vc_g3

0x0003,

0xb0a4,	// (0x0000b0a4) list_double_graphic_pane_vc_g_ParamLimits

0xb0a4,	// (0x0000b0a4) list_double_graphic_pane_vc_g

0x5ca5,	// (0x00005ca5) list_double_graphic_pane_vc_t1_ParamLimits

0x5ca5,	// (0x00005ca5) list_double_graphic_pane_vc_t1

0x5ccf,	// (0x00005ccf) list_double_graphic_pane_vc_t2_ParamLimits

0x5ccf,	// (0x00005ccf) list_double_graphic_pane_vc_t2

0x0001,

0xb0ad,	// (0x0000b0ad) list_double_graphic_pane_vc_t_ParamLimits

0xb0ad,	// (0x0000b0ad) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb55c,	// (0x0000b55c) aid_size_cell_touch_ParamLimits

0xb55c,	// (0x0000b55c) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb70c,	// (0x0000b70c) touch_pane_ParamLimits

0xb70c,	// (0x0000b70c) touch_pane

0x12b6,	// (0x000012b6) button_value_adjust_pane_cp2

0x12be,	// (0x000012be) button_value_adjust_pane_cp4

0x12e0,	// (0x000012e0) form_field_data_pane_cp2

0xbe96,	// (0x0000be96) form_field_data_wide_pane_cp2

0x1b20,	// (0x00001b20) bg_scroll_pane_ParamLimits

0x1b3f,	// (0x00001b3f) scroll_handle_pane_ParamLimits

0x1b53,	// (0x00001b53) scroll_sc2_down_pane_ParamLimits

0x1b53,	// (0x00001b53) scroll_sc2_down_pane

0x1b7a,	// (0x00001b7a) scroll_sc2_up_pane_ParamLimits

0x1b7a,	// (0x00001b7a) scroll_sc2_up_pane

0xd70b,	// (0x0000d70b) grid_wheel_folder_pane_g1_ParamLimits

0xd70b,	// (0x0000d70b) grid_wheel_folder_pane_g1

0x2261,	// (0x00002261) clock_nsta_pane_cp2_ParamLimits

0x2261,	// (0x00002261) clock_nsta_pane_cp2

0x2b90,	// (0x00002b90) listscroll_midp_pane_ParamLimits

0xc289,	// (0x0000c289) midp_canvas_pane

0x2afc,	// (0x00002afc) nsta_clock_indic_pane

0x2b5a,	// (0x00002b5a) listscroll_form_pane_vc

0x2b7e,	// (0x00002b7e) listscroll_set_pane_vc_ParamLimits

0x2b7e,	// (0x00002b7e) listscroll_set_pane_vc

0xcd4b,	// (0x0000cd4b) clock_nsta_pane

0xcd75,	// (0x0000cd75) indicator_nsta_pane

0x35dd,	// (0x000035dd) bg_popup_sub_pane_cp2_ParamLimits

0x35f1,	// (0x000035f1) find_pane_cp2_ParamLimits

0x35f1,	// (0x000035f1) find_pane_cp2

0x3607,	// (0x00003607) grid_toobar_pane_ParamLimits

0x385e,	// (0x0000385e) list_form_gen_pane_vc_ParamLimits

0x385e,	// (0x0000385e) list_form_gen_pane_vc

0x3874,	// (0x00003874) scroll_pane_cp8_vc_ParamLimits

0x3874,	// (0x00003874) scroll_pane_cp8_vc

0x398d,	// (0x0000398d) data_form_wide_pane_vc_ParamLimits

0x398d,	// (0x0000398d) data_form_wide_pane_vc

0x3999,	// (0x00003999) form_field_data_wide_pane_vc_g1

0x39a1,	// (0x000039a1) form_field_data_wide_pane_vc_t1_ParamLimits

0x39a1,	// (0x000039a1) form_field_data_wide_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_cp6_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp6_vc

0xd17a,	// (0x0000d17a) list_midp_pane_ParamLimits

0x537b,	// (0x0000537b) scroll_pane_cp16_ParamLimits

0x537b,	// (0x0000537b) scroll_pane_cp16

0x3d65,	// (0x00003d65) button_value_adjust_pane_ParamLimits

0x3d65,	// (0x00003d65) button_value_adjust_pane

0xd32d,	// (0x0000d32d) button_value_adjust_pane_cp6_ParamLimits

0xd32d,	// (0x0000d32d) button_value_adjust_pane_cp6

0xd447,	// (0x0000d447) settings_code_pane_cp_ParamLimits

0xd447,	// (0x0000d447) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xad3c,	// (0x0000ad3c) cell_touch_pane_g

0xd5f9,	// (0x0000d5f9) cell_touch_pane_cp_ParamLimits

0xd5f9,	// (0x0000d5f9) cell_touch_pane_cp

0xd615,	// (0x0000d615) cell_touch_pane_ParamLimits

0xd615,	// (0x0000d615) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5826,	// (0x00005826) list_set_graphic_pane_vc_g1_ParamLimits

0x5826,	// (0x00005826) list_set_graphic_pane_vc_g1

0x5832,	// (0x00005832) list_set_graphic_pane_vc_g2_ParamLimits

0x5832,	// (0x00005832) list_set_graphic_pane_vc_g2

0x0001,

0xb031,	// (0x0000b031) list_set_graphic_pane_vc_g_ParamLimits

0xb031,	// (0x0000b031) list_set_graphic_pane_vc_g

0x583e,	// (0x0000583e) text_primary_small_cp13_vc_ParamLimits

0x583e,	// (0x0000583e) text_primary_small_cp13_vc

0x5856,	// (0x00005856) list_set_graphic_pane_vc_ParamLimits

0x5856,	// (0x00005856) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05e3,	// (0x000005e3) setting_code_pane_vc_t1

0x5869,	// (0x00005869) set_text_pane_vc_t1_ParamLimits

0x5869,	// (0x00005869) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5885,	// (0x00005885) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_vc_g1

0x588f,	// (0x0000588f) setting_slider_graphic_pane_vc_t1

0x589f,	// (0x0000589f) setting_slider_graphic_pane_vc_t2

0x0001,

0xb036,	// (0x0000b036) setting_slider_graphic_pane_vc_t

0x58af,	// (0x000058af) slider_set_pane_cp_vc

0x58b7,	// (0x000058b7) slider_set_pane_vc_g1

0x58c0,	// (0x000058c0) slider_set_pane_vc_g2

0x0006,

0xb03b,	// (0x0000b03b) slider_set_pane_vc_g

0x14c5,	// (0x000014c5) set_opt_bg_pane_g1_copy1

0x14cd,	// (0x000014cd) set_opt_bg_pane_g2_copy1

0x58ec,	// (0x000058ec) set_opt_bg_pane_g3_copy1

0x14dd,	// (0x000014dd) set_opt_bg_pane_g4_copy1

0x14e5,	// (0x000014e5) set_opt_bg_pane_g5_copy1

0x14ed,	// (0x000014ed) set_opt_bg_pane_g6_copy1

0x58f6,	// (0x000058f6) set_opt_bg_pane_g7_copy1

0x58fe,	// (0x000058fe) set_opt_bg_pane_g8_copy1

0x5908,	// (0x00005908) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x5912,	// (0x00005912) setting_slider_pane_vc_t1

0x5921,	// (0x00005921) setting_slider_pane_vc_t2

0x5931,	// (0x00005931) setting_slider_pane_vc_t3

0x0002,

0xb04a,	// (0x0000b04a) setting_slider_pane_vc_t

0x5941,	// (0x00005941) slider_set_pane_vc

0x45a6,	// (0x000045a6) volume_set_pane_vc_g1

0x45af,	// (0x000045af) volume_set_pane_vc_g2

0x45b8,	// (0x000045b8) volume_set_pane_vc_g3

0x45c1,	// (0x000045c1) volume_set_pane_vc_g4

0x45ca,	// (0x000045ca) volume_set_pane_vc_g5

0x45d3,	// (0x000045d3) volume_set_pane_vc_g6

0x45dc,	// (0x000045dc) volume_set_pane_vc_g7

0x45e5,	// (0x000045e5) volume_set_pane_vc_g8

0x45ee,	// (0x000045ee) volume_set_pane_vc_g9

0x45f7,	// (0x000045f7) volume_set_pane_vc_g10

0x0009,

0xaee8,	// (0x0000aee8) volume_set_pane_vc_g

0x5949,	// (0x00005949) volume_set_pane_vc

0x5951,	// (0x00005951) button_value_adjust_pane_cp1_vc

0x595b,	// (0x0000595b) list_highlight_pane_cp2_vc

0x5964,	// (0x00005964) list_set_pane_vc_ParamLimits

0x5964,	// (0x00005964) list_set_pane_vc

0x59c2,	// (0x000059c2) main_pane_set_vc_t1_ParamLimits

0x59c2,	// (0x000059c2) main_pane_set_vc_t1

0x59d7,	// (0x000059d7) main_pane_set_vc_t2_ParamLimits

0x59d7,	// (0x000059d7) main_pane_set_vc_t2

0x59e9,	// (0x000059e9) main_pane_set_vc_t3_ParamLimits

0x59e9,	// (0x000059e9) main_pane_set_vc_t3

0x59fd,	// (0x000059fd) main_pane_set_vc_t4_ParamLimits

0x59fd,	// (0x000059fd) main_pane_set_vc_t4

0x0003,

0xb051,	// (0x0000b051) main_pane_set_vc_t_ParamLimits

0xb051,	// (0x0000b051) main_pane_set_vc_t

0x5a11,	// (0x00005a11) setting_code_pane_vc_ParamLimits

0x5a11,	// (0x00005a11) setting_code_pane_vc

0x5a22,	// (0x00005a22) setting_slider_graphic_pane_vc

0x5a22,	// (0x00005a22) setting_slider_pane_vc

0x5a22,	// (0x00005a22) setting_text_pane_vc

0x5a22,	// (0x00005a22) setting_volume_pane_vc

0x5a2c,	// (0x00005a2c) scroll_pane_cp121_vc

0x12a4,	// (0x000012a4) set_content_pane_vc

0x5cf9,	// (0x00005cf9) button_value_adjust_pane_g1

0x5d02,	// (0x00005d02) button_value_adjust_pane_g2

0x0001,

0xb0b2,	// (0x0000b0b2) button_value_adjust_pane_g

0x5d0b,	// (0x00005d0b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5d0b,	// (0x00005d0b) form_field_slider_wide_pane_vc_t1

0x5d1f,	// (0x00005d1f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5d1f,	// (0x00005d1f) form_field_slider_wide_pane_vc_t2

0x0002,

0xb0b7,	// (0x0000b0b7) form_field_slider_wide_pane_vc_t_ParamLimits

0xb0b7,	// (0x0000b0b7) form_field_slider_wide_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc

0x5d4d,	// (0x00005d4d) slider_cont_pane_cp1_vc_ParamLimits

0x5d4d,	// (0x00005d4d) slider_cont_pane_cp1_vc

0x5d5f,	// (0x00005d5f) slider_form_pane_g1_cp2

0x58c0,	// (0x000058c0) slider_form_pane_g2_cp2

0x5d8c,	// (0x00005d8c) form_field_slider_pane_vc_t3

0x5d9a,	// (0x00005d9a) form_field_slider_pane_vc_t4

0x5da8,	// (0x00005da8) slider_form_pane_vc_ParamLimits

0x5da8,	// (0x00005da8) slider_form_pane_vc

0x5db5,	// (0x00005db5) form_field_slider_pane_vc_t1_ParamLimits

0x5db5,	// (0x00005db5) form_field_slider_pane_vc_t1

0x5d1f,	// (0x00005d1f) form_field_slider_pane_vc_t2_ParamLimits

0x5d1f,	// (0x00005d1f) form_field_slider_pane_vc_t2

0x0001,

0xb0c9,	// (0x0000b0c9) form_field_slider_pane_vc_t_ParamLimits

0xb0c9,	// (0x0000b0c9) form_field_slider_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc

0x5dd1,	// (0x00005dd1) slider_cont_pane_vc_ParamLimits

0x5dd1,	// (0x00005dd1) slider_cont_pane_vc

0x5de5,	// (0x00005de5) list_form_graphic_pane_cp_vc_ParamLimits

0x5de5,	// (0x00005de5) list_form_graphic_pane_cp_vc

0x3999,	// (0x00003999) form_field_popup_wide_pane_vc_g1

0x5dfa,	// (0x00005dfa) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5dfa,	// (0x00005dfa) form_field_popup_wide_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_cp8_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp8_vc

0x5e3f,	// (0x00005e3f) list_form_wide_pane_vc_ParamLimits

0x5e3f,	// (0x00005e3f) list_form_wide_pane_vc

0x5e4b,	// (0x00005e4b) list_form_graphic_pane_vc_g1

0x5e53,	// (0x00005e53) list_form_graphic_pane_vc_t1_ParamLimits

0x5e53,	// (0x00005e53) list_form_graphic_pane_vc_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc

0x5e6f,	// (0x00005e6f) list_form_graphic_pane_vc_ParamLimits

0x5e6f,	// (0x00005e6f) list_form_graphic_pane_vc

0x3999,	// (0x00003999) form_field_popup_pane_vc_g1

0x5e85,	// (0x00005e85) form_field_popup_pane_vc_t1_ParamLimits

0x5e85,	// (0x00005e85) form_field_popup_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_cp7_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp7_vc

0x5e9c,	// (0x00005e9c) list_form_pane_vc_ParamLimits

0x5e9c,	// (0x00005e9c) list_form_pane_vc

0x5ea8,	// (0x00005ea8) data_form_pane_vc_t1_ParamLimits

0x5ea8,	// (0x00005ea8) data_form_pane_vc_t1

0x14c5,	// (0x000014c5) input_focus_pane_vc_g1

0x14cd,	// (0x000014cd) input_focus_pane_vc_g2

0x14d5,	// (0x000014d5) input_focus_pane_vc_g3

0x14dd,	// (0x000014dd) input_focus_pane_vc_g4

0x14e5,	// (0x000014e5) input_focus_pane_vc_g5

0x14ed,	// (0x000014ed) input_focus_pane_vc_g6

0x14f5,	// (0x000014f5) input_focus_pane_vc_g7

0x14fd,	// (0x000014fd) input_focus_pane_vc_g8

0x1505,	// (0x00001505) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xacc5,	// (0x0000acc5) input_focus_pane_vc_g

0x398d,	// (0x0000398d) data_form_pane_vc_ParamLimits

0x398d,	// (0x0000398d) data_form_pane_vc

0x3999,	// (0x00003999) form_field_data_pane_vc_g1

0x5ec3,	// (0x00005ec3) form_field_data_pane_vc_t1_ParamLimits

0x5ec3,	// (0x00005ec3) form_field_data_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_vc

0x5edd,	// (0x00005edd) button_value_adjust_pane_cp3_vc

0x5ee5,	// (0x00005ee5) button_value_adjust_pane_cp5_vc

0x5eed,	// (0x00005eed) form_field_data_pane_vc_ParamLimits

0x5eed,	// (0x00005eed) form_field_data_pane_vc

0x5f04,	// (0x00005f04) form_field_data_pane_vc_cp2

0x5f0c,	// (0x00005f0c) form_field_data_wide_pane_vc_ParamLimits

0x5f0c,	// (0x00005f0c) form_field_data_wide_pane_vc

0x5f22,	// (0x00005f22) form_field_data_wide_pane_vc_cp2

0x5f2a,	// (0x00005f2a) form_field_popup_pane_vc_ParamLimits

0x5f2a,	// (0x00005f2a) form_field_popup_pane_vc

0x5f41,	// (0x00005f41) form_field_popup_wide_pane_vc_ParamLimits

0x5f41,	// (0x00005f41) form_field_popup_wide_pane_vc

0x5f57,	// (0x00005f57) form_field_slider_pane_vc_ParamLimits

0x5f57,	// (0x00005f57) form_field_slider_pane_vc

0x5f6a,	// (0x00005f6a) form_field_slider_wide_pane_vc_ParamLimits

0x5f6a,	// (0x00005f6a) form_field_slider_wide_pane_vc

0xd633,	// (0x0000d633) grid_touch_1_pane_ParamLimits

0xd633,	// (0x0000d633) grid_touch_1_pane

0xd647,	// (0x0000d647) grid_touch_2_pane_ParamLimits

0xd647,	// (0x0000d647) grid_touch_2_pane

0x6038,	// (0x00006038) touch_pane_g1_ParamLimits

0x6038,	// (0x00006038) touch_pane_g1

0x5fa1,	// (0x00005fa1) cell_app_pane_cp_wide_ParamLimits

0x5fa1,	// (0x00005fa1) cell_app_pane_cp_wide

0x5fb2,	// (0x00005fb2) grid_popup_fast_wide_pane_ParamLimits

0x5fb2,	// (0x00005fb2) grid_popup_fast_wide_pane

0x5fc6,	// (0x00005fc6) scroll_pane_cp19_ParamLimits

0x5fc6,	// (0x00005fc6) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5fda,	// (0x00005fda) listscroll_popup_fast_wide_pane

0x16d9,	// (0x000016d9) grid_indicator_nsta_pane

0x5fe2,	// (0x00005fe2) clock_nsta_pane_g1

0x5feb,	// (0x00005feb) clock_nsta_pane_t1

0xd671,	// (0x0000d671) cell_indicator_nsta_pane_ParamLimits

0xd671,	// (0x0000d671) cell_indicator_nsta_pane

0x6038,	// (0x00006038) cell_indicator_nsta_pane_g1

0xd688,	// (0x0000d688) cell_indicator_nsta_pane_g2

0x0001,

0xf5f2,	// (0x0000f5f2) cell_indicator_nsta_pane_g

0x6053,	// (0x00006053) clock_nsta_pane_cp

0x605b,	// (0x0000605b) indicator_nsta_pane_cp

0x6063,	// (0x00006063) nsta_clock_indic_pane_g1

0x067b,	// (0x0000067b) grid_indicator_pane

0x1c6f,	// (0x00001c6f) scroll_pane_cp29

0x218e,	// (0x0000218e) indicator_nsta_pane_cp2_ParamLimits

0x218e,	// (0x0000218e) indicator_nsta_pane_cp2

0x0507,	// (0x00000507) main_apps_wheel_pane

0x3bec,	// (0x00003bec) form_midp_field_text_pane_ParamLimits

0x3d37,	// (0x00003d37) scroll_bar_cp050_ParamLimits

0x60c4,	// (0x000060c4) cell_indicator_pane_ParamLimits

0x60c4,	// (0x000060c4) cell_indicator_pane

0x60db,	// (0x000060db) cell_indicator_pane_g1

0xd695,	// (0x0000d695) grid_wheel_folder_pane_ParamLimits

0xd695,	// (0x0000d695) grid_wheel_folder_pane

0xd6a3,	// (0x0000d6a3) list_wheel_apps_pane_ParamLimits

0xd6a3,	// (0x0000d6a3) list_wheel_apps_pane

0xd6b1,	// (0x0000d6b1) main_apps_wheel_pane_g1_ParamLimits

0xd6b1,	// (0x0000d6b1) main_apps_wheel_pane_g1

0xd6bd,	// (0x0000d6bd) main_apps_wheel_pane_g2_ParamLimits

0xd6bd,	// (0x0000d6bd) main_apps_wheel_pane_g2

0x0001,

0xf5f7,	// (0x0000f5f7) main_apps_wheel_pane_g_ParamLimits

0xf5f7,	// (0x0000f5f7) main_apps_wheel_pane_g

0xd6cb,	// (0x0000d6cb) main_apps_wheel_pane_t1_ParamLimits

0xd6cb,	// (0x0000d6cb) main_apps_wheel_pane_t1

0xd6df,	// (0x0000d6df) list_wheel_apps_pane_g1

0xd6e7,	// (0x0000d6e7) list_wheel_apps_pane_g2

0xd6ef,	// (0x0000d6ef) list_wheel_apps_pane_g3

0xd6f7,	// (0x0000d6f7) list_wheel_apps_pane_g4

0xd701,	// (0x0000d701) list_wheel_apps_pane_g5

0x0004,

0xf5fc,	// (0x0000f5fc) list_wheel_apps_pane_g

0x2499,	// (0x00002499) navi_icon_text_pane

0xcc3f,	// (0x0000cc3f) aid_fill_nsta

0x61a0,	// (0x000061a0) navi_icon_text_pane_g1

0x61ac,	// (0x000061ac) navi_icon_text_pane_t1

0xc266,	// (0x0000c266) list_set_graphic_pane_t1_ParamLimits

0xc266,	// (0x0000c266) list_set_graphic_pane_t1

0x4486,	// (0x00004486) popup_midp_note_alarm_window_t6_ParamLimits

0x4486,	// (0x00004486) popup_midp_note_alarm_window_t6

0x4498,	// (0x00004498) popup_midp_note_alarm_window_t7_ParamLimits

0x4498,	// (0x00004498) popup_midp_note_alarm_window_t7

0x44aa,	// (0x000044aa) popup_midp_note_alarm_window_t8_ParamLimits

0x44aa,	// (0x000044aa) popup_midp_note_alarm_window_t8

0x44bc,	// (0x000044bc) popup_midp_note_alarm_window_t9_ParamLimits

0x44bc,	// (0x000044bc) popup_midp_note_alarm_window_t9

0x44ce,	// (0x000044ce) popup_midp_note_alarm_window_t10_ParamLimits

0x44ce,	// (0x000044ce) popup_midp_note_alarm_window_t10

0x44e0,	// (0x000044e0) popup_midp_note_alarm_window_t11_ParamLimits

0x44e0,	// (0x000044e0) popup_midp_note_alarm_window_t11

0x44f2,	// (0x000044f2) scroll_pane_cp17_ParamLimits

0x44f2,	// (0x000044f2) scroll_pane_cp17

0x45a6,	// (0x000045a6) volume_small_pane_cp_g1

0x61be,	// (0x000061be) volume_small_pane_cp_g2

0x61c7,	// (0x000061c7) volume_small_pane_cp_g3

0x61d0,	// (0x000061d0) volume_small_pane_cp_g4

0x61d9,	// (0x000061d9) volume_small_pane_cp_g5

0x61e2,	// (0x000061e2) volume_small_pane_cp_g6

0x61eb,	// (0x000061eb) volume_small_pane_cp_g7

0x61f4,	// (0x000061f4) volume_small_pane_cp_g8

0x61fd,	// (0x000061fd) volume_small_pane_cp_g9

0x6206,	// (0x00006206) volume_small_pane_cp_g10

0x26ea,	// (0x000026ea) midp_ticker_pane_g1_ParamLimits

0x26f6,	// (0x000026f6) midp_ticker_pane_g2_ParamLimits

0xad91,	// (0x0000ad91) midp_ticker_pane_g_ParamLimits

0x2702,	// (0x00002702) midp_ticker_pane_t1_ParamLimits

0xcc63,	// (0x0000cc63) aid_fill_nsta_2

0x3d23,	// (0x00003d23) list_form2_midp_pane

0x50d3,	// (0x000050d3) midp_editing_number_pane_ParamLimits

0x50e2,	// (0x000050e2) midp_ticker_pane_ParamLimits

0x620f,	// (0x0000620f) form2_midp_field_pane

0x6233,	// (0x00006233) scroll_pane_cp51

0x6253,	// (0x00006253) form2_midp_button_pane_ParamLimits

0x6253,	// (0x00006253) form2_midp_button_pane

0x6265,	// (0x00006265) form2_midp_content_pane_ParamLimits

0x6265,	// (0x00006265) form2_midp_content_pane

0x627f,	// (0x0000627f) form2_midp_field_choice_group_pane

0x6287,	// (0x00006287) form2_midp_field_pane_g1

0x628f,	// (0x0000628f) form2_midp_field_pane_g2

0x6297,	// (0x00006297) form2_midp_field_pane_g3

0x629f,	// (0x0000629f) form2_midp_field_pane_g4

0x0003,

0xb120,	// (0x0000b120) form2_midp_field_pane_g

0x62a7,	// (0x000062a7) form2_midp_gauge_slider_pane

0x62af,	// (0x000062af) form2_midp_gauge_wait_pane

0x62b7,	// (0x000062b7) form2_midp_image_pane_ParamLimits

0x62b7,	// (0x000062b7) form2_midp_image_pane

0x62d2,	// (0x000062d2) form2_midp_label_pane_ParamLimits

0x62d2,	// (0x000062d2) form2_midp_label_pane

0xd734,	// (0x0000d734) form2_midp_label_pane_cp_ParamLimits

0xd734,	// (0x0000d734) form2_midp_label_pane_cp

0x630c,	// (0x0000630c) form2_midp_string_pane_ParamLimits

0x630c,	// (0x0000630c) form2_midp_string_pane

0xd753,	// (0x0000d753) form2_midp_text_pane_ParamLimits

0xd753,	// (0x0000d753) form2_midp_text_pane

0x633b,	// (0x0000633b) form2_midp_time_pane

0x634b,	// (0x0000634b) input_focus_pane_cp51_ParamLimits

0x634b,	// (0x0000634b) input_focus_pane_cp51

0x6363,	// (0x00006363) form2_midp_label_pane_t1_ParamLimits

0x6363,	// (0x00006363) form2_midp_label_pane_t1

0xd76c,	// (0x0000d76c) form2_mdip_text_pane_t1_ParamLimits

0xd76c,	// (0x0000d76c) form2_mdip_text_pane_t1

0x63c3,	// (0x000063c3) form2_midp_time_pane_t1

0x63de,	// (0x000063de) form2_midp_gauge_slider_pane_t1

0xd787,	// (0x0000d787) form2_midp_gauge_slider_pane_t2

0xd799,	// (0x0000d799) form2_midp_gauge_slider_pane_t3

0x0002,

0xf60c,	// (0x0000f60c) form2_midp_gauge_slider_pane_t

0x6414,	// (0x00006414) form2_midp_slider_pane

0x6420,	// (0x00006420) form2_midp_gauge_wait_pane_t1

0x642e,	// (0x0000642e) form2_midp_wait_pane_ParamLimits

0x642e,	// (0x0000642e) form2_midp_wait_pane

0xd7ab,	// (0x0000d7ab) list_single_2graphic_pane_cp4_ParamLimits

0xd7ab,	// (0x0000d7ab) list_single_2graphic_pane_cp4

0xd0f1,	// (0x0000d0f1) list_single_midp_graphic_pane_cp_ParamLimits

0xd0f1,	// (0x0000d0f1) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x6488,	// (0x00006488) list_single_2graphic_pane_g1_cp4

0x6490,	// (0x00006490) list_single_2graphic_pane_g2_cp4

0x6498,	// (0x00006498) list_single_2graphic_pane_t1_cp4

0x0507,	// (0x00000507) list_highlight_pane_cp21

0x64a7,	// (0x000064a7) list_single_midp_graphic_pane_g4_cp

0x64b6,	// (0x000064b6) list_single_midp_graphic_pane_t1_cp

0xd7bf,	// (0x0000d7bf) form2_mdip_string_pane_t1_ParamLimits

0xd7bf,	// (0x0000d7bf) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x105a,	// (0x0000105a) list_double_large_graphic_pane_g5_ParamLimits

0x105a,	// (0x0000105a) list_double_large_graphic_pane_g5

0x2b90,	// (0x00002b90) midp_form_pane_ParamLimits

0x0507,	// (0x00000507) main_apps_wheel_pane_ParamLimits

0xc98f,	// (0x0000c98f) popup_preview_window_ParamLimits

0xc98f,	// (0x0000c98f) popup_preview_window

0x30fa,	// (0x000030fa) popup_touch_info_window_ParamLimits

0x30fa,	// (0x000030fa) popup_touch_info_window

0x3118,	// (0x00003118) popup_touch_menu_window_ParamLimits

0x3118,	// (0x00003118) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x65c4,	// (0x000065c4) list_touch_menu_pane

0x65cc,	// (0x000065cc) list_single_touch_menu_pane_ParamLimits

0x65cc,	// (0x000065cc) list_single_touch_menu_pane

0x65e2,	// (0x000065e2) list_single_touch_menu_pane_t1

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7_ParamLimits

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7

0x65f0,	// (0x000065f0) heading_sub_pane

0x65f8,	// (0x000065f8) list_touch_info_pane_ParamLimits

0x65f8,	// (0x000065f8) list_touch_info_pane

0x6607,	// (0x00006607) list_single_touch_info_pane_ParamLimits

0x6607,	// (0x00006607) list_single_touch_info_pane

0x6619,	// (0x00006619) list_single_touch_info_pane_t1

0x6627,	// (0x00006627) list_single_touch_info_pane_t2

0x0001,

0xb137,	// (0x0000b137) list_single_touch_info_pane_t

0x2619,	// (0x00002619) bg_popup_heading_pane_cp

0x6635,	// (0x00006635) heading_sub_pane_t1

0x389f,	// (0x0000389f) bg_popup_preview_window_pane_cp_ParamLimits

0x389f,	// (0x0000389f) bg_popup_preview_window_pane_cp

0x65f0,	// (0x000065f0) heading_preview_pane

0x65f8,	// (0x000065f8) list_preview_pane_ParamLimits

0x65f8,	// (0x000065f8) list_preview_pane

0x6643,	// (0x00006643) popup_preview_window_g1

0x6607,	// (0x00006607) list_single_preview_pane_ParamLimits

0x6607,	// (0x00006607) list_single_preview_pane

0x664b,	// (0x0000664b) list_single_preview_pane_g1

0x6653,	// (0x00006653) list_single_preview_pane_t1

0x6619,	// (0x00006619) list_single_preview_pane_t2

0x0001,

0xb13c,	// (0x0000b13c) list_single_preview_pane_t

0x6661,	// (0x00006661) bg_popup_heading_pane_cp2_ParamLimits

0x6661,	// (0x00006661) bg_popup_heading_pane_cp2

0x6677,	// (0x00006677) heading_preview_pane_g1

0x667f,	// (0x0000667f) heading_preview_pane_t1_ParamLimits

0x667f,	// (0x0000667f) heading_preview_pane_t1

0x069e,	// (0x0000069e) soft_indicator_pane_t1_ParamLimits

0x0d94,	// (0x00000d94) scroll_pane_ParamLimits

0x1b68,	// (0x00001b68) scroll_sc2_left_pane

0x1b71,	// (0x00001b71) scroll_sc2_right_pane

0x1b90,	// (0x00001b90) scroll_bg_pane_g1_ParamLimits

0x1ba5,	// (0x00001ba5) scroll_bg_pane_g2_ParamLimits

0x1bbd,	// (0x00001bbd) scroll_bg_pane_g3_ParamLimits

0xad1c,	// (0x0000ad1c) scroll_bg_pane_g_ParamLimits

0x1b90,	// (0x00001b90) scroll_handle_pane_g1_ParamLimits

0x1bdf,	// (0x00001bdf) scroll_handle_pane_g2_ParamLimits

0x1bbd,	// (0x00001bbd) scroll_handle_pane_g3_ParamLimits

0xad23,	// (0x0000ad23) scroll_handle_pane_g_ParamLimits

0x2bc0,	// (0x00002bc0) popup_choice_list_window_ParamLimits

0x2bc0,	// (0x00002bc0) popup_choice_list_window

0x35e9,	// (0x000035e9) choice_list_pane

0x36b1,	// (0x000036b1) cell_toolbar_pane_t1

0x36d9,	// (0x000036d9) toolbar_button_pane_ParamLimits

0x4b10,	// (0x00004b10) ai_gene_pane_1_t2_ParamLimits

0x4b10,	// (0x00004b10) ai_gene_pane_1_t2

0x0001,

0xaf44,	// (0x0000af44) ai_gene_pane_1_t_ParamLimits

0xaf44,	// (0x0000af44) ai_gene_pane_1_t

0x669c,	// (0x0000669c) scroll_sc2_left_pane_g1

0x669c,	// (0x0000669c) scroll_sc2_right_pane_g1

0x2b90,	// (0x00002b90) bg_popup_sub_pane_cp10

0x66a6,	// (0x000066a6) list_choice_list_pane

0x66bf,	// (0x000066bf) list_single_choice_list_pane_ParamLimits

0x66bf,	// (0x000066bf) list_single_choice_list_pane

0x66d2,	// (0x000066d2) list_single_choice_list_pane_g1

0x16aa,	// (0x000016aa) list_single_choice_list_pane_t1_ParamLimits

0x16aa,	// (0x000016aa) list_single_choice_list_pane_t1

0x66da,	// (0x000066da) choice_list_pane_g1

0x66e2,	// (0x000066e2) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18d0,	// (0x000018d0) title_pane_stacon_g2_ParamLimits

0x18d0,	// (0x000018d0) title_pane_stacon_g2

0x0002,

0xad02,	// (0x0000ad02) title_pane_stacon_g_ParamLimits

0xad02,	// (0x0000ad02) title_pane_stacon_g

0x2619,	// (0x00002619) cursor_press_pane

0xc63c,	// (0x0000c63c) popup_fep_hwr_window_ParamLimits

0xc63c,	// (0x0000c63c) popup_fep_hwr_window

0x2ce6,	// (0x00002ce6) popup_fep_vkb_window_ParamLimits

0x2ce6,	// (0x00002ce6) popup_fep_vkb_window

0x66f0,	// (0x000066f0) cursor_press_pane_g1

0x0002,

0xf620,	// (0x0000f620) fep_vkb_side_pane_g_ParamLimits

0x6731,	// (0x00006731) fep_hwr_candidate_pane_ParamLimits

0x6731,	// (0x00006731) fep_hwr_candidate_pane

0x675b,	// (0x0000675b) fep_hwr_side_pane_ParamLimits

0x675b,	// (0x0000675b) fep_hwr_side_pane

0x677b,	// (0x0000677b) fep_hwr_top_pane_ParamLimits

0x677b,	// (0x0000677b) fep_hwr_top_pane

0x6793,	// (0x00006793) fep_hwr_write_pane_ParamLimits

0x6793,	// (0x00006793) fep_hwr_write_pane

0xf620,	// (0x0000f620) fep_vkb_side_pane_g

0x67cd,	// (0x000067cd) fep_hwr_top_pane_g1

0x67df,	// (0x000067df) fep_hwr_top_pane_g2

0x67f1,	// (0x000067f1) fep_hwr_top_pane_g3

0x0002,

0xb141,	// (0x0000b141) fep_hwr_top_pane_g

0x6806,	// (0x00006806) fep_hwr_top_text_pane

0x1d5f,	// (0x00001d5f) fep_hwr_top_text_pane_g1

0x68de,	// (0x000068de) fep_hwr_top_text_pane_t1

0x692e,	// (0x0000692e) fep_hwr_candidate_pane_g1

0x6ba7,	// (0x00006ba7) fep_vkb_keypad_pane_g3_ParamLimits

0x6ba7,	// (0x00006ba7) fep_vkb_keypad_pane_g3

0x6bcf,	// (0x00006bcf) fep_vkb_keypad_pane_g4_ParamLimits

0x6bcf,	// (0x00006bcf) fep_vkb_keypad_pane_g4

0x6c3e,	// (0x00006c3e) fep_vkb_bottom_pane_g2_ParamLimits

0x6c3e,	// (0x00006c3e) fep_vkb_bottom_pane_g2

0x0001,

0xb16c,	// (0x0000b16c) fep_vkb_bottom_pane_g_ParamLimits

0xb16c,	// (0x0000b16c) fep_vkb_bottom_pane_g

0x669c,	// (0x0000669c) cell_vkb_side_pane_g2

0x0001,

0xb176,	// (0x0000b176) cell_vkb_side_pane_g

0x6cc9,	// (0x00006cc9) cell_vkb_side_pane_t1

0x6cd7,	// (0x00006cd7) cell_vkb_side_pane_t1_copy1

0x669c,	// (0x0000669c) bg_fep_vkb_candidate_pane_g2

0x6e03,	// (0x00006e03) cell_vkb_candidate_pane_ParamLimits

0x6962,	// (0x00006962) aid_size_cell_vkb_ParamLimits

0x6962,	// (0x00006962) aid_size_cell_vkb

0x6e03,	// (0x00006e03) cell_vkb_candidate_pane

0x6e37,	// (0x00006e37) bg_popup_fep_shadow_pane_g1

0xd890,	// (0x0000d890) fep_vkb_bottom_pane_ParamLimits

0xd890,	// (0x0000d890) fep_vkb_bottom_pane

0x6a26,	// (0x00006a26) fep_vkb_candidate_pane_ParamLimits

0x6a26,	// (0x00006a26) fep_vkb_candidate_pane

0xd8b5,	// (0x0000d8b5) fep_vkb_keypad_pane_ParamLimits

0xd8b5,	// (0x0000d8b5) fep_vkb_keypad_pane

0xd8f1,	// (0x0000d8f1) fep_vkb_side_pane_ParamLimits

0xd8f1,	// (0x0000d8f1) fep_vkb_side_pane

0xd92d,	// (0x0000d92d) fep_vkb_top_pane_ParamLimits

0xd92d,	// (0x0000d92d) fep_vkb_top_pane

0x6b00,	// (0x00006b00) fep_vkb_top_pane_g1_ParamLimits

0x6b00,	// (0x00006b00) fep_vkb_top_pane_g1

0x6b0f,	// (0x00006b0f) fep_vkb_top_pane_g2_ParamLimits

0x6b0f,	// (0x00006b0f) fep_vkb_top_pane_g2

0x6b1e,	// (0x00006b1e) fep_vkb_top_pane_g3_ParamLimits

0x6b1e,	// (0x00006b1e) fep_vkb_top_pane_g3

0x0003,

0xb15c,	// (0x0000b15c) fep_vkb_top_pane_g_ParamLimits

0xb15c,	// (0x0000b15c) fep_vkb_top_pane_g

0x6b3c,	// (0x00006b3c) fep_vkb_top_text_pane_ParamLimits

0x6b3c,	// (0x00006b3c) fep_vkb_top_text_pane

0xd969,	// (0x0000d969) fep_vkb_side_pane_g1_ParamLimits

0xd969,	// (0x0000d969) fep_vkb_side_pane_g1

0x6b96,	// (0x00006b96) grid_vkb_side_pane_ParamLimits

0x6b96,	// (0x00006b96) grid_vkb_side_pane

0x6e3f,	// (0x00006e3f) bg_popup_fep_shadow_pane_g2

0x6e48,	// (0x00006e48) bg_popup_fep_shadow_pane_g3

0x6e50,	// (0x00006e50) bg_popup_fep_shadow_pane_g4

0x6e59,	// (0x00006e59) bg_popup_fep_shadow_pane_g5

0x6e63,	// (0x00006e63) bg_popup_fep_shadow_pane_g6

0x6e6b,	// (0x00006e6b) bg_popup_fep_shadow_pane_g7

0x14e5,	// (0x000014e5) bg_popup_fep_shadow_pane_g8

0x6bed,	// (0x00006bed) grid_vkb_keypad_number_pane_ParamLimits

0x6bed,	// (0x00006bed) grid_vkb_keypad_number_pane

0x6bfd,	// (0x00006bfd) grid_vkb_keypad_pane_ParamLimits

0x6bfd,	// (0x00006bfd) grid_vkb_keypad_pane

0x6c23,	// (0x00006c23) fep_vkb_bottom_pane_g1_ParamLimits

0x6c23,	// (0x00006c23) fep_vkb_bottom_pane_g1

0x6c4c,	// (0x00006c4c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6c4c,	// (0x00006c4c) grid_vkb_keypad_bottom_left_pane

0x6c61,	// (0x00006c61) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6c61,	// (0x00006c61) grid_vkb_keypad_bottom_right_pane

0x6c76,	// (0x00006c76) fep_vkb_top_text_pane_g1

0xd9b0,	// (0x0000d9b0) fep_vkb_top_text_pane_t1

0xd9c2,	// (0x0000d9c2) cell_vkb_side_pane_ParamLimits

0xd9c2,	// (0x0000d9c2) cell_vkb_side_pane

0x669c,	// (0x0000669c) cell_vkb_side_pane_g1

0x6ce5,	// (0x00006ce5) cell_vkb_keypad_pane_ParamLimits

0x6ce5,	// (0x00006ce5) cell_vkb_keypad_pane

0x6d5a,	// (0x00006d5a) cell_vkb_keypad_pane_g1

0x0008,

0xb189,	// (0x0000b189) bg_popup_fep_shadow_pane_g

0x669c,	// (0x0000669c) cell_hwr_side_pane_g1

0x669c,	// (0x0000669c) cell_hwr_side_pane_g2

0x6d64,	// (0x00006d64) cell_vkb_keypad_pane_t1

0xd9d8,	// (0x0000d9d8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd9d8,	// (0x0000d9d8) cell_vkb_keypad_bottom_left_pane

0xd9ed,	// (0x0000d9ed) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd9ed,	// (0x0000d9ed) cell_vkb_keypad_bottom_right_pane

0x669c,	// (0x0000669c) cell_vkb_keypad_bottom_left_pane_g1

0x669c,	// (0x0000669c) cell_vkb_keypad_bottom_right_pane_g1

0x6dc8,	// (0x00006dc8) cell_vkb_keypad_number_pane_ParamLimits

0x6dc8,	// (0x00006dc8) cell_vkb_keypad_number_pane

0x6de7,	// (0x00006de7) cell_vkb_keypad_number_pane_g1

0x6df1,	// (0x00006df1) cell_vkb_keypad_number_pane_g2

0x6dfa,	// (0x00006dfa) cell_vkb_keypad_number_pane_g3

0x0002,

0xb17b,	// (0x0000b17b) cell_vkb_keypad_number_pane_g

0x6d64,	// (0x00006d64) cell_vkb_keypad_number_pane_t1

0x6e1e,	// (0x00006e1e) fep_vkb_candidate_pane_g1

0x0001,

0xb176,	// (0x0000b176) cell_hwr_side_pane_g

0x6e7d,	// (0x00006e7d) cell_hwr_side_pane_t1

0x6e8b,	// (0x00006e8b) cell_hwr_side_pane_t1_copy1

0x6b2e,	// (0x00006b2e) cell_hwr_candidate_pane_g1

0x6edb,	// (0x00006edb) cell_hwr_candidate_pane_t1

0x669c,	// (0x0000669c) cell_vkb_candidate_pane_g2

0x6f2f,	// (0x00006f2f) cell_vkb_candidate_pane_t1

0x66f8,	// (0x000066f8) bg_popup_fep_shadow_pane_ParamLimits

0x66f8,	// (0x000066f8) bg_popup_fep_shadow_pane

0x67ad,	// (0x000067ad) bg_fep_hwr_top_pane_g4

0x681b,	// (0x0000681b) bg_hwr_side_pane_g1_ParamLimits

0x681b,	// (0x0000681b) bg_hwr_side_pane_g1

0xd849,	// (0x0000d849) cell_hwr_side_pane_ParamLimits

0xd849,	// (0x0000d849) cell_hwr_side_pane

0x6889,	// (0x00006889) fep_hwr_write_pane_g1_ParamLimits

0x6889,	// (0x00006889) fep_hwr_write_pane_g1

0x6896,	// (0x00006896) fep_hwr_write_pane_g2_ParamLimits

0x6896,	// (0x00006896) fep_hwr_write_pane_g2

0x68a3,	// (0x000068a3) fep_hwr_write_pane_g3_ParamLimits

0x68a3,	// (0x000068a3) fep_hwr_write_pane_g3

0xd869,	// (0x0000d869) fep_hwr_write_pane_g4_ParamLimits

0xd869,	// (0x0000d869) fep_hwr_write_pane_g4

0x0005,

0xf613,	// (0x0000f613) fep_hwr_write_pane_g_ParamLimits

0xf613,	// (0x0000f613) fep_hwr_write_pane_g

0x67ad,	// (0x000067ad) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x67ad,	// (0x000067ad) bg_fep_hwr_candidate_pane_g2

0x68ec,	// (0x000068ec) cell_hwr_candidate_pane_ParamLimits

0x68ec,	// (0x000068ec) cell_hwr_candidate_pane

0x692e,	// (0x0000692e) fep_hwr_candidate_pane_g1_ParamLimits

0x6990,	// (0x00006990) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6990,	// (0x00006990) bg_popup_fep_shadow_pane_cp2

0x6b2e,	// (0x00006b2e) fep_vkb_top_pane_g4_ParamLimits

0x6b2e,	// (0x00006b2e) fep_vkb_top_pane_g4

0x6b74,	// (0x00006b74) fep_vkb_side_pane_g2_ParamLimits

0x6b74,	// (0x00006b74) fep_vkb_side_pane_g2

0xbdc4,	// (0x0000bdc4) list_setting_pane_t4_ParamLimits

0xbdc4,	// (0x0000bdc4) list_setting_pane_t4

0xbe3e,	// (0x0000be3e) list_setting_number_pane_t5_ParamLimits

0xbe3e,	// (0x0000be3e) list_setting_number_pane_t5

0x1db5,	// (0x00001db5) list_double_heading_pane_cp2_ParamLimits

0x1db5,	// (0x00001db5) list_double_heading_pane_cp2

0x0fe5,	// (0x00000fe5) list_double_heading_pane_g1_cp2_ParamLimits

0x0fe5,	// (0x00000fe5) list_double_heading_pane_g1_cp2

0x13c2,	// (0x000013c2) list_double_heading_pane_g2_cp2_ParamLimits

0x13c2,	// (0x000013c2) list_double_heading_pane_g2_cp2

0x6f3d,	// (0x00006f3d) list_double_heading_pane_t1_cp2_ParamLimits

0x6f3d,	// (0x00006f3d) list_double_heading_pane_t1_cp2

0x6f53,	// (0x00006f53) list_double_heading_pane_t2_cp2_ParamLimits

0x6f53,	// (0x00006f53) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02

0x6f65,	// (0x00006f65) list_preview_fixed_pane

0x6fab,	// (0x00006fab) list_empty_pane_fp_ParamLimits

0x6fab,	// (0x00006fab) list_empty_pane_fp

0x6fab,	// (0x00006fab) list_single_cale_day_pane_fp_ParamLimits

0x6fab,	// (0x00006fab) list_single_cale_day_pane_fp

0x6fab,	// (0x00006fab) list_single_graphic_heading_pane_fp_ParamLimits

0x6fab,	// (0x00006fab) list_single_graphic_heading_pane_fp

0x6fab,	// (0x00006fab) list_single_graphic_pane_fp_ParamLimits

0x6fab,	// (0x00006fab) list_single_graphic_pane_fp

0x6fab,	// (0x00006fab) list_single_heading_pane_fp_ParamLimits

0x6fab,	// (0x00006fab) list_single_heading_pane_fp

0x6fab,	// (0x00006fab) list_single_pane_fp_ParamLimits

0x6fab,	// (0x00006fab) list_single_pane_fp

0x6fc0,	// (0x00006fc0) list_single_pane_fp_g1_ParamLimits

0x6fc0,	// (0x00006fc0) list_single_pane_fp_g1

0x0fe5,	// (0x00000fe5) list_single_pane_fp_g2_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_pane_fp_g2

0x13c2,	// (0x000013c2) list_single_pane_fp_g3_ParamLimits

0x13c2,	// (0x000013c2) list_single_pane_fp_g3

0x6fcc,	// (0x00006fcc) list_single_pane_fp_g4_ParamLimits

0x6fcc,	// (0x00006fcc) list_single_pane_fp_g4

0x0003,

0xb1aa,	// (0x0000b1aa) list_single_pane_fp_g_ParamLimits

0xb1aa,	// (0x0000b1aa) list_single_pane_fp_g

0x6fd8,	// (0x00006fd8) list_single_pane_fp_t1_ParamLimits

0x6fd8,	// (0x00006fd8) list_single_pane_fp_t1

0x6fef,	// (0x00006fef) list_single_graphic_pane_fp_g1_ParamLimits

0x6fef,	// (0x00006fef) list_single_graphic_pane_fp_g1

0x6fc0,	// (0x00006fc0) list_single_graphic_pane_fp_g2_ParamLimits

0x6fc0,	// (0x00006fc0) list_single_graphic_pane_fp_g2

0x0fe5,	// (0x00000fe5) list_single_graphic_pane_fp_g3_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_graphic_pane_fp_g3

0x13c2,	// (0x000013c2) list_single_graphic_pane_fp_g4_ParamLimits

0x13c2,	// (0x000013c2) list_single_graphic_pane_fp_g4

0x6fcc,	// (0x00006fcc) list_single_graphic_pane_fp_g5_ParamLimits

0x6fcc,	// (0x00006fcc) list_single_graphic_pane_fp_g5

0x0004,

0xb1b3,	// (0x0000b1b3) list_single_graphic_pane_fp_g_ParamLimits

0xb1b3,	// (0x0000b1b3) list_single_graphic_pane_fp_g

0x6ffb,	// (0x00006ffb) list_single_graphic_pane_fp_t1_ParamLimits

0x6ffb,	// (0x00006ffb) list_single_graphic_pane_fp_t1

0x6fef,	// (0x00006fef) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6fef,	// (0x00006fef) list_single_graphic_heading_pane_fp_g1

0x6fc0,	// (0x00006fc0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6fc0,	// (0x00006fc0) list_single_graphic_heading_pane_fp_g2

0x0fe5,	// (0x00000fe5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_graphic_heading_pane_fp_g3

0x13c2,	// (0x000013c2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x13c2,	// (0x000013c2) list_single_graphic_heading_pane_fp_g4

0x6fcc,	// (0x00006fcc) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6fcc,	// (0x00006fcc) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb1b3,	// (0x0000b1b3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb1b3,	// (0x0000b1b3) list_single_graphic_heading_pane_fp_g

0x7011,	// (0x00007011) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7011,	// (0x00007011) list_single_graphic_heading_pane_fp_t1

0x7027,	// (0x00007027) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7027,	// (0x00007027) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb1be,	// (0x0000b1be) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb1be,	// (0x0000b1be) list_single_graphic_heading_pane_fp_t

0x7039,	// (0x00007039) list_single_cale_day_pane_fp_g1_ParamLimits

0x7039,	// (0x00007039) list_single_cale_day_pane_fp_g1

0x7071,	// (0x00007071) list_single_cale_day_pane_fp_g2_ParamLimits

0x7071,	// (0x00007071) list_single_cale_day_pane_fp_g2

0x707d,	// (0x0000707d) list_single_cale_day_pane_fp_g3_ParamLimits

0x707d,	// (0x0000707d) list_single_cale_day_pane_fp_g3

0x70a5,	// (0x000070a5) list_single_cale_day_pane_fp_g4_ParamLimits

0x70a5,	// (0x000070a5) list_single_cale_day_pane_fp_g4

0x70c9,	// (0x000070c9) list_single_cale_day_pane_fp_g5_ParamLimits

0x70c9,	// (0x000070c9) list_single_cale_day_pane_fp_g5

0x0004,

0xb1c3,	// (0x0000b1c3) list_single_cale_day_pane_fp_g_ParamLimits

0xb1c3,	// (0x0000b1c3) list_single_cale_day_pane_fp_g

0x70ed,	// (0x000070ed) list_single_cale_day_pane_fp_t1_ParamLimits

0x70ed,	// (0x000070ed) list_single_cale_day_pane_fp_t1

0x7113,	// (0x00007113) list_single_cale_day_pane_fp_t2_ParamLimits

0x7113,	// (0x00007113) list_single_cale_day_pane_fp_t2

0x712c,	// (0x0000712c) list_single_cale_day_pane_fp_t3_ParamLimits

0x712c,	// (0x0000712c) list_single_cale_day_pane_fp_t3

0x0002,

0xb1ce,	// (0x0000b1ce) list_single_cale_day_pane_fp_t_ParamLimits

0xb1ce,	// (0x0000b1ce) list_single_cale_day_pane_fp_t

0x6fc0,	// (0x00006fc0) list_empty_pane_fp_g1_ParamLimits

0x6fc0,	// (0x00006fc0) list_empty_pane_fp_g1

0x7145,	// (0x00007145) list_empty_pane_fp_t1

0x7153,	// (0x00007153) list_empty_pane_fp_t2

0x0001,

0xb1d5,	// (0x0000b1d5) list_empty_pane_fp_t

0x6fc0,	// (0x00006fc0) list_single_heading_pane_fp_g1_ParamLimits

0x6fc0,	// (0x00006fc0) list_single_heading_pane_fp_g1

0x0fe5,	// (0x00000fe5) list_single_heading_pane_fp_g2_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_heading_pane_fp_g2

0x13c2,	// (0x000013c2) list_single_heading_pane_fp_g3_ParamLimits

0x13c2,	// (0x000013c2) list_single_heading_pane_fp_g3

0x0002,

0xb1da,	// (0x0000b1da) list_single_heading_pane_fp_g_ParamLimits

0xb1da,	// (0x0000b1da) list_single_heading_pane_fp_g

0x7161,	// (0x00007161) list_single_heading_pane_fp_t1_ParamLimits

0x7161,	// (0x00007161) list_single_heading_pane_fp_t1

0x7173,	// (0x00007173) list_single_heading_pane_fp_t2_ParamLimits

0x7173,	// (0x00007173) list_single_heading_pane_fp_t2

0x0001,

0xb1e1,	// (0x0000b1e1) list_single_heading_pane_fp_t_ParamLimits

0xb1e1,	// (0x0000b1e1) list_single_heading_pane_fp_t

0x1718,	// (0x00001718) aid_size_cell_fast

0x07ab,	// (0x000007ab) soft_indicator_pane_cp1_t1

0x1755,	// (0x00001755) cell_app_pane_cp2_ParamLimits

0x1755,	// (0x00001755) cell_app_pane_cp2

0x671a,	// (0x0000671a) fep_hwr_candidate_drop_down_list_pane

0x6948,	// (0x00006948) fep_hwr_candidate_pane_g3_ParamLimits

0x6948,	// (0x00006948) fep_hwr_candidate_pane_g3

0x6955,	// (0x00006955) fep_hwr_candidate_pane_g4_ParamLimits

0x6955,	// (0x00006955) fep_hwr_candidate_pane_g4

0x0002,

0xb155,	// (0x0000b155) fep_hwr_candidate_pane_g_ParamLimits

0xb155,	// (0x0000b155) fep_hwr_candidate_pane_g

0x6a15,	// (0x00006a15) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6a15,	// (0x00006a15) fep_vkb_candidate_drop_down_list_pane

0x6e26,	// (0x00006e26) fep_vkb_candidate_pane_g3

0x6e2e,	// (0x00006e2e) fep_vkb_candidate_pane_g4

0x0002,

0xb182,	// (0x0000b182) fep_vkb_candidate_pane_g

0x6b2e,	// (0x00006b2e) cell_hwr_candidate_pane_g1_ParamLimits

0x6e99,	// (0x00006e99) cell_hwr_candidate_pane_g3_ParamLimits

0x6e99,	// (0x00006e99) cell_hwr_candidate_pane_g3

0x6eba,	// (0x00006eba) cell_hwr_candidate_pane_g4_ParamLimits

0x6eba,	// (0x00006eba) cell_hwr_candidate_pane_g4

0x0002,

0xb19c,	// (0x0000b19c) cell_hwr_candidate_pane_g_ParamLimits

0xb19c,	// (0x0000b19c) cell_hwr_candidate_pane_g

0x6ef9,	// (0x00006ef9) cell_vkb_candidate_pane_g3_ParamLimits

0x6ef9,	// (0x00006ef9) cell_vkb_candidate_pane_g3

0x6f14,	// (0x00006f14) cell_vkb_candidate_pane_g4_ParamLimits

0x6f14,	// (0x00006f14) cell_vkb_candidate_pane_g4

0x7189,	// (0x00007189) cell_app_pane_cp2_g1_ParamLimits

0x7189,	// (0x00007189) cell_app_pane_cp2_g1

0x71a7,	// (0x000071a7) cell_app_pane_cp2_g2_ParamLimits

0x71a7,	// (0x000071a7) cell_app_pane_cp2_g2

0x0001,

0xb1e6,	// (0x0000b1e6) cell_app_pane_cp2_g_ParamLimits

0xb1e6,	// (0x0000b1e6) cell_app_pane_cp2_g

0x71b3,	// (0x000071b3) cell_app_pane_cp2_t1_ParamLimits

0x71b3,	// (0x000071b3) cell_app_pane_cp2_t1

0x139c,	// (0x0000139c) grid_highlight_pane_cp1_ParamLimits

0x139c,	// (0x0000139c) grid_highlight_pane_cp1

0x71c5,	// (0x000071c5) cell_hwr_candidate_pane_cp1_ParamLimits

0x71c5,	// (0x000071c5) cell_hwr_candidate_pane_cp1

0x6b2e,	// (0x00006b2e) fep_hwr_candidate_drop_down_list_pane_g1

0x71e4,	// (0x000071e4) fep_hwr_candidate_drop_down_list_pane_g2

0x71f1,	// (0x000071f1) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb1eb,	// (0x0000b1eb) fep_hwr_candidate_drop_down_list_pane_g

0x71fe,	// (0x000071fe) fep_hwr_candidate_drop_down_list_scroll_pane

0x7207,	// (0x00007207) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7207,	// (0x00007207) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7214,	// (0x00007214) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7214,	// (0x00007214) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7221,	// (0x00007221) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7221,	// (0x00007221) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6ef9,	// (0x00006ef9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ef9,	// (0x00006ef9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6f14,	// (0x00006f14) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6f14,	// (0x00006f14) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x722e,	// (0x0000722e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x722e,	// (0x0000722e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7249,	// (0x00007249) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7249,	// (0x00007249) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7264,	// (0x00007264) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7264,	// (0x00007264) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb1f2,	// (0x0000b1f2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb1f2,	// (0x0000b1f2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x727f,	// (0x0000727f) cell_vkb_candidate_pane_cp1_ParamLimits

0x727f,	// (0x0000727f) cell_vkb_candidate_pane_cp1

0x6b2e,	// (0x00006b2e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6b2e,	// (0x00006b2e) fep_vkb_candidate_drop_down_list_pane_g1

0x71e4,	// (0x000071e4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x71e4,	// (0x000071e4) fep_vkb_candidate_drop_down_list_pane_g2

0x71f1,	// (0x000071f1) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x71f1,	// (0x000071f1) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb1eb,	// (0x0000b1eb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb1eb,	// (0x0000b1eb) fep_vkb_candidate_drop_down_list_pane_g

0x729f,	// (0x0000729f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x729f,	// (0x0000729f) fep_vkb_candidate_drop_down_list_scroll_pane

0x72ac,	// (0x000072ac) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x72ac,	// (0x000072ac) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x72b9,	// (0x000072b9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x72b9,	// (0x000072b9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x72c5,	// (0x000072c5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x72c5,	// (0x000072c5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6e99,	// (0x00006e99) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6e99,	// (0x00006e99) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6eba,	// (0x00006eba) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6eba,	// (0x00006eba) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x72d1,	// (0x000072d1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x72d1,	// (0x000072d1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x72f2,	// (0x000072f2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x72f2,	// (0x000072f2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7313,	// (0x00007313) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7313,	// (0x00007313) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb203,	// (0x0000b203) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb203,	// (0x0000b203) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb762,	// (0x0000b762) title_pane_g1_ParamLimits

0xb775,	// (0x0000b775) title_pane_g2_ParamLimits

0xf447,	// (0x0000f447) title_pane_g_ParamLimits

0x1d4f,	// (0x00001d4f) aid_call2_pane

0x1d57,	// (0x00001d57) aid_call_pane

0x1d5f,	// (0x00001d5f) popup_clock_analogue_window_g1

0x1d5f,	// (0x00001d5f) popup_clock_analogue_window_g2

0x1d67,	// (0x00001d67) popup_clock_analogue_window_g3

0x1d70,	// (0x00001d70) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xad31,	// (0x0000ad31) popup_clock_analogue_window_g

0x1d78,	// (0x00001d78) popup_clock_analogue_window_t1

0x1e03,	// (0x00001e03) clock_digital_number_pane_ParamLimits

0x1e03,	// (0x00001e03) clock_digital_number_pane

0x1e0f,	// (0x00001e0f) clock_digital_number_pane_cp02_ParamLimits

0x1e0f,	// (0x00001e0f) clock_digital_number_pane_cp02

0x1e1b,	// (0x00001e1b) clock_digital_number_pane_cp03_ParamLimits

0x1e1b,	// (0x00001e1b) clock_digital_number_pane_cp03

0x1e27,	// (0x00001e27) clock_digital_number_pane_cp04_ParamLimits

0x1e27,	// (0x00001e27) clock_digital_number_pane_cp04

0x1e33,	// (0x00001e33) clock_digital_separator_pane_ParamLimits

0x1e33,	// (0x00001e33) clock_digital_separator_pane

0x1e3f,	// (0x00001e3f) popup_clock_digital_window_t1_ParamLimits

0x1e3f,	// (0x00001e3f) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xad3c,	// (0x0000ad3c) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xad3c,	// (0x0000ad3c) clock_digital_separator_pane_g

0xcc3f,	// (0x0000cc3f) aid_fill_nsta_ParamLimits

0xcd75,	// (0x0000cd75) indicator_nsta_pane_ParamLimits

0x3416,	// (0x00003416) popup_clock_analogue_window

0x3416,	// (0x00003416) popup_clock_digital_window

0x16d9,	// (0x000016d9) grid_indicator_nsta_pane_ParamLimits

0x5ff9,	// (0x00005ff9) clock_nsta_pane_t2

0x0001,

0xb0d5,	// (0x0000b0d5) clock_nsta_pane_t

0x1b0d,	// (0x00001b0d) aid_size_max_handle

0xc127,	// (0x0000c127) aid_size_min_handle

0x2619,	// (0x00002619) editor_scroll_pane

0x732e,	// (0x0000732e) ex_editor_pane

0x1686,	// (0x00001686) scroll_pane_cp13

0x0dc0,	// (0x00000dc0) scroll_pane_cp14

0x1dad,	// (0x00001dad) scroll_pane_cp36

0xc130,	// (0x0000c130) list_single_graphic_hl_pane_cp2_ParamLimits

0xc130,	// (0x0000c130) list_single_graphic_hl_pane_cp2

0xd4c4,	// (0x0000d4c4) list_single_graphic_hl_pane_ParamLimits

0xd4c4,	// (0x0000d4c4) list_single_graphic_hl_pane

0x7336,	// (0x00007336) aid_size_min_hl_cp1

0x733f,	// (0x0000733f) list_highlight_pane_cp34_ParamLimits

0x733f,	// (0x0000733f) list_highlight_pane_cp34

0x7350,	// (0x00007350) list_single_graphic_hl_pane_g1_ParamLimits

0x7350,	// (0x00007350) list_single_graphic_hl_pane_g1

0xda08,	// (0x0000da08) list_single_graphic_hl_pane_g2_ParamLimits

0xda08,	// (0x0000da08) list_single_graphic_hl_pane_g2

0xda08,	// (0x0000da08) list_single_graphic_hl_pane_g3_ParamLimits

0xda08,	// (0x0000da08) list_single_graphic_hl_pane_g3

0x258a,	// (0x0000258a) list_single_graphic_hl_pane_g4_ParamLimits

0x258a,	// (0x0000258a) list_single_graphic_hl_pane_g4

0xda14,	// (0x0000da14) list_single_graphic_hl_pane_g5_ParamLimits

0xda14,	// (0x0000da14) list_single_graphic_hl_pane_g5

0x0004,

0xf62c,	// (0x0000f62c) list_single_graphic_hl_pane_g_ParamLimits

0xf62c,	// (0x0000f62c) list_single_graphic_hl_pane_g

0xda28,	// (0x0000da28) list_single_graphic_hl_pane_t1_ParamLimits

0xda28,	// (0x0000da28) list_single_graphic_hl_pane_t1

0x7393,	// (0x00007393) aid_size_min_hl_cp2

0x739c,	// (0x0000739c) list_highlight_pane_cp34_cp2_ParamLimits

0x739c,	// (0x0000739c) list_highlight_pane_cp34_cp2

0x7350,	// (0x00007350) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7350,	// (0x00007350) list_single_graphic_hl_pane_g1_cp2

0x73a9,	// (0x000073a9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x73a9,	// (0x000073a9) list_single_graphic_hl_pane_g2_cp2

0x73b5,	// (0x000073b5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x73b5,	// (0x000073b5) list_single_graphic_hl_pane_g3_cp2

0x57d4,	// (0x000057d4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x57d4,	// (0x000057d4) list_single_graphic_hl_pane_g4_cp2

0x7369,	// (0x00007369) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7369,	// (0x00007369) list_single_graphic_hl_pane_g5_cp2

0xc425,	// (0x0000c425) control_pane_g4_ParamLimits

0xc425,	// (0x0000c425) control_pane_g4

0x2b90,	// (0x00002b90) bg_popup_sub_pane_cp10_ParamLimits

0x66a6,	// (0x000066a6) list_choice_list_pane_ParamLimits

0x66b5,	// (0x000066b5) scroll_pane_cp23

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02_ParamLimits

0x6f65,	// (0x00006f65) list_preview_fixed_pane_ParamLimits

0x6f7b,	// (0x00006f7b) list_preview_fixed_pane_cp_ParamLimits

0x6f7b,	// (0x00006f7b) list_preview_fixed_pane_cp

0x6f87,	// (0x00006f87) popup_preview_fixed_window_g1_ParamLimits

0x6f87,	// (0x00006f87) popup_preview_fixed_window_g1

0x6f93,	// (0x00006f93) popup_preview_fixed_window_g2_ParamLimits

0x6f93,	// (0x00006f93) popup_preview_fixed_window_g2

0x0002,

0xb1a3,	// (0x0000b1a3) popup_preview_fixed_window_g_ParamLimits

0xb1a3,	// (0x0000b1a3) popup_preview_fixed_window_g

0x19b4,	// (0x000019b4) aid_navi_side_left_pane_ParamLimits

0x19c9,	// (0x000019c9) aid_navi_side_right_pane_ParamLimits

0x19e1,	// (0x000019e1) navi_icon_pane_stacon_ParamLimits

0x19f5,	// (0x000019f5) navi_navi_pane_stacon_ParamLimits

0x19e1,	// (0x000019e1) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x73d9,	// (0x000073d9) listscroll_text_info_pane

0x73e1,	// (0x000073e1) list_text_info_pane_ParamLimits

0x73e1,	// (0x000073e1) list_text_info_pane

0x73f0,	// (0x000073f0) scroll_pane_cp24_ParamLimits

0x73f0,	// (0x000073f0) scroll_pane_cp24

0xda3e,	// (0x0000da3e) list_text_info_pane_t1_ParamLimits

0xda3e,	// (0x0000da3e) list_text_info_pane_t1

0xc5af,	// (0x0000c5af) popup_fast_swap2_window_ParamLimits

0xc5af,	// (0x0000c5af) popup_fast_swap2_window

0x743f,	// (0x0000743f) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3d4f,	// (0x00003d4f) heading_pane_cp2

0x0a8a,	// (0x00000a8a) listscroll_fast2_pane

0x7449,	// (0x00007449) grid_fast2_pane

0x7453,	// (0x00007453) listscroll_fast2_pane_g1

0x745b,	// (0x0000745b) listscroll_fast2_pane_g2

0x0001,

0xb21f,	// (0x0000b21f) listscroll_fast2_pane_g

0x1686,	// (0x00001686) scroll_pane_cp26

0x7465,	// (0x00007465) cell_fast2_pane_ParamLimits

0x7465,	// (0x00007465) cell_fast2_pane

0x747a,	// (0x0000747a) cell_fast2_pane_g1

0x7483,	// (0x00007483) cell_fast2_pane_g2

0x748c,	// (0x0000748c) cell_fast2_pane_g3

0x0002,

0xb224,	// (0x0000b224) cell_fast2_pane_g

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp9

0x0b92,	// (0x00000b92) main_eswt_pane_ParamLimits

0x0b92,	// (0x00000b92) main_eswt_pane

0x7405,	// (0x00007405) list_single_text_info_pane

0x7494,	// (0x00007494) eswt_ctrl_button_pane

0x7494,	// (0x00007494) eswt_ctrl_canvas_pane

0x749c,	// (0x0000749c) eswt_ctrl_combo_pane

0x7494,	// (0x00007494) eswt_ctrl_default_pane

0x7494,	// (0x00007494) eswt_ctrl_label_pane

0x74a4,	// (0x000074a4) eswt_ctrl_wait_pane

0x74ac,	// (0x000074ac) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x74cc,	// (0x000074cc) popup_eswt_tasktip_window_ParamLimits

0x74cc,	// (0x000074cc) popup_eswt_tasktip_window

0x389f,	// (0x0000389f) bg_popup_window_pane_cp18

0x74dd,	// (0x000074dd) eswt_control_pane_g1_ParamLimits

0x74dd,	// (0x000074dd) eswt_control_pane_g1

0x74ea,	// (0x000074ea) eswt_control_pane_g2_ParamLimits

0x74ea,	// (0x000074ea) eswt_control_pane_g2

0x74f7,	// (0x000074f7) eswt_control_pane_g3_ParamLimits

0x74f7,	// (0x000074f7) eswt_control_pane_g3

0x7504,	// (0x00007504) eswt_control_pane_g4_ParamLimits

0x7504,	// (0x00007504) eswt_control_pane_g4

0x0003,

0xb22b,	// (0x0000b22b) eswt_control_pane_g_ParamLimits

0xb22b,	// (0x0000b22b) eswt_control_pane_g

0x139c,	// (0x0000139c) bg_button_pane_ParamLimits

0x139c,	// (0x0000139c) bg_button_pane

0x0b92,	// (0x00000b92) common_borders_pane_copy2_ParamLimits

0x0b92,	// (0x00000b92) common_borders_pane_copy2

0x7511,	// (0x00007511) control_button_pane_g1_ParamLimits

0x7511,	// (0x00007511) control_button_pane_g1

0x751d,	// (0x0000751d) control_button_pane_g2_ParamLimits

0x751d,	// (0x0000751d) control_button_pane_g2

0x7529,	// (0x00007529) control_button_pane_g3_ParamLimits

0x7529,	// (0x00007529) control_button_pane_g3

0x0002,

0xb234,	// (0x0000b234) control_button_pane_g_ParamLimits

0xb234,	// (0x0000b234) control_button_pane_g

0x753d,	// (0x0000753d) control_button_pane_t1

0x754b,	// (0x0000754b) control_button_pane_t2

0x0001,

0xb23b,	// (0x0000b23b) control_button_pane_t

0x36e5,	// (0x000036e5) bg_button_pane_g1

0x36ed,	// (0x000036ed) bg_button_pane_g2

0x36f5,	// (0x000036f5) bg_button_pane_g3

0x36fd,	// (0x000036fd) bg_button_pane_g4

0x3705,	// (0x00003705) bg_button_pane_g5

0x370d,	// (0x0000370d) bg_button_pane_g6

0x3715,	// (0x00003715) bg_button_pane_g7

0x371d,	// (0x0000371d) bg_button_pane_g8

0x3725,	// (0x00003725) bg_button_pane_g9

0x0008,

0xae98,	// (0x0000ae98) bg_button_pane_g

0x6661,	// (0x00006661) common_borders_pane_ParamLimits

0x6661,	// (0x00006661) common_borders_pane

0x74dd,	// (0x000074dd) eswt_control_pane_g1_copy1_ParamLimits

0x74dd,	// (0x000074dd) eswt_control_pane_g1_copy1

0x74ea,	// (0x000074ea) eswt_control_pane_g2_copy1_ParamLimits

0x74ea,	// (0x000074ea) eswt_control_pane_g2_copy1

0x74f7,	// (0x000074f7) eswt_control_pane_g3_copy1_ParamLimits

0x74f7,	// (0x000074f7) eswt_control_pane_g3_copy1

0x7504,	// (0x00007504) eswt_control_pane_g4_copy1_ParamLimits

0x7504,	// (0x00007504) eswt_control_pane_g4_copy1

0x669c,	// (0x0000669c) bg_eswt_ctrl_canvas_pane_g1

0x6661,	// (0x00006661) common_borders_pane_cp2_ParamLimits

0x6661,	// (0x00006661) common_borders_pane_cp2

0x6661,	// (0x00006661) common_borders_pane_cp3_ParamLimits

0x6661,	// (0x00006661) common_borders_pane_cp3

0x7559,	// (0x00007559) separator_horizontal_pane

0x7561,	// (0x00007561) separator_vertical_pane

0x74dd,	// (0x000074dd) eswt_control_pane_g1_copy2_ParamLimits

0x74dd,	// (0x000074dd) eswt_control_pane_g1_copy2

0x74ea,	// (0x000074ea) eswt_control_pane_g2_copy2_ParamLimits

0x74ea,	// (0x000074ea) eswt_control_pane_g2_copy2

0x74f7,	// (0x000074f7) eswt_control_pane_g3_copy2_ParamLimits

0x74f7,	// (0x000074f7) eswt_control_pane_g3_copy2

0x7504,	// (0x00007504) eswt_control_pane_g4_copy2_ParamLimits

0x7504,	// (0x00007504) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x756a,	// (0x0000756a) separator_horizontal_pane_g1

0x7573,	// (0x00007573) separator_horizontal_pane_g2

0x757c,	// (0x0000757c) separator_horizontal_pane_g3

0x0002,

0xb240,	// (0x0000b240) separator_horizontal_pane_g

0x74dd,	// (0x000074dd) eswt_control_pane_g1_copy3_ParamLimits

0x74dd,	// (0x000074dd) eswt_control_pane_g1_copy3

0x74ea,	// (0x000074ea) eswt_control_pane_g2_copy3_ParamLimits

0x74ea,	// (0x000074ea) eswt_control_pane_g2_copy3

0x74f7,	// (0x000074f7) eswt_control_pane_g3_copy3_ParamLimits

0x74f7,	// (0x000074f7) eswt_control_pane_g3_copy3

0x7504,	// (0x00007504) eswt_control_pane_g4_copy3_ParamLimits

0x7504,	// (0x00007504) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x7585,	// (0x00007585) separator_vertical_pane_g1

0x758e,	// (0x0000758e) separator_vertical_pane_g2

0x7597,	// (0x00007597) separator_vertical_pane_g3

0x0002,

0xb247,	// (0x0000b247) separator_vertical_pane_g

0x74dd,	// (0x000074dd) eswt_control_pane_g1_copy4_ParamLimits

0x74dd,	// (0x000074dd) eswt_control_pane_g1_copy4

0x74ea,	// (0x000074ea) eswt_control_pane_g2_copy4_ParamLimits

0x74ea,	// (0x000074ea) eswt_control_pane_g2_copy4

0x74f7,	// (0x000074f7) eswt_control_pane_g3_copy4_ParamLimits

0x74f7,	// (0x000074f7) eswt_control_pane_g3_copy4

0x7504,	// (0x00007504) eswt_control_pane_g4_copy4_ParamLimits

0x7504,	// (0x00007504) eswt_control_pane_g4_copy4

0xda59,	// (0x0000da59) eswt_ctrl_combo_button_pane

0xda61,	// (0x0000da61) eswt_ctrl_input_pane

0xda69,	// (0x0000da69) popup_choice_list_window_cp70

0xda71,	// (0x0000da71) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x6661,	// (0x00006661) bg_button_pane_cp70_ParamLimits

0x6661,	// (0x00006661) bg_button_pane_cp70

0xda7f,	// (0x0000da7f) eswt_ctrl_combo_button_pane_g1

0x75ce,	// (0x000075ce) wait_bar_pane_cp70

0x389f,	// (0x0000389f) bg_popup_window_pane_cp70_ParamLimits

0x389f,	// (0x0000389f) bg_popup_window_pane_cp70

0x75d6,	// (0x000075d6) popup_eswt_tasktip_window_t1

0x75ec,	// (0x000075ec) wait_bar_pane_cp71_ParamLimits

0x75ec,	// (0x000075ec) wait_bar_pane_cp71

0x75f8,	// (0x000075f8) grid_eswt_app_pane

0x1b71,	// (0x00001b71) scroll_pane_cp70

0xda87,	// (0x0000da87) cell_eswt_app_pane_ParamLimits

0xda87,	// (0x0000da87) cell_eswt_app_pane

0xdab1,	// (0x0000dab1) cell_eswt_app_pane_g1_ParamLimits

0xdab1,	// (0x0000dab1) cell_eswt_app_pane_g1

0xdae0,	// (0x0000dae0) cell_eswt_app_pane_g2_ParamLimits

0xdae0,	// (0x0000dae0) cell_eswt_app_pane_g2

0x0001,

0xf637,	// (0x0000f637) cell_eswt_app_pane_g_ParamLimits

0xf637,	// (0x0000f637) cell_eswt_app_pane_g

0xdb09,	// (0x0000db09) cell_eswt_app_pane_t1_ParamLimits

0xdb09,	// (0x0000db09) cell_eswt_app_pane_t1

0x76bb,	// (0x000076bb) grid_highlight_pane_cp70_ParamLimits

0x76bb,	// (0x000076bb) grid_highlight_pane_cp70

0x24ee,	// (0x000024ee) set_content_pane_g1

0xc3b7,	// (0x0000c3b7) status_small_volume_pane

0x76c7,	// (0x000076c7) status_small_volume_pane_g1

0x76cf,	// (0x000076cf) volume_small2_pane

0x76d8,	// (0x000076d8) volume_small2_pane_g1

0x76e1,	// (0x000076e1) volume_small2_pane_g2

0x76ea,	// (0x000076ea) volume_small2_pane_g3

0x76f3,	// (0x000076f3) volume_small2_pane_g4

0x76fc,	// (0x000076fc) volume_small2_pane_g5

0x7705,	// (0x00007705) volume_small2_pane_g6

0x770e,	// (0x0000770e) volume_small2_pane_g7

0x7717,	// (0x00007717) volume_small2_pane_g8

0x7720,	// (0x00007720) volume_small2_pane_g9

0x7729,	// (0x00007729) volume_small2_pane_g10

0x0009,

0xb253,	// (0x0000b253) volume_small2_pane_g

0x6c76,	// (0x00006c76) fep_vkb_top_text_pane_g1_ParamLimits

0xd9b0,	// (0x0000d9b0) fep_vkb_top_text_pane_t1_ParamLimits

0x6f9f,	// (0x00006f9f) popup_preview_fixed_window_g3_ParamLimits

0x6f9f,	// (0x00006f9f) popup_preview_fixed_window_g3

0xcbd2,	// (0x0000cbd2) popup_toolbar_trans_pane

0xd31c,	// (0x0000d31c) aid_height_set_list_ParamLimits

0x4f19,	// (0x00004f19) aid_size_parent_ParamLimits

0x2b90,	// (0x00002b90) list_highlight_pane_cp2_ParamLimits

0x24ee,	// (0x000024ee) set_content_pane_g1_ParamLimits

0xd4d5,	// (0x0000d4d5) list_single_image_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_single_image_pane

0xdb3b,	// (0x0000db3b) aid_size_cell_image_ParamLimits

0xdb3b,	// (0x0000db3b) aid_size_cell_image

0xdb48,	// (0x0000db48) grid_single_image_pane_ParamLimits

0xdb48,	// (0x0000db48) grid_single_image_pane

0x37b6,	// (0x000037b6) list_single_image_pane_g1_ParamLimits

0x37b6,	// (0x000037b6) list_single_image_pane_g1

0x774b,	// (0x0000774b) list_single_image_pane_g2_ParamLimits

0x774b,	// (0x0000774b) list_single_image_pane_g2

0x0001,

0xb268,	// (0x0000b268) list_single_image_pane_g_ParamLimits

0xb268,	// (0x0000b268) list_single_image_pane_g

0x775f,	// (0x0000775f) list_single_image_pane_t1_ParamLimits

0x775f,	// (0x0000775f) list_single_image_pane_t1

0xdb56,	// (0x0000db56) cell_image_list_pane_ParamLimits

0xdb56,	// (0x0000db56) cell_image_list_pane

0xdb6c,	// (0x0000db6c) cell_image_list_pane_g1

0xdb75,	// (0x0000db75) cell_image_list_pane_g2

0x0001,

0xf63c,	// (0x0000f63c) cell_image_list_pane_g

0x779b,	// (0x0000779b) aid_size_cell_tb_trans_pane

0x139c,	// (0x0000139c) bg_tb_trans_pane

0x77ad,	// (0x000077ad) grid_tb_trans_pane

0x36e5,	// (0x000036e5) bg_tb_trans_pane_g1

0x36ed,	// (0x000036ed) bg_tb_trans_pane_g2

0x36f5,	// (0x000036f5) bg_tb_trans_pane_g3

0x36fd,	// (0x000036fd) bg_tb_trans_pane_g4

0x3705,	// (0x00003705) bg_tb_trans_pane_g5

0x371d,	// (0x0000371d) bg_tb_trans_pane_g6

0x3725,	// (0x00003725) bg_tb_trans_pane_g7

0x370d,	// (0x0000370d) bg_tb_trans_pane_g8

0x3715,	// (0x00003715) bg_tb_trans_pane_g9

0x0008,

0xb272,	// (0x0000b272) bg_tb_trans_pane_g

0x77c1,	// (0x000077c1) cell_toolbar_trans_pane_ParamLimits

0x77c1,	// (0x000077c1) cell_toolbar_trans_pane

0x669c,	// (0x0000669c) cell_toolbar_trans_pane_g1

0xd718,	// (0x0000d718) list_form2_midp_pane_t1

0xd726,	// (0x0000d726) list_form2_midp_pane_t2

0x0001,

0xf607,	// (0x0000f607) list_form2_midp_pane_t

0x6233,	// (0x00006233) scroll_pane_cp51_ParamLimits

0x643e,	// (0x0000643e) form2_midp_wait_pane_g1

0x6447,	// (0x00006447) form2_midp_wait_pane_g2

0x6450,	// (0x00006450) form2_midp_wait_pane_g3

0x0002,

0xb130,	// (0x0000b130) form2_midp_wait_pane_g

0x0507,	// (0x00000507) list_highlight_pane_cp21_ParamLimits

0x64a7,	// (0x000064a7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x64b6,	// (0x000064b6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x511f,	// (0x0000511f) list_single_2graphic_im_pane_ParamLimits

0x511f,	// (0x0000511f) list_single_2graphic_im_pane

0xdb7e,	// (0x0000db7e) list_single_2graphic_im_pane_g1_ParamLimits

0xdb7e,	// (0x0000db7e) list_single_2graphic_im_pane_g1

0xdb8f,	// (0x0000db8f) list_single_2graphic_im_pane_g2_ParamLimits

0xdb8f,	// (0x0000db8f) list_single_2graphic_im_pane_g2

0xdb9b,	// (0x0000db9b) list_single_2graphic_im_pane_g3_ParamLimits

0xdb9b,	// (0x0000db9b) list_single_2graphic_im_pane_g3

0x0003,

0xf641,	// (0x0000f641) list_single_2graphic_im_pane_g_ParamLimits

0xf641,	// (0x0000f641) list_single_2graphic_im_pane_g

0xdbaf,	// (0x0000dbaf) list_single_2graphic_im_pane_t1_ParamLimits

0xdbaf,	// (0x0000dbaf) list_single_2graphic_im_pane_t1

0x6fab,	// (0x00006fab) list_single_graphic_2heading_pane_fp_ParamLimits

0x6fab,	// (0x00006fab) list_single_graphic_2heading_pane_fp

0x6fef,	// (0x00006fef) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6fef,	// (0x00006fef) list_single_graphic_2heading_pane_fp_g1

0x6fc0,	// (0x00006fc0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6fc0,	// (0x00006fc0) list_single_graphic_2heading_pane_fp_g2

0x0fe5,	// (0x00000fe5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_graphic_2heading_pane_fp_g3

0x13c2,	// (0x000013c2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x13c2,	// (0x000013c2) list_single_graphic_2heading_pane_fp_g4

0x6fcc,	// (0x00006fcc) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6fcc,	// (0x00006fcc) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb1b3,	// (0x0000b1b3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb1b3,	// (0x0000b1b3) list_single_graphic_2heading_pane_fp_g

0x7855,	// (0x00007855) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7855,	// (0x00007855) list_single_graphic_2heading_pane_fp_t1

0x7027,	// (0x00007027) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7027,	// (0x00007027) list_single_graphic_2heading_pane_fp_t2

0x786b,	// (0x0000786b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x786b,	// (0x0000786b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb28e,	// (0x0000b28e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb28e,	// (0x0000b28e) list_single_graphic_2heading_pane_fp_t

0x68c6,	// (0x000068c6) fep_hwr_write_pane_g5_ParamLimits

0x68c6,	// (0x000068c6) fep_hwr_write_pane_g5

0x68d2,	// (0x000068d2) fep_hwr_write_pane_g6_ParamLimits

0x68d2,	// (0x000068d2) fep_hwr_write_pane_g6

0x74ac,	// (0x000074ac) eswt_shell_pane_ParamLimits

0x389f,	// (0x0000389f) bg_popup_window_pane_cp18_ParamLimits

0x4dc1,	// (0x00004dc1) heading_pane_cp70

0x75d6,	// (0x000075d6) popup_eswt_tasktip_window_t1_ParamLimits

0xcc9a,	// (0x0000cc9a) aid_touch_tab_arrow_left

0xccb0,	// (0x0000ccb0) aid_touch_tab_arrow_right

0xb78d,	// (0x0000b78d) title_pane_g3_ParamLimits

0xb78d,	// (0x0000b78d) title_pane_g3

0x127b,	// (0x0000127b) set_value_pane_g1

0xcbd2,	// (0x0000cbd2) popup_toolbar_trans_pane_ParamLimits

0x779b,	// (0x0000779b) aid_size_cell_tb_trans_pane_ParamLimits

0x139c,	// (0x0000139c) bg_tb_trans_pane_ParamLimits

0x77ad,	// (0x000077ad) grid_tb_trans_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane

0x0b92,	// (0x00000b92) cont_snote2_single_text_pane_ParamLimits

0x0b92,	// (0x00000b92) cont_snote2_single_text_pane

0x0b92,	// (0x00000b92) cont_snote2_single_graphic_pane_ParamLimits

0x0b92,	// (0x00000b92) cont_snote2_single_graphic_pane

0x3f6a,	// (0x00003f6a) cont_note_wait_pane_ParamLimits

0x3f6a,	// (0x00003f6a) cont_note_wait_pane

0x3f6a,	// (0x00003f6a) cont_note_image_pane_ParamLimits

0x3f6a,	// (0x00003f6a) cont_note_image_pane

0x7881,	// (0x00007881) popup_note2_window_g1_ParamLimits

0x7881,	// (0x00007881) popup_note2_window_g1

0x78b2,	// (0x000078b2) popup_note2_window_t1_ParamLimits

0x78b2,	// (0x000078b2) popup_note2_window_t1

0x78f7,	// (0x000078f7) popup_note2_window_t2_ParamLimits

0x78f7,	// (0x000078f7) popup_note2_window_t2

0x793c,	// (0x0000793c) popup_note2_window_t3_ParamLimits

0x793c,	// (0x0000793c) popup_note2_window_t3

0x7981,	// (0x00007981) popup_note2_window_t4_ParamLimits

0x7981,	// (0x00007981) popup_note2_window_t4

0x08bf,	// (0x000008bf) popup_note2_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note2_window_t5

0x0004,

0xb29a,	// (0x0000b29a) popup_note2_window_t_ParamLimits

0xb29a,	// (0x0000b29a) popup_note2_window_t

0x79b0,	// (0x000079b0) popup_note2_image_window_g1_ParamLimits

0x79b0,	// (0x000079b0) popup_note2_image_window_g1

0x79bc,	// (0x000079bc) popup_note2_image_window_g2_ParamLimits

0x79bc,	// (0x000079bc) popup_note2_image_window_g2

0x0001,

0xb2a5,	// (0x0000b2a5) popup_note2_image_window_g_ParamLimits

0xb2a5,	// (0x0000b2a5) popup_note2_image_window_g

0x79ce,	// (0x000079ce) popup_note2_image_window_t1_ParamLimits

0x79ce,	// (0x000079ce) popup_note2_image_window_t1

0x79e6,	// (0x000079e6) popup_note2_image_window_t2_ParamLimits

0x79e6,	// (0x000079e6) popup_note2_image_window_t2

0x79fe,	// (0x000079fe) popup_note2_image_window_t3_ParamLimits

0x79fe,	// (0x000079fe) popup_note2_image_window_t3

0x0002,

0xb2aa,	// (0x0000b2aa) popup_note2_image_window_t_ParamLimits

0xb2aa,	// (0x0000b2aa) popup_note2_image_window_t

0x3f78,	// (0x00003f78) popup_note2_wait_window_g1_ParamLimits

0x3f78,	// (0x00003f78) popup_note2_wait_window_g1

0x7a1a,	// (0x00007a1a) popup_note2_wait_window_g2_ParamLimits

0x7a1a,	// (0x00007a1a) popup_note2_wait_window_g2

0x3f90,	// (0x00003f90) popup_note2_wait_window_g3_ParamLimits

0x3f90,	// (0x00003f90) popup_note2_wait_window_g3

0x0002,

0xb2b1,	// (0x0000b2b1) popup_note2_wait_window_g_ParamLimits

0xb2b1,	// (0x0000b2b1) popup_note2_wait_window_g

0x7a26,	// (0x00007a26) popup_note2_wait_window_t1_ParamLimits

0x7a26,	// (0x00007a26) popup_note2_wait_window_t1

0x7a44,	// (0x00007a44) popup_note2_wait_window_t2_ParamLimits

0x7a44,	// (0x00007a44) popup_note2_wait_window_t2

0x7a62,	// (0x00007a62) popup_note2_wait_window_t3_ParamLimits

0x7a62,	// (0x00007a62) popup_note2_wait_window_t3

0x7a74,	// (0x00007a74) popup_note2_wait_window_t4_ParamLimits

0x7a74,	// (0x00007a74) popup_note2_wait_window_t4

0x0003,

0xb2b8,	// (0x0000b2b8) popup_note2_wait_window_t_ParamLimits

0xb2b8,	// (0x0000b2b8) popup_note2_wait_window_t

0x7a86,	// (0x00007a86) wait_bar2_pane_ParamLimits

0x7a86,	// (0x00007a86) wait_bar2_pane

0x7a9e,	// (0x00007a9e) popup_snote2_single_text_window_g1_ParamLimits

0x7a9e,	// (0x00007a9e) popup_snote2_single_text_window_g1

0x7ac6,	// (0x00007ac6) popup_snote2_single_text_window_t1_ParamLimits

0x7ac6,	// (0x00007ac6) popup_snote2_single_text_window_t1

0x7b12,	// (0x00007b12) popup_snote2_single_text_window_t2_ParamLimits

0x7b12,	// (0x00007b12) popup_snote2_single_text_window_t2

0x7b5e,	// (0x00007b5e) popup_snote2_single_text_window_t3_ParamLimits

0x7b5e,	// (0x00007b5e) popup_snote2_single_text_window_t3

0x7b9f,	// (0x00007b9f) popup_snote2_single_text_window_t4_ParamLimits

0x7b9f,	// (0x00007b9f) popup_snote2_single_text_window_t4

0x7bd5,	// (0x00007bd5) popup_snote2_single_text_window_t5_ParamLimits

0x7bd5,	// (0x00007bd5) popup_snote2_single_text_window_t5

0x0004,

0xb2c1,	// (0x0000b2c1) popup_snote2_single_text_window_t_ParamLimits

0xb2c1,	// (0x0000b2c1) popup_snote2_single_text_window_t

0x7c00,	// (0x00007c00) popup_snote2_single_graphic_window_g1_ParamLimits

0x7c00,	// (0x00007c00) popup_snote2_single_graphic_window_g1

0x7c28,	// (0x00007c28) popup_snote2_single_graphic_window_g2_ParamLimits

0x7c28,	// (0x00007c28) popup_snote2_single_graphic_window_g2

0x0001,

0xb2cc,	// (0x0000b2cc) popup_snote2_single_graphic_window_g_ParamLimits

0xb2cc,	// (0x0000b2cc) popup_snote2_single_graphic_window_g

0x7c50,	// (0x00007c50) popup_snote2_single_graphic_window_t1_ParamLimits

0x7c50,	// (0x00007c50) popup_snote2_single_graphic_window_t1

0x7c9c,	// (0x00007c9c) popup_snote2_single_graphic_window_t2_ParamLimits

0x7c9c,	// (0x00007c9c) popup_snote2_single_graphic_window_t2

0x7b5e,	// (0x00007b5e) popup_snote2_single_graphic_window_t3_ParamLimits

0x7b5e,	// (0x00007b5e) popup_snote2_single_graphic_window_t3

0x7b9f,	// (0x00007b9f) popup_snote2_single_graphic_window_t4_ParamLimits

0x7b9f,	// (0x00007b9f) popup_snote2_single_graphic_window_t4

0x7bd5,	// (0x00007bd5) popup_snote2_single_graphic_window_t5_ParamLimits

0x7bd5,	// (0x00007bd5) popup_snote2_single_graphic_window_t5

0x0004,

0xb2d1,	// (0x0000b2d1) popup_snote2_single_graphic_window_t_ParamLimits

0xb2d1,	// (0x0000b2d1) popup_snote2_single_graphic_window_t

0x60a3,	// (0x000060a3) clock_nsta_pane_cp2_t1

0x60a3,	// (0x000060a3) clock_nsta_pane_cp2_t2

0x0001,

0xb0f1,	// (0x0000b0f1) clock_nsta_pane_cp2_t

0x13b6,	// (0x000013b6) form_field_data_wide_pane_g1_ParamLimits

0x0fe5,	// (0x00000fe5) form_field_data_wide_pane_g2_ParamLimits

0x0fe5,	// (0x00000fe5) form_field_data_wide_pane_g2

0x13c2,	// (0x000013c2) form_field_data_wide_pane_g3_ParamLimits

0x13c2,	// (0x000013c2) form_field_data_wide_pane_g3

0x0002,

0xacb4,	// (0x0000acb4) form_field_data_wide_pane_g_ParamLimits

0xacb4,	// (0x0000acb4) form_field_data_wide_pane_g

0xd65b,	// (0x0000d65b) grid_touch_3_pane_ParamLimits

0xd65b,	// (0x0000d65b) grid_touch_3_pane

0xdbe0,	// (0x0000dbe0) cell_touch_3_pane_ParamLimits

0xdbe0,	// (0x0000dbe0) cell_touch_3_pane

0x669c,	// (0x0000669c) cell_touch_3_pane_g1

0x669c,	// (0x0000669c) cell_touch_3_pane_g2

0x0001,

0xb176,	// (0x0000b176) cell_touch_3_pane_g

0x08f1,	// (0x000008f1) cont_query_data_pane

0x08f9,	// (0x000008f9) cont_query_data_pane_cp1

0x7d16,	// (0x00007d16) button_value_adjust_pane_cp7

0x7d1e,	// (0x00007d1e) query_popup_pane_cp3

0x1ec9,	// (0x00001ec9) bg_popup_sub_pane_cp22_ParamLimits

0x1edf,	// (0x00001edf) navi_navi_volume_pane_cp2

0x1efa,	// (0x00001efa) popup_side_volume_key_window_g2

0x1f09,	// (0x00001f09) popup_side_volume_key_window_g3

0x0002,

0xad4a,	// (0x0000ad4a) popup_side_volume_key_window_g

0x1f26,	// (0x00001f26) popup_side_volume_key_window_t2

0x0001,

0xad51,	// (0x0000ad51) popup_side_volume_key_window_t

0x23ad,	// (0x000023ad) popup_side_volume_key_window_ParamLimits

0xbbed,	// (0x0000bbed) list_double_graphic_pane_g4_ParamLimits

0xbbed,	// (0x0000bbed) list_double_graphic_pane_g4

0xd4b1,	// (0x0000d4b1) list_single_2heading_msg_pane_ParamLimits

0xd4b1,	// (0x0000d4b1) list_single_2heading_msg_pane

0xdc28,	// (0x0000dc28) list_single_2heading_msg_pane_g1_ParamLimits

0xdc28,	// (0x0000dc28) list_single_2heading_msg_pane_g1

0xdc34,	// (0x0000dc34) list_single_2heading_msg_pane_g2_ParamLimits

0xdc34,	// (0x0000dc34) list_single_2heading_msg_pane_g2

0xdc47,	// (0x0000dc47) list_single_2heading_msg_pane_g3_ParamLimits

0xdc47,	// (0x0000dc47) list_single_2heading_msg_pane_g3

0xdc53,	// (0x0000dc53) list_single_2heading_msg_pane_g4_ParamLimits

0xdc53,	// (0x0000dc53) list_single_2heading_msg_pane_g4

0x0003,

0xf64a,	// (0x0000f64a) list_single_2heading_msg_pane_g_ParamLimits

0xf64a,	// (0x0000f64a) list_single_2heading_msg_pane_g

0xdc6b,	// (0x0000dc6b) list_single_2heading_msg_pane_t1_ParamLimits

0xdc6b,	// (0x0000dc6b) list_single_2heading_msg_pane_t1

0xdc93,	// (0x0000dc93) list_single_2heading_msg_pane_t2_ParamLimits

0xdc93,	// (0x0000dc93) list_single_2heading_msg_pane_t2

0xdcfe,	// (0x0000dcfe) list_single_2heading_msg_pane_t3_ParamLimits

0xdcfe,	// (0x0000dcfe) list_single_2heading_msg_pane_t3

0x7e01,	// (0x00007e01) list_single_2heading_msg_pane_t4_ParamLimits

0x7e01,	// (0x00007e01) list_single_2heading_msg_pane_t4

0x0003,

0xf653,	// (0x0000f653) list_single_2heading_msg_pane_t_ParamLimits

0xf653,	// (0x0000f653) list_single_2heading_msg_pane_t

0x045b,	// (0x0000045b) title_pane_g4_ParamLimits

0x045b,	// (0x0000045b) title_pane_g4

0x18dd,	// (0x000018dd) title_pane_stacon_g3_ParamLimits

0x18dd,	// (0x000018dd) title_pane_stacon_g3

0x7818,	// (0x00007818) list_single_2graphic_im_pane_g4_ParamLimits

0x7818,	// (0x00007818) list_single_2graphic_im_pane_g4

0x4b2d,	// (0x00004b2d) popup_side_volume_key_window_cp

0x55ba,	// (0x000055ba) main_idle_act2_pane_t1

0x372d,	// (0x0000372d) toolbar_button_pane_g10

0xba98,	// (0x0000ba98) popup_toolbar_window_cp1

0x6094,	// (0x00006094) clock_nsta_pane_cp_t1

0x6094,	// (0x00006094) clock_nsta_pane_cp_t2

0x0001,

0xb0ec,	// (0x0000b0ec) clock_nsta_pane_cp_t

0x1edf,	// (0x00001edf) navi_navi_volume_pane_cp2_ParamLimits

0x1eee,	// (0x00001eee) popup_side_volume_key_window_g1_ParamLimits

0x1efa,	// (0x00001efa) popup_side_volume_key_window_g2_ParamLimits

0x1f09,	// (0x00001f09) popup_side_volume_key_window_g3_ParamLimits

0xad4a,	// (0x0000ad4a) popup_side_volume_key_window_g_ParamLimits

0x6706,	// (0x00006706) fep_hwr_aid_pane

0x67ad,	// (0x000067ad) bg_fep_hwr_top_pane_g4_ParamLimits

0x67cd,	// (0x000067cd) fep_hwr_top_pane_g1_ParamLimits

0x67df,	// (0x000067df) fep_hwr_top_pane_g2_ParamLimits

0x67f1,	// (0x000067f1) fep_hwr_top_pane_g3_ParamLimits

0xb141,	// (0x0000b141) fep_hwr_top_pane_g_ParamLimits

0x6806,	// (0x00006806) fep_hwr_top_text_pane_ParamLimits

0x48f0,	// (0x000048f0) aid_touch_tab_arrow_arrow_2

0x48f9,	// (0x000048f9) aid_touch_tab_arrow_left_2

0x671a,	// (0x0000671a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6751,	// (0x00006751) fep_hwr_prediction_pane

0x6a7e,	// (0x00006a7e) fep_vkb_prediction_pane

0xd990,	// (0x0000d990) fep_vkb_side_pane_g3_ParamLimits

0xd990,	// (0x0000d990) fep_vkb_side_pane_g3

0x6b2e,	// (0x00006b2e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x71e4,	// (0x000071e4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x71f1,	// (0x000071f1) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb1eb,	// (0x0000b1eb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7e26,	// (0x00007e26) fep_hwr_prediction_pane_g1

0x7e30,	// (0x00007e30) fep_hwr_prediction_pane_g2

0x7e38,	// (0x00007e38) fep_hwr_prediction_pane_g3

0x7e40,	// (0x00007e40) fep_hwr_prediction_pane_g4

0x0003,

0xb2ee,	// (0x0000b2ee) fep_hwr_prediction_pane_g

0x7e26,	// (0x00007e26) fep_vkb_prediction_pane_g1

0x7e48,	// (0x00007e48) fep_vkb_prediction_pane_g2

0x7e50,	// (0x00007e50) fep_vkb_prediction_pane_g3

0x7e58,	// (0x00007e58) fep_vkb_prediction_pane_g4

0x0003,

0xb2f7,	// (0x0000b2f7) fep_vkb_prediction_pane_g

0x4e82,	// (0x00004e82) slider_set_pane_g3

0x4e96,	// (0x00004e96) slider_set_pane_g4

0x4eae,	// (0x00004eae) slider_set_pane_g5

0x4e82,	// (0x00004e82) slider_set_pane_g6

0x4ec4,	// (0x00004ec4) slider_set_pane_g7

0x507e,	// (0x0000507e) slider_form_pane_g3

0x5087,	// (0x00005087) slider_form_pane_g4

0x508f,	// (0x0000508f) slider_form_pane_g5

0x507e,	// (0x0000507e) slider_form_pane_g6

0xd467,	// (0x0000d467) slider_form_pane_g7

0x58c8,	// (0x000058c8) slider_set_pane_vc_g3

0x58d1,	// (0x000058d1) slider_set_pane_vc_g4

0x58da,	// (0x000058da) slider_set_pane_vc_g5

0x58c8,	// (0x000058c8) slider_set_pane_vc_g6

0x58e3,	// (0x000058e3) slider_set_pane_vc_g7

0x5d68,	// (0x00005d68) slider_form_pane_vc_g1

0x5d71,	// (0x00005d71) slider_form_pane_vc_g2

0x5d7a,	// (0x00005d7a) slider_form_pane_vc_g3

0x5d68,	// (0x00005d68) slider_form_pane_vc_g4

0x5d83,	// (0x00005d83) slider_form_pane_vc_g5

0x0004,

0xb0be,	// (0x0000b0be) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7e60,	// (0x00007e60) ai3_links_pane

0xdd6c,	// (0x0000dd6c) popup_ai3_data_window_ParamLimits

0xdd6c,	// (0x0000dd6c) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdd86,	// (0x0000dd86) cell_ai3_links_pane_ParamLimits

0xdd86,	// (0x0000dd86) cell_ai3_links_pane

0x7e9b,	// (0x00007e9b) bg_popup_sub_pane_cp11

0x7ea8,	// (0x00007ea8) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7ecd,	// (0x00007ecd) heading_ai3_data_pane

0x7ed5,	// (0x00007ed5) list_ai3_gene_pane

0x7ee1,	// (0x00007ee1) popup_ai3_data_window_g1

0x7ee9,	// (0x00007ee9) heading_ai3_data_pane_g1

0x7ef1,	// (0x00007ef1) heading_ai3_data_pane_t1

0x7eff,	// (0x00007eff) list_double_ai3_gene_pane_ParamLimits

0x7eff,	// (0x00007eff) list_double_ai3_gene_pane

0x7f0c,	// (0x00007f0c) list_single_ai3_gene_pane_ParamLimits

0x7f0c,	// (0x00007f0c) list_single_ai3_gene_pane

0x6661,	// (0x00006661) list_highlight_pane_cp7_ParamLimits

0x6661,	// (0x00006661) list_highlight_pane_cp7

0x7f19,	// (0x00007f19) list_single_a13_gene_pane_t1_ParamLimits

0x7f19,	// (0x00007f19) list_single_a13_gene_pane_t1

0x7f30,	// (0x00007f30) list_single_ai3_gene_pane_g1

0x7f39,	// (0x00007f39) list_single_ai3_gene_pane_g2

0x0001,

0xb300,	// (0x0000b300) list_single_ai3_gene_pane_g

0x7f41,	// (0x00007f41) list_double_ai3_gene_pane_g1_ParamLimits

0x7f41,	// (0x00007f41) list_double_ai3_gene_pane_g1

0x7f4d,	// (0x00007f4d) list_double_ai3_gene_pane_t1_ParamLimits

0x7f4d,	// (0x00007f4d) list_double_ai3_gene_pane_t1

0x7f69,	// (0x00007f69) list_double_ai3_gene_pane_t2_ParamLimits

0x7f69,	// (0x00007f69) list_double_ai3_gene_pane_t2

0x7f7f,	// (0x00007f7f) list_double_ai3_gene_pane_t3_ParamLimits

0x7f7f,	// (0x00007f7f) list_double_ai3_gene_pane_t3

0x0002,

0xb305,	// (0x0000b305) list_double_ai3_gene_pane_t_ParamLimits

0xb305,	// (0x0000b305) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7d2f,	// (0x00007d2f) aid_size_min_col_2

0xdc12,	// (0x0000dc12) aid_size_min_msg_ParamLimits

0xdc12,	// (0x0000dc12) aid_size_min_msg

0xd9a4,	// (0x0000d9a4) fep_vkb_top_text_pane_g2_ParamLimits

0xd9a4,	// (0x0000d9a4) fep_vkb_top_text_pane_g2

0x0001,

0xf627,	// (0x0000f627) fep_vkb_top_text_pane_g_ParamLimits

0xf627,	// (0x0000f627) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7f9c,	// (0x00007f9c) grid_hc_apps_pane_ParamLimits

0x7f9c,	// (0x00007f9c) grid_hc_apps_pane

0x7fab,	// (0x00007fab) list_hc_apps_pane

0x7fb3,	// (0x00007fb3) scroll_pane_cp37_ParamLimits

0x7fb3,	// (0x00007fb3) scroll_pane_cp37

0xdda0,	// (0x0000dda0) cell_hc_apps_pane_ParamLimits

0xdda0,	// (0x0000dda0) cell_hc_apps_pane

0xde5e,	// (0x0000de5e) cell_hc_apps_pane_g1_ParamLimits

0xde5e,	// (0x0000de5e) cell_hc_apps_pane_g1

0x809e,	// (0x0000809e) cell_hc_apps_pane_g2_ParamLimits

0x809e,	// (0x0000809e) cell_hc_apps_pane_g2

0x80ba,	// (0x000080ba) cell_hc_apps_pane_g3_ParamLimits

0x80ba,	// (0x000080ba) cell_hc_apps_pane_g3

0x0002,

0xf65c,	// (0x0000f65c) cell_hc_apps_pane_g_ParamLimits

0xf65c,	// (0x0000f65c) cell_hc_apps_pane_g

0xde8b,	// (0x0000de8b) cell_hc_apps_pane_t1_ParamLimits

0xde8b,	// (0x0000de8b) cell_hc_apps_pane_t1

0x083b,	// (0x0000083b) grid_highlight_pane_cp10_ParamLimits

0x083b,	// (0x0000083b) grid_highlight_pane_cp10

0xdec9,	// (0x0000dec9) list_single_hc_apps_pane_ParamLimits

0xdec9,	// (0x0000dec9) list_single_hc_apps_pane

0xdef6,	// (0x0000def6) list_single_hc_apps_pane_g1

0xdf0f,	// (0x0000df0f) list_single_hc_apps_pane_g2

0x0001,

0xf663,	// (0x0000f663) list_single_hc_apps_pane_g

0xdf28,	// (0x0000df28) list_single_hc_apps_pane_g2_copy1

0x81c6,	// (0x000081c6) list_single_hc_apps_pane_t1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_ParamLimits

0x0551,	// (0x00000551) setting_slider_pane_t1_ParamLimits

0x056a,	// (0x0000056a) setting_slider_pane_t2_ParamLimits

0x0584,	// (0x00000584) setting_slider_pane_t3_ParamLimits

0xab9c,	// (0x0000ab9c) setting_slider_pane_t_ParamLimits

0x059c,	// (0x0000059c) slider_set_pane_ParamLimits

0x29ed,	// (0x000029ed) control_pane_g5_ParamLimits

0x29ed,	// (0x000029ed) control_pane_g5

0x4e69,	// (0x00004e69) slider_set_pane_g1_ParamLimits

0x4e76,	// (0x00004e76) slider_set_pane_g2_ParamLimits

0x4e82,	// (0x00004e82) slider_set_pane_g3_ParamLimits

0x4e96,	// (0x00004e96) slider_set_pane_g4_ParamLimits

0x4eae,	// (0x00004eae) slider_set_pane_g5_ParamLimits

0x4e82,	// (0x00004e82) slider_set_pane_g6_ParamLimits

0x4ec4,	// (0x00004ec4) slider_set_pane_g7_ParamLimits

0xaf96,	// (0x0000af96) slider_set_pane_g_ParamLimits

0x2499,	// (0x00002499) navi_icon_text_pane_ParamLimits

0xcc63,	// (0x0000cc63) aid_fill_nsta_2_ParamLimits

0xcc9a,	// (0x0000cc9a) aid_touch_tab_arrow_left_ParamLimits

0xccb0,	// (0x0000ccb0) aid_touch_tab_arrow_right_ParamLimits

0xcd4b,	// (0x0000cd4b) clock_nsta_pane_ParamLimits

0x48d2,	// (0x000048d2) navi_icon_pane_g1_ParamLimits

0x48de,	// (0x000048de) navi_text_pane_t1_ParamLimits

0x61a0,	// (0x000061a0) navi_icon_text_pane_g1_ParamLimits

0x61ac,	// (0x000061ac) navi_icon_text_pane_t1_ParamLimits

0xdef6,	// (0x0000def6) list_single_hc_apps_pane_g1_ParamLimits

0xdf0f,	// (0x0000df0f) list_single_hc_apps_pane_g2_ParamLimits

0xf663,	// (0x0000f663) list_single_hc_apps_pane_g_ParamLimits

0xdf28,	// (0x0000df28) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x81c6,	// (0x000081c6) list_single_hc_apps_pane_t1_ParamLimits

0xb692,	// (0x0000b692) popup_toolbar2_fixed_window_ParamLimits

0xb692,	// (0x0000b692) popup_toolbar2_fixed_window

0xcbc8,	// (0x0000cbc8) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x81f4,	// (0x000081f4) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x81f4,	// (0x000081f4) grid_toolbar2_fixed_pane

0xdf44,	// (0x0000df44) cell_toolbar2_fixed_pane_ParamLimits

0xdf44,	// (0x0000df44) cell_toolbar2_fixed_pane

0xdf5e,	// (0x0000df5e) cell_toolbar2_fixed_pane_g1

0x8215,	// (0x00008215) toolbar2_fixed_button_pane

0x36e5,	// (0x000036e5) toolbar2_fixed_button_pane_g1

0x36ed,	// (0x000036ed) toolbar2_fixed_button_pane_g2

0x36f5,	// (0x000036f5) toolbar2_fixed_button_pane_g3

0x36fd,	// (0x000036fd) toolbar2_fixed_button_pane_g4

0x3705,	// (0x00003705) toolbar2_fixed_button_pane_g5

0x370d,	// (0x0000370d) toolbar2_fixed_button_pane_g6

0x3715,	// (0x00003715) toolbar2_fixed_button_pane_g7

0x371d,	// (0x0000371d) toolbar2_fixed_button_pane_g8

0x3725,	// (0x00003725) toolbar2_fixed_button_pane_g9

0x0008,

0xae98,	// (0x0000ae98) toolbar2_fixed_button_pane_g

0x821d,	// (0x0000821d) cell_toolbar2_float_pane_ParamLimits

0x821d,	// (0x0000821d) cell_toolbar2_float_pane

0x822e,	// (0x0000822e) cell_toolbar2_float_pane_g1

0x8215,	// (0x00008215) toolbar2_fixed_button_pane_cp

0xd87e,	// (0x0000d87e) fep_vkb_accented_list_pane_ParamLimits

0xd87e,	// (0x0000d87e) fep_vkb_accented_list_pane

0x6e75,	// (0x00006e75) bg_popup_fep_shadow_pane_g9

0x2619,	// (0x00002619) bg_popup_fep_shadow_pane_cp3

0x166d,	// (0x0000166d) list_accented_list_pane

0x8237,	// (0x00008237) list_single_accented_list_pane_ParamLimits

0x8237,	// (0x00008237) list_single_accented_list_pane

0x2619,	// (0x00002619) list_highlight_pane_cp10

0x8248,	// (0x00008248) list_single_accented_list_pane_t1

0xcaf2,	// (0x0000caf2) popup_slider_window_ParamLimits

0xcaf2,	// (0x0000caf2) popup_slider_window

0x7d26,	// (0x00007d26) aid_indentation_list_msg

0xe057,	// (0x0000e057) bg_popup_window_pane_cp19

0x836c,	// (0x0000836c) popup_slider_window_g1

0x8388,	// (0x00008388) popup_slider_window_g2

0x83a4,	// (0x000083a4) popup_slider_window_g3

0x0005,

0xf668,	// (0x0000f668) popup_slider_window_g

0x8400,	// (0x00008400) popup_slider_window_t1

0x8474,	// (0x00008474) small_volume_slider_vertical_pane

0x669c,	// (0x0000669c) small_volume_slider_vertical_pane_g1

0x669c,	// (0x0000669c) small_volume_slider_vertical_pane_g2

0x8490,	// (0x00008490) small_volume_slider_vertical_pane_g3

0x0002,

0xb32a,	// (0x0000b32a) small_volume_slider_vertical_pane_g

0xb600,	// (0x0000b600) area_side_right_pane_ParamLimits

0xb600,	// (0x0000b600) area_side_right_pane

0xe10f,	// (0x0000e10f) aid_size_side_button_ParamLimits

0xe10f,	// (0x0000e10f) aid_size_side_button

0xe128,	// (0x0000e128) grid_sctrl_middle_pane_ParamLimits

0xe128,	// (0x0000e128) grid_sctrl_middle_pane

0x84cc,	// (0x000084cc) sctrl_sk_bottom_pane

0x84dd,	// (0x000084dd) sctrl_sk_top_pane

0x84ef,	// (0x000084ef) aid_touch_sctrl_top

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane

0x84fc,	// (0x000084fc) sctrl_sk_top_pane_g1

0x8509,	// (0x00008509) sctrl_sk_top_pane_t1

0x84ef,	// (0x000084ef) aid_touch_sctrl_bottom

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp

0x8524,	// (0x00008524) sctrl_sk_bottom_pane_g1

0x8509,	// (0x00008509) sctrl_sk_bottom_pane_t1

0xe142,	// (0x0000e142) cell_sctrl_middle_pane_ParamLimits

0xe142,	// (0x0000e142) cell_sctrl_middle_pane

0xe153,	// (0x0000e153) aid_touch_sctrl_middle_ParamLimits

0xe153,	// (0x0000e153) aid_touch_sctrl_middle

0xe160,	// (0x0000e160) bg_sctrl_middle_pane_ParamLimits

0xe160,	// (0x0000e160) bg_sctrl_middle_pane

0x85e9,	// (0x000085e9) cell_sctrl_middle_pane_g1_ParamLimits

0x85e9,	// (0x000085e9) cell_sctrl_middle_pane_g1

0xe16e,	// (0x0000e16e) cell_sctrl_middle_pane_g2_ParamLimits

0xe16e,	// (0x0000e16e) cell_sctrl_middle_pane_g2

0x0001,

0xf675,	// (0x0000f675) cell_sctrl_middle_pane_g_ParamLimits

0xf675,	// (0x0000f675) cell_sctrl_middle_pane_g

0x36e5,	// (0x000036e5) bg_sctrl_middle_pane_g1

0x36ed,	// (0x000036ed) bg_sctrl_middle_pane_g2

0x36f5,	// (0x000036f5) bg_sctrl_middle_pane_g3

0x36fd,	// (0x000036fd) bg_sctrl_middle_pane_g4

0x3705,	// (0x00003705) bg_sctrl_middle_pane_g5

0x370d,	// (0x0000370d) bg_sctrl_middle_pane_g6

0x3715,	// (0x00003715) bg_sctrl_middle_pane_g7

0x371d,	// (0x0000371d) bg_sctrl_middle_pane_g8

0x0007,

0xb33b,	// (0x0000b33b) bg_sctrl_middle_pane_g

0x3725,	// (0x00003725) bg_sctrl_middle_pane_g8_copy1

0x36e5,	// (0x000036e5) bg_sctrl_sk_pane_g1

0x36ed,	// (0x000036ed) bg_sctrl_sk_pane_g2

0x36f5,	// (0x000036f5) bg_sctrl_sk_pane_g3

0x0008,

0xae98,	// (0x0000ae98) bg_sctrl_sk_pane_g

0x0d50,	// (0x00000d50) aid_size_touch_scroll_bar

0x36fd,	// (0x000036fd) bg_sctrl_sk_pane_g4

0x3705,	// (0x00003705) bg_sctrl_sk_pane_g5

0x370d,	// (0x0000370d) bg_sctrl_sk_pane_g6

0x3715,	// (0x00003715) bg_sctrl_sk_pane_g7

0x371d,	// (0x0000371d) bg_sctrl_sk_pane_g8

0x3725,	// (0x00003725) bg_sctrl_sk_pane_g9

0x2c3c,	// (0x00002c3c) popup_fep_china_hwr2_fs_candidate_window

0xc60c,	// (0x0000c60c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc60c,	// (0x0000c60c) popup_fep_china_hwr2_fs_control_window

0x6b2e,	// (0x00006b2e) sctrl_sk_top_pane_g2

0x0001,

0xb331,	// (0x0000b331) sctrl_sk_top_pane_g

0xe17a,	// (0x0000e17a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe17a,	// (0x0000e17a) aid_fep_china_hwr2_fs_cell

0xe18e,	// (0x0000e18e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe18e,	// (0x0000e18e) bg_popup_fep_shadow_pane_cp4

0xe1a5,	// (0x0000e1a5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe1a5,	// (0x0000e1a5) bg_popup_fep_shadow_pane_cp5

0xe1b7,	// (0x0000e1b7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe1b7,	// (0x0000e1b7) popup_fep_china_hwr2_fs_control_bar_grid

0xe1cb,	// (0x0000e1cb) popup_fep_china_hwr2_fs_control_funtion_grid

0x85bd,	// (0x000085bd) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x85c7,	// (0x000085c7) popup_fep_china_hwr2_fs_candidate_grid

0xe1d3,	// (0x0000e1d3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe1d3,	// (0x0000e1d3) cell_fep_china_hwr2_fs_funtion_grid

0x669c,	// (0x0000669c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x85e9,	// (0x000085e9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x85e9,	// (0x000085e9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x85f7,	// (0x000085f7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x85f7,	// (0x000085f7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb34c,	// (0x0000b34c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb34c,	// (0x0000b34c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe1eb,	// (0x0000e1eb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe1eb,	// (0x0000e1eb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe200,	// (0x0000e200) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe200,	// (0x0000e200) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf67a,	// (0x0000f67a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf67a,	// (0x0000f67a) cell_fep_china_hwr2_fs_funtion_grid_t

0x863e,	// (0x0000863e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8646,	// (0x00008646) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x864e,	// (0x0000864e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb356,	// (0x0000b356) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8656,	// (0x00008656) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8656,	// (0x00008656) cell_fep_china_hwr2_fs_candidate_grid

0x866f,	// (0x0000866f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8677,	// (0x00008677) popup_fep_china_hwr2_fs_candidate_grid_g21

0x669c,	// (0x0000669c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x669c,	// (0x0000669c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb176,	// (0x0000b176) cell_fep_china_hwr2_fs_candidate_grid_g

0x867f,	// (0x0000867f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3235,	// (0x00003235) clock_nsta_pane_cp_24_ParamLimits

0x3235,	// (0x00003235) clock_nsta_pane_cp_24

0x32b3,	// (0x000032b3) indicator_nsta_pane_cp_24_ParamLimits

0x32b3,	// (0x000032b3) indicator_nsta_pane_cp_24

0x473d,	// (0x0000473d) heading_pane_g1

0x0001,

0xaefd,	// (0x0000aefd) heading_pane_g

0x534b,	// (0x0000534b) grid_sct_catagory_button_pane

0x537b,	// (0x0000537b) scroll_pane_cp5_ParamLimits

0x623f,	// (0x0000623f) button_value_adjust_pane_cp5_ParamLimits

0x623f,	// (0x0000623f) button_value_adjust_pane_cp5

0x633b,	// (0x0000633b) form2_midp_time_pane_ParamLimits

0x868d,	// (0x0000868d) cell_sct_catagory_button_pane_ParamLimits

0x868d,	// (0x0000868d) cell_sct_catagory_button_pane

0x6661,	// (0x00006661) bg_button_pane_cp01_ParamLimits

0x6661,	// (0x00006661) bg_button_pane_cp01

0x669c,	// (0x0000669c) cell_sct_catagory_button_pane_g1

0xcb6b,	// (0x0000cb6b) popup_tb_extension_window

0xe21c,	// (0x0000e21c) aid_size_cell_ext_ParamLimits

0xe21c,	// (0x0000e21c) aid_size_cell_ext

0x0b92,	// (0x00000b92) bg_tb_trans_pane_cp1_ParamLimits

0x0b92,	// (0x00000b92) bg_tb_trans_pane_cp1

0xe242,	// (0x0000e242) grid_tb_ext_pane_ParamLimits

0xe242,	// (0x0000e242) grid_tb_ext_pane

0xe27d,	// (0x0000e27d) cell_tb_ext_pane_ParamLimits

0xe27d,	// (0x0000e27d) cell_tb_ext_pane

0xe2a5,	// (0x0000e2a5) cell_tb_ext_pane_g1_ParamLimits

0xe2a5,	// (0x0000e2a5) cell_tb_ext_pane_g1

0x8721,	// (0x00008721) cell_tb_ext_pane_t1

0x083b,	// (0x0000083b) list_highlight_pane_cp11_ParamLimits

0x083b,	// (0x0000083b) list_highlight_pane_cp11

0xb6a7,	// (0x0000b6a7) popup_uni_indicator_window_ParamLimits

0xb6a7,	// (0x0000b6a7) popup_uni_indicator_window

0x139c,	// (0x0000139c) bg_popup_sub_pane_cp14

0x873c,	// (0x0000873c) list_uniindi_pane

0x8748,	// (0x00008748) uniindi_top_pane

0x083b,	// (0x0000083b) bg_uniindi_top_pane

0x8767,	// (0x00008767) uniindi_top_pane_g1

0x877d,	// (0x0000877d) uniindi_top_pane_g2

0x0003,

0xb35d,	// (0x0000b35d) uniindi_top_pane_g

0x87a7,	// (0x000087a7) uniindi_top_pane_t1

0x87d1,	// (0x000087d1) list_single_uniindi_pane_ParamLimits

0x87d1,	// (0x000087d1) list_single_uniindi_pane

0x669c,	// (0x0000669c) bg_uniindi_top_pane_g1

0x87e4,	// (0x000087e4) list_single_uniindi_pane_g1

0x87f7,	// (0x000087f7) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x881c,	// (0x0000881c) bg_sctrl_sk_pane_cp1

0x8825,	// (0x00008825) bg_sctrl_sk_pane_cp2

0x882e,	// (0x0000882e) control_bg_pane_g1

0x8837,	// (0x00008837) control_bg_pane_g2

0x0001,

0xb366,	// (0x0000b366) control_bg_pane_g

0x6038,	// (0x00006038) cell_indicator_nsta_pane_g1_ParamLimits

0xd688,	// (0x0000d688) cell_indicator_nsta_pane_g2_ParamLimits

0xf5f2,	// (0x0000f5f2) cell_indicator_nsta_pane_g_ParamLimits

0x63c3,	// (0x000063c3) form2_midp_time_pane_t1_ParamLimits

0x66f8,	// (0x000066f8) main_idle_act4_pane_ParamLimits

0x66f8,	// (0x000066f8) main_idle_act4_pane

0xcb6b,	// (0x0000cb6b) popup_tb_extension_window_ParamLimits

0xe264,	// (0x0000e264) tb_ext_find_pane_ParamLimits

0xe264,	// (0x0000e264) tb_ext_find_pane

0x8840,	// (0x00008840) ai_gene_pane_1_cp1

0x2754,	// (0x00002754) ai_gene_pane_2_cp1

0x8848,	// (0x00008848) list_single_idle_plugin_calendar_pane

0x8851,	// (0x00008851) list_single_idle_plugin_notification_pane

0x885a,	// (0x0000885a) list_single_idle_plugin_player_pane

0xe2c2,	// (0x0000e2c2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe2c2,	// (0x0000e2c2) list_single_idle_plugin_shortcut_pane

0xe2ea,	// (0x0000e2ea) main_idle_act4_pane_t1

0xe300,	// (0x0000e300) main_idle_act4_pane_t2

0x0001,

0xf67f,	// (0x0000f67f) main_idle_act4_pane_t

0xe316,	// (0x0000e316) middle_sk_idle_act4_pane_ParamLimits

0xe316,	// (0x0000e316) middle_sk_idle_act4_pane

0xe332,	// (0x0000e332) popup_clock_digital_analogue_window_cp2

0xe35a,	// (0x0000e35a) shortcut_wheel_idle_act4_pane_ParamLimits

0xe35a,	// (0x0000e35a) shortcut_wheel_idle_act4_pane

0x669c,	// (0x0000669c) shortcut_wheel_idle_act4_pane_g1

0x669c,	// (0x0000669c) shortcut_wheel_idle_act4_pane_g2

0x669c,	// (0x0000669c) shortcut_wheel_idle_act4_pane_g3

0x669c,	// (0x0000669c) shortcut_wheel_idle_act4_pane_g4

0x669c,	// (0x0000669c) shortcut_wheel_idle_act4_pane_g5

0x88ed,	// (0x000088ed) shortcut_wheel_idle_act4_pane_g6

0x88f5,	// (0x000088f5) shortcut_wheel_idle_act4_pane_g7

0x88fd,	// (0x000088fd) shortcut_wheel_idle_act4_pane_g8

0x8905,	// (0x00008905) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb370,	// (0x0000b370) shortcut_wheel_idle_act4_pane_g

0x67ad,	// (0x000067ad) middle_sk_idle_act4_pane_g1_ParamLimits

0x67ad,	// (0x000067ad) middle_sk_idle_act4_pane_g1

0xe3d7,	// (0x0000e3d7) middle_sk_idle_act4_pane_g2_ParamLimits

0xe3d7,	// (0x0000e3d7) middle_sk_idle_act4_pane_g2

0x0001,

0xf694,	// (0x0000f694) middle_sk_idle_act4_pane_g_ParamLimits

0xf694,	// (0x0000f694) middle_sk_idle_act4_pane_g

0xe3ef,	// (0x0000e3ef) middle_sk_idle_act4_pane_t1_ParamLimits

0xe3ef,	// (0x0000e3ef) middle_sk_idle_act4_pane_t1

0xe41e,	// (0x0000e41e) grid_ai_shortcut_pane_ParamLimits

0xe41e,	// (0x0000e41e) grid_ai_shortcut_pane

0xe43b,	// (0x0000e43b) list_highlight_pane_cp16_ParamLimits

0xe43b,	// (0x0000e43b) list_highlight_pane_cp16

0xe448,	// (0x0000e448) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe448,	// (0x0000e448) list_single_idle_plugin_shortcut_pane_g1

0xe454,	// (0x0000e454) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe454,	// (0x0000e454) list_single_idle_plugin_shortcut_pane_g2

0xe470,	// (0x0000e470) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe470,	// (0x0000e470) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf699,	// (0x0000f699) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf699,	// (0x0000f699) list_single_idle_plugin_shortcut_pane_g

0xe485,	// (0x0000e485) cell_ai_shortcut_pane_ParamLimits

0xe485,	// (0x0000e485) cell_ai_shortcut_pane

0xe49b,	// (0x0000e49b) cell_ai_shortcut_pane_g1_ParamLimits

0xe49b,	// (0x0000e49b) cell_ai_shortcut_pane_g1

0x8840,	// (0x00008840) ai_gene_pane_1_cp2

0x8a35,	// (0x00008a35) ai_gene_pane_2_cp2

0x8a3d,	// (0x00008a3d) list_highlight_pane_cp15

0x8a46,	// (0x00008a46) list_single_idle_plugin_calendar_pane_g1

0x8a3d,	// (0x00008a3d) list_highlight_pane_cp17

0x8a4e,	// (0x00008a4e) list_single_idle_plugin_calendar_pane_g1_copy1

0x8a56,	// (0x00008a56) list_single_idle_plugin_player_pane_g1

0x565c,	// (0x0000565c) list_single_idle_plugin_player_pane_g2

0x0001,

0xb39f,	// (0x0000b39f) list_single_idle_plugin_player_pane_g

0x8a5e,	// (0x00008a5e) list_single_idle_plugin_player_pane_t1

0x8a6c,	// (0x00008a6c) list_single_idle_plugin_player_pane_t2

0x8a7a,	// (0x00008a7a) list_single_idle_plugin_player_pane_t3

0x8a88,	// (0x00008a88) list_single_idle_plugin_player_pane_t4

0x0003,

0xb3a4,	// (0x0000b3a4) list_single_idle_plugin_player_pane_t

0x8a96,	// (0x00008a96) wait_bar_pane_cp15

0x8a9e,	// (0x00008a9e) grid_ai_notification_pane

0x565c,	// (0x0000565c) list_single_idle_plugin_notification_pane_g1

0xe4bd,	// (0x0000e4bd) cell_ai_notification_pane_ParamLimits

0xe4bd,	// (0x0000e4bd) cell_ai_notification_pane

0x8ab4,	// (0x00008ab4) cell_ai_notification_pane_g1

0x8abc,	// (0x00008abc) cell_ai_notification_pane_t1

0xe4ca,	// (0x0000e4ca) tb_ext_find_button_pane

0xe4d2,	// (0x0000e4d2) tb_ext_find_pane_g1

0xe4da,	// (0x0000e4da) tb_ext_find_pane_t1

0x1d5f,	// (0x00001d5f) tb_ext_find_button_pane_g1

0x8ae8,	// (0x00008ae8) tb_ext_find_button_pane_g2

0x0001,

0xb3ad,	// (0x0000b3ad) tb_ext_find_button_pane_g

0xe2ea,	// (0x0000e2ea) main_idle_act4_pane_t1_ParamLimits

0xe300,	// (0x0000e300) main_idle_act4_pane_t2_ParamLimits

0xf67f,	// (0x0000f67f) main_idle_act4_pane_t_ParamLimits

0xe332,	// (0x0000e332) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe34a,	// (0x0000e34a) sat_plugin_idle_act4_pane_ParamLimits

0xe34a,	// (0x0000e34a) sat_plugin_idle_act4_pane

0xe4e8,	// (0x0000e4e8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe4e8,	// (0x0000e4e8) sat_plugin_idle_act4_pane_t1

0xe500,	// (0x0000e500) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe500,	// (0x0000e500) sat_plugin_idle_act4_pane_t2

0xe518,	// (0x0000e518) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe518,	// (0x0000e518) sat_plugin_idle_act4_pane_t3

0xe530,	// (0x0000e530) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe530,	// (0x0000e530) sat_plugin_idle_act4_pane_t4

0x0003,

0xf6a0,	// (0x0000f6a0) sat_plugin_idle_act4_pane_t_ParamLimits

0xf6a0,	// (0x0000f6a0) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25_ParamLimits

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25

0x8b3d,	// (0x00008b3d) popup_battery_window_g1_ParamLimits

0x8b3d,	// (0x00008b3d) popup_battery_window_g1

0x8b49,	// (0x00008b49) popup_battery_window_t1_ParamLimits

0x8b49,	// (0x00008b49) popup_battery_window_t1

0x8b5b,	// (0x00008b5b) popup_battery_window_t2_ParamLimits

0x8b5b,	// (0x00008b5b) popup_battery_window_t2

0x0001,

0xb3bb,	// (0x0000b3bb) popup_battery_window_t_ParamLimits

0xb3bb,	// (0x0000b3bb) popup_battery_window_t

0xc289,	// (0x0000c289) midp_canvas_pane_ParamLimits

0xc2e6,	// (0x0000c2e6) midp_keypad_pane_ParamLimits

0xc2e6,	// (0x0000c2e6) midp_keypad_pane

0x2b90,	// (0x00002b90) main_midp_pane_ParamLimits

0x60b2,	// (0x000060b2) signal_pane_g2_cp_ParamLimits

0xe548,	// (0x0000e548) aid_size_cell_midp_keypad_ParamLimits

0xe548,	// (0x0000e548) aid_size_cell_midp_keypad

0xe566,	// (0x0000e566) midp_keyp_game_grid_pane_ParamLimits

0xe566,	// (0x0000e566) midp_keyp_game_grid_pane

0xe58d,	// (0x0000e58d) midp_keyp_rocker_pane_ParamLimits

0xe58d,	// (0x0000e58d) midp_keyp_rocker_pane

0xe5de,	// (0x0000e5de) midp_keyp_sk_left_pane_ParamLimits

0xe5de,	// (0x0000e5de) midp_keyp_sk_left_pane

0xe632,	// (0x0000e632) midp_keyp_sk_right_pane_ParamLimits

0xe632,	// (0x0000e632) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe686,	// (0x0000e686) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe686,	// (0x0000e686) midp_keyp_sk_right_pane_g1

0x669c,	// (0x0000669c) midp_keyp_rocker_pane_g1

0xe68f,	// (0x0000e68f) keyp_game_cell_pane_ParamLimits

0xe68f,	// (0x0000e68f) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe6b3,	// (0x0000e6b3) keyp_game_cell_pane_g1

0xb642,	// (0x0000b642) popup_fep_vkb2_window_ParamLimits

0xb642,	// (0x0000b642) popup_fep_vkb2_window

0xe6bc,	// (0x0000e6bc) aid_size_cell_vkb2_ParamLimits

0xe6bc,	// (0x0000e6bc) aid_size_cell_vkb2

0xe6f2,	// (0x0000e6f2) popup_fep_vkb2_window_g1_ParamLimits

0xe6f2,	// (0x0000e6f2) popup_fep_vkb2_window_g1

0xe742,	// (0x0000e742) vkb2_area_bottom_pane_ParamLimits

0xe742,	// (0x0000e742) vkb2_area_bottom_pane

0xe796,	// (0x0000e796) vkb2_area_keypad_pane_ParamLimits

0xe796,	// (0x0000e796) vkb2_area_keypad_pane

0xe7de,	// (0x0000e7de) vkb2_area_top_pane_ParamLimits

0xe7de,	// (0x0000e7de) vkb2_area_top_pane

0xe864,	// (0x0000e864) vkb2_top_entry_pane_ParamLimits

0xe864,	// (0x0000e864) vkb2_top_entry_pane

0xe891,	// (0x0000e891) vkb2_top_grid_left_pane_ParamLimits

0xe891,	// (0x0000e891) vkb2_top_grid_left_pane

0xe8b1,	// (0x0000e8b1) vkb2_top_grid_right_pane_ParamLimits

0xe8b1,	// (0x0000e8b1) vkb2_top_grid_right_pane

0x8edc,	// (0x00008edc) vkb2_cell_keypad_pane_ParamLimits

0x8edc,	// (0x00008edc) vkb2_cell_keypad_pane

0xe8f7,	// (0x0000e8f7) vkb2_area_bottom_grid_pane_ParamLimits

0xe8f7,	// (0x0000e8f7) vkb2_area_bottom_grid_pane

0xe921,	// (0x0000e921) vkb2_area_bottom_pane_g1_ParamLimits

0xe921,	// (0x0000e921) vkb2_area_bottom_pane_g1

0xe947,	// (0x0000e947) vkb2_area_bottom_pane_g2_ParamLimits

0xe947,	// (0x0000e947) vkb2_area_bottom_pane_g2

0xe978,	// (0x0000e978) vkb2_area_bottom_pane_g3_ParamLimits

0xe978,	// (0x0000e978) vkb2_area_bottom_pane_g3

0x0002,

0xf6a9,	// (0x0000f6a9) vkb2_area_bottom_pane_g_ParamLimits

0xf6a9,	// (0x0000f6a9) vkb2_area_bottom_pane_g

0x9086,	// (0x00009086) vkb2_top_cell_left_pane_ParamLimits

0x9086,	// (0x00009086) vkb2_top_cell_left_pane

0xe9e2,	// (0x0000e9e2) vkb2_top_entry_pane_g1_ParamLimits

0xe9e2,	// (0x0000e9e2) vkb2_top_entry_pane_g1

0xe9f0,	// (0x0000e9f0) vkb2_top_entry_pane_t1_ParamLimits

0xe9f0,	// (0x0000e9f0) vkb2_top_entry_pane_t1

0x90ee,	// (0x000090ee) vkb2_top_entry_pane_t2_ParamLimits

0x90ee,	// (0x000090ee) vkb2_top_entry_pane_t2

0x9120,	// (0x00009120) vkb2_top_entry_pane_t3_ParamLimits

0x9120,	// (0x00009120) vkb2_top_entry_pane_t3

0x0002,

0xf6b0,	// (0x0000f6b0) vkb2_top_entry_pane_t_ParamLimits

0xf6b0,	// (0x0000f6b0) vkb2_top_entry_pane_t

0xea29,	// (0x0000ea29) vkb2_top_grid_right_pane_g1_ParamLimits

0xea29,	// (0x0000ea29) vkb2_top_grid_right_pane_g1

0x9187,	// (0x00009187) vkb2_top_grid_right_pane_g2_ParamLimits

0x9187,	// (0x00009187) vkb2_top_grid_right_pane_g2

0x919f,	// (0x0000919f) vkb2_top_grid_right_pane_g3_ParamLimits

0x919f,	// (0x0000919f) vkb2_top_grid_right_pane_g3

0xea3f,	// (0x0000ea3f) vkb2_top_grid_right_pane_g4_ParamLimits

0xea3f,	// (0x0000ea3f) vkb2_top_grid_right_pane_g4

0x0003,

0xf6b7,	// (0x0000f6b7) vkb2_top_grid_right_pane_g_ParamLimits

0xf6b7,	// (0x0000f6b7) vkb2_top_grid_right_pane_g

0x91cd,	// (0x000091cd) vkb2_top_cell_left_pane_g1

0x91e4,	// (0x000091e4) vkb2_cell_keypad_pane_g1_ParamLimits

0x91e4,	// (0x000091e4) vkb2_cell_keypad_pane_g1

0x91f2,	// (0x000091f2) vkb2_cell_keypad_pane_t1_ParamLimits

0x91f2,	// (0x000091f2) vkb2_cell_keypad_pane_t1

0x9209,	// (0x00009209) vkb2_cell_bottom_grid_pane_ParamLimits

0x9209,	// (0x00009209) vkb2_cell_bottom_grid_pane

0x9242,	// (0x00009242) vkb2_cell_bottom_grid_pane_g1

0xe37b,	// (0x0000e37b) aid_call2_pane_cp02

0xe383,	// (0x0000e383) aid_call_pane_cp02

0xe38b,	// (0x0000e38b) clock_digital_number_pane_cp10

0xe393,	// (0x0000e393) clock_digital_number_pane_cp11

0xe39b,	// (0x0000e39b) clock_digital_number_pane_cp12

0xe3a3,	// (0x0000e3a3) clock_digital_number_pane_cp13

0xe3ab,	// (0x0000e3ab) clock_digital_separator_pane_cp10

0x1d5f,	// (0x00001d5f) popup_clock_digital_analogue_window_cp2_g1

0x1d5f,	// (0x00001d5f) popup_clock_digital_analogue_window_cp2_g2

0xe3b3,	// (0x0000e3b3) popup_clock_digital_analogue_window_cp2_g3

0x1d5f,	// (0x00001d5f) popup_clock_digital_analogue_window_cp2_g4

0xe3b3,	// (0x0000e3b3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf684,	// (0x0000f684) popup_clock_digital_analogue_window_cp2_g

0xe3bb,	// (0x0000e3bb) popup_clock_digital_analogue_window_cp2_t1

0xe3c9,	// (0x0000e3c9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf68f,	// (0x0000f68f) popup_clock_digital_analogue_window_cp2_t

0x669c,	// (0x0000669c) clock_digital_number_pane_cp10_g1

0x669c,	// (0x0000669c) clock_digital_number_pane_cp10_g2

0x0001,

0xb176,	// (0x0000b176) clock_digital_number_pane_cp10_g

0x669c,	// (0x0000669c) clock_digital_separator_pane_cp10_g1

0x669c,	// (0x0000669c) clock_digital_separator_pane_cp10_g2

0x0001,

0xb176,	// (0x0000b176) clock_digital_separator_pane_cp10_g

0x8789,	// (0x00008789) uniindi_top_pane_g3

0x879a,	// (0x0000879a) uniindi_top_pane_g4

0x8f67,	// (0x00008f67) vkb2_row_keypad_pane_ParamLimits

0x8f67,	// (0x00008f67) vkb2_row_keypad_pane

0x925e,	// (0x0000925e) vkb2_cell_t_keypad_pane_ParamLimits

0x925e,	// (0x0000925e) vkb2_cell_t_keypad_pane

0x926e,	// (0x0000926e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x926e,	// (0x0000926e) vkb2_cell_t_keypad_pane_cp08

0x9281,	// (0x00009281) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9281,	// (0x00009281) vkb2_cell_t_keypad_pane_cp09

0x9295,	// (0x00009295) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9295,	// (0x00009295) vkb2_cell_t_keypad_pane_cp01

0x92a6,	// (0x000092a6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x92a6,	// (0x000092a6) vkb2_cell_t_keypad_pane_cp02

0x92b7,	// (0x000092b7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x92b7,	// (0x000092b7) vkb2_cell_t_keypad_pane_cp03

0x92c8,	// (0x000092c8) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x92c8,	// (0x000092c8) vkb2_cell_t_keypad_pane_cp04

0x92d9,	// (0x000092d9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x92d9,	// (0x000092d9) vkb2_cell_t_keypad_pane_cp05

0x92ea,	// (0x000092ea) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x92ea,	// (0x000092ea) vkb2_cell_t_keypad_pane_cp06

0x92fb,	// (0x000092fb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x92fb,	// (0x000092fb) vkb2_cell_t_keypad_pane_cp07

0x930c,	// (0x0000930c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x930c,	// (0x0000930c) vkb2_cell_t_keypad_pane_cp10

0x6b2e,	// (0x00006b2e) vkb2_cell_t_keypad_pane_g1

0x9321,	// (0x00009321) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xea55,	// (0x0000ea55) aid_size_cell_graphic2_ParamLimits

0xea55,	// (0x0000ea55) aid_size_cell_graphic2

0xea93,	// (0x0000ea93) bg_popup_window_pane_cp21_ParamLimits

0xea93,	// (0x0000ea93) bg_popup_window_pane_cp21

0xeaa1,	// (0x0000eaa1) graphic2_pages_pane_ParamLimits

0xeaa1,	// (0x0000eaa1) graphic2_pages_pane

0xeaf7,	// (0x0000eaf7) grid_graphic2_control_pane_ParamLimits

0xeaf7,	// (0x0000eaf7) grid_graphic2_control_pane

0xeb3f,	// (0x0000eb3f) grid_graphic2_pane_ParamLimits

0xeb3f,	// (0x0000eb3f) grid_graphic2_pane

0xebc6,	// (0x0000ebc6) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7ed5,	// (0x00007ed5) list_ai3_gene_pane_ParamLimits

0xe057,	// (0x0000e057) bg_popup_window_pane_cp19_ParamLimits

0x830e,	// (0x0000830e) bg_touch_area_indi_pane_ParamLimits

0x830e,	// (0x0000830e) bg_touch_area_indi_pane

0x8324,	// (0x00008324) bg_touch_area_indi_pane_cp01_ParamLimits

0x8324,	// (0x00008324) bg_touch_area_indi_pane_cp01

0x833a,	// (0x0000833a) bg_touch_area_indi_pane_cp02_ParamLimits

0x833a,	// (0x0000833a) bg_touch_area_indi_pane_cp02

0x8352,	// (0x00008352) bg_touch_area_indi_pane_cp03_ParamLimits

0x8352,	// (0x00008352) bg_touch_area_indi_pane_cp03

0x836c,	// (0x0000836c) popup_slider_window_g1_ParamLimits

0x8388,	// (0x00008388) popup_slider_window_g2_ParamLimits

0x83a4,	// (0x000083a4) popup_slider_window_g3_ParamLimits

0xf668,	// (0x0000f668) popup_slider_window_g_ParamLimits

0x8400,	// (0x00008400) popup_slider_window_t1_ParamLimits

0x8474,	// (0x00008474) small_volume_slider_vertical_pane_ParamLimits

0xebc6,	// (0x0000ebc6) cell_graphic2_pane_ParamLimits

0xec23,	// (0x0000ec23) bg_button_pane_cp10_ParamLimits

0xec23,	// (0x0000ec23) bg_button_pane_cp10

0xec36,	// (0x0000ec36) bg_button_pane_cp11_ParamLimits

0xec36,	// (0x0000ec36) bg_button_pane_cp11

0xec49,	// (0x0000ec49) graphic2_pages_pane_g1_ParamLimits

0xec49,	// (0x0000ec49) graphic2_pages_pane_g1

0xec64,	// (0x0000ec64) graphic2_pages_pane_g2_ParamLimits

0xec64,	// (0x0000ec64) graphic2_pages_pane_g2

0x0001,

0xf6c5,	// (0x0000f6c5) graphic2_pages_pane_g_ParamLimits

0xf6c5,	// (0x0000f6c5) graphic2_pages_pane_g

0xec7c,	// (0x0000ec7c) graphic2_pages_pane_t1_ParamLimits

0xec7c,	// (0x0000ec7c) graphic2_pages_pane_t1

0xec94,	// (0x0000ec94) cell_graphic2_control_pane_ParamLimits

0xec94,	// (0x0000ec94) cell_graphic2_control_pane

0xecc6,	// (0x0000ecc6) cell_graphic2_pane_g1_ParamLimits

0xecc6,	// (0x0000ecc6) cell_graphic2_pane_g1

0x6948,	// (0x00006948) cell_graphic2_pane_g2_ParamLimits

0x6948,	// (0x00006948) cell_graphic2_pane_g2

0xecd3,	// (0x0000ecd3) cell_graphic2_pane_g3_ParamLimits

0xecd3,	// (0x0000ecd3) cell_graphic2_pane_g3

0x6955,	// (0x00006955) cell_graphic2_pane_g4_ParamLimits

0x6955,	// (0x00006955) cell_graphic2_pane_g4

0xece0,	// (0x0000ece0) cell_graphic2_pane_g5_ParamLimits

0xece0,	// (0x0000ece0) cell_graphic2_pane_g5

0x0004,

0xf6ca,	// (0x0000f6ca) cell_graphic2_pane_g_ParamLimits

0xf6ca,	// (0x0000f6ca) cell_graphic2_pane_g

0xed00,	// (0x0000ed00) cell_graphic2_pane_t1_ParamLimits

0xed00,	// (0x0000ed00) cell_graphic2_pane_t1

0x4731,	// (0x00004731) grid_highlight_pane_cp11_ParamLimits

0x4731,	// (0x00004731) grid_highlight_pane_cp11

0x083b,	// (0x0000083b) bg_button_pane_cp05

0xed35,	// (0x0000ed35) cell_graphic2_control_pane_g1

0x669c,	// (0x0000669c) bg_touch_area_indi_pane_g1

0x95f1,	// (0x000095f1) aid_cmod_rocker_key_size

0x95fb,	// (0x000095fb) aid_cmode_itu_key_size

0x9605,	// (0x00009605) main_cmode_video_pane

0x960f,	// (0x0000960f) main_comp_mode_itu_pane

0x961b,	// (0x0000961b) main_comp_mode_rocker_pane

0x9627,	// (0x00009627) cell_cmode_rocker_pane_ParamLimits

0x9627,	// (0x00009627) cell_cmode_rocker_pane

0x9639,	// (0x00009639) cell_cmode_itu_pane_ParamLimits

0x9639,	// (0x00009639) cell_cmode_itu_pane

0x139c,	// (0x0000139c) bg_button_pane_cp06_ParamLimits

0x139c,	// (0x0000139c) bg_button_pane_cp06

0x6b2e,	// (0x00006b2e) cell_cmode_rocker_pane_g1_ParamLimits

0x6b2e,	// (0x00006b2e) cell_cmode_rocker_pane_g1

0x85e9,	// (0x000085e9) cell_cmode_rocker_pane_g2_ParamLimits

0x85e9,	// (0x000085e9) cell_cmode_rocker_pane_g2

0x0001,

0xb3f1,	// (0x0000b3f1) cell_cmode_rocker_pane_g_ParamLimits

0xb3f1,	// (0x0000b3f1) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x964e,	// (0x0000964e) cell_cmode_itu_pane_g1

0x9657,	// (0x00009657) cell_cmode_itu_pane_t1

0x9665,	// (0x00009665) cell_cmode_itu_pane_t2

0x0001,

0xb3f6,	// (0x0000b3f6) cell_cmode_itu_pane_t

0x880c,	// (0x0000880c) aid_touch_ctrl_left

0x8814,	// (0x00008814) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xed5b,	// (0x0000ed5b) aid_cmod_rocker_key_size_cp

0xed65,	// (0x0000ed65) aid_cmode_itu_key_size_cp

0x9687,	// (0x00009687) compa_mode_pane_g1

0x968f,	// (0x0000968f) compa_mode_pane_g2

0x9697,	// (0x00009697) compa_mode_pane_g3

0x0002,

0xb3fb,	// (0x0000b3fb) compa_mode_pane_g

0xed6f,	// (0x0000ed6f) main_comp_mode_itu_pane_cp

0xed77,	// (0x0000ed77) main_comp_mode_rocker_pane_cp

0xed7f,	// (0x0000ed7f) cell_cmode_itu_pane_cp_ParamLimits

0xed7f,	// (0x0000ed7f) cell_cmode_itu_pane_cp

0xed94,	// (0x0000ed94) cell_cmode_rocker_pane_cp_ParamLimits

0xed94,	// (0x0000ed94) cell_cmode_rocker_pane_cp

0x139c,	// (0x0000139c) bg_button_pane_cp06_cp_ParamLimits

0x139c,	// (0x0000139c) bg_button_pane_cp06_cp

0x6b2e,	// (0x00006b2e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6b2e,	// (0x00006b2e) cell_cmode_rocker_pane_g1_cp

0x669c,	// (0x0000669c) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xeda6,	// (0x0000eda6) cell_cmode_itu_pane_g1_cp

0xedaf,	// (0x0000edaf) cell_cmode_itu_pane_t1_cp

0xedaf,	// (0x0000edaf) cell_cmode_itu_pane_t2_cp

0xd45d,	// (0x0000d45d) settings_code_pane_cp2

0x0507,	// (0x00000507) bg_popup_window_pane_cp3_ParamLimits

0x0a15,	// (0x00000a15) heading_pane_cp3_ParamLimits

0x0a21,	// (0x00000a21) listscroll_popup_graphic_pane_ParamLimits

0x6706,	// (0x00006706) fep_hwr_aid_pane_ParamLimits

0x84ef,	// (0x000084ef) aid_touch_sctrl_top_ParamLimits

0x84fc,	// (0x000084fc) sctrl_sk_top_pane_g1_ParamLimits

0x6b2e,	// (0x00006b2e) sctrl_sk_top_pane_g2_ParamLimits

0xb331,	// (0x0000b331) sctrl_sk_top_pane_g_ParamLimits

0x8509,	// (0x00008509) sctrl_sk_top_pane_t1_ParamLimits

0x84ef,	// (0x000084ef) aid_touch_sctrl_bottom_ParamLimits

0x8509,	// (0x00008509) sctrl_sk_bottom_pane_t1_ParamLimits

0x8755,	// (0x00008755) aid_area_touch_clock

0xe826,	// (0x0000e826) aid_vkb2_area_top_pane_cell_ParamLimits

0xe826,	// (0x0000e826) aid_vkb2_area_top_pane_cell

0xe8d1,	// (0x0000e8d1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe8d1,	// (0x0000e8d1) aid_vkb2_area_bottom_pane_cell

0x90a6,	// (0x000090a6) popup_char_count_window

0x96e4,	// (0x000096e4) popup_char_count_window_g1

0x96ed,	// (0x000096ed) popup_char_count_window_g2

0x96f6,	// (0x000096f6) popup_char_count_window_g3

0x0002,

0xb402,	// (0x0000b402) popup_char_count_window_g

0x96ff,	// (0x000096ff) popup_char_count_window_t1

0x8d04,	// (0x00008d04) popup_fep_char_preview_window_ParamLimits

0x8d04,	// (0x00008d04) popup_fep_char_preview_window

0xe846,	// (0x0000e846) vkb2_top_candi_pane_ParamLimits

0xe846,	// (0x0000e846) vkb2_top_candi_pane

0xedbd,	// (0x0000edbd) cell_vkb2_top_candi_pane_ParamLimits

0xedbd,	// (0x0000edbd) cell_vkb2_top_candi_pane

0x3f6a,	// (0x00003f6a) bg_popup_fep_char_preview_window_ParamLimits

0x3f6a,	// (0x00003f6a) bg_popup_fep_char_preview_window

0x975a,	// (0x0000975a) popup_fep_char_preview_window_t1_ParamLimits

0x975a,	// (0x0000975a) popup_fep_char_preview_window_t1

0x9794,	// (0x00009794) bg_popup_fep_char_preview_window_g1

0x979c,	// (0x0000979c) bg_popup_fep_char_preview_window_g2

0x97a4,	// (0x000097a4) bg_popup_fep_char_preview_window_g3

0x97ac,	// (0x000097ac) bg_popup_fep_char_preview_window_g4

0x97b4,	// (0x000097b4) bg_popup_fep_char_preview_window_g5

0x97bc,	// (0x000097bc) bg_popup_fep_char_preview_window_g6

0x97c4,	// (0x000097c4) bg_popup_fep_char_preview_window_g7

0x97cc,	// (0x000097cc) bg_popup_fep_char_preview_window_g8

0x97d4,	// (0x000097d4) bg_popup_fep_char_preview_window_g9

0x0008,

0xb409,	// (0x0000b409) bg_popup_fep_char_preview_window_g

0x6b2e,	// (0x00006b2e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6b2e,	// (0x00006b2e) cell_vkb2_top_candi_pane_g1

0x6e99,	// (0x00006e99) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6e99,	// (0x00006e99) cell_vkb2_top_candi_pane_g2

0x6eba,	// (0x00006eba) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6eba,	// (0x00006eba) cell_vkb2_top_candi_pane_g3

0x97dc,	// (0x000097dc) cell_vkb2_top_candi_pane_g4_ParamLimits

0x97dc,	// (0x000097dc) cell_vkb2_top_candi_pane_g4

0x97fd,	// (0x000097fd) cell_vkb2_top_candi_pane_g5_ParamLimits

0x97fd,	// (0x000097fd) cell_vkb2_top_candi_pane_g5

0x85e9,	// (0x000085e9) cell_vkb2_top_candi_pane_g6_ParamLimits

0x85e9,	// (0x000085e9) cell_vkb2_top_candi_pane_g6

0x0005,

0xb41c,	// (0x0000b41c) cell_vkb2_top_candi_pane_g_ParamLimits

0xb41c,	// (0x0000b41c) cell_vkb2_top_candi_pane_g

0x981e,	// (0x0000981e) cell_vkb2_top_candi_pane_t1

0x4e55,	// (0x00004e55) aid_size_touch_slider_mark_ParamLimits

0x4e55,	// (0x00004e55) aid_size_touch_slider_mark

0xeadd,	// (0x0000eadd) grid_graphic2_catg_pane_ParamLimits

0xeadd,	// (0x0000eadd) grid_graphic2_catg_pane

0xeb99,	// (0x0000eb99) popup_grid_graphic2_window_t1_ParamLimits

0xeb99,	// (0x0000eb99) popup_grid_graphic2_window_t1

0xebaf,	// (0x0000ebaf) popup_grid_graphic2_window_t2_ParamLimits

0xebaf,	// (0x0000ebaf) popup_grid_graphic2_window_t2

0x0001,

0xf6c0,	// (0x0000f6c0) popup_grid_graphic2_window_t_ParamLimits

0xf6c0,	// (0x0000f6c0) popup_grid_graphic2_window_t

0x083b,	// (0x0000083b) bg_button_pane_cp05_ParamLimits

0xed35,	// (0x0000ed35) cell_graphic2_control_pane_g1_ParamLimits

0xee23,	// (0x0000ee23) cell_graphic2_catg_pane_ParamLimits

0xee23,	// (0x0000ee23) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xee35,	// (0x0000ee35) cell_graphic2_catg_pane_g1

0x8721,	// (0x00008721) cell_tb_ext_pane_t1_ParamLimits

0x9144,	// (0x00009144) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9144,	// (0x00009144) vkb2_top_cell_right_narrow_pane

0x915c,	// (0x0000915c) vkb2_top_cell_right_wide_pane_ParamLimits

0x915c,	// (0x0000915c) vkb2_top_cell_right_wide_pane

0x66f8,	// (0x000066f8) bg_vkb2_func_pane_ParamLimits

0x66f8,	// (0x000066f8) bg_vkb2_func_pane

0x91cd,	// (0x000091cd) vkb2_top_cell_left_pane_g1_ParamLimits

0x66f8,	// (0x000066f8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x66f8,	// (0x000066f8) bg_vkb2_fuc_pane_cp03

0x9242,	// (0x00009242) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x36ed,	// (0x000036ed) bg_vkb2_func_pane_g1

0x36f5,	// (0x000036f5) bg_vkb2_func_pane_g2

0x3705,	// (0x00003705) bg_vkb2_func_pane_g3

0x36fd,	// (0x000036fd) bg_vkb2_func_pane_g4

0x370d,	// (0x0000370d) bg_vkb2_func_pane_g5

0x3715,	// (0x00003715) bg_vkb2_func_pane_g6

0x371d,	// (0x0000371d) bg_vkb2_func_pane_g7

0x3725,	// (0x00003725) bg_vkb2_func_pane_g8

0x36e5,	// (0x000036e5) bg_vkb2_func_pane_g9

0x0008,

0xb429,	// (0x0000b429) bg_vkb2_func_pane_g

0x66f8,	// (0x000066f8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x66f8,	// (0x000066f8) bg_vkb2_fuc_pane_cp01

0x91cd,	// (0x000091cd) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x91cd,	// (0x000091cd) vkb2_top_cell_right_wide_pane_g1

0x66f8,	// (0x000066f8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x66f8,	// (0x000066f8) bg_vkb2_fuc_pane_cp02

0x9242,	// (0x00009242) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9242,	// (0x00009242) vkb2_top_cell_right_narrow_pane_g1

0xdf97,	// (0x0000df97) aid_touch_area_decrease_ParamLimits

0xdf97,	// (0x0000df97) aid_touch_area_decrease

0xdfcb,	// (0x0000dfcb) aid_touch_area_increase_ParamLimits

0xdfcb,	// (0x0000dfcb) aid_touch_area_increase

0xdff3,	// (0x0000dff3) aid_touch_area_mute_ParamLimits

0xdff3,	// (0x0000dff3) aid_touch_area_mute

0xe023,	// (0x0000e023) aid_touch_area_slider_ParamLimits

0xe023,	// (0x0000e023) aid_touch_area_slider

0xe063,	// (0x0000e063) popup_slider_window_g4_ParamLimits

0xe063,	// (0x0000e063) popup_slider_window_g4

0xe08b,	// (0x0000e08b) popup_slider_window_g5_ParamLimits

0xe08b,	// (0x0000e08b) popup_slider_window_g5

0xe0bf,	// (0x0000e0bf) popup_slider_window_g6_ParamLimits

0xe0bf,	// (0x0000e0bf) popup_slider_window_g6

0x842e,	// (0x0000842e) popup_slider_window_t2_ParamLimits

0x842e,	// (0x0000842e) popup_slider_window_t2

0x0001,

0xb325,	// (0x0000b325) popup_slider_window_t_ParamLimits

0xb325,	// (0x0000b325) popup_slider_window_t

0xe0db,	// (0x0000e0db) slider_pane_ParamLimits

0xe0db,	// (0x0000e0db) slider_pane

0x9858,	// (0x00009858) slider_pane_g1_ParamLimits

0x9858,	// (0x00009858) slider_pane_g1

0x986c,	// (0x0000986c) slider_pane_g2_ParamLimits

0x986c,	// (0x0000986c) slider_pane_g2

0x9882,	// (0x00009882) slider_pane_g3_ParamLimits

0x9882,	// (0x00009882) slider_pane_g3

0x0003,

0xb43c,	// (0x0000b43c) slider_pane_g_ParamLimits

0xb43c,	// (0x0000b43c) slider_pane_g

0xcbb3,	// (0x0000cbb3) popup_tb_float_extension_window_ParamLimits

0xcbb3,	// (0x0000cbb3) popup_tb_float_extension_window

0x98ae,	// (0x000098ae) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x98ba,	// (0x000098ba) grid_tb_float_ext_pane

0x98c4,	// (0x000098c4) cell_tb_float_ext_pane_ParamLimits

0x98c4,	// (0x000098c4) cell_tb_float_ext_pane

0x98de,	// (0x000098de) cell_tb_float_ext_pane_g1

0x98e7,	// (0x000098e7) grid_highlight_pane_cp12

0xd85c,	// (0x0000d85c) cell_last_hwr_side_pane_ParamLimits

0xd85c,	// (0x0000d85c) cell_last_hwr_side_pane

0x669c,	// (0x0000669c) cell_last_hwr_side_pane_g1

0x98f0,	// (0x000098f0) cell_last_hwr_side_pane_g2

0x0001,

0xb445,	// (0x0000b445) cell_last_hwr_side_pane_g

0xe9ad,	// (0x0000e9ad) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe9ad,	// (0x0000e9ad) vkb2_area_bottom_space_btn_pane

0x6b2e,	// (0x00006b2e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9321,	// (0x00009321) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x981e,	// (0x0000981e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x98f9,	// (0x000098f9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x98f9,	// (0x000098f9) vkb2_area_bottom_space_btn_pane_g1

0x9933,	// (0x00009933) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9933,	// (0x00009933) vkb2_area_bottom_space_btn_pane_g2

0x9969,	// (0x00009969) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9969,	// (0x00009969) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb44a,	// (0x0000b44a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb44a,	// (0x0000b44a) vkb2_area_bottom_space_btn_pane_g

0x67bb,	// (0x000067bb) cel_fep_hwr_func_pane_ParamLimits

0x67bb,	// (0x000067bb) cel_fep_hwr_func_pane

0xd831,	// (0x0000d831) cell_hwr_side_button_pane_ParamLimits

0xd831,	// (0x0000d831) cell_hwr_side_button_pane

0x8755,	// (0x00008755) aid_area_touch_clock_ParamLimits

0x083b,	// (0x0000083b) bg_uniindi_top_pane_ParamLimits

0x8767,	// (0x00008767) uniindi_top_pane_g1_ParamLimits

0x877d,	// (0x0000877d) uniindi_top_pane_g2_ParamLimits

0x8789,	// (0x00008789) uniindi_top_pane_g3_ParamLimits

0x879a,	// (0x0000879a) uniindi_top_pane_g4_ParamLimits

0xb35d,	// (0x0000b35d) uniindi_top_pane_g_ParamLimits

0x87a7,	// (0x000087a7) uniindi_top_pane_t1_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01

0x99b3,	// (0x000099b3) cel_fep_hwr_func_pane_g1_ParamLimits

0x99b3,	// (0x000099b3) cel_fep_hwr_func_pane_g1

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02

0x99b3,	// (0x000099b3) cell_hwr_side_button_pane_g1_ParamLimits

0x99b3,	// (0x000099b3) cell_hwr_side_button_pane_g1

0x34c0,	// (0x000034c0) status_pane_g4_ParamLimits

0x34c0,	// (0x000034c0) status_pane_g4

0x34da,	// (0x000034da) status_pane_t1

0x63d6,	// (0x000063d6) form2_midp_gauge_slider_cont_pane

0x63de,	// (0x000063de) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd787,	// (0x0000d787) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd799,	// (0x0000d799) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf60c,	// (0x0000f60c) form2_midp_gauge_slider_pane_t_ParamLimits

0x6414,	// (0x00006414) form2_midp_slider_pane_ParamLimits

0x8cc4,	// (0x00008cc4) aid_size_cell_func_vkb2_ParamLimits

0x8cc4,	// (0x00008cc4) aid_size_cell_func_vkb2

0x989a,	// (0x0000989a) slider_pane_g4_ParamLimits

0x989a,	// (0x0000989a) slider_pane_g4

0xee3e,	// (0x0000ee3e) form2_midp_gauge_slider_pane_t2_cp01

0xee4c,	// (0x0000ee4c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xee4c,	// (0x0000ee4c) form2_midp_gauge_slider_pane_t3_cp01

0x99ec,	// (0x000099ec) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9a20,	// (0x00009a20) navi_smil_pane_g1

0x9a28,	// (0x00009a28) navi_smil_pane_t1

0x99f5,	// (0x000099f5) form2_midp_slider_pane_g1

0x99fe,	// (0x000099fe) form2_midp_slider_pane_g2

0x9a06,	// (0x00009a06) form2_midp_slider_pane_g3

0x99f5,	// (0x000099f5) form2_midp_slider_pane_g4

0xee69,	// (0x0000ee69) form2_midp_slider_pane_g5

0x0004,

0xf6da,	// (0x0000f6da) form2_midp_slider_pane_g

0x99a3,	// (0x000099a3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x99a3,	// (0x000099a3) vkb2_area_bottom_space_btn_pane_g4

0xcd96,	// (0x0000cd96) lc0_navi_pane_ParamLimits

0xcd96,	// (0x0000cd96) lc0_navi_pane

0xce00,	// (0x0000ce00) lc0_stat_indi_pane_ParamLimits

0xce00,	// (0x0000ce00) lc0_stat_indi_pane

0xce15,	// (0x0000ce15) ls0_title_pane_ParamLimits

0xce15,	// (0x0000ce15) ls0_title_pane

0x139c,	// (0x0000139c) bg_popup_sub_pane_cp14_ParamLimits

0x873c,	// (0x0000873c) list_uniindi_pane_ParamLimits

0x8748,	// (0x00008748) uniindi_top_pane_ParamLimits

0x87e4,	// (0x000087e4) list_single_uniindi_pane_g1_ParamLimits

0x87f7,	// (0x000087f7) list_single_uniindi_pane_t1_ParamLimits

0xee74,	// (0x0000ee74) lc0_stat_clock_pane_ParamLimits

0xee74,	// (0x0000ee74) lc0_stat_clock_pane

0xee81,	// (0x0000ee81) lc0_stat_indi_pane_g1_ParamLimits

0xee81,	// (0x0000ee81) lc0_stat_indi_pane_g1

0xee8e,	// (0x0000ee8e) lc0_stat_indi_pane_g2_ParamLimits

0xee8e,	// (0x0000ee8e) lc0_stat_indi_pane_g2

0x0001,

0xf6e5,	// (0x0000f6e5) lc0_stat_indi_pane_g_ParamLimits

0xf6e5,	// (0x0000f6e5) lc0_stat_indi_pane_g

0xee9b,	// (0x0000ee9b) lc0_uni_indicator_pane_ParamLimits

0xee9b,	// (0x0000ee9b) lc0_uni_indicator_pane

0xeea8,	// (0x0000eea8) ls0_title_pane_g1_ParamLimits

0xeea8,	// (0x0000eea8) ls0_title_pane_g1

0xeebc,	// (0x0000eebc) ls0_title_pane_t1_ParamLimits

0xeebc,	// (0x0000eebc) ls0_title_pane_t1

0xeeea,	// (0x0000eeea) lc0_uni_indicator_pane_g1_ParamLimits

0xeeea,	// (0x0000eeea) lc0_uni_indicator_pane_g1

0x9ac8,	// (0x00009ac8) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9ad6,	// (0x00009ad6) ai5_sk_pane_ParamLimits

0x9ad6,	// (0x00009ad6) ai5_sk_pane

0xef11,	// (0x0000ef11) cell_ai5_widget_pane_ParamLimits

0xef11,	// (0x0000ef11) cell_ai5_widget_pane

0x9b99,	// (0x00009b99) aid_size_cell_widget_grid

0x9baf,	// (0x00009baf) bg_ai5_widget_pane_ParamLimits

0x9baf,	// (0x00009baf) bg_ai5_widget_pane

0x9c23,	// (0x00009c23) cell_ai5_widget_pane_g2

0x9c33,	// (0x00009c33) cell_ai5_widget_pane_g3

0x9c4a,	// (0x00009c4a) cell_ai5_widget_pane_g4

0x9c56,	// (0x00009c56) cell_ai5_widget_pane_g5

0x9c62,	// (0x00009c62) cell_ai5_widget_pane_g6

0x9c6e,	// (0x00009c6e) cell_ai5_widget_pane_g7

0x9cb6,	// (0x00009cb6) cell_ai5_widget_pane_t1_ParamLimits

0x9cb6,	// (0x00009cb6) cell_ai5_widget_pane_t1

0x9cd3,	// (0x00009cd3) cell_ai5_widget_pane_t2_ParamLimits

0x9cd3,	// (0x00009cd3) cell_ai5_widget_pane_t2

0x9ceb,	// (0x00009ceb) cell_ai5_widget_pane_t3_ParamLimits

0x9ceb,	// (0x00009ceb) cell_ai5_widget_pane_t3

0x9d03,	// (0x00009d03) cell_ai5_widget_pane_t4_ParamLimits

0x9d03,	// (0x00009d03) cell_ai5_widget_pane_t4

0x9d20,	// (0x00009d20) cell_ai5_widget_pane_t5_ParamLimits

0x9d20,	// (0x00009d20) cell_ai5_widget_pane_t5

0x9d3f,	// (0x00009d3f) cell_ai5_widget_pane_t6_ParamLimits

0x9d3f,	// (0x00009d3f) cell_ai5_widget_pane_t6

0x9d51,	// (0x00009d51) cell_ai5_widget_pane_t7_ParamLimits

0x9d51,	// (0x00009d51) cell_ai5_widget_pane_t7

0x9d6a,	// (0x00009d6a) cell_ai5_widget_pane_t8_ParamLimits

0x9d6a,	// (0x00009d6a) cell_ai5_widget_pane_t8

0x0009,

0xb478,	// (0x0000b478) cell_ai5_widget_pane_t_ParamLimits

0xb478,	// (0x0000b478) cell_ai5_widget_pane_t

0x9dbe,	// (0x00009dbe) grid_ai5_widget_pane

0x139c,	// (0x0000139c) highlight_cell_ai5_widget_pane_ParamLimits

0x139c,	// (0x0000139c) highlight_cell_ai5_widget_pane

0xef7b,	// (0x0000ef7b) ai5_sk_left_pane

0xef85,	// (0x0000ef85) ai5_sk_middle_pane

0xef8f,	// (0x0000ef8f) ai5_sk_right_pane

0x9df3,	// (0x00009df3) bg_ai5_widget_pane_g1_ParamLimits

0x9df3,	// (0x00009df3) bg_ai5_widget_pane_g1

0x9dff,	// (0x00009dff) bg_ai5_widget_pane_g2_ParamLimits

0x9dff,	// (0x00009dff) bg_ai5_widget_pane_g2

0x9e0b,	// (0x00009e0b) bg_ai5_widget_pane_g3_ParamLimits

0x9e0b,	// (0x00009e0b) bg_ai5_widget_pane_g3

0x9e17,	// (0x00009e17) bg_ai5_widget_pane_g4_ParamLimits

0x9e17,	// (0x00009e17) bg_ai5_widget_pane_g4

0x9e23,	// (0x00009e23) bg_ai5_widget_pane_g5_ParamLimits

0x9e23,	// (0x00009e23) bg_ai5_widget_pane_g5

0x9e2f,	// (0x00009e2f) bg_ai5_widget_pane_g6_ParamLimits

0x9e2f,	// (0x00009e2f) bg_ai5_widget_pane_g6

0x9e3b,	// (0x00009e3b) bg_ai5_widget_pane_g7_ParamLimits

0x9e3b,	// (0x00009e3b) bg_ai5_widget_pane_g7

0x9e47,	// (0x00009e47) bg_ai5_widget_pane_g8_ParamLimits

0x9e47,	// (0x00009e47) bg_ai5_widget_pane_g8

0x9e53,	// (0x00009e53) bg_ai5_widget_pane_g9_ParamLimits

0x9e53,	// (0x00009e53) bg_ai5_widget_pane_g9

0x0008,

0xb48d,	// (0x0000b48d) bg_ai5_widget_pane_g_ParamLimits

0xb48d,	// (0x0000b48d) bg_ai5_widget_pane_g

0x9e85,	// (0x00009e85) cell_shortcut_ai5_widget_pane_ParamLimits

0x9e85,	// (0x00009e85) cell_shortcut_ai5_widget_pane

0x2619,	// (0x00002619) bg_cell_shortcut_ai5_widget_pane

0x9e96,	// (0x00009e96) cell_grid_ai5_widget_pane_g1

0x2619,	// (0x00002619) highlight_cell_shortcut_ai5_widget_pane

0x36f5,	// (0x000036f5) ai5_sk_left_pane_g1

0x9e9f,	// (0x00009e9f) ai5_sk_left_pane_g2

0x9ea7,	// (0x00009ea7) ai5_sk_left_pane_g3

0x9eaf,	// (0x00009eaf) ai5_sk_left_pane_g4

0x0003,

0xb4a0,	// (0x0000b4a0) ai5_sk_left_pane_g

0x9eb7,	// (0x00009eb7) ai5_sk_left_pane_t1

0x36ed,	// (0x000036ed) ai5_sk_right_pane_g1

0x9ec5,	// (0x00009ec5) ai5_sk_right_pane_g2

0x9ecd,	// (0x00009ecd) ai5_sk_right_pane_g3

0x9ed5,	// (0x00009ed5) ai5_sk_right_pane_g4

0x0003,

0xb4a9,	// (0x0000b4a9) ai5_sk_right_pane_g

0x9edd,	// (0x00009edd) ai5_sk_right_pane_t1

0x36ed,	// (0x000036ed) ai5_sk_middle_pane_g1

0x36f5,	// (0x000036f5) ai5_sk_middle_pane_g2

0x370d,	// (0x0000370d) ai5_sk_middle_pane_g3

0x9ecd,	// (0x00009ecd) ai5_sk_middle_pane_g4

0x9ea7,	// (0x00009ea7) ai5_sk_middle_pane_g5

0x9eeb,	// (0x00009eeb) ai5_sk_middle_pane_g6

0xef99,	// (0x0000ef99) ai5_sk_middle_pane_g7

0x0006,

0xf6ea,	// (0x0000f6ea) ai5_sk_middle_pane_g

0xcc82,	// (0x0000cc82) aid_touch_area_size_lc0_ParamLimits

0xcc82,	// (0x0000cc82) aid_touch_area_size_lc0

0x6edb,	// (0x00006edb) cell_hwr_candidate_pane_t1_ParamLimits

0x3197,	// (0x00003197) aid_touch_navi_pane

0xcf0e,	// (0x0000cf0e) status_dt_navi_pane_ParamLimits

0xcf0e,	// (0x0000cf0e) status_dt_navi_pane

0xcf26,	// (0x0000cf26) status_dt_sta_pane_ParamLimits

0xcf26,	// (0x0000cf26) status_dt_sta_pane

0xefa1,	// (0x0000efa1) dt_sta_controll_pane

0xefae,	// (0x0000efae) dt_sta_indi_pane

0xefbb,	// (0x0000efbb) dt_sta_title_pane

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane_ParamLimits

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane

0xefcd,	// (0x0000efcd) dt_sta_battery_pane

0xefd5,	// (0x0000efd5) dt_sta_indi_pane_g1

0x9f3d,	// (0x00009f3d) dt_sta_indi_pane_g2

0x9f46,	// (0x00009f46) dt_sta_indi_pane_g3

0x0002,

0xf6f9,	// (0x0000f6f9) dt_sta_indi_pane_g

0x9f4f,	// (0x00009f4f) dt_sta_signal_pane

0x139c,	// (0x0000139c) bg_dt_sta_title_pane_ParamLimits

0x139c,	// (0x0000139c) bg_dt_sta_title_pane

0x9f58,	// (0x00009f58) dt_sta_title_pane_g1

0x9f60,	// (0x00009f60) dt_sta_title_pane_t1_ParamLimits

0x9f60,	// (0x00009f60) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xefde,	// (0x0000efde) dt_sta_controll_pane_g1

0x9f7e,	// (0x00009f7e) bg_dt_sta_title_pane_g1

0x9f87,	// (0x00009f87) bg_dt_sta_title_pane_g2

0x9f90,	// (0x00009f90) bg_dt_sta_title_pane_g3

0x0002,

0xb4c8,	// (0x0000b4c8) bg_dt_sta_title_pane_g

0x669c,	// (0x0000669c) bg_dt_sta_indi_pane_g1

0x9f99,	// (0x00009f99) dt_sta_signal_pane_g1

0x9fa1,	// (0x00009fa1) dt_sta_signal_pane_g2

0x0001,

0xb4cf,	// (0x0000b4cf) dt_sta_signal_pane_g

0x9fa9,	// (0x00009fa9) dt_sta_battery_pane_g1

0x9fb2,	// (0x00009fb2) dt_sta_battery_pane_t1

0x669c,	// (0x0000669c) bg_dt_sta_control_pane_g1

0x1f48,	// (0x00001f48) fep_china_uni_eep_pane

0x1f50,	// (0x00001f50) fep_china_uni_entry_pane_ParamLimits

0x1f60,	// (0x00001f60) popup_fep_china_uni_window_g1_ParamLimits

0x1f70,	// (0x00001f70) popup_fep_china_uni_window_g2_ParamLimits

0x1f70,	// (0x00001f70) popup_fep_china_uni_window_g2

0x0001,

0xad56,	// (0x0000ad56) popup_fep_china_uni_window_g_ParamLimits

0xad56,	// (0x0000ad56) popup_fep_china_uni_window_g

0x9fc1,	// (0x00009fc1) fep_china_uni_eep_pane_g1

0x9fc9,	// (0x00009fc9) fep_china_uni_eep_pane_t1

0x9a17,	// (0x00009a17) aid_touch_area_size_smil_player

0x32e7,	// (0x000032e7) lc0_clock_pane

0x34ce,	// (0x000034ce) status_pane_g5_ParamLimits

0x34ce,	// (0x000034ce) status_pane_g5

0xc735,	// (0x0000c735) popup_keymap_window

0x348c,	// (0x0000348c) status_icon_pane

0x9c33,	// (0x00009c33) cell_ai5_widget_pane_g3_ParamLimits

0x9c4a,	// (0x00009c4a) cell_ai5_widget_pane_g4_ParamLimits

0x9c56,	// (0x00009c56) cell_ai5_widget_pane_g5_ParamLimits

0x9c7a,	// (0x00009c7a) cell_ai5_widget_pane_g8_ParamLimits

0x9c7a,	// (0x00009c7a) cell_ai5_widget_pane_g8

0x9c8e,	// (0x00009c8e) cell_ai5_widget_pane_g9_ParamLimits

0x9c8e,	// (0x00009c8e) cell_ai5_widget_pane_g9

0x9ca2,	// (0x00009ca2) cell_ai5_widget_pane_g10_ParamLimits

0x9ca2,	// (0x00009ca2) cell_ai5_widget_pane_g10

0x9fd8,	// (0x00009fd8) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9fe0,	// (0x00009fe0) popup_keymap_window_t1

0xc43d,	// (0x0000c43d) control_pane_g6_ParamLimits

0xc43d,	// (0x0000c43d) control_pane_g6

0xc44a,	// (0x0000c44a) control_pane_g7_ParamLimits

0xc44a,	// (0x0000c44a) control_pane_g7

0xc457,	// (0x0000c457) control_pane_g8_ParamLimits

0xc457,	// (0x0000c457) control_pane_g8

0xefa1,	// (0x0000efa1) dt_sta_controll_pane_ParamLimits

0xefae,	// (0x0000efae) dt_sta_indi_pane_ParamLimits

0xefbb,	// (0x0000efbb) dt_sta_title_pane_ParamLimits

0x0d59,	// (0x00000d59) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb688,	// (0x0000b688) popup_sk_window

0x3f6a,	// (0x00003f6a) bg_popup_sub_pane_cp28_ParamLimits

0x3f6a,	// (0x00003f6a) bg_popup_sub_pane_cp28

0x9fee,	// (0x00009fee) popup_discreet_window_g1_ParamLimits

0x9fee,	// (0x00009fee) popup_discreet_window_g1

0xa00e,	// (0x0000a00e) popup_discreet_window_t1_ParamLimits

0xa00e,	// (0x0000a00e) popup_discreet_window_t1

0xa02c,	// (0x0000a02c) popup_discreet_window_t2_ParamLimits

0xa02c,	// (0x0000a02c) popup_discreet_window_t2

0x0002,

0xb4d4,	// (0x0000b4d4) popup_discreet_window_t_ParamLimits

0xb4d4,	// (0x0000b4d4) popup_discreet_window_t

0xa07e,	// (0x0000a07e) popup_sk_window_g1

0xa088,	// (0x0000a088) popup_sk_window_g2

0x0001,

0xb4db,	// (0x0000b4db) popup_sk_window_g

0xa092,	// (0x0000a092) popup_sk_window_t1

0xa0a0,	// (0x0000a0a0) popup_sk_window_t1_copy1

0x9c23,	// (0x00009c23) cell_ai5_widget_pane_g2_ParamLimits

0x9d7c,	// (0x00009d7c) cell_ai5_widget_pane_t9_ParamLimits

0x9d7c,	// (0x00009d7c) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xefe7,	// (0x0000efe7) aid_fshwr2_btn_pane

0xeff8,	// (0x0000eff8) aid_fshwr2_syb_pane

0xf009,	// (0x0000f009) aid_fshwr2_txt_pane

0xf015,	// (0x0000f015) fshwr2_func_candi_pane

0xf034,	// (0x0000f034) fshwr2_hwr_syb_pane

0xf04f,	// (0x0000f04f) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xa120,	// (0x0000a120) fshwr2_icf_pane_t1_ParamLimits

0xa120,	// (0x0000a120) fshwr2_icf_pane_t1

0x1d5f,	// (0x00001d5f) fshwr2_func_candi_pane_g1

0xf07b,	// (0x0000f07b) fshwr2_func_candi_row_pane_ParamLimits

0xf07b,	// (0x0000f07b) fshwr2_func_candi_row_pane

0xf09e,	// (0x0000f09e) cell_fshwr2_syb_pane_ParamLimits

0xf09e,	// (0x0000f09e) cell_fshwr2_syb_pane

0x6b2e,	// (0x00006b2e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6b2e,	// (0x00006b2e) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xf0b4,	// (0x0000f0b4) fshwr2_func_candi_cell_pane_ParamLimits

0xf0b4,	// (0x0000f0b4) fshwr2_func_candi_cell_pane

0xf0ff,	// (0x0000f0ff) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf0ff,	// (0x0000f0ff) fshwr2_func_candi_cell_bg_pane

0xf10b,	// (0x0000f10b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf10b,	// (0x0000f10b) fshwr2_func_candi_cell_pane_g1

0xf142,	// (0x0000f142) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf142,	// (0x0000f142) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0xa1ee,	// (0x0000a1ee) cell_fshwr2_syb_bg_pane

0xf15d,	// (0x0000f15d) cell_fshwr2_syb_bg_pane_g1

0xf165,	// (0x0000f165) cell_fshwr2_syb_bg_pane_t1

0x139c,	// (0x0000139c) main_tmo_pane

0xd27b,	// (0x0000d27b) uni_indicator_pane_g1_ParamLimits

0xd291,	// (0x0000d291) uni_indicator_pane_g2_ParamLimits

0xd2a7,	// (0x0000d2a7) uni_indicator_pane_g3_ParamLimits

0x4c1d,	// (0x00004c1d) uni_indicator_pane_g4_ParamLimits

0x4c1d,	// (0x00004c1d) uni_indicator_pane_g4

0x4c31,	// (0x00004c31) uni_indicator_pane_g5_ParamLimits

0x4c31,	// (0x00004c31) uni_indicator_pane_g5

0x4c31,	// (0x00004c31) uni_indicator_pane_g6_ParamLimits

0x4c31,	// (0x00004c31) uni_indicator_pane_g6

0xf5b3,	// (0x0000f5b3) uni_indicator_pane_g_ParamLimits

0xdf73,	// (0x0000df73) popup_tmo_note_window_ParamLimits

0xdf73,	// (0x0000df73) popup_tmo_note_window

0x139c,	// (0x0000139c) fshwr2_bg_pane

0xf133,	// (0x0000f133) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf133,	// (0x0000f133) fshwr2_func_candi_cell_pane_g2

0x0001,

0xf700,	// (0x0000f700) fshwr2_func_candi_cell_pane_g_ParamLimits

0xf700,	// (0x0000f700) fshwr2_func_candi_cell_pane_g

0x669c,	// (0x0000669c) bg_popup_window_pane_cp01

0xa20d,	// (0x0000a20d) bg_popup_window_pane_g1_cp01

0xa216,	// (0x0000a216) bg_popup_window_pane_cp22_ParamLimits

0xa216,	// (0x0000a216) bg_popup_window_pane_cp22

0xa224,	// (0x0000a224) listscroll_tmo_link_pane_ParamLimits

0xa224,	// (0x0000a224) listscroll_tmo_link_pane

0xa264,	// (0x0000a264) popup_tmo_note_window_g1_ParamLimits

0xa264,	// (0x0000a264) popup_tmo_note_window_g1

0xa271,	// (0x0000a271) tmo_note_info_pane_ParamLimits

0xa271,	// (0x0000a271) tmo_note_info_pane

0xf174,	// (0x0000f174) list_tmo_note_info_pane_g1_ParamLimits

0xf174,	// (0x0000f174) list_tmo_note_info_pane_g1

0xa2a2,	// (0x0000a2a2) list_tmo_note_info_pane_g2_ParamLimits

0xa2a2,	// (0x0000a2a2) list_tmo_note_info_pane_g2

0x0001,

0xf705,	// (0x0000f705) list_tmo_note_info_pane_g_ParamLimits

0xf705,	// (0x0000f705) list_tmo_note_info_pane_g

0xa2be,	// (0x0000a2be) list_tmo_note_info_text_pane_ParamLimits

0xa2be,	// (0x0000a2be) list_tmo_note_info_text_pane

0xa33f,	// (0x0000a33f) list_tmo_link_pane

0xa34c,	// (0x0000a34c) scroll_pane_cp20

0xa359,	// (0x0000a359) list_single_tmo_link_pane_ParamLimits

0xa359,	// (0x0000a359) list_single_tmo_link_pane

0xa369,	// (0x0000a369) list_single_tmo_link_pane_t1

0xa377,	// (0x0000a377) list_tmo_note_info_text_pane_t1_ParamLimits

0xa377,	// (0x0000a377) list_tmo_note_info_text_pane_t1

0xbfdd,	// (0x0000bfdd) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbfdd,	// (0x0000bfdd) aid_size_touch_scroll_bar_cp01

0xbf0d,	// (0x0000bf0d) aid_size_touch_slider_marker

0xb678,	// (0x0000b678) popup_settings_window_ParamLimits

0xb678,	// (0x0000b678) popup_settings_window

0x2bb8,	// (0x00002bb8) popup_candi_list_indi_window

0x3197,	// (0x00003197) aid_touch_navi_pane_ParamLimits

0x84c3,	// (0x000084c3) rs_clock_indi_pane

0x84cc,	// (0x000084cc) sctrl_sk_bottom_pane_ParamLimits

0x84dd,	// (0x000084dd) sctrl_sk_top_pane_ParamLimits

0x8d1e,	// (0x00008d1e) popup_fep_tooltip_window

0x9b99,	// (0x00009b99) aid_size_cell_widget_grid_ParamLimits

0x9c0e,	// (0x00009c0e) cell_ai5_widget_pane_g1_ParamLimits

0x9c0e,	// (0x00009c0e) cell_ai5_widget_pane_g1

0x9c62,	// (0x00009c62) cell_ai5_widget_pane_g6_ParamLimits

0x9c6e,	// (0x00009c6e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb463,	// (0x0000b463) cell_ai5_widget_pane_g_ParamLimits

0xb463,	// (0x0000b463) cell_ai5_widget_pane_g

0x9da0,	// (0x00009da0) cell_ai5_widget_pane_t10_ParamLimits

0x9da0,	// (0x00009da0) cell_ai5_widget_pane_t10

0x9dbe,	// (0x00009dbe) grid_ai5_widget_pane_ParamLimits

0x9e5f,	// (0x00009e5f) cell_contacts_ai5_widget_pane_ParamLimits

0x9e5f,	// (0x00009e5f) cell_contacts_ai5_widget_pane

0xa041,	// (0x0000a041) popup_discreet_window_t3_ParamLimits

0xa041,	// (0x0000a041) popup_discreet_window_t3

0xf067,	// (0x0000f067) popup_fshwr2_char_preview_window_ParamLimits

0xf067,	// (0x0000f067) popup_fshwr2_char_preview_window

0xf18b,	// (0x0000f18b) tmo_note_info_pane_t1

0xf1a0,	// (0x0000f1a0) tmo_note_info_pane_t2

0xf1b7,	// (0x0000f1b7) tmo_note_info_pane_t3

0xa31b,	// (0x0000a31b) tmo_note_info_pane_t4

0xa32d,	// (0x0000a32d) tmo_note_info_pane_t5

0x0004,

0xf70a,	// (0x0000f70a) tmo_note_info_pane_t

0xa33f,	// (0x0000a33f) list_tmo_link_pane_ParamLimits

0xa34c,	// (0x0000a34c) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa390,	// (0x0000a390) popup_fshwr2_char_preview_window_t1

0xa39e,	// (0x0000a39e) popup_candi_list_indi_window_g1

0xa3a7,	// (0x0000a3a7) bg_cell_contacts_ai5_widget_pane

0xa3b3,	// (0x0000a3b3) cell_contacts_ai5_widget_pane_g1

0x71a7,	// (0x000071a7) cell_contacts_ai5_widget_pane_g2

0xa3c8,	// (0x0000a3c8) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb4f5,	// (0x0000b4f5) cell_contacts_ai5_widget_pane_g

0xa3d4,	// (0x0000a3d4) cell_contacts_ai5_widget_pane_t1

0x139c,	// (0x0000139c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf231,	// (0x0000f231) settings_container_pane

0x2619,	// (0x00002619) listscroll_set_pane_copy1

0x5a2c,	// (0x00005a2c) scroll_pane_cp121_copy1

0xa457,	// (0x0000a457) set_content_pane_copy1

0xf23d,	// (0x0000f23d) aid_height_set_list_copy1_ParamLimits

0xf23d,	// (0x0000f23d) aid_height_set_list_copy1

0x4f19,	// (0x00004f19) aid_size_parent_copy1_ParamLimits

0x4f19,	// (0x00004f19) aid_size_parent_copy1

0xf249,	// (0x0000f249) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf249,	// (0x0000f249) button_value_adjust_pane_cp6_copy1

0x2b90,	// (0x00002b90) list_highlight_pane_cp2_copy1_ParamLimits

0x2b90,	// (0x00002b90) list_highlight_pane_cp2_copy1

0xf25d,	// (0x0000f25d) list_set_pane_copy1_ParamLimits

0xf25d,	// (0x0000f25d) list_set_pane_copy1

0xf1cc,	// (0x0000f1cc) main_pane_set_t1_copy1_ParamLimits

0xf1cc,	// (0x0000f1cc) main_pane_set_t1_copy1

0xf206,	// (0x0000f206) main_pane_set_t2_copy1_ParamLimits

0xf206,	// (0x0000f206) main_pane_set_t2_copy1

0xf30a,	// (0x0000f30a) main_pane_set_t3_copy1

0xf318,	// (0x0000f318) main_pane_set_t4_copy1

0xf225,	// (0x0000f225) set_content_pane_g1_copy1_ParamLimits

0xf225,	// (0x0000f225) set_content_pane_g1_copy1

0xf326,	// (0x0000f326) setting_code_pane_copy1

0xa550,	// (0x0000a550) setting_slider_graphic_pane_copy1

0xa550,	// (0x0000a550) setting_slider_pane_copy1

0xa550,	// (0x0000a550) setting_text_pane_copy1

0xa550,	// (0x0000a550) setting_volume_pane_copy1

0xf326,	// (0x0000f326) settings_code_pane_cp2_copy1

0xf32e,	// (0x0000f32e) settings_code_pane_cp_copy1_ParamLimits

0xf32e,	// (0x0000f32e) settings_code_pane_cp_copy1

0xf342,	// (0x0000f342) volume_set_pane_copy1

0xf34a,	// (0x0000f34a) volume_set_pane_g10_copy1

0xf352,	// (0x0000f352) volume_set_pane_g1_copy1

0xf35a,	// (0x0000f35a) volume_set_pane_g2_copy1

0xf362,	// (0x0000f362) volume_set_pane_g3_copy1

0xf36a,	// (0x0000f36a) volume_set_pane_g4_copy1

0xf372,	// (0x0000f372) volume_set_pane_g5_copy1

0xf37a,	// (0x0000f37a) volume_set_pane_g6_copy1

0xf382,	// (0x0000f382) volume_set_pane_g7_copy1

0xf38a,	// (0x0000f38a) volume_set_pane_g8_copy1

0xf392,	// (0x0000f392) volume_set_pane_g9_copy1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1_ParamLimits

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1

0xa5c4,	// (0x0000a5c4) setting_slider_pane_t1_copy1_ParamLimits

0xa5c4,	// (0x0000a5c4) setting_slider_pane_t1_copy1

0xf39a,	// (0x0000f39a) setting_slider_pane_t2_copy1_ParamLimits

0xf39a,	// (0x0000f39a) setting_slider_pane_t2_copy1

0xf3b4,	// (0x0000f3b4) setting_slider_pane_t3_copy1_ParamLimits

0xf3b4,	// (0x0000f3b4) setting_slider_pane_t3_copy1

0xf3cc,	// (0x0000f3cc) slider_set_pane_copy1_ParamLimits

0xf3cc,	// (0x0000f3cc) slider_set_pane_copy1

0x14c5,	// (0x000014c5) set_opt_bg_pane_g1_copy2

0x14cd,	// (0x000014cd) set_opt_bg_pane_g2_copy2

0xa62a,	// (0x0000a62a) set_opt_bg_pane_g3_copy2

0x14dd,	// (0x000014dd) set_opt_bg_pane_g4_copy2

0x14e5,	// (0x000014e5) set_opt_bg_pane_g5_copy2

0x14ed,	// (0x000014ed) set_opt_bg_pane_g6_copy2

0xf3e2,	// (0x0000f3e2) set_opt_bg_pane_g7_copy2

0xa63c,	// (0x0000a63c) set_opt_bg_pane_g8_copy2

0xa646,	// (0x0000a646) set_opt_bg_pane_g9_copy2

0xa650,	// (0x0000a650) aid_size_touch_slider_mark_copy1_ParamLimits

0xa650,	// (0x0000a650) aid_size_touch_slider_mark_copy1

0xa664,	// (0x0000a664) slider_set_pane_g1_copy1

0xa66d,	// (0x0000a66d) slider_set_pane_g2_copy1

0x4e82,	// (0x00004e82) slider_set_pane_g3_copy1_ParamLimits

0x4e82,	// (0x00004e82) slider_set_pane_g3_copy1

0x4e96,	// (0x00004e96) slider_set_pane_g4_copy1_ParamLimits

0x4e96,	// (0x00004e96) slider_set_pane_g4_copy1

0x4eae,	// (0x00004eae) slider_set_pane_g5_copy1_ParamLimits

0x4eae,	// (0x00004eae) slider_set_pane_g5_copy1

0x4e82,	// (0x00004e82) slider_set_pane_g6_copy1_ParamLimits

0x4e82,	// (0x00004e82) slider_set_pane_g6_copy1

0xf3ea,	// (0x0000f3ea) slider_set_pane_g7_copy1_ParamLimits

0xf3ea,	// (0x0000f3ea) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa68b,	// (0x0000a68b) setting_slider_graphic_pane_g1_copy1

0xf400,	// (0x0000f400) setting_slider_graphic_pane_t1_copy1

0xf410,	// (0x0000f410) setting_slider_graphic_pane_t2_copy1

0xf420,	// (0x0000f420) slider_set_pane_cp_copy1

0xa6c4,	// (0x0000a6c4) input_focus_pane_cp1_copy1

0xa6cd,	// (0x0000a6cd) list_set_text_pane_copy1

0xa6d5,	// (0x0000a6d5) setting_text_pane_g1_copy1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1

0xa6c4,	// (0x0000a6c4) input_focus_pane_cp2_copy1

0xa6d5,	// (0x0000a6d5) setting_code_pane_g1_copy1

0xf428,	// (0x0000f428) setting_code_pane_t1_copy1

0x5856,	// (0x00005856) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xc24e,	// (0x0000c24e) list_set_graphic_pane_g1_copy1_ParamLimits

0xc24e,	// (0x0000c24e) list_set_graphic_pane_g1_copy1

0xf436,	// (0x0000f436) list_set_graphic_pane_g2_copy1

0xc266,	// (0x0000c266) list_set_graphic_pane_t1_copy1_ParamLimits

0xc266,	// (0x0000c266) list_set_graphic_pane_t1_copy1

0x669c,	// (0x0000669c) rs_clock_indi_pane_g1

0xa706,	// (0x0000a706) rs_clock_indi_pane_t1

0xa714,	// (0x0000a714) rs_indi_pane

0xa71c,	// (0x0000a71c) rs_indi_pane_g1

0xa725,	// (0x0000a725) rs_indi_pane_g2

0xa72e,	// (0x0000a72e) rs_indi_pane_g3

0x0002,

0xb4fc,	// (0x0000b4fc) rs_indi_pane_g

0x2619,	// (0x00002619) bg_popup_preview_window_pane_cp03

0xa737,	// (0x0000a737) popup_fep_tooltip_window_t1

0x78a5,	// (0x000078a5) popup_note2_window_g2_ParamLimits

0x78a5,	// (0x000078a5) popup_note2_window_g2

0x0001,

0xb295,	// (0x0000b295) popup_note2_window_g_ParamLimits

0xb295,	// (0x0000b295) popup_note2_window_g

0x7e9b,	// (0x00007e9b) bg_popup_sub_pane_cp11_ParamLimits

0x7ea8,	// (0x00007ea8) cell_ai3_links_pane_g1_ParamLimits

0x7ebf,	// (0x00007ebf) cell_ai3_links_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1_ParamLimits

0x252a,	// (0x0000252a) cell_graphic_popup_pane_cp2_ParamLimits

0x252a,	// (0x0000252a) cell_graphic_popup_pane_cp2

0xa745,	// (0x0000a745) cell_graphic_popup_pane_g1_cp2

0x0b6c,	// (0x00000b6c) cell_graphic_popup_pane_g2_cp2

0xa74d,	// (0x0000a74d) cell_graphic_popup_pane_g3_cp2

0xa755,	// (0x0000a755) cell_graphic_popup_pane_t2_cp2

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp3_cp2

0x1a40,	// (0x00001a40) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x139c,	// (0x0000139c) main_tmo_pane_ParamLimits

0xdf67,	// (0x0000df67) popup_tmo_big_image_note_window

0x9bfd,	// (0x00009bfd) cell_ai5_widget_list_pane

0x9c05,	// (0x00009c05) cell_ai5_widget_lrg_icon_pane

0xf18b,	// (0x0000f18b) tmo_note_info_pane_t1_ParamLimits

0xf1a0,	// (0x0000f1a0) tmo_note_info_pane_t2_ParamLimits

0xf1b7,	// (0x0000f1b7) tmo_note_info_pane_t3_ParamLimits

0xa31b,	// (0x0000a31b) tmo_note_info_pane_t4_ParamLimits

0xa32d,	// (0x0000a32d) tmo_note_info_pane_t5_ParamLimits

0xf70a,	// (0x0000f70a) tmo_note_info_pane_t_ParamLimits

0xf231,	// (0x0000f231) settings_container_pane_ParamLimits

0xa6bc,	// (0x0000a6bc) indicator_popup_pane_cp5

0xa6bc,	// (0x0000a6bc) indicator_popup_pane_cp6

0x5856,	// (0x00005856) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa763,	// (0x0000a763) popup_tmo_big_image_note_window_g1

0xa76d,	// (0x0000a76d) popup_tmo_big_image_note_window_t1

0xa77d,	// (0x0000a77d) popup_tmo_big_image_note_window_t2

0xa78d,	// (0x0000a78d) popup_tmo_big_image_note_window_t3

0x0002,

0xb503,	// (0x0000b503) popup_tmo_big_image_note_window_t

0x669c,	// (0x0000669c) cell_ai5_widget_lrg_icon_pane_g1

0xa79d,	// (0x0000a79d) cell_ai5_widget_lrg_icon_pane_t1

0xa7ab,	// (0x0000a7ab) cell_ai5_widget_list_row_pane_ParamLimits

0xa7ab,	// (0x0000a7ab) cell_ai5_widget_list_row_pane

0xa7c2,	// (0x0000a7c2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa7c2,	// (0x0000a7c2) cell_ai5_widget_list_row_pane_g1

0xa7cf,	// (0x0000a7cf) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa7cf,	// (0x0000a7cf) cell_ai5_widget_list_row_pane_t1

0xa800,	// (0x0000a800) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa800,	// (0x0000a800) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb50a,	// (0x0000b50a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb50a,	// (0x0000b50a) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa844,	// (0x0000a844) popup_fep_char_pre_window

0xa84c,	// (0x0000a84c) popup_fep_ituss_window

0xa86d,	// (0x0000a86d) popup_fep_vkbss_window

0xa88c,	// (0x0000a88c) grid_vkbss_keypad_pane_ParamLimits

0xa88c,	// (0x0000a88c) grid_vkbss_keypad_pane

0xa89c,	// (0x0000a89c) ituss_keypad_pane

0xa8b7,	// (0x0000a8b7) aid_vkbss_key_offset_ParamLimits

0xa8b7,	// (0x0000a8b7) aid_vkbss_key_offset

0xa8c3,	// (0x0000a8c3) cell_vkbss_key_pane_ParamLimits

0xa8c3,	// (0x0000a8c3) cell_vkbss_key_pane

0xa8d9,	// (0x0000a8d9) bg_cell_vkbss_key_g1_ParamLimits

0xa8d9,	// (0x0000a8d9) bg_cell_vkbss_key_g1

0xa8e5,	// (0x0000a8e5) cell_vkbss_key_3p_pane_ParamLimits

0xa8e5,	// (0x0000a8e5) cell_vkbss_key_3p_pane

0xa8ff,	// (0x0000a8ff) cell_vkbss_key_g1_ParamLimits

0xa8ff,	// (0x0000a8ff) cell_vkbss_key_g1

0xa919,	// (0x0000a919) cell_vkbss_key_t1_ParamLimits

0xa919,	// (0x0000a919) cell_vkbss_key_t1

0xa944,	// (0x0000a944) cell_ituss_key_pane_ParamLimits

0xa944,	// (0x0000a944) cell_ituss_key_pane

0xa955,	// (0x0000a955) bg_cell_ituss_key_g1_ParamLimits

0xa955,	// (0x0000a955) bg_cell_ituss_key_g1

0xa961,	// (0x0000a961) cell_ituss_key_pane_g1_ParamLimits

0xa961,	// (0x0000a961) cell_ituss_key_pane_g1

0xa97b,	// (0x0000a97b) cell_ituss_key_pane_g2_ParamLimits

0xa97b,	// (0x0000a97b) cell_ituss_key_pane_g2

0x0002,

0xb511,	// (0x0000b511) cell_ituss_key_pane_g_ParamLimits

0xb511,	// (0x0000b511) cell_ituss_key_pane_g

0xa9b9,	// (0x0000a9b9) cell_ituss_key_t1_ParamLimits

0xa9b9,	// (0x0000a9b9) cell_ituss_key_t1

0xa9f3,	// (0x0000a9f3) cell_ituss_key_t2_ParamLimits

0xa9f3,	// (0x0000a9f3) cell_ituss_key_t2

0xaa24,	// (0x0000aa24) cell_ituss_key_t3_ParamLimits

0xaa24,	// (0x0000aa24) cell_ituss_key_t3

0xa9f3,	// (0x0000a9f3) cell_ituss_key_t4_ParamLimits

0xa9f3,	// (0x0000a9f3) cell_ituss_key_t4

0x0004,

0xb518,	// (0x0000b518) cell_ituss_key_t_ParamLimits

0xb518,	// (0x0000b518) cell_ituss_key_t

0xaa67,	// (0x0000aa67) cell_vkbss_key_3p_pane_g1

0xaa6f,	// (0x0000aa6f) cell_vkbss_key_3p_pane_g2

0xaa77,	// (0x0000aa77) cell_vkbss_key_3p_pane_g3

0x0002,

0xb523,	// (0x0000b523) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xaa7f,	// (0x0000aa7f) popup_fep_char_pre_window_t1

0xef71,	// (0x0000ef71) main_ai5_sk_pane

0xa3a7,	// (0x0000a3a7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3b3,	// (0x0000a3b3) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x71a7,	// (0x000071a7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa3c8,	// (0x0000a3c8) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb4f5,	// (0x0000b4f5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa3d4,	// (0x0000a3d4) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x139c,	// (0x0000139c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf43e,	// (0x0000f43e) main_ai5_sk_pane_g1

0x3da3,	// (0x00003da3) popup_query_code_window_g1

0xa862,	// (0x0000a862) popup_fep_vkb_icf_pane

0xa876,	// (0x0000a876) popup_fep_vtchi_icf_pane

0xaa97,	// (0x0000aa97) bg_icf_pane

0xaaa3,	// (0x0000aaa3) list_vkb_icf_pane

0xaab2,	// (0x0000aab2) bg_icf_pane_cp01

0xaac5,	// (0x0000aac5) vtchi_icf_list_pane

0xaad5,	// (0x0000aad5) list_vkb_icf_pane_t1_ParamLimits

0xaad5,	// (0x0000aad5) list_vkb_icf_pane_t1

0xaaeb,	// (0x0000aaeb) vtchi_icf_list_pane_t1_ParamLimits

0xaaeb,	// (0x0000aaeb) vtchi_icf_list_pane_t1

0xa84c,	// (0x0000a84c) popup_fep_ituss_window_ParamLimits

0xa876,	// (0x0000a876) popup_fep_vtchi_icf_pane_ParamLimits

0xa89c,	// (0x0000a89c) ituss_keypad_pane_ParamLimits

0xa8ab,	// (0x0000a8ab) ituss_sks_pane

0xaa97,	// (0x0000aa97) bg_icf_pane_ParamLimits

0xa828,	// (0x0000a828) icf_edit_indi_pane_ParamLimits

0xa828,	// (0x0000a828) icf_edit_indi_pane

0xaaa3,	// (0x0000aaa3) list_vkb_icf_pane_ParamLimits

0xaab2,	// (0x0000aab2) bg_icf_pane_cp01_ParamLimits

0xa837,	// (0x0000a837) icf_edit_indi_pane_cp01_ParamLimits

0xa837,	// (0x0000a837) icf_edit_indi_pane_cp01

0xaacd,	// (0x0000aacd) vtchi_query_pane

0x6b2e,	// (0x00006b2e) icf_edit_indi_pane_g1_ParamLimits

0x6b2e,	// (0x00006b2e) icf_edit_indi_pane_g1

0xab6f,	// (0x0000ab6f) icf_edit_indi_pane_g2_ParamLimits

0xab6f,	// (0x0000ab6f) icf_edit_indi_pane_g2

0x0001,

0xb53b,	// (0x0000b53b) icf_edit_indi_pane_g_ParamLimits

0xb53b,	// (0x0000b53b) icf_edit_indi_pane_g

0xab7e,	// (0x0000ab7e) icf_edit_indi_pane_t1

0xab05,	// (0x0000ab05) bg_input_focus_pane_cp042

0x0d50,	// (0x00000d50) vtchi_button_pane

0xab0e,	// (0x0000ab0e) vtchi_query_pane_t1

0xab1c,	// (0x0000ab1c) vtchi_query_pane_t2

0xab2a,	// (0x0000ab2a) vtchi_query_pane_t3

0x0002,

0xb52a,	// (0x0000b52a) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xab38,	// (0x0000ab38) vtchi_button_pane_g1

0xab40,	// (0x0000ab40) ituss_sks_pane_g1

0xab4b,	// (0x0000ab4b) ituss_sks_pane_g2

0x0001,

0xb531,	// (0x0000b531) ituss_sks_pane_g

0xab53,	// (0x0000ab53) ituss_sks_pane_t1

0xab61,	// (0x0000ab61) ituss_sks_pane_t2

0x0001,

0xb536,	// (0x0000b536) ituss_sks_pane_t

0x606b,	// (0x0000606b) indicator_nsta_pane_cp_g1

0x6074,	// (0x00006074) indicator_nsta_pane_cp_g2

0x607c,	// (0x0000607c) indicator_nsta_pane_cp_g3

0x6084,	// (0x00006084) indicator_nsta_pane_cp_g4

0x608c,	// (0x0000608c) indicator_nsta_pane_cp_g5

0x608c,	// (0x0000608c) indicator_nsta_pane_cp_g6

0x0005,

0xb0df,	// (0x0000b0df) indicator_nsta_pane_cp_g

0xed17,	// (0x0000ed17) cell_graphic2_pane_t2_ParamLimits

0xed17,	// (0x0000ed17) cell_graphic2_pane_t2

0x0001,

0xf6d5,	// (0x0000f6d5) cell_graphic2_pane_t_ParamLimits

0xf6d5,	// (0x0000f6d5) cell_graphic2_pane_t

0xed4d,	// (0x0000ed4d) cell_graphic2_control_pane_t1

0xc191,	// (0x0000c191) signal_pane_g3_ParamLimits

0xc191,	// (0x0000c191) signal_pane_g3

0xc1a5,	// (0x0000c1a5) signal_pane_g4_ParamLimits

0xc1a5,	// (0x0000c1a5) signal_pane_g4

0xa812,	// (0x0000a812) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa812,	// (0x0000a812) cell_ai5_widget_list_row_pane_t3

0xa9a7,	// (0x0000a9a7) cell_ituss_key_pane_t1_ParamLimits

0xa9a7,	// (0x0000a9a7) cell_ituss_key_pane_t1

0x39b8,	// (0x000039b8) form_field_data_wide_pane_vc_t2_ParamLimits

0x39b8,	// (0x000039b8) form_field_data_wide_pane_vc_t2

0x39cc,	// (0x000039cc) form_field_data_wide_pane_vc_t3_ParamLimits

0x39cc,	// (0x000039cc) form_field_data_wide_pane_vc_t3

0x0002,

0xae3b,	// (0x0000ae3b) form_field_data_wide_pane_vc_t_ParamLimits

0xae3b,	// (0x0000ae3b) form_field_data_wide_pane_vc_t

0x5d33,	// (0x00005d33) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5d33,	// (0x00005d33) form_field_slider_wide_pane_vc_t3

0x5e11,	// (0x00005e11) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5e11,	// (0x00005e11) form_field_popup_wide_pane_vc_t2

0x5e28,	// (0x00005e28) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5e28,	// (0x00005e28) form_field_popup_wide_pane_vc_t3

0x0002,

0xb0ce,	// (0x0000b0ce) form_field_popup_wide_pane_vc_t_ParamLimits

0xb0ce,	// (0x0000b0ce) form_field_popup_wide_pane_vc_t

0xefe7,	// (0x0000efe7) aid_fshwr2_btn_pane_ParamLimits

0xeff8,	// (0x0000eff8) aid_fshwr2_syb_pane_ParamLimits

0xf009,	// (0x0000f009) aid_fshwr2_txt_pane_ParamLimits

0x139c,	// (0x0000139c) fshwr2_bg_pane_ParamLimits

0xf015,	// (0x0000f015) fshwr2_func_candi_pane_ParamLimits

0xf034,	// (0x0000f034) fshwr2_hwr_syb_pane_ParamLimits

0xf04f,	// (0x0000f04f) fshwr2_icf_pane_ParamLimits

0x5c99,	// (0x00005c99) list_double_graphic_pane_vc_g4_ParamLimits

0x5c99,	// (0x00005c99) list_double_graphic_pane_vc_g4

0xa99b,	// (0x0000a99b) cell_ituss_key_pane_g3_ParamLimits

0xa99b,	// (0x0000a99b) cell_ituss_key_pane_g3

0xaa55,	// (0x0000aa55) cell_ituss_key_t5_ParamLimits

0xaa55,	// (0x0000aa55) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal

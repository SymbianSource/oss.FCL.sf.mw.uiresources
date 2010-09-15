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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000011f };

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
0xb809,	// (0x0000b928) Screen

0xb815,	// (0x0000b934) application_window_ParamLimits

0xb815,	// (0x0000b934) application_window

0xf4ff,	// (0x0000f61e) screen_g1

0xb84d,	// (0x0000b96c) area_bottom_pane_ParamLimits

0xb84d,	// (0x0000b96c) area_bottom_pane

0x0025,	// (0x00000144) area_top_pane_ParamLimits

0x0025,	// (0x00000144) area_top_pane

0x00b9,	// (0x000001d8) main_pane_ParamLimits

0x00b9,	// (0x000001d8) main_pane

0x0174,	// (0x00000293) misc_graphics

0xcdfe,	// (0x0000cf1d) battery_pane_ParamLimits

0xcdfe,	// (0x0000cf1d) battery_pane

0x404e,	// (0x0000416d) bg_status_flat_pane_g8

0x4056,	// (0x00004175) bg_status_flat_pane_g9

0x31a7,	// (0x000032c6) context_pane_ParamLimits

0x31a7,	// (0x000032c6) context_pane

0xcf69,	// (0x0000d088) navi_pane_ParamLimits

0xcf69,	// (0x0000d088) navi_pane

0xcfe7,	// (0x0000d106) signal_pane_ParamLimits

0xcfe7,	// (0x0000d106) signal_pane

0x0008,

0xf843,	// (0x0000f962) bg_status_flat_pane_g

0xd077,	// (0x0000d196) status_pane_g1_ParamLimits

0xd077,	// (0x0000d196) status_pane_g1

0xd08d,	// (0x0000d1ac) status_pane_g2_ParamLimits

0xd08d,	// (0x0000d1ac) status_pane_g2

0x33ce,	// (0x000034ed) status_pane_g3_ParamLimits

0x33ce,	// (0x000034ed) status_pane_g3

0x0004,

0xf776,	// (0x0000f895) status_pane_g_ParamLimits

0xf776,	// (0x0000f895) status_pane_g

0xd099,	// (0x0000d1b8) title_pane_ParamLimits

0xd099,	// (0x0000d1b8) title_pane

0xd0fc,	// (0x0000d21b) uni_indicator_pane_ParamLimits

0xd0fc,	// (0x0000d21b) uni_indicator_pane

0x2a44,	// (0x00002b63) bg_list_pane_ParamLimits

0x2a44,	// (0x00002b63) bg_list_pane

0x2a64,	// (0x00002b83) find_pane

0x3795,	// (0x000038b4) listscroll_app_pane_ParamLimits

0x3795,	// (0x000038b4) listscroll_app_pane

0x2a78,	// (0x00002b97) listscroll_form_pane

0x2a80,	// (0x00002b9f) listscroll_gen_pane_ParamLimits

0x2a80,	// (0x00002b9f) listscroll_gen_pane

0x2a94,	// (0x00002bb3) listscroll_set_pane

0x4e0d,	// (0x00004f2c) main_idle_act_pane

0x251d,	// (0x0000263c) main_idle_trad_pane

0x251d,	// (0x0000263c) main_list_empty_pane

0x2a6c,	// (0x00002b8b) main_midp_pane

0x2aae,	// (0x00002bcd) main_pane_g1_ParamLimits

0x2aae,	// (0x00002bcd) main_pane_g1

0xc6cb,	// (0x0000c7ea) popup_ai_message_window_ParamLimits

0xc6cb,	// (0x0000c7ea) popup_ai_message_window

0xc75c,	// (0x0000c87b) popup_fep_china_uni_window_ParamLimits

0xc75c,	// (0x0000c87b) popup_fep_china_uni_window

0x2bc6,	// (0x00002ce5) popup_fep_japan_candidate_window_ParamLimits

0x2bc6,	// (0x00002ce5) popup_fep_japan_candidate_window

0x2be6,	// (0x00002d05) popup_fep_japan_predictive_window_ParamLimits

0x2be6,	// (0x00002d05) popup_fep_japan_predictive_window

0xc7b8,	// (0x0000c8d7) popup_find_window

0xc7d5,	// (0x0000c8f4) popup_grid_graphic_window_ParamLimits

0xc7d5,	// (0x0000c8f4) popup_grid_graphic_window

0x2c4f,	// (0x00002d6e) popup_large_graphic_colour_window

0xc879,	// (0x0000c998) popup_menu_window_ParamLimits

0xc879,	// (0x0000c998) popup_menu_window

0xca4b,	// (0x0000cb6a) popup_note_image_window

0xca11,	// (0x0000cb30) popup_note_wait_window_ParamLimits

0xca11,	// (0x0000cb30) popup_note_wait_window

0xca63,	// (0x0000cb82) popup_note_window_ParamLimits

0xca63,	// (0x0000cb82) popup_note_window

0xcb09,	// (0x0000cc28) popup_query_code_window_ParamLimits

0xcb09,	// (0x0000cc28) popup_query_code_window

0x2e97,	// (0x00002fb6) popup_query_data_code_window_ParamLimits

0x2e97,	// (0x00002fb6) popup_query_data_code_window

0xcb43,	// (0x0000cc62) popup_query_data_window_ParamLimits

0xcb43,	// (0x0000cc62) popup_query_data_window

0xcbc5,	// (0x0000cce4) popup_query_sat_info_window_ParamLimits

0xcbc5,	// (0x0000cce4) popup_query_sat_info_window

0xcc5c,	// (0x0000cd7b) popup_snote_single_graphic_window_ParamLimits

0xcc5c,	// (0x0000cd7b) popup_snote_single_graphic_window

0xcc5c,	// (0x0000cd7b) popup_snote_single_text_window_ParamLimits

0xcc5c,	// (0x0000cd7b) popup_snote_single_text_window

0x2f1e,	// (0x0000303d) popup_sub_window_general

0x304e,	// (0x0000316d) popup_window_general_ParamLimits

0x304e,	// (0x0000316d) popup_window_general

0x3063,	// (0x00003182) power_save_pane

0xc525,	// (0x0000c644) control_pane_g1_ParamLimits

0xc525,	// (0x0000c644) control_pane_g1

0xc54e,	// (0x0000c66d) control_pane_g2_ParamLimits

0xc54e,	// (0x0000c66d) control_pane_g2

0x28db,	// (0x000029fa) control_pane_g3_ParamLimits

0x28db,	// (0x000029fa) control_pane_g3

0x0007,

0xf75e,	// (0x0000f87d) control_pane_g_ParamLimits

0xf75e,	// (0x0000f87d) control_pane_g

0xc5b6,	// (0x0000c6d5) control_pane_t1_ParamLimits

0xc5b6,	// (0x0000c6d5) control_pane_t1

0xc61e,	// (0x0000c73d) control_pane_t2_ParamLimits

0xc61e,	// (0x0000c73d) control_pane_t2

0x0002,

0xf76f,	// (0x0000f88e) control_pane_t_ParamLimits

0xf76f,	// (0x0000f88e) control_pane_t

0x27b2,	// (0x000028d1) navi_navi_volume_pane_cp1

0x27ba,	// (0x000028d9) status_small_icon_pane

0x27c2,	// (0x000028e1) status_small_pane_g1_ParamLimits

0x27c2,	// (0x000028e1) status_small_pane_g1

0x27f6,	// (0x00002915) status_small_pane_g2_ParamLimits

0x27f6,	// (0x00002915) status_small_pane_g2

0x2802,	// (0x00002921) status_small_pane_g3_ParamLimits

0x2802,	// (0x00002921) status_small_pane_g3

0xc4ed,	// (0x0000c60c) status_small_pane_g4_ParamLimits

0xc4ed,	// (0x0000c60c) status_small_pane_g4

0xc4fb,	// (0x0000c61a) status_small_pane_g5_ParamLimits

0xc4fb,	// (0x0000c61a) status_small_pane_g5

0x2828,	// (0x00002947) status_small_pane_g6_ParamLimits

0x2828,	// (0x00002947) status_small_pane_g6

0x0007,

0xf74d,	// (0x0000f86c) status_small_pane_g_ParamLimits

0xf74d,	// (0x0000f86c) status_small_pane_g

0x2857,	// (0x00002976) status_small_pane_t1

0xc511,	// (0x0000c630) status_small_wait_pane_ParamLimits

0xc511,	// (0x0000c630) status_small_wait_pane

0xc37d,	// (0x0000c49c) aid_levels_signal_ParamLimits

0xc37d,	// (0x0000c49c) aid_levels_signal

0xc395,	// (0x0000c4b4) signal_pane_g1_ParamLimits

0xc395,	// (0x0000c4b4) signal_pane_g1

0xc3b0,	// (0x0000c4cf) signal_pane_g2_ParamLimits

0xc3b0,	// (0x0000c4cf) signal_pane_g2

0x0003,

0xf6de,	// (0x0000f7fd) signal_pane_g_ParamLimits

0xf6de,	// (0x0000f7fd) signal_pane_g

0x1dcf,	// (0x00001eee) context_pane_g1

0xba2b,	// (0x0000bb4a) title_pane_g1

0xba62,	// (0x0000bb81) title_pane_t1

0x03b0,	// (0x000004cf) title_pane_t2

0x03d6,	// (0x000004f5) title_pane_t3

0x0002,

0xf532,	// (0x0000f651) title_pane_t

0xd124,	// (0x0000d243) aid_levels_battery_ParamLimits

0xd124,	// (0x0000d243) aid_levels_battery

0xd140,	// (0x0000d25f) battery_pane_g1_ParamLimits

0xd140,	// (0x0000d25f) battery_pane_g1

0xd15d,	// (0x0000d27c) battery_pane_g2_ParamLimits

0xd15d,	// (0x0000d27c) battery_pane_g2

0x0001,

0xf781,	// (0x0000f8a0) battery_pane_g_ParamLimits

0xf781,	// (0x0000f8a0) battery_pane_g

0xd3a6,	// (0x0000d4c5) uni_indicator_pane_g1

0xd3bc,	// (0x0000d4db) uni_indicator_pane_g2

0xd3d2,	// (0x0000d4f1) uni_indicator_pane_g3

0x0005,

0xf8eb,	// (0x0000fa0a) uni_indicator_pane_g

0x2392,	// (0x000024b1) navi_icon_pane_ParamLimits

0x2392,	// (0x000024b1) navi_icon_pane

0x22db,	// (0x000023fa) navi_midp_pane

0x23ae,	// (0x000024cd) navi_navi_pane

0x23b8,	// (0x000024d7) navi_text_pane_ParamLimits

0x23b8,	// (0x000024d7) navi_text_pane

0xf4ff,	// (0x0000f61e) status_small_wait_pane_g1

0x08d6,	// (0x000009f5) status_small_wait_pane_g2

0x0001,

0xf8e6,	// (0x0000fa05) status_small_wait_pane_g

0x480d,	// (0x0000492c) navi_navi_icon_text_pane

0x4815,	// (0x00004934) navi_navi_pane_g1_ParamLimits

0x4815,	// (0x00004934) navi_navi_pane_g1

0x4827,	// (0x00004946) navi_navi_pane_g2_ParamLimits

0x4827,	// (0x00004946) navi_navi_pane_g2

0x0001,

0xf8b4,	// (0x0000f9d3) navi_navi_pane_g_ParamLimits

0xf8b4,	// (0x0000f9d3) navi_navi_pane_g

0x4839,	// (0x00004958) navi_navi_tabs_pane

0x4842,	// (0x00004961) navi_navi_text_pane

0x480d,	// (0x0000492c) navi_navi_volume_pane

0x47e9,	// (0x00004908) navi_text_pane_t1

0x47dd,	// (0x000048fc) navi_icon_pane_g1

0x4730,	// (0x0000484f) navi_navi_text_pane_t1

0x471f,	// (0x0000483e) navi_navi_volume_pane_g1

0x4727,	// (0x00004846) volume_small_pane

0x4685,	// (0x000047a4) navi_navi_icon_text_pane_g1

0x468d,	// (0x000047ac) navi_navi_icon_text_pane_t1

0x23ae,	// (0x000024cd) navi_tabs_2_long_pane

0x23ae,	// (0x000024cd) navi_tabs_2_pane

0x23ae,	// (0x000024cd) navi_tabs_3_long_pane

0x23ae,	// (0x000024cd) navi_tabs_3_pane

0x23ae,	// (0x000024cd) navi_tabs_4_pane

0x45e4,	// (0x00004703) tabs_2_active_pane_ParamLimits

0x45e4,	// (0x00004703) tabs_2_active_pane

0x45f4,	// (0x00004713) tabs_2_passive_pane_ParamLimits

0x45f4,	// (0x00004713) tabs_2_passive_pane

0x45b2,	// (0x000046d1) tabs_3_active_pane_ParamLimits

0x45b2,	// (0x000046d1) tabs_3_active_pane

0x45c2,	// (0x000046e1) tabs_3_passive_pane_ParamLimits

0x45c2,	// (0x000046e1) tabs_3_passive_pane

0x45d3,	// (0x000046f2) tabs_3_passive_pane_cp_ParamLimits

0x45d3,	// (0x000046f2) tabs_3_passive_pane_cp

0x456e,	// (0x0000468d) tabs_4_active_pane_ParamLimits

0x456e,	// (0x0000468d) tabs_4_active_pane

0x457f,	// (0x0000469e) tabs_4_passive_pane_ParamLimits

0x457f,	// (0x0000469e) tabs_4_passive_pane

0x4590,	// (0x000046af) tabs_4_passive_pane_cp_ParamLimits

0x4590,	// (0x000046af) tabs_4_passive_pane_cp

0x45a1,	// (0x000046c0) tabs_4_passive_pane_cp2_ParamLimits

0x45a1,	// (0x000046c0) tabs_4_passive_pane_cp2

0x454a,	// (0x00004669) tabs_2_long_active_pane_ParamLimits

0x454a,	// (0x00004669) tabs_2_long_active_pane

0x455c,	// (0x0000467b) tabs_2_long_passive_pane_ParamLimits

0x455c,	// (0x0000467b) tabs_2_long_passive_pane

0x450b,	// (0x0000462a) tabs_3_long_active_pane_ParamLimits

0x450b,	// (0x0000462a) tabs_3_long_active_pane

0x451e,	// (0x0000463d) tabs_3_long_passive_pane_ParamLimits

0x451e,	// (0x0000463d) tabs_3_long_passive_pane

0x4537,	// (0x00004656) tabs_3_long_passive_pane_cp_ParamLimits

0x4537,	// (0x00004656) tabs_3_long_passive_pane_cp

0x44b1,	// (0x000045d0) volume_small_pane_g1

0x44ba,	// (0x000045d9) volume_small_pane_g2

0x44c3,	// (0x000045e2) volume_small_pane_g3

0x44cc,	// (0x000045eb) volume_small_pane_g4

0x44d5,	// (0x000045f4) volume_small_pane_g5

0x44de,	// (0x000045fd) volume_small_pane_g6

0x44e7,	// (0x00004606) volume_small_pane_g7

0x44f0,	// (0x0000460f) volume_small_pane_g8

0x44f9,	// (0x00004618) volume_small_pane_g9

0x4502,	// (0x00004621) volume_small_pane_g10

0x0009,

0xf880,	// (0x0000f99f) volume_small_pane_g

0x070e,	// (0x0000082d) bg_active_tab_pane_cp2_ParamLimits

0x070e,	// (0x0000082d) bg_active_tab_pane_cp2

0x03f6,	// (0x00000515) tabs_3_active_pane_g1

0xbaee,	// (0x0000bc0d) tabs_3_active_pane_t1

0x070e,	// (0x0000082d) bg_passive_tab_pane_cp2_ParamLimits

0x070e,	// (0x0000082d) bg_passive_tab_pane_cp2

0x03f6,	// (0x00000515) tabs_3_passive_pane_g1

0xbaee,	// (0x0000bc0d) tabs_3_passive_pane_t1

0x070e,	// (0x0000082d) bg_active_tab_pane_cp3_ParamLimits

0x070e,	// (0x0000082d) bg_active_tab_pane_cp3

0x0410,	// (0x0000052f) tabs_4_active_pane_g1

0xbb00,	// (0x0000bc1f) tabs_4_active_pane_t1

0x070e,	// (0x0000082d) bg_passive_tab_pane_cp3_ParamLimits

0x070e,	// (0x0000082d) bg_passive_tab_pane_cp3

0x0410,	// (0x0000052f) tabs_4_1_passive_pane_g1

0xbb00,	// (0x0000bc1f) tabs_4_1_passive_pane_t1

0x2a6c,	// (0x00002b8b) list_highlight_pane_cp2

0xd458,	// (0x0000d577) list_set_pane_ParamLimits

0xd458,	// (0x0000d577) list_set_pane

0xd4f2,	// (0x0000d611) main_pane_set_t1_ParamLimits

0xd4f2,	// (0x0000d611) main_pane_set_t1

0xd512,	// (0x0000d631) main_pane_set_t2_ParamLimits

0xd512,	// (0x0000d631) main_pane_set_t2

0xd526,	// (0x0000d645) main_pane_set_t3_ParamLimits

0xd526,	// (0x0000d645) main_pane_set_t3

0xd538,	// (0x0000d657) main_pane_set_t4_ParamLimits

0xd538,	// (0x0000d657) main_pane_set_t4

0x0003,

0xf950,	// (0x0000fa6f) main_pane_set_t_ParamLimits

0xf950,	// (0x0000fa6f) main_pane_set_t

0xd54a,	// (0x0000d669) setting_code_pane

0xd554,	// (0x0000d673) setting_slider_graphic_pane

0xd554,	// (0x0000d673) setting_slider_pane

0xd554,	// (0x0000d673) setting_text_pane

0xd554,	// (0x0000d673) setting_volume_pane

0x042a,	// (0x00000549) volume_set_pane

0x03e8,	// (0x00000507) bg_set_opt_pane_cp

0x0432,	// (0x00000551) setting_slider_pane_t1

0x044b,	// (0x0000056a) setting_slider_pane_t2

0x0465,	// (0x00000584) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0000f658) setting_slider_pane_t

0x047d,	// (0x0000059c) slider_set_pane

0x0174,	// (0x00000293) bg_set_opt_pane_cp2

0x0493,	// (0x000005b2) setting_slider_graphic_pane_g1

0x049c,	// (0x000005bb) setting_slider_graphic_pane_t1

0x04ac,	// (0x000005cb) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0000f65f) setting_slider_graphic_pane_t

0x04bc,	// (0x000005db) slider_set_pane_cp

0x0174,	// (0x00000293) input_focus_pane_cp1

0x4df4,	// (0x00004f13) list_set_text_pane

0xf4ff,	// (0x0000f61e) setting_text_pane_g1

0x0174,	// (0x00000293) input_focus_pane_cp2

0xf4ff,	// (0x0000f61e) setting_code_pane_g1

0x04c4,	// (0x000005e3) setting_code_pane_t1

0x04d2,	// (0x000005f1) set_text_pane_t1_ParamLimits

0x04d2,	// (0x000005f1) set_text_pane_t1

0x13a6,	// (0x000014c5) set_opt_bg_pane_g1

0x13ae,	// (0x000014cd) set_opt_bg_pane_g2

0x4dce,	// (0x00004eed) set_opt_bg_pane_g3

0x13be,	// (0x000014dd) set_opt_bg_pane_g4

0x13c6,	// (0x000014e5) set_opt_bg_pane_g5

0x13ce,	// (0x000014ed) set_opt_bg_pane_g6

0x4dd8,	// (0x00004ef7) set_opt_bg_pane_g7

0x4de0,	// (0x00004eff) set_opt_bg_pane_g8

0x4dea,	// (0x00004f09) set_opt_bg_pane_g9

0x0008,

0xf93d,	// (0x0000fa5c) set_opt_bg_pane_g

0x4d5d,	// (0x00004e7c) slider_set_pane_g1

0x4d6a,	// (0x00004e89) slider_set_pane_g2

0x0006,

0xf92e,	// (0x0000fa4d) slider_set_pane_g

0x4bf3,	// (0x00004d12) volume_set_pane_g1

0x4bfb,	// (0x00004d1a) volume_set_pane_g2

0x4c03,	// (0x00004d22) volume_set_pane_g3

0x4c0b,	// (0x00004d2a) volume_set_pane_g4

0x4c13,	// (0x00004d32) volume_set_pane_g5

0x4c1b,	// (0x00004d3a) volume_set_pane_g6

0x4c23,	// (0x00004d42) volume_set_pane_g7

0x4c2b,	// (0x00004d4a) volume_set_pane_g8

0x4c33,	// (0x00004d52) volume_set_pane_g9

0x4c3b,	// (0x00004d5a) volume_set_pane_g10

0x0009,

0xf906,	// (0x0000fa25) volume_set_pane_g

0xbb12,	// (0x0000bc31) indicator_pane_ParamLimits

0xbb12,	// (0x0000bc31) indicator_pane

0xbb3a,	// (0x0000bc59) main_idle_pane_g2_ParamLimits

0xbb3a,	// (0x0000bc59) main_idle_pane_g2

0xbb72,	// (0x0000bc91) main_pane_idle_g1_ParamLimits

0xbb72,	// (0x0000bc91) main_pane_idle_g1

0x052d,	// (0x0000064c) popup_clock_digital_analogue_window_ParamLimits

0x052d,	// (0x0000064c) popup_clock_digital_analogue_window

0xbb99,	// (0x0000bcb8) soft_indicator_pane_ParamLimits

0xbb99,	// (0x0000bcb8) soft_indicator_pane

0xbbb3,	// (0x0000bcd2) wallpaper_pane_ParamLimits

0xbbb3,	// (0x0000bcd2) wallpaper_pane

0xf4ff,	// (0x0000f61e) wallpaper_pane_g1

0xbbc5,	// (0x0000bce4) indicator_pane_g1_ParamLimits

0xbbc5,	// (0x0000bce4) indicator_pane_g1

0x536f,	// (0x0000548e) navi_navi_icon_text_pane_srt_g1

0x057f,	// (0x0000069e) soft_indicator_pane_t1

0x0599,	// (0x000006b8) aid_ps_area_pane

0xbbdb,	// (0x0000bcfa) aid_ps_clock_pane

0x05b8,	// (0x000006d7) aid_ps_indicator_pane

0x05c4,	// (0x000006e3) indicator_ps_pane_ParamLimits

0x05c4,	// (0x000006e3) indicator_ps_pane

0x05d3,	// (0x000006f2) power_save_pane_g1_ParamLimits

0x05d3,	// (0x000006f2) power_save_pane_g1

0x05df,	// (0x000006fe) power_save_pane_g2_ParamLimits

0x05df,	// (0x000006fe) power_save_pane_g2

0xf509,	// (0x0000f628) aid_navinavi_width_pane

0x0599,	// (0x000006b8) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0000f664) power_save_pane_g_ParamLimits

0xf545,	// (0x0000f664) power_save_pane_g

0x05ed,	// (0x0000070c) power_save_pane_t1_ParamLimits

0x05ed,	// (0x0000070c) power_save_pane_t1

0xbbdb,	// (0x0000bcfa) aid_ps_clock_pane_ParamLimits

0x05b8,	// (0x000006d7) aid_ps_indicator_pane_ParamLimits

0x05ff,	// (0x0000071e) power_save_pane_t4_ParamLimits

0x05ff,	// (0x0000071e) power_save_pane_t4

0x0001,

0xf54a,	// (0x0000f669) power_save_pane_t_ParamLimits

0xf54a,	// (0x0000f669) power_save_pane_t

0x0629,	// (0x00000748) power_save_t3_ParamLimits

0x0629,	// (0x00000748) power_save_t3

0x0614,	// (0x00000733) power_save_t2_ParamLimits

0x0614,	// (0x00000733) power_save_t2

0x063e,	// (0x0000075d) indicator_ps_pane_g1

0xbbe9,	// (0x0000bd08) ai_gene_pane_ParamLimits

0xbbe9,	// (0x0000bd08) ai_gene_pane

0xbc00,	// (0x0000bd1f) ai_links_pane_ParamLimits

0xbc00,	// (0x0000bd1f) ai_links_pane

0xbc18,	// (0x0000bd37) indicator_pane_cp1_ParamLimits

0xbc18,	// (0x0000bd37) indicator_pane_cp1

0xbc27,	// (0x0000bd46) main_pane_idle_g1_cp_ParamLimits

0xbc27,	// (0x0000bd46) main_pane_idle_g1_cp

0x0677,	// (0x00000796) popup_ai_links_title_window

0xbc3f,	// (0x0000bd5e) soft_indicator_pane_cp1_ParamLimits

0xbc3f,	// (0x0000bd5e) soft_indicator_pane_cp1

0x4ad6,	// (0x00004bf5) ai_links_pane_g1

0x4adf,	// (0x00004bfe) grid_ai_links_pane

0xd39d,	// (0x0000d4bc) ai_gene_pane_1

0x4ac4,	// (0x00004be3) ai_gene_pane_2

0x4acd,	// (0x00004bec) list_highlight_pane_cp4

0xd379,	// (0x0000d498) cell_ai_link_pane_ParamLimits

0xd379,	// (0x0000d498) cell_ai_link_pane

0x4a95,	// (0x00004bb4) cell_ai_link_pane_g1

0x08d6,	// (0x000009f5) cell_ai_link_pane_g2

0x0001,

0xf8e1,	// (0x0000fa00) cell_ai_link_pane_g

0x0174,	// (0x00000293) grid_highlight_cp2

0x0174,	// (0x00000293) bg_popup_sub_pane_cp1

0x069a,	// (0x000007b9) popup_ai_links_title_window_t1

0x49e3,	// (0x00004b02) ai_gene_pane_1_g1_ParamLimits

0x49e3,	// (0x00004b02) ai_gene_pane_1_g1

0x49ef,	// (0x00004b0e) ai_gene_pane_1_g2_ParamLimits

0x49ef,	// (0x00004b0e) ai_gene_pane_1_g2

0x0001,

0xf8d7,	// (0x0000f9f6) ai_gene_pane_1_g_ParamLimits

0xf8d7,	// (0x0000f9f6) ai_gene_pane_1_g

0x49fc,	// (0x00004b1b) ai_gene_pane_1_t1_ParamLimits

0x49fc,	// (0x00004b1b) ai_gene_pane_1_t1

0x4a30,	// (0x00004b4f) grid_ai_soft_ind_pane

0x49ce,	// (0x00004aed) ai_gene_pane_2_t1_ParamLimits

0x49ce,	// (0x00004aed) ai_gene_pane_2_t1

0xbc53,	// (0x0000bd72) main_pane_empty_t1_ParamLimits

0xbc53,	// (0x0000bd72) main_pane_empty_t1

0xbc6b,	// (0x0000bd8a) main_pane_empty_t2_ParamLimits

0xbc6b,	// (0x0000bd8a) main_pane_empty_t2

0xbc80,	// (0x0000bd9f) main_pane_empty_t3_ParamLimits

0xbc80,	// (0x0000bd9f) main_pane_empty_t3

0xbc92,	// (0x0000bdb1) main_pane_empty_t4_ParamLimits

0xbc92,	// (0x0000bdb1) main_pane_empty_t4

0xbca4,	// (0x0000bdc3) main_pane_empty_t5_ParamLimits

0xbca4,	// (0x0000bdc3) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0000f66e) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0000f66e) main_pane_empty_t

0x1519,	// (0x00001638) bg_popup_window_pane_ParamLimits

0x1519,	// (0x00001638) bg_popup_window_pane

0x473e,	// (0x0000485d) find_popup_pane_cp2_ParamLimits

0x473e,	// (0x0000485d) find_popup_pane_cp2

0x474a,	// (0x00004869) heading_pane_ParamLimits

0x474a,	// (0x00004869) heading_pane

0x0174,	// (0x00000293) bg_popup_sub_pane

0xd2fa,	// (0x0000d419) bg_popup_window_pane_g1_ParamLimits

0xd2fa,	// (0x0000d419) bg_popup_window_pane_g1

0xd309,	// (0x0000d428) bg_popup_window_pane_g2_ParamLimits

0xd309,	// (0x0000d428) bg_popup_window_pane_g2

0xd315,	// (0x0000d434) bg_popup_window_pane_g3_ParamLimits

0xd315,	// (0x0000d434) bg_popup_window_pane_g3

0xd321,	// (0x0000d440) bg_popup_window_pane_g4_ParamLimits

0xd321,	// (0x0000d440) bg_popup_window_pane_g4

0xd330,	// (0x0000d44f) bg_popup_window_pane_g5_ParamLimits

0xd330,	// (0x0000d44f) bg_popup_window_pane_g5

0xd340,	// (0x0000d45f) bg_popup_window_pane_g6_ParamLimits

0xd340,	// (0x0000d45f) bg_popup_window_pane_g6

0xd34c,	// (0x0000d46b) bg_popup_window_pane_g7_ParamLimits

0xd34c,	// (0x0000d46b) bg_popup_window_pane_g7

0xd35b,	// (0x0000d47a) bg_popup_window_pane_g8_ParamLimits

0xd35b,	// (0x0000d47a) bg_popup_window_pane_g8

0xd36a,	// (0x0000d489) bg_popup_window_pane_g9_ParamLimits

0xd36a,	// (0x0000d489) bg_popup_window_pane_g9

0x4713,	// (0x00004832) bg_popup_window_pane_g10_ParamLimits

0x4713,	// (0x00004832) bg_popup_window_pane_g10

0x0009,

0xf89f,	// (0x0000f9be) bg_popup_window_pane_g_ParamLimits

0xf89f,	// (0x0000f9be) bg_popup_window_pane_g

0x463c,	// (0x0000475b) bg_popup_heading_pane_ParamLimits

0x463c,	// (0x0000475b) bg_popup_heading_pane

0x52b2,	// (0x000053d1) tabs_4_passive_pane_cp_srt_ParamLimits

0x52b2,	// (0x000053d1) tabs_4_passive_pane_cp_srt

0x52c4,	// (0x000053e3) tabs_4_passive_pane_srt_ParamLimits

0x4650,	// (0x0000476f) heading_pane_g2

0x52c4,	// (0x000053e3) tabs_4_passive_pane_srt

0x3795,	// (0x000038b4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3795,	// (0x000038b4) bg_passive_tab_pane_cp3_srt

0x4658,	// (0x00004777) heading_pane_t1_ParamLimits

0x4658,	// (0x00004777) heading_pane_t1

0x466f,	// (0x0000478e) heading_pane_t2_ParamLimits

0x466f,	// (0x0000478e) heading_pane_t2

0x0001,

0xf89a,	// (0x0000f9b9) heading_pane_t_ParamLimits

0xf89a,	// (0x0000f9b9) heading_pane_t

0x4016,	// (0x00004135) bg_popup_heading_pane_g1

0x40c5,	// (0x000041e4) bg_popup_heading_pane_g2

0x40cf,	// (0x000041ee) bg_popup_heading_pane_g3

0x40d9,	// (0x000041f8) bg_popup_heading_pane_g4

0x40e3,	// (0x00004202) bg_popup_heading_pane_g5

0x40ed,	// (0x0000420c) bg_popup_heading_pane_g6

0x40f5,	// (0x00004214) bg_popup_heading_pane_g7

0x40fd,	// (0x0000421c) bg_popup_heading_pane_g8

0x4107,	// (0x00004226) bg_popup_heading_pane_g9

0x0008,

0xf856,	// (0x0000f975) bg_popup_heading_pane_g

0x35e7,	// (0x00003706) bg_popup_sub_pane_g1

0x35ef,	// (0x0000370e) bg_popup_sub_pane_g2

0x35f7,	// (0x00003716) bg_popup_sub_pane_g3

0x35ff,	// (0x0000371e) bg_popup_sub_pane_g4

0x3607,	// (0x00003726) bg_popup_sub_pane_g5

0x360f,	// (0x0000372e) bg_popup_sub_pane_g6

0x3617,	// (0x00003736) bg_popup_sub_pane_g7

0x361f,	// (0x0000373e) bg_popup_sub_pane_g8

0x3627,	// (0x00003746) bg_popup_sub_pane_g9

0x0008,

0xf830,	// (0x0000f94f) bg_popup_sub_pane_g

0x070e,	// (0x0000082d) bg_popup_window_pane_cp5_ParamLimits

0x070e,	// (0x0000082d) bg_popup_window_pane_cp5

0x072a,	// (0x00000849) popup_note_window_g1_ParamLimits

0x072a,	// (0x00000849) popup_note_window_g1

0x0736,	// (0x00000855) popup_note_window_t1_ParamLimits

0x0736,	// (0x00000855) popup_note_window_t1

0x074c,	// (0x0000086b) popup_note_window_t2_ParamLimits

0x074c,	// (0x0000086b) popup_note_window_t2

0x0762,	// (0x00000881) popup_note_window_t3_ParamLimits

0x0762,	// (0x00000881) popup_note_window_t3

0x0778,	// (0x00000897) popup_note_window_t4_ParamLimits

0x0778,	// (0x00000897) popup_note_window_t4

0x07a0,	// (0x000008bf) popup_note_window_t5_ParamLimits

0x07a0,	// (0x000008bf) popup_note_window_t5

0x0004,

0xf55a,	// (0x0000f679) popup_note_window_t_ParamLimits

0xf55a,	// (0x0000f679) popup_note_window_t

0x07ea,	// (0x00000909) bg_popup_window_pane_cp6_ParamLimits

0x07ea,	// (0x00000909) bg_popup_window_pane_cp6

0x3f92,	// (0x000040b1) popup_note_image_window_g1_ParamLimits

0x3f92,	// (0x000040b1) popup_note_image_window_g1

0x3f9e,	// (0x000040bd) popup_note_image_window_g2_ParamLimits

0x3f9e,	// (0x000040bd) popup_note_image_window_g2

0x0001,

0xf824,	// (0x0000f943) popup_note_image_window_g_ParamLimits

0xf824,	// (0x0000f943) popup_note_image_window_g

0x3fb7,	// (0x000040d6) popup_note_image_window_t1_ParamLimits

0x3fb7,	// (0x000040d6) popup_note_image_window_t1

0x3fd0,	// (0x000040ef) popup_note_image_window_t2_ParamLimits

0x3fd0,	// (0x000040ef) popup_note_image_window_t2

0x3fe9,	// (0x00004108) popup_note_image_window_t3_ParamLimits

0x3fe9,	// (0x00004108) popup_note_image_window_t3

0x0002,

0xf829,	// (0x0000f948) popup_note_image_window_t_ParamLimits

0xf829,	// (0x0000f948) popup_note_image_window_t

0x3e53,	// (0x00003f72) bg_popup_window_pane_cp7_ParamLimits

0x3e53,	// (0x00003f72) bg_popup_window_pane_cp7

0x3e83,	// (0x00003fa2) popup_note_wait_window_g1_ParamLimits

0x3e83,	// (0x00003fa2) popup_note_wait_window_g1

0x3e8f,	// (0x00003fae) popup_note_wait_window_g2_ParamLimits

0x3e8f,	// (0x00003fae) popup_note_wait_window_g2

0x0002,

0xf812,	// (0x0000f931) popup_note_wait_window_g_ParamLimits

0xf812,	// (0x0000f931) popup_note_wait_window_g

0x3ea7,	// (0x00003fc6) popup_note_wait_window_t1_ParamLimits

0x3ea7,	// (0x00003fc6) popup_note_wait_window_t1

0x3ece,	// (0x00003fed) popup_note_wait_window_t2_ParamLimits

0x3ece,	// (0x00003fed) popup_note_wait_window_t2

0x3eeb,	// (0x0000400a) popup_note_wait_window_t3_ParamLimits

0x3eeb,	// (0x0000400a) popup_note_wait_window_t3

0x3efe,	// (0x0000401d) popup_note_wait_window_t4_ParamLimits

0x3efe,	// (0x0000401d) popup_note_wait_window_t4

0x0004,

0xf819,	// (0x0000f938) popup_note_wait_window_t_ParamLimits

0xf819,	// (0x0000f938) popup_note_wait_window_t

0x3f23,	// (0x00004042) wait_bar_pane_ParamLimits

0x3f23,	// (0x00004042) wait_bar_pane

0x0174,	// (0x00000293) wait_anim_pane

0x0174,	// (0x00000293) wait_border_pane

0xf4ff,	// (0x0000f61e) wait_anim_pane_g1

0xf4ff,	// (0x0000f61e) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0000f7f8) wait_anim_pane_g

0x3df7,	// (0x00003f16) wait_border_pane_g1

0x3e02,	// (0x00003f21) wait_border_pane_g2

0x3e0b,	// (0x00003f2a) wait_border_pane_g3

0x0002,

0xf80b,	// (0x0000f92a) wait_border_pane_g

0x3c62,	// (0x00003d81) bg_popup_window_pane_cp16_ParamLimits

0x3c62,	// (0x00003d81) bg_popup_window_pane_cp16

0x3d62,	// (0x00003e81) indicator_popup_pane_cp4_ParamLimits

0x3d62,	// (0x00003e81) indicator_popup_pane_cp4

0x3d76,	// (0x00003e95) popup_query_data_window_t1_ParamLimits

0x3d76,	// (0x00003e95) popup_query_data_window_t1

0x3d88,	// (0x00003ea7) popup_query_data_window_t2_ParamLimits

0x3d88,	// (0x00003ea7) popup_query_data_window_t2

0x3da1,	// (0x00003ec0) popup_query_data_window_t3_ParamLimits

0x3da1,	// (0x00003ec0) popup_query_data_window_t3

0x0002,

0xf804,	// (0x0000f923) popup_query_data_window_t_ParamLimits

0xf804,	// (0x0000f923) popup_query_data_window_t

0x3dbb,	// (0x00003eda) query_popup_data_pane_ParamLimits

0x3dbb,	// (0x00003eda) query_popup_data_pane

0x3dcf,	// (0x00003eee) query_popup_data_pane_cp1_ParamLimits

0x3dcf,	// (0x00003eee) query_popup_data_pane_cp1

0x3c62,	// (0x00003d81) bg_popup_window_pane_cp10_ParamLimits

0x3c62,	// (0x00003d81) bg_popup_window_pane_cp10

0x3c94,	// (0x00003db3) indicator_popup_pane_ParamLimits

0x3c94,	// (0x00003db3) indicator_popup_pane

0x3cb6,	// (0x00003dd5) popup_query_code_window_t1_ParamLimits

0x3cb6,	// (0x00003dd5) popup_query_code_window_t1

0x3cd0,	// (0x00003def) popup_query_code_window_t2_ParamLimits

0x3cd0,	// (0x00003def) popup_query_code_window_t2

0x3d19,	// (0x00003e38) popup_query_code_window_t3_ParamLimits

0x3d19,	// (0x00003e38) popup_query_code_window_t3

0x0002,

0xf7fd,	// (0x0000f91c) popup_query_code_window_t_ParamLimits

0xf7fd,	// (0x0000f91c) popup_query_code_window_t

0x3d48,	// (0x00003e67) query_popup_pane_ParamLimits

0x3d48,	// (0x00003e67) query_popup_pane

0x07ea,	// (0x00000909) bg_popup_window_pane_cp15_ParamLimits

0x07ea,	// (0x00000909) bg_popup_window_pane_cp15

0x0808,	// (0x00000927) indicator_popup_pane_cp1_ParamLimits

0x0808,	// (0x00000927) indicator_popup_pane_cp1

0x081b,	// (0x0000093a) indicator_popup_pane_cp2_ParamLimits

0x081b,	// (0x0000093a) indicator_popup_pane_cp2

0x082e,	// (0x0000094d) popup_query_data_code_window_g1_ParamLimits

0x082e,	// (0x0000094d) popup_query_data_code_window_g1

0x0841,	// (0x00000960) popup_query_data_code_window_t1_ParamLimits

0x0841,	// (0x00000960) popup_query_data_code_window_t1

0x0853,	// (0x00000972) popup_query_data_code_window_t2_ParamLimits

0x0853,	// (0x00000972) popup_query_data_code_window_t2

0x0865,	// (0x00000984) popup_query_data_code_window_t3_ParamLimits

0x0865,	// (0x00000984) popup_query_data_code_window_t3

0x087b,	// (0x0000099a) popup_query_data_code_window_t4_ParamLimits

0x087b,	// (0x0000099a) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0000f684) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0000f684) popup_query_data_code_window_t

0x3654,	// (0x00003773) list_single_midp_graphic_pane_g3

0x0893,	// (0x000009b2) query_popup_data_pane_cp2_ParamLimits

0x08a6,	// (0x000009c5) query_popup_pane_cp2_ParamLimits

0x08a6,	// (0x000009c5) query_popup_pane_cp2

0x0174,	// (0x00000293) bg_popup_window_pane_cp11

0x3c46,	// (0x00003d65) heading_pane_cp5

0x3c4e,	// (0x00003d6d) listscroll_popup_info_pane

0x0174,	// (0x00000293) input_focus_pane_cp3

0x08b9,	// (0x000009d8) query_popup_pane_t1

0x08c7,	// (0x000009e6) list_popup_info_pane_ParamLimits

0x08c7,	// (0x000009e6) list_popup_info_pane

0x08d6,	// (0x000009f5) listscroll_popup_info_pane_g1

0x08de,	// (0x000009fd) scroll_pane_cp7

0x08e8,	// (0x00000a07) popup_info_list_pane_t1_ParamLimits

0x08e8,	// (0x00000a07) popup_info_list_pane_t1

0x0902,	// (0x00000a21) popup_info_list_pane_t2_ParamLimits

0x0902,	// (0x00000a21) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0000f68d) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0000f68d) popup_info_list_pane_t

0x0174,	// (0x00000293) bg_popup_window_pane_cp12

0x53a6,	// (0x000054c5) find_popup_pane

0x03e8,	// (0x00000507) bg_popup_window_pane_cp3

0x091c,	// (0x00000a3b) heading_pane_cp3

0x092b,	// (0x00000a4a) listscroll_popup_graphic_pane

0x0174,	// (0x00000293) bg_popup_window_pane_cp4

0xbd06,	// (0x0000be25) heading_pane_cp4

0x0995,	// (0x00000ab4) listscroll_popup_colour_pane

0xbd10,	// (0x0000be2f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbd10,	// (0x0000be2f) cell_large_graphic_colour_none_popup_pane

0xbd24,	// (0x0000be43) grid_large_graphic_colour_popup_pane_ParamLimits

0xbd24,	// (0x0000be43) grid_large_graphic_colour_popup_pane

0xbd48,	// (0x0000be67) listscroll_popup_colour_pane_g1_ParamLimits

0xbd48,	// (0x0000be67) listscroll_popup_colour_pane_g1

0xbd5f,	// (0x0000be7e) listscroll_popup_colour_pane_g2_ParamLimits

0xbd5f,	// (0x0000be7e) listscroll_popup_colour_pane_g2

0xbd73,	// (0x0000be92) listscroll_popup_colour_pane_g3_ParamLimits

0xbd73,	// (0x0000be92) listscroll_popup_colour_pane_g3

0xbd83,	// (0x0000bea2) listscroll_popup_colour_pane_g4_ParamLimits

0xbd83,	// (0x0000bea2) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0000f692) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0000f692) listscroll_popup_colour_pane_g

0x0a23,	// (0x00000b42) scroll_pane_cp6_ParamLimits

0x0a23,	// (0x00000b42) scroll_pane_cp6

0xbd93,	// (0x0000beb2) cell_large_graphic_colour_popup_pane_ParamLimits

0xbd93,	// (0x0000beb2) cell_large_graphic_colour_popup_pane

0x0a54,	// (0x00000b73) cell_large_graphic_colour_none_popup_pane_t1

0x0174,	// (0x00000293) grid_highlight_pane_cp5

0x0a63,	// (0x00000b82) cell_large_graphic_colour_popup_pane_g1

0x0a6b,	// (0x00000b8a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0000f69b) cell_large_graphic_colour_popup_pane_g

0x0a73,	// (0x00000b92) cell_large_graphic_colour_popup_pane_g2_copy1

0x0a7c,	// (0x00000b9b) grid_highlight_pane_cp4

0x0a84,	// (0x00000ba3) bg_popup_window_pane_cp8_ParamLimits

0x0a84,	// (0x00000ba3) bg_popup_window_pane_cp8

0x0a9f,	// (0x00000bbe) popup_snote_single_text_window_g1_ParamLimits

0x0a9f,	// (0x00000bbe) popup_snote_single_text_window_g1

0x0ab1,	// (0x00000bd0) popup_snote_single_text_window_t1_ParamLimits

0x0ab1,	// (0x00000bd0) popup_snote_single_text_window_t1

0x0ac4,	// (0x00000be3) popup_snote_single_text_window_t2_ParamLimits

0x0ac4,	// (0x00000be3) popup_snote_single_text_window_t2

0x0ad7,	// (0x00000bf6) popup_snote_single_text_window_t3_ParamLimits

0x0ad7,	// (0x00000bf6) popup_snote_single_text_window_t3

0x0b10,	// (0x00000c2f) popup_snote_single_text_window_t4_ParamLimits

0x0b10,	// (0x00000c2f) popup_snote_single_text_window_t4

0x0b44,	// (0x00000c63) popup_snote_single_text_window_t5_ParamLimits

0x0b44,	// (0x00000c63) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0000f6a0) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0000f6a0) popup_snote_single_text_window_t

0x0b73,	// (0x00000c92) bg_popup_window_pane_cp9_ParamLimits

0x0b73,	// (0x00000c92) bg_popup_window_pane_cp9

0x0a9f,	// (0x00000bbe) popup_snote_single_graphic_window_g1_ParamLimits

0x0a9f,	// (0x00000bbe) popup_snote_single_graphic_window_g1

0x0b81,	// (0x00000ca0) popup_snote_single_graphic_window_g2_ParamLimits

0x0b81,	// (0x00000ca0) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0000f6ab) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0000f6ab) popup_snote_single_graphic_window_g

0x0b8d,	// (0x00000cac) popup_snote_single_graphic_window_t1_ParamLimits

0x0b8d,	// (0x00000cac) popup_snote_single_graphic_window_t1

0x0ba0,	// (0x00000cbf) popup_snote_single_graphic_window_t2_ParamLimits

0x0ba0,	// (0x00000cbf) popup_snote_single_graphic_window_t2

0x0bb3,	// (0x00000cd2) popup_snote_single_graphic_window_t3_ParamLimits

0x0bb3,	// (0x00000cd2) popup_snote_single_graphic_window_t3

0x0bec,	// (0x00000d0b) popup_snote_single_graphic_window_t4_ParamLimits

0x0bec,	// (0x00000d0b) popup_snote_single_graphic_window_t4

0x0c20,	// (0x00000d3f) popup_snote_single_graphic_window_t5_ParamLimits

0x0c20,	// (0x00000d3f) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0000f6b0) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0000f6b0) popup_snote_single_graphic_window_t

0x5230,	// (0x0000534f) grid_graphic_popup_pane_ParamLimits

0x5230,	// (0x0000534f) grid_graphic_popup_pane

0x525a,	// (0x00005379) listscroll_popup_graphic_pane_g1_ParamLimits

0x525a,	// (0x00005379) listscroll_popup_graphic_pane_g1

0xd68b,	// (0x0000d7aa) listscroll_popup_graphic_pane_g2_ParamLimits

0xd68b,	// (0x0000d7aa) listscroll_popup_graphic_pane_g2

0x0001,

0xf97a,	// (0x0000fa99) listscroll_popup_graphic_pane_g_ParamLimits

0xf97a,	// (0x0000fa99) listscroll_popup_graphic_pane_g

0x5282,	// (0x000053a1) scroll_pane_cp5

0xd648,	// (0x0000d767) cell_graphic_popup_pane_ParamLimits

0xd648,	// (0x0000d767) cell_graphic_popup_pane

0x51a2,	// (0x000052c1) cell_graphic_popup_pane_g1

0x51aa,	// (0x000052c9) cell_graphic_popup_pane_g2

0x0a73,	// (0x00000b92) cell_graphic_popup_pane_g3

0x0002,

0xf973,	// (0x0000fa92) cell_graphic_popup_pane_g

0x51b3,	// (0x000052d2) cell_graphic_popup_pane_t2

0x0a7c,	// (0x00000b9b) grid_highlight_pane_cp3

0x0c61,	// (0x00000d80) list_gen_pane_ParamLimits

0x0c61,	// (0x00000d80) list_gen_pane

0x0c93,	// (0x00000db2) scroll_pane

0xd5ff,	// (0x0000d71e) bg_list_pane_g1_ParamLimits

0xd5ff,	// (0x0000d71e) bg_list_pane_g1

0x5117,	// (0x00005236) bg_list_pane_g2_ParamLimits

0x5117,	// (0x00005236) bg_list_pane_g2

0x512c,	// (0x0000524b) bg_list_pane_g3_ParamLimits

0x512c,	// (0x0000524b) bg_list_pane_g3

0x5140,	// (0x0000525f) bg_list_pane_g4_ParamLimits

0x5140,	// (0x0000525f) bg_list_pane_g4

0xd61c,	// (0x0000d73b) bg_list_pane_g5_ParamLimits

0xd61c,	// (0x0000d73b) bg_list_pane_g5

0x0004,

0xf968,	// (0x0000fa87) bg_list_pane_g_ParamLimits

0xf968,	// (0x0000fa87) bg_list_pane_g

0xd5a3,	// (0x0000d6c2) list_double2_graphic_large_graphic_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_double2_graphic_large_graphic_pane

0xd5a3,	// (0x0000d6c2) list_double2_graphic_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_double2_graphic_pane

0xd5a3,	// (0x0000d6c2) list_double2_large_graphic_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_double2_large_graphic_pane

0xd5a3,	// (0x0000d6c2) list_double2_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_double2_pane

0xd5a3,	// (0x0000d6c2) list_double_graphic_heading_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_double_graphic_heading_pane

0xd5a3,	// (0x0000d6c2) list_double_graphic_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_double_graphic_pane

0xd5a3,	// (0x0000d6c2) list_double_heading_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_double_heading_pane

0xd5a3,	// (0x0000d6c2) list_double_large_graphic_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_double_large_graphic_pane

0xd5a3,	// (0x0000d6c2) list_double_number_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_double_number_pane

0xd5a3,	// (0x0000d6c2) list_double_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_double_pane

0xd5a3,	// (0x0000d6c2) list_double_time_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_double_time_pane

0xd5a3,	// (0x0000d6c2) list_setting_number_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_setting_number_pane

0xd5a3,	// (0x0000d6c2) list_setting_pane_ParamLimits

0xd5a3,	// (0x0000d6c2) list_setting_pane

0xd5b5,	// (0x0000d6d4) list_single_2graphic_pane_ParamLimits

0xd5b5,	// (0x0000d6d4) list_single_2graphic_pane

0xd5b5,	// (0x0000d6d4) list_single_graphic_heading_pane_ParamLimits

0xd5b5,	// (0x0000d6d4) list_single_graphic_heading_pane

0xd5b5,	// (0x0000d6d4) list_single_graphic_pane_ParamLimits

0xd5b5,	// (0x0000d6d4) list_single_graphic_pane

0xd5b5,	// (0x0000d6d4) list_single_heading_pane_ParamLimits

0xd5b5,	// (0x0000d6d4) list_single_heading_pane

0xd5b5,	// (0x0000d6d4) list_single_large_graphic_pane_ParamLimits

0xd5b5,	// (0x0000d6d4) list_single_large_graphic_pane

0xd5b5,	// (0x0000d6d4) list_single_number_heading_pane_ParamLimits

0xd5b5,	// (0x0000d6d4) list_single_number_heading_pane

0xd5b5,	// (0x0000d6d4) list_single_number_pane_ParamLimits

0xd5b5,	// (0x0000d6d4) list_single_number_pane

0xd5b5,	// (0x0000d6d4) list_single_pane_ParamLimits

0xd5b5,	// (0x0000d6d4) list_single_pane

0x0174,	// (0x00000293) list_highlight_pane_cp1

0x0cd3,	// (0x00000df2) list_single_pane_g1_ParamLimits

0x0cd3,	// (0x00000df2) list_single_pane_g1

0x0cdf,	// (0x00000dfe) list_single_pane_g2_ParamLimits

0x0cdf,	// (0x00000dfe) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0000f6c2) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0000f6c2) list_single_pane_g

0x4fb1,	// (0x000050d0) list_single_pane_t1_ParamLimits

0x4fb1,	// (0x000050d0) list_single_pane_t1

0x0cd3,	// (0x00000df2) list_single_number_pane_g1_ParamLimits

0x0cd3,	// (0x00000df2) list_single_number_pane_g1

0x0cdf,	// (0x00000dfe) list_single_number_pane_g2_ParamLimits

0x0cdf,	// (0x00000dfe) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0000f6c2) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0000f6c2) list_single_number_pane_g

0x3575,	// (0x00003694) list_single_number_pane_t1_ParamLimits

0x3575,	// (0x00003694) list_single_number_pane_t1

0x4cdb,	// (0x00004dfa) list_single_number_pane_t2_ParamLimits

0x4cdb,	// (0x00004dfa) list_single_number_pane_t2

0x0001,

0xf929,	// (0x0000fa48) list_single_number_pane_t_ParamLimits

0xf929,	// (0x0000fa48) list_single_number_pane_t

0x0cc7,	// (0x00000de6) list_single_graphic_pane_g1_ParamLimits

0x0cc7,	// (0x00000de6) list_single_graphic_pane_g1

0x0cd3,	// (0x00000df2) list_single_graphic_pane_g2_ParamLimits

0x0cd3,	// (0x00000df2) list_single_graphic_pane_g2

0x0cdf,	// (0x00000dfe) list_single_graphic_pane_g3_ParamLimits

0x0cdf,	// (0x00000dfe) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0000f6bb) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0000f6bb) list_single_graphic_pane_g

0x0ceb,	// (0x00000e0a) list_single_graphic_pane_t1_ParamLimits

0x0ceb,	// (0x00000e0a) list_single_graphic_pane_t1

0x0cd3,	// (0x00000df2) list_single_heading_pane_g1_ParamLimits

0x0cd3,	// (0x00000df2) list_single_heading_pane_g1

0x0cdf,	// (0x00000dfe) list_single_heading_pane_g2_ParamLimits

0x0cdf,	// (0x00000dfe) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0000f6c2) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0000f6c2) list_single_heading_pane_g

0x0d01,	// (0x00000e20) list_single_heading_pane_t1_ParamLimits

0x0d01,	// (0x00000e20) list_single_heading_pane_t1

0x0d17,	// (0x00000e36) list_single_heading_pane_t2_ParamLimits

0x0d17,	// (0x00000e36) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0000f6c7) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0000f6c7) list_single_heading_pane_t

0x0cd3,	// (0x00000df2) list_single_number_heading_pane_g1_ParamLimits

0x0cd3,	// (0x00000df2) list_single_number_heading_pane_g1

0x0cdf,	// (0x00000dfe) list_single_number_heading_pane_g2_ParamLimits

0x0cdf,	// (0x00000dfe) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0000f6c2) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0000f6c2) list_single_number_heading_pane_g

0x0d01,	// (0x00000e20) list_single_number_heading_pane_t1_ParamLimits

0x0d01,	// (0x00000e20) list_single_number_heading_pane_t1

0x0d29,	// (0x00000e48) list_single_number_heading_pane_t2_ParamLimits

0x0d29,	// (0x00000e48) list_single_number_heading_pane_t2

0x0d3b,	// (0x00000e5a) list_single_number_heading_pane_t3_ParamLimits

0x0d3b,	// (0x00000e5a) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0000f6cc) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0000f6cc) list_single_number_heading_pane_t

0x0d4d,	// (0x00000e6c) list_single_graphic_heading_pane_g1_ParamLimits

0x0d4d,	// (0x00000e6c) list_single_graphic_heading_pane_g1

0xbdbc,	// (0x0000bedb) list_single_graphic_heading_pane_g4_ParamLimits

0xbdbc,	// (0x0000bedb) list_single_graphic_heading_pane_g4

0x0cdf,	// (0x00000dfe) list_single_graphic_heading_pane_g5_ParamLimits

0x0cdf,	// (0x00000dfe) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0000f6d3) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0000f6d3) list_single_graphic_heading_pane_g

0x0d01,	// (0x00000e20) list_single_graphic_heading_pane_t1_ParamLimits

0x0d01,	// (0x00000e20) list_single_graphic_heading_pane_t1

0x0d6a,	// (0x00000e89) list_single_graphic_heading_pane_t2_ParamLimits

0x0d6a,	// (0x00000e89) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0000f6da) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0000f6da) list_single_graphic_heading_pane_t

0x599d,	// (0x00005abc) list_single_large_graphic_pane_g1_ParamLimits

0x599d,	// (0x00005abc) list_single_large_graphic_pane_g1

0x0cd3,	// (0x00000df2) list_single_large_graphic_pane_g2_ParamLimits

0x0cd3,	// (0x00000df2) list_single_large_graphic_pane_g2

0x0cdf,	// (0x00000dfe) list_single_large_graphic_pane_g3_ParamLimits

0x0cdf,	// (0x00000dfe) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0000f6df) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0000f6df) list_single_large_graphic_pane_g

0x3e02,	// (0x00003f21) wait_border_pane_g2_copy1

0xbdcd,	// (0x0000beec) list_single_large_graphic_pane_g4_cp2

0x59a9,	// (0x00005ac8) list_single_large_graphic_pane_t1_ParamLimits

0x59a9,	// (0x00005ac8) list_single_large_graphic_pane_t1

0x0ecc,	// (0x00000feb) list_double_pane_g1_ParamLimits

0x0ecc,	// (0x00000feb) list_double_pane_g1

0x0df7,	// (0x00000f16) list_double_pane_g2_ParamLimits

0x0df7,	// (0x00000f16) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0000f6e6) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0000f6e6) list_double_pane_g

0x0e03,	// (0x00000f22) list_double_pane_t1_ParamLimits

0x0e03,	// (0x00000f22) list_double_pane_t1

0xbdd5,	// (0x0000bef4) list_double_pane_t2_ParamLimits

0xbdd5,	// (0x0000bef4) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0000f6eb) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0000f6eb) list_double_pane_t

0xbde7,	// (0x0000bf06) list_double2_pane_g1_ParamLimits

0xbde7,	// (0x0000bf06) list_double2_pane_g1

0xbdf8,	// (0x0000bf17) list_double2_pane_g2_ParamLimits

0xbdf8,	// (0x0000bf17) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0000f6f0) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0000f6f0) list_double2_pane_g

0xbe04,	// (0x0000bf23) list_double2_pane_t1_ParamLimits

0xbe04,	// (0x0000bf23) list_double2_pane_t1

0x0fe8,	// (0x00001107) list_double2_pane_t2_ParamLimits

0x0fe8,	// (0x00001107) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0000f6f5) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0000f6f5) list_double2_pane_t

0x0ecc,	// (0x00000feb) list_double_number_pane_g1_ParamLimits

0x0ecc,	// (0x00000feb) list_double_number_pane_g1

0x0df7,	// (0x00000f16) list_double_number_pane_g2_ParamLimits

0x0df7,	// (0x00000f16) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0000f6e6) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0000f6e6) list_double_number_pane_g

0xbe1a,	// (0x0000bf39) list_double_number_pane_t1_ParamLimits

0xbe1a,	// (0x0000bf39) list_double_number_pane_t1

0x0ed8,	// (0x00000ff7) list_double_number_pane_t2_ParamLimits

0x0ed8,	// (0x00000ff7) list_double_number_pane_t2

0xbe2c,	// (0x0000bf4b) list_double_number_pane_t3_ParamLimits

0xbe2c,	// (0x0000bf4b) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0000f6fa) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0000f6fa) list_double_number_pane_t

0x0ec0,	// (0x00000fdf) list_double_graphic_pane_g1_ParamLimits

0x0ec0,	// (0x00000fdf) list_double_graphic_pane_g1

0xbe3e,	// (0x0000bf5d) list_double_graphic_pane_g2_ParamLimits

0xbe3e,	// (0x0000bf5d) list_double_graphic_pane_g2

0xbe4d,	// (0x0000bf6c) list_double_graphic_pane_g3_ParamLimits

0xbe4d,	// (0x0000bf6c) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0000f701) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0000f701) list_double_graphic_pane_g

0xbe65,	// (0x0000bf84) list_double_graphic_pane_t1_ParamLimits

0xbe65,	// (0x0000bf84) list_double_graphic_pane_t1

0xbe7b,	// (0x0000bf9a) list_double_graphic_pane_t2_ParamLimits

0xbe7b,	// (0x0000bf9a) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0000f70a) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0000f70a) list_double_graphic_pane_t

0xbe8d,	// (0x0000bfac) list_double2_graphic_pane_g1_ParamLimits

0xbe8d,	// (0x0000bfac) list_double2_graphic_pane_g1

0x129d,	// (0x000013bc) list_double2_graphic_pane_g2_ParamLimits

0x129d,	// (0x000013bc) list_double2_graphic_pane_g2

0xbdf8,	// (0x0000bf17) list_double2_graphic_pane_g3_ParamLimits

0xbdf8,	// (0x0000bf17) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0000f70f) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0000f70f) list_double2_graphic_pane_g

0xbe99,	// (0x0000bfb8) list_double2_graphic_pane_t1_ParamLimits

0xbe99,	// (0x0000bfb8) list_double2_graphic_pane_t1

0x1010,	// (0x0000112f) list_double2_graphic_pane_t2_ParamLimits

0x1010,	// (0x0000112f) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0000f716) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0000f716) list_double2_graphic_pane_t

0xbeaf,	// (0x0000bfce) list_double_large_graphic_pane_g1_ParamLimits

0xbeaf,	// (0x0000bfce) list_double_large_graphic_pane_g1

0xbece,	// (0x0000bfed) list_double_large_graphic_pane_g2_ParamLimits

0xbece,	// (0x0000bfed) list_double_large_graphic_pane_g2

0x0df7,	// (0x00000f16) list_double_large_graphic_pane_g3_ParamLimits

0x0df7,	// (0x00000f16) list_double_large_graphic_pane_g3

0xbedf,	// (0x0000bffe) list_double_large_graphic_pane_g4_ParamLimits

0xbedf,	// (0x0000bffe) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0000f71b) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0000f71b) list_double_large_graphic_pane_g

0xbef2,	// (0x0000c011) list_double_large_graphic_pane_t1_ParamLimits

0xbef2,	// (0x0000c011) list_double_large_graphic_pane_t1

0xbf0b,	// (0x0000c02a) list_double_large_graphic_pane_t2_ParamLimits

0xbf0b,	// (0x0000c02a) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0000f726) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0000f726) list_double_large_graphic_pane_t

0xbf1d,	// (0x0000c03c) list_double2_large_graphic_pane_g1_ParamLimits

0xbf1d,	// (0x0000c03c) list_double2_large_graphic_pane_g1

0xbde7,	// (0x0000bf06) list_double2_large_graphic_pane_g2_ParamLimits

0xbde7,	// (0x0000bf06) list_double2_large_graphic_pane_g2

0xbdf8,	// (0x0000bf17) list_double2_large_graphic_pane_g3_ParamLimits

0xbdf8,	// (0x0000bf17) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0000f72b) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0000f72b) list_double2_large_graphic_pane_g

0xbf29,	// (0x0000c048) list_double2_large_graphic_pane_t1_ParamLimits

0xbf29,	// (0x0000c048) list_double2_large_graphic_pane_t1

0xbf3f,	// (0x0000c05e) list_double2_large_graphic_pane_t2_ParamLimits

0xbf3f,	// (0x0000c05e) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0000f732) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0000f732) list_double2_large_graphic_pane_t

0xbf51,	// (0x0000c070) list_double_heading_pane_g1_ParamLimits

0xbf51,	// (0x0000c070) list_double_heading_pane_g1

0xbf62,	// (0x0000c081) list_double_heading_pane_g2_ParamLimits

0xbf62,	// (0x0000c081) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0000f737) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0000f737) list_double_heading_pane_g

0xbf6e,	// (0x0000c08d) list_double_heading_pane_t1_ParamLimits

0xbf6e,	// (0x0000c08d) list_double_heading_pane_t1

0xbf84,	// (0x0000c0a3) list_double_heading_pane_t2_ParamLimits

0xbf84,	// (0x0000c0a3) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0000f73c) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0000f73c) list_double_heading_pane_t

0x0e65,	// (0x00000f84) list_double_graphic_heading_pane_g1_ParamLimits

0x0e65,	// (0x00000f84) list_double_graphic_heading_pane_g1

0xbf51,	// (0x0000c070) list_double_graphic_heading_pane_g2_ParamLimits

0xbf51,	// (0x0000c070) list_double_graphic_heading_pane_g2

0xbf62,	// (0x0000c081) list_double_graphic_heading_pane_g3_ParamLimits

0xbf62,	// (0x0000c081) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0000f741) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0000f741) list_double_graphic_heading_pane_g

0xbf96,	// (0x0000c0b5) list_double_graphic_heading_pane_t1_ParamLimits

0xbf96,	// (0x0000c0b5) list_double_graphic_heading_pane_t1

0xbfac,	// (0x0000c0cb) list_double_graphic_heading_pane_t2_ParamLimits

0xbfac,	// (0x0000c0cb) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0000f748) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0000f748) list_double_graphic_heading_pane_t

0xbece,	// (0x0000bfed) list_double_time_pane_g1_ParamLimits

0xbece,	// (0x0000bfed) list_double_time_pane_g1

0x0df7,	// (0x00000f16) list_double_time_pane_g2_ParamLimits

0x0df7,	// (0x00000f16) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0000f74d) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0000f74d) list_double_time_pane_g

0xbfbe,	// (0x0000c0dd) list_double_time_pane_t1_ParamLimits

0xbfbe,	// (0x0000c0dd) list_double_time_pane_t1

0xbfd4,	// (0x0000c0f3) list_double_time_pane_t2_ParamLimits

0xbfd4,	// (0x0000c0f3) list_double_time_pane_t2

0xbfe6,	// (0x0000c105) list_double_time_pane_t3_ParamLimits

0xbfe6,	// (0x0000c105) list_double_time_pane_t3

0xbff8,	// (0x0000c117) list_double_time_pane_t4_ParamLimits

0xbff8,	// (0x0000c117) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0000f752) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0000f752) list_double_time_pane_t

0x129d,	// (0x000013bc) list_setting_pane_g1_ParamLimits

0x129d,	// (0x000013bc) list_setting_pane_g1

0xbdf8,	// (0x0000bf17) list_setting_pane_g2_ParamLimits

0xbdf8,	// (0x0000bf17) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0000f75b) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0000f75b) list_setting_pane_g

0xc00a,	// (0x0000c129) list_setting_pane_t1_ParamLimits

0xc00a,	// (0x0000c129) list_setting_pane_t1

0xc021,	// (0x0000c140) list_setting_pane_t2_ParamLimits

0xc021,	// (0x0000c140) list_setting_pane_t2

0x0002,

0xf641,	// (0x0000f760) list_setting_pane_t_ParamLimits

0xf641,	// (0x0000f760) list_setting_pane_t

0xc060,	// (0x0000c17f) set_value_pane_cp_ParamLimits

0xc060,	// (0x0000c17f) set_value_pane_cp

0x129d,	// (0x000013bc) list_setting_number_pane_g1_ParamLimits

0x129d,	// (0x000013bc) list_setting_number_pane_g1

0xbdf8,	// (0x0000bf17) list_setting_number_pane_g2_ParamLimits

0xbdf8,	// (0x0000bf17) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0000f75b) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0000f75b) list_setting_number_pane_g

0xc06c,	// (0x0000c18b) list_setting_number_pane_t1_ParamLimits

0xc06c,	// (0x0000c18b) list_setting_number_pane_t1

0xc080,	// (0x0000c19f) list_setting_number_pane_t2_ParamLimits

0xc080,	// (0x0000c19f) list_setting_number_pane_t2

0xc097,	// (0x0000c1b6) list_setting_number_pane_t3_ParamLimits

0xc097,	// (0x0000c1b6) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0000f767) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0000f767) list_setting_number_pane_t

0xc060,	// (0x0000c17f) set_value_pane_ParamLimits

0xc060,	// (0x0000c17f) set_value_pane

0x113e,	// (0x0000125d) bg_set_opt_pane_ParamLimits

0x113e,	// (0x0000125d) bg_set_opt_pane

0x115f,	// (0x0000127e) set_value_pane_t1

0x116d,	// (0x0000128c) slider_set_pane_cp3

0x1176,	// (0x00001295) volume_small_pane_cp

0x117f,	// (0x0000129e) list_form_gen_pane

0x1188,	// (0x000012a7) scroll_pane_cp8

0xc0da,	// (0x0000c1f9) form_field_data_pane_ParamLimits

0xc0da,	// (0x0000c1f9) form_field_data_pane

0xc0f1,	// (0x0000c210) form_field_data_wide_pane_ParamLimits

0xc0f1,	// (0x0000c210) form_field_data_wide_pane

0xc111,	// (0x0000c230) form_field_popup_pane_ParamLimits

0xc111,	// (0x0000c230) form_field_popup_pane

0xc129,	// (0x0000c248) form_field_popup_wide_pane_ParamLimits

0xc129,	// (0x0000c248) form_field_popup_wide_pane

0x1223,	// (0x00001342) form_field_slider_pane_ParamLimits

0x1223,	// (0x00001342) form_field_slider_pane

0x1236,	// (0x00001355) form_field_slider_wide_pane_ParamLimits

0x1236,	// (0x00001355) form_field_slider_wide_pane

0x1249,	// (0x00001368) data_form_pane

0xc14a,	// (0x0000c269) form_field_data_pane_t1

0x1277,	// (0x00001396) input_focus_pane

0x1285,	// (0x000013a4) data_form_wide_pane

0x12bd,	// (0x000013dc) form_field_data_wide_pane_t1

0x0a91,	// (0x00000bb0) input_focus_pane_cp6

0xc164,	// (0x0000c283) form_field_popup_pane_t1

0x1277,	// (0x00001396) input_focus_pane_cp7

0x12f4,	// (0x00001413) list_form_pane

0x1308,	// (0x00001427) form_field_popup_wide_pane_t1

0x1277,	// (0x00001396) input_focus_pane_cp8

0x131a,	// (0x00001439) list_form_wide_pane

0xc186,	// (0x0000c2a5) form_field_slider_pane_t1_ParamLimits

0xc186,	// (0x0000c2a5) form_field_slider_pane_t1

0xc19e,	// (0x0000c2bd) form_field_slider_pane_t2_ParamLimits

0xc19e,	// (0x0000c2bd) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0000f777) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0000f777) form_field_slider_pane_t

0x070e,	// (0x0000082d) input_focus_pane_cp9_ParamLimits

0x070e,	// (0x0000082d) input_focus_pane_cp9

0xc1b3,	// (0x0000c2d2) slider_cont_pane_ParamLimits

0xc1b3,	// (0x0000c2d2) slider_cont_pane

0x1366,	// (0x00001485) form_field_slider_wide_pane_t1_ParamLimits

0x1366,	// (0x00001485) form_field_slider_wide_pane_t1

0x1378,	// (0x00001497) form_field_slider_wide_pane_t2_ParamLimits

0x1378,	// (0x00001497) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0000f77c) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0000f77c) form_field_slider_wide_pane_t

0x070e,	// (0x0000082d) input_focus_pane_cp10_ParamLimits

0x070e,	// (0x0000082d) input_focus_pane_cp10

0xc1c7,	// (0x0000c2e6) slider_cont_pane_cp1_ParamLimits

0xc1c7,	// (0x0000c2e6) slider_cont_pane_cp1

0xc1db,	// (0x0000c2fa) slider_form_pane_cp

0x13a6,	// (0x000014c5) input_focus_pane_g1

0x13ae,	// (0x000014cd) input_focus_pane_g2

0x13b6,	// (0x000014d5) input_focus_pane_g3

0x13be,	// (0x000014dd) input_focus_pane_g4

0x13c6,	// (0x000014e5) input_focus_pane_g5

0x13ce,	// (0x000014ed) input_focus_pane_g6

0x13d6,	// (0x000014f5) input_focus_pane_g7

0x13de,	// (0x000014fd) input_focus_pane_g8

0x13e6,	// (0x00001505) input_focus_pane_g9

0xf4ff,	// (0x0000f61e) input_focus_pane_g10

0x0009,

0xf662,	// (0x0000f781) input_focus_pane_g

0x3e0b,	// (0x00003f2a) wait_border_pane_g3_copy1

0xc1e3,	// (0x0000c302) data_form_pane_t1

0xf4ff,	// (0x0000f61e) wait_anim_pane_g1_copy1

0xd587,	// (0x0000d6a6) data_form_wide_pane_t1

0xc1fd,	// (0x0000c31c) list_form_graphic_pane_cp_ParamLimits

0xc1fd,	// (0x0000c31c) list_form_graphic_pane_cp

0x4f69,	// (0x00005088) slider_form_pane_g1

0x4f72,	// (0x00005091) slider_form_pane_g2

0x0006,

0xf959,	// (0x0000fa78) slider_form_pane_g

0xc1fd,	// (0x0000c31c) list_form_graphic_pane_ParamLimits

0xc1fd,	// (0x0000c31c) list_form_graphic_pane

0x143e,	// (0x0000155d) list_form_graphic_pane_g1

0x1446,	// (0x00001565) list_form_graphic_pane_t1_ParamLimits

0x1446,	// (0x00001565) list_form_graphic_pane_t1

0x03e8,	// (0x00000507) list_highlight_pane_cp5_ParamLimits

0x03e8,	// (0x00000507) list_highlight_pane_cp5

0x145b,	// (0x0000157a) find_pane_g1

0x1464,	// (0x00001583) input_find_pane

0x146d,	// (0x0000158c) input_find_pane_g1_ParamLimits

0x146d,	// (0x0000158c) input_find_pane_g1

0x1479,	// (0x00001598) input_find_pane_t1_ParamLimits

0x1479,	// (0x00001598) input_find_pane_t1

0x148e,	// (0x000015ad) input_find_pane_t2_ParamLimits

0x148e,	// (0x000015ad) input_find_pane_t2

0x0001,

0xf677,	// (0x0000f796) input_find_pane_t_ParamLimits

0xf677,	// (0x0000f796) input_find_pane_t

0x14a3,	// (0x000015c2) input_focus_pane_cp5_ParamLimits

0x14a3,	// (0x000015c2) input_focus_pane_cp5

0x14c2,	// (0x000015e1) bg_popup_window_pane_cp2_ParamLimits

0x14c2,	// (0x000015e1) bg_popup_window_pane_cp2

0x14cf,	// (0x000015ee) listscroll_menu_pane_ParamLimits

0x14cf,	// (0x000015ee) listscroll_menu_pane

0xc21b,	// (0x0000c33a) popup_submenu_window_ParamLimits

0xc21b,	// (0x0000c33a) popup_submenu_window

0x1507,	// (0x00001626) find_popup_pane_g1

0x150f,	// (0x0000162e) input_popup_find_pane_cp

0x1519,	// (0x00001638) input_focus_pane_cp4_ParamLimits

0x1519,	// (0x00001638) input_focus_pane_cp4

0x1533,	// (0x00001652) input_popup_find_pane_t1_ParamLimits

0x1533,	// (0x00001652) input_popup_find_pane_t1

0x0174,	// (0x00000293) bg_popup_sub_pane_cp

0x1561,	// (0x00001680) listscroll_popup_sub_pane

0x1569,	// (0x00001688) list_submenu_pane_ParamLimits

0x1569,	// (0x00001688) list_submenu_pane

0x157a,	// (0x00001699) scroll_pane_cp4

0x1582,	// (0x000016a1) list_single_popup_submenu_pane_ParamLimits

0x1582,	// (0x000016a1) list_single_popup_submenu_pane

0x1596,	// (0x000016b5) list_single_popup_submenu_pane_g1

0x159e,	// (0x000016bd) list_single_popup_submenu_pane_t1_ParamLimits

0x159e,	// (0x000016bd) list_single_popup_submenu_pane_t1

0x070e,	// (0x0000082d) bg_active_tab_pane_cp1_ParamLimits

0x070e,	// (0x0000082d) bg_active_tab_pane_cp1

0x15b3,	// (0x000016d2) tabs_2_active_pane_g1

0xc255,	// (0x0000c374) tabs_2_active_pane_t1

0x070e,	// (0x0000082d) bg_passive_tab_pane_cp1_ParamLimits

0x070e,	// (0x0000082d) bg_passive_tab_pane_cp1

0x15b3,	// (0x000016d2) tabs_2_passive_pane_g1

0xc255,	// (0x0000c374) tabs_2_passive_pane_t1

0x03e8,	// (0x00000507) bg_active_tab_pane_cp4

0xc267,	// (0x0000c386) tabs_2_long_active_pane_t1

0x2a6c,	// (0x00002b8b) bg_passive_tab_pane_cp4

0x365c,	// (0x0000377b) list_single_midp_graphic_pane_g4_ParamLimits

0x03e8,	// (0x00000507) bg_active_tab_pane_cp5

0xc27a,	// (0x0000c399) tabs_3_long_active_pane_t1

0x2a6c,	// (0x00002b8b) bg_passive_tab_pane_cp5

0x365c,	// (0x0000377b) list_single_midp_graphic_pane_g4

0x03e8,	// (0x00000507) bg_popup_window_pane_cp13_ParamLimits

0x03e8,	// (0x00000507) bg_popup_window_pane_cp13

0x1615,	// (0x00001734) listscroll_popup_fast_pane_ParamLimits

0x1615,	// (0x00001734) listscroll_popup_fast_pane

0x1624,	// (0x00001743) grid_popup_fast_pane_ParamLimits

0x1624,	// (0x00001743) grid_popup_fast_pane

0x1636,	// (0x00001755) scroll_pane_cp9_ParamLimits

0x1636,	// (0x00001755) scroll_pane_cp9

0x72ce,	// (0x000073ed) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x72ce,	// (0x000073ed) list_single_graphic_hl_pane_t1_cp2

0x165a,	// (0x00001779) input_focus_pane_cp20_ParamLimits

0x165a,	// (0x00001779) input_focus_pane_cp20

0x1668,	// (0x00001787) query_popup_data_pane_t1_ParamLimits

0x1668,	// (0x00001787) query_popup_data_pane_t1

0x167b,	// (0x0000179a) query_popup_data_pane_t2_ParamLimits

0x167b,	// (0x0000179a) query_popup_data_pane_t2

0x16c1,	// (0x000017e0) query_popup_data_pane_t3_ParamLimits

0x16c1,	// (0x000017e0) query_popup_data_pane_t3

0x1702,	// (0x00001821) query_popup_data_pane_t4_ParamLimits

0x1702,	// (0x00001821) query_popup_data_pane_t4

0x173e,	// (0x0000185d) query_popup_data_pane_t5_ParamLimits

0x173e,	// (0x0000185d) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0000f79b) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0000f79b) query_popup_data_pane_t

0x13a6,	// (0x000014c5) bg_set_opt_pane_g1

0x13ae,	// (0x000014cd) bg_set_opt_pane_g2

0x13b6,	// (0x000014d5) bg_set_opt_pane_g3

0x13be,	// (0x000014dd) bg_set_opt_pane_g4

0x13c6,	// (0x000014e5) bg_set_opt_pane_g5

0x13ce,	// (0x000014ed) bg_set_opt_pane_g6

0x13d6,	// (0x000014f5) bg_set_opt_pane_g7

0x13de,	// (0x000014fd) bg_set_opt_pane_g8

0x13e6,	// (0x00001505) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0000f7a6) bg_set_opt_pane_g

0x2075,	// (0x00002194) control_top_pane_stacon_ParamLimits

0x2075,	// (0x00002194) control_top_pane_stacon

0x20c8,	// (0x000021e7) signal_pane_stacon_ParamLimits

0x20c8,	// (0x000021e7) signal_pane_stacon

0x20ed,	// (0x0000220c) stacon_top_pane_g1_ParamLimits

0x20ed,	// (0x0000220c) stacon_top_pane_g1

0x210f,	// (0x0000222e) title_pane_stacon_ParamLimits

0x210f,	// (0x0000222e) title_pane_stacon

0x2139,	// (0x00002258) uni_indicator_pane_stacon_ParamLimits

0x2139,	// (0x00002258) uni_indicator_pane_stacon

0x214e,	// (0x0000226d) battery_pane_stacon_ParamLimits

0x214e,	// (0x0000226d) battery_pane_stacon

0x2192,	// (0x000022b1) control_bottom_pane_stacon_ParamLimits

0x2192,	// (0x000022b1) control_bottom_pane_stacon

0x21b5,	// (0x000022d4) navi_pane_stacon_ParamLimits

0x21b5,	// (0x000022d4) navi_pane_stacon

0x21d8,	// (0x000022f7) stacon_bottom_pane_g1_ParamLimits

0x21d8,	// (0x000022f7) stacon_bottom_pane_g1

0x1775,	// (0x00001894) aid_levels_signal_lsc_ParamLimits

0x1775,	// (0x00001894) aid_levels_signal_lsc

0x178b,	// (0x000018aa) signal_pane_stacon_g1_ParamLimits

0x178b,	// (0x000018aa) signal_pane_stacon_g1

0x179f,	// (0x000018be) signal_pane_stacon_g2_ParamLimits

0x179f,	// (0x000018be) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0000f7b9) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0000f7b9) signal_pane_stacon_g

0x17e1,	// (0x00001900) title_pane_stacon_t1_ParamLimits

0x17e1,	// (0x00001900) title_pane_stacon_t1

0x1806,	// (0x00001925) uni_indicator_pane_stacon_g1

0x1810,	// (0x0000192f) uni_indicator_pane_stacon_g2

0x181a,	// (0x00001939) uni_indicator_pane_stacon_g3

0x1824,	// (0x00001943) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0000f7c5) uni_indicator_pane_stacon_g

0x182e,	// (0x0000194d) control_top_pane_stacon_g1

0x1836,	// (0x00001955) control_top_pane_stacon_t1_ParamLimits

0x1836,	// (0x00001955) control_top_pane_stacon_t1

0x186d,	// (0x0000198c) aid_levels_battery_lsc_ParamLimits

0x186d,	// (0x0000198c) aid_levels_battery_lsc

0x1884,	// (0x000019a3) battery_pane_stacon_g1_ParamLimits

0x1884,	// (0x000019a3) battery_pane_stacon_g1

0x1897,	// (0x000019b6) battery_pane_stacon_g2_ParamLimits

0x1897,	// (0x000019b6) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0000f7ce) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0000f7ce) battery_pane_stacon_g

0x18d5,	// (0x000019f4) navi_icon_pane_stacon

0x18e9,	// (0x00001a08) navi_navi_pane_stacon

0x18d5,	// (0x000019f4) navi_text_pane_stacon

0x182e,	// (0x0000194d) control_bottom_pane_stacon_g1

0x18fd,	// (0x00001a1c) control_bottom_pane_stacon_t1_ParamLimits

0x18fd,	// (0x00001a1c) control_bottom_pane_stacon_t1

0xc28c,	// (0x0000c3ab) grid_app_pane_ParamLimits

0xc28c,	// (0x0000c3ab) grid_app_pane

0xc2c4,	// (0x0000c3e3) scroll_pane_cp15_ParamLimits

0xc2c4,	// (0x0000c3e3) scroll_pane_cp15

0xc2d9,	// (0x0000c3f8) cell_app_pane_ParamLimits

0xc2d9,	// (0x0000c3f8) cell_app_pane

0xc31e,	// (0x0000c43d) cell_app_pane_g1_ParamLimits

0xc31e,	// (0x0000c43d) cell_app_pane_g1

0x19cf,	// (0x00001aee) cell_app_pane_g2_ParamLimits

0x19cf,	// (0x00001aee) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0000f7d3) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0000f7d3) cell_app_pane_g

0xc342,	// (0x0000c461) cell_app_pane_t1_ParamLimits

0xc342,	// (0x0000c461) cell_app_pane_t1

0x19f2,	// (0x00001b11) grid_highlight_pane_ParamLimits

0x19f2,	// (0x00001b11) grid_highlight_pane

0x13a6,	// (0x000014c5) cell_highlight_pane_g1

0x13ae,	// (0x000014cd) cell_highlight_pane_g2

0x13b6,	// (0x000014d5) cell_highlight_pane_g3

0x13be,	// (0x000014dd) cell_highlight_pane_g4

0x13c6,	// (0x000014e5) cell_highlight_pane_g5

0x13ce,	// (0x000014ed) cell_highlight_pane_g6

0x13d6,	// (0x000014f5) cell_highlight_pane_g7

0x13de,	// (0x000014fd) cell_highlight_pane_g8

0x13e6,	// (0x00001505) cell_highlight_pane_g9

0xf4ff,	// (0x0000f61e) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0000f781) cell_highlight_pane_g

0x1a16,	// (0x00001b35) bg_scroll_pane

0x1a35,	// (0x00001b54) scroll_handle_pane

0x1a86,	// (0x00001ba5) scroll_bg_pane_g1

0x1a9b,	// (0x00001bba) scroll_bg_pane_g2

0x1ab3,	// (0x00001bd2) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0000f7d8) scroll_bg_pane_g

0x1ac8,	// (0x00001be7) scroll_handle_focus_pane_ParamLimits

0x1ac8,	// (0x00001be7) scroll_handle_focus_pane

0x1a86,	// (0x00001ba5) scroll_handle_pane_g1

0x1ad5,	// (0x00001bf4) scroll_handle_pane_g2

0x1ab3,	// (0x00001bd2) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0000f7df) scroll_handle_pane_g

0x1519,	// (0x00001638) bg_popup_sub_pane_cp21_ParamLimits

0x1519,	// (0x00001638) bg_popup_sub_pane_cp21

0x1ae9,	// (0x00001c08) popup_fep_japan_predictive_window_t1_ParamLimits

0x1ae9,	// (0x00001c08) popup_fep_japan_predictive_window_t1

0x1b03,	// (0x00001c22) popup_fep_japan_predictive_window_t2_ParamLimits

0x1b03,	// (0x00001c22) popup_fep_japan_predictive_window_t2

0x1b36,	// (0x00001c55) popup_fep_japan_predictive_window_t3_ParamLimits

0x1b36,	// (0x00001c55) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0000f7e6) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0000f7e6) popup_fep_japan_predictive_window_t

0x0174,	// (0x00000293) bg_popup_sub_pane_cp23

0x1b6d,	// (0x00001c8c) listscroll_japin_cand_pane

0x1b75,	// (0x00001c94) popup_fep_japan_candidate_window_t1

0x1b83,	// (0x00001ca2) candidate_pane_ParamLimits

0x1b83,	// (0x00001ca2) candidate_pane

0x1b95,	// (0x00001cb4) scroll_pane_cp30

0x1b9d,	// (0x00001cbc) list_single_popup_jap_candidate_pane_ParamLimits

0x1b9d,	// (0x00001cbc) list_single_popup_jap_candidate_pane

0x0174,	// (0x00000293) list_highlight_pane_cp30

0x1bb2,	// (0x00001cd1) list_single_popup_jap_candidate_pane_t1

0x1bc1,	// (0x00001ce0) level_1_signal

0x1bd3,	// (0x00001cf2) level_2_signal

0x1be6,	// (0x00001d05) level_3_signal

0x1bf9,	// (0x00001d18) level_4_signal

0x1c0c,	// (0x00001d2b) level_5_signal

0x1c1f,	// (0x00001d3e) level_6_signal

0x1c32,	// (0x00001d51) level_7_signal

0x1bc1,	// (0x00001ce0) level_1_battery

0x1bd3,	// (0x00001cf2) level_2_battery

0x1be6,	// (0x00001d05) level_3_battery

0x1bf9,	// (0x00001d18) level_4_battery

0x1c0c,	// (0x00001d2b) level_5_battery

0x1c1f,	// (0x00001d3e) level_6_battery

0x1c32,	// (0x00001d51) level_7_battery

0x1c7c,	// (0x00001d9b) list_menu_pane_ParamLimits

0x1c7c,	// (0x00001d9b) list_menu_pane

0x1c92,	// (0x00001db1) scroll_pane_cp25_ParamLimits

0x1c92,	// (0x00001db1) scroll_pane_cp25

0x1cab,	// (0x00001dca) list_double2_graphic_pane_cp2_ParamLimits

0x1cab,	// (0x00001dca) list_double2_graphic_pane_cp2

0x1cab,	// (0x00001dca) list_double2_large_graphic_pane_cp2_ParamLimits

0x1cab,	// (0x00001dca) list_double2_large_graphic_pane_cp2

0x1cab,	// (0x00001dca) list_double2_pane_cp2_ParamLimits

0x1cab,	// (0x00001dca) list_double2_pane_cp2

0x1cab,	// (0x00001dca) list_double_graphic_pane_cp2_ParamLimits

0x1cab,	// (0x00001dca) list_double_graphic_pane_cp2

0x1cab,	// (0x00001dca) list_double_large_graphic_pane_cp2_ParamLimits

0x1cab,	// (0x00001dca) list_double_large_graphic_pane_cp2

0x1cab,	// (0x00001dca) list_double_number_pane_cp2_ParamLimits

0x1cab,	// (0x00001dca) list_double_number_pane_cp2

0x1cab,	// (0x00001dca) list_double_pane_cp2_ParamLimits

0x1cab,	// (0x00001dca) list_double_pane_cp2

0xc359,	// (0x0000c478) list_single_2graphic_pane_cp2_ParamLimits

0xc359,	// (0x0000c478) list_single_2graphic_pane_cp2

0xc359,	// (0x0000c478) list_single_graphic_heading_pane_cp2_ParamLimits

0xc359,	// (0x0000c478) list_single_graphic_heading_pane_cp2

0xc359,	// (0x0000c478) list_single_graphic_pane_cp2_ParamLimits

0xc359,	// (0x0000c478) list_single_graphic_pane_cp2

0xc359,	// (0x0000c478) list_single_heading_pane_cp2_ParamLimits

0xc359,	// (0x0000c478) list_single_heading_pane_cp2

0x1ce8,	// (0x00001e07) list_single_large_graphic_pane_cp2_ParamLimits

0x1ce8,	// (0x00001e07) list_single_large_graphic_pane_cp2

0xc359,	// (0x0000c478) list_single_number_heading_pane_cp2_ParamLimits

0xc359,	// (0x0000c478) list_single_number_heading_pane_cp2

0xc359,	// (0x0000c478) list_single_number_pane_cp2_ParamLimits

0xc359,	// (0x0000c478) list_single_number_pane_cp2

0xc36b,	// (0x0000c48a) list_single_pane_cp2_ParamLimits

0xc36b,	// (0x0000c48a) list_single_pane_cp2

0x1dd8,	// (0x00001ef7) bg_popup_sub_pane_cp22

0x1dfd,	// (0x00001f1c) popup_side_volume_key_window_g1

0x1e27,	// (0x00001f46) popup_side_volume_key_window_t1

0x1e43,	// (0x00001f62) volume_small_pane_cp1

0x070e,	// (0x0000082d) bg_popup_sub_pane_cp24_ParamLimits

0x070e,	// (0x0000082d) bg_popup_sub_pane_cp24

0x1e4b,	// (0x00001f6a) fep_china_uni_candidate_pane_ParamLimits

0x1e4b,	// (0x00001f6a) fep_china_uni_candidate_pane

0x1e5f,	// (0x00001f7e) fep_china_uni_entry_pane

0x1e6f,	// (0x00001f8e) popup_fep_china_uni_window_g1

0x1e8b,	// (0x00001faa) fep_china_uni_entry_pane_g1

0x1e93,	// (0x00001fb2) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0000f817) fep_china_uni_entry_pane_g

0x1e9b,	// (0x00001fba) fep_entry_item_pane

0x1ea5,	// (0x00001fc4) fep_candidate_item_pane

0x1ead,	// (0x00001fcc) fep_china_uni_candidate_pane_g1

0x1eb5,	// (0x00001fd4) fep_china_uni_candidate_pane_g2

0x1ebd,	// (0x00001fdc) fep_china_uni_candidate_pane_g3

0x1ec5,	// (0x00001fe4) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0000f81c) fep_china_uni_candidate_pane_g

0xf4ff,	// (0x0000f61e) fep_entry_item_pane_g1

0x1ecd,	// (0x00001fec) fep_entry_item_pane_t1_ParamLimits

0x1ecd,	// (0x00001fec) fep_entry_item_pane_t1

0x1ee3,	// (0x00002002) fep_candidate_item_pane_t1_ParamLimits

0x1ee3,	// (0x00002002) fep_candidate_item_pane_t1

0x1ef8,	// (0x00002017) fep_candidate_item_pane_t2_ParamLimits

0x1ef8,	// (0x00002017) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0000f825) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0000f825) fep_candidate_item_pane_t

0x03e8,	// (0x00000507) list_highlight_pane_cp31_ParamLimits

0x03e8,	// (0x00000507) list_highlight_pane_cp31

0x1f0a,	// (0x00002029) level_1_signal_lsc

0x1f13,	// (0x00002032) level_2_signal_lsc

0x1f1c,	// (0x0000203b) level_3_signal_lsc

0x1f25,	// (0x00002044) level_4_signal_lsc

0x1f2e,	// (0x0000204d) level_5_signal_lsc

0x1f37,	// (0x00002056) level_6_signal_lsc

0x1f40,	// (0x0000205f) level_7_signal_lsc

0x1f40,	// (0x0000205f) level_1_battery_lsc

0x1f49,	// (0x00002068) level_2_battery_lsc

0x1f52,	// (0x00002071) level_3_battery_lsc

0x1f5b,	// (0x0000207a) level_4_battery_lsc

0x1f64,	// (0x00002083) level_5_battery_lsc

0x1f6d,	// (0x0000208c) level_6_battery_lsc

0x1f0a,	// (0x00002029) level_7_battery_lsc

0x1f76,	// (0x00002095) scroll_handle_focus_pane_g1

0x1f7f,	// (0x0000209e) scroll_handle_focus_pane_g2

0x1f88,	// (0x000020a7) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0000f82a) scroll_handle_focus_pane_g

0x1f91,	// (0x000020b0) list_single_2graphic_pane_g1_ParamLimits

0x1f91,	// (0x000020b0) list_single_2graphic_pane_g1

0xbdbc,	// (0x0000bedb) list_single_2graphic_pane_g2_ParamLimits

0xbdbc,	// (0x0000bedb) list_single_2graphic_pane_g2

0x0cdf,	// (0x00000dfe) list_single_2graphic_pane_g3_ParamLimits

0x0cdf,	// (0x00000dfe) list_single_2graphic_pane_g3

0x1f9d,	// (0x000020bc) list_single_2graphic_pane_g4_ParamLimits

0x1f9d,	// (0x000020bc) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0000f831) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0000f831) list_single_2graphic_pane_g

0x1fae,	// (0x000020cd) list_single_2graphic_pane_t1_ParamLimits

0x1fae,	// (0x000020cd) list_single_2graphic_pane_t1

0xc3f8,	// (0x0000c517) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc3f8,	// (0x0000c517) list_double2_graphic_large_graphic_pane_g1

0xbde7,	// (0x0000bf06) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbde7,	// (0x0000bf06) list_double2_graphic_large_graphic_pane_g2

0xbdf8,	// (0x0000bf17) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbdf8,	// (0x0000bf17) list_double2_graphic_large_graphic_pane_g3

0xc40a,	// (0x0000c529) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc40a,	// (0x0000c529) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0000f83a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0000f83a) list_double2_graphic_large_graphic_pane_g

0xc416,	// (0x0000c535) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc416,	// (0x0000c535) list_double2_graphic_large_graphic_pane_t1

0xc42c,	// (0x0000c54b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc42c,	// (0x0000c54b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0000f843) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0000f843) list_double2_graphic_large_graphic_pane_t

0x22a3,	// (0x000023c2) popup_fast_swap_window_ParamLimits

0x22a3,	// (0x000023c2) popup_fast_swap_window

0x22bf,	// (0x000023de) popup_side_volume_key_window

0x22db,	// (0x000023fa) stacon_top_pane

0x22e5,	// (0x00002404) status_pane_ParamLimits

0x22e5,	// (0x00002404) status_pane

0xf4f5,	// (0x0000f614) status_small_pane

0x0174,	// (0x00000293) control_pane

0x0174,	// (0x00000293) stacon_bottom_pane

0x1188,	// (0x000012a7) scroll_pane_cp121

0x117f,	// (0x0000129e) set_content_pane

0x2020,	// (0x0000213f) bg_active_tab_pane_g1_cp1

0x2029,	// (0x00002148) bg_active_tab_pane_g2_cp1

0x2032,	// (0x00002151) bg_active_tab_pane_g3_cp1

0x2020,	// (0x0000213f) bg_passive_tab_pane_g1_cp1

0x2029,	// (0x00002148) bg_passive_tab_pane_g2_cp1

0x2032,	// (0x00002151) bg_passive_tab_pane_g3_cp1

0x203b,	// (0x0000215a) bg_active_tab_pane_g1_cp2

0x2029,	// (0x00002148) bg_active_tab_pane_g2_cp2

0x2044,	// (0x00002163) bg_active_tab_pane_g3_cp2

0x203b,	// (0x0000215a) bg_passive_tab_pane_g1_cp2

0x2029,	// (0x00002148) bg_passive_tab_pane_g2_cp2

0x2044,	// (0x00002163) bg_passive_tab_pane_g3_cp2

0x204d,	// (0x0000216c) bg_active_tab_pane_g1_cp3

0x2029,	// (0x00002148) bg_active_tab_pane_g2_cp3

0x2056,	// (0x00002175) bg_active_tab_pane_g3_cp3

0x204d,	// (0x0000216c) bg_passive_tab_pane_g1_cp3

0x2029,	// (0x00002148) bg_passive_tab_pane_g2_cp3

0x2056,	// (0x00002175) bg_passive_tab_pane_g3_cp3

0x205f,	// (0x0000217e) bg_active_tab_pane_g1_cp4

0x2029,	// (0x00002148) bg_active_tab_pane_g2_cp4

0x206a,	// (0x00002189) bg_active_tab_pane_g3_cp4

0x205f,	// (0x0000217e) bg_passive_tab_pane_g1_cp4

0x2029,	// (0x00002148) bg_passive_tab_pane_g2_cp4

0x206a,	// (0x00002189) bg_passive_tab_pane_g3_cp4

0x21f4,	// (0x00002313) bg_active_tab_pane_g1_cp5

0x2029,	// (0x00002148) bg_active_tab_pane_g2_cp5

0x21fd,	// (0x0000231c) bg_active_tab_pane_g3_cp5

0x21f4,	// (0x00002313) bg_passive_tab_pane_g1_cp5

0x2029,	// (0x00002148) bg_passive_tab_pane_g2_cp5

0x21fd,	// (0x0000231c) bg_passive_tab_pane_g3_cp5

0x575d,	// (0x0000587c) list_set_graphic_pane_ParamLimits

0x575d,	// (0x0000587c) list_set_graphic_pane

0x0174,	// (0x00000293) bg_set_opt_pane_cp4

0x2226,	// (0x00002345) list_set_graphic_pane_g1_ParamLimits

0x2226,	// (0x00002345) list_set_graphic_pane_g1

0x2232,	// (0x00002351) list_set_graphic_pane_g2_ParamLimits

0x2232,	// (0x00002351) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0000f848) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0000f848) list_set_graphic_pane_g

0x0009,

0xfa97,	// (0x0000fbb6) volume_small_pane_cp_g

0x2256,	// (0x00002375) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2256,	// (0x00002375) list_double2_large_graphic_pane_g1_cp2

0x2262,	// (0x00002381) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2262,	// (0x00002381) list_double2_large_graphic_pane_g2_cp2

0x2273,	// (0x00002392) list_double2_large_graphic_pane_g3_cp2

0x227b,	// (0x0000239a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x227b,	// (0x0000239a) list_double2_large_graphic_pane_t1_cp2

0x2291,	// (0x000023b0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2291,	// (0x000023b0) list_double2_large_graphic_pane_t2_cp2

0x4a42,	// (0x00004b61) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a42,	// (0x00004b61) list_double_large_graphic_pane_g1_cp2

0x4a53,	// (0x00004b72) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a53,	// (0x00004b72) list_double_large_graphic_pane_g2_cp2

0x2401,	// (0x00002520) list_double_large_graphic_pane_g3_cp2

0x4a64,	// (0x00004b83) list_double_large_graphic_pane_g4_cp

0x4a6c,	// (0x00004b8b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a6c,	// (0x00004b8b) list_double_large_graphic_pane_t1_cp2

0x4a83,	// (0x00004ba2) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a83,	// (0x00004ba2) list_double_large_graphic_pane_t2_cp2

0x22f3,	// (0x00002412) list_double2_graphic_pane_g1_cp2_ParamLimits

0x22f3,	// (0x00002412) list_double2_graphic_pane_g1_cp2

0x2301,	// (0x00002420) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2301,	// (0x00002420) list_double2_graphic_pane_g2_cp2

0x2312,	// (0x00002431) list_double2_graphic_pane_g3_cp2

0x231c,	// (0x0000243b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x231c,	// (0x0000243b) list_double2_graphic_pane_t1_cp2

0x2332,	// (0x00002451) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2332,	// (0x00002451) list_double2_graphic_pane_t2_cp2

0x2344,	// (0x00002463) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2344,	// (0x00002463) list_single_number_heading_pane_g1_cp2

0x2350,	// (0x0000246f) list_single_number_heading_pane_g2_cp2

0x2358,	// (0x00002477) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2358,	// (0x00002477) list_single_number_heading_pane_t1_cp2

0x236e,	// (0x0000248d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x236e,	// (0x0000248d) list_single_number_heading_pane_t2_cp2

0x2380,	// (0x0000249f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2380,	// (0x0000249f) list_single_number_heading_pane_t3_cp2

0x2344,	// (0x00002463) list_single_heading_pane_g1_cp2_ParamLimits

0x2344,	// (0x00002463) list_single_heading_pane_g1_cp2

0x2350,	// (0x0000246f) list_single_heading_pane_g2_cp2

0x2358,	// (0x00002477) list_single_heading_pane_t1_cp2_ParamLimits

0x2358,	// (0x00002477) list_single_heading_pane_t1_cp2

0x484a,	// (0x00004969) list_single_heading_pane_t2_cp2_ParamLimits

0x484a,	// (0x00004969) list_single_heading_pane_t2_cp2

0x4792,	// (0x000048b1) list_double_graphic_pane_g1_cp2_ParamLimits

0x4792,	// (0x000048b1) list_double_graphic_pane_g1_cp2

0x479e,	// (0x000048bd) list_double_graphic_pane_g2_cp2_ParamLimits

0x479e,	// (0x000048bd) list_double_graphic_pane_g2_cp2

0x47ad,	// (0x000048cc) list_double_graphic_pane_g3_cp2

0x47b5,	// (0x000048d4) list_double_graphic_pane_t1_cp2_ParamLimits

0x47b5,	// (0x000048d4) list_double_graphic_pane_t1_cp2

0x47cb,	// (0x000048ea) list_double_graphic_pane_t2_cp2_ParamLimits

0x47cb,	// (0x000048ea) list_double_graphic_pane_t2_cp2

0x23f5,	// (0x00002514) list_double_number_pane_g1_cp2_ParamLimits

0x23f5,	// (0x00002514) list_double_number_pane_g1_cp2

0x2401,	// (0x00002520) list_double_number_pane_g2_cp2

0x4756,	// (0x00004875) list_double_number_pane_t1_cp2_ParamLimits

0x4756,	// (0x00004875) list_double_number_pane_t1_cp2

0x476a,	// (0x00004889) list_double_number_pane_t2_cp2_ParamLimits

0x476a,	// (0x00004889) list_double_number_pane_t2_cp2

0x4780,	// (0x0000489f) list_double_number_pane_t3_cp2_ParamLimits

0x4780,	// (0x0000489f) list_double_number_pane_t3_cp2

0x462e,	// (0x0000474d) list_single_graphic_pane_g1_cp2_ParamLimits

0x462e,	// (0x0000474d) list_single_graphic_pane_g1_cp2

0x2462,	// (0x00002581) list_single_graphic_pane_g2_cp2_ParamLimits

0x2462,	// (0x00002581) list_single_graphic_pane_g2_cp2

0x246e,	// (0x0000258d) list_single_graphic_pane_g3_cp2

0x4604,	// (0x00004723) list_single_graphic_pane_t1_cp2_ParamLimits

0x4604,	// (0x00004723) list_single_graphic_pane_t1_cp2

0x2462,	// (0x00002581) list_single_number_pane_g1_cp2_ParamLimits

0x2462,	// (0x00002581) list_single_number_pane_g1_cp2

0x246e,	// (0x0000258d) list_single_number_pane_g2_cp2

0x4604,	// (0x00004723) list_single_number_pane_t1_cp2_ParamLimits

0x4604,	// (0x00004723) list_single_number_pane_t1_cp2

0x461a,	// (0x00004739) list_single_number_pane_t2_cp2_ParamLimits

0x461a,	// (0x00004739) list_single_number_pane_t2_cp2

0x2262,	// (0x00002381) list_double2_pane_g1_cp2_ParamLimits

0x2262,	// (0x00002381) list_double2_pane_g1_cp2

0x2273,	// (0x00002392) list_double2_pane_g2_cp2

0x23cd,	// (0x000024ec) list_double2_pane_t1_cp2_ParamLimits

0x23cd,	// (0x000024ec) list_double2_pane_t1_cp2

0x23e3,	// (0x00002502) list_double2_pane_t2_cp2_ParamLimits

0x23e3,	// (0x00002502) list_double2_pane_t2_cp2

0x23f5,	// (0x00002514) list_double_pane_g1_cp2_ParamLimits

0x23f5,	// (0x00002514) list_double_pane_g1_cp2

0x2401,	// (0x00002520) list_double_pane_g2_cp2

0x2409,	// (0x00002528) list_double_pane_t1_cp2_ParamLimits

0x2409,	// (0x00002528) list_double_pane_t1_cp2

0x241f,	// (0x0000253e) list_double_pane_t2_cp2_ParamLimits

0x241f,	// (0x0000253e) list_double_pane_t2_cp2

0x2452,	// (0x00002571) list_single_pane_cp2_g3

0x2462,	// (0x00002581) list_single_pane_g1_cp2_ParamLimits

0x2462,	// (0x00002581) list_single_pane_g1_cp2

0x246e,	// (0x0000258d) list_single_pane_g2_cp2

0x2476,	// (0x00002595) list_single_pane_t1_cp2_ParamLimits

0x2476,	// (0x00002595) list_single_pane_t1_cp2

0x248e,	// (0x000025ad) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x248e,	// (0x000025ad) list_single_large_graphic_pane_g1_cp2

0x0cd3,	// (0x00000df2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0cd3,	// (0x00000df2) list_single_large_graphic_pane_g2_cp2

0x249a,	// (0x000025b9) list_single_large_graphic_pane_g3_cp2

0x24a2,	// (0x000025c1) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x24a2,	// (0x000025c1) list_single_large_graphic_pane_g4_cp1

0x24bc,	// (0x000025db) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x24bc,	// (0x000025db) list_single_large_graphic_pane_t1_cp2

0x447d,	// (0x0000459c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x447d,	// (0x0000459c) list_single_graphic_heading_pane_g1_cp2

0x444a,	// (0x00004569) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x444a,	// (0x00004569) list_single_graphic_heading_pane_g4_cp2

0x246e,	// (0x0000258d) list_single_graphic_heading_pane_g5_cp2

0x4489,	// (0x000045a8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4489,	// (0x000045a8) list_single_graphic_heading_pane_t1_cp2

0x449f,	// (0x000045be) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x449f,	// (0x000045be) list_single_graphic_heading_pane_t2_cp2

0x443e,	// (0x0000455d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x443e,	// (0x0000455d) list_single_2graphic_pane_g1_cp2

0x444a,	// (0x00004569) list_single_2graphic_pane_g2_cp2_ParamLimits

0x444a,	// (0x00004569) list_single_2graphic_pane_g2_cp2

0x246e,	// (0x0000258d) list_single_2graphic_pane_g3_cp2

0x445b,	// (0x0000457a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x445b,	// (0x0000457a) list_single_2graphic_pane_g4_cp2

0x4467,	// (0x00004586) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4467,	// (0x00004586) list_single_2graphic_pane_t1_cp2

0xf4ff,	// (0x0000f61e) list_highlight_pane_g10_cp1

0x4016,	// (0x00004135) list_highlight_pane_g1_cp1

0x401e,	// (0x0000413d) list_highlight_pane_g2_cp1

0x4026,	// (0x00004145) list_highlight_pane_g3_cp1

0x402e,	// (0x0000414d) list_highlight_pane_g4_cp1

0x4036,	// (0x00004155) list_highlight_pane_g5_cp1

0x403e,	// (0x0000415d) list_highlight_pane_g6_cp1

0x4046,	// (0x00004165) list_highlight_pane_g7_cp1

0x404e,	// (0x0000416d) list_highlight_pane_g8_cp1

0x4056,	// (0x00004175) list_highlight_pane_g9_cp1

0xd2b1,	// (0x0000d3d0) form_field_slider_pane_t3

0xd2bf,	// (0x0000d3de) form_field_slider_pane_t4

0x3f52,	// (0x00004071) slider_form_pane_ParamLimits

0x3f52,	// (0x00004071) slider_form_pane

0x0174,	// (0x00000293) control_abbreviations

0x0174,	// (0x00000293) control_conventions

0x0174,	// (0x00000293) control_definitions

0x0174,	// (0x00000293) format_table_attribute

0x4894,	// (0x000049b3) bg_popup_preview_window_pane_g9

0x0174,	// (0x00000293) format_table_data2

0x0174,	// (0x00000293) format_table_data3

0x0174,	// (0x00000293) format_table_data_example

0x0008,

0x0174,	// (0x00000293) intro_purpose

0xf8b9,	// (0x0000f9d8) bg_popup_preview_window_pane_g

0x0174,	// (0x00000293) texts_category

0x0174,	// (0x00000293) texts_graphics

0x24d2,	// (0x000025f1) text_digital

0x24e1,	// (0x00002600) text_primary

0x24f0,	// (0x0000260f) text_primary_small

0x24ff,	// (0x0000261e) text_secondary

0x250e,	// (0x0000262d) text_title

0x5176,	// (0x00005295) bg_passive_tab_pane_g1_cp3_srt

0x2029,	// (0x00002148) bg_passive_tab_pane_g2_cp3_srt

0x517f,	// (0x0000529e) bg_passive_tab_pane_g3_cp3_srt

0x070e,	// (0x0000082d) bg_active_tab_pane_cp3_srt_ParamLimits

0x070e,	// (0x0000082d) bg_active_tab_pane_cp3_srt

0x5188,	// (0x000052a7) tabs_4_active_pane_srt_g1

0xd632,	// (0x0000d751) tabs_4_active_pane_srt_t1_ParamLimits

0xd632,	// (0x0000d751) tabs_4_active_pane_srt_t1

0x5176,	// (0x00005295) bg_active_tab_pane_g1_cp3_copy1

0x2029,	// (0x00002148) bg_active_tab_pane_g2_cp3_copy1

0x517f,	// (0x0000529e) bg_active_tab_pane_g3_cp3_copy1

0x03e8,	// (0x00000507) tabs_2_long_active_pane_srt_ParamLimits

0x03e8,	// (0x00000507) tabs_2_long_active_pane_srt

0x03e8,	// (0x00000507) tabs_2_long_passive_pane_srt_ParamLimits

0x03e8,	// (0x00000507) tabs_2_long_passive_pane_srt

0x2a6c,	// (0x00002b8b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2a6c,	// (0x00002b8b) bg_passive_tab_pane_cp4_srt

0x4d24,	// (0x00004e43) bg_passive_tab_pane_g1_cp4_srt

0x2029,	// (0x00002148) bg_passive_tab_pane_g2_cp4_srt

0x4d2d,	// (0x00004e4c) bg_passive_tab_pane_g3_cp4_srt

0x03e8,	// (0x00000507) bg_active_tab_pane_cp4_srt_ParamLimits

0x03e8,	// (0x00000507) bg_active_tab_pane_cp4_srt

0xd41c,	// (0x0000d53b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd41c,	// (0x0000d53b) tabs_2_long_active_pane_srt_t1

0x4d24,	// (0x00004e43) bg_active_tab_pane_g1_cp4_srt

0x2029,	// (0x00002148) bg_active_tab_pane_g2_cp4_srt

0x4d2d,	// (0x00004e4c) bg_active_tab_pane_g3_cp4_srt

0x070e,	// (0x0000082d) tabs_3_long_active_pane_srt_ParamLimits

0x070e,	// (0x0000082d) tabs_3_long_active_pane_srt

0x070e,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x070e,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt

0x070e,	// (0x0000082d) tabs_3_long_passive_pane_srt_ParamLimits

0x070e,	// (0x0000082d) tabs_3_long_passive_pane_srt

0x2a6c,	// (0x00002b8b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2a6c,	// (0x00002b8b) bg_passive_tab_pane_cp5_srt

0x21f4,	// (0x00002313) bg_passive_tab_pane_g1_cp5_srt

0x2029,	// (0x00002148) bg_passive_tab_pane_g2_cp5_srt

0x21fd,	// (0x0000231c) bg_passive_tab_pane_g3_cp5_srt

0x03e8,	// (0x00000507) bg_active_tab_pane_cp5_srt_ParamLimits

0x03e8,	// (0x00000507) bg_active_tab_pane_cp5_srt

0xd406,	// (0x0000d525) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd406,	// (0x0000d525) tabs_3_long_active_pane_srt_t1

0x21f4,	// (0x00002313) bg_active_tab_pane_g1_cp5_srt

0x2029,	// (0x00002148) bg_active_tab_pane_g2_cp5_srt

0x21fd,	// (0x0000231c) bg_active_tab_pane_g3_cp5_srt

0x4d04,	// (0x00004e23) navi_text_pane_srt_t1

0x4cfc,	// (0x00004e1b) navi_icon_pane_srt_g1

0x278c,	// (0x000028ab) midp_editing_number_pane_srt

0x251d,	// (0x0000263c) midp_ticker_pane_srt

0x2794,	// (0x000028b3) midp_ticker_pane_srt_g1

0x279c,	// (0x000028bb) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0000f867) midp_ticker_pane_srt_g

0x27a4,	// (0x000028c3) midp_ticker_pane_srt_t1

0x4ced,	// (0x00004e0c) midp_editing_number_pane_t1_copy1

0xc43e,	// (0x0000c55d) listscroll_midp_pane

0xc43e,	// (0x0000c55d) midp_form_pane

0x2595,	// (0x000026b4) midp_info_popup_window_ParamLimits

0x2595,	// (0x000026b4) midp_info_popup_window

0x1519,	// (0x00001638) bg_popup_sub_pane_cp50_ParamLimits

0x1519,	// (0x00001638) bg_popup_sub_pane_cp50

0x3c3a,	// (0x00003d59) listscroll_midp_info_pane_ParamLimits

0x3c3a,	// (0x00003d59) listscroll_midp_info_pane

0x3c1a,	// (0x00003d39) listscroll_form_midp_pane_ParamLimits

0x3c1a,	// (0x00003d39) listscroll_form_midp_pane

0x3c26,	// (0x00003d45) scroll_bar_cp050

0x3c1a,	// (0x00003d39) list_midp_pane

0x5fbe,	// (0x000060dd) signal_pane_g2_cp

0x3b34,	// (0x00003c53) listscroll_midp_info_pane_t1_ParamLimits

0x3b34,	// (0x00003c53) listscroll_midp_info_pane_t1

0x3b4c,	// (0x00003c6b) listscroll_midp_info_pane_t2_ParamLimits

0x3b4c,	// (0x00003c6b) listscroll_midp_info_pane_t2

0x3b8a,	// (0x00003ca9) listscroll_midp_info_pane_t3_ParamLimits

0x3b8a,	// (0x00003ca9) listscroll_midp_info_pane_t3

0x3bc4,	// (0x00003ce3) listscroll_midp_info_pane_t4_ParamLimits

0x3bc4,	// (0x00003ce3) listscroll_midp_info_pane_t4

0x0003,

0xf7f4,	// (0x0000f913) listscroll_midp_info_pane_t_ParamLimits

0xf7f4,	// (0x0000f913) listscroll_midp_info_pane_t

0x157a,	// (0x00001699) scroll_pane_cp21

0x3ad2,	// (0x00003bf1) form_midp_field_choice_group_pane

0x3adb,	// (0x00003bfa) form_midp_field_text_pane

0x3b1a,	// (0x00003c39) form_midp_field_time_pane

0x3b22,	// (0x00003c41) form_midp_gauge_slider_pane

0x3b2b,	// (0x00003c4a) form_midp_gauge_wait_pane

0x0174,	// (0x00000293) form_midp_image_pane

0xd29b,	// (0x0000d3ba) list_single_midp_pane_ParamLimits

0xd29b,	// (0x0000d3ba) list_single_midp_pane

0xd27a,	// (0x0000d399) form_midp_field_text_pane_t1

0x3795,	// (0x000038b4) input_focus_pane_cp050

0x3a93,	// (0x00003bb2) list_midp_form_text_pane

0x3a2b,	// (0x00003b4a) form_midp_field_choice_group_pane_t1

0x3a39,	// (0x00003b58) input_focus_pane_cp051

0x3a4d,	// (0x00003b6c) list_midp_choice_pane

0x0174,	// (0x00000293) status_idle_pane

0x3a0f,	// (0x00003b2e) form_midp_field_time_pane_t1

0xf4ff,	// (0x0000f61e) wait_anim_pane_g2_copy1

0x3a1d,	// (0x00003b3c) form_midp_field_time_pane_t2

0x0001,

0x2643,	// (0x00002762) aid_navinavi_width_2_pane

0xf7ef,	// (0x0000f90e) form_midp_field_time_pane_t

0x0174,	// (0x00000293) input_focus_pane_cp052

0x0174,	// (0x00000293) bg_input_focus_pane_cp040

0x39cf,	// (0x00003aee) form_midp_gauge_slider_pane_t1

0x39dd,	// (0x00003afc) form_midp_gauge_slider_pane_t2

0xd25e,	// (0x0000d37d) form_midp_gauge_slider_pane_t3

0xd26c,	// (0x0000d38b) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e6,	// (0x0000f905) form_midp_gauge_slider_pane_t

0x3a07,	// (0x00003b26) form_midp_slider_pane

0x03e8,	// (0x00000507) bg_input_focus_pane_cp041_ParamLimits

0x03e8,	// (0x00000507) bg_input_focus_pane_cp041

0x399c,	// (0x00003abb) form_midp_gauge_wait_pane_t1_ParamLimits

0x399c,	// (0x00003abb) form_midp_gauge_wait_pane_t1

0x39ae,	// (0x00003acd) form_midp_gauge_wait_pane_t2_ParamLimits

0x39ae,	// (0x00003acd) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e1,	// (0x0000f900) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e1,	// (0x0000f900) form_midp_gauge_wait_pane_t

0x39c0,	// (0x00003adf) form_midp_wait_pane_ParamLimits

0x39c0,	// (0x00003adf) form_midp_wait_pane

0x3966,	// (0x00003a85) form_midp_image_pane_g1

0x396f,	// (0x00003a8e) form_midp_image_pane_t1

0x397e,	// (0x00003a9d) form_midp_image_pane_t2

0x398d,	// (0x00003aac) form_midp_image_pane_t3

0x0002,

0xf7da,	// (0x0000f8f9) form_midp_image_pane_t

0x394e,	// (0x00003a6d) list_single_midp_pane_g1

0x3957,	// (0x00003a76) list_single_midp_pane_t1

0xd24a,	// (0x0000d369) list_midp_form_item_pane_ParamLimits

0xd24a,	// (0x0000d369) list_midp_form_item_pane

0x25eb,	// (0x0000270a) list_midp_form_item_pane_t1

0x25fa,	// (0x00002719) midp_ticker_pane_g1

0x2606,	// (0x00002725) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0000f84d) midp_ticker_pane_g

0x2612,	// (0x00002731) midp_ticker_pane_t1

0x4fe9,	// (0x00005108) midp_editing_number_pane_t1

0x4fc7,	// (0x000050e6) midp_editing_number_pane

0x4fd6,	// (0x000050f5) midp_ticker_pane

0x4ccb,	// (0x00004dea) ai_message_heading_pane

0x0174,	// (0x00000293) bg_popup_window_pane_cp14

0x4cd3,	// (0x00004df2) listscroll_ai_message_pane

0x4c55,	// (0x00004d74) ai_message_heading_pane_g1_ParamLimits

0x4c55,	// (0x00004d74) ai_message_heading_pane_g1

0x4c61,	// (0x00004d80) ai_message_heading_pane_g2_ParamLimits

0x4c61,	// (0x00004d80) ai_message_heading_pane_g2

0x4c6d,	// (0x00004d8c) ai_message_heading_pane_g3_ParamLimits

0x4c6d,	// (0x00004d8c) ai_message_heading_pane_g3

0x4c79,	// (0x00004d98) ai_message_heading_pane_g4_ParamLimits

0x4c79,	// (0x00004d98) ai_message_heading_pane_g4

0x0003,

0xf91b,	// (0x0000fa3a) ai_message_heading_pane_g_ParamLimits

0xf91b,	// (0x0000fa3a) ai_message_heading_pane_g

0x4c85,	// (0x00004da4) ai_message_heading_pane_t1_ParamLimits

0x4c85,	// (0x00004da4) ai_message_heading_pane_t1

0x4c9f,	// (0x00004dbe) ai_message_heading_pane_t2_ParamLimits

0x4c9f,	// (0x00004dbe) ai_message_heading_pane_t2

0x0001,

0xf924,	// (0x0000fa43) ai_message_heading_pane_t_ParamLimits

0xf924,	// (0x0000fa43) ai_message_heading_pane_t

0x4cb1,	// (0x00004dd0) bg_popup_heading_pane_cp1_ParamLimits

0x4cb1,	// (0x00004dd0) bg_popup_heading_pane_cp1

0x4c43,	// (0x00004d62) list_ai_message_pane_ParamLimits

0x4c43,	// (0x00004d62) list_ai_message_pane

0x157a,	// (0x00001699) scroll_pane_cp10

0x4b8f,	// (0x00004cae) list_ai_message_pane_g1

0x4b97,	// (0x00004cb6) list_ai_message_pane_g2

0x0001,

0xf8f8,	// (0x0000fa17) list_ai_message_pane_g

0x4b9f,	// (0x00004cbe) list_ai_message_pane_t1_ParamLimits

0x4b9f,	// (0x00004cbe) list_ai_message_pane_t1

0x4bb4,	// (0x00004cd3) list_ai_message_pane_t2_ParamLimits

0x4bb4,	// (0x00004cd3) list_ai_message_pane_t2

0x4bc9,	// (0x00004ce8) list_ai_message_pane_t3_ParamLimits

0x4bc9,	// (0x00004ce8) list_ai_message_pane_t3

0x4bde,	// (0x00004cfd) list_ai_message_pane_t4_ParamLimits

0x4bde,	// (0x00004cfd) list_ai_message_pane_t4

0x0003,

0xf8fd,	// (0x0000fa1c) list_ai_message_pane_t_ParamLimits

0xf8fd,	// (0x0000fa1c) list_ai_message_pane_t

0xd3e5,	// (0x0000d504) cell_ai_soft_ind_pane_ParamLimits

0xd3e5,	// (0x0000d504) cell_ai_soft_ind_pane

0x2624,	// (0x00002743) cell_ai_soft_ind_pane_g1_ParamLimits

0x2624,	// (0x00002743) cell_ai_soft_ind_pane_g1

0x0174,	// (0x00000293) grid_highlight_cp1

0x2631,	// (0x00002750) text_secondary_cp56_ParamLimits

0x2631,	// (0x00002750) text_secondary_cp56

0x4b4f,	// (0x00004c6e) example_general_pane_ParamLimits

0x4b4f,	// (0x00004c6e) example_general_pane

0x4b5b,	// (0x00004c7a) example_parent_pane_g1_ParamLimits

0x4b5b,	// (0x00004c7a) example_parent_pane_g1

0x4b67,	// (0x00004c86) example_parent_pane_t1_ParamLimits

0x4b67,	// (0x00004c86) example_parent_pane_t1

0xca95,	// (0x0000cbb4) popup_preview_text_window_ParamLimits

0xca95,	// (0x0000cbb4) popup_preview_text_window

0x245a,	// (0x00002579) list_single_pane_cp2_g4

0x07ea,	// (0x00000909) bg_popup_preview_window_pane_ParamLimits

0x07ea,	// (0x00000909) bg_popup_preview_window_pane

0x489c,	// (0x000049bb) popup_preview_text_window_t1_ParamLimits

0x489c,	// (0x000049bb) popup_preview_text_window_t1

0x48ba,	// (0x000049d9) popup_preview_text_window_t2_ParamLimits

0x48ba,	// (0x000049d9) popup_preview_text_window_t2

0x4903,	// (0x00004a22) popup_preview_text_window_t3_ParamLimits

0x4903,	// (0x00004a22) popup_preview_text_window_t3

0x4948,	// (0x00004a67) popup_preview_text_window_t4_ParamLimits

0x4948,	// (0x00004a67) popup_preview_text_window_t4

0x0004,

0xf8cc,	// (0x0000f9eb) popup_preview_text_window_t_ParamLimits

0xf8cc,	// (0x0000f9eb) popup_preview_text_window_t

0x49c6,	// (0x00004ae5) scroll_pane_cp11

0x35e7,	// (0x00003706) bg_popup_preview_window_pane_g1

0x485c,	// (0x0000497b) bg_popup_preview_window_pane_g2

0x4864,	// (0x00004983) bg_popup_preview_window_pane_g3

0x486c,	// (0x0000498b) bg_popup_preview_window_pane_g4

0x4874,	// (0x00004993) bg_popup_preview_window_pane_g5

0x487c,	// (0x0000499b) bg_popup_preview_window_pane_g6

0x4884,	// (0x000049a3) bg_popup_preview_window_pane_g7

0x488c,	// (0x000049ab) bg_popup_preview_window_pane_g8

0xf515,	// (0x0000f634) aid_popup_width_pane

0xca11,	// (0x0000cb30) popup_midp_note_alarm_window_ParamLimits

0xca11,	// (0x0000cb30) popup_midp_note_alarm_window

0x1249,	// (0x00001368) data_form_pane_ParamLimits

0xc140,	// (0x0000c25f) form_field_data_pane_g1

0xc14a,	// (0x0000c269) form_field_data_pane_t1_ParamLimits

0x1277,	// (0x00001396) input_focus_pane_ParamLimits

0x1285,	// (0x000013a4) data_form_wide_pane_ParamLimits

0x1291,	// (0x000013b0) form_field_data_wide_pane_g1

0x12bd,	// (0x000013dc) form_field_data_wide_pane_t1_ParamLimits

0x0a91,	// (0x00000bb0) input_focus_pane_cp6_ParamLimits

0xc247,	// (0x0000c366) input_popup_find_pane_g1_ParamLimits

0xc247,	// (0x0000c366) input_popup_find_pane_g1

0x18a8,	// (0x000019c7) aid_navi_side_left_pane

0x18bd,	// (0x000019dc) aid_navi_side_right_pane

0x4111,	// (0x00004230) bg_popup_window_pane_cp30_ParamLimits

0x4111,	// (0x00004230) bg_popup_window_pane_cp30

0x418b,	// (0x000042aa) popup_midp_note_alarm_window_g1_ParamLimits

0x418b,	// (0x000042aa) popup_midp_note_alarm_window_g1

0x41bb,	// (0x000042da) popup_midp_note_alarm_window_t1_ParamLimits

0x41bb,	// (0x000042da) popup_midp_note_alarm_window_t1

0x425c,	// (0x0000437b) popup_midp_note_alarm_window_t2_ParamLimits

0x425c,	// (0x0000437b) popup_midp_note_alarm_window_t2

0x430a,	// (0x00004429) popup_midp_note_alarm_window_t3_ParamLimits

0x430a,	// (0x00004429) popup_midp_note_alarm_window_t3

0x433c,	// (0x0000445b) popup_midp_note_alarm_window_t4_ParamLimits

0x433c,	// (0x0000445b) popup_midp_note_alarm_window_t4

0x4362,	// (0x00004481) popup_midp_note_alarm_window_t5_ParamLimits

0x4362,	// (0x00004481) popup_midp_note_alarm_window_t5

0x000a,

0xf869,	// (0x0000f988) popup_midp_note_alarm_window_t_ParamLimits

0xf869,	// (0x0000f988) popup_midp_note_alarm_window_t

0x440e,	// (0x0000452d) wait_bar_pane_cp1_ParamLimits

0x440e,	// (0x0000452d) wait_bar_pane_cp1

0x0174,	// (0x00000293) wait_anim_pane_copy1

0x0174,	// (0x00000293) wait_border_pane_copy1

0x3df7,	// (0x00003f16) wait_border_pane_g1_copy1

0x12d4,	// (0x000013f3) form_field_popup_pane_g1

0xc164,	// (0x0000c283) form_field_popup_pane_t1_ParamLimits

0x1277,	// (0x00001396) input_focus_pane_cp7_ParamLimits

0x12f4,	// (0x00001413) list_form_pane_ParamLimits

0x1300,	// (0x0000141f) form_field_popup_wide_pane_g1

0x1308,	// (0x00001427) form_field_popup_wide_pane_t1_ParamLimits

0x1277,	// (0x00001396) input_focus_pane_cp8_ParamLimits

0x131a,	// (0x00001439) list_form_wide_pane_ParamLimits

0x5218,	// (0x00005337) aid_size_cell_graphic_pane

0xc1e3,	// (0x0000c302) data_form_pane_t1_ParamLimits

0xd587,	// (0x0000d6a6) data_form_wide_pane_t1_ParamLimits

0xce5d,	// (0x0000cf7c) bg_status_flat_pane

0xba62,	// (0x0000bb81) title_pane_t1_ParamLimits

0x03b0,	// (0x000004cf) title_pane_t2_ParamLimits

0x03d6,	// (0x000004f5) title_pane_t3_ParamLimits

0xf532,	// (0x0000f651) title_pane_t_ParamLimits

0x1bc1,	// (0x00001ce0) level_1_signal_ParamLimits

0x1bd3,	// (0x00001cf2) level_2_signal_ParamLimits

0x1be6,	// (0x00001d05) level_3_signal_ParamLimits

0x1bf9,	// (0x00001d18) level_4_signal_ParamLimits

0x1c0c,	// (0x00001d2b) level_5_signal_ParamLimits

0x1c1f,	// (0x00001d3e) level_6_signal_ParamLimits

0x1c32,	// (0x00001d51) level_7_signal_ParamLimits

0x1bc1,	// (0x00001ce0) level_1_battery_ParamLimits

0x1bd3,	// (0x00001cf2) level_2_battery_ParamLimits

0x1be6,	// (0x00001d05) level_3_battery_ParamLimits

0x1bf9,	// (0x00001d18) level_4_battery_ParamLimits

0x1c0c,	// (0x00001d2b) level_5_battery_ParamLimits

0x1c1f,	// (0x00001d3e) level_6_battery_ParamLimits

0x1c32,	// (0x00001d51) level_7_battery_ParamLimits

0x4016,	// (0x00004135) bg_status_flat_pane_g1

0x401e,	// (0x0000413d) bg_status_flat_pane_g2

0x4026,	// (0x00004145) bg_status_flat_pane_g3

0x402e,	// (0x0000414d) bg_status_flat_pane_g4

0x4036,	// (0x00004155) bg_status_flat_pane_g5

0x403e,	// (0x0000415d) bg_status_flat_pane_g6

0x4046,	// (0x00004165) bg_status_flat_pane_g7

0xbaee,	// (0x0000bc0d) tabs_3_active_pane_t1_ParamLimits

0xbaee,	// (0x0000bc0d) tabs_3_passive_pane_t1_ParamLimits

0xbb00,	// (0x0000bc1f) tabs_4_active_pane_t1_ParamLimits

0xbb00,	// (0x0000bc1f) tabs_4_1_passive_pane_t1_ParamLimits

0xc255,	// (0x0000c374) tabs_2_active_pane_t1_ParamLimits

0xc255,	// (0x0000c374) tabs_2_passive_pane_t1_ParamLimits

0x03e8,	// (0x00000507) bg_active_tab_pane_cp4_ParamLimits

0xc267,	// (0x0000c386) tabs_2_long_active_pane_t1_ParamLimits

0x2a6c,	// (0x00002b8b) bg_passive_tab_pane_cp4_ParamLimits

0x36b8,	// (0x000037d7) list_single_midp_graphic_pane_t1_ParamLimits

0x03e8,	// (0x00000507) bg_active_tab_pane_cp5_ParamLimits

0xc27a,	// (0x0000c399) tabs_3_long_active_pane_t1_ParamLimits

0x2a6c,	// (0x00002b8b) bg_passive_tab_pane_cp5_ParamLimits

0x36b8,	// (0x000037d7) list_single_midp_graphic_pane_t1

0xce5d,	// (0x0000cf7c) bg_status_flat_pane_ParamLimits

0x31e9,	// (0x00003308) indicator_pane_cp2_ParamLimits

0x31e9,	// (0x00003308) indicator_pane_cp2

0xcfdb,	// (0x0000d0fa) navi_pane_srt_ParamLimits

0xcfdb,	// (0x0000d0fa) navi_pane_srt

0x3338,	// (0x00003457) popup_clock_digital_analogue_window_cp1

0x0570,	// (0x0000068f) indicator_pane_t1

0x251d,	// (0x0000263c) copy_highlight_pane

0x251d,	// (0x0000263c) cursor_graphics_pane

0x251d,	// (0x0000263c) graphic_within_text_pane

0x251d,	// (0x0000263c) link_highlight_pane

0x4989,	// (0x00004aa8) popup_preview_text_window_t5_ParamLimits

0x4989,	// (0x00004aa8) popup_preview_text_window_t5

0x264b,	// (0x0000276a) cursor_digital_pane

0x264b,	// (0x0000276a) cursor_primary_pane

0x265c,	// (0x0000277b) cursor_primary_small_pane

0x2664,	// (0x00002783) cursor_secondary_pane

0x266c,	// (0x0000278b) cursor_title_pane

0x264b,	// (0x0000276a) link_highlight_digital_pane

0x2653,	// (0x00002772) link_highlight_primary_pane

0x265c,	// (0x0000277b) link_highlight_primary_small_pane

0x2664,	// (0x00002783) link_highlight_secondary_pane

0x266c,	// (0x0000278b) link_highlight_title_pane

0x264b,	// (0x0000276a) copy_highlight_digital_pane

0x264b,	// (0x0000276a) copy_highlight_primary_pane

0x265c,	// (0x0000277b) copy_highlight_primary_small_pane

0x2664,	// (0x00002783) copy_highlight_secondary_pane

0x266c,	// (0x0000278b) copy_highlight_title_pane

0x2664,	// (0x00002783) graphic_text_digital_pane

0x40b4,	// (0x000041d3) graphic_text_primary_pane

0x40bd,	// (0x000041dc) graphic_text_primary_small_pane

0x265c,	// (0x0000277b) graphic_text_secondary_pane

0x264b,	// (0x0000276a) graphic_text_title_pane

0xc4e3,	// (0x0000c602) cursor_primary_pane_g1

0x40a6,	// (0x000041c5) cursor_text_primary_t1

0xd2e1,	// (0x0000d400) cursor_primary_small_pane_g1

0x4098,	// (0x000041b7) cursor_text_primary_small_t1

0xd2d7,	// (0x0000d3f6) cursor_primary_small_pane_g1_copy1

0x4080,	// (0x0000419f) cursor_text_primary_small_t1_copy1

0x405e,	// (0x0000417d) cursor_text_title_t1

0xd2cd,	// (0x0000d3ec) cursor_title_pane_g1

0xc4e3,	// (0x0000c602) cursor_digital_pane_g1

0x267e,	// (0x0000279d) cursor_text_digital_t1

0x26a3,	// (0x000027c2) link_highlight_primary_pane_g1

0x4007,	// (0x00004126) link_highlight_primary_pane_t1

0x268c,	// (0x000027ab) link_highlight_primary_small_pane_g1

0x2694,	// (0x000027b3) link_highlight_primary_small_pane_t1

0x26a3,	// (0x000027c2) link_highlight_secondary_pane_g1

0x26ab,	// (0x000027ca) link_highlight_secondary_pane_t1

0x3f7b,	// (0x0000409a) link_highlight_title_pane_g1

0x3f83,	// (0x000040a2) link_highlight_title_pane_t1

0x3f64,	// (0x00004083) link_highlight_digital_pane_g1

0x3f6c,	// (0x0000408b) link_highlight_digital_pane_t1

0x3e3c,	// (0x00003f5b) copy_highlight_primary_pane_g1

0x3e44,	// (0x00003f63) copy_highlight_primary_pane_t1

0x3e16,	// (0x00003f35) copy_highlight_primary_small_pane_g1

0x3e2d,	// (0x00003f4c) copy_highlight_primary_small_pane_t1

0x26ba,	// (0x000027d9) copy_highlight_secondary_pane_g1

0x26c2,	// (0x000027e1) copy_highlight_secondary_pane_t1

0x3e16,	// (0x00003f35) copy_highlight_title_pane_g1

0x3e1e,	// (0x00003f3d) copy_highlight_title_pane_t1

0x3e3c,	// (0x00003f5b) copy_highlight_digital_pane_g1

0x549e,	// (0x000055bd) copy_highlight_digital_pane_t1

0x53f2,	// (0x00005511) graphic_text_primary_pane_g1

0x5482,	// (0x000055a1) graphic_text_primary_pane_t1

0x5490,	// (0x000055af) graphic_text_primary_pane_t2

0x0001,

0xf998,	// (0x0000fab7) graphic_text_primary_pane_t

0x545e,	// (0x0000557d) graphic_text_primary_small_pane_g1

0x5466,	// (0x00005585) graphic_text_primary_small_pane_t1

0x5474,	// (0x00005593) graphic_text_primary_small_pane_t2

0x0001,

0xf993,	// (0x0000fab2) graphic_text_primary_small_pane_t

0x543a,	// (0x00005559) graphic_text_secondary_pane_g1

0x5442,	// (0x00005561) graphic_text_secondary_pane_t1

0x5450,	// (0x0000556f) graphic_text_secondary_pane_t2

0x0001,

0xf98e,	// (0x0000faad) graphic_text_secondary_pane_t

0x5416,	// (0x00005535) graphic_text_title_pane_g1

0x541e,	// (0x0000553d) graphic_text_title_pane_t1

0x542c,	// (0x0000554b) graphic_text_title_pane_t2

0x0001,

0xf989,	// (0x0000faa8) graphic_text_title_pane_t

0x53f2,	// (0x00005511) graphic_text_digital_pane_g1

0x53fa,	// (0x00005519) graphic_text_digital_pane_t1

0x5408,	// (0x00005527) graphic_text_digital_pane_t2

0x0001,

0xf984,	// (0x0000faa3) graphic_text_digital_pane_t

0x03e8,	// (0x00000507) navi_icon_pane_srt_ParamLimits

0x03e8,	// (0x00000507) navi_icon_pane_srt

0x0174,	// (0x00000293) navi_midp_pane_srt

0x0174,	// (0x00000293) navi_navi_pane_srt

0x03e8,	// (0x00000507) navi_text_pane_srt_ParamLimits

0x03e8,	// (0x00000507) navi_text_pane_srt

0x53bd,	// (0x000054dc) navi_navi_icon_text_pane_srt

0x53c5,	// (0x000054e4) navi_navi_pane_srt_g1_ParamLimits

0x53c5,	// (0x000054e4) navi_navi_pane_srt_g1

0x53d7,	// (0x000054f6) navi_navi_pane_srt_g2_ParamLimits

0x53d7,	// (0x000054f6) navi_navi_pane_srt_g2

0x0001,

0xf97f,	// (0x0000fa9e) navi_navi_pane_srt_g_ParamLimits

0xf97f,	// (0x0000fa9e) navi_navi_pane_srt_g

0x53e9,	// (0x00005508) navi_navi_tabs_pane_srt

0x53bd,	// (0x000054dc) navi_navi_text_pane_srt

0x53bd,	// (0x000054dc) navi_navi_volume_pane_srt

0x53ae,	// (0x000054cd) navi_navi_text_pane_srt_t1

0x5389,	// (0x000054a8) navi_navi_volume_pane_srt_g1

0x5391,	// (0x000054b0) volume_small_pane_srt_ParamLimits

0x5391,	// (0x000054b0) volume_small_pane_srt

0x26d1,	// (0x000027f0) volume_small_pane_srt_g1_ParamLimits

0x26d1,	// (0x000027f0) volume_small_pane_srt_g1

0x26e1,	// (0x00002800) volume_small_pane_srt_g2_ParamLimits

0x26e1,	// (0x00002800) volume_small_pane_srt_g2

0x26f2,	// (0x00002811) volume_small_pane_srt_g3_ParamLimits

0x26f2,	// (0x00002811) volume_small_pane_srt_g3

0x2703,	// (0x00002822) volume_small_pane_srt_g4_ParamLimits

0x2703,	// (0x00002822) volume_small_pane_srt_g4

0x2714,	// (0x00002833) volume_small_pane_srt_g5_ParamLimits

0x2714,	// (0x00002833) volume_small_pane_srt_g5

0x2725,	// (0x00002844) volume_small_pane_srt_g6_ParamLimits

0x2725,	// (0x00002844) volume_small_pane_srt_g6

0x2736,	// (0x00002855) volume_small_pane_srt_g7_ParamLimits

0x2736,	// (0x00002855) volume_small_pane_srt_g7

0x2747,	// (0x00002866) volume_small_pane_srt_g8_ParamLimits

0x2747,	// (0x00002866) volume_small_pane_srt_g8

0x2758,	// (0x00002877) volume_small_pane_srt_g9_ParamLimits

0x2758,	// (0x00002877) volume_small_pane_srt_g9

0x2769,	// (0x00002888) volume_small_pane_srt_g10_ParamLimits

0x2769,	// (0x00002888) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0000f852) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0000f852) volume_small_pane_srt_g

0x0893,	// (0x000009b2) query_popup_data_pane_cp2

0x5377,	// (0x00005496) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5377,	// (0x00005496) navi_navi_icon_text_pane_srt_t1

0x40b4,	// (0x000041d3) navi_tabs_2_long_pane_srt

0x40b4,	// (0x000041d3) navi_tabs_2_pane_srt

0x40b4,	// (0x000041d3) navi_tabs_3_long_pane_srt

0x40b4,	// (0x000041d3) navi_tabs_3_pane_srt

0x40b4,	// (0x000041d3) navi_tabs_4_pane_srt

0x534f,	// (0x0000546e) tabs_2_active_pane_srt_ParamLimits

0x534f,	// (0x0000546e) tabs_2_active_pane_srt

0x535f,	// (0x0000547e) tabs_2_passive_pane_srt_ParamLimits

0x535f,	// (0x0000547e) tabs_2_passive_pane_srt

0x3795,	// (0x000038b4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3795,	// (0x000038b4) bg_passive_tab_pane_cp1_srt

0x5323,	// (0x00005442) bg_passive_tab_pane_g1_cp1_srt

0x2029,	// (0x00002148) bg_passive_tab_pane_g2_cp1_srt

0x532c,	// (0x0000544b) bg_passive_tab_pane_g3_cp1_srt

0x070e,	// (0x0000082d) bg_active_tab_pane_cp1_srt_ParamLimits

0x070e,	// (0x0000082d) bg_active_tab_pane_cp1_srt

0x5335,	// (0x00005454) tabs_2_active_pane_srt_g1

0xd6b5,	// (0x0000d7d4) tabs_2_active_pane_srt_t1_ParamLimits

0xd6b5,	// (0x0000d7d4) tabs_2_active_pane_srt_t1

0x5323,	// (0x00005442) bg_active_tab_pane_g1_cp1_srt

0x2029,	// (0x00002148) bg_active_tab_pane_g2_cp1_srt

0x532c,	// (0x0000544b) bg_active_tab_pane_g3_cp1_srt

0x52f0,	// (0x0000540f) tabs_3_active_pane_srt_ParamLimits

0x52f0,	// (0x0000540f) tabs_3_active_pane_srt

0x5301,	// (0x00005420) tabs_3_passive_pane_cp_srt_ParamLimits

0x5301,	// (0x00005420) tabs_3_passive_pane_cp_srt

0x5312,	// (0x00005431) tabs_3_passive_pane_srt_ParamLimits

0x5312,	// (0x00005431) tabs_3_passive_pane_srt

0x3795,	// (0x000038b4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3795,	// (0x000038b4) bg_passive_tab_pane_cp2_srt

0x277a,	// (0x00002899) bg_passive_tab_pane_g1_cp2_srt

0x2029,	// (0x00002148) bg_passive_tab_pane_g2_cp2_srt

0x2783,	// (0x000028a2) bg_passive_tab_pane_g3_cp2_srt

0x070e,	// (0x0000082d) bg_active_tab_pane_cp2_srt_ParamLimits

0x070e,	// (0x0000082d) bg_active_tab_pane_cp2_srt

0x52d6,	// (0x000053f5) tabs_3_active_pane_srt_g1

0xd69f,	// (0x0000d7be) tabs_3_active_pane_srt_t1_ParamLimits

0xd69f,	// (0x0000d7be) tabs_3_active_pane_srt_t1

0x277a,	// (0x00002899) bg_active_tab_pane_g1_cp2_srt

0x2029,	// (0x00002148) bg_active_tab_pane_g2_cp2_srt

0x2783,	// (0x000028a2) bg_active_tab_pane_g3_cp2_srt

0x528e,	// (0x000053ad) tabs_4_active_pane_srt_ParamLimits

0x528e,	// (0x000053ad) tabs_4_active_pane_srt

0x52a0,	// (0x000053bf) tabs_4_passive_pane_cp2_srt_ParamLimits

0x52a0,	// (0x000053bf) tabs_4_passive_pane_cp2_srt

0x2a2c,	// (0x00002b4b) aid_size_cell_toolbar

0x4e0d,	// (0x00004f2c) main_idle_act_pane_ParamLimits

0x2c4f,	// (0x00002d6e) popup_large_graphic_colour_window_ParamLimits

0xcd21,	// (0x0000ce40) popup_toolbar_window_ParamLimits

0xcd21,	// (0x0000ce40) popup_toolbar_window

0x5013,	// (0x00005132) list_single_graphic_2heading_pane_ParamLimits

0x5013,	// (0x00005132) list_single_graphic_2heading_pane

0x1934,	// (0x00001a53) aid_size_cell_apps_grid_lsc_pane

0x1946,	// (0x00001a65) aid_size_cell_apps_grid_prt_pane

0x2a6c,	// (0x00002b8b) bg_wml_button_pane_cp1_ParamLimits

0x2a6c,	// (0x00002b8b) bg_wml_button_pane_cp1

0xd27a,	// (0x0000d399) form_midp_field_text_pane_t1_ParamLimits

0x3795,	// (0x000038b4) input_focus_pane_cp050_ParamLimits

0x3a93,	// (0x00003bb2) list_midp_form_text_pane_ParamLimits

0x3a39,	// (0x00003b58) input_focus_pane_cp051_ParamLimits

0x3a4d,	// (0x00003b6c) list_midp_choice_pane_ParamLimits

0xd218,	// (0x0000d337) list_single_2graphic_pane_cp3_ParamLimits

0xd218,	// (0x0000d337) list_single_2graphic_pane_cp3

0xd22b,	// (0x0000d34a) list_single_midp_graphic_pane_ParamLimits

0xd22b,	// (0x0000d34a) list_single_midp_graphic_pane

0x0d4d,	// (0x00000e6c) list_single_graphic_2heading_pane_g1_ParamLimits

0x0d4d,	// (0x00000e6c) list_single_graphic_2heading_pane_g1

0x0cd3,	// (0x00000df2) list_single_graphic_2heading_pane_g4_ParamLimits

0x0cd3,	// (0x00000df2) list_single_graphic_2heading_pane_g4

0x0cdf,	// (0x00000dfe) list_single_graphic_2heading_pane_g5_ParamLimits

0x0cdf,	// (0x00000dfe) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0000f8a5) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0000f8a5) list_single_graphic_2heading_pane_g

0x3497,	// (0x000035b6) list_single_graphic_2heading_pane_t1_ParamLimits

0x3497,	// (0x000035b6) list_single_graphic_2heading_pane_t1

0x34ab,	// (0x000035ca) list_single_graphic_2heading_pane_t2_ParamLimits

0x34ab,	// (0x000035ca) list_single_graphic_2heading_pane_t2

0x34c7,	// (0x000035e6) list_single_graphic_2heading_pane_t3_ParamLimits

0x34c7,	// (0x000035e6) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0000f8ac) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0000f8ac) list_single_graphic_2heading_pane_t

0x34df,	// (0x000035fe) bg_popup_sub_pane_cp2

0x3509,	// (0x00003628) grid_toobar_pane

0x3545,	// (0x00003664) cell_toolbar_pane_ParamLimits

0x3545,	// (0x00003664) cell_toolbar_pane

0x358b,	// (0x000036aa) cell_toolbar_pane_g1_ParamLimits

0x358b,	// (0x000036aa) cell_toolbar_pane_g1

0x359f,	// (0x000036be) cell_toolbar_pane_g2_ParamLimits

0x359f,	// (0x000036be) cell_toolbar_pane_g2

0x0001,

0xf794,	// (0x0000f8b3) cell_toolbar_pane_g_ParamLimits

0xf794,	// (0x0000f8b3) cell_toolbar_pane_g

0x35c1,	// (0x000036e0) grid_highlight_pane_cp2_ParamLimits

0x35c1,	// (0x000036e0) grid_highlight_pane_cp2

0x35db,	// (0x000036fa) toolbar_button_pane

0x35e7,	// (0x00003706) toolbar_button_pane_g1

0x35ef,	// (0x0000370e) toolbar_button_pane_g2

0x35f7,	// (0x00003716) toolbar_button_pane_g3

0x35ff,	// (0x0000371e) toolbar_button_pane_g4

0x3607,	// (0x00003726) toolbar_button_pane_g5

0x360f,	// (0x0000372e) toolbar_button_pane_g6

0x3617,	// (0x00003736) toolbar_button_pane_g7

0x361f,	// (0x0000373e) toolbar_button_pane_g8

0x3627,	// (0x00003746) toolbar_button_pane_g9

0x0009,

0xf799,	// (0x0000f8b8) toolbar_button_pane_g

0x3637,	// (0x00003756) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3637,	// (0x00003756) list_single_2graphic_pane_g1_cp3

0xd17a,	// (0x0000d299) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd17a,	// (0x0000d299) list_single_2graphic_pane_g2_cp3

0x3654,	// (0x00003773) list_single_2graphic_pane_g3_cp3

0x365c,	// (0x0000377b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x365c,	// (0x0000377b) list_single_2graphic_pane_g4_cp3

0x3668,	// (0x00003787) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3668,	// (0x00003787) list_single_2graphic_pane_t1_cp3

0x36ac,	// (0x000037cb) list_single_midp_graphic_pane_g2_ParamLimits

0x36ac,	// (0x000037cb) list_single_midp_graphic_pane_g2

0x2a34,	// (0x00002b53) aid_zoom_text_primary

0x2a3c,	// (0x00002b5b) aid_zoom_text_secondary

0x2834,	// (0x00002953) status_small_pane_g7_ParamLimits

0x2834,	// (0x00002953) status_small_pane_g7

0x2857,	// (0x00002976) status_small_pane_t1_ParamLimits

0xba3e,	// (0x0000bb5d) title_pane_g2

0x0003,

0xf529,	// (0x0000f648) title_pane_g

0xbcb6,	// (0x0000bdd5) aid_size_cell_colour_1_pane_ParamLimits

0xbcb6,	// (0x0000bdd5) aid_size_cell_colour_1_pane

0xbcca,	// (0x0000bde9) aid_size_cell_colour_2_pane_ParamLimits

0xbcca,	// (0x0000bde9) aid_size_cell_colour_2_pane

0xbcde,	// (0x0000bdfd) aid_size_cell_colour_3_pane_ParamLimits

0xbcde,	// (0x0000bdfd) aid_size_cell_colour_3_pane

0xbcf2,	// (0x0000be11) aid_size_cell_colour_4_pane_ParamLimits

0xbcf2,	// (0x0000be11) aid_size_cell_colour_4_pane

0x17b0,	// (0x000018cf) title_pane_stacon_g1_ParamLimits

0x17b0,	// (0x000018cf) title_pane_stacon_g1

0x3e9b,	// (0x00003fba) popup_note_wait_window_g3_ParamLimits

0x3e9b,	// (0x00003fba) popup_note_wait_window_g3

0x3f11,	// (0x00004030) popup_note_wait_window_t5_ParamLimits

0x3f11,	// (0x00004030) popup_note_wait_window_t5

0x0174,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc723,	// (0x0000c842) popup_feb_china_hwr_fs_window_ParamLimits

0xc723,	// (0x0000c842) popup_feb_china_hwr_fs_window

0xd18b,	// (0x0000d2aa) aid_size_cell_hwr_fs_ParamLimits

0xd18b,	// (0x0000d2aa) aid_size_cell_hwr_fs

0x3795,	// (0x000038b4) bg_popup_sub_pane_cp3_ParamLimits

0x3795,	// (0x000038b4) bg_popup_sub_pane_cp3

0xd1a0,	// (0x0000d2bf) grid_hwr_fs_pane_ParamLimits

0xd1a0,	// (0x0000d2bf) grid_hwr_fs_pane

0x37b9,	// (0x000038d8) linegrid_hwr_fs_pane_ParamLimits

0x37b9,	// (0x000038d8) linegrid_hwr_fs_pane

0xd1b8,	// (0x0000d2d7) cell_hwr_fs_pane_ParamLimits

0xd1b8,	// (0x0000d2d7) cell_hwr_fs_pane

0x37eb,	// (0x0000390a) linegrid_hwr_fs_pane_g1_ParamLimits

0x37eb,	// (0x0000390a) linegrid_hwr_fs_pane_g1

0xd1de,	// (0x0000d2fd) linegrid_hwr_fs_pane_g2_ParamLimits

0xd1de,	// (0x0000d2fd) linegrid_hwr_fs_pane_g2

0x3809,	// (0x00003928) linegrid_hwr_fs_pane_g3_ParamLimits

0x3809,	// (0x00003928) linegrid_hwr_fs_pane_g3

0x3815,	// (0x00003934) linegrid_hwr_fs_pane_g4_ParamLimits

0x3815,	// (0x00003934) linegrid_hwr_fs_pane_g4

0x382f,	// (0x0000394e) linegrid_hwr_fs_pane_g5_ParamLimits

0x382f,	// (0x0000394e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bf,	// (0x0000f8de) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bf,	// (0x0000f8de) linegrid_hwr_fs_pane_g

0x3845,	// (0x00003964) cell_hwr_fs_pane_g1_ParamLimits

0x3845,	// (0x00003964) cell_hwr_fs_pane_g1

0x33ce,	// (0x000034ed) cell_hwr_fs_pane_g2_ParamLimits

0x33ce,	// (0x000034ed) cell_hwr_fs_pane_g2

0xd1f0,	// (0x0000d30f) cell_hwr_fs_pane_g3_ParamLimits

0xd1f0,	// (0x0000d30f) cell_hwr_fs_pane_g3

0xd1fd,	// (0x0000d31c) cell_hwr_fs_pane_g4_ParamLimits

0xd1fd,	// (0x0000d31c) cell_hwr_fs_pane_g4

0x0003,

0xf7ca,	// (0x0000f8e9) cell_hwr_fs_pane_g_ParamLimits

0xf7ca,	// (0x0000f8e9) cell_hwr_fs_pane_g

0xd20a,	// (0x0000d329) cell_hwr_fs_pane_t1

0x0174,	// (0x00000293) grid_highlight_pane_cp6

0x0174,	// (0x00000293) main_idle_act2_pane

0x1561,	// (0x00001680) aid_inside_area_popup_secondary

0xd2eb,	// (0x0000d40a) aid_inside_area_window_primary_ParamLimits

0xd2eb,	// (0x0000d40a) aid_inside_area_window_primary

0x54ad,	// (0x000055cc) ai2_news_ticker_pane

0x54b5,	// (0x000055d4) aid_size_cell_ai1_link_ParamLimits

0x54b5,	// (0x000055d4) aid_size_cell_ai1_link

0xd6cb,	// (0x0000d7ea) popup_ai2_data_window_ParamLimits

0xd6cb,	// (0x0000d7ea) popup_ai2_data_window

0x54e5,	// (0x00005604) popup_ai2_link_window_ParamLimits

0x54e5,	// (0x00005604) popup_ai2_link_window

0x3795,	// (0x000038b4) bg_popup_sub_pane_cp4_ParamLimits

0x3795,	// (0x000038b4) bg_popup_sub_pane_cp4

0x54f9,	// (0x00005618) grid_ai2_link_pane_ParamLimits

0x54f9,	// (0x00005618) grid_ai2_link_pane

0x5510,	// (0x0000562f) popup_ai2_link_window_g1_ParamLimits

0x5510,	// (0x0000562f) popup_ai2_link_window_g1

0x551c,	// (0x0000563b) popup_ai2_link_window_g2_ParamLimits

0x551c,	// (0x0000563b) popup_ai2_link_window_g2

0x0001,

0xf99d,	// (0x0000fabc) popup_ai2_link_window_g_ParamLimits

0xf99d,	// (0x0000fabc) popup_ai2_link_window_g

0x552b,	// (0x0000564a) ai2_mp_button_pane

0x5533,	// (0x00005652) ai2_mp_volume_pane

0x3a39,	// (0x00003b58) bg_popup_sub_pane_cp5_ParamLimits

0x3a39,	// (0x00003b58) bg_popup_sub_pane_cp5

0x553b,	// (0x0000565a) heading_ai2_gene_pane_ParamLimits

0x553b,	// (0x0000565a) heading_ai2_gene_pane

0x5547,	// (0x00005666) list_ai2_gene_pane_ParamLimits

0x5547,	// (0x00005666) list_ai2_gene_pane

0x558f,	// (0x000056ae) cell_ai2_link_pane_ParamLimits

0x558f,	// (0x000056ae) cell_ai2_link_pane

0x55a5,	// (0x000056c4) cell_ai2_link_pane_g1

0x0174,	// (0x00000293) grid_highlight_pane_cp7

0x5675,	// (0x00005794) ai2_mp_volume_pane_g1

0x567d,	// (0x0000579c) ai2_mp_volume_pane_g2

0xd6f5,	// (0x0000d814) list_ai2_gene_pane_t1

0x5685,	// (0x000057a4) ai2_mp_volume_pane_g3

0x0002,

0xf9b6,	// (0x0000fad5) ai2_mp_volume_pane_g

0x568d,	// (0x000057ac) volume_small_pane_cp3

0x5696,	// (0x000057b5) aid_size_cell_ai2_button

0x569e,	// (0x000057bd) grid_ai2_button_pane

0x56a7,	// (0x000057c6) cell_ai2_button_pane_ParamLimits

0x56a7,	// (0x000057c6) cell_ai2_button_pane

0xf4ff,	// (0x0000f61e) cell_ai2_button_pane_g1

0x0174,	// (0x00000293) grid_highlight_pane_cp8

0x5635,	// (0x00005754) ai2_gene_pane_t1_ParamLimits

0x5635,	// (0x00005754) ai2_gene_pane_t1

0xc6c1,	// (0x0000c7e0) aid_height_parent_landscape

0xd433,	// (0x0000d552) aid_height_set_list

0x4e0d,	// (0x00004f2c) aid_size_parent

0x5218,	// (0x00005337) aid_size_cell_graphic_pane_ParamLimits

0x5557,	// (0x00005676) popup_ai2_data_window_g1_ParamLimits

0x5557,	// (0x00005676) popup_ai2_data_window_g1

0x5563,	// (0x00005682) ai2_news_ticker_pane_g1

0x556b,	// (0x0000568a) ai2_news_ticker_pane_g2

0x0001,

0xf9a2,	// (0x0000fac1) ai2_news_ticker_pane_g

0x5573,	// (0x00005692) ai2_news_ticker_pane_t1

0x5581,	// (0x000056a0) ai2_news_ticker_pane_t2

0x0001,

0xf9a7,	// (0x0000fac6) ai2_news_ticker_pane_t

0x55ae,	// (0x000056cd) heading_ai2_gene_pane_g1

0x55b6,	// (0x000056d5) heading_ai2_gene_pane_t1_ParamLimits

0x55b6,	// (0x000056d5) heading_ai2_gene_pane_t1

0x55cb,	// (0x000056ea) list_highlight_pane_cp6

0xd6df,	// (0x0000d7fe) ai2_gene_pane_ParamLimits

0xd6df,	// (0x0000d7fe) ai2_gene_pane

0xd703,	// (0x0000d822) list_ai2_gene_pane_t2

0x0001,

0xf9ac,	// (0x0000facb) list_ai2_gene_pane_t

0x5606,	// (0x00005725) list_highlight_pane_cp8_ParamLimits

0x5606,	// (0x00005725) list_highlight_pane_cp8

0x5617,	// (0x00005736) ai2_gene_pane_g1_ParamLimits

0x5617,	// (0x00005736) ai2_gene_pane_g1

0x5629,	// (0x00005748) ai2_gene_pane_g2_ParamLimits

0x5629,	// (0x00005748) ai2_gene_pane_g2

0x0001,

0xf9b1,	// (0x0000fad0) ai2_gene_pane_g_ParamLimits

0xf9b1,	// (0x0000fad0) ai2_gene_pane_g

0x0cb6,	// (0x00000dd5) scroll_pane_cp12

0xc67e,	// (0x0000c79d) control_pane_t3_ParamLimits

0xc67e,	// (0x0000c79d) control_pane_t3

0x2848,	// (0x00002967) status_small_pane_g8_ParamLimits

0x2848,	// (0x00002967) status_small_pane_g8

0xc7b8,	// (0x0000c8d7) popup_find_window_ParamLimits

0xca4b,	// (0x0000cb6a) popup_note_image_window_ParamLimits

0x0d4d,	// (0x00000e6c) list_double2_graphic_pane_vc_g1_ParamLimits

0x0d4d,	// (0x00000e6c) list_double2_graphic_pane_vc_g1

0x0cd3,	// (0x00000df2) list_double2_graphic_pane_vc_g2_ParamLimits

0x0cd3,	// (0x00000df2) list_double2_graphic_pane_vc_g2

0x0cdf,	// (0x00000dfe) list_double2_graphic_pane_vc_g3_ParamLimits

0x0cdf,	// (0x00000dfe) list_double2_graphic_pane_vc_g3

0x0002,

0xf786,	// (0x0000f8a5) list_double2_graphic_pane_vc_g_ParamLimits

0xf786,	// (0x0000f8a5) list_double2_graphic_pane_vc_g

0x3575,	// (0x00003694) list_double2_graphic_pane_vc_t1_ParamLimits

0x3575,	// (0x00003694) list_double2_graphic_pane_vc_t1

0x0cd3,	// (0x00000df2) list_single_heading_pane_vc_g1_ParamLimits

0x0cd3,	// (0x00000df2) list_single_heading_pane_vc_g1

0x0cdf,	// (0x00000dfe) list_single_heading_pane_vc_g2_ParamLimits

0x0cdf,	// (0x00000dfe) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f6c2) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f6c2) list_single_heading_pane_vc_g

0x3684,	// (0x000037a3) list_single_heading_pane_vc_t1_ParamLimits

0x3684,	// (0x000037a3) list_single_heading_pane_vc_t1

0x369a,	// (0x000037b9) list_single_heading_pane_vc_t2_ParamLimits

0x369a,	// (0x000037b9) list_single_heading_pane_vc_t2

0x0001,

0xf7ae,	// (0x0000f8cd) list_single_heading_pane_vc_t_ParamLimits

0xf7ae,	// (0x0000f8cd) list_single_heading_pane_vc_t

0x36ce,	// (0x000037ed) list_setting_number_pane_vc_g1_ParamLimits

0x36ce,	// (0x000037ed) list_setting_number_pane_vc_g1

0x36da,	// (0x000037f9) list_setting_number_pane_vc_g2_ParamLimits

0x36da,	// (0x000037f9) list_setting_number_pane_vc_g2

0x0001,

0xf7b3,	// (0x0000f8d2) list_setting_number_pane_vc_g_ParamLimits

0xf7b3,	// (0x0000f8d2) list_setting_number_pane_vc_g

0x36e6,	// (0x00003805) list_setting_number_pane_vc_t1_ParamLimits

0x36e6,	// (0x00003805) list_setting_number_pane_vc_t1

0x36fa,	// (0x00003819) list_setting_number_pane_vc_t2_ParamLimits

0x36fa,	// (0x00003819) list_setting_number_pane_vc_t2

0x3716,	// (0x00003835) list_setting_number_pane_vc_t3_ParamLimits

0x3716,	// (0x00003835) list_setting_number_pane_vc_t3

0x0002,

0xf7b8,	// (0x0000f8d7) list_setting_number_pane_vc_t_ParamLimits

0xf7b8,	// (0x0000f8d7) list_setting_number_pane_vc_t

0x3744,	// (0x00003863) set_value_pane_vc_ParamLimits

0x3744,	// (0x00003863) set_value_pane_vc

0x5013,	// (0x00005132) list_double2_graphic_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_double2_graphic_pane_vc

0x5013,	// (0x00005132) list_double2_large_graphic_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_double2_large_graphic_pane_vc

0x5013,	// (0x00005132) list_double2_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_double2_pane_vc

0x5013,	// (0x00005132) list_double_graphic_heading_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_double_graphic_heading_pane_vc

0x5013,	// (0x00005132) list_double_graphic_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_double_graphic_pane_vc

0x5013,	// (0x00005132) list_double_heading_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_double_heading_pane_vc

0x5025,	// (0x00005144) list_double_large_graphic_pane_vc_ParamLimits

0x5025,	// (0x00005144) list_double_large_graphic_pane_vc

0x5013,	// (0x00005132) list_double_number_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_double_number_pane_vc

0x5013,	// (0x00005132) list_double_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_double_pane_vc

0x5013,	// (0x00005132) list_double_time_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_double_time_pane_vc

0x5013,	// (0x00005132) list_setting_number_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_setting_number_pane_vc

0x5013,	// (0x00005132) list_setting_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_setting_pane_vc

0x5013,	// (0x00005132) list_single_graphic_heading_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_single_graphic_heading_pane_vc

0x5013,	// (0x00005132) list_single_heading_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_single_heading_pane_vc

0x5013,	// (0x00005132) list_single_number_heading_pane_vc_ParamLimits

0x5013,	// (0x00005132) list_single_number_heading_pane_vc

0x0d4d,	// (0x00000e6c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0d4d,	// (0x00000e6c) list_double_graphic_heading_pane_vc_g1

0x56db,	// (0x000057fa) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x56db,	// (0x000057fa) list_double_graphic_heading_pane_vc_g2

0x56e7,	// (0x00005806) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x56e7,	// (0x00005806) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bd,	// (0x0000fadc) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bd,	// (0x0000fadc) list_double_graphic_heading_pane_vc_g

0x56f3,	// (0x00005812) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56f3,	// (0x00005812) list_double_graphic_heading_pane_vc_t1

0x570f,	// (0x0000582e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x570f,	// (0x0000582e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c4,	// (0x0000fae3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c4,	// (0x0000fae3) list_double_graphic_heading_pane_vc_t

0x36ce,	// (0x000037ed) list_setting_pane_vc_g1_ParamLimits

0x36ce,	// (0x000037ed) list_setting_pane_vc_g1

0x36da,	// (0x000037f9) list_setting_pane_vc_g2_ParamLimits

0x36da,	// (0x000037f9) list_setting_pane_vc_g2

0x0001,

0xf7b3,	// (0x0000f8d2) list_setting_pane_vc_g_ParamLimits

0xf7b3,	// (0x0000f8d2) list_setting_pane_vc_g

0x593d,	// (0x00005a5c) list_setting_pane_vc_t1_ParamLimits

0x593d,	// (0x00005a5c) list_setting_pane_vc_t1

0x5959,	// (0x00005a78) list_setting_pane_vc_t2_ParamLimits

0x5959,	// (0x00005a78) list_setting_pane_vc_t2

0x0001,

0xf9f2,	// (0x0000fb11) list_setting_pane_vc_t_ParamLimits

0xf9f2,	// (0x0000fb11) list_setting_pane_vc_t

0x3744,	// (0x00003863) set_value_pane_cp_vc_ParamLimits

0x3744,	// (0x00003863) set_value_pane_cp_vc

0x0cd3,	// (0x00000df2) list_single_number_heading_pane_vc_g1_ParamLimits

0x0cd3,	// (0x00000df2) list_single_number_heading_pane_vc_g1

0x0cdf,	// (0x00000dfe) list_single_number_heading_pane_vc_g2_ParamLimits

0x0cdf,	// (0x00000dfe) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f6c2) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f6c2) list_single_number_heading_pane_vc_g

0x0d01,	// (0x00000e20) list_single_number_heading_pane_vc_t1_ParamLimits

0x0d01,	// (0x00000e20) list_single_number_heading_pane_vc_t1

0x5975,	// (0x00005a94) list_single_number_heading_pane_vc_t2_ParamLimits

0x5975,	// (0x00005a94) list_single_number_heading_pane_vc_t2

0x0d3b,	// (0x00000e5a) list_single_number_heading_pane_vc_t3_ParamLimits

0x0d3b,	// (0x00000e5a) list_single_number_heading_pane_vc_t3

0x0002,

0xf9f7,	// (0x0000fb16) list_single_number_heading_pane_vc_t_ParamLimits

0xf9f7,	// (0x0000fb16) list_single_number_heading_pane_vc_t

0x0d4d,	// (0x00000e6c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0d4d,	// (0x00000e6c) list_single_graphic_heading_pane_vc_g1

0x0cd3,	// (0x00000df2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0cd3,	// (0x00000df2) list_single_graphic_heading_pane_vc_g4

0x0cdf,	// (0x00000dfe) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0cdf,	// (0x00000dfe) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf786,	// (0x0000f8a5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf786,	// (0x0000f8a5) list_single_graphic_heading_pane_vc_g

0x0d01,	// (0x00000e20) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0d01,	// (0x00000e20) list_single_graphic_heading_pane_vc_t1

0x598b,	// (0x00005aaa) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x598b,	// (0x00005aaa) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf9fe,	// (0x0000fb1d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0000fb1d) list_single_graphic_heading_pane_vc_t

0x0cd3,	// (0x00000df2) list_double2_pane_vc_g1_ParamLimits

0x0cd3,	// (0x00000df2) list_double2_pane_vc_g1

0x0cdf,	// (0x00000dfe) list_double2_pane_vc_g2_ParamLimits

0x0cdf,	// (0x00000dfe) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f6c2) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f6c2) list_double2_pane_vc_g

0x4fb1,	// (0x000050d0) list_double2_pane_vc_t1_ParamLimits

0x4fb1,	// (0x000050d0) list_double2_pane_vc_t1

0x599d,	// (0x00005abc) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x599d,	// (0x00005abc) list_double2_large_graphic_pane_vc_g1

0x0cd3,	// (0x00000df2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0cd3,	// (0x00000df2) list_double2_large_graphic_pane_vc_g2

0x0cdf,	// (0x00000dfe) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0cdf,	// (0x00000dfe) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0000f6df) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0000f6df) list_double2_large_graphic_pane_vc_g

0x59a9,	// (0x00005ac8) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59a9,	// (0x00005ac8) list_double2_large_graphic_pane_vc_t1

0x59bf,	// (0x00005ade) list_double_time_pane_vc_g1_ParamLimits

0x59bf,	// (0x00005ade) list_double_time_pane_vc_g1

0x59cb,	// (0x00005aea) list_double_time_pane_vc_g2_ParamLimits

0x59cb,	// (0x00005aea) list_double_time_pane_vc_g2

0x0001,

0xfa03,	// (0x0000fb22) list_double_time_pane_vc_g_ParamLimits

0xfa03,	// (0x0000fb22) list_double_time_pane_vc_g

0x59d7,	// (0x00005af6) list_double_time_pane_vc_t1_ParamLimits

0x59d7,	// (0x00005af6) list_double_time_pane_vc_t1

0x59fb,	// (0x00005b1a) list_double_time_pane_vc_t2_ParamLimits

0x59fb,	// (0x00005b1a) list_double_time_pane_vc_t2

0x5a2a,	// (0x00005b49) list_double_time_pane_vc_t3_ParamLimits

0x5a2a,	// (0x00005b49) list_double_time_pane_vc_t3

0x5a3c,	// (0x00005b5b) list_double_time_pane_vc_t4_ParamLimits

0x5a3c,	// (0x00005b5b) list_double_time_pane_vc_t4

0x0003,

0xfa08,	// (0x0000fb27) list_double_time_pane_vc_t_ParamLimits

0xfa08,	// (0x0000fb27) list_double_time_pane_vc_t

0x0cd3,	// (0x00000df2) list_double_pane_vc_g1_ParamLimits

0x0cd3,	// (0x00000df2) list_double_pane_vc_g1

0x0cdf,	// (0x00000dfe) list_double_pane_vc_g2_ParamLimits

0x0cdf,	// (0x00000dfe) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f6c2) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f6c2) list_double_pane_vc_g

0x5a50,	// (0x00005b6f) list_double_pane_vc_t1_ParamLimits

0x5a50,	// (0x00005b6f) list_double_pane_vc_t1

0x5a64,	// (0x00005b83) list_double_pane_vc_t2_ParamLimits

0x5a64,	// (0x00005b83) list_double_pane_vc_t2

0x0001,

0xfa11,	// (0x0000fb30) list_double_pane_vc_t_ParamLimits

0xfa11,	// (0x0000fb30) list_double_pane_vc_t

0x0cd3,	// (0x00000df2) list_double_number_pane_vc_g1_ParamLimits

0x0cd3,	// (0x00000df2) list_double_number_pane_vc_g1

0x0cdf,	// (0x00000dfe) list_double_number_pane_vc_g2_ParamLimits

0x0cdf,	// (0x00000dfe) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f6c2) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f6c2) list_double_number_pane_vc_g

0x5a7c,	// (0x00005b9b) list_double_number_pane_vc_t1_ParamLimits

0x5a7c,	// (0x00005b9b) list_double_number_pane_vc_t1

0x5a8e,	// (0x00005bad) list_double_number_pane_vc_t2_ParamLimits

0x5a8e,	// (0x00005bad) list_double_number_pane_vc_t2

0x5aa2,	// (0x00005bc1) list_double_number_pane_vc_t3_ParamLimits

0x5aa2,	// (0x00005bc1) list_double_number_pane_vc_t3

0x0002,

0xfa16,	// (0x0000fb35) list_double_number_pane_vc_t_ParamLimits

0xfa16,	// (0x0000fb35) list_double_number_pane_vc_t

0x5aba,	// (0x00005bd9) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5aba,	// (0x00005bd9) list_double_large_graphic_pane_vc_g1

0x5ad6,	// (0x00005bf5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5ad6,	// (0x00005bf5) list_double_large_graphic_pane_vc_g2

0x5aea,	// (0x00005c09) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5aea,	// (0x00005c09) list_double_large_graphic_pane_vc_g3

0x5af9,	// (0x00005c18) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5af9,	// (0x00005c18) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa1d,	// (0x0000fb3c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa1d,	// (0x0000fb3c) list_double_large_graphic_pane_vc_g

0x5b08,	// (0x00005c27) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5b08,	// (0x00005c27) list_double_large_graphic_pane_vc_t1

0x5b24,	// (0x00005c43) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5b24,	// (0x00005c43) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa26,	// (0x0000fb45) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa26,	// (0x0000fb45) list_double_large_graphic_pane_vc_t

0x56db,	// (0x000057fa) list_double_heading_pane_vc_g1_ParamLimits

0x56db,	// (0x000057fa) list_double_heading_pane_vc_g1

0x56e7,	// (0x00005806) list_double_heading_pane_vc_g2_ParamLimits

0x56e7,	// (0x00005806) list_double_heading_pane_vc_g2

0x0001,

0xfa2b,	// (0x0000fb4a) list_double_heading_pane_vc_g_ParamLimits

0xfa2b,	// (0x0000fb4a) list_double_heading_pane_vc_g

0x5b46,	// (0x00005c65) list_double_heading_pane_vc_t1_ParamLimits

0x5b46,	// (0x00005c65) list_double_heading_pane_vc_t1

0x5b5a,	// (0x00005c79) list_double_heading_pane_vc_t2_ParamLimits

0x5b5a,	// (0x00005c79) list_double_heading_pane_vc_t2

0x0001,

0xfa30,	// (0x0000fb4f) list_double_heading_pane_vc_t_ParamLimits

0xfa30,	// (0x0000fb4f) list_double_heading_pane_vc_t

0x5b72,	// (0x00005c91) list_double_graphic_pane_vc_g1_ParamLimits

0x5b72,	// (0x00005c91) list_double_graphic_pane_vc_g1

0x5b7e,	// (0x00005c9d) list_double_graphic_pane_vc_g2_ParamLimits

0x5b7e,	// (0x00005c9d) list_double_graphic_pane_vc_g2

0x0cd3,	// (0x00000df2) list_double_graphic_pane_vc_g3_ParamLimits

0x0cd3,	// (0x00000df2) list_double_graphic_pane_vc_g3

0x0003,

0xfa35,	// (0x0000fb54) list_double_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0000fb54) list_double_graphic_pane_vc_g

0x5b9b,	// (0x00005cba) list_double_graphic_pane_vc_t1_ParamLimits

0x5b9b,	// (0x00005cba) list_double_graphic_pane_vc_t1

0x5bc5,	// (0x00005ce4) list_double_graphic_pane_vc_t2_ParamLimits

0x5bc5,	// (0x00005ce4) list_double_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0000fb5d) list_double_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0000fb5d) list_double_graphic_pane_vc_t

0xf521,	// (0x0000f640) aid_size_cell_fastswap

0xb825,	// (0x0000b944) aid_size_cell_touch_ParamLimits

0xb825,	// (0x0000b944) aid_size_cell_touch

0x019e,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x019e,	// (0x000002bd) popup_fast_swap_wide_window

0xb9d5,	// (0x0000baf4) touch_pane_ParamLimits

0xb9d5,	// (0x0000baf4) touch_pane

0x1191,	// (0x000012b0) button_value_adjust_pane_cp2

0x1199,	// (0x000012b8) button_value_adjust_pane_cp4

0x11bb,	// (0x000012da) form_field_data_pane_cp2

0xc107,	// (0x0000c226) form_field_data_wide_pane_cp2

0x1a16,	// (0x00001b35) bg_scroll_pane_ParamLimits

0x1a35,	// (0x00001b54) scroll_handle_pane_ParamLimits

0x1a49,	// (0x00001b68) scroll_sc2_down_pane_ParamLimits

0x1a49,	// (0x00001b68) scroll_sc2_down_pane

0x1a70,	// (0x00001b8f) scroll_sc2_up_pane_ParamLimits

0x1a70,	// (0x00001b8f) scroll_sc2_up_pane

0xd833,	// (0x0000d952) grid_wheel_folder_pane_g1_ParamLimits

0xd833,	// (0x0000d952) grid_wheel_folder_pane_g1

0x2170,	// (0x0000228f) clock_nsta_pane_cp2_ParamLimits

0x2170,	// (0x0000228f) clock_nsta_pane_cp2

0xc43e,	// (0x0000c55d) listscroll_midp_pane_ParamLimits

0xc44a,	// (0x0000c569) midp_canvas_pane

0x2a1a,	// (0x00002b39) nsta_clock_indic_pane

0x2a78,	// (0x00002b97) listscroll_form_pane_vc

0x2a9c,	// (0x00002bbb) listscroll_set_pane_vc_ParamLimits

0x2a9c,	// (0x00002bbb) listscroll_set_pane_vc

0xce85,	// (0x0000cfa4) clock_nsta_pane

0xceaf,	// (0x0000cfce) indicator_nsta_pane

0x34df,	// (0x000035fe) bg_popup_sub_pane_cp2_ParamLimits

0x34f3,	// (0x00003612) find_pane_cp2_ParamLimits

0x34f3,	// (0x00003612) find_pane_cp2

0x3509,	// (0x00003628) grid_toobar_pane_ParamLimits

0x3754,	// (0x00003873) list_form_gen_pane_vc_ParamLimits

0x3754,	// (0x00003873) list_form_gen_pane_vc

0x376a,	// (0x00003889) scroll_pane_cp8_vc_ParamLimits

0x376a,	// (0x00003889) scroll_pane_cp8_vc

0x3883,	// (0x000039a2) data_form_wide_pane_vc_ParamLimits

0x3883,	// (0x000039a2) data_form_wide_pane_vc

0x388f,	// (0x000039ae) form_field_data_wide_pane_vc_g1

0x3897,	// (0x000039b6) form_field_data_wide_pane_vc_t1_ParamLimits

0x3897,	// (0x000039b6) form_field_data_wide_pane_vc_t1

0x1277,	// (0x00001396) input_focus_pane_cp6_vc_ParamLimits

0x1277,	// (0x00001396) input_focus_pane_cp6_vc

0x3c1a,	// (0x00003d39) list_midp_pane_ParamLimits

0x5282,	// (0x000053a1) scroll_pane_cp16_ParamLimits

0x5282,	// (0x000053a1) scroll_pane_cp16

0x3c70,	// (0x00003d8f) button_value_adjust_pane_ParamLimits

0x3c70,	// (0x00003d8f) button_value_adjust_pane

0xd444,	// (0x0000d563) button_value_adjust_pane_cp6_ParamLimits

0xd444,	// (0x0000d563) button_value_adjust_pane_cp6

0xd55e,	// (0x0000d67d) settings_code_pane_cp_ParamLimits

0xd55e,	// (0x0000d67d) settings_code_pane_cp

0xf4ff,	// (0x0000f61e) cell_touch_pane_g1

0xf4ff,	// (0x0000f61e) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0000f7f8) cell_touch_pane_g

0xd711,	// (0x0000d830) cell_touch_pane_cp_ParamLimits

0xd711,	// (0x0000d830) cell_touch_pane_cp

0xd72d,	// (0x0000d84c) cell_touch_pane_ParamLimits

0xd72d,	// (0x0000d84c) cell_touch_pane

0xf4ff,	// (0x0000f61e) scroll_sc2_down_pane_g1

0xf4ff,	// (0x0000f61e) scroll_sc2_up_pane_g1

0x0174,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x572d,	// (0x0000584c) list_set_graphic_pane_vc_g1_ParamLimits

0x572d,	// (0x0000584c) list_set_graphic_pane_vc_g1

0x5739,	// (0x00005858) list_set_graphic_pane_vc_g2_ParamLimits

0x5739,	// (0x00005858) list_set_graphic_pane_vc_g2

0x0001,

0xf9c9,	// (0x0000fae8) list_set_graphic_pane_vc_g_ParamLimits

0xf9c9,	// (0x0000fae8) list_set_graphic_pane_vc_g

0x5745,	// (0x00005864) text_primary_small_cp13_vc_ParamLimits

0x5745,	// (0x00005864) text_primary_small_cp13_vc

0x575d,	// (0x0000587c) list_set_graphic_pane_vc_ParamLimits

0x575d,	// (0x0000587c) list_set_graphic_pane_vc

0x0174,	// (0x00000293) input_focus_pane_cp2_vc

0xf4ff,	// (0x0000f61e) setting_code_pane_vc_g1

0x04c4,	// (0x000005e3) setting_code_pane_vc_t1

0x5770,	// (0x0000588f) set_text_pane_vc_t1_ParamLimits

0x5770,	// (0x0000588f) set_text_pane_vc_t1

0x0174,	// (0x00000293) input_focus_pane_cp1_vc

0x578c,	// (0x000058ab) list_set_text_pane_vc

0xf4ff,	// (0x0000f61e) setting_text_pane_vc_g1

0x0174,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x0493,	// (0x000005b2) setting_slider_graphic_pane_vc_g1

0x5796,	// (0x000058b5) setting_slider_graphic_pane_vc_t1

0x57a6,	// (0x000058c5) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ce,	// (0x0000faed) setting_slider_graphic_pane_vc_t

0x57b6,	// (0x000058d5) slider_set_pane_cp_vc

0x57be,	// (0x000058dd) slider_set_pane_vc_g1

0x57c7,	// (0x000058e6) slider_set_pane_vc_g2

0x0006,

0xf9d3,	// (0x0000faf2) slider_set_pane_vc_g

0x13a6,	// (0x000014c5) set_opt_bg_pane_g1_copy1

0x13ae,	// (0x000014cd) set_opt_bg_pane_g2_copy1

0x57f3,	// (0x00005912) set_opt_bg_pane_g3_copy1

0x13be,	// (0x000014dd) set_opt_bg_pane_g4_copy1

0x13c6,	// (0x000014e5) set_opt_bg_pane_g5_copy1

0x13ce,	// (0x000014ed) set_opt_bg_pane_g6_copy1

0x57fd,	// (0x0000591c) set_opt_bg_pane_g7_copy1

0x5807,	// (0x00005926) set_opt_bg_pane_g8_copy1

0x5811,	// (0x00005930) set_opt_bg_pane_g9_copy1

0x0174,	// (0x00000293) bg_set_opt_pane_cp_vc

0x581b,	// (0x0000593a) setting_slider_pane_vc_t1

0x582a,	// (0x00005949) setting_slider_pane_vc_t2

0x583a,	// (0x00005959) setting_slider_pane_vc_t3

0x0002,

0xf9e2,	// (0x0000fb01) setting_slider_pane_vc_t

0x584a,	// (0x00005969) slider_set_pane_vc

0x44b1,	// (0x000045d0) volume_set_pane_vc_g1

0x44ba,	// (0x000045d9) volume_set_pane_vc_g2

0x44c3,	// (0x000045e2) volume_set_pane_vc_g3

0x44cc,	// (0x000045eb) volume_set_pane_vc_g4

0x44d5,	// (0x000045f4) volume_set_pane_vc_g5

0x44de,	// (0x000045fd) volume_set_pane_vc_g6

0x44e7,	// (0x00004606) volume_set_pane_vc_g7

0x44f0,	// (0x0000460f) volume_set_pane_vc_g8

0x44f9,	// (0x00004618) volume_set_pane_vc_g9

0x4502,	// (0x00004621) volume_set_pane_vc_g10

0x0009,

0xf880,	// (0x0000f99f) volume_set_pane_vc_g

0x5852,	// (0x00005971) volume_set_pane_vc

0x585a,	// (0x00005979) button_value_adjust_pane_cp1_vc

0x5864,	// (0x00005983) list_highlight_pane_cp2_vc

0x586d,	// (0x0000598c) list_set_pane_vc_ParamLimits

0x586d,	// (0x0000598c) list_set_pane_vc

0x58cb,	// (0x000059ea) main_pane_set_vc_t1_ParamLimits

0x58cb,	// (0x000059ea) main_pane_set_vc_t1

0x58e0,	// (0x000059ff) main_pane_set_vc_t2_ParamLimits

0x58e0,	// (0x000059ff) main_pane_set_vc_t2

0x58f2,	// (0x00005a11) main_pane_set_vc_t3_ParamLimits

0x58f2,	// (0x00005a11) main_pane_set_vc_t3

0x5906,	// (0x00005a25) main_pane_set_vc_t4_ParamLimits

0x5906,	// (0x00005a25) main_pane_set_vc_t4

0x0003,

0xf9e9,	// (0x0000fb08) main_pane_set_vc_t_ParamLimits

0xf9e9,	// (0x0000fb08) main_pane_set_vc_t

0x591a,	// (0x00005a39) setting_code_pane_vc_ParamLimits

0x591a,	// (0x00005a39) setting_code_pane_vc

0x592b,	// (0x00005a4a) setting_slider_graphic_pane_vc

0x592b,	// (0x00005a4a) setting_slider_pane_vc

0x592b,	// (0x00005a4a) setting_text_pane_vc

0x592b,	// (0x00005a4a) setting_volume_pane_vc

0x5935,	// (0x00005a54) scroll_pane_cp121_vc

0x117f,	// (0x0000129e) set_content_pane_vc

0x5bef,	// (0x00005d0e) button_value_adjust_pane_g1

0x5bf8,	// (0x00005d17) button_value_adjust_pane_g2

0x0001,

0xfa43,	// (0x0000fb62) button_value_adjust_pane_g

0x5c01,	// (0x00005d20) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5c01,	// (0x00005d20) form_field_slider_wide_pane_vc_t1

0x5c15,	// (0x00005d34) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5c15,	// (0x00005d34) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa48,	// (0x0000fb67) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa48,	// (0x0000fb67) form_field_slider_wide_pane_vc_t

0x070e,	// (0x0000082d) input_focus_pane_cp10_vc_ParamLimits

0x070e,	// (0x0000082d) input_focus_pane_cp10_vc

0x5c43,	// (0x00005d62) slider_cont_pane_cp1_vc_ParamLimits

0x5c43,	// (0x00005d62) slider_cont_pane_cp1_vc

0x5c55,	// (0x00005d74) slider_form_pane_g1_cp2

0x57c7,	// (0x000058e6) slider_form_pane_g2_cp2

0x5c82,	// (0x00005da1) form_field_slider_pane_vc_t3

0x5c90,	// (0x00005daf) form_field_slider_pane_vc_t4

0x5c9e,	// (0x00005dbd) slider_form_pane_vc_ParamLimits

0x5c9e,	// (0x00005dbd) slider_form_pane_vc

0x5cab,	// (0x00005dca) form_field_slider_pane_vc_t1_ParamLimits

0x5cab,	// (0x00005dca) form_field_slider_pane_vc_t1

0x5c15,	// (0x00005d34) form_field_slider_pane_vc_t2_ParamLimits

0x5c15,	// (0x00005d34) form_field_slider_pane_vc_t2

0x0001,

0xfa5a,	// (0x0000fb79) form_field_slider_pane_vc_t_ParamLimits

0xfa5a,	// (0x0000fb79) form_field_slider_pane_vc_t

0x070e,	// (0x0000082d) input_focus_pane_cp9_vc_ParamLimits

0x070e,	// (0x0000082d) input_focus_pane_cp9_vc

0x5cc7,	// (0x00005de6) slider_cont_pane_vc_ParamLimits

0x5cc7,	// (0x00005de6) slider_cont_pane_vc

0x5cdb,	// (0x00005dfa) list_form_graphic_pane_cp_vc_ParamLimits

0x5cdb,	// (0x00005dfa) list_form_graphic_pane_cp_vc

0x388f,	// (0x000039ae) form_field_popup_wide_pane_vc_g1

0x5cf0,	// (0x00005e0f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5cf0,	// (0x00005e0f) form_field_popup_wide_pane_vc_t1

0x1277,	// (0x00001396) input_focus_pane_cp8_vc_ParamLimits

0x1277,	// (0x00001396) input_focus_pane_cp8_vc

0x5d35,	// (0x00005e54) list_form_wide_pane_vc_ParamLimits

0x5d35,	// (0x00005e54) list_form_wide_pane_vc

0x5d41,	// (0x00005e60) list_form_graphic_pane_vc_g1

0x5d49,	// (0x00005e68) list_form_graphic_pane_vc_t1_ParamLimits

0x5d49,	// (0x00005e68) list_form_graphic_pane_vc_t1

0x03e8,	// (0x00000507) list_highlight_pane_cp5_vc_ParamLimits

0x03e8,	// (0x00000507) list_highlight_pane_cp5_vc

0x5d65,	// (0x00005e84) list_form_graphic_pane_vc_ParamLimits

0x5d65,	// (0x00005e84) list_form_graphic_pane_vc

0x388f,	// (0x000039ae) form_field_popup_pane_vc_g1

0x5d7b,	// (0x00005e9a) form_field_popup_pane_vc_t1_ParamLimits

0x5d7b,	// (0x00005e9a) form_field_popup_pane_vc_t1

0x1277,	// (0x00001396) input_focus_pane_cp7_vc_ParamLimits

0x1277,	// (0x00001396) input_focus_pane_cp7_vc

0x5d92,	// (0x00005eb1) list_form_pane_vc_ParamLimits

0x5d92,	// (0x00005eb1) list_form_pane_vc

0x5d9e,	// (0x00005ebd) data_form_pane_vc_t1_ParamLimits

0x5d9e,	// (0x00005ebd) data_form_pane_vc_t1

0x13a6,	// (0x000014c5) input_focus_pane_vc_g1

0x13ae,	// (0x000014cd) input_focus_pane_vc_g2

0x13b6,	// (0x000014d5) input_focus_pane_vc_g3

0x13be,	// (0x000014dd) input_focus_pane_vc_g4

0x13c6,	// (0x000014e5) input_focus_pane_vc_g5

0x13ce,	// (0x000014ed) input_focus_pane_vc_g6

0x13d6,	// (0x000014f5) input_focus_pane_vc_g7

0x13de,	// (0x000014fd) input_focus_pane_vc_g8

0x13e6,	// (0x00001505) input_focus_pane_vc_g9

0xf4ff,	// (0x0000f61e) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0000f781) input_focus_pane_vc_g

0x3883,	// (0x000039a2) data_form_pane_vc_ParamLimits

0x3883,	// (0x000039a2) data_form_pane_vc

0x388f,	// (0x000039ae) form_field_data_pane_vc_g1

0x5db9,	// (0x00005ed8) form_field_data_pane_vc_t1_ParamLimits

0x5db9,	// (0x00005ed8) form_field_data_pane_vc_t1

0x1277,	// (0x00001396) input_focus_pane_vc_ParamLimits

0x1277,	// (0x00001396) input_focus_pane_vc

0x5dd3,	// (0x00005ef2) button_value_adjust_pane_cp3_vc

0x5ddb,	// (0x00005efa) button_value_adjust_pane_cp5_vc

0x5de3,	// (0x00005f02) form_field_data_pane_vc_ParamLimits

0x5de3,	// (0x00005f02) form_field_data_pane_vc

0x5dfa,	// (0x00005f19) form_field_data_pane_vc_cp2

0x5e02,	// (0x00005f21) form_field_data_wide_pane_vc_ParamLimits

0x5e02,	// (0x00005f21) form_field_data_wide_pane_vc

0x5e18,	// (0x00005f37) form_field_data_wide_pane_vc_cp2

0x5e20,	// (0x00005f3f) form_field_popup_pane_vc_ParamLimits

0x5e20,	// (0x00005f3f) form_field_popup_pane_vc

0x5e37,	// (0x00005f56) form_field_popup_wide_pane_vc_ParamLimits

0x5e37,	// (0x00005f56) form_field_popup_wide_pane_vc

0x5e4d,	// (0x00005f6c) form_field_slider_pane_vc_ParamLimits

0x5e4d,	// (0x00005f6c) form_field_slider_pane_vc

0x5e60,	// (0x00005f7f) form_field_slider_wide_pane_vc_ParamLimits

0x5e60,	// (0x00005f7f) form_field_slider_wide_pane_vc

0xd74b,	// (0x0000d86a) grid_touch_1_pane_ParamLimits

0xd74b,	// (0x0000d86a) grid_touch_1_pane

0xd75f,	// (0x0000d87e) grid_touch_2_pane_ParamLimits

0xd75f,	// (0x0000d87e) grid_touch_2_pane

0x5f44,	// (0x00006063) touch_pane_g1_ParamLimits

0x5f44,	// (0x00006063) touch_pane_g1

0x5e97,	// (0x00005fb6) cell_app_pane_cp_wide_ParamLimits

0x5e97,	// (0x00005fb6) cell_app_pane_cp_wide

0x5ea8,	// (0x00005fc7) grid_popup_fast_wide_pane_ParamLimits

0x5ea8,	// (0x00005fc7) grid_popup_fast_wide_pane

0x5ebc,	// (0x00005fdb) scroll_pane_cp19_ParamLimits

0x5ebc,	// (0x00005fdb) scroll_pane_cp19

0x0174,	// (0x00000293) bg_popup_window_pane_cp20

0x5ed0,	// (0x00005fef) listscroll_popup_fast_wide_pane

0xd789,	// (0x0000d8a8) grid_indicator_nsta_pane

0x5eea,	// (0x00006009) clock_nsta_pane_g1

0x5ef3,	// (0x00006012) clock_nsta_pane_t1

0xd795,	// (0x0000d8b4) cell_indicator_nsta_pane_ParamLimits

0xd795,	// (0x0000d8b4) cell_indicator_nsta_pane

0x5f44,	// (0x00006063) cell_indicator_nsta_pane_g1

0xd7b0,	// (0x0000d8cf) cell_indicator_nsta_pane_g2

0x0001,

0xfa6b,	// (0x0000fb8a) cell_indicator_nsta_pane_g

0x5f64,	// (0x00006083) clock_nsta_pane_cp

0x5f6d,	// (0x0000608c) indicator_nsta_pane_cp

0x5f77,	// (0x00006096) nsta_clock_indic_pane_g1

0x055c,	// (0x0000067b) grid_indicator_pane

0x1b65,	// (0x00001c84) scroll_pane_cp29

0x209d,	// (0x000021bc) indicator_nsta_pane_cp2_ParamLimits

0x209d,	// (0x000021bc) indicator_nsta_pane_cp2

0x03e8,	// (0x00000507) main_apps_wheel_pane

0x3adb,	// (0x00003bfa) form_midp_field_text_pane_ParamLimits

0x3c26,	// (0x00003d45) scroll_bar_cp050_ParamLimits

0x5fd0,	// (0x000060ef) cell_indicator_pane_ParamLimits

0x5fd0,	// (0x000060ef) cell_indicator_pane

0x5fe7,	// (0x00006106) cell_indicator_pane_g1

0xd7bd,	// (0x0000d8dc) grid_wheel_folder_pane_ParamLimits

0xd7bd,	// (0x0000d8dc) grid_wheel_folder_pane

0xd7cb,	// (0x0000d8ea) list_wheel_apps_pane_ParamLimits

0xd7cb,	// (0x0000d8ea) list_wheel_apps_pane

0xd7d9,	// (0x0000d8f8) main_apps_wheel_pane_g1_ParamLimits

0xd7d9,	// (0x0000d8f8) main_apps_wheel_pane_g1

0xd7e5,	// (0x0000d904) main_apps_wheel_pane_g2_ParamLimits

0xd7e5,	// (0x0000d904) main_apps_wheel_pane_g2

0x0001,

0xfa87,	// (0x0000fba6) main_apps_wheel_pane_g_ParamLimits

0xfa87,	// (0x0000fba6) main_apps_wheel_pane_g

0xd7f3,	// (0x0000d912) main_apps_wheel_pane_t1_ParamLimits

0xd7f3,	// (0x0000d912) main_apps_wheel_pane_t1

0xd807,	// (0x0000d926) list_wheel_apps_pane_g1

0xd80f,	// (0x0000d92e) list_wheel_apps_pane_g2

0xd817,	// (0x0000d936) list_wheel_apps_pane_g3

0xd81f,	// (0x0000d93e) list_wheel_apps_pane_g4

0xd829,	// (0x0000d948) list_wheel_apps_pane_g5

0x0004,

0xfa8c,	// (0x0000fbab) list_wheel_apps_pane_g

0x23a0,	// (0x000024bf) navi_icon_text_pane

0xcd79,	// (0x0000ce98) aid_fill_nsta

0x60ac,	// (0x000061cb) navi_icon_text_pane_g1

0x60b8,	// (0x000061d7) navi_icon_text_pane_t1

0x223e,	// (0x0000235d) list_set_graphic_pane_t1_ParamLimits

0x223e,	// (0x0000235d) list_set_graphic_pane_t1

0x4391,	// (0x000044b0) popup_midp_note_alarm_window_t6_ParamLimits

0x4391,	// (0x000044b0) popup_midp_note_alarm_window_t6

0x43a3,	// (0x000044c2) popup_midp_note_alarm_window_t7_ParamLimits

0x43a3,	// (0x000044c2) popup_midp_note_alarm_window_t7

0x43b5,	// (0x000044d4) popup_midp_note_alarm_window_t8_ParamLimits

0x43b5,	// (0x000044d4) popup_midp_note_alarm_window_t8

0x43c7,	// (0x000044e6) popup_midp_note_alarm_window_t9_ParamLimits

0x43c7,	// (0x000044e6) popup_midp_note_alarm_window_t9

0x43d9,	// (0x000044f8) popup_midp_note_alarm_window_t10_ParamLimits

0x43d9,	// (0x000044f8) popup_midp_note_alarm_window_t10

0x43eb,	// (0x0000450a) popup_midp_note_alarm_window_t11_ParamLimits

0x43eb,	// (0x0000450a) popup_midp_note_alarm_window_t11

0x43fd,	// (0x0000451c) scroll_pane_cp17_ParamLimits

0x43fd,	// (0x0000451c) scroll_pane_cp17

0x44b1,	// (0x000045d0) volume_small_pane_cp_g1

0x60ca,	// (0x000061e9) volume_small_pane_cp_g2

0x60d3,	// (0x000061f2) volume_small_pane_cp_g3

0x60dc,	// (0x000061fb) volume_small_pane_cp_g4

0x60e5,	// (0x00006204) volume_small_pane_cp_g5

0x60ee,	// (0x0000620d) volume_small_pane_cp_g6

0x60f7,	// (0x00006216) volume_small_pane_cp_g7

0x6100,	// (0x0000621f) volume_small_pane_cp_g8

0x6109,	// (0x00006228) volume_small_pane_cp_g9

0x6112,	// (0x00006231) volume_small_pane_cp_g10

0x25fa,	// (0x00002719) midp_ticker_pane_g1_ParamLimits

0x2606,	// (0x00002725) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0000f84d) midp_ticker_pane_g_ParamLimits

0x2612,	// (0x00002731) midp_ticker_pane_t1_ParamLimits

0xcd9d,	// (0x0000cebc) aid_fill_nsta_2

0x3c12,	// (0x00003d31) list_form2_midp_pane

0x4fc7,	// (0x000050e6) midp_editing_number_pane_ParamLimits

0x4fd6,	// (0x000050f5) midp_ticker_pane_ParamLimits

0x611b,	// (0x0000623a) form2_midp_field_pane

0x613f,	// (0x0000625e) scroll_pane_cp51

0x615f,	// (0x0000627e) form2_midp_button_pane_ParamLimits

0x615f,	// (0x0000627e) form2_midp_button_pane

0x6171,	// (0x00006290) form2_midp_content_pane_ParamLimits

0x6171,	// (0x00006290) form2_midp_content_pane

0x618b,	// (0x000062aa) form2_midp_field_choice_group_pane

0x6193,	// (0x000062b2) form2_midp_field_pane_g1

0x619b,	// (0x000062ba) form2_midp_field_pane_g2

0x61a3,	// (0x000062c2) form2_midp_field_pane_g3

0x61ab,	// (0x000062ca) form2_midp_field_pane_g4

0x0003,

0xfab1,	// (0x0000fbd0) form2_midp_field_pane_g

0x61b3,	// (0x000062d2) form2_midp_gauge_slider_pane

0x61bb,	// (0x000062da) form2_midp_gauge_wait_pane

0x61c3,	// (0x000062e2) form2_midp_image_pane_ParamLimits

0x61c3,	// (0x000062e2) form2_midp_image_pane

0x61de,	// (0x000062fd) form2_midp_label_pane_ParamLimits

0x61de,	// (0x000062fd) form2_midp_label_pane

0xd85c,	// (0x0000d97b) form2_midp_label_pane_cp_ParamLimits

0xd85c,	// (0x0000d97b) form2_midp_label_pane_cp

0x6218,	// (0x00006337) form2_midp_string_pane_ParamLimits

0x6218,	// (0x00006337) form2_midp_string_pane

0xd87b,	// (0x0000d99a) form2_midp_text_pane_ParamLimits

0xd87b,	// (0x0000d99a) form2_midp_text_pane

0x6247,	// (0x00006366) form2_midp_time_pane

0x6257,	// (0x00006376) input_focus_pane_cp51_ParamLimits

0x6257,	// (0x00006376) input_focus_pane_cp51

0x626f,	// (0x0000638e) form2_midp_label_pane_t1_ParamLimits

0x626f,	// (0x0000638e) form2_midp_label_pane_t1

0xd894,	// (0x0000d9b3) form2_mdip_text_pane_t1_ParamLimits

0xd894,	// (0x0000d9b3) form2_mdip_text_pane_t1

0x62cf,	// (0x000063ee) form2_midp_time_pane_t1

0x62ea,	// (0x00006409) form2_midp_gauge_slider_pane_t1

0xd8af,	// (0x0000d9ce) form2_midp_gauge_slider_pane_t2

0xd8c1,	// (0x0000d9e0) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaba,	// (0x0000fbd9) form2_midp_gauge_slider_pane_t

0x6320,	// (0x0000643f) form2_midp_slider_pane

0x632c,	// (0x0000644b) form2_midp_gauge_wait_pane_t1

0x633a,	// (0x00006459) form2_midp_wait_pane_ParamLimits

0x633a,	// (0x00006459) form2_midp_wait_pane

0xd8d3,	// (0x0000d9f2) list_single_2graphic_pane_cp4_ParamLimits

0xd8d3,	// (0x0000d9f2) list_single_2graphic_pane_cp4

0xd22b,	// (0x0000d34a) list_single_midp_graphic_pane_cp_ParamLimits

0xd22b,	// (0x0000d34a) list_single_midp_graphic_pane_cp

0x0174,	// (0x00000293) list_highlight_pane_cp20

0x6389,	// (0x000064a8) list_single_2graphic_pane_g1_cp4

0x6391,	// (0x000064b0) list_single_2graphic_pane_g2_cp4

0x6399,	// (0x000064b8) list_single_2graphic_pane_t1_cp4

0x03e8,	// (0x00000507) list_highlight_pane_cp21

0x63a8,	// (0x000064c7) list_single_midp_graphic_pane_g4_cp

0x63b7,	// (0x000064d6) list_single_midp_graphic_pane_t1_cp

0xd8e7,	// (0x0000da06) form2_mdip_string_pane_t1_ParamLimits

0xd8e7,	// (0x0000da06) form2_mdip_string_pane_t1

0x0174,	// (0x00000293) bg_wml_button_pane_cp2

0xf4ff,	// (0x0000f61e) form2_midp_image_pane_g1

0x0f41,	// (0x00001060) list_double_large_graphic_pane_g5_ParamLimits

0x0f41,	// (0x00001060) list_double_large_graphic_pane_g5

0xc43e,	// (0x0000c55d) midp_form_pane_ParamLimits

0x03e8,	// (0x00000507) main_apps_wheel_pane_ParamLimits

0xcac9,	// (0x0000cbe8) popup_preview_window_ParamLimits

0xcac9,	// (0x0000cbe8) popup_preview_window

0x300e,	// (0x0000312d) popup_touch_info_window_ParamLimits

0x300e,	// (0x0000312d) popup_touch_info_window

0x302c,	// (0x0000314b) popup_touch_menu_window_ParamLimits

0x302c,	// (0x0000314b) popup_touch_menu_window

0xf4f5,	// (0x0000f614) bg_popup_sub_pane_cp6

0x64c5,	// (0x000065e4) list_touch_menu_pane

0x64cd,	// (0x000065ec) list_single_touch_menu_pane_ParamLimits

0x64cd,	// (0x000065ec) list_single_touch_menu_pane

0x64e3,	// (0x00006602) list_single_touch_menu_pane_t1

0x03e8,	// (0x00000507) bg_popup_sub_pane_cp7_ParamLimits

0x03e8,	// (0x00000507) bg_popup_sub_pane_cp7

0x64f1,	// (0x00006610) heading_sub_pane

0x64f9,	// (0x00006618) list_touch_info_pane_ParamLimits

0x64f9,	// (0x00006618) list_touch_info_pane

0x6508,	// (0x00006627) list_single_touch_info_pane_ParamLimits

0x6508,	// (0x00006627) list_single_touch_info_pane

0x651a,	// (0x00006639) list_single_touch_info_pane_t1

0x6528,	// (0x00006647) list_single_touch_info_pane_t2

0x0001,

0xfac8,	// (0x0000fbe7) list_single_touch_info_pane_t

0x251d,	// (0x0000263c) bg_popup_heading_pane_cp

0x6536,	// (0x00006655) heading_sub_pane_t1

0x3795,	// (0x000038b4) bg_popup_preview_window_pane_cp_ParamLimits

0x3795,	// (0x000038b4) bg_popup_preview_window_pane_cp

0x64f1,	// (0x00006610) heading_preview_pane

0x64f9,	// (0x00006618) list_preview_pane_ParamLimits

0x64f9,	// (0x00006618) list_preview_pane

0x6544,	// (0x00006663) popup_preview_window_g1

0x6508,	// (0x00006627) list_single_preview_pane_ParamLimits

0x6508,	// (0x00006627) list_single_preview_pane

0x654c,	// (0x0000666b) list_single_preview_pane_g1

0x6554,	// (0x00006673) list_single_preview_pane_t1

0x651a,	// (0x00006639) list_single_preview_pane_t2

0x0001,

0xfacd,	// (0x0000fbec) list_single_preview_pane_t

0x6562,	// (0x00006681) bg_popup_heading_pane_cp2_ParamLimits

0x6562,	// (0x00006681) bg_popup_heading_pane_cp2

0x6578,	// (0x00006697) heading_preview_pane_g1

0x6580,	// (0x0000669f) heading_preview_pane_t1_ParamLimits

0x6580,	// (0x0000669f) heading_preview_pane_t1

0x057f,	// (0x0000069e) soft_indicator_pane_t1_ParamLimits

0x0c93,	// (0x00000db2) scroll_pane_ParamLimits

0x1a5e,	// (0x00001b7d) scroll_sc2_left_pane

0x1a67,	// (0x00001b86) scroll_sc2_right_pane

0x1a86,	// (0x00001ba5) scroll_bg_pane_g1_ParamLimits

0x1a9b,	// (0x00001bba) scroll_bg_pane_g2_ParamLimits

0x1ab3,	// (0x00001bd2) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0000f7d8) scroll_bg_pane_g_ParamLimits

0x1a86,	// (0x00001ba5) scroll_handle_pane_g1_ParamLimits

0x1ad5,	// (0x00001bf4) scroll_handle_pane_g2_ParamLimits

0x1ab3,	// (0x00001bd2) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0000f7df) scroll_handle_pane_g_ParamLimits

0x2ad2,	// (0x00002bf1) popup_choice_list_window_ParamLimits

0x2ad2,	// (0x00002bf1) popup_choice_list_window

0x34eb,	// (0x0000360a) choice_list_pane

0x35b3,	// (0x000036d2) cell_toolbar_pane_t1

0x35db,	// (0x000036fa) toolbar_button_pane_ParamLimits

0x4a1b,	// (0x00004b3a) ai_gene_pane_1_t2_ParamLimits

0x4a1b,	// (0x00004b3a) ai_gene_pane_1_t2

0x0001,

0xf8dc,	// (0x0000f9fb) ai_gene_pane_1_t_ParamLimits

0xf8dc,	// (0x0000f9fb) ai_gene_pane_1_t

0x659d,	// (0x000066bc) scroll_sc2_left_pane_g1

0x659d,	// (0x000066bc) scroll_sc2_right_pane_g1

0x2a6c,	// (0x00002b8b) bg_popup_sub_pane_cp10

0x65a7,	// (0x000066c6) list_choice_list_pane

0x65c0,	// (0x000066df) list_single_choice_list_pane_ParamLimits

0x65c0,	// (0x000066df) list_single_choice_list_pane

0x65d3,	// (0x000066f2) list_single_choice_list_pane_g1

0x159e,	// (0x000016bd) list_single_choice_list_pane_t1_ParamLimits

0x159e,	// (0x000016bd) list_single_choice_list_pane_t1

0x65db,	// (0x000066fa) choice_list_pane_g1

0x65e3,	// (0x00006702) choice_list_pane_t1

0xf4f5,	// (0x0000f614) input_focus_pane_cp11

0x17c4,	// (0x000018e3) title_pane_stacon_g2_ParamLimits

0x17c4,	// (0x000018e3) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0000f7be) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0000f7be) title_pane_stacon_g

0x251d,	// (0x0000263c) cursor_press_pane

0xc770,	// (0x0000c88f) popup_fep_hwr_window_ParamLimits

0xc770,	// (0x0000c88f) popup_fep_hwr_window

0x2bf8,	// (0x00002d17) popup_fep_vkb_window_ParamLimits

0x2bf8,	// (0x00002d17) popup_fep_vkb_window

0x65f1,	// (0x00006710) cursor_press_pane_g1

0x0002,

0xfaf6,	// (0x0000fc15) fep_vkb_side_pane_g_ParamLimits

0x6632,	// (0x00006751) fep_hwr_candidate_pane_ParamLimits

0x6632,	// (0x00006751) fep_hwr_candidate_pane

0x665c,	// (0x0000677b) fep_hwr_side_pane_ParamLimits

0x665c,	// (0x0000677b) fep_hwr_side_pane

0x667c,	// (0x0000679b) fep_hwr_top_pane_ParamLimits

0x667c,	// (0x0000679b) fep_hwr_top_pane

0x6694,	// (0x000067b3) fep_hwr_write_pane_ParamLimits

0x6694,	// (0x000067b3) fep_hwr_write_pane

0xfaf6,	// (0x0000fc15) fep_vkb_side_pane_g

0x66ce,	// (0x000067ed) fep_hwr_top_pane_g1

0x66e0,	// (0x000067ff) fep_hwr_top_pane_g2

0x66f2,	// (0x00006811) fep_hwr_top_pane_g3

0x0002,

0xfad2,	// (0x0000fbf1) fep_hwr_top_pane_g

0x6707,	// (0x00006826) fep_hwr_top_text_pane

0x1c55,	// (0x00001d74) fep_hwr_top_text_pane_g1

0x67df,	// (0x000068fe) fep_hwr_top_text_pane_t1

0x682f,	// (0x0000694e) fep_hwr_candidate_pane_g1

0x6aa8,	// (0x00006bc7) fep_vkb_keypad_pane_g3_ParamLimits

0x6aa8,	// (0x00006bc7) fep_vkb_keypad_pane_g3

0x6ad0,	// (0x00006bef) fep_vkb_keypad_pane_g4_ParamLimits

0x6ad0,	// (0x00006bef) fep_vkb_keypad_pane_g4

0x6b3f,	// (0x00006c5e) fep_vkb_bottom_pane_g2_ParamLimits

0x6b3f,	// (0x00006c5e) fep_vkb_bottom_pane_g2

0x0001,

0xfafd,	// (0x0000fc1c) fep_vkb_bottom_pane_g_ParamLimits

0xfafd,	// (0x0000fc1c) fep_vkb_bottom_pane_g

0x659d,	// (0x000066bc) cell_vkb_side_pane_g2

0x0001,

0xfb07,	// (0x0000fc26) cell_vkb_side_pane_g

0x6bca,	// (0x00006ce9) cell_vkb_side_pane_t1

0x6bd8,	// (0x00006cf7) cell_vkb_side_pane_t1_copy1

0x659d,	// (0x000066bc) bg_fep_vkb_candidate_pane_g2

0x6d04,	// (0x00006e23) cell_vkb_candidate_pane_ParamLimits

0x6863,	// (0x00006982) aid_size_cell_vkb_ParamLimits

0x6863,	// (0x00006982) aid_size_cell_vkb

0x6d04,	// (0x00006e23) cell_vkb_candidate_pane

0x6d38,	// (0x00006e57) bg_popup_fep_shadow_pane_g1

0xd9b6,	// (0x0000dad5) fep_vkb_bottom_pane_ParamLimits

0xd9b6,	// (0x0000dad5) fep_vkb_bottom_pane

0x6927,	// (0x00006a46) fep_vkb_candidate_pane_ParamLimits

0x6927,	// (0x00006a46) fep_vkb_candidate_pane

0xd9db,	// (0x0000dafa) fep_vkb_keypad_pane_ParamLimits

0xd9db,	// (0x0000dafa) fep_vkb_keypad_pane

0xda17,	// (0x0000db36) fep_vkb_side_pane_ParamLimits

0xda17,	// (0x0000db36) fep_vkb_side_pane

0xda53,	// (0x0000db72) fep_vkb_top_pane_ParamLimits

0xda53,	// (0x0000db72) fep_vkb_top_pane

0x6a01,	// (0x00006b20) fep_vkb_top_pane_g1_ParamLimits

0x6a01,	// (0x00006b20) fep_vkb_top_pane_g1

0x6a10,	// (0x00006b2f) fep_vkb_top_pane_g2_ParamLimits

0x6a10,	// (0x00006b2f) fep_vkb_top_pane_g2

0x6a1f,	// (0x00006b3e) fep_vkb_top_pane_g3_ParamLimits

0x6a1f,	// (0x00006b3e) fep_vkb_top_pane_g3

0x0003,

0xfaed,	// (0x0000fc0c) fep_vkb_top_pane_g_ParamLimits

0xfaed,	// (0x0000fc0c) fep_vkb_top_pane_g

0x6a3d,	// (0x00006b5c) fep_vkb_top_text_pane_ParamLimits

0x6a3d,	// (0x00006b5c) fep_vkb_top_text_pane

0xda8f,	// (0x0000dbae) fep_vkb_side_pane_g1_ParamLimits

0xda8f,	// (0x0000dbae) fep_vkb_side_pane_g1

0x6a97,	// (0x00006bb6) grid_vkb_side_pane_ParamLimits

0x6a97,	// (0x00006bb6) grid_vkb_side_pane

0x6d40,	// (0x00006e5f) bg_popup_fep_shadow_pane_g2

0x6d49,	// (0x00006e68) bg_popup_fep_shadow_pane_g3

0x6d51,	// (0x00006e70) bg_popup_fep_shadow_pane_g4

0x6d5a,	// (0x00006e79) bg_popup_fep_shadow_pane_g5

0x6d64,	// (0x00006e83) bg_popup_fep_shadow_pane_g6

0x6d6c,	// (0x00006e8b) bg_popup_fep_shadow_pane_g7

0x13c6,	// (0x000014e5) bg_popup_fep_shadow_pane_g8

0x6aee,	// (0x00006c0d) grid_vkb_keypad_number_pane_ParamLimits

0x6aee,	// (0x00006c0d) grid_vkb_keypad_number_pane

0x6afe,	// (0x00006c1d) grid_vkb_keypad_pane_ParamLimits

0x6afe,	// (0x00006c1d) grid_vkb_keypad_pane

0x6b24,	// (0x00006c43) fep_vkb_bottom_pane_g1_ParamLimits

0x6b24,	// (0x00006c43) fep_vkb_bottom_pane_g1

0x6b4d,	// (0x00006c6c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6b4d,	// (0x00006c6c) grid_vkb_keypad_bottom_left_pane

0x6b62,	// (0x00006c81) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6b62,	// (0x00006c81) grid_vkb_keypad_bottom_right_pane

0x6b77,	// (0x00006c96) fep_vkb_top_text_pane_g1

0xdad6,	// (0x0000dbf5) fep_vkb_top_text_pane_t1

0xdae8,	// (0x0000dc07) cell_vkb_side_pane_ParamLimits

0xdae8,	// (0x0000dc07) cell_vkb_side_pane

0x659d,	// (0x000066bc) cell_vkb_side_pane_g1

0x6be6,	// (0x00006d05) cell_vkb_keypad_pane_ParamLimits

0x6be6,	// (0x00006d05) cell_vkb_keypad_pane

0x6c5b,	// (0x00006d7a) cell_vkb_keypad_pane_g1

0x0008,

0xfb1a,	// (0x0000fc39) bg_popup_fep_shadow_pane_g

0x659d,	// (0x000066bc) cell_hwr_side_pane_g1

0x659d,	// (0x000066bc) cell_hwr_side_pane_g2

0x6c65,	// (0x00006d84) cell_vkb_keypad_pane_t1

0xdafe,	// (0x0000dc1d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdafe,	// (0x0000dc1d) cell_vkb_keypad_bottom_left_pane

0xdb13,	// (0x0000dc32) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdb13,	// (0x0000dc32) cell_vkb_keypad_bottom_right_pane

0x659d,	// (0x000066bc) cell_vkb_keypad_bottom_left_pane_g1

0x659d,	// (0x000066bc) cell_vkb_keypad_bottom_right_pane_g1

0x6cc9,	// (0x00006de8) cell_vkb_keypad_number_pane_ParamLimits

0x6cc9,	// (0x00006de8) cell_vkb_keypad_number_pane

0x6ce8,	// (0x00006e07) cell_vkb_keypad_number_pane_g1

0x6cf2,	// (0x00006e11) cell_vkb_keypad_number_pane_g2

0x6cfb,	// (0x00006e1a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb0c,	// (0x0000fc2b) cell_vkb_keypad_number_pane_g

0x6c65,	// (0x00006d84) cell_vkb_keypad_number_pane_t1

0x6d1f,	// (0x00006e3e) fep_vkb_candidate_pane_g1

0x0001,

0xfb07,	// (0x0000fc26) cell_hwr_side_pane_g

0x6d7e,	// (0x00006e9d) cell_hwr_side_pane_t1

0x6d8c,	// (0x00006eab) cell_hwr_side_pane_t1_copy1

0x6a2f,	// (0x00006b4e) cell_hwr_candidate_pane_g1

0x6ddc,	// (0x00006efb) cell_hwr_candidate_pane_t1

0x659d,	// (0x000066bc) cell_vkb_candidate_pane_g2

0x6e30,	// (0x00006f4f) cell_vkb_candidate_pane_t1

0x65f9,	// (0x00006718) bg_popup_fep_shadow_pane_ParamLimits

0x65f9,	// (0x00006718) bg_popup_fep_shadow_pane

0x66ae,	// (0x000067cd) bg_fep_hwr_top_pane_g4

0x671c,	// (0x0000683b) bg_hwr_side_pane_g1_ParamLimits

0x671c,	// (0x0000683b) bg_hwr_side_pane_g1

0xd96f,	// (0x0000da8e) cell_hwr_side_pane_ParamLimits

0xd96f,	// (0x0000da8e) cell_hwr_side_pane

0x678a,	// (0x000068a9) fep_hwr_write_pane_g1_ParamLimits

0x678a,	// (0x000068a9) fep_hwr_write_pane_g1

0x6797,	// (0x000068b6) fep_hwr_write_pane_g2_ParamLimits

0x6797,	// (0x000068b6) fep_hwr_write_pane_g2

0x67a4,	// (0x000068c3) fep_hwr_write_pane_g3_ParamLimits

0x67a4,	// (0x000068c3) fep_hwr_write_pane_g3

0xd98f,	// (0x0000daae) fep_hwr_write_pane_g4_ParamLimits

0xd98f,	// (0x0000daae) fep_hwr_write_pane_g4

0x0005,

0xfad9,	// (0x0000fbf8) fep_hwr_write_pane_g_ParamLimits

0xfad9,	// (0x0000fbf8) fep_hwr_write_pane_g

0x66ae,	// (0x000067cd) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x66ae,	// (0x000067cd) bg_fep_hwr_candidate_pane_g2

0x67ed,	// (0x0000690c) cell_hwr_candidate_pane_ParamLimits

0x67ed,	// (0x0000690c) cell_hwr_candidate_pane

0x682f,	// (0x0000694e) fep_hwr_candidate_pane_g1_ParamLimits

0x6891,	// (0x000069b0) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6891,	// (0x000069b0) bg_popup_fep_shadow_pane_cp2

0x6a2f,	// (0x00006b4e) fep_vkb_top_pane_g4_ParamLimits

0x6a2f,	// (0x00006b4e) fep_vkb_top_pane_g4

0x6a75,	// (0x00006b94) fep_vkb_side_pane_g2_ParamLimits

0x6a75,	// (0x00006b94) fep_vkb_side_pane_g2

0xc035,	// (0x0000c154) list_setting_pane_t4_ParamLimits

0xc035,	// (0x0000c154) list_setting_pane_t4

0xc0af,	// (0x0000c1ce) list_setting_number_pane_t5_ParamLimits

0xc0af,	// (0x0000c1ce) list_setting_number_pane_t5

0x1cab,	// (0x00001dca) list_double_heading_pane_cp2_ParamLimits

0x1cab,	// (0x00001dca) list_double_heading_pane_cp2

0x129d,	// (0x000013bc) list_double_heading_pane_g1_cp2_ParamLimits

0x129d,	// (0x000013bc) list_double_heading_pane_g1_cp2

0x12a9,	// (0x000013c8) list_double_heading_pane_g2_cp2_ParamLimits

0x12a9,	// (0x000013c8) list_double_heading_pane_g2_cp2

0x6e3e,	// (0x00006f5d) list_double_heading_pane_t1_cp2_ParamLimits

0x6e3e,	// (0x00006f5d) list_double_heading_pane_t1_cp2

0x6e54,	// (0x00006f73) list_double_heading_pane_t2_cp2_ParamLimits

0x6e54,	// (0x00006f73) list_double_heading_pane_t2_cp2

0xf4ed,	// (0x0000f60c) aid_value_unit2

0x01f8,	// (0x00000317) popup_preview_fixed_window

0x071c,	// (0x0000083b) bg_popup_preview_window_pane_cp02

0x6e66,	// (0x00006f85) list_preview_fixed_pane

0x6eac,	// (0x00006fcb) list_empty_pane_fp_ParamLimits

0x6eac,	// (0x00006fcb) list_empty_pane_fp

0x6eac,	// (0x00006fcb) list_single_cale_day_pane_fp_ParamLimits

0x6eac,	// (0x00006fcb) list_single_cale_day_pane_fp

0x6eac,	// (0x00006fcb) list_single_graphic_heading_pane_fp_ParamLimits

0x6eac,	// (0x00006fcb) list_single_graphic_heading_pane_fp

0x6eac,	// (0x00006fcb) list_single_graphic_pane_fp_ParamLimits

0x6eac,	// (0x00006fcb) list_single_graphic_pane_fp

0x6eac,	// (0x00006fcb) list_single_heading_pane_fp_ParamLimits

0x6eac,	// (0x00006fcb) list_single_heading_pane_fp

0x6eac,	// (0x00006fcb) list_single_pane_fp_ParamLimits

0x6eac,	// (0x00006fcb) list_single_pane_fp

0x6ec1,	// (0x00006fe0) list_single_pane_fp_g1_ParamLimits

0x6ec1,	// (0x00006fe0) list_single_pane_fp_g1

0x129d,	// (0x000013bc) list_single_pane_fp_g2_ParamLimits

0x129d,	// (0x000013bc) list_single_pane_fp_g2

0x12a9,	// (0x000013c8) list_single_pane_fp_g3_ParamLimits

0x12a9,	// (0x000013c8) list_single_pane_fp_g3

0x6ecd,	// (0x00006fec) list_single_pane_fp_g4_ParamLimits

0x6ecd,	// (0x00006fec) list_single_pane_fp_g4

0x0003,

0xfb3b,	// (0x0000fc5a) list_single_pane_fp_g_ParamLimits

0xfb3b,	// (0x0000fc5a) list_single_pane_fp_g

0x6ed9,	// (0x00006ff8) list_single_pane_fp_t1_ParamLimits

0x6ed9,	// (0x00006ff8) list_single_pane_fp_t1

0x6ef0,	// (0x0000700f) list_single_graphic_pane_fp_g1_ParamLimits

0x6ef0,	// (0x0000700f) list_single_graphic_pane_fp_g1

0x6ec1,	// (0x00006fe0) list_single_graphic_pane_fp_g2_ParamLimits

0x6ec1,	// (0x00006fe0) list_single_graphic_pane_fp_g2

0x129d,	// (0x000013bc) list_single_graphic_pane_fp_g3_ParamLimits

0x129d,	// (0x000013bc) list_single_graphic_pane_fp_g3

0x12a9,	// (0x000013c8) list_single_graphic_pane_fp_g4_ParamLimits

0x12a9,	// (0x000013c8) list_single_graphic_pane_fp_g4

0x6ecd,	// (0x00006fec) list_single_graphic_pane_fp_g5_ParamLimits

0x6ecd,	// (0x00006fec) list_single_graphic_pane_fp_g5

0x0004,

0xfb44,	// (0x0000fc63) list_single_graphic_pane_fp_g_ParamLimits

0xfb44,	// (0x0000fc63) list_single_graphic_pane_fp_g

0x6efc,	// (0x0000701b) list_single_graphic_pane_fp_t1_ParamLimits

0x6efc,	// (0x0000701b) list_single_graphic_pane_fp_t1

0x6ef0,	// (0x0000700f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6ef0,	// (0x0000700f) list_single_graphic_heading_pane_fp_g1

0x6ec1,	// (0x00006fe0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6ec1,	// (0x00006fe0) list_single_graphic_heading_pane_fp_g2

0x129d,	// (0x000013bc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x129d,	// (0x000013bc) list_single_graphic_heading_pane_fp_g3

0x12a9,	// (0x000013c8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x12a9,	// (0x000013c8) list_single_graphic_heading_pane_fp_g4

0x6ecd,	// (0x00006fec) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6ecd,	// (0x00006fec) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb44,	// (0x0000fc63) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb44,	// (0x0000fc63) list_single_graphic_heading_pane_fp_g

0x6f12,	// (0x00007031) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6f12,	// (0x00007031) list_single_graphic_heading_pane_fp_t1

0x6f28,	// (0x00007047) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6f28,	// (0x00007047) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb4f,	// (0x0000fc6e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb4f,	// (0x0000fc6e) list_single_graphic_heading_pane_fp_t

0x6f3a,	// (0x00007059) list_single_cale_day_pane_fp_g1_ParamLimits

0x6f3a,	// (0x00007059) list_single_cale_day_pane_fp_g1

0x6f72,	// (0x00007091) list_single_cale_day_pane_fp_g2_ParamLimits

0x6f72,	// (0x00007091) list_single_cale_day_pane_fp_g2

0x6f7e,	// (0x0000709d) list_single_cale_day_pane_fp_g3_ParamLimits

0x6f7e,	// (0x0000709d) list_single_cale_day_pane_fp_g3

0x6fa6,	// (0x000070c5) list_single_cale_day_pane_fp_g4_ParamLimits

0x6fa6,	// (0x000070c5) list_single_cale_day_pane_fp_g4

0x6fca,	// (0x000070e9) list_single_cale_day_pane_fp_g5_ParamLimits

0x6fca,	// (0x000070e9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb54,	// (0x0000fc73) list_single_cale_day_pane_fp_g_ParamLimits

0xfb54,	// (0x0000fc73) list_single_cale_day_pane_fp_g

0x6fee,	// (0x0000710d) list_single_cale_day_pane_fp_t1_ParamLimits

0x6fee,	// (0x0000710d) list_single_cale_day_pane_fp_t1

0x7014,	// (0x00007133) list_single_cale_day_pane_fp_t2_ParamLimits

0x7014,	// (0x00007133) list_single_cale_day_pane_fp_t2

0x702d,	// (0x0000714c) list_single_cale_day_pane_fp_t3_ParamLimits

0x702d,	// (0x0000714c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb5f,	// (0x0000fc7e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb5f,	// (0x0000fc7e) list_single_cale_day_pane_fp_t

0x6ec1,	// (0x00006fe0) list_empty_pane_fp_g1_ParamLimits

0x6ec1,	// (0x00006fe0) list_empty_pane_fp_g1

0x7046,	// (0x00007165) list_empty_pane_fp_t1

0x7054,	// (0x00007173) list_empty_pane_fp_t2

0x0001,

0xfb66,	// (0x0000fc85) list_empty_pane_fp_t

0x6ec1,	// (0x00006fe0) list_single_heading_pane_fp_g1_ParamLimits

0x6ec1,	// (0x00006fe0) list_single_heading_pane_fp_g1

0x129d,	// (0x000013bc) list_single_heading_pane_fp_g2_ParamLimits

0x129d,	// (0x000013bc) list_single_heading_pane_fp_g2

0x12a9,	// (0x000013c8) list_single_heading_pane_fp_g3_ParamLimits

0x12a9,	// (0x000013c8) list_single_heading_pane_fp_g3

0x0002,

0xfb6b,	// (0x0000fc8a) list_single_heading_pane_fp_g_ParamLimits

0xfb6b,	// (0x0000fc8a) list_single_heading_pane_fp_g

0x7062,	// (0x00007181) list_single_heading_pane_fp_t1_ParamLimits

0x7062,	// (0x00007181) list_single_heading_pane_fp_t1

0x7074,	// (0x00007193) list_single_heading_pane_fp_t2_ParamLimits

0x7074,	// (0x00007193) list_single_heading_pane_fp_t2

0x0001,

0xfb72,	// (0x0000fc91) list_single_heading_pane_fp_t_ParamLimits

0xfb72,	// (0x0000fc91) list_single_heading_pane_fp_t

0x160c,	// (0x0000172b) aid_size_cell_fast

0x068c,	// (0x000007ab) soft_indicator_pane_cp1_t1

0x1649,	// (0x00001768) cell_app_pane_cp2_ParamLimits

0x1649,	// (0x00001768) cell_app_pane_cp2

0x661b,	// (0x0000673a) fep_hwr_candidate_drop_down_list_pane

0x6849,	// (0x00006968) fep_hwr_candidate_pane_g3_ParamLimits

0x6849,	// (0x00006968) fep_hwr_candidate_pane_g3

0x6856,	// (0x00006975) fep_hwr_candidate_pane_g4_ParamLimits

0x6856,	// (0x00006975) fep_hwr_candidate_pane_g4

0x0002,

0xfae6,	// (0x0000fc05) fep_hwr_candidate_pane_g_ParamLimits

0xfae6,	// (0x0000fc05) fep_hwr_candidate_pane_g

0x6916,	// (0x00006a35) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6916,	// (0x00006a35) fep_vkb_candidate_drop_down_list_pane

0x6d27,	// (0x00006e46) fep_vkb_candidate_pane_g3

0x6d2f,	// (0x00006e4e) fep_vkb_candidate_pane_g4

0x0002,

0xfb13,	// (0x0000fc32) fep_vkb_candidate_pane_g

0x6a2f,	// (0x00006b4e) cell_hwr_candidate_pane_g1_ParamLimits

0x6d9a,	// (0x00006eb9) cell_hwr_candidate_pane_g3_ParamLimits

0x6d9a,	// (0x00006eb9) cell_hwr_candidate_pane_g3

0x6dbb,	// (0x00006eda) cell_hwr_candidate_pane_g4_ParamLimits

0x6dbb,	// (0x00006eda) cell_hwr_candidate_pane_g4

0x0002,

0xfb2d,	// (0x0000fc4c) cell_hwr_candidate_pane_g_ParamLimits

0xfb2d,	// (0x0000fc4c) cell_hwr_candidate_pane_g

0x6dfa,	// (0x00006f19) cell_vkb_candidate_pane_g3_ParamLimits

0x6dfa,	// (0x00006f19) cell_vkb_candidate_pane_g3

0x6e15,	// (0x00006f34) cell_vkb_candidate_pane_g4_ParamLimits

0x6e15,	// (0x00006f34) cell_vkb_candidate_pane_g4

0x708a,	// (0x000071a9) cell_app_pane_cp2_g1_ParamLimits

0x708a,	// (0x000071a9) cell_app_pane_cp2_g1

0x70a8,	// (0x000071c7) cell_app_pane_cp2_g2_ParamLimits

0x70a8,	// (0x000071c7) cell_app_pane_cp2_g2

0x0001,

0xfb77,	// (0x0000fc96) cell_app_pane_cp2_g_ParamLimits

0xfb77,	// (0x0000fc96) cell_app_pane_cp2_g

0x70b4,	// (0x000071d3) cell_app_pane_cp2_t1_ParamLimits

0x70b4,	// (0x000071d3) cell_app_pane_cp2_t1

0x1277,	// (0x00001396) grid_highlight_pane_cp1_ParamLimits

0x1277,	// (0x00001396) grid_highlight_pane_cp1

0x70c6,	// (0x000071e5) cell_hwr_candidate_pane_cp1_ParamLimits

0x70c6,	// (0x000071e5) cell_hwr_candidate_pane_cp1

0x6a2f,	// (0x00006b4e) fep_hwr_candidate_drop_down_list_pane_g1

0x70e5,	// (0x00007204) fep_hwr_candidate_drop_down_list_pane_g2

0x70f2,	// (0x00007211) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb7c,	// (0x0000fc9b) fep_hwr_candidate_drop_down_list_pane_g

0x70ff,	// (0x0000721e) fep_hwr_candidate_drop_down_list_scroll_pane

0x7108,	// (0x00007227) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7108,	// (0x00007227) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7115,	// (0x00007234) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7115,	// (0x00007234) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7122,	// (0x00007241) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7122,	// (0x00007241) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6dfa,	// (0x00006f19) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6dfa,	// (0x00006f19) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6e15,	// (0x00006f34) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6e15,	// (0x00006f34) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x712f,	// (0x0000724e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x712f,	// (0x0000724e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x714a,	// (0x00007269) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x714a,	// (0x00007269) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7165,	// (0x00007284) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7165,	// (0x00007284) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb83,	// (0x0000fca2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb83,	// (0x0000fca2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7180,	// (0x0000729f) cell_vkb_candidate_pane_cp1_ParamLimits

0x7180,	// (0x0000729f) cell_vkb_candidate_pane_cp1

0x6a2f,	// (0x00006b4e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6a2f,	// (0x00006b4e) fep_vkb_candidate_drop_down_list_pane_g1

0x70e5,	// (0x00007204) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x70e5,	// (0x00007204) fep_vkb_candidate_drop_down_list_pane_g2

0x70f2,	// (0x00007211) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x70f2,	// (0x00007211) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb7c,	// (0x0000fc9b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb7c,	// (0x0000fc9b) fep_vkb_candidate_drop_down_list_pane_g

0x71a0,	// (0x000072bf) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x71a0,	// (0x000072bf) fep_vkb_candidate_drop_down_list_scroll_pane

0x71ad,	// (0x000072cc) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71ad,	// (0x000072cc) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x71ba,	// (0x000072d9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71ba,	// (0x000072d9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x71c6,	// (0x000072e5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71c6,	// (0x000072e5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6d9a,	// (0x00006eb9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d9a,	// (0x00006eb9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6dbb,	// (0x00006eda) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6dbb,	// (0x00006eda) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x71d2,	// (0x000072f1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71d2,	// (0x000072f1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x71f3,	// (0x00007312) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71f3,	// (0x00007312) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7214,	// (0x00007333) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7214,	// (0x00007333) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb94,	// (0x0000fcb3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb94,	// (0x0000fcb3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xba2b,	// (0x0000bb4a) title_pane_g1_ParamLimits

0xba3e,	// (0x0000bb5d) title_pane_g2_ParamLimits

0xf529,	// (0x0000f648) title_pane_g_ParamLimits

0x1c45,	// (0x00001d64) aid_call2_pane

0x1c4d,	// (0x00001d6c) aid_call_pane

0x1c55,	// (0x00001d74) popup_clock_analogue_window_g1

0x1c55,	// (0x00001d74) popup_clock_analogue_window_g2

0x1c5d,	// (0x00001d7c) popup_clock_analogue_window_g3

0x1c66,	// (0x00001d85) popup_clock_analogue_window_g4

0xf4ff,	// (0x0000f61e) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0000f7ed) popup_clock_analogue_window_g

0x1c6e,	// (0x00001d8d) popup_clock_analogue_window_t1

0x1d12,	// (0x00001e31) clock_digital_number_pane_ParamLimits

0x1d12,	// (0x00001e31) clock_digital_number_pane

0x1d1e,	// (0x00001e3d) clock_digital_number_pane_cp02_ParamLimits

0x1d1e,	// (0x00001e3d) clock_digital_number_pane_cp02

0x1d2a,	// (0x00001e49) clock_digital_number_pane_cp03_ParamLimits

0x1d2a,	// (0x00001e49) clock_digital_number_pane_cp03

0x1d36,	// (0x00001e55) clock_digital_number_pane_cp04_ParamLimits

0x1d36,	// (0x00001e55) clock_digital_number_pane_cp04

0x1d42,	// (0x00001e61) clock_digital_separator_pane_ParamLimits

0x1d42,	// (0x00001e61) clock_digital_separator_pane

0x1d4e,	// (0x00001e6d) popup_clock_digital_window_t1_ParamLimits

0x1d4e,	// (0x00001e6d) popup_clock_digital_window_t1

0xf4ff,	// (0x0000f61e) clock_digital_number_pane_g1

0xf4ff,	// (0x0000f61e) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0000f7f8) clock_digital_number_pane_g

0xf4ff,	// (0x0000f61e) clock_digital_separator_pane_g1

0xf4ff,	// (0x0000f61e) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0000f7f8) clock_digital_separator_pane_g

0xcd79,	// (0x0000ce98) aid_fill_nsta_ParamLimits

0xceaf,	// (0x0000cfce) indicator_nsta_pane_ParamLimits

0x3330,	// (0x0000344f) popup_clock_analogue_window

0x3330,	// (0x0000344f) popup_clock_digital_window

0xd789,	// (0x0000d8a8) grid_indicator_nsta_pane_ParamLimits

0x5f01,	// (0x00006020) clock_nsta_pane_t2

0x0001,

0xfa66,	// (0x0000fb85) clock_nsta_pane_t

0x1a03,	// (0x00001b22) aid_size_max_handle

0x1a0d,	// (0x00001b2c) aid_size_min_handle

0x251d,	// (0x0000263c) editor_scroll_pane

0x722f,	// (0x0000734e) ex_editor_pane

0x157a,	// (0x00001699) scroll_pane_cp13

0x0cbf,	// (0x00000dde) scroll_pane_cp14

0x1ca3,	// (0x00001dc2) scroll_pane_cp36

0xc359,	// (0x0000c478) list_single_graphic_hl_pane_cp2_ParamLimits

0xc359,	// (0x0000c478) list_single_graphic_hl_pane_cp2

0xd5db,	// (0x0000d6fa) list_single_graphic_hl_pane_ParamLimits

0xd5db,	// (0x0000d6fa) list_single_graphic_hl_pane

0x7237,	// (0x00007356) aid_size_min_hl_cp1

0x7240,	// (0x0000735f) list_highlight_pane_cp34_ParamLimits

0x7240,	// (0x0000735f) list_highlight_pane_cp34

0x7251,	// (0x00007370) list_single_graphic_hl_pane_g1_ParamLimits

0x7251,	// (0x00007370) list_single_graphic_hl_pane_g1

0xdb2e,	// (0x0000dc4d) list_single_graphic_hl_pane_g2_ParamLimits

0xdb2e,	// (0x0000dc4d) list_single_graphic_hl_pane_g2

0xdb2e,	// (0x0000dc4d) list_single_graphic_hl_pane_g3_ParamLimits

0xdb2e,	// (0x0000dc4d) list_single_graphic_hl_pane_g3

0x23f5,	// (0x00002514) list_single_graphic_hl_pane_g4_ParamLimits

0x23f5,	// (0x00002514) list_single_graphic_hl_pane_g4

0xdb3a,	// (0x0000dc59) list_single_graphic_hl_pane_g5_ParamLimits

0xdb3a,	// (0x0000dc59) list_single_graphic_hl_pane_g5

0x0004,

0xfba5,	// (0x0000fcc4) list_single_graphic_hl_pane_g_ParamLimits

0xfba5,	// (0x0000fcc4) list_single_graphic_hl_pane_g

0xdb4e,	// (0x0000dc6d) list_single_graphic_hl_pane_t1_ParamLimits

0xdb4e,	// (0x0000dc6d) list_single_graphic_hl_pane_t1

0x727e,	// (0x0000739d) aid_size_min_hl_cp2

0x7287,	// (0x000073a6) list_highlight_pane_cp34_cp2_ParamLimits

0x7287,	// (0x000073a6) list_highlight_pane_cp34_cp2

0x7251,	// (0x00007370) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7251,	// (0x00007370) list_single_graphic_hl_pane_g1_cp2

0x7294,	// (0x000073b3) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7294,	// (0x000073b3) list_single_graphic_hl_pane_g2_cp2

0x72a0,	// (0x000073bf) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x72a0,	// (0x000073bf) list_single_graphic_hl_pane_g3_cp2

0x72ae,	// (0x000073cd) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x72ae,	// (0x000073cd) list_single_graphic_hl_pane_g4_cp2

0x72ba,	// (0x000073d9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x72ba,	// (0x000073d9) list_single_graphic_hl_pane_g5_cp2

0xc577,	// (0x0000c696) control_pane_g4_ParamLimits

0xc577,	// (0x0000c696) control_pane_g4

0x2a6c,	// (0x00002b8b) bg_popup_sub_pane_cp10_ParamLimits

0x65a7,	// (0x000066c6) list_choice_list_pane_ParamLimits

0x65b6,	// (0x000066d5) scroll_pane_cp23

0x071c,	// (0x0000083b) bg_popup_preview_window_pane_cp02_ParamLimits

0x6e66,	// (0x00006f85) list_preview_fixed_pane_ParamLimits

0x6e7c,	// (0x00006f9b) list_preview_fixed_pane_cp_ParamLimits

0x6e7c,	// (0x00006f9b) list_preview_fixed_pane_cp

0x6e88,	// (0x00006fa7) popup_preview_fixed_window_g1_ParamLimits

0x6e88,	// (0x00006fa7) popup_preview_fixed_window_g1

0x6e94,	// (0x00006fb3) popup_preview_fixed_window_g2_ParamLimits

0x6e94,	// (0x00006fb3) popup_preview_fixed_window_g2

0x0002,

0xfb34,	// (0x0000fc53) popup_preview_fixed_window_g_ParamLimits

0xfb34,	// (0x0000fc53) popup_preview_fixed_window_g

0x18a8,	// (0x000019c7) aid_navi_side_left_pane_ParamLimits

0x18bd,	// (0x000019dc) aid_navi_side_right_pane_ParamLimits

0x18d5,	// (0x000019f4) navi_icon_pane_stacon_ParamLimits

0x18e9,	// (0x00001a08) navi_navi_pane_stacon_ParamLimits

0x18d5,	// (0x000019f4) navi_text_pane_stacon_ParamLimits

0xf4f5,	// (0x0000f614) main_text_info_pane

0x72e4,	// (0x00007403) listscroll_text_info_pane

0x72ec,	// (0x0000740b) list_text_info_pane_ParamLimits

0x72ec,	// (0x0000740b) list_text_info_pane

0x72fb,	// (0x0000741a) scroll_pane_cp24_ParamLimits

0x72fb,	// (0x0000741a) scroll_pane_cp24

0xdb64,	// (0x0000dc83) list_text_info_pane_t1_ParamLimits

0xdb64,	// (0x0000dc83) list_text_info_pane_t1

0xc6e3,	// (0x0000c802) popup_fast_swap2_window_ParamLimits

0xc6e3,	// (0x0000c802) popup_fast_swap2_window

0x734a,	// (0x00007469) aid_size_cell_fast2

0xf4f5,	// (0x0000f614) bg_popup_window_pane_cp17

0x7354,	// (0x00007473) heading_pane_cp2

0x735c,	// (0x0000747b) listscroll_fast2_pane

0x7364,	// (0x00007483) grid_fast2_pane

0x736e,	// (0x0000748d) listscroll_fast2_pane_g1

0x7376,	// (0x00007495) listscroll_fast2_pane_g2

0x0001,

0xfbb0,	// (0x0000fccf) listscroll_fast2_pane_g

0x157a,	// (0x00001699) scroll_pane_cp26

0x7380,	// (0x0000749f) cell_fast2_pane_ParamLimits

0x7380,	// (0x0000749f) cell_fast2_pane

0x7395,	// (0x000074b4) cell_fast2_pane_g1

0x739e,	// (0x000074bd) cell_fast2_pane_g2

0x73a7,	// (0x000074c6) cell_fast2_pane_g3

0x0002,

0xfbb5,	// (0x0000fcd4) cell_fast2_pane_g

0x0a7c,	// (0x00000b9b) grid_highlight_pane_cp9

0x0a91,	// (0x00000bb0) main_eswt_pane_ParamLimits

0x0a91,	// (0x00000bb0) main_eswt_pane

0x7310,	// (0x0000742f) list_single_text_info_pane

0x73af,	// (0x000074ce) eswt_ctrl_button_pane

0x73af,	// (0x000074ce) eswt_ctrl_canvas_pane

0x73b7,	// (0x000074d6) eswt_ctrl_combo_pane

0x73af,	// (0x000074ce) eswt_ctrl_default_pane

0x73af,	// (0x000074ce) eswt_ctrl_label_pane

0x73bf,	// (0x000074de) eswt_ctrl_wait_pane

0x73c7,	// (0x000074e6) eswt_shell_pane

0xf4f5,	// (0x0000f614) listscroll_eswt_app_pane

0x73e7,	// (0x00007506) popup_eswt_tasktip_window_ParamLimits

0x73e7,	// (0x00007506) popup_eswt_tasktip_window

0x3795,	// (0x000038b4) bg_popup_window_pane_cp18

0x7400,	// (0x0000751f) eswt_control_pane_g1_ParamLimits

0x7400,	// (0x0000751f) eswt_control_pane_g1

0x740d,	// (0x0000752c) eswt_control_pane_g2_ParamLimits

0x740d,	// (0x0000752c) eswt_control_pane_g2

0x741a,	// (0x00007539) eswt_control_pane_g3_ParamLimits

0x741a,	// (0x00007539) eswt_control_pane_g3

0x7427,	// (0x00007546) eswt_control_pane_g4_ParamLimits

0x7427,	// (0x00007546) eswt_control_pane_g4

0x0003,

0xfbbc,	// (0x0000fcdb) eswt_control_pane_g_ParamLimits

0xfbbc,	// (0x0000fcdb) eswt_control_pane_g

0x1277,	// (0x00001396) bg_button_pane_ParamLimits

0x1277,	// (0x00001396) bg_button_pane

0x0a91,	// (0x00000bb0) common_borders_pane_copy2_ParamLimits

0x0a91,	// (0x00000bb0) common_borders_pane_copy2

0x7434,	// (0x00007553) control_button_pane_g1_ParamLimits

0x7434,	// (0x00007553) control_button_pane_g1

0x7440,	// (0x0000755f) control_button_pane_g2_ParamLimits

0x7440,	// (0x0000755f) control_button_pane_g2

0x744c,	// (0x0000756b) control_button_pane_g3_ParamLimits

0x744c,	// (0x0000756b) control_button_pane_g3

0x0002,

0xfbc5,	// (0x0000fce4) control_button_pane_g_ParamLimits

0xfbc5,	// (0x0000fce4) control_button_pane_g

0x7460,	// (0x0000757f) control_button_pane_t1

0x746e,	// (0x0000758d) control_button_pane_t2

0x0001,

0xfbcc,	// (0x0000fceb) control_button_pane_t

0x35e7,	// (0x00003706) bg_button_pane_g1

0x35ef,	// (0x0000370e) bg_button_pane_g2

0x35f7,	// (0x00003716) bg_button_pane_g3

0x35ff,	// (0x0000371e) bg_button_pane_g4

0x3607,	// (0x00003726) bg_button_pane_g5

0x360f,	// (0x0000372e) bg_button_pane_g6

0x3617,	// (0x00003736) bg_button_pane_g7

0x361f,	// (0x0000373e) bg_button_pane_g8

0x3627,	// (0x00003746) bg_button_pane_g9

0x0008,

0xf830,	// (0x0000f94f) bg_button_pane_g

0x6562,	// (0x00006681) common_borders_pane_ParamLimits

0x6562,	// (0x00006681) common_borders_pane

0x7400,	// (0x0000751f) eswt_control_pane_g1_copy1_ParamLimits

0x7400,	// (0x0000751f) eswt_control_pane_g1_copy1

0x740d,	// (0x0000752c) eswt_control_pane_g2_copy1_ParamLimits

0x740d,	// (0x0000752c) eswt_control_pane_g2_copy1

0x741a,	// (0x00007539) eswt_control_pane_g3_copy1_ParamLimits

0x741a,	// (0x00007539) eswt_control_pane_g3_copy1

0x7427,	// (0x00007546) eswt_control_pane_g4_copy1_ParamLimits

0x7427,	// (0x00007546) eswt_control_pane_g4_copy1

0x659d,	// (0x000066bc) bg_eswt_ctrl_canvas_pane_g1

0x6562,	// (0x00006681) common_borders_pane_cp2_ParamLimits

0x6562,	// (0x00006681) common_borders_pane_cp2

0x6562,	// (0x00006681) common_borders_pane_cp3_ParamLimits

0x6562,	// (0x00006681) common_borders_pane_cp3

0x747c,	// (0x0000759b) separator_horizontal_pane

0x7484,	// (0x000075a3) separator_vertical_pane

0x7400,	// (0x0000751f) eswt_control_pane_g1_copy2_ParamLimits

0x7400,	// (0x0000751f) eswt_control_pane_g1_copy2

0x740d,	// (0x0000752c) eswt_control_pane_g2_copy2_ParamLimits

0x740d,	// (0x0000752c) eswt_control_pane_g2_copy2

0x741a,	// (0x00007539) eswt_control_pane_g3_copy2_ParamLimits

0x741a,	// (0x00007539) eswt_control_pane_g3_copy2

0x7427,	// (0x00007546) eswt_control_pane_g4_copy2_ParamLimits

0x7427,	// (0x00007546) eswt_control_pane_g4_copy2

0xf4f5,	// (0x0000f614) common_borders_pane_cp4

0x748d,	// (0x000075ac) separator_horizontal_pane_g1

0x7496,	// (0x000075b5) separator_horizontal_pane_g2

0x749f,	// (0x000075be) separator_horizontal_pane_g3

0x0002,

0xfbd1,	// (0x0000fcf0) separator_horizontal_pane_g

0x7400,	// (0x0000751f) eswt_control_pane_g1_copy3_ParamLimits

0x7400,	// (0x0000751f) eswt_control_pane_g1_copy3

0x740d,	// (0x0000752c) eswt_control_pane_g2_copy3_ParamLimits

0x740d,	// (0x0000752c) eswt_control_pane_g2_copy3

0x741a,	// (0x00007539) eswt_control_pane_g3_copy3_ParamLimits

0x741a,	// (0x00007539) eswt_control_pane_g3_copy3

0x7427,	// (0x00007546) eswt_control_pane_g4_copy3_ParamLimits

0x7427,	// (0x00007546) eswt_control_pane_g4_copy3

0xf4f5,	// (0x0000f614) common_borders_pane_cp5

0x74a8,	// (0x000075c7) separator_vertical_pane_g1

0x74b1,	// (0x000075d0) separator_vertical_pane_g2

0x74ba,	// (0x000075d9) separator_vertical_pane_g3

0x0002,

0xfbd8,	// (0x0000fcf7) separator_vertical_pane_g

0x7400,	// (0x0000751f) eswt_control_pane_g1_copy4_ParamLimits

0x7400,	// (0x0000751f) eswt_control_pane_g1_copy4

0x740d,	// (0x0000752c) eswt_control_pane_g2_copy4_ParamLimits

0x740d,	// (0x0000752c) eswt_control_pane_g2_copy4

0x741a,	// (0x00007539) eswt_control_pane_g3_copy4_ParamLimits

0x741a,	// (0x00007539) eswt_control_pane_g3_copy4

0x7427,	// (0x00007546) eswt_control_pane_g4_copy4_ParamLimits

0x7427,	// (0x00007546) eswt_control_pane_g4_copy4

0x74c3,	// (0x000075e2) eswt_ctrl_combo_button_pane

0x74cb,	// (0x000075ea) eswt_ctrl_input_pane

0x74d3,	// (0x000075f2) popup_choice_list_window_cp70

0x74db,	// (0x000075fa) eswt_ctrl_input_pane_t1

0xf4f5,	// (0x0000f614) input_focus_pane_cp70

0x6562,	// (0x00006681) bg_button_pane_cp70_ParamLimits

0x6562,	// (0x00006681) bg_button_pane_cp70

0x74e9,	// (0x00007608) eswt_ctrl_combo_button_pane_g1

0x74f1,	// (0x00007610) wait_bar_pane_cp70

0x3795,	// (0x000038b4) bg_popup_window_pane_cp70_ParamLimits

0x3795,	// (0x000038b4) bg_popup_window_pane_cp70

0x74f9,	// (0x00007618) popup_eswt_tasktip_window_t1

0x750f,	// (0x0000762e) wait_bar_pane_cp71_ParamLimits

0x750f,	// (0x0000762e) wait_bar_pane_cp71

0x751b,	// (0x0000763a) grid_eswt_app_pane

0x1a67,	// (0x00001b86) scroll_pane_cp70

0xdb7f,	// (0x0000dc9e) cell_eswt_app_pane_ParamLimits

0xdb7f,	// (0x0000dc9e) cell_eswt_app_pane

0xdba9,	// (0x0000dcc8) cell_eswt_app_pane_g1_ParamLimits

0xdba9,	// (0x0000dcc8) cell_eswt_app_pane_g1

0xdbd8,	// (0x0000dcf7) cell_eswt_app_pane_g2_ParamLimits

0xdbd8,	// (0x0000dcf7) cell_eswt_app_pane_g2

0x0001,

0xfbdf,	// (0x0000fcfe) cell_eswt_app_pane_g_ParamLimits

0xfbdf,	// (0x0000fcfe) cell_eswt_app_pane_g

0xdc01,	// (0x0000dd20) cell_eswt_app_pane_t1_ParamLimits

0xdc01,	// (0x0000dd20) cell_eswt_app_pane_t1

0x75de,	// (0x000076fd) grid_highlight_pane_cp70_ParamLimits

0x75de,	// (0x000076fd) grid_highlight_pane_cp70

0x23f5,	// (0x00002514) set_content_pane_g1

0xc509,	// (0x0000c628) status_small_volume_pane

0xdc33,	// (0x0000dd52) status_small_volume_pane_g1

0xdc3b,	// (0x0000dd5a) volume_small2_pane

0xdc44,	// (0x0000dd63) volume_small2_pane_g1

0xdc4d,	// (0x0000dd6c) volume_small2_pane_g2

0xdc56,	// (0x0000dd75) volume_small2_pane_g3

0xdc5f,	// (0x0000dd7e) volume_small2_pane_g4

0xdc68,	// (0x0000dd87) volume_small2_pane_g5

0xdc71,	// (0x0000dd90) volume_small2_pane_g6

0xdc7a,	// (0x0000dd99) volume_small2_pane_g7

0xdc83,	// (0x0000dda2) volume_small2_pane_g8

0xdc8c,	// (0x0000ddab) volume_small2_pane_g9

0xdc95,	// (0x0000ddb4) volume_small2_pane_g10

0x0009,

0xfbe4,	// (0x0000fd03) volume_small2_pane_g

0x6b77,	// (0x00006c96) fep_vkb_top_text_pane_g1_ParamLimits

0xdad6,	// (0x0000dbf5) fep_vkb_top_text_pane_t1_ParamLimits

0x6ea0,	// (0x00006fbf) popup_preview_fixed_window_g3_ParamLimits

0x6ea0,	// (0x00006fbf) popup_preview_fixed_window_g3

0xcd0c,	// (0x0000ce2b) popup_toolbar_trans_pane

0xd433,	// (0x0000d552) aid_height_set_list_ParamLimits

0x4e0d,	// (0x00004f2c) aid_size_parent_ParamLimits

0x2a6c,	// (0x00002b8b) list_highlight_pane_cp2_ParamLimits

0x23f5,	// (0x00002514) set_content_pane_g1_ParamLimits

0xd5ed,	// (0x0000d70c) list_single_image_pane_ParamLimits

0xd5ed,	// (0x0000d70c) list_single_image_pane

0xdc9e,	// (0x0000ddbd) aid_size_cell_image_ParamLimits

0xdc9e,	// (0x0000ddbd) aid_size_cell_image

0xdcab,	// (0x0000ddca) grid_single_image_pane_ParamLimits

0xdcab,	// (0x0000ddca) grid_single_image_pane

0x36ac,	// (0x000037cb) list_single_image_pane_g1_ParamLimits

0x36ac,	// (0x000037cb) list_single_image_pane_g1

0x766e,	// (0x0000778d) list_single_image_pane_g2_ParamLimits

0x766e,	// (0x0000778d) list_single_image_pane_g2

0x0001,

0xfbf9,	// (0x0000fd18) list_single_image_pane_g_ParamLimits

0xfbf9,	// (0x0000fd18) list_single_image_pane_g

0x7682,	// (0x000077a1) list_single_image_pane_t1_ParamLimits

0x7682,	// (0x000077a1) list_single_image_pane_t1

0xdcb7,	// (0x0000ddd6) cell_image_list_pane_ParamLimits

0xdcb7,	// (0x0000ddd6) cell_image_list_pane

0xdccb,	// (0x0000ddea) cell_image_list_pane_g1

0xdcd4,	// (0x0000ddf3) cell_image_list_pane_g2

0x0001,

0xfbfe,	// (0x0000fd1d) cell_image_list_pane_g

0x76be,	// (0x000077dd) aid_size_cell_tb_trans_pane

0x1277,	// (0x00001396) bg_tb_trans_pane

0x76d0,	// (0x000077ef) grid_tb_trans_pane

0x35e7,	// (0x00003706) bg_tb_trans_pane_g1

0x35ef,	// (0x0000370e) bg_tb_trans_pane_g2

0x35f7,	// (0x00003716) bg_tb_trans_pane_g3

0x35ff,	// (0x0000371e) bg_tb_trans_pane_g4

0x3607,	// (0x00003726) bg_tb_trans_pane_g5

0x361f,	// (0x0000373e) bg_tb_trans_pane_g6

0x3627,	// (0x00003746) bg_tb_trans_pane_g7

0x360f,	// (0x0000372e) bg_tb_trans_pane_g8

0x3617,	// (0x00003736) bg_tb_trans_pane_g9

0x0008,

0xfc03,	// (0x0000fd22) bg_tb_trans_pane_g

0x76e4,	// (0x00007803) cell_toolbar_trans_pane_ParamLimits

0x76e4,	// (0x00007803) cell_toolbar_trans_pane

0x659d,	// (0x000066bc) cell_toolbar_trans_pane_g1

0xd840,	// (0x0000d95f) list_form2_midp_pane_t1

0xd84e,	// (0x0000d96d) list_form2_midp_pane_t2

0x0001,

0xfaac,	// (0x0000fbcb) list_form2_midp_pane_t

0x613f,	// (0x0000625e) scroll_pane_cp51_ParamLimits

0x634a,	// (0x00006469) form2_midp_wait_pane_g1

0x6353,	// (0x00006472) form2_midp_wait_pane_g2

0x635c,	// (0x0000647b) form2_midp_wait_pane_g3

0x0002,

0xfac1,	// (0x0000fbe0) form2_midp_wait_pane_g

0x03e8,	// (0x00000507) list_highlight_pane_cp21_ParamLimits

0x63a8,	// (0x000064c7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x63b7,	// (0x000064d6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5013,	// (0x00005132) list_single_2graphic_im_pane_ParamLimits

0x5013,	// (0x00005132) list_single_2graphic_im_pane

0x770a,	// (0x00007829) list_single_2graphic_im_pane_g1_ParamLimits

0x770a,	// (0x00007829) list_single_2graphic_im_pane_g1

0x771b,	// (0x0000783a) list_single_2graphic_im_pane_g2_ParamLimits

0x771b,	// (0x0000783a) list_single_2graphic_im_pane_g2

0x7727,	// (0x00007846) list_single_2graphic_im_pane_g3_ParamLimits

0x7727,	// (0x00007846) list_single_2graphic_im_pane_g3

0x0003,

0xfc16,	// (0x0000fd35) list_single_2graphic_im_pane_g_ParamLimits

0xfc16,	// (0x0000fd35) list_single_2graphic_im_pane_g

0x7747,	// (0x00007866) list_single_2graphic_im_pane_t1_ParamLimits

0x7747,	// (0x00007866) list_single_2graphic_im_pane_t1

0x6eac,	// (0x00006fcb) list_single_graphic_2heading_pane_fp_ParamLimits

0x6eac,	// (0x00006fcb) list_single_graphic_2heading_pane_fp

0x6ef0,	// (0x0000700f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6ef0,	// (0x0000700f) list_single_graphic_2heading_pane_fp_g1

0x6ec1,	// (0x00006fe0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6ec1,	// (0x00006fe0) list_single_graphic_2heading_pane_fp_g2

0x129d,	// (0x000013bc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x129d,	// (0x000013bc) list_single_graphic_2heading_pane_fp_g3

0x12a9,	// (0x000013c8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x12a9,	// (0x000013c8) list_single_graphic_2heading_pane_fp_g4

0x6ecd,	// (0x00006fec) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6ecd,	// (0x00006fec) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb44,	// (0x0000fc63) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb44,	// (0x0000fc63) list_single_graphic_2heading_pane_fp_g

0x7778,	// (0x00007897) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7778,	// (0x00007897) list_single_graphic_2heading_pane_fp_t1

0x6f28,	// (0x00007047) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6f28,	// (0x00007047) list_single_graphic_2heading_pane_fp_t2

0x778e,	// (0x000078ad) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x778e,	// (0x000078ad) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc1f,	// (0x0000fd3e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc1f,	// (0x0000fd3e) list_single_graphic_2heading_pane_fp_t

0x67c7,	// (0x000068e6) fep_hwr_write_pane_g5_ParamLimits

0x67c7,	// (0x000068e6) fep_hwr_write_pane_g5

0x67d3,	// (0x000068f2) fep_hwr_write_pane_g6_ParamLimits

0x67d3,	// (0x000068f2) fep_hwr_write_pane_g6

0x73c7,	// (0x000074e6) eswt_shell_pane_ParamLimits

0x3795,	// (0x000038b4) bg_popup_window_pane_cp18_ParamLimits

0x73f8,	// (0x00007517) heading_pane_cp70

0x74f9,	// (0x00007618) popup_eswt_tasktip_window_t1_ParamLimits

0xcdd4,	// (0x0000cef3) aid_touch_tab_arrow_left

0xcdea,	// (0x0000cf09) aid_touch_tab_arrow_right

0xba56,	// (0x0000bb75) title_pane_g3_ParamLimits

0xba56,	// (0x0000bb75) title_pane_g3

0x1156,	// (0x00001275) set_value_pane_g1

0xcd0c,	// (0x0000ce2b) popup_toolbar_trans_pane_ParamLimits

0x76be,	// (0x000077dd) aid_size_cell_tb_trans_pane_ParamLimits

0x1277,	// (0x00001396) bg_tb_trans_pane_ParamLimits

0x76d0,	// (0x000077ef) grid_tb_trans_pane_ParamLimits

0x071c,	// (0x0000083b) cont_note_pane_ParamLimits

0x071c,	// (0x0000083b) cont_note_pane

0x0a91,	// (0x00000bb0) cont_snote2_single_text_pane_ParamLimits

0x0a91,	// (0x00000bb0) cont_snote2_single_text_pane

0x0a91,	// (0x00000bb0) cont_snote2_single_graphic_pane_ParamLimits

0x0a91,	// (0x00000bb0) cont_snote2_single_graphic_pane

0x3e75,	// (0x00003f94) cont_note_wait_pane_ParamLimits

0x3e75,	// (0x00003f94) cont_note_wait_pane

0x3e75,	// (0x00003f94) cont_note_image_pane_ParamLimits

0x3e75,	// (0x00003f94) cont_note_image_pane

0x77a4,	// (0x000078c3) popup_note2_window_g1_ParamLimits

0x77a4,	// (0x000078c3) popup_note2_window_g1

0x77d5,	// (0x000078f4) popup_note2_window_t1_ParamLimits

0x77d5,	// (0x000078f4) popup_note2_window_t1

0x781a,	// (0x00007939) popup_note2_window_t2_ParamLimits

0x781a,	// (0x00007939) popup_note2_window_t2

0x785f,	// (0x0000797e) popup_note2_window_t3_ParamLimits

0x785f,	// (0x0000797e) popup_note2_window_t3

0x78a4,	// (0x000079c3) popup_note2_window_t4_ParamLimits

0x78a4,	// (0x000079c3) popup_note2_window_t4

0x07a0,	// (0x000008bf) popup_note2_window_t5_ParamLimits

0x07a0,	// (0x000008bf) popup_note2_window_t5

0x0004,

0xfc2b,	// (0x0000fd4a) popup_note2_window_t_ParamLimits

0xfc2b,	// (0x0000fd4a) popup_note2_window_t

0x78d3,	// (0x000079f2) popup_note2_image_window_g1_ParamLimits

0x78d3,	// (0x000079f2) popup_note2_image_window_g1

0x78df,	// (0x000079fe) popup_note2_image_window_g2_ParamLimits

0x78df,	// (0x000079fe) popup_note2_image_window_g2

0x0001,

0xfc36,	// (0x0000fd55) popup_note2_image_window_g_ParamLimits

0xfc36,	// (0x0000fd55) popup_note2_image_window_g

0x78f1,	// (0x00007a10) popup_note2_image_window_t1_ParamLimits

0x78f1,	// (0x00007a10) popup_note2_image_window_t1

0x7909,	// (0x00007a28) popup_note2_image_window_t2_ParamLimits

0x7909,	// (0x00007a28) popup_note2_image_window_t2

0x7921,	// (0x00007a40) popup_note2_image_window_t3_ParamLimits

0x7921,	// (0x00007a40) popup_note2_image_window_t3

0x0002,

0xfc3b,	// (0x0000fd5a) popup_note2_image_window_t_ParamLimits

0xfc3b,	// (0x0000fd5a) popup_note2_image_window_t

0x3e83,	// (0x00003fa2) popup_note2_wait_window_g1_ParamLimits

0x3e83,	// (0x00003fa2) popup_note2_wait_window_g1

0x793d,	// (0x00007a5c) popup_note2_wait_window_g2_ParamLimits

0x793d,	// (0x00007a5c) popup_note2_wait_window_g2

0x3e9b,	// (0x00003fba) popup_note2_wait_window_g3_ParamLimits

0x3e9b,	// (0x00003fba) popup_note2_wait_window_g3

0x0002,

0xfc42,	// (0x0000fd61) popup_note2_wait_window_g_ParamLimits

0xfc42,	// (0x0000fd61) popup_note2_wait_window_g

0x7949,	// (0x00007a68) popup_note2_wait_window_t1_ParamLimits

0x7949,	// (0x00007a68) popup_note2_wait_window_t1

0x7967,	// (0x00007a86) popup_note2_wait_window_t2_ParamLimits

0x7967,	// (0x00007a86) popup_note2_wait_window_t2

0x7985,	// (0x00007aa4) popup_note2_wait_window_t3_ParamLimits

0x7985,	// (0x00007aa4) popup_note2_wait_window_t3

0x7997,	// (0x00007ab6) popup_note2_wait_window_t4_ParamLimits

0x7997,	// (0x00007ab6) popup_note2_wait_window_t4

0x0003,

0xfc49,	// (0x0000fd68) popup_note2_wait_window_t_ParamLimits

0xfc49,	// (0x0000fd68) popup_note2_wait_window_t

0x79a9,	// (0x00007ac8) wait_bar2_pane_ParamLimits

0x79a9,	// (0x00007ac8) wait_bar2_pane

0x79c1,	// (0x00007ae0) popup_snote2_single_text_window_g1_ParamLimits

0x79c1,	// (0x00007ae0) popup_snote2_single_text_window_g1

0x79e9,	// (0x00007b08) popup_snote2_single_text_window_t1_ParamLimits

0x79e9,	// (0x00007b08) popup_snote2_single_text_window_t1

0x7a35,	// (0x00007b54) popup_snote2_single_text_window_t2_ParamLimits

0x7a35,	// (0x00007b54) popup_snote2_single_text_window_t2

0x7a81,	// (0x00007ba0) popup_snote2_single_text_window_t3_ParamLimits

0x7a81,	// (0x00007ba0) popup_snote2_single_text_window_t3

0x7ac2,	// (0x00007be1) popup_snote2_single_text_window_t4_ParamLimits

0x7ac2,	// (0x00007be1) popup_snote2_single_text_window_t4

0x7af8,	// (0x00007c17) popup_snote2_single_text_window_t5_ParamLimits

0x7af8,	// (0x00007c17) popup_snote2_single_text_window_t5

0x0004,

0xfc52,	// (0x0000fd71) popup_snote2_single_text_window_t_ParamLimits

0xfc52,	// (0x0000fd71) popup_snote2_single_text_window_t

0x7b23,	// (0x00007c42) popup_snote2_single_graphic_window_g1_ParamLimits

0x7b23,	// (0x00007c42) popup_snote2_single_graphic_window_g1

0x7b4b,	// (0x00007c6a) popup_snote2_single_graphic_window_g2_ParamLimits

0x7b4b,	// (0x00007c6a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc5d,	// (0x0000fd7c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc5d,	// (0x0000fd7c) popup_snote2_single_graphic_window_g

0x7b73,	// (0x00007c92) popup_snote2_single_graphic_window_t1_ParamLimits

0x7b73,	// (0x00007c92) popup_snote2_single_graphic_window_t1

0x7bbf,	// (0x00007cde) popup_snote2_single_graphic_window_t2_ParamLimits

0x7bbf,	// (0x00007cde) popup_snote2_single_graphic_window_t2

0x7a81,	// (0x00007ba0) popup_snote2_single_graphic_window_t3_ParamLimits

0x7a81,	// (0x00007ba0) popup_snote2_single_graphic_window_t3

0x7ac2,	// (0x00007be1) popup_snote2_single_graphic_window_t4_ParamLimits

0x7ac2,	// (0x00007be1) popup_snote2_single_graphic_window_t4

0x7af8,	// (0x00007c17) popup_snote2_single_graphic_window_t5_ParamLimits

0x7af8,	// (0x00007c17) popup_snote2_single_graphic_window_t5

0x0004,

0xfc62,	// (0x0000fd81) popup_snote2_single_graphic_window_t_ParamLimits

0xfc62,	// (0x0000fd81) popup_snote2_single_graphic_window_t

0x5faf,	// (0x000060ce) clock_nsta_pane_cp2_t1

0x5faf,	// (0x000060ce) clock_nsta_pane_cp2_t2

0x0001,

0xfa82,	// (0x0000fba1) clock_nsta_pane_cp2_t

0x1291,	// (0x000013b0) form_field_data_wide_pane_g1_ParamLimits

0x129d,	// (0x000013bc) form_field_data_wide_pane_g2_ParamLimits

0x129d,	// (0x000013bc) form_field_data_wide_pane_g2

0x12a9,	// (0x000013c8) form_field_data_wide_pane_g3_ParamLimits

0x12a9,	// (0x000013c8) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0000f770) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0000f770) form_field_data_wide_pane_g

0xd773,	// (0x0000d892) grid_touch_3_pane_ParamLimits

0xd773,	// (0x0000d892) grid_touch_3_pane

0xdcdd,	// (0x0000ddfc) cell_touch_3_pane_ParamLimits

0xdcdd,	// (0x0000ddfc) cell_touch_3_pane

0x659d,	// (0x000066bc) cell_touch_3_pane_g1

0x659d,	// (0x000066bc) cell_touch_3_pane_g2

0x0001,

0xfb07,	// (0x0000fc26) cell_touch_3_pane_g

0x07f8,	// (0x00000917) cont_query_data_pane

0x0800,	// (0x0000091f) cont_query_data_pane_cp1

0x7c39,	// (0x00007d58) button_value_adjust_pane_cp7

0x7c41,	// (0x00007d60) query_popup_pane_cp3

0x1dd8,	// (0x00001ef7) bg_popup_sub_pane_cp22_ParamLimits

0x1dee,	// (0x00001f0d) navi_navi_volume_pane_cp2

0x1e09,	// (0x00001f28) popup_side_volume_key_window_g2

0x1e18,	// (0x00001f37) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0000f806) popup_side_volume_key_window_g

0x1e35,	// (0x00001f54) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0000f80d) popup_side_volume_key_window_t

0x22bf,	// (0x000023de) popup_side_volume_key_window_ParamLimits

0xbe59,	// (0x0000bf78) list_double_graphic_pane_g4_ParamLimits

0xbe59,	// (0x0000bf78) list_double_graphic_pane_g4

0xd5c8,	// (0x0000d6e7) list_single_2heading_msg_pane_ParamLimits

0xd5c8,	// (0x0000d6e7) list_single_2heading_msg_pane

0xdd25,	// (0x0000de44) list_single_2heading_msg_pane_g1_ParamLimits

0xdd25,	// (0x0000de44) list_single_2heading_msg_pane_g1

0xdd31,	// (0x0000de50) list_single_2heading_msg_pane_g2_ParamLimits

0xdd31,	// (0x0000de50) list_single_2heading_msg_pane_g2

0xdd44,	// (0x0000de63) list_single_2heading_msg_pane_g3_ParamLimits

0xdd44,	// (0x0000de63) list_single_2heading_msg_pane_g3

0x7c88,	// (0x00007da7) list_single_2heading_msg_pane_g4_ParamLimits

0x7c88,	// (0x00007da7) list_single_2heading_msg_pane_g4

0x0003,

0xfc6d,	// (0x0000fd8c) list_single_2heading_msg_pane_g_ParamLimits

0xfc6d,	// (0x0000fd8c) list_single_2heading_msg_pane_g

0x7ca0,	// (0x00007dbf) list_single_2heading_msg_pane_t1_ParamLimits

0x7ca0,	// (0x00007dbf) list_single_2heading_msg_pane_t1

0xdd50,	// (0x0000de6f) list_single_2heading_msg_pane_t2_ParamLimits

0xdd50,	// (0x0000de6f) list_single_2heading_msg_pane_t2

0xddbb,	// (0x0000deda) list_single_2heading_msg_pane_t3_ParamLimits

0xddbb,	// (0x0000deda) list_single_2heading_msg_pane_t3

0x7d30,	// (0x00007e4f) list_single_2heading_msg_pane_t4_ParamLimits

0x7d30,	// (0x00007e4f) list_single_2heading_msg_pane_t4

0x0003,

0xfc76,	// (0x0000fd95) list_single_2heading_msg_pane_t_ParamLimits

0xfc76,	// (0x0000fd95) list_single_2heading_msg_pane_t

0x033c,	// (0x0000045b) title_pane_g4_ParamLimits

0x033c,	// (0x0000045b) title_pane_g4

0x17d1,	// (0x000018f0) title_pane_stacon_g3_ParamLimits

0x17d1,	// (0x000018f0) title_pane_stacon_g3

0x773b,	// (0x0000785a) list_single_2graphic_im_pane_g4_ParamLimits

0x773b,	// (0x0000785a) list_single_2graphic_im_pane_g4

0x4a38,	// (0x00004b57) popup_side_volume_key_window_cp

0x54c1,	// (0x000055e0) main_idle_act2_pane_t1

0x362f,	// (0x0000374e) toolbar_button_pane_g10

0xbdb2,	// (0x0000bed1) popup_toolbar_window_cp1

0x5fa0,	// (0x000060bf) clock_nsta_pane_cp_t1

0x5fa0,	// (0x000060bf) clock_nsta_pane_cp_t2

0x0001,

0xfa7d,	// (0x0000fb9c) clock_nsta_pane_cp_t

0x1dee,	// (0x00001f0d) navi_navi_volume_pane_cp2_ParamLimits

0x1dfd,	// (0x00001f1c) popup_side_volume_key_window_g1_ParamLimits

0x1e09,	// (0x00001f28) popup_side_volume_key_window_g2_ParamLimits

0x1e18,	// (0x00001f37) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0000f806) popup_side_volume_key_window_g_ParamLimits

0x6607,	// (0x00006726) fep_hwr_aid_pane

0x66ae,	// (0x000067cd) bg_fep_hwr_top_pane_g4_ParamLimits

0x66ce,	// (0x000067ed) fep_hwr_top_pane_g1_ParamLimits

0x66e0,	// (0x000067ff) fep_hwr_top_pane_g2_ParamLimits

0x66f2,	// (0x00006811) fep_hwr_top_pane_g3_ParamLimits

0xfad2,	// (0x0000fbf1) fep_hwr_top_pane_g_ParamLimits

0x6707,	// (0x00006826) fep_hwr_top_text_pane_ParamLimits

0x47fb,	// (0x0000491a) aid_touch_tab_arrow_arrow_2

0x4804,	// (0x00004923) aid_touch_tab_arrow_left_2

0x661b,	// (0x0000673a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6652,	// (0x00006771) fep_hwr_prediction_pane

0x697f,	// (0x00006a9e) fep_vkb_prediction_pane

0xdab6,	// (0x0000dbd5) fep_vkb_side_pane_g3_ParamLimits

0xdab6,	// (0x0000dbd5) fep_vkb_side_pane_g3

0x6a2f,	// (0x00006b4e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x70e5,	// (0x00007204) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x70f2,	// (0x00007211) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb7c,	// (0x0000fc9b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7d55,	// (0x00007e74) fep_hwr_prediction_pane_g1

0x7d5f,	// (0x00007e7e) fep_hwr_prediction_pane_g2

0x7d67,	// (0x00007e86) fep_hwr_prediction_pane_g3

0x7d6f,	// (0x00007e8e) fep_hwr_prediction_pane_g4

0x0003,

0xfc7f,	// (0x0000fd9e) fep_hwr_prediction_pane_g

0x7d55,	// (0x00007e74) fep_vkb_prediction_pane_g1

0x7d77,	// (0x00007e96) fep_vkb_prediction_pane_g2

0x7d7f,	// (0x00007e9e) fep_vkb_prediction_pane_g3

0x7d87,	// (0x00007ea6) fep_vkb_prediction_pane_g4

0x0003,

0xfc88,	// (0x0000fda7) fep_vkb_prediction_pane_g

0x4d76,	// (0x00004e95) slider_set_pane_g3

0x4d8a,	// (0x00004ea9) slider_set_pane_g4

0x4da2,	// (0x00004ec1) slider_set_pane_g5

0x4d76,	// (0x00004e95) slider_set_pane_g6

0x4db8,	// (0x00004ed7) slider_set_pane_g7

0x4f72,	// (0x00005091) slider_form_pane_g3

0x4f7b,	// (0x0000509a) slider_form_pane_g4

0x4f83,	// (0x000050a2) slider_form_pane_g5

0x4f72,	// (0x00005091) slider_form_pane_g6

0xd57e,	// (0x0000d69d) slider_form_pane_g7

0x57cf,	// (0x000058ee) slider_set_pane_vc_g3

0x57d8,	// (0x000058f7) slider_set_pane_vc_g4

0x57e1,	// (0x00005900) slider_set_pane_vc_g5

0x57cf,	// (0x000058ee) slider_set_pane_vc_g6

0x57ea,	// (0x00005909) slider_set_pane_vc_g7

0x5c5e,	// (0x00005d7d) slider_form_pane_vc_g1

0x5c67,	// (0x00005d86) slider_form_pane_vc_g2

0x5c70,	// (0x00005d8f) slider_form_pane_vc_g3

0x5c5e,	// (0x00005d7d) slider_form_pane_vc_g4

0x5c79,	// (0x00005d98) slider_form_pane_vc_g5

0x0004,

0xfa4f,	// (0x0000fb6e) slider_form_pane_vc_g

0xf4f5,	// (0x0000f614) main_idle_act3_pane

0x7d8f,	// (0x00007eae) ai3_links_pane

0xde29,	// (0x0000df48) popup_ai3_data_window_ParamLimits

0xde29,	// (0x0000df48) popup_ai3_data_window

0xf4f5,	// (0x0000f614) grid_ai3_links_pane

0xde43,	// (0x0000df62) cell_ai3_links_pane_ParamLimits

0xde43,	// (0x0000df62) cell_ai3_links_pane

0x7dca,	// (0x00007ee9) bg_popup_sub_pane_cp11

0x7dd7,	// (0x00007ef6) cell_ai3_links_pane_g1

0xf4f5,	// (0x0000f614) bg_popup_sub_pane_cp12

0x7dfc,	// (0x00007f1b) heading_ai3_data_pane

0x7e04,	// (0x00007f23) list_ai3_gene_pane

0x7e10,	// (0x00007f2f) popup_ai3_data_window_g1

0x7e18,	// (0x00007f37) heading_ai3_data_pane_g1

0x7e20,	// (0x00007f3f) heading_ai3_data_pane_t1

0x7e2e,	// (0x00007f4d) list_double_ai3_gene_pane_ParamLimits

0x7e2e,	// (0x00007f4d) list_double_ai3_gene_pane

0x7e3b,	// (0x00007f5a) list_single_ai3_gene_pane_ParamLimits

0x7e3b,	// (0x00007f5a) list_single_ai3_gene_pane

0x6562,	// (0x00006681) list_highlight_pane_cp7_ParamLimits

0x6562,	// (0x00006681) list_highlight_pane_cp7

0x7e48,	// (0x00007f67) list_single_a13_gene_pane_t1_ParamLimits

0x7e48,	// (0x00007f67) list_single_a13_gene_pane_t1

0x7e5f,	// (0x00007f7e) list_single_ai3_gene_pane_g1

0x7e68,	// (0x00007f87) list_single_ai3_gene_pane_g2

0x0001,

0xfc91,	// (0x0000fdb0) list_single_ai3_gene_pane_g

0x7e70,	// (0x00007f8f) list_double_ai3_gene_pane_g1_ParamLimits

0x7e70,	// (0x00007f8f) list_double_ai3_gene_pane_g1

0x7e7c,	// (0x00007f9b) list_double_ai3_gene_pane_t1_ParamLimits

0x7e7c,	// (0x00007f9b) list_double_ai3_gene_pane_t1

0x7e98,	// (0x00007fb7) list_double_ai3_gene_pane_t2_ParamLimits

0x7e98,	// (0x00007fb7) list_double_ai3_gene_pane_t2

0x7eae,	// (0x00007fcd) list_double_ai3_gene_pane_t3_ParamLimits

0x7eae,	// (0x00007fcd) list_double_ai3_gene_pane_t3

0x0002,

0xfc96,	// (0x0000fdb5) list_double_ai3_gene_pane_t_ParamLimits

0xfc96,	// (0x0000fdb5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7c52,	// (0x00007d71) aid_size_min_col_2

0xdd0f,	// (0x0000de2e) aid_size_min_msg_ParamLimits

0xdd0f,	// (0x0000de2e) aid_size_min_msg

0xdaca,	// (0x0000dbe9) fep_vkb_top_text_pane_g2_ParamLimits

0xdaca,	// (0x0000dbe9) fep_vkb_top_text_pane_g2

0x0001,

0xfb02,	// (0x0000fc21) fep_vkb_top_text_pane_g_ParamLimits

0xfb02,	// (0x0000fc21) fep_vkb_top_text_pane_g

0xf4f5,	// (0x0000f614) main_hc_apps_shell_pane

0x7ecb,	// (0x00007fea) grid_hc_apps_pane_ParamLimits

0x7ecb,	// (0x00007fea) grid_hc_apps_pane

0x7edd,	// (0x00007ffc) list_hc_apps_pane

0x7ee5,	// (0x00008004) scroll_pane_cp37_ParamLimits

0x7ee5,	// (0x00008004) scroll_pane_cp37

0xde5d,	// (0x0000df7c) cell_hc_apps_pane_ParamLimits

0xde5d,	// (0x0000df7c) cell_hc_apps_pane

0xdf1b,	// (0x0000e03a) cell_hc_apps_pane_g1_ParamLimits

0xdf1b,	// (0x0000e03a) cell_hc_apps_pane_g1

0x7fcf,	// (0x000080ee) cell_hc_apps_pane_g2_ParamLimits

0x7fcf,	// (0x000080ee) cell_hc_apps_pane_g2

0x7feb,	// (0x0000810a) cell_hc_apps_pane_g3_ParamLimits

0x7feb,	// (0x0000810a) cell_hc_apps_pane_g3

0x0002,

0xfc9d,	// (0x0000fdbc) cell_hc_apps_pane_g_ParamLimits

0xfc9d,	// (0x0000fdbc) cell_hc_apps_pane_g

0xdf47,	// (0x0000e066) cell_hc_apps_pane_t1_ParamLimits

0xdf47,	// (0x0000e066) cell_hc_apps_pane_t1

0x071c,	// (0x0000083b) grid_highlight_pane_cp10_ParamLimits

0x071c,	// (0x0000083b) grid_highlight_pane_cp10

0xdf85,	// (0x0000e0a4) list_single_hc_apps_pane_ParamLimits

0xdf85,	// (0x0000e0a4) list_single_hc_apps_pane

0xdfb2,	// (0x0000e0d1) list_single_hc_apps_pane_g1

0xdfcb,	// (0x0000e0ea) list_single_hc_apps_pane_g2

0x0001,

0xfca4,	// (0x0000fdc3) list_single_hc_apps_pane_g

0xdfe4,	// (0x0000e103) list_single_hc_apps_pane_g2_copy1

0x80f7,	// (0x00008216) list_single_hc_apps_pane_t1

0x03e8,	// (0x00000507) bg_set_opt_pane_cp_ParamLimits

0x0432,	// (0x00000551) setting_slider_pane_t1_ParamLimits

0x044b,	// (0x0000056a) setting_slider_pane_t2_ParamLimits

0x0465,	// (0x00000584) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0000f658) setting_slider_pane_t_ParamLimits

0x047d,	// (0x0000059c) slider_set_pane_ParamLimits

0x28fd,	// (0x00002a1c) control_pane_g5_ParamLimits

0x28fd,	// (0x00002a1c) control_pane_g5

0x4d5d,	// (0x00004e7c) slider_set_pane_g1_ParamLimits

0x4d6a,	// (0x00004e89) slider_set_pane_g2_ParamLimits

0x4d76,	// (0x00004e95) slider_set_pane_g3_ParamLimits

0x4d8a,	// (0x00004ea9) slider_set_pane_g4_ParamLimits

0x4da2,	// (0x00004ec1) slider_set_pane_g5_ParamLimits

0x4d76,	// (0x00004e95) slider_set_pane_g6_ParamLimits

0x4db8,	// (0x00004ed7) slider_set_pane_g7_ParamLimits

0xf92e,	// (0x0000fa4d) slider_set_pane_g_ParamLimits

0x23a0,	// (0x000024bf) navi_icon_text_pane_ParamLimits

0xcd9d,	// (0x0000cebc) aid_fill_nsta_2_ParamLimits

0xcdd4,	// (0x0000cef3) aid_touch_tab_arrow_left_ParamLimits

0xcdea,	// (0x0000cf09) aid_touch_tab_arrow_right_ParamLimits

0xce85,	// (0x0000cfa4) clock_nsta_pane_ParamLimits

0x47dd,	// (0x000048fc) navi_icon_pane_g1_ParamLimits

0x47e9,	// (0x00004908) navi_text_pane_t1_ParamLimits

0x60ac,	// (0x000061cb) navi_icon_text_pane_g1_ParamLimits

0x60b8,	// (0x000061d7) navi_icon_text_pane_t1_ParamLimits

0xdfb2,	// (0x0000e0d1) list_single_hc_apps_pane_g1_ParamLimits

0xdfcb,	// (0x0000e0ea) list_single_hc_apps_pane_g2_ParamLimits

0xfca4,	// (0x0000fdc3) list_single_hc_apps_pane_g_ParamLimits

0xdfe4,	// (0x0000e103) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x80f7,	// (0x00008216) list_single_hc_apps_pane_t1_ParamLimits

0xb95b,	// (0x0000ba7a) popup_toolbar2_fixed_window_ParamLimits

0xb95b,	// (0x0000ba7a) popup_toolbar2_fixed_window

0xcd02,	// (0x0000ce21) popup_toolbar2_float_window

0xf4f5,	// (0x0000f614) bg_popup_sub_pane_cp27

0x8125,	// (0x00008244) grid_toolbar2_float_pane

0xf4f5,	// (0x0000f614) bg_popup_sub_pane_cp26

0x8125,	// (0x00008244) grid_toolbar2_fixed_pane

0xe000,	// (0x0000e11f) cell_toolbar2_fixed_pane_ParamLimits

0xe000,	// (0x0000e11f) cell_toolbar2_fixed_pane

0xe01a,	// (0x0000e139) cell_toolbar2_fixed_pane_g1

0x8146,	// (0x00008265) toolbar2_fixed_button_pane

0x35e7,	// (0x00003706) toolbar2_fixed_button_pane_g1

0x35ef,	// (0x0000370e) toolbar2_fixed_button_pane_g2

0x35f7,	// (0x00003716) toolbar2_fixed_button_pane_g3

0x35ff,	// (0x0000371e) toolbar2_fixed_button_pane_g4

0x3607,	// (0x00003726) toolbar2_fixed_button_pane_g5

0x360f,	// (0x0000372e) toolbar2_fixed_button_pane_g6

0x3617,	// (0x00003736) toolbar2_fixed_button_pane_g7

0x361f,	// (0x0000373e) toolbar2_fixed_button_pane_g8

0x3627,	// (0x00003746) toolbar2_fixed_button_pane_g9

0x0008,

0xf830,	// (0x0000f94f) toolbar2_fixed_button_pane_g

0x814e,	// (0x0000826d) cell_toolbar2_float_pane_ParamLimits

0x814e,	// (0x0000826d) cell_toolbar2_float_pane

0x815f,	// (0x0000827e) cell_toolbar2_float_pane_g1

0x8146,	// (0x00008265) toolbar2_fixed_button_pane_cp

0xd9a4,	// (0x0000dac3) fep_vkb_accented_list_pane_ParamLimits

0xd9a4,	// (0x0000dac3) fep_vkb_accented_list_pane

0x6d76,	// (0x00006e95) bg_popup_fep_shadow_pane_g9

0x251d,	// (0x0000263c) bg_popup_fep_shadow_pane_cp3

0x1561,	// (0x00001680) list_accented_list_pane

0x8168,	// (0x00008287) list_single_accented_list_pane_ParamLimits

0x8168,	// (0x00008287) list_single_accented_list_pane

0x251d,	// (0x0000263c) list_highlight_pane_cp10

0x8179,	// (0x00008298) list_single_accented_list_pane_t1

0xcc2c,	// (0x0000cd4b) popup_slider_window_ParamLimits

0xcc2c,	// (0x0000cd4b) popup_slider_window

0x7c49,	// (0x00007d68) aid_indentation_list_msg

0xe111,	// (0x0000e230) bg_popup_window_pane_cp19

0x82a5,	// (0x000083c4) popup_slider_window_g1

0x82c1,	// (0x000083e0) popup_slider_window_g2

0x82dd,	// (0x000083fc) popup_slider_window_g3

0x0005,

0xfca9,	// (0x0000fdc8) popup_slider_window_g

0x8343,	// (0x00008462) popup_slider_window_t1

0x83b7,	// (0x000084d6) small_volume_slider_vertical_pane

0x659d,	// (0x000066bc) small_volume_slider_vertical_pane_g1

0x659d,	// (0x000066bc) small_volume_slider_vertical_pane_g2

0x83d3,	// (0x000084f2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcbb,	// (0x0000fdda) small_volume_slider_vertical_pane_g

0xb8c9,	// (0x0000b9e8) area_side_right_pane_ParamLimits

0xb8c9,	// (0x0000b9e8) area_side_right_pane

0xe1c9,	// (0x0000e2e8) aid_size_side_button_ParamLimits

0xe1c9,	// (0x0000e2e8) aid_size_side_button

0xe1e2,	// (0x0000e301) grid_sctrl_middle_pane_ParamLimits

0xe1e2,	// (0x0000e301) grid_sctrl_middle_pane

0x840f,	// (0x0000852e) sctrl_sk_bottom_pane

0x8420,	// (0x0000853f) sctrl_sk_top_pane

0x8432,	// (0x00008551) aid_touch_sctrl_top

0x071c,	// (0x0000083b) bg_sctrl_sk_pane_ParamLimits

0x071c,	// (0x0000083b) bg_sctrl_sk_pane

0x843f,	// (0x0000855e) sctrl_sk_top_pane_g1

0x844c,	// (0x0000856b) sctrl_sk_top_pane_t1

0x8432,	// (0x00008551) aid_touch_sctrl_bottom

0x071c,	// (0x0000083b) bg_sctrl_sk_pane_cp_ParamLimits

0x071c,	// (0x0000083b) bg_sctrl_sk_pane_cp

0x8467,	// (0x00008586) sctrl_sk_bottom_pane_g1

0x844c,	// (0x0000856b) sctrl_sk_bottom_pane_t1

0xe1fc,	// (0x0000e31b) cell_sctrl_middle_pane_ParamLimits

0xe1fc,	// (0x0000e31b) cell_sctrl_middle_pane

0xe20d,	// (0x0000e32c) aid_touch_sctrl_middle_ParamLimits

0xe20d,	// (0x0000e32c) aid_touch_sctrl_middle

0xe21a,	// (0x0000e339) bg_sctrl_middle_pane_ParamLimits

0xe21a,	// (0x0000e339) bg_sctrl_middle_pane

0x852c,	// (0x0000864b) cell_sctrl_middle_pane_g1_ParamLimits

0x852c,	// (0x0000864b) cell_sctrl_middle_pane_g1

0xe228,	// (0x0000e347) cell_sctrl_middle_pane_g2_ParamLimits

0xe228,	// (0x0000e347) cell_sctrl_middle_pane_g2

0x0001,

0xfcc7,	// (0x0000fde6) cell_sctrl_middle_pane_g_ParamLimits

0xfcc7,	// (0x0000fde6) cell_sctrl_middle_pane_g

0x35e7,	// (0x00003706) bg_sctrl_middle_pane_g1

0x35ef,	// (0x0000370e) bg_sctrl_middle_pane_g2

0x35f7,	// (0x00003716) bg_sctrl_middle_pane_g3

0x35ff,	// (0x0000371e) bg_sctrl_middle_pane_g4

0x3607,	// (0x00003726) bg_sctrl_middle_pane_g5

0x360f,	// (0x0000372e) bg_sctrl_middle_pane_g6

0x3617,	// (0x00003736) bg_sctrl_middle_pane_g7

0x361f,	// (0x0000373e) bg_sctrl_middle_pane_g8

0x0007,

0xfccc,	// (0x0000fdeb) bg_sctrl_middle_pane_g

0x3627,	// (0x00003746) bg_sctrl_middle_pane_g8_copy1

0x35e7,	// (0x00003706) bg_sctrl_sk_pane_g1

0x35ef,	// (0x0000370e) bg_sctrl_sk_pane_g2

0x35f7,	// (0x00003716) bg_sctrl_sk_pane_g3

0x0008,

0xf830,	// (0x0000f94f) bg_sctrl_sk_pane_g

0x0c4f,	// (0x00000d6e) aid_size_touch_scroll_bar

0x35ff,	// (0x0000371e) bg_sctrl_sk_pane_g4

0x3607,	// (0x00003726) bg_sctrl_sk_pane_g5

0x360f,	// (0x0000372e) bg_sctrl_sk_pane_g6

0x3617,	// (0x00003736) bg_sctrl_sk_pane_g7

0x361f,	// (0x0000373e) bg_sctrl_sk_pane_g8

0x3627,	// (0x00003746) bg_sctrl_sk_pane_g9

0x2b4e,	// (0x00002c6d) popup_fep_china_hwr2_fs_candidate_window

0xc740,	// (0x0000c85f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc740,	// (0x0000c85f) popup_fep_china_hwr2_fs_control_window

0x6a2f,	// (0x00006b4e) sctrl_sk_top_pane_g2

0x0001,

0xfcc2,	// (0x0000fde1) sctrl_sk_top_pane_g

0xe234,	// (0x0000e353) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe234,	// (0x0000e353) aid_fep_china_hwr2_fs_cell

0xe248,	// (0x0000e367) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe248,	// (0x0000e367) bg_popup_fep_shadow_pane_cp4

0xe25f,	// (0x0000e37e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe25f,	// (0x0000e37e) bg_popup_fep_shadow_pane_cp5

0xe271,	// (0x0000e390) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe271,	// (0x0000e390) popup_fep_china_hwr2_fs_control_bar_grid

0xe285,	// (0x0000e3a4) popup_fep_china_hwr2_fs_control_funtion_grid

0x8500,	// (0x0000861f) aid_fep_china_hwr2_fs_candi_cell

0xf4f5,	// (0x0000f614) bg_popup_fep_shadow_pane_cp6

0x850a,	// (0x00008629) popup_fep_china_hwr2_fs_candidate_grid

0xe28d,	// (0x0000e3ac) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe28d,	// (0x0000e3ac) cell_fep_china_hwr2_fs_funtion_grid

0x659d,	// (0x000066bc) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x852c,	// (0x0000864b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x852c,	// (0x0000864b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x853a,	// (0x00008659) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x853a,	// (0x00008659) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcdd,	// (0x0000fdfc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcdd,	// (0x0000fdfc) cell_fep_china_hwr2_fs_funtion_grid_g

0xe2a5,	// (0x0000e3c4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe2a5,	// (0x0000e3c4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe2ba,	// (0x0000e3d9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe2ba,	// (0x0000e3d9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce2,	// (0x0000fe01) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce2,	// (0x0000fe01) cell_fep_china_hwr2_fs_funtion_grid_t

0x8581,	// (0x000086a0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8589,	// (0x000086a8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8591,	// (0x000086b0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfce7,	// (0x0000fe06) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8599,	// (0x000086b8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8599,	// (0x000086b8) cell_fep_china_hwr2_fs_candidate_grid

0x85b2,	// (0x000086d1) popup_fep_china_hwr2_fs_candidate_grid_g20

0x85ba,	// (0x000086d9) popup_fep_china_hwr2_fs_candidate_grid_g21

0x659d,	// (0x000066bc) cell_fep_china_hwr2_fs_candidate_grid_g1

0x659d,	// (0x000066bc) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb07,	// (0x0000fc26) cell_fep_china_hwr2_fs_candidate_grid_g

0x85c2,	// (0x000086e1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x314f,	// (0x0000326e) clock_nsta_pane_cp_24_ParamLimits

0x314f,	// (0x0000326e) clock_nsta_pane_cp_24

0x31cd,	// (0x000032ec) indicator_nsta_pane_cp_24_ParamLimits

0x31cd,	// (0x000032ec) indicator_nsta_pane_cp_24

0x4648,	// (0x00004767) heading_pane_g1

0x0001,

0xf895,	// (0x0000f9b4) heading_pane_g

0x5252,	// (0x00005371) grid_sct_catagory_button_pane

0x5282,	// (0x000053a1) scroll_pane_cp5_ParamLimits

0x614b,	// (0x0000626a) button_value_adjust_pane_cp5_ParamLimits

0x614b,	// (0x0000626a) button_value_adjust_pane_cp5

0x6247,	// (0x00006366) form2_midp_time_pane_ParamLimits

0x85d0,	// (0x000086ef) cell_sct_catagory_button_pane_ParamLimits

0x85d0,	// (0x000086ef) cell_sct_catagory_button_pane

0x6562,	// (0x00006681) bg_button_pane_cp01_ParamLimits

0x6562,	// (0x00006681) bg_button_pane_cp01

0x659d,	// (0x000066bc) cell_sct_catagory_button_pane_g1

0xcca5,	// (0x0000cdc4) popup_tb_extension_window

0xe2d6,	// (0x0000e3f5) aid_size_cell_ext_ParamLimits

0xe2d6,	// (0x0000e3f5) aid_size_cell_ext

0x0a91,	// (0x00000bb0) bg_tb_trans_pane_cp1_ParamLimits

0x0a91,	// (0x00000bb0) bg_tb_trans_pane_cp1

0xe2fc,	// (0x0000e41b) grid_tb_ext_pane_ParamLimits

0xe2fc,	// (0x0000e41b) grid_tb_ext_pane

0xe337,	// (0x0000e456) cell_tb_ext_pane_ParamLimits

0xe337,	// (0x0000e456) cell_tb_ext_pane

0xe35f,	// (0x0000e47e) cell_tb_ext_pane_g1_ParamLimits

0xe35f,	// (0x0000e47e) cell_tb_ext_pane_g1

0x8664,	// (0x00008783) cell_tb_ext_pane_t1

0x071c,	// (0x0000083b) list_highlight_pane_cp11_ParamLimits

0x071c,	// (0x0000083b) list_highlight_pane_cp11

0xb970,	// (0x0000ba8f) popup_uni_indicator_window_ParamLimits

0xb970,	// (0x0000ba8f) popup_uni_indicator_window

0x1277,	// (0x00001396) bg_popup_sub_pane_cp14

0x867f,	// (0x0000879e) list_uniindi_pane

0x868b,	// (0x000087aa) uniindi_top_pane

0x071c,	// (0x0000083b) bg_uniindi_top_pane

0x86aa,	// (0x000087c9) uniindi_top_pane_g1

0x86c0,	// (0x000087df) uniindi_top_pane_g2

0x0003,

0xfcee,	// (0x0000fe0d) uniindi_top_pane_g

0x86ea,	// (0x00008809) uniindi_top_pane_t1

0x8714,	// (0x00008833) list_single_uniindi_pane_ParamLimits

0x8714,	// (0x00008833) list_single_uniindi_pane

0x659d,	// (0x000066bc) bg_uniindi_top_pane_g1

0x8727,	// (0x00008846) list_single_uniindi_pane_g1

0x873a,	// (0x00008859) list_single_uniindi_pane_t1

0xf4f5,	// (0x0000f614) control_bg_pane

0x875f,	// (0x0000887e) bg_sctrl_sk_pane_cp1

0x8768,	// (0x00008887) bg_sctrl_sk_pane_cp2

0x8771,	// (0x00008890) control_bg_pane_g1

0x877a,	// (0x00008899) control_bg_pane_g2

0x0001,

0xfcf7,	// (0x0000fe16) control_bg_pane_g

0x5f44,	// (0x00006063) cell_indicator_nsta_pane_g1_ParamLimits

0xd7b0,	// (0x0000d8cf) cell_indicator_nsta_pane_g2_ParamLimits

0xfa6b,	// (0x0000fb8a) cell_indicator_nsta_pane_g_ParamLimits

0x62cf,	// (0x000063ee) form2_midp_time_pane_t1_ParamLimits

0x65f9,	// (0x00006718) main_idle_act4_pane_ParamLimits

0x65f9,	// (0x00006718) main_idle_act4_pane

0xcca5,	// (0x0000cdc4) popup_tb_extension_window_ParamLimits

0xe31e,	// (0x0000e43d) tb_ext_find_pane_ParamLimits

0xe31e,	// (0x0000e43d) tb_ext_find_pane

0x8783,	// (0x000088a2) ai_gene_pane_1_cp1

0x2664,	// (0x00002783) ai_gene_pane_2_cp1

0x878b,	// (0x000088aa) list_single_idle_plugin_calendar_pane

0x8794,	// (0x000088b3) list_single_idle_plugin_notification_pane

0x879d,	// (0x000088bc) list_single_idle_plugin_player_pane

0xe37c,	// (0x0000e49b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe37c,	// (0x0000e49b) list_single_idle_plugin_shortcut_pane

0xe3a4,	// (0x0000e4c3) main_idle_act4_pane_t1

0xe3ba,	// (0x0000e4d9) main_idle_act4_pane_t2

0x0001,

0xfcfc,	// (0x0000fe1b) main_idle_act4_pane_t

0xe3d0,	// (0x0000e4ef) middle_sk_idle_act4_pane_ParamLimits

0xe3d0,	// (0x0000e4ef) middle_sk_idle_act4_pane

0xe3ec,	// (0x0000e50b) popup_clock_digital_analogue_window_cp2

0xe414,	// (0x0000e533) shortcut_wheel_idle_act4_pane_ParamLimits

0xe414,	// (0x0000e533) shortcut_wheel_idle_act4_pane

0x659d,	// (0x000066bc) shortcut_wheel_idle_act4_pane_g1

0x659d,	// (0x000066bc) shortcut_wheel_idle_act4_pane_g2

0x659d,	// (0x000066bc) shortcut_wheel_idle_act4_pane_g3

0x659d,	// (0x000066bc) shortcut_wheel_idle_act4_pane_g4

0x659d,	// (0x000066bc) shortcut_wheel_idle_act4_pane_g5

0x8830,	// (0x0000894f) shortcut_wheel_idle_act4_pane_g6

0x8838,	// (0x00008957) shortcut_wheel_idle_act4_pane_g7

0x8840,	// (0x0000895f) shortcut_wheel_idle_act4_pane_g8

0x8848,	// (0x00008967) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd01,	// (0x0000fe20) shortcut_wheel_idle_act4_pane_g

0x66ae,	// (0x000067cd) middle_sk_idle_act4_pane_g1_ParamLimits

0x66ae,	// (0x000067cd) middle_sk_idle_act4_pane_g1

0xe491,	// (0x0000e5b0) middle_sk_idle_act4_pane_g2_ParamLimits

0xe491,	// (0x0000e5b0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd24,	// (0x0000fe43) middle_sk_idle_act4_pane_g_ParamLimits

0xfd24,	// (0x0000fe43) middle_sk_idle_act4_pane_g

0xe4a9,	// (0x0000e5c8) middle_sk_idle_act4_pane_t1_ParamLimits

0xe4a9,	// (0x0000e5c8) middle_sk_idle_act4_pane_t1

0xe4d8,	// (0x0000e5f7) grid_ai_shortcut_pane_ParamLimits

0xe4d8,	// (0x0000e5f7) grid_ai_shortcut_pane

0xe4f5,	// (0x0000e614) list_highlight_pane_cp16_ParamLimits

0xe4f5,	// (0x0000e614) list_highlight_pane_cp16

0xe502,	// (0x0000e621) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe502,	// (0x0000e621) list_single_idle_plugin_shortcut_pane_g1

0xe50e,	// (0x0000e62d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe50e,	// (0x0000e62d) list_single_idle_plugin_shortcut_pane_g2

0xe52a,	// (0x0000e649) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe52a,	// (0x0000e649) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd29,	// (0x0000fe48) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd29,	// (0x0000fe48) list_single_idle_plugin_shortcut_pane_g

0xe53f,	// (0x0000e65e) cell_ai_shortcut_pane_ParamLimits

0xe53f,	// (0x0000e65e) cell_ai_shortcut_pane

0xe555,	// (0x0000e674) cell_ai_shortcut_pane_g1_ParamLimits

0xe555,	// (0x0000e674) cell_ai_shortcut_pane_g1

0x8783,	// (0x000088a2) ai_gene_pane_1_cp2

0x8978,	// (0x00008a97) ai_gene_pane_2_cp2

0x8980,	// (0x00008a9f) list_highlight_pane_cp15

0x8989,	// (0x00008aa8) list_single_idle_plugin_calendar_pane_g1

0x8980,	// (0x00008a9f) list_highlight_pane_cp17

0x8991,	// (0x00008ab0) list_single_idle_plugin_calendar_pane_g1_copy1

0x8999,	// (0x00008ab8) list_single_idle_plugin_player_pane_g1

0x5563,	// (0x00005682) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd30,	// (0x0000fe4f) list_single_idle_plugin_player_pane_g

0x89a1,	// (0x00008ac0) list_single_idle_plugin_player_pane_t1

0x89af,	// (0x00008ace) list_single_idle_plugin_player_pane_t2

0x89bd,	// (0x00008adc) list_single_idle_plugin_player_pane_t3

0x89cb,	// (0x00008aea) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd35,	// (0x0000fe54) list_single_idle_plugin_player_pane_t

0x89d9,	// (0x00008af8) wait_bar_pane_cp15

0x89e1,	// (0x00008b00) grid_ai_notification_pane

0x5563,	// (0x00005682) list_single_idle_plugin_notification_pane_g1

0xe577,	// (0x0000e696) cell_ai_notification_pane_ParamLimits

0xe577,	// (0x0000e696) cell_ai_notification_pane

0x89f7,	// (0x00008b16) cell_ai_notification_pane_g1

0x89ff,	// (0x00008b1e) cell_ai_notification_pane_t1

0xe584,	// (0x0000e6a3) tb_ext_find_button_pane

0xe58c,	// (0x0000e6ab) tb_ext_find_pane_g1

0xe594,	// (0x0000e6b3) tb_ext_find_pane_t1

0x1c55,	// (0x00001d74) tb_ext_find_button_pane_g1

0x8a2b,	// (0x00008b4a) tb_ext_find_button_pane_g2

0x0001,

0xfd3e,	// (0x0000fe5d) tb_ext_find_button_pane_g

0xe3a4,	// (0x0000e4c3) main_idle_act4_pane_t1_ParamLimits

0xe3ba,	// (0x0000e4d9) main_idle_act4_pane_t2_ParamLimits

0xfcfc,	// (0x0000fe1b) main_idle_act4_pane_t_ParamLimits

0xe3ec,	// (0x0000e50b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe404,	// (0x0000e523) sat_plugin_idle_act4_pane_ParamLimits

0xe404,	// (0x0000e523) sat_plugin_idle_act4_pane

0xe5a2,	// (0x0000e6c1) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe5a2,	// (0x0000e6c1) sat_plugin_idle_act4_pane_t1

0xe5ba,	// (0x0000e6d9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe5ba,	// (0x0000e6d9) sat_plugin_idle_act4_pane_t2

0xe5d2,	// (0x0000e6f1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe5d2,	// (0x0000e6f1) sat_plugin_idle_act4_pane_t3

0xe5ea,	// (0x0000e709) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe5ea,	// (0x0000e709) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd43,	// (0x0000fe62) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd43,	// (0x0000fe62) sat_plugin_idle_act4_pane_t

0x017e,	// (0x0000029d) popup_battery_window_ParamLimits

0x017e,	// (0x0000029d) popup_battery_window

0x071c,	// (0x0000083b) bg_popup_sub_pane_cp25_ParamLimits

0x071c,	// (0x0000083b) bg_popup_sub_pane_cp25

0x8a80,	// (0x00008b9f) popup_battery_window_g1_ParamLimits

0x8a80,	// (0x00008b9f) popup_battery_window_g1

0x8a8c,	// (0x00008bab) popup_battery_window_t1_ParamLimits

0x8a8c,	// (0x00008bab) popup_battery_window_t1

0x8a9e,	// (0x00008bbd) popup_battery_window_t2_ParamLimits

0x8a9e,	// (0x00008bbd) popup_battery_window_t2

0x0001,

0xfd4c,	// (0x0000fe6b) popup_battery_window_t_ParamLimits

0xfd4c,	// (0x0000fe6b) popup_battery_window_t

0xc44a,	// (0x0000c569) midp_canvas_pane_ParamLimits

0xc4a7,	// (0x0000c5c6) midp_keypad_pane_ParamLimits

0xc4a7,	// (0x0000c5c6) midp_keypad_pane

0x2a6c,	// (0x00002b8b) main_midp_pane_ParamLimits

0x5fbe,	// (0x000060dd) signal_pane_g2_cp_ParamLimits

0xe602,	// (0x0000e721) aid_size_cell_midp_keypad_ParamLimits

0xe602,	// (0x0000e721) aid_size_cell_midp_keypad

0xe620,	// (0x0000e73f) midp_keyp_game_grid_pane_ParamLimits

0xe620,	// (0x0000e73f) midp_keyp_game_grid_pane

0xe647,	// (0x0000e766) midp_keyp_rocker_pane_ParamLimits

0xe647,	// (0x0000e766) midp_keyp_rocker_pane

0xe698,	// (0x0000e7b7) midp_keyp_sk_left_pane_ParamLimits

0xe698,	// (0x0000e7b7) midp_keyp_sk_left_pane

0xe6ec,	// (0x0000e80b) midp_keyp_sk_right_pane_ParamLimits

0xe6ec,	// (0x0000e80b) midp_keyp_sk_right_pane

0xf4f5,	// (0x0000f614) bg_button_pane_cp03

0xe740,	// (0x0000e85f) midp_keyp_sk_left_pane_g1

0xf4f5,	// (0x0000f614) bg_button_pane_cp04

0xe740,	// (0x0000e85f) midp_keyp_sk_right_pane_g1

0x659d,	// (0x000066bc) midp_keyp_rocker_pane_g1

0xe749,	// (0x0000e868) keyp_game_cell_pane_ParamLimits

0xe749,	// (0x0000e868) keyp_game_cell_pane

0xf4f5,	// (0x0000f614) bg_button_pane_cp02

0xe76d,	// (0x0000e88c) keyp_game_cell_pane_g1

0xb90b,	// (0x0000ba2a) popup_fep_vkb2_window_ParamLimits

0xb90b,	// (0x0000ba2a) popup_fep_vkb2_window

0xe776,	// (0x0000e895) aid_size_cell_vkb2_ParamLimits

0xe776,	// (0x0000e895) aid_size_cell_vkb2

0xe7a2,	// (0x0000e8c1) popup_fep_vkb2_window_g1_ParamLimits

0xe7a2,	// (0x0000e8c1) popup_fep_vkb2_window_g1

0xe7f2,	// (0x0000e911) vkb2_area_bottom_pane_ParamLimits

0xe7f2,	// (0x0000e911) vkb2_area_bottom_pane

0xe846,	// (0x0000e965) vkb2_area_keypad_pane_ParamLimits

0xe846,	// (0x0000e965) vkb2_area_keypad_pane

0xe88e,	// (0x0000e9ad) vkb2_area_top_pane_ParamLimits

0xe88e,	// (0x0000e9ad) vkb2_area_top_pane

0xe91a,	// (0x0000ea39) vkb2_top_entry_pane_ParamLimits

0xe91a,	// (0x0000ea39) vkb2_top_entry_pane

0xe947,	// (0x0000ea66) vkb2_top_grid_left_pane_ParamLimits

0xe947,	// (0x0000ea66) vkb2_top_grid_left_pane

0xe968,	// (0x0000ea87) vkb2_top_grid_right_pane_ParamLimits

0xe968,	// (0x0000ea87) vkb2_top_grid_right_pane

0x8e1e,	// (0x00008f3d) vkb2_cell_keypad_pane_ParamLimits

0x8e1e,	// (0x00008f3d) vkb2_cell_keypad_pane

0xe9b0,	// (0x0000eacf) vkb2_area_bottom_grid_pane_ParamLimits

0xe9b0,	// (0x0000eacf) vkb2_area_bottom_grid_pane

0xe9da,	// (0x0000eaf9) vkb2_area_bottom_pane_g1_ParamLimits

0xe9da,	// (0x0000eaf9) vkb2_area_bottom_pane_g1

0xea00,	// (0x0000eb1f) vkb2_area_bottom_pane_g2_ParamLimits

0xea00,	// (0x0000eb1f) vkb2_area_bottom_pane_g2

0xea31,	// (0x0000eb50) vkb2_area_bottom_pane_g3_ParamLimits

0xea31,	// (0x0000eb50) vkb2_area_bottom_pane_g3

0x0002,

0xfd51,	// (0x0000fe70) vkb2_area_bottom_pane_g_ParamLimits

0xfd51,	// (0x0000fe70) vkb2_area_bottom_pane_g

0x8fc8,	// (0x000090e7) vkb2_top_cell_left_pane_ParamLimits

0x8fc8,	// (0x000090e7) vkb2_top_cell_left_pane

0xea9b,	// (0x0000ebba) vkb2_top_entry_pane_g1_ParamLimits

0xea9b,	// (0x0000ebba) vkb2_top_entry_pane_g1

0xeaa9,	// (0x0000ebc8) vkb2_top_entry_pane_t1_ParamLimits

0xeaa9,	// (0x0000ebc8) vkb2_top_entry_pane_t1

0x9030,	// (0x0000914f) vkb2_top_entry_pane_t2_ParamLimits

0x9030,	// (0x0000914f) vkb2_top_entry_pane_t2

0x9062,	// (0x00009181) vkb2_top_entry_pane_t3_ParamLimits

0x9062,	// (0x00009181) vkb2_top_entry_pane_t3

0x0002,

0xfd58,	// (0x0000fe77) vkb2_top_entry_pane_t_ParamLimits

0xfd58,	// (0x0000fe77) vkb2_top_entry_pane_t

0xeae2,	// (0x0000ec01) vkb2_top_grid_right_pane_g1_ParamLimits

0xeae2,	// (0x0000ec01) vkb2_top_grid_right_pane_g1

0x90c9,	// (0x000091e8) vkb2_top_grid_right_pane_g2_ParamLimits

0x90c9,	// (0x000091e8) vkb2_top_grid_right_pane_g2

0x90e1,	// (0x00009200) vkb2_top_grid_right_pane_g3_ParamLimits

0x90e1,	// (0x00009200) vkb2_top_grid_right_pane_g3

0xeaf8,	// (0x0000ec17) vkb2_top_grid_right_pane_g4_ParamLimits

0xeaf8,	// (0x0000ec17) vkb2_top_grid_right_pane_g4

0x0003,

0xfd5f,	// (0x0000fe7e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd5f,	// (0x0000fe7e) vkb2_top_grid_right_pane_g

0x910f,	// (0x0000922e) vkb2_top_cell_left_pane_g1

0x9126,	// (0x00009245) vkb2_cell_keypad_pane_g1_ParamLimits

0x9126,	// (0x00009245) vkb2_cell_keypad_pane_g1

0x9134,	// (0x00009253) vkb2_cell_keypad_pane_t1_ParamLimits

0x9134,	// (0x00009253) vkb2_cell_keypad_pane_t1

0x914b,	// (0x0000926a) vkb2_cell_bottom_grid_pane_ParamLimits

0x914b,	// (0x0000926a) vkb2_cell_bottom_grid_pane

0x9184,	// (0x000092a3) vkb2_cell_bottom_grid_pane_g1

0xe435,	// (0x0000e554) aid_call2_pane_cp02

0xe43d,	// (0x0000e55c) aid_call_pane_cp02

0xe445,	// (0x0000e564) clock_digital_number_pane_cp10

0xe44d,	// (0x0000e56c) clock_digital_number_pane_cp11

0xe455,	// (0x0000e574) clock_digital_number_pane_cp12

0xe45d,	// (0x0000e57c) clock_digital_number_pane_cp13

0xe465,	// (0x0000e584) clock_digital_separator_pane_cp10

0x1c55,	// (0x00001d74) popup_clock_digital_analogue_window_cp2_g1

0x1c55,	// (0x00001d74) popup_clock_digital_analogue_window_cp2_g2

0xe46d,	// (0x0000e58c) popup_clock_digital_analogue_window_cp2_g3

0x1c55,	// (0x00001d74) popup_clock_digital_analogue_window_cp2_g4

0xe46d,	// (0x0000e58c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd14,	// (0x0000fe33) popup_clock_digital_analogue_window_cp2_g

0xe475,	// (0x0000e594) popup_clock_digital_analogue_window_cp2_t1

0xe483,	// (0x0000e5a2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd1f,	// (0x0000fe3e) popup_clock_digital_analogue_window_cp2_t

0x659d,	// (0x000066bc) clock_digital_number_pane_cp10_g1

0x659d,	// (0x000066bc) clock_digital_number_pane_cp10_g2

0x0001,

0xfb07,	// (0x0000fc26) clock_digital_number_pane_cp10_g

0x659d,	// (0x000066bc) clock_digital_separator_pane_cp10_g1

0x659d,	// (0x000066bc) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb07,	// (0x0000fc26) clock_digital_separator_pane_cp10_g

0x86cc,	// (0x000087eb) uniindi_top_pane_g3

0x86dd,	// (0x000087fc) uniindi_top_pane_g4

0x8ea9,	// (0x00008fc8) vkb2_row_keypad_pane_ParamLimits

0x8ea9,	// (0x00008fc8) vkb2_row_keypad_pane

0x91a4,	// (0x000092c3) vkb2_cell_t_keypad_pane_ParamLimits

0x91a4,	// (0x000092c3) vkb2_cell_t_keypad_pane

0x91b4,	// (0x000092d3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x91b4,	// (0x000092d3) vkb2_cell_t_keypad_pane_cp08

0x91c7,	// (0x000092e6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x91c7,	// (0x000092e6) vkb2_cell_t_keypad_pane_cp09

0x91db,	// (0x000092fa) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x91db,	// (0x000092fa) vkb2_cell_t_keypad_pane_cp01

0x91ec,	// (0x0000930b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x91ec,	// (0x0000930b) vkb2_cell_t_keypad_pane_cp02

0x91fd,	// (0x0000931c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x91fd,	// (0x0000931c) vkb2_cell_t_keypad_pane_cp03

0x920e,	// (0x0000932d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x920e,	// (0x0000932d) vkb2_cell_t_keypad_pane_cp04

0x921f,	// (0x0000933e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x921f,	// (0x0000933e) vkb2_cell_t_keypad_pane_cp05

0x9230,	// (0x0000934f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9230,	// (0x0000934f) vkb2_cell_t_keypad_pane_cp06

0x9241,	// (0x00009360) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9241,	// (0x00009360) vkb2_cell_t_keypad_pane_cp07

0x9252,	// (0x00009371) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9252,	// (0x00009371) vkb2_cell_t_keypad_pane_cp10

0x6a2f,	// (0x00006b4e) vkb2_cell_t_keypad_pane_g1

0x9267,	// (0x00009386) vkb2_cell_t_keypad_pane_t1

0xf4f5,	// (0x0000f614) popup_grid_graphic2_window

0xeb0e,	// (0x0000ec2d) aid_size_cell_graphic2_ParamLimits

0xeb0e,	// (0x0000ec2d) aid_size_cell_graphic2

0xeb4c,	// (0x0000ec6b) bg_popup_window_pane_cp21_ParamLimits

0xeb4c,	// (0x0000ec6b) bg_popup_window_pane_cp21

0xeb5a,	// (0x0000ec79) graphic2_pages_pane_ParamLimits

0xeb5a,	// (0x0000ec79) graphic2_pages_pane

0xebb0,	// (0x0000eccf) grid_graphic2_control_pane_ParamLimits

0xebb0,	// (0x0000eccf) grid_graphic2_control_pane

0xebf8,	// (0x0000ed17) grid_graphic2_pane_ParamLimits

0xebf8,	// (0x0000ed17) grid_graphic2_pane

0xec7f,	// (0x0000ed9e) cell_graphic2_pane

0xf4f5,	// (0x0000f614) main_comp_mode_pane

0x7e04,	// (0x00007f23) list_ai3_gene_pane_ParamLimits

0xe111,	// (0x0000e230) bg_popup_window_pane_cp19_ParamLimits

0x8249,	// (0x00008368) bg_touch_area_indi_pane_ParamLimits

0x8249,	// (0x00008368) bg_touch_area_indi_pane

0x825f,	// (0x0000837e) bg_touch_area_indi_pane_cp01_ParamLimits

0x825f,	// (0x0000837e) bg_touch_area_indi_pane_cp01

0x8275,	// (0x00008394) bg_touch_area_indi_pane_cp02_ParamLimits

0x8275,	// (0x00008394) bg_touch_area_indi_pane_cp02

0x828b,	// (0x000083aa) bg_touch_area_indi_pane_cp03_ParamLimits

0x828b,	// (0x000083aa) bg_touch_area_indi_pane_cp03

0x82a5,	// (0x000083c4) popup_slider_window_g1_ParamLimits

0x82c1,	// (0x000083e0) popup_slider_window_g2_ParamLimits

0x82dd,	// (0x000083fc) popup_slider_window_g3_ParamLimits

0xfca9,	// (0x0000fdc8) popup_slider_window_g_ParamLimits

0x8343,	// (0x00008462) popup_slider_window_t1_ParamLimits

0x83b7,	// (0x000084d6) small_volume_slider_vertical_pane_ParamLimits

0xec7f,	// (0x0000ed9e) cell_graphic2_pane_ParamLimits

0xecda,	// (0x0000edf9) bg_button_pane_cp10_ParamLimits

0xecda,	// (0x0000edf9) bg_button_pane_cp10

0xeced,	// (0x0000ee0c) bg_button_pane_cp11_ParamLimits

0xeced,	// (0x0000ee0c) bg_button_pane_cp11

0xed00,	// (0x0000ee1f) graphic2_pages_pane_g1_ParamLimits

0xed00,	// (0x0000ee1f) graphic2_pages_pane_g1

0xed1b,	// (0x0000ee3a) graphic2_pages_pane_g2_ParamLimits

0xed1b,	// (0x0000ee3a) graphic2_pages_pane_g2

0x0001,

0xfd6d,	// (0x0000fe8c) graphic2_pages_pane_g_ParamLimits

0xfd6d,	// (0x0000fe8c) graphic2_pages_pane_g

0xed33,	// (0x0000ee52) graphic2_pages_pane_t1_ParamLimits

0xed33,	// (0x0000ee52) graphic2_pages_pane_t1

0xed4b,	// (0x0000ee6a) cell_graphic2_control_pane_ParamLimits

0xed4b,	// (0x0000ee6a) cell_graphic2_control_pane

0xed7d,	// (0x0000ee9c) cell_graphic2_pane_g1_ParamLimits

0xed7d,	// (0x0000ee9c) cell_graphic2_pane_g1

0x6849,	// (0x00006968) cell_graphic2_pane_g2_ParamLimits

0x6849,	// (0x00006968) cell_graphic2_pane_g2

0xed8a,	// (0x0000eea9) cell_graphic2_pane_g3_ParamLimits

0xed8a,	// (0x0000eea9) cell_graphic2_pane_g3

0x6856,	// (0x00006975) cell_graphic2_pane_g4_ParamLimits

0x6856,	// (0x00006975) cell_graphic2_pane_g4

0xed97,	// (0x0000eeb6) cell_graphic2_pane_g5_ParamLimits

0xed97,	// (0x0000eeb6) cell_graphic2_pane_g5

0x0004,

0xfd72,	// (0x0000fe91) cell_graphic2_pane_g_ParamLimits

0xfd72,	// (0x0000fe91) cell_graphic2_pane_g

0xedb4,	// (0x0000eed3) cell_graphic2_pane_t1_ParamLimits

0xedb4,	// (0x0000eed3) cell_graphic2_pane_t1

0x463c,	// (0x0000475b) grid_highlight_pane_cp11_ParamLimits

0x463c,	// (0x0000475b) grid_highlight_pane_cp11

0x071c,	// (0x0000083b) bg_button_pane_cp05

0xedfe,	// (0x0000ef1d) cell_graphic2_control_pane_g1

0x659d,	// (0x000066bc) bg_touch_area_indi_pane_g1

0x9540,	// (0x0000965f) aid_cmod_rocker_key_size

0x954a,	// (0x00009669) aid_cmode_itu_key_size

0x9554,	// (0x00009673) main_cmode_video_pane

0x955e,	// (0x0000967d) main_comp_mode_itu_pane

0x956a,	// (0x00009689) main_comp_mode_rocker_pane

0x9576,	// (0x00009695) cell_cmode_rocker_pane_ParamLimits

0x9576,	// (0x00009695) cell_cmode_rocker_pane

0x9588,	// (0x000096a7) cell_cmode_itu_pane_ParamLimits

0x9588,	// (0x000096a7) cell_cmode_itu_pane

0x1277,	// (0x00001396) bg_button_pane_cp06_ParamLimits

0x1277,	// (0x00001396) bg_button_pane_cp06

0x6a2f,	// (0x00006b4e) cell_cmode_rocker_pane_g1_ParamLimits

0x6a2f,	// (0x00006b4e) cell_cmode_rocker_pane_g1

0x852c,	// (0x0000864b) cell_cmode_rocker_pane_g2_ParamLimits

0x852c,	// (0x0000864b) cell_cmode_rocker_pane_g2

0x0001,

0xfd82,	// (0x0000fea1) cell_cmode_rocker_pane_g_ParamLimits

0xfd82,	// (0x0000fea1) cell_cmode_rocker_pane_g

0xf4f5,	// (0x0000f614) bg_button_pane_cp07

0x959d,	// (0x000096bc) cell_cmode_itu_pane_g1

0x95a6,	// (0x000096c5) cell_cmode_itu_pane_t1

0x95b4,	// (0x000096d3) cell_cmode_itu_pane_t2

0x0001,

0xfd87,	// (0x0000fea6) cell_cmode_itu_pane_t

0x874f,	// (0x0000886e) aid_touch_ctrl_left

0x8757,	// (0x00008876) aid_touch_ctrl_right

0xf4f5,	// (0x0000f614) compa_mode_pane

0xee22,	// (0x0000ef41) aid_cmod_rocker_key_size_cp

0xee2c,	// (0x0000ef4b) aid_cmode_itu_key_size_cp

0x95d6,	// (0x000096f5) compa_mode_pane_g1

0x95de,	// (0x000096fd) compa_mode_pane_g2

0x95e6,	// (0x00009705) compa_mode_pane_g3

0x0002,

0xfd8c,	// (0x0000feab) compa_mode_pane_g

0xee36,	// (0x0000ef55) main_comp_mode_itu_pane_cp

0xee3e,	// (0x0000ef5d) main_comp_mode_rocker_pane_cp

0xee46,	// (0x0000ef65) cell_cmode_itu_pane_cp_ParamLimits

0xee46,	// (0x0000ef65) cell_cmode_itu_pane_cp

0xee5b,	// (0x0000ef7a) cell_cmode_rocker_pane_cp_ParamLimits

0xee5b,	// (0x0000ef7a) cell_cmode_rocker_pane_cp

0x1277,	// (0x00001396) bg_button_pane_cp06_cp_ParamLimits

0x1277,	// (0x00001396) bg_button_pane_cp06_cp

0x6a2f,	// (0x00006b4e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6a2f,	// (0x00006b4e) cell_cmode_rocker_pane_g1_cp

0x659d,	// (0x000066bc) cell_cmode_rocker_pane_g2_cp

0xf4f5,	// (0x0000f614) bg_button_pane_cp07_cp

0xee6d,	// (0x0000ef8c) cell_cmode_itu_pane_g1_cp

0xee76,	// (0x0000ef95) cell_cmode_itu_pane_t1_cp

0xee76,	// (0x0000ef95) cell_cmode_itu_pane_t2_cp

0xd574,	// (0x0000d693) settings_code_pane_cp2

0x03e8,	// (0x00000507) bg_popup_window_pane_cp3_ParamLimits

0x091c,	// (0x00000a3b) heading_pane_cp3_ParamLimits

0x092b,	// (0x00000a4a) listscroll_popup_graphic_pane_ParamLimits

0x6607,	// (0x00006726) fep_hwr_aid_pane_ParamLimits

0x8432,	// (0x00008551) aid_touch_sctrl_top_ParamLimits

0x843f,	// (0x0000855e) sctrl_sk_top_pane_g1_ParamLimits

0x6a2f,	// (0x00006b4e) sctrl_sk_top_pane_g2_ParamLimits

0xfcc2,	// (0x0000fde1) sctrl_sk_top_pane_g_ParamLimits

0x844c,	// (0x0000856b) sctrl_sk_top_pane_t1_ParamLimits

0x8432,	// (0x00008551) aid_touch_sctrl_bottom_ParamLimits

0x844c,	// (0x0000856b) sctrl_sk_bottom_pane_t1_ParamLimits

0x8698,	// (0x000087b7) aid_area_touch_clock

0xe8da,	// (0x0000e9f9) aid_vkb2_area_top_pane_cell_ParamLimits

0xe8da,	// (0x0000e9f9) aid_vkb2_area_top_pane_cell

0xe989,	// (0x0000eaa8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe989,	// (0x0000eaa8) aid_vkb2_area_bottom_pane_cell

0x8fe8,	// (0x00009107) popup_char_count_window

0x9633,	// (0x00009752) popup_char_count_window_g1

0x963c,	// (0x0000975b) popup_char_count_window_g2

0x9645,	// (0x00009764) popup_char_count_window_g3

0x0002,

0xfd93,	// (0x0000feb2) popup_char_count_window_g

0x964e,	// (0x0000976d) popup_char_count_window_t1

0x8c3f,	// (0x00008d5e) popup_fep_char_preview_window_ParamLimits

0x8c3f,	// (0x00008d5e) popup_fep_char_preview_window

0xe8fa,	// (0x0000ea19) vkb2_top_candi_pane_ParamLimits

0xe8fa,	// (0x0000ea19) vkb2_top_candi_pane

0xee84,	// (0x0000efa3) cell_vkb2_top_candi_pane_ParamLimits

0xee84,	// (0x0000efa3) cell_vkb2_top_candi_pane

0x3e75,	// (0x00003f94) bg_popup_fep_char_preview_window_ParamLimits

0x3e75,	// (0x00003f94) bg_popup_fep_char_preview_window

0x96a6,	// (0x000097c5) popup_fep_char_preview_window_t1_ParamLimits

0x96a6,	// (0x000097c5) popup_fep_char_preview_window_t1

0x96e0,	// (0x000097ff) bg_popup_fep_char_preview_window_g1

0x96e8,	// (0x00009807) bg_popup_fep_char_preview_window_g2

0x96f0,	// (0x0000980f) bg_popup_fep_char_preview_window_g3

0x96f8,	// (0x00009817) bg_popup_fep_char_preview_window_g4

0x9700,	// (0x0000981f) bg_popup_fep_char_preview_window_g5

0x9708,	// (0x00009827) bg_popup_fep_char_preview_window_g6

0x9710,	// (0x0000982f) bg_popup_fep_char_preview_window_g7

0x9718,	// (0x00009837) bg_popup_fep_char_preview_window_g8

0x9720,	// (0x0000983f) bg_popup_fep_char_preview_window_g9

0x0009,

0xfd9a,	// (0x0000feb9) bg_popup_fep_char_preview_window_g

0x6a2f,	// (0x00006b4e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a2f,	// (0x00006b4e) cell_vkb2_top_candi_pane_g1

0x6d9a,	// (0x00006eb9) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6d9a,	// (0x00006eb9) cell_vkb2_top_candi_pane_g2

0x6dbb,	// (0x00006eda) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6dbb,	// (0x00006eda) cell_vkb2_top_candi_pane_g3

0x9730,	// (0x0000984f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9730,	// (0x0000984f) cell_vkb2_top_candi_pane_g4

0x9751,	// (0x00009870) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9751,	// (0x00009870) cell_vkb2_top_candi_pane_g5

0x852c,	// (0x0000864b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x852c,	// (0x0000864b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdaf,	// (0x0000fece) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdaf,	// (0x0000fece) cell_vkb2_top_candi_pane_g

0x9772,	// (0x00009891) cell_vkb2_top_candi_pane_t1

0x4d49,	// (0x00004e68) aid_size_touch_slider_mark_ParamLimits

0x4d49,	// (0x00004e68) aid_size_touch_slider_mark

0xeb96,	// (0x0000ecb5) grid_graphic2_catg_pane_ParamLimits

0xeb96,	// (0x0000ecb5) grid_graphic2_catg_pane

0xec52,	// (0x0000ed71) popup_grid_graphic2_window_t1_ParamLimits

0xec52,	// (0x0000ed71) popup_grid_graphic2_window_t1

0xec68,	// (0x0000ed87) popup_grid_graphic2_window_t2_ParamLimits

0xec68,	// (0x0000ed87) popup_grid_graphic2_window_t2

0x0001,

0xfd68,	// (0x0000fe87) popup_grid_graphic2_window_t_ParamLimits

0xfd68,	// (0x0000fe87) popup_grid_graphic2_window_t

0x071c,	// (0x0000083b) bg_button_pane_cp05_ParamLimits

0xedfe,	// (0x0000ef1d) cell_graphic2_control_pane_g1_ParamLimits

0xeeec,	// (0x0000f00b) cell_graphic2_catg_pane_ParamLimits

0xeeec,	// (0x0000f00b) cell_graphic2_catg_pane

0xf4f5,	// (0x0000f614) bg_button_pane_cp12

0xeefe,	// (0x0000f01d) cell_graphic2_catg_pane_g1

0x8664,	// (0x00008783) cell_tb_ext_pane_t1_ParamLimits

0x9086,	// (0x000091a5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9086,	// (0x000091a5) vkb2_top_cell_right_narrow_pane

0x909e,	// (0x000091bd) vkb2_top_cell_right_wide_pane_ParamLimits

0x909e,	// (0x000091bd) vkb2_top_cell_right_wide_pane

0x65f9,	// (0x00006718) bg_vkb2_func_pane_ParamLimits

0x65f9,	// (0x00006718) bg_vkb2_func_pane

0x910f,	// (0x0000922e) vkb2_top_cell_left_pane_g1_ParamLimits

0x65f9,	// (0x00006718) bg_vkb2_fuc_pane_cp03_ParamLimits

0x65f9,	// (0x00006718) bg_vkb2_fuc_pane_cp03

0x9184,	// (0x000092a3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x35ef,	// (0x0000370e) bg_vkb2_func_pane_g1

0x35f7,	// (0x00003716) bg_vkb2_func_pane_g2

0x3607,	// (0x00003726) bg_vkb2_func_pane_g3

0x35ff,	// (0x0000371e) bg_vkb2_func_pane_g4

0x360f,	// (0x0000372e) bg_vkb2_func_pane_g5

0x3617,	// (0x00003736) bg_vkb2_func_pane_g6

0x361f,	// (0x0000373e) bg_vkb2_func_pane_g7

0x3627,	// (0x00003746) bg_vkb2_func_pane_g8

0x35e7,	// (0x00003706) bg_vkb2_func_pane_g9

0x0008,

0xfdbc,	// (0x0000fedb) bg_vkb2_func_pane_g

0x65f9,	// (0x00006718) bg_vkb2_fuc_pane_cp01_ParamLimits

0x65f9,	// (0x00006718) bg_vkb2_fuc_pane_cp01

0x910f,	// (0x0000922e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x910f,	// (0x0000922e) vkb2_top_cell_right_wide_pane_g1

0x65f9,	// (0x00006718) bg_vkb2_fuc_pane_cp02_ParamLimits

0x65f9,	// (0x00006718) bg_vkb2_fuc_pane_cp02

0x97ac,	// (0x000098cb) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x97ac,	// (0x000098cb) vkb2_top_cell_right_narrow_pane_g1

0xe053,	// (0x0000e172) aid_touch_area_decrease_ParamLimits

0xe053,	// (0x0000e172) aid_touch_area_decrease

0xe08d,	// (0x0000e1ac) aid_touch_area_increase_ParamLimits

0xe08d,	// (0x0000e1ac) aid_touch_area_increase

0xe0b5,	// (0x0000e1d4) aid_touch_area_mute_ParamLimits

0xe0b5,	// (0x0000e1d4) aid_touch_area_mute

0xe0dd,	// (0x0000e1fc) aid_touch_area_slider_ParamLimits

0xe0dd,	// (0x0000e1fc) aid_touch_area_slider

0xe11d,	// (0x0000e23c) popup_slider_window_g4_ParamLimits

0xe11d,	// (0x0000e23c) popup_slider_window_g4

0xe145,	// (0x0000e264) popup_slider_window_g5_ParamLimits

0xe145,	// (0x0000e264) popup_slider_window_g5

0xe179,	// (0x0000e298) popup_slider_window_g6_ParamLimits

0xe179,	// (0x0000e298) popup_slider_window_g6

0x8371,	// (0x00008490) popup_slider_window_t2_ParamLimits

0x8371,	// (0x00008490) popup_slider_window_t2

0x0001,

0xfcb6,	// (0x0000fdd5) popup_slider_window_t_ParamLimits

0xfcb6,	// (0x0000fdd5) popup_slider_window_t

0xe195,	// (0x0000e2b4) slider_pane_ParamLimits

0xe195,	// (0x0000e2b4) slider_pane

0x97cc,	// (0x000098eb) slider_pane_g1_ParamLimits

0x97cc,	// (0x000098eb) slider_pane_g1

0x97e0,	// (0x000098ff) slider_pane_g2_ParamLimits

0x97e0,	// (0x000098ff) slider_pane_g2

0x97f6,	// (0x00009915) slider_pane_g3_ParamLimits

0x97f6,	// (0x00009915) slider_pane_g3

0x0003,

0xfdcf,	// (0x0000feee) slider_pane_g_ParamLimits

0xfdcf,	// (0x0000feee) slider_pane_g

0xcced,	// (0x0000ce0c) popup_tb_float_extension_window_ParamLimits

0xcced,	// (0x0000ce0c) popup_tb_float_extension_window

0x9822,	// (0x00009941) aid_size_cell_tb_float_ext

0xf4f5,	// (0x0000f614) bg_popup_sub_window_cp28

0x982e,	// (0x0000994d) grid_tb_float_ext_pane

0x9838,	// (0x00009957) cell_tb_float_ext_pane_ParamLimits

0x9838,	// (0x00009957) cell_tb_float_ext_pane

0x9852,	// (0x00009971) cell_tb_float_ext_pane_g1

0x985b,	// (0x0000997a) grid_highlight_pane_cp12

0xd982,	// (0x0000daa1) cell_last_hwr_side_pane_ParamLimits

0xd982,	// (0x0000daa1) cell_last_hwr_side_pane

0x659d,	// (0x000066bc) cell_last_hwr_side_pane_g1

0x9864,	// (0x00009983) cell_last_hwr_side_pane_g2

0x0001,

0xfdd8,	// (0x0000fef7) cell_last_hwr_side_pane_g

0xea66,	// (0x0000eb85) vkb2_area_bottom_space_btn_pane_ParamLimits

0xea66,	// (0x0000eb85) vkb2_area_bottom_space_btn_pane

0x6a2f,	// (0x00006b4e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9267,	// (0x00009386) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9772,	// (0x00009891) cell_vkb2_top_candi_pane_t1_ParamLimits

0x986d,	// (0x0000998c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x986d,	// (0x0000998c) vkb2_area_bottom_space_btn_pane_g1

0x98a7,	// (0x000099c6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x98a7,	// (0x000099c6) vkb2_area_bottom_space_btn_pane_g2

0x98dd,	// (0x000099fc) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x98dd,	// (0x000099fc) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfddd,	// (0x0000fefc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfddd,	// (0x0000fefc) vkb2_area_bottom_space_btn_pane_g

0x66bc,	// (0x000067db) cel_fep_hwr_func_pane_ParamLimits

0x66bc,	// (0x000067db) cel_fep_hwr_func_pane

0xd957,	// (0x0000da76) cell_hwr_side_button_pane_ParamLimits

0xd957,	// (0x0000da76) cell_hwr_side_button_pane

0x8698,	// (0x000087b7) aid_area_touch_clock_ParamLimits

0x071c,	// (0x0000083b) bg_uniindi_top_pane_ParamLimits

0x86aa,	// (0x000087c9) uniindi_top_pane_g1_ParamLimits

0x86c0,	// (0x000087df) uniindi_top_pane_g2_ParamLimits

0x86cc,	// (0x000087eb) uniindi_top_pane_g3_ParamLimits

0x86dd,	// (0x000087fc) uniindi_top_pane_g4_ParamLimits

0xfcee,	// (0x0000fe0d) uniindi_top_pane_g_ParamLimits

0x86ea,	// (0x00008809) uniindi_top_pane_t1_ParamLimits

0x071c,	// (0x0000083b) bg_vkb2_func_pane_cp01_ParamLimits

0x071c,	// (0x0000083b) bg_vkb2_func_pane_cp01

0x9927,	// (0x00009a46) cel_fep_hwr_func_pane_g1_ParamLimits

0x9927,	// (0x00009a46) cel_fep_hwr_func_pane_g1

0x071c,	// (0x0000083b) bg_vkb2_func_pane_cp02_ParamLimits

0x071c,	// (0x0000083b) bg_vkb2_func_pane_cp02

0x9927,	// (0x00009a46) cell_hwr_side_button_pane_g1_ParamLimits

0x9927,	// (0x00009a46) cell_hwr_side_button_pane_g1

0x33da,	// (0x000034f9) status_pane_g4_ParamLimits

0x33da,	// (0x000034f9) status_pane_g4

0x33f4,	// (0x00003513) status_pane_t1

0x62e2,	// (0x00006401) form2_midp_gauge_slider_cont_pane

0x62ea,	// (0x00006409) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd8af,	// (0x0000d9ce) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd8c1,	// (0x0000d9e0) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaba,	// (0x0000fbd9) form2_midp_gauge_slider_pane_t_ParamLimits

0x6320,	// (0x0000643f) form2_midp_slider_pane_ParamLimits

0x8c07,	// (0x00008d26) aid_size_cell_func_vkb2_ParamLimits

0x8c07,	// (0x00008d26) aid_size_cell_func_vkb2

0x980e,	// (0x0000992d) slider_pane_g4_ParamLimits

0x980e,	// (0x0000992d) slider_pane_g4

0xef07,	// (0x0000f026) form2_midp_gauge_slider_pane_t2_cp01

0xef15,	// (0x0000f034) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xef15,	// (0x0000f034) form2_midp_gauge_slider_pane_t3_cp01

0x9960,	// (0x00009a7f) form2_midp_slider_pane_cp01

0xf4f5,	// (0x0000f614) navi_smil_pane

0x9994,	// (0x00009ab3) navi_smil_pane_g1

0x999c,	// (0x00009abb) navi_smil_pane_t1

0x9969,	// (0x00009a88) form2_midp_slider_pane_g1

0x9972,	// (0x00009a91) form2_midp_slider_pane_g2

0x997a,	// (0x00009a99) form2_midp_slider_pane_g3

0x9969,	// (0x00009a88) form2_midp_slider_pane_g4

0xef32,	// (0x0000f051) form2_midp_slider_pane_g5

0x0004,

0xfde6,	// (0x0000ff05) form2_midp_slider_pane_g

0x9917,	// (0x00009a36) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9917,	// (0x00009a36) vkb2_area_bottom_space_btn_pane_g4

0xced0,	// (0x0000cfef) lc0_navi_pane_ParamLimits

0xced0,	// (0x0000cfef) lc0_navi_pane

0xcf3a,	// (0x0000d059) lc0_stat_indi_pane_ParamLimits

0xcf3a,	// (0x0000d059) lc0_stat_indi_pane

0xcf4f,	// (0x0000d06e) ls0_title_pane_ParamLimits

0xcf4f,	// (0x0000d06e) ls0_title_pane

0x1277,	// (0x00001396) bg_popup_sub_pane_cp14_ParamLimits

0x867f,	// (0x0000879e) list_uniindi_pane_ParamLimits

0x868b,	// (0x000087aa) uniindi_top_pane_ParamLimits

0x8727,	// (0x00008846) list_single_uniindi_pane_g1_ParamLimits

0x873a,	// (0x00008859) list_single_uniindi_pane_t1_ParamLimits

0xef3d,	// (0x0000f05c) lc0_stat_clock_pane_ParamLimits

0xef3d,	// (0x0000f05c) lc0_stat_clock_pane

0xef4a,	// (0x0000f069) lc0_stat_indi_pane_g1_ParamLimits

0xef4a,	// (0x0000f069) lc0_stat_indi_pane_g1

0xef57,	// (0x0000f076) lc0_stat_indi_pane_g2_ParamLimits

0xef57,	// (0x0000f076) lc0_stat_indi_pane_g2

0x0001,

0xfdf1,	// (0x0000ff10) lc0_stat_indi_pane_g_ParamLimits

0xfdf1,	// (0x0000ff10) lc0_stat_indi_pane_g

0xef64,	// (0x0000f083) lc0_uni_indicator_pane_ParamLimits

0xef64,	// (0x0000f083) lc0_uni_indicator_pane

0xef71,	// (0x0000f090) ls0_title_pane_g1_ParamLimits

0xef71,	// (0x0000f090) ls0_title_pane_g1

0xef85,	// (0x0000f0a4) ls0_title_pane_t1_ParamLimits

0xef85,	// (0x0000f0a4) ls0_title_pane_t1

0xefb3,	// (0x0000f0d2) lc0_uni_indicator_pane_g1_ParamLimits

0xefb3,	// (0x0000f0d2) lc0_uni_indicator_pane_g1

0x9a3c,	// (0x00009b5b) lc0_stat_clock_pane_t1

0xf4f5,	// (0x0000f614) main_ai5_pane

0x9a4a,	// (0x00009b69) ai5_sk_pane_ParamLimits

0x9a4a,	// (0x00009b69) ai5_sk_pane

0xefda,	// (0x0000f0f9) cell_ai5_widget_pane_ParamLimits

0xefda,	// (0x0000f0f9) cell_ai5_widget_pane

0x9b20,	// (0x00009c3f) aid_size_cell_widget_grid

0x9b2e,	// (0x00009c4d) bg_ai5_widget_pane_ParamLimits

0x9b2e,	// (0x00009c4d) bg_ai5_widget_pane

0x9baa,	// (0x00009cc9) cell_ai5_widget_pane_g2

0x9bbe,	// (0x00009cdd) cell_ai5_widget_pane_g3

0x9bd8,	// (0x00009cf7) cell_ai5_widget_pane_g4

0x9be8,	// (0x00009d07) cell_ai5_widget_pane_g5

0x9bf8,	// (0x00009d17) cell_ai5_widget_pane_g6

0x9c04,	// (0x00009d23) cell_ai5_widget_pane_g7

0x9c70,	// (0x00009d8f) cell_ai5_widget_pane_t1_ParamLimits

0x9c70,	// (0x00009d8f) cell_ai5_widget_pane_t1

0x9c8d,	// (0x00009dac) cell_ai5_widget_pane_t2_ParamLimits

0x9c8d,	// (0x00009dac) cell_ai5_widget_pane_t2

0x9ca5,	// (0x00009dc4) cell_ai5_widget_pane_t3_ParamLimits

0x9ca5,	// (0x00009dc4) cell_ai5_widget_pane_t3

0x9cbd,	// (0x00009ddc) cell_ai5_widget_pane_t4_ParamLimits

0x9cbd,	// (0x00009ddc) cell_ai5_widget_pane_t4

0x9ce3,	// (0x00009e02) cell_ai5_widget_pane_t5_ParamLimits

0x9ce3,	// (0x00009e02) cell_ai5_widget_pane_t5

0x9d02,	// (0x00009e21) cell_ai5_widget_pane_t6_ParamLimits

0x9d02,	// (0x00009e21) cell_ai5_widget_pane_t6

0x9d14,	// (0x00009e33) cell_ai5_widget_pane_t7_ParamLimits

0x9d14,	// (0x00009e33) cell_ai5_widget_pane_t7

0x9d33,	// (0x00009e52) cell_ai5_widget_pane_t8_ParamLimits

0x9d33,	// (0x00009e52) cell_ai5_widget_pane_t8

0x000b,

0xfe11,	// (0x0000ff30) cell_ai5_widget_pane_t_ParamLimits

0xfe11,	// (0x0000ff30) cell_ai5_widget_pane_t

0x9db7,	// (0x00009ed6) grid_ai5_widget_pane

0x1277,	// (0x00001396) highlight_cell_ai5_widget_pane_ParamLimits

0x1277,	// (0x00001396) highlight_cell_ai5_widget_pane

0xf046,	// (0x0000f165) ai5_sk_left_pane

0xf050,	// (0x0000f16f) ai5_sk_middle_pane

0xf05a,	// (0x0000f179) ai5_sk_right_pane

0x9de3,	// (0x00009f02) bg_ai5_widget_pane_g1_ParamLimits

0x9de3,	// (0x00009f02) bg_ai5_widget_pane_g1

0x9def,	// (0x00009f0e) bg_ai5_widget_pane_g2_ParamLimits

0x9def,	// (0x00009f0e) bg_ai5_widget_pane_g2

0x9dfb,	// (0x00009f1a) bg_ai5_widget_pane_g3_ParamLimits

0x9dfb,	// (0x00009f1a) bg_ai5_widget_pane_g3

0x9e07,	// (0x00009f26) bg_ai5_widget_pane_g4_ParamLimits

0x9e07,	// (0x00009f26) bg_ai5_widget_pane_g4

0x9e13,	// (0x00009f32) bg_ai5_widget_pane_g5_ParamLimits

0x9e13,	// (0x00009f32) bg_ai5_widget_pane_g5

0x9e1f,	// (0x00009f3e) bg_ai5_widget_pane_g6_ParamLimits

0x9e1f,	// (0x00009f3e) bg_ai5_widget_pane_g6

0x9e2b,	// (0x00009f4a) bg_ai5_widget_pane_g7_ParamLimits

0x9e2b,	// (0x00009f4a) bg_ai5_widget_pane_g7

0x9e37,	// (0x00009f56) bg_ai5_widget_pane_g8_ParamLimits

0x9e37,	// (0x00009f56) bg_ai5_widget_pane_g8

0x9e43,	// (0x00009f62) bg_ai5_widget_pane_g9_ParamLimits

0x9e43,	// (0x00009f62) bg_ai5_widget_pane_g9

0x0008,

0xfe2a,	// (0x0000ff49) bg_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0000ff49) bg_ai5_widget_pane_g

0x9e75,	// (0x00009f94) cell_shortcut_ai5_widget_pane_ParamLimits

0x9e75,	// (0x00009f94) cell_shortcut_ai5_widget_pane

0x251d,	// (0x0000263c) bg_cell_shortcut_ai5_widget_pane

0x9e86,	// (0x00009fa5) cell_grid_ai5_widget_pane_g1

0x251d,	// (0x0000263c) highlight_cell_shortcut_ai5_widget_pane

0x35f7,	// (0x00003716) ai5_sk_left_pane_g1

0x9e8f,	// (0x00009fae) ai5_sk_left_pane_g2

0x9e97,	// (0x00009fb6) ai5_sk_left_pane_g3

0x9e9f,	// (0x00009fbe) ai5_sk_left_pane_g4

0x0003,

0xfe3d,	// (0x0000ff5c) ai5_sk_left_pane_g

0x9ea7,	// (0x00009fc6) ai5_sk_left_pane_t1

0x35ef,	// (0x0000370e) ai5_sk_right_pane_g1

0x9eb5,	// (0x00009fd4) ai5_sk_right_pane_g2

0x9ebd,	// (0x00009fdc) ai5_sk_right_pane_g3

0x9ec5,	// (0x00009fe4) ai5_sk_right_pane_g4

0x0003,

0xfe46,	// (0x0000ff65) ai5_sk_right_pane_g

0x9ecd,	// (0x00009fec) ai5_sk_right_pane_t1

0x35ef,	// (0x0000370e) ai5_sk_middle_pane_g1

0x35f7,	// (0x00003716) ai5_sk_middle_pane_g2

0x360f,	// (0x0000372e) ai5_sk_middle_pane_g3

0x9ebd,	// (0x00009fdc) ai5_sk_middle_pane_g4

0x9e97,	// (0x00009fb6) ai5_sk_middle_pane_g5

0x9edb,	// (0x00009ffa) ai5_sk_middle_pane_g6

0xf064,	// (0x0000f183) ai5_sk_middle_pane_g7

0x0006,

0xfe4f,	// (0x0000ff6e) ai5_sk_middle_pane_g

0xcdbc,	// (0x0000cedb) aid_touch_area_size_lc0_ParamLimits

0xcdbc,	// (0x0000cedb) aid_touch_area_size_lc0

0x6ddc,	// (0x00006efb) cell_hwr_candidate_pane_t1_ParamLimits

0x30ab,	// (0x000031ca) aid_touch_navi_pane

0xd048,	// (0x0000d167) status_dt_navi_pane_ParamLimits

0xd048,	// (0x0000d167) status_dt_navi_pane

0xd060,	// (0x0000d17f) status_dt_sta_pane_ParamLimits

0xd060,	// (0x0000d17f) status_dt_sta_pane

0xf06c,	// (0x0000f18b) dt_sta_controll_pane

0xf079,	// (0x0000f198) dt_sta_indi_pane

0xf086,	// (0x0000f1a5) dt_sta_title_pane

0x071c,	// (0x0000083b) bg_dt_sta_indi_pane_ParamLimits

0x071c,	// (0x0000083b) bg_dt_sta_indi_pane

0xf098,	// (0x0000f1b7) dt_sta_battery_pane

0xf0a0,	// (0x0000f1bf) dt_sta_indi_pane_g1

0x9f2d,	// (0x0000a04c) dt_sta_indi_pane_g2

0x9f36,	// (0x0000a055) dt_sta_indi_pane_g3

0x0002,

0xfe5e,	// (0x0000ff7d) dt_sta_indi_pane_g

0x9f3f,	// (0x0000a05e) dt_sta_signal_pane

0x1277,	// (0x00001396) bg_dt_sta_title_pane_ParamLimits

0x1277,	// (0x00001396) bg_dt_sta_title_pane

0x9f48,	// (0x0000a067) dt_sta_title_pane_g1

0x9f50,	// (0x0000a06f) dt_sta_title_pane_t1_ParamLimits

0x9f50,	// (0x0000a06f) dt_sta_title_pane_t1

0xf4f5,	// (0x0000f614) bg_dt_sta_control_pane

0xf0a9,	// (0x0000f1c8) dt_sta_controll_pane_g1

0x9f6e,	// (0x0000a08d) bg_dt_sta_title_pane_g1

0x9f77,	// (0x0000a096) bg_dt_sta_title_pane_g2

0x9f80,	// (0x0000a09f) bg_dt_sta_title_pane_g3

0x0002,

0xfe65,	// (0x0000ff84) bg_dt_sta_title_pane_g

0x659d,	// (0x000066bc) bg_dt_sta_indi_pane_g1

0x9f89,	// (0x0000a0a8) dt_sta_signal_pane_g1

0x9f91,	// (0x0000a0b0) dt_sta_signal_pane_g2

0x0001,

0xfe6c,	// (0x0000ff8b) dt_sta_signal_pane_g

0x9f99,	// (0x0000a0b8) dt_sta_battery_pane_g1

0x9fa2,	// (0x0000a0c1) dt_sta_battery_pane_t1

0x659d,	// (0x000066bc) bg_dt_sta_control_pane_g1

0x1e57,	// (0x00001f76) fep_china_uni_eep_pane

0x1e5f,	// (0x00001f7e) fep_china_uni_entry_pane_ParamLimits

0x1e6f,	// (0x00001f8e) popup_fep_china_uni_window_g1_ParamLimits

0x1e7f,	// (0x00001f9e) popup_fep_china_uni_window_g2_ParamLimits

0x1e7f,	// (0x00001f9e) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0000f812) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0000f812) popup_fep_china_uni_window_g

0x9fb1,	// (0x0000a0d0) fep_china_uni_eep_pane_g1

0x9fb9,	// (0x0000a0d8) fep_china_uni_eep_pane_t1

0x998b,	// (0x00009aaa) aid_touch_area_size_smil_player

0x3201,	// (0x00003320) lc0_clock_pane

0x33e8,	// (0x00003507) status_pane_g5_ParamLimits

0x33e8,	// (0x00003507) status_pane_g5

0xc86f,	// (0x0000c98e) popup_keymap_window

0x33a6,	// (0x000034c5) status_icon_pane

0x9bbe,	// (0x00009cdd) cell_ai5_widget_pane_g3_ParamLimits

0x9bd8,	// (0x00009cf7) cell_ai5_widget_pane_g4_ParamLimits

0x9be8,	// (0x00009d07) cell_ai5_widget_pane_g5_ParamLimits

0x9c10,	// (0x00009d2f) cell_ai5_widget_pane_g8_ParamLimits

0x9c10,	// (0x00009d2f) cell_ai5_widget_pane_g8

0x9c24,	// (0x00009d43) cell_ai5_widget_pane_g9_ParamLimits

0x9c24,	// (0x00009d43) cell_ai5_widget_pane_g9

0x9c38,	// (0x00009d57) cell_ai5_widget_pane_g10_ParamLimits

0x9c38,	// (0x00009d57) cell_ai5_widget_pane_g10

0x9fc8,	// (0x0000a0e7) status_icon_pane_g1

0xf4f5,	// (0x0000f614) bg_popup_sub_pane_cp13

0x9fd0,	// (0x0000a0ef) popup_keymap_window_t1

0xc58f,	// (0x0000c6ae) control_pane_g6_ParamLimits

0xc58f,	// (0x0000c6ae) control_pane_g6

0xc59c,	// (0x0000c6bb) control_pane_g7_ParamLimits

0xc59c,	// (0x0000c6bb) control_pane_g7

0xc5a9,	// (0x0000c6c8) control_pane_g8_ParamLimits

0xc5a9,	// (0x0000c6c8) control_pane_g8

0xf06c,	// (0x0000f18b) dt_sta_controll_pane_ParamLimits

0xf079,	// (0x0000f198) dt_sta_indi_pane_ParamLimits

0xf086,	// (0x0000f1a5) dt_sta_title_pane_ParamLimits

0x0c58,	// (0x00000d77) aid_size_touch_scroll_bar_cale

0x0192,	// (0x000002b1) popup_discreet_window_ParamLimits

0x0192,	// (0x000002b1) popup_discreet_window

0xb951,	// (0x0000ba70) popup_sk_window

0x3e75,	// (0x00003f94) bg_popup_sub_pane_cp28_ParamLimits

0x3e75,	// (0x00003f94) bg_popup_sub_pane_cp28

0x9fde,	// (0x0000a0fd) popup_discreet_window_g1_ParamLimits

0x9fde,	// (0x0000a0fd) popup_discreet_window_g1

0x9ffe,	// (0x0000a11d) popup_discreet_window_t1_ParamLimits

0x9ffe,	// (0x0000a11d) popup_discreet_window_t1

0xa01c,	// (0x0000a13b) popup_discreet_window_t2_ParamLimits

0xa01c,	// (0x0000a13b) popup_discreet_window_t2

0x0002,

0xfe71,	// (0x0000ff90) popup_discreet_window_t_ParamLimits

0xfe71,	// (0x0000ff90) popup_discreet_window_t

0xa06e,	// (0x0000a18d) popup_sk_window_g1

0xa078,	// (0x0000a197) popup_sk_window_g2

0x0001,

0xfe78,	// (0x0000ff97) popup_sk_window_g

0xa080,	// (0x0000a19f) popup_sk_window_t1

0xa08e,	// (0x0000a1ad) popup_sk_window_t1_copy1

0x9baa,	// (0x00009cc9) cell_ai5_widget_pane_g2_ParamLimits

0x9d45,	// (0x00009e64) cell_ai5_widget_pane_t9_ParamLimits

0x9d45,	// (0x00009e64) cell_ai5_widget_pane_t9

0xf4f5,	// (0x0000f614) main_fep_fshwr2_pane

0xf0b2,	// (0x0000f1d1) aid_fshwr2_btn_pane

0xf0c2,	// (0x0000f1e1) aid_fshwr2_syb_pane

0xf0d6,	// (0x0000f1f5) aid_fshwr2_txt_pane

0xf0e6,	// (0x0000f205) fshwr2_func_candi_pane

0xf106,	// (0x0000f225) fshwr2_hwr_syb_pane

0xf128,	// (0x0000f247) fshwr2_icf_pane

0xf4f5,	// (0x0000f614) fshwr2_icf_bg_pane

0xf158,	// (0x0000f277) fshwr2_icf_pane_t1_ParamLimits

0xf158,	// (0x0000f277) fshwr2_icf_pane_t1

0x1c55,	// (0x00001d74) fshwr2_func_candi_pane_g1

0xf171,	// (0x0000f290) fshwr2_func_candi_row_pane_ParamLimits

0xf171,	// (0x0000f290) fshwr2_func_candi_row_pane

0xf194,	// (0x0000f2b3) cell_fshwr2_syb_pane_ParamLimits

0xf194,	// (0x0000f2b3) cell_fshwr2_syb_pane

0x9927,	// (0x00009a46) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9927,	// (0x00009a46) fshwr2_hwr_syb_pane_g1

0xf4f5,	// (0x0000f614) bg_popup_call_pane_cp01

0xf1ba,	// (0x0000f2d9) fshwr2_func_candi_cell_pane_ParamLimits

0xf1ba,	// (0x0000f2d9) fshwr2_func_candi_cell_pane

0x3c56,	// (0x00003d75) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3c56,	// (0x00003d75) fshwr2_func_candi_cell_bg_pane

0xf205,	// (0x0000f324) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf205,	// (0x0000f324) fshwr2_func_candi_cell_pane_g1

0xf23c,	// (0x0000f35b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf23c,	// (0x0000f35b) fshwr2_func_candi_cell_pane_t1

0xf4f5,	// (0x0000f614) bg_button_pane_cp08

0x2a6c,	// (0x00002b8b) cell_fshwr2_syb_bg_pane

0xf257,	// (0x0000f376) cell_fshwr2_syb_bg_pane_g1

0xf26a,	// (0x0000f389) cell_fshwr2_syb_bg_pane_t1

0x1277,	// (0x00001396) main_tmo_pane

0xd3a6,	// (0x0000d4c5) uni_indicator_pane_g1_ParamLimits

0xd3bc,	// (0x0000d4db) uni_indicator_pane_g2_ParamLimits

0xd3d2,	// (0x0000d4f1) uni_indicator_pane_g3_ParamLimits

0x4b27,	// (0x00004c46) uni_indicator_pane_g4_ParamLimits

0x4b27,	// (0x00004c46) uni_indicator_pane_g4

0x4b3b,	// (0x00004c5a) uni_indicator_pane_g5_ParamLimits

0x4b3b,	// (0x00004c5a) uni_indicator_pane_g5

0x4b3b,	// (0x00004c5a) uni_indicator_pane_g6_ParamLimits

0x4b3b,	// (0x00004c5a) uni_indicator_pane_g6

0xf8eb,	// (0x0000fa0a) uni_indicator_pane_g_ParamLimits

0xe02f,	// (0x0000e14e) popup_tmo_note_window_ParamLimits

0xe02f,	// (0x0000e14e) popup_tmo_note_window

0x1277,	// (0x00001396) fshwr2_bg_pane

0xf22d,	// (0x0000f34c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf22d,	// (0x0000f34c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe7d,	// (0x0000ff9c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe7d,	// (0x0000ff9c) fshwr2_func_candi_cell_pane_g

0x659d,	// (0x000066bc) bg_popup_window_pane_cp01

0xa251,	// (0x0000a370) bg_popup_window_pane_g1_cp01

0xa25a,	// (0x0000a379) bg_popup_window_pane_cp22_ParamLimits

0xa25a,	// (0x0000a379) bg_popup_window_pane_cp22

0xa268,	// (0x0000a387) listscroll_tmo_link_pane_ParamLimits

0xa268,	// (0x0000a387) listscroll_tmo_link_pane

0xa2a8,	// (0x0000a3c7) popup_tmo_note_window_g1_ParamLimits

0xa2a8,	// (0x0000a3c7) popup_tmo_note_window_g1

0xa2b5,	// (0x0000a3d4) tmo_note_info_pane_ParamLimits

0xa2b5,	// (0x0000a3d4) tmo_note_info_pane

0xf280,	// (0x0000f39f) list_tmo_note_info_pane_g1_ParamLimits

0xf280,	// (0x0000f39f) list_tmo_note_info_pane_g1

0xa2e6,	// (0x0000a405) list_tmo_note_info_pane_g2_ParamLimits

0xa2e6,	// (0x0000a405) list_tmo_note_info_pane_g2

0x0001,

0xfe82,	// (0x0000ffa1) list_tmo_note_info_pane_g_ParamLimits

0xfe82,	// (0x0000ffa1) list_tmo_note_info_pane_g

0xa302,	// (0x0000a421) list_tmo_note_info_text_pane_ParamLimits

0xa302,	// (0x0000a421) list_tmo_note_info_text_pane

0xa383,	// (0x0000a4a2) list_tmo_link_pane

0xa390,	// (0x0000a4af) scroll_pane_cp20

0xa39d,	// (0x0000a4bc) list_single_tmo_link_pane_ParamLimits

0xa39d,	// (0x0000a4bc) list_single_tmo_link_pane

0xa3ad,	// (0x0000a4cc) list_single_tmo_link_pane_t1

0xa3bb,	// (0x0000a4da) list_tmo_note_info_text_pane_t1_ParamLimits

0xa3bb,	// (0x0000a4da) list_tmo_note_info_text_pane_t1

0xc20f,	// (0x0000c32e) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc20f,	// (0x0000c32e) aid_size_touch_scroll_bar_cp01

0xc17e,	// (0x0000c29d) aid_size_touch_slider_marker

0xb941,	// (0x0000ba60) popup_settings_window_ParamLimits

0xb941,	// (0x0000ba60) popup_settings_window

0x2aca,	// (0x00002be9) popup_candi_list_indi_window

0x30ab,	// (0x000031ca) aid_touch_navi_pane_ParamLimits

0x8406,	// (0x00008525) rs_clock_indi_pane

0x840f,	// (0x0000852e) sctrl_sk_bottom_pane_ParamLimits

0x8420,	// (0x0000853f) sctrl_sk_top_pane_ParamLimits

0x8c59,	// (0x00008d78) popup_fep_tooltip_window

0x9b20,	// (0x00009c3f) aid_size_cell_widget_grid_ParamLimits

0x9b95,	// (0x00009cb4) cell_ai5_widget_pane_g1_ParamLimits

0x9b95,	// (0x00009cb4) cell_ai5_widget_pane_g1

0x9bf8,	// (0x00009d17) cell_ai5_widget_pane_g6_ParamLimits

0x9c04,	// (0x00009d23) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdf6,	// (0x0000ff15) cell_ai5_widget_pane_g_ParamLimits

0xfdf6,	// (0x0000ff15) cell_ai5_widget_pane_g

0x9d74,	// (0x00009e93) cell_ai5_widget_pane_t10_ParamLimits

0x9d74,	// (0x00009e93) cell_ai5_widget_pane_t10

0x9db7,	// (0x00009ed6) grid_ai5_widget_pane_ParamLimits

0x9e4f,	// (0x00009f6e) cell_contacts_ai5_widget_pane_ParamLimits

0x9e4f,	// (0x00009f6e) cell_contacts_ai5_widget_pane

0xa031,	// (0x0000a150) popup_discreet_window_t3_ParamLimits

0xa031,	// (0x0000a150) popup_discreet_window_t3

0xf144,	// (0x0000f263) popup_fshwr2_char_preview_window_ParamLimits

0xf144,	// (0x0000f263) popup_fshwr2_char_preview_window

0xf297,	// (0x0000f3b6) tmo_note_info_pane_t1

0xf2ac,	// (0x0000f3cb) tmo_note_info_pane_t2

0xf2c3,	// (0x0000f3e2) tmo_note_info_pane_t3

0xa35f,	// (0x0000a47e) tmo_note_info_pane_t4

0xa371,	// (0x0000a490) tmo_note_info_pane_t5

0x0004,

0xfe87,	// (0x0000ffa6) tmo_note_info_pane_t

0xa383,	// (0x0000a4a2) list_tmo_link_pane_ParamLimits

0xa390,	// (0x0000a4af) scroll_pane_cp20_ParamLimits

0xf4f5,	// (0x0000f614) bg_popup_fep_char_preview_window_cp01

0xf2d8,	// (0x0000f3f7) popup_fshwr2_char_preview_window_t1

0xa3e2,	// (0x0000a501) popup_candi_list_indi_window_g1

0xa3eb,	// (0x0000a50a) bg_cell_contacts_ai5_widget_pane

0xa3f7,	// (0x0000a516) cell_contacts_ai5_widget_pane_g1

0x70a8,	// (0x000071c7) cell_contacts_ai5_widget_pane_g2

0xa40c,	// (0x0000a52b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe92,	// (0x0000ffb1) cell_contacts_ai5_widget_pane_g

0xa418,	// (0x0000a537) cell_contacts_ai5_widget_pane_t1

0x1277,	// (0x00001396) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa48f,	// (0x0000a5ae) settings_container_pane

0x251d,	// (0x0000263c) listscroll_set_pane_copy1

0x5935,	// (0x00005a54) scroll_pane_cp121_copy1

0x3c12,	// (0x00003d31) set_content_pane_copy1

0xa49b,	// (0x0000a5ba) aid_height_set_list_copy1_ParamLimits

0xa49b,	// (0x0000a5ba) aid_height_set_list_copy1

0x4e0d,	// (0x00004f2c) aid_size_parent_copy1_ParamLimits

0x4e0d,	// (0x00004f2c) aid_size_parent_copy1

0xa4a7,	// (0x0000a5c6) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa4a7,	// (0x0000a5c6) button_value_adjust_pane_cp6_copy1

0x2a6c,	// (0x00002b8b) list_highlight_pane_cp2_copy1_ParamLimits

0x2a6c,	// (0x00002b8b) list_highlight_pane_cp2_copy1

0xa4bb,	// (0x0000a5da) list_set_pane_copy1_ParamLimits

0xa4bb,	// (0x0000a5da) list_set_pane_copy1

0xa42a,	// (0x0000a549) main_pane_set_t1_copy1_ParamLimits

0xa42a,	// (0x0000a549) main_pane_set_t1_copy1

0xa464,	// (0x0000a583) main_pane_set_t2_copy1_ParamLimits

0xa464,	// (0x0000a583) main_pane_set_t2_copy1

0xa568,	// (0x0000a687) main_pane_set_t3_copy1

0xa576,	// (0x0000a695) main_pane_set_t4_copy1

0xa483,	// (0x0000a5a2) set_content_pane_g1_copy1_ParamLimits

0xa483,	// (0x0000a5a2) set_content_pane_g1_copy1

0xa584,	// (0x0000a6a3) setting_code_pane_copy1

0xa58c,	// (0x0000a6ab) setting_slider_graphic_pane_copy1

0xa58c,	// (0x0000a6ab) setting_slider_pane_copy1

0xa594,	// (0x0000a6b3) setting_text_pane_copy1

0xa594,	// (0x0000a6b3) setting_volume_pane_copy1

0xa584,	// (0x0000a6a3) settings_code_pane_cp2_copy1

0xa59c,	// (0x0000a6bb) settings_code_pane_cp_copy1_ParamLimits

0xa59c,	// (0x0000a6bb) settings_code_pane_cp_copy1

0xa5b0,	// (0x0000a6cf) volume_set_pane_copy1

0xa5b8,	// (0x0000a6d7) volume_set_pane_g10_copy1

0xa5c0,	// (0x0000a6df) volume_set_pane_g1_copy1

0xa5c8,	// (0x0000a6e7) volume_set_pane_g2_copy1

0xa5d0,	// (0x0000a6ef) volume_set_pane_g3_copy1

0xa5d8,	// (0x0000a6f7) volume_set_pane_g4_copy1

0xa5e0,	// (0x0000a6ff) volume_set_pane_g5_copy1

0xa5e8,	// (0x0000a707) volume_set_pane_g6_copy1

0xa5f0,	// (0x0000a70f) volume_set_pane_g7_copy1

0xa5f8,	// (0x0000a717) volume_set_pane_g8_copy1

0xa600,	// (0x0000a71f) volume_set_pane_g9_copy1

0x03e8,	// (0x00000507) bg_set_opt_pane_cp_copy1_ParamLimits

0x03e8,	// (0x00000507) bg_set_opt_pane_cp_copy1

0xa608,	// (0x0000a727) setting_slider_pane_t1_copy1_ParamLimits

0xa608,	// (0x0000a727) setting_slider_pane_t1_copy1

0xa627,	// (0x0000a746) setting_slider_pane_t2_copy1_ParamLimits

0xa627,	// (0x0000a746) setting_slider_pane_t2_copy1

0xa641,	// (0x0000a760) setting_slider_pane_t3_copy1_ParamLimits

0xa641,	// (0x0000a760) setting_slider_pane_t3_copy1

0xa659,	// (0x0000a778) slider_set_pane_copy1_ParamLimits

0xa659,	// (0x0000a778) slider_set_pane_copy1

0x13a6,	// (0x000014c5) set_opt_bg_pane_g1_copy2

0x13ae,	// (0x000014cd) set_opt_bg_pane_g2_copy2

0xa66f,	// (0x0000a78e) set_opt_bg_pane_g3_copy2

0x13be,	// (0x000014dd) set_opt_bg_pane_g4_copy2

0x13c6,	// (0x000014e5) set_opt_bg_pane_g5_copy2

0x13ce,	// (0x000014ed) set_opt_bg_pane_g6_copy2

0xa679,	// (0x0000a798) set_opt_bg_pane_g7_copy2

0xa681,	// (0x0000a7a0) set_opt_bg_pane_g8_copy2

0xa68b,	// (0x0000a7aa) set_opt_bg_pane_g9_copy2

0xa695,	// (0x0000a7b4) aid_size_touch_slider_mark_copy1_ParamLimits

0xa695,	// (0x0000a7b4) aid_size_touch_slider_mark_copy1

0xa6a9,	// (0x0000a7c8) slider_set_pane_g1_copy1

0xa6b2,	// (0x0000a7d1) slider_set_pane_g2_copy1

0x4d76,	// (0x00004e95) slider_set_pane_g3_copy1_ParamLimits

0x4d76,	// (0x00004e95) slider_set_pane_g3_copy1

0x4d8a,	// (0x00004ea9) slider_set_pane_g4_copy1_ParamLimits

0x4d8a,	// (0x00004ea9) slider_set_pane_g4_copy1

0x4da2,	// (0x00004ec1) slider_set_pane_g5_copy1_ParamLimits

0x4da2,	// (0x00004ec1) slider_set_pane_g5_copy1

0x4d76,	// (0x00004e95) slider_set_pane_g6_copy1_ParamLimits

0x4d76,	// (0x00004e95) slider_set_pane_g6_copy1

0xa6ba,	// (0x0000a7d9) slider_set_pane_g7_copy1_ParamLimits

0xa6ba,	// (0x0000a7d9) slider_set_pane_g7_copy1

0x0174,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa6d0,	// (0x0000a7ef) setting_slider_graphic_pane_g1_copy1

0xa6d9,	// (0x0000a7f8) setting_slider_graphic_pane_t1_copy1

0xa6e9,	// (0x0000a808) setting_slider_graphic_pane_t2_copy1

0xa6f9,	// (0x0000a818) slider_set_pane_cp_copy1

0xa709,	// (0x0000a828) input_focus_pane_cp1_copy1

0xa712,	// (0x0000a831) list_set_text_pane_copy1

0xa71a,	// (0x0000a839) setting_text_pane_g1_copy1

0x04d2,	// (0x000005f1) set_text_pane_t1_copy1

0xa709,	// (0x0000a828) input_focus_pane_cp2_copy1

0xa71a,	// (0x0000a839) setting_code_pane_g1_copy1

0xa723,	// (0x0000a842) setting_code_pane_t1_copy1

0x575d,	// (0x0000587c) list_set_graphic_pane_copy1

0x0174,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x2226,	// (0x00002345) list_set_graphic_pane_g1_copy1_ParamLimits

0x2226,	// (0x00002345) list_set_graphic_pane_g1_copy1

0xa731,	// (0x0000a850) list_set_graphic_pane_g2_copy1

0x223e,	// (0x0000235d) list_set_graphic_pane_t1_copy1_ParamLimits

0x223e,	// (0x0000235d) list_set_graphic_pane_t1_copy1

0x659d,	// (0x000066bc) rs_clock_indi_pane_g1

0xa739,	// (0x0000a858) rs_clock_indi_pane_t1

0xa747,	// (0x0000a866) rs_indi_pane

0xa74f,	// (0x0000a86e) rs_indi_pane_g1

0xa758,	// (0x0000a877) rs_indi_pane_g2

0xa761,	// (0x0000a880) rs_indi_pane_g3

0x0002,

0xfe99,	// (0x0000ffb8) rs_indi_pane_g

0x251d,	// (0x0000263c) bg_popup_preview_window_pane_cp03

0xa76a,	// (0x0000a889) popup_fep_tooltip_window_t1

0x77c8,	// (0x000078e7) popup_note2_window_g2_ParamLimits

0x77c8,	// (0x000078e7) popup_note2_window_g2

0x0001,

0xfc26,	// (0x0000fd45) popup_note2_window_g_ParamLimits

0xfc26,	// (0x0000fd45) popup_note2_window_g

0x7dca,	// (0x00007ee9) bg_popup_sub_pane_cp11_ParamLimits

0x7dd7,	// (0x00007ef6) cell_ai3_links_pane_g1_ParamLimits

0x7dee,	// (0x00007f0d) cell_ai3_links_pane_t1

0x04d2,	// (0x000005f1) set_text_pane_t1_copy1_ParamLimits

0x2431,	// (0x00002550) cell_graphic_popup_pane_cp2_ParamLimits

0x2431,	// (0x00002550) cell_graphic_popup_pane_cp2

0xa778,	// (0x0000a897) cell_graphic_popup_pane_g1_cp2

0x0a6b,	// (0x00000b8a) cell_graphic_popup_pane_g2_cp2

0xa780,	// (0x0000a89f) cell_graphic_popup_pane_g3_cp2

0xa788,	// (0x0000a8a7) cell_graphic_popup_pane_t2_cp2

0x0a7c,	// (0x00000b9b) grid_highlight_pane_cp3_cp2

0x1934,	// (0x00001a53) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1277,	// (0x00001396) main_tmo_pane_ParamLimits

0xe023,	// (0x0000e142) popup_tmo_big_image_note_window

0x9b84,	// (0x00009ca3) cell_ai5_widget_list_pane

0x9b8c,	// (0x00009cab) cell_ai5_widget_lrg_icon_pane

0xf297,	// (0x0000f3b6) tmo_note_info_pane_t1_ParamLimits

0xf2ac,	// (0x0000f3cb) tmo_note_info_pane_t2_ParamLimits

0xf2c3,	// (0x0000f3e2) tmo_note_info_pane_t3_ParamLimits

0xa35f,	// (0x0000a47e) tmo_note_info_pane_t4_ParamLimits

0xa371,	// (0x0000a490) tmo_note_info_pane_t5_ParamLimits

0xfe87,	// (0x0000ffa6) tmo_note_info_pane_t_ParamLimits

0xa48f,	// (0x0000a5ae) settings_container_pane_ParamLimits

0xa701,	// (0x0000a820) indicator_popup_pane_cp5

0xa701,	// (0x0000a820) indicator_popup_pane_cp6

0x575d,	// (0x0000587c) list_set_graphic_pane_copy1_ParamLimits

0xf4f5,	// (0x0000f614) bg_popup_window_pane_cp23

0xa796,	// (0x0000a8b5) popup_tmo_big_image_note_window_g1

0xa7a0,	// (0x0000a8bf) popup_tmo_big_image_note_window_t1

0xa7b0,	// (0x0000a8cf) popup_tmo_big_image_note_window_t2

0xa7c0,	// (0x0000a8df) popup_tmo_big_image_note_window_t3

0x0002,

0xfea0,	// (0x0000ffbf) popup_tmo_big_image_note_window_t

0x659d,	// (0x000066bc) cell_ai5_widget_lrg_icon_pane_g1

0xa7d0,	// (0x0000a8ef) cell_ai5_widget_lrg_icon_pane_t1

0xa7de,	// (0x0000a8fd) cell_ai5_widget_list_row_pane_ParamLimits

0xa7de,	// (0x0000a8fd) cell_ai5_widget_list_row_pane

0xa7f5,	// (0x0000a914) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa7f5,	// (0x0000a914) cell_ai5_widget_list_row_pane_g1

0xa802,	// (0x0000a921) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa802,	// (0x0000a921) cell_ai5_widget_list_row_pane_t1

0xa833,	// (0x0000a952) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa833,	// (0x0000a952) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea7,	// (0x0000ffc6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea7,	// (0x0000ffc6) cell_ai5_widget_list_row_pane_t

0xf4f5,	// (0x0000f614) main_fep_vtchi_ss_pane

0xa883,	// (0x0000a9a2) popup_fep_char_pre_window

0xa88b,	// (0x0000a9aa) popup_fep_ituss_window

0xf310,	// (0x0000f42f) popup_fep_vkbss_window

0x2a6c,	// (0x00002b8b) grid_vkbss_keypad_pane_ParamLimits

0x2a6c,	// (0x00002b8b) grid_vkbss_keypad_pane

0xa8f7,	// (0x0000aa16) ituss_keypad_pane

0xa90d,	// (0x0000aa2c) aid_vkbss_key_offset_ParamLimits

0xa90d,	// (0x0000aa2c) aid_vkbss_key_offset

0xf31d,	// (0x0000f43c) cell_vkbss_key_pane_ParamLimits

0xf31d,	// (0x0000f43c) cell_vkbss_key_pane

0xa977,	// (0x0000aa96) bg_cell_vkbss_key_g1_ParamLimits

0xa977,	// (0x0000aa96) bg_cell_vkbss_key_g1

0xf374,	// (0x0000f493) cell_vkbss_key_3p_pane_ParamLimits

0xf374,	// (0x0000f493) cell_vkbss_key_3p_pane

0xf3aa,	// (0x0000f4c9) cell_vkbss_key_g1_ParamLimits

0xf3aa,	// (0x0000f4c9) cell_vkbss_key_g1

0xf3e0,	// (0x0000f4ff) cell_vkbss_key_t1_ParamLimits

0xf3e0,	// (0x0000f4ff) cell_vkbss_key_t1

0xaa4b,	// (0x0000ab6a) cell_ituss_key_pane_ParamLimits

0xaa4b,	// (0x0000ab6a) cell_ituss_key_pane

0xaa5c,	// (0x0000ab7b) bg_cell_ituss_key_g1_ParamLimits

0xaa5c,	// (0x0000ab7b) bg_cell_ituss_key_g1

0xaa68,	// (0x0000ab87) cell_ituss_key_pane_g1_ParamLimits

0xaa68,	// (0x0000ab87) cell_ituss_key_pane_g1

0xaa7c,	// (0x0000ab9b) cell_ituss_key_pane_g2_ParamLimits

0xaa7c,	// (0x0000ab9b) cell_ituss_key_pane_g2

0x0005,

0xfeae,	// (0x0000ffcd) cell_ituss_key_pane_g_ParamLimits

0xfeae,	// (0x0000ffcd) cell_ituss_key_pane_g

0xab12,	// (0x0000ac31) cell_ituss_key_t1_ParamLimits

0xab12,	// (0x0000ac31) cell_ituss_key_t1

0xab4c,	// (0x0000ac6b) cell_ituss_key_t2_ParamLimits

0xab4c,	// (0x0000ac6b) cell_ituss_key_t2

0xab7e,	// (0x0000ac9d) cell_ituss_key_t3_ParamLimits

0xab7e,	// (0x0000ac9d) cell_ituss_key_t3

0xabaf,	// (0x0000acce) cell_ituss_key_t4_ParamLimits

0xabaf,	// (0x0000acce) cell_ituss_key_t4

0x0004,

0xfebb,	// (0x0000ffda) cell_ituss_key_t_ParamLimits

0xfebb,	// (0x0000ffda) cell_ituss_key_t

0xf43c,	// (0x0000f55b) cell_vkbss_key_3p_pane_g1

0xf444,	// (0x0000f563) cell_vkbss_key_3p_pane_g2

0xf44c,	// (0x0000f56b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec6,	// (0x0000ffe5) cell_vkbss_key_3p_pane_g

0x251d,	// (0x0000263c) bg_popup_fep_char_preview_window_cp02

0xac0a,	// (0x0000ad29) popup_fep_char_pre_window_t1

0xf03c,	// (0x0000f15b) main_ai5_sk_pane

0xa3eb,	// (0x0000a50a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3f7,	// (0x0000a516) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x70a8,	// (0x000071c7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa40c,	// (0x0000a52b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe92,	// (0x0000ffb1) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa418,	// (0x0000a537) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1277,	// (0x00001396) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf454,	// (0x0000f573) main_ai5_sk_pane_g1

0x3cae,	// (0x00003dcd) popup_query_code_window_g1

0xf301,	// (0x0000f420) popup_fep_vkb_icf_pane

0xa8ce,	// (0x0000a9ed) popup_fep_vtchi_icf_pane

0xac21,	// (0x0000ad40) bg_icf_pane

0xac21,	// (0x0000ad40) list_vkb_icf_pane

0xac2d,	// (0x0000ad4c) bg_icf_pane_cp01

0xac40,	// (0x0000ad5f) vtchi_icf_list_pane

0xf4a9,	// (0x0000f5c8) list_vkb_icf_pane_t1_ParamLimits

0xf4a9,	// (0x0000f5c8) list_vkb_icf_pane_t1

0xacbe,	// (0x0000addd) vtchi_icf_list_pane_t1_ParamLimits

0xacbe,	// (0x0000addd) vtchi_icf_list_pane_t1

0xa88b,	// (0x0000a9aa) popup_fep_ituss_window_ParamLimits

0xa8ce,	// (0x0000a9ed) popup_fep_vtchi_icf_pane_ParamLimits

0xa8f7,	// (0x0000aa16) ituss_keypad_pane_ParamLimits

0xa903,	// (0x0000aa22) ituss_sks_pane

0xac21,	// (0x0000ad40) bg_icf_pane_ParamLimits

0xf2e6,	// (0x0000f405) icf_edit_indi_pane_ParamLimits

0xf2e6,	// (0x0000f405) icf_edit_indi_pane

0xac21,	// (0x0000ad40) list_vkb_icf_pane_ParamLimits

0xac2d,	// (0x0000ad4c) bg_icf_pane_cp01_ParamLimits

0xa876,	// (0x0000a995) icf_edit_indi_pane_cp01_ParamLimits

0xa876,	// (0x0000a995) icf_edit_indi_pane_cp01

0xac40,	// (0x0000ad5f) vtchi_query_pane

0x9927,	// (0x00009a46) icf_edit_indi_pane_g1_ParamLimits

0x9927,	// (0x00009a46) icf_edit_indi_pane_g1

0xf4c0,	// (0x0000f5df) icf_edit_indi_pane_g2_ParamLimits

0xf4c0,	// (0x0000f5df) icf_edit_indi_pane_g2

0x0001,

0xfef1,	// (0x00010010) icf_edit_indi_pane_g_ParamLimits

0xfef1,	// (0x00010010) icf_edit_indi_pane_g

0xf4d4,	// (0x0000f5f3) icf_edit_indi_pane_t1

0xacdc,	// (0x0000adfb) bg_input_focus_pane_cp042

0x0c4f,	// (0x00000d6e) vtchi_button_pane

0xace5,	// (0x0000ae04) vtchi_query_pane_t1

0xacf3,	// (0x0000ae12) vtchi_query_pane_t2

0xad01,	// (0x0000ae20) vtchi_query_pane_t3

0x0002,

0xfee0,	// (0x0000ffff) vtchi_query_pane_t

0xf4f5,	// (0x0000f614) bg_button_pane_cp13

0xad0f,	// (0x0000ae2e) vtchi_button_pane_g1

0xad17,	// (0x0000ae36) ituss_sks_pane_g1

0xad22,	// (0x0000ae41) ituss_sks_pane_g2

0x0001,

0xfee7,	// (0x00010006) ituss_sks_pane_g

0xad2a,	// (0x0000ae49) ituss_sks_pane_t1

0xad38,	// (0x0000ae57) ituss_sks_pane_t2

0x0001,

0xfeec,	// (0x0001000b) ituss_sks_pane_t

0x5f7f,	// (0x0000609e) indicator_nsta_pane_cp_g1

0x5f88,	// (0x000060a7) indicator_nsta_pane_cp_g2

0x5f90,	// (0x000060af) indicator_nsta_pane_cp_g3

0x5f98,	// (0x000060b7) indicator_nsta_pane_cp_g4

0x5f88,	// (0x000060a7) indicator_nsta_pane_cp_g5

0x5f90,	// (0x000060af) indicator_nsta_pane_cp_g6

0x0005,

0xfa70,	// (0x0000fb8f) indicator_nsta_pane_cp_g

0xeddf,	// (0x0000eefe) cell_graphic2_pane_t2_ParamLimits

0xeddf,	// (0x0000eefe) cell_graphic2_pane_t2

0x0001,

0xfd7d,	// (0x0000fe9c) cell_graphic2_pane_t_ParamLimits

0xfd7d,	// (0x0000fe9c) cell_graphic2_pane_t

0xee14,	// (0x0000ef33) cell_graphic2_control_pane_t1

0xc3cc,	// (0x0000c4eb) signal_pane_g3_ParamLimits

0xc3cc,	// (0x0000c4eb) signal_pane_g3

0xc3e0,	// (0x0000c4ff) signal_pane_g4_ParamLimits

0xc3e0,	// (0x0000c4ff) signal_pane_g4

0xa845,	// (0x0000a964) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa845,	// (0x0000a964) cell_ai5_widget_list_row_pane_t3

0xab00,	// (0x0000ac1f) cell_ituss_key_pane_t1_ParamLimits

0xab00,	// (0x0000ac1f) cell_ituss_key_pane_t1

0x38ae,	// (0x000039cd) form_field_data_wide_pane_vc_t2_ParamLimits

0x38ae,	// (0x000039cd) form_field_data_wide_pane_vc_t2

0x38c2,	// (0x000039e1) form_field_data_wide_pane_vc_t3_ParamLimits

0x38c2,	// (0x000039e1) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d3,	// (0x0000f8f2) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d3,	// (0x0000f8f2) form_field_data_wide_pane_vc_t

0x5c29,	// (0x00005d48) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5c29,	// (0x00005d48) form_field_slider_wide_pane_vc_t3

0x5d07,	// (0x00005e26) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5d07,	// (0x00005e26) form_field_popup_wide_pane_vc_t2

0x5d1e,	// (0x00005e3d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5d1e,	// (0x00005e3d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa5f,	// (0x0000fb7e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa5f,	// (0x0000fb7e) form_field_popup_wide_pane_vc_t

0xf0b2,	// (0x0000f1d1) aid_fshwr2_btn_pane_ParamLimits

0xf0c2,	// (0x0000f1e1) aid_fshwr2_syb_pane_ParamLimits

0xf0d6,	// (0x0000f1f5) aid_fshwr2_txt_pane_ParamLimits

0x1277,	// (0x00001396) fshwr2_bg_pane_ParamLimits

0xf0e6,	// (0x0000f205) fshwr2_func_candi_pane_ParamLimits

0xf106,	// (0x0000f225) fshwr2_hwr_syb_pane_ParamLimits

0xf128,	// (0x0000f247) fshwr2_icf_pane_ParamLimits

0x5b8f,	// (0x00005cae) list_double_graphic_pane_vc_g4_ParamLimits

0x5b8f,	// (0x00005cae) list_double_graphic_pane_vc_g4

0xaa9c,	// (0x0000abbb) cell_ituss_key_pane_g3_ParamLimits

0xaa9c,	// (0x0000abbb) cell_ituss_key_pane_g3

0xabe0,	// (0x0000acff) cell_ituss_key_t5_ParamLimits

0xabe0,	// (0x0000acff) cell_ituss_key_t5

0xf310,	// (0x0000f42f) popup_fep_vkbss_window_ParamLimits

0x9b17,	// (0x00009c36) aid_cell_ai5_quarter

0xf4d4,	// (0x0000f5f3) icf_edit_indi_pane_t1_ParamLimits

0x07c4,	// (0x000008e3) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x07c4,	// (0x000008e3) aid_tch_indicator_popup_pane_cp2

0x07d7,	// (0x000008f6) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x07d7,	// (0x000008f6) aid_tch_query_popup_data_pane_cp2

0x3c56,	// (0x00003d75) aid_tch_query_popup_pane_ParamLimits

0x3c56,	// (0x00003d75) aid_tch_query_popup_pane

0x3c56,	// (0x00003d75) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3c56,	// (0x00003d75) aid_tch_query_popup_data_pane_cp1

0x2a6c,	// (0x00002b8b) cell_fshwr2_syb_bg_pane_ParamLimits

0xf257,	// (0x0000f376) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xf26a,	// (0x0000f389) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf301,	// (0x0000f420) popup_fep_vkb_icf_pane_ParamLimits

0xeee4,	// (0x0000f003) bg_popup_fep_char_preview_window_g10

0x9c4c,	// (0x00009d6b) cell_ai5_widget_pane_g11_ParamLimits

0x9c4c,	// (0x00009d6b) cell_ai5_widget_pane_g11

0x9c58,	// (0x00009d77) cell_ai5_widget_pane_g12_ParamLimits

0x9c58,	// (0x00009d77) cell_ai5_widget_pane_g12

0x9c64,	// (0x00009d83) cell_ai5_widget_pane_g13_ParamLimits

0x9c64,	// (0x00009d83) cell_ai5_widget_pane_g13

0x9d93,	// (0x00009eb2) cell_ai5_widget_pane_t11_ParamLimits

0x9d93,	// (0x00009eb2) cell_ai5_widget_pane_t11

0x9da5,	// (0x00009ec4) cell_ai5_widget_pane_t12_ParamLimits

0x9da5,	// (0x00009ec4) cell_ai5_widget_pane_t12

0xaaa8,	// (0x0000abc7) cell_ituss_key_pane_g4_ParamLimits

0xaaa8,	// (0x0000abc7) cell_ituss_key_pane_g4

0xaac4,	// (0x0000abe3) cell_ituss_key_pane_g5_ParamLimits

0xaac4,	// (0x0000abe3) cell_ituss_key_pane_g5

0xaae0,	// (0x0000abff) cell_ituss_key_pane_g6_ParamLimits

0xaae0,	// (0x0000abff) cell_ituss_key_pane_g6

0x35e7,	// (0x00003706) bg_icf_pane_g1

0xf45d,	// (0x0000f57c) bg_icf_pane_g2

0xf467,	// (0x0000f586) bg_icf_pane_g3

0xf46f,	// (0x0000f58e) bg_icf_pane_g4

0xf479,	// (0x0000f598) bg_icf_pane_g5

0xf483,	// (0x0000f5a2) bg_icf_pane_g6

0xf48d,	// (0x0000f5ac) bg_icf_pane_g7

0xf495,	// (0x0000f5b4) bg_icf_pane_g8

0xf49f,	// (0x0000f5be) bg_icf_pane_g9

0x0008,

0xfecd,	// (0x0000ffec) bg_icf_pane_g

0xa8e4,	// (0x0000aa03) popup_hyb_candi_window_ParamLimits

0xa8e4,	// (0x0000aa03) popup_hyb_candi_window

0x3795,	// (0x000038b4) bg_popup_sub_pane_cp01_ParamLimits

0x3795,	// (0x000038b4) bg_popup_sub_pane_cp01

0xad73,	// (0x0000ae92) entry_hyb_candi_pane_ParamLimits

0xad73,	// (0x0000ae92) entry_hyb_candi_pane

0xad82,	// (0x0000aea1) grid_hyb_candi_pane_ParamLimits

0xad82,	// (0x0000aea1) grid_hyb_candi_pane

0xad97,	// (0x0000aeb6) grid_hyb_phrase_pane_ParamLimits

0xad97,	// (0x0000aeb6) grid_hyb_phrase_pane

0xada6,	// (0x0000aec5) cell_hyb_candi_pane_ParamLimits

0xada6,	// (0x0000aec5) cell_hyb_candi_pane

0xadc9,	// (0x0000aee8) cell_hyb_candi_scroll_pane

0x1c55,	// (0x00001d74) cell_hyb_candi_pane_g1

0xadd2,	// (0x0000aef1) cell_hyb_candi_pane_t1

0xade0,	// (0x0000aeff) cell_hyb_phrase_pane

0x1c55,	// (0x00001d74) cell_hyb_phrase_pane_g1

0xade9,	// (0x0000af08) cell_hyb_phrase_pane_t1

0xadf7,	// (0x0000af16) entry_hyb_candi_pane_t1

0x251d,	// (0x0000263c) input_focus_pane_cp06

0xae05,	// (0x0000af24) cell_hyb_candi_scroll_pane_g1

0xae0d,	// (0x0000af2c) cell_hyb_candi_scroll_pane_g1_aid

0xae15,	// (0x0000af34) cell_hyb_candi_scroll_pane_g2

0xae1d,	// (0x0000af3c) cell_hyb_candi_scroll_pane_g2_aid

0xae25,	// (0x0000af44) cell_hyb_candi_scroll_pane_g3

0xae2d,	// (0x0000af4c) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal

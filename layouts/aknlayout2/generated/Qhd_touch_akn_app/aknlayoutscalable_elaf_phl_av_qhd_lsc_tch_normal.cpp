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
0xb46c,	// (0x0000b46c) Screen

0xb478,	// (0x0000b478) application_window_ParamLimits

0xb478,	// (0x0000b478) application_window

0x002e,	// (0x0000002e) screen_g1

0xb4b0,	// (0x0000b4b0) area_bottom_pane_ParamLimits

0xb4b0,	// (0x0000b4b0) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xcb48,	// (0x0000cb48) battery_pane_ParamLimits

0xcb48,	// (0x0000cb48) battery_pane

0x4131,	// (0x00004131) bg_status_flat_pane_g8

0x4139,	// (0x00004139) bg_status_flat_pane_g9

0x327b,	// (0x0000327b) context_pane_ParamLimits

0x327b,	// (0x0000327b) context_pane

0xccb3,	// (0x0000ccb3) navi_pane_ParamLimits

0xccb3,	// (0x0000ccb3) navi_pane

0xcd31,	// (0x0000cd31) signal_pane_ParamLimits

0xcd31,	// (0x0000cd31) signal_pane

0x0008,

0xaddd,	// (0x0000addd) bg_status_flat_pane_g

0xcdc1,	// (0x0000cdc1) status_pane_g1_ParamLimits

0xcdc1,	// (0x0000cdc1) status_pane_g1

0xcdd7,	// (0x0000cdd7) status_pane_g2_ParamLimits

0xcdd7,	// (0x0000cdd7) status_pane_g2

0x34a2,	// (0x000034a2) status_pane_g3_ParamLimits

0x34a2,	// (0x000034a2) status_pane_g3

0x0004,

0xf383,	// (0x0000f383) status_pane_g_ParamLimits

0xf383,	// (0x0000f383) status_pane_g

0xcde3,	// (0x0000cde3) title_pane_ParamLimits

0xcde3,	// (0x0000cde3) title_pane

0xce46,	// (0x0000ce46) uni_indicator_pane_ParamLimits

0xce46,	// (0x0000ce46) uni_indicator_pane

0x2b16,	// (0x00002b16) bg_list_pane_ParamLimits

0x2b16,	// (0x00002b16) bg_list_pane

0xc3f5,	// (0x0000c3f5) find_pane

0xc3fd,	// (0x0000c3fd) listscroll_app_pane_ParamLimits

0xc3fd,	// (0x0000c3fd) listscroll_app_pane

0x2b4a,	// (0x00002b4a) listscroll_form_pane

0xc40d,	// (0x0000c40d) listscroll_gen_pane_ParamLimits

0xc40d,	// (0x0000c40d) listscroll_gen_pane

0x2b66,	// (0x00002b66) listscroll_set_pane

0x4f03,	// (0x00004f03) main_idle_act_pane

0x2607,	// (0x00002607) main_idle_trad_pane

0x2607,	// (0x00002607) main_list_empty_pane

0x2b80,	// (0x00002b80) main_midp_pane

0x2b8c,	// (0x00002b8c) main_pane_g1_ParamLimits

0x2b8c,	// (0x00002b8c) main_pane_g1

0xc421,	// (0x0000c421) popup_ai_message_window_ParamLimits

0xc421,	// (0x0000c421) popup_ai_message_window

0xc4b2,	// (0x0000c4b2) popup_fep_china_uni_window_ParamLimits

0xc4b2,	// (0x0000c4b2) popup_fep_china_uni_window

0x2ca4,	// (0x00002ca4) popup_fep_japan_candidate_window_ParamLimits

0x2ca4,	// (0x00002ca4) popup_fep_japan_candidate_window

0x2cc4,	// (0x00002cc4) popup_fep_japan_predictive_window_ParamLimits

0x2cc4,	// (0x00002cc4) popup_fep_japan_predictive_window

0xc50e,	// (0x0000c50e) popup_find_window

0xc52b,	// (0x0000c52b) popup_grid_graphic_window_ParamLimits

0xc52b,	// (0x0000c52b) popup_grid_graphic_window

0x2d29,	// (0x00002d29) popup_large_graphic_colour_window

0xc5c3,	// (0x0000c5c3) popup_menu_window_ParamLimits

0xc5c3,	// (0x0000c5c3) popup_menu_window

0xc795,	// (0x0000c795) popup_note_image_window

0xc75b,	// (0x0000c75b) popup_note_wait_window_ParamLimits

0xc75b,	// (0x0000c75b) popup_note_wait_window

0xc7ad,	// (0x0000c7ad) popup_note_window_ParamLimits

0xc7ad,	// (0x0000c7ad) popup_note_window

0xc853,	// (0x0000c853) popup_query_code_window_ParamLimits

0xc853,	// (0x0000c853) popup_query_code_window

0x2f71,	// (0x00002f71) popup_query_data_code_window_ParamLimits

0x2f71,	// (0x00002f71) popup_query_data_code_window

0xc88d,	// (0x0000c88d) popup_query_data_window_ParamLimits

0xc88d,	// (0x0000c88d) popup_query_data_window

0xc90f,	// (0x0000c90f) popup_query_sat_info_window_ParamLimits

0xc90f,	// (0x0000c90f) popup_query_sat_info_window

0xc9a6,	// (0x0000c9a6) popup_snote_single_graphic_window_ParamLimits

0xc9a6,	// (0x0000c9a6) popup_snote_single_graphic_window

0xc9a6,	// (0x0000c9a6) popup_snote_single_text_window_ParamLimits

0xc9a6,	// (0x0000c9a6) popup_snote_single_text_window

0x2ff8,	// (0x00002ff8) popup_sub_window_general

0x3128,	// (0x00003128) popup_window_general_ParamLimits

0x3128,	// (0x00003128) popup_window_general

0x313d,	// (0x0000313d) power_save_pane

0xc25d,	// (0x0000c25d) control_pane_g1_ParamLimits

0xc25d,	// (0x0000c25d) control_pane_g1

0xc286,	// (0x0000c286) control_pane_g2_ParamLimits

0xc286,	// (0x0000c286) control_pane_g2

0x29bb,	// (0x000029bb) control_pane_g3_ParamLimits

0x29bb,	// (0x000029bb) control_pane_g3

0x0007,

0xf36b,	// (0x0000f36b) control_pane_g_ParamLimits

0xf36b,	// (0x0000f36b) control_pane_g

0xc2ee,	// (0x0000c2ee) control_pane_t1_ParamLimits

0xc2ee,	// (0x0000c2ee) control_pane_t1

0xc34c,	// (0x0000c34c) control_pane_t2_ParamLimits

0xc34c,	// (0x0000c34c) control_pane_t2

0x0002,

0xf37c,	// (0x0000f37c) control_pane_t_ParamLimits

0xf37c,	// (0x0000f37c) control_pane_t

0x288e,	// (0x0000288e) navi_navi_volume_pane_cp1

0x2897,	// (0x00002897) status_small_icon_pane

0x289f,	// (0x0000289f) status_small_pane_g1_ParamLimits

0x289f,	// (0x0000289f) status_small_pane_g1

0x28d3,	// (0x000028d3) status_small_pane_g2_ParamLimits

0x28d3,	// (0x000028d3) status_small_pane_g2

0x28df,	// (0x000028df) status_small_pane_g3_ParamLimits

0x28df,	// (0x000028df) status_small_pane_g3

0x28eb,	// (0x000028eb) status_small_pane_g4_ParamLimits

0x28eb,	// (0x000028eb) status_small_pane_g4

0x28f7,	// (0x000028f7) status_small_pane_g5_ParamLimits

0x28f7,	// (0x000028f7) status_small_pane_g5

0x2906,	// (0x00002906) status_small_pane_g6_ParamLimits

0x2906,	// (0x00002906) status_small_pane_g6

0x0007,

0xace2,	// (0x0000ace2) status_small_pane_g_ParamLimits

0xace2,	// (0x0000ace2) status_small_pane_g

0x2936,	// (0x00002936) status_small_pane_t1

0x2959,	// (0x00002959) status_small_wait_pane_ParamLimits

0x2959,	// (0x00002959) status_small_wait_pane

0xc080,	// (0x0000c080) aid_levels_signal_ParamLimits

0xc080,	// (0x0000c080) aid_levels_signal

0xc098,	// (0x0000c098) signal_pane_g1_ParamLimits

0xc098,	// (0x0000c098) signal_pane_g1

0xc0b3,	// (0x0000c0b3) signal_pane_g2_ParamLimits

0xc0b3,	// (0x0000c0b3) signal_pane_g2

0x0003,

0xf346,	// (0x0000f346) signal_pane_g_ParamLimits

0xf346,	// (0x0000f346) signal_pane_g

0x1eb9,	// (0x00001eb9) context_pane_g1

0xb68e,	// (0x0000b68e) title_pane_g1

0xb6c5,	// (0x0000b6c5) title_pane_t1

0x04cf,	// (0x000004cf) title_pane_t2

0x04f5,	// (0x000004f5) title_pane_t3

0x0002,

0xf273,	// (0x0000f273) title_pane_t

0xce6e,	// (0x0000ce6e) aid_levels_battery_ParamLimits

0xce6e,	// (0x0000ce6e) aid_levels_battery

0xce8a,	// (0x0000ce8a) battery_pane_g1_ParamLimits

0xce8a,	// (0x0000ce8a) battery_pane_g1

0xcea7,	// (0x0000cea7) battery_pane_g2_ParamLimits

0xcea7,	// (0x0000cea7) battery_pane_g2

0x0001,

0xf38e,	// (0x0000f38e) battery_pane_g_ParamLimits

0xf38e,	// (0x0000f38e) battery_pane_g

0xd0ff,	// (0x0000d0ff) uni_indicator_pane_g1

0xd116,	// (0x0000d116) uni_indicator_pane_g2

0xd12c,	// (0x0000d12c) uni_indicator_pane_g3

0x0005,

0xf3c5,	// (0x0000f3c5) uni_indicator_pane_g

0x2479,	// (0x00002479) navi_icon_pane_ParamLimits

0x2479,	// (0x00002479) navi_icon_pane

0x23c2,	// (0x000023c2) navi_midp_pane

0x2495,	// (0x00002495) navi_navi_pane

0x249f,	// (0x0000249f) navi_text_pane_ParamLimits

0x249f,	// (0x0000249f) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09cf,	// (0x000009cf) status_small_wait_pane_g2

0x0001,

0xae80,	// (0x0000ae80) status_small_wait_pane_g

0x48f0,	// (0x000048f0) navi_navi_icon_text_pane

0x48f8,	// (0x000048f8) navi_navi_pane_g1_ParamLimits

0x48f8,	// (0x000048f8) navi_navi_pane_g1

0x490a,	// (0x0000490a) navi_navi_pane_g2_ParamLimits

0x490a,	// (0x0000490a) navi_navi_pane_g2

0x0001,

0xae4e,	// (0x0000ae4e) navi_navi_pane_g_ParamLimits

0xae4e,	// (0x0000ae4e) navi_navi_pane_g

0x491c,	// (0x0000491c) navi_navi_tabs_pane

0x4925,	// (0x00004925) navi_navi_text_pane

0x48f0,	// (0x000048f0) navi_navi_volume_pane

0x48cc,	// (0x000048cc) navi_text_pane_t1

0x48c0,	// (0x000048c0) navi_icon_pane_g1

0x4813,	// (0x00004813) navi_navi_text_pane_t1

0x4802,	// (0x00004802) navi_navi_volume_pane_g1

0x480a,	// (0x0000480a) volume_small_pane

0x4768,	// (0x00004768) navi_navi_icon_text_pane_g1

0x4770,	// (0x00004770) navi_navi_icon_text_pane_t1

0x2495,	// (0x00002495) navi_tabs_2_long_pane

0x2495,	// (0x00002495) navi_tabs_2_pane

0x2495,	// (0x00002495) navi_tabs_3_long_pane

0x2495,	// (0x00002495) navi_tabs_3_pane

0x2495,	// (0x00002495) navi_tabs_4_pane

0x46c7,	// (0x000046c7) tabs_2_active_pane_ParamLimits

0x46c7,	// (0x000046c7) tabs_2_active_pane

0x46d7,	// (0x000046d7) tabs_2_passive_pane_ParamLimits

0x46d7,	// (0x000046d7) tabs_2_passive_pane

0x4695,	// (0x00004695) tabs_3_active_pane_ParamLimits

0x4695,	// (0x00004695) tabs_3_active_pane

0x46a5,	// (0x000046a5) tabs_3_passive_pane_ParamLimits

0x46a5,	// (0x000046a5) tabs_3_passive_pane

0x46b6,	// (0x000046b6) tabs_3_passive_pane_cp_ParamLimits

0x46b6,	// (0x000046b6) tabs_3_passive_pane_cp

0x4651,	// (0x00004651) tabs_4_active_pane_ParamLimits

0x4651,	// (0x00004651) tabs_4_active_pane

0x4662,	// (0x00004662) tabs_4_passive_pane_ParamLimits

0x4662,	// (0x00004662) tabs_4_passive_pane

0x4673,	// (0x00004673) tabs_4_passive_pane_cp_ParamLimits

0x4673,	// (0x00004673) tabs_4_passive_pane_cp

0x4684,	// (0x00004684) tabs_4_passive_pane_cp2_ParamLimits

0x4684,	// (0x00004684) tabs_4_passive_pane_cp2

0x462d,	// (0x0000462d) tabs_2_long_active_pane_ParamLimits

0x462d,	// (0x0000462d) tabs_2_long_active_pane

0x463f,	// (0x0000463f) tabs_2_long_passive_pane_ParamLimits

0x463f,	// (0x0000463f) tabs_2_long_passive_pane

0x45ee,	// (0x000045ee) tabs_3_long_active_pane_ParamLimits

0x45ee,	// (0x000045ee) tabs_3_long_active_pane

0x4601,	// (0x00004601) tabs_3_long_passive_pane_ParamLimits

0x4601,	// (0x00004601) tabs_3_long_passive_pane

0x461a,	// (0x0000461a) tabs_3_long_passive_pane_cp_ParamLimits

0x461a,	// (0x0000461a) tabs_3_long_passive_pane_cp

0x4594,	// (0x00004594) volume_small_pane_g1

0x459d,	// (0x0000459d) volume_small_pane_g2

0x45a6,	// (0x000045a6) volume_small_pane_g3

0x45af,	// (0x000045af) volume_small_pane_g4

0x45b8,	// (0x000045b8) volume_small_pane_g5

0x45c1,	// (0x000045c1) volume_small_pane_g6

0x45ca,	// (0x000045ca) volume_small_pane_g7

0x45d3,	// (0x000045d3) volume_small_pane_g8

0x45dc,	// (0x000045dc) volume_small_pane_g9

0x45e5,	// (0x000045e5) volume_small_pane_g10

0x0009,

0xae1a,	// (0x0000ae1a) volume_small_pane_g

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_active_pane_g1

0xb751,	// (0x0000b751) tabs_3_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_passive_pane_g1

0xb751,	// (0x0000b751) tabs_3_passive_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_active_pane_g1

0xb763,	// (0x0000b763) tabs_4_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_1_passive_pane_g1

0xb763,	// (0x0000b763) tabs_4_1_passive_pane_t1

0x2b80,	// (0x00002b80) list_highlight_pane_cp2

0xd1c6,	// (0x0000d1c6) list_set_pane_ParamLimits

0xd1c6,	// (0x0000d1c6) list_set_pane

0xd260,	// (0x0000d260) main_pane_set_t1_ParamLimits

0xd260,	// (0x0000d260) main_pane_set_t1

0xd280,	// (0x0000d280) main_pane_set_t2_ParamLimits

0xd280,	// (0x0000d280) main_pane_set_t2

0xd294,	// (0x0000d294) main_pane_set_t3_ParamLimits

0xd294,	// (0x0000d294) main_pane_set_t3

0xd2a6,	// (0x0000d2a6) main_pane_set_t4_ParamLimits

0xd2a6,	// (0x0000d2a6) main_pane_set_t4

0x0003,

0xf3d7,	// (0x0000f3d7) main_pane_set_t_ParamLimits

0xf3d7,	// (0x0000f3d7) main_pane_set_t

0xd2b8,	// (0x0000d2b8) setting_code_pane

0xd2c2,	// (0x0000d2c2) setting_slider_graphic_pane

0xd2c2,	// (0x0000d2c2) setting_slider_pane

0xd2c2,	// (0x0000d2c2) setting_text_pane

0xd2c2,	// (0x0000d2c2) setting_volume_pane

0x0549,	// (0x00000549) volume_set_pane

0x0507,	// (0x00000507) bg_set_opt_pane_cp

0x0551,	// (0x00000551) setting_slider_pane_t1

0x056a,	// (0x0000056a) setting_slider_pane_t2

0x0584,	// (0x00000584) setting_slider_pane_t3

0x0002,

0xaace,	// (0x0000aace) setting_slider_pane_t

0x059c,	// (0x0000059c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_g1

0x05bb,	// (0x000005bb) setting_slider_graphic_pane_t1

0x05cb,	// (0x000005cb) setting_slider_graphic_pane_t2

0x0001,

0xaad5,	// (0x0000aad5) setting_slider_graphic_pane_t

0x05db,	// (0x000005db) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4eea,	// (0x00004eea) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05e3,	// (0x000005e3) setting_code_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_ParamLimits

0x05f1,	// (0x000005f1) set_text_pane_t1

0x14c2,	// (0x000014c2) set_opt_bg_pane_g1

0x14ca,	// (0x000014ca) set_opt_bg_pane_g2

0x4ec4,	// (0x00004ec4) set_opt_bg_pane_g3

0x14da,	// (0x000014da) set_opt_bg_pane_g4

0x14e2,	// (0x000014e2) set_opt_bg_pane_g5

0x14ea,	// (0x000014ea) set_opt_bg_pane_g6

0x4ece,	// (0x00004ece) set_opt_bg_pane_g7

0x4ed6,	// (0x00004ed6) set_opt_bg_pane_g8

0x4ee0,	// (0x00004ee0) set_opt_bg_pane_g9

0x0008,

0xaed7,	// (0x0000aed7) set_opt_bg_pane_g

0x4e53,	// (0x00004e53) slider_set_pane_g1

0x4e60,	// (0x00004e60) slider_set_pane_g2

0x0006,

0xaec8,	// (0x0000aec8) slider_set_pane_g

0x4cd3,	// (0x00004cd3) volume_set_pane_g1

0x4cdb,	// (0x00004cdb) volume_set_pane_g2

0x4ce3,	// (0x00004ce3) volume_set_pane_g3

0x4ceb,	// (0x00004ceb) volume_set_pane_g4

0x4cf3,	// (0x00004cf3) volume_set_pane_g5

0x4cfb,	// (0x00004cfb) volume_set_pane_g6

0x4d03,	// (0x00004d03) volume_set_pane_g7

0x4d0b,	// (0x00004d0b) volume_set_pane_g8

0x4d13,	// (0x00004d13) volume_set_pane_g9

0x4d1b,	// (0x00004d1b) volume_set_pane_g10

0x0009,

0xaea0,	// (0x0000aea0) volume_set_pane_g

0xb775,	// (0x0000b775) indicator_pane_ParamLimits

0xb775,	// (0x0000b775) indicator_pane

0xb79d,	// (0x0000b79d) main_idle_pane_g2_ParamLimits

0xb79d,	// (0x0000b79d) main_idle_pane_g2

0xb7d5,	// (0x0000b7d5) main_pane_idle_g1_ParamLimits

0xb7d5,	// (0x0000b7d5) main_pane_idle_g1

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window_ParamLimits

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window

0xb7fc,	// (0x0000b7fc) soft_indicator_pane_ParamLimits

0xb7fc,	// (0x0000b7fc) soft_indicator_pane

0xb816,	// (0x0000b816) wallpaper_pane_ParamLimits

0xb816,	// (0x0000b816) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb828,	// (0x0000b828) indicator_pane_g1_ParamLimits

0xb828,	// (0x0000b828) indicator_pane_g1

0x5428,	// (0x00005428) navi_navi_icon_text_pane_srt_g1

0x069e,	// (0x0000069e) soft_indicator_pane_t1

0x06b8,	// (0x000006b8) aid_ps_area_pane

0xb83e,	// (0x0000b83e) aid_ps_clock_pane

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

0xaada,	// (0x0000aada) power_save_pane_g_ParamLimits

0xaada,	// (0x0000aada) power_save_pane_g

0x070c,	// (0x0000070c) power_save_pane_t1_ParamLimits

0x070c,	// (0x0000070c) power_save_pane_t1

0xb83e,	// (0x0000b83e) aid_ps_clock_pane_ParamLimits

0x06d7,	// (0x000006d7) aid_ps_indicator_pane_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4

0x0001,

0xaadf,	// (0x0000aadf) power_save_pane_t_ParamLimits

0xaadf,	// (0x0000aadf) power_save_pane_t

0x0748,	// (0x00000748) power_save_t3_ParamLimits

0x0748,	// (0x00000748) power_save_t3

0x0733,	// (0x00000733) power_save_t2_ParamLimits

0x0733,	// (0x00000733) power_save_t2

0x075d,	// (0x0000075d) indicator_ps_pane_g1

0xb84c,	// (0x0000b84c) ai_gene_pane_ParamLimits

0xb84c,	// (0x0000b84c) ai_gene_pane

0xb863,	// (0x0000b863) ai_links_pane_ParamLimits

0xb863,	// (0x0000b863) ai_links_pane

0xb87b,	// (0x0000b87b) indicator_pane_cp1_ParamLimits

0xb87b,	// (0x0000b87b) indicator_pane_cp1

0xb88a,	// (0x0000b88a) main_pane_idle_g1_cp_ParamLimits

0xb88a,	// (0x0000b88a) main_pane_idle_g1_cp

0x0796,	// (0x00000796) popup_ai_links_title_window

0xb8a2,	// (0x0000b8a2) soft_indicator_pane_cp1_ParamLimits

0xb8a2,	// (0x0000b8a2) soft_indicator_pane_cp1

0x4bb9,	// (0x00004bb9) ai_links_pane_g1

0x4bc2,	// (0x00004bc2) grid_ai_links_pane

0xd0f6,	// (0x0000d0f6) ai_gene_pane_1

0x4ba7,	// (0x00004ba7) ai_gene_pane_2

0x4bb0,	// (0x00004bb0) list_highlight_pane_cp4

0xd0d2,	// (0x0000d0d2) cell_ai_link_pane_ParamLimits

0xd0d2,	// (0x0000d0d2) cell_ai_link_pane

0x4b78,	// (0x00004b78) cell_ai_link_pane_g1

0x09cf,	// (0x000009cf) cell_ai_link_pane_g2

0x0001,

0xae7b,	// (0x0000ae7b) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07b9,	// (0x000007b9) popup_ai_links_title_window_t1

0x4ac6,	// (0x00004ac6) ai_gene_pane_1_g1_ParamLimits

0x4ac6,	// (0x00004ac6) ai_gene_pane_1_g1

0x4ad2,	// (0x00004ad2) ai_gene_pane_1_g2_ParamLimits

0x4ad2,	// (0x00004ad2) ai_gene_pane_1_g2

0x0001,

0xae71,	// (0x0000ae71) ai_gene_pane_1_g_ParamLimits

0xae71,	// (0x0000ae71) ai_gene_pane_1_g

0x4adf,	// (0x00004adf) ai_gene_pane_1_t1_ParamLimits

0x4adf,	// (0x00004adf) ai_gene_pane_1_t1

0x4b13,	// (0x00004b13) grid_ai_soft_ind_pane

0x4ab1,	// (0x00004ab1) ai_gene_pane_2_t1_ParamLimits

0x4ab1,	// (0x00004ab1) ai_gene_pane_2_t1

0xb8b6,	// (0x0000b8b6) main_pane_empty_t1_ParamLimits

0xb8b6,	// (0x0000b8b6) main_pane_empty_t1

0xb8ce,	// (0x0000b8ce) main_pane_empty_t2_ParamLimits

0xb8ce,	// (0x0000b8ce) main_pane_empty_t2

0xb8e3,	// (0x0000b8e3) main_pane_empty_t3_ParamLimits

0xb8e3,	// (0x0000b8e3) main_pane_empty_t3

0xb8f5,	// (0x0000b8f5) main_pane_empty_t4_ParamLimits

0xb8f5,	// (0x0000b8f5) main_pane_empty_t4

0xb907,	// (0x0000b907) main_pane_empty_t5_ParamLimits

0xb907,	// (0x0000b907) main_pane_empty_t5

0x0004,

0xf27a,	// (0x0000f27a) main_pane_empty_t_ParamLimits

0xf27a,	// (0x0000f27a) main_pane_empty_t

0x15bf,	// (0x000015bf) bg_popup_window_pane_ParamLimits

0x15bf,	// (0x000015bf) bg_popup_window_pane

0x4821,	// (0x00004821) find_popup_pane_cp2_ParamLimits

0x4821,	// (0x00004821) find_popup_pane_cp2

0x482d,	// (0x0000482d) heading_pane_ParamLimits

0x482d,	// (0x0000482d) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd053,	// (0x0000d053) bg_popup_window_pane_g1_ParamLimits

0xd053,	// (0x0000d053) bg_popup_window_pane_g1

0xd062,	// (0x0000d062) bg_popup_window_pane_g2_ParamLimits

0xd062,	// (0x0000d062) bg_popup_window_pane_g2

0xd06e,	// (0x0000d06e) bg_popup_window_pane_g3_ParamLimits

0xd06e,	// (0x0000d06e) bg_popup_window_pane_g3

0xd07a,	// (0x0000d07a) bg_popup_window_pane_g4_ParamLimits

0xd07a,	// (0x0000d07a) bg_popup_window_pane_g4

0xd089,	// (0x0000d089) bg_popup_window_pane_g5_ParamLimits

0xd089,	// (0x0000d089) bg_popup_window_pane_g5

0xd099,	// (0x0000d099) bg_popup_window_pane_g6_ParamLimits

0xd099,	// (0x0000d099) bg_popup_window_pane_g6

0xd0a5,	// (0x0000d0a5) bg_popup_window_pane_g7_ParamLimits

0xd0a5,	// (0x0000d0a5) bg_popup_window_pane_g7

0xd0b4,	// (0x0000d0b4) bg_popup_window_pane_g8_ParamLimits

0xd0b4,	// (0x0000d0b4) bg_popup_window_pane_g8

0xd0c3,	// (0x0000d0c3) bg_popup_window_pane_g9_ParamLimits

0xd0c3,	// (0x0000d0c3) bg_popup_window_pane_g9

0x47f6,	// (0x000047f6) bg_popup_window_pane_g10_ParamLimits

0x47f6,	// (0x000047f6) bg_popup_window_pane_g10

0x0009,

0xf3b0,	// (0x0000f3b0) bg_popup_window_pane_g_ParamLimits

0xf3b0,	// (0x0000f3b0) bg_popup_window_pane_g

0x471f,	// (0x0000471f) bg_popup_heading_pane_ParamLimits

0x471f,	// (0x0000471f) bg_popup_heading_pane

0x536b,	// (0x0000536b) tabs_4_passive_pane_cp_srt_ParamLimits

0x536b,	// (0x0000536b) tabs_4_passive_pane_cp_srt

0x537d,	// (0x0000537d) tabs_4_passive_pane_srt_ParamLimits

0x4733,	// (0x00004733) heading_pane_g2

0x537d,	// (0x0000537d) tabs_4_passive_pane_srt

0x388d,	// (0x0000388d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x388d,	// (0x0000388d) bg_passive_tab_pane_cp3_srt

0x473b,	// (0x0000473b) heading_pane_t1_ParamLimits

0x473b,	// (0x0000473b) heading_pane_t1

0x4752,	// (0x00004752) heading_pane_t2_ParamLimits

0x4752,	// (0x00004752) heading_pane_t2

0x0001,

0xae34,	// (0x0000ae34) heading_pane_t_ParamLimits

0xae34,	// (0x0000ae34) heading_pane_t

0x40f9,	// (0x000040f9) bg_popup_heading_pane_g1

0x41a8,	// (0x000041a8) bg_popup_heading_pane_g2

0x41b2,	// (0x000041b2) bg_popup_heading_pane_g3

0x41bc,	// (0x000041bc) bg_popup_heading_pane_g4

0x41c6,	// (0x000041c6) bg_popup_heading_pane_g5

0x41d0,	// (0x000041d0) bg_popup_heading_pane_g6

0x41d8,	// (0x000041d8) bg_popup_heading_pane_g7

0x41e0,	// (0x000041e0) bg_popup_heading_pane_g8

0x41ea,	// (0x000041ea) bg_popup_heading_pane_g9

0x0008,

0xadf0,	// (0x0000adf0) bg_popup_heading_pane_g

0x36d3,	// (0x000036d3) bg_popup_sub_pane_g1

0x36db,	// (0x000036db) bg_popup_sub_pane_g2

0x36e3,	// (0x000036e3) bg_popup_sub_pane_g3

0x36eb,	// (0x000036eb) bg_popup_sub_pane_g4

0x36f3,	// (0x000036f3) bg_popup_sub_pane_g5

0x36fb,	// (0x000036fb) bg_popup_sub_pane_g6

0x3703,	// (0x00003703) bg_popup_sub_pane_g7

0x370b,	// (0x0000370b) bg_popup_sub_pane_g8

0x3713,	// (0x00003713) bg_popup_sub_pane_g9

0x0008,

0xadca,	// (0x0000adca) bg_popup_sub_pane_g

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

0xaaef,	// (0x0000aaef) popup_note_window_t_ParamLimits

0xaaef,	// (0x0000aaef) popup_note_window_t

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp6_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp6

0x4075,	// (0x00004075) popup_note_image_window_g1_ParamLimits

0x4075,	// (0x00004075) popup_note_image_window_g1

0x4081,	// (0x00004081) popup_note_image_window_g2_ParamLimits

0x4081,	// (0x00004081) popup_note_image_window_g2

0x0001,

0xadbe,	// (0x0000adbe) popup_note_image_window_g_ParamLimits

0xadbe,	// (0x0000adbe) popup_note_image_window_g

0x409a,	// (0x0000409a) popup_note_image_window_t1_ParamLimits

0x409a,	// (0x0000409a) popup_note_image_window_t1

0x40b3,	// (0x000040b3) popup_note_image_window_t2_ParamLimits

0x40b3,	// (0x000040b3) popup_note_image_window_t2

0x40cc,	// (0x000040cc) popup_note_image_window_t3_ParamLimits

0x40cc,	// (0x000040cc) popup_note_image_window_t3

0x0002,

0xadc3,	// (0x0000adc3) popup_note_image_window_t_ParamLimits

0xadc3,	// (0x0000adc3) popup_note_image_window_t

0x3f36,	// (0x00003f36) bg_popup_window_pane_cp7_ParamLimits

0x3f36,	// (0x00003f36) bg_popup_window_pane_cp7

0x3f66,	// (0x00003f66) popup_note_wait_window_g1_ParamLimits

0x3f66,	// (0x00003f66) popup_note_wait_window_g1

0x3f72,	// (0x00003f72) popup_note_wait_window_g2_ParamLimits

0x3f72,	// (0x00003f72) popup_note_wait_window_g2

0x0002,

0xadac,	// (0x0000adac) popup_note_wait_window_g_ParamLimits

0xadac,	// (0x0000adac) popup_note_wait_window_g

0x3f8a,	// (0x00003f8a) popup_note_wait_window_t1_ParamLimits

0x3f8a,	// (0x00003f8a) popup_note_wait_window_t1

0x3fb1,	// (0x00003fb1) popup_note_wait_window_t2_ParamLimits

0x3fb1,	// (0x00003fb1) popup_note_wait_window_t2

0x3fce,	// (0x00003fce) popup_note_wait_window_t3_ParamLimits

0x3fce,	// (0x00003fce) popup_note_wait_window_t3

0x3fe1,	// (0x00003fe1) popup_note_wait_window_t4_ParamLimits

0x3fe1,	// (0x00003fe1) popup_note_wait_window_t4

0x0004,

0xadb3,	// (0x0000adb3) popup_note_wait_window_t_ParamLimits

0xadb3,	// (0x0000adb3) popup_note_wait_window_t

0x4006,	// (0x00004006) wait_bar_pane_ParamLimits

0x4006,	// (0x00004006) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xac6e,	// (0x0000ac6e) wait_anim_pane_g

0x3eda,	// (0x00003eda) wait_border_pane_g1

0x3ee5,	// (0x00003ee5) wait_border_pane_g2

0x3eee,	// (0x00003eee) wait_border_pane_g3

0x0002,

0xada5,	// (0x0000ada5) wait_border_pane_g

0x3d45,	// (0x00003d45) bg_popup_window_pane_cp16_ParamLimits

0x3d45,	// (0x00003d45) bg_popup_window_pane_cp16

0x3e45,	// (0x00003e45) indicator_popup_pane_cp4_ParamLimits

0x3e45,	// (0x00003e45) indicator_popup_pane_cp4

0x3e59,	// (0x00003e59) popup_query_data_window_t1_ParamLimits

0x3e59,	// (0x00003e59) popup_query_data_window_t1

0x3e6b,	// (0x00003e6b) popup_query_data_window_t2_ParamLimits

0x3e6b,	// (0x00003e6b) popup_query_data_window_t2

0x3e84,	// (0x00003e84) popup_query_data_window_t3_ParamLimits

0x3e84,	// (0x00003e84) popup_query_data_window_t3

0x0002,

0xad9e,	// (0x0000ad9e) popup_query_data_window_t_ParamLimits

0xad9e,	// (0x0000ad9e) popup_query_data_window_t

0x3e9e,	// (0x00003e9e) query_popup_data_pane_ParamLimits

0x3e9e,	// (0x00003e9e) query_popup_data_pane

0x3eb2,	// (0x00003eb2) query_popup_data_pane_cp1_ParamLimits

0x3eb2,	// (0x00003eb2) query_popup_data_pane_cp1

0x3d45,	// (0x00003d45) bg_popup_window_pane_cp10_ParamLimits

0x3d45,	// (0x00003d45) bg_popup_window_pane_cp10

0x3d77,	// (0x00003d77) indicator_popup_pane_ParamLimits

0x3d77,	// (0x00003d77) indicator_popup_pane

0x3d99,	// (0x00003d99) popup_query_code_window_t1_ParamLimits

0x3d99,	// (0x00003d99) popup_query_code_window_t1

0x3db3,	// (0x00003db3) popup_query_code_window_t2_ParamLimits

0x3db3,	// (0x00003db3) popup_query_code_window_t2

0x3dfc,	// (0x00003dfc) popup_query_code_window_t3_ParamLimits

0x3dfc,	// (0x00003dfc) popup_query_code_window_t3

0x0002,

0xad97,	// (0x0000ad97) popup_query_code_window_t_ParamLimits

0xad97,	// (0x0000ad97) popup_query_code_window_t

0x3e2b,	// (0x00003e2b) query_popup_pane_ParamLimits

0x3e2b,	// (0x00003e2b) query_popup_pane

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

0xaafa,	// (0x0000aafa) popup_query_data_code_window_t_ParamLimits

0xaafa,	// (0x0000aafa) popup_query_data_code_window_t

0x3740,	// (0x00003740) list_single_midp_graphic_pane_g3

0x098c,	// (0x0000098c) query_popup_data_pane_cp2_ParamLimits

0x099f,	// (0x0000099f) query_popup_pane_cp2_ParamLimits

0x099f,	// (0x0000099f) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3d3d,	// (0x00003d3d) heading_pane_cp5

0x0a87,	// (0x00000a87) listscroll_popup_info_pane

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

0xab03,	// (0x0000ab03) popup_info_list_pane_t_ParamLimits

0xab03,	// (0x0000ab03) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x545f,	// (0x0000545f) find_popup_pane

0x0507,	// (0x00000507) bg_popup_window_pane_cp3

0x0a15,	// (0x00000a15) heading_pane_cp3

0x0a21,	// (0x00000a21) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb969,	// (0x0000b969) heading_pane_cp4

0x0a87,	// (0x00000a87) listscroll_popup_colour_pane

0x0a8f,	// (0x00000a8f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a8f,	// (0x00000a8f) cell_large_graphic_colour_none_popup_pane

0xb971,	// (0x0000b971) grid_large_graphic_colour_popup_pane_ParamLimits

0xb971,	// (0x0000b971) grid_large_graphic_colour_popup_pane

0x0acf,	// (0x00000acf) listscroll_popup_colour_pane_g1_ParamLimits

0x0acf,	// (0x00000acf) listscroll_popup_colour_pane_g1

0x0ae6,	// (0x00000ae6) listscroll_popup_colour_pane_g2_ParamLimits

0x0ae6,	// (0x00000ae6) listscroll_popup_colour_pane_g2

0x0afd,	// (0x00000afd) listscroll_popup_colour_pane_g3_ParamLimits

0x0afd,	// (0x00000afd) listscroll_popup_colour_pane_g3

0xb995,	// (0x0000b995) listscroll_popup_colour_pane_g4_ParamLimits

0xb995,	// (0x0000b995) listscroll_popup_colour_pane_g4

0x0003,

0xf285,	// (0x0000f285) listscroll_popup_colour_pane_g_ParamLimits

0xf285,	// (0x0000f285) listscroll_popup_colour_pane_g

0x0b21,	// (0x00000b21) scroll_pane_cp6_ParamLimits

0x0b21,	// (0x00000b21) scroll_pane_cp6

0xb9a5,	// (0x0000b9a5) cell_large_graphic_colour_popup_pane_ParamLimits

0xb9a5,	// (0x0000b9a5) cell_large_graphic_colour_popup_pane

0x0b52,	// (0x00000b52) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b61,	// (0x00000b61) cell_large_graphic_colour_popup_pane_g1

0x0b69,	// (0x00000b69) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xab11,	// (0x0000ab11) cell_large_graphic_colour_popup_pane_g

0x0b71,	// (0x00000b71) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b7a,	// (0x00000b7a) grid_highlight_pane_cp4

0x0b82,	// (0x00000b82) bg_popup_window_pane_cp8_ParamLimits

0x0b82,	// (0x00000b82) bg_popup_window_pane_cp8

0x0b9d,	// (0x00000b9d) popup_snote_single_text_window_g1_ParamLimits

0x0b9d,	// (0x00000b9d) popup_snote_single_text_window_g1

0x0baf,	// (0x00000baf) popup_snote_single_text_window_t1_ParamLimits

0x0baf,	// (0x00000baf) popup_snote_single_text_window_t1

0x0bc2,	// (0x00000bc2) popup_snote_single_text_window_t2_ParamLimits

0x0bc2,	// (0x00000bc2) popup_snote_single_text_window_t2

0x0bd5,	// (0x00000bd5) popup_snote_single_text_window_t3_ParamLimits

0x0bd5,	// (0x00000bd5) popup_snote_single_text_window_t3

0x0c0e,	// (0x00000c0e) popup_snote_single_text_window_t4_ParamLimits

0x0c0e,	// (0x00000c0e) popup_snote_single_text_window_t4

0x0c42,	// (0x00000c42) popup_snote_single_text_window_t5_ParamLimits

0x0c42,	// (0x00000c42) popup_snote_single_text_window_t5

0x0004,

0xab16,	// (0x0000ab16) popup_snote_single_text_window_t_ParamLimits

0xab16,	// (0x0000ab16) popup_snote_single_text_window_t

0x0c71,	// (0x00000c71) bg_popup_window_pane_cp9_ParamLimits

0x0c71,	// (0x00000c71) bg_popup_window_pane_cp9

0x0b9d,	// (0x00000b9d) popup_snote_single_graphic_window_g1_ParamLimits

0x0b9d,	// (0x00000b9d) popup_snote_single_graphic_window_g1

0x0c7f,	// (0x00000c7f) popup_snote_single_graphic_window_g2_ParamLimits

0x0c7f,	// (0x00000c7f) popup_snote_single_graphic_window_g2

0x0001,

0xab21,	// (0x0000ab21) popup_snote_single_graphic_window_g_ParamLimits

0xab21,	// (0x0000ab21) popup_snote_single_graphic_window_g

0x0c8b,	// (0x00000c8b) popup_snote_single_graphic_window_t1_ParamLimits

0x0c8b,	// (0x00000c8b) popup_snote_single_graphic_window_t1

0x0c9e,	// (0x00000c9e) popup_snote_single_graphic_window_t2_ParamLimits

0x0c9e,	// (0x00000c9e) popup_snote_single_graphic_window_t2

0x0cb1,	// (0x00000cb1) popup_snote_single_graphic_window_t3_ParamLimits

0x0cb1,	// (0x00000cb1) popup_snote_single_graphic_window_t3

0x0cea,	// (0x00000cea) popup_snote_single_graphic_window_t4_ParamLimits

0x0cea,	// (0x00000cea) popup_snote_single_graphic_window_t4

0x0d1e,	// (0x00000d1e) popup_snote_single_graphic_window_t5_ParamLimits

0x0d1e,	// (0x00000d1e) popup_snote_single_graphic_window_t5

0x0004,

0xab26,	// (0x0000ab26) popup_snote_single_graphic_window_t_ParamLimits

0xab26,	// (0x0000ab26) popup_snote_single_graphic_window_t

0x52eb,	// (0x000052eb) grid_graphic_popup_pane_ParamLimits

0x52eb,	// (0x000052eb) grid_graphic_popup_pane

0x5313,	// (0x00005313) listscroll_popup_graphic_pane_g1_ParamLimits

0x5313,	// (0x00005313) listscroll_popup_graphic_pane_g1

0xd3f1,	// (0x0000d3f1) listscroll_popup_graphic_pane_g2_ParamLimits

0xd3f1,	// (0x0000d3f1) listscroll_popup_graphic_pane_g2

0x0001,

0xf3fa,	// (0x0000f3fa) listscroll_popup_graphic_pane_g_ParamLimits

0xf3fa,	// (0x0000f3fa) listscroll_popup_graphic_pane_g

0x533b,	// (0x0000533b) scroll_pane_cp5

0xd3b4,	// (0x0000d3b4) cell_graphic_popup_pane_ParamLimits

0xd3b4,	// (0x0000d3b4) cell_graphic_popup_pane

0x5275,	// (0x00005275) cell_graphic_popup_pane_g1

0x527d,	// (0x0000527d) cell_graphic_popup_pane_g2

0x0b71,	// (0x00000b71) cell_graphic_popup_pane_g3

0x0002,

0xaf0d,	// (0x0000af0d) cell_graphic_popup_pane_g

0x5286,	// (0x00005286) cell_graphic_popup_pane_t2

0x0b7a,	// (0x00000b7a) grid_highlight_pane_cp3

0x0d5f,	// (0x00000d5f) list_gen_pane_ParamLimits

0x0d5f,	// (0x00000d5f) list_gen_pane

0x0d91,	// (0x00000d91) scroll_pane

0xd36b,	// (0x0000d36b) bg_list_pane_g1_ParamLimits

0xd36b,	// (0x0000d36b) bg_list_pane_g1

0x51ea,	// (0x000051ea) bg_list_pane_g2_ParamLimits

0x51ea,	// (0x000051ea) bg_list_pane_g2

0x51ff,	// (0x000051ff) bg_list_pane_g3_ParamLimits

0x51ff,	// (0x000051ff) bg_list_pane_g3

0x5213,	// (0x00005213) bg_list_pane_g4_ParamLimits

0x5213,	// (0x00005213) bg_list_pane_g4

0xd388,	// (0x0000d388) bg_list_pane_g5_ParamLimits

0xd388,	// (0x0000d388) bg_list_pane_g5

0x0004,

0xf3ef,	// (0x0000f3ef) bg_list_pane_g_ParamLimits

0xf3ef,	// (0x0000f3ef) bg_list_pane_g

0xd311,	// (0x0000d311) list_double2_graphic_large_graphic_pane_ParamLimits

0xd311,	// (0x0000d311) list_double2_graphic_large_graphic_pane

0xd311,	// (0x0000d311) list_double2_graphic_pane_ParamLimits

0xd311,	// (0x0000d311) list_double2_graphic_pane

0xd311,	// (0x0000d311) list_double2_large_graphic_pane_ParamLimits

0xd311,	// (0x0000d311) list_double2_large_graphic_pane

0xd311,	// (0x0000d311) list_double2_pane_ParamLimits

0xd311,	// (0x0000d311) list_double2_pane

0xd311,	// (0x0000d311) list_double_graphic_heading_pane_ParamLimits

0xd311,	// (0x0000d311) list_double_graphic_heading_pane

0xd311,	// (0x0000d311) list_double_graphic_pane_ParamLimits

0xd311,	// (0x0000d311) list_double_graphic_pane

0xd311,	// (0x0000d311) list_double_heading_pane_ParamLimits

0xd311,	// (0x0000d311) list_double_heading_pane

0xd311,	// (0x0000d311) list_double_large_graphic_pane_ParamLimits

0xd311,	// (0x0000d311) list_double_large_graphic_pane

0xd311,	// (0x0000d311) list_double_number_pane_ParamLimits

0xd311,	// (0x0000d311) list_double_number_pane

0xd311,	// (0x0000d311) list_double_pane_ParamLimits

0xd311,	// (0x0000d311) list_double_pane

0xd311,	// (0x0000d311) list_double_time_pane_ParamLimits

0xd311,	// (0x0000d311) list_double_time_pane

0xd311,	// (0x0000d311) list_setting_number_pane_ParamLimits

0xd311,	// (0x0000d311) list_setting_number_pane

0xd311,	// (0x0000d311) list_setting_pane_ParamLimits

0xd311,	// (0x0000d311) list_setting_pane

0xd323,	// (0x0000d323) list_single_2graphic_pane_ParamLimits

0xd323,	// (0x0000d323) list_single_2graphic_pane

0xd323,	// (0x0000d323) list_single_graphic_heading_pane_ParamLimits

0xd323,	// (0x0000d323) list_single_graphic_heading_pane

0xd323,	// (0x0000d323) list_single_graphic_pane_ParamLimits

0xd323,	// (0x0000d323) list_single_graphic_pane

0xd323,	// (0x0000d323) list_single_heading_pane_ParamLimits

0xd323,	// (0x0000d323) list_single_heading_pane

0xd323,	// (0x0000d323) list_single_large_graphic_pane_ParamLimits

0xd323,	// (0x0000d323) list_single_large_graphic_pane

0xd323,	// (0x0000d323) list_single_number_heading_pane_ParamLimits

0xd323,	// (0x0000d323) list_single_number_heading_pane

0xd323,	// (0x0000d323) list_single_number_pane_ParamLimits

0xd323,	// (0x0000d323) list_single_number_pane

0xd323,	// (0x0000d323) list_single_pane_ParamLimits

0xd323,	// (0x0000d323) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x2540,	// (0x00002540) list_single_pane_g1_ParamLimits

0x2540,	// (0x00002540) list_single_pane_g1

0x3577,	// (0x00003577) list_single_pane_g2_ParamLimits

0x3577,	// (0x00003577) list_single_pane_g2

0x0001,

0xad43,	// (0x0000ad43) list_single_pane_g_ParamLimits

0xad43,	// (0x0000ad43) list_single_pane_g

0x5a65,	// (0x00005a65) list_single_pane_t1_ParamLimits

0x5a65,	// (0x00005a65) list_single_pane_t1

0x2540,	// (0x00002540) list_single_number_pane_g1_ParamLimits

0x2540,	// (0x00002540) list_single_number_pane_g1

0x3577,	// (0x00003577) list_single_number_pane_g2_ParamLimits

0x3577,	// (0x00003577) list_single_number_pane_g2

0x0001,

0xad43,	// (0x0000ad43) list_single_number_pane_g_ParamLimits

0xad43,	// (0x0000ad43) list_single_number_pane_g

0x3661,	// (0x00003661) list_single_number_pane_t1_ParamLimits

0x3661,	// (0x00003661) list_single_number_pane_t1

0xd162,	// (0x0000d162) list_single_number_pane_t2_ParamLimits

0xd162,	// (0x0000d162) list_single_number_pane_t2

0x0001,

0xf3d2,	// (0x0000f3d2) list_single_number_pane_t_ParamLimits

0xf3d2,	// (0x0000f3d2) list_single_number_pane_t

0xb9ce,	// (0x0000b9ce) list_single_graphic_pane_g1_ParamLimits

0xb9ce,	// (0x0000b9ce) list_single_graphic_pane_g1

0x2540,	// (0x00002540) list_single_graphic_pane_g2_ParamLimits

0x2540,	// (0x00002540) list_single_graphic_pane_g2

0x3577,	// (0x00003577) list_single_graphic_pane_g3_ParamLimits

0x3577,	// (0x00003577) list_single_graphic_pane_g3

0x0002,

0xf28e,	// (0x0000f28e) list_single_graphic_pane_g_ParamLimits

0xf28e,	// (0x0000f28e) list_single_graphic_pane_g

0xb9da,	// (0x0000b9da) list_single_graphic_pane_t1_ParamLimits

0xb9da,	// (0x0000b9da) list_single_graphic_pane_t1

0x2540,	// (0x00002540) list_single_heading_pane_g1_ParamLimits

0x2540,	// (0x00002540) list_single_heading_pane_g1

0x3577,	// (0x00003577) list_single_heading_pane_g2_ParamLimits

0x3577,	// (0x00003577) list_single_heading_pane_g2

0x0001,

0xad43,	// (0x0000ad43) list_single_heading_pane_g_ParamLimits

0xad43,	// (0x0000ad43) list_single_heading_pane_g

0xb9f0,	// (0x0000b9f0) list_single_heading_pane_t1_ParamLimits

0xb9f0,	// (0x0000b9f0) list_single_heading_pane_t1

0xba06,	// (0x0000ba06) list_single_heading_pane_t2_ParamLimits

0xba06,	// (0x0000ba06) list_single_heading_pane_t2

0x0001,

0xf295,	// (0x0000f295) list_single_heading_pane_t_ParamLimits

0xf295,	// (0x0000f295) list_single_heading_pane_t

0x2540,	// (0x00002540) list_single_number_heading_pane_g1_ParamLimits

0x2540,	// (0x00002540) list_single_number_heading_pane_g1

0x3577,	// (0x00003577) list_single_number_heading_pane_g2_ParamLimits

0x3577,	// (0x00003577) list_single_number_heading_pane_g2

0x0001,

0xad43,	// (0x0000ad43) list_single_number_heading_pane_g_ParamLimits

0xad43,	// (0x0000ad43) list_single_number_heading_pane_g

0xb9f0,	// (0x0000b9f0) list_single_number_heading_pane_t1_ParamLimits

0xb9f0,	// (0x0000b9f0) list_single_number_heading_pane_t1

0xba18,	// (0x0000ba18) list_single_number_heading_pane_t2_ParamLimits

0xba18,	// (0x0000ba18) list_single_number_heading_pane_t2

0x5a3f,	// (0x00005a3f) list_single_number_heading_pane_t3_ParamLimits

0x5a3f,	// (0x00005a3f) list_single_number_heading_pane_t3

0x0002,

0xf29a,	// (0x0000f29a) list_single_number_heading_pane_t_ParamLimits

0xf29a,	// (0x0000f29a) list_single_number_heading_pane_t

0x356b,	// (0x0000356b) list_single_graphic_heading_pane_g1_ParamLimits

0x356b,	// (0x0000356b) list_single_graphic_heading_pane_g1

0xba2a,	// (0x0000ba2a) list_single_graphic_heading_pane_g4_ParamLimits

0xba2a,	// (0x0000ba2a) list_single_graphic_heading_pane_g4

0x3577,	// (0x00003577) list_single_graphic_heading_pane_g5_ParamLimits

0x3577,	// (0x00003577) list_single_graphic_heading_pane_g5

0x0002,

0xf2a1,	// (0x0000f2a1) list_single_graphic_heading_pane_g_ParamLimits

0xf2a1,	// (0x0000f2a1) list_single_graphic_heading_pane_g

0xb9f0,	// (0x0000b9f0) list_single_graphic_heading_pane_t1_ParamLimits

0xb9f0,	// (0x0000b9f0) list_single_graphic_heading_pane_t1

0xba3b,	// (0x0000ba3b) list_single_graphic_heading_pane_t2_ParamLimits

0xba3b,	// (0x0000ba3b) list_single_graphic_heading_pane_t2

0x0001,

0xf2a8,	// (0x0000f2a8) list_single_graphic_heading_pane_t_ParamLimits

0xf2a8,	// (0x0000f2a8) list_single_graphic_heading_pane_t

0x5a7b,	// (0x00005a7b) list_single_large_graphic_pane_g1_ParamLimits

0x5a7b,	// (0x00005a7b) list_single_large_graphic_pane_g1

0x2540,	// (0x00002540) list_single_large_graphic_pane_g2_ParamLimits

0x2540,	// (0x00002540) list_single_large_graphic_pane_g2

0x3577,	// (0x00003577) list_single_large_graphic_pane_g3_ParamLimits

0x3577,	// (0x00003577) list_single_large_graphic_pane_g3

0x0002,

0xaf9d,	// (0x0000af9d) list_single_large_graphic_pane_g_ParamLimits

0xaf9d,	// (0x0000af9d) list_single_large_graphic_pane_g

0x3ee5,	// (0x00003ee5) wait_border_pane_g2_copy1

0xba4d,	// (0x0000ba4d) list_single_large_graphic_pane_g4_cp2

0x5a87,	// (0x00005a87) list_single_large_graphic_pane_t1_ParamLimits

0x5a87,	// (0x00005a87) list_single_large_graphic_pane_t1

0x37a4,	// (0x000037a4) list_double_pane_g1_ParamLimits

0x37a4,	// (0x000037a4) list_double_pane_g1

0xba55,	// (0x0000ba55) list_double_pane_g2_ParamLimits

0xba55,	// (0x0000ba55) list_double_pane_g2

0x0001,

0xf2ad,	// (0x0000f2ad) list_double_pane_g_ParamLimits

0xf2ad,	// (0x0000f2ad) list_double_pane_g

0x76a9,	// (0x000076a9) list_double_pane_t1_ParamLimits

0x76a9,	// (0x000076a9) list_double_pane_t1

0xba61,	// (0x0000ba61) list_double_pane_t2_ParamLimits

0xba61,	// (0x0000ba61) list_double_pane_t2

0x0001,

0xf2b2,	// (0x0000f2b2) list_double_pane_t_ParamLimits

0xf2b2,	// (0x0000f2b2) list_double_pane_t

0xba73,	// (0x0000ba73) list_double2_pane_g1_ParamLimits

0xba73,	// (0x0000ba73) list_double2_pane_g1

0xba84,	// (0x0000ba84) list_double2_pane_g2_ParamLimits

0xba84,	// (0x0000ba84) list_double2_pane_g2

0x0001,

0xf2b7,	// (0x0000f2b7) list_double2_pane_g_ParamLimits

0xf2b7,	// (0x0000f2b7) list_double2_pane_g

0xba90,	// (0x0000ba90) list_double2_pane_t1_ParamLimits

0xba90,	// (0x0000ba90) list_double2_pane_t1

0xbaa6,	// (0x0000baa6) list_double2_pane_t2_ParamLimits

0xbaa6,	// (0x0000baa6) list_double2_pane_t2

0x0001,

0xf2bc,	// (0x0000f2bc) list_double2_pane_t_ParamLimits

0xf2bc,	// (0x0000f2bc) list_double2_pane_t

0x37a4,	// (0x000037a4) list_double_number_pane_g1_ParamLimits

0x37a4,	// (0x000037a4) list_double_number_pane_g1

0xba55,	// (0x0000ba55) list_double_number_pane_g2_ParamLimits

0xba55,	// (0x0000ba55) list_double_number_pane_g2

0x0001,

0xf2ad,	// (0x0000f2ad) list_double_number_pane_g_ParamLimits

0xf2ad,	// (0x0000f2ad) list_double_number_pane_g

0xbab8,	// (0x0000bab8) list_double_number_pane_t1_ParamLimits

0xbab8,	// (0x0000bab8) list_double_number_pane_t1

0xbaca,	// (0x0000baca) list_double_number_pane_t2_ParamLimits

0xbaca,	// (0x0000baca) list_double_number_pane_t2

0xbae0,	// (0x0000bae0) list_double_number_pane_t3_ParamLimits

0xbae0,	// (0x0000bae0) list_double_number_pane_t3

0x0002,

0xf2c1,	// (0x0000f2c1) list_double_number_pane_t_ParamLimits

0xf2c1,	// (0x0000f2c1) list_double_number_pane_t

0xbaf2,	// (0x0000baf2) list_double_graphic_pane_g1_ParamLimits

0xbaf2,	// (0x0000baf2) list_double_graphic_pane_g1

0xbafe,	// (0x0000bafe) list_double_graphic_pane_g2_ParamLimits

0xbafe,	// (0x0000bafe) list_double_graphic_pane_g2

0xbb0d,	// (0x0000bb0d) list_double_graphic_pane_g3_ParamLimits

0xbb0d,	// (0x0000bb0d) list_double_graphic_pane_g3

0x0003,

0xf2c8,	// (0x0000f2c8) list_double_graphic_pane_g_ParamLimits

0xf2c8,	// (0x0000f2c8) list_double_graphic_pane_g

0xbb25,	// (0x0000bb25) list_double_graphic_pane_t1_ParamLimits

0xbb25,	// (0x0000bb25) list_double_graphic_pane_t1

0xbb3b,	// (0x0000bb3b) list_double_graphic_pane_t2_ParamLimits

0xbb3b,	// (0x0000bb3b) list_double_graphic_pane_t2

0x0001,

0xf2d1,	// (0x0000f2d1) list_double_graphic_pane_t_ParamLimits

0xf2d1,	// (0x0000f2d1) list_double_graphic_pane_t

0xbb4d,	// (0x0000bb4d) list_double2_graphic_pane_g1_ParamLimits

0xbb4d,	// (0x0000bb4d) list_double2_graphic_pane_g1

0x242b,	// (0x0000242b) list_double2_graphic_pane_g2_ParamLimits

0x242b,	// (0x0000242b) list_double2_graphic_pane_g2

0xba84,	// (0x0000ba84) list_double2_graphic_pane_g3_ParamLimits

0xba84,	// (0x0000ba84) list_double2_graphic_pane_g3

0x0002,

0xf2d6,	// (0x0000f2d6) list_double2_graphic_pane_g_ParamLimits

0xf2d6,	// (0x0000f2d6) list_double2_graphic_pane_g

0xbb59,	// (0x0000bb59) list_double2_graphic_pane_t1_ParamLimits

0xbb59,	// (0x0000bb59) list_double2_graphic_pane_t1

0xbb6f,	// (0x0000bb6f) list_double2_graphic_pane_t2_ParamLimits

0xbb6f,	// (0x0000bb6f) list_double2_graphic_pane_t2

0x0001,

0xf2dd,	// (0x0000f2dd) list_double2_graphic_pane_t_ParamLimits

0xf2dd,	// (0x0000f2dd) list_double2_graphic_pane_t

0xbb81,	// (0x0000bb81) list_double_large_graphic_pane_g1_ParamLimits

0xbb81,	// (0x0000bb81) list_double_large_graphic_pane_g1

0xbba0,	// (0x0000bba0) list_double_large_graphic_pane_g2_ParamLimits

0xbba0,	// (0x0000bba0) list_double_large_graphic_pane_g2

0xba55,	// (0x0000ba55) list_double_large_graphic_pane_g3_ParamLimits

0xba55,	// (0x0000ba55) list_double_large_graphic_pane_g3

0xbbb1,	// (0x0000bbb1) list_double_large_graphic_pane_g4_ParamLimits

0xbbb1,	// (0x0000bbb1) list_double_large_graphic_pane_g4

0x0004,

0xf2e2,	// (0x0000f2e2) list_double_large_graphic_pane_g_ParamLimits

0xf2e2,	// (0x0000f2e2) list_double_large_graphic_pane_g

0xbbc3,	// (0x0000bbc3) list_double_large_graphic_pane_t1_ParamLimits

0xbbc3,	// (0x0000bbc3) list_double_large_graphic_pane_t1

0xbbdc,	// (0x0000bbdc) list_double_large_graphic_pane_t2_ParamLimits

0xbbdc,	// (0x0000bbdc) list_double_large_graphic_pane_t2

0x0001,

0xf2ed,	// (0x0000f2ed) list_double_large_graphic_pane_t_ParamLimits

0xf2ed,	// (0x0000f2ed) list_double_large_graphic_pane_t

0xbbee,	// (0x0000bbee) list_double2_large_graphic_pane_g1_ParamLimits

0xbbee,	// (0x0000bbee) list_double2_large_graphic_pane_g1

0xba73,	// (0x0000ba73) list_double2_large_graphic_pane_g2_ParamLimits

0xba73,	// (0x0000ba73) list_double2_large_graphic_pane_g2

0xba84,	// (0x0000ba84) list_double2_large_graphic_pane_g3_ParamLimits

0xba84,	// (0x0000ba84) list_double2_large_graphic_pane_g3

0x0002,

0xf2f2,	// (0x0000f2f2) list_double2_large_graphic_pane_g_ParamLimits

0xf2f2,	// (0x0000f2f2) list_double2_large_graphic_pane_g

0xbbfa,	// (0x0000bbfa) list_double2_large_graphic_pane_t1_ParamLimits

0xbbfa,	// (0x0000bbfa) list_double2_large_graphic_pane_t1

0xbc10,	// (0x0000bc10) list_double2_large_graphic_pane_t2_ParamLimits

0xbc10,	// (0x0000bc10) list_double2_large_graphic_pane_t2

0x0001,

0xf2f9,	// (0x0000f2f9) list_double2_large_graphic_pane_t_ParamLimits

0xf2f9,	// (0x0000f2f9) list_double2_large_graphic_pane_t

0xbc22,	// (0x0000bc22) list_double_heading_pane_g1_ParamLimits

0xbc22,	// (0x0000bc22) list_double_heading_pane_g1

0xbc33,	// (0x0000bc33) list_double_heading_pane_g2_ParamLimits

0xbc33,	// (0x0000bc33) list_double_heading_pane_g2

0x0001,

0xf2fe,	// (0x0000f2fe) list_double_heading_pane_g_ParamLimits

0xf2fe,	// (0x0000f2fe) list_double_heading_pane_g

0xbc3f,	// (0x0000bc3f) list_double_heading_pane_t1_ParamLimits

0xbc3f,	// (0x0000bc3f) list_double_heading_pane_t1

0xbc55,	// (0x0000bc55) list_double_heading_pane_t2_ParamLimits

0xbc55,	// (0x0000bc55) list_double_heading_pane_t2

0x0001,

0xf303,	// (0x0000f303) list_double_heading_pane_t_ParamLimits

0xf303,	// (0x0000f303) list_double_heading_pane_t

0x0f7b,	// (0x00000f7b) list_double_graphic_heading_pane_g1_ParamLimits

0x0f7b,	// (0x00000f7b) list_double_graphic_heading_pane_g1

0xbc22,	// (0x0000bc22) list_double_graphic_heading_pane_g2_ParamLimits

0xbc22,	// (0x0000bc22) list_double_graphic_heading_pane_g2

0xbc33,	// (0x0000bc33) list_double_graphic_heading_pane_g3_ParamLimits

0xbc33,	// (0x0000bc33) list_double_graphic_heading_pane_g3

0x0002,

0xf308,	// (0x0000f308) list_double_graphic_heading_pane_g_ParamLimits

0xf308,	// (0x0000f308) list_double_graphic_heading_pane_g

0xbc67,	// (0x0000bc67) list_double_graphic_heading_pane_t1_ParamLimits

0xbc67,	// (0x0000bc67) list_double_graphic_heading_pane_t1

0xbc7d,	// (0x0000bc7d) list_double_graphic_heading_pane_t2_ParamLimits

0xbc7d,	// (0x0000bc7d) list_double_graphic_heading_pane_t2

0x0001,

0xf30f,	// (0x0000f30f) list_double_graphic_heading_pane_t_ParamLimits

0xf30f,	// (0x0000f30f) list_double_graphic_heading_pane_t

0xbba0,	// (0x0000bba0) list_double_time_pane_g1_ParamLimits

0xbba0,	// (0x0000bba0) list_double_time_pane_g1

0xba55,	// (0x0000ba55) list_double_time_pane_g2_ParamLimits

0xba55,	// (0x0000ba55) list_double_time_pane_g2

0x0001,

0xf314,	// (0x0000f314) list_double_time_pane_g_ParamLimits

0xf314,	// (0x0000f314) list_double_time_pane_g

0xbc8f,	// (0x0000bc8f) list_double_time_pane_t1_ParamLimits

0xbc8f,	// (0x0000bc8f) list_double_time_pane_t1

0xbca5,	// (0x0000bca5) list_double_time_pane_t2_ParamLimits

0xbca5,	// (0x0000bca5) list_double_time_pane_t2

0xbcb7,	// (0x0000bcb7) list_double_time_pane_t3_ParamLimits

0xbcb7,	// (0x0000bcb7) list_double_time_pane_t3

0xbcc9,	// (0x0000bcc9) list_double_time_pane_t4_ParamLimits

0xbcc9,	// (0x0000bcc9) list_double_time_pane_t4

0x0003,

0xf319,	// (0x0000f319) list_double_time_pane_t_ParamLimits

0xf319,	// (0x0000f319) list_double_time_pane_t

0x242b,	// (0x0000242b) list_setting_pane_g1_ParamLimits

0x242b,	// (0x0000242b) list_setting_pane_g1

0xba84,	// (0x0000ba84) list_setting_pane_g2_ParamLimits

0xba84,	// (0x0000ba84) list_setting_pane_g2

0x0001,

0xf322,	// (0x0000f322) list_setting_pane_g_ParamLimits

0xf322,	// (0x0000f322) list_setting_pane_g

0xbcdb,	// (0x0000bcdb) list_setting_pane_t1_ParamLimits

0xbcdb,	// (0x0000bcdb) list_setting_pane_t1

0xbcf2,	// (0x0000bcf2) list_setting_pane_t2_ParamLimits

0xbcf2,	// (0x0000bcf2) list_setting_pane_t2

0x0002,

0xf327,	// (0x0000f327) list_setting_pane_t_ParamLimits

0xf327,	// (0x0000f327) list_setting_pane_t

0xbd31,	// (0x0000bd31) set_value_pane_cp_ParamLimits

0xbd31,	// (0x0000bd31) set_value_pane_cp

0x242b,	// (0x0000242b) list_setting_number_pane_g1_ParamLimits

0x242b,	// (0x0000242b) list_setting_number_pane_g1

0xba84,	// (0x0000ba84) list_setting_number_pane_g2_ParamLimits

0xba84,	// (0x0000ba84) list_setting_number_pane_g2

0x0001,

0xf322,	// (0x0000f322) list_setting_number_pane_g_ParamLimits

0xf322,	// (0x0000f322) list_setting_number_pane_g

0xbd3d,	// (0x0000bd3d) list_setting_number_pane_t1_ParamLimits

0xbd3d,	// (0x0000bd3d) list_setting_number_pane_t1

0xbd51,	// (0x0000bd51) list_setting_number_pane_t2_ParamLimits

0xbd51,	// (0x0000bd51) list_setting_number_pane_t2

0xbd68,	// (0x0000bd68) list_setting_number_pane_t3_ParamLimits

0xbd68,	// (0x0000bd68) list_setting_number_pane_t3

0x0003,

0xf32e,	// (0x0000f32e) list_setting_number_pane_t_ParamLimits

0xf32e,	// (0x0000f32e) list_setting_number_pane_t

0xbd31,	// (0x0000bd31) set_value_pane_ParamLimits

0xbd31,	// (0x0000bd31) set_value_pane

0x1260,	// (0x00001260) bg_set_opt_pane_ParamLimits

0x1260,	// (0x00001260) bg_set_opt_pane

0x1281,	// (0x00001281) set_value_pane_t1

0x128f,	// (0x0000128f) slider_set_pane_cp3

0x1298,	// (0x00001298) volume_small_pane_cp

0x12a1,	// (0x000012a1) list_form_gen_pane

0x12aa,	// (0x000012aa) scroll_pane_cp8

0xbdab,	// (0x0000bdab) form_field_data_pane_ParamLimits

0xbdab,	// (0x0000bdab) form_field_data_pane

0xbdc2,	// (0x0000bdc2) form_field_data_wide_pane_ParamLimits

0xbdc2,	// (0x0000bdc2) form_field_data_wide_pane

0xbde2,	// (0x0000bde2) form_field_popup_pane_ParamLimits

0xbde2,	// (0x0000bde2) form_field_popup_pane

0xbdfa,	// (0x0000bdfa) form_field_popup_wide_pane_ParamLimits

0xbdfa,	// (0x0000bdfa) form_field_popup_wide_pane

0x1345,	// (0x00001345) form_field_slider_pane_ParamLimits

0x1345,	// (0x00001345) form_field_slider_pane

0x1358,	// (0x00001358) form_field_slider_wide_pane_ParamLimits

0x1358,	// (0x00001358) form_field_slider_wide_pane

0x136b,	// (0x0000136b) data_form_pane

0xbe1b,	// (0x0000be1b) form_field_data_pane_t1

0x1399,	// (0x00001399) input_focus_pane

0x13a7,	// (0x000013a7) data_form_wide_pane

0x13d3,	// (0x000013d3) form_field_data_wide_pane_t1

0x0b8f,	// (0x00000b8f) input_focus_pane_cp6

0xbe35,	// (0x0000be35) form_field_popup_pane_t1

0x1399,	// (0x00001399) input_focus_pane_cp7

0x140a,	// (0x0000140a) list_form_pane

0x141e,	// (0x0000141e) form_field_popup_wide_pane_t1

0x1399,	// (0x00001399) input_focus_pane_cp8

0x1433,	// (0x00001433) list_form_wide_pane

0xbe57,	// (0x0000be57) form_field_slider_pane_t1_ParamLimits

0xbe57,	// (0x0000be57) form_field_slider_pane_t1

0xbe6f,	// (0x0000be6f) form_field_slider_pane_t2_ParamLimits

0xbe6f,	// (0x0000be6f) form_field_slider_pane_t2

0x0001,

0xf337,	// (0x0000f337) form_field_slider_pane_t_ParamLimits

0xf337,	// (0x0000f337) form_field_slider_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9

0xbe84,	// (0x0000be84) slider_cont_pane_ParamLimits

0xbe84,	// (0x0000be84) slider_cont_pane

0x1482,	// (0x00001482) form_field_slider_wide_pane_t1_ParamLimits

0x1482,	// (0x00001482) form_field_slider_wide_pane_t1

0x1494,	// (0x00001494) form_field_slider_wide_pane_t2_ParamLimits

0x1494,	// (0x00001494) form_field_slider_wide_pane_t2

0x0001,

0xabf2,	// (0x0000abf2) form_field_slider_wide_pane_t_ParamLimits

0xabf2,	// (0x0000abf2) form_field_slider_wide_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10

0xbe98,	// (0x0000be98) slider_cont_pane_cp1_ParamLimits

0xbe98,	// (0x0000be98) slider_cont_pane_cp1

0xbeac,	// (0x0000beac) slider_form_pane_cp

0x14c2,	// (0x000014c2) input_focus_pane_g1

0x14ca,	// (0x000014ca) input_focus_pane_g2

0x14d2,	// (0x000014d2) input_focus_pane_g3

0x14da,	// (0x000014da) input_focus_pane_g4

0x14e2,	// (0x000014e2) input_focus_pane_g5

0x14ea,	// (0x000014ea) input_focus_pane_g6

0x14f2,	// (0x000014f2) input_focus_pane_g7

0x14fa,	// (0x000014fa) input_focus_pane_g8

0x1502,	// (0x00001502) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xabf7,	// (0x0000abf7) input_focus_pane_g

0x3eee,	// (0x00003eee) wait_border_pane_g3_copy1

0xbeb4,	// (0x0000beb4) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd2f5,	// (0x0000d2f5) data_form_wide_pane_t1

0xbece,	// (0x0000bece) list_form_graphic_pane_cp_ParamLimits

0xbece,	// (0x0000bece) list_form_graphic_pane_cp

0x505f,	// (0x0000505f) slider_form_pane_g1

0x5068,	// (0x00005068) slider_form_pane_g2

0x0006,

0xf3e0,	// (0x0000f3e0) slider_form_pane_g

0xbece,	// (0x0000bece) list_form_graphic_pane_ParamLimits

0xbece,	// (0x0000bece) list_form_graphic_pane

0x155a,	// (0x0000155a) list_form_graphic_pane_g1

0x1562,	// (0x00001562) list_form_graphic_pane_t1_ParamLimits

0x1562,	// (0x00001562) list_form_graphic_pane_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5

0xbee0,	// (0x0000bee0) find_pane_g1

0x1580,	// (0x00001580) input_find_pane

0xbee9,	// (0x0000bee9) input_find_pane_g1_ParamLimits

0xbee9,	// (0x0000bee9) input_find_pane_g1

0xbef5,	// (0x0000bef5) input_find_pane_t1_ParamLimits

0xbef5,	// (0x0000bef5) input_find_pane_t1

0xbf0a,	// (0x0000bf0a) input_find_pane_t2_ParamLimits

0xbf0a,	// (0x0000bf0a) input_find_pane_t2

0x0001,

0xf33c,	// (0x0000f33c) input_find_pane_t_ParamLimits

0xf33c,	// (0x0000f33c) input_find_pane_t

0x15bf,	// (0x000015bf) input_focus_pane_cp5_ParamLimits

0x15bf,	// (0x000015bf) input_focus_pane_cp5

0x15d9,	// (0x000015d9) bg_popup_window_pane_cp2_ParamLimits

0x15d9,	// (0x000015d9) bg_popup_window_pane_cp2

0x15e6,	// (0x000015e6) listscroll_menu_pane_ParamLimits

0x15e6,	// (0x000015e6) listscroll_menu_pane

0xbf2b,	// (0x0000bf2b) popup_submenu_window_ParamLimits

0xbf2b,	// (0x0000bf2b) popup_submenu_window

0x161e,	// (0x0000161e) find_popup_pane_g1

0x1626,	// (0x00001626) input_popup_find_pane_cp

0x15bf,	// (0x000015bf) input_focus_pane_cp4_ParamLimits

0x15bf,	// (0x000015bf) input_focus_pane_cp4

0x163c,	// (0x0000163c) input_popup_find_pane_t1_ParamLimits

0x163c,	// (0x0000163c) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x166a,	// (0x0000166a) listscroll_popup_sub_pane

0x1672,	// (0x00001672) list_submenu_pane_ParamLimits

0x1672,	// (0x00001672) list_submenu_pane

0x1683,	// (0x00001683) scroll_pane_cp4

0x168b,	// (0x0000168b) list_single_popup_submenu_pane_ParamLimits

0x168b,	// (0x0000168b) list_single_popup_submenu_pane

0x169f,	// (0x0000169f) list_single_popup_submenu_pane_g1

0x16a7,	// (0x000016a7) list_single_popup_submenu_pane_t1_ParamLimits

0x16a7,	// (0x000016a7) list_single_popup_submenu_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1

0x16bc,	// (0x000016bc) tabs_2_active_pane_g1

0xbf65,	// (0x0000bf65) tabs_2_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1

0x16bc,	// (0x000016bc) tabs_2_passive_pane_g1

0xbf65,	// (0x0000bf65) tabs_2_passive_pane_t1

0x0507,	// (0x00000507) bg_active_tab_pane_cp4

0xbf77,	// (0x0000bf77) tabs_2_long_active_pane_t1

0x2b80,	// (0x00002b80) bg_passive_tab_pane_cp4

0x3748,	// (0x00003748) list_single_midp_graphic_pane_g4_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5

0xbf8a,	// (0x0000bf8a) tabs_3_long_active_pane_t1

0x2b80,	// (0x00002b80) bg_passive_tab_pane_cp5

0x3748,	// (0x00003748) list_single_midp_graphic_pane_g4

0x0507,	// (0x00000507) bg_popup_window_pane_cp13_ParamLimits

0x0507,	// (0x00000507) bg_popup_window_pane_cp13

0x171e,	// (0x0000171e) listscroll_popup_fast_pane_ParamLimits

0x171e,	// (0x0000171e) listscroll_popup_fast_pane

0x172d,	// (0x0000172d) grid_popup_fast_pane_ParamLimits

0x172d,	// (0x0000172d) grid_popup_fast_pane

0x173f,	// (0x0000173f) scroll_pane_cp9_ParamLimits

0x173f,	// (0x0000173f) scroll_pane_cp9

0x730d,	// (0x0000730d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x730d,	// (0x0000730d) list_single_graphic_hl_pane_t1_cp2

0x1763,	// (0x00001763) input_focus_pane_cp20_ParamLimits

0x1763,	// (0x00001763) input_focus_pane_cp20

0x1771,	// (0x00001771) query_popup_data_pane_t1_ParamLimits

0x1771,	// (0x00001771) query_popup_data_pane_t1

0x1784,	// (0x00001784) query_popup_data_pane_t2_ParamLimits

0x1784,	// (0x00001784) query_popup_data_pane_t2

0x17ca,	// (0x000017ca) query_popup_data_pane_t3_ParamLimits

0x17ca,	// (0x000017ca) query_popup_data_pane_t3

0x180b,	// (0x0000180b) query_popup_data_pane_t4_ParamLimits

0x180b,	// (0x0000180b) query_popup_data_pane_t4

0x1847,	// (0x00001847) query_popup_data_pane_t5_ParamLimits

0x1847,	// (0x00001847) query_popup_data_pane_t5

0x0004,

0xac11,	// (0x0000ac11) query_popup_data_pane_t_ParamLimits

0xac11,	// (0x0000ac11) query_popup_data_pane_t

0x14c2,	// (0x000014c2) bg_set_opt_pane_g1

0x14ca,	// (0x000014ca) bg_set_opt_pane_g2

0x14d2,	// (0x000014d2) bg_set_opt_pane_g3

0x14da,	// (0x000014da) bg_set_opt_pane_g4

0x14e2,	// (0x000014e2) bg_set_opt_pane_g5

0x14ea,	// (0x000014ea) bg_set_opt_pane_g6

0x14f2,	// (0x000014f2) bg_set_opt_pane_g7

0x14fa,	// (0x000014fa) bg_set_opt_pane_g8

0x1502,	// (0x00001502) bg_set_opt_pane_g9

0x0008,

0xac1c,	// (0x0000ac1c) bg_set_opt_pane_g

0x215f,	// (0x0000215f) control_top_pane_stacon_ParamLimits

0x215f,	// (0x0000215f) control_top_pane_stacon

0x21b2,	// (0x000021b2) signal_pane_stacon_ParamLimits

0x21b2,	// (0x000021b2) signal_pane_stacon

0x21d7,	// (0x000021d7) stacon_top_pane_g1_ParamLimits

0x21d7,	// (0x000021d7) stacon_top_pane_g1

0x21f9,	// (0x000021f9) title_pane_stacon_ParamLimits

0x21f9,	// (0x000021f9) title_pane_stacon

0x2223,	// (0x00002223) uni_indicator_pane_stacon_ParamLimits

0x2223,	// (0x00002223) uni_indicator_pane_stacon

0x2238,	// (0x00002238) battery_pane_stacon_ParamLimits

0x2238,	// (0x00002238) battery_pane_stacon

0x227c,	// (0x0000227c) control_bottom_pane_stacon_ParamLimits

0x227c,	// (0x0000227c) control_bottom_pane_stacon

0x229f,	// (0x0000229f) navi_pane_stacon_ParamLimits

0x229f,	// (0x0000229f) navi_pane_stacon

0x22c2,	// (0x000022c2) stacon_bottom_pane_g1_ParamLimits

0x22c2,	// (0x000022c2) stacon_bottom_pane_g1

0x187e,	// (0x0000187e) aid_levels_signal_lsc_ParamLimits

0x187e,	// (0x0000187e) aid_levels_signal_lsc

0x1894,	// (0x00001894) signal_pane_stacon_g1_ParamLimits

0x1894,	// (0x00001894) signal_pane_stacon_g1

0x18a8,	// (0x000018a8) signal_pane_stacon_g2_ParamLimits

0x18a8,	// (0x000018a8) signal_pane_stacon_g2

0x0001,

0xac2f,	// (0x0000ac2f) signal_pane_stacon_g_ParamLimits

0xac2f,	// (0x0000ac2f) signal_pane_stacon_g

0x18ea,	// (0x000018ea) title_pane_stacon_t1_ParamLimits

0x18ea,	// (0x000018ea) title_pane_stacon_t1

0x190f,	// (0x0000190f) uni_indicator_pane_stacon_g1

0x1919,	// (0x00001919) uni_indicator_pane_stacon_g2

0x1923,	// (0x00001923) uni_indicator_pane_stacon_g3

0x192d,	// (0x0000192d) uni_indicator_pane_stacon_g4

0x0003,

0xac3b,	// (0x0000ac3b) uni_indicator_pane_stacon_g

0x1937,	// (0x00001937) control_top_pane_stacon_g1

0x193f,	// (0x0000193f) control_top_pane_stacon_t1_ParamLimits

0x193f,	// (0x0000193f) control_top_pane_stacon_t1

0x1976,	// (0x00001976) aid_levels_battery_lsc_ParamLimits

0x1976,	// (0x00001976) aid_levels_battery_lsc

0x198d,	// (0x0000198d) battery_pane_stacon_g1_ParamLimits

0x198d,	// (0x0000198d) battery_pane_stacon_g1

0x19a0,	// (0x000019a0) battery_pane_stacon_g2_ParamLimits

0x19a0,	// (0x000019a0) battery_pane_stacon_g2

0x0001,

0xac44,	// (0x0000ac44) battery_pane_stacon_g_ParamLimits

0xac44,	// (0x0000ac44) battery_pane_stacon_g

0x19de,	// (0x000019de) navi_icon_pane_stacon

0x19f2,	// (0x000019f2) navi_navi_pane_stacon

0x19de,	// (0x000019de) navi_text_pane_stacon

0x1937,	// (0x00001937) control_bottom_pane_stacon_g1

0x1a06,	// (0x00001a06) control_bottom_pane_stacon_t1_ParamLimits

0x1a06,	// (0x00001a06) control_bottom_pane_stacon_t1

0xbf9c,	// (0x0000bf9c) grid_app_pane_ParamLimits

0xbf9c,	// (0x0000bf9c) grid_app_pane

0xbfd4,	// (0x0000bfd4) scroll_pane_cp15_ParamLimits

0xbfd4,	// (0x0000bfd4) scroll_pane_cp15

0xbfe9,	// (0x0000bfe9) cell_app_pane_ParamLimits

0xbfe9,	// (0x0000bfe9) cell_app_pane

0xc02e,	// (0x0000c02e) cell_app_pane_g1_ParamLimits

0xc02e,	// (0x0000c02e) cell_app_pane_g1

0x1ad2,	// (0x00001ad2) cell_app_pane_g2_ParamLimits

0x1ad2,	// (0x00001ad2) cell_app_pane_g2

0x0001,

0xf341,	// (0x0000f341) cell_app_pane_g_ParamLimits

0xf341,	// (0x0000f341) cell_app_pane_g

0xc04e,	// (0x0000c04e) cell_app_pane_t1_ParamLimits

0xc04e,	// (0x0000c04e) cell_app_pane_t1

0x1af5,	// (0x00001af5) grid_highlight_pane_ParamLimits

0x1af5,	// (0x00001af5) grid_highlight_pane

0x14c2,	// (0x000014c2) cell_highlight_pane_g1

0x14ca,	// (0x000014ca) cell_highlight_pane_g2

0x14d2,	// (0x000014d2) cell_highlight_pane_g3

0x14da,	// (0x000014da) cell_highlight_pane_g4

0x14e2,	// (0x000014e2) cell_highlight_pane_g5

0x14ea,	// (0x000014ea) cell_highlight_pane_g6

0x14f2,	// (0x000014f2) cell_highlight_pane_g7

0x14fa,	// (0x000014fa) cell_highlight_pane_g8

0x1502,	// (0x00001502) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xabf7,	// (0x0000abf7) cell_highlight_pane_g

0x1b19,	// (0x00001b19) bg_scroll_pane

0x1b38,	// (0x00001b38) scroll_handle_pane

0x1b89,	// (0x00001b89) scroll_bg_pane_g1

0x1b9e,	// (0x00001b9e) scroll_bg_pane_g2

0x1bb6,	// (0x00001bb6) scroll_bg_pane_g3

0x0002,

0xac4e,	// (0x0000ac4e) scroll_bg_pane_g

0x1bcb,	// (0x00001bcb) scroll_handle_focus_pane_ParamLimits

0x1bcb,	// (0x00001bcb) scroll_handle_focus_pane

0x1b89,	// (0x00001b89) scroll_handle_pane_g1

0x1bd8,	// (0x00001bd8) scroll_handle_pane_g2

0x1bb6,	// (0x00001bb6) scroll_handle_pane_g3

0x0002,

0xac55,	// (0x0000ac55) scroll_handle_pane_g

0x15bf,	// (0x000015bf) bg_popup_sub_pane_cp21_ParamLimits

0x15bf,	// (0x000015bf) bg_popup_sub_pane_cp21

0x1bec,	// (0x00001bec) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bec,	// (0x00001bec) popup_fep_japan_predictive_window_t1

0x1c06,	// (0x00001c06) popup_fep_japan_predictive_window_t2_ParamLimits

0x1c06,	// (0x00001c06) popup_fep_japan_predictive_window_t2

0x1c39,	// (0x00001c39) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c39,	// (0x00001c39) popup_fep_japan_predictive_window_t3

0x0002,

0xac5c,	// (0x0000ac5c) popup_fep_japan_predictive_window_t_ParamLimits

0xac5c,	// (0x0000ac5c) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c70,	// (0x00001c70) listscroll_japin_cand_pane

0x1c78,	// (0x00001c78) popup_fep_japan_candidate_window_t1

0x1c86,	// (0x00001c86) candidate_pane_ParamLimits

0x1c86,	// (0x00001c86) candidate_pane

0x1c98,	// (0x00001c98) scroll_pane_cp30

0x1ca0,	// (0x00001ca0) list_single_popup_jap_candidate_pane_ParamLimits

0x1ca0,	// (0x00001ca0) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1cb5,	// (0x00001cb5) list_single_popup_jap_candidate_pane_t1

0x1cc4,	// (0x00001cc4) level_1_signal

0x1cd6,	// (0x00001cd6) level_2_signal

0x1ce9,	// (0x00001ce9) level_3_signal

0x1cfc,	// (0x00001cfc) level_4_signal

0x1d0f,	// (0x00001d0f) level_5_signal

0x1d22,	// (0x00001d22) level_6_signal

0x1d35,	// (0x00001d35) level_7_signal

0x1cc4,	// (0x00001cc4) level_1_battery

0x1cd6,	// (0x00001cd6) level_2_battery

0x1ce9,	// (0x00001ce9) level_3_battery

0x1cfc,	// (0x00001cfc) level_4_battery

0x1d0f,	// (0x00001d0f) level_5_battery

0x1d22,	// (0x00001d22) level_6_battery

0x1d35,	// (0x00001d35) level_7_battery

0x1d7f,	// (0x00001d7f) list_menu_pane_ParamLimits

0x1d7f,	// (0x00001d7f) list_menu_pane

0x1d95,	// (0x00001d95) scroll_pane_cp25_ParamLimits

0x1d95,	// (0x00001d95) scroll_pane_cp25

0x1dae,	// (0x00001dae) list_double2_graphic_pane_cp2_ParamLimits

0x1dae,	// (0x00001dae) list_double2_graphic_pane_cp2

0x1dae,	// (0x00001dae) list_double2_large_graphic_pane_cp2_ParamLimits

0x1dae,	// (0x00001dae) list_double2_large_graphic_pane_cp2

0x1dae,	// (0x00001dae) list_double2_pane_cp2_ParamLimits

0x1dae,	// (0x00001dae) list_double2_pane_cp2

0x1dae,	// (0x00001dae) list_double_graphic_pane_cp2_ParamLimits

0x1dae,	// (0x00001dae) list_double_graphic_pane_cp2

0x1dae,	// (0x00001dae) list_double_large_graphic_pane_cp2_ParamLimits

0x1dae,	// (0x00001dae) list_double_large_graphic_pane_cp2

0x1dae,	// (0x00001dae) list_double_number_pane_cp2_ParamLimits

0x1dae,	// (0x00001dae) list_double_number_pane_cp2

0x1dae,	// (0x00001dae) list_double_pane_cp2_ParamLimits

0x1dae,	// (0x00001dae) list_double_pane_cp2

0xc06e,	// (0x0000c06e) list_single_2graphic_pane_cp2_ParamLimits

0xc06e,	// (0x0000c06e) list_single_2graphic_pane_cp2

0xc06e,	// (0x0000c06e) list_single_graphic_heading_pane_cp2_ParamLimits

0xc06e,	// (0x0000c06e) list_single_graphic_heading_pane_cp2

0xc06e,	// (0x0000c06e) list_single_graphic_pane_cp2_ParamLimits

0xc06e,	// (0x0000c06e) list_single_graphic_pane_cp2

0xc06e,	// (0x0000c06e) list_single_heading_pane_cp2_ParamLimits

0xc06e,	// (0x0000c06e) list_single_heading_pane_cp2

0x1deb,	// (0x00001deb) list_single_large_graphic_pane_cp2_ParamLimits

0x1deb,	// (0x00001deb) list_single_large_graphic_pane_cp2

0xc06e,	// (0x0000c06e) list_single_number_heading_pane_cp2_ParamLimits

0xc06e,	// (0x0000c06e) list_single_number_heading_pane_cp2

0xc06e,	// (0x0000c06e) list_single_number_pane_cp2_ParamLimits

0xc06e,	// (0x0000c06e) list_single_number_pane_cp2

0xc06e,	// (0x0000c06e) list_single_pane_cp2_ParamLimits

0xc06e,	// (0x0000c06e) list_single_pane_cp2

0x1ec2,	// (0x00001ec2) bg_popup_sub_pane_cp22

0x1ee7,	// (0x00001ee7) popup_side_volume_key_window_g1

0x1f11,	// (0x00001f11) popup_side_volume_key_window_t1

0x1f2d,	// (0x00001f2d) volume_small_pane_cp1

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24_ParamLimits

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24

0x1f35,	// (0x00001f35) fep_china_uni_candidate_pane_ParamLimits

0x1f35,	// (0x00001f35) fep_china_uni_candidate_pane

0x1f49,	// (0x00001f49) fep_china_uni_entry_pane

0x1f59,	// (0x00001f59) popup_fep_china_uni_window_g1

0x1f75,	// (0x00001f75) fep_china_uni_entry_pane_g1

0x1f7d,	// (0x00001f7d) fep_china_uni_entry_pane_g2

0x0001,

0xac8d,	// (0x0000ac8d) fep_china_uni_entry_pane_g

0x1f85,	// (0x00001f85) fep_entry_item_pane

0x1f8f,	// (0x00001f8f) fep_candidate_item_pane

0x1f97,	// (0x00001f97) fep_china_uni_candidate_pane_g1

0x1f9f,	// (0x00001f9f) fep_china_uni_candidate_pane_g2

0x1fa7,	// (0x00001fa7) fep_china_uni_candidate_pane_g3

0x1faf,	// (0x00001faf) fep_china_uni_candidate_pane_g4

0x0003,

0xac92,	// (0x0000ac92) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1fb7,	// (0x00001fb7) fep_entry_item_pane_t1_ParamLimits

0x1fb7,	// (0x00001fb7) fep_entry_item_pane_t1

0x1fcd,	// (0x00001fcd) fep_candidate_item_pane_t1_ParamLimits

0x1fcd,	// (0x00001fcd) fep_candidate_item_pane_t1

0x1fe2,	// (0x00001fe2) fep_candidate_item_pane_t2_ParamLimits

0x1fe2,	// (0x00001fe2) fep_candidate_item_pane_t2

0x0001,

0xac9b,	// (0x0000ac9b) fep_candidate_item_pane_t_ParamLimits

0xac9b,	// (0x0000ac9b) fep_candidate_item_pane_t

0x0507,	// (0x00000507) list_highlight_pane_cp31_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp31

0x1ff4,	// (0x00001ff4) level_1_signal_lsc

0x1ffd,	// (0x00001ffd) level_2_signal_lsc

0x2006,	// (0x00002006) level_3_signal_lsc

0x200f,	// (0x0000200f) level_4_signal_lsc

0x2018,	// (0x00002018) level_5_signal_lsc

0x2021,	// (0x00002021) level_6_signal_lsc

0x202a,	// (0x0000202a) level_7_signal_lsc

0x202a,	// (0x0000202a) level_1_battery_lsc

0x2033,	// (0x00002033) level_2_battery_lsc

0x203c,	// (0x0000203c) level_3_battery_lsc

0x2045,	// (0x00002045) level_4_battery_lsc

0x204e,	// (0x0000204e) level_5_battery_lsc

0x2057,	// (0x00002057) level_6_battery_lsc

0x1ff4,	// (0x00001ff4) level_7_battery_lsc

0x2060,	// (0x00002060) scroll_handle_focus_pane_g1

0x2069,	// (0x00002069) scroll_handle_focus_pane_g2

0x2072,	// (0x00002072) scroll_handle_focus_pane_g3

0x0002,

0xaca0,	// (0x0000aca0) scroll_handle_focus_pane_g

0xc0fb,	// (0x0000c0fb) list_single_2graphic_pane_g1_ParamLimits

0xc0fb,	// (0x0000c0fb) list_single_2graphic_pane_g1

0xba2a,	// (0x0000ba2a) list_single_2graphic_pane_g2_ParamLimits

0xba2a,	// (0x0000ba2a) list_single_2graphic_pane_g2

0x3577,	// (0x00003577) list_single_2graphic_pane_g3_ParamLimits

0x3577,	// (0x00003577) list_single_2graphic_pane_g3

0xc107,	// (0x0000c107) list_single_2graphic_pane_g4_ParamLimits

0xc107,	// (0x0000c107) list_single_2graphic_pane_g4

0x0003,

0xf34f,	// (0x0000f34f) list_single_2graphic_pane_g_ParamLimits

0xf34f,	// (0x0000f34f) list_single_2graphic_pane_g

0xc118,	// (0x0000c118) list_single_2graphic_pane_t1_ParamLimits

0xc118,	// (0x0000c118) list_single_2graphic_pane_t1

0xc146,	// (0x0000c146) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc146,	// (0x0000c146) list_double2_graphic_large_graphic_pane_g1

0xba73,	// (0x0000ba73) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xba73,	// (0x0000ba73) list_double2_graphic_large_graphic_pane_g2

0xba84,	// (0x0000ba84) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba84,	// (0x0000ba84) list_double2_graphic_large_graphic_pane_g3

0xc158,	// (0x0000c158) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc158,	// (0x0000c158) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf358,	// (0x0000f358) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf358,	// (0x0000f358) list_double2_graphic_large_graphic_pane_g

0xc164,	// (0x0000c164) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc164,	// (0x0000c164) list_double2_graphic_large_graphic_pane_t1

0xc17a,	// (0x0000c17a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc17a,	// (0x0000c17a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf361,	// (0x0000f361) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf361,	// (0x0000f361) list_double2_graphic_large_graphic_pane_t

0x238a,	// (0x0000238a) popup_fast_swap_window_ParamLimits

0x238a,	// (0x0000238a) popup_fast_swap_window

0x23a6,	// (0x000023a6) popup_side_volume_key_window

0x23c2,	// (0x000023c2) stacon_top_pane

0x23cc,	// (0x000023cc) status_pane_ParamLimits

0x23cc,	// (0x000023cc) status_pane

0x23c2,	// (0x000023c2) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x12aa,	// (0x000012aa) scroll_pane_cp121

0x12a1,	// (0x000012a1) set_content_pane

0x210a,	// (0x0000210a) bg_active_tab_pane_g1_cp1

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp1

0x211c,	// (0x0000211c) bg_active_tab_pane_g3_cp1

0x210a,	// (0x0000210a) bg_passive_tab_pane_g1_cp1

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp1

0x211c,	// (0x0000211c) bg_passive_tab_pane_g3_cp1

0x2125,	// (0x00002125) bg_active_tab_pane_g1_cp2

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp2

0x212e,	// (0x0000212e) bg_active_tab_pane_g3_cp2

0x2125,	// (0x00002125) bg_passive_tab_pane_g1_cp2

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp2

0x212e,	// (0x0000212e) bg_passive_tab_pane_g3_cp2

0x2137,	// (0x00002137) bg_active_tab_pane_g1_cp3

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp3

0x2140,	// (0x00002140) bg_active_tab_pane_g3_cp3

0x2137,	// (0x00002137) bg_passive_tab_pane_g1_cp3

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp3

0x2140,	// (0x00002140) bg_passive_tab_pane_g3_cp3

0x2149,	// (0x00002149) bg_active_tab_pane_g1_cp4

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp4

0x2154,	// (0x00002154) bg_active_tab_pane_g3_cp4

0x2149,	// (0x00002149) bg_passive_tab_pane_g1_cp4

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp4

0x2154,	// (0x00002154) bg_passive_tab_pane_g3_cp4

0x22de,	// (0x000022de) bg_active_tab_pane_g1_cp5

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp5

0x22e7,	// (0x000022e7) bg_active_tab_pane_g3_cp5

0x22de,	// (0x000022de) bg_passive_tab_pane_g1_cp5

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp5

0x22e7,	// (0x000022e7) bg_passive_tab_pane_g3_cp5

0x5816,	// (0x00005816) list_set_graphic_pane_ParamLimits

0x5816,	// (0x00005816) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xc18c,	// (0x0000c18c) list_set_graphic_pane_g1_ParamLimits

0xc18c,	// (0x0000c18c) list_set_graphic_pane_g1

0xc198,	// (0x0000c198) list_set_graphic_pane_g2_ParamLimits

0xc198,	// (0x0000c198) list_set_graphic_pane_g2

0x0001,

0xf366,	// (0x0000f366) list_set_graphic_pane_g_ParamLimits

0xf366,	// (0x0000f366) list_set_graphic_pane_g

0x0009,

0xb036,	// (0x0000b036) volume_small_pane_cp_g

0x233d,	// (0x0000233d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x233d,	// (0x0000233d) list_double2_large_graphic_pane_g1_cp2

0x2349,	// (0x00002349) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2349,	// (0x00002349) list_double2_large_graphic_pane_g2_cp2

0x235a,	// (0x0000235a) list_double2_large_graphic_pane_g3_cp2

0x2362,	// (0x00002362) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2362,	// (0x00002362) list_double2_large_graphic_pane_t1_cp2

0x2378,	// (0x00002378) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2378,	// (0x00002378) list_double2_large_graphic_pane_t2_cp2

0x4b25,	// (0x00004b25) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4b25,	// (0x00004b25) list_double_large_graphic_pane_g1_cp2

0x4b36,	// (0x00004b36) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4b36,	// (0x00004b36) list_double_large_graphic_pane_g2_cp2

0x24e8,	// (0x000024e8) list_double_large_graphic_pane_g3_cp2

0x4b47,	// (0x00004b47) list_double_large_graphic_pane_g4_cp

0x4b4f,	// (0x00004b4f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4b4f,	// (0x00004b4f) list_double_large_graphic_pane_t1_cp2

0x4b66,	// (0x00004b66) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4b66,	// (0x00004b66) list_double_large_graphic_pane_t2_cp2

0x23da,	// (0x000023da) list_double2_graphic_pane_g1_cp2_ParamLimits

0x23da,	// (0x000023da) list_double2_graphic_pane_g1_cp2

0x23e8,	// (0x000023e8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x23e8,	// (0x000023e8) list_double2_graphic_pane_g2_cp2

0x23f9,	// (0x000023f9) list_double2_graphic_pane_g3_cp2

0x2403,	// (0x00002403) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2403,	// (0x00002403) list_double2_graphic_pane_t1_cp2

0x2419,	// (0x00002419) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2419,	// (0x00002419) list_double2_graphic_pane_t2_cp2

0x242b,	// (0x0000242b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x242b,	// (0x0000242b) list_single_number_heading_pane_g1_cp2

0x2437,	// (0x00002437) list_single_number_heading_pane_g2_cp2

0x243f,	// (0x0000243f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x243f,	// (0x0000243f) list_single_number_heading_pane_t1_cp2

0x2455,	// (0x00002455) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2455,	// (0x00002455) list_single_number_heading_pane_t2_cp2

0x2467,	// (0x00002467) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2467,	// (0x00002467) list_single_number_heading_pane_t3_cp2

0x242b,	// (0x0000242b) list_single_heading_pane_g1_cp2_ParamLimits

0x242b,	// (0x0000242b) list_single_heading_pane_g1_cp2

0x2437,	// (0x00002437) list_single_heading_pane_g2_cp2

0x243f,	// (0x0000243f) list_single_heading_pane_t1_cp2_ParamLimits

0x243f,	// (0x0000243f) list_single_heading_pane_t1_cp2

0x492d,	// (0x0000492d) list_single_heading_pane_t2_cp2_ParamLimits

0x492d,	// (0x0000492d) list_single_heading_pane_t2_cp2

0x4875,	// (0x00004875) list_double_graphic_pane_g1_cp2_ParamLimits

0x4875,	// (0x00004875) list_double_graphic_pane_g1_cp2

0x4881,	// (0x00004881) list_double_graphic_pane_g2_cp2_ParamLimits

0x4881,	// (0x00004881) list_double_graphic_pane_g2_cp2

0x4890,	// (0x00004890) list_double_graphic_pane_g3_cp2

0x4898,	// (0x00004898) list_double_graphic_pane_t1_cp2_ParamLimits

0x4898,	// (0x00004898) list_double_graphic_pane_t1_cp2

0x48ae,	// (0x000048ae) list_double_graphic_pane_t2_cp2_ParamLimits

0x48ae,	// (0x000048ae) list_double_graphic_pane_t2_cp2

0x24dc,	// (0x000024dc) list_double_number_pane_g1_cp2_ParamLimits

0x24dc,	// (0x000024dc) list_double_number_pane_g1_cp2

0x24e8,	// (0x000024e8) list_double_number_pane_g2_cp2

0x4839,	// (0x00004839) list_double_number_pane_t1_cp2_ParamLimits

0x4839,	// (0x00004839) list_double_number_pane_t1_cp2

0x484d,	// (0x0000484d) list_double_number_pane_t2_cp2_ParamLimits

0x484d,	// (0x0000484d) list_double_number_pane_t2_cp2

0x4863,	// (0x00004863) list_double_number_pane_t3_cp2_ParamLimits

0x4863,	// (0x00004863) list_double_number_pane_t3_cp2

0x4711,	// (0x00004711) list_single_graphic_pane_g1_cp2_ParamLimits

0x4711,	// (0x00004711) list_single_graphic_pane_g1_cp2

0x2540,	// (0x00002540) list_single_graphic_pane_g2_cp2_ParamLimits

0x2540,	// (0x00002540) list_single_graphic_pane_g2_cp2

0x254c,	// (0x0000254c) list_single_graphic_pane_g3_cp2

0x46e7,	// (0x000046e7) list_single_graphic_pane_t1_cp2_ParamLimits

0x46e7,	// (0x000046e7) list_single_graphic_pane_t1_cp2

0x2540,	// (0x00002540) list_single_number_pane_g1_cp2_ParamLimits

0x2540,	// (0x00002540) list_single_number_pane_g1_cp2

0x254c,	// (0x0000254c) list_single_number_pane_g2_cp2

0x46e7,	// (0x000046e7) list_single_number_pane_t1_cp2_ParamLimits

0x46e7,	// (0x000046e7) list_single_number_pane_t1_cp2

0x46fd,	// (0x000046fd) list_single_number_pane_t2_cp2_ParamLimits

0x46fd,	// (0x000046fd) list_single_number_pane_t2_cp2

0x2349,	// (0x00002349) list_double2_pane_g1_cp2_ParamLimits

0x2349,	// (0x00002349) list_double2_pane_g1_cp2

0x235a,	// (0x0000235a) list_double2_pane_g2_cp2

0x24b4,	// (0x000024b4) list_double2_pane_t1_cp2_ParamLimits

0x24b4,	// (0x000024b4) list_double2_pane_t1_cp2

0x24ca,	// (0x000024ca) list_double2_pane_t2_cp2_ParamLimits

0x24ca,	// (0x000024ca) list_double2_pane_t2_cp2

0x24dc,	// (0x000024dc) list_double_pane_g1_cp2_ParamLimits

0x24dc,	// (0x000024dc) list_double_pane_g1_cp2

0x24e8,	// (0x000024e8) list_double_pane_g2_cp2

0x24f0,	// (0x000024f0) list_double_pane_t1_cp2_ParamLimits

0x24f0,	// (0x000024f0) list_double_pane_t1_cp2

0x2506,	// (0x00002506) list_double_pane_t2_cp2_ParamLimits

0x2506,	// (0x00002506) list_double_pane_t2_cp2

0x2530,	// (0x00002530) list_single_pane_cp2_g3

0x2540,	// (0x00002540) list_single_pane_g1_cp2_ParamLimits

0x2540,	// (0x00002540) list_single_pane_g1_cp2

0x254c,	// (0x0000254c) list_single_pane_g2_cp2

0x2554,	// (0x00002554) list_single_pane_t1_cp2_ParamLimits

0x2554,	// (0x00002554) list_single_pane_t1_cp2

0x256c,	// (0x0000256c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x256c,	// (0x0000256c) list_single_large_graphic_pane_g1_cp2

0x2578,	// (0x00002578) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2578,	// (0x00002578) list_single_large_graphic_pane_g2_cp2

0x2584,	// (0x00002584) list_single_large_graphic_pane_g3_cp2

0x258c,	// (0x0000258c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x258c,	// (0x0000258c) list_single_large_graphic_pane_g4_cp1

0x25a6,	// (0x000025a6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x25a6,	// (0x000025a6) list_single_large_graphic_pane_t1_cp2

0x4560,	// (0x00004560) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4560,	// (0x00004560) list_single_graphic_heading_pane_g1_cp2

0x452d,	// (0x0000452d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x452d,	// (0x0000452d) list_single_graphic_heading_pane_g4_cp2

0x254c,	// (0x0000254c) list_single_graphic_heading_pane_g5_cp2

0x456c,	// (0x0000456c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x456c,	// (0x0000456c) list_single_graphic_heading_pane_t1_cp2

0x4582,	// (0x00004582) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4582,	// (0x00004582) list_single_graphic_heading_pane_t2_cp2

0x4521,	// (0x00004521) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4521,	// (0x00004521) list_single_2graphic_pane_g1_cp2

0x452d,	// (0x0000452d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x452d,	// (0x0000452d) list_single_2graphic_pane_g2_cp2

0x254c,	// (0x0000254c) list_single_2graphic_pane_g3_cp2

0x453e,	// (0x0000453e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x453e,	// (0x0000453e) list_single_2graphic_pane_g4_cp2

0x454a,	// (0x0000454a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x454a,	// (0x0000454a) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x40f9,	// (0x000040f9) list_highlight_pane_g1_cp1

0x4101,	// (0x00004101) list_highlight_pane_g2_cp1

0x4109,	// (0x00004109) list_highlight_pane_g3_cp1

0x4111,	// (0x00004111) list_highlight_pane_g4_cp1

0x4119,	// (0x00004119) list_highlight_pane_g5_cp1

0x4121,	// (0x00004121) list_highlight_pane_g6_cp1

0x4129,	// (0x00004129) list_highlight_pane_g7_cp1

0x4131,	// (0x00004131) list_highlight_pane_g8_cp1

0x4139,	// (0x00004139) list_highlight_pane_g9_cp1

0xd00a,	// (0x0000d00a) form_field_slider_pane_t3

0xd018,	// (0x0000d018) form_field_slider_pane_t4

0x4035,	// (0x00004035) slider_form_pane_ParamLimits

0x4035,	// (0x00004035) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4977,	// (0x00004977) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xae53,	// (0x0000ae53) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x25bc,	// (0x000025bc) text_digital

0x25cb,	// (0x000025cb) text_primary

0x25da,	// (0x000025da) text_primary_small

0x25e9,	// (0x000025e9) text_secondary

0x25f8,	// (0x000025f8) text_title

0x5249,	// (0x00005249) bg_passive_tab_pane_g1_cp3_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp3_srt

0x5252,	// (0x00005252) bg_passive_tab_pane_g3_cp3_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt

0x525b,	// (0x0000525b) tabs_4_active_pane_srt_g1

0xd39e,	// (0x0000d39e) tabs_4_active_pane_srt_t1_ParamLimits

0xd39e,	// (0x0000d39e) tabs_4_active_pane_srt_t1

0x5249,	// (0x00005249) bg_active_tab_pane_g1_cp3_copy1

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp3_copy1

0x5252,	// (0x00005252) bg_active_tab_pane_g3_cp3_copy1

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt

0x2b80,	// (0x00002b80) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b80,	// (0x00002b80) bg_passive_tab_pane_cp4_srt

0x4e1a,	// (0x00004e1a) bg_passive_tab_pane_g1_cp4_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp4_srt

0x4e23,	// (0x00004e23) bg_passive_tab_pane_g3_cp4_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt

0xd18a,	// (0x0000d18a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd18a,	// (0x0000d18a) tabs_2_long_active_pane_srt_t1

0x4e1a,	// (0x00004e1a) bg_active_tab_pane_g1_cp4_srt

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp4_srt

0x4e23,	// (0x00004e23) bg_active_tab_pane_g3_cp4_srt

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt

0x2b80,	// (0x00002b80) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b80,	// (0x00002b80) bg_passive_tab_pane_cp5_srt

0x22de,	// (0x000022de) bg_passive_tab_pane_g1_cp5_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp5_srt

0x22e7,	// (0x000022e7) bg_passive_tab_pane_g3_cp5_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt

0xd174,	// (0x0000d174) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd174,	// (0x0000d174) tabs_3_long_active_pane_srt_t1

0x22de,	// (0x000022de) bg_active_tab_pane_g1_cp5_srt

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp5_srt

0x22e7,	// (0x000022e7) bg_active_tab_pane_g3_cp5_srt

0x4dfa,	// (0x00004dfa) navi_text_pane_srt_t1

0x4df2,	// (0x00004df2) navi_icon_pane_srt_g1

0x2868,	// (0x00002868) midp_editing_number_pane_srt

0x2607,	// (0x00002607) midp_ticker_pane_srt

0x2870,	// (0x00002870) midp_ticker_pane_srt_g1

0x2878,	// (0x00002878) midp_ticker_pane_srt_g2

0x0001,

0xacdd,	// (0x0000acdd) midp_ticker_pane_srt_g

0x2880,	// (0x00002880) midp_ticker_pane_srt_t1

0x4de3,	// (0x00004de3) midp_editing_number_pane_t1_copy1

0x2b80,	// (0x00002b80) listscroll_midp_pane

0x2b80,	// (0x00002b80) midp_form_pane

0x2671,	// (0x00002671) midp_info_popup_window_ParamLimits

0x2671,	// (0x00002671) midp_info_popup_window

0x15bf,	// (0x000015bf) bg_popup_sub_pane_cp50_ParamLimits

0x15bf,	// (0x000015bf) bg_popup_sub_pane_cp50

0x3d31,	// (0x00003d31) listscroll_midp_info_pane_ParamLimits

0x3d31,	// (0x00003d31) listscroll_midp_info_pane

0x3d19,	// (0x00003d19) listscroll_form_midp_pane_ParamLimits

0x3d19,	// (0x00003d19) listscroll_form_midp_pane

0x3d25,	// (0x00003d25) scroll_bar_cp050

0xcffe,	// (0x0000cffe) list_midp_pane

0x5ffc,	// (0x00005ffc) signal_pane_g2_cp

0x3c33,	// (0x00003c33) listscroll_midp_info_pane_t1_ParamLimits

0x3c33,	// (0x00003c33) listscroll_midp_info_pane_t1

0x3c4b,	// (0x00003c4b) listscroll_midp_info_pane_t2_ParamLimits

0x3c4b,	// (0x00003c4b) listscroll_midp_info_pane_t2

0x3c89,	// (0x00003c89) listscroll_midp_info_pane_t3_ParamLimits

0x3c89,	// (0x00003c89) listscroll_midp_info_pane_t3

0x3cc3,	// (0x00003cc3) listscroll_midp_info_pane_t4_ParamLimits

0x3cc3,	// (0x00003cc3) listscroll_midp_info_pane_t4

0x0003,

0xad8e,	// (0x0000ad8e) listscroll_midp_info_pane_t_ParamLimits

0xad8e,	// (0x0000ad8e) listscroll_midp_info_pane_t

0x1683,	// (0x00001683) scroll_pane_cp21

0x3bd1,	// (0x00003bd1) form_midp_field_choice_group_pane

0x3bda,	// (0x00003bda) form_midp_field_text_pane

0x3c19,	// (0x00003c19) form_midp_field_time_pane

0x3c21,	// (0x00003c21) form_midp_gauge_slider_pane

0x3c2a,	// (0x00003c2a) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcfe7,	// (0x0000cfe7) list_single_midp_pane_ParamLimits

0xcfe7,	// (0x0000cfe7) list_single_midp_pane

0xcfc5,	// (0x0000cfc5) form_midp_field_text_pane_t1

0x388d,	// (0x0000388d) input_focus_pane_cp050

0x3b91,	// (0x00003b91) list_midp_form_text_pane

0x3b29,	// (0x00003b29) form_midp_field_choice_group_pane_t1

0x3b37,	// (0x00003b37) input_focus_pane_cp051

0x3b4b,	// (0x00003b4b) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3b0d,	// (0x00003b0d) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3b1b,	// (0x00003b1b) form_midp_field_time_pane_t2

0x0001,

0x271f,	// (0x0000271f) aid_navinavi_width_2_pane

0xad89,	// (0x0000ad89) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3acd,	// (0x00003acd) form_midp_gauge_slider_pane_t1

0x3adb,	// (0x00003adb) form_midp_gauge_slider_pane_t2

0xcfa9,	// (0x0000cfa9) form_midp_gauge_slider_pane_t3

0xcfb7,	// (0x0000cfb7) form_midp_gauge_slider_pane_t4

0x0003,

0xf3a7,	// (0x0000f3a7) form_midp_gauge_slider_pane_t

0x3b05,	// (0x00003b05) form_midp_slider_pane

0x0507,	// (0x00000507) bg_input_focus_pane_cp041_ParamLimits

0x0507,	// (0x00000507) bg_input_focus_pane_cp041

0x3a9a,	// (0x00003a9a) form_midp_gauge_wait_pane_t1_ParamLimits

0x3a9a,	// (0x00003a9a) form_midp_gauge_wait_pane_t1

0x3aac,	// (0x00003aac) form_midp_gauge_wait_pane_t2_ParamLimits

0x3aac,	// (0x00003aac) form_midp_gauge_wait_pane_t2

0x0001,

0xad7b,	// (0x0000ad7b) form_midp_gauge_wait_pane_t_ParamLimits

0xad7b,	// (0x0000ad7b) form_midp_gauge_wait_pane_t

0x3abe,	// (0x00003abe) form_midp_wait_pane_ParamLimits

0x3abe,	// (0x00003abe) form_midp_wait_pane

0x3a64,	// (0x00003a64) form_midp_image_pane_g1

0x3a6d,	// (0x00003a6d) form_midp_image_pane_t1

0x3a7c,	// (0x00003a7c) form_midp_image_pane_t2

0x3a8b,	// (0x00003a8b) form_midp_image_pane_t3

0x0002,

0xad74,	// (0x0000ad74) form_midp_image_pane_t

0x3a4c,	// (0x00003a4c) list_single_midp_pane_g1

0x3a55,	// (0x00003a55) list_single_midp_pane_t1

0xcf94,	// (0x0000cf94) list_midp_form_item_pane_ParamLimits

0xcf94,	// (0x0000cf94) list_midp_form_item_pane

0x26c7,	// (0x000026c7) list_midp_form_item_pane_t1

0x26d6,	// (0x000026d6) midp_ticker_pane_g1

0x26e2,	// (0x000026e2) midp_ticker_pane_g2

0x0001,

0xacc3,	// (0x0000acc3) midp_ticker_pane_g

0x26ee,	// (0x000026ee) midp_ticker_pane_t1

0x50df,	// (0x000050df) midp_editing_number_pane_t1

0x50bd,	// (0x000050bd) midp_editing_number_pane

0x50cc,	// (0x000050cc) midp_ticker_pane

0x4dab,	// (0x00004dab) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4db3,	// (0x00004db3) listscroll_ai_message_pane

0x4d35,	// (0x00004d35) ai_message_heading_pane_g1_ParamLimits

0x4d35,	// (0x00004d35) ai_message_heading_pane_g1

0x4d41,	// (0x00004d41) ai_message_heading_pane_g2_ParamLimits

0x4d41,	// (0x00004d41) ai_message_heading_pane_g2

0x4d4d,	// (0x00004d4d) ai_message_heading_pane_g3_ParamLimits

0x4d4d,	// (0x00004d4d) ai_message_heading_pane_g3

0x4d59,	// (0x00004d59) ai_message_heading_pane_g4_ParamLimits

0x4d59,	// (0x00004d59) ai_message_heading_pane_g4

0x0003,

0xaeb5,	// (0x0000aeb5) ai_message_heading_pane_g_ParamLimits

0xaeb5,	// (0x0000aeb5) ai_message_heading_pane_g

0x4d65,	// (0x00004d65) ai_message_heading_pane_t1_ParamLimits

0x4d65,	// (0x00004d65) ai_message_heading_pane_t1

0x4d7f,	// (0x00004d7f) ai_message_heading_pane_t2_ParamLimits

0x4d7f,	// (0x00004d7f) ai_message_heading_pane_t2

0x0001,

0xaebe,	// (0x0000aebe) ai_message_heading_pane_t_ParamLimits

0xaebe,	// (0x0000aebe) ai_message_heading_pane_t

0x4d91,	// (0x00004d91) bg_popup_heading_pane_cp1_ParamLimits

0x4d91,	// (0x00004d91) bg_popup_heading_pane_cp1

0x4d23,	// (0x00004d23) list_ai_message_pane_ParamLimits

0x4d23,	// (0x00004d23) list_ai_message_pane

0x1683,	// (0x00001683) scroll_pane_cp10

0x4c6f,	// (0x00004c6f) list_ai_message_pane_g1

0x4c77,	// (0x00004c77) list_ai_message_pane_g2

0x0001,

0xae92,	// (0x0000ae92) list_ai_message_pane_g

0x4c7f,	// (0x00004c7f) list_ai_message_pane_t1_ParamLimits

0x4c7f,	// (0x00004c7f) list_ai_message_pane_t1

0x4c94,	// (0x00004c94) list_ai_message_pane_t2_ParamLimits

0x4c94,	// (0x00004c94) list_ai_message_pane_t2

0x4ca9,	// (0x00004ca9) list_ai_message_pane_t3_ParamLimits

0x4ca9,	// (0x00004ca9) list_ai_message_pane_t3

0x4cbe,	// (0x00004cbe) list_ai_message_pane_t4_ParamLimits

0x4cbe,	// (0x00004cbe) list_ai_message_pane_t4

0x0003,

0xae97,	// (0x0000ae97) list_ai_message_pane_t_ParamLimits

0xae97,	// (0x0000ae97) list_ai_message_pane_t

0xd141,	// (0x0000d141) cell_ai_soft_ind_pane_ParamLimits

0xd141,	// (0x0000d141) cell_ai_soft_ind_pane

0x2700,	// (0x00002700) cell_ai_soft_ind_pane_g1_ParamLimits

0x2700,	// (0x00002700) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x270d,	// (0x0000270d) text_secondary_cp56_ParamLimits

0x270d,	// (0x0000270d) text_secondary_cp56

0x4c2f,	// (0x00004c2f) example_general_pane_ParamLimits

0x4c2f,	// (0x00004c2f) example_general_pane

0x4c3b,	// (0x00004c3b) example_parent_pane_g1_ParamLimits

0x4c3b,	// (0x00004c3b) example_parent_pane_g1

0x4c47,	// (0x00004c47) example_parent_pane_t1_ParamLimits

0x4c47,	// (0x00004c47) example_parent_pane_t1

0xc7df,	// (0x0000c7df) popup_preview_text_window_ParamLimits

0xc7df,	// (0x0000c7df) popup_preview_text_window

0x2538,	// (0x00002538) list_single_pane_cp2_g4

0x08e3,	// (0x000008e3) bg_popup_preview_window_pane_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_preview_window_pane

0x497f,	// (0x0000497f) popup_preview_text_window_t1_ParamLimits

0x497f,	// (0x0000497f) popup_preview_text_window_t1

0x499d,	// (0x0000499d) popup_preview_text_window_t2_ParamLimits

0x499d,	// (0x0000499d) popup_preview_text_window_t2

0x49e6,	// (0x000049e6) popup_preview_text_window_t3_ParamLimits

0x49e6,	// (0x000049e6) popup_preview_text_window_t3

0x4a2b,	// (0x00004a2b) popup_preview_text_window_t4_ParamLimits

0x4a2b,	// (0x00004a2b) popup_preview_text_window_t4

0x0004,

0xae66,	// (0x0000ae66) popup_preview_text_window_t_ParamLimits

0xae66,	// (0x0000ae66) popup_preview_text_window_t

0x4aa9,	// (0x00004aa9) scroll_pane_cp11

0x36d3,	// (0x000036d3) bg_popup_preview_window_pane_g1

0x493f,	// (0x0000493f) bg_popup_preview_window_pane_g2

0x4947,	// (0x00004947) bg_popup_preview_window_pane_g3

0x494f,	// (0x0000494f) bg_popup_preview_window_pane_g4

0x4957,	// (0x00004957) bg_popup_preview_window_pane_g5

0x495f,	// (0x0000495f) bg_popup_preview_window_pane_g6

0x4967,	// (0x00004967) bg_popup_preview_window_pane_g7

0x496f,	// (0x0000496f) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc75b,	// (0x0000c75b) popup_midp_note_alarm_window_ParamLimits

0xc75b,	// (0x0000c75b) popup_midp_note_alarm_window

0x136b,	// (0x0000136b) data_form_pane_ParamLimits

0xbe11,	// (0x0000be11) form_field_data_pane_g1

0xbe1b,	// (0x0000be1b) form_field_data_pane_t1_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_ParamLimits

0x13a7,	// (0x000013a7) data_form_wide_pane_ParamLimits

0x13b3,	// (0x000013b3) form_field_data_wide_pane_g1

0x13d3,	// (0x000013d3) form_field_data_wide_pane_t1_ParamLimits

0x0b8f,	// (0x00000b8f) input_focus_pane_cp6_ParamLimits

0xbf57,	// (0x0000bf57) input_popup_find_pane_g1_ParamLimits

0xbf57,	// (0x0000bf57) input_popup_find_pane_g1

0x19b1,	// (0x000019b1) aid_navi_side_left_pane

0x19c6,	// (0x000019c6) aid_navi_side_right_pane

0x41f4,	// (0x000041f4) bg_popup_window_pane_cp30_ParamLimits

0x41f4,	// (0x000041f4) bg_popup_window_pane_cp30

0x426e,	// (0x0000426e) popup_midp_note_alarm_window_g1_ParamLimits

0x426e,	// (0x0000426e) popup_midp_note_alarm_window_g1

0x429e,	// (0x0000429e) popup_midp_note_alarm_window_t1_ParamLimits

0x429e,	// (0x0000429e) popup_midp_note_alarm_window_t1

0x433f,	// (0x0000433f) popup_midp_note_alarm_window_t2_ParamLimits

0x433f,	// (0x0000433f) popup_midp_note_alarm_window_t2

0x43ed,	// (0x000043ed) popup_midp_note_alarm_window_t3_ParamLimits

0x43ed,	// (0x000043ed) popup_midp_note_alarm_window_t3

0x441f,	// (0x0000441f) popup_midp_note_alarm_window_t4_ParamLimits

0x441f,	// (0x0000441f) popup_midp_note_alarm_window_t4

0x4445,	// (0x00004445) popup_midp_note_alarm_window_t5_ParamLimits

0x4445,	// (0x00004445) popup_midp_note_alarm_window_t5

0x000a,

0xae03,	// (0x0000ae03) popup_midp_note_alarm_window_t_ParamLimits

0xae03,	// (0x0000ae03) popup_midp_note_alarm_window_t

0x44f1,	// (0x000044f1) wait_bar_pane_cp1_ParamLimits

0x44f1,	// (0x000044f1) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3eda,	// (0x00003eda) wait_border_pane_g1_copy1

0x13ea,	// (0x000013ea) form_field_popup_pane_g1

0xbe35,	// (0x0000be35) form_field_popup_pane_t1_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_cp7_ParamLimits

0x140a,	// (0x0000140a) list_form_pane_ParamLimits

0x1416,	// (0x00001416) form_field_popup_wide_pane_g1

0x141e,	// (0x0000141e) form_field_popup_wide_pane_t1_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_cp8_ParamLimits

0x1433,	// (0x00001433) list_form_wide_pane_ParamLimits

0x52d5,	// (0x000052d5) aid_size_cell_graphic_pane

0xbeb4,	// (0x0000beb4) data_form_pane_t1_ParamLimits

0xd2f5,	// (0x0000d2f5) data_form_wide_pane_t1_ParamLimits

0xcba7,	// (0x0000cba7) bg_status_flat_pane

0xb6c5,	// (0x0000b6c5) title_pane_t1_ParamLimits

0x04cf,	// (0x000004cf) title_pane_t2_ParamLimits

0x04f5,	// (0x000004f5) title_pane_t3_ParamLimits

0xf273,	// (0x0000f273) title_pane_t_ParamLimits

0x1cc4,	// (0x00001cc4) level_1_signal_ParamLimits

0x1cd6,	// (0x00001cd6) level_2_signal_ParamLimits

0x1ce9,	// (0x00001ce9) level_3_signal_ParamLimits

0x1cfc,	// (0x00001cfc) level_4_signal_ParamLimits

0x1d0f,	// (0x00001d0f) level_5_signal_ParamLimits

0x1d22,	// (0x00001d22) level_6_signal_ParamLimits

0x1d35,	// (0x00001d35) level_7_signal_ParamLimits

0x1cc4,	// (0x00001cc4) level_1_battery_ParamLimits

0x1cd6,	// (0x00001cd6) level_2_battery_ParamLimits

0x1ce9,	// (0x00001ce9) level_3_battery_ParamLimits

0x1cfc,	// (0x00001cfc) level_4_battery_ParamLimits

0x1d0f,	// (0x00001d0f) level_5_battery_ParamLimits

0x1d22,	// (0x00001d22) level_6_battery_ParamLimits

0x1d35,	// (0x00001d35) level_7_battery_ParamLimits

0x40f9,	// (0x000040f9) bg_status_flat_pane_g1

0x4101,	// (0x00004101) bg_status_flat_pane_g2

0x4109,	// (0x00004109) bg_status_flat_pane_g3

0x4111,	// (0x00004111) bg_status_flat_pane_g4

0x4119,	// (0x00004119) bg_status_flat_pane_g5

0x4121,	// (0x00004121) bg_status_flat_pane_g6

0x4129,	// (0x00004129) bg_status_flat_pane_g7

0xb751,	// (0x0000b751) tabs_3_active_pane_t1_ParamLimits

0xb751,	// (0x0000b751) tabs_3_passive_pane_t1_ParamLimits

0xb763,	// (0x0000b763) tabs_4_active_pane_t1_ParamLimits

0xb763,	// (0x0000b763) tabs_4_1_passive_pane_t1_ParamLimits

0xbf65,	// (0x0000bf65) tabs_2_active_pane_t1_ParamLimits

0xbf65,	// (0x0000bf65) tabs_2_passive_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_ParamLimits

0xbf77,	// (0x0000bf77) tabs_2_long_active_pane_t1_ParamLimits

0x2b80,	// (0x00002b80) bg_passive_tab_pane_cp4_ParamLimits

0x37b0,	// (0x000037b0) list_single_midp_graphic_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_ParamLimits

0xbf8a,	// (0x0000bf8a) tabs_3_long_active_pane_t1_ParamLimits

0x2b80,	// (0x00002b80) bg_passive_tab_pane_cp5_ParamLimits

0x37b0,	// (0x000037b0) list_single_midp_graphic_pane_t1

0xcba7,	// (0x0000cba7) bg_status_flat_pane_ParamLimits

0x32bd,	// (0x000032bd) indicator_pane_cp2_ParamLimits

0x32bd,	// (0x000032bd) indicator_pane_cp2

0xcd25,	// (0x0000cd25) navi_pane_srt_ParamLimits

0xcd25,	// (0x0000cd25) navi_pane_srt

0x340c,	// (0x0000340c) popup_clock_digital_analogue_window_cp1

0x068f,	// (0x0000068f) indicator_pane_t1

0x2607,	// (0x00002607) copy_highlight_pane

0x2607,	// (0x00002607) cursor_graphics_pane

0x2607,	// (0x00002607) graphic_within_text_pane

0x2607,	// (0x00002607) link_highlight_pane

0x4a6c,	// (0x00004a6c) popup_preview_text_window_t5_ParamLimits

0x4a6c,	// (0x00004a6c) popup_preview_text_window_t5

0x2727,	// (0x00002727) cursor_digital_pane

0x2727,	// (0x00002727) cursor_primary_pane

0x2738,	// (0x00002738) cursor_primary_small_pane

0x2740,	// (0x00002740) cursor_secondary_pane

0x2748,	// (0x00002748) cursor_title_pane

0x2727,	// (0x00002727) link_highlight_digital_pane

0x272f,	// (0x0000272f) link_highlight_primary_pane

0x2738,	// (0x00002738) link_highlight_primary_small_pane

0x2740,	// (0x00002740) link_highlight_secondary_pane

0x2748,	// (0x00002748) link_highlight_title_pane

0x2727,	// (0x00002727) copy_highlight_digital_pane

0x2727,	// (0x00002727) copy_highlight_primary_pane

0x2738,	// (0x00002738) copy_highlight_primary_small_pane

0x2740,	// (0x00002740) copy_highlight_secondary_pane

0x2748,	// (0x00002748) copy_highlight_title_pane

0x2740,	// (0x00002740) graphic_text_digital_pane

0x4197,	// (0x00004197) graphic_text_primary_pane

0x41a0,	// (0x000041a0) graphic_text_primary_small_pane

0x2738,	// (0x00002738) graphic_text_secondary_pane

0x2727,	// (0x00002727) graphic_text_title_pane

0xc253,	// (0x0000c253) cursor_primary_pane_g1

0x4189,	// (0x00004189) cursor_text_primary_t1

0xd03a,	// (0x0000d03a) cursor_primary_small_pane_g1

0x417b,	// (0x0000417b) cursor_text_primary_small_t1

0xd030,	// (0x0000d030) cursor_primary_small_pane_g1_copy1

0x4163,	// (0x00004163) cursor_text_primary_small_t1_copy1

0x4141,	// (0x00004141) cursor_text_title_t1

0xd026,	// (0x0000d026) cursor_title_pane_g1

0xc253,	// (0x0000c253) cursor_digital_pane_g1

0x275a,	// (0x0000275a) cursor_text_digital_t1

0x277f,	// (0x0000277f) link_highlight_primary_pane_g1

0x40ea,	// (0x000040ea) link_highlight_primary_pane_t1

0x2768,	// (0x00002768) link_highlight_primary_small_pane_g1

0x2770,	// (0x00002770) link_highlight_primary_small_pane_t1

0x277f,	// (0x0000277f) link_highlight_secondary_pane_g1

0x2787,	// (0x00002787) link_highlight_secondary_pane_t1

0x405e,	// (0x0000405e) link_highlight_title_pane_g1

0x4066,	// (0x00004066) link_highlight_title_pane_t1

0x4047,	// (0x00004047) link_highlight_digital_pane_g1

0x404f,	// (0x0000404f) link_highlight_digital_pane_t1

0x3f1f,	// (0x00003f1f) copy_highlight_primary_pane_g1

0x3f27,	// (0x00003f27) copy_highlight_primary_pane_t1

0x3ef9,	// (0x00003ef9) copy_highlight_primary_small_pane_g1

0x3f10,	// (0x00003f10) copy_highlight_primary_small_pane_t1

0x2796,	// (0x00002796) copy_highlight_secondary_pane_g1

0x279e,	// (0x0000279e) copy_highlight_secondary_pane_t1

0x3ef9,	// (0x00003ef9) copy_highlight_title_pane_g1

0x3f01,	// (0x00003f01) copy_highlight_title_pane_t1

0x3f1f,	// (0x00003f1f) copy_highlight_digital_pane_g1

0x5557,	// (0x00005557) copy_highlight_digital_pane_t1

0x54ab,	// (0x000054ab) graphic_text_primary_pane_g1

0x553b,	// (0x0000553b) graphic_text_primary_pane_t1

0x5549,	// (0x00005549) graphic_text_primary_pane_t2

0x0001,

0xaf32,	// (0x0000af32) graphic_text_primary_pane_t

0x5517,	// (0x00005517) graphic_text_primary_small_pane_g1

0x551f,	// (0x0000551f) graphic_text_primary_small_pane_t1

0x552d,	// (0x0000552d) graphic_text_primary_small_pane_t2

0x0001,

0xaf2d,	// (0x0000af2d) graphic_text_primary_small_pane_t

0x54f3,	// (0x000054f3) graphic_text_secondary_pane_g1

0x54fb,	// (0x000054fb) graphic_text_secondary_pane_t1

0x5509,	// (0x00005509) graphic_text_secondary_pane_t2

0x0001,

0xaf28,	// (0x0000af28) graphic_text_secondary_pane_t

0x54cf,	// (0x000054cf) graphic_text_title_pane_g1

0x54d7,	// (0x000054d7) graphic_text_title_pane_t1

0x54e5,	// (0x000054e5) graphic_text_title_pane_t2

0x0001,

0xaf23,	// (0x0000af23) graphic_text_title_pane_t

0x54ab,	// (0x000054ab) graphic_text_digital_pane_g1

0x54b3,	// (0x000054b3) graphic_text_digital_pane_t1

0x54c1,	// (0x000054c1) graphic_text_digital_pane_t2

0x0001,

0xaf1e,	// (0x0000af1e) graphic_text_digital_pane_t

0x0507,	// (0x00000507) navi_icon_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x0507,	// (0x00000507) navi_text_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_text_pane_srt

0x5476,	// (0x00005476) navi_navi_icon_text_pane_srt

0x547e,	// (0x0000547e) navi_navi_pane_srt_g1_ParamLimits

0x547e,	// (0x0000547e) navi_navi_pane_srt_g1

0x5490,	// (0x00005490) navi_navi_pane_srt_g2_ParamLimits

0x5490,	// (0x00005490) navi_navi_pane_srt_g2

0x0001,

0xaf19,	// (0x0000af19) navi_navi_pane_srt_g_ParamLimits

0xaf19,	// (0x0000af19) navi_navi_pane_srt_g

0x54a2,	// (0x000054a2) navi_navi_tabs_pane_srt

0x5476,	// (0x00005476) navi_navi_text_pane_srt

0x5476,	// (0x00005476) navi_navi_volume_pane_srt

0x5467,	// (0x00005467) navi_navi_text_pane_srt_t1

0x5442,	// (0x00005442) navi_navi_volume_pane_srt_g1

0x544a,	// (0x0000544a) volume_small_pane_srt_ParamLimits

0x544a,	// (0x0000544a) volume_small_pane_srt

0x27ad,	// (0x000027ad) volume_small_pane_srt_g1_ParamLimits

0x27ad,	// (0x000027ad) volume_small_pane_srt_g1

0x27bd,	// (0x000027bd) volume_small_pane_srt_g2_ParamLimits

0x27bd,	// (0x000027bd) volume_small_pane_srt_g2

0x27ce,	// (0x000027ce) volume_small_pane_srt_g3_ParamLimits

0x27ce,	// (0x000027ce) volume_small_pane_srt_g3

0x27df,	// (0x000027df) volume_small_pane_srt_g4_ParamLimits

0x27df,	// (0x000027df) volume_small_pane_srt_g4

0x27f0,	// (0x000027f0) volume_small_pane_srt_g5_ParamLimits

0x27f0,	// (0x000027f0) volume_small_pane_srt_g5

0x2801,	// (0x00002801) volume_small_pane_srt_g6_ParamLimits

0x2801,	// (0x00002801) volume_small_pane_srt_g6

0x2812,	// (0x00002812) volume_small_pane_srt_g7_ParamLimits

0x2812,	// (0x00002812) volume_small_pane_srt_g7

0x2823,	// (0x00002823) volume_small_pane_srt_g8_ParamLimits

0x2823,	// (0x00002823) volume_small_pane_srt_g8

0x2834,	// (0x00002834) volume_small_pane_srt_g9_ParamLimits

0x2834,	// (0x00002834) volume_small_pane_srt_g9

0x2845,	// (0x00002845) volume_small_pane_srt_g10_ParamLimits

0x2845,	// (0x00002845) volume_small_pane_srt_g10

0x0009,

0xacc8,	// (0x0000acc8) volume_small_pane_srt_g_ParamLimits

0xacc8,	// (0x0000acc8) volume_small_pane_srt_g

0x098c,	// (0x0000098c) query_popup_data_pane_cp2

0x5430,	// (0x00005430) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5430,	// (0x00005430) navi_navi_icon_text_pane_srt_t1

0x4197,	// (0x00004197) navi_tabs_2_long_pane_srt

0x4197,	// (0x00004197) navi_tabs_2_pane_srt

0x4197,	// (0x00004197) navi_tabs_3_long_pane_srt

0x4197,	// (0x00004197) navi_tabs_3_pane_srt

0x4197,	// (0x00004197) navi_tabs_4_pane_srt

0x5408,	// (0x00005408) tabs_2_active_pane_srt_ParamLimits

0x5408,	// (0x00005408) tabs_2_active_pane_srt

0x5418,	// (0x00005418) tabs_2_passive_pane_srt_ParamLimits

0x5418,	// (0x00005418) tabs_2_passive_pane_srt

0x388d,	// (0x0000388d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x388d,	// (0x0000388d) bg_passive_tab_pane_cp1_srt

0x53dc,	// (0x000053dc) bg_passive_tab_pane_g1_cp1_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp1_srt

0x53e5,	// (0x000053e5) bg_passive_tab_pane_g3_cp1_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt

0x53ee,	// (0x000053ee) tabs_2_active_pane_srt_g1

0xd41b,	// (0x0000d41b) tabs_2_active_pane_srt_t1_ParamLimits

0xd41b,	// (0x0000d41b) tabs_2_active_pane_srt_t1

0x53dc,	// (0x000053dc) bg_active_tab_pane_g1_cp1_srt

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp1_srt

0x53e5,	// (0x000053e5) bg_active_tab_pane_g3_cp1_srt

0x53a9,	// (0x000053a9) tabs_3_active_pane_srt_ParamLimits

0x53a9,	// (0x000053a9) tabs_3_active_pane_srt

0x53ba,	// (0x000053ba) tabs_3_passive_pane_cp_srt_ParamLimits

0x53ba,	// (0x000053ba) tabs_3_passive_pane_cp_srt

0x53cb,	// (0x000053cb) tabs_3_passive_pane_srt_ParamLimits

0x53cb,	// (0x000053cb) tabs_3_passive_pane_srt

0x388d,	// (0x0000388d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x388d,	// (0x0000388d) bg_passive_tab_pane_cp2_srt

0x2856,	// (0x00002856) bg_passive_tab_pane_g1_cp2_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp2_srt

0x285f,	// (0x0000285f) bg_passive_tab_pane_g3_cp2_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt

0x538f,	// (0x0000538f) tabs_3_active_pane_srt_g1

0xd405,	// (0x0000d405) tabs_3_active_pane_srt_t1_ParamLimits

0xd405,	// (0x0000d405) tabs_3_active_pane_srt_t1

0x2856,	// (0x00002856) bg_active_tab_pane_g1_cp2_srt

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp2_srt

0x285f,	// (0x0000285f) bg_active_tab_pane_g3_cp2_srt

0x5347,	// (0x00005347) tabs_4_active_pane_srt_ParamLimits

0x5347,	// (0x00005347) tabs_4_active_pane_srt

0x5359,	// (0x00005359) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5359,	// (0x00005359) tabs_4_passive_pane_cp2_srt

0x2afe,	// (0x00002afe) aid_size_cell_toolbar

0x4f03,	// (0x00004f03) main_idle_act_pane_ParamLimits

0x2d29,	// (0x00002d29) popup_large_graphic_colour_window_ParamLimits

0xca6b,	// (0x0000ca6b) popup_toolbar_window_ParamLimits

0xca6b,	// (0x0000ca6b) popup_toolbar_window

0x5109,	// (0x00005109) list_single_graphic_2heading_pane_ParamLimits

0x5109,	// (0x00005109) list_single_graphic_2heading_pane

0x1a3d,	// (0x00001a3d) aid_size_cell_apps_grid_lsc_pane

0x1a4f,	// (0x00001a4f) aid_size_cell_apps_grid_prt_pane

0x2b80,	// (0x00002b80) bg_wml_button_pane_cp1_ParamLimits

0x2b80,	// (0x00002b80) bg_wml_button_pane_cp1

0xcfc5,	// (0x0000cfc5) form_midp_field_text_pane_t1_ParamLimits

0x388d,	// (0x0000388d) input_focus_pane_cp050_ParamLimits

0x3b91,	// (0x00003b91) list_midp_form_text_pane_ParamLimits

0x3b37,	// (0x00003b37) input_focus_pane_cp051_ParamLimits

0x3b4b,	// (0x00003b4b) list_midp_choice_pane_ParamLimits

0xcf62,	// (0x0000cf62) list_single_2graphic_pane_cp3_ParamLimits

0xcf62,	// (0x0000cf62) list_single_2graphic_pane_cp3

0xcf75,	// (0x0000cf75) list_single_midp_graphic_pane_ParamLimits

0xcf75,	// (0x0000cf75) list_single_midp_graphic_pane

0x356b,	// (0x0000356b) list_single_graphic_2heading_pane_g1_ParamLimits

0x356b,	// (0x0000356b) list_single_graphic_2heading_pane_g1

0x2540,	// (0x00002540) list_single_graphic_2heading_pane_g4_ParamLimits

0x2540,	// (0x00002540) list_single_graphic_2heading_pane_g4

0x3577,	// (0x00003577) list_single_graphic_2heading_pane_g5_ParamLimits

0x3577,	// (0x00003577) list_single_graphic_2heading_pane_g5

0x0002,

0xad1b,	// (0x0000ad1b) list_single_graphic_2heading_pane_g_ParamLimits

0xad1b,	// (0x0000ad1b) list_single_graphic_2heading_pane_g

0x3583,	// (0x00003583) list_single_graphic_2heading_pane_t1_ParamLimits

0x3583,	// (0x00003583) list_single_graphic_2heading_pane_t1

0x3597,	// (0x00003597) list_single_graphic_2heading_pane_t2_ParamLimits

0x3597,	// (0x00003597) list_single_graphic_2heading_pane_t2

0x35b3,	// (0x000035b3) list_single_graphic_2heading_pane_t3_ParamLimits

0x35b3,	// (0x000035b3) list_single_graphic_2heading_pane_t3

0x0002,

0xad22,	// (0x0000ad22) list_single_graphic_2heading_pane_t_ParamLimits

0xad22,	// (0x0000ad22) list_single_graphic_2heading_pane_t

0x35cb,	// (0x000035cb) bg_popup_sub_pane_cp2

0x35f5,	// (0x000035f5) grid_toobar_pane

0x3631,	// (0x00003631) cell_toolbar_pane_ParamLimits

0x3631,	// (0x00003631) cell_toolbar_pane

0x3677,	// (0x00003677) cell_toolbar_pane_g1_ParamLimits

0x3677,	// (0x00003677) cell_toolbar_pane_g1

0x368b,	// (0x0000368b) cell_toolbar_pane_g2_ParamLimits

0x368b,	// (0x0000368b) cell_toolbar_pane_g2

0x0001,

0xad29,	// (0x0000ad29) cell_toolbar_pane_g_ParamLimits

0xad29,	// (0x0000ad29) cell_toolbar_pane_g

0x36ad,	// (0x000036ad) grid_highlight_pane_cp2_ParamLimits

0x36ad,	// (0x000036ad) grid_highlight_pane_cp2

0x36c7,	// (0x000036c7) toolbar_button_pane

0x36d3,	// (0x000036d3) toolbar_button_pane_g1

0x36db,	// (0x000036db) toolbar_button_pane_g2

0x36e3,	// (0x000036e3) toolbar_button_pane_g3

0x36eb,	// (0x000036eb) toolbar_button_pane_g4

0x36f3,	// (0x000036f3) toolbar_button_pane_g5

0x36fb,	// (0x000036fb) toolbar_button_pane_g6

0x3703,	// (0x00003703) toolbar_button_pane_g7

0x370b,	// (0x0000370b) toolbar_button_pane_g8

0x3713,	// (0x00003713) toolbar_button_pane_g9

0x0009,

0xad2e,	// (0x0000ad2e) toolbar_button_pane_g

0x3723,	// (0x00003723) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3723,	// (0x00003723) list_single_2graphic_pane_g1_cp3

0xcec4,	// (0x0000cec4) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcec4,	// (0x0000cec4) list_single_2graphic_pane_g2_cp3

0x3740,	// (0x00003740) list_single_2graphic_pane_g3_cp3

0x3748,	// (0x00003748) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3748,	// (0x00003748) list_single_2graphic_pane_g4_cp3

0x3754,	// (0x00003754) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3754,	// (0x00003754) list_single_2graphic_pane_t1_cp3

0x37a4,	// (0x000037a4) list_single_midp_graphic_pane_g2_ParamLimits

0x37a4,	// (0x000037a4) list_single_midp_graphic_pane_g2

0x2b06,	// (0x00002b06) aid_zoom_text_primary

0x2b0e,	// (0x00002b0e) aid_zoom_text_secondary

0x2913,	// (0x00002913) status_small_pane_g7_ParamLimits

0x2913,	// (0x00002913) status_small_pane_g7

0x2936,	// (0x00002936) status_small_pane_t1_ParamLimits

0xb6a1,	// (0x0000b6a1) title_pane_g2

0x0003,

0xf26a,	// (0x0000f26a) title_pane_g

0xb919,	// (0x0000b919) aid_size_cell_colour_1_pane_ParamLimits

0xb919,	// (0x0000b919) aid_size_cell_colour_1_pane

0xb92d,	// (0x0000b92d) aid_size_cell_colour_2_pane_ParamLimits

0xb92d,	// (0x0000b92d) aid_size_cell_colour_2_pane

0xb941,	// (0x0000b941) aid_size_cell_colour_3_pane_ParamLimits

0xb941,	// (0x0000b941) aid_size_cell_colour_3_pane

0xb955,	// (0x0000b955) aid_size_cell_colour_4_pane_ParamLimits

0xb955,	// (0x0000b955) aid_size_cell_colour_4_pane

0x18b9,	// (0x000018b9) title_pane_stacon_g1_ParamLimits

0x18b9,	// (0x000018b9) title_pane_stacon_g1

0x3f7e,	// (0x00003f7e) popup_note_wait_window_g3_ParamLimits

0x3f7e,	// (0x00003f7e) popup_note_wait_window_g3

0x3ff4,	// (0x00003ff4) popup_note_wait_window_t5_ParamLimits

0x3ff4,	// (0x00003ff4) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc479,	// (0x0000c479) popup_feb_china_hwr_fs_window_ParamLimits

0xc479,	// (0x0000c479) popup_feb_china_hwr_fs_window

0xced5,	// (0x0000ced5) aid_size_cell_hwr_fs_ParamLimits

0xced5,	// (0x0000ced5) aid_size_cell_hwr_fs

0x388d,	// (0x0000388d) bg_popup_sub_pane_cp3_ParamLimits

0x388d,	// (0x0000388d) bg_popup_sub_pane_cp3

0xceea,	// (0x0000ceea) grid_hwr_fs_pane_ParamLimits

0xceea,	// (0x0000ceea) grid_hwr_fs_pane

0x38b1,	// (0x000038b1) linegrid_hwr_fs_pane_ParamLimits

0x38b1,	// (0x000038b1) linegrid_hwr_fs_pane

0xcf02,	// (0x0000cf02) cell_hwr_fs_pane_ParamLimits

0xcf02,	// (0x0000cf02) cell_hwr_fs_pane

0x38e3,	// (0x000038e3) linegrid_hwr_fs_pane_g1_ParamLimits

0x38e3,	// (0x000038e3) linegrid_hwr_fs_pane_g1

0xcf28,	// (0x0000cf28) linegrid_hwr_fs_pane_g2_ParamLimits

0xcf28,	// (0x0000cf28) linegrid_hwr_fs_pane_g2

0x3901,	// (0x00003901) linegrid_hwr_fs_pane_g3_ParamLimits

0x3901,	// (0x00003901) linegrid_hwr_fs_pane_g3

0x390d,	// (0x0000390d) linegrid_hwr_fs_pane_g4_ParamLimits

0x390d,	// (0x0000390d) linegrid_hwr_fs_pane_g4

0x3927,	// (0x00003927) linegrid_hwr_fs_pane_g5_ParamLimits

0x3927,	// (0x00003927) linegrid_hwr_fs_pane_g5

0x0004,

0xf393,	// (0x0000f393) linegrid_hwr_fs_pane_g_ParamLimits

0xf393,	// (0x0000f393) linegrid_hwr_fs_pane_g

0x393d,	// (0x0000393d) cell_hwr_fs_pane_g1_ParamLimits

0x393d,	// (0x0000393d) cell_hwr_fs_pane_g1

0x34a2,	// (0x000034a2) cell_hwr_fs_pane_g2_ParamLimits

0x34a2,	// (0x000034a2) cell_hwr_fs_pane_g2

0xcf3a,	// (0x0000cf3a) cell_hwr_fs_pane_g3_ParamLimits

0xcf3a,	// (0x0000cf3a) cell_hwr_fs_pane_g3

0xcf47,	// (0x0000cf47) cell_hwr_fs_pane_g4_ParamLimits

0xcf47,	// (0x0000cf47) cell_hwr_fs_pane_g4

0x0003,

0xf39e,	// (0x0000f39e) cell_hwr_fs_pane_g_ParamLimits

0xf39e,	// (0x0000f39e) cell_hwr_fs_pane_g

0xcf54,	// (0x0000cf54) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x166a,	// (0x0000166a) aid_inside_area_popup_secondary

0xd044,	// (0x0000d044) aid_inside_area_window_primary_ParamLimits

0xd044,	// (0x0000d044) aid_inside_area_window_primary

0x5566,	// (0x00005566) ai2_news_ticker_pane

0x556e,	// (0x0000556e) aid_size_cell_ai1_link_ParamLimits

0x556e,	// (0x0000556e) aid_size_cell_ai1_link

0xd431,	// (0x0000d431) popup_ai2_data_window_ParamLimits

0xd431,	// (0x0000d431) popup_ai2_data_window

0x559e,	// (0x0000559e) popup_ai2_link_window_ParamLimits

0x559e,	// (0x0000559e) popup_ai2_link_window

0x388d,	// (0x0000388d) bg_popup_sub_pane_cp4_ParamLimits

0x388d,	// (0x0000388d) bg_popup_sub_pane_cp4

0x55b2,	// (0x000055b2) grid_ai2_link_pane_ParamLimits

0x55b2,	// (0x000055b2) grid_ai2_link_pane

0x55c9,	// (0x000055c9) popup_ai2_link_window_g1_ParamLimits

0x55c9,	// (0x000055c9) popup_ai2_link_window_g1

0x55d5,	// (0x000055d5) popup_ai2_link_window_g2_ParamLimits

0x55d5,	// (0x000055d5) popup_ai2_link_window_g2

0x0001,

0xaf37,	// (0x0000af37) popup_ai2_link_window_g_ParamLimits

0xaf37,	// (0x0000af37) popup_ai2_link_window_g

0x55e4,	// (0x000055e4) ai2_mp_button_pane

0x55ec,	// (0x000055ec) ai2_mp_volume_pane

0x3b37,	// (0x00003b37) bg_popup_sub_pane_cp5_ParamLimits

0x3b37,	// (0x00003b37) bg_popup_sub_pane_cp5

0x55f4,	// (0x000055f4) heading_ai2_gene_pane_ParamLimits

0x55f4,	// (0x000055f4) heading_ai2_gene_pane

0x5600,	// (0x00005600) list_ai2_gene_pane_ParamLimits

0x5600,	// (0x00005600) list_ai2_gene_pane

0x5648,	// (0x00005648) cell_ai2_link_pane_ParamLimits

0x5648,	// (0x00005648) cell_ai2_link_pane

0x565e,	// (0x0000565e) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x572e,	// (0x0000572e) ai2_mp_volume_pane_g1

0x5736,	// (0x00005736) ai2_mp_volume_pane_g2

0xd45b,	// (0x0000d45b) list_ai2_gene_pane_t1

0x573e,	// (0x0000573e) ai2_mp_volume_pane_g3

0x0002,

0xaf50,	// (0x0000af50) ai2_mp_volume_pane_g

0x5746,	// (0x00005746) volume_small_pane_cp3

0x574f,	// (0x0000574f) aid_size_cell_ai2_button

0x5757,	// (0x00005757) grid_ai2_button_pane

0x5760,	// (0x00005760) cell_ai2_button_pane_ParamLimits

0x5760,	// (0x00005760) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x56ee,	// (0x000056ee) ai2_gene_pane_t1_ParamLimits

0x56ee,	// (0x000056ee) ai2_gene_pane_t1

0xc3eb,	// (0x0000c3eb) aid_height_parent_landscape

0xd1a1,	// (0x0000d1a1) aid_height_set_list

0x4f03,	// (0x00004f03) aid_size_parent

0x52d5,	// (0x000052d5) aid_size_cell_graphic_pane_ParamLimits

0x5610,	// (0x00005610) popup_ai2_data_window_g1_ParamLimits

0x5610,	// (0x00005610) popup_ai2_data_window_g1

0x561c,	// (0x0000561c) ai2_news_ticker_pane_g1

0x5624,	// (0x00005624) ai2_news_ticker_pane_g2

0x0001,

0xaf3c,	// (0x0000af3c) ai2_news_ticker_pane_g

0x562c,	// (0x0000562c) ai2_news_ticker_pane_t1

0x563a,	// (0x0000563a) ai2_news_ticker_pane_t2

0x0001,

0xaf41,	// (0x0000af41) ai2_news_ticker_pane_t

0x5667,	// (0x00005667) heading_ai2_gene_pane_g1

0x566f,	// (0x0000566f) heading_ai2_gene_pane_t1_ParamLimits

0x566f,	// (0x0000566f) heading_ai2_gene_pane_t1

0x5684,	// (0x00005684) list_highlight_pane_cp6

0xd445,	// (0x0000d445) ai2_gene_pane_ParamLimits

0xd445,	// (0x0000d445) ai2_gene_pane

0xd469,	// (0x0000d469) list_ai2_gene_pane_t2

0x0001,

0xf3ff,	// (0x0000f3ff) list_ai2_gene_pane_t

0x56bf,	// (0x000056bf) list_highlight_pane_cp8_ParamLimits

0x56bf,	// (0x000056bf) list_highlight_pane_cp8

0x56d0,	// (0x000056d0) ai2_gene_pane_g1_ParamLimits

0x56d0,	// (0x000056d0) ai2_gene_pane_g1

0x56e2,	// (0x000056e2) ai2_gene_pane_g2_ParamLimits

0x56e2,	// (0x000056e2) ai2_gene_pane_g2

0x0001,

0xaf4b,	// (0x0000af4b) ai2_gene_pane_g_ParamLimits

0xaf4b,	// (0x0000af4b) ai2_gene_pane_g

0x0db4,	// (0x00000db4) scroll_pane_cp12

0xc3aa,	// (0x0000c3aa) control_pane_t3_ParamLimits

0xc3aa,	// (0x0000c3aa) control_pane_t3

0x2927,	// (0x00002927) status_small_pane_g8_ParamLimits

0x2927,	// (0x00002927) status_small_pane_g8

0xc50e,	// (0x0000c50e) popup_find_window_ParamLimits

0xc795,	// (0x0000c795) popup_note_image_window_ParamLimits

0x356b,	// (0x0000356b) list_double2_graphic_pane_vc_g1_ParamLimits

0x356b,	// (0x0000356b) list_double2_graphic_pane_vc_g1

0x2540,	// (0x00002540) list_double2_graphic_pane_vc_g2_ParamLimits

0x2540,	// (0x00002540) list_double2_graphic_pane_vc_g2

0x3577,	// (0x00003577) list_double2_graphic_pane_vc_g3_ParamLimits

0x3577,	// (0x00003577) list_double2_graphic_pane_vc_g3

0x0002,

0xad1b,	// (0x0000ad1b) list_double2_graphic_pane_vc_g_ParamLimits

0xad1b,	// (0x0000ad1b) list_double2_graphic_pane_vc_g

0x3661,	// (0x00003661) list_double2_graphic_pane_vc_t1_ParamLimits

0x3661,	// (0x00003661) list_double2_graphic_pane_vc_t1

0x2540,	// (0x00002540) list_single_heading_pane_vc_g1_ParamLimits

0x2540,	// (0x00002540) list_single_heading_pane_vc_g1

0x3577,	// (0x00003577) list_single_heading_pane_vc_g2_ParamLimits

0x3577,	// (0x00003577) list_single_heading_pane_vc_g2

0x0001,

0xad43,	// (0x0000ad43) list_single_heading_pane_vc_g_ParamLimits

0xad43,	// (0x0000ad43) list_single_heading_pane_vc_g

0x3770,	// (0x00003770) list_single_heading_pane_vc_t1_ParamLimits

0x3770,	// (0x00003770) list_single_heading_pane_vc_t1

0x3788,	// (0x00003788) list_single_heading_pane_vc_t2_ParamLimits

0x3788,	// (0x00003788) list_single_heading_pane_vc_t2

0x0001,

0xad48,	// (0x0000ad48) list_single_heading_pane_vc_t_ParamLimits

0xad48,	// (0x0000ad48) list_single_heading_pane_vc_t

0x37c6,	// (0x000037c6) list_setting_number_pane_vc_g1_ParamLimits

0x37c6,	// (0x000037c6) list_setting_number_pane_vc_g1

0x37d2,	// (0x000037d2) list_setting_number_pane_vc_g2_ParamLimits

0x37d2,	// (0x000037d2) list_setting_number_pane_vc_g2

0x0001,

0xad4d,	// (0x0000ad4d) list_setting_number_pane_vc_g_ParamLimits

0xad4d,	// (0x0000ad4d) list_setting_number_pane_vc_g

0x37de,	// (0x000037de) list_setting_number_pane_vc_t1_ParamLimits

0x37de,	// (0x000037de) list_setting_number_pane_vc_t1

0x37f2,	// (0x000037f2) list_setting_number_pane_vc_t2_ParamLimits

0x37f2,	// (0x000037f2) list_setting_number_pane_vc_t2

0x380e,	// (0x0000380e) list_setting_number_pane_vc_t3_ParamLimits

0x380e,	// (0x0000380e) list_setting_number_pane_vc_t3

0x0002,

0xad52,	// (0x0000ad52) list_setting_number_pane_vc_t_ParamLimits

0xad52,	// (0x0000ad52) list_setting_number_pane_vc_t

0x383c,	// (0x0000383c) set_value_pane_vc_ParamLimits

0x383c,	// (0x0000383c) set_value_pane_vc

0x5109,	// (0x00005109) list_double2_graphic_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_double2_graphic_pane_vc

0x5109,	// (0x00005109) list_double2_large_graphic_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_double2_large_graphic_pane_vc

0x5109,	// (0x00005109) list_double2_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_double2_pane_vc

0x5109,	// (0x00005109) list_double_graphic_heading_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_double_graphic_heading_pane_vc

0x5109,	// (0x00005109) list_double_graphic_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_double_graphic_pane_vc

0x5109,	// (0x00005109) list_double_heading_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_double_heading_pane_vc

0x5109,	// (0x00005109) list_double_large_graphic_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_double_large_graphic_pane_vc

0x5109,	// (0x00005109) list_double_number_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_double_number_pane_vc

0x5109,	// (0x00005109) list_double_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_double_pane_vc

0x5109,	// (0x00005109) list_double_time_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_double_time_pane_vc

0x5109,	// (0x00005109) list_setting_number_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_setting_number_pane_vc

0x5109,	// (0x00005109) list_setting_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_setting_pane_vc

0x5109,	// (0x00005109) list_single_graphic_heading_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_single_graphic_heading_pane_vc

0x5109,	// (0x00005109) list_single_heading_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_single_heading_pane_vc

0x5109,	// (0x00005109) list_single_number_heading_pane_vc_ParamLimits

0x5109,	// (0x00005109) list_single_number_heading_pane_vc

0x356b,	// (0x0000356b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x356b,	// (0x0000356b) list_double_graphic_heading_pane_vc_g1

0x5794,	// (0x00005794) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5794,	// (0x00005794) list_double_graphic_heading_pane_vc_g2

0x57a0,	// (0x000057a0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x57a0,	// (0x000057a0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xaf57,	// (0x0000af57) list_double_graphic_heading_pane_vc_g_ParamLimits

0xaf57,	// (0x0000af57) list_double_graphic_heading_pane_vc_g

0x57ac,	// (0x000057ac) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x57ac,	// (0x000057ac) list_double_graphic_heading_pane_vc_t1

0x57c8,	// (0x000057c8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x57c8,	// (0x000057c8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xaf5e,	// (0x0000af5e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xaf5e,	// (0x0000af5e) list_double_graphic_heading_pane_vc_t

0x37c6,	// (0x000037c6) list_setting_pane_vc_g1_ParamLimits

0x37c6,	// (0x000037c6) list_setting_pane_vc_g1

0x37d2,	// (0x000037d2) list_setting_pane_vc_g2_ParamLimits

0x37d2,	// (0x000037d2) list_setting_pane_vc_g2

0x0001,

0xad4d,	// (0x0000ad4d) list_setting_pane_vc_g_ParamLimits

0xad4d,	// (0x0000ad4d) list_setting_pane_vc_g

0x59f3,	// (0x000059f3) list_setting_pane_vc_t1_ParamLimits

0x59f3,	// (0x000059f3) list_setting_pane_vc_t1

0x5a0f,	// (0x00005a0f) list_setting_pane_vc_t2_ParamLimits

0x5a0f,	// (0x00005a0f) list_setting_pane_vc_t2

0x0001,

0xaf8c,	// (0x0000af8c) list_setting_pane_vc_t_ParamLimits

0xaf8c,	// (0x0000af8c) list_setting_pane_vc_t

0x383c,	// (0x0000383c) set_value_pane_cp_vc_ParamLimits

0x383c,	// (0x0000383c) set_value_pane_cp_vc

0x2540,	// (0x00002540) list_single_number_heading_pane_vc_g1_ParamLimits

0x2540,	// (0x00002540) list_single_number_heading_pane_vc_g1

0x3577,	// (0x00003577) list_single_number_heading_pane_vc_g2_ParamLimits

0x3577,	// (0x00003577) list_single_number_heading_pane_vc_g2

0x0001,

0xad43,	// (0x0000ad43) list_single_number_heading_pane_vc_g_ParamLimits

0xad43,	// (0x0000ad43) list_single_number_heading_pane_vc_g

0x3770,	// (0x00003770) list_single_number_heading_pane_vc_t1_ParamLimits

0x3770,	// (0x00003770) list_single_number_heading_pane_vc_t1

0x5a2b,	// (0x00005a2b) list_single_number_heading_pane_vc_t2_ParamLimits

0x5a2b,	// (0x00005a2b) list_single_number_heading_pane_vc_t2

0x5a3f,	// (0x00005a3f) list_single_number_heading_pane_vc_t3_ParamLimits

0x5a3f,	// (0x00005a3f) list_single_number_heading_pane_vc_t3

0x0002,

0xaf91,	// (0x0000af91) list_single_number_heading_pane_vc_t_ParamLimits

0xaf91,	// (0x0000af91) list_single_number_heading_pane_vc_t

0x356b,	// (0x0000356b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x356b,	// (0x0000356b) list_single_graphic_heading_pane_vc_g1

0x2540,	// (0x00002540) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2540,	// (0x00002540) list_single_graphic_heading_pane_vc_g4

0x3577,	// (0x00003577) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3577,	// (0x00003577) list_single_graphic_heading_pane_vc_g5

0x0002,

0xad1b,	// (0x0000ad1b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xad1b,	// (0x0000ad1b) list_single_graphic_heading_pane_vc_g

0x3770,	// (0x00003770) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3770,	// (0x00003770) list_single_graphic_heading_pane_vc_t1

0x5a51,	// (0x00005a51) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5a51,	// (0x00005a51) list_single_graphic_heading_pane_vc_t2

0x0001,

0xaf98,	// (0x0000af98) list_single_graphic_heading_pane_vc_t_ParamLimits

0xaf98,	// (0x0000af98) list_single_graphic_heading_pane_vc_t

0x2540,	// (0x00002540) list_double2_pane_vc_g1_ParamLimits

0x2540,	// (0x00002540) list_double2_pane_vc_g1

0x3577,	// (0x00003577) list_double2_pane_vc_g2_ParamLimits

0x3577,	// (0x00003577) list_double2_pane_vc_g2

0x0001,

0xad43,	// (0x0000ad43) list_double2_pane_vc_g_ParamLimits

0xad43,	// (0x0000ad43) list_double2_pane_vc_g

0x5a65,	// (0x00005a65) list_double2_pane_vc_t1_ParamLimits

0x5a65,	// (0x00005a65) list_double2_pane_vc_t1

0x5a7b,	// (0x00005a7b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5a7b,	// (0x00005a7b) list_double2_large_graphic_pane_vc_g1

0x2540,	// (0x00002540) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2540,	// (0x00002540) list_double2_large_graphic_pane_vc_g2

0x3577,	// (0x00003577) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3577,	// (0x00003577) list_double2_large_graphic_pane_vc_g3

0x0002,

0xaf9d,	// (0x0000af9d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xaf9d,	// (0x0000af9d) list_double2_large_graphic_pane_vc_g

0x5a87,	// (0x00005a87) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5a87,	// (0x00005a87) list_double2_large_graphic_pane_vc_t1

0x5a9d,	// (0x00005a9d) list_double_time_pane_vc_g1_ParamLimits

0x5a9d,	// (0x00005a9d) list_double_time_pane_vc_g1

0x5aa9,	// (0x00005aa9) list_double_time_pane_vc_g2_ParamLimits

0x5aa9,	// (0x00005aa9) list_double_time_pane_vc_g2

0x0001,

0xafa4,	// (0x0000afa4) list_double_time_pane_vc_g_ParamLimits

0xafa4,	// (0x0000afa4) list_double_time_pane_vc_g

0x5ab5,	// (0x00005ab5) list_double_time_pane_vc_t1_ParamLimits

0x5ab5,	// (0x00005ab5) list_double_time_pane_vc_t1

0x5ad9,	// (0x00005ad9) list_double_time_pane_vc_t2_ParamLimits

0x5ad9,	// (0x00005ad9) list_double_time_pane_vc_t2

0x5b08,	// (0x00005b08) list_double_time_pane_vc_t3_ParamLimits

0x5b08,	// (0x00005b08) list_double_time_pane_vc_t3

0x5b1a,	// (0x00005b1a) list_double_time_pane_vc_t4_ParamLimits

0x5b1a,	// (0x00005b1a) list_double_time_pane_vc_t4

0x0003,

0xafa9,	// (0x0000afa9) list_double_time_pane_vc_t_ParamLimits

0xafa9,	// (0x0000afa9) list_double_time_pane_vc_t

0x2540,	// (0x00002540) list_double_pane_vc_g1_ParamLimits

0x2540,	// (0x00002540) list_double_pane_vc_g1

0x3577,	// (0x00003577) list_double_pane_vc_g2_ParamLimits

0x3577,	// (0x00003577) list_double_pane_vc_g2

0x0001,

0xad43,	// (0x0000ad43) list_double_pane_vc_g_ParamLimits

0xad43,	// (0x0000ad43) list_double_pane_vc_g

0x5b2e,	// (0x00005b2e) list_double_pane_vc_t1_ParamLimits

0x5b2e,	// (0x00005b2e) list_double_pane_vc_t1

0x5b42,	// (0x00005b42) list_double_pane_vc_t2_ParamLimits

0x5b42,	// (0x00005b42) list_double_pane_vc_t2

0x0001,

0xafb2,	// (0x0000afb2) list_double_pane_vc_t_ParamLimits

0xafb2,	// (0x0000afb2) list_double_pane_vc_t

0x2540,	// (0x00002540) list_double_number_pane_vc_g1_ParamLimits

0x2540,	// (0x00002540) list_double_number_pane_vc_g1

0x3577,	// (0x00003577) list_double_number_pane_vc_g2_ParamLimits

0x3577,	// (0x00003577) list_double_number_pane_vc_g2

0x0001,

0xad43,	// (0x0000ad43) list_double_number_pane_vc_g_ParamLimits

0xad43,	// (0x0000ad43) list_double_number_pane_vc_g

0x5b5a,	// (0x00005b5a) list_double_number_pane_vc_t1_ParamLimits

0x5b5a,	// (0x00005b5a) list_double_number_pane_vc_t1

0x5b6c,	// (0x00005b6c) list_double_number_pane_vc_t2_ParamLimits

0x5b6c,	// (0x00005b6c) list_double_number_pane_vc_t2

0x5b80,	// (0x00005b80) list_double_number_pane_vc_t3_ParamLimits

0x5b80,	// (0x00005b80) list_double_number_pane_vc_t3

0x0002,

0xafb7,	// (0x0000afb7) list_double_number_pane_vc_t_ParamLimits

0xafb7,	// (0x0000afb7) list_double_number_pane_vc_t

0x5b98,	// (0x00005b98) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5b98,	// (0x00005b98) list_double_large_graphic_pane_vc_g1

0x5ba4,	// (0x00005ba4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5ba4,	// (0x00005ba4) list_double_large_graphic_pane_vc_g2

0x3577,	// (0x00003577) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3577,	// (0x00003577) list_double_large_graphic_pane_vc_g3

0x5bb3,	// (0x00005bb3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5bb3,	// (0x00005bb3) list_double_large_graphic_pane_vc_g4

0x0003,

0xafbe,	// (0x0000afbe) list_double_large_graphic_pane_vc_g_ParamLimits

0xafbe,	// (0x0000afbe) list_double_large_graphic_pane_vc_g

0x5bbf,	// (0x00005bbf) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5bbf,	// (0x00005bbf) list_double_large_graphic_pane_vc_t1

0x5bd3,	// (0x00005bd3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5bd3,	// (0x00005bd3) list_double_large_graphic_pane_vc_t2

0x0001,

0xafc7,	// (0x0000afc7) list_double_large_graphic_pane_vc_t_ParamLimits

0xafc7,	// (0x0000afc7) list_double_large_graphic_pane_vc_t

0x5794,	// (0x00005794) list_double_heading_pane_vc_g1_ParamLimits

0x5794,	// (0x00005794) list_double_heading_pane_vc_g1

0x57a0,	// (0x000057a0) list_double_heading_pane_vc_g2_ParamLimits

0x57a0,	// (0x000057a0) list_double_heading_pane_vc_g2

0x0001,

0xafcc,	// (0x0000afcc) list_double_heading_pane_vc_g_ParamLimits

0xafcc,	// (0x0000afcc) list_double_heading_pane_vc_g

0x5bec,	// (0x00005bec) list_double_heading_pane_vc_t1_ParamLimits

0x5bec,	// (0x00005bec) list_double_heading_pane_vc_t1

0x3770,	// (0x00003770) list_double_heading_pane_vc_t2_ParamLimits

0x3770,	// (0x00003770) list_double_heading_pane_vc_t2

0x0001,

0xafd1,	// (0x0000afd1) list_double_heading_pane_vc_t_ParamLimits

0xafd1,	// (0x0000afd1) list_double_heading_pane_vc_t

0x356b,	// (0x0000356b) list_double_graphic_pane_vc_g1_ParamLimits

0x356b,	// (0x0000356b) list_double_graphic_pane_vc_g1

0x5c00,	// (0x00005c00) list_double_graphic_pane_vc_g2_ParamLimits

0x5c00,	// (0x00005c00) list_double_graphic_pane_vc_g2

0x57f2,	// (0x000057f2) list_double_graphic_pane_vc_g3_ParamLimits

0x57f2,	// (0x000057f2) list_double_graphic_pane_vc_g3

0x0002,

0xafd6,	// (0x0000afd6) list_double_graphic_pane_vc_g_ParamLimits

0xafd6,	// (0x0000afd6) list_double_graphic_pane_vc_g

0x5c0f,	// (0x00005c0f) list_double_graphic_pane_vc_t1_ParamLimits

0x5c0f,	// (0x00005c0f) list_double_graphic_pane_vc_t1

0x5c23,	// (0x00005c23) list_double_graphic_pane_vc_t2_ParamLimits

0x5c23,	// (0x00005c23) list_double_graphic_pane_vc_t2

0x0001,

0xafdd,	// (0x0000afdd) list_double_graphic_pane_vc_t_ParamLimits

0xafdd,	// (0x0000afdd) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb488,	// (0x0000b488) aid_size_cell_touch_ParamLimits

0xb488,	// (0x0000b488) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb638,	// (0x0000b638) touch_pane_ParamLimits

0xb638,	// (0x0000b638) touch_pane

0x12b3,	// (0x000012b3) button_value_adjust_pane_cp2

0x12bb,	// (0x000012bb) button_value_adjust_pane_cp4

0x12dd,	// (0x000012dd) form_field_data_pane_cp2

0xbdd8,	// (0x0000bdd8) form_field_data_wide_pane_cp2

0x1b19,	// (0x00001b19) bg_scroll_pane_ParamLimits

0x1b38,	// (0x00001b38) scroll_handle_pane_ParamLimits

0x1b4c,	// (0x00001b4c) scroll_sc2_down_pane_ParamLimits

0x1b4c,	// (0x00001b4c) scroll_sc2_down_pane

0x1b73,	// (0x00001b73) scroll_sc2_up_pane_ParamLimits

0x1b73,	// (0x00001b73) scroll_sc2_up_pane

0xd593,	// (0x0000d593) grid_wheel_folder_pane_g1_ParamLimits

0xd593,	// (0x0000d593) grid_wheel_folder_pane_g1

0x225a,	// (0x0000225a) clock_nsta_pane_cp2_ParamLimits

0x225a,	// (0x0000225a) clock_nsta_pane_cp2

0x2b80,	// (0x00002b80) listscroll_midp_pane_ParamLimits

0xc1bc,	// (0x0000c1bc) midp_canvas_pane

0x2aec,	// (0x00002aec) nsta_clock_indic_pane

0x2b4a,	// (0x00002b4a) listscroll_form_pane_vc

0x2b6e,	// (0x00002b6e) listscroll_set_pane_vc_ParamLimits

0x2b6e,	// (0x00002b6e) listscroll_set_pane_vc

0xcbcf,	// (0x0000cbcf) clock_nsta_pane

0xcbf9,	// (0x0000cbf9) indicator_nsta_pane

0x35cb,	// (0x000035cb) bg_popup_sub_pane_cp2_ParamLimits

0x35df,	// (0x000035df) find_pane_cp2_ParamLimits

0x35df,	// (0x000035df) find_pane_cp2

0x35f5,	// (0x000035f5) grid_toobar_pane_ParamLimits

0x384c,	// (0x0000384c) list_form_gen_pane_vc_ParamLimits

0x384c,	// (0x0000384c) list_form_gen_pane_vc

0x3862,	// (0x00003862) scroll_pane_cp8_vc_ParamLimits

0x3862,	// (0x00003862) scroll_pane_cp8_vc

0x397b,	// (0x0000397b) data_form_wide_pane_vc_ParamLimits

0x397b,	// (0x0000397b) data_form_wide_pane_vc

0x3987,	// (0x00003987) form_field_data_wide_pane_vc_g1

0x398f,	// (0x0000398f) form_field_data_wide_pane_vc_t1_ParamLimits

0x398f,	// (0x0000398f) form_field_data_wide_pane_vc_t1

0x1399,	// (0x00001399) input_focus_pane_cp6_vc_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_cp6_vc

0xcffe,	// (0x0000cffe) list_midp_pane_ParamLimits

0x533b,	// (0x0000533b) scroll_pane_cp16_ParamLimits

0x533b,	// (0x0000533b) scroll_pane_cp16

0x3d53,	// (0x00003d53) button_value_adjust_pane_ParamLimits

0x3d53,	// (0x00003d53) button_value_adjust_pane

0xd1b2,	// (0x0000d1b2) button_value_adjust_pane_cp6_ParamLimits

0xd1b2,	// (0x0000d1b2) button_value_adjust_pane_cp6

0xd2cc,	// (0x0000d2cc) settings_code_pane_cp_ParamLimits

0xd2cc,	// (0x0000d2cc) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xac6e,	// (0x0000ac6e) cell_touch_pane_g

0xd477,	// (0x0000d477) cell_touch_pane_cp_ParamLimits

0xd477,	// (0x0000d477) cell_touch_pane_cp

0xd493,	// (0x0000d493) cell_touch_pane_ParamLimits

0xd493,	// (0x0000d493) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x57e6,	// (0x000057e6) list_set_graphic_pane_vc_g1_ParamLimits

0x57e6,	// (0x000057e6) list_set_graphic_pane_vc_g1

0x57f2,	// (0x000057f2) list_set_graphic_pane_vc_g2_ParamLimits

0x57f2,	// (0x000057f2) list_set_graphic_pane_vc_g2

0x0001,

0xaf63,	// (0x0000af63) list_set_graphic_pane_vc_g_ParamLimits

0xaf63,	// (0x0000af63) list_set_graphic_pane_vc_g

0x57fe,	// (0x000057fe) text_primary_small_cp13_vc_ParamLimits

0x57fe,	// (0x000057fe) text_primary_small_cp13_vc

0x5816,	// (0x00005816) list_set_graphic_pane_vc_ParamLimits

0x5816,	// (0x00005816) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05e3,	// (0x000005e3) setting_code_pane_vc_t1

0x5828,	// (0x00005828) set_text_pane_vc_t1_ParamLimits

0x5828,	// (0x00005828) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5844,	// (0x00005844) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_vc_g1

0x584e,	// (0x0000584e) setting_slider_graphic_pane_vc_t1

0x585e,	// (0x0000585e) setting_slider_graphic_pane_vc_t2

0x0001,

0xaf68,	// (0x0000af68) setting_slider_graphic_pane_vc_t

0x586e,	// (0x0000586e) slider_set_pane_cp_vc

0x5876,	// (0x00005876) slider_set_pane_vc_g1

0x587f,	// (0x0000587f) slider_set_pane_vc_g2

0x0006,

0xaf6d,	// (0x0000af6d) slider_set_pane_vc_g

0x14c2,	// (0x000014c2) set_opt_bg_pane_g1_copy1

0x14ca,	// (0x000014ca) set_opt_bg_pane_g2_copy1

0x58ab,	// (0x000058ab) set_opt_bg_pane_g3_copy1

0x14da,	// (0x000014da) set_opt_bg_pane_g4_copy1

0x14e2,	// (0x000014e2) set_opt_bg_pane_g5_copy1

0x14ea,	// (0x000014ea) set_opt_bg_pane_g6_copy1

0x58b5,	// (0x000058b5) set_opt_bg_pane_g7_copy1

0x58bd,	// (0x000058bd) set_opt_bg_pane_g8_copy1

0x58c7,	// (0x000058c7) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x58d1,	// (0x000058d1) setting_slider_pane_vc_t1

0x58e0,	// (0x000058e0) setting_slider_pane_vc_t2

0x58f0,	// (0x000058f0) setting_slider_pane_vc_t3

0x0002,

0xaf7c,	// (0x0000af7c) setting_slider_pane_vc_t

0x5900,	// (0x00005900) slider_set_pane_vc

0x4594,	// (0x00004594) volume_set_pane_vc_g1

0x459d,	// (0x0000459d) volume_set_pane_vc_g2

0x45a6,	// (0x000045a6) volume_set_pane_vc_g3

0x45af,	// (0x000045af) volume_set_pane_vc_g4

0x45b8,	// (0x000045b8) volume_set_pane_vc_g5

0x45c1,	// (0x000045c1) volume_set_pane_vc_g6

0x45ca,	// (0x000045ca) volume_set_pane_vc_g7

0x45d3,	// (0x000045d3) volume_set_pane_vc_g8

0x45dc,	// (0x000045dc) volume_set_pane_vc_g9

0x45e5,	// (0x000045e5) volume_set_pane_vc_g10

0x0009,

0xae1a,	// (0x0000ae1a) volume_set_pane_vc_g

0x5908,	// (0x00005908) volume_set_pane_vc

0x5910,	// (0x00005910) button_value_adjust_pane_cp1_vc

0x591a,	// (0x0000591a) list_highlight_pane_cp2_vc

0x5923,	// (0x00005923) list_set_pane_vc_ParamLimits

0x5923,	// (0x00005923) list_set_pane_vc

0x5981,	// (0x00005981) main_pane_set_vc_t1_ParamLimits

0x5981,	// (0x00005981) main_pane_set_vc_t1

0x5996,	// (0x00005996) main_pane_set_vc_t2_ParamLimits

0x5996,	// (0x00005996) main_pane_set_vc_t2

0x59a8,	// (0x000059a8) main_pane_set_vc_t3_ParamLimits

0x59a8,	// (0x000059a8) main_pane_set_vc_t3

0x59bc,	// (0x000059bc) main_pane_set_vc_t4_ParamLimits

0x59bc,	// (0x000059bc) main_pane_set_vc_t4

0x0003,

0xaf83,	// (0x0000af83) main_pane_set_vc_t_ParamLimits

0xaf83,	// (0x0000af83) main_pane_set_vc_t

0x59d0,	// (0x000059d0) setting_code_pane_vc_ParamLimits

0x59d0,	// (0x000059d0) setting_code_pane_vc

0x59e1,	// (0x000059e1) setting_slider_graphic_pane_vc

0x59e1,	// (0x000059e1) setting_slider_pane_vc

0x59e1,	// (0x000059e1) setting_text_pane_vc

0x59e1,	// (0x000059e1) setting_volume_pane_vc

0x59eb,	// (0x000059eb) scroll_pane_cp121_vc

0x12a1,	// (0x000012a1) set_content_pane_vc

0x5c3b,	// (0x00005c3b) button_value_adjust_pane_g1

0x5c44,	// (0x00005c44) button_value_adjust_pane_g2

0x0001,

0xafe2,	// (0x0000afe2) button_value_adjust_pane_g

0x5c4d,	// (0x00005c4d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5c4d,	// (0x00005c4d) form_field_slider_wide_pane_vc_t1

0x5c61,	// (0x00005c61) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5c61,	// (0x00005c61) form_field_slider_wide_pane_vc_t2

0x0002,

0xafe7,	// (0x0000afe7) form_field_slider_wide_pane_vc_t_ParamLimits

0xafe7,	// (0x0000afe7) form_field_slider_wide_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc

0x5c8f,	// (0x00005c8f) slider_cont_pane_cp1_vc_ParamLimits

0x5c8f,	// (0x00005c8f) slider_cont_pane_cp1_vc

0x5ca1,	// (0x00005ca1) slider_form_pane_g1_cp2

0x587f,	// (0x0000587f) slider_form_pane_g2_cp2

0x5cce,	// (0x00005cce) form_field_slider_pane_vc_t3

0x5cdc,	// (0x00005cdc) form_field_slider_pane_vc_t4

0x5cea,	// (0x00005cea) slider_form_pane_vc_ParamLimits

0x5cea,	// (0x00005cea) slider_form_pane_vc

0x5cf7,	// (0x00005cf7) form_field_slider_pane_vc_t1_ParamLimits

0x5cf7,	// (0x00005cf7) form_field_slider_pane_vc_t1

0x5c61,	// (0x00005c61) form_field_slider_pane_vc_t2_ParamLimits

0x5c61,	// (0x00005c61) form_field_slider_pane_vc_t2

0x0001,

0xaff9,	// (0x0000aff9) form_field_slider_pane_vc_t_ParamLimits

0xaff9,	// (0x0000aff9) form_field_slider_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc

0x5d13,	// (0x00005d13) slider_cont_pane_vc_ParamLimits

0x5d13,	// (0x00005d13) slider_cont_pane_vc

0x5d27,	// (0x00005d27) list_form_graphic_pane_cp_vc_ParamLimits

0x5d27,	// (0x00005d27) list_form_graphic_pane_cp_vc

0x3987,	// (0x00003987) form_field_popup_wide_pane_vc_g1

0x5d3c,	// (0x00005d3c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5d3c,	// (0x00005d3c) form_field_popup_wide_pane_vc_t1

0x1399,	// (0x00001399) input_focus_pane_cp8_vc_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_cp8_vc

0x5d81,	// (0x00005d81) list_form_wide_pane_vc_ParamLimits

0x5d81,	// (0x00005d81) list_form_wide_pane_vc

0x5d8d,	// (0x00005d8d) list_form_graphic_pane_vc_g1

0x5d95,	// (0x00005d95) list_form_graphic_pane_vc_t1_ParamLimits

0x5d95,	// (0x00005d95) list_form_graphic_pane_vc_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc

0x5db1,	// (0x00005db1) list_form_graphic_pane_vc_ParamLimits

0x5db1,	// (0x00005db1) list_form_graphic_pane_vc

0x3987,	// (0x00003987) form_field_popup_pane_vc_g1

0x5dc7,	// (0x00005dc7) form_field_popup_pane_vc_t1_ParamLimits

0x5dc7,	// (0x00005dc7) form_field_popup_pane_vc_t1

0x1399,	// (0x00001399) input_focus_pane_cp7_vc_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_cp7_vc

0x5dde,	// (0x00005dde) list_form_pane_vc_ParamLimits

0x5dde,	// (0x00005dde) list_form_pane_vc

0x5dea,	// (0x00005dea) data_form_pane_vc_t1_ParamLimits

0x5dea,	// (0x00005dea) data_form_pane_vc_t1

0x14c2,	// (0x000014c2) input_focus_pane_vc_g1

0x14ca,	// (0x000014ca) input_focus_pane_vc_g2

0x14d2,	// (0x000014d2) input_focus_pane_vc_g3

0x14da,	// (0x000014da) input_focus_pane_vc_g4

0x14e2,	// (0x000014e2) input_focus_pane_vc_g5

0x14ea,	// (0x000014ea) input_focus_pane_vc_g6

0x14f2,	// (0x000014f2) input_focus_pane_vc_g7

0x14fa,	// (0x000014fa) input_focus_pane_vc_g8

0x1502,	// (0x00001502) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xabf7,	// (0x0000abf7) input_focus_pane_vc_g

0x397b,	// (0x0000397b) data_form_pane_vc_ParamLimits

0x397b,	// (0x0000397b) data_form_pane_vc

0x3987,	// (0x00003987) form_field_data_pane_vc_g1

0x5e05,	// (0x00005e05) form_field_data_pane_vc_t1_ParamLimits

0x5e05,	// (0x00005e05) form_field_data_pane_vc_t1

0x1399,	// (0x00001399) input_focus_pane_vc_ParamLimits

0x1399,	// (0x00001399) input_focus_pane_vc

0x5e1f,	// (0x00005e1f) button_value_adjust_pane_cp3_vc

0x5e27,	// (0x00005e27) button_value_adjust_pane_cp5_vc

0x5e2f,	// (0x00005e2f) form_field_data_pane_vc_ParamLimits

0x5e2f,	// (0x00005e2f) form_field_data_pane_vc

0x5e46,	// (0x00005e46) form_field_data_pane_vc_cp2

0x5e4e,	// (0x00005e4e) form_field_data_wide_pane_vc_ParamLimits

0x5e4e,	// (0x00005e4e) form_field_data_wide_pane_vc

0x5e64,	// (0x00005e64) form_field_data_wide_pane_vc_cp2

0x5e6c,	// (0x00005e6c) form_field_popup_pane_vc_ParamLimits

0x5e6c,	// (0x00005e6c) form_field_popup_pane_vc

0x5e83,	// (0x00005e83) form_field_popup_wide_pane_vc_ParamLimits

0x5e83,	// (0x00005e83) form_field_popup_wide_pane_vc

0x5e99,	// (0x00005e99) form_field_slider_pane_vc_ParamLimits

0x5e99,	// (0x00005e99) form_field_slider_pane_vc

0x5eac,	// (0x00005eac) form_field_slider_wide_pane_vc_ParamLimits

0x5eac,	// (0x00005eac) form_field_slider_wide_pane_vc

0xd4b1,	// (0x0000d4b1) grid_touch_1_pane_ParamLimits

0xd4b1,	// (0x0000d4b1) grid_touch_1_pane

0xd4c5,	// (0x0000d4c5) grid_touch_2_pane_ParamLimits

0xd4c5,	// (0x0000d4c5) grid_touch_2_pane

0x5f81,	// (0x00005f81) touch_pane_g1_ParamLimits

0x5f81,	// (0x00005f81) touch_pane_g1

0x5ee3,	// (0x00005ee3) cell_app_pane_cp_wide_ParamLimits

0x5ee3,	// (0x00005ee3) cell_app_pane_cp_wide

0x5ef4,	// (0x00005ef4) grid_popup_fast_wide_pane_ParamLimits

0x5ef4,	// (0x00005ef4) grid_popup_fast_wide_pane

0x5f08,	// (0x00005f08) scroll_pane_cp19_ParamLimits

0x5f08,	// (0x00005f08) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5f1c,	// (0x00005f1c) listscroll_popup_fast_wide_pane

0x16d6,	// (0x000016d6) grid_indicator_nsta_pane

0x5f24,	// (0x00005f24) clock_nsta_pane_g1

0x5f2d,	// (0x00005f2d) clock_nsta_pane_t1

0xd4ef,	// (0x0000d4ef) cell_indicator_nsta_pane_ParamLimits

0xd4ef,	// (0x0000d4ef) cell_indicator_nsta_pane

0x5f81,	// (0x00005f81) cell_indicator_nsta_pane_g1

0xd508,	// (0x0000d508) cell_indicator_nsta_pane_g2

0x0001,

0xf404,	// (0x0000f404) cell_indicator_nsta_pane_g

0x5fa5,	// (0x00005fa5) clock_nsta_pane_cp

0x5fad,	// (0x00005fad) indicator_nsta_pane_cp

0x5fb5,	// (0x00005fb5) nsta_clock_indic_pane_g1

0x067b,	// (0x0000067b) grid_indicator_pane

0x1c68,	// (0x00001c68) scroll_pane_cp29

0x2187,	// (0x00002187) indicator_nsta_pane_cp2_ParamLimits

0x2187,	// (0x00002187) indicator_nsta_pane_cp2

0x0507,	// (0x00000507) main_apps_wheel_pane

0x3bda,	// (0x00003bda) form_midp_field_text_pane_ParamLimits

0x3d25,	// (0x00003d25) scroll_bar_cp050_ParamLimits

0x600e,	// (0x0000600e) cell_indicator_pane_ParamLimits

0x600e,	// (0x0000600e) cell_indicator_pane

0x6025,	// (0x00006025) cell_indicator_pane_g1

0xd51d,	// (0x0000d51d) grid_wheel_folder_pane_ParamLimits

0xd51d,	// (0x0000d51d) grid_wheel_folder_pane

0xd52b,	// (0x0000d52b) list_wheel_apps_pane_ParamLimits

0xd52b,	// (0x0000d52b) list_wheel_apps_pane

0xd539,	// (0x0000d539) main_apps_wheel_pane_g1_ParamLimits

0xd539,	// (0x0000d539) main_apps_wheel_pane_g1

0xd545,	// (0x0000d545) main_apps_wheel_pane_g2_ParamLimits

0xd545,	// (0x0000d545) main_apps_wheel_pane_g2

0x0001,

0xf409,	// (0x0000f409) main_apps_wheel_pane_g_ParamLimits

0xf409,	// (0x0000f409) main_apps_wheel_pane_g

0xd553,	// (0x0000d553) main_apps_wheel_pane_t1_ParamLimits

0xd553,	// (0x0000d553) main_apps_wheel_pane_t1

0xd567,	// (0x0000d567) list_wheel_apps_pane_g1

0xd56f,	// (0x0000d56f) list_wheel_apps_pane_g2

0xd577,	// (0x0000d577) list_wheel_apps_pane_g3

0xd57f,	// (0x0000d57f) list_wheel_apps_pane_g4

0xd589,	// (0x0000d589) list_wheel_apps_pane_g5

0x0004,

0xf40e,	// (0x0000f40e) list_wheel_apps_pane_g

0x2487,	// (0x00002487) navi_icon_text_pane

0xcac3,	// (0x0000cac3) aid_fill_nsta

0x60ea,	// (0x000060ea) navi_icon_text_pane_g1

0x60f6,	// (0x000060f6) navi_icon_text_pane_t1

0xc1a4,	// (0x0000c1a4) list_set_graphic_pane_t1_ParamLimits

0xc1a4,	// (0x0000c1a4) list_set_graphic_pane_t1

0x4474,	// (0x00004474) popup_midp_note_alarm_window_t6_ParamLimits

0x4474,	// (0x00004474) popup_midp_note_alarm_window_t6

0x4486,	// (0x00004486) popup_midp_note_alarm_window_t7_ParamLimits

0x4486,	// (0x00004486) popup_midp_note_alarm_window_t7

0x4498,	// (0x00004498) popup_midp_note_alarm_window_t8_ParamLimits

0x4498,	// (0x00004498) popup_midp_note_alarm_window_t8

0x44aa,	// (0x000044aa) popup_midp_note_alarm_window_t9_ParamLimits

0x44aa,	// (0x000044aa) popup_midp_note_alarm_window_t9

0x44bc,	// (0x000044bc) popup_midp_note_alarm_window_t10_ParamLimits

0x44bc,	// (0x000044bc) popup_midp_note_alarm_window_t10

0x44ce,	// (0x000044ce) popup_midp_note_alarm_window_t11_ParamLimits

0x44ce,	// (0x000044ce) popup_midp_note_alarm_window_t11

0x44e0,	// (0x000044e0) scroll_pane_cp17_ParamLimits

0x44e0,	// (0x000044e0) scroll_pane_cp17

0x4594,	// (0x00004594) volume_small_pane_cp_g1

0x6108,	// (0x00006108) volume_small_pane_cp_g2

0x6111,	// (0x00006111) volume_small_pane_cp_g3

0x611a,	// (0x0000611a) volume_small_pane_cp_g4

0x6123,	// (0x00006123) volume_small_pane_cp_g5

0x612c,	// (0x0000612c) volume_small_pane_cp_g6

0x6135,	// (0x00006135) volume_small_pane_cp_g7

0x613e,	// (0x0000613e) volume_small_pane_cp_g8

0x6147,	// (0x00006147) volume_small_pane_cp_g9

0x6150,	// (0x00006150) volume_small_pane_cp_g10

0x26d6,	// (0x000026d6) midp_ticker_pane_g1_ParamLimits

0x26e2,	// (0x000026e2) midp_ticker_pane_g2_ParamLimits

0xacc3,	// (0x0000acc3) midp_ticker_pane_g_ParamLimits

0x26ee,	// (0x000026ee) midp_ticker_pane_t1_ParamLimits

0xcae7,	// (0x0000cae7) aid_fill_nsta_2

0x3d11,	// (0x00003d11) list_form2_midp_pane

0x50bd,	// (0x000050bd) midp_editing_number_pane_ParamLimits

0x50cc,	// (0x000050cc) midp_ticker_pane_ParamLimits

0x6159,	// (0x00006159) form2_midp_field_pane

0x617d,	// (0x0000617d) scroll_pane_cp51

0x619d,	// (0x0000619d) form2_midp_button_pane_ParamLimits

0x619d,	// (0x0000619d) form2_midp_button_pane

0x61af,	// (0x000061af) form2_midp_content_pane_ParamLimits

0x61af,	// (0x000061af) form2_midp_content_pane

0x61c9,	// (0x000061c9) form2_midp_field_choice_group_pane

0x61d1,	// (0x000061d1) form2_midp_field_pane_g1

0x61d9,	// (0x000061d9) form2_midp_field_pane_g2

0x61e1,	// (0x000061e1) form2_midp_field_pane_g3

0x61e9,	// (0x000061e9) form2_midp_field_pane_g4

0x0003,

0xb050,	// (0x0000b050) form2_midp_field_pane_g

0x61f1,	// (0x000061f1) form2_midp_gauge_slider_pane

0x61f9,	// (0x000061f9) form2_midp_gauge_wait_pane

0x6201,	// (0x00006201) form2_midp_image_pane_ParamLimits

0x6201,	// (0x00006201) form2_midp_image_pane

0x621c,	// (0x0000621c) form2_midp_label_pane_ParamLimits

0x621c,	// (0x0000621c) form2_midp_label_pane

0xd5bc,	// (0x0000d5bc) form2_midp_label_pane_cp_ParamLimits

0xd5bc,	// (0x0000d5bc) form2_midp_label_pane_cp

0x6256,	// (0x00006256) form2_midp_string_pane_ParamLimits

0x6256,	// (0x00006256) form2_midp_string_pane

0xd5db,	// (0x0000d5db) form2_midp_text_pane_ParamLimits

0xd5db,	// (0x0000d5db) form2_midp_text_pane

0x6285,	// (0x00006285) form2_midp_time_pane

0x6295,	// (0x00006295) input_focus_pane_cp51_ParamLimits

0x6295,	// (0x00006295) input_focus_pane_cp51

0x62ad,	// (0x000062ad) form2_midp_label_pane_t1_ParamLimits

0x62ad,	// (0x000062ad) form2_midp_label_pane_t1

0xd5f4,	// (0x0000d5f4) form2_mdip_text_pane_t1_ParamLimits

0xd5f4,	// (0x0000d5f4) form2_mdip_text_pane_t1

0x630d,	// (0x0000630d) form2_midp_time_pane_t1

0x6328,	// (0x00006328) form2_midp_gauge_slider_pane_t1

0xd60f,	// (0x0000d60f) form2_midp_gauge_slider_pane_t2

0xd621,	// (0x0000d621) form2_midp_gauge_slider_pane_t3

0x0002,

0xf41e,	// (0x0000f41e) form2_midp_gauge_slider_pane_t

0x635e,	// (0x0000635e) form2_midp_slider_pane

0x636a,	// (0x0000636a) form2_midp_gauge_wait_pane_t1

0x6378,	// (0x00006378) form2_midp_wait_pane_ParamLimits

0x6378,	// (0x00006378) form2_midp_wait_pane

0xd633,	// (0x0000d633) list_single_2graphic_pane_cp4_ParamLimits

0xd633,	// (0x0000d633) list_single_2graphic_pane_cp4

0xcf75,	// (0x0000cf75) list_single_midp_graphic_pane_cp_ParamLimits

0xcf75,	// (0x0000cf75) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x63d2,	// (0x000063d2) list_single_2graphic_pane_g1_cp4

0x63da,	// (0x000063da) list_single_2graphic_pane_g2_cp4

0x63e2,	// (0x000063e2) list_single_2graphic_pane_t1_cp4

0x0507,	// (0x00000507) list_highlight_pane_cp21

0x63f1,	// (0x000063f1) list_single_midp_graphic_pane_g4_cp

0x6400,	// (0x00006400) list_single_midp_graphic_pane_t1_cp

0xd647,	// (0x0000d647) form2_mdip_string_pane_t1_ParamLimits

0xd647,	// (0x0000d647) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5_ParamLimits

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5

0x2b80,	// (0x00002b80) midp_form_pane_ParamLimits

0x0507,	// (0x00000507) main_apps_wheel_pane_ParamLimits

0xc813,	// (0x0000c813) popup_preview_window_ParamLimits

0xc813,	// (0x0000c813) popup_preview_window

0x30e8,	// (0x000030e8) popup_touch_info_window_ParamLimits

0x30e8,	// (0x000030e8) popup_touch_info_window

0x3106,	// (0x00003106) popup_touch_menu_window_ParamLimits

0x3106,	// (0x00003106) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x650e,	// (0x0000650e) list_touch_menu_pane

0x6516,	// (0x00006516) list_single_touch_menu_pane_ParamLimits

0x6516,	// (0x00006516) list_single_touch_menu_pane

0x652c,	// (0x0000652c) list_single_touch_menu_pane_t1

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7_ParamLimits

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7

0x653a,	// (0x0000653a) heading_sub_pane

0x6542,	// (0x00006542) list_touch_info_pane_ParamLimits

0x6542,	// (0x00006542) list_touch_info_pane

0x6551,	// (0x00006551) list_single_touch_info_pane_ParamLimits

0x6551,	// (0x00006551) list_single_touch_info_pane

0x6563,	// (0x00006563) list_single_touch_info_pane_t1

0x6571,	// (0x00006571) list_single_touch_info_pane_t2

0x0001,

0xb067,	// (0x0000b067) list_single_touch_info_pane_t

0x2607,	// (0x00002607) bg_popup_heading_pane_cp

0x657f,	// (0x0000657f) heading_sub_pane_t1

0x388d,	// (0x0000388d) bg_popup_preview_window_pane_cp_ParamLimits

0x388d,	// (0x0000388d) bg_popup_preview_window_pane_cp

0x653a,	// (0x0000653a) heading_preview_pane

0x6542,	// (0x00006542) list_preview_pane_ParamLimits

0x6542,	// (0x00006542) list_preview_pane

0x658d,	// (0x0000658d) popup_preview_window_g1

0x6551,	// (0x00006551) list_single_preview_pane_ParamLimits

0x6551,	// (0x00006551) list_single_preview_pane

0x6595,	// (0x00006595) list_single_preview_pane_g1

0x659d,	// (0x0000659d) list_single_preview_pane_t1

0x6563,	// (0x00006563) list_single_preview_pane_t2

0x0001,

0xb06c,	// (0x0000b06c) list_single_preview_pane_t

0x65ab,	// (0x000065ab) bg_popup_heading_pane_cp2_ParamLimits

0x65ab,	// (0x000065ab) bg_popup_heading_pane_cp2

0x65c1,	// (0x000065c1) heading_preview_pane_g1

0x65c9,	// (0x000065c9) heading_preview_pane_t1_ParamLimits

0x65c9,	// (0x000065c9) heading_preview_pane_t1

0x069e,	// (0x0000069e) soft_indicator_pane_t1_ParamLimits

0x0d91,	// (0x00000d91) scroll_pane_ParamLimits

0x1b61,	// (0x00001b61) scroll_sc2_left_pane

0x1b6a,	// (0x00001b6a) scroll_sc2_right_pane

0x1b89,	// (0x00001b89) scroll_bg_pane_g1_ParamLimits

0x1b9e,	// (0x00001b9e) scroll_bg_pane_g2_ParamLimits

0x1bb6,	// (0x00001bb6) scroll_bg_pane_g3_ParamLimits

0xac4e,	// (0x0000ac4e) scroll_bg_pane_g_ParamLimits

0x1b89,	// (0x00001b89) scroll_handle_pane_g1_ParamLimits

0x1bd8,	// (0x00001bd8) scroll_handle_pane_g2_ParamLimits

0x1bb6,	// (0x00001bb6) scroll_handle_pane_g3_ParamLimits

0xac55,	// (0x0000ac55) scroll_handle_pane_g_ParamLimits

0x2bb0,	// (0x00002bb0) popup_choice_list_window_ParamLimits

0x2bb0,	// (0x00002bb0) popup_choice_list_window

0x35d7,	// (0x000035d7) choice_list_pane

0x369f,	// (0x0000369f) cell_toolbar_pane_t1

0x36c7,	// (0x000036c7) toolbar_button_pane_ParamLimits

0x4afe,	// (0x00004afe) ai_gene_pane_1_t2_ParamLimits

0x4afe,	// (0x00004afe) ai_gene_pane_1_t2

0x0001,

0xae76,	// (0x0000ae76) ai_gene_pane_1_t_ParamLimits

0xae76,	// (0x0000ae76) ai_gene_pane_1_t

0x65e6,	// (0x000065e6) scroll_sc2_left_pane_g1

0x65e6,	// (0x000065e6) scroll_sc2_right_pane_g1

0x2b80,	// (0x00002b80) bg_popup_sub_pane_cp10

0x65f0,	// (0x000065f0) list_choice_list_pane

0x6609,	// (0x00006609) list_single_choice_list_pane_ParamLimits

0x6609,	// (0x00006609) list_single_choice_list_pane

0x661c,	// (0x0000661c) list_single_choice_list_pane_g1

0x16a7,	// (0x000016a7) list_single_choice_list_pane_t1_ParamLimits

0x16a7,	// (0x000016a7) list_single_choice_list_pane_t1

0x6624,	// (0x00006624) choice_list_pane_g1

0x662c,	// (0x0000662c) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18cd,	// (0x000018cd) title_pane_stacon_g2_ParamLimits

0x18cd,	// (0x000018cd) title_pane_stacon_g2

0x0002,

0xac34,	// (0x0000ac34) title_pane_stacon_g_ParamLimits

0xac34,	// (0x0000ac34) title_pane_stacon_g

0x2607,	// (0x00002607) cursor_press_pane

0xc4c6,	// (0x0000c4c6) popup_fep_hwr_window_ParamLimits

0xc4c6,	// (0x0000c4c6) popup_fep_hwr_window

0x2cd6,	// (0x00002cd6) popup_fep_vkb_window_ParamLimits

0x2cd6,	// (0x00002cd6) popup_fep_vkb_window

0x663a,	// (0x0000663a) cursor_press_pane_g1

0x0002,

0xf432,	// (0x0000f432) fep_vkb_side_pane_g_ParamLimits

0x667b,	// (0x0000667b) fep_hwr_candidate_pane_ParamLimits

0x667b,	// (0x0000667b) fep_hwr_candidate_pane

0x66a5,	// (0x000066a5) fep_hwr_side_pane_ParamLimits

0x66a5,	// (0x000066a5) fep_hwr_side_pane

0x66c5,	// (0x000066c5) fep_hwr_top_pane_ParamLimits

0x66c5,	// (0x000066c5) fep_hwr_top_pane

0x66dd,	// (0x000066dd) fep_hwr_write_pane_ParamLimits

0x66dd,	// (0x000066dd) fep_hwr_write_pane

0xf432,	// (0x0000f432) fep_vkb_side_pane_g

0x6717,	// (0x00006717) fep_hwr_top_pane_g1

0x6729,	// (0x00006729) fep_hwr_top_pane_g2

0x673b,	// (0x0000673b) fep_hwr_top_pane_g3

0x0002,

0xb071,	// (0x0000b071) fep_hwr_top_pane_g

0x6750,	// (0x00006750) fep_hwr_top_text_pane

0x1d58,	// (0x00001d58) fep_hwr_top_text_pane_g1

0x6828,	// (0x00006828) fep_hwr_top_text_pane_t1

0x6878,	// (0x00006878) fep_hwr_candidate_pane_g1

0x6af1,	// (0x00006af1) fep_vkb_keypad_pane_g3_ParamLimits

0x6af1,	// (0x00006af1) fep_vkb_keypad_pane_g3

0x6b19,	// (0x00006b19) fep_vkb_keypad_pane_g4_ParamLimits

0x6b19,	// (0x00006b19) fep_vkb_keypad_pane_g4

0x6b88,	// (0x00006b88) fep_vkb_bottom_pane_g2_ParamLimits

0x6b88,	// (0x00006b88) fep_vkb_bottom_pane_g2

0x0001,

0xb09c,	// (0x0000b09c) fep_vkb_bottom_pane_g_ParamLimits

0xb09c,	// (0x0000b09c) fep_vkb_bottom_pane_g

0x65e6,	// (0x000065e6) cell_vkb_side_pane_g2

0x0001,

0xb0a6,	// (0x0000b0a6) cell_vkb_side_pane_g

0x6c13,	// (0x00006c13) cell_vkb_side_pane_t1

0x6c21,	// (0x00006c21) cell_vkb_side_pane_t1_copy1

0x65e6,	// (0x000065e6) bg_fep_vkb_candidate_pane_g2

0x6d4d,	// (0x00006d4d) cell_vkb_candidate_pane_ParamLimits

0x68ac,	// (0x000068ac) aid_size_cell_vkb_ParamLimits

0x68ac,	// (0x000068ac) aid_size_cell_vkb

0x6d4d,	// (0x00006d4d) cell_vkb_candidate_pane

0x6d81,	// (0x00006d81) bg_popup_fep_shadow_pane_g1

0xd718,	// (0x0000d718) fep_vkb_bottom_pane_ParamLimits

0xd718,	// (0x0000d718) fep_vkb_bottom_pane

0x6970,	// (0x00006970) fep_vkb_candidate_pane_ParamLimits

0x6970,	// (0x00006970) fep_vkb_candidate_pane

0xd73d,	// (0x0000d73d) fep_vkb_keypad_pane_ParamLimits

0xd73d,	// (0x0000d73d) fep_vkb_keypad_pane

0xd779,	// (0x0000d779) fep_vkb_side_pane_ParamLimits

0xd779,	// (0x0000d779) fep_vkb_side_pane

0xd7b5,	// (0x0000d7b5) fep_vkb_top_pane_ParamLimits

0xd7b5,	// (0x0000d7b5) fep_vkb_top_pane

0x6a4a,	// (0x00006a4a) fep_vkb_top_pane_g1_ParamLimits

0x6a4a,	// (0x00006a4a) fep_vkb_top_pane_g1

0x6a59,	// (0x00006a59) fep_vkb_top_pane_g2_ParamLimits

0x6a59,	// (0x00006a59) fep_vkb_top_pane_g2

0x6a68,	// (0x00006a68) fep_vkb_top_pane_g3_ParamLimits

0x6a68,	// (0x00006a68) fep_vkb_top_pane_g3

0x0003,

0xb08c,	// (0x0000b08c) fep_vkb_top_pane_g_ParamLimits

0xb08c,	// (0x0000b08c) fep_vkb_top_pane_g

0x6a86,	// (0x00006a86) fep_vkb_top_text_pane_ParamLimits

0x6a86,	// (0x00006a86) fep_vkb_top_text_pane

0xd7f1,	// (0x0000d7f1) fep_vkb_side_pane_g1_ParamLimits

0xd7f1,	// (0x0000d7f1) fep_vkb_side_pane_g1

0x6ae0,	// (0x00006ae0) grid_vkb_side_pane_ParamLimits

0x6ae0,	// (0x00006ae0) grid_vkb_side_pane

0x6d89,	// (0x00006d89) bg_popup_fep_shadow_pane_g2

0x6d92,	// (0x00006d92) bg_popup_fep_shadow_pane_g3

0x6d9a,	// (0x00006d9a) bg_popup_fep_shadow_pane_g4

0x6da3,	// (0x00006da3) bg_popup_fep_shadow_pane_g5

0x6dad,	// (0x00006dad) bg_popup_fep_shadow_pane_g6

0x6db5,	// (0x00006db5) bg_popup_fep_shadow_pane_g7

0x14e2,	// (0x000014e2) bg_popup_fep_shadow_pane_g8

0x6b37,	// (0x00006b37) grid_vkb_keypad_number_pane_ParamLimits

0x6b37,	// (0x00006b37) grid_vkb_keypad_number_pane

0x6b47,	// (0x00006b47) grid_vkb_keypad_pane_ParamLimits

0x6b47,	// (0x00006b47) grid_vkb_keypad_pane

0x6b6d,	// (0x00006b6d) fep_vkb_bottom_pane_g1_ParamLimits

0x6b6d,	// (0x00006b6d) fep_vkb_bottom_pane_g1

0x6b96,	// (0x00006b96) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6b96,	// (0x00006b96) grid_vkb_keypad_bottom_left_pane

0x6bab,	// (0x00006bab) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6bab,	// (0x00006bab) grid_vkb_keypad_bottom_right_pane

0x6bc0,	// (0x00006bc0) fep_vkb_top_text_pane_g1

0xd838,	// (0x0000d838) fep_vkb_top_text_pane_t1

0xd84a,	// (0x0000d84a) cell_vkb_side_pane_ParamLimits

0xd84a,	// (0x0000d84a) cell_vkb_side_pane

0x65e6,	// (0x000065e6) cell_vkb_side_pane_g1

0x6c2f,	// (0x00006c2f) cell_vkb_keypad_pane_ParamLimits

0x6c2f,	// (0x00006c2f) cell_vkb_keypad_pane

0x6ca4,	// (0x00006ca4) cell_vkb_keypad_pane_g1

0x0008,

0xb0b9,	// (0x0000b0b9) bg_popup_fep_shadow_pane_g

0x65e6,	// (0x000065e6) cell_hwr_side_pane_g1

0x65e6,	// (0x000065e6) cell_hwr_side_pane_g2

0x6cae,	// (0x00006cae) cell_vkb_keypad_pane_t1

0xd860,	// (0x0000d860) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd860,	// (0x0000d860) cell_vkb_keypad_bottom_left_pane

0xd875,	// (0x0000d875) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd875,	// (0x0000d875) cell_vkb_keypad_bottom_right_pane

0x65e6,	// (0x000065e6) cell_vkb_keypad_bottom_left_pane_g1

0x65e6,	// (0x000065e6) cell_vkb_keypad_bottom_right_pane_g1

0x6d12,	// (0x00006d12) cell_vkb_keypad_number_pane_ParamLimits

0x6d12,	// (0x00006d12) cell_vkb_keypad_number_pane

0x6d31,	// (0x00006d31) cell_vkb_keypad_number_pane_g1

0x6d3b,	// (0x00006d3b) cell_vkb_keypad_number_pane_g2

0x6d44,	// (0x00006d44) cell_vkb_keypad_number_pane_g3

0x0002,

0xb0ab,	// (0x0000b0ab) cell_vkb_keypad_number_pane_g

0x6cae,	// (0x00006cae) cell_vkb_keypad_number_pane_t1

0x6d68,	// (0x00006d68) fep_vkb_candidate_pane_g1

0x0001,

0xb0a6,	// (0x0000b0a6) cell_hwr_side_pane_g

0x6dc7,	// (0x00006dc7) cell_hwr_side_pane_t1

0x6dd5,	// (0x00006dd5) cell_hwr_side_pane_t1_copy1

0x6a78,	// (0x00006a78) cell_hwr_candidate_pane_g1

0x6e25,	// (0x00006e25) cell_hwr_candidate_pane_t1

0x65e6,	// (0x000065e6) cell_vkb_candidate_pane_g2

0x6e79,	// (0x00006e79) cell_vkb_candidate_pane_t1

0x6642,	// (0x00006642) bg_popup_fep_shadow_pane_ParamLimits

0x6642,	// (0x00006642) bg_popup_fep_shadow_pane

0x66f7,	// (0x000066f7) bg_fep_hwr_top_pane_g4

0x6765,	// (0x00006765) bg_hwr_side_pane_g1_ParamLimits

0x6765,	// (0x00006765) bg_hwr_side_pane_g1

0xd6d1,	// (0x0000d6d1) cell_hwr_side_pane_ParamLimits

0xd6d1,	// (0x0000d6d1) cell_hwr_side_pane

0x67d3,	// (0x000067d3) fep_hwr_write_pane_g1_ParamLimits

0x67d3,	// (0x000067d3) fep_hwr_write_pane_g1

0x67e0,	// (0x000067e0) fep_hwr_write_pane_g2_ParamLimits

0x67e0,	// (0x000067e0) fep_hwr_write_pane_g2

0x67ed,	// (0x000067ed) fep_hwr_write_pane_g3_ParamLimits

0x67ed,	// (0x000067ed) fep_hwr_write_pane_g3

0xd6f1,	// (0x0000d6f1) fep_hwr_write_pane_g4_ParamLimits

0xd6f1,	// (0x0000d6f1) fep_hwr_write_pane_g4

0x0005,

0xf425,	// (0x0000f425) fep_hwr_write_pane_g_ParamLimits

0xf425,	// (0x0000f425) fep_hwr_write_pane_g

0x66f7,	// (0x000066f7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x66f7,	// (0x000066f7) bg_fep_hwr_candidate_pane_g2

0x6836,	// (0x00006836) cell_hwr_candidate_pane_ParamLimits

0x6836,	// (0x00006836) cell_hwr_candidate_pane

0x6878,	// (0x00006878) fep_hwr_candidate_pane_g1_ParamLimits

0x68da,	// (0x000068da) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x68da,	// (0x000068da) bg_popup_fep_shadow_pane_cp2

0x6a78,	// (0x00006a78) fep_vkb_top_pane_g4_ParamLimits

0x6a78,	// (0x00006a78) fep_vkb_top_pane_g4

0x6abe,	// (0x00006abe) fep_vkb_side_pane_g2_ParamLimits

0x6abe,	// (0x00006abe) fep_vkb_side_pane_g2

0xbd06,	// (0x0000bd06) list_setting_pane_t4_ParamLimits

0xbd06,	// (0x0000bd06) list_setting_pane_t4

0xbd80,	// (0x0000bd80) list_setting_number_pane_t5_ParamLimits

0xbd80,	// (0x0000bd80) list_setting_number_pane_t5

0x1dae,	// (0x00001dae) list_double_heading_pane_cp2_ParamLimits

0x1dae,	// (0x00001dae) list_double_heading_pane_cp2

0x0fe2,	// (0x00000fe2) list_double_heading_pane_g1_cp2_ParamLimits

0x0fe2,	// (0x00000fe2) list_double_heading_pane_g1_cp2

0x13bf,	// (0x000013bf) list_double_heading_pane_g2_cp2_ParamLimits

0x13bf,	// (0x000013bf) list_double_heading_pane_g2_cp2

0x6e87,	// (0x00006e87) list_double_heading_pane_t1_cp2_ParamLimits

0x6e87,	// (0x00006e87) list_double_heading_pane_t1_cp2

0x6e9d,	// (0x00006e9d) list_double_heading_pane_t2_cp2_ParamLimits

0x6e9d,	// (0x00006e9d) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02

0x6eaf,	// (0x00006eaf) list_preview_fixed_pane

0x6ef5,	// (0x00006ef5) list_empty_pane_fp_ParamLimits

0x6ef5,	// (0x00006ef5) list_empty_pane_fp

0x6ef5,	// (0x00006ef5) list_single_cale_day_pane_fp_ParamLimits

0x6ef5,	// (0x00006ef5) list_single_cale_day_pane_fp

0x6ef5,	// (0x00006ef5) list_single_graphic_heading_pane_fp_ParamLimits

0x6ef5,	// (0x00006ef5) list_single_graphic_heading_pane_fp

0x6ef5,	// (0x00006ef5) list_single_graphic_pane_fp_ParamLimits

0x6ef5,	// (0x00006ef5) list_single_graphic_pane_fp

0x6ef5,	// (0x00006ef5) list_single_heading_pane_fp_ParamLimits

0x6ef5,	// (0x00006ef5) list_single_heading_pane_fp

0x6ef5,	// (0x00006ef5) list_single_pane_fp_ParamLimits

0x6ef5,	// (0x00006ef5) list_single_pane_fp

0x6f0a,	// (0x00006f0a) list_single_pane_fp_g1_ParamLimits

0x6f0a,	// (0x00006f0a) list_single_pane_fp_g1

0x0fe2,	// (0x00000fe2) list_single_pane_fp_g2_ParamLimits

0x0fe2,	// (0x00000fe2) list_single_pane_fp_g2

0x13bf,	// (0x000013bf) list_single_pane_fp_g3_ParamLimits

0x13bf,	// (0x000013bf) list_single_pane_fp_g3

0x6f16,	// (0x00006f16) list_single_pane_fp_g4_ParamLimits

0x6f16,	// (0x00006f16) list_single_pane_fp_g4

0x0003,

0xb0da,	// (0x0000b0da) list_single_pane_fp_g_ParamLimits

0xb0da,	// (0x0000b0da) list_single_pane_fp_g

0x6f22,	// (0x00006f22) list_single_pane_fp_t1_ParamLimits

0x6f22,	// (0x00006f22) list_single_pane_fp_t1

0x6f39,	// (0x00006f39) list_single_graphic_pane_fp_g1_ParamLimits

0x6f39,	// (0x00006f39) list_single_graphic_pane_fp_g1

0x6f0a,	// (0x00006f0a) list_single_graphic_pane_fp_g2_ParamLimits

0x6f0a,	// (0x00006f0a) list_single_graphic_pane_fp_g2

0x0fe2,	// (0x00000fe2) list_single_graphic_pane_fp_g3_ParamLimits

0x0fe2,	// (0x00000fe2) list_single_graphic_pane_fp_g3

0x13bf,	// (0x000013bf) list_single_graphic_pane_fp_g4_ParamLimits

0x13bf,	// (0x000013bf) list_single_graphic_pane_fp_g4

0x6f16,	// (0x00006f16) list_single_graphic_pane_fp_g5_ParamLimits

0x6f16,	// (0x00006f16) list_single_graphic_pane_fp_g5

0x0004,

0xb0e3,	// (0x0000b0e3) list_single_graphic_pane_fp_g_ParamLimits

0xb0e3,	// (0x0000b0e3) list_single_graphic_pane_fp_g

0x6f45,	// (0x00006f45) list_single_graphic_pane_fp_t1_ParamLimits

0x6f45,	// (0x00006f45) list_single_graphic_pane_fp_t1

0x6f39,	// (0x00006f39) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6f39,	// (0x00006f39) list_single_graphic_heading_pane_fp_g1

0x6f0a,	// (0x00006f0a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6f0a,	// (0x00006f0a) list_single_graphic_heading_pane_fp_g2

0x0fe2,	// (0x00000fe2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fe2,	// (0x00000fe2) list_single_graphic_heading_pane_fp_g3

0x13bf,	// (0x000013bf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x13bf,	// (0x000013bf) list_single_graphic_heading_pane_fp_g4

0x6f16,	// (0x00006f16) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6f16,	// (0x00006f16) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb0e3,	// (0x0000b0e3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb0e3,	// (0x0000b0e3) list_single_graphic_heading_pane_fp_g

0x6f5b,	// (0x00006f5b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6f5b,	// (0x00006f5b) list_single_graphic_heading_pane_fp_t1

0x6f71,	// (0x00006f71) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6f71,	// (0x00006f71) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb0ee,	// (0x0000b0ee) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb0ee,	// (0x0000b0ee) list_single_graphic_heading_pane_fp_t

0x6f83,	// (0x00006f83) list_single_cale_day_pane_fp_g1_ParamLimits

0x6f83,	// (0x00006f83) list_single_cale_day_pane_fp_g1

0x6fbb,	// (0x00006fbb) list_single_cale_day_pane_fp_g2_ParamLimits

0x6fbb,	// (0x00006fbb) list_single_cale_day_pane_fp_g2

0x6fc7,	// (0x00006fc7) list_single_cale_day_pane_fp_g3_ParamLimits

0x6fc7,	// (0x00006fc7) list_single_cale_day_pane_fp_g3

0x6fef,	// (0x00006fef) list_single_cale_day_pane_fp_g4_ParamLimits

0x6fef,	// (0x00006fef) list_single_cale_day_pane_fp_g4

0x7013,	// (0x00007013) list_single_cale_day_pane_fp_g5_ParamLimits

0x7013,	// (0x00007013) list_single_cale_day_pane_fp_g5

0x0004,

0xb0f3,	// (0x0000b0f3) list_single_cale_day_pane_fp_g_ParamLimits

0xb0f3,	// (0x0000b0f3) list_single_cale_day_pane_fp_g

0x7037,	// (0x00007037) list_single_cale_day_pane_fp_t1_ParamLimits

0x7037,	// (0x00007037) list_single_cale_day_pane_fp_t1

0x705d,	// (0x0000705d) list_single_cale_day_pane_fp_t2_ParamLimits

0x705d,	// (0x0000705d) list_single_cale_day_pane_fp_t2

0x7076,	// (0x00007076) list_single_cale_day_pane_fp_t3_ParamLimits

0x7076,	// (0x00007076) list_single_cale_day_pane_fp_t3

0x0002,

0xb0fe,	// (0x0000b0fe) list_single_cale_day_pane_fp_t_ParamLimits

0xb0fe,	// (0x0000b0fe) list_single_cale_day_pane_fp_t

0x6f0a,	// (0x00006f0a) list_empty_pane_fp_g1_ParamLimits

0x6f0a,	// (0x00006f0a) list_empty_pane_fp_g1

0x708f,	// (0x0000708f) list_empty_pane_fp_t1

0x709d,	// (0x0000709d) list_empty_pane_fp_t2

0x0001,

0xb105,	// (0x0000b105) list_empty_pane_fp_t

0x6f0a,	// (0x00006f0a) list_single_heading_pane_fp_g1_ParamLimits

0x6f0a,	// (0x00006f0a) list_single_heading_pane_fp_g1

0x0fe2,	// (0x00000fe2) list_single_heading_pane_fp_g2_ParamLimits

0x0fe2,	// (0x00000fe2) list_single_heading_pane_fp_g2

0x13bf,	// (0x000013bf) list_single_heading_pane_fp_g3_ParamLimits

0x13bf,	// (0x000013bf) list_single_heading_pane_fp_g3

0x0002,

0xb10a,	// (0x0000b10a) list_single_heading_pane_fp_g_ParamLimits

0xb10a,	// (0x0000b10a) list_single_heading_pane_fp_g

0x70ab,	// (0x000070ab) list_single_heading_pane_fp_t1_ParamLimits

0x70ab,	// (0x000070ab) list_single_heading_pane_fp_t1

0x70bd,	// (0x000070bd) list_single_heading_pane_fp_t2_ParamLimits

0x70bd,	// (0x000070bd) list_single_heading_pane_fp_t2

0x0001,

0xb111,	// (0x0000b111) list_single_heading_pane_fp_t_ParamLimits

0xb111,	// (0x0000b111) list_single_heading_pane_fp_t

0x1715,	// (0x00001715) aid_size_cell_fast

0x07ab,	// (0x000007ab) soft_indicator_pane_cp1_t1

0x1752,	// (0x00001752) cell_app_pane_cp2_ParamLimits

0x1752,	// (0x00001752) cell_app_pane_cp2

0x6664,	// (0x00006664) fep_hwr_candidate_drop_down_list_pane

0x6892,	// (0x00006892) fep_hwr_candidate_pane_g3_ParamLimits

0x6892,	// (0x00006892) fep_hwr_candidate_pane_g3

0x689f,	// (0x0000689f) fep_hwr_candidate_pane_g4_ParamLimits

0x689f,	// (0x0000689f) fep_hwr_candidate_pane_g4

0x0002,

0xb085,	// (0x0000b085) fep_hwr_candidate_pane_g_ParamLimits

0xb085,	// (0x0000b085) fep_hwr_candidate_pane_g

0x695f,	// (0x0000695f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x695f,	// (0x0000695f) fep_vkb_candidate_drop_down_list_pane

0x6d70,	// (0x00006d70) fep_vkb_candidate_pane_g3

0x6d78,	// (0x00006d78) fep_vkb_candidate_pane_g4

0x0002,

0xb0b2,	// (0x0000b0b2) fep_vkb_candidate_pane_g

0x6a78,	// (0x00006a78) cell_hwr_candidate_pane_g1_ParamLimits

0x6de3,	// (0x00006de3) cell_hwr_candidate_pane_g3_ParamLimits

0x6de3,	// (0x00006de3) cell_hwr_candidate_pane_g3

0x6e04,	// (0x00006e04) cell_hwr_candidate_pane_g4_ParamLimits

0x6e04,	// (0x00006e04) cell_hwr_candidate_pane_g4

0x0002,

0xb0cc,	// (0x0000b0cc) cell_hwr_candidate_pane_g_ParamLimits

0xb0cc,	// (0x0000b0cc) cell_hwr_candidate_pane_g

0x6e43,	// (0x00006e43) cell_vkb_candidate_pane_g3_ParamLimits

0x6e43,	// (0x00006e43) cell_vkb_candidate_pane_g3

0x6e5e,	// (0x00006e5e) cell_vkb_candidate_pane_g4_ParamLimits

0x6e5e,	// (0x00006e5e) cell_vkb_candidate_pane_g4

0x70d3,	// (0x000070d3) cell_app_pane_cp2_g1_ParamLimits

0x70d3,	// (0x000070d3) cell_app_pane_cp2_g1

0x70f1,	// (0x000070f1) cell_app_pane_cp2_g2_ParamLimits

0x70f1,	// (0x000070f1) cell_app_pane_cp2_g2

0x0001,

0xb116,	// (0x0000b116) cell_app_pane_cp2_g_ParamLimits

0xb116,	// (0x0000b116) cell_app_pane_cp2_g

0x70fd,	// (0x000070fd) cell_app_pane_cp2_t1_ParamLimits

0x70fd,	// (0x000070fd) cell_app_pane_cp2_t1

0x1399,	// (0x00001399) grid_highlight_pane_cp1_ParamLimits

0x1399,	// (0x00001399) grid_highlight_pane_cp1

0x710f,	// (0x0000710f) cell_hwr_candidate_pane_cp1_ParamLimits

0x710f,	// (0x0000710f) cell_hwr_candidate_pane_cp1

0x6a78,	// (0x00006a78) fep_hwr_candidate_drop_down_list_pane_g1

0x712e,	// (0x0000712e) fep_hwr_candidate_drop_down_list_pane_g2

0x713b,	// (0x0000713b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb11b,	// (0x0000b11b) fep_hwr_candidate_drop_down_list_pane_g

0x7148,	// (0x00007148) fep_hwr_candidate_drop_down_list_scroll_pane

0x7151,	// (0x00007151) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7151,	// (0x00007151) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x715e,	// (0x0000715e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x715e,	// (0x0000715e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x716b,	// (0x0000716b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x716b,	// (0x0000716b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6e43,	// (0x00006e43) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6e43,	// (0x00006e43) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6e5e,	// (0x00006e5e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6e5e,	// (0x00006e5e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7178,	// (0x00007178) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7178,	// (0x00007178) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7193,	// (0x00007193) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7193,	// (0x00007193) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x71ae,	// (0x000071ae) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x71ae,	// (0x000071ae) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb122,	// (0x0000b122) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb122,	// (0x0000b122) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x71c9,	// (0x000071c9) cell_vkb_candidate_pane_cp1_ParamLimits

0x71c9,	// (0x000071c9) cell_vkb_candidate_pane_cp1

0x6a78,	// (0x00006a78) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6a78,	// (0x00006a78) fep_vkb_candidate_drop_down_list_pane_g1

0x712e,	// (0x0000712e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x712e,	// (0x0000712e) fep_vkb_candidate_drop_down_list_pane_g2

0x713b,	// (0x0000713b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x713b,	// (0x0000713b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb11b,	// (0x0000b11b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb11b,	// (0x0000b11b) fep_vkb_candidate_drop_down_list_pane_g

0x71e9,	// (0x000071e9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x71e9,	// (0x000071e9) fep_vkb_candidate_drop_down_list_scroll_pane

0x71f6,	// (0x000071f6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71f6,	// (0x000071f6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7203,	// (0x00007203) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7203,	// (0x00007203) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x720f,	// (0x0000720f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x720f,	// (0x0000720f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6de3,	// (0x00006de3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6de3,	// (0x00006de3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6e04,	// (0x00006e04) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6e04,	// (0x00006e04) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x721b,	// (0x0000721b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x721b,	// (0x0000721b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x723c,	// (0x0000723c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x723c,	// (0x0000723c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x725d,	// (0x0000725d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x725d,	// (0x0000725d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb133,	// (0x0000b133) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb133,	// (0x0000b133) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb68e,	// (0x0000b68e) title_pane_g1_ParamLimits

0xb6a1,	// (0x0000b6a1) title_pane_g2_ParamLimits

0xf26a,	// (0x0000f26a) title_pane_g_ParamLimits

0x1d48,	// (0x00001d48) aid_call2_pane

0x1d50,	// (0x00001d50) aid_call_pane

0x1d58,	// (0x00001d58) popup_clock_analogue_window_g1

0x1d58,	// (0x00001d58) popup_clock_analogue_window_g2

0x1d60,	// (0x00001d60) popup_clock_analogue_window_g3

0x1d69,	// (0x00001d69) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xac63,	// (0x0000ac63) popup_clock_analogue_window_g

0x1d71,	// (0x00001d71) popup_clock_analogue_window_t1

0x1dfc,	// (0x00001dfc) clock_digital_number_pane_ParamLimits

0x1dfc,	// (0x00001dfc) clock_digital_number_pane

0x1e08,	// (0x00001e08) clock_digital_number_pane_cp02_ParamLimits

0x1e08,	// (0x00001e08) clock_digital_number_pane_cp02

0x1e14,	// (0x00001e14) clock_digital_number_pane_cp03_ParamLimits

0x1e14,	// (0x00001e14) clock_digital_number_pane_cp03

0x1e20,	// (0x00001e20) clock_digital_number_pane_cp04_ParamLimits

0x1e20,	// (0x00001e20) clock_digital_number_pane_cp04

0x1e2c,	// (0x00001e2c) clock_digital_separator_pane_ParamLimits

0x1e2c,	// (0x00001e2c) clock_digital_separator_pane

0x1e38,	// (0x00001e38) popup_clock_digital_window_t1_ParamLimits

0x1e38,	// (0x00001e38) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xac6e,	// (0x0000ac6e) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xac6e,	// (0x0000ac6e) clock_digital_separator_pane_g

0xcac3,	// (0x0000cac3) aid_fill_nsta_ParamLimits

0xcbf9,	// (0x0000cbf9) indicator_nsta_pane_ParamLimits

0x3404,	// (0x00003404) popup_clock_analogue_window

0x3404,	// (0x00003404) popup_clock_digital_window

0x16d6,	// (0x000016d6) grid_indicator_nsta_pane_ParamLimits

0x5f3b,	// (0x00005f3b) clock_nsta_pane_t2

0x0001,

0xb005,	// (0x0000b005) clock_nsta_pane_t

0x1b06,	// (0x00001b06) aid_size_max_handle

0xc065,	// (0x0000c065) aid_size_min_handle

0x2607,	// (0x00002607) editor_scroll_pane

0x7278,	// (0x00007278) ex_editor_pane

0x1683,	// (0x00001683) scroll_pane_cp13

0x0dbd,	// (0x00000dbd) scroll_pane_cp14

0x1da6,	// (0x00001da6) scroll_pane_cp36

0xc06e,	// (0x0000c06e) list_single_graphic_hl_pane_cp2_ParamLimits

0xc06e,	// (0x0000c06e) list_single_graphic_hl_pane_cp2

0xd349,	// (0x0000d349) list_single_graphic_hl_pane_ParamLimits

0xd349,	// (0x0000d349) list_single_graphic_hl_pane

0x7280,	// (0x00007280) aid_size_min_hl_cp1

0x7289,	// (0x00007289) list_highlight_pane_cp34_ParamLimits

0x7289,	// (0x00007289) list_highlight_pane_cp34

0x729a,	// (0x0000729a) list_single_graphic_hl_pane_g1_ParamLimits

0x729a,	// (0x0000729a) list_single_graphic_hl_pane_g1

0xd890,	// (0x0000d890) list_single_graphic_hl_pane_g2_ParamLimits

0xd890,	// (0x0000d890) list_single_graphic_hl_pane_g2

0xd890,	// (0x0000d890) list_single_graphic_hl_pane_g3_ParamLimits

0xd890,	// (0x0000d890) list_single_graphic_hl_pane_g3

0x2578,	// (0x00002578) list_single_graphic_hl_pane_g4_ParamLimits

0x2578,	// (0x00002578) list_single_graphic_hl_pane_g4

0xd89c,	// (0x0000d89c) list_single_graphic_hl_pane_g5_ParamLimits

0xd89c,	// (0x0000d89c) list_single_graphic_hl_pane_g5

0x0004,

0xf43e,	// (0x0000f43e) list_single_graphic_hl_pane_g_ParamLimits

0xf43e,	// (0x0000f43e) list_single_graphic_hl_pane_g

0xd8b0,	// (0x0000d8b0) list_single_graphic_hl_pane_t1_ParamLimits

0xd8b0,	// (0x0000d8b0) list_single_graphic_hl_pane_t1

0x72dd,	// (0x000072dd) aid_size_min_hl_cp2

0x72e6,	// (0x000072e6) list_highlight_pane_cp34_cp2_ParamLimits

0x72e6,	// (0x000072e6) list_highlight_pane_cp34_cp2

0x729a,	// (0x0000729a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x729a,	// (0x0000729a) list_single_graphic_hl_pane_g1_cp2

0x72f3,	// (0x000072f3) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x72f3,	// (0x000072f3) list_single_graphic_hl_pane_g2_cp2

0x72ff,	// (0x000072ff) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x72ff,	// (0x000072ff) list_single_graphic_hl_pane_g3_cp2

0x5794,	// (0x00005794) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5794,	// (0x00005794) list_single_graphic_hl_pane_g4_cp2

0x72b3,	// (0x000072b3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x72b3,	// (0x000072b3) list_single_graphic_hl_pane_g5_cp2

0xc2af,	// (0x0000c2af) control_pane_g4_ParamLimits

0xc2af,	// (0x0000c2af) control_pane_g4

0x2b80,	// (0x00002b80) bg_popup_sub_pane_cp10_ParamLimits

0x65f0,	// (0x000065f0) list_choice_list_pane_ParamLimits

0x65ff,	// (0x000065ff) scroll_pane_cp23

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02_ParamLimits

0x6eaf,	// (0x00006eaf) list_preview_fixed_pane_ParamLimits

0x6ec5,	// (0x00006ec5) list_preview_fixed_pane_cp_ParamLimits

0x6ec5,	// (0x00006ec5) list_preview_fixed_pane_cp

0x6ed1,	// (0x00006ed1) popup_preview_fixed_window_g1_ParamLimits

0x6ed1,	// (0x00006ed1) popup_preview_fixed_window_g1

0x6edd,	// (0x00006edd) popup_preview_fixed_window_g2_ParamLimits

0x6edd,	// (0x00006edd) popup_preview_fixed_window_g2

0x0002,

0xb0d3,	// (0x0000b0d3) popup_preview_fixed_window_g_ParamLimits

0xb0d3,	// (0x0000b0d3) popup_preview_fixed_window_g

0x19b1,	// (0x000019b1) aid_navi_side_left_pane_ParamLimits

0x19c6,	// (0x000019c6) aid_navi_side_right_pane_ParamLimits

0x19de,	// (0x000019de) navi_icon_pane_stacon_ParamLimits

0x19f2,	// (0x000019f2) navi_navi_pane_stacon_ParamLimits

0x19de,	// (0x000019de) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x7323,	// (0x00007323) listscroll_text_info_pane

0x732b,	// (0x0000732b) list_text_info_pane_ParamLimits

0x732b,	// (0x0000732b) list_text_info_pane

0x733a,	// (0x0000733a) scroll_pane_cp24_ParamLimits

0x733a,	// (0x0000733a) scroll_pane_cp24

0xd8c6,	// (0x0000d8c6) list_text_info_pane_t1_ParamLimits

0xd8c6,	// (0x0000d8c6) list_text_info_pane_t1

0xc439,	// (0x0000c439) popup_fast_swap2_window_ParamLimits

0xc439,	// (0x0000c439) popup_fast_swap2_window

0x7389,	// (0x00007389) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3d3d,	// (0x00003d3d) heading_pane_cp2

0x0a87,	// (0x00000a87) listscroll_fast2_pane

0x7393,	// (0x00007393) grid_fast2_pane

0x739d,	// (0x0000739d) listscroll_fast2_pane_g1

0x73a5,	// (0x000073a5) listscroll_fast2_pane_g2

0x0001,

0xb14f,	// (0x0000b14f) listscroll_fast2_pane_g

0x1683,	// (0x00001683) scroll_pane_cp26

0x73af,	// (0x000073af) cell_fast2_pane_ParamLimits

0x73af,	// (0x000073af) cell_fast2_pane

0x73c4,	// (0x000073c4) cell_fast2_pane_g1

0x73cd,	// (0x000073cd) cell_fast2_pane_g2

0x73d6,	// (0x000073d6) cell_fast2_pane_g3

0x0002,

0xb154,	// (0x0000b154) cell_fast2_pane_g

0x0b7a,	// (0x00000b7a) grid_highlight_pane_cp9

0x0b8f,	// (0x00000b8f) main_eswt_pane_ParamLimits

0x0b8f,	// (0x00000b8f) main_eswt_pane

0x734f,	// (0x0000734f) list_single_text_info_pane

0x73de,	// (0x000073de) eswt_ctrl_button_pane

0x73de,	// (0x000073de) eswt_ctrl_canvas_pane

0x73e6,	// (0x000073e6) eswt_ctrl_combo_pane

0x73de,	// (0x000073de) eswt_ctrl_default_pane

0x73de,	// (0x000073de) eswt_ctrl_label_pane

0x73ee,	// (0x000073ee) eswt_ctrl_wait_pane

0x73f6,	// (0x000073f6) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x7416,	// (0x00007416) popup_eswt_tasktip_window_ParamLimits

0x7416,	// (0x00007416) popup_eswt_tasktip_window

0x388d,	// (0x0000388d) bg_popup_window_pane_cp18

0x7427,	// (0x00007427) eswt_control_pane_g1_ParamLimits

0x7427,	// (0x00007427) eswt_control_pane_g1

0x7434,	// (0x00007434) eswt_control_pane_g2_ParamLimits

0x7434,	// (0x00007434) eswt_control_pane_g2

0x7441,	// (0x00007441) eswt_control_pane_g3_ParamLimits

0x7441,	// (0x00007441) eswt_control_pane_g3

0x744e,	// (0x0000744e) eswt_control_pane_g4_ParamLimits

0x744e,	// (0x0000744e) eswt_control_pane_g4

0x0003,

0xb15b,	// (0x0000b15b) eswt_control_pane_g_ParamLimits

0xb15b,	// (0x0000b15b) eswt_control_pane_g

0x1399,	// (0x00001399) bg_button_pane_ParamLimits

0x1399,	// (0x00001399) bg_button_pane

0x0b8f,	// (0x00000b8f) common_borders_pane_copy2_ParamLimits

0x0b8f,	// (0x00000b8f) common_borders_pane_copy2

0x745b,	// (0x0000745b) control_button_pane_g1_ParamLimits

0x745b,	// (0x0000745b) control_button_pane_g1

0x7467,	// (0x00007467) control_button_pane_g2_ParamLimits

0x7467,	// (0x00007467) control_button_pane_g2

0x7473,	// (0x00007473) control_button_pane_g3_ParamLimits

0x7473,	// (0x00007473) control_button_pane_g3

0x0002,

0xb164,	// (0x0000b164) control_button_pane_g_ParamLimits

0xb164,	// (0x0000b164) control_button_pane_g

0x7487,	// (0x00007487) control_button_pane_t1

0x7495,	// (0x00007495) control_button_pane_t2

0x0001,

0xb16b,	// (0x0000b16b) control_button_pane_t

0x36d3,	// (0x000036d3) bg_button_pane_g1

0x36db,	// (0x000036db) bg_button_pane_g2

0x36e3,	// (0x000036e3) bg_button_pane_g3

0x36eb,	// (0x000036eb) bg_button_pane_g4

0x36f3,	// (0x000036f3) bg_button_pane_g5

0x36fb,	// (0x000036fb) bg_button_pane_g6

0x3703,	// (0x00003703) bg_button_pane_g7

0x370b,	// (0x0000370b) bg_button_pane_g8

0x3713,	// (0x00003713) bg_button_pane_g9

0x0008,

0xadca,	// (0x0000adca) bg_button_pane_g

0x65ab,	// (0x000065ab) common_borders_pane_ParamLimits

0x65ab,	// (0x000065ab) common_borders_pane

0x7427,	// (0x00007427) eswt_control_pane_g1_copy1_ParamLimits

0x7427,	// (0x00007427) eswt_control_pane_g1_copy1

0x7434,	// (0x00007434) eswt_control_pane_g2_copy1_ParamLimits

0x7434,	// (0x00007434) eswt_control_pane_g2_copy1

0x7441,	// (0x00007441) eswt_control_pane_g3_copy1_ParamLimits

0x7441,	// (0x00007441) eswt_control_pane_g3_copy1

0x744e,	// (0x0000744e) eswt_control_pane_g4_copy1_ParamLimits

0x744e,	// (0x0000744e) eswt_control_pane_g4_copy1

0x65e6,	// (0x000065e6) bg_eswt_ctrl_canvas_pane_g1

0x65ab,	// (0x000065ab) common_borders_pane_cp2_ParamLimits

0x65ab,	// (0x000065ab) common_borders_pane_cp2

0x65ab,	// (0x000065ab) common_borders_pane_cp3_ParamLimits

0x65ab,	// (0x000065ab) common_borders_pane_cp3

0x74a3,	// (0x000074a3) separator_horizontal_pane

0x74ab,	// (0x000074ab) separator_vertical_pane

0x7427,	// (0x00007427) eswt_control_pane_g1_copy2_ParamLimits

0x7427,	// (0x00007427) eswt_control_pane_g1_copy2

0x7434,	// (0x00007434) eswt_control_pane_g2_copy2_ParamLimits

0x7434,	// (0x00007434) eswt_control_pane_g2_copy2

0x7441,	// (0x00007441) eswt_control_pane_g3_copy2_ParamLimits

0x7441,	// (0x00007441) eswt_control_pane_g3_copy2

0x744e,	// (0x0000744e) eswt_control_pane_g4_copy2_ParamLimits

0x744e,	// (0x0000744e) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x74b4,	// (0x000074b4) separator_horizontal_pane_g1

0x74bd,	// (0x000074bd) separator_horizontal_pane_g2

0x74c6,	// (0x000074c6) separator_horizontal_pane_g3

0x0002,

0xb170,	// (0x0000b170) separator_horizontal_pane_g

0x7427,	// (0x00007427) eswt_control_pane_g1_copy3_ParamLimits

0x7427,	// (0x00007427) eswt_control_pane_g1_copy3

0x7434,	// (0x00007434) eswt_control_pane_g2_copy3_ParamLimits

0x7434,	// (0x00007434) eswt_control_pane_g2_copy3

0x7441,	// (0x00007441) eswt_control_pane_g3_copy3_ParamLimits

0x7441,	// (0x00007441) eswt_control_pane_g3_copy3

0x744e,	// (0x0000744e) eswt_control_pane_g4_copy3_ParamLimits

0x744e,	// (0x0000744e) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x74cf,	// (0x000074cf) separator_vertical_pane_g1

0x74d8,	// (0x000074d8) separator_vertical_pane_g2

0x74e1,	// (0x000074e1) separator_vertical_pane_g3

0x0002,

0xb177,	// (0x0000b177) separator_vertical_pane_g

0x7427,	// (0x00007427) eswt_control_pane_g1_copy4_ParamLimits

0x7427,	// (0x00007427) eswt_control_pane_g1_copy4

0x7434,	// (0x00007434) eswt_control_pane_g2_copy4_ParamLimits

0x7434,	// (0x00007434) eswt_control_pane_g2_copy4

0x7441,	// (0x00007441) eswt_control_pane_g3_copy4_ParamLimits

0x7441,	// (0x00007441) eswt_control_pane_g3_copy4

0x744e,	// (0x0000744e) eswt_control_pane_g4_copy4_ParamLimits

0x744e,	// (0x0000744e) eswt_control_pane_g4_copy4

0xd8e1,	// (0x0000d8e1) eswt_ctrl_combo_button_pane

0xd8e9,	// (0x0000d8e9) eswt_ctrl_input_pane

0xd8f1,	// (0x0000d8f1) popup_choice_list_window_cp70

0xd8f9,	// (0x0000d8f9) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x65ab,	// (0x000065ab) bg_button_pane_cp70_ParamLimits

0x65ab,	// (0x000065ab) bg_button_pane_cp70

0xd907,	// (0x0000d907) eswt_ctrl_combo_button_pane_g1

0x7518,	// (0x00007518) wait_bar_pane_cp70

0x388d,	// (0x0000388d) bg_popup_window_pane_cp70_ParamLimits

0x388d,	// (0x0000388d) bg_popup_window_pane_cp70

0x7520,	// (0x00007520) popup_eswt_tasktip_window_t1

0x7536,	// (0x00007536) wait_bar_pane_cp71_ParamLimits

0x7536,	// (0x00007536) wait_bar_pane_cp71

0x7542,	// (0x00007542) grid_eswt_app_pane

0x1b6a,	// (0x00001b6a) scroll_pane_cp70

0xd90f,	// (0x0000d90f) cell_eswt_app_pane_ParamLimits

0xd90f,	// (0x0000d90f) cell_eswt_app_pane

0xd939,	// (0x0000d939) cell_eswt_app_pane_g1_ParamLimits

0xd939,	// (0x0000d939) cell_eswt_app_pane_g1

0xd968,	// (0x0000d968) cell_eswt_app_pane_g2_ParamLimits

0xd968,	// (0x0000d968) cell_eswt_app_pane_g2

0x0001,

0xf449,	// (0x0000f449) cell_eswt_app_pane_g_ParamLimits

0xf449,	// (0x0000f449) cell_eswt_app_pane_g

0xd991,	// (0x0000d991) cell_eswt_app_pane_t1_ParamLimits

0xd991,	// (0x0000d991) cell_eswt_app_pane_t1

0x7605,	// (0x00007605) grid_highlight_pane_cp70_ParamLimits

0x7605,	// (0x00007605) grid_highlight_pane_cp70

0x24dc,	// (0x000024dc) set_content_pane_g1

0x2950,	// (0x00002950) status_small_volume_pane

0x7611,	// (0x00007611) status_small_volume_pane_g1

0x7619,	// (0x00007619) volume_small2_pane

0x7622,	// (0x00007622) volume_small2_pane_g1

0x762b,	// (0x0000762b) volume_small2_pane_g2

0x7634,	// (0x00007634) volume_small2_pane_g3

0x763d,	// (0x0000763d) volume_small2_pane_g4

0x7646,	// (0x00007646) volume_small2_pane_g5

0x764f,	// (0x0000764f) volume_small2_pane_g6

0x7658,	// (0x00007658) volume_small2_pane_g7

0x7661,	// (0x00007661) volume_small2_pane_g8

0x766a,	// (0x0000766a) volume_small2_pane_g9

0x7673,	// (0x00007673) volume_small2_pane_g10

0x0009,

0xb183,	// (0x0000b183) volume_small2_pane_g

0x6bc0,	// (0x00006bc0) fep_vkb_top_text_pane_g1_ParamLimits

0xd838,	// (0x0000d838) fep_vkb_top_text_pane_t1_ParamLimits

0x6ee9,	// (0x00006ee9) popup_preview_fixed_window_g3_ParamLimits

0x6ee9,	// (0x00006ee9) popup_preview_fixed_window_g3

0xca56,	// (0x0000ca56) popup_toolbar_trans_pane

0xd1a1,	// (0x0000d1a1) aid_height_set_list_ParamLimits

0x4f03,	// (0x00004f03) aid_size_parent_ParamLimits

0x2b80,	// (0x00002b80) list_highlight_pane_cp2_ParamLimits

0x24dc,	// (0x000024dc) set_content_pane_g1_ParamLimits

0xd35a,	// (0x0000d35a) list_single_image_pane_ParamLimits

0xd35a,	// (0x0000d35a) list_single_image_pane

0xd9c3,	// (0x0000d9c3) aid_size_cell_image_ParamLimits

0xd9c3,	// (0x0000d9c3) aid_size_cell_image

0xd9d0,	// (0x0000d9d0) grid_single_image_pane_ParamLimits

0xd9d0,	// (0x0000d9d0) grid_single_image_pane

0x37a4,	// (0x000037a4) list_single_image_pane_g1_ParamLimits

0x37a4,	// (0x000037a4) list_single_image_pane_g1

0x7695,	// (0x00007695) list_single_image_pane_g2_ParamLimits

0x7695,	// (0x00007695) list_single_image_pane_g2

0x0001,

0xb198,	// (0x0000b198) list_single_image_pane_g_ParamLimits

0xb198,	// (0x0000b198) list_single_image_pane_g

0x76a9,	// (0x000076a9) list_single_image_pane_t1_ParamLimits

0x76a9,	// (0x000076a9) list_single_image_pane_t1

0xd9de,	// (0x0000d9de) cell_image_list_pane_ParamLimits

0xd9de,	// (0x0000d9de) cell_image_list_pane

0xd9f4,	// (0x0000d9f4) cell_image_list_pane_g1

0xd9fd,	// (0x0000d9fd) cell_image_list_pane_g2

0x0001,

0xf44e,	// (0x0000f44e) cell_image_list_pane_g

0x76e5,	// (0x000076e5) aid_size_cell_tb_trans_pane

0x1399,	// (0x00001399) bg_tb_trans_pane

0x76f7,	// (0x000076f7) grid_tb_trans_pane

0x36d3,	// (0x000036d3) bg_tb_trans_pane_g1

0x36db,	// (0x000036db) bg_tb_trans_pane_g2

0x36e3,	// (0x000036e3) bg_tb_trans_pane_g3

0x36eb,	// (0x000036eb) bg_tb_trans_pane_g4

0x36f3,	// (0x000036f3) bg_tb_trans_pane_g5

0x370b,	// (0x0000370b) bg_tb_trans_pane_g6

0x3713,	// (0x00003713) bg_tb_trans_pane_g7

0x36fb,	// (0x000036fb) bg_tb_trans_pane_g8

0x3703,	// (0x00003703) bg_tb_trans_pane_g9

0x0008,

0xb1a2,	// (0x0000b1a2) bg_tb_trans_pane_g

0x770b,	// (0x0000770b) cell_toolbar_trans_pane_ParamLimits

0x770b,	// (0x0000770b) cell_toolbar_trans_pane

0x65e6,	// (0x000065e6) cell_toolbar_trans_pane_g1

0xd5a0,	// (0x0000d5a0) list_form2_midp_pane_t1

0xd5ae,	// (0x0000d5ae) list_form2_midp_pane_t2

0x0001,

0xf419,	// (0x0000f419) list_form2_midp_pane_t

0x617d,	// (0x0000617d) scroll_pane_cp51_ParamLimits

0x6388,	// (0x00006388) form2_midp_wait_pane_g1

0x6391,	// (0x00006391) form2_midp_wait_pane_g2

0x639a,	// (0x0000639a) form2_midp_wait_pane_g3

0x0002,

0xb060,	// (0x0000b060) form2_midp_wait_pane_g

0x0507,	// (0x00000507) list_highlight_pane_cp21_ParamLimits

0x63f1,	// (0x000063f1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6400,	// (0x00006400) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5109,	// (0x00005109) list_single_2graphic_im_pane_ParamLimits

0x5109,	// (0x00005109) list_single_2graphic_im_pane

0xda06,	// (0x0000da06) list_single_2graphic_im_pane_g1_ParamLimits

0xda06,	// (0x0000da06) list_single_2graphic_im_pane_g1

0xda17,	// (0x0000da17) list_single_2graphic_im_pane_g2_ParamLimits

0xda17,	// (0x0000da17) list_single_2graphic_im_pane_g2

0xda23,	// (0x0000da23) list_single_2graphic_im_pane_g3_ParamLimits

0xda23,	// (0x0000da23) list_single_2graphic_im_pane_g3

0x0003,

0xf453,	// (0x0000f453) list_single_2graphic_im_pane_g_ParamLimits

0xf453,	// (0x0000f453) list_single_2graphic_im_pane_g

0xda37,	// (0x0000da37) list_single_2graphic_im_pane_t1_ParamLimits

0xda37,	// (0x0000da37) list_single_2graphic_im_pane_t1

0x6ef5,	// (0x00006ef5) list_single_graphic_2heading_pane_fp_ParamLimits

0x6ef5,	// (0x00006ef5) list_single_graphic_2heading_pane_fp

0x6f39,	// (0x00006f39) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6f39,	// (0x00006f39) list_single_graphic_2heading_pane_fp_g1

0x6f0a,	// (0x00006f0a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6f0a,	// (0x00006f0a) list_single_graphic_2heading_pane_fp_g2

0x0fe2,	// (0x00000fe2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fe2,	// (0x00000fe2) list_single_graphic_2heading_pane_fp_g3

0x13bf,	// (0x000013bf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x13bf,	// (0x000013bf) list_single_graphic_2heading_pane_fp_g4

0x6f16,	// (0x00006f16) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6f16,	// (0x00006f16) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb0e3,	// (0x0000b0e3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb0e3,	// (0x0000b0e3) list_single_graphic_2heading_pane_fp_g

0x779f,	// (0x0000779f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x779f,	// (0x0000779f) list_single_graphic_2heading_pane_fp_t1

0x6f71,	// (0x00006f71) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6f71,	// (0x00006f71) list_single_graphic_2heading_pane_fp_t2

0x77b5,	// (0x000077b5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x77b5,	// (0x000077b5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb1be,	// (0x0000b1be) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb1be,	// (0x0000b1be) list_single_graphic_2heading_pane_fp_t

0x6810,	// (0x00006810) fep_hwr_write_pane_g5_ParamLimits

0x6810,	// (0x00006810) fep_hwr_write_pane_g5

0x681c,	// (0x0000681c) fep_hwr_write_pane_g6_ParamLimits

0x681c,	// (0x0000681c) fep_hwr_write_pane_g6

0x73f6,	// (0x000073f6) eswt_shell_pane_ParamLimits

0x388d,	// (0x0000388d) bg_popup_window_pane_cp18_ParamLimits

0x4dab,	// (0x00004dab) heading_pane_cp70

0x7520,	// (0x00007520) popup_eswt_tasktip_window_t1_ParamLimits

0xcb1e,	// (0x0000cb1e) aid_touch_tab_arrow_left

0xcb34,	// (0x0000cb34) aid_touch_tab_arrow_right

0xb6b9,	// (0x0000b6b9) title_pane_g3_ParamLimits

0xb6b9,	// (0x0000b6b9) title_pane_g3

0x1278,	// (0x00001278) set_value_pane_g1

0xca56,	// (0x0000ca56) popup_toolbar_trans_pane_ParamLimits

0x76e5,	// (0x000076e5) aid_size_cell_tb_trans_pane_ParamLimits

0x1399,	// (0x00001399) bg_tb_trans_pane_ParamLimits

0x76f7,	// (0x000076f7) grid_tb_trans_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane

0x0b8f,	// (0x00000b8f) cont_snote2_single_text_pane_ParamLimits

0x0b8f,	// (0x00000b8f) cont_snote2_single_text_pane

0x0b8f,	// (0x00000b8f) cont_snote2_single_graphic_pane_ParamLimits

0x0b8f,	// (0x00000b8f) cont_snote2_single_graphic_pane

0x3f58,	// (0x00003f58) cont_note_wait_pane_ParamLimits

0x3f58,	// (0x00003f58) cont_note_wait_pane

0x3f58,	// (0x00003f58) cont_note_image_pane_ParamLimits

0x3f58,	// (0x00003f58) cont_note_image_pane

0x77cb,	// (0x000077cb) popup_note2_window_g1_ParamLimits

0x77cb,	// (0x000077cb) popup_note2_window_g1

0x77fc,	// (0x000077fc) popup_note2_window_t1_ParamLimits

0x77fc,	// (0x000077fc) popup_note2_window_t1

0x7841,	// (0x00007841) popup_note2_window_t2_ParamLimits

0x7841,	// (0x00007841) popup_note2_window_t2

0x7886,	// (0x00007886) popup_note2_window_t3_ParamLimits

0x7886,	// (0x00007886) popup_note2_window_t3

0x78cb,	// (0x000078cb) popup_note2_window_t4_ParamLimits

0x78cb,	// (0x000078cb) popup_note2_window_t4

0x08bf,	// (0x000008bf) popup_note2_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note2_window_t5

0x0004,

0xb1ca,	// (0x0000b1ca) popup_note2_window_t_ParamLimits

0xb1ca,	// (0x0000b1ca) popup_note2_window_t

0x78fa,	// (0x000078fa) popup_note2_image_window_g1_ParamLimits

0x78fa,	// (0x000078fa) popup_note2_image_window_g1

0x7906,	// (0x00007906) popup_note2_image_window_g2_ParamLimits

0x7906,	// (0x00007906) popup_note2_image_window_g2

0x0001,

0xb1d5,	// (0x0000b1d5) popup_note2_image_window_g_ParamLimits

0xb1d5,	// (0x0000b1d5) popup_note2_image_window_g

0x7918,	// (0x00007918) popup_note2_image_window_t1_ParamLimits

0x7918,	// (0x00007918) popup_note2_image_window_t1

0x7930,	// (0x00007930) popup_note2_image_window_t2_ParamLimits

0x7930,	// (0x00007930) popup_note2_image_window_t2

0x7948,	// (0x00007948) popup_note2_image_window_t3_ParamLimits

0x7948,	// (0x00007948) popup_note2_image_window_t3

0x0002,

0xb1da,	// (0x0000b1da) popup_note2_image_window_t_ParamLimits

0xb1da,	// (0x0000b1da) popup_note2_image_window_t

0x3f66,	// (0x00003f66) popup_note2_wait_window_g1_ParamLimits

0x3f66,	// (0x00003f66) popup_note2_wait_window_g1

0x7964,	// (0x00007964) popup_note2_wait_window_g2_ParamLimits

0x7964,	// (0x00007964) popup_note2_wait_window_g2

0x3f7e,	// (0x00003f7e) popup_note2_wait_window_g3_ParamLimits

0x3f7e,	// (0x00003f7e) popup_note2_wait_window_g3

0x0002,

0xb1e1,	// (0x0000b1e1) popup_note2_wait_window_g_ParamLimits

0xb1e1,	// (0x0000b1e1) popup_note2_wait_window_g

0x7970,	// (0x00007970) popup_note2_wait_window_t1_ParamLimits

0x7970,	// (0x00007970) popup_note2_wait_window_t1

0x798e,	// (0x0000798e) popup_note2_wait_window_t2_ParamLimits

0x798e,	// (0x0000798e) popup_note2_wait_window_t2

0x79ac,	// (0x000079ac) popup_note2_wait_window_t3_ParamLimits

0x79ac,	// (0x000079ac) popup_note2_wait_window_t3

0x79be,	// (0x000079be) popup_note2_wait_window_t4_ParamLimits

0x79be,	// (0x000079be) popup_note2_wait_window_t4

0x0003,

0xb1e8,	// (0x0000b1e8) popup_note2_wait_window_t_ParamLimits

0xb1e8,	// (0x0000b1e8) popup_note2_wait_window_t

0x79d0,	// (0x000079d0) wait_bar2_pane_ParamLimits

0x79d0,	// (0x000079d0) wait_bar2_pane

0x79e8,	// (0x000079e8) popup_snote2_single_text_window_g1_ParamLimits

0x79e8,	// (0x000079e8) popup_snote2_single_text_window_g1

0x7a10,	// (0x00007a10) popup_snote2_single_text_window_t1_ParamLimits

0x7a10,	// (0x00007a10) popup_snote2_single_text_window_t1

0x7a5c,	// (0x00007a5c) popup_snote2_single_text_window_t2_ParamLimits

0x7a5c,	// (0x00007a5c) popup_snote2_single_text_window_t2

0x7aa8,	// (0x00007aa8) popup_snote2_single_text_window_t3_ParamLimits

0x7aa8,	// (0x00007aa8) popup_snote2_single_text_window_t3

0x7ae9,	// (0x00007ae9) popup_snote2_single_text_window_t4_ParamLimits

0x7ae9,	// (0x00007ae9) popup_snote2_single_text_window_t4

0x7b1f,	// (0x00007b1f) popup_snote2_single_text_window_t5_ParamLimits

0x7b1f,	// (0x00007b1f) popup_snote2_single_text_window_t5

0x0004,

0xb1f1,	// (0x0000b1f1) popup_snote2_single_text_window_t_ParamLimits

0xb1f1,	// (0x0000b1f1) popup_snote2_single_text_window_t

0x7b4a,	// (0x00007b4a) popup_snote2_single_graphic_window_g1_ParamLimits

0x7b4a,	// (0x00007b4a) popup_snote2_single_graphic_window_g1

0x7b72,	// (0x00007b72) popup_snote2_single_graphic_window_g2_ParamLimits

0x7b72,	// (0x00007b72) popup_snote2_single_graphic_window_g2

0x0001,

0xb1fc,	// (0x0000b1fc) popup_snote2_single_graphic_window_g_ParamLimits

0xb1fc,	// (0x0000b1fc) popup_snote2_single_graphic_window_g

0x7b9a,	// (0x00007b9a) popup_snote2_single_graphic_window_t1_ParamLimits

0x7b9a,	// (0x00007b9a) popup_snote2_single_graphic_window_t1

0x7be6,	// (0x00007be6) popup_snote2_single_graphic_window_t2_ParamLimits

0x7be6,	// (0x00007be6) popup_snote2_single_graphic_window_t2

0x7aa8,	// (0x00007aa8) popup_snote2_single_graphic_window_t3_ParamLimits

0x7aa8,	// (0x00007aa8) popup_snote2_single_graphic_window_t3

0x7ae9,	// (0x00007ae9) popup_snote2_single_graphic_window_t4_ParamLimits

0x7ae9,	// (0x00007ae9) popup_snote2_single_graphic_window_t4

0x7b1f,	// (0x00007b1f) popup_snote2_single_graphic_window_t5_ParamLimits

0x7b1f,	// (0x00007b1f) popup_snote2_single_graphic_window_t5

0x0004,

0xb201,	// (0x0000b201) popup_snote2_single_graphic_window_t_ParamLimits

0xb201,	// (0x0000b201) popup_snote2_single_graphic_window_t

0x5fed,	// (0x00005fed) clock_nsta_pane_cp2_t1

0x5fed,	// (0x00005fed) clock_nsta_pane_cp2_t2

0x0001,

0xb021,	// (0x0000b021) clock_nsta_pane_cp2_t

0x13b3,	// (0x000013b3) form_field_data_wide_pane_g1_ParamLimits

0x0fe2,	// (0x00000fe2) form_field_data_wide_pane_g2_ParamLimits

0x0fe2,	// (0x00000fe2) form_field_data_wide_pane_g2

0x13bf,	// (0x000013bf) form_field_data_wide_pane_g3_ParamLimits

0x13bf,	// (0x000013bf) form_field_data_wide_pane_g3

0x0002,

0xabe6,	// (0x0000abe6) form_field_data_wide_pane_g_ParamLimits

0xabe6,	// (0x0000abe6) form_field_data_wide_pane_g

0xd4d9,	// (0x0000d4d9) grid_touch_3_pane_ParamLimits

0xd4d9,	// (0x0000d4d9) grid_touch_3_pane

0xda68,	// (0x0000da68) cell_touch_3_pane_ParamLimits

0xda68,	// (0x0000da68) cell_touch_3_pane

0x65e6,	// (0x000065e6) cell_touch_3_pane_g1

0x65e6,	// (0x000065e6) cell_touch_3_pane_g2

0x0001,

0xb0a6,	// (0x0000b0a6) cell_touch_3_pane_g

0x08f1,	// (0x000008f1) cont_query_data_pane

0x08f9,	// (0x000008f9) cont_query_data_pane_cp1

0x7c60,	// (0x00007c60) button_value_adjust_pane_cp7

0x7c68,	// (0x00007c68) query_popup_pane_cp3

0x1ec2,	// (0x00001ec2) bg_popup_sub_pane_cp22_ParamLimits

0x1ed8,	// (0x00001ed8) navi_navi_volume_pane_cp2

0x1ef3,	// (0x00001ef3) popup_side_volume_key_window_g2

0x1f02,	// (0x00001f02) popup_side_volume_key_window_g3

0x0002,

0xac7c,	// (0x0000ac7c) popup_side_volume_key_window_g

0x1f1f,	// (0x00001f1f) popup_side_volume_key_window_t2

0x0001,

0xac83,	// (0x0000ac83) popup_side_volume_key_window_t

0x23a6,	// (0x000023a6) popup_side_volume_key_window_ParamLimits

0xbb19,	// (0x0000bb19) list_double_graphic_pane_g4_ParamLimits

0xbb19,	// (0x0000bb19) list_double_graphic_pane_g4

0xd336,	// (0x0000d336) list_single_2heading_msg_pane_ParamLimits

0xd336,	// (0x0000d336) list_single_2heading_msg_pane

0xdab0,	// (0x0000dab0) list_single_2heading_msg_pane_g1_ParamLimits

0xdab0,	// (0x0000dab0) list_single_2heading_msg_pane_g1

0xdabc,	// (0x0000dabc) list_single_2heading_msg_pane_g2_ParamLimits

0xdabc,	// (0x0000dabc) list_single_2heading_msg_pane_g2

0xdacf,	// (0x0000dacf) list_single_2heading_msg_pane_g3_ParamLimits

0xdacf,	// (0x0000dacf) list_single_2heading_msg_pane_g3

0xdadb,	// (0x0000dadb) list_single_2heading_msg_pane_g4_ParamLimits

0xdadb,	// (0x0000dadb) list_single_2heading_msg_pane_g4

0x0003,

0xf45c,	// (0x0000f45c) list_single_2heading_msg_pane_g_ParamLimits

0xf45c,	// (0x0000f45c) list_single_2heading_msg_pane_g

0xdaf3,	// (0x0000daf3) list_single_2heading_msg_pane_t1_ParamLimits

0xdaf3,	// (0x0000daf3) list_single_2heading_msg_pane_t1

0xdb1b,	// (0x0000db1b) list_single_2heading_msg_pane_t2_ParamLimits

0xdb1b,	// (0x0000db1b) list_single_2heading_msg_pane_t2

0xdb86,	// (0x0000db86) list_single_2heading_msg_pane_t3_ParamLimits

0xdb86,	// (0x0000db86) list_single_2heading_msg_pane_t3

0x7d4b,	// (0x00007d4b) list_single_2heading_msg_pane_t4_ParamLimits

0x7d4b,	// (0x00007d4b) list_single_2heading_msg_pane_t4

0x0003,

0xf465,	// (0x0000f465) list_single_2heading_msg_pane_t_ParamLimits

0xf465,	// (0x0000f465) list_single_2heading_msg_pane_t

0x045b,	// (0x0000045b) title_pane_g4_ParamLimits

0x045b,	// (0x0000045b) title_pane_g4

0x18da,	// (0x000018da) title_pane_stacon_g3_ParamLimits

0x18da,	// (0x000018da) title_pane_stacon_g3

0x7762,	// (0x00007762) list_single_2graphic_im_pane_g4_ParamLimits

0x7762,	// (0x00007762) list_single_2graphic_im_pane_g4

0x4b1b,	// (0x00004b1b) popup_side_volume_key_window_cp

0x557a,	// (0x0000557a) main_idle_act2_pane_t1

0x371b,	// (0x0000371b) toolbar_button_pane_g10

0xb9c4,	// (0x0000b9c4) popup_toolbar_window_cp1

0x5fde,	// (0x00005fde) clock_nsta_pane_cp_t1

0x5fde,	// (0x00005fde) clock_nsta_pane_cp_t2

0x0001,

0xb01c,	// (0x0000b01c) clock_nsta_pane_cp_t

0x1ed8,	// (0x00001ed8) navi_navi_volume_pane_cp2_ParamLimits

0x1ee7,	// (0x00001ee7) popup_side_volume_key_window_g1_ParamLimits

0x1ef3,	// (0x00001ef3) popup_side_volume_key_window_g2_ParamLimits

0x1f02,	// (0x00001f02) popup_side_volume_key_window_g3_ParamLimits

0xac7c,	// (0x0000ac7c) popup_side_volume_key_window_g_ParamLimits

0x6650,	// (0x00006650) fep_hwr_aid_pane

0x66f7,	// (0x000066f7) bg_fep_hwr_top_pane_g4_ParamLimits

0x6717,	// (0x00006717) fep_hwr_top_pane_g1_ParamLimits

0x6729,	// (0x00006729) fep_hwr_top_pane_g2_ParamLimits

0x673b,	// (0x0000673b) fep_hwr_top_pane_g3_ParamLimits

0xb071,	// (0x0000b071) fep_hwr_top_pane_g_ParamLimits

0x6750,	// (0x00006750) fep_hwr_top_text_pane_ParamLimits

0x48de,	// (0x000048de) aid_touch_tab_arrow_arrow_2

0x48e7,	// (0x000048e7) aid_touch_tab_arrow_left_2

0x6664,	// (0x00006664) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x669b,	// (0x0000669b) fep_hwr_prediction_pane

0x69c8,	// (0x000069c8) fep_vkb_prediction_pane

0xd818,	// (0x0000d818) fep_vkb_side_pane_g3_ParamLimits

0xd818,	// (0x0000d818) fep_vkb_side_pane_g3

0x6a78,	// (0x00006a78) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x712e,	// (0x0000712e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x713b,	// (0x0000713b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb11b,	// (0x0000b11b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7d70,	// (0x00007d70) fep_hwr_prediction_pane_g1

0x7d7a,	// (0x00007d7a) fep_hwr_prediction_pane_g2

0x7d82,	// (0x00007d82) fep_hwr_prediction_pane_g3

0x7d8a,	// (0x00007d8a) fep_hwr_prediction_pane_g4

0x0003,

0xb21e,	// (0x0000b21e) fep_hwr_prediction_pane_g

0x7d70,	// (0x00007d70) fep_vkb_prediction_pane_g1

0x7d92,	// (0x00007d92) fep_vkb_prediction_pane_g2

0x7d9a,	// (0x00007d9a) fep_vkb_prediction_pane_g3

0x7da2,	// (0x00007da2) fep_vkb_prediction_pane_g4

0x0003,

0xb227,	// (0x0000b227) fep_vkb_prediction_pane_g

0x4e6c,	// (0x00004e6c) slider_set_pane_g3

0x4e80,	// (0x00004e80) slider_set_pane_g4

0x4e98,	// (0x00004e98) slider_set_pane_g5

0x4e6c,	// (0x00004e6c) slider_set_pane_g6

0x4eae,	// (0x00004eae) slider_set_pane_g7

0x5068,	// (0x00005068) slider_form_pane_g3

0x5071,	// (0x00005071) slider_form_pane_g4

0x5079,	// (0x00005079) slider_form_pane_g5

0x5068,	// (0x00005068) slider_form_pane_g6

0xd2ec,	// (0x0000d2ec) slider_form_pane_g7

0x5887,	// (0x00005887) slider_set_pane_vc_g3

0x5890,	// (0x00005890) slider_set_pane_vc_g4

0x5899,	// (0x00005899) slider_set_pane_vc_g5

0x5887,	// (0x00005887) slider_set_pane_vc_g6

0x58a2,	// (0x000058a2) slider_set_pane_vc_g7

0x5caa,	// (0x00005caa) slider_form_pane_vc_g1

0x5cb3,	// (0x00005cb3) slider_form_pane_vc_g2

0x5cbc,	// (0x00005cbc) slider_form_pane_vc_g3

0x5caa,	// (0x00005caa) slider_form_pane_vc_g4

0x5cc5,	// (0x00005cc5) slider_form_pane_vc_g5

0x0004,

0xafee,	// (0x0000afee) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7daa,	// (0x00007daa) ai3_links_pane

0xdbf4,	// (0x0000dbf4) popup_ai3_data_window_ParamLimits

0xdbf4,	// (0x0000dbf4) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdc0e,	// (0x0000dc0e) cell_ai3_links_pane_ParamLimits

0xdc0e,	// (0x0000dc0e) cell_ai3_links_pane

0x7de5,	// (0x00007de5) bg_popup_sub_pane_cp11

0x7df2,	// (0x00007df2) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7e17,	// (0x00007e17) heading_ai3_data_pane

0x7e1f,	// (0x00007e1f) list_ai3_gene_pane

0x7e2b,	// (0x00007e2b) popup_ai3_data_window_g1

0x7e33,	// (0x00007e33) heading_ai3_data_pane_g1

0x7e3b,	// (0x00007e3b) heading_ai3_data_pane_t1

0x7e49,	// (0x00007e49) list_double_ai3_gene_pane_ParamLimits

0x7e49,	// (0x00007e49) list_double_ai3_gene_pane

0x7e56,	// (0x00007e56) list_single_ai3_gene_pane_ParamLimits

0x7e56,	// (0x00007e56) list_single_ai3_gene_pane

0x65ab,	// (0x000065ab) list_highlight_pane_cp7_ParamLimits

0x65ab,	// (0x000065ab) list_highlight_pane_cp7

0x7e63,	// (0x00007e63) list_single_a13_gene_pane_t1_ParamLimits

0x7e63,	// (0x00007e63) list_single_a13_gene_pane_t1

0x7e7a,	// (0x00007e7a) list_single_ai3_gene_pane_g1

0x7e83,	// (0x00007e83) list_single_ai3_gene_pane_g2

0x0001,

0xb230,	// (0x0000b230) list_single_ai3_gene_pane_g

0x7e8b,	// (0x00007e8b) list_double_ai3_gene_pane_g1_ParamLimits

0x7e8b,	// (0x00007e8b) list_double_ai3_gene_pane_g1

0x7e97,	// (0x00007e97) list_double_ai3_gene_pane_t1_ParamLimits

0x7e97,	// (0x00007e97) list_double_ai3_gene_pane_t1

0x7eb3,	// (0x00007eb3) list_double_ai3_gene_pane_t2_ParamLimits

0x7eb3,	// (0x00007eb3) list_double_ai3_gene_pane_t2

0x7ec9,	// (0x00007ec9) list_double_ai3_gene_pane_t3_ParamLimits

0x7ec9,	// (0x00007ec9) list_double_ai3_gene_pane_t3

0x0002,

0xb235,	// (0x0000b235) list_double_ai3_gene_pane_t_ParamLimits

0xb235,	// (0x0000b235) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7c79,	// (0x00007c79) aid_size_min_col_2

0xda9a,	// (0x0000da9a) aid_size_min_msg_ParamLimits

0xda9a,	// (0x0000da9a) aid_size_min_msg

0xd82c,	// (0x0000d82c) fep_vkb_top_text_pane_g2_ParamLimits

0xd82c,	// (0x0000d82c) fep_vkb_top_text_pane_g2

0x0001,

0xf439,	// (0x0000f439) fep_vkb_top_text_pane_g_ParamLimits

0xf439,	// (0x0000f439) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7ee6,	// (0x00007ee6) grid_hc_apps_pane_ParamLimits

0x7ee6,	// (0x00007ee6) grid_hc_apps_pane

0x7ef5,	// (0x00007ef5) list_hc_apps_pane

0x7efd,	// (0x00007efd) scroll_pane_cp37_ParamLimits

0x7efd,	// (0x00007efd) scroll_pane_cp37

0xdc28,	// (0x0000dc28) cell_hc_apps_pane_ParamLimits

0xdc28,	// (0x0000dc28) cell_hc_apps_pane

0xdce6,	// (0x0000dce6) cell_hc_apps_pane_g1_ParamLimits

0xdce6,	// (0x0000dce6) cell_hc_apps_pane_g1

0x7fe8,	// (0x00007fe8) cell_hc_apps_pane_g2_ParamLimits

0x7fe8,	// (0x00007fe8) cell_hc_apps_pane_g2

0x8004,	// (0x00008004) cell_hc_apps_pane_g3_ParamLimits

0x8004,	// (0x00008004) cell_hc_apps_pane_g3

0x0002,

0xf46e,	// (0x0000f46e) cell_hc_apps_pane_g_ParamLimits

0xf46e,	// (0x0000f46e) cell_hc_apps_pane_g

0xdd13,	// (0x0000dd13) cell_hc_apps_pane_t1_ParamLimits

0xdd13,	// (0x0000dd13) cell_hc_apps_pane_t1

0x083b,	// (0x0000083b) grid_highlight_pane_cp10_ParamLimits

0x083b,	// (0x0000083b) grid_highlight_pane_cp10

0xdd51,	// (0x0000dd51) list_single_hc_apps_pane_ParamLimits

0xdd51,	// (0x0000dd51) list_single_hc_apps_pane

0xdd7e,	// (0x0000dd7e) list_single_hc_apps_pane_g1

0xdd97,	// (0x0000dd97) list_single_hc_apps_pane_g2

0x0001,

0xf475,	// (0x0000f475) list_single_hc_apps_pane_g

0xddb0,	// (0x0000ddb0) list_single_hc_apps_pane_g2_copy1

0x8110,	// (0x00008110) list_single_hc_apps_pane_t1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_ParamLimits

0x0551,	// (0x00000551) setting_slider_pane_t1_ParamLimits

0x056a,	// (0x0000056a) setting_slider_pane_t2_ParamLimits

0x0584,	// (0x00000584) setting_slider_pane_t3_ParamLimits

0xaace,	// (0x0000aace) setting_slider_pane_t_ParamLimits

0x059c,	// (0x0000059c) slider_set_pane_ParamLimits

0x29dd,	// (0x000029dd) control_pane_g5_ParamLimits

0x29dd,	// (0x000029dd) control_pane_g5

0x4e53,	// (0x00004e53) slider_set_pane_g1_ParamLimits

0x4e60,	// (0x00004e60) slider_set_pane_g2_ParamLimits

0x4e6c,	// (0x00004e6c) slider_set_pane_g3_ParamLimits

0x4e80,	// (0x00004e80) slider_set_pane_g4_ParamLimits

0x4e98,	// (0x00004e98) slider_set_pane_g5_ParamLimits

0x4e6c,	// (0x00004e6c) slider_set_pane_g6_ParamLimits

0x4eae,	// (0x00004eae) slider_set_pane_g7_ParamLimits

0xaec8,	// (0x0000aec8) slider_set_pane_g_ParamLimits

0x2487,	// (0x00002487) navi_icon_text_pane_ParamLimits

0xcae7,	// (0x0000cae7) aid_fill_nsta_2_ParamLimits

0xcb1e,	// (0x0000cb1e) aid_touch_tab_arrow_left_ParamLimits

0xcb34,	// (0x0000cb34) aid_touch_tab_arrow_right_ParamLimits

0xcbcf,	// (0x0000cbcf) clock_nsta_pane_ParamLimits

0x48c0,	// (0x000048c0) navi_icon_pane_g1_ParamLimits

0x48cc,	// (0x000048cc) navi_text_pane_t1_ParamLimits

0x60ea,	// (0x000060ea) navi_icon_text_pane_g1_ParamLimits

0x60f6,	// (0x000060f6) navi_icon_text_pane_t1_ParamLimits

0xdd7e,	// (0x0000dd7e) list_single_hc_apps_pane_g1_ParamLimits

0xdd97,	// (0x0000dd97) list_single_hc_apps_pane_g2_ParamLimits

0xf475,	// (0x0000f475) list_single_hc_apps_pane_g_ParamLimits

0xddb0,	// (0x0000ddb0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8110,	// (0x00008110) list_single_hc_apps_pane_t1_ParamLimits

0xb5be,	// (0x0000b5be) popup_toolbar2_fixed_window_ParamLimits

0xb5be,	// (0x0000b5be) popup_toolbar2_fixed_window

0xca4c,	// (0x0000ca4c) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x813e,	// (0x0000813e) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x813e,	// (0x0000813e) grid_toolbar2_fixed_pane

0xddcc,	// (0x0000ddcc) cell_toolbar2_fixed_pane_ParamLimits

0xddcc,	// (0x0000ddcc) cell_toolbar2_fixed_pane

0xdde6,	// (0x0000dde6) cell_toolbar2_fixed_pane_g1

0x815f,	// (0x0000815f) toolbar2_fixed_button_pane

0x36d3,	// (0x000036d3) toolbar2_fixed_button_pane_g1

0x36db,	// (0x000036db) toolbar2_fixed_button_pane_g2

0x36e3,	// (0x000036e3) toolbar2_fixed_button_pane_g3

0x36eb,	// (0x000036eb) toolbar2_fixed_button_pane_g4

0x36f3,	// (0x000036f3) toolbar2_fixed_button_pane_g5

0x36fb,	// (0x000036fb) toolbar2_fixed_button_pane_g6

0x3703,	// (0x00003703) toolbar2_fixed_button_pane_g7

0x370b,	// (0x0000370b) toolbar2_fixed_button_pane_g8

0x3713,	// (0x00003713) toolbar2_fixed_button_pane_g9

0x0008,

0xadca,	// (0x0000adca) toolbar2_fixed_button_pane_g

0x8167,	// (0x00008167) cell_toolbar2_float_pane_ParamLimits

0x8167,	// (0x00008167) cell_toolbar2_float_pane

0x8178,	// (0x00008178) cell_toolbar2_float_pane_g1

0x815f,	// (0x0000815f) toolbar2_fixed_button_pane_cp

0xd706,	// (0x0000d706) fep_vkb_accented_list_pane_ParamLimits

0xd706,	// (0x0000d706) fep_vkb_accented_list_pane

0x6dbf,	// (0x00006dbf) bg_popup_fep_shadow_pane_g9

0x2607,	// (0x00002607) bg_popup_fep_shadow_pane_cp3

0x166a,	// (0x0000166a) list_accented_list_pane

0x8181,	// (0x00008181) list_single_accented_list_pane_ParamLimits

0x8181,	// (0x00008181) list_single_accented_list_pane

0x2607,	// (0x00002607) list_highlight_pane_cp10

0x8192,	// (0x00008192) list_single_accented_list_pane_t1

0xc976,	// (0x0000c976) popup_slider_window_ParamLimits

0xc976,	// (0x0000c976) popup_slider_window

0x7c70,	// (0x00007c70) aid_indentation_list_msg

0xdedf,	// (0x0000dedf) bg_popup_window_pane_cp19

0x82b6,	// (0x000082b6) popup_slider_window_g1

0x82d2,	// (0x000082d2) popup_slider_window_g2

0x82ee,	// (0x000082ee) popup_slider_window_g3

0x0005,

0xf47a,	// (0x0000f47a) popup_slider_window_g

0x834a,	// (0x0000834a) popup_slider_window_t1

0x83be,	// (0x000083be) small_volume_slider_vertical_pane

0x65e6,	// (0x000065e6) small_volume_slider_vertical_pane_g1

0x65e6,	// (0x000065e6) small_volume_slider_vertical_pane_g2

0x83da,	// (0x000083da) small_volume_slider_vertical_pane_g3

0x0002,

0xb25a,	// (0x0000b25a) small_volume_slider_vertical_pane_g

0xb52c,	// (0x0000b52c) area_side_right_pane_ParamLimits

0xb52c,	// (0x0000b52c) area_side_right_pane

0xdf97,	// (0x0000df97) aid_size_side_button_ParamLimits

0xdf97,	// (0x0000df97) aid_size_side_button

0xdfb0,	// (0x0000dfb0) grid_sctrl_middle_pane_ParamLimits

0xdfb0,	// (0x0000dfb0) grid_sctrl_middle_pane

0x8416,	// (0x00008416) sctrl_sk_bottom_pane

0x8427,	// (0x00008427) sctrl_sk_top_pane

0x8439,	// (0x00008439) aid_touch_sctrl_top

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane

0x8446,	// (0x00008446) sctrl_sk_top_pane_g1

0x8453,	// (0x00008453) sctrl_sk_top_pane_t1

0x8439,	// (0x00008439) aid_touch_sctrl_bottom

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp

0x846e,	// (0x0000846e) sctrl_sk_bottom_pane_g1

0x8453,	// (0x00008453) sctrl_sk_bottom_pane_t1

0xdfca,	// (0x0000dfca) cell_sctrl_middle_pane_ParamLimits

0xdfca,	// (0x0000dfca) cell_sctrl_middle_pane

0xdfdb,	// (0x0000dfdb) aid_touch_sctrl_middle_ParamLimits

0xdfdb,	// (0x0000dfdb) aid_touch_sctrl_middle

0xdfe8,	// (0x0000dfe8) bg_sctrl_middle_pane_ParamLimits

0xdfe8,	// (0x0000dfe8) bg_sctrl_middle_pane

0x8533,	// (0x00008533) cell_sctrl_middle_pane_g1_ParamLimits

0x8533,	// (0x00008533) cell_sctrl_middle_pane_g1

0xdff6,	// (0x0000dff6) cell_sctrl_middle_pane_g2_ParamLimits

0xdff6,	// (0x0000dff6) cell_sctrl_middle_pane_g2

0x0001,

0xf487,	// (0x0000f487) cell_sctrl_middle_pane_g_ParamLimits

0xf487,	// (0x0000f487) cell_sctrl_middle_pane_g

0x36d3,	// (0x000036d3) bg_sctrl_middle_pane_g1

0x36db,	// (0x000036db) bg_sctrl_middle_pane_g2

0x36e3,	// (0x000036e3) bg_sctrl_middle_pane_g3

0x36eb,	// (0x000036eb) bg_sctrl_middle_pane_g4

0x36f3,	// (0x000036f3) bg_sctrl_middle_pane_g5

0x36fb,	// (0x000036fb) bg_sctrl_middle_pane_g6

0x3703,	// (0x00003703) bg_sctrl_middle_pane_g7

0x370b,	// (0x0000370b) bg_sctrl_middle_pane_g8

0x0007,

0xb26b,	// (0x0000b26b) bg_sctrl_middle_pane_g

0x3713,	// (0x00003713) bg_sctrl_middle_pane_g8_copy1

0x36d3,	// (0x000036d3) bg_sctrl_sk_pane_g1

0x36db,	// (0x000036db) bg_sctrl_sk_pane_g2

0x36e3,	// (0x000036e3) bg_sctrl_sk_pane_g3

0x0008,

0xadca,	// (0x0000adca) bg_sctrl_sk_pane_g

0x0d4d,	// (0x00000d4d) aid_size_touch_scroll_bar

0x36eb,	// (0x000036eb) bg_sctrl_sk_pane_g4

0x36f3,	// (0x000036f3) bg_sctrl_sk_pane_g5

0x36fb,	// (0x000036fb) bg_sctrl_sk_pane_g6

0x3703,	// (0x00003703) bg_sctrl_sk_pane_g7

0x370b,	// (0x0000370b) bg_sctrl_sk_pane_g8

0x3713,	// (0x00003713) bg_sctrl_sk_pane_g9

0x2c2c,	// (0x00002c2c) popup_fep_china_hwr2_fs_candidate_window

0xc496,	// (0x0000c496) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc496,	// (0x0000c496) popup_fep_china_hwr2_fs_control_window

0x6a78,	// (0x00006a78) sctrl_sk_top_pane_g2

0x0001,

0xb261,	// (0x0000b261) sctrl_sk_top_pane_g

0xe002,	// (0x0000e002) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe002,	// (0x0000e002) aid_fep_china_hwr2_fs_cell

0xe016,	// (0x0000e016) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe016,	// (0x0000e016) bg_popup_fep_shadow_pane_cp4

0xe02d,	// (0x0000e02d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe02d,	// (0x0000e02d) bg_popup_fep_shadow_pane_cp5

0xe03f,	// (0x0000e03f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe03f,	// (0x0000e03f) popup_fep_china_hwr2_fs_control_bar_grid

0xe053,	// (0x0000e053) popup_fep_china_hwr2_fs_control_funtion_grid

0x8507,	// (0x00008507) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x8511,	// (0x00008511) popup_fep_china_hwr2_fs_candidate_grid

0xe05b,	// (0x0000e05b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe05b,	// (0x0000e05b) cell_fep_china_hwr2_fs_funtion_grid

0x65e6,	// (0x000065e6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8533,	// (0x00008533) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8533,	// (0x00008533) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8541,	// (0x00008541) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8541,	// (0x00008541) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb27c,	// (0x0000b27c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb27c,	// (0x0000b27c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe073,	// (0x0000e073) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe073,	// (0x0000e073) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe088,	// (0x0000e088) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe088,	// (0x0000e088) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf48c,	// (0x0000f48c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf48c,	// (0x0000f48c) cell_fep_china_hwr2_fs_funtion_grid_t

0x8588,	// (0x00008588) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8590,	// (0x00008590) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8598,	// (0x00008598) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb286,	// (0x0000b286) popup_fep_china_hwr2_fs_control_bar_grid_g

0x85a0,	// (0x000085a0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x85a0,	// (0x000085a0) cell_fep_china_hwr2_fs_candidate_grid

0x85b9,	// (0x000085b9) popup_fep_china_hwr2_fs_candidate_grid_g20

0x85c1,	// (0x000085c1) popup_fep_china_hwr2_fs_candidate_grid_g21

0x65e6,	// (0x000065e6) cell_fep_china_hwr2_fs_candidate_grid_g1

0x65e6,	// (0x000065e6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb0a6,	// (0x0000b0a6) cell_fep_china_hwr2_fs_candidate_grid_g

0x85c9,	// (0x000085c9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3223,	// (0x00003223) clock_nsta_pane_cp_24_ParamLimits

0x3223,	// (0x00003223) clock_nsta_pane_cp_24

0x32a1,	// (0x000032a1) indicator_nsta_pane_cp_24_ParamLimits

0x32a1,	// (0x000032a1) indicator_nsta_pane_cp_24

0x472b,	// (0x0000472b) heading_pane_g1

0x0001,

0xae2f,	// (0x0000ae2f) heading_pane_g

0x530b,	// (0x0000530b) grid_sct_catagory_button_pane

0x533b,	// (0x0000533b) scroll_pane_cp5_ParamLimits

0x6189,	// (0x00006189) button_value_adjust_pane_cp5_ParamLimits

0x6189,	// (0x00006189) button_value_adjust_pane_cp5

0x6285,	// (0x00006285) form2_midp_time_pane_ParamLimits

0x85d7,	// (0x000085d7) cell_sct_catagory_button_pane_ParamLimits

0x85d7,	// (0x000085d7) cell_sct_catagory_button_pane

0x65ab,	// (0x000065ab) bg_button_pane_cp01_ParamLimits

0x65ab,	// (0x000065ab) bg_button_pane_cp01

0x65e6,	// (0x000065e6) cell_sct_catagory_button_pane_g1

0xc9ef,	// (0x0000c9ef) popup_tb_extension_window

0xe0a4,	// (0x0000e0a4) aid_size_cell_ext_ParamLimits

0xe0a4,	// (0x0000e0a4) aid_size_cell_ext

0x0b8f,	// (0x00000b8f) bg_tb_trans_pane_cp1_ParamLimits

0x0b8f,	// (0x00000b8f) bg_tb_trans_pane_cp1

0xe0ca,	// (0x0000e0ca) grid_tb_ext_pane_ParamLimits

0xe0ca,	// (0x0000e0ca) grid_tb_ext_pane

0xe105,	// (0x0000e105) cell_tb_ext_pane_ParamLimits

0xe105,	// (0x0000e105) cell_tb_ext_pane

0xe12d,	// (0x0000e12d) cell_tb_ext_pane_g1_ParamLimits

0xe12d,	// (0x0000e12d) cell_tb_ext_pane_g1

0x866b,	// (0x0000866b) cell_tb_ext_pane_t1

0x083b,	// (0x0000083b) list_highlight_pane_cp11_ParamLimits

0x083b,	// (0x0000083b) list_highlight_pane_cp11

0xb5d3,	// (0x0000b5d3) popup_uni_indicator_window_ParamLimits

0xb5d3,	// (0x0000b5d3) popup_uni_indicator_window

0x1399,	// (0x00001399) bg_popup_sub_pane_cp14

0x8686,	// (0x00008686) list_uniindi_pane

0x8692,	// (0x00008692) uniindi_top_pane

0x083b,	// (0x0000083b) bg_uniindi_top_pane

0x86b1,	// (0x000086b1) uniindi_top_pane_g1

0x86c7,	// (0x000086c7) uniindi_top_pane_g2

0x0003,

0xb28d,	// (0x0000b28d) uniindi_top_pane_g

0x86f1,	// (0x000086f1) uniindi_top_pane_t1

0x871b,	// (0x0000871b) list_single_uniindi_pane_ParamLimits

0x871b,	// (0x0000871b) list_single_uniindi_pane

0x65e6,	// (0x000065e6) bg_uniindi_top_pane_g1

0x872e,	// (0x0000872e) list_single_uniindi_pane_g1

0x8741,	// (0x00008741) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x8766,	// (0x00008766) bg_sctrl_sk_pane_cp1

0x876f,	// (0x0000876f) bg_sctrl_sk_pane_cp2

0x8778,	// (0x00008778) control_bg_pane_g1

0x8781,	// (0x00008781) control_bg_pane_g2

0x0001,

0xb296,	// (0x0000b296) control_bg_pane_g

0x5f81,	// (0x00005f81) cell_indicator_nsta_pane_g1_ParamLimits

0xd508,	// (0x0000d508) cell_indicator_nsta_pane_g2_ParamLimits

0xf404,	// (0x0000f404) cell_indicator_nsta_pane_g_ParamLimits

0x630d,	// (0x0000630d) form2_midp_time_pane_t1_ParamLimits

0x6642,	// (0x00006642) main_idle_act4_pane_ParamLimits

0x6642,	// (0x00006642) main_idle_act4_pane

0xc9ef,	// (0x0000c9ef) popup_tb_extension_window_ParamLimits

0xe0ec,	// (0x0000e0ec) tb_ext_find_pane_ParamLimits

0xe0ec,	// (0x0000e0ec) tb_ext_find_pane

0x878a,	// (0x0000878a) ai_gene_pane_1_cp1

0x2740,	// (0x00002740) ai_gene_pane_2_cp1

0x8792,	// (0x00008792) list_single_idle_plugin_calendar_pane

0x879b,	// (0x0000879b) list_single_idle_plugin_notification_pane

0x87a4,	// (0x000087a4) list_single_idle_plugin_player_pane

0xe14a,	// (0x0000e14a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe14a,	// (0x0000e14a) list_single_idle_plugin_shortcut_pane

0xe172,	// (0x0000e172) main_idle_act4_pane_t1

0xe188,	// (0x0000e188) main_idle_act4_pane_t2

0x0001,

0xf491,	// (0x0000f491) main_idle_act4_pane_t

0xe19e,	// (0x0000e19e) middle_sk_idle_act4_pane_ParamLimits

0xe19e,	// (0x0000e19e) middle_sk_idle_act4_pane

0xe1ba,	// (0x0000e1ba) popup_clock_digital_analogue_window_cp2

0xe1e2,	// (0x0000e1e2) shortcut_wheel_idle_act4_pane_ParamLimits

0xe1e2,	// (0x0000e1e2) shortcut_wheel_idle_act4_pane

0x65e6,	// (0x000065e6) shortcut_wheel_idle_act4_pane_g1

0x65e6,	// (0x000065e6) shortcut_wheel_idle_act4_pane_g2

0x65e6,	// (0x000065e6) shortcut_wheel_idle_act4_pane_g3

0x65e6,	// (0x000065e6) shortcut_wheel_idle_act4_pane_g4

0x65e6,	// (0x000065e6) shortcut_wheel_idle_act4_pane_g5

0x8837,	// (0x00008837) shortcut_wheel_idle_act4_pane_g6

0x883f,	// (0x0000883f) shortcut_wheel_idle_act4_pane_g7

0x8847,	// (0x00008847) shortcut_wheel_idle_act4_pane_g8

0x884f,	// (0x0000884f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb2a0,	// (0x0000b2a0) shortcut_wheel_idle_act4_pane_g

0x66f7,	// (0x000066f7) middle_sk_idle_act4_pane_g1_ParamLimits

0x66f7,	// (0x000066f7) middle_sk_idle_act4_pane_g1

0xe25f,	// (0x0000e25f) middle_sk_idle_act4_pane_g2_ParamLimits

0xe25f,	// (0x0000e25f) middle_sk_idle_act4_pane_g2

0x0001,

0xf4a6,	// (0x0000f4a6) middle_sk_idle_act4_pane_g_ParamLimits

0xf4a6,	// (0x0000f4a6) middle_sk_idle_act4_pane_g

0xe277,	// (0x0000e277) middle_sk_idle_act4_pane_t1_ParamLimits

0xe277,	// (0x0000e277) middle_sk_idle_act4_pane_t1

0xe2a6,	// (0x0000e2a6) grid_ai_shortcut_pane_ParamLimits

0xe2a6,	// (0x0000e2a6) grid_ai_shortcut_pane

0xe2c3,	// (0x0000e2c3) list_highlight_pane_cp16_ParamLimits

0xe2c3,	// (0x0000e2c3) list_highlight_pane_cp16

0xe2d0,	// (0x0000e2d0) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe2d0,	// (0x0000e2d0) list_single_idle_plugin_shortcut_pane_g1

0xe2dc,	// (0x0000e2dc) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe2dc,	// (0x0000e2dc) list_single_idle_plugin_shortcut_pane_g2

0xe2f8,	// (0x0000e2f8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe2f8,	// (0x0000e2f8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf4ab,	// (0x0000f4ab) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf4ab,	// (0x0000f4ab) list_single_idle_plugin_shortcut_pane_g

0xe30d,	// (0x0000e30d) cell_ai_shortcut_pane_ParamLimits

0xe30d,	// (0x0000e30d) cell_ai_shortcut_pane

0xe323,	// (0x0000e323) cell_ai_shortcut_pane_g1_ParamLimits

0xe323,	// (0x0000e323) cell_ai_shortcut_pane_g1

0x878a,	// (0x0000878a) ai_gene_pane_1_cp2

0x897f,	// (0x0000897f) ai_gene_pane_2_cp2

0x8987,	// (0x00008987) list_highlight_pane_cp15

0x8990,	// (0x00008990) list_single_idle_plugin_calendar_pane_g1

0x8987,	// (0x00008987) list_highlight_pane_cp17

0x8998,	// (0x00008998) list_single_idle_plugin_calendar_pane_g1_copy1

0x89a0,	// (0x000089a0) list_single_idle_plugin_player_pane_g1

0x561c,	// (0x0000561c) list_single_idle_plugin_player_pane_g2

0x0001,

0xb2cf,	// (0x0000b2cf) list_single_idle_plugin_player_pane_g

0x89a8,	// (0x000089a8) list_single_idle_plugin_player_pane_t1

0x89b6,	// (0x000089b6) list_single_idle_plugin_player_pane_t2

0x89c4,	// (0x000089c4) list_single_idle_plugin_player_pane_t3

0x89d2,	// (0x000089d2) list_single_idle_plugin_player_pane_t4

0x0003,

0xb2d4,	// (0x0000b2d4) list_single_idle_plugin_player_pane_t

0x89e0,	// (0x000089e0) wait_bar_pane_cp15

0x89e8,	// (0x000089e8) grid_ai_notification_pane

0x561c,	// (0x0000561c) list_single_idle_plugin_notification_pane_g1

0xe345,	// (0x0000e345) cell_ai_notification_pane_ParamLimits

0xe345,	// (0x0000e345) cell_ai_notification_pane

0x89fe,	// (0x000089fe) cell_ai_notification_pane_g1

0x8a06,	// (0x00008a06) cell_ai_notification_pane_t1

0xe352,	// (0x0000e352) tb_ext_find_button_pane

0xe35a,	// (0x0000e35a) tb_ext_find_pane_g1

0xe362,	// (0x0000e362) tb_ext_find_pane_t1

0x1d58,	// (0x00001d58) tb_ext_find_button_pane_g1

0x8a32,	// (0x00008a32) tb_ext_find_button_pane_g2

0x0001,

0xb2dd,	// (0x0000b2dd) tb_ext_find_button_pane_g

0xe172,	// (0x0000e172) main_idle_act4_pane_t1_ParamLimits

0xe188,	// (0x0000e188) main_idle_act4_pane_t2_ParamLimits

0xf491,	// (0x0000f491) main_idle_act4_pane_t_ParamLimits

0xe1ba,	// (0x0000e1ba) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe1d2,	// (0x0000e1d2) sat_plugin_idle_act4_pane_ParamLimits

0xe1d2,	// (0x0000e1d2) sat_plugin_idle_act4_pane

0xe370,	// (0x0000e370) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe370,	// (0x0000e370) sat_plugin_idle_act4_pane_t1

0xe388,	// (0x0000e388) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe388,	// (0x0000e388) sat_plugin_idle_act4_pane_t2

0xe3a0,	// (0x0000e3a0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe3a0,	// (0x0000e3a0) sat_plugin_idle_act4_pane_t3

0xe3b8,	// (0x0000e3b8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe3b8,	// (0x0000e3b8) sat_plugin_idle_act4_pane_t4

0x0003,

0xf4b2,	// (0x0000f4b2) sat_plugin_idle_act4_pane_t_ParamLimits

0xf4b2,	// (0x0000f4b2) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25_ParamLimits

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25

0x8a87,	// (0x00008a87) popup_battery_window_g1_ParamLimits

0x8a87,	// (0x00008a87) popup_battery_window_g1

0x8a93,	// (0x00008a93) popup_battery_window_t1_ParamLimits

0x8a93,	// (0x00008a93) popup_battery_window_t1

0x8aa5,	// (0x00008aa5) popup_battery_window_t2_ParamLimits

0x8aa5,	// (0x00008aa5) popup_battery_window_t2

0x0001,

0xb2eb,	// (0x0000b2eb) popup_battery_window_t_ParamLimits

0xb2eb,	// (0x0000b2eb) popup_battery_window_t

0xc1bc,	// (0x0000c1bc) midp_canvas_pane_ParamLimits

0xc217,	// (0x0000c217) midp_keypad_pane_ParamLimits

0xc217,	// (0x0000c217) midp_keypad_pane

0x2b80,	// (0x00002b80) main_midp_pane_ParamLimits

0x5ffc,	// (0x00005ffc) signal_pane_g2_cp_ParamLimits

0xe3d0,	// (0x0000e3d0) aid_size_cell_midp_keypad_ParamLimits

0xe3d0,	// (0x0000e3d0) aid_size_cell_midp_keypad

0xe3ee,	// (0x0000e3ee) midp_keyp_game_grid_pane_ParamLimits

0xe3ee,	// (0x0000e3ee) midp_keyp_game_grid_pane

0xe415,	// (0x0000e415) midp_keyp_rocker_pane_ParamLimits

0xe415,	// (0x0000e415) midp_keyp_rocker_pane

0xe45e,	// (0x0000e45e) midp_keyp_sk_left_pane_ParamLimits

0xe45e,	// (0x0000e45e) midp_keyp_sk_left_pane

0xe4b0,	// (0x0000e4b0) midp_keyp_sk_right_pane_ParamLimits

0xe4b0,	// (0x0000e4b0) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe502,	// (0x0000e502) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe502,	// (0x0000e502) midp_keyp_sk_right_pane_g1

0x65e6,	// (0x000065e6) midp_keyp_rocker_pane_g1

0xe50b,	// (0x0000e50b) keyp_game_cell_pane_ParamLimits

0xe50b,	// (0x0000e50b) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe52f,	// (0x0000e52f) keyp_game_cell_pane_g1

0xb56e,	// (0x0000b56e) popup_fep_vkb2_window_ParamLimits

0xb56e,	// (0x0000b56e) popup_fep_vkb2_window

0xe538,	// (0x0000e538) aid_size_cell_vkb2_ParamLimits

0xe538,	// (0x0000e538) aid_size_cell_vkb2

0xe56e,	// (0x0000e56e) popup_fep_vkb2_window_g1_ParamLimits

0xe56e,	// (0x0000e56e) popup_fep_vkb2_window_g1

0xe5be,	// (0x0000e5be) vkb2_area_bottom_pane_ParamLimits

0xe5be,	// (0x0000e5be) vkb2_area_bottom_pane

0xe612,	// (0x0000e612) vkb2_area_keypad_pane_ParamLimits

0xe612,	// (0x0000e612) vkb2_area_keypad_pane

0xe65a,	// (0x0000e65a) vkb2_area_top_pane_ParamLimits

0xe65a,	// (0x0000e65a) vkb2_area_top_pane

0xe6e0,	// (0x0000e6e0) vkb2_top_entry_pane_ParamLimits

0xe6e0,	// (0x0000e6e0) vkb2_top_entry_pane

0xe70d,	// (0x0000e70d) vkb2_top_grid_left_pane_ParamLimits

0xe70d,	// (0x0000e70d) vkb2_top_grid_left_pane

0xe72d,	// (0x0000e72d) vkb2_top_grid_right_pane_ParamLimits

0xe72d,	// (0x0000e72d) vkb2_top_grid_right_pane

0x8e1e,	// (0x00008e1e) vkb2_cell_keypad_pane_ParamLimits

0x8e1e,	// (0x00008e1e) vkb2_cell_keypad_pane

0xe773,	// (0x0000e773) vkb2_area_bottom_grid_pane_ParamLimits

0xe773,	// (0x0000e773) vkb2_area_bottom_grid_pane

0xe79d,	// (0x0000e79d) vkb2_area_bottom_pane_g1_ParamLimits

0xe79d,	// (0x0000e79d) vkb2_area_bottom_pane_g1

0xe7c3,	// (0x0000e7c3) vkb2_area_bottom_pane_g2_ParamLimits

0xe7c3,	// (0x0000e7c3) vkb2_area_bottom_pane_g2

0xe7f4,	// (0x0000e7f4) vkb2_area_bottom_pane_g3_ParamLimits

0xe7f4,	// (0x0000e7f4) vkb2_area_bottom_pane_g3

0x0002,

0xf4bb,	// (0x0000f4bb) vkb2_area_bottom_pane_g_ParamLimits

0xf4bb,	// (0x0000f4bb) vkb2_area_bottom_pane_g

0x8fc8,	// (0x00008fc8) vkb2_top_cell_left_pane_ParamLimits

0x8fc8,	// (0x00008fc8) vkb2_top_cell_left_pane

0xe85e,	// (0x0000e85e) vkb2_top_entry_pane_g1_ParamLimits

0xe85e,	// (0x0000e85e) vkb2_top_entry_pane_g1

0xe86c,	// (0x0000e86c) vkb2_top_entry_pane_t1_ParamLimits

0xe86c,	// (0x0000e86c) vkb2_top_entry_pane_t1

0x9030,	// (0x00009030) vkb2_top_entry_pane_t2_ParamLimits

0x9030,	// (0x00009030) vkb2_top_entry_pane_t2

0x9062,	// (0x00009062) vkb2_top_entry_pane_t3_ParamLimits

0x9062,	// (0x00009062) vkb2_top_entry_pane_t3

0x0002,

0xf4c2,	// (0x0000f4c2) vkb2_top_entry_pane_t_ParamLimits

0xf4c2,	// (0x0000f4c2) vkb2_top_entry_pane_t

0xe8a5,	// (0x0000e8a5) vkb2_top_grid_right_pane_g1_ParamLimits

0xe8a5,	// (0x0000e8a5) vkb2_top_grid_right_pane_g1

0x90c9,	// (0x000090c9) vkb2_top_grid_right_pane_g2_ParamLimits

0x90c9,	// (0x000090c9) vkb2_top_grid_right_pane_g2

0x90e1,	// (0x000090e1) vkb2_top_grid_right_pane_g3_ParamLimits

0x90e1,	// (0x000090e1) vkb2_top_grid_right_pane_g3

0xe8bb,	// (0x0000e8bb) vkb2_top_grid_right_pane_g4_ParamLimits

0xe8bb,	// (0x0000e8bb) vkb2_top_grid_right_pane_g4

0x0003,

0xf4c9,	// (0x0000f4c9) vkb2_top_grid_right_pane_g_ParamLimits

0xf4c9,	// (0x0000f4c9) vkb2_top_grid_right_pane_g

0x910f,	// (0x0000910f) vkb2_top_cell_left_pane_g1

0x9126,	// (0x00009126) vkb2_cell_keypad_pane_g1_ParamLimits

0x9126,	// (0x00009126) vkb2_cell_keypad_pane_g1

0x9134,	// (0x00009134) vkb2_cell_keypad_pane_t1_ParamLimits

0x9134,	// (0x00009134) vkb2_cell_keypad_pane_t1

0x914b,	// (0x0000914b) vkb2_cell_bottom_grid_pane_ParamLimits

0x914b,	// (0x0000914b) vkb2_cell_bottom_grid_pane

0x9184,	// (0x00009184) vkb2_cell_bottom_grid_pane_g1

0xe203,	// (0x0000e203) aid_call2_pane_cp02

0xe20b,	// (0x0000e20b) aid_call_pane_cp02

0xe213,	// (0x0000e213) clock_digital_number_pane_cp10

0xe21b,	// (0x0000e21b) clock_digital_number_pane_cp11

0xe223,	// (0x0000e223) clock_digital_number_pane_cp12

0xe22b,	// (0x0000e22b) clock_digital_number_pane_cp13

0xe233,	// (0x0000e233) clock_digital_separator_pane_cp10

0x1d58,	// (0x00001d58) popup_clock_digital_analogue_window_cp2_g1

0x1d58,	// (0x00001d58) popup_clock_digital_analogue_window_cp2_g2

0xe23b,	// (0x0000e23b) popup_clock_digital_analogue_window_cp2_g3

0x1d58,	// (0x00001d58) popup_clock_digital_analogue_window_cp2_g4

0xe23b,	// (0x0000e23b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf496,	// (0x0000f496) popup_clock_digital_analogue_window_cp2_g

0xe243,	// (0x0000e243) popup_clock_digital_analogue_window_cp2_t1

0xe251,	// (0x0000e251) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf4a1,	// (0x0000f4a1) popup_clock_digital_analogue_window_cp2_t

0x65e6,	// (0x000065e6) clock_digital_number_pane_cp10_g1

0x65e6,	// (0x000065e6) clock_digital_number_pane_cp10_g2

0x0001,

0xb0a6,	// (0x0000b0a6) clock_digital_number_pane_cp10_g

0x65e6,	// (0x000065e6) clock_digital_separator_pane_cp10_g1

0x65e6,	// (0x000065e6) clock_digital_separator_pane_cp10_g2

0x0001,

0xb0a6,	// (0x0000b0a6) clock_digital_separator_pane_cp10_g

0x86d3,	// (0x000086d3) uniindi_top_pane_g3

0x86e4,	// (0x000086e4) uniindi_top_pane_g4

0x8ea9,	// (0x00008ea9) vkb2_row_keypad_pane_ParamLimits

0x8ea9,	// (0x00008ea9) vkb2_row_keypad_pane

0x91a0,	// (0x000091a0) vkb2_cell_t_keypad_pane_ParamLimits

0x91a0,	// (0x000091a0) vkb2_cell_t_keypad_pane

0x91b0,	// (0x000091b0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x91b0,	// (0x000091b0) vkb2_cell_t_keypad_pane_cp08

0x91c3,	// (0x000091c3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x91c3,	// (0x000091c3) vkb2_cell_t_keypad_pane_cp09

0x91d7,	// (0x000091d7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x91d7,	// (0x000091d7) vkb2_cell_t_keypad_pane_cp01

0x91e8,	// (0x000091e8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x91e8,	// (0x000091e8) vkb2_cell_t_keypad_pane_cp02

0x91f9,	// (0x000091f9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x91f9,	// (0x000091f9) vkb2_cell_t_keypad_pane_cp03

0x920a,	// (0x0000920a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x920a,	// (0x0000920a) vkb2_cell_t_keypad_pane_cp04

0x921b,	// (0x0000921b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x921b,	// (0x0000921b) vkb2_cell_t_keypad_pane_cp05

0x922c,	// (0x0000922c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x922c,	// (0x0000922c) vkb2_cell_t_keypad_pane_cp06

0x923d,	// (0x0000923d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x923d,	// (0x0000923d) vkb2_cell_t_keypad_pane_cp07

0x924e,	// (0x0000924e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x924e,	// (0x0000924e) vkb2_cell_t_keypad_pane_cp10

0x6a78,	// (0x00006a78) vkb2_cell_t_keypad_pane_g1

0x9263,	// (0x00009263) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe8d1,	// (0x0000e8d1) aid_size_cell_graphic2_ParamLimits

0xe8d1,	// (0x0000e8d1) aid_size_cell_graphic2

0xe90f,	// (0x0000e90f) bg_popup_window_pane_cp21_ParamLimits

0xe90f,	// (0x0000e90f) bg_popup_window_pane_cp21

0xe91d,	// (0x0000e91d) graphic2_pages_pane_ParamLimits

0xe91d,	// (0x0000e91d) graphic2_pages_pane

0xe973,	// (0x0000e973) grid_graphic2_control_pane_ParamLimits

0xe973,	// (0x0000e973) grid_graphic2_control_pane

0xe9bb,	// (0x0000e9bb) grid_graphic2_pane_ParamLimits

0xe9bb,	// (0x0000e9bb) grid_graphic2_pane

0xea42,	// (0x0000ea42) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7e1f,	// (0x00007e1f) list_ai3_gene_pane_ParamLimits

0xdedf,	// (0x0000dedf) bg_popup_window_pane_cp19_ParamLimits

0x8258,	// (0x00008258) bg_touch_area_indi_pane_ParamLimits

0x8258,	// (0x00008258) bg_touch_area_indi_pane

0x826e,	// (0x0000826e) bg_touch_area_indi_pane_cp01_ParamLimits

0x826e,	// (0x0000826e) bg_touch_area_indi_pane_cp01

0x8284,	// (0x00008284) bg_touch_area_indi_pane_cp02_ParamLimits

0x8284,	// (0x00008284) bg_touch_area_indi_pane_cp02

0x829c,	// (0x0000829c) bg_touch_area_indi_pane_cp03_ParamLimits

0x829c,	// (0x0000829c) bg_touch_area_indi_pane_cp03

0x82b6,	// (0x000082b6) popup_slider_window_g1_ParamLimits

0x82d2,	// (0x000082d2) popup_slider_window_g2_ParamLimits

0x82ee,	// (0x000082ee) popup_slider_window_g3_ParamLimits

0xf47a,	// (0x0000f47a) popup_slider_window_g_ParamLimits

0x834a,	// (0x0000834a) popup_slider_window_t1_ParamLimits

0x83be,	// (0x000083be) small_volume_slider_vertical_pane_ParamLimits

0xea42,	// (0x0000ea42) cell_graphic2_pane_ParamLimits

0xea9f,	// (0x0000ea9f) bg_button_pane_cp10_ParamLimits

0xea9f,	// (0x0000ea9f) bg_button_pane_cp10

0xeab2,	// (0x0000eab2) bg_button_pane_cp11_ParamLimits

0xeab2,	// (0x0000eab2) bg_button_pane_cp11

0xeac5,	// (0x0000eac5) graphic2_pages_pane_g1_ParamLimits

0xeac5,	// (0x0000eac5) graphic2_pages_pane_g1

0xeae0,	// (0x0000eae0) graphic2_pages_pane_g2_ParamLimits

0xeae0,	// (0x0000eae0) graphic2_pages_pane_g2

0x0001,

0xf4d7,	// (0x0000f4d7) graphic2_pages_pane_g_ParamLimits

0xf4d7,	// (0x0000f4d7) graphic2_pages_pane_g

0xeaf8,	// (0x0000eaf8) graphic2_pages_pane_t1_ParamLimits

0xeaf8,	// (0x0000eaf8) graphic2_pages_pane_t1

0xeb10,	// (0x0000eb10) cell_graphic2_control_pane_ParamLimits

0xeb10,	// (0x0000eb10) cell_graphic2_control_pane

0xeb42,	// (0x0000eb42) cell_graphic2_pane_g1_ParamLimits

0xeb42,	// (0x0000eb42) cell_graphic2_pane_g1

0x6892,	// (0x00006892) cell_graphic2_pane_g2_ParamLimits

0x6892,	// (0x00006892) cell_graphic2_pane_g2

0xeb4f,	// (0x0000eb4f) cell_graphic2_pane_g3_ParamLimits

0xeb4f,	// (0x0000eb4f) cell_graphic2_pane_g3

0x689f,	// (0x0000689f) cell_graphic2_pane_g4_ParamLimits

0x689f,	// (0x0000689f) cell_graphic2_pane_g4

0xeb5c,	// (0x0000eb5c) cell_graphic2_pane_g5_ParamLimits

0xeb5c,	// (0x0000eb5c) cell_graphic2_pane_g5

0x0004,

0xf4dc,	// (0x0000f4dc) cell_graphic2_pane_g_ParamLimits

0xf4dc,	// (0x0000f4dc) cell_graphic2_pane_g

0xeb7c,	// (0x0000eb7c) cell_graphic2_pane_t1_ParamLimits

0xeb7c,	// (0x0000eb7c) cell_graphic2_pane_t1

0x471f,	// (0x0000471f) grid_highlight_pane_cp11_ParamLimits

0x471f,	// (0x0000471f) grid_highlight_pane_cp11

0x083b,	// (0x0000083b) bg_button_pane_cp05

0xebb1,	// (0x0000ebb1) cell_graphic2_control_pane_g1

0x65e6,	// (0x000065e6) bg_touch_area_indi_pane_g1

0x9533,	// (0x00009533) aid_cmod_rocker_key_size

0x953d,	// (0x0000953d) aid_cmode_itu_key_size

0x9547,	// (0x00009547) main_cmode_video_pane

0x9551,	// (0x00009551) main_comp_mode_itu_pane

0x955d,	// (0x0000955d) main_comp_mode_rocker_pane

0x9569,	// (0x00009569) cell_cmode_rocker_pane_ParamLimits

0x9569,	// (0x00009569) cell_cmode_rocker_pane

0x957b,	// (0x0000957b) cell_cmode_itu_pane_ParamLimits

0x957b,	// (0x0000957b) cell_cmode_itu_pane

0x1399,	// (0x00001399) bg_button_pane_cp06_ParamLimits

0x1399,	// (0x00001399) bg_button_pane_cp06

0x6a78,	// (0x00006a78) cell_cmode_rocker_pane_g1_ParamLimits

0x6a78,	// (0x00006a78) cell_cmode_rocker_pane_g1

0x8533,	// (0x00008533) cell_cmode_rocker_pane_g2_ParamLimits

0x8533,	// (0x00008533) cell_cmode_rocker_pane_g2

0x0001,

0xb321,	// (0x0000b321) cell_cmode_rocker_pane_g_ParamLimits

0xb321,	// (0x0000b321) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x9590,	// (0x00009590) cell_cmode_itu_pane_g1

0x9599,	// (0x00009599) cell_cmode_itu_pane_t1

0x95a7,	// (0x000095a7) cell_cmode_itu_pane_t2

0x0001,

0xb326,	// (0x0000b326) cell_cmode_itu_pane_t

0x8756,	// (0x00008756) aid_touch_ctrl_left

0x875e,	// (0x0000875e) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xebd7,	// (0x0000ebd7) aid_cmod_rocker_key_size_cp

0xebe1,	// (0x0000ebe1) aid_cmode_itu_key_size_cp

0x95c9,	// (0x000095c9) compa_mode_pane_g1

0x95d1,	// (0x000095d1) compa_mode_pane_g2

0x95d9,	// (0x000095d9) compa_mode_pane_g3

0x0002,

0xb32b,	// (0x0000b32b) compa_mode_pane_g

0xebeb,	// (0x0000ebeb) main_comp_mode_itu_pane_cp

0xebf3,	// (0x0000ebf3) main_comp_mode_rocker_pane_cp

0xebfb,	// (0x0000ebfb) cell_cmode_itu_pane_cp_ParamLimits

0xebfb,	// (0x0000ebfb) cell_cmode_itu_pane_cp

0xec10,	// (0x0000ec10) cell_cmode_rocker_pane_cp_ParamLimits

0xec10,	// (0x0000ec10) cell_cmode_rocker_pane_cp

0x1399,	// (0x00001399) bg_button_pane_cp06_cp_ParamLimits

0x1399,	// (0x00001399) bg_button_pane_cp06_cp

0x6a78,	// (0x00006a78) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6a78,	// (0x00006a78) cell_cmode_rocker_pane_g1_cp

0x65e6,	// (0x000065e6) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xec22,	// (0x0000ec22) cell_cmode_itu_pane_g1_cp

0xec2b,	// (0x0000ec2b) cell_cmode_itu_pane_t1_cp

0xec2b,	// (0x0000ec2b) cell_cmode_itu_pane_t2_cp

0xd2e2,	// (0x0000d2e2) settings_code_pane_cp2

0x0507,	// (0x00000507) bg_popup_window_pane_cp3_ParamLimits

0x0a15,	// (0x00000a15) heading_pane_cp3_ParamLimits

0x0a21,	// (0x00000a21) listscroll_popup_graphic_pane_ParamLimits

0x6650,	// (0x00006650) fep_hwr_aid_pane_ParamLimits

0x8439,	// (0x00008439) aid_touch_sctrl_top_ParamLimits

0x8446,	// (0x00008446) sctrl_sk_top_pane_g1_ParamLimits

0x6a78,	// (0x00006a78) sctrl_sk_top_pane_g2_ParamLimits

0xb261,	// (0x0000b261) sctrl_sk_top_pane_g_ParamLimits

0x8453,	// (0x00008453) sctrl_sk_top_pane_t1_ParamLimits

0x8439,	// (0x00008439) aid_touch_sctrl_bottom_ParamLimits

0x8453,	// (0x00008453) sctrl_sk_bottom_pane_t1_ParamLimits

0x869f,	// (0x0000869f) aid_area_touch_clock

0xe6a2,	// (0x0000e6a2) aid_vkb2_area_top_pane_cell_ParamLimits

0xe6a2,	// (0x0000e6a2) aid_vkb2_area_top_pane_cell

0xe74d,	// (0x0000e74d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe74d,	// (0x0000e74d) aid_vkb2_area_bottom_pane_cell

0x8fe8,	// (0x00008fe8) popup_char_count_window

0x9626,	// (0x00009626) popup_char_count_window_g1

0x962f,	// (0x0000962f) popup_char_count_window_g2

0x9638,	// (0x00009638) popup_char_count_window_g3

0x0002,

0xb332,	// (0x0000b332) popup_char_count_window_g

0x9641,	// (0x00009641) popup_char_count_window_t1

0x8c46,	// (0x00008c46) popup_fep_char_preview_window_ParamLimits

0x8c46,	// (0x00008c46) popup_fep_char_preview_window

0xe6c2,	// (0x0000e6c2) vkb2_top_candi_pane_ParamLimits

0xe6c2,	// (0x0000e6c2) vkb2_top_candi_pane

0xec39,	// (0x0000ec39) cell_vkb2_top_candi_pane_ParamLimits

0xec39,	// (0x0000ec39) cell_vkb2_top_candi_pane

0x3f58,	// (0x00003f58) bg_popup_fep_char_preview_window_ParamLimits

0x3f58,	// (0x00003f58) bg_popup_fep_char_preview_window

0x969c,	// (0x0000969c) popup_fep_char_preview_window_t1_ParamLimits

0x969c,	// (0x0000969c) popup_fep_char_preview_window_t1

0x96d6,	// (0x000096d6) bg_popup_fep_char_preview_window_g1

0x96de,	// (0x000096de) bg_popup_fep_char_preview_window_g2

0x96e6,	// (0x000096e6) bg_popup_fep_char_preview_window_g3

0x96ee,	// (0x000096ee) bg_popup_fep_char_preview_window_g4

0x96f6,	// (0x000096f6) bg_popup_fep_char_preview_window_g5

0x96fe,	// (0x000096fe) bg_popup_fep_char_preview_window_g6

0x9706,	// (0x00009706) bg_popup_fep_char_preview_window_g7

0x970e,	// (0x0000970e) bg_popup_fep_char_preview_window_g8

0x9716,	// (0x00009716) bg_popup_fep_char_preview_window_g9

0x0008,

0xb339,	// (0x0000b339) bg_popup_fep_char_preview_window_g

0x6a78,	// (0x00006a78) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a78,	// (0x00006a78) cell_vkb2_top_candi_pane_g1

0x6de3,	// (0x00006de3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6de3,	// (0x00006de3) cell_vkb2_top_candi_pane_g2

0x6e04,	// (0x00006e04) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6e04,	// (0x00006e04) cell_vkb2_top_candi_pane_g3

0x971e,	// (0x0000971e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x971e,	// (0x0000971e) cell_vkb2_top_candi_pane_g4

0x973f,	// (0x0000973f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x973f,	// (0x0000973f) cell_vkb2_top_candi_pane_g5

0x8533,	// (0x00008533) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8533,	// (0x00008533) cell_vkb2_top_candi_pane_g6

0x0005,

0xb34c,	// (0x0000b34c) cell_vkb2_top_candi_pane_g_ParamLimits

0xb34c,	// (0x0000b34c) cell_vkb2_top_candi_pane_g

0x9760,	// (0x00009760) cell_vkb2_top_candi_pane_t1

0x4e3f,	// (0x00004e3f) aid_size_touch_slider_mark_ParamLimits

0x4e3f,	// (0x00004e3f) aid_size_touch_slider_mark

0xe959,	// (0x0000e959) grid_graphic2_catg_pane_ParamLimits

0xe959,	// (0x0000e959) grid_graphic2_catg_pane

0xea15,	// (0x0000ea15) popup_grid_graphic2_window_t1_ParamLimits

0xea15,	// (0x0000ea15) popup_grid_graphic2_window_t1

0xea2b,	// (0x0000ea2b) popup_grid_graphic2_window_t2_ParamLimits

0xea2b,	// (0x0000ea2b) popup_grid_graphic2_window_t2

0x0001,

0xf4d2,	// (0x0000f4d2) popup_grid_graphic2_window_t_ParamLimits

0xf4d2,	// (0x0000f4d2) popup_grid_graphic2_window_t

0x083b,	// (0x0000083b) bg_button_pane_cp05_ParamLimits

0xebb1,	// (0x0000ebb1) cell_graphic2_control_pane_g1_ParamLimits

0xec9f,	// (0x0000ec9f) cell_graphic2_catg_pane_ParamLimits

0xec9f,	// (0x0000ec9f) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xecb1,	// (0x0000ecb1) cell_graphic2_catg_pane_g1

0x866b,	// (0x0000866b) cell_tb_ext_pane_t1_ParamLimits

0x9086,	// (0x00009086) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9086,	// (0x00009086) vkb2_top_cell_right_narrow_pane

0x909e,	// (0x0000909e) vkb2_top_cell_right_wide_pane_ParamLimits

0x909e,	// (0x0000909e) vkb2_top_cell_right_wide_pane

0x6642,	// (0x00006642) bg_vkb2_func_pane_ParamLimits

0x6642,	// (0x00006642) bg_vkb2_func_pane

0x910f,	// (0x0000910f) vkb2_top_cell_left_pane_g1_ParamLimits

0x6642,	// (0x00006642) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6642,	// (0x00006642) bg_vkb2_fuc_pane_cp03

0x9184,	// (0x00009184) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x36db,	// (0x000036db) bg_vkb2_func_pane_g1

0x36e3,	// (0x000036e3) bg_vkb2_func_pane_g2

0x36f3,	// (0x000036f3) bg_vkb2_func_pane_g3

0x36eb,	// (0x000036eb) bg_vkb2_func_pane_g4

0x36fb,	// (0x000036fb) bg_vkb2_func_pane_g5

0x3703,	// (0x00003703) bg_vkb2_func_pane_g6

0x370b,	// (0x0000370b) bg_vkb2_func_pane_g7

0x3713,	// (0x00003713) bg_vkb2_func_pane_g8

0x36d3,	// (0x000036d3) bg_vkb2_func_pane_g9

0x0008,

0xb359,	// (0x0000b359) bg_vkb2_func_pane_g

0x6642,	// (0x00006642) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6642,	// (0x00006642) bg_vkb2_fuc_pane_cp01

0x910f,	// (0x0000910f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x910f,	// (0x0000910f) vkb2_top_cell_right_wide_pane_g1

0x6642,	// (0x00006642) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6642,	// (0x00006642) bg_vkb2_fuc_pane_cp02

0x9184,	// (0x00009184) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9184,	// (0x00009184) vkb2_top_cell_right_narrow_pane_g1

0xde1f,	// (0x0000de1f) aid_touch_area_decrease_ParamLimits

0xde1f,	// (0x0000de1f) aid_touch_area_decrease

0xde53,	// (0x0000de53) aid_touch_area_increase_ParamLimits

0xde53,	// (0x0000de53) aid_touch_area_increase

0xde7b,	// (0x0000de7b) aid_touch_area_mute_ParamLimits

0xde7b,	// (0x0000de7b) aid_touch_area_mute

0xdeab,	// (0x0000deab) aid_touch_area_slider_ParamLimits

0xdeab,	// (0x0000deab) aid_touch_area_slider

0xdeeb,	// (0x0000deeb) popup_slider_window_g4_ParamLimits

0xdeeb,	// (0x0000deeb) popup_slider_window_g4

0xdf13,	// (0x0000df13) popup_slider_window_g5_ParamLimits

0xdf13,	// (0x0000df13) popup_slider_window_g5

0xdf47,	// (0x0000df47) popup_slider_window_g6_ParamLimits

0xdf47,	// (0x0000df47) popup_slider_window_g6

0x8378,	// (0x00008378) popup_slider_window_t2_ParamLimits

0x8378,	// (0x00008378) popup_slider_window_t2

0x0001,

0xb255,	// (0x0000b255) popup_slider_window_t_ParamLimits

0xb255,	// (0x0000b255) popup_slider_window_t

0xdf63,	// (0x0000df63) slider_pane_ParamLimits

0xdf63,	// (0x0000df63) slider_pane

0x979a,	// (0x0000979a) slider_pane_g1_ParamLimits

0x979a,	// (0x0000979a) slider_pane_g1

0x97ae,	// (0x000097ae) slider_pane_g2_ParamLimits

0x97ae,	// (0x000097ae) slider_pane_g2

0x97c4,	// (0x000097c4) slider_pane_g3_ParamLimits

0x97c4,	// (0x000097c4) slider_pane_g3

0x0003,

0xb36c,	// (0x0000b36c) slider_pane_g_ParamLimits

0xb36c,	// (0x0000b36c) slider_pane_g

0xca37,	// (0x0000ca37) popup_tb_float_extension_window_ParamLimits

0xca37,	// (0x0000ca37) popup_tb_float_extension_window

0x97f0,	// (0x000097f0) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x97fc,	// (0x000097fc) grid_tb_float_ext_pane

0x9806,	// (0x00009806) cell_tb_float_ext_pane_ParamLimits

0x9806,	// (0x00009806) cell_tb_float_ext_pane

0x9820,	// (0x00009820) cell_tb_float_ext_pane_g1

0x9829,	// (0x00009829) grid_highlight_pane_cp12

0xd6e4,	// (0x0000d6e4) cell_last_hwr_side_pane_ParamLimits

0xd6e4,	// (0x0000d6e4) cell_last_hwr_side_pane

0x65e6,	// (0x000065e6) cell_last_hwr_side_pane_g1

0x9832,	// (0x00009832) cell_last_hwr_side_pane_g2

0x0001,

0xb375,	// (0x0000b375) cell_last_hwr_side_pane_g

0xe829,	// (0x0000e829) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe829,	// (0x0000e829) vkb2_area_bottom_space_btn_pane

0x6a78,	// (0x00006a78) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9263,	// (0x00009263) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9760,	// (0x00009760) cell_vkb2_top_candi_pane_t1_ParamLimits

0x983b,	// (0x0000983b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x983b,	// (0x0000983b) vkb2_area_bottom_space_btn_pane_g1

0x9875,	// (0x00009875) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9875,	// (0x00009875) vkb2_area_bottom_space_btn_pane_g2

0x98ab,	// (0x000098ab) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x98ab,	// (0x000098ab) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb37a,	// (0x0000b37a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb37a,	// (0x0000b37a) vkb2_area_bottom_space_btn_pane_g

0x6705,	// (0x00006705) cel_fep_hwr_func_pane_ParamLimits

0x6705,	// (0x00006705) cel_fep_hwr_func_pane

0xd6b9,	// (0x0000d6b9) cell_hwr_side_button_pane_ParamLimits

0xd6b9,	// (0x0000d6b9) cell_hwr_side_button_pane

0x869f,	// (0x0000869f) aid_area_touch_clock_ParamLimits

0x083b,	// (0x0000083b) bg_uniindi_top_pane_ParamLimits

0x86b1,	// (0x000086b1) uniindi_top_pane_g1_ParamLimits

0x86c7,	// (0x000086c7) uniindi_top_pane_g2_ParamLimits

0x86d3,	// (0x000086d3) uniindi_top_pane_g3_ParamLimits

0x86e4,	// (0x000086e4) uniindi_top_pane_g4_ParamLimits

0xb28d,	// (0x0000b28d) uniindi_top_pane_g_ParamLimits

0x86f1,	// (0x000086f1) uniindi_top_pane_t1_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01

0x98f5,	// (0x000098f5) cel_fep_hwr_func_pane_g1_ParamLimits

0x98f5,	// (0x000098f5) cel_fep_hwr_func_pane_g1

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02

0x98f5,	// (0x000098f5) cell_hwr_side_button_pane_g1_ParamLimits

0x98f5,	// (0x000098f5) cell_hwr_side_button_pane_g1

0x34ae,	// (0x000034ae) status_pane_g4_ParamLimits

0x34ae,	// (0x000034ae) status_pane_g4

0x34c8,	// (0x000034c8) status_pane_t1

0x6320,	// (0x00006320) form2_midp_gauge_slider_cont_pane

0x6328,	// (0x00006328) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd60f,	// (0x0000d60f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd621,	// (0x0000d621) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf41e,	// (0x0000f41e) form2_midp_gauge_slider_pane_t_ParamLimits

0x635e,	// (0x0000635e) form2_midp_slider_pane_ParamLimits

0x8c06,	// (0x00008c06) aid_size_cell_func_vkb2_ParamLimits

0x8c06,	// (0x00008c06) aid_size_cell_func_vkb2

0x97dc,	// (0x000097dc) slider_pane_g4_ParamLimits

0x97dc,	// (0x000097dc) slider_pane_g4

0xecba,	// (0x0000ecba) form2_midp_gauge_slider_pane_t2_cp01

0xecc8,	// (0x0000ecc8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xecc8,	// (0x0000ecc8) form2_midp_gauge_slider_pane_t3_cp01

0x992e,	// (0x0000992e) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9962,	// (0x00009962) navi_smil_pane_g1

0x996a,	// (0x0000996a) navi_smil_pane_t1

0x9937,	// (0x00009937) form2_midp_slider_pane_g1

0x9940,	// (0x00009940) form2_midp_slider_pane_g2

0x9948,	// (0x00009948) form2_midp_slider_pane_g3

0x9937,	// (0x00009937) form2_midp_slider_pane_g4

0xece5,	// (0x0000ece5) form2_midp_slider_pane_g5

0x0004,

0xf4ec,	// (0x0000f4ec) form2_midp_slider_pane_g

0x98e5,	// (0x000098e5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x98e5,	// (0x000098e5) vkb2_area_bottom_space_btn_pane_g4

0xcc1a,	// (0x0000cc1a) lc0_navi_pane_ParamLimits

0xcc1a,	// (0x0000cc1a) lc0_navi_pane

0xcc84,	// (0x0000cc84) lc0_stat_indi_pane_ParamLimits

0xcc84,	// (0x0000cc84) lc0_stat_indi_pane

0xcc99,	// (0x0000cc99) ls0_title_pane_ParamLimits

0xcc99,	// (0x0000cc99) ls0_title_pane

0x1399,	// (0x00001399) bg_popup_sub_pane_cp14_ParamLimits

0x8686,	// (0x00008686) list_uniindi_pane_ParamLimits

0x8692,	// (0x00008692) uniindi_top_pane_ParamLimits

0x872e,	// (0x0000872e) list_single_uniindi_pane_g1_ParamLimits

0x8741,	// (0x00008741) list_single_uniindi_pane_t1_ParamLimits

0xecf0,	// (0x0000ecf0) lc0_stat_clock_pane_ParamLimits

0xecf0,	// (0x0000ecf0) lc0_stat_clock_pane

0xecfd,	// (0x0000ecfd) lc0_stat_indi_pane_g1_ParamLimits

0xecfd,	// (0x0000ecfd) lc0_stat_indi_pane_g1

0xed0a,	// (0x0000ed0a) lc0_stat_indi_pane_g2_ParamLimits

0xed0a,	// (0x0000ed0a) lc0_stat_indi_pane_g2

0x0001,

0xf4f7,	// (0x0000f4f7) lc0_stat_indi_pane_g_ParamLimits

0xf4f7,	// (0x0000f4f7) lc0_stat_indi_pane_g

0xed17,	// (0x0000ed17) lc0_uni_indicator_pane_ParamLimits

0xed17,	// (0x0000ed17) lc0_uni_indicator_pane

0xed24,	// (0x0000ed24) ls0_title_pane_g1_ParamLimits

0xed24,	// (0x0000ed24) ls0_title_pane_g1

0xed38,	// (0x0000ed38) ls0_title_pane_t1_ParamLimits

0xed38,	// (0x0000ed38) ls0_title_pane_t1

0xed66,	// (0x0000ed66) lc0_uni_indicator_pane_g1_ParamLimits

0xed66,	// (0x0000ed66) lc0_uni_indicator_pane_g1

0x9a0a,	// (0x00009a0a) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9a18,	// (0x00009a18) ai5_sk_pane_ParamLimits

0x9a18,	// (0x00009a18) ai5_sk_pane

0xed8d,	// (0x0000ed8d) cell_ai5_widget_pane_ParamLimits

0xed8d,	// (0x0000ed8d) cell_ai5_widget_pane

0x9adb,	// (0x00009adb) aid_size_cell_widget_grid

0x9af1,	// (0x00009af1) bg_ai5_widget_pane_ParamLimits

0x9af1,	// (0x00009af1) bg_ai5_widget_pane

0x9b65,	// (0x00009b65) cell_ai5_widget_pane_g2

0x9b75,	// (0x00009b75) cell_ai5_widget_pane_g3

0x9b8c,	// (0x00009b8c) cell_ai5_widget_pane_g4

0x9b98,	// (0x00009b98) cell_ai5_widget_pane_g5

0x9ba4,	// (0x00009ba4) cell_ai5_widget_pane_g6

0x9bb0,	// (0x00009bb0) cell_ai5_widget_pane_g7

0x9bf8,	// (0x00009bf8) cell_ai5_widget_pane_t1_ParamLimits

0x9bf8,	// (0x00009bf8) cell_ai5_widget_pane_t1

0x9c15,	// (0x00009c15) cell_ai5_widget_pane_t2_ParamLimits

0x9c15,	// (0x00009c15) cell_ai5_widget_pane_t2

0x9c2d,	// (0x00009c2d) cell_ai5_widget_pane_t3_ParamLimits

0x9c2d,	// (0x00009c2d) cell_ai5_widget_pane_t3

0x9c45,	// (0x00009c45) cell_ai5_widget_pane_t4_ParamLimits

0x9c45,	// (0x00009c45) cell_ai5_widget_pane_t4

0x9c62,	// (0x00009c62) cell_ai5_widget_pane_t5_ParamLimits

0x9c62,	// (0x00009c62) cell_ai5_widget_pane_t5

0x9c81,	// (0x00009c81) cell_ai5_widget_pane_t6_ParamLimits

0x9c81,	// (0x00009c81) cell_ai5_widget_pane_t6

0x9c93,	// (0x00009c93) cell_ai5_widget_pane_t7_ParamLimits

0x9c93,	// (0x00009c93) cell_ai5_widget_pane_t7

0x9cac,	// (0x00009cac) cell_ai5_widget_pane_t8_ParamLimits

0x9cac,	// (0x00009cac) cell_ai5_widget_pane_t8

0x0009,

0xb3a8,	// (0x0000b3a8) cell_ai5_widget_pane_t_ParamLimits

0xb3a8,	// (0x0000b3a8) cell_ai5_widget_pane_t

0x9d00,	// (0x00009d00) grid_ai5_widget_pane

0x1399,	// (0x00001399) highlight_cell_ai5_widget_pane_ParamLimits

0x1399,	// (0x00001399) highlight_cell_ai5_widget_pane

0xedf7,	// (0x0000edf7) ai5_sk_left_pane

0xee01,	// (0x0000ee01) ai5_sk_middle_pane

0xee0b,	// (0x0000ee0b) ai5_sk_right_pane

0x9d36,	// (0x00009d36) bg_ai5_widget_pane_g1_ParamLimits

0x9d36,	// (0x00009d36) bg_ai5_widget_pane_g1

0x9d42,	// (0x00009d42) bg_ai5_widget_pane_g2_ParamLimits

0x9d42,	// (0x00009d42) bg_ai5_widget_pane_g2

0x9d4e,	// (0x00009d4e) bg_ai5_widget_pane_g3_ParamLimits

0x9d4e,	// (0x00009d4e) bg_ai5_widget_pane_g3

0x9d5a,	// (0x00009d5a) bg_ai5_widget_pane_g4_ParamLimits

0x9d5a,	// (0x00009d5a) bg_ai5_widget_pane_g4

0x9d66,	// (0x00009d66) bg_ai5_widget_pane_g5_ParamLimits

0x9d66,	// (0x00009d66) bg_ai5_widget_pane_g5

0x9d72,	// (0x00009d72) bg_ai5_widget_pane_g6_ParamLimits

0x9d72,	// (0x00009d72) bg_ai5_widget_pane_g6

0x9d7e,	// (0x00009d7e) bg_ai5_widget_pane_g7_ParamLimits

0x9d7e,	// (0x00009d7e) bg_ai5_widget_pane_g7

0x9d8a,	// (0x00009d8a) bg_ai5_widget_pane_g8_ParamLimits

0x9d8a,	// (0x00009d8a) bg_ai5_widget_pane_g8

0x9d96,	// (0x00009d96) bg_ai5_widget_pane_g9_ParamLimits

0x9d96,	// (0x00009d96) bg_ai5_widget_pane_g9

0x0008,

0xb3bd,	// (0x0000b3bd) bg_ai5_widget_pane_g_ParamLimits

0xb3bd,	// (0x0000b3bd) bg_ai5_widget_pane_g

0x9dc8,	// (0x00009dc8) cell_shortcut_ai5_widget_pane_ParamLimits

0x9dc8,	// (0x00009dc8) cell_shortcut_ai5_widget_pane

0x2607,	// (0x00002607) bg_cell_shortcut_ai5_widget_pane

0x9dd9,	// (0x00009dd9) cell_grid_ai5_widget_pane_g1

0x9de2,	// (0x00009de2) highlight_cell_shortcut_ai5_widget_pane

0x36e3,	// (0x000036e3) ai5_sk_left_pane_g1

0x9dea,	// (0x00009dea) ai5_sk_left_pane_g2

0x9df2,	// (0x00009df2) ai5_sk_left_pane_g3

0x9dfa,	// (0x00009dfa) ai5_sk_left_pane_g4

0x0003,

0xb3d0,	// (0x0000b3d0) ai5_sk_left_pane_g

0x9e02,	// (0x00009e02) ai5_sk_left_pane_t1

0x36db,	// (0x000036db) ai5_sk_right_pane_g1

0x9e10,	// (0x00009e10) ai5_sk_right_pane_g2

0x9e18,	// (0x00009e18) ai5_sk_right_pane_g3

0x9e20,	// (0x00009e20) ai5_sk_right_pane_g4

0x0003,

0xb3d9,	// (0x0000b3d9) ai5_sk_right_pane_g

0x9e28,	// (0x00009e28) ai5_sk_right_pane_t1

0x36db,	// (0x000036db) ai5_sk_middle_pane_g1

0x36e3,	// (0x000036e3) ai5_sk_middle_pane_g2

0x36fb,	// (0x000036fb) ai5_sk_middle_pane_g3

0x9e18,	// (0x00009e18) ai5_sk_middle_pane_g4

0x9df2,	// (0x00009df2) ai5_sk_middle_pane_g5

0x9e36,	// (0x00009e36) ai5_sk_middle_pane_g6

0xee15,	// (0x0000ee15) ai5_sk_middle_pane_g7

0x0006,

0xf4fc,	// (0x0000f4fc) ai5_sk_middle_pane_g

0xcb06,	// (0x0000cb06) aid_touch_area_size_lc0_ParamLimits

0xcb06,	// (0x0000cb06) aid_touch_area_size_lc0

0x6e25,	// (0x00006e25) cell_hwr_candidate_pane_t1_ParamLimits

0x3185,	// (0x00003185) aid_touch_navi_pane

0xcd92,	// (0x0000cd92) status_dt_navi_pane_ParamLimits

0xcd92,	// (0x0000cd92) status_dt_navi_pane

0xcdaa,	// (0x0000cdaa) status_dt_sta_pane_ParamLimits

0xcdaa,	// (0x0000cdaa) status_dt_sta_pane

0xee1d,	// (0x0000ee1d) dt_sta_controll_pane

0xee2a,	// (0x0000ee2a) dt_sta_indi_pane

0xee37,	// (0x0000ee37) dt_sta_title_pane

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane_ParamLimits

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane

0xee49,	// (0x0000ee49) dt_sta_battery_pane

0xee51,	// (0x0000ee51) dt_sta_indi_pane_g1

0x9e88,	// (0x00009e88) dt_sta_indi_pane_g2

0x9e91,	// (0x00009e91) dt_sta_indi_pane_g3

0x0002,

0xf50b,	// (0x0000f50b) dt_sta_indi_pane_g

0x9e9a,	// (0x00009e9a) dt_sta_signal_pane

0x1399,	// (0x00001399) bg_dt_sta_title_pane_ParamLimits

0x1399,	// (0x00001399) bg_dt_sta_title_pane

0x9ea3,	// (0x00009ea3) dt_sta_title_pane_g1

0x9eab,	// (0x00009eab) dt_sta_title_pane_t1_ParamLimits

0x9eab,	// (0x00009eab) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xee5a,	// (0x0000ee5a) dt_sta_controll_pane_g1

0x9ec9,	// (0x00009ec9) bg_dt_sta_title_pane_g1

0x9ed2,	// (0x00009ed2) bg_dt_sta_title_pane_g2

0x9edb,	// (0x00009edb) bg_dt_sta_title_pane_g3

0x0002,

0xb3f8,	// (0x0000b3f8) bg_dt_sta_title_pane_g

0x65e6,	// (0x000065e6) bg_dt_sta_indi_pane_g1

0x9ee4,	// (0x00009ee4) dt_sta_signal_pane_g1

0x9eec,	// (0x00009eec) dt_sta_signal_pane_g2

0x0001,

0xb3ff,	// (0x0000b3ff) dt_sta_signal_pane_g

0x9ef4,	// (0x00009ef4) dt_sta_battery_pane_g1

0x9efd,	// (0x00009efd) dt_sta_battery_pane_t1

0x65e6,	// (0x000065e6) bg_dt_sta_control_pane_g1

0x1f41,	// (0x00001f41) fep_china_uni_eep_pane

0x1f49,	// (0x00001f49) fep_china_uni_entry_pane_ParamLimits

0x1f59,	// (0x00001f59) popup_fep_china_uni_window_g1_ParamLimits

0x1f69,	// (0x00001f69) popup_fep_china_uni_window_g2_ParamLimits

0x1f69,	// (0x00001f69) popup_fep_china_uni_window_g2

0x0001,

0xac88,	// (0x0000ac88) popup_fep_china_uni_window_g_ParamLimits

0xac88,	// (0x0000ac88) popup_fep_china_uni_window_g

0x9f0c,	// (0x00009f0c) fep_china_uni_eep_pane_g1

0x9f14,	// (0x00009f14) fep_china_uni_eep_pane_t1

0x9959,	// (0x00009959) aid_touch_area_size_smil_player

0x32d5,	// (0x000032d5) lc0_clock_pane

0x34bc,	// (0x000034bc) status_pane_g5_ParamLimits

0x34bc,	// (0x000034bc) status_pane_g5

0xc5b9,	// (0x0000c5b9) popup_keymap_window

0x347a,	// (0x0000347a) status_icon_pane

0x9b75,	// (0x00009b75) cell_ai5_widget_pane_g3_ParamLimits

0x9b8c,	// (0x00009b8c) cell_ai5_widget_pane_g4_ParamLimits

0x9b98,	// (0x00009b98) cell_ai5_widget_pane_g5_ParamLimits

0x9bbc,	// (0x00009bbc) cell_ai5_widget_pane_g8_ParamLimits

0x9bbc,	// (0x00009bbc) cell_ai5_widget_pane_g8

0x9bd0,	// (0x00009bd0) cell_ai5_widget_pane_g9_ParamLimits

0x9bd0,	// (0x00009bd0) cell_ai5_widget_pane_g9

0x9be4,	// (0x00009be4) cell_ai5_widget_pane_g10_ParamLimits

0x9be4,	// (0x00009be4) cell_ai5_widget_pane_g10

0x9f23,	// (0x00009f23) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9f2b,	// (0x00009f2b) popup_keymap_window_t1

0xc2c7,	// (0x0000c2c7) control_pane_g6_ParamLimits

0xc2c7,	// (0x0000c2c7) control_pane_g6

0xc2d4,	// (0x0000c2d4) control_pane_g7_ParamLimits

0xc2d4,	// (0x0000c2d4) control_pane_g7

0xc2e1,	// (0x0000c2e1) control_pane_g8_ParamLimits

0xc2e1,	// (0x0000c2e1) control_pane_g8

0xee1d,	// (0x0000ee1d) dt_sta_controll_pane_ParamLimits

0xee2a,	// (0x0000ee2a) dt_sta_indi_pane_ParamLimits

0xee37,	// (0x0000ee37) dt_sta_title_pane_ParamLimits

0x0d56,	// (0x00000d56) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb5b4,	// (0x0000b5b4) popup_sk_window

0x3f58,	// (0x00003f58) bg_popup_sub_pane_cp28_ParamLimits

0x3f58,	// (0x00003f58) bg_popup_sub_pane_cp28

0x9f39,	// (0x00009f39) popup_discreet_window_g1_ParamLimits

0x9f39,	// (0x00009f39) popup_discreet_window_g1

0x9f59,	// (0x00009f59) popup_discreet_window_t1_ParamLimits

0x9f59,	// (0x00009f59) popup_discreet_window_t1

0x9f77,	// (0x00009f77) popup_discreet_window_t2_ParamLimits

0x9f77,	// (0x00009f77) popup_discreet_window_t2

0x0002,

0xb404,	// (0x0000b404) popup_discreet_window_t_ParamLimits

0xb404,	// (0x0000b404) popup_discreet_window_t

0x9fc9,	// (0x00009fc9) popup_sk_window_g1

0x9fd3,	// (0x00009fd3) popup_sk_window_g2

0x0001,

0xb40b,	// (0x0000b40b) popup_sk_window_g

0x9fdd,	// (0x00009fdd) popup_sk_window_t1

0x9feb,	// (0x00009feb) popup_sk_window_t1_copy1

0x9b65,	// (0x00009b65) cell_ai5_widget_pane_g2_ParamLimits

0x9cbe,	// (0x00009cbe) cell_ai5_widget_pane_t9_ParamLimits

0x9cbe,	// (0x00009cbe) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xee63,	// (0x0000ee63) aid_fshwr2_btn_pane

0xee74,	// (0x0000ee74) aid_fshwr2_syb_pane

0xee85,	// (0x0000ee85) aid_fshwr2_txt_pane

0xee91,	// (0x0000ee91) fshwr2_func_candi_pane

0xeeb0,	// (0x0000eeb0) fshwr2_hwr_syb_pane

0xeecb,	// (0x0000eecb) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xa07a,	// (0x0000a07a) fshwr2_icf_pane_t1_ParamLimits

0xa07a,	// (0x0000a07a) fshwr2_icf_pane_t1

0x1d58,	// (0x00001d58) fshwr2_func_candi_pane_g1

0xeefb,	// (0x0000eefb) fshwr2_func_candi_row_pane_ParamLimits

0xeefb,	// (0x0000eefb) fshwr2_func_candi_row_pane

0xef13,	// (0x0000ef13) cell_fshwr2_syb_pane_ParamLimits

0xef13,	// (0x0000ef13) cell_fshwr2_syb_pane

0x6a78,	// (0x00006a78) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6a78,	// (0x00006a78) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xef2d,	// (0x0000ef2d) fshwr2_func_candi_cell_pane_ParamLimits

0xef2d,	// (0x0000ef2d) fshwr2_func_candi_cell_pane

0xa0e7,	// (0x0000a0e7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa0e7,	// (0x0000a0e7) fshwr2_func_candi_cell_bg_pane

0xef58,	// (0x0000ef58) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xef58,	// (0x0000ef58) fshwr2_func_candi_cell_pane_g1

0xa11b,	// (0x0000a11b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa11b,	// (0x0000a11b) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x2607,	// (0x00002607) cell_fshwr2_syb_bg_pane

0xef80,	// (0x0000ef80) cell_fshwr2_syb_bg_pane_g1

0xef88,	// (0x0000ef88) cell_fshwr2_syb_bg_pane_t1

0x1399,	// (0x00001399) main_tmo_pane

0xd0ff,	// (0x0000d0ff) uni_indicator_pane_g1_ParamLimits

0xd116,	// (0x0000d116) uni_indicator_pane_g2_ParamLimits

0xd12c,	// (0x0000d12c) uni_indicator_pane_g3_ParamLimits

0x4c07,	// (0x00004c07) uni_indicator_pane_g4_ParamLimits

0x4c07,	// (0x00004c07) uni_indicator_pane_g4

0x4c1b,	// (0x00004c1b) uni_indicator_pane_g5_ParamLimits

0x4c1b,	// (0x00004c1b) uni_indicator_pane_g5

0x4c1b,	// (0x00004c1b) uni_indicator_pane_g6_ParamLimits

0x4c1b,	// (0x00004c1b) uni_indicator_pane_g6

0xf3c5,	// (0x0000f3c5) uni_indicator_pane_g_ParamLimits

0xddfb,	// (0x0000ddfb) popup_tmo_note_window_ParamLimits

0xddfb,	// (0x0000ddfb) popup_tmo_note_window

0x1399,	// (0x00001399) fshwr2_bg_pane

0xef71,	// (0x0000ef71) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xef71,	// (0x0000ef71) fshwr2_func_candi_cell_pane_g2

0x0001,

0xf512,	// (0x0000f512) fshwr2_func_candi_cell_pane_g_ParamLimits

0xf512,	// (0x0000f512) fshwr2_func_candi_cell_pane_g

0x65e6,	// (0x000065e6) bg_popup_window_pane_cp01

0xa145,	// (0x0000a145) bg_popup_window_pane_g1_cp01

0xa14e,	// (0x0000a14e) bg_popup_window_pane_cp22_ParamLimits

0xa14e,	// (0x0000a14e) bg_popup_window_pane_cp22

0xa15c,	// (0x0000a15c) listscroll_tmo_link_pane_ParamLimits

0xa15c,	// (0x0000a15c) listscroll_tmo_link_pane

0xa19c,	// (0x0000a19c) popup_tmo_note_window_g1_ParamLimits

0xa19c,	// (0x0000a19c) popup_tmo_note_window_g1

0xa1a9,	// (0x0000a1a9) tmo_note_info_pane_ParamLimits

0xa1a9,	// (0x0000a1a9) tmo_note_info_pane

0xef97,	// (0x0000ef97) list_tmo_note_info_pane_g1_ParamLimits

0xef97,	// (0x0000ef97) list_tmo_note_info_pane_g1

0xa1da,	// (0x0000a1da) list_tmo_note_info_pane_g2_ParamLimits

0xa1da,	// (0x0000a1da) list_tmo_note_info_pane_g2

0x0001,

0xf517,	// (0x0000f517) list_tmo_note_info_pane_g_ParamLimits

0xf517,	// (0x0000f517) list_tmo_note_info_pane_g

0xa1f6,	// (0x0000a1f6) list_tmo_note_info_text_pane_ParamLimits

0xa1f6,	// (0x0000a1f6) list_tmo_note_info_text_pane

0xa277,	// (0x0000a277) list_tmo_link_pane

0xa284,	// (0x0000a284) scroll_pane_cp20

0xa291,	// (0x0000a291) list_single_tmo_link_pane_ParamLimits

0xa291,	// (0x0000a291) list_single_tmo_link_pane

0xa2a1,	// (0x0000a2a1) list_single_tmo_link_pane_t1

0xa2af,	// (0x0000a2af) list_tmo_note_info_text_pane_t1_ParamLimits

0xa2af,	// (0x0000a2af) list_tmo_note_info_text_pane_t1

0xbf1f,	// (0x0000bf1f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbf1f,	// (0x0000bf1f) aid_size_touch_scroll_bar_cp01

0xbe4f,	// (0x0000be4f) aid_size_touch_slider_marker

0xb5a4,	// (0x0000b5a4) popup_settings_window_ParamLimits

0xb5a4,	// (0x0000b5a4) popup_settings_window

0x2ba8,	// (0x00002ba8) popup_candi_list_indi_window

0x3185,	// (0x00003185) aid_touch_navi_pane_ParamLimits

0x840d,	// (0x0000840d) rs_clock_indi_pane

0x8416,	// (0x00008416) sctrl_sk_bottom_pane_ParamLimits

0x8427,	// (0x00008427) sctrl_sk_top_pane_ParamLimits

0x8c60,	// (0x00008c60) popup_fep_tooltip_window

0x9adb,	// (0x00009adb) aid_size_cell_widget_grid_ParamLimits

0x9b50,	// (0x00009b50) cell_ai5_widget_pane_g1_ParamLimits

0x9b50,	// (0x00009b50) cell_ai5_widget_pane_g1

0x9ba4,	// (0x00009ba4) cell_ai5_widget_pane_g6_ParamLimits

0x9bb0,	// (0x00009bb0) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb393,	// (0x0000b393) cell_ai5_widget_pane_g_ParamLimits

0xb393,	// (0x0000b393) cell_ai5_widget_pane_g

0x9ce2,	// (0x00009ce2) cell_ai5_widget_pane_t10_ParamLimits

0x9ce2,	// (0x00009ce2) cell_ai5_widget_pane_t10

0x9d00,	// (0x00009d00) grid_ai5_widget_pane_ParamLimits

0x9da2,	// (0x00009da2) cell_contacts_ai5_widget_pane_ParamLimits

0x9da2,	// (0x00009da2) cell_contacts_ai5_widget_pane

0x9f8c,	// (0x00009f8c) popup_discreet_window_t3_ParamLimits

0x9f8c,	// (0x00009f8c) popup_discreet_window_t3

0xeee3,	// (0x0000eee3) popup_fshwr2_char_preview_window_ParamLimits

0xeee3,	// (0x0000eee3) popup_fshwr2_char_preview_window

0xefae,	// (0x0000efae) tmo_note_info_pane_t1

0xefc3,	// (0x0000efc3) tmo_note_info_pane_t2

0xefda,	// (0x0000efda) tmo_note_info_pane_t3

0xa253,	// (0x0000a253) tmo_note_info_pane_t4

0xa265,	// (0x0000a265) tmo_note_info_pane_t5

0x0004,

0xf51c,	// (0x0000f51c) tmo_note_info_pane_t

0xa277,	// (0x0000a277) list_tmo_link_pane_ParamLimits

0xa284,	// (0x0000a284) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa2c8,	// (0x0000a2c8) popup_fshwr2_char_preview_window_t1

0xa2d6,	// (0x0000a2d6) popup_candi_list_indi_window_g1

0xa2df,	// (0x0000a2df) bg_cell_contacts_ai5_widget_pane

0xa2eb,	// (0x0000a2eb) cell_contacts_ai5_widget_pane_g1

0x70f1,	// (0x000070f1) cell_contacts_ai5_widget_pane_g2

0xa2fe,	// (0x0000a2fe) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb425,	// (0x0000b425) cell_contacts_ai5_widget_pane_g

0xa310,	// (0x0000a310) cell_contacts_ai5_widget_pane_t1

0x1399,	// (0x00001399) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf054,	// (0x0000f054) settings_container_pane

0x2607,	// (0x00002607) listscroll_set_pane_copy1

0x59eb,	// (0x000059eb) scroll_pane_cp121_copy1

0xa393,	// (0x0000a393) set_content_pane_copy1

0xf060,	// (0x0000f060) aid_height_set_list_copy1_ParamLimits

0xf060,	// (0x0000f060) aid_height_set_list_copy1

0x4f03,	// (0x00004f03) aid_size_parent_copy1_ParamLimits

0x4f03,	// (0x00004f03) aid_size_parent_copy1

0xf06c,	// (0x0000f06c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf06c,	// (0x0000f06c) button_value_adjust_pane_cp6_copy1

0x2b80,	// (0x00002b80) list_highlight_pane_cp2_copy1_ParamLimits

0x2b80,	// (0x00002b80) list_highlight_pane_cp2_copy1

0xf080,	// (0x0000f080) list_set_pane_copy1_ParamLimits

0xf080,	// (0x0000f080) list_set_pane_copy1

0xefef,	// (0x0000efef) main_pane_set_t1_copy1_ParamLimits

0xefef,	// (0x0000efef) main_pane_set_t1_copy1

0xf029,	// (0x0000f029) main_pane_set_t2_copy1_ParamLimits

0xf029,	// (0x0000f029) main_pane_set_t2_copy1

0xf12d,	// (0x0000f12d) main_pane_set_t3_copy1

0xf13b,	// (0x0000f13b) main_pane_set_t4_copy1

0xf048,	// (0x0000f048) set_content_pane_g1_copy1_ParamLimits

0xf048,	// (0x0000f048) set_content_pane_g1_copy1

0xf149,	// (0x0000f149) setting_code_pane_copy1

0xa48c,	// (0x0000a48c) setting_slider_graphic_pane_copy1

0xa48c,	// (0x0000a48c) setting_slider_pane_copy1

0xa48c,	// (0x0000a48c) setting_text_pane_copy1

0xa48c,	// (0x0000a48c) setting_volume_pane_copy1

0xf149,	// (0x0000f149) settings_code_pane_cp2_copy1

0xf151,	// (0x0000f151) settings_code_pane_cp_copy1_ParamLimits

0xf151,	// (0x0000f151) settings_code_pane_cp_copy1

0xf165,	// (0x0000f165) volume_set_pane_copy1

0xf16d,	// (0x0000f16d) volume_set_pane_g10_copy1

0xf175,	// (0x0000f175) volume_set_pane_g1_copy1

0xf17d,	// (0x0000f17d) volume_set_pane_g2_copy1

0xf185,	// (0x0000f185) volume_set_pane_g3_copy1

0xf18d,	// (0x0000f18d) volume_set_pane_g4_copy1

0xf195,	// (0x0000f195) volume_set_pane_g5_copy1

0xf19d,	// (0x0000f19d) volume_set_pane_g6_copy1

0xf1a5,	// (0x0000f1a5) volume_set_pane_g7_copy1

0xf1ad,	// (0x0000f1ad) volume_set_pane_g8_copy1

0xf1b5,	// (0x0000f1b5) volume_set_pane_g9_copy1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1_ParamLimits

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1

0xa500,	// (0x0000a500) setting_slider_pane_t1_copy1_ParamLimits

0xa500,	// (0x0000a500) setting_slider_pane_t1_copy1

0xf1bd,	// (0x0000f1bd) setting_slider_pane_t2_copy1_ParamLimits

0xf1bd,	// (0x0000f1bd) setting_slider_pane_t2_copy1

0xf1d7,	// (0x0000f1d7) setting_slider_pane_t3_copy1_ParamLimits

0xf1d7,	// (0x0000f1d7) setting_slider_pane_t3_copy1

0xf1ef,	// (0x0000f1ef) slider_set_pane_copy1_ParamLimits

0xf1ef,	// (0x0000f1ef) slider_set_pane_copy1

0x14c2,	// (0x000014c2) set_opt_bg_pane_g1_copy2

0x14ca,	// (0x000014ca) set_opt_bg_pane_g2_copy2

0xa566,	// (0x0000a566) set_opt_bg_pane_g3_copy2

0x14da,	// (0x000014da) set_opt_bg_pane_g4_copy2

0x14e2,	// (0x000014e2) set_opt_bg_pane_g5_copy2

0x14ea,	// (0x000014ea) set_opt_bg_pane_g6_copy2

0xf205,	// (0x0000f205) set_opt_bg_pane_g7_copy2

0xa578,	// (0x0000a578) set_opt_bg_pane_g8_copy2

0xa582,	// (0x0000a582) set_opt_bg_pane_g9_copy2

0xa58c,	// (0x0000a58c) aid_size_touch_slider_mark_copy1_ParamLimits

0xa58c,	// (0x0000a58c) aid_size_touch_slider_mark_copy1

0xa5a0,	// (0x0000a5a0) slider_set_pane_g1_copy1

0xa5a9,	// (0x0000a5a9) slider_set_pane_g2_copy1

0x4e6c,	// (0x00004e6c) slider_set_pane_g3_copy1_ParamLimits

0x4e6c,	// (0x00004e6c) slider_set_pane_g3_copy1

0x4e80,	// (0x00004e80) slider_set_pane_g4_copy1_ParamLimits

0x4e80,	// (0x00004e80) slider_set_pane_g4_copy1

0x4e98,	// (0x00004e98) slider_set_pane_g5_copy1_ParamLimits

0x4e98,	// (0x00004e98) slider_set_pane_g5_copy1

0x4e6c,	// (0x00004e6c) slider_set_pane_g6_copy1_ParamLimits

0x4e6c,	// (0x00004e6c) slider_set_pane_g6_copy1

0xf20d,	// (0x0000f20d) slider_set_pane_g7_copy1_ParamLimits

0xf20d,	// (0x0000f20d) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa5c7,	// (0x0000a5c7) setting_slider_graphic_pane_g1_copy1

0xf223,	// (0x0000f223) setting_slider_graphic_pane_t1_copy1

0xf233,	// (0x0000f233) setting_slider_graphic_pane_t2_copy1

0xf243,	// (0x0000f243) slider_set_pane_cp_copy1

0xa600,	// (0x0000a600) input_focus_pane_cp1_copy1

0xa609,	// (0x0000a609) list_set_text_pane_copy1

0xa611,	// (0x0000a611) setting_text_pane_g1_copy1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1

0xa600,	// (0x0000a600) input_focus_pane_cp2_copy1

0xa611,	// (0x0000a611) setting_code_pane_g1_copy1

0xf24b,	// (0x0000f24b) setting_code_pane_t1_copy1

0x5816,	// (0x00005816) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xc18c,	// (0x0000c18c) list_set_graphic_pane_g1_copy1_ParamLimits

0xc18c,	// (0x0000c18c) list_set_graphic_pane_g1_copy1

0xf259,	// (0x0000f259) list_set_graphic_pane_g2_copy1

0xc1a4,	// (0x0000c1a4) list_set_graphic_pane_t1_copy1_ParamLimits

0xc1a4,	// (0x0000c1a4) list_set_graphic_pane_t1_copy1

0x65e6,	// (0x000065e6) rs_clock_indi_pane_g1

0xa642,	// (0x0000a642) rs_clock_indi_pane_t1

0xa650,	// (0x0000a650) rs_indi_pane

0xa658,	// (0x0000a658) rs_indi_pane_g1

0xa661,	// (0x0000a661) rs_indi_pane_g2

0xa66a,	// (0x0000a66a) rs_indi_pane_g3

0x0002,

0xb42c,	// (0x0000b42c) rs_indi_pane_g

0x2607,	// (0x00002607) bg_popup_preview_window_pane_cp03

0xa673,	// (0x0000a673) popup_fep_tooltip_window_t1

0x77ef,	// (0x000077ef) popup_note2_window_g2_ParamLimits

0x77ef,	// (0x000077ef) popup_note2_window_g2

0x0001,

0xb1c5,	// (0x0000b1c5) popup_note2_window_g_ParamLimits

0xb1c5,	// (0x0000b1c5) popup_note2_window_g

0x7de5,	// (0x00007de5) bg_popup_sub_pane_cp11_ParamLimits

0x7df2,	// (0x00007df2) cell_ai3_links_pane_g1_ParamLimits

0x7e09,	// (0x00007e09) cell_ai3_links_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1_ParamLimits

0x2518,	// (0x00002518) cell_graphic_popup_pane_cp2_ParamLimits

0x2518,	// (0x00002518) cell_graphic_popup_pane_cp2

0xa681,	// (0x0000a681) cell_graphic_popup_pane_g1_cp2

0x0b69,	// (0x00000b69) cell_graphic_popup_pane_g2_cp2

0xa689,	// (0x0000a689) cell_graphic_popup_pane_g3_cp2

0xa691,	// (0x0000a691) cell_graphic_popup_pane_t2_cp2

0x0b7a,	// (0x00000b7a) grid_highlight_pane_cp3_cp2

0x1a3d,	// (0x00001a3d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1399,	// (0x00001399) main_tmo_pane_ParamLimits

0xddef,	// (0x0000ddef) popup_tmo_big_image_note_window

0x9b3f,	// (0x00009b3f) cell_ai5_widget_list_pane

0x9b47,	// (0x00009b47) cell_ai5_widget_lrg_icon_pane

0xefae,	// (0x0000efae) tmo_note_info_pane_t1_ParamLimits

0xefc3,	// (0x0000efc3) tmo_note_info_pane_t2_ParamLimits

0xefda,	// (0x0000efda) tmo_note_info_pane_t3_ParamLimits

0xa253,	// (0x0000a253) tmo_note_info_pane_t4_ParamLimits

0xa265,	// (0x0000a265) tmo_note_info_pane_t5_ParamLimits

0xf51c,	// (0x0000f51c) tmo_note_info_pane_t_ParamLimits

0xf054,	// (0x0000f054) settings_container_pane_ParamLimits

0xa5f8,	// (0x0000a5f8) indicator_popup_pane_cp5

0xa5f8,	// (0x0000a5f8) indicator_popup_pane_cp6

0x5816,	// (0x00005816) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa69f,	// (0x0000a69f) popup_tmo_big_image_note_window_g1

0xa6a9,	// (0x0000a6a9) popup_tmo_big_image_note_window_t1

0xa6b9,	// (0x0000a6b9) popup_tmo_big_image_note_window_t2

0xa6c9,	// (0x0000a6c9) popup_tmo_big_image_note_window_t3

0x0002,

0xb433,	// (0x0000b433) popup_tmo_big_image_note_window_t

0x65e6,	// (0x000065e6) cell_ai5_widget_lrg_icon_pane_g1

0xa6d9,	// (0x0000a6d9) cell_ai5_widget_lrg_icon_pane_t1

0xa6e7,	// (0x0000a6e7) cell_ai5_widget_list_row_pane_ParamLimits

0xa6e7,	// (0x0000a6e7) cell_ai5_widget_list_row_pane

0xa700,	// (0x0000a700) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa700,	// (0x0000a700) cell_ai5_widget_list_row_pane_g1

0xa70d,	// (0x0000a70d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa70d,	// (0x0000a70d) cell_ai5_widget_list_row_pane_t1

0xa73e,	// (0x0000a73e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa73e,	// (0x0000a73e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb43a,	// (0x0000b43a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb43a,	// (0x0000b43a) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa775,	// (0x0000a775) popup_fep_char_pre_window

0xa77d,	// (0x0000a77d) popup_fep_ituss_window

0xa79e,	// (0x0000a79e) popup_fep_vkbss_window

0xa7bd,	// (0x0000a7bd) grid_vkbss_keypad_pane_ParamLimits

0xa7bd,	// (0x0000a7bd) grid_vkbss_keypad_pane

0xa7cd,	// (0x0000a7cd) ituss_keypad_pane

0xa7e9,	// (0x0000a7e9) aid_vkbss_key_offset_ParamLimits

0xa7e9,	// (0x0000a7e9) aid_vkbss_key_offset

0xa7f5,	// (0x0000a7f5) cell_vkbss_key_pane_ParamLimits

0xa7f5,	// (0x0000a7f5) cell_vkbss_key_pane

0xa80b,	// (0x0000a80b) bg_cell_vkbss_key_g1_ParamLimits

0xa80b,	// (0x0000a80b) bg_cell_vkbss_key_g1

0xa817,	// (0x0000a817) cell_vkbss_key_3p_pane_ParamLimits

0xa817,	// (0x0000a817) cell_vkbss_key_3p_pane

0xa831,	// (0x0000a831) cell_vkbss_key_g1_ParamLimits

0xa831,	// (0x0000a831) cell_vkbss_key_g1

0xa84b,	// (0x0000a84b) cell_vkbss_key_t1_ParamLimits

0xa84b,	// (0x0000a84b) cell_vkbss_key_t1

0xa876,	// (0x0000a876) cell_ituss_key_pane_ParamLimits

0xa876,	// (0x0000a876) cell_ituss_key_pane

0xa887,	// (0x0000a887) bg_cell_ituss_key_g1_ParamLimits

0xa887,	// (0x0000a887) bg_cell_ituss_key_g1

0xa893,	// (0x0000a893) cell_ituss_key_pane_g1_ParamLimits

0xa893,	// (0x0000a893) cell_ituss_key_pane_g1

0xa8ad,	// (0x0000a8ad) cell_ituss_key_pane_g2_ParamLimits

0xa8ad,	// (0x0000a8ad) cell_ituss_key_pane_g2

0x0001,

0xb441,	// (0x0000b441) cell_ituss_key_pane_g_ParamLimits

0xb441,	// (0x0000b441) cell_ituss_key_pane_g

0xa8db,	// (0x0000a8db) cell_ituss_key_t1_ParamLimits

0xa8db,	// (0x0000a8db) cell_ituss_key_t1

0xa915,	// (0x0000a915) cell_ituss_key_t2_ParamLimits

0xa915,	// (0x0000a915) cell_ituss_key_t2

0xa946,	// (0x0000a946) cell_ituss_key_t3_ParamLimits

0xa946,	// (0x0000a946) cell_ituss_key_t3

0xa980,	// (0x0000a980) cell_ituss_key_t4_ParamLimits

0xa980,	// (0x0000a980) cell_ituss_key_t4

0x0003,

0xb446,	// (0x0000b446) cell_ituss_key_t_ParamLimits

0xb446,	// (0x0000b446) cell_ituss_key_t

0xa9ba,	// (0x0000a9ba) cell_vkbss_key_3p_pane_g1

0xa9c2,	// (0x0000a9c2) cell_vkbss_key_3p_pane_g2

0xa9ca,	// (0x0000a9ca) cell_vkbss_key_3p_pane_g3

0x0002,

0xb44f,	// (0x0000b44f) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa9d2,	// (0x0000a9d2) popup_fep_char_pre_window_t1

0xeded,	// (0x0000eded) main_ai5_sk_pane

0xa2df,	// (0x0000a2df) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa2eb,	// (0x0000a2eb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x70f1,	// (0x000070f1) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa2fe,	// (0x0000a2fe) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb425,	// (0x0000b425) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa310,	// (0x0000a310) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1399,	// (0x00001399) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf261,	// (0x0000f261) main_ai5_sk_pane_g1

0x3d91,	// (0x00003d91) popup_query_code_window_g1

0xa793,	// (0x0000a793) popup_fep_vkb_icf_pane

0xa7a7,	// (0x0000a7a7) popup_fep_vtchi_icf_pane

0x1399,	// (0x00001399) bg_icf_pane

0xa9ea,	// (0x0000a9ea) list_vkb_icf_pane

0x1399,	// (0x00001399) bg_icf_pane_cp01

0xa9f6,	// (0x0000a9f6) vtchi_icf_list_pane

0xaa07,	// (0x0000aa07) list_vkb_icf_pane_t1_ParamLimits

0xaa07,	// (0x0000aa07) list_vkb_icf_pane_t1

0xaa1d,	// (0x0000aa1d) vtchi_icf_list_pane_t1_ParamLimits

0xaa1d,	// (0x0000aa1d) vtchi_icf_list_pane_t1

0xa77d,	// (0x0000a77d) popup_fep_ituss_window_ParamLimits

0xa7a7,	// (0x0000a7a7) popup_fep_vtchi_icf_pane_ParamLimits

0xa7cd,	// (0x0000a7cd) ituss_keypad_pane_ParamLimits

0xa7dd,	// (0x0000a7dd) ituss_sks_pane

0x1399,	// (0x00001399) bg_icf_pane_ParamLimits

0xa766,	// (0x0000a766) icf_edit_indi_pane_ParamLimits

0xa766,	// (0x0000a766) icf_edit_indi_pane

0xa9ea,	// (0x0000a9ea) list_vkb_icf_pane_ParamLimits

0x1399,	// (0x00001399) bg_icf_pane_cp01_ParamLimits

0xa766,	// (0x0000a766) icf_edit_indi_pane_cp01_ParamLimits

0xa766,	// (0x0000a766) icf_edit_indi_pane_cp01

0xa9fe,	// (0x0000a9fe) vtchi_query_pane

0x6a78,	// (0x00006a78) icf_edit_indi_pane_g1_ParamLimits

0x6a78,	// (0x00006a78) icf_edit_indi_pane_g1

0xaaa1,	// (0x0000aaa1) icf_edit_indi_pane_g2_ParamLimits

0xaaa1,	// (0x0000aaa1) icf_edit_indi_pane_g2

0x0001,

0xb467,	// (0x0000b467) icf_edit_indi_pane_g_ParamLimits

0xb467,	// (0x0000b467) icf_edit_indi_pane_g

0xaab0,	// (0x0000aab0) icf_edit_indi_pane_t1

0xaa37,	// (0x0000aa37) bg_input_focus_pane_cp042

0x0d4d,	// (0x00000d4d) vtchi_button_pane

0xaa40,	// (0x0000aa40) vtchi_query_pane_t1

0xaa4e,	// (0x0000aa4e) vtchi_query_pane_t2

0xaa5c,	// (0x0000aa5c) vtchi_query_pane_t3

0x0002,

0xb456,	// (0x0000b456) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xaa6a,	// (0x0000aa6a) vtchi_button_pane_g1

0xaa72,	// (0x0000aa72) ituss_sks_pane_g1

0xaa7d,	// (0x0000aa7d) ituss_sks_pane_g2

0x0001,

0xb45d,	// (0x0000b45d) ituss_sks_pane_g

0xaa85,	// (0x0000aa85) ituss_sks_pane_t1

0xaa93,	// (0x0000aa93) ituss_sks_pane_t2

0x0001,

0xb462,	// (0x0000b462) ituss_sks_pane_t

0x5fbd,	// (0x00005fbd) indicator_nsta_pane_cp_g1

0x5fc6,	// (0x00005fc6) indicator_nsta_pane_cp_g2

0x5fce,	// (0x00005fce) indicator_nsta_pane_cp_g3

0x5fd6,	// (0x00005fd6) indicator_nsta_pane_cp_g4

0x5fd6,	// (0x00005fd6) indicator_nsta_pane_cp_g5

0x5fd6,	// (0x00005fd6) indicator_nsta_pane_cp_g6

0x0005,

0xb00f,	// (0x0000b00f) indicator_nsta_pane_cp_g

0xeb93,	// (0x0000eb93) cell_graphic2_pane_t2_ParamLimits

0xeb93,	// (0x0000eb93) cell_graphic2_pane_t2

0x0001,

0xf4e7,	// (0x0000f4e7) cell_graphic2_pane_t_ParamLimits

0xf4e7,	// (0x0000f4e7) cell_graphic2_pane_t

0xebc9,	// (0x0000ebc9) cell_graphic2_control_pane_t1

0xc0cf,	// (0x0000c0cf) signal_pane_g3_ParamLimits

0xc0cf,	// (0x0000c0cf) signal_pane_g3

0xc0e3,	// (0x0000c0e3) signal_pane_g4_ParamLimits

0xc0e3,	// (0x0000c0e3) signal_pane_g4

0xa750,	// (0x0000a750) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa750,	// (0x0000a750) cell_ai5_widget_list_row_pane_t3

0xa8c9,	// (0x0000a8c9) cell_ituss_key_pane_t1_ParamLimits

0xa8c9,	// (0x0000a8c9) cell_ituss_key_pane_t1

0x39a6,	// (0x000039a6) form_field_data_wide_pane_vc_t2_ParamLimits

0x39a6,	// (0x000039a6) form_field_data_wide_pane_vc_t2

0x39ba,	// (0x000039ba) form_field_data_wide_pane_vc_t3_ParamLimits

0x39ba,	// (0x000039ba) form_field_data_wide_pane_vc_t3

0x0002,

0xad6d,	// (0x0000ad6d) form_field_data_wide_pane_vc_t_ParamLimits

0xad6d,	// (0x0000ad6d) form_field_data_wide_pane_vc_t

0x5c75,	// (0x00005c75) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5c75,	// (0x00005c75) form_field_slider_wide_pane_vc_t3

0x5d53,	// (0x00005d53) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5d53,	// (0x00005d53) form_field_popup_wide_pane_vc_t2

0x5d6a,	// (0x00005d6a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5d6a,	// (0x00005d6a) form_field_popup_wide_pane_vc_t3

0x0002,

0xaffe,	// (0x0000affe) form_field_popup_wide_pane_vc_t_ParamLimits

0xaffe,	// (0x0000affe) form_field_popup_wide_pane_vc_t

0xee63,	// (0x0000ee63) aid_fshwr2_btn_pane_ParamLimits

0xee74,	// (0x0000ee74) aid_fshwr2_syb_pane_ParamLimits

0xee85,	// (0x0000ee85) aid_fshwr2_txt_pane_ParamLimits

0x1399,	// (0x00001399) fshwr2_bg_pane_ParamLimits

0xee91,	// (0x0000ee91) fshwr2_func_candi_pane_ParamLimits

0xeeb0,	// (0x0000eeb0) fshwr2_hwr_syb_pane_ParamLimits

0xeecb,	// (0x0000eecb) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal

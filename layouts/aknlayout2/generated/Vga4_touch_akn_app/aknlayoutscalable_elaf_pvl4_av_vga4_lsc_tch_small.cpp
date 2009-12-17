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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001f77b };

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
0xba5d,	// (0x0002b1d8) Screen

0xba69,	// (0x0002b1e4) application_window_ParamLimits

0xba69,	// (0x0002b1e4) application_window

0x2a3c,	// (0x000221b7) screen_g1

0xbaa1,	// (0x0002b21c) area_bottom_pane_ParamLimits

0xbaa1,	// (0x0002b21c) area_bottom_pane

0x10a7,	// (0x00020822) area_top_pane_ParamLimits

0x10a7,	// (0x00020822) area_top_pane

0x113b,	// (0x000208b6) main_pane_ParamLimits

0x113b,	// (0x000208b6) main_pane

0x2a46,	// (0x000221c1) misc_graphics

0xd2c1,	// (0x0002ca3c) battery_pane_ParamLimits

0xd2c1,	// (0x0002ca3c) battery_pane

0x5728,	// (0x00024ea3) bg_status_flat_pane_g8

0x5730,	// (0x00024eab) bg_status_flat_pane_g9

0x4b0e,	// (0x00024289) context_pane_ParamLimits

0x4b0e,	// (0x00024289) context_pane

0xd46c,	// (0x0002cbe7) navi_pane_ParamLimits

0xd46c,	// (0x0002cbe7) navi_pane

0xd4f5,	// (0x0002cc70) signal_pane_ParamLimits

0xd4f5,	// (0x0002cc70) signal_pane

0x0008,

0xf8a8,	// (0x0002f023) bg_status_flat_pane_g

0xd585,	// (0x0002cd00) status_pane_g1_ParamLimits

0xd585,	// (0x0002cd00) status_pane_g1

0xd59b,	// (0x0002cd16) status_pane_g2_ParamLimits

0xd59b,	// (0x0002cd16) status_pane_g2

0x4d4e,	// (0x000244c9) status_pane_g3_ParamLimits

0x4d4e,	// (0x000244c9) status_pane_g3

0x0004,

0xf7db,	// (0x0002ef56) status_pane_g_ParamLimits

0xf7db,	// (0x0002ef56) status_pane_g

0xd5a7,	// (0x0002cd22) title_pane_ParamLimits

0xd5a7,	// (0x0002cd22) title_pane

0xd604,	// (0x0002cd7f) uni_indicator_pane_ParamLimits

0xd604,	// (0x0002cd7f) uni_indicator_pane

0x433b,	// (0x00023ab6) bg_list_pane_ParamLimits

0x433b,	// (0x00023ab6) bg_list_pane

0xb7c9,	// (0x0002af44) find_pane

0xcb1a,	// (0x0002c295) listscroll_app_pane_ParamLimits

0xcb1a,	// (0x0002c295) listscroll_app_pane

0x436f,	// (0x00023aea) listscroll_form_pane

0xb7d1,	// (0x0002af4c) listscroll_gen_pane_ParamLimits

0xb7d1,	// (0x0002af4c) listscroll_gen_pane

0x436f,	// (0x00023aea) listscroll_set_pane

0x62e1,	// (0x00025a5c) main_idle_act_pane

0x4017,	// (0x00023792) main_idle_trad_pane

0x4017,	// (0x00023792) main_list_empty_pane

0x439d,	// (0x00023b18) main_midp_pane

0x43a9,	// (0x00023b24) main_pane_g1_ParamLimits

0x43a9,	// (0x00023b24) main_pane_g1

0xcb26,	// (0x0002c2a1) popup_ai_message_window_ParamLimits

0xcb26,	// (0x0002c2a1) popup_ai_message_window

0xcbc6,	// (0x0002c341) popup_fep_china_uni_window_ParamLimits

0xcbc6,	// (0x0002c341) popup_fep_china_uni_window

0x44c7,	// (0x00023c42) popup_fep_japan_candidate_window_ParamLimits

0x44c7,	// (0x00023c42) popup_fep_japan_candidate_window

0x44f1,	// (0x00023c6c) popup_fep_japan_predictive_window_ParamLimits

0x44f1,	// (0x00023c6c) popup_fep_japan_predictive_window

0xcc26,	// (0x0002c3a1) popup_find_window

0xcc43,	// (0x0002c3be) popup_grid_graphic_window_ParamLimits

0xcc43,	// (0x0002c3be) popup_grid_graphic_window

0x4562,	// (0x00023cdd) popup_large_graphic_colour_window

0xcce7,	// (0x0002c462) popup_menu_window_ParamLimits

0xcce7,	// (0x0002c462) popup_menu_window

0xced3,	// (0x0002c64e) popup_note_image_window

0xce93,	// (0x0002c60e) popup_note_wait_window_ParamLimits

0xce93,	// (0x0002c60e) popup_note_wait_window

0xceeb,	// (0x0002c666) popup_note_window_ParamLimits

0xceeb,	// (0x0002c666) popup_note_window

0xcf99,	// (0x0002c714) popup_query_code_window_ParamLimits

0xcf99,	// (0x0002c714) popup_query_code_window

0x47ce,	// (0x00023f49) popup_query_data_code_window_ParamLimits

0x47ce,	// (0x00023f49) popup_query_data_code_window

0xcfd9,	// (0x0002c754) popup_query_data_window_ParamLimits

0xcfd9,	// (0x0002c754) popup_query_data_window

0xd06d,	// (0x0002c7e8) popup_query_sat_info_window_ParamLimits

0xd06d,	// (0x0002c7e8) popup_query_sat_info_window

0xd118,	// (0x0002c893) popup_snote_single_graphic_window_ParamLimits

0xd118,	// (0x0002c893) popup_snote_single_graphic_window

0xd118,	// (0x0002c893) popup_snote_single_text_window_ParamLimits

0xd118,	// (0x0002c893) popup_snote_single_text_window

0x4869,	// (0x00023fe4) popup_sub_window_general

0x49af,	// (0x0002412a) popup_window_general_ParamLimits

0x49af,	// (0x0002412a) popup_window_general

0x49c8,	// (0x00024143) power_save_pane

0xbfe7,	// (0x0002b762) control_pane_g1_ParamLimits

0xbfe7,	// (0x0002b762) control_pane_g1

0x18db,	// (0x00021056) control_pane_g2_ParamLimits

0x18db,	// (0x00021056) control_pane_g2

0x42e4,	// (0x00023a5f) control_pane_g3_ParamLimits

0x42e4,	// (0x00023a5f) control_pane_g3

0x0007,

0xf7c3,	// (0x0002ef3e) control_pane_g_ParamLimits

0xf7c3,	// (0x0002ef3e) control_pane_g

0xc01e,	// (0x0002b799) control_pane_t1_ParamLimits

0xc01e,	// (0x0002b799) control_pane_t1

0xc07c,	// (0x0002b7f7) control_pane_t2_ParamLimits

0xc07c,	// (0x0002b7f7) control_pane_t2

0x0002,

0xf7d4,	// (0x0002ef4f) control_pane_t_ParamLimits

0xf7d4,	// (0x0002ef4f) control_pane_t

0x4205,	// (0x00023980) navi_navi_volume_pane_cp1

0x420e,	// (0x00023989) status_small_icon_pane

0x4216,	// (0x00023991) status_small_pane_g1_ParamLimits

0x4216,	// (0x00023991) status_small_pane_g1

0x424a,	// (0x000239c5) status_small_pane_g2_ParamLimits

0x424a,	// (0x000239c5) status_small_pane_g2

0x4256,	// (0x000239d1) status_small_pane_g3_ParamLimits

0x4256,	// (0x000239d1) status_small_pane_g3

0x4262,	// (0x000239dd) status_small_pane_g4_ParamLimits

0x4262,	// (0x000239dd) status_small_pane_g4

0x426e,	// (0x000239e9) status_small_pane_g5_ParamLimits

0x426e,	// (0x000239e9) status_small_pane_g5

0x427d,	// (0x000239f8) status_small_pane_g6_ParamLimits

0x427d,	// (0x000239f8) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0002ef2d) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0002ef2d) status_small_pane_g

0x42ad,	// (0x00023a28) status_small_pane_t1

0x42d0,	// (0x00023a4b) status_small_wait_pane_ParamLimits

0x42d0,	// (0x00023a4b) status_small_wait_pane

0xc95e,	// (0x0002c0d9) aid_levels_signal_ParamLimits

0xc95e,	// (0x0002c0d9) aid_levels_signal

0xc976,	// (0x0002c0f1) signal_pane_g1_ParamLimits

0xc976,	// (0x0002c0f1) signal_pane_g1

0xc991,	// (0x0002c10c) signal_pane_g2_ParamLimits

0xc991,	// (0x0002c10c) signal_pane_g2

0x0001,

0xf747,	// (0x0002eec2) signal_pane_g_ParamLimits

0xf747,	// (0x0002eec2) signal_pane_g

0x3ade,	// (0x00023259) context_pane_g1

0xbc1e,	// (0x0002b399) title_pane_g1

0xbc53,	// (0x0002b3ce) title_pane_t1

0x2aee,	// (0x00022269) title_pane_t2

0x2b14,	// (0x0002228f) title_pane_t3

0x0002,

0xf59b,	// (0x0002ed16) title_pane_t

0xd62c,	// (0x0002cda7) aid_levels_battery_ParamLimits

0xd62c,	// (0x0002cda7) aid_levels_battery

0xd648,	// (0x0002cdc3) battery_pane_g1_ParamLimits

0xd648,	// (0x0002cdc3) battery_pane_g1

0xd665,	// (0x0002cde0) battery_pane_g2_ParamLimits

0xd665,	// (0x0002cde0) battery_pane_g2

0x0001,

0xf7e6,	// (0x0002ef61) battery_pane_g_ParamLimits

0xf7e6,	// (0x0002ef61) battery_pane_g

0xd888,	// (0x0002d003) uni_indicator_pane_g1

0xd89d,	// (0x0002d018) uni_indicator_pane_g2

0xd8b2,	// (0x0002d02d) uni_indicator_pane_g3

0x0005,

0xf950,	// (0x0002f0cb) uni_indicator_pane_g

0x3e85,	// (0x00023600) navi_icon_pane_ParamLimits

0x3e85,	// (0x00023600) navi_icon_pane

0x3dcc,	// (0x00023547) navi_midp_pane

0x3ea1,	// (0x0002361c) navi_navi_pane

0x3eab,	// (0x00023626) navi_text_pane_ParamLimits

0x3eab,	// (0x00023626) navi_text_pane

0x2a3c,	// (0x000221b7) status_small_wait_pane_g1

0x2f58,	// (0x000226d3) status_small_wait_pane_g2

0x0001,

0xf94b,	// (0x0002f0c6) status_small_wait_pane_g

0xd827,	// (0x0002cfa2) navi_navi_icon_text_pane

0xd82f,	// (0x0002cfaa) navi_navi_pane_g1_ParamLimits

0xd82f,	// (0x0002cfaa) navi_navi_pane_g1

0xd841,	// (0x0002cfbc) navi_navi_pane_g2_ParamLimits

0xd841,	// (0x0002cfbc) navi_navi_pane_g2

0x0001,

0xf919,	// (0x0002f094) navi_navi_pane_g_ParamLimits

0xf919,	// (0x0002f094) navi_navi_pane_g

0x5db7,	// (0x00025532) navi_navi_tabs_pane

0xd853,	// (0x0002cfce) navi_navi_text_pane

0xd827,	// (0x0002cfa2) navi_navi_volume_pane

0xd815,	// (0x0002cf90) navi_text_pane_t1

0xd809,	// (0x0002cf84) navi_icon_pane_g1

0x5ca8,	// (0x00025423) navi_navi_text_pane_t1

0xc2e3,	// (0x0002ba5e) navi_navi_volume_pane_g1

0xc2eb,	// (0x0002ba66) volume_small_pane

0xd765,	// (0x0002cee0) navi_navi_icon_text_pane_g1

0xd76d,	// (0x0002cee8) navi_navi_icon_text_pane_t1

0x3ea1,	// (0x0002361c) navi_tabs_2_long_pane

0x3ea1,	// (0x0002361c) navi_tabs_2_pane

0x3ea1,	// (0x0002361c) navi_tabs_3_long_pane

0x3ea1,	// (0x0002361c) navi_tabs_3_pane

0x3ea1,	// (0x0002361c) navi_tabs_4_pane

0xc2c3,	// (0x0002ba3e) tabs_2_active_pane_ParamLimits

0xc2c3,	// (0x0002ba3e) tabs_2_active_pane

0xc2d3,	// (0x0002ba4e) tabs_2_passive_pane_ParamLimits

0xc2d3,	// (0x0002ba4e) tabs_2_passive_pane

0xc291,	// (0x0002ba0c) tabs_3_active_pane_ParamLimits

0xc291,	// (0x0002ba0c) tabs_3_active_pane

0xc2a1,	// (0x0002ba1c) tabs_3_passive_pane_ParamLimits

0xc2a1,	// (0x0002ba1c) tabs_3_passive_pane

0xc2b2,	// (0x0002ba2d) tabs_3_passive_pane_cp_ParamLimits

0xc2b2,	// (0x0002ba2d) tabs_3_passive_pane_cp

0xc24d,	// (0x0002b9c8) tabs_4_active_pane_ParamLimits

0xc24d,	// (0x0002b9c8) tabs_4_active_pane

0xc25e,	// (0x0002b9d9) tabs_4_passive_pane_ParamLimits

0xc25e,	// (0x0002b9d9) tabs_4_passive_pane

0xc26f,	// (0x0002b9ea) tabs_4_passive_pane_cp_ParamLimits

0xc26f,	// (0x0002b9ea) tabs_4_passive_pane_cp

0xc280,	// (0x0002b9fb) tabs_4_passive_pane_cp2_ParamLimits

0xc280,	// (0x0002b9fb) tabs_4_passive_pane_cp2

0xc229,	// (0x0002b9a4) tabs_2_long_active_pane_ParamLimits

0xc229,	// (0x0002b9a4) tabs_2_long_active_pane

0xc23b,	// (0x0002b9b6) tabs_2_long_passive_pane_ParamLimits

0xc23b,	// (0x0002b9b6) tabs_2_long_passive_pane

0xc1de,	// (0x0002b959) tabs_3_long_active_pane_ParamLimits

0xc1de,	// (0x0002b959) tabs_3_long_active_pane

0xc1f7,	// (0x0002b972) tabs_3_long_passive_pane_ParamLimits

0xc1f7,	// (0x0002b972) tabs_3_long_passive_pane

0xc210,	// (0x0002b98b) tabs_3_long_passive_pane_cp_ParamLimits

0xc210,	// (0x0002b98b) tabs_3_long_passive_pane_cp

0x1b29,	// (0x000212a4) volume_small_pane_g1

0xc18d,	// (0x0002b908) volume_small_pane_g2

0xc196,	// (0x0002b911) volume_small_pane_g3

0xc19f,	// (0x0002b91a) volume_small_pane_g4

0xc1a8,	// (0x0002b923) volume_small_pane_g5

0xc1b1,	// (0x0002b92c) volume_small_pane_g6

0xc1ba,	// (0x0002b935) volume_small_pane_g7

0xc1c3,	// (0x0002b93e) volume_small_pane_g8

0xc1cc,	// (0x0002b947) volume_small_pane_g9

0xc1d5,	// (0x0002b950) volume_small_pane_g10

0x0009,

0xf8e5,	// (0x0002f060) volume_small_pane_g

0x2da2,	// (0x0002251d) bg_active_tab_pane_cp2_ParamLimits

0x2da2,	// (0x0002251d) bg_active_tab_pane_cp2

0xbcdf,	// (0x0002b45a) tabs_3_active_pane_g1

0xbce7,	// (0x0002b462) tabs_3_active_pane_t1

0x2da2,	// (0x0002251d) bg_passive_tab_pane_cp2_ParamLimits

0x2da2,	// (0x0002251d) bg_passive_tab_pane_cp2

0xbcdf,	// (0x0002b45a) tabs_3_passive_pane_g1

0xbce7,	// (0x0002b462) tabs_3_passive_pane_t1

0x2da2,	// (0x0002251d) bg_active_tab_pane_cp3_ParamLimits

0x2da2,	// (0x0002251d) bg_active_tab_pane_cp3

0xbcf9,	// (0x0002b474) tabs_4_active_pane_g1

0xbd01,	// (0x0002b47c) tabs_4_active_pane_t1

0x2da2,	// (0x0002251d) bg_passive_tab_pane_cp3_ParamLimits

0x2da2,	// (0x0002251d) bg_passive_tab_pane_cp3

0xbcf9,	// (0x0002b474) tabs_4_1_passive_pane_g1

0xbd01,	// (0x0002b47c) tabs_4_1_passive_pane_t1

0x439d,	// (0x00023b18) list_highlight_pane_cp2

0xd970,	// (0x0002d0eb) list_set_pane_ParamLimits

0xd970,	// (0x0002d0eb) list_set_pane

0xda38,	// (0x0002d1b3) main_pane_set_t1_ParamLimits

0xda38,	// (0x0002d1b3) main_pane_set_t1

0xda58,	// (0x0002d1d3) main_pane_set_t2_ParamLimits

0xda58,	// (0x0002d1d3) main_pane_set_t2

0xda6c,	// (0x0002d1e7) main_pane_set_t3_ParamLimits

0xda6c,	// (0x0002d1e7) main_pane_set_t3

0xda80,	// (0x0002d1fb) main_pane_set_t4_ParamLimits

0xda80,	// (0x0002d1fb) main_pane_set_t4

0x0003,

0xf9b5,	// (0x0002f130) main_pane_set_t_ParamLimits

0xf9b5,	// (0x0002f130) main_pane_set_t

0xda94,	// (0x0002d20f) setting_code_pane

0x6441,	// (0x00025bbc) setting_slider_graphic_pane

0x6441,	// (0x00025bbc) setting_slider_pane

0x6441,	// (0x00025bbc) setting_text_pane

0x6441,	// (0x00025bbc) setting_volume_pane

0x1392,	// (0x00020b0d) volume_set_pane

0x2b26,	// (0x000222a1) bg_set_opt_pane_cp

0x139c,	// (0x00020b17) setting_slider_pane_t1

0x13b2,	// (0x00020b2d) setting_slider_pane_t2

0x13cc,	// (0x00020b47) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002ed1d) setting_slider_pane_t

0x13e4,	// (0x00020b5f) slider_set_pane

0x2a46,	// (0x000221c1) bg_set_opt_pane_cp2

0x2b68,	// (0x000222e3) setting_slider_graphic_pane_g1

0x13fa,	// (0x00020b75) setting_slider_graphic_pane_t1

0x140a,	// (0x00020b85) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0002ed24) setting_slider_graphic_pane_t

0x141a,	// (0x00020b95) slider_set_pane_cp

0x2a46,	// (0x000221c1) input_focus_pane_cp1

0x62c8,	// (0x00025a43) list_set_text_pane

0x2a3c,	// (0x000221b7) setting_text_pane_g1

0x2a46,	// (0x000221c1) input_focus_pane_cp2

0x2a3c,	// (0x000221b7) setting_code_pane_g1

0x2b71,	// (0x000222ec) setting_code_pane_t1

0xf56b,	// (0x0002ece6) set_text_pane_t1_ParamLimits

0xf56b,	// (0x0002ece6) set_text_pane_t1

0x3414,	// (0x00022b8f) set_opt_bg_pane_g1

0x341c,	// (0x00022b97) set_opt_bg_pane_g2

0x62a0,	// (0x00025a1b) set_opt_bg_pane_g3

0x342c,	// (0x00022ba7) set_opt_bg_pane_g4

0x3434,	// (0x00022baf) set_opt_bg_pane_g5

0x343c,	// (0x00022bb7) set_opt_bg_pane_g6

0x62aa,	// (0x00025a25) set_opt_bg_pane_g7

0x62b4,	// (0x00025a2f) set_opt_bg_pane_g8

0x62be,	// (0x00025a39) set_opt_bg_pane_g9

0x0008,

0xf9a2,	// (0x0002f11d) set_opt_bg_pane_g

0x6293,	// (0x00025a0e) slider_set_pane_g1

0x1d0d,	// (0x00021488) slider_set_pane_g2

0x0006,

0xf993,	// (0x0002f10e) slider_set_pane_g

0x1c95,	// (0x00021410) volume_set_pane_g1

0x1c9f,	// (0x0002141a) volume_set_pane_g2

0x1ca9,	// (0x00021424) volume_set_pane_g3

0x1cb3,	// (0x0002142e) volume_set_pane_g4

0x1cbd,	// (0x00021438) volume_set_pane_g5

0x1cc7,	// (0x00021442) volume_set_pane_g6

0x1cd1,	// (0x0002144c) volume_set_pane_g7

0x1cdb,	// (0x00021456) volume_set_pane_g8

0x1ce5,	// (0x00021460) volume_set_pane_g9

0x1cef,	// (0x0002146a) volume_set_pane_g10

0x0009,

0xf96b,	// (0x0002f0e6) volume_set_pane_g

0xbd13,	// (0x0002b48e) indicator_pane_ParamLimits

0xbd13,	// (0x0002b48e) indicator_pane

0xbd3f,	// (0x0002b4ba) main_idle_pane_g2_ParamLimits

0xbd3f,	// (0x0002b4ba) main_idle_pane_g2

0xbd77,	// (0x0002b4f2) main_pane_idle_g1_ParamLimits

0xbd77,	// (0x0002b4f2) main_pane_idle_g1

0x2bc1,	// (0x0002233c) popup_clock_digital_analogue_window_ParamLimits

0x2bc1,	// (0x0002233c) popup_clock_digital_analogue_window

0xbda5,	// (0x0002b520) soft_indicator_pane_ParamLimits

0xbda5,	// (0x0002b520) soft_indicator_pane

0xbdc1,	// (0x0002b53c) wallpaper_pane_ParamLimits

0xbdc1,	// (0x0002b53c) wallpaper_pane

0x2a3c,	// (0x000221b7) wallpaper_pane_g1

0xbdd3,	// (0x0002b54e) indicator_pane_g1_ParamLimits

0xbdd3,	// (0x0002b54e) indicator_pane_g1

0x6705,	// (0x00025e80) navi_navi_icon_text_pane_srt_g1

0x2c15,	// (0x00022390) soft_indicator_pane_t1

0x2c2f,	// (0x000223aa) aid_ps_area_pane

0xbdec,	// (0x0002b567) aid_ps_clock_pane

0x2c4e,	// (0x000223c9) aid_ps_indicator_pane

0x2c5a,	// (0x000223d5) indicator_ps_pane_ParamLimits

0x2c5a,	// (0x000223d5) indicator_ps_pane

0x2c69,	// (0x000223e4) power_save_pane_g1_ParamLimits

0x2c69,	// (0x000223e4) power_save_pane_g1

0x2c75,	// (0x000223f0) power_save_pane_g2_ParamLimits

0x2c75,	// (0x000223f0) power_save_pane_g2

0x0f9b,	// (0x00020716) aid_navinavi_width_pane

0x2c2f,	// (0x000223aa) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002ed29) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002ed29) power_save_pane_g

0x2c83,	// (0x000223fe) power_save_pane_t1_ParamLimits

0x2c83,	// (0x000223fe) power_save_pane_t1

0xbdec,	// (0x0002b567) aid_ps_clock_pane_ParamLimits

0x2c4e,	// (0x000223c9) aid_ps_indicator_pane_ParamLimits

0x2c95,	// (0x00022410) power_save_pane_t4_ParamLimits

0x2c95,	// (0x00022410) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002ed2e) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002ed2e) power_save_pane_t

0x2cbf,	// (0x0002243a) power_save_t3_ParamLimits

0x2cbf,	// (0x0002243a) power_save_t3

0x2caa,	// (0x00022425) power_save_t2_ParamLimits

0x2caa,	// (0x00022425) power_save_t2

0x2cd4,	// (0x0002244f) indicator_ps_pane_g1

0xbdfa,	// (0x0002b575) ai_gene_pane_ParamLimits

0xbdfa,	// (0x0002b575) ai_gene_pane

0xbe11,	// (0x0002b58c) ai_links_pane_ParamLimits

0xbe11,	// (0x0002b58c) ai_links_pane

0xbe29,	// (0x0002b5a4) indicator_pane_cp1_ParamLimits

0xbe29,	// (0x0002b5a4) indicator_pane_cp1

0xbe38,	// (0x0002b5b3) main_pane_idle_g1_cp_ParamLimits

0xbe38,	// (0x0002b5b3) main_pane_idle_g1_cp

0x2d0d,	// (0x00022488) popup_ai_links_title_window

0xbe50,	// (0x0002b5cb) soft_indicator_pane_cp1_ParamLimits

0xbe50,	// (0x0002b5cb) soft_indicator_pane_cp1

0x6066,	// (0x000257e1) ai_links_pane_g1

0x606f,	// (0x000257ea) grid_ai_links_pane

0xd87f,	// (0x0002cffa) ai_gene_pane_1

0x6054,	// (0x000257cf) ai_gene_pane_2

0x605d,	// (0x000257d8) list_highlight_pane_cp4

0xd85b,	// (0x0002cfd6) cell_ai_link_pane_ParamLimits

0xd85b,	// (0x0002cfd6) cell_ai_link_pane

0x6023,	// (0x0002579e) cell_ai_link_pane_g1

0x2f58,	// (0x000226d3) cell_ai_link_pane_g2

0x0001,

0xf946,	// (0x0002f0c1) cell_ai_link_pane_g

0x2a46,	// (0x000221c1) grid_highlight_cp2

0x2a46,	// (0x000221c1) bg_popup_sub_pane_cp1

0x2d30,	// (0x000224ab) popup_ai_links_title_window_t1

0x5f6f,	// (0x000256ea) ai_gene_pane_1_g1_ParamLimits

0x5f6f,	// (0x000256ea) ai_gene_pane_1_g1

0x5f7b,	// (0x000256f6) ai_gene_pane_1_g2_ParamLimits

0x5f7b,	// (0x000256f6) ai_gene_pane_1_g2

0x0001,

0xf93c,	// (0x0002f0b7) ai_gene_pane_1_g_ParamLimits

0xf93c,	// (0x0002f0b7) ai_gene_pane_1_g

0x5f88,	// (0x00025703) ai_gene_pane_1_t1_ParamLimits

0x5f88,	// (0x00025703) ai_gene_pane_1_t1

0x5fbc,	// (0x00025737) grid_ai_soft_ind_pane

0x5f5a,	// (0x000256d5) ai_gene_pane_2_t1_ParamLimits

0x5f5a,	// (0x000256d5) ai_gene_pane_2_t1

0xbe64,	// (0x0002b5df) main_pane_empty_t1_ParamLimits

0xbe64,	// (0x0002b5df) main_pane_empty_t1

0xbe7c,	// (0x0002b5f7) main_pane_empty_t2_ParamLimits

0xbe7c,	// (0x0002b5f7) main_pane_empty_t2

0xbe91,	// (0x0002b60c) main_pane_empty_t3_ParamLimits

0xbe91,	// (0x0002b60c) main_pane_empty_t3

0xbea3,	// (0x0002b61e) main_pane_empty_t4_ParamLimits

0xbea3,	// (0x0002b61e) main_pane_empty_t4

0xbeb5,	// (0x0002b630) main_pane_empty_t5_ParamLimits

0xbeb5,	// (0x0002b630) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002ed33) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002ed33) main_pane_empty_t

0x3465,	// (0x00022be0) bg_popup_window_pane_ParamLimits

0x3465,	// (0x00022be0) bg_popup_window_pane

0x5cb6,	// (0x00025431) find_popup_pane_cp2_ParamLimits

0x5cb6,	// (0x00025431) find_popup_pane_cp2

0x5cc2,	// (0x0002543d) heading_pane_ParamLimits

0x5cc2,	// (0x0002543d) heading_pane

0x2a46,	// (0x000221c1) bg_popup_sub_pane

0xd78a,	// (0x0002cf05) bg_popup_window_pane_g1_ParamLimits

0xd78a,	// (0x0002cf05) bg_popup_window_pane_g1

0xd799,	// (0x0002cf14) bg_popup_window_pane_g2_ParamLimits

0xd799,	// (0x0002cf14) bg_popup_window_pane_g2

0xd7a5,	// (0x0002cf20) bg_popup_window_pane_g3_ParamLimits

0xd7a5,	// (0x0002cf20) bg_popup_window_pane_g3

0xd7b1,	// (0x0002cf2c) bg_popup_window_pane_g4_ParamLimits

0xd7b1,	// (0x0002cf2c) bg_popup_window_pane_g4

0xd7c0,	// (0x0002cf3b) bg_popup_window_pane_g5_ParamLimits

0xd7c0,	// (0x0002cf3b) bg_popup_window_pane_g5

0xd7d0,	// (0x0002cf4b) bg_popup_window_pane_g6_ParamLimits

0xd7d0,	// (0x0002cf4b) bg_popup_window_pane_g6

0xd7dc,	// (0x0002cf57) bg_popup_window_pane_g7_ParamLimits

0xd7dc,	// (0x0002cf57) bg_popup_window_pane_g7

0xd7eb,	// (0x0002cf66) bg_popup_window_pane_g8_ParamLimits

0xd7eb,	// (0x0002cf66) bg_popup_window_pane_g8

0xd7fa,	// (0x0002cf75) bg_popup_window_pane_g9_ParamLimits

0xd7fa,	// (0x0002cf75) bg_popup_window_pane_g9

0x5c9c,	// (0x00025417) bg_popup_window_pane_g10_ParamLimits

0x5c9c,	// (0x00025417) bg_popup_window_pane_g10

0x0009,

0xf904,	// (0x0002f07f) bg_popup_window_pane_g_ParamLimits

0xf904,	// (0x0002f07f) bg_popup_window_pane_g

0x5bc5,	// (0x00025340) bg_popup_heading_pane_ParamLimits

0x5bc5,	// (0x00025340) bg_popup_heading_pane

0x1d53,	// (0x000214ce) tabs_4_passive_pane_cp_srt_ParamLimits

0x1d53,	// (0x000214ce) tabs_4_passive_pane_cp_srt

0x1d65,	// (0x000214e0) tabs_4_passive_pane_srt_ParamLimits

0x5bd9,	// (0x00025354) heading_pane_g2

0x1d65,	// (0x000214e0) tabs_4_passive_pane_srt

0x4fcb,	// (0x00024746) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4fcb,	// (0x00024746) bg_passive_tab_pane_cp3_srt

0x5be1,	// (0x0002535c) heading_pane_t1_ParamLimits

0x5be1,	// (0x0002535c) heading_pane_t1

0x5bf8,	// (0x00025373) heading_pane_t2_ParamLimits

0x5bf8,	// (0x00025373) heading_pane_t2

0x0001,

0xf8ff,	// (0x0002f07a) heading_pane_t_ParamLimits

0xf8ff,	// (0x0002f07a) heading_pane_t

0x56f0,	// (0x00024e6b) bg_popup_heading_pane_g1

0x579f,	// (0x00024f1a) bg_popup_heading_pane_g2

0x57a9,	// (0x00024f24) bg_popup_heading_pane_g3

0x57b3,	// (0x00024f2e) bg_popup_heading_pane_g4

0x57bd,	// (0x00024f38) bg_popup_heading_pane_g5

0x57c7,	// (0x00024f42) bg_popup_heading_pane_g6

0x57cf,	// (0x00024f4a) bg_popup_heading_pane_g7

0x57d7,	// (0x00024f52) bg_popup_heading_pane_g8

0x57e1,	// (0x00024f5c) bg_popup_heading_pane_g9

0x0008,

0xf8bb,	// (0x0002f036) bg_popup_heading_pane_g

0x4ed9,	// (0x00024654) bg_popup_sub_pane_g1

0x4ee1,	// (0x0002465c) bg_popup_sub_pane_g2

0x4ee9,	// (0x00024664) bg_popup_sub_pane_g3

0x4ef1,	// (0x0002466c) bg_popup_sub_pane_g4

0x4ef9,	// (0x00024674) bg_popup_sub_pane_g5

0x4f01,	// (0x0002467c) bg_popup_sub_pane_g6

0x4f09,	// (0x00024684) bg_popup_sub_pane_g7

0x4f11,	// (0x0002468c) bg_popup_sub_pane_g8

0x4f19,	// (0x00024694) bg_popup_sub_pane_g9

0x0008,

0xf895,	// (0x0002f010) bg_popup_sub_pane_g

0x2da2,	// (0x0002251d) bg_popup_window_pane_cp5_ParamLimits

0x2da2,	// (0x0002251d) bg_popup_window_pane_cp5

0x2dbe,	// (0x00022539) popup_note_window_g1_ParamLimits

0x2dbe,	// (0x00022539) popup_note_window_g1

0x2dca,	// (0x00022545) popup_note_window_t1_ParamLimits

0x2dca,	// (0x00022545) popup_note_window_t1

0x2de0,	// (0x0002255b) popup_note_window_t2_ParamLimits

0x2de0,	// (0x0002255b) popup_note_window_t2

0x2df6,	// (0x00022571) popup_note_window_t3_ParamLimits

0x2df6,	// (0x00022571) popup_note_window_t3

0x2e0c,	// (0x00022587) popup_note_window_t4_ParamLimits

0x2e0c,	// (0x00022587) popup_note_window_t4

0x2e34,	// (0x000225af) popup_note_window_t5_ParamLimits

0x2e34,	// (0x000225af) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002ed3e) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002ed3e) popup_note_window_t

0x2e58,	// (0x000225d3) bg_popup_window_pane_cp6_ParamLimits

0x2e58,	// (0x000225d3) bg_popup_window_pane_cp6

0x566c,	// (0x00024de7) popup_note_image_window_g1_ParamLimits

0x566c,	// (0x00024de7) popup_note_image_window_g1

0x5678,	// (0x00024df3) popup_note_image_window_g2_ParamLimits

0x5678,	// (0x00024df3) popup_note_image_window_g2

0x0001,

0xf889,	// (0x0002f004) popup_note_image_window_g_ParamLimits

0xf889,	// (0x0002f004) popup_note_image_window_g

0x5691,	// (0x00024e0c) popup_note_image_window_t1_ParamLimits

0x5691,	// (0x00024e0c) popup_note_image_window_t1

0x56aa,	// (0x00024e25) popup_note_image_window_t2_ParamLimits

0x56aa,	// (0x00024e25) popup_note_image_window_t2

0x56c3,	// (0x00024e3e) popup_note_image_window_t3_ParamLimits

0x56c3,	// (0x00024e3e) popup_note_image_window_t3

0x0002,

0xf88e,	// (0x0002f009) popup_note_image_window_t_ParamLimits

0xf88e,	// (0x0002f009) popup_note_image_window_t

0x552c,	// (0x00024ca7) bg_popup_window_pane_cp7_ParamLimits

0x552c,	// (0x00024ca7) bg_popup_window_pane_cp7

0x555c,	// (0x00024cd7) popup_note_wait_window_g1_ParamLimits

0x555c,	// (0x00024cd7) popup_note_wait_window_g1

0x5568,	// (0x00024ce3) popup_note_wait_window_g2_ParamLimits

0x5568,	// (0x00024ce3) popup_note_wait_window_g2

0x0002,

0xf877,	// (0x0002eff2) popup_note_wait_window_g_ParamLimits

0xf877,	// (0x0002eff2) popup_note_wait_window_g

0x5580,	// (0x00024cfb) popup_note_wait_window_t1_ParamLimits

0x5580,	// (0x00024cfb) popup_note_wait_window_t1

0x55a7,	// (0x00024d22) popup_note_wait_window_t2_ParamLimits

0x55a7,	// (0x00024d22) popup_note_wait_window_t2

0x55c5,	// (0x00024d40) popup_note_wait_window_t3_ParamLimits

0x55c5,	// (0x00024d40) popup_note_wait_window_t3

0x55d8,	// (0x00024d53) popup_note_wait_window_t4_ParamLimits

0x55d8,	// (0x00024d53) popup_note_wait_window_t4

0x0004,

0xf87e,	// (0x0002eff9) popup_note_wait_window_t_ParamLimits

0xf87e,	// (0x0002eff9) popup_note_wait_window_t

0x55fd,	// (0x00024d78) wait_bar_pane_ParamLimits

0x55fd,	// (0x00024d78) wait_bar_pane

0x2a46,	// (0x000221c1) wait_anim_pane

0x2a46,	// (0x000221c1) wait_border_pane

0x2a3c,	// (0x000221b7) wait_anim_pane_g1

0x2a3c,	// (0x000221b7) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0002eebd) wait_anim_pane_g

0x54d0,	// (0x00024c4b) wait_border_pane_g1

0x54db,	// (0x00024c56) wait_border_pane_g2

0x54e4,	// (0x00024c5f) wait_border_pane_g3

0x0002,

0xf870,	// (0x0002efeb) wait_border_pane_g

0x542c,	// (0x00024ba7) bg_popup_window_pane_cp16_ParamLimits

0x542c,	// (0x00024ba7) bg_popup_window_pane_cp16

0x543a,	// (0x00024bb5) indicator_popup_pane_cp4_ParamLimits

0x543a,	// (0x00024bb5) indicator_popup_pane_cp4

0x544e,	// (0x00024bc9) popup_query_data_window_t1_ParamLimits

0x544e,	// (0x00024bc9) popup_query_data_window_t1

0x5460,	// (0x00024bdb) popup_query_data_window_t2_ParamLimits

0x5460,	// (0x00024bdb) popup_query_data_window_t2

0x5479,	// (0x00024bf4) popup_query_data_window_t3_ParamLimits

0x5479,	// (0x00024bf4) popup_query_data_window_t3

0x0002,

0xf869,	// (0x0002efe4) popup_query_data_window_t_ParamLimits

0xf869,	// (0x0002efe4) popup_query_data_window_t

0x5493,	// (0x00024c0e) query_popup_data_pane_ParamLimits

0x5493,	// (0x00024c0e) query_popup_data_pane

0x54a7,	// (0x00024c22) query_popup_data_pane_cp1_ParamLimits

0x54a7,	// (0x00024c22) query_popup_data_pane_cp1

0x2e58,	// (0x000225d3) bg_popup_window_pane_cp10_ParamLimits

0x2e58,	// (0x000225d3) bg_popup_window_pane_cp10

0x538f,	// (0x00024b0a) indicator_popup_pane_ParamLimits

0x538f,	// (0x00024b0a) indicator_popup_pane

0x2eb9,	// (0x00022634) popup_query_code_window_t1_ParamLimits

0x2eb9,	// (0x00022634) popup_query_code_window_t1

0x53a7,	// (0x00024b22) popup_query_code_window_t2_ParamLimits

0x53a7,	// (0x00024b22) popup_query_code_window_t2

0x53e5,	// (0x00024b60) popup_query_code_window_t3_ParamLimits

0x53e5,	// (0x00024b60) popup_query_code_window_t3

0x0002,

0xf862,	// (0x0002efdd) popup_query_code_window_t_ParamLimits

0xf862,	// (0x0002efdd) popup_query_code_window_t

0x5414,	// (0x00024b8f) query_popup_pane_ParamLimits

0x5414,	// (0x00024b8f) query_popup_pane

0x2e58,	// (0x000225d3) bg_popup_window_pane_cp15_ParamLimits

0x2e58,	// (0x000225d3) bg_popup_window_pane_cp15

0x2e78,	// (0x000225f3) indicator_popup_pane_cp1_ParamLimits

0x2e78,	// (0x000225f3) indicator_popup_pane_cp1

0x2e8b,	// (0x00022606) indicator_popup_pane_cp2_ParamLimits

0x2e8b,	// (0x00022606) indicator_popup_pane_cp2

0x2ea6,	// (0x00022621) popup_query_data_code_window_g1_ParamLimits

0x2ea6,	// (0x00022621) popup_query_data_code_window_g1

0x2eb9,	// (0x00022634) popup_query_data_code_window_t1_ParamLimits

0x2eb9,	// (0x00022634) popup_query_data_code_window_t1

0x2ecb,	// (0x00022646) popup_query_data_code_window_t2_ParamLimits

0x2ecb,	// (0x00022646) popup_query_data_code_window_t2

0x2edd,	// (0x00022658) popup_query_data_code_window_t3_ParamLimits

0x2edd,	// (0x00022658) popup_query_data_code_window_t3

0x2ef3,	// (0x0002266e) popup_query_data_code_window_t4_ParamLimits

0x2ef3,	// (0x0002266e) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002ed49) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002ed49) popup_query_data_code_window_t

0x3e41,	// (0x000235bc) list_single_midp_graphic_pane_g3

0x2f0d,	// (0x00022688) query_popup_data_pane_cp2_ParamLimits

0x2f20,	// (0x0002269b) query_popup_pane_cp2_ParamLimits

0x2f20,	// (0x0002269b) query_popup_pane_cp2

0x2a46,	// (0x000221c1) bg_popup_window_pane_cp11

0x5363,	// (0x00024ade) heading_pane_cp5

0x3010,	// (0x0002278b) listscroll_popup_info_pane

0x2a46,	// (0x000221c1) input_focus_pane_cp3

0x2f3b,	// (0x000226b6) query_popup_pane_t1

0x2f49,	// (0x000226c4) list_popup_info_pane_ParamLimits

0x2f49,	// (0x000226c4) list_popup_info_pane

0x2f58,	// (0x000226d3) listscroll_popup_info_pane_g1

0x2f60,	// (0x000226db) scroll_pane_cp7

0x2f6a,	// (0x000226e5) popup_info_list_pane_t1_ParamLimits

0x2f6a,	// (0x000226e5) popup_info_list_pane_t1

0x2f84,	// (0x000226ff) popup_info_list_pane_t2_ParamLimits

0x2f84,	// (0x000226ff) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002ed52) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002ed52) popup_info_list_pane_t

0x2a46,	// (0x000221c1) bg_popup_window_pane_cp12

0x671f,	// (0x00025e9a) find_popup_pane

0x2b26,	// (0x000222a1) bg_popup_window_pane_cp3

0x2f9e,	// (0x00022719) heading_pane_cp3

0x2faa,	// (0x00022725) listscroll_popup_graphic_pane

0x2a46,	// (0x000221c1) bg_popup_window_pane_cp4

0xbf17,	// (0x0002b692) heading_pane_cp4

0x3010,	// (0x0002278b) listscroll_popup_colour_pane

0xbf21,	// (0x0002b69c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbf21,	// (0x0002b69c) cell_large_graphic_colour_none_popup_pane

0xbf35,	// (0x0002b6b0) grid_large_graphic_colour_popup_pane_ParamLimits

0xbf35,	// (0x0002b6b0) grid_large_graphic_colour_popup_pane

0xbf61,	// (0x0002b6dc) listscroll_popup_colour_pane_g1_ParamLimits

0xbf61,	// (0x0002b6dc) listscroll_popup_colour_pane_g1

0xbf78,	// (0x0002b6f3) listscroll_popup_colour_pane_g2_ParamLimits

0xbf78,	// (0x0002b6f3) listscroll_popup_colour_pane_g2

0xbf8f,	// (0x0002b70a) listscroll_popup_colour_pane_g3_ParamLimits

0xbf8f,	// (0x0002b70a) listscroll_popup_colour_pane_g3

0xbf9f,	// (0x0002b71a) listscroll_popup_colour_pane_g4_ParamLimits

0xbf9f,	// (0x0002b71a) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0002ed57) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0002ed57) listscroll_popup_colour_pane_g

0x30aa,	// (0x00022825) scroll_pane_cp6_ParamLimits

0x30aa,	// (0x00022825) scroll_pane_cp6

0xbfb3,	// (0x0002b72e) cell_large_graphic_colour_popup_pane_ParamLimits

0xbfb3,	// (0x0002b72e) cell_large_graphic_colour_popup_pane

0x30e1,	// (0x0002285c) cell_large_graphic_colour_none_popup_pane_t1

0x2a46,	// (0x000221c1) grid_highlight_pane_cp5

0x30f0,	// (0x0002286b) cell_large_graphic_colour_popup_pane_g1

0x30f8,	// (0x00022873) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002ed60) cell_large_graphic_colour_popup_pane_g

0x3100,	// (0x0002287b) cell_large_graphic_colour_popup_pane_g2_copy1

0x3109,	// (0x00022884) grid_highlight_pane_cp4

0x3111,	// (0x0002288c) bg_popup_window_pane_cp8_ParamLimits

0x3111,	// (0x0002288c) bg_popup_window_pane_cp8

0x312c,	// (0x000228a7) popup_snote_single_text_window_g1_ParamLimits

0x312c,	// (0x000228a7) popup_snote_single_text_window_g1

0x313e,	// (0x000228b9) popup_snote_single_text_window_t1_ParamLimits

0x313e,	// (0x000228b9) popup_snote_single_text_window_t1

0x3151,	// (0x000228cc) popup_snote_single_text_window_t2_ParamLimits

0x3151,	// (0x000228cc) popup_snote_single_text_window_t2

0x3164,	// (0x000228df) popup_snote_single_text_window_t3_ParamLimits

0x3164,	// (0x000228df) popup_snote_single_text_window_t3

0x319d,	// (0x00022918) popup_snote_single_text_window_t4_ParamLimits

0x319d,	// (0x00022918) popup_snote_single_text_window_t4

0x31d1,	// (0x0002294c) popup_snote_single_text_window_t5_ParamLimits

0x31d1,	// (0x0002294c) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0002ed65) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0002ed65) popup_snote_single_text_window_t

0x3200,	// (0x0002297b) bg_popup_window_pane_cp9_ParamLimits

0x3200,	// (0x0002297b) bg_popup_window_pane_cp9

0x312c,	// (0x000228a7) popup_snote_single_graphic_window_g1_ParamLimits

0x312c,	// (0x000228a7) popup_snote_single_graphic_window_g1

0x320e,	// (0x00022989) popup_snote_single_graphic_window_g2_ParamLimits

0x320e,	// (0x00022989) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002ed70) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002ed70) popup_snote_single_graphic_window_g

0x321a,	// (0x00022995) popup_snote_single_graphic_window_t1_ParamLimits

0x321a,	// (0x00022995) popup_snote_single_graphic_window_t1

0x322d,	// (0x000229a8) popup_snote_single_graphic_window_t2_ParamLimits

0x322d,	// (0x000229a8) popup_snote_single_graphic_window_t2

0x3240,	// (0x000229bb) popup_snote_single_graphic_window_t3_ParamLimits

0x3240,	// (0x000229bb) popup_snote_single_graphic_window_t3

0x3279,	// (0x000229f4) popup_snote_single_graphic_window_t4_ParamLimits

0x3279,	// (0x000229f4) popup_snote_single_graphic_window_t4

0x32ad,	// (0x00022a28) popup_snote_single_graphic_window_t5_ParamLimits

0x32ad,	// (0x00022a28) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002ed75) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002ed75) popup_snote_single_graphic_window_t

0x665d,	// (0x00025dd8) grid_graphic_popup_pane_ParamLimits

0x665d,	// (0x00025dd8) grid_graphic_popup_pane

0x668b,	// (0x00025e06) listscroll_popup_graphic_pane_g1_ParamLimits

0x668b,	// (0x00025e06) listscroll_popup_graphic_pane_g1

0xdb94,	// (0x0002d30f) listscroll_popup_graphic_pane_g2_ParamLimits

0xdb94,	// (0x0002d30f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9df,	// (0x0002f15a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9df,	// (0x0002f15a) listscroll_popup_graphic_pane_g

0x66b3,	// (0x00025e2e) scroll_pane_cp5

0xdb54,	// (0x0002d2cf) cell_graphic_popup_pane_ParamLimits

0xdb54,	// (0x0002d2cf) cell_graphic_popup_pane

0x65e6,	// (0x00025d61) cell_graphic_popup_pane_g1

0x65ee,	// (0x00025d69) cell_graphic_popup_pane_g2

0x3100,	// (0x0002287b) cell_graphic_popup_pane_g3

0x0002,

0xf9d8,	// (0x0002f153) cell_graphic_popup_pane_g

0x65f7,	// (0x00025d72) cell_graphic_popup_pane_t2

0x3109,	// (0x00022884) grid_highlight_pane_cp3

0x32ee,	// (0x00022a69) list_gen_pane_ParamLimits

0x32ee,	// (0x00022a69) list_gen_pane

0x3320,	// (0x00022a9b) scroll_pane

0xdb0f,	// (0x0002d28a) bg_list_pane_g1_ParamLimits

0xdb0f,	// (0x0002d28a) bg_list_pane_g1

0x6563,	// (0x00025cde) bg_list_pane_g2_ParamLimits

0x6563,	// (0x00025cde) bg_list_pane_g2

0x6576,	// (0x00025cf1) bg_list_pane_g3_ParamLimits

0x6576,	// (0x00025cf1) bg_list_pane_g3

0x6588,	// (0x00025d03) bg_list_pane_g4_ParamLimits

0x6588,	// (0x00025d03) bg_list_pane_g4

0xdb2a,	// (0x0002d2a5) bg_list_pane_g5_ParamLimits

0xdb2a,	// (0x0002d2a5) bg_list_pane_g5

0x0004,

0xf9cd,	// (0x0002f148) bg_list_pane_g_ParamLimits

0xf9cd,	// (0x0002f148) bg_list_pane_g

0xdad2,	// (0x0002d24d) list_double2_graphic_large_graphic_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_double2_graphic_large_graphic_pane

0xdad2,	// (0x0002d24d) list_double2_graphic_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_double2_graphic_pane

0xdad2,	// (0x0002d24d) list_double2_large_graphic_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_double2_large_graphic_pane

0xdad2,	// (0x0002d24d) list_double2_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_double2_pane

0xdad2,	// (0x0002d24d) list_double_graphic_heading_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_double_graphic_heading_pane

0xdad2,	// (0x0002d24d) list_double_graphic_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_double_graphic_pane

0xdad2,	// (0x0002d24d) list_double_heading_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_double_heading_pane

0xdad2,	// (0x0002d24d) list_double_large_graphic_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_double_large_graphic_pane

0xdad2,	// (0x0002d24d) list_double_number_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_double_number_pane

0xdad2,	// (0x0002d24d) list_double_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_double_pane

0xdad2,	// (0x0002d24d) list_double_time_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_double_time_pane

0xdad2,	// (0x0002d24d) list_setting_number_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_setting_number_pane

0xdad2,	// (0x0002d24d) list_setting_pane_ParamLimits

0xdad2,	// (0x0002d24d) list_setting_pane

0xb840,	// (0x0002afbb) list_single_2graphic_pane_ParamLimits

0xb840,	// (0x0002afbb) list_single_2graphic_pane

0xb840,	// (0x0002afbb) list_single_graphic_heading_pane_ParamLimits

0xb840,	// (0x0002afbb) list_single_graphic_heading_pane

0xb840,	// (0x0002afbb) list_single_graphic_pane_ParamLimits

0xb840,	// (0x0002afbb) list_single_graphic_pane

0xb840,	// (0x0002afbb) list_single_heading_pane_ParamLimits

0xb840,	// (0x0002afbb) list_single_heading_pane

0xdafa,	// (0x0002d275) list_single_large_graphic_pane_ParamLimits

0xdafa,	// (0x0002d275) list_single_large_graphic_pane

0xb840,	// (0x0002afbb) list_single_number_heading_pane_ParamLimits

0xb840,	// (0x0002afbb) list_single_number_heading_pane

0xb840,	// (0x0002afbb) list_single_number_pane_ParamLimits

0xb840,	// (0x0002afbb) list_single_number_pane

0xb840,	// (0x0002afbb) list_single_pane_ParamLimits

0xb840,	// (0x0002afbb) list_single_pane

0x2a46,	// (0x000221c1) list_highlight_pane_cp1

0x07b8,	// (0x0001ff33) list_single_pane_g1_ParamLimits

0x07b8,	// (0x0001ff33) list_single_pane_g1

0x07c4,	// (0x0001ff3f) list_single_pane_g2_ParamLimits

0x07c4,	// (0x0001ff3f) list_single_pane_g2

0x0001,

0xf60c,	// (0x0002ed87) list_single_pane_g_ParamLimits

0xf60c,	// (0x0002ed87) list_single_pane_g

0x09c2,	// (0x0002013d) list_single_pane_t1_ParamLimits

0x09c2,	// (0x0002013d) list_single_pane_t1

0x07b8,	// (0x0001ff33) list_single_number_pane_g1_ParamLimits

0x07b8,	// (0x0001ff33) list_single_number_pane_g1

0x07c4,	// (0x0001ff3f) list_single_number_pane_g2_ParamLimits

0x07c4,	// (0x0001ff3f) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0002ed87) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0002ed87) list_single_number_pane_g

0x083c,	// (0x0001ffb7) list_single_number_pane_t1_ParamLimits

0x083c,	// (0x0001ffb7) list_single_number_pane_t1

0xb802,	// (0x0002af7d) list_single_number_pane_t2_ParamLimits

0xb802,	// (0x0002af7d) list_single_number_pane_t2

0x0001,

0xf98e,	// (0x0002f109) list_single_number_pane_t_ParamLimits

0xf98e,	// (0x0002f109) list_single_number_pane_t

0xb1e0,	// (0x0002a95b) list_single_graphic_pane_g1_ParamLimits

0xb1e0,	// (0x0002a95b) list_single_graphic_pane_g1

0x07b8,	// (0x0001ff33) list_single_graphic_pane_g2_ParamLimits

0x07b8,	// (0x0001ff33) list_single_graphic_pane_g2

0x07c4,	// (0x0001ff3f) list_single_graphic_pane_g3_ParamLimits

0x07c4,	// (0x0001ff3f) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002ed80) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002ed80) list_single_graphic_pane_g

0xb1ec,	// (0x0002a967) list_single_graphic_pane_t1_ParamLimits

0xb1ec,	// (0x0002a967) list_single_graphic_pane_t1

0x07b8,	// (0x0001ff33) list_single_heading_pane_g1_ParamLimits

0x07b8,	// (0x0001ff33) list_single_heading_pane_g1

0x07c4,	// (0x0001ff3f) list_single_heading_pane_g2_ParamLimits

0x07c4,	// (0x0001ff3f) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0002ed87) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0002ed87) list_single_heading_pane_g

0xb202,	// (0x0002a97d) list_single_heading_pane_t1_ParamLimits

0xb202,	// (0x0002a97d) list_single_heading_pane_t1

0xb218,	// (0x0002a993) list_single_heading_pane_t2_ParamLimits

0xb218,	// (0x0002a993) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002ed8c) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002ed8c) list_single_heading_pane_t

0x07b8,	// (0x0001ff33) list_single_number_heading_pane_g1_ParamLimits

0x07b8,	// (0x0001ff33) list_single_number_heading_pane_g1

0x07c4,	// (0x0001ff3f) list_single_number_heading_pane_g2_ParamLimits

0x07c4,	// (0x0001ff3f) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0002ed87) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0002ed87) list_single_number_heading_pane_g

0xb202,	// (0x0002a97d) list_single_number_heading_pane_t1_ParamLimits

0xb202,	// (0x0002a97d) list_single_number_heading_pane_t1

0xb22a,	// (0x0002a9a5) list_single_number_heading_pane_t2_ParamLimits

0xb22a,	// (0x0002a9a5) list_single_number_heading_pane_t2

0x099c,	// (0x00020117) list_single_number_heading_pane_t3_ParamLimits

0x099c,	// (0x00020117) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002ed91) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002ed91) list_single_number_heading_pane_t

0x0818,	// (0x0001ff93) list_single_graphic_heading_pane_g1_ParamLimits

0x0818,	// (0x0001ff93) list_single_graphic_heading_pane_g1

0xb23c,	// (0x0002a9b7) list_single_graphic_heading_pane_g4_ParamLimits

0xb23c,	// (0x0002a9b7) list_single_graphic_heading_pane_g4

0x07c4,	// (0x0001ff3f) list_single_graphic_heading_pane_g5_ParamLimits

0x07c4,	// (0x0001ff3f) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0002ed98) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002ed98) list_single_graphic_heading_pane_g

0xb202,	// (0x0002a97d) list_single_graphic_heading_pane_t1_ParamLimits

0xb202,	// (0x0002a97d) list_single_graphic_heading_pane_t1

0xb24d,	// (0x0002a9c8) list_single_graphic_heading_pane_t2_ParamLimits

0xb24d,	// (0x0002a9c8) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0002ed9f) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0002ed9f) list_single_graphic_heading_pane_t

0x09d8,	// (0x00020153) list_single_large_graphic_pane_g1_ParamLimits

0x09d8,	// (0x00020153) list_single_large_graphic_pane_g1

0x09e4,	// (0x0002015f) list_single_large_graphic_pane_g2_ParamLimits

0x09e4,	// (0x0002015f) list_single_large_graphic_pane_g2

0x09f0,	// (0x0002016b) list_single_large_graphic_pane_g3_ParamLimits

0x09f0,	// (0x0002016b) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002eda4) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002eda4) list_single_large_graphic_pane_g

0x54db,	// (0x00024c56) wait_border_pane_g2_copy1

0xb25f,	// (0x0002a9da) list_single_large_graphic_pane_g4_cp2

0x09fc,	// (0x00020177) list_single_large_graphic_pane_t1_ParamLimits

0x09fc,	// (0x00020177) list_single_large_graphic_pane_t1

0xb267,	// (0x0002a9e2) list_double_pane_g1_ParamLimits

0xb267,	// (0x0002a9e2) list_double_pane_g1

0xb273,	// (0x0002a9ee) list_double_pane_g2_ParamLimits

0xb273,	// (0x0002a9ee) list_double_pane_g2

0x0001,

0xf630,	// (0x0002edab) list_double_pane_g_ParamLimits

0xf630,	// (0x0002edab) list_double_pane_g

0xb27f,	// (0x0002a9fa) list_double_pane_t1_ParamLimits

0xb27f,	// (0x0002a9fa) list_double_pane_t1

0xb295,	// (0x0002aa10) list_double_pane_t2_ParamLimits

0xb295,	// (0x0002aa10) list_double_pane_t2

0x0001,

0xf635,	// (0x0002edb0) list_double_pane_t_ParamLimits

0xf635,	// (0x0002edb0) list_double_pane_t

0xb2a7,	// (0x0002aa22) list_double2_pane_g1_ParamLimits

0xb2a7,	// (0x0002aa22) list_double2_pane_g1

0xb273,	// (0x0002a9ee) list_double2_pane_g2_ParamLimits

0xb273,	// (0x0002a9ee) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0002edb5) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0002edb5) list_double2_pane_g

0xb27f,	// (0x0002a9fa) list_double2_pane_t1_ParamLimits

0xb27f,	// (0x0002a9fa) list_double2_pane_t1

0xb2b8,	// (0x0002aa33) list_double2_pane_t2_ParamLimits

0xb2b8,	// (0x0002aa33) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0002edba) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0002edba) list_double2_pane_t

0xb267,	// (0x0002a9e2) list_double_number_pane_g1_ParamLimits

0xb267,	// (0x0002a9e2) list_double_number_pane_g1

0xb273,	// (0x0002a9ee) list_double_number_pane_g2_ParamLimits

0xb273,	// (0x0002a9ee) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0002edab) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0002edab) list_double_number_pane_g

0xb2ca,	// (0x0002aa45) list_double_number_pane_t1_ParamLimits

0xb2ca,	// (0x0002aa45) list_double_number_pane_t1

0xb2dc,	// (0x0002aa57) list_double_number_pane_t2_ParamLimits

0xb2dc,	// (0x0002aa57) list_double_number_pane_t2

0xb2f2,	// (0x0002aa6d) list_double_number_pane_t3_ParamLimits

0xb2f2,	// (0x0002aa6d) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002edbf) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002edbf) list_double_number_pane_t

0xb304,	// (0x0002aa7f) list_double_graphic_pane_g1_ParamLimits

0xb304,	// (0x0002aa7f) list_double_graphic_pane_g1

0xb310,	// (0x0002aa8b) list_double_graphic_pane_g2_ParamLimits

0xb310,	// (0x0002aa8b) list_double_graphic_pane_g2

0xb31f,	// (0x0002aa9a) list_double_graphic_pane_g3_ParamLimits

0xb31f,	// (0x0002aa9a) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0002edc6) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0002edc6) list_double_graphic_pane_g

0xb337,	// (0x0002aab2) list_double_graphic_pane_t1_ParamLimits

0xb337,	// (0x0002aab2) list_double_graphic_pane_t1

0xb34d,	// (0x0002aac8) list_double_graphic_pane_t2_ParamLimits

0xb34d,	// (0x0002aac8) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0002edcf) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0002edcf) list_double_graphic_pane_t

0xb304,	// (0x0002aa7f) list_double2_graphic_pane_g1_ParamLimits

0xb304,	// (0x0002aa7f) list_double2_graphic_pane_g1

0xb35f,	// (0x0002aada) list_double2_graphic_pane_g2_ParamLimits

0xb35f,	// (0x0002aada) list_double2_graphic_pane_g2

0xb36b,	// (0x0002aae6) list_double2_graphic_pane_g3_ParamLimits

0xb36b,	// (0x0002aae6) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0002edd4) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0002edd4) list_double2_graphic_pane_g

0xb2dc,	// (0x0002aa57) list_double2_graphic_pane_t1_ParamLimits

0xb2dc,	// (0x0002aa57) list_double2_graphic_pane_t1

0xb377,	// (0x0002aaf2) list_double2_graphic_pane_t2_ParamLimits

0xb377,	// (0x0002aaf2) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0002eddb) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0002eddb) list_double2_graphic_pane_t

0xb389,	// (0x0002ab04) list_double_large_graphic_pane_g1_ParamLimits

0xb389,	// (0x0002ab04) list_double_large_graphic_pane_g1

0xb2a7,	// (0x0002aa22) list_double_large_graphic_pane_g2_ParamLimits

0xb2a7,	// (0x0002aa22) list_double_large_graphic_pane_g2

0xb273,	// (0x0002a9ee) list_double_large_graphic_pane_g3_ParamLimits

0xb273,	// (0x0002a9ee) list_double_large_graphic_pane_g3

0xb3b4,	// (0x0002ab2f) list_double_large_graphic_pane_g4_ParamLimits

0xb3b4,	// (0x0002ab2f) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002ede0) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002ede0) list_double_large_graphic_pane_g

0xb3c6,	// (0x0002ab41) list_double_large_graphic_pane_t1_ParamLimits

0xb3c6,	// (0x0002ab41) list_double_large_graphic_pane_t1

0xb3df,	// (0x0002ab5a) list_double_large_graphic_pane_t2_ParamLimits

0xb3df,	// (0x0002ab5a) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0002edeb) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0002edeb) list_double_large_graphic_pane_t

0xb3f1,	// (0x0002ab6c) list_double2_large_graphic_pane_g1_ParamLimits

0xb3f1,	// (0x0002ab6c) list_double2_large_graphic_pane_g1

0xb2a7,	// (0x0002aa22) list_double2_large_graphic_pane_g2_ParamLimits

0xb2a7,	// (0x0002aa22) list_double2_large_graphic_pane_g2

0xb273,	// (0x0002a9ee) list_double2_large_graphic_pane_g3_ParamLimits

0xb273,	// (0x0002a9ee) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002edf0) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002edf0) list_double2_large_graphic_pane_g

0xb3fd,	// (0x0002ab78) list_double2_large_graphic_pane_t1_ParamLimits

0xb3fd,	// (0x0002ab78) list_double2_large_graphic_pane_t1

0xb413,	// (0x0002ab8e) list_double2_large_graphic_pane_t2_ParamLimits

0xb413,	// (0x0002ab8e) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0002edf7) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0002edf7) list_double2_large_graphic_pane_t

0xb425,	// (0x0002aba0) list_double_heading_pane_g1_ParamLimits

0xb425,	// (0x0002aba0) list_double_heading_pane_g1

0xb436,	// (0x0002abb1) list_double_heading_pane_g2_ParamLimits

0xb436,	// (0x0002abb1) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0002edfc) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0002edfc) list_double_heading_pane_g

0xb442,	// (0x0002abbd) list_double_heading_pane_t1_ParamLimits

0xb442,	// (0x0002abbd) list_double_heading_pane_t1

0xb458,	// (0x0002abd3) list_double_heading_pane_t2_ParamLimits

0xb458,	// (0x0002abd3) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002ee01) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002ee01) list_double_heading_pane_t

0xb46a,	// (0x0002abe5) list_double_graphic_heading_pane_g1_ParamLimits

0xb46a,	// (0x0002abe5) list_double_graphic_heading_pane_g1

0xb425,	// (0x0002aba0) list_double_graphic_heading_pane_g2_ParamLimits

0xb425,	// (0x0002aba0) list_double_graphic_heading_pane_g2

0xb436,	// (0x0002abb1) list_double_graphic_heading_pane_g3_ParamLimits

0xb436,	// (0x0002abb1) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0002ee06) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0002ee06) list_double_graphic_heading_pane_g

0xb476,	// (0x0002abf1) list_double_graphic_heading_pane_t1_ParamLimits

0xb476,	// (0x0002abf1) list_double_graphic_heading_pane_t1

0xb48c,	// (0x0002ac07) list_double_graphic_heading_pane_t2_ParamLimits

0xb48c,	// (0x0002ac07) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0002ee0d) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0002ee0d) list_double_graphic_heading_pane_t

0xb2a7,	// (0x0002aa22) list_double_time_pane_g1_ParamLimits

0xb2a7,	// (0x0002aa22) list_double_time_pane_g1

0xb273,	// (0x0002a9ee) list_double_time_pane_g2_ParamLimits

0xb273,	// (0x0002a9ee) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x0002edb5) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x0002edb5) list_double_time_pane_g

0xb3fd,	// (0x0002ab78) list_double_time_pane_t1_ParamLimits

0xb3fd,	// (0x0002ab78) list_double_time_pane_t1

0xb49e,	// (0x0002ac19) list_double_time_pane_t2_ParamLimits

0xb49e,	// (0x0002ac19) list_double_time_pane_t2

0xb4b0,	// (0x0002ac2b) list_double_time_pane_t3_ParamLimits

0xb4b0,	// (0x0002ac2b) list_double_time_pane_t3

0xb4c2,	// (0x0002ac3d) list_double_time_pane_t4_ParamLimits

0xb4c2,	// (0x0002ac3d) list_double_time_pane_t4

0x0003,

0xf697,	// (0x0002ee12) list_double_time_pane_t_ParamLimits

0xf697,	// (0x0002ee12) list_double_time_pane_t

0xb4d4,	// (0x0002ac4f) list_setting_pane_g1_ParamLimits

0xb4d4,	// (0x0002ac4f) list_setting_pane_g1

0xb4e0,	// (0x0002ac5b) list_setting_pane_g2_ParamLimits

0xb4e0,	// (0x0002ac5b) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x0002ee1b) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x0002ee1b) list_setting_pane_g

0xb4ec,	// (0x0002ac67) list_setting_pane_t1_ParamLimits

0xb4ec,	// (0x0002ac67) list_setting_pane_t1

0xb506,	// (0x0002ac81) list_setting_pane_t2_ParamLimits

0xb506,	// (0x0002ac81) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x0002ee20) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x0002ee20) list_setting_pane_t

0xb545,	// (0x0002acc0) set_value_pane_cp_ParamLimits

0xb545,	// (0x0002acc0) set_value_pane_cp

0xb553,	// (0x0002acce) list_setting_number_pane_g1_ParamLimits

0xb553,	// (0x0002acce) list_setting_number_pane_g1

0xb55f,	// (0x0002acda) list_setting_number_pane_g2_ParamLimits

0xb55f,	// (0x0002acda) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x0002ee27) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x0002ee27) list_setting_number_pane_g

0xb56b,	// (0x0002ace6) list_setting_number_pane_t1_ParamLimits

0xb56b,	// (0x0002ace6) list_setting_number_pane_t1

0xb584,	// (0x0002acff) list_setting_number_pane_t2_ParamLimits

0xb584,	// (0x0002acff) list_setting_number_pane_t2

0xb59e,	// (0x0002ad19) list_setting_number_pane_t3_ParamLimits

0xb59e,	// (0x0002ad19) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0002ee2c) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0002ee2c) list_setting_number_pane_t

0xb545,	// (0x0002acc0) set_value_pane_ParamLimits

0xb545,	// (0x0002acc0) set_value_pane

0x3354,	// (0x00022acf) bg_set_opt_pane_ParamLimits

0x3354,	// (0x00022acf) bg_set_opt_pane

0x04ac,	// (0x0001fc27) set_value_pane_t1

0x3375,	// (0x00022af0) slider_set_pane_cp3

0x337e,	// (0x00022af9) volume_small_pane_cp

0x3387,	// (0x00022b02) list_form_gen_pane

0x3390,	// (0x00022b0b) scroll_pane_cp8

0xb5e1,	// (0x0002ad5c) form_field_data_pane_ParamLimits

0xb5e1,	// (0x0002ad5c) form_field_data_pane

0xb5fc,	// (0x0002ad77) form_field_data_wide_pane_ParamLimits

0xb5fc,	// (0x0002ad77) form_field_data_wide_pane

0x0507,	// (0x0001fc82) form_field_popup_pane_ParamLimits

0x0507,	// (0x0001fc82) form_field_popup_pane

0xb620,	// (0x0002ad9b) form_field_popup_wide_pane_ParamLimits

0xb620,	// (0x0002ad9b) form_field_popup_wide_pane

0x054a,	// (0x0001fcc5) form_field_slider_pane_ParamLimits

0x054a,	// (0x0001fcc5) form_field_slider_pane

0x055d,	// (0x0001fcd8) form_field_slider_wide_pane_ParamLimits

0x055d,	// (0x0001fcd8) form_field_slider_wide_pane

0x33a1,	// (0x00022b1c) data_form_pane

0xb64b,	// (0x0002adc6) form_field_data_pane_t1

0x33ad,	// (0x00022b28) input_focus_pane

0x33bb,	// (0x00022b36) data_form_wide_pane

0x05a0,	// (0x0001fd1b) form_field_data_wide_pane_t1

0x311e,	// (0x00022899) input_focus_pane_cp6

0xb665,	// (0x0002ade0) form_field_popup_pane_t1

0x33ad,	// (0x00022b28) input_focus_pane_cp7

0x33e7,	// (0x00022b62) list_form_pane

0x05e4,	// (0x0001fd5f) form_field_popup_wide_pane_t1

0x33ad,	// (0x00022b28) input_focus_pane_cp8

0x33f3,	// (0x00022b6e) list_form_wide_pane

0xb687,	// (0x0002ae02) form_field_slider_pane_t1_ParamLimits

0xb687,	// (0x0002ae02) form_field_slider_pane_t1

0xb69f,	// (0x0002ae1a) form_field_slider_pane_t2_ParamLimits

0xb69f,	// (0x0002ae1a) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0002ee3c) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0002ee3c) form_field_slider_pane_t

0x2da2,	// (0x0002251d) input_focus_pane_cp9_ParamLimits

0x2da2,	// (0x0002251d) input_focus_pane_cp9

0xb6b4,	// (0x0002ae2f) slider_cont_pane_ParamLimits

0xb6b4,	// (0x0002ae2f) slider_cont_pane

0x3402,	// (0x00022b7d) form_field_slider_wide_pane_t1_ParamLimits

0x3402,	// (0x00022b7d) form_field_slider_wide_pane_t1

0x0642,	// (0x0001fdbd) form_field_slider_wide_pane_t2_ParamLimits

0x0642,	// (0x0001fdbd) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0002ee41) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0002ee41) form_field_slider_wide_pane_t

0x2da2,	// (0x0002251d) input_focus_pane_cp10_ParamLimits

0x2da2,	// (0x0002251d) input_focus_pane_cp10

0xb6c8,	// (0x0002ae43) slider_cont_pane_cp1_ParamLimits

0xb6c8,	// (0x0002ae43) slider_cont_pane_cp1

0xb6dc,	// (0x0002ae57) slider_form_pane_cp

0x3414,	// (0x00022b8f) input_focus_pane_g1

0x341c,	// (0x00022b97) input_focus_pane_g2

0x3424,	// (0x00022b9f) input_focus_pane_g3

0x342c,	// (0x00022ba7) input_focus_pane_g4

0x3434,	// (0x00022baf) input_focus_pane_g5

0x343c,	// (0x00022bb7) input_focus_pane_g6

0x3444,	// (0x00022bbf) input_focus_pane_g7

0x344c,	// (0x00022bc7) input_focus_pane_g8

0x3454,	// (0x00022bcf) input_focus_pane_g9

0x2a3c,	// (0x000221b7) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0002ee46) input_focus_pane_g

0x54e4,	// (0x00024c5f) wait_border_pane_g3_copy1

0xb6e4,	// (0x0002ae5f) data_form_pane_t1

0x2a3c,	// (0x000221b7) wait_anim_pane_g1_copy1

0xb814,	// (0x0002af8f) data_form_wide_pane_t1

0x06a2,	// (0x0001fe1d) list_form_graphic_pane_cp_ParamLimits

0x06a2,	// (0x0001fe1d) list_form_graphic_pane_cp

0x6469,	// (0x00025be4) slider_form_pane_g1

0x6472,	// (0x00025bed) slider_form_pane_g2

0x0006,

0xf9be,	// (0x0002f139) slider_form_pane_g

0x06a2,	// (0x0001fe1d) list_form_graphic_pane_ParamLimits

0x06a2,	// (0x0001fe1d) list_form_graphic_pane

0x06b4,	// (0x0001fe2f) list_form_graphic_pane_g1

0x06bc,	// (0x0001fe37) list_form_graphic_pane_t1_ParamLimits

0x06bc,	// (0x0001fe37) list_form_graphic_pane_t1

0x2b26,	// (0x000222a1) list_highlight_pane_cp5_ParamLimits

0x2b26,	// (0x000222a1) list_highlight_pane_cp5

0xb6fe,	// (0x0002ae79) find_pane_g1

0x345c,	// (0x00022bd7) input_find_pane

0xb707,	// (0x0002ae82) input_find_pane_g1_ParamLimits

0xb707,	// (0x0002ae82) input_find_pane_g1

0xb713,	// (0x0002ae8e) input_find_pane_t1_ParamLimits

0xb713,	// (0x0002ae8e) input_find_pane_t1

0xb728,	// (0x0002aea3) input_find_pane_t2_ParamLimits

0xb728,	// (0x0002aea3) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0002ee5b) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0002ee5b) input_find_pane_t

0x3465,	// (0x00022be0) input_focus_pane_cp5_ParamLimits

0x3465,	// (0x00022be0) input_focus_pane_cp5

0xc776,	// (0x0002bef1) bg_popup_window_pane_cp2_ParamLimits

0xc776,	// (0x0002bef1) bg_popup_window_pane_cp2

0xc783,	// (0x0002befe) listscroll_menu_pane_ParamLimits

0xc783,	// (0x0002befe) listscroll_menu_pane

0xc78f,	// (0x0002bf0a) popup_submenu_window_ParamLimits

0xc78f,	// (0x0002bf0a) popup_submenu_window

0x34c8,	// (0x00022c43) find_popup_pane_g1

0x34d0,	// (0x00022c4b) input_popup_find_pane_cp

0x3465,	// (0x00022be0) input_focus_pane_cp4_ParamLimits

0x3465,	// (0x00022be0) input_focus_pane_cp4

0x34e8,	// (0x00022c63) input_popup_find_pane_t1_ParamLimits

0x34e8,	// (0x00022c63) input_popup_find_pane_t1

0x2a46,	// (0x000221c1) bg_popup_sub_pane_cp

0x3516,	// (0x00022c91) listscroll_popup_sub_pane

0x351e,	// (0x00022c99) list_submenu_pane_ParamLimits

0x351e,	// (0x00022c99) list_submenu_pane

0x352f,	// (0x00022caa) scroll_pane_cp4

0x3537,	// (0x00022cb2) list_single_popup_submenu_pane_ParamLimits

0x3537,	// (0x00022cb2) list_single_popup_submenu_pane

0x354c,	// (0x00022cc7) list_single_popup_submenu_pane_g1

0x3554,	// (0x00022ccf) list_single_popup_submenu_pane_t1_ParamLimits

0x3554,	// (0x00022ccf) list_single_popup_submenu_pane_t1

0x2da2,	// (0x0002251d) bg_active_tab_pane_cp1_ParamLimits

0x2da2,	// (0x0002251d) bg_active_tab_pane_cp1

0xc7cd,	// (0x0002bf48) tabs_2_active_pane_g1

0xc7d5,	// (0x0002bf50) tabs_2_active_pane_t1

0x2da2,	// (0x0002251d) bg_passive_tab_pane_cp1_ParamLimits

0x2da2,	// (0x0002251d) bg_passive_tab_pane_cp1

0xc7cd,	// (0x0002bf48) tabs_2_passive_pane_g1

0xc7d5,	// (0x0002bf50) tabs_2_passive_pane_t1

0x2b26,	// (0x000222a1) bg_active_tab_pane_cp4

0xc7e7,	// (0x0002bf62) tabs_2_long_active_pane_t1

0x439d,	// (0x00023b18) bg_passive_tab_pane_cp4

0xd372,	// (0x0002caed) list_single_midp_graphic_pane_g4_ParamLimits

0x2b26,	// (0x000222a1) bg_active_tab_pane_cp5

0xc7fa,	// (0x0002bf75) tabs_3_long_active_pane_t1

0x439d,	// (0x00023b18) bg_passive_tab_pane_cp5

0xd372,	// (0x0002caed) list_single_midp_graphic_pane_g4

0x2b26,	// (0x000222a1) bg_popup_window_pane_cp13_ParamLimits

0x2b26,	// (0x000222a1) bg_popup_window_pane_cp13

0x35cb,	// (0x00022d46) listscroll_popup_fast_pane_ParamLimits

0x35cb,	// (0x00022d46) listscroll_popup_fast_pane

0x35da,	// (0x00022d55) grid_popup_fast_pane_ParamLimits

0x35da,	// (0x00022d55) grid_popup_fast_pane

0x35ec,	// (0x00022d67) scroll_pane_cp9_ParamLimits

0x35ec,	// (0x00022d67) scroll_pane_cp9

0x7d9c,	// (0x00027517) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7d9c,	// (0x00027517) list_single_graphic_hl_pane_t1_cp2

0x3610,	// (0x00022d8b) input_focus_pane_cp20_ParamLimits

0x3610,	// (0x00022d8b) input_focus_pane_cp20

0x361e,	// (0x00022d99) query_popup_data_pane_t1_ParamLimits

0x361e,	// (0x00022d99) query_popup_data_pane_t1

0x3631,	// (0x00022dac) query_popup_data_pane_t2_ParamLimits

0x3631,	// (0x00022dac) query_popup_data_pane_t2

0x3677,	// (0x00022df2) query_popup_data_pane_t3_ParamLimits

0x3677,	// (0x00022df2) query_popup_data_pane_t3

0x36b8,	// (0x00022e33) query_popup_data_pane_t4_ParamLimits

0x36b8,	// (0x00022e33) query_popup_data_pane_t4

0x36f4,	// (0x00022e6f) query_popup_data_pane_t5_ParamLimits

0x36f4,	// (0x00022e6f) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0002ee60) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0002ee60) query_popup_data_pane_t

0x3414,	// (0x00022b8f) bg_set_opt_pane_g1

0x341c,	// (0x00022b97) bg_set_opt_pane_g2

0x3424,	// (0x00022b9f) bg_set_opt_pane_g3

0x342c,	// (0x00022ba7) bg_set_opt_pane_g4

0x3434,	// (0x00022baf) bg_set_opt_pane_g5

0x343c,	// (0x00022bb7) bg_set_opt_pane_g6

0x3444,	// (0x00022bbf) bg_set_opt_pane_g7

0x344c,	// (0x00022bc7) bg_set_opt_pane_g8

0x3454,	// (0x00022bcf) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0002ee6b) bg_set_opt_pane_g

0x16c5,	// (0x00020e40) control_top_pane_stacon_ParamLimits

0x16c5,	// (0x00020e40) control_top_pane_stacon

0x1718,	// (0x00020e93) signal_pane_stacon_ParamLimits

0x1718,	// (0x00020e93) signal_pane_stacon

0x3cac,	// (0x00023427) stacon_top_pane_g1_ParamLimits

0x3cac,	// (0x00023427) stacon_top_pane_g1

0x173d,	// (0x00020eb8) title_pane_stacon_ParamLimits

0x173d,	// (0x00020eb8) title_pane_stacon

0x1767,	// (0x00020ee2) uni_indicator_pane_stacon_ParamLimits

0x1767,	// (0x00020ee2) uni_indicator_pane_stacon

0x177f,	// (0x00020efa) battery_pane_stacon_ParamLimits

0x177f,	// (0x00020efa) battery_pane_stacon

0x17c3,	// (0x00020f3e) control_bottom_pane_stacon_ParamLimits

0x17c3,	// (0x00020f3e) control_bottom_pane_stacon

0x17e6,	// (0x00020f61) navi_pane_stacon_ParamLimits

0x17e6,	// (0x00020f61) navi_pane_stacon

0x3cce,	// (0x00023449) stacon_bottom_pane_g1_ParamLimits

0x3cce,	// (0x00023449) stacon_bottom_pane_g1

0x1422,	// (0x00020b9d) aid_levels_signal_lsc_ParamLimits

0x1422,	// (0x00020b9d) aid_levels_signal_lsc

0x1439,	// (0x00020bb4) signal_pane_stacon_g1_ParamLimits

0x1439,	// (0x00020bb4) signal_pane_stacon_g1

0x144d,	// (0x00020bc8) signal_pane_stacon_g2_ParamLimits

0x144d,	// (0x00020bc8) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0002ee7e) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0002ee7e) signal_pane_stacon_g

0x1482,	// (0x00020bfd) title_pane_stacon_t1_ParamLimits

0x1482,	// (0x00020bfd) title_pane_stacon_t1

0x3738,	// (0x00022eb3) uni_indicator_pane_stacon_g1

0x3742,	// (0x00022ebd) uni_indicator_pane_stacon_g2

0x374c,	// (0x00022ec7) uni_indicator_pane_stacon_g3

0x3756,	// (0x00022ed1) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0002ee8a) uni_indicator_pane_stacon_g

0x14a7,	// (0x00020c22) control_top_pane_stacon_g1

0x14af,	// (0x00020c2a) control_top_pane_stacon_t1_ParamLimits

0x14af,	// (0x00020c2a) control_top_pane_stacon_t1

0x14e6,	// (0x00020c61) aid_levels_battery_lsc_ParamLimits

0x14e6,	// (0x00020c61) aid_levels_battery_lsc

0x14fe,	// (0x00020c79) battery_pane_stacon_g1_ParamLimits

0x14fe,	// (0x00020c79) battery_pane_stacon_g1

0x1511,	// (0x00020c8c) battery_pane_stacon_g2_ParamLimits

0x1511,	// (0x00020c8c) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0002ee93) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0002ee93) battery_pane_stacon_g

0x154f,	// (0x00020cca) navi_icon_pane_stacon

0x1563,	// (0x00020cde) navi_navi_pane_stacon

0x154f,	// (0x00020cca) navi_text_pane_stacon

0x14a7,	// (0x00020c22) control_bottom_pane_stacon_g1

0x1579,	// (0x00020cf4) control_bottom_pane_stacon_t1_ParamLimits

0x1579,	// (0x00020cf4) control_bottom_pane_stacon_t1

0xc80c,	// (0x0002bf87) grid_app_pane_ParamLimits

0xc80c,	// (0x0002bf87) grid_app_pane

0xc844,	// (0x0002bfbf) scroll_pane_cp15_ParamLimits

0xc844,	// (0x0002bfbf) scroll_pane_cp15

0xc861,	// (0x0002bfdc) cell_app_pane_ParamLimits

0xc861,	// (0x0002bfdc) cell_app_pane

0xc8a2,	// (0x0002c01d) cell_app_pane_g1_ParamLimits

0xc8a2,	// (0x0002c01d) cell_app_pane_g1

0x3803,	// (0x00022f7e) cell_app_pane_g2_ParamLimits

0x3803,	// (0x00022f7e) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0002ee98) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0002ee98) cell_app_pane_g

0x380f,	// (0x00022f8a) cell_app_pane_t1_ParamLimits

0x380f,	// (0x00022f8a) cell_app_pane_t1

0x3821,	// (0x00022f9c) grid_highlight_pane_ParamLimits

0x3821,	// (0x00022f9c) grid_highlight_pane

0x3414,	// (0x00022b8f) cell_highlight_pane_g1

0x341c,	// (0x00022b97) cell_highlight_pane_g2

0x3424,	// (0x00022b9f) cell_highlight_pane_g3

0x342c,	// (0x00022ba7) cell_highlight_pane_g4

0x3434,	// (0x00022baf) cell_highlight_pane_g5

0x343c,	// (0x00022bb7) cell_highlight_pane_g6

0x3444,	// (0x00022bbf) cell_highlight_pane_g7

0x344c,	// (0x00022bc7) cell_highlight_pane_g8

0x3454,	// (0x00022bcf) cell_highlight_pane_g9

0x2a3c,	// (0x000221b7) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0002ee46) cell_highlight_pane_g

0x3832,	// (0x00022fad) bg_scroll_pane

0x15c3,	// (0x00020d3e) scroll_handle_pane

0x3879,	// (0x00022ff4) scroll_bg_pane_g1

0x388e,	// (0x00023009) scroll_bg_pane_g2

0x38a6,	// (0x00023021) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0002ee9d) scroll_bg_pane_g

0x38bb,	// (0x00023036) scroll_handle_focus_pane_ParamLimits

0x38bb,	// (0x00023036) scroll_handle_focus_pane

0x3879,	// (0x00022ff4) scroll_handle_pane_g1

0x38c8,	// (0x00023043) scroll_handle_pane_g2

0x38a6,	// (0x00023021) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0002eea4) scroll_handle_pane_g

0x3465,	// (0x00022be0) bg_popup_sub_pane_cp21_ParamLimits

0x3465,	// (0x00022be0) bg_popup_sub_pane_cp21

0x38dc,	// (0x00023057) popup_fep_japan_predictive_window_t1_ParamLimits

0x38dc,	// (0x00023057) popup_fep_japan_predictive_window_t1

0x38f3,	// (0x0002306e) popup_fep_japan_predictive_window_t2_ParamLimits

0x38f3,	// (0x0002306e) popup_fep_japan_predictive_window_t2

0x3926,	// (0x000230a1) popup_fep_japan_predictive_window_t3_ParamLimits

0x3926,	// (0x000230a1) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0002eeab) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0002eeab) popup_fep_japan_predictive_window_t

0x2a46,	// (0x000221c1) bg_popup_sub_pane_cp23

0x395d,	// (0x000230d8) listscroll_japin_cand_pane

0x3965,	// (0x000230e0) popup_fep_japan_candidate_window_t1

0x3973,	// (0x000230ee) candidate_pane_ParamLimits

0x3973,	// (0x000230ee) candidate_pane

0x3985,	// (0x00023100) scroll_pane_cp30

0x398f,	// (0x0002310a) list_single_popup_jap_candidate_pane_ParamLimits

0x398f,	// (0x0002310a) list_single_popup_jap_candidate_pane

0x2a46,	// (0x000221c1) list_highlight_pane_cp30

0x39a3,	// (0x0002311e) list_single_popup_jap_candidate_pane_t1

0xc8c6,	// (0x0002c041) level_1_signal

0xc8d8,	// (0x0002c053) level_2_signal

0xc8eb,	// (0x0002c066) level_3_signal

0xc8fe,	// (0x0002c079) level_4_signal

0xc911,	// (0x0002c08c) level_5_signal

0xc924,	// (0x0002c09f) level_6_signal

0xc937,	// (0x0002c0b2) level_7_signal

0xc8c6,	// (0x0002c041) level_1_battery

0xc8d8,	// (0x0002c053) level_2_battery

0xc8eb,	// (0x0002c066) level_3_battery

0xc8fe,	// (0x0002c079) level_4_battery

0xc911,	// (0x0002c08c) level_5_battery

0xc924,	// (0x0002c09f) level_6_battery

0xc937,	// (0x0002c0b2) level_7_battery

0x3a25,	// (0x000231a0) list_menu_pane_ParamLimits

0x3a25,	// (0x000231a0) list_menu_pane

0x3a36,	// (0x000231b1) scroll_pane_cp25_ParamLimits

0x3a36,	// (0x000231b1) scroll_pane_cp25

0x3a4f,	// (0x000231ca) list_double2_graphic_pane_cp2_ParamLimits

0x3a4f,	// (0x000231ca) list_double2_graphic_pane_cp2

0x3a4f,	// (0x000231ca) list_double2_large_graphic_pane_cp2_ParamLimits

0x3a4f,	// (0x000231ca) list_double2_large_graphic_pane_cp2

0x3a4f,	// (0x000231ca) list_double2_pane_cp2_ParamLimits

0x3a4f,	// (0x000231ca) list_double2_pane_cp2

0x3a4f,	// (0x000231ca) list_double_graphic_pane_cp2_ParamLimits

0x3a4f,	// (0x000231ca) list_double_graphic_pane_cp2

0x3a4f,	// (0x000231ca) list_double_large_graphic_pane_cp2_ParamLimits

0x3a4f,	// (0x000231ca) list_double_large_graphic_pane_cp2

0x3a4f,	// (0x000231ca) list_double_number_pane_cp2_ParamLimits

0x3a4f,	// (0x000231ca) list_double_number_pane_cp2

0x3a4f,	// (0x000231ca) list_double_pane_cp2_ParamLimits

0x3a4f,	// (0x000231ca) list_double_pane_cp2

0xc94a,	// (0x0002c0c5) list_single_2graphic_pane_cp2_ParamLimits

0xc94a,	// (0x0002c0c5) list_single_2graphic_pane_cp2

0xc94a,	// (0x0002c0c5) list_single_graphic_heading_pane_cp2_ParamLimits

0xc94a,	// (0x0002c0c5) list_single_graphic_heading_pane_cp2

0xc94a,	// (0x0002c0c5) list_single_graphic_pane_cp2_ParamLimits

0xc94a,	// (0x0002c0c5) list_single_graphic_pane_cp2

0xc94a,	// (0x0002c0c5) list_single_heading_pane_cp2_ParamLimits

0xc94a,	// (0x0002c0c5) list_single_heading_pane_cp2

0x3a92,	// (0x0002320d) list_single_large_graphic_pane_cp2_ParamLimits

0x3a92,	// (0x0002320d) list_single_large_graphic_pane_cp2

0xc94a,	// (0x0002c0c5) list_single_number_heading_pane_cp2_ParamLimits

0xc94a,	// (0x0002c0c5) list_single_number_heading_pane_cp2

0xc94a,	// (0x0002c0c5) list_single_number_pane_cp2_ParamLimits

0xc94a,	// (0x0002c0c5) list_single_number_pane_cp2

0xc94a,	// (0x0002c0c5) list_single_pane_cp2_ParamLimits

0xc94a,	// (0x0002c0c5) list_single_pane_cp2

0x3ae7,	// (0x00023262) bg_popup_sub_pane_cp22

0x1675,	// (0x00020df0) popup_side_volume_key_window_g1

0x169f,	// (0x00020e1a) popup_side_volume_key_window_t1

0x16bd,	// (0x00020e38) volume_small_pane_cp1

0x2da2,	// (0x0002251d) bg_popup_sub_pane_cp24_ParamLimits

0x2da2,	// (0x0002251d) bg_popup_sub_pane_cp24

0x3afd,	// (0x00023278) fep_china_uni_candidate_pane_ParamLimits

0x3afd,	// (0x00023278) fep_china_uni_candidate_pane

0x3b11,	// (0x0002328c) fep_china_uni_entry_pane

0x3b21,	// (0x0002329c) popup_fep_china_uni_window_g1

0x3b49,	// (0x000232c4) fep_china_uni_entry_pane_g1

0x3b53,	// (0x000232ce) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0002eed8) fep_china_uni_entry_pane_g

0x3b5d,	// (0x000232d8) fep_entry_item_pane

0x3b67,	// (0x000232e2) fep_candidate_item_pane

0x3b6f,	// (0x000232ea) fep_china_uni_candidate_pane_g1

0x3b79,	// (0x000232f4) fep_china_uni_candidate_pane_g2

0x3b81,	// (0x000232fc) fep_china_uni_candidate_pane_g3

0x3b89,	// (0x00023304) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0002eedd) fep_china_uni_candidate_pane_g

0x2a3c,	// (0x000221b7) fep_entry_item_pane_g1

0x3b93,	// (0x0002330e) fep_entry_item_pane_t1_ParamLimits

0x3b93,	// (0x0002330e) fep_entry_item_pane_t1

0x3ba9,	// (0x00023324) fep_candidate_item_pane_t1_ParamLimits

0x3ba9,	// (0x00023324) fep_candidate_item_pane_t1

0x3bbe,	// (0x00023339) fep_candidate_item_pane_t2_ParamLimits

0x3bbe,	// (0x00023339) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0002eee6) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0002eee6) fep_candidate_item_pane_t

0x2b26,	// (0x000222a1) list_highlight_pane_cp31_ParamLimits

0x2b26,	// (0x000222a1) list_highlight_pane_cp31

0x3bd0,	// (0x0002334b) level_1_signal_lsc

0x3bd9,	// (0x00023354) level_2_signal_lsc

0x3be2,	// (0x0002335d) level_3_signal_lsc

0x3beb,	// (0x00023366) level_4_signal_lsc

0x3bf4,	// (0x0002336f) level_5_signal_lsc

0x3bfd,	// (0x00023378) level_6_signal_lsc

0x3c06,	// (0x00023381) level_7_signal_lsc

0x3c06,	// (0x00023381) level_1_battery_lsc

0x3c0f,	// (0x0002338a) level_2_battery_lsc

0x3c18,	// (0x00023393) level_3_battery_lsc

0x3c21,	// (0x0002339c) level_4_battery_lsc

0x3c2a,	// (0x000233a5) level_5_battery_lsc

0x3c33,	// (0x000233ae) level_6_battery_lsc

0x3bd0,	// (0x0002334b) level_7_battery_lsc

0x3c3c,	// (0x000233b7) scroll_handle_focus_pane_g1

0x3c45,	// (0x000233c0) scroll_handle_focus_pane_g2

0x3c4e,	// (0x000233c9) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0002eeeb) scroll_handle_focus_pane_g

0xb73d,	// (0x0002aeb8) list_single_2graphic_pane_g1_ParamLimits

0xb73d,	// (0x0002aeb8) list_single_2graphic_pane_g1

0xb23c,	// (0x0002a9b7) list_single_2graphic_pane_g2_ParamLimits

0xb23c,	// (0x0002a9b7) list_single_2graphic_pane_g2

0x07c4,	// (0x0001ff3f) list_single_2graphic_pane_g3_ParamLimits

0x07c4,	// (0x0001ff3f) list_single_2graphic_pane_g3

0xb749,	// (0x0002aec4) list_single_2graphic_pane_g4_ParamLimits

0xb749,	// (0x0002aec4) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0002eef2) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0002eef2) list_single_2graphic_pane_g

0xb755,	// (0x0002aed0) list_single_2graphic_pane_t1_ParamLimits

0xb755,	// (0x0002aed0) list_single_2graphic_pane_t1

0xb783,	// (0x0002aefe) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb783,	// (0x0002aefe) list_double2_graphic_large_graphic_pane_g1

0xb2a7,	// (0x0002aa22) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb2a7,	// (0x0002aa22) list_double2_graphic_large_graphic_pane_g2

0xb273,	// (0x0002a9ee) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb273,	// (0x0002a9ee) list_double2_graphic_large_graphic_pane_g3

0xb795,	// (0x0002af10) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb795,	// (0x0002af10) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0002eefb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0002eefb) list_double2_graphic_large_graphic_pane_g

0xb7a1,	// (0x0002af1c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb7a1,	// (0x0002af1c) list_double2_graphic_large_graphic_pane_t1

0xb7b7,	// (0x0002af32) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb7b7,	// (0x0002af32) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0002ef04) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0002ef04) list_double2_graphic_large_graphic_pane_t

0x3d90,	// (0x0002350b) popup_fast_swap_window_ParamLimits

0x3d90,	// (0x0002350b) popup_fast_swap_window

0x3dae,	// (0x00023529) popup_side_volume_key_window

0x3dcc,	// (0x00023547) stacon_top_pane

0x3dd6,	// (0x00023551) status_pane_ParamLimits

0x3dd6,	// (0x00023551) status_pane

0x3dcc,	// (0x00023547) status_small_pane

0x2a46,	// (0x000221c1) control_pane

0x2a46,	// (0x000221c1) stacon_bottom_pane

0x3390,	// (0x00022b0b) scroll_pane_cp121

0x3387,	// (0x00022b02) set_content_pane

0xc9ad,	// (0x0002c128) bg_active_tab_pane_g1_cp1

0x3c60,	// (0x000233db) bg_active_tab_pane_g2_cp1

0xc9b6,	// (0x0002c131) bg_active_tab_pane_g3_cp1

0xc9ad,	// (0x0002c128) bg_passive_tab_pane_g1_cp1

0x3c60,	// (0x000233db) bg_passive_tab_pane_g2_cp1

0xc9b6,	// (0x0002c131) bg_passive_tab_pane_g3_cp1

0xc9bf,	// (0x0002c13a) bg_active_tab_pane_g1_cp2

0x3c60,	// (0x000233db) bg_active_tab_pane_g2_cp2

0xc9c8,	// (0x0002c143) bg_active_tab_pane_g3_cp2

0xc9bf,	// (0x0002c13a) bg_passive_tab_pane_g1_cp2

0x3c60,	// (0x000233db) bg_passive_tab_pane_g2_cp2

0xc9c8,	// (0x0002c143) bg_passive_tab_pane_g3_cp2

0xc9d1,	// (0x0002c14c) bg_active_tab_pane_g1_cp3

0x3c60,	// (0x000233db) bg_active_tab_pane_g2_cp3

0xc9da,	// (0x0002c155) bg_active_tab_pane_g3_cp3

0xc9d1,	// (0x0002c14c) bg_passive_tab_pane_g1_cp3

0x3c60,	// (0x000233db) bg_passive_tab_pane_g2_cp3

0xc9da,	// (0x0002c155) bg_passive_tab_pane_g3_cp3

0xc9e3,	// (0x0002c15e) bg_active_tab_pane_g1_cp4

0x3c60,	// (0x000233db) bg_active_tab_pane_g2_cp4

0xc9ec,	// (0x0002c167) bg_active_tab_pane_g3_cp4

0xc9e3,	// (0x0002c15e) bg_passive_tab_pane_g1_cp4

0x3c60,	// (0x000233db) bg_passive_tab_pane_g2_cp4

0xc9ec,	// (0x0002c167) bg_passive_tab_pane_g3_cp4

0x3cea,	// (0x00023465) bg_active_tab_pane_g1_cp5

0x3c60,	// (0x000233db) bg_active_tab_pane_g2_cp5

0x3cf3,	// (0x0002346e) bg_active_tab_pane_g3_cp5

0x3cea,	// (0x00023465) bg_passive_tab_pane_g1_cp5

0x3c60,	// (0x000233db) bg_passive_tab_pane_g2_cp5

0x3cf3,	// (0x0002346e) bg_passive_tab_pane_g3_cp5

0x3537,	// (0x00022cb2) list_set_graphic_pane_ParamLimits

0x3537,	// (0x00022cb2) list_set_graphic_pane

0x2a46,	// (0x000221c1) bg_set_opt_pane_cp4

0xc9f5,	// (0x0002c170) list_set_graphic_pane_g1_ParamLimits

0xc9f5,	// (0x0002c170) list_set_graphic_pane_g1

0xca01,	// (0x0002c17c) list_set_graphic_pane_g2_ParamLimits

0xca01,	// (0x0002c17c) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0002ef09) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0002ef09) list_set_graphic_pane_g

0x0009,

0xfaf4,	// (0x0002f26f) volume_small_pane_cp_g

0x3d41,	// (0x000234bc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3d41,	// (0x000234bc) list_double2_large_graphic_pane_g1_cp2

0x3d4f,	// (0x000234ca) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3d4f,	// (0x000234ca) list_double2_large_graphic_pane_g2_cp2

0x3d60,	// (0x000234db) list_double2_large_graphic_pane_g3_cp2

0x3d68,	// (0x000234e3) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3d68,	// (0x000234e3) list_double2_large_graphic_pane_t1_cp2

0x3d7e,	// (0x000234f9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3d7e,	// (0x000234f9) list_double2_large_graphic_pane_t2_cp2

0x5fce,	// (0x00025749) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5fce,	// (0x00025749) list_double_large_graphic_pane_g1_cp2

0x5fe1,	// (0x0002575c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5fe1,	// (0x0002575c) list_double_large_graphic_pane_g2_cp2

0x3ef4,	// (0x0002366f) list_double_large_graphic_pane_g3_cp2

0x5ff2,	// (0x0002576d) list_double_large_graphic_pane_g4_cp

0x5ffa,	// (0x00025775) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5ffa,	// (0x00025775) list_double_large_graphic_pane_t1_cp2

0x6011,	// (0x0002578c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6011,	// (0x0002578c) list_double_large_graphic_pane_t2_cp2

0x3de4,	// (0x0002355f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3de4,	// (0x0002355f) list_double2_graphic_pane_g1_cp2

0x3df2,	// (0x0002356d) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3df2,	// (0x0002356d) list_double2_graphic_pane_g2_cp2

0x3e03,	// (0x0002357e) list_double2_graphic_pane_g3_cp2

0x3e0d,	// (0x00023588) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3e0d,	// (0x00023588) list_double2_graphic_pane_t1_cp2

0x3e23,	// (0x0002359e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3e23,	// (0x0002359e) list_double2_graphic_pane_t2_cp2

0x3e35,	// (0x000235b0) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3e35,	// (0x000235b0) list_single_number_heading_pane_g1_cp2

0x3e41,	// (0x000235bc) list_single_number_heading_pane_g2_cp2

0x3e49,	// (0x000235c4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3e49,	// (0x000235c4) list_single_number_heading_pane_t1_cp2

0x3e5f,	// (0x000235da) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3e5f,	// (0x000235da) list_single_number_heading_pane_t2_cp2

0x3e73,	// (0x000235ee) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3e73,	// (0x000235ee) list_single_number_heading_pane_t3_cp2

0x3e35,	// (0x000235b0) list_single_heading_pane_g1_cp2_ParamLimits

0x3e35,	// (0x000235b0) list_single_heading_pane_g1_cp2

0x3e41,	// (0x000235bc) list_single_heading_pane_g2_cp2

0x3e49,	// (0x000235c4) list_single_heading_pane_t1_cp2_ParamLimits

0x3e49,	// (0x000235c4) list_single_heading_pane_t1_cp2

0x5dc8,	// (0x00025543) list_single_heading_pane_t2_cp2_ParamLimits

0x5dc8,	// (0x00025543) list_single_heading_pane_t2_cp2

0x5d0a,	// (0x00025485) list_double_graphic_pane_g1_cp2_ParamLimits

0x5d0a,	// (0x00025485) list_double_graphic_pane_g1_cp2

0x5d16,	// (0x00025491) list_double_graphic_pane_g2_cp2_ParamLimits

0x5d16,	// (0x00025491) list_double_graphic_pane_g2_cp2

0x5d25,	// (0x000254a0) list_double_graphic_pane_g3_cp2

0x5d2d,	// (0x000254a8) list_double_graphic_pane_t1_cp2_ParamLimits

0x5d2d,	// (0x000254a8) list_double_graphic_pane_t1_cp2

0x5d43,	// (0x000254be) list_double_graphic_pane_t2_cp2_ParamLimits

0x5d43,	// (0x000254be) list_double_graphic_pane_t2_cp2

0x3ee8,	// (0x00023663) list_double_number_pane_g1_cp2_ParamLimits

0x3ee8,	// (0x00023663) list_double_number_pane_g1_cp2

0x3ef4,	// (0x0002366f) list_double_number_pane_g2_cp2

0x5cce,	// (0x00025449) list_double_number_pane_t1_cp2_ParamLimits

0x5cce,	// (0x00025449) list_double_number_pane_t1_cp2

0x5ce2,	// (0x0002545d) list_double_number_pane_t2_cp2_ParamLimits

0x5ce2,	// (0x0002545d) list_double_number_pane_t2_cp2

0x5cf8,	// (0x00025473) list_double_number_pane_t3_cp2_ParamLimits

0x5cf8,	// (0x00025473) list_double_number_pane_t3_cp2

0x5bb7,	// (0x00025332) list_single_graphic_pane_g1_cp2_ParamLimits

0x5bb7,	// (0x00025332) list_single_graphic_pane_g1_cp2

0x3f4e,	// (0x000236c9) list_single_graphic_pane_g2_cp2_ParamLimits

0x3f4e,	// (0x000236c9) list_single_graphic_pane_g2_cp2

0x3f5a,	// (0x000236d5) list_single_graphic_pane_g3_cp2

0x5b8d,	// (0x00025308) list_single_graphic_pane_t1_cp2_ParamLimits

0x5b8d,	// (0x00025308) list_single_graphic_pane_t1_cp2

0x3f4e,	// (0x000236c9) list_single_number_pane_g1_cp2_ParamLimits

0x3f4e,	// (0x000236c9) list_single_number_pane_g1_cp2

0x3f5a,	// (0x000236d5) list_single_number_pane_g2_cp2

0x5b8d,	// (0x00025308) list_single_number_pane_t1_cp2_ParamLimits

0x5b8d,	// (0x00025308) list_single_number_pane_t1_cp2

0x5ba3,	// (0x0002531e) list_single_number_pane_t2_cp2_ParamLimits

0x5ba3,	// (0x0002531e) list_single_number_pane_t2_cp2

0x3d4f,	// (0x000234ca) list_double2_pane_g1_cp2_ParamLimits

0x3d4f,	// (0x000234ca) list_double2_pane_g1_cp2

0x3d60,	// (0x000234db) list_double2_pane_g2_cp2

0x3ec0,	// (0x0002363b) list_double2_pane_t1_cp2_ParamLimits

0x3ec0,	// (0x0002363b) list_double2_pane_t1_cp2

0x3ed6,	// (0x00023651) list_double2_pane_t2_cp2_ParamLimits

0x3ed6,	// (0x00023651) list_double2_pane_t2_cp2

0x3ee8,	// (0x00023663) list_double_pane_g1_cp2_ParamLimits

0x3ee8,	// (0x00023663) list_double_pane_g1_cp2

0x3ef4,	// (0x0002366f) list_double_pane_g2_cp2

0x3efc,	// (0x00023677) list_double_pane_t1_cp2_ParamLimits

0x3efc,	// (0x00023677) list_double_pane_t1_cp2

0x3f12,	// (0x0002368d) list_double_pane_t2_cp2_ParamLimits

0x3f12,	// (0x0002368d) list_double_pane_t2_cp2

0x3f3e,	// (0x000236b9) list_single_pane_cp2_g3

0x3f4e,	// (0x000236c9) list_single_pane_g1_cp2_ParamLimits

0x3f4e,	// (0x000236c9) list_single_pane_g1_cp2

0x3f5a,	// (0x000236d5) list_single_pane_g2_cp2

0x3f62,	// (0x000236dd) list_single_pane_t1_cp2_ParamLimits

0x3f62,	// (0x000236dd) list_single_pane_t1_cp2

0x3f7a,	// (0x000236f5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3f7a,	// (0x000236f5) list_single_large_graphic_pane_g1_cp2

0x3f88,	// (0x00023703) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3f88,	// (0x00023703) list_single_large_graphic_pane_g2_cp2

0x3f94,	// (0x0002370f) list_single_large_graphic_pane_g3_cp2

0x3f9c,	// (0x00023717) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3f9c,	// (0x00023717) list_single_large_graphic_pane_g4_cp1

0x3fb6,	// (0x00023731) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3fb6,	// (0x00023731) list_single_large_graphic_pane_t1_cp2

0x5b57,	// (0x000252d2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5b57,	// (0x000252d2) list_single_graphic_heading_pane_g1_cp2

0x5b24,	// (0x0002529f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5b24,	// (0x0002529f) list_single_graphic_heading_pane_g4_cp2

0x3f5a,	// (0x000236d5) list_single_graphic_heading_pane_g5_cp2

0x5b63,	// (0x000252de) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5b63,	// (0x000252de) list_single_graphic_heading_pane_t1_cp2

0x5b79,	// (0x000252f4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5b79,	// (0x000252f4) list_single_graphic_heading_pane_t2_cp2

0x5b18,	// (0x00025293) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5b18,	// (0x00025293) list_single_2graphic_pane_g1_cp2

0x5b24,	// (0x0002529f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5b24,	// (0x0002529f) list_single_2graphic_pane_g2_cp2

0x3f5a,	// (0x000236d5) list_single_2graphic_pane_g3_cp2

0x5b35,	// (0x000252b0) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5b35,	// (0x000252b0) list_single_2graphic_pane_g4_cp2

0x5b41,	// (0x000252bc) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5b41,	// (0x000252bc) list_single_2graphic_pane_t1_cp2

0x2a3c,	// (0x000221b7) list_highlight_pane_g10_cp1

0x56f0,	// (0x00024e6b) list_highlight_pane_g1_cp1

0x56f8,	// (0x00024e73) list_highlight_pane_g2_cp1

0x5700,	// (0x00024e7b) list_highlight_pane_g3_cp1

0x5708,	// (0x00024e83) list_highlight_pane_g4_cp1

0x5710,	// (0x00024e8b) list_highlight_pane_g5_cp1

0x5718,	// (0x00024e93) list_highlight_pane_g6_cp1

0x5720,	// (0x00024e9b) list_highlight_pane_g7_cp1

0x5728,	// (0x00024ea3) list_highlight_pane_g8_cp1

0x5730,	// (0x00024eab) list_highlight_pane_g9_cp1

0xd72b,	// (0x0002cea6) form_field_slider_pane_t3

0xd739,	// (0x0002ceb4) form_field_slider_pane_t4

0x562c,	// (0x00024da7) slider_form_pane_ParamLimits

0x562c,	// (0x00024da7) slider_form_pane

0x2a46,	// (0x000221c1) control_abbreviations

0x2a46,	// (0x000221c1) control_conventions

0x2a46,	// (0x000221c1) control_definitions

0x2a46,	// (0x000221c1) format_table_attribute

0x5e1e,	// (0x00025599) bg_popup_preview_window_pane_g9

0x2a46,	// (0x000221c1) format_table_data2

0x2a46,	// (0x000221c1) format_table_data3

0x2a46,	// (0x000221c1) format_table_data_example

0x0008,

0x2a46,	// (0x000221c1) intro_purpose

0xf91e,	// (0x0002f099) bg_popup_preview_window_pane_g

0x2a46,	// (0x000221c1) texts_category

0x2a46,	// (0x000221c1) texts_graphics

0x3fcc,	// (0x00023747) text_digital

0x3fdb,	// (0x00023756) text_primary

0x3fea,	// (0x00023765) text_primary_small

0x3ff9,	// (0x00023774) text_secondary

0x4008,	// (0x00023783) text_title

0x65ba,	// (0x00025d35) bg_passive_tab_pane_g1_cp3_srt

0x3c60,	// (0x000233db) bg_passive_tab_pane_g2_cp3_srt

0x65c3,	// (0x00025d3e) bg_passive_tab_pane_g3_cp3_srt

0x2da2,	// (0x0002251d) bg_active_tab_pane_cp3_srt_ParamLimits

0x2da2,	// (0x0002251d) bg_active_tab_pane_cp3_srt

0x65cc,	// (0x00025d47) tabs_4_active_pane_srt_g1

0xdb3e,	// (0x0002d2b9) tabs_4_active_pane_srt_t1_ParamLimits

0xdb3e,	// (0x0002d2b9) tabs_4_active_pane_srt_t1

0x65ba,	// (0x00025d35) bg_active_tab_pane_g1_cp3_copy1

0x3c60,	// (0x000233db) bg_active_tab_pane_g2_cp3_copy1

0x65c3,	// (0x00025d3e) bg_active_tab_pane_g3_cp3_copy1

0x2b26,	// (0x000222a1) tabs_2_long_active_pane_srt_ParamLimits

0x2b26,	// (0x000222a1) tabs_2_long_active_pane_srt

0x2b26,	// (0x000222a1) tabs_2_long_passive_pane_srt_ParamLimits

0x2b26,	// (0x000222a1) tabs_2_long_passive_pane_srt

0x439d,	// (0x00023b18) bg_passive_tab_pane_cp4_srt_ParamLimits

0x439d,	// (0x00023b18) bg_passive_tab_pane_cp4_srt

0x626e,	// (0x000259e9) bg_passive_tab_pane_g1_cp4_srt

0x3c60,	// (0x000233db) bg_passive_tab_pane_g2_cp4_srt

0x6277,	// (0x000259f2) bg_passive_tab_pane_g3_cp4_srt

0x2b26,	// (0x000222a1) bg_active_tab_pane_cp4_srt_ParamLimits

0x2b26,	// (0x000222a1) bg_active_tab_pane_cp4_srt

0xd934,	// (0x0002d0af) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd934,	// (0x0002d0af) tabs_2_long_active_pane_srt_t1

0x626e,	// (0x000259e9) bg_active_tab_pane_g1_cp4_srt

0x3c60,	// (0x000233db) bg_active_tab_pane_g2_cp4_srt

0x6277,	// (0x000259f2) bg_active_tab_pane_g3_cp4_srt

0x2da2,	// (0x0002251d) tabs_3_long_active_pane_srt_ParamLimits

0x2da2,	// (0x0002251d) tabs_3_long_active_pane_srt

0x2da2,	// (0x0002251d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2da2,	// (0x0002251d) tabs_3_long_passive_pane_cp_srt

0x2da2,	// (0x0002251d) tabs_3_long_passive_pane_srt_ParamLimits

0x2da2,	// (0x0002251d) tabs_3_long_passive_pane_srt

0x439d,	// (0x00023b18) bg_passive_tab_pane_cp5_srt_ParamLimits

0x439d,	// (0x00023b18) bg_passive_tab_pane_cp5_srt

0x3cea,	// (0x00023465) bg_passive_tab_pane_g1_cp5_srt

0x3c60,	// (0x000233db) bg_passive_tab_pane_g2_cp5_srt

0x3cf3,	// (0x0002346e) bg_passive_tab_pane_g3_cp5_srt

0x2b26,	// (0x000222a1) bg_active_tab_pane_cp5_srt_ParamLimits

0x2b26,	// (0x000222a1) bg_active_tab_pane_cp5_srt

0xd91e,	// (0x0002d099) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd91e,	// (0x0002d099) tabs_3_long_active_pane_srt_t1

0x3cea,	// (0x00023465) bg_active_tab_pane_g1_cp5_srt

0x3c60,	// (0x000233db) bg_active_tab_pane_g2_cp5_srt

0x3cf3,	// (0x0002346e) bg_active_tab_pane_g3_cp5_srt

0x624e,	// (0x000259c9) navi_text_pane_srt_t1

0x6246,	// (0x000259c1) navi_icon_pane_srt_g1

0x41df,	// (0x0002395a) midp_editing_number_pane_srt

0x4017,	// (0x00023792) midp_ticker_pane_srt

0x41e7,	// (0x00023962) midp_ticker_pane_srt_g1

0x41ef,	// (0x0002396a) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0002ef28) midp_ticker_pane_srt_g

0x41f7,	// (0x00023972) midp_ticker_pane_srt_t1

0x6237,	// (0x000259b2) midp_editing_number_pane_t1_copy1

0xca25,	// (0x0002c1a0) listscroll_midp_pane

0xca25,	// (0x0002c1a0) midp_form_pane

0x408d,	// (0x00023808) midp_info_popup_window_ParamLimits

0x408d,	// (0x00023808) midp_info_popup_window

0x3465,	// (0x00022be0) bg_popup_sub_pane_cp50_ParamLimits

0x3465,	// (0x00022be0) bg_popup_sub_pane_cp50

0x5357,	// (0x00024ad2) listscroll_midp_info_pane_ParamLimits

0x5357,	// (0x00024ad2) listscroll_midp_info_pane

0x533f,	// (0x00024aba) listscroll_form_midp_pane_ParamLimits

0x533f,	// (0x00024aba) listscroll_form_midp_pane

0x534b,	// (0x00024ac6) scroll_bar_cp050

0xd71f,	// (0x0002ce9a) list_midp_pane

0x7013,	// (0x0002678e) signal_pane_g2_cp

0x5259,	// (0x000249d4) listscroll_midp_info_pane_t1_ParamLimits

0x5259,	// (0x000249d4) listscroll_midp_info_pane_t1

0x5271,	// (0x000249ec) listscroll_midp_info_pane_t2_ParamLimits

0x5271,	// (0x000249ec) listscroll_midp_info_pane_t2

0x52af,	// (0x00024a2a) listscroll_midp_info_pane_t3_ParamLimits

0x52af,	// (0x00024a2a) listscroll_midp_info_pane_t3

0x52e9,	// (0x00024a64) listscroll_midp_info_pane_t4_ParamLimits

0x52e9,	// (0x00024a64) listscroll_midp_info_pane_t4

0x0003,

0xf859,	// (0x0002efd4) listscroll_midp_info_pane_t_ParamLimits

0xf859,	// (0x0002efd4) listscroll_midp_info_pane_t

0x352f,	// (0x00022caa) scroll_pane_cp21

0x51f3,	// (0x0002496e) form_midp_field_choice_group_pane

0x51fc,	// (0x00024977) form_midp_field_text_pane

0x523f,	// (0x000249ba) form_midp_field_time_pane

0x5247,	// (0x000249c2) form_midp_gauge_slider_pane

0x5250,	// (0x000249cb) form_midp_gauge_wait_pane

0x2a46,	// (0x000221c1) form_midp_image_pane

0xb7e5,	// (0x0002af60) list_single_midp_pane_ParamLimits

0xb7e5,	// (0x0002af60) list_single_midp_pane

0xd6f7,	// (0x0002ce72) form_midp_field_text_pane_t1

0x4fcb,	// (0x00024746) input_focus_pane_cp050

0x51e2,	// (0x0002495d) list_midp_form_text_pane

0x5186,	// (0x00024901) form_midp_field_choice_group_pane_t1

0x5194,	// (0x0002490f) input_focus_pane_cp051

0x51a8,	// (0x00024923) list_midp_choice_pane

0x2a46,	// (0x000221c1) status_idle_pane

0x516a,	// (0x000248e5) form_midp_field_time_pane_t1

0x2a3c,	// (0x000221b7) wait_anim_pane_g2_copy1

0x5178,	// (0x000248f3) form_midp_field_time_pane_t2

0x0001,

0x413d,	// (0x000238b8) aid_navinavi_width_2_pane

0xf854,	// (0x0002efcf) form_midp_field_time_pane_t

0x2a46,	// (0x000221c1) input_focus_pane_cp052

0x2a46,	// (0x000221c1) bg_input_focus_pane_cp040

0x512a,	// (0x000248a5) form_midp_gauge_slider_pane_t1

0x5138,	// (0x000248b3) form_midp_gauge_slider_pane_t2

0xd6db,	// (0x0002ce56) form_midp_gauge_slider_pane_t3

0xd6e9,	// (0x0002ce64) form_midp_gauge_slider_pane_t4

0x0003,

0xf84b,	// (0x0002efc6) form_midp_gauge_slider_pane_t

0x5162,	// (0x000248dd) form_midp_slider_pane

0x2b26,	// (0x000222a1) bg_input_focus_pane_cp041_ParamLimits

0x2b26,	// (0x000222a1) bg_input_focus_pane_cp041

0x50f7,	// (0x00024872) form_midp_gauge_wait_pane_t1_ParamLimits

0x50f7,	// (0x00024872) form_midp_gauge_wait_pane_t1

0x5109,	// (0x00024884) form_midp_gauge_wait_pane_t2_ParamLimits

0x5109,	// (0x00024884) form_midp_gauge_wait_pane_t2

0x0001,

0xf846,	// (0x0002efc1) form_midp_gauge_wait_pane_t_ParamLimits

0xf846,	// (0x0002efc1) form_midp_gauge_wait_pane_t

0x511b,	// (0x00024896) form_midp_wait_pane_ParamLimits

0x511b,	// (0x00024896) form_midp_wait_pane

0x50bf,	// (0x0002483a) form_midp_image_pane_g1

0x50c8,	// (0x00024843) form_midp_image_pane_t1

0x50d7,	// (0x00024852) form_midp_image_pane_t2

0x50e6,	// (0x00024861) form_midp_image_pane_t3

0x0002,

0xf83f,	// (0x0002efba) form_midp_image_pane_t

0x50b6,	// (0x00024831) list_single_midp_pane_g1

0x087c,	// (0x0001fff7) list_single_midp_pane_t1

0xd6c4,	// (0x0002ce3f) list_midp_form_item_pane_ParamLimits

0xd6c4,	// (0x0002ce3f) list_midp_form_item_pane

0x40e5,	// (0x00023860) list_midp_form_item_pane_t1

0x40f4,	// (0x0002386f) midp_ticker_pane_g1

0x4100,	// (0x0002387b) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0002ef0e) midp_ticker_pane_g

0xcacd,	// (0x0002c248) midp_ticker_pane_t1

0xdac3,	// (0x0002d23e) midp_editing_number_pane_t1

0x6494,	// (0x00025c0f) midp_editing_number_pane

0x64a3,	// (0x00025c1e) midp_ticker_pane

0x6227,	// (0x000259a2) ai_message_heading_pane

0x2a46,	// (0x000221c1) bg_popup_window_pane_cp14

0x622f,	// (0x000259aa) listscroll_ai_message_pane

0x61ad,	// (0x00025928) ai_message_heading_pane_g1_ParamLimits

0x61ad,	// (0x00025928) ai_message_heading_pane_g1

0x61b9,	// (0x00025934) ai_message_heading_pane_g2_ParamLimits

0x61b9,	// (0x00025934) ai_message_heading_pane_g2

0x61c7,	// (0x00025942) ai_message_heading_pane_g3_ParamLimits

0x61c7,	// (0x00025942) ai_message_heading_pane_g3

0x61d3,	// (0x0002594e) ai_message_heading_pane_g4_ParamLimits

0x61d3,	// (0x0002594e) ai_message_heading_pane_g4

0x0003,

0xf980,	// (0x0002f0fb) ai_message_heading_pane_g_ParamLimits

0xf980,	// (0x0002f0fb) ai_message_heading_pane_g

0x61df,	// (0x0002595a) ai_message_heading_pane_t1_ParamLimits

0x61df,	// (0x0002595a) ai_message_heading_pane_t1

0x61f9,	// (0x00025974) ai_message_heading_pane_t2_ParamLimits

0x61f9,	// (0x00025974) ai_message_heading_pane_t2

0x0001,

0xf989,	// (0x0002f104) ai_message_heading_pane_t_ParamLimits

0xf989,	// (0x0002f104) ai_message_heading_pane_t

0x620d,	// (0x00025988) bg_popup_heading_pane_cp1_ParamLimits

0x620d,	// (0x00025988) bg_popup_heading_pane_cp1

0x619b,	// (0x00025916) list_ai_message_pane_ParamLimits

0x619b,	// (0x00025916) list_ai_message_pane

0x352f,	// (0x00022caa) scroll_pane_cp10

0x6137,	// (0x000258b2) list_ai_message_pane_g1

0x613f,	// (0x000258ba) list_ai_message_pane_g2

0x0001,

0xf95d,	// (0x0002f0d8) list_ai_message_pane_g

0x6147,	// (0x000258c2) list_ai_message_pane_t1_ParamLimits

0x6147,	// (0x000258c2) list_ai_message_pane_t1

0x615c,	// (0x000258d7) list_ai_message_pane_t2_ParamLimits

0x615c,	// (0x000258d7) list_ai_message_pane_t2

0x6171,	// (0x000258ec) list_ai_message_pane_t3_ParamLimits

0x6171,	// (0x000258ec) list_ai_message_pane_t3

0x6186,	// (0x00025901) list_ai_message_pane_t4_ParamLimits

0x6186,	// (0x00025901) list_ai_message_pane_t4

0x0003,

0xf962,	// (0x0002f0dd) list_ai_message_pane_t_ParamLimits

0xf962,	// (0x0002f0dd) list_ai_message_pane_t

0xd904,	// (0x0002d07f) cell_ai_soft_ind_pane_ParamLimits

0xd904,	// (0x0002d07f) cell_ai_soft_ind_pane

0x411e,	// (0x00023899) cell_ai_soft_ind_pane_g1_ParamLimits

0x411e,	// (0x00023899) cell_ai_soft_ind_pane_g1

0x2a46,	// (0x000221c1) grid_highlight_cp1

0x412b,	// (0x000238a6) text_secondary_cp56_ParamLimits

0x412b,	// (0x000238a6) text_secondary_cp56

0x60f5,	// (0x00025870) example_general_pane_ParamLimits

0x60f5,	// (0x00025870) example_general_pane

0x6101,	// (0x0002587c) example_parent_pane_g1_ParamLimits

0x6101,	// (0x0002587c) example_parent_pane_g1

0x610d,	// (0x00025888) example_parent_pane_t1_ParamLimits

0x610d,	// (0x00025888) example_parent_pane_t1

0xcf23,	// (0x0002c69e) popup_preview_text_window_ParamLimits

0xcf23,	// (0x0002c69e) popup_preview_text_window

0x3f46,	// (0x000236c1) list_single_pane_cp2_g4

0x2e58,	// (0x000225d3) bg_popup_preview_window_pane_ParamLimits

0x2e58,	// (0x000225d3) bg_popup_preview_window_pane

0x5e28,	// (0x000255a3) popup_preview_text_window_t1_ParamLimits

0x5e28,	// (0x000255a3) popup_preview_text_window_t1

0x5e46,	// (0x000255c1) popup_preview_text_window_t2_ParamLimits

0x5e46,	// (0x000255c1) popup_preview_text_window_t2

0x5e8f,	// (0x0002560a) popup_preview_text_window_t3_ParamLimits

0x5e8f,	// (0x0002560a) popup_preview_text_window_t3

0x5ed4,	// (0x0002564f) popup_preview_text_window_t4_ParamLimits

0x5ed4,	// (0x0002564f) popup_preview_text_window_t4

0x0004,

0xf931,	// (0x0002f0ac) popup_preview_text_window_t_ParamLimits

0xf931,	// (0x0002f0ac) popup_preview_text_window_t

0x5f52,	// (0x000256cd) scroll_pane_cp11

0x4ed9,	// (0x00024654) bg_popup_preview_window_pane_g1

0x5ddc,	// (0x00025557) bg_popup_preview_window_pane_g2

0x5de6,	// (0x00025561) bg_popup_preview_window_pane_g3

0x5df0,	// (0x0002556b) bg_popup_preview_window_pane_g4

0x5dfa,	// (0x00025575) bg_popup_preview_window_pane_g5

0x5e04,	// (0x0002557f) bg_popup_preview_window_pane_g6

0x5e0c,	// (0x00025587) bg_popup_preview_window_pane_g7

0x5e14,	// (0x0002558f) bg_popup_preview_window_pane_g8

0x0fa7,	// (0x00020722) aid_popup_width_pane

0xce93,	// (0x0002c60e) popup_midp_note_alarm_window_ParamLimits

0xce93,	// (0x0002c60e) popup_midp_note_alarm_window

0x33a1,	// (0x00022b1c) data_form_pane_ParamLimits

0xb641,	// (0x0002adbc) form_field_data_pane_g1

0xb64b,	// (0x0002adc6) form_field_data_pane_t1_ParamLimits

0x33ad,	// (0x00022b28) input_focus_pane_ParamLimits

0x33bb,	// (0x00022b36) data_form_wide_pane_ParamLimits

0x0594,	// (0x0001fd0f) form_field_data_wide_pane_g1

0x05a0,	// (0x0001fd1b) form_field_data_wide_pane_t1_ParamLimits

0x311e,	// (0x00022899) input_focus_pane_cp6_ParamLimits

0xc7bf,	// (0x0002bf3a) input_popup_find_pane_g1_ParamLimits

0xc7bf,	// (0x0002bf3a) input_popup_find_pane_g1

0x1522,	// (0x00020c9d) aid_navi_side_left_pane

0x1537,	// (0x00020cb2) aid_navi_side_right_pane

0x57eb,	// (0x00024f66) bg_popup_window_pane_cp30_ParamLimits

0x57eb,	// (0x00024f66) bg_popup_window_pane_cp30

0x5865,	// (0x00024fe0) popup_midp_note_alarm_window_g1_ParamLimits

0x5865,	// (0x00024fe0) popup_midp_note_alarm_window_g1

0x5895,	// (0x00025010) popup_midp_note_alarm_window_t1_ParamLimits

0x5895,	// (0x00025010) popup_midp_note_alarm_window_t1

0x5936,	// (0x000250b1) popup_midp_note_alarm_window_t2_ParamLimits

0x5936,	// (0x000250b1) popup_midp_note_alarm_window_t2

0x59e4,	// (0x0002515f) popup_midp_note_alarm_window_t3_ParamLimits

0x59e4,	// (0x0002515f) popup_midp_note_alarm_window_t3

0x5a16,	// (0x00025191) popup_midp_note_alarm_window_t4_ParamLimits

0x5a16,	// (0x00025191) popup_midp_note_alarm_window_t4

0x5a3c,	// (0x000251b7) popup_midp_note_alarm_window_t5_ParamLimits

0x5a3c,	// (0x000251b7) popup_midp_note_alarm_window_t5

0x000a,

0xf8ce,	// (0x0002f049) popup_midp_note_alarm_window_t_ParamLimits

0xf8ce,	// (0x0002f049) popup_midp_note_alarm_window_t

0x5ae8,	// (0x00025263) wait_bar_pane_cp1_ParamLimits

0x5ae8,	// (0x00025263) wait_bar_pane_cp1

0x2a46,	// (0x000221c1) wait_anim_pane_copy1

0x2a46,	// (0x000221c1) wait_border_pane_copy1

0x54d0,	// (0x00024c4b) wait_border_pane_g1_copy1

0x05ba,	// (0x0001fd35) form_field_popup_pane_g1

0xb665,	// (0x0002ade0) form_field_popup_pane_t1_ParamLimits

0x33ad,	// (0x00022b28) input_focus_pane_cp7_ParamLimits

0x33e7,	// (0x00022b62) list_form_pane_ParamLimits

0x05dc,	// (0x0001fd57) form_field_popup_wide_pane_g1

0x05e4,	// (0x0001fd5f) form_field_popup_wide_pane_t1_ParamLimits

0x33ad,	// (0x00022b28) input_focus_pane_cp8_ParamLimits

0x33f3,	// (0x00022b6e) list_form_wide_pane_ParamLimits

0x6647,	// (0x00025dc2) aid_size_cell_graphic_pane

0xb6e4,	// (0x0002ae5f) data_form_pane_t1_ParamLimits

0xb814,	// (0x0002af8f) data_form_wide_pane_t1_ParamLimits

0xd320,	// (0x0002ca9b) bg_status_flat_pane

0xbc53,	// (0x0002b3ce) title_pane_t1_ParamLimits

0x2aee,	// (0x00022269) title_pane_t2_ParamLimits

0x2b14,	// (0x0002228f) title_pane_t3_ParamLimits

0xf59b,	// (0x0002ed16) title_pane_t_ParamLimits

0xc8c6,	// (0x0002c041) level_1_signal_ParamLimits

0xc8d8,	// (0x0002c053) level_2_signal_ParamLimits

0xc8eb,	// (0x0002c066) level_3_signal_ParamLimits

0xc8fe,	// (0x0002c079) level_4_signal_ParamLimits

0xc911,	// (0x0002c08c) level_5_signal_ParamLimits

0xc924,	// (0x0002c09f) level_6_signal_ParamLimits

0xc937,	// (0x0002c0b2) level_7_signal_ParamLimits

0xc8c6,	// (0x0002c041) level_1_battery_ParamLimits

0xc8d8,	// (0x0002c053) level_2_battery_ParamLimits

0xc8eb,	// (0x0002c066) level_3_battery_ParamLimits

0xc8fe,	// (0x0002c079) level_4_battery_ParamLimits

0xc911,	// (0x0002c08c) level_5_battery_ParamLimits

0xc924,	// (0x0002c09f) level_6_battery_ParamLimits

0xc937,	// (0x0002c0b2) level_7_battery_ParamLimits

0x56f0,	// (0x00024e6b) bg_status_flat_pane_g1

0x56f8,	// (0x00024e73) bg_status_flat_pane_g2

0x5700,	// (0x00024e7b) bg_status_flat_pane_g3

0x5708,	// (0x00024e83) bg_status_flat_pane_g4

0x5710,	// (0x00024e8b) bg_status_flat_pane_g5

0x5718,	// (0x00024e93) bg_status_flat_pane_g6

0x5720,	// (0x00024e9b) bg_status_flat_pane_g7

0xbce7,	// (0x0002b462) tabs_3_active_pane_t1_ParamLimits

0xbce7,	// (0x0002b462) tabs_3_passive_pane_t1_ParamLimits

0xbd01,	// (0x0002b47c) tabs_4_active_pane_t1_ParamLimits

0xbd01,	// (0x0002b47c) tabs_4_1_passive_pane_t1_ParamLimits

0xc7d5,	// (0x0002bf50) tabs_2_active_pane_t1_ParamLimits

0xc7d5,	// (0x0002bf50) tabs_2_passive_pane_t1_ParamLimits

0x2b26,	// (0x000222a1) bg_active_tab_pane_cp4_ParamLimits

0xc7e7,	// (0x0002bf62) tabs_2_long_active_pane_t1_ParamLimits

0x439d,	// (0x00023b18) bg_passive_tab_pane_cp4_ParamLimits

0x1a70,	// (0x000211eb) list_single_midp_graphic_pane_t1_ParamLimits

0x2b26,	// (0x000222a1) bg_active_tab_pane_cp5_ParamLimits

0xc7fa,	// (0x0002bf75) tabs_3_long_active_pane_t1_ParamLimits

0x439d,	// (0x00023b18) bg_passive_tab_pane_cp5_ParamLimits

0x1a70,	// (0x000211eb) list_single_midp_graphic_pane_t1

0xd320,	// (0x0002ca9b) bg_status_flat_pane_ParamLimits

0x4b52,	// (0x000242cd) indicator_pane_cp2_ParamLimits

0x4b52,	// (0x000242cd) indicator_pane_cp2

0xd4e9,	// (0x0002cc64) navi_pane_srt_ParamLimits

0xd4e9,	// (0x0002cc64) navi_pane_srt

0x4cb8,	// (0x00024433) popup_clock_digital_analogue_window_cp1

0x2c06,	// (0x00022381) indicator_pane_t1

0x4017,	// (0x00023792) copy_highlight_pane

0x4017,	// (0x00023792) cursor_graphics_pane

0x4017,	// (0x00023792) graphic_within_text_pane

0x4017,	// (0x00023792) link_highlight_pane

0x5f15,	// (0x00025690) popup_preview_text_window_t5_ParamLimits

0x5f15,	// (0x00025690) popup_preview_text_window_t5

0x4147,	// (0x000238c2) cursor_digital_pane

0x4147,	// (0x000238c2) cursor_primary_pane

0x4158,	// (0x000238d3) cursor_primary_small_pane

0x4160,	// (0x000238db) cursor_secondary_pane

0x4168,	// (0x000238e3) cursor_title_pane

0x4147,	// (0x000238c2) link_highlight_digital_pane

0x414f,	// (0x000238ca) link_highlight_primary_pane

0x4158,	// (0x000238d3) link_highlight_primary_small_pane

0x4160,	// (0x000238db) link_highlight_secondary_pane

0x4168,	// (0x000238e3) link_highlight_title_pane

0x4147,	// (0x000238c2) copy_highlight_digital_pane

0x4147,	// (0x000238c2) copy_highlight_primary_pane

0x4158,	// (0x000238d3) copy_highlight_primary_small_pane

0x4160,	// (0x000238db) copy_highlight_secondary_pane

0x4168,	// (0x000238e3) copy_highlight_title_pane

0x4160,	// (0x000238db) graphic_text_digital_pane

0x578e,	// (0x00024f09) graphic_text_primary_pane

0x5797,	// (0x00024f12) graphic_text_primary_small_pane

0x4158,	// (0x000238d3) graphic_text_secondary_pane

0x4147,	// (0x000238c2) graphic_text_title_pane

0xcadf,	// (0x0002c25a) cursor_primary_pane_g1

0x5780,	// (0x00024efb) cursor_text_primary_t1

0xd75b,	// (0x0002ced6) cursor_primary_small_pane_g1

0x5772,	// (0x00024eed) cursor_text_primary_small_t1

0xd751,	// (0x0002cecc) cursor_primary_small_pane_g1_copy1

0x575a,	// (0x00024ed5) cursor_text_primary_small_t1_copy1

0x5738,	// (0x00024eb3) cursor_text_title_t1

0xd747,	// (0x0002cec2) cursor_title_pane_g1

0xcadf,	// (0x0002c25a) cursor_digital_pane_g1

0x417a,	// (0x000238f5) cursor_text_digital_t1

0x4188,	// (0x00023903) link_highlight_primary_pane_g1

0x56e1,	// (0x00024e5c) link_highlight_primary_pane_t1

0x4188,	// (0x00023903) link_highlight_primary_small_pane_g1

0x4190,	// (0x0002390b) link_highlight_primary_small_pane_t1

0x419f,	// (0x0002391a) link_highlight_secondary_pane_g1

0x41a7,	// (0x00023922) link_highlight_secondary_pane_t1

0x5655,	// (0x00024dd0) link_highlight_title_pane_g1

0x565d,	// (0x00024dd8) link_highlight_title_pane_t1

0x563e,	// (0x00024db9) link_highlight_digital_pane_g1

0x5646,	// (0x00024dc1) link_highlight_digital_pane_t1

0x5506,	// (0x00024c81) copy_highlight_primary_pane_g1

0x551d,	// (0x00024c98) copy_highlight_primary_pane_t1

0x5506,	// (0x00024c81) copy_highlight_primary_small_pane_g1

0x550e,	// (0x00024c89) copy_highlight_primary_small_pane_t1

0x41b6,	// (0x00023931) copy_highlight_secondary_pane_g1

0x41be,	// (0x00023939) copy_highlight_secondary_pane_t1

0x54ef,	// (0x00024c6a) copy_highlight_title_pane_g1

0x54f7,	// (0x00024c72) copy_highlight_title_pane_t1

0x5506,	// (0x00024c81) copy_highlight_digital_pane_g1

0x6817,	// (0x00025f92) copy_highlight_digital_pane_t1

0x676b,	// (0x00025ee6) graphic_text_primary_pane_g1

0x67fb,	// (0x00025f76) graphic_text_primary_pane_t1

0x6809,	// (0x00025f84) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x0002f178) graphic_text_primary_pane_t

0x67d7,	// (0x00025f52) graphic_text_primary_small_pane_g1

0x67df,	// (0x00025f5a) graphic_text_primary_small_pane_t1

0x67ed,	// (0x00025f68) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x0002f173) graphic_text_primary_small_pane_t

0x67b3,	// (0x00025f2e) graphic_text_secondary_pane_g1

0x67bb,	// (0x00025f36) graphic_text_secondary_pane_t1

0x67c9,	// (0x00025f44) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x0002f16e) graphic_text_secondary_pane_t

0x678f,	// (0x00025f0a) graphic_text_title_pane_g1

0x6797,	// (0x00025f12) graphic_text_title_pane_t1

0x67a5,	// (0x00025f20) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x0002f169) graphic_text_title_pane_t

0x676b,	// (0x00025ee6) graphic_text_digital_pane_g1

0x6773,	// (0x00025eee) graphic_text_digital_pane_t1

0x6781,	// (0x00025efc) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x0002f164) graphic_text_digital_pane_t

0x2b26,	// (0x000222a1) navi_icon_pane_srt_ParamLimits

0x2b26,	// (0x000222a1) navi_icon_pane_srt

0x2a46,	// (0x000221c1) navi_midp_pane_srt

0x2a46,	// (0x000221c1) navi_navi_pane_srt

0x2b26,	// (0x000222a1) navi_text_pane_srt_ParamLimits

0x2b26,	// (0x000222a1) navi_text_pane_srt

0x6736,	// (0x00025eb1) navi_navi_icon_text_pane_srt

0x673e,	// (0x00025eb9) navi_navi_pane_srt_g1_ParamLimits

0x673e,	// (0x00025eb9) navi_navi_pane_srt_g1

0x6750,	// (0x00025ecb) navi_navi_pane_srt_g2_ParamLimits

0x6750,	// (0x00025ecb) navi_navi_pane_srt_g2

0x0001,

0xf9e4,	// (0x0002f15f) navi_navi_pane_srt_g_ParamLimits

0xf9e4,	// (0x0002f15f) navi_navi_pane_srt_g

0x6762,	// (0x00025edd) navi_navi_tabs_pane_srt

0x6736,	// (0x00025eb1) navi_navi_text_pane_srt

0x6736,	// (0x00025eb1) navi_navi_volume_pane_srt

0x6727,	// (0x00025ea2) navi_navi_text_pane_srt_t1

0x1dca,	// (0x00021545) navi_navi_volume_pane_srt_g1

0x1dd2,	// (0x0002154d) volume_small_pane_srt_ParamLimits

0x1dd2,	// (0x0002154d) volume_small_pane_srt

0x1809,	// (0x00020f84) volume_small_pane_srt_g1_ParamLimits

0x1809,	// (0x00020f84) volume_small_pane_srt_g1

0x1819,	// (0x00020f94) volume_small_pane_srt_g2_ParamLimits

0x1819,	// (0x00020f94) volume_small_pane_srt_g2

0x182a,	// (0x00020fa5) volume_small_pane_srt_g3_ParamLimits

0x182a,	// (0x00020fa5) volume_small_pane_srt_g3

0x183b,	// (0x00020fb6) volume_small_pane_srt_g4_ParamLimits

0x183b,	// (0x00020fb6) volume_small_pane_srt_g4

0x184c,	// (0x00020fc7) volume_small_pane_srt_g5_ParamLimits

0x184c,	// (0x00020fc7) volume_small_pane_srt_g5

0x185d,	// (0x00020fd8) volume_small_pane_srt_g6_ParamLimits

0x185d,	// (0x00020fd8) volume_small_pane_srt_g6

0x186e,	// (0x00020fe9) volume_small_pane_srt_g7_ParamLimits

0x186e,	// (0x00020fe9) volume_small_pane_srt_g7

0x187f,	// (0x00020ffa) volume_small_pane_srt_g8_ParamLimits

0x187f,	// (0x00020ffa) volume_small_pane_srt_g8

0x1890,	// (0x0002100b) volume_small_pane_srt_g9_ParamLimits

0x1890,	// (0x0002100b) volume_small_pane_srt_g9

0x18a1,	// (0x0002101c) volume_small_pane_srt_g10_ParamLimits

0x18a1,	// (0x0002101c) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0002ef13) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0002ef13) volume_small_pane_srt_g

0x2f0d,	// (0x00022688) query_popup_data_pane_cp2

0x670d,	// (0x00025e88) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x670d,	// (0x00025e88) navi_navi_icon_text_pane_srt_t1

0x578e,	// (0x00024f09) navi_tabs_2_long_pane_srt

0x578e,	// (0x00024f09) navi_tabs_2_pane_srt

0x578e,	// (0x00024f09) navi_tabs_3_long_pane_srt

0x578e,	// (0x00024f09) navi_tabs_3_pane_srt

0x578e,	// (0x00024f09) navi_tabs_4_pane_srt

0x1daa,	// (0x00021525) tabs_2_active_pane_srt_ParamLimits

0x1daa,	// (0x00021525) tabs_2_active_pane_srt

0x1dba,	// (0x00021535) tabs_2_passive_pane_srt_ParamLimits

0x1dba,	// (0x00021535) tabs_2_passive_pane_srt

0x4fcb,	// (0x00024746) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4fcb,	// (0x00024746) bg_passive_tab_pane_cp1_srt

0x66d9,	// (0x00025e54) bg_passive_tab_pane_g1_cp1_srt

0x3c60,	// (0x000233db) bg_passive_tab_pane_g2_cp1_srt

0x66e2,	// (0x00025e5d) bg_passive_tab_pane_g3_cp1_srt

0x2da2,	// (0x0002251d) bg_active_tab_pane_cp1_srt_ParamLimits

0x2da2,	// (0x0002251d) bg_active_tab_pane_cp1_srt

0x66eb,	// (0x00025e66) tabs_2_active_pane_srt_g1

0xdbbe,	// (0x0002d339) tabs_2_active_pane_srt_t1_ParamLimits

0xdbbe,	// (0x0002d339) tabs_2_active_pane_srt_t1

0x66d9,	// (0x00025e54) bg_active_tab_pane_g1_cp1_srt

0x3c60,	// (0x000233db) bg_active_tab_pane_g2_cp1_srt

0x66e2,	// (0x00025e5d) bg_active_tab_pane_g3_cp1_srt

0x1d77,	// (0x000214f2) tabs_3_active_pane_srt_ParamLimits

0x1d77,	// (0x000214f2) tabs_3_active_pane_srt

0x1d88,	// (0x00021503) tabs_3_passive_pane_cp_srt_ParamLimits

0x1d88,	// (0x00021503) tabs_3_passive_pane_cp_srt

0x1d99,	// (0x00021514) tabs_3_passive_pane_srt_ParamLimits

0x1d99,	// (0x00021514) tabs_3_passive_pane_srt

0x4fcb,	// (0x00024746) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4fcb,	// (0x00024746) bg_passive_tab_pane_cp2_srt

0x41cd,	// (0x00023948) bg_passive_tab_pane_g1_cp2_srt

0x3c60,	// (0x000233db) bg_passive_tab_pane_g2_cp2_srt

0x41d6,	// (0x00023951) bg_passive_tab_pane_g3_cp2_srt

0x2da2,	// (0x0002251d) bg_active_tab_pane_cp2_srt_ParamLimits

0x2da2,	// (0x0002251d) bg_active_tab_pane_cp2_srt

0x66bf,	// (0x00025e3a) tabs_3_active_pane_srt_g1

0xdba8,	// (0x0002d323) tabs_3_active_pane_srt_t1_ParamLimits

0xdba8,	// (0x0002d323) tabs_3_active_pane_srt_t1

0x41cd,	// (0x00023948) bg_active_tab_pane_g1_cp2_srt

0x3c60,	// (0x000233db) bg_active_tab_pane_g2_cp2_srt

0x41d6,	// (0x00023951) bg_active_tab_pane_g3_cp2_srt

0x1d2f,	// (0x000214aa) tabs_4_active_pane_srt_ParamLimits

0x1d2f,	// (0x000214aa) tabs_4_active_pane_srt

0x1d41,	// (0x000214bc) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1d41,	// (0x000214bc) tabs_4_passive_pane_cp2_srt

0x432b,	// (0x00023aa6) aid_size_cell_toolbar

0x62e1,	// (0x00025a5c) main_idle_act_pane_ParamLimits

0x4562,	// (0x00023cdd) popup_large_graphic_colour_window_ParamLimits

0xd1e9,	// (0x0002c964) popup_toolbar_window_ParamLimits

0xd1e9,	// (0x0002c964) popup_toolbar_window

0x092f,	// (0x000200aa) list_single_graphic_2heading_pane_ParamLimits

0x092f,	// (0x000200aa) list_single_graphic_2heading_pane

0x3760,	// (0x00022edb) aid_size_cell_apps_grid_lsc_pane

0x3772,	// (0x00022eed) aid_size_cell_apps_grid_prt_pane

0x439d,	// (0x00023b18) bg_wml_button_pane_cp1_ParamLimits

0x439d,	// (0x00023b18) bg_wml_button_pane_cp1

0xd6f7,	// (0x0002ce72) form_midp_field_text_pane_t1_ParamLimits

0x4fcb,	// (0x00024746) input_focus_pane_cp050_ParamLimits

0x51e2,	// (0x0002495d) list_midp_form_text_pane_ParamLimits

0x5194,	// (0x0002490f) input_focus_pane_cp051_ParamLimits

0x51a8,	// (0x00024923) list_midp_choice_pane_ParamLimits

0xd6ae,	// (0x0002ce29) list_single_2graphic_pane_cp3_ParamLimits

0xd6ae,	// (0x0002ce29) list_single_2graphic_pane_cp3

0x733c,	// (0x00026ab7) list_single_midp_graphic_pane_ParamLimits

0x733c,	// (0x00026ab7) list_single_midp_graphic_pane

0x07ac,	// (0x0001ff27) list_single_graphic_2heading_pane_g1_ParamLimits

0x07ac,	// (0x0001ff27) list_single_graphic_2heading_pane_g1

0x07b8,	// (0x0001ff33) list_single_graphic_2heading_pane_g4_ParamLimits

0x07b8,	// (0x0001ff33) list_single_graphic_2heading_pane_g4

0x07c4,	// (0x0001ff3f) list_single_graphic_2heading_pane_g5_ParamLimits

0x07c4,	// (0x0001ff3f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0002ef66) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0002ef66) list_single_graphic_2heading_pane_g

0x07d0,	// (0x0001ff4b) list_single_graphic_2heading_pane_t1_ParamLimits

0x07d0,	// (0x0001ff4b) list_single_graphic_2heading_pane_t1

0x07e4,	// (0x0001ff5f) list_single_graphic_2heading_pane_t2_ParamLimits

0x07e4,	// (0x0001ff5f) list_single_graphic_2heading_pane_t2

0x0800,	// (0x0001ff7b) list_single_graphic_2heading_pane_t3_ParamLimits

0x0800,	// (0x0001ff7b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0002ef6d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0002ef6d) list_single_graphic_2heading_pane_t

0x4e17,	// (0x00024592) bg_popup_sub_pane_cp2

0x4e41,	// (0x000245bc) grid_toobar_pane

0x1a00,	// (0x0002117b) cell_toolbar_pane_ParamLimits

0x1a00,	// (0x0002117b) cell_toolbar_pane

0x4e7d,	// (0x000245f8) cell_toolbar_pane_g1_ParamLimits

0x4e7d,	// (0x000245f8) cell_toolbar_pane_g1

0x4e91,	// (0x0002460c) cell_toolbar_pane_g2_ParamLimits

0x4e91,	// (0x0002460c) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0002ef7b) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0002ef7b) cell_toolbar_pane_g

0x4eb3,	// (0x0002462e) grid_highlight_pane_cp2_ParamLimits

0x4eb3,	// (0x0002462e) grid_highlight_pane_cp2

0x4ecd,	// (0x00024648) toolbar_button_pane

0x4ed9,	// (0x00024654) toolbar_button_pane_g1

0x4ee1,	// (0x0002465c) toolbar_button_pane_g2

0x4ee9,	// (0x00024664) toolbar_button_pane_g3

0x4ef1,	// (0x0002466c) toolbar_button_pane_g4

0x4ef9,	// (0x00024674) toolbar_button_pane_g5

0x4f01,	// (0x0002467c) toolbar_button_pane_g6

0x4f09,	// (0x00024684) toolbar_button_pane_g7

0x4f11,	// (0x0002468c) toolbar_button_pane_g8

0x4f19,	// (0x00024694) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0002ef80) toolbar_button_pane_g

0x1a38,	// (0x000211b3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1a38,	// (0x000211b3) list_single_2graphic_pane_g1_cp3

0xc11b,	// (0x0002b896) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc11b,	// (0x0002b896) list_single_2graphic_pane_g2_cp3

0x3e41,	// (0x000235bc) list_single_2graphic_pane_g3_cp3

0xd372,	// (0x0002caed) list_single_2graphic_pane_g4_cp3_ParamLimits

0xd372,	// (0x0002caed) list_single_2graphic_pane_g4_cp3

0x1a55,	// (0x000211d0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1a55,	// (0x000211d0) list_single_2graphic_pane_t1_cp3

0x3e35,	// (0x000235b0) list_single_midp_graphic_pane_g2_ParamLimits

0x3e35,	// (0x000235b0) list_single_midp_graphic_pane_g2

0x4333,	// (0x00023aae) aid_zoom_text_primary

0x079c,	// (0x0001ff17) aid_zoom_text_secondary

0x428a,	// (0x00023a05) status_small_pane_g7_ParamLimits

0x428a,	// (0x00023a05) status_small_pane_g7

0x42ad,	// (0x00023a28) status_small_pane_t1_ParamLimits

0xbc2f,	// (0x0002b3aa) title_pane_g2

0x0003,

0xf592,	// (0x0002ed0d) title_pane_g

0xbec7,	// (0x0002b642) aid_size_cell_colour_1_pane_ParamLimits

0xbec7,	// (0x0002b642) aid_size_cell_colour_1_pane

0xbedb,	// (0x0002b656) aid_size_cell_colour_2_pane_ParamLimits

0xbedb,	// (0x0002b656) aid_size_cell_colour_2_pane

0xbeef,	// (0x0002b66a) aid_size_cell_colour_3_pane_ParamLimits

0xbeef,	// (0x0002b66a) aid_size_cell_colour_3_pane

0xbf03,	// (0x0002b67e) aid_size_cell_colour_4_pane_ParamLimits

0xbf03,	// (0x0002b67e) aid_size_cell_colour_4_pane

0x145e,	// (0x00020bd9) title_pane_stacon_g1_ParamLimits

0x145e,	// (0x00020bd9) title_pane_stacon_g1

0x5574,	// (0x00024cef) popup_note_wait_window_g3_ParamLimits

0x5574,	// (0x00024cef) popup_note_wait_window_g3

0x55eb,	// (0x00024d66) popup_note_wait_window_t5_ParamLimits

0x55eb,	// (0x00024d66) popup_note_wait_window_t5

0x2a46,	// (0x000221c1) main_feb_china_hwr_fs_writing_pane

0xcb84,	// (0x0002c2ff) popup_feb_china_hwr_fs_window_ParamLimits

0xcb84,	// (0x0002c2ff) popup_feb_china_hwr_fs_window

0xc12c,	// (0x0002b8a7) aid_size_cell_hwr_fs_ParamLimits

0xc12c,	// (0x0002b8a7) aid_size_cell_hwr_fs

0x4fcb,	// (0x00024746) bg_popup_sub_pane_cp3_ParamLimits

0x4fcb,	// (0x00024746) bg_popup_sub_pane_cp3

0xc141,	// (0x0002b8bc) grid_hwr_fs_pane_ParamLimits

0xc141,	// (0x0002b8bc) grid_hwr_fs_pane

0x1ab3,	// (0x0002122e) linegrid_hwr_fs_pane_ParamLimits

0x1ab3,	// (0x0002122e) linegrid_hwr_fs_pane

0xc159,	// (0x0002b8d4) cell_hwr_fs_pane_ParamLimits

0xc159,	// (0x0002b8d4) cell_hwr_fs_pane

0x4fd7,	// (0x00024752) linegrid_hwr_fs_pane_g1_ParamLimits

0x4fd7,	// (0x00024752) linegrid_hwr_fs_pane_g1

0xd682,	// (0x0002cdfd) linegrid_hwr_fs_pane_g2_ParamLimits

0xd682,	// (0x0002cdfd) linegrid_hwr_fs_pane_g2

0x4ff5,	// (0x00024770) linegrid_hwr_fs_pane_g3_ParamLimits

0x4ff5,	// (0x00024770) linegrid_hwr_fs_pane_g3

0x1ae7,	// (0x00021262) linegrid_hwr_fs_pane_g4_ParamLimits

0x1ae7,	// (0x00021262) linegrid_hwr_fs_pane_g4

0x1b05,	// (0x00021280) linegrid_hwr_fs_pane_g5_ParamLimits

0x1b05,	// (0x00021280) linegrid_hwr_fs_pane_g5

0x0004,

0xf82b,	// (0x0002efa6) linegrid_hwr_fs_pane_g_ParamLimits

0xf82b,	// (0x0002efa6) linegrid_hwr_fs_pane_g

0x5001,	// (0x0002477c) cell_hwr_fs_pane_g1_ParamLimits

0x5001,	// (0x0002477c) cell_hwr_fs_pane_g1

0x4d4e,	// (0x000244c9) cell_hwr_fs_pane_g2_ParamLimits

0x4d4e,	// (0x000244c9) cell_hwr_fs_pane_g2

0xd694,	// (0x0002ce0f) cell_hwr_fs_pane_g3_ParamLimits

0xd694,	// (0x0002ce0f) cell_hwr_fs_pane_g3

0xd6a1,	// (0x0002ce1c) cell_hwr_fs_pane_g4_ParamLimits

0xd6a1,	// (0x0002ce1c) cell_hwr_fs_pane_g4

0x0003,

0xf836,	// (0x0002efb1) cell_hwr_fs_pane_g_ParamLimits

0xf836,	// (0x0002efb1) cell_hwr_fs_pane_g

0xc17f,	// (0x0002b8fa) cell_hwr_fs_pane_t1

0x2a46,	// (0x000221c1) grid_highlight_pane_cp6

0x2a46,	// (0x000221c1) main_idle_act2_pane

0x3516,	// (0x00022c91) aid_inside_area_popup_secondary

0xd77b,	// (0x0002cef6) aid_inside_area_window_primary_ParamLimits

0xd77b,	// (0x0002cef6) aid_inside_area_window_primary

0x6826,	// (0x00025fa1) ai2_news_ticker_pane

0x682e,	// (0x00025fa9) aid_size_cell_ai1_link_ParamLimits

0x682e,	// (0x00025fa9) aid_size_cell_ai1_link

0x6848,	// (0x00025fc3) popup_ai2_data_window_ParamLimits

0x6848,	// (0x00025fc3) popup_ai2_data_window

0x6866,	// (0x00025fe1) popup_ai2_link_window_ParamLimits

0x6866,	// (0x00025fe1) popup_ai2_link_window

0x4fcb,	// (0x00024746) bg_popup_sub_pane_cp4_ParamLimits

0x4fcb,	// (0x00024746) bg_popup_sub_pane_cp4

0x687c,	// (0x00025ff7) grid_ai2_link_pane_ParamLimits

0x687c,	// (0x00025ff7) grid_ai2_link_pane

0x6893,	// (0x0002600e) popup_ai2_link_window_g1_ParamLimits

0x6893,	// (0x0002600e) popup_ai2_link_window_g1

0x689f,	// (0x0002601a) popup_ai2_link_window_g2_ParamLimits

0x689f,	// (0x0002601a) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x0002f17d) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x0002f17d) popup_ai2_link_window_g

0x68b0,	// (0x0002602b) ai2_mp_button_pane

0x68b8,	// (0x00026033) ai2_mp_volume_pane

0x5194,	// (0x0002490f) bg_popup_sub_pane_cp5_ParamLimits

0x5194,	// (0x0002490f) bg_popup_sub_pane_cp5

0x68c0,	// (0x0002603b) heading_ai2_gene_pane_ParamLimits

0x68c0,	// (0x0002603b) heading_ai2_gene_pane

0x68cc,	// (0x00026047) list_ai2_gene_pane_ParamLimits

0x68cc,	// (0x00026047) list_ai2_gene_pane

0x6914,	// (0x0002608f) cell_ai2_link_pane_ParamLimits

0x6914,	// (0x0002608f) cell_ai2_link_pane

0x692a,	// (0x000260a5) cell_ai2_link_pane_g1

0x2a46,	// (0x000221c1) grid_highlight_pane_cp7

0x1de7,	// (0x00021562) ai2_mp_volume_pane_g1

0x69fd,	// (0x00026178) ai2_mp_volume_pane_g2

0x6972,	// (0x000260ed) list_ai2_gene_pane_t1

0x6a05,	// (0x00026180) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x0002f196) ai2_mp_volume_pane_g

0x1def,	// (0x0002156a) volume_small_pane_cp3

0x6a0d,	// (0x00026188) aid_size_cell_ai2_button

0x6a15,	// (0x00026190) grid_ai2_button_pane

0x6a1e,	// (0x00026199) cell_ai2_button_pane_ParamLimits

0x6a1e,	// (0x00026199) cell_ai2_button_pane

0x2a3c,	// (0x000221b7) cell_ai2_button_pane_g1

0x2a46,	// (0x000221c1) grid_highlight_pane_cp8

0x69bd,	// (0x00026138) ai2_gene_pane_t1_ParamLimits

0x69bd,	// (0x00026138) ai2_gene_pane_t1

0xcb10,	// (0x0002c28b) aid_height_parent_landscape

0xd94b,	// (0x0002d0c6) aid_height_set_list

0x62e1,	// (0x00025a5c) aid_size_parent

0x6647,	// (0x00025dc2) aid_size_cell_graphic_pane_ParamLimits

0x68dc,	// (0x00026057) popup_ai2_data_window_g1_ParamLimits

0x68dc,	// (0x00026057) popup_ai2_data_window_g1

0x68e8,	// (0x00026063) ai2_news_ticker_pane_g1

0x68f0,	// (0x0002606b) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x0002f182) ai2_news_ticker_pane_g

0x68f8,	// (0x00026073) ai2_news_ticker_pane_t1

0x6906,	// (0x00026081) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x0002f187) ai2_news_ticker_pane_t

0x6933,	// (0x000260ae) heading_ai2_gene_pane_g1

0x693b,	// (0x000260b6) heading_ai2_gene_pane_t1_ParamLimits

0x693b,	// (0x000260b6) heading_ai2_gene_pane_t1

0x6950,	// (0x000260cb) list_highlight_pane_cp6

0x6958,	// (0x000260d3) ai2_gene_pane_ParamLimits

0x6958,	// (0x000260d3) ai2_gene_pane

0x6980,	// (0x000260fb) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x0002f18c) list_ai2_gene_pane_t

0x698e,	// (0x00026109) list_highlight_pane_cp8_ParamLimits

0x698e,	// (0x00026109) list_highlight_pane_cp8

0x699f,	// (0x0002611a) ai2_gene_pane_g1_ParamLimits

0x699f,	// (0x0002611a) ai2_gene_pane_g1

0x69b1,	// (0x0002612c) ai2_gene_pane_g2_ParamLimits

0x69b1,	// (0x0002612c) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x0002f191) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x0002f191) ai2_gene_pane_g

0x3343,	// (0x00022abe) scroll_pane_cp12

0xc0da,	// (0x0002b855) control_pane_t3_ParamLimits

0xc0da,	// (0x0002b855) control_pane_t3

0x429e,	// (0x00023a19) status_small_pane_g8_ParamLimits

0x429e,	// (0x00023a19) status_small_pane_g8

0xcc26,	// (0x0002c3a1) popup_find_window_ParamLimits

0xced3,	// (0x0002c64e) popup_note_image_window_ParamLimits

0x0818,	// (0x0001ff93) list_double2_graphic_pane_vc_g1_ParamLimits

0x0818,	// (0x0001ff93) list_double2_graphic_pane_vc_g1

0x0824,	// (0x0001ff9f) list_double2_graphic_pane_vc_g2_ParamLimits

0x0824,	// (0x0001ff9f) list_double2_graphic_pane_vc_g2

0x0830,	// (0x0001ffab) list_double2_graphic_pane_vc_g3_ParamLimits

0x0830,	// (0x0001ffab) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0002ef74) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0002ef74) list_double2_graphic_pane_vc_g

0x083c,	// (0x0001ffb7) list_double2_graphic_pane_vc_t1_ParamLimits

0x083c,	// (0x0001ffb7) list_double2_graphic_pane_vc_t1

0x07b8,	// (0x0001ff33) list_single_heading_pane_vc_g1_ParamLimits

0x07b8,	// (0x0001ff33) list_single_heading_pane_vc_g1

0x07c4,	// (0x0001ff3f) list_single_heading_pane_vc_g2_ParamLimits

0x07c4,	// (0x0001ff3f) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002ed87) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002ed87) list_single_heading_pane_vc_g

0x0852,	// (0x0001ffcd) list_single_heading_pane_vc_t1_ParamLimits

0x0852,	// (0x0001ffcd) list_single_heading_pane_vc_t1

0x0868,	// (0x0001ffe3) list_single_heading_pane_vc_t2_ParamLimits

0x0868,	// (0x0001ffe3) list_single_heading_pane_vc_t2

0x0001,

0xf81a,	// (0x0002ef95) list_single_heading_pane_vc_t_ParamLimits

0xf81a,	// (0x0002ef95) list_single_heading_pane_vc_t

0x4f21,	// (0x0002469c) list_setting_number_pane_vc_g1_ParamLimits

0x4f21,	// (0x0002469c) list_setting_number_pane_vc_g1

0x4f2d,	// (0x000246a8) list_setting_number_pane_vc_g2_ParamLimits

0x4f2d,	// (0x000246a8) list_setting_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0002ef9a) list_setting_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0002ef9a) list_setting_number_pane_vc_g

0x4f39,	// (0x000246b4) list_setting_number_pane_vc_t1_ParamLimits

0x4f39,	// (0x000246b4) list_setting_number_pane_vc_t1

0x4f4d,	// (0x000246c8) list_setting_number_pane_vc_t2_ParamLimits

0x4f4d,	// (0x000246c8) list_setting_number_pane_vc_t2

0x4f69,	// (0x000246e4) list_setting_number_pane_vc_t3_ParamLimits

0x4f69,	// (0x000246e4) list_setting_number_pane_vc_t3

0x0002,

0xf824,	// (0x0002ef9f) list_setting_number_pane_vc_t_ParamLimits

0xf824,	// (0x0002ef9f) list_setting_number_pane_vc_t

0x4f91,	// (0x0002470c) set_value_pane_vc_ParamLimits

0x4f91,	// (0x0002470c) set_value_pane_vc

0x092f,	// (0x000200aa) list_double2_graphic_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_double2_graphic_pane_vc

0x64c5,	// (0x00025c40) list_double2_large_graphic_pane_vc_ParamLimits

0x64c5,	// (0x00025c40) list_double2_large_graphic_pane_vc

0x092f,	// (0x000200aa) list_double2_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_double2_pane_vc

0x092f,	// (0x000200aa) list_double_graphic_heading_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_double_graphic_heading_pane_vc

0x092f,	// (0x000200aa) list_double_graphic_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_double_graphic_pane_vc

0x092f,	// (0x000200aa) list_double_heading_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_double_heading_pane_vc

0x64c5,	// (0x00025c40) list_double_large_graphic_pane_vc_ParamLimits

0x64c5,	// (0x00025c40) list_double_large_graphic_pane_vc

0x092f,	// (0x000200aa) list_double_number_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_double_number_pane_vc

0x092f,	// (0x000200aa) list_double_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_double_pane_vc

0x092f,	// (0x000200aa) list_double_time_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_double_time_pane_vc

0x092f,	// (0x000200aa) list_setting_number_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_setting_number_pane_vc

0x092f,	// (0x000200aa) list_setting_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_setting_pane_vc

0x092f,	// (0x000200aa) list_single_graphic_heading_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_single_graphic_heading_pane_vc

0x092f,	// (0x000200aa) list_single_heading_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_single_heading_pane_vc

0x092f,	// (0x000200aa) list_single_number_heading_pane_vc_ParamLimits

0x092f,	// (0x000200aa) list_single_number_heading_pane_vc

0x0818,	// (0x0001ff93) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0818,	// (0x0001ff93) list_double_graphic_heading_pane_vc_g1

0x07b8,	// (0x0001ff33) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x07b8,	// (0x0001ff33) list_double_graphic_heading_pane_vc_g2

0x07c4,	// (0x0001ff3f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x07c4,	// (0x0001ff3f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa22,	// (0x0002f19d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x0002f19d) list_double_graphic_heading_pane_vc_g

0x0974,	// (0x000200ef) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0974,	// (0x000200ef) list_double_graphic_heading_pane_vc_t1

0x0852,	// (0x0001ffcd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0852,	// (0x0001ffcd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa29,	// (0x0002f1a4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x0002f1a4) list_double_graphic_heading_pane_vc_t

0x4f21,	// (0x0002469c) list_setting_pane_vc_g1_ParamLimits

0x4f21,	// (0x0002469c) list_setting_pane_vc_g1

0x4f2d,	// (0x000246a8) list_setting_pane_vc_g2_ParamLimits

0x4f2d,	// (0x000246a8) list_setting_pane_vc_g2

0x0001,

0xf81f,	// (0x0002ef9a) list_setting_pane_vc_g_ParamLimits

0xf81f,	// (0x0002ef9a) list_setting_pane_vc_g

0x6c9c,	// (0x00026417) list_setting_pane_vc_t1_ParamLimits

0x6c9c,	// (0x00026417) list_setting_pane_vc_t1

0x6cb0,	// (0x0002642b) list_setting_pane_vc_t2_ParamLimits

0x6cb0,	// (0x0002642b) list_setting_pane_vc_t2

0x0001,

0xfa6c,	// (0x0002f1e7) list_setting_pane_vc_t_ParamLimits

0xfa6c,	// (0x0002f1e7) list_setting_pane_vc_t

0x4f91,	// (0x0002470c) set_value_pane_cp_vc_ParamLimits

0x4f91,	// (0x0002470c) set_value_pane_cp_vc

0x07b8,	// (0x0001ff33) list_single_number_heading_pane_vc_g1_ParamLimits

0x07b8,	// (0x0001ff33) list_single_number_heading_pane_vc_g1

0x07c4,	// (0x0001ff3f) list_single_number_heading_pane_vc_g2_ParamLimits

0x07c4,	// (0x0001ff3f) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002ed87) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002ed87) list_single_number_heading_pane_vc_g

0x0852,	// (0x0001ffcd) list_single_number_heading_pane_vc_t1_ParamLimits

0x0852,	// (0x0001ffcd) list_single_number_heading_pane_vc_t1

0x0988,	// (0x00020103) list_single_number_heading_pane_vc_t2_ParamLimits

0x0988,	// (0x00020103) list_single_number_heading_pane_vc_t2

0x099c,	// (0x00020117) list_single_number_heading_pane_vc_t3_ParamLimits

0x099c,	// (0x00020117) list_single_number_heading_pane_vc_t3

0x0002,

0xfa71,	// (0x0002f1ec) list_single_number_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0002f1ec) list_single_number_heading_pane_vc_t

0x0818,	// (0x0001ff93) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0818,	// (0x0001ff93) list_single_graphic_heading_pane_vc_g1

0x07b8,	// (0x0001ff33) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x07b8,	// (0x0001ff33) list_single_graphic_heading_pane_vc_g4

0x07c4,	// (0x0001ff3f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x07c4,	// (0x0001ff3f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa22,	// (0x0002f19d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x0002f19d) list_single_graphic_heading_pane_vc_g

0x0852,	// (0x0001ffcd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0852,	// (0x0001ffcd) list_single_graphic_heading_pane_vc_t1

0x09ae,	// (0x00020129) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x09ae,	// (0x00020129) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x0002f1f3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x0002f1f3) list_single_graphic_heading_pane_vc_t

0x07b8,	// (0x0001ff33) list_double2_pane_vc_g1_ParamLimits

0x07b8,	// (0x0001ff33) list_double2_pane_vc_g1

0x07c4,	// (0x0001ff3f) list_double2_pane_vc_g2_ParamLimits

0x07c4,	// (0x0001ff3f) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0002ed87) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0002ed87) list_double2_pane_vc_g

0x09c2,	// (0x0002013d) list_double2_pane_vc_t1_ParamLimits

0x09c2,	// (0x0002013d) list_double2_pane_vc_t1

0x09d8,	// (0x00020153) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x09d8,	// (0x00020153) list_double2_large_graphic_pane_vc_g1

0x09e4,	// (0x0002015f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x09e4,	// (0x0002015f) list_double2_large_graphic_pane_vc_g2

0x09f0,	// (0x0002016b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x09f0,	// (0x0002016b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0002eda4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0002eda4) list_double2_large_graphic_pane_vc_g

0x09fc,	// (0x00020177) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x09fc,	// (0x00020177) list_double2_large_graphic_pane_vc_t1

0x0a12,	// (0x0002018d) list_double_time_pane_vc_g1_ParamLimits

0x0a12,	// (0x0002018d) list_double_time_pane_vc_g1

0x0a1e,	// (0x00020199) list_double_time_pane_vc_g2_ParamLimits

0x0a1e,	// (0x00020199) list_double_time_pane_vc_g2

0x0001,

0xfa7d,	// (0x0002f1f8) list_double_time_pane_vc_g_ParamLimits

0xfa7d,	// (0x0002f1f8) list_double_time_pane_vc_g

0x0a2a,	// (0x000201a5) list_double_time_pane_vc_t1_ParamLimits

0x0a2a,	// (0x000201a5) list_double_time_pane_vc_t1

0x0a43,	// (0x000201be) list_double_time_pane_vc_t2_ParamLimits

0x0a43,	// (0x000201be) list_double_time_pane_vc_t2

0x0a83,	// (0x000201fe) list_double_time_pane_vc_t3_ParamLimits

0x0a83,	// (0x000201fe) list_double_time_pane_vc_t3

0x0a9b,	// (0x00020216) list_double_time_pane_vc_t4_ParamLimits

0x0a9b,	// (0x00020216) list_double_time_pane_vc_t4

0x0003,

0xfa82,	// (0x0002f1fd) list_double_time_pane_vc_t_ParamLimits

0xfa82,	// (0x0002f1fd) list_double_time_pane_vc_t

0x07b8,	// (0x0001ff33) list_double_pane_vc_g1_ParamLimits

0x07b8,	// (0x0001ff33) list_double_pane_vc_g1

0x07c4,	// (0x0001ff3f) list_double_pane_vc_g2_ParamLimits

0x07c4,	// (0x0001ff3f) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0002ed87) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0002ed87) list_double_pane_vc_g

0x0aaf,	// (0x0002022a) list_double_pane_vc_t1_ParamLimits

0x0aaf,	// (0x0002022a) list_double_pane_vc_t1

0x0ac1,	// (0x0002023c) list_double_pane_vc_t2_ParamLimits

0x0ac1,	// (0x0002023c) list_double_pane_vc_t2

0x0001,

0xfa8b,	// (0x0002f206) list_double_pane_vc_t_ParamLimits

0xfa8b,	// (0x0002f206) list_double_pane_vc_t

0x07b8,	// (0x0001ff33) list_double_number_pane_vc_g1_ParamLimits

0x07b8,	// (0x0001ff33) list_double_number_pane_vc_g1

0x07c4,	// (0x0001ff3f) list_double_number_pane_vc_g2_ParamLimits

0x07c4,	// (0x0001ff3f) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0002ed87) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0002ed87) list_double_number_pane_vc_g

0x0ad9,	// (0x00020254) list_double_number_pane_vc_t1_ParamLimits

0x0ad9,	// (0x00020254) list_double_number_pane_vc_t1

0x0aed,	// (0x00020268) list_double_number_pane_vc_t2_ParamLimits

0x0aed,	// (0x00020268) list_double_number_pane_vc_t2

0x0ac1,	// (0x0002023c) list_double_number_pane_vc_t3_ParamLimits

0x0ac1,	// (0x0002023c) list_double_number_pane_vc_t3

0x0002,

0xfa90,	// (0x0002f20b) list_double_number_pane_vc_t_ParamLimits

0xfa90,	// (0x0002f20b) list_double_number_pane_vc_t

0x0aff,	// (0x0002027a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0aff,	// (0x0002027a) list_double_large_graphic_pane_vc_g1

0x0b0b,	// (0x00020286) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0b0b,	// (0x00020286) list_double_large_graphic_pane_vc_g2

0x09f0,	// (0x0002016b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x09f0,	// (0x0002016b) list_double_large_graphic_pane_vc_g3

0x0b1a,	// (0x00020295) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0b1a,	// (0x00020295) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa97,	// (0x0002f212) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x0002f212) list_double_large_graphic_pane_vc_g

0x0b26,	// (0x000202a1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0b26,	// (0x000202a1) list_double_large_graphic_pane_vc_t1

0x0b38,	// (0x000202b3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0b38,	// (0x000202b3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa0,	// (0x0002f21b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa0,	// (0x0002f21b) list_double_large_graphic_pane_vc_t

0x07b8,	// (0x0001ff33) list_double_heading_pane_vc_g1_ParamLimits

0x07b8,	// (0x0001ff33) list_double_heading_pane_vc_g1

0x07c4,	// (0x0001ff3f) list_double_heading_pane_vc_g2_ParamLimits

0x07c4,	// (0x0001ff3f) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002ed87) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002ed87) list_double_heading_pane_vc_g

0x0b51,	// (0x000202cc) list_double_heading_pane_vc_t1_ParamLimits

0x0b51,	// (0x000202cc) list_double_heading_pane_vc_t1

0x0852,	// (0x0001ffcd) list_double_heading_pane_vc_t2_ParamLimits

0x0852,	// (0x0001ffcd) list_double_heading_pane_vc_t2

0x0001,

0xfaa5,	// (0x0002f220) list_double_heading_pane_vc_t_ParamLimits

0xfaa5,	// (0x0002f220) list_double_heading_pane_vc_t

0x0b65,	// (0x000202e0) list_double_graphic_pane_vc_g1_ParamLimits

0x0b65,	// (0x000202e0) list_double_graphic_pane_vc_g1

0x0b75,	// (0x000202f0) list_double_graphic_pane_vc_g2_ParamLimits

0x0b75,	// (0x000202f0) list_double_graphic_pane_vc_g2

0x0b84,	// (0x000202ff) list_double_graphic_pane_vc_g3_ParamLimits

0x0b84,	// (0x000202ff) list_double_graphic_pane_vc_g3

0x0002,

0xfaaa,	// (0x0002f225) list_double_graphic_pane_vc_g_ParamLimits

0xfaaa,	// (0x0002f225) list_double_graphic_pane_vc_g

0x0b90,	// (0x0002030b) list_double_graphic_pane_vc_t1_ParamLimits

0x0b90,	// (0x0002030b) list_double_graphic_pane_vc_t1

0x0ac1,	// (0x0002023c) list_double_graphic_pane_vc_t2_ParamLimits

0x0ac1,	// (0x0002023c) list_double_graphic_pane_vc_t2

0x0001,

0xfab1,	// (0x0002f22c) list_double_graphic_pane_vc_t_ParamLimits

0xfab1,	// (0x0002f22c) list_double_graphic_pane_vc_t

0x0fb3,	// (0x0002072e) aid_size_cell_fastswap

0xba79,	// (0x0002b1f4) aid_size_cell_touch_ParamLimits

0xba79,	// (0x0002b1f4) aid_size_cell_touch

0x121c,	// (0x00020997) popup_fast_swap_wide_window_ParamLimits

0x121c,	// (0x00020997) popup_fast_swap_wide_window

0xbbc8,	// (0x0002b343) touch_pane_ParamLimits

0xbbc8,	// (0x0002b343) touch_pane

0x3399,	// (0x00022b14) button_value_adjust_pane_cp2

0x3399,	// (0x00022b14) button_value_adjust_pane_cp4

0x04d8,	// (0x0001fc53) form_field_data_pane_cp2

0xb616,	// (0x0002ad91) form_field_data_wide_pane_cp2

0x3832,	// (0x00022fad) bg_scroll_pane_ParamLimits

0x15c3,	// (0x00020d3e) scroll_handle_pane_ParamLimits

0x15d7,	// (0x00020d52) scroll_sc2_down_pane_ParamLimits

0x15d7,	// (0x00020d52) scroll_sc2_down_pane

0x3863,	// (0x00022fde) scroll_sc2_up_pane_ParamLimits

0x3863,	// (0x00022fde) scroll_sc2_up_pane

0xdcff,	// (0x0002d47a) grid_wheel_folder_pane_g1_ParamLimits

0xdcff,	// (0x0002d47a) grid_wheel_folder_pane_g1

0x17a1,	// (0x00020f1c) clock_nsta_pane_cp2_ParamLimits

0x17a1,	// (0x00020f1c) clock_nsta_pane_cp2

0xca25,	// (0x0002c1a0) listscroll_midp_pane_ParamLimits

0xca36,	// (0x0002c1b1) midp_canvas_pane

0x4319,	// (0x00023a94) nsta_clock_indic_pane

0x436f,	// (0x00023aea) listscroll_form_pane_vc

0x438b,	// (0x00023b06) listscroll_set_pane_vc_ParamLimits

0x438b,	// (0x00023b06) listscroll_set_pane_vc

0xd348,	// (0x0002cac3) clock_nsta_pane

0xd3a6,	// (0x0002cb21) indicator_nsta_pane

0x4e17,	// (0x00024592) bg_popup_sub_pane_cp2_ParamLimits

0x4e2b,	// (0x000245a6) find_pane_cp2_ParamLimits

0x4e2b,	// (0x000245a6) find_pane_cp2

0x4e41,	// (0x000245bc) grid_toobar_pane_ParamLimits

0x4f9f,	// (0x0002471a) list_form_gen_pane_vc_ParamLimits

0x4f9f,	// (0x0002471a) list_form_gen_pane_vc

0x4fb5,	// (0x00024730) scroll_pane_cp8_vc_ParamLimits

0x4fb5,	// (0x00024730) scroll_pane_cp8_vc

0x5031,	// (0x000247ac) data_form_wide_pane_vc_ParamLimits

0x5031,	// (0x000247ac) data_form_wide_pane_vc

0x503d,	// (0x000247b8) form_field_data_wide_pane_vc_g1

0x5045,	// (0x000247c0) form_field_data_wide_pane_vc_t1_ParamLimits

0x5045,	// (0x000247c0) form_field_data_wide_pane_vc_t1

0x33ad,	// (0x00022b28) input_focus_pane_cp6_vc_ParamLimits

0x33ad,	// (0x00022b28) input_focus_pane_cp6_vc

0xd71f,	// (0x0002ce9a) list_midp_pane_ParamLimits

0x66b3,	// (0x00025e2e) scroll_pane_cp16_ParamLimits

0x66b3,	// (0x00025e2e) scroll_pane_cp16

0x536b,	// (0x00024ae6) button_value_adjust_pane_ParamLimits

0x536b,	// (0x00024ae6) button_value_adjust_pane

0xd95c,	// (0x0002d0d7) button_value_adjust_pane_cp6_ParamLimits

0xd95c,	// (0x0002d0d7) button_value_adjust_pane_cp6

0xda9e,	// (0x0002d219) settings_code_pane_cp_ParamLimits

0xda9e,	// (0x0002d219) settings_code_pane_cp

0x2a3c,	// (0x000221b7) cell_touch_pane_g1

0x2a3c,	// (0x000221b7) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0002eebd) cell_touch_pane_g

0xdbd4,	// (0x0002d34f) cell_touch_pane_cp_ParamLimits

0xdbd4,	// (0x0002d34f) cell_touch_pane_cp

0xdbf0,	// (0x0002d36b) cell_touch_pane_ParamLimits

0xdbf0,	// (0x0002d36b) cell_touch_pane

0x2a3c,	// (0x000221b7) scroll_sc2_down_pane_g1

0x2a3c,	// (0x000221b7) scroll_sc2_up_pane_g1

0x2a46,	// (0x000221c1) bg_set_opt_pane_cp4_vc

0x6a51,	// (0x000261cc) list_set_graphic_pane_vc_g1_ParamLimits

0x6a51,	// (0x000261cc) list_set_graphic_pane_vc_g1

0x6a5d,	// (0x000261d8) list_set_graphic_pane_vc_g2_ParamLimits

0x6a5d,	// (0x000261d8) list_set_graphic_pane_vc_g2

0x0001,

0xfa2e,	// (0x0002f1a9) list_set_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0002f1a9) list_set_graphic_pane_vc_g

0x6a69,	// (0x000261e4) text_primary_small_cp13_vc_ParamLimits

0x6a69,	// (0x000261e4) text_primary_small_cp13_vc

0x6a81,	// (0x000261fc) list_set_graphic_pane_vc_ParamLimits

0x6a81,	// (0x000261fc) list_set_graphic_pane_vc

0x2a46,	// (0x000221c1) input_focus_pane_cp2_vc

0x2a3c,	// (0x000221b7) setting_code_pane_vc_g1

0x6a95,	// (0x00026210) setting_code_pane_vc_t1

0x6aa3,	// (0x0002621e) set_text_pane_vc_t1_ParamLimits

0x6aa3,	// (0x0002621e) set_text_pane_vc_t1

0x2a46,	// (0x000221c1) input_focus_pane_cp1_vc

0x6ac1,	// (0x0002623c) list_set_text_pane_vc

0x2a3c,	// (0x000221b7) setting_text_pane_vc_g1

0x2a46,	// (0x000221c1) bg_set_opt_pane_cp2_vc

0x6acb,	// (0x00026246) setting_slider_graphic_pane_vc_g1

0x6ad3,	// (0x0002624e) setting_slider_graphic_pane_vc_t1

0x6ae1,	// (0x0002625c) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x0002f1ae) setting_slider_graphic_pane_vc_t

0x6aef,	// (0x0002626a) slider_set_pane_cp_vc

0x6af7,	// (0x00026272) slider_set_pane_vc_g1

0x6b00,	// (0x0002627b) slider_set_pane_vc_g2

0x0006,

0xfa38,	// (0x0002f1b3) slider_set_pane_vc_g

0x3414,	// (0x00022b8f) set_opt_bg_pane_g1_copy1

0x341c,	// (0x00022b97) set_opt_bg_pane_g2_copy1

0x6b2c,	// (0x000262a7) set_opt_bg_pane_g3_copy1

0x342c,	// (0x00022ba7) set_opt_bg_pane_g4_copy1

0x3434,	// (0x00022baf) set_opt_bg_pane_g5_copy1

0x343c,	// (0x00022bb7) set_opt_bg_pane_g6_copy1

0x6b36,	// (0x000262b1) set_opt_bg_pane_g7_copy1

0x6b40,	// (0x000262bb) set_opt_bg_pane_g8_copy1

0x6b4a,	// (0x000262c5) set_opt_bg_pane_g9_copy1

0x2a46,	// (0x000221c1) bg_set_opt_pane_cp_vc

0x6b54,	// (0x000262cf) setting_slider_pane_vc_t1

0x6ad3,	// (0x0002624e) setting_slider_pane_vc_t2

0x6ae1,	// (0x0002625c) setting_slider_pane_vc_t3

0x0002,

0xfa47,	// (0x0002f1c2) setting_slider_pane_vc_t

0x6aef,	// (0x0002626a) slider_set_pane_vc

0x1b29,	// (0x000212a4) volume_set_pane_vc_g1

0x1b32,	// (0x000212ad) volume_set_pane_vc_g2

0x1b3b,	// (0x000212b6) volume_set_pane_vc_g3

0x1b44,	// (0x000212bf) volume_set_pane_vc_g4

0x1b4d,	// (0x000212c8) volume_set_pane_vc_g5

0x1b56,	// (0x000212d1) volume_set_pane_vc_g6

0x1b5f,	// (0x000212da) volume_set_pane_vc_g7

0x1b68,	// (0x000212e3) volume_set_pane_vc_g8

0x1b71,	// (0x000212ec) volume_set_pane_vc_g9

0x1b7a,	// (0x000212f5) volume_set_pane_vc_g10

0x0009,

0xfa4e,	// (0x0002f1c9) volume_set_pane_vc_g

0x6b63,	// (0x000262de) volume_set_pane_vc

0x6bad,	// (0x00026328) button_value_adjust_pane_cp1_vc

0x6bb7,	// (0x00026332) list_highlight_pane_cp2_vc

0x6bc0,	// (0x0002633b) list_set_pane_vc_ParamLimits

0x6bc0,	// (0x0002633b) list_set_pane_vc

0x6c2a,	// (0x000263a5) main_pane_set_vc_t1_ParamLimits

0x6c2a,	// (0x000263a5) main_pane_set_vc_t1

0x6c3f,	// (0x000263ba) main_pane_set_vc_t2_ParamLimits

0x6c3f,	// (0x000263ba) main_pane_set_vc_t2

0x6c51,	// (0x000263cc) main_pane_set_vc_t3_ParamLimits

0x6c51,	// (0x000263cc) main_pane_set_vc_t3

0x6c65,	// (0x000263e0) main_pane_set_vc_t4_ParamLimits

0x6c65,	// (0x000263e0) main_pane_set_vc_t4

0x0003,

0xfa63,	// (0x0002f1de) main_pane_set_vc_t_ParamLimits

0xfa63,	// (0x0002f1de) main_pane_set_vc_t

0x6c79,	// (0x000263f4) setting_code_pane_vc_ParamLimits

0x6c79,	// (0x000263f4) setting_code_pane_vc

0x6c8a,	// (0x00026405) setting_slider_graphic_pane_vc

0x6c8a,	// (0x00026405) setting_slider_pane_vc

0x6c8a,	// (0x00026405) setting_text_pane_vc

0x6c8a,	// (0x00026405) setting_volume_pane_vc

0x6c94,	// (0x0002640f) scroll_pane_cp121_vc

0x3387,	// (0x00022b02) set_content_pane_vc

0x6cd2,	// (0x0002644d) button_value_adjust_pane_g1

0x6cdb,	// (0x00026456) button_value_adjust_pane_g2

0x0001,

0xfab6,	// (0x0002f231) button_value_adjust_pane_g

0x6ce4,	// (0x0002645f) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6ce4,	// (0x0002645f) form_field_slider_wide_pane_vc_t1

0x6cf8,	// (0x00026473) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6cf8,	// (0x00026473) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabb,	// (0x0002f236) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabb,	// (0x0002f236) form_field_slider_wide_pane_vc_t

0x2da2,	// (0x0002251d) input_focus_pane_cp10_vc_ParamLimits

0x2da2,	// (0x0002251d) input_focus_pane_cp10_vc

0x6d0a,	// (0x00026485) slider_cont_pane_cp1_vc_ParamLimits

0x6d0a,	// (0x00026485) slider_cont_pane_cp1_vc

0x6af7,	// (0x00026272) slider_form_pane_g1_cp2

0x6b00,	// (0x0002627b) slider_form_pane_g2_cp2

0x6d23,	// (0x0002649e) form_field_slider_pane_vc_t3

0x6d31,	// (0x000264ac) form_field_slider_pane_vc_t4

0x6d3f,	// (0x000264ba) slider_form_pane_vc_ParamLimits

0x6d3f,	// (0x000264ba) slider_form_pane_vc

0x6d4c,	// (0x000264c7) form_field_slider_pane_vc_t1_ParamLimits

0x6d4c,	// (0x000264c7) form_field_slider_pane_vc_t1

0x6cf8,	// (0x00026473) form_field_slider_pane_vc_t2_ParamLimits

0x6cf8,	// (0x00026473) form_field_slider_pane_vc_t2

0x0001,

0xfacb,	// (0x0002f246) form_field_slider_pane_vc_t_ParamLimits

0xfacb,	// (0x0002f246) form_field_slider_pane_vc_t

0x2da2,	// (0x0002251d) input_focus_pane_cp9_vc_ParamLimits

0x2da2,	// (0x0002251d) input_focus_pane_cp9_vc

0x6d68,	// (0x000264e3) slider_cont_pane_vc_ParamLimits

0x6d68,	// (0x000264e3) slider_cont_pane_vc

0x6d7a,	// (0x000264f5) list_form_graphic_pane_cp_vc_ParamLimits

0x6d7a,	// (0x000264f5) list_form_graphic_pane_cp_vc

0x503d,	// (0x000247b8) form_field_popup_wide_pane_vc_g1

0x6d8f,	// (0x0002650a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6d8f,	// (0x0002650a) form_field_popup_wide_pane_vc_t1

0x33ad,	// (0x00022b28) input_focus_pane_cp8_vc_ParamLimits

0x33ad,	// (0x00022b28) input_focus_pane_cp8_vc

0x6da6,	// (0x00026521) list_form_wide_pane_vc_ParamLimits

0x6da6,	// (0x00026521) list_form_wide_pane_vc

0x6db2,	// (0x0002652d) list_form_graphic_pane_vc_g1

0x6dba,	// (0x00026535) list_form_graphic_pane_vc_t1_ParamLimits

0x6dba,	// (0x00026535) list_form_graphic_pane_vc_t1

0x2b26,	// (0x000222a1) list_highlight_pane_cp5_vc_ParamLimits

0x2b26,	// (0x000222a1) list_highlight_pane_cp5_vc

0x6dd6,	// (0x00026551) list_form_graphic_pane_vc_ParamLimits

0x6dd6,	// (0x00026551) list_form_graphic_pane_vc

0x503d,	// (0x000247b8) form_field_popup_pane_vc_g1

0x6dec,	// (0x00026567) form_field_popup_pane_vc_t1_ParamLimits

0x6dec,	// (0x00026567) form_field_popup_pane_vc_t1

0x33ad,	// (0x00022b28) input_focus_pane_cp7_vc_ParamLimits

0x33ad,	// (0x00022b28) input_focus_pane_cp7_vc

0x6e03,	// (0x0002657e) list_form_pane_vc_ParamLimits

0x6e03,	// (0x0002657e) list_form_pane_vc

0x6e0f,	// (0x0002658a) data_form_pane_vc_t1_ParamLimits

0x6e0f,	// (0x0002658a) data_form_pane_vc_t1

0x3414,	// (0x00022b8f) input_focus_pane_vc_g1

0x341c,	// (0x00022b97) input_focus_pane_vc_g2

0x3424,	// (0x00022b9f) input_focus_pane_vc_g3

0x342c,	// (0x00022ba7) input_focus_pane_vc_g4

0x3434,	// (0x00022baf) input_focus_pane_vc_g5

0x343c,	// (0x00022bb7) input_focus_pane_vc_g6

0x3444,	// (0x00022bbf) input_focus_pane_vc_g7

0x344c,	// (0x00022bc7) input_focus_pane_vc_g8

0x3454,	// (0x00022bcf) input_focus_pane_vc_g9

0x2a3c,	// (0x000221b7) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0002ee46) input_focus_pane_vc_g

0x5031,	// (0x000247ac) data_form_pane_vc_ParamLimits

0x5031,	// (0x000247ac) data_form_pane_vc

0x503d,	// (0x000247b8) form_field_data_pane_vc_g1

0x6e2c,	// (0x000265a7) form_field_data_pane_vc_t1_ParamLimits

0x6e2c,	// (0x000265a7) form_field_data_pane_vc_t1

0x33ad,	// (0x00022b28) input_focus_pane_vc_ParamLimits

0x33ad,	// (0x00022b28) input_focus_pane_vc

0x6e46,	// (0x000265c1) button_value_adjust_pane_cp3_vc

0x6e4e,	// (0x000265c9) button_value_adjust_pane_cp5_vc

0x6e56,	// (0x000265d1) form_field_data_pane_vc_ParamLimits

0x6e56,	// (0x000265d1) form_field_data_pane_vc

0x6e71,	// (0x000265ec) form_field_data_pane_vc_cp2

0x6e79,	// (0x000265f4) form_field_data_wide_pane_vc_ParamLimits

0x6e79,	// (0x000265f4) form_field_data_wide_pane_vc

0x6e93,	// (0x0002660e) form_field_data_wide_pane_vc_cp2

0x6e9b,	// (0x00026616) form_field_popup_pane_vc_ParamLimits

0x6e9b,	// (0x00026616) form_field_popup_pane_vc

0x6eb6,	// (0x00026631) form_field_popup_wide_pane_vc_ParamLimits

0x6eb6,	// (0x00026631) form_field_popup_wide_pane_vc

0x6ed0,	// (0x0002664b) form_field_slider_pane_vc_ParamLimits

0x6ed0,	// (0x0002664b) form_field_slider_pane_vc

0x6ee3,	// (0x0002665e) form_field_slider_wide_pane_vc_ParamLimits

0x6ee3,	// (0x0002665e) form_field_slider_wide_pane_vc

0xdc0e,	// (0x0002d389) grid_touch_1_pane_ParamLimits

0xdc0e,	// (0x0002d389) grid_touch_1_pane

0xdc22,	// (0x0002d39d) grid_touch_2_pane_ParamLimits

0xdc22,	// (0x0002d39d) grid_touch_2_pane

0x6fba,	// (0x00026735) touch_pane_g1_ParamLimits

0x6fba,	// (0x00026735) touch_pane_g1

0x6f1c,	// (0x00026697) cell_app_pane_cp_wide_ParamLimits

0x6f1c,	// (0x00026697) cell_app_pane_cp_wide

0x6f2d,	// (0x000266a8) grid_popup_fast_wide_pane_ParamLimits

0x6f2d,	// (0x000266a8) grid_popup_fast_wide_pane

0x6f41,	// (0x000266bc) scroll_pane_cp19_ParamLimits

0x6f41,	// (0x000266bc) scroll_pane_cp19

0x2a46,	// (0x000221c1) bg_popup_window_pane_cp20

0x6f55,	// (0x000266d0) listscroll_popup_fast_wide_pane

0x3583,	// (0x00022cfe) grid_indicator_nsta_pane

0x6f5d,	// (0x000266d8) clock_nsta_pane_g1

0x6f66,	// (0x000266e1) clock_nsta_pane_t1

0xdc4e,	// (0x0002d3c9) cell_indicator_nsta_pane_ParamLimits

0xdc4e,	// (0x0002d3c9) cell_indicator_nsta_pane

0x6fba,	// (0x00026735) cell_indicator_nsta_pane_g1

0xdc6b,	// (0x0002d3e6) cell_indicator_nsta_pane_g2

0x0001,

0xfad5,	// (0x0002f250) cell_indicator_nsta_pane_g

0x6fdd,	// (0x00026758) clock_nsta_pane_cp

0x6fe5,	// (0x00026760) indicator_nsta_pane_cp

0x6fed,	// (0x00026768) nsta_clock_indic_pane_g1

0x2bf2,	// (0x0002236d) grid_indicator_pane

0x3955,	// (0x000230d0) scroll_pane_cp29

0x16ed,	// (0x00020e68) indicator_nsta_pane_cp2_ParamLimits

0x16ed,	// (0x00020e68) indicator_nsta_pane_cp2

0x2b26,	// (0x000222a1) main_apps_wheel_pane

0x51fc,	// (0x00024977) form_midp_field_text_pane_ParamLimits

0x534b,	// (0x00024ac6) scroll_bar_cp050_ParamLimits

0x7025,	// (0x000267a0) cell_indicator_pane_ParamLimits

0x7025,	// (0x000267a0) cell_indicator_pane

0x703d,	// (0x000267b8) cell_indicator_pane_g1

0xdc81,	// (0x0002d3fc) grid_wheel_folder_pane_ParamLimits

0xdc81,	// (0x0002d3fc) grid_wheel_folder_pane

0xdc8f,	// (0x0002d40a) list_wheel_apps_pane_ParamLimits

0xdc8f,	// (0x0002d40a) list_wheel_apps_pane

0xdc9d,	// (0x0002d418) main_apps_wheel_pane_g1_ParamLimits

0xdc9d,	// (0x0002d418) main_apps_wheel_pane_g1

0xdcad,	// (0x0002d428) main_apps_wheel_pane_g2_ParamLimits

0xdcad,	// (0x0002d428) main_apps_wheel_pane_g2

0x0001,

0xfae4,	// (0x0002f25f) main_apps_wheel_pane_g_ParamLimits

0xfae4,	// (0x0002f25f) main_apps_wheel_pane_g

0xdcbd,	// (0x0002d438) main_apps_wheel_pane_t1_ParamLimits

0xdcbd,	// (0x0002d438) main_apps_wheel_pane_t1

0xdcd5,	// (0x0002d450) list_wheel_apps_pane_g1

0xdcdd,	// (0x0002d458) list_wheel_apps_pane_g2

0xdce5,	// (0x0002d460) list_wheel_apps_pane_g3

0xdced,	// (0x0002d468) list_wheel_apps_pane_g4

0xdcf5,	// (0x0002d470) list_wheel_apps_pane_g5

0x0004,

0xfae9,	// (0x0002f264) list_wheel_apps_pane_g

0x3e93,	// (0x0002360e) navi_icon_text_pane

0xd241,	// (0x0002c9bc) aid_fill_nsta

0xdd12,	// (0x0002d48d) navi_icon_text_pane_g1

0xdd1e,	// (0x0002d499) navi_icon_text_pane_t1

0xca0d,	// (0x0002c188) list_set_graphic_pane_t1_ParamLimits

0xca0d,	// (0x0002c188) list_set_graphic_pane_t1

0x5a6b,	// (0x000251e6) popup_midp_note_alarm_window_t6_ParamLimits

0x5a6b,	// (0x000251e6) popup_midp_note_alarm_window_t6

0x5a7d,	// (0x000251f8) popup_midp_note_alarm_window_t7_ParamLimits

0x5a7d,	// (0x000251f8) popup_midp_note_alarm_window_t7

0x5a8f,	// (0x0002520a) popup_midp_note_alarm_window_t8_ParamLimits

0x5a8f,	// (0x0002520a) popup_midp_note_alarm_window_t8

0x5aa1,	// (0x0002521c) popup_midp_note_alarm_window_t9_ParamLimits

0x5aa1,	// (0x0002521c) popup_midp_note_alarm_window_t9

0x5ab3,	// (0x0002522e) popup_midp_note_alarm_window_t10_ParamLimits

0x5ab3,	// (0x0002522e) popup_midp_note_alarm_window_t10

0x5ac5,	// (0x00025240) popup_midp_note_alarm_window_t11_ParamLimits

0x5ac5,	// (0x00025240) popup_midp_note_alarm_window_t11

0x5ad7,	// (0x00025252) scroll_pane_cp17_ParamLimits

0x5ad7,	// (0x00025252) scroll_pane_cp17

0x1b29,	// (0x000212a4) volume_small_pane_cp_g1

0x1df8,	// (0x00021573) volume_small_pane_cp_g2

0x1e01,	// (0x0002157c) volume_small_pane_cp_g3

0x1e0a,	// (0x00021585) volume_small_pane_cp_g4

0x1e13,	// (0x0002158e) volume_small_pane_cp_g5

0x1e1c,	// (0x00021597) volume_small_pane_cp_g6

0x1e25,	// (0x000215a0) volume_small_pane_cp_g7

0x1e2e,	// (0x000215a9) volume_small_pane_cp_g8

0x1e37,	// (0x000215b2) volume_small_pane_cp_g9

0x1e40,	// (0x000215bb) volume_small_pane_cp_g10

0x40f4,	// (0x0002386f) midp_ticker_pane_g1_ParamLimits

0x4100,	// (0x0002387b) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0002ef0e) midp_ticker_pane_g_ParamLimits

0xcacd,	// (0x0002c248) midp_ticker_pane_t1_ParamLimits

0xd261,	// (0x0002c9dc) aid_fill_nsta_2

0x5337,	// (0x00024ab2) list_form2_midp_pane

0x6494,	// (0x00025c0f) midp_editing_number_pane_ParamLimits

0x64a3,	// (0x00025c1e) midp_ticker_pane_ParamLimits

0x7136,	// (0x000268b1) form2_midp_field_pane

0x715a,	// (0x000268d5) scroll_pane_cp51

0x717a,	// (0x000268f5) form2_midp_button_pane_ParamLimits

0x717a,	// (0x000268f5) form2_midp_button_pane

0x718c,	// (0x00026907) form2_midp_content_pane_ParamLimits

0x718c,	// (0x00026907) form2_midp_content_pane

0x71a6,	// (0x00026921) form2_midp_field_choice_group_pane

0x71ae,	// (0x00026929) form2_midp_field_pane_g1

0x71b6,	// (0x00026931) form2_midp_field_pane_g2

0x71be,	// (0x00026939) form2_midp_field_pane_g3

0x71c6,	// (0x00026941) form2_midp_field_pane_g4

0x0003,

0xfb0e,	// (0x0002f289) form2_midp_field_pane_g

0x71ce,	// (0x00026949) form2_midp_gauge_slider_pane

0x71d6,	// (0x00026951) form2_midp_gauge_wait_pane

0x71de,	// (0x00026959) form2_midp_image_pane_ParamLimits

0x71de,	// (0x00026959) form2_midp_image_pane

0x71f9,	// (0x00026974) form2_midp_label_pane_ParamLimits

0x71f9,	// (0x00026974) form2_midp_label_pane

0xdd4c,	// (0x0002d4c7) form2_midp_label_pane_cp_ParamLimits

0xdd4c,	// (0x0002d4c7) form2_midp_label_pane_cp

0x7239,	// (0x000269b4) form2_midp_string_pane_ParamLimits

0x7239,	// (0x000269b4) form2_midp_string_pane

0x0ba2,	// (0x0002031d) form2_midp_text_pane_ParamLimits

0x0ba2,	// (0x0002031d) form2_midp_text_pane

0x724b,	// (0x000269c6) form2_midp_time_pane

0x725b,	// (0x000269d6) input_focus_pane_cp51_ParamLimits

0x725b,	// (0x000269d6) input_focus_pane_cp51

0x7273,	// (0x000269ee) form2_midp_label_pane_t1_ParamLimits

0x7273,	// (0x000269ee) form2_midp_label_pane_t1

0x0bc3,	// (0x0002033e) form2_mdip_text_pane_t1_ParamLimits

0x0bc3,	// (0x0002033e) form2_mdip_text_pane_t1

0x0be7,	// (0x00020362) form2_midp_time_pane_t1

0x72c1,	// (0x00026a3c) form2_midp_gauge_slider_pane_t1

0xdd6d,	// (0x0002d4e8) form2_midp_gauge_slider_pane_t2

0xdd7f,	// (0x0002d4fa) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb17,	// (0x0002f292) form2_midp_gauge_slider_pane_t

0x72f7,	// (0x00026a72) form2_midp_slider_pane

0x7303,	// (0x00026a7e) form2_midp_gauge_wait_pane_t1

0x7311,	// (0x00026a8c) form2_midp_wait_pane_ParamLimits

0x7311,	// (0x00026a8c) form2_midp_wait_pane

0xd6ae,	// (0x0002ce29) list_single_2graphic_pane_cp4_ParamLimits

0xd6ae,	// (0x0002ce29) list_single_2graphic_pane_cp4

0xdd91,	// (0x0002d50c) list_single_midp_graphic_pane_cp_ParamLimits

0xdd91,	// (0x0002d50c) list_single_midp_graphic_pane_cp

0x2a46,	// (0x000221c1) list_highlight_pane_cp20

0x7360,	// (0x00026adb) list_single_2graphic_pane_g1_cp4

0x6933,	// (0x000260ae) list_single_2graphic_pane_g2_cp4

0x7368,	// (0x00026ae3) list_single_2graphic_pane_t1_cp4

0x2b26,	// (0x000222a1) list_highlight_pane_cp21

0x7377,	// (0x00026af2) list_single_midp_graphic_pane_g4_cp

0x7386,	// (0x00026b01) list_single_midp_graphic_pane_t1_cp

0xddb2,	// (0x0002d52d) form2_mdip_string_pane_t1_ParamLimits

0xddb2,	// (0x0002d52d) form2_mdip_string_pane_t1

0x2a46,	// (0x000221c1) bg_wml_button_pane_cp2

0x2a3c,	// (0x000221b7) form2_midp_image_pane_g1

0x025b,	// (0x0001f9d6) list_double_large_graphic_pane_g5_ParamLimits

0x025b,	// (0x0001f9d6) list_double_large_graphic_pane_g5

0xca25,	// (0x0002c1a0) midp_form_pane_ParamLimits

0x2b26,	// (0x000222a1) main_apps_wheel_pane_ParamLimits

0xcf59,	// (0x0002c6d4) popup_preview_window_ParamLimits

0xcf59,	// (0x0002c6d4) popup_preview_window

0x4961,	// (0x000240dc) popup_touch_info_window_ParamLimits

0x4961,	// (0x000240dc) popup_touch_info_window

0x4983,	// (0x000240fe) popup_touch_menu_window_ParamLimits

0x4983,	// (0x000240fe) popup_touch_menu_window

0x2a32,	// (0x000221ad) bg_popup_sub_pane_cp6

0x7440,	// (0x00026bbb) list_touch_menu_pane

0x7448,	// (0x00026bc3) list_single_touch_menu_pane_ParamLimits

0x7448,	// (0x00026bc3) list_single_touch_menu_pane

0x7463,	// (0x00026bde) list_single_touch_menu_pane_t1

0x2b26,	// (0x000222a1) bg_popup_sub_pane_cp7_ParamLimits

0x2b26,	// (0x000222a1) bg_popup_sub_pane_cp7

0x7471,	// (0x00026bec) heading_sub_pane

0x7479,	// (0x00026bf4) list_touch_info_pane_ParamLimits

0x7479,	// (0x00026bf4) list_touch_info_pane

0x7488,	// (0x00026c03) list_single_touch_info_pane_ParamLimits

0x7488,	// (0x00026c03) list_single_touch_info_pane

0x749a,	// (0x00026c15) list_single_touch_info_pane_t1

0x74a8,	// (0x00026c23) list_single_touch_info_pane_t2

0x0001,

0xfb25,	// (0x0002f2a0) list_single_touch_info_pane_t

0x4017,	// (0x00023792) bg_popup_heading_pane_cp

0x74b6,	// (0x00026c31) heading_sub_pane_t1

0x4fcb,	// (0x00024746) bg_popup_preview_window_pane_cp_ParamLimits

0x4fcb,	// (0x00024746) bg_popup_preview_window_pane_cp

0x7471,	// (0x00026bec) heading_preview_pane

0x7479,	// (0x00026bf4) list_preview_pane_ParamLimits

0x7479,	// (0x00026bf4) list_preview_pane

0x74c4,	// (0x00026c3f) popup_preview_window_g1

0x7488,	// (0x00026c03) list_single_preview_pane_ParamLimits

0x7488,	// (0x00026c03) list_single_preview_pane

0x74cc,	// (0x00026c47) list_single_preview_pane_g1

0x74d4,	// (0x00026c4f) list_single_preview_pane_t1

0x749a,	// (0x00026c15) list_single_preview_pane_t2

0x0001,

0xfb2a,	// (0x0002f2a5) list_single_preview_pane_t

0x74e2,	// (0x00026c5d) bg_popup_heading_pane_cp2_ParamLimits

0x74e2,	// (0x00026c5d) bg_popup_heading_pane_cp2

0x74f8,	// (0x00026c73) heading_preview_pane_g1

0x7500,	// (0x00026c7b) heading_preview_pane_t1_ParamLimits

0x7500,	// (0x00026c7b) heading_preview_pane_t1

0x2c15,	// (0x00022390) soft_indicator_pane_t1_ParamLimits

0x3320,	// (0x00022a9b) scroll_pane_ParamLimits

0x3851,	// (0x00022fcc) scroll_sc2_left_pane

0x385a,	// (0x00022fd5) scroll_sc2_right_pane

0x3879,	// (0x00022ff4) scroll_bg_pane_g1_ParamLimits

0x388e,	// (0x00023009) scroll_bg_pane_g2_ParamLimits

0x38a6,	// (0x00023021) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0002ee9d) scroll_bg_pane_g_ParamLimits

0x3879,	// (0x00022ff4) scroll_handle_pane_g1_ParamLimits

0x38c8,	// (0x00023043) scroll_handle_pane_g2_ParamLimits

0x38a6,	// (0x00023021) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0002eea4) scroll_handle_pane_g_ParamLimits

0x43c5,	// (0x00023b40) popup_choice_list_window_ParamLimits

0x43c5,	// (0x00023b40) popup_choice_list_window

0x4e23,	// (0x0002459e) choice_list_pane

0x4ea5,	// (0x00024620) cell_toolbar_pane_t1

0x4ecd,	// (0x00024648) toolbar_button_pane_ParamLimits

0x5fa7,	// (0x00025722) ai_gene_pane_1_t2_ParamLimits

0x5fa7,	// (0x00025722) ai_gene_pane_1_t2

0x0001,

0xf941,	// (0x0002f0bc) ai_gene_pane_1_t_ParamLimits

0xf941,	// (0x0002f0bc) ai_gene_pane_1_t

0x751d,	// (0x00026c98) scroll_sc2_left_pane_g1

0x751d,	// (0x00026c98) scroll_sc2_right_pane_g1

0x439d,	// (0x00023b18) bg_popup_sub_pane_cp10

0x7527,	// (0x00026ca2) list_choice_list_pane

0x753e,	// (0x00026cb9) list_single_choice_list_pane_ParamLimits

0x753e,	// (0x00026cb9) list_single_choice_list_pane

0x7552,	// (0x00026ccd) list_single_choice_list_pane_g1

0x755a,	// (0x00026cd5) list_single_choice_list_pane_t1_ParamLimits

0x755a,	// (0x00026cd5) list_single_choice_list_pane_t1

0x756f,	// (0x00026cea) choice_list_pane_g1

0x7577,	// (0x00026cf2) choice_list_pane_t1

0x2a32,	// (0x000221ad) input_focus_pane_cp11

0x372b,	// (0x00022ea6) title_pane_stacon_g2_ParamLimits

0x372b,	// (0x00022ea6) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0002ee83) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0002ee83) title_pane_stacon_g

0x4017,	// (0x00023792) cursor_press_pane

0xcbda,	// (0x0002c355) popup_fep_hwr_window_ParamLimits

0xcbda,	// (0x0002c355) popup_fep_hwr_window

0x4505,	// (0x00023c80) popup_fep_vkb_window_ParamLimits

0x4505,	// (0x00023c80) popup_fep_vkb_window

0x7585,	// (0x00026d00) cursor_press_pane_g1

0x0002,

0xfb53,	// (0x0002f2ce) fep_vkb_side_pane_g_ParamLimits

0x1e74,	// (0x000215ef) fep_hwr_candidate_pane_ParamLimits

0x1e74,	// (0x000215ef) fep_hwr_candidate_pane

0x1e9e,	// (0x00021619) fep_hwr_side_pane_ParamLimits

0x1e9e,	// (0x00021619) fep_hwr_side_pane

0x1ec0,	// (0x0002163b) fep_hwr_top_pane_ParamLimits

0x1ec0,	// (0x0002163b) fep_hwr_top_pane

0x1ed8,	// (0x00021653) fep_hwr_write_pane_ParamLimits

0x1ed8,	// (0x00021653) fep_hwr_write_pane

0xfb53,	// (0x0002f2ce) fep_vkb_side_pane_g

0x759b,	// (0x00026d16) fep_hwr_top_pane_g1

0x75ad,	// (0x00026d28) fep_hwr_top_pane_g2

0x1f04,	// (0x0002167f) fep_hwr_top_pane_g3

0x0002,

0xfb2f,	// (0x0002f2aa) fep_hwr_top_pane_g

0x1f19,	// (0x00021694) fep_hwr_top_text_pane

0x3a1d,	// (0x00023198) fep_hwr_top_text_pane_g1

0x75e3,	// (0x00026d5e) fep_hwr_top_text_pane_t1

0x2023,	// (0x0002179e) fep_hwr_candidate_pane_g1

0x782e,	// (0x00026fa9) fep_vkb_keypad_pane_g3_ParamLimits

0x782e,	// (0x00026fa9) fep_vkb_keypad_pane_g3

0x785a,	// (0x00026fd5) fep_vkb_keypad_pane_g4_ParamLimits

0x785a,	// (0x00026fd5) fep_vkb_keypad_pane_g4

0x78d1,	// (0x0002704c) fep_vkb_bottom_pane_g2_ParamLimits

0x78d1,	// (0x0002704c) fep_vkb_bottom_pane_g2

0x0001,

0xfb5a,	// (0x0002f2d5) fep_vkb_bottom_pane_g_ParamLimits

0xfb5a,	// (0x0002f2d5) fep_vkb_bottom_pane_g

0x751d,	// (0x00026c98) cell_vkb_side_pane_g2

0x0001,

0xfb64,	// (0x0002f2df) cell_vkb_side_pane_g

0x795c,	// (0x000270d7) cell_vkb_side_pane_t1

0x796a,	// (0x000270e5) cell_vkb_side_pane_t1_copy1

0x751d,	// (0x00026c98) bg_fep_vkb_candidate_pane_g2

0x7aae,	// (0x00027229) cell_vkb_candidate_pane_ParamLimits

0x75f1,	// (0x00026d6c) aid_size_cell_vkb_ParamLimits

0x75f1,	// (0x00026d6c) aid_size_cell_vkb

0x7aae,	// (0x00027229) cell_vkb_candidate_pane

0x203d,	// (0x000217b8) bg_popup_fep_shadow_pane_g1

0xde4e,	// (0x0002d5c9) fep_vkb_bottom_pane_ParamLimits

0xde4e,	// (0x0002d5c9) fep_vkb_bottom_pane

0x76c0,	// (0x00026e3b) fep_vkb_candidate_pane_ParamLimits

0x76c0,	// (0x00026e3b) fep_vkb_candidate_pane

0xde7a,	// (0x0002d5f5) fep_vkb_keypad_pane_ParamLimits

0xde7a,	// (0x0002d5f5) fep_vkb_keypad_pane

0xdea1,	// (0x0002d61c) fep_vkb_side_pane_ParamLimits

0xdea1,	// (0x0002d61c) fep_vkb_side_pane

0xdedd,	// (0x0002d658) fep_vkb_top_pane_ParamLimits

0xdedd,	// (0x0002d658) fep_vkb_top_pane

0x7787,	// (0x00026f02) fep_vkb_top_pane_g1_ParamLimits

0x7787,	// (0x00026f02) fep_vkb_top_pane_g1

0x7796,	// (0x00026f11) fep_vkb_top_pane_g2_ParamLimits

0x7796,	// (0x00026f11) fep_vkb_top_pane_g2

0x77a5,	// (0x00026f20) fep_vkb_top_pane_g3_ParamLimits

0x77a5,	// (0x00026f20) fep_vkb_top_pane_g3

0x0003,

0xfb4a,	// (0x0002f2c5) fep_vkb_top_pane_g_ParamLimits

0xfb4a,	// (0x0002f2c5) fep_vkb_top_pane_g

0x77c3,	// (0x00026f3e) fep_vkb_top_text_pane_ParamLimits

0x77c3,	// (0x00026f3e) fep_vkb_top_text_pane

0xdf19,	// (0x0002d694) fep_vkb_side_pane_g1_ParamLimits

0xdf19,	// (0x0002d694) fep_vkb_side_pane_g1

0x781d,	// (0x00026f98) grid_vkb_side_pane_ParamLimits

0x781d,	// (0x00026f98) grid_vkb_side_pane

0x2045,	// (0x000217c0) bg_popup_fep_shadow_pane_g2

0x204e,	// (0x000217c9) bg_popup_fep_shadow_pane_g3

0x2056,	// (0x000217d1) bg_popup_fep_shadow_pane_g4

0x205f,	// (0x000217da) bg_popup_fep_shadow_pane_g5

0x2069,	// (0x000217e4) bg_popup_fep_shadow_pane_g6

0x2071,	// (0x000217ec) bg_popup_fep_shadow_pane_g7

0x3434,	// (0x00022baf) bg_popup_fep_shadow_pane_g8

0x787c,	// (0x00026ff7) grid_vkb_keypad_number_pane_ParamLimits

0x787c,	// (0x00026ff7) grid_vkb_keypad_number_pane

0x7890,	// (0x0002700b) grid_vkb_keypad_pane_ParamLimits

0x7890,	// (0x0002700b) grid_vkb_keypad_pane

0x78b6,	// (0x00027031) fep_vkb_bottom_pane_g1_ParamLimits

0x78b6,	// (0x00027031) fep_vkb_bottom_pane_g1

0x78df,	// (0x0002705a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x78df,	// (0x0002705a) grid_vkb_keypad_bottom_left_pane

0x78f4,	// (0x0002706f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x78f4,	// (0x0002706f) grid_vkb_keypad_bottom_right_pane

0x7909,	// (0x00027084) fep_vkb_top_text_pane_g1

0xdf60,	// (0x0002d6db) fep_vkb_top_text_pane_t1

0xdf72,	// (0x0002d6ed) cell_vkb_side_pane_ParamLimits

0xdf72,	// (0x0002d6ed) cell_vkb_side_pane

0x751d,	// (0x00026c98) cell_vkb_side_pane_g1

0x7978,	// (0x000270f3) cell_vkb_keypad_pane_ParamLimits

0x7978,	// (0x000270f3) cell_vkb_keypad_pane

0x7a05,	// (0x00027180) cell_vkb_keypad_pane_g1

0x0008,

0xfb77,	// (0x0002f2f2) bg_popup_fep_shadow_pane_g

0x751d,	// (0x00026c98) cell_hwr_side_pane_g1

0x751d,	// (0x00026c98) cell_hwr_side_pane_g2

0x7a0f,	// (0x0002718a) cell_vkb_keypad_pane_t1

0xdf88,	// (0x0002d703) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf88,	// (0x0002d703) cell_vkb_keypad_bottom_left_pane

0xdf9d,	// (0x0002d718) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf9d,	// (0x0002d718) cell_vkb_keypad_bottom_right_pane

0x751d,	// (0x00026c98) cell_vkb_keypad_bottom_left_pane_g1

0x751d,	// (0x00026c98) cell_vkb_keypad_bottom_right_pane_g1

0x7a73,	// (0x000271ee) cell_vkb_keypad_number_pane_ParamLimits

0x7a73,	// (0x000271ee) cell_vkb_keypad_number_pane

0x7a92,	// (0x0002720d) cell_vkb_keypad_number_pane_g1

0x7a9c,	// (0x00027217) cell_vkb_keypad_number_pane_g2

0x7aa5,	// (0x00027220) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb69,	// (0x0002f2e4) cell_vkb_keypad_number_pane_g

0x7a0f,	// (0x0002718a) cell_vkb_keypad_number_pane_t1

0x7acf,	// (0x0002724a) fep_vkb_candidate_pane_g1

0x0001,

0xfb64,	// (0x0002f2df) cell_hwr_side_pane_g

0x7ae8,	// (0x00027263) cell_hwr_side_pane_t1

0x2083,	// (0x000217fe) cell_hwr_side_pane_t1_copy1

0x77b5,	// (0x00026f30) cell_hwr_candidate_pane_g1

0x2091,	// (0x0002180c) cell_hwr_candidate_pane_t1

0x751d,	// (0x00026c98) cell_vkb_candidate_pane_g2

0x7b6e,	// (0x000272e9) cell_vkb_candidate_pane_t1

0x758d,	// (0x00026d08) bg_popup_fep_shadow_pane_ParamLimits

0x758d,	// (0x00026d08) bg_popup_fep_shadow_pane

0xd37e,	// (0x0002caf9) bg_fep_hwr_top_pane_g4

0x75bf,	// (0x00026d3a) bg_hwr_side_pane_g1_ParamLimits

0x75bf,	// (0x00026d3a) bg_hwr_side_pane_g1

0xc30c,	// (0x0002ba87) cell_hwr_side_pane_ParamLimits

0xc30c,	// (0x0002ba87) cell_hwr_side_pane

0x1f94,	// (0x0002170f) fep_hwr_write_pane_g1_ParamLimits

0x1f94,	// (0x0002170f) fep_hwr_write_pane_g1

0x1fa1,	// (0x0002171c) fep_hwr_write_pane_g2_ParamLimits

0x1fa1,	// (0x0002171c) fep_hwr_write_pane_g2

0x1fae,	// (0x00021729) fep_hwr_write_pane_g3_ParamLimits

0x1fae,	// (0x00021729) fep_hwr_write_pane_g3

0xc32c,	// (0x0002baa7) fep_hwr_write_pane_g4_ParamLimits

0xc32c,	// (0x0002baa7) fep_hwr_write_pane_g4

0x0005,

0xfb36,	// (0x0002f2b1) fep_hwr_write_pane_g_ParamLimits

0xfb36,	// (0x0002f2b1) fep_hwr_write_pane_g

0xd37e,	// (0x0002caf9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd37e,	// (0x0002caf9) bg_fep_hwr_candidate_pane_g2

0x1fd1,	// (0x0002174c) cell_hwr_candidate_pane_ParamLimits

0x1fd1,	// (0x0002174c) cell_hwr_candidate_pane

0x2023,	// (0x0002179e) fep_hwr_candidate_pane_g1_ParamLimits

0x761f,	// (0x00026d9a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x761f,	// (0x00026d9a) bg_popup_fep_shadow_pane_cp2

0x77b5,	// (0x00026f30) fep_vkb_top_pane_g4_ParamLimits

0x77b5,	// (0x00026f30) fep_vkb_top_pane_g4

0x77fb,	// (0x00026f76) fep_vkb_side_pane_g2_ParamLimits

0x77fb,	// (0x00026f76) fep_vkb_side_pane_g2

0xb51a,	// (0x0002ac95) list_setting_pane_t4_ParamLimits

0xb51a,	// (0x0002ac95) list_setting_pane_t4

0xb5b6,	// (0x0002ad31) list_setting_number_pane_t5_ParamLimits

0xb5b6,	// (0x0002ad31) list_setting_number_pane_t5

0x3a4f,	// (0x000231ca) list_double_heading_pane_cp2_ParamLimits

0x3a4f,	// (0x000231ca) list_double_heading_pane_cp2

0x33c7,	// (0x00022b42) list_double_heading_pane_g1_cp2_ParamLimits

0x33c7,	// (0x00022b42) list_double_heading_pane_g1_cp2

0x33d3,	// (0x00022b4e) list_double_heading_pane_g2_cp2_ParamLimits

0x33d3,	// (0x00022b4e) list_double_heading_pane_g2_cp2

0x7b7c,	// (0x000272f7) list_double_heading_pane_t1_cp2_ParamLimits

0x7b7c,	// (0x000272f7) list_double_heading_pane_t1_cp2

0x7b92,	// (0x0002730d) list_double_heading_pane_t2_cp2_ParamLimits

0x7b92,	// (0x0002730d) list_double_heading_pane_t2_cp2

0x2a1a,	// (0x00022195) aid_value_unit2

0x127a,	// (0x000209f5) popup_preview_fixed_window

0x2db0,	// (0x0002252b) bg_popup_preview_window_pane_cp02

0x7ba4,	// (0x0002731f) list_preview_fixed_pane

0x7bea,	// (0x00027365) list_empty_pane_fp_ParamLimits

0x7bea,	// (0x00027365) list_empty_pane_fp

0x7bea,	// (0x00027365) list_single_cale_day_pane_fp_ParamLimits

0x7bea,	// (0x00027365) list_single_cale_day_pane_fp

0x7bea,	// (0x00027365) list_single_graphic_heading_pane_fp_ParamLimits

0x7bea,	// (0x00027365) list_single_graphic_heading_pane_fp

0x7bea,	// (0x00027365) list_single_graphic_pane_fp_ParamLimits

0x7bea,	// (0x00027365) list_single_graphic_pane_fp

0x7bea,	// (0x00027365) list_single_heading_pane_fp_ParamLimits

0x7bea,	// (0x00027365) list_single_heading_pane_fp

0x7bea,	// (0x00027365) list_single_pane_fp_ParamLimits

0x7bea,	// (0x00027365) list_single_pane_fp

0x7c03,	// (0x0002737e) list_single_pane_fp_g1_ParamLimits

0x7c03,	// (0x0002737e) list_single_pane_fp_g1

0x0bfa,	// (0x00020375) list_single_pane_fp_g2_ParamLimits

0x0bfa,	// (0x00020375) list_single_pane_fp_g2

0x0c06,	// (0x00020381) list_single_pane_fp_g3_ParamLimits

0x0c06,	// (0x00020381) list_single_pane_fp_g3

0x7c0f,	// (0x0002738a) list_single_pane_fp_g4_ParamLimits

0x7c0f,	// (0x0002738a) list_single_pane_fp_g4

0x0003,

0xfb98,	// (0x0002f313) list_single_pane_fp_g_ParamLimits

0xfb98,	// (0x0002f313) list_single_pane_fp_g

0x0c1a,	// (0x00020395) list_single_pane_fp_t1_ParamLimits

0x0c1a,	// (0x00020395) list_single_pane_fp_t1

0x0c31,	// (0x000203ac) list_single_graphic_pane_fp_g1_ParamLimits

0x0c31,	// (0x000203ac) list_single_graphic_pane_fp_g1

0x7c03,	// (0x0002737e) list_single_graphic_pane_fp_g2_ParamLimits

0x7c03,	// (0x0002737e) list_single_graphic_pane_fp_g2

0x0bfa,	// (0x00020375) list_single_graphic_pane_fp_g3_ParamLimits

0x0bfa,	// (0x00020375) list_single_graphic_pane_fp_g3

0x0c06,	// (0x00020381) list_single_graphic_pane_fp_g4_ParamLimits

0x0c06,	// (0x00020381) list_single_graphic_pane_fp_g4

0x7c0f,	// (0x0002738a) list_single_graphic_pane_fp_g5_ParamLimits

0x7c0f,	// (0x0002738a) list_single_graphic_pane_fp_g5

0x0004,

0xfba1,	// (0x0002f31c) list_single_graphic_pane_fp_g_ParamLimits

0xfba1,	// (0x0002f31c) list_single_graphic_pane_fp_g

0x0c3d,	// (0x000203b8) list_single_graphic_pane_fp_t1_ParamLimits

0x0c3d,	// (0x000203b8) list_single_graphic_pane_fp_t1

0x0c31,	// (0x000203ac) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0c31,	// (0x000203ac) list_single_graphic_heading_pane_fp_g1

0x7c03,	// (0x0002737e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7c03,	// (0x0002737e) list_single_graphic_heading_pane_fp_g2

0x0bfa,	// (0x00020375) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0bfa,	// (0x00020375) list_single_graphic_heading_pane_fp_g3

0x0c06,	// (0x00020381) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0c06,	// (0x00020381) list_single_graphic_heading_pane_fp_g4

0x7c0f,	// (0x0002738a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7c0f,	// (0x0002738a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba1,	// (0x0002f31c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0002f31c) list_single_graphic_heading_pane_fp_g

0x0c53,	// (0x000203ce) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0c53,	// (0x000203ce) list_single_graphic_heading_pane_fp_t1

0x0c69,	// (0x000203e4) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0c69,	// (0x000203e4) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0002f327) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0002f327) list_single_graphic_heading_pane_fp_t

0x0c7b,	// (0x000203f6) list_single_cale_day_pane_fp_g1_ParamLimits

0x0c7b,	// (0x000203f6) list_single_cale_day_pane_fp_g1

0x7c1b,	// (0x00027396) list_single_cale_day_pane_fp_g2_ParamLimits

0x7c1b,	// (0x00027396) list_single_cale_day_pane_fp_g2

0x0cb3,	// (0x0002042e) list_single_cale_day_pane_fp_g3_ParamLimits

0x0cb3,	// (0x0002042e) list_single_cale_day_pane_fp_g3

0x0cdb,	// (0x00020456) list_single_cale_day_pane_fp_g4_ParamLimits

0x0cdb,	// (0x00020456) list_single_cale_day_pane_fp_g4

0x0cff,	// (0x0002047a) list_single_cale_day_pane_fp_g5_ParamLimits

0x0cff,	// (0x0002047a) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb1,	// (0x0002f32c) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb1,	// (0x0002f32c) list_single_cale_day_pane_fp_g

0x0d23,	// (0x0002049e) list_single_cale_day_pane_fp_t1_ParamLimits

0x0d23,	// (0x0002049e) list_single_cale_day_pane_fp_t1

0x0d49,	// (0x000204c4) list_single_cale_day_pane_fp_t2_ParamLimits

0x0d49,	// (0x000204c4) list_single_cale_day_pane_fp_t2

0x0d62,	// (0x000204dd) list_single_cale_day_pane_fp_t3_ParamLimits

0x0d62,	// (0x000204dd) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbc,	// (0x0002f337) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbc,	// (0x0002f337) list_single_cale_day_pane_fp_t

0x7c03,	// (0x0002737e) list_empty_pane_fp_g1_ParamLimits

0x7c03,	// (0x0002737e) list_empty_pane_fp_g1

0x0d7b,	// (0x000204f6) list_empty_pane_fp_t1

0x0d89,	// (0x00020504) list_empty_pane_fp_t2

0x0001,

0xfbc3,	// (0x0002f33e) list_empty_pane_fp_t

0x7c03,	// (0x0002737e) list_single_heading_pane_fp_g1_ParamLimits

0x7c03,	// (0x0002737e) list_single_heading_pane_fp_g1

0x0bfa,	// (0x00020375) list_single_heading_pane_fp_g2_ParamLimits

0x0bfa,	// (0x00020375) list_single_heading_pane_fp_g2

0x0c06,	// (0x00020381) list_single_heading_pane_fp_g3_ParamLimits

0x0c06,	// (0x00020381) list_single_heading_pane_fp_g3

0x0002,

0xfbc8,	// (0x0002f343) list_single_heading_pane_fp_g_ParamLimits

0xfbc8,	// (0x0002f343) list_single_heading_pane_fp_g

0x0d97,	// (0x00020512) list_single_heading_pane_fp_t1_ParamLimits

0x0d97,	// (0x00020512) list_single_heading_pane_fp_t1

0x0da9,	// (0x00020524) list_single_heading_pane_fp_t2_ParamLimits

0x0da9,	// (0x00020524) list_single_heading_pane_fp_t2

0x0001,

0xfbcf,	// (0x0002f34a) list_single_heading_pane_fp_t_ParamLimits

0xfbcf,	// (0x0002f34a) list_single_heading_pane_fp_t

0x35c2,	// (0x00022d3d) aid_size_cell_fast

0x2d22,	// (0x0002249d) soft_indicator_pane_cp1_t1

0x35ff,	// (0x00022d7a) cell_app_pane_cp2_ParamLimits

0x35ff,	// (0x00022d7a) cell_app_pane_cp2

0x1e5d,	// (0x000215d8) fep_hwr_candidate_drop_down_list_pane

0xd38c,	// (0x0002cb07) fep_hwr_candidate_pane_g3_ParamLimits

0xd38c,	// (0x0002cb07) fep_hwr_candidate_pane_g3

0xd399,	// (0x0002cb14) fep_hwr_candidate_pane_g4_ParamLimits

0xd399,	// (0x0002cb14) fep_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0002f2be) fep_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0002f2be) fep_hwr_candidate_pane_g

0x76af,	// (0x00026e2a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x76af,	// (0x00026e2a) fep_vkb_candidate_drop_down_list_pane

0x7ad7,	// (0x00027252) fep_vkb_candidate_pane_g3

0x7adf,	// (0x0002725a) fep_vkb_candidate_pane_g4

0x0002,

0xfb70,	// (0x0002f2eb) fep_vkb_candidate_pane_g

0x77b5,	// (0x00026f30) cell_hwr_candidate_pane_g1_ParamLimits

0x7af6,	// (0x00027271) cell_hwr_candidate_pane_g3_ParamLimits

0x7af6,	// (0x00027271) cell_hwr_candidate_pane_g3

0x7b17,	// (0x00027292) cell_hwr_candidate_pane_g4_ParamLimits

0x7b17,	// (0x00027292) cell_hwr_candidate_pane_g4

0x0002,

0xfb8a,	// (0x0002f305) cell_hwr_candidate_pane_g_ParamLimits

0xfb8a,	// (0x0002f305) cell_hwr_candidate_pane_g

0x7b38,	// (0x000272b3) cell_vkb_candidate_pane_g3_ParamLimits

0x7b38,	// (0x000272b3) cell_vkb_candidate_pane_g3

0x7b53,	// (0x000272ce) cell_vkb_candidate_pane_g4_ParamLimits

0x7b53,	// (0x000272ce) cell_vkb_candidate_pane_g4

0x7c27,	// (0x000273a2) cell_app_pane_cp2_g1_ParamLimits

0x7c27,	// (0x000273a2) cell_app_pane_cp2_g1

0x7c45,	// (0x000273c0) cell_app_pane_cp2_g2_ParamLimits

0x7c45,	// (0x000273c0) cell_app_pane_cp2_g2

0x0001,

0xfbd4,	// (0x0002f34f) cell_app_pane_cp2_g_ParamLimits

0xfbd4,	// (0x0002f34f) cell_app_pane_cp2_g

0x7c51,	// (0x000273cc) cell_app_pane_cp2_t1_ParamLimits

0x7c51,	// (0x000273cc) cell_app_pane_cp2_t1

0x33ad,	// (0x00022b28) grid_highlight_pane_cp1_ParamLimits

0x33ad,	// (0x00022b28) grid_highlight_pane_cp1

0x20af,	// (0x0002182a) cell_hwr_candidate_pane_cp1_ParamLimits

0x20af,	// (0x0002182a) cell_hwr_candidate_pane_cp1

0x77b5,	// (0x00026f30) fep_hwr_candidate_drop_down_list_pane_g1

0x7c63,	// (0x000273de) fep_hwr_candidate_drop_down_list_pane_g2

0x7c70,	// (0x000273eb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0002f354) fep_hwr_candidate_drop_down_list_pane_g

0x20d3,	// (0x0002184e) fep_hwr_candidate_drop_down_list_scroll_pane

0x20dc,	// (0x00021857) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x20dc,	// (0x00021857) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x20e9,	// (0x00021864) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x20e9,	// (0x00021864) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x20f6,	// (0x00021871) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x20f6,	// (0x00021871) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7b38,	// (0x000272b3) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7b38,	// (0x000272b3) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7b53,	// (0x000272ce) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b53,	// (0x000272ce) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2103,	// (0x0002187e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2103,	// (0x0002187e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x211e,	// (0x00021899) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x211e,	// (0x00021899) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2139,	// (0x000218b4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2139,	// (0x000218b4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe0,	// (0x0002f35b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe0,	// (0x0002f35b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7c7d,	// (0x000273f8) cell_vkb_candidate_pane_cp1_ParamLimits

0x7c7d,	// (0x000273f8) cell_vkb_candidate_pane_cp1

0x77b5,	// (0x00026f30) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x77b5,	// (0x00026f30) fep_vkb_candidate_drop_down_list_pane_g1

0x7c63,	// (0x000273de) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7c63,	// (0x000273de) fep_vkb_candidate_drop_down_list_pane_g2

0x7c70,	// (0x000273eb) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7c70,	// (0x000273eb) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0002f354) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd9,	// (0x0002f354) fep_vkb_candidate_drop_down_list_pane_g

0x7ca3,	// (0x0002741e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7ca3,	// (0x0002741e) fep_vkb_candidate_drop_down_list_scroll_pane

0x7cb0,	// (0x0002742b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7cb0,	// (0x0002742b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7cbd,	// (0x00027438) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7cbd,	// (0x00027438) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7cc9,	// (0x00027444) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7cc9,	// (0x00027444) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7af6,	// (0x00027271) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7af6,	// (0x00027271) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7b17,	// (0x00027292) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b17,	// (0x00027292) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7cd5,	// (0x00027450) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7cd5,	// (0x00027450) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7cf6,	// (0x00027471) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7cf6,	// (0x00027471) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7d17,	// (0x00027492) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d17,	// (0x00027492) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x0002f36c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x0002f36c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbc1e,	// (0x0002b399) title_pane_g1_ParamLimits

0xbc2f,	// (0x0002b3aa) title_pane_g2_ParamLimits

0xf592,	// (0x0002ed0d) title_pane_g_ParamLimits

0x3a0d,	// (0x00023188) aid_call2_pane

0x3a15,	// (0x00023190) aid_call_pane

0x3a1d,	// (0x00023198) popup_clock_analogue_window_g1

0x3a1d,	// (0x00023198) popup_clock_analogue_window_g2

0x15ec,	// (0x00020d67) popup_clock_analogue_window_g3

0x15f5,	// (0x00020d70) popup_clock_analogue_window_g4

0x2a3c,	// (0x000221b7) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0002eeb2) popup_clock_analogue_window_g

0x15fd,	// (0x00020d78) popup_clock_analogue_window_t1

0x160b,	// (0x00020d86) clock_digital_number_pane_ParamLimits

0x160b,	// (0x00020d86) clock_digital_number_pane

0x1617,	// (0x00020d92) clock_digital_number_pane_cp02_ParamLimits

0x1617,	// (0x00020d92) clock_digital_number_pane_cp02

0x1623,	// (0x00020d9e) clock_digital_number_pane_cp03_ParamLimits

0x1623,	// (0x00020d9e) clock_digital_number_pane_cp03

0x162f,	// (0x00020daa) clock_digital_number_pane_cp04_ParamLimits

0x162f,	// (0x00020daa) clock_digital_number_pane_cp04

0x163b,	// (0x00020db6) clock_digital_separator_pane_ParamLimits

0x163b,	// (0x00020db6) clock_digital_separator_pane

0x1647,	// (0x00020dc2) popup_clock_digital_window_t1_ParamLimits

0x1647,	// (0x00020dc2) popup_clock_digital_window_t1

0x2a3c,	// (0x000221b7) clock_digital_number_pane_g1

0x2a3c,	// (0x000221b7) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0002eebd) clock_digital_number_pane_g

0x2a3c,	// (0x000221b7) clock_digital_separator_pane_g1

0x2a3c,	// (0x000221b7) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0002eebd) clock_digital_separator_pane_g

0xd241,	// (0x0002c9bc) aid_fill_nsta_ParamLimits

0xd3a6,	// (0x0002cb21) indicator_nsta_pane_ParamLimits

0x4cb0,	// (0x0002442b) popup_clock_analogue_window

0x4cb0,	// (0x0002442b) popup_clock_digital_window

0x3583,	// (0x00022cfe) grid_indicator_nsta_pane_ParamLimits

0x6f74,	// (0x000266ef) clock_nsta_pane_t2

0x0001,

0xfad0,	// (0x0002f24b) clock_nsta_pane_t

0x15b0,	// (0x00020d2b) aid_size_max_handle

0xbfde,	// (0x0002b759) aid_size_min_handle

0x4017,	// (0x00023792) editor_scroll_pane

0x7d32,	// (0x000274ad) ex_editor_pane

0x352f,	// (0x00022caa) scroll_pane_cp13

0x334c,	// (0x00022ac7) scroll_pane_cp14

0x3a47,	// (0x000231c2) scroll_pane_cp36

0xc94a,	// (0x0002c0c5) list_single_graphic_hl_pane_cp2_ParamLimits

0xc94a,	// (0x0002c0c5) list_single_graphic_hl_pane_cp2

0xdae6,	// (0x0002d261) list_single_graphic_hl_pane_ParamLimits

0xdae6,	// (0x0002d261) list_single_graphic_hl_pane

0x0dbf,	// (0x0002053a) aid_size_min_hl_cp1

0x7d3a,	// (0x000274b5) list_highlight_pane_cp34_ParamLimits

0x7d3a,	// (0x000274b5) list_highlight_pane_cp34

0x7d4b,	// (0x000274c6) list_single_graphic_hl_pane_g1_ParamLimits

0x7d4b,	// (0x000274c6) list_single_graphic_hl_pane_g1

0xb880,	// (0x0002affb) list_single_graphic_hl_pane_g2_ParamLimits

0xb880,	// (0x0002affb) list_single_graphic_hl_pane_g2

0xb880,	// (0x0002affb) list_single_graphic_hl_pane_g3_ParamLimits

0xb880,	// (0x0002affb) list_single_graphic_hl_pane_g3

0xf586,	// (0x0002ed01) list_single_graphic_hl_pane_g4_ParamLimits

0xf586,	// (0x0002ed01) list_single_graphic_hl_pane_g4

0xb88c,	// (0x0002b007) list_single_graphic_hl_pane_g5_ParamLimits

0xb88c,	// (0x0002b007) list_single_graphic_hl_pane_g5

0x0004,

0xfc02,	// (0x0002f37d) list_single_graphic_hl_pane_g_ParamLimits

0xfc02,	// (0x0002f37d) list_single_graphic_hl_pane_g

0xb8a0,	// (0x0002b01b) list_single_graphic_hl_pane_t1_ParamLimits

0xb8a0,	// (0x0002b01b) list_single_graphic_hl_pane_t1

0x7d58,	// (0x000274d3) aid_size_min_hl_cp2

0x7d61,	// (0x000274dc) list_highlight_pane_cp34_cp2_ParamLimits

0x7d61,	// (0x000274dc) list_highlight_pane_cp34_cp2

0x7d4b,	// (0x000274c6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7d4b,	// (0x000274c6) list_single_graphic_hl_pane_g1_cp2

0x7d6e,	// (0x000274e9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7d6e,	// (0x000274e9) list_single_graphic_hl_pane_g2_cp2

0x7d7a,	// (0x000274f5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7d7a,	// (0x000274f5) list_single_graphic_hl_pane_g3_cp2

0x3b3d,	// (0x000232b8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3b3d,	// (0x000232b8) list_single_graphic_hl_pane_g4_cp2

0x7d88,	// (0x00027503) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7d88,	// (0x00027503) list_single_graphic_hl_pane_g5_cp2

0xc010,	// (0x0002b78b) control_pane_g4_ParamLimits

0xc010,	// (0x0002b78b) control_pane_g4

0x439d,	// (0x00023b18) bg_popup_sub_pane_cp10_ParamLimits

0x7527,	// (0x00026ca2) list_choice_list_pane_ParamLimits

0x7536,	// (0x00026cb1) scroll_pane_cp23

0x2db0,	// (0x0002252b) bg_popup_preview_window_pane_cp02_ParamLimits

0x7ba4,	// (0x0002731f) list_preview_fixed_pane_ParamLimits

0x7bba,	// (0x00027335) list_preview_fixed_pane_cp_ParamLimits

0x7bba,	// (0x00027335) list_preview_fixed_pane_cp

0x7bc6,	// (0x00027341) popup_preview_fixed_window_g1_ParamLimits

0x7bc6,	// (0x00027341) popup_preview_fixed_window_g1

0x7bd2,	// (0x0002734d) popup_preview_fixed_window_g2_ParamLimits

0x7bd2,	// (0x0002734d) popup_preview_fixed_window_g2

0x0002,

0xfb91,	// (0x0002f30c) popup_preview_fixed_window_g_ParamLimits

0xfb91,	// (0x0002f30c) popup_preview_fixed_window_g

0x1522,	// (0x00020c9d) aid_navi_side_left_pane_ParamLimits

0x1537,	// (0x00020cb2) aid_navi_side_right_pane_ParamLimits

0x154f,	// (0x00020cca) navi_icon_pane_stacon_ParamLimits

0x1563,	// (0x00020cde) navi_navi_pane_stacon_ParamLimits

0x154f,	// (0x00020cca) navi_text_pane_stacon_ParamLimits

0x2a32,	// (0x000221ad) main_text_info_pane

0x7db2,	// (0x0002752d) listscroll_text_info_pane

0x7dba,	// (0x00027535) list_text_info_pane_ParamLimits

0x7dba,	// (0x00027535) list_text_info_pane

0x7dc9,	// (0x00027544) scroll_pane_cp24_ParamLimits

0x7dc9,	// (0x00027544) scroll_pane_cp24

0xdfb8,	// (0x0002d733) list_text_info_pane_t1_ParamLimits

0xdfb8,	// (0x0002d733) list_text_info_pane_t1

0xcb3e,	// (0x0002c2b9) popup_fast_swap2_window_ParamLimits

0xcb3e,	// (0x0002c2b9) popup_fast_swap2_window

0x7e0c,	// (0x00027587) aid_size_cell_fast2

0x2a32,	// (0x000221ad) bg_popup_window_pane_cp17

0x5363,	// (0x00024ade) heading_pane_cp2

0x3010,	// (0x0002278b) listscroll_fast2_pane

0x7e16,	// (0x00027591) grid_fast2_pane

0x7e20,	// (0x0002759b) listscroll_fast2_pane_g1

0x7e2a,	// (0x000275a5) listscroll_fast2_pane_g2

0x0001,

0xfc0d,	// (0x0002f388) listscroll_fast2_pane_g

0x352f,	// (0x00022caa) scroll_pane_cp26

0x7e34,	// (0x000275af) cell_fast2_pane_ParamLimits

0x7e34,	// (0x000275af) cell_fast2_pane

0x7e4b,	// (0x000275c6) cell_fast2_pane_g1

0x7e54,	// (0x000275cf) cell_fast2_pane_g2

0x7e5d,	// (0x000275d8) cell_fast2_pane_g3

0x0002,

0xfc12,	// (0x0002f38d) cell_fast2_pane_g

0x3109,	// (0x00022884) grid_highlight_pane_cp9

0x311e,	// (0x00022899) main_eswt_pane_ParamLimits

0x311e,	// (0x00022899) main_eswt_pane

0x7dde,	// (0x00027559) list_single_text_info_pane

0x7e65,	// (0x000275e0) eswt_ctrl_button_pane

0x7e65,	// (0x000275e0) eswt_ctrl_canvas_pane

0x7e6d,	// (0x000275e8) eswt_ctrl_combo_pane

0x7e65,	// (0x000275e0) eswt_ctrl_default_pane

0x7e65,	// (0x000275e0) eswt_ctrl_label_pane

0x7e75,	// (0x000275f0) eswt_ctrl_wait_pane

0x7e7d,	// (0x000275f8) eswt_shell_pane

0x2a32,	// (0x000221ad) listscroll_eswt_app_pane

0x7e9d,	// (0x00027618) popup_eswt_tasktip_window_ParamLimits

0x7e9d,	// (0x00027618) popup_eswt_tasktip_window

0x4fcb,	// (0x00024746) bg_popup_window_pane_cp18

0x7eae,	// (0x00027629) eswt_control_pane_g1_ParamLimits

0x7eae,	// (0x00027629) eswt_control_pane_g1

0x7ebb,	// (0x00027636) eswt_control_pane_g2_ParamLimits

0x7ebb,	// (0x00027636) eswt_control_pane_g2

0x7ec8,	// (0x00027643) eswt_control_pane_g3_ParamLimits

0x7ec8,	// (0x00027643) eswt_control_pane_g3

0x7ed5,	// (0x00027650) eswt_control_pane_g4_ParamLimits

0x7ed5,	// (0x00027650) eswt_control_pane_g4

0x0003,

0xfc19,	// (0x0002f394) eswt_control_pane_g_ParamLimits

0xfc19,	// (0x0002f394) eswt_control_pane_g

0x33ad,	// (0x00022b28) bg_button_pane_ParamLimits

0x33ad,	// (0x00022b28) bg_button_pane

0x311e,	// (0x00022899) common_borders_pane_copy2_ParamLimits

0x311e,	// (0x00022899) common_borders_pane_copy2

0x7ee2,	// (0x0002765d) control_button_pane_g1_ParamLimits

0x7ee2,	// (0x0002765d) control_button_pane_g1

0x7eee,	// (0x00027669) control_button_pane_g2_ParamLimits

0x7eee,	// (0x00027669) control_button_pane_g2

0x7efa,	// (0x00027675) control_button_pane_g3_ParamLimits

0x7efa,	// (0x00027675) control_button_pane_g3

0x0002,

0xfc22,	// (0x0002f39d) control_button_pane_g_ParamLimits

0xfc22,	// (0x0002f39d) control_button_pane_g

0x7f0e,	// (0x00027689) control_button_pane_t1

0x7f1c,	// (0x00027697) control_button_pane_t2

0x0001,

0xfc29,	// (0x0002f3a4) control_button_pane_t

0x4ed9,	// (0x00024654) bg_button_pane_g1

0x4ee1,	// (0x0002465c) bg_button_pane_g2

0x4ee9,	// (0x00024664) bg_button_pane_g3

0x4ef1,	// (0x0002466c) bg_button_pane_g4

0x4ef9,	// (0x00024674) bg_button_pane_g5

0x4f01,	// (0x0002467c) bg_button_pane_g6

0x4f09,	// (0x00024684) bg_button_pane_g7

0x4f11,	// (0x0002468c) bg_button_pane_g8

0x4f19,	// (0x00024694) bg_button_pane_g9

0x0008,

0xf895,	// (0x0002f010) bg_button_pane_g

0x74e2,	// (0x00026c5d) common_borders_pane_ParamLimits

0x74e2,	// (0x00026c5d) common_borders_pane

0x7eae,	// (0x00027629) eswt_control_pane_g1_copy1_ParamLimits

0x7eae,	// (0x00027629) eswt_control_pane_g1_copy1

0x7ebb,	// (0x00027636) eswt_control_pane_g2_copy1_ParamLimits

0x7ebb,	// (0x00027636) eswt_control_pane_g2_copy1

0x7ec8,	// (0x00027643) eswt_control_pane_g3_copy1_ParamLimits

0x7ec8,	// (0x00027643) eswt_control_pane_g3_copy1

0x7ed5,	// (0x00027650) eswt_control_pane_g4_copy1_ParamLimits

0x7ed5,	// (0x00027650) eswt_control_pane_g4_copy1

0x751d,	// (0x00026c98) bg_eswt_ctrl_canvas_pane_g1

0x74e2,	// (0x00026c5d) common_borders_pane_cp2_ParamLimits

0x74e2,	// (0x00026c5d) common_borders_pane_cp2

0x74e2,	// (0x00026c5d) common_borders_pane_cp3_ParamLimits

0x74e2,	// (0x00026c5d) common_borders_pane_cp3

0x7f2a,	// (0x000276a5) separator_horizontal_pane

0x7f32,	// (0x000276ad) separator_vertical_pane

0x7eae,	// (0x00027629) eswt_control_pane_g1_copy2_ParamLimits

0x7eae,	// (0x00027629) eswt_control_pane_g1_copy2

0x7ebb,	// (0x00027636) eswt_control_pane_g2_copy2_ParamLimits

0x7ebb,	// (0x00027636) eswt_control_pane_g2_copy2

0x7ec8,	// (0x00027643) eswt_control_pane_g3_copy2_ParamLimits

0x7ec8,	// (0x00027643) eswt_control_pane_g3_copy2

0x7ed5,	// (0x00027650) eswt_control_pane_g4_copy2_ParamLimits

0x7ed5,	// (0x00027650) eswt_control_pane_g4_copy2

0x2a32,	// (0x000221ad) common_borders_pane_cp4

0x7f3b,	// (0x000276b6) separator_horizontal_pane_g1

0x7f44,	// (0x000276bf) separator_horizontal_pane_g2

0x7f4d,	// (0x000276c8) separator_horizontal_pane_g3

0x0002,

0xfc2e,	// (0x0002f3a9) separator_horizontal_pane_g

0x7eae,	// (0x00027629) eswt_control_pane_g1_copy3_ParamLimits

0x7eae,	// (0x00027629) eswt_control_pane_g1_copy3

0x7ebb,	// (0x00027636) eswt_control_pane_g2_copy3_ParamLimits

0x7ebb,	// (0x00027636) eswt_control_pane_g2_copy3

0x7ec8,	// (0x00027643) eswt_control_pane_g3_copy3_ParamLimits

0x7ec8,	// (0x00027643) eswt_control_pane_g3_copy3

0x7ed5,	// (0x00027650) eswt_control_pane_g4_copy3_ParamLimits

0x7ed5,	// (0x00027650) eswt_control_pane_g4_copy3

0x2a32,	// (0x000221ad) common_borders_pane_cp5

0x7f56,	// (0x000276d1) separator_vertical_pane_g1

0x7f5f,	// (0x000276da) separator_vertical_pane_g2

0x7f68,	// (0x000276e3) separator_vertical_pane_g3

0x0002,

0xfc35,	// (0x0002f3b0) separator_vertical_pane_g

0x7eae,	// (0x00027629) eswt_control_pane_g1_copy4_ParamLimits

0x7eae,	// (0x00027629) eswt_control_pane_g1_copy4

0x7ebb,	// (0x00027636) eswt_control_pane_g2_copy4_ParamLimits

0x7ebb,	// (0x00027636) eswt_control_pane_g2_copy4

0x7ec8,	// (0x00027643) eswt_control_pane_g3_copy4_ParamLimits

0x7ec8,	// (0x00027643) eswt_control_pane_g3_copy4

0x7ed5,	// (0x00027650) eswt_control_pane_g4_copy4_ParamLimits

0x7ed5,	// (0x00027650) eswt_control_pane_g4_copy4

0xdfda,	// (0x0002d755) eswt_ctrl_combo_button_pane

0xdfe2,	// (0x0002d75d) eswt_ctrl_input_pane

0xdfea,	// (0x0002d765) popup_choice_list_window_cp70

0xdff2,	// (0x0002d76d) eswt_ctrl_input_pane_t1

0x2a32,	// (0x000221ad) input_focus_pane_cp70

0x74e2,	// (0x00026c5d) bg_button_pane_cp70_ParamLimits

0x74e2,	// (0x00026c5d) bg_button_pane_cp70

0xe000,	// (0x0002d77b) eswt_ctrl_combo_button_pane_g1

0x7f9f,	// (0x0002771a) wait_bar_pane_cp70

0x4fcb,	// (0x00024746) bg_popup_window_pane_cp70_ParamLimits

0x4fcb,	// (0x00024746) bg_popup_window_pane_cp70

0x7fa7,	// (0x00027722) popup_eswt_tasktip_window_t1

0x7fbd,	// (0x00027738) wait_bar_pane_cp71_ParamLimits

0x7fbd,	// (0x00027738) wait_bar_pane_cp71

0x7fc9,	// (0x00027744) grid_eswt_app_pane

0x385a,	// (0x00022fd5) scroll_pane_cp70

0xe008,	// (0x0002d783) cell_eswt_app_pane_ParamLimits

0xe008,	// (0x0002d783) cell_eswt_app_pane

0xe03a,	// (0x0002d7b5) cell_eswt_app_pane_g1_ParamLimits

0xe03a,	// (0x0002d7b5) cell_eswt_app_pane_g1

0xe069,	// (0x0002d7e4) cell_eswt_app_pane_g2_ParamLimits

0xe069,	// (0x0002d7e4) cell_eswt_app_pane_g2

0x0001,

0xfc3c,	// (0x0002f3b7) cell_eswt_app_pane_g_ParamLimits

0xfc3c,	// (0x0002f3b7) cell_eswt_app_pane_g

0xe092,	// (0x0002d80d) cell_eswt_app_pane_t1_ParamLimits

0xe092,	// (0x0002d80d) cell_eswt_app_pane_t1

0x808e,	// (0x00027809) grid_highlight_pane_cp70_ParamLimits

0x808e,	// (0x00027809) grid_highlight_pane_cp70

0x642b,	// (0x00025ba6) set_content_pane_g1

0x42c7,	// (0x00023a42) status_small_volume_pane

0x2154,	// (0x000218cf) status_small_volume_pane_g1

0x215c,	// (0x000218d7) volume_small2_pane

0x2165,	// (0x000218e0) volume_small2_pane_g1

0x216e,	// (0x000218e9) volume_small2_pane_g2

0x2177,	// (0x000218f2) volume_small2_pane_g3

0x2180,	// (0x000218fb) volume_small2_pane_g4

0x2189,	// (0x00021904) volume_small2_pane_g5

0x2192,	// (0x0002190d) volume_small2_pane_g6

0x219b,	// (0x00021916) volume_small2_pane_g7

0x21a4,	// (0x0002191f) volume_small2_pane_g8

0x21ad,	// (0x00021928) volume_small2_pane_g9

0x21b6,	// (0x00021931) volume_small2_pane_g10

0x0009,

0xfc41,	// (0x0002f3bc) volume_small2_pane_g

0x7909,	// (0x00027084) fep_vkb_top_text_pane_g1_ParamLimits

0xdf60,	// (0x0002d6db) fep_vkb_top_text_pane_t1_ParamLimits

0x7bde,	// (0x00027359) popup_preview_fixed_window_g3_ParamLimits

0x7bde,	// (0x00027359) popup_preview_fixed_window_g3

0xd1d4,	// (0x0002c94f) popup_toolbar_trans_pane

0xd94b,	// (0x0002d0c6) aid_height_set_list_ParamLimits

0x62e1,	// (0x00025a5c) aid_size_parent_ParamLimits

0x439d,	// (0x00023b18) list_highlight_pane_cp2_ParamLimits

0x642b,	// (0x00025ba6) set_content_pane_g1_ParamLimits

0xb86c,	// (0x0002afe7) list_single_image_pane_ParamLimits

0xb86c,	// (0x0002afe7) list_single_image_pane

0xe0c4,	// (0x0002d83f) aid_size_cell_image_ParamLimits

0xe0c4,	// (0x0002d83f) aid_size_cell_image

0xe0d1,	// (0x0002d84c) grid_single_image_pane_ParamLimits

0xe0d1,	// (0x0002d84c) grid_single_image_pane

0x33c7,	// (0x00022b42) list_single_image_pane_g1_ParamLimits

0x33c7,	// (0x00022b42) list_single_image_pane_g1

0x33d3,	// (0x00022b4e) list_single_image_pane_g2_ParamLimits

0x33d3,	// (0x00022b4e) list_single_image_pane_g2

0x0001,

0xfc56,	// (0x0002f3d1) list_single_image_pane_g_ParamLimits

0xfc56,	// (0x0002f3d1) list_single_image_pane_g

0x80b5,	// (0x00027830) list_single_image_pane_t1_ParamLimits

0x80b5,	// (0x00027830) list_single_image_pane_t1

0xe0df,	// (0x0002d85a) cell_image_list_pane_ParamLimits

0xe0df,	// (0x0002d85a) cell_image_list_pane

0xe0f9,	// (0x0002d874) cell_image_list_pane_g1

0xe102,	// (0x0002d87d) cell_image_list_pane_g2

0x0001,

0xfc5b,	// (0x0002f3d6) cell_image_list_pane_g

0x80f3,	// (0x0002786e) aid_size_cell_tb_trans_pane

0x33ad,	// (0x00022b28) bg_tb_trans_pane

0x8105,	// (0x00027880) grid_tb_trans_pane

0x4ed9,	// (0x00024654) bg_tb_trans_pane_g1

0x4ee1,	// (0x0002465c) bg_tb_trans_pane_g2

0x4ee9,	// (0x00024664) bg_tb_trans_pane_g3

0x4ef1,	// (0x0002466c) bg_tb_trans_pane_g4

0x4ef9,	// (0x00024674) bg_tb_trans_pane_g5

0x4f11,	// (0x0002468c) bg_tb_trans_pane_g6

0x4f19,	// (0x00024694) bg_tb_trans_pane_g7

0x4f01,	// (0x0002467c) bg_tb_trans_pane_g8

0x4f09,	// (0x00024684) bg_tb_trans_pane_g9

0x0008,

0xfc60,	// (0x0002f3db) bg_tb_trans_pane_g

0x8119,	// (0x00027894) cell_toolbar_trans_pane_ParamLimits

0x8119,	// (0x00027894) cell_toolbar_trans_pane

0x751d,	// (0x00026c98) cell_toolbar_trans_pane_g1

0xdd30,	// (0x0002d4ab) list_form2_midp_pane_t1

0xdd3e,	// (0x0002d4b9) list_form2_midp_pane_t2

0x0001,

0xfb09,	// (0x0002f284) list_form2_midp_pane_t

0x715a,	// (0x000268d5) scroll_pane_cp51_ParamLimits

0x7321,	// (0x00026a9c) form2_midp_wait_pane_g1

0x732a,	// (0x00026aa5) form2_midp_wait_pane_g2

0x7333,	// (0x00026aae) form2_midp_wait_pane_g3

0x0002,

0xfb1e,	// (0x0002f299) form2_midp_wait_pane_g

0x2b26,	// (0x000222a1) list_highlight_pane_cp21_ParamLimits

0x7377,	// (0x00026af2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7386,	// (0x00026b01) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x092f,	// (0x000200aa) list_single_2graphic_im_pane_ParamLimits

0x092f,	// (0x000200aa) list_single_2graphic_im_pane

0xe10b,	// (0x0002d886) list_single_2graphic_im_pane_g1_ParamLimits

0xe10b,	// (0x0002d886) list_single_2graphic_im_pane_g1

0xe11c,	// (0x0002d897) list_single_2graphic_im_pane_g2_ParamLimits

0xe11c,	// (0x0002d897) list_single_2graphic_im_pane_g2

0xe128,	// (0x0002d8a3) list_single_2graphic_im_pane_g3_ParamLimits

0xe128,	// (0x0002d8a3) list_single_2graphic_im_pane_g3

0x0003,

0xfc73,	// (0x0002f3ee) list_single_2graphic_im_pane_g_ParamLimits

0xfc73,	// (0x0002f3ee) list_single_2graphic_im_pane_g

0xe13c,	// (0x0002d8b7) list_single_2graphic_im_pane_t1_ParamLimits

0xe13c,	// (0x0002d8b7) list_single_2graphic_im_pane_t1

0x7bea,	// (0x00027365) list_single_graphic_2heading_pane_fp_ParamLimits

0x7bea,	// (0x00027365) list_single_graphic_2heading_pane_fp

0x0c31,	// (0x000203ac) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0c31,	// (0x000203ac) list_single_graphic_2heading_pane_fp_g1

0x7c03,	// (0x0002737e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7c03,	// (0x0002737e) list_single_graphic_2heading_pane_fp_g2

0x0bfa,	// (0x00020375) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0bfa,	// (0x00020375) list_single_graphic_2heading_pane_fp_g3

0x0c06,	// (0x00020381) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0c06,	// (0x00020381) list_single_graphic_2heading_pane_fp_g4

0x7c0f,	// (0x0002738a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7c0f,	// (0x0002738a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba1,	// (0x0002f31c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0002f31c) list_single_graphic_2heading_pane_fp_g

0x0dfe,	// (0x00020579) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0dfe,	// (0x00020579) list_single_graphic_2heading_pane_fp_t1

0x0c69,	// (0x000203e4) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0c69,	// (0x000203e4) list_single_graphic_2heading_pane_fp_t2

0x0e14,	// (0x0002058f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0e14,	// (0x0002058f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7c,	// (0x0002f3f7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7c,	// (0x0002f3f7) list_single_graphic_2heading_pane_fp_t

0x75cb,	// (0x00026d46) fep_hwr_write_pane_g5_ParamLimits

0x75cb,	// (0x00026d46) fep_hwr_write_pane_g5

0x75d7,	// (0x00026d52) fep_hwr_write_pane_g6_ParamLimits

0x75d7,	// (0x00026d52) fep_hwr_write_pane_g6

0x7e7d,	// (0x000275f8) eswt_shell_pane_ParamLimits

0x4fcb,	// (0x00024746) bg_popup_window_pane_cp18_ParamLimits

0x6227,	// (0x000259a2) heading_pane_cp70

0x7fa7,	// (0x00027722) popup_eswt_tasktip_window_t1_ParamLimits

0xd297,	// (0x0002ca12) aid_touch_tab_arrow_left

0xd2ad,	// (0x0002ca28) aid_touch_tab_arrow_right

0xbc47,	// (0x0002b3c2) title_pane_g3_ParamLimits

0xbc47,	// (0x0002b3c2) title_pane_g3

0x336c,	// (0x00022ae7) set_value_pane_g1

0xd1d4,	// (0x0002c94f) popup_toolbar_trans_pane_ParamLimits

0x80f3,	// (0x0002786e) aid_size_cell_tb_trans_pane_ParamLimits

0x33ad,	// (0x00022b28) bg_tb_trans_pane_ParamLimits

0x8105,	// (0x00027880) grid_tb_trans_pane_ParamLimits

0x2db0,	// (0x0002252b) cont_note_pane_ParamLimits

0x2db0,	// (0x0002252b) cont_note_pane

0x311e,	// (0x00022899) cont_snote2_single_text_pane_ParamLimits

0x311e,	// (0x00022899) cont_snote2_single_text_pane

0x311e,	// (0x00022899) cont_snote2_single_graphic_pane_ParamLimits

0x311e,	// (0x00022899) cont_snote2_single_graphic_pane

0x554e,	// (0x00024cc9) cont_note_wait_pane_ParamLimits

0x554e,	// (0x00024cc9) cont_note_wait_pane

0x554e,	// (0x00024cc9) cont_note_image_pane_ParamLimits

0x554e,	// (0x00024cc9) cont_note_image_pane

0x81ad,	// (0x00027928) popup_note2_window_g1_ParamLimits

0x81ad,	// (0x00027928) popup_note2_window_g1

0x81de,	// (0x00027959) popup_note2_window_t1_ParamLimits

0x81de,	// (0x00027959) popup_note2_window_t1

0x8223,	// (0x0002799e) popup_note2_window_t2_ParamLimits

0x8223,	// (0x0002799e) popup_note2_window_t2

0x8268,	// (0x000279e3) popup_note2_window_t3_ParamLimits

0x8268,	// (0x000279e3) popup_note2_window_t3

0x82ad,	// (0x00027a28) popup_note2_window_t4_ParamLimits

0x82ad,	// (0x00027a28) popup_note2_window_t4

0x2e34,	// (0x000225af) popup_note2_window_t5_ParamLimits

0x2e34,	// (0x000225af) popup_note2_window_t5

0x0004,

0xfc88,	// (0x0002f403) popup_note2_window_t_ParamLimits

0xfc88,	// (0x0002f403) popup_note2_window_t

0x82dc,	// (0x00027a57) popup_note2_image_window_g1_ParamLimits

0x82dc,	// (0x00027a57) popup_note2_image_window_g1

0x82e8,	// (0x00027a63) popup_note2_image_window_g2_ParamLimits

0x82e8,	// (0x00027a63) popup_note2_image_window_g2

0x0001,

0xfc93,	// (0x0002f40e) popup_note2_image_window_g_ParamLimits

0xfc93,	// (0x0002f40e) popup_note2_image_window_g

0x82fa,	// (0x00027a75) popup_note2_image_window_t1_ParamLimits

0x82fa,	// (0x00027a75) popup_note2_image_window_t1

0x8312,	// (0x00027a8d) popup_note2_image_window_t2_ParamLimits

0x8312,	// (0x00027a8d) popup_note2_image_window_t2

0x832a,	// (0x00027aa5) popup_note2_image_window_t3_ParamLimits

0x832a,	// (0x00027aa5) popup_note2_image_window_t3

0x0002,

0xfc98,	// (0x0002f413) popup_note2_image_window_t_ParamLimits

0xfc98,	// (0x0002f413) popup_note2_image_window_t

0x555c,	// (0x00024cd7) popup_note2_wait_window_g1_ParamLimits

0x555c,	// (0x00024cd7) popup_note2_wait_window_g1

0x8346,	// (0x00027ac1) popup_note2_wait_window_g2_ParamLimits

0x8346,	// (0x00027ac1) popup_note2_wait_window_g2

0x5574,	// (0x00024cef) popup_note2_wait_window_g3_ParamLimits

0x5574,	// (0x00024cef) popup_note2_wait_window_g3

0x0002,

0xfc9f,	// (0x0002f41a) popup_note2_wait_window_g_ParamLimits

0xfc9f,	// (0x0002f41a) popup_note2_wait_window_g

0x8352,	// (0x00027acd) popup_note2_wait_window_t1_ParamLimits

0x8352,	// (0x00027acd) popup_note2_wait_window_t1

0x8370,	// (0x00027aeb) popup_note2_wait_window_t2_ParamLimits

0x8370,	// (0x00027aeb) popup_note2_wait_window_t2

0x838e,	// (0x00027b09) popup_note2_wait_window_t3_ParamLimits

0x838e,	// (0x00027b09) popup_note2_wait_window_t3

0x83a0,	// (0x00027b1b) popup_note2_wait_window_t4_ParamLimits

0x83a0,	// (0x00027b1b) popup_note2_wait_window_t4

0x0003,

0xfca6,	// (0x0002f421) popup_note2_wait_window_t_ParamLimits

0xfca6,	// (0x0002f421) popup_note2_wait_window_t

0x83b2,	// (0x00027b2d) wait_bar2_pane_ParamLimits

0x83b2,	// (0x00027b2d) wait_bar2_pane

0x83ca,	// (0x00027b45) popup_snote2_single_text_window_g1_ParamLimits

0x83ca,	// (0x00027b45) popup_snote2_single_text_window_g1

0x83f2,	// (0x00027b6d) popup_snote2_single_text_window_t1_ParamLimits

0x83f2,	// (0x00027b6d) popup_snote2_single_text_window_t1

0x843e,	// (0x00027bb9) popup_snote2_single_text_window_t2_ParamLimits

0x843e,	// (0x00027bb9) popup_snote2_single_text_window_t2

0x848a,	// (0x00027c05) popup_snote2_single_text_window_t3_ParamLimits

0x848a,	// (0x00027c05) popup_snote2_single_text_window_t3

0x84cb,	// (0x00027c46) popup_snote2_single_text_window_t4_ParamLimits

0x84cb,	// (0x00027c46) popup_snote2_single_text_window_t4

0x8501,	// (0x00027c7c) popup_snote2_single_text_window_t5_ParamLimits

0x8501,	// (0x00027c7c) popup_snote2_single_text_window_t5

0x0004,

0xfcaf,	// (0x0002f42a) popup_snote2_single_text_window_t_ParamLimits

0xfcaf,	// (0x0002f42a) popup_snote2_single_text_window_t

0x852c,	// (0x00027ca7) popup_snote2_single_graphic_window_g1_ParamLimits

0x852c,	// (0x00027ca7) popup_snote2_single_graphic_window_g1

0x8554,	// (0x00027ccf) popup_snote2_single_graphic_window_g2_ParamLimits

0x8554,	// (0x00027ccf) popup_snote2_single_graphic_window_g2

0x0001,

0xfcba,	// (0x0002f435) popup_snote2_single_graphic_window_g_ParamLimits

0xfcba,	// (0x0002f435) popup_snote2_single_graphic_window_g

0x857c,	// (0x00027cf7) popup_snote2_single_graphic_window_t1_ParamLimits

0x857c,	// (0x00027cf7) popup_snote2_single_graphic_window_t1

0x85c8,	// (0x00027d43) popup_snote2_single_graphic_window_t2_ParamLimits

0x85c8,	// (0x00027d43) popup_snote2_single_graphic_window_t2

0x848a,	// (0x00027c05) popup_snote2_single_graphic_window_t3_ParamLimits

0x848a,	// (0x00027c05) popup_snote2_single_graphic_window_t3

0x84cb,	// (0x00027c46) popup_snote2_single_graphic_window_t4_ParamLimits

0x84cb,	// (0x00027c46) popup_snote2_single_graphic_window_t4

0x8501,	// (0x00027c7c) popup_snote2_single_graphic_window_t5_ParamLimits

0x8501,	// (0x00027c7c) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbf,	// (0x0002f43a) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbf,	// (0x0002f43a) popup_snote2_single_graphic_window_t

0x7004,	// (0x0002677f) clock_nsta_pane_cp2_t1

0x7004,	// (0x0002677f) clock_nsta_pane_cp2_t2

0x0001,

0xfadf,	// (0x0002f25a) clock_nsta_pane_cp2_t

0x0594,	// (0x0001fd0f) form_field_data_wide_pane_g1_ParamLimits

0x33c7,	// (0x00022b42) form_field_data_wide_pane_g2_ParamLimits

0x33c7,	// (0x00022b42) form_field_data_wide_pane_g2

0x33d3,	// (0x00022b4e) form_field_data_wide_pane_g3_ParamLimits

0x33d3,	// (0x00022b4e) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0002ee35) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0002ee35) form_field_data_wide_pane_g

0xdc38,	// (0x0002d3b3) grid_touch_3_pane_ParamLimits

0xdc38,	// (0x0002d3b3) grid_touch_3_pane

0xe16d,	// (0x0002d8e8) cell_touch_3_pane_ParamLimits

0xe16d,	// (0x0002d8e8) cell_touch_3_pane

0x751d,	// (0x00026c98) cell_touch_3_pane_g1

0x751d,	// (0x00026c98) cell_touch_3_pane_g2

0x0001,

0xfb64,	// (0x0002f2df) cell_touch_3_pane_g

0x2e66,	// (0x000225e1) cont_query_data_pane

0x2e6e,	// (0x000225e9) cont_query_data_pane_cp1

0x8647,	// (0x00027dc2) button_value_adjust_pane_cp7

0x864f,	// (0x00027dca) query_popup_pane_cp3

0x3ae7,	// (0x00023262) bg_popup_sub_pane_cp22_ParamLimits

0x1666,	// (0x00020de1) navi_navi_volume_pane_cp2

0x1681,	// (0x00020dfc) popup_side_volume_key_window_g2

0x1690,	// (0x00020e0b) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0002eec7) popup_side_volume_key_window_g

0x16ad,	// (0x00020e28) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0002eece) popup_side_volume_key_window_t

0x3dae,	// (0x00023529) popup_side_volume_key_window_ParamLimits

0xb32b,	// (0x0002aaa6) list_double_graphic_pane_g4_ParamLimits

0xb32b,	// (0x0002aaa6) list_double_graphic_pane_g4

0xb856,	// (0x0002afd1) list_single_2heading_msg_pane_ParamLimits

0xb856,	// (0x0002afd1) list_single_2heading_msg_pane

0xb8b6,	// (0x0002b031) list_single_2heading_msg_pane_g1_ParamLimits

0xb8b6,	// (0x0002b031) list_single_2heading_msg_pane_g1

0xb8c2,	// (0x0002b03d) list_single_2heading_msg_pane_g2_ParamLimits

0xb8c2,	// (0x0002b03d) list_single_2heading_msg_pane_g2

0xb8d5,	// (0x0002b050) list_single_2heading_msg_pane_g3_ParamLimits

0xb8d5,	// (0x0002b050) list_single_2heading_msg_pane_g3

0xb8e1,	// (0x0002b05c) list_single_2heading_msg_pane_g4_ParamLimits

0xb8e1,	// (0x0002b05c) list_single_2heading_msg_pane_g4

0x0003,

0xfcca,	// (0x0002f445) list_single_2heading_msg_pane_g_ParamLimits

0xfcca,	// (0x0002f445) list_single_2heading_msg_pane_g

0xb8f9,	// (0x0002b074) list_single_2heading_msg_pane_t1_ParamLimits

0xb8f9,	// (0x0002b074) list_single_2heading_msg_pane_t1

0xb921,	// (0x0002b09c) list_single_2heading_msg_pane_t2_ParamLimits

0xb921,	// (0x0002b09c) list_single_2heading_msg_pane_t2

0xb98c,	// (0x0002b107) list_single_2heading_msg_pane_t3_ParamLimits

0xb98c,	// (0x0002b107) list_single_2heading_msg_pane_t3

0x0ef9,	// (0x00020674) list_single_2heading_msg_pane_t4_ParamLimits

0x0ef9,	// (0x00020674) list_single_2heading_msg_pane_t4

0x0003,

0xfcd3,	// (0x0002f44e) list_single_2heading_msg_pane_t_ParamLimits

0xfcd3,	// (0x0002f44e) list_single_2heading_msg_pane_t

0x2a7a,	// (0x000221f5) title_pane_g4_ParamLimits

0x2a7a,	// (0x000221f5) title_pane_g4

0x1472,	// (0x00020bed) title_pane_stacon_g3_ParamLimits

0x1472,	// (0x00020bed) title_pane_stacon_g3

0x8170,	// (0x000278eb) list_single_2graphic_im_pane_g4_ParamLimits

0x8170,	// (0x000278eb) list_single_2graphic_im_pane_g4

0x5fc4,	// (0x0002573f) popup_side_volume_key_window_cp

0x683a,	// (0x00025fb5) main_idle_act2_pane_t1

0x1a30,	// (0x000211ab) toolbar_button_pane_g10

0xbfd4,	// (0x0002b74f) popup_toolbar_window_cp1

0x6ff5,	// (0x00026770) clock_nsta_pane_cp_t1

0x6ff5,	// (0x00026770) clock_nsta_pane_cp_t2

0x0001,

0xfada,	// (0x0002f255) clock_nsta_pane_cp_t

0x1666,	// (0x00020de1) navi_navi_volume_pane_cp2_ParamLimits

0x1675,	// (0x00020df0) popup_side_volume_key_window_g1_ParamLimits

0x1681,	// (0x00020dfc) popup_side_volume_key_window_g2_ParamLimits

0x1690,	// (0x00020e0b) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0002eec7) popup_side_volume_key_window_g_ParamLimits

0x1e49,	// (0x000215c4) fep_hwr_aid_pane

0xd37e,	// (0x0002caf9) bg_fep_hwr_top_pane_g4_ParamLimits

0x759b,	// (0x00026d16) fep_hwr_top_pane_g1_ParamLimits

0x75ad,	// (0x00026d28) fep_hwr_top_pane_g2_ParamLimits

0x1f04,	// (0x0002167f) fep_hwr_top_pane_g3_ParamLimits

0xfb2f,	// (0x0002f2aa) fep_hwr_top_pane_g_ParamLimits

0x1f19,	// (0x00021694) fep_hwr_top_text_pane_ParamLimits

0x5d79,	// (0x000254f4) aid_touch_tab_arrow_arrow_2

0x5d82,	// (0x000254fd) aid_touch_tab_arrow_left_2

0x1e5d,	// (0x000215d8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1e94,	// (0x0002160f) fep_hwr_prediction_pane

0x7703,	// (0x00026e7e) fep_vkb_prediction_pane

0xdf40,	// (0x0002d6bb) fep_vkb_side_pane_g3_ParamLimits

0xdf40,	// (0x0002d6bb) fep_vkb_side_pane_g3

0x77b5,	// (0x00026f30) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7c63,	// (0x000273de) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7c70,	// (0x000273eb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd9,	// (0x0002f354) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8676,	// (0x00027df1) fep_hwr_prediction_pane_g1

0x21bf,	// (0x0002193a) fep_hwr_prediction_pane_g2

0x21c7,	// (0x00021942) fep_hwr_prediction_pane_g3

0x21cf,	// (0x0002194a) fep_hwr_prediction_pane_g4

0x0003,

0xfcdc,	// (0x0002f457) fep_hwr_prediction_pane_g

0x8676,	// (0x00027df1) fep_vkb_prediction_pane_g1

0x8680,	// (0x00027dfb) fep_vkb_prediction_pane_g2

0x8688,	// (0x00027e03) fep_vkb_prediction_pane_g3

0x8690,	// (0x00027e0b) fep_vkb_prediction_pane_g4

0x0003,

0xfce5,	// (0x0002f460) fep_vkb_prediction_pane_g

0x6b6b,	// (0x000262e6) slider_set_pane_g3

0x6b7f,	// (0x000262fa) slider_set_pane_g4

0x6b97,	// (0x00026312) slider_set_pane_g5

0x6b6b,	// (0x000262e6) slider_set_pane_g6

0x1d19,	// (0x00021494) slider_set_pane_g7

0x6472,	// (0x00025bed) slider_form_pane_g3

0x647b,	// (0x00025bf6) slider_form_pane_g4

0x6483,	// (0x00025bfe) slider_form_pane_g5

0x6472,	// (0x00025bed) slider_form_pane_g6

0xdaba,	// (0x0002d235) slider_form_pane_g7

0x6b08,	// (0x00026283) slider_set_pane_vc_g3

0x6b11,	// (0x0002628c) slider_set_pane_vc_g4

0x6b1a,	// (0x00026295) slider_set_pane_vc_g5

0x6b08,	// (0x00026283) slider_set_pane_vc_g6

0x6b23,	// (0x0002629e) slider_set_pane_vc_g7

0x6b08,	// (0x00026283) slider_form_pane_vc_g1

0x6b11,	// (0x0002628c) slider_form_pane_vc_g2

0x6b1a,	// (0x00026295) slider_form_pane_vc_g3

0x6b08,	// (0x00026283) slider_form_pane_vc_g4

0x6d1a,	// (0x00026495) slider_form_pane_vc_g5

0x0004,

0xfac0,	// (0x0002f23b) slider_form_pane_vc_g

0x2a32,	// (0x000221ad) main_idle_act3_pane

0x8698,	// (0x00027e13) ai3_links_pane

0xe1b7,	// (0x0002d932) popup_ai3_data_window_ParamLimits

0xe1b7,	// (0x0002d932) popup_ai3_data_window

0x2a32,	// (0x000221ad) grid_ai3_links_pane

0xe1d5,	// (0x0002d950) cell_ai3_links_pane_ParamLimits

0xe1d5,	// (0x0002d950) cell_ai3_links_pane

0x86d9,	// (0x00027e54) bg_popup_sub_pane_cp11

0x86e6,	// (0x00027e61) cell_ai3_links_pane_g1

0x2a32,	// (0x000221ad) bg_popup_sub_pane_cp12

0x870b,	// (0x00027e86) heading_ai3_data_pane

0x8713,	// (0x00027e8e) list_ai3_gene_pane

0x871f,	// (0x00027e9a) popup_ai3_data_window_g1

0x8727,	// (0x00027ea2) heading_ai3_data_pane_g1

0x872f,	// (0x00027eaa) heading_ai3_data_pane_t1

0x873d,	// (0x00027eb8) list_double_ai3_gene_pane_ParamLimits

0x873d,	// (0x00027eb8) list_double_ai3_gene_pane

0x874a,	// (0x00027ec5) list_single_ai3_gene_pane_ParamLimits

0x874a,	// (0x00027ec5) list_single_ai3_gene_pane

0x74e2,	// (0x00026c5d) list_highlight_pane_cp7_ParamLimits

0x74e2,	// (0x00026c5d) list_highlight_pane_cp7

0x8757,	// (0x00027ed2) list_single_a13_gene_pane_t1_ParamLimits

0x8757,	// (0x00027ed2) list_single_a13_gene_pane_t1

0x876e,	// (0x00027ee9) list_single_ai3_gene_pane_g1

0x8777,	// (0x00027ef2) list_single_ai3_gene_pane_g2

0x0001,

0xfcee,	// (0x0002f469) list_single_ai3_gene_pane_g

0x877f,	// (0x00027efa) list_double_ai3_gene_pane_g1_ParamLimits

0x877f,	// (0x00027efa) list_double_ai3_gene_pane_g1

0x878b,	// (0x00027f06) list_double_ai3_gene_pane_t1_ParamLimits

0x878b,	// (0x00027f06) list_double_ai3_gene_pane_t1

0x87a7,	// (0x00027f22) list_double_ai3_gene_pane_t2_ParamLimits

0x87a7,	// (0x00027f22) list_double_ai3_gene_pane_t2

0x87bc,	// (0x00027f37) list_double_ai3_gene_pane_t3_ParamLimits

0x87bc,	// (0x00027f37) list_double_ai3_gene_pane_t3

0x0002,

0xfcf3,	// (0x0002f46e) list_double_ai3_gene_pane_t_ParamLimits

0xfcf3,	// (0x0002f46e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0e2a,	// (0x000205a5) aid_size_min_col_2

0xe1a1,	// (0x0002d91c) aid_size_min_msg_ParamLimits

0xe1a1,	// (0x0002d91c) aid_size_min_msg

0xdf54,	// (0x0002d6cf) fep_vkb_top_text_pane_g2_ParamLimits

0xdf54,	// (0x0002d6cf) fep_vkb_top_text_pane_g2

0x0001,

0xfb5f,	// (0x0002f2da) fep_vkb_top_text_pane_g_ParamLimits

0xfb5f,	// (0x0002f2da) fep_vkb_top_text_pane_g

0x2a32,	// (0x000221ad) main_hc_apps_shell_pane

0x87d9,	// (0x00027f54) grid_hc_apps_pane_ParamLimits

0x87d9,	// (0x00027f54) grid_hc_apps_pane

0x87e8,	// (0x00027f63) list_hc_apps_pane

0x87f0,	// (0x00027f6b) scroll_pane_cp37_ParamLimits

0x87f0,	// (0x00027f6b) scroll_pane_cp37

0xe1ef,	// (0x0002d96a) cell_hc_apps_pane_ParamLimits

0xe1ef,	// (0x0002d96a) cell_hc_apps_pane

0xe2b9,	// (0x0002da34) cell_hc_apps_pane_g1_ParamLimits

0xe2b9,	// (0x0002da34) cell_hc_apps_pane_g1

0x88e5,	// (0x00028060) cell_hc_apps_pane_g2_ParamLimits

0x88e5,	// (0x00028060) cell_hc_apps_pane_g2

0x8901,	// (0x0002807c) cell_hc_apps_pane_g3_ParamLimits

0x8901,	// (0x0002807c) cell_hc_apps_pane_g3

0x0002,

0xfcfa,	// (0x0002f475) cell_hc_apps_pane_g_ParamLimits

0xfcfa,	// (0x0002f475) cell_hc_apps_pane_g

0xe2e6,	// (0x0002da61) cell_hc_apps_pane_t1_ParamLimits

0xe2e6,	// (0x0002da61) cell_hc_apps_pane_t1

0x2db0,	// (0x0002252b) grid_highlight_pane_cp10_ParamLimits

0x2db0,	// (0x0002252b) grid_highlight_pane_cp10

0xe326,	// (0x0002daa1) list_single_hc_apps_pane_ParamLimits

0xe326,	// (0x0002daa1) list_single_hc_apps_pane

0xe360,	// (0x0002dadb) list_single_hc_apps_pane_g1

0xb9fa,	// (0x0002b175) list_single_hc_apps_pane_g2

0x0001,

0xfd01,	// (0x0002f47c) list_single_hc_apps_pane_g

0xba13,	// (0x0002b18e) list_single_hc_apps_pane_g2_copy1

0xba2f,	// (0x0002b1aa) list_single_hc_apps_pane_t1

0x2b26,	// (0x000222a1) bg_set_opt_pane_cp_ParamLimits

0x139c,	// (0x00020b17) setting_slider_pane_t1_ParamLimits

0x13b2,	// (0x00020b2d) setting_slider_pane_t2_ParamLimits

0x13cc,	// (0x00020b47) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002ed1d) setting_slider_pane_t_ParamLimits

0x13e4,	// (0x00020b5f) slider_set_pane_ParamLimits

0x190c,	// (0x00021087) control_pane_g5_ParamLimits

0x190c,	// (0x00021087) control_pane_g5

0x6293,	// (0x00025a0e) slider_set_pane_g1_ParamLimits

0x1d0d,	// (0x00021488) slider_set_pane_g2_ParamLimits

0x6b6b,	// (0x000262e6) slider_set_pane_g3_ParamLimits

0x6b7f,	// (0x000262fa) slider_set_pane_g4_ParamLimits

0x6b97,	// (0x00026312) slider_set_pane_g5_ParamLimits

0x6b6b,	// (0x000262e6) slider_set_pane_g6_ParamLimits

0x1d19,	// (0x00021494) slider_set_pane_g7_ParamLimits

0xf993,	// (0x0002f10e) slider_set_pane_g_ParamLimits

0x3e93,	// (0x0002360e) navi_icon_text_pane_ParamLimits

0xd261,	// (0x0002c9dc) aid_fill_nsta_2_ParamLimits

0xd297,	// (0x0002ca12) aid_touch_tab_arrow_left_ParamLimits

0xd2ad,	// (0x0002ca28) aid_touch_tab_arrow_right_ParamLimits

0xd348,	// (0x0002cac3) clock_nsta_pane_ParamLimits

0xd809,	// (0x0002cf84) navi_icon_pane_g1_ParamLimits

0xd815,	// (0x0002cf90) navi_text_pane_t1_ParamLimits

0xdd12,	// (0x0002d48d) navi_icon_text_pane_g1_ParamLimits

0xdd1e,	// (0x0002d499) navi_icon_text_pane_t1_ParamLimits

0xe360,	// (0x0002dadb) list_single_hc_apps_pane_g1_ParamLimits

0xb9fa,	// (0x0002b175) list_single_hc_apps_pane_g2_ParamLimits

0xfd01,	// (0x0002f47c) list_single_hc_apps_pane_g_ParamLimits

0xba13,	// (0x0002b18e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xba2f,	// (0x0002b1aa) list_single_hc_apps_pane_t1_ParamLimits

0xbbb3,	// (0x0002b32e) popup_toolbar2_fixed_window_ParamLimits

0xbbb3,	// (0x0002b32e) popup_toolbar2_fixed_window

0xd1ca,	// (0x0002c945) popup_toolbar2_float_window

0x2a32,	// (0x000221ad) bg_popup_sub_pane_cp27

0x89bb,	// (0x00028136) grid_toolbar2_float_pane

0x2a32,	// (0x000221ad) bg_popup_sub_pane_cp26

0x89bb,	// (0x00028136) grid_toolbar2_fixed_pane

0xe379,	// (0x0002daf4) cell_toolbar2_fixed_pane_ParamLimits

0xe379,	// (0x0002daf4) cell_toolbar2_fixed_pane

0xe396,	// (0x0002db11) cell_toolbar2_fixed_pane_g1

0x89dc,	// (0x00028157) toolbar2_fixed_button_pane

0x4ed9,	// (0x00024654) toolbar2_fixed_button_pane_g1

0x4ee1,	// (0x0002465c) toolbar2_fixed_button_pane_g2

0x4ee9,	// (0x00024664) toolbar2_fixed_button_pane_g3

0x4ef1,	// (0x0002466c) toolbar2_fixed_button_pane_g4

0x4ef9,	// (0x00024674) toolbar2_fixed_button_pane_g5

0x4f01,	// (0x0002467c) toolbar2_fixed_button_pane_g6

0x4f09,	// (0x00024684) toolbar2_fixed_button_pane_g7

0x4f11,	// (0x0002468c) toolbar2_fixed_button_pane_g8

0x4f19,	// (0x00024694) toolbar2_fixed_button_pane_g9

0x0008,

0xf895,	// (0x0002f010) toolbar2_fixed_button_pane_g

0x89e4,	// (0x0002815f) cell_toolbar2_float_pane_ParamLimits

0x89e4,	// (0x0002815f) cell_toolbar2_float_pane

0x89f5,	// (0x00028170) cell_toolbar2_float_pane_g1

0x89dc,	// (0x00028157) toolbar2_fixed_button_pane_cp

0xde3c,	// (0x0002d5b7) fep_vkb_accented_list_pane_ParamLimits

0xde3c,	// (0x0002d5b7) fep_vkb_accented_list_pane

0x207b,	// (0x000217f6) bg_popup_fep_shadow_pane_g9

0x4017,	// (0x00023792) bg_popup_fep_shadow_pane_cp3

0x3516,	// (0x00022c91) list_accented_list_pane

0x89fe,	// (0x00028179) list_single_accented_list_pane_ParamLimits

0x89fe,	// (0x00028179) list_single_accented_list_pane

0x4017,	// (0x00023792) list_highlight_pane_cp10

0x8a0f,	// (0x0002818a) list_single_accented_list_pane_t1

0xd0e6,	// (0x0002c861) popup_slider_window_ParamLimits

0xd0e6,	// (0x0002c861) popup_slider_window

0x8657,	// (0x00027dd2) aid_indentation_list_msg

0xe4a1,	// (0x0002dc1c) bg_popup_window_pane_cp19

0x8b49,	// (0x000282c4) popup_slider_window_g1

0x8b65,	// (0x000282e0) popup_slider_window_g2

0x8b81,	// (0x000282fc) popup_slider_window_g3

0x0005,

0xfd06,	// (0x0002f481) popup_slider_window_g

0x8bdd,	// (0x00028358) popup_slider_window_t1

0x8c51,	// (0x000283cc) small_volume_slider_vertical_pane

0x751d,	// (0x00026c98) small_volume_slider_vertical_pane_g1

0x751d,	// (0x00026c98) small_volume_slider_vertical_pane_g2

0x8c6d,	// (0x000283e8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd18,	// (0x0002f493) small_volume_slider_vertical_pane_g

0xbb1d,	// (0x0002b298) area_side_right_pane_ParamLimits

0xbb1d,	// (0x0002b298) area_side_right_pane

0xc341,	// (0x0002babc) aid_size_side_button_ParamLimits

0xc341,	// (0x0002babc) aid_size_side_button

0xc35a,	// (0x0002bad5) grid_sctrl_middle_pane_ParamLimits

0xc35a,	// (0x0002bad5) grid_sctrl_middle_pane

0x220b,	// (0x00021986) sctrl_sk_bottom_pane

0x221c,	// (0x00021997) sctrl_sk_top_pane

0x222e,	// (0x000219a9) aid_touch_sctrl_top

0x2db0,	// (0x0002252b) bg_sctrl_sk_pane_ParamLimits

0x2db0,	// (0x0002252b) bg_sctrl_sk_pane

0x223b,	// (0x000219b6) sctrl_sk_top_pane_g1

0x2248,	// (0x000219c3) sctrl_sk_top_pane_t1

0x222e,	// (0x000219a9) aid_touch_sctrl_bottom

0x2db0,	// (0x0002252b) bg_sctrl_sk_pane_cp_ParamLimits

0x2db0,	// (0x0002252b) bg_sctrl_sk_pane_cp

0x2263,	// (0x000219de) sctrl_sk_bottom_pane_g1

0x2248,	// (0x000219c3) sctrl_sk_bottom_pane_t1

0xc374,	// (0x0002baef) cell_sctrl_middle_pane_ParamLimits

0xc374,	// (0x0002baef) cell_sctrl_middle_pane

0xc387,	// (0x0002bb02) aid_touch_sctrl_middle_ParamLimits

0xc387,	// (0x0002bb02) aid_touch_sctrl_middle

0xc394,	// (0x0002bb0f) bg_sctrl_middle_pane_ParamLimits

0xc394,	// (0x0002bb0f) bg_sctrl_middle_pane

0x8cf8,	// (0x00028473) cell_sctrl_middle_pane_g1_ParamLimits

0x8cf8,	// (0x00028473) cell_sctrl_middle_pane_g1

0xc3a2,	// (0x0002bb1d) cell_sctrl_middle_pane_g2_ParamLimits

0xc3a2,	// (0x0002bb1d) cell_sctrl_middle_pane_g2

0x0001,

0xfd24,	// (0x0002f49f) cell_sctrl_middle_pane_g_ParamLimits

0xfd24,	// (0x0002f49f) cell_sctrl_middle_pane_g

0x4ed9,	// (0x00024654) bg_sctrl_middle_pane_g1

0x4ee1,	// (0x0002465c) bg_sctrl_middle_pane_g2

0x4ee9,	// (0x00024664) bg_sctrl_middle_pane_g3

0x4ef1,	// (0x0002466c) bg_sctrl_middle_pane_g4

0x4ef9,	// (0x00024674) bg_sctrl_middle_pane_g5

0x4f01,	// (0x0002467c) bg_sctrl_middle_pane_g6

0x4f09,	// (0x00024684) bg_sctrl_middle_pane_g7

0x4f11,	// (0x0002468c) bg_sctrl_middle_pane_g8

0x0007,

0xfd29,	// (0x0002f4a4) bg_sctrl_middle_pane_g

0x4f19,	// (0x00024694) bg_sctrl_middle_pane_g8_copy1

0x4ed9,	// (0x00024654) bg_sctrl_sk_pane_g1

0x4ee1,	// (0x0002465c) bg_sctrl_sk_pane_g2

0x4ee9,	// (0x00024664) bg_sctrl_sk_pane_g3

0x0008,

0xf895,	// (0x0002f010) bg_sctrl_sk_pane_g

0x32dc,	// (0x00022a57) aid_size_touch_scroll_bar

0x4ef1,	// (0x0002466c) bg_sctrl_sk_pane_g4

0x4ef9,	// (0x00024674) bg_sctrl_sk_pane_g5

0x4f01,	// (0x0002467c) bg_sctrl_sk_pane_g6

0x4f09,	// (0x00024684) bg_sctrl_sk_pane_g7

0x4f11,	// (0x0002468c) bg_sctrl_sk_pane_g8

0x4f19,	// (0x00024694) bg_sctrl_sk_pane_g9

0x4447,	// (0x00023bc2) popup_fep_china_hwr2_fs_candidate_window

0xcba2,	// (0x0002c31d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcba2,	// (0x0002c31d) popup_fep_china_hwr2_fs_control_window

0x77b5,	// (0x00026f30) sctrl_sk_top_pane_g2

0x0001,

0xfd1f,	// (0x0002f49a) sctrl_sk_top_pane_g

0xe559,	// (0x0002dcd4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe559,	// (0x0002dcd4) aid_fep_china_hwr2_fs_cell

0xe56f,	// (0x0002dcea) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe56f,	// (0x0002dcea) bg_popup_fep_shadow_pane_cp4

0xe586,	// (0x0002dd01) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe586,	// (0x0002dd01) bg_popup_fep_shadow_pane_cp5

0xe598,	// (0x0002dd13) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe598,	// (0x0002dd13) popup_fep_china_hwr2_fs_control_bar_grid

0xe5ac,	// (0x0002dd27) popup_fep_china_hwr2_fs_control_funtion_grid

0x8ccc,	// (0x00028447) aid_fep_china_hwr2_fs_candi_cell

0x2a32,	// (0x000221ad) bg_popup_fep_shadow_pane_cp6

0x8cd6,	// (0x00028451) popup_fep_china_hwr2_fs_candidate_grid

0xe5b4,	// (0x0002dd2f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe5b4,	// (0x0002dd2f) cell_fep_china_hwr2_fs_funtion_grid

0x751d,	// (0x00026c98) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8cf8,	// (0x00028473) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8cf8,	// (0x00028473) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8d06,	// (0x00028481) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8d06,	// (0x00028481) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3a,	// (0x0002f4b5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3a,	// (0x0002f4b5) cell_fep_china_hwr2_fs_funtion_grid_g

0xe5cc,	// (0x0002dd47) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe5cc,	// (0x0002dd47) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe5e1,	// (0x0002dd5c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe5e1,	// (0x0002dd5c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3f,	// (0x0002f4ba) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3f,	// (0x0002f4ba) cell_fep_china_hwr2_fs_funtion_grid_t

0x8d4d,	// (0x000284c8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8d55,	// (0x000284d0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8d5d,	// (0x000284d8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd44,	// (0x0002f4bf) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8d65,	// (0x000284e0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8d65,	// (0x000284e0) cell_fep_china_hwr2_fs_candidate_grid

0x8d84,	// (0x000284ff) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8d8c,	// (0x00028507) popup_fep_china_hwr2_fs_candidate_grid_g21

0x751d,	// (0x00026c98) cell_fep_china_hwr2_fs_candidate_grid_g1

0x751d,	// (0x00026c98) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb64,	// (0x0002f2df) cell_fep_china_hwr2_fs_candidate_grid_g

0x8d94,	// (0x0002850f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4ab6,	// (0x00024231) clock_nsta_pane_cp_24_ParamLimits

0x4ab6,	// (0x00024231) clock_nsta_pane_cp_24

0x4b36,	// (0x000242b1) indicator_nsta_pane_cp_24_ParamLimits

0x4b36,	// (0x000242b1) indicator_nsta_pane_cp_24

0x5bd1,	// (0x0002534c) heading_pane_g1

0x0001,

0xf8fa,	// (0x0002f075) heading_pane_g

0x6681,	// (0x00025dfc) grid_sct_catagory_button_pane

0x66b3,	// (0x00025e2e) scroll_pane_cp5_ParamLimits

0x7166,	// (0x000268e1) button_value_adjust_pane_cp5_ParamLimits

0x7166,	// (0x000268e1) button_value_adjust_pane_cp5

0x724b,	// (0x000269c6) form2_midp_time_pane_ParamLimits

0x8da2,	// (0x0002851d) cell_sct_catagory_button_pane_ParamLimits

0x8da2,	// (0x0002851d) cell_sct_catagory_button_pane

0x74e2,	// (0x00026c5d) bg_button_pane_cp01_ParamLimits

0x74e2,	// (0x00026c5d) bg_button_pane_cp01

0x751d,	// (0x00026c98) cell_sct_catagory_button_pane_g1

0xd167,	// (0x0002c8e2) popup_tb_extension_window

0xe5fd,	// (0x0002dd78) aid_size_cell_ext_ParamLimits

0xe5fd,	// (0x0002dd78) aid_size_cell_ext

0x311e,	// (0x00022899) bg_tb_trans_pane_cp1_ParamLimits

0x311e,	// (0x00022899) bg_tb_trans_pane_cp1

0xe623,	// (0x0002dd9e) grid_tb_ext_pane_ParamLimits

0xe623,	// (0x0002dd9e) grid_tb_ext_pane

0xe663,	// (0x0002ddde) cell_tb_ext_pane_ParamLimits

0xe663,	// (0x0002ddde) cell_tb_ext_pane

0xe68d,	// (0x0002de08) cell_tb_ext_pane_g1_ParamLimits

0xe68d,	// (0x0002de08) cell_tb_ext_pane_g1

0x8e38,	// (0x000285b3) cell_tb_ext_pane_t1

0x2db0,	// (0x0002252b) list_highlight_pane_cp11_ParamLimits

0x2db0,	// (0x0002252b) list_highlight_pane_cp11

0x12c5,	// (0x00020a40) popup_uni_indicator_window_ParamLimits

0x12c5,	// (0x00020a40) popup_uni_indicator_window

0x33ad,	// (0x00022b28) bg_popup_sub_pane_cp14

0x8e53,	// (0x000285ce) list_uniindi_pane

0x8e5f,	// (0x000285da) uniindi_top_pane

0x2db0,	// (0x0002252b) bg_uniindi_top_pane

0x8e80,	// (0x000285fb) uniindi_top_pane_g1

0x8e96,	// (0x00028611) uniindi_top_pane_g2

0x0003,

0xfd4b,	// (0x0002f4c6) uniindi_top_pane_g

0x8ec0,	// (0x0002863b) uniindi_top_pane_t1

0x8eec,	// (0x00028667) list_single_uniindi_pane_ParamLimits

0x8eec,	// (0x00028667) list_single_uniindi_pane

0x751d,	// (0x00026c98) bg_uniindi_top_pane_g1

0x8efe,	// (0x00028679) list_single_uniindi_pane_g1

0x8f11,	// (0x0002868c) list_single_uniindi_pane_t1

0x2a32,	// (0x000221ad) control_bg_pane

0x8f36,	// (0x000286b1) bg_sctrl_sk_pane_cp1

0x8f3f,	// (0x000286ba) bg_sctrl_sk_pane_cp2

0x8f48,	// (0x000286c3) control_bg_pane_g1

0x8f51,	// (0x000286cc) control_bg_pane_g2

0x0001,

0xfd54,	// (0x0002f4cf) control_bg_pane_g

0x6fba,	// (0x00026735) cell_indicator_nsta_pane_g1_ParamLimits

0xdc6b,	// (0x0002d3e6) cell_indicator_nsta_pane_g2_ParamLimits

0xfad5,	// (0x0002f250) cell_indicator_nsta_pane_g_ParamLimits

0x0be7,	// (0x00020362) form2_midp_time_pane_t1_ParamLimits

0x758d,	// (0x00026d08) main_idle_act4_pane_ParamLimits

0x758d,	// (0x00026d08) main_idle_act4_pane

0xd167,	// (0x0002c8e2) popup_tb_extension_window_ParamLimits

0xe64b,	// (0x0002ddc6) tb_ext_find_pane_ParamLimits

0xe64b,	// (0x0002ddc6) tb_ext_find_pane

0x8f5a,	// (0x000286d5) ai_gene_pane_1_cp1

0x4160,	// (0x000238db) ai_gene_pane_2_cp1

0x8f62,	// (0x000286dd) list_single_idle_plugin_calendar_pane

0x8f6b,	// (0x000286e6) list_single_idle_plugin_notification_pane

0x8f74,	// (0x000286ef) list_single_idle_plugin_player_pane

0xe6aa,	// (0x0002de25) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe6aa,	// (0x0002de25) list_single_idle_plugin_shortcut_pane

0xe6d2,	// (0x0002de4d) main_idle_act4_pane_t1

0xe6ea,	// (0x0002de65) main_idle_act4_pane_t2

0x0001,

0xfd59,	// (0x0002f4d4) main_idle_act4_pane_t

0xe702,	// (0x0002de7d) middle_sk_idle_act4_pane_ParamLimits

0xe702,	// (0x0002de7d) middle_sk_idle_act4_pane

0xe71e,	// (0x0002de99) popup_clock_digital_analogue_window_cp2

0xe745,	// (0x0002dec0) shortcut_wheel_idle_act4_pane_ParamLimits

0xe745,	// (0x0002dec0) shortcut_wheel_idle_act4_pane

0x751d,	// (0x00026c98) shortcut_wheel_idle_act4_pane_g1

0x751d,	// (0x00026c98) shortcut_wheel_idle_act4_pane_g2

0x751d,	// (0x00026c98) shortcut_wheel_idle_act4_pane_g3

0x751d,	// (0x00026c98) shortcut_wheel_idle_act4_pane_g4

0x751d,	// (0x00026c98) shortcut_wheel_idle_act4_pane_g5

0x9007,	// (0x00028782) shortcut_wheel_idle_act4_pane_g6

0x900f,	// (0x0002878a) shortcut_wheel_idle_act4_pane_g7

0x9017,	// (0x00028792) shortcut_wheel_idle_act4_pane_g8

0x901f,	// (0x0002879a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5e,	// (0x0002f4d9) shortcut_wheel_idle_act4_pane_g

0xd37e,	// (0x0002caf9) middle_sk_idle_act4_pane_g1_ParamLimits

0xd37e,	// (0x0002caf9) middle_sk_idle_act4_pane_g1

0xe7c2,	// (0x0002df3d) middle_sk_idle_act4_pane_g2_ParamLimits

0xe7c2,	// (0x0002df3d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd81,	// (0x0002f4fc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd81,	// (0x0002f4fc) middle_sk_idle_act4_pane_g

0xe7da,	// (0x0002df55) middle_sk_idle_act4_pane_t1_ParamLimits

0xe7da,	// (0x0002df55) middle_sk_idle_act4_pane_t1

0xe809,	// (0x0002df84) grid_ai_shortcut_pane_ParamLimits

0xe809,	// (0x0002df84) grid_ai_shortcut_pane

0xe826,	// (0x0002dfa1) list_highlight_pane_cp16_ParamLimits

0xe826,	// (0x0002dfa1) list_highlight_pane_cp16

0xe833,	// (0x0002dfae) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe833,	// (0x0002dfae) list_single_idle_plugin_shortcut_pane_g1

0xe83f,	// (0x0002dfba) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe83f,	// (0x0002dfba) list_single_idle_plugin_shortcut_pane_g2

0xe85d,	// (0x0002dfd8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe85d,	// (0x0002dfd8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd86,	// (0x0002f501) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd86,	// (0x0002f501) list_single_idle_plugin_shortcut_pane_g

0xe872,	// (0x0002dfed) cell_ai_shortcut_pane_ParamLimits

0xe872,	// (0x0002dfed) cell_ai_shortcut_pane

0xe888,	// (0x0002e003) cell_ai_shortcut_pane_g1_ParamLimits

0xe888,	// (0x0002e003) cell_ai_shortcut_pane_g1

0x8f5a,	// (0x000286d5) ai_gene_pane_1_cp2

0x9150,	// (0x000288cb) ai_gene_pane_2_cp2

0x9158,	// (0x000288d3) list_highlight_pane_cp15

0x9161,	// (0x000288dc) list_single_idle_plugin_calendar_pane_g1

0x9158,	// (0x000288d3) list_highlight_pane_cp17

0x9169,	// (0x000288e4) list_single_idle_plugin_calendar_pane_g1_copy1

0x9171,	// (0x000288ec) list_single_idle_plugin_player_pane_g1

0x68e8,	// (0x00026063) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8d,	// (0x0002f508) list_single_idle_plugin_player_pane_g

0x9179,	// (0x000288f4) list_single_idle_plugin_player_pane_t1

0x9187,	// (0x00028902) list_single_idle_plugin_player_pane_t2

0x9195,	// (0x00028910) list_single_idle_plugin_player_pane_t3

0x91a3,	// (0x0002891e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd92,	// (0x0002f50d) list_single_idle_plugin_player_pane_t

0x91b1,	// (0x0002892c) wait_bar_pane_cp15

0x91b9,	// (0x00028934) grid_ai_notification_pane

0x68e8,	// (0x00026063) list_single_idle_plugin_notification_pane_g1

0xe8aa,	// (0x0002e025) cell_ai_notification_pane_ParamLimits

0xe8aa,	// (0x0002e025) cell_ai_notification_pane

0x91cf,	// (0x0002894a) cell_ai_notification_pane_g1

0x91d7,	// (0x00028952) cell_ai_notification_pane_t1

0xe8b7,	// (0x0002e032) tb_ext_find_button_pane

0xe8bf,	// (0x0002e03a) tb_ext_find_pane_g1

0xe8c7,	// (0x0002e042) tb_ext_find_pane_t1

0x3a1d,	// (0x00023198) tb_ext_find_button_pane_g1

0x9203,	// (0x0002897e) tb_ext_find_button_pane_g2

0x0001,

0xfd9b,	// (0x0002f516) tb_ext_find_button_pane_g

0xe6d2,	// (0x0002de4d) main_idle_act4_pane_t1_ParamLimits

0xe6ea,	// (0x0002de65) main_idle_act4_pane_t2_ParamLimits

0xfd59,	// (0x0002f4d4) main_idle_act4_pane_t_ParamLimits

0xe71e,	// (0x0002de99) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe735,	// (0x0002deb0) sat_plugin_idle_act4_pane_ParamLimits

0xe735,	// (0x0002deb0) sat_plugin_idle_act4_pane

0xe8d5,	// (0x0002e050) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe8d5,	// (0x0002e050) sat_plugin_idle_act4_pane_t1

0xe8ed,	// (0x0002e068) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe8ed,	// (0x0002e068) sat_plugin_idle_act4_pane_t2

0xe905,	// (0x0002e080) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe905,	// (0x0002e080) sat_plugin_idle_act4_pane_t3

0xe91d,	// (0x0002e098) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe91d,	// (0x0002e098) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda0,	// (0x0002f51b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda0,	// (0x0002f51b) sat_plugin_idle_act4_pane_t

0x11f6,	// (0x00020971) popup_battery_window_ParamLimits

0x11f6,	// (0x00020971) popup_battery_window

0x2db0,	// (0x0002252b) bg_popup_sub_pane_cp25_ParamLimits

0x2db0,	// (0x0002252b) bg_popup_sub_pane_cp25

0x9258,	// (0x000289d3) popup_battery_window_g1_ParamLimits

0x9258,	// (0x000289d3) popup_battery_window_g1

0x9264,	// (0x000289df) popup_battery_window_t1_ParamLimits

0x9264,	// (0x000289df) popup_battery_window_t1

0x9276,	// (0x000289f1) popup_battery_window_t2_ParamLimits

0x9276,	// (0x000289f1) popup_battery_window_t2

0x0001,

0xfda9,	// (0x0002f524) popup_battery_window_t_ParamLimits

0xfda9,	// (0x0002f524) popup_battery_window_t

0xca36,	// (0x0002c1b1) midp_canvas_pane_ParamLimits

0xca91,	// (0x0002c20c) midp_keypad_pane_ParamLimits

0xca91,	// (0x0002c20c) midp_keypad_pane

0x439d,	// (0x00023b18) main_midp_pane_ParamLimits

0x7013,	// (0x0002678e) signal_pane_g2_cp_ParamLimits

0xe935,	// (0x0002e0b0) aid_size_cell_midp_keypad_ParamLimits

0xe935,	// (0x0002e0b0) aid_size_cell_midp_keypad

0xe953,	// (0x0002e0ce) midp_keyp_game_grid_pane_ParamLimits

0xe953,	// (0x0002e0ce) midp_keyp_game_grid_pane

0xe97a,	// (0x0002e0f5) midp_keyp_rocker_pane_ParamLimits

0xe97a,	// (0x0002e0f5) midp_keyp_rocker_pane

0xe9bf,	// (0x0002e13a) midp_keyp_sk_left_pane_ParamLimits

0xe9bf,	// (0x0002e13a) midp_keyp_sk_left_pane

0xea13,	// (0x0002e18e) midp_keyp_sk_right_pane_ParamLimits

0xea13,	// (0x0002e18e) midp_keyp_sk_right_pane

0x2a32,	// (0x000221ad) bg_button_pane_cp03

0xea67,	// (0x0002e1e2) midp_keyp_sk_left_pane_g1

0x2a32,	// (0x000221ad) bg_button_pane_cp04

0xea67,	// (0x0002e1e2) midp_keyp_sk_right_pane_g1

0x751d,	// (0x00026c98) midp_keyp_rocker_pane_g1

0xea70,	// (0x0002e1eb) keyp_game_cell_pane_ParamLimits

0xea70,	// (0x0002e1eb) keyp_game_cell_pane

0x2a32,	// (0x000221ad) bg_button_pane_cp02

0xea96,	// (0x0002e211) keyp_game_cell_pane_g1

0xbb5f,	// (0x0002b2da) popup_fep_vkb2_window_ParamLimits

0xbb5f,	// (0x0002b2da) popup_fep_vkb2_window

0xc3ae,	// (0x0002bb29) aid_size_cell_vkb2_ParamLimits

0xc3ae,	// (0x0002bb29) aid_size_cell_vkb2

0xc3dc,	// (0x0002bb57) popup_fep_vkb2_window_g1_ParamLimits

0xc3dc,	// (0x0002bb57) popup_fep_vkb2_window_g1

0xc42c,	// (0x0002bba7) vkb2_area_bottom_pane_ParamLimits

0xc42c,	// (0x0002bba7) vkb2_area_bottom_pane

0xc488,	// (0x0002bc03) vkb2_area_keypad_pane_ParamLimits

0xc488,	// (0x0002bc03) vkb2_area_keypad_pane

0xc4d6,	// (0x0002bc51) vkb2_area_top_pane_ParamLimits

0xc4d6,	// (0x0002bc51) vkb2_area_top_pane

0xc55c,	// (0x0002bcd7) vkb2_top_entry_pane_ParamLimits

0xc55c,	// (0x0002bcd7) vkb2_top_entry_pane

0xc589,	// (0x0002bd04) vkb2_top_grid_left_pane_ParamLimits

0xc589,	// (0x0002bd04) vkb2_top_grid_left_pane

0xc5a9,	// (0x0002bd24) vkb2_top_grid_right_pane_ParamLimits

0xc5a9,	// (0x0002bd24) vkb2_top_grid_right_pane

0x24cb,	// (0x00021c46) vkb2_cell_keypad_pane_ParamLimits

0x24cb,	// (0x00021c46) vkb2_cell_keypad_pane

0xc5ef,	// (0x0002bd6a) vkb2_area_bottom_grid_pane_ParamLimits

0xc5ef,	// (0x0002bd6a) vkb2_area_bottom_grid_pane

0xc619,	// (0x0002bd94) vkb2_area_bottom_pane_g1_ParamLimits

0xc619,	// (0x0002bd94) vkb2_area_bottom_pane_g1

0xc63f,	// (0x0002bdba) vkb2_area_bottom_pane_g2_ParamLimits

0xc63f,	// (0x0002bdba) vkb2_area_bottom_pane_g2

0xc670,	// (0x0002bdeb) vkb2_area_bottom_pane_g3_ParamLimits

0xc670,	// (0x0002bdeb) vkb2_area_bottom_pane_g3

0x0002,

0xfdae,	// (0x0002f529) vkb2_area_bottom_pane_g_ParamLimits

0xfdae,	// (0x0002f529) vkb2_area_bottom_pane_g

0x265a,	// (0x00021dd5) vkb2_top_cell_left_pane_ParamLimits

0x265a,	// (0x00021dd5) vkb2_top_cell_left_pane

0xea9f,	// (0x0002e21a) vkb2_top_entry_pane_g1_ParamLimits

0xea9f,	// (0x0002e21a) vkb2_top_entry_pane_g1

0xeaad,	// (0x0002e228) vkb2_top_entry_pane_t1_ParamLimits

0xeaad,	// (0x0002e228) vkb2_top_entry_pane_t1

0x9403,	// (0x00028b7e) vkb2_top_entry_pane_t2_ParamLimits

0x9403,	// (0x00028b7e) vkb2_top_entry_pane_t2

0x941b,	// (0x00028b96) vkb2_top_entry_pane_t3_ParamLimits

0x941b,	// (0x00028b96) vkb2_top_entry_pane_t3

0x0002,

0xfdb5,	// (0x0002f530) vkb2_top_entry_pane_t_ParamLimits

0xfdb5,	// (0x0002f530) vkb2_top_entry_pane_t

0xc6da,	// (0x0002be55) vkb2_top_grid_right_pane_g1_ParamLimits

0xc6da,	// (0x0002be55) vkb2_top_grid_right_pane_g1

0x26bd,	// (0x00021e38) vkb2_top_grid_right_pane_g2_ParamLimits

0x26bd,	// (0x00021e38) vkb2_top_grid_right_pane_g2

0x26d5,	// (0x00021e50) vkb2_top_grid_right_pane_g3_ParamLimits

0x26d5,	// (0x00021e50) vkb2_top_grid_right_pane_g3

0xc6f0,	// (0x0002be6b) vkb2_top_grid_right_pane_g4_ParamLimits

0xc6f0,	// (0x0002be6b) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbc,	// (0x0002f537) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbc,	// (0x0002f537) vkb2_top_grid_right_pane_g

0x2703,	// (0x00021e7e) vkb2_top_cell_left_pane_g1

0x271a,	// (0x00021e95) vkb2_cell_keypad_pane_g1_ParamLimits

0x271a,	// (0x00021e95) vkb2_cell_keypad_pane_g1

0x9431,	// (0x00028bac) vkb2_cell_keypad_pane_t1_ParamLimits

0x9431,	// (0x00028bac) vkb2_cell_keypad_pane_t1

0x273e,	// (0x00021eb9) vkb2_cell_bottom_grid_pane_ParamLimits

0x273e,	// (0x00021eb9) vkb2_cell_bottom_grid_pane

0x2777,	// (0x00021ef2) vkb2_cell_bottom_grid_pane_g1

0xe766,	// (0x0002dee1) aid_call2_pane_cp02

0xe76e,	// (0x0002dee9) aid_call_pane_cp02

0xe776,	// (0x0002def1) clock_digital_number_pane_cp10

0xe77e,	// (0x0002def9) clock_digital_number_pane_cp11

0xe786,	// (0x0002df01) clock_digital_number_pane_cp12

0xe78e,	// (0x0002df09) clock_digital_number_pane_cp13

0xe796,	// (0x0002df11) clock_digital_separator_pane_cp10

0x3a1d,	// (0x00023198) popup_clock_digital_analogue_window_cp2_g1

0x3a1d,	// (0x00023198) popup_clock_digital_analogue_window_cp2_g2

0xe79e,	// (0x0002df19) popup_clock_digital_analogue_window_cp2_g3

0x3a1d,	// (0x00023198) popup_clock_digital_analogue_window_cp2_g4

0xe79e,	// (0x0002df19) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd71,	// (0x0002f4ec) popup_clock_digital_analogue_window_cp2_g

0xe7a6,	// (0x0002df21) popup_clock_digital_analogue_window_cp2_t1

0xe7b4,	// (0x0002df2f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7c,	// (0x0002f4f7) popup_clock_digital_analogue_window_cp2_t

0x751d,	// (0x00026c98) clock_digital_number_pane_cp10_g1

0x751d,	// (0x00026c98) clock_digital_number_pane_cp10_g2

0x0001,

0xfb64,	// (0x0002f2df) clock_digital_number_pane_cp10_g

0x751d,	// (0x00026c98) clock_digital_separator_pane_cp10_g1

0x751d,	// (0x00026c98) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb64,	// (0x0002f2df) clock_digital_separator_pane_cp10_g

0x8ea2,	// (0x0002861d) uniindi_top_pane_g3

0x8eb3,	// (0x0002862e) uniindi_top_pane_g4

0x253b,	// (0x00021cb6) vkb2_row_keypad_pane_ParamLimits

0x253b,	// (0x00021cb6) vkb2_row_keypad_pane

0x2793,	// (0x00021f0e) vkb2_cell_t_keypad_pane_ParamLimits

0x2793,	// (0x00021f0e) vkb2_cell_t_keypad_pane

0x27a3,	// (0x00021f1e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x27a3,	// (0x00021f1e) vkb2_cell_t_keypad_pane_cp08

0x27b8,	// (0x00021f33) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x27b8,	// (0x00021f33) vkb2_cell_t_keypad_pane_cp09

0x27cc,	// (0x00021f47) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x27cc,	// (0x00021f47) vkb2_cell_t_keypad_pane_cp01

0x27dd,	// (0x00021f58) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x27dd,	// (0x00021f58) vkb2_cell_t_keypad_pane_cp02

0x27ee,	// (0x00021f69) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x27ee,	// (0x00021f69) vkb2_cell_t_keypad_pane_cp03

0x27ff,	// (0x00021f7a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x27ff,	// (0x00021f7a) vkb2_cell_t_keypad_pane_cp04

0x2810,	// (0x00021f8b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2810,	// (0x00021f8b) vkb2_cell_t_keypad_pane_cp05

0x2821,	// (0x00021f9c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2821,	// (0x00021f9c) vkb2_cell_t_keypad_pane_cp06

0x2834,	// (0x00021faf) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2834,	// (0x00021faf) vkb2_cell_t_keypad_pane_cp07

0x2849,	// (0x00021fc4) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2849,	// (0x00021fc4) vkb2_cell_t_keypad_pane_cp10

0x77b5,	// (0x00026f30) vkb2_cell_t_keypad_pane_g1

0x9448,	// (0x00028bc3) vkb2_cell_t_keypad_pane_t1

0x2a32,	// (0x000221ad) popup_grid_graphic2_window

0xeae6,	// (0x0002e261) aid_size_cell_graphic2_ParamLimits

0xeae6,	// (0x0002e261) aid_size_cell_graphic2

0x554e,	// (0x00024cc9) bg_popup_window_pane_cp21_ParamLimits

0x554e,	// (0x00024cc9) bg_popup_window_pane_cp21

0xeb18,	// (0x0002e293) graphic2_pages_pane_ParamLimits

0xeb18,	// (0x0002e293) graphic2_pages_pane

0xeb70,	// (0x0002e2eb) grid_graphic2_control_pane_ParamLimits

0xeb70,	// (0x0002e2eb) grid_graphic2_control_pane

0xeba4,	// (0x0002e31f) grid_graphic2_pane_ParamLimits

0xeba4,	// (0x0002e31f) grid_graphic2_pane

0xec1b,	// (0x0002e396) cell_graphic2_pane

0x2a32,	// (0x000221ad) main_comp_mode_pane

0x8713,	// (0x00027e8e) list_ai3_gene_pane_ParamLimits

0xe4a1,	// (0x0002dc1c) bg_popup_window_pane_cp19_ParamLimits

0x8ae7,	// (0x00028262) bg_touch_area_indi_pane_ParamLimits

0x8ae7,	// (0x00028262) bg_touch_area_indi_pane

0x8afd,	// (0x00028278) bg_touch_area_indi_pane_cp01_ParamLimits

0x8afd,	// (0x00028278) bg_touch_area_indi_pane_cp01

0x8b15,	// (0x00028290) bg_touch_area_indi_pane_cp02_ParamLimits

0x8b15,	// (0x00028290) bg_touch_area_indi_pane_cp02

0x8b2f,	// (0x000282aa) bg_touch_area_indi_pane_cp03_ParamLimits

0x8b2f,	// (0x000282aa) bg_touch_area_indi_pane_cp03

0x8b49,	// (0x000282c4) popup_slider_window_g1_ParamLimits

0x8b65,	// (0x000282e0) popup_slider_window_g2_ParamLimits

0x8b81,	// (0x000282fc) popup_slider_window_g3_ParamLimits

0xfd06,	// (0x0002f481) popup_slider_window_g_ParamLimits

0x8bdd,	// (0x00028358) popup_slider_window_t1_ParamLimits

0x8c51,	// (0x000283cc) small_volume_slider_vertical_pane_ParamLimits

0xec1b,	// (0x0002e396) cell_graphic2_pane_ParamLimits

0xec7e,	// (0x0002e3f9) bg_button_pane_cp10_ParamLimits

0xec7e,	// (0x0002e3f9) bg_button_pane_cp10

0xec91,	// (0x0002e40c) bg_button_pane_cp11_ParamLimits

0xec91,	// (0x0002e40c) bg_button_pane_cp11

0xeca4,	// (0x0002e41f) graphic2_pages_pane_g1_ParamLimits

0xeca4,	// (0x0002e41f) graphic2_pages_pane_g1

0xecbf,	// (0x0002e43a) graphic2_pages_pane_g2_ParamLimits

0xecbf,	// (0x0002e43a) graphic2_pages_pane_g2

0x0001,

0xfdca,	// (0x0002f545) graphic2_pages_pane_g_ParamLimits

0xfdca,	// (0x0002f545) graphic2_pages_pane_g

0xecd7,	// (0x0002e452) graphic2_pages_pane_t1_ParamLimits

0xecd7,	// (0x0002e452) graphic2_pages_pane_t1

0xecef,	// (0x0002e46a) cell_graphic2_control_pane_ParamLimits

0xecef,	// (0x0002e46a) cell_graphic2_control_pane

0xed09,	// (0x0002e484) cell_graphic2_pane_g1_ParamLimits

0xed09,	// (0x0002e484) cell_graphic2_pane_g1

0xd38c,	// (0x0002cb07) cell_graphic2_pane_g2_ParamLimits

0xd38c,	// (0x0002cb07) cell_graphic2_pane_g2

0xed16,	// (0x0002e491) cell_graphic2_pane_g3_ParamLimits

0xed16,	// (0x0002e491) cell_graphic2_pane_g3

0xd399,	// (0x0002cb14) cell_graphic2_pane_g4_ParamLimits

0xd399,	// (0x0002cb14) cell_graphic2_pane_g4

0xed23,	// (0x0002e49e) cell_graphic2_pane_g5_ParamLimits

0xed23,	// (0x0002e49e) cell_graphic2_pane_g5

0x0004,

0xfdcf,	// (0x0002f54a) cell_graphic2_pane_g_ParamLimits

0xfdcf,	// (0x0002f54a) cell_graphic2_pane_g

0xed43,	// (0x0002e4be) cell_graphic2_pane_t1_ParamLimits

0xed43,	// (0x0002e4be) cell_graphic2_pane_t1

0x5bc5,	// (0x00025340) grid_highlight_pane_cp11_ParamLimits

0x5bc5,	// (0x00025340) grid_highlight_pane_cp11

0x33ad,	// (0x00022b28) bg_button_pane_cp05

0xed5a,	// (0x0002e4d5) cell_graphic2_control_pane_g1

0x751d,	// (0x00026c98) bg_touch_area_indi_pane_g1

0x96b0,	// (0x00028e2b) aid_cmod_rocker_key_size

0x96ba,	// (0x00028e35) aid_cmode_itu_key_size

0x96c4,	// (0x00028e3f) main_cmode_video_pane

0x96ce,	// (0x00028e49) main_comp_mode_itu_pane

0x96da,	// (0x00028e55) main_comp_mode_rocker_pane

0x96e6,	// (0x00028e61) cell_cmode_rocker_pane_ParamLimits

0x96e6,	// (0x00028e61) cell_cmode_rocker_pane

0x96fa,	// (0x00028e75) cell_cmode_itu_pane_ParamLimits

0x96fa,	// (0x00028e75) cell_cmode_itu_pane

0x33ad,	// (0x00022b28) bg_button_pane_cp06_ParamLimits

0x33ad,	// (0x00022b28) bg_button_pane_cp06

0x77b5,	// (0x00026f30) cell_cmode_rocker_pane_g1_ParamLimits

0x77b5,	// (0x00026f30) cell_cmode_rocker_pane_g1

0x8cf8,	// (0x00028473) cell_cmode_rocker_pane_g2_ParamLimits

0x8cf8,	// (0x00028473) cell_cmode_rocker_pane_g2

0x0001,

0xfdda,	// (0x0002f555) cell_cmode_rocker_pane_g_ParamLimits

0xfdda,	// (0x0002f555) cell_cmode_rocker_pane_g

0x2a32,	// (0x000221ad) bg_button_pane_cp07

0x9711,	// (0x00028e8c) cell_cmode_itu_pane_g1

0x971a,	// (0x00028e95) cell_cmode_itu_pane_t1

0x9728,	// (0x00028ea3) cell_cmode_itu_pane_t2

0x0001,

0xfddf,	// (0x0002f55a) cell_cmode_itu_pane_t

0x8f26,	// (0x000286a1) aid_touch_ctrl_left

0x8f2e,	// (0x000286a9) aid_touch_ctrl_right

0x2a32,	// (0x000221ad) compa_mode_pane

0xed67,	// (0x0002e4e2) aid_cmod_rocker_key_size_cp

0xed71,	// (0x0002e4ec) aid_cmode_itu_key_size_cp

0x974a,	// (0x00028ec5) compa_mode_pane_g1

0x9752,	// (0x00028ecd) compa_mode_pane_g2

0x975a,	// (0x00028ed5) compa_mode_pane_g3

0x0002,

0xfde4,	// (0x0002f55f) compa_mode_pane_g

0xed7b,	// (0x0002e4f6) main_comp_mode_itu_pane_cp

0xed83,	// (0x0002e4fe) main_comp_mode_rocker_pane_cp

0xed8b,	// (0x0002e506) cell_cmode_itu_pane_cp_ParamLimits

0xed8b,	// (0x0002e506) cell_cmode_itu_pane_cp

0xeda0,	// (0x0002e51b) cell_cmode_rocker_pane_cp_ParamLimits

0xeda0,	// (0x0002e51b) cell_cmode_rocker_pane_cp

0x33ad,	// (0x00022b28) bg_button_pane_cp06_cp_ParamLimits

0x33ad,	// (0x00022b28) bg_button_pane_cp06_cp

0x77b5,	// (0x00026f30) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x77b5,	// (0x00026f30) cell_cmode_rocker_pane_g1_cp

0x751d,	// (0x00026c98) cell_cmode_rocker_pane_g2_cp

0x2a32,	// (0x000221ad) bg_button_pane_cp07_cp

0xedb2,	// (0x0002e52d) cell_cmode_itu_pane_g1_cp

0xedbb,	// (0x0002e536) cell_cmode_itu_pane_t1_cp

0xedbb,	// (0x0002e536) cell_cmode_itu_pane_t2_cp

0xdab2,	// (0x0002d22d) settings_code_pane_cp2

0x2b26,	// (0x000222a1) bg_popup_window_pane_cp3_ParamLimits

0x2f9e,	// (0x00022719) heading_pane_cp3_ParamLimits

0x2faa,	// (0x00022725) listscroll_popup_graphic_pane_ParamLimits

0x1e49,	// (0x000215c4) fep_hwr_aid_pane_ParamLimits

0x222e,	// (0x000219a9) aid_touch_sctrl_top_ParamLimits

0x223b,	// (0x000219b6) sctrl_sk_top_pane_g1_ParamLimits

0x77b5,	// (0x00026f30) sctrl_sk_top_pane_g2_ParamLimits

0xfd1f,	// (0x0002f49a) sctrl_sk_top_pane_g_ParamLimits

0x2248,	// (0x000219c3) sctrl_sk_top_pane_t1_ParamLimits

0x222e,	// (0x000219a9) aid_touch_sctrl_bottom_ParamLimits

0x2248,	// (0x000219c3) sctrl_sk_bottom_pane_t1_ParamLimits

0x8e6c,	// (0x000285e7) aid_area_touch_clock

0xc51e,	// (0x0002bc99) aid_vkb2_area_top_pane_cell_ParamLimits

0xc51e,	// (0x0002bc99) aid_vkb2_area_top_pane_cell

0xc5c9,	// (0x0002bd44) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc5c9,	// (0x0002bd44) aid_vkb2_area_bottom_pane_cell

0x93d5,	// (0x00028b50) popup_char_count_window

0x97b0,	// (0x00028f2b) popup_char_count_window_g1

0x97b9,	// (0x00028f34) popup_char_count_window_g2

0x97c2,	// (0x00028f3d) popup_char_count_window_g3

0x0002,

0xfdeb,	// (0x0002f566) popup_char_count_window_g

0x97cb,	// (0x00028f46) popup_char_count_window_t1

0x22e7,	// (0x00021a62) popup_fep_char_preview_window_ParamLimits

0x22e7,	// (0x00021a62) popup_fep_char_preview_window

0xc53e,	// (0x0002bcb9) vkb2_top_candi_pane_ParamLimits

0xc53e,	// (0x0002bcb9) vkb2_top_candi_pane

0xedc9,	// (0x0002e544) cell_vkb2_top_candi_pane_ParamLimits

0xedc9,	// (0x0002e544) cell_vkb2_top_candi_pane

0x554e,	// (0x00024cc9) bg_popup_fep_char_preview_window_ParamLimits

0x554e,	// (0x00024cc9) bg_popup_fep_char_preview_window

0x285e,	// (0x00021fd9) popup_fep_char_preview_window_t1_ParamLimits

0x285e,	// (0x00021fd9) popup_fep_char_preview_window_t1

0x982a,	// (0x00028fa5) bg_popup_fep_char_preview_window_g1

0x9832,	// (0x00028fad) bg_popup_fep_char_preview_window_g2

0x983a,	// (0x00028fb5) bg_popup_fep_char_preview_window_g3

0x9842,	// (0x00028fbd) bg_popup_fep_char_preview_window_g4

0x984a,	// (0x00028fc5) bg_popup_fep_char_preview_window_g5

0x2898,	// (0x00022013) bg_popup_fep_char_preview_window_g6

0x9852,	// (0x00028fcd) bg_popup_fep_char_preview_window_g7

0x985a,	// (0x00028fd5) bg_popup_fep_char_preview_window_g8

0x9862,	// (0x00028fdd) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf2,	// (0x0002f56d) bg_popup_fep_char_preview_window_g

0x77b5,	// (0x00026f30) cell_vkb2_top_candi_pane_g1_ParamLimits

0x77b5,	// (0x00026f30) cell_vkb2_top_candi_pane_g1

0x7af6,	// (0x00027271) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7af6,	// (0x00027271) cell_vkb2_top_candi_pane_g2

0x7b17,	// (0x00027292) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7b17,	// (0x00027292) cell_vkb2_top_candi_pane_g3

0x28a0,	// (0x0002201b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x28a0,	// (0x0002201b) cell_vkb2_top_candi_pane_g4

0x986a,	// (0x00028fe5) cell_vkb2_top_candi_pane_g5_ParamLimits

0x986a,	// (0x00028fe5) cell_vkb2_top_candi_pane_g5

0x8cf8,	// (0x00028473) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8cf8,	// (0x00028473) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe05,	// (0x0002f580) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe05,	// (0x0002f580) cell_vkb2_top_candi_pane_g

0x28c1,	// (0x0002203c) cell_vkb2_top_candi_pane_t1

0x1cf9,	// (0x00021474) aid_size_touch_slider_mark_ParamLimits

0x1cf9,	// (0x00021474) aid_size_touch_slider_mark

0xeb54,	// (0x0002e2cf) grid_graphic2_catg_pane_ParamLimits

0xeb54,	// (0x0002e2cf) grid_graphic2_catg_pane

0xebea,	// (0x0002e365) popup_grid_graphic2_window_t1_ParamLimits

0xebea,	// (0x0002e365) popup_grid_graphic2_window_t1

0xec00,	// (0x0002e37b) popup_grid_graphic2_window_t2_ParamLimits

0xec00,	// (0x0002e37b) popup_grid_graphic2_window_t2

0x0001,

0xfdc5,	// (0x0002f540) popup_grid_graphic2_window_t_ParamLimits

0xfdc5,	// (0x0002f540) popup_grid_graphic2_window_t

0x33ad,	// (0x00022b28) bg_button_pane_cp05_ParamLimits

0xed5a,	// (0x0002e4d5) cell_graphic2_control_pane_g1_ParamLimits

0xee1d,	// (0x0002e598) cell_graphic2_catg_pane_ParamLimits

0xee1d,	// (0x0002e598) cell_graphic2_catg_pane

0x2a32,	// (0x000221ad) bg_button_pane_cp12

0xee2f,	// (0x0002e5aa) cell_graphic2_catg_pane_g1

0x8e38,	// (0x000285b3) cell_tb_ext_pane_t1_ParamLimits

0x267a,	// (0x00021df5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x267a,	// (0x00021df5) vkb2_top_cell_right_narrow_pane

0x2692,	// (0x00021e0d) vkb2_top_cell_right_wide_pane_ParamLimits

0x2692,	// (0x00021e0d) vkb2_top_cell_right_wide_pane

0x758d,	// (0x00026d08) bg_vkb2_func_pane_ParamLimits

0x758d,	// (0x00026d08) bg_vkb2_func_pane

0x2703,	// (0x00021e7e) vkb2_top_cell_left_pane_g1_ParamLimits

0x758d,	// (0x00026d08) bg_vkb2_fuc_pane_cp03_ParamLimits

0x758d,	// (0x00026d08) bg_vkb2_fuc_pane_cp03

0x2777,	// (0x00021ef2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4ee1,	// (0x0002465c) bg_vkb2_func_pane_g1

0x4ee9,	// (0x00024664) bg_vkb2_func_pane_g2

0x4ef9,	// (0x00024674) bg_vkb2_func_pane_g3

0x4ef1,	// (0x0002466c) bg_vkb2_func_pane_g4

0x4f01,	// (0x0002467c) bg_vkb2_func_pane_g5

0x4f09,	// (0x00024684) bg_vkb2_func_pane_g6

0x4f11,	// (0x0002468c) bg_vkb2_func_pane_g7

0x4f19,	// (0x00024694) bg_vkb2_func_pane_g8

0x4ed9,	// (0x00024654) bg_vkb2_func_pane_g9

0x0008,

0xfe12,	// (0x0002f58d) bg_vkb2_func_pane_g

0x758d,	// (0x00026d08) bg_vkb2_fuc_pane_cp01_ParamLimits

0x758d,	// (0x00026d08) bg_vkb2_fuc_pane_cp01

0x2703,	// (0x00021e7e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2703,	// (0x00021e7e) vkb2_top_cell_right_wide_pane_g1

0x758d,	// (0x00026d08) bg_vkb2_fuc_pane_cp02_ParamLimits

0x758d,	// (0x00026d08) bg_vkb2_fuc_pane_cp02

0x2777,	// (0x00021ef2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2777,	// (0x00021ef2) vkb2_top_cell_right_narrow_pane_g1

0xe3db,	// (0x0002db56) aid_touch_area_decrease_ParamLimits

0xe3db,	// (0x0002db56) aid_touch_area_decrease

0xe415,	// (0x0002db90) aid_touch_area_increase_ParamLimits

0xe415,	// (0x0002db90) aid_touch_area_increase

0xe43d,	// (0x0002dbb8) aid_touch_area_mute_ParamLimits

0xe43d,	// (0x0002dbb8) aid_touch_area_mute

0xe46d,	// (0x0002dbe8) aid_touch_area_slider_ParamLimits

0xe46d,	// (0x0002dbe8) aid_touch_area_slider

0xe4ad,	// (0x0002dc28) popup_slider_window_g4_ParamLimits

0xe4ad,	// (0x0002dc28) popup_slider_window_g4

0xe4d5,	// (0x0002dc50) popup_slider_window_g5_ParamLimits

0xe4d5,	// (0x0002dc50) popup_slider_window_g5

0xe509,	// (0x0002dc84) popup_slider_window_g6_ParamLimits

0xe509,	// (0x0002dc84) popup_slider_window_g6

0x8c0b,	// (0x00028386) popup_slider_window_t2_ParamLimits

0x8c0b,	// (0x00028386) popup_slider_window_t2

0x0001,

0xfd13,	// (0x0002f48e) popup_slider_window_t_ParamLimits

0xfd13,	// (0x0002f48e) popup_slider_window_t

0xe525,	// (0x0002dca0) slider_pane_ParamLimits

0xe525,	// (0x0002dca0) slider_pane

0x98a6,	// (0x00029021) slider_pane_g1_ParamLimits

0x98a6,	// (0x00029021) slider_pane_g1

0x98ba,	// (0x00029035) slider_pane_g2_ParamLimits

0x98ba,	// (0x00029035) slider_pane_g2

0x98d0,	// (0x0002904b) slider_pane_g3_ParamLimits

0x98d0,	// (0x0002904b) slider_pane_g3

0x0003,

0xfe25,	// (0x0002f5a0) slider_pane_g_ParamLimits

0xfe25,	// (0x0002f5a0) slider_pane_g

0xd1b3,	// (0x0002c92e) popup_tb_float_extension_window_ParamLimits

0xd1b3,	// (0x0002c92e) popup_tb_float_extension_window

0x98fc,	// (0x00029077) aid_size_cell_tb_float_ext

0x2a32,	// (0x000221ad) bg_popup_sub_window_cp28

0x9908,	// (0x00029083) grid_tb_float_ext_pane

0x9914,	// (0x0002908f) cell_tb_float_ext_pane_ParamLimits

0x9914,	// (0x0002908f) cell_tb_float_ext_pane

0x9930,	// (0x000290ab) cell_tb_float_ext_pane_g1

0x9939,	// (0x000290b4) grid_highlight_pane_cp12

0xc31f,	// (0x0002ba9a) cell_last_hwr_side_pane_ParamLimits

0xc31f,	// (0x0002ba9a) cell_last_hwr_side_pane

0x751d,	// (0x00026c98) cell_last_hwr_side_pane_g1

0x9942,	// (0x000290bd) cell_last_hwr_side_pane_g2

0x0001,

0xfe2e,	// (0x0002f5a9) cell_last_hwr_side_pane_g

0xc6a5,	// (0x0002be20) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc6a5,	// (0x0002be20) vkb2_area_bottom_space_btn_pane

0x77b5,	// (0x00026f30) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9448,	// (0x00028bc3) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x28c1,	// (0x0002203c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x28df,	// (0x0002205a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x28df,	// (0x0002205a) vkb2_area_bottom_space_btn_pane_g1

0x2919,	// (0x00022094) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2919,	// (0x00022094) vkb2_area_bottom_space_btn_pane_g2

0x294f,	// (0x000220ca) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x294f,	// (0x000220ca) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe33,	// (0x0002f5ae) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe33,	// (0x0002f5ae) vkb2_area_bottom_space_btn_pane_g

0x1ef2,	// (0x0002166d) cel_fep_hwr_func_pane_ParamLimits

0x1ef2,	// (0x0002166d) cel_fep_hwr_func_pane

0xc2f4,	// (0x0002ba6f) cell_hwr_side_button_pane_ParamLimits

0xc2f4,	// (0x0002ba6f) cell_hwr_side_button_pane

0x8e6c,	// (0x000285e7) aid_area_touch_clock_ParamLimits

0x2db0,	// (0x0002252b) bg_uniindi_top_pane_ParamLimits

0x8e80,	// (0x000285fb) uniindi_top_pane_g1_ParamLimits

0x8e96,	// (0x00028611) uniindi_top_pane_g2_ParamLimits

0x8ea2,	// (0x0002861d) uniindi_top_pane_g3_ParamLimits

0x8eb3,	// (0x0002862e) uniindi_top_pane_g4_ParamLimits

0xfd4b,	// (0x0002f4c6) uniindi_top_pane_g_ParamLimits

0x8ec0,	// (0x0002863b) uniindi_top_pane_t1_ParamLimits

0x2db0,	// (0x0002252b) bg_vkb2_func_pane_cp01_ParamLimits

0x2db0,	// (0x0002252b) bg_vkb2_func_pane_cp01

0x994b,	// (0x000290c6) cel_fep_hwr_func_pane_g1_ParamLimits

0x994b,	// (0x000290c6) cel_fep_hwr_func_pane_g1

0x2db0,	// (0x0002252b) bg_vkb2_func_pane_cp02_ParamLimits

0x2db0,	// (0x0002252b) bg_vkb2_func_pane_cp02

0x994b,	// (0x000290c6) cell_hwr_side_button_pane_g1_ParamLimits

0x994b,	// (0x000290c6) cell_hwr_side_button_pane_g1

0x4d5a,	// (0x000244d5) status_pane_g4_ParamLimits

0x4d5a,	// (0x000244d5) status_pane_g4

0x4d74,	// (0x000244ef) status_pane_t1

0x72b9,	// (0x00026a34) form2_midp_gauge_slider_cont_pane

0x72c1,	// (0x00026a3c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdd6d,	// (0x0002d4e8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdd7f,	// (0x0002d4fa) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb17,	// (0x0002f292) form2_midp_gauge_slider_pane_t_ParamLimits

0x72f7,	// (0x00026a72) form2_midp_slider_pane_ParamLimits

0x22af,	// (0x00021a2a) aid_size_cell_func_vkb2_ParamLimits

0x22af,	// (0x00021a2a) aid_size_cell_func_vkb2

0x98e8,	// (0x00029063) slider_pane_g4_ParamLimits

0x98e8,	// (0x00029063) slider_pane_g4

0xc706,	// (0x0002be81) form2_midp_gauge_slider_pane_t2_cp01

0xc714,	// (0x0002be8f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc714,	// (0x0002be8f) form2_midp_gauge_slider_pane_t3_cp01

0x29c4,	// (0x0002213f) form2_midp_slider_pane_cp01

0x2a32,	// (0x000221ad) navi_smil_pane

0x9984,	// (0x000290ff) navi_smil_pane_g1

0x998c,	// (0x00029107) navi_smil_pane_t1

0x9959,	// (0x000290d4) form2_midp_slider_pane_g1

0x9962,	// (0x000290dd) form2_midp_slider_pane_g2

0x996a,	// (0x000290e5) form2_midp_slider_pane_g3

0x9959,	// (0x000290d4) form2_midp_slider_pane_g4

0xee38,	// (0x0002e5b3) form2_midp_slider_pane_g5

0x0004,

0xfe3c,	// (0x0002f5b7) form2_midp_slider_pane_g

0x2989,	// (0x00022104) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2989,	// (0x00022104) vkb2_area_bottom_space_btn_pane_g4

0xd3c7,	// (0x0002cb42) lc0_navi_pane_ParamLimits

0xd3c7,	// (0x0002cb42) lc0_navi_pane

0xd437,	// (0x0002cbb2) lc0_stat_indi_pane_ParamLimits

0xd437,	// (0x0002cbb2) lc0_stat_indi_pane

0xd44c,	// (0x0002cbc7) ls0_title_pane_ParamLimits

0xd44c,	// (0x0002cbc7) ls0_title_pane

0x33ad,	// (0x00022b28) bg_popup_sub_pane_cp14_ParamLimits

0x8e53,	// (0x000285ce) list_uniindi_pane_ParamLimits

0x8e5f,	// (0x000285da) uniindi_top_pane_ParamLimits

0x8efe,	// (0x00028679) list_single_uniindi_pane_g1_ParamLimits

0x8f11,	// (0x0002868c) list_single_uniindi_pane_t1_ParamLimits

0xc731,	// (0x0002beac) lc0_stat_clock_pane_ParamLimits

0xc731,	// (0x0002beac) lc0_stat_clock_pane

0xee41,	// (0x0002e5bc) lc0_stat_indi_pane_g1_ParamLimits

0xee41,	// (0x0002e5bc) lc0_stat_indi_pane_g1

0xee4e,	// (0x0002e5c9) lc0_stat_indi_pane_g2_ParamLimits

0xee4e,	// (0x0002e5c9) lc0_stat_indi_pane_g2

0x0001,

0xfe47,	// (0x0002f5c2) lc0_stat_indi_pane_g_ParamLimits

0xfe47,	// (0x0002f5c2) lc0_stat_indi_pane_g

0xc73e,	// (0x0002beb9) lc0_uni_indicator_pane_ParamLimits

0xc73e,	// (0x0002beb9) lc0_uni_indicator_pane

0xee5b,	// (0x0002e5d6) ls0_title_pane_g1_ParamLimits

0xee5b,	// (0x0002e5d6) ls0_title_pane_g1

0xee6f,	// (0x0002e5ea) ls0_title_pane_t1_ParamLimits

0xee6f,	// (0x0002e5ea) ls0_title_pane_t1

0xc74b,	// (0x0002bec6) lc0_uni_indicator_pane_g1_ParamLimits

0xc74b,	// (0x0002bec6) lc0_uni_indicator_pane_g1

0x99fe,	// (0x00029179) lc0_stat_clock_pane_t1

0x2a32,	// (0x000221ad) main_ai5_pane

0x9a0c,	// (0x00029187) ai5_sk_pane_ParamLimits

0x9a0c,	// (0x00029187) ai5_sk_pane

0xee9d,	// (0x0002e618) cell_ai5_widget_pane_ParamLimits

0xee9d,	// (0x0002e618) cell_ai5_widget_pane

0x9a8f,	// (0x0002920a) aid_size_cell_widget_grid

0x9aa3,	// (0x0002921e) bg_ai5_widget_pane_ParamLimits

0x9aa3,	// (0x0002921e) bg_ai5_widget_pane

0xef2a,	// (0x0002e6a5) cell_ai5_widget_pane_g2

0xef3a,	// (0x0002e6b5) cell_ai5_widget_pane_g3

0xef4e,	// (0x0002e6c9) cell_ai5_widget_pane_g4

0xef5a,	// (0x0002e6d5) cell_ai5_widget_pane_g5

0xef66,	// (0x0002e6e1) cell_ai5_widget_pane_g6

0xef72,	// (0x0002e6ed) cell_ai5_widget_pane_g7

0xefba,	// (0x0002e735) cell_ai5_widget_pane_t1_ParamLimits

0xefba,	// (0x0002e735) cell_ai5_widget_pane_t1

0xefd7,	// (0x0002e752) cell_ai5_widget_pane_t2_ParamLimits

0xefd7,	// (0x0002e752) cell_ai5_widget_pane_t2

0xefef,	// (0x0002e76a) cell_ai5_widget_pane_t3_ParamLimits

0xefef,	// (0x0002e76a) cell_ai5_widget_pane_t3

0xf007,	// (0x0002e782) cell_ai5_widget_pane_t4_ParamLimits

0xf007,	// (0x0002e782) cell_ai5_widget_pane_t4

0xf021,	// (0x0002e79c) cell_ai5_widget_pane_t5_ParamLimits

0xf021,	// (0x0002e79c) cell_ai5_widget_pane_t5

0x9be3,	// (0x0002935e) cell_ai5_widget_pane_t6_ParamLimits

0x9be3,	// (0x0002935e) cell_ai5_widget_pane_t6

0x9bf5,	// (0x00029370) cell_ai5_widget_pane_t7_ParamLimits

0x9bf5,	// (0x00029370) cell_ai5_widget_pane_t7

0xf040,	// (0x0002e7bb) cell_ai5_widget_pane_t8_ParamLimits

0xf040,	// (0x0002e7bb) cell_ai5_widget_pane_t8

0x0009,

0xfe61,	// (0x0002f5dc) cell_ai5_widget_pane_t_ParamLimits

0xfe61,	// (0x0002f5dc) cell_ai5_widget_pane_t

0xf088,	// (0x0002e803) grid_ai5_widget_pane

0x33ad,	// (0x00022b28) highlight_cell_ai5_widget_pane_ParamLimits

0x33ad,	// (0x00022b28) highlight_cell_ai5_widget_pane

0xf09f,	// (0x0002e81a) ai5_sk_left_pane

0xf0a9,	// (0x0002e824) ai5_sk_middle_pane

0xf0b3,	// (0x0002e82e) ai5_sk_right_pane

0x9c8b,	// (0x00029406) bg_ai5_widget_pane_g1_ParamLimits

0x9c8b,	// (0x00029406) bg_ai5_widget_pane_g1

0x9c97,	// (0x00029412) bg_ai5_widget_pane_g2_ParamLimits

0x9c97,	// (0x00029412) bg_ai5_widget_pane_g2

0x9ca3,	// (0x0002941e) bg_ai5_widget_pane_g3_ParamLimits

0x9ca3,	// (0x0002941e) bg_ai5_widget_pane_g3

0x9caf,	// (0x0002942a) bg_ai5_widget_pane_g4_ParamLimits

0x9caf,	// (0x0002942a) bg_ai5_widget_pane_g4

0x9cbb,	// (0x00029436) bg_ai5_widget_pane_g5_ParamLimits

0x9cbb,	// (0x00029436) bg_ai5_widget_pane_g5

0x9cc7,	// (0x00029442) bg_ai5_widget_pane_g6_ParamLimits

0x9cc7,	// (0x00029442) bg_ai5_widget_pane_g6

0x9cd3,	// (0x0002944e) bg_ai5_widget_pane_g7_ParamLimits

0x9cd3,	// (0x0002944e) bg_ai5_widget_pane_g7

0x9cdf,	// (0x0002945a) bg_ai5_widget_pane_g8_ParamLimits

0x9cdf,	// (0x0002945a) bg_ai5_widget_pane_g8

0x9ceb,	// (0x00029466) bg_ai5_widget_pane_g9_ParamLimits

0x9ceb,	// (0x00029466) bg_ai5_widget_pane_g9

0x0008,

0xfe76,	// (0x0002f5f1) bg_ai5_widget_pane_g_ParamLimits

0xfe76,	// (0x0002f5f1) bg_ai5_widget_pane_g

0x9d10,	// (0x0002948b) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d10,	// (0x0002948b) cell_shortcut_ai5_widget_pane

0x2bf2,	// (0x0002236d) bg_cell_shortcut_ai5_widget_pane

0x9d22,	// (0x0002949d) cell_grid_ai5_widget_pane_g1

0x9d2b,	// (0x000294a6) highlight_cell_shortcut_ai5_widget_pane

0x4ee9,	// (0x00024664) ai5_sk_left_pane_g1

0x9d33,	// (0x000294ae) ai5_sk_left_pane_g2

0x9d3b,	// (0x000294b6) ai5_sk_left_pane_g3

0x9d43,	// (0x000294be) ai5_sk_left_pane_g4

0x0003,

0xfe89,	// (0x0002f604) ai5_sk_left_pane_g

0x9d4b,	// (0x000294c6) ai5_sk_left_pane_t1

0x4ee1,	// (0x0002465c) ai5_sk_right_pane_g1

0x9d59,	// (0x000294d4) ai5_sk_right_pane_g2

0x9d61,	// (0x000294dc) ai5_sk_right_pane_g3

0x9d69,	// (0x000294e4) ai5_sk_right_pane_g4

0x0003,

0xfe92,	// (0x0002f60d) ai5_sk_right_pane_g

0x9d71,	// (0x000294ec) ai5_sk_right_pane_t1

0x4ee1,	// (0x0002465c) ai5_sk_middle_pane_g1

0x4ee9,	// (0x00024664) ai5_sk_middle_pane_g2

0x4f01,	// (0x0002467c) ai5_sk_middle_pane_g3

0x9d61,	// (0x000294dc) ai5_sk_middle_pane_g4

0x9d3b,	// (0x000294b6) ai5_sk_middle_pane_g5

0x9d7f,	// (0x000294fa) ai5_sk_middle_pane_g6

0xf0bd,	// (0x0002e838) ai5_sk_middle_pane_g7

0x0006,

0xfe9b,	// (0x0002f616) ai5_sk_middle_pane_g

0xd27d,	// (0x0002c9f8) aid_touch_area_size_lc0_ParamLimits

0xd27d,	// (0x0002c9f8) aid_touch_area_size_lc0

0x2091,	// (0x0002180c) cell_hwr_candidate_pane_t1_ParamLimits

0x4a12,	// (0x0002418d) aid_touch_navi_pane

0xd556,	// (0x0002ccd1) status_dt_navi_pane_ParamLimits

0xd556,	// (0x0002ccd1) status_dt_navi_pane

0xd56e,	// (0x0002cce9) status_dt_sta_pane_ParamLimits

0xd56e,	// (0x0002cce9) status_dt_sta_pane

0xf0c5,	// (0x0002e840) dt_sta_controll_pane

0xf0d2,	// (0x0002e84d) dt_sta_indi_pane

0xf0df,	// (0x0002e85a) dt_sta_title_pane

0x2db0,	// (0x0002252b) bg_dt_sta_indi_pane_ParamLimits

0x2db0,	// (0x0002252b) bg_dt_sta_indi_pane

0xf0f1,	// (0x0002e86c) dt_sta_battery_pane

0xf0f9,	// (0x0002e874) dt_sta_indi_pane_g1

0xf102,	// (0x0002e87d) dt_sta_indi_pane_g2

0xf10b,	// (0x0002e886) dt_sta_indi_pane_g3

0x0002,

0xfeaa,	// (0x0002f625) dt_sta_indi_pane_g

0xf114,	// (0x0002e88f) dt_sta_signal_pane

0x33ad,	// (0x00022b28) bg_dt_sta_title_pane_ParamLimits

0x33ad,	// (0x00022b28) bg_dt_sta_title_pane

0xf11d,	// (0x0002e898) dt_sta_title_pane_g1

0xf125,	// (0x0002e8a0) dt_sta_title_pane_t1_ParamLimits

0xf125,	// (0x0002e8a0) dt_sta_title_pane_t1

0x2a32,	// (0x000221ad) bg_dt_sta_control_pane

0xf13a,	// (0x0002e8b5) dt_sta_controll_pane_g1

0xf143,	// (0x0002e8be) bg_dt_sta_title_pane_g1

0xf14c,	// (0x0002e8c7) bg_dt_sta_title_pane_g2

0xf155,	// (0x0002e8d0) bg_dt_sta_title_pane_g3

0x0002,

0xfeb1,	// (0x0002f62c) bg_dt_sta_title_pane_g

0x751d,	// (0x00026c98) bg_dt_sta_indi_pane_g1

0x9e2d,	// (0x000295a8) dt_sta_signal_pane_g1

0x9e35,	// (0x000295b0) dt_sta_signal_pane_g2

0x0001,

0xfeb8,	// (0x0002f633) dt_sta_signal_pane_g

0x9e3d,	// (0x000295b8) dt_sta_battery_pane_g1

0x9e46,	// (0x000295c1) dt_sta_battery_pane_t1

0x751d,	// (0x00026c98) bg_dt_sta_control_pane_g1

0x3b09,	// (0x00023284) fep_china_uni_eep_pane

0x3b11,	// (0x0002328c) fep_china_uni_entry_pane_ParamLimits

0x3b21,	// (0x0002329c) popup_fep_china_uni_window_g1_ParamLimits

0x3b31,	// (0x000232ac) popup_fep_china_uni_window_g2_ParamLimits

0x3b31,	// (0x000232ac) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0002eed3) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0002eed3) popup_fep_china_uni_window_g

0x9e55,	// (0x000295d0) fep_china_uni_eep_pane_g1

0x9e5d,	// (0x000295d8) fep_china_uni_eep_pane_t1

0x997b,	// (0x000290f6) aid_touch_area_size_smil_player

0x4b6a,	// (0x000242e5) lc0_clock_pane

0x4d68,	// (0x000244e3) status_pane_g5_ParamLimits

0x4d68,	// (0x000244e3) status_pane_g5

0xccdd,	// (0x0002c458) popup_keymap_window

0x4d26,	// (0x000244a1) status_icon_pane

0xef3a,	// (0x0002e6b5) cell_ai5_widget_pane_g3_ParamLimits

0xef4e,	// (0x0002e6c9) cell_ai5_widget_pane_g4_ParamLimits

0xef5a,	// (0x0002e6d5) cell_ai5_widget_pane_g5_ParamLimits

0xef7e,	// (0x0002e6f9) cell_ai5_widget_pane_g8_ParamLimits

0xef7e,	// (0x0002e6f9) cell_ai5_widget_pane_g8

0xef92,	// (0x0002e70d) cell_ai5_widget_pane_g9_ParamLimits

0xef92,	// (0x0002e70d) cell_ai5_widget_pane_g9

0xefa6,	// (0x0002e721) cell_ai5_widget_pane_g10_ParamLimits

0xefa6,	// (0x0002e721) cell_ai5_widget_pane_g10

0x9e6c,	// (0x000295e7) status_icon_pane_g1

0x2a32,	// (0x000221ad) bg_popup_sub_pane_cp13

0x9e74,	// (0x000295ef) popup_keymap_window_t1

0xcae9,	// (0x0002c264) control_pane_g6_ParamLimits

0xcae9,	// (0x0002c264) control_pane_g6

0xcaf6,	// (0x0002c271) control_pane_g7_ParamLimits

0xcaf6,	// (0x0002c271) control_pane_g7

0xcb03,	// (0x0002c27e) control_pane_g8_ParamLimits

0xcb03,	// (0x0002c27e) control_pane_g8

0xf0c5,	// (0x0002e840) dt_sta_controll_pane_ParamLimits

0xf0d2,	// (0x0002e84d) dt_sta_indi_pane_ParamLimits

0xf0df,	// (0x0002e85a) dt_sta_title_pane_ParamLimits

0x32e5,	// (0x00022a60) aid_size_touch_scroll_bar_cale

0x120e,	// (0x00020989) popup_discreet_window_ParamLimits

0x120e,	// (0x00020989) popup_discreet_window

0xbba9,	// (0x0002b324) popup_sk_window

0x554e,	// (0x00024cc9) bg_popup_sub_pane_cp28_ParamLimits

0x554e,	// (0x00024cc9) bg_popup_sub_pane_cp28

0x9e82,	// (0x000295fd) popup_discreet_window_g1_ParamLimits

0x9e82,	// (0x000295fd) popup_discreet_window_g1

0x9ea2,	// (0x0002961d) popup_discreet_window_t1_ParamLimits

0x9ea2,	// (0x0002961d) popup_discreet_window_t1

0x9ec0,	// (0x0002963b) popup_discreet_window_t2_ParamLimits

0x9ec0,	// (0x0002963b) popup_discreet_window_t2

0x0002,

0xfebd,	// (0x0002f638) popup_discreet_window_t_ParamLimits

0xfebd,	// (0x0002f638) popup_discreet_window_t

0x29fa,	// (0x00022175) popup_sk_window_g1

0x2a04,	// (0x0002217f) popup_sk_window_g2

0x0001,

0xfec4,	// (0x0002f63f) popup_sk_window_g

0x9f12,	// (0x0002968d) popup_sk_window_t1

0x9f20,	// (0x0002969b) popup_sk_window_t1_copy1

0xef2a,	// (0x0002e6a5) cell_ai5_widget_pane_g2_ParamLimits

0xf052,	// (0x0002e7cd) cell_ai5_widget_pane_t9_ParamLimits

0xf052,	// (0x0002e7cd) cell_ai5_widget_pane_t9

0x2a32,	// (0x000221ad) main_fep_fshwr2_pane

0xf15e,	// (0x0002e8d9) aid_fshwr2_btn_pane

0xf166,	// (0x0002e8e1) aid_fshwr2_syb_pane

0xf16e,	// (0x0002e8e9) aid_fshwr2_txt_pane

0xf176,	// (0x0002e8f1) fshwr2_func_candi_pane

0xf180,	// (0x0002e8fb) fshwr2_hwr_syb_pane

0xf18c,	// (0x0002e907) fshwr2_icf_pane

0x2a32,	// (0x000221ad) fshwr2_icf_bg_pane

0xf196,	// (0x0002e911) fshwr2_icf_pane_t1_ParamLimits

0xf196,	// (0x0002e911) fshwr2_icf_pane_t1

0x751d,	// (0x00026c98) fshwr2_func_candi_pane_g1

0x9f93,	// (0x0002970e) fshwr2_func_candi_row_pane_ParamLimits

0x9f93,	// (0x0002970e) fshwr2_func_candi_row_pane

0xf1ae,	// (0x0002e929) cell_fshwr2_syb_pane_ParamLimits

0xf1ae,	// (0x0002e929) cell_fshwr2_syb_pane

0x77b5,	// (0x00026f30) fshwr2_hwr_syb_pane_g1_ParamLimits

0x77b5,	// (0x00026f30) fshwr2_hwr_syb_pane_g1

0x2a32,	// (0x000221ad) bg_popup_call_pane_cp01

0x9fbe,	// (0x00029739) fshwr2_func_candi_cell_pane_ParamLimits

0x9fbe,	// (0x00029739) fshwr2_func_candi_cell_pane

0x9ff0,	// (0x0002976b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9ff0,	// (0x0002976b) fshwr2_func_candi_cell_bg_pane

0xa00a,	// (0x00029785) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa00a,	// (0x00029785) fshwr2_func_candi_cell_pane_g1

0xa02a,	// (0x000297a5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa02a,	// (0x000297a5) fshwr2_func_candi_cell_pane_t1

0x2a32,	// (0x000221ad) bg_button_pane_cp08

0x4017,	// (0x00023792) cell_fshwr2_syb_bg_pane

0xf1c7,	// (0x0002e942) cell_fshwr2_syb_bg_pane_g1

0xf1cf,	// (0x0002e94a) cell_fshwr2_syb_bg_pane_t1

0x33ad,	// (0x00022b28) main_tmo_pane

0xd888,	// (0x0002d003) uni_indicator_pane_g1_ParamLimits

0xd89d,	// (0x0002d018) uni_indicator_pane_g2_ParamLimits

0xd8b2,	// (0x0002d02d) uni_indicator_pane_g3_ParamLimits

0xd8c8,	// (0x0002d043) uni_indicator_pane_g4_ParamLimits

0xd8c8,	// (0x0002d043) uni_indicator_pane_g4

0xd8dc,	// (0x0002d057) uni_indicator_pane_g5_ParamLimits

0xd8dc,	// (0x0002d057) uni_indicator_pane_g5

0xd8f0,	// (0x0002d06b) uni_indicator_pane_g6_ParamLimits

0xd8f0,	// (0x0002d06b) uni_indicator_pane_g6

0xf950,	// (0x0002f0cb) uni_indicator_pane_g_ParamLimits

0xe3ab,	// (0x0002db26) popup_tmo_note_window_ParamLimits

0xe3ab,	// (0x0002db26) popup_tmo_note_window

0x2a32,	// (0x000221ad) fshwr2_bg_pane

0xa01b,	// (0x00029796) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa01b,	// (0x00029796) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec9,	// (0x0002f644) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec9,	// (0x0002f644) fshwr2_func_candi_cell_pane_g

0x751d,	// (0x00026c98) bg_popup_window_pane_cp01

0xa054,	// (0x000297cf) bg_popup_window_pane_g1_cp01

0xa05d,	// (0x000297d8) bg_popup_window_pane_cp22_ParamLimits

0xa05d,	// (0x000297d8) bg_popup_window_pane_cp22

0xa06b,	// (0x000297e6) listscroll_tmo_link_pane_ParamLimits

0xa06b,	// (0x000297e6) listscroll_tmo_link_pane

0xa0ab,	// (0x00029826) popup_tmo_note_window_g1_ParamLimits

0xa0ab,	// (0x00029826) popup_tmo_note_window_g1

0xa0b8,	// (0x00029833) tmo_note_info_pane_ParamLimits

0xa0b8,	// (0x00029833) tmo_note_info_pane

0xf1de,	// (0x0002e959) list_tmo_note_info_pane_g1_ParamLimits

0xf1de,	// (0x0002e959) list_tmo_note_info_pane_g1

0xa0e9,	// (0x00029864) list_tmo_note_info_pane_g2_ParamLimits

0xa0e9,	// (0x00029864) list_tmo_note_info_pane_g2

0x0001,

0xfece,	// (0x0002f649) list_tmo_note_info_pane_g_ParamLimits

0xfece,	// (0x0002f649) list_tmo_note_info_pane_g

0xa105,	// (0x00029880) list_tmo_note_info_text_pane_ParamLimits

0xa105,	// (0x00029880) list_tmo_note_info_text_pane

0xa18a,	// (0x00029905) list_tmo_link_pane

0xa197,	// (0x00029912) scroll_pane_cp20

0xa1a4,	// (0x0002991f) list_single_tmo_link_pane_ParamLimits

0xa1a4,	// (0x0002991f) list_single_tmo_link_pane

0xa1b4,	// (0x0002992f) list_single_tmo_link_pane_t1

0xa1c2,	// (0x0002993d) list_tmo_note_info_text_pane_t1_ParamLimits

0xa1c2,	// (0x0002993d) list_tmo_note_info_text_pane_t1

0xc76a,	// (0x0002bee5) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc76a,	// (0x0002bee5) aid_size_touch_scroll_bar_cp01

0xb67f,	// (0x0002adfa) aid_size_touch_slider_marker

0xbb99,	// (0x0002b314) popup_settings_window_ParamLimits

0xbb99,	// (0x0002b314) popup_settings_window

0x07a4,	// (0x0001ff1f) popup_candi_list_indi_window

0x4a12,	// (0x0002418d) aid_touch_navi_pane_ParamLimits

0x2202,	// (0x0002197d) rs_clock_indi_pane

0x220b,	// (0x00021986) sctrl_sk_bottom_pane_ParamLimits

0x221c,	// (0x00021997) sctrl_sk_top_pane_ParamLimits

0x2301,	// (0x00021a7c) popup_fep_tooltip_window

0x9a8f,	// (0x0002920a) aid_size_cell_widget_grid_ParamLimits

0xef1e,	// (0x0002e699) cell_ai5_widget_pane_g1_ParamLimits

0xef1e,	// (0x0002e699) cell_ai5_widget_pane_g1

0xef66,	// (0x0002e6e1) cell_ai5_widget_pane_g6_ParamLimits

0xef72,	// (0x0002e6ed) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4c,	// (0x0002f5c7) cell_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x0002f5c7) cell_ai5_widget_pane_g

0xf076,	// (0x0002e7f1) cell_ai5_widget_pane_t10_ParamLimits

0xf076,	// (0x0002e7f1) cell_ai5_widget_pane_t10

0xf088,	// (0x0002e803) grid_ai5_widget_pane_ParamLimits

0x9cf7,	// (0x00029472) cell_contacts_ai5_widget_pane_ParamLimits

0x9cf7,	// (0x00029472) cell_contacts_ai5_widget_pane

0x9ed5,	// (0x00029650) popup_discreet_window_t3_ParamLimits

0x9ed5,	// (0x00029650) popup_discreet_window_t3

0x9f64,	// (0x000296df) popup_fshwr2_char_preview_window_ParamLimits

0x9f64,	// (0x000296df) popup_fshwr2_char_preview_window

0xf1f5,	// (0x0002e970) tmo_note_info_pane_t1

0xf20a,	// (0x0002e985) tmo_note_info_pane_t2

0xf223,	// (0x0002e99e) tmo_note_info_pane_t3

0xa166,	// (0x000298e1) tmo_note_info_pane_t4

0xa178,	// (0x000298f3) tmo_note_info_pane_t5

0x0004,

0xfed3,	// (0x0002f64e) tmo_note_info_pane_t

0xa18a,	// (0x00029905) list_tmo_link_pane_ParamLimits

0xa197,	// (0x00029912) scroll_pane_cp20_ParamLimits

0x2a32,	// (0x000221ad) bg_popup_fep_char_preview_window_cp01

0xa1db,	// (0x00029956) popup_fshwr2_char_preview_window_t1

0xa1e9,	// (0x00029964) popup_candi_list_indi_window_g1

0xa1f2,	// (0x0002996d) bg_cell_contacts_ai5_widget_pane

0xa1fe,	// (0x00029979) cell_contacts_ai5_widget_pane_g1

0xa212,	// (0x0002998d) cell_contacts_ai5_widget_pane_g2

0xa221,	// (0x0002999c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfede,	// (0x0002f659) cell_contacts_ai5_widget_pane_g

0xa234,	// (0x000299af) cell_contacts_ai5_widget_pane_t1

0x33ad,	// (0x00022b28) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf29d,	// (0x0002ea18) settings_container_pane

0x4017,	// (0x00023792) listscroll_set_pane_copy1

0x6c94,	// (0x0002640f) scroll_pane_cp121_copy1

0xa2ba,	// (0x00029a35) set_content_pane_copy1

0xf2a9,	// (0x0002ea24) aid_height_set_list_copy1_ParamLimits

0xf2a9,	// (0x0002ea24) aid_height_set_list_copy1

0x62e1,	// (0x00025a5c) aid_size_parent_copy1_ParamLimits

0x62e1,	// (0x00025a5c) aid_size_parent_copy1

0xf2b5,	// (0x0002ea30) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf2b5,	// (0x0002ea30) button_value_adjust_pane_cp6_copy1

0x439d,	// (0x00023b18) list_highlight_pane_cp2_copy1_ParamLimits

0x439d,	// (0x00023b18) list_highlight_pane_cp2_copy1

0xf2c9,	// (0x0002ea44) list_set_pane_copy1_ParamLimits

0xf2c9,	// (0x0002ea44) list_set_pane_copy1

0xf238,	// (0x0002e9b3) main_pane_set_t1_copy1_ParamLimits

0xf238,	// (0x0002e9b3) main_pane_set_t1_copy1

0xf272,	// (0x0002e9ed) main_pane_set_t2_copy1_ParamLimits

0xf272,	// (0x0002e9ed) main_pane_set_t2_copy1

0xf390,	// (0x0002eb0b) main_pane_set_t3_copy1

0xf39e,	// (0x0002eb19) main_pane_set_t4_copy1

0xf291,	// (0x0002ea0c) set_content_pane_g1_copy1_ParamLimits

0xf291,	// (0x0002ea0c) set_content_pane_g1_copy1

0xf3ac,	// (0x0002eb27) setting_code_pane_copy1

0xa3cf,	// (0x00029b4a) setting_slider_graphic_pane_copy1

0xa3cf,	// (0x00029b4a) setting_slider_pane_copy1

0xa3d9,	// (0x00029b54) setting_text_pane_copy1

0xa3e3,	// (0x00029b5e) setting_volume_pane_copy1

0xf3b6,	// (0x0002eb31) settings_code_pane_cp2_copy1

0xf3be,	// (0x0002eb39) settings_code_pane_cp_copy1_ParamLimits

0xf3be,	// (0x0002eb39) settings_code_pane_cp_copy1

0xf3d2,	// (0x0002eb4d) volume_set_pane_copy1

0xf3de,	// (0x0002eb59) volume_set_pane_g10_copy1

0xf3ea,	// (0x0002eb65) volume_set_pane_g1_copy1

0xf3f4,	// (0x0002eb6f) volume_set_pane_g2_copy1

0xf3fe,	// (0x0002eb79) volume_set_pane_g3_copy1

0xf408,	// (0x0002eb83) volume_set_pane_g4_copy1

0xf412,	// (0x0002eb8d) volume_set_pane_g5_copy1

0xf41c,	// (0x0002eb97) volume_set_pane_g6_copy1

0xf426,	// (0x0002eba1) volume_set_pane_g7_copy1

0xf430,	// (0x0002ebab) volume_set_pane_g8_copy1

0xf43a,	// (0x0002ebb5) volume_set_pane_g9_copy1

0x2b26,	// (0x000222a1) bg_set_opt_pane_cp_copy1_ParamLimits

0x2b26,	// (0x000222a1) bg_set_opt_pane_cp_copy1

0xa47a,	// (0x00029bf5) setting_slider_pane_t1_copy1_ParamLimits

0xa47a,	// (0x00029bf5) setting_slider_pane_t1_copy1

0xf444,	// (0x0002ebbf) setting_slider_pane_t2_copy1_ParamLimits

0xf444,	// (0x0002ebbf) setting_slider_pane_t2_copy1

0xf45e,	// (0x0002ebd9) setting_slider_pane_t3_copy1_ParamLimits

0xf45e,	// (0x0002ebd9) setting_slider_pane_t3_copy1

0xf476,	// (0x0002ebf1) slider_set_pane_copy1_ParamLimits

0xf476,	// (0x0002ebf1) slider_set_pane_copy1

0x3414,	// (0x00022b8f) set_opt_bg_pane_g1_copy2

0x341c,	// (0x00022b97) set_opt_bg_pane_g2_copy2

0xa4e0,	// (0x00029c5b) set_opt_bg_pane_g3_copy2

0x342c,	// (0x00022ba7) set_opt_bg_pane_g4_copy2

0x3434,	// (0x00022baf) set_opt_bg_pane_g5_copy2

0x343c,	// (0x00022bb7) set_opt_bg_pane_g6_copy2

0xf48c,	// (0x0002ec07) set_opt_bg_pane_g7_copy2

0xa4f4,	// (0x00029c6f) set_opt_bg_pane_g8_copy2

0xa4fe,	// (0x00029c79) set_opt_bg_pane_g9_copy2

0xa508,	// (0x00029c83) aid_size_touch_slider_mark_copy1_ParamLimits

0xa508,	// (0x00029c83) aid_size_touch_slider_mark_copy1

0xa51c,	// (0x00029c97) slider_set_pane_g1_copy1

0xa525,	// (0x00029ca0) slider_set_pane_g2_copy1

0x6b6b,	// (0x000262e6) slider_set_pane_g3_copy1_ParamLimits

0x6b6b,	// (0x000262e6) slider_set_pane_g3_copy1

0x6b7f,	// (0x000262fa) slider_set_pane_g4_copy1_ParamLimits

0x6b7f,	// (0x000262fa) slider_set_pane_g4_copy1

0x6b97,	// (0x00026312) slider_set_pane_g5_copy1_ParamLimits

0x6b97,	// (0x00026312) slider_set_pane_g5_copy1

0x6b6b,	// (0x000262e6) slider_set_pane_g6_copy1_ParamLimits

0x6b6b,	// (0x000262e6) slider_set_pane_g6_copy1

0xf496,	// (0x0002ec11) slider_set_pane_g7_copy1_ParamLimits

0xf496,	// (0x0002ec11) slider_set_pane_g7_copy1

0x2a46,	// (0x000221c1) bg_set_opt_pane_cp2_copy1

0xa543,	// (0x00029cbe) setting_slider_graphic_pane_g1_copy1

0xf4ac,	// (0x0002ec27) setting_slider_graphic_pane_t1_copy1

0xf4bc,	// (0x0002ec37) setting_slider_graphic_pane_t2_copy1

0xf4cc,	// (0x0002ec47) slider_set_pane_cp_copy1

0xa57c,	// (0x00029cf7) input_focus_pane_cp1_copy1

0xa585,	// (0x00029d00) list_set_text_pane_copy1

0xa58d,	// (0x00029d08) setting_text_pane_g1_copy1

0xf56b,	// (0x0002ece6) set_text_pane_t1_copy1

0xa57c,	// (0x00029cf7) input_focus_pane_cp2_copy1

0xa58d,	// (0x00029d08) setting_code_pane_g1_copy1

0xf4d4,	// (0x0002ec4f) setting_code_pane_t1_copy1

0xf4e2,	// (0x0002ec5d) list_set_graphic_pane_copy1

0x2a46,	// (0x000221c1) bg_set_opt_pane_cp4_copy1

0xc9f5,	// (0x0002c170) list_set_graphic_pane_g1_copy1_ParamLimits

0xc9f5,	// (0x0002c170) list_set_graphic_pane_g1_copy1

0xf4f4,	// (0x0002ec6f) list_set_graphic_pane_g2_copy1

0xca0d,	// (0x0002c188) list_set_graphic_pane_t1_copy1_ParamLimits

0xca0d,	// (0x0002c188) list_set_graphic_pane_t1_copy1

0x751d,	// (0x00026c98) rs_clock_indi_pane_g1

0xa5be,	// (0x00029d39) rs_clock_indi_pane_t1

0xa5cc,	// (0x00029d47) rs_indi_pane

0xa5d4,	// (0x00029d4f) rs_indi_pane_g1

0xa5dd,	// (0x00029d58) rs_indi_pane_g2

0xa5e6,	// (0x00029d61) rs_indi_pane_g3

0x0002,

0xfee5,	// (0x0002f660) rs_indi_pane_g

0x4017,	// (0x00023792) bg_popup_preview_window_pane_cp03

0xa5ef,	// (0x00029d6a) popup_fep_tooltip_window_t1

0x81d1,	// (0x0002794c) popup_note2_window_g2_ParamLimits

0x81d1,	// (0x0002794c) popup_note2_window_g2

0x0001,

0xfc83,	// (0x0002f3fe) popup_note2_window_g_ParamLimits

0xfc83,	// (0x0002f3fe) popup_note2_window_g

0x86d9,	// (0x00027e54) bg_popup_sub_pane_cp11_ParamLimits

0x86e6,	// (0x00027e61) cell_ai3_links_pane_g1_ParamLimits

0x86fd,	// (0x00027e78) cell_ai3_links_pane_t1

0xf56b,	// (0x0002ece6) set_text_pane_t1_copy1_ParamLimits

0x3f24,	// (0x0002369f) cell_graphic_popup_pane_cp2_ParamLimits

0x3f24,	// (0x0002369f) cell_graphic_popup_pane_cp2

0xa5fd,	// (0x00029d78) cell_graphic_popup_pane_g1_cp2

0x30f8,	// (0x00022873) cell_graphic_popup_pane_g2_cp2

0xa605,	// (0x00029d80) cell_graphic_popup_pane_g3_cp2

0xa60d,	// (0x00029d88) cell_graphic_popup_pane_t2_cp2

0x3109,	// (0x00022884) grid_highlight_pane_cp3_cp2

0x3760,	// (0x00022edb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x33ad,	// (0x00022b28) main_tmo_pane_ParamLimits

0xe39f,	// (0x0002db1a) popup_tmo_big_image_note_window

0xef0e,	// (0x0002e689) cell_ai5_widget_list_pane

0xef16,	// (0x0002e691) cell_ai5_widget_lrg_icon_pane

0xf1f5,	// (0x0002e970) tmo_note_info_pane_t1_ParamLimits

0xf20a,	// (0x0002e985) tmo_note_info_pane_t2_ParamLimits

0xf223,	// (0x0002e99e) tmo_note_info_pane_t3_ParamLimits

0xa166,	// (0x000298e1) tmo_note_info_pane_t4_ParamLimits

0xa178,	// (0x000298f3) tmo_note_info_pane_t5_ParamLimits

0xfed3,	// (0x0002f64e) tmo_note_info_pane_t_ParamLimits

0xf29d,	// (0x0002ea18) settings_container_pane_ParamLimits

0xa574,	// (0x00029cef) indicator_popup_pane_cp5

0xa574,	// (0x00029cef) indicator_popup_pane_cp6

0xf4e2,	// (0x0002ec5d) list_set_graphic_pane_copy1_ParamLimits

0x2a32,	// (0x000221ad) bg_popup_window_pane_cp23

0xa61b,	// (0x00029d96) popup_tmo_big_image_note_window_g1

0xa627,	// (0x00029da2) popup_tmo_big_image_note_window_t1

0xa637,	// (0x00029db2) popup_tmo_big_image_note_window_t2

0xa647,	// (0x00029dc2) popup_tmo_big_image_note_window_t3

0x0002,

0xfeec,	// (0x0002f667) popup_tmo_big_image_note_window_t

0xf4fc,	// (0x0002ec77) cell_ai5_widget_lrg_icon_pane_g1

0xf504,	// (0x0002ec7f) cell_ai5_widget_lrg_icon_pane_t1

0xf512,	// (0x0002ec8d) cell_ai5_widget_list_row_pane_ParamLimits

0xf512,	// (0x0002ec8d) cell_ai5_widget_list_row_pane

0xf52b,	// (0x0002eca6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52b,	// (0x0002eca6) cell_ai5_widget_list_row_pane_g1

0xf538,	// (0x0002ecb3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf538,	// (0x0002ecb3) cell_ai5_widget_list_row_pane_t1

0xf550,	// (0x0002eccb) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf550,	// (0x0002eccb) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef3,	// (0x0002f66e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef3,	// (0x0002f66e) cell_ai5_widget_list_row_pane_t

0x2a32,	// (0x000221ad) main_fep_vtchi_ss_pane

0xa6bd,	// (0x00029e38) popup_fep_char_pre_window

0xa6c5,	// (0x00029e40) popup_fep_ituss_window

0xa6d0,	// (0x00029e4b) popup_fep_vkbss_window

0xa6db,	// (0x00029e56) grid_vkbss_keypad_pane_ParamLimits

0xa6db,	// (0x00029e56) grid_vkbss_keypad_pane

0xa6eb,	// (0x00029e66) ituss_keypad_pane

0xa6f3,	// (0x00029e6e) aid_vkbss_key_offset_ParamLimits

0xa6f3,	// (0x00029e6e) aid_vkbss_key_offset

0xa702,	// (0x00029e7d) cell_vkbss_key_pane_ParamLimits

0xa702,	// (0x00029e7d) cell_vkbss_key_pane

0xa718,	// (0x00029e93) bg_cell_vkbss_key_g1_ParamLimits

0xa718,	// (0x00029e93) bg_cell_vkbss_key_g1

0xa724,	// (0x00029e9f) cell_vkbss_key_3p_pane_ParamLimits

0xa724,	// (0x00029e9f) cell_vkbss_key_3p_pane

0xa73e,	// (0x00029eb9) cell_vkbss_key_g1_ParamLimits

0xa73e,	// (0x00029eb9) cell_vkbss_key_g1

0xa758,	// (0x00029ed3) cell_vkbss_key_t1_ParamLimits

0xa758,	// (0x00029ed3) cell_vkbss_key_t1

0xa783,	// (0x00029efe) cell_ituss_key_pane_ParamLimits

0xa783,	// (0x00029efe) cell_ituss_key_pane

0xa792,	// (0x00029f0d) bg_cell_ituss_key_g1_ParamLimits

0xa792,	// (0x00029f0d) bg_cell_ituss_key_g1

0xa79e,	// (0x00029f19) cell_ituss_key_pane_g1_ParamLimits

0xa79e,	// (0x00029f19) cell_ituss_key_pane_g1

0xa7aa,	// (0x00029f25) cell_ituss_key_pane_g2_ParamLimits

0xa7aa,	// (0x00029f25) cell_ituss_key_pane_g2

0x0001,

0xfef8,	// (0x0002f673) cell_ituss_key_pane_g_ParamLimits

0xfef8,	// (0x0002f673) cell_ituss_key_pane_g

0xa7be,	// (0x00029f39) cell_ituss_key_t1_ParamLimits

0xa7be,	// (0x00029f39) cell_ituss_key_t1

0xa7dc,	// (0x00029f57) cell_ituss_key_t2_ParamLimits

0xa7dc,	// (0x00029f57) cell_ituss_key_t2

0xa7fb,	// (0x00029f76) cell_ituss_key_t3_ParamLimits

0xa7fb,	// (0x00029f76) cell_ituss_key_t3

0xa81a,	// (0x00029f95) cell_ituss_key_t4_ParamLimits

0xa81a,	// (0x00029f95) cell_ituss_key_t4

0x0003,

0xfefd,	// (0x0002f678) cell_ituss_key_t_ParamLimits

0xfefd,	// (0x0002f678) cell_ituss_key_t

0xa839,	// (0x00029fb4) cell_vkbss_key_3p_pane_g1

0xa841,	// (0x00029fbc) cell_vkbss_key_3p_pane_g2

0xa849,	// (0x00029fc4) cell_vkbss_key_3p_pane_g3

0x0002,

0xff06,	// (0x0002f681) cell_vkbss_key_3p_pane_g

0x2a32,	// (0x000221ad) bg_popup_fep_char_preview_window_cp02

0xa851,	// (0x00029fcc) popup_fep_char_pre_window_t1

0xef04,	// (0x0002e67f) main_ai5_sk_pane

0xa1f2,	// (0x0002996d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa1fe,	// (0x00029979) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa212,	// (0x0002998d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa221,	// (0x0002999c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfede,	// (0x0002f659) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa234,	// (0x000299af) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x33ad,	// (0x00022b28) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf562,	// (0x0002ecdd) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small

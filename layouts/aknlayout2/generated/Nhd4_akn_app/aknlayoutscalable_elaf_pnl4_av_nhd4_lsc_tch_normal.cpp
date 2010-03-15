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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00000000 };

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
0xb3ec,	// (0x0000b3ec) Screen

0xb3f8,	// (0x0000b3f8) application_window_ParamLimits

0xb3f8,	// (0x0000b3f8) application_window

0x002e,	// (0x0000002e) screen_g1

0xb430,	// (0x0000b430) area_bottom_pane_ParamLimits

0xb430,	// (0x0000b430) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xca1e,	// (0x0000ca1e) battery_pane_ParamLimits

0xca1e,	// (0x0000ca1e) battery_pane

0x403f,	// (0x0000403f) bg_status_flat_pane_g8

0x4047,	// (0x00004047) bg_status_flat_pane_g9

0x31b3,	// (0x000031b3) context_pane_ParamLimits

0x31b3,	// (0x000031b3) context_pane

0xcb89,	// (0x0000cb89) navi_pane_ParamLimits

0xcb89,	// (0x0000cb89) navi_pane

0xcc01,	// (0x0000cc01) signal_pane_ParamLimits

0xcc01,	// (0x0000cc01) signal_pane

0x0008,

0xad48,	// (0x0000ad48) bg_status_flat_pane_g

0xcc91,	// (0x0000cc91) status_pane_g1_ParamLimits

0xcc91,	// (0x0000cc91) status_pane_g1

0xcca7,	// (0x0000cca7) status_pane_g2_ParamLimits

0xcca7,	// (0x0000cca7) status_pane_g2

0x33d4,	// (0x000033d4) status_pane_g3_ParamLimits

0x33d4,	// (0x000033d4) status_pane_g3

0x0004,

0xf075,	// (0x0000f075) status_pane_g_ParamLimits

0xf075,	// (0x0000f075) status_pane_g

0xccb3,	// (0x0000ccb3) title_pane_ParamLimits

0xccb3,	// (0x0000ccb3) title_pane

0xcd16,	// (0x0000cd16) uni_indicator_pane_ParamLimits

0xcd16,	// (0x0000cd16) uni_indicator_pane

0x2a60,	// (0x00002a60) bg_list_pane_ParamLimits

0x2a60,	// (0x00002a60) bg_list_pane

0x2a80,	// (0x00002a80) find_pane

0xc2f9,	// (0x0000c2f9) listscroll_app_pane_ParamLimits

0xc2f9,	// (0x0000c2f9) listscroll_app_pane

0x2a94,	// (0x00002a94) listscroll_form_pane

0x2a9c,	// (0x00002a9c) listscroll_gen_pane_ParamLimits

0x2a9c,	// (0x00002a9c) listscroll_gen_pane

0x2a94,	// (0x00002a94) listscroll_set_pane

0x4e07,	// (0x00004e07) main_idle_act_pane

0x2557,	// (0x00002557) main_idle_trad_pane

0x2557,	// (0x00002557) main_list_empty_pane

0x2ac2,	// (0x00002ac2) main_midp_pane

0x2ace,	// (0x00002ace) main_pane_g1_ParamLimits

0x2ace,	// (0x00002ace) main_pane_g1

0xc305,	// (0x0000c305) popup_ai_message_window_ParamLimits

0xc305,	// (0x0000c305) popup_ai_message_window

0xc396,	// (0x0000c396) popup_fep_china_uni_window_ParamLimits

0xc396,	// (0x0000c396) popup_fep_china_uni_window

0x2be2,	// (0x00002be2) popup_fep_japan_candidate_window_ParamLimits

0x2be2,	// (0x00002be2) popup_fep_japan_candidate_window

0x2c00,	// (0x00002c00) popup_fep_japan_predictive_window_ParamLimits

0x2c00,	// (0x00002c00) popup_fep_japan_predictive_window

0xc3f0,	// (0x0000c3f0) popup_find_window

0xc40d,	// (0x0000c40d) popup_grid_graphic_window_ParamLimits

0xc40d,	// (0x0000c40d) popup_grid_graphic_window

0x2c65,	// (0x00002c65) popup_large_graphic_colour_window

0xc4a5,	// (0x0000c4a5) popup_menu_window_ParamLimits

0xc4a5,	// (0x0000c4a5) popup_menu_window

0xc671,	// (0x0000c671) popup_note_image_window

0xc637,	// (0x0000c637) popup_note_wait_window_ParamLimits

0xc637,	// (0x0000c637) popup_note_wait_window

0xc689,	// (0x0000c689) popup_note_window_ParamLimits

0xc689,	// (0x0000c689) popup_note_window

0xc72f,	// (0x0000c72f) popup_query_code_window_ParamLimits

0xc72f,	// (0x0000c72f) popup_query_code_window

0x2eaf,	// (0x00002eaf) popup_query_data_code_window_ParamLimits

0x2eaf,	// (0x00002eaf) popup_query_data_code_window

0xc769,	// (0x0000c769) popup_query_data_window_ParamLimits

0xc769,	// (0x0000c769) popup_query_data_window

0xc7e5,	// (0x0000c7e5) popup_query_sat_info_window_ParamLimits

0xc7e5,	// (0x0000c7e5) popup_query_sat_info_window

0xc87c,	// (0x0000c87c) popup_snote_single_graphic_window_ParamLimits

0xc87c,	// (0x0000c87c) popup_snote_single_graphic_window

0xc87c,	// (0x0000c87c) popup_snote_single_text_window_ParamLimits

0xc87c,	// (0x0000c87c) popup_snote_single_text_window

0x2f32,	// (0x00002f32) popup_sub_window_general

0x3060,	// (0x00003060) popup_window_general_ParamLimits

0x3060,	// (0x00003060) popup_window_general

0x3075,	// (0x00003075) power_save_pane

0xc161,	// (0x0000c161) control_pane_g1_ParamLimits

0xc161,	// (0x0000c161) control_pane_g1

0xc18a,	// (0x0000c18a) control_pane_g2_ParamLimits

0xc18a,	// (0x0000c18a) control_pane_g2

0x2907,	// (0x00002907) control_pane_g3_ParamLimits

0x2907,	// (0x00002907) control_pane_g3

0x0007,

0xf05d,	// (0x0000f05d) control_pane_g_ParamLimits

0xf05d,	// (0x0000f05d) control_pane_g

0xc1f2,	// (0x0000c1f2) control_pane_t1_ParamLimits

0xc1f2,	// (0x0000c1f2) control_pane_t1

0xc250,	// (0x0000c250) control_pane_t2_ParamLimits

0xc250,	// (0x0000c250) control_pane_t2

0x0002,

0xf06e,	// (0x0000f06e) control_pane_t_ParamLimits

0xf06e,	// (0x0000f06e) control_pane_t

0x27da,	// (0x000027da) navi_navi_volume_pane_cp1

0x27e3,	// (0x000027e3) status_small_icon_pane

0x27eb,	// (0x000027eb) status_small_pane_g1_ParamLimits

0x27eb,	// (0x000027eb) status_small_pane_g1

0x281f,	// (0x0000281f) status_small_pane_g2_ParamLimits

0x281f,	// (0x0000281f) status_small_pane_g2

0x282b,	// (0x0000282b) status_small_pane_g3_ParamLimits

0x282b,	// (0x0000282b) status_small_pane_g3

0x2837,	// (0x00002837) status_small_pane_g4_ParamLimits

0x2837,	// (0x00002837) status_small_pane_g4

0x2843,	// (0x00002843) status_small_pane_g5_ParamLimits

0x2843,	// (0x00002843) status_small_pane_g5

0x2852,	// (0x00002852) status_small_pane_g6_ParamLimits

0x2852,	// (0x00002852) status_small_pane_g6

0x0007,

0xac52,	// (0x0000ac52) status_small_pane_g_ParamLimits

0xac52,	// (0x0000ac52) status_small_pane_g

0x2882,	// (0x00002882) status_small_pane_t1

0x28a5,	// (0x000028a5) status_small_wait_pane_ParamLimits

0x28a5,	// (0x000028a5) status_small_wait_pane

0xbf43,	// (0x0000bf43) aid_levels_signal_ParamLimits

0xbf43,	// (0x0000bf43) aid_levels_signal

0xbf5b,	// (0x0000bf5b) signal_pane_g1_ParamLimits

0xbf5b,	// (0x0000bf5b) signal_pane_g1

0xbf76,	// (0x0000bf76) signal_pane_g2_ParamLimits

0xbf76,	// (0x0000bf76) signal_pane_g2

0x0003,

0xf03d,	// (0x0000f03d) signal_pane_g_ParamLimits

0xf03d,	// (0x0000f03d) signal_pane_g

0x1e1f,	// (0x00001e1f) context_pane_g1

0xb5a9,	// (0x0000b5a9) title_pane_g1

0xb5e0,	// (0x0000b5e0) title_pane_t1

0x04b7,	// (0x000004b7) title_pane_t2

0x04dd,	// (0x000004dd) title_pane_t3

0x0002,

0xef87,	// (0x0000ef87) title_pane_t

0xcd3e,	// (0x0000cd3e) aid_levels_battery_ParamLimits

0xcd3e,	// (0x0000cd3e) aid_levels_battery

0xcd5a,	// (0x0000cd5a) battery_pane_g1_ParamLimits

0xcd5a,	// (0x0000cd5a) battery_pane_g1

0xcd77,	// (0x0000cd77) battery_pane_g2_ParamLimits

0xcd77,	// (0x0000cd77) battery_pane_g2

0x0001,

0xf080,	// (0x0000f080) battery_pane_g_ParamLimits

0xf080,	// (0x0000f080) battery_pane_g

0xd1d7,	// (0x0000d1d7) uni_indicator_pane_g1

0xd1ec,	// (0x0000d1ec) uni_indicator_pane_g2

0x4afc,	// (0x00004afc) uni_indicator_pane_g3

0x0005,

0xf0cc,	// (0x0000f0cc) uni_indicator_pane_g

0x23d5,	// (0x000023d5) navi_icon_pane_ParamLimits

0x23d5,	// (0x000023d5) navi_icon_pane

0x231e,	// (0x0000231e) navi_midp_pane

0x23f1,	// (0x000023f1) navi_navi_pane

0x23fb,	// (0x000023fb) navi_text_pane_ParamLimits

0x23fb,	// (0x000023fb) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09ab,	// (0x000009ab) status_small_wait_pane_g2

0x0001,

0xadeb,	// (0x0000adeb) status_small_wait_pane_g

0x47f8,	// (0x000047f8) navi_navi_icon_text_pane

0x4800,	// (0x00004800) navi_navi_pane_g1_ParamLimits

0x4800,	// (0x00004800) navi_navi_pane_g1

0x4812,	// (0x00004812) navi_navi_pane_g2_ParamLimits

0x4812,	// (0x00004812) navi_navi_pane_g2

0x0001,

0xadb9,	// (0x0000adb9) navi_navi_pane_g_ParamLimits

0xadb9,	// (0x0000adb9) navi_navi_pane_g

0x4824,	// (0x00004824) navi_navi_tabs_pane

0x482d,	// (0x0000482d) navi_navi_text_pane

0x47f8,	// (0x000047f8) navi_navi_volume_pane

0xd160,	// (0x0000d160) navi_text_pane_t1

0x47c8,	// (0x000047c8) navi_icon_pane_g1

0x471b,	// (0x0000471b) navi_navi_text_pane_t1

0xd13b,	// (0x0000d13b) navi_navi_volume_pane_g1

0xd143,	// (0x0000d143) volume_small_pane

0xd097,	// (0x0000d097) navi_navi_icon_text_pane_g1

0xd09f,	// (0x0000d09f) navi_navi_icon_text_pane_t1

0x23f1,	// (0x000023f1) navi_tabs_2_long_pane

0x23f1,	// (0x000023f1) navi_tabs_2_pane

0x23f1,	// (0x000023f1) navi_tabs_3_long_pane

0x23f1,	// (0x000023f1) navi_tabs_3_pane

0x23f1,	// (0x000023f1) navi_tabs_4_pane

0xd055,	// (0x0000d055) tabs_2_active_pane_ParamLimits

0xd055,	// (0x0000d055) tabs_2_active_pane

0xd065,	// (0x0000d065) tabs_2_passive_pane_ParamLimits

0xd065,	// (0x0000d065) tabs_2_passive_pane

0xd023,	// (0x0000d023) tabs_3_active_pane_ParamLimits

0xd023,	// (0x0000d023) tabs_3_active_pane

0xd033,	// (0x0000d033) tabs_3_passive_pane_ParamLimits

0xd033,	// (0x0000d033) tabs_3_passive_pane

0xd044,	// (0x0000d044) tabs_3_passive_pane_cp_ParamLimits

0xd044,	// (0x0000d044) tabs_3_passive_pane_cp

0xcfdf,	// (0x0000cfdf) tabs_4_active_pane_ParamLimits

0xcfdf,	// (0x0000cfdf) tabs_4_active_pane

0xcff0,	// (0x0000cff0) tabs_4_passive_pane_ParamLimits

0xcff0,	// (0x0000cff0) tabs_4_passive_pane

0xd001,	// (0x0000d001) tabs_4_passive_pane_cp_ParamLimits

0xd001,	// (0x0000d001) tabs_4_passive_pane_cp

0xd012,	// (0x0000d012) tabs_4_passive_pane_cp2_ParamLimits

0xd012,	// (0x0000d012) tabs_4_passive_pane_cp2

0xcfbf,	// (0x0000cfbf) tabs_2_long_active_pane_ParamLimits

0xcfbf,	// (0x0000cfbf) tabs_2_long_active_pane

0xcfcf,	// (0x0000cfcf) tabs_2_long_passive_pane_ParamLimits

0xcfcf,	// (0x0000cfcf) tabs_2_long_passive_pane

0xcf8a,	// (0x0000cf8a) tabs_3_long_active_pane_ParamLimits

0xcf8a,	// (0x0000cf8a) tabs_3_long_active_pane

0xcf9b,	// (0x0000cf9b) tabs_3_long_passive_pane_ParamLimits

0xcf9b,	// (0x0000cf9b) tabs_3_long_passive_pane

0xcfae,	// (0x0000cfae) tabs_3_long_passive_pane_cp_ParamLimits

0xcfae,	// (0x0000cfae) tabs_3_long_passive_pane_cp

0x44a2,	// (0x000044a2) volume_small_pane_g1

0xcf39,	// (0x0000cf39) volume_small_pane_g2

0xcf42,	// (0x0000cf42) volume_small_pane_g3

0xcf4b,	// (0x0000cf4b) volume_small_pane_g4

0xcf54,	// (0x0000cf54) volume_small_pane_g5

0xcf5d,	// (0x0000cf5d) volume_small_pane_g6

0xcf66,	// (0x0000cf66) volume_small_pane_g7

0xcf6f,	// (0x0000cf6f) volume_small_pane_g8

0xcf78,	// (0x0000cf78) volume_small_pane_g9

0xcf81,	// (0x0000cf81) volume_small_pane_g10

0x0009,

0xf0a2,	// (0x0000f0a2) volume_small_pane_g

0x0815,	// (0x00000815) bg_active_tab_pane_cp2_ParamLimits

0x0815,	// (0x00000815) bg_active_tab_pane_cp2

0xb66c,	// (0x0000b66c) tabs_3_active_pane_g1

0xb674,	// (0x0000b674) tabs_3_active_pane_t1

0x0815,	// (0x00000815) bg_passive_tab_pane_cp2_ParamLimits

0x0815,	// (0x00000815) bg_passive_tab_pane_cp2

0xb66c,	// (0x0000b66c) tabs_3_passive_pane_g1

0xb674,	// (0x0000b674) tabs_3_passive_pane_t1

0x0815,	// (0x00000815) bg_active_tab_pane_cp3_ParamLimits

0x0815,	// (0x00000815) bg_active_tab_pane_cp3

0xb686,	// (0x0000b686) tabs_4_active_pane_g1

0xb68e,	// (0x0000b68e) tabs_4_active_pane_t1

0x0815,	// (0x00000815) bg_passive_tab_pane_cp3_ParamLimits

0x0815,	// (0x00000815) bg_passive_tab_pane_cp3

0xb686,	// (0x0000b686) tabs_4_1_passive_pane_g1

0xb68e,	// (0x0000b68e) tabs_4_1_passive_pane_t1

0x2ac2,	// (0x00002ac2) list_highlight_pane_cp2

0xd276,	// (0x0000d276) list_set_pane_ParamLimits

0xd276,	// (0x0000d276) list_set_pane

0xd310,	// (0x0000d310) main_pane_set_t1_ParamLimits

0xd310,	// (0x0000d310) main_pane_set_t1

0xd330,	// (0x0000d330) main_pane_set_t2_ParamLimits

0xd330,	// (0x0000d330) main_pane_set_t2

0xd344,	// (0x0000d344) main_pane_set_t3_ParamLimits

0xd344,	// (0x0000d344) main_pane_set_t3

0xd356,	// (0x0000d356) main_pane_set_t4_ParamLimits

0xd356,	// (0x0000d356) main_pane_set_t4

0x0003,

0xf0d9,	// (0x0000f0d9) main_pane_set_t_ParamLimits

0xf0d9,	// (0x0000f0d9) main_pane_set_t

0xd368,	// (0x0000d368) setting_code_pane

0xd370,	// (0x0000d370) setting_slider_graphic_pane

0xd370,	// (0x0000d370) setting_slider_pane

0xd370,	// (0x0000d370) setting_text_pane

0xd370,	// (0x0000d370) setting_volume_pane

0x0531,	// (0x00000531) volume_set_pane

0x04ef,	// (0x000004ef) bg_set_opt_pane_cp

0x0539,	// (0x00000539) setting_slider_pane_t1

0x0552,	// (0x00000552) setting_slider_pane_t2

0x056c,	// (0x0000056c) setting_slider_pane_t3

0x0002,

0xaa3e,	// (0x0000aa3e) setting_slider_pane_t

0x0584,	// (0x00000584) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x059a,	// (0x0000059a) setting_slider_graphic_pane_g1

0x05a3,	// (0x000005a3) setting_slider_graphic_pane_t1

0x05b3,	// (0x000005b3) setting_slider_graphic_pane_t2

0x0001,

0xaa45,	// (0x0000aa45) setting_slider_graphic_pane_t

0x05c3,	// (0x000005c3) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4dee,	// (0x00004dee) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05cb,	// (0x000005cb) setting_code_pane_t1

0x05d9,	// (0x000005d9) set_text_pane_t1_ParamLimits

0x05d9,	// (0x000005d9) set_text_pane_t1

0x1475,	// (0x00001475) set_opt_bg_pane_g1

0x147d,	// (0x0000147d) set_opt_bg_pane_g2

0x4dce,	// (0x00004dce) set_opt_bg_pane_g3

0x148d,	// (0x0000148d) set_opt_bg_pane_g4

0x1495,	// (0x00001495) set_opt_bg_pane_g5

0x149d,	// (0x0000149d) set_opt_bg_pane_g6

0x4dd6,	// (0x00004dd6) set_opt_bg_pane_g7

0x4dde,	// (0x00004dde) set_opt_bg_pane_g8

0x4de6,	// (0x00004de6) set_opt_bg_pane_g9

0x0008,

0xae42,	// (0x0000ae42) set_opt_bg_pane_g

0x4d5d,	// (0x00004d5d) slider_set_pane_g1

0x4d6a,	// (0x00004d6a) slider_set_pane_g2

0x0006,

0xae33,	// (0x0000ae33) slider_set_pane_g

0x4bf3,	// (0x00004bf3) volume_set_pane_g1

0x4bfb,	// (0x00004bfb) volume_set_pane_g2

0x4c03,	// (0x00004c03) volume_set_pane_g3

0x4c0b,	// (0x00004c0b) volume_set_pane_g4

0x4c13,	// (0x00004c13) volume_set_pane_g5

0x4c1b,	// (0x00004c1b) volume_set_pane_g6

0x4c23,	// (0x00004c23) volume_set_pane_g7

0x4c2b,	// (0x00004c2b) volume_set_pane_g8

0x4c33,	// (0x00004c33) volume_set_pane_g9

0x4c3b,	// (0x00004c3b) volume_set_pane_g10

0x0009,

0xae0b,	// (0x0000ae0b) volume_set_pane_g

0xb6a0,	// (0x0000b6a0) indicator_pane_ParamLimits

0xb6a0,	// (0x0000b6a0) indicator_pane

0xb6c8,	// (0x0000b6c8) main_idle_pane_g2_ParamLimits

0xb6c8,	// (0x0000b6c8) main_idle_pane_g2

0xb700,	// (0x0000b700) main_pane_idle_g1_ParamLimits

0xb700,	// (0x0000b700) main_pane_idle_g1

0x0634,	// (0x00000634) popup_clock_digital_analogue_window_ParamLimits

0x0634,	// (0x00000634) popup_clock_digital_analogue_window

0xb727,	// (0x0000b727) soft_indicator_pane_ParamLimits

0xb727,	// (0x0000b727) soft_indicator_pane

0xb741,	// (0x0000b741) wallpaper_pane_ParamLimits

0xb741,	// (0x0000b741) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb753,	// (0x0000b753) indicator_pane_g1_ParamLimits

0xb753,	// (0x0000b753) indicator_pane_g1

0x5344,	// (0x00005344) navi_navi_icon_text_pane_srt_g1

0x0686,	// (0x00000686) soft_indicator_pane_t1

0x06a0,	// (0x000006a0) aid_ps_area_pane

0xb769,	// (0x0000b769) aid_ps_clock_pane

0x06bf,	// (0x000006bf) aid_ps_indicator_pane

0x06cb,	// (0x000006cb) indicator_ps_pane_ParamLimits

0x06cb,	// (0x000006cb) indicator_ps_pane

0x06da,	// (0x000006da) power_save_pane_g1_ParamLimits

0x06da,	// (0x000006da) power_save_pane_g1

0x06e6,	// (0x000006e6) power_save_pane_g2_ParamLimits

0x06e6,	// (0x000006e6) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06a0,	// (0x000006a0) aid_ps_area_pane_ParamLimits

0x0001,

0xaa4a,	// (0x0000aa4a) power_save_pane_g_ParamLimits

0xaa4a,	// (0x0000aa4a) power_save_pane_g

0x06f4,	// (0x000006f4) power_save_pane_t1_ParamLimits

0x06f4,	// (0x000006f4) power_save_pane_t1

0xb769,	// (0x0000b769) aid_ps_clock_pane_ParamLimits

0x06bf,	// (0x000006bf) aid_ps_indicator_pane_ParamLimits

0x0706,	// (0x00000706) power_save_pane_t4_ParamLimits

0x0706,	// (0x00000706) power_save_pane_t4

0x0001,

0xaa4f,	// (0x0000aa4f) power_save_pane_t_ParamLimits

0xaa4f,	// (0x0000aa4f) power_save_pane_t

0x0730,	// (0x00000730) power_save_t3_ParamLimits

0x0730,	// (0x00000730) power_save_t3

0x071b,	// (0x0000071b) power_save_t2_ParamLimits

0x071b,	// (0x0000071b) power_save_t2

0x0745,	// (0x00000745) indicator_ps_pane_g1

0xb777,	// (0x0000b777) ai_gene_pane_ParamLimits

0xb777,	// (0x0000b777) ai_gene_pane

0xb78e,	// (0x0000b78e) ai_links_pane_ParamLimits

0xb78e,	// (0x0000b78e) ai_links_pane

0xb7a6,	// (0x0000b7a6) indicator_pane_cp1_ParamLimits

0xb7a6,	// (0x0000b7a6) indicator_pane_cp1

0xb7b5,	// (0x0000b7b5) main_pane_idle_g1_cp_ParamLimits

0xb7b5,	// (0x0000b7b5) main_pane_idle_g1_cp

0x077e,	// (0x0000077e) popup_ai_links_title_window

0xb7cd,	// (0x0000b7cd) soft_indicator_pane_cp1_ParamLimits

0xb7cd,	// (0x0000b7cd) soft_indicator_pane_cp1

0x4abf,	// (0x00004abf) ai_links_pane_g1

0x4ac8,	// (0x00004ac8) grid_ai_links_pane

0xd1ce,	// (0x0000d1ce) ai_gene_pane_1

0x4aad,	// (0x00004aad) ai_gene_pane_2

0x4ab6,	// (0x00004ab6) list_highlight_pane_cp4

0xd1aa,	// (0x0000d1aa) cell_ai_link_pane_ParamLimits

0xd1aa,	// (0x0000d1aa) cell_ai_link_pane

0x4a7e,	// (0x00004a7e) cell_ai_link_pane_g1

0x09ab,	// (0x000009ab) cell_ai_link_pane_g2

0x0001,

0xade6,	// (0x0000ade6) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07a1,	// (0x000007a1) popup_ai_links_title_window_t1

0x49ce,	// (0x000049ce) ai_gene_pane_1_g1_ParamLimits

0x49ce,	// (0x000049ce) ai_gene_pane_1_g1

0x49da,	// (0x000049da) ai_gene_pane_1_g2_ParamLimits

0x49da,	// (0x000049da) ai_gene_pane_1_g2

0x0001,

0xaddc,	// (0x0000addc) ai_gene_pane_1_g_ParamLimits

0xaddc,	// (0x0000addc) ai_gene_pane_1_g

0x49e7,	// (0x000049e7) ai_gene_pane_1_t1_ParamLimits

0x49e7,	// (0x000049e7) ai_gene_pane_1_t1

0x4a1b,	// (0x00004a1b) grid_ai_soft_ind_pane

0x49b9,	// (0x000049b9) ai_gene_pane_2_t1_ParamLimits

0x49b9,	// (0x000049b9) ai_gene_pane_2_t1

0xb7e1,	// (0x0000b7e1) main_pane_empty_t1_ParamLimits

0xb7e1,	// (0x0000b7e1) main_pane_empty_t1

0xb7f9,	// (0x0000b7f9) main_pane_empty_t2_ParamLimits

0xb7f9,	// (0x0000b7f9) main_pane_empty_t2

0xb80e,	// (0x0000b80e) main_pane_empty_t3_ParamLimits

0xb80e,	// (0x0000b80e) main_pane_empty_t3

0xb820,	// (0x0000b820) main_pane_empty_t4_ParamLimits

0xb820,	// (0x0000b820) main_pane_empty_t4

0xb832,	// (0x0000b832) main_pane_empty_t5_ParamLimits

0xb832,	// (0x0000b832) main_pane_empty_t5

0x0004,

0xef8e,	// (0x0000ef8e) main_pane_empty_t_ParamLimits

0xef8e,	// (0x0000ef8e) main_pane_empty_t

0x1554,	// (0x00001554) bg_popup_window_pane_ParamLimits

0x1554,	// (0x00001554) bg_popup_window_pane

0x4729,	// (0x00004729) find_popup_pane_cp2_ParamLimits

0x4729,	// (0x00004729) find_popup_pane_cp2

0x4735,	// (0x00004735) heading_pane_ParamLimits

0x4735,	// (0x00004735) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd0bc,	// (0x0000d0bc) bg_popup_window_pane_g1_ParamLimits

0xd0bc,	// (0x0000d0bc) bg_popup_window_pane_g1

0xd0cb,	// (0x0000d0cb) bg_popup_window_pane_g2_ParamLimits

0xd0cb,	// (0x0000d0cb) bg_popup_window_pane_g2

0xd0d7,	// (0x0000d0d7) bg_popup_window_pane_g3_ParamLimits

0xd0d7,	// (0x0000d0d7) bg_popup_window_pane_g3

0xd0e3,	// (0x0000d0e3) bg_popup_window_pane_g4_ParamLimits

0xd0e3,	// (0x0000d0e3) bg_popup_window_pane_g4

0xd0f2,	// (0x0000d0f2) bg_popup_window_pane_g5_ParamLimits

0xd0f2,	// (0x0000d0f2) bg_popup_window_pane_g5

0xd102,	// (0x0000d102) bg_popup_window_pane_g6_ParamLimits

0xd102,	// (0x0000d102) bg_popup_window_pane_g6

0xd10e,	// (0x0000d10e) bg_popup_window_pane_g7_ParamLimits

0xd10e,	// (0x0000d10e) bg_popup_window_pane_g7

0xd11d,	// (0x0000d11d) bg_popup_window_pane_g8_ParamLimits

0xd11d,	// (0x0000d11d) bg_popup_window_pane_g8

0xd12c,	// (0x0000d12c) bg_popup_window_pane_g9_ParamLimits

0xd12c,	// (0x0000d12c) bg_popup_window_pane_g9

0x46fe,	// (0x000046fe) bg_popup_window_pane_g10_ParamLimits

0x46fe,	// (0x000046fe) bg_popup_window_pane_g10

0x0009,

0xf0b7,	// (0x0000f0b7) bg_popup_window_pane_g_ParamLimits

0xf0b7,	// (0x0000f0b7) bg_popup_window_pane_g

0x4627,	// (0x00004627) bg_popup_heading_pane_ParamLimits

0x4627,	// (0x00004627) bg_popup_heading_pane

0x5287,	// (0x00005287) tabs_4_passive_pane_cp_srt_ParamLimits

0x5287,	// (0x00005287) tabs_4_passive_pane_cp_srt

0x5299,	// (0x00005299) tabs_4_passive_pane_srt_ParamLimits

0x463b,	// (0x0000463b) heading_pane_g2

0x5299,	// (0x00005299) tabs_4_passive_pane_srt

0x377f,	// (0x0000377f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x377f,	// (0x0000377f) bg_passive_tab_pane_cp3_srt

0x4643,	// (0x00004643) heading_pane_t1_ParamLimits

0x4643,	// (0x00004643) heading_pane_t1

0x465a,	// (0x0000465a) heading_pane_t2_ParamLimits

0x465a,	// (0x0000465a) heading_pane_t2

0x0001,

0xad9f,	// (0x0000ad9f) heading_pane_t_ParamLimits

0xad9f,	// (0x0000ad9f) heading_pane_t

0x4007,	// (0x00004007) bg_popup_heading_pane_g1

0x40b6,	// (0x000040b6) bg_popup_heading_pane_g2

0x40c0,	// (0x000040c0) bg_popup_heading_pane_g3

0x40ca,	// (0x000040ca) bg_popup_heading_pane_g4

0x40d4,	// (0x000040d4) bg_popup_heading_pane_g5

0x40de,	// (0x000040de) bg_popup_heading_pane_g6

0x40e6,	// (0x000040e6) bg_popup_heading_pane_g7

0x40ee,	// (0x000040ee) bg_popup_heading_pane_g8

0x40f8,	// (0x000040f8) bg_popup_heading_pane_g9

0x0008,

0xad5b,	// (0x0000ad5b) bg_popup_heading_pane_g

0x35ed,	// (0x000035ed) bg_popup_sub_pane_g1

0x35f5,	// (0x000035f5) bg_popup_sub_pane_g2

0x35fd,	// (0x000035fd) bg_popup_sub_pane_g3

0x3605,	// (0x00003605) bg_popup_sub_pane_g4

0x360d,	// (0x0000360d) bg_popup_sub_pane_g5

0x3615,	// (0x00003615) bg_popup_sub_pane_g6

0x361d,	// (0x0000361d) bg_popup_sub_pane_g7

0x3625,	// (0x00003625) bg_popup_sub_pane_g8

0x362d,	// (0x0000362d) bg_popup_sub_pane_g9

0x0008,

0xad35,	// (0x0000ad35) bg_popup_sub_pane_g

0x0815,	// (0x00000815) bg_popup_window_pane_cp5_ParamLimits

0x0815,	// (0x00000815) bg_popup_window_pane_cp5

0x0831,	// (0x00000831) popup_note_window_g1_ParamLimits

0x0831,	// (0x00000831) popup_note_window_g1

0x083d,	// (0x0000083d) popup_note_window_t1_ParamLimits

0x083d,	// (0x0000083d) popup_note_window_t1

0x084f,	// (0x0000084f) popup_note_window_t2_ParamLimits

0x084f,	// (0x0000084f) popup_note_window_t2

0x0861,	// (0x00000861) popup_note_window_t3_ParamLimits

0x0861,	// (0x00000861) popup_note_window_t3

0x0873,	// (0x00000873) popup_note_window_t4_ParamLimits

0x0873,	// (0x00000873) popup_note_window_t4

0x089b,	// (0x0000089b) popup_note_window_t5_ParamLimits

0x089b,	// (0x0000089b) popup_note_window_t5

0x0004,

0xaa5f,	// (0x0000aa5f) popup_note_window_t_ParamLimits

0xaa5f,	// (0x0000aa5f) popup_note_window_t

0x08bf,	// (0x000008bf) bg_popup_window_pane_cp6_ParamLimits

0x08bf,	// (0x000008bf) bg_popup_window_pane_cp6

0x3f7b,	// (0x00003f7b) popup_note_image_window_g1_ParamLimits

0x3f7b,	// (0x00003f7b) popup_note_image_window_g1

0x3f87,	// (0x00003f87) popup_note_image_window_g2_ParamLimits

0x3f87,	// (0x00003f87) popup_note_image_window_g2

0x0001,

0xad29,	// (0x0000ad29) popup_note_image_window_g_ParamLimits

0xad29,	// (0x0000ad29) popup_note_image_window_g

0x3fa0,	// (0x00003fa0) popup_note_image_window_t1_ParamLimits

0x3fa0,	// (0x00003fa0) popup_note_image_window_t1

0x3fb9,	// (0x00003fb9) popup_note_image_window_t2_ParamLimits

0x3fb9,	// (0x00003fb9) popup_note_image_window_t2

0x3fd2,	// (0x00003fd2) popup_note_image_window_t3_ParamLimits

0x3fd2,	// (0x00003fd2) popup_note_image_window_t3

0x0002,

0xad2e,	// (0x0000ad2e) popup_note_image_window_t_ParamLimits

0xad2e,	// (0x0000ad2e) popup_note_image_window_t

0x3e3c,	// (0x00003e3c) bg_popup_window_pane_cp7_ParamLimits

0x3e3c,	// (0x00003e3c) bg_popup_window_pane_cp7

0x3e6c,	// (0x00003e6c) popup_note_wait_window_g1_ParamLimits

0x3e6c,	// (0x00003e6c) popup_note_wait_window_g1

0x3e78,	// (0x00003e78) popup_note_wait_window_g2_ParamLimits

0x3e78,	// (0x00003e78) popup_note_wait_window_g2

0x0002,

0xad17,	// (0x0000ad17) popup_note_wait_window_g_ParamLimits

0xad17,	// (0x0000ad17) popup_note_wait_window_g

0x3e90,	// (0x00003e90) popup_note_wait_window_t1_ParamLimits

0x3e90,	// (0x00003e90) popup_note_wait_window_t1

0x3eb7,	// (0x00003eb7) popup_note_wait_window_t2_ParamLimits

0x3eb7,	// (0x00003eb7) popup_note_wait_window_t2

0x3ed4,	// (0x00003ed4) popup_note_wait_window_t3_ParamLimits

0x3ed4,	// (0x00003ed4) popup_note_wait_window_t3

0x3ee7,	// (0x00003ee7) popup_note_wait_window_t4_ParamLimits

0x3ee7,	// (0x00003ee7) popup_note_wait_window_t4

0x0004,

0xad1e,	// (0x0000ad1e) popup_note_wait_window_t_ParamLimits

0xad1e,	// (0x0000ad1e) popup_note_wait_window_t

0x3f0c,	// (0x00003f0c) wait_bar_pane_ParamLimits

0x3f0c,	// (0x00003f0c) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xabde,	// (0x0000abde) wait_anim_pane_g

0x3de0,	// (0x00003de0) wait_border_pane_g1

0x3deb,	// (0x00003deb) wait_border_pane_g2

0x3df4,	// (0x00003df4) wait_border_pane_g3

0x0002,

0xad10,	// (0x0000ad10) wait_border_pane_g

0x3c50,	// (0x00003c50) bg_popup_window_pane_cp16_ParamLimits

0x3c50,	// (0x00003c50) bg_popup_window_pane_cp16

0x3d50,	// (0x00003d50) indicator_popup_pane_cp4_ParamLimits

0x3d50,	// (0x00003d50) indicator_popup_pane_cp4

0x3d64,	// (0x00003d64) popup_query_data_window_t1_ParamLimits

0x3d64,	// (0x00003d64) popup_query_data_window_t1

0x3d76,	// (0x00003d76) popup_query_data_window_t2_ParamLimits

0x3d76,	// (0x00003d76) popup_query_data_window_t2

0x3d8f,	// (0x00003d8f) popup_query_data_window_t3_ParamLimits

0x3d8f,	// (0x00003d8f) popup_query_data_window_t3

0x0002,

0xad09,	// (0x0000ad09) popup_query_data_window_t_ParamLimits

0xad09,	// (0x0000ad09) popup_query_data_window_t

0x3da9,	// (0x00003da9) query_popup_data_pane_ParamLimits

0x3da9,	// (0x00003da9) query_popup_data_pane

0x3dbd,	// (0x00003dbd) query_popup_data_pane_cp1_ParamLimits

0x3dbd,	// (0x00003dbd) query_popup_data_pane_cp1

0x3c50,	// (0x00003c50) bg_popup_window_pane_cp10_ParamLimits

0x3c50,	// (0x00003c50) bg_popup_window_pane_cp10

0x3c82,	// (0x00003c82) indicator_popup_pane_ParamLimits

0x3c82,	// (0x00003c82) indicator_popup_pane

0x3ca4,	// (0x00003ca4) popup_query_code_window_t1_ParamLimits

0x3ca4,	// (0x00003ca4) popup_query_code_window_t1

0x3cbe,	// (0x00003cbe) popup_query_code_window_t2_ParamLimits

0x3cbe,	// (0x00003cbe) popup_query_code_window_t2

0x3d07,	// (0x00003d07) popup_query_code_window_t3_ParamLimits

0x3d07,	// (0x00003d07) popup_query_code_window_t3

0x0002,

0xad02,	// (0x0000ad02) popup_query_code_window_t_ParamLimits

0xad02,	// (0x0000ad02) popup_query_code_window_t

0x3d36,	// (0x00003d36) query_popup_pane_ParamLimits

0x3d36,	// (0x00003d36) query_popup_pane

0x08bf,	// (0x000008bf) bg_popup_window_pane_cp15_ParamLimits

0x08bf,	// (0x000008bf) bg_popup_window_pane_cp15

0x08dd,	// (0x000008dd) indicator_popup_pane_cp1_ParamLimits

0x08dd,	// (0x000008dd) indicator_popup_pane_cp1

0x08f0,	// (0x000008f0) indicator_popup_pane_cp2_ParamLimits

0x08f0,	// (0x000008f0) indicator_popup_pane_cp2

0x0903,	// (0x00000903) popup_query_data_code_window_g1_ParamLimits

0x0903,	// (0x00000903) popup_query_data_code_window_g1

0x0916,	// (0x00000916) popup_query_data_code_window_t1_ParamLimits

0x0916,	// (0x00000916) popup_query_data_code_window_t1

0x0928,	// (0x00000928) popup_query_data_code_window_t2_ParamLimits

0x0928,	// (0x00000928) popup_query_data_code_window_t2

0x093a,	// (0x0000093a) popup_query_data_code_window_t3_ParamLimits

0x093a,	// (0x0000093a) popup_query_data_code_window_t3

0x0950,	// (0x00000950) popup_query_data_code_window_t4_ParamLimits

0x0950,	// (0x00000950) popup_query_data_code_window_t4

0x0003,

0xaa6a,	// (0x0000aa6a) popup_query_data_code_window_t_ParamLimits

0xaa6a,	// (0x0000aa6a) popup_query_data_code_window_t

0x2393,	// (0x00002393) list_single_midp_graphic_pane_g3

0x0968,	// (0x00000968) query_popup_data_pane_cp2_ParamLimits

0x097b,	// (0x0000097b) query_popup_pane_cp2_ParamLimits

0x097b,	// (0x0000097b) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c48,	// (0x00003c48) heading_pane_cp5

0x0a63,	// (0x00000a63) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x098e,	// (0x0000098e) query_popup_pane_t1

0x099c,	// (0x0000099c) list_popup_info_pane_ParamLimits

0x099c,	// (0x0000099c) list_popup_info_pane

0x09ab,	// (0x000009ab) listscroll_popup_info_pane_g1

0x09b3,	// (0x000009b3) scroll_pane_cp7

0x09bd,	// (0x000009bd) popup_info_list_pane_t1_ParamLimits

0x09bd,	// (0x000009bd) popup_info_list_pane_t1

0x09d7,	// (0x000009d7) popup_info_list_pane_t2_ParamLimits

0x09d7,	// (0x000009d7) popup_info_list_pane_t2

0x0001,

0xaa73,	// (0x0000aa73) popup_info_list_pane_t_ParamLimits

0xaa73,	// (0x0000aa73) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x537b,	// (0x0000537b) find_popup_pane

0x04ef,	// (0x000004ef) bg_popup_window_pane_cp3

0x09f1,	// (0x000009f1) heading_pane_cp3

0x09fd,	// (0x000009fd) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb894,	// (0x0000b894) heading_pane_cp4

0x0a63,	// (0x00000a63) listscroll_popup_colour_pane

0x0a6b,	// (0x00000a6b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a6b,	// (0x00000a6b) cell_large_graphic_colour_none_popup_pane

0xb89c,	// (0x0000b89c) grid_large_graphic_colour_popup_pane_ParamLimits

0xb89c,	// (0x0000b89c) grid_large_graphic_colour_popup_pane

0x0aa7,	// (0x00000aa7) listscroll_popup_colour_pane_g1_ParamLimits

0x0aa7,	// (0x00000aa7) listscroll_popup_colour_pane_g1

0x0abe,	// (0x00000abe) listscroll_popup_colour_pane_g2_ParamLimits

0x0abe,	// (0x00000abe) listscroll_popup_colour_pane_g2

0x0ad5,	// (0x00000ad5) listscroll_popup_colour_pane_g3_ParamLimits

0x0ad5,	// (0x00000ad5) listscroll_popup_colour_pane_g3

0xb8c0,	// (0x0000b8c0) listscroll_popup_colour_pane_g4_ParamLimits

0xb8c0,	// (0x0000b8c0) listscroll_popup_colour_pane_g4

0x0003,

0xef99,	// (0x0000ef99) listscroll_popup_colour_pane_g_ParamLimits

0xef99,	// (0x0000ef99) listscroll_popup_colour_pane_g

0x0af4,	// (0x00000af4) scroll_pane_cp6_ParamLimits

0x0af4,	// (0x00000af4) scroll_pane_cp6

0xb8cf,	// (0x0000b8cf) cell_large_graphic_colour_popup_pane_ParamLimits

0xb8cf,	// (0x0000b8cf) cell_large_graphic_colour_popup_pane

0x0b25,	// (0x00000b25) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b34,	// (0x00000b34) cell_large_graphic_colour_popup_pane_g1

0x0b3c,	// (0x00000b3c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xaa81,	// (0x0000aa81) cell_large_graphic_colour_popup_pane_g

0x0b44,	// (0x00000b44) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b4d,	// (0x00000b4d) grid_highlight_pane_cp4

0x0b55,	// (0x00000b55) bg_popup_window_pane_cp8_ParamLimits

0x0b55,	// (0x00000b55) bg_popup_window_pane_cp8

0x0b70,	// (0x00000b70) popup_snote_single_text_window_g1_ParamLimits

0x0b70,	// (0x00000b70) popup_snote_single_text_window_g1

0x0b82,	// (0x00000b82) popup_snote_single_text_window_t1_ParamLimits

0x0b82,	// (0x00000b82) popup_snote_single_text_window_t1

0x0b95,	// (0x00000b95) popup_snote_single_text_window_t2_ParamLimits

0x0b95,	// (0x00000b95) popup_snote_single_text_window_t2

0x0ba8,	// (0x00000ba8) popup_snote_single_text_window_t3_ParamLimits

0x0ba8,	// (0x00000ba8) popup_snote_single_text_window_t3

0x0be1,	// (0x00000be1) popup_snote_single_text_window_t4_ParamLimits

0x0be1,	// (0x00000be1) popup_snote_single_text_window_t4

0x0c15,	// (0x00000c15) popup_snote_single_text_window_t5_ParamLimits

0x0c15,	// (0x00000c15) popup_snote_single_text_window_t5

0x0004,

0xaa86,	// (0x0000aa86) popup_snote_single_text_window_t_ParamLimits

0xaa86,	// (0x0000aa86) popup_snote_single_text_window_t

0x0c44,	// (0x00000c44) bg_popup_window_pane_cp9_ParamLimits

0x0c44,	// (0x00000c44) bg_popup_window_pane_cp9

0x0b70,	// (0x00000b70) popup_snote_single_graphic_window_g1_ParamLimits

0x0b70,	// (0x00000b70) popup_snote_single_graphic_window_g1

0x0c52,	// (0x00000c52) popup_snote_single_graphic_window_g2_ParamLimits

0x0c52,	// (0x00000c52) popup_snote_single_graphic_window_g2

0x0001,

0xaa91,	// (0x0000aa91) popup_snote_single_graphic_window_g_ParamLimits

0xaa91,	// (0x0000aa91) popup_snote_single_graphic_window_g

0x0c5e,	// (0x00000c5e) popup_snote_single_graphic_window_t1_ParamLimits

0x0c5e,	// (0x00000c5e) popup_snote_single_graphic_window_t1

0x0c71,	// (0x00000c71) popup_snote_single_graphic_window_t2_ParamLimits

0x0c71,	// (0x00000c71) popup_snote_single_graphic_window_t2

0x0c84,	// (0x00000c84) popup_snote_single_graphic_window_t3_ParamLimits

0x0c84,	// (0x00000c84) popup_snote_single_graphic_window_t3

0x0cbd,	// (0x00000cbd) popup_snote_single_graphic_window_t4_ParamLimits

0x0cbd,	// (0x00000cbd) popup_snote_single_graphic_window_t4

0x0cf1,	// (0x00000cf1) popup_snote_single_graphic_window_t5_ParamLimits

0x0cf1,	// (0x00000cf1) popup_snote_single_graphic_window_t5

0x0004,

0xaa96,	// (0x0000aa96) popup_snote_single_graphic_window_t_ParamLimits

0xaa96,	// (0x0000aa96) popup_snote_single_graphic_window_t

0x5207,	// (0x00005207) grid_graphic_popup_pane_ParamLimits

0x5207,	// (0x00005207) grid_graphic_popup_pane

0x522f,	// (0x0000522f) listscroll_popup_graphic_pane_g1_ParamLimits

0x522f,	// (0x0000522f) listscroll_popup_graphic_pane_g1

0xd4b1,	// (0x0000d4b1) listscroll_popup_graphic_pane_g2_ParamLimits

0xd4b1,	// (0x0000d4b1) listscroll_popup_graphic_pane_g2

0x0001,

0xf0fc,	// (0x0000f0fc) listscroll_popup_graphic_pane_g_ParamLimits

0xf0fc,	// (0x0000f0fc) listscroll_popup_graphic_pane_g

0x5257,	// (0x00005257) scroll_pane_cp5

0xd475,	// (0x0000d475) cell_graphic_popup_pane_ParamLimits

0xd475,	// (0x0000d475) cell_graphic_popup_pane

0x5193,	// (0x00005193) cell_graphic_popup_pane_g1

0x519b,	// (0x0000519b) cell_graphic_popup_pane_g2

0x0b44,	// (0x00000b44) cell_graphic_popup_pane_g3

0x0002,

0xae78,	// (0x0000ae78) cell_graphic_popup_pane_g

0x51a4,	// (0x000051a4) cell_graphic_popup_pane_t2

0x0b4d,	// (0x00000b4d) grid_highlight_pane_cp3

0x0d32,	// (0x00000d32) list_gen_pane_ParamLimits

0x0d32,	// (0x00000d32) list_gen_pane

0x0d64,	// (0x00000d64) scroll_pane

0xd430,	// (0x0000d430) bg_list_pane_g1_ParamLimits

0xd430,	// (0x0000d430) bg_list_pane_g1

0x5110,	// (0x00005110) bg_list_pane_g2_ParamLimits

0x5110,	// (0x00005110) bg_list_pane_g2

0x5123,	// (0x00005123) bg_list_pane_g3_ParamLimits

0x5123,	// (0x00005123) bg_list_pane_g3

0x5135,	// (0x00005135) bg_list_pane_g4_ParamLimits

0x5135,	// (0x00005135) bg_list_pane_g4

0xd44b,	// (0x0000d44b) bg_list_pane_g5_ParamLimits

0xd44b,	// (0x0000d44b) bg_list_pane_g5

0x0004,

0xf0f1,	// (0x0000f0f1) bg_list_pane_g_ParamLimits

0xf0f1,	// (0x0000f0f1) bg_list_pane_g

0xd3bf,	// (0x0000d3bf) list_double2_graphic_large_graphic_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_double2_graphic_large_graphic_pane

0xd3bf,	// (0x0000d3bf) list_double2_graphic_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_double2_graphic_pane

0xd3bf,	// (0x0000d3bf) list_double2_large_graphic_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_double2_large_graphic_pane

0xd3d2,	// (0x0000d3d2) list_double2_pane_ParamLimits

0xd3d2,	// (0x0000d3d2) list_double2_pane

0xd3bf,	// (0x0000d3bf) list_double_graphic_heading_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_double_graphic_heading_pane

0xd3bf,	// (0x0000d3bf) list_double_graphic_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_double_graphic_pane

0xd3bf,	// (0x0000d3bf) list_double_heading_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_double_heading_pane

0xd3bf,	// (0x0000d3bf) list_double_large_graphic_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_double_large_graphic_pane

0xd3bf,	// (0x0000d3bf) list_double_number_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_double_number_pane

0xd3bf,	// (0x0000d3bf) list_double_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_double_pane

0xd3bf,	// (0x0000d3bf) list_double_time_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_double_time_pane

0xd3bf,	// (0x0000d3bf) list_setting_number_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_setting_number_pane

0xd3bf,	// (0x0000d3bf) list_setting_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_setting_pane

0xd3e4,	// (0x0000d3e4) list_single_2graphic_pane_ParamLimits

0xd3e4,	// (0x0000d3e4) list_single_2graphic_pane

0xd3e4,	// (0x0000d3e4) list_single_graphic_heading_pane_ParamLimits

0xd3e4,	// (0x0000d3e4) list_single_graphic_heading_pane

0xd3e4,	// (0x0000d3e4) list_single_graphic_pane_ParamLimits

0xd3e4,	// (0x0000d3e4) list_single_graphic_pane

0xd3e4,	// (0x0000d3e4) list_single_heading_pane_ParamLimits

0xd3e4,	// (0x0000d3e4) list_single_heading_pane

0xd3bf,	// (0x0000d3bf) list_single_large_graphic_pane_ParamLimits

0xd3bf,	// (0x0000d3bf) list_single_large_graphic_pane

0xd3e4,	// (0x0000d3e4) list_single_number_heading_pane_ParamLimits

0xd3e4,	// (0x0000d3e4) list_single_number_heading_pane

0xd3e4,	// (0x0000d3e4) list_single_number_pane_ParamLimits

0xd3e4,	// (0x0000d3e4) list_single_number_pane

0xd3e4,	// (0x0000d3e4) list_single_pane_ParamLimits

0xd3e4,	// (0x0000d3e4) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x0da4,	// (0x00000da4) list_single_pane_g1_ParamLimits

0x0da4,	// (0x00000da4) list_single_pane_g1

0x0db0,	// (0x00000db0) list_single_pane_g2_ParamLimits

0x0db0,	// (0x00000db0) list_single_pane_g2

0x0001,

0xaaa8,	// (0x0000aaa8) list_single_pane_g_ParamLimits

0xaaa8,	// (0x0000aaa8) list_single_pane_g

0x4fa7,	// (0x00004fa7) list_single_pane_t1_ParamLimits

0x4fa7,	// (0x00004fa7) list_single_pane_t1

0x0da4,	// (0x00000da4) list_single_number_pane_g1_ParamLimits

0x0da4,	// (0x00000da4) list_single_number_pane_g1

0x0db0,	// (0x00000db0) list_single_number_pane_g2_ParamLimits

0x0db0,	// (0x00000db0) list_single_number_pane_g2

0x0001,

0xaaa8,	// (0x0000aaa8) list_single_number_pane_g_ParamLimits

0xaaa8,	// (0x0000aaa8) list_single_number_pane_g

0x357b,	// (0x0000357b) list_single_number_pane_t1_ParamLimits

0x357b,	// (0x0000357b) list_single_number_pane_t1

0x4cdb,	// (0x00004cdb) list_single_number_pane_t2_ParamLimits

0x4cdb,	// (0x00004cdb) list_single_number_pane_t2

0x0001,

0xae2e,	// (0x0000ae2e) list_single_number_pane_t_ParamLimits

0xae2e,	// (0x0000ae2e) list_single_number_pane_t

0x0d98,	// (0x00000d98) list_single_graphic_pane_g1_ParamLimits

0x0d98,	// (0x00000d98) list_single_graphic_pane_g1

0x0da4,	// (0x00000da4) list_single_graphic_pane_g2_ParamLimits

0x0da4,	// (0x00000da4) list_single_graphic_pane_g2

0x0db0,	// (0x00000db0) list_single_graphic_pane_g3_ParamLimits

0x0db0,	// (0x00000db0) list_single_graphic_pane_g3

0x0002,

0xaaa1,	// (0x0000aaa1) list_single_graphic_pane_g_ParamLimits

0xaaa1,	// (0x0000aaa1) list_single_graphic_pane_g

0x0dbc,	// (0x00000dbc) list_single_graphic_pane_t1_ParamLimits

0x0dbc,	// (0x00000dbc) list_single_graphic_pane_t1

0x0da4,	// (0x00000da4) list_single_heading_pane_g1_ParamLimits

0x0da4,	// (0x00000da4) list_single_heading_pane_g1

0x0db0,	// (0x00000db0) list_single_heading_pane_g2_ParamLimits

0x0db0,	// (0x00000db0) list_single_heading_pane_g2

0x0001,

0xaaa8,	// (0x0000aaa8) list_single_heading_pane_g_ParamLimits

0xaaa8,	// (0x0000aaa8) list_single_heading_pane_g

0x0dd2,	// (0x00000dd2) list_single_heading_pane_t1_ParamLimits

0x0dd2,	// (0x00000dd2) list_single_heading_pane_t1

0x0de8,	// (0x00000de8) list_single_heading_pane_t2_ParamLimits

0x0de8,	// (0x00000de8) list_single_heading_pane_t2

0x0001,

0xaaad,	// (0x0000aaad) list_single_heading_pane_t_ParamLimits

0xaaad,	// (0x0000aaad) list_single_heading_pane_t

0x0da4,	// (0x00000da4) list_single_number_heading_pane_g1_ParamLimits

0x0da4,	// (0x00000da4) list_single_number_heading_pane_g1

0x0db0,	// (0x00000db0) list_single_number_heading_pane_g2_ParamLimits

0x0db0,	// (0x00000db0) list_single_number_heading_pane_g2

0x0001,

0xaaa8,	// (0x0000aaa8) list_single_number_heading_pane_g_ParamLimits

0xaaa8,	// (0x0000aaa8) list_single_number_heading_pane_g

0x0dd2,	// (0x00000dd2) list_single_number_heading_pane_t1_ParamLimits

0x0dd2,	// (0x00000dd2) list_single_number_heading_pane_t1

0x0dfa,	// (0x00000dfa) list_single_number_heading_pane_t2_ParamLimits

0x0dfa,	// (0x00000dfa) list_single_number_heading_pane_t2

0x0e0c,	// (0x00000e0c) list_single_number_heading_pane_t3_ParamLimits

0x0e0c,	// (0x00000e0c) list_single_number_heading_pane_t3

0x0002,

0xaab2,	// (0x0000aab2) list_single_number_heading_pane_t_ParamLimits

0xaab2,	// (0x0000aab2) list_single_number_heading_pane_t

0x0e1e,	// (0x00000e1e) list_single_graphic_heading_pane_g1_ParamLimits

0x0e1e,	// (0x00000e1e) list_single_graphic_heading_pane_g1

0xb8f8,	// (0x0000b8f8) list_single_graphic_heading_pane_g4_ParamLimits

0xb8f8,	// (0x0000b8f8) list_single_graphic_heading_pane_g4

0x0db0,	// (0x00000db0) list_single_graphic_heading_pane_g5_ParamLimits

0x0db0,	// (0x00000db0) list_single_graphic_heading_pane_g5

0x0002,

0xefa2,	// (0x0000efa2) list_single_graphic_heading_pane_g_ParamLimits

0xefa2,	// (0x0000efa2) list_single_graphic_heading_pane_g

0x0dd2,	// (0x00000dd2) list_single_graphic_heading_pane_t1_ParamLimits

0x0dd2,	// (0x00000dd2) list_single_graphic_heading_pane_t1

0x0e3b,	// (0x00000e3b) list_single_graphic_heading_pane_t2_ParamLimits

0x0e3b,	// (0x00000e3b) list_single_graphic_heading_pane_t2

0x0001,

0xaac0,	// (0x0000aac0) list_single_graphic_heading_pane_t_ParamLimits

0xaac0,	// (0x0000aac0) list_single_graphic_heading_pane_t

0x59ab,	// (0x000059ab) list_single_large_graphic_pane_g1_ParamLimits

0x59ab,	// (0x000059ab) list_single_large_graphic_pane_g1

0x59b7,	// (0x000059b7) list_single_large_graphic_pane_g2_ParamLimits

0x59b7,	// (0x000059b7) list_single_large_graphic_pane_g2

0x59c3,	// (0x000059c3) list_single_large_graphic_pane_g3_ParamLimits

0x59c3,	// (0x000059c3) list_single_large_graphic_pane_g3

0x0002,

0xaf1d,	// (0x0000af1d) list_single_large_graphic_pane_g_ParamLimits

0xaf1d,	// (0x0000af1d) list_single_large_graphic_pane_g

0x3deb,	// (0x00003deb) wait_border_pane_g2_copy1

0xb909,	// (0x0000b909) list_single_large_graphic_pane_g4_cp2

0x59cf,	// (0x000059cf) list_single_large_graphic_pane_t1_ParamLimits

0x59cf,	// (0x000059cf) list_single_large_graphic_pane_t1

0x2387,	// (0x00002387) list_double_pane_g1_ParamLimits

0x2387,	// (0x00002387) list_double_pane_g1

0xb911,	// (0x0000b911) list_double_pane_g2_ParamLimits

0xb911,	// (0x0000b911) list_double_pane_g2

0x0001,

0xefa9,	// (0x0000efa9) list_double_pane_g_ParamLimits

0xefa9,	// (0x0000efa9) list_double_pane_g

0xb91d,	// (0x0000b91d) list_double_pane_t1_ParamLimits

0xb91d,	// (0x0000b91d) list_double_pane_t1

0xb933,	// (0x0000b933) list_double_pane_t2_ParamLimits

0xb933,	// (0x0000b933) list_double_pane_t2

0x0001,

0xefae,	// (0x0000efae) list_double_pane_t_ParamLimits

0xefae,	// (0x0000efae) list_double_pane_t

0xb945,	// (0x0000b945) list_double2_pane_g1_ParamLimits

0xb945,	// (0x0000b945) list_double2_pane_g1

0x0e9b,	// (0x00000e9b) list_double2_pane_g2_ParamLimits

0x0e9b,	// (0x00000e9b) list_double2_pane_g2

0x0001,

0xefb3,	// (0x0000efb3) list_double2_pane_g_ParamLimits

0xefb3,	// (0x0000efb3) list_double2_pane_g

0x0ea7,	// (0x00000ea7) list_double2_pane_t1_ParamLimits

0x0ea7,	// (0x00000ea7) list_double2_pane_t1

0xb956,	// (0x0000b956) list_double2_pane_t2_ParamLimits

0xb956,	// (0x0000b956) list_double2_pane_t2

0x0001,

0xefb8,	// (0x0000efb8) list_double2_pane_t_ParamLimits

0xefb8,	// (0x0000efb8) list_double2_pane_t

0x2387,	// (0x00002387) list_double_number_pane_g1_ParamLimits

0x2387,	// (0x00002387) list_double_number_pane_g1

0xb911,	// (0x0000b911) list_double_number_pane_g2_ParamLimits

0xb911,	// (0x0000b911) list_double_number_pane_g2

0x0001,

0xefa9,	// (0x0000efa9) list_double_number_pane_g_ParamLimits

0xefa9,	// (0x0000efa9) list_double_number_pane_g

0xb968,	// (0x0000b968) list_double_number_pane_t1_ParamLimits

0xb968,	// (0x0000b968) list_double_number_pane_t1

0xb97a,	// (0x0000b97a) list_double_number_pane_t2_ParamLimits

0xb97a,	// (0x0000b97a) list_double_number_pane_t2

0xb990,	// (0x0000b990) list_double_number_pane_t3_ParamLimits

0xb990,	// (0x0000b990) list_double_number_pane_t3

0x0002,

0xefbd,	// (0x0000efbd) list_double_number_pane_t_ParamLimits

0xefbd,	// (0x0000efbd) list_double_number_pane_t

0x446e,	// (0x0000446e) list_double_graphic_pane_g1_ParamLimits

0x446e,	// (0x0000446e) list_double_graphic_pane_g1

0xb9a2,	// (0x0000b9a2) list_double_graphic_pane_g2_ParamLimits

0xb9a2,	// (0x0000b9a2) list_double_graphic_pane_g2

0xb9b1,	// (0x0000b9b1) list_double_graphic_pane_g3_ParamLimits

0xb9b1,	// (0x0000b9b1) list_double_graphic_pane_g3

0x0003,

0xefc4,	// (0x0000efc4) list_double_graphic_pane_g_ParamLimits

0xefc4,	// (0x0000efc4) list_double_graphic_pane_g

0xb9c9,	// (0x0000b9c9) list_double_graphic_pane_t1_ParamLimits

0xb9c9,	// (0x0000b9c9) list_double_graphic_pane_t1

0xb9df,	// (0x0000b9df) list_double_graphic_pane_t2_ParamLimits

0xb9df,	// (0x0000b9df) list_double_graphic_pane_t2

0x0001,

0xefcd,	// (0x0000efcd) list_double_graphic_pane_t_ParamLimits

0xefcd,	// (0x0000efcd) list_double_graphic_pane_t

0xb9f1,	// (0x0000b9f1) list_double2_graphic_pane_g1_ParamLimits

0xb9f1,	// (0x0000b9f1) list_double2_graphic_pane_g1

0xb9fd,	// (0x0000b9fd) list_double2_graphic_pane_g2_ParamLimits

0xb9fd,	// (0x0000b9fd) list_double2_graphic_pane_g2

0xba09,	// (0x0000ba09) list_double2_graphic_pane_g3_ParamLimits

0xba09,	// (0x0000ba09) list_double2_graphic_pane_g3

0x0002,

0xefd2,	// (0x0000efd2) list_double2_graphic_pane_g_ParamLimits

0xefd2,	// (0x0000efd2) list_double2_graphic_pane_g

0xba15,	// (0x0000ba15) list_double2_graphic_pane_t1_ParamLimits

0xba15,	// (0x0000ba15) list_double2_graphic_pane_t1

0xba2b,	// (0x0000ba2b) list_double2_graphic_pane_t2_ParamLimits

0xba2b,	// (0x0000ba2b) list_double2_graphic_pane_t2

0x0001,

0xefd9,	// (0x0000efd9) list_double2_graphic_pane_t_ParamLimits

0xefd9,	// (0x0000efd9) list_double2_graphic_pane_t

0xba3d,	// (0x0000ba3d) list_double_large_graphic_pane_g1_ParamLimits

0xba3d,	// (0x0000ba3d) list_double_large_graphic_pane_g1

0xba68,	// (0x0000ba68) list_double_large_graphic_pane_g2_ParamLimits

0xba68,	// (0x0000ba68) list_double_large_graphic_pane_g2

0xb911,	// (0x0000b911) list_double_large_graphic_pane_g3_ParamLimits

0xb911,	// (0x0000b911) list_double_large_graphic_pane_g3

0xba79,	// (0x0000ba79) list_double_large_graphic_pane_g4_ParamLimits

0xba79,	// (0x0000ba79) list_double_large_graphic_pane_g4

0x0004,

0xefde,	// (0x0000efde) list_double_large_graphic_pane_g_ParamLimits

0xefde,	// (0x0000efde) list_double_large_graphic_pane_g

0xba8c,	// (0x0000ba8c) list_double_large_graphic_pane_t1_ParamLimits

0xba8c,	// (0x0000ba8c) list_double_large_graphic_pane_t1

0xbaa5,	// (0x0000baa5) list_double_large_graphic_pane_t2_ParamLimits

0xbaa5,	// (0x0000baa5) list_double_large_graphic_pane_t2

0x0001,

0xefe9,	// (0x0000efe9) list_double_large_graphic_pane_t_ParamLimits

0xefe9,	// (0x0000efe9) list_double_large_graphic_pane_t

0xbab7,	// (0x0000bab7) list_double2_large_graphic_pane_g1_ParamLimits

0xbab7,	// (0x0000bab7) list_double2_large_graphic_pane_g1

0xbac3,	// (0x0000bac3) list_double2_large_graphic_pane_g2_ParamLimits

0xbac3,	// (0x0000bac3) list_double2_large_graphic_pane_g2

0xba09,	// (0x0000ba09) list_double2_large_graphic_pane_g3_ParamLimits

0xba09,	// (0x0000ba09) list_double2_large_graphic_pane_g3

0x0002,

0xefee,	// (0x0000efee) list_double2_large_graphic_pane_g_ParamLimits

0xefee,	// (0x0000efee) list_double2_large_graphic_pane_g

0xbad4,	// (0x0000bad4) list_double2_large_graphic_pane_t1_ParamLimits

0xbad4,	// (0x0000bad4) list_double2_large_graphic_pane_t1

0xbaea,	// (0x0000baea) list_double2_large_graphic_pane_t2_ParamLimits

0xbaea,	// (0x0000baea) list_double2_large_graphic_pane_t2

0x0001,

0xeff5,	// (0x0000eff5) list_double2_large_graphic_pane_t_ParamLimits

0xeff5,	// (0x0000eff5) list_double2_large_graphic_pane_t

0xbafc,	// (0x0000bafc) list_double_heading_pane_g1_ParamLimits

0xbafc,	// (0x0000bafc) list_double_heading_pane_g1

0xbb0d,	// (0x0000bb0d) list_double_heading_pane_g2_ParamLimits

0xbb0d,	// (0x0000bb0d) list_double_heading_pane_g2

0x0001,

0xeffa,	// (0x0000effa) list_double_heading_pane_g_ParamLimits

0xeffa,	// (0x0000effa) list_double_heading_pane_g

0xbb19,	// (0x0000bb19) list_double_heading_pane_t1_ParamLimits

0xbb19,	// (0x0000bb19) list_double_heading_pane_t1

0xbb2f,	// (0x0000bb2f) list_double_heading_pane_t2_ParamLimits

0xbb2f,	// (0x0000bb2f) list_double_heading_pane_t2

0x0001,

0xefff,	// (0x0000efff) list_double_heading_pane_t_ParamLimits

0xefff,	// (0x0000efff) list_double_heading_pane_t

0x0fa9,	// (0x00000fa9) list_double_graphic_heading_pane_g1_ParamLimits

0x0fa9,	// (0x00000fa9) list_double_graphic_heading_pane_g1

0xbafc,	// (0x0000bafc) list_double_graphic_heading_pane_g2_ParamLimits

0xbafc,	// (0x0000bafc) list_double_graphic_heading_pane_g2

0xbb0d,	// (0x0000bb0d) list_double_graphic_heading_pane_g3_ParamLimits

0xbb0d,	// (0x0000bb0d) list_double_graphic_heading_pane_g3

0x0002,

0xf004,	// (0x0000f004) list_double_graphic_heading_pane_g_ParamLimits

0xf004,	// (0x0000f004) list_double_graphic_heading_pane_g

0xbb41,	// (0x0000bb41) list_double_graphic_heading_pane_t1_ParamLimits

0xbb41,	// (0x0000bb41) list_double_graphic_heading_pane_t1

0xbb57,	// (0x0000bb57) list_double_graphic_heading_pane_t2_ParamLimits

0xbb57,	// (0x0000bb57) list_double_graphic_heading_pane_t2

0x0001,

0xf00b,	// (0x0000f00b) list_double_graphic_heading_pane_t_ParamLimits

0xf00b,	// (0x0000f00b) list_double_graphic_heading_pane_t

0xba68,	// (0x0000ba68) list_double_time_pane_g1_ParamLimits

0xba68,	// (0x0000ba68) list_double_time_pane_g1

0xb911,	// (0x0000b911) list_double_time_pane_g2_ParamLimits

0xb911,	// (0x0000b911) list_double_time_pane_g2

0x0001,

0xf010,	// (0x0000f010) list_double_time_pane_g_ParamLimits

0xf010,	// (0x0000f010) list_double_time_pane_g

0xbb69,	// (0x0000bb69) list_double_time_pane_t1_ParamLimits

0xbb69,	// (0x0000bb69) list_double_time_pane_t1

0xbb7f,	// (0x0000bb7f) list_double_time_pane_t2_ParamLimits

0xbb7f,	// (0x0000bb7f) list_double_time_pane_t2

0xbb91,	// (0x0000bb91) list_double_time_pane_t3_ParamLimits

0xbb91,	// (0x0000bb91) list_double_time_pane_t3

0xbba3,	// (0x0000bba3) list_double_time_pane_t4_ParamLimits

0xbba3,	// (0x0000bba3) list_double_time_pane_t4

0x0003,

0xf015,	// (0x0000f015) list_double_time_pane_t_ParamLimits

0xf015,	// (0x0000f015) list_double_time_pane_t

0xb9fd,	// (0x0000b9fd) list_setting_pane_g1_ParamLimits

0xb9fd,	// (0x0000b9fd) list_setting_pane_g1

0xba09,	// (0x0000ba09) list_setting_pane_g2_ParamLimits

0xba09,	// (0x0000ba09) list_setting_pane_g2

0x0001,

0xf01e,	// (0x0000f01e) list_setting_pane_g_ParamLimits

0xf01e,	// (0x0000f01e) list_setting_pane_g

0xbbb5,	// (0x0000bbb5) list_setting_pane_t1_ParamLimits

0xbbb5,	// (0x0000bbb5) list_setting_pane_t1

0xbbcc,	// (0x0000bbcc) list_setting_pane_t2_ParamLimits

0xbbcc,	// (0x0000bbcc) list_setting_pane_t2

0x0002,

0xf023,	// (0x0000f023) list_setting_pane_t_ParamLimits

0xf023,	// (0x0000f023) list_setting_pane_t

0xbc09,	// (0x0000bc09) set_value_pane_cp_ParamLimits

0xbc09,	// (0x0000bc09) set_value_pane_cp

0xb9fd,	// (0x0000b9fd) list_setting_number_pane_g1_ParamLimits

0xb9fd,	// (0x0000b9fd) list_setting_number_pane_g1

0xba09,	// (0x0000ba09) list_setting_number_pane_g2_ParamLimits

0xba09,	// (0x0000ba09) list_setting_number_pane_g2

0x0001,

0xf01e,	// (0x0000f01e) list_setting_number_pane_g_ParamLimits

0xf01e,	// (0x0000f01e) list_setting_number_pane_g

0xbc15,	// (0x0000bc15) list_setting_number_pane_t1_ParamLimits

0xbc15,	// (0x0000bc15) list_setting_number_pane_t1

0xbc29,	// (0x0000bc29) list_setting_number_pane_t2_ParamLimits

0xbc29,	// (0x0000bc29) list_setting_number_pane_t2

0xbc40,	// (0x0000bc40) list_setting_number_pane_t3_ParamLimits

0xbc40,	// (0x0000bc40) list_setting_number_pane_t3

0x0003,

0xf02a,	// (0x0000f02a) list_setting_number_pane_t_ParamLimits

0xf02a,	// (0x0000f02a) list_setting_number_pane_t

0xbc09,	// (0x0000bc09) set_value_pane_ParamLimits

0xbc09,	// (0x0000bc09) set_value_pane

0x121b,	// (0x0000121b) bg_set_opt_pane_ParamLimits

0x121b,	// (0x0000121b) bg_set_opt_pane

0x123c,	// (0x0000123c) set_value_pane_t1

0x124a,	// (0x0000124a) slider_set_pane_cp3

0x1253,	// (0x00001253) volume_small_pane_cp

0x125c,	// (0x0000125c) list_form_gen_pane

0x1265,	// (0x00001265) scroll_pane_cp8

0xbc83,	// (0x0000bc83) form_field_data_pane_ParamLimits

0xbc83,	// (0x0000bc83) form_field_data_pane

0xbc9a,	// (0x0000bc9a) form_field_data_wide_pane_ParamLimits

0xbc9a,	// (0x0000bc9a) form_field_data_wide_pane

0xbcba,	// (0x0000bcba) form_field_popup_pane_ParamLimits

0xbcba,	// (0x0000bcba) form_field_popup_pane

0xbcd2,	// (0x0000bcd2) form_field_popup_wide_pane_ParamLimits

0xbcd2,	// (0x0000bcd2) form_field_popup_wide_pane

0x12f2,	// (0x000012f2) form_field_slider_pane_ParamLimits

0x12f2,	// (0x000012f2) form_field_slider_pane

0x1305,	// (0x00001305) form_field_slider_wide_pane_ParamLimits

0x1305,	// (0x00001305) form_field_slider_wide_pane

0x1318,	// (0x00001318) data_form_pane

0xbcf9,	// (0x0000bcf9) form_field_data_pane_t1

0x1348,	// (0x00001348) input_focus_pane

0x1356,	// (0x00001356) data_form_wide_pane

0x1382,	// (0x00001382) form_field_data_wide_pane_t1

0x0b62,	// (0x00000b62) input_focus_pane_cp6

0xbd13,	// (0x0000bd13) form_field_popup_pane_t1

0x1348,	// (0x00001348) input_focus_pane_cp7

0x13bb,	// (0x000013bb) list_form_pane

0x13cf,	// (0x000013cf) form_field_popup_wide_pane_t1

0x1348,	// (0x00001348) input_focus_pane_cp8

0x13e4,	// (0x000013e4) list_form_wide_pane

0xbd35,	// (0x0000bd35) form_field_slider_pane_t1_ParamLimits

0xbd35,	// (0x0000bd35) form_field_slider_pane_t1

0xbd4d,	// (0x0000bd4d) form_field_slider_pane_t2_ParamLimits

0xbd4d,	// (0x0000bd4d) form_field_slider_pane_t2

0x0001,

0xf033,	// (0x0000f033) form_field_slider_pane_t_ParamLimits

0xf033,	// (0x0000f033) form_field_slider_pane_t

0x0815,	// (0x00000815) input_focus_pane_cp9_ParamLimits

0x0815,	// (0x00000815) input_focus_pane_cp9

0xbd62,	// (0x0000bd62) slider_cont_pane_ParamLimits

0xbd62,	// (0x0000bd62) slider_cont_pane

0x1435,	// (0x00001435) form_field_slider_wide_pane_t1_ParamLimits

0x1435,	// (0x00001435) form_field_slider_wide_pane_t1

0x1447,	// (0x00001447) form_field_slider_wide_pane_t2_ParamLimits

0x1447,	// (0x00001447) form_field_slider_wide_pane_t2

0x0001,

0xab62,	// (0x0000ab62) form_field_slider_wide_pane_t_ParamLimits

0xab62,	// (0x0000ab62) form_field_slider_wide_pane_t

0x0815,	// (0x00000815) input_focus_pane_cp10_ParamLimits

0x0815,	// (0x00000815) input_focus_pane_cp10

0xbd76,	// (0x0000bd76) slider_cont_pane_cp1_ParamLimits

0xbd76,	// (0x0000bd76) slider_cont_pane_cp1

0xbd8a,	// (0x0000bd8a) slider_form_pane_cp

0x1475,	// (0x00001475) input_focus_pane_g1

0x147d,	// (0x0000147d) input_focus_pane_g2

0x1485,	// (0x00001485) input_focus_pane_g3

0x148d,	// (0x0000148d) input_focus_pane_g4

0x1495,	// (0x00001495) input_focus_pane_g5

0x149d,	// (0x0000149d) input_focus_pane_g6

0x14a5,	// (0x000014a5) input_focus_pane_g7

0x14ad,	// (0x000014ad) input_focus_pane_g8

0x14b5,	// (0x000014b5) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xab67,	// (0x0000ab67) input_focus_pane_g

0x3df4,	// (0x00003df4) wait_border_pane_g3_copy1

0xbd92,	// (0x0000bd92) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd3a3,	// (0x0000d3a3) data_form_wide_pane_t1

0xbdac,	// (0x0000bdac) list_form_graphic_pane_cp_ParamLimits

0xbdac,	// (0x0000bdac) list_form_graphic_pane_cp

0x4f5f,	// (0x00004f5f) slider_form_pane_g1

0x4f68,	// (0x00004f68) slider_form_pane_g2

0x0006,

0xf0e2,	// (0x0000f0e2) slider_form_pane_g

0xbdbf,	// (0x0000bdbf) list_form_graphic_pane_ParamLimits

0xbdbf,	// (0x0000bdbf) list_form_graphic_pane

0x14ef,	// (0x000014ef) list_form_graphic_pane_g1

0x14f7,	// (0x000014f7) list_form_graphic_pane_t1_ParamLimits

0x14f7,	// (0x000014f7) list_form_graphic_pane_t1

0x04ef,	// (0x000004ef) list_highlight_pane_cp5_ParamLimits

0x04ef,	// (0x000004ef) list_highlight_pane_cp5

0x150c,	// (0x0000150c) find_pane_g1

0x1515,	// (0x00001515) input_find_pane

0x151e,	// (0x0000151e) input_find_pane_g1_ParamLimits

0x151e,	// (0x0000151e) input_find_pane_g1

0x152a,	// (0x0000152a) input_find_pane_t1_ParamLimits

0x152a,	// (0x0000152a) input_find_pane_t1

0x153f,	// (0x0000153f) input_find_pane_t2_ParamLimits

0x153f,	// (0x0000153f) input_find_pane_t2

0x0001,

0xab7c,	// (0x0000ab7c) input_find_pane_t_ParamLimits

0xab7c,	// (0x0000ab7c) input_find_pane_t

0x1554,	// (0x00001554) input_focus_pane_cp5_ParamLimits

0x1554,	// (0x00001554) input_focus_pane_cp5

0x156e,	// (0x0000156e) bg_popup_window_pane_cp2_ParamLimits

0x156e,	// (0x0000156e) bg_popup_window_pane_cp2

0x157b,	// (0x0000157b) listscroll_menu_pane_ParamLimits

0x157b,	// (0x0000157b) listscroll_menu_pane

0xbddd,	// (0x0000bddd) popup_submenu_window_ParamLimits

0xbddd,	// (0x0000bddd) popup_submenu_window

0x15af,	// (0x000015af) find_popup_pane_g1

0x15b7,	// (0x000015b7) input_popup_find_pane_cp

0x1554,	// (0x00001554) input_focus_pane_cp4_ParamLimits

0x1554,	// (0x00001554) input_focus_pane_cp4

0x15cf,	// (0x000015cf) input_popup_find_pane_t1_ParamLimits

0x15cf,	// (0x000015cf) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x15fd,	// (0x000015fd) listscroll_popup_sub_pane

0x1605,	// (0x00001605) list_submenu_pane_ParamLimits

0x1605,	// (0x00001605) list_submenu_pane

0x1616,	// (0x00001616) scroll_pane_cp4

0x161e,	// (0x0000161e) list_single_popup_submenu_pane_ParamLimits

0x161e,	// (0x0000161e) list_single_popup_submenu_pane

0x1632,	// (0x00001632) list_single_popup_submenu_pane_g1

0x163a,	// (0x0000163a) list_single_popup_submenu_pane_t1_ParamLimits

0x163a,	// (0x0000163a) list_single_popup_submenu_pane_t1

0x0815,	// (0x00000815) bg_active_tab_pane_cp1_ParamLimits

0x0815,	// (0x00000815) bg_active_tab_pane_cp1

0xbe13,	// (0x0000be13) tabs_2_active_pane_g1

0xbe1b,	// (0x0000be1b) tabs_2_active_pane_t1

0x0815,	// (0x00000815) bg_passive_tab_pane_cp1_ParamLimits

0x0815,	// (0x00000815) bg_passive_tab_pane_cp1

0xbe13,	// (0x0000be13) tabs_2_passive_pane_g1

0xbe1b,	// (0x0000be1b) tabs_2_passive_pane_t1

0x04ef,	// (0x000004ef) bg_active_tab_pane_cp4

0xbe2d,	// (0x0000be2d) tabs_2_long_active_pane_t1

0x2ac2,	// (0x00002ac2) bg_passive_tab_pane_cp4

0x365a,	// (0x0000365a) list_single_midp_graphic_pane_g4_ParamLimits

0x04ef,	// (0x000004ef) bg_active_tab_pane_cp5

0xbe40,	// (0x0000be40) tabs_3_long_active_pane_t1

0x2ac2,	// (0x00002ac2) bg_passive_tab_pane_cp5

0x365a,	// (0x0000365a) list_single_midp_graphic_pane_g4

0x04ef,	// (0x000004ef) bg_popup_window_pane_cp13_ParamLimits

0x04ef,	// (0x000004ef) bg_popup_window_pane_cp13

0x16b1,	// (0x000016b1) listscroll_popup_fast_pane_ParamLimits

0x16b1,	// (0x000016b1) listscroll_popup_fast_pane

0x16bd,	// (0x000016bd) grid_popup_fast_pane_ParamLimits

0x16bd,	// (0x000016bd) grid_popup_fast_pane

0x16cf,	// (0x000016cf) scroll_pane_cp9_ParamLimits

0x16cf,	// (0x000016cf) scroll_pane_cp9

0x7253,	// (0x00007253) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7253,	// (0x00007253) list_single_graphic_hl_pane_t1_cp2

0x16f3,	// (0x000016f3) input_focus_pane_cp20_ParamLimits

0x16f3,	// (0x000016f3) input_focus_pane_cp20

0x1701,	// (0x00001701) query_popup_data_pane_t1_ParamLimits

0x1701,	// (0x00001701) query_popup_data_pane_t1

0x1714,	// (0x00001714) query_popup_data_pane_t2_ParamLimits

0x1714,	// (0x00001714) query_popup_data_pane_t2

0x175a,	// (0x0000175a) query_popup_data_pane_t3_ParamLimits

0x175a,	// (0x0000175a) query_popup_data_pane_t3

0x179b,	// (0x0000179b) query_popup_data_pane_t4_ParamLimits

0x179b,	// (0x0000179b) query_popup_data_pane_t4

0x17d7,	// (0x000017d7) query_popup_data_pane_t5_ParamLimits

0x17d7,	// (0x000017d7) query_popup_data_pane_t5

0x0004,

0xab81,	// (0x0000ab81) query_popup_data_pane_t_ParamLimits

0xab81,	// (0x0000ab81) query_popup_data_pane_t

0x1475,	// (0x00001475) bg_set_opt_pane_g1

0x147d,	// (0x0000147d) bg_set_opt_pane_g2

0x1485,	// (0x00001485) bg_set_opt_pane_g3

0x148d,	// (0x0000148d) bg_set_opt_pane_g4

0x1495,	// (0x00001495) bg_set_opt_pane_g5

0x149d,	// (0x0000149d) bg_set_opt_pane_g6

0x14a5,	// (0x000014a5) bg_set_opt_pane_g7

0x14ad,	// (0x000014ad) bg_set_opt_pane_g8

0x14b5,	// (0x000014b5) bg_set_opt_pane_g9

0x0008,

0xab8c,	// (0x0000ab8c) bg_set_opt_pane_g

0x20bc,	// (0x000020bc) control_top_pane_stacon_ParamLimits

0x20bc,	// (0x000020bc) control_top_pane_stacon

0x210f,	// (0x0000210f) signal_pane_stacon_ParamLimits

0x210f,	// (0x0000210f) signal_pane_stacon

0x2134,	// (0x00002134) stacon_top_pane_g1_ParamLimits

0x2134,	// (0x00002134) stacon_top_pane_g1

0x2156,	// (0x00002156) title_pane_stacon_ParamLimits

0x2156,	// (0x00002156) title_pane_stacon

0x2180,	// (0x00002180) uni_indicator_pane_stacon_ParamLimits

0x2180,	// (0x00002180) uni_indicator_pane_stacon

0x2195,	// (0x00002195) battery_pane_stacon_ParamLimits

0x2195,	// (0x00002195) battery_pane_stacon

0x21d9,	// (0x000021d9) control_bottom_pane_stacon_ParamLimits

0x21d9,	// (0x000021d9) control_bottom_pane_stacon

0x21fc,	// (0x000021fc) navi_pane_stacon_ParamLimits

0x21fc,	// (0x000021fc) navi_pane_stacon

0x221f,	// (0x0000221f) stacon_bottom_pane_g1_ParamLimits

0x221f,	// (0x0000221f) stacon_bottom_pane_g1

0x180e,	// (0x0000180e) aid_levels_signal_lsc_ParamLimits

0x180e,	// (0x0000180e) aid_levels_signal_lsc

0x1825,	// (0x00001825) signal_pane_stacon_g1_ParamLimits

0x1825,	// (0x00001825) signal_pane_stacon_g1

0x1839,	// (0x00001839) signal_pane_stacon_g2_ParamLimits

0x1839,	// (0x00001839) signal_pane_stacon_g2

0x0001,

0xab9f,	// (0x0000ab9f) signal_pane_stacon_g_ParamLimits

0xab9f,	// (0x0000ab9f) signal_pane_stacon_g

0x187b,	// (0x0000187b) title_pane_stacon_t1_ParamLimits

0x187b,	// (0x0000187b) title_pane_stacon_t1

0x18a0,	// (0x000018a0) uni_indicator_pane_stacon_g1

0x18aa,	// (0x000018aa) uni_indicator_pane_stacon_g2

0x18b4,	// (0x000018b4) uni_indicator_pane_stacon_g3

0x18be,	// (0x000018be) uni_indicator_pane_stacon_g4

0x0003,

0xabab,	// (0x0000abab) uni_indicator_pane_stacon_g

0x18c8,	// (0x000018c8) control_top_pane_stacon_g1

0x18d0,	// (0x000018d0) control_top_pane_stacon_t1_ParamLimits

0x18d0,	// (0x000018d0) control_top_pane_stacon_t1

0x1907,	// (0x00001907) aid_levels_battery_lsc_ParamLimits

0x1907,	// (0x00001907) aid_levels_battery_lsc

0x191f,	// (0x0000191f) battery_pane_stacon_g1_ParamLimits

0x191f,	// (0x0000191f) battery_pane_stacon_g1

0x1932,	// (0x00001932) battery_pane_stacon_g2_ParamLimits

0x1932,	// (0x00001932) battery_pane_stacon_g2

0x0001,

0xabb4,	// (0x0000abb4) battery_pane_stacon_g_ParamLimits

0xabb4,	// (0x0000abb4) battery_pane_stacon_g

0x1970,	// (0x00001970) navi_icon_pane_stacon

0x1984,	// (0x00001984) navi_navi_pane_stacon

0x1970,	// (0x00001970) navi_text_pane_stacon

0x18c8,	// (0x000018c8) control_bottom_pane_stacon_g1

0x1998,	// (0x00001998) control_bottom_pane_stacon_t1_ParamLimits

0x1998,	// (0x00001998) control_bottom_pane_stacon_t1

0xbe52,	// (0x0000be52) grid_app_pane_ParamLimits

0xbe52,	// (0x0000be52) grid_app_pane

0xbe88,	// (0x0000be88) scroll_pane_cp15_ParamLimits

0xbe88,	// (0x0000be88) scroll_pane_cp15

0xbea1,	// (0x0000bea1) cell_app_pane_ParamLimits

0xbea1,	// (0x0000bea1) cell_app_pane

0xbee8,	// (0x0000bee8) cell_app_pane_g1_ParamLimits

0xbee8,	// (0x0000bee8) cell_app_pane_g1

0x1a66,	// (0x00001a66) cell_app_pane_g2_ParamLimits

0x1a66,	// (0x00001a66) cell_app_pane_g2

0x0001,

0xf038,	// (0x0000f038) cell_app_pane_g_ParamLimits

0xf038,	// (0x0000f038) cell_app_pane_g

0xbf08,	// (0x0000bf08) cell_app_pane_t1_ParamLimits

0xbf08,	// (0x0000bf08) cell_app_pane_t1

0x1a89,	// (0x00001a89) grid_highlight_pane_ParamLimits

0x1a89,	// (0x00001a89) grid_highlight_pane

0x1475,	// (0x00001475) cell_highlight_pane_g1

0x147d,	// (0x0000147d) cell_highlight_pane_g2

0x1485,	// (0x00001485) cell_highlight_pane_g3

0x148d,	// (0x0000148d) cell_highlight_pane_g4

0x1495,	// (0x00001495) cell_highlight_pane_g5

0x149d,	// (0x0000149d) cell_highlight_pane_g6

0x14a5,	// (0x000014a5) cell_highlight_pane_g7

0x14ad,	// (0x000014ad) cell_highlight_pane_g8

0x14b5,	// (0x000014b5) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xab67,	// (0x0000ab67) cell_highlight_pane_g

0x1aad,	// (0x00001aad) bg_scroll_pane

0x1acc,	// (0x00001acc) scroll_handle_pane

0x1b1d,	// (0x00001b1d) scroll_bg_pane_g1

0x1b32,	// (0x00001b32) scroll_bg_pane_g2

0x1b4a,	// (0x00001b4a) scroll_bg_pane_g3

0x0002,

0xabbe,	// (0x0000abbe) scroll_bg_pane_g

0x1b5f,	// (0x00001b5f) scroll_handle_focus_pane_ParamLimits

0x1b5f,	// (0x00001b5f) scroll_handle_focus_pane

0x1b1d,	// (0x00001b1d) scroll_handle_pane_g1

0x1b6c,	// (0x00001b6c) scroll_handle_pane_g2

0x1b4a,	// (0x00001b4a) scroll_handle_pane_g3

0x0002,

0xabc5,	// (0x0000abc5) scroll_handle_pane_g

0x1554,	// (0x00001554) bg_popup_sub_pane_cp21_ParamLimits

0x1554,	// (0x00001554) bg_popup_sub_pane_cp21

0x1b80,	// (0x00001b80) popup_fep_japan_predictive_window_t1_ParamLimits

0x1b80,	// (0x00001b80) popup_fep_japan_predictive_window_t1

0x1b9a,	// (0x00001b9a) popup_fep_japan_predictive_window_t2_ParamLimits

0x1b9a,	// (0x00001b9a) popup_fep_japan_predictive_window_t2

0x1bcd,	// (0x00001bcd) popup_fep_japan_predictive_window_t3_ParamLimits

0x1bcd,	// (0x00001bcd) popup_fep_japan_predictive_window_t3

0x0002,

0xabcc,	// (0x0000abcc) popup_fep_japan_predictive_window_t_ParamLimits

0xabcc,	// (0x0000abcc) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c04,	// (0x00001c04) listscroll_japin_cand_pane

0x1c0c,	// (0x00001c0c) popup_fep_japan_candidate_window_t1

0x1c1a,	// (0x00001c1a) candidate_pane_ParamLimits

0x1c1a,	// (0x00001c1a) candidate_pane

0x1c2c,	// (0x00001c2c) scroll_pane_cp30

0x1c34,	// (0x00001c34) list_single_popup_jap_candidate_pane_ParamLimits

0x1c34,	// (0x00001c34) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1c48,	// (0x00001c48) list_single_popup_jap_candidate_pane_t1

0x1c57,	// (0x00001c57) level_1_signal

0x1c64,	// (0x00001c64) level_2_signal

0x1c71,	// (0x00001c71) level_3_signal

0x1c7e,	// (0x00001c7e) level_4_signal

0x1c8b,	// (0x00001c8b) level_5_signal

0x1c98,	// (0x00001c98) level_6_signal

0x1ca5,	// (0x00001ca5) level_7_signal

0x1c57,	// (0x00001c57) level_1_battery

0x1c64,	// (0x00001c64) level_2_battery

0x1c71,	// (0x00001c71) level_3_battery

0x1c7e,	// (0x00001c7e) level_4_battery

0x1c8b,	// (0x00001c8b) level_5_battery

0x1c98,	// (0x00001c98) level_6_battery

0x1ca5,	// (0x00001ca5) level_7_battery

0x1ce9,	// (0x00001ce9) list_menu_pane_ParamLimits

0x1ce9,	// (0x00001ce9) list_menu_pane

0x1cff,	// (0x00001cff) scroll_pane_cp25_ParamLimits

0x1cff,	// (0x00001cff) scroll_pane_cp25

0x1d18,	// (0x00001d18) list_double2_graphic_pane_cp2_ParamLimits

0x1d18,	// (0x00001d18) list_double2_graphic_pane_cp2

0x1d18,	// (0x00001d18) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d18,	// (0x00001d18) list_double2_large_graphic_pane_cp2

0x1d18,	// (0x00001d18) list_double2_pane_cp2_ParamLimits

0x1d18,	// (0x00001d18) list_double2_pane_cp2

0x1d18,	// (0x00001d18) list_double_graphic_pane_cp2_ParamLimits

0x1d18,	// (0x00001d18) list_double_graphic_pane_cp2

0x1d18,	// (0x00001d18) list_double_large_graphic_pane_cp2_ParamLimits

0x1d18,	// (0x00001d18) list_double_large_graphic_pane_cp2

0x1d18,	// (0x00001d18) list_double_number_pane_cp2_ParamLimits

0x1d18,	// (0x00001d18) list_double_number_pane_cp2

0x1d18,	// (0x00001d18) list_double_pane_cp2_ParamLimits

0x1d18,	// (0x00001d18) list_double_pane_cp2

0xbf30,	// (0x0000bf30) list_single_2graphic_pane_cp2_ParamLimits

0xbf30,	// (0x0000bf30) list_single_2graphic_pane_cp2

0xbf30,	// (0x0000bf30) list_single_graphic_heading_pane_cp2_ParamLimits

0xbf30,	// (0x0000bf30) list_single_graphic_heading_pane_cp2

0xbf30,	// (0x0000bf30) list_single_graphic_pane_cp2_ParamLimits

0xbf30,	// (0x0000bf30) list_single_graphic_pane_cp2

0xbf30,	// (0x0000bf30) list_single_heading_pane_cp2_ParamLimits

0xbf30,	// (0x0000bf30) list_single_heading_pane_cp2

0x1d52,	// (0x00001d52) list_single_large_graphic_pane_cp2_ParamLimits

0x1d52,	// (0x00001d52) list_single_large_graphic_pane_cp2

0xbf30,	// (0x0000bf30) list_single_number_heading_pane_cp2_ParamLimits

0xbf30,	// (0x0000bf30) list_single_number_heading_pane_cp2

0xbf30,	// (0x0000bf30) list_single_number_pane_cp2_ParamLimits

0xbf30,	// (0x0000bf30) list_single_number_pane_cp2

0xbf30,	// (0x0000bf30) list_single_pane_cp2_ParamLimits

0xbf30,	// (0x0000bf30) list_single_pane_cp2

0x1e28,	// (0x00001e28) bg_popup_sub_pane_cp22

0x1e4a,	// (0x00001e4a) popup_side_volume_key_window_g1

0x1e6e,	// (0x00001e6e) popup_side_volume_key_window_t1

0x1e8a,	// (0x00001e8a) volume_small_pane_cp1

0x0815,	// (0x00000815) bg_popup_sub_pane_cp24_ParamLimits

0x0815,	// (0x00000815) bg_popup_sub_pane_cp24

0x1e92,	// (0x00001e92) fep_china_uni_candidate_pane_ParamLimits

0x1e92,	// (0x00001e92) fep_china_uni_candidate_pane

0x1ea6,	// (0x00001ea6) fep_china_uni_entry_pane

0x1eb6,	// (0x00001eb6) popup_fep_china_uni_window_g1

0x1ed2,	// (0x00001ed2) fep_china_uni_entry_pane_g1

0x1eda,	// (0x00001eda) fep_china_uni_entry_pane_g2

0x0001,

0xabfd,	// (0x0000abfd) fep_china_uni_entry_pane_g

0x1ee2,	// (0x00001ee2) fep_entry_item_pane

0x1eec,	// (0x00001eec) fep_candidate_item_pane

0x1ef4,	// (0x00001ef4) fep_china_uni_candidate_pane_g1

0x1efc,	// (0x00001efc) fep_china_uni_candidate_pane_g2

0x1f04,	// (0x00001f04) fep_china_uni_candidate_pane_g3

0x1f0c,	// (0x00001f0c) fep_china_uni_candidate_pane_g4

0x0003,

0xac02,	// (0x0000ac02) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f14,	// (0x00001f14) fep_entry_item_pane_t1_ParamLimits

0x1f14,	// (0x00001f14) fep_entry_item_pane_t1

0x1f2a,	// (0x00001f2a) fep_candidate_item_pane_t1_ParamLimits

0x1f2a,	// (0x00001f2a) fep_candidate_item_pane_t1

0x1f3f,	// (0x00001f3f) fep_candidate_item_pane_t2_ParamLimits

0x1f3f,	// (0x00001f3f) fep_candidate_item_pane_t2

0x0001,

0xac0b,	// (0x0000ac0b) fep_candidate_item_pane_t_ParamLimits

0xac0b,	// (0x0000ac0b) fep_candidate_item_pane_t

0x04ef,	// (0x000004ef) list_highlight_pane_cp31_ParamLimits

0x04ef,	// (0x000004ef) list_highlight_pane_cp31

0x1f51,	// (0x00001f51) level_1_signal_lsc

0x1f5a,	// (0x00001f5a) level_2_signal_lsc

0x1f63,	// (0x00001f63) level_3_signal_lsc

0x1f6c,	// (0x00001f6c) level_4_signal_lsc

0x1f75,	// (0x00001f75) level_5_signal_lsc

0x1f7e,	// (0x00001f7e) level_6_signal_lsc

0x1f87,	// (0x00001f87) level_7_signal_lsc

0x1f87,	// (0x00001f87) level_1_battery_lsc

0x1f90,	// (0x00001f90) level_2_battery_lsc

0x1f99,	// (0x00001f99) level_3_battery_lsc

0x1fa2,	// (0x00001fa2) level_4_battery_lsc

0x1fab,	// (0x00001fab) level_5_battery_lsc

0x1fb4,	// (0x00001fb4) level_6_battery_lsc

0x1f51,	// (0x00001f51) level_7_battery_lsc

0x1fbd,	// (0x00001fbd) scroll_handle_focus_pane_g1

0x1fc6,	// (0x00001fc6) scroll_handle_focus_pane_g2

0x1fcf,	// (0x00001fcf) scroll_handle_focus_pane_g3

0x0002,

0xac10,	// (0x0000ac10) scroll_handle_focus_pane_g

0x1fd8,	// (0x00001fd8) list_single_2graphic_pane_g1_ParamLimits

0x1fd8,	// (0x00001fd8) list_single_2graphic_pane_g1

0xb8f8,	// (0x0000b8f8) list_single_2graphic_pane_g2_ParamLimits

0xb8f8,	// (0x0000b8f8) list_single_2graphic_pane_g2

0x0db0,	// (0x00000db0) list_single_2graphic_pane_g3_ParamLimits

0x0db0,	// (0x00000db0) list_single_2graphic_pane_g3

0x1fe4,	// (0x00001fe4) list_single_2graphic_pane_g4_ParamLimits

0x1fe4,	// (0x00001fe4) list_single_2graphic_pane_g4

0x0003,

0xf046,	// (0x0000f046) list_single_2graphic_pane_g_ParamLimits

0xf046,	// (0x0000f046) list_single_2graphic_pane_g

0x1ff5,	// (0x00001ff5) list_single_2graphic_pane_t1_ParamLimits

0x1ff5,	// (0x00001ff5) list_single_2graphic_pane_t1

0xbfbe,	// (0x0000bfbe) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbfbe,	// (0x0000bfbe) list_double2_graphic_large_graphic_pane_g1

0xbac3,	// (0x0000bac3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbac3,	// (0x0000bac3) list_double2_graphic_large_graphic_pane_g2

0xba09,	// (0x0000ba09) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba09,	// (0x0000ba09) list_double2_graphic_large_graphic_pane_g3

0xbfd0,	// (0x0000bfd0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbfd0,	// (0x0000bfd0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf04f,	// (0x0000f04f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf04f,	// (0x0000f04f) list_double2_graphic_large_graphic_pane_g

0xbfdc,	// (0x0000bfdc) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbfdc,	// (0x0000bfdc) list_double2_graphic_large_graphic_pane_t1

0xbff2,	// (0x0000bff2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbff2,	// (0x0000bff2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf058,	// (0x0000f058) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf058,	// (0x0000f058) list_double2_graphic_large_graphic_pane_t

0x22e8,	// (0x000022e8) popup_fast_swap_window_ParamLimits

0x22e8,	// (0x000022e8) popup_fast_swap_window

0x2304,	// (0x00002304) popup_side_volume_key_window

0x231e,	// (0x0000231e) stacon_top_pane

0x2328,	// (0x00002328) status_pane_ParamLimits

0x2328,	// (0x00002328) status_pane

0x231e,	// (0x0000231e) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x1265,	// (0x00001265) scroll_pane_cp121

0x125c,	// (0x0000125c) set_content_pane

0x2082,	// (0x00002082) bg_active_tab_pane_g1_cp1

0x2070,	// (0x00002070) bg_active_tab_pane_g2_cp1

0x208b,	// (0x0000208b) bg_active_tab_pane_g3_cp1

0x2082,	// (0x00002082) bg_passive_tab_pane_g1_cp1

0x2070,	// (0x00002070) bg_passive_tab_pane_g2_cp1

0x208b,	// (0x0000208b) bg_passive_tab_pane_g3_cp1

0xc004,	// (0x0000c004) bg_active_tab_pane_g1_cp2

0x2070,	// (0x00002070) bg_active_tab_pane_g2_cp2

0xc00d,	// (0x0000c00d) bg_active_tab_pane_g3_cp2

0xc004,	// (0x0000c004) bg_passive_tab_pane_g1_cp2

0x2070,	// (0x00002070) bg_passive_tab_pane_g2_cp2

0xc00d,	// (0x0000c00d) bg_passive_tab_pane_g3_cp2

0xc016,	// (0x0000c016) bg_active_tab_pane_g1_cp3

0x2070,	// (0x00002070) bg_active_tab_pane_g2_cp3

0xc01f,	// (0x0000c01f) bg_active_tab_pane_g3_cp3

0xc016,	// (0x0000c016) bg_passive_tab_pane_g1_cp3

0x2070,	// (0x00002070) bg_passive_tab_pane_g2_cp3

0xc01f,	// (0x0000c01f) bg_passive_tab_pane_g3_cp3

0xc028,	// (0x0000c028) bg_active_tab_pane_g1_cp4

0x2070,	// (0x00002070) bg_active_tab_pane_g2_cp4

0xc031,	// (0x0000c031) bg_active_tab_pane_g3_cp4

0xc028,	// (0x0000c028) bg_passive_tab_pane_g1_cp4

0x2070,	// (0x00002070) bg_passive_tab_pane_g2_cp4

0xc031,	// (0x0000c031) bg_passive_tab_pane_g3_cp4

0x223b,	// (0x0000223b) bg_active_tab_pane_g1_cp5

0x2070,	// (0x00002070) bg_active_tab_pane_g2_cp5

0x2244,	// (0x00002244) bg_active_tab_pane_g3_cp5

0x223b,	// (0x0000223b) bg_passive_tab_pane_g1_cp5

0x2070,	// (0x00002070) bg_passive_tab_pane_g2_cp5

0x2244,	// (0x00002244) bg_passive_tab_pane_g3_cp5

0x5736,	// (0x00005736) list_set_graphic_pane_ParamLimits

0x5736,	// (0x00005736) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0x226d,	// (0x0000226d) list_set_graphic_pane_g1_ParamLimits

0x226d,	// (0x0000226d) list_set_graphic_pane_g1

0x2279,	// (0x00002279) list_set_graphic_pane_g2_ParamLimits

0x2279,	// (0x00002279) list_set_graphic_pane_g2

0x0001,

0xac2e,	// (0x0000ac2e) list_set_graphic_pane_g_ParamLimits

0xac2e,	// (0x0000ac2e) list_set_graphic_pane_g

0x0009,

0xafb6,	// (0x0000afb6) volume_small_pane_cp_g

0xc03a,	// (0x0000c03a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc03a,	// (0x0000c03a) list_double2_large_graphic_pane_g1_cp2

0xc048,	// (0x0000c048) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc048,	// (0x0000c048) list_double2_large_graphic_pane_g2_cp2

0x22b8,	// (0x000022b8) list_double2_large_graphic_pane_g3_cp2

0x22c0,	// (0x000022c0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22c0,	// (0x000022c0) list_double2_large_graphic_pane_t1_cp2

0x22d6,	// (0x000022d6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x22d6,	// (0x000022d6) list_double2_large_graphic_pane_t2_cp2

0xd186,	// (0x0000d186) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd186,	// (0x0000d186) list_double_large_graphic_pane_g1_cp2

0xd199,	// (0x0000d199) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd199,	// (0x0000d199) list_double_large_graphic_pane_g2_cp2

0x2444,	// (0x00002444) list_double_large_graphic_pane_g3_cp2

0x4a4d,	// (0x00004a4d) list_double_large_graphic_pane_g4_cp

0x4a55,	// (0x00004a55) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a55,	// (0x00004a55) list_double_large_graphic_pane_t1_cp2

0x4a6c,	// (0x00004a6c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a6c,	// (0x00004a6c) list_double_large_graphic_pane_t2_cp2

0xc059,	// (0x0000c059) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc059,	// (0x0000c059) list_double2_graphic_pane_g1_cp2

0xc067,	// (0x0000c067) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc067,	// (0x0000c067) list_double2_graphic_pane_g2_cp2

0xc078,	// (0x0000c078) list_double2_graphic_pane_g3_cp2

0x235f,	// (0x0000235f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x235f,	// (0x0000235f) list_double2_graphic_pane_t1_cp2

0x2375,	// (0x00002375) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2375,	// (0x00002375) list_double2_graphic_pane_t2_cp2

0x2387,	// (0x00002387) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2387,	// (0x00002387) list_single_number_heading_pane_g1_cp2

0x2393,	// (0x00002393) list_single_number_heading_pane_g2_cp2

0x239b,	// (0x0000239b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x239b,	// (0x0000239b) list_single_number_heading_pane_t1_cp2

0xc082,	// (0x0000c082) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc082,	// (0x0000c082) list_single_number_heading_pane_t2_cp2

0x23c3,	// (0x000023c3) list_single_number_heading_pane_t3_cp2_ParamLimits

0x23c3,	// (0x000023c3) list_single_number_heading_pane_t3_cp2

0x2387,	// (0x00002387) list_single_heading_pane_g1_cp2_ParamLimits

0x2387,	// (0x00002387) list_single_heading_pane_g1_cp2

0x2393,	// (0x00002393) list_single_heading_pane_g2_cp2

0x239b,	// (0x0000239b) list_single_heading_pane_t1_cp2_ParamLimits

0x239b,	// (0x0000239b) list_single_heading_pane_t1_cp2

0xd172,	// (0x0000d172) list_single_heading_pane_t2_cp2_ParamLimits

0xd172,	// (0x0000d172) list_single_heading_pane_t2_cp2

0x477d,	// (0x0000477d) list_double_graphic_pane_g1_cp2_ParamLimits

0x477d,	// (0x0000477d) list_double_graphic_pane_g1_cp2

0x4789,	// (0x00004789) list_double_graphic_pane_g2_cp2_ParamLimits

0x4789,	// (0x00004789) list_double_graphic_pane_g2_cp2

0x4798,	// (0x00004798) list_double_graphic_pane_g3_cp2

0x47a0,	// (0x000047a0) list_double_graphic_pane_t1_cp2_ParamLimits

0x47a0,	// (0x000047a0) list_double_graphic_pane_t1_cp2

0x47b6,	// (0x000047b6) list_double_graphic_pane_t2_cp2_ParamLimits

0x47b6,	// (0x000047b6) list_double_graphic_pane_t2_cp2

0x2438,	// (0x00002438) list_double_number_pane_g1_cp2_ParamLimits

0x2438,	// (0x00002438) list_double_number_pane_g1_cp2

0x2444,	// (0x00002444) list_double_number_pane_g2_cp2

0xd14c,	// (0x0000d14c) list_double_number_pane_t1_cp2_ParamLimits

0xd14c,	// (0x0000d14c) list_double_number_pane_t1_cp2

0x4755,	// (0x00004755) list_double_number_pane_t2_cp2_ParamLimits

0x4755,	// (0x00004755) list_double_number_pane_t2_cp2

0x476b,	// (0x0000476b) list_double_number_pane_t3_cp2_ParamLimits

0x476b,	// (0x0000476b) list_double_number_pane_t3_cp2

0xd089,	// (0x0000d089) list_single_graphic_pane_g1_cp2_ParamLimits

0xd089,	// (0x0000d089) list_single_graphic_pane_g1_cp2

0x0da4,	// (0x00000da4) list_single_graphic_pane_g2_cp2_ParamLimits

0x0da4,	// (0x00000da4) list_single_graphic_pane_g2_cp2

0x249c,	// (0x0000249c) list_single_graphic_pane_g3_cp2

0x45ef,	// (0x000045ef) list_single_graphic_pane_t1_cp2_ParamLimits

0x45ef,	// (0x000045ef) list_single_graphic_pane_t1_cp2

0x0da4,	// (0x00000da4) list_single_number_pane_g1_cp2_ParamLimits

0x0da4,	// (0x00000da4) list_single_number_pane_g1_cp2

0x249c,	// (0x0000249c) list_single_number_pane_g2_cp2

0x45ef,	// (0x000045ef) list_single_number_pane_t1_cp2_ParamLimits

0x45ef,	// (0x000045ef) list_single_number_pane_t1_cp2

0xd075,	// (0x0000d075) list_single_number_pane_t2_cp2_ParamLimits

0xd075,	// (0x0000d075) list_single_number_pane_t2_cp2

0xc048,	// (0x0000c048) list_double2_pane_g1_cp2_ParamLimits

0xc048,	// (0x0000c048) list_double2_pane_g1_cp2

0x22b8,	// (0x000022b8) list_double2_pane_g2_cp2

0x2410,	// (0x00002410) list_double2_pane_t1_cp2_ParamLimits

0x2410,	// (0x00002410) list_double2_pane_t1_cp2

0x2426,	// (0x00002426) list_double2_pane_t2_cp2_ParamLimits

0x2426,	// (0x00002426) list_double2_pane_t2_cp2

0x2438,	// (0x00002438) list_double_pane_g1_cp2_ParamLimits

0x2438,	// (0x00002438) list_double_pane_g1_cp2

0x2444,	// (0x00002444) list_double_pane_g2_cp2

0x244c,	// (0x0000244c) list_double_pane_t1_cp2_ParamLimits

0x244c,	// (0x0000244c) list_double_pane_t1_cp2

0x2462,	// (0x00002462) list_double_pane_t2_cp2_ParamLimits

0x2462,	// (0x00002462) list_double_pane_t2_cp2

0x248c,	// (0x0000248c) list_single_pane_cp2_g3

0x0da4,	// (0x00000da4) list_single_pane_g1_cp2_ParamLimits

0x0da4,	// (0x00000da4) list_single_pane_g1_cp2

0x249c,	// (0x0000249c) list_single_pane_g2_cp2

0x24a4,	// (0x000024a4) list_single_pane_t1_cp2_ParamLimits

0x24a4,	// (0x000024a4) list_single_pane_t1_cp2

0xc0ae,	// (0x0000c0ae) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc0ae,	// (0x0000c0ae) list_single_large_graphic_pane_g1_cp2

0x24c8,	// (0x000024c8) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x24c8,	// (0x000024c8) list_single_large_graphic_pane_g2_cp2

0x24d4,	// (0x000024d4) list_single_large_graphic_pane_g3_cp2

0x24dc,	// (0x000024dc) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x24dc,	// (0x000024dc) list_single_large_graphic_pane_g4_cp1

0x24f6,	// (0x000024f6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x24f6,	// (0x000024f6) list_single_large_graphic_pane_t1_cp2

0x446e,	// (0x0000446e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x446e,	// (0x0000446e) list_single_graphic_heading_pane_g1_cp2

0xcf14,	// (0x0000cf14) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xcf14,	// (0x0000cf14) list_single_graphic_heading_pane_g4_cp2

0x249c,	// (0x0000249c) list_single_graphic_heading_pane_g5_cp2

0x447a,	// (0x0000447a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x447a,	// (0x0000447a) list_single_graphic_heading_pane_t1_cp2

0xcf25,	// (0x0000cf25) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xcf25,	// (0x0000cf25) list_single_graphic_heading_pane_t2_cp2

0x442f,	// (0x0000442f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x442f,	// (0x0000442f) list_single_2graphic_pane_g1_cp2

0xcf14,	// (0x0000cf14) list_single_2graphic_pane_g2_cp2_ParamLimits

0xcf14,	// (0x0000cf14) list_single_2graphic_pane_g2_cp2

0x249c,	// (0x0000249c) list_single_2graphic_pane_g3_cp2

0x444c,	// (0x0000444c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x444c,	// (0x0000444c) list_single_2graphic_pane_g4_cp2

0x4458,	// (0x00004458) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4458,	// (0x00004458) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4007,	// (0x00004007) list_highlight_pane_g1_cp1

0x400f,	// (0x0000400f) list_highlight_pane_g2_cp1

0x4017,	// (0x00004017) list_highlight_pane_g3_cp1

0x401f,	// (0x0000401f) list_highlight_pane_g4_cp1

0x4027,	// (0x00004027) list_highlight_pane_g5_cp1

0x402f,	// (0x0000402f) list_highlight_pane_g6_cp1

0x4037,	// (0x00004037) list_highlight_pane_g7_cp1

0x403f,	// (0x0000403f) list_highlight_pane_g8_cp1

0x4047,	// (0x00004047) list_highlight_pane_g9_cp1

0xced6,	// (0x0000ced6) form_field_slider_pane_t3

0xcee6,	// (0x0000cee6) form_field_slider_pane_t4

0x3f3b,	// (0x00003f3b) slider_form_pane_ParamLimits

0x3f3b,	// (0x00003f3b) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x487f,	// (0x0000487f) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xadbe,	// (0x0000adbe) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x250c,	// (0x0000250c) text_digital

0x251b,	// (0x0000251b) text_primary

0x252a,	// (0x0000252a) text_primary_small

0x2539,	// (0x00002539) text_secondary

0x2548,	// (0x00002548) text_title

0x5167,	// (0x00005167) bg_passive_tab_pane_g1_cp3_srt

0x2070,	// (0x00002070) bg_passive_tab_pane_g2_cp3_srt

0x5170,	// (0x00005170) bg_passive_tab_pane_g3_cp3_srt

0x0815,	// (0x00000815) bg_active_tab_pane_cp3_srt_ParamLimits

0x0815,	// (0x00000815) bg_active_tab_pane_cp3_srt

0x5179,	// (0x00005179) tabs_4_active_pane_srt_g1

0xd45f,	// (0x0000d45f) tabs_4_active_pane_srt_t1_ParamLimits

0xd45f,	// (0x0000d45f) tabs_4_active_pane_srt_t1

0x5167,	// (0x00005167) bg_active_tab_pane_g1_cp3_copy1

0x2070,	// (0x00002070) bg_active_tab_pane_g2_cp3_copy1

0x5170,	// (0x00005170) bg_active_tab_pane_g3_cp3_copy1

0x04ef,	// (0x000004ef) tabs_2_long_active_pane_srt_ParamLimits

0x04ef,	// (0x000004ef) tabs_2_long_active_pane_srt

0x04ef,	// (0x000004ef) tabs_2_long_passive_pane_srt_ParamLimits

0x04ef,	// (0x000004ef) tabs_2_long_passive_pane_srt

0x2ac2,	// (0x00002ac2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2ac2,	// (0x00002ac2) bg_passive_tab_pane_cp4_srt

0x4d24,	// (0x00004d24) bg_passive_tab_pane_g1_cp4_srt

0x2070,	// (0x00002070) bg_passive_tab_pane_g2_cp4_srt

0x4d2d,	// (0x00004d2d) bg_passive_tab_pane_g3_cp4_srt

0x04ef,	// (0x000004ef) bg_active_tab_pane_cp4_srt_ParamLimits

0x04ef,	// (0x000004ef) bg_active_tab_pane_cp4_srt

0xd23a,	// (0x0000d23a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd23a,	// (0x0000d23a) tabs_2_long_active_pane_srt_t1

0x4d24,	// (0x00004d24) bg_active_tab_pane_g1_cp4_srt

0x2070,	// (0x00002070) bg_active_tab_pane_g2_cp4_srt

0x4d2d,	// (0x00004d2d) bg_active_tab_pane_g3_cp4_srt

0x0815,	// (0x00000815) tabs_3_long_active_pane_srt_ParamLimits

0x0815,	// (0x00000815) tabs_3_long_active_pane_srt

0x0815,	// (0x00000815) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0815,	// (0x00000815) tabs_3_long_passive_pane_cp_srt

0x0815,	// (0x00000815) tabs_3_long_passive_pane_srt_ParamLimits

0x0815,	// (0x00000815) tabs_3_long_passive_pane_srt

0x2ac2,	// (0x00002ac2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2ac2,	// (0x00002ac2) bg_passive_tab_pane_cp5_srt

0x223b,	// (0x0000223b) bg_passive_tab_pane_g1_cp5_srt

0x2070,	// (0x00002070) bg_passive_tab_pane_g2_cp5_srt

0x2244,	// (0x00002244) bg_passive_tab_pane_g3_cp5_srt

0x04ef,	// (0x000004ef) bg_active_tab_pane_cp5_srt_ParamLimits

0x04ef,	// (0x000004ef) bg_active_tab_pane_cp5_srt

0xd224,	// (0x0000d224) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd224,	// (0x0000d224) tabs_3_long_active_pane_srt_t1

0x223b,	// (0x0000223b) bg_active_tab_pane_g1_cp5_srt

0x2070,	// (0x00002070) bg_active_tab_pane_g2_cp5_srt

0x2244,	// (0x00002244) bg_active_tab_pane_g3_cp5_srt

0x4d04,	// (0x00004d04) navi_text_pane_srt_t1

0x4cfc,	// (0x00004cfc) navi_icon_pane_srt_g1

0x27b4,	// (0x000027b4) midp_editing_number_pane_srt

0x2557,	// (0x00002557) midp_ticker_pane_srt

0x27bc,	// (0x000027bc) midp_ticker_pane_srt_g1

0x27c4,	// (0x000027c4) midp_ticker_pane_srt_g2

0x0001,

0xac4d,	// (0x0000ac4d) midp_ticker_pane_srt_g

0x27cc,	// (0x000027cc) midp_ticker_pane_srt_t1

0x4ced,	// (0x00004ced) midp_editing_number_pane_t1_copy1

0x2ac2,	// (0x00002ac2) listscroll_midp_pane

0x2ac2,	// (0x00002ac2) midp_form_pane

0x25c3,	// (0x000025c3) midp_info_popup_window_ParamLimits

0x25c3,	// (0x000025c3) midp_info_popup_window

0x1554,	// (0x00001554) bg_popup_sub_pane_cp50_ParamLimits

0x1554,	// (0x00001554) bg_popup_sub_pane_cp50

0x3c3c,	// (0x00003c3c) listscroll_midp_info_pane_ParamLimits

0x3c3c,	// (0x00003c3c) listscroll_midp_info_pane

0x3c24,	// (0x00003c24) listscroll_form_midp_pane_ParamLimits

0x3c24,	// (0x00003c24) listscroll_form_midp_pane

0x3c30,	// (0x00003c30) scroll_bar_cp050

0xceca,	// (0x0000ceca) list_midp_pane

0x5f41,	// (0x00005f41) signal_pane_g2_cp

0x3b3e,	// (0x00003b3e) listscroll_midp_info_pane_t1_ParamLimits

0x3b3e,	// (0x00003b3e) listscroll_midp_info_pane_t1

0x3b56,	// (0x00003b56) listscroll_midp_info_pane_t2_ParamLimits

0x3b56,	// (0x00003b56) listscroll_midp_info_pane_t2

0x3b94,	// (0x00003b94) listscroll_midp_info_pane_t3_ParamLimits

0x3b94,	// (0x00003b94) listscroll_midp_info_pane_t3

0x3bce,	// (0x00003bce) listscroll_midp_info_pane_t4_ParamLimits

0x3bce,	// (0x00003bce) listscroll_midp_info_pane_t4

0x0003,

0xacf9,	// (0x0000acf9) listscroll_midp_info_pane_t_ParamLimits

0xacf9,	// (0x0000acf9) listscroll_midp_info_pane_t

0x1616,	// (0x00001616) scroll_pane_cp21

0x3ae0,	// (0x00003ae0) form_midp_field_choice_group_pane

0x3ae9,	// (0x00003ae9) form_midp_field_text_pane

0x3b24,	// (0x00003b24) form_midp_field_time_pane

0x3b2c,	// (0x00003b2c) form_midp_gauge_slider_pane

0x3b35,	// (0x00003b35) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xceb0,	// (0x0000ceb0) list_single_midp_pane_ParamLimits

0xceb0,	// (0x0000ceb0) list_single_midp_pane

0xce8d,	// (0x0000ce8d) form_midp_field_text_pane_t1

0x377f,	// (0x0000377f) input_focus_pane_cp050

0x3a99,	// (0x00003a99) list_midp_form_text_pane

0x3a2d,	// (0x00003a2d) form_midp_field_choice_group_pane_t1

0x3a3b,	// (0x00003a3b) input_focus_pane_cp051

0x3a4f,	// (0x00003a4f) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a11,	// (0x00003a11) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a1f,	// (0x00003a1f) form_midp_field_time_pane_t2

0x0001,

0x2673,	// (0x00002673) aid_navinavi_width_2_pane

0xacf4,	// (0x0000acf4) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x39d1,	// (0x000039d1) form_midp_gauge_slider_pane_t1

0x39df,	// (0x000039df) form_midp_gauge_slider_pane_t2

0xce6d,	// (0x0000ce6d) form_midp_gauge_slider_pane_t3

0xce7d,	// (0x0000ce7d) form_midp_gauge_slider_pane_t4

0x0003,

0xf099,	// (0x0000f099) form_midp_gauge_slider_pane_t

0x3a09,	// (0x00003a09) form_midp_slider_pane

0x04ef,	// (0x000004ef) bg_input_focus_pane_cp041_ParamLimits

0x04ef,	// (0x000004ef) bg_input_focus_pane_cp041

0x399e,	// (0x0000399e) form_midp_gauge_wait_pane_t1_ParamLimits

0x399e,	// (0x0000399e) form_midp_gauge_wait_pane_t1

0x39b0,	// (0x000039b0) form_midp_gauge_wait_pane_t2_ParamLimits

0x39b0,	// (0x000039b0) form_midp_gauge_wait_pane_t2

0x0001,

0xace6,	// (0x0000ace6) form_midp_gauge_wait_pane_t_ParamLimits

0xace6,	// (0x0000ace6) form_midp_gauge_wait_pane_t

0x39c2,	// (0x000039c2) form_midp_wait_pane_ParamLimits

0x39c2,	// (0x000039c2) form_midp_wait_pane

0x3968,	// (0x00003968) form_midp_image_pane_g1

0x3971,	// (0x00003971) form_midp_image_pane_t1

0x3980,	// (0x00003980) form_midp_image_pane_t2

0x398f,	// (0x0000398f) form_midp_image_pane_t3

0x0002,

0xacdf,	// (0x0000acdf) form_midp_image_pane_t

0x3950,	// (0x00003950) list_single_midp_pane_g1

0x3959,	// (0x00003959) list_single_midp_pane_t1

0xce57,	// (0x0000ce57) list_midp_form_item_pane_ParamLimits

0xce57,	// (0x0000ce57) list_midp_form_item_pane

0x261b,	// (0x0000261b) list_midp_form_item_pane_t1

0x262a,	// (0x0000262a) midp_ticker_pane_g1

0x2636,	// (0x00002636) midp_ticker_pane_g2

0x0001,

0xac33,	// (0x0000ac33) midp_ticker_pane_g

0x2642,	// (0x00002642) midp_ticker_pane_t1

0x4fdf,	// (0x00004fdf) midp_editing_number_pane_t1

0x4fbd,	// (0x00004fbd) midp_editing_number_pane

0x4fcc,	// (0x00004fcc) midp_ticker_pane

0x4ccb,	// (0x00004ccb) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4cd3,	// (0x00004cd3) listscroll_ai_message_pane

0x4c55,	// (0x00004c55) ai_message_heading_pane_g1_ParamLimits

0x4c55,	// (0x00004c55) ai_message_heading_pane_g1

0x4c61,	// (0x00004c61) ai_message_heading_pane_g2_ParamLimits

0x4c61,	// (0x00004c61) ai_message_heading_pane_g2

0x4c6d,	// (0x00004c6d) ai_message_heading_pane_g3_ParamLimits

0x4c6d,	// (0x00004c6d) ai_message_heading_pane_g3

0x4c79,	// (0x00004c79) ai_message_heading_pane_g4_ParamLimits

0x4c79,	// (0x00004c79) ai_message_heading_pane_g4

0x0003,

0xae20,	// (0x0000ae20) ai_message_heading_pane_g_ParamLimits

0xae20,	// (0x0000ae20) ai_message_heading_pane_g

0x4c85,	// (0x00004c85) ai_message_heading_pane_t1_ParamLimits

0x4c85,	// (0x00004c85) ai_message_heading_pane_t1

0x4c9f,	// (0x00004c9f) ai_message_heading_pane_t2_ParamLimits

0x4c9f,	// (0x00004c9f) ai_message_heading_pane_t2

0x0001,

0xae29,	// (0x0000ae29) ai_message_heading_pane_t_ParamLimits

0xae29,	// (0x0000ae29) ai_message_heading_pane_t

0x4cb1,	// (0x00004cb1) bg_popup_heading_pane_cp1_ParamLimits

0x4cb1,	// (0x00004cb1) bg_popup_heading_pane_cp1

0x4c43,	// (0x00004c43) list_ai_message_pane_ParamLimits

0x4c43,	// (0x00004c43) list_ai_message_pane

0x1616,	// (0x00001616) scroll_pane_cp10

0x4b8f,	// (0x00004b8f) list_ai_message_pane_g1

0x4b97,	// (0x00004b97) list_ai_message_pane_g2

0x0001,

0xadfd,	// (0x0000adfd) list_ai_message_pane_g

0x4b9f,	// (0x00004b9f) list_ai_message_pane_t1_ParamLimits

0x4b9f,	// (0x00004b9f) list_ai_message_pane_t1

0x4bb4,	// (0x00004bb4) list_ai_message_pane_t2_ParamLimits

0x4bb4,	// (0x00004bb4) list_ai_message_pane_t2

0x4bc9,	// (0x00004bc9) list_ai_message_pane_t3_ParamLimits

0x4bc9,	// (0x00004bc9) list_ai_message_pane_t3

0x4bde,	// (0x00004bde) list_ai_message_pane_t4_ParamLimits

0x4bde,	// (0x00004bde) list_ai_message_pane_t4

0x0003,

0xae02,	// (0x0000ae02) list_ai_message_pane_t_ParamLimits

0xae02,	// (0x0000ae02) list_ai_message_pane_t

0xd202,	// (0x0000d202) cell_ai_soft_ind_pane_ParamLimits

0xd202,	// (0x0000d202) cell_ai_soft_ind_pane

0x2654,	// (0x00002654) cell_ai_soft_ind_pane_g1_ParamLimits

0x2654,	// (0x00002654) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x2661,	// (0x00002661) text_secondary_cp56_ParamLimits

0x2661,	// (0x00002661) text_secondary_cp56

0x4b4e,	// (0x00004b4e) example_general_pane_ParamLimits

0x4b4e,	// (0x00004b4e) example_general_pane

0x4b5a,	// (0x00004b5a) example_parent_pane_g1_ParamLimits

0x4b5a,	// (0x00004b5a) example_parent_pane_g1

0x4b66,	// (0x00004b66) example_parent_pane_t1_ParamLimits

0x4b66,	// (0x00004b66) example_parent_pane_t1

0xc6bb,	// (0x0000c6bb) popup_preview_text_window_ParamLimits

0xc6bb,	// (0x0000c6bb) popup_preview_text_window

0x2494,	// (0x00002494) list_single_pane_cp2_g4

0x08bf,	// (0x000008bf) bg_popup_preview_window_pane_ParamLimits

0x08bf,	// (0x000008bf) bg_popup_preview_window_pane

0x4887,	// (0x00004887) popup_preview_text_window_t1_ParamLimits

0x4887,	// (0x00004887) popup_preview_text_window_t1

0x48a5,	// (0x000048a5) popup_preview_text_window_t2_ParamLimits

0x48a5,	// (0x000048a5) popup_preview_text_window_t2

0x48ee,	// (0x000048ee) popup_preview_text_window_t3_ParamLimits

0x48ee,	// (0x000048ee) popup_preview_text_window_t3

0x4933,	// (0x00004933) popup_preview_text_window_t4_ParamLimits

0x4933,	// (0x00004933) popup_preview_text_window_t4

0x0004,

0xadd1,	// (0x0000add1) popup_preview_text_window_t_ParamLimits

0xadd1,	// (0x0000add1) popup_preview_text_window_t

0x49b1,	// (0x000049b1) scroll_pane_cp11

0x35ed,	// (0x000035ed) bg_popup_preview_window_pane_g1

0x4847,	// (0x00004847) bg_popup_preview_window_pane_g2

0x484f,	// (0x0000484f) bg_popup_preview_window_pane_g3

0x4857,	// (0x00004857) bg_popup_preview_window_pane_g4

0x485f,	// (0x0000485f) bg_popup_preview_window_pane_g5

0x4867,	// (0x00004867) bg_popup_preview_window_pane_g6

0x486f,	// (0x0000486f) bg_popup_preview_window_pane_g7

0x4877,	// (0x00004877) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc637,	// (0x0000c637) popup_midp_note_alarm_window_ParamLimits

0xc637,	// (0x0000c637) popup_midp_note_alarm_window

0x1318,	// (0x00001318) data_form_pane_ParamLimits

0xbcef,	// (0x0000bcef) form_field_data_pane_g1

0xbcf9,	// (0x0000bcf9) form_field_data_pane_t1_ParamLimits

0x1348,	// (0x00001348) input_focus_pane_ParamLimits

0x1356,	// (0x00001356) data_form_wide_pane_ParamLimits

0x1362,	// (0x00001362) form_field_data_wide_pane_g1

0x1382,	// (0x00001382) form_field_data_wide_pane_t1_ParamLimits

0x0b62,	// (0x00000b62) input_focus_pane_cp6_ParamLimits

0xbe05,	// (0x0000be05) input_popup_find_pane_g1_ParamLimits

0xbe05,	// (0x0000be05) input_popup_find_pane_g1

0x1943,	// (0x00001943) aid_navi_side_left_pane

0x1958,	// (0x00001958) aid_navi_side_right_pane

0x4102,	// (0x00004102) bg_popup_window_pane_cp30_ParamLimits

0x4102,	// (0x00004102) bg_popup_window_pane_cp30

0x417c,	// (0x0000417c) popup_midp_note_alarm_window_g1_ParamLimits

0x417c,	// (0x0000417c) popup_midp_note_alarm_window_g1

0x41ac,	// (0x000041ac) popup_midp_note_alarm_window_t1_ParamLimits

0x41ac,	// (0x000041ac) popup_midp_note_alarm_window_t1

0x424d,	// (0x0000424d) popup_midp_note_alarm_window_t2_ParamLimits

0x424d,	// (0x0000424d) popup_midp_note_alarm_window_t2

0x42fb,	// (0x000042fb) popup_midp_note_alarm_window_t3_ParamLimits

0x42fb,	// (0x000042fb) popup_midp_note_alarm_window_t3

0x432d,	// (0x0000432d) popup_midp_note_alarm_window_t4_ParamLimits

0x432d,	// (0x0000432d) popup_midp_note_alarm_window_t4

0x4353,	// (0x00004353) popup_midp_note_alarm_window_t5_ParamLimits

0x4353,	// (0x00004353) popup_midp_note_alarm_window_t5

0x000a,

0xad6e,	// (0x0000ad6e) popup_midp_note_alarm_window_t_ParamLimits

0xad6e,	// (0x0000ad6e) popup_midp_note_alarm_window_t

0x43ff,	// (0x000043ff) wait_bar_pane_cp1_ParamLimits

0x43ff,	// (0x000043ff) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3de0,	// (0x00003de0) wait_border_pane_g1_copy1

0x1399,	// (0x00001399) form_field_popup_pane_g1

0xbd13,	// (0x0000bd13) form_field_popup_pane_t1_ParamLimits

0x1348,	// (0x00001348) input_focus_pane_cp7_ParamLimits

0x13bb,	// (0x000013bb) list_form_pane_ParamLimits

0x13c7,	// (0x000013c7) form_field_popup_wide_pane_g1

0x13cf,	// (0x000013cf) form_field_popup_wide_pane_t1_ParamLimits

0x1348,	// (0x00001348) input_focus_pane_cp8_ParamLimits

0x13e4,	// (0x000013e4) list_form_wide_pane_ParamLimits

0x51f1,	// (0x000051f1) aid_size_cell_graphic_pane

0xbd92,	// (0x0000bd92) data_form_pane_t1_ParamLimits

0xd3a3,	// (0x0000d3a3) data_form_wide_pane_t1_ParamLimits

0xca7d,	// (0x0000ca7d) bg_status_flat_pane

0xb5e0,	// (0x0000b5e0) title_pane_t1_ParamLimits

0x04b7,	// (0x000004b7) title_pane_t2_ParamLimits

0x04dd,	// (0x000004dd) title_pane_t3_ParamLimits

0xef87,	// (0x0000ef87) title_pane_t_ParamLimits

0x1c57,	// (0x00001c57) level_1_signal_ParamLimits

0x1c64,	// (0x00001c64) level_2_signal_ParamLimits

0x1c71,	// (0x00001c71) level_3_signal_ParamLimits

0x1c7e,	// (0x00001c7e) level_4_signal_ParamLimits

0x1c8b,	// (0x00001c8b) level_5_signal_ParamLimits

0x1c98,	// (0x00001c98) level_6_signal_ParamLimits

0x1ca5,	// (0x00001ca5) level_7_signal_ParamLimits

0x1c57,	// (0x00001c57) level_1_battery_ParamLimits

0x1c64,	// (0x00001c64) level_2_battery_ParamLimits

0x1c71,	// (0x00001c71) level_3_battery_ParamLimits

0x1c7e,	// (0x00001c7e) level_4_battery_ParamLimits

0x1c8b,	// (0x00001c8b) level_5_battery_ParamLimits

0x1c98,	// (0x00001c98) level_6_battery_ParamLimits

0x1ca5,	// (0x00001ca5) level_7_battery_ParamLimits

0x4007,	// (0x00004007) bg_status_flat_pane_g1

0x400f,	// (0x0000400f) bg_status_flat_pane_g2

0x4017,	// (0x00004017) bg_status_flat_pane_g3

0x401f,	// (0x0000401f) bg_status_flat_pane_g4

0x4027,	// (0x00004027) bg_status_flat_pane_g5

0x402f,	// (0x0000402f) bg_status_flat_pane_g6

0x4037,	// (0x00004037) bg_status_flat_pane_g7

0xb674,	// (0x0000b674) tabs_3_active_pane_t1_ParamLimits

0xb674,	// (0x0000b674) tabs_3_passive_pane_t1_ParamLimits

0xb68e,	// (0x0000b68e) tabs_4_active_pane_t1_ParamLimits

0xb68e,	// (0x0000b68e) tabs_4_1_passive_pane_t1_ParamLimits

0xbe1b,	// (0x0000be1b) tabs_2_active_pane_t1_ParamLimits

0xbe1b,	// (0x0000be1b) tabs_2_passive_pane_t1_ParamLimits

0x04ef,	// (0x000004ef) bg_active_tab_pane_cp4_ParamLimits

0xbe2d,	// (0x0000be2d) tabs_2_long_active_pane_t1_ParamLimits

0x2ac2,	// (0x00002ac2) bg_passive_tab_pane_cp4_ParamLimits

0x36aa,	// (0x000036aa) list_single_midp_graphic_pane_t1_ParamLimits

0x04ef,	// (0x000004ef) bg_active_tab_pane_cp5_ParamLimits

0xbe40,	// (0x0000be40) tabs_3_long_active_pane_t1_ParamLimits

0x2ac2,	// (0x00002ac2) bg_passive_tab_pane_cp5_ParamLimits

0x36aa,	// (0x000036aa) list_single_midp_graphic_pane_t1

0xca7d,	// (0x0000ca7d) bg_status_flat_pane_ParamLimits

0x31f5,	// (0x000031f5) indicator_pane_cp2_ParamLimits

0x31f5,	// (0x000031f5) indicator_pane_cp2

0xcbf5,	// (0x0000cbf5) navi_pane_srt_ParamLimits

0xcbf5,	// (0x0000cbf5) navi_pane_srt

0x333e,	// (0x0000333e) popup_clock_digital_analogue_window_cp1

0x0677,	// (0x00000677) indicator_pane_t1

0x2557,	// (0x00002557) copy_highlight_pane

0x2557,	// (0x00002557) cursor_graphics_pane

0x2557,	// (0x00002557) graphic_within_text_pane

0x2557,	// (0x00002557) link_highlight_pane

0x4974,	// (0x00004974) popup_preview_text_window_t5_ParamLimits

0x4974,	// (0x00004974) popup_preview_text_window_t5

0x267b,	// (0x0000267b) cursor_digital_pane

0x267b,	// (0x0000267b) cursor_primary_pane

0x268c,	// (0x0000268c) cursor_primary_small_pane

0x2694,	// (0x00002694) cursor_secondary_pane

0x269c,	// (0x0000269c) cursor_title_pane

0x267b,	// (0x0000267b) link_highlight_digital_pane

0x2683,	// (0x00002683) link_highlight_primary_pane

0x268c,	// (0x0000268c) link_highlight_primary_small_pane

0x2694,	// (0x00002694) link_highlight_secondary_pane

0x269c,	// (0x0000269c) link_highlight_title_pane

0x267b,	// (0x0000267b) copy_highlight_digital_pane

0x267b,	// (0x0000267b) copy_highlight_primary_pane

0x268c,	// (0x0000268c) copy_highlight_primary_small_pane

0x2694,	// (0x00002694) copy_highlight_secondary_pane

0x269c,	// (0x0000269c) copy_highlight_title_pane

0x2694,	// (0x00002694) graphic_text_digital_pane

0x40a5,	// (0x000040a5) graphic_text_primary_pane

0x40ae,	// (0x000040ae) graphic_text_primary_small_pane

0x268c,	// (0x0000268c) graphic_text_secondary_pane

0x267b,	// (0x0000267b) graphic_text_title_pane

0xc157,	// (0x0000c157) cursor_primary_pane_g1

0x4097,	// (0x00004097) cursor_text_primary_t1

0xcf0a,	// (0x0000cf0a) cursor_primary_small_pane_g1

0x4089,	// (0x00004089) cursor_text_primary_small_t1

0xcf00,	// (0x0000cf00) cursor_primary_small_pane_g1_copy1

0x4071,	// (0x00004071) cursor_text_primary_small_t1_copy1

0x404f,	// (0x0000404f) cursor_text_title_t1

0xcef6,	// (0x0000cef6) cursor_title_pane_g1

0xc157,	// (0x0000c157) cursor_digital_pane_g1

0x26ae,	// (0x000026ae) cursor_text_digital_t1

0x3ff0,	// (0x00003ff0) link_highlight_primary_pane_g1

0x3ff8,	// (0x00003ff8) link_highlight_primary_pane_t1

0x26bc,	// (0x000026bc) link_highlight_primary_small_pane_g1

0x26c4,	// (0x000026c4) link_highlight_primary_small_pane_t1

0x26bc,	// (0x000026bc) link_highlight_secondary_pane_g1

0x26d3,	// (0x000026d3) link_highlight_secondary_pane_t1

0x3f64,	// (0x00003f64) link_highlight_title_pane_g1

0x3f6c,	// (0x00003f6c) link_highlight_title_pane_t1

0x3f4d,	// (0x00003f4d) link_highlight_digital_pane_g1

0x3f55,	// (0x00003f55) link_highlight_digital_pane_t1

0x3e25,	// (0x00003e25) copy_highlight_primary_pane_g1

0x3e2d,	// (0x00003e2d) copy_highlight_primary_pane_t1

0x3dff,	// (0x00003dff) copy_highlight_primary_small_pane_g1

0x3e16,	// (0x00003e16) copy_highlight_primary_small_pane_t1

0x26e2,	// (0x000026e2) copy_highlight_secondary_pane_g1

0x26ea,	// (0x000026ea) copy_highlight_secondary_pane_t1

0x3dff,	// (0x00003dff) copy_highlight_title_pane_g1

0x3e07,	// (0x00003e07) copy_highlight_title_pane_t1

0x3e25,	// (0x00003e25) copy_highlight_digital_pane_g1

0x5473,	// (0x00005473) copy_highlight_digital_pane_t1

0x53c7,	// (0x000053c7) graphic_text_primary_pane_g1

0x5457,	// (0x00005457) graphic_text_primary_pane_t1

0x5465,	// (0x00005465) graphic_text_primary_pane_t2

0x0001,

0xae9d,	// (0x0000ae9d) graphic_text_primary_pane_t

0x5433,	// (0x00005433) graphic_text_primary_small_pane_g1

0x543b,	// (0x0000543b) graphic_text_primary_small_pane_t1

0x5449,	// (0x00005449) graphic_text_primary_small_pane_t2

0x0001,

0xae98,	// (0x0000ae98) graphic_text_primary_small_pane_t

0x540f,	// (0x0000540f) graphic_text_secondary_pane_g1

0x5417,	// (0x00005417) graphic_text_secondary_pane_t1

0x5425,	// (0x00005425) graphic_text_secondary_pane_t2

0x0001,

0xae93,	// (0x0000ae93) graphic_text_secondary_pane_t

0x53eb,	// (0x000053eb) graphic_text_title_pane_g1

0x53f3,	// (0x000053f3) graphic_text_title_pane_t1

0x5401,	// (0x00005401) graphic_text_title_pane_t2

0x0001,

0xae8e,	// (0x0000ae8e) graphic_text_title_pane_t

0x53c7,	// (0x000053c7) graphic_text_digital_pane_g1

0x53cf,	// (0x000053cf) graphic_text_digital_pane_t1

0x53dd,	// (0x000053dd) graphic_text_digital_pane_t2

0x0001,

0xae89,	// (0x0000ae89) graphic_text_digital_pane_t

0x04ef,	// (0x000004ef) navi_icon_pane_srt_ParamLimits

0x04ef,	// (0x000004ef) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04ef,	// (0x000004ef) navi_text_pane_srt_ParamLimits

0x04ef,	// (0x000004ef) navi_text_pane_srt

0x5392,	// (0x00005392) navi_navi_icon_text_pane_srt

0x539a,	// (0x0000539a) navi_navi_pane_srt_g1_ParamLimits

0x539a,	// (0x0000539a) navi_navi_pane_srt_g1

0x53ac,	// (0x000053ac) navi_navi_pane_srt_g2_ParamLimits

0x53ac,	// (0x000053ac) navi_navi_pane_srt_g2

0x0001,

0xae84,	// (0x0000ae84) navi_navi_pane_srt_g_ParamLimits

0xae84,	// (0x0000ae84) navi_navi_pane_srt_g

0x53be,	// (0x000053be) navi_navi_tabs_pane_srt

0x5392,	// (0x00005392) navi_navi_text_pane_srt

0x5392,	// (0x00005392) navi_navi_volume_pane_srt

0x5383,	// (0x00005383) navi_navi_text_pane_srt_t1

0x535e,	// (0x0000535e) navi_navi_volume_pane_srt_g1

0x5366,	// (0x00005366) volume_small_pane_srt_ParamLimits

0x5366,	// (0x00005366) volume_small_pane_srt

0x26f9,	// (0x000026f9) volume_small_pane_srt_g1_ParamLimits

0x26f9,	// (0x000026f9) volume_small_pane_srt_g1

0x2709,	// (0x00002709) volume_small_pane_srt_g2_ParamLimits

0x2709,	// (0x00002709) volume_small_pane_srt_g2

0x271a,	// (0x0000271a) volume_small_pane_srt_g3_ParamLimits

0x271a,	// (0x0000271a) volume_small_pane_srt_g3

0x272b,	// (0x0000272b) volume_small_pane_srt_g4_ParamLimits

0x272b,	// (0x0000272b) volume_small_pane_srt_g4

0x273c,	// (0x0000273c) volume_small_pane_srt_g5_ParamLimits

0x273c,	// (0x0000273c) volume_small_pane_srt_g5

0x274d,	// (0x0000274d) volume_small_pane_srt_g6_ParamLimits

0x274d,	// (0x0000274d) volume_small_pane_srt_g6

0x275e,	// (0x0000275e) volume_small_pane_srt_g7_ParamLimits

0x275e,	// (0x0000275e) volume_small_pane_srt_g7

0x276f,	// (0x0000276f) volume_small_pane_srt_g8_ParamLimits

0x276f,	// (0x0000276f) volume_small_pane_srt_g8

0x2780,	// (0x00002780) volume_small_pane_srt_g9_ParamLimits

0x2780,	// (0x00002780) volume_small_pane_srt_g9

0x2791,	// (0x00002791) volume_small_pane_srt_g10_ParamLimits

0x2791,	// (0x00002791) volume_small_pane_srt_g10

0x0009,

0xac38,	// (0x0000ac38) volume_small_pane_srt_g_ParamLimits

0xac38,	// (0x0000ac38) volume_small_pane_srt_g

0x0968,	// (0x00000968) query_popup_data_pane_cp2

0x534c,	// (0x0000534c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x534c,	// (0x0000534c) navi_navi_icon_text_pane_srt_t1

0x40a5,	// (0x000040a5) navi_tabs_2_long_pane_srt

0x40a5,	// (0x000040a5) navi_tabs_2_pane_srt

0x40a5,	// (0x000040a5) navi_tabs_3_long_pane_srt

0x40a5,	// (0x000040a5) navi_tabs_3_pane_srt

0x40a5,	// (0x000040a5) navi_tabs_4_pane_srt

0x5324,	// (0x00005324) tabs_2_active_pane_srt_ParamLimits

0x5324,	// (0x00005324) tabs_2_active_pane_srt

0x5334,	// (0x00005334) tabs_2_passive_pane_srt_ParamLimits

0x5334,	// (0x00005334) tabs_2_passive_pane_srt

0x377f,	// (0x0000377f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x377f,	// (0x0000377f) bg_passive_tab_pane_cp1_srt

0x52f8,	// (0x000052f8) bg_passive_tab_pane_g1_cp1_srt

0x2070,	// (0x00002070) bg_passive_tab_pane_g2_cp1_srt

0x5301,	// (0x00005301) bg_passive_tab_pane_g3_cp1_srt

0x0815,	// (0x00000815) bg_active_tab_pane_cp1_srt_ParamLimits

0x0815,	// (0x00000815) bg_active_tab_pane_cp1_srt

0x530a,	// (0x0000530a) tabs_2_active_pane_srt_g1

0xd4db,	// (0x0000d4db) tabs_2_active_pane_srt_t1_ParamLimits

0xd4db,	// (0x0000d4db) tabs_2_active_pane_srt_t1

0x52f8,	// (0x000052f8) bg_active_tab_pane_g1_cp1_srt

0x2070,	// (0x00002070) bg_active_tab_pane_g2_cp1_srt

0x5301,	// (0x00005301) bg_active_tab_pane_g3_cp1_srt

0x52c5,	// (0x000052c5) tabs_3_active_pane_srt_ParamLimits

0x52c5,	// (0x000052c5) tabs_3_active_pane_srt

0x52d6,	// (0x000052d6) tabs_3_passive_pane_cp_srt_ParamLimits

0x52d6,	// (0x000052d6) tabs_3_passive_pane_cp_srt

0x52e7,	// (0x000052e7) tabs_3_passive_pane_srt_ParamLimits

0x52e7,	// (0x000052e7) tabs_3_passive_pane_srt

0x377f,	// (0x0000377f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x377f,	// (0x0000377f) bg_passive_tab_pane_cp2_srt

0x27a2,	// (0x000027a2) bg_passive_tab_pane_g1_cp2_srt

0x2070,	// (0x00002070) bg_passive_tab_pane_g2_cp2_srt

0x27ab,	// (0x000027ab) bg_passive_tab_pane_g3_cp2_srt

0x0815,	// (0x00000815) bg_active_tab_pane_cp2_srt_ParamLimits

0x0815,	// (0x00000815) bg_active_tab_pane_cp2_srt

0x52ab,	// (0x000052ab) tabs_3_active_pane_srt_g1

0xd4c5,	// (0x0000d4c5) tabs_3_active_pane_srt_t1_ParamLimits

0xd4c5,	// (0x0000d4c5) tabs_3_active_pane_srt_t1

0x27a2,	// (0x000027a2) bg_active_tab_pane_g1_cp2_srt

0x2070,	// (0x00002070) bg_active_tab_pane_g2_cp2_srt

0x27ab,	// (0x000027ab) bg_active_tab_pane_g3_cp2_srt

0x5263,	// (0x00005263) tabs_4_active_pane_srt_ParamLimits

0x5263,	// (0x00005263) tabs_4_active_pane_srt

0x5275,	// (0x00005275) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5275,	// (0x00005275) tabs_4_passive_pane_cp2_srt

0x2a48,	// (0x00002a48) aid_size_cell_toolbar

0x4e07,	// (0x00004e07) main_idle_act_pane_ParamLimits

0x2c65,	// (0x00002c65) popup_large_graphic_colour_window_ParamLimits

0xc941,	// (0x0000c941) popup_toolbar_window_ParamLimits

0xc941,	// (0x0000c941) popup_toolbar_window

0x500a,	// (0x0000500a) list_single_graphic_2heading_pane_ParamLimits

0x500a,	// (0x0000500a) list_single_graphic_2heading_pane

0x19cf,	// (0x000019cf) aid_size_cell_apps_grid_lsc_pane

0x19e1,	// (0x000019e1) aid_size_cell_apps_grid_prt_pane

0x2ac2,	// (0x00002ac2) bg_wml_button_pane_cp1_ParamLimits

0x2ac2,	// (0x00002ac2) bg_wml_button_pane_cp1

0xce8d,	// (0x0000ce8d) form_midp_field_text_pane_t1_ParamLimits

0x377f,	// (0x0000377f) input_focus_pane_cp050_ParamLimits

0x3a99,	// (0x00003a99) list_midp_form_text_pane_ParamLimits

0x3a3b,	// (0x00003a3b) input_focus_pane_cp051_ParamLimits

0x3a4f,	// (0x00003a4f) list_midp_choice_pane_ParamLimits

0xce21,	// (0x0000ce21) list_single_2graphic_pane_cp3_ParamLimits

0xce21,	// (0x0000ce21) list_single_2graphic_pane_cp3

0xce36,	// (0x0000ce36) list_single_midp_graphic_pane_ParamLimits

0xce36,	// (0x0000ce36) list_single_midp_graphic_pane

0x0e1e,	// (0x00000e1e) list_single_graphic_2heading_pane_g1_ParamLimits

0x0e1e,	// (0x00000e1e) list_single_graphic_2heading_pane_g1

0x0da4,	// (0x00000da4) list_single_graphic_2heading_pane_g4_ParamLimits

0x0da4,	// (0x00000da4) list_single_graphic_2heading_pane_g4

0x0db0,	// (0x00000db0) list_single_graphic_2heading_pane_g5_ParamLimits

0x0db0,	// (0x00000db0) list_single_graphic_2heading_pane_g5

0x0002,

0xac8b,	// (0x0000ac8b) list_single_graphic_2heading_pane_g_ParamLimits

0xac8b,	// (0x0000ac8b) list_single_graphic_2heading_pane_g

0x349d,	// (0x0000349d) list_single_graphic_2heading_pane_t1_ParamLimits

0x349d,	// (0x0000349d) list_single_graphic_2heading_pane_t1

0x34b1,	// (0x000034b1) list_single_graphic_2heading_pane_t2_ParamLimits

0x34b1,	// (0x000034b1) list_single_graphic_2heading_pane_t2

0x34cd,	// (0x000034cd) list_single_graphic_2heading_pane_t3_ParamLimits

0x34cd,	// (0x000034cd) list_single_graphic_2heading_pane_t3

0x0002,

0xac92,	// (0x0000ac92) list_single_graphic_2heading_pane_t_ParamLimits

0xac92,	// (0x0000ac92) list_single_graphic_2heading_pane_t

0x34e5,	// (0x000034e5) bg_popup_sub_pane_cp2

0x350f,	// (0x0000350f) grid_toobar_pane

0x354b,	// (0x0000354b) cell_toolbar_pane_ParamLimits

0x354b,	// (0x0000354b) cell_toolbar_pane

0x3591,	// (0x00003591) cell_toolbar_pane_g1_ParamLimits

0x3591,	// (0x00003591) cell_toolbar_pane_g1

0x35a5,	// (0x000035a5) cell_toolbar_pane_g2_ParamLimits

0x35a5,	// (0x000035a5) cell_toolbar_pane_g2

0x0001,

0xac99,	// (0x0000ac99) cell_toolbar_pane_g_ParamLimits

0xac99,	// (0x0000ac99) cell_toolbar_pane_g

0x35c7,	// (0x000035c7) grid_highlight_pane_cp2_ParamLimits

0x35c7,	// (0x000035c7) grid_highlight_pane_cp2

0x35e1,	// (0x000035e1) toolbar_button_pane

0x35ed,	// (0x000035ed) toolbar_button_pane_g1

0x35f5,	// (0x000035f5) toolbar_button_pane_g2

0x35fd,	// (0x000035fd) toolbar_button_pane_g3

0x3605,	// (0x00003605) toolbar_button_pane_g4

0x360d,	// (0x0000360d) toolbar_button_pane_g5

0x3615,	// (0x00003615) toolbar_button_pane_g6

0x361d,	// (0x0000361d) toolbar_button_pane_g7

0x3625,	// (0x00003625) toolbar_button_pane_g8

0x362d,	// (0x0000362d) toolbar_button_pane_g9

0x0009,

0xac9e,	// (0x0000ac9e) toolbar_button_pane_g

0x363d,	// (0x0000363d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x363d,	// (0x0000363d) list_single_2graphic_pane_g1_cp3

0xba68,	// (0x0000ba68) list_single_2graphic_pane_g2_cp3_ParamLimits

0xba68,	// (0x0000ba68) list_single_2graphic_pane_g2_cp3

0x2393,	// (0x00002393) list_single_2graphic_pane_g3_cp3

0x365a,	// (0x0000365a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x365a,	// (0x0000365a) list_single_2graphic_pane_g4_cp3

0x3666,	// (0x00003666) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3666,	// (0x00003666) list_single_2graphic_pane_t1_cp3

0x2387,	// (0x00002387) list_single_midp_graphic_pane_g2_ParamLimits

0x2387,	// (0x00002387) list_single_midp_graphic_pane_g2

0x2a50,	// (0x00002a50) aid_zoom_text_primary

0x2a58,	// (0x00002a58) aid_zoom_text_secondary

0x285f,	// (0x0000285f) status_small_pane_g7_ParamLimits

0x285f,	// (0x0000285f) status_small_pane_g7

0x2882,	// (0x00002882) status_small_pane_t1_ParamLimits

0xb5bc,	// (0x0000b5bc) title_pane_g2

0x0003,

0xef7e,	// (0x0000ef7e) title_pane_g

0xb844,	// (0x0000b844) aid_size_cell_colour_1_pane_ParamLimits

0xb844,	// (0x0000b844) aid_size_cell_colour_1_pane

0xb858,	// (0x0000b858) aid_size_cell_colour_2_pane_ParamLimits

0xb858,	// (0x0000b858) aid_size_cell_colour_2_pane

0xb86c,	// (0x0000b86c) aid_size_cell_colour_3_pane_ParamLimits

0xb86c,	// (0x0000b86c) aid_size_cell_colour_3_pane

0xb880,	// (0x0000b880) aid_size_cell_colour_4_pane_ParamLimits

0xb880,	// (0x0000b880) aid_size_cell_colour_4_pane

0x184a,	// (0x0000184a) title_pane_stacon_g1_ParamLimits

0x184a,	// (0x0000184a) title_pane_stacon_g1

0x3e84,	// (0x00003e84) popup_note_wait_window_g3_ParamLimits

0x3e84,	// (0x00003e84) popup_note_wait_window_g3

0x3efa,	// (0x00003efa) popup_note_wait_window_t5_ParamLimits

0x3efa,	// (0x00003efa) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc35d,	// (0x0000c35d) popup_feb_china_hwr_fs_window_ParamLimits

0xc35d,	// (0x0000c35d) popup_feb_china_hwr_fs_window

0xcd94,	// (0x0000cd94) aid_size_cell_hwr_fs_ParamLimits

0xcd94,	// (0x0000cd94) aid_size_cell_hwr_fs

0x377f,	// (0x0000377f) bg_popup_sub_pane_cp3_ParamLimits

0x377f,	// (0x0000377f) bg_popup_sub_pane_cp3

0xcda9,	// (0x0000cda9) grid_hwr_fs_pane_ParamLimits

0xcda9,	// (0x0000cda9) grid_hwr_fs_pane

0x37a3,	// (0x000037a3) linegrid_hwr_fs_pane_ParamLimits

0x37a3,	// (0x000037a3) linegrid_hwr_fs_pane

0xcdc1,	// (0x0000cdc1) cell_hwr_fs_pane_ParamLimits

0xcdc1,	// (0x0000cdc1) cell_hwr_fs_pane

0x37d5,	// (0x000037d5) linegrid_hwr_fs_pane_g1_ParamLimits

0x37d5,	// (0x000037d5) linegrid_hwr_fs_pane_g1

0xcde7,	// (0x0000cde7) linegrid_hwr_fs_pane_g2_ParamLimits

0xcde7,	// (0x0000cde7) linegrid_hwr_fs_pane_g2

0x37f3,	// (0x000037f3) linegrid_hwr_fs_pane_g3_ParamLimits

0x37f3,	// (0x000037f3) linegrid_hwr_fs_pane_g3

0x37ff,	// (0x000037ff) linegrid_hwr_fs_pane_g4_ParamLimits

0x37ff,	// (0x000037ff) linegrid_hwr_fs_pane_g4

0x3819,	// (0x00003819) linegrid_hwr_fs_pane_g5_ParamLimits

0x3819,	// (0x00003819) linegrid_hwr_fs_pane_g5

0x0004,

0xf085,	// (0x0000f085) linegrid_hwr_fs_pane_g_ParamLimits

0xf085,	// (0x0000f085) linegrid_hwr_fs_pane_g

0x382f,	// (0x0000382f) cell_hwr_fs_pane_g1_ParamLimits

0x382f,	// (0x0000382f) cell_hwr_fs_pane_g1

0x33d4,	// (0x000033d4) cell_hwr_fs_pane_g2_ParamLimits

0x33d4,	// (0x000033d4) cell_hwr_fs_pane_g2

0xcdf9,	// (0x0000cdf9) cell_hwr_fs_pane_g3_ParamLimits

0xcdf9,	// (0x0000cdf9) cell_hwr_fs_pane_g3

0xce06,	// (0x0000ce06) cell_hwr_fs_pane_g4_ParamLimits

0xce06,	// (0x0000ce06) cell_hwr_fs_pane_g4

0x0003,

0xf090,	// (0x0000f090) cell_hwr_fs_pane_g_ParamLimits

0xf090,	// (0x0000f090) cell_hwr_fs_pane_g

0xce13,	// (0x0000ce13) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x15fd,	// (0x000015fd) aid_inside_area_popup_secondary

0xd0ad,	// (0x0000d0ad) aid_inside_area_window_primary_ParamLimits

0xd0ad,	// (0x0000d0ad) aid_inside_area_window_primary

0x5482,	// (0x00005482) ai2_news_ticker_pane

0x548a,	// (0x0000548a) aid_size_cell_ai1_link_ParamLimits

0x548a,	// (0x0000548a) aid_size_cell_ai1_link

0x54a4,	// (0x000054a4) popup_ai2_data_window_ParamLimits

0x54a4,	// (0x000054a4) popup_ai2_data_window

0x54b8,	// (0x000054b8) popup_ai2_link_window_ParamLimits

0x54b8,	// (0x000054b8) popup_ai2_link_window

0x377f,	// (0x0000377f) bg_popup_sub_pane_cp4_ParamLimits

0x377f,	// (0x0000377f) bg_popup_sub_pane_cp4

0x54cc,	// (0x000054cc) grid_ai2_link_pane_ParamLimits

0x54cc,	// (0x000054cc) grid_ai2_link_pane

0x54e3,	// (0x000054e3) popup_ai2_link_window_g1_ParamLimits

0x54e3,	// (0x000054e3) popup_ai2_link_window_g1

0x54ef,	// (0x000054ef) popup_ai2_link_window_g2_ParamLimits

0x54ef,	// (0x000054ef) popup_ai2_link_window_g2

0x0001,

0xaea2,	// (0x0000aea2) popup_ai2_link_window_g_ParamLimits

0xaea2,	// (0x0000aea2) popup_ai2_link_window_g

0x54fe,	// (0x000054fe) ai2_mp_button_pane

0x5506,	// (0x00005506) ai2_mp_volume_pane

0x3a3b,	// (0x00003a3b) bg_popup_sub_pane_cp5_ParamLimits

0x3a3b,	// (0x00003a3b) bg_popup_sub_pane_cp5

0x550e,	// (0x0000550e) heading_ai2_gene_pane_ParamLimits

0x550e,	// (0x0000550e) heading_ai2_gene_pane

0x551a,	// (0x0000551a) list_ai2_gene_pane_ParamLimits

0x551a,	// (0x0000551a) list_ai2_gene_pane

0x5562,	// (0x00005562) cell_ai2_link_pane_ParamLimits

0x5562,	// (0x00005562) cell_ai2_link_pane

0x5578,	// (0x00005578) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5649,	// (0x00005649) ai2_mp_volume_pane_g1

0x5651,	// (0x00005651) ai2_mp_volume_pane_g2

0x55be,	// (0x000055be) list_ai2_gene_pane_t1

0x5659,	// (0x00005659) ai2_mp_volume_pane_g3

0x0002,

0xaebb,	// (0x0000aebb) ai2_mp_volume_pane_g

0x5661,	// (0x00005661) volume_small_pane_cp3

0x566a,	// (0x0000566a) aid_size_cell_ai2_button

0x5672,	// (0x00005672) grid_ai2_button_pane

0x567b,	// (0x0000567b) cell_ai2_button_pane_ParamLimits

0x567b,	// (0x0000567b) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5609,	// (0x00005609) ai2_gene_pane_t1_ParamLimits

0x5609,	// (0x00005609) ai2_gene_pane_t1

0xc2ef,	// (0x0000c2ef) aid_height_parent_landscape

0xd251,	// (0x0000d251) aid_height_set_list

0x4e07,	// (0x00004e07) aid_size_parent

0x51f1,	// (0x000051f1) aid_size_cell_graphic_pane_ParamLimits

0x552a,	// (0x0000552a) popup_ai2_data_window_g1_ParamLimits

0x552a,	// (0x0000552a) popup_ai2_data_window_g1

0x5536,	// (0x00005536) ai2_news_ticker_pane_g1

0x553e,	// (0x0000553e) ai2_news_ticker_pane_g2

0x0001,

0xaea7,	// (0x0000aea7) ai2_news_ticker_pane_g

0x5546,	// (0x00005546) ai2_news_ticker_pane_t1

0x5554,	// (0x00005554) ai2_news_ticker_pane_t2

0x0001,

0xaeac,	// (0x0000aeac) ai2_news_ticker_pane_t

0x5581,	// (0x00005581) heading_ai2_gene_pane_g1

0x5589,	// (0x00005589) heading_ai2_gene_pane_t1_ParamLimits

0x5589,	// (0x00005589) heading_ai2_gene_pane_t1

0x559e,	// (0x0000559e) list_highlight_pane_cp6

0x55a6,	// (0x000055a6) ai2_gene_pane_ParamLimits

0x55a6,	// (0x000055a6) ai2_gene_pane

0x55cc,	// (0x000055cc) list_ai2_gene_pane_t2

0x0001,

0xaeb1,	// (0x0000aeb1) list_ai2_gene_pane_t

0x55da,	// (0x000055da) list_highlight_pane_cp8_ParamLimits

0x55da,	// (0x000055da) list_highlight_pane_cp8

0x55eb,	// (0x000055eb) ai2_gene_pane_g1_ParamLimits

0x55eb,	// (0x000055eb) ai2_gene_pane_g1

0x55fd,	// (0x000055fd) ai2_gene_pane_g2_ParamLimits

0x55fd,	// (0x000055fd) ai2_gene_pane_g2

0x0001,

0xaeb6,	// (0x0000aeb6) ai2_gene_pane_g_ParamLimits

0xaeb6,	// (0x0000aeb6) ai2_gene_pane_g

0x0d87,	// (0x00000d87) scroll_pane_cp12

0xc2ae,	// (0x0000c2ae) control_pane_t3_ParamLimits

0xc2ae,	// (0x0000c2ae) control_pane_t3

0x2873,	// (0x00002873) status_small_pane_g8_ParamLimits

0x2873,	// (0x00002873) status_small_pane_g8

0xc3f0,	// (0x0000c3f0) popup_find_window_ParamLimits

0xc671,	// (0x0000c671) popup_note_image_window_ParamLimits

0x0e1e,	// (0x00000e1e) list_double2_graphic_pane_vc_g1_ParamLimits

0x0e1e,	// (0x00000e1e) list_double2_graphic_pane_vc_g1

0x0da4,	// (0x00000da4) list_double2_graphic_pane_vc_g2_ParamLimits

0x0da4,	// (0x00000da4) list_double2_graphic_pane_vc_g2

0x0db0,	// (0x00000db0) list_double2_graphic_pane_vc_g3_ParamLimits

0x0db0,	// (0x00000db0) list_double2_graphic_pane_vc_g3

0x0002,

0xac8b,	// (0x0000ac8b) list_double2_graphic_pane_vc_g_ParamLimits

0xac8b,	// (0x0000ac8b) list_double2_graphic_pane_vc_g

0x357b,	// (0x0000357b) list_double2_graphic_pane_vc_t1_ParamLimits

0x357b,	// (0x0000357b) list_double2_graphic_pane_vc_t1

0x0da4,	// (0x00000da4) list_single_heading_pane_vc_g1_ParamLimits

0x0da4,	// (0x00000da4) list_single_heading_pane_vc_g1

0x0db0,	// (0x00000db0) list_single_heading_pane_vc_g2_ParamLimits

0x0db0,	// (0x00000db0) list_single_heading_pane_vc_g2

0x0001,

0xaaa8,	// (0x0000aaa8) list_single_heading_pane_vc_g_ParamLimits

0xaaa8,	// (0x0000aaa8) list_single_heading_pane_vc_g

0x3680,	// (0x00003680) list_single_heading_pane_vc_t1_ParamLimits

0x3680,	// (0x00003680) list_single_heading_pane_vc_t1

0x3696,	// (0x00003696) list_single_heading_pane_vc_t2_ParamLimits

0x3696,	// (0x00003696) list_single_heading_pane_vc_t2

0x0001,

0xacb3,	// (0x0000acb3) list_single_heading_pane_vc_t_ParamLimits

0xacb3,	// (0x0000acb3) list_single_heading_pane_vc_t

0x36c0,	// (0x000036c0) list_setting_number_pane_vc_g1_ParamLimits

0x36c0,	// (0x000036c0) list_setting_number_pane_vc_g1

0x36cc,	// (0x000036cc) list_setting_number_pane_vc_g2_ParamLimits

0x36cc,	// (0x000036cc) list_setting_number_pane_vc_g2

0x0001,

0xacb8,	// (0x0000acb8) list_setting_number_pane_vc_g_ParamLimits

0xacb8,	// (0x0000acb8) list_setting_number_pane_vc_g

0x36d8,	// (0x000036d8) list_setting_number_pane_vc_t1_ParamLimits

0x36d8,	// (0x000036d8) list_setting_number_pane_vc_t1

0x36ec,	// (0x000036ec) list_setting_number_pane_vc_t2_ParamLimits

0x36ec,	// (0x000036ec) list_setting_number_pane_vc_t2

0x3706,	// (0x00003706) list_setting_number_pane_vc_t3_ParamLimits

0x3706,	// (0x00003706) list_setting_number_pane_vc_t3

0x0002,

0xacbd,	// (0x0000acbd) list_setting_number_pane_vc_t_ParamLimits

0xacbd,	// (0x0000acbd) list_setting_number_pane_vc_t

0x372e,	// (0x0000372e) set_value_pane_vc_ParamLimits

0x372e,	// (0x0000372e) set_value_pane_vc

0x500a,	// (0x0000500a) list_double2_graphic_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_double2_graphic_pane_vc

0x501d,	// (0x0000501d) list_double2_large_graphic_pane_vc_ParamLimits

0x501d,	// (0x0000501d) list_double2_large_graphic_pane_vc

0x500a,	// (0x0000500a) list_double2_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_double2_pane_vc

0x500a,	// (0x0000500a) list_double_graphic_heading_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_double_graphic_heading_pane_vc

0x500a,	// (0x0000500a) list_double_graphic_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_double_graphic_pane_vc

0x500a,	// (0x0000500a) list_double_heading_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_double_heading_pane_vc

0x501d,	// (0x0000501d) list_double_large_graphic_pane_vc_ParamLimits

0x501d,	// (0x0000501d) list_double_large_graphic_pane_vc

0x500a,	// (0x0000500a) list_double_number_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_double_number_pane_vc

0x500a,	// (0x0000500a) list_double_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_double_pane_vc

0x500a,	// (0x0000500a) list_double_time_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_double_time_pane_vc

0x500a,	// (0x0000500a) list_setting_number_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_setting_number_pane_vc

0x500a,	// (0x0000500a) list_setting_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_setting_pane_vc

0x500a,	// (0x0000500a) list_single_graphic_heading_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_single_graphic_heading_pane_vc

0x500a,	// (0x0000500a) list_single_heading_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_single_heading_pane_vc

0x500a,	// (0x0000500a) list_single_number_heading_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_single_number_heading_pane_vc

0x56ae,	// (0x000056ae) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x56ae,	// (0x000056ae) list_double_graphic_heading_pane_vc_g1

0x56ba,	// (0x000056ba) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x56ba,	// (0x000056ba) list_double_graphic_heading_pane_vc_g2

0x56c6,	// (0x000056c6) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x56c6,	// (0x000056c6) list_double_graphic_heading_pane_vc_g3

0x0002,

0xaec2,	// (0x0000aec2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xaec2,	// (0x0000aec2) list_double_graphic_heading_pane_vc_g

0x56d2,	// (0x000056d2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56d2,	// (0x000056d2) list_double_graphic_heading_pane_vc_t1

0x56ee,	// (0x000056ee) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x56ee,	// (0x000056ee) list_double_graphic_heading_pane_vc_t2

0x0001,

0xaec9,	// (0x0000aec9) list_double_graphic_heading_pane_vc_t_ParamLimits

0xaec9,	// (0x0000aec9) list_double_graphic_heading_pane_vc_t

0x36c0,	// (0x000036c0) list_setting_pane_vc_g1_ParamLimits

0x36c0,	// (0x000036c0) list_setting_pane_vc_g1

0x36cc,	// (0x000036cc) list_setting_pane_vc_g2_ParamLimits

0x36cc,	// (0x000036cc) list_setting_pane_vc_g2

0x0001,

0xacb8,	// (0x0000acb8) list_setting_pane_vc_g_ParamLimits

0xacb8,	// (0x0000acb8) list_setting_pane_vc_g

0x5951,	// (0x00005951) list_setting_pane_vc_t1_ParamLimits

0x5951,	// (0x00005951) list_setting_pane_vc_t1

0x596b,	// (0x0000596b) list_setting_pane_vc_t2_ParamLimits

0x596b,	// (0x0000596b) list_setting_pane_vc_t2

0x0001,

0xaf0c,	// (0x0000af0c) list_setting_pane_vc_t_ParamLimits

0xaf0c,	// (0x0000af0c) list_setting_pane_vc_t

0x372e,	// (0x0000372e) set_value_pane_cp_vc_ParamLimits

0x372e,	// (0x0000372e) set_value_pane_cp_vc

0x0da4,	// (0x00000da4) list_single_number_heading_pane_vc_g1_ParamLimits

0x0da4,	// (0x00000da4) list_single_number_heading_pane_vc_g1

0x0db0,	// (0x00000db0) list_single_number_heading_pane_vc_g2_ParamLimits

0x0db0,	// (0x00000db0) list_single_number_heading_pane_vc_g2

0x0001,

0xaaa8,	// (0x0000aaa8) list_single_number_heading_pane_vc_g_ParamLimits

0xaaa8,	// (0x0000aaa8) list_single_number_heading_pane_vc_g

0x3680,	// (0x00003680) list_single_number_heading_pane_vc_t1_ParamLimits

0x3680,	// (0x00003680) list_single_number_heading_pane_vc_t1

0x5983,	// (0x00005983) list_single_number_heading_pane_vc_t2_ParamLimits

0x5983,	// (0x00005983) list_single_number_heading_pane_vc_t2

0x0e0c,	// (0x00000e0c) list_single_number_heading_pane_vc_t3_ParamLimits

0x0e0c,	// (0x00000e0c) list_single_number_heading_pane_vc_t3

0x0002,

0xaf11,	// (0x0000af11) list_single_number_heading_pane_vc_t_ParamLimits

0xaf11,	// (0x0000af11) list_single_number_heading_pane_vc_t

0x0e1e,	// (0x00000e1e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0e1e,	// (0x00000e1e) list_single_graphic_heading_pane_vc_g1

0x0da4,	// (0x00000da4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0da4,	// (0x00000da4) list_single_graphic_heading_pane_vc_g4

0x0db0,	// (0x00000db0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0db0,	// (0x00000db0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xac8b,	// (0x0000ac8b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xac8b,	// (0x0000ac8b) list_single_graphic_heading_pane_vc_g

0x3680,	// (0x00003680) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3680,	// (0x00003680) list_single_graphic_heading_pane_vc_t1

0x5997,	// (0x00005997) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5997,	// (0x00005997) list_single_graphic_heading_pane_vc_t2

0x0001,

0xaf18,	// (0x0000af18) list_single_graphic_heading_pane_vc_t_ParamLimits

0xaf18,	// (0x0000af18) list_single_graphic_heading_pane_vc_t

0x0da4,	// (0x00000da4) list_double2_pane_vc_g1_ParamLimits

0x0da4,	// (0x00000da4) list_double2_pane_vc_g1

0x0db0,	// (0x00000db0) list_double2_pane_vc_g2_ParamLimits

0x0db0,	// (0x00000db0) list_double2_pane_vc_g2

0x0001,

0xaaa8,	// (0x0000aaa8) list_double2_pane_vc_g_ParamLimits

0xaaa8,	// (0x0000aaa8) list_double2_pane_vc_g

0x4fa7,	// (0x00004fa7) list_double2_pane_vc_t1_ParamLimits

0x4fa7,	// (0x00004fa7) list_double2_pane_vc_t1

0x59ab,	// (0x000059ab) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x59ab,	// (0x000059ab) list_double2_large_graphic_pane_vc_g1

0x59b7,	// (0x000059b7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x59b7,	// (0x000059b7) list_double2_large_graphic_pane_vc_g2

0x59c3,	// (0x000059c3) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x59c3,	// (0x000059c3) list_double2_large_graphic_pane_vc_g3

0x0002,

0xaf1d,	// (0x0000af1d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xaf1d,	// (0x0000af1d) list_double2_large_graphic_pane_vc_g

0x59cf,	// (0x000059cf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59cf,	// (0x000059cf) list_double2_large_graphic_pane_vc_t1

0x59e5,	// (0x000059e5) list_double_time_pane_vc_g1_ParamLimits

0x59e5,	// (0x000059e5) list_double_time_pane_vc_g1

0x59f1,	// (0x000059f1) list_double_time_pane_vc_g2_ParamLimits

0x59f1,	// (0x000059f1) list_double_time_pane_vc_g2

0x0001,

0xaf24,	// (0x0000af24) list_double_time_pane_vc_g_ParamLimits

0xaf24,	// (0x0000af24) list_double_time_pane_vc_g

0x59fd,	// (0x000059fd) list_double_time_pane_vc_t1_ParamLimits

0x59fd,	// (0x000059fd) list_double_time_pane_vc_t1

0x5a21,	// (0x00005a21) list_double_time_pane_vc_t2_ParamLimits

0x5a21,	// (0x00005a21) list_double_time_pane_vc_t2

0x5a4b,	// (0x00005a4b) list_double_time_pane_vc_t3_ParamLimits

0x5a4b,	// (0x00005a4b) list_double_time_pane_vc_t3

0x5a5d,	// (0x00005a5d) list_double_time_pane_vc_t4_ParamLimits

0x5a5d,	// (0x00005a5d) list_double_time_pane_vc_t4

0x0003,

0xaf29,	// (0x0000af29) list_double_time_pane_vc_t_ParamLimits

0xaf29,	// (0x0000af29) list_double_time_pane_vc_t

0x0da4,	// (0x00000da4) list_double_pane_vc_g1_ParamLimits

0x0da4,	// (0x00000da4) list_double_pane_vc_g1

0x0db0,	// (0x00000db0) list_double_pane_vc_g2_ParamLimits

0x0db0,	// (0x00000db0) list_double_pane_vc_g2

0x0001,

0xaaa8,	// (0x0000aaa8) list_double_pane_vc_g_ParamLimits

0xaaa8,	// (0x0000aaa8) list_double_pane_vc_g

0x5a71,	// (0x00005a71) list_double_pane_vc_t1_ParamLimits

0x5a71,	// (0x00005a71) list_double_pane_vc_t1

0x5a85,	// (0x00005a85) list_double_pane_vc_t2_ParamLimits

0x5a85,	// (0x00005a85) list_double_pane_vc_t2

0x0001,

0xaf32,	// (0x0000af32) list_double_pane_vc_t_ParamLimits

0xaf32,	// (0x0000af32) list_double_pane_vc_t

0x0da4,	// (0x00000da4) list_double_number_pane_vc_g1_ParamLimits

0x0da4,	// (0x00000da4) list_double_number_pane_vc_g1

0x0db0,	// (0x00000db0) list_double_number_pane_vc_g2_ParamLimits

0x0db0,	// (0x00000db0) list_double_number_pane_vc_g2

0x0001,

0xaaa8,	// (0x0000aaa8) list_double_number_pane_vc_g_ParamLimits

0xaaa8,	// (0x0000aaa8) list_double_number_pane_vc_g

0x5a9d,	// (0x00005a9d) list_double_number_pane_vc_t1_ParamLimits

0x5a9d,	// (0x00005a9d) list_double_number_pane_vc_t1

0x5ab1,	// (0x00005ab1) list_double_number_pane_vc_t2_ParamLimits

0x5ab1,	// (0x00005ab1) list_double_number_pane_vc_t2

0x5a85,	// (0x00005a85) list_double_number_pane_vc_t3_ParamLimits

0x5a85,	// (0x00005a85) list_double_number_pane_vc_t3

0x0002,

0xaf37,	// (0x0000af37) list_double_number_pane_vc_t_ParamLimits

0xaf37,	// (0x0000af37) list_double_number_pane_vc_t

0x5ac5,	// (0x00005ac5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5ac5,	// (0x00005ac5) list_double_large_graphic_pane_vc_g1

0x5ad6,	// (0x00005ad6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5ad6,	// (0x00005ad6) list_double_large_graphic_pane_vc_g2

0x59c3,	// (0x000059c3) list_double_large_graphic_pane_vc_g3_ParamLimits

0x59c3,	// (0x000059c3) list_double_large_graphic_pane_vc_g3

0x5ae5,	// (0x00005ae5) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5ae5,	// (0x00005ae5) list_double_large_graphic_pane_vc_g4

0x0003,

0xaf3e,	// (0x0000af3e) list_double_large_graphic_pane_vc_g_ParamLimits

0xaf3e,	// (0x0000af3e) list_double_large_graphic_pane_vc_g

0x5af1,	// (0x00005af1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5af1,	// (0x00005af1) list_double_large_graphic_pane_vc_t1

0x5b0a,	// (0x00005b0a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5b0a,	// (0x00005b0a) list_double_large_graphic_pane_vc_t2

0x0001,

0xaf47,	// (0x0000af47) list_double_large_graphic_pane_vc_t_ParamLimits

0xaf47,	// (0x0000af47) list_double_large_graphic_pane_vc_t

0x56ba,	// (0x000056ba) list_double_heading_pane_vc_g1_ParamLimits

0x56ba,	// (0x000056ba) list_double_heading_pane_vc_g1

0x56c6,	// (0x000056c6) list_double_heading_pane_vc_g2_ParamLimits

0x56c6,	// (0x000056c6) list_double_heading_pane_vc_g2

0x0001,

0xaf4c,	// (0x0000af4c) list_double_heading_pane_vc_g_ParamLimits

0xaf4c,	// (0x0000af4c) list_double_heading_pane_vc_g

0x5b23,	// (0x00005b23) list_double_heading_pane_vc_t1_ParamLimits

0x5b23,	// (0x00005b23) list_double_heading_pane_vc_t1

0x3680,	// (0x00003680) list_double_heading_pane_vc_t2_ParamLimits

0x3680,	// (0x00003680) list_double_heading_pane_vc_t2

0x0001,

0xaf51,	// (0x0000af51) list_double_heading_pane_vc_t_ParamLimits

0xaf51,	// (0x0000af51) list_double_heading_pane_vc_t

0x0e1e,	// (0x00000e1e) list_double_graphic_pane_vc_g1_ParamLimits

0x0e1e,	// (0x00000e1e) list_double_graphic_pane_vc_g1

0x5b37,	// (0x00005b37) list_double_graphic_pane_vc_g2_ParamLimits

0x5b37,	// (0x00005b37) list_double_graphic_pane_vc_g2

0x5b46,	// (0x00005b46) list_double_graphic_pane_vc_g3_ParamLimits

0x5b46,	// (0x00005b46) list_double_graphic_pane_vc_g3

0x0002,

0xaf56,	// (0x0000af56) list_double_graphic_pane_vc_g_ParamLimits

0xaf56,	// (0x0000af56) list_double_graphic_pane_vc_g

0x5b52,	// (0x00005b52) list_double_graphic_pane_vc_t1_ParamLimits

0x5b52,	// (0x00005b52) list_double_graphic_pane_vc_t1

0x5b66,	// (0x00005b66) list_double_graphic_pane_vc_t2_ParamLimits

0x5b66,	// (0x00005b66) list_double_graphic_pane_vc_t2

0x0001,

0xaf5d,	// (0x0000af5d) list_double_graphic_pane_vc_t_ParamLimits

0xaf5d,	// (0x0000af5d) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb408,	// (0x0000b408) aid_size_cell_touch_ParamLimits

0xb408,	// (0x0000b408) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb553,	// (0x0000b553) touch_pane_ParamLimits

0xb553,	// (0x0000b553) touch_pane

0x126e,	// (0x0000126e) button_value_adjust_pane_cp2

0x126e,	// (0x0000126e) button_value_adjust_pane_cp4

0x128e,	// (0x0000128e) form_field_data_pane_cp2

0xbcb0,	// (0x0000bcb0) form_field_data_wide_pane_cp2

0x1aad,	// (0x00001aad) bg_scroll_pane_ParamLimits

0x1acc,	// (0x00001acc) scroll_handle_pane_ParamLimits

0x1ae0,	// (0x00001ae0) scroll_sc2_down_pane_ParamLimits

0x1ae0,	// (0x00001ae0) scroll_sc2_down_pane

0x1b07,	// (0x00001b07) scroll_sc2_up_pane_ParamLimits

0x1b07,	// (0x00001b07) scroll_sc2_up_pane

0xd612,	// (0x0000d612) grid_wheel_folder_pane_g1_ParamLimits

0xd612,	// (0x0000d612) grid_wheel_folder_pane_g1

0x21b7,	// (0x000021b7) clock_nsta_pane_cp2_ParamLimits

0x21b7,	// (0x000021b7) clock_nsta_pane_cp2

0x2ac2,	// (0x00002ac2) listscroll_midp_pane_ParamLimits

0xc0bc,	// (0x0000c0bc) midp_canvas_pane

0x2a36,	// (0x00002a36) nsta_clock_indic_pane

0x2a94,	// (0x00002a94) listscroll_form_pane_vc

0x2ab0,	// (0x00002ab0) listscroll_set_pane_vc_ParamLimits

0x2ab0,	// (0x00002ab0) listscroll_set_pane_vc

0xcaa5,	// (0x0000caa5) clock_nsta_pane

0xcacf,	// (0x0000cacf) indicator_nsta_pane

0x34e5,	// (0x000034e5) bg_popup_sub_pane_cp2_ParamLimits

0x34f9,	// (0x000034f9) find_pane_cp2_ParamLimits

0x34f9,	// (0x000034f9) find_pane_cp2

0x350f,	// (0x0000350f) grid_toobar_pane_ParamLimits

0x373e,	// (0x0000373e) list_form_gen_pane_vc_ParamLimits

0x373e,	// (0x0000373e) list_form_gen_pane_vc

0x3754,	// (0x00003754) scroll_pane_cp8_vc_ParamLimits

0x3754,	// (0x00003754) scroll_pane_cp8_vc

0x386d,	// (0x0000386d) data_form_wide_pane_vc_ParamLimits

0x386d,	// (0x0000386d) data_form_wide_pane_vc

0x3879,	// (0x00003879) form_field_data_wide_pane_vc_g1

0x3881,	// (0x00003881) form_field_data_wide_pane_vc_t1_ParamLimits

0x3881,	// (0x00003881) form_field_data_wide_pane_vc_t1

0x1348,	// (0x00001348) input_focus_pane_cp6_vc_ParamLimits

0x1348,	// (0x00001348) input_focus_pane_cp6_vc

0xceca,	// (0x0000ceca) list_midp_pane_ParamLimits

0x5257,	// (0x00005257) scroll_pane_cp16_ParamLimits

0x5257,	// (0x00005257) scroll_pane_cp16

0x3c5e,	// (0x00003c5e) button_value_adjust_pane_ParamLimits

0x3c5e,	// (0x00003c5e) button_value_adjust_pane

0xd262,	// (0x0000d262) button_value_adjust_pane_cp6_ParamLimits

0xd262,	// (0x0000d262) button_value_adjust_pane_cp6

0xd378,	// (0x0000d378) settings_code_pane_cp_ParamLimits

0xd378,	// (0x0000d378) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xabde,	// (0x0000abde) cell_touch_pane_g

0xd4f1,	// (0x0000d4f1) cell_touch_pane_cp_ParamLimits

0xd4f1,	// (0x0000d4f1) cell_touch_pane_cp

0xd50d,	// (0x0000d50d) cell_touch_pane_ParamLimits

0xd50d,	// (0x0000d50d) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5706,	// (0x00005706) list_set_graphic_pane_vc_g1_ParamLimits

0x5706,	// (0x00005706) list_set_graphic_pane_vc_g1

0x5712,	// (0x00005712) list_set_graphic_pane_vc_g2_ParamLimits

0x5712,	// (0x00005712) list_set_graphic_pane_vc_g2

0x0001,

0xaece,	// (0x0000aece) list_set_graphic_pane_vc_g_ParamLimits

0xaece,	// (0x0000aece) list_set_graphic_pane_vc_g

0x571e,	// (0x0000571e) text_primary_small_cp13_vc_ParamLimits

0x571e,	// (0x0000571e) text_primary_small_cp13_vc

0x5736,	// (0x00005736) list_set_graphic_pane_vc_ParamLimits

0x5736,	// (0x00005736) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05cb,	// (0x000005cb) setting_code_pane_vc_t1

0x5749,	// (0x00005749) set_text_pane_vc_t1_ParamLimits

0x5749,	// (0x00005749) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5766,	// (0x00005766) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x059a,	// (0x0000059a) setting_slider_graphic_pane_vc_g1

0x5770,	// (0x00005770) setting_slider_graphic_pane_vc_t1

0x5780,	// (0x00005780) setting_slider_graphic_pane_vc_t2

0x0001,

0xaed3,	// (0x0000aed3) setting_slider_graphic_pane_vc_t

0x5790,	// (0x00005790) slider_set_pane_cp_vc

0x5798,	// (0x00005798) slider_set_pane_vc_g1

0x57a1,	// (0x000057a1) slider_set_pane_vc_g2

0x0006,

0xaed8,	// (0x0000aed8) slider_set_pane_vc_g

0x1475,	// (0x00001475) set_opt_bg_pane_g1_copy1

0x147d,	// (0x0000147d) set_opt_bg_pane_g2_copy1

0x57cd,	// (0x000057cd) set_opt_bg_pane_g3_copy1

0x148d,	// (0x0000148d) set_opt_bg_pane_g4_copy1

0x1495,	// (0x00001495) set_opt_bg_pane_g5_copy1

0x149d,	// (0x0000149d) set_opt_bg_pane_g6_copy1

0x57d5,	// (0x000057d5) set_opt_bg_pane_g7_copy1

0x57df,	// (0x000057df) set_opt_bg_pane_g8_copy1

0x57e7,	// (0x000057e7) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x57ef,	// (0x000057ef) setting_slider_pane_vc_t1

0x57fe,	// (0x000057fe) setting_slider_pane_vc_t2

0x580e,	// (0x0000580e) setting_slider_pane_vc_t3

0x0002,

0xaee7,	// (0x0000aee7) setting_slider_pane_vc_t

0x581e,	// (0x0000581e) slider_set_pane_vc

0x44a2,	// (0x000044a2) volume_set_pane_vc_g1

0x5826,	// (0x00005826) volume_set_pane_vc_g2

0x582f,	// (0x0000582f) volume_set_pane_vc_g3

0x5838,	// (0x00005838) volume_set_pane_vc_g4

0x5841,	// (0x00005841) volume_set_pane_vc_g5

0x584a,	// (0x0000584a) volume_set_pane_vc_g6

0x44cf,	// (0x000044cf) volume_set_pane_vc_g7

0x5853,	// (0x00005853) volume_set_pane_vc_g8

0x585c,	// (0x0000585c) volume_set_pane_vc_g9

0x5865,	// (0x00005865) volume_set_pane_vc_g10

0x0009,

0xaeee,	// (0x0000aeee) volume_set_pane_vc_g

0x586e,	// (0x0000586e) volume_set_pane_vc

0x5876,	// (0x00005876) button_value_adjust_pane_cp1_vc

0x5880,	// (0x00005880) list_highlight_pane_cp2_vc

0x5889,	// (0x00005889) list_set_pane_vc_ParamLimits

0x5889,	// (0x00005889) list_set_pane_vc

0x58e7,	// (0x000058e7) main_pane_set_vc_t1_ParamLimits

0x58e7,	// (0x000058e7) main_pane_set_vc_t1

0x58fc,	// (0x000058fc) main_pane_set_vc_t2_ParamLimits

0x58fc,	// (0x000058fc) main_pane_set_vc_t2

0x590e,	// (0x0000590e) main_pane_set_vc_t3_ParamLimits

0x590e,	// (0x0000590e) main_pane_set_vc_t3

0x5920,	// (0x00005920) main_pane_set_vc_t4_ParamLimits

0x5920,	// (0x00005920) main_pane_set_vc_t4

0x0003,

0xaf03,	// (0x0000af03) main_pane_set_vc_t_ParamLimits

0xaf03,	// (0x0000af03) main_pane_set_vc_t

0x5932,	// (0x00005932) setting_code_pane_vc_ParamLimits

0x5932,	// (0x00005932) setting_code_pane_vc

0x5941,	// (0x00005941) setting_slider_graphic_pane_vc

0x5941,	// (0x00005941) setting_slider_pane_vc

0x5941,	// (0x00005941) setting_text_pane_vc

0x5941,	// (0x00005941) setting_volume_pane_vc

0x5949,	// (0x00005949) scroll_pane_cp121_vc

0x125c,	// (0x0000125c) set_content_pane_vc

0x5b7e,	// (0x00005b7e) button_value_adjust_pane_g1

0x5b87,	// (0x00005b87) button_value_adjust_pane_g2

0x0001,

0xaf62,	// (0x0000af62) button_value_adjust_pane_g

0x5b90,	// (0x00005b90) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5b90,	// (0x00005b90) form_field_slider_wide_pane_vc_t1

0x5ba4,	// (0x00005ba4) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5ba4,	// (0x00005ba4) form_field_slider_wide_pane_vc_t2

0x0002,

0xaf67,	// (0x0000af67) form_field_slider_wide_pane_vc_t_ParamLimits

0xaf67,	// (0x0000af67) form_field_slider_wide_pane_vc_t

0x0815,	// (0x00000815) input_focus_pane_cp10_vc_ParamLimits

0x0815,	// (0x00000815) input_focus_pane_cp10_vc

0x5bd0,	// (0x00005bd0) slider_cont_pane_cp1_vc_ParamLimits

0x5bd0,	// (0x00005bd0) slider_cont_pane_cp1_vc

0x5be0,	// (0x00005be0) slider_form_pane_g1_cp2

0x57a1,	// (0x000057a1) slider_form_pane_g2_cp2

0x5c0d,	// (0x00005c0d) form_field_slider_pane_vc_t3

0x5c1b,	// (0x00005c1b) form_field_slider_pane_vc_t4

0x5c29,	// (0x00005c29) slider_form_pane_vc_ParamLimits

0x5c29,	// (0x00005c29) slider_form_pane_vc

0x5c36,	// (0x00005c36) form_field_slider_pane_vc_t1_ParamLimits

0x5c36,	// (0x00005c36) form_field_slider_pane_vc_t1

0x5ba4,	// (0x00005ba4) form_field_slider_pane_vc_t2_ParamLimits

0x5ba4,	// (0x00005ba4) form_field_slider_pane_vc_t2

0x0001,

0xaf79,	// (0x0000af79) form_field_slider_pane_vc_t_ParamLimits

0xaf79,	// (0x0000af79) form_field_slider_pane_vc_t

0x0815,	// (0x00000815) input_focus_pane_cp9_vc_ParamLimits

0x0815,	// (0x00000815) input_focus_pane_cp9_vc

0x5c52,	// (0x00005c52) slider_cont_pane_vc_ParamLimits

0x5c52,	// (0x00005c52) slider_cont_pane_vc

0x5c64,	// (0x00005c64) list_form_graphic_pane_cp_vc_ParamLimits

0x5c64,	// (0x00005c64) list_form_graphic_pane_cp_vc

0x3879,	// (0x00003879) form_field_popup_wide_pane_vc_g1

0x5c79,	// (0x00005c79) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5c79,	// (0x00005c79) form_field_popup_wide_pane_vc_t1

0x1348,	// (0x00001348) input_focus_pane_cp8_vc_ParamLimits

0x1348,	// (0x00001348) input_focus_pane_cp8_vc

0x5cbe,	// (0x00005cbe) list_form_wide_pane_vc_ParamLimits

0x5cbe,	// (0x00005cbe) list_form_wide_pane_vc

0x5cca,	// (0x00005cca) list_form_graphic_pane_vc_g1

0x5cd2,	// (0x00005cd2) list_form_graphic_pane_vc_t1_ParamLimits

0x5cd2,	// (0x00005cd2) list_form_graphic_pane_vc_t1

0x04ef,	// (0x000004ef) list_highlight_pane_cp5_vc_ParamLimits

0x04ef,	// (0x000004ef) list_highlight_pane_cp5_vc

0x5cee,	// (0x00005cee) list_form_graphic_pane_vc_ParamLimits

0x5cee,	// (0x00005cee) list_form_graphic_pane_vc

0x3879,	// (0x00003879) form_field_popup_pane_vc_g1

0x5d04,	// (0x00005d04) form_field_popup_pane_vc_t1_ParamLimits

0x5d04,	// (0x00005d04) form_field_popup_pane_vc_t1

0x1348,	// (0x00001348) input_focus_pane_cp7_vc_ParamLimits

0x1348,	// (0x00001348) input_focus_pane_cp7_vc

0x5d1b,	// (0x00005d1b) list_form_pane_vc_ParamLimits

0x5d1b,	// (0x00005d1b) list_form_pane_vc

0x5d27,	// (0x00005d27) data_form_pane_vc_t1_ParamLimits

0x5d27,	// (0x00005d27) data_form_pane_vc_t1

0x1475,	// (0x00001475) input_focus_pane_vc_g1

0x147d,	// (0x0000147d) input_focus_pane_vc_g2

0x1485,	// (0x00001485) input_focus_pane_vc_g3

0x148d,	// (0x0000148d) input_focus_pane_vc_g4

0x1495,	// (0x00001495) input_focus_pane_vc_g5

0x149d,	// (0x0000149d) input_focus_pane_vc_g6

0x14a5,	// (0x000014a5) input_focus_pane_vc_g7

0x14ad,	// (0x000014ad) input_focus_pane_vc_g8

0x14b5,	// (0x000014b5) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xab67,	// (0x0000ab67) input_focus_pane_vc_g

0x386d,	// (0x0000386d) data_form_pane_vc_ParamLimits

0x386d,	// (0x0000386d) data_form_pane_vc

0x3879,	// (0x00003879) form_field_data_pane_vc_g1

0x5d42,	// (0x00005d42) form_field_data_pane_vc_t1_ParamLimits

0x5d42,	// (0x00005d42) form_field_data_pane_vc_t1

0x1348,	// (0x00001348) input_focus_pane_vc_ParamLimits

0x1348,	// (0x00001348) input_focus_pane_vc

0x5d5c,	// (0x00005d5c) button_value_adjust_pane_cp3_vc

0x5d64,	// (0x00005d64) button_value_adjust_pane_cp5_vc

0x5d6c,	// (0x00005d6c) form_field_data_pane_vc_ParamLimits

0x5d6c,	// (0x00005d6c) form_field_data_pane_vc

0x5d83,	// (0x00005d83) form_field_data_pane_vc_cp2

0x5d8b,	// (0x00005d8b) form_field_data_wide_pane_vc_ParamLimits

0x5d8b,	// (0x00005d8b) form_field_data_wide_pane_vc

0x5da1,	// (0x00005da1) form_field_data_wide_pane_vc_cp2

0x5da9,	// (0x00005da9) form_field_popup_pane_vc_ParamLimits

0x5da9,	// (0x00005da9) form_field_popup_pane_vc

0x5dc0,	// (0x00005dc0) form_field_popup_wide_pane_vc_ParamLimits

0x5dc0,	// (0x00005dc0) form_field_popup_wide_pane_vc

0x5dd6,	// (0x00005dd6) form_field_slider_pane_vc_ParamLimits

0x5dd6,	// (0x00005dd6) form_field_slider_pane_vc

0x5de9,	// (0x00005de9) form_field_slider_wide_pane_vc_ParamLimits

0x5de9,	// (0x00005de9) form_field_slider_wide_pane_vc

0xd52b,	// (0x0000d52b) grid_touch_1_pane_ParamLimits

0xd52b,	// (0x0000d52b) grid_touch_1_pane

0xd53f,	// (0x0000d53f) grid_touch_2_pane_ParamLimits

0xd53f,	// (0x0000d53f) grid_touch_2_pane

0x5ebe,	// (0x00005ebe) touch_pane_g1_ParamLimits

0x5ebe,	// (0x00005ebe) touch_pane_g1

0x5e20,	// (0x00005e20) cell_app_pane_cp_wide_ParamLimits

0x5e20,	// (0x00005e20) cell_app_pane_cp_wide

0x5e31,	// (0x00005e31) grid_popup_fast_wide_pane_ParamLimits

0x5e31,	// (0x00005e31) grid_popup_fast_wide_pane

0x5e45,	// (0x00005e45) scroll_pane_cp19_ParamLimits

0x5e45,	// (0x00005e45) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5e59,	// (0x00005e59) listscroll_popup_fast_wide_pane

0x1669,	// (0x00001669) grid_indicator_nsta_pane

0x5e61,	// (0x00005e61) clock_nsta_pane_g1

0x5e6a,	// (0x00005e6a) clock_nsta_pane_t1

0xd569,	// (0x0000d569) cell_indicator_nsta_pane_ParamLimits

0xd569,	// (0x0000d569) cell_indicator_nsta_pane

0x5ebe,	// (0x00005ebe) cell_indicator_nsta_pane_g1

0xd586,	// (0x0000d586) cell_indicator_nsta_pane_g2

0x0001,

0xf101,	// (0x0000f101) cell_indicator_nsta_pane_g

0x5ee2,	// (0x00005ee2) clock_nsta_pane_cp

0x5eea,	// (0x00005eea) indicator_nsta_pane_cp

0x5ef2,	// (0x00005ef2) nsta_clock_indic_pane_g1

0x0663,	// (0x00000663) grid_indicator_pane

0x1bfc,	// (0x00001bfc) scroll_pane_cp29

0x20e4,	// (0x000020e4) indicator_nsta_pane_cp2_ParamLimits

0x20e4,	// (0x000020e4) indicator_nsta_pane_cp2

0x04ef,	// (0x000004ef) main_apps_wheel_pane

0x3ae9,	// (0x00003ae9) form_midp_field_text_pane_ParamLimits

0x3c30,	// (0x00003c30) scroll_bar_cp050_ParamLimits

0x5f53,	// (0x00005f53) cell_indicator_pane_ParamLimits

0x5f53,	// (0x00005f53) cell_indicator_pane

0x5f6e,	// (0x00005f6e) cell_indicator_pane_g1

0xd59c,	// (0x0000d59c) grid_wheel_folder_pane_ParamLimits

0xd59c,	// (0x0000d59c) grid_wheel_folder_pane

0xd5aa,	// (0x0000d5aa) list_wheel_apps_pane_ParamLimits

0xd5aa,	// (0x0000d5aa) list_wheel_apps_pane

0xd5b8,	// (0x0000d5b8) main_apps_wheel_pane_g1_ParamLimits

0xd5b8,	// (0x0000d5b8) main_apps_wheel_pane_g1

0xd5c4,	// (0x0000d5c4) main_apps_wheel_pane_g2_ParamLimits

0xd5c4,	// (0x0000d5c4) main_apps_wheel_pane_g2

0x0001,

0xf106,	// (0x0000f106) main_apps_wheel_pane_g_ParamLimits

0xf106,	// (0x0000f106) main_apps_wheel_pane_g

0xd5d2,	// (0x0000d5d2) main_apps_wheel_pane_t1_ParamLimits

0xd5d2,	// (0x0000d5d2) main_apps_wheel_pane_t1

0xd5e6,	// (0x0000d5e6) list_wheel_apps_pane_g1

0xd5ee,	// (0x0000d5ee) list_wheel_apps_pane_g2

0xd5f6,	// (0x0000d5f6) list_wheel_apps_pane_g3

0xd5fe,	// (0x0000d5fe) list_wheel_apps_pane_g4

0xd608,	// (0x0000d608) list_wheel_apps_pane_g5

0x0004,

0xf10b,	// (0x0000f10b) list_wheel_apps_pane_g

0x23e3,	// (0x000023e3) navi_icon_text_pane

0xc999,	// (0x0000c999) aid_fill_nsta

0x6035,	// (0x00006035) navi_icon_text_pane_g1

0x6041,	// (0x00006041) navi_icon_text_pane_t1

0x2285,	// (0x00002285) list_set_graphic_pane_t1_ParamLimits

0x2285,	// (0x00002285) list_set_graphic_pane_t1

0x4382,	// (0x00004382) popup_midp_note_alarm_window_t6_ParamLimits

0x4382,	// (0x00004382) popup_midp_note_alarm_window_t6

0x4394,	// (0x00004394) popup_midp_note_alarm_window_t7_ParamLimits

0x4394,	// (0x00004394) popup_midp_note_alarm_window_t7

0x43a6,	// (0x000043a6) popup_midp_note_alarm_window_t8_ParamLimits

0x43a6,	// (0x000043a6) popup_midp_note_alarm_window_t8

0x43b8,	// (0x000043b8) popup_midp_note_alarm_window_t9_ParamLimits

0x43b8,	// (0x000043b8) popup_midp_note_alarm_window_t9

0x43ca,	// (0x000043ca) popup_midp_note_alarm_window_t10_ParamLimits

0x43ca,	// (0x000043ca) popup_midp_note_alarm_window_t10

0x43dc,	// (0x000043dc) popup_midp_note_alarm_window_t11_ParamLimits

0x43dc,	// (0x000043dc) popup_midp_note_alarm_window_t11

0x43ee,	// (0x000043ee) scroll_pane_cp17_ParamLimits

0x43ee,	// (0x000043ee) scroll_pane_cp17

0x44a2,	// (0x000044a2) volume_small_pane_cp_g1

0x6053,	// (0x00006053) volume_small_pane_cp_g2

0x605c,	// (0x0000605c) volume_small_pane_cp_g3

0x44b4,	// (0x000044b4) volume_small_pane_cp_g4

0x6065,	// (0x00006065) volume_small_pane_cp_g5

0x5841,	// (0x00005841) volume_small_pane_cp_g6

0x44c6,	// (0x000044c6) volume_small_pane_cp_g7

0x606e,	// (0x0000606e) volume_small_pane_cp_g8

0x6077,	// (0x00006077) volume_small_pane_cp_g9

0x44d8,	// (0x000044d8) volume_small_pane_cp_g10

0x262a,	// (0x0000262a) midp_ticker_pane_g1_ParamLimits

0x2636,	// (0x00002636) midp_ticker_pane_g2_ParamLimits

0xac33,	// (0x0000ac33) midp_ticker_pane_g_ParamLimits

0x2642,	// (0x00002642) midp_ticker_pane_t1_ParamLimits

0xc9bd,	// (0x0000c9bd) aid_fill_nsta_2

0x3c1c,	// (0x00003c1c) list_form2_midp_pane

0x4fbd,	// (0x00004fbd) midp_editing_number_pane_ParamLimits

0x4fcc,	// (0x00004fcc) midp_ticker_pane_ParamLimits

0x6080,	// (0x00006080) form2_midp_field_pane

0x60a4,	// (0x000060a4) scroll_pane_cp51

0x60c4,	// (0x000060c4) form2_midp_button_pane_ParamLimits

0x60c4,	// (0x000060c4) form2_midp_button_pane

0x60d6,	// (0x000060d6) form2_midp_content_pane_ParamLimits

0x60d6,	// (0x000060d6) form2_midp_content_pane

0x60f0,	// (0x000060f0) form2_midp_field_choice_group_pane

0x60f8,	// (0x000060f8) form2_midp_field_pane_g1

0x6100,	// (0x00006100) form2_midp_field_pane_g2

0x6108,	// (0x00006108) form2_midp_field_pane_g3

0x6110,	// (0x00006110) form2_midp_field_pane_g4

0x0003,

0xafd0,	// (0x0000afd0) form2_midp_field_pane_g

0x6118,	// (0x00006118) form2_midp_gauge_slider_pane

0x6120,	// (0x00006120) form2_midp_gauge_wait_pane

0x6128,	// (0x00006128) form2_midp_image_pane_ParamLimits

0x6128,	// (0x00006128) form2_midp_image_pane

0x6143,	// (0x00006143) form2_midp_label_pane_ParamLimits

0x6143,	// (0x00006143) form2_midp_label_pane

0xd63b,	// (0x0000d63b) form2_midp_label_pane_cp_ParamLimits

0xd63b,	// (0x0000d63b) form2_midp_label_pane_cp

0x617d,	// (0x0000617d) form2_midp_string_pane_ParamLimits

0x617d,	// (0x0000617d) form2_midp_string_pane

0x618f,	// (0x0000618f) form2_midp_text_pane_ParamLimits

0x618f,	// (0x0000618f) form2_midp_text_pane

0x61aa,	// (0x000061aa) form2_midp_time_pane

0x61ba,	// (0x000061ba) input_focus_pane_cp51_ParamLimits

0x61ba,	// (0x000061ba) input_focus_pane_cp51

0x61d2,	// (0x000061d2) form2_midp_label_pane_t1_ParamLimits

0x61d2,	// (0x000061d2) form2_midp_label_pane_t1

0x6212,	// (0x00006212) form2_mdip_text_pane_t1_ParamLimits

0x6212,	// (0x00006212) form2_mdip_text_pane_t1

0x622e,	// (0x0000622e) form2_midp_time_pane_t1

0x6249,	// (0x00006249) form2_midp_gauge_slider_pane_t1

0xd65c,	// (0x0000d65c) form2_midp_gauge_slider_pane_t2

0xd670,	// (0x0000d670) form2_midp_gauge_slider_pane_t3

0x0002,

0xf11b,	// (0x0000f11b) form2_midp_gauge_slider_pane_t

0x627f,	// (0x0000627f) form2_midp_slider_pane

0x628b,	// (0x0000628b) form2_midp_gauge_wait_pane_t1

0x6299,	// (0x00006299) form2_midp_wait_pane_ParamLimits

0x6299,	// (0x00006299) form2_midp_wait_pane

0xd684,	// (0x0000d684) list_single_2graphic_pane_cp4_ParamLimits

0xd684,	// (0x0000d684) list_single_2graphic_pane_cp4

0xce36,	// (0x0000ce36) list_single_midp_graphic_pane_cp_ParamLimits

0xce36,	// (0x0000ce36) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x62f3,	// (0x000062f3) list_single_2graphic_pane_g1_cp4

0x5581,	// (0x00005581) list_single_2graphic_pane_g2_cp4

0x62fb,	// (0x000062fb) list_single_2graphic_pane_t1_cp4

0x04ef,	// (0x000004ef) list_highlight_pane_cp21

0x630a,	// (0x0000630a) list_single_midp_graphic_pane_g4_cp

0x6319,	// (0x00006319) list_single_midp_graphic_pane_t1_cp

0xd69a,	// (0x0000d69a) form2_mdip_string_pane_t1_ParamLimits

0xd69a,	// (0x0000d69a) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1038,	// (0x00001038) list_double_large_graphic_pane_g5_ParamLimits

0x1038,	// (0x00001038) list_double_large_graphic_pane_g5

0x2ac2,	// (0x00002ac2) midp_form_pane_ParamLimits

0x04ef,	// (0x000004ef) main_apps_wheel_pane_ParamLimits

0xc6ef,	// (0x0000c6ef) popup_preview_window_ParamLimits

0xc6ef,	// (0x0000c6ef) popup_preview_window

0x3022,	// (0x00003022) popup_touch_info_window_ParamLimits

0x3022,	// (0x00003022) popup_touch_info_window

0x3040,	// (0x00003040) popup_touch_menu_window_ParamLimits

0x3040,	// (0x00003040) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x6451,	// (0x00006451) list_touch_menu_pane

0x6459,	// (0x00006459) list_single_touch_menu_pane_ParamLimits

0x6459,	// (0x00006459) list_single_touch_menu_pane

0x646d,	// (0x0000646d) list_single_touch_menu_pane_t1

0x04ef,	// (0x000004ef) bg_popup_sub_pane_cp7_ParamLimits

0x04ef,	// (0x000004ef) bg_popup_sub_pane_cp7

0x647b,	// (0x0000647b) heading_sub_pane

0x6483,	// (0x00006483) list_touch_info_pane_ParamLimits

0x6483,	// (0x00006483) list_touch_info_pane

0x6492,	// (0x00006492) list_single_touch_info_pane_ParamLimits

0x6492,	// (0x00006492) list_single_touch_info_pane

0x64a4,	// (0x000064a4) list_single_touch_info_pane_t1

0x64b2,	// (0x000064b2) list_single_touch_info_pane_t2

0x0001,

0xafe7,	// (0x0000afe7) list_single_touch_info_pane_t

0x2557,	// (0x00002557) bg_popup_heading_pane_cp

0x64c0,	// (0x000064c0) heading_sub_pane_t1

0x377f,	// (0x0000377f) bg_popup_preview_window_pane_cp_ParamLimits

0x377f,	// (0x0000377f) bg_popup_preview_window_pane_cp

0x647b,	// (0x0000647b) heading_preview_pane

0x6483,	// (0x00006483) list_preview_pane_ParamLimits

0x6483,	// (0x00006483) list_preview_pane

0x64ce,	// (0x000064ce) popup_preview_window_g1

0x6492,	// (0x00006492) list_single_preview_pane_ParamLimits

0x6492,	// (0x00006492) list_single_preview_pane

0x64d6,	// (0x000064d6) list_single_preview_pane_g1

0x64de,	// (0x000064de) list_single_preview_pane_t1

0x64a4,	// (0x000064a4) list_single_preview_pane_t2

0x0001,

0xafec,	// (0x0000afec) list_single_preview_pane_t

0x64ec,	// (0x000064ec) bg_popup_heading_pane_cp2_ParamLimits

0x64ec,	// (0x000064ec) bg_popup_heading_pane_cp2

0x6502,	// (0x00006502) heading_preview_pane_g1

0x650a,	// (0x0000650a) heading_preview_pane_t1_ParamLimits

0x650a,	// (0x0000650a) heading_preview_pane_t1

0x0686,	// (0x00000686) soft_indicator_pane_t1_ParamLimits

0x0d64,	// (0x00000d64) scroll_pane_ParamLimits

0x1af5,	// (0x00001af5) scroll_sc2_left_pane

0x1afe,	// (0x00001afe) scroll_sc2_right_pane

0x1b1d,	// (0x00001b1d) scroll_bg_pane_g1_ParamLimits

0x1b32,	// (0x00001b32) scroll_bg_pane_g2_ParamLimits

0x1b4a,	// (0x00001b4a) scroll_bg_pane_g3_ParamLimits

0xabbe,	// (0x0000abbe) scroll_bg_pane_g_ParamLimits

0x1b1d,	// (0x00001b1d) scroll_handle_pane_g1_ParamLimits

0x1b6c,	// (0x00001b6c) scroll_handle_pane_g2_ParamLimits

0x1b4a,	// (0x00001b4a) scroll_handle_pane_g3_ParamLimits

0xabc5,	// (0x0000abc5) scroll_handle_pane_g_ParamLimits

0x2af2,	// (0x00002af2) popup_choice_list_window_ParamLimits

0x2af2,	// (0x00002af2) popup_choice_list_window

0x34f1,	// (0x000034f1) choice_list_pane

0x35b9,	// (0x000035b9) cell_toolbar_pane_t1

0x35e1,	// (0x000035e1) toolbar_button_pane_ParamLimits

0x4a06,	// (0x00004a06) ai_gene_pane_1_t2_ParamLimits

0x4a06,	// (0x00004a06) ai_gene_pane_1_t2

0x0001,

0xade1,	// (0x0000ade1) ai_gene_pane_1_t_ParamLimits

0xade1,	// (0x0000ade1) ai_gene_pane_1_t

0x6527,	// (0x00006527) scroll_sc2_left_pane_g1

0x6527,	// (0x00006527) scroll_sc2_right_pane_g1

0x2ac2,	// (0x00002ac2) bg_popup_sub_pane_cp10

0x6531,	// (0x00006531) list_choice_list_pane

0x654a,	// (0x0000654a) list_single_choice_list_pane_ParamLimits

0x654a,	// (0x0000654a) list_single_choice_list_pane

0x655d,	// (0x0000655d) list_single_choice_list_pane_g1

0x163a,	// (0x0000163a) list_single_choice_list_pane_t1_ParamLimits

0x163a,	// (0x0000163a) list_single_choice_list_pane_t1

0x6565,	// (0x00006565) choice_list_pane_g1

0x656d,	// (0x0000656d) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x185e,	// (0x0000185e) title_pane_stacon_g2_ParamLimits

0x185e,	// (0x0000185e) title_pane_stacon_g2

0x0002,

0xaba4,	// (0x0000aba4) title_pane_stacon_g_ParamLimits

0xaba4,	// (0x0000aba4) title_pane_stacon_g

0x2557,	// (0x00002557) cursor_press_pane

0xc3a8,	// (0x0000c3a8) popup_fep_hwr_window_ParamLimits

0xc3a8,	// (0x0000c3a8) popup_fep_hwr_window

0x2c12,	// (0x00002c12) popup_fep_vkb_window_ParamLimits

0x2c12,	// (0x00002c12) popup_fep_vkb_window

0x657b,	// (0x0000657b) cursor_press_pane_g1

0x0002,

0xf12f,	// (0x0000f12f) fep_vkb_side_pane_g_ParamLimits

0x65bc,	// (0x000065bc) fep_hwr_candidate_pane_ParamLimits

0x65bc,	// (0x000065bc) fep_hwr_candidate_pane

0x65e6,	// (0x000065e6) fep_hwr_side_pane_ParamLimits

0x65e6,	// (0x000065e6) fep_hwr_side_pane

0x6606,	// (0x00006606) fep_hwr_top_pane_ParamLimits

0x6606,	// (0x00006606) fep_hwr_top_pane

0x661e,	// (0x0000661e) fep_hwr_write_pane_ParamLimits

0x661e,	// (0x0000661e) fep_hwr_write_pane

0xf12f,	// (0x0000f12f) fep_vkb_side_pane_g

0x6658,	// (0x00006658) fep_hwr_top_pane_g1

0x666a,	// (0x0000666a) fep_hwr_top_pane_g2

0x667c,	// (0x0000667c) fep_hwr_top_pane_g3

0x0002,

0xaff1,	// (0x0000aff1) fep_hwr_top_pane_g

0x6691,	// (0x00006691) fep_hwr_top_text_pane

0x1cc2,	// (0x00001cc2) fep_hwr_top_text_pane_g1

0x6769,	// (0x00006769) fep_hwr_top_text_pane_t1

0x67b9,	// (0x000067b9) fep_hwr_candidate_pane_g1

0x6a22,	// (0x00006a22) fep_vkb_keypad_pane_g3_ParamLimits

0x6a22,	// (0x00006a22) fep_vkb_keypad_pane_g3

0x6a4a,	// (0x00006a4a) fep_vkb_keypad_pane_g4_ParamLimits

0x6a4a,	// (0x00006a4a) fep_vkb_keypad_pane_g4

0x6ab9,	// (0x00006ab9) fep_vkb_bottom_pane_g2_ParamLimits

0x6ab9,	// (0x00006ab9) fep_vkb_bottom_pane_g2

0x0001,

0xb01c,	// (0x0000b01c) fep_vkb_bottom_pane_g_ParamLimits

0xb01c,	// (0x0000b01c) fep_vkb_bottom_pane_g

0x6527,	// (0x00006527) cell_vkb_side_pane_g2

0x0001,

0xb026,	// (0x0000b026) cell_vkb_side_pane_g

0x6b44,	// (0x00006b44) cell_vkb_side_pane_t1

0x6b52,	// (0x00006b52) cell_vkb_side_pane_t1_copy1

0x6527,	// (0x00006527) bg_fep_vkb_candidate_pane_g2

0x6c7e,	// (0x00006c7e) cell_vkb_candidate_pane_ParamLimits

0x67ed,	// (0x000067ed) aid_size_cell_vkb_ParamLimits

0x67ed,	// (0x000067ed) aid_size_cell_vkb

0x6c7e,	// (0x00006c7e) cell_vkb_candidate_pane

0x6cb2,	// (0x00006cb2) bg_popup_fep_shadow_pane_g1

0xd777,	// (0x0000d777) fep_vkb_bottom_pane_ParamLimits

0xd777,	// (0x0000d777) fep_vkb_bottom_pane

0x68af,	// (0x000068af) fep_vkb_candidate_pane_ParamLimits

0x68af,	// (0x000068af) fep_vkb_candidate_pane

0xd79c,	// (0x0000d79c) fep_vkb_keypad_pane_ParamLimits

0xd79c,	// (0x0000d79c) fep_vkb_keypad_pane

0xd7d1,	// (0x0000d7d1) fep_vkb_side_pane_ParamLimits

0xd7d1,	// (0x0000d7d1) fep_vkb_side_pane

0xd80d,	// (0x0000d80d) fep_vkb_top_pane_ParamLimits

0xd80d,	// (0x0000d80d) fep_vkb_top_pane

0x697b,	// (0x0000697b) fep_vkb_top_pane_g1_ParamLimits

0x697b,	// (0x0000697b) fep_vkb_top_pane_g1

0x698a,	// (0x0000698a) fep_vkb_top_pane_g2_ParamLimits

0x698a,	// (0x0000698a) fep_vkb_top_pane_g2

0x6999,	// (0x00006999) fep_vkb_top_pane_g3_ParamLimits

0x6999,	// (0x00006999) fep_vkb_top_pane_g3

0x0003,

0xb00c,	// (0x0000b00c) fep_vkb_top_pane_g_ParamLimits

0xb00c,	// (0x0000b00c) fep_vkb_top_pane_g

0x69b7,	// (0x000069b7) fep_vkb_top_text_pane_ParamLimits

0x69b7,	// (0x000069b7) fep_vkb_top_text_pane

0xd842,	// (0x0000d842) fep_vkb_side_pane_g1_ParamLimits

0xd842,	// (0x0000d842) fep_vkb_side_pane_g1

0x6a11,	// (0x00006a11) grid_vkb_side_pane_ParamLimits

0x6a11,	// (0x00006a11) grid_vkb_side_pane

0x6cba,	// (0x00006cba) bg_popup_fep_shadow_pane_g2

0x6cc3,	// (0x00006cc3) bg_popup_fep_shadow_pane_g3

0x6ccb,	// (0x00006ccb) bg_popup_fep_shadow_pane_g4

0x6cd4,	// (0x00006cd4) bg_popup_fep_shadow_pane_g5

0x6cde,	// (0x00006cde) bg_popup_fep_shadow_pane_g6

0x6ce6,	// (0x00006ce6) bg_popup_fep_shadow_pane_g7

0x1495,	// (0x00001495) bg_popup_fep_shadow_pane_g8

0x6a68,	// (0x00006a68) grid_vkb_keypad_number_pane_ParamLimits

0x6a68,	// (0x00006a68) grid_vkb_keypad_number_pane

0x6a78,	// (0x00006a78) grid_vkb_keypad_pane_ParamLimits

0x6a78,	// (0x00006a78) grid_vkb_keypad_pane

0x6a9e,	// (0x00006a9e) fep_vkb_bottom_pane_g1_ParamLimits

0x6a9e,	// (0x00006a9e) fep_vkb_bottom_pane_g1

0x6ac7,	// (0x00006ac7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6ac7,	// (0x00006ac7) grid_vkb_keypad_bottom_left_pane

0x6adc,	// (0x00006adc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6adc,	// (0x00006adc) grid_vkb_keypad_bottom_right_pane

0x6af1,	// (0x00006af1) fep_vkb_top_text_pane_g1

0xd889,	// (0x0000d889) fep_vkb_top_text_pane_t1

0xd89b,	// (0x0000d89b) cell_vkb_side_pane_ParamLimits

0xd89b,	// (0x0000d89b) cell_vkb_side_pane

0x6527,	// (0x00006527) cell_vkb_side_pane_g1

0x6b60,	// (0x00006b60) cell_vkb_keypad_pane_ParamLimits

0x6b60,	// (0x00006b60) cell_vkb_keypad_pane

0x6bd5,	// (0x00006bd5) cell_vkb_keypad_pane_g1

0x0008,

0xb039,	// (0x0000b039) bg_popup_fep_shadow_pane_g

0x6527,	// (0x00006527) cell_hwr_side_pane_g1

0x6527,	// (0x00006527) cell_hwr_side_pane_g2

0x6bdf,	// (0x00006bdf) cell_vkb_keypad_pane_t1

0xd8b1,	// (0x0000d8b1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd8b1,	// (0x0000d8b1) cell_vkb_keypad_bottom_left_pane

0xd8c6,	// (0x0000d8c6) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd8c6,	// (0x0000d8c6) cell_vkb_keypad_bottom_right_pane

0x6527,	// (0x00006527) cell_vkb_keypad_bottom_left_pane_g1

0x6527,	// (0x00006527) cell_vkb_keypad_bottom_right_pane_g1

0x6c43,	// (0x00006c43) cell_vkb_keypad_number_pane_ParamLimits

0x6c43,	// (0x00006c43) cell_vkb_keypad_number_pane

0x6c62,	// (0x00006c62) cell_vkb_keypad_number_pane_g1

0x6c6c,	// (0x00006c6c) cell_vkb_keypad_number_pane_g2

0x6c75,	// (0x00006c75) cell_vkb_keypad_number_pane_g3

0x0002,

0xb02b,	// (0x0000b02b) cell_vkb_keypad_number_pane_g

0x6bdf,	// (0x00006bdf) cell_vkb_keypad_number_pane_t1

0x6c99,	// (0x00006c99) fep_vkb_candidate_pane_g1

0x0001,

0xb026,	// (0x0000b026) cell_hwr_side_pane_g

0x6cf8,	// (0x00006cf8) cell_hwr_side_pane_t1

0x6d06,	// (0x00006d06) cell_hwr_side_pane_t1_copy1

0x69a9,	// (0x000069a9) cell_hwr_candidate_pane_g1

0x6d56,	// (0x00006d56) cell_hwr_candidate_pane_t1

0x6527,	// (0x00006527) cell_vkb_candidate_pane_g2

0x6daa,	// (0x00006daa) cell_vkb_candidate_pane_t1

0x6583,	// (0x00006583) bg_popup_fep_shadow_pane_ParamLimits

0x6583,	// (0x00006583) bg_popup_fep_shadow_pane

0x6638,	// (0x00006638) bg_fep_hwr_top_pane_g4

0x66a6,	// (0x000066a6) bg_hwr_side_pane_g1_ParamLimits

0x66a6,	// (0x000066a6) bg_hwr_side_pane_g1

0xd730,	// (0x0000d730) cell_hwr_side_pane_ParamLimits

0xd730,	// (0x0000d730) cell_hwr_side_pane

0x6714,	// (0x00006714) fep_hwr_write_pane_g1_ParamLimits

0x6714,	// (0x00006714) fep_hwr_write_pane_g1

0x6721,	// (0x00006721) fep_hwr_write_pane_g2_ParamLimits

0x6721,	// (0x00006721) fep_hwr_write_pane_g2

0x672e,	// (0x0000672e) fep_hwr_write_pane_g3_ParamLimits

0x672e,	// (0x0000672e) fep_hwr_write_pane_g3

0xd750,	// (0x0000d750) fep_hwr_write_pane_g4_ParamLimits

0xd750,	// (0x0000d750) fep_hwr_write_pane_g4

0x0005,

0xf122,	// (0x0000f122) fep_hwr_write_pane_g_ParamLimits

0xf122,	// (0x0000f122) fep_hwr_write_pane_g

0x6638,	// (0x00006638) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6638,	// (0x00006638) bg_fep_hwr_candidate_pane_g2

0x6777,	// (0x00006777) cell_hwr_candidate_pane_ParamLimits

0x6777,	// (0x00006777) cell_hwr_candidate_pane

0x67b9,	// (0x000067b9) fep_hwr_candidate_pane_g1_ParamLimits

0x681b,	// (0x0000681b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x681b,	// (0x0000681b) bg_popup_fep_shadow_pane_cp2

0x69a9,	// (0x000069a9) fep_vkb_top_pane_g4_ParamLimits

0x69a9,	// (0x000069a9) fep_vkb_top_pane_g4

0x69ef,	// (0x000069ef) fep_vkb_side_pane_g2_ParamLimits

0x69ef,	// (0x000069ef) fep_vkb_side_pane_g2

0xbbde,	// (0x0000bbde) list_setting_pane_t4_ParamLimits

0xbbde,	// (0x0000bbde) list_setting_pane_t4

0xbc58,	// (0x0000bc58) list_setting_number_pane_t5_ParamLimits

0xbc58,	// (0x0000bc58) list_setting_number_pane_t5

0xbf1f,	// (0x0000bf1f) list_double_heading_pane_cp2_ParamLimits

0xbf1f,	// (0x0000bf1f) list_double_heading_pane_cp2

0x0fb5,	// (0x00000fb5) list_double_heading_pane_g1_cp2_ParamLimits

0x0fb5,	// (0x00000fb5) list_double_heading_pane_g1_cp2

0x136e,	// (0x0000136e) list_double_heading_pane_g2_cp2_ParamLimits

0x136e,	// (0x0000136e) list_double_heading_pane_g2_cp2

0x6db8,	// (0x00006db8) list_double_heading_pane_t1_cp2_ParamLimits

0x6db8,	// (0x00006db8) list_double_heading_pane_t1_cp2

0x6dce,	// (0x00006dce) list_double_heading_pane_t2_cp2_ParamLimits

0x6dce,	// (0x00006dce) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0309,	// (0x00000309) popup_preview_fixed_window

0x0823,	// (0x00000823) bg_popup_preview_window_pane_cp02

0x6de0,	// (0x00006de0) list_preview_fixed_pane

0x6e26,	// (0x00006e26) list_empty_pane_fp_ParamLimits

0x6e26,	// (0x00006e26) list_empty_pane_fp

0x6e26,	// (0x00006e26) list_single_cale_day_pane_fp_ParamLimits

0x6e26,	// (0x00006e26) list_single_cale_day_pane_fp

0x6e26,	// (0x00006e26) list_single_graphic_heading_pane_fp_ParamLimits

0x6e26,	// (0x00006e26) list_single_graphic_heading_pane_fp

0x6e26,	// (0x00006e26) list_single_graphic_pane_fp_ParamLimits

0x6e26,	// (0x00006e26) list_single_graphic_pane_fp

0x6e26,	// (0x00006e26) list_single_heading_pane_fp_ParamLimits

0x6e26,	// (0x00006e26) list_single_heading_pane_fp

0x6e26,	// (0x00006e26) list_single_pane_fp_ParamLimits

0x6e26,	// (0x00006e26) list_single_pane_fp

0x6e3c,	// (0x00006e3c) list_single_pane_fp_g1_ParamLimits

0x6e3c,	// (0x00006e3c) list_single_pane_fp_g1

0x0fb5,	// (0x00000fb5) list_single_pane_fp_g2_ParamLimits

0x0fb5,	// (0x00000fb5) list_single_pane_fp_g2

0x136e,	// (0x0000136e) list_single_pane_fp_g3_ParamLimits

0x136e,	// (0x0000136e) list_single_pane_fp_g3

0x6e48,	// (0x00006e48) list_single_pane_fp_g4_ParamLimits

0x6e48,	// (0x00006e48) list_single_pane_fp_g4

0x0003,

0xb05a,	// (0x0000b05a) list_single_pane_fp_g_ParamLimits

0xb05a,	// (0x0000b05a) list_single_pane_fp_g

0x6e54,	// (0x00006e54) list_single_pane_fp_t1_ParamLimits

0x6e54,	// (0x00006e54) list_single_pane_fp_t1

0x6e6b,	// (0x00006e6b) list_single_graphic_pane_fp_g1_ParamLimits

0x6e6b,	// (0x00006e6b) list_single_graphic_pane_fp_g1

0x6e3c,	// (0x00006e3c) list_single_graphic_pane_fp_g2_ParamLimits

0x6e3c,	// (0x00006e3c) list_single_graphic_pane_fp_g2

0x0fb5,	// (0x00000fb5) list_single_graphic_pane_fp_g3_ParamLimits

0x0fb5,	// (0x00000fb5) list_single_graphic_pane_fp_g3

0x136e,	// (0x0000136e) list_single_graphic_pane_fp_g4_ParamLimits

0x136e,	// (0x0000136e) list_single_graphic_pane_fp_g4

0x6e48,	// (0x00006e48) list_single_graphic_pane_fp_g5_ParamLimits

0x6e48,	// (0x00006e48) list_single_graphic_pane_fp_g5

0x0004,

0xb063,	// (0x0000b063) list_single_graphic_pane_fp_g_ParamLimits

0xb063,	// (0x0000b063) list_single_graphic_pane_fp_g

0x6e77,	// (0x00006e77) list_single_graphic_pane_fp_t1_ParamLimits

0x6e77,	// (0x00006e77) list_single_graphic_pane_fp_t1

0x6e6b,	// (0x00006e6b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6e6b,	// (0x00006e6b) list_single_graphic_heading_pane_fp_g1

0x6e3c,	// (0x00006e3c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6e3c,	// (0x00006e3c) list_single_graphic_heading_pane_fp_g2

0x0fb5,	// (0x00000fb5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fb5,	// (0x00000fb5) list_single_graphic_heading_pane_fp_g3

0x136e,	// (0x0000136e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x136e,	// (0x0000136e) list_single_graphic_heading_pane_fp_g4

0x6e48,	// (0x00006e48) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6e48,	// (0x00006e48) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb063,	// (0x0000b063) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb063,	// (0x0000b063) list_single_graphic_heading_pane_fp_g

0x6e8d,	// (0x00006e8d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_graphic_heading_pane_fp_t1

0x6ea3,	// (0x00006ea3) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6ea3,	// (0x00006ea3) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb06e,	// (0x0000b06e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb06e,	// (0x0000b06e) list_single_graphic_heading_pane_fp_t

0x6eb5,	// (0x00006eb5) list_single_cale_day_pane_fp_g1_ParamLimits

0x6eb5,	// (0x00006eb5) list_single_cale_day_pane_fp_g1

0x6eed,	// (0x00006eed) list_single_cale_day_pane_fp_g2_ParamLimits

0x6eed,	// (0x00006eed) list_single_cale_day_pane_fp_g2

0x6ef9,	// (0x00006ef9) list_single_cale_day_pane_fp_g3_ParamLimits

0x6ef9,	// (0x00006ef9) list_single_cale_day_pane_fp_g3

0x6f21,	// (0x00006f21) list_single_cale_day_pane_fp_g4_ParamLimits

0x6f21,	// (0x00006f21) list_single_cale_day_pane_fp_g4

0x6f45,	// (0x00006f45) list_single_cale_day_pane_fp_g5_ParamLimits

0x6f45,	// (0x00006f45) list_single_cale_day_pane_fp_g5

0x0004,

0xb073,	// (0x0000b073) list_single_cale_day_pane_fp_g_ParamLimits

0xb073,	// (0x0000b073) list_single_cale_day_pane_fp_g

0x6f69,	// (0x00006f69) list_single_cale_day_pane_fp_t1_ParamLimits

0x6f69,	// (0x00006f69) list_single_cale_day_pane_fp_t1

0x6f8f,	// (0x00006f8f) list_single_cale_day_pane_fp_t2_ParamLimits

0x6f8f,	// (0x00006f8f) list_single_cale_day_pane_fp_t2

0x6fa8,	// (0x00006fa8) list_single_cale_day_pane_fp_t3_ParamLimits

0x6fa8,	// (0x00006fa8) list_single_cale_day_pane_fp_t3

0x0002,

0xb07e,	// (0x0000b07e) list_single_cale_day_pane_fp_t_ParamLimits

0xb07e,	// (0x0000b07e) list_single_cale_day_pane_fp_t

0x6e3c,	// (0x00006e3c) list_empty_pane_fp_g1_ParamLimits

0x6e3c,	// (0x00006e3c) list_empty_pane_fp_g1

0x6fc1,	// (0x00006fc1) list_empty_pane_fp_t1

0x6fcf,	// (0x00006fcf) list_empty_pane_fp_t2

0x0001,

0xb085,	// (0x0000b085) list_empty_pane_fp_t

0x6e3c,	// (0x00006e3c) list_single_heading_pane_fp_g1_ParamLimits

0x6e3c,	// (0x00006e3c) list_single_heading_pane_fp_g1

0x0fb5,	// (0x00000fb5) list_single_heading_pane_fp_g2_ParamLimits

0x0fb5,	// (0x00000fb5) list_single_heading_pane_fp_g2

0x136e,	// (0x0000136e) list_single_heading_pane_fp_g3_ParamLimits

0x136e,	// (0x0000136e) list_single_heading_pane_fp_g3

0x0002,

0xb08a,	// (0x0000b08a) list_single_heading_pane_fp_g_ParamLimits

0xb08a,	// (0x0000b08a) list_single_heading_pane_fp_g

0x6fdd,	// (0x00006fdd) list_single_heading_pane_fp_t1_ParamLimits

0x6fdd,	// (0x00006fdd) list_single_heading_pane_fp_t1

0x6fef,	// (0x00006fef) list_single_heading_pane_fp_t2_ParamLimits

0x6fef,	// (0x00006fef) list_single_heading_pane_fp_t2

0x0001,

0xb091,	// (0x0000b091) list_single_heading_pane_fp_t_ParamLimits

0xb091,	// (0x0000b091) list_single_heading_pane_fp_t

0x16a8,	// (0x000016a8) aid_size_cell_fast

0x0793,	// (0x00000793) soft_indicator_pane_cp1_t1

0x16e2,	// (0x000016e2) cell_app_pane_cp2_ParamLimits

0x16e2,	// (0x000016e2) cell_app_pane_cp2

0x65a5,	// (0x000065a5) fep_hwr_candidate_drop_down_list_pane

0x67d3,	// (0x000067d3) fep_hwr_candidate_pane_g3_ParamLimits

0x67d3,	// (0x000067d3) fep_hwr_candidate_pane_g3

0x67e0,	// (0x000067e0) fep_hwr_candidate_pane_g4_ParamLimits

0x67e0,	// (0x000067e0) fep_hwr_candidate_pane_g4

0x0002,

0xb005,	// (0x0000b005) fep_hwr_candidate_pane_g_ParamLimits

0xb005,	// (0x0000b005) fep_hwr_candidate_pane_g

0x689e,	// (0x0000689e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x689e,	// (0x0000689e) fep_vkb_candidate_drop_down_list_pane

0x6ca1,	// (0x00006ca1) fep_vkb_candidate_pane_g3

0x6ca9,	// (0x00006ca9) fep_vkb_candidate_pane_g4

0x0002,

0xb032,	// (0x0000b032) fep_vkb_candidate_pane_g

0x69a9,	// (0x000069a9) cell_hwr_candidate_pane_g1_ParamLimits

0x6d14,	// (0x00006d14) cell_hwr_candidate_pane_g3_ParamLimits

0x6d14,	// (0x00006d14) cell_hwr_candidate_pane_g3

0x6d35,	// (0x00006d35) cell_hwr_candidate_pane_g4_ParamLimits

0x6d35,	// (0x00006d35) cell_hwr_candidate_pane_g4

0x0002,

0xb04c,	// (0x0000b04c) cell_hwr_candidate_pane_g_ParamLimits

0xb04c,	// (0x0000b04c) cell_hwr_candidate_pane_g

0x6d74,	// (0x00006d74) cell_vkb_candidate_pane_g3_ParamLimits

0x6d74,	// (0x00006d74) cell_vkb_candidate_pane_g3

0x6d8f,	// (0x00006d8f) cell_vkb_candidate_pane_g4_ParamLimits

0x6d8f,	// (0x00006d8f) cell_vkb_candidate_pane_g4

0x7005,	// (0x00007005) cell_app_pane_cp2_g1_ParamLimits

0x7005,	// (0x00007005) cell_app_pane_cp2_g1

0x7023,	// (0x00007023) cell_app_pane_cp2_g2_ParamLimits

0x7023,	// (0x00007023) cell_app_pane_cp2_g2

0x0001,

0xb096,	// (0x0000b096) cell_app_pane_cp2_g_ParamLimits

0xb096,	// (0x0000b096) cell_app_pane_cp2_g

0x702f,	// (0x0000702f) cell_app_pane_cp2_t1_ParamLimits

0x702f,	// (0x0000702f) cell_app_pane_cp2_t1

0x1348,	// (0x00001348) grid_highlight_pane_cp1_ParamLimits

0x1348,	// (0x00001348) grid_highlight_pane_cp1

0x7041,	// (0x00007041) cell_hwr_candidate_pane_cp1_ParamLimits

0x7041,	// (0x00007041) cell_hwr_candidate_pane_cp1

0x69a9,	// (0x000069a9) fep_hwr_candidate_drop_down_list_pane_g1

0x7060,	// (0x00007060) fep_hwr_candidate_drop_down_list_pane_g2

0x706d,	// (0x0000706d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb09b,	// (0x0000b09b) fep_hwr_candidate_drop_down_list_pane_g

0x707a,	// (0x0000707a) fep_hwr_candidate_drop_down_list_scroll_pane

0x7083,	// (0x00007083) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7083,	// (0x00007083) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7090,	// (0x00007090) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7090,	// (0x00007090) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x709d,	// (0x0000709d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x709d,	// (0x0000709d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6d74,	// (0x00006d74) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d74,	// (0x00006d74) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d8f,	// (0x00006d8f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d8f,	// (0x00006d8f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x70aa,	// (0x000070aa) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x70aa,	// (0x000070aa) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x70c5,	// (0x000070c5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x70c5,	// (0x000070c5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x70e0,	// (0x000070e0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x70e0,	// (0x000070e0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb0a2,	// (0x0000b0a2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb0a2,	// (0x0000b0a2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x70fb,	// (0x000070fb) cell_vkb_candidate_pane_cp1_ParamLimits

0x70fb,	// (0x000070fb) cell_vkb_candidate_pane_cp1

0x69a9,	// (0x000069a9) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x69a9,	// (0x000069a9) fep_vkb_candidate_drop_down_list_pane_g1

0x7060,	// (0x00007060) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7060,	// (0x00007060) fep_vkb_candidate_drop_down_list_pane_g2

0x706d,	// (0x0000706d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x706d,	// (0x0000706d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb09b,	// (0x0000b09b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb09b,	// (0x0000b09b) fep_vkb_candidate_drop_down_list_pane_g

0x711b,	// (0x0000711b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x711b,	// (0x0000711b) fep_vkb_candidate_drop_down_list_scroll_pane

0x7128,	// (0x00007128) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7128,	// (0x00007128) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7135,	// (0x00007135) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7135,	// (0x00007135) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7141,	// (0x00007141) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7141,	// (0x00007141) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6d14,	// (0x00006d14) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d14,	// (0x00006d14) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6d35,	// (0x00006d35) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d35,	// (0x00006d35) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x714d,	// (0x0000714d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x714d,	// (0x0000714d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x716e,	// (0x0000716e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x716e,	// (0x0000716e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x718f,	// (0x0000718f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x718f,	// (0x0000718f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb0b3,	// (0x0000b0b3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb0b3,	// (0x0000b0b3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb5a9,	// (0x0000b5a9) title_pane_g1_ParamLimits

0xb5bc,	// (0x0000b5bc) title_pane_g2_ParamLimits

0xef7e,	// (0x0000ef7e) title_pane_g_ParamLimits

0x1cb2,	// (0x00001cb2) aid_call2_pane

0x1cba,	// (0x00001cba) aid_call_pane

0x1cc2,	// (0x00001cc2) popup_clock_analogue_window_g1

0x1cc2,	// (0x00001cc2) popup_clock_analogue_window_g2

0x1cca,	// (0x00001cca) popup_clock_analogue_window_g3

0x1cd3,	// (0x00001cd3) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xabd3,	// (0x0000abd3) popup_clock_analogue_window_g

0x1cdb,	// (0x00001cdb) popup_clock_analogue_window_t1

0x1d63,	// (0x00001d63) clock_digital_number_pane_ParamLimits

0x1d63,	// (0x00001d63) clock_digital_number_pane

0x1d6f,	// (0x00001d6f) clock_digital_number_pane_cp02_ParamLimits

0x1d6f,	// (0x00001d6f) clock_digital_number_pane_cp02

0x1d7b,	// (0x00001d7b) clock_digital_number_pane_cp03_ParamLimits

0x1d7b,	// (0x00001d7b) clock_digital_number_pane_cp03

0x1d87,	// (0x00001d87) clock_digital_number_pane_cp04_ParamLimits

0x1d87,	// (0x00001d87) clock_digital_number_pane_cp04

0x1d93,	// (0x00001d93) clock_digital_separator_pane_ParamLimits

0x1d93,	// (0x00001d93) clock_digital_separator_pane

0x1d9f,	// (0x00001d9f) popup_clock_digital_window_t1_ParamLimits

0x1d9f,	// (0x00001d9f) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xabde,	// (0x0000abde) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xabde,	// (0x0000abde) clock_digital_separator_pane_g

0xc999,	// (0x0000c999) aid_fill_nsta_ParamLimits

0xcacf,	// (0x0000cacf) indicator_nsta_pane_ParamLimits

0x3336,	// (0x00003336) popup_clock_analogue_window

0x3336,	// (0x00003336) popup_clock_digital_window

0x1669,	// (0x00001669) grid_indicator_nsta_pane_ParamLimits

0x5e78,	// (0x00005e78) clock_nsta_pane_t2

0x0001,

0xaf85,	// (0x0000af85) clock_nsta_pane_t

0x1a9a,	// (0x00001a9a) aid_size_max_handle

0x1aa4,	// (0x00001aa4) aid_size_min_handle

0x2557,	// (0x00002557) editor_scroll_pane

0x71aa,	// (0x000071aa) ex_editor_pane

0x1616,	// (0x00001616) scroll_pane_cp13

0x0d90,	// (0x00000d90) scroll_pane_cp14

0x1d10,	// (0x00001d10) scroll_pane_cp36

0xbf30,	// (0x0000bf30) list_single_graphic_hl_pane_cp2_ParamLimits

0xbf30,	// (0x0000bf30) list_single_graphic_hl_pane_cp2

0xd40c,	// (0x0000d40c) list_single_graphic_hl_pane_ParamLimits

0xd40c,	// (0x0000d40c) list_single_graphic_hl_pane

0x71b2,	// (0x000071b2) aid_size_min_hl_cp1

0x71bb,	// (0x000071bb) list_highlight_pane_cp34_ParamLimits

0x71bb,	// (0x000071bb) list_highlight_pane_cp34

0x71cc,	// (0x000071cc) list_single_graphic_hl_pane_g1_ParamLimits

0x71cc,	// (0x000071cc) list_single_graphic_hl_pane_g1

0xd8e1,	// (0x0000d8e1) list_single_graphic_hl_pane_g2_ParamLimits

0xd8e1,	// (0x0000d8e1) list_single_graphic_hl_pane_g2

0xd8e1,	// (0x0000d8e1) list_single_graphic_hl_pane_g3_ParamLimits

0xd8e1,	// (0x0000d8e1) list_single_graphic_hl_pane_g3

0x24c8,	// (0x000024c8) list_single_graphic_hl_pane_g4_ParamLimits

0x24c8,	// (0x000024c8) list_single_graphic_hl_pane_g4

0xd8ed,	// (0x0000d8ed) list_single_graphic_hl_pane_g5_ParamLimits

0xd8ed,	// (0x0000d8ed) list_single_graphic_hl_pane_g5

0x0004,

0xf13b,	// (0x0000f13b) list_single_graphic_hl_pane_g_ParamLimits

0xf13b,	// (0x0000f13b) list_single_graphic_hl_pane_g

0xd901,	// (0x0000d901) list_single_graphic_hl_pane_t1_ParamLimits

0xd901,	// (0x0000d901) list_single_graphic_hl_pane_t1

0x720f,	// (0x0000720f) aid_size_min_hl_cp2

0x7218,	// (0x00007218) list_highlight_pane_cp34_cp2_ParamLimits

0x7218,	// (0x00007218) list_highlight_pane_cp34_cp2

0x71cc,	// (0x000071cc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x71cc,	// (0x000071cc) list_single_graphic_hl_pane_g1_cp2

0x7225,	// (0x00007225) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7225,	// (0x00007225) list_single_graphic_hl_pane_g2_cp2

0xd917,	// (0x0000d917) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd917,	// (0x0000d917) list_single_graphic_hl_pane_g3_cp2

0x0da4,	// (0x00000da4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0da4,	// (0x00000da4) list_single_graphic_hl_pane_g4_cp2

0x723f,	// (0x0000723f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x723f,	// (0x0000723f) list_single_graphic_hl_pane_g5_cp2

0xc1b3,	// (0x0000c1b3) control_pane_g4_ParamLimits

0xc1b3,	// (0x0000c1b3) control_pane_g4

0x2ac2,	// (0x00002ac2) bg_popup_sub_pane_cp10_ParamLimits

0x6531,	// (0x00006531) list_choice_list_pane_ParamLimits

0x6540,	// (0x00006540) scroll_pane_cp23

0x0823,	// (0x00000823) bg_popup_preview_window_pane_cp02_ParamLimits

0x6de0,	// (0x00006de0) list_preview_fixed_pane_ParamLimits

0x6df6,	// (0x00006df6) list_preview_fixed_pane_cp_ParamLimits

0x6df6,	// (0x00006df6) list_preview_fixed_pane_cp

0x6e02,	// (0x00006e02) popup_preview_fixed_window_g1_ParamLimits

0x6e02,	// (0x00006e02) popup_preview_fixed_window_g1

0x6e0e,	// (0x00006e0e) popup_preview_fixed_window_g2_ParamLimits

0x6e0e,	// (0x00006e0e) popup_preview_fixed_window_g2

0x0002,

0xb053,	// (0x0000b053) popup_preview_fixed_window_g_ParamLimits

0xb053,	// (0x0000b053) popup_preview_fixed_window_g

0x1943,	// (0x00001943) aid_navi_side_left_pane_ParamLimits

0x1958,	// (0x00001958) aid_navi_side_right_pane_ParamLimits

0x1970,	// (0x00001970) navi_icon_pane_stacon_ParamLimits

0x1984,	// (0x00001984) navi_navi_pane_stacon_ParamLimits

0x1970,	// (0x00001970) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x7269,	// (0x00007269) listscroll_text_info_pane

0x7271,	// (0x00007271) list_text_info_pane_ParamLimits

0x7271,	// (0x00007271) list_text_info_pane

0x7280,	// (0x00007280) scroll_pane_cp24_ParamLimits

0x7280,	// (0x00007280) scroll_pane_cp24

0xd925,	// (0x0000d925) list_text_info_pane_t1_ParamLimits

0xd925,	// (0x0000d925) list_text_info_pane_t1

0xc31d,	// (0x0000c31d) popup_fast_swap2_window_ParamLimits

0xc31d,	// (0x0000c31d) popup_fast_swap2_window

0x72d3,	// (0x000072d3) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c48,	// (0x00003c48) heading_pane_cp2

0x0a63,	// (0x00000a63) listscroll_fast2_pane

0x72dd,	// (0x000072dd) grid_fast2_pane

0x72e7,	// (0x000072e7) listscroll_fast2_pane_g1

0x72ef,	// (0x000072ef) listscroll_fast2_pane_g2

0x0001,

0xb0cf,	// (0x0000b0cf) listscroll_fast2_pane_g

0x1616,	// (0x00001616) scroll_pane_cp26

0x72f9,	// (0x000072f9) cell_fast2_pane_ParamLimits

0x72f9,	// (0x000072f9) cell_fast2_pane

0x730e,	// (0x0000730e) cell_fast2_pane_g1

0x7317,	// (0x00007317) cell_fast2_pane_g2

0x7320,	// (0x00007320) cell_fast2_pane_g3

0x0002,

0xb0d4,	// (0x0000b0d4) cell_fast2_pane_g

0x0b4d,	// (0x00000b4d) grid_highlight_pane_cp9

0x0b62,	// (0x00000b62) main_eswt_pane_ParamLimits

0x0b62,	// (0x00000b62) main_eswt_pane

0x7295,	// (0x00007295) list_single_text_info_pane

0x7328,	// (0x00007328) eswt_ctrl_button_pane

0x7328,	// (0x00007328) eswt_ctrl_canvas_pane

0x7330,	// (0x00007330) eswt_ctrl_combo_pane

0x7328,	// (0x00007328) eswt_ctrl_default_pane

0x7328,	// (0x00007328) eswt_ctrl_label_pane

0x7338,	// (0x00007338) eswt_ctrl_wait_pane

0x7340,	// (0x00007340) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x7360,	// (0x00007360) popup_eswt_tasktip_window_ParamLimits

0x7360,	// (0x00007360) popup_eswt_tasktip_window

0x377f,	// (0x0000377f) bg_popup_window_pane_cp18

0x7371,	// (0x00007371) eswt_control_pane_g1_ParamLimits

0x7371,	// (0x00007371) eswt_control_pane_g1

0x737e,	// (0x0000737e) eswt_control_pane_g2_ParamLimits

0x737e,	// (0x0000737e) eswt_control_pane_g2

0x738b,	// (0x0000738b) eswt_control_pane_g3_ParamLimits

0x738b,	// (0x0000738b) eswt_control_pane_g3

0x7398,	// (0x00007398) eswt_control_pane_g4_ParamLimits

0x7398,	// (0x00007398) eswt_control_pane_g4

0x0003,

0xb0db,	// (0x0000b0db) eswt_control_pane_g_ParamLimits

0xb0db,	// (0x0000b0db) eswt_control_pane_g

0x1348,	// (0x00001348) bg_button_pane_ParamLimits

0x1348,	// (0x00001348) bg_button_pane

0x0b62,	// (0x00000b62) common_borders_pane_copy2_ParamLimits

0x0b62,	// (0x00000b62) common_borders_pane_copy2

0x73a5,	// (0x000073a5) control_button_pane_g1_ParamLimits

0x73a5,	// (0x000073a5) control_button_pane_g1

0x73b1,	// (0x000073b1) control_button_pane_g2_ParamLimits

0x73b1,	// (0x000073b1) control_button_pane_g2

0x73bd,	// (0x000073bd) control_button_pane_g3_ParamLimits

0x73bd,	// (0x000073bd) control_button_pane_g3

0x0002,

0xb0e4,	// (0x0000b0e4) control_button_pane_g_ParamLimits

0xb0e4,	// (0x0000b0e4) control_button_pane_g

0x73d1,	// (0x000073d1) control_button_pane_t1

0x73df,	// (0x000073df) control_button_pane_t2

0x0001,

0xb0eb,	// (0x0000b0eb) control_button_pane_t

0x35ed,	// (0x000035ed) bg_button_pane_g1

0x35f5,	// (0x000035f5) bg_button_pane_g2

0x35fd,	// (0x000035fd) bg_button_pane_g3

0x3605,	// (0x00003605) bg_button_pane_g4

0x360d,	// (0x0000360d) bg_button_pane_g5

0x3615,	// (0x00003615) bg_button_pane_g6

0x361d,	// (0x0000361d) bg_button_pane_g7

0x3625,	// (0x00003625) bg_button_pane_g8

0x362d,	// (0x0000362d) bg_button_pane_g9

0x0008,

0xad35,	// (0x0000ad35) bg_button_pane_g

0x64ec,	// (0x000064ec) common_borders_pane_ParamLimits

0x64ec,	// (0x000064ec) common_borders_pane

0x7371,	// (0x00007371) eswt_control_pane_g1_copy1_ParamLimits

0x7371,	// (0x00007371) eswt_control_pane_g1_copy1

0x737e,	// (0x0000737e) eswt_control_pane_g2_copy1_ParamLimits

0x737e,	// (0x0000737e) eswt_control_pane_g2_copy1

0x738b,	// (0x0000738b) eswt_control_pane_g3_copy1_ParamLimits

0x738b,	// (0x0000738b) eswt_control_pane_g3_copy1

0x7398,	// (0x00007398) eswt_control_pane_g4_copy1_ParamLimits

0x7398,	// (0x00007398) eswt_control_pane_g4_copy1

0x6527,	// (0x00006527) bg_eswt_ctrl_canvas_pane_g1

0x64ec,	// (0x000064ec) common_borders_pane_cp2_ParamLimits

0x64ec,	// (0x000064ec) common_borders_pane_cp2

0x64ec,	// (0x000064ec) common_borders_pane_cp3_ParamLimits

0x64ec,	// (0x000064ec) common_borders_pane_cp3

0x73ed,	// (0x000073ed) separator_horizontal_pane

0x73f5,	// (0x000073f5) separator_vertical_pane

0x7371,	// (0x00007371) eswt_control_pane_g1_copy2_ParamLimits

0x7371,	// (0x00007371) eswt_control_pane_g1_copy2

0x737e,	// (0x0000737e) eswt_control_pane_g2_copy2_ParamLimits

0x737e,	// (0x0000737e) eswt_control_pane_g2_copy2

0x738b,	// (0x0000738b) eswt_control_pane_g3_copy2_ParamLimits

0x738b,	// (0x0000738b) eswt_control_pane_g3_copy2

0x7398,	// (0x00007398) eswt_control_pane_g4_copy2_ParamLimits

0x7398,	// (0x00007398) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x73fe,	// (0x000073fe) separator_horizontal_pane_g1

0x7407,	// (0x00007407) separator_horizontal_pane_g2

0x7410,	// (0x00007410) separator_horizontal_pane_g3

0x0002,

0xb0f0,	// (0x0000b0f0) separator_horizontal_pane_g

0x7371,	// (0x00007371) eswt_control_pane_g1_copy3_ParamLimits

0x7371,	// (0x00007371) eswt_control_pane_g1_copy3

0x737e,	// (0x0000737e) eswt_control_pane_g2_copy3_ParamLimits

0x737e,	// (0x0000737e) eswt_control_pane_g2_copy3

0x738b,	// (0x0000738b) eswt_control_pane_g3_copy3_ParamLimits

0x738b,	// (0x0000738b) eswt_control_pane_g3_copy3

0x7398,	// (0x00007398) eswt_control_pane_g4_copy3_ParamLimits

0x7398,	// (0x00007398) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x7419,	// (0x00007419) separator_vertical_pane_g1

0x7422,	// (0x00007422) separator_vertical_pane_g2

0x742b,	// (0x0000742b) separator_vertical_pane_g3

0x0002,

0xb0f7,	// (0x0000b0f7) separator_vertical_pane_g

0x7371,	// (0x00007371) eswt_control_pane_g1_copy4_ParamLimits

0x7371,	// (0x00007371) eswt_control_pane_g1_copy4

0x737e,	// (0x0000737e) eswt_control_pane_g2_copy4_ParamLimits

0x737e,	// (0x0000737e) eswt_control_pane_g2_copy4

0x738b,	// (0x0000738b) eswt_control_pane_g3_copy4_ParamLimits

0x738b,	// (0x0000738b) eswt_control_pane_g3_copy4

0x7398,	// (0x00007398) eswt_control_pane_g4_copy4_ParamLimits

0x7398,	// (0x00007398) eswt_control_pane_g4_copy4

0x7434,	// (0x00007434) eswt_ctrl_combo_button_pane

0x743c,	// (0x0000743c) eswt_ctrl_input_pane

0x7444,	// (0x00007444) popup_choice_list_window_cp70

0x744c,	// (0x0000744c) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x64ec,	// (0x000064ec) bg_button_pane_cp70_ParamLimits

0x64ec,	// (0x000064ec) bg_button_pane_cp70

0x745a,	// (0x0000745a) eswt_ctrl_combo_button_pane_g1

0x7462,	// (0x00007462) wait_bar_pane_cp70

0x377f,	// (0x0000377f) bg_popup_window_pane_cp70_ParamLimits

0x377f,	// (0x0000377f) bg_popup_window_pane_cp70

0x746a,	// (0x0000746a) popup_eswt_tasktip_window_t1

0x7480,	// (0x00007480) wait_bar_pane_cp71_ParamLimits

0x7480,	// (0x00007480) wait_bar_pane_cp71

0x748c,	// (0x0000748c) grid_eswt_app_pane

0x1afe,	// (0x00001afe) scroll_pane_cp70

0xd942,	// (0x0000d942) cell_eswt_app_pane_ParamLimits

0xd942,	// (0x0000d942) cell_eswt_app_pane

0xd96c,	// (0x0000d96c) cell_eswt_app_pane_g1_ParamLimits

0xd96c,	// (0x0000d96c) cell_eswt_app_pane_g1

0xd99b,	// (0x0000d99b) cell_eswt_app_pane_g2_ParamLimits

0xd99b,	// (0x0000d99b) cell_eswt_app_pane_g2

0x0001,

0xf146,	// (0x0000f146) cell_eswt_app_pane_g_ParamLimits

0xf146,	// (0x0000f146) cell_eswt_app_pane_g

0xd9bf,	// (0x0000d9bf) cell_eswt_app_pane_t1_ParamLimits

0xd9bf,	// (0x0000d9bf) cell_eswt_app_pane_t1

0x754e,	// (0x0000754e) grid_highlight_pane_cp70_ParamLimits

0x754e,	// (0x0000754e) grid_highlight_pane_cp70

0x2438,	// (0x00002438) set_content_pane_g1

0x289c,	// (0x0000289c) status_small_volume_pane

0x755a,	// (0x0000755a) status_small_volume_pane_g1

0x7562,	// (0x00007562) volume_small2_pane

0x756b,	// (0x0000756b) volume_small2_pane_g1

0x7574,	// (0x00007574) volume_small2_pane_g2

0x757d,	// (0x0000757d) volume_small2_pane_g3

0x7586,	// (0x00007586) volume_small2_pane_g4

0x758f,	// (0x0000758f) volume_small2_pane_g5

0x7598,	// (0x00007598) volume_small2_pane_g6

0x75a1,	// (0x000075a1) volume_small2_pane_g7

0x75aa,	// (0x000075aa) volume_small2_pane_g8

0x75b3,	// (0x000075b3) volume_small2_pane_g9

0x75bc,	// (0x000075bc) volume_small2_pane_g10

0x0009,

0xb103,	// (0x0000b103) volume_small2_pane_g

0x6af1,	// (0x00006af1) fep_vkb_top_text_pane_g1_ParamLimits

0xd889,	// (0x0000d889) fep_vkb_top_text_pane_t1_ParamLimits

0x6e1a,	// (0x00006e1a) popup_preview_fixed_window_g3_ParamLimits

0x6e1a,	// (0x00006e1a) popup_preview_fixed_window_g3

0xc92c,	// (0x0000c92c) popup_toolbar_trans_pane

0xd251,	// (0x0000d251) aid_height_set_list_ParamLimits

0x4e07,	// (0x00004e07) aid_size_parent_ParamLimits

0x2ac2,	// (0x00002ac2) list_highlight_pane_cp2_ParamLimits

0x2438,	// (0x00002438) set_content_pane_g1_ParamLimits

0xd41e,	// (0x0000d41e) list_single_image_pane_ParamLimits

0xd41e,	// (0x0000d41e) list_single_image_pane

0xd9f1,	// (0x0000d9f1) aid_size_cell_image_ParamLimits

0xd9f1,	// (0x0000d9f1) aid_size_cell_image

0xd9fe,	// (0x0000d9fe) grid_single_image_pane_ParamLimits

0xd9fe,	// (0x0000d9fe) grid_single_image_pane

0x75de,	// (0x000075de) list_single_image_pane_g1_ParamLimits

0x75de,	// (0x000075de) list_single_image_pane_g1

0x75ea,	// (0x000075ea) list_single_image_pane_g2_ParamLimits

0x75ea,	// (0x000075ea) list_single_image_pane_g2

0x0001,

0xb118,	// (0x0000b118) list_single_image_pane_g_ParamLimits

0xb118,	// (0x0000b118) list_single_image_pane_g

0x75fe,	// (0x000075fe) list_single_image_pane_t1_ParamLimits

0x75fe,	// (0x000075fe) list_single_image_pane_t1

0xda0a,	// (0x0000da0a) cell_image_list_pane_ParamLimits

0xda0a,	// (0x0000da0a) cell_image_list_pane

0xda1e,	// (0x0000da1e) cell_image_list_pane_g1

0xda27,	// (0x0000da27) cell_image_list_pane_g2

0x0001,

0xf14b,	// (0x0000f14b) cell_image_list_pane_g

0x763a,	// (0x0000763a) aid_size_cell_tb_trans_pane

0x1348,	// (0x00001348) bg_tb_trans_pane

0x764c,	// (0x0000764c) grid_tb_trans_pane

0x35ed,	// (0x000035ed) bg_tb_trans_pane_g1

0x35f5,	// (0x000035f5) bg_tb_trans_pane_g2

0x35fd,	// (0x000035fd) bg_tb_trans_pane_g3

0x3605,	// (0x00003605) bg_tb_trans_pane_g4

0x360d,	// (0x0000360d) bg_tb_trans_pane_g5

0x3625,	// (0x00003625) bg_tb_trans_pane_g6

0x362d,	// (0x0000362d) bg_tb_trans_pane_g7

0x3615,	// (0x00003615) bg_tb_trans_pane_g8

0x361d,	// (0x0000361d) bg_tb_trans_pane_g9

0x0008,

0xb122,	// (0x0000b122) bg_tb_trans_pane_g

0x7660,	// (0x00007660) cell_toolbar_trans_pane_ParamLimits

0x7660,	// (0x00007660) cell_toolbar_trans_pane

0x6527,	// (0x00006527) cell_toolbar_trans_pane_g1

0xd61f,	// (0x0000d61f) list_form2_midp_pane_t1

0xd62d,	// (0x0000d62d) list_form2_midp_pane_t2

0x0001,

0xf116,	// (0x0000f116) list_form2_midp_pane_t

0x60a4,	// (0x000060a4) scroll_pane_cp51_ParamLimits

0x62aa,	// (0x000062aa) form2_midp_wait_pane_g1

0x62b3,	// (0x000062b3) form2_midp_wait_pane_g2

0x62bc,	// (0x000062bc) form2_midp_wait_pane_g3

0x0002,

0xafe0,	// (0x0000afe0) form2_midp_wait_pane_g

0x04ef,	// (0x000004ef) list_highlight_pane_cp21_ParamLimits

0x630a,	// (0x0000630a) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6319,	// (0x00006319) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x500a,	// (0x0000500a) list_single_2graphic_im_pane_ParamLimits

0x500a,	// (0x0000500a) list_single_2graphic_im_pane

0x7686,	// (0x00007686) list_single_2graphic_im_pane_g1_ParamLimits

0x7686,	// (0x00007686) list_single_2graphic_im_pane_g1

0x7697,	// (0x00007697) list_single_2graphic_im_pane_g2_ParamLimits

0x7697,	// (0x00007697) list_single_2graphic_im_pane_g2

0x76a3,	// (0x000076a3) list_single_2graphic_im_pane_g3_ParamLimits

0x76a3,	// (0x000076a3) list_single_2graphic_im_pane_g3

0x0003,

0xb135,	// (0x0000b135) list_single_2graphic_im_pane_g_ParamLimits

0xb135,	// (0x0000b135) list_single_2graphic_im_pane_g

0x76c3,	// (0x000076c3) list_single_2graphic_im_pane_t1_ParamLimits

0x76c3,	// (0x000076c3) list_single_2graphic_im_pane_t1

0x6e26,	// (0x00006e26) list_single_graphic_2heading_pane_fp_ParamLimits

0x6e26,	// (0x00006e26) list_single_graphic_2heading_pane_fp

0x6e6b,	// (0x00006e6b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6e6b,	// (0x00006e6b) list_single_graphic_2heading_pane_fp_g1

0x6e3c,	// (0x00006e3c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6e3c,	// (0x00006e3c) list_single_graphic_2heading_pane_fp_g2

0x0fb5,	// (0x00000fb5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fb5,	// (0x00000fb5) list_single_graphic_2heading_pane_fp_g3

0x136e,	// (0x0000136e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x136e,	// (0x0000136e) list_single_graphic_2heading_pane_fp_g4

0x6e48,	// (0x00006e48) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6e48,	// (0x00006e48) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb063,	// (0x0000b063) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb063,	// (0x0000b063) list_single_graphic_2heading_pane_fp_g

0x76f4,	// (0x000076f4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x76f4,	// (0x000076f4) list_single_graphic_2heading_pane_fp_t1

0x6ea3,	// (0x00006ea3) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6ea3,	// (0x00006ea3) list_single_graphic_2heading_pane_fp_t2

0x770a,	// (0x0000770a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x770a,	// (0x0000770a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb13e,	// (0x0000b13e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb13e,	// (0x0000b13e) list_single_graphic_2heading_pane_fp_t

0x6751,	// (0x00006751) fep_hwr_write_pane_g5_ParamLimits

0x6751,	// (0x00006751) fep_hwr_write_pane_g5

0x675d,	// (0x0000675d) fep_hwr_write_pane_g6_ParamLimits

0x675d,	// (0x0000675d) fep_hwr_write_pane_g6

0x7340,	// (0x00007340) eswt_shell_pane_ParamLimits

0x377f,	// (0x0000377f) bg_popup_window_pane_cp18_ParamLimits

0x4ccb,	// (0x00004ccb) heading_pane_cp70

0x746a,	// (0x0000746a) popup_eswt_tasktip_window_t1_ParamLimits

0xc9f4,	// (0x0000c9f4) aid_touch_tab_arrow_left

0xca0a,	// (0x0000ca0a) aid_touch_tab_arrow_right

0xb5d4,	// (0x0000b5d4) title_pane_g3_ParamLimits

0xb5d4,	// (0x0000b5d4) title_pane_g3

0x1233,	// (0x00001233) set_value_pane_g1

0xc92c,	// (0x0000c92c) popup_toolbar_trans_pane_ParamLimits

0x763a,	// (0x0000763a) aid_size_cell_tb_trans_pane_ParamLimits

0x1348,	// (0x00001348) bg_tb_trans_pane_ParamLimits

0x764c,	// (0x0000764c) grid_tb_trans_pane_ParamLimits

0x0823,	// (0x00000823) cont_note_pane_ParamLimits

0x0823,	// (0x00000823) cont_note_pane

0x0b62,	// (0x00000b62) cont_snote2_single_text_pane_ParamLimits

0x0b62,	// (0x00000b62) cont_snote2_single_text_pane

0x0b62,	// (0x00000b62) cont_snote2_single_graphic_pane_ParamLimits

0x0b62,	// (0x00000b62) cont_snote2_single_graphic_pane

0x3e5e,	// (0x00003e5e) cont_note_wait_pane_ParamLimits

0x3e5e,	// (0x00003e5e) cont_note_wait_pane

0x3e5e,	// (0x00003e5e) cont_note_image_pane_ParamLimits

0x3e5e,	// (0x00003e5e) cont_note_image_pane

0x7720,	// (0x00007720) popup_note2_window_g1_ParamLimits

0x7720,	// (0x00007720) popup_note2_window_g1

0x7751,	// (0x00007751) popup_note2_window_t1_ParamLimits

0x7751,	// (0x00007751) popup_note2_window_t1

0x7796,	// (0x00007796) popup_note2_window_t2_ParamLimits

0x7796,	// (0x00007796) popup_note2_window_t2

0x77db,	// (0x000077db) popup_note2_window_t3_ParamLimits

0x77db,	// (0x000077db) popup_note2_window_t3

0x7820,	// (0x00007820) popup_note2_window_t4_ParamLimits

0x7820,	// (0x00007820) popup_note2_window_t4

0x089b,	// (0x0000089b) popup_note2_window_t5_ParamLimits

0x089b,	// (0x0000089b) popup_note2_window_t5

0x0004,

0xb14a,	// (0x0000b14a) popup_note2_window_t_ParamLimits

0xb14a,	// (0x0000b14a) popup_note2_window_t

0x784f,	// (0x0000784f) popup_note2_image_window_g1_ParamLimits

0x784f,	// (0x0000784f) popup_note2_image_window_g1

0x785b,	// (0x0000785b) popup_note2_image_window_g2_ParamLimits

0x785b,	// (0x0000785b) popup_note2_image_window_g2

0x0001,

0xb155,	// (0x0000b155) popup_note2_image_window_g_ParamLimits

0xb155,	// (0x0000b155) popup_note2_image_window_g

0x786d,	// (0x0000786d) popup_note2_image_window_t1_ParamLimits

0x786d,	// (0x0000786d) popup_note2_image_window_t1

0x7885,	// (0x00007885) popup_note2_image_window_t2_ParamLimits

0x7885,	// (0x00007885) popup_note2_image_window_t2

0x789d,	// (0x0000789d) popup_note2_image_window_t3_ParamLimits

0x789d,	// (0x0000789d) popup_note2_image_window_t3

0x0002,

0xb15a,	// (0x0000b15a) popup_note2_image_window_t_ParamLimits

0xb15a,	// (0x0000b15a) popup_note2_image_window_t

0x3e6c,	// (0x00003e6c) popup_note2_wait_window_g1_ParamLimits

0x3e6c,	// (0x00003e6c) popup_note2_wait_window_g1

0x78b9,	// (0x000078b9) popup_note2_wait_window_g2_ParamLimits

0x78b9,	// (0x000078b9) popup_note2_wait_window_g2

0x3e84,	// (0x00003e84) popup_note2_wait_window_g3_ParamLimits

0x3e84,	// (0x00003e84) popup_note2_wait_window_g3

0x0002,

0xb161,	// (0x0000b161) popup_note2_wait_window_g_ParamLimits

0xb161,	// (0x0000b161) popup_note2_wait_window_g

0x78c5,	// (0x000078c5) popup_note2_wait_window_t1_ParamLimits

0x78c5,	// (0x000078c5) popup_note2_wait_window_t1

0x78e3,	// (0x000078e3) popup_note2_wait_window_t2_ParamLimits

0x78e3,	// (0x000078e3) popup_note2_wait_window_t2

0x7901,	// (0x00007901) popup_note2_wait_window_t3_ParamLimits

0x7901,	// (0x00007901) popup_note2_wait_window_t3

0x7913,	// (0x00007913) popup_note2_wait_window_t4_ParamLimits

0x7913,	// (0x00007913) popup_note2_wait_window_t4

0x0003,

0xb168,	// (0x0000b168) popup_note2_wait_window_t_ParamLimits

0xb168,	// (0x0000b168) popup_note2_wait_window_t

0x7925,	// (0x00007925) wait_bar2_pane_ParamLimits

0x7925,	// (0x00007925) wait_bar2_pane

0x793d,	// (0x0000793d) popup_snote2_single_text_window_g1_ParamLimits

0x793d,	// (0x0000793d) popup_snote2_single_text_window_g1

0x7965,	// (0x00007965) popup_snote2_single_text_window_t1_ParamLimits

0x7965,	// (0x00007965) popup_snote2_single_text_window_t1

0x79b1,	// (0x000079b1) popup_snote2_single_text_window_t2_ParamLimits

0x79b1,	// (0x000079b1) popup_snote2_single_text_window_t2

0x79fd,	// (0x000079fd) popup_snote2_single_text_window_t3_ParamLimits

0x79fd,	// (0x000079fd) popup_snote2_single_text_window_t3

0x7a3e,	// (0x00007a3e) popup_snote2_single_text_window_t4_ParamLimits

0x7a3e,	// (0x00007a3e) popup_snote2_single_text_window_t4

0x7a74,	// (0x00007a74) popup_snote2_single_text_window_t5_ParamLimits

0x7a74,	// (0x00007a74) popup_snote2_single_text_window_t5

0x0004,

0xb171,	// (0x0000b171) popup_snote2_single_text_window_t_ParamLimits

0xb171,	// (0x0000b171) popup_snote2_single_text_window_t

0x7a9f,	// (0x00007a9f) popup_snote2_single_graphic_window_g1_ParamLimits

0x7a9f,	// (0x00007a9f) popup_snote2_single_graphic_window_g1

0x7ac7,	// (0x00007ac7) popup_snote2_single_graphic_window_g2_ParamLimits

0x7ac7,	// (0x00007ac7) popup_snote2_single_graphic_window_g2

0x0001,

0xb17c,	// (0x0000b17c) popup_snote2_single_graphic_window_g_ParamLimits

0xb17c,	// (0x0000b17c) popup_snote2_single_graphic_window_g

0x7aef,	// (0x00007aef) popup_snote2_single_graphic_window_t1_ParamLimits

0x7aef,	// (0x00007aef) popup_snote2_single_graphic_window_t1

0x7b3b,	// (0x00007b3b) popup_snote2_single_graphic_window_t2_ParamLimits

0x7b3b,	// (0x00007b3b) popup_snote2_single_graphic_window_t2

0x79fd,	// (0x000079fd) popup_snote2_single_graphic_window_t3_ParamLimits

0x79fd,	// (0x000079fd) popup_snote2_single_graphic_window_t3

0x7a3e,	// (0x00007a3e) popup_snote2_single_graphic_window_t4_ParamLimits

0x7a3e,	// (0x00007a3e) popup_snote2_single_graphic_window_t4

0x7a74,	// (0x00007a74) popup_snote2_single_graphic_window_t5_ParamLimits

0x7a74,	// (0x00007a74) popup_snote2_single_graphic_window_t5

0x0004,

0xb181,	// (0x0000b181) popup_snote2_single_graphic_window_t_ParamLimits

0xb181,	// (0x0000b181) popup_snote2_single_graphic_window_t

0x5f32,	// (0x00005f32) clock_nsta_pane_cp2_t1

0x5f32,	// (0x00005f32) clock_nsta_pane_cp2_t2

0x0001,

0xafa1,	// (0x0000afa1) clock_nsta_pane_cp2_t

0x1362,	// (0x00001362) form_field_data_wide_pane_g1_ParamLimits

0x0fb5,	// (0x00000fb5) form_field_data_wide_pane_g2_ParamLimits

0x0fb5,	// (0x00000fb5) form_field_data_wide_pane_g2

0x136e,	// (0x0000136e) form_field_data_wide_pane_g3_ParamLimits

0x136e,	// (0x0000136e) form_field_data_wide_pane_g3

0x0002,

0xab56,	// (0x0000ab56) form_field_data_wide_pane_g_ParamLimits

0xab56,	// (0x0000ab56) form_field_data_wide_pane_g

0xd553,	// (0x0000d553) grid_touch_3_pane_ParamLimits

0xd553,	// (0x0000d553) grid_touch_3_pane

0xda30,	// (0x0000da30) cell_touch_3_pane_ParamLimits

0xda30,	// (0x0000da30) cell_touch_3_pane

0x6527,	// (0x00006527) cell_touch_3_pane_g1

0x6527,	// (0x00006527) cell_touch_3_pane_g2

0x0001,

0xb026,	// (0x0000b026) cell_touch_3_pane_g

0x08cd,	// (0x000008cd) cont_query_data_pane

0x08d5,	// (0x000008d5) cont_query_data_pane_cp1

0x7bb8,	// (0x00007bb8) button_value_adjust_pane_cp7

0x7bc0,	// (0x00007bc0) query_popup_pane_cp3

0x1e28,	// (0x00001e28) bg_popup_sub_pane_cp22_ParamLimits

0x1e3e,	// (0x00001e3e) navi_navi_volume_pane_cp2

0x1e56,	// (0x00001e56) popup_side_volume_key_window_g2

0x1e62,	// (0x00001e62) popup_side_volume_key_window_g3

0x0002,

0xabec,	// (0x0000abec) popup_side_volume_key_window_g

0x1e7c,	// (0x00001e7c) popup_side_volume_key_window_t2

0x0001,

0xabf3,	// (0x0000abf3) popup_side_volume_key_window_t

0x2304,	// (0x00002304) popup_side_volume_key_window_ParamLimits

0xb9bd,	// (0x0000b9bd) list_double_graphic_pane_g4_ParamLimits

0xb9bd,	// (0x0000b9bd) list_double_graphic_pane_g4

0xd3f8,	// (0x0000d3f8) list_single_2heading_msg_pane_ParamLimits

0xd3f8,	// (0x0000d3f8) list_single_2heading_msg_pane

0xda79,	// (0x0000da79) list_single_2heading_msg_pane_g1_ParamLimits

0xda79,	// (0x0000da79) list_single_2heading_msg_pane_g1

0xda85,	// (0x0000da85) list_single_2heading_msg_pane_g2_ParamLimits

0xda85,	// (0x0000da85) list_single_2heading_msg_pane_g2

0xda98,	// (0x0000da98) list_single_2heading_msg_pane_g3_ParamLimits

0xda98,	// (0x0000da98) list_single_2heading_msg_pane_g3

0x7bfb,	// (0x00007bfb) list_single_2heading_msg_pane_g4_ParamLimits

0x7bfb,	// (0x00007bfb) list_single_2heading_msg_pane_g4

0x0003,

0xf150,	// (0x0000f150) list_single_2heading_msg_pane_g_ParamLimits

0xf150,	// (0x0000f150) list_single_2heading_msg_pane_g

0x7c13,	// (0x00007c13) list_single_2heading_msg_pane_t1_ParamLimits

0x7c13,	// (0x00007c13) list_single_2heading_msg_pane_t1

0xdaa4,	// (0x0000daa4) list_single_2heading_msg_pane_t2_ParamLimits

0xdaa4,	// (0x0000daa4) list_single_2heading_msg_pane_t2

0xdb0f,	// (0x0000db0f) list_single_2heading_msg_pane_t3_ParamLimits

0xdb0f,	// (0x0000db0f) list_single_2heading_msg_pane_t3

0x7ca8,	// (0x00007ca8) list_single_2heading_msg_pane_t4_ParamLimits

0x7ca8,	// (0x00007ca8) list_single_2heading_msg_pane_t4

0x0003,

0xf159,	// (0x0000f159) list_single_2heading_msg_pane_t_ParamLimits

0xf159,	// (0x0000f159) list_single_2heading_msg_pane_t

0x0443,	// (0x00000443) title_pane_g4_ParamLimits

0x0443,	// (0x00000443) title_pane_g4

0x186b,	// (0x0000186b) title_pane_stacon_g3_ParamLimits

0x186b,	// (0x0000186b) title_pane_stacon_g3

0x76b7,	// (0x000076b7) list_single_2graphic_im_pane_g4_ParamLimits

0x76b7,	// (0x000076b7) list_single_2graphic_im_pane_g4

0x4a23,	// (0x00004a23) popup_side_volume_key_window_cp

0x5496,	// (0x00005496) main_idle_act2_pane_t1

0x3635,	// (0x00003635) toolbar_button_pane_g10

0xb8ee,	// (0x0000b8ee) popup_toolbar_window_cp1

0x5f23,	// (0x00005f23) clock_nsta_pane_cp_t1

0x5f23,	// (0x00005f23) clock_nsta_pane_cp_t2

0x0001,

0xaf9c,	// (0x0000af9c) clock_nsta_pane_cp_t

0x1e3e,	// (0x00001e3e) navi_navi_volume_pane_cp2_ParamLimits

0x1e4a,	// (0x00001e4a) popup_side_volume_key_window_g1_ParamLimits

0x1e56,	// (0x00001e56) popup_side_volume_key_window_g2_ParamLimits

0x1e62,	// (0x00001e62) popup_side_volume_key_window_g3_ParamLimits

0xabec,	// (0x0000abec) popup_side_volume_key_window_g_ParamLimits

0x6591,	// (0x00006591) fep_hwr_aid_pane

0x6638,	// (0x00006638) bg_fep_hwr_top_pane_g4_ParamLimits

0x6658,	// (0x00006658) fep_hwr_top_pane_g1_ParamLimits

0x666a,	// (0x0000666a) fep_hwr_top_pane_g2_ParamLimits

0x667c,	// (0x0000667c) fep_hwr_top_pane_g3_ParamLimits

0xaff1,	// (0x0000aff1) fep_hwr_top_pane_g_ParamLimits

0x6691,	// (0x00006691) fep_hwr_top_text_pane_ParamLimits

0x47e6,	// (0x000047e6) aid_touch_tab_arrow_arrow_2

0x47ef,	// (0x000047ef) aid_touch_tab_arrow_left_2

0x65a5,	// (0x000065a5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x65dc,	// (0x000065dc) fep_hwr_prediction_pane

0x6900,	// (0x00006900) fep_vkb_prediction_pane

0xd869,	// (0x0000d869) fep_vkb_side_pane_g3_ParamLimits

0xd869,	// (0x0000d869) fep_vkb_side_pane_g3

0x69a9,	// (0x000069a9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7060,	// (0x00007060) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x706d,	// (0x0000706d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb09b,	// (0x0000b09b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7ccd,	// (0x00007ccd) fep_hwr_prediction_pane_g1

0x7cd7,	// (0x00007cd7) fep_hwr_prediction_pane_g2

0x7cdf,	// (0x00007cdf) fep_hwr_prediction_pane_g3

0x7ce7,	// (0x00007ce7) fep_hwr_prediction_pane_g4

0x0003,

0xb19e,	// (0x0000b19e) fep_hwr_prediction_pane_g

0x7ccd,	// (0x00007ccd) fep_vkb_prediction_pane_g1

0x7cef,	// (0x00007cef) fep_vkb_prediction_pane_g2

0x7cf7,	// (0x00007cf7) fep_vkb_prediction_pane_g3

0x7cff,	// (0x00007cff) fep_vkb_prediction_pane_g4

0x0003,

0xb1a7,	// (0x0000b1a7) fep_vkb_prediction_pane_g

0x4d76,	// (0x00004d76) slider_set_pane_g3

0x4d8a,	// (0x00004d8a) slider_set_pane_g4

0x4da2,	// (0x00004da2) slider_set_pane_g5

0x4d76,	// (0x00004d76) slider_set_pane_g6

0x4db8,	// (0x00004db8) slider_set_pane_g7

0x4f68,	// (0x00004f68) slider_form_pane_g3

0x4f71,	// (0x00004f71) slider_form_pane_g4

0x4f79,	// (0x00004f79) slider_form_pane_g5

0x4f68,	// (0x00004f68) slider_form_pane_g6

0xd398,	// (0x0000d398) slider_form_pane_g7

0x57a9,	// (0x000057a9) slider_set_pane_vc_g3

0x57b2,	// (0x000057b2) slider_set_pane_vc_g4

0x57bb,	// (0x000057bb) slider_set_pane_vc_g5

0x57a9,	// (0x000057a9) slider_set_pane_vc_g6

0x57c4,	// (0x000057c4) slider_set_pane_vc_g7

0x5be9,	// (0x00005be9) slider_form_pane_vc_g1

0x5bf2,	// (0x00005bf2) slider_form_pane_vc_g2

0x5bfb,	// (0x00005bfb) slider_form_pane_vc_g3

0x5be9,	// (0x00005be9) slider_form_pane_vc_g4

0x5c04,	// (0x00005c04) slider_form_pane_vc_g5

0x0004,

0xaf6e,	// (0x0000af6e) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7d07,	// (0x00007d07) ai3_links_pane

0xdb7d,	// (0x0000db7d) popup_ai3_data_window_ParamLimits

0xdb7d,	// (0x0000db7d) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdb95,	// (0x0000db95) cell_ai3_links_pane_ParamLimits

0xdb95,	// (0x0000db95) cell_ai3_links_pane

0x7d40,	// (0x00007d40) bg_popup_sub_pane_cp11

0x7d4d,	// (0x00007d4d) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7d72,	// (0x00007d72) heading_ai3_data_pane

0x7d7a,	// (0x00007d7a) list_ai3_gene_pane

0x7d86,	// (0x00007d86) popup_ai3_data_window_g1

0x7d8e,	// (0x00007d8e) heading_ai3_data_pane_g1

0x7d96,	// (0x00007d96) heading_ai3_data_pane_t1

0x7da4,	// (0x00007da4) list_double_ai3_gene_pane_ParamLimits

0x7da4,	// (0x00007da4) list_double_ai3_gene_pane

0x7db1,	// (0x00007db1) list_single_ai3_gene_pane_ParamLimits

0x7db1,	// (0x00007db1) list_single_ai3_gene_pane

0x64ec,	// (0x000064ec) list_highlight_pane_cp7_ParamLimits

0x64ec,	// (0x000064ec) list_highlight_pane_cp7

0x7dbe,	// (0x00007dbe) list_single_a13_gene_pane_t1_ParamLimits

0x7dbe,	// (0x00007dbe) list_single_a13_gene_pane_t1

0x7dd5,	// (0x00007dd5) list_single_ai3_gene_pane_g1

0x7dde,	// (0x00007dde) list_single_ai3_gene_pane_g2

0x0001,

0xb1b0,	// (0x0000b1b0) list_single_ai3_gene_pane_g

0x7de6,	// (0x00007de6) list_double_ai3_gene_pane_g1_ParamLimits

0x7de6,	// (0x00007de6) list_double_ai3_gene_pane_g1

0x7df2,	// (0x00007df2) list_double_ai3_gene_pane_t1_ParamLimits

0x7df2,	// (0x00007df2) list_double_ai3_gene_pane_t1

0x7e0e,	// (0x00007e0e) list_double_ai3_gene_pane_t2_ParamLimits

0x7e0e,	// (0x00007e0e) list_double_ai3_gene_pane_t2

0x7e23,	// (0x00007e23) list_double_ai3_gene_pane_t3_ParamLimits

0x7e23,	// (0x00007e23) list_double_ai3_gene_pane_t3

0x0002,

0xb1b5,	// (0x0000b1b5) list_double_ai3_gene_pane_t_ParamLimits

0xb1b5,	// (0x0000b1b5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7bd1,	// (0x00007bd1) aid_size_min_col_2

0xda63,	// (0x0000da63) aid_size_min_msg_ParamLimits

0xda63,	// (0x0000da63) aid_size_min_msg

0xd87d,	// (0x0000d87d) fep_vkb_top_text_pane_g2_ParamLimits

0xd87d,	// (0x0000d87d) fep_vkb_top_text_pane_g2

0x0001,

0xf136,	// (0x0000f136) fep_vkb_top_text_pane_g_ParamLimits

0xf136,	// (0x0000f136) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7e40,	// (0x00007e40) grid_hc_apps_pane_ParamLimits

0x7e40,	// (0x00007e40) grid_hc_apps_pane

0x7e4f,	// (0x00007e4f) list_hc_apps_pane

0x7e57,	// (0x00007e57) scroll_pane_cp37_ParamLimits

0x7e57,	// (0x00007e57) scroll_pane_cp37

0xdbaf,	// (0x0000dbaf) cell_hc_apps_pane_ParamLimits

0xdbaf,	// (0x0000dbaf) cell_hc_apps_pane

0xdc6d,	// (0x0000dc6d) cell_hc_apps_pane_g1_ParamLimits

0xdc6d,	// (0x0000dc6d) cell_hc_apps_pane_g1

0x7f42,	// (0x00007f42) cell_hc_apps_pane_g2_ParamLimits

0x7f42,	// (0x00007f42) cell_hc_apps_pane_g2

0x7f5e,	// (0x00007f5e) cell_hc_apps_pane_g3_ParamLimits

0x7f5e,	// (0x00007f5e) cell_hc_apps_pane_g3

0x0002,

0xf162,	// (0x0000f162) cell_hc_apps_pane_g_ParamLimits

0xf162,	// (0x0000f162) cell_hc_apps_pane_g

0xdc9a,	// (0x0000dc9a) cell_hc_apps_pane_t1_ParamLimits

0xdc9a,	// (0x0000dc9a) cell_hc_apps_pane_t1

0x0823,	// (0x00000823) grid_highlight_pane_cp10_ParamLimits

0x0823,	// (0x00000823) grid_highlight_pane_cp10

0xdcd8,	// (0x0000dcd8) list_single_hc_apps_pane_ParamLimits

0xdcd8,	// (0x0000dcd8) list_single_hc_apps_pane

0xdd09,	// (0x0000dd09) list_single_hc_apps_pane_g1

0xdd22,	// (0x0000dd22) list_single_hc_apps_pane_g2

0x0001,

0xf169,	// (0x0000f169) list_single_hc_apps_pane_g

0xdd3b,	// (0x0000dd3b) list_single_hc_apps_pane_g2_copy1

0xdd57,	// (0x0000dd57) list_single_hc_apps_pane_t1

0x04ef,	// (0x000004ef) bg_set_opt_pane_cp_ParamLimits

0x0539,	// (0x00000539) setting_slider_pane_t1_ParamLimits

0x0552,	// (0x00000552) setting_slider_pane_t2_ParamLimits

0x056c,	// (0x0000056c) setting_slider_pane_t3_ParamLimits

0xaa3e,	// (0x0000aa3e) setting_slider_pane_t_ParamLimits

0x0584,	// (0x00000584) slider_set_pane_ParamLimits

0x2929,	// (0x00002929) control_pane_g5_ParamLimits

0x2929,	// (0x00002929) control_pane_g5

0x4d5d,	// (0x00004d5d) slider_set_pane_g1_ParamLimits

0x4d6a,	// (0x00004d6a) slider_set_pane_g2_ParamLimits

0x4d76,	// (0x00004d76) slider_set_pane_g3_ParamLimits

0x4d8a,	// (0x00004d8a) slider_set_pane_g4_ParamLimits

0x4da2,	// (0x00004da2) slider_set_pane_g5_ParamLimits

0x4d76,	// (0x00004d76) slider_set_pane_g6_ParamLimits

0x4db8,	// (0x00004db8) slider_set_pane_g7_ParamLimits

0xae33,	// (0x0000ae33) slider_set_pane_g_ParamLimits

0x23e3,	// (0x000023e3) navi_icon_text_pane_ParamLimits

0xc9bd,	// (0x0000c9bd) aid_fill_nsta_2_ParamLimits

0xc9f4,	// (0x0000c9f4) aid_touch_tab_arrow_left_ParamLimits

0xca0a,	// (0x0000ca0a) aid_touch_tab_arrow_right_ParamLimits

0xcaa5,	// (0x0000caa5) clock_nsta_pane_ParamLimits

0x47c8,	// (0x000047c8) navi_icon_pane_g1_ParamLimits

0xd160,	// (0x0000d160) navi_text_pane_t1_ParamLimits

0x6035,	// (0x00006035) navi_icon_text_pane_g1_ParamLimits

0x6041,	// (0x00006041) navi_icon_text_pane_t1_ParamLimits

0xdd09,	// (0x0000dd09) list_single_hc_apps_pane_g1_ParamLimits

0xdd22,	// (0x0000dd22) list_single_hc_apps_pane_g2_ParamLimits

0xf169,	// (0x0000f169) list_single_hc_apps_pane_g_ParamLimits

0xdd3b,	// (0x0000dd3b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xdd57,	// (0x0000dd57) list_single_hc_apps_pane_t1_ParamLimits

0xb53e,	// (0x0000b53e) popup_toolbar2_fixed_window_ParamLimits

0xb53e,	// (0x0000b53e) popup_toolbar2_fixed_window

0xc922,	// (0x0000c922) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x80a4,	// (0x000080a4) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x80a4,	// (0x000080a4) grid_toolbar2_fixed_pane

0xdd85,	// (0x0000dd85) cell_toolbar2_fixed_pane_ParamLimits

0xdd85,	// (0x0000dd85) cell_toolbar2_fixed_pane

0xdda0,	// (0x0000dda0) cell_toolbar2_fixed_pane_g1

0x3527,	// (0x00003527) toolbar2_fixed_button_pane

0x35ed,	// (0x000035ed) toolbar2_fixed_button_pane_g1

0x35f5,	// (0x000035f5) toolbar2_fixed_button_pane_g2

0x35fd,	// (0x000035fd) toolbar2_fixed_button_pane_g3

0x3605,	// (0x00003605) toolbar2_fixed_button_pane_g4

0x360d,	// (0x0000360d) toolbar2_fixed_button_pane_g5

0x3615,	// (0x00003615) toolbar2_fixed_button_pane_g6

0x361d,	// (0x0000361d) toolbar2_fixed_button_pane_g7

0x3625,	// (0x00003625) toolbar2_fixed_button_pane_g8

0x362d,	// (0x0000362d) toolbar2_fixed_button_pane_g9

0x0008,

0xad35,	// (0x0000ad35) toolbar2_fixed_button_pane_g

0x80c6,	// (0x000080c6) cell_toolbar2_float_pane_ParamLimits

0x80c6,	// (0x000080c6) cell_toolbar2_float_pane

0x80da,	// (0x000080da) cell_toolbar2_float_pane_g1

0x3527,	// (0x00003527) toolbar2_fixed_button_pane_cp

0xd765,	// (0x0000d765) fep_vkb_accented_list_pane_ParamLimits

0xd765,	// (0x0000d765) fep_vkb_accented_list_pane

0x6cf0,	// (0x00006cf0) bg_popup_fep_shadow_pane_g9

0x2557,	// (0x00002557) bg_popup_fep_shadow_pane_cp3

0x15fd,	// (0x000015fd) list_accented_list_pane

0x80e3,	// (0x000080e3) list_single_accented_list_pane_ParamLimits

0x80e3,	// (0x000080e3) list_single_accented_list_pane

0x2557,	// (0x00002557) list_highlight_pane_cp10

0x80f4,	// (0x000080f4) list_single_accented_list_pane_t1

0xc84c,	// (0x0000c84c) popup_slider_window_ParamLimits

0xc84c,	// (0x0000c84c) popup_slider_window

0x7bc8,	// (0x00007bc8) aid_indentation_list_msg

0xde99,	// (0x0000de99) bg_popup_window_pane_cp19

0x8218,	// (0x00008218) popup_slider_window_g1

0x8234,	// (0x00008234) popup_slider_window_g2

0x8250,	// (0x00008250) popup_slider_window_g3

0x0005,

0xf16e,	// (0x0000f16e) popup_slider_window_g

0x82ac,	// (0x000082ac) popup_slider_window_t1

0x8320,	// (0x00008320) small_volume_slider_vertical_pane

0x6527,	// (0x00006527) small_volume_slider_vertical_pane_g1

0x6527,	// (0x00006527) small_volume_slider_vertical_pane_g2

0x833c,	// (0x0000833c) small_volume_slider_vertical_pane_g3

0x0002,

0xb1da,	// (0x0000b1da) small_volume_slider_vertical_pane_g

0xb4ac,	// (0x0000b4ac) area_side_right_pane_ParamLimits

0xb4ac,	// (0x0000b4ac) area_side_right_pane

0xdf51,	// (0x0000df51) aid_size_side_button_ParamLimits

0xdf51,	// (0x0000df51) aid_size_side_button

0xdf6a,	// (0x0000df6a) grid_sctrl_middle_pane_ParamLimits

0xdf6a,	// (0x0000df6a) grid_sctrl_middle_pane

0x8378,	// (0x00008378) sctrl_sk_bottom_pane

0x8389,	// (0x00008389) sctrl_sk_top_pane

0x839b,	// (0x0000839b) aid_touch_sctrl_top

0x0823,	// (0x00000823) bg_sctrl_sk_pane_ParamLimits

0x0823,	// (0x00000823) bg_sctrl_sk_pane

0x83a8,	// (0x000083a8) sctrl_sk_top_pane_g1

0x83b5,	// (0x000083b5) sctrl_sk_top_pane_t1

0x839b,	// (0x0000839b) aid_touch_sctrl_bottom

0x0823,	// (0x00000823) bg_sctrl_sk_pane_cp_ParamLimits

0x0823,	// (0x00000823) bg_sctrl_sk_pane_cp

0x83d0,	// (0x000083d0) sctrl_sk_bottom_pane_g1

0x83b5,	// (0x000083b5) sctrl_sk_bottom_pane_t1

0xdf84,	// (0x0000df84) cell_sctrl_middle_pane_ParamLimits

0xdf84,	// (0x0000df84) cell_sctrl_middle_pane

0xdf95,	// (0x0000df95) aid_touch_sctrl_middle_ParamLimits

0xdf95,	// (0x0000df95) aid_touch_sctrl_middle

0xdfa2,	// (0x0000dfa2) bg_sctrl_middle_pane_ParamLimits

0xdfa2,	// (0x0000dfa2) bg_sctrl_middle_pane

0x8495,	// (0x00008495) cell_sctrl_middle_pane_g1_ParamLimits

0x8495,	// (0x00008495) cell_sctrl_middle_pane_g1

0xdfb0,	// (0x0000dfb0) cell_sctrl_middle_pane_g2_ParamLimits

0xdfb0,	// (0x0000dfb0) cell_sctrl_middle_pane_g2

0x0001,

0xf17b,	// (0x0000f17b) cell_sctrl_middle_pane_g_ParamLimits

0xf17b,	// (0x0000f17b) cell_sctrl_middle_pane_g

0x35ed,	// (0x000035ed) bg_sctrl_middle_pane_g1

0x35f5,	// (0x000035f5) bg_sctrl_middle_pane_g2

0x35fd,	// (0x000035fd) bg_sctrl_middle_pane_g3

0x3605,	// (0x00003605) bg_sctrl_middle_pane_g4

0x360d,	// (0x0000360d) bg_sctrl_middle_pane_g5

0x3615,	// (0x00003615) bg_sctrl_middle_pane_g6

0x361d,	// (0x0000361d) bg_sctrl_middle_pane_g7

0x3625,	// (0x00003625) bg_sctrl_middle_pane_g8

0x0007,

0xb1eb,	// (0x0000b1eb) bg_sctrl_middle_pane_g

0x362d,	// (0x0000362d) bg_sctrl_middle_pane_g8_copy1

0x35ed,	// (0x000035ed) bg_sctrl_sk_pane_g1

0x35f5,	// (0x000035f5) bg_sctrl_sk_pane_g2

0x35fd,	// (0x000035fd) bg_sctrl_sk_pane_g3

0x0008,

0xad35,	// (0x0000ad35) bg_sctrl_sk_pane_g

0x0d20,	// (0x00000d20) aid_size_touch_scroll_bar

0x3605,	// (0x00003605) bg_sctrl_sk_pane_g4

0x360d,	// (0x0000360d) bg_sctrl_sk_pane_g5

0x3615,	// (0x00003615) bg_sctrl_sk_pane_g6

0x361d,	// (0x0000361d) bg_sctrl_sk_pane_g7

0x3625,	// (0x00003625) bg_sctrl_sk_pane_g8

0x362d,	// (0x0000362d) bg_sctrl_sk_pane_g9

0x2b6c,	// (0x00002b6c) popup_fep_china_hwr2_fs_candidate_window

0xc37a,	// (0x0000c37a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc37a,	// (0x0000c37a) popup_fep_china_hwr2_fs_control_window

0x69a9,	// (0x000069a9) sctrl_sk_top_pane_g2

0x0001,

0xb1e1,	// (0x0000b1e1) sctrl_sk_top_pane_g

0xdfbc,	// (0x0000dfbc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdfbc,	// (0x0000dfbc) aid_fep_china_hwr2_fs_cell

0xdfd0,	// (0x0000dfd0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdfd0,	// (0x0000dfd0) bg_popup_fep_shadow_pane_cp4

0xdfe7,	// (0x0000dfe7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdfe7,	// (0x0000dfe7) bg_popup_fep_shadow_pane_cp5

0xdff9,	// (0x0000dff9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdff9,	// (0x0000dff9) popup_fep_china_hwr2_fs_control_bar_grid

0xe00d,	// (0x0000e00d) popup_fep_china_hwr2_fs_control_funtion_grid

0x8469,	// (0x00008469) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x8473,	// (0x00008473) popup_fep_china_hwr2_fs_candidate_grid

0xe015,	// (0x0000e015) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe015,	// (0x0000e015) cell_fep_china_hwr2_fs_funtion_grid

0x6527,	// (0x00006527) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8495,	// (0x00008495) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8495,	// (0x00008495) cell_fep_china_hwr2_fs_funtion_grid_g1

0x84a3,	// (0x000084a3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x84a3,	// (0x000084a3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb1fc,	// (0x0000b1fc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb1fc,	// (0x0000b1fc) cell_fep_china_hwr2_fs_funtion_grid_g

0xe02d,	// (0x0000e02d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe02d,	// (0x0000e02d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe042,	// (0x0000e042) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe042,	// (0x0000e042) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf180,	// (0x0000f180) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf180,	// (0x0000f180) cell_fep_china_hwr2_fs_funtion_grid_t

0x84ea,	// (0x000084ea) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x84f2,	// (0x000084f2) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x84fa,	// (0x000084fa) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb206,	// (0x0000b206) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8502,	// (0x00008502) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8502,	// (0x00008502) cell_fep_china_hwr2_fs_candidate_grid

0x851b,	// (0x0000851b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8523,	// (0x00008523) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6527,	// (0x00006527) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6527,	// (0x00006527) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb026,	// (0x0000b026) cell_fep_china_hwr2_fs_candidate_grid_g

0x852b,	// (0x0000852b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x315b,	// (0x0000315b) clock_nsta_pane_cp_24_ParamLimits

0x315b,	// (0x0000315b) clock_nsta_pane_cp_24

0x31d9,	// (0x000031d9) indicator_nsta_pane_cp_24_ParamLimits

0x31d9,	// (0x000031d9) indicator_nsta_pane_cp_24

0x4633,	// (0x00004633) heading_pane_g1

0x0001,

0xad9a,	// (0x0000ad9a) heading_pane_g

0x5227,	// (0x00005227) grid_sct_catagory_button_pane

0x5257,	// (0x00005257) scroll_pane_cp5_ParamLimits

0x60b0,	// (0x000060b0) button_value_adjust_pane_cp5_ParamLimits

0x60b0,	// (0x000060b0) button_value_adjust_pane_cp5

0x61aa,	// (0x000061aa) form2_midp_time_pane_ParamLimits

0x8539,	// (0x00008539) cell_sct_catagory_button_pane_ParamLimits

0x8539,	// (0x00008539) cell_sct_catagory_button_pane

0x64ec,	// (0x000064ec) bg_button_pane_cp01_ParamLimits

0x64ec,	// (0x000064ec) bg_button_pane_cp01

0x6527,	// (0x00006527) cell_sct_catagory_button_pane_g1

0xc8c5,	// (0x0000c8c5) popup_tb_extension_window

0xe05e,	// (0x0000e05e) aid_size_cell_ext_ParamLimits

0xe05e,	// (0x0000e05e) aid_size_cell_ext

0x0b62,	// (0x00000b62) bg_tb_trans_pane_cp1_ParamLimits

0x0b62,	// (0x00000b62) bg_tb_trans_pane_cp1

0xe084,	// (0x0000e084) grid_tb_ext_pane_ParamLimits

0xe084,	// (0x0000e084) grid_tb_ext_pane

0xe0c6,	// (0x0000e0c6) cell_tb_ext_pane_ParamLimits

0xe0c6,	// (0x0000e0c6) cell_tb_ext_pane

0xe0ee,	// (0x0000e0ee) cell_tb_ext_pane_g1_ParamLimits

0xe0ee,	// (0x0000e0ee) cell_tb_ext_pane_g1

0x85d1,	// (0x000085d1) cell_tb_ext_pane_t1

0x0823,	// (0x00000823) list_highlight_pane_cp11_ParamLimits

0x0823,	// (0x00000823) list_highlight_pane_cp11

0x0354,	// (0x00000354) popup_uni_indicator_window_ParamLimits

0x0354,	// (0x00000354) popup_uni_indicator_window

0x1348,	// (0x00001348) bg_popup_sub_pane_cp14

0x85ec,	// (0x000085ec) list_uniindi_pane

0x85f8,	// (0x000085f8) uniindi_top_pane

0x0823,	// (0x00000823) bg_uniindi_top_pane

0x8617,	// (0x00008617) uniindi_top_pane_g1

0x862d,	// (0x0000862d) uniindi_top_pane_g2

0x0003,

0xb20d,	// (0x0000b20d) uniindi_top_pane_g

0x8657,	// (0x00008657) uniindi_top_pane_t1

0x8681,	// (0x00008681) list_single_uniindi_pane_ParamLimits

0x8681,	// (0x00008681) list_single_uniindi_pane

0x6527,	// (0x00006527) bg_uniindi_top_pane_g1

0x8694,	// (0x00008694) list_single_uniindi_pane_g1

0x86a7,	// (0x000086a7) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x86cc,	// (0x000086cc) bg_sctrl_sk_pane_cp1

0x86d5,	// (0x000086d5) bg_sctrl_sk_pane_cp2

0x86de,	// (0x000086de) control_bg_pane_g1

0x86e7,	// (0x000086e7) control_bg_pane_g2

0x0001,

0xb216,	// (0x0000b216) control_bg_pane_g

0x5ebe,	// (0x00005ebe) cell_indicator_nsta_pane_g1_ParamLimits

0xd586,	// (0x0000d586) cell_indicator_nsta_pane_g2_ParamLimits

0xf101,	// (0x0000f101) cell_indicator_nsta_pane_g_ParamLimits

0x622e,	// (0x0000622e) form2_midp_time_pane_t1_ParamLimits

0x6583,	// (0x00006583) main_idle_act4_pane_ParamLimits

0x6583,	// (0x00006583) main_idle_act4_pane

0xc8c5,	// (0x0000c8c5) popup_tb_extension_window_ParamLimits

0xe0ac,	// (0x0000e0ac) tb_ext_find_pane_ParamLimits

0xe0ac,	// (0x0000e0ac) tb_ext_find_pane

0x86f0,	// (0x000086f0) ai_gene_pane_1_cp1

0x2694,	// (0x00002694) ai_gene_pane_2_cp1

0x86f8,	// (0x000086f8) list_single_idle_plugin_calendar_pane

0x8701,	// (0x00008701) list_single_idle_plugin_notification_pane

0x870a,	// (0x0000870a) list_single_idle_plugin_player_pane

0xe10b,	// (0x0000e10b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe10b,	// (0x0000e10b) list_single_idle_plugin_shortcut_pane

0xe133,	// (0x0000e133) main_idle_act4_pane_t1

0xe149,	// (0x0000e149) main_idle_act4_pane_t2

0x0001,

0xf185,	// (0x0000f185) main_idle_act4_pane_t

0xe161,	// (0x0000e161) middle_sk_idle_act4_pane_ParamLimits

0xe161,	// (0x0000e161) middle_sk_idle_act4_pane

0xe17d,	// (0x0000e17d) popup_clock_digital_analogue_window_cp2

0xe1a4,	// (0x0000e1a4) shortcut_wheel_idle_act4_pane_ParamLimits

0xe1a4,	// (0x0000e1a4) shortcut_wheel_idle_act4_pane

0x6527,	// (0x00006527) shortcut_wheel_idle_act4_pane_g1

0x6527,	// (0x00006527) shortcut_wheel_idle_act4_pane_g2

0x6527,	// (0x00006527) shortcut_wheel_idle_act4_pane_g3

0x6527,	// (0x00006527) shortcut_wheel_idle_act4_pane_g4

0x6527,	// (0x00006527) shortcut_wheel_idle_act4_pane_g5

0x879d,	// (0x0000879d) shortcut_wheel_idle_act4_pane_g6

0x87a5,	// (0x000087a5) shortcut_wheel_idle_act4_pane_g7

0x87ad,	// (0x000087ad) shortcut_wheel_idle_act4_pane_g8

0x87b5,	// (0x000087b5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb220,	// (0x0000b220) shortcut_wheel_idle_act4_pane_g

0x6638,	// (0x00006638) middle_sk_idle_act4_pane_g1_ParamLimits

0x6638,	// (0x00006638) middle_sk_idle_act4_pane_g1

0xe221,	// (0x0000e221) middle_sk_idle_act4_pane_g2_ParamLimits

0xe221,	// (0x0000e221) middle_sk_idle_act4_pane_g2

0x0001,

0xf19a,	// (0x0000f19a) middle_sk_idle_act4_pane_g_ParamLimits

0xf19a,	// (0x0000f19a) middle_sk_idle_act4_pane_g

0xe239,	// (0x0000e239) middle_sk_idle_act4_pane_t1_ParamLimits

0xe239,	// (0x0000e239) middle_sk_idle_act4_pane_t1

0xe268,	// (0x0000e268) grid_ai_shortcut_pane_ParamLimits

0xe268,	// (0x0000e268) grid_ai_shortcut_pane

0xe285,	// (0x0000e285) list_highlight_pane_cp16_ParamLimits

0xe285,	// (0x0000e285) list_highlight_pane_cp16

0xe292,	// (0x0000e292) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe292,	// (0x0000e292) list_single_idle_plugin_shortcut_pane_g1

0xe29e,	// (0x0000e29e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe29e,	// (0x0000e29e) list_single_idle_plugin_shortcut_pane_g2

0xe2ba,	// (0x0000e2ba) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe2ba,	// (0x0000e2ba) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf19f,	// (0x0000f19f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf19f,	// (0x0000f19f) list_single_idle_plugin_shortcut_pane_g

0xe2cf,	// (0x0000e2cf) cell_ai_shortcut_pane_ParamLimits

0xe2cf,	// (0x0000e2cf) cell_ai_shortcut_pane

0xe2e5,	// (0x0000e2e5) cell_ai_shortcut_pane_g1_ParamLimits

0xe2e5,	// (0x0000e2e5) cell_ai_shortcut_pane_g1

0x86f0,	// (0x000086f0) ai_gene_pane_1_cp2

0x88e2,	// (0x000088e2) ai_gene_pane_2_cp2

0x88ea,	// (0x000088ea) list_highlight_pane_cp15

0x88f3,	// (0x000088f3) list_single_idle_plugin_calendar_pane_g1

0x88ea,	// (0x000088ea) list_highlight_pane_cp17

0x88fb,	// (0x000088fb) list_single_idle_plugin_calendar_pane_g1_copy1

0x8903,	// (0x00008903) list_single_idle_plugin_player_pane_g1

0x5536,	// (0x00005536) list_single_idle_plugin_player_pane_g2

0x0001,

0xb24f,	// (0x0000b24f) list_single_idle_plugin_player_pane_g

0x890b,	// (0x0000890b) list_single_idle_plugin_player_pane_t1

0x8919,	// (0x00008919) list_single_idle_plugin_player_pane_t2

0x8927,	// (0x00008927) list_single_idle_plugin_player_pane_t3

0x8935,	// (0x00008935) list_single_idle_plugin_player_pane_t4

0x0003,

0xb254,	// (0x0000b254) list_single_idle_plugin_player_pane_t

0x8943,	// (0x00008943) wait_bar_pane_cp15

0x894b,	// (0x0000894b) grid_ai_notification_pane

0x5536,	// (0x00005536) list_single_idle_plugin_notification_pane_g1

0xe307,	// (0x0000e307) cell_ai_notification_pane_ParamLimits

0xe307,	// (0x0000e307) cell_ai_notification_pane

0x8961,	// (0x00008961) cell_ai_notification_pane_g1

0x8969,	// (0x00008969) cell_ai_notification_pane_t1

0xe314,	// (0x0000e314) tb_ext_find_button_pane

0xe31c,	// (0x0000e31c) tb_ext_find_pane_g1

0xe324,	// (0x0000e324) tb_ext_find_pane_t1

0x1cc2,	// (0x00001cc2) tb_ext_find_button_pane_g1

0x8995,	// (0x00008995) tb_ext_find_button_pane_g2

0x0001,

0xb25d,	// (0x0000b25d) tb_ext_find_button_pane_g

0xe133,	// (0x0000e133) main_idle_act4_pane_t1_ParamLimits

0xe149,	// (0x0000e149) main_idle_act4_pane_t2_ParamLimits

0xf185,	// (0x0000f185) main_idle_act4_pane_t_ParamLimits

0xe17d,	// (0x0000e17d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe194,	// (0x0000e194) sat_plugin_idle_act4_pane_ParamLimits

0xe194,	// (0x0000e194) sat_plugin_idle_act4_pane

0xe332,	// (0x0000e332) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe332,	// (0x0000e332) sat_plugin_idle_act4_pane_t1

0xe34a,	// (0x0000e34a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe34a,	// (0x0000e34a) sat_plugin_idle_act4_pane_t2

0xe362,	// (0x0000e362) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe362,	// (0x0000e362) sat_plugin_idle_act4_pane_t3

0xe37a,	// (0x0000e37a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe37a,	// (0x0000e37a) sat_plugin_idle_act4_pane_t4

0x0003,

0xf1a6,	// (0x0000f1a6) sat_plugin_idle_act4_pane_t_ParamLimits

0xf1a6,	// (0x0000f1a6) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0823,	// (0x00000823) bg_popup_sub_pane_cp25_ParamLimits

0x0823,	// (0x00000823) bg_popup_sub_pane_cp25

0x89ea,	// (0x000089ea) popup_battery_window_g1_ParamLimits

0x89ea,	// (0x000089ea) popup_battery_window_g1

0x89f6,	// (0x000089f6) popup_battery_window_t1_ParamLimits

0x89f6,	// (0x000089f6) popup_battery_window_t1

0x8a08,	// (0x00008a08) popup_battery_window_t2_ParamLimits

0x8a08,	// (0x00008a08) popup_battery_window_t2

0x0001,

0xb26b,	// (0x0000b26b) popup_battery_window_t_ParamLimits

0xb26b,	// (0x0000b26b) popup_battery_window_t

0xc0bc,	// (0x0000c0bc) midp_canvas_pane_ParamLimits

0xc119,	// (0x0000c119) midp_keypad_pane_ParamLimits

0xc119,	// (0x0000c119) midp_keypad_pane

0x2ac2,	// (0x00002ac2) main_midp_pane_ParamLimits

0x5f41,	// (0x00005f41) signal_pane_g2_cp_ParamLimits

0xe392,	// (0x0000e392) aid_size_cell_midp_keypad_ParamLimits

0xe392,	// (0x0000e392) aid_size_cell_midp_keypad

0xe3b0,	// (0x0000e3b0) midp_keyp_game_grid_pane_ParamLimits

0xe3b0,	// (0x0000e3b0) midp_keyp_game_grid_pane

0xe3d7,	// (0x0000e3d7) midp_keyp_rocker_pane_ParamLimits

0xe3d7,	// (0x0000e3d7) midp_keyp_rocker_pane

0xe420,	// (0x0000e420) midp_keyp_sk_left_pane_ParamLimits

0xe420,	// (0x0000e420) midp_keyp_sk_left_pane

0xe472,	// (0x0000e472) midp_keyp_sk_right_pane_ParamLimits

0xe472,	// (0x0000e472) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe4c4,	// (0x0000e4c4) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe4c4,	// (0x0000e4c4) midp_keyp_sk_right_pane_g1

0x6527,	// (0x00006527) midp_keyp_rocker_pane_g1

0xe4cd,	// (0x0000e4cd) keyp_game_cell_pane_ParamLimits

0xe4cd,	// (0x0000e4cd) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe4f1,	// (0x0000e4f1) keyp_game_cell_pane_g1

0xb4ee,	// (0x0000b4ee) popup_fep_vkb2_window_ParamLimits

0xb4ee,	// (0x0000b4ee) popup_fep_vkb2_window

0xe4fa,	// (0x0000e4fa) aid_size_cell_vkb2_ParamLimits

0xe4fa,	// (0x0000e4fa) aid_size_cell_vkb2

0xe530,	// (0x0000e530) popup_fep_vkb2_window_g1_ParamLimits

0xe530,	// (0x0000e530) popup_fep_vkb2_window_g1

0xe580,	// (0x0000e580) vkb2_area_bottom_pane_ParamLimits

0xe580,	// (0x0000e580) vkb2_area_bottom_pane

0xe5d4,	// (0x0000e5d4) vkb2_area_keypad_pane_ParamLimits

0xe5d4,	// (0x0000e5d4) vkb2_area_keypad_pane

0xe61c,	// (0x0000e61c) vkb2_area_top_pane_ParamLimits

0xe61c,	// (0x0000e61c) vkb2_area_top_pane

0xe6a2,	// (0x0000e6a2) vkb2_top_entry_pane_ParamLimits

0xe6a2,	// (0x0000e6a2) vkb2_top_entry_pane

0xe6cf,	// (0x0000e6cf) vkb2_top_grid_left_pane_ParamLimits

0xe6cf,	// (0x0000e6cf) vkb2_top_grid_left_pane

0xe6ef,	// (0x0000e6ef) vkb2_top_grid_right_pane_ParamLimits

0xe6ef,	// (0x0000e6ef) vkb2_top_grid_right_pane

0x8d81,	// (0x00008d81) vkb2_cell_keypad_pane_ParamLimits

0x8d81,	// (0x00008d81) vkb2_cell_keypad_pane

0xe735,	// (0x0000e735) vkb2_area_bottom_grid_pane_ParamLimits

0xe735,	// (0x0000e735) vkb2_area_bottom_grid_pane

0xe75f,	// (0x0000e75f) vkb2_area_bottom_pane_g1_ParamLimits

0xe75f,	// (0x0000e75f) vkb2_area_bottom_pane_g1

0xe785,	// (0x0000e785) vkb2_area_bottom_pane_g2_ParamLimits

0xe785,	// (0x0000e785) vkb2_area_bottom_pane_g2

0xe7b6,	// (0x0000e7b6) vkb2_area_bottom_pane_g3_ParamLimits

0xe7b6,	// (0x0000e7b6) vkb2_area_bottom_pane_g3

0x0002,

0xf1af,	// (0x0000f1af) vkb2_area_bottom_pane_g_ParamLimits

0xf1af,	// (0x0000f1af) vkb2_area_bottom_pane_g

0x8f2b,	// (0x00008f2b) vkb2_top_cell_left_pane_ParamLimits

0x8f2b,	// (0x00008f2b) vkb2_top_cell_left_pane

0xe820,	// (0x0000e820) vkb2_top_entry_pane_g1_ParamLimits

0xe820,	// (0x0000e820) vkb2_top_entry_pane_g1

0xe82e,	// (0x0000e82e) vkb2_top_entry_pane_t1_ParamLimits

0xe82e,	// (0x0000e82e) vkb2_top_entry_pane_t1

0x8f93,	// (0x00008f93) vkb2_top_entry_pane_t2_ParamLimits

0x8f93,	// (0x00008f93) vkb2_top_entry_pane_t2

0x8fc5,	// (0x00008fc5) vkb2_top_entry_pane_t3_ParamLimits

0x8fc5,	// (0x00008fc5) vkb2_top_entry_pane_t3

0x0002,

0xf1b6,	// (0x0000f1b6) vkb2_top_entry_pane_t_ParamLimits

0xf1b6,	// (0x0000f1b6) vkb2_top_entry_pane_t

0xe867,	// (0x0000e867) vkb2_top_grid_right_pane_g1_ParamLimits

0xe867,	// (0x0000e867) vkb2_top_grid_right_pane_g1

0x902c,	// (0x0000902c) vkb2_top_grid_right_pane_g2_ParamLimits

0x902c,	// (0x0000902c) vkb2_top_grid_right_pane_g2

0x9044,	// (0x00009044) vkb2_top_grid_right_pane_g3_ParamLimits

0x9044,	// (0x00009044) vkb2_top_grid_right_pane_g3

0xe87d,	// (0x0000e87d) vkb2_top_grid_right_pane_g4_ParamLimits

0xe87d,	// (0x0000e87d) vkb2_top_grid_right_pane_g4

0x0003,

0xf1bd,	// (0x0000f1bd) vkb2_top_grid_right_pane_g_ParamLimits

0xf1bd,	// (0x0000f1bd) vkb2_top_grid_right_pane_g

0x9072,	// (0x00009072) vkb2_top_cell_left_pane_g1

0x9089,	// (0x00009089) vkb2_cell_keypad_pane_g1_ParamLimits

0x9089,	// (0x00009089) vkb2_cell_keypad_pane_g1

0x9097,	// (0x00009097) vkb2_cell_keypad_pane_t1_ParamLimits

0x9097,	// (0x00009097) vkb2_cell_keypad_pane_t1

0x90ae,	// (0x000090ae) vkb2_cell_bottom_grid_pane_ParamLimits

0x90ae,	// (0x000090ae) vkb2_cell_bottom_grid_pane

0x90e7,	// (0x000090e7) vkb2_cell_bottom_grid_pane_g1

0xe1c5,	// (0x0000e1c5) aid_call2_pane_cp02

0xe1cd,	// (0x0000e1cd) aid_call_pane_cp02

0xe1d5,	// (0x0000e1d5) clock_digital_number_pane_cp10

0xe1dd,	// (0x0000e1dd) clock_digital_number_pane_cp11

0xe1e5,	// (0x0000e1e5) clock_digital_number_pane_cp12

0xe1ed,	// (0x0000e1ed) clock_digital_number_pane_cp13

0xe1f5,	// (0x0000e1f5) clock_digital_separator_pane_cp10

0x1cc2,	// (0x00001cc2) popup_clock_digital_analogue_window_cp2_g1

0x1cc2,	// (0x00001cc2) popup_clock_digital_analogue_window_cp2_g2

0xe1fd,	// (0x0000e1fd) popup_clock_digital_analogue_window_cp2_g3

0x1cc2,	// (0x00001cc2) popup_clock_digital_analogue_window_cp2_g4

0xe1fd,	// (0x0000e1fd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf18a,	// (0x0000f18a) popup_clock_digital_analogue_window_cp2_g

0xe205,	// (0x0000e205) popup_clock_digital_analogue_window_cp2_t1

0xe213,	// (0x0000e213) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf195,	// (0x0000f195) popup_clock_digital_analogue_window_cp2_t

0x6527,	// (0x00006527) clock_digital_number_pane_cp10_g1

0x6527,	// (0x00006527) clock_digital_number_pane_cp10_g2

0x0001,

0xb026,	// (0x0000b026) clock_digital_number_pane_cp10_g

0x6527,	// (0x00006527) clock_digital_separator_pane_cp10_g1

0x6527,	// (0x00006527) clock_digital_separator_pane_cp10_g2

0x0001,

0xb026,	// (0x0000b026) clock_digital_separator_pane_cp10_g

0x8639,	// (0x00008639) uniindi_top_pane_g3

0x864a,	// (0x0000864a) uniindi_top_pane_g4

0x8e0c,	// (0x00008e0c) vkb2_row_keypad_pane_ParamLimits

0x8e0c,	// (0x00008e0c) vkb2_row_keypad_pane

0x9107,	// (0x00009107) vkb2_cell_t_keypad_pane_ParamLimits

0x9107,	// (0x00009107) vkb2_cell_t_keypad_pane

0x9117,	// (0x00009117) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9117,	// (0x00009117) vkb2_cell_t_keypad_pane_cp08

0x912a,	// (0x0000912a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x912a,	// (0x0000912a) vkb2_cell_t_keypad_pane_cp09

0x913e,	// (0x0000913e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x913e,	// (0x0000913e) vkb2_cell_t_keypad_pane_cp01

0x914f,	// (0x0000914f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x914f,	// (0x0000914f) vkb2_cell_t_keypad_pane_cp02

0x9160,	// (0x00009160) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9160,	// (0x00009160) vkb2_cell_t_keypad_pane_cp03

0x9171,	// (0x00009171) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9171,	// (0x00009171) vkb2_cell_t_keypad_pane_cp04

0x9182,	// (0x00009182) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9182,	// (0x00009182) vkb2_cell_t_keypad_pane_cp05

0x9193,	// (0x00009193) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9193,	// (0x00009193) vkb2_cell_t_keypad_pane_cp06

0x91a4,	// (0x000091a4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x91a4,	// (0x000091a4) vkb2_cell_t_keypad_pane_cp07

0x91b5,	// (0x000091b5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x91b5,	// (0x000091b5) vkb2_cell_t_keypad_pane_cp10

0x69a9,	// (0x000069a9) vkb2_cell_t_keypad_pane_g1

0x91ca,	// (0x000091ca) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe893,	// (0x0000e893) aid_size_cell_graphic2_ParamLimits

0xe893,	// (0x0000e893) aid_size_cell_graphic2

0xe8d1,	// (0x0000e8d1) bg_popup_window_pane_cp21_ParamLimits

0xe8d1,	// (0x0000e8d1) bg_popup_window_pane_cp21

0xe8df,	// (0x0000e8df) graphic2_pages_pane_ParamLimits

0xe8df,	// (0x0000e8df) graphic2_pages_pane

0xe935,	// (0x0000e935) grid_graphic2_control_pane_ParamLimits

0xe935,	// (0x0000e935) grid_graphic2_control_pane

0xe97d,	// (0x0000e97d) grid_graphic2_pane_ParamLimits

0xe97d,	// (0x0000e97d) grid_graphic2_pane

0xea04,	// (0x0000ea04) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7d7a,	// (0x00007d7a) list_ai3_gene_pane_ParamLimits

0xde99,	// (0x0000de99) bg_popup_window_pane_cp19_ParamLimits

0x81ba,	// (0x000081ba) bg_touch_area_indi_pane_ParamLimits

0x81ba,	// (0x000081ba) bg_touch_area_indi_pane

0x81d0,	// (0x000081d0) bg_touch_area_indi_pane_cp01_ParamLimits

0x81d0,	// (0x000081d0) bg_touch_area_indi_pane_cp01

0x81e6,	// (0x000081e6) bg_touch_area_indi_pane_cp02_ParamLimits

0x81e6,	// (0x000081e6) bg_touch_area_indi_pane_cp02

0x81fe,	// (0x000081fe) bg_touch_area_indi_pane_cp03_ParamLimits

0x81fe,	// (0x000081fe) bg_touch_area_indi_pane_cp03

0x8218,	// (0x00008218) popup_slider_window_g1_ParamLimits

0x8234,	// (0x00008234) popup_slider_window_g2_ParamLimits

0x8250,	// (0x00008250) popup_slider_window_g3_ParamLimits

0xf16e,	// (0x0000f16e) popup_slider_window_g_ParamLimits

0x82ac,	// (0x000082ac) popup_slider_window_t1_ParamLimits

0x8320,	// (0x00008320) small_volume_slider_vertical_pane_ParamLimits

0xea04,	// (0x0000ea04) cell_graphic2_pane_ParamLimits

0xea61,	// (0x0000ea61) bg_button_pane_cp10_ParamLimits

0xea61,	// (0x0000ea61) bg_button_pane_cp10

0xea74,	// (0x0000ea74) bg_button_pane_cp11_ParamLimits

0xea74,	// (0x0000ea74) bg_button_pane_cp11

0xea87,	// (0x0000ea87) graphic2_pages_pane_g1_ParamLimits

0xea87,	// (0x0000ea87) graphic2_pages_pane_g1

0xeaa2,	// (0x0000eaa2) graphic2_pages_pane_g2_ParamLimits

0xeaa2,	// (0x0000eaa2) graphic2_pages_pane_g2

0x0001,

0xf1cb,	// (0x0000f1cb) graphic2_pages_pane_g_ParamLimits

0xf1cb,	// (0x0000f1cb) graphic2_pages_pane_g

0xeaba,	// (0x0000eaba) graphic2_pages_pane_t1_ParamLimits

0xeaba,	// (0x0000eaba) graphic2_pages_pane_t1

0xead2,	// (0x0000ead2) cell_graphic2_control_pane_ParamLimits

0xead2,	// (0x0000ead2) cell_graphic2_control_pane

0xeb04,	// (0x0000eb04) cell_graphic2_pane_g1_ParamLimits

0xeb04,	// (0x0000eb04) cell_graphic2_pane_g1

0x67d3,	// (0x000067d3) cell_graphic2_pane_g2_ParamLimits

0x67d3,	// (0x000067d3) cell_graphic2_pane_g2

0xeb11,	// (0x0000eb11) cell_graphic2_pane_g3_ParamLimits

0xeb11,	// (0x0000eb11) cell_graphic2_pane_g3

0x67e0,	// (0x000067e0) cell_graphic2_pane_g4_ParamLimits

0x67e0,	// (0x000067e0) cell_graphic2_pane_g4

0xeb1e,	// (0x0000eb1e) cell_graphic2_pane_g5_ParamLimits

0xeb1e,	// (0x0000eb1e) cell_graphic2_pane_g5

0x0004,

0xf1d0,	// (0x0000f1d0) cell_graphic2_pane_g_ParamLimits

0xf1d0,	// (0x0000f1d0) cell_graphic2_pane_g

0xeb3e,	// (0x0000eb3e) cell_graphic2_pane_t1_ParamLimits

0xeb3e,	// (0x0000eb3e) cell_graphic2_pane_t1

0x4627,	// (0x00004627) grid_highlight_pane_cp11_ParamLimits

0x4627,	// (0x00004627) grid_highlight_pane_cp11

0x0823,	// (0x00000823) bg_button_pane_cp05

0xeb72,	// (0x0000eb72) cell_graphic2_control_pane_g1

0x6527,	// (0x00006527) bg_touch_area_indi_pane_g1

0x9498,	// (0x00009498) aid_cmod_rocker_key_size

0x94a2,	// (0x000094a2) aid_cmode_itu_key_size

0x94ac,	// (0x000094ac) main_cmode_video_pane

0x94b6,	// (0x000094b6) main_comp_mode_itu_pane

0x94c2,	// (0x000094c2) main_comp_mode_rocker_pane

0x94ce,	// (0x000094ce) cell_cmode_rocker_pane_ParamLimits

0x94ce,	// (0x000094ce) cell_cmode_rocker_pane

0x94e0,	// (0x000094e0) cell_cmode_itu_pane_ParamLimits

0x94e0,	// (0x000094e0) cell_cmode_itu_pane

0x1348,	// (0x00001348) bg_button_pane_cp06_ParamLimits

0x1348,	// (0x00001348) bg_button_pane_cp06

0x69a9,	// (0x000069a9) cell_cmode_rocker_pane_g1_ParamLimits

0x69a9,	// (0x000069a9) cell_cmode_rocker_pane_g1

0x8495,	// (0x00008495) cell_cmode_rocker_pane_g2_ParamLimits

0x8495,	// (0x00008495) cell_cmode_rocker_pane_g2

0x0001,

0xb2a1,	// (0x0000b2a1) cell_cmode_rocker_pane_g_ParamLimits

0xb2a1,	// (0x0000b2a1) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x94f5,	// (0x000094f5) cell_cmode_itu_pane_g1

0x94fe,	// (0x000094fe) cell_cmode_itu_pane_t1

0x950c,	// (0x0000950c) cell_cmode_itu_pane_t2

0x0001,

0xb2a6,	// (0x0000b2a6) cell_cmode_itu_pane_t

0x86bc,	// (0x000086bc) aid_touch_ctrl_left

0x86c4,	// (0x000086c4) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xeb96,	// (0x0000eb96) aid_cmod_rocker_key_size_cp

0xeba0,	// (0x0000eba0) aid_cmode_itu_key_size_cp

0x952e,	// (0x0000952e) compa_mode_pane_g1

0x9536,	// (0x00009536) compa_mode_pane_g2

0x953e,	// (0x0000953e) compa_mode_pane_g3

0x0002,

0xb2ab,	// (0x0000b2ab) compa_mode_pane_g

0xebaa,	// (0x0000ebaa) main_comp_mode_itu_pane_cp

0xebb2,	// (0x0000ebb2) main_comp_mode_rocker_pane_cp

0xebba,	// (0x0000ebba) cell_cmode_itu_pane_cp_ParamLimits

0xebba,	// (0x0000ebba) cell_cmode_itu_pane_cp

0xebcf,	// (0x0000ebcf) cell_cmode_rocker_pane_cp_ParamLimits

0xebcf,	// (0x0000ebcf) cell_cmode_rocker_pane_cp

0x1348,	// (0x00001348) bg_button_pane_cp06_cp_ParamLimits

0x1348,	// (0x00001348) bg_button_pane_cp06_cp

0x69a9,	// (0x000069a9) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x69a9,	// (0x000069a9) cell_cmode_rocker_pane_g1_cp

0x6527,	// (0x00006527) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xebe1,	// (0x0000ebe1) cell_cmode_itu_pane_g1_cp

0xebea,	// (0x0000ebea) cell_cmode_itu_pane_t1_cp

0xebea,	// (0x0000ebea) cell_cmode_itu_pane_t2_cp

0xd38e,	// (0x0000d38e) settings_code_pane_cp2

0x04ef,	// (0x000004ef) bg_popup_window_pane_cp3_ParamLimits

0x09f1,	// (0x000009f1) heading_pane_cp3_ParamLimits

0x09fd,	// (0x000009fd) listscroll_popup_graphic_pane_ParamLimits

0x6591,	// (0x00006591) fep_hwr_aid_pane_ParamLimits

0x839b,	// (0x0000839b) aid_touch_sctrl_top_ParamLimits

0x83a8,	// (0x000083a8) sctrl_sk_top_pane_g1_ParamLimits

0x69a9,	// (0x000069a9) sctrl_sk_top_pane_g2_ParamLimits

0xb1e1,	// (0x0000b1e1) sctrl_sk_top_pane_g_ParamLimits

0x83b5,	// (0x000083b5) sctrl_sk_top_pane_t1_ParamLimits

0x839b,	// (0x0000839b) aid_touch_sctrl_bottom_ParamLimits

0x83b5,	// (0x000083b5) sctrl_sk_bottom_pane_t1_ParamLimits

0x8605,	// (0x00008605) aid_area_touch_clock

0xe664,	// (0x0000e664) aid_vkb2_area_top_pane_cell_ParamLimits

0xe664,	// (0x0000e664) aid_vkb2_area_top_pane_cell

0xe70f,	// (0x0000e70f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe70f,	// (0x0000e70f) aid_vkb2_area_bottom_pane_cell

0x8f4b,	// (0x00008f4b) popup_char_count_window

0x9594,	// (0x00009594) popup_char_count_window_g1

0x959d,	// (0x0000959d) popup_char_count_window_g2

0x95a6,	// (0x000095a6) popup_char_count_window_g3

0x0002,

0xb2b2,	// (0x0000b2b2) popup_char_count_window_g

0x95af,	// (0x000095af) popup_char_count_window_t1

0x8ba9,	// (0x00008ba9) popup_fep_char_preview_window_ParamLimits

0x8ba9,	// (0x00008ba9) popup_fep_char_preview_window

0xe684,	// (0x0000e684) vkb2_top_candi_pane_ParamLimits

0xe684,	// (0x0000e684) vkb2_top_candi_pane

0xebf8,	// (0x0000ebf8) cell_vkb2_top_candi_pane_ParamLimits

0xebf8,	// (0x0000ebf8) cell_vkb2_top_candi_pane

0x3e5e,	// (0x00003e5e) bg_popup_fep_char_preview_window_ParamLimits

0x3e5e,	// (0x00003e5e) bg_popup_fep_char_preview_window

0x960a,	// (0x0000960a) popup_fep_char_preview_window_t1_ParamLimits

0x960a,	// (0x0000960a) popup_fep_char_preview_window_t1

0x9644,	// (0x00009644) bg_popup_fep_char_preview_window_g1

0x964c,	// (0x0000964c) bg_popup_fep_char_preview_window_g2

0x9654,	// (0x00009654) bg_popup_fep_char_preview_window_g3

0x965c,	// (0x0000965c) bg_popup_fep_char_preview_window_g4

0x9664,	// (0x00009664) bg_popup_fep_char_preview_window_g5

0x966c,	// (0x0000966c) bg_popup_fep_char_preview_window_g6

0x9674,	// (0x00009674) bg_popup_fep_char_preview_window_g7

0x967c,	// (0x0000967c) bg_popup_fep_char_preview_window_g8

0x9684,	// (0x00009684) bg_popup_fep_char_preview_window_g9

0x0008,

0xb2b9,	// (0x0000b2b9) bg_popup_fep_char_preview_window_g

0x69a9,	// (0x000069a9) cell_vkb2_top_candi_pane_g1_ParamLimits

0x69a9,	// (0x000069a9) cell_vkb2_top_candi_pane_g1

0x6d14,	// (0x00006d14) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6d14,	// (0x00006d14) cell_vkb2_top_candi_pane_g2

0x6d35,	// (0x00006d35) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6d35,	// (0x00006d35) cell_vkb2_top_candi_pane_g3

0x968c,	// (0x0000968c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x968c,	// (0x0000968c) cell_vkb2_top_candi_pane_g4

0x96ad,	// (0x000096ad) cell_vkb2_top_candi_pane_g5_ParamLimits

0x96ad,	// (0x000096ad) cell_vkb2_top_candi_pane_g5

0x8495,	// (0x00008495) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8495,	// (0x00008495) cell_vkb2_top_candi_pane_g6

0x0005,

0xb2cc,	// (0x0000b2cc) cell_vkb2_top_candi_pane_g_ParamLimits

0xb2cc,	// (0x0000b2cc) cell_vkb2_top_candi_pane_g

0x96ce,	// (0x000096ce) cell_vkb2_top_candi_pane_t1

0x4d49,	// (0x00004d49) aid_size_touch_slider_mark_ParamLimits

0x4d49,	// (0x00004d49) aid_size_touch_slider_mark

0xe91b,	// (0x0000e91b) grid_graphic2_catg_pane_ParamLimits

0xe91b,	// (0x0000e91b) grid_graphic2_catg_pane

0xe9d7,	// (0x0000e9d7) popup_grid_graphic2_window_t1_ParamLimits

0xe9d7,	// (0x0000e9d7) popup_grid_graphic2_window_t1

0xe9ed,	// (0x0000e9ed) popup_grid_graphic2_window_t2_ParamLimits

0xe9ed,	// (0x0000e9ed) popup_grid_graphic2_window_t2

0x0001,

0xf1c6,	// (0x0000f1c6) popup_grid_graphic2_window_t_ParamLimits

0xf1c6,	// (0x0000f1c6) popup_grid_graphic2_window_t

0x0823,	// (0x00000823) bg_button_pane_cp05_ParamLimits

0xeb72,	// (0x0000eb72) cell_graphic2_control_pane_g1_ParamLimits

0xec5e,	// (0x0000ec5e) cell_graphic2_catg_pane_ParamLimits

0xec5e,	// (0x0000ec5e) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xec70,	// (0x0000ec70) cell_graphic2_catg_pane_g1

0x85d1,	// (0x000085d1) cell_tb_ext_pane_t1_ParamLimits

0x8fe9,	// (0x00008fe9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8fe9,	// (0x00008fe9) vkb2_top_cell_right_narrow_pane

0x9001,	// (0x00009001) vkb2_top_cell_right_wide_pane_ParamLimits

0x9001,	// (0x00009001) vkb2_top_cell_right_wide_pane

0x6583,	// (0x00006583) bg_vkb2_func_pane_ParamLimits

0x6583,	// (0x00006583) bg_vkb2_func_pane

0x9072,	// (0x00009072) vkb2_top_cell_left_pane_g1_ParamLimits

0x6583,	// (0x00006583) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6583,	// (0x00006583) bg_vkb2_fuc_pane_cp03

0x90e7,	// (0x000090e7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x35f5,	// (0x000035f5) bg_vkb2_func_pane_g1

0x35fd,	// (0x000035fd) bg_vkb2_func_pane_g2

0x360d,	// (0x0000360d) bg_vkb2_func_pane_g3

0x3605,	// (0x00003605) bg_vkb2_func_pane_g4

0x3615,	// (0x00003615) bg_vkb2_func_pane_g5

0x361d,	// (0x0000361d) bg_vkb2_func_pane_g6

0x3625,	// (0x00003625) bg_vkb2_func_pane_g7

0x362d,	// (0x0000362d) bg_vkb2_func_pane_g8

0x35ed,	// (0x000035ed) bg_vkb2_func_pane_g9

0x0008,

0xb2d9,	// (0x0000b2d9) bg_vkb2_func_pane_g

0x6583,	// (0x00006583) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6583,	// (0x00006583) bg_vkb2_fuc_pane_cp01

0x9072,	// (0x00009072) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9072,	// (0x00009072) vkb2_top_cell_right_wide_pane_g1

0x6583,	// (0x00006583) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6583,	// (0x00006583) bg_vkb2_fuc_pane_cp02

0x90e7,	// (0x000090e7) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x90e7,	// (0x000090e7) vkb2_top_cell_right_narrow_pane_g1

0xddd3,	// (0x0000ddd3) aid_touch_area_decrease_ParamLimits

0xddd3,	// (0x0000ddd3) aid_touch_area_decrease

0xde0d,	// (0x0000de0d) aid_touch_area_increase_ParamLimits

0xde0d,	// (0x0000de0d) aid_touch_area_increase

0xde35,	// (0x0000de35) aid_touch_area_mute_ParamLimits

0xde35,	// (0x0000de35) aid_touch_area_mute

0xde65,	// (0x0000de65) aid_touch_area_slider_ParamLimits

0xde65,	// (0x0000de65) aid_touch_area_slider

0xdea5,	// (0x0000dea5) popup_slider_window_g4_ParamLimits

0xdea5,	// (0x0000dea5) popup_slider_window_g4

0xdecd,	// (0x0000decd) popup_slider_window_g5_ParamLimits

0xdecd,	// (0x0000decd) popup_slider_window_g5

0xdf01,	// (0x0000df01) popup_slider_window_g6_ParamLimits

0xdf01,	// (0x0000df01) popup_slider_window_g6

0x82da,	// (0x000082da) popup_slider_window_t2_ParamLimits

0x82da,	// (0x000082da) popup_slider_window_t2

0x0001,

0xb1d5,	// (0x0000b1d5) popup_slider_window_t_ParamLimits

0xb1d5,	// (0x0000b1d5) popup_slider_window_t

0xdf1d,	// (0x0000df1d) slider_pane_ParamLimits

0xdf1d,	// (0x0000df1d) slider_pane

0x9708,	// (0x00009708) slider_pane_g1_ParamLimits

0x9708,	// (0x00009708) slider_pane_g1

0x971c,	// (0x0000971c) slider_pane_g2_ParamLimits

0x971c,	// (0x0000971c) slider_pane_g2

0x9732,	// (0x00009732) slider_pane_g3_ParamLimits

0x9732,	// (0x00009732) slider_pane_g3

0x0003,

0xb2ec,	// (0x0000b2ec) slider_pane_g_ParamLimits

0xb2ec,	// (0x0000b2ec) slider_pane_g

0xc90d,	// (0x0000c90d) popup_tb_float_extension_window_ParamLimits

0xc90d,	// (0x0000c90d) popup_tb_float_extension_window

0x975e,	// (0x0000975e) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x976a,	// (0x0000976a) grid_tb_float_ext_pane

0x9774,	// (0x00009774) cell_tb_float_ext_pane_ParamLimits

0x9774,	// (0x00009774) cell_tb_float_ext_pane

0x978e,	// (0x0000978e) cell_tb_float_ext_pane_g1

0x9797,	// (0x00009797) grid_highlight_pane_cp12

0xd743,	// (0x0000d743) cell_last_hwr_side_pane_ParamLimits

0xd743,	// (0x0000d743) cell_last_hwr_side_pane

0x6527,	// (0x00006527) cell_last_hwr_side_pane_g1

0x97a0,	// (0x000097a0) cell_last_hwr_side_pane_g2

0x0001,

0xb2f5,	// (0x0000b2f5) cell_last_hwr_side_pane_g

0xe7eb,	// (0x0000e7eb) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe7eb,	// (0x0000e7eb) vkb2_area_bottom_space_btn_pane

0x69a9,	// (0x000069a9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x91ca,	// (0x000091ca) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x96ce,	// (0x000096ce) cell_vkb2_top_candi_pane_t1_ParamLimits

0x97a9,	// (0x000097a9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x97a9,	// (0x000097a9) vkb2_area_bottom_space_btn_pane_g1

0x97e3,	// (0x000097e3) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x97e3,	// (0x000097e3) vkb2_area_bottom_space_btn_pane_g2

0x9819,	// (0x00009819) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9819,	// (0x00009819) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb2fa,	// (0x0000b2fa) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb2fa,	// (0x0000b2fa) vkb2_area_bottom_space_btn_pane_g

0x6646,	// (0x00006646) cel_fep_hwr_func_pane_ParamLimits

0x6646,	// (0x00006646) cel_fep_hwr_func_pane

0xd718,	// (0x0000d718) cell_hwr_side_button_pane_ParamLimits

0xd718,	// (0x0000d718) cell_hwr_side_button_pane

0x8605,	// (0x00008605) aid_area_touch_clock_ParamLimits

0x0823,	// (0x00000823) bg_uniindi_top_pane_ParamLimits

0x8617,	// (0x00008617) uniindi_top_pane_g1_ParamLimits

0x862d,	// (0x0000862d) uniindi_top_pane_g2_ParamLimits

0x8639,	// (0x00008639) uniindi_top_pane_g3_ParamLimits

0x864a,	// (0x0000864a) uniindi_top_pane_g4_ParamLimits

0xb20d,	// (0x0000b20d) uniindi_top_pane_g_ParamLimits

0x8657,	// (0x00008657) uniindi_top_pane_t1_ParamLimits

0x0823,	// (0x00000823) bg_vkb2_func_pane_cp01_ParamLimits

0x0823,	// (0x00000823) bg_vkb2_func_pane_cp01

0x9863,	// (0x00009863) cel_fep_hwr_func_pane_g1_ParamLimits

0x9863,	// (0x00009863) cel_fep_hwr_func_pane_g1

0x0823,	// (0x00000823) bg_vkb2_func_pane_cp02_ParamLimits

0x0823,	// (0x00000823) bg_vkb2_func_pane_cp02

0x9863,	// (0x00009863) cell_hwr_side_button_pane_g1_ParamLimits

0x9863,	// (0x00009863) cell_hwr_side_button_pane_g1

0x33e0,	// (0x000033e0) status_pane_g4_ParamLimits

0x33e0,	// (0x000033e0) status_pane_g4

0x33fa,	// (0x000033fa) status_pane_t1

0x6241,	// (0x00006241) form2_midp_gauge_slider_cont_pane

0x6249,	// (0x00006249) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd65c,	// (0x0000d65c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd670,	// (0x0000d670) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf11b,	// (0x0000f11b) form2_midp_gauge_slider_pane_t_ParamLimits

0x627f,	// (0x0000627f) form2_midp_slider_pane_ParamLimits

0x8b69,	// (0x00008b69) aid_size_cell_func_vkb2_ParamLimits

0x8b69,	// (0x00008b69) aid_size_cell_func_vkb2

0x974a,	// (0x0000974a) slider_pane_g4_ParamLimits

0x974a,	// (0x0000974a) slider_pane_g4

0xec79,	// (0x0000ec79) form2_midp_gauge_slider_pane_t2_cp01

0xec89,	// (0x0000ec89) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xec89,	// (0x0000ec89) form2_midp_gauge_slider_pane_t3_cp01

0x989c,	// (0x0000989c) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x98d0,	// (0x000098d0) navi_smil_pane_g1

0x98d8,	// (0x000098d8) navi_smil_pane_t1

0x98a5,	// (0x000098a5) form2_midp_slider_pane_g1

0x98ae,	// (0x000098ae) form2_midp_slider_pane_g2

0x98b6,	// (0x000098b6) form2_midp_slider_pane_g3

0x98a5,	// (0x000098a5) form2_midp_slider_pane_g4

0xeca8,	// (0x0000eca8) form2_midp_slider_pane_g5

0x0004,

0xf1e0,	// (0x0000f1e0) form2_midp_slider_pane_g

0x9853,	// (0x00009853) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9853,	// (0x00009853) vkb2_area_bottom_space_btn_pane_g4

0xcaf0,	// (0x0000caf0) lc0_navi_pane_ParamLimits

0xcaf0,	// (0x0000caf0) lc0_navi_pane

0xcb5a,	// (0x0000cb5a) lc0_stat_indi_pane_ParamLimits

0xcb5a,	// (0x0000cb5a) lc0_stat_indi_pane

0xcb6f,	// (0x0000cb6f) ls0_title_pane_ParamLimits

0xcb6f,	// (0x0000cb6f) ls0_title_pane

0x1348,	// (0x00001348) bg_popup_sub_pane_cp14_ParamLimits

0x85ec,	// (0x000085ec) list_uniindi_pane_ParamLimits

0x85f8,	// (0x000085f8) uniindi_top_pane_ParamLimits

0x8694,	// (0x00008694) list_single_uniindi_pane_g1_ParamLimits

0x86a7,	// (0x000086a7) list_single_uniindi_pane_t1_ParamLimits

0xecb3,	// (0x0000ecb3) lc0_stat_clock_pane_ParamLimits

0xecb3,	// (0x0000ecb3) lc0_stat_clock_pane

0xecc0,	// (0x0000ecc0) lc0_stat_indi_pane_g1_ParamLimits

0xecc0,	// (0x0000ecc0) lc0_stat_indi_pane_g1

0xeccd,	// (0x0000eccd) lc0_stat_indi_pane_g2_ParamLimits

0xeccd,	// (0x0000eccd) lc0_stat_indi_pane_g2

0x0001,

0xf1eb,	// (0x0000f1eb) lc0_stat_indi_pane_g_ParamLimits

0xf1eb,	// (0x0000f1eb) lc0_stat_indi_pane_g

0xecda,	// (0x0000ecda) lc0_uni_indicator_pane_ParamLimits

0xecda,	// (0x0000ecda) lc0_uni_indicator_pane

0xece7,	// (0x0000ece7) ls0_title_pane_g1_ParamLimits

0xece7,	// (0x0000ece7) ls0_title_pane_g1

0xecfb,	// (0x0000ecfb) ls0_title_pane_t1_ParamLimits

0xecfb,	// (0x0000ecfb) ls0_title_pane_t1

0xed29,	// (0x0000ed29) lc0_uni_indicator_pane_g1_ParamLimits

0xed29,	// (0x0000ed29) lc0_uni_indicator_pane_g1

0x9979,	// (0x00009979) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9987,	// (0x00009987) ai5_sk_pane_ParamLimits

0x9987,	// (0x00009987) ai5_sk_pane

0xed57,	// (0x0000ed57) cell_ai5_widget_pane_ParamLimits

0xed57,	// (0x0000ed57) cell_ai5_widget_pane

0x9a5e,	// (0x00009a5e) aid_size_cell_widget_grid

0x9a74,	// (0x00009a74) bg_ai5_widget_pane_ParamLimits

0x9a74,	// (0x00009a74) bg_ai5_widget_pane

0x9ade,	// (0x00009ade) cell_ai5_widget_pane_g2

0x9aee,	// (0x00009aee) cell_ai5_widget_pane_g3

0x9b0d,	// (0x00009b0d) cell_ai5_widget_pane_g4

0x9b19,	// (0x00009b19) cell_ai5_widget_pane_g5

0x9b25,	// (0x00009b25) cell_ai5_widget_pane_g6

0x9b31,	// (0x00009b31) cell_ai5_widget_pane_g7

0x9b79,	// (0x00009b79) cell_ai5_widget_pane_t1_ParamLimits

0x9b79,	// (0x00009b79) cell_ai5_widget_pane_t1

0x9b96,	// (0x00009b96) cell_ai5_widget_pane_t2_ParamLimits

0x9b96,	// (0x00009b96) cell_ai5_widget_pane_t2

0x9bae,	// (0x00009bae) cell_ai5_widget_pane_t3_ParamLimits

0x9bae,	// (0x00009bae) cell_ai5_widget_pane_t3

0x9bc6,	// (0x00009bc6) cell_ai5_widget_pane_t4_ParamLimits

0x9bc6,	// (0x00009bc6) cell_ai5_widget_pane_t4

0x9be0,	// (0x00009be0) cell_ai5_widget_pane_t5_ParamLimits

0x9be0,	// (0x00009be0) cell_ai5_widget_pane_t5

0x9bff,	// (0x00009bff) cell_ai5_widget_pane_t6_ParamLimits

0x9bff,	// (0x00009bff) cell_ai5_widget_pane_t6

0x9c11,	// (0x00009c11) cell_ai5_widget_pane_t7_ParamLimits

0x9c11,	// (0x00009c11) cell_ai5_widget_pane_t7

0x9c2a,	// (0x00009c2a) cell_ai5_widget_pane_t8_ParamLimits

0x9c2a,	// (0x00009c2a) cell_ai5_widget_pane_t8

0x0009,

0xb328,	// (0x0000b328) cell_ai5_widget_pane_t_ParamLimits

0xb328,	// (0x0000b328) cell_ai5_widget_pane_t

0x9c76,	// (0x00009c76) grid_ai5_widget_pane

0x1348,	// (0x00001348) highlight_cell_ai5_widget_pane_ParamLimits

0x1348,	// (0x00001348) highlight_cell_ai5_widget_pane

0xedc1,	// (0x0000edc1) ai5_sk_left_pane

0xedcb,	// (0x0000edcb) ai5_sk_middle_pane

0xedd5,	// (0x0000edd5) ai5_sk_right_pane

0x9cac,	// (0x00009cac) bg_ai5_widget_pane_g1_ParamLimits

0x9cac,	// (0x00009cac) bg_ai5_widget_pane_g1

0x9cb8,	// (0x00009cb8) bg_ai5_widget_pane_g2_ParamLimits

0x9cb8,	// (0x00009cb8) bg_ai5_widget_pane_g2

0x9cc4,	// (0x00009cc4) bg_ai5_widget_pane_g3_ParamLimits

0x9cc4,	// (0x00009cc4) bg_ai5_widget_pane_g3

0x9cd0,	// (0x00009cd0) bg_ai5_widget_pane_g4_ParamLimits

0x9cd0,	// (0x00009cd0) bg_ai5_widget_pane_g4

0x9cdc,	// (0x00009cdc) bg_ai5_widget_pane_g5_ParamLimits

0x9cdc,	// (0x00009cdc) bg_ai5_widget_pane_g5

0x9ce8,	// (0x00009ce8) bg_ai5_widget_pane_g6_ParamLimits

0x9ce8,	// (0x00009ce8) bg_ai5_widget_pane_g6

0x9cf4,	// (0x00009cf4) bg_ai5_widget_pane_g7_ParamLimits

0x9cf4,	// (0x00009cf4) bg_ai5_widget_pane_g7

0x9d00,	// (0x00009d00) bg_ai5_widget_pane_g8_ParamLimits

0x9d00,	// (0x00009d00) bg_ai5_widget_pane_g8

0x9d0c,	// (0x00009d0c) bg_ai5_widget_pane_g9_ParamLimits

0x9d0c,	// (0x00009d0c) bg_ai5_widget_pane_g9

0x0008,

0xb33d,	// (0x0000b33d) bg_ai5_widget_pane_g_ParamLimits

0xb33d,	// (0x0000b33d) bg_ai5_widget_pane_g

0x9d3f,	// (0x00009d3f) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d3f,	// (0x00009d3f) cell_shortcut_ai5_widget_pane

0x2557,	// (0x00002557) bg_cell_shortcut_ai5_widget_pane

0x9d50,	// (0x00009d50) cell_grid_ai5_widget_pane_g1

0x9d59,	// (0x00009d59) highlight_cell_shortcut_ai5_widget_pane

0x35fd,	// (0x000035fd) ai5_sk_left_pane_g1

0x9d61,	// (0x00009d61) ai5_sk_left_pane_g2

0x9d69,	// (0x00009d69) ai5_sk_left_pane_g3

0x9d71,	// (0x00009d71) ai5_sk_left_pane_g4

0x0003,

0xb350,	// (0x0000b350) ai5_sk_left_pane_g

0x9d79,	// (0x00009d79) ai5_sk_left_pane_t1

0x35f5,	// (0x000035f5) ai5_sk_right_pane_g1

0x9d87,	// (0x00009d87) ai5_sk_right_pane_g2

0x9d8f,	// (0x00009d8f) ai5_sk_right_pane_g3

0x9d97,	// (0x00009d97) ai5_sk_right_pane_g4

0x0003,

0xb359,	// (0x0000b359) ai5_sk_right_pane_g

0x9d9f,	// (0x00009d9f) ai5_sk_right_pane_t1

0x35f5,	// (0x000035f5) ai5_sk_middle_pane_g1

0x35fd,	// (0x000035fd) ai5_sk_middle_pane_g2

0x3615,	// (0x00003615) ai5_sk_middle_pane_g3

0x9d8f,	// (0x00009d8f) ai5_sk_middle_pane_g4

0x9d69,	// (0x00009d69) ai5_sk_middle_pane_g5

0x9dad,	// (0x00009dad) ai5_sk_middle_pane_g6

0xeddf,	// (0x0000eddf) ai5_sk_middle_pane_g7

0x0006,

0xf1f0,	// (0x0000f1f0) ai5_sk_middle_pane_g

0xc9dc,	// (0x0000c9dc) aid_touch_area_size_lc0_ParamLimits

0xc9dc,	// (0x0000c9dc) aid_touch_area_size_lc0

0x6d56,	// (0x00006d56) cell_hwr_candidate_pane_t1_ParamLimits

0x30bd,	// (0x000030bd) aid_touch_navi_pane

0xcc62,	// (0x0000cc62) status_dt_navi_pane_ParamLimits

0xcc62,	// (0x0000cc62) status_dt_navi_pane

0xcc7a,	// (0x0000cc7a) status_dt_sta_pane_ParamLimits

0xcc7a,	// (0x0000cc7a) status_dt_sta_pane

0xede7,	// (0x0000ede7) dt_sta_controll_pane

0xedf4,	// (0x0000edf4) dt_sta_indi_pane

0xee01,	// (0x0000ee01) dt_sta_title_pane

0x0823,	// (0x00000823) bg_dt_sta_indi_pane_ParamLimits

0x0823,	// (0x00000823) bg_dt_sta_indi_pane

0x9dee,	// (0x00009dee) dt_sta_battery_pane

0xee13,	// (0x0000ee13) dt_sta_indi_pane_g1

0xee1c,	// (0x0000ee1c) dt_sta_indi_pane_g2

0xee25,	// (0x0000ee25) dt_sta_indi_pane_g3

0x0002,

0xf1ff,	// (0x0000f1ff) dt_sta_indi_pane_g

0xee2e,	// (0x0000ee2e) dt_sta_signal_pane

0x1348,	// (0x00001348) bg_dt_sta_title_pane_ParamLimits

0x1348,	// (0x00001348) bg_dt_sta_title_pane

0x9e1a,	// (0x00009e1a) dt_sta_title_pane_g1

0xee37,	// (0x0000ee37) dt_sta_title_pane_t1_ParamLimits

0xee37,	// (0x0000ee37) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xee4c,	// (0x0000ee4c) dt_sta_controll_pane_g1

0x9e40,	// (0x00009e40) bg_dt_sta_title_pane_g1

0x9e49,	// (0x00009e49) bg_dt_sta_title_pane_g2

0x9e52,	// (0x00009e52) bg_dt_sta_title_pane_g3

0x0002,

0xb378,	// (0x0000b378) bg_dt_sta_title_pane_g

0x6527,	// (0x00006527) bg_dt_sta_indi_pane_g1

0x9e5b,	// (0x00009e5b) dt_sta_signal_pane_g1

0x9e63,	// (0x00009e63) dt_sta_signal_pane_g2

0x0001,

0xb37f,	// (0x0000b37f) dt_sta_signal_pane_g

0x9e6b,	// (0x00009e6b) dt_sta_battery_pane_g1

0x9e74,	// (0x00009e74) dt_sta_battery_pane_t1

0x6527,	// (0x00006527) bg_dt_sta_control_pane_g1

0x1e9e,	// (0x00001e9e) fep_china_uni_eep_pane

0x1ea6,	// (0x00001ea6) fep_china_uni_entry_pane_ParamLimits

0x1eb6,	// (0x00001eb6) popup_fep_china_uni_window_g1_ParamLimits

0x1ec6,	// (0x00001ec6) popup_fep_china_uni_window_g2_ParamLimits

0x1ec6,	// (0x00001ec6) popup_fep_china_uni_window_g2

0x0001,

0xabf8,	// (0x0000abf8) popup_fep_china_uni_window_g_ParamLimits

0xabf8,	// (0x0000abf8) popup_fep_china_uni_window_g

0x9e83,	// (0x00009e83) fep_china_uni_eep_pane_g1

0x9e8b,	// (0x00009e8b) fep_china_uni_eep_pane_t1

0x98c7,	// (0x000098c7) aid_touch_area_size_smil_player

0x320d,	// (0x0000320d) lc0_clock_pane

0x33ee,	// (0x000033ee) status_pane_g5_ParamLimits

0x33ee,	// (0x000033ee) status_pane_g5

0xc49b,	// (0x0000c49b) popup_keymap_window

0x33ac,	// (0x000033ac) status_icon_pane

0x9aee,	// (0x00009aee) cell_ai5_widget_pane_g3_ParamLimits

0x9b0d,	// (0x00009b0d) cell_ai5_widget_pane_g4_ParamLimits

0x9b19,	// (0x00009b19) cell_ai5_widget_pane_g5_ParamLimits

0x9b3d,	// (0x00009b3d) cell_ai5_widget_pane_g8_ParamLimits

0x9b3d,	// (0x00009b3d) cell_ai5_widget_pane_g8

0x9b51,	// (0x00009b51) cell_ai5_widget_pane_g9_ParamLimits

0x9b51,	// (0x00009b51) cell_ai5_widget_pane_g9

0x9b65,	// (0x00009b65) cell_ai5_widget_pane_g10_ParamLimits

0x9b65,	// (0x00009b65) cell_ai5_widget_pane_g10

0x9e9a,	// (0x00009e9a) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9ea2,	// (0x00009ea2) popup_keymap_window_t1

0xc1cb,	// (0x0000c1cb) control_pane_g6_ParamLimits

0xc1cb,	// (0x0000c1cb) control_pane_g6

0xc1d8,	// (0x0000c1d8) control_pane_g7_ParamLimits

0xc1d8,	// (0x0000c1d8) control_pane_g7

0xc1e5,	// (0x0000c1e5) control_pane_g8_ParamLimits

0xc1e5,	// (0x0000c1e5) control_pane_g8

0xede7,	// (0x0000ede7) dt_sta_controll_pane_ParamLimits

0xedf4,	// (0x0000edf4) dt_sta_indi_pane_ParamLimits

0xee01,	// (0x0000ee01) dt_sta_title_pane_ParamLimits

0x0d29,	// (0x00000d29) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb534,	// (0x0000b534) popup_sk_window

0x3e5e,	// (0x00003e5e) bg_popup_sub_pane_cp28_ParamLimits

0x3e5e,	// (0x00003e5e) bg_popup_sub_pane_cp28

0x9eb0,	// (0x00009eb0) popup_discreet_window_g1_ParamLimits

0x9eb0,	// (0x00009eb0) popup_discreet_window_g1

0x9ed0,	// (0x00009ed0) popup_discreet_window_t1_ParamLimits

0x9ed0,	// (0x00009ed0) popup_discreet_window_t1

0x9eee,	// (0x00009eee) popup_discreet_window_t2_ParamLimits

0x9eee,	// (0x00009eee) popup_discreet_window_t2

0x0002,

0xb384,	// (0x0000b384) popup_discreet_window_t_ParamLimits

0xb384,	// (0x0000b384) popup_discreet_window_t

0x9f40,	// (0x00009f40) popup_sk_window_g1

0x9f4a,	// (0x00009f4a) popup_sk_window_g2

0x0001,

0xb38b,	// (0x0000b38b) popup_sk_window_g

0x9f54,	// (0x00009f54) popup_sk_window_t1

0x9f62,	// (0x00009f62) popup_sk_window_t1_copy1

0x9ade,	// (0x00009ade) cell_ai5_widget_pane_g2_ParamLimits

0x9c3c,	// (0x00009c3c) cell_ai5_widget_pane_t9_ParamLimits

0x9c3c,	// (0x00009c3c) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xee55,	// (0x0000ee55) aid_fshwr2_btn_pane

0xee64,	// (0x0000ee64) aid_fshwr2_syb_pane

0xee76,	// (0x0000ee76) aid_fshwr2_txt_pane

0xee85,	// (0x0000ee85) fshwr2_func_candi_pane

0xee96,	// (0x0000ee96) fshwr2_hwr_syb_pane

0xeeb1,	// (0x0000eeb1) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xeec9,	// (0x0000eec9) fshwr2_icf_pane_t1_ParamLimits

0xeec9,	// (0x0000eec9) fshwr2_icf_pane_t1

0x6527,	// (0x00006527) fshwr2_func_candi_pane_g1

0x9ff9,	// (0x00009ff9) fshwr2_func_candi_row_pane_ParamLimits

0x9ff9,	// (0x00009ff9) fshwr2_func_candi_row_pane

0xeee2,	// (0x0000eee2) cell_fshwr2_syb_pane_ParamLimits

0xeee2,	// (0x0000eee2) cell_fshwr2_syb_pane

0x69a9,	// (0x000069a9) fshwr2_hwr_syb_pane_g1_ParamLimits

0x69a9,	// (0x000069a9) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xa026,	// (0x0000a026) fshwr2_func_candi_cell_pane_ParamLimits

0xa026,	// (0x0000a026) fshwr2_func_candi_cell_pane

0xa054,	// (0x0000a054) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa054,	// (0x0000a054) fshwr2_func_candi_cell_bg_pane

0xa06e,	// (0x0000a06e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa06e,	// (0x0000a06e) fshwr2_func_candi_cell_pane_g1

0xa08e,	// (0x0000a08e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa08e,	// (0x0000a08e) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x2557,	// (0x00002557) cell_fshwr2_syb_bg_pane

0xeefc,	// (0x0000eefc) cell_fshwr2_syb_bg_pane_g1

0xef04,	// (0x0000ef04) cell_fshwr2_syb_bg_pane_t1

0x1348,	// (0x00001348) main_tmo_pane

0xd1d7,	// (0x0000d1d7) uni_indicator_pane_g1_ParamLimits

0xd1ec,	// (0x0000d1ec) uni_indicator_pane_g2_ParamLimits

0x4afc,	// (0x00004afc) uni_indicator_pane_g3_ParamLimits

0x4b12,	// (0x00004b12) uni_indicator_pane_g4_ParamLimits

0x4b12,	// (0x00004b12) uni_indicator_pane_g4

0x4b26,	// (0x00004b26) uni_indicator_pane_g5_ParamLimits

0x4b26,	// (0x00004b26) uni_indicator_pane_g5

0x4b3a,	// (0x00004b3a) uni_indicator_pane_g6_ParamLimits

0x4b3a,	// (0x00004b3a) uni_indicator_pane_g6

0xf0cc,	// (0x0000f0cc) uni_indicator_pane_g_ParamLimits

0xddb5,	// (0x0000ddb5) popup_tmo_note_window_ParamLimits

0xddb5,	// (0x0000ddb5) popup_tmo_note_window

0x1348,	// (0x00001348) fshwr2_bg_pane

0xa07f,	// (0x0000a07f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa07f,	// (0x0000a07f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xb390,	// (0x0000b390) fshwr2_func_candi_cell_pane_g_ParamLimits

0xb390,	// (0x0000b390) fshwr2_func_candi_cell_pane_g

0x6527,	// (0x00006527) bg_popup_window_pane_cp01

0xa0b8,	// (0x0000a0b8) bg_popup_window_pane_g1_cp01

0xa0c1,	// (0x0000a0c1) bg_popup_window_pane_cp22_ParamLimits

0xa0c1,	// (0x0000a0c1) bg_popup_window_pane_cp22

0xa0cf,	// (0x0000a0cf) listscroll_tmo_link_pane_ParamLimits

0xa0cf,	// (0x0000a0cf) listscroll_tmo_link_pane

0xa10f,	// (0x0000a10f) popup_tmo_note_window_g1_ParamLimits

0xa10f,	// (0x0000a10f) popup_tmo_note_window_g1

0xa11c,	// (0x0000a11c) tmo_note_info_pane_ParamLimits

0xa11c,	// (0x0000a11c) tmo_note_info_pane

0xef13,	// (0x0000ef13) list_tmo_note_info_pane_g1_ParamLimits

0xef13,	// (0x0000ef13) list_tmo_note_info_pane_g1

0xa14d,	// (0x0000a14d) list_tmo_note_info_pane_g2_ParamLimits

0xa14d,	// (0x0000a14d) list_tmo_note_info_pane_g2

0x0001,

0xf206,	// (0x0000f206) list_tmo_note_info_pane_g_ParamLimits

0xf206,	// (0x0000f206) list_tmo_note_info_pane_g

0xa169,	// (0x0000a169) list_tmo_note_info_text_pane_ParamLimits

0xa169,	// (0x0000a169) list_tmo_note_info_text_pane

0xa1ec,	// (0x0000a1ec) list_tmo_link_pane

0xa1f9,	// (0x0000a1f9) scroll_pane_cp20

0xa206,	// (0x0000a206) list_single_tmo_link_pane_ParamLimits

0xa206,	// (0x0000a206) list_single_tmo_link_pane

0xa216,	// (0x0000a216) list_single_tmo_link_pane_t1

0xa224,	// (0x0000a224) list_tmo_note_info_text_pane_t1_ParamLimits

0xa224,	// (0x0000a224) list_tmo_note_info_text_pane_t1

0xbdd1,	// (0x0000bdd1) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbdd1,	// (0x0000bdd1) aid_size_touch_scroll_bar_cp01

0xbd2d,	// (0x0000bd2d) aid_size_touch_slider_marker

0xb524,	// (0x0000b524) popup_settings_window_ParamLimits

0xb524,	// (0x0000b524) popup_settings_window

0x2aea,	// (0x00002aea) popup_candi_list_indi_window

0x30bd,	// (0x000030bd) aid_touch_navi_pane_ParamLimits

0x836f,	// (0x0000836f) rs_clock_indi_pane

0x8378,	// (0x00008378) sctrl_sk_bottom_pane_ParamLimits

0x8389,	// (0x00008389) sctrl_sk_top_pane_ParamLimits

0x8bc3,	// (0x00008bc3) popup_fep_tooltip_window

0x9a5e,	// (0x00009a5e) aid_size_cell_widget_grid_ParamLimits

0x9ad2,	// (0x00009ad2) cell_ai5_widget_pane_g1_ParamLimits

0x9ad2,	// (0x00009ad2) cell_ai5_widget_pane_g1

0x9b25,	// (0x00009b25) cell_ai5_widget_pane_g6_ParamLimits

0x9b31,	// (0x00009b31) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb313,	// (0x0000b313) cell_ai5_widget_pane_g_ParamLimits

0xb313,	// (0x0000b313) cell_ai5_widget_pane_g

0x9c60,	// (0x00009c60) cell_ai5_widget_pane_t10_ParamLimits

0x9c60,	// (0x00009c60) cell_ai5_widget_pane_t10

0x9c76,	// (0x00009c76) grid_ai5_widget_pane_ParamLimits

0x9d18,	// (0x00009d18) cell_contacts_ai5_widget_pane_ParamLimits

0x9d18,	// (0x00009d18) cell_contacts_ai5_widget_pane

0x9f03,	// (0x00009f03) popup_discreet_window_t3_ParamLimits

0x9f03,	// (0x00009f03) popup_discreet_window_t3

0x9fce,	// (0x00009fce) popup_fshwr2_char_preview_window_ParamLimits

0x9fce,	// (0x00009fce) popup_fshwr2_char_preview_window

0xef2a,	// (0x0000ef2a) tmo_note_info_pane_t1

0xef3f,	// (0x0000ef3f) tmo_note_info_pane_t2

0xef58,	// (0x0000ef58) tmo_note_info_pane_t3

0xa1c8,	// (0x0000a1c8) tmo_note_info_pane_t4

0xa1da,	// (0x0000a1da) tmo_note_info_pane_t5

0x0004,

0xf20b,	// (0x0000f20b) tmo_note_info_pane_t

0xa1ec,	// (0x0000a1ec) list_tmo_link_pane_ParamLimits

0xa1f9,	// (0x0000a1f9) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa23d,	// (0x0000a23d) popup_fshwr2_char_preview_window_t1

0xa24b,	// (0x0000a24b) popup_candi_list_indi_window_g1

0xa254,	// (0x0000a254) bg_cell_contacts_ai5_widget_pane

0xa260,	// (0x0000a260) cell_contacts_ai5_widget_pane_g1

0xa273,	// (0x0000a273) cell_contacts_ai5_widget_pane_g2

0xa27f,	// (0x0000a27f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb3a5,	// (0x0000b3a5) cell_contacts_ai5_widget_pane_g

0xa291,	// (0x0000a291) cell_contacts_ai5_widget_pane_t1

0x1348,	// (0x00001348) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa30b,	// (0x0000a30b) settings_container_pane

0x2557,	// (0x00002557) listscroll_set_pane_copy1

0x5949,	// (0x00005949) scroll_pane_cp121_copy1

0xa317,	// (0x0000a317) set_content_pane_copy1

0xa31f,	// (0x0000a31f) aid_height_set_list_copy1_ParamLimits

0xa31f,	// (0x0000a31f) aid_height_set_list_copy1

0x4e07,	// (0x00004e07) aid_size_parent_copy1_ParamLimits

0x4e07,	// (0x00004e07) aid_size_parent_copy1

0xa32b,	// (0x0000a32b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa32b,	// (0x0000a32b) button_value_adjust_pane_cp6_copy1

0x2ac2,	// (0x00002ac2) list_highlight_pane_cp2_copy1_ParamLimits

0x2ac2,	// (0x00002ac2) list_highlight_pane_cp2_copy1

0xa33f,	// (0x0000a33f) list_set_pane_copy1_ParamLimits

0xa33f,	// (0x0000a33f) list_set_pane_copy1

0xa2a6,	// (0x0000a2a6) main_pane_set_t1_copy1_ParamLimits

0xa2a6,	// (0x0000a2a6) main_pane_set_t1_copy1

0xa2e0,	// (0x0000a2e0) main_pane_set_t2_copy1_ParamLimits

0xa2e0,	// (0x0000a2e0) main_pane_set_t2_copy1

0xa3ec,	// (0x0000a3ec) main_pane_set_t3_copy1

0xa3fa,	// (0x0000a3fa) main_pane_set_t4_copy1

0xa2ff,	// (0x0000a2ff) set_content_pane_g1_copy1_ParamLimits

0xa2ff,	// (0x0000a2ff) set_content_pane_g1_copy1

0xa408,	// (0x0000a408) setting_code_pane_copy1

0xa410,	// (0x0000a410) setting_slider_graphic_pane_copy1

0xa410,	// (0x0000a410) setting_slider_pane_copy1

0xa410,	// (0x0000a410) setting_text_pane_copy1

0xa410,	// (0x0000a410) setting_volume_pane_copy1

0xa408,	// (0x0000a408) settings_code_pane_cp2_copy1

0xa418,	// (0x0000a418) settings_code_pane_cp_copy1_ParamLimits

0xa418,	// (0x0000a418) settings_code_pane_cp_copy1

0xa42c,	// (0x0000a42c) volume_set_pane_copy1

0xa434,	// (0x0000a434) volume_set_pane_g10_copy1

0xa43c,	// (0x0000a43c) volume_set_pane_g1_copy1

0xa444,	// (0x0000a444) volume_set_pane_g2_copy1

0xa44c,	// (0x0000a44c) volume_set_pane_g3_copy1

0xa454,	// (0x0000a454) volume_set_pane_g4_copy1

0xa45c,	// (0x0000a45c) volume_set_pane_g5_copy1

0xa464,	// (0x0000a464) volume_set_pane_g6_copy1

0xa46c,	// (0x0000a46c) volume_set_pane_g7_copy1

0xa474,	// (0x0000a474) volume_set_pane_g8_copy1

0xa47c,	// (0x0000a47c) volume_set_pane_g9_copy1

0x04ef,	// (0x000004ef) bg_set_opt_pane_cp_copy1_ParamLimits

0x04ef,	// (0x000004ef) bg_set_opt_pane_cp_copy1

0xa484,	// (0x0000a484) setting_slider_pane_t1_copy1_ParamLimits

0xa484,	// (0x0000a484) setting_slider_pane_t1_copy1

0xa4a2,	// (0x0000a4a2) setting_slider_pane_t2_copy1_ParamLimits

0xa4a2,	// (0x0000a4a2) setting_slider_pane_t2_copy1

0xa4bc,	// (0x0000a4bc) setting_slider_pane_t3_copy1_ParamLimits

0xa4bc,	// (0x0000a4bc) setting_slider_pane_t3_copy1

0xa4d4,	// (0x0000a4d4) slider_set_pane_copy1_ParamLimits

0xa4d4,	// (0x0000a4d4) slider_set_pane_copy1

0x1475,	// (0x00001475) set_opt_bg_pane_g1_copy2

0x147d,	// (0x0000147d) set_opt_bg_pane_g2_copy2

0xa4ea,	// (0x0000a4ea) set_opt_bg_pane_g3_copy2

0x148d,	// (0x0000148d) set_opt_bg_pane_g4_copy2

0x1495,	// (0x00001495) set_opt_bg_pane_g5_copy2

0x149d,	// (0x0000149d) set_opt_bg_pane_g6_copy2

0xa4f4,	// (0x0000a4f4) set_opt_bg_pane_g7_copy2

0xa4fc,	// (0x0000a4fc) set_opt_bg_pane_g8_copy2

0xa506,	// (0x0000a506) set_opt_bg_pane_g9_copy2

0xa510,	// (0x0000a510) aid_size_touch_slider_mark_copy1_ParamLimits

0xa510,	// (0x0000a510) aid_size_touch_slider_mark_copy1

0xa524,	// (0x0000a524) slider_set_pane_g1_copy1

0xa52d,	// (0x0000a52d) slider_set_pane_g2_copy1

0x4d76,	// (0x00004d76) slider_set_pane_g3_copy1_ParamLimits

0x4d76,	// (0x00004d76) slider_set_pane_g3_copy1

0x4d8a,	// (0x00004d8a) slider_set_pane_g4_copy1_ParamLimits

0x4d8a,	// (0x00004d8a) slider_set_pane_g4_copy1

0x4da2,	// (0x00004da2) slider_set_pane_g5_copy1_ParamLimits

0x4da2,	// (0x00004da2) slider_set_pane_g5_copy1

0x4d76,	// (0x00004d76) slider_set_pane_g6_copy1_ParamLimits

0x4d76,	// (0x00004d76) slider_set_pane_g6_copy1

0xa535,	// (0x0000a535) slider_set_pane_g7_copy1_ParamLimits

0xa535,	// (0x0000a535) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa54b,	// (0x0000a54b) setting_slider_graphic_pane_g1_copy1

0xa554,	// (0x0000a554) setting_slider_graphic_pane_t1_copy1

0xa564,	// (0x0000a564) setting_slider_graphic_pane_t2_copy1

0xa574,	// (0x0000a574) slider_set_pane_cp_copy1

0xa584,	// (0x0000a584) input_focus_pane_cp1_copy1

0xa58d,	// (0x0000a58d) list_set_text_pane_copy1

0xa595,	// (0x0000a595) setting_text_pane_g1_copy1

0xa59e,	// (0x0000a59e) set_text_pane_t1_copy1

0xa584,	// (0x0000a584) input_focus_pane_cp2_copy1

0xa595,	// (0x0000a595) setting_code_pane_g1_copy1

0xa5b9,	// (0x0000a5b9) setting_code_pane_t1_copy1

0x5736,	// (0x00005736) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x226d,	// (0x0000226d) list_set_graphic_pane_g1_copy1_ParamLimits

0x226d,	// (0x0000226d) list_set_graphic_pane_g1_copy1

0xa5c7,	// (0x0000a5c7) list_set_graphic_pane_g2_copy1

0x2285,	// (0x00002285) list_set_graphic_pane_t1_copy1_ParamLimits

0x2285,	// (0x00002285) list_set_graphic_pane_t1_copy1

0x6527,	// (0x00006527) rs_clock_indi_pane_g1

0xa5cf,	// (0x0000a5cf) rs_clock_indi_pane_t1

0xa5dd,	// (0x0000a5dd) rs_indi_pane

0xa5e5,	// (0x0000a5e5) rs_indi_pane_g1

0xa5ee,	// (0x0000a5ee) rs_indi_pane_g2

0xa5f7,	// (0x0000a5f7) rs_indi_pane_g3

0x0002,

0xb3ac,	// (0x0000b3ac) rs_indi_pane_g

0x2557,	// (0x00002557) bg_popup_preview_window_pane_cp03

0xa600,	// (0x0000a600) popup_fep_tooltip_window_t1

0x7744,	// (0x00007744) popup_note2_window_g2_ParamLimits

0x7744,	// (0x00007744) popup_note2_window_g2

0x0001,

0xb145,	// (0x0000b145) popup_note2_window_g_ParamLimits

0xb145,	// (0x0000b145) popup_note2_window_g

0x7d40,	// (0x00007d40) bg_popup_sub_pane_cp11_ParamLimits

0x7d4d,	// (0x00007d4d) cell_ai3_links_pane_g1_ParamLimits

0x7d64,	// (0x00007d64) cell_ai3_links_pane_t1

0xa59e,	// (0x0000a59e) set_text_pane_t1_copy1_ParamLimits

0xc096,	// (0x0000c096) cell_graphic_popup_pane_cp2_ParamLimits

0xc096,	// (0x0000c096) cell_graphic_popup_pane_cp2

0xef6d,	// (0x0000ef6d) cell_graphic_popup_pane_g1_cp2

0x0b3c,	// (0x00000b3c) cell_graphic_popup_pane_g2_cp2

0xa616,	// (0x0000a616) cell_graphic_popup_pane_g3_cp2

0xa61e,	// (0x0000a61e) cell_graphic_popup_pane_t2_cp2

0x0b4d,	// (0x00000b4d) grid_highlight_pane_cp3_cp2

0x19cf,	// (0x000019cf) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1348,	// (0x00001348) main_tmo_pane_ParamLimits

0xdda9,	// (0x0000dda9) popup_tmo_big_image_note_window

0x9ac2,	// (0x00009ac2) cell_ai5_widget_list_pane

0x9aca,	// (0x00009aca) cell_ai5_widget_lrg_icon_pane

0xef2a,	// (0x0000ef2a) tmo_note_info_pane_t1_ParamLimits

0xef3f,	// (0x0000ef3f) tmo_note_info_pane_t2_ParamLimits

0xef58,	// (0x0000ef58) tmo_note_info_pane_t3_ParamLimits

0xa1c8,	// (0x0000a1c8) tmo_note_info_pane_t4_ParamLimits

0xa1da,	// (0x0000a1da) tmo_note_info_pane_t5_ParamLimits

0xf20b,	// (0x0000f20b) tmo_note_info_pane_t_ParamLimits

0xa30b,	// (0x0000a30b) settings_container_pane_ParamLimits

0xa57c,	// (0x0000a57c) indicator_popup_pane_cp5

0xa57c,	// (0x0000a57c) indicator_popup_pane_cp6

0x5736,	// (0x00005736) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa62c,	// (0x0000a62c) popup_tmo_big_image_note_window_g1

0xa635,	// (0x0000a635) popup_tmo_big_image_note_window_t1

0xa645,	// (0x0000a645) popup_tmo_big_image_note_window_t2

0xa655,	// (0x0000a655) popup_tmo_big_image_note_window_t3

0x0002,

0xb3b3,	// (0x0000b3b3) popup_tmo_big_image_note_window_t

0xa665,	// (0x0000a665) cell_ai5_widget_lrg_icon_pane_g1

0xa66d,	// (0x0000a66d) cell_ai5_widget_lrg_icon_pane_t1

0xa67b,	// (0x0000a67b) cell_ai5_widget_list_row_pane_ParamLimits

0xa67b,	// (0x0000a67b) cell_ai5_widget_list_row_pane

0xa693,	// (0x0000a693) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa693,	// (0x0000a693) cell_ai5_widget_list_row_pane_g1

0xa6a0,	// (0x0000a6a0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa6a0,	// (0x0000a6a0) cell_ai5_widget_list_row_pane_t1

0xa6b8,	// (0x0000a6b8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa6b8,	// (0x0000a6b8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb3ba,	// (0x0000b3ba) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb3ba,	// (0x0000b3ba) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa6ef,	// (0x0000a6ef) popup_fep_char_pre_window

0xa6f7,	// (0x0000a6f7) popup_fep_ituss_window

0xa718,	// (0x0000a718) popup_fep_vkbss_window

0xa737,	// (0x0000a737) grid_vkbss_keypad_pane_ParamLimits

0xa737,	// (0x0000a737) grid_vkbss_keypad_pane

0xa747,	// (0x0000a747) ituss_keypad_pane

0xa763,	// (0x0000a763) aid_vkbss_key_offset_ParamLimits

0xa763,	// (0x0000a763) aid_vkbss_key_offset

0xa76f,	// (0x0000a76f) cell_vkbss_key_pane_ParamLimits

0xa76f,	// (0x0000a76f) cell_vkbss_key_pane

0x33c8,	// (0x000033c8) bg_cell_vkbss_key_g1_ParamLimits

0x33c8,	// (0x000033c8) bg_cell_vkbss_key_g1

0xa785,	// (0x0000a785) cell_vkbss_key_3p_pane_ParamLimits

0xa785,	// (0x0000a785) cell_vkbss_key_3p_pane

0xa79f,	// (0x0000a79f) cell_vkbss_key_g1_ParamLimits

0xa79f,	// (0x0000a79f) cell_vkbss_key_g1

0xa7b9,	// (0x0000a7b9) cell_vkbss_key_t1_ParamLimits

0xa7b9,	// (0x0000a7b9) cell_vkbss_key_t1

0xa7e4,	// (0x0000a7e4) cell_ituss_key_pane_ParamLimits

0xa7e4,	// (0x0000a7e4) cell_ituss_key_pane

0xa7f5,	// (0x0000a7f5) bg_cell_ituss_key_g1_ParamLimits

0xa7f5,	// (0x0000a7f5) bg_cell_ituss_key_g1

0xa801,	// (0x0000a801) cell_ituss_key_pane_g1_ParamLimits

0xa801,	// (0x0000a801) cell_ituss_key_pane_g1

0xa815,	// (0x0000a815) cell_ituss_key_pane_g2_ParamLimits

0xa815,	// (0x0000a815) cell_ituss_key_pane_g2

0x0001,

0xb3c1,	// (0x0000b3c1) cell_ituss_key_pane_g_ParamLimits

0xb3c1,	// (0x0000b3c1) cell_ituss_key_pane_g

0xa843,	// (0x0000a843) cell_ituss_key_t1_ParamLimits

0xa843,	// (0x0000a843) cell_ituss_key_t1

0xa879,	// (0x0000a879) cell_ituss_key_t2_ParamLimits

0xa879,	// (0x0000a879) cell_ituss_key_t2

0xa8aa,	// (0x0000a8aa) cell_ituss_key_t3_ParamLimits

0xa8aa,	// (0x0000a8aa) cell_ituss_key_t3

0xa8e4,	// (0x0000a8e4) cell_ituss_key_t4_ParamLimits

0xa8e4,	// (0x0000a8e4) cell_ituss_key_t4

0x0003,

0xb3c6,	// (0x0000b3c6) cell_ituss_key_t_ParamLimits

0xb3c6,	// (0x0000b3c6) cell_ituss_key_t

0xa91e,	// (0x0000a91e) cell_vkbss_key_3p_pane_g1

0xa926,	// (0x0000a926) cell_vkbss_key_3p_pane_g2

0xa92e,	// (0x0000a92e) cell_vkbss_key_3p_pane_g3

0x0002,

0xb3cf,	// (0x0000b3cf) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa936,	// (0x0000a936) popup_fep_char_pre_window_t1

0xedb7,	// (0x0000edb7) main_ai5_sk_pane

0xa254,	// (0x0000a254) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa260,	// (0x0000a260) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa273,	// (0x0000a273) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa27f,	// (0x0000a27f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb3a5,	// (0x0000b3a5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa291,	// (0x0000a291) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1348,	// (0x00001348) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xef75,	// (0x0000ef75) main_ai5_sk_pane_g1

0x3c9c,	// (0x00003c9c) popup_query_code_window_g1

0xa70d,	// (0x0000a70d) popup_fep_vkb_icf_pane

0xa721,	// (0x0000a721) popup_fep_vtchi_icf_pane

0x1348,	// (0x00001348) bg_icf_pane

0xa94e,	// (0x0000a94e) list_vkb_icf_pane

0x1348,	// (0x00001348) bg_icf_pane_cp01

0xa95a,	// (0x0000a95a) vtchi_icf_list_pane

0xa96b,	// (0x0000a96b) list_vkb_icf_pane_t1_ParamLimits

0xa96b,	// (0x0000a96b) list_vkb_icf_pane_t1

0xa984,	// (0x0000a984) vtchi_icf_list_pane_t1_ParamLimits

0xa984,	// (0x0000a984) vtchi_icf_list_pane_t1

0xa6f7,	// (0x0000a6f7) popup_fep_ituss_window_ParamLimits

0xa721,	// (0x0000a721) popup_fep_vtchi_icf_pane_ParamLimits

0xa747,	// (0x0000a747) ituss_keypad_pane_ParamLimits

0xa757,	// (0x0000a757) ituss_sks_pane

0x1348,	// (0x00001348) bg_icf_pane_ParamLimits

0xa6e0,	// (0x0000a6e0) icf_edit_indi_pane_ParamLimits

0xa6e0,	// (0x0000a6e0) icf_edit_indi_pane

0xa94e,	// (0x0000a94e) list_vkb_icf_pane_ParamLimits

0x1348,	// (0x00001348) bg_icf_pane_cp01_ParamLimits

0xa6e0,	// (0x0000a6e0) icf_edit_indi_pane_cp01_ParamLimits

0xa6e0,	// (0x0000a6e0) icf_edit_indi_pane_cp01

0xa962,	// (0x0000a962) vtchi_query_pane

0x69a9,	// (0x000069a9) icf_edit_indi_pane_g1_ParamLimits

0x69a9,	// (0x000069a9) icf_edit_indi_pane_g1

0xaa11,	// (0x0000aa11) icf_edit_indi_pane_g2_ParamLimits

0xaa11,	// (0x0000aa11) icf_edit_indi_pane_g2

0x0001,

0xb3e7,	// (0x0000b3e7) icf_edit_indi_pane_g_ParamLimits

0xb3e7,	// (0x0000b3e7) icf_edit_indi_pane_g

0xaa20,	// (0x0000aa20) icf_edit_indi_pane_t1

0xa9a7,	// (0x0000a9a7) bg_input_focus_pane_cp042

0x0d20,	// (0x00000d20) vtchi_button_pane

0xa9b0,	// (0x0000a9b0) vtchi_query_pane_t1

0xa9be,	// (0x0000a9be) vtchi_query_pane_t2

0xa9cc,	// (0x0000a9cc) vtchi_query_pane_t3

0x0002,

0xb3d6,	// (0x0000b3d6) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xa9da,	// (0x0000a9da) vtchi_button_pane_g1

0xa9e2,	// (0x0000a9e2) ituss_sks_pane_g1

0xa9ed,	// (0x0000a9ed) ituss_sks_pane_g2

0x0001,

0xb3dd,	// (0x0000b3dd) ituss_sks_pane_g

0xa9f5,	// (0x0000a9f5) ituss_sks_pane_t1

0xaa03,	// (0x0000aa03) ituss_sks_pane_t2

0x0001,

0xb3e2,	// (0x0000b3e2) ituss_sks_pane_t

0x5efa,	// (0x00005efa) indicator_nsta_pane_cp_g1

0x5f03,	// (0x00005f03) indicator_nsta_pane_cp_g2

0x5f0b,	// (0x00005f0b) indicator_nsta_pane_cp_g3

0x5f13,	// (0x00005f13) indicator_nsta_pane_cp_g4

0x5f1b,	// (0x00005f1b) indicator_nsta_pane_cp_g5

0x5f1b,	// (0x00005f1b) indicator_nsta_pane_cp_g6

0x0005,

0xaf8f,	// (0x0000af8f) indicator_nsta_pane_cp_g

0xeb55,	// (0x0000eb55) cell_graphic2_pane_t2_ParamLimits

0xeb55,	// (0x0000eb55) cell_graphic2_pane_t2

0x0001,

0xf1db,	// (0x0000f1db) cell_graphic2_pane_t_ParamLimits

0xf1db,	// (0x0000f1db) cell_graphic2_pane_t

0xeb88,	// (0x0000eb88) cell_graphic2_control_pane_t1

0xbf92,	// (0x0000bf92) signal_pane_g3_ParamLimits

0xbf92,	// (0x0000bf92) signal_pane_g3

0xbfa6,	// (0x0000bfa6) signal_pane_g4_ParamLimits

0xbfa6,	// (0x0000bfa6) signal_pane_g4

0xa6ca,	// (0x0000a6ca) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa6ca,	// (0x0000a6ca) cell_ai5_widget_list_row_pane_t3

0xa831,	// (0x0000a831) cell_ituss_key_pane_t1_ParamLimits

0xa831,	// (0x0000a831) cell_ituss_key_pane_t1

0x3895,	// (0x00003895) form_field_data_wide_pane_vc_t2_ParamLimits

0x3895,	// (0x00003895) form_field_data_wide_pane_vc_t2

0x38a9,	// (0x000038a9) form_field_data_wide_pane_vc_t3_ParamLimits

0x38a9,	// (0x000038a9) form_field_data_wide_pane_vc_t3

0x0002,

0xacd8,	// (0x0000acd8) form_field_data_wide_pane_vc_t_ParamLimits

0xacd8,	// (0x0000acd8) form_field_data_wide_pane_vc_t

0x5bb6,	// (0x00005bb6) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5bb6,	// (0x00005bb6) form_field_slider_wide_pane_vc_t3

0x5c90,	// (0x00005c90) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5c90,	// (0x00005c90) form_field_popup_wide_pane_vc_t2

0x5ca7,	// (0x00005ca7) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5ca7,	// (0x00005ca7) form_field_popup_wide_pane_vc_t3

0x0002,

0xaf7e,	// (0x0000af7e) form_field_popup_wide_pane_vc_t_ParamLimits

0xaf7e,	// (0x0000af7e) form_field_popup_wide_pane_vc_t

0xee55,	// (0x0000ee55) aid_fshwr2_btn_pane_ParamLimits

0xee64,	// (0x0000ee64) aid_fshwr2_syb_pane_ParamLimits

0xee76,	// (0x0000ee76) aid_fshwr2_txt_pane_ParamLimits

0x1348,	// (0x00001348) fshwr2_bg_pane_ParamLimits

0xee85,	// (0x0000ee85) fshwr2_func_candi_pane_ParamLimits

0xee96,	// (0x0000ee96) fshwr2_hwr_syb_pane_ParamLimits

0xeeb1,	// (0x0000eeb1) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

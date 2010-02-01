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
0xb27b,	// (0x0000b27b) Screen

0xb287,	// (0x0000b287) application_window_ParamLimits

0xb287,	// (0x0000b287) application_window

0x002e,	// (0x0000002e) screen_g1

0xb2bf,	// (0x0000b2bf) area_bottom_pane_ParamLimits

0xb2bf,	// (0x0000b2bf) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc893,	// (0x0000c893) battery_pane_ParamLimits

0xc893,	// (0x0000c893) battery_pane

0x404d,	// (0x0000404d) bg_status_flat_pane_g8

0x4055,	// (0x00004055) bg_status_flat_pane_g9

0x31d4,	// (0x000031d4) context_pane_ParamLimits

0x31d4,	// (0x000031d4) context_pane

0xc9fe,	// (0x0000c9fe) navi_pane_ParamLimits

0xc9fe,	// (0x0000c9fe) navi_pane

0xca75,	// (0x0000ca75) signal_pane_ParamLimits

0xca75,	// (0x0000ca75) signal_pane

0x0008,

0xabf5,	// (0x0000abf5) bg_status_flat_pane_g

0xcb05,	// (0x0000cb05) status_pane_g1_ParamLimits

0xcb05,	// (0x0000cb05) status_pane_g1

0xcb1b,	// (0x0000cb1b) status_pane_g2_ParamLimits

0xcb1b,	// (0x0000cb1b) status_pane_g2

0x33f4,	// (0x000033f4) status_pane_g3_ParamLimits

0x33f4,	// (0x000033f4) status_pane_g3

0x0004,

0xf02d,	// (0x0000f02d) status_pane_g_ParamLimits

0xf02d,	// (0x0000f02d) status_pane_g

0xcb27,	// (0x0000cb27) title_pane_ParamLimits

0xcb27,	// (0x0000cb27) title_pane

0xcb88,	// (0x0000cb88) uni_indicator_pane_ParamLimits

0xcb88,	// (0x0000cb88) uni_indicator_pane

0x2a8b,	// (0x00002a8b) bg_list_pane_ParamLimits

0x2a8b,	// (0x00002a8b) bg_list_pane

0xc165,	// (0x0000c165) find_pane

0xc16d,	// (0x0000c16d) listscroll_app_pane_ParamLimits

0xc16d,	// (0x0000c16d) listscroll_app_pane

0x2abf,	// (0x00002abf) listscroll_form_pane

0xc179,	// (0x0000c179) listscroll_gen_pane_ParamLimits

0xc179,	// (0x0000c179) listscroll_gen_pane

0x2abf,	// (0x00002abf) listscroll_set_pane

0x4e33,	// (0x00004e33) main_idle_act_pane

0x257a,	// (0x0000257a) main_idle_trad_pane

0x257a,	// (0x0000257a) main_list_empty_pane

0x2aed,	// (0x00002aed) main_midp_pane

0x2af9,	// (0x00002af9) main_pane_g1_ParamLimits

0x2af9,	// (0x00002af9) main_pane_g1

0xc18d,	// (0x0000c18d) popup_ai_message_window_ParamLimits

0xc18d,	// (0x0000c18d) popup_ai_message_window

0xc21e,	// (0x0000c21e) popup_fep_china_uni_window_ParamLimits

0xc21e,	// (0x0000c21e) popup_fep_china_uni_window

0x2c0b,	// (0x00002c0b) popup_fep_japan_candidate_window_ParamLimits

0x2c0b,	// (0x00002c0b) popup_fep_japan_candidate_window

0x2c29,	// (0x00002c29) popup_fep_japan_predictive_window_ParamLimits

0x2c29,	// (0x00002c29) popup_fep_japan_predictive_window

0xc278,	// (0x0000c278) popup_find_window

0xc295,	// (0x0000c295) popup_grid_graphic_window_ParamLimits

0xc295,	// (0x0000c295) popup_grid_graphic_window

0x2c8c,	// (0x00002c8c) popup_large_graphic_colour_window

0xc327,	// (0x0000c327) popup_menu_window_ParamLimits

0xc327,	// (0x0000c327) popup_menu_window

0xc4f3,	// (0x0000c4f3) popup_note_image_window

0xc4b9,	// (0x0000c4b9) popup_note_wait_window_ParamLimits

0xc4b9,	// (0x0000c4b9) popup_note_wait_window

0xc50b,	// (0x0000c50b) popup_note_window_ParamLimits

0xc50b,	// (0x0000c50b) popup_note_window

0xc5b1,	// (0x0000c5b1) popup_query_code_window_ParamLimits

0xc5b1,	// (0x0000c5b1) popup_query_code_window

0x2ed6,	// (0x00002ed6) popup_query_data_code_window_ParamLimits

0x2ed6,	// (0x00002ed6) popup_query_data_code_window

0xc5eb,	// (0x0000c5eb) popup_query_data_window_ParamLimits

0xc5eb,	// (0x0000c5eb) popup_query_data_window

0xc661,	// (0x0000c661) popup_query_sat_info_window_ParamLimits

0xc661,	// (0x0000c661) popup_query_sat_info_window

0xc6f8,	// (0x0000c6f8) popup_snote_single_graphic_window_ParamLimits

0xc6f8,	// (0x0000c6f8) popup_snote_single_graphic_window

0xc6f8,	// (0x0000c6f8) popup_snote_single_text_window_ParamLimits

0xc6f8,	// (0x0000c6f8) popup_snote_single_text_window

0x2f53,	// (0x00002f53) popup_sub_window_general

0x3081,	// (0x00003081) popup_window_general_ParamLimits

0x3081,	// (0x00003081) popup_window_general

0x3096,	// (0x00003096) power_save_pane

0xbfd3,	// (0x0000bfd3) control_pane_g1_ParamLimits

0xbfd3,	// (0x0000bfd3) control_pane_g1

0xbffc,	// (0x0000bffc) control_pane_g2_ParamLimits

0xbffc,	// (0x0000bffc) control_pane_g2

0x2932,	// (0x00002932) control_pane_g3_ParamLimits

0x2932,	// (0x00002932) control_pane_g3

0x0007,

0xf015,	// (0x0000f015) control_pane_g_ParamLimits

0xf015,	// (0x0000f015) control_pane_g

0xc05e,	// (0x0000c05e) control_pane_t1_ParamLimits

0xc05e,	// (0x0000c05e) control_pane_t1

0xc0bc,	// (0x0000c0bc) control_pane_t2_ParamLimits

0xc0bc,	// (0x0000c0bc) control_pane_t2

0x0002,

0xf026,	// (0x0000f026) control_pane_t_ParamLimits

0xf026,	// (0x0000f026) control_pane_t

0x2809,	// (0x00002809) navi_navi_volume_pane_cp1

0x2812,	// (0x00002812) status_small_icon_pane

0x281a,	// (0x0000281a) status_small_pane_g1_ParamLimits

0x281a,	// (0x0000281a) status_small_pane_g1

0x284e,	// (0x0000284e) status_small_pane_g2_ParamLimits

0x284e,	// (0x0000284e) status_small_pane_g2

0x285a,	// (0x0000285a) status_small_pane_g3_ParamLimits

0x285a,	// (0x0000285a) status_small_pane_g3

0x2866,	// (0x00002866) status_small_pane_g4_ParamLimits

0x2866,	// (0x00002866) status_small_pane_g4

0x2872,	// (0x00002872) status_small_pane_g5_ParamLimits

0x2872,	// (0x00002872) status_small_pane_g5

0x2881,	// (0x00002881) status_small_pane_g6_ParamLimits

0x2881,	// (0x00002881) status_small_pane_g6

0x0007,

0xab01,	// (0x0000ab01) status_small_pane_g_ParamLimits

0xab01,	// (0x0000ab01) status_small_pane_g

0x28b1,	// (0x000028b1) status_small_pane_t1

0x28d4,	// (0x000028d4) status_small_wait_pane_ParamLimits

0x28d4,	// (0x000028d4) status_small_wait_pane

0xbde8,	// (0x0000bde8) aid_levels_signal_ParamLimits

0xbde8,	// (0x0000bde8) aid_levels_signal

0xbe00,	// (0x0000be00) signal_pane_g1_ParamLimits

0xbe00,	// (0x0000be00) signal_pane_g1

0xbe1b,	// (0x0000be1b) signal_pane_g2_ParamLimits

0xbe1b,	// (0x0000be1b) signal_pane_g2

0x0001,

0xeff9,	// (0x0000eff9) signal_pane_g_ParamLimits

0xeff9,	// (0x0000eff9) signal_pane_g

0x1e27,	// (0x00001e27) context_pane_g1

0xb438,	// (0x0000b438) title_pane_g1

0xb46d,	// (0x0000b46d) title_pane_t1

0x04b1,	// (0x000004b1) title_pane_t2

0x04d7,	// (0x000004d7) title_pane_t3

0x0002,

0xef2b,	// (0x0000ef2b) title_pane_t

0xcbb0,	// (0x0000cbb0) aid_levels_battery_ParamLimits

0xcbb0,	// (0x0000cbb0) aid_levels_battery

0xcbcc,	// (0x0000cbcc) battery_pane_g1_ParamLimits

0xcbcc,	// (0x0000cbcc) battery_pane_g1

0xcbe9,	// (0x0000cbe9) battery_pane_g2_ParamLimits

0xcbe9,	// (0x0000cbe9) battery_pane_g2

0x0001,

0xf038,	// (0x0000f038) battery_pane_g_ParamLimits

0xf038,	// (0x0000f038) battery_pane_g

0xd009,	// (0x0000d009) uni_indicator_pane_g1

0xd01e,	// (0x0000d01e) uni_indicator_pane_g2

0xd033,	// (0x0000d033) uni_indicator_pane_g3

0x0005,

0xf089,	// (0x0000f089) uni_indicator_pane_g

0x23ea,	// (0x000023ea) navi_icon_pane_ParamLimits

0x23ea,	// (0x000023ea) navi_icon_pane

0x2331,	// (0x00002331) navi_midp_pane

0x2406,	// (0x00002406) navi_navi_pane

0x2410,	// (0x00002410) navi_text_pane_ParamLimits

0x2410,	// (0x00002410) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09a1,	// (0x000009a1) status_small_wait_pane_g2

0x0001,

0xac98,	// (0x0000ac98) status_small_wait_pane_g

0xcfa8,	// (0x0000cfa8) navi_navi_icon_text_pane

0xcfb0,	// (0x0000cfb0) navi_navi_pane_g1_ParamLimits

0xcfb0,	// (0x0000cfb0) navi_navi_pane_g1

0xcfc2,	// (0x0000cfc2) navi_navi_pane_g2_ParamLimits

0xcfc2,	// (0x0000cfc2) navi_navi_pane_g2

0x0001,

0xf084,	// (0x0000f084) navi_navi_pane_g_ParamLimits

0xf084,	// (0x0000f084) navi_navi_pane_g

0x4836,	// (0x00004836) navi_navi_tabs_pane

0xcfd4,	// (0x0000cfd4) navi_navi_text_pane

0xcfa8,	// (0x0000cfa8) navi_navi_volume_pane

0xcf96,	// (0x0000cf96) navi_text_pane_t1

0xcf8a,	// (0x0000cf8a) navi_icon_pane_g1

0x4727,	// (0x00004727) navi_navi_text_pane_t1

0xcf79,	// (0x0000cf79) navi_navi_volume_pane_g1

0xcf81,	// (0x0000cf81) volume_small_pane

0xced5,	// (0x0000ced5) navi_navi_icon_text_pane_g1

0xcedd,	// (0x0000cedd) navi_navi_icon_text_pane_t1

0x2406,	// (0x00002406) navi_tabs_2_long_pane

0x2406,	// (0x00002406) navi_tabs_2_pane

0x2406,	// (0x00002406) navi_tabs_3_long_pane

0x2406,	// (0x00002406) navi_tabs_3_pane

0x2406,	// (0x00002406) navi_tabs_4_pane

0xceb5,	// (0x0000ceb5) tabs_2_active_pane_ParamLimits

0xceb5,	// (0x0000ceb5) tabs_2_active_pane

0xcec5,	// (0x0000cec5) tabs_2_passive_pane_ParamLimits

0xcec5,	// (0x0000cec5) tabs_2_passive_pane

0xce83,	// (0x0000ce83) tabs_3_active_pane_ParamLimits

0xce83,	// (0x0000ce83) tabs_3_active_pane

0xce93,	// (0x0000ce93) tabs_3_passive_pane_ParamLimits

0xce93,	// (0x0000ce93) tabs_3_passive_pane

0xcea4,	// (0x0000cea4) tabs_3_passive_pane_cp_ParamLimits

0xcea4,	// (0x0000cea4) tabs_3_passive_pane_cp

0xce3f,	// (0x0000ce3f) tabs_4_active_pane_ParamLimits

0xce3f,	// (0x0000ce3f) tabs_4_active_pane

0xce50,	// (0x0000ce50) tabs_4_passive_pane_ParamLimits

0xce50,	// (0x0000ce50) tabs_4_passive_pane

0xce61,	// (0x0000ce61) tabs_4_passive_pane_cp_ParamLimits

0xce61,	// (0x0000ce61) tabs_4_passive_pane_cp

0xce72,	// (0x0000ce72) tabs_4_passive_pane_cp2_ParamLimits

0xce72,	// (0x0000ce72) tabs_4_passive_pane_cp2

0xce1f,	// (0x0000ce1f) tabs_2_long_active_pane_ParamLimits

0xce1f,	// (0x0000ce1f) tabs_2_long_active_pane

0xce2f,	// (0x0000ce2f) tabs_2_long_passive_pane_ParamLimits

0xce2f,	// (0x0000ce2f) tabs_2_long_passive_pane

0xcdea,	// (0x0000cdea) tabs_3_long_active_pane_ParamLimits

0xcdea,	// (0x0000cdea) tabs_3_long_active_pane

0xcdfb,	// (0x0000cdfb) tabs_3_long_passive_pane_ParamLimits

0xcdfb,	// (0x0000cdfb) tabs_3_long_passive_pane

0xce0e,	// (0x0000ce0e) tabs_3_long_passive_pane_cp_ParamLimits

0xce0e,	// (0x0000ce0e) tabs_3_long_passive_pane_cp

0x44a2,	// (0x000044a2) volume_small_pane_g1

0xcd99,	// (0x0000cd99) volume_small_pane_g2

0xcda2,	// (0x0000cda2) volume_small_pane_g3

0xcdab,	// (0x0000cdab) volume_small_pane_g4

0xcdb4,	// (0x0000cdb4) volume_small_pane_g5

0xcdbd,	// (0x0000cdbd) volume_small_pane_g6

0xcdc6,	// (0x0000cdc6) volume_small_pane_g7

0xcdcf,	// (0x0000cdcf) volume_small_pane_g8

0xcdd8,	// (0x0000cdd8) volume_small_pane_g9

0xcde1,	// (0x0000cde1) volume_small_pane_g10

0x0009,

0xf05a,	// (0x0000f05a) volume_small_pane_g

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2

0xb4f9,	// (0x0000b4f9) tabs_3_active_pane_g1

0xb501,	// (0x0000b501) tabs_3_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp2_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp2

0xb4f9,	// (0x0000b4f9) tabs_3_passive_pane_g1

0xb501,	// (0x0000b501) tabs_3_passive_pane_t1

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3

0xb513,	// (0x0000b513) tabs_4_active_pane_g1

0xb51b,	// (0x0000b51b) tabs_4_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp3_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp3

0xb513,	// (0x0000b513) tabs_4_1_passive_pane_g1

0xb51b,	// (0x0000b51b) tabs_4_1_passive_pane_t1

0x2aed,	// (0x00002aed) list_highlight_pane_cp2

0xd0d2,	// (0x0000d0d2) list_set_pane_ParamLimits

0xd0d2,	// (0x0000d0d2) list_set_pane

0xd16c,	// (0x0000d16c) main_pane_set_t1_ParamLimits

0xd16c,	// (0x0000d16c) main_pane_set_t1

0xd18c,	// (0x0000d18c) main_pane_set_t2_ParamLimits

0xd18c,	// (0x0000d18c) main_pane_set_t2

0xd1a0,	// (0x0000d1a0) main_pane_set_t3_ParamLimits

0xd1a0,	// (0x0000d1a0) main_pane_set_t3

0xd1b2,	// (0x0000d1b2) main_pane_set_t4_ParamLimits

0xd1b2,	// (0x0000d1b2) main_pane_set_t4

0x0003,

0xf09b,	// (0x0000f09b) main_pane_set_t_ParamLimits

0xf09b,	// (0x0000f09b) main_pane_set_t

0xd1c4,	// (0x0000d1c4) setting_code_pane

0xd1cc,	// (0x0000d1cc) setting_slider_graphic_pane

0xd1cc,	// (0x0000d1cc) setting_slider_pane

0xd1cc,	// (0x0000d1cc) setting_text_pane

0xd1cc,	// (0x0000d1cc) setting_volume_pane

0x052b,	// (0x0000052b) volume_set_pane

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp

0x0533,	// (0x00000533) setting_slider_pane_t1

0x054c,	// (0x0000054c) setting_slider_pane_t2

0x0565,	// (0x00000565) setting_slider_pane_t3

0x0002,

0xa8f1,	// (0x0000a8f1) setting_slider_pane_t

0x057c,	// (0x0000057c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x0592,	// (0x00000592) setting_slider_graphic_pane_g1

0x059b,	// (0x0000059b) setting_slider_graphic_pane_t1

0x05aa,	// (0x000005aa) setting_slider_graphic_pane_t2

0x0001,

0xa8f8,	// (0x0000a8f8) setting_slider_graphic_pane_t

0x05b9,	// (0x000005b9) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4e1a,	// (0x00004e1a) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05c1,	// (0x000005c1) setting_code_pane_t1

0x05cf,	// (0x000005cf) set_text_pane_t1_ParamLimits

0x05cf,	// (0x000005cf) set_text_pane_t1

0x148b,	// (0x0000148b) set_opt_bg_pane_g1

0x1493,	// (0x00001493) set_opt_bg_pane_g2

0x4dfa,	// (0x00004dfa) set_opt_bg_pane_g3

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6

0x4e02,	// (0x00004e02) set_opt_bg_pane_g7

0x4e0a,	// (0x00004e0a) set_opt_bg_pane_g8

0x4e12,	// (0x00004e12) set_opt_bg_pane_g9

0x0008,

0xacef,	// (0x0000acef) set_opt_bg_pane_g

0x4d89,	// (0x00004d89) slider_set_pane_g1

0x4d96,	// (0x00004d96) slider_set_pane_g2

0x0006,

0xace0,	// (0x0000ace0) slider_set_pane_g

0x4c09,	// (0x00004c09) volume_set_pane_g1

0x4c11,	// (0x00004c11) volume_set_pane_g2

0x4c19,	// (0x00004c19) volume_set_pane_g3

0x4c21,	// (0x00004c21) volume_set_pane_g4

0x4c29,	// (0x00004c29) volume_set_pane_g5

0x4c31,	// (0x00004c31) volume_set_pane_g6

0x4c39,	// (0x00004c39) volume_set_pane_g7

0x4c41,	// (0x00004c41) volume_set_pane_g8

0x4c49,	// (0x00004c49) volume_set_pane_g9

0x4c51,	// (0x00004c51) volume_set_pane_g10

0x0009,

0xacb8,	// (0x0000acb8) volume_set_pane_g

0xb52d,	// (0x0000b52d) indicator_pane_ParamLimits

0xb52d,	// (0x0000b52d) indicator_pane

0xb555,	// (0x0000b555) main_idle_pane_g2_ParamLimits

0xb555,	// (0x0000b555) main_idle_pane_g2

0xb58d,	// (0x0000b58d) main_pane_idle_g1_ParamLimits

0xb58d,	// (0x0000b58d) main_pane_idle_g1

0x062a,	// (0x0000062a) popup_clock_digital_analogue_window_ParamLimits

0x062a,	// (0x0000062a) popup_clock_digital_analogue_window

0xb5b4,	// (0x0000b5b4) soft_indicator_pane_ParamLimits

0xb5b4,	// (0x0000b5b4) soft_indicator_pane

0xb5ce,	// (0x0000b5ce) wallpaper_pane_ParamLimits

0xb5ce,	// (0x0000b5ce) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb5e0,	// (0x0000b5e0) indicator_pane_g1_ParamLimits

0xb5e0,	// (0x0000b5e0) indicator_pane_g1

0x5374,	// (0x00005374) navi_navi_icon_text_pane_srt_g1

0x067c,	// (0x0000067c) soft_indicator_pane_t1

0x0696,	// (0x00000696) aid_ps_area_pane

0xb5f9,	// (0x0000b5f9) aid_ps_clock_pane

0x06b5,	// (0x000006b5) aid_ps_indicator_pane

0x06c1,	// (0x000006c1) indicator_ps_pane_ParamLimits

0x06c1,	// (0x000006c1) indicator_ps_pane

0x06d0,	// (0x000006d0) power_save_pane_g1_ParamLimits

0x06d0,	// (0x000006d0) power_save_pane_g1

0x06dc,	// (0x000006dc) power_save_pane_g2_ParamLimits

0x06dc,	// (0x000006dc) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x0696,	// (0x00000696) aid_ps_area_pane_ParamLimits

0x0001,

0xa8fd,	// (0x0000a8fd) power_save_pane_g_ParamLimits

0xa8fd,	// (0x0000a8fd) power_save_pane_g

0x06ea,	// (0x000006ea) power_save_pane_t1_ParamLimits

0x06ea,	// (0x000006ea) power_save_pane_t1

0xb5f9,	// (0x0000b5f9) aid_ps_clock_pane_ParamLimits

0x06b5,	// (0x000006b5) aid_ps_indicator_pane_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_t4_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_t4

0x0001,

0xa902,	// (0x0000a902) power_save_pane_t_ParamLimits

0xa902,	// (0x0000a902) power_save_pane_t

0x0726,	// (0x00000726) power_save_t3_ParamLimits

0x0726,	// (0x00000726) power_save_t3

0x0711,	// (0x00000711) power_save_t2_ParamLimits

0x0711,	// (0x00000711) power_save_t2

0x073b,	// (0x0000073b) indicator_ps_pane_g1

0xb607,	// (0x0000b607) ai_gene_pane_ParamLimits

0xb607,	// (0x0000b607) ai_gene_pane

0xb61e,	// (0x0000b61e) ai_links_pane_ParamLimits

0xb61e,	// (0x0000b61e) ai_links_pane

0xb636,	// (0x0000b636) indicator_pane_cp1_ParamLimits

0xb636,	// (0x0000b636) indicator_pane_cp1

0xb645,	// (0x0000b645) main_pane_idle_g1_cp_ParamLimits

0xb645,	// (0x0000b645) main_pane_idle_g1_cp

0x0774,	// (0x00000774) popup_ai_links_title_window

0xb65d,	// (0x0000b65d) soft_indicator_pane_cp1_ParamLimits

0xb65d,	// (0x0000b65d) soft_indicator_pane_cp1

0x4ad5,	// (0x00004ad5) ai_links_pane_g1

0x4ade,	// (0x00004ade) grid_ai_links_pane

0xd000,	// (0x0000d000) ai_gene_pane_1

0x4ac3,	// (0x00004ac3) ai_gene_pane_2

0x4acc,	// (0x00004acc) list_highlight_pane_cp4

0xcfdc,	// (0x0000cfdc) cell_ai_link_pane_ParamLimits

0xcfdc,	// (0x0000cfdc) cell_ai_link_pane

0x4a94,	// (0x00004a94) cell_ai_link_pane_g1

0x09a1,	// (0x000009a1) cell_ai_link_pane_g2

0x0001,

0xac93,	// (0x0000ac93) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x0797,	// (0x00000797) popup_ai_links_title_window_t1

0x49e2,	// (0x000049e2) ai_gene_pane_1_g1_ParamLimits

0x49e2,	// (0x000049e2) ai_gene_pane_1_g1

0x49ee,	// (0x000049ee) ai_gene_pane_1_g2_ParamLimits

0x49ee,	// (0x000049ee) ai_gene_pane_1_g2

0x0001,

0xac89,	// (0x0000ac89) ai_gene_pane_1_g_ParamLimits

0xac89,	// (0x0000ac89) ai_gene_pane_1_g

0x49fb,	// (0x000049fb) ai_gene_pane_1_t1_ParamLimits

0x49fb,	// (0x000049fb) ai_gene_pane_1_t1

0x4a2f,	// (0x00004a2f) grid_ai_soft_ind_pane

0x49cd,	// (0x000049cd) ai_gene_pane_2_t1_ParamLimits

0x49cd,	// (0x000049cd) ai_gene_pane_2_t1

0xb671,	// (0x0000b671) main_pane_empty_t1_ParamLimits

0xb671,	// (0x0000b671) main_pane_empty_t1

0xb689,	// (0x0000b689) main_pane_empty_t2_ParamLimits

0xb689,	// (0x0000b689) main_pane_empty_t2

0xb69e,	// (0x0000b69e) main_pane_empty_t3_ParamLimits

0xb69e,	// (0x0000b69e) main_pane_empty_t3

0xb6b0,	// (0x0000b6b0) main_pane_empty_t4_ParamLimits

0xb6b0,	// (0x0000b6b0) main_pane_empty_t4

0xb6c2,	// (0x0000b6c2) main_pane_empty_t5_ParamLimits

0xb6c2,	// (0x0000b6c2) main_pane_empty_t5

0x0004,

0xef32,	// (0x0000ef32) main_pane_empty_t_ParamLimits

0xef32,	// (0x0000ef32) main_pane_empty_t

0x1584,	// (0x00001584) bg_popup_window_pane_ParamLimits

0x1584,	// (0x00001584) bg_popup_window_pane

0x4735,	// (0x00004735) find_popup_pane_cp2_ParamLimits

0x4735,	// (0x00004735) find_popup_pane_cp2

0x4741,	// (0x00004741) heading_pane_ParamLimits

0x4741,	// (0x00004741) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xcefa,	// (0x0000cefa) bg_popup_window_pane_g1_ParamLimits

0xcefa,	// (0x0000cefa) bg_popup_window_pane_g1

0xcf09,	// (0x0000cf09) bg_popup_window_pane_g2_ParamLimits

0xcf09,	// (0x0000cf09) bg_popup_window_pane_g2

0xcf15,	// (0x0000cf15) bg_popup_window_pane_g3_ParamLimits

0xcf15,	// (0x0000cf15) bg_popup_window_pane_g3

0xcf21,	// (0x0000cf21) bg_popup_window_pane_g4_ParamLimits

0xcf21,	// (0x0000cf21) bg_popup_window_pane_g4

0xcf30,	// (0x0000cf30) bg_popup_window_pane_g5_ParamLimits

0xcf30,	// (0x0000cf30) bg_popup_window_pane_g5

0xcf40,	// (0x0000cf40) bg_popup_window_pane_g6_ParamLimits

0xcf40,	// (0x0000cf40) bg_popup_window_pane_g6

0xcf4c,	// (0x0000cf4c) bg_popup_window_pane_g7_ParamLimits

0xcf4c,	// (0x0000cf4c) bg_popup_window_pane_g7

0xcf5b,	// (0x0000cf5b) bg_popup_window_pane_g8_ParamLimits

0xcf5b,	// (0x0000cf5b) bg_popup_window_pane_g8

0xcf6a,	// (0x0000cf6a) bg_popup_window_pane_g9_ParamLimits

0xcf6a,	// (0x0000cf6a) bg_popup_window_pane_g9

0x470a,	// (0x0000470a) bg_popup_window_pane_g10_ParamLimits

0x470a,	// (0x0000470a) bg_popup_window_pane_g10

0x0009,

0xf06f,	// (0x0000f06f) bg_popup_window_pane_g_ParamLimits

0xf06f,	// (0x0000f06f) bg_popup_window_pane_g

0x4633,	// (0x00004633) bg_popup_heading_pane_ParamLimits

0x4633,	// (0x00004633) bg_popup_heading_pane

0x52b7,	// (0x000052b7) tabs_4_passive_pane_cp_srt_ParamLimits

0x52b7,	// (0x000052b7) tabs_4_passive_pane_cp_srt

0x52c9,	// (0x000052c9) tabs_4_passive_pane_srt_ParamLimits

0x4647,	// (0x00004647) heading_pane_g2

0x52c9,	// (0x000052c9) tabs_4_passive_pane_srt

0x37a7,	// (0x000037a7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x37a7,	// (0x000037a7) bg_passive_tab_pane_cp3_srt

0x464f,	// (0x0000464f) heading_pane_t1_ParamLimits

0x464f,	// (0x0000464f) heading_pane_t1

0x4666,	// (0x00004666) heading_pane_t2_ParamLimits

0x4666,	// (0x00004666) heading_pane_t2

0x0001,

0xac4c,	// (0x0000ac4c) heading_pane_t_ParamLimits

0xac4c,	// (0x0000ac4c) heading_pane_t

0x4015,	// (0x00004015) bg_popup_heading_pane_g1

0x40c4,	// (0x000040c4) bg_popup_heading_pane_g2

0x40ce,	// (0x000040ce) bg_popup_heading_pane_g3

0x40d8,	// (0x000040d8) bg_popup_heading_pane_g4

0x40e2,	// (0x000040e2) bg_popup_heading_pane_g5

0x40ec,	// (0x000040ec) bg_popup_heading_pane_g6

0x40f4,	// (0x000040f4) bg_popup_heading_pane_g7

0x40fc,	// (0x000040fc) bg_popup_heading_pane_g8

0x4106,	// (0x00004106) bg_popup_heading_pane_g9

0x0008,

0xac08,	// (0x0000ac08) bg_popup_heading_pane_g

0x3617,	// (0x00003617) bg_popup_sub_pane_g1

0x361f,	// (0x0000361f) bg_popup_sub_pane_g2

0x3627,	// (0x00003627) bg_popup_sub_pane_g3

0x362f,	// (0x0000362f) bg_popup_sub_pane_g4

0x3637,	// (0x00003637) bg_popup_sub_pane_g5

0x363f,	// (0x0000363f) bg_popup_sub_pane_g6

0x3647,	// (0x00003647) bg_popup_sub_pane_g7

0x364f,	// (0x0000364f) bg_popup_sub_pane_g8

0x3657,	// (0x00003657) bg_popup_sub_pane_g9

0x0008,

0xabe2,	// (0x0000abe2) bg_popup_sub_pane_g

0x080b,	// (0x0000080b) bg_popup_window_pane_cp5_ParamLimits

0x080b,	// (0x0000080b) bg_popup_window_pane_cp5

0x0827,	// (0x00000827) popup_note_window_g1_ParamLimits

0x0827,	// (0x00000827) popup_note_window_g1

0x0833,	// (0x00000833) popup_note_window_t1_ParamLimits

0x0833,	// (0x00000833) popup_note_window_t1

0x0845,	// (0x00000845) popup_note_window_t2_ParamLimits

0x0845,	// (0x00000845) popup_note_window_t2

0x0857,	// (0x00000857) popup_note_window_t3_ParamLimits

0x0857,	// (0x00000857) popup_note_window_t3

0x0869,	// (0x00000869) popup_note_window_t4_ParamLimits

0x0869,	// (0x00000869) popup_note_window_t4

0x0891,	// (0x00000891) popup_note_window_t5_ParamLimits

0x0891,	// (0x00000891) popup_note_window_t5

0x0004,

0xa912,	// (0x0000a912) popup_note_window_t_ParamLimits

0xa912,	// (0x0000a912) popup_note_window_t

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp6_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp6

0x3f89,	// (0x00003f89) popup_note_image_window_g1_ParamLimits

0x3f89,	// (0x00003f89) popup_note_image_window_g1

0x3f95,	// (0x00003f95) popup_note_image_window_g2_ParamLimits

0x3f95,	// (0x00003f95) popup_note_image_window_g2

0x0001,

0xabd6,	// (0x0000abd6) popup_note_image_window_g_ParamLimits

0xabd6,	// (0x0000abd6) popup_note_image_window_g

0x3fae,	// (0x00003fae) popup_note_image_window_t1_ParamLimits

0x3fae,	// (0x00003fae) popup_note_image_window_t1

0x3fc7,	// (0x00003fc7) popup_note_image_window_t2_ParamLimits

0x3fc7,	// (0x00003fc7) popup_note_image_window_t2

0x3fe0,	// (0x00003fe0) popup_note_image_window_t3_ParamLimits

0x3fe0,	// (0x00003fe0) popup_note_image_window_t3

0x0002,

0xabdb,	// (0x0000abdb) popup_note_image_window_t_ParamLimits

0xabdb,	// (0x0000abdb) popup_note_image_window_t

0x3e4a,	// (0x00003e4a) bg_popup_window_pane_cp7_ParamLimits

0x3e4a,	// (0x00003e4a) bg_popup_window_pane_cp7

0x3e7a,	// (0x00003e7a) popup_note_wait_window_g1_ParamLimits

0x3e7a,	// (0x00003e7a) popup_note_wait_window_g1

0x3e86,	// (0x00003e86) popup_note_wait_window_g2_ParamLimits

0x3e86,	// (0x00003e86) popup_note_wait_window_g2

0x0002,

0xabc4,	// (0x0000abc4) popup_note_wait_window_g_ParamLimits

0xabc4,	// (0x0000abc4) popup_note_wait_window_g

0x3e9e,	// (0x00003e9e) popup_note_wait_window_t1_ParamLimits

0x3e9e,	// (0x00003e9e) popup_note_wait_window_t1

0x3ec5,	// (0x00003ec5) popup_note_wait_window_t2_ParamLimits

0x3ec5,	// (0x00003ec5) popup_note_wait_window_t2

0x3ee2,	// (0x00003ee2) popup_note_wait_window_t3_ParamLimits

0x3ee2,	// (0x00003ee2) popup_note_wait_window_t3

0x3ef5,	// (0x00003ef5) popup_note_wait_window_t4_ParamLimits

0x3ef5,	// (0x00003ef5) popup_note_wait_window_t4

0x0004,

0xabcb,	// (0x0000abcb) popup_note_wait_window_t_ParamLimits

0xabcb,	// (0x0000abcb) popup_note_wait_window_t

0x3f1a,	// (0x00003f1a) wait_bar_pane_ParamLimits

0x3f1a,	// (0x00003f1a) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xaa91,	// (0x0000aa91) wait_anim_pane_g

0x3dee,	// (0x00003dee) wait_border_pane_g1

0x3df9,	// (0x00003df9) wait_border_pane_g2

0x3e02,	// (0x00003e02) wait_border_pane_g3

0x0002,

0xabbd,	// (0x0000abbd) wait_border_pane_g

0x3c5e,	// (0x00003c5e) bg_popup_window_pane_cp16_ParamLimits

0x3c5e,	// (0x00003c5e) bg_popup_window_pane_cp16

0x3d5e,	// (0x00003d5e) indicator_popup_pane_cp4_ParamLimits

0x3d5e,	// (0x00003d5e) indicator_popup_pane_cp4

0x3d72,	// (0x00003d72) popup_query_data_window_t1_ParamLimits

0x3d72,	// (0x00003d72) popup_query_data_window_t1

0x3d84,	// (0x00003d84) popup_query_data_window_t2_ParamLimits

0x3d84,	// (0x00003d84) popup_query_data_window_t2

0x3d9d,	// (0x00003d9d) popup_query_data_window_t3_ParamLimits

0x3d9d,	// (0x00003d9d) popup_query_data_window_t3

0x0002,

0xabb6,	// (0x0000abb6) popup_query_data_window_t_ParamLimits

0xabb6,	// (0x0000abb6) popup_query_data_window_t

0x3db7,	// (0x00003db7) query_popup_data_pane_ParamLimits

0x3db7,	// (0x00003db7) query_popup_data_pane

0x3dcb,	// (0x00003dcb) query_popup_data_pane_cp1_ParamLimits

0x3dcb,	// (0x00003dcb) query_popup_data_pane_cp1

0x3c5e,	// (0x00003c5e) bg_popup_window_pane_cp10_ParamLimits

0x3c5e,	// (0x00003c5e) bg_popup_window_pane_cp10

0x3c90,	// (0x00003c90) indicator_popup_pane_ParamLimits

0x3c90,	// (0x00003c90) indicator_popup_pane

0x3cb2,	// (0x00003cb2) popup_query_code_window_t1_ParamLimits

0x3cb2,	// (0x00003cb2) popup_query_code_window_t1

0x3ccc,	// (0x00003ccc) popup_query_code_window_t2_ParamLimits

0x3ccc,	// (0x00003ccc) popup_query_code_window_t2

0x3d15,	// (0x00003d15) popup_query_code_window_t3_ParamLimits

0x3d15,	// (0x00003d15) popup_query_code_window_t3

0x0002,

0xabaf,	// (0x0000abaf) popup_query_code_window_t_ParamLimits

0xabaf,	// (0x0000abaf) popup_query_code_window_t

0x3d44,	// (0x00003d44) query_popup_pane_ParamLimits

0x3d44,	// (0x00003d44) query_popup_pane

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp15_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp15

0x08d3,	// (0x000008d3) indicator_popup_pane_cp1_ParamLimits

0x08d3,	// (0x000008d3) indicator_popup_pane_cp1

0x08e6,	// (0x000008e6) indicator_popup_pane_cp2_ParamLimits

0x08e6,	// (0x000008e6) indicator_popup_pane_cp2

0x08f9,	// (0x000008f9) popup_query_data_code_window_g1_ParamLimits

0x08f9,	// (0x000008f9) popup_query_data_code_window_g1

0x090c,	// (0x0000090c) popup_query_data_code_window_t1_ParamLimits

0x090c,	// (0x0000090c) popup_query_data_code_window_t1

0x091e,	// (0x0000091e) popup_query_data_code_window_t2_ParamLimits

0x091e,	// (0x0000091e) popup_query_data_code_window_t2

0x0930,	// (0x00000930) popup_query_data_code_window_t3_ParamLimits

0x0930,	// (0x00000930) popup_query_data_code_window_t3

0x0946,	// (0x00000946) popup_query_data_code_window_t4_ParamLimits

0x0946,	// (0x00000946) popup_query_data_code_window_t4

0x0003,

0xa91d,	// (0x0000a91d) popup_query_data_code_window_t_ParamLimits

0xa91d,	// (0x0000a91d) popup_query_data_code_window_t

0x23a6,	// (0x000023a6) list_single_midp_graphic_pane_g3

0x095e,	// (0x0000095e) query_popup_data_pane_cp2_ParamLimits

0x0971,	// (0x00000971) query_popup_pane_cp2_ParamLimits

0x0971,	// (0x00000971) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c56,	// (0x00003c56) heading_pane_cp5

0x0a59,	// (0x00000a59) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x0984,	// (0x00000984) query_popup_pane_t1

0x0992,	// (0x00000992) list_popup_info_pane_ParamLimits

0x0992,	// (0x00000992) list_popup_info_pane

0x09a1,	// (0x000009a1) listscroll_popup_info_pane_g1

0x09a9,	// (0x000009a9) scroll_pane_cp7

0x09b3,	// (0x000009b3) popup_info_list_pane_t1_ParamLimits

0x09b3,	// (0x000009b3) popup_info_list_pane_t1

0x09cd,	// (0x000009cd) popup_info_list_pane_t2_ParamLimits

0x09cd,	// (0x000009cd) popup_info_list_pane_t2

0x0001,

0xa926,	// (0x0000a926) popup_info_list_pane_t_ParamLimits

0xa926,	// (0x0000a926) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x53ab,	// (0x000053ab) find_popup_pane

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp3

0x09e7,	// (0x000009e7) heading_pane_cp3

0x09f3,	// (0x000009f3) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb724,	// (0x0000b724) heading_pane_cp4

0x0a59,	// (0x00000a59) listscroll_popup_colour_pane

0x0a61,	// (0x00000a61) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a61,	// (0x00000a61) cell_large_graphic_colour_none_popup_pane

0xb72c,	// (0x0000b72c) grid_large_graphic_colour_popup_pane_ParamLimits

0xb72c,	// (0x0000b72c) grid_large_graphic_colour_popup_pane

0x0a99,	// (0x00000a99) listscroll_popup_colour_pane_g1_ParamLimits

0x0a99,	// (0x00000a99) listscroll_popup_colour_pane_g1

0x0ab0,	// (0x00000ab0) listscroll_popup_colour_pane_g2_ParamLimits

0x0ab0,	// (0x00000ab0) listscroll_popup_colour_pane_g2

0x0ac7,	// (0x00000ac7) listscroll_popup_colour_pane_g3_ParamLimits

0x0ac7,	// (0x00000ac7) listscroll_popup_colour_pane_g3

0xb750,	// (0x0000b750) listscroll_popup_colour_pane_g4_ParamLimits

0xb750,	// (0x0000b750) listscroll_popup_colour_pane_g4

0x0003,

0xef3d,	// (0x0000ef3d) listscroll_popup_colour_pane_g_ParamLimits

0xef3d,	// (0x0000ef3d) listscroll_popup_colour_pane_g

0x0ae6,	// (0x00000ae6) scroll_pane_cp6_ParamLimits

0x0ae6,	// (0x00000ae6) scroll_pane_cp6

0xb75f,	// (0x0000b75f) cell_large_graphic_colour_popup_pane_ParamLimits

0xb75f,	// (0x0000b75f) cell_large_graphic_colour_popup_pane

0x0b17,	// (0x00000b17) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b26,	// (0x00000b26) cell_large_graphic_colour_popup_pane_g1

0x0b2e,	// (0x00000b2e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa934,	// (0x0000a934) cell_large_graphic_colour_popup_pane_g

0x0b36,	// (0x00000b36) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp4

0x0b47,	// (0x00000b47) bg_popup_window_pane_cp8_ParamLimits

0x0b47,	// (0x00000b47) bg_popup_window_pane_cp8

0x0b62,	// (0x00000b62) popup_snote_single_text_window_g1_ParamLimits

0x0b62,	// (0x00000b62) popup_snote_single_text_window_g1

0x0b74,	// (0x00000b74) popup_snote_single_text_window_t1_ParamLimits

0x0b74,	// (0x00000b74) popup_snote_single_text_window_t1

0x0b87,	// (0x00000b87) popup_snote_single_text_window_t2_ParamLimits

0x0b87,	// (0x00000b87) popup_snote_single_text_window_t2

0x0b9a,	// (0x00000b9a) popup_snote_single_text_window_t3_ParamLimits

0x0b9a,	// (0x00000b9a) popup_snote_single_text_window_t3

0x0bd3,	// (0x00000bd3) popup_snote_single_text_window_t4_ParamLimits

0x0bd3,	// (0x00000bd3) popup_snote_single_text_window_t4

0x0c07,	// (0x00000c07) popup_snote_single_text_window_t5_ParamLimits

0x0c07,	// (0x00000c07) popup_snote_single_text_window_t5

0x0004,

0xa939,	// (0x0000a939) popup_snote_single_text_window_t_ParamLimits

0xa939,	// (0x0000a939) popup_snote_single_text_window_t

0x0c36,	// (0x00000c36) bg_popup_window_pane_cp9_ParamLimits

0x0c36,	// (0x00000c36) bg_popup_window_pane_cp9

0x0b62,	// (0x00000b62) popup_snote_single_graphic_window_g1_ParamLimits

0x0b62,	// (0x00000b62) popup_snote_single_graphic_window_g1

0x0c44,	// (0x00000c44) popup_snote_single_graphic_window_g2_ParamLimits

0x0c44,	// (0x00000c44) popup_snote_single_graphic_window_g2

0x0001,

0xa944,	// (0x0000a944) popup_snote_single_graphic_window_g_ParamLimits

0xa944,	// (0x0000a944) popup_snote_single_graphic_window_g

0x0c50,	// (0x00000c50) popup_snote_single_graphic_window_t1_ParamLimits

0x0c50,	// (0x00000c50) popup_snote_single_graphic_window_t1

0x0c63,	// (0x00000c63) popup_snote_single_graphic_window_t2_ParamLimits

0x0c63,	// (0x00000c63) popup_snote_single_graphic_window_t2

0x0c76,	// (0x00000c76) popup_snote_single_graphic_window_t3_ParamLimits

0x0c76,	// (0x00000c76) popup_snote_single_graphic_window_t3

0x0caf,	// (0x00000caf) popup_snote_single_graphic_window_t4_ParamLimits

0x0caf,	// (0x00000caf) popup_snote_single_graphic_window_t4

0x0ce3,	// (0x00000ce3) popup_snote_single_graphic_window_t5_ParamLimits

0x0ce3,	// (0x00000ce3) popup_snote_single_graphic_window_t5

0x0004,

0xa949,	// (0x0000a949) popup_snote_single_graphic_window_t_ParamLimits

0xa949,	// (0x0000a949) popup_snote_single_graphic_window_t

0x5233,	// (0x00005233) grid_graphic_popup_pane_ParamLimits

0x5233,	// (0x00005233) grid_graphic_popup_pane

0x525f,	// (0x0000525f) listscroll_popup_graphic_pane_g1_ParamLimits

0x525f,	// (0x0000525f) listscroll_popup_graphic_pane_g1

0xd30d,	// (0x0000d30d) listscroll_popup_graphic_pane_g2_ParamLimits

0xd30d,	// (0x0000d30d) listscroll_popup_graphic_pane_g2

0x0001,

0xf0be,	// (0x0000f0be) listscroll_popup_graphic_pane_g_ParamLimits

0xf0be,	// (0x0000f0be) listscroll_popup_graphic_pane_g

0x5287,	// (0x00005287) scroll_pane_cp5

0xd2d0,	// (0x0000d2d0) cell_graphic_popup_pane_ParamLimits

0xd2d0,	// (0x0000d2d0) cell_graphic_popup_pane

0x51bf,	// (0x000051bf) cell_graphic_popup_pane_g1

0x51c7,	// (0x000051c7) cell_graphic_popup_pane_g2

0x0b36,	// (0x00000b36) cell_graphic_popup_pane_g3

0x0002,

0xad25,	// (0x0000ad25) cell_graphic_popup_pane_g

0x51d0,	// (0x000051d0) cell_graphic_popup_pane_t2

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp3

0x0d24,	// (0x00000d24) list_gen_pane_ParamLimits

0x0d24,	// (0x00000d24) list_gen_pane

0x0d56,	// (0x00000d56) scroll_pane

0xd28b,	// (0x0000d28b) bg_list_pane_g1_ParamLimits

0xd28b,	// (0x0000d28b) bg_list_pane_g1

0x513c,	// (0x0000513c) bg_list_pane_g2_ParamLimits

0x513c,	// (0x0000513c) bg_list_pane_g2

0x514f,	// (0x0000514f) bg_list_pane_g3_ParamLimits

0x514f,	// (0x0000514f) bg_list_pane_g3

0x5161,	// (0x00005161) bg_list_pane_g4_ParamLimits

0x5161,	// (0x00005161) bg_list_pane_g4

0xd2a6,	// (0x0000d2a6) bg_list_pane_g5_ParamLimits

0xd2a6,	// (0x0000d2a6) bg_list_pane_g5

0x0004,

0xf0b3,	// (0x0000f0b3) bg_list_pane_g_ParamLimits

0xf0b3,	// (0x0000f0b3) bg_list_pane_g

0xd22a,	// (0x0000d22a) list_double2_graphic_large_graphic_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_double2_graphic_large_graphic_pane

0xd22a,	// (0x0000d22a) list_double2_graphic_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_double2_graphic_pane

0xd22a,	// (0x0000d22a) list_double2_large_graphic_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_double2_large_graphic_pane

0xd22a,	// (0x0000d22a) list_double2_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_double2_pane

0xd22a,	// (0x0000d22a) list_double_graphic_heading_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_double_graphic_heading_pane

0xd22a,	// (0x0000d22a) list_double_graphic_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_double_graphic_pane

0xd22a,	// (0x0000d22a) list_double_heading_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_double_heading_pane

0xd22a,	// (0x0000d22a) list_double_large_graphic_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_double_large_graphic_pane

0xd22a,	// (0x0000d22a) list_double_number_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_double_number_pane

0xd22a,	// (0x0000d22a) list_double_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_double_pane

0xd22a,	// (0x0000d22a) list_double_time_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_double_time_pane

0xd22a,	// (0x0000d22a) list_setting_number_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_setting_number_pane

0xd22a,	// (0x0000d22a) list_setting_pane_ParamLimits

0xd22a,	// (0x0000d22a) list_setting_pane

0xd23d,	// (0x0000d23d) list_single_2graphic_pane_ParamLimits

0xd23d,	// (0x0000d23d) list_single_2graphic_pane

0xd23d,	// (0x0000d23d) list_single_graphic_heading_pane_ParamLimits

0xd23d,	// (0x0000d23d) list_single_graphic_heading_pane

0xd23d,	// (0x0000d23d) list_single_graphic_pane_ParamLimits

0xd23d,	// (0x0000d23d) list_single_graphic_pane

0xd23d,	// (0x0000d23d) list_single_heading_pane_ParamLimits

0xd23d,	// (0x0000d23d) list_single_heading_pane

0xd23d,	// (0x0000d23d) list_single_large_graphic_pane_ParamLimits

0xd23d,	// (0x0000d23d) list_single_large_graphic_pane

0xd23d,	// (0x0000d23d) list_single_number_heading_pane_ParamLimits

0xd23d,	// (0x0000d23d) list_single_number_heading_pane

0xd23d,	// (0x0000d23d) list_single_number_pane_ParamLimits

0xd23d,	// (0x0000d23d) list_single_number_pane

0xd23d,	// (0x0000d23d) list_single_pane_ParamLimits

0xd23d,	// (0x0000d23d) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x0e4b,	// (0x00000e4b) list_single_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_pane_g1

0x0e57,	// (0x00000e57) list_single_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_pane_g2

0x0001,

0xab62,	// (0x0000ab62) list_single_pane_g_ParamLimits

0xab62,	// (0x0000ab62) list_single_pane_g

0x5998,	// (0x00005998) list_single_pane_t1_ParamLimits

0x5998,	// (0x00005998) list_single_pane_t1

0x0e4b,	// (0x00000e4b) list_single_number_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_number_pane_g1

0x0e57,	// (0x00000e57) list_single_number_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_number_pane_g2

0x0001,

0xab62,	// (0x0000ab62) list_single_number_pane_g_ParamLimits

0xab62,	// (0x0000ab62) list_single_number_pane_g

0x35a5,	// (0x000035a5) list_single_number_pane_t1_ParamLimits

0x35a5,	// (0x000035a5) list_single_number_pane_t1

0xd06e,	// (0x0000d06e) list_single_number_pane_t2_ParamLimits

0xd06e,	// (0x0000d06e) list_single_number_pane_t2

0x0001,

0xf096,	// (0x0000f096) list_single_number_pane_t_ParamLimits

0xf096,	// (0x0000f096) list_single_number_pane_t

0xb788,	// (0x0000b788) list_single_graphic_pane_g1_ParamLimits

0xb788,	// (0x0000b788) list_single_graphic_pane_g1

0x0e4b,	// (0x00000e4b) list_single_graphic_pane_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_pane_g3

0x0002,

0xef46,	// (0x0000ef46) list_single_graphic_pane_g_ParamLimits

0xef46,	// (0x0000ef46) list_single_graphic_pane_g

0xb794,	// (0x0000b794) list_single_graphic_pane_t1_ParamLimits

0xb794,	// (0x0000b794) list_single_graphic_pane_t1

0x0e4b,	// (0x00000e4b) list_single_heading_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_heading_pane_g1

0x0e57,	// (0x00000e57) list_single_heading_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_heading_pane_g2

0x0001,

0xab62,	// (0x0000ab62) list_single_heading_pane_g_ParamLimits

0xab62,	// (0x0000ab62) list_single_heading_pane_g

0x59ba,	// (0x000059ba) list_single_heading_pane_t1_ParamLimits

0x59ba,	// (0x000059ba) list_single_heading_pane_t1

0xb7aa,	// (0x0000b7aa) list_single_heading_pane_t2_ParamLimits

0xb7aa,	// (0x0000b7aa) list_single_heading_pane_t2

0x0001,

0xef4d,	// (0x0000ef4d) list_single_heading_pane_t_ParamLimits

0xef4d,	// (0x0000ef4d) list_single_heading_pane_t

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_g1

0x0e57,	// (0x00000e57) list_single_number_heading_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_number_heading_pane_g2

0x0001,

0xab62,	// (0x0000ab62) list_single_number_heading_pane_g_ParamLimits

0xab62,	// (0x0000ab62) list_single_number_heading_pane_g

0x59ba,	// (0x000059ba) list_single_number_heading_pane_t1_ParamLimits

0x59ba,	// (0x000059ba) list_single_number_heading_pane_t1

0xb7bc,	// (0x0000b7bc) list_single_number_heading_pane_t2_ParamLimits

0xb7bc,	// (0x0000b7bc) list_single_number_heading_pane_t2

0x5972,	// (0x00005972) list_single_number_heading_pane_t3_ParamLimits

0x5972,	// (0x00005972) list_single_number_heading_pane_t3

0x0002,

0xef52,	// (0x0000ef52) list_single_number_heading_pane_t_ParamLimits

0xef52,	// (0x0000ef52) list_single_number_heading_pane_t

0x34bb,	// (0x000034bb) list_single_graphic_heading_pane_g1_ParamLimits

0x34bb,	// (0x000034bb) list_single_graphic_heading_pane_g1

0xb7ce,	// (0x0000b7ce) list_single_graphic_heading_pane_g4_ParamLimits

0xb7ce,	// (0x0000b7ce) list_single_graphic_heading_pane_g4

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_g5_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_g5

0x0002,

0xef59,	// (0x0000ef59) list_single_graphic_heading_pane_g_ParamLimits

0xef59,	// (0x0000ef59) list_single_graphic_heading_pane_g

0x59ba,	// (0x000059ba) list_single_graphic_heading_pane_t1_ParamLimits

0x59ba,	// (0x000059ba) list_single_graphic_heading_pane_t1

0xb7df,	// (0x0000b7df) list_single_graphic_heading_pane_t2_ParamLimits

0xb7df,	// (0x0000b7df) list_single_graphic_heading_pane_t2

0x0001,

0xef60,	// (0x0000ef60) list_single_graphic_heading_pane_t_ParamLimits

0xef60,	// (0x0000ef60) list_single_graphic_heading_pane_t

0x59ae,	// (0x000059ae) list_single_large_graphic_pane_g1_ParamLimits

0x59ae,	// (0x000059ae) list_single_large_graphic_pane_g1

0x0e4b,	// (0x00000e4b) list_single_large_graphic_pane_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_large_graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_large_graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_large_graphic_pane_g3

0x0002,

0xadc3,	// (0x0000adc3) list_single_large_graphic_pane_g_ParamLimits

0xadc3,	// (0x0000adc3) list_single_large_graphic_pane_g

0x3df9,	// (0x00003df9) wait_border_pane_g2_copy1

0xb7f1,	// (0x0000b7f1) list_single_large_graphic_pane_g4_cp2

0x59ba,	// (0x000059ba) list_single_large_graphic_pane_t1_ParamLimits

0x59ba,	// (0x000059ba) list_single_large_graphic_pane_t1

0x0fa7,	// (0x00000fa7) list_double_pane_g1_ParamLimits

0x0fa7,	// (0x00000fa7) list_double_pane_g1

0x0ed2,	// (0x00000ed2) list_double_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_pane_g2

0x0001,

0xa9f4,	// (0x0000a9f4) list_double_pane_g_ParamLimits

0xa9f4,	// (0x0000a9f4) list_double_pane_g

0x0ede,	// (0x00000ede) list_double_pane_t1_ParamLimits

0x0ede,	// (0x00000ede) list_double_pane_t1

0xb7f9,	// (0x0000b7f9) list_double_pane_t2_ParamLimits

0xb7f9,	// (0x0000b7f9) list_double_pane_t2

0x0001,

0xef65,	// (0x0000ef65) list_double_pane_t_ParamLimits

0xef65,	// (0x0000ef65) list_double_pane_t

0xb80b,	// (0x0000b80b) list_double2_pane_g1_ParamLimits

0xb80b,	// (0x0000b80b) list_double2_pane_g1

0xb81c,	// (0x0000b81c) list_double2_pane_g2_ParamLimits

0xb81c,	// (0x0000b81c) list_double2_pane_g2

0x0001,

0xef6a,	// (0x0000ef6a) list_double2_pane_g_ParamLimits

0xef6a,	// (0x0000ef6a) list_double2_pane_g

0x7565,	// (0x00007565) list_double2_pane_t1_ParamLimits

0x7565,	// (0x00007565) list_double2_pane_t1

0x10d0,	// (0x000010d0) list_double2_pane_t2_ParamLimits

0x10d0,	// (0x000010d0) list_double2_pane_t2

0x0001,

0xef6f,	// (0x0000ef6f) list_double2_pane_t_ParamLimits

0xef6f,	// (0x0000ef6f) list_double2_pane_t

0x0fa7,	// (0x00000fa7) list_double_number_pane_g1_ParamLimits

0x0fa7,	// (0x00000fa7) list_double_number_pane_g1

0x0ed2,	// (0x00000ed2) list_double_number_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_number_pane_g2

0x0001,

0xa9f4,	// (0x0000a9f4) list_double_number_pane_g_ParamLimits

0xa9f4,	// (0x0000a9f4) list_double_number_pane_g

0xb828,	// (0x0000b828) list_double_number_pane_t1_ParamLimits

0xb828,	// (0x0000b828) list_double_number_pane_t1

0x0fb3,	// (0x00000fb3) list_double_number_pane_t2_ParamLimits

0x0fb3,	// (0x00000fb3) list_double_number_pane_t2

0xb83a,	// (0x0000b83a) list_double_number_pane_t3_ParamLimits

0xb83a,	// (0x0000b83a) list_double_number_pane_t3

0x0002,

0xef74,	// (0x0000ef74) list_double_number_pane_t_ParamLimits

0xef74,	// (0x0000ef74) list_double_number_pane_t

0x0f9b,	// (0x00000f9b) list_double_graphic_pane_g1_ParamLimits

0x0f9b,	// (0x00000f9b) list_double_graphic_pane_g1

0xb84c,	// (0x0000b84c) list_double_graphic_pane_g2_ParamLimits

0xb84c,	// (0x0000b84c) list_double_graphic_pane_g2

0xb85b,	// (0x0000b85b) list_double_graphic_pane_g3_ParamLimits

0xb85b,	// (0x0000b85b) list_double_graphic_pane_g3

0x0003,

0xef7b,	// (0x0000ef7b) list_double_graphic_pane_g_ParamLimits

0xef7b,	// (0x0000ef7b) list_double_graphic_pane_g

0xb873,	// (0x0000b873) list_double_graphic_pane_t1_ParamLimits

0xb873,	// (0x0000b873) list_double_graphic_pane_t1

0xb889,	// (0x0000b889) list_double_graphic_pane_t2_ParamLimits

0xb889,	// (0x0000b889) list_double_graphic_pane_t2

0x0001,

0xef84,	// (0x0000ef84) list_double_graphic_pane_t_ParamLimits

0xef84,	// (0x0000ef84) list_double_graphic_pane_t

0xb89b,	// (0x0000b89b) list_double2_graphic_pane_g1_ParamLimits

0xb89b,	// (0x0000b89b) list_double2_graphic_pane_g1

0x1375,	// (0x00001375) list_double2_graphic_pane_g2_ParamLimits

0x1375,	// (0x00001375) list_double2_graphic_pane_g2

0xb81c,	// (0x0000b81c) list_double2_graphic_pane_g3_ParamLimits

0xb81c,	// (0x0000b81c) list_double2_graphic_pane_g3

0x0002,

0xef89,	// (0x0000ef89) list_double2_graphic_pane_g_ParamLimits

0xef89,	// (0x0000ef89) list_double2_graphic_pane_g

0xb8a7,	// (0x0000b8a7) list_double2_graphic_pane_t1_ParamLimits

0xb8a7,	// (0x0000b8a7) list_double2_graphic_pane_t1

0x10f8,	// (0x000010f8) list_double2_graphic_pane_t2_ParamLimits

0x10f8,	// (0x000010f8) list_double2_graphic_pane_t2

0x0001,

0xef90,	// (0x0000ef90) list_double2_graphic_pane_t_ParamLimits

0xef90,	// (0x0000ef90) list_double2_graphic_pane_t

0xb8bd,	// (0x0000b8bd) list_double_large_graphic_pane_g1_ParamLimits

0xb8bd,	// (0x0000b8bd) list_double_large_graphic_pane_g1

0xb8e8,	// (0x0000b8e8) list_double_large_graphic_pane_g2_ParamLimits

0xb8e8,	// (0x0000b8e8) list_double_large_graphic_pane_g2

0x0ed2,	// (0x00000ed2) list_double_large_graphic_pane_g3_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_large_graphic_pane_g3

0xb8f9,	// (0x0000b8f9) list_double_large_graphic_pane_g4_ParamLimits

0xb8f9,	// (0x0000b8f9) list_double_large_graphic_pane_g4

0x0004,

0xef95,	// (0x0000ef95) list_double_large_graphic_pane_g_ParamLimits

0xef95,	// (0x0000ef95) list_double_large_graphic_pane_g

0xb90c,	// (0x0000b90c) list_double_large_graphic_pane_t1_ParamLimits

0xb90c,	// (0x0000b90c) list_double_large_graphic_pane_t1

0xb925,	// (0x0000b925) list_double_large_graphic_pane_t2_ParamLimits

0xb925,	// (0x0000b925) list_double_large_graphic_pane_t2

0x0001,

0xefa0,	// (0x0000efa0) list_double_large_graphic_pane_t_ParamLimits

0xefa0,	// (0x0000efa0) list_double_large_graphic_pane_t

0xb937,	// (0x0000b937) list_double2_large_graphic_pane_g1_ParamLimits

0xb937,	// (0x0000b937) list_double2_large_graphic_pane_g1

0xb80b,	// (0x0000b80b) list_double2_large_graphic_pane_g2_ParamLimits

0xb80b,	// (0x0000b80b) list_double2_large_graphic_pane_g2

0xb81c,	// (0x0000b81c) list_double2_large_graphic_pane_g3_ParamLimits

0xb81c,	// (0x0000b81c) list_double2_large_graphic_pane_g3

0x0002,

0xefa5,	// (0x0000efa5) list_double2_large_graphic_pane_g_ParamLimits

0xefa5,	// (0x0000efa5) list_double2_large_graphic_pane_g

0xb943,	// (0x0000b943) list_double2_large_graphic_pane_t1_ParamLimits

0xb943,	// (0x0000b943) list_double2_large_graphic_pane_t1

0xb959,	// (0x0000b959) list_double2_large_graphic_pane_t2_ParamLimits

0xb959,	// (0x0000b959) list_double2_large_graphic_pane_t2

0x0001,

0xefac,	// (0x0000efac) list_double2_large_graphic_pane_t_ParamLimits

0xefac,	// (0x0000efac) list_double2_large_graphic_pane_t

0xb96b,	// (0x0000b96b) list_double_heading_pane_g1_ParamLimits

0xb96b,	// (0x0000b96b) list_double_heading_pane_g1

0xb97c,	// (0x0000b97c) list_double_heading_pane_g2_ParamLimits

0xb97c,	// (0x0000b97c) list_double_heading_pane_g2

0x0001,

0xefb1,	// (0x0000efb1) list_double_heading_pane_g_ParamLimits

0xefb1,	// (0x0000efb1) list_double_heading_pane_g

0xb988,	// (0x0000b988) list_double_heading_pane_t1_ParamLimits

0xb988,	// (0x0000b988) list_double_heading_pane_t1

0xb99e,	// (0x0000b99e) list_double_heading_pane_t2_ParamLimits

0xb99e,	// (0x0000b99e) list_double_heading_pane_t2

0x0001,

0xefb6,	// (0x0000efb6) list_double_heading_pane_t_ParamLimits

0xefb6,	// (0x0000efb6) list_double_heading_pane_t

0x0f9b,	// (0x00000f9b) list_double_graphic_heading_pane_g1_ParamLimits

0x0f9b,	// (0x00000f9b) list_double_graphic_heading_pane_g1

0xb96b,	// (0x0000b96b) list_double_graphic_heading_pane_g2_ParamLimits

0xb96b,	// (0x0000b96b) list_double_graphic_heading_pane_g2

0xb97c,	// (0x0000b97c) list_double_graphic_heading_pane_g3_ParamLimits

0xb97c,	// (0x0000b97c) list_double_graphic_heading_pane_g3

0x0002,

0xefbb,	// (0x0000efbb) list_double_graphic_heading_pane_g_ParamLimits

0xefbb,	// (0x0000efbb) list_double_graphic_heading_pane_g

0xb9b0,	// (0x0000b9b0) list_double_graphic_heading_pane_t1_ParamLimits

0xb9b0,	// (0x0000b9b0) list_double_graphic_heading_pane_t1

0xb9c6,	// (0x0000b9c6) list_double_graphic_heading_pane_t2_ParamLimits

0xb9c6,	// (0x0000b9c6) list_double_graphic_heading_pane_t2

0x0001,

0xefc2,	// (0x0000efc2) list_double_graphic_heading_pane_t_ParamLimits

0xefc2,	// (0x0000efc2) list_double_graphic_heading_pane_t

0xb8e8,	// (0x0000b8e8) list_double_time_pane_g1_ParamLimits

0xb8e8,	// (0x0000b8e8) list_double_time_pane_g1

0x0ed2,	// (0x00000ed2) list_double_time_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_time_pane_g2

0x0001,

0xefc7,	// (0x0000efc7) list_double_time_pane_g_ParamLimits

0xefc7,	// (0x0000efc7) list_double_time_pane_g

0x1075,	// (0x00001075) list_double_time_pane_t1_ParamLimits

0x1075,	// (0x00001075) list_double_time_pane_t1

0xb9d8,	// (0x0000b9d8) list_double_time_pane_t2_ParamLimits

0xb9d8,	// (0x0000b9d8) list_double_time_pane_t2

0xb9ea,	// (0x0000b9ea) list_double_time_pane_t3_ParamLimits

0xb9ea,	// (0x0000b9ea) list_double_time_pane_t3

0xb9fc,	// (0x0000b9fc) list_double_time_pane_t4_ParamLimits

0xb9fc,	// (0x0000b9fc) list_double_time_pane_t4

0x0003,

0xefcc,	// (0x0000efcc) list_double_time_pane_t_ParamLimits

0xefcc,	// (0x0000efcc) list_double_time_pane_t

0x1375,	// (0x00001375) list_setting_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_setting_pane_g1

0xb81c,	// (0x0000b81c) list_setting_pane_g2_ParamLimits

0xb81c,	// (0x0000b81c) list_setting_pane_g2

0x0001,

0xefd5,	// (0x0000efd5) list_setting_pane_g_ParamLimits

0xefd5,	// (0x0000efd5) list_setting_pane_g

0xba0e,	// (0x0000ba0e) list_setting_pane_t1_ParamLimits

0xba0e,	// (0x0000ba0e) list_setting_pane_t1

0xba25,	// (0x0000ba25) list_setting_pane_t2_ParamLimits

0xba25,	// (0x0000ba25) list_setting_pane_t2

0x0002,

0xefda,	// (0x0000efda) list_setting_pane_t_ParamLimits

0xefda,	// (0x0000efda) list_setting_pane_t

0xba62,	// (0x0000ba62) set_value_pane_cp_ParamLimits

0xba62,	// (0x0000ba62) set_value_pane_cp

0x1375,	// (0x00001375) list_setting_number_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_setting_number_pane_g1

0xb81c,	// (0x0000b81c) list_setting_number_pane_g2_ParamLimits

0xb81c,	// (0x0000b81c) list_setting_number_pane_g2

0x0001,

0xefd5,	// (0x0000efd5) list_setting_number_pane_g_ParamLimits

0xefd5,	// (0x0000efd5) list_setting_number_pane_g

0xba6e,	// (0x0000ba6e) list_setting_number_pane_t1_ParamLimits

0xba6e,	// (0x0000ba6e) list_setting_number_pane_t1

0xba82,	// (0x0000ba82) list_setting_number_pane_t2_ParamLimits

0xba82,	// (0x0000ba82) list_setting_number_pane_t2

0xba99,	// (0x0000ba99) list_setting_number_pane_t3_ParamLimits

0xba99,	// (0x0000ba99) list_setting_number_pane_t3

0x0003,

0xefe1,	// (0x0000efe1) list_setting_number_pane_t_ParamLimits

0xefe1,	// (0x0000efe1) list_setting_number_pane_t

0xba62,	// (0x0000ba62) set_value_pane_ParamLimits

0xba62,	// (0x0000ba62) set_value_pane

0x1224,	// (0x00001224) bg_set_opt_pane_ParamLimits

0x1224,	// (0x00001224) bg_set_opt_pane

0x1245,	// (0x00001245) set_value_pane_t1

0x1253,	// (0x00001253) slider_set_pane_cp3

0x125c,	// (0x0000125c) volume_small_pane_cp

0x1265,	// (0x00001265) list_form_gen_pane

0x126e,	// (0x0000126e) scroll_pane_cp8

0xbadc,	// (0x0000badc) form_field_data_pane_ParamLimits

0xbadc,	// (0x0000badc) form_field_data_pane

0xbaf3,	// (0x0000baf3) form_field_data_wide_pane_ParamLimits

0xbaf3,	// (0x0000baf3) form_field_data_wide_pane

0xbb13,	// (0x0000bb13) form_field_popup_pane_ParamLimits

0xbb13,	// (0x0000bb13) form_field_popup_pane

0xbb31,	// (0x0000bb31) form_field_popup_wide_pane_ParamLimits

0xbb31,	// (0x0000bb31) form_field_popup_wide_pane

0x12f9,	// (0x000012f9) form_field_slider_pane_ParamLimits

0x12f9,	// (0x000012f9) form_field_slider_pane

0x130c,	// (0x0000130c) form_field_slider_wide_pane_ParamLimits

0x130c,	// (0x0000130c) form_field_slider_wide_pane

0x131f,	// (0x0000131f) data_form_pane

0xbb52,	// (0x0000bb52) form_field_data_pane_t1

0x134f,	// (0x0000134f) input_focus_pane

0x135d,	// (0x0000135d) data_form_wide_pane

0x1395,	// (0x00001395) form_field_data_wide_pane_t1

0x0b54,	// (0x00000b54) input_focus_pane_cp6

0xbb6c,	// (0x0000bb6c) form_field_popup_pane_t1

0x134f,	// (0x0000134f) input_focus_pane_cp7

0x13d1,	// (0x000013d1) list_form_pane

0x13e5,	// (0x000013e5) form_field_popup_wide_pane_t1

0x134f,	// (0x0000134f) input_focus_pane_cp8

0x13fa,	// (0x000013fa) list_form_wide_pane

0xbb8e,	// (0x0000bb8e) form_field_slider_pane_t1_ParamLimits

0xbb8e,	// (0x0000bb8e) form_field_slider_pane_t1

0xbba6,	// (0x0000bba6) form_field_slider_pane_t2_ParamLimits

0xbba6,	// (0x0000bba6) form_field_slider_pane_t2

0x0001,

0xefea,	// (0x0000efea) form_field_slider_pane_t_ParamLimits

0xefea,	// (0x0000efea) form_field_slider_pane_t

0x080b,	// (0x0000080b) input_focus_pane_cp9_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp9

0xbbbb,	// (0x0000bbbb) slider_cont_pane_ParamLimits

0xbbbb,	// (0x0000bbbb) slider_cont_pane

0x144b,	// (0x0000144b) form_field_slider_wide_pane_t1_ParamLimits

0x144b,	// (0x0000144b) form_field_slider_wide_pane_t1

0x145d,	// (0x0000145d) form_field_slider_wide_pane_t2_ParamLimits

0x145d,	// (0x0000145d) form_field_slider_wide_pane_t2

0x0001,

0xaa15,	// (0x0000aa15) form_field_slider_wide_pane_t_ParamLimits

0xaa15,	// (0x0000aa15) form_field_slider_wide_pane_t

0x080b,	// (0x0000080b) input_focus_pane_cp10_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp10

0xbbcf,	// (0x0000bbcf) slider_cont_pane_cp1_ParamLimits

0xbbcf,	// (0x0000bbcf) slider_cont_pane_cp1

0xbbe3,	// (0x0000bbe3) slider_form_pane_cp

0x148b,	// (0x0000148b) input_focus_pane_g1

0x1493,	// (0x00001493) input_focus_pane_g2

0x149b,	// (0x0000149b) input_focus_pane_g3

0x14a3,	// (0x000014a3) input_focus_pane_g4

0x14ab,	// (0x000014ab) input_focus_pane_g5

0x14b3,	// (0x000014b3) input_focus_pane_g6

0x14bb,	// (0x000014bb) input_focus_pane_g7

0x14c3,	// (0x000014c3) input_focus_pane_g8

0x14cb,	// (0x000014cb) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xaa1a,	// (0x0000aa1a) input_focus_pane_g

0x3e02,	// (0x00003e02) wait_border_pane_g3_copy1

0xbbeb,	// (0x0000bbeb) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd1ff,	// (0x0000d1ff) data_form_wide_pane_t1

0xbc05,	// (0x0000bc05) list_form_graphic_pane_cp_ParamLimits

0xbc05,	// (0x0000bc05) list_form_graphic_pane_cp

0x4f87,	// (0x00004f87) slider_form_pane_g1

0x4f90,	// (0x00004f90) slider_form_pane_g2

0x0006,

0xf0a4,	// (0x0000f0a4) slider_form_pane_g

0xbc18,	// (0x0000bc18) list_form_graphic_pane_ParamLimits

0xbc18,	// (0x0000bc18) list_form_graphic_pane

0x151f,	// (0x0000151f) list_form_graphic_pane_g1

0x1527,	// (0x00001527) list_form_graphic_pane_t1_ParamLimits

0x1527,	// (0x00001527) list_form_graphic_pane_t1

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp5

0xbc2c,	// (0x0000bc2c) find_pane_g1

0x1545,	// (0x00001545) input_find_pane

0xbc35,	// (0x0000bc35) input_find_pane_g1_ParamLimits

0xbc35,	// (0x0000bc35) input_find_pane_g1

0xbc41,	// (0x0000bc41) input_find_pane_t1_ParamLimits

0xbc41,	// (0x0000bc41) input_find_pane_t1

0xbc56,	// (0x0000bc56) input_find_pane_t2_ParamLimits

0xbc56,	// (0x0000bc56) input_find_pane_t2

0x0001,

0xefef,	// (0x0000efef) input_find_pane_t_ParamLimits

0xefef,	// (0x0000efef) input_find_pane_t

0x1584,	// (0x00001584) input_focus_pane_cp5_ParamLimits

0x1584,	// (0x00001584) input_focus_pane_cp5

0xbc77,	// (0x0000bc77) bg_popup_window_pane_cp2_ParamLimits

0xbc77,	// (0x0000bc77) bg_popup_window_pane_cp2

0xbc84,	// (0x0000bc84) listscroll_menu_pane_ParamLimits

0xbc84,	// (0x0000bc84) listscroll_menu_pane

0xbc90,	// (0x0000bc90) popup_submenu_window_ParamLimits

0xbc90,	// (0x0000bc90) popup_submenu_window

0x15db,	// (0x000015db) find_popup_pane_g1

0x15e3,	// (0x000015e3) input_popup_find_pane_cp

0x1584,	// (0x00001584) input_focus_pane_cp4_ParamLimits

0x1584,	// (0x00001584) input_focus_pane_cp4

0x15fb,	// (0x000015fb) input_popup_find_pane_t1_ParamLimits

0x15fb,	// (0x000015fb) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x1629,	// (0x00001629) listscroll_popup_sub_pane

0x1631,	// (0x00001631) list_submenu_pane_ParamLimits

0x1631,	// (0x00001631) list_submenu_pane

0x1642,	// (0x00001642) scroll_pane_cp4

0x164a,	// (0x0000164a) list_single_popup_submenu_pane_ParamLimits

0x164a,	// (0x0000164a) list_single_popup_submenu_pane

0x165d,	// (0x0000165d) list_single_popup_submenu_pane_g1

0x1665,	// (0x00001665) list_single_popup_submenu_pane_t1_ParamLimits

0x1665,	// (0x00001665) list_single_popup_submenu_pane_t1

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1

0xbcc2,	// (0x0000bcc2) tabs_2_active_pane_g1

0xbcca,	// (0x0000bcca) tabs_2_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp1_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp1

0xbcc2,	// (0x0000bcc2) tabs_2_passive_pane_g1

0xbcca,	// (0x0000bcca) tabs_2_passive_pane_t1

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4

0xbcdc,	// (0x0000bcdc) tabs_2_long_active_pane_t1

0x2aed,	// (0x00002aed) bg_passive_tab_pane_cp4

0x3684,	// (0x00003684) list_single_midp_graphic_pane_g4_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5

0xbcef,	// (0x0000bcef) tabs_3_long_active_pane_t1

0x2aed,	// (0x00002aed) bg_passive_tab_pane_cp5

0x3684,	// (0x00003684) list_single_midp_graphic_pane_g4

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp13_ParamLimits

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp13

0x16dc,	// (0x000016dc) listscroll_popup_fast_pane_ParamLimits

0x16dc,	// (0x000016dc) listscroll_popup_fast_pane

0x16eb,	// (0x000016eb) grid_popup_fast_pane_ParamLimits

0x16eb,	// (0x000016eb) grid_popup_fast_pane

0x16fd,	// (0x000016fd) scroll_pane_cp9_ParamLimits

0x16fd,	// (0x000016fd) scroll_pane_cp9

0x71d1,	// (0x000071d1) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x71d1,	// (0x000071d1) list_single_graphic_hl_pane_t1_cp2

0x1721,	// (0x00001721) input_focus_pane_cp20_ParamLimits

0x1721,	// (0x00001721) input_focus_pane_cp20

0x172f,	// (0x0000172f) query_popup_data_pane_t1_ParamLimits

0x172f,	// (0x0000172f) query_popup_data_pane_t1

0x1742,	// (0x00001742) query_popup_data_pane_t2_ParamLimits

0x1742,	// (0x00001742) query_popup_data_pane_t2

0x1788,	// (0x00001788) query_popup_data_pane_t3_ParamLimits

0x1788,	// (0x00001788) query_popup_data_pane_t3

0x17c9,	// (0x000017c9) query_popup_data_pane_t4_ParamLimits

0x17c9,	// (0x000017c9) query_popup_data_pane_t4

0x1805,	// (0x00001805) query_popup_data_pane_t5_ParamLimits

0x1805,	// (0x00001805) query_popup_data_pane_t5

0x0004,

0xaa34,	// (0x0000aa34) query_popup_data_pane_t_ParamLimits

0xaa34,	// (0x0000aa34) query_popup_data_pane_t

0x148b,	// (0x0000148b) bg_set_opt_pane_g1

0x1493,	// (0x00001493) bg_set_opt_pane_g2

0x149b,	// (0x0000149b) bg_set_opt_pane_g3

0x14a3,	// (0x000014a3) bg_set_opt_pane_g4

0x14ab,	// (0x000014ab) bg_set_opt_pane_g5

0x14b3,	// (0x000014b3) bg_set_opt_pane_g6

0x14bb,	// (0x000014bb) bg_set_opt_pane_g7

0x14c3,	// (0x000014c3) bg_set_opt_pane_g8

0x14cb,	// (0x000014cb) bg_set_opt_pane_g9

0x0008,

0xaa3f,	// (0x0000aa3f) bg_set_opt_pane_g

0x20cd,	// (0x000020cd) control_top_pane_stacon_ParamLimits

0x20cd,	// (0x000020cd) control_top_pane_stacon

0x2120,	// (0x00002120) signal_pane_stacon_ParamLimits

0x2120,	// (0x00002120) signal_pane_stacon

0x2145,	// (0x00002145) stacon_top_pane_g1_ParamLimits

0x2145,	// (0x00002145) stacon_top_pane_g1

0x2167,	// (0x00002167) title_pane_stacon_ParamLimits

0x2167,	// (0x00002167) title_pane_stacon

0x2191,	// (0x00002191) uni_indicator_pane_stacon_ParamLimits

0x2191,	// (0x00002191) uni_indicator_pane_stacon

0x21a6,	// (0x000021a6) battery_pane_stacon_ParamLimits

0x21a6,	// (0x000021a6) battery_pane_stacon

0x21ea,	// (0x000021ea) control_bottom_pane_stacon_ParamLimits

0x21ea,	// (0x000021ea) control_bottom_pane_stacon

0x220d,	// (0x0000220d) navi_pane_stacon_ParamLimits

0x220d,	// (0x0000220d) navi_pane_stacon

0x2230,	// (0x00002230) stacon_bottom_pane_g1_ParamLimits

0x2230,	// (0x00002230) stacon_bottom_pane_g1

0x183c,	// (0x0000183c) aid_levels_signal_lsc_ParamLimits

0x183c,	// (0x0000183c) aid_levels_signal_lsc

0x1853,	// (0x00001853) signal_pane_stacon_g1_ParamLimits

0x1853,	// (0x00001853) signal_pane_stacon_g1

0x1867,	// (0x00001867) signal_pane_stacon_g2_ParamLimits

0x1867,	// (0x00001867) signal_pane_stacon_g2

0x0001,

0xaa52,	// (0x0000aa52) signal_pane_stacon_g_ParamLimits

0xaa52,	// (0x0000aa52) signal_pane_stacon_g

0x18a9,	// (0x000018a9) title_pane_stacon_t1_ParamLimits

0x18a9,	// (0x000018a9) title_pane_stacon_t1

0x18ce,	// (0x000018ce) uni_indicator_pane_stacon_g1

0x18d8,	// (0x000018d8) uni_indicator_pane_stacon_g2

0x18e2,	// (0x000018e2) uni_indicator_pane_stacon_g3

0x18ec,	// (0x000018ec) uni_indicator_pane_stacon_g4

0x0003,

0xaa5e,	// (0x0000aa5e) uni_indicator_pane_stacon_g

0x18f6,	// (0x000018f6) control_top_pane_stacon_g1

0x18fe,	// (0x000018fe) control_top_pane_stacon_t1_ParamLimits

0x18fe,	// (0x000018fe) control_top_pane_stacon_t1

0x1935,	// (0x00001935) aid_levels_battery_lsc_ParamLimits

0x1935,	// (0x00001935) aid_levels_battery_lsc

0x194d,	// (0x0000194d) battery_pane_stacon_g1_ParamLimits

0x194d,	// (0x0000194d) battery_pane_stacon_g1

0x1960,	// (0x00001960) battery_pane_stacon_g2_ParamLimits

0x1960,	// (0x00001960) battery_pane_stacon_g2

0x0001,

0xaa67,	// (0x0000aa67) battery_pane_stacon_g_ParamLimits

0xaa67,	// (0x0000aa67) battery_pane_stacon_g

0x199e,	// (0x0000199e) navi_icon_pane_stacon

0x19b2,	// (0x000019b2) navi_navi_pane_stacon

0x199e,	// (0x0000199e) navi_text_pane_stacon

0x18f6,	// (0x000018f6) control_bottom_pane_stacon_g1

0x19c6,	// (0x000019c6) control_bottom_pane_stacon_t1_ParamLimits

0x19c6,	// (0x000019c6) control_bottom_pane_stacon_t1

0xbd01,	// (0x0000bd01) grid_app_pane_ParamLimits

0xbd01,	// (0x0000bd01) grid_app_pane

0xbd37,	// (0x0000bd37) scroll_pane_cp15_ParamLimits

0xbd37,	// (0x0000bd37) scroll_pane_cp15

0xbd50,	// (0x0000bd50) cell_app_pane_ParamLimits

0xbd50,	// (0x0000bd50) cell_app_pane

0xbd97,	// (0x0000bd97) cell_app_pane_g1_ParamLimits

0xbd97,	// (0x0000bd97) cell_app_pane_g1

0x1a9c,	// (0x00001a9c) cell_app_pane_g2_ParamLimits

0x1a9c,	// (0x00001a9c) cell_app_pane_g2

0x0001,

0xeff4,	// (0x0000eff4) cell_app_pane_g_ParamLimits

0xeff4,	// (0x0000eff4) cell_app_pane_g

0x1aa8,	// (0x00001aa8) cell_app_pane_t1_ParamLimits

0x1aa8,	// (0x00001aa8) cell_app_pane_t1

0x1abf,	// (0x00001abf) grid_highlight_pane_ParamLimits

0x1abf,	// (0x00001abf) grid_highlight_pane

0x148b,	// (0x0000148b) cell_highlight_pane_g1

0x1493,	// (0x00001493) cell_highlight_pane_g2

0x149b,	// (0x0000149b) cell_highlight_pane_g3

0x14a3,	// (0x000014a3) cell_highlight_pane_g4

0x14ab,	// (0x000014ab) cell_highlight_pane_g5

0x14b3,	// (0x000014b3) cell_highlight_pane_g6

0x14bb,	// (0x000014bb) cell_highlight_pane_g7

0x14c3,	// (0x000014c3) cell_highlight_pane_g8

0x14cb,	// (0x000014cb) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xaa1a,	// (0x0000aa1a) cell_highlight_pane_g

0x1ae3,	// (0x00001ae3) bg_scroll_pane

0x1b02,	// (0x00001b02) scroll_handle_pane

0x1b53,	// (0x00001b53) scroll_bg_pane_g1

0x1b68,	// (0x00001b68) scroll_bg_pane_g2

0x1b80,	// (0x00001b80) scroll_bg_pane_g3

0x0002,

0xaa71,	// (0x0000aa71) scroll_bg_pane_g

0x1b95,	// (0x00001b95) scroll_handle_focus_pane_ParamLimits

0x1b95,	// (0x00001b95) scroll_handle_focus_pane

0x1b53,	// (0x00001b53) scroll_handle_pane_g1

0x1ba2,	// (0x00001ba2) scroll_handle_pane_g2

0x1b80,	// (0x00001b80) scroll_handle_pane_g3

0x0002,

0xaa78,	// (0x0000aa78) scroll_handle_pane_g

0x1584,	// (0x00001584) bg_popup_sub_pane_cp21_ParamLimits

0x1584,	// (0x00001584) bg_popup_sub_pane_cp21

0x1bb6,	// (0x00001bb6) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bb6,	// (0x00001bb6) popup_fep_japan_predictive_window_t1

0x1bcd,	// (0x00001bcd) popup_fep_japan_predictive_window_t2_ParamLimits

0x1bcd,	// (0x00001bcd) popup_fep_japan_predictive_window_t2

0x1c00,	// (0x00001c00) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c00,	// (0x00001c00) popup_fep_japan_predictive_window_t3

0x0002,

0xaa7f,	// (0x0000aa7f) popup_fep_japan_predictive_window_t_ParamLimits

0xaa7f,	// (0x0000aa7f) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c37,	// (0x00001c37) listscroll_japin_cand_pane

0x1c3f,	// (0x00001c3f) popup_fep_japan_candidate_window_t1

0x1c4d,	// (0x00001c4d) candidate_pane_ParamLimits

0x1c4d,	// (0x00001c4d) candidate_pane

0x1c5f,	// (0x00001c5f) scroll_pane_cp30

0x1c67,	// (0x00001c67) list_single_popup_jap_candidate_pane_ParamLimits

0x1c67,	// (0x00001c67) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1c7b,	// (0x00001c7b) list_single_popup_jap_candidate_pane_t1

0x1c8a,	// (0x00001c8a) level_1_signal

0x1c97,	// (0x00001c97) level_2_signal

0x1ca4,	// (0x00001ca4) level_3_signal

0x1cb1,	// (0x00001cb1) level_4_signal

0x1cbe,	// (0x00001cbe) level_5_signal

0x1ccb,	// (0x00001ccb) level_6_signal

0x1cd8,	// (0x00001cd8) level_7_signal

0x1c8a,	// (0x00001c8a) level_1_battery

0x1c97,	// (0x00001c97) level_2_battery

0x1ca4,	// (0x00001ca4) level_3_battery

0x1cb1,	// (0x00001cb1) level_4_battery

0x1cbe,	// (0x00001cbe) level_5_battery

0x1ccb,	// (0x00001ccb) level_6_battery

0x1cd8,	// (0x00001cd8) level_7_battery

0x1d1c,	// (0x00001d1c) list_menu_pane_ParamLimits

0x1d1c,	// (0x00001d1c) list_menu_pane

0x1d2d,	// (0x00001d2d) scroll_pane_cp25_ParamLimits

0x1d2d,	// (0x00001d2d) scroll_pane_cp25

0x1d46,	// (0x00001d46) list_double2_graphic_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double2_graphic_pane_cp2

0x1d46,	// (0x00001d46) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double2_large_graphic_pane_cp2

0x1d46,	// (0x00001d46) list_double2_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double2_pane_cp2

0x1d46,	// (0x00001d46) list_double_graphic_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double_graphic_pane_cp2

0x1d46,	// (0x00001d46) list_double_large_graphic_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double_large_graphic_pane_cp2

0x1d46,	// (0x00001d46) list_double_number_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double_number_pane_cp2

0x1d46,	// (0x00001d46) list_double_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double_pane_cp2

0xbdd5,	// (0x0000bdd5) list_single_2graphic_pane_cp2_ParamLimits

0xbdd5,	// (0x0000bdd5) list_single_2graphic_pane_cp2

0xbdd5,	// (0x0000bdd5) list_single_graphic_heading_pane_cp2_ParamLimits

0xbdd5,	// (0x0000bdd5) list_single_graphic_heading_pane_cp2

0xbdd5,	// (0x0000bdd5) list_single_graphic_pane_cp2_ParamLimits

0xbdd5,	// (0x0000bdd5) list_single_graphic_pane_cp2

0xbdd5,	// (0x0000bdd5) list_single_heading_pane_cp2_ParamLimits

0xbdd5,	// (0x0000bdd5) list_single_heading_pane_cp2

0x1d7f,	// (0x00001d7f) list_single_large_graphic_pane_cp2_ParamLimits

0x1d7f,	// (0x00001d7f) list_single_large_graphic_pane_cp2

0xbdd5,	// (0x0000bdd5) list_single_number_heading_pane_cp2_ParamLimits

0xbdd5,	// (0x0000bdd5) list_single_number_heading_pane_cp2

0xbdd5,	// (0x0000bdd5) list_single_number_pane_cp2_ParamLimits

0xbdd5,	// (0x0000bdd5) list_single_number_pane_cp2

0xbdd5,	// (0x0000bdd5) list_single_pane_cp2_ParamLimits

0xbdd5,	// (0x0000bdd5) list_single_pane_cp2

0x1e30,	// (0x00001e30) bg_popup_sub_pane_cp22

0x1e55,	// (0x00001e55) popup_side_volume_key_window_g1

0x1e7f,	// (0x00001e7f) popup_side_volume_key_window_t1

0x1e9b,	// (0x00001e9b) volume_small_pane_cp1

0x080b,	// (0x0000080b) bg_popup_sub_pane_cp24_ParamLimits

0x080b,	// (0x0000080b) bg_popup_sub_pane_cp24

0x1ea3,	// (0x00001ea3) fep_china_uni_candidate_pane_ParamLimits

0x1ea3,	// (0x00001ea3) fep_china_uni_candidate_pane

0x1eb7,	// (0x00001eb7) fep_china_uni_entry_pane

0x1ec7,	// (0x00001ec7) popup_fep_china_uni_window_g1

0x1ee3,	// (0x00001ee3) fep_china_uni_entry_pane_g1

0x1eeb,	// (0x00001eeb) fep_china_uni_entry_pane_g2

0x0001,

0xaaac,	// (0x0000aaac) fep_china_uni_entry_pane_g

0x1ef3,	// (0x00001ef3) fep_entry_item_pane

0x1efd,	// (0x00001efd) fep_candidate_item_pane

0x1f05,	// (0x00001f05) fep_china_uni_candidate_pane_g1

0x1f0d,	// (0x00001f0d) fep_china_uni_candidate_pane_g2

0x1f15,	// (0x00001f15) fep_china_uni_candidate_pane_g3

0x1f1d,	// (0x00001f1d) fep_china_uni_candidate_pane_g4

0x0003,

0xaab1,	// (0x0000aab1) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f25,	// (0x00001f25) fep_entry_item_pane_t1_ParamLimits

0x1f25,	// (0x00001f25) fep_entry_item_pane_t1

0x1f3b,	// (0x00001f3b) fep_candidate_item_pane_t1_ParamLimits

0x1f3b,	// (0x00001f3b) fep_candidate_item_pane_t1

0x1f50,	// (0x00001f50) fep_candidate_item_pane_t2_ParamLimits

0x1f50,	// (0x00001f50) fep_candidate_item_pane_t2

0x0001,

0xaaba,	// (0x0000aaba) fep_candidate_item_pane_t_ParamLimits

0xaaba,	// (0x0000aaba) fep_candidate_item_pane_t

0x04e9,	// (0x000004e9) list_highlight_pane_cp31_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp31

0x1f62,	// (0x00001f62) level_1_signal_lsc

0x1f6b,	// (0x00001f6b) level_2_signal_lsc

0x1f74,	// (0x00001f74) level_3_signal_lsc

0x1f7d,	// (0x00001f7d) level_4_signal_lsc

0x1f86,	// (0x00001f86) level_5_signal_lsc

0x1f8f,	// (0x00001f8f) level_6_signal_lsc

0x1f98,	// (0x00001f98) level_7_signal_lsc

0x1f98,	// (0x00001f98) level_1_battery_lsc

0x1fa1,	// (0x00001fa1) level_2_battery_lsc

0x1faa,	// (0x00001faa) level_3_battery_lsc

0x1fb3,	// (0x00001fb3) level_4_battery_lsc

0x1fbc,	// (0x00001fbc) level_5_battery_lsc

0x1fc5,	// (0x00001fc5) level_6_battery_lsc

0x1f62,	// (0x00001f62) level_7_battery_lsc

0x1fce,	// (0x00001fce) scroll_handle_focus_pane_g1

0x1fd7,	// (0x00001fd7) scroll_handle_focus_pane_g2

0x1fe0,	// (0x00001fe0) scroll_handle_focus_pane_g3

0x0002,

0xaabf,	// (0x0000aabf) scroll_handle_focus_pane_g

0xbe37,	// (0x0000be37) list_single_2graphic_pane_g1_ParamLimits

0xbe37,	// (0x0000be37) list_single_2graphic_pane_g1

0xb7ce,	// (0x0000b7ce) list_single_2graphic_pane_g2_ParamLimits

0xb7ce,	// (0x0000b7ce) list_single_2graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_2graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_2graphic_pane_g3

0xbe43,	// (0x0000be43) list_single_2graphic_pane_g4_ParamLimits

0xbe43,	// (0x0000be43) list_single_2graphic_pane_g4

0x0003,

0xeffe,	// (0x0000effe) list_single_2graphic_pane_g_ParamLimits

0xeffe,	// (0x0000effe) list_single_2graphic_pane_g

0xbe4f,	// (0x0000be4f) list_single_2graphic_pane_t1_ParamLimits

0xbe4f,	// (0x0000be4f) list_single_2graphic_pane_t1

0xbe7d,	// (0x0000be7d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbe7d,	// (0x0000be7d) list_double2_graphic_large_graphic_pane_g1

0xb80b,	// (0x0000b80b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb80b,	// (0x0000b80b) list_double2_graphic_large_graphic_pane_g2

0xb81c,	// (0x0000b81c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb81c,	// (0x0000b81c) list_double2_graphic_large_graphic_pane_g3

0xbe8f,	// (0x0000be8f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbe8f,	// (0x0000be8f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf007,	// (0x0000f007) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf007,	// (0x0000f007) list_double2_graphic_large_graphic_pane_g

0xbe9b,	// (0x0000be9b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbe9b,	// (0x0000be9b) list_double2_graphic_large_graphic_pane_t1

0xbeb1,	// (0x0000beb1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbeb1,	// (0x0000beb1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf010,	// (0x0000f010) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf010,	// (0x0000f010) list_double2_graphic_large_graphic_pane_t

0x22fb,	// (0x000022fb) popup_fast_swap_window_ParamLimits

0x22fb,	// (0x000022fb) popup_fast_swap_window

0x2317,	// (0x00002317) popup_side_volume_key_window

0x2331,	// (0x00002331) stacon_top_pane

0x233b,	// (0x0000233b) status_pane_ParamLimits

0x233b,	// (0x0000233b) status_pane

0x2331,	// (0x00002331) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x126e,	// (0x0000126e) scroll_pane_cp121

0x1265,	// (0x00001265) set_content_pane

0xbec3,	// (0x0000bec3) bg_active_tab_pane_g1_cp1

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp1

0xbecc,	// (0x0000becc) bg_active_tab_pane_g3_cp1

0xbec3,	// (0x0000bec3) bg_passive_tab_pane_g1_cp1

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp1

0xbecc,	// (0x0000becc) bg_passive_tab_pane_g3_cp1

0xbed5,	// (0x0000bed5) bg_active_tab_pane_g1_cp2

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp2

0xbede,	// (0x0000bede) bg_active_tab_pane_g3_cp2

0xbed5,	// (0x0000bed5) bg_passive_tab_pane_g1_cp2

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp2

0xbede,	// (0x0000bede) bg_passive_tab_pane_g3_cp2

0xbee7,	// (0x0000bee7) bg_active_tab_pane_g1_cp3

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp3

0xbef0,	// (0x0000bef0) bg_active_tab_pane_g3_cp3

0xbee7,	// (0x0000bee7) bg_passive_tab_pane_g1_cp3

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp3

0xbef0,	// (0x0000bef0) bg_passive_tab_pane_g3_cp3

0xbef9,	// (0x0000bef9) bg_active_tab_pane_g1_cp4

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp4

0xbf02,	// (0x0000bf02) bg_active_tab_pane_g3_cp4

0xbef9,	// (0x0000bef9) bg_passive_tab_pane_g1_cp4

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp4

0xbf02,	// (0x0000bf02) bg_passive_tab_pane_g3_cp4

0x224c,	// (0x0000224c) bg_active_tab_pane_g1_cp5

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp5

0x2255,	// (0x00002255) bg_active_tab_pane_g3_cp5

0x224c,	// (0x0000224c) bg_passive_tab_pane_g1_cp5

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp5

0x2255,	// (0x00002255) bg_passive_tab_pane_g3_cp5

0xa4b2,	// (0x0000a4b2) list_set_graphic_pane_ParamLimits

0xa4b2,	// (0x0000a4b2) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0x227c,	// (0x0000227c) list_set_graphic_pane_g1_ParamLimits

0x227c,	// (0x0000227c) list_set_graphic_pane_g1

0x2288,	// (0x00002288) list_set_graphic_pane_g2_ParamLimits

0x2288,	// (0x00002288) list_set_graphic_pane_g2

0x0001,

0xaadd,	// (0x0000aadd) list_set_graphic_pane_g_ParamLimits

0xaadd,	// (0x0000aadd) list_set_graphic_pane_g

0x0009,

0xae4e,	// (0x0000ae4e) volume_small_pane_cp_g

0x22ac,	// (0x000022ac) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x22ac,	// (0x000022ac) list_double2_large_graphic_pane_g1_cp2

0x22ba,	// (0x000022ba) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22ba,	// (0x000022ba) list_double2_large_graphic_pane_g2_cp2

0x22cb,	// (0x000022cb) list_double2_large_graphic_pane_g3_cp2

0x22d3,	// (0x000022d3) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22d3,	// (0x000022d3) list_double2_large_graphic_pane_t1_cp2

0x22e9,	// (0x000022e9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x22e9,	// (0x000022e9) list_double2_large_graphic_pane_t2_cp2

0x4a3f,	// (0x00004a3f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a3f,	// (0x00004a3f) list_double_large_graphic_pane_g1_cp2

0x4a52,	// (0x00004a52) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a52,	// (0x00004a52) list_double_large_graphic_pane_g2_cp2

0x2459,	// (0x00002459) list_double_large_graphic_pane_g3_cp2

0x4a63,	// (0x00004a63) list_double_large_graphic_pane_g4_cp

0x4a6b,	// (0x00004a6b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a6b,	// (0x00004a6b) list_double_large_graphic_pane_t1_cp2

0x4a82,	// (0x00004a82) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a82,	// (0x00004a82) list_double_large_graphic_pane_t2_cp2

0x2349,	// (0x00002349) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2349,	// (0x00002349) list_double2_graphic_pane_g1_cp2

0x2357,	// (0x00002357) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2357,	// (0x00002357) list_double2_graphic_pane_g2_cp2

0x2368,	// (0x00002368) list_double2_graphic_pane_g3_cp2

0x2372,	// (0x00002372) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2372,	// (0x00002372) list_double2_graphic_pane_t1_cp2

0x2388,	// (0x00002388) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2388,	// (0x00002388) list_double2_graphic_pane_t2_cp2

0x239a,	// (0x0000239a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x239a,	// (0x0000239a) list_single_number_heading_pane_g1_cp2

0x23a6,	// (0x000023a6) list_single_number_heading_pane_g2_cp2

0x23ae,	// (0x000023ae) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23ae,	// (0x000023ae) list_single_number_heading_pane_t1_cp2

0x23c4,	// (0x000023c4) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23c4,	// (0x000023c4) list_single_number_heading_pane_t2_cp2

0x23d8,	// (0x000023d8) list_single_number_heading_pane_t3_cp2_ParamLimits

0x23d8,	// (0x000023d8) list_single_number_heading_pane_t3_cp2

0x239a,	// (0x0000239a) list_single_heading_pane_g1_cp2_ParamLimits

0x239a,	// (0x0000239a) list_single_heading_pane_g1_cp2

0x23a6,	// (0x000023a6) list_single_heading_pane_g2_cp2

0x23ae,	// (0x000023ae) list_single_heading_pane_t1_cp2_ParamLimits

0x23ae,	// (0x000023ae) list_single_heading_pane_t1_cp2

0x4847,	// (0x00004847) list_single_heading_pane_t2_cp2_ParamLimits

0x4847,	// (0x00004847) list_single_heading_pane_t2_cp2

0x4789,	// (0x00004789) list_double_graphic_pane_g1_cp2_ParamLimits

0x4789,	// (0x00004789) list_double_graphic_pane_g1_cp2

0x4795,	// (0x00004795) list_double_graphic_pane_g2_cp2_ParamLimits

0x4795,	// (0x00004795) list_double_graphic_pane_g2_cp2

0x47a4,	// (0x000047a4) list_double_graphic_pane_g3_cp2

0x47ac,	// (0x000047ac) list_double_graphic_pane_t1_cp2_ParamLimits

0x47ac,	// (0x000047ac) list_double_graphic_pane_t1_cp2

0x47c2,	// (0x000047c2) list_double_graphic_pane_t2_cp2_ParamLimits

0x47c2,	// (0x000047c2) list_double_graphic_pane_t2_cp2

0x244d,	// (0x0000244d) list_double_number_pane_g1_cp2_ParamLimits

0x244d,	// (0x0000244d) list_double_number_pane_g1_cp2

0x2459,	// (0x00002459) list_double_number_pane_g2_cp2

0x474d,	// (0x0000474d) list_double_number_pane_t1_cp2_ParamLimits

0x474d,	// (0x0000474d) list_double_number_pane_t1_cp2

0x4761,	// (0x00004761) list_double_number_pane_t2_cp2_ParamLimits

0x4761,	// (0x00004761) list_double_number_pane_t2_cp2

0x4777,	// (0x00004777) list_double_number_pane_t3_cp2_ParamLimits

0x4777,	// (0x00004777) list_double_number_pane_t3_cp2

0x4625,	// (0x00004625) list_single_graphic_pane_g1_cp2_ParamLimits

0x4625,	// (0x00004625) list_single_graphic_pane_g1_cp2

0x24b1,	// (0x000024b1) list_single_graphic_pane_g2_cp2_ParamLimits

0x24b1,	// (0x000024b1) list_single_graphic_pane_g2_cp2

0x24bd,	// (0x000024bd) list_single_graphic_pane_g3_cp2

0x45fb,	// (0x000045fb) list_single_graphic_pane_t1_cp2_ParamLimits

0x45fb,	// (0x000045fb) list_single_graphic_pane_t1_cp2

0x24b1,	// (0x000024b1) list_single_number_pane_g1_cp2_ParamLimits

0x24b1,	// (0x000024b1) list_single_number_pane_g1_cp2

0x24bd,	// (0x000024bd) list_single_number_pane_g2_cp2

0x45fb,	// (0x000045fb) list_single_number_pane_t1_cp2_ParamLimits

0x45fb,	// (0x000045fb) list_single_number_pane_t1_cp2

0x4611,	// (0x00004611) list_single_number_pane_t2_cp2_ParamLimits

0x4611,	// (0x00004611) list_single_number_pane_t2_cp2

0x22ba,	// (0x000022ba) list_double2_pane_g1_cp2_ParamLimits

0x22ba,	// (0x000022ba) list_double2_pane_g1_cp2

0x22cb,	// (0x000022cb) list_double2_pane_g2_cp2

0x2425,	// (0x00002425) list_double2_pane_t1_cp2_ParamLimits

0x2425,	// (0x00002425) list_double2_pane_t1_cp2

0x243b,	// (0x0000243b) list_double2_pane_t2_cp2_ParamLimits

0x243b,	// (0x0000243b) list_double2_pane_t2_cp2

0x244d,	// (0x0000244d) list_double_pane_g1_cp2_ParamLimits

0x244d,	// (0x0000244d) list_double_pane_g1_cp2

0x2459,	// (0x00002459) list_double_pane_g2_cp2

0x2461,	// (0x00002461) list_double_pane_t1_cp2_ParamLimits

0x2461,	// (0x00002461) list_double_pane_t1_cp2

0x2477,	// (0x00002477) list_double_pane_t2_cp2_ParamLimits

0x2477,	// (0x00002477) list_double_pane_t2_cp2

0x24a1,	// (0x000024a1) list_single_pane_cp2_g3

0x24b1,	// (0x000024b1) list_single_pane_g1_cp2_ParamLimits

0x24b1,	// (0x000024b1) list_single_pane_g1_cp2

0x24bd,	// (0x000024bd) list_single_pane_g2_cp2

0x24c5,	// (0x000024c5) list_single_pane_t1_cp2_ParamLimits

0x24c5,	// (0x000024c5) list_single_pane_t1_cp2

0x24dd,	// (0x000024dd) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x24dd,	// (0x000024dd) list_single_large_graphic_pane_g1_cp2

0x24eb,	// (0x000024eb) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x24eb,	// (0x000024eb) list_single_large_graphic_pane_g2_cp2

0x24f7,	// (0x000024f7) list_single_large_graphic_pane_g3_cp2

0x24ff,	// (0x000024ff) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x24ff,	// (0x000024ff) list_single_large_graphic_pane_g4_cp1

0x2519,	// (0x00002519) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2519,	// (0x00002519) list_single_large_graphic_pane_t1_cp2

0x446c,	// (0x0000446c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x446c,	// (0x0000446c) list_single_graphic_heading_pane_g1_cp2

0x4439,	// (0x00004439) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4439,	// (0x00004439) list_single_graphic_heading_pane_g4_cp2

0x24bd,	// (0x000024bd) list_single_graphic_heading_pane_g5_cp2

0x4478,	// (0x00004478) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4478,	// (0x00004478) list_single_graphic_heading_pane_t1_cp2

0x448e,	// (0x0000448e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x448e,	// (0x0000448e) list_single_graphic_heading_pane_t2_cp2

0x442d,	// (0x0000442d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x442d,	// (0x0000442d) list_single_2graphic_pane_g1_cp2

0x4439,	// (0x00004439) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4439,	// (0x00004439) list_single_2graphic_pane_g2_cp2

0x24bd,	// (0x000024bd) list_single_2graphic_pane_g3_cp2

0x444a,	// (0x0000444a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x444a,	// (0x0000444a) list_single_2graphic_pane_g4_cp2

0x4456,	// (0x00004456) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4456,	// (0x00004456) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4015,	// (0x00004015) list_highlight_pane_g1_cp1

0x401d,	// (0x0000401d) list_highlight_pane_g2_cp1

0x4025,	// (0x00004025) list_highlight_pane_g3_cp1

0x402d,	// (0x0000402d) list_highlight_pane_g4_cp1

0x4035,	// (0x00004035) list_highlight_pane_g5_cp1

0x403d,	// (0x0000403d) list_highlight_pane_g6_cp1

0x4045,	// (0x00004045) list_highlight_pane_g7_cp1

0x404d,	// (0x0000404d) list_highlight_pane_g8_cp1

0x4055,	// (0x00004055) list_highlight_pane_g9_cp1

0xcd5b,	// (0x0000cd5b) form_field_slider_pane_t3

0xcd6b,	// (0x0000cd6b) form_field_slider_pane_t4

0x3f49,	// (0x00003f49) slider_form_pane_ParamLimits

0x3f49,	// (0x00003f49) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4893,	// (0x00004893) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xac6b,	// (0x0000ac6b) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x252f,	// (0x0000252f) text_digital

0x253e,	// (0x0000253e) text_primary

0x254d,	// (0x0000254d) text_primary_small

0x255c,	// (0x0000255c) text_secondary

0x256b,	// (0x0000256b) text_title

0x5193,	// (0x00005193) bg_passive_tab_pane_g1_cp3_srt

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp3_srt

0x519c,	// (0x0000519c) bg_passive_tab_pane_g3_cp3_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_srt

0x51a5,	// (0x000051a5) tabs_4_active_pane_srt_g1

0xd2ba,	// (0x0000d2ba) tabs_4_active_pane_srt_t1_ParamLimits

0xd2ba,	// (0x0000d2ba) tabs_4_active_pane_srt_t1

0x5193,	// (0x00005193) bg_active_tab_pane_g1_cp3_copy1

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp3_copy1

0x519c,	// (0x0000519c) bg_active_tab_pane_g3_cp3_copy1

0x04e9,	// (0x000004e9) tabs_2_long_active_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) tabs_2_long_active_pane_srt

0x04e9,	// (0x000004e9) tabs_2_long_passive_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) tabs_2_long_passive_pane_srt

0x2aed,	// (0x00002aed) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2aed,	// (0x00002aed) bg_passive_tab_pane_cp4_srt

0x4d50,	// (0x00004d50) bg_passive_tab_pane_g1_cp4_srt

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp4_srt

0x4d59,	// (0x00004d59) bg_passive_tab_pane_g3_cp4_srt

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_srt_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_srt

0xd096,	// (0x0000d096) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd096,	// (0x0000d096) tabs_2_long_active_pane_srt_t1

0x4d50,	// (0x00004d50) bg_active_tab_pane_g1_cp4_srt

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp4_srt

0x4d59,	// (0x00004d59) bg_active_tab_pane_g3_cp4_srt

0x080b,	// (0x0000080b) tabs_3_long_active_pane_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_active_pane_srt

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_cp_srt

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_srt

0x2aed,	// (0x00002aed) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2aed,	// (0x00002aed) bg_passive_tab_pane_cp5_srt

0x224c,	// (0x0000224c) bg_passive_tab_pane_g1_cp5_srt

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp5_srt

0x2255,	// (0x00002255) bg_passive_tab_pane_g3_cp5_srt

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_srt_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_srt

0xd080,	// (0x0000d080) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd080,	// (0x0000d080) tabs_3_long_active_pane_srt_t1

0x224c,	// (0x0000224c) bg_active_tab_pane_g1_cp5_srt

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp5_srt

0x2255,	// (0x00002255) bg_active_tab_pane_g3_cp5_srt

0x4d30,	// (0x00004d30) navi_text_pane_srt_t1

0x4d28,	// (0x00004d28) navi_icon_pane_srt_g1

0x27e3,	// (0x000027e3) midp_editing_number_pane_srt

0x257a,	// (0x0000257a) midp_ticker_pane_srt

0x27eb,	// (0x000027eb) midp_ticker_pane_srt_g1

0x27f3,	// (0x000027f3) midp_ticker_pane_srt_g2

0x0001,

0xaafc,	// (0x0000aafc) midp_ticker_pane_srt_g

0x27fb,	// (0x000027fb) midp_ticker_pane_srt_t1

0x4d19,	// (0x00004d19) midp_editing_number_pane_t1_copy1

0xbf0b,	// (0x0000bf0b) listscroll_midp_pane

0xbf0b,	// (0x0000bf0b) midp_form_pane

0x25f2,	// (0x000025f2) midp_info_popup_window_ParamLimits

0x25f2,	// (0x000025f2) midp_info_popup_window

0x1584,	// (0x00001584) bg_popup_sub_pane_cp50_ParamLimits

0x1584,	// (0x00001584) bg_popup_sub_pane_cp50

0x3c4a,	// (0x00003c4a) listscroll_midp_info_pane_ParamLimits

0x3c4a,	// (0x00003c4a) listscroll_midp_info_pane

0x3c32,	// (0x00003c32) listscroll_form_midp_pane_ParamLimits

0x3c32,	// (0x00003c32) listscroll_form_midp_pane

0x3c3e,	// (0x00003c3e) scroll_bar_cp050

0xcd4f,	// (0x0000cd4f) list_midp_pane

0x5e90,	// (0x00005e90) signal_pane_g2_cp

0x3b4c,	// (0x00003b4c) listscroll_midp_info_pane_t1_ParamLimits

0x3b4c,	// (0x00003b4c) listscroll_midp_info_pane_t1

0x3b64,	// (0x00003b64) listscroll_midp_info_pane_t2_ParamLimits

0x3b64,	// (0x00003b64) listscroll_midp_info_pane_t2

0x3ba2,	// (0x00003ba2) listscroll_midp_info_pane_t3_ParamLimits

0x3ba2,	// (0x00003ba2) listscroll_midp_info_pane_t3

0x3bdc,	// (0x00003bdc) listscroll_midp_info_pane_t4_ParamLimits

0x3bdc,	// (0x00003bdc) listscroll_midp_info_pane_t4

0x0003,

0xaba6,	// (0x0000aba6) listscroll_midp_info_pane_t_ParamLimits

0xaba6,	// (0x0000aba6) listscroll_midp_info_pane_t

0x1642,	// (0x00001642) scroll_pane_cp21

0x3af0,	// (0x00003af0) form_midp_field_choice_group_pane

0x3af9,	// (0x00003af9) form_midp_field_text_pane

0x3b32,	// (0x00003b32) form_midp_field_time_pane

0x3b3a,	// (0x00003b3a) form_midp_gauge_slider_pane

0x3b43,	// (0x00003b43) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcd33,	// (0x0000cd33) list_single_midp_pane_ParamLimits

0xcd33,	// (0x0000cd33) list_single_midp_pane

0xcd0f,	// (0x0000cd0f) form_midp_field_text_pane_t1

0x37a7,	// (0x000037a7) input_focus_pane_cp050

0x3aa3,	// (0x00003aa3) list_midp_form_text_pane

0x3a33,	// (0x00003a33) form_midp_field_choice_group_pane_t1

0x3a41,	// (0x00003a41) input_focus_pane_cp051

0x3a55,	// (0x00003a55) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a17,	// (0x00003a17) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a25,	// (0x00003a25) form_midp_field_time_pane_t2

0x0001,

0x26a2,	// (0x000026a2) aid_navinavi_width_2_pane

0xaba1,	// (0x0000aba1) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x39d7,	// (0x000039d7) form_midp_gauge_slider_pane_t1

0x39e5,	// (0x000039e5) form_midp_gauge_slider_pane_t2

0xccf3,	// (0x0000ccf3) form_midp_gauge_slider_pane_t3

0xcd01,	// (0x0000cd01) form_midp_gauge_slider_pane_t4

0x0003,

0xf051,	// (0x0000f051) form_midp_gauge_slider_pane_t

0x3a0f,	// (0x00003a0f) form_midp_slider_pane

0x04e9,	// (0x000004e9) bg_input_focus_pane_cp041_ParamLimits

0x04e9,	// (0x000004e9) bg_input_focus_pane_cp041

0x39a4,	// (0x000039a4) form_midp_gauge_wait_pane_t1_ParamLimits

0x39a4,	// (0x000039a4) form_midp_gauge_wait_pane_t1

0x39b6,	// (0x000039b6) form_midp_gauge_wait_pane_t2_ParamLimits

0x39b6,	// (0x000039b6) form_midp_gauge_wait_pane_t2

0x0001,

0xab93,	// (0x0000ab93) form_midp_gauge_wait_pane_t_ParamLimits

0xab93,	// (0x0000ab93) form_midp_gauge_wait_pane_t

0x39c8,	// (0x000039c8) form_midp_wait_pane_ParamLimits

0x39c8,	// (0x000039c8) form_midp_wait_pane

0x396e,	// (0x0000396e) form_midp_image_pane_g1

0x3977,	// (0x00003977) form_midp_image_pane_t1

0x3986,	// (0x00003986) form_midp_image_pane_t2

0x3995,	// (0x00003995) form_midp_image_pane_t3

0x0002,

0xab8c,	// (0x0000ab8c) form_midp_image_pane_t

0x3956,	// (0x00003956) list_single_midp_pane_g1

0x395f,	// (0x0000395f) list_single_midp_pane_t1

0xccdc,	// (0x0000ccdc) list_midp_form_item_pane_ParamLimits

0xccdc,	// (0x0000ccdc) list_midp_form_item_pane

0x264a,	// (0x0000264a) list_midp_form_item_pane_t1

0x2659,	// (0x00002659) midp_ticker_pane_g1

0x2665,	// (0x00002665) midp_ticker_pane_g2

0x0001,

0xaae2,	// (0x0000aae2) midp_ticker_pane_g

0xbfb7,	// (0x0000bfb7) midp_ticker_pane_t1

0xd21b,	// (0x0000d21b) midp_editing_number_pane_t1

0x4fe5,	// (0x00004fe5) midp_editing_number_pane

0x4ff4,	// (0x00004ff4) midp_ticker_pane

0x4ce1,	// (0x00004ce1) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4ce9,	// (0x00004ce9) listscroll_ai_message_pane

0x4c6b,	// (0x00004c6b) ai_message_heading_pane_g1_ParamLimits

0x4c6b,	// (0x00004c6b) ai_message_heading_pane_g1

0x4c77,	// (0x00004c77) ai_message_heading_pane_g2_ParamLimits

0x4c77,	// (0x00004c77) ai_message_heading_pane_g2

0x4c83,	// (0x00004c83) ai_message_heading_pane_g3_ParamLimits

0x4c83,	// (0x00004c83) ai_message_heading_pane_g3

0x4c8f,	// (0x00004c8f) ai_message_heading_pane_g4_ParamLimits

0x4c8f,	// (0x00004c8f) ai_message_heading_pane_g4

0x0003,

0xaccd,	// (0x0000accd) ai_message_heading_pane_g_ParamLimits

0xaccd,	// (0x0000accd) ai_message_heading_pane_g

0x4c9b,	// (0x00004c9b) ai_message_heading_pane_t1_ParamLimits

0x4c9b,	// (0x00004c9b) ai_message_heading_pane_t1

0x4cb5,	// (0x00004cb5) ai_message_heading_pane_t2_ParamLimits

0x4cb5,	// (0x00004cb5) ai_message_heading_pane_t2

0x0001,

0xacd6,	// (0x0000acd6) ai_message_heading_pane_t_ParamLimits

0xacd6,	// (0x0000acd6) ai_message_heading_pane_t

0x4cc7,	// (0x00004cc7) bg_popup_heading_pane_cp1_ParamLimits

0x4cc7,	// (0x00004cc7) bg_popup_heading_pane_cp1

0x4c59,	// (0x00004c59) list_ai_message_pane_ParamLimits

0x4c59,	// (0x00004c59) list_ai_message_pane

0x1642,	// (0x00001642) scroll_pane_cp10

0x4ba5,	// (0x00004ba5) list_ai_message_pane_g1

0x4bad,	// (0x00004bad) list_ai_message_pane_g2

0x0001,

0xacaa,	// (0x0000acaa) list_ai_message_pane_g

0x4bb5,	// (0x00004bb5) list_ai_message_pane_t1_ParamLimits

0x4bb5,	// (0x00004bb5) list_ai_message_pane_t1

0x4bca,	// (0x00004bca) list_ai_message_pane_t2_ParamLimits

0x4bca,	// (0x00004bca) list_ai_message_pane_t2

0x4bdf,	// (0x00004bdf) list_ai_message_pane_t3_ParamLimits

0x4bdf,	// (0x00004bdf) list_ai_message_pane_t3

0x4bf4,	// (0x00004bf4) list_ai_message_pane_t4_ParamLimits

0x4bf4,	// (0x00004bf4) list_ai_message_pane_t4

0x0003,

0xacaf,	// (0x0000acaf) list_ai_message_pane_t_ParamLimits

0xacaf,	// (0x0000acaf) list_ai_message_pane_t

0xd049,	// (0x0000d049) cell_ai_soft_ind_pane_ParamLimits

0xd049,	// (0x0000d049) cell_ai_soft_ind_pane

0x2683,	// (0x00002683) cell_ai_soft_ind_pane_g1_ParamLimits

0x2683,	// (0x00002683) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x2690,	// (0x00002690) text_secondary_cp56_ParamLimits

0x2690,	// (0x00002690) text_secondary_cp56

0x4b64,	// (0x00004b64) example_general_pane_ParamLimits

0x4b64,	// (0x00004b64) example_general_pane

0x4b70,	// (0x00004b70) example_parent_pane_g1_ParamLimits

0x4b70,	// (0x00004b70) example_parent_pane_g1

0x4b7c,	// (0x00004b7c) example_parent_pane_t1_ParamLimits

0x4b7c,	// (0x00004b7c) example_parent_pane_t1

0xc53d,	// (0x0000c53d) popup_preview_text_window_ParamLimits

0xc53d,	// (0x0000c53d) popup_preview_text_window

0x24a9,	// (0x000024a9) list_single_pane_cp2_g4

0x08b5,	// (0x000008b5) bg_popup_preview_window_pane_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_preview_window_pane

0x489b,	// (0x0000489b) popup_preview_text_window_t1_ParamLimits

0x489b,	// (0x0000489b) popup_preview_text_window_t1

0x48b9,	// (0x000048b9) popup_preview_text_window_t2_ParamLimits

0x48b9,	// (0x000048b9) popup_preview_text_window_t2

0x4902,	// (0x00004902) popup_preview_text_window_t3_ParamLimits

0x4902,	// (0x00004902) popup_preview_text_window_t3

0x4947,	// (0x00004947) popup_preview_text_window_t4_ParamLimits

0x4947,	// (0x00004947) popup_preview_text_window_t4

0x0004,

0xac7e,	// (0x0000ac7e) popup_preview_text_window_t_ParamLimits

0xac7e,	// (0x0000ac7e) popup_preview_text_window_t

0x49c5,	// (0x000049c5) scroll_pane_cp11

0x3617,	// (0x00003617) bg_popup_preview_window_pane_g1

0x485b,	// (0x0000485b) bg_popup_preview_window_pane_g2

0x4863,	// (0x00004863) bg_popup_preview_window_pane_g3

0x486b,	// (0x0000486b) bg_popup_preview_window_pane_g4

0x4873,	// (0x00004873) bg_popup_preview_window_pane_g5

0x487b,	// (0x0000487b) bg_popup_preview_window_pane_g6

0x4883,	// (0x00004883) bg_popup_preview_window_pane_g7

0x488b,	// (0x0000488b) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc4b9,	// (0x0000c4b9) popup_midp_note_alarm_window_ParamLimits

0xc4b9,	// (0x0000c4b9) popup_midp_note_alarm_window

0x131f,	// (0x0000131f) data_form_pane_ParamLimits

0xbb48,	// (0x0000bb48) form_field_data_pane_g1

0xbb52,	// (0x0000bb52) form_field_data_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_ParamLimits

0x135d,	// (0x0000135d) data_form_wide_pane_ParamLimits

0x1369,	// (0x00001369) form_field_data_wide_pane_g1

0x1395,	// (0x00001395) form_field_data_wide_pane_t1_ParamLimits

0x0b54,	// (0x00000b54) input_focus_pane_cp6_ParamLimits

0xbcb4,	// (0x0000bcb4) input_popup_find_pane_g1_ParamLimits

0xbcb4,	// (0x0000bcb4) input_popup_find_pane_g1

0x1971,	// (0x00001971) aid_navi_side_left_pane

0x1986,	// (0x00001986) aid_navi_side_right_pane

0x4110,	// (0x00004110) bg_popup_window_pane_cp30_ParamLimits

0x4110,	// (0x00004110) bg_popup_window_pane_cp30

0x418a,	// (0x0000418a) popup_midp_note_alarm_window_g1_ParamLimits

0x418a,	// (0x0000418a) popup_midp_note_alarm_window_g1

0x41ba,	// (0x000041ba) popup_midp_note_alarm_window_t1_ParamLimits

0x41ba,	// (0x000041ba) popup_midp_note_alarm_window_t1

0x425b,	// (0x0000425b) popup_midp_note_alarm_window_t2_ParamLimits

0x425b,	// (0x0000425b) popup_midp_note_alarm_window_t2

0x4309,	// (0x00004309) popup_midp_note_alarm_window_t3_ParamLimits

0x4309,	// (0x00004309) popup_midp_note_alarm_window_t3

0x4331,	// (0x00004331) popup_midp_note_alarm_window_t4_ParamLimits

0x4331,	// (0x00004331) popup_midp_note_alarm_window_t4

0x4351,	// (0x00004351) popup_midp_note_alarm_window_t5_ParamLimits

0x4351,	// (0x00004351) popup_midp_note_alarm_window_t5

0x000a,

0xac1b,	// (0x0000ac1b) popup_midp_note_alarm_window_t_ParamLimits

0xac1b,	// (0x0000ac1b) popup_midp_note_alarm_window_t

0x43fd,	// (0x000043fd) wait_bar_pane_cp1_ParamLimits

0x43fd,	// (0x000043fd) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3dee,	// (0x00003dee) wait_border_pane_g1_copy1

0x13af,	// (0x000013af) form_field_popup_pane_g1

0xbb6c,	// (0x0000bb6c) form_field_popup_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp7_ParamLimits

0x13d1,	// (0x000013d1) list_form_pane_ParamLimits

0x13dd,	// (0x000013dd) form_field_popup_wide_pane_g1

0x13e5,	// (0x000013e5) form_field_popup_wide_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp8_ParamLimits

0x13fa,	// (0x000013fa) list_form_wide_pane_ParamLimits

0x521d,	// (0x0000521d) aid_size_cell_graphic_pane

0xbbeb,	// (0x0000bbeb) data_form_pane_t1_ParamLimits

0xd1ff,	// (0x0000d1ff) data_form_wide_pane_t1_ParamLimits

0xc8f2,	// (0x0000c8f2) bg_status_flat_pane

0xb46d,	// (0x0000b46d) title_pane_t1_ParamLimits

0x04b1,	// (0x000004b1) title_pane_t2_ParamLimits

0x04d7,	// (0x000004d7) title_pane_t3_ParamLimits

0xef2b,	// (0x0000ef2b) title_pane_t_ParamLimits

0x1c8a,	// (0x00001c8a) level_1_signal_ParamLimits

0x1c97,	// (0x00001c97) level_2_signal_ParamLimits

0x1ca4,	// (0x00001ca4) level_3_signal_ParamLimits

0x1cb1,	// (0x00001cb1) level_4_signal_ParamLimits

0x1cbe,	// (0x00001cbe) level_5_signal_ParamLimits

0x1ccb,	// (0x00001ccb) level_6_signal_ParamLimits

0x1cd8,	// (0x00001cd8) level_7_signal_ParamLimits

0x1c8a,	// (0x00001c8a) level_1_battery_ParamLimits

0x1c97,	// (0x00001c97) level_2_battery_ParamLimits

0x1ca4,	// (0x00001ca4) level_3_battery_ParamLimits

0x1cb1,	// (0x00001cb1) level_4_battery_ParamLimits

0x1cbe,	// (0x00001cbe) level_5_battery_ParamLimits

0x1ccb,	// (0x00001ccb) level_6_battery_ParamLimits

0x1cd8,	// (0x00001cd8) level_7_battery_ParamLimits

0x4015,	// (0x00004015) bg_status_flat_pane_g1

0x401d,	// (0x0000401d) bg_status_flat_pane_g2

0x4025,	// (0x00004025) bg_status_flat_pane_g3

0x402d,	// (0x0000402d) bg_status_flat_pane_g4

0x4035,	// (0x00004035) bg_status_flat_pane_g5

0x403d,	// (0x0000403d) bg_status_flat_pane_g6

0x4045,	// (0x00004045) bg_status_flat_pane_g7

0xb501,	// (0x0000b501) tabs_3_active_pane_t1_ParamLimits

0xb501,	// (0x0000b501) tabs_3_passive_pane_t1_ParamLimits

0xb51b,	// (0x0000b51b) tabs_4_active_pane_t1_ParamLimits

0xb51b,	// (0x0000b51b) tabs_4_1_passive_pane_t1_ParamLimits

0xbcca,	// (0x0000bcca) tabs_2_active_pane_t1_ParamLimits

0xbcca,	// (0x0000bcca) tabs_2_passive_pane_t1_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_ParamLimits

0xbcdc,	// (0x0000bcdc) tabs_2_long_active_pane_t1_ParamLimits

0x2aed,	// (0x00002aed) bg_passive_tab_pane_cp4_ParamLimits

0x36d4,	// (0x000036d4) list_single_midp_graphic_pane_t1_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_ParamLimits

0xbcef,	// (0x0000bcef) tabs_3_long_active_pane_t1_ParamLimits

0x2aed,	// (0x00002aed) bg_passive_tab_pane_cp5_ParamLimits

0x36d4,	// (0x000036d4) list_single_midp_graphic_pane_t1

0xc8f2,	// (0x0000c8f2) bg_status_flat_pane_ParamLimits

0x3216,	// (0x00003216) indicator_pane_cp2_ParamLimits

0x3216,	// (0x00003216) indicator_pane_cp2

0xca69,	// (0x0000ca69) navi_pane_srt_ParamLimits

0xca69,	// (0x0000ca69) navi_pane_srt

0x335e,	// (0x0000335e) popup_clock_digital_analogue_window_cp1

0x066d,	// (0x0000066d) indicator_pane_t1

0x257a,	// (0x0000257a) copy_highlight_pane

0x257a,	// (0x0000257a) cursor_graphics_pane

0x257a,	// (0x0000257a) graphic_within_text_pane

0x257a,	// (0x0000257a) link_highlight_pane

0x4988,	// (0x00004988) popup_preview_text_window_t5_ParamLimits

0x4988,	// (0x00004988) popup_preview_text_window_t5

0x26aa,	// (0x000026aa) cursor_digital_pane

0x26aa,	// (0x000026aa) cursor_primary_pane

0x26bb,	// (0x000026bb) cursor_primary_small_pane

0x26c3,	// (0x000026c3) cursor_secondary_pane

0x26cb,	// (0x000026cb) cursor_title_pane

0x26aa,	// (0x000026aa) link_highlight_digital_pane

0x26b2,	// (0x000026b2) link_highlight_primary_pane

0x26bb,	// (0x000026bb) link_highlight_primary_small_pane

0x26c3,	// (0x000026c3) link_highlight_secondary_pane

0x26cb,	// (0x000026cb) link_highlight_title_pane

0x26aa,	// (0x000026aa) copy_highlight_digital_pane

0x26aa,	// (0x000026aa) copy_highlight_primary_pane

0x26bb,	// (0x000026bb) copy_highlight_primary_small_pane

0x26c3,	// (0x000026c3) copy_highlight_secondary_pane

0x26cb,	// (0x000026cb) copy_highlight_title_pane

0x26c3,	// (0x000026c3) graphic_text_digital_pane

0x40b3,	// (0x000040b3) graphic_text_primary_pane

0x40bc,	// (0x000040bc) graphic_text_primary_small_pane

0x26bb,	// (0x000026bb) graphic_text_secondary_pane

0x26aa,	// (0x000026aa) graphic_text_title_pane

0xbfc9,	// (0x0000bfc9) cursor_primary_pane_g1

0x40a5,	// (0x000040a5) cursor_text_primary_t1

0xcd8f,	// (0x0000cd8f) cursor_primary_small_pane_g1

0x4097,	// (0x00004097) cursor_text_primary_small_t1

0xcd85,	// (0x0000cd85) cursor_primary_small_pane_g1_copy1

0x407f,	// (0x0000407f) cursor_text_primary_small_t1_copy1

0x405d,	// (0x0000405d) cursor_text_title_t1

0xcd7b,	// (0x0000cd7b) cursor_title_pane_g1

0xbfc9,	// (0x0000bfc9) cursor_digital_pane_g1

0x26dd,	// (0x000026dd) cursor_text_digital_t1

0x3ffe,	// (0x00003ffe) link_highlight_primary_pane_g1

0x4006,	// (0x00004006) link_highlight_primary_pane_t1

0x26eb,	// (0x000026eb) link_highlight_primary_small_pane_g1

0x26f3,	// (0x000026f3) link_highlight_primary_small_pane_t1

0x26eb,	// (0x000026eb) link_highlight_secondary_pane_g1

0x2702,	// (0x00002702) link_highlight_secondary_pane_t1

0x3f72,	// (0x00003f72) link_highlight_title_pane_g1

0x3f7a,	// (0x00003f7a) link_highlight_title_pane_t1

0x3f5b,	// (0x00003f5b) link_highlight_digital_pane_g1

0x3f63,	// (0x00003f63) link_highlight_digital_pane_t1

0x3e33,	// (0x00003e33) copy_highlight_primary_pane_g1

0x3e3b,	// (0x00003e3b) copy_highlight_primary_pane_t1

0x3e0d,	// (0x00003e0d) copy_highlight_primary_small_pane_g1

0x3e24,	// (0x00003e24) copy_highlight_primary_small_pane_t1

0x2711,	// (0x00002711) copy_highlight_secondary_pane_g1

0x2719,	// (0x00002719) copy_highlight_secondary_pane_t1

0x3e0d,	// (0x00003e0d) copy_highlight_title_pane_g1

0x3e15,	// (0x00003e15) copy_highlight_title_pane_t1

0x3e33,	// (0x00003e33) copy_highlight_digital_pane_g1

0x54a3,	// (0x000054a3) copy_highlight_digital_pane_t1

0x53f7,	// (0x000053f7) graphic_text_primary_pane_g1

0x5487,	// (0x00005487) graphic_text_primary_pane_t1

0x5495,	// (0x00005495) graphic_text_primary_pane_t2

0x0001,

0xad4a,	// (0x0000ad4a) graphic_text_primary_pane_t

0x5463,	// (0x00005463) graphic_text_primary_small_pane_g1

0x546b,	// (0x0000546b) graphic_text_primary_small_pane_t1

0x5479,	// (0x00005479) graphic_text_primary_small_pane_t2

0x0001,

0xad45,	// (0x0000ad45) graphic_text_primary_small_pane_t

0x543f,	// (0x0000543f) graphic_text_secondary_pane_g1

0x5447,	// (0x00005447) graphic_text_secondary_pane_t1

0x5455,	// (0x00005455) graphic_text_secondary_pane_t2

0x0001,

0xad40,	// (0x0000ad40) graphic_text_secondary_pane_t

0x541b,	// (0x0000541b) graphic_text_title_pane_g1

0x5423,	// (0x00005423) graphic_text_title_pane_t1

0x5431,	// (0x00005431) graphic_text_title_pane_t2

0x0001,

0xad3b,	// (0x0000ad3b) graphic_text_title_pane_t

0x53f7,	// (0x000053f7) graphic_text_digital_pane_g1

0x53ff,	// (0x000053ff) graphic_text_digital_pane_t1

0x540d,	// (0x0000540d) graphic_text_digital_pane_t2

0x0001,

0xad36,	// (0x0000ad36) graphic_text_digital_pane_t

0x04e9,	// (0x000004e9) navi_icon_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04e9,	// (0x000004e9) navi_text_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) navi_text_pane_srt

0x53c2,	// (0x000053c2) navi_navi_icon_text_pane_srt

0x53ca,	// (0x000053ca) navi_navi_pane_srt_g1_ParamLimits

0x53ca,	// (0x000053ca) navi_navi_pane_srt_g1

0x53dc,	// (0x000053dc) navi_navi_pane_srt_g2_ParamLimits

0x53dc,	// (0x000053dc) navi_navi_pane_srt_g2

0x0001,

0xad31,	// (0x0000ad31) navi_navi_pane_srt_g_ParamLimits

0xad31,	// (0x0000ad31) navi_navi_pane_srt_g

0x53ee,	// (0x000053ee) navi_navi_tabs_pane_srt

0x53c2,	// (0x000053c2) navi_navi_text_pane_srt

0x53c2,	// (0x000053c2) navi_navi_volume_pane_srt

0x53b3,	// (0x000053b3) navi_navi_text_pane_srt_t1

0x538e,	// (0x0000538e) navi_navi_volume_pane_srt_g1

0x5396,	// (0x00005396) volume_small_pane_srt_ParamLimits

0x5396,	// (0x00005396) volume_small_pane_srt

0x2728,	// (0x00002728) volume_small_pane_srt_g1_ParamLimits

0x2728,	// (0x00002728) volume_small_pane_srt_g1

0x2738,	// (0x00002738) volume_small_pane_srt_g2_ParamLimits

0x2738,	// (0x00002738) volume_small_pane_srt_g2

0x2749,	// (0x00002749) volume_small_pane_srt_g3_ParamLimits

0x2749,	// (0x00002749) volume_small_pane_srt_g3

0x275a,	// (0x0000275a) volume_small_pane_srt_g4_ParamLimits

0x275a,	// (0x0000275a) volume_small_pane_srt_g4

0x276b,	// (0x0000276b) volume_small_pane_srt_g5_ParamLimits

0x276b,	// (0x0000276b) volume_small_pane_srt_g5

0x277c,	// (0x0000277c) volume_small_pane_srt_g6_ParamLimits

0x277c,	// (0x0000277c) volume_small_pane_srt_g6

0x278d,	// (0x0000278d) volume_small_pane_srt_g7_ParamLimits

0x278d,	// (0x0000278d) volume_small_pane_srt_g7

0x279e,	// (0x0000279e) volume_small_pane_srt_g8_ParamLimits

0x279e,	// (0x0000279e) volume_small_pane_srt_g8

0x27af,	// (0x000027af) volume_small_pane_srt_g9_ParamLimits

0x27af,	// (0x000027af) volume_small_pane_srt_g9

0x27c0,	// (0x000027c0) volume_small_pane_srt_g10_ParamLimits

0x27c0,	// (0x000027c0) volume_small_pane_srt_g10

0x0009,

0xaae7,	// (0x0000aae7) volume_small_pane_srt_g_ParamLimits

0xaae7,	// (0x0000aae7) volume_small_pane_srt_g

0x095e,	// (0x0000095e) query_popup_data_pane_cp2

0x537c,	// (0x0000537c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x537c,	// (0x0000537c) navi_navi_icon_text_pane_srt_t1

0x40b3,	// (0x000040b3) navi_tabs_2_long_pane_srt

0x40b3,	// (0x000040b3) navi_tabs_2_pane_srt

0x40b3,	// (0x000040b3) navi_tabs_3_long_pane_srt

0x40b3,	// (0x000040b3) navi_tabs_3_pane_srt

0x40b3,	// (0x000040b3) navi_tabs_4_pane_srt

0x5354,	// (0x00005354) tabs_2_active_pane_srt_ParamLimits

0x5354,	// (0x00005354) tabs_2_active_pane_srt

0x5364,	// (0x00005364) tabs_2_passive_pane_srt_ParamLimits

0x5364,	// (0x00005364) tabs_2_passive_pane_srt

0x37a7,	// (0x000037a7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x37a7,	// (0x000037a7) bg_passive_tab_pane_cp1_srt

0x5328,	// (0x00005328) bg_passive_tab_pane_g1_cp1_srt

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp1_srt

0x5331,	// (0x00005331) bg_passive_tab_pane_g3_cp1_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_srt

0x533a,	// (0x0000533a) tabs_2_active_pane_srt_g1

0xd337,	// (0x0000d337) tabs_2_active_pane_srt_t1_ParamLimits

0xd337,	// (0x0000d337) tabs_2_active_pane_srt_t1

0x5328,	// (0x00005328) bg_active_tab_pane_g1_cp1_srt

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp1_srt

0x5331,	// (0x00005331) bg_active_tab_pane_g3_cp1_srt

0x52f5,	// (0x000052f5) tabs_3_active_pane_srt_ParamLimits

0x52f5,	// (0x000052f5) tabs_3_active_pane_srt

0x5306,	// (0x00005306) tabs_3_passive_pane_cp_srt_ParamLimits

0x5306,	// (0x00005306) tabs_3_passive_pane_cp_srt

0x5317,	// (0x00005317) tabs_3_passive_pane_srt_ParamLimits

0x5317,	// (0x00005317) tabs_3_passive_pane_srt

0x37a7,	// (0x000037a7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x37a7,	// (0x000037a7) bg_passive_tab_pane_cp2_srt

0x27d1,	// (0x000027d1) bg_passive_tab_pane_g1_cp2_srt

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp2_srt

0x27da,	// (0x000027da) bg_passive_tab_pane_g3_cp2_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_srt

0x52db,	// (0x000052db) tabs_3_active_pane_srt_g1

0xd321,	// (0x0000d321) tabs_3_active_pane_srt_t1_ParamLimits

0xd321,	// (0x0000d321) tabs_3_active_pane_srt_t1

0x27d1,	// (0x000027d1) bg_active_tab_pane_g1_cp2_srt

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp2_srt

0x27da,	// (0x000027da) bg_active_tab_pane_g3_cp2_srt

0x5293,	// (0x00005293) tabs_4_active_pane_srt_ParamLimits

0x5293,	// (0x00005293) tabs_4_active_pane_srt

0x52a5,	// (0x000052a5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x52a5,	// (0x000052a5) tabs_4_passive_pane_cp2_srt

0x2a73,	// (0x00002a73) aid_size_cell_toolbar

0x4e33,	// (0x00004e33) main_idle_act_pane_ParamLimits

0x2c8c,	// (0x00002c8c) popup_large_graphic_colour_window_ParamLimits

0xc7bd,	// (0x0000c7bd) popup_toolbar_window_ParamLimits

0xc7bd,	// (0x0000c7bd) popup_toolbar_window

0x5035,	// (0x00005035) list_single_graphic_2heading_pane_ParamLimits

0x5035,	// (0x00005035) list_single_graphic_2heading_pane

0x19fd,	// (0x000019fd) aid_size_cell_apps_grid_lsc_pane

0x1a0f,	// (0x00001a0f) aid_size_cell_apps_grid_prt_pane

0x2aed,	// (0x00002aed) bg_wml_button_pane_cp1_ParamLimits

0x2aed,	// (0x00002aed) bg_wml_button_pane_cp1

0xcd0f,	// (0x0000cd0f) form_midp_field_text_pane_t1_ParamLimits

0x37a7,	// (0x000037a7) input_focus_pane_cp050_ParamLimits

0x3aa3,	// (0x00003aa3) list_midp_form_text_pane_ParamLimits

0x3a41,	// (0x00003a41) input_focus_pane_cp051_ParamLimits

0x3a55,	// (0x00003a55) list_midp_choice_pane_ParamLimits

0xcca4,	// (0x0000cca4) list_single_2graphic_pane_cp3_ParamLimits

0xcca4,	// (0x0000cca4) list_single_2graphic_pane_cp3

0xccba,	// (0x0000ccba) list_single_midp_graphic_pane_ParamLimits

0xccba,	// (0x0000ccba) list_single_midp_graphic_pane

0x34bb,	// (0x000034bb) list_single_graphic_2heading_pane_g1_ParamLimits

0x34bb,	// (0x000034bb) list_single_graphic_2heading_pane_g1

0x0e4b,	// (0x00000e4b) list_single_graphic_2heading_pane_g4_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_graphic_2heading_pane_g4

0x0e57,	// (0x00000e57) list_single_graphic_2heading_pane_g5_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_2heading_pane_g5

0x0002,

0xab3a,	// (0x0000ab3a) list_single_graphic_2heading_pane_g_ParamLimits

0xab3a,	// (0x0000ab3a) list_single_graphic_2heading_pane_g

0x34c7,	// (0x000034c7) list_single_graphic_2heading_pane_t1_ParamLimits

0x34c7,	// (0x000034c7) list_single_graphic_2heading_pane_t1

0x34db,	// (0x000034db) list_single_graphic_2heading_pane_t2_ParamLimits

0x34db,	// (0x000034db) list_single_graphic_2heading_pane_t2

0x34f7,	// (0x000034f7) list_single_graphic_2heading_pane_t3_ParamLimits

0x34f7,	// (0x000034f7) list_single_graphic_2heading_pane_t3

0x0002,

0xab41,	// (0x0000ab41) list_single_graphic_2heading_pane_t_ParamLimits

0xab41,	// (0x0000ab41) list_single_graphic_2heading_pane_t

0x350f,	// (0x0000350f) bg_popup_sub_pane_cp2

0x3539,	// (0x00003539) grid_toobar_pane

0x3575,	// (0x00003575) cell_toolbar_pane_ParamLimits

0x3575,	// (0x00003575) cell_toolbar_pane

0x35bb,	// (0x000035bb) cell_toolbar_pane_g1_ParamLimits

0x35bb,	// (0x000035bb) cell_toolbar_pane_g1

0x35cf,	// (0x000035cf) cell_toolbar_pane_g2_ParamLimits

0x35cf,	// (0x000035cf) cell_toolbar_pane_g2

0x0001,

0xab48,	// (0x0000ab48) cell_toolbar_pane_g_ParamLimits

0xab48,	// (0x0000ab48) cell_toolbar_pane_g

0x35f1,	// (0x000035f1) grid_highlight_pane_cp2_ParamLimits

0x35f1,	// (0x000035f1) grid_highlight_pane_cp2

0x360b,	// (0x0000360b) toolbar_button_pane

0x3617,	// (0x00003617) toolbar_button_pane_g1

0x361f,	// (0x0000361f) toolbar_button_pane_g2

0x3627,	// (0x00003627) toolbar_button_pane_g3

0x362f,	// (0x0000362f) toolbar_button_pane_g4

0x3637,	// (0x00003637) toolbar_button_pane_g5

0x363f,	// (0x0000363f) toolbar_button_pane_g6

0x3647,	// (0x00003647) toolbar_button_pane_g7

0x364f,	// (0x0000364f) toolbar_button_pane_g8

0x3657,	// (0x00003657) toolbar_button_pane_g9

0x0009,

0xab4d,	// (0x0000ab4d) toolbar_button_pane_g

0x3667,	// (0x00003667) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3667,	// (0x00003667) list_single_2graphic_pane_g1_cp3

0xcc06,	// (0x0000cc06) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcc06,	// (0x0000cc06) list_single_2graphic_pane_g2_cp3

0x23a6,	// (0x000023a6) list_single_2graphic_pane_g3_cp3

0x3684,	// (0x00003684) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3684,	// (0x00003684) list_single_2graphic_pane_g4_cp3

0x3690,	// (0x00003690) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3690,	// (0x00003690) list_single_2graphic_pane_t1_cp3

0x239a,	// (0x0000239a) list_single_midp_graphic_pane_g2_ParamLimits

0x239a,	// (0x0000239a) list_single_midp_graphic_pane_g2

0x2a7b,	// (0x00002a7b) aid_zoom_text_primary

0x2a83,	// (0x00002a83) aid_zoom_text_secondary

0x288e,	// (0x0000288e) status_small_pane_g7_ParamLimits

0x288e,	// (0x0000288e) status_small_pane_g7

0x28b1,	// (0x000028b1) status_small_pane_t1_ParamLimits

0xb449,	// (0x0000b449) title_pane_g2

0x0003,

0xef22,	// (0x0000ef22) title_pane_g

0xb6d4,	// (0x0000b6d4) aid_size_cell_colour_1_pane_ParamLimits

0xb6d4,	// (0x0000b6d4) aid_size_cell_colour_1_pane

0xb6e8,	// (0x0000b6e8) aid_size_cell_colour_2_pane_ParamLimits

0xb6e8,	// (0x0000b6e8) aid_size_cell_colour_2_pane

0xb6fc,	// (0x0000b6fc) aid_size_cell_colour_3_pane_ParamLimits

0xb6fc,	// (0x0000b6fc) aid_size_cell_colour_3_pane

0xb710,	// (0x0000b710) aid_size_cell_colour_4_pane_ParamLimits

0xb710,	// (0x0000b710) aid_size_cell_colour_4_pane

0x1878,	// (0x00001878) title_pane_stacon_g1_ParamLimits

0x1878,	// (0x00001878) title_pane_stacon_g1

0x3e92,	// (0x00003e92) popup_note_wait_window_g3_ParamLimits

0x3e92,	// (0x00003e92) popup_note_wait_window_g3

0x3f08,	// (0x00003f08) popup_note_wait_window_t5_ParamLimits

0x3f08,	// (0x00003f08) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc1e5,	// (0x0000c1e5) popup_feb_china_hwr_fs_window_ParamLimits

0xc1e5,	// (0x0000c1e5) popup_feb_china_hwr_fs_window

0xcc17,	// (0x0000cc17) aid_size_cell_hwr_fs_ParamLimits

0xcc17,	// (0x0000cc17) aid_size_cell_hwr_fs

0x37a7,	// (0x000037a7) bg_popup_sub_pane_cp3_ParamLimits

0x37a7,	// (0x000037a7) bg_popup_sub_pane_cp3

0xcc2c,	// (0x0000cc2c) grid_hwr_fs_pane_ParamLimits

0xcc2c,	// (0x0000cc2c) grid_hwr_fs_pane

0x37cb,	// (0x000037cb) linegrid_hwr_fs_pane_ParamLimits

0x37cb,	// (0x000037cb) linegrid_hwr_fs_pane

0xcc44,	// (0x0000cc44) cell_hwr_fs_pane_ParamLimits

0xcc44,	// (0x0000cc44) cell_hwr_fs_pane

0x37fd,	// (0x000037fd) linegrid_hwr_fs_pane_g1_ParamLimits

0x37fd,	// (0x000037fd) linegrid_hwr_fs_pane_g1

0xcc6a,	// (0x0000cc6a) linegrid_hwr_fs_pane_g2_ParamLimits

0xcc6a,	// (0x0000cc6a) linegrid_hwr_fs_pane_g2

0x381b,	// (0x0000381b) linegrid_hwr_fs_pane_g3_ParamLimits

0x381b,	// (0x0000381b) linegrid_hwr_fs_pane_g3

0x3827,	// (0x00003827) linegrid_hwr_fs_pane_g4_ParamLimits

0x3827,	// (0x00003827) linegrid_hwr_fs_pane_g4

0x3841,	// (0x00003841) linegrid_hwr_fs_pane_g5_ParamLimits

0x3841,	// (0x00003841) linegrid_hwr_fs_pane_g5

0x0004,

0xf03d,	// (0x0000f03d) linegrid_hwr_fs_pane_g_ParamLimits

0xf03d,	// (0x0000f03d) linegrid_hwr_fs_pane_g

0x3857,	// (0x00003857) cell_hwr_fs_pane_g1_ParamLimits

0x3857,	// (0x00003857) cell_hwr_fs_pane_g1

0x33f4,	// (0x000033f4) cell_hwr_fs_pane_g2_ParamLimits

0x33f4,	// (0x000033f4) cell_hwr_fs_pane_g2

0xcc7c,	// (0x0000cc7c) cell_hwr_fs_pane_g3_ParamLimits

0xcc7c,	// (0x0000cc7c) cell_hwr_fs_pane_g3

0xcc89,	// (0x0000cc89) cell_hwr_fs_pane_g4_ParamLimits

0xcc89,	// (0x0000cc89) cell_hwr_fs_pane_g4

0x0003,

0xf048,	// (0x0000f048) cell_hwr_fs_pane_g_ParamLimits

0xf048,	// (0x0000f048) cell_hwr_fs_pane_g

0xcc96,	// (0x0000cc96) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x1629,	// (0x00001629) aid_inside_area_popup_secondary

0xceeb,	// (0x0000ceeb) aid_inside_area_window_primary_ParamLimits

0xceeb,	// (0x0000ceeb) aid_inside_area_window_primary

0x54b2,	// (0x000054b2) ai2_news_ticker_pane

0x54ba,	// (0x000054ba) aid_size_cell_ai1_link_ParamLimits

0x54ba,	// (0x000054ba) aid_size_cell_ai1_link

0x54d4,	// (0x000054d4) popup_ai2_data_window_ParamLimits

0x54d4,	// (0x000054d4) popup_ai2_data_window

0x54e8,	// (0x000054e8) popup_ai2_link_window_ParamLimits

0x54e8,	// (0x000054e8) popup_ai2_link_window

0x37a7,	// (0x000037a7) bg_popup_sub_pane_cp4_ParamLimits

0x37a7,	// (0x000037a7) bg_popup_sub_pane_cp4

0x54fc,	// (0x000054fc) grid_ai2_link_pane_ParamLimits

0x54fc,	// (0x000054fc) grid_ai2_link_pane

0x5513,	// (0x00005513) popup_ai2_link_window_g1_ParamLimits

0x5513,	// (0x00005513) popup_ai2_link_window_g1

0x551f,	// (0x0000551f) popup_ai2_link_window_g2_ParamLimits

0x551f,	// (0x0000551f) popup_ai2_link_window_g2

0x0001,

0xad4f,	// (0x0000ad4f) popup_ai2_link_window_g_ParamLimits

0xad4f,	// (0x0000ad4f) popup_ai2_link_window_g

0x552e,	// (0x0000552e) ai2_mp_button_pane

0x5536,	// (0x00005536) ai2_mp_volume_pane

0x3a41,	// (0x00003a41) bg_popup_sub_pane_cp5_ParamLimits

0x3a41,	// (0x00003a41) bg_popup_sub_pane_cp5

0x553e,	// (0x0000553e) heading_ai2_gene_pane_ParamLimits

0x553e,	// (0x0000553e) heading_ai2_gene_pane

0x554a,	// (0x0000554a) list_ai2_gene_pane_ParamLimits

0x554a,	// (0x0000554a) list_ai2_gene_pane

0x5592,	// (0x00005592) cell_ai2_link_pane_ParamLimits

0x5592,	// (0x00005592) cell_ai2_link_pane

0x55a8,	// (0x000055a8) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5679,	// (0x00005679) ai2_mp_volume_pane_g1

0x5681,	// (0x00005681) ai2_mp_volume_pane_g2

0x55ee,	// (0x000055ee) list_ai2_gene_pane_t1

0x5689,	// (0x00005689) ai2_mp_volume_pane_g3

0x0002,

0xad68,	// (0x0000ad68) ai2_mp_volume_pane_g

0x5691,	// (0x00005691) volume_small_pane_cp3

0x569a,	// (0x0000569a) aid_size_cell_ai2_button

0x56a2,	// (0x000056a2) grid_ai2_button_pane

0x56ab,	// (0x000056ab) cell_ai2_button_pane_ParamLimits

0x56ab,	// (0x000056ab) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5639,	// (0x00005639) ai2_gene_pane_t1_ParamLimits

0x5639,	// (0x00005639) ai2_gene_pane_t1

0xc15b,	// (0x0000c15b) aid_height_parent_landscape

0xd0ad,	// (0x0000d0ad) aid_height_set_list

0x4e33,	// (0x00004e33) aid_size_parent

0x521d,	// (0x0000521d) aid_size_cell_graphic_pane_ParamLimits

0x555a,	// (0x0000555a) popup_ai2_data_window_g1_ParamLimits

0x555a,	// (0x0000555a) popup_ai2_data_window_g1

0x5566,	// (0x00005566) ai2_news_ticker_pane_g1

0x556e,	// (0x0000556e) ai2_news_ticker_pane_g2

0x0001,

0xad54,	// (0x0000ad54) ai2_news_ticker_pane_g

0x5576,	// (0x00005576) ai2_news_ticker_pane_t1

0x5584,	// (0x00005584) ai2_news_ticker_pane_t2

0x0001,

0xad59,	// (0x0000ad59) ai2_news_ticker_pane_t

0x55b1,	// (0x000055b1) heading_ai2_gene_pane_g1

0x55b9,	// (0x000055b9) heading_ai2_gene_pane_t1_ParamLimits

0x55b9,	// (0x000055b9) heading_ai2_gene_pane_t1

0x55ce,	// (0x000055ce) list_highlight_pane_cp6

0x55d6,	// (0x000055d6) ai2_gene_pane_ParamLimits

0x55d6,	// (0x000055d6) ai2_gene_pane

0x55fc,	// (0x000055fc) list_ai2_gene_pane_t2

0x0001,

0xad5e,	// (0x0000ad5e) list_ai2_gene_pane_t

0x560a,	// (0x0000560a) list_highlight_pane_cp8_ParamLimits

0x560a,	// (0x0000560a) list_highlight_pane_cp8

0x561b,	// (0x0000561b) ai2_gene_pane_g1_ParamLimits

0x561b,	// (0x0000561b) ai2_gene_pane_g1

0x562d,	// (0x0000562d) ai2_gene_pane_g2_ParamLimits

0x562d,	// (0x0000562d) ai2_gene_pane_g2

0x0001,

0xad63,	// (0x0000ad63) ai2_gene_pane_g_ParamLimits

0xad63,	// (0x0000ad63) ai2_gene_pane_g

0x0d79,	// (0x00000d79) scroll_pane_cp12

0xc11a,	// (0x0000c11a) control_pane_t3_ParamLimits

0xc11a,	// (0x0000c11a) control_pane_t3

0x28a2,	// (0x000028a2) status_small_pane_g8_ParamLimits

0x28a2,	// (0x000028a2) status_small_pane_g8

0xc278,	// (0x0000c278) popup_find_window_ParamLimits

0xc4f3,	// (0x0000c4f3) popup_note_image_window_ParamLimits

0x34bb,	// (0x000034bb) list_double2_graphic_pane_vc_g1_ParamLimits

0x34bb,	// (0x000034bb) list_double2_graphic_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double2_graphic_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double2_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double2_graphic_pane_vc_g3

0x0002,

0xab3a,	// (0x0000ab3a) list_double2_graphic_pane_vc_g_ParamLimits

0xab3a,	// (0x0000ab3a) list_double2_graphic_pane_vc_g

0x35a5,	// (0x000035a5) list_double2_graphic_pane_vc_t1_ParamLimits

0x35a5,	// (0x000035a5) list_double2_graphic_pane_vc_t1

0x0e4b,	// (0x00000e4b) list_single_heading_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_heading_pane_vc_g1

0x0e57,	// (0x00000e57) list_single_heading_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_heading_pane_vc_g2

0x0001,

0xab62,	// (0x0000ab62) list_single_heading_pane_vc_g_ParamLimits

0xab62,	// (0x0000ab62) list_single_heading_pane_vc_g

0x36aa,	// (0x000036aa) list_single_heading_pane_vc_t1_ParamLimits

0x36aa,	// (0x000036aa) list_single_heading_pane_vc_t1

0x36c0,	// (0x000036c0) list_single_heading_pane_vc_t2_ParamLimits

0x36c0,	// (0x000036c0) list_single_heading_pane_vc_t2

0x0001,

0xab67,	// (0x0000ab67) list_single_heading_pane_vc_t_ParamLimits

0xab67,	// (0x0000ab67) list_single_heading_pane_vc_t

0x36ea,	// (0x000036ea) list_setting_number_pane_vc_g1_ParamLimits

0x36ea,	// (0x000036ea) list_setting_number_pane_vc_g1

0x36f6,	// (0x000036f6) list_setting_number_pane_vc_g2_ParamLimits

0x36f6,	// (0x000036f6) list_setting_number_pane_vc_g2

0x0001,

0xab6c,	// (0x0000ab6c) list_setting_number_pane_vc_g_ParamLimits

0xab6c,	// (0x0000ab6c) list_setting_number_pane_vc_g

0x3702,	// (0x00003702) list_setting_number_pane_vc_t1_ParamLimits

0x3702,	// (0x00003702) list_setting_number_pane_vc_t1

0x3716,	// (0x00003716) list_setting_number_pane_vc_t2_ParamLimits

0x3716,	// (0x00003716) list_setting_number_pane_vc_t2

0x3732,	// (0x00003732) list_setting_number_pane_vc_t3_ParamLimits

0x3732,	// (0x00003732) list_setting_number_pane_vc_t3

0x0002,

0xab71,	// (0x0000ab71) list_setting_number_pane_vc_t_ParamLimits

0xab71,	// (0x0000ab71) list_setting_number_pane_vc_t

0x375a,	// (0x0000375a) set_value_pane_vc_ParamLimits

0x375a,	// (0x0000375a) set_value_pane_vc

0x5035,	// (0x00005035) list_double2_graphic_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_double2_graphic_pane_vc

0x5035,	// (0x00005035) list_double2_large_graphic_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_double2_large_graphic_pane_vc

0x5035,	// (0x00005035) list_double2_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_double2_pane_vc

0x5035,	// (0x00005035) list_double_graphic_heading_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_double_graphic_heading_pane_vc

0x5035,	// (0x00005035) list_double_graphic_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_double_graphic_pane_vc

0x5035,	// (0x00005035) list_double_heading_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_double_heading_pane_vc

0x5035,	// (0x00005035) list_double_large_graphic_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_double_large_graphic_pane_vc

0x5035,	// (0x00005035) list_double_number_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_double_number_pane_vc

0x5035,	// (0x00005035) list_double_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_double_pane_vc

0x5035,	// (0x00005035) list_double_time_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_double_time_pane_vc

0x5035,	// (0x00005035) list_setting_number_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_setting_number_pane_vc

0x5035,	// (0x00005035) list_setting_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_setting_pane_vc

0x5035,	// (0x00005035) list_single_graphic_heading_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_single_graphic_heading_pane_vc

0x5035,	// (0x00005035) list_single_heading_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_single_heading_pane_vc

0x5035,	// (0x00005035) list_single_number_heading_pane_vc_ParamLimits

0x5035,	// (0x00005035) list_single_number_heading_pane_vc

0x34bb,	// (0x000034bb) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x34bb,	// (0x000034bb) list_double_graphic_heading_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_graphic_heading_pane_vc_g2

0x0e57,	// (0x00000e57) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double_graphic_heading_pane_vc_g3

0x0002,

0xab3a,	// (0x0000ab3a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xab3a,	// (0x0000ab3a) list_double_graphic_heading_pane_vc_g

0x56df,	// (0x000056df) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56df,	// (0x000056df) list_double_graphic_heading_pane_vc_t1

0x36aa,	// (0x000036aa) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x36aa,	// (0x000036aa) list_double_graphic_heading_pane_vc_t2

0x0001,

0xad6f,	// (0x0000ad6f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xad6f,	// (0x0000ad6f) list_double_graphic_heading_pane_vc_t

0x36ea,	// (0x000036ea) list_setting_pane_vc_g1_ParamLimits

0x36ea,	// (0x000036ea) list_setting_pane_vc_g1

0x36f6,	// (0x000036f6) list_setting_pane_vc_g2_ParamLimits

0x36f6,	// (0x000036f6) list_setting_pane_vc_g2

0x0001,

0xab6c,	// (0x0000ab6c) list_setting_pane_vc_g_ParamLimits

0xab6c,	// (0x0000ab6c) list_setting_pane_vc_g

0x5928,	// (0x00005928) list_setting_pane_vc_t1_ParamLimits

0x5928,	// (0x00005928) list_setting_pane_vc_t1

0x593c,	// (0x0000593c) list_setting_pane_vc_t2_ParamLimits

0x593c,	// (0x0000593c) list_setting_pane_vc_t2

0x0001,

0xadb2,	// (0x0000adb2) list_setting_pane_vc_t_ParamLimits

0xadb2,	// (0x0000adb2) list_setting_pane_vc_t

0x375a,	// (0x0000375a) set_value_pane_cp_vc_ParamLimits

0x375a,	// (0x0000375a) set_value_pane_cp_vc

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_vc_g1

0x0e57,	// (0x00000e57) list_single_number_heading_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_number_heading_pane_vc_g2

0x0001,

0xab62,	// (0x0000ab62) list_single_number_heading_pane_vc_g_ParamLimits

0xab62,	// (0x0000ab62) list_single_number_heading_pane_vc_g

0x36aa,	// (0x000036aa) list_single_number_heading_pane_vc_t1_ParamLimits

0x36aa,	// (0x000036aa) list_single_number_heading_pane_vc_t1

0x595e,	// (0x0000595e) list_single_number_heading_pane_vc_t2_ParamLimits

0x595e,	// (0x0000595e) list_single_number_heading_pane_vc_t2

0x5972,	// (0x00005972) list_single_number_heading_pane_vc_t3_ParamLimits

0x5972,	// (0x00005972) list_single_number_heading_pane_vc_t3

0x0002,

0xadb7,	// (0x0000adb7) list_single_number_heading_pane_vc_t_ParamLimits

0xadb7,	// (0x0000adb7) list_single_number_heading_pane_vc_t

0x34bb,	// (0x000034bb) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x34bb,	// (0x000034bb) list_single_graphic_heading_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_graphic_heading_pane_vc_g4

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_vc_g5

0x0002,

0xab3a,	// (0x0000ab3a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xab3a,	// (0x0000ab3a) list_single_graphic_heading_pane_vc_g

0x36aa,	// (0x000036aa) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x36aa,	// (0x000036aa) list_single_graphic_heading_pane_vc_t1

0x5984,	// (0x00005984) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5984,	// (0x00005984) list_single_graphic_heading_pane_vc_t2

0x0001,

0xadbe,	// (0x0000adbe) list_single_graphic_heading_pane_vc_t_ParamLimits

0xadbe,	// (0x0000adbe) list_single_graphic_heading_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double2_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_pane_vc_g1

0x0e57,	// (0x00000e57) list_double2_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double2_pane_vc_g2

0x0001,

0xab62,	// (0x0000ab62) list_double2_pane_vc_g_ParamLimits

0xab62,	// (0x0000ab62) list_double2_pane_vc_g

0x5998,	// (0x00005998) list_double2_pane_vc_t1_ParamLimits

0x5998,	// (0x00005998) list_double2_pane_vc_t1

0x59ae,	// (0x000059ae) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x59ae,	// (0x000059ae) list_double2_large_graphic_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_large_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double2_large_graphic_pane_vc_g3

0x0002,

0xadc3,	// (0x0000adc3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xadc3,	// (0x0000adc3) list_double2_large_graphic_pane_vc_g

0x59ba,	// (0x000059ba) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59ba,	// (0x000059ba) list_double2_large_graphic_pane_vc_t1

0x59d0,	// (0x000059d0) list_double_time_pane_vc_g1_ParamLimits

0x59d0,	// (0x000059d0) list_double_time_pane_vc_g1

0x59dc,	// (0x000059dc) list_double_time_pane_vc_g2_ParamLimits

0x59dc,	// (0x000059dc) list_double_time_pane_vc_g2

0x0001,

0xadca,	// (0x0000adca) list_double_time_pane_vc_g_ParamLimits

0xadca,	// (0x0000adca) list_double_time_pane_vc_g

0x59e8,	// (0x000059e8) list_double_time_pane_vc_t1_ParamLimits

0x59e8,	// (0x000059e8) list_double_time_pane_vc_t1

0x5a01,	// (0x00005a01) list_double_time_pane_vc_t2_ParamLimits

0x5a01,	// (0x00005a01) list_double_time_pane_vc_t2

0x5a21,	// (0x00005a21) list_double_time_pane_vc_t3_ParamLimits

0x5a21,	// (0x00005a21) list_double_time_pane_vc_t3

0x5a39,	// (0x00005a39) list_double_time_pane_vc_t4_ParamLimits

0x5a39,	// (0x00005a39) list_double_time_pane_vc_t4

0x0003,

0xadcf,	// (0x0000adcf) list_double_time_pane_vc_t_ParamLimits

0xadcf,	// (0x0000adcf) list_double_time_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_pane_vc_g1

0x0e57,	// (0x00000e57) list_double_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double_pane_vc_g2

0x0001,

0xab62,	// (0x0000ab62) list_double_pane_vc_g_ParamLimits

0xab62,	// (0x0000ab62) list_double_pane_vc_g

0x5a4d,	// (0x00005a4d) list_double_pane_vc_t1_ParamLimits

0x5a4d,	// (0x00005a4d) list_double_pane_vc_t1

0x5a5f,	// (0x00005a5f) list_double_pane_vc_t2_ParamLimits

0x5a5f,	// (0x00005a5f) list_double_pane_vc_t2

0x0001,

0xadd8,	// (0x0000add8) list_double_pane_vc_t_ParamLimits

0xadd8,	// (0x0000add8) list_double_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double_number_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_number_pane_vc_g1

0x0e57,	// (0x00000e57) list_double_number_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double_number_pane_vc_g2

0x0001,

0xab62,	// (0x0000ab62) list_double_number_pane_vc_g_ParamLimits

0xab62,	// (0x0000ab62) list_double_number_pane_vc_g

0x5a77,	// (0x00005a77) list_double_number_pane_vc_t1_ParamLimits

0x5a77,	// (0x00005a77) list_double_number_pane_vc_t1

0x5a8b,	// (0x00005a8b) list_double_number_pane_vc_t2_ParamLimits

0x5a8b,	// (0x00005a8b) list_double_number_pane_vc_t2

0x5a5f,	// (0x00005a5f) list_double_number_pane_vc_t3_ParamLimits

0x5a5f,	// (0x00005a5f) list_double_number_pane_vc_t3

0x0002,

0xaddd,	// (0x0000addd) list_double_number_pane_vc_t_ParamLimits

0xaddd,	// (0x0000addd) list_double_number_pane_vc_t

0x5a9d,	// (0x00005a9d) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5a9d,	// (0x00005a9d) list_double_large_graphic_pane_vc_g1

0x5aa9,	// (0x00005aa9) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5aa9,	// (0x00005aa9) list_double_large_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double_large_graphic_pane_vc_g3

0x5ab8,	// (0x00005ab8) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5ab8,	// (0x00005ab8) list_double_large_graphic_pane_vc_g4

0x0003,

0xade4,	// (0x0000ade4) list_double_large_graphic_pane_vc_g_ParamLimits

0xade4,	// (0x0000ade4) list_double_large_graphic_pane_vc_g

0x5ac4,	// (0x00005ac4) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5ac4,	// (0x00005ac4) list_double_large_graphic_pane_vc_t1

0x5ad6,	// (0x00005ad6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5ad6,	// (0x00005ad6) list_double_large_graphic_pane_vc_t2

0x0001,

0xaded,	// (0x0000aded) list_double_large_graphic_pane_vc_t_ParamLimits

0xaded,	// (0x0000aded) list_double_large_graphic_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double_heading_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_heading_pane_vc_g1

0x0e57,	// (0x00000e57) list_double_heading_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double_heading_pane_vc_g2

0x0001,

0xab62,	// (0x0000ab62) list_double_heading_pane_vc_g_ParamLimits

0xab62,	// (0x0000ab62) list_double_heading_pane_vc_g

0x5aef,	// (0x00005aef) list_double_heading_pane_vc_t1_ParamLimits

0x5aef,	// (0x00005aef) list_double_heading_pane_vc_t1

0x36aa,	// (0x000036aa) list_double_heading_pane_vc_t2_ParamLimits

0x36aa,	// (0x000036aa) list_double_heading_pane_vc_t2

0x0001,

0xadf2,	// (0x0000adf2) list_double_heading_pane_vc_t_ParamLimits

0xadf2,	// (0x0000adf2) list_double_heading_pane_vc_t

0x34bb,	// (0x000034bb) list_double_graphic_pane_vc_g1_ParamLimits

0x34bb,	// (0x000034bb) list_double_graphic_pane_vc_g1

0x5b03,	// (0x00005b03) list_double_graphic_pane_vc_g2_ParamLimits

0x5b03,	// (0x00005b03) list_double_graphic_pane_vc_g2

0x5b12,	// (0x00005b12) list_double_graphic_pane_vc_g3_ParamLimits

0x5b12,	// (0x00005b12) list_double_graphic_pane_vc_g3

0x0002,

0xadf7,	// (0x0000adf7) list_double_graphic_pane_vc_g_ParamLimits

0xadf7,	// (0x0000adf7) list_double_graphic_pane_vc_g

0x5b1e,	// (0x00005b1e) list_double_graphic_pane_vc_t1_ParamLimits

0x5b1e,	// (0x00005b1e) list_double_graphic_pane_vc_t1

0x5a5f,	// (0x00005a5f) list_double_graphic_pane_vc_t2_ParamLimits

0x5a5f,	// (0x00005a5f) list_double_graphic_pane_vc_t2

0x0001,

0xadfe,	// (0x0000adfe) list_double_graphic_pane_vc_t_ParamLimits

0xadfe,	// (0x0000adfe) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb297,	// (0x0000b297) aid_size_cell_touch_ParamLimits

0xb297,	// (0x0000b297) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb3e2,	// (0x0000b3e2) touch_pane_ParamLimits

0xb3e2,	// (0x0000b3e2) touch_pane

0x1277,	// (0x00001277) button_value_adjust_pane_cp2

0x1277,	// (0x00001277) button_value_adjust_pane_cp4

0x1297,	// (0x00001297) form_field_data_pane_cp2

0xbb09,	// (0x0000bb09) form_field_data_wide_pane_cp2

0x1ae3,	// (0x00001ae3) bg_scroll_pane_ParamLimits

0x1b02,	// (0x00001b02) scroll_handle_pane_ParamLimits

0x1b16,	// (0x00001b16) scroll_sc2_down_pane_ParamLimits

0x1b16,	// (0x00001b16) scroll_sc2_down_pane

0x1b3d,	// (0x00001b3d) scroll_sc2_up_pane_ParamLimits

0x1b3d,	// (0x00001b3d) scroll_sc2_up_pane

0xd46e,	// (0x0000d46e) grid_wheel_folder_pane_g1_ParamLimits

0xd46e,	// (0x0000d46e) grid_wheel_folder_pane_g1

0x21c8,	// (0x000021c8) clock_nsta_pane_cp2_ParamLimits

0x21c8,	// (0x000021c8) clock_nsta_pane_cp2

0xbf0b,	// (0x0000bf0b) listscroll_midp_pane_ParamLimits

0xbf1c,	// (0x0000bf1c) midp_canvas_pane

0x2a61,	// (0x00002a61) nsta_clock_indic_pane

0x2abf,	// (0x00002abf) listscroll_form_pane_vc

0x2adb,	// (0x00002adb) listscroll_set_pane_vc_ParamLimits

0x2adb,	// (0x00002adb) listscroll_set_pane_vc

0xc91a,	// (0x0000c91a) clock_nsta_pane

0xc944,	// (0x0000c944) indicator_nsta_pane

0x350f,	// (0x0000350f) bg_popup_sub_pane_cp2_ParamLimits

0x3523,	// (0x00003523) find_pane_cp2_ParamLimits

0x3523,	// (0x00003523) find_pane_cp2

0x3539,	// (0x00003539) grid_toobar_pane_ParamLimits

0x3766,	// (0x00003766) list_form_gen_pane_vc_ParamLimits

0x3766,	// (0x00003766) list_form_gen_pane_vc

0x377c,	// (0x0000377c) scroll_pane_cp8_vc_ParamLimits

0x377c,	// (0x0000377c) scroll_pane_cp8_vc

0x3895,	// (0x00003895) data_form_wide_pane_vc_ParamLimits

0x3895,	// (0x00003895) data_form_wide_pane_vc

0x38a1,	// (0x000038a1) form_field_data_wide_pane_vc_g1

0x38a9,	// (0x000038a9) form_field_data_wide_pane_vc_t1_ParamLimits

0x38a9,	// (0x000038a9) form_field_data_wide_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp6_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp6_vc

0xcd4f,	// (0x0000cd4f) list_midp_pane_ParamLimits

0x5287,	// (0x00005287) scroll_pane_cp16_ParamLimits

0x5287,	// (0x00005287) scroll_pane_cp16

0x3c6c,	// (0x00003c6c) button_value_adjust_pane_ParamLimits

0x3c6c,	// (0x00003c6c) button_value_adjust_pane

0xd0be,	// (0x0000d0be) button_value_adjust_pane_cp6_ParamLimits

0xd0be,	// (0x0000d0be) button_value_adjust_pane_cp6

0xd1d4,	// (0x0000d1d4) settings_code_pane_cp_ParamLimits

0xd1d4,	// (0x0000d1d4) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xaa91,	// (0x0000aa91) cell_touch_pane_g

0xd34d,	// (0x0000d34d) cell_touch_pane_cp_ParamLimits

0xd34d,	// (0x0000d34d) cell_touch_pane_cp

0xd369,	// (0x0000d369) cell_touch_pane_ParamLimits

0xd369,	// (0x0000d369) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x56f3,	// (0x000056f3) list_set_graphic_pane_vc_g1_ParamLimits

0x56f3,	// (0x000056f3) list_set_graphic_pane_vc_g1

0x56ff,	// (0x000056ff) list_set_graphic_pane_vc_g2_ParamLimits

0x56ff,	// (0x000056ff) list_set_graphic_pane_vc_g2

0x0001,

0xad74,	// (0x0000ad74) list_set_graphic_pane_vc_g_ParamLimits

0xad74,	// (0x0000ad74) list_set_graphic_pane_vc_g

0x570b,	// (0x0000570b) text_primary_small_cp13_vc_ParamLimits

0x570b,	// (0x0000570b) text_primary_small_cp13_vc

0x5723,	// (0x00005723) list_set_graphic_pane_vc_ParamLimits

0x5723,	// (0x00005723) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x5737,	// (0x00005737) setting_code_pane_vc_t1

0x5745,	// (0x00005745) set_text_pane_vc_t1_ParamLimits

0x5745,	// (0x00005745) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5764,	// (0x00005764) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x576e,	// (0x0000576e) setting_slider_graphic_pane_vc_g1

0x5776,	// (0x00005776) setting_slider_graphic_pane_vc_t1

0x5784,	// (0x00005784) setting_slider_graphic_pane_vc_t2

0x0001,

0xad79,	// (0x0000ad79) setting_slider_graphic_pane_vc_t

0x5792,	// (0x00005792) slider_set_pane_cp_vc

0x579a,	// (0x0000579a) slider_set_pane_vc_g1

0x57a3,	// (0x000057a3) slider_set_pane_vc_g2

0x0006,

0xad7e,	// (0x0000ad7e) slider_set_pane_vc_g

0x148b,	// (0x0000148b) set_opt_bg_pane_g1_copy1

0x1493,	// (0x00001493) set_opt_bg_pane_g2_copy1

0x57cf,	// (0x000057cf) set_opt_bg_pane_g3_copy1

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4_copy1

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5_copy1

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6_copy1

0x57d7,	// (0x000057d7) set_opt_bg_pane_g7_copy1

0x57e1,	// (0x000057e1) set_opt_bg_pane_g8_copy1

0x57e9,	// (0x000057e9) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x57f1,	// (0x000057f1) setting_slider_pane_vc_t1

0x5776,	// (0x00005776) setting_slider_pane_vc_t2

0x5784,	// (0x00005784) setting_slider_pane_vc_t3

0x0002,

0xad8d,	// (0x0000ad8d) setting_slider_pane_vc_t

0x5792,	// (0x00005792) slider_set_pane_vc

0x44a2,	// (0x000044a2) volume_set_pane_vc_g1

0x5800,	// (0x00005800) volume_set_pane_vc_g2

0x5809,	// (0x00005809) volume_set_pane_vc_g3

0x5812,	// (0x00005812) volume_set_pane_vc_g4

0x581b,	// (0x0000581b) volume_set_pane_vc_g5

0x5824,	// (0x00005824) volume_set_pane_vc_g6

0x582d,	// (0x0000582d) volume_set_pane_vc_g7

0x5836,	// (0x00005836) volume_set_pane_vc_g8

0x583f,	// (0x0000583f) volume_set_pane_vc_g9

0x5848,	// (0x00005848) volume_set_pane_vc_g10

0x0009,

0xad94,	// (0x0000ad94) volume_set_pane_vc_g

0x5851,	// (0x00005851) volume_set_pane_vc

0x5859,	// (0x00005859) button_value_adjust_pane_cp1_vc

0x5863,	// (0x00005863) list_highlight_pane_cp2_vc

0x586c,	// (0x0000586c) list_set_pane_vc_ParamLimits

0x586c,	// (0x0000586c) list_set_pane_vc

0x58be,	// (0x000058be) main_pane_set_vc_t1_ParamLimits

0x58be,	// (0x000058be) main_pane_set_vc_t1

0x58d3,	// (0x000058d3) main_pane_set_vc_t2_ParamLimits

0x58d3,	// (0x000058d3) main_pane_set_vc_t2

0x58e5,	// (0x000058e5) main_pane_set_vc_t3_ParamLimits

0x58e5,	// (0x000058e5) main_pane_set_vc_t3

0x58f7,	// (0x000058f7) main_pane_set_vc_t4_ParamLimits

0x58f7,	// (0x000058f7) main_pane_set_vc_t4

0x0003,

0xada9,	// (0x0000ada9) main_pane_set_vc_t_ParamLimits

0xada9,	// (0x0000ada9) main_pane_set_vc_t

0x5909,	// (0x00005909) setting_code_pane_vc_ParamLimits

0x5909,	// (0x00005909) setting_code_pane_vc

0x5918,	// (0x00005918) setting_slider_graphic_pane_vc

0x5918,	// (0x00005918) setting_slider_pane_vc

0x5918,	// (0x00005918) setting_text_pane_vc

0x5918,	// (0x00005918) setting_volume_pane_vc

0x5920,	// (0x00005920) scroll_pane_cp121_vc

0x1265,	// (0x00001265) set_content_pane_vc

0x5b30,	// (0x00005b30) button_value_adjust_pane_g1

0x5b39,	// (0x00005b39) button_value_adjust_pane_g2

0x0001,

0xae03,	// (0x0000ae03) button_value_adjust_pane_g

0x5b42,	// (0x00005b42) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5b42,	// (0x00005b42) form_field_slider_wide_pane_vc_t1

0x5b56,	// (0x00005b56) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5b56,	// (0x00005b56) form_field_slider_wide_pane_vc_t2

0x0001,

0xae08,	// (0x0000ae08) form_field_slider_wide_pane_vc_t_ParamLimits

0xae08,	// (0x0000ae08) form_field_slider_wide_pane_vc_t

0x080b,	// (0x0000080b) input_focus_pane_cp10_vc_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp10_vc

0x5b68,	// (0x00005b68) slider_cont_pane_cp1_vc_ParamLimits

0x5b68,	// (0x00005b68) slider_cont_pane_cp1_vc

0x579a,	// (0x0000579a) slider_form_pane_g1_cp2

0x57a3,	// (0x000057a3) slider_form_pane_g2_cp2

0x5b81,	// (0x00005b81) form_field_slider_pane_vc_t3

0x5b8f,	// (0x00005b8f) form_field_slider_pane_vc_t4

0x5b9d,	// (0x00005b9d) slider_form_pane_vc_ParamLimits

0x5b9d,	// (0x00005b9d) slider_form_pane_vc

0x5baa,	// (0x00005baa) form_field_slider_pane_vc_t1_ParamLimits

0x5baa,	// (0x00005baa) form_field_slider_pane_vc_t1

0x5b56,	// (0x00005b56) form_field_slider_pane_vc_t2_ParamLimits

0x5b56,	// (0x00005b56) form_field_slider_pane_vc_t2

0x0001,

0xae18,	// (0x0000ae18) form_field_slider_pane_vc_t_ParamLimits

0xae18,	// (0x0000ae18) form_field_slider_pane_vc_t

0x080b,	// (0x0000080b) input_focus_pane_cp9_vc_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp9_vc

0x5bc6,	// (0x00005bc6) slider_cont_pane_vc_ParamLimits

0x5bc6,	// (0x00005bc6) slider_cont_pane_vc

0x5bd8,	// (0x00005bd8) list_form_graphic_pane_cp_vc_ParamLimits

0x5bd8,	// (0x00005bd8) list_form_graphic_pane_cp_vc

0x38a1,	// (0x000038a1) form_field_popup_wide_pane_vc_g1

0x5bed,	// (0x00005bed) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5bed,	// (0x00005bed) form_field_popup_wide_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp8_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp8_vc

0x5c04,	// (0x00005c04) list_form_wide_pane_vc_ParamLimits

0x5c04,	// (0x00005c04) list_form_wide_pane_vc

0x5c10,	// (0x00005c10) list_form_graphic_pane_vc_g1

0x5c18,	// (0x00005c18) list_form_graphic_pane_vc_t1_ParamLimits

0x5c18,	// (0x00005c18) list_form_graphic_pane_vc_t1

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_vc_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_vc

0x5c34,	// (0x00005c34) list_form_graphic_pane_vc_ParamLimits

0x5c34,	// (0x00005c34) list_form_graphic_pane_vc

0x38a1,	// (0x000038a1) form_field_popup_pane_vc_g1

0x5c4a,	// (0x00005c4a) form_field_popup_pane_vc_t1_ParamLimits

0x5c4a,	// (0x00005c4a) form_field_popup_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp7_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp7_vc

0x5c61,	// (0x00005c61) list_form_pane_vc_ParamLimits

0x5c61,	// (0x00005c61) list_form_pane_vc

0x5c6d,	// (0x00005c6d) data_form_pane_vc_t1_ParamLimits

0x5c6d,	// (0x00005c6d) data_form_pane_vc_t1

0x148b,	// (0x0000148b) input_focus_pane_vc_g1

0x1493,	// (0x00001493) input_focus_pane_vc_g2

0x149b,	// (0x0000149b) input_focus_pane_vc_g3

0x14a3,	// (0x000014a3) input_focus_pane_vc_g4

0x14ab,	// (0x000014ab) input_focus_pane_vc_g5

0x14b3,	// (0x000014b3) input_focus_pane_vc_g6

0x14bb,	// (0x000014bb) input_focus_pane_vc_g7

0x14c3,	// (0x000014c3) input_focus_pane_vc_g8

0x14cb,	// (0x000014cb) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xaa1a,	// (0x0000aa1a) input_focus_pane_vc_g

0x3895,	// (0x00003895) data_form_pane_vc_ParamLimits

0x3895,	// (0x00003895) data_form_pane_vc

0x38a1,	// (0x000038a1) form_field_data_pane_vc_g1

0x5c88,	// (0x00005c88) form_field_data_pane_vc_t1_ParamLimits

0x5c88,	// (0x00005c88) form_field_data_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_vc

0x5ca2,	// (0x00005ca2) button_value_adjust_pane_cp3_vc

0x5caa,	// (0x00005caa) button_value_adjust_pane_cp5_vc

0x5cb2,	// (0x00005cb2) form_field_data_pane_vc_ParamLimits

0x5cb2,	// (0x00005cb2) form_field_data_pane_vc

0x5cc9,	// (0x00005cc9) form_field_data_pane_vc_cp2

0x5cd1,	// (0x00005cd1) form_field_data_wide_pane_vc_ParamLimits

0x5cd1,	// (0x00005cd1) form_field_data_wide_pane_vc

0x5ce7,	// (0x00005ce7) form_field_data_wide_pane_vc_cp2

0x5cef,	// (0x00005cef) form_field_popup_pane_vc_ParamLimits

0x5cef,	// (0x00005cef) form_field_popup_pane_vc

0x5d06,	// (0x00005d06) form_field_popup_wide_pane_vc_ParamLimits

0x5d06,	// (0x00005d06) form_field_popup_wide_pane_vc

0x5d1c,	// (0x00005d1c) form_field_slider_pane_vc_ParamLimits

0x5d1c,	// (0x00005d1c) form_field_slider_pane_vc

0x5d2f,	// (0x00005d2f) form_field_slider_wide_pane_vc_ParamLimits

0x5d2f,	// (0x00005d2f) form_field_slider_wide_pane_vc

0xd387,	// (0x0000d387) grid_touch_1_pane_ParamLimits

0xd387,	// (0x0000d387) grid_touch_1_pane

0xd39b,	// (0x0000d39b) grid_touch_2_pane_ParamLimits

0xd39b,	// (0x0000d39b) grid_touch_2_pane

0x5e04,	// (0x00005e04) touch_pane_g1_ParamLimits

0x5e04,	// (0x00005e04) touch_pane_g1

0x5d66,	// (0x00005d66) cell_app_pane_cp_wide_ParamLimits

0x5d66,	// (0x00005d66) cell_app_pane_cp_wide

0x5d77,	// (0x00005d77) grid_popup_fast_wide_pane_ParamLimits

0x5d77,	// (0x00005d77) grid_popup_fast_wide_pane

0x5d8b,	// (0x00005d8b) scroll_pane_cp19_ParamLimits

0x5d8b,	// (0x00005d8b) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5d9f,	// (0x00005d9f) listscroll_popup_fast_wide_pane

0x1694,	// (0x00001694) grid_indicator_nsta_pane

0x5da7,	// (0x00005da7) clock_nsta_pane_g1

0x5db0,	// (0x00005db0) clock_nsta_pane_t1

0xd3c5,	// (0x0000d3c5) cell_indicator_nsta_pane_ParamLimits

0xd3c5,	// (0x0000d3c5) cell_indicator_nsta_pane

0x5e04,	// (0x00005e04) cell_indicator_nsta_pane_g1

0xd3e2,	// (0x0000d3e2) cell_indicator_nsta_pane_g2

0x0001,

0xf0c3,	// (0x0000f0c3) cell_indicator_nsta_pane_g

0x5e28,	// (0x00005e28) clock_nsta_pane_cp

0x5e30,	// (0x00005e30) indicator_nsta_pane_cp

0x5e39,	// (0x00005e39) nsta_clock_indic_pane_g1

0x0659,	// (0x00000659) grid_indicator_pane

0x1c2f,	// (0x00001c2f) scroll_pane_cp29

0x20f5,	// (0x000020f5) indicator_nsta_pane_cp2_ParamLimits

0x20f5,	// (0x000020f5) indicator_nsta_pane_cp2

0x04e9,	// (0x000004e9) main_apps_wheel_pane

0x3af9,	// (0x00003af9) form_midp_field_text_pane_ParamLimits

0x3c3e,	// (0x00003c3e) scroll_bar_cp050_ParamLimits

0x5ea2,	// (0x00005ea2) cell_indicator_pane_ParamLimits

0x5ea2,	// (0x00005ea2) cell_indicator_pane

0x5ebf,	// (0x00005ebf) cell_indicator_pane_g1

0xd3f8,	// (0x0000d3f8) grid_wheel_folder_pane_ParamLimits

0xd3f8,	// (0x0000d3f8) grid_wheel_folder_pane

0xd406,	// (0x0000d406) list_wheel_apps_pane_ParamLimits

0xd406,	// (0x0000d406) list_wheel_apps_pane

0xd414,	// (0x0000d414) main_apps_wheel_pane_g1_ParamLimits

0xd414,	// (0x0000d414) main_apps_wheel_pane_g1

0xd420,	// (0x0000d420) main_apps_wheel_pane_g2_ParamLimits

0xd420,	// (0x0000d420) main_apps_wheel_pane_g2

0x0001,

0xf0c8,	// (0x0000f0c8) main_apps_wheel_pane_g_ParamLimits

0xf0c8,	// (0x0000f0c8) main_apps_wheel_pane_g

0xd42e,	// (0x0000d42e) main_apps_wheel_pane_t1_ParamLimits

0xd42e,	// (0x0000d42e) main_apps_wheel_pane_t1

0xd442,	// (0x0000d442) list_wheel_apps_pane_g1

0xd44a,	// (0x0000d44a) list_wheel_apps_pane_g2

0xd452,	// (0x0000d452) list_wheel_apps_pane_g3

0xd45a,	// (0x0000d45a) list_wheel_apps_pane_g4

0xd464,	// (0x0000d464) list_wheel_apps_pane_g5

0x0004,

0xf0cd,	// (0x0000f0cd) list_wheel_apps_pane_g

0x23f8,	// (0x000023f8) navi_icon_text_pane

0xc815,	// (0x0000c815) aid_fill_nsta

0xd47b,	// (0x0000d47b) navi_icon_text_pane_g1

0xd487,	// (0x0000d487) navi_icon_text_pane_t1

0x2294,	// (0x00002294) list_set_graphic_pane_t1_ParamLimits

0x2294,	// (0x00002294) list_set_graphic_pane_t1

0x4380,	// (0x00004380) popup_midp_note_alarm_window_t6_ParamLimits

0x4380,	// (0x00004380) popup_midp_note_alarm_window_t6

0x4392,	// (0x00004392) popup_midp_note_alarm_window_t7_ParamLimits

0x4392,	// (0x00004392) popup_midp_note_alarm_window_t7

0x43a4,	// (0x000043a4) popup_midp_note_alarm_window_t8_ParamLimits

0x43a4,	// (0x000043a4) popup_midp_note_alarm_window_t8

0x43b6,	// (0x000043b6) popup_midp_note_alarm_window_t9_ParamLimits

0x43b6,	// (0x000043b6) popup_midp_note_alarm_window_t9

0x43c8,	// (0x000043c8) popup_midp_note_alarm_window_t10_ParamLimits

0x43c8,	// (0x000043c8) popup_midp_note_alarm_window_t10

0x43da,	// (0x000043da) popup_midp_note_alarm_window_t11_ParamLimits

0x43da,	// (0x000043da) popup_midp_note_alarm_window_t11

0x43ec,	// (0x000043ec) scroll_pane_cp17_ParamLimits

0x43ec,	// (0x000043ec) scroll_pane_cp17

0x44a2,	// (0x000044a2) volume_small_pane_cp_g1

0x5fa8,	// (0x00005fa8) volume_small_pane_cp_g2

0x5fb1,	// (0x00005fb1) volume_small_pane_cp_g3

0x5fba,	// (0x00005fba) volume_small_pane_cp_g4

0x5fc3,	// (0x00005fc3) volume_small_pane_cp_g5

0x5fcc,	// (0x00005fcc) volume_small_pane_cp_g6

0x5fd5,	// (0x00005fd5) volume_small_pane_cp_g7

0x5fde,	// (0x00005fde) volume_small_pane_cp_g8

0x5fe7,	// (0x00005fe7) volume_small_pane_cp_g9

0x5ff0,	// (0x00005ff0) volume_small_pane_cp_g10

0x2659,	// (0x00002659) midp_ticker_pane_g1_ParamLimits

0x2665,	// (0x00002665) midp_ticker_pane_g2_ParamLimits

0xaae2,	// (0x0000aae2) midp_ticker_pane_g_ParamLimits

0xbfb7,	// (0x0000bfb7) midp_ticker_pane_t1_ParamLimits

0xc835,	// (0x0000c835) aid_fill_nsta_2

0x3c2a,	// (0x00003c2a) list_form2_midp_pane

0x4fe5,	// (0x00004fe5) midp_editing_number_pane_ParamLimits

0x4ff4,	// (0x00004ff4) midp_ticker_pane_ParamLimits

0x5ff9,	// (0x00005ff9) form2_midp_field_pane

0x601d,	// (0x0000601d) scroll_pane_cp51

0x603d,	// (0x0000603d) form2_midp_button_pane_ParamLimits

0x603d,	// (0x0000603d) form2_midp_button_pane

0x604f,	// (0x0000604f) form2_midp_content_pane_ParamLimits

0x604f,	// (0x0000604f) form2_midp_content_pane

0x6069,	// (0x00006069) form2_midp_field_choice_group_pane

0x6071,	// (0x00006071) form2_midp_field_pane_g1

0x6079,	// (0x00006079) form2_midp_field_pane_g2

0x6081,	// (0x00006081) form2_midp_field_pane_g3

0x6089,	// (0x00006089) form2_midp_field_pane_g4

0x0003,

0xae68,	// (0x0000ae68) form2_midp_field_pane_g

0x6091,	// (0x00006091) form2_midp_gauge_slider_pane

0x6099,	// (0x00006099) form2_midp_gauge_wait_pane

0x60a1,	// (0x000060a1) form2_midp_image_pane_ParamLimits

0x60a1,	// (0x000060a1) form2_midp_image_pane

0x60bc,	// (0x000060bc) form2_midp_label_pane_ParamLimits

0x60bc,	// (0x000060bc) form2_midp_label_pane

0xd4b5,	// (0x0000d4b5) form2_midp_label_pane_cp_ParamLimits

0xd4b5,	// (0x0000d4b5) form2_midp_label_pane_cp

0x60f6,	// (0x000060f6) form2_midp_string_pane_ParamLimits

0x60f6,	// (0x000060f6) form2_midp_string_pane

0x6108,	// (0x00006108) form2_midp_text_pane_ParamLimits

0x6108,	// (0x00006108) form2_midp_text_pane

0x6121,	// (0x00006121) form2_midp_time_pane

0x6131,	// (0x00006131) input_focus_pane_cp51_ParamLimits

0x6131,	// (0x00006131) input_focus_pane_cp51

0x6149,	// (0x00006149) form2_midp_label_pane_t1_ParamLimits

0x6149,	// (0x00006149) form2_midp_label_pane_t1

0x6189,	// (0x00006189) form2_mdip_text_pane_t1_ParamLimits

0x6189,	// (0x00006189) form2_mdip_text_pane_t1

0x61a5,	// (0x000061a5) form2_midp_time_pane_t1

0x61c0,	// (0x000061c0) form2_midp_gauge_slider_pane_t1

0xd4d6,	// (0x0000d4d6) form2_midp_gauge_slider_pane_t2

0xd4e8,	// (0x0000d4e8) form2_midp_gauge_slider_pane_t3

0x0002,

0xf0dd,	// (0x0000f0dd) form2_midp_gauge_slider_pane_t

0x61f6,	// (0x000061f6) form2_midp_slider_pane

0x6202,	// (0x00006202) form2_midp_gauge_wait_pane_t1

0x6210,	// (0x00006210) form2_midp_wait_pane_ParamLimits

0x6210,	// (0x00006210) form2_midp_wait_pane

0xd4fa,	// (0x0000d4fa) list_single_2graphic_pane_cp4_ParamLimits

0xd4fa,	// (0x0000d4fa) list_single_2graphic_pane_cp4

0xccba,	// (0x0000ccba) list_single_midp_graphic_pane_cp_ParamLimits

0xccba,	// (0x0000ccba) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x626a,	// (0x0000626a) list_single_2graphic_pane_g1_cp4

0x55b1,	// (0x000055b1) list_single_2graphic_pane_g2_cp4

0x6272,	// (0x00006272) list_single_2graphic_pane_t1_cp4

0x04e9,	// (0x000004e9) list_highlight_pane_cp21

0x6281,	// (0x00006281) list_single_midp_graphic_pane_g4_cp

0x6290,	// (0x00006290) list_single_midp_graphic_pane_t1_cp

0xd511,	// (0x0000d511) form2_mdip_string_pane_t1_ParamLimits

0xd511,	// (0x0000d511) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1029,	// (0x00001029) list_double_large_graphic_pane_g5_ParamLimits

0x1029,	// (0x00001029) list_double_large_graphic_pane_g5

0xbf0b,	// (0x0000bf0b) midp_form_pane_ParamLimits

0x04e9,	// (0x000004e9) main_apps_wheel_pane_ParamLimits

0xc571,	// (0x0000c571) popup_preview_window_ParamLimits

0xc571,	// (0x0000c571) popup_preview_window

0x3043,	// (0x00003043) popup_touch_info_window_ParamLimits

0x3043,	// (0x00003043) popup_touch_info_window

0x3061,	// (0x00003061) popup_touch_menu_window_ParamLimits

0x3061,	// (0x00003061) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x63df,	// (0x000063df) list_touch_menu_pane

0x63e7,	// (0x000063e7) list_single_touch_menu_pane_ParamLimits

0x63e7,	// (0x000063e7) list_single_touch_menu_pane

0x63fc,	// (0x000063fc) list_single_touch_menu_pane_t1

0x04e9,	// (0x000004e9) bg_popup_sub_pane_cp7_ParamLimits

0x04e9,	// (0x000004e9) bg_popup_sub_pane_cp7

0x640a,	// (0x0000640a) heading_sub_pane

0x6412,	// (0x00006412) list_touch_info_pane_ParamLimits

0x6412,	// (0x00006412) list_touch_info_pane

0x6421,	// (0x00006421) list_single_touch_info_pane_ParamLimits

0x6421,	// (0x00006421) list_single_touch_info_pane

0x6433,	// (0x00006433) list_single_touch_info_pane_t1

0x6441,	// (0x00006441) list_single_touch_info_pane_t2

0x0001,

0xae7f,	// (0x0000ae7f) list_single_touch_info_pane_t

0x257a,	// (0x0000257a) bg_popup_heading_pane_cp

0x644f,	// (0x0000644f) heading_sub_pane_t1

0x37a7,	// (0x000037a7) bg_popup_preview_window_pane_cp_ParamLimits

0x37a7,	// (0x000037a7) bg_popup_preview_window_pane_cp

0x640a,	// (0x0000640a) heading_preview_pane

0x6412,	// (0x00006412) list_preview_pane_ParamLimits

0x6412,	// (0x00006412) list_preview_pane

0x645d,	// (0x0000645d) popup_preview_window_g1

0x6421,	// (0x00006421) list_single_preview_pane_ParamLimits

0x6421,	// (0x00006421) list_single_preview_pane

0x6465,	// (0x00006465) list_single_preview_pane_g1

0x646d,	// (0x0000646d) list_single_preview_pane_t1

0x6433,	// (0x00006433) list_single_preview_pane_t2

0x0001,

0xae84,	// (0x0000ae84) list_single_preview_pane_t

0x647b,	// (0x0000647b) bg_popup_heading_pane_cp2_ParamLimits

0x647b,	// (0x0000647b) bg_popup_heading_pane_cp2

0x6491,	// (0x00006491) heading_preview_pane_g1

0x6499,	// (0x00006499) heading_preview_pane_t1_ParamLimits

0x6499,	// (0x00006499) heading_preview_pane_t1

0x067c,	// (0x0000067c) soft_indicator_pane_t1_ParamLimits

0x0d56,	// (0x00000d56) scroll_pane_ParamLimits

0x1b2b,	// (0x00001b2b) scroll_sc2_left_pane

0x1b34,	// (0x00001b34) scroll_sc2_right_pane

0x1b53,	// (0x00001b53) scroll_bg_pane_g1_ParamLimits

0x1b68,	// (0x00001b68) scroll_bg_pane_g2_ParamLimits

0x1b80,	// (0x00001b80) scroll_bg_pane_g3_ParamLimits

0xaa71,	// (0x0000aa71) scroll_bg_pane_g_ParamLimits

0x1b53,	// (0x00001b53) scroll_handle_pane_g1_ParamLimits

0x1ba2,	// (0x00001ba2) scroll_handle_pane_g2_ParamLimits

0x1b80,	// (0x00001b80) scroll_handle_pane_g3_ParamLimits

0xaa78,	// (0x0000aa78) scroll_handle_pane_g_ParamLimits

0x2b1d,	// (0x00002b1d) popup_choice_list_window_ParamLimits

0x2b1d,	// (0x00002b1d) popup_choice_list_window

0x351b,	// (0x0000351b) choice_list_pane

0x35e3,	// (0x000035e3) cell_toolbar_pane_t1

0x360b,	// (0x0000360b) toolbar_button_pane_ParamLimits

0x4a1a,	// (0x00004a1a) ai_gene_pane_1_t2_ParamLimits

0x4a1a,	// (0x00004a1a) ai_gene_pane_1_t2

0x0001,

0xac8e,	// (0x0000ac8e) ai_gene_pane_1_t_ParamLimits

0xac8e,	// (0x0000ac8e) ai_gene_pane_1_t

0x64b6,	// (0x000064b6) scroll_sc2_left_pane_g1

0x64b6,	// (0x000064b6) scroll_sc2_right_pane_g1

0x2aed,	// (0x00002aed) bg_popup_sub_pane_cp10

0x64c0,	// (0x000064c0) list_choice_list_pane

0x64d7,	// (0x000064d7) list_single_choice_list_pane_ParamLimits

0x64d7,	// (0x000064d7) list_single_choice_list_pane

0x64eb,	// (0x000064eb) list_single_choice_list_pane_g1

0x64f3,	// (0x000064f3) list_single_choice_list_pane_t1_ParamLimits

0x64f3,	// (0x000064f3) list_single_choice_list_pane_t1

0x6508,	// (0x00006508) choice_list_pane_g1

0x6510,	// (0x00006510) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x188c,	// (0x0000188c) title_pane_stacon_g2_ParamLimits

0x188c,	// (0x0000188c) title_pane_stacon_g2

0x0002,

0xaa57,	// (0x0000aa57) title_pane_stacon_g_ParamLimits

0xaa57,	// (0x0000aa57) title_pane_stacon_g

0x257a,	// (0x0000257a) cursor_press_pane

0xc230,	// (0x0000c230) popup_fep_hwr_window_ParamLimits

0xc230,	// (0x0000c230) popup_fep_hwr_window

0x2c3b,	// (0x00002c3b) popup_fep_vkb_window_ParamLimits

0x2c3b,	// (0x00002c3b) popup_fep_vkb_window

0x651e,	// (0x0000651e) cursor_press_pane_g1

0x0002,

0xf0f1,	// (0x0000f0f1) fep_vkb_side_pane_g_ParamLimits

0x655f,	// (0x0000655f) fep_hwr_candidate_pane_ParamLimits

0x655f,	// (0x0000655f) fep_hwr_candidate_pane

0x6589,	// (0x00006589) fep_hwr_side_pane_ParamLimits

0x6589,	// (0x00006589) fep_hwr_side_pane

0x65a9,	// (0x000065a9) fep_hwr_top_pane_ParamLimits

0x65a9,	// (0x000065a9) fep_hwr_top_pane

0x65c1,	// (0x000065c1) fep_hwr_write_pane_ParamLimits

0x65c1,	// (0x000065c1) fep_hwr_write_pane

0xf0f1,	// (0x0000f0f1) fep_vkb_side_pane_g

0x65fb,	// (0x000065fb) fep_hwr_top_pane_g1

0x660d,	// (0x0000660d) fep_hwr_top_pane_g2

0x661f,	// (0x0000661f) fep_hwr_top_pane_g3

0x0002,

0xae89,	// (0x0000ae89) fep_hwr_top_pane_g

0x6634,	// (0x00006634) fep_hwr_top_text_pane

0x1cf5,	// (0x00001cf5) fep_hwr_top_text_pane_g1

0x670c,	// (0x0000670c) fep_hwr_top_text_pane_t1

0x675c,	// (0x0000675c) fep_hwr_candidate_pane_g1

0x69dc,	// (0x000069dc) fep_vkb_keypad_pane_g3_ParamLimits

0x69dc,	// (0x000069dc) fep_vkb_keypad_pane_g3

0x6a04,	// (0x00006a04) fep_vkb_keypad_pane_g4_ParamLimits

0x6a04,	// (0x00006a04) fep_vkb_keypad_pane_g4

0x6a73,	// (0x00006a73) fep_vkb_bottom_pane_g2_ParamLimits

0x6a73,	// (0x00006a73) fep_vkb_bottom_pane_g2

0x0001,

0xaeb4,	// (0x0000aeb4) fep_vkb_bottom_pane_g_ParamLimits

0xaeb4,	// (0x0000aeb4) fep_vkb_bottom_pane_g

0x64b6,	// (0x000064b6) cell_vkb_side_pane_g2

0x0001,

0xaebe,	// (0x0000aebe) cell_vkb_side_pane_g

0x6afe,	// (0x00006afe) cell_vkb_side_pane_t1

0x6b0c,	// (0x00006b0c) cell_vkb_side_pane_t1_copy1

0x64b6,	// (0x000064b6) bg_fep_vkb_candidate_pane_g2

0x6c3e,	// (0x00006c3e) cell_vkb_candidate_pane_ParamLimits

0x6790,	// (0x00006790) aid_size_cell_vkb_ParamLimits

0x6790,	// (0x00006790) aid_size_cell_vkb

0x6c3e,	// (0x00006c3e) cell_vkb_candidate_pane

0x6c74,	// (0x00006c74) bg_popup_fep_shadow_pane_g1

0x681e,	// (0x0000681e) fep_vkb_bottom_pane_ParamLimits

0x681e,	// (0x0000681e) fep_vkb_bottom_pane

0x685b,	// (0x0000685b) fep_vkb_candidate_pane_ParamLimits

0x685b,	// (0x0000685b) fep_vkb_candidate_pane

0x6877,	// (0x00006877) fep_vkb_keypad_pane_ParamLimits

0x6877,	// (0x00006877) fep_vkb_keypad_pane

0x68bd,	// (0x000068bd) fep_vkb_side_pane_ParamLimits

0x68bd,	// (0x000068bd) fep_vkb_side_pane

0x68f9,	// (0x000068f9) fep_vkb_top_pane_ParamLimits

0x68f9,	// (0x000068f9) fep_vkb_top_pane

0x6935,	// (0x00006935) fep_vkb_top_pane_g1_ParamLimits

0x6935,	// (0x00006935) fep_vkb_top_pane_g1

0x6944,	// (0x00006944) fep_vkb_top_pane_g2_ParamLimits

0x6944,	// (0x00006944) fep_vkb_top_pane_g2

0x6953,	// (0x00006953) fep_vkb_top_pane_g3_ParamLimits

0x6953,	// (0x00006953) fep_vkb_top_pane_g3

0x0003,

0xaea4,	// (0x0000aea4) fep_vkb_top_pane_g_ParamLimits

0xaea4,	// (0x0000aea4) fep_vkb_top_pane_g

0x6971,	// (0x00006971) fep_vkb_top_text_pane_ParamLimits

0x6971,	// (0x00006971) fep_vkb_top_text_pane

0xd5f6,	// (0x0000d5f6) fep_vkb_side_pane_g1_ParamLimits

0xd5f6,	// (0x0000d5f6) fep_vkb_side_pane_g1

0x69cb,	// (0x000069cb) grid_vkb_side_pane_ParamLimits

0x69cb,	// (0x000069cb) grid_vkb_side_pane

0x6c7c,	// (0x00006c7c) bg_popup_fep_shadow_pane_g2

0x6c85,	// (0x00006c85) bg_popup_fep_shadow_pane_g3

0x6c8d,	// (0x00006c8d) bg_popup_fep_shadow_pane_g4

0x6c96,	// (0x00006c96) bg_popup_fep_shadow_pane_g5

0x6ca0,	// (0x00006ca0) bg_popup_fep_shadow_pane_g6

0x6ca8,	// (0x00006ca8) bg_popup_fep_shadow_pane_g7

0x14ab,	// (0x000014ab) bg_popup_fep_shadow_pane_g8

0x6a22,	// (0x00006a22) grid_vkb_keypad_number_pane_ParamLimits

0x6a22,	// (0x00006a22) grid_vkb_keypad_number_pane

0x6a32,	// (0x00006a32) grid_vkb_keypad_pane_ParamLimits

0x6a32,	// (0x00006a32) grid_vkb_keypad_pane

0x6a58,	// (0x00006a58) fep_vkb_bottom_pane_g1_ParamLimits

0x6a58,	// (0x00006a58) fep_vkb_bottom_pane_g1

0x6a81,	// (0x00006a81) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6a81,	// (0x00006a81) grid_vkb_keypad_bottom_left_pane

0x6a96,	// (0x00006a96) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6a96,	// (0x00006a96) grid_vkb_keypad_bottom_right_pane

0x6aab,	// (0x00006aab) fep_vkb_top_text_pane_g1

0xd63d,	// (0x0000d63d) fep_vkb_top_text_pane_t1

0xd64f,	// (0x0000d64f) cell_vkb_side_pane_ParamLimits

0xd64f,	// (0x0000d64f) cell_vkb_side_pane

0x64b6,	// (0x000064b6) cell_vkb_side_pane_g1

0x6b1a,	// (0x00006b1a) cell_vkb_keypad_pane_ParamLimits

0x6b1a,	// (0x00006b1a) cell_vkb_keypad_pane

0x6b95,	// (0x00006b95) cell_vkb_keypad_pane_g1

0x0008,

0xaed1,	// (0x0000aed1) bg_popup_fep_shadow_pane_g

0x64b6,	// (0x000064b6) cell_hwr_side_pane_g1

0x64b6,	// (0x000064b6) cell_hwr_side_pane_g2

0x6b9f,	// (0x00006b9f) cell_vkb_keypad_pane_t1

0xd665,	// (0x0000d665) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd665,	// (0x0000d665) cell_vkb_keypad_bottom_left_pane

0xd67a,	// (0x0000d67a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd67a,	// (0x0000d67a) cell_vkb_keypad_bottom_right_pane

0x64b6,	// (0x000064b6) cell_vkb_keypad_bottom_left_pane_g1

0x64b6,	// (0x000064b6) cell_vkb_keypad_bottom_right_pane_g1

0x6c03,	// (0x00006c03) cell_vkb_keypad_number_pane_ParamLimits

0x6c03,	// (0x00006c03) cell_vkb_keypad_number_pane

0x6c22,	// (0x00006c22) cell_vkb_keypad_number_pane_g1

0x6c2c,	// (0x00006c2c) cell_vkb_keypad_number_pane_g2

0x6c35,	// (0x00006c35) cell_vkb_keypad_number_pane_g3

0x0002,

0xaec3,	// (0x0000aec3) cell_vkb_keypad_number_pane_g

0x6b9f,	// (0x00006b9f) cell_vkb_keypad_number_pane_t1

0x6c5b,	// (0x00006c5b) fep_vkb_candidate_pane_g1

0x0001,

0xaebe,	// (0x0000aebe) cell_hwr_side_pane_g

0x6cba,	// (0x00006cba) cell_hwr_side_pane_t1

0x6cc8,	// (0x00006cc8) cell_hwr_side_pane_t1_copy1

0x6963,	// (0x00006963) cell_hwr_candidate_pane_g1

0x6d18,	// (0x00006d18) cell_hwr_candidate_pane_t1

0x64b6,	// (0x000064b6) cell_vkb_candidate_pane_g2

0x6d6c,	// (0x00006d6c) cell_vkb_candidate_pane_t1

0x6526,	// (0x00006526) bg_popup_fep_shadow_pane_ParamLimits

0x6526,	// (0x00006526) bg_popup_fep_shadow_pane

0x65db,	// (0x000065db) bg_fep_hwr_top_pane_g4

0x6649,	// (0x00006649) bg_hwr_side_pane_g1_ParamLimits

0x6649,	// (0x00006649) bg_hwr_side_pane_g1

0xd5af,	// (0x0000d5af) cell_hwr_side_pane_ParamLimits

0xd5af,	// (0x0000d5af) cell_hwr_side_pane

0x66b7,	// (0x000066b7) fep_hwr_write_pane_g1_ParamLimits

0x66b7,	// (0x000066b7) fep_hwr_write_pane_g1

0x66c4,	// (0x000066c4) fep_hwr_write_pane_g2_ParamLimits

0x66c4,	// (0x000066c4) fep_hwr_write_pane_g2

0x66d1,	// (0x000066d1) fep_hwr_write_pane_g3_ParamLimits

0x66d1,	// (0x000066d1) fep_hwr_write_pane_g3

0xd5cf,	// (0x0000d5cf) fep_hwr_write_pane_g4_ParamLimits

0xd5cf,	// (0x0000d5cf) fep_hwr_write_pane_g4

0x0005,

0xf0e4,	// (0x0000f0e4) fep_hwr_write_pane_g_ParamLimits

0xf0e4,	// (0x0000f0e4) fep_hwr_write_pane_g

0x65db,	// (0x000065db) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65db,	// (0x000065db) bg_fep_hwr_candidate_pane_g2

0x671a,	// (0x0000671a) cell_hwr_candidate_pane_ParamLimits

0x671a,	// (0x0000671a) cell_hwr_candidate_pane

0x675c,	// (0x0000675c) fep_hwr_candidate_pane_g1_ParamLimits

0x67be,	// (0x000067be) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x67be,	// (0x000067be) bg_popup_fep_shadow_pane_cp2

0x6963,	// (0x00006963) fep_vkb_top_pane_g4_ParamLimits

0x6963,	// (0x00006963) fep_vkb_top_pane_g4

0x69a9,	// (0x000069a9) fep_vkb_side_pane_g2_ParamLimits

0x69a9,	// (0x000069a9) fep_vkb_side_pane_g2

0xba37,	// (0x0000ba37) list_setting_pane_t4_ParamLimits

0xba37,	// (0x0000ba37) list_setting_pane_t4

0xbab1,	// (0x0000bab1) list_setting_number_pane_t5_ParamLimits

0xbab1,	// (0x0000bab1) list_setting_number_pane_t5

0xbdc4,	// (0x0000bdc4) list_double_heading_pane_cp2_ParamLimits

0xbdc4,	// (0x0000bdc4) list_double_heading_pane_cp2

0x1375,	// (0x00001375) list_double_heading_pane_g1_cp2_ParamLimits

0x1375,	// (0x00001375) list_double_heading_pane_g1_cp2

0x1381,	// (0x00001381) list_double_heading_pane_g2_cp2_ParamLimits

0x1381,	// (0x00001381) list_double_heading_pane_g2_cp2

0x6d7a,	// (0x00006d7a) list_double_heading_pane_t1_cp2_ParamLimits

0x6d7a,	// (0x00006d7a) list_double_heading_pane_t1_cp2

0x6d90,	// (0x00006d90) list_double_heading_pane_t2_cp2_ParamLimits

0x6d90,	// (0x00006d90) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0309,	// (0x00000309) popup_preview_fixed_window

0x0819,	// (0x00000819) bg_popup_preview_window_pane_cp02

0x6da2,	// (0x00006da2) list_preview_fixed_pane

0x6de8,	// (0x00006de8) list_empty_pane_fp_ParamLimits

0x6de8,	// (0x00006de8) list_empty_pane_fp

0x6de8,	// (0x00006de8) list_single_cale_day_pane_fp_ParamLimits

0x6de8,	// (0x00006de8) list_single_cale_day_pane_fp

0x6de8,	// (0x00006de8) list_single_graphic_heading_pane_fp_ParamLimits

0x6de8,	// (0x00006de8) list_single_graphic_heading_pane_fp

0x6de8,	// (0x00006de8) list_single_graphic_pane_fp_ParamLimits

0x6de8,	// (0x00006de8) list_single_graphic_pane_fp

0x6de8,	// (0x00006de8) list_single_heading_pane_fp_ParamLimits

0x6de8,	// (0x00006de8) list_single_heading_pane_fp

0x6de8,	// (0x00006de8) list_single_pane_fp_ParamLimits

0x6de8,	// (0x00006de8) list_single_pane_fp

0x6dff,	// (0x00006dff) list_single_pane_fp_g1_ParamLimits

0x6dff,	// (0x00006dff) list_single_pane_fp_g1

0x1375,	// (0x00001375) list_single_pane_fp_g2_ParamLimits

0x1375,	// (0x00001375) list_single_pane_fp_g2

0x1381,	// (0x00001381) list_single_pane_fp_g3_ParamLimits

0x1381,	// (0x00001381) list_single_pane_fp_g3

0x6e0b,	// (0x00006e0b) list_single_pane_fp_g4_ParamLimits

0x6e0b,	// (0x00006e0b) list_single_pane_fp_g4

0x0003,

0xaef2,	// (0x0000aef2) list_single_pane_fp_g_ParamLimits

0xaef2,	// (0x0000aef2) list_single_pane_fp_g

0x6e17,	// (0x00006e17) list_single_pane_fp_t1_ParamLimits

0x6e17,	// (0x00006e17) list_single_pane_fp_t1

0x6e2e,	// (0x00006e2e) list_single_graphic_pane_fp_g1_ParamLimits

0x6e2e,	// (0x00006e2e) list_single_graphic_pane_fp_g1

0x6dff,	// (0x00006dff) list_single_graphic_pane_fp_g2_ParamLimits

0x6dff,	// (0x00006dff) list_single_graphic_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_pane_fp_g4

0x6e0b,	// (0x00006e0b) list_single_graphic_pane_fp_g5_ParamLimits

0x6e0b,	// (0x00006e0b) list_single_graphic_pane_fp_g5

0x0004,

0xaefb,	// (0x0000aefb) list_single_graphic_pane_fp_g_ParamLimits

0xaefb,	// (0x0000aefb) list_single_graphic_pane_fp_g

0x6e3a,	// (0x00006e3a) list_single_graphic_pane_fp_t1_ParamLimits

0x6e3a,	// (0x00006e3a) list_single_graphic_pane_fp_t1

0x6e2e,	// (0x00006e2e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6e2e,	// (0x00006e2e) list_single_graphic_heading_pane_fp_g1

0x6dff,	// (0x00006dff) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6dff,	// (0x00006dff) list_single_graphic_heading_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_heading_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_heading_pane_fp_g4

0x6e0b,	// (0x00006e0b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6e0b,	// (0x00006e0b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xaefb,	// (0x0000aefb) list_single_graphic_heading_pane_fp_g_ParamLimits

0xaefb,	// (0x0000aefb) list_single_graphic_heading_pane_fp_g

0x6e50,	// (0x00006e50) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6e50,	// (0x00006e50) list_single_graphic_heading_pane_fp_t1

0x6e66,	// (0x00006e66) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6e66,	// (0x00006e66) list_single_graphic_heading_pane_fp_t2

0x0001,

0xaf06,	// (0x0000af06) list_single_graphic_heading_pane_fp_t_ParamLimits

0xaf06,	// (0x0000af06) list_single_graphic_heading_pane_fp_t

0x6e78,	// (0x00006e78) list_single_cale_day_pane_fp_g1_ParamLimits

0x6e78,	// (0x00006e78) list_single_cale_day_pane_fp_g1

0x6eb0,	// (0x00006eb0) list_single_cale_day_pane_fp_g2_ParamLimits

0x6eb0,	// (0x00006eb0) list_single_cale_day_pane_fp_g2

0x6ebc,	// (0x00006ebc) list_single_cale_day_pane_fp_g3_ParamLimits

0x6ebc,	// (0x00006ebc) list_single_cale_day_pane_fp_g3

0x6ee4,	// (0x00006ee4) list_single_cale_day_pane_fp_g4_ParamLimits

0x6ee4,	// (0x00006ee4) list_single_cale_day_pane_fp_g4

0x6f08,	// (0x00006f08) list_single_cale_day_pane_fp_g5_ParamLimits

0x6f08,	// (0x00006f08) list_single_cale_day_pane_fp_g5

0x0004,

0xaf0b,	// (0x0000af0b) list_single_cale_day_pane_fp_g_ParamLimits

0xaf0b,	// (0x0000af0b) list_single_cale_day_pane_fp_g

0x6f2c,	// (0x00006f2c) list_single_cale_day_pane_fp_t1_ParamLimits

0x6f2c,	// (0x00006f2c) list_single_cale_day_pane_fp_t1

0x6f52,	// (0x00006f52) list_single_cale_day_pane_fp_t2_ParamLimits

0x6f52,	// (0x00006f52) list_single_cale_day_pane_fp_t2

0x6f6b,	// (0x00006f6b) list_single_cale_day_pane_fp_t3_ParamLimits

0x6f6b,	// (0x00006f6b) list_single_cale_day_pane_fp_t3

0x0002,

0xaf16,	// (0x0000af16) list_single_cale_day_pane_fp_t_ParamLimits

0xaf16,	// (0x0000af16) list_single_cale_day_pane_fp_t

0x6dff,	// (0x00006dff) list_empty_pane_fp_g1_ParamLimits

0x6dff,	// (0x00006dff) list_empty_pane_fp_g1

0x6f84,	// (0x00006f84) list_empty_pane_fp_t1

0x6f92,	// (0x00006f92) list_empty_pane_fp_t2

0x0001,

0xaf1d,	// (0x0000af1d) list_empty_pane_fp_t

0x6dff,	// (0x00006dff) list_single_heading_pane_fp_g1_ParamLimits

0x6dff,	// (0x00006dff) list_single_heading_pane_fp_g1

0x1375,	// (0x00001375) list_single_heading_pane_fp_g2_ParamLimits

0x1375,	// (0x00001375) list_single_heading_pane_fp_g2

0x1381,	// (0x00001381) list_single_heading_pane_fp_g3_ParamLimits

0x1381,	// (0x00001381) list_single_heading_pane_fp_g3

0x0002,

0xaf22,	// (0x0000af22) list_single_heading_pane_fp_g_ParamLimits

0xaf22,	// (0x0000af22) list_single_heading_pane_fp_g

0x6fa0,	// (0x00006fa0) list_single_heading_pane_fp_t1_ParamLimits

0x6fa0,	// (0x00006fa0) list_single_heading_pane_fp_t1

0x6fb2,	// (0x00006fb2) list_single_heading_pane_fp_t2_ParamLimits

0x6fb2,	// (0x00006fb2) list_single_heading_pane_fp_t2

0x0001,

0xaf29,	// (0x0000af29) list_single_heading_pane_fp_t_ParamLimits

0xaf29,	// (0x0000af29) list_single_heading_pane_fp_t

0x16d3,	// (0x000016d3) aid_size_cell_fast

0x0789,	// (0x00000789) soft_indicator_pane_cp1_t1

0x1710,	// (0x00001710) cell_app_pane_cp2_ParamLimits

0x1710,	// (0x00001710) cell_app_pane_cp2

0x6548,	// (0x00006548) fep_hwr_candidate_drop_down_list_pane

0x6776,	// (0x00006776) fep_hwr_candidate_pane_g3_ParamLimits

0x6776,	// (0x00006776) fep_hwr_candidate_pane_g3

0x6783,	// (0x00006783) fep_hwr_candidate_pane_g4_ParamLimits

0x6783,	// (0x00006783) fep_hwr_candidate_pane_g4

0x0002,

0xae9d,	// (0x0000ae9d) fep_hwr_candidate_pane_g_ParamLimits

0xae9d,	// (0x0000ae9d) fep_hwr_candidate_pane_g

0x684a,	// (0x0000684a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x684a,	// (0x0000684a) fep_vkb_candidate_drop_down_list_pane

0x6c63,	// (0x00006c63) fep_vkb_candidate_pane_g3

0x6c6b,	// (0x00006c6b) fep_vkb_candidate_pane_g4

0x0002,

0xaeca,	// (0x0000aeca) fep_vkb_candidate_pane_g

0x6963,	// (0x00006963) cell_hwr_candidate_pane_g1_ParamLimits

0x6cd6,	// (0x00006cd6) cell_hwr_candidate_pane_g3_ParamLimits

0x6cd6,	// (0x00006cd6) cell_hwr_candidate_pane_g3

0x6cf7,	// (0x00006cf7) cell_hwr_candidate_pane_g4_ParamLimits

0x6cf7,	// (0x00006cf7) cell_hwr_candidate_pane_g4

0x0002,

0xaee4,	// (0x0000aee4) cell_hwr_candidate_pane_g_ParamLimits

0xaee4,	// (0x0000aee4) cell_hwr_candidate_pane_g

0x6d36,	// (0x00006d36) cell_vkb_candidate_pane_g3_ParamLimits

0x6d36,	// (0x00006d36) cell_vkb_candidate_pane_g3

0x6d51,	// (0x00006d51) cell_vkb_candidate_pane_g4_ParamLimits

0x6d51,	// (0x00006d51) cell_vkb_candidate_pane_g4

0x6fc8,	// (0x00006fc8) cell_app_pane_cp2_g1_ParamLimits

0x6fc8,	// (0x00006fc8) cell_app_pane_cp2_g1

0x6fe6,	// (0x00006fe6) cell_app_pane_cp2_g2_ParamLimits

0x6fe6,	// (0x00006fe6) cell_app_pane_cp2_g2

0x0001,

0xaf2e,	// (0x0000af2e) cell_app_pane_cp2_g_ParamLimits

0xaf2e,	// (0x0000af2e) cell_app_pane_cp2_g

0x6ff2,	// (0x00006ff2) cell_app_pane_cp2_t1_ParamLimits

0x6ff2,	// (0x00006ff2) cell_app_pane_cp2_t1

0x134f,	// (0x0000134f) grid_highlight_pane_cp1_ParamLimits

0x134f,	// (0x0000134f) grid_highlight_pane_cp1

0x7004,	// (0x00007004) cell_hwr_candidate_pane_cp1_ParamLimits

0x7004,	// (0x00007004) cell_hwr_candidate_pane_cp1

0x6963,	// (0x00006963) fep_hwr_candidate_drop_down_list_pane_g1

0x7023,	// (0x00007023) fep_hwr_candidate_drop_down_list_pane_g2

0x7030,	// (0x00007030) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xaf33,	// (0x0000af33) fep_hwr_candidate_drop_down_list_pane_g

0x703d,	// (0x0000703d) fep_hwr_candidate_drop_down_list_scroll_pane

0x7046,	// (0x00007046) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7046,	// (0x00007046) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7053,	// (0x00007053) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7053,	// (0x00007053) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7060,	// (0x00007060) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7060,	// (0x00007060) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6d36,	// (0x00006d36) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d36,	// (0x00006d36) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d51,	// (0x00006d51) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d51,	// (0x00006d51) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x706d,	// (0x0000706d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x706d,	// (0x0000706d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7088,	// (0x00007088) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7088,	// (0x00007088) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x70a3,	// (0x000070a3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x70a3,	// (0x000070a3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xaf3a,	// (0x0000af3a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xaf3a,	// (0x0000af3a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x70be,	// (0x000070be) cell_vkb_candidate_pane_cp1_ParamLimits

0x70be,	// (0x000070be) cell_vkb_candidate_pane_cp1

0x6963,	// (0x00006963) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6963,	// (0x00006963) fep_vkb_candidate_drop_down_list_pane_g1

0x7023,	// (0x00007023) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7023,	// (0x00007023) fep_vkb_candidate_drop_down_list_pane_g2

0x7030,	// (0x00007030) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7030,	// (0x00007030) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xaf33,	// (0x0000af33) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xaf33,	// (0x0000af33) fep_vkb_candidate_drop_down_list_pane_g

0x70de,	// (0x000070de) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x70de,	// (0x000070de) fep_vkb_candidate_drop_down_list_scroll_pane

0x70eb,	// (0x000070eb) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70eb,	// (0x000070eb) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x70f8,	// (0x000070f8) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x70f8,	// (0x000070f8) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7104,	// (0x00007104) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7104,	// (0x00007104) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6cd6,	// (0x00006cd6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6cd6,	// (0x00006cd6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6cf7,	// (0x00006cf7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6cf7,	// (0x00006cf7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7110,	// (0x00007110) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7110,	// (0x00007110) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7131,	// (0x00007131) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7131,	// (0x00007131) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x70a3,	// (0x000070a3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x70a3,	// (0x000070a3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xaf4b,	// (0x0000af4b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xaf4b,	// (0x0000af4b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb438,	// (0x0000b438) title_pane_g1_ParamLimits

0xb449,	// (0x0000b449) title_pane_g2_ParamLimits

0xef22,	// (0x0000ef22) title_pane_g_ParamLimits

0x1ce5,	// (0x00001ce5) aid_call2_pane

0x1ced,	// (0x00001ced) aid_call_pane

0x1cf5,	// (0x00001cf5) popup_clock_analogue_window_g1

0x1cf5,	// (0x00001cf5) popup_clock_analogue_window_g2

0x1cfd,	// (0x00001cfd) popup_clock_analogue_window_g3

0x1d06,	// (0x00001d06) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xaa86,	// (0x0000aa86) popup_clock_analogue_window_g

0x1d0e,	// (0x00001d0e) popup_clock_analogue_window_t1

0x1d90,	// (0x00001d90) clock_digital_number_pane_ParamLimits

0x1d90,	// (0x00001d90) clock_digital_number_pane

0x1d9c,	// (0x00001d9c) clock_digital_number_pane_cp02_ParamLimits

0x1d9c,	// (0x00001d9c) clock_digital_number_pane_cp02

0x1da8,	// (0x00001da8) clock_digital_number_pane_cp03_ParamLimits

0x1da8,	// (0x00001da8) clock_digital_number_pane_cp03

0x1db4,	// (0x00001db4) clock_digital_number_pane_cp04_ParamLimits

0x1db4,	// (0x00001db4) clock_digital_number_pane_cp04

0x1dc0,	// (0x00001dc0) clock_digital_separator_pane_ParamLimits

0x1dc0,	// (0x00001dc0) clock_digital_separator_pane

0x1dcc,	// (0x00001dcc) popup_clock_digital_window_t1_ParamLimits

0x1dcc,	// (0x00001dcc) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xaa91,	// (0x0000aa91) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xaa91,	// (0x0000aa91) clock_digital_separator_pane_g

0xc815,	// (0x0000c815) aid_fill_nsta_ParamLimits

0xc944,	// (0x0000c944) indicator_nsta_pane_ParamLimits

0x3356,	// (0x00003356) popup_clock_analogue_window

0x3356,	// (0x00003356) popup_clock_digital_window

0x1694,	// (0x00001694) grid_indicator_nsta_pane_ParamLimits

0x5dbe,	// (0x00005dbe) clock_nsta_pane_t2

0x0001,

0xae1d,	// (0x0000ae1d) clock_nsta_pane_t

0x1ad0,	// (0x00001ad0) aid_size_max_handle

0xbdbb,	// (0x0000bdbb) aid_size_min_handle

0x257a,	// (0x0000257a) editor_scroll_pane

0x7152,	// (0x00007152) ex_editor_pane

0x1642,	// (0x00001642) scroll_pane_cp13

0x0d82,	// (0x00000d82) scroll_pane_cp14

0x1d3e,	// (0x00001d3e) scroll_pane_cp36

0xbdd5,	// (0x0000bdd5) list_single_graphic_hl_pane_cp2_ParamLimits

0xbdd5,	// (0x0000bdd5) list_single_graphic_hl_pane_cp2

0xd265,	// (0x0000d265) list_single_graphic_hl_pane_ParamLimits

0xd265,	// (0x0000d265) list_single_graphic_hl_pane

0x715a,	// (0x0000715a) aid_size_min_hl_cp1

0x7163,	// (0x00007163) list_highlight_pane_cp34_ParamLimits

0x7163,	// (0x00007163) list_highlight_pane_cp34

0x7174,	// (0x00007174) list_single_graphic_hl_pane_g1_ParamLimits

0x7174,	// (0x00007174) list_single_graphic_hl_pane_g1

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g2_ParamLimits

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g2

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g3_ParamLimits

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g3

0x0d96,	// (0x00000d96) list_single_graphic_hl_pane_g4_ParamLimits

0x0d96,	// (0x00000d96) list_single_graphic_hl_pane_g4

0xd695,	// (0x0000d695) list_single_graphic_hl_pane_g5_ParamLimits

0xd695,	// (0x0000d695) list_single_graphic_hl_pane_g5

0x0004,

0xf0fd,	// (0x0000f0fd) list_single_graphic_hl_pane_g_ParamLimits

0xf0fd,	// (0x0000f0fd) list_single_graphic_hl_pane_g

0xd6a9,	// (0x0000d6a9) list_single_graphic_hl_pane_t1_ParamLimits

0xd6a9,	// (0x0000d6a9) list_single_graphic_hl_pane_t1

0x71a1,	// (0x000071a1) aid_size_min_hl_cp2

0x71aa,	// (0x000071aa) list_highlight_pane_cp34_cp2_ParamLimits

0x71aa,	// (0x000071aa) list_highlight_pane_cp34_cp2

0x7174,	// (0x00007174) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7174,	// (0x00007174) list_single_graphic_hl_pane_g1_cp2

0x71b7,	// (0x000071b7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x71b7,	// (0x000071b7) list_single_graphic_hl_pane_g2_cp2

0x71c3,	// (0x000071c3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x71c3,	// (0x000071c3) list_single_graphic_hl_pane_g3_cp2

0x24b1,	// (0x000024b1) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x24b1,	// (0x000024b1) list_single_graphic_hl_pane_g4_cp2

0x718d,	// (0x0000718d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x718d,	// (0x0000718d) list_single_graphic_hl_pane_g5_cp2

0xc021,	// (0x0000c021) control_pane_g4_ParamLimits

0xc021,	// (0x0000c021) control_pane_g4

0x2aed,	// (0x00002aed) bg_popup_sub_pane_cp10_ParamLimits

0x64c0,	// (0x000064c0) list_choice_list_pane_ParamLimits

0x64cf,	// (0x000064cf) scroll_pane_cp23

0x0819,	// (0x00000819) bg_popup_preview_window_pane_cp02_ParamLimits

0x6da2,	// (0x00006da2) list_preview_fixed_pane_ParamLimits

0x6db8,	// (0x00006db8) list_preview_fixed_pane_cp_ParamLimits

0x6db8,	// (0x00006db8) list_preview_fixed_pane_cp

0x6dc4,	// (0x00006dc4) popup_preview_fixed_window_g1_ParamLimits

0x6dc4,	// (0x00006dc4) popup_preview_fixed_window_g1

0x6dd0,	// (0x00006dd0) popup_preview_fixed_window_g2_ParamLimits

0x6dd0,	// (0x00006dd0) popup_preview_fixed_window_g2

0x0002,

0xaeeb,	// (0x0000aeeb) popup_preview_fixed_window_g_ParamLimits

0xaeeb,	// (0x0000aeeb) popup_preview_fixed_window_g

0x1971,	// (0x00001971) aid_navi_side_left_pane_ParamLimits

0x1986,	// (0x00001986) aid_navi_side_right_pane_ParamLimits

0x199e,	// (0x0000199e) navi_icon_pane_stacon_ParamLimits

0x19b2,	// (0x000019b2) navi_navi_pane_stacon_ParamLimits

0x199e,	// (0x0000199e) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x71e7,	// (0x000071e7) listscroll_text_info_pane

0x71ef,	// (0x000071ef) list_text_info_pane_ParamLimits

0x71ef,	// (0x000071ef) list_text_info_pane

0x71fe,	// (0x000071fe) scroll_pane_cp24_ParamLimits

0x71fe,	// (0x000071fe) scroll_pane_cp24

0xd6bf,	// (0x0000d6bf) list_text_info_pane_t1_ParamLimits

0xd6bf,	// (0x0000d6bf) list_text_info_pane_t1

0xc1a5,	// (0x0000c1a5) popup_fast_swap2_window_ParamLimits

0xc1a5,	// (0x0000c1a5) popup_fast_swap2_window

0x7255,	// (0x00007255) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c56,	// (0x00003c56) heading_pane_cp2

0x0a59,	// (0x00000a59) listscroll_fast2_pane

0x725f,	// (0x0000725f) grid_fast2_pane

0x7269,	// (0x00007269) listscroll_fast2_pane_g1

0x7271,	// (0x00007271) listscroll_fast2_pane_g2

0x0001,

0xaf67,	// (0x0000af67) listscroll_fast2_pane_g

0x1642,	// (0x00001642) scroll_pane_cp26

0x727b,	// (0x0000727b) cell_fast2_pane_ParamLimits

0x727b,	// (0x0000727b) cell_fast2_pane

0x7290,	// (0x00007290) cell_fast2_pane_g1

0x7299,	// (0x00007299) cell_fast2_pane_g2

0x72a2,	// (0x000072a2) cell_fast2_pane_g3

0x0002,

0xaf6c,	// (0x0000af6c) cell_fast2_pane_g

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp9

0x0b54,	// (0x00000b54) main_eswt_pane_ParamLimits

0x0b54,	// (0x00000b54) main_eswt_pane

0x7213,	// (0x00007213) list_single_text_info_pane

0x72aa,	// (0x000072aa) eswt_ctrl_button_pane

0x72aa,	// (0x000072aa) eswt_ctrl_canvas_pane

0x72b2,	// (0x000072b2) eswt_ctrl_combo_pane

0x72aa,	// (0x000072aa) eswt_ctrl_default_pane

0x72aa,	// (0x000072aa) eswt_ctrl_label_pane

0x72ba,	// (0x000072ba) eswt_ctrl_wait_pane

0x72c2,	// (0x000072c2) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x72e2,	// (0x000072e2) popup_eswt_tasktip_window_ParamLimits

0x72e2,	// (0x000072e2) popup_eswt_tasktip_window

0x37a7,	// (0x000037a7) bg_popup_window_pane_cp18

0x72f3,	// (0x000072f3) eswt_control_pane_g1_ParamLimits

0x72f3,	// (0x000072f3) eswt_control_pane_g1

0x7300,	// (0x00007300) eswt_control_pane_g2_ParamLimits

0x7300,	// (0x00007300) eswt_control_pane_g2

0x730d,	// (0x0000730d) eswt_control_pane_g3_ParamLimits

0x730d,	// (0x0000730d) eswt_control_pane_g3

0x731a,	// (0x0000731a) eswt_control_pane_g4_ParamLimits

0x731a,	// (0x0000731a) eswt_control_pane_g4

0x0003,

0xaf73,	// (0x0000af73) eswt_control_pane_g_ParamLimits

0xaf73,	// (0x0000af73) eswt_control_pane_g

0x134f,	// (0x0000134f) bg_button_pane_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane

0x0b54,	// (0x00000b54) common_borders_pane_copy2_ParamLimits

0x0b54,	// (0x00000b54) common_borders_pane_copy2

0x7327,	// (0x00007327) control_button_pane_g1_ParamLimits

0x7327,	// (0x00007327) control_button_pane_g1

0x7333,	// (0x00007333) control_button_pane_g2_ParamLimits

0x7333,	// (0x00007333) control_button_pane_g2

0x733f,	// (0x0000733f) control_button_pane_g3_ParamLimits

0x733f,	// (0x0000733f) control_button_pane_g3

0x0002,

0xaf7c,	// (0x0000af7c) control_button_pane_g_ParamLimits

0xaf7c,	// (0x0000af7c) control_button_pane_g

0x7353,	// (0x00007353) control_button_pane_t1

0x7361,	// (0x00007361) control_button_pane_t2

0x0001,

0xaf83,	// (0x0000af83) control_button_pane_t

0x3617,	// (0x00003617) bg_button_pane_g1

0x361f,	// (0x0000361f) bg_button_pane_g2

0x3627,	// (0x00003627) bg_button_pane_g3

0x362f,	// (0x0000362f) bg_button_pane_g4

0x3637,	// (0x00003637) bg_button_pane_g5

0x363f,	// (0x0000363f) bg_button_pane_g6

0x3647,	// (0x00003647) bg_button_pane_g7

0x364f,	// (0x0000364f) bg_button_pane_g8

0x3657,	// (0x00003657) bg_button_pane_g9

0x0008,

0xabe2,	// (0x0000abe2) bg_button_pane_g

0x647b,	// (0x0000647b) common_borders_pane_ParamLimits

0x647b,	// (0x0000647b) common_borders_pane

0x72f3,	// (0x000072f3) eswt_control_pane_g1_copy1_ParamLimits

0x72f3,	// (0x000072f3) eswt_control_pane_g1_copy1

0x7300,	// (0x00007300) eswt_control_pane_g2_copy1_ParamLimits

0x7300,	// (0x00007300) eswt_control_pane_g2_copy1

0x730d,	// (0x0000730d) eswt_control_pane_g3_copy1_ParamLimits

0x730d,	// (0x0000730d) eswt_control_pane_g3_copy1

0x731a,	// (0x0000731a) eswt_control_pane_g4_copy1_ParamLimits

0x731a,	// (0x0000731a) eswt_control_pane_g4_copy1

0x64b6,	// (0x000064b6) bg_eswt_ctrl_canvas_pane_g1

0x647b,	// (0x0000647b) common_borders_pane_cp2_ParamLimits

0x647b,	// (0x0000647b) common_borders_pane_cp2

0x647b,	// (0x0000647b) common_borders_pane_cp3_ParamLimits

0x647b,	// (0x0000647b) common_borders_pane_cp3

0x736f,	// (0x0000736f) separator_horizontal_pane

0x7377,	// (0x00007377) separator_vertical_pane

0x72f3,	// (0x000072f3) eswt_control_pane_g1_copy2_ParamLimits

0x72f3,	// (0x000072f3) eswt_control_pane_g1_copy2

0x7300,	// (0x00007300) eswt_control_pane_g2_copy2_ParamLimits

0x7300,	// (0x00007300) eswt_control_pane_g2_copy2

0x730d,	// (0x0000730d) eswt_control_pane_g3_copy2_ParamLimits

0x730d,	// (0x0000730d) eswt_control_pane_g3_copy2

0x731a,	// (0x0000731a) eswt_control_pane_g4_copy2_ParamLimits

0x731a,	// (0x0000731a) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x7380,	// (0x00007380) separator_horizontal_pane_g1

0x7389,	// (0x00007389) separator_horizontal_pane_g2

0x7392,	// (0x00007392) separator_horizontal_pane_g3

0x0002,

0xaf88,	// (0x0000af88) separator_horizontal_pane_g

0x72f3,	// (0x000072f3) eswt_control_pane_g1_copy3_ParamLimits

0x72f3,	// (0x000072f3) eswt_control_pane_g1_copy3

0x7300,	// (0x00007300) eswt_control_pane_g2_copy3_ParamLimits

0x7300,	// (0x00007300) eswt_control_pane_g2_copy3

0x730d,	// (0x0000730d) eswt_control_pane_g3_copy3_ParamLimits

0x730d,	// (0x0000730d) eswt_control_pane_g3_copy3

0x731a,	// (0x0000731a) eswt_control_pane_g4_copy3_ParamLimits

0x731a,	// (0x0000731a) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x739b,	// (0x0000739b) separator_vertical_pane_g1

0x73a4,	// (0x000073a4) separator_vertical_pane_g2

0x73ad,	// (0x000073ad) separator_vertical_pane_g3

0x0002,

0xaf8f,	// (0x0000af8f) separator_vertical_pane_g

0x72f3,	// (0x000072f3) eswt_control_pane_g1_copy4_ParamLimits

0x72f3,	// (0x000072f3) eswt_control_pane_g1_copy4

0x7300,	// (0x00007300) eswt_control_pane_g2_copy4_ParamLimits

0x7300,	// (0x00007300) eswt_control_pane_g2_copy4

0x730d,	// (0x0000730d) eswt_control_pane_g3_copy4_ParamLimits

0x730d,	// (0x0000730d) eswt_control_pane_g3_copy4

0x731a,	// (0x0000731a) eswt_control_pane_g4_copy4_ParamLimits

0x731a,	// (0x0000731a) eswt_control_pane_g4_copy4

0xd6dd,	// (0x0000d6dd) eswt_ctrl_combo_button_pane

0xd6e5,	// (0x0000d6e5) eswt_ctrl_input_pane

0xd6ed,	// (0x0000d6ed) popup_choice_list_window_cp70

0xd6f5,	// (0x0000d6f5) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x647b,	// (0x0000647b) bg_button_pane_cp70_ParamLimits

0x647b,	// (0x0000647b) bg_button_pane_cp70

0xd703,	// (0x0000d703) eswt_ctrl_combo_button_pane_g1

0x73e4,	// (0x000073e4) wait_bar_pane_cp70

0x37a7,	// (0x000037a7) bg_popup_window_pane_cp70_ParamLimits

0x37a7,	// (0x000037a7) bg_popup_window_pane_cp70

0x73ec,	// (0x000073ec) popup_eswt_tasktip_window_t1

0x7402,	// (0x00007402) wait_bar_pane_cp71_ParamLimits

0x7402,	// (0x00007402) wait_bar_pane_cp71

0x740e,	// (0x0000740e) grid_eswt_app_pane

0x1b34,	// (0x00001b34) scroll_pane_cp70

0xd70b,	// (0x0000d70b) cell_eswt_app_pane_ParamLimits

0xd70b,	// (0x0000d70b) cell_eswt_app_pane

0xd735,	// (0x0000d735) cell_eswt_app_pane_g1_ParamLimits

0xd735,	// (0x0000d735) cell_eswt_app_pane_g1

0xd764,	// (0x0000d764) cell_eswt_app_pane_g2_ParamLimits

0xd764,	// (0x0000d764) cell_eswt_app_pane_g2

0x0001,

0xf108,	// (0x0000f108) cell_eswt_app_pane_g_ParamLimits

0xf108,	// (0x0000f108) cell_eswt_app_pane_g

0xd78d,	// (0x0000d78d) cell_eswt_app_pane_t1_ParamLimits

0xd78d,	// (0x0000d78d) cell_eswt_app_pane_t1

0x74d5,	// (0x000074d5) grid_highlight_pane_cp70_ParamLimits

0x74d5,	// (0x000074d5) grid_highlight_pane_cp70

0x244d,	// (0x0000244d) set_content_pane_g1

0x28cb,	// (0x000028cb) status_small_volume_pane

0x74e1,	// (0x000074e1) status_small_volume_pane_g1

0x74e9,	// (0x000074e9) volume_small2_pane

0x74f2,	// (0x000074f2) volume_small2_pane_g1

0x74fb,	// (0x000074fb) volume_small2_pane_g2

0x7504,	// (0x00007504) volume_small2_pane_g3

0x750d,	// (0x0000750d) volume_small2_pane_g4

0x7516,	// (0x00007516) volume_small2_pane_g5

0x751f,	// (0x0000751f) volume_small2_pane_g6

0x7528,	// (0x00007528) volume_small2_pane_g7

0x7531,	// (0x00007531) volume_small2_pane_g8

0x753a,	// (0x0000753a) volume_small2_pane_g9

0x7543,	// (0x00007543) volume_small2_pane_g10

0x0009,

0xaf9b,	// (0x0000af9b) volume_small2_pane_g

0x6aab,	// (0x00006aab) fep_vkb_top_text_pane_g1_ParamLimits

0xd63d,	// (0x0000d63d) fep_vkb_top_text_pane_t1_ParamLimits

0x6ddc,	// (0x00006ddc) popup_preview_fixed_window_g3_ParamLimits

0x6ddc,	// (0x00006ddc) popup_preview_fixed_window_g3

0xc7a8,	// (0x0000c7a8) popup_toolbar_trans_pane

0xd0ad,	// (0x0000d0ad) aid_height_set_list_ParamLimits

0x4e33,	// (0x00004e33) aid_size_parent_ParamLimits

0x2aed,	// (0x00002aed) list_highlight_pane_cp2_ParamLimits

0x244d,	// (0x0000244d) set_content_pane_g1_ParamLimits

0xd278,	// (0x0000d278) list_single_image_pane_ParamLimits

0xd278,	// (0x0000d278) list_single_image_pane

0xd7bf,	// (0x0000d7bf) aid_size_cell_image_ParamLimits

0xd7bf,	// (0x0000d7bf) aid_size_cell_image

0xd7cc,	// (0x0000d7cc) grid_single_image_pane_ParamLimits

0xd7cc,	// (0x0000d7cc) grid_single_image_pane

0x1375,	// (0x00001375) list_single_image_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_single_image_pane_g1

0x1381,	// (0x00001381) list_single_image_pane_g2_ParamLimits

0x1381,	// (0x00001381) list_single_image_pane_g2

0x0001,

0xafb0,	// (0x0000afb0) list_single_image_pane_g_ParamLimits

0xafb0,	// (0x0000afb0) list_single_image_pane_g

0x7565,	// (0x00007565) list_single_image_pane_t1_ParamLimits

0x7565,	// (0x00007565) list_single_image_pane_t1

0xd7d8,	// (0x0000d7d8) cell_image_list_pane_ParamLimits

0xd7d8,	// (0x0000d7d8) cell_image_list_pane

0xd7ec,	// (0x0000d7ec) cell_image_list_pane_g1

0xd7f5,	// (0x0000d7f5) cell_image_list_pane_g2

0x0001,

0xf10d,	// (0x0000f10d) cell_image_list_pane_g

0x75a1,	// (0x000075a1) aid_size_cell_tb_trans_pane

0x134f,	// (0x0000134f) bg_tb_trans_pane

0x75b3,	// (0x000075b3) grid_tb_trans_pane

0x3617,	// (0x00003617) bg_tb_trans_pane_g1

0x361f,	// (0x0000361f) bg_tb_trans_pane_g2

0x3627,	// (0x00003627) bg_tb_trans_pane_g3

0x362f,	// (0x0000362f) bg_tb_trans_pane_g4

0x3637,	// (0x00003637) bg_tb_trans_pane_g5

0x364f,	// (0x0000364f) bg_tb_trans_pane_g6

0x3657,	// (0x00003657) bg_tb_trans_pane_g7

0x363f,	// (0x0000363f) bg_tb_trans_pane_g8

0x3647,	// (0x00003647) bg_tb_trans_pane_g9

0x0008,

0xafba,	// (0x0000afba) bg_tb_trans_pane_g

0x75c7,	// (0x000075c7) cell_toolbar_trans_pane_ParamLimits

0x75c7,	// (0x000075c7) cell_toolbar_trans_pane

0x64b6,	// (0x000064b6) cell_toolbar_trans_pane_g1

0xd499,	// (0x0000d499) list_form2_midp_pane_t1

0xd4a7,	// (0x0000d4a7) list_form2_midp_pane_t2

0x0001,

0xf0d8,	// (0x0000f0d8) list_form2_midp_pane_t

0x601d,	// (0x0000601d) scroll_pane_cp51_ParamLimits

0x6220,	// (0x00006220) form2_midp_wait_pane_g1

0x6229,	// (0x00006229) form2_midp_wait_pane_g2

0x6232,	// (0x00006232) form2_midp_wait_pane_g3

0x0002,

0xae78,	// (0x0000ae78) form2_midp_wait_pane_g

0x04e9,	// (0x000004e9) list_highlight_pane_cp21_ParamLimits

0x6281,	// (0x00006281) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6290,	// (0x00006290) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5035,	// (0x00005035) list_single_2graphic_im_pane_ParamLimits

0x5035,	// (0x00005035) list_single_2graphic_im_pane

0xd7fe,	// (0x0000d7fe) list_single_2graphic_im_pane_g1_ParamLimits

0xd7fe,	// (0x0000d7fe) list_single_2graphic_im_pane_g1

0xd80f,	// (0x0000d80f) list_single_2graphic_im_pane_g2_ParamLimits

0xd80f,	// (0x0000d80f) list_single_2graphic_im_pane_g2

0xd81b,	// (0x0000d81b) list_single_2graphic_im_pane_g3_ParamLimits

0xd81b,	// (0x0000d81b) list_single_2graphic_im_pane_g3

0x0003,

0xf112,	// (0x0000f112) list_single_2graphic_im_pane_g_ParamLimits

0xf112,	// (0x0000f112) list_single_2graphic_im_pane_g

0xd82f,	// (0x0000d82f) list_single_2graphic_im_pane_t1_ParamLimits

0xd82f,	// (0x0000d82f) list_single_2graphic_im_pane_t1

0x6de8,	// (0x00006de8) list_single_graphic_2heading_pane_fp_ParamLimits

0x6de8,	// (0x00006de8) list_single_graphic_2heading_pane_fp

0x6e2e,	// (0x00006e2e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6e2e,	// (0x00006e2e) list_single_graphic_2heading_pane_fp_g1

0x6dff,	// (0x00006dff) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6dff,	// (0x00006dff) list_single_graphic_2heading_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_2heading_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_2heading_pane_fp_g4

0x6e0b,	// (0x00006e0b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6e0b,	// (0x00006e0b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xaefb,	// (0x0000aefb) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xaefb,	// (0x0000aefb) list_single_graphic_2heading_pane_fp_g

0x765b,	// (0x0000765b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x765b,	// (0x0000765b) list_single_graphic_2heading_pane_fp_t1

0x6e66,	// (0x00006e66) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6e66,	// (0x00006e66) list_single_graphic_2heading_pane_fp_t2

0x7671,	// (0x00007671) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7671,	// (0x00007671) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xafd6,	// (0x0000afd6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xafd6,	// (0x0000afd6) list_single_graphic_2heading_pane_fp_t

0x66f4,	// (0x000066f4) fep_hwr_write_pane_g5_ParamLimits

0x66f4,	// (0x000066f4) fep_hwr_write_pane_g5

0x6700,	// (0x00006700) fep_hwr_write_pane_g6_ParamLimits

0x6700,	// (0x00006700) fep_hwr_write_pane_g6

0x72c2,	// (0x000072c2) eswt_shell_pane_ParamLimits

0x37a7,	// (0x000037a7) bg_popup_window_pane_cp18_ParamLimits

0x4ce1,	// (0x00004ce1) heading_pane_cp70

0x73ec,	// (0x000073ec) popup_eswt_tasktip_window_t1_ParamLimits

0xc869,	// (0x0000c869) aid_touch_tab_arrow_left

0xc87f,	// (0x0000c87f) aid_touch_tab_arrow_right

0xb461,	// (0x0000b461) title_pane_g3_ParamLimits

0xb461,	// (0x0000b461) title_pane_g3

0x123c,	// (0x0000123c) set_value_pane_g1

0xc7a8,	// (0x0000c7a8) popup_toolbar_trans_pane_ParamLimits

0x75a1,	// (0x000075a1) aid_size_cell_tb_trans_pane_ParamLimits

0x134f,	// (0x0000134f) bg_tb_trans_pane_ParamLimits

0x75b3,	// (0x000075b3) grid_tb_trans_pane_ParamLimits

0x0819,	// (0x00000819) cont_note_pane_ParamLimits

0x0819,	// (0x00000819) cont_note_pane

0x0b54,	// (0x00000b54) cont_snote2_single_text_pane_ParamLimits

0x0b54,	// (0x00000b54) cont_snote2_single_text_pane

0x0b54,	// (0x00000b54) cont_snote2_single_graphic_pane_ParamLimits

0x0b54,	// (0x00000b54) cont_snote2_single_graphic_pane

0x3e6c,	// (0x00003e6c) cont_note_wait_pane_ParamLimits

0x3e6c,	// (0x00003e6c) cont_note_wait_pane

0x3e6c,	// (0x00003e6c) cont_note_image_pane_ParamLimits

0x3e6c,	// (0x00003e6c) cont_note_image_pane

0x7687,	// (0x00007687) popup_note2_window_g1_ParamLimits

0x7687,	// (0x00007687) popup_note2_window_g1

0x76b8,	// (0x000076b8) popup_note2_window_t1_ParamLimits

0x76b8,	// (0x000076b8) popup_note2_window_t1

0x76fd,	// (0x000076fd) popup_note2_window_t2_ParamLimits

0x76fd,	// (0x000076fd) popup_note2_window_t2

0x7742,	// (0x00007742) popup_note2_window_t3_ParamLimits

0x7742,	// (0x00007742) popup_note2_window_t3

0x7787,	// (0x00007787) popup_note2_window_t4_ParamLimits

0x7787,	// (0x00007787) popup_note2_window_t4

0x0891,	// (0x00000891) popup_note2_window_t5_ParamLimits

0x0891,	// (0x00000891) popup_note2_window_t5

0x0004,

0xafe2,	// (0x0000afe2) popup_note2_window_t_ParamLimits

0xafe2,	// (0x0000afe2) popup_note2_window_t

0x77b6,	// (0x000077b6) popup_note2_image_window_g1_ParamLimits

0x77b6,	// (0x000077b6) popup_note2_image_window_g1

0x77c2,	// (0x000077c2) popup_note2_image_window_g2_ParamLimits

0x77c2,	// (0x000077c2) popup_note2_image_window_g2

0x0001,

0xafed,	// (0x0000afed) popup_note2_image_window_g_ParamLimits

0xafed,	// (0x0000afed) popup_note2_image_window_g

0x77d4,	// (0x000077d4) popup_note2_image_window_t1_ParamLimits

0x77d4,	// (0x000077d4) popup_note2_image_window_t1

0x77ec,	// (0x000077ec) popup_note2_image_window_t2_ParamLimits

0x77ec,	// (0x000077ec) popup_note2_image_window_t2

0x7804,	// (0x00007804) popup_note2_image_window_t3_ParamLimits

0x7804,	// (0x00007804) popup_note2_image_window_t3

0x0002,

0xaff2,	// (0x0000aff2) popup_note2_image_window_t_ParamLimits

0xaff2,	// (0x0000aff2) popup_note2_image_window_t

0x3e7a,	// (0x00003e7a) popup_note2_wait_window_g1_ParamLimits

0x3e7a,	// (0x00003e7a) popup_note2_wait_window_g1

0x3e86,	// (0x00003e86) popup_note2_wait_window_g2_ParamLimits

0x3e86,	// (0x00003e86) popup_note2_wait_window_g2

0x3e92,	// (0x00003e92) popup_note2_wait_window_g3_ParamLimits

0x3e92,	// (0x00003e92) popup_note2_wait_window_g3

0x0002,

0xabc4,	// (0x0000abc4) popup_note2_wait_window_g_ParamLimits

0xabc4,	// (0x0000abc4) popup_note2_wait_window_g

0x7820,	// (0x00007820) popup_note2_wait_window_t1_ParamLimits

0x7820,	// (0x00007820) popup_note2_wait_window_t1

0x783e,	// (0x0000783e) popup_note2_wait_window_t2_ParamLimits

0x783e,	// (0x0000783e) popup_note2_wait_window_t2

0x785c,	// (0x0000785c) popup_note2_wait_window_t3_ParamLimits

0x785c,	// (0x0000785c) popup_note2_wait_window_t3

0x786e,	// (0x0000786e) popup_note2_wait_window_t4_ParamLimits

0x786e,	// (0x0000786e) popup_note2_wait_window_t4

0x0003,

0xaff9,	// (0x0000aff9) popup_note2_wait_window_t_ParamLimits

0xaff9,	// (0x0000aff9) popup_note2_wait_window_t

0x7880,	// (0x00007880) wait_bar2_pane_ParamLimits

0x7880,	// (0x00007880) wait_bar2_pane

0x7898,	// (0x00007898) popup_snote2_single_text_window_g1_ParamLimits

0x7898,	// (0x00007898) popup_snote2_single_text_window_g1

0x78c0,	// (0x000078c0) popup_snote2_single_text_window_t1_ParamLimits

0x78c0,	// (0x000078c0) popup_snote2_single_text_window_t1

0x790c,	// (0x0000790c) popup_snote2_single_text_window_t2_ParamLimits

0x790c,	// (0x0000790c) popup_snote2_single_text_window_t2

0x7958,	// (0x00007958) popup_snote2_single_text_window_t3_ParamLimits

0x7958,	// (0x00007958) popup_snote2_single_text_window_t3

0x7999,	// (0x00007999) popup_snote2_single_text_window_t4_ParamLimits

0x7999,	// (0x00007999) popup_snote2_single_text_window_t4

0x79cf,	// (0x000079cf) popup_snote2_single_text_window_t5_ParamLimits

0x79cf,	// (0x000079cf) popup_snote2_single_text_window_t5

0x0004,

0xb002,	// (0x0000b002) popup_snote2_single_text_window_t_ParamLimits

0xb002,	// (0x0000b002) popup_snote2_single_text_window_t

0x79fa,	// (0x000079fa) popup_snote2_single_graphic_window_g1_ParamLimits

0x79fa,	// (0x000079fa) popup_snote2_single_graphic_window_g1

0x7a22,	// (0x00007a22) popup_snote2_single_graphic_window_g2_ParamLimits

0x7a22,	// (0x00007a22) popup_snote2_single_graphic_window_g2

0x0001,

0xb00d,	// (0x0000b00d) popup_snote2_single_graphic_window_g_ParamLimits

0xb00d,	// (0x0000b00d) popup_snote2_single_graphic_window_g

0x7a4a,	// (0x00007a4a) popup_snote2_single_graphic_window_t1_ParamLimits

0x7a4a,	// (0x00007a4a) popup_snote2_single_graphic_window_t1

0x7a96,	// (0x00007a96) popup_snote2_single_graphic_window_t2_ParamLimits

0x7a96,	// (0x00007a96) popup_snote2_single_graphic_window_t2

0x7958,	// (0x00007958) popup_snote2_single_graphic_window_t3_ParamLimits

0x7958,	// (0x00007958) popup_snote2_single_graphic_window_t3

0x7999,	// (0x00007999) popup_snote2_single_graphic_window_t4_ParamLimits

0x7999,	// (0x00007999) popup_snote2_single_graphic_window_t4

0x79cf,	// (0x000079cf) popup_snote2_single_graphic_window_t5_ParamLimits

0x79cf,	// (0x000079cf) popup_snote2_single_graphic_window_t5

0x0004,

0xb012,	// (0x0000b012) popup_snote2_single_graphic_window_t_ParamLimits

0xb012,	// (0x0000b012) popup_snote2_single_graphic_window_t

0x5e81,	// (0x00005e81) clock_nsta_pane_cp2_t1

0x5e81,	// (0x00005e81) clock_nsta_pane_cp2_t2

0x0001,

0xae39,	// (0x0000ae39) clock_nsta_pane_cp2_t

0x1369,	// (0x00001369) form_field_data_wide_pane_g1_ParamLimits

0x1375,	// (0x00001375) form_field_data_wide_pane_g2_ParamLimits

0x1375,	// (0x00001375) form_field_data_wide_pane_g2

0x1381,	// (0x00001381) form_field_data_wide_pane_g3_ParamLimits

0x1381,	// (0x00001381) form_field_data_wide_pane_g3

0x0002,

0xaa09,	// (0x0000aa09) form_field_data_wide_pane_g_ParamLimits

0xaa09,	// (0x0000aa09) form_field_data_wide_pane_g

0xd3af,	// (0x0000d3af) grid_touch_3_pane_ParamLimits

0xd3af,	// (0x0000d3af) grid_touch_3_pane

0xd860,	// (0x0000d860) cell_touch_3_pane_ParamLimits

0xd860,	// (0x0000d860) cell_touch_3_pane

0x64b6,	// (0x000064b6) cell_touch_3_pane_g1

0x64b6,	// (0x000064b6) cell_touch_3_pane_g2

0x0001,

0xaebe,	// (0x0000aebe) cell_touch_3_pane_g

0x08c3,	// (0x000008c3) cont_query_data_pane

0x08cb,	// (0x000008cb) cont_query_data_pane_cp1

0x7b11,	// (0x00007b11) button_value_adjust_pane_cp7

0x7b19,	// (0x00007b19) query_popup_pane_cp3

0x1e30,	// (0x00001e30) bg_popup_sub_pane_cp22_ParamLimits

0x1e46,	// (0x00001e46) navi_navi_volume_pane_cp2

0x1e61,	// (0x00001e61) popup_side_volume_key_window_g2

0x1e70,	// (0x00001e70) popup_side_volume_key_window_g3

0x0002,

0xaa9b,	// (0x0000aa9b) popup_side_volume_key_window_g

0x1e8d,	// (0x00001e8d) popup_side_volume_key_window_t2

0x0001,

0xaaa2,	// (0x0000aaa2) popup_side_volume_key_window_t

0x2317,	// (0x00002317) popup_side_volume_key_window_ParamLimits

0xb867,	// (0x0000b867) list_double_graphic_pane_g4_ParamLimits

0xb867,	// (0x0000b867) list_double_graphic_pane_g4

0xd251,	// (0x0000d251) list_single_2heading_msg_pane_ParamLimits

0xd251,	// (0x0000d251) list_single_2heading_msg_pane

0xd8a9,	// (0x0000d8a9) list_single_2heading_msg_pane_g1_ParamLimits

0xd8a9,	// (0x0000d8a9) list_single_2heading_msg_pane_g1

0xd8b5,	// (0x0000d8b5) list_single_2heading_msg_pane_g2_ParamLimits

0xd8b5,	// (0x0000d8b5) list_single_2heading_msg_pane_g2

0xd8c8,	// (0x0000d8c8) list_single_2heading_msg_pane_g3_ParamLimits

0xd8c8,	// (0x0000d8c8) list_single_2heading_msg_pane_g3

0xd8d4,	// (0x0000d8d4) list_single_2heading_msg_pane_g4_ParamLimits

0xd8d4,	// (0x0000d8d4) list_single_2heading_msg_pane_g4

0x0003,

0xf11b,	// (0x0000f11b) list_single_2heading_msg_pane_g_ParamLimits

0xf11b,	// (0x0000f11b) list_single_2heading_msg_pane_g

0xd8ec,	// (0x0000d8ec) list_single_2heading_msg_pane_t1_ParamLimits

0xd8ec,	// (0x0000d8ec) list_single_2heading_msg_pane_t1

0xd914,	// (0x0000d914) list_single_2heading_msg_pane_t2_ParamLimits

0xd914,	// (0x0000d914) list_single_2heading_msg_pane_t2

0xd97f,	// (0x0000d97f) list_single_2heading_msg_pane_t3_ParamLimits

0xd97f,	// (0x0000d97f) list_single_2heading_msg_pane_t3

0x7c0d,	// (0x00007c0d) list_single_2heading_msg_pane_t4_ParamLimits

0x7c0d,	// (0x00007c0d) list_single_2heading_msg_pane_t4

0x0003,

0xf124,	// (0x0000f124) list_single_2heading_msg_pane_t_ParamLimits

0xf124,	// (0x0000f124) list_single_2heading_msg_pane_t

0x043d,	// (0x0000043d) title_pane_g4_ParamLimits

0x043d,	// (0x0000043d) title_pane_g4

0x1899,	// (0x00001899) title_pane_stacon_g3_ParamLimits

0x1899,	// (0x00001899) title_pane_stacon_g3

0x761e,	// (0x0000761e) list_single_2graphic_im_pane_g4_ParamLimits

0x761e,	// (0x0000761e) list_single_2graphic_im_pane_g4

0x4a37,	// (0x00004a37) popup_side_volume_key_window_cp

0x54c6,	// (0x000054c6) main_idle_act2_pane_t1

0x365f,	// (0x0000365f) toolbar_button_pane_g10

0xb77e,	// (0x0000b77e) popup_toolbar_window_cp1

0x5e72,	// (0x00005e72) clock_nsta_pane_cp_t1

0x5e72,	// (0x00005e72) clock_nsta_pane_cp_t2

0x0001,

0xae34,	// (0x0000ae34) clock_nsta_pane_cp_t

0x1e46,	// (0x00001e46) navi_navi_volume_pane_cp2_ParamLimits

0x1e55,	// (0x00001e55) popup_side_volume_key_window_g1_ParamLimits

0x1e61,	// (0x00001e61) popup_side_volume_key_window_g2_ParamLimits

0x1e70,	// (0x00001e70) popup_side_volume_key_window_g3_ParamLimits

0xaa9b,	// (0x0000aa9b) popup_side_volume_key_window_g_ParamLimits

0x6534,	// (0x00006534) fep_hwr_aid_pane

0x65db,	// (0x000065db) bg_fep_hwr_top_pane_g4_ParamLimits

0x65fb,	// (0x000065fb) fep_hwr_top_pane_g1_ParamLimits

0x660d,	// (0x0000660d) fep_hwr_top_pane_g2_ParamLimits

0x661f,	// (0x0000661f) fep_hwr_top_pane_g3_ParamLimits

0xae89,	// (0x0000ae89) fep_hwr_top_pane_g_ParamLimits

0x6634,	// (0x00006634) fep_hwr_top_text_pane_ParamLimits

0x47f8,	// (0x000047f8) aid_touch_tab_arrow_arrow_2

0x4801,	// (0x00004801) aid_touch_tab_arrow_left_2

0x6548,	// (0x00006548) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x657f,	// (0x0000657f) fep_hwr_prediction_pane

0x68b3,	// (0x000068b3) fep_vkb_prediction_pane

0xd61d,	// (0x0000d61d) fep_vkb_side_pane_g3_ParamLimits

0xd61d,	// (0x0000d61d) fep_vkb_side_pane_g3

0x6963,	// (0x00006963) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7023,	// (0x00007023) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7030,	// (0x00007030) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xaf33,	// (0x0000af33) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7c32,	// (0x00007c32) fep_hwr_prediction_pane_g1

0x7c3c,	// (0x00007c3c) fep_hwr_prediction_pane_g2

0x7c44,	// (0x00007c44) fep_hwr_prediction_pane_g3

0x7c4c,	// (0x00007c4c) fep_hwr_prediction_pane_g4

0x0003,

0xb02f,	// (0x0000b02f) fep_hwr_prediction_pane_g

0x7c32,	// (0x00007c32) fep_vkb_prediction_pane_g1

0x7c54,	// (0x00007c54) fep_vkb_prediction_pane_g2

0x7c5c,	// (0x00007c5c) fep_vkb_prediction_pane_g3

0x7c64,	// (0x00007c64) fep_vkb_prediction_pane_g4

0x0003,

0xb038,	// (0x0000b038) fep_vkb_prediction_pane_g

0x4da2,	// (0x00004da2) slider_set_pane_g3

0x4db6,	// (0x00004db6) slider_set_pane_g4

0x4dce,	// (0x00004dce) slider_set_pane_g5

0x4da2,	// (0x00004da2) slider_set_pane_g6

0x4de4,	// (0x00004de4) slider_set_pane_g7

0x4f90,	// (0x00004f90) slider_form_pane_g3

0x4f99,	// (0x00004f99) slider_form_pane_g4

0x4fa1,	// (0x00004fa1) slider_form_pane_g5

0x4f90,	// (0x00004f90) slider_form_pane_g6

0xd1f4,	// (0x0000d1f4) slider_form_pane_g7

0x57ab,	// (0x000057ab) slider_set_pane_vc_g3

0x57b4,	// (0x000057b4) slider_set_pane_vc_g4

0x57bd,	// (0x000057bd) slider_set_pane_vc_g5

0x57ab,	// (0x000057ab) slider_set_pane_vc_g6

0x57c6,	// (0x000057c6) slider_set_pane_vc_g7

0x57ab,	// (0x000057ab) slider_form_pane_vc_g1

0x57b4,	// (0x000057b4) slider_form_pane_vc_g2

0x57bd,	// (0x000057bd) slider_form_pane_vc_g3

0x57ab,	// (0x000057ab) slider_form_pane_vc_g4

0x5b78,	// (0x00005b78) slider_form_pane_vc_g5

0x0004,

0xae0d,	// (0x0000ae0d) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7c6c,	// (0x00007c6c) ai3_links_pane

0xd9ed,	// (0x0000d9ed) popup_ai3_data_window_ParamLimits

0xd9ed,	// (0x0000d9ed) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xda05,	// (0x0000da05) cell_ai3_links_pane_ParamLimits

0xda05,	// (0x0000da05) cell_ai3_links_pane

0x7ca5,	// (0x00007ca5) bg_popup_sub_pane_cp11

0x7cb2,	// (0x00007cb2) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7cd7,	// (0x00007cd7) heading_ai3_data_pane

0x7cdf,	// (0x00007cdf) list_ai3_gene_pane

0x7ceb,	// (0x00007ceb) popup_ai3_data_window_g1

0x7cf3,	// (0x00007cf3) heading_ai3_data_pane_g1

0x7cfb,	// (0x00007cfb) heading_ai3_data_pane_t1

0x7d09,	// (0x00007d09) list_double_ai3_gene_pane_ParamLimits

0x7d09,	// (0x00007d09) list_double_ai3_gene_pane

0x7d16,	// (0x00007d16) list_single_ai3_gene_pane_ParamLimits

0x7d16,	// (0x00007d16) list_single_ai3_gene_pane

0x647b,	// (0x0000647b) list_highlight_pane_cp7_ParamLimits

0x647b,	// (0x0000647b) list_highlight_pane_cp7

0x7d23,	// (0x00007d23) list_single_a13_gene_pane_t1_ParamLimits

0x7d23,	// (0x00007d23) list_single_a13_gene_pane_t1

0x7d3a,	// (0x00007d3a) list_single_ai3_gene_pane_g1

0x7d43,	// (0x00007d43) list_single_ai3_gene_pane_g2

0x0001,

0xb041,	// (0x0000b041) list_single_ai3_gene_pane_g

0x7d4b,	// (0x00007d4b) list_double_ai3_gene_pane_g1_ParamLimits

0x7d4b,	// (0x00007d4b) list_double_ai3_gene_pane_g1

0x7d57,	// (0x00007d57) list_double_ai3_gene_pane_t1_ParamLimits

0x7d57,	// (0x00007d57) list_double_ai3_gene_pane_t1

0x7d73,	// (0x00007d73) list_double_ai3_gene_pane_t2_ParamLimits

0x7d73,	// (0x00007d73) list_double_ai3_gene_pane_t2

0x7d88,	// (0x00007d88) list_double_ai3_gene_pane_t3_ParamLimits

0x7d88,	// (0x00007d88) list_double_ai3_gene_pane_t3

0x0002,

0xb046,	// (0x0000b046) list_double_ai3_gene_pane_t_ParamLimits

0xb046,	// (0x0000b046) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7b2a,	// (0x00007b2a) aid_size_min_col_2

0xd893,	// (0x0000d893) aid_size_min_msg_ParamLimits

0xd893,	// (0x0000d893) aid_size_min_msg

0xd631,	// (0x0000d631) fep_vkb_top_text_pane_g2_ParamLimits

0xd631,	// (0x0000d631) fep_vkb_top_text_pane_g2

0x0001,

0xf0f8,	// (0x0000f0f8) fep_vkb_top_text_pane_g_ParamLimits

0xf0f8,	// (0x0000f0f8) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7da5,	// (0x00007da5) grid_hc_apps_pane_ParamLimits

0x7da5,	// (0x00007da5) grid_hc_apps_pane

0x7db4,	// (0x00007db4) list_hc_apps_pane

0x7dbc,	// (0x00007dbc) scroll_pane_cp37_ParamLimits

0x7dbc,	// (0x00007dbc) scroll_pane_cp37

0xda1f,	// (0x0000da1f) cell_hc_apps_pane_ParamLimits

0xda1f,	// (0x0000da1f) cell_hc_apps_pane

0xdadf,	// (0x0000dadf) cell_hc_apps_pane_g1_ParamLimits

0xdadf,	// (0x0000dadf) cell_hc_apps_pane_g1

0x7ea9,	// (0x00007ea9) cell_hc_apps_pane_g2_ParamLimits

0x7ea9,	// (0x00007ea9) cell_hc_apps_pane_g2

0x7ec5,	// (0x00007ec5) cell_hc_apps_pane_g3_ParamLimits

0x7ec5,	// (0x00007ec5) cell_hc_apps_pane_g3

0x0002,

0xf12d,	// (0x0000f12d) cell_hc_apps_pane_g_ParamLimits

0xf12d,	// (0x0000f12d) cell_hc_apps_pane_g

0xdb0c,	// (0x0000db0c) cell_hc_apps_pane_t1_ParamLimits

0xdb0c,	// (0x0000db0c) cell_hc_apps_pane_t1

0x0819,	// (0x00000819) grid_highlight_pane_cp10_ParamLimits

0x0819,	// (0x00000819) grid_highlight_pane_cp10

0xdb4a,	// (0x0000db4a) list_single_hc_apps_pane_ParamLimits

0xdb4a,	// (0x0000db4a) list_single_hc_apps_pane

0x7f9a,	// (0x00007f9a) list_single_hc_apps_pane_g1

0x7fb3,	// (0x00007fb3) list_single_hc_apps_pane_g2

0x0001,

0xb054,	// (0x0000b054) list_single_hc_apps_pane_g

0x7fcc,	// (0x00007fcc) list_single_hc_apps_pane_g2_copy1

0x7fe8,	// (0x00007fe8) list_single_hc_apps_pane_t1

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_ParamLimits

0x0533,	// (0x00000533) setting_slider_pane_t1_ParamLimits

0x054c,	// (0x0000054c) setting_slider_pane_t2_ParamLimits

0x0565,	// (0x00000565) setting_slider_pane_t3_ParamLimits

0xa8f1,	// (0x0000a8f1) setting_slider_pane_t_ParamLimits

0x057c,	// (0x0000057c) slider_set_pane_ParamLimits

0x2954,	// (0x00002954) control_pane_g5_ParamLimits

0x2954,	// (0x00002954) control_pane_g5

0x4d89,	// (0x00004d89) slider_set_pane_g1_ParamLimits

0x4d96,	// (0x00004d96) slider_set_pane_g2_ParamLimits

0x4da2,	// (0x00004da2) slider_set_pane_g3_ParamLimits

0x4db6,	// (0x00004db6) slider_set_pane_g4_ParamLimits

0x4dce,	// (0x00004dce) slider_set_pane_g5_ParamLimits

0x4da2,	// (0x00004da2) slider_set_pane_g6_ParamLimits

0x4de4,	// (0x00004de4) slider_set_pane_g7_ParamLimits

0xace0,	// (0x0000ace0) slider_set_pane_g_ParamLimits

0x23f8,	// (0x000023f8) navi_icon_text_pane_ParamLimits

0xc835,	// (0x0000c835) aid_fill_nsta_2_ParamLimits

0xc869,	// (0x0000c869) aid_touch_tab_arrow_left_ParamLimits

0xc87f,	// (0x0000c87f) aid_touch_tab_arrow_right_ParamLimits

0xc91a,	// (0x0000c91a) clock_nsta_pane_ParamLimits

0xcf8a,	// (0x0000cf8a) navi_icon_pane_g1_ParamLimits

0xcf96,	// (0x0000cf96) navi_text_pane_t1_ParamLimits

0xd47b,	// (0x0000d47b) navi_icon_text_pane_g1_ParamLimits

0xd487,	// (0x0000d487) navi_icon_text_pane_t1_ParamLimits

0x7f9a,	// (0x00007f9a) list_single_hc_apps_pane_g1_ParamLimits

0x7fb3,	// (0x00007fb3) list_single_hc_apps_pane_g2_ParamLimits

0xb054,	// (0x0000b054) list_single_hc_apps_pane_g_ParamLimits

0x7fcc,	// (0x00007fcc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7fe8,	// (0x00007fe8) list_single_hc_apps_pane_t1_ParamLimits

0xb3cd,	// (0x0000b3cd) popup_toolbar2_fixed_window_ParamLimits

0xb3cd,	// (0x0000b3cd) popup_toolbar2_fixed_window

0xc79e,	// (0x0000c79e) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x8016,	// (0x00008016) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x8016,	// (0x00008016) grid_toolbar2_fixed_pane

0xdb7d,	// (0x0000db7d) cell_toolbar2_fixed_pane_ParamLimits

0xdb7d,	// (0x0000db7d) cell_toolbar2_fixed_pane

0xdb98,	// (0x0000db98) cell_toolbar2_fixed_pane_g1

0x8038,	// (0x00008038) toolbar2_fixed_button_pane

0x3617,	// (0x00003617) toolbar2_fixed_button_pane_g1

0x361f,	// (0x0000361f) toolbar2_fixed_button_pane_g2

0x3627,	// (0x00003627) toolbar2_fixed_button_pane_g3

0x362f,	// (0x0000362f) toolbar2_fixed_button_pane_g4

0x3637,	// (0x00003637) toolbar2_fixed_button_pane_g5

0x363f,	// (0x0000363f) toolbar2_fixed_button_pane_g6

0x3647,	// (0x00003647) toolbar2_fixed_button_pane_g7

0x364f,	// (0x0000364f) toolbar2_fixed_button_pane_g8

0x3657,	// (0x00003657) toolbar2_fixed_button_pane_g9

0x0008,

0xabe2,	// (0x0000abe2) toolbar2_fixed_button_pane_g

0x8040,	// (0x00008040) cell_toolbar2_float_pane_ParamLimits

0x8040,	// (0x00008040) cell_toolbar2_float_pane

0x8051,	// (0x00008051) cell_toolbar2_float_pane_g1

0x8038,	// (0x00008038) toolbar2_fixed_button_pane_cp

0xd5e4,	// (0x0000d5e4) fep_vkb_accented_list_pane_ParamLimits

0xd5e4,	// (0x0000d5e4) fep_vkb_accented_list_pane

0x6cb2,	// (0x00006cb2) bg_popup_fep_shadow_pane_g9

0x257a,	// (0x0000257a) bg_popup_fep_shadow_pane_cp3

0x1629,	// (0x00001629) list_accented_list_pane

0x805a,	// (0x0000805a) list_single_accented_list_pane_ParamLimits

0x805a,	// (0x0000805a) list_single_accented_list_pane

0x257a,	// (0x0000257a) list_highlight_pane_cp10

0x806b,	// (0x0000806b) list_single_accented_list_pane_t1

0xc6c8,	// (0x0000c6c8) popup_slider_window_ParamLimits

0xc6c8,	// (0x0000c6c8) popup_slider_window

0x7b21,	// (0x00007b21) aid_indentation_list_msg

0xdc91,	// (0x0000dc91) bg_popup_window_pane_cp19

0x818f,	// (0x0000818f) popup_slider_window_g1

0x81ab,	// (0x000081ab) popup_slider_window_g2

0x81c7,	// (0x000081c7) popup_slider_window_g3

0x0005,

0xf134,	// (0x0000f134) popup_slider_window_g

0x8223,	// (0x00008223) popup_slider_window_t1

0x8297,	// (0x00008297) small_volume_slider_vertical_pane

0x64b6,	// (0x000064b6) small_volume_slider_vertical_pane_g1

0x64b6,	// (0x000064b6) small_volume_slider_vertical_pane_g2

0x82b3,	// (0x000082b3) small_volume_slider_vertical_pane_g3

0x0002,

0xb06b,	// (0x0000b06b) small_volume_slider_vertical_pane_g

0xb33b,	// (0x0000b33b) area_side_right_pane_ParamLimits

0xb33b,	// (0x0000b33b) area_side_right_pane

0xdd49,	// (0x0000dd49) aid_size_side_button_ParamLimits

0xdd49,	// (0x0000dd49) aid_size_side_button

0xdd62,	// (0x0000dd62) grid_sctrl_middle_pane_ParamLimits

0xdd62,	// (0x0000dd62) grid_sctrl_middle_pane

0x82f0,	// (0x000082f0) sctrl_sk_bottom_pane

0x8301,	// (0x00008301) sctrl_sk_top_pane

0x8313,	// (0x00008313) aid_touch_sctrl_top

0x0819,	// (0x00000819) bg_sctrl_sk_pane_ParamLimits

0x0819,	// (0x00000819) bg_sctrl_sk_pane

0x8320,	// (0x00008320) sctrl_sk_top_pane_g1

0x832d,	// (0x0000832d) sctrl_sk_top_pane_t1

0x8313,	// (0x00008313) aid_touch_sctrl_bottom

0x0819,	// (0x00000819) bg_sctrl_sk_pane_cp_ParamLimits

0x0819,	// (0x00000819) bg_sctrl_sk_pane_cp

0x8348,	// (0x00008348) sctrl_sk_bottom_pane_g1

0x832d,	// (0x0000832d) sctrl_sk_bottom_pane_t1

0xdd7c,	// (0x0000dd7c) cell_sctrl_middle_pane_ParamLimits

0xdd7c,	// (0x0000dd7c) cell_sctrl_middle_pane

0xdd8d,	// (0x0000dd8d) aid_touch_sctrl_middle_ParamLimits

0xdd8d,	// (0x0000dd8d) aid_touch_sctrl_middle

0xdd9a,	// (0x0000dd9a) bg_sctrl_middle_pane_ParamLimits

0xdd9a,	// (0x0000dd9a) bg_sctrl_middle_pane

0x840d,	// (0x0000840d) cell_sctrl_middle_pane_g1_ParamLimits

0x840d,	// (0x0000840d) cell_sctrl_middle_pane_g1

0xdda8,	// (0x0000dda8) cell_sctrl_middle_pane_g2_ParamLimits

0xdda8,	// (0x0000dda8) cell_sctrl_middle_pane_g2

0x0001,

0xf141,	// (0x0000f141) cell_sctrl_middle_pane_g_ParamLimits

0xf141,	// (0x0000f141) cell_sctrl_middle_pane_g

0x3617,	// (0x00003617) bg_sctrl_middle_pane_g1

0x361f,	// (0x0000361f) bg_sctrl_middle_pane_g2

0x3627,	// (0x00003627) bg_sctrl_middle_pane_g3

0x362f,	// (0x0000362f) bg_sctrl_middle_pane_g4

0x3637,	// (0x00003637) bg_sctrl_middle_pane_g5

0x363f,	// (0x0000363f) bg_sctrl_middle_pane_g6

0x3647,	// (0x00003647) bg_sctrl_middle_pane_g7

0x364f,	// (0x0000364f) bg_sctrl_middle_pane_g8

0x0007,

0xb07c,	// (0x0000b07c) bg_sctrl_middle_pane_g

0x3657,	// (0x00003657) bg_sctrl_middle_pane_g8_copy1

0x3617,	// (0x00003617) bg_sctrl_sk_pane_g1

0x361f,	// (0x0000361f) bg_sctrl_sk_pane_g2

0x3627,	// (0x00003627) bg_sctrl_sk_pane_g3

0x0008,

0xabe2,	// (0x0000abe2) bg_sctrl_sk_pane_g

0x0d12,	// (0x00000d12) aid_size_touch_scroll_bar

0x362f,	// (0x0000362f) bg_sctrl_sk_pane_g4

0x3637,	// (0x00003637) bg_sctrl_sk_pane_g5

0x363f,	// (0x0000363f) bg_sctrl_sk_pane_g6

0x3647,	// (0x00003647) bg_sctrl_sk_pane_g7

0x364f,	// (0x0000364f) bg_sctrl_sk_pane_g8

0x3657,	// (0x00003657) bg_sctrl_sk_pane_g9

0x2b95,	// (0x00002b95) popup_fep_china_hwr2_fs_candidate_window

0xc202,	// (0x0000c202) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc202,	// (0x0000c202) popup_fep_china_hwr2_fs_control_window

0x6963,	// (0x00006963) sctrl_sk_top_pane_g2

0x0001,

0xb072,	// (0x0000b072) sctrl_sk_top_pane_g

0xddb4,	// (0x0000ddb4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xddb4,	// (0x0000ddb4) aid_fep_china_hwr2_fs_cell

0xddc8,	// (0x0000ddc8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xddc8,	// (0x0000ddc8) bg_popup_fep_shadow_pane_cp4

0xdddf,	// (0x0000dddf) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdddf,	// (0x0000dddf) bg_popup_fep_shadow_pane_cp5

0xddf1,	// (0x0000ddf1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xddf1,	// (0x0000ddf1) popup_fep_china_hwr2_fs_control_bar_grid

0xde05,	// (0x0000de05) popup_fep_china_hwr2_fs_control_funtion_grid

0x83e1,	// (0x000083e1) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x83eb,	// (0x000083eb) popup_fep_china_hwr2_fs_candidate_grid

0xde0d,	// (0x0000de0d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xde0d,	// (0x0000de0d) cell_fep_china_hwr2_fs_funtion_grid

0x64b6,	// (0x000064b6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x840d,	// (0x0000840d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x840d,	// (0x0000840d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x841b,	// (0x0000841b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x841b,	// (0x0000841b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb08d,	// (0x0000b08d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb08d,	// (0x0000b08d) cell_fep_china_hwr2_fs_funtion_grid_g

0xde25,	// (0x0000de25) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xde25,	// (0x0000de25) cell_fep_china_hwr2_fs_funtion_grid_t1

0xde3a,	// (0x0000de3a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xde3a,	// (0x0000de3a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf146,	// (0x0000f146) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf146,	// (0x0000f146) cell_fep_china_hwr2_fs_funtion_grid_t

0x8462,	// (0x00008462) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x846a,	// (0x0000846a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8472,	// (0x00008472) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb097,	// (0x0000b097) popup_fep_china_hwr2_fs_control_bar_grid_g

0x847a,	// (0x0000847a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x847a,	// (0x0000847a) cell_fep_china_hwr2_fs_candidate_grid

0x8493,	// (0x00008493) popup_fep_china_hwr2_fs_candidate_grid_g20

0x849b,	// (0x0000849b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x64b6,	// (0x000064b6) cell_fep_china_hwr2_fs_candidate_grid_g1

0x64b6,	// (0x000064b6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xaebe,	// (0x0000aebe) cell_fep_china_hwr2_fs_candidate_grid_g

0x84a3,	// (0x000084a3) cell_fep_china_hwr2_fs_candidate_grid_t1

0x317c,	// (0x0000317c) clock_nsta_pane_cp_24_ParamLimits

0x317c,	// (0x0000317c) clock_nsta_pane_cp_24

0x31fa,	// (0x000031fa) indicator_nsta_pane_cp_24_ParamLimits

0x31fa,	// (0x000031fa) indicator_nsta_pane_cp_24

0x463f,	// (0x0000463f) heading_pane_g1

0x0001,

0xac47,	// (0x0000ac47) heading_pane_g

0x5255,	// (0x00005255) grid_sct_catagory_button_pane

0x5287,	// (0x00005287) scroll_pane_cp5_ParamLimits

0x6029,	// (0x00006029) button_value_adjust_pane_cp5_ParamLimits

0x6029,	// (0x00006029) button_value_adjust_pane_cp5

0x6121,	// (0x00006121) form2_midp_time_pane_ParamLimits

0x84b1,	// (0x000084b1) cell_sct_catagory_button_pane_ParamLimits

0x84b1,	// (0x000084b1) cell_sct_catagory_button_pane

0x647b,	// (0x0000647b) bg_button_pane_cp01_ParamLimits

0x647b,	// (0x0000647b) bg_button_pane_cp01

0x64b6,	// (0x000064b6) cell_sct_catagory_button_pane_g1

0xc741,	// (0x0000c741) popup_tb_extension_window

0xde56,	// (0x0000de56) aid_size_cell_ext_ParamLimits

0xde56,	// (0x0000de56) aid_size_cell_ext

0x0b54,	// (0x00000b54) bg_tb_trans_pane_cp1_ParamLimits

0x0b54,	// (0x00000b54) bg_tb_trans_pane_cp1

0xde7c,	// (0x0000de7c) grid_tb_ext_pane_ParamLimits

0xde7c,	// (0x0000de7c) grid_tb_ext_pane

0xdebc,	// (0x0000debc) cell_tb_ext_pane_ParamLimits

0xdebc,	// (0x0000debc) cell_tb_ext_pane

0xdee4,	// (0x0000dee4) cell_tb_ext_pane_g1_ParamLimits

0xdee4,	// (0x0000dee4) cell_tb_ext_pane_g1

0x8549,	// (0x00008549) cell_tb_ext_pane_t1

0x0819,	// (0x00000819) list_highlight_pane_cp11_ParamLimits

0x0819,	// (0x00000819) list_highlight_pane_cp11

0x0354,	// (0x00000354) popup_uni_indicator_window_ParamLimits

0x0354,	// (0x00000354) popup_uni_indicator_window

0x134f,	// (0x0000134f) bg_popup_sub_pane_cp14

0x8564,	// (0x00008564) list_uniindi_pane

0x8570,	// (0x00008570) uniindi_top_pane

0x0819,	// (0x00000819) bg_uniindi_top_pane

0x858f,	// (0x0000858f) uniindi_top_pane_g1

0x85a5,	// (0x000085a5) uniindi_top_pane_g2

0x0003,

0xb09e,	// (0x0000b09e) uniindi_top_pane_g

0x85cf,	// (0x000085cf) uniindi_top_pane_t1

0x85f9,	// (0x000085f9) list_single_uniindi_pane_ParamLimits

0x85f9,	// (0x000085f9) list_single_uniindi_pane

0x64b6,	// (0x000064b6) bg_uniindi_top_pane_g1

0x860b,	// (0x0000860b) list_single_uniindi_pane_g1

0x861e,	// (0x0000861e) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x8643,	// (0x00008643) bg_sctrl_sk_pane_cp1

0x864c,	// (0x0000864c) bg_sctrl_sk_pane_cp2

0x8655,	// (0x00008655) control_bg_pane_g1

0x865e,	// (0x0000865e) control_bg_pane_g2

0x0001,

0xb0a7,	// (0x0000b0a7) control_bg_pane_g

0x5e04,	// (0x00005e04) cell_indicator_nsta_pane_g1_ParamLimits

0xd3e2,	// (0x0000d3e2) cell_indicator_nsta_pane_g2_ParamLimits

0xf0c3,	// (0x0000f0c3) cell_indicator_nsta_pane_g_ParamLimits

0x61a5,	// (0x000061a5) form2_midp_time_pane_t1_ParamLimits

0x6526,	// (0x00006526) main_idle_act4_pane_ParamLimits

0x6526,	// (0x00006526) main_idle_act4_pane

0xc741,	// (0x0000c741) popup_tb_extension_window_ParamLimits

0xdea3,	// (0x0000dea3) tb_ext_find_pane_ParamLimits

0xdea3,	// (0x0000dea3) tb_ext_find_pane

0x8667,	// (0x00008667) ai_gene_pane_1_cp1

0x26c3,	// (0x000026c3) ai_gene_pane_2_cp1

0x866f,	// (0x0000866f) list_single_idle_plugin_calendar_pane

0x8678,	// (0x00008678) list_single_idle_plugin_notification_pane

0x8681,	// (0x00008681) list_single_idle_plugin_player_pane

0xdf01,	// (0x0000df01) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdf01,	// (0x0000df01) list_single_idle_plugin_shortcut_pane

0xdf29,	// (0x0000df29) main_idle_act4_pane_t1

0xdf3f,	// (0x0000df3f) main_idle_act4_pane_t2

0x0001,

0xf14b,	// (0x0000f14b) main_idle_act4_pane_t

0xdf57,	// (0x0000df57) middle_sk_idle_act4_pane_ParamLimits

0xdf57,	// (0x0000df57) middle_sk_idle_act4_pane

0xdf73,	// (0x0000df73) popup_clock_digital_analogue_window_cp2

0xdf9a,	// (0x0000df9a) shortcut_wheel_idle_act4_pane_ParamLimits

0xdf9a,	// (0x0000df9a) shortcut_wheel_idle_act4_pane

0x64b6,	// (0x000064b6) shortcut_wheel_idle_act4_pane_g1

0x64b6,	// (0x000064b6) shortcut_wheel_idle_act4_pane_g2

0x64b6,	// (0x000064b6) shortcut_wheel_idle_act4_pane_g3

0x64b6,	// (0x000064b6) shortcut_wheel_idle_act4_pane_g4

0x64b6,	// (0x000064b6) shortcut_wheel_idle_act4_pane_g5

0x8714,	// (0x00008714) shortcut_wheel_idle_act4_pane_g6

0x871c,	// (0x0000871c) shortcut_wheel_idle_act4_pane_g7

0x8724,	// (0x00008724) shortcut_wheel_idle_act4_pane_g8

0x872c,	// (0x0000872c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb0b1,	// (0x0000b0b1) shortcut_wheel_idle_act4_pane_g

0x65db,	// (0x000065db) middle_sk_idle_act4_pane_g1_ParamLimits

0x65db,	// (0x000065db) middle_sk_idle_act4_pane_g1

0xe017,	// (0x0000e017) middle_sk_idle_act4_pane_g2_ParamLimits

0xe017,	// (0x0000e017) middle_sk_idle_act4_pane_g2

0x0001,

0xf160,	// (0x0000f160) middle_sk_idle_act4_pane_g_ParamLimits

0xf160,	// (0x0000f160) middle_sk_idle_act4_pane_g

0xe02f,	// (0x0000e02f) middle_sk_idle_act4_pane_t1_ParamLimits

0xe02f,	// (0x0000e02f) middle_sk_idle_act4_pane_t1

0xe05e,	// (0x0000e05e) grid_ai_shortcut_pane_ParamLimits

0xe05e,	// (0x0000e05e) grid_ai_shortcut_pane

0xe07b,	// (0x0000e07b) list_highlight_pane_cp16_ParamLimits

0xe07b,	// (0x0000e07b) list_highlight_pane_cp16

0xe088,	// (0x0000e088) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe088,	// (0x0000e088) list_single_idle_plugin_shortcut_pane_g1

0xe094,	// (0x0000e094) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe094,	// (0x0000e094) list_single_idle_plugin_shortcut_pane_g2

0xe0b0,	// (0x0000e0b0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe0b0,	// (0x0000e0b0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf165,	// (0x0000f165) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf165,	// (0x0000f165) list_single_idle_plugin_shortcut_pane_g

0xe0c5,	// (0x0000e0c5) cell_ai_shortcut_pane_ParamLimits

0xe0c5,	// (0x0000e0c5) cell_ai_shortcut_pane

0xe0db,	// (0x0000e0db) cell_ai_shortcut_pane_g1_ParamLimits

0xe0db,	// (0x0000e0db) cell_ai_shortcut_pane_g1

0x8667,	// (0x00008667) ai_gene_pane_1_cp2

0x8859,	// (0x00008859) ai_gene_pane_2_cp2

0x8861,	// (0x00008861) list_highlight_pane_cp15

0x886a,	// (0x0000886a) list_single_idle_plugin_calendar_pane_g1

0x8861,	// (0x00008861) list_highlight_pane_cp17

0x8872,	// (0x00008872) list_single_idle_plugin_calendar_pane_g1_copy1

0x887a,	// (0x0000887a) list_single_idle_plugin_player_pane_g1

0x5566,	// (0x00005566) list_single_idle_plugin_player_pane_g2

0x0001,

0xb0e0,	// (0x0000b0e0) list_single_idle_plugin_player_pane_g

0x8882,	// (0x00008882) list_single_idle_plugin_player_pane_t1

0x8890,	// (0x00008890) list_single_idle_plugin_player_pane_t2

0x889e,	// (0x0000889e) list_single_idle_plugin_player_pane_t3

0x88ac,	// (0x000088ac) list_single_idle_plugin_player_pane_t4

0x0003,

0xb0e5,	// (0x0000b0e5) list_single_idle_plugin_player_pane_t

0x88ba,	// (0x000088ba) wait_bar_pane_cp15

0x88c2,	// (0x000088c2) grid_ai_notification_pane

0x5566,	// (0x00005566) list_single_idle_plugin_notification_pane_g1

0xe0fd,	// (0x0000e0fd) cell_ai_notification_pane_ParamLimits

0xe0fd,	// (0x0000e0fd) cell_ai_notification_pane

0x88d8,	// (0x000088d8) cell_ai_notification_pane_g1

0x88e0,	// (0x000088e0) cell_ai_notification_pane_t1

0xe10a,	// (0x0000e10a) tb_ext_find_button_pane

0xe112,	// (0x0000e112) tb_ext_find_pane_g1

0xe11a,	// (0x0000e11a) tb_ext_find_pane_t1

0x1cf5,	// (0x00001cf5) tb_ext_find_button_pane_g1

0x890c,	// (0x0000890c) tb_ext_find_button_pane_g2

0x0001,

0xb0ee,	// (0x0000b0ee) tb_ext_find_button_pane_g

0xdf29,	// (0x0000df29) main_idle_act4_pane_t1_ParamLimits

0xdf3f,	// (0x0000df3f) main_idle_act4_pane_t2_ParamLimits

0xf14b,	// (0x0000f14b) main_idle_act4_pane_t_ParamLimits

0xdf73,	// (0x0000df73) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdf8a,	// (0x0000df8a) sat_plugin_idle_act4_pane_ParamLimits

0xdf8a,	// (0x0000df8a) sat_plugin_idle_act4_pane

0xe128,	// (0x0000e128) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe128,	// (0x0000e128) sat_plugin_idle_act4_pane_t1

0xe140,	// (0x0000e140) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe140,	// (0x0000e140) sat_plugin_idle_act4_pane_t2

0xe158,	// (0x0000e158) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe158,	// (0x0000e158) sat_plugin_idle_act4_pane_t3

0xe170,	// (0x0000e170) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe170,	// (0x0000e170) sat_plugin_idle_act4_pane_t4

0x0003,

0xf16c,	// (0x0000f16c) sat_plugin_idle_act4_pane_t_ParamLimits

0xf16c,	// (0x0000f16c) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0819,	// (0x00000819) bg_popup_sub_pane_cp25_ParamLimits

0x0819,	// (0x00000819) bg_popup_sub_pane_cp25

0x8961,	// (0x00008961) popup_battery_window_g1_ParamLimits

0x8961,	// (0x00008961) popup_battery_window_g1

0x896d,	// (0x0000896d) popup_battery_window_t1_ParamLimits

0x896d,	// (0x0000896d) popup_battery_window_t1

0x897f,	// (0x0000897f) popup_battery_window_t2_ParamLimits

0x897f,	// (0x0000897f) popup_battery_window_t2

0x0001,

0xb0fc,	// (0x0000b0fc) popup_battery_window_t_ParamLimits

0xb0fc,	// (0x0000b0fc) popup_battery_window_t

0xbf1c,	// (0x0000bf1c) midp_canvas_pane_ParamLimits

0xbf79,	// (0x0000bf79) midp_keypad_pane_ParamLimits

0xbf79,	// (0x0000bf79) midp_keypad_pane

0x2aed,	// (0x00002aed) main_midp_pane_ParamLimits

0x5e90,	// (0x00005e90) signal_pane_g2_cp_ParamLimits

0xe188,	// (0x0000e188) aid_size_cell_midp_keypad_ParamLimits

0xe188,	// (0x0000e188) aid_size_cell_midp_keypad

0xe1a6,	// (0x0000e1a6) midp_keyp_game_grid_pane_ParamLimits

0xe1a6,	// (0x0000e1a6) midp_keyp_game_grid_pane

0xe1cd,	// (0x0000e1cd) midp_keyp_rocker_pane_ParamLimits

0xe1cd,	// (0x0000e1cd) midp_keyp_rocker_pane

0xe226,	// (0x0000e226) midp_keyp_sk_left_pane_ParamLimits

0xe226,	// (0x0000e226) midp_keyp_sk_left_pane

0xe27a,	// (0x0000e27a) midp_keyp_sk_right_pane_ParamLimits

0xe27a,	// (0x0000e27a) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe2ce,	// (0x0000e2ce) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe2ce,	// (0x0000e2ce) midp_keyp_sk_right_pane_g1

0x64b6,	// (0x000064b6) midp_keyp_rocker_pane_g1

0xe2d7,	// (0x0000e2d7) keyp_game_cell_pane_ParamLimits

0xe2d7,	// (0x0000e2d7) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe2fb,	// (0x0000e2fb) keyp_game_cell_pane_g1

0xb37d,	// (0x0000b37d) popup_fep_vkb2_window_ParamLimits

0xb37d,	// (0x0000b37d) popup_fep_vkb2_window

0xe304,	// (0x0000e304) aid_size_cell_vkb2_ParamLimits

0xe304,	// (0x0000e304) aid_size_cell_vkb2

0xe33a,	// (0x0000e33a) popup_fep_vkb2_window_g1_ParamLimits

0xe33a,	// (0x0000e33a) popup_fep_vkb2_window_g1

0xe381,	// (0x0000e381) vkb2_area_bottom_pane_ParamLimits

0xe381,	// (0x0000e381) vkb2_area_bottom_pane

0xe3d5,	// (0x0000e3d5) vkb2_area_keypad_pane_ParamLimits

0xe3d5,	// (0x0000e3d5) vkb2_area_keypad_pane

0xe41d,	// (0x0000e41d) vkb2_area_top_pane_ParamLimits

0xe41d,	// (0x0000e41d) vkb2_area_top_pane

0xe4a3,	// (0x0000e4a3) vkb2_top_entry_pane_ParamLimits

0xe4a3,	// (0x0000e4a3) vkb2_top_entry_pane

0xe4d0,	// (0x0000e4d0) vkb2_top_grid_left_pane_ParamLimits

0xe4d0,	// (0x0000e4d0) vkb2_top_grid_left_pane

0xe4f0,	// (0x0000e4f0) vkb2_top_grid_right_pane_ParamLimits

0xe4f0,	// (0x0000e4f0) vkb2_top_grid_right_pane

0x8cf8,	// (0x00008cf8) vkb2_cell_keypad_pane_ParamLimits

0x8cf8,	// (0x00008cf8) vkb2_cell_keypad_pane

0xe536,	// (0x0000e536) vkb2_area_bottom_grid_pane_ParamLimits

0xe536,	// (0x0000e536) vkb2_area_bottom_grid_pane

0xe560,	// (0x0000e560) vkb2_area_bottom_pane_g1_ParamLimits

0xe560,	// (0x0000e560) vkb2_area_bottom_pane_g1

0xe586,	// (0x0000e586) vkb2_area_bottom_pane_g2_ParamLimits

0xe586,	// (0x0000e586) vkb2_area_bottom_pane_g2

0xe5b7,	// (0x0000e5b7) vkb2_area_bottom_pane_g3_ParamLimits

0xe5b7,	// (0x0000e5b7) vkb2_area_bottom_pane_g3

0x0002,

0xf175,	// (0x0000f175) vkb2_area_bottom_pane_g_ParamLimits

0xf175,	// (0x0000f175) vkb2_area_bottom_pane_g

0x8ea2,	// (0x00008ea2) vkb2_top_cell_left_pane_ParamLimits

0x8ea2,	// (0x00008ea2) vkb2_top_cell_left_pane

0xe621,	// (0x0000e621) vkb2_top_entry_pane_g1_ParamLimits

0xe621,	// (0x0000e621) vkb2_top_entry_pane_g1

0xe62f,	// (0x0000e62f) vkb2_top_entry_pane_t1_ParamLimits

0xe62f,	// (0x0000e62f) vkb2_top_entry_pane_t1

0x8f0a,	// (0x00008f0a) vkb2_top_entry_pane_t2_ParamLimits

0x8f0a,	// (0x00008f0a) vkb2_top_entry_pane_t2

0x8f3c,	// (0x00008f3c) vkb2_top_entry_pane_t3_ParamLimits

0x8f3c,	// (0x00008f3c) vkb2_top_entry_pane_t3

0x0002,

0xf17c,	// (0x0000f17c) vkb2_top_entry_pane_t_ParamLimits

0xf17c,	// (0x0000f17c) vkb2_top_entry_pane_t

0xe668,	// (0x0000e668) vkb2_top_grid_right_pane_g1_ParamLimits

0xe668,	// (0x0000e668) vkb2_top_grid_right_pane_g1

0x8fa3,	// (0x00008fa3) vkb2_top_grid_right_pane_g2_ParamLimits

0x8fa3,	// (0x00008fa3) vkb2_top_grid_right_pane_g2

0x8fbb,	// (0x00008fbb) vkb2_top_grid_right_pane_g3_ParamLimits

0x8fbb,	// (0x00008fbb) vkb2_top_grid_right_pane_g3

0xe67e,	// (0x0000e67e) vkb2_top_grid_right_pane_g4_ParamLimits

0xe67e,	// (0x0000e67e) vkb2_top_grid_right_pane_g4

0x0003,

0xf183,	// (0x0000f183) vkb2_top_grid_right_pane_g_ParamLimits

0xf183,	// (0x0000f183) vkb2_top_grid_right_pane_g

0x8fe9,	// (0x00008fe9) vkb2_top_cell_left_pane_g1

0x9000,	// (0x00009000) vkb2_cell_keypad_pane_g1_ParamLimits

0x9000,	// (0x00009000) vkb2_cell_keypad_pane_g1

0x900e,	// (0x0000900e) vkb2_cell_keypad_pane_t1_ParamLimits

0x900e,	// (0x0000900e) vkb2_cell_keypad_pane_t1

0x9025,	// (0x00009025) vkb2_cell_bottom_grid_pane_ParamLimits

0x9025,	// (0x00009025) vkb2_cell_bottom_grid_pane

0x905e,	// (0x0000905e) vkb2_cell_bottom_grid_pane_g1

0xdfbb,	// (0x0000dfbb) aid_call2_pane_cp02

0xdfc3,	// (0x0000dfc3) aid_call_pane_cp02

0xdfcb,	// (0x0000dfcb) clock_digital_number_pane_cp10

0xdfd3,	// (0x0000dfd3) clock_digital_number_pane_cp11

0xdfdb,	// (0x0000dfdb) clock_digital_number_pane_cp12

0xdfe3,	// (0x0000dfe3) clock_digital_number_pane_cp13

0xdfeb,	// (0x0000dfeb) clock_digital_separator_pane_cp10

0x1cf5,	// (0x00001cf5) popup_clock_digital_analogue_window_cp2_g1

0x1cf5,	// (0x00001cf5) popup_clock_digital_analogue_window_cp2_g2

0xdff3,	// (0x0000dff3) popup_clock_digital_analogue_window_cp2_g3

0x1cf5,	// (0x00001cf5) popup_clock_digital_analogue_window_cp2_g4

0xdff3,	// (0x0000dff3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf150,	// (0x0000f150) popup_clock_digital_analogue_window_cp2_g

0xdffb,	// (0x0000dffb) popup_clock_digital_analogue_window_cp2_t1

0xe009,	// (0x0000e009) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf15b,	// (0x0000f15b) popup_clock_digital_analogue_window_cp2_t

0x64b6,	// (0x000064b6) clock_digital_number_pane_cp10_g1

0x64b6,	// (0x000064b6) clock_digital_number_pane_cp10_g2

0x0001,

0xaebe,	// (0x0000aebe) clock_digital_number_pane_cp10_g

0x64b6,	// (0x000064b6) clock_digital_separator_pane_cp10_g1

0x64b6,	// (0x000064b6) clock_digital_separator_pane_cp10_g2

0x0001,

0xaebe,	// (0x0000aebe) clock_digital_separator_pane_cp10_g

0x85b1,	// (0x000085b1) uniindi_top_pane_g3

0x85c2,	// (0x000085c2) uniindi_top_pane_g4

0x8d83,	// (0x00008d83) vkb2_row_keypad_pane_ParamLimits

0x8d83,	// (0x00008d83) vkb2_row_keypad_pane

0x907e,	// (0x0000907e) vkb2_cell_t_keypad_pane_ParamLimits

0x907e,	// (0x0000907e) vkb2_cell_t_keypad_pane

0x908e,	// (0x0000908e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x908e,	// (0x0000908e) vkb2_cell_t_keypad_pane_cp08

0x90a1,	// (0x000090a1) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x90a1,	// (0x000090a1) vkb2_cell_t_keypad_pane_cp09

0x90b5,	// (0x000090b5) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x90b5,	// (0x000090b5) vkb2_cell_t_keypad_pane_cp01

0x90c6,	// (0x000090c6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x90c6,	// (0x000090c6) vkb2_cell_t_keypad_pane_cp02

0x90d7,	// (0x000090d7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x90d7,	// (0x000090d7) vkb2_cell_t_keypad_pane_cp03

0x90e8,	// (0x000090e8) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x90e8,	// (0x000090e8) vkb2_cell_t_keypad_pane_cp04

0x90f9,	// (0x000090f9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x90f9,	// (0x000090f9) vkb2_cell_t_keypad_pane_cp05

0x910a,	// (0x0000910a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x910a,	// (0x0000910a) vkb2_cell_t_keypad_pane_cp06

0x911b,	// (0x0000911b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x911b,	// (0x0000911b) vkb2_cell_t_keypad_pane_cp07

0x912c,	// (0x0000912c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x912c,	// (0x0000912c) vkb2_cell_t_keypad_pane_cp10

0x6963,	// (0x00006963) vkb2_cell_t_keypad_pane_g1

0x9141,	// (0x00009141) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe694,	// (0x0000e694) aid_size_cell_graphic2_ParamLimits

0xe694,	// (0x0000e694) aid_size_cell_graphic2

0xe6d2,	// (0x0000e6d2) bg_popup_window_pane_cp21_ParamLimits

0xe6d2,	// (0x0000e6d2) bg_popup_window_pane_cp21

0xe6e0,	// (0x0000e6e0) graphic2_pages_pane_ParamLimits

0xe6e0,	// (0x0000e6e0) graphic2_pages_pane

0xe736,	// (0x0000e736) grid_graphic2_control_pane_ParamLimits

0xe736,	// (0x0000e736) grid_graphic2_control_pane

0xe77e,	// (0x0000e77e) grid_graphic2_pane_ParamLimits

0xe77e,	// (0x0000e77e) grid_graphic2_pane

0xe805,	// (0x0000e805) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7cdf,	// (0x00007cdf) list_ai3_gene_pane_ParamLimits

0xdc91,	// (0x0000dc91) bg_popup_window_pane_cp19_ParamLimits

0x8131,	// (0x00008131) bg_touch_area_indi_pane_ParamLimits

0x8131,	// (0x00008131) bg_touch_area_indi_pane

0x8147,	// (0x00008147) bg_touch_area_indi_pane_cp01_ParamLimits

0x8147,	// (0x00008147) bg_touch_area_indi_pane_cp01

0x815d,	// (0x0000815d) bg_touch_area_indi_pane_cp02_ParamLimits

0x815d,	// (0x0000815d) bg_touch_area_indi_pane_cp02

0x8175,	// (0x00008175) bg_touch_area_indi_pane_cp03_ParamLimits

0x8175,	// (0x00008175) bg_touch_area_indi_pane_cp03

0x818f,	// (0x0000818f) popup_slider_window_g1_ParamLimits

0x81ab,	// (0x000081ab) popup_slider_window_g2_ParamLimits

0x81c7,	// (0x000081c7) popup_slider_window_g3_ParamLimits

0xf134,	// (0x0000f134) popup_slider_window_g_ParamLimits

0x8223,	// (0x00008223) popup_slider_window_t1_ParamLimits

0x8297,	// (0x00008297) small_volume_slider_vertical_pane_ParamLimits

0xe805,	// (0x0000e805) cell_graphic2_pane_ParamLimits

0xe862,	// (0x0000e862) bg_button_pane_cp10_ParamLimits

0xe862,	// (0x0000e862) bg_button_pane_cp10

0xe875,	// (0x0000e875) bg_button_pane_cp11_ParamLimits

0xe875,	// (0x0000e875) bg_button_pane_cp11

0xe888,	// (0x0000e888) graphic2_pages_pane_g1_ParamLimits

0xe888,	// (0x0000e888) graphic2_pages_pane_g1

0xe8a3,	// (0x0000e8a3) graphic2_pages_pane_g2_ParamLimits

0xe8a3,	// (0x0000e8a3) graphic2_pages_pane_g2

0x0001,

0xf191,	// (0x0000f191) graphic2_pages_pane_g_ParamLimits

0xf191,	// (0x0000f191) graphic2_pages_pane_g

0xe8bb,	// (0x0000e8bb) graphic2_pages_pane_t1_ParamLimits

0xe8bb,	// (0x0000e8bb) graphic2_pages_pane_t1

0xe8d3,	// (0x0000e8d3) cell_graphic2_control_pane_ParamLimits

0xe8d3,	// (0x0000e8d3) cell_graphic2_control_pane

0xe905,	// (0x0000e905) cell_graphic2_pane_g1_ParamLimits

0xe905,	// (0x0000e905) cell_graphic2_pane_g1

0x6776,	// (0x00006776) cell_graphic2_pane_g2_ParamLimits

0x6776,	// (0x00006776) cell_graphic2_pane_g2

0xe912,	// (0x0000e912) cell_graphic2_pane_g3_ParamLimits

0xe912,	// (0x0000e912) cell_graphic2_pane_g3

0x6783,	// (0x00006783) cell_graphic2_pane_g4_ParamLimits

0x6783,	// (0x00006783) cell_graphic2_pane_g4

0xe91f,	// (0x0000e91f) cell_graphic2_pane_g5_ParamLimits

0xe91f,	// (0x0000e91f) cell_graphic2_pane_g5

0x0004,

0xf196,	// (0x0000f196) cell_graphic2_pane_g_ParamLimits

0xf196,	// (0x0000f196) cell_graphic2_pane_g

0xe93f,	// (0x0000e93f) cell_graphic2_pane_t1_ParamLimits

0xe93f,	// (0x0000e93f) cell_graphic2_pane_t1

0x4633,	// (0x00004633) grid_highlight_pane_cp11_ParamLimits

0x4633,	// (0x00004633) grid_highlight_pane_cp11

0x0819,	// (0x00000819) bg_button_pane_cp05

0xe974,	// (0x0000e974) cell_graphic2_control_pane_g1

0x64b6,	// (0x000064b6) bg_touch_area_indi_pane_g1

0x940f,	// (0x0000940f) aid_cmod_rocker_key_size

0x9419,	// (0x00009419) aid_cmode_itu_key_size

0x9423,	// (0x00009423) main_cmode_video_pane

0x942d,	// (0x0000942d) main_comp_mode_itu_pane

0x9439,	// (0x00009439) main_comp_mode_rocker_pane

0x9445,	// (0x00009445) cell_cmode_rocker_pane_ParamLimits

0x9445,	// (0x00009445) cell_cmode_rocker_pane

0x9457,	// (0x00009457) cell_cmode_itu_pane_ParamLimits

0x9457,	// (0x00009457) cell_cmode_itu_pane

0x134f,	// (0x0000134f) bg_button_pane_cp06_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane_cp06

0x6963,	// (0x00006963) cell_cmode_rocker_pane_g1_ParamLimits

0x6963,	// (0x00006963) cell_cmode_rocker_pane_g1

0x840d,	// (0x0000840d) cell_cmode_rocker_pane_g2_ParamLimits

0x840d,	// (0x0000840d) cell_cmode_rocker_pane_g2

0x0001,

0xb132,	// (0x0000b132) cell_cmode_rocker_pane_g_ParamLimits

0xb132,	// (0x0000b132) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x946c,	// (0x0000946c) cell_cmode_itu_pane_g1

0x9475,	// (0x00009475) cell_cmode_itu_pane_t1

0x9483,	// (0x00009483) cell_cmode_itu_pane_t2

0x0001,

0xb137,	// (0x0000b137) cell_cmode_itu_pane_t

0x8633,	// (0x00008633) aid_touch_ctrl_left

0x863b,	// (0x0000863b) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xe99a,	// (0x0000e99a) aid_cmod_rocker_key_size_cp

0xe9a4,	// (0x0000e9a4) aid_cmode_itu_key_size_cp

0x94a5,	// (0x000094a5) compa_mode_pane_g1

0x94ad,	// (0x000094ad) compa_mode_pane_g2

0x94b5,	// (0x000094b5) compa_mode_pane_g3

0x0002,

0xb13c,	// (0x0000b13c) compa_mode_pane_g

0xe9ae,	// (0x0000e9ae) main_comp_mode_itu_pane_cp

0xe9b6,	// (0x0000e9b6) main_comp_mode_rocker_pane_cp

0xe9be,	// (0x0000e9be) cell_cmode_itu_pane_cp_ParamLimits

0xe9be,	// (0x0000e9be) cell_cmode_itu_pane_cp

0xe9d3,	// (0x0000e9d3) cell_cmode_rocker_pane_cp_ParamLimits

0xe9d3,	// (0x0000e9d3) cell_cmode_rocker_pane_cp

0x134f,	// (0x0000134f) bg_button_pane_cp06_cp_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane_cp06_cp

0x6963,	// (0x00006963) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6963,	// (0x00006963) cell_cmode_rocker_pane_g1_cp

0x64b6,	// (0x000064b6) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xe9e5,	// (0x0000e9e5) cell_cmode_itu_pane_g1_cp

0xe9ee,	// (0x0000e9ee) cell_cmode_itu_pane_t1_cp

0xe9ee,	// (0x0000e9ee) cell_cmode_itu_pane_t2_cp

0xd1ea,	// (0x0000d1ea) settings_code_pane_cp2

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp3_ParamLimits

0x09e7,	// (0x000009e7) heading_pane_cp3_ParamLimits

0x09f3,	// (0x000009f3) listscroll_popup_graphic_pane_ParamLimits

0x6534,	// (0x00006534) fep_hwr_aid_pane_ParamLimits

0x8313,	// (0x00008313) aid_touch_sctrl_top_ParamLimits

0x8320,	// (0x00008320) sctrl_sk_top_pane_g1_ParamLimits

0x6963,	// (0x00006963) sctrl_sk_top_pane_g2_ParamLimits

0xb072,	// (0x0000b072) sctrl_sk_top_pane_g_ParamLimits

0x832d,	// (0x0000832d) sctrl_sk_top_pane_t1_ParamLimits

0x8313,	// (0x00008313) aid_touch_sctrl_bottom_ParamLimits

0x832d,	// (0x0000832d) sctrl_sk_bottom_pane_t1_ParamLimits

0x857d,	// (0x0000857d) aid_area_touch_clock

0xe465,	// (0x0000e465) aid_vkb2_area_top_pane_cell_ParamLimits

0xe465,	// (0x0000e465) aid_vkb2_area_top_pane_cell

0xe510,	// (0x0000e510) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe510,	// (0x0000e510) aid_vkb2_area_bottom_pane_cell

0x8ec2,	// (0x00008ec2) popup_char_count_window

0x950b,	// (0x0000950b) popup_char_count_window_g1

0x9514,	// (0x00009514) popup_char_count_window_g2

0x951d,	// (0x0000951d) popup_char_count_window_g3

0x0002,

0xb143,	// (0x0000b143) popup_char_count_window_g

0x9526,	// (0x00009526) popup_char_count_window_t1

0x8b28,	// (0x00008b28) popup_fep_char_preview_window_ParamLimits

0x8b28,	// (0x00008b28) popup_fep_char_preview_window

0xe485,	// (0x0000e485) vkb2_top_candi_pane_ParamLimits

0xe485,	// (0x0000e485) vkb2_top_candi_pane

0xe9fc,	// (0x0000e9fc) cell_vkb2_top_candi_pane_ParamLimits

0xe9fc,	// (0x0000e9fc) cell_vkb2_top_candi_pane

0x3e6c,	// (0x00003e6c) bg_popup_fep_char_preview_window_ParamLimits

0x3e6c,	// (0x00003e6c) bg_popup_fep_char_preview_window

0x9581,	// (0x00009581) popup_fep_char_preview_window_t1_ParamLimits

0x9581,	// (0x00009581) popup_fep_char_preview_window_t1

0x95bb,	// (0x000095bb) bg_popup_fep_char_preview_window_g1

0x95c3,	// (0x000095c3) bg_popup_fep_char_preview_window_g2

0x95cb,	// (0x000095cb) bg_popup_fep_char_preview_window_g3

0x95d3,	// (0x000095d3) bg_popup_fep_char_preview_window_g4

0x95db,	// (0x000095db) bg_popup_fep_char_preview_window_g5

0x95e3,	// (0x000095e3) bg_popup_fep_char_preview_window_g6

0x95eb,	// (0x000095eb) bg_popup_fep_char_preview_window_g7

0x95f3,	// (0x000095f3) bg_popup_fep_char_preview_window_g8

0x95fb,	// (0x000095fb) bg_popup_fep_char_preview_window_g9

0x0008,

0xb14a,	// (0x0000b14a) bg_popup_fep_char_preview_window_g

0x6963,	// (0x00006963) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6963,	// (0x00006963) cell_vkb2_top_candi_pane_g1

0x6cd6,	// (0x00006cd6) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6cd6,	// (0x00006cd6) cell_vkb2_top_candi_pane_g2

0x6cf7,	// (0x00006cf7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6cf7,	// (0x00006cf7) cell_vkb2_top_candi_pane_g3

0x9603,	// (0x00009603) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9603,	// (0x00009603) cell_vkb2_top_candi_pane_g4

0x9624,	// (0x00009624) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9624,	// (0x00009624) cell_vkb2_top_candi_pane_g5

0x840d,	// (0x0000840d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x840d,	// (0x0000840d) cell_vkb2_top_candi_pane_g6

0x0005,

0xb15d,	// (0x0000b15d) cell_vkb2_top_candi_pane_g_ParamLimits

0xb15d,	// (0x0000b15d) cell_vkb2_top_candi_pane_g

0x9645,	// (0x00009645) cell_vkb2_top_candi_pane_t1

0x4d75,	// (0x00004d75) aid_size_touch_slider_mark_ParamLimits

0x4d75,	// (0x00004d75) aid_size_touch_slider_mark

0xe71c,	// (0x0000e71c) grid_graphic2_catg_pane_ParamLimits

0xe71c,	// (0x0000e71c) grid_graphic2_catg_pane

0xe7d8,	// (0x0000e7d8) popup_grid_graphic2_window_t1_ParamLimits

0xe7d8,	// (0x0000e7d8) popup_grid_graphic2_window_t1

0xe7ee,	// (0x0000e7ee) popup_grid_graphic2_window_t2_ParamLimits

0xe7ee,	// (0x0000e7ee) popup_grid_graphic2_window_t2

0x0001,

0xf18c,	// (0x0000f18c) popup_grid_graphic2_window_t_ParamLimits

0xf18c,	// (0x0000f18c) popup_grid_graphic2_window_t

0x0819,	// (0x00000819) bg_button_pane_cp05_ParamLimits

0xe974,	// (0x0000e974) cell_graphic2_control_pane_g1_ParamLimits

0xea62,	// (0x0000ea62) cell_graphic2_catg_pane_ParamLimits

0xea62,	// (0x0000ea62) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xea74,	// (0x0000ea74) cell_graphic2_catg_pane_g1

0x8549,	// (0x00008549) cell_tb_ext_pane_t1_ParamLimits

0x8f60,	// (0x00008f60) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8f60,	// (0x00008f60) vkb2_top_cell_right_narrow_pane

0x8f78,	// (0x00008f78) vkb2_top_cell_right_wide_pane_ParamLimits

0x8f78,	// (0x00008f78) vkb2_top_cell_right_wide_pane

0x6526,	// (0x00006526) bg_vkb2_func_pane_ParamLimits

0x6526,	// (0x00006526) bg_vkb2_func_pane

0x8fe9,	// (0x00008fe9) vkb2_top_cell_left_pane_g1_ParamLimits

0x6526,	// (0x00006526) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6526,	// (0x00006526) bg_vkb2_fuc_pane_cp03

0x905e,	// (0x0000905e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x361f,	// (0x0000361f) bg_vkb2_func_pane_g1

0x3627,	// (0x00003627) bg_vkb2_func_pane_g2

0x3637,	// (0x00003637) bg_vkb2_func_pane_g3

0x362f,	// (0x0000362f) bg_vkb2_func_pane_g4

0x363f,	// (0x0000363f) bg_vkb2_func_pane_g5

0x3647,	// (0x00003647) bg_vkb2_func_pane_g6

0x364f,	// (0x0000364f) bg_vkb2_func_pane_g7

0x3657,	// (0x00003657) bg_vkb2_func_pane_g8

0x3617,	// (0x00003617) bg_vkb2_func_pane_g9

0x0008,

0xb16a,	// (0x0000b16a) bg_vkb2_func_pane_g

0x6526,	// (0x00006526) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6526,	// (0x00006526) bg_vkb2_fuc_pane_cp01

0x8fe9,	// (0x00008fe9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8fe9,	// (0x00008fe9) vkb2_top_cell_right_wide_pane_g1

0x6526,	// (0x00006526) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6526,	// (0x00006526) bg_vkb2_fuc_pane_cp02

0x905e,	// (0x0000905e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x905e,	// (0x0000905e) vkb2_top_cell_right_narrow_pane_g1

0xdbcb,	// (0x0000dbcb) aid_touch_area_decrease_ParamLimits

0xdbcb,	// (0x0000dbcb) aid_touch_area_decrease

0xdc05,	// (0x0000dc05) aid_touch_area_increase_ParamLimits

0xdc05,	// (0x0000dc05) aid_touch_area_increase

0xdc2d,	// (0x0000dc2d) aid_touch_area_mute_ParamLimits

0xdc2d,	// (0x0000dc2d) aid_touch_area_mute

0xdc5d,	// (0x0000dc5d) aid_touch_area_slider_ParamLimits

0xdc5d,	// (0x0000dc5d) aid_touch_area_slider

0xdc9d,	// (0x0000dc9d) popup_slider_window_g4_ParamLimits

0xdc9d,	// (0x0000dc9d) popup_slider_window_g4

0xdcc5,	// (0x0000dcc5) popup_slider_window_g5_ParamLimits

0xdcc5,	// (0x0000dcc5) popup_slider_window_g5

0xdcf9,	// (0x0000dcf9) popup_slider_window_g6_ParamLimits

0xdcf9,	// (0x0000dcf9) popup_slider_window_g6

0x8251,	// (0x00008251) popup_slider_window_t2_ParamLimits

0x8251,	// (0x00008251) popup_slider_window_t2

0x0001,

0xb066,	// (0x0000b066) popup_slider_window_t_ParamLimits

0xb066,	// (0x0000b066) popup_slider_window_t

0xdd15,	// (0x0000dd15) slider_pane_ParamLimits

0xdd15,	// (0x0000dd15) slider_pane

0x967f,	// (0x0000967f) slider_pane_g1_ParamLimits

0x967f,	// (0x0000967f) slider_pane_g1

0x9693,	// (0x00009693) slider_pane_g2_ParamLimits

0x9693,	// (0x00009693) slider_pane_g2

0x96a9,	// (0x000096a9) slider_pane_g3_ParamLimits

0x96a9,	// (0x000096a9) slider_pane_g3

0x0003,

0xb17d,	// (0x0000b17d) slider_pane_g_ParamLimits

0xb17d,	// (0x0000b17d) slider_pane_g

0xc789,	// (0x0000c789) popup_tb_float_extension_window_ParamLimits

0xc789,	// (0x0000c789) popup_tb_float_extension_window

0x96d5,	// (0x000096d5) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x96e1,	// (0x000096e1) grid_tb_float_ext_pane

0x96eb,	// (0x000096eb) cell_tb_float_ext_pane_ParamLimits

0x96eb,	// (0x000096eb) cell_tb_float_ext_pane

0x9705,	// (0x00009705) cell_tb_float_ext_pane_g1

0x970e,	// (0x0000970e) grid_highlight_pane_cp12

0xd5c2,	// (0x0000d5c2) cell_last_hwr_side_pane_ParamLimits

0xd5c2,	// (0x0000d5c2) cell_last_hwr_side_pane

0x64b6,	// (0x000064b6) cell_last_hwr_side_pane_g1

0x9717,	// (0x00009717) cell_last_hwr_side_pane_g2

0x0001,

0xb186,	// (0x0000b186) cell_last_hwr_side_pane_g

0xe5ec,	// (0x0000e5ec) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe5ec,	// (0x0000e5ec) vkb2_area_bottom_space_btn_pane

0x6963,	// (0x00006963) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9141,	// (0x00009141) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9645,	// (0x00009645) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9720,	// (0x00009720) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9720,	// (0x00009720) vkb2_area_bottom_space_btn_pane_g1

0x975a,	// (0x0000975a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x975a,	// (0x0000975a) vkb2_area_bottom_space_btn_pane_g2

0x9790,	// (0x00009790) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9790,	// (0x00009790) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb18b,	// (0x0000b18b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb18b,	// (0x0000b18b) vkb2_area_bottom_space_btn_pane_g

0x65e9,	// (0x000065e9) cel_fep_hwr_func_pane_ParamLimits

0x65e9,	// (0x000065e9) cel_fep_hwr_func_pane

0xd597,	// (0x0000d597) cell_hwr_side_button_pane_ParamLimits

0xd597,	// (0x0000d597) cell_hwr_side_button_pane

0x857d,	// (0x0000857d) aid_area_touch_clock_ParamLimits

0x0819,	// (0x00000819) bg_uniindi_top_pane_ParamLimits

0x858f,	// (0x0000858f) uniindi_top_pane_g1_ParamLimits

0x85a5,	// (0x000085a5) uniindi_top_pane_g2_ParamLimits

0x85b1,	// (0x000085b1) uniindi_top_pane_g3_ParamLimits

0x85c2,	// (0x000085c2) uniindi_top_pane_g4_ParamLimits

0xb09e,	// (0x0000b09e) uniindi_top_pane_g_ParamLimits

0x85cf,	// (0x000085cf) uniindi_top_pane_t1_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp01_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp01

0x97da,	// (0x000097da) cel_fep_hwr_func_pane_g1_ParamLimits

0x97da,	// (0x000097da) cel_fep_hwr_func_pane_g1

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp02_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp02

0x97da,	// (0x000097da) cell_hwr_side_button_pane_g1_ParamLimits

0x97da,	// (0x000097da) cell_hwr_side_button_pane_g1

0x3400,	// (0x00003400) status_pane_g4_ParamLimits

0x3400,	// (0x00003400) status_pane_g4

0x3418,	// (0x00003418) status_pane_t1

0x61b8,	// (0x000061b8) form2_midp_gauge_slider_cont_pane

0x61c0,	// (0x000061c0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd4d6,	// (0x0000d4d6) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd4e8,	// (0x0000d4e8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf0dd,	// (0x0000f0dd) form2_midp_gauge_slider_pane_t_ParamLimits

0x61f6,	// (0x000061f6) form2_midp_slider_pane_ParamLimits

0x8ae8,	// (0x00008ae8) aid_size_cell_func_vkb2_ParamLimits

0x8ae8,	// (0x00008ae8) aid_size_cell_func_vkb2

0x96c1,	// (0x000096c1) slider_pane_g4_ParamLimits

0x96c1,	// (0x000096c1) slider_pane_g4

0xea7d,	// (0x0000ea7d) form2_midp_gauge_slider_pane_t2_cp01

0xea8b,	// (0x0000ea8b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xea8b,	// (0x0000ea8b) form2_midp_gauge_slider_pane_t3_cp01

0x9813,	// (0x00009813) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9847,	// (0x00009847) navi_smil_pane_g1

0x984f,	// (0x0000984f) navi_smil_pane_t1

0x981c,	// (0x0000981c) form2_midp_slider_pane_g1

0x9825,	// (0x00009825) form2_midp_slider_pane_g2

0x982d,	// (0x0000982d) form2_midp_slider_pane_g3

0x981c,	// (0x0000981c) form2_midp_slider_pane_g4

0xeaa8,	// (0x0000eaa8) form2_midp_slider_pane_g5

0x0004,

0xf1a6,	// (0x0000f1a6) form2_midp_slider_pane_g

0x97ca,	// (0x000097ca) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x97ca,	// (0x000097ca) vkb2_area_bottom_space_btn_pane_g4

0xc965,	// (0x0000c965) lc0_navi_pane_ParamLimits

0xc965,	// (0x0000c965) lc0_navi_pane

0xc9cf,	// (0x0000c9cf) lc0_stat_indi_pane_ParamLimits

0xc9cf,	// (0x0000c9cf) lc0_stat_indi_pane

0xc9e4,	// (0x0000c9e4) ls0_title_pane_ParamLimits

0xc9e4,	// (0x0000c9e4) ls0_title_pane

0x134f,	// (0x0000134f) bg_popup_sub_pane_cp14_ParamLimits

0x8564,	// (0x00008564) list_uniindi_pane_ParamLimits

0x8570,	// (0x00008570) uniindi_top_pane_ParamLimits

0x860b,	// (0x0000860b) list_single_uniindi_pane_g1_ParamLimits

0x861e,	// (0x0000861e) list_single_uniindi_pane_t1_ParamLimits

0xeab1,	// (0x0000eab1) lc0_stat_clock_pane_ParamLimits

0xeab1,	// (0x0000eab1) lc0_stat_clock_pane

0xeabe,	// (0x0000eabe) lc0_stat_indi_pane_g1_ParamLimits

0xeabe,	// (0x0000eabe) lc0_stat_indi_pane_g1

0xeacb,	// (0x0000eacb) lc0_stat_indi_pane_g2_ParamLimits

0xeacb,	// (0x0000eacb) lc0_stat_indi_pane_g2

0x0001,

0xf1b1,	// (0x0000f1b1) lc0_stat_indi_pane_g_ParamLimits

0xf1b1,	// (0x0000f1b1) lc0_stat_indi_pane_g

0xead8,	// (0x0000ead8) lc0_uni_indicator_pane_ParamLimits

0xead8,	// (0x0000ead8) lc0_uni_indicator_pane

0xeae5,	// (0x0000eae5) ls0_title_pane_g1_ParamLimits

0xeae5,	// (0x0000eae5) ls0_title_pane_g1

0xeaf9,	// (0x0000eaf9) ls0_title_pane_t1_ParamLimits

0xeaf9,	// (0x0000eaf9) ls0_title_pane_t1

0xeb27,	// (0x0000eb27) lc0_uni_indicator_pane_g1_ParamLimits

0xeb27,	// (0x0000eb27) lc0_uni_indicator_pane_g1

0x98f1,	// (0x000098f1) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x98ff,	// (0x000098ff) ai5_sk_pane_ParamLimits

0x98ff,	// (0x000098ff) ai5_sk_pane

0xeb56,	// (0x0000eb56) cell_ai5_widget_pane_ParamLimits

0xeb56,	// (0x0000eb56) cell_ai5_widget_pane

0x999a,	// (0x0000999a) aid_size_cell_widget_grid

0x99ae,	// (0x000099ae) bg_ai5_widget_pane_ParamLimits

0x99ae,	// (0x000099ae) bg_ai5_widget_pane

0xebdf,	// (0x0000ebdf) cell_ai5_widget_pane_g2

0xebef,	// (0x0000ebef) cell_ai5_widget_pane_g3

0xec0e,	// (0x0000ec0e) cell_ai5_widget_pane_g4

0xec1a,	// (0x0000ec1a) cell_ai5_widget_pane_g5

0xec26,	// (0x0000ec26) cell_ai5_widget_pane_g6

0xec32,	// (0x0000ec32) cell_ai5_widget_pane_g7

0xec7a,	// (0x0000ec7a) cell_ai5_widget_pane_t1_ParamLimits

0xec7a,	// (0x0000ec7a) cell_ai5_widget_pane_t1

0xec97,	// (0x0000ec97) cell_ai5_widget_pane_t2_ParamLimits

0xec97,	// (0x0000ec97) cell_ai5_widget_pane_t2

0xecaf,	// (0x0000ecaf) cell_ai5_widget_pane_t3_ParamLimits

0xecaf,	// (0x0000ecaf) cell_ai5_widget_pane_t3

0xecc7,	// (0x0000ecc7) cell_ai5_widget_pane_t4_ParamLimits

0xecc7,	// (0x0000ecc7) cell_ai5_widget_pane_t4

0xece1,	// (0x0000ece1) cell_ai5_widget_pane_t5_ParamLimits

0xece1,	// (0x0000ece1) cell_ai5_widget_pane_t5

0x9af7,	// (0x00009af7) cell_ai5_widget_pane_t6_ParamLimits

0x9af7,	// (0x00009af7) cell_ai5_widget_pane_t6

0x9b09,	// (0x00009b09) cell_ai5_widget_pane_t7_ParamLimits

0x9b09,	// (0x00009b09) cell_ai5_widget_pane_t7

0xed00,	// (0x0000ed00) cell_ai5_widget_pane_t8_ParamLimits

0xed00,	// (0x0000ed00) cell_ai5_widget_pane_t8

0x0009,

0xf1cb,	// (0x0000f1cb) cell_ai5_widget_pane_t_ParamLimits

0xf1cb,	// (0x0000f1cb) cell_ai5_widget_pane_t

0xed4c,	// (0x0000ed4c) grid_ai5_widget_pane

0x134f,	// (0x0000134f) highlight_cell_ai5_widget_pane_ParamLimits

0x134f,	// (0x0000134f) highlight_cell_ai5_widget_pane

0xed62,	// (0x0000ed62) ai5_sk_left_pane

0xed6c,	// (0x0000ed6c) ai5_sk_middle_pane

0xed76,	// (0x0000ed76) ai5_sk_right_pane

0x9ba2,	// (0x00009ba2) bg_ai5_widget_pane_g1_ParamLimits

0x9ba2,	// (0x00009ba2) bg_ai5_widget_pane_g1

0x9bae,	// (0x00009bae) bg_ai5_widget_pane_g2_ParamLimits

0x9bae,	// (0x00009bae) bg_ai5_widget_pane_g2

0x9bba,	// (0x00009bba) bg_ai5_widget_pane_g3_ParamLimits

0x9bba,	// (0x00009bba) bg_ai5_widget_pane_g3

0x9bc6,	// (0x00009bc6) bg_ai5_widget_pane_g4_ParamLimits

0x9bc6,	// (0x00009bc6) bg_ai5_widget_pane_g4

0x9bd2,	// (0x00009bd2) bg_ai5_widget_pane_g5_ParamLimits

0x9bd2,	// (0x00009bd2) bg_ai5_widget_pane_g5

0x9bde,	// (0x00009bde) bg_ai5_widget_pane_g6_ParamLimits

0x9bde,	// (0x00009bde) bg_ai5_widget_pane_g6

0x9bea,	// (0x00009bea) bg_ai5_widget_pane_g7_ParamLimits

0x9bea,	// (0x00009bea) bg_ai5_widget_pane_g7

0x9bf6,	// (0x00009bf6) bg_ai5_widget_pane_g8_ParamLimits

0x9bf6,	// (0x00009bf6) bg_ai5_widget_pane_g8

0x9c02,	// (0x00009c02) bg_ai5_widget_pane_g9_ParamLimits

0x9c02,	// (0x00009c02) bg_ai5_widget_pane_g9

0x0008,

0xb1ce,	// (0x0000b1ce) bg_ai5_widget_pane_g_ParamLimits

0xb1ce,	// (0x0000b1ce) bg_ai5_widget_pane_g

0x9c35,	// (0x00009c35) cell_shortcut_ai5_widget_pane_ParamLimits

0x9c35,	// (0x00009c35) cell_shortcut_ai5_widget_pane

0x0659,	// (0x00000659) bg_cell_shortcut_ai5_widget_pane

0x9c46,	// (0x00009c46) cell_grid_ai5_widget_pane_g1

0x9c4f,	// (0x00009c4f) highlight_cell_shortcut_ai5_widget_pane

0x3627,	// (0x00003627) ai5_sk_left_pane_g1

0x9c57,	// (0x00009c57) ai5_sk_left_pane_g2

0x9c5f,	// (0x00009c5f) ai5_sk_left_pane_g3

0x9c67,	// (0x00009c67) ai5_sk_left_pane_g4

0x0003,

0xb1e1,	// (0x0000b1e1) ai5_sk_left_pane_g

0x9c6f,	// (0x00009c6f) ai5_sk_left_pane_t1

0x361f,	// (0x0000361f) ai5_sk_right_pane_g1

0x9c7d,	// (0x00009c7d) ai5_sk_right_pane_g2

0x9c85,	// (0x00009c85) ai5_sk_right_pane_g3

0x9c8d,	// (0x00009c8d) ai5_sk_right_pane_g4

0x0003,

0xb1ea,	// (0x0000b1ea) ai5_sk_right_pane_g

0x9c95,	// (0x00009c95) ai5_sk_right_pane_t1

0x361f,	// (0x0000361f) ai5_sk_middle_pane_g1

0x3627,	// (0x00003627) ai5_sk_middle_pane_g2

0x363f,	// (0x0000363f) ai5_sk_middle_pane_g3

0x9c85,	// (0x00009c85) ai5_sk_middle_pane_g4

0x9c5f,	// (0x00009c5f) ai5_sk_middle_pane_g5

0x9ca3,	// (0x00009ca3) ai5_sk_middle_pane_g6

0xed80,	// (0x0000ed80) ai5_sk_middle_pane_g7

0x0006,

0xf1e0,	// (0x0000f1e0) ai5_sk_middle_pane_g

0xc851,	// (0x0000c851) aid_touch_area_size_lc0_ParamLimits

0xc851,	// (0x0000c851) aid_touch_area_size_lc0

0x6d18,	// (0x00006d18) cell_hwr_candidate_pane_t1_ParamLimits

0x30de,	// (0x000030de) aid_touch_navi_pane

0xcad6,	// (0x0000cad6) status_dt_navi_pane_ParamLimits

0xcad6,	// (0x0000cad6) status_dt_navi_pane

0xcaee,	// (0x0000caee) status_dt_sta_pane_ParamLimits

0xcaee,	// (0x0000caee) status_dt_sta_pane

0xed88,	// (0x0000ed88) dt_sta_controll_pane

0xed95,	// (0x0000ed95) dt_sta_indi_pane

0xeda2,	// (0x0000eda2) dt_sta_title_pane

0x0819,	// (0x00000819) bg_dt_sta_indi_pane_ParamLimits

0x0819,	// (0x00000819) bg_dt_sta_indi_pane

0xedb4,	// (0x0000edb4) dt_sta_battery_pane

0xedbc,	// (0x0000edbc) dt_sta_indi_pane_g1

0x9cf5,	// (0x00009cf5) dt_sta_indi_pane_g2

0x9cfe,	// (0x00009cfe) dt_sta_indi_pane_g3

0x0002,

0xf1ef,	// (0x0000f1ef) dt_sta_indi_pane_g

0x9d07,	// (0x00009d07) dt_sta_signal_pane

0x134f,	// (0x0000134f) bg_dt_sta_title_pane_ParamLimits

0x134f,	// (0x0000134f) bg_dt_sta_title_pane

0x47a4,	// (0x000047a4) dt_sta_title_pane_g1

0xedc5,	// (0x0000edc5) dt_sta_title_pane_t1_ParamLimits

0xedc5,	// (0x0000edc5) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xedda,	// (0x0000edda) dt_sta_controll_pane_g1

0x9d2e,	// (0x00009d2e) bg_dt_sta_title_pane_g1

0x9d37,	// (0x00009d37) bg_dt_sta_title_pane_g2

0x9d40,	// (0x00009d40) bg_dt_sta_title_pane_g3

0x0002,

0xb209,	// (0x0000b209) bg_dt_sta_title_pane_g

0x64b6,	// (0x000064b6) bg_dt_sta_indi_pane_g1

0x9d49,	// (0x00009d49) dt_sta_signal_pane_g1

0x9d51,	// (0x00009d51) dt_sta_signal_pane_g2

0x0001,

0xb210,	// (0x0000b210) dt_sta_signal_pane_g

0x9d59,	// (0x00009d59) dt_sta_battery_pane_g1

0x9d62,	// (0x00009d62) dt_sta_battery_pane_t1

0x64b6,	// (0x000064b6) bg_dt_sta_control_pane_g1

0x1eaf,	// (0x00001eaf) fep_china_uni_eep_pane

0x1eb7,	// (0x00001eb7) fep_china_uni_entry_pane_ParamLimits

0x1ec7,	// (0x00001ec7) popup_fep_china_uni_window_g1_ParamLimits

0x1ed7,	// (0x00001ed7) popup_fep_china_uni_window_g2_ParamLimits

0x1ed7,	// (0x00001ed7) popup_fep_china_uni_window_g2

0x0001,

0xaaa7,	// (0x0000aaa7) popup_fep_china_uni_window_g_ParamLimits

0xaaa7,	// (0x0000aaa7) popup_fep_china_uni_window_g

0x9d71,	// (0x00009d71) fep_china_uni_eep_pane_g1

0x9d79,	// (0x00009d79) fep_china_uni_eep_pane_t1

0x983e,	// (0x0000983e) aid_touch_area_size_smil_player

0x322e,	// (0x0000322e) lc0_clock_pane

0x340c,	// (0x0000340c) status_pane_g5_ParamLimits

0x340c,	// (0x0000340c) status_pane_g5

0xc31d,	// (0x0000c31d) popup_keymap_window

0x33cc,	// (0x000033cc) status_icon_pane

0xebef,	// (0x0000ebef) cell_ai5_widget_pane_g3_ParamLimits

0xec0e,	// (0x0000ec0e) cell_ai5_widget_pane_g4_ParamLimits

0xec1a,	// (0x0000ec1a) cell_ai5_widget_pane_g5_ParamLimits

0xec3e,	// (0x0000ec3e) cell_ai5_widget_pane_g8_ParamLimits

0xec3e,	// (0x0000ec3e) cell_ai5_widget_pane_g8

0xec52,	// (0x0000ec52) cell_ai5_widget_pane_g9_ParamLimits

0xec52,	// (0x0000ec52) cell_ai5_widget_pane_g9

0xec66,	// (0x0000ec66) cell_ai5_widget_pane_g10_ParamLimits

0xec66,	// (0x0000ec66) cell_ai5_widget_pane_g10

0x9d88,	// (0x00009d88) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9d90,	// (0x00009d90) popup_keymap_window_t1

0xc037,	// (0x0000c037) control_pane_g6_ParamLimits

0xc037,	// (0x0000c037) control_pane_g6

0xc044,	// (0x0000c044) control_pane_g7_ParamLimits

0xc044,	// (0x0000c044) control_pane_g7

0xc051,	// (0x0000c051) control_pane_g8_ParamLimits

0xc051,	// (0x0000c051) control_pane_g8

0xed88,	// (0x0000ed88) dt_sta_controll_pane_ParamLimits

0xed95,	// (0x0000ed95) dt_sta_indi_pane_ParamLimits

0xeda2,	// (0x0000eda2) dt_sta_title_pane_ParamLimits

0x0d1b,	// (0x00000d1b) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb3c3,	// (0x0000b3c3) popup_sk_window

0x3e6c,	// (0x00003e6c) bg_popup_sub_pane_cp28_ParamLimits

0x3e6c,	// (0x00003e6c) bg_popup_sub_pane_cp28

0x9d9e,	// (0x00009d9e) popup_discreet_window_g1_ParamLimits

0x9d9e,	// (0x00009d9e) popup_discreet_window_g1

0x9dbe,	// (0x00009dbe) popup_discreet_window_t1_ParamLimits

0x9dbe,	// (0x00009dbe) popup_discreet_window_t1

0x9ddc,	// (0x00009ddc) popup_discreet_window_t2_ParamLimits

0x9ddc,	// (0x00009ddc) popup_discreet_window_t2

0x0002,

0xb215,	// (0x0000b215) popup_discreet_window_t_ParamLimits

0xb215,	// (0x0000b215) popup_discreet_window_t

0x9e2e,	// (0x00009e2e) popup_sk_window_g1

0x9e38,	// (0x00009e38) popup_sk_window_g2

0x0001,

0xb21c,	// (0x0000b21c) popup_sk_window_g

0x9e42,	// (0x00009e42) popup_sk_window_t1

0x9e50,	// (0x00009e50) popup_sk_window_t1_copy1

0xebdf,	// (0x0000ebdf) cell_ai5_widget_pane_g2_ParamLimits

0xed12,	// (0x0000ed12) cell_ai5_widget_pane_t9_ParamLimits

0xed12,	// (0x0000ed12) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xede3,	// (0x0000ede3) aid_fshwr2_btn_pane

0xedeb,	// (0x0000edeb) aid_fshwr2_syb_pane

0xedf3,	// (0x0000edf3) aid_fshwr2_txt_pane

0xedfb,	// (0x0000edfb) fshwr2_func_candi_pane

0xee05,	// (0x0000ee05) fshwr2_hwr_syb_pane

0xee13,	// (0x0000ee13) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xee1d,	// (0x0000ee1d) fshwr2_icf_pane_t1_ParamLimits

0xee1d,	// (0x0000ee1d) fshwr2_icf_pane_t1

0x64b6,	// (0x000064b6) fshwr2_func_candi_pane_g1

0x9ec3,	// (0x00009ec3) fshwr2_func_candi_row_pane_ParamLimits

0x9ec3,	// (0x00009ec3) fshwr2_func_candi_row_pane

0xee37,	// (0x0000ee37) cell_fshwr2_syb_pane_ParamLimits

0xee37,	// (0x0000ee37) cell_fshwr2_syb_pane

0x6963,	// (0x00006963) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6963,	// (0x00006963) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0x9ef0,	// (0x00009ef0) fshwr2_func_candi_cell_pane_ParamLimits

0x9ef0,	// (0x00009ef0) fshwr2_func_candi_cell_pane

0x9f21,	// (0x00009f21) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f21,	// (0x00009f21) fshwr2_func_candi_cell_bg_pane

0x9f3b,	// (0x00009f3b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9f3b,	// (0x00009f3b) fshwr2_func_candi_cell_pane_g1

0x9f5b,	// (0x00009f5b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f5b,	// (0x00009f5b) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x257a,	// (0x0000257a) cell_fshwr2_syb_bg_pane

0xee51,	// (0x0000ee51) cell_fshwr2_syb_bg_pane_g1

0x9f76,	// (0x00009f76) cell_fshwr2_syb_bg_pane_t1

0x134f,	// (0x0000134f) main_tmo_pane

0xd009,	// (0x0000d009) uni_indicator_pane_g1_ParamLimits

0xd01e,	// (0x0000d01e) uni_indicator_pane_g2_ParamLimits

0xd033,	// (0x0000d033) uni_indicator_pane_g3_ParamLimits

0x4b28,	// (0x00004b28) uni_indicator_pane_g4_ParamLimits

0x4b28,	// (0x00004b28) uni_indicator_pane_g4

0x4b3c,	// (0x00004b3c) uni_indicator_pane_g5_ParamLimits

0x4b3c,	// (0x00004b3c) uni_indicator_pane_g5

0x4b50,	// (0x00004b50) uni_indicator_pane_g6_ParamLimits

0x4b50,	// (0x00004b50) uni_indicator_pane_g6

0xf089,	// (0x0000f089) uni_indicator_pane_g_ParamLimits

0xdbad,	// (0x0000dbad) popup_tmo_note_window_ParamLimits

0xdbad,	// (0x0000dbad) popup_tmo_note_window

0x0024,	// (0x00000024) fshwr2_bg_pane

0x9f4c,	// (0x00009f4c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f4c,	// (0x00009f4c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xb221,	// (0x0000b221) fshwr2_func_candi_cell_pane_g_ParamLimits

0xb221,	// (0x0000b221) fshwr2_func_candi_cell_pane_g

0x64b6,	// (0x000064b6) bg_popup_window_pane_cp01

0x9f85,	// (0x00009f85) bg_popup_window_pane_g1_cp01

0x9f8e,	// (0x00009f8e) bg_popup_window_pane_cp22_ParamLimits

0x9f8e,	// (0x00009f8e) bg_popup_window_pane_cp22

0x9f9c,	// (0x00009f9c) listscroll_tmo_link_pane_ParamLimits

0x9f9c,	// (0x00009f9c) listscroll_tmo_link_pane

0x9fdc,	// (0x00009fdc) popup_tmo_note_window_g1_ParamLimits

0x9fdc,	// (0x00009fdc) popup_tmo_note_window_g1

0x9fe9,	// (0x00009fe9) tmo_note_info_pane_ParamLimits

0x9fe9,	// (0x00009fe9) tmo_note_info_pane

0xee59,	// (0x0000ee59) list_tmo_note_info_pane_g1_ParamLimits

0xee59,	// (0x0000ee59) list_tmo_note_info_pane_g1

0xa01a,	// (0x0000a01a) list_tmo_note_info_pane_g2_ParamLimits

0xa01a,	// (0x0000a01a) list_tmo_note_info_pane_g2

0x0001,

0xf1f6,	// (0x0000f1f6) list_tmo_note_info_pane_g_ParamLimits

0xf1f6,	// (0x0000f1f6) list_tmo_note_info_pane_g

0xa036,	// (0x0000a036) list_tmo_note_info_text_pane_ParamLimits

0xa036,	// (0x0000a036) list_tmo_note_info_text_pane

0xa0bb,	// (0x0000a0bb) list_tmo_link_pane

0xa0c8,	// (0x0000a0c8) scroll_pane_cp20

0xa0d5,	// (0x0000a0d5) list_single_tmo_link_pane_ParamLimits

0xa0d5,	// (0x0000a0d5) list_single_tmo_link_pane

0xa0e5,	// (0x0000a0e5) list_single_tmo_link_pane_t1

0xa0f3,	// (0x0000a0f3) list_tmo_note_info_text_pane_t1_ParamLimits

0xa0f3,	// (0x0000a0f3) list_tmo_note_info_text_pane_t1

0xbc6b,	// (0x0000bc6b) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbc6b,	// (0x0000bc6b) aid_size_touch_scroll_bar_cp01

0xbb86,	// (0x0000bb86) aid_size_touch_slider_marker

0xb3b3,	// (0x0000b3b3) popup_settings_window_ParamLimits

0xb3b3,	// (0x0000b3b3) popup_settings_window

0x2b15,	// (0x00002b15) popup_candi_list_indi_window

0x30de,	// (0x000030de) aid_touch_navi_pane_ParamLimits

0x82e7,	// (0x000082e7) rs_clock_indi_pane

0x82f0,	// (0x000082f0) sctrl_sk_bottom_pane_ParamLimits

0x8301,	// (0x00008301) sctrl_sk_top_pane_ParamLimits

0x8b42,	// (0x00008b42) popup_fep_tooltip_window

0x999a,	// (0x0000999a) aid_size_cell_widget_grid_ParamLimits

0xebd3,	// (0x0000ebd3) cell_ai5_widget_pane_g1_ParamLimits

0xebd3,	// (0x0000ebd3) cell_ai5_widget_pane_g1

0xec26,	// (0x0000ec26) cell_ai5_widget_pane_g6_ParamLimits

0xec32,	// (0x0000ec32) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xf1b6,	// (0x0000f1b6) cell_ai5_widget_pane_g_ParamLimits

0xf1b6,	// (0x0000f1b6) cell_ai5_widget_pane_g

0xed36,	// (0x0000ed36) cell_ai5_widget_pane_t10_ParamLimits

0xed36,	// (0x0000ed36) cell_ai5_widget_pane_t10

0xed4c,	// (0x0000ed4c) grid_ai5_widget_pane_ParamLimits

0x9c0e,	// (0x00009c0e) cell_contacts_ai5_widget_pane_ParamLimits

0x9c0e,	// (0x00009c0e) cell_contacts_ai5_widget_pane

0x9df1,	// (0x00009df1) popup_discreet_window_t3_ParamLimits

0x9df1,	// (0x00009df1) popup_discreet_window_t3

0x9e98,	// (0x00009e98) popup_fshwr2_char_preview_window_ParamLimits

0x9e98,	// (0x00009e98) popup_fshwr2_char_preview_window

0xee70,	// (0x0000ee70) tmo_note_info_pane_t1

0xee85,	// (0x0000ee85) tmo_note_info_pane_t2

0xee9e,	// (0x0000ee9e) tmo_note_info_pane_t3

0xa097,	// (0x0000a097) tmo_note_info_pane_t4

0xa0a9,	// (0x0000a0a9) tmo_note_info_pane_t5

0x0004,

0xf1fb,	// (0x0000f1fb) tmo_note_info_pane_t

0xa0bb,	// (0x0000a0bb) list_tmo_link_pane_ParamLimits

0xa0c8,	// (0x0000a0c8) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa10c,	// (0x0000a10c) popup_fshwr2_char_preview_window_t1

0xa11a,	// (0x0000a11a) popup_candi_list_indi_window_g1

0xa123,	// (0x0000a123) bg_cell_contacts_ai5_widget_pane

0xa12f,	// (0x0000a12f) cell_contacts_ai5_widget_pane_g1

0xa143,	// (0x0000a143) cell_contacts_ai5_widget_pane_g2

0xa152,	// (0x0000a152) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb236,	// (0x0000b236) cell_contacts_ai5_widget_pane_g

0xa165,	// (0x0000a165) cell_contacts_ai5_widget_pane_t1

0x134f,	// (0x0000134f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa1df,	// (0x0000a1df) settings_container_pane

0x257a,	// (0x0000257a) listscroll_set_pane_copy1

0x5920,	// (0x00005920) scroll_pane_cp121_copy1

0xa1eb,	// (0x0000a1eb) set_content_pane_copy1

0xa1f3,	// (0x0000a1f3) aid_height_set_list_copy1_ParamLimits

0xa1f3,	// (0x0000a1f3) aid_height_set_list_copy1

0x4e33,	// (0x00004e33) aid_size_parent_copy1_ParamLimits

0x4e33,	// (0x00004e33) aid_size_parent_copy1

0xa1ff,	// (0x0000a1ff) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa1ff,	// (0x0000a1ff) button_value_adjust_pane_cp6_copy1

0x2aed,	// (0x00002aed) list_highlight_pane_cp2_copy1_ParamLimits

0x2aed,	// (0x00002aed) list_highlight_pane_cp2_copy1

0xa213,	// (0x0000a213) list_set_pane_copy1_ParamLimits

0xa213,	// (0x0000a213) list_set_pane_copy1

0xa17a,	// (0x0000a17a) main_pane_set_t1_copy1_ParamLimits

0xa17a,	// (0x0000a17a) main_pane_set_t1_copy1

0xa1b4,	// (0x0000a1b4) main_pane_set_t2_copy1_ParamLimits

0xa1b4,	// (0x0000a1b4) main_pane_set_t2_copy1

0xa2c0,	// (0x0000a2c0) main_pane_set_t3_copy1

0xa2ce,	// (0x0000a2ce) main_pane_set_t4_copy1

0xa1d3,	// (0x0000a1d3) set_content_pane_g1_copy1_ParamLimits

0xa1d3,	// (0x0000a1d3) set_content_pane_g1_copy1

0xa2dc,	// (0x0000a2dc) setting_code_pane_copy1

0xa2e6,	// (0x0000a2e6) setting_slider_graphic_pane_copy1

0xa2e6,	// (0x0000a2e6) setting_slider_pane_copy1

0xa2e6,	// (0x0000a2e6) setting_text_pane_copy1

0xa2f0,	// (0x0000a2f0) setting_volume_pane_copy1

0xa2f9,	// (0x0000a2f9) settings_code_pane_cp2_copy1

0xa301,	// (0x0000a301) settings_code_pane_cp_copy1_ParamLimits

0xa301,	// (0x0000a301) settings_code_pane_cp_copy1

0xa315,	// (0x0000a315) volume_set_pane_copy1

0xa31d,	// (0x0000a31d) volume_set_pane_g10_copy1

0xa325,	// (0x0000a325) volume_set_pane_g1_copy1

0xa32d,	// (0x0000a32d) volume_set_pane_g2_copy1

0xa335,	// (0x0000a335) volume_set_pane_g3_copy1

0xa33d,	// (0x0000a33d) volume_set_pane_g4_copy1

0xa345,	// (0x0000a345) volume_set_pane_g5_copy1

0xa34d,	// (0x0000a34d) volume_set_pane_g6_copy1

0xa355,	// (0x0000a355) volume_set_pane_g7_copy1

0xa35d,	// (0x0000a35d) volume_set_pane_g8_copy1

0xa365,	// (0x0000a365) volume_set_pane_g9_copy1

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_copy1_ParamLimits

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_copy1

0xa36d,	// (0x0000a36d) setting_slider_pane_t1_copy1_ParamLimits

0xa36d,	// (0x0000a36d) setting_slider_pane_t1_copy1

0xa38b,	// (0x0000a38b) setting_slider_pane_t2_copy1_ParamLimits

0xa38b,	// (0x0000a38b) setting_slider_pane_t2_copy1

0xa3a5,	// (0x0000a3a5) setting_slider_pane_t3_copy1_ParamLimits

0xa3a5,	// (0x0000a3a5) setting_slider_pane_t3_copy1

0xa3bd,	// (0x0000a3bd) slider_set_pane_copy1_ParamLimits

0xa3bd,	// (0x0000a3bd) slider_set_pane_copy1

0x148b,	// (0x0000148b) set_opt_bg_pane_g1_copy2

0x1493,	// (0x00001493) set_opt_bg_pane_g2_copy2

0xa3d3,	// (0x0000a3d3) set_opt_bg_pane_g3_copy2

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4_copy2

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5_copy2

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6_copy2

0xa3dd,	// (0x0000a3dd) set_opt_bg_pane_g7_copy2

0xa3e5,	// (0x0000a3e5) set_opt_bg_pane_g8_copy2

0xa3ef,	// (0x0000a3ef) set_opt_bg_pane_g9_copy2

0xa3f9,	// (0x0000a3f9) aid_size_touch_slider_mark_copy1_ParamLimits

0xa3f9,	// (0x0000a3f9) aid_size_touch_slider_mark_copy1

0xa40d,	// (0x0000a40d) slider_set_pane_g1_copy1

0xa416,	// (0x0000a416) slider_set_pane_g2_copy1

0x4da2,	// (0x00004da2) slider_set_pane_g3_copy1_ParamLimits

0x4da2,	// (0x00004da2) slider_set_pane_g3_copy1

0x4db6,	// (0x00004db6) slider_set_pane_g4_copy1_ParamLimits

0x4db6,	// (0x00004db6) slider_set_pane_g4_copy1

0x4dce,	// (0x00004dce) slider_set_pane_g5_copy1_ParamLimits

0x4dce,	// (0x00004dce) slider_set_pane_g5_copy1

0x4da2,	// (0x00004da2) slider_set_pane_g6_copy1_ParamLimits

0x4da2,	// (0x00004da2) slider_set_pane_g6_copy1

0xa41e,	// (0x0000a41e) slider_set_pane_g7_copy1_ParamLimits

0xa41e,	// (0x0000a41e) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa434,	// (0x0000a434) setting_slider_graphic_pane_g1_copy1

0xa43d,	// (0x0000a43d) setting_slider_graphic_pane_t1_copy1

0xa44d,	// (0x0000a44d) setting_slider_graphic_pane_t2_copy1

0xa45d,	// (0x0000a45d) slider_set_pane_cp_copy1

0xa46d,	// (0x0000a46d) input_focus_pane_cp1_copy1

0xa476,	// (0x0000a476) list_set_text_pane_copy1

0xa47e,	// (0x0000a47e) setting_text_pane_g1_copy1

0xa487,	// (0x0000a487) set_text_pane_t1_copy1

0xa46d,	// (0x0000a46d) input_focus_pane_cp2_copy1

0xa47e,	// (0x0000a47e) setting_code_pane_g1_copy1

0xa4a4,	// (0x0000a4a4) setting_code_pane_t1_copy1

0xa4b2,	// (0x0000a4b2) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x227c,	// (0x0000227c) list_set_graphic_pane_g1_copy1_ParamLimits

0x227c,	// (0x0000227c) list_set_graphic_pane_g1_copy1

0xa4c6,	// (0x0000a4c6) list_set_graphic_pane_g2_copy1

0x2294,	// (0x00002294) list_set_graphic_pane_t1_copy1_ParamLimits

0x2294,	// (0x00002294) list_set_graphic_pane_t1_copy1

0x64b6,	// (0x000064b6) rs_clock_indi_pane_g1

0xa4ce,	// (0x0000a4ce) rs_clock_indi_pane_t1

0xa4dc,	// (0x0000a4dc) rs_indi_pane

0xa4e4,	// (0x0000a4e4) rs_indi_pane_g1

0xa4ed,	// (0x0000a4ed) rs_indi_pane_g2

0xa4f6,	// (0x0000a4f6) rs_indi_pane_g3

0x0002,

0xb23d,	// (0x0000b23d) rs_indi_pane_g

0x257a,	// (0x0000257a) bg_popup_preview_window_pane_cp03

0xa4ff,	// (0x0000a4ff) popup_fep_tooltip_window_t1

0x76ab,	// (0x000076ab) popup_note2_window_g2_ParamLimits

0x76ab,	// (0x000076ab) popup_note2_window_g2

0x0001,

0xafdd,	// (0x0000afdd) popup_note2_window_g_ParamLimits

0xafdd,	// (0x0000afdd) popup_note2_window_g

0x7ca5,	// (0x00007ca5) bg_popup_sub_pane_cp11_ParamLimits

0x7cb2,	// (0x00007cb2) cell_ai3_links_pane_g1_ParamLimits

0x7cc9,	// (0x00007cc9) cell_ai3_links_pane_t1

0xa487,	// (0x0000a487) set_text_pane_t1_copy1_ParamLimits

0x2489,	// (0x00002489) cell_graphic_popup_pane_cp2_ParamLimits

0x2489,	// (0x00002489) cell_graphic_popup_pane_cp2

0xa50d,	// (0x0000a50d) cell_graphic_popup_pane_g1_cp2

0x0b2e,	// (0x00000b2e) cell_graphic_popup_pane_g2_cp2

0xa515,	// (0x0000a515) cell_graphic_popup_pane_g3_cp2

0xa51d,	// (0x0000a51d) cell_graphic_popup_pane_t2_cp2

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp3_cp2

0x19fd,	// (0x000019fd) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x134f,	// (0x0000134f) main_tmo_pane_ParamLimits

0xdba1,	// (0x0000dba1) popup_tmo_big_image_note_window

0xebc3,	// (0x0000ebc3) cell_ai5_widget_list_pane

0xebcb,	// (0x0000ebcb) cell_ai5_widget_lrg_icon_pane

0xee70,	// (0x0000ee70) tmo_note_info_pane_t1_ParamLimits

0xee85,	// (0x0000ee85) tmo_note_info_pane_t2_ParamLimits

0xee9e,	// (0x0000ee9e) tmo_note_info_pane_t3_ParamLimits

0xa097,	// (0x0000a097) tmo_note_info_pane_t4_ParamLimits

0xa0a9,	// (0x0000a0a9) tmo_note_info_pane_t5_ParamLimits

0xf1fb,	// (0x0000f1fb) tmo_note_info_pane_t_ParamLimits

0xa1df,	// (0x0000a1df) settings_container_pane_ParamLimits

0xa465,	// (0x0000a465) indicator_popup_pane_cp5

0xa465,	// (0x0000a465) indicator_popup_pane_cp6

0xa4b2,	// (0x0000a4b2) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa52b,	// (0x0000a52b) popup_tmo_big_image_note_window_g1

0xa536,	// (0x0000a536) popup_tmo_big_image_note_window_t1

0xa546,	// (0x0000a546) popup_tmo_big_image_note_window_t2

0xa556,	// (0x0000a556) popup_tmo_big_image_note_window_t3

0x0002,

0xb244,	// (0x0000b244) popup_tmo_big_image_note_window_t

0xeeb3,	// (0x0000eeb3) cell_ai5_widget_lrg_icon_pane_g1

0xeebb,	// (0x0000eebb) cell_ai5_widget_lrg_icon_pane_t1

0xeec9,	// (0x0000eec9) cell_ai5_widget_list_row_pane_ParamLimits

0xeec9,	// (0x0000eec9) cell_ai5_widget_list_row_pane

0xeee2,	// (0x0000eee2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeee2,	// (0x0000eee2) cell_ai5_widget_list_row_pane_g1

0xeeef,	// (0x0000eeef) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeeef,	// (0x0000eeef) cell_ai5_widget_list_row_pane_t1

0xef07,	// (0x0000ef07) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xef07,	// (0x0000ef07) cell_ai5_widget_list_row_pane_t2

0x0001,

0xf206,	// (0x0000f206) cell_ai5_widget_list_row_pane_t_ParamLimits

0xf206,	// (0x0000f206) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa5cc,	// (0x0000a5cc) popup_fep_char_pre_window

0xa5d4,	// (0x0000a5d4) popup_fep_ituss_window

0xa5f5,	// (0x0000a5f5) popup_fep_vkbss_window

0xa614,	// (0x0000a614) grid_vkbss_keypad_pane_ParamLimits

0xa614,	// (0x0000a614) grid_vkbss_keypad_pane

0xa624,	// (0x0000a624) ituss_keypad_pane

0xa63c,	// (0x0000a63c) aid_vkbss_key_offset_ParamLimits

0xa63c,	// (0x0000a63c) aid_vkbss_key_offset

0xa648,	// (0x0000a648) cell_vkbss_key_pane_ParamLimits

0xa648,	// (0x0000a648) cell_vkbss_key_pane

0x33e8,	// (0x000033e8) bg_cell_vkbss_key_g1_ParamLimits

0x33e8,	// (0x000033e8) bg_cell_vkbss_key_g1

0xa65e,	// (0x0000a65e) cell_vkbss_key_3p_pane_ParamLimits

0xa65e,	// (0x0000a65e) cell_vkbss_key_3p_pane

0xa678,	// (0x0000a678) cell_vkbss_key_g1_ParamLimits

0xa678,	// (0x0000a678) cell_vkbss_key_g1

0xa692,	// (0x0000a692) cell_vkbss_key_t1_ParamLimits

0xa692,	// (0x0000a692) cell_vkbss_key_t1

0xa6bd,	// (0x0000a6bd) cell_ituss_key_pane_ParamLimits

0xa6bd,	// (0x0000a6bd) cell_ituss_key_pane

0xa6cd,	// (0x0000a6cd) bg_cell_ituss_key_g1_ParamLimits

0xa6cd,	// (0x0000a6cd) bg_cell_ituss_key_g1

0xa6d9,	// (0x0000a6d9) cell_ituss_key_pane_g1_ParamLimits

0xa6d9,	// (0x0000a6d9) cell_ituss_key_pane_g1

0xa6e5,	// (0x0000a6e5) cell_ituss_key_pane_g2_ParamLimits

0xa6e5,	// (0x0000a6e5) cell_ituss_key_pane_g2

0x0001,

0xb250,	// (0x0000b250) cell_ituss_key_pane_g_ParamLimits

0xb250,	// (0x0000b250) cell_ituss_key_pane_g

0xa6fe,	// (0x0000a6fe) cell_ituss_key_t1_ParamLimits

0xa6fe,	// (0x0000a6fe) cell_ituss_key_t1

0xa72c,	// (0x0000a72c) cell_ituss_key_t2_ParamLimits

0xa72c,	// (0x0000a72c) cell_ituss_key_t2

0xa75d,	// (0x0000a75d) cell_ituss_key_t3_ParamLimits

0xa75d,	// (0x0000a75d) cell_ituss_key_t3

0xa78e,	// (0x0000a78e) cell_ituss_key_t4_ParamLimits

0xa78e,	// (0x0000a78e) cell_ituss_key_t4

0x0003,

0xb255,	// (0x0000b255) cell_ituss_key_t_ParamLimits

0xb255,	// (0x0000b255) cell_ituss_key_t

0xa7bf,	// (0x0000a7bf) cell_vkbss_key_3p_pane_g1

0xa7c7,	// (0x0000a7c7) cell_vkbss_key_3p_pane_g2

0xa7cf,	// (0x0000a7cf) cell_vkbss_key_3p_pane_g3

0x0002,

0xb25e,	// (0x0000b25e) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa7d7,	// (0x0000a7d7) popup_fep_char_pre_window_t1

0xebb9,	// (0x0000ebb9) main_ai5_sk_pane

0xa123,	// (0x0000a123) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa12f,	// (0x0000a12f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa143,	// (0x0000a143) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa152,	// (0x0000a152) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb236,	// (0x0000b236) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa165,	// (0x0000a165) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x134f,	// (0x0000134f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xef19,	// (0x0000ef19) main_ai5_sk_pane_g1

0x3caa,	// (0x00003caa) popup_query_code_window_g1

0xa5ea,	// (0x0000a5ea) popup_fep_vkb_icf_pane

0xa5fe,	// (0x0000a5fe) popup_fep_vtchi_icf_pane

0x134f,	// (0x0000134f) bg_icf_pane

0xa7fe,	// (0x0000a7fe) list_vkb_icf_pane

0x134f,	// (0x0000134f) bg_icf_pane_cp01

0xa816,	// (0x0000a816) vtchi_icf_list_pane

0xa826,	// (0x0000a826) list_vkb_icf_pane_t1_ParamLimits

0xa826,	// (0x0000a826) list_vkb_icf_pane_t1

0xa840,	// (0x0000a840) vtchi_icf_list_pane_t1_ParamLimits

0xa840,	// (0x0000a840) vtchi_icf_list_pane_t1

0xa5d4,	// (0x0000a5d4) popup_fep_ituss_window_ParamLimits

0xa5fe,	// (0x0000a5fe) popup_fep_vtchi_icf_pane_ParamLimits

0xa624,	// (0x0000a624) ituss_keypad_pane_ParamLimits

0xa633,	// (0x0000a633) ituss_sks_pane

0x134f,	// (0x0000134f) bg_icf_pane_ParamLimits

0xa7ef,	// (0x0000a7ef) icf_edit_indi_pane_ParamLimits

0xa7ef,	// (0x0000a7ef) icf_edit_indi_pane

0xa7fe,	// (0x0000a7fe) list_vkb_icf_pane_ParamLimits

0x134f,	// (0x0000134f) bg_icf_pane_cp01_ParamLimits

0xa80a,	// (0x0000a80a) icf_edit_indi_pane_cp01_ParamLimits

0xa80a,	// (0x0000a80a) icf_edit_indi_pane_cp01

0xa81e,	// (0x0000a81e) vtchi_query_pane

0x6963,	// (0x00006963) icf_edit_indi_pane_g1_ParamLimits

0x6963,	// (0x00006963) icf_edit_indi_pane_g1

0xa867,	// (0x0000a867) icf_edit_indi_pane_g2_ParamLimits

0xa867,	// (0x0000a867) icf_edit_indi_pane_g2

0x0001,

0xb265,	// (0x0000b265) icf_edit_indi_pane_g_ParamLimits

0xb265,	// (0x0000b265) icf_edit_indi_pane_g

0xa873,	// (0x0000a873) icf_edit_indi_pane_t1

0xa881,	// (0x0000a881) bg_input_focus_pane_cp042

0x0d12,	// (0x00000d12) vtchi_button_pane

0xa88a,	// (0x0000a88a) vtchi_query_pane_t1

0xa898,	// (0x0000a898) vtchi_query_pane_t2

0xa8a6,	// (0x0000a8a6) vtchi_query_pane_t3

0x0002,

0xb26a,	// (0x0000b26a) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xa8b4,	// (0x0000a8b4) vtchi_button_pane_g1

0x8655,	// (0x00008655) ituss_sks_pane_g1

0xa8bc,	// (0x0000a8bc) ituss_sks_pane_g2

0x0001,

0xb271,	// (0x0000b271) ituss_sks_pane_g

0xa8c5,	// (0x0000a8c5) ituss_sks_pane_t1

0xa8d3,	// (0x0000a8d3) ituss_sks_pane_t2

0x0001,

0xb276,	// (0x0000b276) ituss_sks_pane_t

0x5e41,	// (0x00005e41) indicator_nsta_pane_cp_g1

0x5e4a,	// (0x00005e4a) indicator_nsta_pane_cp_g2

0x5e52,	// (0x00005e52) indicator_nsta_pane_cp_g3

0x5e5a,	// (0x00005e5a) indicator_nsta_pane_cp_g4

0x5e62,	// (0x00005e62) indicator_nsta_pane_cp_g5

0x5e6a,	// (0x00005e6a) indicator_nsta_pane_cp_g6

0x0005,

0xae27,	// (0x0000ae27) indicator_nsta_pane_cp_g

0xe956,	// (0x0000e956) cell_graphic2_pane_t2_ParamLimits

0xe956,	// (0x0000e956) cell_graphic2_pane_t2

0x0001,

0xf1a1,	// (0x0000f1a1) cell_graphic2_pane_t_ParamLimits

0xf1a1,	// (0x0000f1a1) cell_graphic2_pane_t

0xe98c,	// (0x0000e98c) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

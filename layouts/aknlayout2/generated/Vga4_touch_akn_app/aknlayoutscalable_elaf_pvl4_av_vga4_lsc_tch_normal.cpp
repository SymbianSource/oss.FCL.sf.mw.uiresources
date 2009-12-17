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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00000000 };

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
0xb147,	// (0x0000b147) Screen

0xb153,	// (0x0000b153) application_window_ParamLimits

0xb153,	// (0x0000b153) application_window

0x002e,	// (0x0000002e) screen_g1

0xb18b,	// (0x0000b18b) area_bottom_pane_ParamLimits

0xb18b,	// (0x0000b18b) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc94d,	// (0x0000c94d) battery_pane_ParamLimits

0xc94d,	// (0x0000c94d) battery_pane

0x412a,	// (0x0000412a) bg_status_flat_pane_g8

0x4132,	// (0x00004132) bg_status_flat_pane_g9

0x330c,	// (0x0000330c) context_pane_ParamLimits

0x330c,	// (0x0000330c) context_pane

0xcac4,	// (0x0000cac4) navi_pane_ParamLimits

0xcac4,	// (0x0000cac4) navi_pane

0xcb4d,	// (0x0000cb4d) signal_pane_ParamLimits

0xcb4d,	// (0x0000cb4d) signal_pane

0x0008,

0xaaeb,	// (0x0000aaeb) bg_status_flat_pane_g

0xcbdd,	// (0x0000cbdd) status_pane_g1_ParamLimits

0xcbdd,	// (0x0000cbdd) status_pane_g1

0xcbf3,	// (0x0000cbf3) status_pane_g2_ParamLimits

0xcbf3,	// (0x0000cbf3) status_pane_g2

0x354c,	// (0x0000354c) status_pane_g3_ParamLimits

0x354c,	// (0x0000354c) status_pane_g3

0x0004,

0xf595,	// (0x0000f595) status_pane_g_ParamLimits

0xf595,	// (0x0000f595) status_pane_g

0xcbff,	// (0x0000cbff) title_pane_ParamLimits

0xcbff,	// (0x0000cbff) title_pane

0xcc5c,	// (0x0000cc5c) uni_indicator_pane_ParamLimits

0xcc5c,	// (0x0000cc5c) uni_indicator_pane

0x2b31,	// (0x00002b31) bg_list_pane_ParamLimits

0x2b31,	// (0x00002b31) bg_list_pane

0xc18a,	// (0x0000c18a) find_pane

0xc192,	// (0x0000c192) listscroll_app_pane_ParamLimits

0xc192,	// (0x0000c192) listscroll_app_pane

0x2b65,	// (0x00002b65) listscroll_form_pane

0xc19e,	// (0x0000c19e) listscroll_gen_pane_ParamLimits

0xc19e,	// (0x0000c19e) listscroll_gen_pane

0x2b65,	// (0x00002b65) listscroll_set_pane

0x4f53,	// (0x00004f53) main_idle_act_pane

0x260e,	// (0x0000260e) main_idle_trad_pane

0x260e,	// (0x0000260e) main_list_empty_pane

0x2b93,	// (0x00002b93) main_midp_pane

0x2b9f,	// (0x00002b9f) main_pane_g1_ParamLimits

0x2b9f,	// (0x00002b9f) main_pane_g1

0xc1b2,	// (0x0000c1b2) popup_ai_message_window_ParamLimits

0xc1b2,	// (0x0000c1b2) popup_ai_message_window

0xc252,	// (0x0000c252) popup_fep_china_uni_window_ParamLimits

0xc252,	// (0x0000c252) popup_fep_china_uni_window

0x2cc5,	// (0x00002cc5) popup_fep_japan_candidate_window_ParamLimits

0x2cc5,	// (0x00002cc5) popup_fep_japan_candidate_window

0x2cef,	// (0x00002cef) popup_fep_japan_predictive_window_ParamLimits

0x2cef,	// (0x00002cef) popup_fep_japan_predictive_window

0xc2b2,	// (0x0000c2b2) popup_find_window

0xc2cf,	// (0x0000c2cf) popup_grid_graphic_window_ParamLimits

0xc2cf,	// (0x0000c2cf) popup_grid_graphic_window

0x2d60,	// (0x00002d60) popup_large_graphic_colour_window

0xc373,	// (0x0000c373) popup_menu_window_ParamLimits

0xc373,	// (0x0000c373) popup_menu_window

0xc55f,	// (0x0000c55f) popup_note_image_window

0xc51f,	// (0x0000c51f) popup_note_wait_window_ParamLimits

0xc51f,	// (0x0000c51f) popup_note_wait_window

0xc577,	// (0x0000c577) popup_note_window_ParamLimits

0xc577,	// (0x0000c577) popup_note_window

0xc625,	// (0x0000c625) popup_query_code_window_ParamLimits

0xc625,	// (0x0000c625) popup_query_code_window

0x2fcc,	// (0x00002fcc) popup_query_data_code_window_ParamLimits

0x2fcc,	// (0x00002fcc) popup_query_data_code_window

0xc665,	// (0x0000c665) popup_query_data_window_ParamLimits

0xc665,	// (0x0000c665) popup_query_data_window

0xc6f9,	// (0x0000c6f9) popup_query_sat_info_window_ParamLimits

0xc6f9,	// (0x0000c6f9) popup_query_sat_info_window

0xc7a4,	// (0x0000c7a4) popup_snote_single_graphic_window_ParamLimits

0xc7a4,	// (0x0000c7a4) popup_snote_single_graphic_window

0xc7a4,	// (0x0000c7a4) popup_snote_single_text_window_ParamLimits

0xc7a4,	// (0x0000c7a4) popup_snote_single_text_window

0x3067,	// (0x00003067) popup_sub_window_general

0x31ad,	// (0x000031ad) popup_window_general_ParamLimits

0x31ad,	// (0x000031ad) popup_window_general

0x31c6,	// (0x000031c6) power_save_pane

0xc025,	// (0x0000c025) control_pane_g1_ParamLimits

0xc025,	// (0x0000c025) control_pane_g1

0x29ad,	// (0x000029ad) control_pane_g2_ParamLimits

0x29ad,	// (0x000029ad) control_pane_g2

0x29d2,	// (0x000029d2) control_pane_g3_ParamLimits

0x29d2,	// (0x000029d2) control_pane_g3

0x0007,

0xf57d,	// (0x0000f57d) control_pane_g_ParamLimits

0xf57d,	// (0x0000f57d) control_pane_g

0xc083,	// (0x0000c083) control_pane_t1_ParamLimits

0xc083,	// (0x0000c083) control_pane_t1

0xc0e1,	// (0x0000c0e1) control_pane_t2_ParamLimits

0xc0e1,	// (0x0000c0e1) control_pane_t2

0x0002,

0xf58e,	// (0x0000f58e) control_pane_t_ParamLimits

0xf58e,	// (0x0000f58e) control_pane_t

0x28a5,	// (0x000028a5) navi_navi_volume_pane_cp1

0x28ae,	// (0x000028ae) status_small_icon_pane

0x28b6,	// (0x000028b6) status_small_pane_g1_ParamLimits

0x28b6,	// (0x000028b6) status_small_pane_g1

0x28ea,	// (0x000028ea) status_small_pane_g2_ParamLimits

0x28ea,	// (0x000028ea) status_small_pane_g2

0x28f6,	// (0x000028f6) status_small_pane_g3_ParamLimits

0x28f6,	// (0x000028f6) status_small_pane_g3

0x2902,	// (0x00002902) status_small_pane_g4_ParamLimits

0x2902,	// (0x00002902) status_small_pane_g4

0x290e,	// (0x0000290e) status_small_pane_g5_ParamLimits

0x290e,	// (0x0000290e) status_small_pane_g5

0x291d,	// (0x0000291d) status_small_pane_g6_ParamLimits

0x291d,	// (0x0000291d) status_small_pane_g6

0x0007,

0xa9f7,	// (0x0000a9f7) status_small_pane_g_ParamLimits

0xa9f7,	// (0x0000a9f7) status_small_pane_g

0x294d,	// (0x0000294d) status_small_pane_t1

0x2970,	// (0x00002970) status_small_wait_pane_ParamLimits

0x2970,	// (0x00002970) status_small_wait_pane

0xbe15,	// (0x0000be15) aid_levels_signal_ParamLimits

0xbe15,	// (0x0000be15) aid_levels_signal

0xbe2d,	// (0x0000be2d) signal_pane_g1_ParamLimits

0xbe2d,	// (0x0000be2d) signal_pane_g1

0xbe48,	// (0x0000be48) signal_pane_g2_ParamLimits

0xbe48,	// (0x0000be48) signal_pane_g2

0x0001,

0xf55c,	// (0x0000f55c) signal_pane_g_ParamLimits

0xf55c,	// (0x0000f55c) signal_pane_g

0x1eb2,	// (0x00001eb2) context_pane_g1

0xb308,	// (0x0000b308) title_pane_g1

0xb33d,	// (0x0000b33d) title_pane_t1

0x04d7,	// (0x000004d7) title_pane_t2

0x04fd,	// (0x000004fd) title_pane_t3

0x0002,

0xf489,	// (0x0000f489) title_pane_t

0xcc84,	// (0x0000cc84) aid_levels_battery_ParamLimits

0xcc84,	// (0x0000cc84) aid_levels_battery

0xcca0,	// (0x0000cca0) battery_pane_g1_ParamLimits

0xcca0,	// (0x0000cca0) battery_pane_g1

0xccbd,	// (0x0000ccbd) battery_pane_g2_ParamLimits

0xccbd,	// (0x0000ccbd) battery_pane_g2

0x0001,

0xf5a0,	// (0x0000f5a0) battery_pane_g_ParamLimits

0xf5a0,	// (0x0000f5a0) battery_pane_g

0xd0d6,	// (0x0000d0d6) uni_indicator_pane_g1

0xd0eb,	// (0x0000d0eb) uni_indicator_pane_g2

0xd100,	// (0x0000d100) uni_indicator_pane_g3

0x0005,

0xf5f1,	// (0x0000f5f1) uni_indicator_pane_g

0x247c,	// (0x0000247c) navi_icon_pane_ParamLimits

0x247c,	// (0x0000247c) navi_icon_pane

0x23c3,	// (0x000023c3) navi_midp_pane

0x2498,	// (0x00002498) navi_navi_pane

0x24a2,	// (0x000024a2) navi_text_pane_ParamLimits

0x24a2,	// (0x000024a2) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09eb,	// (0x000009eb) status_small_wait_pane_g2

0x0001,

0xab8e,	// (0x0000ab8e) status_small_wait_pane_g

0xd075,	// (0x0000d075) navi_navi_icon_text_pane

0xd07d,	// (0x0000d07d) navi_navi_pane_g1_ParamLimits

0xd07d,	// (0x0000d07d) navi_navi_pane_g1

0xd08f,	// (0x0000d08f) navi_navi_pane_g2_ParamLimits

0xd08f,	// (0x0000d08f) navi_navi_pane_g2

0x0001,

0xf5ec,	// (0x0000f5ec) navi_navi_pane_g_ParamLimits

0xf5ec,	// (0x0000f5ec) navi_navi_pane_g

0x4925,	// (0x00004925) navi_navi_tabs_pane

0xd0a1,	// (0x0000d0a1) navi_navi_text_pane

0xd075,	// (0x0000d075) navi_navi_volume_pane

0xd063,	// (0x0000d063) navi_text_pane_t1

0xd057,	// (0x0000d057) navi_icon_pane_g1

0x4816,	// (0x00004816) navi_navi_text_pane_t1

0xd046,	// (0x0000d046) navi_navi_volume_pane_g1

0xd04e,	// (0x0000d04e) volume_small_pane

0xcfa2,	// (0x0000cfa2) navi_navi_icon_text_pane_g1

0xcfaa,	// (0x0000cfaa) navi_navi_icon_text_pane_t1

0x2498,	// (0x00002498) navi_tabs_2_long_pane

0x2498,	// (0x00002498) navi_tabs_2_pane

0x2498,	// (0x00002498) navi_tabs_3_long_pane

0x2498,	// (0x00002498) navi_tabs_3_pane

0x2498,	// (0x00002498) navi_tabs_4_pane

0xcf82,	// (0x0000cf82) tabs_2_active_pane_ParamLimits

0xcf82,	// (0x0000cf82) tabs_2_active_pane

0xcf92,	// (0x0000cf92) tabs_2_passive_pane_ParamLimits

0xcf92,	// (0x0000cf92) tabs_2_passive_pane

0xcf50,	// (0x0000cf50) tabs_3_active_pane_ParamLimits

0xcf50,	// (0x0000cf50) tabs_3_active_pane

0xcf60,	// (0x0000cf60) tabs_3_passive_pane_ParamLimits

0xcf60,	// (0x0000cf60) tabs_3_passive_pane

0xcf71,	// (0x0000cf71) tabs_3_passive_pane_cp_ParamLimits

0xcf71,	// (0x0000cf71) tabs_3_passive_pane_cp

0xcf0c,	// (0x0000cf0c) tabs_4_active_pane_ParamLimits

0xcf0c,	// (0x0000cf0c) tabs_4_active_pane

0xcf1d,	// (0x0000cf1d) tabs_4_passive_pane_ParamLimits

0xcf1d,	// (0x0000cf1d) tabs_4_passive_pane

0xcf2e,	// (0x0000cf2e) tabs_4_passive_pane_cp_ParamLimits

0xcf2e,	// (0x0000cf2e) tabs_4_passive_pane_cp

0xcf3f,	// (0x0000cf3f) tabs_4_passive_pane_cp2_ParamLimits

0xcf3f,	// (0x0000cf3f) tabs_4_passive_pane_cp2

0xcee8,	// (0x0000cee8) tabs_2_long_active_pane_ParamLimits

0xcee8,	// (0x0000cee8) tabs_2_long_active_pane

0xcefa,	// (0x0000cefa) tabs_2_long_passive_pane_ParamLimits

0xcefa,	// (0x0000cefa) tabs_2_long_passive_pane

0xce9d,	// (0x0000ce9d) tabs_3_long_active_pane_ParamLimits

0xce9d,	// (0x0000ce9d) tabs_3_long_active_pane

0xceb6,	// (0x0000ceb6) tabs_3_long_passive_pane_ParamLimits

0xceb6,	// (0x0000ceb6) tabs_3_long_passive_pane

0xcecf,	// (0x0000cecf) tabs_3_long_passive_pane_cp_ParamLimits

0xcecf,	// (0x0000cecf) tabs_3_long_passive_pane_cp

0x458f,	// (0x0000458f) volume_small_pane_g1

0xce4c,	// (0x0000ce4c) volume_small_pane_g2

0xce55,	// (0x0000ce55) volume_small_pane_g3

0xce5e,	// (0x0000ce5e) volume_small_pane_g4

0xce67,	// (0x0000ce67) volume_small_pane_g5

0xce70,	// (0x0000ce70) volume_small_pane_g6

0xce79,	// (0x0000ce79) volume_small_pane_g7

0xce82,	// (0x0000ce82) volume_small_pane_g8

0xce8b,	// (0x0000ce8b) volume_small_pane_g9

0xce94,	// (0x0000ce94) volume_small_pane_g10

0x0009,

0xf5c2,	// (0x0000f5c2) volume_small_pane_g

0x0835,	// (0x00000835) bg_active_tab_pane_cp2_ParamLimits

0x0835,	// (0x00000835) bg_active_tab_pane_cp2

0xb3c9,	// (0x0000b3c9) tabs_3_active_pane_g1

0xb3d1,	// (0x0000b3d1) tabs_3_active_pane_t1

0x0835,	// (0x00000835) bg_passive_tab_pane_cp2_ParamLimits

0x0835,	// (0x00000835) bg_passive_tab_pane_cp2

0xb3c9,	// (0x0000b3c9) tabs_3_passive_pane_g1

0xb3d1,	// (0x0000b3d1) tabs_3_passive_pane_t1

0x0835,	// (0x00000835) bg_active_tab_pane_cp3_ParamLimits

0x0835,	// (0x00000835) bg_active_tab_pane_cp3

0xb3e3,	// (0x0000b3e3) tabs_4_active_pane_g1

0xb3eb,	// (0x0000b3eb) tabs_4_active_pane_t1

0x0835,	// (0x00000835) bg_passive_tab_pane_cp3_ParamLimits

0x0835,	// (0x00000835) bg_passive_tab_pane_cp3

0xb3e3,	// (0x0000b3e3) tabs_4_1_passive_pane_g1

0xb3eb,	// (0x0000b3eb) tabs_4_1_passive_pane_t1

0x2b93,	// (0x00002b93) list_highlight_pane_cp2

0xd1d0,	// (0x0000d1d0) list_set_pane_ParamLimits

0xd1d0,	// (0x0000d1d0) list_set_pane

0xd298,	// (0x0000d298) main_pane_set_t1_ParamLimits

0xd298,	// (0x0000d298) main_pane_set_t1

0xd2b8,	// (0x0000d2b8) main_pane_set_t2_ParamLimits

0xd2b8,	// (0x0000d2b8) main_pane_set_t2

0xd2cc,	// (0x0000d2cc) main_pane_set_t3_ParamLimits

0xd2cc,	// (0x0000d2cc) main_pane_set_t3

0xd2e0,	// (0x0000d2e0) main_pane_set_t4_ParamLimits

0xd2e0,	// (0x0000d2e0) main_pane_set_t4

0x0003,

0xf603,	// (0x0000f603) main_pane_set_t_ParamLimits

0xf603,	// (0x0000f603) main_pane_set_t

0xd2f4,	// (0x0000d2f4) setting_code_pane

0x50b3,	// (0x000050b3) setting_slider_graphic_pane

0x50b3,	// (0x000050b3) setting_slider_pane

0x50b3,	// (0x000050b3) setting_text_pane

0x50b3,	// (0x000050b3) setting_volume_pane

0x0551,	// (0x00000551) volume_set_pane

0x050f,	// (0x0000050f) bg_set_opt_pane_cp

0x055b,	// (0x0000055b) setting_slider_pane_t1

0x0571,	// (0x00000571) setting_slider_pane_t2

0x058b,	// (0x0000058b) setting_slider_pane_t3

0x0002,

0xa7e7,	// (0x0000a7e7) setting_slider_pane_t

0x05a3,	// (0x000005a3) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05b9,	// (0x000005b9) setting_slider_graphic_pane_g1

0x05c2,	// (0x000005c2) setting_slider_graphic_pane_t1

0x05d2,	// (0x000005d2) setting_slider_graphic_pane_t2

0x0001,

0xa7ee,	// (0x0000a7ee) setting_slider_graphic_pane_t

0x05e2,	// (0x000005e2) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4f3a,	// (0x00004f3a) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05ea,	// (0x000005ea) setting_code_pane_t1

0x05f8,	// (0x000005f8) set_text_pane_t1_ParamLimits

0x05f8,	// (0x000005f8) set_text_pane_t1

0x1517,	// (0x00001517) set_opt_bg_pane_g1

0x151f,	// (0x0000151f) set_opt_bg_pane_g2

0x4f12,	// (0x00004f12) set_opt_bg_pane_g3

0x152f,	// (0x0000152f) set_opt_bg_pane_g4

0x1537,	// (0x00001537) set_opt_bg_pane_g5

0x153f,	// (0x0000153f) set_opt_bg_pane_g6

0x4f1c,	// (0x00004f1c) set_opt_bg_pane_g7

0x4f26,	// (0x00004f26) set_opt_bg_pane_g8

0x4f30,	// (0x00004f30) set_opt_bg_pane_g9

0x0008,

0xabe5,	// (0x0000abe5) set_opt_bg_pane_g

0x4ea1,	// (0x00004ea1) slider_set_pane_g1

0x4eae,	// (0x00004eae) slider_set_pane_g2

0x0006,

0xabd6,	// (0x0000abd6) slider_set_pane_g

0x4d09,	// (0x00004d09) volume_set_pane_g1

0x4d13,	// (0x00004d13) volume_set_pane_g2

0x4d1d,	// (0x00004d1d) volume_set_pane_g3

0x4d27,	// (0x00004d27) volume_set_pane_g4

0x4d31,	// (0x00004d31) volume_set_pane_g5

0x4d3b,	// (0x00004d3b) volume_set_pane_g6

0x4d45,	// (0x00004d45) volume_set_pane_g7

0x4d4f,	// (0x00004d4f) volume_set_pane_g8

0x4d59,	// (0x00004d59) volume_set_pane_g9

0x4d63,	// (0x00004d63) volume_set_pane_g10

0x0009,

0xabae,	// (0x0000abae) volume_set_pane_g

0xb3fd,	// (0x0000b3fd) indicator_pane_ParamLimits

0xb3fd,	// (0x0000b3fd) indicator_pane

0xb429,	// (0x0000b429) main_idle_pane_g2_ParamLimits

0xb429,	// (0x0000b429) main_idle_pane_g2

0xb461,	// (0x0000b461) main_pane_idle_g1_ParamLimits

0xb461,	// (0x0000b461) main_pane_idle_g1

0x0654,	// (0x00000654) popup_clock_digital_analogue_window_ParamLimits

0x0654,	// (0x00000654) popup_clock_digital_analogue_window

0xb48f,	// (0x0000b48f) soft_indicator_pane_ParamLimits

0xb48f,	// (0x0000b48f) soft_indicator_pane

0xb4ab,	// (0x0000b4ab) wallpaper_pane_ParamLimits

0xb4ab,	// (0x0000b4ab) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb4bd,	// (0x0000b4bd) indicator_pane_g1_ParamLimits

0xb4bd,	// (0x0000b4bd) indicator_pane_g1

0x5473,	// (0x00005473) navi_navi_icon_text_pane_srt_g1

0x06a8,	// (0x000006a8) soft_indicator_pane_t1

0x06c2,	// (0x000006c2) aid_ps_area_pane

0xb4d6,	// (0x0000b4d6) aid_ps_clock_pane

0x06e1,	// (0x000006e1) aid_ps_indicator_pane

0x06ed,	// (0x000006ed) indicator_ps_pane_ParamLimits

0x06ed,	// (0x000006ed) indicator_ps_pane

0x06fc,	// (0x000006fc) power_save_pane_g1_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_g1

0x0708,	// (0x00000708) power_save_pane_g2_ParamLimits

0x0708,	// (0x00000708) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06c2,	// (0x000006c2) aid_ps_area_pane_ParamLimits

0x0001,

0xa7f3,	// (0x0000a7f3) power_save_pane_g_ParamLimits

0xa7f3,	// (0x0000a7f3) power_save_pane_g

0x0716,	// (0x00000716) power_save_pane_t1_ParamLimits

0x0716,	// (0x00000716) power_save_pane_t1

0xb4d6,	// (0x0000b4d6) aid_ps_clock_pane_ParamLimits

0x06e1,	// (0x000006e1) aid_ps_indicator_pane_ParamLimits

0x0728,	// (0x00000728) power_save_pane_t4_ParamLimits

0x0728,	// (0x00000728) power_save_pane_t4

0x0001,

0xa7f8,	// (0x0000a7f8) power_save_pane_t_ParamLimits

0xa7f8,	// (0x0000a7f8) power_save_pane_t

0x0752,	// (0x00000752) power_save_t3_ParamLimits

0x0752,	// (0x00000752) power_save_t3

0x073d,	// (0x0000073d) power_save_t2_ParamLimits

0x073d,	// (0x0000073d) power_save_t2

0x0767,	// (0x00000767) indicator_ps_pane_g1

0xb4e4,	// (0x0000b4e4) ai_gene_pane_ParamLimits

0xb4e4,	// (0x0000b4e4) ai_gene_pane

0xb4fb,	// (0x0000b4fb) ai_links_pane_ParamLimits

0xb4fb,	// (0x0000b4fb) ai_links_pane

0xb513,	// (0x0000b513) indicator_pane_cp1_ParamLimits

0xb513,	// (0x0000b513) indicator_pane_cp1

0xb522,	// (0x0000b522) main_pane_idle_g1_cp_ParamLimits

0xb522,	// (0x0000b522) main_pane_idle_g1_cp

0x07a0,	// (0x000007a0) popup_ai_links_title_window

0xb53a,	// (0x0000b53a) soft_indicator_pane_cp1_ParamLimits

0xb53a,	// (0x0000b53a) soft_indicator_pane_cp1

0x4bd4,	// (0x00004bd4) ai_links_pane_g1

0x4bdd,	// (0x00004bdd) grid_ai_links_pane

0xd0cd,	// (0x0000d0cd) ai_gene_pane_1

0x4bc2,	// (0x00004bc2) ai_gene_pane_2

0x4bcb,	// (0x00004bcb) list_highlight_pane_cp4

0xd0a9,	// (0x0000d0a9) cell_ai_link_pane_ParamLimits

0xd0a9,	// (0x0000d0a9) cell_ai_link_pane

0x4b91,	// (0x00004b91) cell_ai_link_pane_g1

0x09eb,	// (0x000009eb) cell_ai_link_pane_g2

0x0001,

0xab89,	// (0x0000ab89) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07c3,	// (0x000007c3) popup_ai_links_title_window_t1

0x4add,	// (0x00004add) ai_gene_pane_1_g1_ParamLimits

0x4add,	// (0x00004add) ai_gene_pane_1_g1

0x4ae9,	// (0x00004ae9) ai_gene_pane_1_g2_ParamLimits

0x4ae9,	// (0x00004ae9) ai_gene_pane_1_g2

0x0001,

0xab7f,	// (0x0000ab7f) ai_gene_pane_1_g_ParamLimits

0xab7f,	// (0x0000ab7f) ai_gene_pane_1_g

0x4af6,	// (0x00004af6) ai_gene_pane_1_t1_ParamLimits

0x4af6,	// (0x00004af6) ai_gene_pane_1_t1

0x4b2a,	// (0x00004b2a) grid_ai_soft_ind_pane

0x4ac8,	// (0x00004ac8) ai_gene_pane_2_t1_ParamLimits

0x4ac8,	// (0x00004ac8) ai_gene_pane_2_t1

0xb54e,	// (0x0000b54e) main_pane_empty_t1_ParamLimits

0xb54e,	// (0x0000b54e) main_pane_empty_t1

0xb566,	// (0x0000b566) main_pane_empty_t2_ParamLimits

0xb566,	// (0x0000b566) main_pane_empty_t2

0xb57b,	// (0x0000b57b) main_pane_empty_t3_ParamLimits

0xb57b,	// (0x0000b57b) main_pane_empty_t3

0xb58d,	// (0x0000b58d) main_pane_empty_t4_ParamLimits

0xb58d,	// (0x0000b58d) main_pane_empty_t4

0xb59f,	// (0x0000b59f) main_pane_empty_t5_ParamLimits

0xb59f,	// (0x0000b59f) main_pane_empty_t5

0x0004,

0xf490,	// (0x0000f490) main_pane_empty_t_ParamLimits

0xf490,	// (0x0000f490) main_pane_empty_t

0x15f5,	// (0x000015f5) bg_popup_window_pane_ParamLimits

0x15f5,	// (0x000015f5) bg_popup_window_pane

0x4824,	// (0x00004824) find_popup_pane_cp2_ParamLimits

0x4824,	// (0x00004824) find_popup_pane_cp2

0x4830,	// (0x00004830) heading_pane_ParamLimits

0x4830,	// (0x00004830) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xcfc7,	// (0x0000cfc7) bg_popup_window_pane_g1_ParamLimits

0xcfc7,	// (0x0000cfc7) bg_popup_window_pane_g1

0xcfd6,	// (0x0000cfd6) bg_popup_window_pane_g2_ParamLimits

0xcfd6,	// (0x0000cfd6) bg_popup_window_pane_g2

0xcfe2,	// (0x0000cfe2) bg_popup_window_pane_g3_ParamLimits

0xcfe2,	// (0x0000cfe2) bg_popup_window_pane_g3

0xcfee,	// (0x0000cfee) bg_popup_window_pane_g4_ParamLimits

0xcfee,	// (0x0000cfee) bg_popup_window_pane_g4

0xcffd,	// (0x0000cffd) bg_popup_window_pane_g5_ParamLimits

0xcffd,	// (0x0000cffd) bg_popup_window_pane_g5

0xd00d,	// (0x0000d00d) bg_popup_window_pane_g6_ParamLimits

0xd00d,	// (0x0000d00d) bg_popup_window_pane_g6

0xd019,	// (0x0000d019) bg_popup_window_pane_g7_ParamLimits

0xd019,	// (0x0000d019) bg_popup_window_pane_g7

0xd028,	// (0x0000d028) bg_popup_window_pane_g8_ParamLimits

0xd028,	// (0x0000d028) bg_popup_window_pane_g8

0xd037,	// (0x0000d037) bg_popup_window_pane_g9_ParamLimits

0xd037,	// (0x0000d037) bg_popup_window_pane_g9

0x47f9,	// (0x000047f9) bg_popup_window_pane_g10_ParamLimits

0x47f9,	// (0x000047f9) bg_popup_window_pane_g10

0x0009,

0xf5d7,	// (0x0000f5d7) bg_popup_window_pane_g_ParamLimits

0xf5d7,	// (0x0000f5d7) bg_popup_window_pane_g

0x4722,	// (0x00004722) bg_popup_heading_pane_ParamLimits

0x4722,	// (0x00004722) bg_popup_heading_pane

0x53b6,	// (0x000053b6) tabs_4_passive_pane_cp_srt_ParamLimits

0x53b6,	// (0x000053b6) tabs_4_passive_pane_cp_srt

0x53c8,	// (0x000053c8) tabs_4_passive_pane_srt_ParamLimits

0x4736,	// (0x00004736) heading_pane_g2

0x53c8,	// (0x000053c8) tabs_4_passive_pane_srt

0x3910,	// (0x00003910) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3910,	// (0x00003910) bg_passive_tab_pane_cp3_srt

0x473e,	// (0x0000473e) heading_pane_t1_ParamLimits

0x473e,	// (0x0000473e) heading_pane_t1

0x4755,	// (0x00004755) heading_pane_t2_ParamLimits

0x4755,	// (0x00004755) heading_pane_t2

0x0001,

0xab42,	// (0x0000ab42) heading_pane_t_ParamLimits

0xab42,	// (0x0000ab42) heading_pane_t

0x40f2,	// (0x000040f2) bg_popup_heading_pane_g1

0x41a1,	// (0x000041a1) bg_popup_heading_pane_g2

0x41ab,	// (0x000041ab) bg_popup_heading_pane_g3

0x41b5,	// (0x000041b5) bg_popup_heading_pane_g4

0x41bf,	// (0x000041bf) bg_popup_heading_pane_g5

0x41c9,	// (0x000041c9) bg_popup_heading_pane_g6

0x41d1,	// (0x000041d1) bg_popup_heading_pane_g7

0x41d9,	// (0x000041d9) bg_popup_heading_pane_g8

0x41e3,	// (0x000041e3) bg_popup_heading_pane_g9

0x0008,

0xaafe,	// (0x0000aafe) bg_popup_heading_pane_g

0x377d,	// (0x0000377d) bg_popup_sub_pane_g1

0x3785,	// (0x00003785) bg_popup_sub_pane_g2

0x378d,	// (0x0000378d) bg_popup_sub_pane_g3

0x3795,	// (0x00003795) bg_popup_sub_pane_g4

0x379d,	// (0x0000379d) bg_popup_sub_pane_g5

0x37a5,	// (0x000037a5) bg_popup_sub_pane_g6

0x37ad,	// (0x000037ad) bg_popup_sub_pane_g7

0x37b5,	// (0x000037b5) bg_popup_sub_pane_g8

0x37bd,	// (0x000037bd) bg_popup_sub_pane_g9

0x0008,

0xaad8,	// (0x0000aad8) bg_popup_sub_pane_g

0x0835,	// (0x00000835) bg_popup_window_pane_cp5_ParamLimits

0x0835,	// (0x00000835) bg_popup_window_pane_cp5

0x0851,	// (0x00000851) popup_note_window_g1_ParamLimits

0x0851,	// (0x00000851) popup_note_window_g1

0x085d,	// (0x0000085d) popup_note_window_t1_ParamLimits

0x085d,	// (0x0000085d) popup_note_window_t1

0x0873,	// (0x00000873) popup_note_window_t2_ParamLimits

0x0873,	// (0x00000873) popup_note_window_t2

0x0889,	// (0x00000889) popup_note_window_t3_ParamLimits

0x0889,	// (0x00000889) popup_note_window_t3

0x089f,	// (0x0000089f) popup_note_window_t4_ParamLimits

0x089f,	// (0x0000089f) popup_note_window_t4

0x08c7,	// (0x000008c7) popup_note_window_t5_ParamLimits

0x08c7,	// (0x000008c7) popup_note_window_t5

0x0004,

0xa808,	// (0x0000a808) popup_note_window_t_ParamLimits

0xa808,	// (0x0000a808) popup_note_window_t

0x08eb,	// (0x000008eb) bg_popup_window_pane_cp6_ParamLimits

0x08eb,	// (0x000008eb) bg_popup_window_pane_cp6

0x406e,	// (0x0000406e) popup_note_image_window_g1_ParamLimits

0x406e,	// (0x0000406e) popup_note_image_window_g1

0x407a,	// (0x0000407a) popup_note_image_window_g2_ParamLimits

0x407a,	// (0x0000407a) popup_note_image_window_g2

0x0001,

0xaacc,	// (0x0000aacc) popup_note_image_window_g_ParamLimits

0xaacc,	// (0x0000aacc) popup_note_image_window_g

0x4093,	// (0x00004093) popup_note_image_window_t1_ParamLimits

0x4093,	// (0x00004093) popup_note_image_window_t1

0x40ac,	// (0x000040ac) popup_note_image_window_t2_ParamLimits

0x40ac,	// (0x000040ac) popup_note_image_window_t2

0x40c5,	// (0x000040c5) popup_note_image_window_t3_ParamLimits

0x40c5,	// (0x000040c5) popup_note_image_window_t3

0x0002,

0xaad1,	// (0x0000aad1) popup_note_image_window_t_ParamLimits

0xaad1,	// (0x0000aad1) popup_note_image_window_t

0x3f2e,	// (0x00003f2e) bg_popup_window_pane_cp7_ParamLimits

0x3f2e,	// (0x00003f2e) bg_popup_window_pane_cp7

0x3f5e,	// (0x00003f5e) popup_note_wait_window_g1_ParamLimits

0x3f5e,	// (0x00003f5e) popup_note_wait_window_g1

0x3f6a,	// (0x00003f6a) popup_note_wait_window_g2_ParamLimits

0x3f6a,	// (0x00003f6a) popup_note_wait_window_g2

0x0002,

0xaaba,	// (0x0000aaba) popup_note_wait_window_g_ParamLimits

0xaaba,	// (0x0000aaba) popup_note_wait_window_g

0x3f82,	// (0x00003f82) popup_note_wait_window_t1_ParamLimits

0x3f82,	// (0x00003f82) popup_note_wait_window_t1

0x3fa9,	// (0x00003fa9) popup_note_wait_window_t2_ParamLimits

0x3fa9,	// (0x00003fa9) popup_note_wait_window_t2

0x3fc7,	// (0x00003fc7) popup_note_wait_window_t3_ParamLimits

0x3fc7,	// (0x00003fc7) popup_note_wait_window_t3

0x3fda,	// (0x00003fda) popup_note_wait_window_t4_ParamLimits

0x3fda,	// (0x00003fda) popup_note_wait_window_t4

0x0004,

0xaac1,	// (0x0000aac1) popup_note_wait_window_t_ParamLimits

0xaac1,	// (0x0000aac1) popup_note_wait_window_t

0x3fff,	// (0x00003fff) wait_bar_pane_ParamLimits

0x3fff,	// (0x00003fff) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xa987,	// (0x0000a987) wait_anim_pane_g

0x3ed2,	// (0x00003ed2) wait_border_pane_g1

0x3edd,	// (0x00003edd) wait_border_pane_g2

0x3ee6,	// (0x00003ee6) wait_border_pane_g3

0x0002,

0xaab3,	// (0x0000aab3) wait_border_pane_g

0x3e2e,	// (0x00003e2e) bg_popup_window_pane_cp16_ParamLimits

0x3e2e,	// (0x00003e2e) bg_popup_window_pane_cp16

0x3e3c,	// (0x00003e3c) indicator_popup_pane_cp4_ParamLimits

0x3e3c,	// (0x00003e3c) indicator_popup_pane_cp4

0x3e50,	// (0x00003e50) popup_query_data_window_t1_ParamLimits

0x3e50,	// (0x00003e50) popup_query_data_window_t1

0x3e62,	// (0x00003e62) popup_query_data_window_t2_ParamLimits

0x3e62,	// (0x00003e62) popup_query_data_window_t2

0x3e7b,	// (0x00003e7b) popup_query_data_window_t3_ParamLimits

0x3e7b,	// (0x00003e7b) popup_query_data_window_t3

0x0002,

0xaaac,	// (0x0000aaac) popup_query_data_window_t_ParamLimits

0xaaac,	// (0x0000aaac) popup_query_data_window_t

0x3e95,	// (0x00003e95) query_popup_data_pane_ParamLimits

0x3e95,	// (0x00003e95) query_popup_data_pane

0x3ea9,	// (0x00003ea9) query_popup_data_pane_cp1_ParamLimits

0x3ea9,	// (0x00003ea9) query_popup_data_pane_cp1

0x08eb,	// (0x000008eb) bg_popup_window_pane_cp10_ParamLimits

0x08eb,	// (0x000008eb) bg_popup_window_pane_cp10

0x3d91,	// (0x00003d91) indicator_popup_pane_ParamLimits

0x3d91,	// (0x00003d91) indicator_popup_pane

0x094c,	// (0x0000094c) popup_query_code_window_t1_ParamLimits

0x094c,	// (0x0000094c) popup_query_code_window_t1

0x3da9,	// (0x00003da9) popup_query_code_window_t2_ParamLimits

0x3da9,	// (0x00003da9) popup_query_code_window_t2

0x3de7,	// (0x00003de7) popup_query_code_window_t3_ParamLimits

0x3de7,	// (0x00003de7) popup_query_code_window_t3

0x0002,

0xaaa5,	// (0x0000aaa5) popup_query_code_window_t_ParamLimits

0xaaa5,	// (0x0000aaa5) popup_query_code_window_t

0x3e16,	// (0x00003e16) query_popup_pane_ParamLimits

0x3e16,	// (0x00003e16) query_popup_pane

0x08eb,	// (0x000008eb) bg_popup_window_pane_cp15_ParamLimits

0x08eb,	// (0x000008eb) bg_popup_window_pane_cp15

0x090b,	// (0x0000090b) indicator_popup_pane_cp1_ParamLimits

0x090b,	// (0x0000090b) indicator_popup_pane_cp1

0x091e,	// (0x0000091e) indicator_popup_pane_cp2_ParamLimits

0x091e,	// (0x0000091e) indicator_popup_pane_cp2

0x0939,	// (0x00000939) popup_query_data_code_window_g1_ParamLimits

0x0939,	// (0x00000939) popup_query_data_code_window_g1

0x094c,	// (0x0000094c) popup_query_data_code_window_t1_ParamLimits

0x094c,	// (0x0000094c) popup_query_data_code_window_t1

0x095e,	// (0x0000095e) popup_query_data_code_window_t2_ParamLimits

0x095e,	// (0x0000095e) popup_query_data_code_window_t2

0x0970,	// (0x00000970) popup_query_data_code_window_t3_ParamLimits

0x0970,	// (0x00000970) popup_query_data_code_window_t3

0x0986,	// (0x00000986) popup_query_data_code_window_t4_ParamLimits

0x0986,	// (0x00000986) popup_query_data_code_window_t4

0x0003,

0xa813,	// (0x0000a813) popup_query_data_code_window_t_ParamLimits

0xa813,	// (0x0000a813) popup_query_data_code_window_t

0x2438,	// (0x00002438) list_single_midp_graphic_pane_g3

0x09a0,	// (0x000009a0) query_popup_data_pane_cp2_ParamLimits

0x09b3,	// (0x000009b3) query_popup_pane_cp2_ParamLimits

0x09b3,	// (0x000009b3) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3d65,	// (0x00003d65) heading_pane_cp5

0x0aa3,	// (0x00000aa3) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09ce,	// (0x000009ce) query_popup_pane_t1

0x09dc,	// (0x000009dc) list_popup_info_pane_ParamLimits

0x09dc,	// (0x000009dc) list_popup_info_pane

0x09eb,	// (0x000009eb) listscroll_popup_info_pane_g1

0x09f3,	// (0x000009f3) scroll_pane_cp7

0x09fd,	// (0x000009fd) popup_info_list_pane_t1_ParamLimits

0x09fd,	// (0x000009fd) popup_info_list_pane_t1

0x0a17,	// (0x00000a17) popup_info_list_pane_t2_ParamLimits

0x0a17,	// (0x00000a17) popup_info_list_pane_t2

0x0001,

0xa81c,	// (0x0000a81c) popup_info_list_pane_t_ParamLimits

0xa81c,	// (0x0000a81c) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x54aa,	// (0x000054aa) find_popup_pane

0x050f,	// (0x0000050f) bg_popup_window_pane_cp3

0x0a31,	// (0x00000a31) heading_pane_cp3

0x0a3d,	// (0x00000a3d) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb601,	// (0x0000b601) heading_pane_cp4

0x0aa3,	// (0x00000aa3) listscroll_popup_colour_pane

0xb60b,	// (0x0000b60b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb60b,	// (0x0000b60b) cell_large_graphic_colour_none_popup_pane

0xb61f,	// (0x0000b61f) grid_large_graphic_colour_popup_pane_ParamLimits

0xb61f,	// (0x0000b61f) grid_large_graphic_colour_popup_pane

0xb64b,	// (0x0000b64b) listscroll_popup_colour_pane_g1_ParamLimits

0xb64b,	// (0x0000b64b) listscroll_popup_colour_pane_g1

0xb662,	// (0x0000b662) listscroll_popup_colour_pane_g2_ParamLimits

0xb662,	// (0x0000b662) listscroll_popup_colour_pane_g2

0xb679,	// (0x0000b679) listscroll_popup_colour_pane_g3_ParamLimits

0xb679,	// (0x0000b679) listscroll_popup_colour_pane_g3

0xb689,	// (0x0000b689) listscroll_popup_colour_pane_g4_ParamLimits

0xb689,	// (0x0000b689) listscroll_popup_colour_pane_g4

0x0003,

0xf49b,	// (0x0000f49b) listscroll_popup_colour_pane_g_ParamLimits

0xf49b,	// (0x0000f49b) listscroll_popup_colour_pane_g

0x0b3d,	// (0x00000b3d) scroll_pane_cp6_ParamLimits

0x0b3d,	// (0x00000b3d) scroll_pane_cp6

0xb69d,	// (0x0000b69d) cell_large_graphic_colour_popup_pane_ParamLimits

0xb69d,	// (0x0000b69d) cell_large_graphic_colour_popup_pane

0x0b74,	// (0x00000b74) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b83,	// (0x00000b83) cell_large_graphic_colour_popup_pane_g1

0x0b8b,	// (0x00000b8b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa82a,	// (0x0000a82a) cell_large_graphic_colour_popup_pane_g

0x0b93,	// (0x00000b93) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b9c,	// (0x00000b9c) grid_highlight_pane_cp4

0x0ba4,	// (0x00000ba4) bg_popup_window_pane_cp8_ParamLimits

0x0ba4,	// (0x00000ba4) bg_popup_window_pane_cp8

0x0bbf,	// (0x00000bbf) popup_snote_single_text_window_g1_ParamLimits

0x0bbf,	// (0x00000bbf) popup_snote_single_text_window_g1

0x0bd1,	// (0x00000bd1) popup_snote_single_text_window_t1_ParamLimits

0x0bd1,	// (0x00000bd1) popup_snote_single_text_window_t1

0x0be4,	// (0x00000be4) popup_snote_single_text_window_t2_ParamLimits

0x0be4,	// (0x00000be4) popup_snote_single_text_window_t2

0x0bf7,	// (0x00000bf7) popup_snote_single_text_window_t3_ParamLimits

0x0bf7,	// (0x00000bf7) popup_snote_single_text_window_t3

0x0c30,	// (0x00000c30) popup_snote_single_text_window_t4_ParamLimits

0x0c30,	// (0x00000c30) popup_snote_single_text_window_t4

0x0c64,	// (0x00000c64) popup_snote_single_text_window_t5_ParamLimits

0x0c64,	// (0x00000c64) popup_snote_single_text_window_t5

0x0004,

0xa82f,	// (0x0000a82f) popup_snote_single_text_window_t_ParamLimits

0xa82f,	// (0x0000a82f) popup_snote_single_text_window_t

0x0c93,	// (0x00000c93) bg_popup_window_pane_cp9_ParamLimits

0x0c93,	// (0x00000c93) bg_popup_window_pane_cp9

0x0bbf,	// (0x00000bbf) popup_snote_single_graphic_window_g1_ParamLimits

0x0bbf,	// (0x00000bbf) popup_snote_single_graphic_window_g1

0x0ca1,	// (0x00000ca1) popup_snote_single_graphic_window_g2_ParamLimits

0x0ca1,	// (0x00000ca1) popup_snote_single_graphic_window_g2

0x0001,

0xa83a,	// (0x0000a83a) popup_snote_single_graphic_window_g_ParamLimits

0xa83a,	// (0x0000a83a) popup_snote_single_graphic_window_g

0x0cad,	// (0x00000cad) popup_snote_single_graphic_window_t1_ParamLimits

0x0cad,	// (0x00000cad) popup_snote_single_graphic_window_t1

0x0cc0,	// (0x00000cc0) popup_snote_single_graphic_window_t2_ParamLimits

0x0cc0,	// (0x00000cc0) popup_snote_single_graphic_window_t2

0x0cd3,	// (0x00000cd3) popup_snote_single_graphic_window_t3_ParamLimits

0x0cd3,	// (0x00000cd3) popup_snote_single_graphic_window_t3

0x0d0c,	// (0x00000d0c) popup_snote_single_graphic_window_t4_ParamLimits

0x0d0c,	// (0x00000d0c) popup_snote_single_graphic_window_t4

0x0d40,	// (0x00000d40) popup_snote_single_graphic_window_t5_ParamLimits

0x0d40,	// (0x00000d40) popup_snote_single_graphic_window_t5

0x0004,

0xa83f,	// (0x0000a83f) popup_snote_single_graphic_window_t_ParamLimits

0xa83f,	// (0x0000a83f) popup_snote_single_graphic_window_t

0x5330,	// (0x00005330) grid_graphic_popup_pane_ParamLimits

0x5330,	// (0x00005330) grid_graphic_popup_pane

0x535e,	// (0x0000535e) listscroll_popup_graphic_pane_g1_ParamLimits

0x535e,	// (0x0000535e) listscroll_popup_graphic_pane_g1

0xd436,	// (0x0000d436) listscroll_popup_graphic_pane_g2_ParamLimits

0xd436,	// (0x0000d436) listscroll_popup_graphic_pane_g2

0x0001,

0xf626,	// (0x0000f626) listscroll_popup_graphic_pane_g_ParamLimits

0xf626,	// (0x0000f626) listscroll_popup_graphic_pane_g

0x5386,	// (0x00005386) scroll_pane_cp5

0xd3f6,	// (0x0000d3f6) cell_graphic_popup_pane_ParamLimits

0xd3f6,	// (0x0000d3f6) cell_graphic_popup_pane

0x52b9,	// (0x000052b9) cell_graphic_popup_pane_g1

0x52c1,	// (0x000052c1) cell_graphic_popup_pane_g2

0x0b93,	// (0x00000b93) cell_graphic_popup_pane_g3

0x0002,

0xac1b,	// (0x0000ac1b) cell_graphic_popup_pane_g

0x52ca,	// (0x000052ca) cell_graphic_popup_pane_t2

0x0b9c,	// (0x00000b9c) grid_highlight_pane_cp3

0x0d81,	// (0x00000d81) list_gen_pane_ParamLimits

0x0d81,	// (0x00000d81) list_gen_pane

0x0db3,	// (0x00000db3) scroll_pane

0xd3b1,	// (0x0000d3b1) bg_list_pane_g1_ParamLimits

0xd3b1,	// (0x0000d3b1) bg_list_pane_g1

0x5236,	// (0x00005236) bg_list_pane_g2_ParamLimits

0x5236,	// (0x00005236) bg_list_pane_g2

0x5249,	// (0x00005249) bg_list_pane_g3_ParamLimits

0x5249,	// (0x00005249) bg_list_pane_g3

0x525b,	// (0x0000525b) bg_list_pane_g4_ParamLimits

0x525b,	// (0x0000525b) bg_list_pane_g4

0xd3cc,	// (0x0000d3cc) bg_list_pane_g5_ParamLimits

0xd3cc,	// (0x0000d3cc) bg_list_pane_g5

0x0004,

0xf61b,	// (0x0000f61b) bg_list_pane_g_ParamLimits

0xf61b,	// (0x0000f61b) bg_list_pane_g

0xd34e,	// (0x0000d34e) list_double2_graphic_large_graphic_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_double2_graphic_large_graphic_pane

0xd34e,	// (0x0000d34e) list_double2_graphic_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_double2_graphic_pane

0xd34e,	// (0x0000d34e) list_double2_large_graphic_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_double2_large_graphic_pane

0xd34e,	// (0x0000d34e) list_double2_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_double2_pane

0xd34e,	// (0x0000d34e) list_double_graphic_heading_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_double_graphic_heading_pane

0xd34e,	// (0x0000d34e) list_double_graphic_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_double_graphic_pane

0xd34e,	// (0x0000d34e) list_double_heading_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_double_heading_pane

0xd34e,	// (0x0000d34e) list_double_large_graphic_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_double_large_graphic_pane

0xd34e,	// (0x0000d34e) list_double_number_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_double_number_pane

0xd34e,	// (0x0000d34e) list_double_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_double_pane

0xd34e,	// (0x0000d34e) list_double_time_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_double_time_pane

0xd34e,	// (0x0000d34e) list_setting_number_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_setting_number_pane

0xd34e,	// (0x0000d34e) list_setting_pane_ParamLimits

0xd34e,	// (0x0000d34e) list_setting_pane

0xd362,	// (0x0000d362) list_single_2graphic_pane_ParamLimits

0xd362,	// (0x0000d362) list_single_2graphic_pane

0xd362,	// (0x0000d362) list_single_graphic_heading_pane_ParamLimits

0xd362,	// (0x0000d362) list_single_graphic_heading_pane

0xd362,	// (0x0000d362) list_single_graphic_pane_ParamLimits

0xd362,	// (0x0000d362) list_single_graphic_pane

0xd362,	// (0x0000d362) list_single_heading_pane_ParamLimits

0xd362,	// (0x0000d362) list_single_heading_pane

0xd362,	// (0x0000d362) list_single_large_graphic_pane_ParamLimits

0xd362,	// (0x0000d362) list_single_large_graphic_pane

0xd362,	// (0x0000d362) list_single_number_heading_pane_ParamLimits

0xd362,	// (0x0000d362) list_single_number_heading_pane

0xd362,	// (0x0000d362) list_single_number_pane_ParamLimits

0xd362,	// (0x0000d362) list_single_number_pane

0xd362,	// (0x0000d362) list_single_pane_ParamLimits

0xd362,	// (0x0000d362) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x257f,	// (0x0000257f) list_single_pane_g1_ParamLimits

0x257f,	// (0x0000257f) list_single_pane_g1

0x3621,	// (0x00003621) list_single_pane_g2_ParamLimits

0x3621,	// (0x00003621) list_single_pane_g2

0x0001,

0xaa58,	// (0x0000aa58) list_single_pane_g_ParamLimits

0xaa58,	// (0x0000aa58) list_single_pane_g

0x5a92,	// (0x00005a92) list_single_pane_t1_ParamLimits

0x5a92,	// (0x00005a92) list_single_pane_t1

0x257f,	// (0x0000257f) list_single_number_pane_g1_ParamLimits

0x257f,	// (0x0000257f) list_single_number_pane_g1

0x3621,	// (0x00003621) list_single_number_pane_g2_ParamLimits

0x3621,	// (0x00003621) list_single_number_pane_g2

0x0001,

0xaa58,	// (0x0000aa58) list_single_number_pane_g_ParamLimits

0xaa58,	// (0x0000aa58) list_single_number_pane_g

0x370b,	// (0x0000370b) list_single_number_pane_t1_ParamLimits

0x370b,	// (0x0000370b) list_single_number_pane_t1

0xd16c,	// (0x0000d16c) list_single_number_pane_t2_ParamLimits

0xd16c,	// (0x0000d16c) list_single_number_pane_t2

0x0001,

0xf5fe,	// (0x0000f5fe) list_single_number_pane_t_ParamLimits

0xf5fe,	// (0x0000f5fe) list_single_number_pane_t

0x7258,	// (0x00007258) list_single_graphic_pane_g1_ParamLimits

0x7258,	// (0x00007258) list_single_graphic_pane_g1

0x257f,	// (0x0000257f) list_single_graphic_pane_g2_ParamLimits

0x257f,	// (0x0000257f) list_single_graphic_pane_g2

0x3621,	// (0x00003621) list_single_graphic_pane_g3_ParamLimits

0x3621,	// (0x00003621) list_single_graphic_pane_g3

0x0002,

0xf4a4,	// (0x0000f4a4) list_single_graphic_pane_g_ParamLimits

0xf4a4,	// (0x0000f4a4) list_single_graphic_pane_g

0xb6c8,	// (0x0000b6c8) list_single_graphic_pane_t1_ParamLimits

0xb6c8,	// (0x0000b6c8) list_single_graphic_pane_t1

0x257f,	// (0x0000257f) list_single_heading_pane_g1_ParamLimits

0x257f,	// (0x0000257f) list_single_heading_pane_g1

0x3621,	// (0x00003621) list_single_heading_pane_g2_ParamLimits

0x3621,	// (0x00003621) list_single_heading_pane_g2

0x0001,

0xaa58,	// (0x0000aa58) list_single_heading_pane_g_ParamLimits

0xaa58,	// (0x0000aa58) list_single_heading_pane_g

0x5ab4,	// (0x00005ab4) list_single_heading_pane_t1_ParamLimits

0x5ab4,	// (0x00005ab4) list_single_heading_pane_t1

0xb6de,	// (0x0000b6de) list_single_heading_pane_t2_ParamLimits

0xb6de,	// (0x0000b6de) list_single_heading_pane_t2

0x0001,

0xf4ab,	// (0x0000f4ab) list_single_heading_pane_t_ParamLimits

0xf4ab,	// (0x0000f4ab) list_single_heading_pane_t

0x257f,	// (0x0000257f) list_single_number_heading_pane_g1_ParamLimits

0x257f,	// (0x0000257f) list_single_number_heading_pane_g1

0x3621,	// (0x00003621) list_single_number_heading_pane_g2_ParamLimits

0x3621,	// (0x00003621) list_single_number_heading_pane_g2

0x0001,

0xaa58,	// (0x0000aa58) list_single_number_heading_pane_g_ParamLimits

0xaa58,	// (0x0000aa58) list_single_number_heading_pane_g

0x5ab4,	// (0x00005ab4) list_single_number_heading_pane_t1_ParamLimits

0x5ab4,	// (0x00005ab4) list_single_number_heading_pane_t1

0xb6f0,	// (0x0000b6f0) list_single_number_heading_pane_t2_ParamLimits

0xb6f0,	// (0x0000b6f0) list_single_number_heading_pane_t2

0x5a6c,	// (0x00005a6c) list_single_number_heading_pane_t3_ParamLimits

0x5a6c,	// (0x00005a6c) list_single_number_heading_pane_t3

0x0002,

0xf4b0,	// (0x0000f4b0) list_single_number_heading_pane_t_ParamLimits

0xf4b0,	// (0x0000f4b0) list_single_number_heading_pane_t

0x3615,	// (0x00003615) list_single_graphic_heading_pane_g1_ParamLimits

0x3615,	// (0x00003615) list_single_graphic_heading_pane_g1

0xb702,	// (0x0000b702) list_single_graphic_heading_pane_g4_ParamLimits

0xb702,	// (0x0000b702) list_single_graphic_heading_pane_g4

0x3621,	// (0x00003621) list_single_graphic_heading_pane_g5_ParamLimits

0x3621,	// (0x00003621) list_single_graphic_heading_pane_g5

0x0002,

0xf4b7,	// (0x0000f4b7) list_single_graphic_heading_pane_g_ParamLimits

0xf4b7,	// (0x0000f4b7) list_single_graphic_heading_pane_g

0x5ab4,	// (0x00005ab4) list_single_graphic_heading_pane_t1_ParamLimits

0x5ab4,	// (0x00005ab4) list_single_graphic_heading_pane_t1

0xb713,	// (0x0000b713) list_single_graphic_heading_pane_t2_ParamLimits

0xb713,	// (0x0000b713) list_single_graphic_heading_pane_t2

0x0001,

0xf4be,	// (0x0000f4be) list_single_graphic_heading_pane_t_ParamLimits

0xf4be,	// (0x0000f4be) list_single_graphic_heading_pane_t

0x5aa8,	// (0x00005aa8) list_single_large_graphic_pane_g1_ParamLimits

0x5aa8,	// (0x00005aa8) list_single_large_graphic_pane_g1

0x257f,	// (0x0000257f) list_single_large_graphic_pane_g2_ParamLimits

0x257f,	// (0x0000257f) list_single_large_graphic_pane_g2

0x3621,	// (0x00003621) list_single_large_graphic_pane_g3_ParamLimits

0x3621,	// (0x00003621) list_single_large_graphic_pane_g3

0x0002,

0xacab,	// (0x0000acab) list_single_large_graphic_pane_g_ParamLimits

0xacab,	// (0x0000acab) list_single_large_graphic_pane_g

0x3edd,	// (0x00003edd) wait_border_pane_g2_copy1

0xb725,	// (0x0000b725) list_single_large_graphic_pane_g4_cp2

0x5ab4,	// (0x00005ab4) list_single_large_graphic_pane_t1_ParamLimits

0x5ab4,	// (0x00005ab4) list_single_large_graphic_pane_t1

0xb72d,	// (0x0000b72d) list_double_pane_g1_ParamLimits

0xb72d,	// (0x0000b72d) list_double_pane_g1

0xb739,	// (0x0000b739) list_double_pane_g2_ParamLimits

0xb739,	// (0x0000b739) list_double_pane_g2

0x0001,

0xf4c3,	// (0x0000f4c3) list_double_pane_g_ParamLimits

0xf4c3,	// (0x0000f4c3) list_double_pane_g

0xb745,	// (0x0000b745) list_double_pane_t1_ParamLimits

0xb745,	// (0x0000b745) list_double_pane_t1

0xb75b,	// (0x0000b75b) list_double_pane_t2_ParamLimits

0xb75b,	// (0x0000b75b) list_double_pane_t2

0x0001,

0xf4c8,	// (0x0000f4c8) list_double_pane_t_ParamLimits

0xf4c8,	// (0x0000f4c8) list_double_pane_t

0xb76d,	// (0x0000b76d) list_double2_pane_g1_ParamLimits

0xb76d,	// (0x0000b76d) list_double2_pane_g1

0xb77e,	// (0x0000b77e) list_double2_pane_g2_ParamLimits

0xb77e,	// (0x0000b77e) list_double2_pane_g2

0x0001,

0xf4cd,	// (0x0000f4cd) list_double2_pane_g_ParamLimits

0xf4cd,	// (0x0000f4cd) list_double2_pane_g

0xb78a,	// (0x0000b78a) list_double2_pane_t1_ParamLimits

0xb78a,	// (0x0000b78a) list_double2_pane_t1

0xb7a0,	// (0x0000b7a0) list_double2_pane_t2_ParamLimits

0xb7a0,	// (0x0000b7a0) list_double2_pane_t2

0x0001,

0xf4d2,	// (0x0000f4d2) list_double2_pane_t_ParamLimits

0xf4d2,	// (0x0000f4d2) list_double2_pane_t

0xb72d,	// (0x0000b72d) list_double_number_pane_g1_ParamLimits

0xb72d,	// (0x0000b72d) list_double_number_pane_g1

0xb739,	// (0x0000b739) list_double_number_pane_g2_ParamLimits

0xb739,	// (0x0000b739) list_double_number_pane_g2

0x0001,

0xf4c3,	// (0x0000f4c3) list_double_number_pane_g_ParamLimits

0xf4c3,	// (0x0000f4c3) list_double_number_pane_g

0xb7b2,	// (0x0000b7b2) list_double_number_pane_t1_ParamLimits

0xb7b2,	// (0x0000b7b2) list_double_number_pane_t1

0xb7c4,	// (0x0000b7c4) list_double_number_pane_t2_ParamLimits

0xb7c4,	// (0x0000b7c4) list_double_number_pane_t2

0xb7da,	// (0x0000b7da) list_double_number_pane_t3_ParamLimits

0xb7da,	// (0x0000b7da) list_double_number_pane_t3

0x0002,

0xf4d7,	// (0x0000f4d7) list_double_number_pane_t_ParamLimits

0xf4d7,	// (0x0000f4d7) list_double_number_pane_t

0xb7ec,	// (0x0000b7ec) list_double_graphic_pane_g1_ParamLimits

0xb7ec,	// (0x0000b7ec) list_double_graphic_pane_g1

0xb7f8,	// (0x0000b7f8) list_double_graphic_pane_g2_ParamLimits

0xb7f8,	// (0x0000b7f8) list_double_graphic_pane_g2

0xb807,	// (0x0000b807) list_double_graphic_pane_g3_ParamLimits

0xb807,	// (0x0000b807) list_double_graphic_pane_g3

0x0003,

0xf4de,	// (0x0000f4de) list_double_graphic_pane_g_ParamLimits

0xf4de,	// (0x0000f4de) list_double_graphic_pane_g

0xb81f,	// (0x0000b81f) list_double_graphic_pane_t1_ParamLimits

0xb81f,	// (0x0000b81f) list_double_graphic_pane_t1

0xb835,	// (0x0000b835) list_double_graphic_pane_t2_ParamLimits

0xb835,	// (0x0000b835) list_double_graphic_pane_t2

0x0001,

0xf4e7,	// (0x0000f4e7) list_double_graphic_pane_t_ParamLimits

0xf4e7,	// (0x0000f4e7) list_double_graphic_pane_t

0x4559,	// (0x00004559) list_double2_graphic_pane_g1_ParamLimits

0x4559,	// (0x00004559) list_double2_graphic_pane_g1

0x242c,	// (0x0000242c) list_double2_graphic_pane_g2_ParamLimits

0x242c,	// (0x0000242c) list_double2_graphic_pane_g2

0xb77e,	// (0x0000b77e) list_double2_graphic_pane_g3_ParamLimits

0xb77e,	// (0x0000b77e) list_double2_graphic_pane_g3

0x0002,

0xf4ec,	// (0x0000f4ec) list_double2_graphic_pane_g_ParamLimits

0xf4ec,	// (0x0000f4ec) list_double2_graphic_pane_g

0xb847,	// (0x0000b847) list_double2_graphic_pane_t1_ParamLimits

0xb847,	// (0x0000b847) list_double2_graphic_pane_t1

0xb85d,	// (0x0000b85d) list_double2_graphic_pane_t2_ParamLimits

0xb85d,	// (0x0000b85d) list_double2_graphic_pane_t2

0x0001,

0xf4f3,	// (0x0000f4f3) list_double2_graphic_pane_t_ParamLimits

0xf4f3,	// (0x0000f4f3) list_double2_graphic_pane_t

0xb86f,	// (0x0000b86f) list_double_large_graphic_pane_g1_ParamLimits

0xb86f,	// (0x0000b86f) list_double_large_graphic_pane_g1

0xb89a,	// (0x0000b89a) list_double_large_graphic_pane_g2_ParamLimits

0xb89a,	// (0x0000b89a) list_double_large_graphic_pane_g2

0xb739,	// (0x0000b739) list_double_large_graphic_pane_g3_ParamLimits

0xb739,	// (0x0000b739) list_double_large_graphic_pane_g3

0xb8ab,	// (0x0000b8ab) list_double_large_graphic_pane_g4_ParamLimits

0xb8ab,	// (0x0000b8ab) list_double_large_graphic_pane_g4

0x0004,

0xf4f8,	// (0x0000f4f8) list_double_large_graphic_pane_g_ParamLimits

0xf4f8,	// (0x0000f4f8) list_double_large_graphic_pane_g

0xb8be,	// (0x0000b8be) list_double_large_graphic_pane_t1_ParamLimits

0xb8be,	// (0x0000b8be) list_double_large_graphic_pane_t1

0xb8d7,	// (0x0000b8d7) list_double_large_graphic_pane_t2_ParamLimits

0xb8d7,	// (0x0000b8d7) list_double_large_graphic_pane_t2

0x0001,

0xf503,	// (0x0000f503) list_double_large_graphic_pane_t_ParamLimits

0xf503,	// (0x0000f503) list_double_large_graphic_pane_t

0xb8e9,	// (0x0000b8e9) list_double2_large_graphic_pane_g1_ParamLimits

0xb8e9,	// (0x0000b8e9) list_double2_large_graphic_pane_g1

0xb76d,	// (0x0000b76d) list_double2_large_graphic_pane_g2_ParamLimits

0xb76d,	// (0x0000b76d) list_double2_large_graphic_pane_g2

0xb77e,	// (0x0000b77e) list_double2_large_graphic_pane_g3_ParamLimits

0xb77e,	// (0x0000b77e) list_double2_large_graphic_pane_g3

0x0002,

0xf508,	// (0x0000f508) list_double2_large_graphic_pane_g_ParamLimits

0xf508,	// (0x0000f508) list_double2_large_graphic_pane_g

0xb8f5,	// (0x0000b8f5) list_double2_large_graphic_pane_t1_ParamLimits

0xb8f5,	// (0x0000b8f5) list_double2_large_graphic_pane_t1

0xb90b,	// (0x0000b90b) list_double2_large_graphic_pane_t2_ParamLimits

0xb90b,	// (0x0000b90b) list_double2_large_graphic_pane_t2

0x0001,

0xf50f,	// (0x0000f50f) list_double2_large_graphic_pane_t_ParamLimits

0xf50f,	// (0x0000f50f) list_double2_large_graphic_pane_t

0xb91d,	// (0x0000b91d) list_double_heading_pane_g1_ParamLimits

0xb91d,	// (0x0000b91d) list_double_heading_pane_g1

0xb92e,	// (0x0000b92e) list_double_heading_pane_g2_ParamLimits

0xb92e,	// (0x0000b92e) list_double_heading_pane_g2

0x0001,

0xf514,	// (0x0000f514) list_double_heading_pane_g_ParamLimits

0xf514,	// (0x0000f514) list_double_heading_pane_g

0xb93a,	// (0x0000b93a) list_double_heading_pane_t1_ParamLimits

0xb93a,	// (0x0000b93a) list_double_heading_pane_t1

0xb950,	// (0x0000b950) list_double_heading_pane_t2_ParamLimits

0xb950,	// (0x0000b950) list_double_heading_pane_t2

0x0001,

0xf519,	// (0x0000f519) list_double_heading_pane_t_ParamLimits

0xf519,	// (0x0000f519) list_double_heading_pane_t

0x0ff8,	// (0x00000ff8) list_double_graphic_heading_pane_g1_ParamLimits

0x0ff8,	// (0x00000ff8) list_double_graphic_heading_pane_g1

0xb91d,	// (0x0000b91d) list_double_graphic_heading_pane_g2_ParamLimits

0xb91d,	// (0x0000b91d) list_double_graphic_heading_pane_g2

0xb92e,	// (0x0000b92e) list_double_graphic_heading_pane_g3_ParamLimits

0xb92e,	// (0x0000b92e) list_double_graphic_heading_pane_g3

0x0002,

0xf51e,	// (0x0000f51e) list_double_graphic_heading_pane_g_ParamLimits

0xf51e,	// (0x0000f51e) list_double_graphic_heading_pane_g

0xb962,	// (0x0000b962) list_double_graphic_heading_pane_t1_ParamLimits

0xb962,	// (0x0000b962) list_double_graphic_heading_pane_t1

0xb978,	// (0x0000b978) list_double_graphic_heading_pane_t2_ParamLimits

0xb978,	// (0x0000b978) list_double_graphic_heading_pane_t2

0x0001,

0xf525,	// (0x0000f525) list_double_graphic_heading_pane_t_ParamLimits

0xf525,	// (0x0000f525) list_double_graphic_heading_pane_t

0xb89a,	// (0x0000b89a) list_double_time_pane_g1_ParamLimits

0xb89a,	// (0x0000b89a) list_double_time_pane_g1

0xb739,	// (0x0000b739) list_double_time_pane_g2_ParamLimits

0xb739,	// (0x0000b739) list_double_time_pane_g2

0x0001,

0xf52a,	// (0x0000f52a) list_double_time_pane_g_ParamLimits

0xf52a,	// (0x0000f52a) list_double_time_pane_g

0xb98a,	// (0x0000b98a) list_double_time_pane_t1_ParamLimits

0xb98a,	// (0x0000b98a) list_double_time_pane_t1

0xb9a0,	// (0x0000b9a0) list_double_time_pane_t2_ParamLimits

0xb9a0,	// (0x0000b9a0) list_double_time_pane_t2

0xb9b2,	// (0x0000b9b2) list_double_time_pane_t3_ParamLimits

0xb9b2,	// (0x0000b9b2) list_double_time_pane_t3

0xb9c4,	// (0x0000b9c4) list_double_time_pane_t4_ParamLimits

0xb9c4,	// (0x0000b9c4) list_double_time_pane_t4

0x0003,

0xf52f,	// (0x0000f52f) list_double_time_pane_t_ParamLimits

0xf52f,	// (0x0000f52f) list_double_time_pane_t

0x242c,	// (0x0000242c) list_setting_pane_g1_ParamLimits

0x242c,	// (0x0000242c) list_setting_pane_g1

0xb77e,	// (0x0000b77e) list_setting_pane_g2_ParamLimits

0xb77e,	// (0x0000b77e) list_setting_pane_g2

0x0001,

0xf538,	// (0x0000f538) list_setting_pane_g_ParamLimits

0xf538,	// (0x0000f538) list_setting_pane_g

0xb9d6,	// (0x0000b9d6) list_setting_pane_t1_ParamLimits

0xb9d6,	// (0x0000b9d6) list_setting_pane_t1

0xb9ed,	// (0x0000b9ed) list_setting_pane_t2_ParamLimits

0xb9ed,	// (0x0000b9ed) list_setting_pane_t2

0x0002,

0xf53d,	// (0x0000f53d) list_setting_pane_t_ParamLimits

0xf53d,	// (0x0000f53d) list_setting_pane_t

0xba2c,	// (0x0000ba2c) set_value_pane_cp_ParamLimits

0xba2c,	// (0x0000ba2c) set_value_pane_cp

0x242c,	// (0x0000242c) list_setting_number_pane_g1_ParamLimits

0x242c,	// (0x0000242c) list_setting_number_pane_g1

0xb77e,	// (0x0000b77e) list_setting_number_pane_g2_ParamLimits

0xb77e,	// (0x0000b77e) list_setting_number_pane_g2

0x0001,

0xf538,	// (0x0000f538) list_setting_number_pane_g_ParamLimits

0xf538,	// (0x0000f538) list_setting_number_pane_g

0xba3a,	// (0x0000ba3a) list_setting_number_pane_t1_ParamLimits

0xba3a,	// (0x0000ba3a) list_setting_number_pane_t1

0xba4e,	// (0x0000ba4e) list_setting_number_pane_t2_ParamLimits

0xba4e,	// (0x0000ba4e) list_setting_number_pane_t2

0xba65,	// (0x0000ba65) list_setting_number_pane_t3_ParamLimits

0xba65,	// (0x0000ba65) list_setting_number_pane_t3

0x0003,

0xf544,	// (0x0000f544) list_setting_number_pane_t_ParamLimits

0xf544,	// (0x0000f544) list_setting_number_pane_t

0xba2c,	// (0x0000ba2c) set_value_pane_ParamLimits

0xba2c,	// (0x0000ba2c) set_value_pane

0x1292,	// (0x00001292) bg_set_opt_pane_ParamLimits

0x1292,	// (0x00001292) bg_set_opt_pane

0x12b3,	// (0x000012b3) set_value_pane_t1

0x12c1,	// (0x000012c1) slider_set_pane_cp3

0x12ca,	// (0x000012ca) volume_small_pane_cp

0x12d3,	// (0x000012d3) list_form_gen_pane

0x12dc,	// (0x000012dc) scroll_pane_cp8

0xbaa8,	// (0x0000baa8) form_field_data_pane_ParamLimits

0xbaa8,	// (0x0000baa8) form_field_data_pane

0xbac3,	// (0x0000bac3) form_field_data_wide_pane_ParamLimits

0xbac3,	// (0x0000bac3) form_field_data_wide_pane

0xbae7,	// (0x0000bae7) form_field_popup_pane_ParamLimits

0xbae7,	// (0x0000bae7) form_field_popup_pane

0x1364,	// (0x00001364) form_field_popup_wide_pane_ParamLimits

0x1364,	// (0x00001364) form_field_popup_wide_pane

0x1385,	// (0x00001385) form_field_slider_pane_ParamLimits

0x1385,	// (0x00001385) form_field_slider_pane

0x1398,	// (0x00001398) form_field_slider_wide_pane_ParamLimits

0x1398,	// (0x00001398) form_field_slider_wide_pane

0x13ab,	// (0x000013ab) data_form_pane

0xbb13,	// (0x0000bb13) form_field_data_pane_t1

0x13db,	// (0x000013db) input_focus_pane

0x13e9,	// (0x000013e9) data_form_wide_pane

0x1421,	// (0x00001421) form_field_data_wide_pane_t1

0x0bb1,	// (0x00000bb1) input_focus_pane_cp6

0xbb2d,	// (0x0000bb2d) form_field_popup_pane_t1

0x13db,	// (0x000013db) input_focus_pane_cp7

0x145d,	// (0x0000145d) list_form_pane

0x1471,	// (0x00001471) form_field_popup_wide_pane_t1

0x13db,	// (0x000013db) input_focus_pane_cp8

0x1486,	// (0x00001486) list_form_wide_pane

0xbb4f,	// (0x0000bb4f) form_field_slider_pane_t1_ParamLimits

0xbb4f,	// (0x0000bb4f) form_field_slider_pane_t1

0xbb67,	// (0x0000bb67) form_field_slider_pane_t2_ParamLimits

0xbb67,	// (0x0000bb67) form_field_slider_pane_t2

0x0001,

0xf54d,	// (0x0000f54d) form_field_slider_pane_t_ParamLimits

0xf54d,	// (0x0000f54d) form_field_slider_pane_t

0x0835,	// (0x00000835) input_focus_pane_cp9_ParamLimits

0x0835,	// (0x00000835) input_focus_pane_cp9

0xbb7c,	// (0x0000bb7c) slider_cont_pane_ParamLimits

0xbb7c,	// (0x0000bb7c) slider_cont_pane

0x14d7,	// (0x000014d7) form_field_slider_wide_pane_t1_ParamLimits

0x14d7,	// (0x000014d7) form_field_slider_wide_pane_t1

0x14e9,	// (0x000014e9) form_field_slider_wide_pane_t2_ParamLimits

0x14e9,	// (0x000014e9) form_field_slider_wide_pane_t2

0x0001,

0xa90b,	// (0x0000a90b) form_field_slider_wide_pane_t_ParamLimits

0xa90b,	// (0x0000a90b) form_field_slider_wide_pane_t

0x0835,	// (0x00000835) input_focus_pane_cp10_ParamLimits

0x0835,	// (0x00000835) input_focus_pane_cp10

0xbb90,	// (0x0000bb90) slider_cont_pane_cp1_ParamLimits

0xbb90,	// (0x0000bb90) slider_cont_pane_cp1

0xbba4,	// (0x0000bba4) slider_form_pane_cp

0x1517,	// (0x00001517) input_focus_pane_g1

0x151f,	// (0x0000151f) input_focus_pane_g2

0x1527,	// (0x00001527) input_focus_pane_g3

0x152f,	// (0x0000152f) input_focus_pane_g4

0x1537,	// (0x00001537) input_focus_pane_g5

0x153f,	// (0x0000153f) input_focus_pane_g6

0x1547,	// (0x00001547) input_focus_pane_g7

0x154f,	// (0x0000154f) input_focus_pane_g8

0x1557,	// (0x00001557) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xa910,	// (0x0000a910) input_focus_pane_g

0x3ee6,	// (0x00003ee6) wait_border_pane_g3_copy1

0xbbac,	// (0x0000bbac) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd323,	// (0x0000d323) data_form_wide_pane_t1

0x157e,	// (0x0000157e) list_form_graphic_pane_cp_ParamLimits

0x157e,	// (0x0000157e) list_form_graphic_pane_cp

0x50db,	// (0x000050db) slider_form_pane_g1

0x50e4,	// (0x000050e4) slider_form_pane_g2

0x0006,

0xf60c,	// (0x0000f60c) slider_form_pane_g

0xbbc8,	// (0x0000bbc8) list_form_graphic_pane_ParamLimits

0xbbc8,	// (0x0000bbc8) list_form_graphic_pane

0x1590,	// (0x00001590) list_form_graphic_pane_g1

0x1598,	// (0x00001598) list_form_graphic_pane_t1_ParamLimits

0x1598,	// (0x00001598) list_form_graphic_pane_t1

0x050f,	// (0x0000050f) list_highlight_pane_cp5_ParamLimits

0x050f,	// (0x0000050f) list_highlight_pane_cp5

0xbbd9,	// (0x0000bbd9) find_pane_g1

0x15b6,	// (0x000015b6) input_find_pane

0xbbe2,	// (0x0000bbe2) input_find_pane_g1_ParamLimits

0xbbe2,	// (0x0000bbe2) input_find_pane_g1

0xbbee,	// (0x0000bbee) input_find_pane_t1_ParamLimits

0xbbee,	// (0x0000bbee) input_find_pane_t1

0xbc03,	// (0x0000bc03) input_find_pane_t2_ParamLimits

0xbc03,	// (0x0000bc03) input_find_pane_t2

0x0001,

0xf552,	// (0x0000f552) input_find_pane_t_ParamLimits

0xf552,	// (0x0000f552) input_find_pane_t

0x15f5,	// (0x000015f5) input_focus_pane_cp5_ParamLimits

0x15f5,	// (0x000015f5) input_focus_pane_cp5

0xbc24,	// (0x0000bc24) bg_popup_window_pane_cp2_ParamLimits

0xbc24,	// (0x0000bc24) bg_popup_window_pane_cp2

0xbc31,	// (0x0000bc31) listscroll_menu_pane_ParamLimits

0xbc31,	// (0x0000bc31) listscroll_menu_pane

0xbc3d,	// (0x0000bc3d) popup_submenu_window_ParamLimits

0xbc3d,	// (0x0000bc3d) popup_submenu_window

0x1658,	// (0x00001658) find_popup_pane_g1

0x1660,	// (0x00001660) input_popup_find_pane_cp

0x15f5,	// (0x000015f5) input_focus_pane_cp4_ParamLimits

0x15f5,	// (0x000015f5) input_focus_pane_cp4

0x1678,	// (0x00001678) input_popup_find_pane_t1_ParamLimits

0x1678,	// (0x00001678) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x16a6,	// (0x000016a6) listscroll_popup_sub_pane

0x16ae,	// (0x000016ae) list_submenu_pane_ParamLimits

0x16ae,	// (0x000016ae) list_submenu_pane

0x16bf,	// (0x000016bf) scroll_pane_cp4

0x16c7,	// (0x000016c7) list_single_popup_submenu_pane_ParamLimits

0x16c7,	// (0x000016c7) list_single_popup_submenu_pane

0x16dc,	// (0x000016dc) list_single_popup_submenu_pane_g1

0x16e4,	// (0x000016e4) list_single_popup_submenu_pane_t1_ParamLimits

0x16e4,	// (0x000016e4) list_single_popup_submenu_pane_t1

0x0835,	// (0x00000835) bg_active_tab_pane_cp1_ParamLimits

0x0835,	// (0x00000835) bg_active_tab_pane_cp1

0xbc7b,	// (0x0000bc7b) tabs_2_active_pane_g1

0xbc83,	// (0x0000bc83) tabs_2_active_pane_t1

0x0835,	// (0x00000835) bg_passive_tab_pane_cp1_ParamLimits

0x0835,	// (0x00000835) bg_passive_tab_pane_cp1

0xbc7b,	// (0x0000bc7b) tabs_2_passive_pane_g1

0xbc83,	// (0x0000bc83) tabs_2_passive_pane_t1

0x050f,	// (0x0000050f) bg_active_tab_pane_cp4

0xbc95,	// (0x0000bc95) tabs_2_long_active_pane_t1

0x2b93,	// (0x00002b93) bg_passive_tab_pane_cp4

0x37ea,	// (0x000037ea) list_single_midp_graphic_pane_g4_ParamLimits

0x050f,	// (0x0000050f) bg_active_tab_pane_cp5

0xbca8,	// (0x0000bca8) tabs_3_long_active_pane_t1

0x2b93,	// (0x00002b93) bg_passive_tab_pane_cp5

0x37ea,	// (0x000037ea) list_single_midp_graphic_pane_g4

0x050f,	// (0x0000050f) bg_popup_window_pane_cp13_ParamLimits

0x050f,	// (0x0000050f) bg_popup_window_pane_cp13

0x175b,	// (0x0000175b) listscroll_popup_fast_pane_ParamLimits

0x175b,	// (0x0000175b) listscroll_popup_fast_pane

0x176a,	// (0x0000176a) grid_popup_fast_pane_ParamLimits

0x176a,	// (0x0000176a) grid_popup_fast_pane

0x177c,	// (0x0000177c) scroll_pane_cp9_ParamLimits

0x177c,	// (0x0000177c) scroll_pane_cp9

0x72d2,	// (0x000072d2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x72d2,	// (0x000072d2) list_single_graphic_hl_pane_t1_cp2

0x17a0,	// (0x000017a0) input_focus_pane_cp20_ParamLimits

0x17a0,	// (0x000017a0) input_focus_pane_cp20

0x17ae,	// (0x000017ae) query_popup_data_pane_t1_ParamLimits

0x17ae,	// (0x000017ae) query_popup_data_pane_t1

0x17c1,	// (0x000017c1) query_popup_data_pane_t2_ParamLimits

0x17c1,	// (0x000017c1) query_popup_data_pane_t2

0x1807,	// (0x00001807) query_popup_data_pane_t3_ParamLimits

0x1807,	// (0x00001807) query_popup_data_pane_t3

0x1848,	// (0x00001848) query_popup_data_pane_t4_ParamLimits

0x1848,	// (0x00001848) query_popup_data_pane_t4

0x1884,	// (0x00001884) query_popup_data_pane_t5_ParamLimits

0x1884,	// (0x00001884) query_popup_data_pane_t5

0x0004,

0xa92a,	// (0x0000a92a) query_popup_data_pane_t_ParamLimits

0xa92a,	// (0x0000a92a) query_popup_data_pane_t

0x1517,	// (0x00001517) bg_set_opt_pane_g1

0x151f,	// (0x0000151f) bg_set_opt_pane_g2

0x1527,	// (0x00001527) bg_set_opt_pane_g3

0x152f,	// (0x0000152f) bg_set_opt_pane_g4

0x1537,	// (0x00001537) bg_set_opt_pane_g5

0x153f,	// (0x0000153f) bg_set_opt_pane_g6

0x1547,	// (0x00001547) bg_set_opt_pane_g7

0x154f,	// (0x0000154f) bg_set_opt_pane_g8

0x1557,	// (0x00001557) bg_set_opt_pane_g9

0x0008,

0xa935,	// (0x0000a935) bg_set_opt_pane_g

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

0x223b,	// (0x0000223b) battery_pane_stacon_ParamLimits

0x223b,	// (0x0000223b) battery_pane_stacon

0x227f,	// (0x0000227f) control_bottom_pane_stacon_ParamLimits

0x227f,	// (0x0000227f) control_bottom_pane_stacon

0x22a2,	// (0x000022a2) navi_pane_stacon_ParamLimits

0x22a2,	// (0x000022a2) navi_pane_stacon

0x22c5,	// (0x000022c5) stacon_bottom_pane_g1_ParamLimits

0x22c5,	// (0x000022c5) stacon_bottom_pane_g1

0x18bb,	// (0x000018bb) aid_levels_signal_lsc_ParamLimits

0x18bb,	// (0x000018bb) aid_levels_signal_lsc

0x18d2,	// (0x000018d2) signal_pane_stacon_g1_ParamLimits

0x18d2,	// (0x000018d2) signal_pane_stacon_g1

0x18e6,	// (0x000018e6) signal_pane_stacon_g2_ParamLimits

0x18e6,	// (0x000018e6) signal_pane_stacon_g2

0x0001,

0xa948,	// (0x0000a948) signal_pane_stacon_g_ParamLimits

0xa948,	// (0x0000a948) signal_pane_stacon_g

0x1928,	// (0x00001928) title_pane_stacon_t1_ParamLimits

0x1928,	// (0x00001928) title_pane_stacon_t1

0x194d,	// (0x0000194d) uni_indicator_pane_stacon_g1

0x1957,	// (0x00001957) uni_indicator_pane_stacon_g2

0x1961,	// (0x00001961) uni_indicator_pane_stacon_g3

0x196b,	// (0x0000196b) uni_indicator_pane_stacon_g4

0x0003,

0xa954,	// (0x0000a954) uni_indicator_pane_stacon_g

0x1975,	// (0x00001975) control_top_pane_stacon_g1

0x197d,	// (0x0000197d) control_top_pane_stacon_t1_ParamLimits

0x197d,	// (0x0000197d) control_top_pane_stacon_t1

0x19b4,	// (0x000019b4) aid_levels_battery_lsc_ParamLimits

0x19b4,	// (0x000019b4) aid_levels_battery_lsc

0x19cc,	// (0x000019cc) battery_pane_stacon_g1_ParamLimits

0x19cc,	// (0x000019cc) battery_pane_stacon_g1

0x19df,	// (0x000019df) battery_pane_stacon_g2_ParamLimits

0x19df,	// (0x000019df) battery_pane_stacon_g2

0x0001,

0xa95d,	// (0x0000a95d) battery_pane_stacon_g_ParamLimits

0xa95d,	// (0x0000a95d) battery_pane_stacon_g

0x1a1d,	// (0x00001a1d) navi_icon_pane_stacon

0x1a31,	// (0x00001a31) navi_navi_pane_stacon

0x1a1d,	// (0x00001a1d) navi_text_pane_stacon

0x1975,	// (0x00001975) control_bottom_pane_stacon_g1

0x1a47,	// (0x00001a47) control_bottom_pane_stacon_t1_ParamLimits

0x1a47,	// (0x00001a47) control_bottom_pane_stacon_t1

0xbcba,	// (0x0000bcba) grid_app_pane_ParamLimits

0xbcba,	// (0x0000bcba) grid_app_pane

0xbcf2,	// (0x0000bcf2) scroll_pane_cp15_ParamLimits

0xbcf2,	// (0x0000bcf2) scroll_pane_cp15

0xbd0f,	// (0x0000bd0f) cell_app_pane_ParamLimits

0xbd0f,	// (0x0000bd0f) cell_app_pane

0xbd50,	// (0x0000bd50) cell_app_pane_g1_ParamLimits

0xbd50,	// (0x0000bd50) cell_app_pane_g1

0x1b21,	// (0x00001b21) cell_app_pane_g2_ParamLimits

0x1b21,	// (0x00001b21) cell_app_pane_g2

0x0001,

0xf557,	// (0x0000f557) cell_app_pane_g_ParamLimits

0xf557,	// (0x0000f557) cell_app_pane_g

0x1b2d,	// (0x00001b2d) cell_app_pane_t1_ParamLimits

0x1b2d,	// (0x00001b2d) cell_app_pane_t1

0x1b3f,	// (0x00001b3f) grid_highlight_pane_ParamLimits

0x1b3f,	// (0x00001b3f) grid_highlight_pane

0x1517,	// (0x00001517) cell_highlight_pane_g1

0x151f,	// (0x0000151f) cell_highlight_pane_g2

0x1527,	// (0x00001527) cell_highlight_pane_g3

0x152f,	// (0x0000152f) cell_highlight_pane_g4

0x1537,	// (0x00001537) cell_highlight_pane_g5

0x153f,	// (0x0000153f) cell_highlight_pane_g6

0x1547,	// (0x00001547) cell_highlight_pane_g7

0x154f,	// (0x0000154f) cell_highlight_pane_g8

0x1557,	// (0x00001557) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xa910,	// (0x0000a910) cell_highlight_pane_g

0x1b63,	// (0x00001b63) bg_scroll_pane

0x1b82,	// (0x00001b82) scroll_handle_pane

0x1bd3,	// (0x00001bd3) scroll_bg_pane_g1

0x1be8,	// (0x00001be8) scroll_bg_pane_g2

0x1c00,	// (0x00001c00) scroll_bg_pane_g3

0x0002,

0xa967,	// (0x0000a967) scroll_bg_pane_g

0x1c15,	// (0x00001c15) scroll_handle_focus_pane_ParamLimits

0x1c15,	// (0x00001c15) scroll_handle_focus_pane

0x1bd3,	// (0x00001bd3) scroll_handle_pane_g1

0x1c22,	// (0x00001c22) scroll_handle_pane_g2

0x1c00,	// (0x00001c00) scroll_handle_pane_g3

0x0002,

0xa96e,	// (0x0000a96e) scroll_handle_pane_g

0x15f5,	// (0x000015f5) bg_popup_sub_pane_cp21_ParamLimits

0x15f5,	// (0x000015f5) bg_popup_sub_pane_cp21

0x1c36,	// (0x00001c36) popup_fep_japan_predictive_window_t1_ParamLimits

0x1c36,	// (0x00001c36) popup_fep_japan_predictive_window_t1

0x1c4d,	// (0x00001c4d) popup_fep_japan_predictive_window_t2_ParamLimits

0x1c4d,	// (0x00001c4d) popup_fep_japan_predictive_window_t2

0x1c80,	// (0x00001c80) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c80,	// (0x00001c80) popup_fep_japan_predictive_window_t3

0x0002,

0xa975,	// (0x0000a975) popup_fep_japan_predictive_window_t_ParamLimits

0xa975,	// (0x0000a975) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1cb7,	// (0x00001cb7) listscroll_japin_cand_pane

0x1cbf,	// (0x00001cbf) popup_fep_japan_candidate_window_t1

0x1ccd,	// (0x00001ccd) candidate_pane_ParamLimits

0x1ccd,	// (0x00001ccd) candidate_pane

0x1cdf,	// (0x00001cdf) scroll_pane_cp30

0x1ce9,	// (0x00001ce9) list_single_popup_jap_candidate_pane_ParamLimits

0x1ce9,	// (0x00001ce9) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1cfd,	// (0x00001cfd) list_single_popup_jap_candidate_pane_t1

0xbd7d,	// (0x0000bd7d) level_1_signal

0xbd8f,	// (0x0000bd8f) level_2_signal

0xbda2,	// (0x0000bda2) level_3_signal

0xbdb5,	// (0x0000bdb5) level_4_signal

0xbdc8,	// (0x0000bdc8) level_5_signal

0xbddb,	// (0x0000bddb) level_6_signal

0xbdee,	// (0x0000bdee) level_7_signal

0xbd7d,	// (0x0000bd7d) level_1_battery

0xbd8f,	// (0x0000bd8f) level_2_battery

0xbda2,	// (0x0000bda2) level_3_battery

0xbdb5,	// (0x0000bdb5) level_4_battery

0xbdc8,	// (0x0000bdc8) level_5_battery

0xbddb,	// (0x0000bddb) level_6_battery

0xbdee,	// (0x0000bdee) level_7_battery

0x1d9e,	// (0x00001d9e) list_menu_pane_ParamLimits

0x1d9e,	// (0x00001d9e) list_menu_pane

0x1daf,	// (0x00001daf) scroll_pane_cp25_ParamLimits

0x1daf,	// (0x00001daf) scroll_pane_cp25

0x1dc8,	// (0x00001dc8) list_double2_graphic_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double2_graphic_pane_cp2

0x1dc8,	// (0x00001dc8) list_double2_large_graphic_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double2_large_graphic_pane_cp2

0x1dc8,	// (0x00001dc8) list_double2_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double2_pane_cp2

0x1dc8,	// (0x00001dc8) list_double_graphic_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double_graphic_pane_cp2

0x1dc8,	// (0x00001dc8) list_double_large_graphic_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double_large_graphic_pane_cp2

0x1dc8,	// (0x00001dc8) list_double_number_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double_number_pane_cp2

0x1dc8,	// (0x00001dc8) list_double_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double_pane_cp2

0xbe01,	// (0x0000be01) list_single_2graphic_pane_cp2_ParamLimits

0xbe01,	// (0x0000be01) list_single_2graphic_pane_cp2

0xbe01,	// (0x0000be01) list_single_graphic_heading_pane_cp2_ParamLimits

0xbe01,	// (0x0000be01) list_single_graphic_heading_pane_cp2

0xbe01,	// (0x0000be01) list_single_graphic_pane_cp2_ParamLimits

0xbe01,	// (0x0000be01) list_single_graphic_pane_cp2

0xbe01,	// (0x0000be01) list_single_heading_pane_cp2_ParamLimits

0xbe01,	// (0x0000be01) list_single_heading_pane_cp2

0x1e0b,	// (0x00001e0b) list_single_large_graphic_pane_cp2_ParamLimits

0x1e0b,	// (0x00001e0b) list_single_large_graphic_pane_cp2

0xbe01,	// (0x0000be01) list_single_number_heading_pane_cp2_ParamLimits

0xbe01,	// (0x0000be01) list_single_number_heading_pane_cp2

0xbe01,	// (0x0000be01) list_single_number_pane_cp2_ParamLimits

0xbe01,	// (0x0000be01) list_single_number_pane_cp2

0xbe01,	// (0x0000be01) list_single_pane_cp2_ParamLimits

0xbe01,	// (0x0000be01) list_single_pane_cp2

0x1ebb,	// (0x00001ebb) bg_popup_sub_pane_cp22

0x1ee0,	// (0x00001ee0) popup_side_volume_key_window_g1

0x1f0a,	// (0x00001f0a) popup_side_volume_key_window_t1

0x1f28,	// (0x00001f28) volume_small_pane_cp1

0x0835,	// (0x00000835) bg_popup_sub_pane_cp24_ParamLimits

0x0835,	// (0x00000835) bg_popup_sub_pane_cp24

0x1f30,	// (0x00001f30) fep_china_uni_candidate_pane_ParamLimits

0x1f30,	// (0x00001f30) fep_china_uni_candidate_pane

0x1f44,	// (0x00001f44) fep_china_uni_entry_pane

0x1f54,	// (0x00001f54) popup_fep_china_uni_window_g1

0x1f70,	// (0x00001f70) fep_china_uni_entry_pane_g1

0x1f7a,	// (0x00001f7a) fep_china_uni_entry_pane_g2

0x0001,

0xa9a2,	// (0x0000a9a2) fep_china_uni_entry_pane_g

0x1f84,	// (0x00001f84) fep_entry_item_pane

0x1f8e,	// (0x00001f8e) fep_candidate_item_pane

0x1f96,	// (0x00001f96) fep_china_uni_candidate_pane_g1

0x1fa0,	// (0x00001fa0) fep_china_uni_candidate_pane_g2

0x1fa8,	// (0x00001fa8) fep_china_uni_candidate_pane_g3

0x1fb0,	// (0x00001fb0) fep_china_uni_candidate_pane_g4

0x0003,

0xa9a7,	// (0x0000a9a7) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1fba,	// (0x00001fba) fep_entry_item_pane_t1_ParamLimits

0x1fba,	// (0x00001fba) fep_entry_item_pane_t1

0x1fd0,	// (0x00001fd0) fep_candidate_item_pane_t1_ParamLimits

0x1fd0,	// (0x00001fd0) fep_candidate_item_pane_t1

0x1fe5,	// (0x00001fe5) fep_candidate_item_pane_t2_ParamLimits

0x1fe5,	// (0x00001fe5) fep_candidate_item_pane_t2

0x0001,

0xa9b0,	// (0x0000a9b0) fep_candidate_item_pane_t_ParamLimits

0xa9b0,	// (0x0000a9b0) fep_candidate_item_pane_t

0x050f,	// (0x0000050f) list_highlight_pane_cp31_ParamLimits

0x050f,	// (0x0000050f) list_highlight_pane_cp31

0x1ff7,	// (0x00001ff7) level_1_signal_lsc

0x2000,	// (0x00002000) level_2_signal_lsc

0x2009,	// (0x00002009) level_3_signal_lsc

0x2012,	// (0x00002012) level_4_signal_lsc

0x201b,	// (0x0000201b) level_5_signal_lsc

0x2024,	// (0x00002024) level_6_signal_lsc

0x202d,	// (0x0000202d) level_7_signal_lsc

0x202d,	// (0x0000202d) level_1_battery_lsc

0x2036,	// (0x00002036) level_2_battery_lsc

0x203f,	// (0x0000203f) level_3_battery_lsc

0x2048,	// (0x00002048) level_4_battery_lsc

0x2051,	// (0x00002051) level_5_battery_lsc

0x205a,	// (0x0000205a) level_6_battery_lsc

0x1ff7,	// (0x00001ff7) level_7_battery_lsc

0x2063,	// (0x00002063) scroll_handle_focus_pane_g1

0x206c,	// (0x0000206c) scroll_handle_focus_pane_g2

0x2075,	// (0x00002075) scroll_handle_focus_pane_g3

0x0002,

0xa9b5,	// (0x0000a9b5) scroll_handle_focus_pane_g

0xbe64,	// (0x0000be64) list_single_2graphic_pane_g1_ParamLimits

0xbe64,	// (0x0000be64) list_single_2graphic_pane_g1

0xb702,	// (0x0000b702) list_single_2graphic_pane_g2_ParamLimits

0xb702,	// (0x0000b702) list_single_2graphic_pane_g2

0x3621,	// (0x00003621) list_single_2graphic_pane_g3_ParamLimits

0x3621,	// (0x00003621) list_single_2graphic_pane_g3

0xbe70,	// (0x0000be70) list_single_2graphic_pane_g4_ParamLimits

0xbe70,	// (0x0000be70) list_single_2graphic_pane_g4

0x0003,

0xf561,	// (0x0000f561) list_single_2graphic_pane_g_ParamLimits

0xf561,	// (0x0000f561) list_single_2graphic_pane_g

0xbe81,	// (0x0000be81) list_single_2graphic_pane_t1_ParamLimits

0xbe81,	// (0x0000be81) list_single_2graphic_pane_t1

0xbeaf,	// (0x0000beaf) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbeaf,	// (0x0000beaf) list_double2_graphic_large_graphic_pane_g1

0xb76d,	// (0x0000b76d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb76d,	// (0x0000b76d) list_double2_graphic_large_graphic_pane_g2

0xb77e,	// (0x0000b77e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb77e,	// (0x0000b77e) list_double2_graphic_large_graphic_pane_g3

0x37ea,	// (0x000037ea) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x37ea,	// (0x000037ea) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf56a,	// (0x0000f56a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf56a,	// (0x0000f56a) list_double2_graphic_large_graphic_pane_g

0xbec1,	// (0x0000bec1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbec1,	// (0x0000bec1) list_double2_graphic_large_graphic_pane_t1

0xbed7,	// (0x0000bed7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbed7,	// (0x0000bed7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf573,	// (0x0000f573) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf573,	// (0x0000f573) list_double2_graphic_large_graphic_pane_t

0x2387,	// (0x00002387) popup_fast_swap_window_ParamLimits

0x2387,	// (0x00002387) popup_fast_swap_window

0x23a5,	// (0x000023a5) popup_side_volume_key_window

0x23c3,	// (0x000023c3) stacon_top_pane

0x23cd,	// (0x000023cd) status_pane_ParamLimits

0x23cd,	// (0x000023cd) status_pane

0x23c3,	// (0x000023c3) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x12dc,	// (0x000012dc) scroll_pane_cp121

0x12d3,	// (0x000012d3) set_content_pane

0xbee9,	// (0x0000bee9) bg_active_tab_pane_g1_cp1

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp1

0xbef2,	// (0x0000bef2) bg_active_tab_pane_g3_cp1

0xbee9,	// (0x0000bee9) bg_passive_tab_pane_g1_cp1

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp1

0xbef2,	// (0x0000bef2) bg_passive_tab_pane_g3_cp1

0xbefb,	// (0x0000befb) bg_active_tab_pane_g1_cp2

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp2

0xbf04,	// (0x0000bf04) bg_active_tab_pane_g3_cp2

0xbefb,	// (0x0000befb) bg_passive_tab_pane_g1_cp2

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp2

0xbf04,	// (0x0000bf04) bg_passive_tab_pane_g3_cp2

0xbf0d,	// (0x0000bf0d) bg_active_tab_pane_g1_cp3

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp3

0xbf16,	// (0x0000bf16) bg_active_tab_pane_g3_cp3

0xbf0d,	// (0x0000bf0d) bg_passive_tab_pane_g1_cp3

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp3

0xbf16,	// (0x0000bf16) bg_passive_tab_pane_g3_cp3

0xbf1f,	// (0x0000bf1f) bg_active_tab_pane_g1_cp4

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp4

0xbf28,	// (0x0000bf28) bg_active_tab_pane_g3_cp4

0xbf1f,	// (0x0000bf1f) bg_passive_tab_pane_g1_cp4

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp4

0xbf28,	// (0x0000bf28) bg_passive_tab_pane_g3_cp4

0x22e1,	// (0x000022e1) bg_active_tab_pane_g1_cp5

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp5

0x22ea,	// (0x000022ea) bg_active_tab_pane_g3_cp5

0x22e1,	// (0x000022e1) bg_passive_tab_pane_g1_cp5

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp5

0x22ea,	// (0x000022ea) bg_passive_tab_pane_g3_cp5

0x16c7,	// (0x000016c7) list_set_graphic_pane_ParamLimits

0x16c7,	// (0x000016c7) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xbf31,	// (0x0000bf31) list_set_graphic_pane_g1_ParamLimits

0xbf31,	// (0x0000bf31) list_set_graphic_pane_g1

0xbf3d,	// (0x0000bf3d) list_set_graphic_pane_g2_ParamLimits

0xbf3d,	// (0x0000bf3d) list_set_graphic_pane_g2

0x0001,

0xf578,	// (0x0000f578) list_set_graphic_pane_g_ParamLimits

0xf578,	// (0x0000f578) list_set_graphic_pane_g

0x0009,

0xad2e,	// (0x0000ad2e) volume_small_pane_cp_g

0x2338,	// (0x00002338) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2338,	// (0x00002338) list_double2_large_graphic_pane_g1_cp2

0x2346,	// (0x00002346) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2346,	// (0x00002346) list_double2_large_graphic_pane_g2_cp2

0x2357,	// (0x00002357) list_double2_large_graphic_pane_g3_cp2

0x235f,	// (0x0000235f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x235f,	// (0x0000235f) list_double2_large_graphic_pane_t1_cp2

0x2375,	// (0x00002375) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2375,	// (0x00002375) list_double2_large_graphic_pane_t2_cp2

0x4b3c,	// (0x00004b3c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4b3c,	// (0x00004b3c) list_double_large_graphic_pane_g1_cp2

0x4b4f,	// (0x00004b4f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4b4f,	// (0x00004b4f) list_double_large_graphic_pane_g2_cp2

0x24eb,	// (0x000024eb) list_double_large_graphic_pane_g3_cp2

0x4b60,	// (0x00004b60) list_double_large_graphic_pane_g4_cp

0x4b68,	// (0x00004b68) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4b68,	// (0x00004b68) list_double_large_graphic_pane_t1_cp2

0x4b7f,	// (0x00004b7f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4b7f,	// (0x00004b7f) list_double_large_graphic_pane_t2_cp2

0x23db,	// (0x000023db) list_double2_graphic_pane_g1_cp2_ParamLimits

0x23db,	// (0x000023db) list_double2_graphic_pane_g1_cp2

0x23e9,	// (0x000023e9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x23e9,	// (0x000023e9) list_double2_graphic_pane_g2_cp2

0x23fa,	// (0x000023fa) list_double2_graphic_pane_g3_cp2

0x2404,	// (0x00002404) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2404,	// (0x00002404) list_double2_graphic_pane_t1_cp2

0x241a,	// (0x0000241a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x241a,	// (0x0000241a) list_double2_graphic_pane_t2_cp2

0x242c,	// (0x0000242c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x242c,	// (0x0000242c) list_single_number_heading_pane_g1_cp2

0x2438,	// (0x00002438) list_single_number_heading_pane_g2_cp2

0x2440,	// (0x00002440) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2440,	// (0x00002440) list_single_number_heading_pane_t1_cp2

0x2456,	// (0x00002456) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2456,	// (0x00002456) list_single_number_heading_pane_t2_cp2

0x246a,	// (0x0000246a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x246a,	// (0x0000246a) list_single_number_heading_pane_t3_cp2

0x242c,	// (0x0000242c) list_single_heading_pane_g1_cp2_ParamLimits

0x242c,	// (0x0000242c) list_single_heading_pane_g1_cp2

0x2438,	// (0x00002438) list_single_heading_pane_g2_cp2

0x2440,	// (0x00002440) list_single_heading_pane_t1_cp2_ParamLimits

0x2440,	// (0x00002440) list_single_heading_pane_t1_cp2

0x4936,	// (0x00004936) list_single_heading_pane_t2_cp2_ParamLimits

0x4936,	// (0x00004936) list_single_heading_pane_t2_cp2

0x4878,	// (0x00004878) list_double_graphic_pane_g1_cp2_ParamLimits

0x4878,	// (0x00004878) list_double_graphic_pane_g1_cp2

0x4884,	// (0x00004884) list_double_graphic_pane_g2_cp2_ParamLimits

0x4884,	// (0x00004884) list_double_graphic_pane_g2_cp2

0x4893,	// (0x00004893) list_double_graphic_pane_g3_cp2

0x489b,	// (0x0000489b) list_double_graphic_pane_t1_cp2_ParamLimits

0x489b,	// (0x0000489b) list_double_graphic_pane_t1_cp2

0x48b1,	// (0x000048b1) list_double_graphic_pane_t2_cp2_ParamLimits

0x48b1,	// (0x000048b1) list_double_graphic_pane_t2_cp2

0x24df,	// (0x000024df) list_double_number_pane_g1_cp2_ParamLimits

0x24df,	// (0x000024df) list_double_number_pane_g1_cp2

0x24eb,	// (0x000024eb) list_double_number_pane_g2_cp2

0x483c,	// (0x0000483c) list_double_number_pane_t1_cp2_ParamLimits

0x483c,	// (0x0000483c) list_double_number_pane_t1_cp2

0x4850,	// (0x00004850) list_double_number_pane_t2_cp2_ParamLimits

0x4850,	// (0x00004850) list_double_number_pane_t2_cp2

0x4866,	// (0x00004866) list_double_number_pane_t3_cp2_ParamLimits

0x4866,	// (0x00004866) list_double_number_pane_t3_cp2

0x4714,	// (0x00004714) list_single_graphic_pane_g1_cp2_ParamLimits

0x4714,	// (0x00004714) list_single_graphic_pane_g1_cp2

0x2545,	// (0x00002545) list_single_graphic_pane_g2_cp2_ParamLimits

0x2545,	// (0x00002545) list_single_graphic_pane_g2_cp2

0x2551,	// (0x00002551) list_single_graphic_pane_g3_cp2

0x46ea,	// (0x000046ea) list_single_graphic_pane_t1_cp2_ParamLimits

0x46ea,	// (0x000046ea) list_single_graphic_pane_t1_cp2

0x2545,	// (0x00002545) list_single_number_pane_g1_cp2_ParamLimits

0x2545,	// (0x00002545) list_single_number_pane_g1_cp2

0x2551,	// (0x00002551) list_single_number_pane_g2_cp2

0x46ea,	// (0x000046ea) list_single_number_pane_t1_cp2_ParamLimits

0x46ea,	// (0x000046ea) list_single_number_pane_t1_cp2

0x4700,	// (0x00004700) list_single_number_pane_t2_cp2_ParamLimits

0x4700,	// (0x00004700) list_single_number_pane_t2_cp2

0x2346,	// (0x00002346) list_double2_pane_g1_cp2_ParamLimits

0x2346,	// (0x00002346) list_double2_pane_g1_cp2

0x2357,	// (0x00002357) list_double2_pane_g2_cp2

0x24b7,	// (0x000024b7) list_double2_pane_t1_cp2_ParamLimits

0x24b7,	// (0x000024b7) list_double2_pane_t1_cp2

0x24cd,	// (0x000024cd) list_double2_pane_t2_cp2_ParamLimits

0x24cd,	// (0x000024cd) list_double2_pane_t2_cp2

0x24df,	// (0x000024df) list_double_pane_g1_cp2_ParamLimits

0x24df,	// (0x000024df) list_double_pane_g1_cp2

0x24eb,	// (0x000024eb) list_double_pane_g2_cp2

0x24f3,	// (0x000024f3) list_double_pane_t1_cp2_ParamLimits

0x24f3,	// (0x000024f3) list_double_pane_t1_cp2

0x2509,	// (0x00002509) list_double_pane_t2_cp2_ParamLimits

0x2509,	// (0x00002509) list_double_pane_t2_cp2

0x2535,	// (0x00002535) list_single_pane_cp2_g3

0x2545,	// (0x00002545) list_single_pane_g1_cp2_ParamLimits

0x2545,	// (0x00002545) list_single_pane_g1_cp2

0x2551,	// (0x00002551) list_single_pane_g2_cp2

0x2559,	// (0x00002559) list_single_pane_t1_cp2_ParamLimits

0x2559,	// (0x00002559) list_single_pane_t1_cp2

0x2571,	// (0x00002571) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2571,	// (0x00002571) list_single_large_graphic_pane_g1_cp2

0x257f,	// (0x0000257f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x257f,	// (0x0000257f) list_single_large_graphic_pane_g2_cp2

0x258b,	// (0x0000258b) list_single_large_graphic_pane_g3_cp2

0x2593,	// (0x00002593) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2593,	// (0x00002593) list_single_large_graphic_pane_g4_cp1

0x25ad,	// (0x000025ad) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x25ad,	// (0x000025ad) list_single_large_graphic_pane_t1_cp2

0x4559,	// (0x00004559) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4559,	// (0x00004559) list_single_graphic_heading_pane_g1_cp2

0x4526,	// (0x00004526) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4526,	// (0x00004526) list_single_graphic_heading_pane_g4_cp2

0x2551,	// (0x00002551) list_single_graphic_heading_pane_g5_cp2

0x4565,	// (0x00004565) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4565,	// (0x00004565) list_single_graphic_heading_pane_t1_cp2

0x457b,	// (0x0000457b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x457b,	// (0x0000457b) list_single_graphic_heading_pane_t2_cp2

0x451a,	// (0x0000451a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x451a,	// (0x0000451a) list_single_2graphic_pane_g1_cp2

0x4526,	// (0x00004526) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4526,	// (0x00004526) list_single_2graphic_pane_g2_cp2

0x2551,	// (0x00002551) list_single_2graphic_pane_g3_cp2

0x4537,	// (0x00004537) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4537,	// (0x00004537) list_single_2graphic_pane_g4_cp2

0x4543,	// (0x00004543) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4543,	// (0x00004543) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x40f2,	// (0x000040f2) list_highlight_pane_g1_cp1

0x40fa,	// (0x000040fa) list_highlight_pane_g2_cp1

0x4102,	// (0x00004102) list_highlight_pane_g3_cp1

0x410a,	// (0x0000410a) list_highlight_pane_g4_cp1

0x4112,	// (0x00004112) list_highlight_pane_g5_cp1

0x411a,	// (0x0000411a) list_highlight_pane_g6_cp1

0x4122,	// (0x00004122) list_highlight_pane_g7_cp1

0x412a,	// (0x0000412a) list_highlight_pane_g8_cp1

0x4132,	// (0x00004132) list_highlight_pane_g9_cp1

0xce12,	// (0x0000ce12) form_field_slider_pane_t3

0xce20,	// (0x0000ce20) form_field_slider_pane_t4

0x402e,	// (0x0000402e) slider_form_pane_ParamLimits

0x402e,	// (0x0000402e) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x498c,	// (0x0000498c) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xab61,	// (0x0000ab61) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x25c3,	// (0x000025c3) text_digital

0x25d2,	// (0x000025d2) text_primary

0x25e1,	// (0x000025e1) text_primary_small

0x25f0,	// (0x000025f0) text_secondary

0x25ff,	// (0x000025ff) text_title

0x528d,	// (0x0000528d) bg_passive_tab_pane_g1_cp3_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp3_srt

0x5296,	// (0x00005296) bg_passive_tab_pane_g3_cp3_srt

0x0835,	// (0x00000835) bg_active_tab_pane_cp3_srt_ParamLimits

0x0835,	// (0x00000835) bg_active_tab_pane_cp3_srt

0x529f,	// (0x0000529f) tabs_4_active_pane_srt_g1

0xd3e0,	// (0x0000d3e0) tabs_4_active_pane_srt_t1_ParamLimits

0xd3e0,	// (0x0000d3e0) tabs_4_active_pane_srt_t1

0x528d,	// (0x0000528d) bg_active_tab_pane_g1_cp3_copy1

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp3_copy1

0x5296,	// (0x00005296) bg_active_tab_pane_g3_cp3_copy1

0x050f,	// (0x0000050f) tabs_2_long_active_pane_srt_ParamLimits

0x050f,	// (0x0000050f) tabs_2_long_active_pane_srt

0x050f,	// (0x0000050f) tabs_2_long_passive_pane_srt_ParamLimits

0x050f,	// (0x0000050f) tabs_2_long_passive_pane_srt

0x2b93,	// (0x00002b93) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b93,	// (0x00002b93) bg_passive_tab_pane_cp4_srt

0x4e68,	// (0x00004e68) bg_passive_tab_pane_g1_cp4_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp4_srt

0x4e71,	// (0x00004e71) bg_passive_tab_pane_g3_cp4_srt

0x050f,	// (0x0000050f) bg_active_tab_pane_cp4_srt_ParamLimits

0x050f,	// (0x0000050f) bg_active_tab_pane_cp4_srt

0xd194,	// (0x0000d194) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd194,	// (0x0000d194) tabs_2_long_active_pane_srt_t1

0x4e68,	// (0x00004e68) bg_active_tab_pane_g1_cp4_srt

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp4_srt

0x4e71,	// (0x00004e71) bg_active_tab_pane_g3_cp4_srt

0x0835,	// (0x00000835) tabs_3_long_active_pane_srt_ParamLimits

0x0835,	// (0x00000835) tabs_3_long_active_pane_srt

0x0835,	// (0x00000835) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0835,	// (0x00000835) tabs_3_long_passive_pane_cp_srt

0x0835,	// (0x00000835) tabs_3_long_passive_pane_srt_ParamLimits

0x0835,	// (0x00000835) tabs_3_long_passive_pane_srt

0x2b93,	// (0x00002b93) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b93,	// (0x00002b93) bg_passive_tab_pane_cp5_srt

0x22e1,	// (0x000022e1) bg_passive_tab_pane_g1_cp5_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp5_srt

0x22ea,	// (0x000022ea) bg_passive_tab_pane_g3_cp5_srt

0x050f,	// (0x0000050f) bg_active_tab_pane_cp5_srt_ParamLimits

0x050f,	// (0x0000050f) bg_active_tab_pane_cp5_srt

0xd17e,	// (0x0000d17e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd17e,	// (0x0000d17e) tabs_3_long_active_pane_srt_t1

0x22e1,	// (0x000022e1) bg_active_tab_pane_g1_cp5_srt

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp5_srt

0x22ea,	// (0x000022ea) bg_active_tab_pane_g3_cp5_srt

0x4e48,	// (0x00004e48) navi_text_pane_srt_t1

0x4e40,	// (0x00004e40) navi_icon_pane_srt_g1

0x287f,	// (0x0000287f) midp_editing_number_pane_srt

0x260e,	// (0x0000260e) midp_ticker_pane_srt

0x2887,	// (0x00002887) midp_ticker_pane_srt_g1

0x288f,	// (0x0000288f) midp_ticker_pane_srt_g2

0x0001,

0xa9f2,	// (0x0000a9f2) midp_ticker_pane_srt_g

0x2897,	// (0x00002897) midp_ticker_pane_srt_t1

0x4e31,	// (0x00004e31) midp_editing_number_pane_t1_copy1

0xbf61,	// (0x0000bf61) listscroll_midp_pane

0xbf61,	// (0x0000bf61) midp_form_pane

0x2684,	// (0x00002684) midp_info_popup_window_ParamLimits

0x2684,	// (0x00002684) midp_info_popup_window

0x15f5,	// (0x000015f5) bg_popup_sub_pane_cp50_ParamLimits

0x15f5,	// (0x000015f5) bg_popup_sub_pane_cp50

0x3d59,	// (0x00003d59) listscroll_midp_info_pane_ParamLimits

0x3d59,	// (0x00003d59) listscroll_midp_info_pane

0x3d41,	// (0x00003d41) listscroll_form_midp_pane_ParamLimits

0x3d41,	// (0x00003d41) listscroll_form_midp_pane

0x3d4d,	// (0x00003d4d) scroll_bar_cp050

0xce06,	// (0x0000ce06) list_midp_pane

0x5f6b,	// (0x00005f6b) signal_pane_g2_cp

0x3c5b,	// (0x00003c5b) listscroll_midp_info_pane_t1_ParamLimits

0x3c5b,	// (0x00003c5b) listscroll_midp_info_pane_t1

0x3c73,	// (0x00003c73) listscroll_midp_info_pane_t2_ParamLimits

0x3c73,	// (0x00003c73) listscroll_midp_info_pane_t2

0x3cb1,	// (0x00003cb1) listscroll_midp_info_pane_t3_ParamLimits

0x3cb1,	// (0x00003cb1) listscroll_midp_info_pane_t3

0x3ceb,	// (0x00003ceb) listscroll_midp_info_pane_t4_ParamLimits

0x3ceb,	// (0x00003ceb) listscroll_midp_info_pane_t4

0x0003,

0xaa9c,	// (0x0000aa9c) listscroll_midp_info_pane_t_ParamLimits

0xaa9c,	// (0x0000aa9c) listscroll_midp_info_pane_t

0x16bf,	// (0x000016bf) scroll_pane_cp21

0x3bf5,	// (0x00003bf5) form_midp_field_choice_group_pane

0x3bfe,	// (0x00003bfe) form_midp_field_text_pane

0x3c41,	// (0x00003c41) form_midp_field_time_pane

0x3c49,	// (0x00003c49) form_midp_gauge_slider_pane

0x3c52,	// (0x00003c52) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcde9,	// (0x0000cde9) list_single_midp_pane_ParamLimits

0xcde9,	// (0x0000cde9) list_single_midp_pane

0xcdc1,	// (0x0000cdc1) form_midp_field_text_pane_t1

0x3910,	// (0x00003910) input_focus_pane_cp050

0x3bc4,	// (0x00003bc4) list_midp_form_text_pane

0x3b68,	// (0x00003b68) form_midp_field_choice_group_pane_t1

0x3b76,	// (0x00003b76) input_focus_pane_cp051

0x3b8a,	// (0x00003b8a) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3b4c,	// (0x00003b4c) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3b5a,	// (0x00003b5a) form_midp_field_time_pane_t2

0x0001,

0x2734,	// (0x00002734) aid_navinavi_width_2_pane

0xaa97,	// (0x0000aa97) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3b0c,	// (0x00003b0c) form_midp_gauge_slider_pane_t1

0x3b1a,	// (0x00003b1a) form_midp_gauge_slider_pane_t2

0xcda5,	// (0x0000cda5) form_midp_gauge_slider_pane_t3

0xcdb3,	// (0x0000cdb3) form_midp_gauge_slider_pane_t4

0x0003,

0xf5b9,	// (0x0000f5b9) form_midp_gauge_slider_pane_t

0x3b44,	// (0x00003b44) form_midp_slider_pane

0x050f,	// (0x0000050f) bg_input_focus_pane_cp041_ParamLimits

0x050f,	// (0x0000050f) bg_input_focus_pane_cp041

0x3ad9,	// (0x00003ad9) form_midp_gauge_wait_pane_t1_ParamLimits

0x3ad9,	// (0x00003ad9) form_midp_gauge_wait_pane_t1

0x3aeb,	// (0x00003aeb) form_midp_gauge_wait_pane_t2_ParamLimits

0x3aeb,	// (0x00003aeb) form_midp_gauge_wait_pane_t2

0x0001,

0xaa89,	// (0x0000aa89) form_midp_gauge_wait_pane_t_ParamLimits

0xaa89,	// (0x0000aa89) form_midp_gauge_wait_pane_t

0x3afd,	// (0x00003afd) form_midp_wait_pane_ParamLimits

0x3afd,	// (0x00003afd) form_midp_wait_pane

0x3aa1,	// (0x00003aa1) form_midp_image_pane_g1

0x3aaa,	// (0x00003aaa) form_midp_image_pane_t1

0x3ab9,	// (0x00003ab9) form_midp_image_pane_t2

0x3ac8,	// (0x00003ac8) form_midp_image_pane_t3

0x0002,

0xaa82,	// (0x0000aa82) form_midp_image_pane_t

0x3a89,	// (0x00003a89) list_single_midp_pane_g1

0x3a92,	// (0x00003a92) list_single_midp_pane_t1

0xcd8e,	// (0x0000cd8e) list_midp_form_item_pane_ParamLimits

0xcd8e,	// (0x0000cd8e) list_midp_form_item_pane

0x26dc,	// (0x000026dc) list_midp_form_item_pane_t1

0x26eb,	// (0x000026eb) midp_ticker_pane_g1

0x26f7,	// (0x000026f7) midp_ticker_pane_g2

0x0001,

0xa9d8,	// (0x0000a9d8) midp_ticker_pane_g

0xc009,	// (0x0000c009) midp_ticker_pane_t1

0xd33f,	// (0x0000d33f) midp_editing_number_pane_t1

0x513b,	// (0x0000513b) midp_editing_number_pane

0x514a,	// (0x0000514a) midp_ticker_pane

0x4df9,	// (0x00004df9) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4e01,	// (0x00004e01) listscroll_ai_message_pane

0x4d7f,	// (0x00004d7f) ai_message_heading_pane_g1_ParamLimits

0x4d7f,	// (0x00004d7f) ai_message_heading_pane_g1

0x4d8b,	// (0x00004d8b) ai_message_heading_pane_g2_ParamLimits

0x4d8b,	// (0x00004d8b) ai_message_heading_pane_g2

0x4d99,	// (0x00004d99) ai_message_heading_pane_g3_ParamLimits

0x4d99,	// (0x00004d99) ai_message_heading_pane_g3

0x4da5,	// (0x00004da5) ai_message_heading_pane_g4_ParamLimits

0x4da5,	// (0x00004da5) ai_message_heading_pane_g4

0x0003,

0xabc3,	// (0x0000abc3) ai_message_heading_pane_g_ParamLimits

0xabc3,	// (0x0000abc3) ai_message_heading_pane_g

0x4db1,	// (0x00004db1) ai_message_heading_pane_t1_ParamLimits

0x4db1,	// (0x00004db1) ai_message_heading_pane_t1

0x4dcb,	// (0x00004dcb) ai_message_heading_pane_t2_ParamLimits

0x4dcb,	// (0x00004dcb) ai_message_heading_pane_t2

0x0001,

0xabcc,	// (0x0000abcc) ai_message_heading_pane_t_ParamLimits

0xabcc,	// (0x0000abcc) ai_message_heading_pane_t

0x4ddf,	// (0x00004ddf) bg_popup_heading_pane_cp1_ParamLimits

0x4ddf,	// (0x00004ddf) bg_popup_heading_pane_cp1

0x4d6d,	// (0x00004d6d) list_ai_message_pane_ParamLimits

0x4d6d,	// (0x00004d6d) list_ai_message_pane

0x16bf,	// (0x000016bf) scroll_pane_cp10

0x4ca5,	// (0x00004ca5) list_ai_message_pane_g1

0x4cad,	// (0x00004cad) list_ai_message_pane_g2

0x0001,

0xaba0,	// (0x0000aba0) list_ai_message_pane_g

0x4cb5,	// (0x00004cb5) list_ai_message_pane_t1_ParamLimits

0x4cb5,	// (0x00004cb5) list_ai_message_pane_t1

0x4cca,	// (0x00004cca) list_ai_message_pane_t2_ParamLimits

0x4cca,	// (0x00004cca) list_ai_message_pane_t2

0x4cdf,	// (0x00004cdf) list_ai_message_pane_t3_ParamLimits

0x4cdf,	// (0x00004cdf) list_ai_message_pane_t3

0x4cf4,	// (0x00004cf4) list_ai_message_pane_t4_ParamLimits

0x4cf4,	// (0x00004cf4) list_ai_message_pane_t4

0x0003,

0xaba5,	// (0x0000aba5) list_ai_message_pane_t_ParamLimits

0xaba5,	// (0x0000aba5) list_ai_message_pane_t

0xd152,	// (0x0000d152) cell_ai_soft_ind_pane_ParamLimits

0xd152,	// (0x0000d152) cell_ai_soft_ind_pane

0x2715,	// (0x00002715) cell_ai_soft_ind_pane_g1_ParamLimits

0x2715,	// (0x00002715) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x2722,	// (0x00002722) text_secondary_cp56_ParamLimits

0x2722,	// (0x00002722) text_secondary_cp56

0x4c63,	// (0x00004c63) example_general_pane_ParamLimits

0x4c63,	// (0x00004c63) example_general_pane

0x4c6f,	// (0x00004c6f) example_parent_pane_g1_ParamLimits

0x4c6f,	// (0x00004c6f) example_parent_pane_g1

0x4c7b,	// (0x00004c7b) example_parent_pane_t1_ParamLimits

0x4c7b,	// (0x00004c7b) example_parent_pane_t1

0xc5af,	// (0x0000c5af) popup_preview_text_window_ParamLimits

0xc5af,	// (0x0000c5af) popup_preview_text_window

0x253d,	// (0x0000253d) list_single_pane_cp2_g4

0x08eb,	// (0x000008eb) bg_popup_preview_window_pane_ParamLimits

0x08eb,	// (0x000008eb) bg_popup_preview_window_pane

0x4996,	// (0x00004996) popup_preview_text_window_t1_ParamLimits

0x4996,	// (0x00004996) popup_preview_text_window_t1

0x49b4,	// (0x000049b4) popup_preview_text_window_t2_ParamLimits

0x49b4,	// (0x000049b4) popup_preview_text_window_t2

0x49fd,	// (0x000049fd) popup_preview_text_window_t3_ParamLimits

0x49fd,	// (0x000049fd) popup_preview_text_window_t3

0x4a42,	// (0x00004a42) popup_preview_text_window_t4_ParamLimits

0x4a42,	// (0x00004a42) popup_preview_text_window_t4

0x0004,

0xab74,	// (0x0000ab74) popup_preview_text_window_t_ParamLimits

0xab74,	// (0x0000ab74) popup_preview_text_window_t

0x4ac0,	// (0x00004ac0) scroll_pane_cp11

0x377d,	// (0x0000377d) bg_popup_preview_window_pane_g1

0x494a,	// (0x0000494a) bg_popup_preview_window_pane_g2

0x4954,	// (0x00004954) bg_popup_preview_window_pane_g3

0x495e,	// (0x0000495e) bg_popup_preview_window_pane_g4

0x4968,	// (0x00004968) bg_popup_preview_window_pane_g5

0x4972,	// (0x00004972) bg_popup_preview_window_pane_g6

0x497a,	// (0x0000497a) bg_popup_preview_window_pane_g7

0x4982,	// (0x00004982) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc51f,	// (0x0000c51f) popup_midp_note_alarm_window_ParamLimits

0xc51f,	// (0x0000c51f) popup_midp_note_alarm_window

0x13ab,	// (0x000013ab) data_form_pane_ParamLimits

0xbb09,	// (0x0000bb09) form_field_data_pane_g1

0xbb13,	// (0x0000bb13) form_field_data_pane_t1_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_ParamLimits

0x13e9,	// (0x000013e9) data_form_wide_pane_ParamLimits

0x13f5,	// (0x000013f5) form_field_data_wide_pane_g1

0x1421,	// (0x00001421) form_field_data_wide_pane_t1_ParamLimits

0x0bb1,	// (0x00000bb1) input_focus_pane_cp6_ParamLimits

0xbc6d,	// (0x0000bc6d) input_popup_find_pane_g1_ParamLimits

0xbc6d,	// (0x0000bc6d) input_popup_find_pane_g1

0x19f0,	// (0x000019f0) aid_navi_side_left_pane

0x1a05,	// (0x00001a05) aid_navi_side_right_pane

0x41ed,	// (0x000041ed) bg_popup_window_pane_cp30_ParamLimits

0x41ed,	// (0x000041ed) bg_popup_window_pane_cp30

0x4267,	// (0x00004267) popup_midp_note_alarm_window_g1_ParamLimits

0x4267,	// (0x00004267) popup_midp_note_alarm_window_g1

0x4297,	// (0x00004297) popup_midp_note_alarm_window_t1_ParamLimits

0x4297,	// (0x00004297) popup_midp_note_alarm_window_t1

0x4338,	// (0x00004338) popup_midp_note_alarm_window_t2_ParamLimits

0x4338,	// (0x00004338) popup_midp_note_alarm_window_t2

0x43e6,	// (0x000043e6) popup_midp_note_alarm_window_t3_ParamLimits

0x43e6,	// (0x000043e6) popup_midp_note_alarm_window_t3

0x4418,	// (0x00004418) popup_midp_note_alarm_window_t4_ParamLimits

0x4418,	// (0x00004418) popup_midp_note_alarm_window_t4

0x443e,	// (0x0000443e) popup_midp_note_alarm_window_t5_ParamLimits

0x443e,	// (0x0000443e) popup_midp_note_alarm_window_t5

0x000a,

0xab11,	// (0x0000ab11) popup_midp_note_alarm_window_t_ParamLimits

0xab11,	// (0x0000ab11) popup_midp_note_alarm_window_t

0x44ea,	// (0x000044ea) wait_bar_pane_cp1_ParamLimits

0x44ea,	// (0x000044ea) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3ed2,	// (0x00003ed2) wait_border_pane_g1_copy1

0x143b,	// (0x0000143b) form_field_popup_pane_g1

0xbb2d,	// (0x0000bb2d) form_field_popup_pane_t1_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_cp7_ParamLimits

0x145d,	// (0x0000145d) list_form_pane_ParamLimits

0x1469,	// (0x00001469) form_field_popup_wide_pane_g1

0x1471,	// (0x00001471) form_field_popup_wide_pane_t1_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_cp8_ParamLimits

0x1486,	// (0x00001486) list_form_wide_pane_ParamLimits

0x531a,	// (0x0000531a) aid_size_cell_graphic_pane

0xbbac,	// (0x0000bbac) data_form_pane_t1_ParamLimits

0xd323,	// (0x0000d323) data_form_wide_pane_t1_ParamLimits

0xc9ac,	// (0x0000c9ac) bg_status_flat_pane

0xb33d,	// (0x0000b33d) title_pane_t1_ParamLimits

0x04d7,	// (0x000004d7) title_pane_t2_ParamLimits

0x04fd,	// (0x000004fd) title_pane_t3_ParamLimits

0xf489,	// (0x0000f489) title_pane_t_ParamLimits

0xbd7d,	// (0x0000bd7d) level_1_signal_ParamLimits

0xbd8f,	// (0x0000bd8f) level_2_signal_ParamLimits

0xbda2,	// (0x0000bda2) level_3_signal_ParamLimits

0xbdb5,	// (0x0000bdb5) level_4_signal_ParamLimits

0xbdc8,	// (0x0000bdc8) level_5_signal_ParamLimits

0xbddb,	// (0x0000bddb) level_6_signal_ParamLimits

0xbdee,	// (0x0000bdee) level_7_signal_ParamLimits

0xbd7d,	// (0x0000bd7d) level_1_battery_ParamLimits

0xbd8f,	// (0x0000bd8f) level_2_battery_ParamLimits

0xbda2,	// (0x0000bda2) level_3_battery_ParamLimits

0xbdb5,	// (0x0000bdb5) level_4_battery_ParamLimits

0xbdc8,	// (0x0000bdc8) level_5_battery_ParamLimits

0xbddb,	// (0x0000bddb) level_6_battery_ParamLimits

0xbdee,	// (0x0000bdee) level_7_battery_ParamLimits

0x40f2,	// (0x000040f2) bg_status_flat_pane_g1

0x40fa,	// (0x000040fa) bg_status_flat_pane_g2

0x4102,	// (0x00004102) bg_status_flat_pane_g3

0x410a,	// (0x0000410a) bg_status_flat_pane_g4

0x4112,	// (0x00004112) bg_status_flat_pane_g5

0x411a,	// (0x0000411a) bg_status_flat_pane_g6

0x4122,	// (0x00004122) bg_status_flat_pane_g7

0xb3d1,	// (0x0000b3d1) tabs_3_active_pane_t1_ParamLimits

0xb3d1,	// (0x0000b3d1) tabs_3_passive_pane_t1_ParamLimits

0xb3eb,	// (0x0000b3eb) tabs_4_active_pane_t1_ParamLimits

0xb3eb,	// (0x0000b3eb) tabs_4_1_passive_pane_t1_ParamLimits

0xbc83,	// (0x0000bc83) tabs_2_active_pane_t1_ParamLimits

0xbc83,	// (0x0000bc83) tabs_2_passive_pane_t1_ParamLimits

0x050f,	// (0x0000050f) bg_active_tab_pane_cp4_ParamLimits

0xbc95,	// (0x0000bc95) tabs_2_long_active_pane_t1_ParamLimits

0x2b93,	// (0x00002b93) bg_passive_tab_pane_cp4_ParamLimits

0x383b,	// (0x0000383b) list_single_midp_graphic_pane_t1_ParamLimits

0x050f,	// (0x0000050f) bg_active_tab_pane_cp5_ParamLimits

0xbca8,	// (0x0000bca8) tabs_3_long_active_pane_t1_ParamLimits

0x2b93,	// (0x00002b93) bg_passive_tab_pane_cp5_ParamLimits

0x383b,	// (0x0000383b) list_single_midp_graphic_pane_t1

0xc9ac,	// (0x0000c9ac) bg_status_flat_pane_ParamLimits

0x3350,	// (0x00003350) indicator_pane_cp2_ParamLimits

0x3350,	// (0x00003350) indicator_pane_cp2

0xcb41,	// (0x0000cb41) navi_pane_srt_ParamLimits

0xcb41,	// (0x0000cb41) navi_pane_srt

0x34b6,	// (0x000034b6) popup_clock_digital_analogue_window_cp1

0x0699,	// (0x00000699) indicator_pane_t1

0x260e,	// (0x0000260e) copy_highlight_pane

0x260e,	// (0x0000260e) cursor_graphics_pane

0x260e,	// (0x0000260e) graphic_within_text_pane

0x260e,	// (0x0000260e) link_highlight_pane

0x4a83,	// (0x00004a83) popup_preview_text_window_t5_ParamLimits

0x4a83,	// (0x00004a83) popup_preview_text_window_t5

0x273e,	// (0x0000273e) cursor_digital_pane

0x273e,	// (0x0000273e) cursor_primary_pane

0x274f,	// (0x0000274f) cursor_primary_small_pane

0x2757,	// (0x00002757) cursor_secondary_pane

0x275f,	// (0x0000275f) cursor_title_pane

0x273e,	// (0x0000273e) link_highlight_digital_pane

0x2746,	// (0x00002746) link_highlight_primary_pane

0x274f,	// (0x0000274f) link_highlight_primary_small_pane

0x2757,	// (0x00002757) link_highlight_secondary_pane

0x275f,	// (0x0000275f) link_highlight_title_pane

0x273e,	// (0x0000273e) copy_highlight_digital_pane

0x273e,	// (0x0000273e) copy_highlight_primary_pane

0x274f,	// (0x0000274f) copy_highlight_primary_small_pane

0x2757,	// (0x00002757) copy_highlight_secondary_pane

0x275f,	// (0x0000275f) copy_highlight_title_pane

0x2757,	// (0x00002757) graphic_text_digital_pane

0x4190,	// (0x00004190) graphic_text_primary_pane

0x4199,	// (0x00004199) graphic_text_primary_small_pane

0x274f,	// (0x0000274f) graphic_text_secondary_pane

0x273e,	// (0x0000273e) graphic_text_title_pane

0xc01b,	// (0x0000c01b) cursor_primary_pane_g1

0x4182,	// (0x00004182) cursor_text_primary_t1

0xce42,	// (0x0000ce42) cursor_primary_small_pane_g1

0x4174,	// (0x00004174) cursor_text_primary_small_t1

0xce38,	// (0x0000ce38) cursor_primary_small_pane_g1_copy1

0x415c,	// (0x0000415c) cursor_text_primary_small_t1_copy1

0x413a,	// (0x0000413a) cursor_text_title_t1

0xce2e,	// (0x0000ce2e) cursor_title_pane_g1

0xc01b,	// (0x0000c01b) cursor_digital_pane_g1

0x2771,	// (0x00002771) cursor_text_digital_t1

0x277f,	// (0x0000277f) link_highlight_primary_pane_g1

0x40e3,	// (0x000040e3) link_highlight_primary_pane_t1

0x277f,	// (0x0000277f) link_highlight_primary_small_pane_g1

0x2787,	// (0x00002787) link_highlight_primary_small_pane_t1

0x2796,	// (0x00002796) link_highlight_secondary_pane_g1

0x279e,	// (0x0000279e) link_highlight_secondary_pane_t1

0x4057,	// (0x00004057) link_highlight_title_pane_g1

0x405f,	// (0x0000405f) link_highlight_title_pane_t1

0x4040,	// (0x00004040) link_highlight_digital_pane_g1

0x4048,	// (0x00004048) link_highlight_digital_pane_t1

0x3f08,	// (0x00003f08) copy_highlight_primary_pane_g1

0x3f1f,	// (0x00003f1f) copy_highlight_primary_pane_t1

0x3f08,	// (0x00003f08) copy_highlight_primary_small_pane_g1

0x3f10,	// (0x00003f10) copy_highlight_primary_small_pane_t1

0x27ad,	// (0x000027ad) copy_highlight_secondary_pane_g1

0x27b5,	// (0x000027b5) copy_highlight_secondary_pane_t1

0x3ef1,	// (0x00003ef1) copy_highlight_title_pane_g1

0x3ef9,	// (0x00003ef9) copy_highlight_title_pane_t1

0x3f08,	// (0x00003f08) copy_highlight_digital_pane_g1

0x55a2,	// (0x000055a2) copy_highlight_digital_pane_t1

0x54f6,	// (0x000054f6) graphic_text_primary_pane_g1

0x5586,	// (0x00005586) graphic_text_primary_pane_t1

0x5594,	// (0x00005594) graphic_text_primary_pane_t2

0x0001,

0xac40,	// (0x0000ac40) graphic_text_primary_pane_t

0x5562,	// (0x00005562) graphic_text_primary_small_pane_g1

0x556a,	// (0x0000556a) graphic_text_primary_small_pane_t1

0x5578,	// (0x00005578) graphic_text_primary_small_pane_t2

0x0001,

0xac3b,	// (0x0000ac3b) graphic_text_primary_small_pane_t

0x553e,	// (0x0000553e) graphic_text_secondary_pane_g1

0x5546,	// (0x00005546) graphic_text_secondary_pane_t1

0x5554,	// (0x00005554) graphic_text_secondary_pane_t2

0x0001,

0xac36,	// (0x0000ac36) graphic_text_secondary_pane_t

0x551a,	// (0x0000551a) graphic_text_title_pane_g1

0x5522,	// (0x00005522) graphic_text_title_pane_t1

0x5530,	// (0x00005530) graphic_text_title_pane_t2

0x0001,

0xac31,	// (0x0000ac31) graphic_text_title_pane_t

0x54f6,	// (0x000054f6) graphic_text_digital_pane_g1

0x54fe,	// (0x000054fe) graphic_text_digital_pane_t1

0x550c,	// (0x0000550c) graphic_text_digital_pane_t2

0x0001,

0xac2c,	// (0x0000ac2c) graphic_text_digital_pane_t

0x050f,	// (0x0000050f) navi_icon_pane_srt_ParamLimits

0x050f,	// (0x0000050f) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x050f,	// (0x0000050f) navi_text_pane_srt_ParamLimits

0x050f,	// (0x0000050f) navi_text_pane_srt

0x54c1,	// (0x000054c1) navi_navi_icon_text_pane_srt

0x54c9,	// (0x000054c9) navi_navi_pane_srt_g1_ParamLimits

0x54c9,	// (0x000054c9) navi_navi_pane_srt_g1

0x54db,	// (0x000054db) navi_navi_pane_srt_g2_ParamLimits

0x54db,	// (0x000054db) navi_navi_pane_srt_g2

0x0001,

0xac27,	// (0x0000ac27) navi_navi_pane_srt_g_ParamLimits

0xac27,	// (0x0000ac27) navi_navi_pane_srt_g

0x54ed,	// (0x000054ed) navi_navi_tabs_pane_srt

0x54c1,	// (0x000054c1) navi_navi_text_pane_srt

0x54c1,	// (0x000054c1) navi_navi_volume_pane_srt

0x54b2,	// (0x000054b2) navi_navi_text_pane_srt_t1

0x548d,	// (0x0000548d) navi_navi_volume_pane_srt_g1

0x5495,	// (0x00005495) volume_small_pane_srt_ParamLimits

0x5495,	// (0x00005495) volume_small_pane_srt

0x27c4,	// (0x000027c4) volume_small_pane_srt_g1_ParamLimits

0x27c4,	// (0x000027c4) volume_small_pane_srt_g1

0x27d4,	// (0x000027d4) volume_small_pane_srt_g2_ParamLimits

0x27d4,	// (0x000027d4) volume_small_pane_srt_g2

0x27e5,	// (0x000027e5) volume_small_pane_srt_g3_ParamLimits

0x27e5,	// (0x000027e5) volume_small_pane_srt_g3

0x27f6,	// (0x000027f6) volume_small_pane_srt_g4_ParamLimits

0x27f6,	// (0x000027f6) volume_small_pane_srt_g4

0x2807,	// (0x00002807) volume_small_pane_srt_g5_ParamLimits

0x2807,	// (0x00002807) volume_small_pane_srt_g5

0x2818,	// (0x00002818) volume_small_pane_srt_g6_ParamLimits

0x2818,	// (0x00002818) volume_small_pane_srt_g6

0x2829,	// (0x00002829) volume_small_pane_srt_g7_ParamLimits

0x2829,	// (0x00002829) volume_small_pane_srt_g7

0x283a,	// (0x0000283a) volume_small_pane_srt_g8_ParamLimits

0x283a,	// (0x0000283a) volume_small_pane_srt_g8

0x284b,	// (0x0000284b) volume_small_pane_srt_g9_ParamLimits

0x284b,	// (0x0000284b) volume_small_pane_srt_g9

0x285c,	// (0x0000285c) volume_small_pane_srt_g10_ParamLimits

0x285c,	// (0x0000285c) volume_small_pane_srt_g10

0x0009,

0xa9dd,	// (0x0000a9dd) volume_small_pane_srt_g_ParamLimits

0xa9dd,	// (0x0000a9dd) volume_small_pane_srt_g

0x09a0,	// (0x000009a0) query_popup_data_pane_cp2

0x547b,	// (0x0000547b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x547b,	// (0x0000547b) navi_navi_icon_text_pane_srt_t1

0x4190,	// (0x00004190) navi_tabs_2_long_pane_srt

0x4190,	// (0x00004190) navi_tabs_2_pane_srt

0x4190,	// (0x00004190) navi_tabs_3_long_pane_srt

0x4190,	// (0x00004190) navi_tabs_3_pane_srt

0x4190,	// (0x00004190) navi_tabs_4_pane_srt

0x5453,	// (0x00005453) tabs_2_active_pane_srt_ParamLimits

0x5453,	// (0x00005453) tabs_2_active_pane_srt

0x5463,	// (0x00005463) tabs_2_passive_pane_srt_ParamLimits

0x5463,	// (0x00005463) tabs_2_passive_pane_srt

0x3910,	// (0x00003910) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3910,	// (0x00003910) bg_passive_tab_pane_cp1_srt

0x5427,	// (0x00005427) bg_passive_tab_pane_g1_cp1_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp1_srt

0x5430,	// (0x00005430) bg_passive_tab_pane_g3_cp1_srt

0x0835,	// (0x00000835) bg_active_tab_pane_cp1_srt_ParamLimits

0x0835,	// (0x00000835) bg_active_tab_pane_cp1_srt

0x5439,	// (0x00005439) tabs_2_active_pane_srt_g1

0xd460,	// (0x0000d460) tabs_2_active_pane_srt_t1_ParamLimits

0xd460,	// (0x0000d460) tabs_2_active_pane_srt_t1

0x5427,	// (0x00005427) bg_active_tab_pane_g1_cp1_srt

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp1_srt

0x5430,	// (0x00005430) bg_active_tab_pane_g3_cp1_srt

0x53f4,	// (0x000053f4) tabs_3_active_pane_srt_ParamLimits

0x53f4,	// (0x000053f4) tabs_3_active_pane_srt

0x5405,	// (0x00005405) tabs_3_passive_pane_cp_srt_ParamLimits

0x5405,	// (0x00005405) tabs_3_passive_pane_cp_srt

0x5416,	// (0x00005416) tabs_3_passive_pane_srt_ParamLimits

0x5416,	// (0x00005416) tabs_3_passive_pane_srt

0x3910,	// (0x00003910) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3910,	// (0x00003910) bg_passive_tab_pane_cp2_srt

0x286d,	// (0x0000286d) bg_passive_tab_pane_g1_cp2_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp2_srt

0x2876,	// (0x00002876) bg_passive_tab_pane_g3_cp2_srt

0x0835,	// (0x00000835) bg_active_tab_pane_cp2_srt_ParamLimits

0x0835,	// (0x00000835) bg_active_tab_pane_cp2_srt

0x53da,	// (0x000053da) tabs_3_active_pane_srt_g1

0xd44a,	// (0x0000d44a) tabs_3_active_pane_srt_t1_ParamLimits

0xd44a,	// (0x0000d44a) tabs_3_active_pane_srt_t1

0x286d,	// (0x0000286d) bg_active_tab_pane_g1_cp2_srt

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp2_srt

0x2876,	// (0x00002876) bg_active_tab_pane_g3_cp2_srt

0x5392,	// (0x00005392) tabs_4_active_pane_srt_ParamLimits

0x5392,	// (0x00005392) tabs_4_active_pane_srt

0x53a4,	// (0x000053a4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x53a4,	// (0x000053a4) tabs_4_passive_pane_cp2_srt

0x2b19,	// (0x00002b19) aid_size_cell_toolbar

0x4f53,	// (0x00004f53) main_idle_act_pane_ParamLimits

0x2d60,	// (0x00002d60) popup_large_graphic_colour_window_ParamLimits

0xc875,	// (0x0000c875) popup_toolbar_window_ParamLimits

0xc875,	// (0x0000c875) popup_toolbar_window

0x5180,	// (0x00005180) list_single_graphic_2heading_pane_ParamLimits

0x5180,	// (0x00005180) list_single_graphic_2heading_pane

0x1a7e,	// (0x00001a7e) aid_size_cell_apps_grid_lsc_pane

0x1a90,	// (0x00001a90) aid_size_cell_apps_grid_prt_pane

0x2b93,	// (0x00002b93) bg_wml_button_pane_cp1_ParamLimits

0x2b93,	// (0x00002b93) bg_wml_button_pane_cp1

0xcdc1,	// (0x0000cdc1) form_midp_field_text_pane_t1_ParamLimits

0x3910,	// (0x00003910) input_focus_pane_cp050_ParamLimits

0x3bc4,	// (0x00003bc4) list_midp_form_text_pane_ParamLimits

0x3b76,	// (0x00003b76) input_focus_pane_cp051_ParamLimits

0x3b8a,	// (0x00003b8a) list_midp_choice_pane_ParamLimits

0xcd78,	// (0x0000cd78) list_single_2graphic_pane_cp3_ParamLimits

0xcd78,	// (0x0000cd78) list_single_2graphic_pane_cp3

0x633b,	// (0x0000633b) list_single_midp_graphic_pane_ParamLimits

0x633b,	// (0x0000633b) list_single_midp_graphic_pane

0x3615,	// (0x00003615) list_single_graphic_2heading_pane_g1_ParamLimits

0x3615,	// (0x00003615) list_single_graphic_2heading_pane_g1

0x257f,	// (0x0000257f) list_single_graphic_2heading_pane_g4_ParamLimits

0x257f,	// (0x0000257f) list_single_graphic_2heading_pane_g4

0x3621,	// (0x00003621) list_single_graphic_2heading_pane_g5_ParamLimits

0x3621,	// (0x00003621) list_single_graphic_2heading_pane_g5

0x0002,

0xaa30,	// (0x0000aa30) list_single_graphic_2heading_pane_g_ParamLimits

0xaa30,	// (0x0000aa30) list_single_graphic_2heading_pane_g

0x362d,	// (0x0000362d) list_single_graphic_2heading_pane_t1_ParamLimits

0x362d,	// (0x0000362d) list_single_graphic_2heading_pane_t1

0x3641,	// (0x00003641) list_single_graphic_2heading_pane_t2_ParamLimits

0x3641,	// (0x00003641) list_single_graphic_2heading_pane_t2

0x365d,	// (0x0000365d) list_single_graphic_2heading_pane_t3_ParamLimits

0x365d,	// (0x0000365d) list_single_graphic_2heading_pane_t3

0x0002,

0xaa37,	// (0x0000aa37) list_single_graphic_2heading_pane_t_ParamLimits

0xaa37,	// (0x0000aa37) list_single_graphic_2heading_pane_t

0x3675,	// (0x00003675) bg_popup_sub_pane_cp2

0x369f,	// (0x0000369f) grid_toobar_pane

0x36db,	// (0x000036db) cell_toolbar_pane_ParamLimits

0x36db,	// (0x000036db) cell_toolbar_pane

0x3721,	// (0x00003721) cell_toolbar_pane_g1_ParamLimits

0x3721,	// (0x00003721) cell_toolbar_pane_g1

0x3735,	// (0x00003735) cell_toolbar_pane_g2_ParamLimits

0x3735,	// (0x00003735) cell_toolbar_pane_g2

0x0001,

0xaa3e,	// (0x0000aa3e) cell_toolbar_pane_g_ParamLimits

0xaa3e,	// (0x0000aa3e) cell_toolbar_pane_g

0x3757,	// (0x00003757) grid_highlight_pane_cp2_ParamLimits

0x3757,	// (0x00003757) grid_highlight_pane_cp2

0x3771,	// (0x00003771) toolbar_button_pane

0x377d,	// (0x0000377d) toolbar_button_pane_g1

0x3785,	// (0x00003785) toolbar_button_pane_g2

0x378d,	// (0x0000378d) toolbar_button_pane_g3

0x3795,	// (0x00003795) toolbar_button_pane_g4

0x379d,	// (0x0000379d) toolbar_button_pane_g5

0x37a5,	// (0x000037a5) toolbar_button_pane_g6

0x37ad,	// (0x000037ad) toolbar_button_pane_g7

0x37b5,	// (0x000037b5) toolbar_button_pane_g8

0x37bd,	// (0x000037bd) toolbar_button_pane_g9

0x0009,

0xaa43,	// (0x0000aa43) toolbar_button_pane_g

0x37cd,	// (0x000037cd) list_single_2graphic_pane_g1_cp3_ParamLimits

0x37cd,	// (0x000037cd) list_single_2graphic_pane_g1_cp3

0xccda,	// (0x0000ccda) list_single_2graphic_pane_g2_cp3_ParamLimits

0xccda,	// (0x0000ccda) list_single_2graphic_pane_g2_cp3

0x2438,	// (0x00002438) list_single_2graphic_pane_g3_cp3

0x37ea,	// (0x000037ea) list_single_2graphic_pane_g4_cp3_ParamLimits

0x37ea,	// (0x000037ea) list_single_2graphic_pane_g4_cp3

0x37f6,	// (0x000037f6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x37f6,	// (0x000037f6) list_single_2graphic_pane_t1_cp3

0x242c,	// (0x0000242c) list_single_midp_graphic_pane_g2_ParamLimits

0x242c,	// (0x0000242c) list_single_midp_graphic_pane_g2

0x2b21,	// (0x00002b21) aid_zoom_text_primary

0x2b29,	// (0x00002b29) aid_zoom_text_secondary

0x292a,	// (0x0000292a) status_small_pane_g7_ParamLimits

0x292a,	// (0x0000292a) status_small_pane_g7

0x294d,	// (0x0000294d) status_small_pane_t1_ParamLimits

0xb319,	// (0x0000b319) title_pane_g2

0x0003,

0xf480,	// (0x0000f480) title_pane_g

0xb5b1,	// (0x0000b5b1) aid_size_cell_colour_1_pane_ParamLimits

0xb5b1,	// (0x0000b5b1) aid_size_cell_colour_1_pane

0xb5c5,	// (0x0000b5c5) aid_size_cell_colour_2_pane_ParamLimits

0xb5c5,	// (0x0000b5c5) aid_size_cell_colour_2_pane

0xb5d9,	// (0x0000b5d9) aid_size_cell_colour_3_pane_ParamLimits

0xb5d9,	// (0x0000b5d9) aid_size_cell_colour_3_pane

0xb5ed,	// (0x0000b5ed) aid_size_cell_colour_4_pane_ParamLimits

0xb5ed,	// (0x0000b5ed) aid_size_cell_colour_4_pane

0x18f7,	// (0x000018f7) title_pane_stacon_g1_ParamLimits

0x18f7,	// (0x000018f7) title_pane_stacon_g1

0x3f76,	// (0x00003f76) popup_note_wait_window_g3_ParamLimits

0x3f76,	// (0x00003f76) popup_note_wait_window_g3

0x3fed,	// (0x00003fed) popup_note_wait_window_t5_ParamLimits

0x3fed,	// (0x00003fed) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc210,	// (0x0000c210) popup_feb_china_hwr_fs_window_ParamLimits

0xc210,	// (0x0000c210) popup_feb_china_hwr_fs_window

0xcceb,	// (0x0000cceb) aid_size_cell_hwr_fs_ParamLimits

0xcceb,	// (0x0000cceb) aid_size_cell_hwr_fs

0x3910,	// (0x00003910) bg_popup_sub_pane_cp3_ParamLimits

0x3910,	// (0x00003910) bg_popup_sub_pane_cp3

0xcd00,	// (0x0000cd00) grid_hwr_fs_pane_ParamLimits

0xcd00,	// (0x0000cd00) grid_hwr_fs_pane

0x3934,	// (0x00003934) linegrid_hwr_fs_pane_ParamLimits

0x3934,	// (0x00003934) linegrid_hwr_fs_pane

0xcd18,	// (0x0000cd18) cell_hwr_fs_pane_ParamLimits

0xcd18,	// (0x0000cd18) cell_hwr_fs_pane

0x3968,	// (0x00003968) linegrid_hwr_fs_pane_g1_ParamLimits

0x3968,	// (0x00003968) linegrid_hwr_fs_pane_g1

0xcd3e,	// (0x0000cd3e) linegrid_hwr_fs_pane_g2_ParamLimits

0xcd3e,	// (0x0000cd3e) linegrid_hwr_fs_pane_g2

0x3986,	// (0x00003986) linegrid_hwr_fs_pane_g3_ParamLimits

0x3986,	// (0x00003986) linegrid_hwr_fs_pane_g3

0x3992,	// (0x00003992) linegrid_hwr_fs_pane_g4_ParamLimits

0x3992,	// (0x00003992) linegrid_hwr_fs_pane_g4

0x39b0,	// (0x000039b0) linegrid_hwr_fs_pane_g5_ParamLimits

0x39b0,	// (0x000039b0) linegrid_hwr_fs_pane_g5

0x0004,

0xf5a5,	// (0x0000f5a5) linegrid_hwr_fs_pane_g_ParamLimits

0xf5a5,	// (0x0000f5a5) linegrid_hwr_fs_pane_g

0x39c6,	// (0x000039c6) cell_hwr_fs_pane_g1_ParamLimits

0x39c6,	// (0x000039c6) cell_hwr_fs_pane_g1

0x354c,	// (0x0000354c) cell_hwr_fs_pane_g2_ParamLimits

0x354c,	// (0x0000354c) cell_hwr_fs_pane_g2

0xcd50,	// (0x0000cd50) cell_hwr_fs_pane_g3_ParamLimits

0xcd50,	// (0x0000cd50) cell_hwr_fs_pane_g3

0xcd5d,	// (0x0000cd5d) cell_hwr_fs_pane_g4_ParamLimits

0xcd5d,	// (0x0000cd5d) cell_hwr_fs_pane_g4

0x0003,

0xf5b0,	// (0x0000f5b0) cell_hwr_fs_pane_g_ParamLimits

0xf5b0,	// (0x0000f5b0) cell_hwr_fs_pane_g

0xcd6a,	// (0x0000cd6a) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x16a6,	// (0x000016a6) aid_inside_area_popup_secondary

0xcfb8,	// (0x0000cfb8) aid_inside_area_window_primary_ParamLimits

0xcfb8,	// (0x0000cfb8) aid_inside_area_window_primary

0x55b1,	// (0x000055b1) ai2_news_ticker_pane

0x55b9,	// (0x000055b9) aid_size_cell_ai1_link_ParamLimits

0x55b9,	// (0x000055b9) aid_size_cell_ai1_link

0x55d3,	// (0x000055d3) popup_ai2_data_window_ParamLimits

0x55d3,	// (0x000055d3) popup_ai2_data_window

0x55f1,	// (0x000055f1) popup_ai2_link_window_ParamLimits

0x55f1,	// (0x000055f1) popup_ai2_link_window

0x3910,	// (0x00003910) bg_popup_sub_pane_cp4_ParamLimits

0x3910,	// (0x00003910) bg_popup_sub_pane_cp4

0x5607,	// (0x00005607) grid_ai2_link_pane_ParamLimits

0x5607,	// (0x00005607) grid_ai2_link_pane

0x561e,	// (0x0000561e) popup_ai2_link_window_g1_ParamLimits

0x561e,	// (0x0000561e) popup_ai2_link_window_g1

0x562a,	// (0x0000562a) popup_ai2_link_window_g2_ParamLimits

0x562a,	// (0x0000562a) popup_ai2_link_window_g2

0x0001,

0xac45,	// (0x0000ac45) popup_ai2_link_window_g_ParamLimits

0xac45,	// (0x0000ac45) popup_ai2_link_window_g

0x563b,	// (0x0000563b) ai2_mp_button_pane

0x5643,	// (0x00005643) ai2_mp_volume_pane

0x3b76,	// (0x00003b76) bg_popup_sub_pane_cp5_ParamLimits

0x3b76,	// (0x00003b76) bg_popup_sub_pane_cp5

0x564b,	// (0x0000564b) heading_ai2_gene_pane_ParamLimits

0x564b,	// (0x0000564b) heading_ai2_gene_pane

0x5657,	// (0x00005657) list_ai2_gene_pane_ParamLimits

0x5657,	// (0x00005657) list_ai2_gene_pane

0x569f,	// (0x0000569f) cell_ai2_link_pane_ParamLimits

0x569f,	// (0x0000569f) cell_ai2_link_pane

0x56b5,	// (0x000056b5) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5788,	// (0x00005788) ai2_mp_volume_pane_g1

0x5790,	// (0x00005790) ai2_mp_volume_pane_g2

0x56fd,	// (0x000056fd) list_ai2_gene_pane_t1

0x5798,	// (0x00005798) ai2_mp_volume_pane_g3

0x0002,

0xac5e,	// (0x0000ac5e) ai2_mp_volume_pane_g

0x57a0,	// (0x000057a0) volume_small_pane_cp3

0x57a9,	// (0x000057a9) aid_size_cell_ai2_button

0x57b1,	// (0x000057b1) grid_ai2_button_pane

0x57ba,	// (0x000057ba) cell_ai2_button_pane_ParamLimits

0x57ba,	// (0x000057ba) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5748,	// (0x00005748) ai2_gene_pane_t1_ParamLimits

0x5748,	// (0x00005748) ai2_gene_pane_t1

0xc180,	// (0x0000c180) aid_height_parent_landscape

0xd1ab,	// (0x0000d1ab) aid_height_set_list

0x4f53,	// (0x00004f53) aid_size_parent

0x531a,	// (0x0000531a) aid_size_cell_graphic_pane_ParamLimits

0x5667,	// (0x00005667) popup_ai2_data_window_g1_ParamLimits

0x5667,	// (0x00005667) popup_ai2_data_window_g1

0x5673,	// (0x00005673) ai2_news_ticker_pane_g1

0x567b,	// (0x0000567b) ai2_news_ticker_pane_g2

0x0001,

0xac4a,	// (0x0000ac4a) ai2_news_ticker_pane_g

0x5683,	// (0x00005683) ai2_news_ticker_pane_t1

0x5691,	// (0x00005691) ai2_news_ticker_pane_t2

0x0001,

0xac4f,	// (0x0000ac4f) ai2_news_ticker_pane_t

0x56be,	// (0x000056be) heading_ai2_gene_pane_g1

0x56c6,	// (0x000056c6) heading_ai2_gene_pane_t1_ParamLimits

0x56c6,	// (0x000056c6) heading_ai2_gene_pane_t1

0x56db,	// (0x000056db) list_highlight_pane_cp6

0x56e3,	// (0x000056e3) ai2_gene_pane_ParamLimits

0x56e3,	// (0x000056e3) ai2_gene_pane

0x570b,	// (0x0000570b) list_ai2_gene_pane_t2

0x0001,

0xac54,	// (0x0000ac54) list_ai2_gene_pane_t

0x5719,	// (0x00005719) list_highlight_pane_cp8_ParamLimits

0x5719,	// (0x00005719) list_highlight_pane_cp8

0x572a,	// (0x0000572a) ai2_gene_pane_g1_ParamLimits

0x572a,	// (0x0000572a) ai2_gene_pane_g1

0x573c,	// (0x0000573c) ai2_gene_pane_g2_ParamLimits

0x573c,	// (0x0000573c) ai2_gene_pane_g2

0x0001,

0xac59,	// (0x0000ac59) ai2_gene_pane_g_ParamLimits

0xac59,	// (0x0000ac59) ai2_gene_pane_g

0x0dd6,	// (0x00000dd6) scroll_pane_cp12

0xc13f,	// (0x0000c13f) control_pane_t3_ParamLimits

0xc13f,	// (0x0000c13f) control_pane_t3

0x293e,	// (0x0000293e) status_small_pane_g8_ParamLimits

0x293e,	// (0x0000293e) status_small_pane_g8

0xc2b2,	// (0x0000c2b2) popup_find_window_ParamLimits

0xc55f,	// (0x0000c55f) popup_note_image_window_ParamLimits

0x3615,	// (0x00003615) list_double2_graphic_pane_vc_g1_ParamLimits

0x3615,	// (0x00003615) list_double2_graphic_pane_vc_g1

0x257f,	// (0x0000257f) list_double2_graphic_pane_vc_g2_ParamLimits

0x257f,	// (0x0000257f) list_double2_graphic_pane_vc_g2

0x3621,	// (0x00003621) list_double2_graphic_pane_vc_g3_ParamLimits

0x3621,	// (0x00003621) list_double2_graphic_pane_vc_g3

0x0002,

0xaa30,	// (0x0000aa30) list_double2_graphic_pane_vc_g_ParamLimits

0xaa30,	// (0x0000aa30) list_double2_graphic_pane_vc_g

0x370b,	// (0x0000370b) list_double2_graphic_pane_vc_t1_ParamLimits

0x370b,	// (0x0000370b) list_double2_graphic_pane_vc_t1

0x257f,	// (0x0000257f) list_single_heading_pane_vc_g1_ParamLimits

0x257f,	// (0x0000257f) list_single_heading_pane_vc_g1

0x3621,	// (0x00003621) list_single_heading_pane_vc_g2_ParamLimits

0x3621,	// (0x00003621) list_single_heading_pane_vc_g2

0x0001,

0xaa58,	// (0x0000aa58) list_single_heading_pane_vc_g_ParamLimits

0xaa58,	// (0x0000aa58) list_single_heading_pane_vc_g

0x3811,	// (0x00003811) list_single_heading_pane_vc_t1_ParamLimits

0x3811,	// (0x00003811) list_single_heading_pane_vc_t1

0x3827,	// (0x00003827) list_single_heading_pane_vc_t2_ParamLimits

0x3827,	// (0x00003827) list_single_heading_pane_vc_t2

0x0001,

0xaa5d,	// (0x0000aa5d) list_single_heading_pane_vc_t_ParamLimits

0xaa5d,	// (0x0000aa5d) list_single_heading_pane_vc_t

0x3851,	// (0x00003851) list_setting_number_pane_vc_g1_ParamLimits

0x3851,	// (0x00003851) list_setting_number_pane_vc_g1

0x385d,	// (0x0000385d) list_setting_number_pane_vc_g2_ParamLimits

0x385d,	// (0x0000385d) list_setting_number_pane_vc_g2

0x0001,

0xaa62,	// (0x0000aa62) list_setting_number_pane_vc_g_ParamLimits

0xaa62,	// (0x0000aa62) list_setting_number_pane_vc_g

0x3869,	// (0x00003869) list_setting_number_pane_vc_t1_ParamLimits

0x3869,	// (0x00003869) list_setting_number_pane_vc_t1

0x387d,	// (0x0000387d) list_setting_number_pane_vc_t2_ParamLimits

0x387d,	// (0x0000387d) list_setting_number_pane_vc_t2

0x3899,	// (0x00003899) list_setting_number_pane_vc_t3_ParamLimits

0x3899,	// (0x00003899) list_setting_number_pane_vc_t3

0x0002,

0xaa67,	// (0x0000aa67) list_setting_number_pane_vc_t_ParamLimits

0xaa67,	// (0x0000aa67) list_setting_number_pane_vc_t

0x38c1,	// (0x000038c1) set_value_pane_vc_ParamLimits

0x38c1,	// (0x000038c1) set_value_pane_vc

0x5180,	// (0x00005180) list_double2_graphic_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_double2_graphic_pane_vc

0x5180,	// (0x00005180) list_double2_large_graphic_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_double2_large_graphic_pane_vc

0x5180,	// (0x00005180) list_double2_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_double2_pane_vc

0x5180,	// (0x00005180) list_double_graphic_heading_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_double_graphic_heading_pane_vc

0x5180,	// (0x00005180) list_double_graphic_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_double_graphic_pane_vc

0x5180,	// (0x00005180) list_double_heading_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_double_heading_pane_vc

0x5180,	// (0x00005180) list_double_large_graphic_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_double_large_graphic_pane_vc

0x5180,	// (0x00005180) list_double_number_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_double_number_pane_vc

0x5180,	// (0x00005180) list_double_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_double_pane_vc

0x5180,	// (0x00005180) list_double_time_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_double_time_pane_vc

0x5180,	// (0x00005180) list_setting_number_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_setting_number_pane_vc

0x5180,	// (0x00005180) list_setting_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_setting_pane_vc

0x5180,	// (0x00005180) list_single_graphic_heading_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_single_graphic_heading_pane_vc

0x5180,	// (0x00005180) list_single_heading_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_single_heading_pane_vc

0x5180,	// (0x00005180) list_single_number_heading_pane_vc_ParamLimits

0x5180,	// (0x00005180) list_single_number_heading_pane_vc

0x3615,	// (0x00003615) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3615,	// (0x00003615) list_double_graphic_heading_pane_vc_g1

0x57ed,	// (0x000057ed) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x57ed,	// (0x000057ed) list_double_graphic_heading_pane_vc_g2

0x57f9,	// (0x000057f9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x57f9,	// (0x000057f9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xac65,	// (0x0000ac65) list_double_graphic_heading_pane_vc_g_ParamLimits

0xac65,	// (0x0000ac65) list_double_graphic_heading_pane_vc_g

0x5805,	// (0x00005805) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5805,	// (0x00005805) list_double_graphic_heading_pane_vc_t1

0x3811,	// (0x00003811) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3811,	// (0x00003811) list_double_graphic_heading_pane_vc_t2

0x0001,

0xac6c,	// (0x0000ac6c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xac6c,	// (0x0000ac6c) list_double_graphic_heading_pane_vc_t

0x3851,	// (0x00003851) list_setting_pane_vc_g1_ParamLimits

0x3851,	// (0x00003851) list_setting_pane_vc_g1

0x385d,	// (0x0000385d) list_setting_pane_vc_g2_ParamLimits

0x385d,	// (0x0000385d) list_setting_pane_vc_g2

0x0001,

0xaa62,	// (0x0000aa62) list_setting_pane_vc_g_ParamLimits

0xaa62,	// (0x0000aa62) list_setting_pane_vc_g

0x5a22,	// (0x00005a22) list_setting_pane_vc_t1_ParamLimits

0x5a22,	// (0x00005a22) list_setting_pane_vc_t1

0x5a36,	// (0x00005a36) list_setting_pane_vc_t2_ParamLimits

0x5a36,	// (0x00005a36) list_setting_pane_vc_t2

0x0001,

0xac9a,	// (0x0000ac9a) list_setting_pane_vc_t_ParamLimits

0xac9a,	// (0x0000ac9a) list_setting_pane_vc_t

0x38c1,	// (0x000038c1) set_value_pane_cp_vc_ParamLimits

0x38c1,	// (0x000038c1) set_value_pane_cp_vc

0x257f,	// (0x0000257f) list_single_number_heading_pane_vc_g1_ParamLimits

0x257f,	// (0x0000257f) list_single_number_heading_pane_vc_g1

0x3621,	// (0x00003621) list_single_number_heading_pane_vc_g2_ParamLimits

0x3621,	// (0x00003621) list_single_number_heading_pane_vc_g2

0x0001,

0xaa58,	// (0x0000aa58) list_single_number_heading_pane_vc_g_ParamLimits

0xaa58,	// (0x0000aa58) list_single_number_heading_pane_vc_g

0x3811,	// (0x00003811) list_single_number_heading_pane_vc_t1_ParamLimits

0x3811,	// (0x00003811) list_single_number_heading_pane_vc_t1

0x5a58,	// (0x00005a58) list_single_number_heading_pane_vc_t2_ParamLimits

0x5a58,	// (0x00005a58) list_single_number_heading_pane_vc_t2

0x5a6c,	// (0x00005a6c) list_single_number_heading_pane_vc_t3_ParamLimits

0x5a6c,	// (0x00005a6c) list_single_number_heading_pane_vc_t3

0x0002,

0xac9f,	// (0x0000ac9f) list_single_number_heading_pane_vc_t_ParamLimits

0xac9f,	// (0x0000ac9f) list_single_number_heading_pane_vc_t

0x3615,	// (0x00003615) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3615,	// (0x00003615) list_single_graphic_heading_pane_vc_g1

0x257f,	// (0x0000257f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x257f,	// (0x0000257f) list_single_graphic_heading_pane_vc_g4

0x3621,	// (0x00003621) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3621,	// (0x00003621) list_single_graphic_heading_pane_vc_g5

0x0002,

0xaa30,	// (0x0000aa30) list_single_graphic_heading_pane_vc_g_ParamLimits

0xaa30,	// (0x0000aa30) list_single_graphic_heading_pane_vc_g

0x3811,	// (0x00003811) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3811,	// (0x00003811) list_single_graphic_heading_pane_vc_t1

0x5a7e,	// (0x00005a7e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5a7e,	// (0x00005a7e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xaca6,	// (0x0000aca6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xaca6,	// (0x0000aca6) list_single_graphic_heading_pane_vc_t

0x257f,	// (0x0000257f) list_double2_pane_vc_g1_ParamLimits

0x257f,	// (0x0000257f) list_double2_pane_vc_g1

0x3621,	// (0x00003621) list_double2_pane_vc_g2_ParamLimits

0x3621,	// (0x00003621) list_double2_pane_vc_g2

0x0001,

0xaa58,	// (0x0000aa58) list_double2_pane_vc_g_ParamLimits

0xaa58,	// (0x0000aa58) list_double2_pane_vc_g

0x5a92,	// (0x00005a92) list_double2_pane_vc_t1_ParamLimits

0x5a92,	// (0x00005a92) list_double2_pane_vc_t1

0x5aa8,	// (0x00005aa8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5aa8,	// (0x00005aa8) list_double2_large_graphic_pane_vc_g1

0x257f,	// (0x0000257f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x257f,	// (0x0000257f) list_double2_large_graphic_pane_vc_g2

0x3621,	// (0x00003621) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3621,	// (0x00003621) list_double2_large_graphic_pane_vc_g3

0x0002,

0xacab,	// (0x0000acab) list_double2_large_graphic_pane_vc_g_ParamLimits

0xacab,	// (0x0000acab) list_double2_large_graphic_pane_vc_g

0x5ab4,	// (0x00005ab4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5ab4,	// (0x00005ab4) list_double2_large_graphic_pane_vc_t1

0x5aca,	// (0x00005aca) list_double_time_pane_vc_g1_ParamLimits

0x5aca,	// (0x00005aca) list_double_time_pane_vc_g1

0x5ad6,	// (0x00005ad6) list_double_time_pane_vc_g2_ParamLimits

0x5ad6,	// (0x00005ad6) list_double_time_pane_vc_g2

0x0001,

0xacb2,	// (0x0000acb2) list_double_time_pane_vc_g_ParamLimits

0xacb2,	// (0x0000acb2) list_double_time_pane_vc_g

0x5ae2,	// (0x00005ae2) list_double_time_pane_vc_t1_ParamLimits

0x5ae2,	// (0x00005ae2) list_double_time_pane_vc_t1

0x5afb,	// (0x00005afb) list_double_time_pane_vc_t2_ParamLimits

0x5afb,	// (0x00005afb) list_double_time_pane_vc_t2

0x5b1b,	// (0x00005b1b) list_double_time_pane_vc_t3_ParamLimits

0x5b1b,	// (0x00005b1b) list_double_time_pane_vc_t3

0x5b33,	// (0x00005b33) list_double_time_pane_vc_t4_ParamLimits

0x5b33,	// (0x00005b33) list_double_time_pane_vc_t4

0x0003,

0xacb7,	// (0x0000acb7) list_double_time_pane_vc_t_ParamLimits

0xacb7,	// (0x0000acb7) list_double_time_pane_vc_t

0x257f,	// (0x0000257f) list_double_pane_vc_g1_ParamLimits

0x257f,	// (0x0000257f) list_double_pane_vc_g1

0x3621,	// (0x00003621) list_double_pane_vc_g2_ParamLimits

0x3621,	// (0x00003621) list_double_pane_vc_g2

0x0001,

0xaa58,	// (0x0000aa58) list_double_pane_vc_g_ParamLimits

0xaa58,	// (0x0000aa58) list_double_pane_vc_g

0x5b47,	// (0x00005b47) list_double_pane_vc_t1_ParamLimits

0x5b47,	// (0x00005b47) list_double_pane_vc_t1

0x5b59,	// (0x00005b59) list_double_pane_vc_t2_ParamLimits

0x5b59,	// (0x00005b59) list_double_pane_vc_t2

0x0001,

0xacc0,	// (0x0000acc0) list_double_pane_vc_t_ParamLimits

0xacc0,	// (0x0000acc0) list_double_pane_vc_t

0x257f,	// (0x0000257f) list_double_number_pane_vc_g1_ParamLimits

0x257f,	// (0x0000257f) list_double_number_pane_vc_g1

0x3621,	// (0x00003621) list_double_number_pane_vc_g2_ParamLimits

0x3621,	// (0x00003621) list_double_number_pane_vc_g2

0x0001,

0xaa58,	// (0x0000aa58) list_double_number_pane_vc_g_ParamLimits

0xaa58,	// (0x0000aa58) list_double_number_pane_vc_g

0x5b71,	// (0x00005b71) list_double_number_pane_vc_t1_ParamLimits

0x5b71,	// (0x00005b71) list_double_number_pane_vc_t1

0x5b85,	// (0x00005b85) list_double_number_pane_vc_t2_ParamLimits

0x5b85,	// (0x00005b85) list_double_number_pane_vc_t2

0x5b59,	// (0x00005b59) list_double_number_pane_vc_t3_ParamLimits

0x5b59,	// (0x00005b59) list_double_number_pane_vc_t3

0x0002,

0xacc5,	// (0x0000acc5) list_double_number_pane_vc_t_ParamLimits

0xacc5,	// (0x0000acc5) list_double_number_pane_vc_t

0x5b97,	// (0x00005b97) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5b97,	// (0x00005b97) list_double_large_graphic_pane_vc_g1

0x5ba3,	// (0x00005ba3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5ba3,	// (0x00005ba3) list_double_large_graphic_pane_vc_g2

0x3621,	// (0x00003621) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3621,	// (0x00003621) list_double_large_graphic_pane_vc_g3

0x5bb2,	// (0x00005bb2) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5bb2,	// (0x00005bb2) list_double_large_graphic_pane_vc_g4

0x0003,

0xaccc,	// (0x0000accc) list_double_large_graphic_pane_vc_g_ParamLimits

0xaccc,	// (0x0000accc) list_double_large_graphic_pane_vc_g

0x5bbe,	// (0x00005bbe) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5bbe,	// (0x00005bbe) list_double_large_graphic_pane_vc_t1

0x5bd0,	// (0x00005bd0) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5bd0,	// (0x00005bd0) list_double_large_graphic_pane_vc_t2

0x0001,

0xacd5,	// (0x0000acd5) list_double_large_graphic_pane_vc_t_ParamLimits

0xacd5,	// (0x0000acd5) list_double_large_graphic_pane_vc_t

0x57ed,	// (0x000057ed) list_double_heading_pane_vc_g1_ParamLimits

0x57ed,	// (0x000057ed) list_double_heading_pane_vc_g1

0x57f9,	// (0x000057f9) list_double_heading_pane_vc_g2_ParamLimits

0x57f9,	// (0x000057f9) list_double_heading_pane_vc_g2

0x0001,

0xacda,	// (0x0000acda) list_double_heading_pane_vc_g_ParamLimits

0xacda,	// (0x0000acda) list_double_heading_pane_vc_g

0x5be9,	// (0x00005be9) list_double_heading_pane_vc_t1_ParamLimits

0x5be9,	// (0x00005be9) list_double_heading_pane_vc_t1

0x3811,	// (0x00003811) list_double_heading_pane_vc_t2_ParamLimits

0x3811,	// (0x00003811) list_double_heading_pane_vc_t2

0x0001,

0xacdf,	// (0x0000acdf) list_double_heading_pane_vc_t_ParamLimits

0xacdf,	// (0x0000acdf) list_double_heading_pane_vc_t

0x3615,	// (0x00003615) list_double_graphic_pane_vc_g1_ParamLimits

0x3615,	// (0x00003615) list_double_graphic_pane_vc_g1

0x5bfd,	// (0x00005bfd) list_double_graphic_pane_vc_g2_ParamLimits

0x5bfd,	// (0x00005bfd) list_double_graphic_pane_vc_g2

0x5c0c,	// (0x00005c0c) list_double_graphic_pane_vc_g3_ParamLimits

0x5c0c,	// (0x00005c0c) list_double_graphic_pane_vc_g3

0x0002,

0xace4,	// (0x0000ace4) list_double_graphic_pane_vc_g_ParamLimits

0xace4,	// (0x0000ace4) list_double_graphic_pane_vc_g

0x5c18,	// (0x00005c18) list_double_graphic_pane_vc_t1_ParamLimits

0x5c18,	// (0x00005c18) list_double_graphic_pane_vc_t1

0x5b59,	// (0x00005b59) list_double_graphic_pane_vc_t2_ParamLimits

0x5b59,	// (0x00005b59) list_double_graphic_pane_vc_t2

0x0001,

0xaceb,	// (0x0000aceb) list_double_graphic_pane_vc_t_ParamLimits

0xaceb,	// (0x0000aceb) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb163,	// (0x0000b163) aid_size_cell_touch_ParamLimits

0xb163,	// (0x0000b163) aid_size_cell_touch

0x02c3,	// (0x000002c3) popup_fast_swap_wide_window_ParamLimits

0x02c3,	// (0x000002c3) popup_fast_swap_wide_window

0xb2b2,	// (0x0000b2b2) touch_pane_ParamLimits

0xb2b2,	// (0x0000b2b2) touch_pane

0x12e5,	// (0x000012e5) button_value_adjust_pane_cp2

0x12ed,	// (0x000012ed) button_value_adjust_pane_cp4

0x1313,	// (0x00001313) form_field_data_pane_cp2

0xbadd,	// (0x0000badd) form_field_data_wide_pane_cp2

0x1b63,	// (0x00001b63) bg_scroll_pane_ParamLimits

0x1b82,	// (0x00001b82) scroll_handle_pane_ParamLimits

0x1b96,	// (0x00001b96) scroll_sc2_down_pane_ParamLimits

0x1b96,	// (0x00001b96) scroll_sc2_down_pane

0x1bbd,	// (0x00001bbd) scroll_sc2_up_pane_ParamLimits

0x1bbd,	// (0x00001bbd) scroll_sc2_up_pane

0xd5a1,	// (0x0000d5a1) grid_wheel_folder_pane_g1_ParamLimits

0xd5a1,	// (0x0000d5a1) grid_wheel_folder_pane_g1

0x225d,	// (0x0000225d) clock_nsta_pane_cp2_ParamLimits

0x225d,	// (0x0000225d) clock_nsta_pane_cp2

0xbf61,	// (0x0000bf61) listscroll_midp_pane_ParamLimits

0xbf72,	// (0x0000bf72) midp_canvas_pane

0x2b07,	// (0x00002b07) nsta_clock_indic_pane

0x2b65,	// (0x00002b65) listscroll_form_pane_vc

0x2b81,	// (0x00002b81) listscroll_set_pane_vc_ParamLimits

0x2b81,	// (0x00002b81) listscroll_set_pane_vc

0xc9d4,	// (0x0000c9d4) clock_nsta_pane

0xc9fe,	// (0x0000c9fe) indicator_nsta_pane

0x3675,	// (0x00003675) bg_popup_sub_pane_cp2_ParamLimits

0x3689,	// (0x00003689) find_pane_cp2_ParamLimits

0x3689,	// (0x00003689) find_pane_cp2

0x369f,	// (0x0000369f) grid_toobar_pane_ParamLimits

0x38cf,	// (0x000038cf) list_form_gen_pane_vc_ParamLimits

0x38cf,	// (0x000038cf) list_form_gen_pane_vc

0x38e5,	// (0x000038e5) scroll_pane_cp8_vc_ParamLimits

0x38e5,	// (0x000038e5) scroll_pane_cp8_vc

0x3a04,	// (0x00003a04) data_form_wide_pane_vc_ParamLimits

0x3a04,	// (0x00003a04) data_form_wide_pane_vc

0x3a10,	// (0x00003a10) form_field_data_wide_pane_vc_g1

0x3a18,	// (0x00003a18) form_field_data_wide_pane_vc_t1_ParamLimits

0x3a18,	// (0x00003a18) form_field_data_wide_pane_vc_t1

0x13db,	// (0x000013db) input_focus_pane_cp6_vc_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_cp6_vc

0xce06,	// (0x0000ce06) list_midp_pane_ParamLimits

0x5386,	// (0x00005386) scroll_pane_cp16_ParamLimits

0x5386,	// (0x00005386) scroll_pane_cp16

0x3d6d,	// (0x00003d6d) button_value_adjust_pane_ParamLimits

0x3d6d,	// (0x00003d6d) button_value_adjust_pane

0xd1bc,	// (0x0000d1bc) button_value_adjust_pane_cp6_ParamLimits

0xd1bc,	// (0x0000d1bc) button_value_adjust_pane_cp6

0xd2fe,	// (0x0000d2fe) settings_code_pane_cp_ParamLimits

0xd2fe,	// (0x0000d2fe) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xa987,	// (0x0000a987) cell_touch_pane_g

0xd476,	// (0x0000d476) cell_touch_pane_cp_ParamLimits

0xd476,	// (0x0000d476) cell_touch_pane_cp

0xd492,	// (0x0000d492) cell_touch_pane_ParamLimits

0xd492,	// (0x0000d492) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5819,	// (0x00005819) list_set_graphic_pane_vc_g1_ParamLimits

0x5819,	// (0x00005819) list_set_graphic_pane_vc_g1

0x5825,	// (0x00005825) list_set_graphic_pane_vc_g2_ParamLimits

0x5825,	// (0x00005825) list_set_graphic_pane_vc_g2

0x0001,

0xac71,	// (0x0000ac71) list_set_graphic_pane_vc_g_ParamLimits

0xac71,	// (0x0000ac71) list_set_graphic_pane_vc_g

0x5831,	// (0x00005831) text_primary_small_cp13_vc_ParamLimits

0x5831,	// (0x00005831) text_primary_small_cp13_vc

0x5849,	// (0x00005849) list_set_graphic_pane_vc_ParamLimits

0x5849,	// (0x00005849) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x585d,	// (0x0000585d) setting_code_pane_vc_t1

0x586b,	// (0x0000586b) set_text_pane_vc_t1_ParamLimits

0x586b,	// (0x0000586b) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5889,	// (0x00005889) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x5893,	// (0x00005893) setting_slider_graphic_pane_vc_g1

0x589b,	// (0x0000589b) setting_slider_graphic_pane_vc_t1

0x58a9,	// (0x000058a9) setting_slider_graphic_pane_vc_t2

0x0001,

0xac76,	// (0x0000ac76) setting_slider_graphic_pane_vc_t

0x58b7,	// (0x000058b7) slider_set_pane_cp_vc

0x58bf,	// (0x000058bf) slider_set_pane_vc_g1

0x58c8,	// (0x000058c8) slider_set_pane_vc_g2

0x0006,

0xac7b,	// (0x0000ac7b) slider_set_pane_vc_g

0x1517,	// (0x00001517) set_opt_bg_pane_g1_copy1

0x151f,	// (0x0000151f) set_opt_bg_pane_g2_copy1

0x58f4,	// (0x000058f4) set_opt_bg_pane_g3_copy1

0x152f,	// (0x0000152f) set_opt_bg_pane_g4_copy1

0x1537,	// (0x00001537) set_opt_bg_pane_g5_copy1

0x153f,	// (0x0000153f) set_opt_bg_pane_g6_copy1

0x58fe,	// (0x000058fe) set_opt_bg_pane_g7_copy1

0x5908,	// (0x00005908) set_opt_bg_pane_g8_copy1

0x5912,	// (0x00005912) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x591c,	// (0x0000591c) setting_slider_pane_vc_t1

0x589b,	// (0x0000589b) setting_slider_pane_vc_t2

0x58a9,	// (0x000058a9) setting_slider_pane_vc_t3

0x0002,

0xac8a,	// (0x0000ac8a) setting_slider_pane_vc_t

0x58b7,	// (0x000058b7) slider_set_pane_vc

0x458f,	// (0x0000458f) volume_set_pane_vc_g1

0x4598,	// (0x00004598) volume_set_pane_vc_g2

0x45a1,	// (0x000045a1) volume_set_pane_vc_g3

0x45aa,	// (0x000045aa) volume_set_pane_vc_g4

0x45b3,	// (0x000045b3) volume_set_pane_vc_g5

0x45bc,	// (0x000045bc) volume_set_pane_vc_g6

0x45c5,	// (0x000045c5) volume_set_pane_vc_g7

0x45ce,	// (0x000045ce) volume_set_pane_vc_g8

0x45d7,	// (0x000045d7) volume_set_pane_vc_g9

0x45e0,	// (0x000045e0) volume_set_pane_vc_g10

0x0009,

0xab28,	// (0x0000ab28) volume_set_pane_vc_g

0x592b,	// (0x0000592b) volume_set_pane_vc

0x5933,	// (0x00005933) button_value_adjust_pane_cp1_vc

0x593d,	// (0x0000593d) list_highlight_pane_cp2_vc

0x5946,	// (0x00005946) list_set_pane_vc_ParamLimits

0x5946,	// (0x00005946) list_set_pane_vc

0x59b0,	// (0x000059b0) main_pane_set_vc_t1_ParamLimits

0x59b0,	// (0x000059b0) main_pane_set_vc_t1

0x59c5,	// (0x000059c5) main_pane_set_vc_t2_ParamLimits

0x59c5,	// (0x000059c5) main_pane_set_vc_t2

0x59d7,	// (0x000059d7) main_pane_set_vc_t3_ParamLimits

0x59d7,	// (0x000059d7) main_pane_set_vc_t3

0x59eb,	// (0x000059eb) main_pane_set_vc_t4_ParamLimits

0x59eb,	// (0x000059eb) main_pane_set_vc_t4

0x0003,

0xac91,	// (0x0000ac91) main_pane_set_vc_t_ParamLimits

0xac91,	// (0x0000ac91) main_pane_set_vc_t

0x59ff,	// (0x000059ff) setting_code_pane_vc_ParamLimits

0x59ff,	// (0x000059ff) setting_code_pane_vc

0x5a10,	// (0x00005a10) setting_slider_graphic_pane_vc

0x5a10,	// (0x00005a10) setting_slider_pane_vc

0x5a10,	// (0x00005a10) setting_text_pane_vc

0x5a10,	// (0x00005a10) setting_volume_pane_vc

0x5a1a,	// (0x00005a1a) scroll_pane_cp121_vc

0x12d3,	// (0x000012d3) set_content_pane_vc

0x5c2a,	// (0x00005c2a) button_value_adjust_pane_g1

0x5c33,	// (0x00005c33) button_value_adjust_pane_g2

0x0001,

0xacf0,	// (0x0000acf0) button_value_adjust_pane_g

0x5c3c,	// (0x00005c3c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5c3c,	// (0x00005c3c) form_field_slider_wide_pane_vc_t1

0x5c50,	// (0x00005c50) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5c50,	// (0x00005c50) form_field_slider_wide_pane_vc_t2

0x0001,

0xacf5,	// (0x0000acf5) form_field_slider_wide_pane_vc_t_ParamLimits

0xacf5,	// (0x0000acf5) form_field_slider_wide_pane_vc_t

0x0835,	// (0x00000835) input_focus_pane_cp10_vc_ParamLimits

0x0835,	// (0x00000835) input_focus_pane_cp10_vc

0x5c62,	// (0x00005c62) slider_cont_pane_cp1_vc_ParamLimits

0x5c62,	// (0x00005c62) slider_cont_pane_cp1_vc

0x58bf,	// (0x000058bf) slider_form_pane_g1_cp2

0x58c8,	// (0x000058c8) slider_form_pane_g2_cp2

0x5c7b,	// (0x00005c7b) form_field_slider_pane_vc_t3

0x5c89,	// (0x00005c89) form_field_slider_pane_vc_t4

0x5c97,	// (0x00005c97) slider_form_pane_vc_ParamLimits

0x5c97,	// (0x00005c97) slider_form_pane_vc

0x5ca4,	// (0x00005ca4) form_field_slider_pane_vc_t1_ParamLimits

0x5ca4,	// (0x00005ca4) form_field_slider_pane_vc_t1

0x5c50,	// (0x00005c50) form_field_slider_pane_vc_t2_ParamLimits

0x5c50,	// (0x00005c50) form_field_slider_pane_vc_t2

0x0001,

0xad05,	// (0x0000ad05) form_field_slider_pane_vc_t_ParamLimits

0xad05,	// (0x0000ad05) form_field_slider_pane_vc_t

0x0835,	// (0x00000835) input_focus_pane_cp9_vc_ParamLimits

0x0835,	// (0x00000835) input_focus_pane_cp9_vc

0x5cc0,	// (0x00005cc0) slider_cont_pane_vc_ParamLimits

0x5cc0,	// (0x00005cc0) slider_cont_pane_vc

0x5cd2,	// (0x00005cd2) list_form_graphic_pane_cp_vc_ParamLimits

0x5cd2,	// (0x00005cd2) list_form_graphic_pane_cp_vc

0x3a10,	// (0x00003a10) form_field_popup_wide_pane_vc_g1

0x5ce7,	// (0x00005ce7) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5ce7,	// (0x00005ce7) form_field_popup_wide_pane_vc_t1

0x13db,	// (0x000013db) input_focus_pane_cp8_vc_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_cp8_vc

0x5cfe,	// (0x00005cfe) list_form_wide_pane_vc_ParamLimits

0x5cfe,	// (0x00005cfe) list_form_wide_pane_vc

0x5d0a,	// (0x00005d0a) list_form_graphic_pane_vc_g1

0x5d12,	// (0x00005d12) list_form_graphic_pane_vc_t1_ParamLimits

0x5d12,	// (0x00005d12) list_form_graphic_pane_vc_t1

0x050f,	// (0x0000050f) list_highlight_pane_cp5_vc_ParamLimits

0x050f,	// (0x0000050f) list_highlight_pane_cp5_vc

0x5d2e,	// (0x00005d2e) list_form_graphic_pane_vc_ParamLimits

0x5d2e,	// (0x00005d2e) list_form_graphic_pane_vc

0x3a10,	// (0x00003a10) form_field_popup_pane_vc_g1

0x5d44,	// (0x00005d44) form_field_popup_pane_vc_t1_ParamLimits

0x5d44,	// (0x00005d44) form_field_popup_pane_vc_t1

0x13db,	// (0x000013db) input_focus_pane_cp7_vc_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_cp7_vc

0x5d5b,	// (0x00005d5b) list_form_pane_vc_ParamLimits

0x5d5b,	// (0x00005d5b) list_form_pane_vc

0x5d67,	// (0x00005d67) data_form_pane_vc_t1_ParamLimits

0x5d67,	// (0x00005d67) data_form_pane_vc_t1

0x1517,	// (0x00001517) input_focus_pane_vc_g1

0x151f,	// (0x0000151f) input_focus_pane_vc_g2

0x1527,	// (0x00001527) input_focus_pane_vc_g3

0x152f,	// (0x0000152f) input_focus_pane_vc_g4

0x1537,	// (0x00001537) input_focus_pane_vc_g5

0x153f,	// (0x0000153f) input_focus_pane_vc_g6

0x1547,	// (0x00001547) input_focus_pane_vc_g7

0x154f,	// (0x0000154f) input_focus_pane_vc_g8

0x1557,	// (0x00001557) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xa910,	// (0x0000a910) input_focus_pane_vc_g

0x3a04,	// (0x00003a04) data_form_pane_vc_ParamLimits

0x3a04,	// (0x00003a04) data_form_pane_vc

0x3a10,	// (0x00003a10) form_field_data_pane_vc_g1

0x5d84,	// (0x00005d84) form_field_data_pane_vc_t1_ParamLimits

0x5d84,	// (0x00005d84) form_field_data_pane_vc_t1

0x13db,	// (0x000013db) input_focus_pane_vc_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_vc

0x5d9e,	// (0x00005d9e) button_value_adjust_pane_cp3_vc

0x5da6,	// (0x00005da6) button_value_adjust_pane_cp5_vc

0x5dae,	// (0x00005dae) form_field_data_pane_vc_ParamLimits

0x5dae,	// (0x00005dae) form_field_data_pane_vc

0x5dc9,	// (0x00005dc9) form_field_data_pane_vc_cp2

0x5dd1,	// (0x00005dd1) form_field_data_wide_pane_vc_ParamLimits

0x5dd1,	// (0x00005dd1) form_field_data_wide_pane_vc

0x5deb,	// (0x00005deb) form_field_data_wide_pane_vc_cp2

0x5df3,	// (0x00005df3) form_field_popup_pane_vc_ParamLimits

0x5df3,	// (0x00005df3) form_field_popup_pane_vc

0x5e0e,	// (0x00005e0e) form_field_popup_wide_pane_vc_ParamLimits

0x5e0e,	// (0x00005e0e) form_field_popup_wide_pane_vc

0x5e28,	// (0x00005e28) form_field_slider_pane_vc_ParamLimits

0x5e28,	// (0x00005e28) form_field_slider_pane_vc

0x5e3b,	// (0x00005e3b) form_field_slider_wide_pane_vc_ParamLimits

0x5e3b,	// (0x00005e3b) form_field_slider_wide_pane_vc

0xd4b0,	// (0x0000d4b0) grid_touch_1_pane_ParamLimits

0xd4b0,	// (0x0000d4b0) grid_touch_1_pane

0xd4c4,	// (0x0000d4c4) grid_touch_2_pane_ParamLimits

0xd4c4,	// (0x0000d4c4) grid_touch_2_pane

0x5f12,	// (0x00005f12) touch_pane_g1_ParamLimits

0x5f12,	// (0x00005f12) touch_pane_g1

0x5e74,	// (0x00005e74) cell_app_pane_cp_wide_ParamLimits

0x5e74,	// (0x00005e74) cell_app_pane_cp_wide

0x5e85,	// (0x00005e85) grid_popup_fast_wide_pane_ParamLimits

0x5e85,	// (0x00005e85) grid_popup_fast_wide_pane

0x5e99,	// (0x00005e99) scroll_pane_cp19_ParamLimits

0x5e99,	// (0x00005e99) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5ead,	// (0x00005ead) listscroll_popup_fast_wide_pane

0x1713,	// (0x00001713) grid_indicator_nsta_pane

0x5eb5,	// (0x00005eb5) clock_nsta_pane_g1

0x5ebe,	// (0x00005ebe) clock_nsta_pane_t1

0xd4f0,	// (0x0000d4f0) cell_indicator_nsta_pane_ParamLimits

0xd4f0,	// (0x0000d4f0) cell_indicator_nsta_pane

0x5f12,	// (0x00005f12) cell_indicator_nsta_pane_g1

0xd50d,	// (0x0000d50d) cell_indicator_nsta_pane_g2

0x0001,

0xf62b,	// (0x0000f62b) cell_indicator_nsta_pane_g

0x5f35,	// (0x00005f35) clock_nsta_pane_cp

0x5f3d,	// (0x00005f3d) indicator_nsta_pane_cp

0x5f45,	// (0x00005f45) nsta_clock_indic_pane_g1

0x0685,	// (0x00000685) grid_indicator_pane

0x1caf,	// (0x00001caf) scroll_pane_cp29

0x2187,	// (0x00002187) indicator_nsta_pane_cp2_ParamLimits

0x2187,	// (0x00002187) indicator_nsta_pane_cp2

0x050f,	// (0x0000050f) main_apps_wheel_pane

0x3bfe,	// (0x00003bfe) form_midp_field_text_pane_ParamLimits

0x3d4d,	// (0x00003d4d) scroll_bar_cp050_ParamLimits

0x5f7d,	// (0x00005f7d) cell_indicator_pane_ParamLimits

0x5f7d,	// (0x00005f7d) cell_indicator_pane

0x5f95,	// (0x00005f95) cell_indicator_pane_g1

0xd523,	// (0x0000d523) grid_wheel_folder_pane_ParamLimits

0xd523,	// (0x0000d523) grid_wheel_folder_pane

0xd531,	// (0x0000d531) list_wheel_apps_pane_ParamLimits

0xd531,	// (0x0000d531) list_wheel_apps_pane

0xd53f,	// (0x0000d53f) main_apps_wheel_pane_g1_ParamLimits

0xd53f,	// (0x0000d53f) main_apps_wheel_pane_g1

0xd54f,	// (0x0000d54f) main_apps_wheel_pane_g2_ParamLimits

0xd54f,	// (0x0000d54f) main_apps_wheel_pane_g2

0x0001,

0xf630,	// (0x0000f630) main_apps_wheel_pane_g_ParamLimits

0xf630,	// (0x0000f630) main_apps_wheel_pane_g

0xd55f,	// (0x0000d55f) main_apps_wheel_pane_t1_ParamLimits

0xd55f,	// (0x0000d55f) main_apps_wheel_pane_t1

0xd577,	// (0x0000d577) list_wheel_apps_pane_g1

0xd57f,	// (0x0000d57f) list_wheel_apps_pane_g2

0xd587,	// (0x0000d587) list_wheel_apps_pane_g3

0xd58f,	// (0x0000d58f) list_wheel_apps_pane_g4

0xd597,	// (0x0000d597) list_wheel_apps_pane_g5

0x0004,

0xf635,	// (0x0000f635) list_wheel_apps_pane_g

0x248a,	// (0x0000248a) navi_icon_text_pane

0xc8cd,	// (0x0000c8cd) aid_fill_nsta

0xd5b4,	// (0x0000d5b4) navi_icon_text_pane_g1

0xd5c0,	// (0x0000d5c0) navi_icon_text_pane_t1

0xbf49,	// (0x0000bf49) list_set_graphic_pane_t1_ParamLimits

0xbf49,	// (0x0000bf49) list_set_graphic_pane_t1

0x446d,	// (0x0000446d) popup_midp_note_alarm_window_t6_ParamLimits

0x446d,	// (0x0000446d) popup_midp_note_alarm_window_t6

0x447f,	// (0x0000447f) popup_midp_note_alarm_window_t7_ParamLimits

0x447f,	// (0x0000447f) popup_midp_note_alarm_window_t7

0x4491,	// (0x00004491) popup_midp_note_alarm_window_t8_ParamLimits

0x4491,	// (0x00004491) popup_midp_note_alarm_window_t8

0x44a3,	// (0x000044a3) popup_midp_note_alarm_window_t9_ParamLimits

0x44a3,	// (0x000044a3) popup_midp_note_alarm_window_t9

0x44b5,	// (0x000044b5) popup_midp_note_alarm_window_t10_ParamLimits

0x44b5,	// (0x000044b5) popup_midp_note_alarm_window_t10

0x44c7,	// (0x000044c7) popup_midp_note_alarm_window_t11_ParamLimits

0x44c7,	// (0x000044c7) popup_midp_note_alarm_window_t11

0x44d9,	// (0x000044d9) scroll_pane_cp17_ParamLimits

0x44d9,	// (0x000044d9) scroll_pane_cp17

0x458f,	// (0x0000458f) volume_small_pane_cp_g1

0x608e,	// (0x0000608e) volume_small_pane_cp_g2

0x6097,	// (0x00006097) volume_small_pane_cp_g3

0x60a0,	// (0x000060a0) volume_small_pane_cp_g4

0x60a9,	// (0x000060a9) volume_small_pane_cp_g5

0x60b2,	// (0x000060b2) volume_small_pane_cp_g6

0x60bb,	// (0x000060bb) volume_small_pane_cp_g7

0x60c4,	// (0x000060c4) volume_small_pane_cp_g8

0x60cd,	// (0x000060cd) volume_small_pane_cp_g9

0x60d6,	// (0x000060d6) volume_small_pane_cp_g10

0x26eb,	// (0x000026eb) midp_ticker_pane_g1_ParamLimits

0x26f7,	// (0x000026f7) midp_ticker_pane_g2_ParamLimits

0xa9d8,	// (0x0000a9d8) midp_ticker_pane_g_ParamLimits

0xc009,	// (0x0000c009) midp_ticker_pane_t1_ParamLimits

0xc8ed,	// (0x0000c8ed) aid_fill_nsta_2

0x3d39,	// (0x00003d39) list_form2_midp_pane

0x513b,	// (0x0000513b) midp_editing_number_pane_ParamLimits

0x514a,	// (0x0000514a) midp_ticker_pane_ParamLimits

0x60df,	// (0x000060df) form2_midp_field_pane

0x6103,	// (0x00006103) scroll_pane_cp51

0x6123,	// (0x00006123) form2_midp_button_pane_ParamLimits

0x6123,	// (0x00006123) form2_midp_button_pane

0x6135,	// (0x00006135) form2_midp_content_pane_ParamLimits

0x6135,	// (0x00006135) form2_midp_content_pane

0x614f,	// (0x0000614f) form2_midp_field_choice_group_pane

0x6157,	// (0x00006157) form2_midp_field_pane_g1

0x615f,	// (0x0000615f) form2_midp_field_pane_g2

0x6167,	// (0x00006167) form2_midp_field_pane_g3

0x616f,	// (0x0000616f) form2_midp_field_pane_g4

0x0003,

0xad48,	// (0x0000ad48) form2_midp_field_pane_g

0x6177,	// (0x00006177) form2_midp_gauge_slider_pane

0x617f,	// (0x0000617f) form2_midp_gauge_wait_pane

0x6187,	// (0x00006187) form2_midp_image_pane_ParamLimits

0x6187,	// (0x00006187) form2_midp_image_pane

0x61a2,	// (0x000061a2) form2_midp_label_pane_ParamLimits

0x61a2,	// (0x000061a2) form2_midp_label_pane

0xd5ee,	// (0x0000d5ee) form2_midp_label_pane_cp_ParamLimits

0xd5ee,	// (0x0000d5ee) form2_midp_label_pane_cp

0x61e2,	// (0x000061e2) form2_midp_string_pane_ParamLimits

0x61e2,	// (0x000061e2) form2_midp_string_pane

0xd60f,	// (0x0000d60f) form2_midp_text_pane_ParamLimits

0xd60f,	// (0x0000d60f) form2_midp_text_pane

0x6215,	// (0x00006215) form2_midp_time_pane

0x6225,	// (0x00006225) input_focus_pane_cp51_ParamLimits

0x6225,	// (0x00006225) input_focus_pane_cp51

0x623d,	// (0x0000623d) form2_midp_label_pane_t1_ParamLimits

0x623d,	// (0x0000623d) form2_midp_label_pane_t1

0xd630,	// (0x0000d630) form2_mdip_text_pane_t1_ParamLimits

0xd630,	// (0x0000d630) form2_mdip_text_pane_t1

0x62a5,	// (0x000062a5) form2_midp_time_pane_t1

0x62c0,	// (0x000062c0) form2_midp_gauge_slider_pane_t1

0xd64f,	// (0x0000d64f) form2_midp_gauge_slider_pane_t2

0xd661,	// (0x0000d661) form2_midp_gauge_slider_pane_t3

0x0002,

0xf645,	// (0x0000f645) form2_midp_gauge_slider_pane_t

0x62f6,	// (0x000062f6) form2_midp_slider_pane

0x6302,	// (0x00006302) form2_midp_gauge_wait_pane_t1

0x6310,	// (0x00006310) form2_midp_wait_pane_ParamLimits

0x6310,	// (0x00006310) form2_midp_wait_pane

0xcd78,	// (0x0000cd78) list_single_2graphic_pane_cp4_ParamLimits

0xcd78,	// (0x0000cd78) list_single_2graphic_pane_cp4

0xd673,	// (0x0000d673) list_single_midp_graphic_pane_cp_ParamLimits

0xd673,	// (0x0000d673) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x635f,	// (0x0000635f) list_single_2graphic_pane_g1_cp4

0x56be,	// (0x000056be) list_single_2graphic_pane_g2_cp4

0x6367,	// (0x00006367) list_single_2graphic_pane_t1_cp4

0x050f,	// (0x0000050f) list_highlight_pane_cp21

0x6376,	// (0x00006376) list_single_midp_graphic_pane_g4_cp

0x6385,	// (0x00006385) list_single_midp_graphic_pane_t1_cp

0xd694,	// (0x0000d694) form2_mdip_string_pane_t1_ParamLimits

0xd694,	// (0x0000d694) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1087,	// (0x00001087) list_double_large_graphic_pane_g5_ParamLimits

0x1087,	// (0x00001087) list_double_large_graphic_pane_g5

0xbf61,	// (0x0000bf61) midp_form_pane_ParamLimits

0x050f,	// (0x0000050f) main_apps_wheel_pane_ParamLimits

0xc5e5,	// (0x0000c5e5) popup_preview_window_ParamLimits

0xc5e5,	// (0x0000c5e5) popup_preview_window

0x315f,	// (0x0000315f) popup_touch_info_window_ParamLimits

0x315f,	// (0x0000315f) popup_touch_info_window

0x3181,	// (0x00003181) popup_touch_menu_window_ParamLimits

0x3181,	// (0x00003181) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x643f,	// (0x0000643f) list_touch_menu_pane

0x6447,	// (0x00006447) list_single_touch_menu_pane_ParamLimits

0x6447,	// (0x00006447) list_single_touch_menu_pane

0x6462,	// (0x00006462) list_single_touch_menu_pane_t1

0x050f,	// (0x0000050f) bg_popup_sub_pane_cp7_ParamLimits

0x050f,	// (0x0000050f) bg_popup_sub_pane_cp7

0x6470,	// (0x00006470) heading_sub_pane

0x6478,	// (0x00006478) list_touch_info_pane_ParamLimits

0x6478,	// (0x00006478) list_touch_info_pane

0x6487,	// (0x00006487) list_single_touch_info_pane_ParamLimits

0x6487,	// (0x00006487) list_single_touch_info_pane

0x6499,	// (0x00006499) list_single_touch_info_pane_t1

0x64a7,	// (0x000064a7) list_single_touch_info_pane_t2

0x0001,

0xad5f,	// (0x0000ad5f) list_single_touch_info_pane_t

0x260e,	// (0x0000260e) bg_popup_heading_pane_cp

0x64b5,	// (0x000064b5) heading_sub_pane_t1

0x3910,	// (0x00003910) bg_popup_preview_window_pane_cp_ParamLimits

0x3910,	// (0x00003910) bg_popup_preview_window_pane_cp

0x6470,	// (0x00006470) heading_preview_pane

0x6478,	// (0x00006478) list_preview_pane_ParamLimits

0x6478,	// (0x00006478) list_preview_pane

0x64c3,	// (0x000064c3) popup_preview_window_g1

0x6487,	// (0x00006487) list_single_preview_pane_ParamLimits

0x6487,	// (0x00006487) list_single_preview_pane

0x64cb,	// (0x000064cb) list_single_preview_pane_g1

0x64d3,	// (0x000064d3) list_single_preview_pane_t1

0x6499,	// (0x00006499) list_single_preview_pane_t2

0x0001,

0xad64,	// (0x0000ad64) list_single_preview_pane_t

0x64e1,	// (0x000064e1) bg_popup_heading_pane_cp2_ParamLimits

0x64e1,	// (0x000064e1) bg_popup_heading_pane_cp2

0x64f7,	// (0x000064f7) heading_preview_pane_g1

0x64ff,	// (0x000064ff) heading_preview_pane_t1_ParamLimits

0x64ff,	// (0x000064ff) heading_preview_pane_t1

0x06a8,	// (0x000006a8) soft_indicator_pane_t1_ParamLimits

0x0db3,	// (0x00000db3) scroll_pane_ParamLimits

0x1bab,	// (0x00001bab) scroll_sc2_left_pane

0x1bb4,	// (0x00001bb4) scroll_sc2_right_pane

0x1bd3,	// (0x00001bd3) scroll_bg_pane_g1_ParamLimits

0x1be8,	// (0x00001be8) scroll_bg_pane_g2_ParamLimits

0x1c00,	// (0x00001c00) scroll_bg_pane_g3_ParamLimits

0xa967,	// (0x0000a967) scroll_bg_pane_g_ParamLimits

0x1bd3,	// (0x00001bd3) scroll_handle_pane_g1_ParamLimits

0x1c22,	// (0x00001c22) scroll_handle_pane_g2_ParamLimits

0x1c00,	// (0x00001c00) scroll_handle_pane_g3_ParamLimits

0xa96e,	// (0x0000a96e) scroll_handle_pane_g_ParamLimits

0x2bc3,	// (0x00002bc3) popup_choice_list_window_ParamLimits

0x2bc3,	// (0x00002bc3) popup_choice_list_window

0x3681,	// (0x00003681) choice_list_pane

0x3749,	// (0x00003749) cell_toolbar_pane_t1

0x3771,	// (0x00003771) toolbar_button_pane_ParamLimits

0x4b15,	// (0x00004b15) ai_gene_pane_1_t2_ParamLimits

0x4b15,	// (0x00004b15) ai_gene_pane_1_t2

0x0001,

0xab84,	// (0x0000ab84) ai_gene_pane_1_t_ParamLimits

0xab84,	// (0x0000ab84) ai_gene_pane_1_t

0x651c,	// (0x0000651c) scroll_sc2_left_pane_g1

0x651c,	// (0x0000651c) scroll_sc2_right_pane_g1

0x2b93,	// (0x00002b93) bg_popup_sub_pane_cp10

0x6526,	// (0x00006526) list_choice_list_pane

0x653d,	// (0x0000653d) list_single_choice_list_pane_ParamLimits

0x653d,	// (0x0000653d) list_single_choice_list_pane

0x6551,	// (0x00006551) list_single_choice_list_pane_g1

0x6559,	// (0x00006559) list_single_choice_list_pane_t1_ParamLimits

0x6559,	// (0x00006559) list_single_choice_list_pane_t1

0x656e,	// (0x0000656e) choice_list_pane_g1

0x6576,	// (0x00006576) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x190b,	// (0x0000190b) title_pane_stacon_g2_ParamLimits

0x190b,	// (0x0000190b) title_pane_stacon_g2

0x0002,

0xa94d,	// (0x0000a94d) title_pane_stacon_g_ParamLimits

0xa94d,	// (0x0000a94d) title_pane_stacon_g

0x260e,	// (0x0000260e) cursor_press_pane

0xc266,	// (0x0000c266) popup_fep_hwr_window_ParamLimits

0xc266,	// (0x0000c266) popup_fep_hwr_window

0x2d03,	// (0x00002d03) popup_fep_vkb_window_ParamLimits

0x2d03,	// (0x00002d03) popup_fep_vkb_window

0x6584,	// (0x00006584) cursor_press_pane_g1

0x0002,

0xf659,	// (0x0000f659) fep_vkb_side_pane_g_ParamLimits

0x65c5,	// (0x000065c5) fep_hwr_candidate_pane_ParamLimits

0x65c5,	// (0x000065c5) fep_hwr_candidate_pane

0x65ef,	// (0x000065ef) fep_hwr_side_pane_ParamLimits

0x65ef,	// (0x000065ef) fep_hwr_side_pane

0x6611,	// (0x00006611) fep_hwr_top_pane_ParamLimits

0x6611,	// (0x00006611) fep_hwr_top_pane

0x6629,	// (0x00006629) fep_hwr_write_pane_ParamLimits

0x6629,	// (0x00006629) fep_hwr_write_pane

0xf659,	// (0x0000f659) fep_vkb_side_pane_g

0x6663,	// (0x00006663) fep_hwr_top_pane_g1

0x6675,	// (0x00006675) fep_hwr_top_pane_g2

0x6687,	// (0x00006687) fep_hwr_top_pane_g3

0x0002,

0xad69,	// (0x0000ad69) fep_hwr_top_pane_g

0x669c,	// (0x0000669c) fep_hwr_top_text_pane

0x1d77,	// (0x00001d77) fep_hwr_top_text_pane_g1

0x6778,	// (0x00006778) fep_hwr_top_text_pane_t1

0x67d8,	// (0x000067d8) fep_hwr_candidate_pane_g1

0x6a49,	// (0x00006a49) fep_vkb_keypad_pane_g3_ParamLimits

0x6a49,	// (0x00006a49) fep_vkb_keypad_pane_g3

0x6a75,	// (0x00006a75) fep_vkb_keypad_pane_g4_ParamLimits

0x6a75,	// (0x00006a75) fep_vkb_keypad_pane_g4

0x6aec,	// (0x00006aec) fep_vkb_bottom_pane_g2_ParamLimits

0x6aec,	// (0x00006aec) fep_vkb_bottom_pane_g2

0x0001,

0xad94,	// (0x0000ad94) fep_vkb_bottom_pane_g_ParamLimits

0xad94,	// (0x0000ad94) fep_vkb_bottom_pane_g

0x651c,	// (0x0000651c) cell_vkb_side_pane_g2

0x0001,

0xad9e,	// (0x0000ad9e) cell_vkb_side_pane_g

0x6b77,	// (0x00006b77) cell_vkb_side_pane_t1

0x6b85,	// (0x00006b85) cell_vkb_side_pane_t1_copy1

0x651c,	// (0x0000651c) bg_fep_vkb_candidate_pane_g2

0x6cc9,	// (0x00006cc9) cell_vkb_candidate_pane_ParamLimits

0x680c,	// (0x0000680c) aid_size_cell_vkb_ParamLimits

0x680c,	// (0x0000680c) aid_size_cell_vkb

0x6cc9,	// (0x00006cc9) cell_vkb_candidate_pane

0x6d03,	// (0x00006d03) bg_popup_fep_shadow_pane_g1

0xd77d,	// (0x0000d77d) fep_vkb_bottom_pane_ParamLimits

0xd77d,	// (0x0000d77d) fep_vkb_bottom_pane

0x68db,	// (0x000068db) fep_vkb_candidate_pane_ParamLimits

0x68db,	// (0x000068db) fep_vkb_candidate_pane

0xd7a9,	// (0x0000d7a9) fep_vkb_keypad_pane_ParamLimits

0xd7a9,	// (0x0000d7a9) fep_vkb_keypad_pane

0xd7d0,	// (0x0000d7d0) fep_vkb_side_pane_ParamLimits

0xd7d0,	// (0x0000d7d0) fep_vkb_side_pane

0xd80c,	// (0x0000d80c) fep_vkb_top_pane_ParamLimits

0xd80c,	// (0x0000d80c) fep_vkb_top_pane

0x69a2,	// (0x000069a2) fep_vkb_top_pane_g1_ParamLimits

0x69a2,	// (0x000069a2) fep_vkb_top_pane_g1

0x69b1,	// (0x000069b1) fep_vkb_top_pane_g2_ParamLimits

0x69b1,	// (0x000069b1) fep_vkb_top_pane_g2

0x69c0,	// (0x000069c0) fep_vkb_top_pane_g3_ParamLimits

0x69c0,	// (0x000069c0) fep_vkb_top_pane_g3

0x0003,

0xad84,	// (0x0000ad84) fep_vkb_top_pane_g_ParamLimits

0xad84,	// (0x0000ad84) fep_vkb_top_pane_g

0x69de,	// (0x000069de) fep_vkb_top_text_pane_ParamLimits

0x69de,	// (0x000069de) fep_vkb_top_text_pane

0xd848,	// (0x0000d848) fep_vkb_side_pane_g1_ParamLimits

0xd848,	// (0x0000d848) fep_vkb_side_pane_g1

0x6a38,	// (0x00006a38) grid_vkb_side_pane_ParamLimits

0x6a38,	// (0x00006a38) grid_vkb_side_pane

0x6d0b,	// (0x00006d0b) bg_popup_fep_shadow_pane_g2

0x6d14,	// (0x00006d14) bg_popup_fep_shadow_pane_g3

0x6d1c,	// (0x00006d1c) bg_popup_fep_shadow_pane_g4

0x6d25,	// (0x00006d25) bg_popup_fep_shadow_pane_g5

0x6d2f,	// (0x00006d2f) bg_popup_fep_shadow_pane_g6

0x6d37,	// (0x00006d37) bg_popup_fep_shadow_pane_g7

0x1537,	// (0x00001537) bg_popup_fep_shadow_pane_g8

0x6a97,	// (0x00006a97) grid_vkb_keypad_number_pane_ParamLimits

0x6a97,	// (0x00006a97) grid_vkb_keypad_number_pane

0x6aab,	// (0x00006aab) grid_vkb_keypad_pane_ParamLimits

0x6aab,	// (0x00006aab) grid_vkb_keypad_pane

0x6ad1,	// (0x00006ad1) fep_vkb_bottom_pane_g1_ParamLimits

0x6ad1,	// (0x00006ad1) fep_vkb_bottom_pane_g1

0x6afa,	// (0x00006afa) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6afa,	// (0x00006afa) grid_vkb_keypad_bottom_left_pane

0x6b0f,	// (0x00006b0f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6b0f,	// (0x00006b0f) grid_vkb_keypad_bottom_right_pane

0x6b24,	// (0x00006b24) fep_vkb_top_text_pane_g1

0xd88f,	// (0x0000d88f) fep_vkb_top_text_pane_t1

0xd8a1,	// (0x0000d8a1) cell_vkb_side_pane_ParamLimits

0xd8a1,	// (0x0000d8a1) cell_vkb_side_pane

0x651c,	// (0x0000651c) cell_vkb_side_pane_g1

0x6b93,	// (0x00006b93) cell_vkb_keypad_pane_ParamLimits

0x6b93,	// (0x00006b93) cell_vkb_keypad_pane

0x6c20,	// (0x00006c20) cell_vkb_keypad_pane_g1

0x0008,

0xadb1,	// (0x0000adb1) bg_popup_fep_shadow_pane_g

0x651c,	// (0x0000651c) cell_hwr_side_pane_g1

0x651c,	// (0x0000651c) cell_hwr_side_pane_g2

0x6c2a,	// (0x00006c2a) cell_vkb_keypad_pane_t1

0xd8b7,	// (0x0000d8b7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd8b7,	// (0x0000d8b7) cell_vkb_keypad_bottom_left_pane

0xd8cc,	// (0x0000d8cc) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd8cc,	// (0x0000d8cc) cell_vkb_keypad_bottom_right_pane

0x651c,	// (0x0000651c) cell_vkb_keypad_bottom_left_pane_g1

0x651c,	// (0x0000651c) cell_vkb_keypad_bottom_right_pane_g1

0x6c8e,	// (0x00006c8e) cell_vkb_keypad_number_pane_ParamLimits

0x6c8e,	// (0x00006c8e) cell_vkb_keypad_number_pane

0x6cad,	// (0x00006cad) cell_vkb_keypad_number_pane_g1

0x6cb7,	// (0x00006cb7) cell_vkb_keypad_number_pane_g2

0x6cc0,	// (0x00006cc0) cell_vkb_keypad_number_pane_g3

0x0002,

0xada3,	// (0x0000ada3) cell_vkb_keypad_number_pane_g

0x6c2a,	// (0x00006c2a) cell_vkb_keypad_number_pane_t1

0x6cea,	// (0x00006cea) fep_vkb_candidate_pane_g1

0x0001,

0xad9e,	// (0x0000ad9e) cell_hwr_side_pane_g

0x6d49,	// (0x00006d49) cell_hwr_side_pane_t1

0x6d57,	// (0x00006d57) cell_hwr_side_pane_t1_copy1

0x69d0,	// (0x000069d0) cell_hwr_candidate_pane_g1

0x6da7,	// (0x00006da7) cell_hwr_candidate_pane_t1

0x651c,	// (0x0000651c) cell_vkb_candidate_pane_g2

0x6dfb,	// (0x00006dfb) cell_vkb_candidate_pane_t1

0x658c,	// (0x0000658c) bg_popup_fep_shadow_pane_ParamLimits

0x658c,	// (0x0000658c) bg_popup_fep_shadow_pane

0x6643,	// (0x00006643) bg_fep_hwr_top_pane_g4

0x66b1,	// (0x000066b1) bg_hwr_side_pane_g1_ParamLimits

0x66b1,	// (0x000066b1) bg_hwr_side_pane_g1

0xd736,	// (0x0000d736) cell_hwr_side_pane_ParamLimits

0xd736,	// (0x0000d736) cell_hwr_side_pane

0x6723,	// (0x00006723) fep_hwr_write_pane_g1_ParamLimits

0x6723,	// (0x00006723) fep_hwr_write_pane_g1

0x6730,	// (0x00006730) fep_hwr_write_pane_g2_ParamLimits

0x6730,	// (0x00006730) fep_hwr_write_pane_g2

0x673d,	// (0x0000673d) fep_hwr_write_pane_g3_ParamLimits

0x673d,	// (0x0000673d) fep_hwr_write_pane_g3

0xd756,	// (0x0000d756) fep_hwr_write_pane_g4_ParamLimits

0xd756,	// (0x0000d756) fep_hwr_write_pane_g4

0x0005,

0xf64c,	// (0x0000f64c) fep_hwr_write_pane_g_ParamLimits

0xf64c,	// (0x0000f64c) fep_hwr_write_pane_g

0x6643,	// (0x00006643) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6643,	// (0x00006643) bg_fep_hwr_candidate_pane_g2

0x6786,	// (0x00006786) cell_hwr_candidate_pane_ParamLimits

0x6786,	// (0x00006786) cell_hwr_candidate_pane

0x67d8,	// (0x000067d8) fep_hwr_candidate_pane_g1_ParamLimits

0x683a,	// (0x0000683a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x683a,	// (0x0000683a) bg_popup_fep_shadow_pane_cp2

0x69d0,	// (0x000069d0) fep_vkb_top_pane_g4_ParamLimits

0x69d0,	// (0x000069d0) fep_vkb_top_pane_g4

0x6a16,	// (0x00006a16) fep_vkb_side_pane_g2_ParamLimits

0x6a16,	// (0x00006a16) fep_vkb_side_pane_g2

0xba01,	// (0x0000ba01) list_setting_pane_t4_ParamLimits

0xba01,	// (0x0000ba01) list_setting_pane_t4

0xba7d,	// (0x0000ba7d) list_setting_number_pane_t5_ParamLimits

0xba7d,	// (0x0000ba7d) list_setting_number_pane_t5

0x1dc8,	// (0x00001dc8) list_double_heading_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double_heading_pane_cp2

0x1401,	// (0x00001401) list_double_heading_pane_g1_cp2_ParamLimits

0x1401,	// (0x00001401) list_double_heading_pane_g1_cp2

0x140d,	// (0x0000140d) list_double_heading_pane_g2_cp2_ParamLimits

0x140d,	// (0x0000140d) list_double_heading_pane_g2_cp2

0x6e09,	// (0x00006e09) list_double_heading_pane_t1_cp2_ParamLimits

0x6e09,	// (0x00006e09) list_double_heading_pane_t1_cp2

0x6e1f,	// (0x00006e1f) list_double_heading_pane_t2_cp2_ParamLimits

0x6e1f,	// (0x00006e1f) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0321,	// (0x00000321) popup_preview_fixed_window

0x0843,	// (0x00000843) bg_popup_preview_window_pane_cp02

0x6e31,	// (0x00006e31) list_preview_fixed_pane

0x6e77,	// (0x00006e77) list_empty_pane_fp_ParamLimits

0x6e77,	// (0x00006e77) list_empty_pane_fp

0x6e77,	// (0x00006e77) list_single_cale_day_pane_fp_ParamLimits

0x6e77,	// (0x00006e77) list_single_cale_day_pane_fp

0x6e77,	// (0x00006e77) list_single_graphic_heading_pane_fp_ParamLimits

0x6e77,	// (0x00006e77) list_single_graphic_heading_pane_fp

0x6e77,	// (0x00006e77) list_single_graphic_pane_fp_ParamLimits

0x6e77,	// (0x00006e77) list_single_graphic_pane_fp

0x6e77,	// (0x00006e77) list_single_heading_pane_fp_ParamLimits

0x6e77,	// (0x00006e77) list_single_heading_pane_fp

0x6e77,	// (0x00006e77) list_single_pane_fp_ParamLimits

0x6e77,	// (0x00006e77) list_single_pane_fp

0x6e90,	// (0x00006e90) list_single_pane_fp_g1_ParamLimits

0x6e90,	// (0x00006e90) list_single_pane_fp_g1

0x6e9c,	// (0x00006e9c) list_single_pane_fp_g2_ParamLimits

0x6e9c,	// (0x00006e9c) list_single_pane_fp_g2

0x6ea8,	// (0x00006ea8) list_single_pane_fp_g3_ParamLimits

0x6ea8,	// (0x00006ea8) list_single_pane_fp_g3

0x6ebc,	// (0x00006ebc) list_single_pane_fp_g4_ParamLimits

0x6ebc,	// (0x00006ebc) list_single_pane_fp_g4

0x0003,

0xadd2,	// (0x0000add2) list_single_pane_fp_g_ParamLimits

0xadd2,	// (0x0000add2) list_single_pane_fp_g

0x6ec8,	// (0x00006ec8) list_single_pane_fp_t1_ParamLimits

0x6ec8,	// (0x00006ec8) list_single_pane_fp_t1

0x6edf,	// (0x00006edf) list_single_graphic_pane_fp_g1_ParamLimits

0x6edf,	// (0x00006edf) list_single_graphic_pane_fp_g1

0x6e90,	// (0x00006e90) list_single_graphic_pane_fp_g2_ParamLimits

0x6e90,	// (0x00006e90) list_single_graphic_pane_fp_g2

0x6e9c,	// (0x00006e9c) list_single_graphic_pane_fp_g3_ParamLimits

0x6e9c,	// (0x00006e9c) list_single_graphic_pane_fp_g3

0x6ea8,	// (0x00006ea8) list_single_graphic_pane_fp_g4_ParamLimits

0x6ea8,	// (0x00006ea8) list_single_graphic_pane_fp_g4

0x6ebc,	// (0x00006ebc) list_single_graphic_pane_fp_g5_ParamLimits

0x6ebc,	// (0x00006ebc) list_single_graphic_pane_fp_g5

0x0004,

0xaddb,	// (0x0000addb) list_single_graphic_pane_fp_g_ParamLimits

0xaddb,	// (0x0000addb) list_single_graphic_pane_fp_g

0x6eeb,	// (0x00006eeb) list_single_graphic_pane_fp_t1_ParamLimits

0x6eeb,	// (0x00006eeb) list_single_graphic_pane_fp_t1

0x6edf,	// (0x00006edf) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6edf,	// (0x00006edf) list_single_graphic_heading_pane_fp_g1

0x6e90,	// (0x00006e90) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6e90,	// (0x00006e90) list_single_graphic_heading_pane_fp_g2

0x6e9c,	// (0x00006e9c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6e9c,	// (0x00006e9c) list_single_graphic_heading_pane_fp_g3

0x6ea8,	// (0x00006ea8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6ea8,	// (0x00006ea8) list_single_graphic_heading_pane_fp_g4

0x6ebc,	// (0x00006ebc) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6ebc,	// (0x00006ebc) list_single_graphic_heading_pane_fp_g5

0x0004,

0xaddb,	// (0x0000addb) list_single_graphic_heading_pane_fp_g_ParamLimits

0xaddb,	// (0x0000addb) list_single_graphic_heading_pane_fp_g

0x6f01,	// (0x00006f01) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6f01,	// (0x00006f01) list_single_graphic_heading_pane_fp_t1

0x6f17,	// (0x00006f17) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6f17,	// (0x00006f17) list_single_graphic_heading_pane_fp_t2

0x0001,

0xade6,	// (0x0000ade6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xade6,	// (0x0000ade6) list_single_graphic_heading_pane_fp_t

0x6f29,	// (0x00006f29) list_single_cale_day_pane_fp_g1_ParamLimits

0x6f29,	// (0x00006f29) list_single_cale_day_pane_fp_g1

0x6f61,	// (0x00006f61) list_single_cale_day_pane_fp_g2_ParamLimits

0x6f61,	// (0x00006f61) list_single_cale_day_pane_fp_g2

0x6f6d,	// (0x00006f6d) list_single_cale_day_pane_fp_g3_ParamLimits

0x6f6d,	// (0x00006f6d) list_single_cale_day_pane_fp_g3

0x6f95,	// (0x00006f95) list_single_cale_day_pane_fp_g4_ParamLimits

0x6f95,	// (0x00006f95) list_single_cale_day_pane_fp_g4

0x6fb9,	// (0x00006fb9) list_single_cale_day_pane_fp_g5_ParamLimits

0x6fb9,	// (0x00006fb9) list_single_cale_day_pane_fp_g5

0x0004,

0xadeb,	// (0x0000adeb) list_single_cale_day_pane_fp_g_ParamLimits

0xadeb,	// (0x0000adeb) list_single_cale_day_pane_fp_g

0x6fdd,	// (0x00006fdd) list_single_cale_day_pane_fp_t1_ParamLimits

0x6fdd,	// (0x00006fdd) list_single_cale_day_pane_fp_t1

0x7003,	// (0x00007003) list_single_cale_day_pane_fp_t2_ParamLimits

0x7003,	// (0x00007003) list_single_cale_day_pane_fp_t2

0x701c,	// (0x0000701c) list_single_cale_day_pane_fp_t3_ParamLimits

0x701c,	// (0x0000701c) list_single_cale_day_pane_fp_t3

0x0002,

0xadf6,	// (0x0000adf6) list_single_cale_day_pane_fp_t_ParamLimits

0xadf6,	// (0x0000adf6) list_single_cale_day_pane_fp_t

0x6e90,	// (0x00006e90) list_empty_pane_fp_g1_ParamLimits

0x6e90,	// (0x00006e90) list_empty_pane_fp_g1

0x7035,	// (0x00007035) list_empty_pane_fp_t1

0x7043,	// (0x00007043) list_empty_pane_fp_t2

0x0001,

0xadfd,	// (0x0000adfd) list_empty_pane_fp_t

0x6e90,	// (0x00006e90) list_single_heading_pane_fp_g1_ParamLimits

0x6e90,	// (0x00006e90) list_single_heading_pane_fp_g1

0x6e9c,	// (0x00006e9c) list_single_heading_pane_fp_g2_ParamLimits

0x6e9c,	// (0x00006e9c) list_single_heading_pane_fp_g2

0x6ea8,	// (0x00006ea8) list_single_heading_pane_fp_g3_ParamLimits

0x6ea8,	// (0x00006ea8) list_single_heading_pane_fp_g3

0x0002,

0xae02,	// (0x0000ae02) list_single_heading_pane_fp_g_ParamLimits

0xae02,	// (0x0000ae02) list_single_heading_pane_fp_g

0x7051,	// (0x00007051) list_single_heading_pane_fp_t1_ParamLimits

0x7051,	// (0x00007051) list_single_heading_pane_fp_t1

0x7063,	// (0x00007063) list_single_heading_pane_fp_t2_ParamLimits

0x7063,	// (0x00007063) list_single_heading_pane_fp_t2

0x0001,

0xae09,	// (0x0000ae09) list_single_heading_pane_fp_t_ParamLimits

0xae09,	// (0x0000ae09) list_single_heading_pane_fp_t

0x1752,	// (0x00001752) aid_size_cell_fast

0x07b5,	// (0x000007b5) soft_indicator_pane_cp1_t1

0x178f,	// (0x0000178f) cell_app_pane_cp2_ParamLimits

0x178f,	// (0x0000178f) cell_app_pane_cp2

0x65ae,	// (0x000065ae) fep_hwr_candidate_drop_down_list_pane

0x67f2,	// (0x000067f2) fep_hwr_candidate_pane_g3_ParamLimits

0x67f2,	// (0x000067f2) fep_hwr_candidate_pane_g3

0x67ff,	// (0x000067ff) fep_hwr_candidate_pane_g4_ParamLimits

0x67ff,	// (0x000067ff) fep_hwr_candidate_pane_g4

0x0002,

0xad7d,	// (0x0000ad7d) fep_hwr_candidate_pane_g_ParamLimits

0xad7d,	// (0x0000ad7d) fep_hwr_candidate_pane_g

0x68ca,	// (0x000068ca) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x68ca,	// (0x000068ca) fep_vkb_candidate_drop_down_list_pane

0x6cf2,	// (0x00006cf2) fep_vkb_candidate_pane_g3

0x6cfa,	// (0x00006cfa) fep_vkb_candidate_pane_g4

0x0002,

0xadaa,	// (0x0000adaa) fep_vkb_candidate_pane_g

0x69d0,	// (0x000069d0) cell_hwr_candidate_pane_g1_ParamLimits

0x6d65,	// (0x00006d65) cell_hwr_candidate_pane_g3_ParamLimits

0x6d65,	// (0x00006d65) cell_hwr_candidate_pane_g3

0x6d86,	// (0x00006d86) cell_hwr_candidate_pane_g4_ParamLimits

0x6d86,	// (0x00006d86) cell_hwr_candidate_pane_g4

0x0002,

0xadc4,	// (0x0000adc4) cell_hwr_candidate_pane_g_ParamLimits

0xadc4,	// (0x0000adc4) cell_hwr_candidate_pane_g

0x6dc5,	// (0x00006dc5) cell_vkb_candidate_pane_g3_ParamLimits

0x6dc5,	// (0x00006dc5) cell_vkb_candidate_pane_g3

0x6de0,	// (0x00006de0) cell_vkb_candidate_pane_g4_ParamLimits

0x6de0,	// (0x00006de0) cell_vkb_candidate_pane_g4

0x7079,	// (0x00007079) cell_app_pane_cp2_g1_ParamLimits

0x7079,	// (0x00007079) cell_app_pane_cp2_g1

0x7097,	// (0x00007097) cell_app_pane_cp2_g2_ParamLimits

0x7097,	// (0x00007097) cell_app_pane_cp2_g2

0x0001,

0xae0e,	// (0x0000ae0e) cell_app_pane_cp2_g_ParamLimits

0xae0e,	// (0x0000ae0e) cell_app_pane_cp2_g

0x70a3,	// (0x000070a3) cell_app_pane_cp2_t1_ParamLimits

0x70a3,	// (0x000070a3) cell_app_pane_cp2_t1

0x13db,	// (0x000013db) grid_highlight_pane_cp1_ParamLimits

0x13db,	// (0x000013db) grid_highlight_pane_cp1

0x70b5,	// (0x000070b5) cell_hwr_candidate_pane_cp1_ParamLimits

0x70b5,	// (0x000070b5) cell_hwr_candidate_pane_cp1

0x69d0,	// (0x000069d0) fep_hwr_candidate_drop_down_list_pane_g1

0x70d9,	// (0x000070d9) fep_hwr_candidate_drop_down_list_pane_g2

0x70e6,	// (0x000070e6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xae13,	// (0x0000ae13) fep_hwr_candidate_drop_down_list_pane_g

0x70f3,	// (0x000070f3) fep_hwr_candidate_drop_down_list_scroll_pane

0x70fc,	// (0x000070fc) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70fc,	// (0x000070fc) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7109,	// (0x00007109) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7109,	// (0x00007109) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7116,	// (0x00007116) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7116,	// (0x00007116) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6dc5,	// (0x00006dc5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6dc5,	// (0x00006dc5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6de0,	// (0x00006de0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6de0,	// (0x00006de0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7123,	// (0x00007123) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7123,	// (0x00007123) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x713e,	// (0x0000713e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x713e,	// (0x0000713e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7159,	// (0x00007159) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7159,	// (0x00007159) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xae1a,	// (0x0000ae1a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xae1a,	// (0x0000ae1a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7174,	// (0x00007174) cell_vkb_candidate_pane_cp1_ParamLimits

0x7174,	// (0x00007174) cell_vkb_candidate_pane_cp1

0x69d0,	// (0x000069d0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x69d0,	// (0x000069d0) fep_vkb_candidate_drop_down_list_pane_g1

0x70d9,	// (0x000070d9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x70d9,	// (0x000070d9) fep_vkb_candidate_drop_down_list_pane_g2

0x70e6,	// (0x000070e6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x70e6,	// (0x000070e6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xae13,	// (0x0000ae13) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xae13,	// (0x0000ae13) fep_vkb_candidate_drop_down_list_pane_g

0x719a,	// (0x0000719a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x719a,	// (0x0000719a) fep_vkb_candidate_drop_down_list_scroll_pane

0x71a7,	// (0x000071a7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71a7,	// (0x000071a7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x71b4,	// (0x000071b4) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71b4,	// (0x000071b4) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x71c0,	// (0x000071c0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71c0,	// (0x000071c0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6d65,	// (0x00006d65) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d65,	// (0x00006d65) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6d86,	// (0x00006d86) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d86,	// (0x00006d86) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x71cc,	// (0x000071cc) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71cc,	// (0x000071cc) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x71ed,	// (0x000071ed) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71ed,	// (0x000071ed) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x720e,	// (0x0000720e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x720e,	// (0x0000720e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xae2b,	// (0x0000ae2b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xae2b,	// (0x0000ae2b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb308,	// (0x0000b308) title_pane_g1_ParamLimits

0xb319,	// (0x0000b319) title_pane_g2_ParamLimits

0xf480,	// (0x0000f480) title_pane_g_ParamLimits

0x1d67,	// (0x00001d67) aid_call2_pane

0x1d6f,	// (0x00001d6f) aid_call_pane

0x1d77,	// (0x00001d77) popup_clock_analogue_window_g1

0x1d77,	// (0x00001d77) popup_clock_analogue_window_g2

0x1d7f,	// (0x00001d7f) popup_clock_analogue_window_g3

0x1d88,	// (0x00001d88) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xa97c,	// (0x0000a97c) popup_clock_analogue_window_g

0x1d90,	// (0x00001d90) popup_clock_analogue_window_t1

0x1e1b,	// (0x00001e1b) clock_digital_number_pane_ParamLimits

0x1e1b,	// (0x00001e1b) clock_digital_number_pane

0x1e27,	// (0x00001e27) clock_digital_number_pane_cp02_ParamLimits

0x1e27,	// (0x00001e27) clock_digital_number_pane_cp02

0x1e33,	// (0x00001e33) clock_digital_number_pane_cp03_ParamLimits

0x1e33,	// (0x00001e33) clock_digital_number_pane_cp03

0x1e3f,	// (0x00001e3f) clock_digital_number_pane_cp04_ParamLimits

0x1e3f,	// (0x00001e3f) clock_digital_number_pane_cp04

0x1e4b,	// (0x00001e4b) clock_digital_separator_pane_ParamLimits

0x1e4b,	// (0x00001e4b) clock_digital_separator_pane

0x1e57,	// (0x00001e57) popup_clock_digital_window_t1_ParamLimits

0x1e57,	// (0x00001e57) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xa987,	// (0x0000a987) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xa987,	// (0x0000a987) clock_digital_separator_pane_g

0xc8cd,	// (0x0000c8cd) aid_fill_nsta_ParamLimits

0xc9fe,	// (0x0000c9fe) indicator_nsta_pane_ParamLimits

0x34ae,	// (0x000034ae) popup_clock_analogue_window

0x34ae,	// (0x000034ae) popup_clock_digital_window

0x1713,	// (0x00001713) grid_indicator_nsta_pane_ParamLimits

0x5ecc,	// (0x00005ecc) clock_nsta_pane_t2

0x0001,

0xad0a,	// (0x0000ad0a) clock_nsta_pane_t

0x1b50,	// (0x00001b50) aid_size_max_handle

0xbd74,	// (0x0000bd74) aid_size_min_handle

0x260e,	// (0x0000260e) editor_scroll_pane

0x7229,	// (0x00007229) ex_editor_pane

0x16bf,	// (0x000016bf) scroll_pane_cp13

0x0ddf,	// (0x00000ddf) scroll_pane_cp14

0x1dc0,	// (0x00001dc0) scroll_pane_cp36

0xbe01,	// (0x0000be01) list_single_graphic_hl_pane_cp2_ParamLimits

0xbe01,	// (0x0000be01) list_single_graphic_hl_pane_cp2

0xd38c,	// (0x0000d38c) list_single_graphic_hl_pane_ParamLimits

0xd38c,	// (0x0000d38c) list_single_graphic_hl_pane

0x7231,	// (0x00007231) aid_size_min_hl_cp1

0x723a,	// (0x0000723a) list_highlight_pane_cp34_ParamLimits

0x723a,	// (0x0000723a) list_highlight_pane_cp34

0x724b,	// (0x0000724b) list_single_graphic_hl_pane_g1_ParamLimits

0x724b,	// (0x0000724b) list_single_graphic_hl_pane_g1

0x0de7,	// (0x00000de7) list_single_graphic_hl_pane_g2_ParamLimits

0x0de7,	// (0x00000de7) list_single_graphic_hl_pane_g2

0x0de7,	// (0x00000de7) list_single_graphic_hl_pane_g3_ParamLimits

0x0de7,	// (0x00000de7) list_single_graphic_hl_pane_g3

0x0df3,	// (0x00000df3) list_single_graphic_hl_pane_g4_ParamLimits

0x0df3,	// (0x00000df3) list_single_graphic_hl_pane_g4

0x72be,	// (0x000072be) list_single_graphic_hl_pane_g5_ParamLimits

0x72be,	// (0x000072be) list_single_graphic_hl_pane_g5

0x0004,

0xf665,	// (0x0000f665) list_single_graphic_hl_pane_g_ParamLimits

0xf665,	// (0x0000f665) list_single_graphic_hl_pane_g

0xd8e7,	// (0x0000d8e7) list_single_graphic_hl_pane_t1_ParamLimits

0xd8e7,	// (0x0000d8e7) list_single_graphic_hl_pane_t1

0x728e,	// (0x0000728e) aid_size_min_hl_cp2

0x7297,	// (0x00007297) list_highlight_pane_cp34_cp2_ParamLimits

0x7297,	// (0x00007297) list_highlight_pane_cp34_cp2

0x724b,	// (0x0000724b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x724b,	// (0x0000724b) list_single_graphic_hl_pane_g1_cp2

0x72a4,	// (0x000072a4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x72a4,	// (0x000072a4) list_single_graphic_hl_pane_g2_cp2

0x72b0,	// (0x000072b0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x72b0,	// (0x000072b0) list_single_graphic_hl_pane_g3_cp2

0x0df3,	// (0x00000df3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0df3,	// (0x00000df3) list_single_graphic_hl_pane_g4_cp2

0x72be,	// (0x000072be) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x72be,	// (0x000072be) list_single_graphic_hl_pane_g5_cp2

0xc04e,	// (0x0000c04e) control_pane_g4_ParamLimits

0xc04e,	// (0x0000c04e) control_pane_g4

0x2b93,	// (0x00002b93) bg_popup_sub_pane_cp10_ParamLimits

0x6526,	// (0x00006526) list_choice_list_pane_ParamLimits

0x6535,	// (0x00006535) scroll_pane_cp23

0x0843,	// (0x00000843) bg_popup_preview_window_pane_cp02_ParamLimits

0x6e31,	// (0x00006e31) list_preview_fixed_pane_ParamLimits

0x6e47,	// (0x00006e47) list_preview_fixed_pane_cp_ParamLimits

0x6e47,	// (0x00006e47) list_preview_fixed_pane_cp

0x6e53,	// (0x00006e53) popup_preview_fixed_window_g1_ParamLimits

0x6e53,	// (0x00006e53) popup_preview_fixed_window_g1

0x6e5f,	// (0x00006e5f) popup_preview_fixed_window_g2_ParamLimits

0x6e5f,	// (0x00006e5f) popup_preview_fixed_window_g2

0x0002,

0xadcb,	// (0x0000adcb) popup_preview_fixed_window_g_ParamLimits

0xadcb,	// (0x0000adcb) popup_preview_fixed_window_g

0x19f0,	// (0x000019f0) aid_navi_side_left_pane_ParamLimits

0x1a05,	// (0x00001a05) aid_navi_side_right_pane_ParamLimits

0x1a1d,	// (0x00001a1d) navi_icon_pane_stacon_ParamLimits

0x1a31,	// (0x00001a31) navi_navi_pane_stacon_ParamLimits

0x1a1d,	// (0x00001a1d) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x72e8,	// (0x000072e8) listscroll_text_info_pane

0x72f0,	// (0x000072f0) list_text_info_pane_ParamLimits

0x72f0,	// (0x000072f0) list_text_info_pane

0x72ff,	// (0x000072ff) scroll_pane_cp24_ParamLimits

0x72ff,	// (0x000072ff) scroll_pane_cp24

0xd8fd,	// (0x0000d8fd) list_text_info_pane_t1_ParamLimits

0xd8fd,	// (0x0000d8fd) list_text_info_pane_t1

0xc1ca,	// (0x0000c1ca) popup_fast_swap2_window_ParamLimits

0xc1ca,	// (0x0000c1ca) popup_fast_swap2_window

0x7342,	// (0x00007342) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3d65,	// (0x00003d65) heading_pane_cp2

0x0aa3,	// (0x00000aa3) listscroll_fast2_pane

0x734c,	// (0x0000734c) grid_fast2_pane

0x7356,	// (0x00007356) listscroll_fast2_pane_g1

0x7360,	// (0x00007360) listscroll_fast2_pane_g2

0x0001,

0xae47,	// (0x0000ae47) listscroll_fast2_pane_g

0x16bf,	// (0x000016bf) scroll_pane_cp26

0x736a,	// (0x0000736a) cell_fast2_pane_ParamLimits

0x736a,	// (0x0000736a) cell_fast2_pane

0x7381,	// (0x00007381) cell_fast2_pane_g1

0x738a,	// (0x0000738a) cell_fast2_pane_g2

0x7393,	// (0x00007393) cell_fast2_pane_g3

0x0002,

0xae4c,	// (0x0000ae4c) cell_fast2_pane_g

0x0b9c,	// (0x00000b9c) grid_highlight_pane_cp9

0x0bb1,	// (0x00000bb1) main_eswt_pane_ParamLimits

0x0bb1,	// (0x00000bb1) main_eswt_pane

0x7314,	// (0x00007314) list_single_text_info_pane

0x739b,	// (0x0000739b) eswt_ctrl_button_pane

0x739b,	// (0x0000739b) eswt_ctrl_canvas_pane

0x73a3,	// (0x000073a3) eswt_ctrl_combo_pane

0x739b,	// (0x0000739b) eswt_ctrl_default_pane

0x739b,	// (0x0000739b) eswt_ctrl_label_pane

0x73ab,	// (0x000073ab) eswt_ctrl_wait_pane

0x73b3,	// (0x000073b3) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x73d3,	// (0x000073d3) popup_eswt_tasktip_window_ParamLimits

0x73d3,	// (0x000073d3) popup_eswt_tasktip_window

0x3910,	// (0x00003910) bg_popup_window_pane_cp18

0x73e4,	// (0x000073e4) eswt_control_pane_g1_ParamLimits

0x73e4,	// (0x000073e4) eswt_control_pane_g1

0x73f1,	// (0x000073f1) eswt_control_pane_g2_ParamLimits

0x73f1,	// (0x000073f1) eswt_control_pane_g2

0x73fe,	// (0x000073fe) eswt_control_pane_g3_ParamLimits

0x73fe,	// (0x000073fe) eswt_control_pane_g3

0x740b,	// (0x0000740b) eswt_control_pane_g4_ParamLimits

0x740b,	// (0x0000740b) eswt_control_pane_g4

0x0003,

0xae53,	// (0x0000ae53) eswt_control_pane_g_ParamLimits

0xae53,	// (0x0000ae53) eswt_control_pane_g

0x13db,	// (0x000013db) bg_button_pane_ParamLimits

0x13db,	// (0x000013db) bg_button_pane

0x0bb1,	// (0x00000bb1) common_borders_pane_copy2_ParamLimits

0x0bb1,	// (0x00000bb1) common_borders_pane_copy2

0x7418,	// (0x00007418) control_button_pane_g1_ParamLimits

0x7418,	// (0x00007418) control_button_pane_g1

0x7424,	// (0x00007424) control_button_pane_g2_ParamLimits

0x7424,	// (0x00007424) control_button_pane_g2

0x7430,	// (0x00007430) control_button_pane_g3_ParamLimits

0x7430,	// (0x00007430) control_button_pane_g3

0x0002,

0xae5c,	// (0x0000ae5c) control_button_pane_g_ParamLimits

0xae5c,	// (0x0000ae5c) control_button_pane_g

0x7444,	// (0x00007444) control_button_pane_t1

0x7452,	// (0x00007452) control_button_pane_t2

0x0001,

0xae63,	// (0x0000ae63) control_button_pane_t

0x377d,	// (0x0000377d) bg_button_pane_g1

0x3785,	// (0x00003785) bg_button_pane_g2

0x378d,	// (0x0000378d) bg_button_pane_g3

0x3795,	// (0x00003795) bg_button_pane_g4

0x379d,	// (0x0000379d) bg_button_pane_g5

0x37a5,	// (0x000037a5) bg_button_pane_g6

0x37ad,	// (0x000037ad) bg_button_pane_g7

0x37b5,	// (0x000037b5) bg_button_pane_g8

0x37bd,	// (0x000037bd) bg_button_pane_g9

0x0008,

0xaad8,	// (0x0000aad8) bg_button_pane_g

0x64e1,	// (0x000064e1) common_borders_pane_ParamLimits

0x64e1,	// (0x000064e1) common_borders_pane

0x73e4,	// (0x000073e4) eswt_control_pane_g1_copy1_ParamLimits

0x73e4,	// (0x000073e4) eswt_control_pane_g1_copy1

0x73f1,	// (0x000073f1) eswt_control_pane_g2_copy1_ParamLimits

0x73f1,	// (0x000073f1) eswt_control_pane_g2_copy1

0x73fe,	// (0x000073fe) eswt_control_pane_g3_copy1_ParamLimits

0x73fe,	// (0x000073fe) eswt_control_pane_g3_copy1

0x740b,	// (0x0000740b) eswt_control_pane_g4_copy1_ParamLimits

0x740b,	// (0x0000740b) eswt_control_pane_g4_copy1

0x651c,	// (0x0000651c) bg_eswt_ctrl_canvas_pane_g1

0x64e1,	// (0x000064e1) common_borders_pane_cp2_ParamLimits

0x64e1,	// (0x000064e1) common_borders_pane_cp2

0x64e1,	// (0x000064e1) common_borders_pane_cp3_ParamLimits

0x64e1,	// (0x000064e1) common_borders_pane_cp3

0x7460,	// (0x00007460) separator_horizontal_pane

0x7468,	// (0x00007468) separator_vertical_pane

0x73e4,	// (0x000073e4) eswt_control_pane_g1_copy2_ParamLimits

0x73e4,	// (0x000073e4) eswt_control_pane_g1_copy2

0x73f1,	// (0x000073f1) eswt_control_pane_g2_copy2_ParamLimits

0x73f1,	// (0x000073f1) eswt_control_pane_g2_copy2

0x73fe,	// (0x000073fe) eswt_control_pane_g3_copy2_ParamLimits

0x73fe,	// (0x000073fe) eswt_control_pane_g3_copy2

0x740b,	// (0x0000740b) eswt_control_pane_g4_copy2_ParamLimits

0x740b,	// (0x0000740b) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x7471,	// (0x00007471) separator_horizontal_pane_g1

0x747a,	// (0x0000747a) separator_horizontal_pane_g2

0x7483,	// (0x00007483) separator_horizontal_pane_g3

0x0002,

0xae68,	// (0x0000ae68) separator_horizontal_pane_g

0x73e4,	// (0x000073e4) eswt_control_pane_g1_copy3_ParamLimits

0x73e4,	// (0x000073e4) eswt_control_pane_g1_copy3

0x73f1,	// (0x000073f1) eswt_control_pane_g2_copy3_ParamLimits

0x73f1,	// (0x000073f1) eswt_control_pane_g2_copy3

0x73fe,	// (0x000073fe) eswt_control_pane_g3_copy3_ParamLimits

0x73fe,	// (0x000073fe) eswt_control_pane_g3_copy3

0x740b,	// (0x0000740b) eswt_control_pane_g4_copy3_ParamLimits

0x740b,	// (0x0000740b) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x748c,	// (0x0000748c) separator_vertical_pane_g1

0x7495,	// (0x00007495) separator_vertical_pane_g2

0x749e,	// (0x0000749e) separator_vertical_pane_g3

0x0002,

0xae6f,	// (0x0000ae6f) separator_vertical_pane_g

0x73e4,	// (0x000073e4) eswt_control_pane_g1_copy4_ParamLimits

0x73e4,	// (0x000073e4) eswt_control_pane_g1_copy4

0x73f1,	// (0x000073f1) eswt_control_pane_g2_copy4_ParamLimits

0x73f1,	// (0x000073f1) eswt_control_pane_g2_copy4

0x73fe,	// (0x000073fe) eswt_control_pane_g3_copy4_ParamLimits

0x73fe,	// (0x000073fe) eswt_control_pane_g3_copy4

0x740b,	// (0x0000740b) eswt_control_pane_g4_copy4_ParamLimits

0x740b,	// (0x0000740b) eswt_control_pane_g4_copy4

0xd91f,	// (0x0000d91f) eswt_ctrl_combo_button_pane

0xd927,	// (0x0000d927) eswt_ctrl_input_pane

0xd92f,	// (0x0000d92f) popup_choice_list_window_cp70

0xd937,	// (0x0000d937) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x64e1,	// (0x000064e1) bg_button_pane_cp70_ParamLimits

0x64e1,	// (0x000064e1) bg_button_pane_cp70

0xd945,	// (0x0000d945) eswt_ctrl_combo_button_pane_g1

0x74d5,	// (0x000074d5) wait_bar_pane_cp70

0x3910,	// (0x00003910) bg_popup_window_pane_cp70_ParamLimits

0x3910,	// (0x00003910) bg_popup_window_pane_cp70

0x74dd,	// (0x000074dd) popup_eswt_tasktip_window_t1

0x74f3,	// (0x000074f3) wait_bar_pane_cp71_ParamLimits

0x74f3,	// (0x000074f3) wait_bar_pane_cp71

0x74ff,	// (0x000074ff) grid_eswt_app_pane

0x1bb4,	// (0x00001bb4) scroll_pane_cp70

0xd94d,	// (0x0000d94d) cell_eswt_app_pane_ParamLimits

0xd94d,	// (0x0000d94d) cell_eswt_app_pane

0xd97f,	// (0x0000d97f) cell_eswt_app_pane_g1_ParamLimits

0xd97f,	// (0x0000d97f) cell_eswt_app_pane_g1

0xd9ae,	// (0x0000d9ae) cell_eswt_app_pane_g2_ParamLimits

0xd9ae,	// (0x0000d9ae) cell_eswt_app_pane_g2

0x0001,

0xf670,	// (0x0000f670) cell_eswt_app_pane_g_ParamLimits

0xf670,	// (0x0000f670) cell_eswt_app_pane_g

0xd9d7,	// (0x0000d9d7) cell_eswt_app_pane_t1_ParamLimits

0xd9d7,	// (0x0000d9d7) cell_eswt_app_pane_t1

0x75c4,	// (0x000075c4) grid_highlight_pane_cp70_ParamLimits

0x75c4,	// (0x000075c4) grid_highlight_pane_cp70

0x509d,	// (0x0000509d) set_content_pane_g1

0x2967,	// (0x00002967) status_small_volume_pane

0x75d0,	// (0x000075d0) status_small_volume_pane_g1

0x75d8,	// (0x000075d8) volume_small2_pane

0x75e1,	// (0x000075e1) volume_small2_pane_g1

0x75ea,	// (0x000075ea) volume_small2_pane_g2

0x75f3,	// (0x000075f3) volume_small2_pane_g3

0x75fc,	// (0x000075fc) volume_small2_pane_g4

0x7605,	// (0x00007605) volume_small2_pane_g5

0x760e,	// (0x0000760e) volume_small2_pane_g6

0x7617,	// (0x00007617) volume_small2_pane_g7

0x7620,	// (0x00007620) volume_small2_pane_g8

0x7629,	// (0x00007629) volume_small2_pane_g9

0x7632,	// (0x00007632) volume_small2_pane_g10

0x0009,

0xae7b,	// (0x0000ae7b) volume_small2_pane_g

0x6b24,	// (0x00006b24) fep_vkb_top_text_pane_g1_ParamLimits

0xd88f,	// (0x0000d88f) fep_vkb_top_text_pane_t1_ParamLimits

0x6e6b,	// (0x00006e6b) popup_preview_fixed_window_g3_ParamLimits

0x6e6b,	// (0x00006e6b) popup_preview_fixed_window_g3

0xc860,	// (0x0000c860) popup_toolbar_trans_pane

0xd1ab,	// (0x0000d1ab) aid_height_set_list_ParamLimits

0x4f53,	// (0x00004f53) aid_size_parent_ParamLimits

0x2b93,	// (0x00002b93) list_highlight_pane_cp2_ParamLimits

0x509d,	// (0x0000509d) set_content_pane_g1_ParamLimits

0xd3a0,	// (0x0000d3a0) list_single_image_pane_ParamLimits

0xd3a0,	// (0x0000d3a0) list_single_image_pane

0xda09,	// (0x0000da09) aid_size_cell_image_ParamLimits

0xda09,	// (0x0000da09) aid_size_cell_image

0xda16,	// (0x0000da16) grid_single_image_pane_ParamLimits

0xda16,	// (0x0000da16) grid_single_image_pane

0x1401,	// (0x00001401) list_single_image_pane_g1_ParamLimits

0x1401,	// (0x00001401) list_single_image_pane_g1

0x140d,	// (0x0000140d) list_single_image_pane_g2_ParamLimits

0x140d,	// (0x0000140d) list_single_image_pane_g2

0x0001,

0xae90,	// (0x0000ae90) list_single_image_pane_g_ParamLimits

0xae90,	// (0x0000ae90) list_single_image_pane_g

0x7656,	// (0x00007656) list_single_image_pane_t1_ParamLimits

0x7656,	// (0x00007656) list_single_image_pane_t1

0xda24,	// (0x0000da24) cell_image_list_pane_ParamLimits

0xda24,	// (0x0000da24) cell_image_list_pane

0xda3e,	// (0x0000da3e) cell_image_list_pane_g1

0xda47,	// (0x0000da47) cell_image_list_pane_g2

0x0001,

0xf675,	// (0x0000f675) cell_image_list_pane_g

0x7694,	// (0x00007694) aid_size_cell_tb_trans_pane

0x13db,	// (0x000013db) bg_tb_trans_pane

0x76a6,	// (0x000076a6) grid_tb_trans_pane

0x377d,	// (0x0000377d) bg_tb_trans_pane_g1

0x3785,	// (0x00003785) bg_tb_trans_pane_g2

0x378d,	// (0x0000378d) bg_tb_trans_pane_g3

0x3795,	// (0x00003795) bg_tb_trans_pane_g4

0x379d,	// (0x0000379d) bg_tb_trans_pane_g5

0x37b5,	// (0x000037b5) bg_tb_trans_pane_g6

0x37bd,	// (0x000037bd) bg_tb_trans_pane_g7

0x37a5,	// (0x000037a5) bg_tb_trans_pane_g8

0x37ad,	// (0x000037ad) bg_tb_trans_pane_g9

0x0008,

0xae9a,	// (0x0000ae9a) bg_tb_trans_pane_g

0x76ba,	// (0x000076ba) cell_toolbar_trans_pane_ParamLimits

0x76ba,	// (0x000076ba) cell_toolbar_trans_pane

0x651c,	// (0x0000651c) cell_toolbar_trans_pane_g1

0xd5d2,	// (0x0000d5d2) list_form2_midp_pane_t1

0xd5e0,	// (0x0000d5e0) list_form2_midp_pane_t2

0x0001,

0xf640,	// (0x0000f640) list_form2_midp_pane_t

0x6103,	// (0x00006103) scroll_pane_cp51_ParamLimits

0x6320,	// (0x00006320) form2_midp_wait_pane_g1

0x6329,	// (0x00006329) form2_midp_wait_pane_g2

0x6332,	// (0x00006332) form2_midp_wait_pane_g3

0x0002,

0xad58,	// (0x0000ad58) form2_midp_wait_pane_g

0x050f,	// (0x0000050f) list_highlight_pane_cp21_ParamLimits

0x6376,	// (0x00006376) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6385,	// (0x00006385) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5180,	// (0x00005180) list_single_2graphic_im_pane_ParamLimits

0x5180,	// (0x00005180) list_single_2graphic_im_pane

0xda50,	// (0x0000da50) list_single_2graphic_im_pane_g1_ParamLimits

0xda50,	// (0x0000da50) list_single_2graphic_im_pane_g1

0xda61,	// (0x0000da61) list_single_2graphic_im_pane_g2_ParamLimits

0xda61,	// (0x0000da61) list_single_2graphic_im_pane_g2

0xda6d,	// (0x0000da6d) list_single_2graphic_im_pane_g3_ParamLimits

0xda6d,	// (0x0000da6d) list_single_2graphic_im_pane_g3

0x0003,

0xf67a,	// (0x0000f67a) list_single_2graphic_im_pane_g_ParamLimits

0xf67a,	// (0x0000f67a) list_single_2graphic_im_pane_g

0xda81,	// (0x0000da81) list_single_2graphic_im_pane_t1_ParamLimits

0xda81,	// (0x0000da81) list_single_2graphic_im_pane_t1

0x6e77,	// (0x00006e77) list_single_graphic_2heading_pane_fp_ParamLimits

0x6e77,	// (0x00006e77) list_single_graphic_2heading_pane_fp

0x6edf,	// (0x00006edf) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6edf,	// (0x00006edf) list_single_graphic_2heading_pane_fp_g1

0x6e90,	// (0x00006e90) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6e90,	// (0x00006e90) list_single_graphic_2heading_pane_fp_g2

0x6e9c,	// (0x00006e9c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6e9c,	// (0x00006e9c) list_single_graphic_2heading_pane_fp_g3

0x6ea8,	// (0x00006ea8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6ea8,	// (0x00006ea8) list_single_graphic_2heading_pane_fp_g4

0x6ebc,	// (0x00006ebc) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6ebc,	// (0x00006ebc) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xaddb,	// (0x0000addb) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xaddb,	// (0x0000addb) list_single_graphic_2heading_pane_fp_g

0x774e,	// (0x0000774e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x774e,	// (0x0000774e) list_single_graphic_2heading_pane_fp_t1

0x6f17,	// (0x00006f17) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6f17,	// (0x00006f17) list_single_graphic_2heading_pane_fp_t2

0x7764,	// (0x00007764) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7764,	// (0x00007764) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xaeb6,	// (0x0000aeb6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xaeb6,	// (0x0000aeb6) list_single_graphic_2heading_pane_fp_t

0x6760,	// (0x00006760) fep_hwr_write_pane_g5_ParamLimits

0x6760,	// (0x00006760) fep_hwr_write_pane_g5

0x676c,	// (0x0000676c) fep_hwr_write_pane_g6_ParamLimits

0x676c,	// (0x0000676c) fep_hwr_write_pane_g6

0x73b3,	// (0x000073b3) eswt_shell_pane_ParamLimits

0x3910,	// (0x00003910) bg_popup_window_pane_cp18_ParamLimits

0x4df9,	// (0x00004df9) heading_pane_cp70

0x74dd,	// (0x000074dd) popup_eswt_tasktip_window_t1_ParamLimits

0xc923,	// (0x0000c923) aid_touch_tab_arrow_left

0xc939,	// (0x0000c939) aid_touch_tab_arrow_right

0xb331,	// (0x0000b331) title_pane_g3_ParamLimits

0xb331,	// (0x0000b331) title_pane_g3

0x12aa,	// (0x000012aa) set_value_pane_g1

0xc860,	// (0x0000c860) popup_toolbar_trans_pane_ParamLimits

0x7694,	// (0x00007694) aid_size_cell_tb_trans_pane_ParamLimits

0x13db,	// (0x000013db) bg_tb_trans_pane_ParamLimits

0x76a6,	// (0x000076a6) grid_tb_trans_pane_ParamLimits

0x0843,	// (0x00000843) cont_note_pane_ParamLimits

0x0843,	// (0x00000843) cont_note_pane

0x0bb1,	// (0x00000bb1) cont_snote2_single_text_pane_ParamLimits

0x0bb1,	// (0x00000bb1) cont_snote2_single_text_pane

0x0bb1,	// (0x00000bb1) cont_snote2_single_graphic_pane_ParamLimits

0x0bb1,	// (0x00000bb1) cont_snote2_single_graphic_pane

0x3f50,	// (0x00003f50) cont_note_wait_pane_ParamLimits

0x3f50,	// (0x00003f50) cont_note_wait_pane

0x3f50,	// (0x00003f50) cont_note_image_pane_ParamLimits

0x3f50,	// (0x00003f50) cont_note_image_pane

0x777a,	// (0x0000777a) popup_note2_window_g1_ParamLimits

0x777a,	// (0x0000777a) popup_note2_window_g1

0x77ab,	// (0x000077ab) popup_note2_window_t1_ParamLimits

0x77ab,	// (0x000077ab) popup_note2_window_t1

0x77f0,	// (0x000077f0) popup_note2_window_t2_ParamLimits

0x77f0,	// (0x000077f0) popup_note2_window_t2

0x7835,	// (0x00007835) popup_note2_window_t3_ParamLimits

0x7835,	// (0x00007835) popup_note2_window_t3

0x787a,	// (0x0000787a) popup_note2_window_t4_ParamLimits

0x787a,	// (0x0000787a) popup_note2_window_t4

0x08c7,	// (0x000008c7) popup_note2_window_t5_ParamLimits

0x08c7,	// (0x000008c7) popup_note2_window_t5

0x0004,

0xaec2,	// (0x0000aec2) popup_note2_window_t_ParamLimits

0xaec2,	// (0x0000aec2) popup_note2_window_t

0x78a9,	// (0x000078a9) popup_note2_image_window_g1_ParamLimits

0x78a9,	// (0x000078a9) popup_note2_image_window_g1

0x78b5,	// (0x000078b5) popup_note2_image_window_g2_ParamLimits

0x78b5,	// (0x000078b5) popup_note2_image_window_g2

0x0001,

0xaecd,	// (0x0000aecd) popup_note2_image_window_g_ParamLimits

0xaecd,	// (0x0000aecd) popup_note2_image_window_g

0x78c7,	// (0x000078c7) popup_note2_image_window_t1_ParamLimits

0x78c7,	// (0x000078c7) popup_note2_image_window_t1

0x78df,	// (0x000078df) popup_note2_image_window_t2_ParamLimits

0x78df,	// (0x000078df) popup_note2_image_window_t2

0x78f7,	// (0x000078f7) popup_note2_image_window_t3_ParamLimits

0x78f7,	// (0x000078f7) popup_note2_image_window_t3

0x0002,

0xaed2,	// (0x0000aed2) popup_note2_image_window_t_ParamLimits

0xaed2,	// (0x0000aed2) popup_note2_image_window_t

0x3f5e,	// (0x00003f5e) popup_note2_wait_window_g1_ParamLimits

0x3f5e,	// (0x00003f5e) popup_note2_wait_window_g1

0x7913,	// (0x00007913) popup_note2_wait_window_g2_ParamLimits

0x7913,	// (0x00007913) popup_note2_wait_window_g2

0x3f76,	// (0x00003f76) popup_note2_wait_window_g3_ParamLimits

0x3f76,	// (0x00003f76) popup_note2_wait_window_g3

0x0002,

0xaed9,	// (0x0000aed9) popup_note2_wait_window_g_ParamLimits

0xaed9,	// (0x0000aed9) popup_note2_wait_window_g

0x791f,	// (0x0000791f) popup_note2_wait_window_t1_ParamLimits

0x791f,	// (0x0000791f) popup_note2_wait_window_t1

0x793d,	// (0x0000793d) popup_note2_wait_window_t2_ParamLimits

0x793d,	// (0x0000793d) popup_note2_wait_window_t2

0x795b,	// (0x0000795b) popup_note2_wait_window_t3_ParamLimits

0x795b,	// (0x0000795b) popup_note2_wait_window_t3

0x796d,	// (0x0000796d) popup_note2_wait_window_t4_ParamLimits

0x796d,	// (0x0000796d) popup_note2_wait_window_t4

0x0003,

0xaee0,	// (0x0000aee0) popup_note2_wait_window_t_ParamLimits

0xaee0,	// (0x0000aee0) popup_note2_wait_window_t

0x797f,	// (0x0000797f) wait_bar2_pane_ParamLimits

0x797f,	// (0x0000797f) wait_bar2_pane

0x7997,	// (0x00007997) popup_snote2_single_text_window_g1_ParamLimits

0x7997,	// (0x00007997) popup_snote2_single_text_window_g1

0x79bf,	// (0x000079bf) popup_snote2_single_text_window_t1_ParamLimits

0x79bf,	// (0x000079bf) popup_snote2_single_text_window_t1

0x7a0b,	// (0x00007a0b) popup_snote2_single_text_window_t2_ParamLimits

0x7a0b,	// (0x00007a0b) popup_snote2_single_text_window_t2

0x7a57,	// (0x00007a57) popup_snote2_single_text_window_t3_ParamLimits

0x7a57,	// (0x00007a57) popup_snote2_single_text_window_t3

0x7a98,	// (0x00007a98) popup_snote2_single_text_window_t4_ParamLimits

0x7a98,	// (0x00007a98) popup_snote2_single_text_window_t4

0x7ace,	// (0x00007ace) popup_snote2_single_text_window_t5_ParamLimits

0x7ace,	// (0x00007ace) popup_snote2_single_text_window_t5

0x0004,

0xaee9,	// (0x0000aee9) popup_snote2_single_text_window_t_ParamLimits

0xaee9,	// (0x0000aee9) popup_snote2_single_text_window_t

0x7af9,	// (0x00007af9) popup_snote2_single_graphic_window_g1_ParamLimits

0x7af9,	// (0x00007af9) popup_snote2_single_graphic_window_g1

0x7b21,	// (0x00007b21) popup_snote2_single_graphic_window_g2_ParamLimits

0x7b21,	// (0x00007b21) popup_snote2_single_graphic_window_g2

0x0001,

0xaef4,	// (0x0000aef4) popup_snote2_single_graphic_window_g_ParamLimits

0xaef4,	// (0x0000aef4) popup_snote2_single_graphic_window_g

0x7b49,	// (0x00007b49) popup_snote2_single_graphic_window_t1_ParamLimits

0x7b49,	// (0x00007b49) popup_snote2_single_graphic_window_t1

0x7b95,	// (0x00007b95) popup_snote2_single_graphic_window_t2_ParamLimits

0x7b95,	// (0x00007b95) popup_snote2_single_graphic_window_t2

0x7a57,	// (0x00007a57) popup_snote2_single_graphic_window_t3_ParamLimits

0x7a57,	// (0x00007a57) popup_snote2_single_graphic_window_t3

0x7a98,	// (0x00007a98) popup_snote2_single_graphic_window_t4_ParamLimits

0x7a98,	// (0x00007a98) popup_snote2_single_graphic_window_t4

0x7ace,	// (0x00007ace) popup_snote2_single_graphic_window_t5_ParamLimits

0x7ace,	// (0x00007ace) popup_snote2_single_graphic_window_t5

0x0004,

0xaef9,	// (0x0000aef9) popup_snote2_single_graphic_window_t_ParamLimits

0xaef9,	// (0x0000aef9) popup_snote2_single_graphic_window_t

0x5f5c,	// (0x00005f5c) clock_nsta_pane_cp2_t1

0x5f5c,	// (0x00005f5c) clock_nsta_pane_cp2_t2

0x0001,

0xad19,	// (0x0000ad19) clock_nsta_pane_cp2_t

0x13f5,	// (0x000013f5) form_field_data_wide_pane_g1_ParamLimits

0x1401,	// (0x00001401) form_field_data_wide_pane_g2_ParamLimits

0x1401,	// (0x00001401) form_field_data_wide_pane_g2

0x140d,	// (0x0000140d) form_field_data_wide_pane_g3_ParamLimits

0x140d,	// (0x0000140d) form_field_data_wide_pane_g3

0x0002,

0xa8ff,	// (0x0000a8ff) form_field_data_wide_pane_g_ParamLimits

0xa8ff,	// (0x0000a8ff) form_field_data_wide_pane_g

0xd4da,	// (0x0000d4da) grid_touch_3_pane_ParamLimits

0xd4da,	// (0x0000d4da) grid_touch_3_pane

0xdab2,	// (0x0000dab2) cell_touch_3_pane_ParamLimits

0xdab2,	// (0x0000dab2) cell_touch_3_pane

0x651c,	// (0x0000651c) cell_touch_3_pane_g1

0x651c,	// (0x0000651c) cell_touch_3_pane_g2

0x0001,

0xad9e,	// (0x0000ad9e) cell_touch_3_pane_g

0x08f9,	// (0x000008f9) cont_query_data_pane

0x0901,	// (0x00000901) cont_query_data_pane_cp1

0x7c14,	// (0x00007c14) button_value_adjust_pane_cp7

0x7c1c,	// (0x00007c1c) query_popup_pane_cp3

0x1ebb,	// (0x00001ebb) bg_popup_sub_pane_cp22_ParamLimits

0x1ed1,	// (0x00001ed1) navi_navi_volume_pane_cp2

0x1eec,	// (0x00001eec) popup_side_volume_key_window_g2

0x1efb,	// (0x00001efb) popup_side_volume_key_window_g3

0x0002,

0xa991,	// (0x0000a991) popup_side_volume_key_window_g

0x1f18,	// (0x00001f18) popup_side_volume_key_window_t2

0x0001,

0xa998,	// (0x0000a998) popup_side_volume_key_window_t

0x23a5,	// (0x000023a5) popup_side_volume_key_window_ParamLimits

0xb813,	// (0x0000b813) list_double_graphic_pane_g4_ParamLimits

0xb813,	// (0x0000b813) list_double_graphic_pane_g4

0xd377,	// (0x0000d377) list_single_2heading_msg_pane_ParamLimits

0xd377,	// (0x0000d377) list_single_2heading_msg_pane

0xdafc,	// (0x0000dafc) list_single_2heading_msg_pane_g1_ParamLimits

0xdafc,	// (0x0000dafc) list_single_2heading_msg_pane_g1

0xdb08,	// (0x0000db08) list_single_2heading_msg_pane_g2_ParamLimits

0xdb08,	// (0x0000db08) list_single_2heading_msg_pane_g2

0xdb1b,	// (0x0000db1b) list_single_2heading_msg_pane_g3_ParamLimits

0xdb1b,	// (0x0000db1b) list_single_2heading_msg_pane_g3

0xdb27,	// (0x0000db27) list_single_2heading_msg_pane_g4_ParamLimits

0xdb27,	// (0x0000db27) list_single_2heading_msg_pane_g4

0x0003,

0xf683,	// (0x0000f683) list_single_2heading_msg_pane_g_ParamLimits

0xf683,	// (0x0000f683) list_single_2heading_msg_pane_g

0xdb3f,	// (0x0000db3f) list_single_2heading_msg_pane_t1_ParamLimits

0xdb3f,	// (0x0000db3f) list_single_2heading_msg_pane_t1

0xdb67,	// (0x0000db67) list_single_2heading_msg_pane_t2_ParamLimits

0xdb67,	// (0x0000db67) list_single_2heading_msg_pane_t2

0xdbd2,	// (0x0000dbd2) list_single_2heading_msg_pane_t3_ParamLimits

0xdbd2,	// (0x0000dbd2) list_single_2heading_msg_pane_t3

0x7d0d,	// (0x00007d0d) list_single_2heading_msg_pane_t4_ParamLimits

0x7d0d,	// (0x00007d0d) list_single_2heading_msg_pane_t4

0x0003,

0xf68c,	// (0x0000f68c) list_single_2heading_msg_pane_t_ParamLimits

0xf68c,	// (0x0000f68c) list_single_2heading_msg_pane_t

0x0463,	// (0x00000463) title_pane_g4_ParamLimits

0x0463,	// (0x00000463) title_pane_g4

0x1918,	// (0x00001918) title_pane_stacon_g3_ParamLimits

0x1918,	// (0x00001918) title_pane_stacon_g3

0x7711,	// (0x00007711) list_single_2graphic_im_pane_g4_ParamLimits

0x7711,	// (0x00007711) list_single_2graphic_im_pane_g4

0x4b32,	// (0x00004b32) popup_side_volume_key_window_cp

0x55c5,	// (0x000055c5) main_idle_act2_pane_t1

0x37c5,	// (0x000037c5) toolbar_button_pane_g10

0xb6be,	// (0x0000b6be) popup_toolbar_window_cp1

0x5f4d,	// (0x00005f4d) clock_nsta_pane_cp_t1

0x5f4d,	// (0x00005f4d) clock_nsta_pane_cp_t2

0x0001,

0xad14,	// (0x0000ad14) clock_nsta_pane_cp_t

0x1ed1,	// (0x00001ed1) navi_navi_volume_pane_cp2_ParamLimits

0x1ee0,	// (0x00001ee0) popup_side_volume_key_window_g1_ParamLimits

0x1eec,	// (0x00001eec) popup_side_volume_key_window_g2_ParamLimits

0x1efb,	// (0x00001efb) popup_side_volume_key_window_g3_ParamLimits

0xa991,	// (0x0000a991) popup_side_volume_key_window_g_ParamLimits

0x659a,	// (0x0000659a) fep_hwr_aid_pane

0x6643,	// (0x00006643) bg_fep_hwr_top_pane_g4_ParamLimits

0x6663,	// (0x00006663) fep_hwr_top_pane_g1_ParamLimits

0x6675,	// (0x00006675) fep_hwr_top_pane_g2_ParamLimits

0x6687,	// (0x00006687) fep_hwr_top_pane_g3_ParamLimits

0xad69,	// (0x0000ad69) fep_hwr_top_pane_g_ParamLimits

0x669c,	// (0x0000669c) fep_hwr_top_text_pane_ParamLimits

0x48e7,	// (0x000048e7) aid_touch_tab_arrow_arrow_2

0x48f0,	// (0x000048f0) aid_touch_tab_arrow_left_2

0x65ae,	// (0x000065ae) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x65e5,	// (0x000065e5) fep_hwr_prediction_pane

0x691e,	// (0x0000691e) fep_vkb_prediction_pane

0xd86f,	// (0x0000d86f) fep_vkb_side_pane_g3_ParamLimits

0xd86f,	// (0x0000d86f) fep_vkb_side_pane_g3

0x69d0,	// (0x000069d0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x70d9,	// (0x000070d9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x70e6,	// (0x000070e6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xae13,	// (0x0000ae13) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7d32,	// (0x00007d32) fep_hwr_prediction_pane_g1

0x7d3c,	// (0x00007d3c) fep_hwr_prediction_pane_g2

0x7d44,	// (0x00007d44) fep_hwr_prediction_pane_g3

0x7d4c,	// (0x00007d4c) fep_hwr_prediction_pane_g4

0x0003,

0xaf16,	// (0x0000af16) fep_hwr_prediction_pane_g

0x7d32,	// (0x00007d32) fep_vkb_prediction_pane_g1

0x7d54,	// (0x00007d54) fep_vkb_prediction_pane_g2

0x7d5c,	// (0x00007d5c) fep_vkb_prediction_pane_g3

0x7d64,	// (0x00007d64) fep_vkb_prediction_pane_g4

0x0003,

0xaf1f,	// (0x0000af1f) fep_vkb_prediction_pane_g

0x4eba,	// (0x00004eba) slider_set_pane_g3

0x4ece,	// (0x00004ece) slider_set_pane_g4

0x4ee6,	// (0x00004ee6) slider_set_pane_g5

0x4eba,	// (0x00004eba) slider_set_pane_g6

0x4efc,	// (0x00004efc) slider_set_pane_g7

0x50e4,	// (0x000050e4) slider_form_pane_g3

0x50ed,	// (0x000050ed) slider_form_pane_g4

0x50f5,	// (0x000050f5) slider_form_pane_g5

0x50e4,	// (0x000050e4) slider_form_pane_g6

0xd31a,	// (0x0000d31a) slider_form_pane_g7

0x58d0,	// (0x000058d0) slider_set_pane_vc_g3

0x58d9,	// (0x000058d9) slider_set_pane_vc_g4

0x58e2,	// (0x000058e2) slider_set_pane_vc_g5

0x58d0,	// (0x000058d0) slider_set_pane_vc_g6

0x58eb,	// (0x000058eb) slider_set_pane_vc_g7

0x58d0,	// (0x000058d0) slider_form_pane_vc_g1

0x58d9,	// (0x000058d9) slider_form_pane_vc_g2

0x58e2,	// (0x000058e2) slider_form_pane_vc_g3

0x58d0,	// (0x000058d0) slider_form_pane_vc_g4

0x5c72,	// (0x00005c72) slider_form_pane_vc_g5

0x0004,

0xacfa,	// (0x0000acfa) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7d6c,	// (0x00007d6c) ai3_links_pane

0xdc40,	// (0x0000dc40) popup_ai3_data_window_ParamLimits

0xdc40,	// (0x0000dc40) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdc5e,	// (0x0000dc5e) cell_ai3_links_pane_ParamLimits

0xdc5e,	// (0x0000dc5e) cell_ai3_links_pane

0x7dad,	// (0x00007dad) bg_popup_sub_pane_cp11

0x7dba,	// (0x00007dba) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7ddf,	// (0x00007ddf) heading_ai3_data_pane

0x7de7,	// (0x00007de7) list_ai3_gene_pane

0x7df3,	// (0x00007df3) popup_ai3_data_window_g1

0x7dfb,	// (0x00007dfb) heading_ai3_data_pane_g1

0x7e03,	// (0x00007e03) heading_ai3_data_pane_t1

0x7e11,	// (0x00007e11) list_double_ai3_gene_pane_ParamLimits

0x7e11,	// (0x00007e11) list_double_ai3_gene_pane

0x7e1e,	// (0x00007e1e) list_single_ai3_gene_pane_ParamLimits

0x7e1e,	// (0x00007e1e) list_single_ai3_gene_pane

0x64e1,	// (0x000064e1) list_highlight_pane_cp7_ParamLimits

0x64e1,	// (0x000064e1) list_highlight_pane_cp7

0x7e2b,	// (0x00007e2b) list_single_a13_gene_pane_t1_ParamLimits

0x7e2b,	// (0x00007e2b) list_single_a13_gene_pane_t1

0x7e42,	// (0x00007e42) list_single_ai3_gene_pane_g1

0x7e4b,	// (0x00007e4b) list_single_ai3_gene_pane_g2

0x0001,

0xaf28,	// (0x0000af28) list_single_ai3_gene_pane_g

0x7e53,	// (0x00007e53) list_double_ai3_gene_pane_g1_ParamLimits

0x7e53,	// (0x00007e53) list_double_ai3_gene_pane_g1

0x7e5f,	// (0x00007e5f) list_double_ai3_gene_pane_t1_ParamLimits

0x7e5f,	// (0x00007e5f) list_double_ai3_gene_pane_t1

0x7e7b,	// (0x00007e7b) list_double_ai3_gene_pane_t2_ParamLimits

0x7e7b,	// (0x00007e7b) list_double_ai3_gene_pane_t2

0x7e90,	// (0x00007e90) list_double_ai3_gene_pane_t3_ParamLimits

0x7e90,	// (0x00007e90) list_double_ai3_gene_pane_t3

0x0002,

0xaf2d,	// (0x0000af2d) list_double_ai3_gene_pane_t_ParamLimits

0xaf2d,	// (0x0000af2d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7c2d,	// (0x00007c2d) aid_size_min_col_2

0xdae6,	// (0x0000dae6) aid_size_min_msg_ParamLimits

0xdae6,	// (0x0000dae6) aid_size_min_msg

0xd883,	// (0x0000d883) fep_vkb_top_text_pane_g2_ParamLimits

0xd883,	// (0x0000d883) fep_vkb_top_text_pane_g2

0x0001,

0xf660,	// (0x0000f660) fep_vkb_top_text_pane_g_ParamLimits

0xf660,	// (0x0000f660) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7ead,	// (0x00007ead) grid_hc_apps_pane_ParamLimits

0x7ead,	// (0x00007ead) grid_hc_apps_pane

0x7ebc,	// (0x00007ebc) list_hc_apps_pane

0x7ec4,	// (0x00007ec4) scroll_pane_cp37_ParamLimits

0x7ec4,	// (0x00007ec4) scroll_pane_cp37

0xdc78,	// (0x0000dc78) cell_hc_apps_pane_ParamLimits

0xdc78,	// (0x0000dc78) cell_hc_apps_pane

0xdd42,	// (0x0000dd42) cell_hc_apps_pane_g1_ParamLimits

0xdd42,	// (0x0000dd42) cell_hc_apps_pane_g1

0x7fb9,	// (0x00007fb9) cell_hc_apps_pane_g2_ParamLimits

0x7fb9,	// (0x00007fb9) cell_hc_apps_pane_g2

0x7fd5,	// (0x00007fd5) cell_hc_apps_pane_g3_ParamLimits

0x7fd5,	// (0x00007fd5) cell_hc_apps_pane_g3

0x0002,

0xf695,	// (0x0000f695) cell_hc_apps_pane_g_ParamLimits

0xf695,	// (0x0000f695) cell_hc_apps_pane_g

0xdd6f,	// (0x0000dd6f) cell_hc_apps_pane_t1_ParamLimits

0xdd6f,	// (0x0000dd6f) cell_hc_apps_pane_t1

0x0843,	// (0x00000843) grid_highlight_pane_cp10_ParamLimits

0x0843,	// (0x00000843) grid_highlight_pane_cp10

0xddaf,	// (0x0000ddaf) list_single_hc_apps_pane_ParamLimits

0xddaf,	// (0x0000ddaf) list_single_hc_apps_pane

0xdde9,	// (0x0000dde9) list_single_hc_apps_pane_g1

0xde02,	// (0x0000de02) list_single_hc_apps_pane_g2

0x0001,

0xf69c,	// (0x0000f69c) list_single_hc_apps_pane_g

0xde1b,	// (0x0000de1b) list_single_hc_apps_pane_g2_copy1

0xde37,	// (0x0000de37) list_single_hc_apps_pane_t1

0x050f,	// (0x0000050f) bg_set_opt_pane_cp_ParamLimits

0x055b,	// (0x0000055b) setting_slider_pane_t1_ParamLimits

0x0571,	// (0x00000571) setting_slider_pane_t2_ParamLimits

0x058b,	// (0x0000058b) setting_slider_pane_t3_ParamLimits

0xa7e7,	// (0x0000a7e7) setting_slider_pane_t_ParamLimits

0x05a3,	// (0x000005a3) slider_set_pane_ParamLimits

0x29ec,	// (0x000029ec) control_pane_g5_ParamLimits

0x29ec,	// (0x000029ec) control_pane_g5

0x4ea1,	// (0x00004ea1) slider_set_pane_g1_ParamLimits

0x4eae,	// (0x00004eae) slider_set_pane_g2_ParamLimits

0x4eba,	// (0x00004eba) slider_set_pane_g3_ParamLimits

0x4ece,	// (0x00004ece) slider_set_pane_g4_ParamLimits

0x4ee6,	// (0x00004ee6) slider_set_pane_g5_ParamLimits

0x4eba,	// (0x00004eba) slider_set_pane_g6_ParamLimits

0x4efc,	// (0x00004efc) slider_set_pane_g7_ParamLimits

0xabd6,	// (0x0000abd6) slider_set_pane_g_ParamLimits

0x248a,	// (0x0000248a) navi_icon_text_pane_ParamLimits

0xc8ed,	// (0x0000c8ed) aid_fill_nsta_2_ParamLimits

0xc923,	// (0x0000c923) aid_touch_tab_arrow_left_ParamLimits

0xc939,	// (0x0000c939) aid_touch_tab_arrow_right_ParamLimits

0xc9d4,	// (0x0000c9d4) clock_nsta_pane_ParamLimits

0xd057,	// (0x0000d057) navi_icon_pane_g1_ParamLimits

0xd063,	// (0x0000d063) navi_text_pane_t1_ParamLimits

0xd5b4,	// (0x0000d5b4) navi_icon_text_pane_g1_ParamLimits

0xd5c0,	// (0x0000d5c0) navi_icon_text_pane_t1_ParamLimits

0xdde9,	// (0x0000dde9) list_single_hc_apps_pane_g1_ParamLimits

0xde02,	// (0x0000de02) list_single_hc_apps_pane_g2_ParamLimits

0xf69c,	// (0x0000f69c) list_single_hc_apps_pane_g_ParamLimits

0xde1b,	// (0x0000de1b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xde37,	// (0x0000de37) list_single_hc_apps_pane_t1_ParamLimits

0xb29d,	// (0x0000b29d) popup_toolbar2_fixed_window_ParamLimits

0xb29d,	// (0x0000b29d) popup_toolbar2_fixed_window

0xc856,	// (0x0000c856) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x80f2,	// (0x000080f2) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x80f2,	// (0x000080f2) grid_toolbar2_fixed_pane

0xde65,	// (0x0000de65) cell_toolbar2_fixed_pane_ParamLimits

0xde65,	// (0x0000de65) cell_toolbar2_fixed_pane

0xde82,	// (0x0000de82) cell_toolbar2_fixed_pane_g1

0x8113,	// (0x00008113) toolbar2_fixed_button_pane

0x377d,	// (0x0000377d) toolbar2_fixed_button_pane_g1

0x3785,	// (0x00003785) toolbar2_fixed_button_pane_g2

0x378d,	// (0x0000378d) toolbar2_fixed_button_pane_g3

0x3795,	// (0x00003795) toolbar2_fixed_button_pane_g4

0x379d,	// (0x0000379d) toolbar2_fixed_button_pane_g5

0x37a5,	// (0x000037a5) toolbar2_fixed_button_pane_g6

0x37ad,	// (0x000037ad) toolbar2_fixed_button_pane_g7

0x37b5,	// (0x000037b5) toolbar2_fixed_button_pane_g8

0x37bd,	// (0x000037bd) toolbar2_fixed_button_pane_g9

0x0008,

0xaad8,	// (0x0000aad8) toolbar2_fixed_button_pane_g

0x811b,	// (0x0000811b) cell_toolbar2_float_pane_ParamLimits

0x811b,	// (0x0000811b) cell_toolbar2_float_pane

0x812c,	// (0x0000812c) cell_toolbar2_float_pane_g1

0x8113,	// (0x00008113) toolbar2_fixed_button_pane_cp

0xd76b,	// (0x0000d76b) fep_vkb_accented_list_pane_ParamLimits

0xd76b,	// (0x0000d76b) fep_vkb_accented_list_pane

0x6d41,	// (0x00006d41) bg_popup_fep_shadow_pane_g9

0x260e,	// (0x0000260e) bg_popup_fep_shadow_pane_cp3

0x16a6,	// (0x000016a6) list_accented_list_pane

0x8135,	// (0x00008135) list_single_accented_list_pane_ParamLimits

0x8135,	// (0x00008135) list_single_accented_list_pane

0x260e,	// (0x0000260e) list_highlight_pane_cp10

0x8146,	// (0x00008146) list_single_accented_list_pane_t1

0xc772,	// (0x0000c772) popup_slider_window_ParamLimits

0xc772,	// (0x0000c772) popup_slider_window

0x7c24,	// (0x00007c24) aid_indentation_list_msg

0xdf8d,	// (0x0000df8d) bg_popup_window_pane_cp19

0x8280,	// (0x00008280) popup_slider_window_g1

0x829c,	// (0x0000829c) popup_slider_window_g2

0x82b8,	// (0x000082b8) popup_slider_window_g3

0x0005,

0xf6a1,	// (0x0000f6a1) popup_slider_window_g

0x8314,	// (0x00008314) popup_slider_window_t1

0x8388,	// (0x00008388) small_volume_slider_vertical_pane

0x651c,	// (0x0000651c) small_volume_slider_vertical_pane_g1

0x651c,	// (0x0000651c) small_volume_slider_vertical_pane_g2

0x83a4,	// (0x000083a4) small_volume_slider_vertical_pane_g3

0x0002,

0xaf52,	// (0x0000af52) small_volume_slider_vertical_pane_g

0xb207,	// (0x0000b207) area_side_right_pane_ParamLimits

0xb207,	// (0x0000b207) area_side_right_pane

0xe045,	// (0x0000e045) aid_size_side_button_ParamLimits

0xe045,	// (0x0000e045) aid_size_side_button

0xe05e,	// (0x0000e05e) grid_sctrl_middle_pane_ParamLimits

0xe05e,	// (0x0000e05e) grid_sctrl_middle_pane

0x83e1,	// (0x000083e1) sctrl_sk_bottom_pane

0x83f2,	// (0x000083f2) sctrl_sk_top_pane

0x8404,	// (0x00008404) aid_touch_sctrl_top

0x0843,	// (0x00000843) bg_sctrl_sk_pane_ParamLimits

0x0843,	// (0x00000843) bg_sctrl_sk_pane

0x8411,	// (0x00008411) sctrl_sk_top_pane_g1

0x841e,	// (0x0000841e) sctrl_sk_top_pane_t1

0x8404,	// (0x00008404) aid_touch_sctrl_bottom

0x0843,	// (0x00000843) bg_sctrl_sk_pane_cp_ParamLimits

0x0843,	// (0x00000843) bg_sctrl_sk_pane_cp

0x8439,	// (0x00008439) sctrl_sk_bottom_pane_g1

0x841e,	// (0x0000841e) sctrl_sk_bottom_pane_t1

0xe078,	// (0x0000e078) cell_sctrl_middle_pane_ParamLimits

0xe078,	// (0x0000e078) cell_sctrl_middle_pane

0xe08b,	// (0x0000e08b) aid_touch_sctrl_middle_ParamLimits

0xe08b,	// (0x0000e08b) aid_touch_sctrl_middle

0xe098,	// (0x0000e098) bg_sctrl_middle_pane_ParamLimits

0xe098,	// (0x0000e098) bg_sctrl_middle_pane

0x8507,	// (0x00008507) cell_sctrl_middle_pane_g1_ParamLimits

0x8507,	// (0x00008507) cell_sctrl_middle_pane_g1

0xe0a6,	// (0x0000e0a6) cell_sctrl_middle_pane_g2_ParamLimits

0xe0a6,	// (0x0000e0a6) cell_sctrl_middle_pane_g2

0x0001,

0xf6ae,	// (0x0000f6ae) cell_sctrl_middle_pane_g_ParamLimits

0xf6ae,	// (0x0000f6ae) cell_sctrl_middle_pane_g

0x377d,	// (0x0000377d) bg_sctrl_middle_pane_g1

0x3785,	// (0x00003785) bg_sctrl_middle_pane_g2

0x378d,	// (0x0000378d) bg_sctrl_middle_pane_g3

0x3795,	// (0x00003795) bg_sctrl_middle_pane_g4

0x379d,	// (0x0000379d) bg_sctrl_middle_pane_g5

0x37a5,	// (0x000037a5) bg_sctrl_middle_pane_g6

0x37ad,	// (0x000037ad) bg_sctrl_middle_pane_g7

0x37b5,	// (0x000037b5) bg_sctrl_middle_pane_g8

0x0007,

0xaf63,	// (0x0000af63) bg_sctrl_middle_pane_g

0x37bd,	// (0x000037bd) bg_sctrl_middle_pane_g8_copy1

0x377d,	// (0x0000377d) bg_sctrl_sk_pane_g1

0x3785,	// (0x00003785) bg_sctrl_sk_pane_g2

0x378d,	// (0x0000378d) bg_sctrl_sk_pane_g3

0x0008,

0xaad8,	// (0x0000aad8) bg_sctrl_sk_pane_g

0x0d6f,	// (0x00000d6f) aid_size_touch_scroll_bar

0x3795,	// (0x00003795) bg_sctrl_sk_pane_g4

0x379d,	// (0x0000379d) bg_sctrl_sk_pane_g5

0x37a5,	// (0x000037a5) bg_sctrl_sk_pane_g6

0x37ad,	// (0x000037ad) bg_sctrl_sk_pane_g7

0x37b5,	// (0x000037b5) bg_sctrl_sk_pane_g8

0x37bd,	// (0x000037bd) bg_sctrl_sk_pane_g9

0x2c45,	// (0x00002c45) popup_fep_china_hwr2_fs_candidate_window

0xc22e,	// (0x0000c22e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc22e,	// (0x0000c22e) popup_fep_china_hwr2_fs_control_window

0x69d0,	// (0x000069d0) sctrl_sk_top_pane_g2

0x0001,

0xaf59,	// (0x0000af59) sctrl_sk_top_pane_g

0xe0b2,	// (0x0000e0b2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe0b2,	// (0x0000e0b2) aid_fep_china_hwr2_fs_cell

0xe0c8,	// (0x0000e0c8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe0c8,	// (0x0000e0c8) bg_popup_fep_shadow_pane_cp4

0xe0df,	// (0x0000e0df) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe0df,	// (0x0000e0df) bg_popup_fep_shadow_pane_cp5

0xe0f1,	// (0x0000e0f1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe0f1,	// (0x0000e0f1) popup_fep_china_hwr2_fs_control_bar_grid

0xe105,	// (0x0000e105) popup_fep_china_hwr2_fs_control_funtion_grid

0x84db,	// (0x000084db) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x84e5,	// (0x000084e5) popup_fep_china_hwr2_fs_candidate_grid

0xe10d,	// (0x0000e10d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe10d,	// (0x0000e10d) cell_fep_china_hwr2_fs_funtion_grid

0x651c,	// (0x0000651c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8507,	// (0x00008507) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8507,	// (0x00008507) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8515,	// (0x00008515) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8515,	// (0x00008515) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xaf74,	// (0x0000af74) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xaf74,	// (0x0000af74) cell_fep_china_hwr2_fs_funtion_grid_g

0xe125,	// (0x0000e125) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe125,	// (0x0000e125) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe13a,	// (0x0000e13a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe13a,	// (0x0000e13a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf6b3,	// (0x0000f6b3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf6b3,	// (0x0000f6b3) cell_fep_china_hwr2_fs_funtion_grid_t

0x855c,	// (0x0000855c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8564,	// (0x00008564) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x856c,	// (0x0000856c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xaf7e,	// (0x0000af7e) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8574,	// (0x00008574) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8574,	// (0x00008574) cell_fep_china_hwr2_fs_candidate_grid

0x8593,	// (0x00008593) popup_fep_china_hwr2_fs_candidate_grid_g20

0x859b,	// (0x0000859b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x651c,	// (0x0000651c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x651c,	// (0x0000651c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xad9e,	// (0x0000ad9e) cell_fep_china_hwr2_fs_candidate_grid_g

0x85a3,	// (0x000085a3) cell_fep_china_hwr2_fs_candidate_grid_t1

0x32b4,	// (0x000032b4) clock_nsta_pane_cp_24_ParamLimits

0x32b4,	// (0x000032b4) clock_nsta_pane_cp_24

0x3334,	// (0x00003334) indicator_nsta_pane_cp_24_ParamLimits

0x3334,	// (0x00003334) indicator_nsta_pane_cp_24

0x472e,	// (0x0000472e) heading_pane_g1

0x0001,

0xab3d,	// (0x0000ab3d) heading_pane_g

0x5354,	// (0x00005354) grid_sct_catagory_button_pane

0x5386,	// (0x00005386) scroll_pane_cp5_ParamLimits

0x610f,	// (0x0000610f) button_value_adjust_pane_cp5_ParamLimits

0x610f,	// (0x0000610f) button_value_adjust_pane_cp5

0x6215,	// (0x00006215) form2_midp_time_pane_ParamLimits

0x85b1,	// (0x000085b1) cell_sct_catagory_button_pane_ParamLimits

0x85b1,	// (0x000085b1) cell_sct_catagory_button_pane

0x64e1,	// (0x000064e1) bg_button_pane_cp01_ParamLimits

0x64e1,	// (0x000064e1) bg_button_pane_cp01

0x651c,	// (0x0000651c) cell_sct_catagory_button_pane_g1

0xc7f3,	// (0x0000c7f3) popup_tb_extension_window

0xe156,	// (0x0000e156) aid_size_cell_ext_ParamLimits

0xe156,	// (0x0000e156) aid_size_cell_ext

0x0bb1,	// (0x00000bb1) bg_tb_trans_pane_cp1_ParamLimits

0x0bb1,	// (0x00000bb1) bg_tb_trans_pane_cp1

0xe17c,	// (0x0000e17c) grid_tb_ext_pane_ParamLimits

0xe17c,	// (0x0000e17c) grid_tb_ext_pane

0xe1bc,	// (0x0000e1bc) cell_tb_ext_pane_ParamLimits

0xe1bc,	// (0x0000e1bc) cell_tb_ext_pane

0xe1e6,	// (0x0000e1e6) cell_tb_ext_pane_g1_ParamLimits

0xe1e6,	// (0x0000e1e6) cell_tb_ext_pane_g1

0x8647,	// (0x00008647) cell_tb_ext_pane_t1

0x0843,	// (0x00000843) list_highlight_pane_cp11_ParamLimits

0x0843,	// (0x00000843) list_highlight_pane_cp11

0x036c,	// (0x0000036c) popup_uni_indicator_window_ParamLimits

0x036c,	// (0x0000036c) popup_uni_indicator_window

0x13db,	// (0x000013db) bg_popup_sub_pane_cp14

0x8662,	// (0x00008662) list_uniindi_pane

0x866e,	// (0x0000866e) uniindi_top_pane

0x0843,	// (0x00000843) bg_uniindi_top_pane

0x868f,	// (0x0000868f) uniindi_top_pane_g1

0x86a5,	// (0x000086a5) uniindi_top_pane_g2

0x0003,

0xaf85,	// (0x0000af85) uniindi_top_pane_g

0x86cf,	// (0x000086cf) uniindi_top_pane_t1

0x86fb,	// (0x000086fb) list_single_uniindi_pane_ParamLimits

0x86fb,	// (0x000086fb) list_single_uniindi_pane

0x651c,	// (0x0000651c) bg_uniindi_top_pane_g1

0x870d,	// (0x0000870d) list_single_uniindi_pane_g1

0x8720,	// (0x00008720) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x8745,	// (0x00008745) bg_sctrl_sk_pane_cp1

0x874e,	// (0x0000874e) bg_sctrl_sk_pane_cp2

0x8757,	// (0x00008757) control_bg_pane_g1

0x8760,	// (0x00008760) control_bg_pane_g2

0x0001,

0xaf8e,	// (0x0000af8e) control_bg_pane_g

0x5f12,	// (0x00005f12) cell_indicator_nsta_pane_g1_ParamLimits

0xd50d,	// (0x0000d50d) cell_indicator_nsta_pane_g2_ParamLimits

0xf62b,	// (0x0000f62b) cell_indicator_nsta_pane_g_ParamLimits

0x62a5,	// (0x000062a5) form2_midp_time_pane_t1_ParamLimits

0x658c,	// (0x0000658c) main_idle_act4_pane_ParamLimits

0x658c,	// (0x0000658c) main_idle_act4_pane

0xc7f3,	// (0x0000c7f3) popup_tb_extension_window_ParamLimits

0xe1a4,	// (0x0000e1a4) tb_ext_find_pane_ParamLimits

0xe1a4,	// (0x0000e1a4) tb_ext_find_pane

0x8769,	// (0x00008769) ai_gene_pane_1_cp1

0x2757,	// (0x00002757) ai_gene_pane_2_cp1

0x8771,	// (0x00008771) list_single_idle_plugin_calendar_pane

0x877a,	// (0x0000877a) list_single_idle_plugin_notification_pane

0x8783,	// (0x00008783) list_single_idle_plugin_player_pane

0xe203,	// (0x0000e203) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe203,	// (0x0000e203) list_single_idle_plugin_shortcut_pane

0xe22b,	// (0x0000e22b) main_idle_act4_pane_t1

0xe243,	// (0x0000e243) main_idle_act4_pane_t2

0x0001,

0xf6b8,	// (0x0000f6b8) main_idle_act4_pane_t

0xe25b,	// (0x0000e25b) middle_sk_idle_act4_pane_ParamLimits

0xe25b,	// (0x0000e25b) middle_sk_idle_act4_pane

0xe277,	// (0x0000e277) popup_clock_digital_analogue_window_cp2

0xe29e,	// (0x0000e29e) shortcut_wheel_idle_act4_pane_ParamLimits

0xe29e,	// (0x0000e29e) shortcut_wheel_idle_act4_pane

0x651c,	// (0x0000651c) shortcut_wheel_idle_act4_pane_g1

0x651c,	// (0x0000651c) shortcut_wheel_idle_act4_pane_g2

0x651c,	// (0x0000651c) shortcut_wheel_idle_act4_pane_g3

0x651c,	// (0x0000651c) shortcut_wheel_idle_act4_pane_g4

0x651c,	// (0x0000651c) shortcut_wheel_idle_act4_pane_g5

0x8816,	// (0x00008816) shortcut_wheel_idle_act4_pane_g6

0x881e,	// (0x0000881e) shortcut_wheel_idle_act4_pane_g7

0x8826,	// (0x00008826) shortcut_wheel_idle_act4_pane_g8

0x882e,	// (0x0000882e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xaf98,	// (0x0000af98) shortcut_wheel_idle_act4_pane_g

0x6643,	// (0x00006643) middle_sk_idle_act4_pane_g1_ParamLimits

0x6643,	// (0x00006643) middle_sk_idle_act4_pane_g1

0xe31b,	// (0x0000e31b) middle_sk_idle_act4_pane_g2_ParamLimits

0xe31b,	// (0x0000e31b) middle_sk_idle_act4_pane_g2

0x0001,

0xf6cd,	// (0x0000f6cd) middle_sk_idle_act4_pane_g_ParamLimits

0xf6cd,	// (0x0000f6cd) middle_sk_idle_act4_pane_g

0xe333,	// (0x0000e333) middle_sk_idle_act4_pane_t1_ParamLimits

0xe333,	// (0x0000e333) middle_sk_idle_act4_pane_t1

0xe362,	// (0x0000e362) grid_ai_shortcut_pane_ParamLimits

0xe362,	// (0x0000e362) grid_ai_shortcut_pane

0xe37f,	// (0x0000e37f) list_highlight_pane_cp16_ParamLimits

0xe37f,	// (0x0000e37f) list_highlight_pane_cp16

0xe38c,	// (0x0000e38c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe38c,	// (0x0000e38c) list_single_idle_plugin_shortcut_pane_g1

0xe398,	// (0x0000e398) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe398,	// (0x0000e398) list_single_idle_plugin_shortcut_pane_g2

0xe3b6,	// (0x0000e3b6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe3b6,	// (0x0000e3b6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf6d2,	// (0x0000f6d2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf6d2,	// (0x0000f6d2) list_single_idle_plugin_shortcut_pane_g

0xe3cb,	// (0x0000e3cb) cell_ai_shortcut_pane_ParamLimits

0xe3cb,	// (0x0000e3cb) cell_ai_shortcut_pane

0xe3e1,	// (0x0000e3e1) cell_ai_shortcut_pane_g1_ParamLimits

0xe3e1,	// (0x0000e3e1) cell_ai_shortcut_pane_g1

0x8769,	// (0x00008769) ai_gene_pane_1_cp2

0x895f,	// (0x0000895f) ai_gene_pane_2_cp2

0x8967,	// (0x00008967) list_highlight_pane_cp15

0x8970,	// (0x00008970) list_single_idle_plugin_calendar_pane_g1

0x8967,	// (0x00008967) list_highlight_pane_cp17

0x8978,	// (0x00008978) list_single_idle_plugin_calendar_pane_g1_copy1

0x8980,	// (0x00008980) list_single_idle_plugin_player_pane_g1

0x5673,	// (0x00005673) list_single_idle_plugin_player_pane_g2

0x0001,

0xafc7,	// (0x0000afc7) list_single_idle_plugin_player_pane_g

0x8988,	// (0x00008988) list_single_idle_plugin_player_pane_t1

0x8996,	// (0x00008996) list_single_idle_plugin_player_pane_t2

0x89a4,	// (0x000089a4) list_single_idle_plugin_player_pane_t3

0x89b2,	// (0x000089b2) list_single_idle_plugin_player_pane_t4

0x0003,

0xafcc,	// (0x0000afcc) list_single_idle_plugin_player_pane_t

0x89c0,	// (0x000089c0) wait_bar_pane_cp15

0x89c8,	// (0x000089c8) grid_ai_notification_pane

0x5673,	// (0x00005673) list_single_idle_plugin_notification_pane_g1

0xe403,	// (0x0000e403) cell_ai_notification_pane_ParamLimits

0xe403,	// (0x0000e403) cell_ai_notification_pane

0x89de,	// (0x000089de) cell_ai_notification_pane_g1

0x89e6,	// (0x000089e6) cell_ai_notification_pane_t1

0xe410,	// (0x0000e410) tb_ext_find_button_pane

0xe418,	// (0x0000e418) tb_ext_find_pane_g1

0xe420,	// (0x0000e420) tb_ext_find_pane_t1

0x1d77,	// (0x00001d77) tb_ext_find_button_pane_g1

0x8a12,	// (0x00008a12) tb_ext_find_button_pane_g2

0x0001,

0xafd5,	// (0x0000afd5) tb_ext_find_button_pane_g

0xe22b,	// (0x0000e22b) main_idle_act4_pane_t1_ParamLimits

0xe243,	// (0x0000e243) main_idle_act4_pane_t2_ParamLimits

0xf6b8,	// (0x0000f6b8) main_idle_act4_pane_t_ParamLimits

0xe277,	// (0x0000e277) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe28e,	// (0x0000e28e) sat_plugin_idle_act4_pane_ParamLimits

0xe28e,	// (0x0000e28e) sat_plugin_idle_act4_pane

0xe42e,	// (0x0000e42e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe42e,	// (0x0000e42e) sat_plugin_idle_act4_pane_t1

0xe446,	// (0x0000e446) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe446,	// (0x0000e446) sat_plugin_idle_act4_pane_t2

0xe45e,	// (0x0000e45e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe45e,	// (0x0000e45e) sat_plugin_idle_act4_pane_t3

0xe476,	// (0x0000e476) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe476,	// (0x0000e476) sat_plugin_idle_act4_pane_t4

0x0003,

0xf6d9,	// (0x0000f6d9) sat_plugin_idle_act4_pane_t_ParamLimits

0xf6d9,	// (0x0000f6d9) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0843,	// (0x00000843) bg_popup_sub_pane_cp25_ParamLimits

0x0843,	// (0x00000843) bg_popup_sub_pane_cp25

0x8a67,	// (0x00008a67) popup_battery_window_g1_ParamLimits

0x8a67,	// (0x00008a67) popup_battery_window_g1

0x8a73,	// (0x00008a73) popup_battery_window_t1_ParamLimits

0x8a73,	// (0x00008a73) popup_battery_window_t1

0x8a85,	// (0x00008a85) popup_battery_window_t2_ParamLimits

0x8a85,	// (0x00008a85) popup_battery_window_t2

0x0001,

0xafe3,	// (0x0000afe3) popup_battery_window_t_ParamLimits

0xafe3,	// (0x0000afe3) popup_battery_window_t

0xbf72,	// (0x0000bf72) midp_canvas_pane_ParamLimits

0xbfcd,	// (0x0000bfcd) midp_keypad_pane_ParamLimits

0xbfcd,	// (0x0000bfcd) midp_keypad_pane

0x2b93,	// (0x00002b93) main_midp_pane_ParamLimits

0x5f6b,	// (0x00005f6b) signal_pane_g2_cp_ParamLimits

0xe48e,	// (0x0000e48e) aid_size_cell_midp_keypad_ParamLimits

0xe48e,	// (0x0000e48e) aid_size_cell_midp_keypad

0xe4ac,	// (0x0000e4ac) midp_keyp_game_grid_pane_ParamLimits

0xe4ac,	// (0x0000e4ac) midp_keyp_game_grid_pane

0xe4d3,	// (0x0000e4d3) midp_keyp_rocker_pane_ParamLimits

0xe4d3,	// (0x0000e4d3) midp_keyp_rocker_pane

0xe518,	// (0x0000e518) midp_keyp_sk_left_pane_ParamLimits

0xe518,	// (0x0000e518) midp_keyp_sk_left_pane

0xe56c,	// (0x0000e56c) midp_keyp_sk_right_pane_ParamLimits

0xe56c,	// (0x0000e56c) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe5c0,	// (0x0000e5c0) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe5c0,	// (0x0000e5c0) midp_keyp_sk_right_pane_g1

0x651c,	// (0x0000651c) midp_keyp_rocker_pane_g1

0xe5c9,	// (0x0000e5c9) keyp_game_cell_pane_ParamLimits

0xe5c9,	// (0x0000e5c9) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe5ef,	// (0x0000e5ef) keyp_game_cell_pane_g1

0xb249,	// (0x0000b249) popup_fep_vkb2_window_ParamLimits

0xb249,	// (0x0000b249) popup_fep_vkb2_window

0xe5f8,	// (0x0000e5f8) aid_size_cell_vkb2_ParamLimits

0xe5f8,	// (0x0000e5f8) aid_size_cell_vkb2

0xe626,	// (0x0000e626) popup_fep_vkb2_window_g1_ParamLimits

0xe626,	// (0x0000e626) popup_fep_vkb2_window_g1

0xe676,	// (0x0000e676) vkb2_area_bottom_pane_ParamLimits

0xe676,	// (0x0000e676) vkb2_area_bottom_pane

0xe6d2,	// (0x0000e6d2) vkb2_area_keypad_pane_ParamLimits

0xe6d2,	// (0x0000e6d2) vkb2_area_keypad_pane

0xe720,	// (0x0000e720) vkb2_area_top_pane_ParamLimits

0xe720,	// (0x0000e720) vkb2_area_top_pane

0xe7a6,	// (0x0000e7a6) vkb2_top_entry_pane_ParamLimits

0xe7a6,	// (0x0000e7a6) vkb2_top_entry_pane

0xe7d3,	// (0x0000e7d3) vkb2_top_grid_left_pane_ParamLimits

0xe7d3,	// (0x0000e7d3) vkb2_top_grid_left_pane

0xe7f3,	// (0x0000e7f3) vkb2_top_grid_right_pane_ParamLimits

0xe7f3,	// (0x0000e7f3) vkb2_top_grid_right_pane

0x8e00,	// (0x00008e00) vkb2_cell_keypad_pane_ParamLimits

0x8e00,	// (0x00008e00) vkb2_cell_keypad_pane

0xe839,	// (0x0000e839) vkb2_area_bottom_grid_pane_ParamLimits

0xe839,	// (0x0000e839) vkb2_area_bottom_grid_pane

0xe863,	// (0x0000e863) vkb2_area_bottom_pane_g1_ParamLimits

0xe863,	// (0x0000e863) vkb2_area_bottom_pane_g1

0xe889,	// (0x0000e889) vkb2_area_bottom_pane_g2_ParamLimits

0xe889,	// (0x0000e889) vkb2_area_bottom_pane_g2

0xe8ba,	// (0x0000e8ba) vkb2_area_bottom_pane_g3_ParamLimits

0xe8ba,	// (0x0000e8ba) vkb2_area_bottom_pane_g3

0x0002,

0xf6e2,	// (0x0000f6e2) vkb2_area_bottom_pane_g_ParamLimits

0xf6e2,	// (0x0000f6e2) vkb2_area_bottom_pane_g

0x8f8f,	// (0x00008f8f) vkb2_top_cell_left_pane_ParamLimits

0x8f8f,	// (0x00008f8f) vkb2_top_cell_left_pane

0xe924,	// (0x0000e924) vkb2_top_entry_pane_g1_ParamLimits

0xe924,	// (0x0000e924) vkb2_top_entry_pane_g1

0xe932,	// (0x0000e932) vkb2_top_entry_pane_t1_ParamLimits

0xe932,	// (0x0000e932) vkb2_top_entry_pane_t1

0x8fdd,	// (0x00008fdd) vkb2_top_entry_pane_t2_ParamLimits

0x8fdd,	// (0x00008fdd) vkb2_top_entry_pane_t2

0x8ff5,	// (0x00008ff5) vkb2_top_entry_pane_t3_ParamLimits

0x8ff5,	// (0x00008ff5) vkb2_top_entry_pane_t3

0x0002,

0xf6e9,	// (0x0000f6e9) vkb2_top_entry_pane_t_ParamLimits

0xf6e9,	// (0x0000f6e9) vkb2_top_entry_pane_t

0xe96b,	// (0x0000e96b) vkb2_top_grid_right_pane_g1_ParamLimits

0xe96b,	// (0x0000e96b) vkb2_top_grid_right_pane_g1

0x904e,	// (0x0000904e) vkb2_top_grid_right_pane_g2_ParamLimits

0x904e,	// (0x0000904e) vkb2_top_grid_right_pane_g2

0x9066,	// (0x00009066) vkb2_top_grid_right_pane_g3_ParamLimits

0x9066,	// (0x00009066) vkb2_top_grid_right_pane_g3

0xe981,	// (0x0000e981) vkb2_top_grid_right_pane_g4_ParamLimits

0xe981,	// (0x0000e981) vkb2_top_grid_right_pane_g4

0x0003,

0xf6f0,	// (0x0000f6f0) vkb2_top_grid_right_pane_g_ParamLimits

0xf6f0,	// (0x0000f6f0) vkb2_top_grid_right_pane_g

0x9094,	// (0x00009094) vkb2_top_cell_left_pane_g1

0x90ab,	// (0x000090ab) vkb2_cell_keypad_pane_g1_ParamLimits

0x90ab,	// (0x000090ab) vkb2_cell_keypad_pane_g1

0x90cf,	// (0x000090cf) vkb2_cell_keypad_pane_t1_ParamLimits

0x90cf,	// (0x000090cf) vkb2_cell_keypad_pane_t1

0x90e6,	// (0x000090e6) vkb2_cell_bottom_grid_pane_ParamLimits

0x90e6,	// (0x000090e6) vkb2_cell_bottom_grid_pane

0x911f,	// (0x0000911f) vkb2_cell_bottom_grid_pane_g1

0xe2bf,	// (0x0000e2bf) aid_call2_pane_cp02

0xe2c7,	// (0x0000e2c7) aid_call_pane_cp02

0xe2cf,	// (0x0000e2cf) clock_digital_number_pane_cp10

0xe2d7,	// (0x0000e2d7) clock_digital_number_pane_cp11

0xe2df,	// (0x0000e2df) clock_digital_number_pane_cp12

0xe2e7,	// (0x0000e2e7) clock_digital_number_pane_cp13

0xe2ef,	// (0x0000e2ef) clock_digital_separator_pane_cp10

0x1d77,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g1

0x1d77,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g2

0xe2f7,	// (0x0000e2f7) popup_clock_digital_analogue_window_cp2_g3

0x1d77,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g4

0xe2f7,	// (0x0000e2f7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf6bd,	// (0x0000f6bd) popup_clock_digital_analogue_window_cp2_g

0xe2ff,	// (0x0000e2ff) popup_clock_digital_analogue_window_cp2_t1

0xe30d,	// (0x0000e30d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf6c8,	// (0x0000f6c8) popup_clock_digital_analogue_window_cp2_t

0x651c,	// (0x0000651c) clock_digital_number_pane_cp10_g1

0x651c,	// (0x0000651c) clock_digital_number_pane_cp10_g2

0x0001,

0xad9e,	// (0x0000ad9e) clock_digital_number_pane_cp10_g

0x651c,	// (0x0000651c) clock_digital_separator_pane_cp10_g1

0x651c,	// (0x0000651c) clock_digital_separator_pane_cp10_g2

0x0001,

0xad9e,	// (0x0000ad9e) clock_digital_separator_pane_cp10_g

0x86b1,	// (0x000086b1) uniindi_top_pane_g3

0x86c2,	// (0x000086c2) uniindi_top_pane_g4

0x8e70,	// (0x00008e70) vkb2_row_keypad_pane_ParamLimits

0x8e70,	// (0x00008e70) vkb2_row_keypad_pane

0x913b,	// (0x0000913b) vkb2_cell_t_keypad_pane_ParamLimits

0x913b,	// (0x0000913b) vkb2_cell_t_keypad_pane

0x914b,	// (0x0000914b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x914b,	// (0x0000914b) vkb2_cell_t_keypad_pane_cp08

0x9160,	// (0x00009160) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9160,	// (0x00009160) vkb2_cell_t_keypad_pane_cp09

0x9174,	// (0x00009174) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9174,	// (0x00009174) vkb2_cell_t_keypad_pane_cp01

0x9185,	// (0x00009185) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9185,	// (0x00009185) vkb2_cell_t_keypad_pane_cp02

0x9196,	// (0x00009196) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9196,	// (0x00009196) vkb2_cell_t_keypad_pane_cp03

0x91a7,	// (0x000091a7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x91a7,	// (0x000091a7) vkb2_cell_t_keypad_pane_cp04

0x91b8,	// (0x000091b8) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91b8,	// (0x000091b8) vkb2_cell_t_keypad_pane_cp05

0x91c9,	// (0x000091c9) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x91c9,	// (0x000091c9) vkb2_cell_t_keypad_pane_cp06

0x91dc,	// (0x000091dc) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x91dc,	// (0x000091dc) vkb2_cell_t_keypad_pane_cp07

0x91f1,	// (0x000091f1) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x91f1,	// (0x000091f1) vkb2_cell_t_keypad_pane_cp10

0x69d0,	// (0x000069d0) vkb2_cell_t_keypad_pane_g1

0x9206,	// (0x00009206) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe997,	// (0x0000e997) aid_size_cell_graphic2_ParamLimits

0xe997,	// (0x0000e997) aid_size_cell_graphic2

0x3f50,	// (0x00003f50) bg_popup_window_pane_cp21_ParamLimits

0x3f50,	// (0x00003f50) bg_popup_window_pane_cp21

0xe9c9,	// (0x0000e9c9) graphic2_pages_pane_ParamLimits

0xe9c9,	// (0x0000e9c9) graphic2_pages_pane

0xea21,	// (0x0000ea21) grid_graphic2_control_pane_ParamLimits

0xea21,	// (0x0000ea21) grid_graphic2_control_pane

0xea55,	// (0x0000ea55) grid_graphic2_pane_ParamLimits

0xea55,	// (0x0000ea55) grid_graphic2_pane

0xeacc,	// (0x0000eacc) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7de7,	// (0x00007de7) list_ai3_gene_pane_ParamLimits

0xdf8d,	// (0x0000df8d) bg_popup_window_pane_cp19_ParamLimits

0x821e,	// (0x0000821e) bg_touch_area_indi_pane_ParamLimits

0x821e,	// (0x0000821e) bg_touch_area_indi_pane

0x8234,	// (0x00008234) bg_touch_area_indi_pane_cp01_ParamLimits

0x8234,	// (0x00008234) bg_touch_area_indi_pane_cp01

0x824c,	// (0x0000824c) bg_touch_area_indi_pane_cp02_ParamLimits

0x824c,	// (0x0000824c) bg_touch_area_indi_pane_cp02

0x8266,	// (0x00008266) bg_touch_area_indi_pane_cp03_ParamLimits

0x8266,	// (0x00008266) bg_touch_area_indi_pane_cp03

0x8280,	// (0x00008280) popup_slider_window_g1_ParamLimits

0x829c,	// (0x0000829c) popup_slider_window_g2_ParamLimits

0x82b8,	// (0x000082b8) popup_slider_window_g3_ParamLimits

0xf6a1,	// (0x0000f6a1) popup_slider_window_g_ParamLimits

0x8314,	// (0x00008314) popup_slider_window_t1_ParamLimits

0x8388,	// (0x00008388) small_volume_slider_vertical_pane_ParamLimits

0xeacc,	// (0x0000eacc) cell_graphic2_pane_ParamLimits

0xeb2f,	// (0x0000eb2f) bg_button_pane_cp10_ParamLimits

0xeb2f,	// (0x0000eb2f) bg_button_pane_cp10

0xeb42,	// (0x0000eb42) bg_button_pane_cp11_ParamLimits

0xeb42,	// (0x0000eb42) bg_button_pane_cp11

0xeb55,	// (0x0000eb55) graphic2_pages_pane_g1_ParamLimits

0xeb55,	// (0x0000eb55) graphic2_pages_pane_g1

0xeb70,	// (0x0000eb70) graphic2_pages_pane_g2_ParamLimits

0xeb70,	// (0x0000eb70) graphic2_pages_pane_g2

0x0001,

0xf6fe,	// (0x0000f6fe) graphic2_pages_pane_g_ParamLimits

0xf6fe,	// (0x0000f6fe) graphic2_pages_pane_g

0xeb88,	// (0x0000eb88) graphic2_pages_pane_t1_ParamLimits

0xeb88,	// (0x0000eb88) graphic2_pages_pane_t1

0xeba0,	// (0x0000eba0) cell_graphic2_control_pane_ParamLimits

0xeba0,	// (0x0000eba0) cell_graphic2_control_pane

0xebba,	// (0x0000ebba) cell_graphic2_pane_g1_ParamLimits

0xebba,	// (0x0000ebba) cell_graphic2_pane_g1

0x67f2,	// (0x000067f2) cell_graphic2_pane_g2_ParamLimits

0x67f2,	// (0x000067f2) cell_graphic2_pane_g2

0xebc7,	// (0x0000ebc7) cell_graphic2_pane_g3_ParamLimits

0xebc7,	// (0x0000ebc7) cell_graphic2_pane_g3

0x67ff,	// (0x000067ff) cell_graphic2_pane_g4_ParamLimits

0x67ff,	// (0x000067ff) cell_graphic2_pane_g4

0xebd4,	// (0x0000ebd4) cell_graphic2_pane_g5_ParamLimits

0xebd4,	// (0x0000ebd4) cell_graphic2_pane_g5

0x0004,

0xf703,	// (0x0000f703) cell_graphic2_pane_g_ParamLimits

0xf703,	// (0x0000f703) cell_graphic2_pane_g

0xebf4,	// (0x0000ebf4) cell_graphic2_pane_t1_ParamLimits

0xebf4,	// (0x0000ebf4) cell_graphic2_pane_t1

0x4722,	// (0x00004722) grid_highlight_pane_cp11_ParamLimits

0x4722,	// (0x00004722) grid_highlight_pane_cp11

0x13db,	// (0x000013db) bg_button_pane_cp05

0xec0b,	// (0x0000ec0b) cell_graphic2_control_pane_g1

0x651c,	// (0x0000651c) bg_touch_area_indi_pane_g1

0x946e,	// (0x0000946e) aid_cmod_rocker_key_size

0x9478,	// (0x00009478) aid_cmode_itu_key_size

0x9482,	// (0x00009482) main_cmode_video_pane

0x948c,	// (0x0000948c) main_comp_mode_itu_pane

0x9498,	// (0x00009498) main_comp_mode_rocker_pane

0x94a4,	// (0x000094a4) cell_cmode_rocker_pane_ParamLimits

0x94a4,	// (0x000094a4) cell_cmode_rocker_pane

0x94b8,	// (0x000094b8) cell_cmode_itu_pane_ParamLimits

0x94b8,	// (0x000094b8) cell_cmode_itu_pane

0x13db,	// (0x000013db) bg_button_pane_cp06_ParamLimits

0x13db,	// (0x000013db) bg_button_pane_cp06

0x69d0,	// (0x000069d0) cell_cmode_rocker_pane_g1_ParamLimits

0x69d0,	// (0x000069d0) cell_cmode_rocker_pane_g1

0x8507,	// (0x00008507) cell_cmode_rocker_pane_g2_ParamLimits

0x8507,	// (0x00008507) cell_cmode_rocker_pane_g2

0x0001,

0xb014,	// (0x0000b014) cell_cmode_rocker_pane_g_ParamLimits

0xb014,	// (0x0000b014) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x94cf,	// (0x000094cf) cell_cmode_itu_pane_g1

0x94d8,	// (0x000094d8) cell_cmode_itu_pane_t1

0x94e6,	// (0x000094e6) cell_cmode_itu_pane_t2

0x0001,

0xb019,	// (0x0000b019) cell_cmode_itu_pane_t

0x8735,	// (0x00008735) aid_touch_ctrl_left

0x873d,	// (0x0000873d) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xec18,	// (0x0000ec18) aid_cmod_rocker_key_size_cp

0xec22,	// (0x0000ec22) aid_cmode_itu_key_size_cp

0x9508,	// (0x00009508) compa_mode_pane_g1

0x9510,	// (0x00009510) compa_mode_pane_g2

0x9518,	// (0x00009518) compa_mode_pane_g3

0x0002,

0xb01e,	// (0x0000b01e) compa_mode_pane_g

0xec2c,	// (0x0000ec2c) main_comp_mode_itu_pane_cp

0xec34,	// (0x0000ec34) main_comp_mode_rocker_pane_cp

0xec3c,	// (0x0000ec3c) cell_cmode_itu_pane_cp_ParamLimits

0xec3c,	// (0x0000ec3c) cell_cmode_itu_pane_cp

0xec51,	// (0x0000ec51) cell_cmode_rocker_pane_cp_ParamLimits

0xec51,	// (0x0000ec51) cell_cmode_rocker_pane_cp

0x13db,	// (0x000013db) bg_button_pane_cp06_cp_ParamLimits

0x13db,	// (0x000013db) bg_button_pane_cp06_cp

0x69d0,	// (0x000069d0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x69d0,	// (0x000069d0) cell_cmode_rocker_pane_g1_cp

0x651c,	// (0x0000651c) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xec63,	// (0x0000ec63) cell_cmode_itu_pane_g1_cp

0xec6c,	// (0x0000ec6c) cell_cmode_itu_pane_t1_cp

0xec6c,	// (0x0000ec6c) cell_cmode_itu_pane_t2_cp

0xd312,	// (0x0000d312) settings_code_pane_cp2

0x050f,	// (0x0000050f) bg_popup_window_pane_cp3_ParamLimits

0x0a31,	// (0x00000a31) heading_pane_cp3_ParamLimits

0x0a3d,	// (0x00000a3d) listscroll_popup_graphic_pane_ParamLimits

0x659a,	// (0x0000659a) fep_hwr_aid_pane_ParamLimits

0x8404,	// (0x00008404) aid_touch_sctrl_top_ParamLimits

0x8411,	// (0x00008411) sctrl_sk_top_pane_g1_ParamLimits

0x69d0,	// (0x000069d0) sctrl_sk_top_pane_g2_ParamLimits

0xaf59,	// (0x0000af59) sctrl_sk_top_pane_g_ParamLimits

0x841e,	// (0x0000841e) sctrl_sk_top_pane_t1_ParamLimits

0x8404,	// (0x00008404) aid_touch_sctrl_bottom_ParamLimits

0x841e,	// (0x0000841e) sctrl_sk_bottom_pane_t1_ParamLimits

0x867b,	// (0x0000867b) aid_area_touch_clock

0xe768,	// (0x0000e768) aid_vkb2_area_top_pane_cell_ParamLimits

0xe768,	// (0x0000e768) aid_vkb2_area_top_pane_cell

0xe813,	// (0x0000e813) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe813,	// (0x0000e813) aid_vkb2_area_bottom_pane_cell

0x8faf,	// (0x00008faf) popup_char_count_window

0x956e,	// (0x0000956e) popup_char_count_window_g1

0x9577,	// (0x00009577) popup_char_count_window_g2

0x9580,	// (0x00009580) popup_char_count_window_g3

0x0002,

0xb025,	// (0x0000b025) popup_char_count_window_g

0x9589,	// (0x00009589) popup_char_count_window_t1

0x8c1c,	// (0x00008c1c) popup_fep_char_preview_window_ParamLimits

0x8c1c,	// (0x00008c1c) popup_fep_char_preview_window

0xe788,	// (0x0000e788) vkb2_top_candi_pane_ParamLimits

0xe788,	// (0x0000e788) vkb2_top_candi_pane

0xec7a,	// (0x0000ec7a) cell_vkb2_top_candi_pane_ParamLimits

0xec7a,	// (0x0000ec7a) cell_vkb2_top_candi_pane

0x3f50,	// (0x00003f50) bg_popup_fep_char_preview_window_ParamLimits

0x3f50,	// (0x00003f50) bg_popup_fep_char_preview_window

0x95e8,	// (0x000095e8) popup_fep_char_preview_window_t1_ParamLimits

0x95e8,	// (0x000095e8) popup_fep_char_preview_window_t1

0x9622,	// (0x00009622) bg_popup_fep_char_preview_window_g1

0x962a,	// (0x0000962a) bg_popup_fep_char_preview_window_g2

0x9632,	// (0x00009632) bg_popup_fep_char_preview_window_g3

0x963a,	// (0x0000963a) bg_popup_fep_char_preview_window_g4

0x9642,	// (0x00009642) bg_popup_fep_char_preview_window_g5

0x964a,	// (0x0000964a) bg_popup_fep_char_preview_window_g6

0x9652,	// (0x00009652) bg_popup_fep_char_preview_window_g7

0x965a,	// (0x0000965a) bg_popup_fep_char_preview_window_g8

0x9662,	// (0x00009662) bg_popup_fep_char_preview_window_g9

0x0008,

0xb02c,	// (0x0000b02c) bg_popup_fep_char_preview_window_g

0x69d0,	// (0x000069d0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x69d0,	// (0x000069d0) cell_vkb2_top_candi_pane_g1

0x6d65,	// (0x00006d65) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6d65,	// (0x00006d65) cell_vkb2_top_candi_pane_g2

0x6d86,	// (0x00006d86) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6d86,	// (0x00006d86) cell_vkb2_top_candi_pane_g3

0x966a,	// (0x0000966a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x966a,	// (0x0000966a) cell_vkb2_top_candi_pane_g4

0x968b,	// (0x0000968b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x968b,	// (0x0000968b) cell_vkb2_top_candi_pane_g5

0x8507,	// (0x00008507) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8507,	// (0x00008507) cell_vkb2_top_candi_pane_g6

0x0005,

0xb03f,	// (0x0000b03f) cell_vkb2_top_candi_pane_g_ParamLimits

0xb03f,	// (0x0000b03f) cell_vkb2_top_candi_pane_g

0x96ac,	// (0x000096ac) cell_vkb2_top_candi_pane_t1

0x4e8d,	// (0x00004e8d) aid_size_touch_slider_mark_ParamLimits

0x4e8d,	// (0x00004e8d) aid_size_touch_slider_mark

0xea05,	// (0x0000ea05) grid_graphic2_catg_pane_ParamLimits

0xea05,	// (0x0000ea05) grid_graphic2_catg_pane

0xea9b,	// (0x0000ea9b) popup_grid_graphic2_window_t1_ParamLimits

0xea9b,	// (0x0000ea9b) popup_grid_graphic2_window_t1

0xeab1,	// (0x0000eab1) popup_grid_graphic2_window_t2_ParamLimits

0xeab1,	// (0x0000eab1) popup_grid_graphic2_window_t2

0x0001,

0xf6f9,	// (0x0000f6f9) popup_grid_graphic2_window_t_ParamLimits

0xf6f9,	// (0x0000f6f9) popup_grid_graphic2_window_t

0x13db,	// (0x000013db) bg_button_pane_cp05_ParamLimits

0xec0b,	// (0x0000ec0b) cell_graphic2_control_pane_g1_ParamLimits

0xecce,	// (0x0000ecce) cell_graphic2_catg_pane_ParamLimits

0xecce,	// (0x0000ecce) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xece0,	// (0x0000ece0) cell_graphic2_catg_pane_g1

0x8647,	// (0x00008647) cell_tb_ext_pane_t1_ParamLimits

0x900b,	// (0x0000900b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x900b,	// (0x0000900b) vkb2_top_cell_right_narrow_pane

0x9023,	// (0x00009023) vkb2_top_cell_right_wide_pane_ParamLimits

0x9023,	// (0x00009023) vkb2_top_cell_right_wide_pane

0x658c,	// (0x0000658c) bg_vkb2_func_pane_ParamLimits

0x658c,	// (0x0000658c) bg_vkb2_func_pane

0x9094,	// (0x00009094) vkb2_top_cell_left_pane_g1_ParamLimits

0x658c,	// (0x0000658c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x658c,	// (0x0000658c) bg_vkb2_fuc_pane_cp03

0x911f,	// (0x0000911f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3785,	// (0x00003785) bg_vkb2_func_pane_g1

0x378d,	// (0x0000378d) bg_vkb2_func_pane_g2

0x379d,	// (0x0000379d) bg_vkb2_func_pane_g3

0x3795,	// (0x00003795) bg_vkb2_func_pane_g4

0x37a5,	// (0x000037a5) bg_vkb2_func_pane_g5

0x37ad,	// (0x000037ad) bg_vkb2_func_pane_g6

0x37b5,	// (0x000037b5) bg_vkb2_func_pane_g7

0x37bd,	// (0x000037bd) bg_vkb2_func_pane_g8

0x377d,	// (0x0000377d) bg_vkb2_func_pane_g9

0x0008,

0xb04c,	// (0x0000b04c) bg_vkb2_func_pane_g

0x658c,	// (0x0000658c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x658c,	// (0x0000658c) bg_vkb2_fuc_pane_cp01

0x9094,	// (0x00009094) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9094,	// (0x00009094) vkb2_top_cell_right_wide_pane_g1

0x658c,	// (0x0000658c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x658c,	// (0x0000658c) bg_vkb2_fuc_pane_cp02

0x911f,	// (0x0000911f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x911f,	// (0x0000911f) vkb2_top_cell_right_narrow_pane_g1

0xdec7,	// (0x0000dec7) aid_touch_area_decrease_ParamLimits

0xdec7,	// (0x0000dec7) aid_touch_area_decrease

0xdf01,	// (0x0000df01) aid_touch_area_increase_ParamLimits

0xdf01,	// (0x0000df01) aid_touch_area_increase

0xdf29,	// (0x0000df29) aid_touch_area_mute_ParamLimits

0xdf29,	// (0x0000df29) aid_touch_area_mute

0xdf59,	// (0x0000df59) aid_touch_area_slider_ParamLimits

0xdf59,	// (0x0000df59) aid_touch_area_slider

0xdf99,	// (0x0000df99) popup_slider_window_g4_ParamLimits

0xdf99,	// (0x0000df99) popup_slider_window_g4

0xdfc1,	// (0x0000dfc1) popup_slider_window_g5_ParamLimits

0xdfc1,	// (0x0000dfc1) popup_slider_window_g5

0xdff5,	// (0x0000dff5) popup_slider_window_g6_ParamLimits

0xdff5,	// (0x0000dff5) popup_slider_window_g6

0x8342,	// (0x00008342) popup_slider_window_t2_ParamLimits

0x8342,	// (0x00008342) popup_slider_window_t2

0x0001,

0xaf4d,	// (0x0000af4d) popup_slider_window_t_ParamLimits

0xaf4d,	// (0x0000af4d) popup_slider_window_t

0xe011,	// (0x0000e011) slider_pane_ParamLimits

0xe011,	// (0x0000e011) slider_pane

0x96e5,	// (0x000096e5) slider_pane_g1_ParamLimits

0x96e5,	// (0x000096e5) slider_pane_g1

0x96f9,	// (0x000096f9) slider_pane_g2_ParamLimits

0x96f9,	// (0x000096f9) slider_pane_g2

0x970f,	// (0x0000970f) slider_pane_g3_ParamLimits

0x970f,	// (0x0000970f) slider_pane_g3

0x0003,

0xb05f,	// (0x0000b05f) slider_pane_g_ParamLimits

0xb05f,	// (0x0000b05f) slider_pane_g

0xc83f,	// (0x0000c83f) popup_tb_float_extension_window_ParamLimits

0xc83f,	// (0x0000c83f) popup_tb_float_extension_window

0x973b,	// (0x0000973b) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x9747,	// (0x00009747) grid_tb_float_ext_pane

0x9753,	// (0x00009753) cell_tb_float_ext_pane_ParamLimits

0x9753,	// (0x00009753) cell_tb_float_ext_pane

0x976f,	// (0x0000976f) cell_tb_float_ext_pane_g1

0x9778,	// (0x00009778) grid_highlight_pane_cp12

0xd749,	// (0x0000d749) cell_last_hwr_side_pane_ParamLimits

0xd749,	// (0x0000d749) cell_last_hwr_side_pane

0x651c,	// (0x0000651c) cell_last_hwr_side_pane_g1

0x9781,	// (0x00009781) cell_last_hwr_side_pane_g2

0x0001,

0xb068,	// (0x0000b068) cell_last_hwr_side_pane_g

0xe8ef,	// (0x0000e8ef) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe8ef,	// (0x0000e8ef) vkb2_area_bottom_space_btn_pane

0x69d0,	// (0x000069d0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9206,	// (0x00009206) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x96ac,	// (0x000096ac) cell_vkb2_top_candi_pane_t1_ParamLimits

0x978a,	// (0x0000978a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x978a,	// (0x0000978a) vkb2_area_bottom_space_btn_pane_g1

0x97c4,	// (0x000097c4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x97c4,	// (0x000097c4) vkb2_area_bottom_space_btn_pane_g2

0x97fa,	// (0x000097fa) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x97fa,	// (0x000097fa) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb06d,	// (0x0000b06d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb06d,	// (0x0000b06d) vkb2_area_bottom_space_btn_pane_g

0x6651,	// (0x00006651) cel_fep_hwr_func_pane_ParamLimits

0x6651,	// (0x00006651) cel_fep_hwr_func_pane

0xd71e,	// (0x0000d71e) cell_hwr_side_button_pane_ParamLimits

0xd71e,	// (0x0000d71e) cell_hwr_side_button_pane

0x867b,	// (0x0000867b) aid_area_touch_clock_ParamLimits

0x0843,	// (0x00000843) bg_uniindi_top_pane_ParamLimits

0x868f,	// (0x0000868f) uniindi_top_pane_g1_ParamLimits

0x86a5,	// (0x000086a5) uniindi_top_pane_g2_ParamLimits

0x86b1,	// (0x000086b1) uniindi_top_pane_g3_ParamLimits

0x86c2,	// (0x000086c2) uniindi_top_pane_g4_ParamLimits

0xaf85,	// (0x0000af85) uniindi_top_pane_g_ParamLimits

0x86cf,	// (0x000086cf) uniindi_top_pane_t1_ParamLimits

0x0843,	// (0x00000843) bg_vkb2_func_pane_cp01_ParamLimits

0x0843,	// (0x00000843) bg_vkb2_func_pane_cp01

0x9844,	// (0x00009844) cel_fep_hwr_func_pane_g1_ParamLimits

0x9844,	// (0x00009844) cel_fep_hwr_func_pane_g1

0x0843,	// (0x00000843) bg_vkb2_func_pane_cp02_ParamLimits

0x0843,	// (0x00000843) bg_vkb2_func_pane_cp02

0x9844,	// (0x00009844) cell_hwr_side_button_pane_g1_ParamLimits

0x9844,	// (0x00009844) cell_hwr_side_button_pane_g1

0x3558,	// (0x00003558) status_pane_g4_ParamLimits

0x3558,	// (0x00003558) status_pane_g4

0x3572,	// (0x00003572) status_pane_t1

0x62b8,	// (0x000062b8) form2_midp_gauge_slider_cont_pane

0x62c0,	// (0x000062c0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd64f,	// (0x0000d64f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd661,	// (0x0000d661) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf645,	// (0x0000f645) form2_midp_gauge_slider_pane_t_ParamLimits

0x62f6,	// (0x000062f6) form2_midp_slider_pane_ParamLimits

0x8be4,	// (0x00008be4) aid_size_cell_func_vkb2_ParamLimits

0x8be4,	// (0x00008be4) aid_size_cell_func_vkb2

0x9727,	// (0x00009727) slider_pane_g4_ParamLimits

0x9727,	// (0x00009727) slider_pane_g4

0xece9,	// (0x0000ece9) form2_midp_gauge_slider_pane_t2_cp01

0xecf7,	// (0x0000ecf7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xecf7,	// (0x0000ecf7) form2_midp_gauge_slider_pane_t3_cp01

0x987d,	// (0x0000987d) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x98b1,	// (0x000098b1) navi_smil_pane_g1

0x98b9,	// (0x000098b9) navi_smil_pane_t1

0x9886,	// (0x00009886) form2_midp_slider_pane_g1

0x988f,	// (0x0000988f) form2_midp_slider_pane_g2

0x9897,	// (0x00009897) form2_midp_slider_pane_g3

0x9886,	// (0x00009886) form2_midp_slider_pane_g4

0xed14,	// (0x0000ed14) form2_midp_slider_pane_g5

0x0004,

0xf70e,	// (0x0000f70e) form2_midp_slider_pane_g

0x9834,	// (0x00009834) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9834,	// (0x00009834) vkb2_area_bottom_space_btn_pane_g4

0xca1f,	// (0x0000ca1f) lc0_navi_pane_ParamLimits

0xca1f,	// (0x0000ca1f) lc0_navi_pane

0xca8f,	// (0x0000ca8f) lc0_stat_indi_pane_ParamLimits

0xca8f,	// (0x0000ca8f) lc0_stat_indi_pane

0xcaa4,	// (0x0000caa4) ls0_title_pane_ParamLimits

0xcaa4,	// (0x0000caa4) ls0_title_pane

0x13db,	// (0x000013db) bg_popup_sub_pane_cp14_ParamLimits

0x8662,	// (0x00008662) list_uniindi_pane_ParamLimits

0x866e,	// (0x0000866e) uniindi_top_pane_ParamLimits

0x870d,	// (0x0000870d) list_single_uniindi_pane_g1_ParamLimits

0x8720,	// (0x00008720) list_single_uniindi_pane_t1_ParamLimits

0xed1d,	// (0x0000ed1d) lc0_stat_clock_pane_ParamLimits

0xed1d,	// (0x0000ed1d) lc0_stat_clock_pane

0xed2a,	// (0x0000ed2a) lc0_stat_indi_pane_g1_ParamLimits

0xed2a,	// (0x0000ed2a) lc0_stat_indi_pane_g1

0xed37,	// (0x0000ed37) lc0_stat_indi_pane_g2_ParamLimits

0xed37,	// (0x0000ed37) lc0_stat_indi_pane_g2

0x0001,

0xf719,	// (0x0000f719) lc0_stat_indi_pane_g_ParamLimits

0xf719,	// (0x0000f719) lc0_stat_indi_pane_g

0xed44,	// (0x0000ed44) lc0_uni_indicator_pane_ParamLimits

0xed44,	// (0x0000ed44) lc0_uni_indicator_pane

0xed51,	// (0x0000ed51) ls0_title_pane_g1_ParamLimits

0xed51,	// (0x0000ed51) ls0_title_pane_g1

0xed65,	// (0x0000ed65) ls0_title_pane_t1_ParamLimits

0xed65,	// (0x0000ed65) ls0_title_pane_t1

0xed93,	// (0x0000ed93) lc0_uni_indicator_pane_g1_ParamLimits

0xed93,	// (0x0000ed93) lc0_uni_indicator_pane_g1

0x9958,	// (0x00009958) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9966,	// (0x00009966) ai5_sk_pane_ParamLimits

0x9966,	// (0x00009966) ai5_sk_pane

0xedb2,	// (0x0000edb2) cell_ai5_widget_pane_ParamLimits

0xedb2,	// (0x0000edb2) cell_ai5_widget_pane

0x99e9,	// (0x000099e9) aid_size_cell_widget_grid

0x99fd,	// (0x000099fd) bg_ai5_widget_pane_ParamLimits

0x99fd,	// (0x000099fd) bg_ai5_widget_pane

0xee3f,	// (0x0000ee3f) cell_ai5_widget_pane_g2

0xee4f,	// (0x0000ee4f) cell_ai5_widget_pane_g3

0xee63,	// (0x0000ee63) cell_ai5_widget_pane_g4

0xee6f,	// (0x0000ee6f) cell_ai5_widget_pane_g5

0xee7b,	// (0x0000ee7b) cell_ai5_widget_pane_g6

0xee87,	// (0x0000ee87) cell_ai5_widget_pane_g7

0xeecf,	// (0x0000eecf) cell_ai5_widget_pane_t1_ParamLimits

0xeecf,	// (0x0000eecf) cell_ai5_widget_pane_t1

0xeeec,	// (0x0000eeec) cell_ai5_widget_pane_t2_ParamLimits

0xeeec,	// (0x0000eeec) cell_ai5_widget_pane_t2

0xef04,	// (0x0000ef04) cell_ai5_widget_pane_t3_ParamLimits

0xef04,	// (0x0000ef04) cell_ai5_widget_pane_t3

0xef1c,	// (0x0000ef1c) cell_ai5_widget_pane_t4_ParamLimits

0xef1c,	// (0x0000ef1c) cell_ai5_widget_pane_t4

0xef36,	// (0x0000ef36) cell_ai5_widget_pane_t5_ParamLimits

0xef36,	// (0x0000ef36) cell_ai5_widget_pane_t5

0x9b3d,	// (0x00009b3d) cell_ai5_widget_pane_t6_ParamLimits

0x9b3d,	// (0x00009b3d) cell_ai5_widget_pane_t6

0x9b4f,	// (0x00009b4f) cell_ai5_widget_pane_t7_ParamLimits

0x9b4f,	// (0x00009b4f) cell_ai5_widget_pane_t7

0xef55,	// (0x0000ef55) cell_ai5_widget_pane_t8_ParamLimits

0xef55,	// (0x0000ef55) cell_ai5_widget_pane_t8

0x0009,

0xf733,	// (0x0000f733) cell_ai5_widget_pane_t_ParamLimits

0xf733,	// (0x0000f733) cell_ai5_widget_pane_t

0xef9d,	// (0x0000ef9d) grid_ai5_widget_pane

0x13db,	// (0x000013db) highlight_cell_ai5_widget_pane_ParamLimits

0x13db,	// (0x000013db) highlight_cell_ai5_widget_pane

0xefb4,	// (0x0000efb4) ai5_sk_left_pane

0xefbe,	// (0x0000efbe) ai5_sk_middle_pane

0xefc8,	// (0x0000efc8) ai5_sk_right_pane

0x9be5,	// (0x00009be5) bg_ai5_widget_pane_g1_ParamLimits

0x9be5,	// (0x00009be5) bg_ai5_widget_pane_g1

0x9bf1,	// (0x00009bf1) bg_ai5_widget_pane_g2_ParamLimits

0x9bf1,	// (0x00009bf1) bg_ai5_widget_pane_g2

0x9bfd,	// (0x00009bfd) bg_ai5_widget_pane_g3_ParamLimits

0x9bfd,	// (0x00009bfd) bg_ai5_widget_pane_g3

0x9c09,	// (0x00009c09) bg_ai5_widget_pane_g4_ParamLimits

0x9c09,	// (0x00009c09) bg_ai5_widget_pane_g4

0x9c15,	// (0x00009c15) bg_ai5_widget_pane_g5_ParamLimits

0x9c15,	// (0x00009c15) bg_ai5_widget_pane_g5

0x9c21,	// (0x00009c21) bg_ai5_widget_pane_g6_ParamLimits

0x9c21,	// (0x00009c21) bg_ai5_widget_pane_g6

0x9c2d,	// (0x00009c2d) bg_ai5_widget_pane_g7_ParamLimits

0x9c2d,	// (0x00009c2d) bg_ai5_widget_pane_g7

0x9c39,	// (0x00009c39) bg_ai5_widget_pane_g8_ParamLimits

0x9c39,	// (0x00009c39) bg_ai5_widget_pane_g8

0x9c45,	// (0x00009c45) bg_ai5_widget_pane_g9_ParamLimits

0x9c45,	// (0x00009c45) bg_ai5_widget_pane_g9

0x0008,

0xb0b0,	// (0x0000b0b0) bg_ai5_widget_pane_g_ParamLimits

0xb0b0,	// (0x0000b0b0) bg_ai5_widget_pane_g

0x9c6a,	// (0x00009c6a) cell_shortcut_ai5_widget_pane_ParamLimits

0x9c6a,	// (0x00009c6a) cell_shortcut_ai5_widget_pane

0x0685,	// (0x00000685) bg_cell_shortcut_ai5_widget_pane

0x9c7c,	// (0x00009c7c) cell_grid_ai5_widget_pane_g1

0x9c85,	// (0x00009c85) highlight_cell_shortcut_ai5_widget_pane

0x378d,	// (0x0000378d) ai5_sk_left_pane_g1

0x9c8d,	// (0x00009c8d) ai5_sk_left_pane_g2

0x9c95,	// (0x00009c95) ai5_sk_left_pane_g3

0x9c9d,	// (0x00009c9d) ai5_sk_left_pane_g4

0x0003,

0xb0c3,	// (0x0000b0c3) ai5_sk_left_pane_g

0x9ca5,	// (0x00009ca5) ai5_sk_left_pane_t1

0x3785,	// (0x00003785) ai5_sk_right_pane_g1

0x9cb3,	// (0x00009cb3) ai5_sk_right_pane_g2

0x9cbb,	// (0x00009cbb) ai5_sk_right_pane_g3

0x9cc3,	// (0x00009cc3) ai5_sk_right_pane_g4

0x0003,

0xb0cc,	// (0x0000b0cc) ai5_sk_right_pane_g

0x9ccb,	// (0x00009ccb) ai5_sk_right_pane_t1

0x3785,	// (0x00003785) ai5_sk_middle_pane_g1

0x378d,	// (0x0000378d) ai5_sk_middle_pane_g2

0x37a5,	// (0x000037a5) ai5_sk_middle_pane_g3

0x9cbb,	// (0x00009cbb) ai5_sk_middle_pane_g4

0x9c95,	// (0x00009c95) ai5_sk_middle_pane_g5

0x9cd9,	// (0x00009cd9) ai5_sk_middle_pane_g6

0xefd2,	// (0x0000efd2) ai5_sk_middle_pane_g7

0x0006,

0xf748,	// (0x0000f748) ai5_sk_middle_pane_g

0xc909,	// (0x0000c909) aid_touch_area_size_lc0_ParamLimits

0xc909,	// (0x0000c909) aid_touch_area_size_lc0

0x6da7,	// (0x00006da7) cell_hwr_candidate_pane_t1_ParamLimits

0x3210,	// (0x00003210) aid_touch_navi_pane

0xcbae,	// (0x0000cbae) status_dt_navi_pane_ParamLimits

0xcbae,	// (0x0000cbae) status_dt_navi_pane

0xcbc6,	// (0x0000cbc6) status_dt_sta_pane_ParamLimits

0xcbc6,	// (0x0000cbc6) status_dt_sta_pane

0xefda,	// (0x0000efda) dt_sta_controll_pane

0xefe7,	// (0x0000efe7) dt_sta_indi_pane

0xeff4,	// (0x0000eff4) dt_sta_title_pane

0x0843,	// (0x00000843) bg_dt_sta_indi_pane_ParamLimits

0x0843,	// (0x00000843) bg_dt_sta_indi_pane

0xf006,	// (0x0000f006) dt_sta_battery_pane

0xf00e,	// (0x0000f00e) dt_sta_indi_pane_g1

0xf017,	// (0x0000f017) dt_sta_indi_pane_g2

0xf020,	// (0x0000f020) dt_sta_indi_pane_g3

0x0002,

0xf757,	// (0x0000f757) dt_sta_indi_pane_g

0xf029,	// (0x0000f029) dt_sta_signal_pane

0x13db,	// (0x000013db) bg_dt_sta_title_pane_ParamLimits

0x13db,	// (0x000013db) bg_dt_sta_title_pane

0xf032,	// (0x0000f032) dt_sta_title_pane_g1

0xf03a,	// (0x0000f03a) dt_sta_title_pane_t1_ParamLimits

0xf03a,	// (0x0000f03a) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xf04f,	// (0x0000f04f) dt_sta_controll_pane_g1

0xf058,	// (0x0000f058) bg_dt_sta_title_pane_g1

0xf061,	// (0x0000f061) bg_dt_sta_title_pane_g2

0xf06a,	// (0x0000f06a) bg_dt_sta_title_pane_g3

0x0002,

0xf75e,	// (0x0000f75e) bg_dt_sta_title_pane_g

0x651c,	// (0x0000651c) bg_dt_sta_indi_pane_g1

0x9d87,	// (0x00009d87) dt_sta_signal_pane_g1

0x9d8f,	// (0x00009d8f) dt_sta_signal_pane_g2

0x0001,

0xb0f2,	// (0x0000b0f2) dt_sta_signal_pane_g

0x9d97,	// (0x00009d97) dt_sta_battery_pane_g1

0x9da0,	// (0x00009da0) dt_sta_battery_pane_t1

0x651c,	// (0x0000651c) bg_dt_sta_control_pane_g1

0x1f3c,	// (0x00001f3c) fep_china_uni_eep_pane

0x1f44,	// (0x00001f44) fep_china_uni_entry_pane_ParamLimits

0x1f54,	// (0x00001f54) popup_fep_china_uni_window_g1_ParamLimits

0x1f64,	// (0x00001f64) popup_fep_china_uni_window_g2_ParamLimits

0x1f64,	// (0x00001f64) popup_fep_china_uni_window_g2

0x0001,

0xa99d,	// (0x0000a99d) popup_fep_china_uni_window_g_ParamLimits

0xa99d,	// (0x0000a99d) popup_fep_china_uni_window_g

0x9daf,	// (0x00009daf) fep_china_uni_eep_pane_g1

0x9db7,	// (0x00009db7) fep_china_uni_eep_pane_t1

0x98a8,	// (0x000098a8) aid_touch_area_size_smil_player

0x3368,	// (0x00003368) lc0_clock_pane

0x3566,	// (0x00003566) status_pane_g5_ParamLimits

0x3566,	// (0x00003566) status_pane_g5

0xc369,	// (0x0000c369) popup_keymap_window

0x3524,	// (0x00003524) status_icon_pane

0xee4f,	// (0x0000ee4f) cell_ai5_widget_pane_g3_ParamLimits

0xee63,	// (0x0000ee63) cell_ai5_widget_pane_g4_ParamLimits

0xee6f,	// (0x0000ee6f) cell_ai5_widget_pane_g5_ParamLimits

0xee93,	// (0x0000ee93) cell_ai5_widget_pane_g8_ParamLimits

0xee93,	// (0x0000ee93) cell_ai5_widget_pane_g8

0xeea7,	// (0x0000eea7) cell_ai5_widget_pane_g9_ParamLimits

0xeea7,	// (0x0000eea7) cell_ai5_widget_pane_g9

0xeebb,	// (0x0000eebb) cell_ai5_widget_pane_g10_ParamLimits

0xeebb,	// (0x0000eebb) cell_ai5_widget_pane_g10

0x9dc6,	// (0x00009dc6) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9dce,	// (0x00009dce) popup_keymap_window_t1

0xc05c,	// (0x0000c05c) control_pane_g6_ParamLimits

0xc05c,	// (0x0000c05c) control_pane_g6

0xc069,	// (0x0000c069) control_pane_g7_ParamLimits

0xc069,	// (0x0000c069) control_pane_g7

0xc076,	// (0x0000c076) control_pane_g8_ParamLimits

0xc076,	// (0x0000c076) control_pane_g8

0xefda,	// (0x0000efda) dt_sta_controll_pane_ParamLimits

0xefe7,	// (0x0000efe7) dt_sta_indi_pane_ParamLimits

0xeff4,	// (0x0000eff4) dt_sta_title_pane_ParamLimits

0x0d78,	// (0x00000d78) aid_size_touch_scroll_bar_cale

0x02b5,	// (0x000002b5) popup_discreet_window_ParamLimits

0x02b5,	// (0x000002b5) popup_discreet_window

0xb293,	// (0x0000b293) popup_sk_window

0x3f50,	// (0x00003f50) bg_popup_sub_pane_cp28_ParamLimits

0x3f50,	// (0x00003f50) bg_popup_sub_pane_cp28

0x9ddc,	// (0x00009ddc) popup_discreet_window_g1_ParamLimits

0x9ddc,	// (0x00009ddc) popup_discreet_window_g1

0x9dfc,	// (0x00009dfc) popup_discreet_window_t1_ParamLimits

0x9dfc,	// (0x00009dfc) popup_discreet_window_t1

0x9e1a,	// (0x00009e1a) popup_discreet_window_t2_ParamLimits

0x9e1a,	// (0x00009e1a) popup_discreet_window_t2

0x0002,

0xb0f7,	// (0x0000b0f7) popup_discreet_window_t_ParamLimits

0xb0f7,	// (0x0000b0f7) popup_discreet_window_t

0x9e6c,	// (0x00009e6c) popup_sk_window_g1

0x9e76,	// (0x00009e76) popup_sk_window_g2

0x0001,

0xb0fe,	// (0x0000b0fe) popup_sk_window_g

0x9e80,	// (0x00009e80) popup_sk_window_t1

0x9e8e,	// (0x00009e8e) popup_sk_window_t1_copy1

0xee3f,	// (0x0000ee3f) cell_ai5_widget_pane_g2_ParamLimits

0xef67,	// (0x0000ef67) cell_ai5_widget_pane_t9_ParamLimits

0xef67,	// (0x0000ef67) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xf073,	// (0x0000f073) aid_fshwr2_btn_pane

0xf07b,	// (0x0000f07b) aid_fshwr2_syb_pane

0xf083,	// (0x0000f083) aid_fshwr2_txt_pane

0xf08b,	// (0x0000f08b) fshwr2_func_candi_pane

0xf095,	// (0x0000f095) fshwr2_hwr_syb_pane

0xf0a1,	// (0x0000f0a1) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xf0ab,	// (0x0000f0ab) fshwr2_icf_pane_t1_ParamLimits

0xf0ab,	// (0x0000f0ab) fshwr2_icf_pane_t1

0x651c,	// (0x0000651c) fshwr2_func_candi_pane_g1

0x9f01,	// (0x00009f01) fshwr2_func_candi_row_pane_ParamLimits

0x9f01,	// (0x00009f01) fshwr2_func_candi_row_pane

0xf0c3,	// (0x0000f0c3) cell_fshwr2_syb_pane_ParamLimits

0xf0c3,	// (0x0000f0c3) cell_fshwr2_syb_pane

0x69d0,	// (0x000069d0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x69d0,	// (0x000069d0) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0x9f2c,	// (0x00009f2c) fshwr2_func_candi_cell_pane_ParamLimits

0x9f2c,	// (0x00009f2c) fshwr2_func_candi_cell_pane

0x9f5e,	// (0x00009f5e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f5e,	// (0x00009f5e) fshwr2_func_candi_cell_bg_pane

0x9f78,	// (0x00009f78) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9f78,	// (0x00009f78) fshwr2_func_candi_cell_pane_g1

0x9f98,	// (0x00009f98) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f98,	// (0x00009f98) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x260e,	// (0x0000260e) cell_fshwr2_syb_bg_pane

0xf0dc,	// (0x0000f0dc) cell_fshwr2_syb_bg_pane_g1

0xf0e4,	// (0x0000f0e4) cell_fshwr2_syb_bg_pane_t1

0x13db,	// (0x000013db) main_tmo_pane

0xd0d6,	// (0x0000d0d6) uni_indicator_pane_g1_ParamLimits

0xd0eb,	// (0x0000d0eb) uni_indicator_pane_g2_ParamLimits

0xd100,	// (0x0000d100) uni_indicator_pane_g3_ParamLimits

0xd116,	// (0x0000d116) uni_indicator_pane_g4_ParamLimits

0xd116,	// (0x0000d116) uni_indicator_pane_g4

0xd12a,	// (0x0000d12a) uni_indicator_pane_g5_ParamLimits

0xd12a,	// (0x0000d12a) uni_indicator_pane_g5

0xd13e,	// (0x0000d13e) uni_indicator_pane_g6_ParamLimits

0xd13e,	// (0x0000d13e) uni_indicator_pane_g6

0xf5f1,	// (0x0000f5f1) uni_indicator_pane_g_ParamLimits

0xde97,	// (0x0000de97) popup_tmo_note_window_ParamLimits

0xde97,	// (0x0000de97) popup_tmo_note_window

0x0024,	// (0x00000024) fshwr2_bg_pane

0x9f89,	// (0x00009f89) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f89,	// (0x00009f89) fshwr2_func_candi_cell_pane_g2

0x0001,

0xb103,	// (0x0000b103) fshwr2_func_candi_cell_pane_g_ParamLimits

0xb103,	// (0x0000b103) fshwr2_func_candi_cell_pane_g

0x651c,	// (0x0000651c) bg_popup_window_pane_cp01

0x9fc2,	// (0x00009fc2) bg_popup_window_pane_g1_cp01

0x9fcb,	// (0x00009fcb) bg_popup_window_pane_cp22_ParamLimits

0x9fcb,	// (0x00009fcb) bg_popup_window_pane_cp22

0x9fd9,	// (0x00009fd9) listscroll_tmo_link_pane_ParamLimits

0x9fd9,	// (0x00009fd9) listscroll_tmo_link_pane

0xa019,	// (0x0000a019) popup_tmo_note_window_g1_ParamLimits

0xa019,	// (0x0000a019) popup_tmo_note_window_g1

0xa026,	// (0x0000a026) tmo_note_info_pane_ParamLimits

0xa026,	// (0x0000a026) tmo_note_info_pane

0xf0f3,	// (0x0000f0f3) list_tmo_note_info_pane_g1_ParamLimits

0xf0f3,	// (0x0000f0f3) list_tmo_note_info_pane_g1

0xa057,	// (0x0000a057) list_tmo_note_info_pane_g2_ParamLimits

0xa057,	// (0x0000a057) list_tmo_note_info_pane_g2

0x0001,

0xf765,	// (0x0000f765) list_tmo_note_info_pane_g_ParamLimits

0xf765,	// (0x0000f765) list_tmo_note_info_pane_g

0xa073,	// (0x0000a073) list_tmo_note_info_text_pane_ParamLimits

0xa073,	// (0x0000a073) list_tmo_note_info_text_pane

0xa0f8,	// (0x0000a0f8) list_tmo_link_pane

0xa105,	// (0x0000a105) scroll_pane_cp20

0xa112,	// (0x0000a112) list_single_tmo_link_pane_ParamLimits

0xa112,	// (0x0000a112) list_single_tmo_link_pane

0xa122,	// (0x0000a122) list_single_tmo_link_pane_t1

0xa130,	// (0x0000a130) list_tmo_note_info_text_pane_t1_ParamLimits

0xa130,	// (0x0000a130) list_tmo_note_info_text_pane_t1

0xbc18,	// (0x0000bc18) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbc18,	// (0x0000bc18) aid_size_touch_scroll_bar_cp01

0xbb47,	// (0x0000bb47) aid_size_touch_slider_marker

0xb283,	// (0x0000b283) popup_settings_window_ParamLimits

0xb283,	// (0x0000b283) popup_settings_window

0x2bbb,	// (0x00002bbb) popup_candi_list_indi_window

0x3210,	// (0x00003210) aid_touch_navi_pane_ParamLimits

0x83d8,	// (0x000083d8) rs_clock_indi_pane

0x83e1,	// (0x000083e1) sctrl_sk_bottom_pane_ParamLimits

0x83f2,	// (0x000083f2) sctrl_sk_top_pane_ParamLimits

0x8c36,	// (0x00008c36) popup_fep_tooltip_window

0x99e9,	// (0x000099e9) aid_size_cell_widget_grid_ParamLimits

0xee33,	// (0x0000ee33) cell_ai5_widget_pane_g1_ParamLimits

0xee33,	// (0x0000ee33) cell_ai5_widget_pane_g1

0xee7b,	// (0x0000ee7b) cell_ai5_widget_pane_g6_ParamLimits

0xee87,	// (0x0000ee87) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xf71e,	// (0x0000f71e) cell_ai5_widget_pane_g_ParamLimits

0xf71e,	// (0x0000f71e) cell_ai5_widget_pane_g

0xef8b,	// (0x0000ef8b) cell_ai5_widget_pane_t10_ParamLimits

0xef8b,	// (0x0000ef8b) cell_ai5_widget_pane_t10

0xef9d,	// (0x0000ef9d) grid_ai5_widget_pane_ParamLimits

0x9c51,	// (0x00009c51) cell_contacts_ai5_widget_pane_ParamLimits

0x9c51,	// (0x00009c51) cell_contacts_ai5_widget_pane

0x9e2f,	// (0x00009e2f) popup_discreet_window_t3_ParamLimits

0x9e2f,	// (0x00009e2f) popup_discreet_window_t3

0x9ed2,	// (0x00009ed2) popup_fshwr2_char_preview_window_ParamLimits

0x9ed2,	// (0x00009ed2) popup_fshwr2_char_preview_window

0xf10a,	// (0x0000f10a) tmo_note_info_pane_t1

0xf11f,	// (0x0000f11f) tmo_note_info_pane_t2

0xf138,	// (0x0000f138) tmo_note_info_pane_t3

0xa0d4,	// (0x0000a0d4) tmo_note_info_pane_t4

0xa0e6,	// (0x0000a0e6) tmo_note_info_pane_t5

0x0004,

0xf76a,	// (0x0000f76a) tmo_note_info_pane_t

0xa0f8,	// (0x0000a0f8) list_tmo_link_pane_ParamLimits

0xa105,	// (0x0000a105) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa149,	// (0x0000a149) popup_fshwr2_char_preview_window_t1

0xa157,	// (0x0000a157) popup_candi_list_indi_window_g1

0xa160,	// (0x0000a160) bg_cell_contacts_ai5_widget_pane

0xa16c,	// (0x0000a16c) cell_contacts_ai5_widget_pane_g1

0xa180,	// (0x0000a180) cell_contacts_ai5_widget_pane_g2

0xa18f,	// (0x0000a18f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb118,	// (0x0000b118) cell_contacts_ai5_widget_pane_g

0xa1a2,	// (0x0000a1a2) cell_contacts_ai5_widget_pane_t1

0x13db,	// (0x000013db) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf1b2,	// (0x0000f1b2) settings_container_pane

0x260e,	// (0x0000260e) listscroll_set_pane_copy1

0x5a1a,	// (0x00005a1a) scroll_pane_cp121_copy1

0xa228,	// (0x0000a228) set_content_pane_copy1

0xf1be,	// (0x0000f1be) aid_height_set_list_copy1_ParamLimits

0xf1be,	// (0x0000f1be) aid_height_set_list_copy1

0x4f53,	// (0x00004f53) aid_size_parent_copy1_ParamLimits

0x4f53,	// (0x00004f53) aid_size_parent_copy1

0xf1ca,	// (0x0000f1ca) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf1ca,	// (0x0000f1ca) button_value_adjust_pane_cp6_copy1

0x2b93,	// (0x00002b93) list_highlight_pane_cp2_copy1_ParamLimits

0x2b93,	// (0x00002b93) list_highlight_pane_cp2_copy1

0xf1de,	// (0x0000f1de) list_set_pane_copy1_ParamLimits

0xf1de,	// (0x0000f1de) list_set_pane_copy1

0xf14d,	// (0x0000f14d) main_pane_set_t1_copy1_ParamLimits

0xf14d,	// (0x0000f14d) main_pane_set_t1_copy1

0xf187,	// (0x0000f187) main_pane_set_t2_copy1_ParamLimits

0xf187,	// (0x0000f187) main_pane_set_t2_copy1

0xf2a5,	// (0x0000f2a5) main_pane_set_t3_copy1

0xf2b3,	// (0x0000f2b3) main_pane_set_t4_copy1

0xf1a6,	// (0x0000f1a6) set_content_pane_g1_copy1_ParamLimits

0xf1a6,	// (0x0000f1a6) set_content_pane_g1_copy1

0xf2c1,	// (0x0000f2c1) setting_code_pane_copy1

0xa33d,	// (0x0000a33d) setting_slider_graphic_pane_copy1

0xa33d,	// (0x0000a33d) setting_slider_pane_copy1

0xa347,	// (0x0000a347) setting_text_pane_copy1

0xa351,	// (0x0000a351) setting_volume_pane_copy1

0xf2cb,	// (0x0000f2cb) settings_code_pane_cp2_copy1

0xf2d3,	// (0x0000f2d3) settings_code_pane_cp_copy1_ParamLimits

0xf2d3,	// (0x0000f2d3) settings_code_pane_cp_copy1

0xf2e7,	// (0x0000f2e7) volume_set_pane_copy1

0xf2f3,	// (0x0000f2f3) volume_set_pane_g10_copy1

0xf2ff,	// (0x0000f2ff) volume_set_pane_g1_copy1

0xf309,	// (0x0000f309) volume_set_pane_g2_copy1

0xf313,	// (0x0000f313) volume_set_pane_g3_copy1

0xf31d,	// (0x0000f31d) volume_set_pane_g4_copy1

0xf327,	// (0x0000f327) volume_set_pane_g5_copy1

0xf331,	// (0x0000f331) volume_set_pane_g6_copy1

0xf33b,	// (0x0000f33b) volume_set_pane_g7_copy1

0xf345,	// (0x0000f345) volume_set_pane_g8_copy1

0xf34f,	// (0x0000f34f) volume_set_pane_g9_copy1

0x050f,	// (0x0000050f) bg_set_opt_pane_cp_copy1_ParamLimits

0x050f,	// (0x0000050f) bg_set_opt_pane_cp_copy1

0xa3e8,	// (0x0000a3e8) setting_slider_pane_t1_copy1_ParamLimits

0xa3e8,	// (0x0000a3e8) setting_slider_pane_t1_copy1

0xf359,	// (0x0000f359) setting_slider_pane_t2_copy1_ParamLimits

0xf359,	// (0x0000f359) setting_slider_pane_t2_copy1

0xf373,	// (0x0000f373) setting_slider_pane_t3_copy1_ParamLimits

0xf373,	// (0x0000f373) setting_slider_pane_t3_copy1

0xf38b,	// (0x0000f38b) slider_set_pane_copy1_ParamLimits

0xf38b,	// (0x0000f38b) slider_set_pane_copy1

0x1517,	// (0x00001517) set_opt_bg_pane_g1_copy2

0x151f,	// (0x0000151f) set_opt_bg_pane_g2_copy2

0xa44e,	// (0x0000a44e) set_opt_bg_pane_g3_copy2

0x152f,	// (0x0000152f) set_opt_bg_pane_g4_copy2

0x1537,	// (0x00001537) set_opt_bg_pane_g5_copy2

0x153f,	// (0x0000153f) set_opt_bg_pane_g6_copy2

0xf3a1,	// (0x0000f3a1) set_opt_bg_pane_g7_copy2

0xa462,	// (0x0000a462) set_opt_bg_pane_g8_copy2

0xa46c,	// (0x0000a46c) set_opt_bg_pane_g9_copy2

0xa476,	// (0x0000a476) aid_size_touch_slider_mark_copy1_ParamLimits

0xa476,	// (0x0000a476) aid_size_touch_slider_mark_copy1

0xa48a,	// (0x0000a48a) slider_set_pane_g1_copy1

0xa493,	// (0x0000a493) slider_set_pane_g2_copy1

0x4eba,	// (0x00004eba) slider_set_pane_g3_copy1_ParamLimits

0x4eba,	// (0x00004eba) slider_set_pane_g3_copy1

0x4ece,	// (0x00004ece) slider_set_pane_g4_copy1_ParamLimits

0x4ece,	// (0x00004ece) slider_set_pane_g4_copy1

0x4ee6,	// (0x00004ee6) slider_set_pane_g5_copy1_ParamLimits

0x4ee6,	// (0x00004ee6) slider_set_pane_g5_copy1

0x4eba,	// (0x00004eba) slider_set_pane_g6_copy1_ParamLimits

0x4eba,	// (0x00004eba) slider_set_pane_g6_copy1

0xf3ab,	// (0x0000f3ab) slider_set_pane_g7_copy1_ParamLimits

0xf3ab,	// (0x0000f3ab) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa4b1,	// (0x0000a4b1) setting_slider_graphic_pane_g1_copy1

0xf3c1,	// (0x0000f3c1) setting_slider_graphic_pane_t1_copy1

0xf3d1,	// (0x0000f3d1) setting_slider_graphic_pane_t2_copy1

0xf3e1,	// (0x0000f3e1) slider_set_pane_cp_copy1

0xa4ea,	// (0x0000a4ea) input_focus_pane_cp1_copy1

0xa4f3,	// (0x0000a4f3) list_set_text_pane_copy1

0xa4fb,	// (0x0000a4fb) setting_text_pane_g1_copy1

0x05f8,	// (0x000005f8) set_text_pane_t1_copy1

0xa4ea,	// (0x0000a4ea) input_focus_pane_cp2_copy1

0xa4fb,	// (0x0000a4fb) setting_code_pane_g1_copy1

0xf3e9,	// (0x0000f3e9) setting_code_pane_t1_copy1

0xf3f7,	// (0x0000f3f7) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xbf31,	// (0x0000bf31) list_set_graphic_pane_g1_copy1_ParamLimits

0xbf31,	// (0x0000bf31) list_set_graphic_pane_g1_copy1

0xf409,	// (0x0000f409) list_set_graphic_pane_g2_copy1

0xbf49,	// (0x0000bf49) list_set_graphic_pane_t1_copy1_ParamLimits

0xbf49,	// (0x0000bf49) list_set_graphic_pane_t1_copy1

0x651c,	// (0x0000651c) rs_clock_indi_pane_g1

0xa52c,	// (0x0000a52c) rs_clock_indi_pane_t1

0xa53a,	// (0x0000a53a) rs_indi_pane

0xa542,	// (0x0000a542) rs_indi_pane_g1

0xa54b,	// (0x0000a54b) rs_indi_pane_g2

0xa554,	// (0x0000a554) rs_indi_pane_g3

0x0002,

0xb11f,	// (0x0000b11f) rs_indi_pane_g

0x260e,	// (0x0000260e) bg_popup_preview_window_pane_cp03

0xa55d,	// (0x0000a55d) popup_fep_tooltip_window_t1

0x779e,	// (0x0000779e) popup_note2_window_g2_ParamLimits

0x779e,	// (0x0000779e) popup_note2_window_g2

0x0001,

0xaebd,	// (0x0000aebd) popup_note2_window_g_ParamLimits

0xaebd,	// (0x0000aebd) popup_note2_window_g

0x7dad,	// (0x00007dad) bg_popup_sub_pane_cp11_ParamLimits

0x7dba,	// (0x00007dba) cell_ai3_links_pane_g1_ParamLimits

0x7dd1,	// (0x00007dd1) cell_ai3_links_pane_t1

0x05f8,	// (0x000005f8) set_text_pane_t1_copy1_ParamLimits

0x251b,	// (0x0000251b) cell_graphic_popup_pane_cp2_ParamLimits

0x251b,	// (0x0000251b) cell_graphic_popup_pane_cp2

0xa56b,	// (0x0000a56b) cell_graphic_popup_pane_g1_cp2

0x0b8b,	// (0x00000b8b) cell_graphic_popup_pane_g2_cp2

0xa573,	// (0x0000a573) cell_graphic_popup_pane_g3_cp2

0xa57b,	// (0x0000a57b) cell_graphic_popup_pane_t2_cp2

0x0b9c,	// (0x00000b9c) grid_highlight_pane_cp3_cp2

0x1a7e,	// (0x00001a7e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x13db,	// (0x000013db) main_tmo_pane_ParamLimits

0xde8b,	// (0x0000de8b) popup_tmo_big_image_note_window

0xee23,	// (0x0000ee23) cell_ai5_widget_list_pane

0xee2b,	// (0x0000ee2b) cell_ai5_widget_lrg_icon_pane

0xf10a,	// (0x0000f10a) tmo_note_info_pane_t1_ParamLimits

0xf11f,	// (0x0000f11f) tmo_note_info_pane_t2_ParamLimits

0xf138,	// (0x0000f138) tmo_note_info_pane_t3_ParamLimits

0xa0d4,	// (0x0000a0d4) tmo_note_info_pane_t4_ParamLimits

0xa0e6,	// (0x0000a0e6) tmo_note_info_pane_t5_ParamLimits

0xf76a,	// (0x0000f76a) tmo_note_info_pane_t_ParamLimits

0xf1b2,	// (0x0000f1b2) settings_container_pane_ParamLimits

0xa4e2,	// (0x0000a4e2) indicator_popup_pane_cp5

0xa4e2,	// (0x0000a4e2) indicator_popup_pane_cp6

0xf3f7,	// (0x0000f3f7) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa589,	// (0x0000a589) popup_tmo_big_image_note_window_g1

0xa595,	// (0x0000a595) popup_tmo_big_image_note_window_t1

0xa5a5,	// (0x0000a5a5) popup_tmo_big_image_note_window_t2

0xa5b5,	// (0x0000a5b5) popup_tmo_big_image_note_window_t3

0x0002,

0xb126,	// (0x0000b126) popup_tmo_big_image_note_window_t

0xf411,	// (0x0000f411) cell_ai5_widget_lrg_icon_pane_g1

0xf419,	// (0x0000f419) cell_ai5_widget_lrg_icon_pane_t1

0xf427,	// (0x0000f427) cell_ai5_widget_list_row_pane_ParamLimits

0xf427,	// (0x0000f427) cell_ai5_widget_list_row_pane

0xf440,	// (0x0000f440) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf440,	// (0x0000f440) cell_ai5_widget_list_row_pane_g1

0xf44d,	// (0x0000f44d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf44d,	// (0x0000f44d) cell_ai5_widget_list_row_pane_t1

0xf465,	// (0x0000f465) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf465,	// (0x0000f465) cell_ai5_widget_list_row_pane_t2

0x0001,

0xf775,	// (0x0000f775) cell_ai5_widget_list_row_pane_t_ParamLimits

0xf775,	// (0x0000f775) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa62b,	// (0x0000a62b) popup_fep_char_pre_window

0xa633,	// (0x0000a633) popup_fep_ituss_window

0xa63e,	// (0x0000a63e) popup_fep_vkbss_window

0xa649,	// (0x0000a649) grid_vkbss_keypad_pane_ParamLimits

0xa649,	// (0x0000a649) grid_vkbss_keypad_pane

0xa659,	// (0x0000a659) ituss_keypad_pane

0xa661,	// (0x0000a661) aid_vkbss_key_offset_ParamLimits

0xa661,	// (0x0000a661) aid_vkbss_key_offset

0xa670,	// (0x0000a670) cell_vkbss_key_pane_ParamLimits

0xa670,	// (0x0000a670) cell_vkbss_key_pane

0xa686,	// (0x0000a686) bg_cell_vkbss_key_g1_ParamLimits

0xa686,	// (0x0000a686) bg_cell_vkbss_key_g1

0xa692,	// (0x0000a692) cell_vkbss_key_3p_pane_ParamLimits

0xa692,	// (0x0000a692) cell_vkbss_key_3p_pane

0xa6ac,	// (0x0000a6ac) cell_vkbss_key_g1_ParamLimits

0xa6ac,	// (0x0000a6ac) cell_vkbss_key_g1

0xa6c6,	// (0x0000a6c6) cell_vkbss_key_t1_ParamLimits

0xa6c6,	// (0x0000a6c6) cell_vkbss_key_t1

0xa6f1,	// (0x0000a6f1) cell_ituss_key_pane_ParamLimits

0xa6f1,	// (0x0000a6f1) cell_ituss_key_pane

0xa700,	// (0x0000a700) bg_cell_ituss_key_g1_ParamLimits

0xa700,	// (0x0000a700) bg_cell_ituss_key_g1

0xa70c,	// (0x0000a70c) cell_ituss_key_pane_g1_ParamLimits

0xa70c,	// (0x0000a70c) cell_ituss_key_pane_g1

0xa718,	// (0x0000a718) cell_ituss_key_pane_g2_ParamLimits

0xa718,	// (0x0000a718) cell_ituss_key_pane_g2

0x0001,

0xb132,	// (0x0000b132) cell_ituss_key_pane_g_ParamLimits

0xb132,	// (0x0000b132) cell_ituss_key_pane_g

0xa72c,	// (0x0000a72c) cell_ituss_key_t1_ParamLimits

0xa72c,	// (0x0000a72c) cell_ituss_key_t1

0xa74a,	// (0x0000a74a) cell_ituss_key_t2_ParamLimits

0xa74a,	// (0x0000a74a) cell_ituss_key_t2

0xa769,	// (0x0000a769) cell_ituss_key_t3_ParamLimits

0xa769,	// (0x0000a769) cell_ituss_key_t3

0xa788,	// (0x0000a788) cell_ituss_key_t4_ParamLimits

0xa788,	// (0x0000a788) cell_ituss_key_t4

0x0003,

0xb137,	// (0x0000b137) cell_ituss_key_t_ParamLimits

0xb137,	// (0x0000b137) cell_ituss_key_t

0xa7a7,	// (0x0000a7a7) cell_vkbss_key_3p_pane_g1

0xa7af,	// (0x0000a7af) cell_vkbss_key_3p_pane_g2

0xa7b7,	// (0x0000a7b7) cell_vkbss_key_3p_pane_g3

0x0002,

0xb140,	// (0x0000b140) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa7bf,	// (0x0000a7bf) popup_fep_char_pre_window_t1

0xee19,	// (0x0000ee19) main_ai5_sk_pane

0xa160,	// (0x0000a160) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa16c,	// (0x0000a16c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa180,	// (0x0000a180) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa18f,	// (0x0000a18f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb118,	// (0x0000b118) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa1a2,	// (0x0000a1a2) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x13db,	// (0x000013db) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf477,	// (0x0000f477) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal

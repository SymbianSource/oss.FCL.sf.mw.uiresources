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
0xb273,	// (0x0000b273) Screen

0xb27f,	// (0x0000b27f) application_window_ParamLimits

0xb27f,	// (0x0000b27f) application_window

0x002e,	// (0x0000002e) screen_g1

0xb2b7,	// (0x0000b2b7) area_bottom_pane_ParamLimits

0xb2b7,	// (0x0000b2b7) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc952,	// (0x0000c952) battery_pane_ParamLimits

0xc952,	// (0x0000c952) battery_pane

0x4092,	// (0x00004092) bg_status_flat_pane_g8

0x409a,	// (0x0000409a) bg_status_flat_pane_g9

0x322b,	// (0x0000322b) context_pane_ParamLimits

0x322b,	// (0x0000322b) context_pane

0xcabd,	// (0x0000cabd) navi_pane_ParamLimits

0xcabd,	// (0x0000cabd) navi_pane

0xcb35,	// (0x0000cb35) signal_pane_ParamLimits

0xcb35,	// (0x0000cb35) signal_pane

0x0008,

0xabf4,	// (0x0000abf4) bg_status_flat_pane_g

0xcbc5,	// (0x0000cbc5) status_pane_g1_ParamLimits

0xcbc5,	// (0x0000cbc5) status_pane_g1

0xcbdb,	// (0x0000cbdb) status_pane_g2_ParamLimits

0xcbdb,	// (0x0000cbdb) status_pane_g2

0x3444,	// (0x00003444) status_pane_g3_ParamLimits

0x3444,	// (0x00003444) status_pane_g3

0x0004,

0xf1e0,	// (0x0000f1e0) status_pane_g_ParamLimits

0xf1e0,	// (0x0000f1e0) status_pane_g

0xcbe7,	// (0x0000cbe7) title_pane_ParamLimits

0xcbe7,	// (0x0000cbe7) title_pane

0xcc4a,	// (0x0000cc4a) uni_indicator_pane_ParamLimits

0xcc4a,	// (0x0000cc4a) uni_indicator_pane

0x2ad2,	// (0x00002ad2) bg_list_pane_ParamLimits

0x2ad2,	// (0x00002ad2) bg_list_pane

0xc227,	// (0x0000c227) find_pane

0xc22f,	// (0x0000c22f) listscroll_app_pane_ParamLimits

0xc22f,	// (0x0000c22f) listscroll_app_pane

0x2b06,	// (0x00002b06) listscroll_form_pane

0xc23b,	// (0x0000c23b) listscroll_gen_pane_ParamLimits

0xc23b,	// (0x0000c23b) listscroll_gen_pane

0x2b06,	// (0x00002b06) listscroll_set_pane

0x4e7d,	// (0x00004e7d) main_idle_act_pane

0x25c7,	// (0x000025c7) main_idle_trad_pane

0x25c7,	// (0x000025c7) main_list_empty_pane

0x2b34,	// (0x00002b34) main_midp_pane

0x2b40,	// (0x00002b40) main_pane_g1_ParamLimits

0x2b40,	// (0x00002b40) main_pane_g1

0xc24f,	// (0x0000c24f) popup_ai_message_window_ParamLimits

0xc24f,	// (0x0000c24f) popup_ai_message_window

0xc2e0,	// (0x0000c2e0) popup_fep_china_uni_window_ParamLimits

0xc2e0,	// (0x0000c2e0) popup_fep_china_uni_window

0x2c58,	// (0x00002c58) popup_fep_japan_candidate_window_ParamLimits

0x2c58,	// (0x00002c58) popup_fep_japan_candidate_window

0x2c78,	// (0x00002c78) popup_fep_japan_predictive_window_ParamLimits

0x2c78,	// (0x00002c78) popup_fep_japan_predictive_window

0xc33c,	// (0x0000c33c) popup_find_window

0xc359,	// (0x0000c359) popup_grid_graphic_window_ParamLimits

0xc359,	// (0x0000c359) popup_grid_graphic_window

0x2cdd,	// (0x00002cdd) popup_large_graphic_colour_window

0xc3f1,	// (0x0000c3f1) popup_menu_window_ParamLimits

0xc3f1,	// (0x0000c3f1) popup_menu_window

0xc5ab,	// (0x0000c5ab) popup_note_image_window

0xc571,	// (0x0000c571) popup_note_wait_window_ParamLimits

0xc571,	// (0x0000c571) popup_note_wait_window

0xc5c3,	// (0x0000c5c3) popup_note_window_ParamLimits

0xc5c3,	// (0x0000c5c3) popup_note_window

0xc669,	// (0x0000c669) popup_query_code_window_ParamLimits

0xc669,	// (0x0000c669) popup_query_code_window

0x2f25,	// (0x00002f25) popup_query_data_code_window_ParamLimits

0x2f25,	// (0x00002f25) popup_query_data_code_window

0xc6a3,	// (0x0000c6a3) popup_query_data_window_ParamLimits

0xc6a3,	// (0x0000c6a3) popup_query_data_window

0xc719,	// (0x0000c719) popup_query_sat_info_window_ParamLimits

0xc719,	// (0x0000c719) popup_query_sat_info_window

0xc7b0,	// (0x0000c7b0) popup_snote_single_graphic_window_ParamLimits

0xc7b0,	// (0x0000c7b0) popup_snote_single_graphic_window

0xc7b0,	// (0x0000c7b0) popup_snote_single_text_window_ParamLimits

0xc7b0,	// (0x0000c7b0) popup_snote_single_text_window

0x2fac,	// (0x00002fac) popup_sub_window_general

0x30dc,	// (0x000030dc) popup_window_general_ParamLimits

0x30dc,	// (0x000030dc) popup_window_general

0x30f1,	// (0x000030f1) power_save_pane

0xc093,	// (0x0000c093) control_pane_g1_ParamLimits

0xc093,	// (0x0000c093) control_pane_g1

0xc0bc,	// (0x0000c0bc) control_pane_g2_ParamLimits

0xc0bc,	// (0x0000c0bc) control_pane_g2

0x2977,	// (0x00002977) control_pane_g3_ParamLimits

0x2977,	// (0x00002977) control_pane_g3

0x0007,

0xf1c8,	// (0x0000f1c8) control_pane_g_ParamLimits

0xf1c8,	// (0x0000f1c8) control_pane_g

0xc120,	// (0x0000c120) control_pane_t1_ParamLimits

0xc120,	// (0x0000c120) control_pane_t1

0xc17e,	// (0x0000c17e) control_pane_t2_ParamLimits

0xc17e,	// (0x0000c17e) control_pane_t2

0x0002,

0xf1d9,	// (0x0000f1d9) control_pane_t_ParamLimits

0xf1d9,	// (0x0000f1d9) control_pane_t

0x284e,	// (0x0000284e) navi_navi_volume_pane_cp1

0x2857,	// (0x00002857) status_small_icon_pane

0x285f,	// (0x0000285f) status_small_pane_g1_ParamLimits

0x285f,	// (0x0000285f) status_small_pane_g1

0x2893,	// (0x00002893) status_small_pane_g2_ParamLimits

0x2893,	// (0x00002893) status_small_pane_g2

0x289f,	// (0x0000289f) status_small_pane_g3_ParamLimits

0x289f,	// (0x0000289f) status_small_pane_g3

0x28ab,	// (0x000028ab) status_small_pane_g4_ParamLimits

0x28ab,	// (0x000028ab) status_small_pane_g4

0x28b7,	// (0x000028b7) status_small_pane_g5_ParamLimits

0x28b7,	// (0x000028b7) status_small_pane_g5

0x28c6,	// (0x000028c6) status_small_pane_g6_ParamLimits

0x28c6,	// (0x000028c6) status_small_pane_g6

0x0007,

0xab00,	// (0x0000ab00) status_small_pane_g_ParamLimits

0xab00,	// (0x0000ab00) status_small_pane_g

0x28f6,	// (0x000028f6) status_small_pane_t1

0x2919,	// (0x00002919) status_small_wait_pane_ParamLimits

0x2919,	// (0x00002919) status_small_wait_pane

0xbe73,	// (0x0000be73) aid_levels_signal_ParamLimits

0xbe73,	// (0x0000be73) aid_levels_signal

0xbe8b,	// (0x0000be8b) signal_pane_g1_ParamLimits

0xbe8b,	// (0x0000be8b) signal_pane_g1

0xbea6,	// (0x0000bea6) signal_pane_g2_ParamLimits

0xbea6,	// (0x0000bea6) signal_pane_g2

0x0003,

0xf1a3,	// (0x0000f1a3) signal_pane_g_ParamLimits

0xf1a3,	// (0x0000f1a3) signal_pane_g

0x1e79,	// (0x00001e79) context_pane_g1

0xb430,	// (0x0000b430) title_pane_g1

0xb467,	// (0x0000b467) title_pane_t1

0x04c5,	// (0x000004c5) title_pane_t2

0x04eb,	// (0x000004eb) title_pane_t3

0x0002,

0xf0d5,	// (0x0000f0d5) title_pane_t

0xcc72,	// (0x0000cc72) aid_levels_battery_ParamLimits

0xcc72,	// (0x0000cc72) aid_levels_battery

0xcc8e,	// (0x0000cc8e) battery_pane_g1_ParamLimits

0xcc8e,	// (0x0000cc8e) battery_pane_g1

0xccab,	// (0x0000ccab) battery_pane_g2_ParamLimits

0xccab,	// (0x0000ccab) battery_pane_g2

0x0001,

0xf1eb,	// (0x0000f1eb) battery_pane_g_ParamLimits

0xf1eb,	// (0x0000f1eb) battery_pane_g

0x4b2c,	// (0x00004b2c) uni_indicator_pane_g1

0x4b41,	// (0x00004b41) uni_indicator_pane_g2

0x4b57,	// (0x00004b57) uni_indicator_pane_g3

0x0005,

0xac9c,	// (0x0000ac9c) uni_indicator_pane_g

0x2439,	// (0x00002439) navi_icon_pane_ParamLimits

0x2439,	// (0x00002439) navi_icon_pane

0x2382,	// (0x00002382) navi_midp_pane

0x2455,	// (0x00002455) navi_navi_pane

0x245f,	// (0x0000245f) navi_text_pane_ParamLimits

0x245f,	// (0x0000245f) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09c5,	// (0x000009c5) status_small_wait_pane_g2

0x0001,

0xac97,	// (0x0000ac97) status_small_wait_pane_g

0x4851,	// (0x00004851) navi_navi_icon_text_pane

0x4859,	// (0x00004859) navi_navi_pane_g1_ParamLimits

0x4859,	// (0x00004859) navi_navi_pane_g1

0x486b,	// (0x0000486b) navi_navi_pane_g2_ParamLimits

0x486b,	// (0x0000486b) navi_navi_pane_g2

0x0001,

0xac65,	// (0x0000ac65) navi_navi_pane_g_ParamLimits

0xac65,	// (0x0000ac65) navi_navi_pane_g

0x487d,	// (0x0000487d) navi_navi_tabs_pane

0x4886,	// (0x00004886) navi_navi_text_pane

0x4851,	// (0x00004851) navi_navi_volume_pane

0x482d,	// (0x0000482d) navi_text_pane_t1

0x4821,	// (0x00004821) navi_icon_pane_g1

0x4774,	// (0x00004774) navi_navi_text_pane_t1

0xd025,	// (0x0000d025) navi_navi_volume_pane_g1

0xd02d,	// (0x0000d02d) volume_small_pane

0xcf81,	// (0x0000cf81) navi_navi_icon_text_pane_g1

0xcf89,	// (0x0000cf89) navi_navi_icon_text_pane_t1

0x2455,	// (0x00002455) navi_tabs_2_long_pane

0x2455,	// (0x00002455) navi_tabs_2_pane

0x2455,	// (0x00002455) navi_tabs_3_long_pane

0x2455,	// (0x00002455) navi_tabs_3_pane

0x2455,	// (0x00002455) navi_tabs_4_pane

0xcf61,	// (0x0000cf61) tabs_2_active_pane_ParamLimits

0xcf61,	// (0x0000cf61) tabs_2_active_pane

0xcf71,	// (0x0000cf71) tabs_2_passive_pane_ParamLimits

0xcf71,	// (0x0000cf71) tabs_2_passive_pane

0xcf2f,	// (0x0000cf2f) tabs_3_active_pane_ParamLimits

0xcf2f,	// (0x0000cf2f) tabs_3_active_pane

0xcf3f,	// (0x0000cf3f) tabs_3_passive_pane_ParamLimits

0xcf3f,	// (0x0000cf3f) tabs_3_passive_pane

0xcf50,	// (0x0000cf50) tabs_3_passive_pane_cp_ParamLimits

0xcf50,	// (0x0000cf50) tabs_3_passive_pane_cp

0xceeb,	// (0x0000ceeb) tabs_4_active_pane_ParamLimits

0xceeb,	// (0x0000ceeb) tabs_4_active_pane

0xcefc,	// (0x0000cefc) tabs_4_passive_pane_ParamLimits

0xcefc,	// (0x0000cefc) tabs_4_passive_pane

0xcf0d,	// (0x0000cf0d) tabs_4_passive_pane_cp_ParamLimits

0xcf0d,	// (0x0000cf0d) tabs_4_passive_pane_cp

0xcf1e,	// (0x0000cf1e) tabs_4_passive_pane_cp2_ParamLimits

0xcf1e,	// (0x0000cf1e) tabs_4_passive_pane_cp2

0xcecb,	// (0x0000cecb) tabs_2_long_active_pane_ParamLimits

0xcecb,	// (0x0000cecb) tabs_2_long_active_pane

0xcedb,	// (0x0000cedb) tabs_2_long_passive_pane_ParamLimits

0xcedb,	// (0x0000cedb) tabs_2_long_passive_pane

0xce98,	// (0x0000ce98) tabs_3_long_active_pane_ParamLimits

0xce98,	// (0x0000ce98) tabs_3_long_active_pane

0xcea9,	// (0x0000cea9) tabs_3_long_passive_pane_ParamLimits

0xcea9,	// (0x0000cea9) tabs_3_long_passive_pane

0xceba,	// (0x0000ceba) tabs_3_long_passive_pane_cp_ParamLimits

0xceba,	// (0x0000ceba) tabs_3_long_passive_pane_cp

0x44f5,	// (0x000044f5) volume_small_pane_g1

0xce47,	// (0x0000ce47) volume_small_pane_g2

0xce50,	// (0x0000ce50) volume_small_pane_g3

0xce59,	// (0x0000ce59) volume_small_pane_g4

0xce62,	// (0x0000ce62) volume_small_pane_g5

0xce6b,	// (0x0000ce6b) volume_small_pane_g6

0xce74,	// (0x0000ce74) volume_small_pane_g7

0xce7d,	// (0x0000ce7d) volume_small_pane_g8

0xce86,	// (0x0000ce86) volume_small_pane_g9

0xce8f,	// (0x0000ce8f) volume_small_pane_g10

0x0009,

0xf20d,	// (0x0000f20d) volume_small_pane_g

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2

0xb4f3,	// (0x0000b4f3) tabs_3_active_pane_g1

0xb4fb,	// (0x0000b4fb) tabs_3_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2

0xb4f3,	// (0x0000b4f3) tabs_3_passive_pane_g1

0xb4fb,	// (0x0000b4fb) tabs_3_passive_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3

0xb50d,	// (0x0000b50d) tabs_4_active_pane_g1

0xb515,	// (0x0000b515) tabs_4_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3

0xb50d,	// (0x0000b50d) tabs_4_1_passive_pane_g1

0xb515,	// (0x0000b515) tabs_4_1_passive_pane_t1

0x2b34,	// (0x00002b34) list_highlight_pane_cp2

0xd0e8,	// (0x0000d0e8) list_set_pane_ParamLimits

0xd0e8,	// (0x0000d0e8) list_set_pane

0xd182,	// (0x0000d182) main_pane_set_t1_ParamLimits

0xd182,	// (0x0000d182) main_pane_set_t1

0xd1a2,	// (0x0000d1a2) main_pane_set_t2_ParamLimits

0xd1a2,	// (0x0000d1a2) main_pane_set_t2

0xd1b6,	// (0x0000d1b6) main_pane_set_t3_ParamLimits

0xd1b6,	// (0x0000d1b6) main_pane_set_t3

0xd1c8,	// (0x0000d1c8) main_pane_set_t4_ParamLimits

0xd1c8,	// (0x0000d1c8) main_pane_set_t4

0x0003,

0xf23c,	// (0x0000f23c) main_pane_set_t_ParamLimits

0xf23c,	// (0x0000f23c) main_pane_set_t

0xd1da,	// (0x0000d1da) setting_code_pane

0xd1e4,	// (0x0000d1e4) setting_slider_graphic_pane

0xd1e4,	// (0x0000d1e4) setting_slider_pane

0xd1e4,	// (0x0000d1e4) setting_text_pane

0xd1e4,	// (0x0000d1e4) setting_volume_pane

0x053f,	// (0x0000053f) volume_set_pane

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp

0x0547,	// (0x00000547) setting_slider_pane_t1

0x0560,	// (0x00000560) setting_slider_pane_t2

0x057a,	// (0x0000057a) setting_slider_pane_t3

0x0002,

0xa8ec,	// (0x0000a8ec) setting_slider_pane_t

0x0592,	// (0x00000592) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05a8,	// (0x000005a8) setting_slider_graphic_pane_g1

0x05b1,	// (0x000005b1) setting_slider_graphic_pane_t1

0x05c1,	// (0x000005c1) setting_slider_graphic_pane_t2

0x0001,

0xa8f3,	// (0x0000a8f3) setting_slider_graphic_pane_t

0x05d1,	// (0x000005d1) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4e64,	// (0x00004e64) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05d9,	// (0x000005d9) setting_code_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_ParamLimits

0x05e7,	// (0x000005e7) set_text_pane_t1

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2

0x4e3e,	// (0x00004e3e) set_opt_bg_pane_g3

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6

0x4e48,	// (0x00004e48) set_opt_bg_pane_g7

0x4e50,	// (0x00004e50) set_opt_bg_pane_g8

0x4e5a,	// (0x00004e5a) set_opt_bg_pane_g9

0x0008,

0xacee,	// (0x0000acee) set_opt_bg_pane_g

0x4dcd,	// (0x00004dcd) slider_set_pane_g1

0x4dda,	// (0x00004dda) slider_set_pane_g2

0x0006,

0xacdf,	// (0x0000acdf) slider_set_pane_g

0x4c4d,	// (0x00004c4d) volume_set_pane_g1

0x4c55,	// (0x00004c55) volume_set_pane_g2

0x4c5d,	// (0x00004c5d) volume_set_pane_g3

0x4c65,	// (0x00004c65) volume_set_pane_g4

0x4c6d,	// (0x00004c6d) volume_set_pane_g5

0x4c75,	// (0x00004c75) volume_set_pane_g6

0x4c7d,	// (0x00004c7d) volume_set_pane_g7

0x4c85,	// (0x00004c85) volume_set_pane_g8

0x4c8d,	// (0x00004c8d) volume_set_pane_g9

0x4c95,	// (0x00004c95) volume_set_pane_g10

0x0009,

0xacb7,	// (0x0000acb7) volume_set_pane_g

0xb527,	// (0x0000b527) indicator_pane_ParamLimits

0xb527,	// (0x0000b527) indicator_pane

0xb54f,	// (0x0000b54f) main_idle_pane_g2_ParamLimits

0xb54f,	// (0x0000b54f) main_idle_pane_g2

0xb587,	// (0x0000b587) main_pane_idle_g1_ParamLimits

0xb587,	// (0x0000b587) main_pane_idle_g1

0x0642,	// (0x00000642) popup_clock_digital_analogue_window_ParamLimits

0x0642,	// (0x00000642) popup_clock_digital_analogue_window

0xb5ae,	// (0x0000b5ae) soft_indicator_pane_ParamLimits

0xb5ae,	// (0x0000b5ae) soft_indicator_pane

0xb5c8,	// (0x0000b5c8) wallpaper_pane_ParamLimits

0xb5c8,	// (0x0000b5c8) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb5da,	// (0x0000b5da) indicator_pane_g1_ParamLimits

0xb5da,	// (0x0000b5da) indicator_pane_g1

0x53b0,	// (0x000053b0) navi_navi_icon_text_pane_srt_g1

0x0694,	// (0x00000694) soft_indicator_pane_t1

0x06ae,	// (0x000006ae) aid_ps_area_pane

0xb5f0,	// (0x0000b5f0) aid_ps_clock_pane

0x06cd,	// (0x000006cd) aid_ps_indicator_pane

0x06d9,	// (0x000006d9) indicator_ps_pane_ParamLimits

0x06d9,	// (0x000006d9) indicator_ps_pane

0x06e8,	// (0x000006e8) power_save_pane_g1_ParamLimits

0x06e8,	// (0x000006e8) power_save_pane_g1

0x06f4,	// (0x000006f4) power_save_pane_g2_ParamLimits

0x06f4,	// (0x000006f4) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06ae,	// (0x000006ae) aid_ps_area_pane_ParamLimits

0x0001,

0xa8f8,	// (0x0000a8f8) power_save_pane_g_ParamLimits

0xa8f8,	// (0x0000a8f8) power_save_pane_g

0x0702,	// (0x00000702) power_save_pane_t1_ParamLimits

0x0702,	// (0x00000702) power_save_pane_t1

0xb5f0,	// (0x0000b5f0) aid_ps_clock_pane_ParamLimits

0x06cd,	// (0x000006cd) aid_ps_indicator_pane_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4

0x0001,

0xa8fd,	// (0x0000a8fd) power_save_pane_t_ParamLimits

0xa8fd,	// (0x0000a8fd) power_save_pane_t

0x073e,	// (0x0000073e) power_save_t3_ParamLimits

0x073e,	// (0x0000073e) power_save_t3

0x0729,	// (0x00000729) power_save_t2_ParamLimits

0x0729,	// (0x00000729) power_save_t2

0x0753,	// (0x00000753) indicator_ps_pane_g1

0xb5fe,	// (0x0000b5fe) ai_gene_pane_ParamLimits

0xb5fe,	// (0x0000b5fe) ai_gene_pane

0xb615,	// (0x0000b615) ai_links_pane_ParamLimits

0xb615,	// (0x0000b615) ai_links_pane

0xb62d,	// (0x0000b62d) indicator_pane_cp1_ParamLimits

0xb62d,	// (0x0000b62d) indicator_pane_cp1

0xb63c,	// (0x0000b63c) main_pane_idle_g1_cp_ParamLimits

0xb63c,	// (0x0000b63c) main_pane_idle_g1_cp

0x078c,	// (0x0000078c) popup_ai_links_title_window

0xb654,	// (0x0000b654) soft_indicator_pane_cp1_ParamLimits

0xb654,	// (0x0000b654) soft_indicator_pane_cp1

0x4b1a,	// (0x00004b1a) ai_links_pane_g1

0x4b23,	// (0x00004b23) grid_ai_links_pane

0xd05a,	// (0x0000d05a) ai_gene_pane_1

0x4b08,	// (0x00004b08) ai_gene_pane_2

0x4b11,	// (0x00004b11) list_highlight_pane_cp4

0xd036,	// (0x0000d036) cell_ai_link_pane_ParamLimits

0xd036,	// (0x0000d036) cell_ai_link_pane

0x4ad9,	// (0x00004ad9) cell_ai_link_pane_g1

0x09c5,	// (0x000009c5) cell_ai_link_pane_g2

0x0001,

0xac92,	// (0x0000ac92) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07af,	// (0x000007af) popup_ai_links_title_window_t1

0x4a27,	// (0x00004a27) ai_gene_pane_1_g1_ParamLimits

0x4a27,	// (0x00004a27) ai_gene_pane_1_g1

0x4a33,	// (0x00004a33) ai_gene_pane_1_g2_ParamLimits

0x4a33,	// (0x00004a33) ai_gene_pane_1_g2

0x0001,

0xac88,	// (0x0000ac88) ai_gene_pane_1_g_ParamLimits

0xac88,	// (0x0000ac88) ai_gene_pane_1_g

0x4a40,	// (0x00004a40) ai_gene_pane_1_t1_ParamLimits

0x4a40,	// (0x00004a40) ai_gene_pane_1_t1

0x4a74,	// (0x00004a74) grid_ai_soft_ind_pane

0x4a12,	// (0x00004a12) ai_gene_pane_2_t1_ParamLimits

0x4a12,	// (0x00004a12) ai_gene_pane_2_t1

0xb668,	// (0x0000b668) main_pane_empty_t1_ParamLimits

0xb668,	// (0x0000b668) main_pane_empty_t1

0xb680,	// (0x0000b680) main_pane_empty_t2_ParamLimits

0xb680,	// (0x0000b680) main_pane_empty_t2

0xb695,	// (0x0000b695) main_pane_empty_t3_ParamLimits

0xb695,	// (0x0000b695) main_pane_empty_t3

0xb6a7,	// (0x0000b6a7) main_pane_empty_t4_ParamLimits

0xb6a7,	// (0x0000b6a7) main_pane_empty_t4

0xb6b9,	// (0x0000b6b9) main_pane_empty_t5_ParamLimits

0xb6b9,	// (0x0000b6b9) main_pane_empty_t5

0x0004,

0xf0dc,	// (0x0000f0dc) main_pane_empty_t_ParamLimits

0xf0dc,	// (0x0000f0dc) main_pane_empty_t

0x15aa,	// (0x000015aa) bg_popup_window_pane_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_window_pane

0x4782,	// (0x00004782) find_popup_pane_cp2_ParamLimits

0x4782,	// (0x00004782) find_popup_pane_cp2

0x478e,	// (0x0000478e) heading_pane_ParamLimits

0x478e,	// (0x0000478e) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xcfa6,	// (0x0000cfa6) bg_popup_window_pane_g1_ParamLimits

0xcfa6,	// (0x0000cfa6) bg_popup_window_pane_g1

0xcfb5,	// (0x0000cfb5) bg_popup_window_pane_g2_ParamLimits

0xcfb5,	// (0x0000cfb5) bg_popup_window_pane_g2

0xcfc1,	// (0x0000cfc1) bg_popup_window_pane_g3_ParamLimits

0xcfc1,	// (0x0000cfc1) bg_popup_window_pane_g3

0xcfcd,	// (0x0000cfcd) bg_popup_window_pane_g4_ParamLimits

0xcfcd,	// (0x0000cfcd) bg_popup_window_pane_g4

0xcfdc,	// (0x0000cfdc) bg_popup_window_pane_g5_ParamLimits

0xcfdc,	// (0x0000cfdc) bg_popup_window_pane_g5

0xcfec,	// (0x0000cfec) bg_popup_window_pane_g6_ParamLimits

0xcfec,	// (0x0000cfec) bg_popup_window_pane_g6

0xcff8,	// (0x0000cff8) bg_popup_window_pane_g7_ParamLimits

0xcff8,	// (0x0000cff8) bg_popup_window_pane_g7

0xd007,	// (0x0000d007) bg_popup_window_pane_g8_ParamLimits

0xd007,	// (0x0000d007) bg_popup_window_pane_g8

0xd016,	// (0x0000d016) bg_popup_window_pane_g9_ParamLimits

0xd016,	// (0x0000d016) bg_popup_window_pane_g9

0x4757,	// (0x00004757) bg_popup_window_pane_g10_ParamLimits

0x4757,	// (0x00004757) bg_popup_window_pane_g10

0x0009,

0xf222,	// (0x0000f222) bg_popup_window_pane_g_ParamLimits

0xf222,	// (0x0000f222) bg_popup_window_pane_g

0x4680,	// (0x00004680) bg_popup_heading_pane_ParamLimits

0x4680,	// (0x00004680) bg_popup_heading_pane

0x52f3,	// (0x000052f3) tabs_4_passive_pane_cp_srt_ParamLimits

0x52f3,	// (0x000052f3) tabs_4_passive_pane_cp_srt

0x5305,	// (0x00005305) tabs_4_passive_pane_srt_ParamLimits

0x4694,	// (0x00004694) heading_pane_g2

0x5305,	// (0x00005305) tabs_4_passive_pane_srt

0x3816,	// (0x00003816) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3816,	// (0x00003816) bg_passive_tab_pane_cp3_srt

0x469c,	// (0x0000469c) heading_pane_t1_ParamLimits

0x469c,	// (0x0000469c) heading_pane_t1

0x46b3,	// (0x000046b3) heading_pane_t2_ParamLimits

0x46b3,	// (0x000046b3) heading_pane_t2

0x0001,

0xac4b,	// (0x0000ac4b) heading_pane_t_ParamLimits

0xac4b,	// (0x0000ac4b) heading_pane_t

0x405a,	// (0x0000405a) bg_popup_heading_pane_g1

0x4109,	// (0x00004109) bg_popup_heading_pane_g2

0x4113,	// (0x00004113) bg_popup_heading_pane_g3

0x411d,	// (0x0000411d) bg_popup_heading_pane_g4

0x4127,	// (0x00004127) bg_popup_heading_pane_g5

0x4131,	// (0x00004131) bg_popup_heading_pane_g6

0x4139,	// (0x00004139) bg_popup_heading_pane_g7

0x4141,	// (0x00004141) bg_popup_heading_pane_g8

0x414b,	// (0x0000414b) bg_popup_heading_pane_g9

0x0008,

0xac07,	// (0x0000ac07) bg_popup_heading_pane_g

0x367e,	// (0x0000367e) bg_popup_sub_pane_g1

0x3686,	// (0x00003686) bg_popup_sub_pane_g2

0x368e,	// (0x0000368e) bg_popup_sub_pane_g3

0x3696,	// (0x00003696) bg_popup_sub_pane_g4

0x369e,	// (0x0000369e) bg_popup_sub_pane_g5

0x36a6,	// (0x000036a6) bg_popup_sub_pane_g6

0x36ae,	// (0x000036ae) bg_popup_sub_pane_g7

0x36b6,	// (0x000036b6) bg_popup_sub_pane_g8

0x36be,	// (0x000036be) bg_popup_sub_pane_g9

0x0008,

0xabe1,	// (0x0000abe1) bg_popup_sub_pane_g

0x0823,	// (0x00000823) bg_popup_window_pane_cp5_ParamLimits

0x0823,	// (0x00000823) bg_popup_window_pane_cp5

0x083f,	// (0x0000083f) popup_note_window_g1_ParamLimits

0x083f,	// (0x0000083f) popup_note_window_g1

0x084b,	// (0x0000084b) popup_note_window_t1_ParamLimits

0x084b,	// (0x0000084b) popup_note_window_t1

0x0861,	// (0x00000861) popup_note_window_t2_ParamLimits

0x0861,	// (0x00000861) popup_note_window_t2

0x0877,	// (0x00000877) popup_note_window_t3_ParamLimits

0x0877,	// (0x00000877) popup_note_window_t3

0x088d,	// (0x0000088d) popup_note_window_t4_ParamLimits

0x088d,	// (0x0000088d) popup_note_window_t4

0x08b5,	// (0x000008b5) popup_note_window_t5_ParamLimits

0x08b5,	// (0x000008b5) popup_note_window_t5

0x0004,

0xa90d,	// (0x0000a90d) popup_note_window_t_ParamLimits

0xa90d,	// (0x0000a90d) popup_note_window_t

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6

0x3fd6,	// (0x00003fd6) popup_note_image_window_g1_ParamLimits

0x3fd6,	// (0x00003fd6) popup_note_image_window_g1

0x3fe2,	// (0x00003fe2) popup_note_image_window_g2_ParamLimits

0x3fe2,	// (0x00003fe2) popup_note_image_window_g2

0x0001,

0xabd5,	// (0x0000abd5) popup_note_image_window_g_ParamLimits

0xabd5,	// (0x0000abd5) popup_note_image_window_g

0x3ffb,	// (0x00003ffb) popup_note_image_window_t1_ParamLimits

0x3ffb,	// (0x00003ffb) popup_note_image_window_t1

0x4014,	// (0x00004014) popup_note_image_window_t2_ParamLimits

0x4014,	// (0x00004014) popup_note_image_window_t2

0x402d,	// (0x0000402d) popup_note_image_window_t3_ParamLimits

0x402d,	// (0x0000402d) popup_note_image_window_t3

0x0002,

0xabda,	// (0x0000abda) popup_note_image_window_t_ParamLimits

0xabda,	// (0x0000abda) popup_note_image_window_t

0x3e97,	// (0x00003e97) bg_popup_window_pane_cp7_ParamLimits

0x3e97,	// (0x00003e97) bg_popup_window_pane_cp7

0x3ec7,	// (0x00003ec7) popup_note_wait_window_g1_ParamLimits

0x3ec7,	// (0x00003ec7) popup_note_wait_window_g1

0x3ed3,	// (0x00003ed3) popup_note_wait_window_g2_ParamLimits

0x3ed3,	// (0x00003ed3) popup_note_wait_window_g2

0x0002,

0xabc3,	// (0x0000abc3) popup_note_wait_window_g_ParamLimits

0xabc3,	// (0x0000abc3) popup_note_wait_window_g

0x3eeb,	// (0x00003eeb) popup_note_wait_window_t1_ParamLimits

0x3eeb,	// (0x00003eeb) popup_note_wait_window_t1

0x3f12,	// (0x00003f12) popup_note_wait_window_t2_ParamLimits

0x3f12,	// (0x00003f12) popup_note_wait_window_t2

0x3f2f,	// (0x00003f2f) popup_note_wait_window_t3_ParamLimits

0x3f2f,	// (0x00003f2f) popup_note_wait_window_t3

0x3f42,	// (0x00003f42) popup_note_wait_window_t4_ParamLimits

0x3f42,	// (0x00003f42) popup_note_wait_window_t4

0x0004,

0xabca,	// (0x0000abca) popup_note_wait_window_t_ParamLimits

0xabca,	// (0x0000abca) popup_note_wait_window_t

0x3f67,	// (0x00003f67) wait_bar_pane_ParamLimits

0x3f67,	// (0x00003f67) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xaa8c,	// (0x0000aa8c) wait_anim_pane_g

0x3e3b,	// (0x00003e3b) wait_border_pane_g1

0x3e46,	// (0x00003e46) wait_border_pane_g2

0x3e4f,	// (0x00003e4f) wait_border_pane_g3

0x0002,

0xabbc,	// (0x0000abbc) wait_border_pane_g

0x3ca6,	// (0x00003ca6) bg_popup_window_pane_cp16_ParamLimits

0x3ca6,	// (0x00003ca6) bg_popup_window_pane_cp16

0x3da6,	// (0x00003da6) indicator_popup_pane_cp4_ParamLimits

0x3da6,	// (0x00003da6) indicator_popup_pane_cp4

0x3dba,	// (0x00003dba) popup_query_data_window_t1_ParamLimits

0x3dba,	// (0x00003dba) popup_query_data_window_t1

0x3dcc,	// (0x00003dcc) popup_query_data_window_t2_ParamLimits

0x3dcc,	// (0x00003dcc) popup_query_data_window_t2

0x3de5,	// (0x00003de5) popup_query_data_window_t3_ParamLimits

0x3de5,	// (0x00003de5) popup_query_data_window_t3

0x0002,

0xabb5,	// (0x0000abb5) popup_query_data_window_t_ParamLimits

0xabb5,	// (0x0000abb5) popup_query_data_window_t

0x3dff,	// (0x00003dff) query_popup_data_pane_ParamLimits

0x3dff,	// (0x00003dff) query_popup_data_pane

0x3e13,	// (0x00003e13) query_popup_data_pane_cp1_ParamLimits

0x3e13,	// (0x00003e13) query_popup_data_pane_cp1

0x3ca6,	// (0x00003ca6) bg_popup_window_pane_cp10_ParamLimits

0x3ca6,	// (0x00003ca6) bg_popup_window_pane_cp10

0x3cd8,	// (0x00003cd8) indicator_popup_pane_ParamLimits

0x3cd8,	// (0x00003cd8) indicator_popup_pane

0x3cfa,	// (0x00003cfa) popup_query_code_window_t1_ParamLimits

0x3cfa,	// (0x00003cfa) popup_query_code_window_t1

0x3d14,	// (0x00003d14) popup_query_code_window_t2_ParamLimits

0x3d14,	// (0x00003d14) popup_query_code_window_t2

0x3d5d,	// (0x00003d5d) popup_query_code_window_t3_ParamLimits

0x3d5d,	// (0x00003d5d) popup_query_code_window_t3

0x0002,

0xabae,	// (0x0000abae) popup_query_code_window_t_ParamLimits

0xabae,	// (0x0000abae) popup_query_code_window_t

0x3d8c,	// (0x00003d8c) query_popup_pane_ParamLimits

0x3d8c,	// (0x00003d8c) query_popup_pane

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp15_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp15

0x08f7,	// (0x000008f7) indicator_popup_pane_cp1_ParamLimits

0x08f7,	// (0x000008f7) indicator_popup_pane_cp1

0x090a,	// (0x0000090a) indicator_popup_pane_cp2_ParamLimits

0x090a,	// (0x0000090a) indicator_popup_pane_cp2

0x091d,	// (0x0000091d) popup_query_data_code_window_g1_ParamLimits

0x091d,	// (0x0000091d) popup_query_data_code_window_g1

0x0930,	// (0x00000930) popup_query_data_code_window_t1_ParamLimits

0x0930,	// (0x00000930) popup_query_data_code_window_t1

0x0942,	// (0x00000942) popup_query_data_code_window_t2_ParamLimits

0x0942,	// (0x00000942) popup_query_data_code_window_t2

0x0954,	// (0x00000954) popup_query_data_code_window_t3_ParamLimits

0x0954,	// (0x00000954) popup_query_data_code_window_t3

0x096a,	// (0x0000096a) popup_query_data_code_window_t4_ParamLimits

0x096a,	// (0x0000096a) popup_query_data_code_window_t4

0x0003,

0xa918,	// (0x0000a918) popup_query_data_code_window_t_ParamLimits

0xa918,	// (0x0000a918) popup_query_data_code_window_t

0x36eb,	// (0x000036eb) list_single_midp_graphic_pane_g3

0x0982,	// (0x00000982) query_popup_data_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c9e,	// (0x00003c9e) heading_pane_cp5

0x0a7d,	// (0x00000a7d) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09a8,	// (0x000009a8) query_popup_pane_t1

0x09b6,	// (0x000009b6) list_popup_info_pane_ParamLimits

0x09b6,	// (0x000009b6) list_popup_info_pane

0x09c5,	// (0x000009c5) listscroll_popup_info_pane_g1

0x09cd,	// (0x000009cd) scroll_pane_cp7

0x09d7,	// (0x000009d7) popup_info_list_pane_t1_ParamLimits

0x09d7,	// (0x000009d7) popup_info_list_pane_t1

0x09f1,	// (0x000009f1) popup_info_list_pane_t2_ParamLimits

0x09f1,	// (0x000009f1) popup_info_list_pane_t2

0x0001,

0xa921,	// (0x0000a921) popup_info_list_pane_t_ParamLimits

0xa921,	// (0x0000a921) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x53e7,	// (0x000053e7) find_popup_pane

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3

0x0a0b,	// (0x00000a0b) heading_pane_cp3

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb71b,	// (0x0000b71b) heading_pane_cp4

0x0a7d,	// (0x00000a7d) listscroll_popup_colour_pane

0xb723,	// (0x0000b723) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb723,	// (0x0000b723) cell_large_graphic_colour_none_popup_pane

0xb737,	// (0x0000b737) grid_large_graphic_colour_popup_pane_ParamLimits

0xb737,	// (0x0000b737) grid_large_graphic_colour_popup_pane

0xb75b,	// (0x0000b75b) listscroll_popup_colour_pane_g1_ParamLimits

0xb75b,	// (0x0000b75b) listscroll_popup_colour_pane_g1

0xb772,	// (0x0000b772) listscroll_popup_colour_pane_g2_ParamLimits

0xb772,	// (0x0000b772) listscroll_popup_colour_pane_g2

0xb789,	// (0x0000b789) listscroll_popup_colour_pane_g3_ParamLimits

0xb789,	// (0x0000b789) listscroll_popup_colour_pane_g3

0xb799,	// (0x0000b799) listscroll_popup_colour_pane_g4_ParamLimits

0xb799,	// (0x0000b799) listscroll_popup_colour_pane_g4

0x0003,

0xf0e7,	// (0x0000f0e7) listscroll_popup_colour_pane_g_ParamLimits

0xf0e7,	// (0x0000f0e7) listscroll_popup_colour_pane_g

0x0b17,	// (0x00000b17) scroll_pane_cp6_ParamLimits

0x0b17,	// (0x00000b17) scroll_pane_cp6

0xb7a9,	// (0x0000b7a9) cell_large_graphic_colour_popup_pane_ParamLimits

0xb7a9,	// (0x0000b7a9) cell_large_graphic_colour_popup_pane

0x0b48,	// (0x00000b48) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b57,	// (0x00000b57) cell_large_graphic_colour_popup_pane_g1

0x0b5f,	// (0x00000b5f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa92f,	// (0x0000a92f) cell_large_graphic_colour_popup_pane_g

0x0b67,	// (0x00000b67) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b70,	// (0x00000b70) grid_highlight_pane_cp4

0x0b78,	// (0x00000b78) bg_popup_window_pane_cp8_ParamLimits

0x0b78,	// (0x00000b78) bg_popup_window_pane_cp8

0x0b93,	// (0x00000b93) popup_snote_single_text_window_g1_ParamLimits

0x0b93,	// (0x00000b93) popup_snote_single_text_window_g1

0x0ba5,	// (0x00000ba5) popup_snote_single_text_window_t1_ParamLimits

0x0ba5,	// (0x00000ba5) popup_snote_single_text_window_t1

0x0bb8,	// (0x00000bb8) popup_snote_single_text_window_t2_ParamLimits

0x0bb8,	// (0x00000bb8) popup_snote_single_text_window_t2

0x0bcb,	// (0x00000bcb) popup_snote_single_text_window_t3_ParamLimits

0x0bcb,	// (0x00000bcb) popup_snote_single_text_window_t3

0x0c04,	// (0x00000c04) popup_snote_single_text_window_t4_ParamLimits

0x0c04,	// (0x00000c04) popup_snote_single_text_window_t4

0x0c38,	// (0x00000c38) popup_snote_single_text_window_t5_ParamLimits

0x0c38,	// (0x00000c38) popup_snote_single_text_window_t5

0x0004,

0xa934,	// (0x0000a934) popup_snote_single_text_window_t_ParamLimits

0xa934,	// (0x0000a934) popup_snote_single_text_window_t

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9_ParamLimits

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1_ParamLimits

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2_ParamLimits

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2

0x0001,

0xa93f,	// (0x0000a93f) popup_snote_single_graphic_window_g_ParamLimits

0xa93f,	// (0x0000a93f) popup_snote_single_graphic_window_g

0x0c81,	// (0x00000c81) popup_snote_single_graphic_window_t1_ParamLimits

0x0c81,	// (0x00000c81) popup_snote_single_graphic_window_t1

0x0c94,	// (0x00000c94) popup_snote_single_graphic_window_t2_ParamLimits

0x0c94,	// (0x00000c94) popup_snote_single_graphic_window_t2

0x0ca7,	// (0x00000ca7) popup_snote_single_graphic_window_t3_ParamLimits

0x0ca7,	// (0x00000ca7) popup_snote_single_graphic_window_t3

0x0ce0,	// (0x00000ce0) popup_snote_single_graphic_window_t4_ParamLimits

0x0ce0,	// (0x00000ce0) popup_snote_single_graphic_window_t4

0x0d14,	// (0x00000d14) popup_snote_single_graphic_window_t5_ParamLimits

0x0d14,	// (0x00000d14) popup_snote_single_graphic_window_t5

0x0004,

0xa944,	// (0x0000a944) popup_snote_single_graphic_window_t_ParamLimits

0xa944,	// (0x0000a944) popup_snote_single_graphic_window_t

0x5273,	// (0x00005273) grid_graphic_popup_pane_ParamLimits

0x5273,	// (0x00005273) grid_graphic_popup_pane

0x529b,	// (0x0000529b) listscroll_popup_graphic_pane_g1_ParamLimits

0x529b,	// (0x0000529b) listscroll_popup_graphic_pane_g1

0xd312,	// (0x0000d312) listscroll_popup_graphic_pane_g2_ParamLimits

0xd312,	// (0x0000d312) listscroll_popup_graphic_pane_g2

0x0001,

0xf25f,	// (0x0000f25f) listscroll_popup_graphic_pane_g_ParamLimits

0xf25f,	// (0x0000f25f) listscroll_popup_graphic_pane_g

0x52c3,	// (0x000052c3) scroll_pane_cp5

0xd2d6,	// (0x0000d2d6) cell_graphic_popup_pane_ParamLimits

0xd2d6,	// (0x0000d2d6) cell_graphic_popup_pane

0x51fd,	// (0x000051fd) cell_graphic_popup_pane_g1

0x5205,	// (0x00005205) cell_graphic_popup_pane_g2

0x0b67,	// (0x00000b67) cell_graphic_popup_pane_g3

0x0002,

0xad24,	// (0x0000ad24) cell_graphic_popup_pane_g

0x520e,	// (0x0000520e) cell_graphic_popup_pane_t2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3

0x0d55,	// (0x00000d55) list_gen_pane_ParamLimits

0x0d55,	// (0x00000d55) list_gen_pane

0x0d87,	// (0x00000d87) scroll_pane

0xd28d,	// (0x0000d28d) bg_list_pane_g1_ParamLimits

0xd28d,	// (0x0000d28d) bg_list_pane_g1

0x5172,	// (0x00005172) bg_list_pane_g2_ParamLimits

0x5172,	// (0x00005172) bg_list_pane_g2

0x5187,	// (0x00005187) bg_list_pane_g3_ParamLimits

0x5187,	// (0x00005187) bg_list_pane_g3

0x519b,	// (0x0000519b) bg_list_pane_g4_ParamLimits

0x519b,	// (0x0000519b) bg_list_pane_g4

0xd2aa,	// (0x0000d2aa) bg_list_pane_g5_ParamLimits

0xd2aa,	// (0x0000d2aa) bg_list_pane_g5

0x0004,

0xf254,	// (0x0000f254) bg_list_pane_g_ParamLimits

0xf254,	// (0x0000f254) bg_list_pane_g

0xd233,	// (0x0000d233) list_double2_graphic_large_graphic_pane_ParamLimits

0xd233,	// (0x0000d233) list_double2_graphic_large_graphic_pane

0xd233,	// (0x0000d233) list_double2_graphic_pane_ParamLimits

0xd233,	// (0x0000d233) list_double2_graphic_pane

0xd233,	// (0x0000d233) list_double2_large_graphic_pane_ParamLimits

0xd233,	// (0x0000d233) list_double2_large_graphic_pane

0xd233,	// (0x0000d233) list_double2_pane_ParamLimits

0xd233,	// (0x0000d233) list_double2_pane

0xd233,	// (0x0000d233) list_double_graphic_heading_pane_ParamLimits

0xd233,	// (0x0000d233) list_double_graphic_heading_pane

0xd233,	// (0x0000d233) list_double_graphic_pane_ParamLimits

0xd233,	// (0x0000d233) list_double_graphic_pane

0xd233,	// (0x0000d233) list_double_heading_pane_ParamLimits

0xd233,	// (0x0000d233) list_double_heading_pane

0xd233,	// (0x0000d233) list_double_large_graphic_pane_ParamLimits

0xd233,	// (0x0000d233) list_double_large_graphic_pane

0xd233,	// (0x0000d233) list_double_number_pane_ParamLimits

0xd233,	// (0x0000d233) list_double_number_pane

0xd233,	// (0x0000d233) list_double_pane_ParamLimits

0xd233,	// (0x0000d233) list_double_pane

0xd233,	// (0x0000d233) list_double_time_pane_ParamLimits

0xd233,	// (0x0000d233) list_double_time_pane

0xd233,	// (0x0000d233) list_setting_number_pane_ParamLimits

0xd233,	// (0x0000d233) list_setting_number_pane

0xd233,	// (0x0000d233) list_setting_pane_ParamLimits

0xd233,	// (0x0000d233) list_setting_pane

0xd245,	// (0x0000d245) list_single_2graphic_pane_ParamLimits

0xd245,	// (0x0000d245) list_single_2graphic_pane

0xd245,	// (0x0000d245) list_single_graphic_heading_pane_ParamLimits

0xd245,	// (0x0000d245) list_single_graphic_heading_pane

0xd245,	// (0x0000d245) list_single_graphic_pane_ParamLimits

0xd245,	// (0x0000d245) list_single_graphic_pane

0xd245,	// (0x0000d245) list_single_heading_pane_ParamLimits

0xd245,	// (0x0000d245) list_single_heading_pane

0xd233,	// (0x0000d233) list_single_large_graphic_pane_ParamLimits

0xd233,	// (0x0000d233) list_single_large_graphic_pane

0xd245,	// (0x0000d245) list_single_number_heading_pane_ParamLimits

0xd245,	// (0x0000d245) list_single_number_heading_pane

0xd245,	// (0x0000d245) list_single_number_pane_ParamLimits

0xd245,	// (0x0000d245) list_single_number_pane

0xd245,	// (0x0000d245) list_single_pane_ParamLimits

0xd245,	// (0x0000d245) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x3516,	// (0x00003516) list_single_pane_g1_ParamLimits

0x3516,	// (0x00003516) list_single_pane_g1

0x3522,	// (0x00003522) list_single_pane_g2_ParamLimits

0x3522,	// (0x00003522) list_single_pane_g2

0x0001,

0xab61,	// (0x0000ab61) list_single_pane_g_ParamLimits

0xab61,	// (0x0000ab61) list_single_pane_g

0x59b2,	// (0x000059b2) list_single_pane_t1_ParamLimits

0x59b2,	// (0x000059b2) list_single_pane_t1

0x3516,	// (0x00003516) list_single_number_pane_g1_ParamLimits

0x3516,	// (0x00003516) list_single_number_pane_g1

0x3522,	// (0x00003522) list_single_number_pane_g2_ParamLimits

0x3522,	// (0x00003522) list_single_number_pane_g2

0x0001,

0xab61,	// (0x0000ab61) list_single_number_pane_g_ParamLimits

0xab61,	// (0x0000ab61) list_single_number_pane_g

0x360c,	// (0x0000360c) list_single_number_pane_t1_ParamLimits

0x360c,	// (0x0000360c) list_single_number_pane_t1

0xd084,	// (0x0000d084) list_single_number_pane_t2_ParamLimits

0xd084,	// (0x0000d084) list_single_number_pane_t2

0x0001,

0xf237,	// (0x0000f237) list_single_number_pane_t_ParamLimits

0xf237,	// (0x0000f237) list_single_number_pane_t

0x7176,	// (0x00007176) list_single_graphic_pane_g1_ParamLimits

0x7176,	// (0x00007176) list_single_graphic_pane_g1

0x3516,	// (0x00003516) list_single_graphic_pane_g2_ParamLimits

0x3516,	// (0x00003516) list_single_graphic_pane_g2

0x3522,	// (0x00003522) list_single_graphic_pane_g3_ParamLimits

0x3522,	// (0x00003522) list_single_graphic_pane_g3

0x0002,

0xf0f0,	// (0x0000f0f0) list_single_graphic_pane_g_ParamLimits

0xf0f0,	// (0x0000f0f0) list_single_graphic_pane_g

0xb7d2,	// (0x0000b7d2) list_single_graphic_pane_t1_ParamLimits

0xb7d2,	// (0x0000b7d2) list_single_graphic_pane_t1

0x3516,	// (0x00003516) list_single_heading_pane_g1_ParamLimits

0x3516,	// (0x00003516) list_single_heading_pane_g1

0x3522,	// (0x00003522) list_single_heading_pane_g2_ParamLimits

0x3522,	// (0x00003522) list_single_heading_pane_g2

0x0001,

0xab61,	// (0x0000ab61) list_single_heading_pane_g_ParamLimits

0xab61,	// (0x0000ab61) list_single_heading_pane_g

0xb7e8,	// (0x0000b7e8) list_single_heading_pane_t1_ParamLimits

0xb7e8,	// (0x0000b7e8) list_single_heading_pane_t1

0xb7fe,	// (0x0000b7fe) list_single_heading_pane_t2_ParamLimits

0xb7fe,	// (0x0000b7fe) list_single_heading_pane_t2

0x0001,

0xf0f7,	// (0x0000f0f7) list_single_heading_pane_t_ParamLimits

0xf0f7,	// (0x0000f0f7) list_single_heading_pane_t

0x3516,	// (0x00003516) list_single_number_heading_pane_g1_ParamLimits

0x3516,	// (0x00003516) list_single_number_heading_pane_g1

0x3522,	// (0x00003522) list_single_number_heading_pane_g2_ParamLimits

0x3522,	// (0x00003522) list_single_number_heading_pane_g2

0x0001,

0xab61,	// (0x0000ab61) list_single_number_heading_pane_g_ParamLimits

0xab61,	// (0x0000ab61) list_single_number_heading_pane_g

0xb7e8,	// (0x0000b7e8) list_single_number_heading_pane_t1_ParamLimits

0xb7e8,	// (0x0000b7e8) list_single_number_heading_pane_t1

0xb810,	// (0x0000b810) list_single_number_heading_pane_t2_ParamLimits

0xb810,	// (0x0000b810) list_single_number_heading_pane_t2

0x598c,	// (0x0000598c) list_single_number_heading_pane_t3_ParamLimits

0x598c,	// (0x0000598c) list_single_number_heading_pane_t3

0x0002,

0xf0fc,	// (0x0000f0fc) list_single_number_heading_pane_t_ParamLimits

0xf0fc,	// (0x0000f0fc) list_single_number_heading_pane_t

0x350a,	// (0x0000350a) list_single_graphic_heading_pane_g1_ParamLimits

0x350a,	// (0x0000350a) list_single_graphic_heading_pane_g1

0xb822,	// (0x0000b822) list_single_graphic_heading_pane_g4_ParamLimits

0xb822,	// (0x0000b822) list_single_graphic_heading_pane_g4

0x3522,	// (0x00003522) list_single_graphic_heading_pane_g5_ParamLimits

0x3522,	// (0x00003522) list_single_graphic_heading_pane_g5

0x0002,

0xf103,	// (0x0000f103) list_single_graphic_heading_pane_g_ParamLimits

0xf103,	// (0x0000f103) list_single_graphic_heading_pane_g

0xb7e8,	// (0x0000b7e8) list_single_graphic_heading_pane_t1_ParamLimits

0xb7e8,	// (0x0000b7e8) list_single_graphic_heading_pane_t1

0xb833,	// (0x0000b833) list_single_graphic_heading_pane_t2_ParamLimits

0xb833,	// (0x0000b833) list_single_graphic_heading_pane_t2

0x0001,

0xf10a,	// (0x0000f10a) list_single_graphic_heading_pane_t_ParamLimits

0xf10a,	// (0x0000f10a) list_single_graphic_heading_pane_t

0x59c8,	// (0x000059c8) list_single_large_graphic_pane_g1_ParamLimits

0x59c8,	// (0x000059c8) list_single_large_graphic_pane_g1

0x59d4,	// (0x000059d4) list_single_large_graphic_pane_g2_ParamLimits

0x59d4,	// (0x000059d4) list_single_large_graphic_pane_g2

0x59e0,	// (0x000059e0) list_single_large_graphic_pane_g3_ParamLimits

0x59e0,	// (0x000059e0) list_single_large_graphic_pane_g3

0x0002,

0xadb4,	// (0x0000adb4) list_single_large_graphic_pane_g_ParamLimits

0xadb4,	// (0x0000adb4) list_single_large_graphic_pane_g

0x3e46,	// (0x00003e46) wait_border_pane_g2_copy1

0xb845,	// (0x0000b845) list_single_large_graphic_pane_g4_cp2

0x59ec,	// (0x000059ec) list_single_large_graphic_pane_t1_ParamLimits

0x59ec,	// (0x000059ec) list_single_large_graphic_pane_t1

0x0fd8,	// (0x00000fd8) list_double_pane_g1_ParamLimits

0x0fd8,	// (0x00000fd8) list_double_pane_g1

0x0f03,	// (0x00000f03) list_double_pane_g2_ParamLimits

0x0f03,	// (0x00000f03) list_double_pane_g2

0x0001,

0xa9ef,	// (0x0000a9ef) list_double_pane_g_ParamLimits

0xa9ef,	// (0x0000a9ef) list_double_pane_g

0x0f0f,	// (0x00000f0f) list_double_pane_t1_ParamLimits

0x0f0f,	// (0x00000f0f) list_double_pane_t1

0xb84d,	// (0x0000b84d) list_double_pane_t2_ParamLimits

0xb84d,	// (0x0000b84d) list_double_pane_t2

0x0001,

0xf10f,	// (0x0000f10f) list_double_pane_t_ParamLimits

0xf10f,	// (0x0000f10f) list_double_pane_t

0xb85f,	// (0x0000b85f) list_double2_pane_g1_ParamLimits

0xb85f,	// (0x0000b85f) list_double2_pane_g1

0xb870,	// (0x0000b870) list_double2_pane_g2_ParamLimits

0xb870,	// (0x0000b870) list_double2_pane_g2

0x0001,

0xf114,	// (0x0000f114) list_double2_pane_g_ParamLimits

0xf114,	// (0x0000f114) list_double2_pane_g

0xb87c,	// (0x0000b87c) list_double2_pane_t1_ParamLimits

0xb87c,	// (0x0000b87c) list_double2_pane_t1

0xb892,	// (0x0000b892) list_double2_pane_t2_ParamLimits

0xb892,	// (0x0000b892) list_double2_pane_t2

0x0001,

0xf119,	// (0x0000f119) list_double2_pane_t_ParamLimits

0xf119,	// (0x0000f119) list_double2_pane_t

0x0fd8,	// (0x00000fd8) list_double_number_pane_g1_ParamLimits

0x0fd8,	// (0x00000fd8) list_double_number_pane_g1

0x0f03,	// (0x00000f03) list_double_number_pane_g2_ParamLimits

0x0f03,	// (0x00000f03) list_double_number_pane_g2

0x0001,

0xa9ef,	// (0x0000a9ef) list_double_number_pane_g_ParamLimits

0xa9ef,	// (0x0000a9ef) list_double_number_pane_g

0xb8a4,	// (0x0000b8a4) list_double_number_pane_t1_ParamLimits

0xb8a4,	// (0x0000b8a4) list_double_number_pane_t1

0x0fe4,	// (0x00000fe4) list_double_number_pane_t2_ParamLimits

0x0fe4,	// (0x00000fe4) list_double_number_pane_t2

0xb8b6,	// (0x0000b8b6) list_double_number_pane_t3_ParamLimits

0xb8b6,	// (0x0000b8b6) list_double_number_pane_t3

0x0002,

0xf11e,	// (0x0000f11e) list_double_number_pane_t_ParamLimits

0xf11e,	// (0x0000f11e) list_double_number_pane_t

0x0fcc,	// (0x00000fcc) list_double_graphic_pane_g1_ParamLimits

0x0fcc,	// (0x00000fcc) list_double_graphic_pane_g1

0xb8c8,	// (0x0000b8c8) list_double_graphic_pane_g2_ParamLimits

0xb8c8,	// (0x0000b8c8) list_double_graphic_pane_g2

0xb8d7,	// (0x0000b8d7) list_double_graphic_pane_g3_ParamLimits

0xb8d7,	// (0x0000b8d7) list_double_graphic_pane_g3

0x0003,

0xf125,	// (0x0000f125) list_double_graphic_pane_g_ParamLimits

0xf125,	// (0x0000f125) list_double_graphic_pane_g

0xb8ef,	// (0x0000b8ef) list_double_graphic_pane_t1_ParamLimits

0xb8ef,	// (0x0000b8ef) list_double_graphic_pane_t1

0xb905,	// (0x0000b905) list_double_graphic_pane_t2_ParamLimits

0xb905,	// (0x0000b905) list_double_graphic_pane_t2

0x0001,

0xf12e,	// (0x0000f12e) list_double_graphic_pane_t_ParamLimits

0xf12e,	// (0x0000f12e) list_double_graphic_pane_t

0xb917,	// (0x0000b917) list_double2_graphic_pane_g1_ParamLimits

0xb917,	// (0x0000b917) list_double2_graphic_pane_g1

0x23eb,	// (0x000023eb) list_double2_graphic_pane_g2_ParamLimits

0x23eb,	// (0x000023eb) list_double2_graphic_pane_g2

0xb870,	// (0x0000b870) list_double2_graphic_pane_g3_ParamLimits

0xb870,	// (0x0000b870) list_double2_graphic_pane_g3

0x0002,

0xf133,	// (0x0000f133) list_double2_graphic_pane_g_ParamLimits

0xf133,	// (0x0000f133) list_double2_graphic_pane_g

0xb923,	// (0x0000b923) list_double2_graphic_pane_t1_ParamLimits

0xb923,	// (0x0000b923) list_double2_graphic_pane_t1

0xb939,	// (0x0000b939) list_double2_graphic_pane_t2_ParamLimits

0xb939,	// (0x0000b939) list_double2_graphic_pane_t2

0x0001,

0xf13a,	// (0x0000f13a) list_double2_graphic_pane_t_ParamLimits

0xf13a,	// (0x0000f13a) list_double2_graphic_pane_t

0xb94b,	// (0x0000b94b) list_double_large_graphic_pane_g1_ParamLimits

0xb94b,	// (0x0000b94b) list_double_large_graphic_pane_g1

0xb976,	// (0x0000b976) list_double_large_graphic_pane_g2_ParamLimits

0xb976,	// (0x0000b976) list_double_large_graphic_pane_g2

0x0f03,	// (0x00000f03) list_double_large_graphic_pane_g3_ParamLimits

0x0f03,	// (0x00000f03) list_double_large_graphic_pane_g3

0xb987,	// (0x0000b987) list_double_large_graphic_pane_g4_ParamLimits

0xb987,	// (0x0000b987) list_double_large_graphic_pane_g4

0x0004,

0xf13f,	// (0x0000f13f) list_double_large_graphic_pane_g_ParamLimits

0xf13f,	// (0x0000f13f) list_double_large_graphic_pane_g

0xb999,	// (0x0000b999) list_double_large_graphic_pane_t1_ParamLimits

0xb999,	// (0x0000b999) list_double_large_graphic_pane_t1

0xb9b2,	// (0x0000b9b2) list_double_large_graphic_pane_t2_ParamLimits

0xb9b2,	// (0x0000b9b2) list_double_large_graphic_pane_t2

0x0001,

0xf14a,	// (0x0000f14a) list_double_large_graphic_pane_t_ParamLimits

0xf14a,	// (0x0000f14a) list_double_large_graphic_pane_t

0xb9c4,	// (0x0000b9c4) list_double2_large_graphic_pane_g1_ParamLimits

0xb9c4,	// (0x0000b9c4) list_double2_large_graphic_pane_g1

0xb85f,	// (0x0000b85f) list_double2_large_graphic_pane_g2_ParamLimits

0xb85f,	// (0x0000b85f) list_double2_large_graphic_pane_g2

0xb870,	// (0x0000b870) list_double2_large_graphic_pane_g3_ParamLimits

0xb870,	// (0x0000b870) list_double2_large_graphic_pane_g3

0x0002,

0xf14f,	// (0x0000f14f) list_double2_large_graphic_pane_g_ParamLimits

0xf14f,	// (0x0000f14f) list_double2_large_graphic_pane_g

0xb9d0,	// (0x0000b9d0) list_double2_large_graphic_pane_t1_ParamLimits

0xb9d0,	// (0x0000b9d0) list_double2_large_graphic_pane_t1

0xb9e6,	// (0x0000b9e6) list_double2_large_graphic_pane_t2_ParamLimits

0xb9e6,	// (0x0000b9e6) list_double2_large_graphic_pane_t2

0x0001,

0xf156,	// (0x0000f156) list_double2_large_graphic_pane_t_ParamLimits

0xf156,	// (0x0000f156) list_double2_large_graphic_pane_t

0xb9f8,	// (0x0000b9f8) list_double_heading_pane_g1_ParamLimits

0xb9f8,	// (0x0000b9f8) list_double_heading_pane_g1

0xba09,	// (0x0000ba09) list_double_heading_pane_g2_ParamLimits

0xba09,	// (0x0000ba09) list_double_heading_pane_g2

0x0001,

0xf15b,	// (0x0000f15b) list_double_heading_pane_g_ParamLimits

0xf15b,	// (0x0000f15b) list_double_heading_pane_g

0xba15,	// (0x0000ba15) list_double_heading_pane_t1_ParamLimits

0xba15,	// (0x0000ba15) list_double_heading_pane_t1

0xba2b,	// (0x0000ba2b) list_double_heading_pane_t2_ParamLimits

0xba2b,	// (0x0000ba2b) list_double_heading_pane_t2

0x0001,

0xf160,	// (0x0000f160) list_double_heading_pane_t_ParamLimits

0xf160,	// (0x0000f160) list_double_heading_pane_t

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1_ParamLimits

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1

0xb9f8,	// (0x0000b9f8) list_double_graphic_heading_pane_g2_ParamLimits

0xb9f8,	// (0x0000b9f8) list_double_graphic_heading_pane_g2

0xba09,	// (0x0000ba09) list_double_graphic_heading_pane_g3_ParamLimits

0xba09,	// (0x0000ba09) list_double_graphic_heading_pane_g3

0x0002,

0xf165,	// (0x0000f165) list_double_graphic_heading_pane_g_ParamLimits

0xf165,	// (0x0000f165) list_double_graphic_heading_pane_g

0xba3d,	// (0x0000ba3d) list_double_graphic_heading_pane_t1_ParamLimits

0xba3d,	// (0x0000ba3d) list_double_graphic_heading_pane_t1

0xba53,	// (0x0000ba53) list_double_graphic_heading_pane_t2_ParamLimits

0xba53,	// (0x0000ba53) list_double_graphic_heading_pane_t2

0x0001,

0xf16c,	// (0x0000f16c) list_double_graphic_heading_pane_t_ParamLimits

0xf16c,	// (0x0000f16c) list_double_graphic_heading_pane_t

0xb976,	// (0x0000b976) list_double_time_pane_g1_ParamLimits

0xb976,	// (0x0000b976) list_double_time_pane_g1

0x0f03,	// (0x00000f03) list_double_time_pane_g2_ParamLimits

0x0f03,	// (0x00000f03) list_double_time_pane_g2

0x0001,

0xf171,	// (0x0000f171) list_double_time_pane_g_ParamLimits

0xf171,	// (0x0000f171) list_double_time_pane_g

0x10a3,	// (0x000010a3) list_double_time_pane_t1_ParamLimits

0x10a3,	// (0x000010a3) list_double_time_pane_t1

0xba65,	// (0x0000ba65) list_double_time_pane_t2_ParamLimits

0xba65,	// (0x0000ba65) list_double_time_pane_t2

0xba77,	// (0x0000ba77) list_double_time_pane_t3_ParamLimits

0xba77,	// (0x0000ba77) list_double_time_pane_t3

0xba89,	// (0x0000ba89) list_double_time_pane_t4_ParamLimits

0xba89,	// (0x0000ba89) list_double_time_pane_t4

0x0003,

0xf176,	// (0x0000f176) list_double_time_pane_t_ParamLimits

0xf176,	// (0x0000f176) list_double_time_pane_t

0x23eb,	// (0x000023eb) list_setting_pane_g1_ParamLimits

0x23eb,	// (0x000023eb) list_setting_pane_g1

0xb870,	// (0x0000b870) list_setting_pane_g2_ParamLimits

0xb870,	// (0x0000b870) list_setting_pane_g2

0x0001,

0xf17f,	// (0x0000f17f) list_setting_pane_g_ParamLimits

0xf17f,	// (0x0000f17f) list_setting_pane_g

0xba9b,	// (0x0000ba9b) list_setting_pane_t1_ParamLimits

0xba9b,	// (0x0000ba9b) list_setting_pane_t1

0xbab2,	// (0x0000bab2) list_setting_pane_t2_ParamLimits

0xbab2,	// (0x0000bab2) list_setting_pane_t2

0x0002,

0xf184,	// (0x0000f184) list_setting_pane_t_ParamLimits

0xf184,	// (0x0000f184) list_setting_pane_t

0xbaf1,	// (0x0000baf1) set_value_pane_cp_ParamLimits

0xbaf1,	// (0x0000baf1) set_value_pane_cp

0x23eb,	// (0x000023eb) list_setting_number_pane_g1_ParamLimits

0x23eb,	// (0x000023eb) list_setting_number_pane_g1

0xb870,	// (0x0000b870) list_setting_number_pane_g2_ParamLimits

0xb870,	// (0x0000b870) list_setting_number_pane_g2

0x0001,

0xf17f,	// (0x0000f17f) list_setting_number_pane_g_ParamLimits

0xf17f,	// (0x0000f17f) list_setting_number_pane_g

0xbafd,	// (0x0000bafd) list_setting_number_pane_t1_ParamLimits

0xbafd,	// (0x0000bafd) list_setting_number_pane_t1

0xbb11,	// (0x0000bb11) list_setting_number_pane_t2_ParamLimits

0xbb11,	// (0x0000bb11) list_setting_number_pane_t2

0xbb28,	// (0x0000bb28) list_setting_number_pane_t3_ParamLimits

0xbb28,	// (0x0000bb28) list_setting_number_pane_t3

0x0003,

0xf18b,	// (0x0000f18b) list_setting_number_pane_t_ParamLimits

0xf18b,	// (0x0000f18b) list_setting_number_pane_t

0xbaf1,	// (0x0000baf1) set_value_pane_ParamLimits

0xbaf1,	// (0x0000baf1) set_value_pane

0x123c,	// (0x0000123c) bg_set_opt_pane_ParamLimits

0x123c,	// (0x0000123c) bg_set_opt_pane

0x125d,	// (0x0000125d) set_value_pane_t1

0x126b,	// (0x0000126b) slider_set_pane_cp3

0x1274,	// (0x00001274) volume_small_pane_cp

0x127d,	// (0x0000127d) list_form_gen_pane

0x1286,	// (0x00001286) scroll_pane_cp8

0xbb6b,	// (0x0000bb6b) form_field_data_pane_ParamLimits

0xbb6b,	// (0x0000bb6b) form_field_data_pane

0xbb82,	// (0x0000bb82) form_field_data_wide_pane_ParamLimits

0xbb82,	// (0x0000bb82) form_field_data_wide_pane

0xbba2,	// (0x0000bba2) form_field_popup_pane_ParamLimits

0xbba2,	// (0x0000bba2) form_field_popup_pane

0xbbba,	// (0x0000bbba) form_field_popup_wide_pane_ParamLimits

0xbbba,	// (0x0000bbba) form_field_popup_wide_pane

0x1321,	// (0x00001321) form_field_slider_pane_ParamLimits

0x1321,	// (0x00001321) form_field_slider_pane

0x1334,	// (0x00001334) form_field_slider_wide_pane_ParamLimits

0x1334,	// (0x00001334) form_field_slider_wide_pane

0x1347,	// (0x00001347) data_form_pane

0xbbdb,	// (0x0000bbdb) form_field_data_pane_t1

0x1375,	// (0x00001375) input_focus_pane

0x1383,	// (0x00001383) data_form_wide_pane

0x13bb,	// (0x000013bb) form_field_data_wide_pane_t1

0x0b85,	// (0x00000b85) input_focus_pane_cp6

0xbbf5,	// (0x0000bbf5) form_field_popup_pane_t1

0x1375,	// (0x00001375) input_focus_pane_cp7

0x13f5,	// (0x000013f5) list_form_pane

0x1409,	// (0x00001409) form_field_popup_wide_pane_t1

0x1375,	// (0x00001375) input_focus_pane_cp8

0x141e,	// (0x0000141e) list_form_wide_pane

0xbc17,	// (0x0000bc17) form_field_slider_pane_t1_ParamLimits

0xbc17,	// (0x0000bc17) form_field_slider_pane_t1

0xbc2f,	// (0x0000bc2f) form_field_slider_pane_t2_ParamLimits

0xbc2f,	// (0x0000bc2f) form_field_slider_pane_t2

0x0001,

0xf194,	// (0x0000f194) form_field_slider_pane_t_ParamLimits

0xf194,	// (0x0000f194) form_field_slider_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp9_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9

0xbc44,	// (0x0000bc44) slider_cont_pane_ParamLimits

0xbc44,	// (0x0000bc44) slider_cont_pane

0x146d,	// (0x0000146d) form_field_slider_wide_pane_t1_ParamLimits

0x146d,	// (0x0000146d) form_field_slider_wide_pane_t1

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t2_ParamLimits

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t2

0x0001,

0xaa10,	// (0x0000aa10) form_field_slider_wide_pane_t_ParamLimits

0xaa10,	// (0x0000aa10) form_field_slider_wide_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp10_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10

0xbc58,	// (0x0000bc58) slider_cont_pane_cp1_ParamLimits

0xbc58,	// (0x0000bc58) slider_cont_pane_cp1

0xbc6c,	// (0x0000bc6c) slider_form_pane_cp

0x14ad,	// (0x000014ad) input_focus_pane_g1

0x14b5,	// (0x000014b5) input_focus_pane_g2

0x14bd,	// (0x000014bd) input_focus_pane_g3

0x14c5,	// (0x000014c5) input_focus_pane_g4

0x14cd,	// (0x000014cd) input_focus_pane_g5

0x14d5,	// (0x000014d5) input_focus_pane_g6

0x14dd,	// (0x000014dd) input_focus_pane_g7

0x14e5,	// (0x000014e5) input_focus_pane_g8

0x14ed,	// (0x000014ed) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xaa15,	// (0x0000aa15) input_focus_pane_g

0x3e4f,	// (0x00003e4f) wait_border_pane_g3_copy1

0xbc74,	// (0x0000bc74) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd217,	// (0x0000d217) data_form_wide_pane_t1

0xbc8e,	// (0x0000bc8e) list_form_graphic_pane_cp_ParamLimits

0xbc8e,	// (0x0000bc8e) list_form_graphic_pane_cp

0x4fd9,	// (0x00004fd9) slider_form_pane_g1

0x4fe2,	// (0x00004fe2) slider_form_pane_g2

0x0006,

0xf245,	// (0x0000f245) slider_form_pane_g

0xbc8e,	// (0x0000bc8e) list_form_graphic_pane_ParamLimits

0xbc8e,	// (0x0000bc8e) list_form_graphic_pane

0x1545,	// (0x00001545) list_form_graphic_pane_g1

0x154d,	// (0x0000154d) list_form_graphic_pane_t1_ParamLimits

0x154d,	// (0x0000154d) list_form_graphic_pane_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5

0xbca0,	// (0x0000bca0) find_pane_g1

0x156b,	// (0x0000156b) input_find_pane

0xbca9,	// (0x0000bca9) input_find_pane_g1_ParamLimits

0xbca9,	// (0x0000bca9) input_find_pane_g1

0xbcb5,	// (0x0000bcb5) input_find_pane_t1_ParamLimits

0xbcb5,	// (0x0000bcb5) input_find_pane_t1

0xbcca,	// (0x0000bcca) input_find_pane_t2_ParamLimits

0xbcca,	// (0x0000bcca) input_find_pane_t2

0x0001,

0xf199,	// (0x0000f199) input_find_pane_t_ParamLimits

0xf199,	// (0x0000f199) input_find_pane_t

0x15aa,	// (0x000015aa) input_focus_pane_cp5_ParamLimits

0x15aa,	// (0x000015aa) input_focus_pane_cp5

0xbceb,	// (0x0000bceb) bg_popup_window_pane_cp2_ParamLimits

0xbceb,	// (0x0000bceb) bg_popup_window_pane_cp2

0xbcf8,	// (0x0000bcf8) listscroll_menu_pane_ParamLimits

0xbcf8,	// (0x0000bcf8) listscroll_menu_pane

0xbd04,	// (0x0000bd04) popup_submenu_window_ParamLimits

0xbd04,	// (0x0000bd04) popup_submenu_window

0x1609,	// (0x00001609) find_popup_pane_g1

0x1611,	// (0x00001611) input_popup_find_pane_cp

0x15aa,	// (0x000015aa) input_focus_pane_cp4_ParamLimits

0x15aa,	// (0x000015aa) input_focus_pane_cp4

0x1627,	// (0x00001627) input_popup_find_pane_t1_ParamLimits

0x1627,	// (0x00001627) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x1655,	// (0x00001655) listscroll_popup_sub_pane

0x165d,	// (0x0000165d) list_submenu_pane_ParamLimits

0x165d,	// (0x0000165d) list_submenu_pane

0x166e,	// (0x0000166e) scroll_pane_cp4

0x1676,	// (0x00001676) list_single_popup_submenu_pane_ParamLimits

0x1676,	// (0x00001676) list_single_popup_submenu_pane

0x168a,	// (0x0000168a) list_single_popup_submenu_pane_g1

0x1692,	// (0x00001692) list_single_popup_submenu_pane_t1_ParamLimits

0x1692,	// (0x00001692) list_single_popup_submenu_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1

0xbd3e,	// (0x0000bd3e) tabs_2_active_pane_g1

0xbd46,	// (0x0000bd46) tabs_2_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1

0xbd3e,	// (0x0000bd3e) tabs_2_passive_pane_g1

0xbd46,	// (0x0000bd46) tabs_2_passive_pane_t1

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4

0xbd58,	// (0x0000bd58) tabs_2_long_active_pane_t1

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp4

0x2096,	// (0x00002096) list_single_midp_graphic_pane_g4_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5

0xbd6b,	// (0x0000bd6b) tabs_3_long_active_pane_t1

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp5

0x2096,	// (0x00002096) list_single_midp_graphic_pane_g4

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13

0x1709,	// (0x00001709) listscroll_popup_fast_pane_ParamLimits

0x1709,	// (0x00001709) listscroll_popup_fast_pane

0x1718,	// (0x00001718) grid_popup_fast_pane_ParamLimits

0x1718,	// (0x00001718) grid_popup_fast_pane

0x172a,	// (0x0000172a) scroll_pane_cp9_ParamLimits

0x172a,	// (0x0000172a) scroll_pane_cp9

0x71dc,	// (0x000071dc) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x71dc,	// (0x000071dc) list_single_graphic_hl_pane_t1_cp2

0x174e,	// (0x0000174e) input_focus_pane_cp20_ParamLimits

0x174e,	// (0x0000174e) input_focus_pane_cp20

0x175c,	// (0x0000175c) query_popup_data_pane_t1_ParamLimits

0x175c,	// (0x0000175c) query_popup_data_pane_t1

0x176f,	// (0x0000176f) query_popup_data_pane_t2_ParamLimits

0x176f,	// (0x0000176f) query_popup_data_pane_t2

0x17b5,	// (0x000017b5) query_popup_data_pane_t3_ParamLimits

0x17b5,	// (0x000017b5) query_popup_data_pane_t3

0x17f6,	// (0x000017f6) query_popup_data_pane_t4_ParamLimits

0x17f6,	// (0x000017f6) query_popup_data_pane_t4

0x1832,	// (0x00001832) query_popup_data_pane_t5_ParamLimits

0x1832,	// (0x00001832) query_popup_data_pane_t5

0x0004,

0xaa2f,	// (0x0000aa2f) query_popup_data_pane_t_ParamLimits

0xaa2f,	// (0x0000aa2f) query_popup_data_pane_t

0x14ad,	// (0x000014ad) bg_set_opt_pane_g1

0x14b5,	// (0x000014b5) bg_set_opt_pane_g2

0x14bd,	// (0x000014bd) bg_set_opt_pane_g3

0x14c5,	// (0x000014c5) bg_set_opt_pane_g4

0x14cd,	// (0x000014cd) bg_set_opt_pane_g5

0x14d5,	// (0x000014d5) bg_set_opt_pane_g6

0x14dd,	// (0x000014dd) bg_set_opt_pane_g7

0x14e5,	// (0x000014e5) bg_set_opt_pane_g8

0x14ed,	// (0x000014ed) bg_set_opt_pane_g9

0x0008,

0xaa3a,	// (0x0000aa3a) bg_set_opt_pane_g

0x211f,	// (0x0000211f) control_top_pane_stacon_ParamLimits

0x211f,	// (0x0000211f) control_top_pane_stacon

0x2172,	// (0x00002172) signal_pane_stacon_ParamLimits

0x2172,	// (0x00002172) signal_pane_stacon

0x2197,	// (0x00002197) stacon_top_pane_g1_ParamLimits

0x2197,	// (0x00002197) stacon_top_pane_g1

0x21b9,	// (0x000021b9) title_pane_stacon_ParamLimits

0x21b9,	// (0x000021b9) title_pane_stacon

0x21e3,	// (0x000021e3) uni_indicator_pane_stacon_ParamLimits

0x21e3,	// (0x000021e3) uni_indicator_pane_stacon

0x21f8,	// (0x000021f8) battery_pane_stacon_ParamLimits

0x21f8,	// (0x000021f8) battery_pane_stacon

0x223c,	// (0x0000223c) control_bottom_pane_stacon_ParamLimits

0x223c,	// (0x0000223c) control_bottom_pane_stacon

0x225f,	// (0x0000225f) navi_pane_stacon_ParamLimits

0x225f,	// (0x0000225f) navi_pane_stacon

0x2282,	// (0x00002282) stacon_bottom_pane_g1_ParamLimits

0x2282,	// (0x00002282) stacon_bottom_pane_g1

0x1869,	// (0x00001869) aid_levels_signal_lsc_ParamLimits

0x1869,	// (0x00001869) aid_levels_signal_lsc

0x1880,	// (0x00001880) signal_pane_stacon_g1_ParamLimits

0x1880,	// (0x00001880) signal_pane_stacon_g1

0x1894,	// (0x00001894) signal_pane_stacon_g2_ParamLimits

0x1894,	// (0x00001894) signal_pane_stacon_g2

0x0001,

0xaa4d,	// (0x0000aa4d) signal_pane_stacon_g_ParamLimits

0xaa4d,	// (0x0000aa4d) signal_pane_stacon_g

0x18d6,	// (0x000018d6) title_pane_stacon_t1_ParamLimits

0x18d6,	// (0x000018d6) title_pane_stacon_t1

0x18fb,	// (0x000018fb) uni_indicator_pane_stacon_g1

0x1905,	// (0x00001905) uni_indicator_pane_stacon_g2

0x190f,	// (0x0000190f) uni_indicator_pane_stacon_g3

0x1919,	// (0x00001919) uni_indicator_pane_stacon_g4

0x0003,

0xaa59,	// (0x0000aa59) uni_indicator_pane_stacon_g

0x1923,	// (0x00001923) control_top_pane_stacon_g1

0x192b,	// (0x0000192b) control_top_pane_stacon_t1_ParamLimits

0x192b,	// (0x0000192b) control_top_pane_stacon_t1

0x1962,	// (0x00001962) aid_levels_battery_lsc_ParamLimits

0x1962,	// (0x00001962) aid_levels_battery_lsc

0x197a,	// (0x0000197a) battery_pane_stacon_g1_ParamLimits

0x197a,	// (0x0000197a) battery_pane_stacon_g1

0x198d,	// (0x0000198d) battery_pane_stacon_g2_ParamLimits

0x198d,	// (0x0000198d) battery_pane_stacon_g2

0x0001,

0xaa62,	// (0x0000aa62) battery_pane_stacon_g_ParamLimits

0xaa62,	// (0x0000aa62) battery_pane_stacon_g

0x19cb,	// (0x000019cb) navi_icon_pane_stacon

0x19df,	// (0x000019df) navi_navi_pane_stacon

0x19cb,	// (0x000019cb) navi_text_pane_stacon

0x1923,	// (0x00001923) control_bottom_pane_stacon_g1

0x19f3,	// (0x000019f3) control_bottom_pane_stacon_t1_ParamLimits

0x19f3,	// (0x000019f3) control_bottom_pane_stacon_t1

0xbd7d,	// (0x0000bd7d) grid_app_pane_ParamLimits

0xbd7d,	// (0x0000bd7d) grid_app_pane

0xbdb5,	// (0x0000bdb5) scroll_pane_cp15_ParamLimits

0xbdb5,	// (0x0000bdb5) scroll_pane_cp15

0xbdce,	// (0x0000bdce) cell_app_pane_ParamLimits

0xbdce,	// (0x0000bdce) cell_app_pane

0xbe13,	// (0x0000be13) cell_app_pane_g1_ParamLimits

0xbe13,	// (0x0000be13) cell_app_pane_g1

0x1ac1,	// (0x00001ac1) cell_app_pane_g2_ParamLimits

0x1ac1,	// (0x00001ac1) cell_app_pane_g2

0x0001,

0xf19e,	// (0x0000f19e) cell_app_pane_g_ParamLimits

0xf19e,	// (0x0000f19e) cell_app_pane_g

0xbe33,	// (0x0000be33) cell_app_pane_t1_ParamLimits

0xbe33,	// (0x0000be33) cell_app_pane_t1

0x1ae4,	// (0x00001ae4) grid_highlight_pane_ParamLimits

0x1ae4,	// (0x00001ae4) grid_highlight_pane

0x14ad,	// (0x000014ad) cell_highlight_pane_g1

0x14b5,	// (0x000014b5) cell_highlight_pane_g2

0x14bd,	// (0x000014bd) cell_highlight_pane_g3

0x14c5,	// (0x000014c5) cell_highlight_pane_g4

0x14cd,	// (0x000014cd) cell_highlight_pane_g5

0x14d5,	// (0x000014d5) cell_highlight_pane_g6

0x14dd,	// (0x000014dd) cell_highlight_pane_g7

0x14e5,	// (0x000014e5) cell_highlight_pane_g8

0x14ed,	// (0x000014ed) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xaa15,	// (0x0000aa15) cell_highlight_pane_g

0x1b08,	// (0x00001b08) bg_scroll_pane

0x1b27,	// (0x00001b27) scroll_handle_pane

0x1b78,	// (0x00001b78) scroll_bg_pane_g1

0x1b8d,	// (0x00001b8d) scroll_bg_pane_g2

0x1ba5,	// (0x00001ba5) scroll_bg_pane_g3

0x0002,

0xaa6c,	// (0x0000aa6c) scroll_bg_pane_g

0x1bba,	// (0x00001bba) scroll_handle_focus_pane_ParamLimits

0x1bba,	// (0x00001bba) scroll_handle_focus_pane

0x1b78,	// (0x00001b78) scroll_handle_pane_g1

0x1bc7,	// (0x00001bc7) scroll_handle_pane_g2

0x1ba5,	// (0x00001ba5) scroll_handle_pane_g3

0x0002,

0xaa73,	// (0x0000aa73) scroll_handle_pane_g

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp21_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp21

0x1bdb,	// (0x00001bdb) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bdb,	// (0x00001bdb) popup_fep_japan_predictive_window_t1

0x1bf5,	// (0x00001bf5) popup_fep_japan_predictive_window_t2_ParamLimits

0x1bf5,	// (0x00001bf5) popup_fep_japan_predictive_window_t2

0x1c28,	// (0x00001c28) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c28,	// (0x00001c28) popup_fep_japan_predictive_window_t3

0x0002,

0xaa7a,	// (0x0000aa7a) popup_fep_japan_predictive_window_t_ParamLimits

0xaa7a,	// (0x0000aa7a) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c5f,	// (0x00001c5f) listscroll_japin_cand_pane

0x1c67,	// (0x00001c67) popup_fep_japan_candidate_window_t1

0x1c75,	// (0x00001c75) candidate_pane_ParamLimits

0x1c75,	// (0x00001c75) candidate_pane

0x1c87,	// (0x00001c87) scroll_pane_cp30

0x1c8f,	// (0x00001c8f) list_single_popup_jap_candidate_pane_ParamLimits

0x1c8f,	// (0x00001c8f) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1ca4,	// (0x00001ca4) list_single_popup_jap_candidate_pane_t1

0x1cb3,	// (0x00001cb3) level_1_signal

0x1cc0,	// (0x00001cc0) level_2_signal

0x1ccd,	// (0x00001ccd) level_3_signal

0x1cda,	// (0x00001cda) level_4_signal

0x1ce7,	// (0x00001ce7) level_5_signal

0x1cf4,	// (0x00001cf4) level_6_signal

0x1d01,	// (0x00001d01) level_7_signal

0x1cb3,	// (0x00001cb3) level_1_battery

0x1cc0,	// (0x00001cc0) level_2_battery

0x1ccd,	// (0x00001ccd) level_3_battery

0x1cda,	// (0x00001cda) level_4_battery

0x1ce7,	// (0x00001ce7) level_5_battery

0x1cf4,	// (0x00001cf4) level_6_battery

0x1d01,	// (0x00001d01) level_7_battery

0x1d45,	// (0x00001d45) list_menu_pane_ParamLimits

0x1d45,	// (0x00001d45) list_menu_pane

0x1d5b,	// (0x00001d5b) scroll_pane_cp25_ParamLimits

0x1d5b,	// (0x00001d5b) scroll_pane_cp25

0x1d74,	// (0x00001d74) list_double2_graphic_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double2_graphic_pane_cp2

0x1d74,	// (0x00001d74) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double2_large_graphic_pane_cp2

0x1d74,	// (0x00001d74) list_double2_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double2_pane_cp2

0x1d74,	// (0x00001d74) list_double_graphic_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double_graphic_pane_cp2

0x1d74,	// (0x00001d74) list_double_large_graphic_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double_large_graphic_pane_cp2

0x1d74,	// (0x00001d74) list_double_number_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double_number_pane_cp2

0x1d74,	// (0x00001d74) list_double_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double_pane_cp2

0xbe62,	// (0x0000be62) list_single_2graphic_pane_cp2_ParamLimits

0xbe62,	// (0x0000be62) list_single_2graphic_pane_cp2

0xbe62,	// (0x0000be62) list_single_graphic_heading_pane_cp2_ParamLimits

0xbe62,	// (0x0000be62) list_single_graphic_heading_pane_cp2

0xbe62,	// (0x0000be62) list_single_graphic_pane_cp2_ParamLimits

0xbe62,	// (0x0000be62) list_single_graphic_pane_cp2

0xbe62,	// (0x0000be62) list_single_heading_pane_cp2_ParamLimits

0xbe62,	// (0x0000be62) list_single_heading_pane_cp2

0x1db1,	// (0x00001db1) list_single_large_graphic_pane_cp2_ParamLimits

0x1db1,	// (0x00001db1) list_single_large_graphic_pane_cp2

0xbe62,	// (0x0000be62) list_single_number_heading_pane_cp2_ParamLimits

0xbe62,	// (0x0000be62) list_single_number_heading_pane_cp2

0xbe62,	// (0x0000be62) list_single_number_pane_cp2_ParamLimits

0xbe62,	// (0x0000be62) list_single_number_pane_cp2

0xbe62,	// (0x0000be62) list_single_pane_cp2_ParamLimits

0xbe62,	// (0x0000be62) list_single_pane_cp2

0x1e82,	// (0x00001e82) bg_popup_sub_pane_cp22

0x1ea7,	// (0x00001ea7) popup_side_volume_key_window_g1

0x1ed1,	// (0x00001ed1) popup_side_volume_key_window_t1

0x1eed,	// (0x00001eed) volume_small_pane_cp1

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24_ParamLimits

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24

0x1ef5,	// (0x00001ef5) fep_china_uni_candidate_pane_ParamLimits

0x1ef5,	// (0x00001ef5) fep_china_uni_candidate_pane

0x1f09,	// (0x00001f09) fep_china_uni_entry_pane

0x1f19,	// (0x00001f19) popup_fep_china_uni_window_g1

0x1f35,	// (0x00001f35) fep_china_uni_entry_pane_g1

0x1f3d,	// (0x00001f3d) fep_china_uni_entry_pane_g2

0x0001,

0xaaab,	// (0x0000aaab) fep_china_uni_entry_pane_g

0x1f45,	// (0x00001f45) fep_entry_item_pane

0x1f4f,	// (0x00001f4f) fep_candidate_item_pane

0x1f57,	// (0x00001f57) fep_china_uni_candidate_pane_g1

0x1f5f,	// (0x00001f5f) fep_china_uni_candidate_pane_g2

0x1f67,	// (0x00001f67) fep_china_uni_candidate_pane_g3

0x1f6f,	// (0x00001f6f) fep_china_uni_candidate_pane_g4

0x0003,

0xaab0,	// (0x0000aab0) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f77,	// (0x00001f77) fep_entry_item_pane_t1_ParamLimits

0x1f77,	// (0x00001f77) fep_entry_item_pane_t1

0x1f8d,	// (0x00001f8d) fep_candidate_item_pane_t1_ParamLimits

0x1f8d,	// (0x00001f8d) fep_candidate_item_pane_t1

0x1fa2,	// (0x00001fa2) fep_candidate_item_pane_t2_ParamLimits

0x1fa2,	// (0x00001fa2) fep_candidate_item_pane_t2

0x0001,

0xaab9,	// (0x0000aab9) fep_candidate_item_pane_t_ParamLimits

0xaab9,	// (0x0000aab9) fep_candidate_item_pane_t

0x04fd,	// (0x000004fd) list_highlight_pane_cp31_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp31

0x1fb4,	// (0x00001fb4) level_1_signal_lsc

0x1fbd,	// (0x00001fbd) level_2_signal_lsc

0x1fc6,	// (0x00001fc6) level_3_signal_lsc

0x1fcf,	// (0x00001fcf) level_4_signal_lsc

0x1fd8,	// (0x00001fd8) level_5_signal_lsc

0x1fe1,	// (0x00001fe1) level_6_signal_lsc

0x1fea,	// (0x00001fea) level_7_signal_lsc

0x1fea,	// (0x00001fea) level_1_battery_lsc

0x1ff3,	// (0x00001ff3) level_2_battery_lsc

0x1ffc,	// (0x00001ffc) level_3_battery_lsc

0x2005,	// (0x00002005) level_4_battery_lsc

0x200e,	// (0x0000200e) level_5_battery_lsc

0x2017,	// (0x00002017) level_6_battery_lsc

0x1fb4,	// (0x00001fb4) level_7_battery_lsc

0x2020,	// (0x00002020) scroll_handle_focus_pane_g1

0x2029,	// (0x00002029) scroll_handle_focus_pane_g2

0x2032,	// (0x00002032) scroll_handle_focus_pane_g3

0x0002,

0xaabe,	// (0x0000aabe) scroll_handle_focus_pane_g

0xbeee,	// (0x0000beee) list_single_2graphic_pane_g1_ParamLimits

0xbeee,	// (0x0000beee) list_single_2graphic_pane_g1

0xb822,	// (0x0000b822) list_single_2graphic_pane_g2_ParamLimits

0xb822,	// (0x0000b822) list_single_2graphic_pane_g2

0x3522,	// (0x00003522) list_single_2graphic_pane_g3_ParamLimits

0x3522,	// (0x00003522) list_single_2graphic_pane_g3

0xbefa,	// (0x0000befa) list_single_2graphic_pane_g4_ParamLimits

0xbefa,	// (0x0000befa) list_single_2graphic_pane_g4

0x0003,

0xf1ac,	// (0x0000f1ac) list_single_2graphic_pane_g_ParamLimits

0xf1ac,	// (0x0000f1ac) list_single_2graphic_pane_g

0xbf06,	// (0x0000bf06) list_single_2graphic_pane_t1_ParamLimits

0xbf06,	// (0x0000bf06) list_single_2graphic_pane_t1

0xbf34,	// (0x0000bf34) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbf34,	// (0x0000bf34) list_double2_graphic_large_graphic_pane_g1

0xb85f,	// (0x0000b85f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb85f,	// (0x0000b85f) list_double2_graphic_large_graphic_pane_g2

0xb870,	// (0x0000b870) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb870,	// (0x0000b870) list_double2_graphic_large_graphic_pane_g3

0xbf46,	// (0x0000bf46) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbf46,	// (0x0000bf46) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf1b5,	// (0x0000f1b5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf1b5,	// (0x0000f1b5) list_double2_graphic_large_graphic_pane_g

0xbf52,	// (0x0000bf52) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbf52,	// (0x0000bf52) list_double2_graphic_large_graphic_pane_t1

0xbf68,	// (0x0000bf68) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbf68,	// (0x0000bf68) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf1be,	// (0x0000f1be) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf1be,	// (0x0000f1be) list_double2_graphic_large_graphic_pane_t

0x234a,	// (0x0000234a) popup_fast_swap_window_ParamLimits

0x234a,	// (0x0000234a) popup_fast_swap_window

0x2366,	// (0x00002366) popup_side_volume_key_window

0x2382,	// (0x00002382) stacon_top_pane

0x238c,	// (0x0000238c) status_pane_ParamLimits

0x238c,	// (0x0000238c) status_pane

0x2382,	// (0x00002382) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x1286,	// (0x00001286) scroll_pane_cp121

0x127d,	// (0x0000127d) set_content_pane

0x20e5,	// (0x000020e5) bg_active_tab_pane_g1_cp1

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp1

0x20ee,	// (0x000020ee) bg_active_tab_pane_g3_cp1

0x20e5,	// (0x000020e5) bg_passive_tab_pane_g1_cp1

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp1

0x20ee,	// (0x000020ee) bg_passive_tab_pane_g3_cp1

0xbf7a,	// (0x0000bf7a) bg_active_tab_pane_g1_cp2

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp2

0xbf83,	// (0x0000bf83) bg_active_tab_pane_g3_cp2

0xbf7a,	// (0x0000bf7a) bg_passive_tab_pane_g1_cp2

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp2

0xbf83,	// (0x0000bf83) bg_passive_tab_pane_g3_cp2

0xbf8c,	// (0x0000bf8c) bg_active_tab_pane_g1_cp3

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp3

0xbf95,	// (0x0000bf95) bg_active_tab_pane_g3_cp3

0xbf8c,	// (0x0000bf8c) bg_passive_tab_pane_g1_cp3

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp3

0xbf95,	// (0x0000bf95) bg_passive_tab_pane_g3_cp3

0xbf9e,	// (0x0000bf9e) bg_active_tab_pane_g1_cp4

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp4

0xbfa7,	// (0x0000bfa7) bg_active_tab_pane_g3_cp4

0xbf9e,	// (0x0000bf9e) bg_passive_tab_pane_g1_cp4

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp4

0xbfa7,	// (0x0000bfa7) bg_passive_tab_pane_g3_cp4

0x229e,	// (0x0000229e) bg_active_tab_pane_g1_cp5

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp5

0x22a7,	// (0x000022a7) bg_active_tab_pane_g3_cp5

0x229e,	// (0x0000229e) bg_passive_tab_pane_g1_cp5

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp5

0x22a7,	// (0x000022a7) bg_passive_tab_pane_g3_cp5

0xbfb0,	// (0x0000bfb0) list_set_graphic_pane_ParamLimits

0xbfb0,	// (0x0000bfb0) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xbfc2,	// (0x0000bfc2) list_set_graphic_pane_g1_ParamLimits

0xbfc2,	// (0x0000bfc2) list_set_graphic_pane_g1

0xbfce,	// (0x0000bfce) list_set_graphic_pane_g2_ParamLimits

0xbfce,	// (0x0000bfce) list_set_graphic_pane_g2

0x0001,

0xf1c3,	// (0x0000f1c3) list_set_graphic_pane_g_ParamLimits

0xf1c3,	// (0x0000f1c3) list_set_graphic_pane_g

0x0009,

0xae3f,	// (0x0000ae3f) volume_small_pane_cp_g

0x22fd,	// (0x000022fd) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x22fd,	// (0x000022fd) list_double2_large_graphic_pane_g1_cp2

0x2309,	// (0x00002309) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2309,	// (0x00002309) list_double2_large_graphic_pane_g2_cp2

0x231a,	// (0x0000231a) list_double2_large_graphic_pane_g3_cp2

0x2322,	// (0x00002322) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2322,	// (0x00002322) list_double2_large_graphic_pane_t1_cp2

0x2338,	// (0x00002338) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2338,	// (0x00002338) list_double2_large_graphic_pane_t2_cp2

0x4a86,	// (0x00004a86) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a86,	// (0x00004a86) list_double_large_graphic_pane_g1_cp2

0x4a97,	// (0x00004a97) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a97,	// (0x00004a97) list_double_large_graphic_pane_g2_cp2

0x24a8,	// (0x000024a8) list_double_large_graphic_pane_g3_cp2

0x4aa8,	// (0x00004aa8) list_double_large_graphic_pane_g4_cp

0x4ab0,	// (0x00004ab0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4ab0,	// (0x00004ab0) list_double_large_graphic_pane_t1_cp2

0x4ac7,	// (0x00004ac7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4ac7,	// (0x00004ac7) list_double_large_graphic_pane_t2_cp2

0x239a,	// (0x0000239a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x239a,	// (0x0000239a) list_double2_graphic_pane_g1_cp2

0x23a8,	// (0x000023a8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x23a8,	// (0x000023a8) list_double2_graphic_pane_g2_cp2

0x23b9,	// (0x000023b9) list_double2_graphic_pane_g3_cp2

0x23c3,	// (0x000023c3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x23c3,	// (0x000023c3) list_double2_graphic_pane_t1_cp2

0x23d9,	// (0x000023d9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x23d9,	// (0x000023d9) list_double2_graphic_pane_t2_cp2

0x23eb,	// (0x000023eb) list_single_number_heading_pane_g1_cp2_ParamLimits

0x23eb,	// (0x000023eb) list_single_number_heading_pane_g1_cp2

0x23f7,	// (0x000023f7) list_single_number_heading_pane_g2_cp2

0x23ff,	// (0x000023ff) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23ff,	// (0x000023ff) list_single_number_heading_pane_t1_cp2

0x2415,	// (0x00002415) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2415,	// (0x00002415) list_single_number_heading_pane_t2_cp2

0x2427,	// (0x00002427) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2427,	// (0x00002427) list_single_number_heading_pane_t3_cp2

0x23eb,	// (0x000023eb) list_single_heading_pane_g1_cp2_ParamLimits

0x23eb,	// (0x000023eb) list_single_heading_pane_g1_cp2

0x23f7,	// (0x000023f7) list_single_heading_pane_g2_cp2

0x23ff,	// (0x000023ff) list_single_heading_pane_t1_cp2_ParamLimits

0x23ff,	// (0x000023ff) list_single_heading_pane_t1_cp2

0x488e,	// (0x0000488e) list_single_heading_pane_t2_cp2_ParamLimits

0x488e,	// (0x0000488e) list_single_heading_pane_t2_cp2

0x47d6,	// (0x000047d6) list_double_graphic_pane_g1_cp2_ParamLimits

0x47d6,	// (0x000047d6) list_double_graphic_pane_g1_cp2

0x47e2,	// (0x000047e2) list_double_graphic_pane_g2_cp2_ParamLimits

0x47e2,	// (0x000047e2) list_double_graphic_pane_g2_cp2

0x47f1,	// (0x000047f1) list_double_graphic_pane_g3_cp2

0x47f9,	// (0x000047f9) list_double_graphic_pane_t1_cp2_ParamLimits

0x47f9,	// (0x000047f9) list_double_graphic_pane_t1_cp2

0x480f,	// (0x0000480f) list_double_graphic_pane_t2_cp2_ParamLimits

0x480f,	// (0x0000480f) list_double_graphic_pane_t2_cp2

0x249c,	// (0x0000249c) list_double_number_pane_g1_cp2_ParamLimits

0x249c,	// (0x0000249c) list_double_number_pane_g1_cp2

0x24a8,	// (0x000024a8) list_double_number_pane_g2_cp2

0x479a,	// (0x0000479a) list_double_number_pane_t1_cp2_ParamLimits

0x479a,	// (0x0000479a) list_double_number_pane_t1_cp2

0x47ae,	// (0x000047ae) list_double_number_pane_t2_cp2_ParamLimits

0x47ae,	// (0x000047ae) list_double_number_pane_t2_cp2

0x47c4,	// (0x000047c4) list_double_number_pane_t3_cp2_ParamLimits

0x47c4,	// (0x000047c4) list_double_number_pane_t3_cp2

0x4672,	// (0x00004672) list_single_graphic_pane_g1_cp2_ParamLimits

0x4672,	// (0x00004672) list_single_graphic_pane_g1_cp2

0x2500,	// (0x00002500) list_single_graphic_pane_g2_cp2_ParamLimits

0x2500,	// (0x00002500) list_single_graphic_pane_g2_cp2

0x250c,	// (0x0000250c) list_single_graphic_pane_g3_cp2

0x4648,	// (0x00004648) list_single_graphic_pane_t1_cp2_ParamLimits

0x4648,	// (0x00004648) list_single_graphic_pane_t1_cp2

0x2500,	// (0x00002500) list_single_number_pane_g1_cp2_ParamLimits

0x2500,	// (0x00002500) list_single_number_pane_g1_cp2

0x250c,	// (0x0000250c) list_single_number_pane_g2_cp2

0x4648,	// (0x00004648) list_single_number_pane_t1_cp2_ParamLimits

0x4648,	// (0x00004648) list_single_number_pane_t1_cp2

0x465e,	// (0x0000465e) list_single_number_pane_t2_cp2_ParamLimits

0x465e,	// (0x0000465e) list_single_number_pane_t2_cp2

0x2309,	// (0x00002309) list_double2_pane_g1_cp2_ParamLimits

0x2309,	// (0x00002309) list_double2_pane_g1_cp2

0x231a,	// (0x0000231a) list_double2_pane_g2_cp2

0x2474,	// (0x00002474) list_double2_pane_t1_cp2_ParamLimits

0x2474,	// (0x00002474) list_double2_pane_t1_cp2

0x248a,	// (0x0000248a) list_double2_pane_t2_cp2_ParamLimits

0x248a,	// (0x0000248a) list_double2_pane_t2_cp2

0x249c,	// (0x0000249c) list_double_pane_g1_cp2_ParamLimits

0x249c,	// (0x0000249c) list_double_pane_g1_cp2

0x24a8,	// (0x000024a8) list_double_pane_g2_cp2

0x24b0,	// (0x000024b0) list_double_pane_t1_cp2_ParamLimits

0x24b0,	// (0x000024b0) list_double_pane_t1_cp2

0x24c6,	// (0x000024c6) list_double_pane_t2_cp2_ParamLimits

0x24c6,	// (0x000024c6) list_double_pane_t2_cp2

0x24f0,	// (0x000024f0) list_single_pane_cp2_g3

0x2500,	// (0x00002500) list_single_pane_g1_cp2_ParamLimits

0x2500,	// (0x00002500) list_single_pane_g1_cp2

0x250c,	// (0x0000250c) list_single_pane_g2_cp2

0x2514,	// (0x00002514) list_single_pane_t1_cp2_ParamLimits

0x2514,	// (0x00002514) list_single_pane_t1_cp2

0x252c,	// (0x0000252c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x252c,	// (0x0000252c) list_single_large_graphic_pane_g1_cp2

0x2538,	// (0x00002538) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2538,	// (0x00002538) list_single_large_graphic_pane_g2_cp2

0x2544,	// (0x00002544) list_single_large_graphic_pane_g3_cp2

0x254c,	// (0x0000254c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x254c,	// (0x0000254c) list_single_large_graphic_pane_g4_cp1

0x2566,	// (0x00002566) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2566,	// (0x00002566) list_single_large_graphic_pane_t1_cp2

0x44c1,	// (0x000044c1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x44c1,	// (0x000044c1) list_single_graphic_heading_pane_g1_cp2

0x448e,	// (0x0000448e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x448e,	// (0x0000448e) list_single_graphic_heading_pane_g4_cp2

0x250c,	// (0x0000250c) list_single_graphic_heading_pane_g5_cp2

0x44cd,	// (0x000044cd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x44cd,	// (0x000044cd) list_single_graphic_heading_pane_t1_cp2

0x44e3,	// (0x000044e3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x44e3,	// (0x000044e3) list_single_graphic_heading_pane_t2_cp2

0x4482,	// (0x00004482) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4482,	// (0x00004482) list_single_2graphic_pane_g1_cp2

0x448e,	// (0x0000448e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x448e,	// (0x0000448e) list_single_2graphic_pane_g2_cp2

0x250c,	// (0x0000250c) list_single_2graphic_pane_g3_cp2

0x449f,	// (0x0000449f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x449f,	// (0x0000449f) list_single_2graphic_pane_g4_cp2

0x44ab,	// (0x000044ab) list_single_2graphic_pane_t1_cp2_ParamLimits

0x44ab,	// (0x000044ab) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x405a,	// (0x0000405a) list_highlight_pane_g1_cp1

0x4062,	// (0x00004062) list_highlight_pane_g2_cp1

0x406a,	// (0x0000406a) list_highlight_pane_g3_cp1

0x4072,	// (0x00004072) list_highlight_pane_g4_cp1

0x407a,	// (0x0000407a) list_highlight_pane_g5_cp1

0x4082,	// (0x00004082) list_highlight_pane_g6_cp1

0x408a,	// (0x0000408a) list_highlight_pane_g7_cp1

0x4092,	// (0x00004092) list_highlight_pane_g8_cp1

0x409a,	// (0x0000409a) list_highlight_pane_g9_cp1

0xce0d,	// (0x0000ce0d) form_field_slider_pane_t3

0xce1b,	// (0x0000ce1b) form_field_slider_pane_t4

0x3f96,	// (0x00003f96) slider_form_pane_ParamLimits

0x3f96,	// (0x00003f96) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x48d8,	// (0x000048d8) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xac6a,	// (0x0000ac6a) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x257c,	// (0x0000257c) text_digital

0x258b,	// (0x0000258b) text_primary

0x259a,	// (0x0000259a) text_primary_small

0x25a9,	// (0x000025a9) text_secondary

0x25b8,	// (0x000025b8) text_title

0x51d1,	// (0x000051d1) bg_passive_tab_pane_g1_cp3_srt

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp3_srt

0x51da,	// (0x000051da) bg_passive_tab_pane_g3_cp3_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt

0x51e3,	// (0x000051e3) tabs_4_active_pane_srt_g1

0xd2c0,	// (0x0000d2c0) tabs_4_active_pane_srt_t1_ParamLimits

0xd2c0,	// (0x0000d2c0) tabs_4_active_pane_srt_t1

0x51d1,	// (0x000051d1) bg_active_tab_pane_g1_cp3_copy1

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp3_copy1

0x51da,	// (0x000051da) bg_active_tab_pane_g3_cp3_copy1

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp4_srt

0x4d94,	// (0x00004d94) bg_passive_tab_pane_g1_cp4_srt

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp4_srt

0x4d9d,	// (0x00004d9d) bg_passive_tab_pane_g3_cp4_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt

0xd0ac,	// (0x0000d0ac) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd0ac,	// (0x0000d0ac) tabs_2_long_active_pane_srt_t1

0x4d94,	// (0x00004d94) bg_active_tab_pane_g1_cp4_srt

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp4_srt

0x4d9d,	// (0x00004d9d) bg_active_tab_pane_g3_cp4_srt

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp5_srt

0x229e,	// (0x0000229e) bg_passive_tab_pane_g1_cp5_srt

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp5_srt

0x22a7,	// (0x000022a7) bg_passive_tab_pane_g3_cp5_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt

0xd096,	// (0x0000d096) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd096,	// (0x0000d096) tabs_3_long_active_pane_srt_t1

0x229e,	// (0x0000229e) bg_active_tab_pane_g1_cp5_srt

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp5_srt

0x22a7,	// (0x000022a7) bg_active_tab_pane_g3_cp5_srt

0x4d74,	// (0x00004d74) navi_text_pane_srt_t1

0x4d6c,	// (0x00004d6c) navi_icon_pane_srt_g1

0x2828,	// (0x00002828) midp_editing_number_pane_srt

0x25c7,	// (0x000025c7) midp_ticker_pane_srt

0x2830,	// (0x00002830) midp_ticker_pane_srt_g1

0x2838,	// (0x00002838) midp_ticker_pane_srt_g2

0x0001,

0xaafb,	// (0x0000aafb) midp_ticker_pane_srt_g

0x2840,	// (0x00002840) midp_ticker_pane_srt_t1

0x4d5d,	// (0x00004d5d) midp_editing_number_pane_t1_copy1

0x2b34,	// (0x00002b34) listscroll_midp_pane

0x2b34,	// (0x00002b34) midp_form_pane

0x2631,	// (0x00002631) midp_info_popup_window_ParamLimits

0x2631,	// (0x00002631) midp_info_popup_window

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp50_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp50

0x3c92,	// (0x00003c92) listscroll_midp_info_pane_ParamLimits

0x3c92,	// (0x00003c92) listscroll_midp_info_pane

0x3c7a,	// (0x00003c7a) listscroll_form_midp_pane_ParamLimits

0x3c7a,	// (0x00003c7a) listscroll_form_midp_pane

0x3c86,	// (0x00003c86) scroll_bar_cp050

0xce01,	// (0x0000ce01) list_midp_pane

0x5ecd,	// (0x00005ecd) signal_pane_g2_cp

0x3b94,	// (0x00003b94) listscroll_midp_info_pane_t1_ParamLimits

0x3b94,	// (0x00003b94) listscroll_midp_info_pane_t1

0x3bac,	// (0x00003bac) listscroll_midp_info_pane_t2_ParamLimits

0x3bac,	// (0x00003bac) listscroll_midp_info_pane_t2

0x3bea,	// (0x00003bea) listscroll_midp_info_pane_t3_ParamLimits

0x3bea,	// (0x00003bea) listscroll_midp_info_pane_t3

0x3c24,	// (0x00003c24) listscroll_midp_info_pane_t4_ParamLimits

0x3c24,	// (0x00003c24) listscroll_midp_info_pane_t4

0x0003,

0xaba5,	// (0x0000aba5) listscroll_midp_info_pane_t_ParamLimits

0xaba5,	// (0x0000aba5) listscroll_midp_info_pane_t

0x166e,	// (0x0000166e) scroll_pane_cp21

0x3b32,	// (0x00003b32) form_midp_field_choice_group_pane

0x3b3b,	// (0x00003b3b) form_midp_field_text_pane

0x3b7a,	// (0x00003b7a) form_midp_field_time_pane

0x3b82,	// (0x00003b82) form_midp_gauge_slider_pane

0x3b8b,	// (0x00003b8b) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcdeb,	// (0x0000cdeb) list_single_midp_pane_ParamLimits

0xcdeb,	// (0x0000cdeb) list_single_midp_pane

0xcdc9,	// (0x0000cdc9) form_midp_field_text_pane_t1

0x3816,	// (0x00003816) input_focus_pane_cp050

0x3af2,	// (0x00003af2) list_midp_form_text_pane

0x3a8a,	// (0x00003a8a) form_midp_field_choice_group_pane_t1

0x3a98,	// (0x00003a98) input_focus_pane_cp051

0x3aac,	// (0x00003aac) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a6e,	// (0x00003a6e) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a7c,	// (0x00003a7c) form_midp_field_time_pane_t2

0x0001,

0x26df,	// (0x000026df) aid_navinavi_width_2_pane

0xaba0,	// (0x0000aba0) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3a2e,	// (0x00003a2e) form_midp_gauge_slider_pane_t1

0x3a3c,	// (0x00003a3c) form_midp_gauge_slider_pane_t2

0xcdad,	// (0x0000cdad) form_midp_gauge_slider_pane_t3

0xcdbb,	// (0x0000cdbb) form_midp_gauge_slider_pane_t4

0x0003,

0xf204,	// (0x0000f204) form_midp_gauge_slider_pane_t

0x3a66,	// (0x00003a66) form_midp_slider_pane

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041_ParamLimits

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041

0x39fb,	// (0x000039fb) form_midp_gauge_wait_pane_t1_ParamLimits

0x39fb,	// (0x000039fb) form_midp_gauge_wait_pane_t1

0x3a0d,	// (0x00003a0d) form_midp_gauge_wait_pane_t2_ParamLimits

0x3a0d,	// (0x00003a0d) form_midp_gauge_wait_pane_t2

0x0001,

0xab92,	// (0x0000ab92) form_midp_gauge_wait_pane_t_ParamLimits

0xab92,	// (0x0000ab92) form_midp_gauge_wait_pane_t

0x3a1f,	// (0x00003a1f) form_midp_wait_pane_ParamLimits

0x3a1f,	// (0x00003a1f) form_midp_wait_pane

0x39c5,	// (0x000039c5) form_midp_image_pane_g1

0x39ce,	// (0x000039ce) form_midp_image_pane_t1

0x39dd,	// (0x000039dd) form_midp_image_pane_t2

0x39ec,	// (0x000039ec) form_midp_image_pane_t3

0x0002,

0xab8b,	// (0x0000ab8b) form_midp_image_pane_t

0x39ad,	// (0x000039ad) list_single_midp_pane_g1

0x39b6,	// (0x000039b6) list_single_midp_pane_t1

0xcd98,	// (0x0000cd98) list_midp_form_item_pane_ParamLimits

0xcd98,	// (0x0000cd98) list_midp_form_item_pane

0x2687,	// (0x00002687) list_midp_form_item_pane_t1

0x2696,	// (0x00002696) midp_ticker_pane_g1

0x26a2,	// (0x000026a2) midp_ticker_pane_g2

0x0001,

0xaae1,	// (0x0000aae1) midp_ticker_pane_g

0x26ae,	// (0x000026ae) midp_ticker_pane_t1

0x5059,	// (0x00005059) midp_editing_number_pane_t1

0x5037,	// (0x00005037) midp_editing_number_pane

0x5046,	// (0x00005046) midp_ticker_pane

0x4d25,	// (0x00004d25) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4d2d,	// (0x00004d2d) listscroll_ai_message_pane

0x4caf,	// (0x00004caf) ai_message_heading_pane_g1_ParamLimits

0x4caf,	// (0x00004caf) ai_message_heading_pane_g1

0x4cbb,	// (0x00004cbb) ai_message_heading_pane_g2_ParamLimits

0x4cbb,	// (0x00004cbb) ai_message_heading_pane_g2

0x4cc7,	// (0x00004cc7) ai_message_heading_pane_g3_ParamLimits

0x4cc7,	// (0x00004cc7) ai_message_heading_pane_g3

0x4cd3,	// (0x00004cd3) ai_message_heading_pane_g4_ParamLimits

0x4cd3,	// (0x00004cd3) ai_message_heading_pane_g4

0x0003,

0xaccc,	// (0x0000accc) ai_message_heading_pane_g_ParamLimits

0xaccc,	// (0x0000accc) ai_message_heading_pane_g

0x4cdf,	// (0x00004cdf) ai_message_heading_pane_t1_ParamLimits

0x4cdf,	// (0x00004cdf) ai_message_heading_pane_t1

0x4cf9,	// (0x00004cf9) ai_message_heading_pane_t2_ParamLimits

0x4cf9,	// (0x00004cf9) ai_message_heading_pane_t2

0x0001,

0xacd5,	// (0x0000acd5) ai_message_heading_pane_t_ParamLimits

0xacd5,	// (0x0000acd5) ai_message_heading_pane_t

0x4d0b,	// (0x00004d0b) bg_popup_heading_pane_cp1_ParamLimits

0x4d0b,	// (0x00004d0b) bg_popup_heading_pane_cp1

0x4c9d,	// (0x00004c9d) list_ai_message_pane_ParamLimits

0x4c9d,	// (0x00004c9d) list_ai_message_pane

0x166e,	// (0x0000166e) scroll_pane_cp10

0x4be9,	// (0x00004be9) list_ai_message_pane_g1

0x4bf1,	// (0x00004bf1) list_ai_message_pane_g2

0x0001,

0xaca9,	// (0x0000aca9) list_ai_message_pane_g

0x4bf9,	// (0x00004bf9) list_ai_message_pane_t1_ParamLimits

0x4bf9,	// (0x00004bf9) list_ai_message_pane_t1

0x4c0e,	// (0x00004c0e) list_ai_message_pane_t2_ParamLimits

0x4c0e,	// (0x00004c0e) list_ai_message_pane_t2

0x4c23,	// (0x00004c23) list_ai_message_pane_t3_ParamLimits

0x4c23,	// (0x00004c23) list_ai_message_pane_t3

0x4c38,	// (0x00004c38) list_ai_message_pane_t4_ParamLimits

0x4c38,	// (0x00004c38) list_ai_message_pane_t4

0x0003,

0xacae,	// (0x0000acae) list_ai_message_pane_t_ParamLimits

0xacae,	// (0x0000acae) list_ai_message_pane_t

0xd063,	// (0x0000d063) cell_ai_soft_ind_pane_ParamLimits

0xd063,	// (0x0000d063) cell_ai_soft_ind_pane

0x26c0,	// (0x000026c0) cell_ai_soft_ind_pane_g1_ParamLimits

0x26c0,	// (0x000026c0) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x26cd,	// (0x000026cd) text_secondary_cp56_ParamLimits

0x26cd,	// (0x000026cd) text_secondary_cp56

0x4ba9,	// (0x00004ba9) example_general_pane_ParamLimits

0x4ba9,	// (0x00004ba9) example_general_pane

0x4bb5,	// (0x00004bb5) example_parent_pane_g1_ParamLimits

0x4bb5,	// (0x00004bb5) example_parent_pane_g1

0x4bc1,	// (0x00004bc1) example_parent_pane_t1_ParamLimits

0x4bc1,	// (0x00004bc1) example_parent_pane_t1

0xc5f5,	// (0x0000c5f5) popup_preview_text_window_ParamLimits

0xc5f5,	// (0x0000c5f5) popup_preview_text_window

0x24f8,	// (0x000024f8) list_single_pane_cp2_g4

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane

0x48e0,	// (0x000048e0) popup_preview_text_window_t1_ParamLimits

0x48e0,	// (0x000048e0) popup_preview_text_window_t1

0x48fe,	// (0x000048fe) popup_preview_text_window_t2_ParamLimits

0x48fe,	// (0x000048fe) popup_preview_text_window_t2

0x4947,	// (0x00004947) popup_preview_text_window_t3_ParamLimits

0x4947,	// (0x00004947) popup_preview_text_window_t3

0x498c,	// (0x0000498c) popup_preview_text_window_t4_ParamLimits

0x498c,	// (0x0000498c) popup_preview_text_window_t4

0x0004,

0xac7d,	// (0x0000ac7d) popup_preview_text_window_t_ParamLimits

0xac7d,	// (0x0000ac7d) popup_preview_text_window_t

0x4a0a,	// (0x00004a0a) scroll_pane_cp11

0x367e,	// (0x0000367e) bg_popup_preview_window_pane_g1

0x48a0,	// (0x000048a0) bg_popup_preview_window_pane_g2

0x48a8,	// (0x000048a8) bg_popup_preview_window_pane_g3

0x48b0,	// (0x000048b0) bg_popup_preview_window_pane_g4

0x48b8,	// (0x000048b8) bg_popup_preview_window_pane_g5

0x48c0,	// (0x000048c0) bg_popup_preview_window_pane_g6

0x48c8,	// (0x000048c8) bg_popup_preview_window_pane_g7

0x48d0,	// (0x000048d0) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc571,	// (0x0000c571) popup_midp_note_alarm_window_ParamLimits

0xc571,	// (0x0000c571) popup_midp_note_alarm_window

0x1347,	// (0x00001347) data_form_pane_ParamLimits

0xbbd1,	// (0x0000bbd1) form_field_data_pane_g1

0xbbdb,	// (0x0000bbdb) form_field_data_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_ParamLimits

0x1383,	// (0x00001383) data_form_wide_pane_ParamLimits

0x138f,	// (0x0000138f) form_field_data_wide_pane_g1

0x13bb,	// (0x000013bb) form_field_data_wide_pane_t1_ParamLimits

0x0b85,	// (0x00000b85) input_focus_pane_cp6_ParamLimits

0xbd30,	// (0x0000bd30) input_popup_find_pane_g1_ParamLimits

0xbd30,	// (0x0000bd30) input_popup_find_pane_g1

0x199e,	// (0x0000199e) aid_navi_side_left_pane

0x19b3,	// (0x000019b3) aid_navi_side_right_pane

0x4155,	// (0x00004155) bg_popup_window_pane_cp30_ParamLimits

0x4155,	// (0x00004155) bg_popup_window_pane_cp30

0x41cf,	// (0x000041cf) popup_midp_note_alarm_window_g1_ParamLimits

0x41cf,	// (0x000041cf) popup_midp_note_alarm_window_g1

0x41ff,	// (0x000041ff) popup_midp_note_alarm_window_t1_ParamLimits

0x41ff,	// (0x000041ff) popup_midp_note_alarm_window_t1

0x42a0,	// (0x000042a0) popup_midp_note_alarm_window_t2_ParamLimits

0x42a0,	// (0x000042a0) popup_midp_note_alarm_window_t2

0x434e,	// (0x0000434e) popup_midp_note_alarm_window_t3_ParamLimits

0x434e,	// (0x0000434e) popup_midp_note_alarm_window_t3

0x4380,	// (0x00004380) popup_midp_note_alarm_window_t4_ParamLimits

0x4380,	// (0x00004380) popup_midp_note_alarm_window_t4

0x43a6,	// (0x000043a6) popup_midp_note_alarm_window_t5_ParamLimits

0x43a6,	// (0x000043a6) popup_midp_note_alarm_window_t5

0x000a,

0xac1a,	// (0x0000ac1a) popup_midp_note_alarm_window_t_ParamLimits

0xac1a,	// (0x0000ac1a) popup_midp_note_alarm_window_t

0x4452,	// (0x00004452) wait_bar_pane_cp1_ParamLimits

0x4452,	// (0x00004452) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3e3b,	// (0x00003e3b) wait_border_pane_g1_copy1

0x13d5,	// (0x000013d5) form_field_popup_pane_g1

0xbbf5,	// (0x0000bbf5) form_field_popup_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp7_ParamLimits

0x13f5,	// (0x000013f5) list_form_pane_ParamLimits

0x1401,	// (0x00001401) form_field_popup_wide_pane_g1

0x1409,	// (0x00001409) form_field_popup_wide_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp8_ParamLimits

0x141e,	// (0x0000141e) list_form_wide_pane_ParamLimits

0x525d,	// (0x0000525d) aid_size_cell_graphic_pane

0xbc74,	// (0x0000bc74) data_form_pane_t1_ParamLimits

0xd217,	// (0x0000d217) data_form_wide_pane_t1_ParamLimits

0xc9b1,	// (0x0000c9b1) bg_status_flat_pane

0xb467,	// (0x0000b467) title_pane_t1_ParamLimits

0x04c5,	// (0x000004c5) title_pane_t2_ParamLimits

0x04eb,	// (0x000004eb) title_pane_t3_ParamLimits

0xf0d5,	// (0x0000f0d5) title_pane_t_ParamLimits

0x1cb3,	// (0x00001cb3) level_1_signal_ParamLimits

0x1cc0,	// (0x00001cc0) level_2_signal_ParamLimits

0x1ccd,	// (0x00001ccd) level_3_signal_ParamLimits

0x1cda,	// (0x00001cda) level_4_signal_ParamLimits

0x1ce7,	// (0x00001ce7) level_5_signal_ParamLimits

0x1cf4,	// (0x00001cf4) level_6_signal_ParamLimits

0x1d01,	// (0x00001d01) level_7_signal_ParamLimits

0x1cb3,	// (0x00001cb3) level_1_battery_ParamLimits

0x1cc0,	// (0x00001cc0) level_2_battery_ParamLimits

0x1ccd,	// (0x00001ccd) level_3_battery_ParamLimits

0x1cda,	// (0x00001cda) level_4_battery_ParamLimits

0x1ce7,	// (0x00001ce7) level_5_battery_ParamLimits

0x1cf4,	// (0x00001cf4) level_6_battery_ParamLimits

0x1d01,	// (0x00001d01) level_7_battery_ParamLimits

0x405a,	// (0x0000405a) bg_status_flat_pane_g1

0x4062,	// (0x00004062) bg_status_flat_pane_g2

0x406a,	// (0x0000406a) bg_status_flat_pane_g3

0x4072,	// (0x00004072) bg_status_flat_pane_g4

0x407a,	// (0x0000407a) bg_status_flat_pane_g5

0x4082,	// (0x00004082) bg_status_flat_pane_g6

0x408a,	// (0x0000408a) bg_status_flat_pane_g7

0xb4fb,	// (0x0000b4fb) tabs_3_active_pane_t1_ParamLimits

0xb4fb,	// (0x0000b4fb) tabs_3_passive_pane_t1_ParamLimits

0xb515,	// (0x0000b515) tabs_4_active_pane_t1_ParamLimits

0xb515,	// (0x0000b515) tabs_4_1_passive_pane_t1_ParamLimits

0xbd46,	// (0x0000bd46) tabs_2_active_pane_t1_ParamLimits

0xbd46,	// (0x0000bd46) tabs_2_passive_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_ParamLimits

0xbd58,	// (0x0000bd58) tabs_2_long_active_pane_t1_ParamLimits

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp4_ParamLimits

0x373b,	// (0x0000373b) list_single_midp_graphic_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_ParamLimits

0xbd6b,	// (0x0000bd6b) tabs_3_long_active_pane_t1_ParamLimits

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp5_ParamLimits

0x373b,	// (0x0000373b) list_single_midp_graphic_pane_t1

0xc9b1,	// (0x0000c9b1) bg_status_flat_pane_ParamLimits

0x326d,	// (0x0000326d) indicator_pane_cp2_ParamLimits

0x326d,	// (0x0000326d) indicator_pane_cp2

0xcb29,	// (0x0000cb29) navi_pane_srt_ParamLimits

0xcb29,	// (0x0000cb29) navi_pane_srt

0x33b6,	// (0x000033b6) popup_clock_digital_analogue_window_cp1

0x0685,	// (0x00000685) indicator_pane_t1

0x25c7,	// (0x000025c7) copy_highlight_pane

0x25c7,	// (0x000025c7) cursor_graphics_pane

0x25c7,	// (0x000025c7) graphic_within_text_pane

0x25c7,	// (0x000025c7) link_highlight_pane

0x49cd,	// (0x000049cd) popup_preview_text_window_t5_ParamLimits

0x49cd,	// (0x000049cd) popup_preview_text_window_t5

0x26e7,	// (0x000026e7) cursor_digital_pane

0x26e7,	// (0x000026e7) cursor_primary_pane

0x26f8,	// (0x000026f8) cursor_primary_small_pane

0x2700,	// (0x00002700) cursor_secondary_pane

0x2708,	// (0x00002708) cursor_title_pane

0x26e7,	// (0x000026e7) link_highlight_digital_pane

0x26ef,	// (0x000026ef) link_highlight_primary_pane

0x26f8,	// (0x000026f8) link_highlight_primary_small_pane

0x2700,	// (0x00002700) link_highlight_secondary_pane

0x2708,	// (0x00002708) link_highlight_title_pane

0x26e7,	// (0x000026e7) copy_highlight_digital_pane

0x26e7,	// (0x000026e7) copy_highlight_primary_pane

0x26f8,	// (0x000026f8) copy_highlight_primary_small_pane

0x2700,	// (0x00002700) copy_highlight_secondary_pane

0x2708,	// (0x00002708) copy_highlight_title_pane

0x2700,	// (0x00002700) graphic_text_digital_pane

0x40f8,	// (0x000040f8) graphic_text_primary_pane

0x4101,	// (0x00004101) graphic_text_primary_small_pane

0x26f8,	// (0x000026f8) graphic_text_secondary_pane

0x26e7,	// (0x000026e7) graphic_text_title_pane

0xc089,	// (0x0000c089) cursor_primary_pane_g1

0x40ea,	// (0x000040ea) cursor_text_primary_t1

0xce3d,	// (0x0000ce3d) cursor_primary_small_pane_g1

0x40dc,	// (0x000040dc) cursor_text_primary_small_t1

0xce33,	// (0x0000ce33) cursor_primary_small_pane_g1_copy1

0x40c4,	// (0x000040c4) cursor_text_primary_small_t1_copy1

0x40a2,	// (0x000040a2) cursor_text_title_t1

0xce29,	// (0x0000ce29) cursor_title_pane_g1

0xc089,	// (0x0000c089) cursor_digital_pane_g1

0x271a,	// (0x0000271a) cursor_text_digital_t1

0x273f,	// (0x0000273f) link_highlight_primary_pane_g1

0x404b,	// (0x0000404b) link_highlight_primary_pane_t1

0x2728,	// (0x00002728) link_highlight_primary_small_pane_g1

0x2730,	// (0x00002730) link_highlight_primary_small_pane_t1

0x273f,	// (0x0000273f) link_highlight_secondary_pane_g1

0x2747,	// (0x00002747) link_highlight_secondary_pane_t1

0x3fbf,	// (0x00003fbf) link_highlight_title_pane_g1

0x3fc7,	// (0x00003fc7) link_highlight_title_pane_t1

0x3fa8,	// (0x00003fa8) link_highlight_digital_pane_g1

0x3fb0,	// (0x00003fb0) link_highlight_digital_pane_t1

0x3e80,	// (0x00003e80) copy_highlight_primary_pane_g1

0x3e88,	// (0x00003e88) copy_highlight_primary_pane_t1

0x3e5a,	// (0x00003e5a) copy_highlight_primary_small_pane_g1

0x3e71,	// (0x00003e71) copy_highlight_primary_small_pane_t1

0x2756,	// (0x00002756) copy_highlight_secondary_pane_g1

0x275e,	// (0x0000275e) copy_highlight_secondary_pane_t1

0x3e5a,	// (0x00003e5a) copy_highlight_title_pane_g1

0x3e62,	// (0x00003e62) copy_highlight_title_pane_t1

0x3e80,	// (0x00003e80) copy_highlight_digital_pane_g1

0x54df,	// (0x000054df) copy_highlight_digital_pane_t1

0x5433,	// (0x00005433) graphic_text_primary_pane_g1

0x54c3,	// (0x000054c3) graphic_text_primary_pane_t1

0x54d1,	// (0x000054d1) graphic_text_primary_pane_t2

0x0001,

0xad49,	// (0x0000ad49) graphic_text_primary_pane_t

0x549f,	// (0x0000549f) graphic_text_primary_small_pane_g1

0x54a7,	// (0x000054a7) graphic_text_primary_small_pane_t1

0x54b5,	// (0x000054b5) graphic_text_primary_small_pane_t2

0x0001,

0xad44,	// (0x0000ad44) graphic_text_primary_small_pane_t

0x547b,	// (0x0000547b) graphic_text_secondary_pane_g1

0x5483,	// (0x00005483) graphic_text_secondary_pane_t1

0x5491,	// (0x00005491) graphic_text_secondary_pane_t2

0x0001,

0xad3f,	// (0x0000ad3f) graphic_text_secondary_pane_t

0x5457,	// (0x00005457) graphic_text_title_pane_g1

0x545f,	// (0x0000545f) graphic_text_title_pane_t1

0x546d,	// (0x0000546d) graphic_text_title_pane_t2

0x0001,

0xad3a,	// (0x0000ad3a) graphic_text_title_pane_t

0x5433,	// (0x00005433) graphic_text_digital_pane_g1

0x543b,	// (0x0000543b) graphic_text_digital_pane_t1

0x5449,	// (0x00005449) graphic_text_digital_pane_t2

0x0001,

0xad35,	// (0x0000ad35) graphic_text_digital_pane_t

0x04fd,	// (0x000004fd) navi_icon_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04fd,	// (0x000004fd) navi_text_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_text_pane_srt

0x53fe,	// (0x000053fe) navi_navi_icon_text_pane_srt

0x5406,	// (0x00005406) navi_navi_pane_srt_g1_ParamLimits

0x5406,	// (0x00005406) navi_navi_pane_srt_g1

0x5418,	// (0x00005418) navi_navi_pane_srt_g2_ParamLimits

0x5418,	// (0x00005418) navi_navi_pane_srt_g2

0x0001,

0xad30,	// (0x0000ad30) navi_navi_pane_srt_g_ParamLimits

0xad30,	// (0x0000ad30) navi_navi_pane_srt_g

0x542a,	// (0x0000542a) navi_navi_tabs_pane_srt

0x53fe,	// (0x000053fe) navi_navi_text_pane_srt

0x53fe,	// (0x000053fe) navi_navi_volume_pane_srt

0x53ef,	// (0x000053ef) navi_navi_text_pane_srt_t1

0x53ca,	// (0x000053ca) navi_navi_volume_pane_srt_g1

0x53d2,	// (0x000053d2) volume_small_pane_srt_ParamLimits

0x53d2,	// (0x000053d2) volume_small_pane_srt

0x276d,	// (0x0000276d) volume_small_pane_srt_g1_ParamLimits

0x276d,	// (0x0000276d) volume_small_pane_srt_g1

0x277d,	// (0x0000277d) volume_small_pane_srt_g2_ParamLimits

0x277d,	// (0x0000277d) volume_small_pane_srt_g2

0x278e,	// (0x0000278e) volume_small_pane_srt_g3_ParamLimits

0x278e,	// (0x0000278e) volume_small_pane_srt_g3

0x279f,	// (0x0000279f) volume_small_pane_srt_g4_ParamLimits

0x279f,	// (0x0000279f) volume_small_pane_srt_g4

0x27b0,	// (0x000027b0) volume_small_pane_srt_g5_ParamLimits

0x27b0,	// (0x000027b0) volume_small_pane_srt_g5

0x27c1,	// (0x000027c1) volume_small_pane_srt_g6_ParamLimits

0x27c1,	// (0x000027c1) volume_small_pane_srt_g6

0x27d2,	// (0x000027d2) volume_small_pane_srt_g7_ParamLimits

0x27d2,	// (0x000027d2) volume_small_pane_srt_g7

0x27e3,	// (0x000027e3) volume_small_pane_srt_g8_ParamLimits

0x27e3,	// (0x000027e3) volume_small_pane_srt_g8

0x27f4,	// (0x000027f4) volume_small_pane_srt_g9_ParamLimits

0x27f4,	// (0x000027f4) volume_small_pane_srt_g9

0x2805,	// (0x00002805) volume_small_pane_srt_g10_ParamLimits

0x2805,	// (0x00002805) volume_small_pane_srt_g10

0x0009,

0xaae6,	// (0x0000aae6) volume_small_pane_srt_g_ParamLimits

0xaae6,	// (0x0000aae6) volume_small_pane_srt_g

0x0982,	// (0x00000982) query_popup_data_pane_cp2

0x53b8,	// (0x000053b8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x53b8,	// (0x000053b8) navi_navi_icon_text_pane_srt_t1

0x40f8,	// (0x000040f8) navi_tabs_2_long_pane_srt

0x40f8,	// (0x000040f8) navi_tabs_2_pane_srt

0x40f8,	// (0x000040f8) navi_tabs_3_long_pane_srt

0x40f8,	// (0x000040f8) navi_tabs_3_pane_srt

0x40f8,	// (0x000040f8) navi_tabs_4_pane_srt

0x5390,	// (0x00005390) tabs_2_active_pane_srt_ParamLimits

0x5390,	// (0x00005390) tabs_2_active_pane_srt

0x53a0,	// (0x000053a0) tabs_2_passive_pane_srt_ParamLimits

0x53a0,	// (0x000053a0) tabs_2_passive_pane_srt

0x3816,	// (0x00003816) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3816,	// (0x00003816) bg_passive_tab_pane_cp1_srt

0x5364,	// (0x00005364) bg_passive_tab_pane_g1_cp1_srt

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp1_srt

0x536d,	// (0x0000536d) bg_passive_tab_pane_g3_cp1_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt

0x5376,	// (0x00005376) tabs_2_active_pane_srt_g1

0xd33c,	// (0x0000d33c) tabs_2_active_pane_srt_t1_ParamLimits

0xd33c,	// (0x0000d33c) tabs_2_active_pane_srt_t1

0x5364,	// (0x00005364) bg_active_tab_pane_g1_cp1_srt

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp1_srt

0x536d,	// (0x0000536d) bg_active_tab_pane_g3_cp1_srt

0x5331,	// (0x00005331) tabs_3_active_pane_srt_ParamLimits

0x5331,	// (0x00005331) tabs_3_active_pane_srt

0x5342,	// (0x00005342) tabs_3_passive_pane_cp_srt_ParamLimits

0x5342,	// (0x00005342) tabs_3_passive_pane_cp_srt

0x5353,	// (0x00005353) tabs_3_passive_pane_srt_ParamLimits

0x5353,	// (0x00005353) tabs_3_passive_pane_srt

0x3816,	// (0x00003816) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3816,	// (0x00003816) bg_passive_tab_pane_cp2_srt

0x2816,	// (0x00002816) bg_passive_tab_pane_g1_cp2_srt

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp2_srt

0x281f,	// (0x0000281f) bg_passive_tab_pane_g3_cp2_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt

0x5317,	// (0x00005317) tabs_3_active_pane_srt_g1

0xd326,	// (0x0000d326) tabs_3_active_pane_srt_t1_ParamLimits

0xd326,	// (0x0000d326) tabs_3_active_pane_srt_t1

0x2816,	// (0x00002816) bg_active_tab_pane_g1_cp2_srt

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp2_srt

0x281f,	// (0x0000281f) bg_active_tab_pane_g3_cp2_srt

0x52cf,	// (0x000052cf) tabs_4_active_pane_srt_ParamLimits

0x52cf,	// (0x000052cf) tabs_4_active_pane_srt

0x52e1,	// (0x000052e1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x52e1,	// (0x000052e1) tabs_4_passive_pane_cp2_srt

0x2aba,	// (0x00002aba) aid_size_cell_toolbar

0x4e7d,	// (0x00004e7d) main_idle_act_pane_ParamLimits

0x2cdd,	// (0x00002cdd) popup_large_graphic_colour_window_ParamLimits

0xc875,	// (0x0000c875) popup_toolbar_window_ParamLimits

0xc875,	// (0x0000c875) popup_toolbar_window

0x5083,	// (0x00005083) list_single_graphic_2heading_pane_ParamLimits

0x5083,	// (0x00005083) list_single_graphic_2heading_pane

0x1a2a,	// (0x00001a2a) aid_size_cell_apps_grid_lsc_pane

0x1a3c,	// (0x00001a3c) aid_size_cell_apps_grid_prt_pane

0x2b34,	// (0x00002b34) bg_wml_button_pane_cp1_ParamLimits

0x2b34,	// (0x00002b34) bg_wml_button_pane_cp1

0xcdc9,	// (0x0000cdc9) form_midp_field_text_pane_t1_ParamLimits

0x3816,	// (0x00003816) input_focus_pane_cp050_ParamLimits

0x3af2,	// (0x00003af2) list_midp_form_text_pane_ParamLimits

0x3a98,	// (0x00003a98) input_focus_pane_cp051_ParamLimits

0x3aac,	// (0x00003aac) list_midp_choice_pane_ParamLimits

0xcd66,	// (0x0000cd66) list_single_2graphic_pane_cp3_ParamLimits

0xcd66,	// (0x0000cd66) list_single_2graphic_pane_cp3

0xcd79,	// (0x0000cd79) list_single_midp_graphic_pane_ParamLimits

0xcd79,	// (0x0000cd79) list_single_midp_graphic_pane

0x350a,	// (0x0000350a) list_single_graphic_2heading_pane_g1_ParamLimits

0x350a,	// (0x0000350a) list_single_graphic_2heading_pane_g1

0x3516,	// (0x00003516) list_single_graphic_2heading_pane_g4_ParamLimits

0x3516,	// (0x00003516) list_single_graphic_2heading_pane_g4

0x3522,	// (0x00003522) list_single_graphic_2heading_pane_g5_ParamLimits

0x3522,	// (0x00003522) list_single_graphic_2heading_pane_g5

0x0002,

0xab39,	// (0x0000ab39) list_single_graphic_2heading_pane_g_ParamLimits

0xab39,	// (0x0000ab39) list_single_graphic_2heading_pane_g

0x352e,	// (0x0000352e) list_single_graphic_2heading_pane_t1_ParamLimits

0x352e,	// (0x0000352e) list_single_graphic_2heading_pane_t1

0x3542,	// (0x00003542) list_single_graphic_2heading_pane_t2_ParamLimits

0x3542,	// (0x00003542) list_single_graphic_2heading_pane_t2

0x355e,	// (0x0000355e) list_single_graphic_2heading_pane_t3_ParamLimits

0x355e,	// (0x0000355e) list_single_graphic_2heading_pane_t3

0x0002,

0xab40,	// (0x0000ab40) list_single_graphic_2heading_pane_t_ParamLimits

0xab40,	// (0x0000ab40) list_single_graphic_2heading_pane_t

0x3576,	// (0x00003576) bg_popup_sub_pane_cp2

0x35a0,	// (0x000035a0) grid_toobar_pane

0x35dc,	// (0x000035dc) cell_toolbar_pane_ParamLimits

0x35dc,	// (0x000035dc) cell_toolbar_pane

0x3622,	// (0x00003622) cell_toolbar_pane_g1_ParamLimits

0x3622,	// (0x00003622) cell_toolbar_pane_g1

0x3636,	// (0x00003636) cell_toolbar_pane_g2_ParamLimits

0x3636,	// (0x00003636) cell_toolbar_pane_g2

0x0001,

0xab47,	// (0x0000ab47) cell_toolbar_pane_g_ParamLimits

0xab47,	// (0x0000ab47) cell_toolbar_pane_g

0x3658,	// (0x00003658) grid_highlight_pane_cp2_ParamLimits

0x3658,	// (0x00003658) grid_highlight_pane_cp2

0x3672,	// (0x00003672) toolbar_button_pane

0x367e,	// (0x0000367e) toolbar_button_pane_g1

0x3686,	// (0x00003686) toolbar_button_pane_g2

0x368e,	// (0x0000368e) toolbar_button_pane_g3

0x3696,	// (0x00003696) toolbar_button_pane_g4

0x369e,	// (0x0000369e) toolbar_button_pane_g5

0x36a6,	// (0x000036a6) toolbar_button_pane_g6

0x36ae,	// (0x000036ae) toolbar_button_pane_g7

0x36b6,	// (0x000036b6) toolbar_button_pane_g8

0x36be,	// (0x000036be) toolbar_button_pane_g9

0x0009,

0xab4c,	// (0x0000ab4c) toolbar_button_pane_g

0x36ce,	// (0x000036ce) list_single_2graphic_pane_g1_cp3_ParamLimits

0x36ce,	// (0x000036ce) list_single_2graphic_pane_g1_cp3

0xccc8,	// (0x0000ccc8) list_single_2graphic_pane_g2_cp3_ParamLimits

0xccc8,	// (0x0000ccc8) list_single_2graphic_pane_g2_cp3

0x36eb,	// (0x000036eb) list_single_2graphic_pane_g3_cp3

0x2096,	// (0x00002096) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2096,	// (0x00002096) list_single_2graphic_pane_g4_cp3

0x36f3,	// (0x000036f3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x36f3,	// (0x000036f3) list_single_2graphic_pane_t1_cp3

0x0fd8,	// (0x00000fd8) list_single_midp_graphic_pane_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_midp_graphic_pane_g2

0x2ac2,	// (0x00002ac2) aid_zoom_text_primary

0x2aca,	// (0x00002aca) aid_zoom_text_secondary

0x28d3,	// (0x000028d3) status_small_pane_g7_ParamLimits

0x28d3,	// (0x000028d3) status_small_pane_g7

0x28f6,	// (0x000028f6) status_small_pane_t1_ParamLimits

0xb443,	// (0x0000b443) title_pane_g2

0x0003,

0xf0cc,	// (0x0000f0cc) title_pane_g

0xb6cb,	// (0x0000b6cb) aid_size_cell_colour_1_pane_ParamLimits

0xb6cb,	// (0x0000b6cb) aid_size_cell_colour_1_pane

0xb6df,	// (0x0000b6df) aid_size_cell_colour_2_pane_ParamLimits

0xb6df,	// (0x0000b6df) aid_size_cell_colour_2_pane

0xb6f3,	// (0x0000b6f3) aid_size_cell_colour_3_pane_ParamLimits

0xb6f3,	// (0x0000b6f3) aid_size_cell_colour_3_pane

0xb707,	// (0x0000b707) aid_size_cell_colour_4_pane_ParamLimits

0xb707,	// (0x0000b707) aid_size_cell_colour_4_pane

0x18a5,	// (0x000018a5) title_pane_stacon_g1_ParamLimits

0x18a5,	// (0x000018a5) title_pane_stacon_g1

0x3edf,	// (0x00003edf) popup_note_wait_window_g3_ParamLimits

0x3edf,	// (0x00003edf) popup_note_wait_window_g3

0x3f55,	// (0x00003f55) popup_note_wait_window_t5_ParamLimits

0x3f55,	// (0x00003f55) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc2a7,	// (0x0000c2a7) popup_feb_china_hwr_fs_window_ParamLimits

0xc2a7,	// (0x0000c2a7) popup_feb_china_hwr_fs_window

0xccd9,	// (0x0000ccd9) aid_size_cell_hwr_fs_ParamLimits

0xccd9,	// (0x0000ccd9) aid_size_cell_hwr_fs

0x3816,	// (0x00003816) bg_popup_sub_pane_cp3_ParamLimits

0x3816,	// (0x00003816) bg_popup_sub_pane_cp3

0xccee,	// (0x0000ccee) grid_hwr_fs_pane_ParamLimits

0xccee,	// (0x0000ccee) grid_hwr_fs_pane

0x383a,	// (0x0000383a) linegrid_hwr_fs_pane_ParamLimits

0x383a,	// (0x0000383a) linegrid_hwr_fs_pane

0xcd06,	// (0x0000cd06) cell_hwr_fs_pane_ParamLimits

0xcd06,	// (0x0000cd06) cell_hwr_fs_pane

0x386c,	// (0x0000386c) linegrid_hwr_fs_pane_g1_ParamLimits

0x386c,	// (0x0000386c) linegrid_hwr_fs_pane_g1

0xcd2c,	// (0x0000cd2c) linegrid_hwr_fs_pane_g2_ParamLimits

0xcd2c,	// (0x0000cd2c) linegrid_hwr_fs_pane_g2

0x388a,	// (0x0000388a) linegrid_hwr_fs_pane_g3_ParamLimits

0x388a,	// (0x0000388a) linegrid_hwr_fs_pane_g3

0x3896,	// (0x00003896) linegrid_hwr_fs_pane_g4_ParamLimits

0x3896,	// (0x00003896) linegrid_hwr_fs_pane_g4

0x38b0,	// (0x000038b0) linegrid_hwr_fs_pane_g5_ParamLimits

0x38b0,	// (0x000038b0) linegrid_hwr_fs_pane_g5

0x0004,

0xf1f0,	// (0x0000f1f0) linegrid_hwr_fs_pane_g_ParamLimits

0xf1f0,	// (0x0000f1f0) linegrid_hwr_fs_pane_g

0x38c6,	// (0x000038c6) cell_hwr_fs_pane_g1_ParamLimits

0x38c6,	// (0x000038c6) cell_hwr_fs_pane_g1

0x3444,	// (0x00003444) cell_hwr_fs_pane_g2_ParamLimits

0x3444,	// (0x00003444) cell_hwr_fs_pane_g2

0xcd3e,	// (0x0000cd3e) cell_hwr_fs_pane_g3_ParamLimits

0xcd3e,	// (0x0000cd3e) cell_hwr_fs_pane_g3

0xcd4b,	// (0x0000cd4b) cell_hwr_fs_pane_g4_ParamLimits

0xcd4b,	// (0x0000cd4b) cell_hwr_fs_pane_g4

0x0003,

0xf1fb,	// (0x0000f1fb) cell_hwr_fs_pane_g_ParamLimits

0xf1fb,	// (0x0000f1fb) cell_hwr_fs_pane_g

0xcd58,	// (0x0000cd58) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x1655,	// (0x00001655) aid_inside_area_popup_secondary

0xcf97,	// (0x0000cf97) aid_inside_area_window_primary_ParamLimits

0xcf97,	// (0x0000cf97) aid_inside_area_window_primary

0x54ee,	// (0x000054ee) ai2_news_ticker_pane

0x54f6,	// (0x000054f6) aid_size_cell_ai1_link_ParamLimits

0x54f6,	// (0x000054f6) aid_size_cell_ai1_link

0xd352,	// (0x0000d352) popup_ai2_data_window_ParamLimits

0xd352,	// (0x0000d352) popup_ai2_data_window

0x5526,	// (0x00005526) popup_ai2_link_window_ParamLimits

0x5526,	// (0x00005526) popup_ai2_link_window

0x3816,	// (0x00003816) bg_popup_sub_pane_cp4_ParamLimits

0x3816,	// (0x00003816) bg_popup_sub_pane_cp4

0x553a,	// (0x0000553a) grid_ai2_link_pane_ParamLimits

0x553a,	// (0x0000553a) grid_ai2_link_pane

0x5551,	// (0x00005551) popup_ai2_link_window_g1_ParamLimits

0x5551,	// (0x00005551) popup_ai2_link_window_g1

0x555d,	// (0x0000555d) popup_ai2_link_window_g2_ParamLimits

0x555d,	// (0x0000555d) popup_ai2_link_window_g2

0x0001,

0xad4e,	// (0x0000ad4e) popup_ai2_link_window_g_ParamLimits

0xad4e,	// (0x0000ad4e) popup_ai2_link_window_g

0x556c,	// (0x0000556c) ai2_mp_button_pane

0x5574,	// (0x00005574) ai2_mp_volume_pane

0x3a98,	// (0x00003a98) bg_popup_sub_pane_cp5_ParamLimits

0x3a98,	// (0x00003a98) bg_popup_sub_pane_cp5

0x557c,	// (0x0000557c) heading_ai2_gene_pane_ParamLimits

0x557c,	// (0x0000557c) heading_ai2_gene_pane

0x5588,	// (0x00005588) list_ai2_gene_pane_ParamLimits

0x5588,	// (0x00005588) list_ai2_gene_pane

0x55d0,	// (0x000055d0) cell_ai2_link_pane_ParamLimits

0x55d0,	// (0x000055d0) cell_ai2_link_pane

0x55e6,	// (0x000055e6) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x56b6,	// (0x000056b6) ai2_mp_volume_pane_g1

0x56be,	// (0x000056be) ai2_mp_volume_pane_g2

0xd37c,	// (0x0000d37c) list_ai2_gene_pane_t1

0x56c6,	// (0x000056c6) ai2_mp_volume_pane_g3

0x0002,

0xad67,	// (0x0000ad67) ai2_mp_volume_pane_g

0x56ce,	// (0x000056ce) volume_small_pane_cp3

0x56d7,	// (0x000056d7) aid_size_cell_ai2_button

0x56df,	// (0x000056df) grid_ai2_button_pane

0x56e8,	// (0x000056e8) cell_ai2_button_pane_ParamLimits

0x56e8,	// (0x000056e8) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5676,	// (0x00005676) ai2_gene_pane_t1_ParamLimits

0x5676,	// (0x00005676) ai2_gene_pane_t1

0xc21d,	// (0x0000c21d) aid_height_parent_landscape

0xd0c3,	// (0x0000d0c3) aid_height_set_list

0x4e7d,	// (0x00004e7d) aid_size_parent

0x525d,	// (0x0000525d) aid_size_cell_graphic_pane_ParamLimits

0x5598,	// (0x00005598) popup_ai2_data_window_g1_ParamLimits

0x5598,	// (0x00005598) popup_ai2_data_window_g1

0x55a4,	// (0x000055a4) ai2_news_ticker_pane_g1

0x55ac,	// (0x000055ac) ai2_news_ticker_pane_g2

0x0001,

0xad53,	// (0x0000ad53) ai2_news_ticker_pane_g

0x55b4,	// (0x000055b4) ai2_news_ticker_pane_t1

0x55c2,	// (0x000055c2) ai2_news_ticker_pane_t2

0x0001,

0xad58,	// (0x0000ad58) ai2_news_ticker_pane_t

0x55ef,	// (0x000055ef) heading_ai2_gene_pane_g1

0x55f7,	// (0x000055f7) heading_ai2_gene_pane_t1_ParamLimits

0x55f7,	// (0x000055f7) heading_ai2_gene_pane_t1

0x560c,	// (0x0000560c) list_highlight_pane_cp6

0xd366,	// (0x0000d366) ai2_gene_pane_ParamLimits

0xd366,	// (0x0000d366) ai2_gene_pane

0xd38a,	// (0x0000d38a) list_ai2_gene_pane_t2

0x0001,

0xf264,	// (0x0000f264) list_ai2_gene_pane_t

0x5647,	// (0x00005647) list_highlight_pane_cp8_ParamLimits

0x5647,	// (0x00005647) list_highlight_pane_cp8

0x5658,	// (0x00005658) ai2_gene_pane_g1_ParamLimits

0x5658,	// (0x00005658) ai2_gene_pane_g1

0x566a,	// (0x0000566a) ai2_gene_pane_g2_ParamLimits

0x566a,	// (0x0000566a) ai2_gene_pane_g2

0x0001,

0xad62,	// (0x0000ad62) ai2_gene_pane_g_ParamLimits

0xad62,	// (0x0000ad62) ai2_gene_pane_g

0x0daa,	// (0x00000daa) scroll_pane_cp12

0xc1dc,	// (0x0000c1dc) control_pane_t3_ParamLimits

0xc1dc,	// (0x0000c1dc) control_pane_t3

0x28e7,	// (0x000028e7) status_small_pane_g8_ParamLimits

0x28e7,	// (0x000028e7) status_small_pane_g8

0xc33c,	// (0x0000c33c) popup_find_window_ParamLimits

0xc5ab,	// (0x0000c5ab) popup_note_image_window_ParamLimits

0x350a,	// (0x0000350a) list_double2_graphic_pane_vc_g1_ParamLimits

0x350a,	// (0x0000350a) list_double2_graphic_pane_vc_g1

0x3516,	// (0x00003516) list_double2_graphic_pane_vc_g2_ParamLimits

0x3516,	// (0x00003516) list_double2_graphic_pane_vc_g2

0x3522,	// (0x00003522) list_double2_graphic_pane_vc_g3_ParamLimits

0x3522,	// (0x00003522) list_double2_graphic_pane_vc_g3

0x0002,

0xab39,	// (0x0000ab39) list_double2_graphic_pane_vc_g_ParamLimits

0xab39,	// (0x0000ab39) list_double2_graphic_pane_vc_g

0x360c,	// (0x0000360c) list_double2_graphic_pane_vc_t1_ParamLimits

0x360c,	// (0x0000360c) list_double2_graphic_pane_vc_t1

0x3516,	// (0x00003516) list_single_heading_pane_vc_g1_ParamLimits

0x3516,	// (0x00003516) list_single_heading_pane_vc_g1

0x3522,	// (0x00003522) list_single_heading_pane_vc_g2_ParamLimits

0x3522,	// (0x00003522) list_single_heading_pane_vc_g2

0x0001,

0xab61,	// (0x0000ab61) list_single_heading_pane_vc_g_ParamLimits

0xab61,	// (0x0000ab61) list_single_heading_pane_vc_g

0x370f,	// (0x0000370f) list_single_heading_pane_vc_t1_ParamLimits

0x370f,	// (0x0000370f) list_single_heading_pane_vc_t1

0x3727,	// (0x00003727) list_single_heading_pane_vc_t2_ParamLimits

0x3727,	// (0x00003727) list_single_heading_pane_vc_t2

0x0001,

0xab66,	// (0x0000ab66) list_single_heading_pane_vc_t_ParamLimits

0xab66,	// (0x0000ab66) list_single_heading_pane_vc_t

0x3751,	// (0x00003751) list_setting_number_pane_vc_g1_ParamLimits

0x3751,	// (0x00003751) list_setting_number_pane_vc_g1

0x375d,	// (0x0000375d) list_setting_number_pane_vc_g2_ParamLimits

0x375d,	// (0x0000375d) list_setting_number_pane_vc_g2

0x0001,

0xab6b,	// (0x0000ab6b) list_setting_number_pane_vc_g_ParamLimits

0xab6b,	// (0x0000ab6b) list_setting_number_pane_vc_g

0x3769,	// (0x00003769) list_setting_number_pane_vc_t1_ParamLimits

0x3769,	// (0x00003769) list_setting_number_pane_vc_t1

0x377d,	// (0x0000377d) list_setting_number_pane_vc_t2_ParamLimits

0x377d,	// (0x0000377d) list_setting_number_pane_vc_t2

0x3799,	// (0x00003799) list_setting_number_pane_vc_t3_ParamLimits

0x3799,	// (0x00003799) list_setting_number_pane_vc_t3

0x0002,

0xab70,	// (0x0000ab70) list_setting_number_pane_vc_t_ParamLimits

0xab70,	// (0x0000ab70) list_setting_number_pane_vc_t

0x37c5,	// (0x000037c5) set_value_pane_vc_ParamLimits

0x37c5,	// (0x000037c5) set_value_pane_vc

0x5083,	// (0x00005083) list_double2_graphic_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_double2_graphic_pane_vc

0x5095,	// (0x00005095) list_double2_large_graphic_pane_vc_ParamLimits

0x5095,	// (0x00005095) list_double2_large_graphic_pane_vc

0x5083,	// (0x00005083) list_double2_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_double2_pane_vc

0x5083,	// (0x00005083) list_double_graphic_heading_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_double_graphic_heading_pane_vc

0x5083,	// (0x00005083) list_double_graphic_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_double_graphic_pane_vc

0x5083,	// (0x00005083) list_double_heading_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_double_heading_pane_vc

0x5095,	// (0x00005095) list_double_large_graphic_pane_vc_ParamLimits

0x5095,	// (0x00005095) list_double_large_graphic_pane_vc

0x5083,	// (0x00005083) list_double_number_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_double_number_pane_vc

0x5083,	// (0x00005083) list_double_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_double_pane_vc

0x5083,	// (0x00005083) list_double_time_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_double_time_pane_vc

0x5083,	// (0x00005083) list_setting_number_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_setting_number_pane_vc

0x5083,	// (0x00005083) list_setting_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_setting_pane_vc

0x5083,	// (0x00005083) list_single_graphic_heading_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_single_graphic_heading_pane_vc

0x5083,	// (0x00005083) list_single_heading_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_single_heading_pane_vc

0x5083,	// (0x00005083) list_single_number_heading_pane_vc_ParamLimits

0x5083,	// (0x00005083) list_single_number_heading_pane_vc

0x571c,	// (0x0000571c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x571c,	// (0x0000571c) list_double_graphic_heading_pane_vc_g1

0x3516,	// (0x00003516) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3516,	// (0x00003516) list_double_graphic_heading_pane_vc_g2

0x3522,	// (0x00003522) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3522,	// (0x00003522) list_double_graphic_heading_pane_vc_g3

0x0002,

0xad6e,	// (0x0000ad6e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xad6e,	// (0x0000ad6e) list_double_graphic_heading_pane_vc_g

0x5728,	// (0x00005728) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5728,	// (0x00005728) list_double_graphic_heading_pane_vc_t1

0x370f,	// (0x0000370f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x370f,	// (0x0000370f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xad75,	// (0x0000ad75) list_double_graphic_heading_pane_vc_t_ParamLimits

0xad75,	// (0x0000ad75) list_double_graphic_heading_pane_vc_t

0x3751,	// (0x00003751) list_setting_pane_vc_g1_ParamLimits

0x3751,	// (0x00003751) list_setting_pane_vc_g1

0x375d,	// (0x0000375d) list_setting_pane_vc_g2_ParamLimits

0x375d,	// (0x0000375d) list_setting_pane_vc_g2

0x0001,

0xab6b,	// (0x0000ab6b) list_setting_pane_vc_g_ParamLimits

0xab6b,	// (0x0000ab6b) list_setting_pane_vc_g

0x5940,	// (0x00005940) list_setting_pane_vc_t1_ParamLimits

0x5940,	// (0x00005940) list_setting_pane_vc_t1

0x595c,	// (0x0000595c) list_setting_pane_vc_t2_ParamLimits

0x595c,	// (0x0000595c) list_setting_pane_vc_t2

0x0001,

0xada3,	// (0x0000ada3) list_setting_pane_vc_t_ParamLimits

0xada3,	// (0x0000ada3) list_setting_pane_vc_t

0x37c5,	// (0x000037c5) set_value_pane_cp_vc_ParamLimits

0x37c5,	// (0x000037c5) set_value_pane_cp_vc

0x3516,	// (0x00003516) list_single_number_heading_pane_vc_g1_ParamLimits

0x3516,	// (0x00003516) list_single_number_heading_pane_vc_g1

0x3522,	// (0x00003522) list_single_number_heading_pane_vc_g2_ParamLimits

0x3522,	// (0x00003522) list_single_number_heading_pane_vc_g2

0x0001,

0xab61,	// (0x0000ab61) list_single_number_heading_pane_vc_g_ParamLimits

0xab61,	// (0x0000ab61) list_single_number_heading_pane_vc_g

0x370f,	// (0x0000370f) list_single_number_heading_pane_vc_t1_ParamLimits

0x370f,	// (0x0000370f) list_single_number_heading_pane_vc_t1

0x5978,	// (0x00005978) list_single_number_heading_pane_vc_t2_ParamLimits

0x5978,	// (0x00005978) list_single_number_heading_pane_vc_t2

0x598c,	// (0x0000598c) list_single_number_heading_pane_vc_t3_ParamLimits

0x598c,	// (0x0000598c) list_single_number_heading_pane_vc_t3

0x0002,

0xada8,	// (0x0000ada8) list_single_number_heading_pane_vc_t_ParamLimits

0xada8,	// (0x0000ada8) list_single_number_heading_pane_vc_t

0x350a,	// (0x0000350a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x350a,	// (0x0000350a) list_single_graphic_heading_pane_vc_g1

0x3516,	// (0x00003516) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3516,	// (0x00003516) list_single_graphic_heading_pane_vc_g4

0x3522,	// (0x00003522) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3522,	// (0x00003522) list_single_graphic_heading_pane_vc_g5

0x0002,

0xab39,	// (0x0000ab39) list_single_graphic_heading_pane_vc_g_ParamLimits

0xab39,	// (0x0000ab39) list_single_graphic_heading_pane_vc_g

0x370f,	// (0x0000370f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x370f,	// (0x0000370f) list_single_graphic_heading_pane_vc_t1

0x599e,	// (0x0000599e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x599e,	// (0x0000599e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xadaf,	// (0x0000adaf) list_single_graphic_heading_pane_vc_t_ParamLimits

0xadaf,	// (0x0000adaf) list_single_graphic_heading_pane_vc_t

0x3516,	// (0x00003516) list_double2_pane_vc_g1_ParamLimits

0x3516,	// (0x00003516) list_double2_pane_vc_g1

0x3522,	// (0x00003522) list_double2_pane_vc_g2_ParamLimits

0x3522,	// (0x00003522) list_double2_pane_vc_g2

0x0001,

0xab61,	// (0x0000ab61) list_double2_pane_vc_g_ParamLimits

0xab61,	// (0x0000ab61) list_double2_pane_vc_g

0x59b2,	// (0x000059b2) list_double2_pane_vc_t1_ParamLimits

0x59b2,	// (0x000059b2) list_double2_pane_vc_t1

0x59c8,	// (0x000059c8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x59c8,	// (0x000059c8) list_double2_large_graphic_pane_vc_g1

0x59d4,	// (0x000059d4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x59d4,	// (0x000059d4) list_double2_large_graphic_pane_vc_g2

0x59e0,	// (0x000059e0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x59e0,	// (0x000059e0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xadb4,	// (0x0000adb4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xadb4,	// (0x0000adb4) list_double2_large_graphic_pane_vc_g

0x59ec,	// (0x000059ec) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59ec,	// (0x000059ec) list_double2_large_graphic_pane_vc_t1

0x5a02,	// (0x00005a02) list_double_time_pane_vc_g1_ParamLimits

0x5a02,	// (0x00005a02) list_double_time_pane_vc_g1

0x5a0e,	// (0x00005a0e) list_double_time_pane_vc_g2_ParamLimits

0x5a0e,	// (0x00005a0e) list_double_time_pane_vc_g2

0x0001,

0xadbb,	// (0x0000adbb) list_double_time_pane_vc_g_ParamLimits

0xadbb,	// (0x0000adbb) list_double_time_pane_vc_g

0x5a1a,	// (0x00005a1a) list_double_time_pane_vc_t1_ParamLimits

0x5a1a,	// (0x00005a1a) list_double_time_pane_vc_t1

0x5a35,	// (0x00005a35) list_double_time_pane_vc_t2_ParamLimits

0x5a35,	// (0x00005a35) list_double_time_pane_vc_t2

0x5a50,	// (0x00005a50) list_double_time_pane_vc_t3_ParamLimits

0x5a50,	// (0x00005a50) list_double_time_pane_vc_t3

0x5a68,	// (0x00005a68) list_double_time_pane_vc_t4_ParamLimits

0x5a68,	// (0x00005a68) list_double_time_pane_vc_t4

0x0003,

0xadc0,	// (0x0000adc0) list_double_time_pane_vc_t_ParamLimits

0xadc0,	// (0x0000adc0) list_double_time_pane_vc_t

0x3516,	// (0x00003516) list_double_pane_vc_g1_ParamLimits

0x3516,	// (0x00003516) list_double_pane_vc_g1

0x3522,	// (0x00003522) list_double_pane_vc_g2_ParamLimits

0x3522,	// (0x00003522) list_double_pane_vc_g2

0x0001,

0xab61,	// (0x0000ab61) list_double_pane_vc_g_ParamLimits

0xab61,	// (0x0000ab61) list_double_pane_vc_g

0x5a7c,	// (0x00005a7c) list_double_pane_vc_t1_ParamLimits

0x5a7c,	// (0x00005a7c) list_double_pane_vc_t1

0x5a90,	// (0x00005a90) list_double_pane_vc_t2_ParamLimits

0x5a90,	// (0x00005a90) list_double_pane_vc_t2

0x0001,

0xadc9,	// (0x0000adc9) list_double_pane_vc_t_ParamLimits

0xadc9,	// (0x0000adc9) list_double_pane_vc_t

0x3516,	// (0x00003516) list_double_number_pane_vc_g1_ParamLimits

0x3516,	// (0x00003516) list_double_number_pane_vc_g1

0x3522,	// (0x00003522) list_double_number_pane_vc_g2_ParamLimits

0x3522,	// (0x00003522) list_double_number_pane_vc_g2

0x0001,

0xab61,	// (0x0000ab61) list_double_number_pane_vc_g_ParamLimits

0xab61,	// (0x0000ab61) list_double_number_pane_vc_g

0x5aa8,	// (0x00005aa8) list_double_number_pane_vc_t1_ParamLimits

0x5aa8,	// (0x00005aa8) list_double_number_pane_vc_t1

0x5abc,	// (0x00005abc) list_double_number_pane_vc_t2_ParamLimits

0x5abc,	// (0x00005abc) list_double_number_pane_vc_t2

0x5a90,	// (0x00005a90) list_double_number_pane_vc_t3_ParamLimits

0x5a90,	// (0x00005a90) list_double_number_pane_vc_t3

0x0002,

0xadce,	// (0x0000adce) list_double_number_pane_vc_t_ParamLimits

0xadce,	// (0x0000adce) list_double_number_pane_vc_t

0x5ad0,	// (0x00005ad0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5ad0,	// (0x00005ad0) list_double_large_graphic_pane_vc_g1

0x5adc,	// (0x00005adc) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5adc,	// (0x00005adc) list_double_large_graphic_pane_vc_g2

0x59e0,	// (0x000059e0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x59e0,	// (0x000059e0) list_double_large_graphic_pane_vc_g3

0x5aeb,	// (0x00005aeb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5aeb,	// (0x00005aeb) list_double_large_graphic_pane_vc_g4

0x0003,

0xadd5,	// (0x0000add5) list_double_large_graphic_pane_vc_g_ParamLimits

0xadd5,	// (0x0000add5) list_double_large_graphic_pane_vc_g

0x5af7,	// (0x00005af7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5af7,	// (0x00005af7) list_double_large_graphic_pane_vc_t1

0x5b0b,	// (0x00005b0b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5b0b,	// (0x00005b0b) list_double_large_graphic_pane_vc_t2

0x0001,

0xadde,	// (0x0000adde) list_double_large_graphic_pane_vc_t_ParamLimits

0xadde,	// (0x0000adde) list_double_large_graphic_pane_vc_t

0x3516,	// (0x00003516) list_double_heading_pane_vc_g1_ParamLimits

0x3516,	// (0x00003516) list_double_heading_pane_vc_g1

0x3522,	// (0x00003522) list_double_heading_pane_vc_g2_ParamLimits

0x3522,	// (0x00003522) list_double_heading_pane_vc_g2

0x0001,

0xab61,	// (0x0000ab61) list_double_heading_pane_vc_g_ParamLimits

0xab61,	// (0x0000ab61) list_double_heading_pane_vc_g

0x5b24,	// (0x00005b24) list_double_heading_pane_vc_t1_ParamLimits

0x5b24,	// (0x00005b24) list_double_heading_pane_vc_t1

0x370f,	// (0x0000370f) list_double_heading_pane_vc_t2_ParamLimits

0x370f,	// (0x0000370f) list_double_heading_pane_vc_t2

0x0001,

0xade3,	// (0x0000ade3) list_double_heading_pane_vc_t_ParamLimits

0xade3,	// (0x0000ade3) list_double_heading_pane_vc_t

0x350a,	// (0x0000350a) list_double_graphic_pane_vc_g1_ParamLimits

0x350a,	// (0x0000350a) list_double_graphic_pane_vc_g1

0x5b38,	// (0x00005b38) list_double_graphic_pane_vc_g2_ParamLimits

0x5b38,	// (0x00005b38) list_double_graphic_pane_vc_g2

0x5b47,	// (0x00005b47) list_double_graphic_pane_vc_g3_ParamLimits

0x5b47,	// (0x00005b47) list_double_graphic_pane_vc_g3

0x0002,

0xade8,	// (0x0000ade8) list_double_graphic_pane_vc_g_ParamLimits

0xade8,	// (0x0000ade8) list_double_graphic_pane_vc_g

0x5b53,	// (0x00005b53) list_double_graphic_pane_vc_t1_ParamLimits

0x5b53,	// (0x00005b53) list_double_graphic_pane_vc_t1

0x5a90,	// (0x00005a90) list_double_graphic_pane_vc_t2_ParamLimits

0x5a90,	// (0x00005a90) list_double_graphic_pane_vc_t2

0x0001,

0xadef,	// (0x0000adef) list_double_graphic_pane_vc_t_ParamLimits

0xadef,	// (0x0000adef) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb28f,	// (0x0000b28f) aid_size_cell_touch_ParamLimits

0xb28f,	// (0x0000b28f) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb3da,	// (0x0000b3da) touch_pane_ParamLimits

0xb3da,	// (0x0000b3da) touch_pane

0x128f,	// (0x0000128f) button_value_adjust_pane_cp2

0x1297,	// (0x00001297) button_value_adjust_pane_cp4

0x12b9,	// (0x000012b9) form_field_data_pane_cp2

0xbb98,	// (0x0000bb98) form_field_data_wide_pane_cp2

0x1b08,	// (0x00001b08) bg_scroll_pane_ParamLimits

0x1b27,	// (0x00001b27) scroll_handle_pane_ParamLimits

0x1b3b,	// (0x00001b3b) scroll_sc2_down_pane_ParamLimits

0x1b3b,	// (0x00001b3b) scroll_sc2_down_pane

0x1b62,	// (0x00001b62) scroll_sc2_up_pane_ParamLimits

0x1b62,	// (0x00001b62) scroll_sc2_up_pane

0xd4b4,	// (0x0000d4b4) grid_wheel_folder_pane_g1_ParamLimits

0xd4b4,	// (0x0000d4b4) grid_wheel_folder_pane_g1

0x221a,	// (0x0000221a) clock_nsta_pane_cp2_ParamLimits

0x221a,	// (0x0000221a) clock_nsta_pane_cp2

0x2b34,	// (0x00002b34) listscroll_midp_pane_ParamLimits

0xbff2,	// (0x0000bff2) midp_canvas_pane

0x2aa8,	// (0x00002aa8) nsta_clock_indic_pane

0x2b06,	// (0x00002b06) listscroll_form_pane_vc

0x2b22,	// (0x00002b22) listscroll_set_pane_vc_ParamLimits

0x2b22,	// (0x00002b22) listscroll_set_pane_vc

0xc9d9,	// (0x0000c9d9) clock_nsta_pane

0xca03,	// (0x0000ca03) indicator_nsta_pane

0x3576,	// (0x00003576) bg_popup_sub_pane_cp2_ParamLimits

0x358a,	// (0x0000358a) find_pane_cp2_ParamLimits

0x358a,	// (0x0000358a) find_pane_cp2

0x35a0,	// (0x000035a0) grid_toobar_pane_ParamLimits

0x37d5,	// (0x000037d5) list_form_gen_pane_vc_ParamLimits

0x37d5,	// (0x000037d5) list_form_gen_pane_vc

0x37eb,	// (0x000037eb) scroll_pane_cp8_vc_ParamLimits

0x37eb,	// (0x000037eb) scroll_pane_cp8_vc

0x3904,	// (0x00003904) data_form_wide_pane_vc_ParamLimits

0x3904,	// (0x00003904) data_form_wide_pane_vc

0x3910,	// (0x00003910) form_field_data_wide_pane_vc_g1

0x3918,	// (0x00003918) form_field_data_wide_pane_vc_t1_ParamLimits

0x3918,	// (0x00003918) form_field_data_wide_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp6_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp6_vc

0xce01,	// (0x0000ce01) list_midp_pane_ParamLimits

0x52c3,	// (0x000052c3) scroll_pane_cp16_ParamLimits

0x52c3,	// (0x000052c3) scroll_pane_cp16

0x3cb4,	// (0x00003cb4) button_value_adjust_pane_ParamLimits

0x3cb4,	// (0x00003cb4) button_value_adjust_pane

0xd0d4,	// (0x0000d0d4) button_value_adjust_pane_cp6_ParamLimits

0xd0d4,	// (0x0000d0d4) button_value_adjust_pane_cp6

0xd1ee,	// (0x0000d1ee) settings_code_pane_cp_ParamLimits

0xd1ee,	// (0x0000d1ee) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xaa8c,	// (0x0000aa8c) cell_touch_pane_g

0xd398,	// (0x0000d398) cell_touch_pane_cp_ParamLimits

0xd398,	// (0x0000d398) cell_touch_pane_cp

0xd3b4,	// (0x0000d3b4) cell_touch_pane_ParamLimits

0xd3b4,	// (0x0000d3b4) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x573c,	// (0x0000573c) list_set_graphic_pane_vc_g1_ParamLimits

0x573c,	// (0x0000573c) list_set_graphic_pane_vc_g1

0x5748,	// (0x00005748) list_set_graphic_pane_vc_g2_ParamLimits

0x5748,	// (0x00005748) list_set_graphic_pane_vc_g2

0x0001,

0xad7a,	// (0x0000ad7a) list_set_graphic_pane_vc_g_ParamLimits

0xad7a,	// (0x0000ad7a) list_set_graphic_pane_vc_g

0x5754,	// (0x00005754) text_primary_small_cp13_vc_ParamLimits

0x5754,	// (0x00005754) text_primary_small_cp13_vc

0x576c,	// (0x0000576c) list_set_graphic_pane_vc_ParamLimits

0x576c,	// (0x0000576c) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x5780,	// (0x00005780) setting_code_pane_vc_t1

0x578e,	// (0x0000578e) set_text_pane_vc_t1_ParamLimits

0x578e,	// (0x0000578e) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x57a9,	// (0x000057a9) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x57b3,	// (0x000057b3) setting_slider_graphic_pane_vc_g1

0x57bb,	// (0x000057bb) setting_slider_graphic_pane_vc_t1

0x57c9,	// (0x000057c9) setting_slider_graphic_pane_vc_t2

0x0001,

0xad7f,	// (0x0000ad7f) setting_slider_graphic_pane_vc_t

0x57d7,	// (0x000057d7) slider_set_pane_cp_vc

0x57df,	// (0x000057df) slider_set_pane_vc_g1

0x57e8,	// (0x000057e8) slider_set_pane_vc_g2

0x0006,

0xad84,	// (0x0000ad84) slider_set_pane_vc_g

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1_copy1

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2_copy1

0x5814,	// (0x00005814) set_opt_bg_pane_g3_copy1

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4_copy1

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5_copy1

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6_copy1

0x581e,	// (0x0000581e) set_opt_bg_pane_g7_copy1

0x5826,	// (0x00005826) set_opt_bg_pane_g8_copy1

0x5830,	// (0x00005830) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x583a,	// (0x0000583a) setting_slider_pane_vc_t1

0x57bb,	// (0x000057bb) setting_slider_pane_vc_t2

0x57c9,	// (0x000057c9) setting_slider_pane_vc_t3

0x0002,

0xad93,	// (0x0000ad93) setting_slider_pane_vc_t

0x57d7,	// (0x000057d7) slider_set_pane_vc

0x44f5,	// (0x000044f5) volume_set_pane_vc_g1

0x44fe,	// (0x000044fe) volume_set_pane_vc_g2

0x4507,	// (0x00004507) volume_set_pane_vc_g3

0x4510,	// (0x00004510) volume_set_pane_vc_g4

0x4519,	// (0x00004519) volume_set_pane_vc_g5

0x4522,	// (0x00004522) volume_set_pane_vc_g6

0x452b,	// (0x0000452b) volume_set_pane_vc_g7

0x4534,	// (0x00004534) volume_set_pane_vc_g8

0x453d,	// (0x0000453d) volume_set_pane_vc_g9

0x4546,	// (0x00004546) volume_set_pane_vc_g10

0x0009,

0xac31,	// (0x0000ac31) volume_set_pane_vc_g

0x5849,	// (0x00005849) volume_set_pane_vc

0x5851,	// (0x00005851) button_value_adjust_pane_cp1_vc

0x585b,	// (0x0000585b) list_highlight_pane_cp2_vc

0x5864,	// (0x00005864) list_set_pane_vc_ParamLimits

0x5864,	// (0x00005864) list_set_pane_vc

0x58ce,	// (0x000058ce) main_pane_set_vc_t1_ParamLimits

0x58ce,	// (0x000058ce) main_pane_set_vc_t1

0x58e3,	// (0x000058e3) main_pane_set_vc_t2_ParamLimits

0x58e3,	// (0x000058e3) main_pane_set_vc_t2

0x58f5,	// (0x000058f5) main_pane_set_vc_t3_ParamLimits

0x58f5,	// (0x000058f5) main_pane_set_vc_t3

0x5909,	// (0x00005909) main_pane_set_vc_t4_ParamLimits

0x5909,	// (0x00005909) main_pane_set_vc_t4

0x0003,

0xad9a,	// (0x0000ad9a) main_pane_set_vc_t_ParamLimits

0xad9a,	// (0x0000ad9a) main_pane_set_vc_t

0x591d,	// (0x0000591d) setting_code_pane_vc_ParamLimits

0x591d,	// (0x0000591d) setting_code_pane_vc

0x592e,	// (0x0000592e) setting_slider_graphic_pane_vc

0x592e,	// (0x0000592e) setting_slider_pane_vc

0x592e,	// (0x0000592e) setting_text_pane_vc

0x592e,	// (0x0000592e) setting_volume_pane_vc

0x5938,	// (0x00005938) scroll_pane_cp121_vc

0x127d,	// (0x0000127d) set_content_pane_vc

0x5b67,	// (0x00005b67) button_value_adjust_pane_g1

0x5b70,	// (0x00005b70) button_value_adjust_pane_g2

0x0001,

0xadf4,	// (0x0000adf4) button_value_adjust_pane_g

0x5b79,	// (0x00005b79) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5b79,	// (0x00005b79) form_field_slider_wide_pane_vc_t1

0x5b8d,	// (0x00005b8d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5b8d,	// (0x00005b8d) form_field_slider_wide_pane_vc_t2

0x0001,

0xadf9,	// (0x0000adf9) form_field_slider_wide_pane_vc_t_ParamLimits

0xadf9,	// (0x0000adf9) form_field_slider_wide_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp10_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10_vc

0x5ba1,	// (0x00005ba1) slider_cont_pane_cp1_vc_ParamLimits

0x5ba1,	// (0x00005ba1) slider_cont_pane_cp1_vc

0x57df,	// (0x000057df) slider_form_pane_g1_cp2

0x57e8,	// (0x000057e8) slider_form_pane_g2_cp2

0x5bbc,	// (0x00005bbc) form_field_slider_pane_vc_t3

0x5bca,	// (0x00005bca) form_field_slider_pane_vc_t4

0x5bd8,	// (0x00005bd8) slider_form_pane_vc_ParamLimits

0x5bd8,	// (0x00005bd8) slider_form_pane_vc

0x5be5,	// (0x00005be5) form_field_slider_pane_vc_t1_ParamLimits

0x5be5,	// (0x00005be5) form_field_slider_pane_vc_t1

0x5b8d,	// (0x00005b8d) form_field_slider_pane_vc_t2_ParamLimits

0x5b8d,	// (0x00005b8d) form_field_slider_pane_vc_t2

0x0001,

0xae09,	// (0x0000ae09) form_field_slider_pane_vc_t_ParamLimits

0xae09,	// (0x0000ae09) form_field_slider_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp9_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9_vc

0x5c01,	// (0x00005c01) slider_cont_pane_vc_ParamLimits

0x5c01,	// (0x00005c01) slider_cont_pane_vc

0x5c15,	// (0x00005c15) list_form_graphic_pane_cp_vc_ParamLimits

0x5c15,	// (0x00005c15) list_form_graphic_pane_cp_vc

0x3910,	// (0x00003910) form_field_popup_wide_pane_vc_g1

0x5c2a,	// (0x00005c2a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5c2a,	// (0x00005c2a) form_field_popup_wide_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp8_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp8_vc

0x5c41,	// (0x00005c41) list_form_wide_pane_vc_ParamLimits

0x5c41,	// (0x00005c41) list_form_wide_pane_vc

0x5c4d,	// (0x00005c4d) list_form_graphic_pane_vc_g1

0x5c55,	// (0x00005c55) list_form_graphic_pane_vc_t1_ParamLimits

0x5c55,	// (0x00005c55) list_form_graphic_pane_vc_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc

0x5c71,	// (0x00005c71) list_form_graphic_pane_vc_ParamLimits

0x5c71,	// (0x00005c71) list_form_graphic_pane_vc

0x3910,	// (0x00003910) form_field_popup_pane_vc_g1

0x5c87,	// (0x00005c87) form_field_popup_pane_vc_t1_ParamLimits

0x5c87,	// (0x00005c87) form_field_popup_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp7_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp7_vc

0x5c9e,	// (0x00005c9e) list_form_pane_vc_ParamLimits

0x5c9e,	// (0x00005c9e) list_form_pane_vc

0x5caa,	// (0x00005caa) data_form_pane_vc_t1_ParamLimits

0x5caa,	// (0x00005caa) data_form_pane_vc_t1

0x14ad,	// (0x000014ad) input_focus_pane_vc_g1

0x14b5,	// (0x000014b5) input_focus_pane_vc_g2

0x14bd,	// (0x000014bd) input_focus_pane_vc_g3

0x14c5,	// (0x000014c5) input_focus_pane_vc_g4

0x14cd,	// (0x000014cd) input_focus_pane_vc_g5

0x14d5,	// (0x000014d5) input_focus_pane_vc_g6

0x14dd,	// (0x000014dd) input_focus_pane_vc_g7

0x14e5,	// (0x000014e5) input_focus_pane_vc_g8

0x14ed,	// (0x000014ed) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xaa15,	// (0x0000aa15) input_focus_pane_vc_g

0x3904,	// (0x00003904) data_form_pane_vc_ParamLimits

0x3904,	// (0x00003904) data_form_pane_vc

0x3910,	// (0x00003910) form_field_data_pane_vc_g1

0x5cc5,	// (0x00005cc5) form_field_data_pane_vc_t1_ParamLimits

0x5cc5,	// (0x00005cc5) form_field_data_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_vc

0x5cdf,	// (0x00005cdf) button_value_adjust_pane_cp3_vc

0x5ce7,	// (0x00005ce7) button_value_adjust_pane_cp5_vc

0x5cef,	// (0x00005cef) form_field_data_pane_vc_ParamLimits

0x5cef,	// (0x00005cef) form_field_data_pane_vc

0x5d06,	// (0x00005d06) form_field_data_pane_vc_cp2

0x5d0e,	// (0x00005d0e) form_field_data_wide_pane_vc_ParamLimits

0x5d0e,	// (0x00005d0e) form_field_data_wide_pane_vc

0x5d24,	// (0x00005d24) form_field_data_wide_pane_vc_cp2

0x5d2c,	// (0x00005d2c) form_field_popup_pane_vc_ParamLimits

0x5d2c,	// (0x00005d2c) form_field_popup_pane_vc

0x5d43,	// (0x00005d43) form_field_popup_wide_pane_vc_ParamLimits

0x5d43,	// (0x00005d43) form_field_popup_wide_pane_vc

0x5d59,	// (0x00005d59) form_field_slider_pane_vc_ParamLimits

0x5d59,	// (0x00005d59) form_field_slider_pane_vc

0x5d6c,	// (0x00005d6c) form_field_slider_wide_pane_vc_ParamLimits

0x5d6c,	// (0x00005d6c) form_field_slider_wide_pane_vc

0xd3d2,	// (0x0000d3d2) grid_touch_1_pane_ParamLimits

0xd3d2,	// (0x0000d3d2) grid_touch_1_pane

0xd3e6,	// (0x0000d3e6) grid_touch_2_pane_ParamLimits

0xd3e6,	// (0x0000d3e6) grid_touch_2_pane

0x5e41,	// (0x00005e41) touch_pane_g1_ParamLimits

0x5e41,	// (0x00005e41) touch_pane_g1

0x5da3,	// (0x00005da3) cell_app_pane_cp_wide_ParamLimits

0x5da3,	// (0x00005da3) cell_app_pane_cp_wide

0x5db4,	// (0x00005db4) grid_popup_fast_wide_pane_ParamLimits

0x5db4,	// (0x00005db4) grid_popup_fast_wide_pane

0x5dc8,	// (0x00005dc8) scroll_pane_cp19_ParamLimits

0x5dc8,	// (0x00005dc8) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5ddc,	// (0x00005ddc) listscroll_popup_fast_wide_pane

0x16c1,	// (0x000016c1) grid_indicator_nsta_pane

0x5de4,	// (0x00005de4) clock_nsta_pane_g1

0x5ded,	// (0x00005ded) clock_nsta_pane_t1

0xd410,	// (0x0000d410) cell_indicator_nsta_pane_ParamLimits

0xd410,	// (0x0000d410) cell_indicator_nsta_pane

0x5e41,	// (0x00005e41) cell_indicator_nsta_pane_g1

0xd429,	// (0x0000d429) cell_indicator_nsta_pane_g2

0x0001,

0xf269,	// (0x0000f269) cell_indicator_nsta_pane_g

0x5e65,	// (0x00005e65) clock_nsta_pane_cp

0x5e6d,	// (0x00005e6d) indicator_nsta_pane_cp

0x5e76,	// (0x00005e76) nsta_clock_indic_pane_g1

0x0671,	// (0x00000671) grid_indicator_pane

0x1c57,	// (0x00001c57) scroll_pane_cp29

0x2147,	// (0x00002147) indicator_nsta_pane_cp2_ParamLimits

0x2147,	// (0x00002147) indicator_nsta_pane_cp2

0x04fd,	// (0x000004fd) main_apps_wheel_pane

0x3b3b,	// (0x00003b3b) form_midp_field_text_pane_ParamLimits

0x3c86,	// (0x00003c86) scroll_bar_cp050_ParamLimits

0x5edf,	// (0x00005edf) cell_indicator_pane_ParamLimits

0x5edf,	// (0x00005edf) cell_indicator_pane

0x5ef6,	// (0x00005ef6) cell_indicator_pane_g1

0xd43e,	// (0x0000d43e) grid_wheel_folder_pane_ParamLimits

0xd43e,	// (0x0000d43e) grid_wheel_folder_pane

0xd44c,	// (0x0000d44c) list_wheel_apps_pane_ParamLimits

0xd44c,	// (0x0000d44c) list_wheel_apps_pane

0xd45a,	// (0x0000d45a) main_apps_wheel_pane_g1_ParamLimits

0xd45a,	// (0x0000d45a) main_apps_wheel_pane_g1

0xd466,	// (0x0000d466) main_apps_wheel_pane_g2_ParamLimits

0xd466,	// (0x0000d466) main_apps_wheel_pane_g2

0x0001,

0xf26e,	// (0x0000f26e) main_apps_wheel_pane_g_ParamLimits

0xf26e,	// (0x0000f26e) main_apps_wheel_pane_g

0xd474,	// (0x0000d474) main_apps_wheel_pane_t1_ParamLimits

0xd474,	// (0x0000d474) main_apps_wheel_pane_t1

0xd488,	// (0x0000d488) list_wheel_apps_pane_g1

0xd490,	// (0x0000d490) list_wheel_apps_pane_g2

0xd498,	// (0x0000d498) list_wheel_apps_pane_g3

0xd4a0,	// (0x0000d4a0) list_wheel_apps_pane_g4

0xd4aa,	// (0x0000d4aa) list_wheel_apps_pane_g5

0x0004,

0xf273,	// (0x0000f273) list_wheel_apps_pane_g

0x2447,	// (0x00002447) navi_icon_text_pane

0xc8cd,	// (0x0000c8cd) aid_fill_nsta

0x5fb9,	// (0x00005fb9) navi_icon_text_pane_g1

0x5fc5,	// (0x00005fc5) navi_icon_text_pane_t1

0xbfda,	// (0x0000bfda) list_set_graphic_pane_t1_ParamLimits

0xbfda,	// (0x0000bfda) list_set_graphic_pane_t1

0x43d5,	// (0x000043d5) popup_midp_note_alarm_window_t6_ParamLimits

0x43d5,	// (0x000043d5) popup_midp_note_alarm_window_t6

0x43e7,	// (0x000043e7) popup_midp_note_alarm_window_t7_ParamLimits

0x43e7,	// (0x000043e7) popup_midp_note_alarm_window_t7

0x43f9,	// (0x000043f9) popup_midp_note_alarm_window_t8_ParamLimits

0x43f9,	// (0x000043f9) popup_midp_note_alarm_window_t8

0x440b,	// (0x0000440b) popup_midp_note_alarm_window_t9_ParamLimits

0x440b,	// (0x0000440b) popup_midp_note_alarm_window_t9

0x441d,	// (0x0000441d) popup_midp_note_alarm_window_t10_ParamLimits

0x441d,	// (0x0000441d) popup_midp_note_alarm_window_t10

0x442f,	// (0x0000442f) popup_midp_note_alarm_window_t11_ParamLimits

0x442f,	// (0x0000442f) popup_midp_note_alarm_window_t11

0x4441,	// (0x00004441) scroll_pane_cp17_ParamLimits

0x4441,	// (0x00004441) scroll_pane_cp17

0x44f5,	// (0x000044f5) volume_small_pane_cp_g1

0x5fd7,	// (0x00005fd7) volume_small_pane_cp_g2

0x5fe0,	// (0x00005fe0) volume_small_pane_cp_g3

0x5fe9,	// (0x00005fe9) volume_small_pane_cp_g4

0x5ff2,	// (0x00005ff2) volume_small_pane_cp_g5

0x5ffb,	// (0x00005ffb) volume_small_pane_cp_g6

0x6004,	// (0x00006004) volume_small_pane_cp_g7

0x600d,	// (0x0000600d) volume_small_pane_cp_g8

0x6016,	// (0x00006016) volume_small_pane_cp_g9

0x601f,	// (0x0000601f) volume_small_pane_cp_g10

0x2696,	// (0x00002696) midp_ticker_pane_g1_ParamLimits

0x26a2,	// (0x000026a2) midp_ticker_pane_g2_ParamLimits

0xaae1,	// (0x0000aae1) midp_ticker_pane_g_ParamLimits

0x26ae,	// (0x000026ae) midp_ticker_pane_t1_ParamLimits

0xc8f1,	// (0x0000c8f1) aid_fill_nsta_2

0x3c72,	// (0x00003c72) list_form2_midp_pane

0x5037,	// (0x00005037) midp_editing_number_pane_ParamLimits

0x5046,	// (0x00005046) midp_ticker_pane_ParamLimits

0x6028,	// (0x00006028) form2_midp_field_pane

0x604c,	// (0x0000604c) scroll_pane_cp51

0x606c,	// (0x0000606c) form2_midp_button_pane_ParamLimits

0x606c,	// (0x0000606c) form2_midp_button_pane

0x607e,	// (0x0000607e) form2_midp_content_pane_ParamLimits

0x607e,	// (0x0000607e) form2_midp_content_pane

0x6098,	// (0x00006098) form2_midp_field_choice_group_pane

0x60a0,	// (0x000060a0) form2_midp_field_pane_g1

0x60a8,	// (0x000060a8) form2_midp_field_pane_g2

0x60b0,	// (0x000060b0) form2_midp_field_pane_g3

0x60b8,	// (0x000060b8) form2_midp_field_pane_g4

0x0003,

0xae59,	// (0x0000ae59) form2_midp_field_pane_g

0x60c0,	// (0x000060c0) form2_midp_gauge_slider_pane

0x60c8,	// (0x000060c8) form2_midp_gauge_wait_pane

0x60d0,	// (0x000060d0) form2_midp_image_pane_ParamLimits

0x60d0,	// (0x000060d0) form2_midp_image_pane

0x60eb,	// (0x000060eb) form2_midp_label_pane_ParamLimits

0x60eb,	// (0x000060eb) form2_midp_label_pane

0xd4dd,	// (0x0000d4dd) form2_midp_label_pane_cp_ParamLimits

0xd4dd,	// (0x0000d4dd) form2_midp_label_pane_cp

0x6125,	// (0x00006125) form2_midp_string_pane_ParamLimits

0x6125,	// (0x00006125) form2_midp_string_pane

0xd4fc,	// (0x0000d4fc) form2_midp_text_pane_ParamLimits

0xd4fc,	// (0x0000d4fc) form2_midp_text_pane

0x6154,	// (0x00006154) form2_midp_time_pane

0x6164,	// (0x00006164) input_focus_pane_cp51_ParamLimits

0x6164,	// (0x00006164) input_focus_pane_cp51

0x617c,	// (0x0000617c) form2_midp_label_pane_t1_ParamLimits

0x617c,	// (0x0000617c) form2_midp_label_pane_t1

0xd515,	// (0x0000d515) form2_mdip_text_pane_t1_ParamLimits

0xd515,	// (0x0000d515) form2_mdip_text_pane_t1

0x61dc,	// (0x000061dc) form2_midp_time_pane_t1

0x61f7,	// (0x000061f7) form2_midp_gauge_slider_pane_t1

0xd530,	// (0x0000d530) form2_midp_gauge_slider_pane_t2

0xd542,	// (0x0000d542) form2_midp_gauge_slider_pane_t3

0x0002,

0xf283,	// (0x0000f283) form2_midp_gauge_slider_pane_t

0x622d,	// (0x0000622d) form2_midp_slider_pane

0x6239,	// (0x00006239) form2_midp_gauge_wait_pane_t1

0x6247,	// (0x00006247) form2_midp_wait_pane_ParamLimits

0x6247,	// (0x00006247) form2_midp_wait_pane

0xd554,	// (0x0000d554) list_single_2graphic_pane_cp4_ParamLimits

0xd554,	// (0x0000d554) list_single_2graphic_pane_cp4

0xcd79,	// (0x0000cd79) list_single_midp_graphic_pane_cp_ParamLimits

0xcd79,	// (0x0000cd79) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x62a1,	// (0x000062a1) list_single_2graphic_pane_g1_cp4

0x62a9,	// (0x000062a9) list_single_2graphic_pane_g2_cp4

0x62b1,	// (0x000062b1) list_single_2graphic_pane_t1_cp4

0x04fd,	// (0x000004fd) list_highlight_pane_cp21

0x62c0,	// (0x000062c0) list_single_midp_graphic_pane_g4_cp

0x62cf,	// (0x000062cf) list_single_midp_graphic_pane_t1_cp

0xd568,	// (0x0000d568) form2_mdip_string_pane_t1_ParamLimits

0xd568,	// (0x0000d568) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5_ParamLimits

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5

0x2b34,	// (0x00002b34) midp_form_pane_ParamLimits

0x04fd,	// (0x000004fd) main_apps_wheel_pane_ParamLimits

0xc629,	// (0x0000c629) popup_preview_window_ParamLimits

0xc629,	// (0x0000c629) popup_preview_window

0x309c,	// (0x0000309c) popup_touch_info_window_ParamLimits

0x309c,	// (0x0000309c) popup_touch_info_window

0x30ba,	// (0x000030ba) popup_touch_menu_window_ParamLimits

0x30ba,	// (0x000030ba) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x63dd,	// (0x000063dd) list_touch_menu_pane

0x63e5,	// (0x000063e5) list_single_touch_menu_pane_ParamLimits

0x63e5,	// (0x000063e5) list_single_touch_menu_pane

0x63fb,	// (0x000063fb) list_single_touch_menu_pane_t1

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7

0x6409,	// (0x00006409) heading_sub_pane

0x6411,	// (0x00006411) list_touch_info_pane_ParamLimits

0x6411,	// (0x00006411) list_touch_info_pane

0x6420,	// (0x00006420) list_single_touch_info_pane_ParamLimits

0x6420,	// (0x00006420) list_single_touch_info_pane

0x6432,	// (0x00006432) list_single_touch_info_pane_t1

0x6440,	// (0x00006440) list_single_touch_info_pane_t2

0x0001,

0xae70,	// (0x0000ae70) list_single_touch_info_pane_t

0x25c7,	// (0x000025c7) bg_popup_heading_pane_cp

0x644e,	// (0x0000644e) heading_sub_pane_t1

0x3816,	// (0x00003816) bg_popup_preview_window_pane_cp_ParamLimits

0x3816,	// (0x00003816) bg_popup_preview_window_pane_cp

0x6409,	// (0x00006409) heading_preview_pane

0x6411,	// (0x00006411) list_preview_pane_ParamLimits

0x6411,	// (0x00006411) list_preview_pane

0x645c,	// (0x0000645c) popup_preview_window_g1

0x6420,	// (0x00006420) list_single_preview_pane_ParamLimits

0x6420,	// (0x00006420) list_single_preview_pane

0x6464,	// (0x00006464) list_single_preview_pane_g1

0x646c,	// (0x0000646c) list_single_preview_pane_t1

0x6432,	// (0x00006432) list_single_preview_pane_t2

0x0001,

0xae75,	// (0x0000ae75) list_single_preview_pane_t

0x647a,	// (0x0000647a) bg_popup_heading_pane_cp2_ParamLimits

0x647a,	// (0x0000647a) bg_popup_heading_pane_cp2

0x6490,	// (0x00006490) heading_preview_pane_g1

0x6498,	// (0x00006498) heading_preview_pane_t1_ParamLimits

0x6498,	// (0x00006498) heading_preview_pane_t1

0x0694,	// (0x00000694) soft_indicator_pane_t1_ParamLimits

0x0d87,	// (0x00000d87) scroll_pane_ParamLimits

0x1b50,	// (0x00001b50) scroll_sc2_left_pane

0x1b59,	// (0x00001b59) scroll_sc2_right_pane

0x1b78,	// (0x00001b78) scroll_bg_pane_g1_ParamLimits

0x1b8d,	// (0x00001b8d) scroll_bg_pane_g2_ParamLimits

0x1ba5,	// (0x00001ba5) scroll_bg_pane_g3_ParamLimits

0xaa6c,	// (0x0000aa6c) scroll_bg_pane_g_ParamLimits

0x1b78,	// (0x00001b78) scroll_handle_pane_g1_ParamLimits

0x1bc7,	// (0x00001bc7) scroll_handle_pane_g2_ParamLimits

0x1ba5,	// (0x00001ba5) scroll_handle_pane_g3_ParamLimits

0xaa73,	// (0x0000aa73) scroll_handle_pane_g_ParamLimits

0x2b64,	// (0x00002b64) popup_choice_list_window_ParamLimits

0x2b64,	// (0x00002b64) popup_choice_list_window

0x3582,	// (0x00003582) choice_list_pane

0x364a,	// (0x0000364a) cell_toolbar_pane_t1

0x3672,	// (0x00003672) toolbar_button_pane_ParamLimits

0x4a5f,	// (0x00004a5f) ai_gene_pane_1_t2_ParamLimits

0x4a5f,	// (0x00004a5f) ai_gene_pane_1_t2

0x0001,

0xac8d,	// (0x0000ac8d) ai_gene_pane_1_t_ParamLimits

0xac8d,	// (0x0000ac8d) ai_gene_pane_1_t

0x64b5,	// (0x000064b5) scroll_sc2_left_pane_g1

0x64b5,	// (0x000064b5) scroll_sc2_right_pane_g1

0x2b34,	// (0x00002b34) bg_popup_sub_pane_cp10

0x64bf,	// (0x000064bf) list_choice_list_pane

0x64d8,	// (0x000064d8) list_single_choice_list_pane_ParamLimits

0x64d8,	// (0x000064d8) list_single_choice_list_pane

0x64eb,	// (0x000064eb) list_single_choice_list_pane_g1

0x1692,	// (0x00001692) list_single_choice_list_pane_t1_ParamLimits

0x1692,	// (0x00001692) list_single_choice_list_pane_t1

0x64f3,	// (0x000064f3) choice_list_pane_g1

0x64fb,	// (0x000064fb) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18b9,	// (0x000018b9) title_pane_stacon_g2_ParamLimits

0x18b9,	// (0x000018b9) title_pane_stacon_g2

0x0002,

0xaa52,	// (0x0000aa52) title_pane_stacon_g_ParamLimits

0xaa52,	// (0x0000aa52) title_pane_stacon_g

0x25c7,	// (0x000025c7) cursor_press_pane

0xc2f4,	// (0x0000c2f4) popup_fep_hwr_window_ParamLimits

0xc2f4,	// (0x0000c2f4) popup_fep_hwr_window

0x2c8a,	// (0x00002c8a) popup_fep_vkb_window_ParamLimits

0x2c8a,	// (0x00002c8a) popup_fep_vkb_window

0x6509,	// (0x00006509) cursor_press_pane_g1

0x0002,

0xf297,	// (0x0000f297) fep_vkb_side_pane_g_ParamLimits

0x654a,	// (0x0000654a) fep_hwr_candidate_pane_ParamLimits

0x654a,	// (0x0000654a) fep_hwr_candidate_pane

0x6574,	// (0x00006574) fep_hwr_side_pane_ParamLimits

0x6574,	// (0x00006574) fep_hwr_side_pane

0x6594,	// (0x00006594) fep_hwr_top_pane_ParamLimits

0x6594,	// (0x00006594) fep_hwr_top_pane

0x65ac,	// (0x000065ac) fep_hwr_write_pane_ParamLimits

0x65ac,	// (0x000065ac) fep_hwr_write_pane

0xf297,	// (0x0000f297) fep_vkb_side_pane_g

0x65e6,	// (0x000065e6) fep_hwr_top_pane_g1

0x65f8,	// (0x000065f8) fep_hwr_top_pane_g2

0x660a,	// (0x0000660a) fep_hwr_top_pane_g3

0x0002,

0xae7a,	// (0x0000ae7a) fep_hwr_top_pane_g

0x661f,	// (0x0000661f) fep_hwr_top_text_pane

0x1d1e,	// (0x00001d1e) fep_hwr_top_text_pane_g1

0x66f7,	// (0x000066f7) fep_hwr_top_text_pane_t1

0x6747,	// (0x00006747) fep_hwr_candidate_pane_g1

0x69c0,	// (0x000069c0) fep_vkb_keypad_pane_g3_ParamLimits

0x69c0,	// (0x000069c0) fep_vkb_keypad_pane_g3

0x69e8,	// (0x000069e8) fep_vkb_keypad_pane_g4_ParamLimits

0x69e8,	// (0x000069e8) fep_vkb_keypad_pane_g4

0x6a57,	// (0x00006a57) fep_vkb_bottom_pane_g2_ParamLimits

0x6a57,	// (0x00006a57) fep_vkb_bottom_pane_g2

0x0001,

0xaea5,	// (0x0000aea5) fep_vkb_bottom_pane_g_ParamLimits

0xaea5,	// (0x0000aea5) fep_vkb_bottom_pane_g

0x64b5,	// (0x000064b5) cell_vkb_side_pane_g2

0x0001,

0xaeaf,	// (0x0000aeaf) cell_vkb_side_pane_g

0x6ae2,	// (0x00006ae2) cell_vkb_side_pane_t1

0x6af0,	// (0x00006af0) cell_vkb_side_pane_t1_copy1

0x64b5,	// (0x000064b5) bg_fep_vkb_candidate_pane_g2

0x6c1c,	// (0x00006c1c) cell_vkb_candidate_pane_ParamLimits

0x677b,	// (0x0000677b) aid_size_cell_vkb_ParamLimits

0x677b,	// (0x0000677b) aid_size_cell_vkb

0x6c1c,	// (0x00006c1c) cell_vkb_candidate_pane

0x6c50,	// (0x00006c50) bg_popup_fep_shadow_pane_g1

0xd639,	// (0x0000d639) fep_vkb_bottom_pane_ParamLimits

0xd639,	// (0x0000d639) fep_vkb_bottom_pane

0x683f,	// (0x0000683f) fep_vkb_candidate_pane_ParamLimits

0x683f,	// (0x0000683f) fep_vkb_candidate_pane

0xd65e,	// (0x0000d65e) fep_vkb_keypad_pane_ParamLimits

0xd65e,	// (0x0000d65e) fep_vkb_keypad_pane

0xd69a,	// (0x0000d69a) fep_vkb_side_pane_ParamLimits

0xd69a,	// (0x0000d69a) fep_vkb_side_pane

0xd6d6,	// (0x0000d6d6) fep_vkb_top_pane_ParamLimits

0xd6d6,	// (0x0000d6d6) fep_vkb_top_pane

0x6919,	// (0x00006919) fep_vkb_top_pane_g1_ParamLimits

0x6919,	// (0x00006919) fep_vkb_top_pane_g1

0x6928,	// (0x00006928) fep_vkb_top_pane_g2_ParamLimits

0x6928,	// (0x00006928) fep_vkb_top_pane_g2

0x6937,	// (0x00006937) fep_vkb_top_pane_g3_ParamLimits

0x6937,	// (0x00006937) fep_vkb_top_pane_g3

0x0003,

0xae95,	// (0x0000ae95) fep_vkb_top_pane_g_ParamLimits

0xae95,	// (0x0000ae95) fep_vkb_top_pane_g

0x6955,	// (0x00006955) fep_vkb_top_text_pane_ParamLimits

0x6955,	// (0x00006955) fep_vkb_top_text_pane

0xd712,	// (0x0000d712) fep_vkb_side_pane_g1_ParamLimits

0xd712,	// (0x0000d712) fep_vkb_side_pane_g1

0x69af,	// (0x000069af) grid_vkb_side_pane_ParamLimits

0x69af,	// (0x000069af) grid_vkb_side_pane

0x6c58,	// (0x00006c58) bg_popup_fep_shadow_pane_g2

0x6c61,	// (0x00006c61) bg_popup_fep_shadow_pane_g3

0x6c69,	// (0x00006c69) bg_popup_fep_shadow_pane_g4

0x6c72,	// (0x00006c72) bg_popup_fep_shadow_pane_g5

0x6c7c,	// (0x00006c7c) bg_popup_fep_shadow_pane_g6

0x6c84,	// (0x00006c84) bg_popup_fep_shadow_pane_g7

0x14cd,	// (0x000014cd) bg_popup_fep_shadow_pane_g8

0x6a06,	// (0x00006a06) grid_vkb_keypad_number_pane_ParamLimits

0x6a06,	// (0x00006a06) grid_vkb_keypad_number_pane

0x6a16,	// (0x00006a16) grid_vkb_keypad_pane_ParamLimits

0x6a16,	// (0x00006a16) grid_vkb_keypad_pane

0x6a3c,	// (0x00006a3c) fep_vkb_bottom_pane_g1_ParamLimits

0x6a3c,	// (0x00006a3c) fep_vkb_bottom_pane_g1

0x6a65,	// (0x00006a65) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6a65,	// (0x00006a65) grid_vkb_keypad_bottom_left_pane

0x6a7a,	// (0x00006a7a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6a7a,	// (0x00006a7a) grid_vkb_keypad_bottom_right_pane

0x6a8f,	// (0x00006a8f) fep_vkb_top_text_pane_g1

0xd759,	// (0x0000d759) fep_vkb_top_text_pane_t1

0xd76b,	// (0x0000d76b) cell_vkb_side_pane_ParamLimits

0xd76b,	// (0x0000d76b) cell_vkb_side_pane

0x64b5,	// (0x000064b5) cell_vkb_side_pane_g1

0x6afe,	// (0x00006afe) cell_vkb_keypad_pane_ParamLimits

0x6afe,	// (0x00006afe) cell_vkb_keypad_pane

0x6b73,	// (0x00006b73) cell_vkb_keypad_pane_g1

0x0008,

0xaec2,	// (0x0000aec2) bg_popup_fep_shadow_pane_g

0x64b5,	// (0x000064b5) cell_hwr_side_pane_g1

0x64b5,	// (0x000064b5) cell_hwr_side_pane_g2

0x6b7d,	// (0x00006b7d) cell_vkb_keypad_pane_t1

0xd781,	// (0x0000d781) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd781,	// (0x0000d781) cell_vkb_keypad_bottom_left_pane

0xd796,	// (0x0000d796) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd796,	// (0x0000d796) cell_vkb_keypad_bottom_right_pane

0x64b5,	// (0x000064b5) cell_vkb_keypad_bottom_left_pane_g1

0x64b5,	// (0x000064b5) cell_vkb_keypad_bottom_right_pane_g1

0x6be1,	// (0x00006be1) cell_vkb_keypad_number_pane_ParamLimits

0x6be1,	// (0x00006be1) cell_vkb_keypad_number_pane

0x6c00,	// (0x00006c00) cell_vkb_keypad_number_pane_g1

0x6c0a,	// (0x00006c0a) cell_vkb_keypad_number_pane_g2

0x6c13,	// (0x00006c13) cell_vkb_keypad_number_pane_g3

0x0002,

0xaeb4,	// (0x0000aeb4) cell_vkb_keypad_number_pane_g

0x6b7d,	// (0x00006b7d) cell_vkb_keypad_number_pane_t1

0x6c37,	// (0x00006c37) fep_vkb_candidate_pane_g1

0x0001,

0xaeaf,	// (0x0000aeaf) cell_hwr_side_pane_g

0x6c96,	// (0x00006c96) cell_hwr_side_pane_t1

0x6ca4,	// (0x00006ca4) cell_hwr_side_pane_t1_copy1

0x6947,	// (0x00006947) cell_hwr_candidate_pane_g1

0x6cf4,	// (0x00006cf4) cell_hwr_candidate_pane_t1

0x64b5,	// (0x000064b5) cell_vkb_candidate_pane_g2

0x6d48,	// (0x00006d48) cell_vkb_candidate_pane_t1

0x6511,	// (0x00006511) bg_popup_fep_shadow_pane_ParamLimits

0x6511,	// (0x00006511) bg_popup_fep_shadow_pane

0x65c6,	// (0x000065c6) bg_fep_hwr_top_pane_g4

0x6634,	// (0x00006634) bg_hwr_side_pane_g1_ParamLimits

0x6634,	// (0x00006634) bg_hwr_side_pane_g1

0xd5f2,	// (0x0000d5f2) cell_hwr_side_pane_ParamLimits

0xd5f2,	// (0x0000d5f2) cell_hwr_side_pane

0x66a2,	// (0x000066a2) fep_hwr_write_pane_g1_ParamLimits

0x66a2,	// (0x000066a2) fep_hwr_write_pane_g1

0x66af,	// (0x000066af) fep_hwr_write_pane_g2_ParamLimits

0x66af,	// (0x000066af) fep_hwr_write_pane_g2

0x66bc,	// (0x000066bc) fep_hwr_write_pane_g3_ParamLimits

0x66bc,	// (0x000066bc) fep_hwr_write_pane_g3

0xd612,	// (0x0000d612) fep_hwr_write_pane_g4_ParamLimits

0xd612,	// (0x0000d612) fep_hwr_write_pane_g4

0x0005,

0xf28a,	// (0x0000f28a) fep_hwr_write_pane_g_ParamLimits

0xf28a,	// (0x0000f28a) fep_hwr_write_pane_g

0x65c6,	// (0x000065c6) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65c6,	// (0x000065c6) bg_fep_hwr_candidate_pane_g2

0x6705,	// (0x00006705) cell_hwr_candidate_pane_ParamLimits

0x6705,	// (0x00006705) cell_hwr_candidate_pane

0x6747,	// (0x00006747) fep_hwr_candidate_pane_g1_ParamLimits

0x67a9,	// (0x000067a9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x67a9,	// (0x000067a9) bg_popup_fep_shadow_pane_cp2

0x6947,	// (0x00006947) fep_vkb_top_pane_g4_ParamLimits

0x6947,	// (0x00006947) fep_vkb_top_pane_g4

0x698d,	// (0x0000698d) fep_vkb_side_pane_g2_ParamLimits

0x698d,	// (0x0000698d) fep_vkb_side_pane_g2

0xbac6,	// (0x0000bac6) list_setting_pane_t4_ParamLimits

0xbac6,	// (0x0000bac6) list_setting_pane_t4

0xbb40,	// (0x0000bb40) list_setting_number_pane_t5_ParamLimits

0xbb40,	// (0x0000bb40) list_setting_number_pane_t5

0xbe53,	// (0x0000be53) list_double_heading_pane_cp2_ParamLimits

0xbe53,	// (0x0000be53) list_double_heading_pane_cp2

0x139b,	// (0x0000139b) list_double_heading_pane_g1_cp2_ParamLimits

0x139b,	// (0x0000139b) list_double_heading_pane_g1_cp2

0x13a7,	// (0x000013a7) list_double_heading_pane_g2_cp2_ParamLimits

0x13a7,	// (0x000013a7) list_double_heading_pane_g2_cp2

0x6d56,	// (0x00006d56) list_double_heading_pane_t1_cp2_ParamLimits

0x6d56,	// (0x00006d56) list_double_heading_pane_t1_cp2

0x6d6c,	// (0x00006d6c) list_double_heading_pane_t2_cp2_ParamLimits

0x6d6c,	// (0x00006d6c) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02

0x6d7e,	// (0x00006d7e) list_preview_fixed_pane

0x6dc4,	// (0x00006dc4) list_empty_pane_fp_ParamLimits

0x6dc4,	// (0x00006dc4) list_empty_pane_fp

0x6dc4,	// (0x00006dc4) list_single_cale_day_pane_fp_ParamLimits

0x6dc4,	// (0x00006dc4) list_single_cale_day_pane_fp

0x6dc4,	// (0x00006dc4) list_single_graphic_heading_pane_fp_ParamLimits

0x6dc4,	// (0x00006dc4) list_single_graphic_heading_pane_fp

0x6dc4,	// (0x00006dc4) list_single_graphic_pane_fp_ParamLimits

0x6dc4,	// (0x00006dc4) list_single_graphic_pane_fp

0x6dc4,	// (0x00006dc4) list_single_heading_pane_fp_ParamLimits

0x6dc4,	// (0x00006dc4) list_single_heading_pane_fp

0x6dc4,	// (0x00006dc4) list_single_pane_fp_ParamLimits

0x6dc4,	// (0x00006dc4) list_single_pane_fp

0x6dd9,	// (0x00006dd9) list_single_pane_fp_g1_ParamLimits

0x6dd9,	// (0x00006dd9) list_single_pane_fp_g1

0x139b,	// (0x0000139b) list_single_pane_fp_g2_ParamLimits

0x139b,	// (0x0000139b) list_single_pane_fp_g2

0x13a7,	// (0x000013a7) list_single_pane_fp_g3_ParamLimits

0x13a7,	// (0x000013a7) list_single_pane_fp_g3

0x6de5,	// (0x00006de5) list_single_pane_fp_g4_ParamLimits

0x6de5,	// (0x00006de5) list_single_pane_fp_g4

0x0003,

0xaee3,	// (0x0000aee3) list_single_pane_fp_g_ParamLimits

0xaee3,	// (0x0000aee3) list_single_pane_fp_g

0x6df1,	// (0x00006df1) list_single_pane_fp_t1_ParamLimits

0x6df1,	// (0x00006df1) list_single_pane_fp_t1

0x6e08,	// (0x00006e08) list_single_graphic_pane_fp_g1_ParamLimits

0x6e08,	// (0x00006e08) list_single_graphic_pane_fp_g1

0x6dd9,	// (0x00006dd9) list_single_graphic_pane_fp_g2_ParamLimits

0x6dd9,	// (0x00006dd9) list_single_graphic_pane_fp_g2

0x139b,	// (0x0000139b) list_single_graphic_pane_fp_g3_ParamLimits

0x139b,	// (0x0000139b) list_single_graphic_pane_fp_g3

0x13a7,	// (0x000013a7) list_single_graphic_pane_fp_g4_ParamLimits

0x13a7,	// (0x000013a7) list_single_graphic_pane_fp_g4

0x6de5,	// (0x00006de5) list_single_graphic_pane_fp_g5_ParamLimits

0x6de5,	// (0x00006de5) list_single_graphic_pane_fp_g5

0x0004,

0xaeec,	// (0x0000aeec) list_single_graphic_pane_fp_g_ParamLimits

0xaeec,	// (0x0000aeec) list_single_graphic_pane_fp_g

0x6e14,	// (0x00006e14) list_single_graphic_pane_fp_t1_ParamLimits

0x6e14,	// (0x00006e14) list_single_graphic_pane_fp_t1

0x6e08,	// (0x00006e08) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6e08,	// (0x00006e08) list_single_graphic_heading_pane_fp_g1

0x6dd9,	// (0x00006dd9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6dd9,	// (0x00006dd9) list_single_graphic_heading_pane_fp_g2

0x139b,	// (0x0000139b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x139b,	// (0x0000139b) list_single_graphic_heading_pane_fp_g3

0x13a7,	// (0x000013a7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x13a7,	// (0x000013a7) list_single_graphic_heading_pane_fp_g4

0x6de5,	// (0x00006de5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6de5,	// (0x00006de5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xaeec,	// (0x0000aeec) list_single_graphic_heading_pane_fp_g_ParamLimits

0xaeec,	// (0x0000aeec) list_single_graphic_heading_pane_fp_g

0x6e2a,	// (0x00006e2a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6e2a,	// (0x00006e2a) list_single_graphic_heading_pane_fp_t1

0x6e40,	// (0x00006e40) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6e40,	// (0x00006e40) list_single_graphic_heading_pane_fp_t2

0x0001,

0xaef7,	// (0x0000aef7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xaef7,	// (0x0000aef7) list_single_graphic_heading_pane_fp_t

0x6e52,	// (0x00006e52) list_single_cale_day_pane_fp_g1_ParamLimits

0x6e52,	// (0x00006e52) list_single_cale_day_pane_fp_g1

0x6e8a,	// (0x00006e8a) list_single_cale_day_pane_fp_g2_ParamLimits

0x6e8a,	// (0x00006e8a) list_single_cale_day_pane_fp_g2

0x6e96,	// (0x00006e96) list_single_cale_day_pane_fp_g3_ParamLimits

0x6e96,	// (0x00006e96) list_single_cale_day_pane_fp_g3

0x6ebe,	// (0x00006ebe) list_single_cale_day_pane_fp_g4_ParamLimits

0x6ebe,	// (0x00006ebe) list_single_cale_day_pane_fp_g4

0x6ee2,	// (0x00006ee2) list_single_cale_day_pane_fp_g5_ParamLimits

0x6ee2,	// (0x00006ee2) list_single_cale_day_pane_fp_g5

0x0004,

0xaefc,	// (0x0000aefc) list_single_cale_day_pane_fp_g_ParamLimits

0xaefc,	// (0x0000aefc) list_single_cale_day_pane_fp_g

0x6f06,	// (0x00006f06) list_single_cale_day_pane_fp_t1_ParamLimits

0x6f06,	// (0x00006f06) list_single_cale_day_pane_fp_t1

0x6f2c,	// (0x00006f2c) list_single_cale_day_pane_fp_t2_ParamLimits

0x6f2c,	// (0x00006f2c) list_single_cale_day_pane_fp_t2

0x6f45,	// (0x00006f45) list_single_cale_day_pane_fp_t3_ParamLimits

0x6f45,	// (0x00006f45) list_single_cale_day_pane_fp_t3

0x0002,

0xaf07,	// (0x0000af07) list_single_cale_day_pane_fp_t_ParamLimits

0xaf07,	// (0x0000af07) list_single_cale_day_pane_fp_t

0x6dd9,	// (0x00006dd9) list_empty_pane_fp_g1_ParamLimits

0x6dd9,	// (0x00006dd9) list_empty_pane_fp_g1

0x6f5e,	// (0x00006f5e) list_empty_pane_fp_t1

0x6f6c,	// (0x00006f6c) list_empty_pane_fp_t2

0x0001,

0xaf0e,	// (0x0000af0e) list_empty_pane_fp_t

0x6dd9,	// (0x00006dd9) list_single_heading_pane_fp_g1_ParamLimits

0x6dd9,	// (0x00006dd9) list_single_heading_pane_fp_g1

0x139b,	// (0x0000139b) list_single_heading_pane_fp_g2_ParamLimits

0x139b,	// (0x0000139b) list_single_heading_pane_fp_g2

0x13a7,	// (0x000013a7) list_single_heading_pane_fp_g3_ParamLimits

0x13a7,	// (0x000013a7) list_single_heading_pane_fp_g3

0x0002,

0xaf13,	// (0x0000af13) list_single_heading_pane_fp_g_ParamLimits

0xaf13,	// (0x0000af13) list_single_heading_pane_fp_g

0x6f7a,	// (0x00006f7a) list_single_heading_pane_fp_t1_ParamLimits

0x6f7a,	// (0x00006f7a) list_single_heading_pane_fp_t1

0x6f8c,	// (0x00006f8c) list_single_heading_pane_fp_t2_ParamLimits

0x6f8c,	// (0x00006f8c) list_single_heading_pane_fp_t2

0x0001,

0xaf1a,	// (0x0000af1a) list_single_heading_pane_fp_t_ParamLimits

0xaf1a,	// (0x0000af1a) list_single_heading_pane_fp_t

0x1700,	// (0x00001700) aid_size_cell_fast

0x07a1,	// (0x000007a1) soft_indicator_pane_cp1_t1

0x173d,	// (0x0000173d) cell_app_pane_cp2_ParamLimits

0x173d,	// (0x0000173d) cell_app_pane_cp2

0x6533,	// (0x00006533) fep_hwr_candidate_drop_down_list_pane

0x6761,	// (0x00006761) fep_hwr_candidate_pane_g3_ParamLimits

0x6761,	// (0x00006761) fep_hwr_candidate_pane_g3

0x676e,	// (0x0000676e) fep_hwr_candidate_pane_g4_ParamLimits

0x676e,	// (0x0000676e) fep_hwr_candidate_pane_g4

0x0002,

0xae8e,	// (0x0000ae8e) fep_hwr_candidate_pane_g_ParamLimits

0xae8e,	// (0x0000ae8e) fep_hwr_candidate_pane_g

0x682e,	// (0x0000682e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x682e,	// (0x0000682e) fep_vkb_candidate_drop_down_list_pane

0x6c3f,	// (0x00006c3f) fep_vkb_candidate_pane_g3

0x6c47,	// (0x00006c47) fep_vkb_candidate_pane_g4

0x0002,

0xaebb,	// (0x0000aebb) fep_vkb_candidate_pane_g

0x6947,	// (0x00006947) cell_hwr_candidate_pane_g1_ParamLimits

0x6cb2,	// (0x00006cb2) cell_hwr_candidate_pane_g3_ParamLimits

0x6cb2,	// (0x00006cb2) cell_hwr_candidate_pane_g3

0x6cd3,	// (0x00006cd3) cell_hwr_candidate_pane_g4_ParamLimits

0x6cd3,	// (0x00006cd3) cell_hwr_candidate_pane_g4

0x0002,

0xaed5,	// (0x0000aed5) cell_hwr_candidate_pane_g_ParamLimits

0xaed5,	// (0x0000aed5) cell_hwr_candidate_pane_g

0x6d12,	// (0x00006d12) cell_vkb_candidate_pane_g3_ParamLimits

0x6d12,	// (0x00006d12) cell_vkb_candidate_pane_g3

0x6d2d,	// (0x00006d2d) cell_vkb_candidate_pane_g4_ParamLimits

0x6d2d,	// (0x00006d2d) cell_vkb_candidate_pane_g4

0x6fa2,	// (0x00006fa2) cell_app_pane_cp2_g1_ParamLimits

0x6fa2,	// (0x00006fa2) cell_app_pane_cp2_g1

0x6fc0,	// (0x00006fc0) cell_app_pane_cp2_g2_ParamLimits

0x6fc0,	// (0x00006fc0) cell_app_pane_cp2_g2

0x0001,

0xaf1f,	// (0x0000af1f) cell_app_pane_cp2_g_ParamLimits

0xaf1f,	// (0x0000af1f) cell_app_pane_cp2_g

0x6fcc,	// (0x00006fcc) cell_app_pane_cp2_t1_ParamLimits

0x6fcc,	// (0x00006fcc) cell_app_pane_cp2_t1

0x1375,	// (0x00001375) grid_highlight_pane_cp1_ParamLimits

0x1375,	// (0x00001375) grid_highlight_pane_cp1

0x6fde,	// (0x00006fde) cell_hwr_candidate_pane_cp1_ParamLimits

0x6fde,	// (0x00006fde) cell_hwr_candidate_pane_cp1

0x6947,	// (0x00006947) fep_hwr_candidate_drop_down_list_pane_g1

0x6ffd,	// (0x00006ffd) fep_hwr_candidate_drop_down_list_pane_g2

0x700a,	// (0x0000700a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xaf24,	// (0x0000af24) fep_hwr_candidate_drop_down_list_pane_g

0x7017,	// (0x00007017) fep_hwr_candidate_drop_down_list_scroll_pane

0x7020,	// (0x00007020) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7020,	// (0x00007020) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x702d,	// (0x0000702d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x702d,	// (0x0000702d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x703a,	// (0x0000703a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x703a,	// (0x0000703a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6d12,	// (0x00006d12) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d12,	// (0x00006d12) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d2d,	// (0x00006d2d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d2d,	// (0x00006d2d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7047,	// (0x00007047) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7047,	// (0x00007047) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7062,	// (0x00007062) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7062,	// (0x00007062) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x707d,	// (0x0000707d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x707d,	// (0x0000707d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xaf2b,	// (0x0000af2b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xaf2b,	// (0x0000af2b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7098,	// (0x00007098) cell_vkb_candidate_pane_cp1_ParamLimits

0x7098,	// (0x00007098) cell_vkb_candidate_pane_cp1

0x6947,	// (0x00006947) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6947,	// (0x00006947) fep_vkb_candidate_drop_down_list_pane_g1

0x6ffd,	// (0x00006ffd) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6ffd,	// (0x00006ffd) fep_vkb_candidate_drop_down_list_pane_g2

0x700a,	// (0x0000700a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x700a,	// (0x0000700a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xaf24,	// (0x0000af24) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xaf24,	// (0x0000af24) fep_vkb_candidate_drop_down_list_pane_g

0x70b8,	// (0x000070b8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x70b8,	// (0x000070b8) fep_vkb_candidate_drop_down_list_scroll_pane

0x70c5,	// (0x000070c5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70c5,	// (0x000070c5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x70d2,	// (0x000070d2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x70d2,	// (0x000070d2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x70de,	// (0x000070de) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x70de,	// (0x000070de) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6cb2,	// (0x00006cb2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6cb2,	// (0x00006cb2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6cd3,	// (0x00006cd3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6cd3,	// (0x00006cd3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x70ea,	// (0x000070ea) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x70ea,	// (0x000070ea) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x710b,	// (0x0000710b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x710b,	// (0x0000710b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x712c,	// (0x0000712c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x712c,	// (0x0000712c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xaf3c,	// (0x0000af3c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xaf3c,	// (0x0000af3c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb430,	// (0x0000b430) title_pane_g1_ParamLimits

0xb443,	// (0x0000b443) title_pane_g2_ParamLimits

0xf0cc,	// (0x0000f0cc) title_pane_g_ParamLimits

0x1d0e,	// (0x00001d0e) aid_call2_pane

0x1d16,	// (0x00001d16) aid_call_pane

0x1d1e,	// (0x00001d1e) popup_clock_analogue_window_g1

0x1d1e,	// (0x00001d1e) popup_clock_analogue_window_g2

0x1d26,	// (0x00001d26) popup_clock_analogue_window_g3

0x1d2f,	// (0x00001d2f) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xaa81,	// (0x0000aa81) popup_clock_analogue_window_g

0x1d37,	// (0x00001d37) popup_clock_analogue_window_t1

0x1dc2,	// (0x00001dc2) clock_digital_number_pane_ParamLimits

0x1dc2,	// (0x00001dc2) clock_digital_number_pane

0x1dce,	// (0x00001dce) clock_digital_number_pane_cp02_ParamLimits

0x1dce,	// (0x00001dce) clock_digital_number_pane_cp02

0x1dda,	// (0x00001dda) clock_digital_number_pane_cp03_ParamLimits

0x1dda,	// (0x00001dda) clock_digital_number_pane_cp03

0x1de6,	// (0x00001de6) clock_digital_number_pane_cp04_ParamLimits

0x1de6,	// (0x00001de6) clock_digital_number_pane_cp04

0x1df2,	// (0x00001df2) clock_digital_separator_pane_ParamLimits

0x1df2,	// (0x00001df2) clock_digital_separator_pane

0x1dfe,	// (0x00001dfe) popup_clock_digital_window_t1_ParamLimits

0x1dfe,	// (0x00001dfe) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xaa8c,	// (0x0000aa8c) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xaa8c,	// (0x0000aa8c) clock_digital_separator_pane_g

0xc8cd,	// (0x0000c8cd) aid_fill_nsta_ParamLimits

0xca03,	// (0x0000ca03) indicator_nsta_pane_ParamLimits

0x33ae,	// (0x000033ae) popup_clock_analogue_window

0x33ae,	// (0x000033ae) popup_clock_digital_window

0x16c1,	// (0x000016c1) grid_indicator_nsta_pane_ParamLimits

0x5dfb,	// (0x00005dfb) clock_nsta_pane_t2

0x0001,

0xae0e,	// (0x0000ae0e) clock_nsta_pane_t

0x1af5,	// (0x00001af5) aid_size_max_handle

0xbe4a,	// (0x0000be4a) aid_size_min_handle

0x25c7,	// (0x000025c7) editor_scroll_pane

0x7147,	// (0x00007147) ex_editor_pane

0x166e,	// (0x0000166e) scroll_pane_cp13

0x0db3,	// (0x00000db3) scroll_pane_cp14

0x1d6c,	// (0x00001d6c) scroll_pane_cp36

0xbe62,	// (0x0000be62) list_single_graphic_hl_pane_cp2_ParamLimits

0xbe62,	// (0x0000be62) list_single_graphic_hl_pane_cp2

0xd26b,	// (0x0000d26b) list_single_graphic_hl_pane_ParamLimits

0xd26b,	// (0x0000d26b) list_single_graphic_hl_pane

0x714f,	// (0x0000714f) aid_size_min_hl_cp1

0x7158,	// (0x00007158) list_highlight_pane_cp34_ParamLimits

0x7158,	// (0x00007158) list_highlight_pane_cp34

0x7169,	// (0x00007169) list_single_graphic_hl_pane_g1_ParamLimits

0x7169,	// (0x00007169) list_single_graphic_hl_pane_g1

0xd7b1,	// (0x0000d7b1) list_single_graphic_hl_pane_g2_ParamLimits

0xd7b1,	// (0x0000d7b1) list_single_graphic_hl_pane_g2

0xd7b1,	// (0x0000d7b1) list_single_graphic_hl_pane_g3_ParamLimits

0xd7b1,	// (0x0000d7b1) list_single_graphic_hl_pane_g3

0x2538,	// (0x00002538) list_single_graphic_hl_pane_g4_ParamLimits

0x2538,	// (0x00002538) list_single_graphic_hl_pane_g4

0xd7bd,	// (0x0000d7bd) list_single_graphic_hl_pane_g5_ParamLimits

0xd7bd,	// (0x0000d7bd) list_single_graphic_hl_pane_g5

0x0004,

0xf2a3,	// (0x0000f2a3) list_single_graphic_hl_pane_g_ParamLimits

0xf2a3,	// (0x0000f2a3) list_single_graphic_hl_pane_g

0xd7d1,	// (0x0000d7d1) list_single_graphic_hl_pane_t1_ParamLimits

0xd7d1,	// (0x0000d7d1) list_single_graphic_hl_pane_t1

0x71ac,	// (0x000071ac) aid_size_min_hl_cp2

0x71b5,	// (0x000071b5) list_highlight_pane_cp34_cp2_ParamLimits

0x71b5,	// (0x000071b5) list_highlight_pane_cp34_cp2

0x7169,	// (0x00007169) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7169,	// (0x00007169) list_single_graphic_hl_pane_g1_cp2

0x71c2,	// (0x000071c2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x71c2,	// (0x000071c2) list_single_graphic_hl_pane_g2_cp2

0x71ce,	// (0x000071ce) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x71ce,	// (0x000071ce) list_single_graphic_hl_pane_g3_cp2

0x3516,	// (0x00003516) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3516,	// (0x00003516) list_single_graphic_hl_pane_g4_cp2

0x7182,	// (0x00007182) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7182,	// (0x00007182) list_single_graphic_hl_pane_g5_cp2

0xc0e1,	// (0x0000c0e1) control_pane_g4_ParamLimits

0xc0e1,	// (0x0000c0e1) control_pane_g4

0x2b34,	// (0x00002b34) bg_popup_sub_pane_cp10_ParamLimits

0x64bf,	// (0x000064bf) list_choice_list_pane_ParamLimits

0x64ce,	// (0x000064ce) scroll_pane_cp23

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02_ParamLimits

0x6d7e,	// (0x00006d7e) list_preview_fixed_pane_ParamLimits

0x6d94,	// (0x00006d94) list_preview_fixed_pane_cp_ParamLimits

0x6d94,	// (0x00006d94) list_preview_fixed_pane_cp

0x6da0,	// (0x00006da0) popup_preview_fixed_window_g1_ParamLimits

0x6da0,	// (0x00006da0) popup_preview_fixed_window_g1

0x6dac,	// (0x00006dac) popup_preview_fixed_window_g2_ParamLimits

0x6dac,	// (0x00006dac) popup_preview_fixed_window_g2

0x0002,

0xaedc,	// (0x0000aedc) popup_preview_fixed_window_g_ParamLimits

0xaedc,	// (0x0000aedc) popup_preview_fixed_window_g

0x199e,	// (0x0000199e) aid_navi_side_left_pane_ParamLimits

0x19b3,	// (0x000019b3) aid_navi_side_right_pane_ParamLimits

0x19cb,	// (0x000019cb) navi_icon_pane_stacon_ParamLimits

0x19df,	// (0x000019df) navi_navi_pane_stacon_ParamLimits

0x19cb,	// (0x000019cb) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x71f2,	// (0x000071f2) listscroll_text_info_pane

0x71fa,	// (0x000071fa) list_text_info_pane_ParamLimits

0x71fa,	// (0x000071fa) list_text_info_pane

0x7209,	// (0x00007209) scroll_pane_cp24_ParamLimits

0x7209,	// (0x00007209) scroll_pane_cp24

0xd7e7,	// (0x0000d7e7) list_text_info_pane_t1_ParamLimits

0xd7e7,	// (0x0000d7e7) list_text_info_pane_t1

0xc267,	// (0x0000c267) popup_fast_swap2_window_ParamLimits

0xc267,	// (0x0000c267) popup_fast_swap2_window

0x7258,	// (0x00007258) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c9e,	// (0x00003c9e) heading_pane_cp2

0x0a7d,	// (0x00000a7d) listscroll_fast2_pane

0x7262,	// (0x00007262) grid_fast2_pane

0x726c,	// (0x0000726c) listscroll_fast2_pane_g1

0x7274,	// (0x00007274) listscroll_fast2_pane_g2

0x0001,

0xaf58,	// (0x0000af58) listscroll_fast2_pane_g

0x166e,	// (0x0000166e) scroll_pane_cp26

0x727e,	// (0x0000727e) cell_fast2_pane_ParamLimits

0x727e,	// (0x0000727e) cell_fast2_pane

0x7293,	// (0x00007293) cell_fast2_pane_g1

0x729c,	// (0x0000729c) cell_fast2_pane_g2

0x72a5,	// (0x000072a5) cell_fast2_pane_g3

0x0002,

0xaf5d,	// (0x0000af5d) cell_fast2_pane_g

0x0b70,	// (0x00000b70) grid_highlight_pane_cp9

0x0b85,	// (0x00000b85) main_eswt_pane_ParamLimits

0x0b85,	// (0x00000b85) main_eswt_pane

0x721e,	// (0x0000721e) list_single_text_info_pane

0x72ad,	// (0x000072ad) eswt_ctrl_button_pane

0x72ad,	// (0x000072ad) eswt_ctrl_canvas_pane

0x72b5,	// (0x000072b5) eswt_ctrl_combo_pane

0x72ad,	// (0x000072ad) eswt_ctrl_default_pane

0x72ad,	// (0x000072ad) eswt_ctrl_label_pane

0x72bd,	// (0x000072bd) eswt_ctrl_wait_pane

0x72c5,	// (0x000072c5) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x72e5,	// (0x000072e5) popup_eswt_tasktip_window_ParamLimits

0x72e5,	// (0x000072e5) popup_eswt_tasktip_window

0x3816,	// (0x00003816) bg_popup_window_pane_cp18

0x72f6,	// (0x000072f6) eswt_control_pane_g1_ParamLimits

0x72f6,	// (0x000072f6) eswt_control_pane_g1

0x7303,	// (0x00007303) eswt_control_pane_g2_ParamLimits

0x7303,	// (0x00007303) eswt_control_pane_g2

0x7310,	// (0x00007310) eswt_control_pane_g3_ParamLimits

0x7310,	// (0x00007310) eswt_control_pane_g3

0x731d,	// (0x0000731d) eswt_control_pane_g4_ParamLimits

0x731d,	// (0x0000731d) eswt_control_pane_g4

0x0003,

0xaf64,	// (0x0000af64) eswt_control_pane_g_ParamLimits

0xaf64,	// (0x0000af64) eswt_control_pane_g

0x1375,	// (0x00001375) bg_button_pane_ParamLimits

0x1375,	// (0x00001375) bg_button_pane

0x0b85,	// (0x00000b85) common_borders_pane_copy2_ParamLimits

0x0b85,	// (0x00000b85) common_borders_pane_copy2

0x732a,	// (0x0000732a) control_button_pane_g1_ParamLimits

0x732a,	// (0x0000732a) control_button_pane_g1

0x7336,	// (0x00007336) control_button_pane_g2_ParamLimits

0x7336,	// (0x00007336) control_button_pane_g2

0x7342,	// (0x00007342) control_button_pane_g3_ParamLimits

0x7342,	// (0x00007342) control_button_pane_g3

0x0002,

0xaf6d,	// (0x0000af6d) control_button_pane_g_ParamLimits

0xaf6d,	// (0x0000af6d) control_button_pane_g

0x7356,	// (0x00007356) control_button_pane_t1

0x7364,	// (0x00007364) control_button_pane_t2

0x0001,

0xaf74,	// (0x0000af74) control_button_pane_t

0x367e,	// (0x0000367e) bg_button_pane_g1

0x3686,	// (0x00003686) bg_button_pane_g2

0x368e,	// (0x0000368e) bg_button_pane_g3

0x3696,	// (0x00003696) bg_button_pane_g4

0x369e,	// (0x0000369e) bg_button_pane_g5

0x36a6,	// (0x000036a6) bg_button_pane_g6

0x36ae,	// (0x000036ae) bg_button_pane_g7

0x36b6,	// (0x000036b6) bg_button_pane_g8

0x36be,	// (0x000036be) bg_button_pane_g9

0x0008,

0xabe1,	// (0x0000abe1) bg_button_pane_g

0x647a,	// (0x0000647a) common_borders_pane_ParamLimits

0x647a,	// (0x0000647a) common_borders_pane

0x72f6,	// (0x000072f6) eswt_control_pane_g1_copy1_ParamLimits

0x72f6,	// (0x000072f6) eswt_control_pane_g1_copy1

0x7303,	// (0x00007303) eswt_control_pane_g2_copy1_ParamLimits

0x7303,	// (0x00007303) eswt_control_pane_g2_copy1

0x7310,	// (0x00007310) eswt_control_pane_g3_copy1_ParamLimits

0x7310,	// (0x00007310) eswt_control_pane_g3_copy1

0x731d,	// (0x0000731d) eswt_control_pane_g4_copy1_ParamLimits

0x731d,	// (0x0000731d) eswt_control_pane_g4_copy1

0x64b5,	// (0x000064b5) bg_eswt_ctrl_canvas_pane_g1

0x647a,	// (0x0000647a) common_borders_pane_cp2_ParamLimits

0x647a,	// (0x0000647a) common_borders_pane_cp2

0x647a,	// (0x0000647a) common_borders_pane_cp3_ParamLimits

0x647a,	// (0x0000647a) common_borders_pane_cp3

0x7372,	// (0x00007372) separator_horizontal_pane

0x737a,	// (0x0000737a) separator_vertical_pane

0x72f6,	// (0x000072f6) eswt_control_pane_g1_copy2_ParamLimits

0x72f6,	// (0x000072f6) eswt_control_pane_g1_copy2

0x7303,	// (0x00007303) eswt_control_pane_g2_copy2_ParamLimits

0x7303,	// (0x00007303) eswt_control_pane_g2_copy2

0x7310,	// (0x00007310) eswt_control_pane_g3_copy2_ParamLimits

0x7310,	// (0x00007310) eswt_control_pane_g3_copy2

0x731d,	// (0x0000731d) eswt_control_pane_g4_copy2_ParamLimits

0x731d,	// (0x0000731d) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x7383,	// (0x00007383) separator_horizontal_pane_g1

0x738c,	// (0x0000738c) separator_horizontal_pane_g2

0x7395,	// (0x00007395) separator_horizontal_pane_g3

0x0002,

0xaf79,	// (0x0000af79) separator_horizontal_pane_g

0x72f6,	// (0x000072f6) eswt_control_pane_g1_copy3_ParamLimits

0x72f6,	// (0x000072f6) eswt_control_pane_g1_copy3

0x7303,	// (0x00007303) eswt_control_pane_g2_copy3_ParamLimits

0x7303,	// (0x00007303) eswt_control_pane_g2_copy3

0x7310,	// (0x00007310) eswt_control_pane_g3_copy3_ParamLimits

0x7310,	// (0x00007310) eswt_control_pane_g3_copy3

0x731d,	// (0x0000731d) eswt_control_pane_g4_copy3_ParamLimits

0x731d,	// (0x0000731d) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x739e,	// (0x0000739e) separator_vertical_pane_g1

0x73a7,	// (0x000073a7) separator_vertical_pane_g2

0x73b0,	// (0x000073b0) separator_vertical_pane_g3

0x0002,

0xaf80,	// (0x0000af80) separator_vertical_pane_g

0x72f6,	// (0x000072f6) eswt_control_pane_g1_copy4_ParamLimits

0x72f6,	// (0x000072f6) eswt_control_pane_g1_copy4

0x7303,	// (0x00007303) eswt_control_pane_g2_copy4_ParamLimits

0x7303,	// (0x00007303) eswt_control_pane_g2_copy4

0x7310,	// (0x00007310) eswt_control_pane_g3_copy4_ParamLimits

0x7310,	// (0x00007310) eswt_control_pane_g3_copy4

0x731d,	// (0x0000731d) eswt_control_pane_g4_copy4_ParamLimits

0x731d,	// (0x0000731d) eswt_control_pane_g4_copy4

0xd802,	// (0x0000d802) eswt_ctrl_combo_button_pane

0xd80a,	// (0x0000d80a) eswt_ctrl_input_pane

0xd812,	// (0x0000d812) popup_choice_list_window_cp70

0xd81a,	// (0x0000d81a) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x647a,	// (0x0000647a) bg_button_pane_cp70_ParamLimits

0x647a,	// (0x0000647a) bg_button_pane_cp70

0xd828,	// (0x0000d828) eswt_ctrl_combo_button_pane_g1

0x73e7,	// (0x000073e7) wait_bar_pane_cp70

0x3816,	// (0x00003816) bg_popup_window_pane_cp70_ParamLimits

0x3816,	// (0x00003816) bg_popup_window_pane_cp70

0x73ef,	// (0x000073ef) popup_eswt_tasktip_window_t1

0x7405,	// (0x00007405) wait_bar_pane_cp71_ParamLimits

0x7405,	// (0x00007405) wait_bar_pane_cp71

0x7411,	// (0x00007411) grid_eswt_app_pane

0x1b59,	// (0x00001b59) scroll_pane_cp70

0xd830,	// (0x0000d830) cell_eswt_app_pane_ParamLimits

0xd830,	// (0x0000d830) cell_eswt_app_pane

0xd85a,	// (0x0000d85a) cell_eswt_app_pane_g1_ParamLimits

0xd85a,	// (0x0000d85a) cell_eswt_app_pane_g1

0xd889,	// (0x0000d889) cell_eswt_app_pane_g2_ParamLimits

0xd889,	// (0x0000d889) cell_eswt_app_pane_g2

0x0001,

0xf2ae,	// (0x0000f2ae) cell_eswt_app_pane_g_ParamLimits

0xf2ae,	// (0x0000f2ae) cell_eswt_app_pane_g

0xd8b2,	// (0x0000d8b2) cell_eswt_app_pane_t1_ParamLimits

0xd8b2,	// (0x0000d8b2) cell_eswt_app_pane_t1

0x74d4,	// (0x000074d4) grid_highlight_pane_cp70_ParamLimits

0x74d4,	// (0x000074d4) grid_highlight_pane_cp70

0x249c,	// (0x0000249c) set_content_pane_g1

0x2910,	// (0x00002910) status_small_volume_pane

0x74e0,	// (0x000074e0) status_small_volume_pane_g1

0x74e8,	// (0x000074e8) volume_small2_pane

0x74f1,	// (0x000074f1) volume_small2_pane_g1

0x74fa,	// (0x000074fa) volume_small2_pane_g2

0x7503,	// (0x00007503) volume_small2_pane_g3

0x750c,	// (0x0000750c) volume_small2_pane_g4

0x7515,	// (0x00007515) volume_small2_pane_g5

0x751e,	// (0x0000751e) volume_small2_pane_g6

0x7527,	// (0x00007527) volume_small2_pane_g7

0x7530,	// (0x00007530) volume_small2_pane_g8

0x7539,	// (0x00007539) volume_small2_pane_g9

0x7542,	// (0x00007542) volume_small2_pane_g10

0x0009,

0xaf8c,	// (0x0000af8c) volume_small2_pane_g

0x6a8f,	// (0x00006a8f) fep_vkb_top_text_pane_g1_ParamLimits

0xd759,	// (0x0000d759) fep_vkb_top_text_pane_t1_ParamLimits

0x6db8,	// (0x00006db8) popup_preview_fixed_window_g3_ParamLimits

0x6db8,	// (0x00006db8) popup_preview_fixed_window_g3

0xc860,	// (0x0000c860) popup_toolbar_trans_pane

0xd0c3,	// (0x0000d0c3) aid_height_set_list_ParamLimits

0x4e7d,	// (0x00004e7d) aid_size_parent_ParamLimits

0x2b34,	// (0x00002b34) list_highlight_pane_cp2_ParamLimits

0x249c,	// (0x0000249c) set_content_pane_g1_ParamLimits

0xd27c,	// (0x0000d27c) list_single_image_pane_ParamLimits

0xd27c,	// (0x0000d27c) list_single_image_pane

0xd8e4,	// (0x0000d8e4) aid_size_cell_image_ParamLimits

0xd8e4,	// (0x0000d8e4) aid_size_cell_image

0xd8f1,	// (0x0000d8f1) grid_single_image_pane_ParamLimits

0xd8f1,	// (0x0000d8f1) grid_single_image_pane

0x0fd8,	// (0x00000fd8) list_single_image_pane_g1_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_image_pane_g1

0x7566,	// (0x00007566) list_single_image_pane_g2_ParamLimits

0x7566,	// (0x00007566) list_single_image_pane_g2

0x0001,

0xafa1,	// (0x0000afa1) list_single_image_pane_g_ParamLimits

0xafa1,	// (0x0000afa1) list_single_image_pane_g

0x0f0f,	// (0x00000f0f) list_single_image_pane_t1_ParamLimits

0x0f0f,	// (0x00000f0f) list_single_image_pane_t1

0xd8ff,	// (0x0000d8ff) cell_image_list_pane_ParamLimits

0xd8ff,	// (0x0000d8ff) cell_image_list_pane

0xd915,	// (0x0000d915) cell_image_list_pane_g1

0xd91e,	// (0x0000d91e) cell_image_list_pane_g2

0x0001,

0xf2b3,	// (0x0000f2b3) cell_image_list_pane_g

0x759f,	// (0x0000759f) aid_size_cell_tb_trans_pane

0x1375,	// (0x00001375) bg_tb_trans_pane

0x75b1,	// (0x000075b1) grid_tb_trans_pane

0x367e,	// (0x0000367e) bg_tb_trans_pane_g1

0x3686,	// (0x00003686) bg_tb_trans_pane_g2

0x368e,	// (0x0000368e) bg_tb_trans_pane_g3

0x3696,	// (0x00003696) bg_tb_trans_pane_g4

0x369e,	// (0x0000369e) bg_tb_trans_pane_g5

0x36b6,	// (0x000036b6) bg_tb_trans_pane_g6

0x36be,	// (0x000036be) bg_tb_trans_pane_g7

0x36a6,	// (0x000036a6) bg_tb_trans_pane_g8

0x36ae,	// (0x000036ae) bg_tb_trans_pane_g9

0x0008,

0xafab,	// (0x0000afab) bg_tb_trans_pane_g

0x75c5,	// (0x000075c5) cell_toolbar_trans_pane_ParamLimits

0x75c5,	// (0x000075c5) cell_toolbar_trans_pane

0x64b5,	// (0x000064b5) cell_toolbar_trans_pane_g1

0xd4c1,	// (0x0000d4c1) list_form2_midp_pane_t1

0xd4cf,	// (0x0000d4cf) list_form2_midp_pane_t2

0x0001,

0xf27e,	// (0x0000f27e) list_form2_midp_pane_t

0x604c,	// (0x0000604c) scroll_pane_cp51_ParamLimits

0x6257,	// (0x00006257) form2_midp_wait_pane_g1

0x6260,	// (0x00006260) form2_midp_wait_pane_g2

0x6269,	// (0x00006269) form2_midp_wait_pane_g3

0x0002,

0xae69,	// (0x0000ae69) form2_midp_wait_pane_g

0x04fd,	// (0x000004fd) list_highlight_pane_cp21_ParamLimits

0x62c0,	// (0x000062c0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x62cf,	// (0x000062cf) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5083,	// (0x00005083) list_single_2graphic_im_pane_ParamLimits

0x5083,	// (0x00005083) list_single_2graphic_im_pane

0xd927,	// (0x0000d927) list_single_2graphic_im_pane_g1_ParamLimits

0xd927,	// (0x0000d927) list_single_2graphic_im_pane_g1

0xd938,	// (0x0000d938) list_single_2graphic_im_pane_g2_ParamLimits

0xd938,	// (0x0000d938) list_single_2graphic_im_pane_g2

0xd944,	// (0x0000d944) list_single_2graphic_im_pane_g3_ParamLimits

0xd944,	// (0x0000d944) list_single_2graphic_im_pane_g3

0x0003,

0xf2b8,	// (0x0000f2b8) list_single_2graphic_im_pane_g_ParamLimits

0xf2b8,	// (0x0000f2b8) list_single_2graphic_im_pane_g

0xd958,	// (0x0000d958) list_single_2graphic_im_pane_t1_ParamLimits

0xd958,	// (0x0000d958) list_single_2graphic_im_pane_t1

0x6dc4,	// (0x00006dc4) list_single_graphic_2heading_pane_fp_ParamLimits

0x6dc4,	// (0x00006dc4) list_single_graphic_2heading_pane_fp

0x6e08,	// (0x00006e08) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6e08,	// (0x00006e08) list_single_graphic_2heading_pane_fp_g1

0x6dd9,	// (0x00006dd9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6dd9,	// (0x00006dd9) list_single_graphic_2heading_pane_fp_g2

0x139b,	// (0x0000139b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x139b,	// (0x0000139b) list_single_graphic_2heading_pane_fp_g3

0x13a7,	// (0x000013a7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x13a7,	// (0x000013a7) list_single_graphic_2heading_pane_fp_g4

0x6de5,	// (0x00006de5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6de5,	// (0x00006de5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xaeec,	// (0x0000aeec) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xaeec,	// (0x0000aeec) list_single_graphic_2heading_pane_fp_g

0x7659,	// (0x00007659) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7659,	// (0x00007659) list_single_graphic_2heading_pane_fp_t1

0x6e40,	// (0x00006e40) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6e40,	// (0x00006e40) list_single_graphic_2heading_pane_fp_t2

0x766f,	// (0x0000766f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x766f,	// (0x0000766f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xafc7,	// (0x0000afc7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xafc7,	// (0x0000afc7) list_single_graphic_2heading_pane_fp_t

0x66df,	// (0x000066df) fep_hwr_write_pane_g5_ParamLimits

0x66df,	// (0x000066df) fep_hwr_write_pane_g5

0x66eb,	// (0x000066eb) fep_hwr_write_pane_g6_ParamLimits

0x66eb,	// (0x000066eb) fep_hwr_write_pane_g6

0x72c5,	// (0x000072c5) eswt_shell_pane_ParamLimits

0x3816,	// (0x00003816) bg_popup_window_pane_cp18_ParamLimits

0x4d25,	// (0x00004d25) heading_pane_cp70

0x73ef,	// (0x000073ef) popup_eswt_tasktip_window_t1_ParamLimits

0xc928,	// (0x0000c928) aid_touch_tab_arrow_left

0xc93e,	// (0x0000c93e) aid_touch_tab_arrow_right

0xb45b,	// (0x0000b45b) title_pane_g3_ParamLimits

0xb45b,	// (0x0000b45b) title_pane_g3

0x1254,	// (0x00001254) set_value_pane_g1

0xc860,	// (0x0000c860) popup_toolbar_trans_pane_ParamLimits

0x759f,	// (0x0000759f) aid_size_cell_tb_trans_pane_ParamLimits

0x1375,	// (0x00001375) bg_tb_trans_pane_ParamLimits

0x75b1,	// (0x000075b1) grid_tb_trans_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane

0x3eb9,	// (0x00003eb9) cont_note_wait_pane_ParamLimits

0x3eb9,	// (0x00003eb9) cont_note_wait_pane

0x3eb9,	// (0x00003eb9) cont_note_image_pane_ParamLimits

0x3eb9,	// (0x00003eb9) cont_note_image_pane

0x7685,	// (0x00007685) popup_note2_window_g1_ParamLimits

0x7685,	// (0x00007685) popup_note2_window_g1

0x76b6,	// (0x000076b6) popup_note2_window_t1_ParamLimits

0x76b6,	// (0x000076b6) popup_note2_window_t1

0x76fb,	// (0x000076fb) popup_note2_window_t2_ParamLimits

0x76fb,	// (0x000076fb) popup_note2_window_t2

0x7740,	// (0x00007740) popup_note2_window_t3_ParamLimits

0x7740,	// (0x00007740) popup_note2_window_t3

0x7785,	// (0x00007785) popup_note2_window_t4_ParamLimits

0x7785,	// (0x00007785) popup_note2_window_t4

0x08b5,	// (0x000008b5) popup_note2_window_t5_ParamLimits

0x08b5,	// (0x000008b5) popup_note2_window_t5

0x0004,

0xafd3,	// (0x0000afd3) popup_note2_window_t_ParamLimits

0xafd3,	// (0x0000afd3) popup_note2_window_t

0x77b4,	// (0x000077b4) popup_note2_image_window_g1_ParamLimits

0x77b4,	// (0x000077b4) popup_note2_image_window_g1

0x77c0,	// (0x000077c0) popup_note2_image_window_g2_ParamLimits

0x77c0,	// (0x000077c0) popup_note2_image_window_g2

0x0001,

0xafde,	// (0x0000afde) popup_note2_image_window_g_ParamLimits

0xafde,	// (0x0000afde) popup_note2_image_window_g

0x77d2,	// (0x000077d2) popup_note2_image_window_t1_ParamLimits

0x77d2,	// (0x000077d2) popup_note2_image_window_t1

0x77ea,	// (0x000077ea) popup_note2_image_window_t2_ParamLimits

0x77ea,	// (0x000077ea) popup_note2_image_window_t2

0x7802,	// (0x00007802) popup_note2_image_window_t3_ParamLimits

0x7802,	// (0x00007802) popup_note2_image_window_t3

0x0002,

0xafe3,	// (0x0000afe3) popup_note2_image_window_t_ParamLimits

0xafe3,	// (0x0000afe3) popup_note2_image_window_t

0x3ec7,	// (0x00003ec7) popup_note2_wait_window_g1_ParamLimits

0x3ec7,	// (0x00003ec7) popup_note2_wait_window_g1

0x781e,	// (0x0000781e) popup_note2_wait_window_g2_ParamLimits

0x781e,	// (0x0000781e) popup_note2_wait_window_g2

0x3edf,	// (0x00003edf) popup_note2_wait_window_g3_ParamLimits

0x3edf,	// (0x00003edf) popup_note2_wait_window_g3

0x0002,

0xafea,	// (0x0000afea) popup_note2_wait_window_g_ParamLimits

0xafea,	// (0x0000afea) popup_note2_wait_window_g

0x782a,	// (0x0000782a) popup_note2_wait_window_t1_ParamLimits

0x782a,	// (0x0000782a) popup_note2_wait_window_t1

0x7848,	// (0x00007848) popup_note2_wait_window_t2_ParamLimits

0x7848,	// (0x00007848) popup_note2_wait_window_t2

0x7866,	// (0x00007866) popup_note2_wait_window_t3_ParamLimits

0x7866,	// (0x00007866) popup_note2_wait_window_t3

0x7878,	// (0x00007878) popup_note2_wait_window_t4_ParamLimits

0x7878,	// (0x00007878) popup_note2_wait_window_t4

0x0003,

0xaff1,	// (0x0000aff1) popup_note2_wait_window_t_ParamLimits

0xaff1,	// (0x0000aff1) popup_note2_wait_window_t

0x788a,	// (0x0000788a) wait_bar2_pane_ParamLimits

0x788a,	// (0x0000788a) wait_bar2_pane

0x78a2,	// (0x000078a2) popup_snote2_single_text_window_g1_ParamLimits

0x78a2,	// (0x000078a2) popup_snote2_single_text_window_g1

0x78ca,	// (0x000078ca) popup_snote2_single_text_window_t1_ParamLimits

0x78ca,	// (0x000078ca) popup_snote2_single_text_window_t1

0x7916,	// (0x00007916) popup_snote2_single_text_window_t2_ParamLimits

0x7916,	// (0x00007916) popup_snote2_single_text_window_t2

0x7962,	// (0x00007962) popup_snote2_single_text_window_t3_ParamLimits

0x7962,	// (0x00007962) popup_snote2_single_text_window_t3

0x79a3,	// (0x000079a3) popup_snote2_single_text_window_t4_ParamLimits

0x79a3,	// (0x000079a3) popup_snote2_single_text_window_t4

0x79d9,	// (0x000079d9) popup_snote2_single_text_window_t5_ParamLimits

0x79d9,	// (0x000079d9) popup_snote2_single_text_window_t5

0x0004,

0xaffa,	// (0x0000affa) popup_snote2_single_text_window_t_ParamLimits

0xaffa,	// (0x0000affa) popup_snote2_single_text_window_t

0x7a04,	// (0x00007a04) popup_snote2_single_graphic_window_g1_ParamLimits

0x7a04,	// (0x00007a04) popup_snote2_single_graphic_window_g1

0x7a2c,	// (0x00007a2c) popup_snote2_single_graphic_window_g2_ParamLimits

0x7a2c,	// (0x00007a2c) popup_snote2_single_graphic_window_g2

0x0001,

0xb005,	// (0x0000b005) popup_snote2_single_graphic_window_g_ParamLimits

0xb005,	// (0x0000b005) popup_snote2_single_graphic_window_g

0x7a54,	// (0x00007a54) popup_snote2_single_graphic_window_t1_ParamLimits

0x7a54,	// (0x00007a54) popup_snote2_single_graphic_window_t1

0x7aa0,	// (0x00007aa0) popup_snote2_single_graphic_window_t2_ParamLimits

0x7aa0,	// (0x00007aa0) popup_snote2_single_graphic_window_t2

0x7962,	// (0x00007962) popup_snote2_single_graphic_window_t3_ParamLimits

0x7962,	// (0x00007962) popup_snote2_single_graphic_window_t3

0x79a3,	// (0x000079a3) popup_snote2_single_graphic_window_t4_ParamLimits

0x79a3,	// (0x000079a3) popup_snote2_single_graphic_window_t4

0x79d9,	// (0x000079d9) popup_snote2_single_graphic_window_t5_ParamLimits

0x79d9,	// (0x000079d9) popup_snote2_single_graphic_window_t5

0x0004,

0xb00a,	// (0x0000b00a) popup_snote2_single_graphic_window_t_ParamLimits

0xb00a,	// (0x0000b00a) popup_snote2_single_graphic_window_t

0x5ebe,	// (0x00005ebe) clock_nsta_pane_cp2_t1

0x5ebe,	// (0x00005ebe) clock_nsta_pane_cp2_t2

0x0001,

0xae2a,	// (0x0000ae2a) clock_nsta_pane_cp2_t

0x138f,	// (0x0000138f) form_field_data_wide_pane_g1_ParamLimits

0x139b,	// (0x0000139b) form_field_data_wide_pane_g2_ParamLimits

0x139b,	// (0x0000139b) form_field_data_wide_pane_g2

0x13a7,	// (0x000013a7) form_field_data_wide_pane_g3_ParamLimits

0x13a7,	// (0x000013a7) form_field_data_wide_pane_g3

0x0002,

0xaa04,	// (0x0000aa04) form_field_data_wide_pane_g_ParamLimits

0xaa04,	// (0x0000aa04) form_field_data_wide_pane_g

0xd3fa,	// (0x0000d3fa) grid_touch_3_pane_ParamLimits

0xd3fa,	// (0x0000d3fa) grid_touch_3_pane

0xd989,	// (0x0000d989) cell_touch_3_pane_ParamLimits

0xd989,	// (0x0000d989) cell_touch_3_pane

0x64b5,	// (0x000064b5) cell_touch_3_pane_g1

0x64b5,	// (0x000064b5) cell_touch_3_pane_g2

0x0001,

0xaeaf,	// (0x0000aeaf) cell_touch_3_pane_g

0x08e7,	// (0x000008e7) cont_query_data_pane

0x08ef,	// (0x000008ef) cont_query_data_pane_cp1

0x7b1a,	// (0x00007b1a) button_value_adjust_pane_cp7

0x7b22,	// (0x00007b22) query_popup_pane_cp3

0x1e82,	// (0x00001e82) bg_popup_sub_pane_cp22_ParamLimits

0x1e98,	// (0x00001e98) navi_navi_volume_pane_cp2

0x1eb3,	// (0x00001eb3) popup_side_volume_key_window_g2

0x1ec2,	// (0x00001ec2) popup_side_volume_key_window_g3

0x0002,

0xaa9a,	// (0x0000aa9a) popup_side_volume_key_window_g

0x1edf,	// (0x00001edf) popup_side_volume_key_window_t2

0x0001,

0xaaa1,	// (0x0000aaa1) popup_side_volume_key_window_t

0x2366,	// (0x00002366) popup_side_volume_key_window_ParamLimits

0xb8e3,	// (0x0000b8e3) list_double_graphic_pane_g4_ParamLimits

0xb8e3,	// (0x0000b8e3) list_double_graphic_pane_g4

0xd258,	// (0x0000d258) list_single_2heading_msg_pane_ParamLimits

0xd258,	// (0x0000d258) list_single_2heading_msg_pane

0xd9d3,	// (0x0000d9d3) list_single_2heading_msg_pane_g1_ParamLimits

0xd9d3,	// (0x0000d9d3) list_single_2heading_msg_pane_g1

0xd9df,	// (0x0000d9df) list_single_2heading_msg_pane_g2_ParamLimits

0xd9df,	// (0x0000d9df) list_single_2heading_msg_pane_g2

0xd9f2,	// (0x0000d9f2) list_single_2heading_msg_pane_g3_ParamLimits

0xd9f2,	// (0x0000d9f2) list_single_2heading_msg_pane_g3

0xd9fe,	// (0x0000d9fe) list_single_2heading_msg_pane_g4_ParamLimits

0xd9fe,	// (0x0000d9fe) list_single_2heading_msg_pane_g4

0x0003,

0xf2c1,	// (0x0000f2c1) list_single_2heading_msg_pane_g_ParamLimits

0xf2c1,	// (0x0000f2c1) list_single_2heading_msg_pane_g

0xda16,	// (0x0000da16) list_single_2heading_msg_pane_t1_ParamLimits

0xda16,	// (0x0000da16) list_single_2heading_msg_pane_t1

0xda3e,	// (0x0000da3e) list_single_2heading_msg_pane_t2_ParamLimits

0xda3e,	// (0x0000da3e) list_single_2heading_msg_pane_t2

0xdaa9,	// (0x0000daa9) list_single_2heading_msg_pane_t3_ParamLimits

0xdaa9,	// (0x0000daa9) list_single_2heading_msg_pane_t3

0x7c11,	// (0x00007c11) list_single_2heading_msg_pane_t4_ParamLimits

0x7c11,	// (0x00007c11) list_single_2heading_msg_pane_t4

0x0003,

0xf2ca,	// (0x0000f2ca) list_single_2heading_msg_pane_t_ParamLimits

0xf2ca,	// (0x0000f2ca) list_single_2heading_msg_pane_t

0x0451,	// (0x00000451) title_pane_g4_ParamLimits

0x0451,	// (0x00000451) title_pane_g4

0x18c6,	// (0x000018c6) title_pane_stacon_g3_ParamLimits

0x18c6,	// (0x000018c6) title_pane_stacon_g3

0x761c,	// (0x0000761c) list_single_2graphic_im_pane_g4_ParamLimits

0x761c,	// (0x0000761c) list_single_2graphic_im_pane_g4

0x4a7c,	// (0x00004a7c) popup_side_volume_key_window_cp

0x5502,	// (0x00005502) main_idle_act2_pane_t1

0x36c6,	// (0x000036c6) toolbar_button_pane_g10

0xb7c8,	// (0x0000b7c8) popup_toolbar_window_cp1

0x5eaf,	// (0x00005eaf) clock_nsta_pane_cp_t1

0x5eaf,	// (0x00005eaf) clock_nsta_pane_cp_t2

0x0001,

0xae25,	// (0x0000ae25) clock_nsta_pane_cp_t

0x1e98,	// (0x00001e98) navi_navi_volume_pane_cp2_ParamLimits

0x1ea7,	// (0x00001ea7) popup_side_volume_key_window_g1_ParamLimits

0x1eb3,	// (0x00001eb3) popup_side_volume_key_window_g2_ParamLimits

0x1ec2,	// (0x00001ec2) popup_side_volume_key_window_g3_ParamLimits

0xaa9a,	// (0x0000aa9a) popup_side_volume_key_window_g_ParamLimits

0x651f,	// (0x0000651f) fep_hwr_aid_pane

0x65c6,	// (0x000065c6) bg_fep_hwr_top_pane_g4_ParamLimits

0x65e6,	// (0x000065e6) fep_hwr_top_pane_g1_ParamLimits

0x65f8,	// (0x000065f8) fep_hwr_top_pane_g2_ParamLimits

0x660a,	// (0x0000660a) fep_hwr_top_pane_g3_ParamLimits

0xae7a,	// (0x0000ae7a) fep_hwr_top_pane_g_ParamLimits

0x661f,	// (0x0000661f) fep_hwr_top_text_pane_ParamLimits

0x483f,	// (0x0000483f) aid_touch_tab_arrow_arrow_2

0x4848,	// (0x00004848) aid_touch_tab_arrow_left_2

0x6533,	// (0x00006533) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x656a,	// (0x0000656a) fep_hwr_prediction_pane

0x6897,	// (0x00006897) fep_vkb_prediction_pane

0xd739,	// (0x0000d739) fep_vkb_side_pane_g3_ParamLimits

0xd739,	// (0x0000d739) fep_vkb_side_pane_g3

0x6947,	// (0x00006947) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6ffd,	// (0x00006ffd) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x700a,	// (0x0000700a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xaf24,	// (0x0000af24) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7c36,	// (0x00007c36) fep_hwr_prediction_pane_g1

0x7c40,	// (0x00007c40) fep_hwr_prediction_pane_g2

0x7c48,	// (0x00007c48) fep_hwr_prediction_pane_g3

0x7c50,	// (0x00007c50) fep_hwr_prediction_pane_g4

0x0003,

0xb027,	// (0x0000b027) fep_hwr_prediction_pane_g

0x7c36,	// (0x00007c36) fep_vkb_prediction_pane_g1

0x7c58,	// (0x00007c58) fep_vkb_prediction_pane_g2

0x7c60,	// (0x00007c60) fep_vkb_prediction_pane_g3

0x7c68,	// (0x00007c68) fep_vkb_prediction_pane_g4

0x0003,

0xb030,	// (0x0000b030) fep_vkb_prediction_pane_g

0x4de6,	// (0x00004de6) slider_set_pane_g3

0x4dfa,	// (0x00004dfa) slider_set_pane_g4

0x4e12,	// (0x00004e12) slider_set_pane_g5

0x4de6,	// (0x00004de6) slider_set_pane_g6

0x4e28,	// (0x00004e28) slider_set_pane_g7

0x4fe2,	// (0x00004fe2) slider_form_pane_g3

0x4feb,	// (0x00004feb) slider_form_pane_g4

0x4ff3,	// (0x00004ff3) slider_form_pane_g5

0x4fe2,	// (0x00004fe2) slider_form_pane_g6

0xd20e,	// (0x0000d20e) slider_form_pane_g7

0x57f0,	// (0x000057f0) slider_set_pane_vc_g3

0x57f9,	// (0x000057f9) slider_set_pane_vc_g4

0x5802,	// (0x00005802) slider_set_pane_vc_g5

0x57f0,	// (0x000057f0) slider_set_pane_vc_g6

0x580b,	// (0x0000580b) slider_set_pane_vc_g7

0x57f0,	// (0x000057f0) slider_form_pane_vc_g1

0x57f9,	// (0x000057f9) slider_form_pane_vc_g2

0x5802,	// (0x00005802) slider_form_pane_vc_g3

0x57f0,	// (0x000057f0) slider_form_pane_vc_g4

0x5bb3,	// (0x00005bb3) slider_form_pane_vc_g5

0x0004,

0xadfe,	// (0x0000adfe) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7c70,	// (0x00007c70) ai3_links_pane

0xdb17,	// (0x0000db17) popup_ai3_data_window_ParamLimits

0xdb17,	// (0x0000db17) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdb31,	// (0x0000db31) cell_ai3_links_pane_ParamLimits

0xdb31,	// (0x0000db31) cell_ai3_links_pane

0x7cab,	// (0x00007cab) bg_popup_sub_pane_cp11

0x7cb8,	// (0x00007cb8) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7cdd,	// (0x00007cdd) heading_ai3_data_pane

0x7ce5,	// (0x00007ce5) list_ai3_gene_pane

0x7cf1,	// (0x00007cf1) popup_ai3_data_window_g1

0x7cf9,	// (0x00007cf9) heading_ai3_data_pane_g1

0x7d01,	// (0x00007d01) heading_ai3_data_pane_t1

0x7d0f,	// (0x00007d0f) list_double_ai3_gene_pane_ParamLimits

0x7d0f,	// (0x00007d0f) list_double_ai3_gene_pane

0x7d1c,	// (0x00007d1c) list_single_ai3_gene_pane_ParamLimits

0x7d1c,	// (0x00007d1c) list_single_ai3_gene_pane

0x647a,	// (0x0000647a) list_highlight_pane_cp7_ParamLimits

0x647a,	// (0x0000647a) list_highlight_pane_cp7

0x7d29,	// (0x00007d29) list_single_a13_gene_pane_t1_ParamLimits

0x7d29,	// (0x00007d29) list_single_a13_gene_pane_t1

0x7d40,	// (0x00007d40) list_single_ai3_gene_pane_g1

0x7d49,	// (0x00007d49) list_single_ai3_gene_pane_g2

0x0001,

0xb039,	// (0x0000b039) list_single_ai3_gene_pane_g

0x7d51,	// (0x00007d51) list_double_ai3_gene_pane_g1_ParamLimits

0x7d51,	// (0x00007d51) list_double_ai3_gene_pane_g1

0x7d5d,	// (0x00007d5d) list_double_ai3_gene_pane_t1_ParamLimits

0x7d5d,	// (0x00007d5d) list_double_ai3_gene_pane_t1

0x7d79,	// (0x00007d79) list_double_ai3_gene_pane_t2_ParamLimits

0x7d79,	// (0x00007d79) list_double_ai3_gene_pane_t2

0x7d8f,	// (0x00007d8f) list_double_ai3_gene_pane_t3_ParamLimits

0x7d8f,	// (0x00007d8f) list_double_ai3_gene_pane_t3

0x0002,

0xb03e,	// (0x0000b03e) list_double_ai3_gene_pane_t_ParamLimits

0xb03e,	// (0x0000b03e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7b33,	// (0x00007b33) aid_size_min_col_2

0xd9bd,	// (0x0000d9bd) aid_size_min_msg_ParamLimits

0xd9bd,	// (0x0000d9bd) aid_size_min_msg

0xd74d,	// (0x0000d74d) fep_vkb_top_text_pane_g2_ParamLimits

0xd74d,	// (0x0000d74d) fep_vkb_top_text_pane_g2

0x0001,

0xf29e,	// (0x0000f29e) fep_vkb_top_text_pane_g_ParamLimits

0xf29e,	// (0x0000f29e) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7dac,	// (0x00007dac) grid_hc_apps_pane_ParamLimits

0x7dac,	// (0x00007dac) grid_hc_apps_pane

0x7dbb,	// (0x00007dbb) list_hc_apps_pane

0x7dc3,	// (0x00007dc3) scroll_pane_cp37_ParamLimits

0x7dc3,	// (0x00007dc3) scroll_pane_cp37

0xdb4b,	// (0x0000db4b) cell_hc_apps_pane_ParamLimits

0xdb4b,	// (0x0000db4b) cell_hc_apps_pane

0xdc09,	// (0x0000dc09) cell_hc_apps_pane_g1_ParamLimits

0xdc09,	// (0x0000dc09) cell_hc_apps_pane_g1

0x7eae,	// (0x00007eae) cell_hc_apps_pane_g2_ParamLimits

0x7eae,	// (0x00007eae) cell_hc_apps_pane_g2

0x7eca,	// (0x00007eca) cell_hc_apps_pane_g3_ParamLimits

0x7eca,	// (0x00007eca) cell_hc_apps_pane_g3

0x0002,

0xf2d3,	// (0x0000f2d3) cell_hc_apps_pane_g_ParamLimits

0xf2d3,	// (0x0000f2d3) cell_hc_apps_pane_g

0xdc36,	// (0x0000dc36) cell_hc_apps_pane_t1_ParamLimits

0xdc36,	// (0x0000dc36) cell_hc_apps_pane_t1

0x0831,	// (0x00000831) grid_highlight_pane_cp10_ParamLimits

0x0831,	// (0x00000831) grid_highlight_pane_cp10

0xdc74,	// (0x0000dc74) list_single_hc_apps_pane_ParamLimits

0xdc74,	// (0x0000dc74) list_single_hc_apps_pane

0xdca1,	// (0x0000dca1) list_single_hc_apps_pane_g1

0xdcba,	// (0x0000dcba) list_single_hc_apps_pane_g2

0x0001,

0xf2da,	// (0x0000f2da) list_single_hc_apps_pane_g

0xdcd3,	// (0x0000dcd3) list_single_hc_apps_pane_g2_copy1

0x7fd6,	// (0x00007fd6) list_single_hc_apps_pane_t1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_ParamLimits

0x0547,	// (0x00000547) setting_slider_pane_t1_ParamLimits

0x0560,	// (0x00000560) setting_slider_pane_t2_ParamLimits

0x057a,	// (0x0000057a) setting_slider_pane_t3_ParamLimits

0xa8ec,	// (0x0000a8ec) setting_slider_pane_t_ParamLimits

0x0592,	// (0x00000592) slider_set_pane_ParamLimits

0x2999,	// (0x00002999) control_pane_g5_ParamLimits

0x2999,	// (0x00002999) control_pane_g5

0x4dcd,	// (0x00004dcd) slider_set_pane_g1_ParamLimits

0x4dda,	// (0x00004dda) slider_set_pane_g2_ParamLimits

0x4de6,	// (0x00004de6) slider_set_pane_g3_ParamLimits

0x4dfa,	// (0x00004dfa) slider_set_pane_g4_ParamLimits

0x4e12,	// (0x00004e12) slider_set_pane_g5_ParamLimits

0x4de6,	// (0x00004de6) slider_set_pane_g6_ParamLimits

0x4e28,	// (0x00004e28) slider_set_pane_g7_ParamLimits

0xacdf,	// (0x0000acdf) slider_set_pane_g_ParamLimits

0x2447,	// (0x00002447) navi_icon_text_pane_ParamLimits

0xc8f1,	// (0x0000c8f1) aid_fill_nsta_2_ParamLimits

0xc928,	// (0x0000c928) aid_touch_tab_arrow_left_ParamLimits

0xc93e,	// (0x0000c93e) aid_touch_tab_arrow_right_ParamLimits

0xc9d9,	// (0x0000c9d9) clock_nsta_pane_ParamLimits

0x4821,	// (0x00004821) navi_icon_pane_g1_ParamLimits

0x482d,	// (0x0000482d) navi_text_pane_t1_ParamLimits

0x5fb9,	// (0x00005fb9) navi_icon_text_pane_g1_ParamLimits

0x5fc5,	// (0x00005fc5) navi_icon_text_pane_t1_ParamLimits

0xdca1,	// (0x0000dca1) list_single_hc_apps_pane_g1_ParamLimits

0xdcba,	// (0x0000dcba) list_single_hc_apps_pane_g2_ParamLimits

0xf2da,	// (0x0000f2da) list_single_hc_apps_pane_g_ParamLimits

0xdcd3,	// (0x0000dcd3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7fd6,	// (0x00007fd6) list_single_hc_apps_pane_t1_ParamLimits

0xb3c5,	// (0x0000b3c5) popup_toolbar2_fixed_window_ParamLimits

0xb3c5,	// (0x0000b3c5) popup_toolbar2_fixed_window

0xc856,	// (0x0000c856) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x8004,	// (0x00008004) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x8004,	// (0x00008004) grid_toolbar2_fixed_pane

0xdcef,	// (0x0000dcef) cell_toolbar2_fixed_pane_ParamLimits

0xdcef,	// (0x0000dcef) cell_toolbar2_fixed_pane

0xdd0a,	// (0x0000dd0a) cell_toolbar2_fixed_pane_g1

0x8025,	// (0x00008025) toolbar2_fixed_button_pane

0x367e,	// (0x0000367e) toolbar2_fixed_button_pane_g1

0x3686,	// (0x00003686) toolbar2_fixed_button_pane_g2

0x368e,	// (0x0000368e) toolbar2_fixed_button_pane_g3

0x3696,	// (0x00003696) toolbar2_fixed_button_pane_g4

0x369e,	// (0x0000369e) toolbar2_fixed_button_pane_g5

0x36a6,	// (0x000036a6) toolbar2_fixed_button_pane_g6

0x36ae,	// (0x000036ae) toolbar2_fixed_button_pane_g7

0x36b6,	// (0x000036b6) toolbar2_fixed_button_pane_g8

0x36be,	// (0x000036be) toolbar2_fixed_button_pane_g9

0x0008,

0xabe1,	// (0x0000abe1) toolbar2_fixed_button_pane_g

0x802d,	// (0x0000802d) cell_toolbar2_float_pane_ParamLimits

0x802d,	// (0x0000802d) cell_toolbar2_float_pane

0x803e,	// (0x0000803e) cell_toolbar2_float_pane_g1

0x8025,	// (0x00008025) toolbar2_fixed_button_pane_cp

0xd627,	// (0x0000d627) fep_vkb_accented_list_pane_ParamLimits

0xd627,	// (0x0000d627) fep_vkb_accented_list_pane

0x6c8e,	// (0x00006c8e) bg_popup_fep_shadow_pane_g9

0x25c7,	// (0x000025c7) bg_popup_fep_shadow_pane_cp3

0x1655,	// (0x00001655) list_accented_list_pane

0x8047,	// (0x00008047) list_single_accented_list_pane_ParamLimits

0x8047,	// (0x00008047) list_single_accented_list_pane

0x25c7,	// (0x000025c7) list_highlight_pane_cp10

0x8058,	// (0x00008058) list_single_accented_list_pane_t1

0xc780,	// (0x0000c780) popup_slider_window_ParamLimits

0xc780,	// (0x0000c780) popup_slider_window

0x7b2a,	// (0x00007b2a) aid_indentation_list_msg

0xde03,	// (0x0000de03) bg_popup_window_pane_cp19

0x817c,	// (0x0000817c) popup_slider_window_g1

0x8198,	// (0x00008198) popup_slider_window_g2

0x81b4,	// (0x000081b4) popup_slider_window_g3

0x0005,

0xf2df,	// (0x0000f2df) popup_slider_window_g

0x8210,	// (0x00008210) popup_slider_window_t1

0x8284,	// (0x00008284) small_volume_slider_vertical_pane

0x64b5,	// (0x000064b5) small_volume_slider_vertical_pane_g1

0x64b5,	// (0x000064b5) small_volume_slider_vertical_pane_g2

0x82a0,	// (0x000082a0) small_volume_slider_vertical_pane_g3

0x0002,

0xb063,	// (0x0000b063) small_volume_slider_vertical_pane_g

0xb333,	// (0x0000b333) area_side_right_pane_ParamLimits

0xb333,	// (0x0000b333) area_side_right_pane

0xdebb,	// (0x0000debb) aid_size_side_button_ParamLimits

0xdebb,	// (0x0000debb) aid_size_side_button

0xded4,	// (0x0000ded4) grid_sctrl_middle_pane_ParamLimits

0xded4,	// (0x0000ded4) grid_sctrl_middle_pane

0x82dd,	// (0x000082dd) sctrl_sk_bottom_pane

0x82ee,	// (0x000082ee) sctrl_sk_top_pane

0x8300,	// (0x00008300) aid_touch_sctrl_top

0x0831,	// (0x00000831) bg_sctrl_sk_pane_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane

0x830d,	// (0x0000830d) sctrl_sk_top_pane_g1

0x831a,	// (0x0000831a) sctrl_sk_top_pane_t1

0x8300,	// (0x00008300) aid_touch_sctrl_bottom

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp

0x8335,	// (0x00008335) sctrl_sk_bottom_pane_g1

0x831a,	// (0x0000831a) sctrl_sk_bottom_pane_t1

0xdeee,	// (0x0000deee) cell_sctrl_middle_pane_ParamLimits

0xdeee,	// (0x0000deee) cell_sctrl_middle_pane

0xdeff,	// (0x0000deff) aid_touch_sctrl_middle_ParamLimits

0xdeff,	// (0x0000deff) aid_touch_sctrl_middle

0xdf0c,	// (0x0000df0c) bg_sctrl_middle_pane_ParamLimits

0xdf0c,	// (0x0000df0c) bg_sctrl_middle_pane

0x83fa,	// (0x000083fa) cell_sctrl_middle_pane_g1_ParamLimits

0x83fa,	// (0x000083fa) cell_sctrl_middle_pane_g1

0xdf1a,	// (0x0000df1a) cell_sctrl_middle_pane_g2_ParamLimits

0xdf1a,	// (0x0000df1a) cell_sctrl_middle_pane_g2

0x0001,

0xf2ec,	// (0x0000f2ec) cell_sctrl_middle_pane_g_ParamLimits

0xf2ec,	// (0x0000f2ec) cell_sctrl_middle_pane_g

0x367e,	// (0x0000367e) bg_sctrl_middle_pane_g1

0x3686,	// (0x00003686) bg_sctrl_middle_pane_g2

0x368e,	// (0x0000368e) bg_sctrl_middle_pane_g3

0x3696,	// (0x00003696) bg_sctrl_middle_pane_g4

0x369e,	// (0x0000369e) bg_sctrl_middle_pane_g5

0x36a6,	// (0x000036a6) bg_sctrl_middle_pane_g6

0x36ae,	// (0x000036ae) bg_sctrl_middle_pane_g7

0x36b6,	// (0x000036b6) bg_sctrl_middle_pane_g8

0x0007,

0xb074,	// (0x0000b074) bg_sctrl_middle_pane_g

0x36be,	// (0x000036be) bg_sctrl_middle_pane_g8_copy1

0x367e,	// (0x0000367e) bg_sctrl_sk_pane_g1

0x3686,	// (0x00003686) bg_sctrl_sk_pane_g2

0x368e,	// (0x0000368e) bg_sctrl_sk_pane_g3

0x0008,

0xabe1,	// (0x0000abe1) bg_sctrl_sk_pane_g

0x0d43,	// (0x00000d43) aid_size_touch_scroll_bar

0x3696,	// (0x00003696) bg_sctrl_sk_pane_g4

0x369e,	// (0x0000369e) bg_sctrl_sk_pane_g5

0x36a6,	// (0x000036a6) bg_sctrl_sk_pane_g6

0x36ae,	// (0x000036ae) bg_sctrl_sk_pane_g7

0x36b6,	// (0x000036b6) bg_sctrl_sk_pane_g8

0x36be,	// (0x000036be) bg_sctrl_sk_pane_g9

0x2be0,	// (0x00002be0) popup_fep_china_hwr2_fs_candidate_window

0xc2c4,	// (0x0000c2c4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc2c4,	// (0x0000c2c4) popup_fep_china_hwr2_fs_control_window

0x6947,	// (0x00006947) sctrl_sk_top_pane_g2

0x0001,

0xb06a,	// (0x0000b06a) sctrl_sk_top_pane_g

0xdf26,	// (0x0000df26) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdf26,	// (0x0000df26) aid_fep_china_hwr2_fs_cell

0xdf3a,	// (0x0000df3a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdf3a,	// (0x0000df3a) bg_popup_fep_shadow_pane_cp4

0xdf51,	// (0x0000df51) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdf51,	// (0x0000df51) bg_popup_fep_shadow_pane_cp5

0xdf63,	// (0x0000df63) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdf63,	// (0x0000df63) popup_fep_china_hwr2_fs_control_bar_grid

0xdf77,	// (0x0000df77) popup_fep_china_hwr2_fs_control_funtion_grid

0x83ce,	// (0x000083ce) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x83d8,	// (0x000083d8) popup_fep_china_hwr2_fs_candidate_grid

0xdf7f,	// (0x0000df7f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdf7f,	// (0x0000df7f) cell_fep_china_hwr2_fs_funtion_grid

0x64b5,	// (0x000064b5) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x83fa,	// (0x000083fa) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x83fa,	// (0x000083fa) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8408,	// (0x00008408) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8408,	// (0x00008408) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb085,	// (0x0000b085) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb085,	// (0x0000b085) cell_fep_china_hwr2_fs_funtion_grid_g

0xdf97,	// (0x0000df97) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdf97,	// (0x0000df97) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdfac,	// (0x0000dfac) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdfac,	// (0x0000dfac) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf2f1,	// (0x0000f2f1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf2f1,	// (0x0000f2f1) cell_fep_china_hwr2_fs_funtion_grid_t

0x844f,	// (0x0000844f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8457,	// (0x00008457) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x845f,	// (0x0000845f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb08f,	// (0x0000b08f) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8467,	// (0x00008467) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8467,	// (0x00008467) cell_fep_china_hwr2_fs_candidate_grid

0x8480,	// (0x00008480) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8488,	// (0x00008488) popup_fep_china_hwr2_fs_candidate_grid_g21

0x64b5,	// (0x000064b5) cell_fep_china_hwr2_fs_candidate_grid_g1

0x64b5,	// (0x000064b5) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xaeaf,	// (0x0000aeaf) cell_fep_china_hwr2_fs_candidate_grid_g

0x8490,	// (0x00008490) cell_fep_china_hwr2_fs_candidate_grid_t1

0x31d3,	// (0x000031d3) clock_nsta_pane_cp_24_ParamLimits

0x31d3,	// (0x000031d3) clock_nsta_pane_cp_24

0x3251,	// (0x00003251) indicator_nsta_pane_cp_24_ParamLimits

0x3251,	// (0x00003251) indicator_nsta_pane_cp_24

0x468c,	// (0x0000468c) heading_pane_g1

0x0001,

0xac46,	// (0x0000ac46) heading_pane_g

0x5293,	// (0x00005293) grid_sct_catagory_button_pane

0x52c3,	// (0x000052c3) scroll_pane_cp5_ParamLimits

0x6058,	// (0x00006058) button_value_adjust_pane_cp5_ParamLimits

0x6058,	// (0x00006058) button_value_adjust_pane_cp5

0x6154,	// (0x00006154) form2_midp_time_pane_ParamLimits

0x849e,	// (0x0000849e) cell_sct_catagory_button_pane_ParamLimits

0x849e,	// (0x0000849e) cell_sct_catagory_button_pane

0x647a,	// (0x0000647a) bg_button_pane_cp01_ParamLimits

0x647a,	// (0x0000647a) bg_button_pane_cp01

0x64b5,	// (0x000064b5) cell_sct_catagory_button_pane_g1

0xc7f9,	// (0x0000c7f9) popup_tb_extension_window

0xdfc8,	// (0x0000dfc8) aid_size_cell_ext_ParamLimits

0xdfc8,	// (0x0000dfc8) aid_size_cell_ext

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1_ParamLimits

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1

0xdfee,	// (0x0000dfee) grid_tb_ext_pane_ParamLimits

0xdfee,	// (0x0000dfee) grid_tb_ext_pane

0xe02c,	// (0x0000e02c) cell_tb_ext_pane_ParamLimits

0xe02c,	// (0x0000e02c) cell_tb_ext_pane

0xe054,	// (0x0000e054) cell_tb_ext_pane_g1_ParamLimits

0xe054,	// (0x0000e054) cell_tb_ext_pane_g1

0x8534,	// (0x00008534) cell_tb_ext_pane_t1

0x0831,	// (0x00000831) list_highlight_pane_cp11_ParamLimits

0x0831,	// (0x00000831) list_highlight_pane_cp11

0x0362,	// (0x00000362) popup_uni_indicator_window_ParamLimits

0x0362,	// (0x00000362) popup_uni_indicator_window

0x1375,	// (0x00001375) bg_popup_sub_pane_cp14

0x854f,	// (0x0000854f) list_uniindi_pane

0x855b,	// (0x0000855b) uniindi_top_pane

0x0831,	// (0x00000831) bg_uniindi_top_pane

0x857a,	// (0x0000857a) uniindi_top_pane_g1

0x8590,	// (0x00008590) uniindi_top_pane_g2

0x0003,

0xb096,	// (0x0000b096) uniindi_top_pane_g

0x85ba,	// (0x000085ba) uniindi_top_pane_t1

0x85e4,	// (0x000085e4) list_single_uniindi_pane_ParamLimits

0x85e4,	// (0x000085e4) list_single_uniindi_pane

0x64b5,	// (0x000064b5) bg_uniindi_top_pane_g1

0x85f7,	// (0x000085f7) list_single_uniindi_pane_g1

0x860a,	// (0x0000860a) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x862f,	// (0x0000862f) bg_sctrl_sk_pane_cp1

0x8638,	// (0x00008638) bg_sctrl_sk_pane_cp2

0x8641,	// (0x00008641) control_bg_pane_g1

0x864a,	// (0x0000864a) control_bg_pane_g2

0x0001,

0xb09f,	// (0x0000b09f) control_bg_pane_g

0x5e41,	// (0x00005e41) cell_indicator_nsta_pane_g1_ParamLimits

0xd429,	// (0x0000d429) cell_indicator_nsta_pane_g2_ParamLimits

0xf269,	// (0x0000f269) cell_indicator_nsta_pane_g_ParamLimits

0x61dc,	// (0x000061dc) form2_midp_time_pane_t1_ParamLimits

0x6511,	// (0x00006511) main_idle_act4_pane_ParamLimits

0x6511,	// (0x00006511) main_idle_act4_pane

0xc7f9,	// (0x0000c7f9) popup_tb_extension_window_ParamLimits

0xe013,	// (0x0000e013) tb_ext_find_pane_ParamLimits

0xe013,	// (0x0000e013) tb_ext_find_pane

0x8653,	// (0x00008653) ai_gene_pane_1_cp1

0x2700,	// (0x00002700) ai_gene_pane_2_cp1

0x865b,	// (0x0000865b) list_single_idle_plugin_calendar_pane

0x8664,	// (0x00008664) list_single_idle_plugin_notification_pane

0x866d,	// (0x0000866d) list_single_idle_plugin_player_pane

0xe071,	// (0x0000e071) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe071,	// (0x0000e071) list_single_idle_plugin_shortcut_pane

0xe099,	// (0x0000e099) main_idle_act4_pane_t1

0xe0af,	// (0x0000e0af) main_idle_act4_pane_t2

0x0001,

0xf2f6,	// (0x0000f2f6) main_idle_act4_pane_t

0xe0c5,	// (0x0000e0c5) middle_sk_idle_act4_pane_ParamLimits

0xe0c5,	// (0x0000e0c5) middle_sk_idle_act4_pane

0xe0e1,	// (0x0000e0e1) popup_clock_digital_analogue_window_cp2

0xe109,	// (0x0000e109) shortcut_wheel_idle_act4_pane_ParamLimits

0xe109,	// (0x0000e109) shortcut_wheel_idle_act4_pane

0x64b5,	// (0x000064b5) shortcut_wheel_idle_act4_pane_g1

0x64b5,	// (0x000064b5) shortcut_wheel_idle_act4_pane_g2

0x64b5,	// (0x000064b5) shortcut_wheel_idle_act4_pane_g3

0x64b5,	// (0x000064b5) shortcut_wheel_idle_act4_pane_g4

0x64b5,	// (0x000064b5) shortcut_wheel_idle_act4_pane_g5

0x8700,	// (0x00008700) shortcut_wheel_idle_act4_pane_g6

0x8708,	// (0x00008708) shortcut_wheel_idle_act4_pane_g7

0x8710,	// (0x00008710) shortcut_wheel_idle_act4_pane_g8

0x8718,	// (0x00008718) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb0a9,	// (0x0000b0a9) shortcut_wheel_idle_act4_pane_g

0x65c6,	// (0x000065c6) middle_sk_idle_act4_pane_g1_ParamLimits

0x65c6,	// (0x000065c6) middle_sk_idle_act4_pane_g1

0xe186,	// (0x0000e186) middle_sk_idle_act4_pane_g2_ParamLimits

0xe186,	// (0x0000e186) middle_sk_idle_act4_pane_g2

0x0001,

0xf30b,	// (0x0000f30b) middle_sk_idle_act4_pane_g_ParamLimits

0xf30b,	// (0x0000f30b) middle_sk_idle_act4_pane_g

0xe19e,	// (0x0000e19e) middle_sk_idle_act4_pane_t1_ParamLimits

0xe19e,	// (0x0000e19e) middle_sk_idle_act4_pane_t1

0xe1cd,	// (0x0000e1cd) grid_ai_shortcut_pane_ParamLimits

0xe1cd,	// (0x0000e1cd) grid_ai_shortcut_pane

0xe1ea,	// (0x0000e1ea) list_highlight_pane_cp16_ParamLimits

0xe1ea,	// (0x0000e1ea) list_highlight_pane_cp16

0xe1f7,	// (0x0000e1f7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe1f7,	// (0x0000e1f7) list_single_idle_plugin_shortcut_pane_g1

0xe203,	// (0x0000e203) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe203,	// (0x0000e203) list_single_idle_plugin_shortcut_pane_g2

0xe21f,	// (0x0000e21f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe21f,	// (0x0000e21f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf310,	// (0x0000f310) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf310,	// (0x0000f310) list_single_idle_plugin_shortcut_pane_g

0xe234,	// (0x0000e234) cell_ai_shortcut_pane_ParamLimits

0xe234,	// (0x0000e234) cell_ai_shortcut_pane

0xe24a,	// (0x0000e24a) cell_ai_shortcut_pane_g1_ParamLimits

0xe24a,	// (0x0000e24a) cell_ai_shortcut_pane_g1

0x8653,	// (0x00008653) ai_gene_pane_1_cp2

0x8848,	// (0x00008848) ai_gene_pane_2_cp2

0x8850,	// (0x00008850) list_highlight_pane_cp15

0x8859,	// (0x00008859) list_single_idle_plugin_calendar_pane_g1

0x8850,	// (0x00008850) list_highlight_pane_cp17

0x8861,	// (0x00008861) list_single_idle_plugin_calendar_pane_g1_copy1

0x8869,	// (0x00008869) list_single_idle_plugin_player_pane_g1

0x55a4,	// (0x000055a4) list_single_idle_plugin_player_pane_g2

0x0001,

0xb0d8,	// (0x0000b0d8) list_single_idle_plugin_player_pane_g

0x8871,	// (0x00008871) list_single_idle_plugin_player_pane_t1

0x887f,	// (0x0000887f) list_single_idle_plugin_player_pane_t2

0x888d,	// (0x0000888d) list_single_idle_plugin_player_pane_t3

0x889b,	// (0x0000889b) list_single_idle_plugin_player_pane_t4

0x0003,

0xb0dd,	// (0x0000b0dd) list_single_idle_plugin_player_pane_t

0x88a9,	// (0x000088a9) wait_bar_pane_cp15

0x88b1,	// (0x000088b1) grid_ai_notification_pane

0x55a4,	// (0x000055a4) list_single_idle_plugin_notification_pane_g1

0xe26c,	// (0x0000e26c) cell_ai_notification_pane_ParamLimits

0xe26c,	// (0x0000e26c) cell_ai_notification_pane

0x88c7,	// (0x000088c7) cell_ai_notification_pane_g1

0x88cf,	// (0x000088cf) cell_ai_notification_pane_t1

0xe279,	// (0x0000e279) tb_ext_find_button_pane

0xe281,	// (0x0000e281) tb_ext_find_pane_g1

0xe289,	// (0x0000e289) tb_ext_find_pane_t1

0x1d1e,	// (0x00001d1e) tb_ext_find_button_pane_g1

0x88fb,	// (0x000088fb) tb_ext_find_button_pane_g2

0x0001,

0xb0e6,	// (0x0000b0e6) tb_ext_find_button_pane_g

0xe099,	// (0x0000e099) main_idle_act4_pane_t1_ParamLimits

0xe0af,	// (0x0000e0af) main_idle_act4_pane_t2_ParamLimits

0xf2f6,	// (0x0000f2f6) main_idle_act4_pane_t_ParamLimits

0xe0e1,	// (0x0000e0e1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe0f9,	// (0x0000e0f9) sat_plugin_idle_act4_pane_ParamLimits

0xe0f9,	// (0x0000e0f9) sat_plugin_idle_act4_pane

0xe297,	// (0x0000e297) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe297,	// (0x0000e297) sat_plugin_idle_act4_pane_t1

0xe2af,	// (0x0000e2af) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe2af,	// (0x0000e2af) sat_plugin_idle_act4_pane_t2

0xe2c7,	// (0x0000e2c7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe2c7,	// (0x0000e2c7) sat_plugin_idle_act4_pane_t3

0xe2df,	// (0x0000e2df) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe2df,	// (0x0000e2df) sat_plugin_idle_act4_pane_t4

0x0003,

0xf317,	// (0x0000f317) sat_plugin_idle_act4_pane_t_ParamLimits

0xf317,	// (0x0000f317) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25_ParamLimits

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25

0x8950,	// (0x00008950) popup_battery_window_g1_ParamLimits

0x8950,	// (0x00008950) popup_battery_window_g1

0x895c,	// (0x0000895c) popup_battery_window_t1_ParamLimits

0x895c,	// (0x0000895c) popup_battery_window_t1

0x896e,	// (0x0000896e) popup_battery_window_t2_ParamLimits

0x896e,	// (0x0000896e) popup_battery_window_t2

0x0001,

0xb0f4,	// (0x0000b0f4) popup_battery_window_t_ParamLimits

0xb0f4,	// (0x0000b0f4) popup_battery_window_t

0xbff2,	// (0x0000bff2) midp_canvas_pane_ParamLimits

0xc04d,	// (0x0000c04d) midp_keypad_pane_ParamLimits

0xc04d,	// (0x0000c04d) midp_keypad_pane

0x2b34,	// (0x00002b34) main_midp_pane_ParamLimits

0x5ecd,	// (0x00005ecd) signal_pane_g2_cp_ParamLimits

0xe2f7,	// (0x0000e2f7) aid_size_cell_midp_keypad_ParamLimits

0xe2f7,	// (0x0000e2f7) aid_size_cell_midp_keypad

0xe315,	// (0x0000e315) midp_keyp_game_grid_pane_ParamLimits

0xe315,	// (0x0000e315) midp_keyp_game_grid_pane

0xe33c,	// (0x0000e33c) midp_keyp_rocker_pane_ParamLimits

0xe33c,	// (0x0000e33c) midp_keyp_rocker_pane

0xe37d,	// (0x0000e37d) midp_keyp_sk_left_pane_ParamLimits

0xe37d,	// (0x0000e37d) midp_keyp_sk_left_pane

0xe3d1,	// (0x0000e3d1) midp_keyp_sk_right_pane_ParamLimits

0xe3d1,	// (0x0000e3d1) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe425,	// (0x0000e425) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe425,	// (0x0000e425) midp_keyp_sk_right_pane_g1

0x64b5,	// (0x000064b5) midp_keyp_rocker_pane_g1

0xe42e,	// (0x0000e42e) keyp_game_cell_pane_ParamLimits

0xe42e,	// (0x0000e42e) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe452,	// (0x0000e452) keyp_game_cell_pane_g1

0xb375,	// (0x0000b375) popup_fep_vkb2_window_ParamLimits

0xb375,	// (0x0000b375) popup_fep_vkb2_window

0xe45b,	// (0x0000e45b) aid_size_cell_vkb2_ParamLimits

0xe45b,	// (0x0000e45b) aid_size_cell_vkb2

0xe491,	// (0x0000e491) popup_fep_vkb2_window_g1_ParamLimits

0xe491,	// (0x0000e491) popup_fep_vkb2_window_g1

0xe4e1,	// (0x0000e4e1) vkb2_area_bottom_pane_ParamLimits

0xe4e1,	// (0x0000e4e1) vkb2_area_bottom_pane

0xe535,	// (0x0000e535) vkb2_area_keypad_pane_ParamLimits

0xe535,	// (0x0000e535) vkb2_area_keypad_pane

0xe57d,	// (0x0000e57d) vkb2_area_top_pane_ParamLimits

0xe57d,	// (0x0000e57d) vkb2_area_top_pane

0xe603,	// (0x0000e603) vkb2_top_entry_pane_ParamLimits

0xe603,	// (0x0000e603) vkb2_top_entry_pane

0xe630,	// (0x0000e630) vkb2_top_grid_left_pane_ParamLimits

0xe630,	// (0x0000e630) vkb2_top_grid_left_pane

0xe650,	// (0x0000e650) vkb2_top_grid_right_pane_ParamLimits

0xe650,	// (0x0000e650) vkb2_top_grid_right_pane

0x8ce1,	// (0x00008ce1) vkb2_cell_keypad_pane_ParamLimits

0x8ce1,	// (0x00008ce1) vkb2_cell_keypad_pane

0xe696,	// (0x0000e696) vkb2_area_bottom_grid_pane_ParamLimits

0xe696,	// (0x0000e696) vkb2_area_bottom_grid_pane

0xe6c0,	// (0x0000e6c0) vkb2_area_bottom_pane_g1_ParamLimits

0xe6c0,	// (0x0000e6c0) vkb2_area_bottom_pane_g1

0xe6e6,	// (0x0000e6e6) vkb2_area_bottom_pane_g2_ParamLimits

0xe6e6,	// (0x0000e6e6) vkb2_area_bottom_pane_g2

0xe717,	// (0x0000e717) vkb2_area_bottom_pane_g3_ParamLimits

0xe717,	// (0x0000e717) vkb2_area_bottom_pane_g3

0x0002,

0xf320,	// (0x0000f320) vkb2_area_bottom_pane_g_ParamLimits

0xf320,	// (0x0000f320) vkb2_area_bottom_pane_g

0x8e8b,	// (0x00008e8b) vkb2_top_cell_left_pane_ParamLimits

0x8e8b,	// (0x00008e8b) vkb2_top_cell_left_pane

0xe781,	// (0x0000e781) vkb2_top_entry_pane_g1_ParamLimits

0xe781,	// (0x0000e781) vkb2_top_entry_pane_g1

0xe78f,	// (0x0000e78f) vkb2_top_entry_pane_t1_ParamLimits

0xe78f,	// (0x0000e78f) vkb2_top_entry_pane_t1

0x8ef3,	// (0x00008ef3) vkb2_top_entry_pane_t2_ParamLimits

0x8ef3,	// (0x00008ef3) vkb2_top_entry_pane_t2

0x8f25,	// (0x00008f25) vkb2_top_entry_pane_t3_ParamLimits

0x8f25,	// (0x00008f25) vkb2_top_entry_pane_t3

0x0002,

0xf327,	// (0x0000f327) vkb2_top_entry_pane_t_ParamLimits

0xf327,	// (0x0000f327) vkb2_top_entry_pane_t

0xe7c8,	// (0x0000e7c8) vkb2_top_grid_right_pane_g1_ParamLimits

0xe7c8,	// (0x0000e7c8) vkb2_top_grid_right_pane_g1

0x8f8c,	// (0x00008f8c) vkb2_top_grid_right_pane_g2_ParamLimits

0x8f8c,	// (0x00008f8c) vkb2_top_grid_right_pane_g2

0x8fa4,	// (0x00008fa4) vkb2_top_grid_right_pane_g3_ParamLimits

0x8fa4,	// (0x00008fa4) vkb2_top_grid_right_pane_g3

0xe7de,	// (0x0000e7de) vkb2_top_grid_right_pane_g4_ParamLimits

0xe7de,	// (0x0000e7de) vkb2_top_grid_right_pane_g4

0x0003,

0xf32e,	// (0x0000f32e) vkb2_top_grid_right_pane_g_ParamLimits

0xf32e,	// (0x0000f32e) vkb2_top_grid_right_pane_g

0x8fd2,	// (0x00008fd2) vkb2_top_cell_left_pane_g1

0x8fe9,	// (0x00008fe9) vkb2_cell_keypad_pane_g1_ParamLimits

0x8fe9,	// (0x00008fe9) vkb2_cell_keypad_pane_g1

0x8ff7,	// (0x00008ff7) vkb2_cell_keypad_pane_t1_ParamLimits

0x8ff7,	// (0x00008ff7) vkb2_cell_keypad_pane_t1

0x900e,	// (0x0000900e) vkb2_cell_bottom_grid_pane_ParamLimits

0x900e,	// (0x0000900e) vkb2_cell_bottom_grid_pane

0x9047,	// (0x00009047) vkb2_cell_bottom_grid_pane_g1

0xe12a,	// (0x0000e12a) aid_call2_pane_cp02

0xe132,	// (0x0000e132) aid_call_pane_cp02

0xe13a,	// (0x0000e13a) clock_digital_number_pane_cp10

0xe142,	// (0x0000e142) clock_digital_number_pane_cp11

0xe14a,	// (0x0000e14a) clock_digital_number_pane_cp12

0xe152,	// (0x0000e152) clock_digital_number_pane_cp13

0xe15a,	// (0x0000e15a) clock_digital_separator_pane_cp10

0x1d1e,	// (0x00001d1e) popup_clock_digital_analogue_window_cp2_g1

0x1d1e,	// (0x00001d1e) popup_clock_digital_analogue_window_cp2_g2

0xe162,	// (0x0000e162) popup_clock_digital_analogue_window_cp2_g3

0x1d1e,	// (0x00001d1e) popup_clock_digital_analogue_window_cp2_g4

0xe162,	// (0x0000e162) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf2fb,	// (0x0000f2fb) popup_clock_digital_analogue_window_cp2_g

0xe16a,	// (0x0000e16a) popup_clock_digital_analogue_window_cp2_t1

0xe178,	// (0x0000e178) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf306,	// (0x0000f306) popup_clock_digital_analogue_window_cp2_t

0x64b5,	// (0x000064b5) clock_digital_number_pane_cp10_g1

0x64b5,	// (0x000064b5) clock_digital_number_pane_cp10_g2

0x0001,

0xaeaf,	// (0x0000aeaf) clock_digital_number_pane_cp10_g

0x64b5,	// (0x000064b5) clock_digital_separator_pane_cp10_g1

0x64b5,	// (0x000064b5) clock_digital_separator_pane_cp10_g2

0x0001,

0xaeaf,	// (0x0000aeaf) clock_digital_separator_pane_cp10_g

0x859c,	// (0x0000859c) uniindi_top_pane_g3

0x85ad,	// (0x000085ad) uniindi_top_pane_g4

0x8d6c,	// (0x00008d6c) vkb2_row_keypad_pane_ParamLimits

0x8d6c,	// (0x00008d6c) vkb2_row_keypad_pane

0x9063,	// (0x00009063) vkb2_cell_t_keypad_pane_ParamLimits

0x9063,	// (0x00009063) vkb2_cell_t_keypad_pane

0x9073,	// (0x00009073) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9073,	// (0x00009073) vkb2_cell_t_keypad_pane_cp08

0x9086,	// (0x00009086) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9086,	// (0x00009086) vkb2_cell_t_keypad_pane_cp09

0x909a,	// (0x0000909a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x909a,	// (0x0000909a) vkb2_cell_t_keypad_pane_cp01

0x90ab,	// (0x000090ab) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x90ab,	// (0x000090ab) vkb2_cell_t_keypad_pane_cp02

0x90bc,	// (0x000090bc) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x90bc,	// (0x000090bc) vkb2_cell_t_keypad_pane_cp03

0x90cd,	// (0x000090cd) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x90cd,	// (0x000090cd) vkb2_cell_t_keypad_pane_cp04

0x90de,	// (0x000090de) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x90de,	// (0x000090de) vkb2_cell_t_keypad_pane_cp05

0x90ef,	// (0x000090ef) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x90ef,	// (0x000090ef) vkb2_cell_t_keypad_pane_cp06

0x9100,	// (0x00009100) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9100,	// (0x00009100) vkb2_cell_t_keypad_pane_cp07

0x9111,	// (0x00009111) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9111,	// (0x00009111) vkb2_cell_t_keypad_pane_cp10

0x6947,	// (0x00006947) vkb2_cell_t_keypad_pane_g1

0x9126,	// (0x00009126) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe7f4,	// (0x0000e7f4) aid_size_cell_graphic2_ParamLimits

0xe7f4,	// (0x0000e7f4) aid_size_cell_graphic2

0xe832,	// (0x0000e832) bg_popup_window_pane_cp21_ParamLimits

0xe832,	// (0x0000e832) bg_popup_window_pane_cp21

0xe840,	// (0x0000e840) graphic2_pages_pane_ParamLimits

0xe840,	// (0x0000e840) graphic2_pages_pane

0xe896,	// (0x0000e896) grid_graphic2_control_pane_ParamLimits

0xe896,	// (0x0000e896) grid_graphic2_control_pane

0xe8de,	// (0x0000e8de) grid_graphic2_pane_ParamLimits

0xe8de,	// (0x0000e8de) grid_graphic2_pane

0xe965,	// (0x0000e965) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7ce5,	// (0x00007ce5) list_ai3_gene_pane_ParamLimits

0xde03,	// (0x0000de03) bg_popup_window_pane_cp19_ParamLimits

0x811e,	// (0x0000811e) bg_touch_area_indi_pane_ParamLimits

0x811e,	// (0x0000811e) bg_touch_area_indi_pane

0x8134,	// (0x00008134) bg_touch_area_indi_pane_cp01_ParamLimits

0x8134,	// (0x00008134) bg_touch_area_indi_pane_cp01

0x814a,	// (0x0000814a) bg_touch_area_indi_pane_cp02_ParamLimits

0x814a,	// (0x0000814a) bg_touch_area_indi_pane_cp02

0x8162,	// (0x00008162) bg_touch_area_indi_pane_cp03_ParamLimits

0x8162,	// (0x00008162) bg_touch_area_indi_pane_cp03

0x817c,	// (0x0000817c) popup_slider_window_g1_ParamLimits

0x8198,	// (0x00008198) popup_slider_window_g2_ParamLimits

0x81b4,	// (0x000081b4) popup_slider_window_g3_ParamLimits

0xf2df,	// (0x0000f2df) popup_slider_window_g_ParamLimits

0x8210,	// (0x00008210) popup_slider_window_t1_ParamLimits

0x8284,	// (0x00008284) small_volume_slider_vertical_pane_ParamLimits

0xe965,	// (0x0000e965) cell_graphic2_pane_ParamLimits

0xe9c2,	// (0x0000e9c2) bg_button_pane_cp10_ParamLimits

0xe9c2,	// (0x0000e9c2) bg_button_pane_cp10

0xe9d5,	// (0x0000e9d5) bg_button_pane_cp11_ParamLimits

0xe9d5,	// (0x0000e9d5) bg_button_pane_cp11

0xe9e8,	// (0x0000e9e8) graphic2_pages_pane_g1_ParamLimits

0xe9e8,	// (0x0000e9e8) graphic2_pages_pane_g1

0xea03,	// (0x0000ea03) graphic2_pages_pane_g2_ParamLimits

0xea03,	// (0x0000ea03) graphic2_pages_pane_g2

0x0001,

0xf33c,	// (0x0000f33c) graphic2_pages_pane_g_ParamLimits

0xf33c,	// (0x0000f33c) graphic2_pages_pane_g

0xea1b,	// (0x0000ea1b) graphic2_pages_pane_t1_ParamLimits

0xea1b,	// (0x0000ea1b) graphic2_pages_pane_t1

0xea33,	// (0x0000ea33) cell_graphic2_control_pane_ParamLimits

0xea33,	// (0x0000ea33) cell_graphic2_control_pane

0xea65,	// (0x0000ea65) cell_graphic2_pane_g1_ParamLimits

0xea65,	// (0x0000ea65) cell_graphic2_pane_g1

0x6761,	// (0x00006761) cell_graphic2_pane_g2_ParamLimits

0x6761,	// (0x00006761) cell_graphic2_pane_g2

0xea72,	// (0x0000ea72) cell_graphic2_pane_g3_ParamLimits

0xea72,	// (0x0000ea72) cell_graphic2_pane_g3

0x676e,	// (0x0000676e) cell_graphic2_pane_g4_ParamLimits

0x676e,	// (0x0000676e) cell_graphic2_pane_g4

0xea7f,	// (0x0000ea7f) cell_graphic2_pane_g5_ParamLimits

0xea7f,	// (0x0000ea7f) cell_graphic2_pane_g5

0x0004,

0xf341,	// (0x0000f341) cell_graphic2_pane_g_ParamLimits

0xf341,	// (0x0000f341) cell_graphic2_pane_g

0xea9f,	// (0x0000ea9f) cell_graphic2_pane_t1_ParamLimits

0xea9f,	// (0x0000ea9f) cell_graphic2_pane_t1

0x4680,	// (0x00004680) grid_highlight_pane_cp11_ParamLimits

0x4680,	// (0x00004680) grid_highlight_pane_cp11

0x0831,	// (0x00000831) bg_button_pane_cp05

0xead4,	// (0x0000ead4) cell_graphic2_control_pane_g1

0x64b5,	// (0x000064b5) bg_touch_area_indi_pane_g1

0x93f6,	// (0x000093f6) aid_cmod_rocker_key_size

0x9400,	// (0x00009400) aid_cmode_itu_key_size

0x940a,	// (0x0000940a) main_cmode_video_pane

0x9414,	// (0x00009414) main_comp_mode_itu_pane

0x9420,	// (0x00009420) main_comp_mode_rocker_pane

0x942c,	// (0x0000942c) cell_cmode_rocker_pane_ParamLimits

0x942c,	// (0x0000942c) cell_cmode_rocker_pane

0x943e,	// (0x0000943e) cell_cmode_itu_pane_ParamLimits

0x943e,	// (0x0000943e) cell_cmode_itu_pane

0x1375,	// (0x00001375) bg_button_pane_cp06_ParamLimits

0x1375,	// (0x00001375) bg_button_pane_cp06

0x6947,	// (0x00006947) cell_cmode_rocker_pane_g1_ParamLimits

0x6947,	// (0x00006947) cell_cmode_rocker_pane_g1

0x83fa,	// (0x000083fa) cell_cmode_rocker_pane_g2_ParamLimits

0x83fa,	// (0x000083fa) cell_cmode_rocker_pane_g2

0x0001,

0xb12a,	// (0x0000b12a) cell_cmode_rocker_pane_g_ParamLimits

0xb12a,	// (0x0000b12a) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x9453,	// (0x00009453) cell_cmode_itu_pane_g1

0x945c,	// (0x0000945c) cell_cmode_itu_pane_t1

0x946a,	// (0x0000946a) cell_cmode_itu_pane_t2

0x0001,

0xb12f,	// (0x0000b12f) cell_cmode_itu_pane_t

0x861f,	// (0x0000861f) aid_touch_ctrl_left

0x8627,	// (0x00008627) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xeafa,	// (0x0000eafa) aid_cmod_rocker_key_size_cp

0xeb04,	// (0x0000eb04) aid_cmode_itu_key_size_cp

0x948c,	// (0x0000948c) compa_mode_pane_g1

0x9494,	// (0x00009494) compa_mode_pane_g2

0x949c,	// (0x0000949c) compa_mode_pane_g3

0x0002,

0xb134,	// (0x0000b134) compa_mode_pane_g

0xeb0e,	// (0x0000eb0e) main_comp_mode_itu_pane_cp

0xeb16,	// (0x0000eb16) main_comp_mode_rocker_pane_cp

0xeb1e,	// (0x0000eb1e) cell_cmode_itu_pane_cp_ParamLimits

0xeb1e,	// (0x0000eb1e) cell_cmode_itu_pane_cp

0xeb33,	// (0x0000eb33) cell_cmode_rocker_pane_cp_ParamLimits

0xeb33,	// (0x0000eb33) cell_cmode_rocker_pane_cp

0x1375,	// (0x00001375) bg_button_pane_cp06_cp_ParamLimits

0x1375,	// (0x00001375) bg_button_pane_cp06_cp

0x6947,	// (0x00006947) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6947,	// (0x00006947) cell_cmode_rocker_pane_g1_cp

0x64b5,	// (0x000064b5) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xeb45,	// (0x0000eb45) cell_cmode_itu_pane_g1_cp

0xeb4e,	// (0x0000eb4e) cell_cmode_itu_pane_t1_cp

0xeb4e,	// (0x0000eb4e) cell_cmode_itu_pane_t2_cp

0xd204,	// (0x0000d204) settings_code_pane_cp2

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3_ParamLimits

0x0a0b,	// (0x00000a0b) heading_pane_cp3_ParamLimits

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane_ParamLimits

0x651f,	// (0x0000651f) fep_hwr_aid_pane_ParamLimits

0x8300,	// (0x00008300) aid_touch_sctrl_top_ParamLimits

0x830d,	// (0x0000830d) sctrl_sk_top_pane_g1_ParamLimits

0x6947,	// (0x00006947) sctrl_sk_top_pane_g2_ParamLimits

0xb06a,	// (0x0000b06a) sctrl_sk_top_pane_g_ParamLimits

0x831a,	// (0x0000831a) sctrl_sk_top_pane_t1_ParamLimits

0x8300,	// (0x00008300) aid_touch_sctrl_bottom_ParamLimits

0x831a,	// (0x0000831a) sctrl_sk_bottom_pane_t1_ParamLimits

0x8568,	// (0x00008568) aid_area_touch_clock

0xe5c5,	// (0x0000e5c5) aid_vkb2_area_top_pane_cell_ParamLimits

0xe5c5,	// (0x0000e5c5) aid_vkb2_area_top_pane_cell

0xe670,	// (0x0000e670) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe670,	// (0x0000e670) aid_vkb2_area_bottom_pane_cell

0x8eab,	// (0x00008eab) popup_char_count_window

0x94e9,	// (0x000094e9) popup_char_count_window_g1

0x94f2,	// (0x000094f2) popup_char_count_window_g2

0x94fb,	// (0x000094fb) popup_char_count_window_g3

0x0002,

0xb13b,	// (0x0000b13b) popup_char_count_window_g

0x9504,	// (0x00009504) popup_char_count_window_t1

0x8b09,	// (0x00008b09) popup_fep_char_preview_window_ParamLimits

0x8b09,	// (0x00008b09) popup_fep_char_preview_window

0xe5e5,	// (0x0000e5e5) vkb2_top_candi_pane_ParamLimits

0xe5e5,	// (0x0000e5e5) vkb2_top_candi_pane

0xeb5c,	// (0x0000eb5c) cell_vkb2_top_candi_pane_ParamLimits

0xeb5c,	// (0x0000eb5c) cell_vkb2_top_candi_pane

0x3eb9,	// (0x00003eb9) bg_popup_fep_char_preview_window_ParamLimits

0x3eb9,	// (0x00003eb9) bg_popup_fep_char_preview_window

0x955f,	// (0x0000955f) popup_fep_char_preview_window_t1_ParamLimits

0x955f,	// (0x0000955f) popup_fep_char_preview_window_t1

0x9599,	// (0x00009599) bg_popup_fep_char_preview_window_g1

0x95a1,	// (0x000095a1) bg_popup_fep_char_preview_window_g2

0x95a9,	// (0x000095a9) bg_popup_fep_char_preview_window_g3

0x95b1,	// (0x000095b1) bg_popup_fep_char_preview_window_g4

0x95b9,	// (0x000095b9) bg_popup_fep_char_preview_window_g5

0x95c1,	// (0x000095c1) bg_popup_fep_char_preview_window_g6

0x95c9,	// (0x000095c9) bg_popup_fep_char_preview_window_g7

0x95d1,	// (0x000095d1) bg_popup_fep_char_preview_window_g8

0x95d9,	// (0x000095d9) bg_popup_fep_char_preview_window_g9

0x0008,

0xb142,	// (0x0000b142) bg_popup_fep_char_preview_window_g

0x6947,	// (0x00006947) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6947,	// (0x00006947) cell_vkb2_top_candi_pane_g1

0x6cb2,	// (0x00006cb2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6cb2,	// (0x00006cb2) cell_vkb2_top_candi_pane_g2

0x6cd3,	// (0x00006cd3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6cd3,	// (0x00006cd3) cell_vkb2_top_candi_pane_g3

0x95e1,	// (0x000095e1) cell_vkb2_top_candi_pane_g4_ParamLimits

0x95e1,	// (0x000095e1) cell_vkb2_top_candi_pane_g4

0x9602,	// (0x00009602) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9602,	// (0x00009602) cell_vkb2_top_candi_pane_g5

0x83fa,	// (0x000083fa) cell_vkb2_top_candi_pane_g6_ParamLimits

0x83fa,	// (0x000083fa) cell_vkb2_top_candi_pane_g6

0x0005,

0xb155,	// (0x0000b155) cell_vkb2_top_candi_pane_g_ParamLimits

0xb155,	// (0x0000b155) cell_vkb2_top_candi_pane_g

0x9623,	// (0x00009623) cell_vkb2_top_candi_pane_t1

0x4db9,	// (0x00004db9) aid_size_touch_slider_mark_ParamLimits

0x4db9,	// (0x00004db9) aid_size_touch_slider_mark

0xe87c,	// (0x0000e87c) grid_graphic2_catg_pane_ParamLimits

0xe87c,	// (0x0000e87c) grid_graphic2_catg_pane

0xe938,	// (0x0000e938) popup_grid_graphic2_window_t1_ParamLimits

0xe938,	// (0x0000e938) popup_grid_graphic2_window_t1

0xe94e,	// (0x0000e94e) popup_grid_graphic2_window_t2_ParamLimits

0xe94e,	// (0x0000e94e) popup_grid_graphic2_window_t2

0x0001,

0xf337,	// (0x0000f337) popup_grid_graphic2_window_t_ParamLimits

0xf337,	// (0x0000f337) popup_grid_graphic2_window_t

0x0831,	// (0x00000831) bg_button_pane_cp05_ParamLimits

0xead4,	// (0x0000ead4) cell_graphic2_control_pane_g1_ParamLimits

0xebc2,	// (0x0000ebc2) cell_graphic2_catg_pane_ParamLimits

0xebc2,	// (0x0000ebc2) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xebd4,	// (0x0000ebd4) cell_graphic2_catg_pane_g1

0x8534,	// (0x00008534) cell_tb_ext_pane_t1_ParamLimits

0x8f49,	// (0x00008f49) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8f49,	// (0x00008f49) vkb2_top_cell_right_narrow_pane

0x8f61,	// (0x00008f61) vkb2_top_cell_right_wide_pane_ParamLimits

0x8f61,	// (0x00008f61) vkb2_top_cell_right_wide_pane

0x6511,	// (0x00006511) bg_vkb2_func_pane_ParamLimits

0x6511,	// (0x00006511) bg_vkb2_func_pane

0x8fd2,	// (0x00008fd2) vkb2_top_cell_left_pane_g1_ParamLimits

0x6511,	// (0x00006511) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6511,	// (0x00006511) bg_vkb2_fuc_pane_cp03

0x9047,	// (0x00009047) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3686,	// (0x00003686) bg_vkb2_func_pane_g1

0x368e,	// (0x0000368e) bg_vkb2_func_pane_g2

0x369e,	// (0x0000369e) bg_vkb2_func_pane_g3

0x3696,	// (0x00003696) bg_vkb2_func_pane_g4

0x36a6,	// (0x000036a6) bg_vkb2_func_pane_g5

0x36ae,	// (0x000036ae) bg_vkb2_func_pane_g6

0x36b6,	// (0x000036b6) bg_vkb2_func_pane_g7

0x36be,	// (0x000036be) bg_vkb2_func_pane_g8

0x367e,	// (0x0000367e) bg_vkb2_func_pane_g9

0x0008,

0xb162,	// (0x0000b162) bg_vkb2_func_pane_g

0x6511,	// (0x00006511) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6511,	// (0x00006511) bg_vkb2_fuc_pane_cp01

0x8fd2,	// (0x00008fd2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8fd2,	// (0x00008fd2) vkb2_top_cell_right_wide_pane_g1

0x6511,	// (0x00006511) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6511,	// (0x00006511) bg_vkb2_fuc_pane_cp02

0x9047,	// (0x00009047) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9047,	// (0x00009047) vkb2_top_cell_right_narrow_pane_g1

0xdd43,	// (0x0000dd43) aid_touch_area_decrease_ParamLimits

0xdd43,	// (0x0000dd43) aid_touch_area_decrease

0xdd77,	// (0x0000dd77) aid_touch_area_increase_ParamLimits

0xdd77,	// (0x0000dd77) aid_touch_area_increase

0xdd9f,	// (0x0000dd9f) aid_touch_area_mute_ParamLimits

0xdd9f,	// (0x0000dd9f) aid_touch_area_mute

0xddcf,	// (0x0000ddcf) aid_touch_area_slider_ParamLimits

0xddcf,	// (0x0000ddcf) aid_touch_area_slider

0xde0f,	// (0x0000de0f) popup_slider_window_g4_ParamLimits

0xde0f,	// (0x0000de0f) popup_slider_window_g4

0xde37,	// (0x0000de37) popup_slider_window_g5_ParamLimits

0xde37,	// (0x0000de37) popup_slider_window_g5

0xde6b,	// (0x0000de6b) popup_slider_window_g6_ParamLimits

0xde6b,	// (0x0000de6b) popup_slider_window_g6

0x823e,	// (0x0000823e) popup_slider_window_t2_ParamLimits

0x823e,	// (0x0000823e) popup_slider_window_t2

0x0001,

0xb05e,	// (0x0000b05e) popup_slider_window_t_ParamLimits

0xb05e,	// (0x0000b05e) popup_slider_window_t

0xde87,	// (0x0000de87) slider_pane_ParamLimits

0xde87,	// (0x0000de87) slider_pane

0x965d,	// (0x0000965d) slider_pane_g1_ParamLimits

0x965d,	// (0x0000965d) slider_pane_g1

0x9671,	// (0x00009671) slider_pane_g2_ParamLimits

0x9671,	// (0x00009671) slider_pane_g2

0x9687,	// (0x00009687) slider_pane_g3_ParamLimits

0x9687,	// (0x00009687) slider_pane_g3

0x0003,

0xb175,	// (0x0000b175) slider_pane_g_ParamLimits

0xb175,	// (0x0000b175) slider_pane_g

0xc841,	// (0x0000c841) popup_tb_float_extension_window_ParamLimits

0xc841,	// (0x0000c841) popup_tb_float_extension_window

0x96b3,	// (0x000096b3) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x96bf,	// (0x000096bf) grid_tb_float_ext_pane

0x96c9,	// (0x000096c9) cell_tb_float_ext_pane_ParamLimits

0x96c9,	// (0x000096c9) cell_tb_float_ext_pane

0x96e3,	// (0x000096e3) cell_tb_float_ext_pane_g1

0x96ec,	// (0x000096ec) grid_highlight_pane_cp12

0xd605,	// (0x0000d605) cell_last_hwr_side_pane_ParamLimits

0xd605,	// (0x0000d605) cell_last_hwr_side_pane

0x64b5,	// (0x000064b5) cell_last_hwr_side_pane_g1

0x96f5,	// (0x000096f5) cell_last_hwr_side_pane_g2

0x0001,

0xb17e,	// (0x0000b17e) cell_last_hwr_side_pane_g

0xe74c,	// (0x0000e74c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe74c,	// (0x0000e74c) vkb2_area_bottom_space_btn_pane

0x6947,	// (0x00006947) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9126,	// (0x00009126) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9623,	// (0x00009623) cell_vkb2_top_candi_pane_t1_ParamLimits

0x96fe,	// (0x000096fe) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x96fe,	// (0x000096fe) vkb2_area_bottom_space_btn_pane_g1

0x9738,	// (0x00009738) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9738,	// (0x00009738) vkb2_area_bottom_space_btn_pane_g2

0x976e,	// (0x0000976e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x976e,	// (0x0000976e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb183,	// (0x0000b183) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb183,	// (0x0000b183) vkb2_area_bottom_space_btn_pane_g

0x65d4,	// (0x000065d4) cel_fep_hwr_func_pane_ParamLimits

0x65d4,	// (0x000065d4) cel_fep_hwr_func_pane

0xd5da,	// (0x0000d5da) cell_hwr_side_button_pane_ParamLimits

0xd5da,	// (0x0000d5da) cell_hwr_side_button_pane

0x8568,	// (0x00008568) aid_area_touch_clock_ParamLimits

0x0831,	// (0x00000831) bg_uniindi_top_pane_ParamLimits

0x857a,	// (0x0000857a) uniindi_top_pane_g1_ParamLimits

0x8590,	// (0x00008590) uniindi_top_pane_g2_ParamLimits

0x859c,	// (0x0000859c) uniindi_top_pane_g3_ParamLimits

0x85ad,	// (0x000085ad) uniindi_top_pane_g4_ParamLimits

0xb096,	// (0x0000b096) uniindi_top_pane_g_ParamLimits

0x85ba,	// (0x000085ba) uniindi_top_pane_t1_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01

0x97b8,	// (0x000097b8) cel_fep_hwr_func_pane_g1_ParamLimits

0x97b8,	// (0x000097b8) cel_fep_hwr_func_pane_g1

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02

0x97b8,	// (0x000097b8) cell_hwr_side_button_pane_g1_ParamLimits

0x97b8,	// (0x000097b8) cell_hwr_side_button_pane_g1

0x3450,	// (0x00003450) status_pane_g4_ParamLimits

0x3450,	// (0x00003450) status_pane_g4

0x346a,	// (0x0000346a) status_pane_t1

0x61ef,	// (0x000061ef) form2_midp_gauge_slider_cont_pane

0x61f7,	// (0x000061f7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd530,	// (0x0000d530) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd542,	// (0x0000d542) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf283,	// (0x0000f283) form2_midp_gauge_slider_pane_t_ParamLimits

0x622d,	// (0x0000622d) form2_midp_slider_pane_ParamLimits

0x8ac9,	// (0x00008ac9) aid_size_cell_func_vkb2_ParamLimits

0x8ac9,	// (0x00008ac9) aid_size_cell_func_vkb2

0x969f,	// (0x0000969f) slider_pane_g4_ParamLimits

0x969f,	// (0x0000969f) slider_pane_g4

0xebdd,	// (0x0000ebdd) form2_midp_gauge_slider_pane_t2_cp01

0xebeb,	// (0x0000ebeb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xebeb,	// (0x0000ebeb) form2_midp_gauge_slider_pane_t3_cp01

0x97f1,	// (0x000097f1) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9825,	// (0x00009825) navi_smil_pane_g1

0x982d,	// (0x0000982d) navi_smil_pane_t1

0x97fa,	// (0x000097fa) form2_midp_slider_pane_g1

0x9803,	// (0x00009803) form2_midp_slider_pane_g2

0x980b,	// (0x0000980b) form2_midp_slider_pane_g3

0x97fa,	// (0x000097fa) form2_midp_slider_pane_g4

0xec08,	// (0x0000ec08) form2_midp_slider_pane_g5

0x0004,

0xf351,	// (0x0000f351) form2_midp_slider_pane_g

0x97a8,	// (0x000097a8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x97a8,	// (0x000097a8) vkb2_area_bottom_space_btn_pane_g4

0xca24,	// (0x0000ca24) lc0_navi_pane_ParamLimits

0xca24,	// (0x0000ca24) lc0_navi_pane

0xca8e,	// (0x0000ca8e) lc0_stat_indi_pane_ParamLimits

0xca8e,	// (0x0000ca8e) lc0_stat_indi_pane

0xcaa3,	// (0x0000caa3) ls0_title_pane_ParamLimits

0xcaa3,	// (0x0000caa3) ls0_title_pane

0x1375,	// (0x00001375) bg_popup_sub_pane_cp14_ParamLimits

0x854f,	// (0x0000854f) list_uniindi_pane_ParamLimits

0x855b,	// (0x0000855b) uniindi_top_pane_ParamLimits

0x85f7,	// (0x000085f7) list_single_uniindi_pane_g1_ParamLimits

0x860a,	// (0x0000860a) list_single_uniindi_pane_t1_ParamLimits

0xec13,	// (0x0000ec13) lc0_stat_clock_pane_ParamLimits

0xec13,	// (0x0000ec13) lc0_stat_clock_pane

0xec20,	// (0x0000ec20) lc0_stat_indi_pane_g1_ParamLimits

0xec20,	// (0x0000ec20) lc0_stat_indi_pane_g1

0xec2d,	// (0x0000ec2d) lc0_stat_indi_pane_g2_ParamLimits

0xec2d,	// (0x0000ec2d) lc0_stat_indi_pane_g2

0x0001,

0xf35c,	// (0x0000f35c) lc0_stat_indi_pane_g_ParamLimits

0xf35c,	// (0x0000f35c) lc0_stat_indi_pane_g

0xec3a,	// (0x0000ec3a) lc0_uni_indicator_pane_ParamLimits

0xec3a,	// (0x0000ec3a) lc0_uni_indicator_pane

0xec47,	// (0x0000ec47) ls0_title_pane_g1_ParamLimits

0xec47,	// (0x0000ec47) ls0_title_pane_g1

0xec5b,	// (0x0000ec5b) ls0_title_pane_t1_ParamLimits

0xec5b,	// (0x0000ec5b) ls0_title_pane_t1

0xec89,	// (0x0000ec89) lc0_uni_indicator_pane_g1_ParamLimits

0xec89,	// (0x0000ec89) lc0_uni_indicator_pane_g1

0x98cd,	// (0x000098cd) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x98db,	// (0x000098db) ai5_sk_pane_ParamLimits

0x98db,	// (0x000098db) ai5_sk_pane

0xecb0,	// (0x0000ecb0) cell_ai5_widget_pane_ParamLimits

0xecb0,	// (0x0000ecb0) cell_ai5_widget_pane

0x999e,	// (0x0000999e) aid_size_cell_widget_grid

0x99b2,	// (0x000099b2) bg_ai5_widget_pane_ParamLimits

0x99b2,	// (0x000099b2) bg_ai5_widget_pane

0x99fc,	// (0x000099fc) cell_ai5_widget_pane_g2

0x9a0c,	// (0x00009a0c) cell_ai5_widget_pane_g3

0x9a2b,	// (0x00009a2b) cell_ai5_widget_pane_g4

0x9a37,	// (0x00009a37) cell_ai5_widget_pane_g5

0x9a43,	// (0x00009a43) cell_ai5_widget_pane_g6

0x9a4f,	// (0x00009a4f) cell_ai5_widget_pane_g7

0x9a97,	// (0x00009a97) cell_ai5_widget_pane_t1_ParamLimits

0x9a97,	// (0x00009a97) cell_ai5_widget_pane_t1

0x9ab4,	// (0x00009ab4) cell_ai5_widget_pane_t2_ParamLimits

0x9ab4,	// (0x00009ab4) cell_ai5_widget_pane_t2

0x9acc,	// (0x00009acc) cell_ai5_widget_pane_t3_ParamLimits

0x9acc,	// (0x00009acc) cell_ai5_widget_pane_t3

0x9ae4,	// (0x00009ae4) cell_ai5_widget_pane_t4_ParamLimits

0x9ae4,	// (0x00009ae4) cell_ai5_widget_pane_t4

0x9afe,	// (0x00009afe) cell_ai5_widget_pane_t5_ParamLimits

0x9afe,	// (0x00009afe) cell_ai5_widget_pane_t5

0x9b1d,	// (0x00009b1d) cell_ai5_widget_pane_t6_ParamLimits

0x9b1d,	// (0x00009b1d) cell_ai5_widget_pane_t6

0x9b2f,	// (0x00009b2f) cell_ai5_widget_pane_t7_ParamLimits

0x9b2f,	// (0x00009b2f) cell_ai5_widget_pane_t7

0x9b48,	// (0x00009b48) cell_ai5_widget_pane_t8_ParamLimits

0x9b48,	// (0x00009b48) cell_ai5_widget_pane_t8

0x0009,

0xb1b1,	// (0x0000b1b1) cell_ai5_widget_pane_t_ParamLimits

0xb1b1,	// (0x0000b1b1) cell_ai5_widget_pane_t

0x9b94,	// (0x00009b94) grid_ai5_widget_pane

0x1375,	// (0x00001375) highlight_cell_ai5_widget_pane_ParamLimits

0x1375,	// (0x00001375) highlight_cell_ai5_widget_pane

0xed1a,	// (0x0000ed1a) ai5_sk_left_pane

0xed24,	// (0x0000ed24) ai5_sk_middle_pane

0xed2e,	// (0x0000ed2e) ai5_sk_right_pane

0x9bca,	// (0x00009bca) bg_ai5_widget_pane_g1_ParamLimits

0x9bca,	// (0x00009bca) bg_ai5_widget_pane_g1

0x9bd6,	// (0x00009bd6) bg_ai5_widget_pane_g2_ParamLimits

0x9bd6,	// (0x00009bd6) bg_ai5_widget_pane_g2

0x9be2,	// (0x00009be2) bg_ai5_widget_pane_g3_ParamLimits

0x9be2,	// (0x00009be2) bg_ai5_widget_pane_g3

0x9bee,	// (0x00009bee) bg_ai5_widget_pane_g4_ParamLimits

0x9bee,	// (0x00009bee) bg_ai5_widget_pane_g4

0x9bfa,	// (0x00009bfa) bg_ai5_widget_pane_g5_ParamLimits

0x9bfa,	// (0x00009bfa) bg_ai5_widget_pane_g5

0x9c06,	// (0x00009c06) bg_ai5_widget_pane_g6_ParamLimits

0x9c06,	// (0x00009c06) bg_ai5_widget_pane_g6

0x9c12,	// (0x00009c12) bg_ai5_widget_pane_g7_ParamLimits

0x9c12,	// (0x00009c12) bg_ai5_widget_pane_g7

0x9c1e,	// (0x00009c1e) bg_ai5_widget_pane_g8_ParamLimits

0x9c1e,	// (0x00009c1e) bg_ai5_widget_pane_g8

0x9c2a,	// (0x00009c2a) bg_ai5_widget_pane_g9_ParamLimits

0x9c2a,	// (0x00009c2a) bg_ai5_widget_pane_g9

0x0008,

0xb1c6,	// (0x0000b1c6) bg_ai5_widget_pane_g_ParamLimits

0xb1c6,	// (0x0000b1c6) bg_ai5_widget_pane_g

0x9c5d,	// (0x00009c5d) cell_shortcut_ai5_widget_pane_ParamLimits

0x9c5d,	// (0x00009c5d) cell_shortcut_ai5_widget_pane

0x0671,	// (0x00000671) bg_cell_shortcut_ai5_widget_pane

0x9c6e,	// (0x00009c6e) cell_grid_ai5_widget_pane_g1

0x9c77,	// (0x00009c77) highlight_cell_shortcut_ai5_widget_pane

0x368e,	// (0x0000368e) ai5_sk_left_pane_g1

0x9c7f,	// (0x00009c7f) ai5_sk_left_pane_g2

0x9c87,	// (0x00009c87) ai5_sk_left_pane_g3

0x9c8f,	// (0x00009c8f) ai5_sk_left_pane_g4

0x0003,

0xb1d9,	// (0x0000b1d9) ai5_sk_left_pane_g

0x9c97,	// (0x00009c97) ai5_sk_left_pane_t1

0x3686,	// (0x00003686) ai5_sk_right_pane_g1

0x9ca5,	// (0x00009ca5) ai5_sk_right_pane_g2

0x9cad,	// (0x00009cad) ai5_sk_right_pane_g3

0x9cb5,	// (0x00009cb5) ai5_sk_right_pane_g4

0x0003,

0xb1e2,	// (0x0000b1e2) ai5_sk_right_pane_g

0x9cbd,	// (0x00009cbd) ai5_sk_right_pane_t1

0x3686,	// (0x00003686) ai5_sk_middle_pane_g1

0x368e,	// (0x0000368e) ai5_sk_middle_pane_g2

0x36a6,	// (0x000036a6) ai5_sk_middle_pane_g3

0x9cad,	// (0x00009cad) ai5_sk_middle_pane_g4

0x9c87,	// (0x00009c87) ai5_sk_middle_pane_g5

0x9ccb,	// (0x00009ccb) ai5_sk_middle_pane_g6

0xed38,	// (0x0000ed38) ai5_sk_middle_pane_g7

0x0006,

0xf361,	// (0x0000f361) ai5_sk_middle_pane_g

0xc910,	// (0x0000c910) aid_touch_area_size_lc0_ParamLimits

0xc910,	// (0x0000c910) aid_touch_area_size_lc0

0x6cf4,	// (0x00006cf4) cell_hwr_candidate_pane_t1_ParamLimits

0x3139,	// (0x00003139) aid_touch_navi_pane

0xcb96,	// (0x0000cb96) status_dt_navi_pane_ParamLimits

0xcb96,	// (0x0000cb96) status_dt_navi_pane

0xcbae,	// (0x0000cbae) status_dt_sta_pane_ParamLimits

0xcbae,	// (0x0000cbae) status_dt_sta_pane

0xed40,	// (0x0000ed40) dt_sta_controll_pane

0xed4d,	// (0x0000ed4d) dt_sta_indi_pane

0xed5a,	// (0x0000ed5a) dt_sta_title_pane

0x0831,	// (0x00000831) bg_dt_sta_indi_pane_ParamLimits

0x0831,	// (0x00000831) bg_dt_sta_indi_pane

0x9d06,	// (0x00009d06) dt_sta_battery_pane

0x9d0e,	// (0x00009d0e) dt_sta_indi_pane_g1

0x9d17,	// (0x00009d17) dt_sta_indi_pane_g2

0x9d20,	// (0x00009d20) dt_sta_indi_pane_g3

0x0002,

0xb1fa,	// (0x0000b1fa) dt_sta_indi_pane_g

0x9d29,	// (0x00009d29) dt_sta_signal_pane

0x1375,	// (0x00001375) bg_dt_sta_title_pane_ParamLimits

0x1375,	// (0x00001375) bg_dt_sta_title_pane

0x9d32,	// (0x00009d32) dt_sta_title_pane_g1

0x9d3a,	// (0x00009d3a) dt_sta_title_pane_t1_ParamLimits

0x9d3a,	// (0x00009d3a) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0x9d4f,	// (0x00009d4f) dt_sta_controll_pane_g1

0x9d58,	// (0x00009d58) bg_dt_sta_title_pane_g1

0x9d61,	// (0x00009d61) bg_dt_sta_title_pane_g2

0x9d6a,	// (0x00009d6a) bg_dt_sta_title_pane_g3

0x0002,

0xb201,	// (0x0000b201) bg_dt_sta_title_pane_g

0x64b5,	// (0x000064b5) bg_dt_sta_indi_pane_g1

0x9d73,	// (0x00009d73) dt_sta_signal_pane_g1

0x9d7b,	// (0x00009d7b) dt_sta_signal_pane_g2

0x0001,

0xb208,	// (0x0000b208) dt_sta_signal_pane_g

0x9d83,	// (0x00009d83) dt_sta_battery_pane_g1

0x9d8c,	// (0x00009d8c) dt_sta_battery_pane_t1

0x64b5,	// (0x000064b5) bg_dt_sta_control_pane_g1

0x1f01,	// (0x00001f01) fep_china_uni_eep_pane

0x1f09,	// (0x00001f09) fep_china_uni_entry_pane_ParamLimits

0x1f19,	// (0x00001f19) popup_fep_china_uni_window_g1_ParamLimits

0x1f29,	// (0x00001f29) popup_fep_china_uni_window_g2_ParamLimits

0x1f29,	// (0x00001f29) popup_fep_china_uni_window_g2

0x0001,

0xaaa6,	// (0x0000aaa6) popup_fep_china_uni_window_g_ParamLimits

0xaaa6,	// (0x0000aaa6) popup_fep_china_uni_window_g

0x9d9b,	// (0x00009d9b) fep_china_uni_eep_pane_g1

0x9da3,	// (0x00009da3) fep_china_uni_eep_pane_t1

0x981c,	// (0x0000981c) aid_touch_area_size_smil_player

0x3285,	// (0x00003285) lc0_clock_pane

0x345e,	// (0x0000345e) status_pane_g5_ParamLimits

0x345e,	// (0x0000345e) status_pane_g5

0xc3e7,	// (0x0000c3e7) popup_keymap_window

0x3424,	// (0x00003424) status_icon_pane

0x9a0c,	// (0x00009a0c) cell_ai5_widget_pane_g3_ParamLimits

0x9a2b,	// (0x00009a2b) cell_ai5_widget_pane_g4_ParamLimits

0x9a37,	// (0x00009a37) cell_ai5_widget_pane_g5_ParamLimits

0x9a5b,	// (0x00009a5b) cell_ai5_widget_pane_g8_ParamLimits

0x9a5b,	// (0x00009a5b) cell_ai5_widget_pane_g8

0x9a6f,	// (0x00009a6f) cell_ai5_widget_pane_g9_ParamLimits

0x9a6f,	// (0x00009a6f) cell_ai5_widget_pane_g9

0x9a83,	// (0x00009a83) cell_ai5_widget_pane_g10_ParamLimits

0x9a83,	// (0x00009a83) cell_ai5_widget_pane_g10

0x9db2,	// (0x00009db2) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9dba,	// (0x00009dba) popup_keymap_window_t1

0xc0f9,	// (0x0000c0f9) control_pane_g6_ParamLimits

0xc0f9,	// (0x0000c0f9) control_pane_g6

0xc106,	// (0x0000c106) control_pane_g7_ParamLimits

0xc106,	// (0x0000c106) control_pane_g7

0xc113,	// (0x0000c113) control_pane_g8_ParamLimits

0xc113,	// (0x0000c113) control_pane_g8

0xed40,	// (0x0000ed40) dt_sta_controll_pane_ParamLimits

0xed4d,	// (0x0000ed4d) dt_sta_indi_pane_ParamLimits

0xed5a,	// (0x0000ed5a) dt_sta_title_pane_ParamLimits

0x0d4c,	// (0x00000d4c) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb3bb,	// (0x0000b3bb) popup_sk_window

0x3eb9,	// (0x00003eb9) bg_popup_sub_pane_cp28_ParamLimits

0x3eb9,	// (0x00003eb9) bg_popup_sub_pane_cp28

0x9dc8,	// (0x00009dc8) popup_discreet_window_g1_ParamLimits

0x9dc8,	// (0x00009dc8) popup_discreet_window_g1

0x9de8,	// (0x00009de8) popup_discreet_window_t1_ParamLimits

0x9de8,	// (0x00009de8) popup_discreet_window_t1

0x9e06,	// (0x00009e06) popup_discreet_window_t2_ParamLimits

0x9e06,	// (0x00009e06) popup_discreet_window_t2

0x0002,

0xb20d,	// (0x0000b20d) popup_discreet_window_t_ParamLimits

0xb20d,	// (0x0000b20d) popup_discreet_window_t

0x9e58,	// (0x00009e58) popup_sk_window_g1

0x9e62,	// (0x00009e62) popup_sk_window_g2

0x0001,

0xb214,	// (0x0000b214) popup_sk_window_g

0x9e6c,	// (0x00009e6c) popup_sk_window_t1

0x9e7a,	// (0x00009e7a) popup_sk_window_t1_copy1

0x99fc,	// (0x000099fc) cell_ai5_widget_pane_g2_ParamLimits

0x9b5a,	// (0x00009b5a) cell_ai5_widget_pane_t9_ParamLimits

0x9b5a,	// (0x00009b5a) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xed6c,	// (0x0000ed6c) aid_fshwr2_btn_pane

0xed74,	// (0x0000ed74) aid_fshwr2_syb_pane

0xed7c,	// (0x0000ed7c) aid_fshwr2_txt_pane

0xed84,	// (0x0000ed84) fshwr2_func_candi_pane

0xed8e,	// (0x0000ed8e) fshwr2_hwr_syb_pane

0xed9c,	// (0x0000ed9c) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xeda6,	// (0x0000eda6) fshwr2_icf_pane_t1_ParamLimits

0xeda6,	// (0x0000eda6) fshwr2_icf_pane_t1

0x64b5,	// (0x000064b5) fshwr2_func_candi_pane_g1

0x9eed,	// (0x00009eed) fshwr2_func_candi_row_pane_ParamLimits

0x9eed,	// (0x00009eed) fshwr2_func_candi_row_pane

0xedbe,	// (0x0000edbe) cell_fshwr2_syb_pane_ParamLimits

0xedbe,	// (0x0000edbe) cell_fshwr2_syb_pane

0x6947,	// (0x00006947) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6947,	// (0x00006947) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0x9f18,	// (0x00009f18) fshwr2_func_candi_cell_pane_ParamLimits

0x9f18,	// (0x00009f18) fshwr2_func_candi_cell_pane

0x9f49,	// (0x00009f49) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f49,	// (0x00009f49) fshwr2_func_candi_cell_bg_pane

0x9f63,	// (0x00009f63) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9f63,	// (0x00009f63) fshwr2_func_candi_cell_pane_g1

0x9f8b,	// (0x00009f8b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f8b,	// (0x00009f8b) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x25c7,	// (0x000025c7) cell_fshwr2_syb_bg_pane

0xedd8,	// (0x0000edd8) cell_fshwr2_syb_bg_pane_g1

0xede0,	// (0x0000ede0) cell_fshwr2_syb_bg_pane_t1

0x1375,	// (0x00001375) main_tmo_pane

0x4b2c,	// (0x00004b2c) uni_indicator_pane_g1_ParamLimits

0x4b41,	// (0x00004b41) uni_indicator_pane_g2_ParamLimits

0x4b57,	// (0x00004b57) uni_indicator_pane_g3_ParamLimits

0x4b6d,	// (0x00004b6d) uni_indicator_pane_g4_ParamLimits

0x4b6d,	// (0x00004b6d) uni_indicator_pane_g4

0x4b81,	// (0x00004b81) uni_indicator_pane_g5_ParamLimits

0x4b81,	// (0x00004b81) uni_indicator_pane_g5

0x4b95,	// (0x00004b95) uni_indicator_pane_g6_ParamLimits

0x4b95,	// (0x00004b95) uni_indicator_pane_g6

0xac9c,	// (0x0000ac9c) uni_indicator_pane_g_ParamLimits

0xdd1f,	// (0x0000dd1f) popup_tmo_note_window_ParamLimits

0xdd1f,	// (0x0000dd1f) popup_tmo_note_window

0x0024,	// (0x00000024) fshwr2_bg_pane

0x9f7c,	// (0x00009f7c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f7c,	// (0x00009f7c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xb219,	// (0x0000b219) fshwr2_func_candi_cell_pane_g_ParamLimits

0xb219,	// (0x0000b219) fshwr2_func_candi_cell_pane_g

0x64b5,	// (0x000064b5) bg_popup_window_pane_cp01

0x9fb5,	// (0x00009fb5) bg_popup_window_pane_g1_cp01

0x9fbe,	// (0x00009fbe) bg_popup_window_pane_cp22_ParamLimits

0x9fbe,	// (0x00009fbe) bg_popup_window_pane_cp22

0x9fcc,	// (0x00009fcc) listscroll_tmo_link_pane_ParamLimits

0x9fcc,	// (0x00009fcc) listscroll_tmo_link_pane

0xa00c,	// (0x0000a00c) popup_tmo_note_window_g1_ParamLimits

0xa00c,	// (0x0000a00c) popup_tmo_note_window_g1

0xa019,	// (0x0000a019) tmo_note_info_pane_ParamLimits

0xa019,	// (0x0000a019) tmo_note_info_pane

0xedef,	// (0x0000edef) list_tmo_note_info_pane_g1_ParamLimits

0xedef,	// (0x0000edef) list_tmo_note_info_pane_g1

0xa04a,	// (0x0000a04a) list_tmo_note_info_pane_g2_ParamLimits

0xa04a,	// (0x0000a04a) list_tmo_note_info_pane_g2

0x0001,

0xf370,	// (0x0000f370) list_tmo_note_info_pane_g_ParamLimits

0xf370,	// (0x0000f370) list_tmo_note_info_pane_g

0xa066,	// (0x0000a066) list_tmo_note_info_text_pane_ParamLimits

0xa066,	// (0x0000a066) list_tmo_note_info_text_pane

0xa0e7,	// (0x0000a0e7) list_tmo_link_pane

0xa0f4,	// (0x0000a0f4) scroll_pane_cp20

0xa101,	// (0x0000a101) list_single_tmo_link_pane_ParamLimits

0xa101,	// (0x0000a101) list_single_tmo_link_pane

0xa111,	// (0x0000a111) list_single_tmo_link_pane_t1

0xa11f,	// (0x0000a11f) list_tmo_note_info_text_pane_t1_ParamLimits

0xa11f,	// (0x0000a11f) list_tmo_note_info_text_pane_t1

0xbcdf,	// (0x0000bcdf) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbcdf,	// (0x0000bcdf) aid_size_touch_scroll_bar_cp01

0xbc0f,	// (0x0000bc0f) aid_size_touch_slider_marker

0xb3ab,	// (0x0000b3ab) popup_settings_window_ParamLimits

0xb3ab,	// (0x0000b3ab) popup_settings_window

0x2b5c,	// (0x00002b5c) popup_candi_list_indi_window

0x3139,	// (0x00003139) aid_touch_navi_pane_ParamLimits

0x82d4,	// (0x000082d4) rs_clock_indi_pane

0x82dd,	// (0x000082dd) sctrl_sk_bottom_pane_ParamLimits

0x82ee,	// (0x000082ee) sctrl_sk_top_pane_ParamLimits

0x8b23,	// (0x00008b23) popup_fep_tooltip_window

0x999e,	// (0x0000999e) aid_size_cell_widget_grid_ParamLimits

0x99f0,	// (0x000099f0) cell_ai5_widget_pane_g1_ParamLimits

0x99f0,	// (0x000099f0) cell_ai5_widget_pane_g1

0x9a43,	// (0x00009a43) cell_ai5_widget_pane_g6_ParamLimits

0x9a4f,	// (0x00009a4f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb19c,	// (0x0000b19c) cell_ai5_widget_pane_g_ParamLimits

0xb19c,	// (0x0000b19c) cell_ai5_widget_pane_g

0x9b7e,	// (0x00009b7e) cell_ai5_widget_pane_t10_ParamLimits

0x9b7e,	// (0x00009b7e) cell_ai5_widget_pane_t10

0x9b94,	// (0x00009b94) grid_ai5_widget_pane_ParamLimits

0x9c36,	// (0x00009c36) cell_contacts_ai5_widget_pane_ParamLimits

0x9c36,	// (0x00009c36) cell_contacts_ai5_widget_pane

0x9e1b,	// (0x00009e1b) popup_discreet_window_t3_ParamLimits

0x9e1b,	// (0x00009e1b) popup_discreet_window_t3

0x9ec2,	// (0x00009ec2) popup_fshwr2_char_preview_window_ParamLimits

0x9ec2,	// (0x00009ec2) popup_fshwr2_char_preview_window

0xee06,	// (0x0000ee06) tmo_note_info_pane_t1

0xee1b,	// (0x0000ee1b) tmo_note_info_pane_t2

0xee32,	// (0x0000ee32) tmo_note_info_pane_t3

0xa0c3,	// (0x0000a0c3) tmo_note_info_pane_t4

0xa0d5,	// (0x0000a0d5) tmo_note_info_pane_t5

0x0004,

0xf375,	// (0x0000f375) tmo_note_info_pane_t

0xa0e7,	// (0x0000a0e7) list_tmo_link_pane_ParamLimits

0xa0f4,	// (0x0000a0f4) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa138,	// (0x0000a138) popup_fshwr2_char_preview_window_t1

0xa146,	// (0x0000a146) popup_candi_list_indi_window_g1

0xa14f,	// (0x0000a14f) bg_cell_contacts_ai5_widget_pane

0xa15b,	// (0x0000a15b) cell_contacts_ai5_widget_pane_g1

0xa16f,	// (0x0000a16f) cell_contacts_ai5_widget_pane_g2

0xa17e,	// (0x0000a17e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb22e,	// (0x0000b22e) cell_contacts_ai5_widget_pane_g

0xa191,	// (0x0000a191) cell_contacts_ai5_widget_pane_t1

0x1375,	// (0x00001375) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeeac,	// (0x0000eeac) settings_container_pane

0x25c7,	// (0x000025c7) listscroll_set_pane_copy1

0x5938,	// (0x00005938) scroll_pane_cp121_copy1

0xa214,	// (0x0000a214) set_content_pane_copy1

0xeeb8,	// (0x0000eeb8) aid_height_set_list_copy1_ParamLimits

0xeeb8,	// (0x0000eeb8) aid_height_set_list_copy1

0x4e7d,	// (0x00004e7d) aid_size_parent_copy1_ParamLimits

0x4e7d,	// (0x00004e7d) aid_size_parent_copy1

0xeec4,	// (0x0000eec4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeec4,	// (0x0000eec4) button_value_adjust_pane_cp6_copy1

0x2b34,	// (0x00002b34) list_highlight_pane_cp2_copy1_ParamLimits

0x2b34,	// (0x00002b34) list_highlight_pane_cp2_copy1

0xeed8,	// (0x0000eed8) list_set_pane_copy1_ParamLimits

0xeed8,	// (0x0000eed8) list_set_pane_copy1

0xee47,	// (0x0000ee47) main_pane_set_t1_copy1_ParamLimits

0xee47,	// (0x0000ee47) main_pane_set_t1_copy1

0xee81,	// (0x0000ee81) main_pane_set_t2_copy1_ParamLimits

0xee81,	// (0x0000ee81) main_pane_set_t2_copy1

0xef85,	// (0x0000ef85) main_pane_set_t3_copy1

0xef93,	// (0x0000ef93) main_pane_set_t4_copy1

0xeea0,	// (0x0000eea0) set_content_pane_g1_copy1_ParamLimits

0xeea0,	// (0x0000eea0) set_content_pane_g1_copy1

0xefa1,	// (0x0000efa1) setting_code_pane_copy1

0xa30f,	// (0x0000a30f) setting_slider_graphic_pane_copy1

0xa30f,	// (0x0000a30f) setting_slider_pane_copy1

0xa30f,	// (0x0000a30f) setting_text_pane_copy1

0xa319,	// (0x0000a319) setting_volume_pane_copy1

0xefab,	// (0x0000efab) settings_code_pane_cp2_copy1

0xefb3,	// (0x0000efb3) settings_code_pane_cp_copy1_ParamLimits

0xefb3,	// (0x0000efb3) settings_code_pane_cp_copy1

0xefc7,	// (0x0000efc7) volume_set_pane_copy1

0xefcf,	// (0x0000efcf) volume_set_pane_g10_copy1

0xefd7,	// (0x0000efd7) volume_set_pane_g1_copy1

0xefdf,	// (0x0000efdf) volume_set_pane_g2_copy1

0xefe7,	// (0x0000efe7) volume_set_pane_g3_copy1

0xefef,	// (0x0000efef) volume_set_pane_g4_copy1

0xeff7,	// (0x0000eff7) volume_set_pane_g5_copy1

0xefff,	// (0x0000efff) volume_set_pane_g6_copy1

0xf007,	// (0x0000f007) volume_set_pane_g7_copy1

0xf00f,	// (0x0000f00f) volume_set_pane_g8_copy1

0xf017,	// (0x0000f017) volume_set_pane_g9_copy1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1_ParamLimits

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1

0xa396,	// (0x0000a396) setting_slider_pane_t1_copy1_ParamLimits

0xa396,	// (0x0000a396) setting_slider_pane_t1_copy1

0xf01f,	// (0x0000f01f) setting_slider_pane_t2_copy1_ParamLimits

0xf01f,	// (0x0000f01f) setting_slider_pane_t2_copy1

0xf039,	// (0x0000f039) setting_slider_pane_t3_copy1_ParamLimits

0xf039,	// (0x0000f039) setting_slider_pane_t3_copy1

0xf051,	// (0x0000f051) slider_set_pane_copy1_ParamLimits

0xf051,	// (0x0000f051) slider_set_pane_copy1

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1_copy2

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2_copy2

0xa3fc,	// (0x0000a3fc) set_opt_bg_pane_g3_copy2

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4_copy2

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5_copy2

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6_copy2

0xf067,	// (0x0000f067) set_opt_bg_pane_g7_copy2

0xa40e,	// (0x0000a40e) set_opt_bg_pane_g8_copy2

0xa418,	// (0x0000a418) set_opt_bg_pane_g9_copy2

0xa422,	// (0x0000a422) aid_size_touch_slider_mark_copy1_ParamLimits

0xa422,	// (0x0000a422) aid_size_touch_slider_mark_copy1

0xa436,	// (0x0000a436) slider_set_pane_g1_copy1

0xa43f,	// (0x0000a43f) slider_set_pane_g2_copy1

0x4de6,	// (0x00004de6) slider_set_pane_g3_copy1_ParamLimits

0x4de6,	// (0x00004de6) slider_set_pane_g3_copy1

0x4dfa,	// (0x00004dfa) slider_set_pane_g4_copy1_ParamLimits

0x4dfa,	// (0x00004dfa) slider_set_pane_g4_copy1

0x4e12,	// (0x00004e12) slider_set_pane_g5_copy1_ParamLimits

0x4e12,	// (0x00004e12) slider_set_pane_g5_copy1

0x4de6,	// (0x00004de6) slider_set_pane_g6_copy1_ParamLimits

0x4de6,	// (0x00004de6) slider_set_pane_g6_copy1

0xf06f,	// (0x0000f06f) slider_set_pane_g7_copy1_ParamLimits

0xf06f,	// (0x0000f06f) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa45d,	// (0x0000a45d) setting_slider_graphic_pane_g1_copy1

0xf085,	// (0x0000f085) setting_slider_graphic_pane_t1_copy1

0xf095,	// (0x0000f095) setting_slider_graphic_pane_t2_copy1

0xf0a5,	// (0x0000f0a5) slider_set_pane_cp_copy1

0xa496,	// (0x0000a496) input_focus_pane_cp1_copy1

0xa49f,	// (0x0000a49f) list_set_text_pane_copy1

0xa4a7,	// (0x0000a4a7) setting_text_pane_g1_copy1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1

0xa496,	// (0x0000a496) input_focus_pane_cp2_copy1

0xa4a7,	// (0x0000a4a7) setting_code_pane_g1_copy1

0xf0ad,	// (0x0000f0ad) setting_code_pane_t1_copy1

0xbfb0,	// (0x0000bfb0) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xbfc2,	// (0x0000bfc2) list_set_graphic_pane_g1_copy1_ParamLimits

0xbfc2,	// (0x0000bfc2) list_set_graphic_pane_g1_copy1

0xf0bb,	// (0x0000f0bb) list_set_graphic_pane_g2_copy1

0xbfda,	// (0x0000bfda) list_set_graphic_pane_t1_copy1_ParamLimits

0xbfda,	// (0x0000bfda) list_set_graphic_pane_t1_copy1

0x64b5,	// (0x000064b5) rs_clock_indi_pane_g1

0xa4d8,	// (0x0000a4d8) rs_clock_indi_pane_t1

0xa4e6,	// (0x0000a4e6) rs_indi_pane

0xa4ee,	// (0x0000a4ee) rs_indi_pane_g1

0xa4f7,	// (0x0000a4f7) rs_indi_pane_g2

0xa500,	// (0x0000a500) rs_indi_pane_g3

0x0002,

0xb235,	// (0x0000b235) rs_indi_pane_g

0x25c7,	// (0x000025c7) bg_popup_preview_window_pane_cp03

0xa509,	// (0x0000a509) popup_fep_tooltip_window_t1

0x76a9,	// (0x000076a9) popup_note2_window_g2_ParamLimits

0x76a9,	// (0x000076a9) popup_note2_window_g2

0x0001,

0xafce,	// (0x0000afce) popup_note2_window_g_ParamLimits

0xafce,	// (0x0000afce) popup_note2_window_g

0x7cab,	// (0x00007cab) bg_popup_sub_pane_cp11_ParamLimits

0x7cb8,	// (0x00007cb8) cell_ai3_links_pane_g1_ParamLimits

0x7ccf,	// (0x00007ccf) cell_ai3_links_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1_ParamLimits

0x24d8,	// (0x000024d8) cell_graphic_popup_pane_cp2_ParamLimits

0x24d8,	// (0x000024d8) cell_graphic_popup_pane_cp2

0xa517,	// (0x0000a517) cell_graphic_popup_pane_g1_cp2

0x0b5f,	// (0x00000b5f) cell_graphic_popup_pane_g2_cp2

0xa51f,	// (0x0000a51f) cell_graphic_popup_pane_g3_cp2

0xa527,	// (0x0000a527) cell_graphic_popup_pane_t2_cp2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3_cp2

0x1a2a,	// (0x00001a2a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1375,	// (0x00001375) main_tmo_pane_ParamLimits

0xdd13,	// (0x0000dd13) popup_tmo_big_image_note_window

0x99e0,	// (0x000099e0) cell_ai5_widget_list_pane

0x99e8,	// (0x000099e8) cell_ai5_widget_lrg_icon_pane

0xee06,	// (0x0000ee06) tmo_note_info_pane_t1_ParamLimits

0xee1b,	// (0x0000ee1b) tmo_note_info_pane_t2_ParamLimits

0xee32,	// (0x0000ee32) tmo_note_info_pane_t3_ParamLimits

0xa0c3,	// (0x0000a0c3) tmo_note_info_pane_t4_ParamLimits

0xa0d5,	// (0x0000a0d5) tmo_note_info_pane_t5_ParamLimits

0xf375,	// (0x0000f375) tmo_note_info_pane_t_ParamLimits

0xeeac,	// (0x0000eeac) settings_container_pane_ParamLimits

0xa48e,	// (0x0000a48e) indicator_popup_pane_cp5

0xa48e,	// (0x0000a48e) indicator_popup_pane_cp6

0xbfb0,	// (0x0000bfb0) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa535,	// (0x0000a535) popup_tmo_big_image_note_window_g1

0xa53f,	// (0x0000a53f) popup_tmo_big_image_note_window_t1

0xa54f,	// (0x0000a54f) popup_tmo_big_image_note_window_t2

0xa55f,	// (0x0000a55f) popup_tmo_big_image_note_window_t3

0x0002,

0xb23c,	// (0x0000b23c) popup_tmo_big_image_note_window_t

0xa56f,	// (0x0000a56f) cell_ai5_widget_lrg_icon_pane_g1

0xa577,	// (0x0000a577) cell_ai5_widget_lrg_icon_pane_t1

0xa585,	// (0x0000a585) cell_ai5_widget_list_row_pane_ParamLimits

0xa585,	// (0x0000a585) cell_ai5_widget_list_row_pane

0xa59e,	// (0x0000a59e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa59e,	// (0x0000a59e) cell_ai5_widget_list_row_pane_g1

0xa5ab,	// (0x0000a5ab) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa5ab,	// (0x0000a5ab) cell_ai5_widget_list_row_pane_t1

0xa5c3,	// (0x0000a5c3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa5c3,	// (0x0000a5c3) cell_ai5_widget_list_row_pane_t2

0x0001,

0xb243,	// (0x0000b243) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb243,	// (0x0000b243) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa5d5,	// (0x0000a5d5) popup_fep_char_pre_window

0xa5dd,	// (0x0000a5dd) popup_fep_ituss_window

0xa5f7,	// (0x0000a5f7) popup_fep_vkbss_window

0xa615,	// (0x0000a615) grid_vkbss_keypad_pane_ParamLimits

0xa615,	// (0x0000a615) grid_vkbss_keypad_pane

0xa625,	// (0x0000a625) ituss_keypad_pane

0xa63b,	// (0x0000a63b) aid_vkbss_key_offset_ParamLimits

0xa63b,	// (0x0000a63b) aid_vkbss_key_offset

0xa647,	// (0x0000a647) cell_vkbss_key_pane_ParamLimits

0xa647,	// (0x0000a647) cell_vkbss_key_pane

0xa65d,	// (0x0000a65d) bg_cell_vkbss_key_g1_ParamLimits

0xa65d,	// (0x0000a65d) bg_cell_vkbss_key_g1

0xa669,	// (0x0000a669) cell_vkbss_key_3p_pane_ParamLimits

0xa669,	// (0x0000a669) cell_vkbss_key_3p_pane

0xa683,	// (0x0000a683) cell_vkbss_key_g1_ParamLimits

0xa683,	// (0x0000a683) cell_vkbss_key_g1

0xa69d,	// (0x0000a69d) cell_vkbss_key_t1_ParamLimits

0xa69d,	// (0x0000a69d) cell_vkbss_key_t1

0xa6c8,	// (0x0000a6c8) cell_ituss_key_pane_ParamLimits

0xa6c8,	// (0x0000a6c8) cell_ituss_key_pane

0xa6d8,	// (0x0000a6d8) bg_cell_ituss_key_g1_ParamLimits

0xa6d8,	// (0x0000a6d8) bg_cell_ituss_key_g1

0xa6e4,	// (0x0000a6e4) cell_ituss_key_pane_g1_ParamLimits

0xa6e4,	// (0x0000a6e4) cell_ituss_key_pane_g1

0xa6f0,	// (0x0000a6f0) cell_ituss_key_pane_g2_ParamLimits

0xa6f0,	// (0x0000a6f0) cell_ituss_key_pane_g2

0x0001,

0xb248,	// (0x0000b248) cell_ituss_key_pane_g_ParamLimits

0xb248,	// (0x0000b248) cell_ituss_key_pane_g

0xa709,	// (0x0000a709) cell_ituss_key_t1_ParamLimits

0xa709,	// (0x0000a709) cell_ituss_key_t1

0xa737,	// (0x0000a737) cell_ituss_key_t2_ParamLimits

0xa737,	// (0x0000a737) cell_ituss_key_t2

0xa768,	// (0x0000a768) cell_ituss_key_t3_ParamLimits

0xa768,	// (0x0000a768) cell_ituss_key_t3

0xa799,	// (0x0000a799) cell_ituss_key_t4_ParamLimits

0xa799,	// (0x0000a799) cell_ituss_key_t4

0x0003,

0xb24d,	// (0x0000b24d) cell_ituss_key_t_ParamLimits

0xb24d,	// (0x0000b24d) cell_ituss_key_t

0xa7ca,	// (0x0000a7ca) cell_vkbss_key_3p_pane_g1

0xa7d2,	// (0x0000a7d2) cell_vkbss_key_3p_pane_g2

0xa7da,	// (0x0000a7da) cell_vkbss_key_3p_pane_g3

0x0002,

0xb256,	// (0x0000b256) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa7e2,	// (0x0000a7e2) popup_fep_char_pre_window_t1

0xed10,	// (0x0000ed10) main_ai5_sk_pane

0xa14f,	// (0x0000a14f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa15b,	// (0x0000a15b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa16f,	// (0x0000a16f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa17e,	// (0x0000a17e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb22e,	// (0x0000b22e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa191,	// (0x0000a191) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1375,	// (0x00001375) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf0c3,	// (0x0000f0c3) main_ai5_sk_pane_g1

0x3cf2,	// (0x00003cf2) popup_query_code_window_g1

0xa5ec,	// (0x0000a5ec) popup_fep_vkb_icf_pane

0xa600,	// (0x0000a600) popup_fep_vtchi_icf_pane

0x1375,	// (0x00001375) bg_icf_pane

0xa625,	// (0x0000a625) list_vkb_icf_pane

0x1375,	// (0x00001375) bg_icf_pane_cp01

0xa815,	// (0x0000a815) vtchi_icf_list_pane

0xa825,	// (0x0000a825) list_vkb_icf_pane_t1_ParamLimits

0xa825,	// (0x0000a825) list_vkb_icf_pane_t1

0xa83c,	// (0x0000a83c) vtchi_icf_list_pane_t1_ParamLimits

0xa83c,	// (0x0000a83c) vtchi_icf_list_pane_t1

0xa5dd,	// (0x0000a5dd) popup_fep_ituss_window_ParamLimits

0xa600,	// (0x0000a600) popup_fep_vtchi_icf_pane_ParamLimits

0xa625,	// (0x0000a625) ituss_keypad_pane_ParamLimits

0xa631,	// (0x0000a631) ituss_sks_pane

0x1375,	// (0x00001375) bg_icf_pane_ParamLimits

0xa7fa,	// (0x0000a7fa) icf_edit_indi_pane_ParamLimits

0xa7fa,	// (0x0000a7fa) icf_edit_indi_pane

0xa625,	// (0x0000a625) list_vkb_icf_pane_ParamLimits

0x1375,	// (0x00001375) bg_icf_pane_cp01_ParamLimits

0xa809,	// (0x0000a809) icf_edit_indi_pane_cp01_ParamLimits

0xa809,	// (0x0000a809) icf_edit_indi_pane_cp01

0xa81d,	// (0x0000a81d) vtchi_query_pane

0x6947,	// (0x00006947) icf_edit_indi_pane_g1_ParamLimits

0x6947,	// (0x00006947) icf_edit_indi_pane_g1

0xa858,	// (0x0000a858) icf_edit_indi_pane_g2_ParamLimits

0xa858,	// (0x0000a858) icf_edit_indi_pane_g2

0x0001,

0xb25d,	// (0x0000b25d) icf_edit_indi_pane_g_ParamLimits

0xb25d,	// (0x0000b25d) icf_edit_indi_pane_g

0xa864,	// (0x0000a864) icf_edit_indi_pane_t1

0xa872,	// (0x0000a872) bg_input_focus_pane_cp042

0x0d43,	// (0x00000d43) vtchi_button_pane

0xa87b,	// (0x0000a87b) vtchi_query_pane_t1

0xa889,	// (0x0000a889) vtchi_query_pane_t2

0xa897,	// (0x0000a897) vtchi_query_pane_t3

0x0002,

0xb262,	// (0x0000b262) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xa8a5,	// (0x0000a8a5) vtchi_button_pane_g1

0xa8ad,	// (0x0000a8ad) ituss_sks_pane_g1

0xa8b8,	// (0x0000a8b8) ituss_sks_pane_g2

0x0001,

0xb269,	// (0x0000b269) ituss_sks_pane_g

0xa8c0,	// (0x0000a8c0) ituss_sks_pane_t1

0xa8ce,	// (0x0000a8ce) ituss_sks_pane_t2

0x0001,

0xb26e,	// (0x0000b26e) ituss_sks_pane_t

0x5e7e,	// (0x00005e7e) indicator_nsta_pane_cp_g1

0x5e87,	// (0x00005e87) indicator_nsta_pane_cp_g2

0x5e8f,	// (0x00005e8f) indicator_nsta_pane_cp_g3

0x5e97,	// (0x00005e97) indicator_nsta_pane_cp_g4

0x5e9f,	// (0x00005e9f) indicator_nsta_pane_cp_g5

0x5ea7,	// (0x00005ea7) indicator_nsta_pane_cp_g6

0x0005,

0xae18,	// (0x0000ae18) indicator_nsta_pane_cp_g

0xeab6,	// (0x0000eab6) cell_graphic2_pane_t2_ParamLimits

0xeab6,	// (0x0000eab6) cell_graphic2_pane_t2

0x0001,

0xf34c,	// (0x0000f34c) cell_graphic2_pane_t_ParamLimits

0xf34c,	// (0x0000f34c) cell_graphic2_pane_t

0xeaec,	// (0x0000eaec) cell_graphic2_control_pane_t1

0xbec2,	// (0x0000bec2) signal_pane_g3_ParamLimits

0xbec2,	// (0x0000bec2) signal_pane_g3

0xbed6,	// (0x0000bed6) signal_pane_g4_ParamLimits

0xbed6,	// (0x0000bed6) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal

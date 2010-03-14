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
0xb2db,	// (0x0000b2db) Screen

0xb2e7,	// (0x0000b2e7) application_window_ParamLimits

0xb2e7,	// (0x0000b2e7) application_window

0x002e,	// (0x0000002e) screen_g1

0xb31f,	// (0x0000b31f) area_bottom_pane_ParamLimits

0xb31f,	// (0x0000b31f) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc98b,	// (0x0000c98b) battery_pane_ParamLimits

0xc98b,	// (0x0000c98b) battery_pane

0x4079,	// (0x00004079) bg_status_flat_pane_g8

0x4081,	// (0x00004081) bg_status_flat_pane_g9

0x31f5,	// (0x000031f5) context_pane_ParamLimits

0x31f5,	// (0x000031f5) context_pane

0xcaf6,	// (0x0000caf6) navi_pane_ParamLimits

0xcaf6,	// (0x0000caf6) navi_pane

0xcb6e,	// (0x0000cb6e) signal_pane_ParamLimits

0xcb6e,	// (0x0000cb6e) signal_pane

0x0008,

0xac49,	// (0x0000ac49) bg_status_flat_pane_g

0xcbfe,	// (0x0000cbfe) status_pane_g1_ParamLimits

0xcbfe,	// (0x0000cbfe) status_pane_g1

0xcc14,	// (0x0000cc14) status_pane_g2_ParamLimits

0xcc14,	// (0x0000cc14) status_pane_g2

0x3416,	// (0x00003416) status_pane_g3_ParamLimits

0x3416,	// (0x00003416) status_pane_g3

0x0004,

0xeed3,	// (0x0000eed3) status_pane_g_ParamLimits

0xeed3,	// (0x0000eed3) status_pane_g

0xcc20,	// (0x0000cc20) title_pane_ParamLimits

0xcc20,	// (0x0000cc20) title_pane

0xcc83,	// (0x0000cc83) uni_indicator_pane_ParamLimits

0xcc83,	// (0x0000cc83) uni_indicator_pane

0x2aac,	// (0x00002aac) bg_list_pane_ParamLimits

0x2aac,	// (0x00002aac) bg_list_pane

0xc256,	// (0x0000c256) find_pane

0xc25e,	// (0x0000c25e) listscroll_app_pane_ParamLimits

0xc25e,	// (0x0000c25e) listscroll_app_pane

0x2ae0,	// (0x00002ae0) listscroll_form_pane

0xc26a,	// (0x0000c26a) listscroll_gen_pane_ParamLimits

0xc26a,	// (0x0000c26a) listscroll_gen_pane

0x2ae0,	// (0x00002ae0) listscroll_set_pane

0x4e4d,	// (0x00004e4d) main_idle_act_pane

0x25a7,	// (0x000025a7) main_idle_trad_pane

0x25a7,	// (0x000025a7) main_list_empty_pane

0x2b0e,	// (0x00002b0e) main_midp_pane

0x2b1a,	// (0x00002b1a) main_pane_g1_ParamLimits

0x2b1a,	// (0x00002b1a) main_pane_g1

0xc27e,	// (0x0000c27e) popup_ai_message_window_ParamLimits

0xc27e,	// (0x0000c27e) popup_ai_message_window

0xc30f,	// (0x0000c30f) popup_fep_china_uni_window_ParamLimits

0xc30f,	// (0x0000c30f) popup_fep_china_uni_window

0x2c2c,	// (0x00002c2c) popup_fep_japan_candidate_window_ParamLimits

0x2c2c,	// (0x00002c2c) popup_fep_japan_candidate_window

0x2c4a,	// (0x00002c4a) popup_fep_japan_predictive_window_ParamLimits

0x2c4a,	// (0x00002c4a) popup_fep_japan_predictive_window

0xc369,	// (0x0000c369) popup_find_window

0xc386,	// (0x0000c386) popup_grid_graphic_window_ParamLimits

0xc386,	// (0x0000c386) popup_grid_graphic_window

0x2cad,	// (0x00002cad) popup_large_graphic_colour_window

0xc418,	// (0x0000c418) popup_menu_window_ParamLimits

0xc418,	// (0x0000c418) popup_menu_window

0xc5e4,	// (0x0000c5e4) popup_note_image_window

0xc5aa,	// (0x0000c5aa) popup_note_wait_window_ParamLimits

0xc5aa,	// (0x0000c5aa) popup_note_wait_window

0xc5fc,	// (0x0000c5fc) popup_note_window_ParamLimits

0xc5fc,	// (0x0000c5fc) popup_note_window

0xc6a2,	// (0x0000c6a2) popup_query_code_window_ParamLimits

0xc6a2,	// (0x0000c6a2) popup_query_code_window

0x2ef7,	// (0x00002ef7) popup_query_data_code_window_ParamLimits

0x2ef7,	// (0x00002ef7) popup_query_data_code_window

0xc6dc,	// (0x0000c6dc) popup_query_data_window_ParamLimits

0xc6dc,	// (0x0000c6dc) popup_query_data_window

0xc752,	// (0x0000c752) popup_query_sat_info_window_ParamLimits

0xc752,	// (0x0000c752) popup_query_sat_info_window

0xc7e9,	// (0x0000c7e9) popup_snote_single_graphic_window_ParamLimits

0xc7e9,	// (0x0000c7e9) popup_snote_single_graphic_window

0xc7e9,	// (0x0000c7e9) popup_snote_single_text_window_ParamLimits

0xc7e9,	// (0x0000c7e9) popup_snote_single_text_window

0x2f74,	// (0x00002f74) popup_sub_window_general

0x30a2,	// (0x000030a2) popup_window_general_ParamLimits

0x30a2,	// (0x000030a2) popup_window_general

0x30b7,	// (0x000030b7) power_save_pane

0xc0c2,	// (0x0000c0c2) control_pane_g1_ParamLimits

0xc0c2,	// (0x0000c0c2) control_pane_g1

0xc0eb,	// (0x0000c0eb) control_pane_g2_ParamLimits

0xc0eb,	// (0x0000c0eb) control_pane_g2

0x2953,	// (0x00002953) control_pane_g3_ParamLimits

0x2953,	// (0x00002953) control_pane_g3

0x0007,

0xeebb,	// (0x0000eebb) control_pane_g_ParamLimits

0xeebb,	// (0x0000eebb) control_pane_g

0xc14f,	// (0x0000c14f) control_pane_t1_ParamLimits

0xc14f,	// (0x0000c14f) control_pane_t1

0xc1ad,	// (0x0000c1ad) control_pane_t2_ParamLimits

0xc1ad,	// (0x0000c1ad) control_pane_t2

0x0002,

0xeecc,	// (0x0000eecc) control_pane_t_ParamLimits

0xeecc,	// (0x0000eecc) control_pane_t

0x282a,	// (0x0000282a) navi_navi_volume_pane_cp1

0x2833,	// (0x00002833) status_small_icon_pane

0x283b,	// (0x0000283b) status_small_pane_g1_ParamLimits

0x283b,	// (0x0000283b) status_small_pane_g1

0x286f,	// (0x0000286f) status_small_pane_g2_ParamLimits

0x286f,	// (0x0000286f) status_small_pane_g2

0x287b,	// (0x0000287b) status_small_pane_g3_ParamLimits

0x287b,	// (0x0000287b) status_small_pane_g3

0x2887,	// (0x00002887) status_small_pane_g4_ParamLimits

0x2887,	// (0x00002887) status_small_pane_g4

0x2893,	// (0x00002893) status_small_pane_g5_ParamLimits

0x2893,	// (0x00002893) status_small_pane_g5

0x28a2,	// (0x000028a2) status_small_pane_g6_ParamLimits

0x28a2,	// (0x000028a2) status_small_pane_g6

0x0007,

0xab55,	// (0x0000ab55) status_small_pane_g_ParamLimits

0xab55,	// (0x0000ab55) status_small_pane_g

0x28d2,	// (0x000028d2) status_small_pane_t1

0x28f5,	// (0x000028f5) status_small_wait_pane_ParamLimits

0x28f5,	// (0x000028f5) status_small_wait_pane

0xbec9,	// (0x0000bec9) aid_levels_signal_ParamLimits

0xbec9,	// (0x0000bec9) aid_levels_signal

0xbee1,	// (0x0000bee1) signal_pane_g1_ParamLimits

0xbee1,	// (0x0000bee1) signal_pane_g1

0xbefc,	// (0x0000befc) signal_pane_g2_ParamLimits

0xbefc,	// (0x0000befc) signal_pane_g2

0x0003,

0xee9b,	// (0x0000ee9b) signal_pane_g_ParamLimits

0xee9b,	// (0x0000ee9b) signal_pane_g

0x1e52,	// (0x00001e52) context_pane_g1

0xb498,	// (0x0000b498) title_pane_g1

0xb4cf,	// (0x0000b4cf) title_pane_t1

0x04b1,	// (0x000004b1) title_pane_t2

0x04d7,	// (0x000004d7) title_pane_t3

0x0002,

0xedcd,	// (0x0000edcd) title_pane_t

0xccab,	// (0x0000ccab) aid_levels_battery_ParamLimits

0xccab,	// (0x0000ccab) aid_levels_battery

0xccc7,	// (0x0000ccc7) battery_pane_g1_ParamLimits

0xccc7,	// (0x0000ccc7) battery_pane_g1

0xcce4,	// (0x0000cce4) battery_pane_g2_ParamLimits

0xcce4,	// (0x0000cce4) battery_pane_g2

0x0001,

0xeede,	// (0x0000eede) battery_pane_g_ParamLimits

0xeede,	// (0x0000eede) battery_pane_g

0xd0b6,	// (0x0000d0b6) uni_indicator_pane_g1

0xd0cb,	// (0x0000d0cb) uni_indicator_pane_g2

0x4b2c,	// (0x00004b2c) uni_indicator_pane_g3

0x0005,

0xef2a,	// (0x0000ef2a) uni_indicator_pane_g

0x2417,	// (0x00002417) navi_icon_pane_ParamLimits

0x2417,	// (0x00002417) navi_icon_pane

0x235e,	// (0x0000235e) navi_midp_pane

0x2433,	// (0x00002433) navi_navi_pane

0x243d,	// (0x0000243d) navi_text_pane_ParamLimits

0x243d,	// (0x0000243d) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09a1,	// (0x000009a1) status_small_wait_pane_g2

0x0001,

0xacec,	// (0x0000acec) status_small_wait_pane_g

0x4824,	// (0x00004824) navi_navi_icon_text_pane

0x482c,	// (0x0000482c) navi_navi_pane_g1_ParamLimits

0x482c,	// (0x0000482c) navi_navi_pane_g1

0x483e,	// (0x0000483e) navi_navi_pane_g2_ParamLimits

0x483e,	// (0x0000483e) navi_navi_pane_g2

0x0001,

0xacba,	// (0x0000acba) navi_navi_pane_g_ParamLimits

0xacba,	// (0x0000acba) navi_navi_pane_g

0x4850,	// (0x00004850) navi_navi_tabs_pane

0x4859,	// (0x00004859) navi_navi_text_pane

0x4824,	// (0x00004824) navi_navi_volume_pane

0x4800,	// (0x00004800) navi_text_pane_t1

0x47f4,	// (0x000047f4) navi_icon_pane_g1

0x4753,	// (0x00004753) navi_navi_text_pane_t1

0xd078,	// (0x0000d078) navi_navi_volume_pane_g1

0xd080,	// (0x0000d080) volume_small_pane

0xcfd4,	// (0x0000cfd4) navi_navi_icon_text_pane_g1

0xcfdc,	// (0x0000cfdc) navi_navi_icon_text_pane_t1

0x2433,	// (0x00002433) navi_tabs_2_long_pane

0x2433,	// (0x00002433) navi_tabs_2_pane

0x2433,	// (0x00002433) navi_tabs_3_long_pane

0x2433,	// (0x00002433) navi_tabs_3_pane

0x2433,	// (0x00002433) navi_tabs_4_pane

0xcfb4,	// (0x0000cfb4) tabs_2_active_pane_ParamLimits

0xcfb4,	// (0x0000cfb4) tabs_2_active_pane

0xcfc4,	// (0x0000cfc4) tabs_2_passive_pane_ParamLimits

0xcfc4,	// (0x0000cfc4) tabs_2_passive_pane

0xcf82,	// (0x0000cf82) tabs_3_active_pane_ParamLimits

0xcf82,	// (0x0000cf82) tabs_3_active_pane

0xcf92,	// (0x0000cf92) tabs_3_passive_pane_ParamLimits

0xcf92,	// (0x0000cf92) tabs_3_passive_pane

0xcfa3,	// (0x0000cfa3) tabs_3_passive_pane_cp_ParamLimits

0xcfa3,	// (0x0000cfa3) tabs_3_passive_pane_cp

0xcf3e,	// (0x0000cf3e) tabs_4_active_pane_ParamLimits

0xcf3e,	// (0x0000cf3e) tabs_4_active_pane

0xcf4f,	// (0x0000cf4f) tabs_4_passive_pane_ParamLimits

0xcf4f,	// (0x0000cf4f) tabs_4_passive_pane

0xcf60,	// (0x0000cf60) tabs_4_passive_pane_cp_ParamLimits

0xcf60,	// (0x0000cf60) tabs_4_passive_pane_cp

0xcf71,	// (0x0000cf71) tabs_4_passive_pane_cp2_ParamLimits

0xcf71,	// (0x0000cf71) tabs_4_passive_pane_cp2

0xcf1e,	// (0x0000cf1e) tabs_2_long_active_pane_ParamLimits

0xcf1e,	// (0x0000cf1e) tabs_2_long_active_pane

0xcf2e,	// (0x0000cf2e) tabs_2_long_passive_pane_ParamLimits

0xcf2e,	// (0x0000cf2e) tabs_2_long_passive_pane

0xcee9,	// (0x0000cee9) tabs_3_long_active_pane_ParamLimits

0xcee9,	// (0x0000cee9) tabs_3_long_active_pane

0xcefa,	// (0x0000cefa) tabs_3_long_passive_pane_ParamLimits

0xcefa,	// (0x0000cefa) tabs_3_long_passive_pane

0xcf0d,	// (0x0000cf0d) tabs_3_long_passive_pane_cp_ParamLimits

0xcf0d,	// (0x0000cf0d) tabs_3_long_passive_pane_cp

0x44ce,	// (0x000044ce) volume_small_pane_g1

0xce98,	// (0x0000ce98) volume_small_pane_g2

0xcea1,	// (0x0000cea1) volume_small_pane_g3

0xceaa,	// (0x0000ceaa) volume_small_pane_g4

0xceb3,	// (0x0000ceb3) volume_small_pane_g5

0xcebc,	// (0x0000cebc) volume_small_pane_g6

0xcec5,	// (0x0000cec5) volume_small_pane_g7

0xcece,	// (0x0000cece) volume_small_pane_g8

0xced7,	// (0x0000ced7) volume_small_pane_g9

0xcee0,	// (0x0000cee0) volume_small_pane_g10

0x0009,

0xef00,	// (0x0000ef00) volume_small_pane_g

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2

0xb55b,	// (0x0000b55b) tabs_3_active_pane_g1

0xb563,	// (0x0000b563) tabs_3_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp2_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp2

0xb55b,	// (0x0000b55b) tabs_3_passive_pane_g1

0xb563,	// (0x0000b563) tabs_3_passive_pane_t1

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3

0xb575,	// (0x0000b575) tabs_4_active_pane_g1

0xb57d,	// (0x0000b57d) tabs_4_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp3_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp3

0xb575,	// (0x0000b575) tabs_4_1_passive_pane_g1

0xb57d,	// (0x0000b57d) tabs_4_1_passive_pane_t1

0x2b0e,	// (0x00002b0e) list_highlight_pane_cp2

0xd16a,	// (0x0000d16a) list_set_pane_ParamLimits

0xd16a,	// (0x0000d16a) list_set_pane

0xd204,	// (0x0000d204) main_pane_set_t1_ParamLimits

0xd204,	// (0x0000d204) main_pane_set_t1

0xd224,	// (0x0000d224) main_pane_set_t2_ParamLimits

0xd224,	// (0x0000d224) main_pane_set_t2

0xd238,	// (0x0000d238) main_pane_set_t3_ParamLimits

0xd238,	// (0x0000d238) main_pane_set_t3

0xd24a,	// (0x0000d24a) main_pane_set_t4_ParamLimits

0xd24a,	// (0x0000d24a) main_pane_set_t4

0x0003,

0xef3c,	// (0x0000ef3c) main_pane_set_t_ParamLimits

0xef3c,	// (0x0000ef3c) main_pane_set_t

0xd25c,	// (0x0000d25c) setting_code_pane

0xd264,	// (0x0000d264) setting_slider_graphic_pane

0xd264,	// (0x0000d264) setting_slider_pane

0xd264,	// (0x0000d264) setting_text_pane

0xd264,	// (0x0000d264) setting_volume_pane

0x052b,	// (0x0000052b) volume_set_pane

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp

0x0533,	// (0x00000533) setting_slider_pane_t1

0x054c,	// (0x0000054c) setting_slider_pane_t2

0x0565,	// (0x00000565) setting_slider_pane_t3

0x0002,

0xa941,	// (0x0000a941) setting_slider_pane_t

0x057c,	// (0x0000057c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x0592,	// (0x00000592) setting_slider_graphic_pane_g1

0x059b,	// (0x0000059b) setting_slider_graphic_pane_t1

0x05aa,	// (0x000005aa) setting_slider_graphic_pane_t2

0x0001,

0xa948,	// (0x0000a948) setting_slider_graphic_pane_t

0x05b9,	// (0x000005b9) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4e34,	// (0x00004e34) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05c1,	// (0x000005c1) setting_code_pane_t1

0x05cf,	// (0x000005cf) set_text_pane_t1_ParamLimits

0x05cf,	// (0x000005cf) set_text_pane_t1

0x148b,	// (0x0000148b) set_opt_bg_pane_g1

0x1493,	// (0x00001493) set_opt_bg_pane_g2

0x4e14,	// (0x00004e14) set_opt_bg_pane_g3

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6

0x4e1c,	// (0x00004e1c) set_opt_bg_pane_g7

0x4e24,	// (0x00004e24) set_opt_bg_pane_g8

0x4e2c,	// (0x00004e2c) set_opt_bg_pane_g9

0x0008,

0xad43,	// (0x0000ad43) set_opt_bg_pane_g

0x4da3,	// (0x00004da3) slider_set_pane_g1

0x4db0,	// (0x00004db0) slider_set_pane_g2

0x0006,

0xad34,	// (0x0000ad34) slider_set_pane_g

0x4c23,	// (0x00004c23) volume_set_pane_g1

0x4c2b,	// (0x00004c2b) volume_set_pane_g2

0x4c33,	// (0x00004c33) volume_set_pane_g3

0x4c3b,	// (0x00004c3b) volume_set_pane_g4

0x4c43,	// (0x00004c43) volume_set_pane_g5

0x4c4b,	// (0x00004c4b) volume_set_pane_g6

0x4c53,	// (0x00004c53) volume_set_pane_g7

0x4c5b,	// (0x00004c5b) volume_set_pane_g8

0x4c63,	// (0x00004c63) volume_set_pane_g9

0x4c6b,	// (0x00004c6b) volume_set_pane_g10

0x0009,

0xad0c,	// (0x0000ad0c) volume_set_pane_g

0xb58f,	// (0x0000b58f) indicator_pane_ParamLimits

0xb58f,	// (0x0000b58f) indicator_pane

0xb5b7,	// (0x0000b5b7) main_idle_pane_g2_ParamLimits

0xb5b7,	// (0x0000b5b7) main_idle_pane_g2

0xb5ef,	// (0x0000b5ef) main_pane_idle_g1_ParamLimits

0xb5ef,	// (0x0000b5ef) main_pane_idle_g1

0x062a,	// (0x0000062a) popup_clock_digital_analogue_window_ParamLimits

0x062a,	// (0x0000062a) popup_clock_digital_analogue_window

0xb616,	// (0x0000b616) soft_indicator_pane_ParamLimits

0xb616,	// (0x0000b616) soft_indicator_pane

0xb630,	// (0x0000b630) wallpaper_pane_ParamLimits

0xb630,	// (0x0000b630) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb642,	// (0x0000b642) indicator_pane_g1_ParamLimits

0xb642,	// (0x0000b642) indicator_pane_g1

0x53a2,	// (0x000053a2) navi_navi_icon_text_pane_srt_g1

0x067c,	// (0x0000067c) soft_indicator_pane_t1

0x0696,	// (0x00000696) aid_ps_area_pane

0xb65b,	// (0x0000b65b) aid_ps_clock_pane

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

0xa94d,	// (0x0000a94d) power_save_pane_g_ParamLimits

0xa94d,	// (0x0000a94d) power_save_pane_g

0x06ea,	// (0x000006ea) power_save_pane_t1_ParamLimits

0x06ea,	// (0x000006ea) power_save_pane_t1

0xb65b,	// (0x0000b65b) aid_ps_clock_pane_ParamLimits

0x06b5,	// (0x000006b5) aid_ps_indicator_pane_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_t4_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_t4

0x0001,

0xa952,	// (0x0000a952) power_save_pane_t_ParamLimits

0xa952,	// (0x0000a952) power_save_pane_t

0x0726,	// (0x00000726) power_save_t3_ParamLimits

0x0726,	// (0x00000726) power_save_t3

0x0711,	// (0x00000711) power_save_t2_ParamLimits

0x0711,	// (0x00000711) power_save_t2

0x073b,	// (0x0000073b) indicator_ps_pane_g1

0xb669,	// (0x0000b669) ai_gene_pane_ParamLimits

0xb669,	// (0x0000b669) ai_gene_pane

0xb680,	// (0x0000b680) ai_links_pane_ParamLimits

0xb680,	// (0x0000b680) ai_links_pane

0xb698,	// (0x0000b698) indicator_pane_cp1_ParamLimits

0xb698,	// (0x0000b698) indicator_pane_cp1

0xb6a7,	// (0x0000b6a7) main_pane_idle_g1_cp_ParamLimits

0xb6a7,	// (0x0000b6a7) main_pane_idle_g1_cp

0x0774,	// (0x00000774) popup_ai_links_title_window

0xb6bf,	// (0x0000b6bf) soft_indicator_pane_cp1_ParamLimits

0xb6bf,	// (0x0000b6bf) soft_indicator_pane_cp1

0x4aef,	// (0x00004aef) ai_links_pane_g1

0x4af8,	// (0x00004af8) grid_ai_links_pane

0xd0ad,	// (0x0000d0ad) ai_gene_pane_1

0x4add,	// (0x00004add) ai_gene_pane_2

0x4ae6,	// (0x00004ae6) list_highlight_pane_cp4

0xd089,	// (0x0000d089) cell_ai_link_pane_ParamLimits

0xd089,	// (0x0000d089) cell_ai_link_pane

0x4aae,	// (0x00004aae) cell_ai_link_pane_g1

0x09a1,	// (0x000009a1) cell_ai_link_pane_g2

0x0001,

0xace7,	// (0x0000ace7) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x0797,	// (0x00000797) popup_ai_links_title_window_t1

0x49fc,	// (0x000049fc) ai_gene_pane_1_g1_ParamLimits

0x49fc,	// (0x000049fc) ai_gene_pane_1_g1

0x4a08,	// (0x00004a08) ai_gene_pane_1_g2_ParamLimits

0x4a08,	// (0x00004a08) ai_gene_pane_1_g2

0x0001,

0xacdd,	// (0x0000acdd) ai_gene_pane_1_g_ParamLimits

0xacdd,	// (0x0000acdd) ai_gene_pane_1_g

0x4a15,	// (0x00004a15) ai_gene_pane_1_t1_ParamLimits

0x4a15,	// (0x00004a15) ai_gene_pane_1_t1

0x4a49,	// (0x00004a49) grid_ai_soft_ind_pane

0x49e7,	// (0x000049e7) ai_gene_pane_2_t1_ParamLimits

0x49e7,	// (0x000049e7) ai_gene_pane_2_t1

0xb6d3,	// (0x0000b6d3) main_pane_empty_t1_ParamLimits

0xb6d3,	// (0x0000b6d3) main_pane_empty_t1

0xb6eb,	// (0x0000b6eb) main_pane_empty_t2_ParamLimits

0xb6eb,	// (0x0000b6eb) main_pane_empty_t2

0xb700,	// (0x0000b700) main_pane_empty_t3_ParamLimits

0xb700,	// (0x0000b700) main_pane_empty_t3

0xb712,	// (0x0000b712) main_pane_empty_t4_ParamLimits

0xb712,	// (0x0000b712) main_pane_empty_t4

0xb724,	// (0x0000b724) main_pane_empty_t5_ParamLimits

0xb724,	// (0x0000b724) main_pane_empty_t5

0x0004,

0xedd4,	// (0x0000edd4) main_pane_empty_t_ParamLimits

0xedd4,	// (0x0000edd4) main_pane_empty_t

0x1584,	// (0x00001584) bg_popup_window_pane_ParamLimits

0x1584,	// (0x00001584) bg_popup_window_pane

0x4761,	// (0x00004761) find_popup_pane_cp2_ParamLimits

0x4761,	// (0x00004761) find_popup_pane_cp2

0x476d,	// (0x0000476d) heading_pane_ParamLimits

0x476d,	// (0x0000476d) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xcff9,	// (0x0000cff9) bg_popup_window_pane_g1_ParamLimits

0xcff9,	// (0x0000cff9) bg_popup_window_pane_g1

0xd008,	// (0x0000d008) bg_popup_window_pane_g2_ParamLimits

0xd008,	// (0x0000d008) bg_popup_window_pane_g2

0xd014,	// (0x0000d014) bg_popup_window_pane_g3_ParamLimits

0xd014,	// (0x0000d014) bg_popup_window_pane_g3

0xd020,	// (0x0000d020) bg_popup_window_pane_g4_ParamLimits

0xd020,	// (0x0000d020) bg_popup_window_pane_g4

0xd02f,	// (0x0000d02f) bg_popup_window_pane_g5_ParamLimits

0xd02f,	// (0x0000d02f) bg_popup_window_pane_g5

0xd03f,	// (0x0000d03f) bg_popup_window_pane_g6_ParamLimits

0xd03f,	// (0x0000d03f) bg_popup_window_pane_g6

0xd04b,	// (0x0000d04b) bg_popup_window_pane_g7_ParamLimits

0xd04b,	// (0x0000d04b) bg_popup_window_pane_g7

0xd05a,	// (0x0000d05a) bg_popup_window_pane_g8_ParamLimits

0xd05a,	// (0x0000d05a) bg_popup_window_pane_g8

0xd069,	// (0x0000d069) bg_popup_window_pane_g9_ParamLimits

0xd069,	// (0x0000d069) bg_popup_window_pane_g9

0x4736,	// (0x00004736) bg_popup_window_pane_g10_ParamLimits

0x4736,	// (0x00004736) bg_popup_window_pane_g10

0x0009,

0xef15,	// (0x0000ef15) bg_popup_window_pane_g_ParamLimits

0xef15,	// (0x0000ef15) bg_popup_window_pane_g

0x465f,	// (0x0000465f) bg_popup_heading_pane_ParamLimits

0x465f,	// (0x0000465f) bg_popup_heading_pane

0x52e5,	// (0x000052e5) tabs_4_passive_pane_cp_srt_ParamLimits

0x52e5,	// (0x000052e5) tabs_4_passive_pane_cp_srt

0x52f7,	// (0x000052f7) tabs_4_passive_pane_srt_ParamLimits

0x4673,	// (0x00004673) heading_pane_g2

0x52f7,	// (0x000052f7) tabs_4_passive_pane_srt

0x37d3,	// (0x000037d3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x37d3,	// (0x000037d3) bg_passive_tab_pane_cp3_srt

0x467b,	// (0x0000467b) heading_pane_t1_ParamLimits

0x467b,	// (0x0000467b) heading_pane_t1

0x4692,	// (0x00004692) heading_pane_t2_ParamLimits

0x4692,	// (0x00004692) heading_pane_t2

0x0001,

0xaca0,	// (0x0000aca0) heading_pane_t_ParamLimits

0xaca0,	// (0x0000aca0) heading_pane_t

0x4041,	// (0x00004041) bg_popup_heading_pane_g1

0x40f0,	// (0x000040f0) bg_popup_heading_pane_g2

0x40fa,	// (0x000040fa) bg_popup_heading_pane_g3

0x4104,	// (0x00004104) bg_popup_heading_pane_g4

0x410e,	// (0x0000410e) bg_popup_heading_pane_g5

0x4118,	// (0x00004118) bg_popup_heading_pane_g6

0x4120,	// (0x00004120) bg_popup_heading_pane_g7

0x4128,	// (0x00004128) bg_popup_heading_pane_g8

0x4132,	// (0x00004132) bg_popup_heading_pane_g9

0x0008,

0xac5c,	// (0x0000ac5c) bg_popup_heading_pane_g

0x3643,	// (0x00003643) bg_popup_sub_pane_g1

0x364b,	// (0x0000364b) bg_popup_sub_pane_g2

0x3653,	// (0x00003653) bg_popup_sub_pane_g3

0x365b,	// (0x0000365b) bg_popup_sub_pane_g4

0x3663,	// (0x00003663) bg_popup_sub_pane_g5

0x366b,	// (0x0000366b) bg_popup_sub_pane_g6

0x3673,	// (0x00003673) bg_popup_sub_pane_g7

0x367b,	// (0x0000367b) bg_popup_sub_pane_g8

0x3683,	// (0x00003683) bg_popup_sub_pane_g9

0x0008,

0xac36,	// (0x0000ac36) bg_popup_sub_pane_g

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

0xa962,	// (0x0000a962) popup_note_window_t_ParamLimits

0xa962,	// (0x0000a962) popup_note_window_t

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp6_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp6

0x3fb5,	// (0x00003fb5) popup_note_image_window_g1_ParamLimits

0x3fb5,	// (0x00003fb5) popup_note_image_window_g1

0x3fc1,	// (0x00003fc1) popup_note_image_window_g2_ParamLimits

0x3fc1,	// (0x00003fc1) popup_note_image_window_g2

0x0001,

0xac2a,	// (0x0000ac2a) popup_note_image_window_g_ParamLimits

0xac2a,	// (0x0000ac2a) popup_note_image_window_g

0x3fda,	// (0x00003fda) popup_note_image_window_t1_ParamLimits

0x3fda,	// (0x00003fda) popup_note_image_window_t1

0x3ff3,	// (0x00003ff3) popup_note_image_window_t2_ParamLimits

0x3ff3,	// (0x00003ff3) popup_note_image_window_t2

0x400c,	// (0x0000400c) popup_note_image_window_t3_ParamLimits

0x400c,	// (0x0000400c) popup_note_image_window_t3

0x0002,

0xac2f,	// (0x0000ac2f) popup_note_image_window_t_ParamLimits

0xac2f,	// (0x0000ac2f) popup_note_image_window_t

0x3e76,	// (0x00003e76) bg_popup_window_pane_cp7_ParamLimits

0x3e76,	// (0x00003e76) bg_popup_window_pane_cp7

0x3ea6,	// (0x00003ea6) popup_note_wait_window_g1_ParamLimits

0x3ea6,	// (0x00003ea6) popup_note_wait_window_g1

0x3eb2,	// (0x00003eb2) popup_note_wait_window_g2_ParamLimits

0x3eb2,	// (0x00003eb2) popup_note_wait_window_g2

0x0002,

0xac18,	// (0x0000ac18) popup_note_wait_window_g_ParamLimits

0xac18,	// (0x0000ac18) popup_note_wait_window_g

0x3eca,	// (0x00003eca) popup_note_wait_window_t1_ParamLimits

0x3eca,	// (0x00003eca) popup_note_wait_window_t1

0x3ef1,	// (0x00003ef1) popup_note_wait_window_t2_ParamLimits

0x3ef1,	// (0x00003ef1) popup_note_wait_window_t2

0x3f0e,	// (0x00003f0e) popup_note_wait_window_t3_ParamLimits

0x3f0e,	// (0x00003f0e) popup_note_wait_window_t3

0x3f21,	// (0x00003f21) popup_note_wait_window_t4_ParamLimits

0x3f21,	// (0x00003f21) popup_note_wait_window_t4

0x0004,

0xac1f,	// (0x0000ac1f) popup_note_wait_window_t_ParamLimits

0xac1f,	// (0x0000ac1f) popup_note_wait_window_t

0x3f46,	// (0x00003f46) wait_bar_pane_ParamLimits

0x3f46,	// (0x00003f46) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xaae1,	// (0x0000aae1) wait_anim_pane_g

0x3e1a,	// (0x00003e1a) wait_border_pane_g1

0x3e25,	// (0x00003e25) wait_border_pane_g2

0x3e2e,	// (0x00003e2e) wait_border_pane_g3

0x0002,

0xac11,	// (0x0000ac11) wait_border_pane_g

0x3c8a,	// (0x00003c8a) bg_popup_window_pane_cp16_ParamLimits

0x3c8a,	// (0x00003c8a) bg_popup_window_pane_cp16

0x3d8a,	// (0x00003d8a) indicator_popup_pane_cp4_ParamLimits

0x3d8a,	// (0x00003d8a) indicator_popup_pane_cp4

0x3d9e,	// (0x00003d9e) popup_query_data_window_t1_ParamLimits

0x3d9e,	// (0x00003d9e) popup_query_data_window_t1

0x3db0,	// (0x00003db0) popup_query_data_window_t2_ParamLimits

0x3db0,	// (0x00003db0) popup_query_data_window_t2

0x3dc9,	// (0x00003dc9) popup_query_data_window_t3_ParamLimits

0x3dc9,	// (0x00003dc9) popup_query_data_window_t3

0x0002,

0xac0a,	// (0x0000ac0a) popup_query_data_window_t_ParamLimits

0xac0a,	// (0x0000ac0a) popup_query_data_window_t

0x3de3,	// (0x00003de3) query_popup_data_pane_ParamLimits

0x3de3,	// (0x00003de3) query_popup_data_pane

0x3df7,	// (0x00003df7) query_popup_data_pane_cp1_ParamLimits

0x3df7,	// (0x00003df7) query_popup_data_pane_cp1

0x3c8a,	// (0x00003c8a) bg_popup_window_pane_cp10_ParamLimits

0x3c8a,	// (0x00003c8a) bg_popup_window_pane_cp10

0x3cbc,	// (0x00003cbc) indicator_popup_pane_ParamLimits

0x3cbc,	// (0x00003cbc) indicator_popup_pane

0x3cde,	// (0x00003cde) popup_query_code_window_t1_ParamLimits

0x3cde,	// (0x00003cde) popup_query_code_window_t1

0x3cf8,	// (0x00003cf8) popup_query_code_window_t2_ParamLimits

0x3cf8,	// (0x00003cf8) popup_query_code_window_t2

0x3d41,	// (0x00003d41) popup_query_code_window_t3_ParamLimits

0x3d41,	// (0x00003d41) popup_query_code_window_t3

0x0002,

0xac03,	// (0x0000ac03) popup_query_code_window_t_ParamLimits

0xac03,	// (0x0000ac03) popup_query_code_window_t

0x3d70,	// (0x00003d70) query_popup_pane_ParamLimits

0x3d70,	// (0x00003d70) query_popup_pane

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

0xa96d,	// (0x0000a96d) popup_query_data_code_window_t_ParamLimits

0xa96d,	// (0x0000a96d) popup_query_data_code_window_t

0x23d3,	// (0x000023d3) list_single_midp_graphic_pane_g3

0x095e,	// (0x0000095e) query_popup_data_pane_cp2_ParamLimits

0x0971,	// (0x00000971) query_popup_pane_cp2_ParamLimits

0x0971,	// (0x00000971) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c82,	// (0x00003c82) heading_pane_cp5

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

0xa976,	// (0x0000a976) popup_info_list_pane_t_ParamLimits

0xa976,	// (0x0000a976) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x53d9,	// (0x000053d9) find_popup_pane

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp3

0x09e7,	// (0x000009e7) heading_pane_cp3

0x09f3,	// (0x000009f3) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb786,	// (0x0000b786) heading_pane_cp4

0x0a59,	// (0x00000a59) listscroll_popup_colour_pane

0xb78e,	// (0x0000b78e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb78e,	// (0x0000b78e) cell_large_graphic_colour_none_popup_pane

0xb7a2,	// (0x0000b7a2) grid_large_graphic_colour_popup_pane_ParamLimits

0xb7a2,	// (0x0000b7a2) grid_large_graphic_colour_popup_pane

0xb7c6,	// (0x0000b7c6) listscroll_popup_colour_pane_g1_ParamLimits

0xb7c6,	// (0x0000b7c6) listscroll_popup_colour_pane_g1

0xb7dd,	// (0x0000b7dd) listscroll_popup_colour_pane_g2_ParamLimits

0xb7dd,	// (0x0000b7dd) listscroll_popup_colour_pane_g2

0xb7f4,	// (0x0000b7f4) listscroll_popup_colour_pane_g3_ParamLimits

0xb7f4,	// (0x0000b7f4) listscroll_popup_colour_pane_g3

0xb804,	// (0x0000b804) listscroll_popup_colour_pane_g4_ParamLimits

0xb804,	// (0x0000b804) listscroll_popup_colour_pane_g4

0x0003,

0xeddf,	// (0x0000eddf) listscroll_popup_colour_pane_g_ParamLimits

0xeddf,	// (0x0000eddf) listscroll_popup_colour_pane_g

0x0ae6,	// (0x00000ae6) scroll_pane_cp6_ParamLimits

0x0ae6,	// (0x00000ae6) scroll_pane_cp6

0xb813,	// (0x0000b813) cell_large_graphic_colour_popup_pane_ParamLimits

0xb813,	// (0x0000b813) cell_large_graphic_colour_popup_pane

0x0b17,	// (0x00000b17) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b26,	// (0x00000b26) cell_large_graphic_colour_popup_pane_g1

0x0b2e,	// (0x00000b2e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa984,	// (0x0000a984) cell_large_graphic_colour_popup_pane_g

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

0xa989,	// (0x0000a989) popup_snote_single_text_window_t_ParamLimits

0xa989,	// (0x0000a989) popup_snote_single_text_window_t

0x0c36,	// (0x00000c36) bg_popup_window_pane_cp9_ParamLimits

0x0c36,	// (0x00000c36) bg_popup_window_pane_cp9

0x0b62,	// (0x00000b62) popup_snote_single_graphic_window_g1_ParamLimits

0x0b62,	// (0x00000b62) popup_snote_single_graphic_window_g1

0x0c44,	// (0x00000c44) popup_snote_single_graphic_window_g2_ParamLimits

0x0c44,	// (0x00000c44) popup_snote_single_graphic_window_g2

0x0001,

0xa994,	// (0x0000a994) popup_snote_single_graphic_window_g_ParamLimits

0xa994,	// (0x0000a994) popup_snote_single_graphic_window_g

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

0xa999,	// (0x0000a999) popup_snote_single_graphic_window_t_ParamLimits

0xa999,	// (0x0000a999) popup_snote_single_graphic_window_t

0x5261,	// (0x00005261) grid_graphic_popup_pane_ParamLimits

0x5261,	// (0x00005261) grid_graphic_popup_pane

0x528d,	// (0x0000528d) listscroll_popup_graphic_pane_g1_ParamLimits

0x528d,	// (0x0000528d) listscroll_popup_graphic_pane_g1

0xd3ac,	// (0x0000d3ac) listscroll_popup_graphic_pane_g2_ParamLimits

0xd3ac,	// (0x0000d3ac) listscroll_popup_graphic_pane_g2

0x0001,

0xef5f,	// (0x0000ef5f) listscroll_popup_graphic_pane_g_ParamLimits

0xef5f,	// (0x0000ef5f) listscroll_popup_graphic_pane_g

0x52b5,	// (0x000052b5) scroll_pane_cp5

0xd36f,	// (0x0000d36f) cell_graphic_popup_pane_ParamLimits

0xd36f,	// (0x0000d36f) cell_graphic_popup_pane

0x51ed,	// (0x000051ed) cell_graphic_popup_pane_g1

0x51f5,	// (0x000051f5) cell_graphic_popup_pane_g2

0x0b36,	// (0x00000b36) cell_graphic_popup_pane_g3

0x0002,

0xad79,	// (0x0000ad79) cell_graphic_popup_pane_g

0x51fe,	// (0x000051fe) cell_graphic_popup_pane_t2

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp3

0x0d24,	// (0x00000d24) list_gen_pane_ParamLimits

0x0d24,	// (0x00000d24) list_gen_pane

0x0d56,	// (0x00000d56) scroll_pane

0xd32a,	// (0x0000d32a) bg_list_pane_g1_ParamLimits

0xd32a,	// (0x0000d32a) bg_list_pane_g1

0x516a,	// (0x0000516a) bg_list_pane_g2_ParamLimits

0x516a,	// (0x0000516a) bg_list_pane_g2

0x517d,	// (0x0000517d) bg_list_pane_g3_ParamLimits

0x517d,	// (0x0000517d) bg_list_pane_g3

0x518f,	// (0x0000518f) bg_list_pane_g4_ParamLimits

0x518f,	// (0x0000518f) bg_list_pane_g4

0xd345,	// (0x0000d345) bg_list_pane_g5_ParamLimits

0xd345,	// (0x0000d345) bg_list_pane_g5

0x0004,

0xef54,	// (0x0000ef54) bg_list_pane_g_ParamLimits

0xef54,	// (0x0000ef54) bg_list_pane_g

0xd2b3,	// (0x0000d2b3) list_double2_graphic_large_graphic_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_double2_graphic_large_graphic_pane

0xd2b3,	// (0x0000d2b3) list_double2_graphic_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_double2_graphic_pane

0xd2b3,	// (0x0000d2b3) list_double2_large_graphic_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_double2_large_graphic_pane

0xd2b3,	// (0x0000d2b3) list_double2_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_double2_pane

0xd2b3,	// (0x0000d2b3) list_double_graphic_heading_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_double_graphic_heading_pane

0xd2b3,	// (0x0000d2b3) list_double_graphic_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_double_graphic_pane

0xd2b3,	// (0x0000d2b3) list_double_heading_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_double_heading_pane

0xd2b3,	// (0x0000d2b3) list_double_large_graphic_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_double_large_graphic_pane

0xd2b3,	// (0x0000d2b3) list_double_number_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_double_number_pane

0xd2b3,	// (0x0000d2b3) list_double_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_double_pane

0xd2b3,	// (0x0000d2b3) list_double_time_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_double_time_pane

0xd2b3,	// (0x0000d2b3) list_setting_number_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_setting_number_pane

0xd2b3,	// (0x0000d2b3) list_setting_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_setting_pane

0xd2c6,	// (0x0000d2c6) list_single_2graphic_pane_ParamLimits

0xd2c6,	// (0x0000d2c6) list_single_2graphic_pane

0xd2c6,	// (0x0000d2c6) list_single_graphic_heading_pane_ParamLimits

0xd2c6,	// (0x0000d2c6) list_single_graphic_heading_pane

0xd2c6,	// (0x0000d2c6) list_single_graphic_pane_ParamLimits

0xd2c6,	// (0x0000d2c6) list_single_graphic_pane

0xd2c6,	// (0x0000d2c6) list_single_heading_pane_ParamLimits

0xd2c6,	// (0x0000d2c6) list_single_heading_pane

0xd316,	// (0x0000d316) list_single_large_graphic_pane_ParamLimits

0xd316,	// (0x0000d316) list_single_large_graphic_pane

0xd2c6,	// (0x0000d2c6) list_single_number_heading_pane_ParamLimits

0xd2c6,	// (0x0000d2c6) list_single_number_heading_pane

0xd2c6,	// (0x0000d2c6) list_single_number_pane_ParamLimits

0xd2c6,	// (0x0000d2c6) list_single_number_pane

0xd2c6,	// (0x0000d2c6) list_single_pane_ParamLimits

0xd2c6,	// (0x0000d2c6) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x247a,	// (0x0000247a) list_single_pane_g1_ParamLimits

0x247a,	// (0x0000247a) list_single_pane_g1

0x34e9,	// (0x000034e9) list_single_pane_g2_ParamLimits

0x34e9,	// (0x000034e9) list_single_pane_g2

0x0001,

0xabb6,	// (0x0000abb6) list_single_pane_g_ParamLimits

0xabb6,	// (0x0000abb6) list_single_pane_g

0x59d8,	// (0x000059d8) list_single_pane_t1_ParamLimits

0x59d8,	// (0x000059d8) list_single_pane_t1

0x247a,	// (0x0000247a) list_single_number_pane_g1_ParamLimits

0x247a,	// (0x0000247a) list_single_number_pane_g1

0x34e9,	// (0x000034e9) list_single_number_pane_g2_ParamLimits

0x34e9,	// (0x000034e9) list_single_number_pane_g2

0x0001,

0xabb6,	// (0x0000abb6) list_single_number_pane_g_ParamLimits

0xabb6,	// (0x0000abb6) list_single_number_pane_g

0x35d1,	// (0x000035d1) list_single_number_pane_t1_ParamLimits

0x35d1,	// (0x000035d1) list_single_number_pane_t1

0xd106,	// (0x0000d106) list_single_number_pane_t2_ParamLimits

0xd106,	// (0x0000d106) list_single_number_pane_t2

0x0001,

0xef37,	// (0x0000ef37) list_single_number_pane_t_ParamLimits

0xef37,	// (0x0000ef37) list_single_number_pane_t

0xb83c,	// (0x0000b83c) list_single_graphic_pane_g1_ParamLimits

0xb83c,	// (0x0000b83c) list_single_graphic_pane_g1

0x247a,	// (0x0000247a) list_single_graphic_pane_g2_ParamLimits

0x247a,	// (0x0000247a) list_single_graphic_pane_g2

0x34e9,	// (0x000034e9) list_single_graphic_pane_g3_ParamLimits

0x34e9,	// (0x000034e9) list_single_graphic_pane_g3

0x0002,

0xede8,	// (0x0000ede8) list_single_graphic_pane_g_ParamLimits

0xede8,	// (0x0000ede8) list_single_graphic_pane_g

0xb848,	// (0x0000b848) list_single_graphic_pane_t1_ParamLimits

0xb848,	// (0x0000b848) list_single_graphic_pane_t1

0x247a,	// (0x0000247a) list_single_heading_pane_g1_ParamLimits

0x247a,	// (0x0000247a) list_single_heading_pane_g1

0x34e9,	// (0x000034e9) list_single_heading_pane_g2_ParamLimits

0x34e9,	// (0x000034e9) list_single_heading_pane_g2

0x0001,

0xabb6,	// (0x0000abb6) list_single_heading_pane_g_ParamLimits

0xabb6,	// (0x0000abb6) list_single_heading_pane_g

0xb85e,	// (0x0000b85e) list_single_heading_pane_t1_ParamLimits

0xb85e,	// (0x0000b85e) list_single_heading_pane_t1

0xb874,	// (0x0000b874) list_single_heading_pane_t2_ParamLimits

0xb874,	// (0x0000b874) list_single_heading_pane_t2

0x0001,

0xedef,	// (0x0000edef) list_single_heading_pane_t_ParamLimits

0xedef,	// (0x0000edef) list_single_heading_pane_t

0x247a,	// (0x0000247a) list_single_number_heading_pane_g1_ParamLimits

0x247a,	// (0x0000247a) list_single_number_heading_pane_g1

0x34e9,	// (0x000034e9) list_single_number_heading_pane_g2_ParamLimits

0x34e9,	// (0x000034e9) list_single_number_heading_pane_g2

0x0001,

0xabb6,	// (0x0000abb6) list_single_number_heading_pane_g_ParamLimits

0xabb6,	// (0x0000abb6) list_single_number_heading_pane_g

0xb85e,	// (0x0000b85e) list_single_number_heading_pane_t1_ParamLimits

0xb85e,	// (0x0000b85e) list_single_number_heading_pane_t1

0xb886,	// (0x0000b886) list_single_number_heading_pane_t2_ParamLimits

0xb886,	// (0x0000b886) list_single_number_heading_pane_t2

0x59b2,	// (0x000059b2) list_single_number_heading_pane_t3_ParamLimits

0x59b2,	// (0x000059b2) list_single_number_heading_pane_t3

0x0002,

0xedf4,	// (0x0000edf4) list_single_number_heading_pane_t_ParamLimits

0xedf4,	// (0x0000edf4) list_single_number_heading_pane_t

0x34dd,	// (0x000034dd) list_single_graphic_heading_pane_g1_ParamLimits

0x34dd,	// (0x000034dd) list_single_graphic_heading_pane_g1

0xb898,	// (0x0000b898) list_single_graphic_heading_pane_g4_ParamLimits

0xb898,	// (0x0000b898) list_single_graphic_heading_pane_g4

0x34e9,	// (0x000034e9) list_single_graphic_heading_pane_g5_ParamLimits

0x34e9,	// (0x000034e9) list_single_graphic_heading_pane_g5

0x0002,

0xedfb,	// (0x0000edfb) list_single_graphic_heading_pane_g_ParamLimits

0xedfb,	// (0x0000edfb) list_single_graphic_heading_pane_g

0xb85e,	// (0x0000b85e) list_single_graphic_heading_pane_t1_ParamLimits

0xb85e,	// (0x0000b85e) list_single_graphic_heading_pane_t1

0xb8a9,	// (0x0000b8a9) list_single_graphic_heading_pane_t2_ParamLimits

0xb8a9,	// (0x0000b8a9) list_single_graphic_heading_pane_t2

0x0001,

0xee02,	// (0x0000ee02) list_single_graphic_heading_pane_t_ParamLimits

0xee02,	// (0x0000ee02) list_single_graphic_heading_pane_t

0x59ee,	// (0x000059ee) list_single_large_graphic_pane_g1_ParamLimits

0x59ee,	// (0x000059ee) list_single_large_graphic_pane_g1

0x0e4b,	// (0x00000e4b) list_single_large_graphic_pane_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_large_graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_large_graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_large_graphic_pane_g3

0x0002,

0xae1e,	// (0x0000ae1e) list_single_large_graphic_pane_g_ParamLimits

0xae1e,	// (0x0000ae1e) list_single_large_graphic_pane_g

0x3e25,	// (0x00003e25) wait_border_pane_g2_copy1

0xb8bb,	// (0x0000b8bb) list_single_large_graphic_pane_g4_cp2

0x59fa,	// (0x000059fa) list_single_large_graphic_pane_t1_ParamLimits

0x59fa,	// (0x000059fa) list_single_large_graphic_pane_t1

0x0fa7,	// (0x00000fa7) list_double_pane_g1_ParamLimits

0x0fa7,	// (0x00000fa7) list_double_pane_g1

0x0ed2,	// (0x00000ed2) list_double_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_pane_g2

0x0001,

0xaa44,	// (0x0000aa44) list_double_pane_g_ParamLimits

0xaa44,	// (0x0000aa44) list_double_pane_g

0x0ede,	// (0x00000ede) list_double_pane_t1_ParamLimits

0x0ede,	// (0x00000ede) list_double_pane_t1

0xb8c3,	// (0x0000b8c3) list_double_pane_t2_ParamLimits

0xb8c3,	// (0x0000b8c3) list_double_pane_t2

0x0001,

0xee07,	// (0x0000ee07) list_double_pane_t_ParamLimits

0xee07,	// (0x0000ee07) list_double_pane_t

0xb8d5,	// (0x0000b8d5) list_double2_pane_g1_ParamLimits

0xb8d5,	// (0x0000b8d5) list_double2_pane_g1

0xb8e6,	// (0x0000b8e6) list_double2_pane_g2_ParamLimits

0xb8e6,	// (0x0000b8e6) list_double2_pane_g2

0x0001,

0xee0c,	// (0x0000ee0c) list_double2_pane_g_ParamLimits

0xee0c,	// (0x0000ee0c) list_double2_pane_g

0x756e,	// (0x0000756e) list_double2_pane_t1_ParamLimits

0x756e,	// (0x0000756e) list_double2_pane_t1

0x10d0,	// (0x000010d0) list_double2_pane_t2_ParamLimits

0x10d0,	// (0x000010d0) list_double2_pane_t2

0x0001,

0xee11,	// (0x0000ee11) list_double2_pane_t_ParamLimits

0xee11,	// (0x0000ee11) list_double2_pane_t

0x0fa7,	// (0x00000fa7) list_double_number_pane_g1_ParamLimits

0x0fa7,	// (0x00000fa7) list_double_number_pane_g1

0x0ed2,	// (0x00000ed2) list_double_number_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_number_pane_g2

0x0001,

0xaa44,	// (0x0000aa44) list_double_number_pane_g_ParamLimits

0xaa44,	// (0x0000aa44) list_double_number_pane_g

0xb8f2,	// (0x0000b8f2) list_double_number_pane_t1_ParamLimits

0xb8f2,	// (0x0000b8f2) list_double_number_pane_t1

0x0fb3,	// (0x00000fb3) list_double_number_pane_t2_ParamLimits

0x0fb3,	// (0x00000fb3) list_double_number_pane_t2

0xb904,	// (0x0000b904) list_double_number_pane_t3_ParamLimits

0xb904,	// (0x0000b904) list_double_number_pane_t3

0x0002,

0xee16,	// (0x0000ee16) list_double_number_pane_t_ParamLimits

0xee16,	// (0x0000ee16) list_double_number_pane_t

0x0f9b,	// (0x00000f9b) list_double_graphic_pane_g1_ParamLimits

0x0f9b,	// (0x00000f9b) list_double_graphic_pane_g1

0xb916,	// (0x0000b916) list_double_graphic_pane_g2_ParamLimits

0xb916,	// (0x0000b916) list_double_graphic_pane_g2

0xb925,	// (0x0000b925) list_double_graphic_pane_g3_ParamLimits

0xb925,	// (0x0000b925) list_double_graphic_pane_g3

0x0003,

0xee1d,	// (0x0000ee1d) list_double_graphic_pane_g_ParamLimits

0xee1d,	// (0x0000ee1d) list_double_graphic_pane_g

0xb93d,	// (0x0000b93d) list_double_graphic_pane_t1_ParamLimits

0xb93d,	// (0x0000b93d) list_double_graphic_pane_t1

0xb953,	// (0x0000b953) list_double_graphic_pane_t2_ParamLimits

0xb953,	// (0x0000b953) list_double_graphic_pane_t2

0x0001,

0xee26,	// (0x0000ee26) list_double_graphic_pane_t_ParamLimits

0xee26,	// (0x0000ee26) list_double_graphic_pane_t

0xb965,	// (0x0000b965) list_double2_graphic_pane_g1_ParamLimits

0xb965,	// (0x0000b965) list_double2_graphic_pane_g1

0x1375,	// (0x00001375) list_double2_graphic_pane_g2_ParamLimits

0x1375,	// (0x00001375) list_double2_graphic_pane_g2

0xb8e6,	// (0x0000b8e6) list_double2_graphic_pane_g3_ParamLimits

0xb8e6,	// (0x0000b8e6) list_double2_graphic_pane_g3

0x0002,

0xee2b,	// (0x0000ee2b) list_double2_graphic_pane_g_ParamLimits

0xee2b,	// (0x0000ee2b) list_double2_graphic_pane_g

0xb971,	// (0x0000b971) list_double2_graphic_pane_t1_ParamLimits

0xb971,	// (0x0000b971) list_double2_graphic_pane_t1

0x10f8,	// (0x000010f8) list_double2_graphic_pane_t2_ParamLimits

0x10f8,	// (0x000010f8) list_double2_graphic_pane_t2

0x0001,

0xee32,	// (0x0000ee32) list_double2_graphic_pane_t_ParamLimits

0xee32,	// (0x0000ee32) list_double2_graphic_pane_t

0xb987,	// (0x0000b987) list_double_large_graphic_pane_g1_ParamLimits

0xb987,	// (0x0000b987) list_double_large_graphic_pane_g1

0xb9b2,	// (0x0000b9b2) list_double_large_graphic_pane_g2_ParamLimits

0xb9b2,	// (0x0000b9b2) list_double_large_graphic_pane_g2

0x0ed2,	// (0x00000ed2) list_double_large_graphic_pane_g3_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_large_graphic_pane_g3

0xb9c3,	// (0x0000b9c3) list_double_large_graphic_pane_g4_ParamLimits

0xb9c3,	// (0x0000b9c3) list_double_large_graphic_pane_g4

0x0004,

0xee37,	// (0x0000ee37) list_double_large_graphic_pane_g_ParamLimits

0xee37,	// (0x0000ee37) list_double_large_graphic_pane_g

0xb9d6,	// (0x0000b9d6) list_double_large_graphic_pane_t1_ParamLimits

0xb9d6,	// (0x0000b9d6) list_double_large_graphic_pane_t1

0xb9ef,	// (0x0000b9ef) list_double_large_graphic_pane_t2_ParamLimits

0xb9ef,	// (0x0000b9ef) list_double_large_graphic_pane_t2

0x0001,

0xee42,	// (0x0000ee42) list_double_large_graphic_pane_t_ParamLimits

0xee42,	// (0x0000ee42) list_double_large_graphic_pane_t

0xba01,	// (0x0000ba01) list_double2_large_graphic_pane_g1_ParamLimits

0xba01,	// (0x0000ba01) list_double2_large_graphic_pane_g1

0xb8d5,	// (0x0000b8d5) list_double2_large_graphic_pane_g2_ParamLimits

0xb8d5,	// (0x0000b8d5) list_double2_large_graphic_pane_g2

0xb8e6,	// (0x0000b8e6) list_double2_large_graphic_pane_g3_ParamLimits

0xb8e6,	// (0x0000b8e6) list_double2_large_graphic_pane_g3

0x0002,

0xee47,	// (0x0000ee47) list_double2_large_graphic_pane_g_ParamLimits

0xee47,	// (0x0000ee47) list_double2_large_graphic_pane_g

0xba0d,	// (0x0000ba0d) list_double2_large_graphic_pane_t1_ParamLimits

0xba0d,	// (0x0000ba0d) list_double2_large_graphic_pane_t1

0xba23,	// (0x0000ba23) list_double2_large_graphic_pane_t2_ParamLimits

0xba23,	// (0x0000ba23) list_double2_large_graphic_pane_t2

0x0001,

0xee4e,	// (0x0000ee4e) list_double2_large_graphic_pane_t_ParamLimits

0xee4e,	// (0x0000ee4e) list_double2_large_graphic_pane_t

0xba35,	// (0x0000ba35) list_double_heading_pane_g1_ParamLimits

0xba35,	// (0x0000ba35) list_double_heading_pane_g1

0xba46,	// (0x0000ba46) list_double_heading_pane_g2_ParamLimits

0xba46,	// (0x0000ba46) list_double_heading_pane_g2

0x0001,

0xee53,	// (0x0000ee53) list_double_heading_pane_g_ParamLimits

0xee53,	// (0x0000ee53) list_double_heading_pane_g

0xba52,	// (0x0000ba52) list_double_heading_pane_t1_ParamLimits

0xba52,	// (0x0000ba52) list_double_heading_pane_t1

0xba68,	// (0x0000ba68) list_double_heading_pane_t2_ParamLimits

0xba68,	// (0x0000ba68) list_double_heading_pane_t2

0x0001,

0xee58,	// (0x0000ee58) list_double_heading_pane_t_ParamLimits

0xee58,	// (0x0000ee58) list_double_heading_pane_t

0x0f9b,	// (0x00000f9b) list_double_graphic_heading_pane_g1_ParamLimits

0x0f9b,	// (0x00000f9b) list_double_graphic_heading_pane_g1

0xba35,	// (0x0000ba35) list_double_graphic_heading_pane_g2_ParamLimits

0xba35,	// (0x0000ba35) list_double_graphic_heading_pane_g2

0xba46,	// (0x0000ba46) list_double_graphic_heading_pane_g3_ParamLimits

0xba46,	// (0x0000ba46) list_double_graphic_heading_pane_g3

0x0002,

0xee5d,	// (0x0000ee5d) list_double_graphic_heading_pane_g_ParamLimits

0xee5d,	// (0x0000ee5d) list_double_graphic_heading_pane_g

0xba7a,	// (0x0000ba7a) list_double_graphic_heading_pane_t1_ParamLimits

0xba7a,	// (0x0000ba7a) list_double_graphic_heading_pane_t1

0xba90,	// (0x0000ba90) list_double_graphic_heading_pane_t2_ParamLimits

0xba90,	// (0x0000ba90) list_double_graphic_heading_pane_t2

0x0001,

0xee64,	// (0x0000ee64) list_double_graphic_heading_pane_t_ParamLimits

0xee64,	// (0x0000ee64) list_double_graphic_heading_pane_t

0xb9b2,	// (0x0000b9b2) list_double_time_pane_g1_ParamLimits

0xb9b2,	// (0x0000b9b2) list_double_time_pane_g1

0x0ed2,	// (0x00000ed2) list_double_time_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_time_pane_g2

0x0001,

0xee69,	// (0x0000ee69) list_double_time_pane_g_ParamLimits

0xee69,	// (0x0000ee69) list_double_time_pane_g

0x1075,	// (0x00001075) list_double_time_pane_t1_ParamLimits

0x1075,	// (0x00001075) list_double_time_pane_t1

0xbaa2,	// (0x0000baa2) list_double_time_pane_t2_ParamLimits

0xbaa2,	// (0x0000baa2) list_double_time_pane_t2

0xbab4,	// (0x0000bab4) list_double_time_pane_t3_ParamLimits

0xbab4,	// (0x0000bab4) list_double_time_pane_t3

0xbac6,	// (0x0000bac6) list_double_time_pane_t4_ParamLimits

0xbac6,	// (0x0000bac6) list_double_time_pane_t4

0x0003,

0xee6e,	// (0x0000ee6e) list_double_time_pane_t_ParamLimits

0xee6e,	// (0x0000ee6e) list_double_time_pane_t

0x1375,	// (0x00001375) list_setting_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_setting_pane_g1

0xb8e6,	// (0x0000b8e6) list_setting_pane_g2_ParamLimits

0xb8e6,	// (0x0000b8e6) list_setting_pane_g2

0x0001,

0xee77,	// (0x0000ee77) list_setting_pane_g_ParamLimits

0xee77,	// (0x0000ee77) list_setting_pane_g

0xbad8,	// (0x0000bad8) list_setting_pane_t1_ParamLimits

0xbad8,	// (0x0000bad8) list_setting_pane_t1

0xbaef,	// (0x0000baef) list_setting_pane_t2_ParamLimits

0xbaef,	// (0x0000baef) list_setting_pane_t2

0x0002,

0xee7c,	// (0x0000ee7c) list_setting_pane_t_ParamLimits

0xee7c,	// (0x0000ee7c) list_setting_pane_t

0xbb2c,	// (0x0000bb2c) set_value_pane_cp_ParamLimits

0xbb2c,	// (0x0000bb2c) set_value_pane_cp

0x1375,	// (0x00001375) list_setting_number_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_setting_number_pane_g1

0xb8e6,	// (0x0000b8e6) list_setting_number_pane_g2_ParamLimits

0xb8e6,	// (0x0000b8e6) list_setting_number_pane_g2

0x0001,

0xee77,	// (0x0000ee77) list_setting_number_pane_g_ParamLimits

0xee77,	// (0x0000ee77) list_setting_number_pane_g

0xbb38,	// (0x0000bb38) list_setting_number_pane_t1_ParamLimits

0xbb38,	// (0x0000bb38) list_setting_number_pane_t1

0xbb4c,	// (0x0000bb4c) list_setting_number_pane_t2_ParamLimits

0xbb4c,	// (0x0000bb4c) list_setting_number_pane_t2

0xbb63,	// (0x0000bb63) list_setting_number_pane_t3_ParamLimits

0xbb63,	// (0x0000bb63) list_setting_number_pane_t3

0x0003,

0xee83,	// (0x0000ee83) list_setting_number_pane_t_ParamLimits

0xee83,	// (0x0000ee83) list_setting_number_pane_t

0xbb2c,	// (0x0000bb2c) set_value_pane_ParamLimits

0xbb2c,	// (0x0000bb2c) set_value_pane

0x1224,	// (0x00001224) bg_set_opt_pane_ParamLimits

0x1224,	// (0x00001224) bg_set_opt_pane

0x1245,	// (0x00001245) set_value_pane_t1

0x1253,	// (0x00001253) slider_set_pane_cp3

0x125c,	// (0x0000125c) volume_small_pane_cp

0x1265,	// (0x00001265) list_form_gen_pane

0x126e,	// (0x0000126e) scroll_pane_cp8

0xbba6,	// (0x0000bba6) form_field_data_pane_ParamLimits

0xbba6,	// (0x0000bba6) form_field_data_pane

0xbbbd,	// (0x0000bbbd) form_field_data_wide_pane_ParamLimits

0xbbbd,	// (0x0000bbbd) form_field_data_wide_pane

0xbbdd,	// (0x0000bbdd) form_field_popup_pane_ParamLimits

0xbbdd,	// (0x0000bbdd) form_field_popup_pane

0xbbfb,	// (0x0000bbfb) form_field_popup_wide_pane_ParamLimits

0xbbfb,	// (0x0000bbfb) form_field_popup_wide_pane

0x12f9,	// (0x000012f9) form_field_slider_pane_ParamLimits

0x12f9,	// (0x000012f9) form_field_slider_pane

0x130c,	// (0x0000130c) form_field_slider_wide_pane_ParamLimits

0x130c,	// (0x0000130c) form_field_slider_wide_pane

0x131f,	// (0x0000131f) data_form_pane

0xbc1c,	// (0x0000bc1c) form_field_data_pane_t1

0x134f,	// (0x0000134f) input_focus_pane

0x135d,	// (0x0000135d) data_form_wide_pane

0x1395,	// (0x00001395) form_field_data_wide_pane_t1

0x0b54,	// (0x00000b54) input_focus_pane_cp6

0xbc36,	// (0x0000bc36) form_field_popup_pane_t1

0x134f,	// (0x0000134f) input_focus_pane_cp7

0x13d1,	// (0x000013d1) list_form_pane

0x13e5,	// (0x000013e5) form_field_popup_wide_pane_t1

0x134f,	// (0x0000134f) input_focus_pane_cp8

0x13fa,	// (0x000013fa) list_form_wide_pane

0xbc58,	// (0x0000bc58) form_field_slider_pane_t1_ParamLimits

0xbc58,	// (0x0000bc58) form_field_slider_pane_t1

0xbc70,	// (0x0000bc70) form_field_slider_pane_t2_ParamLimits

0xbc70,	// (0x0000bc70) form_field_slider_pane_t2

0x0001,

0xee8c,	// (0x0000ee8c) form_field_slider_pane_t_ParamLimits

0xee8c,	// (0x0000ee8c) form_field_slider_pane_t

0x080b,	// (0x0000080b) input_focus_pane_cp9_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp9

0xbc85,	// (0x0000bc85) slider_cont_pane_ParamLimits

0xbc85,	// (0x0000bc85) slider_cont_pane

0x144b,	// (0x0000144b) form_field_slider_wide_pane_t1_ParamLimits

0x144b,	// (0x0000144b) form_field_slider_wide_pane_t1

0x145d,	// (0x0000145d) form_field_slider_wide_pane_t2_ParamLimits

0x145d,	// (0x0000145d) form_field_slider_wide_pane_t2

0x0001,

0xaa65,	// (0x0000aa65) form_field_slider_wide_pane_t_ParamLimits

0xaa65,	// (0x0000aa65) form_field_slider_wide_pane_t

0x080b,	// (0x0000080b) input_focus_pane_cp10_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp10

0xbc99,	// (0x0000bc99) slider_cont_pane_cp1_ParamLimits

0xbc99,	// (0x0000bc99) slider_cont_pane_cp1

0xbcad,	// (0x0000bcad) slider_form_pane_cp

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

0xaa6a,	// (0x0000aa6a) input_focus_pane_g

0x3e2e,	// (0x00003e2e) wait_border_pane_g3_copy1

0xbcb5,	// (0x0000bcb5) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd297,	// (0x0000d297) data_form_wide_pane_t1

0xbccf,	// (0x0000bccf) list_form_graphic_pane_cp_ParamLimits

0xbccf,	// (0x0000bccf) list_form_graphic_pane_cp

0x4fa1,	// (0x00004fa1) slider_form_pane_g1

0x4faa,	// (0x00004faa) slider_form_pane_g2

0x0006,

0xef45,	// (0x0000ef45) slider_form_pane_g

0xbce2,	// (0x0000bce2) list_form_graphic_pane_ParamLimits

0xbce2,	// (0x0000bce2) list_form_graphic_pane

0x151f,	// (0x0000151f) list_form_graphic_pane_g1

0x1527,	// (0x00001527) list_form_graphic_pane_t1_ParamLimits

0x1527,	// (0x00001527) list_form_graphic_pane_t1

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp5

0xbcf6,	// (0x0000bcf6) find_pane_g1

0x1545,	// (0x00001545) input_find_pane

0xbcff,	// (0x0000bcff) input_find_pane_g1_ParamLimits

0xbcff,	// (0x0000bcff) input_find_pane_g1

0xbd0b,	// (0x0000bd0b) input_find_pane_t1_ParamLimits

0xbd0b,	// (0x0000bd0b) input_find_pane_t1

0xbd20,	// (0x0000bd20) input_find_pane_t2_ParamLimits

0xbd20,	// (0x0000bd20) input_find_pane_t2

0x0001,

0xee91,	// (0x0000ee91) input_find_pane_t_ParamLimits

0xee91,	// (0x0000ee91) input_find_pane_t

0x1584,	// (0x00001584) input_focus_pane_cp5_ParamLimits

0x1584,	// (0x00001584) input_focus_pane_cp5

0xbd41,	// (0x0000bd41) bg_popup_window_pane_cp2_ParamLimits

0xbd41,	// (0x0000bd41) bg_popup_window_pane_cp2

0xbd4e,	// (0x0000bd4e) listscroll_menu_pane_ParamLimits

0xbd4e,	// (0x0000bd4e) listscroll_menu_pane

0xbd5a,	// (0x0000bd5a) popup_submenu_window_ParamLimits

0xbd5a,	// (0x0000bd5a) popup_submenu_window

0x15df,	// (0x000015df) find_popup_pane_g1

0x15e7,	// (0x000015e7) input_popup_find_pane_cp

0x1584,	// (0x00001584) input_focus_pane_cp4_ParamLimits

0x1584,	// (0x00001584) input_focus_pane_cp4

0x15ff,	// (0x000015ff) input_popup_find_pane_t1_ParamLimits

0x15ff,	// (0x000015ff) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x162d,	// (0x0000162d) listscroll_popup_sub_pane

0x1635,	// (0x00001635) list_submenu_pane_ParamLimits

0x1635,	// (0x00001635) list_submenu_pane

0x1646,	// (0x00001646) scroll_pane_cp4

0x164e,	// (0x0000164e) list_single_popup_submenu_pane_ParamLimits

0x164e,	// (0x0000164e) list_single_popup_submenu_pane

0x1661,	// (0x00001661) list_single_popup_submenu_pane_g1

0x1669,	// (0x00001669) list_single_popup_submenu_pane_t1_ParamLimits

0x1669,	// (0x00001669) list_single_popup_submenu_pane_t1

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1

0xbd90,	// (0x0000bd90) tabs_2_active_pane_g1

0xbd98,	// (0x0000bd98) tabs_2_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp1_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp1

0xbd90,	// (0x0000bd90) tabs_2_passive_pane_g1

0xbd98,	// (0x0000bd98) tabs_2_passive_pane_t1

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4

0xbdaa,	// (0x0000bdaa) tabs_2_long_active_pane_t1

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp4

0x36b0,	// (0x000036b0) list_single_midp_graphic_pane_g4_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5

0xbdbd,	// (0x0000bdbd) tabs_3_long_active_pane_t1

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp5

0x36b0,	// (0x000036b0) list_single_midp_graphic_pane_g4

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp13_ParamLimits

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp13

0x16e0,	// (0x000016e0) listscroll_popup_fast_pane_ParamLimits

0x16e0,	// (0x000016e0) listscroll_popup_fast_pane

0x16ef,	// (0x000016ef) grid_popup_fast_pane_ParamLimits

0x16ef,	// (0x000016ef) grid_popup_fast_pane

0x1701,	// (0x00001701) scroll_pane_cp9_ParamLimits

0x1701,	// (0x00001701) scroll_pane_cp9

0x71da,	// (0x000071da) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x71da,	// (0x000071da) list_single_graphic_hl_pane_t1_cp2

0x1725,	// (0x00001725) input_focus_pane_cp20_ParamLimits

0x1725,	// (0x00001725) input_focus_pane_cp20

0x1733,	// (0x00001733) query_popup_data_pane_t1_ParamLimits

0x1733,	// (0x00001733) query_popup_data_pane_t1

0x1746,	// (0x00001746) query_popup_data_pane_t2_ParamLimits

0x1746,	// (0x00001746) query_popup_data_pane_t2

0x178c,	// (0x0000178c) query_popup_data_pane_t3_ParamLimits

0x178c,	// (0x0000178c) query_popup_data_pane_t3

0x17cd,	// (0x000017cd) query_popup_data_pane_t4_ParamLimits

0x17cd,	// (0x000017cd) query_popup_data_pane_t4

0x1809,	// (0x00001809) query_popup_data_pane_t5_ParamLimits

0x1809,	// (0x00001809) query_popup_data_pane_t5

0x0004,

0xaa84,	// (0x0000aa84) query_popup_data_pane_t_ParamLimits

0xaa84,	// (0x0000aa84) query_popup_data_pane_t

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

0xaa8f,	// (0x0000aa8f) bg_set_opt_pane_g

0x20fa,	// (0x000020fa) control_top_pane_stacon_ParamLimits

0x20fa,	// (0x000020fa) control_top_pane_stacon

0x214d,	// (0x0000214d) signal_pane_stacon_ParamLimits

0x214d,	// (0x0000214d) signal_pane_stacon

0x2172,	// (0x00002172) stacon_top_pane_g1_ParamLimits

0x2172,	// (0x00002172) stacon_top_pane_g1

0x2194,	// (0x00002194) title_pane_stacon_ParamLimits

0x2194,	// (0x00002194) title_pane_stacon

0x21be,	// (0x000021be) uni_indicator_pane_stacon_ParamLimits

0x21be,	// (0x000021be) uni_indicator_pane_stacon

0x21d3,	// (0x000021d3) battery_pane_stacon_ParamLimits

0x21d3,	// (0x000021d3) battery_pane_stacon

0x2217,	// (0x00002217) control_bottom_pane_stacon_ParamLimits

0x2217,	// (0x00002217) control_bottom_pane_stacon

0x223a,	// (0x0000223a) navi_pane_stacon_ParamLimits

0x223a,	// (0x0000223a) navi_pane_stacon

0x225d,	// (0x0000225d) stacon_bottom_pane_g1_ParamLimits

0x225d,	// (0x0000225d) stacon_bottom_pane_g1

0x1840,	// (0x00001840) aid_levels_signal_lsc_ParamLimits

0x1840,	// (0x00001840) aid_levels_signal_lsc

0x1857,	// (0x00001857) signal_pane_stacon_g1_ParamLimits

0x1857,	// (0x00001857) signal_pane_stacon_g1

0x186b,	// (0x0000186b) signal_pane_stacon_g2_ParamLimits

0x186b,	// (0x0000186b) signal_pane_stacon_g2

0x0001,

0xaaa2,	// (0x0000aaa2) signal_pane_stacon_g_ParamLimits

0xaaa2,	// (0x0000aaa2) signal_pane_stacon_g

0x18ad,	// (0x000018ad) title_pane_stacon_t1_ParamLimits

0x18ad,	// (0x000018ad) title_pane_stacon_t1

0x18d2,	// (0x000018d2) uni_indicator_pane_stacon_g1

0x18dc,	// (0x000018dc) uni_indicator_pane_stacon_g2

0x18e6,	// (0x000018e6) uni_indicator_pane_stacon_g3

0x18f0,	// (0x000018f0) uni_indicator_pane_stacon_g4

0x0003,

0xaaae,	// (0x0000aaae) uni_indicator_pane_stacon_g

0x18fa,	// (0x000018fa) control_top_pane_stacon_g1

0x1902,	// (0x00001902) control_top_pane_stacon_t1_ParamLimits

0x1902,	// (0x00001902) control_top_pane_stacon_t1

0x1939,	// (0x00001939) aid_levels_battery_lsc_ParamLimits

0x1939,	// (0x00001939) aid_levels_battery_lsc

0x1951,	// (0x00001951) battery_pane_stacon_g1_ParamLimits

0x1951,	// (0x00001951) battery_pane_stacon_g1

0x1964,	// (0x00001964) battery_pane_stacon_g2_ParamLimits

0x1964,	// (0x00001964) battery_pane_stacon_g2

0x0001,

0xaab7,	// (0x0000aab7) battery_pane_stacon_g_ParamLimits

0xaab7,	// (0x0000aab7) battery_pane_stacon_g

0x19a2,	// (0x000019a2) navi_icon_pane_stacon

0x19b6,	// (0x000019b6) navi_navi_pane_stacon

0x19a2,	// (0x000019a2) navi_text_pane_stacon

0x18fa,	// (0x000018fa) control_bottom_pane_stacon_g1

0x19ca,	// (0x000019ca) control_bottom_pane_stacon_t1_ParamLimits

0x19ca,	// (0x000019ca) control_bottom_pane_stacon_t1

0xbdcf,	// (0x0000bdcf) grid_app_pane_ParamLimits

0xbdcf,	// (0x0000bdcf) grid_app_pane

0xbe05,	// (0x0000be05) scroll_pane_cp15_ParamLimits

0xbe05,	// (0x0000be05) scroll_pane_cp15

0xbe1e,	// (0x0000be1e) cell_app_pane_ParamLimits

0xbe1e,	// (0x0000be1e) cell_app_pane

0xbe65,	// (0x0000be65) cell_app_pane_g1_ParamLimits

0xbe65,	// (0x0000be65) cell_app_pane_g1

0x1a9c,	// (0x00001a9c) cell_app_pane_g2_ParamLimits

0x1a9c,	// (0x00001a9c) cell_app_pane_g2

0x0001,

0xee96,	// (0x0000ee96) cell_app_pane_g_ParamLimits

0xee96,	// (0x0000ee96) cell_app_pane_g

0xbe85,	// (0x0000be85) cell_app_pane_t1_ParamLimits

0xbe85,	// (0x0000be85) cell_app_pane_t1

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

0xaa6a,	// (0x0000aa6a) cell_highlight_pane_g

0x1ae3,	// (0x00001ae3) bg_scroll_pane

0x1b02,	// (0x00001b02) scroll_handle_pane

0x1b53,	// (0x00001b53) scroll_bg_pane_g1

0x1b68,	// (0x00001b68) scroll_bg_pane_g2

0x1b80,	// (0x00001b80) scroll_bg_pane_g3

0x0002,

0xaac1,	// (0x0000aac1) scroll_bg_pane_g

0x1b95,	// (0x00001b95) scroll_handle_focus_pane_ParamLimits

0x1b95,	// (0x00001b95) scroll_handle_focus_pane

0x1b53,	// (0x00001b53) scroll_handle_pane_g1

0x1ba2,	// (0x00001ba2) scroll_handle_pane_g2

0x1b80,	// (0x00001b80) scroll_handle_pane_g3

0x0002,

0xaac8,	// (0x0000aac8) scroll_handle_pane_g

0x1584,	// (0x00001584) bg_popup_sub_pane_cp21_ParamLimits

0x1584,	// (0x00001584) bg_popup_sub_pane_cp21

0x1bb6,	// (0x00001bb6) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bb6,	// (0x00001bb6) popup_fep_japan_predictive_window_t1

0x1bcd,	// (0x00001bcd) popup_fep_japan_predictive_window_t2_ParamLimits

0x1bcd,	// (0x00001bcd) popup_fep_japan_predictive_window_t2

0x1c00,	// (0x00001c00) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c00,	// (0x00001c00) popup_fep_japan_predictive_window_t3

0x0002,

0xaacf,	// (0x0000aacf) popup_fep_japan_predictive_window_t_ParamLimits

0xaacf,	// (0x0000aacf) popup_fep_japan_predictive_window_t

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

0x1d32,	// (0x00001d32) scroll_pane_cp25_ParamLimits

0x1d32,	// (0x00001d32) scroll_pane_cp25

0x1d4b,	// (0x00001d4b) list_double2_graphic_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double2_graphic_pane_cp2

0x1d4b,	// (0x00001d4b) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double2_large_graphic_pane_cp2

0x1d4b,	// (0x00001d4b) list_double2_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double2_pane_cp2

0x1d4b,	// (0x00001d4b) list_double_graphic_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double_graphic_pane_cp2

0x1d4b,	// (0x00001d4b) list_double_large_graphic_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double_large_graphic_pane_cp2

0x1d4b,	// (0x00001d4b) list_double_number_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double_number_pane_cp2

0x1d4b,	// (0x00001d4b) list_double_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double_pane_cp2

0xbeb6,	// (0x0000beb6) list_single_2graphic_pane_cp2_ParamLimits

0xbeb6,	// (0x0000beb6) list_single_2graphic_pane_cp2

0xbeb6,	// (0x0000beb6) list_single_graphic_heading_pane_cp2_ParamLimits

0xbeb6,	// (0x0000beb6) list_single_graphic_heading_pane_cp2

0xbeb6,	// (0x0000beb6) list_single_graphic_pane_cp2_ParamLimits

0xbeb6,	// (0x0000beb6) list_single_graphic_pane_cp2

0xbeb6,	// (0x0000beb6) list_single_heading_pane_cp2_ParamLimits

0xbeb6,	// (0x0000beb6) list_single_heading_pane_cp2

0x1d84,	// (0x00001d84) list_single_large_graphic_pane_cp2_ParamLimits

0x1d84,	// (0x00001d84) list_single_large_graphic_pane_cp2

0xbeb6,	// (0x0000beb6) list_single_number_heading_pane_cp2_ParamLimits

0xbeb6,	// (0x0000beb6) list_single_number_heading_pane_cp2

0xbeb6,	// (0x0000beb6) list_single_number_pane_cp2_ParamLimits

0xbeb6,	// (0x0000beb6) list_single_number_pane_cp2

0xbeb6,	// (0x0000beb6) list_single_pane_cp2_ParamLimits

0xbeb6,	// (0x0000beb6) list_single_pane_cp2

0x1e5b,	// (0x00001e5b) bg_popup_sub_pane_cp22

0x1e80,	// (0x00001e80) popup_side_volume_key_window_g1

0x1eaa,	// (0x00001eaa) popup_side_volume_key_window_t1

0x1ec6,	// (0x00001ec6) volume_small_pane_cp1

0x080b,	// (0x0000080b) bg_popup_sub_pane_cp24_ParamLimits

0x080b,	// (0x0000080b) bg_popup_sub_pane_cp24

0x1ece,	// (0x00001ece) fep_china_uni_candidate_pane_ParamLimits

0x1ece,	// (0x00001ece) fep_china_uni_candidate_pane

0x1ee2,	// (0x00001ee2) fep_china_uni_entry_pane

0x1ef2,	// (0x00001ef2) popup_fep_china_uni_window_g1

0x1f0e,	// (0x00001f0e) fep_china_uni_entry_pane_g1

0x1f16,	// (0x00001f16) fep_china_uni_entry_pane_g2

0x0001,

0xab00,	// (0x0000ab00) fep_china_uni_entry_pane_g

0x1f1e,	// (0x00001f1e) fep_entry_item_pane

0x1f28,	// (0x00001f28) fep_candidate_item_pane

0x1f30,	// (0x00001f30) fep_china_uni_candidate_pane_g1

0x1f38,	// (0x00001f38) fep_china_uni_candidate_pane_g2

0x1f40,	// (0x00001f40) fep_china_uni_candidate_pane_g3

0x1f48,	// (0x00001f48) fep_china_uni_candidate_pane_g4

0x0003,

0xab05,	// (0x0000ab05) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f50,	// (0x00001f50) fep_entry_item_pane_t1_ParamLimits

0x1f50,	// (0x00001f50) fep_entry_item_pane_t1

0x1f66,	// (0x00001f66) fep_candidate_item_pane_t1_ParamLimits

0x1f66,	// (0x00001f66) fep_candidate_item_pane_t1

0x1f7b,	// (0x00001f7b) fep_candidate_item_pane_t2_ParamLimits

0x1f7b,	// (0x00001f7b) fep_candidate_item_pane_t2

0x0001,

0xab0e,	// (0x0000ab0e) fep_candidate_item_pane_t_ParamLimits

0xab0e,	// (0x0000ab0e) fep_candidate_item_pane_t

0x04e9,	// (0x000004e9) list_highlight_pane_cp31_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp31

0x1f8d,	// (0x00001f8d) level_1_signal_lsc

0x1f96,	// (0x00001f96) level_2_signal_lsc

0x1f9f,	// (0x00001f9f) level_3_signal_lsc

0x1fa8,	// (0x00001fa8) level_4_signal_lsc

0x1fb1,	// (0x00001fb1) level_5_signal_lsc

0x1fba,	// (0x00001fba) level_6_signal_lsc

0x1fc3,	// (0x00001fc3) level_7_signal_lsc

0x1fc3,	// (0x00001fc3) level_1_battery_lsc

0x1fcc,	// (0x00001fcc) level_2_battery_lsc

0x1fd5,	// (0x00001fd5) level_3_battery_lsc

0x1fde,	// (0x00001fde) level_4_battery_lsc

0x1fe7,	// (0x00001fe7) level_5_battery_lsc

0x1ff0,	// (0x00001ff0) level_6_battery_lsc

0x1f8d,	// (0x00001f8d) level_7_battery_lsc

0x1ff9,	// (0x00001ff9) scroll_handle_focus_pane_g1

0x2002,	// (0x00002002) scroll_handle_focus_pane_g2

0x200b,	// (0x0000200b) scroll_handle_focus_pane_g3

0x0002,

0xab13,	// (0x0000ab13) scroll_handle_focus_pane_g

0xbf44,	// (0x0000bf44) list_single_2graphic_pane_g1_ParamLimits

0xbf44,	// (0x0000bf44) list_single_2graphic_pane_g1

0xb898,	// (0x0000b898) list_single_2graphic_pane_g2_ParamLimits

0xb898,	// (0x0000b898) list_single_2graphic_pane_g2

0x34e9,	// (0x000034e9) list_single_2graphic_pane_g3_ParamLimits

0x34e9,	// (0x000034e9) list_single_2graphic_pane_g3

0xbf50,	// (0x0000bf50) list_single_2graphic_pane_g4_ParamLimits

0xbf50,	// (0x0000bf50) list_single_2graphic_pane_g4

0x0003,

0xeea4,	// (0x0000eea4) list_single_2graphic_pane_g_ParamLimits

0xeea4,	// (0x0000eea4) list_single_2graphic_pane_g

0xbf61,	// (0x0000bf61) list_single_2graphic_pane_t1_ParamLimits

0xbf61,	// (0x0000bf61) list_single_2graphic_pane_t1

0xbf8f,	// (0x0000bf8f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbf8f,	// (0x0000bf8f) list_double2_graphic_large_graphic_pane_g1

0xb8d5,	// (0x0000b8d5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb8d5,	// (0x0000b8d5) list_double2_graphic_large_graphic_pane_g2

0xb8e6,	// (0x0000b8e6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb8e6,	// (0x0000b8e6) list_double2_graphic_large_graphic_pane_g3

0xbfa1,	// (0x0000bfa1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbfa1,	// (0x0000bfa1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xeead,	// (0x0000eead) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xeead,	// (0x0000eead) list_double2_graphic_large_graphic_pane_g

0xbfad,	// (0x0000bfad) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbfad,	// (0x0000bfad) list_double2_graphic_large_graphic_pane_t1

0xbfc3,	// (0x0000bfc3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbfc3,	// (0x0000bfc3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xeeb6,	// (0x0000eeb6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xeeb6,	// (0x0000eeb6) list_double2_graphic_large_graphic_pane_t

0x2328,	// (0x00002328) popup_fast_swap_window_ParamLimits

0x2328,	// (0x00002328) popup_fast_swap_window

0x2344,	// (0x00002344) popup_side_volume_key_window

0x235e,	// (0x0000235e) stacon_top_pane

0x2368,	// (0x00002368) status_pane_ParamLimits

0x2368,	// (0x00002368) status_pane

0x235e,	// (0x0000235e) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x126e,	// (0x0000126e) scroll_pane_cp121

0x1265,	// (0x00001265) set_content_pane

0xbfd5,	// (0x0000bfd5) bg_active_tab_pane_g1_cp1

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp1

0xbfde,	// (0x0000bfde) bg_active_tab_pane_g3_cp1

0xbfd5,	// (0x0000bfd5) bg_passive_tab_pane_g1_cp1

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp1

0xbfde,	// (0x0000bfde) bg_passive_tab_pane_g3_cp1

0xbfe7,	// (0x0000bfe7) bg_active_tab_pane_g1_cp2

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp2

0xbff0,	// (0x0000bff0) bg_active_tab_pane_g3_cp2

0xbfe7,	// (0x0000bfe7) bg_passive_tab_pane_g1_cp2

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp2

0xbff0,	// (0x0000bff0) bg_passive_tab_pane_g3_cp2

0xbff9,	// (0x0000bff9) bg_active_tab_pane_g1_cp3

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp3

0xc002,	// (0x0000c002) bg_active_tab_pane_g3_cp3

0xbff9,	// (0x0000bff9) bg_passive_tab_pane_g1_cp3

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp3

0xc002,	// (0x0000c002) bg_passive_tab_pane_g3_cp3

0xc00b,	// (0x0000c00b) bg_active_tab_pane_g1_cp4

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp4

0xc014,	// (0x0000c014) bg_active_tab_pane_g3_cp4

0xc00b,	// (0x0000c00b) bg_passive_tab_pane_g1_cp4

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp4

0xc014,	// (0x0000c014) bg_passive_tab_pane_g3_cp4

0x2279,	// (0x00002279) bg_active_tab_pane_g1_cp5

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp5

0x2282,	// (0x00002282) bg_active_tab_pane_g3_cp5

0x2279,	// (0x00002279) bg_passive_tab_pane_g1_cp5

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp5

0x2282,	// (0x00002282) bg_passive_tab_pane_g3_cp5

0xa502,	// (0x0000a502) list_set_graphic_pane_ParamLimits

0xa502,	// (0x0000a502) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0x22a9,	// (0x000022a9) list_set_graphic_pane_g1_ParamLimits

0x22a9,	// (0x000022a9) list_set_graphic_pane_g1

0x22b5,	// (0x000022b5) list_set_graphic_pane_g2_ParamLimits

0x22b5,	// (0x000022b5) list_set_graphic_pane_g2

0x0001,

0xab31,	// (0x0000ab31) list_set_graphic_pane_g_ParamLimits

0xab31,	// (0x0000ab31) list_set_graphic_pane_g

0x0009,

0xaeae,	// (0x0000aeae) volume_small_pane_cp_g

0x22d9,	// (0x000022d9) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x22d9,	// (0x000022d9) list_double2_large_graphic_pane_g1_cp2

0x22e7,	// (0x000022e7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22e7,	// (0x000022e7) list_double2_large_graphic_pane_g2_cp2

0x22f8,	// (0x000022f8) list_double2_large_graphic_pane_g3_cp2

0x2300,	// (0x00002300) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2300,	// (0x00002300) list_double2_large_graphic_pane_t1_cp2

0x2316,	// (0x00002316) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2316,	// (0x00002316) list_double2_large_graphic_pane_t2_cp2

0x4a59,	// (0x00004a59) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a59,	// (0x00004a59) list_double_large_graphic_pane_g1_cp2

0x4a6c,	// (0x00004a6c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a6c,	// (0x00004a6c) list_double_large_graphic_pane_g2_cp2

0x2486,	// (0x00002486) list_double_large_graphic_pane_g3_cp2

0x4a7d,	// (0x00004a7d) list_double_large_graphic_pane_g4_cp

0x4a85,	// (0x00004a85) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a85,	// (0x00004a85) list_double_large_graphic_pane_t1_cp2

0x4a9c,	// (0x00004a9c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a9c,	// (0x00004a9c) list_double_large_graphic_pane_t2_cp2

0x2376,	// (0x00002376) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2376,	// (0x00002376) list_double2_graphic_pane_g1_cp2

0x2384,	// (0x00002384) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2384,	// (0x00002384) list_double2_graphic_pane_g2_cp2

0x2395,	// (0x00002395) list_double2_graphic_pane_g3_cp2

0x239f,	// (0x0000239f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x239f,	// (0x0000239f) list_double2_graphic_pane_t1_cp2

0x23b5,	// (0x000023b5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x23b5,	// (0x000023b5) list_double2_graphic_pane_t2_cp2

0x23c7,	// (0x000023c7) list_single_number_heading_pane_g1_cp2_ParamLimits

0x23c7,	// (0x000023c7) list_single_number_heading_pane_g1_cp2

0x23d3,	// (0x000023d3) list_single_number_heading_pane_g2_cp2

0x23db,	// (0x000023db) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23db,	// (0x000023db) list_single_number_heading_pane_t1_cp2

0x23f1,	// (0x000023f1) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23f1,	// (0x000023f1) list_single_number_heading_pane_t2_cp2

0x2405,	// (0x00002405) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2405,	// (0x00002405) list_single_number_heading_pane_t3_cp2

0x23c7,	// (0x000023c7) list_single_heading_pane_g1_cp2_ParamLimits

0x23c7,	// (0x000023c7) list_single_heading_pane_g1_cp2

0x23d3,	// (0x000023d3) list_single_heading_pane_g2_cp2

0x23db,	// (0x000023db) list_single_heading_pane_t1_cp2_ParamLimits

0x23db,	// (0x000023db) list_single_heading_pane_t1_cp2

0x4861,	// (0x00004861) list_single_heading_pane_t2_cp2_ParamLimits

0x4861,	// (0x00004861) list_single_heading_pane_t2_cp2

0x34dd,	// (0x000034dd) list_double_graphic_pane_g1_cp2_ParamLimits

0x34dd,	// (0x000034dd) list_double_graphic_pane_g1_cp2

0x47b5,	// (0x000047b5) list_double_graphic_pane_g2_cp2_ParamLimits

0x47b5,	// (0x000047b5) list_double_graphic_pane_g2_cp2

0x47c4,	// (0x000047c4) list_double_graphic_pane_g3_cp2

0x47cc,	// (0x000047cc) list_double_graphic_pane_t1_cp2_ParamLimits

0x47cc,	// (0x000047cc) list_double_graphic_pane_t1_cp2

0x47e2,	// (0x000047e2) list_double_graphic_pane_t2_cp2_ParamLimits

0x47e2,	// (0x000047e2) list_double_graphic_pane_t2_cp2

0x247a,	// (0x0000247a) list_double_number_pane_g1_cp2_ParamLimits

0x247a,	// (0x0000247a) list_double_number_pane_g1_cp2

0x2486,	// (0x00002486) list_double_number_pane_g2_cp2

0x4779,	// (0x00004779) list_double_number_pane_t1_cp2_ParamLimits

0x4779,	// (0x00004779) list_double_number_pane_t1_cp2

0x478d,	// (0x0000478d) list_double_number_pane_t2_cp2_ParamLimits

0x478d,	// (0x0000478d) list_double_number_pane_t2_cp2

0x47a3,	// (0x000047a3) list_double_number_pane_t3_cp2_ParamLimits

0x47a3,	// (0x000047a3) list_double_number_pane_t3_cp2

0x4651,	// (0x00004651) list_single_graphic_pane_g1_cp2_ParamLimits

0x4651,	// (0x00004651) list_single_graphic_pane_g1_cp2

0x24de,	// (0x000024de) list_single_graphic_pane_g2_cp2_ParamLimits

0x24de,	// (0x000024de) list_single_graphic_pane_g2_cp2

0x24ea,	// (0x000024ea) list_single_graphic_pane_g3_cp2

0x4627,	// (0x00004627) list_single_graphic_pane_t1_cp2_ParamLimits

0x4627,	// (0x00004627) list_single_graphic_pane_t1_cp2

0x24de,	// (0x000024de) list_single_number_pane_g1_cp2_ParamLimits

0x24de,	// (0x000024de) list_single_number_pane_g1_cp2

0x24ea,	// (0x000024ea) list_single_number_pane_g2_cp2

0x4627,	// (0x00004627) list_single_number_pane_t1_cp2_ParamLimits

0x4627,	// (0x00004627) list_single_number_pane_t1_cp2

0x463d,	// (0x0000463d) list_single_number_pane_t2_cp2_ParamLimits

0x463d,	// (0x0000463d) list_single_number_pane_t2_cp2

0x22e7,	// (0x000022e7) list_double2_pane_g1_cp2_ParamLimits

0x22e7,	// (0x000022e7) list_double2_pane_g1_cp2

0x22f8,	// (0x000022f8) list_double2_pane_g2_cp2

0x2452,	// (0x00002452) list_double2_pane_t1_cp2_ParamLimits

0x2452,	// (0x00002452) list_double2_pane_t1_cp2

0x2468,	// (0x00002468) list_double2_pane_t2_cp2_ParamLimits

0x2468,	// (0x00002468) list_double2_pane_t2_cp2

0x247a,	// (0x0000247a) list_double_pane_g1_cp2_ParamLimits

0x247a,	// (0x0000247a) list_double_pane_g1_cp2

0x2486,	// (0x00002486) list_double_pane_g2_cp2

0x248e,	// (0x0000248e) list_double_pane_t1_cp2_ParamLimits

0x248e,	// (0x0000248e) list_double_pane_t1_cp2

0x24a4,	// (0x000024a4) list_double_pane_t2_cp2_ParamLimits

0x24a4,	// (0x000024a4) list_double_pane_t2_cp2

0x24ce,	// (0x000024ce) list_single_pane_cp2_g3

0x24de,	// (0x000024de) list_single_pane_g1_cp2_ParamLimits

0x24de,	// (0x000024de) list_single_pane_g1_cp2

0x24ea,	// (0x000024ea) list_single_pane_g2_cp2

0x24f2,	// (0x000024f2) list_single_pane_t1_cp2_ParamLimits

0x24f2,	// (0x000024f2) list_single_pane_t1_cp2

0x250a,	// (0x0000250a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x250a,	// (0x0000250a) list_single_large_graphic_pane_g1_cp2

0x2518,	// (0x00002518) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2518,	// (0x00002518) list_single_large_graphic_pane_g2_cp2

0x2524,	// (0x00002524) list_single_large_graphic_pane_g3_cp2

0x252c,	// (0x0000252c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x252c,	// (0x0000252c) list_single_large_graphic_pane_g4_cp1

0x2546,	// (0x00002546) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2546,	// (0x00002546) list_single_large_graphic_pane_t1_cp2

0x4498,	// (0x00004498) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4498,	// (0x00004498) list_single_graphic_heading_pane_g1_cp2

0x4465,	// (0x00004465) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4465,	// (0x00004465) list_single_graphic_heading_pane_g4_cp2

0x24ea,	// (0x000024ea) list_single_graphic_heading_pane_g5_cp2

0x44a4,	// (0x000044a4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x44a4,	// (0x000044a4) list_single_graphic_heading_pane_t1_cp2

0x44ba,	// (0x000044ba) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x44ba,	// (0x000044ba) list_single_graphic_heading_pane_t2_cp2

0x4459,	// (0x00004459) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4459,	// (0x00004459) list_single_2graphic_pane_g1_cp2

0x4465,	// (0x00004465) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4465,	// (0x00004465) list_single_2graphic_pane_g2_cp2

0x24ea,	// (0x000024ea) list_single_2graphic_pane_g3_cp2

0x4476,	// (0x00004476) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4476,	// (0x00004476) list_single_2graphic_pane_g4_cp2

0x4482,	// (0x00004482) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4482,	// (0x00004482) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4041,	// (0x00004041) list_highlight_pane_g1_cp1

0x4049,	// (0x00004049) list_highlight_pane_g2_cp1

0x4051,	// (0x00004051) list_highlight_pane_g3_cp1

0x4059,	// (0x00004059) list_highlight_pane_g4_cp1

0x4061,	// (0x00004061) list_highlight_pane_g5_cp1

0x4069,	// (0x00004069) list_highlight_pane_g6_cp1

0x4071,	// (0x00004071) list_highlight_pane_g7_cp1

0x4079,	// (0x00004079) list_highlight_pane_g8_cp1

0x4081,	// (0x00004081) list_highlight_pane_g9_cp1

0xce5a,	// (0x0000ce5a) form_field_slider_pane_t3

0xce6a,	// (0x0000ce6a) form_field_slider_pane_t4

0x3f75,	// (0x00003f75) slider_form_pane_ParamLimits

0x3f75,	// (0x00003f75) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x48ad,	// (0x000048ad) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xacbf,	// (0x0000acbf) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x255c,	// (0x0000255c) text_digital

0x256b,	// (0x0000256b) text_primary

0x257a,	// (0x0000257a) text_primary_small

0x2589,	// (0x00002589) text_secondary

0x2598,	// (0x00002598) text_title

0x51c1,	// (0x000051c1) bg_passive_tab_pane_g1_cp3_srt

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp3_srt

0x51ca,	// (0x000051ca) bg_passive_tab_pane_g3_cp3_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_srt

0x51d3,	// (0x000051d3) tabs_4_active_pane_srt_g1

0xd359,	// (0x0000d359) tabs_4_active_pane_srt_t1_ParamLimits

0xd359,	// (0x0000d359) tabs_4_active_pane_srt_t1

0x51c1,	// (0x000051c1) bg_active_tab_pane_g1_cp3_copy1

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp3_copy1

0x51ca,	// (0x000051ca) bg_active_tab_pane_g3_cp3_copy1

0x04e9,	// (0x000004e9) tabs_2_long_active_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) tabs_2_long_active_pane_srt

0x04e9,	// (0x000004e9) tabs_2_long_passive_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) tabs_2_long_passive_pane_srt

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp4_srt

0x4d6a,	// (0x00004d6a) bg_passive_tab_pane_g1_cp4_srt

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp4_srt

0x4d73,	// (0x00004d73) bg_passive_tab_pane_g3_cp4_srt

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_srt_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_srt

0xd12e,	// (0x0000d12e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd12e,	// (0x0000d12e) tabs_2_long_active_pane_srt_t1

0x4d6a,	// (0x00004d6a) bg_active_tab_pane_g1_cp4_srt

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp4_srt

0x4d73,	// (0x00004d73) bg_active_tab_pane_g3_cp4_srt

0x080b,	// (0x0000080b) tabs_3_long_active_pane_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_active_pane_srt

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_cp_srt

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_srt

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp5_srt

0x2279,	// (0x00002279) bg_passive_tab_pane_g1_cp5_srt

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp5_srt

0x2282,	// (0x00002282) bg_passive_tab_pane_g3_cp5_srt

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_srt_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_srt

0xd118,	// (0x0000d118) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd118,	// (0x0000d118) tabs_3_long_active_pane_srt_t1

0x2279,	// (0x00002279) bg_active_tab_pane_g1_cp5_srt

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp5_srt

0x2282,	// (0x00002282) bg_active_tab_pane_g3_cp5_srt

0x4d4a,	// (0x00004d4a) navi_text_pane_srt_t1

0x4d42,	// (0x00004d42) navi_icon_pane_srt_g1

0x2804,	// (0x00002804) midp_editing_number_pane_srt

0x25a7,	// (0x000025a7) midp_ticker_pane_srt

0x280c,	// (0x0000280c) midp_ticker_pane_srt_g1

0x2814,	// (0x00002814) midp_ticker_pane_srt_g2

0x0001,

0xab50,	// (0x0000ab50) midp_ticker_pane_srt_g

0x281c,	// (0x0000281c) midp_ticker_pane_srt_t1

0x4d33,	// (0x00004d33) midp_editing_number_pane_t1_copy1

0x2b0e,	// (0x00002b0e) listscroll_midp_pane

0x2b0e,	// (0x00002b0e) midp_form_pane

0x2613,	// (0x00002613) midp_info_popup_window_ParamLimits

0x2613,	// (0x00002613) midp_info_popup_window

0x1584,	// (0x00001584) bg_popup_sub_pane_cp50_ParamLimits

0x1584,	// (0x00001584) bg_popup_sub_pane_cp50

0x3c76,	// (0x00003c76) listscroll_midp_info_pane_ParamLimits

0x3c76,	// (0x00003c76) listscroll_midp_info_pane

0x3c5e,	// (0x00003c5e) listscroll_form_midp_pane_ParamLimits

0x3c5e,	// (0x00003c5e) listscroll_form_midp_pane

0x3c6a,	// (0x00003c6a) scroll_bar_cp050

0xce4e,	// (0x0000ce4e) list_midp_pane

0x5ebc,	// (0x00005ebc) signal_pane_g2_cp

0x3b78,	// (0x00003b78) listscroll_midp_info_pane_t1_ParamLimits

0x3b78,	// (0x00003b78) listscroll_midp_info_pane_t1

0x3b90,	// (0x00003b90) listscroll_midp_info_pane_t2_ParamLimits

0x3b90,	// (0x00003b90) listscroll_midp_info_pane_t2

0x3bce,	// (0x00003bce) listscroll_midp_info_pane_t3_ParamLimits

0x3bce,	// (0x00003bce) listscroll_midp_info_pane_t3

0x3c08,	// (0x00003c08) listscroll_midp_info_pane_t4_ParamLimits

0x3c08,	// (0x00003c08) listscroll_midp_info_pane_t4

0x0003,

0xabfa,	// (0x0000abfa) listscroll_midp_info_pane_t_ParamLimits

0xabfa,	// (0x0000abfa) listscroll_midp_info_pane_t

0x1646,	// (0x00001646) scroll_pane_cp21

0x3b1c,	// (0x00003b1c) form_midp_field_choice_group_pane

0x3b25,	// (0x00003b25) form_midp_field_text_pane

0x3b5e,	// (0x00003b5e) form_midp_field_time_pane

0x3b66,	// (0x00003b66) form_midp_gauge_slider_pane

0x3b6f,	// (0x00003b6f) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xce32,	// (0x0000ce32) list_single_midp_pane_ParamLimits

0xce32,	// (0x0000ce32) list_single_midp_pane

0xce0e,	// (0x0000ce0e) form_midp_field_text_pane_t1

0x37d3,	// (0x000037d3) input_focus_pane_cp050

0x3acf,	// (0x00003acf) list_midp_form_text_pane

0x3a5f,	// (0x00003a5f) form_midp_field_choice_group_pane_t1

0x3a6d,	// (0x00003a6d) input_focus_pane_cp051

0x3a81,	// (0x00003a81) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a43,	// (0x00003a43) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a51,	// (0x00003a51) form_midp_field_time_pane_t2

0x0001,

0x26c3,	// (0x000026c3) aid_navinavi_width_2_pane

0xabf5,	// (0x0000abf5) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3a03,	// (0x00003a03) form_midp_gauge_slider_pane_t1

0x3a11,	// (0x00003a11) form_midp_gauge_slider_pane_t2

0xcdee,	// (0x0000cdee) form_midp_gauge_slider_pane_t3

0xcdfe,	// (0x0000cdfe) form_midp_gauge_slider_pane_t4

0x0003,

0xeef7,	// (0x0000eef7) form_midp_gauge_slider_pane_t

0x3a3b,	// (0x00003a3b) form_midp_slider_pane

0x04e9,	// (0x000004e9) bg_input_focus_pane_cp041_ParamLimits

0x04e9,	// (0x000004e9) bg_input_focus_pane_cp041

0x39d0,	// (0x000039d0) form_midp_gauge_wait_pane_t1_ParamLimits

0x39d0,	// (0x000039d0) form_midp_gauge_wait_pane_t1

0x39e2,	// (0x000039e2) form_midp_gauge_wait_pane_t2_ParamLimits

0x39e2,	// (0x000039e2) form_midp_gauge_wait_pane_t2

0x0001,

0xabe7,	// (0x0000abe7) form_midp_gauge_wait_pane_t_ParamLimits

0xabe7,	// (0x0000abe7) form_midp_gauge_wait_pane_t

0x39f4,	// (0x000039f4) form_midp_wait_pane_ParamLimits

0x39f4,	// (0x000039f4) form_midp_wait_pane

0x399a,	// (0x0000399a) form_midp_image_pane_g1

0x39a3,	// (0x000039a3) form_midp_image_pane_t1

0x39b2,	// (0x000039b2) form_midp_image_pane_t2

0x39c1,	// (0x000039c1) form_midp_image_pane_t3

0x0002,

0xabe0,	// (0x0000abe0) form_midp_image_pane_t

0x3982,	// (0x00003982) list_single_midp_pane_g1

0x398b,	// (0x0000398b) list_single_midp_pane_t1

0xcdd7,	// (0x0000cdd7) list_midp_form_item_pane_ParamLimits

0xcdd7,	// (0x0000cdd7) list_midp_form_item_pane

0x266b,	// (0x0000266b) list_midp_form_item_pane_t1

0x267a,	// (0x0000267a) midp_ticker_pane_g1

0x2686,	// (0x00002686) midp_ticker_pane_g2

0x0001,

0xab36,	// (0x0000ab36) midp_ticker_pane_g

0x2692,	// (0x00002692) midp_ticker_pane_t1

0x5021,	// (0x00005021) midp_editing_number_pane_t1

0x4fff,	// (0x00004fff) midp_editing_number_pane

0x500e,	// (0x0000500e) midp_ticker_pane

0x4cfb,	// (0x00004cfb) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4d03,	// (0x00004d03) listscroll_ai_message_pane

0x4c85,	// (0x00004c85) ai_message_heading_pane_g1_ParamLimits

0x4c85,	// (0x00004c85) ai_message_heading_pane_g1

0x4c91,	// (0x00004c91) ai_message_heading_pane_g2_ParamLimits

0x4c91,	// (0x00004c91) ai_message_heading_pane_g2

0x4c9d,	// (0x00004c9d) ai_message_heading_pane_g3_ParamLimits

0x4c9d,	// (0x00004c9d) ai_message_heading_pane_g3

0x4ca9,	// (0x00004ca9) ai_message_heading_pane_g4_ParamLimits

0x4ca9,	// (0x00004ca9) ai_message_heading_pane_g4

0x0003,

0xad21,	// (0x0000ad21) ai_message_heading_pane_g_ParamLimits

0xad21,	// (0x0000ad21) ai_message_heading_pane_g

0x4cb5,	// (0x00004cb5) ai_message_heading_pane_t1_ParamLimits

0x4cb5,	// (0x00004cb5) ai_message_heading_pane_t1

0x4ccf,	// (0x00004ccf) ai_message_heading_pane_t2_ParamLimits

0x4ccf,	// (0x00004ccf) ai_message_heading_pane_t2

0x0001,

0xad2a,	// (0x0000ad2a) ai_message_heading_pane_t_ParamLimits

0xad2a,	// (0x0000ad2a) ai_message_heading_pane_t

0x4ce1,	// (0x00004ce1) bg_popup_heading_pane_cp1_ParamLimits

0x4ce1,	// (0x00004ce1) bg_popup_heading_pane_cp1

0x4c73,	// (0x00004c73) list_ai_message_pane_ParamLimits

0x4c73,	// (0x00004c73) list_ai_message_pane

0x1646,	// (0x00001646) scroll_pane_cp10

0x4bbf,	// (0x00004bbf) list_ai_message_pane_g1

0x4bc7,	// (0x00004bc7) list_ai_message_pane_g2

0x0001,

0xacfe,	// (0x0000acfe) list_ai_message_pane_g

0x4bcf,	// (0x00004bcf) list_ai_message_pane_t1_ParamLimits

0x4bcf,	// (0x00004bcf) list_ai_message_pane_t1

0x4be4,	// (0x00004be4) list_ai_message_pane_t2_ParamLimits

0x4be4,	// (0x00004be4) list_ai_message_pane_t2

0x4bf9,	// (0x00004bf9) list_ai_message_pane_t3_ParamLimits

0x4bf9,	// (0x00004bf9) list_ai_message_pane_t3

0x4c0e,	// (0x00004c0e) list_ai_message_pane_t4_ParamLimits

0x4c0e,	// (0x00004c0e) list_ai_message_pane_t4

0x0003,

0xad03,	// (0x0000ad03) list_ai_message_pane_t_ParamLimits

0xad03,	// (0x0000ad03) list_ai_message_pane_t

0xd0e1,	// (0x0000d0e1) cell_ai_soft_ind_pane_ParamLimits

0xd0e1,	// (0x0000d0e1) cell_ai_soft_ind_pane

0x26a4,	// (0x000026a4) cell_ai_soft_ind_pane_g1_ParamLimits

0x26a4,	// (0x000026a4) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x26b1,	// (0x000026b1) text_secondary_cp56_ParamLimits

0x26b1,	// (0x000026b1) text_secondary_cp56

0x4b7e,	// (0x00004b7e) example_general_pane_ParamLimits

0x4b7e,	// (0x00004b7e) example_general_pane

0x4b8a,	// (0x00004b8a) example_parent_pane_g1_ParamLimits

0x4b8a,	// (0x00004b8a) example_parent_pane_g1

0x4b96,	// (0x00004b96) example_parent_pane_t1_ParamLimits

0x4b96,	// (0x00004b96) example_parent_pane_t1

0xc62e,	// (0x0000c62e) popup_preview_text_window_ParamLimits

0xc62e,	// (0x0000c62e) popup_preview_text_window

0x24d6,	// (0x000024d6) list_single_pane_cp2_g4

0x08b5,	// (0x000008b5) bg_popup_preview_window_pane_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_preview_window_pane

0x48b5,	// (0x000048b5) popup_preview_text_window_t1_ParamLimits

0x48b5,	// (0x000048b5) popup_preview_text_window_t1

0x48d3,	// (0x000048d3) popup_preview_text_window_t2_ParamLimits

0x48d3,	// (0x000048d3) popup_preview_text_window_t2

0x491c,	// (0x0000491c) popup_preview_text_window_t3_ParamLimits

0x491c,	// (0x0000491c) popup_preview_text_window_t3

0x4961,	// (0x00004961) popup_preview_text_window_t4_ParamLimits

0x4961,	// (0x00004961) popup_preview_text_window_t4

0x0004,

0xacd2,	// (0x0000acd2) popup_preview_text_window_t_ParamLimits

0xacd2,	// (0x0000acd2) popup_preview_text_window_t

0x49df,	// (0x000049df) scroll_pane_cp11

0x3643,	// (0x00003643) bg_popup_preview_window_pane_g1

0x4875,	// (0x00004875) bg_popup_preview_window_pane_g2

0x487d,	// (0x0000487d) bg_popup_preview_window_pane_g3

0x4885,	// (0x00004885) bg_popup_preview_window_pane_g4

0x488d,	// (0x0000488d) bg_popup_preview_window_pane_g5

0x4895,	// (0x00004895) bg_popup_preview_window_pane_g6

0x489d,	// (0x0000489d) bg_popup_preview_window_pane_g7

0x48a5,	// (0x000048a5) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc5aa,	// (0x0000c5aa) popup_midp_note_alarm_window_ParamLimits

0xc5aa,	// (0x0000c5aa) popup_midp_note_alarm_window

0x131f,	// (0x0000131f) data_form_pane_ParamLimits

0xbc12,	// (0x0000bc12) form_field_data_pane_g1

0xbc1c,	// (0x0000bc1c) form_field_data_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_ParamLimits

0x135d,	// (0x0000135d) data_form_wide_pane_ParamLimits

0x1369,	// (0x00001369) form_field_data_wide_pane_g1

0x1395,	// (0x00001395) form_field_data_wide_pane_t1_ParamLimits

0x0b54,	// (0x00000b54) input_focus_pane_cp6_ParamLimits

0xbd82,	// (0x0000bd82) input_popup_find_pane_g1_ParamLimits

0xbd82,	// (0x0000bd82) input_popup_find_pane_g1

0x1975,	// (0x00001975) aid_navi_side_left_pane

0x198a,	// (0x0000198a) aid_navi_side_right_pane

0x413c,	// (0x0000413c) bg_popup_window_pane_cp30_ParamLimits

0x413c,	// (0x0000413c) bg_popup_window_pane_cp30

0x41b6,	// (0x000041b6) popup_midp_note_alarm_window_g1_ParamLimits

0x41b6,	// (0x000041b6) popup_midp_note_alarm_window_g1

0x41e6,	// (0x000041e6) popup_midp_note_alarm_window_t1_ParamLimits

0x41e6,	// (0x000041e6) popup_midp_note_alarm_window_t1

0x4287,	// (0x00004287) popup_midp_note_alarm_window_t2_ParamLimits

0x4287,	// (0x00004287) popup_midp_note_alarm_window_t2

0x4335,	// (0x00004335) popup_midp_note_alarm_window_t3_ParamLimits

0x4335,	// (0x00004335) popup_midp_note_alarm_window_t3

0x435d,	// (0x0000435d) popup_midp_note_alarm_window_t4_ParamLimits

0x435d,	// (0x0000435d) popup_midp_note_alarm_window_t4

0x437d,	// (0x0000437d) popup_midp_note_alarm_window_t5_ParamLimits

0x437d,	// (0x0000437d) popup_midp_note_alarm_window_t5

0x000a,

0xac6f,	// (0x0000ac6f) popup_midp_note_alarm_window_t_ParamLimits

0xac6f,	// (0x0000ac6f) popup_midp_note_alarm_window_t

0x4429,	// (0x00004429) wait_bar_pane_cp1_ParamLimits

0x4429,	// (0x00004429) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3e1a,	// (0x00003e1a) wait_border_pane_g1_copy1

0x13af,	// (0x000013af) form_field_popup_pane_g1

0xbc36,	// (0x0000bc36) form_field_popup_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp7_ParamLimits

0x13d1,	// (0x000013d1) list_form_pane_ParamLimits

0x13dd,	// (0x000013dd) form_field_popup_wide_pane_g1

0x13e5,	// (0x000013e5) form_field_popup_wide_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp8_ParamLimits

0x13fa,	// (0x000013fa) list_form_wide_pane_ParamLimits

0x524b,	// (0x0000524b) aid_size_cell_graphic_pane

0xbcb5,	// (0x0000bcb5) data_form_pane_t1_ParamLimits

0xd297,	// (0x0000d297) data_form_wide_pane_t1_ParamLimits

0xc9ea,	// (0x0000c9ea) bg_status_flat_pane

0xb4cf,	// (0x0000b4cf) title_pane_t1_ParamLimits

0x04b1,	// (0x000004b1) title_pane_t2_ParamLimits

0x04d7,	// (0x000004d7) title_pane_t3_ParamLimits

0xedcd,	// (0x0000edcd) title_pane_t_ParamLimits

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

0x4041,	// (0x00004041) bg_status_flat_pane_g1

0x4049,	// (0x00004049) bg_status_flat_pane_g2

0x4051,	// (0x00004051) bg_status_flat_pane_g3

0x4059,	// (0x00004059) bg_status_flat_pane_g4

0x4061,	// (0x00004061) bg_status_flat_pane_g5

0x4069,	// (0x00004069) bg_status_flat_pane_g6

0x4071,	// (0x00004071) bg_status_flat_pane_g7

0xb563,	// (0x0000b563) tabs_3_active_pane_t1_ParamLimits

0xb563,	// (0x0000b563) tabs_3_passive_pane_t1_ParamLimits

0xb57d,	// (0x0000b57d) tabs_4_active_pane_t1_ParamLimits

0xb57d,	// (0x0000b57d) tabs_4_1_passive_pane_t1_ParamLimits

0xbd98,	// (0x0000bd98) tabs_2_active_pane_t1_ParamLimits

0xbd98,	// (0x0000bd98) tabs_2_passive_pane_t1_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_ParamLimits

0xbdaa,	// (0x0000bdaa) tabs_2_long_active_pane_t1_ParamLimits

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp4_ParamLimits

0x3700,	// (0x00003700) list_single_midp_graphic_pane_t1_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_ParamLimits

0xbdbd,	// (0x0000bdbd) tabs_3_long_active_pane_t1_ParamLimits

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp5_ParamLimits

0x3700,	// (0x00003700) list_single_midp_graphic_pane_t1

0xc9ea,	// (0x0000c9ea) bg_status_flat_pane_ParamLimits

0x3237,	// (0x00003237) indicator_pane_cp2_ParamLimits

0x3237,	// (0x00003237) indicator_pane_cp2

0xcb62,	// (0x0000cb62) navi_pane_srt_ParamLimits

0xcb62,	// (0x0000cb62) navi_pane_srt

0x3380,	// (0x00003380) popup_clock_digital_analogue_window_cp1

0x066d,	// (0x0000066d) indicator_pane_t1

0x25a7,	// (0x000025a7) copy_highlight_pane

0x25a7,	// (0x000025a7) cursor_graphics_pane

0x25a7,	// (0x000025a7) graphic_within_text_pane

0x25a7,	// (0x000025a7) link_highlight_pane

0x49a2,	// (0x000049a2) popup_preview_text_window_t5_ParamLimits

0x49a2,	// (0x000049a2) popup_preview_text_window_t5

0x26cb,	// (0x000026cb) cursor_digital_pane

0x26cb,	// (0x000026cb) cursor_primary_pane

0x26dc,	// (0x000026dc) cursor_primary_small_pane

0x26e4,	// (0x000026e4) cursor_secondary_pane

0x26ec,	// (0x000026ec) cursor_title_pane

0x26cb,	// (0x000026cb) link_highlight_digital_pane

0x26d3,	// (0x000026d3) link_highlight_primary_pane

0x26dc,	// (0x000026dc) link_highlight_primary_small_pane

0x26e4,	// (0x000026e4) link_highlight_secondary_pane

0x26ec,	// (0x000026ec) link_highlight_title_pane

0x26cb,	// (0x000026cb) copy_highlight_digital_pane

0x26cb,	// (0x000026cb) copy_highlight_primary_pane

0x26dc,	// (0x000026dc) copy_highlight_primary_small_pane

0x26e4,	// (0x000026e4) copy_highlight_secondary_pane

0x26ec,	// (0x000026ec) copy_highlight_title_pane

0x26e4,	// (0x000026e4) graphic_text_digital_pane

0x40df,	// (0x000040df) graphic_text_primary_pane

0x40e8,	// (0x000040e8) graphic_text_primary_small_pane

0x26dc,	// (0x000026dc) graphic_text_secondary_pane

0x26cb,	// (0x000026cb) graphic_text_title_pane

0xc0b8,	// (0x0000c0b8) cursor_primary_pane_g1

0x40d1,	// (0x000040d1) cursor_text_primary_t1

0xce8e,	// (0x0000ce8e) cursor_primary_small_pane_g1

0x40c3,	// (0x000040c3) cursor_text_primary_small_t1

0xce84,	// (0x0000ce84) cursor_primary_small_pane_g1_copy1

0x40ab,	// (0x000040ab) cursor_text_primary_small_t1_copy1

0x4089,	// (0x00004089) cursor_text_title_t1

0xce7a,	// (0x0000ce7a) cursor_title_pane_g1

0xc0b8,	// (0x0000c0b8) cursor_digital_pane_g1

0x26fe,	// (0x000026fe) cursor_text_digital_t1

0x402a,	// (0x0000402a) link_highlight_primary_pane_g1

0x4032,	// (0x00004032) link_highlight_primary_pane_t1

0x270c,	// (0x0000270c) link_highlight_primary_small_pane_g1

0x2714,	// (0x00002714) link_highlight_primary_small_pane_t1

0x270c,	// (0x0000270c) link_highlight_secondary_pane_g1

0x2723,	// (0x00002723) link_highlight_secondary_pane_t1

0x3f9e,	// (0x00003f9e) link_highlight_title_pane_g1

0x3fa6,	// (0x00003fa6) link_highlight_title_pane_t1

0x3f87,	// (0x00003f87) link_highlight_digital_pane_g1

0x3f8f,	// (0x00003f8f) link_highlight_digital_pane_t1

0x3e5f,	// (0x00003e5f) copy_highlight_primary_pane_g1

0x3e67,	// (0x00003e67) copy_highlight_primary_pane_t1

0x3e39,	// (0x00003e39) copy_highlight_primary_small_pane_g1

0x3e50,	// (0x00003e50) copy_highlight_primary_small_pane_t1

0x2732,	// (0x00002732) copy_highlight_secondary_pane_g1

0x273a,	// (0x0000273a) copy_highlight_secondary_pane_t1

0x3e39,	// (0x00003e39) copy_highlight_title_pane_g1

0x3e41,	// (0x00003e41) copy_highlight_title_pane_t1

0x3e5f,	// (0x00003e5f) copy_highlight_digital_pane_g1

0x54d1,	// (0x000054d1) copy_highlight_digital_pane_t1

0x5425,	// (0x00005425) graphic_text_primary_pane_g1

0x54b5,	// (0x000054b5) graphic_text_primary_pane_t1

0x54c3,	// (0x000054c3) graphic_text_primary_pane_t2

0x0001,

0xad9e,	// (0x0000ad9e) graphic_text_primary_pane_t

0x5491,	// (0x00005491) graphic_text_primary_small_pane_g1

0x5499,	// (0x00005499) graphic_text_primary_small_pane_t1

0x54a7,	// (0x000054a7) graphic_text_primary_small_pane_t2

0x0001,

0xad99,	// (0x0000ad99) graphic_text_primary_small_pane_t

0x546d,	// (0x0000546d) graphic_text_secondary_pane_g1

0x5475,	// (0x00005475) graphic_text_secondary_pane_t1

0x5483,	// (0x00005483) graphic_text_secondary_pane_t2

0x0001,

0xad94,	// (0x0000ad94) graphic_text_secondary_pane_t

0x5449,	// (0x00005449) graphic_text_title_pane_g1

0x5451,	// (0x00005451) graphic_text_title_pane_t1

0x545f,	// (0x0000545f) graphic_text_title_pane_t2

0x0001,

0xad8f,	// (0x0000ad8f) graphic_text_title_pane_t

0x5425,	// (0x00005425) graphic_text_digital_pane_g1

0x542d,	// (0x0000542d) graphic_text_digital_pane_t1

0x543b,	// (0x0000543b) graphic_text_digital_pane_t2

0x0001,

0xad8a,	// (0x0000ad8a) graphic_text_digital_pane_t

0x04e9,	// (0x000004e9) navi_icon_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04e9,	// (0x000004e9) navi_text_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) navi_text_pane_srt

0x53f0,	// (0x000053f0) navi_navi_icon_text_pane_srt

0x53f8,	// (0x000053f8) navi_navi_pane_srt_g1_ParamLimits

0x53f8,	// (0x000053f8) navi_navi_pane_srt_g1

0x540a,	// (0x0000540a) navi_navi_pane_srt_g2_ParamLimits

0x540a,	// (0x0000540a) navi_navi_pane_srt_g2

0x0001,

0xad85,	// (0x0000ad85) navi_navi_pane_srt_g_ParamLimits

0xad85,	// (0x0000ad85) navi_navi_pane_srt_g

0x541c,	// (0x0000541c) navi_navi_tabs_pane_srt

0x53f0,	// (0x000053f0) navi_navi_text_pane_srt

0x53f0,	// (0x000053f0) navi_navi_volume_pane_srt

0x53e1,	// (0x000053e1) navi_navi_text_pane_srt_t1

0x53bc,	// (0x000053bc) navi_navi_volume_pane_srt_g1

0x53c4,	// (0x000053c4) volume_small_pane_srt_ParamLimits

0x53c4,	// (0x000053c4) volume_small_pane_srt

0x2749,	// (0x00002749) volume_small_pane_srt_g1_ParamLimits

0x2749,	// (0x00002749) volume_small_pane_srt_g1

0x2759,	// (0x00002759) volume_small_pane_srt_g2_ParamLimits

0x2759,	// (0x00002759) volume_small_pane_srt_g2

0x276a,	// (0x0000276a) volume_small_pane_srt_g3_ParamLimits

0x276a,	// (0x0000276a) volume_small_pane_srt_g3

0x277b,	// (0x0000277b) volume_small_pane_srt_g4_ParamLimits

0x277b,	// (0x0000277b) volume_small_pane_srt_g4

0x278c,	// (0x0000278c) volume_small_pane_srt_g5_ParamLimits

0x278c,	// (0x0000278c) volume_small_pane_srt_g5

0x279d,	// (0x0000279d) volume_small_pane_srt_g6_ParamLimits

0x279d,	// (0x0000279d) volume_small_pane_srt_g6

0x27ae,	// (0x000027ae) volume_small_pane_srt_g7_ParamLimits

0x27ae,	// (0x000027ae) volume_small_pane_srt_g7

0x27bf,	// (0x000027bf) volume_small_pane_srt_g8_ParamLimits

0x27bf,	// (0x000027bf) volume_small_pane_srt_g8

0x27d0,	// (0x000027d0) volume_small_pane_srt_g9_ParamLimits

0x27d0,	// (0x000027d0) volume_small_pane_srt_g9

0x27e1,	// (0x000027e1) volume_small_pane_srt_g10_ParamLimits

0x27e1,	// (0x000027e1) volume_small_pane_srt_g10

0x0009,

0xab3b,	// (0x0000ab3b) volume_small_pane_srt_g_ParamLimits

0xab3b,	// (0x0000ab3b) volume_small_pane_srt_g

0x095e,	// (0x0000095e) query_popup_data_pane_cp2

0x53aa,	// (0x000053aa) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x53aa,	// (0x000053aa) navi_navi_icon_text_pane_srt_t1

0x40df,	// (0x000040df) navi_tabs_2_long_pane_srt

0x40df,	// (0x000040df) navi_tabs_2_pane_srt

0x40df,	// (0x000040df) navi_tabs_3_long_pane_srt

0x40df,	// (0x000040df) navi_tabs_3_pane_srt

0x40df,	// (0x000040df) navi_tabs_4_pane_srt

0x5382,	// (0x00005382) tabs_2_active_pane_srt_ParamLimits

0x5382,	// (0x00005382) tabs_2_active_pane_srt

0x5392,	// (0x00005392) tabs_2_passive_pane_srt_ParamLimits

0x5392,	// (0x00005392) tabs_2_passive_pane_srt

0x37d3,	// (0x000037d3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x37d3,	// (0x000037d3) bg_passive_tab_pane_cp1_srt

0x5356,	// (0x00005356) bg_passive_tab_pane_g1_cp1_srt

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp1_srt

0x535f,	// (0x0000535f) bg_passive_tab_pane_g3_cp1_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_srt

0x5368,	// (0x00005368) tabs_2_active_pane_srt_g1

0xd3d6,	// (0x0000d3d6) tabs_2_active_pane_srt_t1_ParamLimits

0xd3d6,	// (0x0000d3d6) tabs_2_active_pane_srt_t1

0x5356,	// (0x00005356) bg_active_tab_pane_g1_cp1_srt

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp1_srt

0x535f,	// (0x0000535f) bg_active_tab_pane_g3_cp1_srt

0x5323,	// (0x00005323) tabs_3_active_pane_srt_ParamLimits

0x5323,	// (0x00005323) tabs_3_active_pane_srt

0x5334,	// (0x00005334) tabs_3_passive_pane_cp_srt_ParamLimits

0x5334,	// (0x00005334) tabs_3_passive_pane_cp_srt

0x5345,	// (0x00005345) tabs_3_passive_pane_srt_ParamLimits

0x5345,	// (0x00005345) tabs_3_passive_pane_srt

0x37d3,	// (0x000037d3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x37d3,	// (0x000037d3) bg_passive_tab_pane_cp2_srt

0x27f2,	// (0x000027f2) bg_passive_tab_pane_g1_cp2_srt

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp2_srt

0x27fb,	// (0x000027fb) bg_passive_tab_pane_g3_cp2_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_srt

0x5309,	// (0x00005309) tabs_3_active_pane_srt_g1

0xd3c0,	// (0x0000d3c0) tabs_3_active_pane_srt_t1_ParamLimits

0xd3c0,	// (0x0000d3c0) tabs_3_active_pane_srt_t1

0x27f2,	// (0x000027f2) bg_active_tab_pane_g1_cp2_srt

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp2_srt

0x27fb,	// (0x000027fb) bg_active_tab_pane_g3_cp2_srt

0x52c1,	// (0x000052c1) tabs_4_active_pane_srt_ParamLimits

0x52c1,	// (0x000052c1) tabs_4_active_pane_srt

0x52d3,	// (0x000052d3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x52d3,	// (0x000052d3) tabs_4_passive_pane_cp2_srt

0x2a94,	// (0x00002a94) aid_size_cell_toolbar

0x4e4d,	// (0x00004e4d) main_idle_act_pane_ParamLimits

0x2cad,	// (0x00002cad) popup_large_graphic_colour_window_ParamLimits

0xc8ae,	// (0x0000c8ae) popup_toolbar_window_ParamLimits

0xc8ae,	// (0x0000c8ae) popup_toolbar_window

0x504f,	// (0x0000504f) list_single_graphic_2heading_pane_ParamLimits

0x504f,	// (0x0000504f) list_single_graphic_2heading_pane

0x1a01,	// (0x00001a01) aid_size_cell_apps_grid_lsc_pane

0x1a13,	// (0x00001a13) aid_size_cell_apps_grid_prt_pane

0x2b0e,	// (0x00002b0e) bg_wml_button_pane_cp1_ParamLimits

0x2b0e,	// (0x00002b0e) bg_wml_button_pane_cp1

0xce0e,	// (0x0000ce0e) form_midp_field_text_pane_t1_ParamLimits

0x37d3,	// (0x000037d3) input_focus_pane_cp050_ParamLimits

0x3acf,	// (0x00003acf) list_midp_form_text_pane_ParamLimits

0x3a6d,	// (0x00003a6d) input_focus_pane_cp051_ParamLimits

0x3a81,	// (0x00003a81) list_midp_choice_pane_ParamLimits

0xcd9f,	// (0x0000cd9f) list_single_2graphic_pane_cp3_ParamLimits

0xcd9f,	// (0x0000cd9f) list_single_2graphic_pane_cp3

0xcdb5,	// (0x0000cdb5) list_single_midp_graphic_pane_ParamLimits

0xcdb5,	// (0x0000cdb5) list_single_midp_graphic_pane

0x34dd,	// (0x000034dd) list_single_graphic_2heading_pane_g1_ParamLimits

0x34dd,	// (0x000034dd) list_single_graphic_2heading_pane_g1

0x247a,	// (0x0000247a) list_single_graphic_2heading_pane_g4_ParamLimits

0x247a,	// (0x0000247a) list_single_graphic_2heading_pane_g4

0x34e9,	// (0x000034e9) list_single_graphic_2heading_pane_g5_ParamLimits

0x34e9,	// (0x000034e9) list_single_graphic_2heading_pane_g5

0x0002,

0xab8e,	// (0x0000ab8e) list_single_graphic_2heading_pane_g_ParamLimits

0xab8e,	// (0x0000ab8e) list_single_graphic_2heading_pane_g

0x34f5,	// (0x000034f5) list_single_graphic_2heading_pane_t1_ParamLimits

0x34f5,	// (0x000034f5) list_single_graphic_2heading_pane_t1

0x3509,	// (0x00003509) list_single_graphic_2heading_pane_t2_ParamLimits

0x3509,	// (0x00003509) list_single_graphic_2heading_pane_t2

0x3523,	// (0x00003523) list_single_graphic_2heading_pane_t3_ParamLimits

0x3523,	// (0x00003523) list_single_graphic_2heading_pane_t3

0x0002,

0xab95,	// (0x0000ab95) list_single_graphic_2heading_pane_t_ParamLimits

0xab95,	// (0x0000ab95) list_single_graphic_2heading_pane_t

0x353b,	// (0x0000353b) bg_popup_sub_pane_cp2

0x3565,	// (0x00003565) grid_toobar_pane

0x35a1,	// (0x000035a1) cell_toolbar_pane_ParamLimits

0x35a1,	// (0x000035a1) cell_toolbar_pane

0x35e7,	// (0x000035e7) cell_toolbar_pane_g1_ParamLimits

0x35e7,	// (0x000035e7) cell_toolbar_pane_g1

0x35fb,	// (0x000035fb) cell_toolbar_pane_g2_ParamLimits

0x35fb,	// (0x000035fb) cell_toolbar_pane_g2

0x0001,

0xab9c,	// (0x0000ab9c) cell_toolbar_pane_g_ParamLimits

0xab9c,	// (0x0000ab9c) cell_toolbar_pane_g

0x361d,	// (0x0000361d) grid_highlight_pane_cp2_ParamLimits

0x361d,	// (0x0000361d) grid_highlight_pane_cp2

0x3637,	// (0x00003637) toolbar_button_pane

0x3643,	// (0x00003643) toolbar_button_pane_g1

0x364b,	// (0x0000364b) toolbar_button_pane_g2

0x3653,	// (0x00003653) toolbar_button_pane_g3

0x365b,	// (0x0000365b) toolbar_button_pane_g4

0x3663,	// (0x00003663) toolbar_button_pane_g5

0x366b,	// (0x0000366b) toolbar_button_pane_g6

0x3673,	// (0x00003673) toolbar_button_pane_g7

0x367b,	// (0x0000367b) toolbar_button_pane_g8

0x3683,	// (0x00003683) toolbar_button_pane_g9

0x0009,

0xaba1,	// (0x0000aba1) toolbar_button_pane_g

0x3693,	// (0x00003693) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3693,	// (0x00003693) list_single_2graphic_pane_g1_cp3

0xcd01,	// (0x0000cd01) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcd01,	// (0x0000cd01) list_single_2graphic_pane_g2_cp3

0x23d3,	// (0x000023d3) list_single_2graphic_pane_g3_cp3

0x36b0,	// (0x000036b0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x36b0,	// (0x000036b0) list_single_2graphic_pane_g4_cp3

0x36bc,	// (0x000036bc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x36bc,	// (0x000036bc) list_single_2graphic_pane_t1_cp3

0x23c7,	// (0x000023c7) list_single_midp_graphic_pane_g2_ParamLimits

0x23c7,	// (0x000023c7) list_single_midp_graphic_pane_g2

0x2a9c,	// (0x00002a9c) aid_zoom_text_primary

0x2aa4,	// (0x00002aa4) aid_zoom_text_secondary

0x28af,	// (0x000028af) status_small_pane_g7_ParamLimits

0x28af,	// (0x000028af) status_small_pane_g7

0x28d2,	// (0x000028d2) status_small_pane_t1_ParamLimits

0xb4ab,	// (0x0000b4ab) title_pane_g2

0x0003,

0xedc4,	// (0x0000edc4) title_pane_g

0xb736,	// (0x0000b736) aid_size_cell_colour_1_pane_ParamLimits

0xb736,	// (0x0000b736) aid_size_cell_colour_1_pane

0xb74a,	// (0x0000b74a) aid_size_cell_colour_2_pane_ParamLimits

0xb74a,	// (0x0000b74a) aid_size_cell_colour_2_pane

0xb75e,	// (0x0000b75e) aid_size_cell_colour_3_pane_ParamLimits

0xb75e,	// (0x0000b75e) aid_size_cell_colour_3_pane

0xb772,	// (0x0000b772) aid_size_cell_colour_4_pane_ParamLimits

0xb772,	// (0x0000b772) aid_size_cell_colour_4_pane

0x187c,	// (0x0000187c) title_pane_stacon_g1_ParamLimits

0x187c,	// (0x0000187c) title_pane_stacon_g1

0x3ebe,	// (0x00003ebe) popup_note_wait_window_g3_ParamLimits

0x3ebe,	// (0x00003ebe) popup_note_wait_window_g3

0x3f34,	// (0x00003f34) popup_note_wait_window_t5_ParamLimits

0x3f34,	// (0x00003f34) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc2d6,	// (0x0000c2d6) popup_feb_china_hwr_fs_window_ParamLimits

0xc2d6,	// (0x0000c2d6) popup_feb_china_hwr_fs_window

0xcd12,	// (0x0000cd12) aid_size_cell_hwr_fs_ParamLimits

0xcd12,	// (0x0000cd12) aid_size_cell_hwr_fs

0x37d3,	// (0x000037d3) bg_popup_sub_pane_cp3_ParamLimits

0x37d3,	// (0x000037d3) bg_popup_sub_pane_cp3

0xcd27,	// (0x0000cd27) grid_hwr_fs_pane_ParamLimits

0xcd27,	// (0x0000cd27) grid_hwr_fs_pane

0x37f7,	// (0x000037f7) linegrid_hwr_fs_pane_ParamLimits

0x37f7,	// (0x000037f7) linegrid_hwr_fs_pane

0xcd3f,	// (0x0000cd3f) cell_hwr_fs_pane_ParamLimits

0xcd3f,	// (0x0000cd3f) cell_hwr_fs_pane

0x3829,	// (0x00003829) linegrid_hwr_fs_pane_g1_ParamLimits

0x3829,	// (0x00003829) linegrid_hwr_fs_pane_g1

0xcd65,	// (0x0000cd65) linegrid_hwr_fs_pane_g2_ParamLimits

0xcd65,	// (0x0000cd65) linegrid_hwr_fs_pane_g2

0x3847,	// (0x00003847) linegrid_hwr_fs_pane_g3_ParamLimits

0x3847,	// (0x00003847) linegrid_hwr_fs_pane_g3

0x3853,	// (0x00003853) linegrid_hwr_fs_pane_g4_ParamLimits

0x3853,	// (0x00003853) linegrid_hwr_fs_pane_g4

0x386d,	// (0x0000386d) linegrid_hwr_fs_pane_g5_ParamLimits

0x386d,	// (0x0000386d) linegrid_hwr_fs_pane_g5

0x0004,

0xeee3,	// (0x0000eee3) linegrid_hwr_fs_pane_g_ParamLimits

0xeee3,	// (0x0000eee3) linegrid_hwr_fs_pane_g

0x3883,	// (0x00003883) cell_hwr_fs_pane_g1_ParamLimits

0x3883,	// (0x00003883) cell_hwr_fs_pane_g1

0x3416,	// (0x00003416) cell_hwr_fs_pane_g2_ParamLimits

0x3416,	// (0x00003416) cell_hwr_fs_pane_g2

0xcd77,	// (0x0000cd77) cell_hwr_fs_pane_g3_ParamLimits

0xcd77,	// (0x0000cd77) cell_hwr_fs_pane_g3

0xcd84,	// (0x0000cd84) cell_hwr_fs_pane_g4_ParamLimits

0xcd84,	// (0x0000cd84) cell_hwr_fs_pane_g4

0x0003,

0xeeee,	// (0x0000eeee) cell_hwr_fs_pane_g_ParamLimits

0xeeee,	// (0x0000eeee) cell_hwr_fs_pane_g

0xcd91,	// (0x0000cd91) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x162d,	// (0x0000162d) aid_inside_area_popup_secondary

0xcfea,	// (0x0000cfea) aid_inside_area_window_primary_ParamLimits

0xcfea,	// (0x0000cfea) aid_inside_area_window_primary

0x54e0,	// (0x000054e0) ai2_news_ticker_pane

0x54e8,	// (0x000054e8) aid_size_cell_ai1_link_ParamLimits

0x54e8,	// (0x000054e8) aid_size_cell_ai1_link

0x5502,	// (0x00005502) popup_ai2_data_window_ParamLimits

0x5502,	// (0x00005502) popup_ai2_data_window

0x5516,	// (0x00005516) popup_ai2_link_window_ParamLimits

0x5516,	// (0x00005516) popup_ai2_link_window

0x37d3,	// (0x000037d3) bg_popup_sub_pane_cp4_ParamLimits

0x37d3,	// (0x000037d3) bg_popup_sub_pane_cp4

0x552a,	// (0x0000552a) grid_ai2_link_pane_ParamLimits

0x552a,	// (0x0000552a) grid_ai2_link_pane

0x5541,	// (0x00005541) popup_ai2_link_window_g1_ParamLimits

0x5541,	// (0x00005541) popup_ai2_link_window_g1

0x554d,	// (0x0000554d) popup_ai2_link_window_g2_ParamLimits

0x554d,	// (0x0000554d) popup_ai2_link_window_g2

0x0001,

0xada3,	// (0x0000ada3) popup_ai2_link_window_g_ParamLimits

0xada3,	// (0x0000ada3) popup_ai2_link_window_g

0x555c,	// (0x0000555c) ai2_mp_button_pane

0x5564,	// (0x00005564) ai2_mp_volume_pane

0x3a6d,	// (0x00003a6d) bg_popup_sub_pane_cp5_ParamLimits

0x3a6d,	// (0x00003a6d) bg_popup_sub_pane_cp5

0x556c,	// (0x0000556c) heading_ai2_gene_pane_ParamLimits

0x556c,	// (0x0000556c) heading_ai2_gene_pane

0x5578,	// (0x00005578) list_ai2_gene_pane_ParamLimits

0x5578,	// (0x00005578) list_ai2_gene_pane

0x55c0,	// (0x000055c0) cell_ai2_link_pane_ParamLimits

0x55c0,	// (0x000055c0) cell_ai2_link_pane

0x55d6,	// (0x000055d6) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x56a7,	// (0x000056a7) ai2_mp_volume_pane_g1

0x56af,	// (0x000056af) ai2_mp_volume_pane_g2

0x561c,	// (0x0000561c) list_ai2_gene_pane_t1

0x56b7,	// (0x000056b7) ai2_mp_volume_pane_g3

0x0002,

0xadbc,	// (0x0000adbc) ai2_mp_volume_pane_g

0x56bf,	// (0x000056bf) volume_small_pane_cp3

0x56c8,	// (0x000056c8) aid_size_cell_ai2_button

0x56d0,	// (0x000056d0) grid_ai2_button_pane

0x56d9,	// (0x000056d9) cell_ai2_button_pane_ParamLimits

0x56d9,	// (0x000056d9) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5667,	// (0x00005667) ai2_gene_pane_t1_ParamLimits

0x5667,	// (0x00005667) ai2_gene_pane_t1

0xc24c,	// (0x0000c24c) aid_height_parent_landscape

0xd145,	// (0x0000d145) aid_height_set_list

0x4e4d,	// (0x00004e4d) aid_size_parent

0x524b,	// (0x0000524b) aid_size_cell_graphic_pane_ParamLimits

0x5588,	// (0x00005588) popup_ai2_data_window_g1_ParamLimits

0x5588,	// (0x00005588) popup_ai2_data_window_g1

0x5594,	// (0x00005594) ai2_news_ticker_pane_g1

0x559c,	// (0x0000559c) ai2_news_ticker_pane_g2

0x0001,

0xada8,	// (0x0000ada8) ai2_news_ticker_pane_g

0x55a4,	// (0x000055a4) ai2_news_ticker_pane_t1

0x55b2,	// (0x000055b2) ai2_news_ticker_pane_t2

0x0001,

0xadad,	// (0x0000adad) ai2_news_ticker_pane_t

0x55df,	// (0x000055df) heading_ai2_gene_pane_g1

0x55e7,	// (0x000055e7) heading_ai2_gene_pane_t1_ParamLimits

0x55e7,	// (0x000055e7) heading_ai2_gene_pane_t1

0x55fc,	// (0x000055fc) list_highlight_pane_cp6

0x5604,	// (0x00005604) ai2_gene_pane_ParamLimits

0x5604,	// (0x00005604) ai2_gene_pane

0x562a,	// (0x0000562a) list_ai2_gene_pane_t2

0x0001,

0xadb2,	// (0x0000adb2) list_ai2_gene_pane_t

0x5638,	// (0x00005638) list_highlight_pane_cp8_ParamLimits

0x5638,	// (0x00005638) list_highlight_pane_cp8

0x5649,	// (0x00005649) ai2_gene_pane_g1_ParamLimits

0x5649,	// (0x00005649) ai2_gene_pane_g1

0x565b,	// (0x0000565b) ai2_gene_pane_g2_ParamLimits

0x565b,	// (0x0000565b) ai2_gene_pane_g2

0x0001,

0xadb7,	// (0x0000adb7) ai2_gene_pane_g_ParamLimits

0xadb7,	// (0x0000adb7) ai2_gene_pane_g

0x0d79,	// (0x00000d79) scroll_pane_cp12

0xc20b,	// (0x0000c20b) control_pane_t3_ParamLimits

0xc20b,	// (0x0000c20b) control_pane_t3

0x28c3,	// (0x000028c3) status_small_pane_g8_ParamLimits

0x28c3,	// (0x000028c3) status_small_pane_g8

0xc369,	// (0x0000c369) popup_find_window_ParamLimits

0xc5e4,	// (0x0000c5e4) popup_note_image_window_ParamLimits

0x34dd,	// (0x000034dd) list_double2_graphic_pane_vc_g1_ParamLimits

0x34dd,	// (0x000034dd) list_double2_graphic_pane_vc_g1

0x247a,	// (0x0000247a) list_double2_graphic_pane_vc_g2_ParamLimits

0x247a,	// (0x0000247a) list_double2_graphic_pane_vc_g2

0x34e9,	// (0x000034e9) list_double2_graphic_pane_vc_g3_ParamLimits

0x34e9,	// (0x000034e9) list_double2_graphic_pane_vc_g3

0x0002,

0xab8e,	// (0x0000ab8e) list_double2_graphic_pane_vc_g_ParamLimits

0xab8e,	// (0x0000ab8e) list_double2_graphic_pane_vc_g

0x35d1,	// (0x000035d1) list_double2_graphic_pane_vc_t1_ParamLimits

0x35d1,	// (0x000035d1) list_double2_graphic_pane_vc_t1

0x247a,	// (0x0000247a) list_single_heading_pane_vc_g1_ParamLimits

0x247a,	// (0x0000247a) list_single_heading_pane_vc_g1

0x34e9,	// (0x000034e9) list_single_heading_pane_vc_g2_ParamLimits

0x34e9,	// (0x000034e9) list_single_heading_pane_vc_g2

0x0001,

0xabb6,	// (0x0000abb6) list_single_heading_pane_vc_g_ParamLimits

0xabb6,	// (0x0000abb6) list_single_heading_pane_vc_g

0x36d6,	// (0x000036d6) list_single_heading_pane_vc_t1_ParamLimits

0x36d6,	// (0x000036d6) list_single_heading_pane_vc_t1

0x36ec,	// (0x000036ec) list_single_heading_pane_vc_t2_ParamLimits

0x36ec,	// (0x000036ec) list_single_heading_pane_vc_t2

0x0001,

0xabbb,	// (0x0000abbb) list_single_heading_pane_vc_t_ParamLimits

0xabbb,	// (0x0000abbb) list_single_heading_pane_vc_t

0x3716,	// (0x00003716) list_setting_number_pane_vc_g1_ParamLimits

0x3716,	// (0x00003716) list_setting_number_pane_vc_g1

0x3722,	// (0x00003722) list_setting_number_pane_vc_g2_ParamLimits

0x3722,	// (0x00003722) list_setting_number_pane_vc_g2

0x0001,

0xabc0,	// (0x0000abc0) list_setting_number_pane_vc_g_ParamLimits

0xabc0,	// (0x0000abc0) list_setting_number_pane_vc_g

0x372e,	// (0x0000372e) list_setting_number_pane_vc_t1_ParamLimits

0x372e,	// (0x0000372e) list_setting_number_pane_vc_t1

0x3742,	// (0x00003742) list_setting_number_pane_vc_t2_ParamLimits

0x3742,	// (0x00003742) list_setting_number_pane_vc_t2

0x375c,	// (0x0000375c) list_setting_number_pane_vc_t3_ParamLimits

0x375c,	// (0x0000375c) list_setting_number_pane_vc_t3

0x0002,

0xabc5,	// (0x0000abc5) list_setting_number_pane_vc_t_ParamLimits

0xabc5,	// (0x0000abc5) list_setting_number_pane_vc_t

0x3782,	// (0x00003782) set_value_pane_vc_ParamLimits

0x3782,	// (0x00003782) set_value_pane_vc

0x504f,	// (0x0000504f) list_double2_graphic_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_double2_graphic_pane_vc

0x5063,	// (0x00005063) list_double2_large_graphic_pane_vc_ParamLimits

0x5063,	// (0x00005063) list_double2_large_graphic_pane_vc

0x504f,	// (0x0000504f) list_double2_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_double2_pane_vc

0x504f,	// (0x0000504f) list_double_graphic_heading_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_double_graphic_heading_pane_vc

0x504f,	// (0x0000504f) list_double_graphic_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_double_graphic_pane_vc

0x504f,	// (0x0000504f) list_double_heading_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_double_heading_pane_vc

0x5063,	// (0x00005063) list_double_large_graphic_pane_vc_ParamLimits

0x5063,	// (0x00005063) list_double_large_graphic_pane_vc

0x504f,	// (0x0000504f) list_double_number_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_double_number_pane_vc

0x504f,	// (0x0000504f) list_double_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_double_pane_vc

0x504f,	// (0x0000504f) list_double_time_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_double_time_pane_vc

0x504f,	// (0x0000504f) list_setting_number_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_setting_number_pane_vc

0x504f,	// (0x0000504f) list_setting_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_setting_pane_vc

0x504f,	// (0x0000504f) list_single_graphic_heading_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_single_graphic_heading_pane_vc

0x504f,	// (0x0000504f) list_single_heading_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_single_heading_pane_vc

0x504f,	// (0x0000504f) list_single_number_heading_pane_vc_ParamLimits

0x504f,	// (0x0000504f) list_single_number_heading_pane_vc

0x570d,	// (0x0000570d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x570d,	// (0x0000570d) list_double_graphic_heading_pane_vc_g1

0x24de,	// (0x000024de) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x24de,	// (0x000024de) list_double_graphic_heading_pane_vc_g2

0x5719,	// (0x00005719) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5719,	// (0x00005719) list_double_graphic_heading_pane_vc_g3

0x0002,

0xadc3,	// (0x0000adc3) list_double_graphic_heading_pane_vc_g_ParamLimits

0xadc3,	// (0x0000adc3) list_double_graphic_heading_pane_vc_g

0x5725,	// (0x00005725) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5725,	// (0x00005725) list_double_graphic_heading_pane_vc_t1

0x36d6,	// (0x000036d6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x36d6,	// (0x000036d6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xadca,	// (0x0000adca) list_double_graphic_heading_pane_vc_t_ParamLimits

0xadca,	// (0x0000adca) list_double_graphic_heading_pane_vc_t

0x3716,	// (0x00003716) list_setting_pane_vc_g1_ParamLimits

0x3716,	// (0x00003716) list_setting_pane_vc_g1

0x3722,	// (0x00003722) list_setting_pane_vc_g2_ParamLimits

0x3722,	// (0x00003722) list_setting_pane_vc_g2

0x0001,

0xabc0,	// (0x0000abc0) list_setting_pane_vc_g_ParamLimits

0xabc0,	// (0x0000abc0) list_setting_pane_vc_g

0x596e,	// (0x0000596e) list_setting_pane_vc_t1_ParamLimits

0x596e,	// (0x0000596e) list_setting_pane_vc_t1

0x5988,	// (0x00005988) list_setting_pane_vc_t2_ParamLimits

0x5988,	// (0x00005988) list_setting_pane_vc_t2

0x0001,

0xae0d,	// (0x0000ae0d) list_setting_pane_vc_t_ParamLimits

0xae0d,	// (0x0000ae0d) list_setting_pane_vc_t

0x3782,	// (0x00003782) set_value_pane_cp_vc_ParamLimits

0x3782,	// (0x00003782) set_value_pane_cp_vc

0x247a,	// (0x0000247a) list_single_number_heading_pane_vc_g1_ParamLimits

0x247a,	// (0x0000247a) list_single_number_heading_pane_vc_g1

0x34e9,	// (0x000034e9) list_single_number_heading_pane_vc_g2_ParamLimits

0x34e9,	// (0x000034e9) list_single_number_heading_pane_vc_g2

0x0001,

0xabb6,	// (0x0000abb6) list_single_number_heading_pane_vc_g_ParamLimits

0xabb6,	// (0x0000abb6) list_single_number_heading_pane_vc_g

0x36d6,	// (0x000036d6) list_single_number_heading_pane_vc_t1_ParamLimits

0x36d6,	// (0x000036d6) list_single_number_heading_pane_vc_t1

0x599e,	// (0x0000599e) list_single_number_heading_pane_vc_t2_ParamLimits

0x599e,	// (0x0000599e) list_single_number_heading_pane_vc_t2

0x59b2,	// (0x000059b2) list_single_number_heading_pane_vc_t3_ParamLimits

0x59b2,	// (0x000059b2) list_single_number_heading_pane_vc_t3

0x0002,

0xae12,	// (0x0000ae12) list_single_number_heading_pane_vc_t_ParamLimits

0xae12,	// (0x0000ae12) list_single_number_heading_pane_vc_t

0x34dd,	// (0x000034dd) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x34dd,	// (0x000034dd) list_single_graphic_heading_pane_vc_g1

0x247a,	// (0x0000247a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x247a,	// (0x0000247a) list_single_graphic_heading_pane_vc_g4

0x34e9,	// (0x000034e9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x34e9,	// (0x000034e9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xab8e,	// (0x0000ab8e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xab8e,	// (0x0000ab8e) list_single_graphic_heading_pane_vc_g

0x36d6,	// (0x000036d6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x36d6,	// (0x000036d6) list_single_graphic_heading_pane_vc_t1

0x59c4,	// (0x000059c4) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x59c4,	// (0x000059c4) list_single_graphic_heading_pane_vc_t2

0x0001,

0xae19,	// (0x0000ae19) list_single_graphic_heading_pane_vc_t_ParamLimits

0xae19,	// (0x0000ae19) list_single_graphic_heading_pane_vc_t

0x247a,	// (0x0000247a) list_double2_pane_vc_g1_ParamLimits

0x247a,	// (0x0000247a) list_double2_pane_vc_g1

0x34e9,	// (0x000034e9) list_double2_pane_vc_g2_ParamLimits

0x34e9,	// (0x000034e9) list_double2_pane_vc_g2

0x0001,

0xabb6,	// (0x0000abb6) list_double2_pane_vc_g_ParamLimits

0xabb6,	// (0x0000abb6) list_double2_pane_vc_g

0x59d8,	// (0x000059d8) list_double2_pane_vc_t1_ParamLimits

0x59d8,	// (0x000059d8) list_double2_pane_vc_t1

0x59ee,	// (0x000059ee) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x59ee,	// (0x000059ee) list_double2_large_graphic_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_large_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double2_large_graphic_pane_vc_g3

0x0002,

0xae1e,	// (0x0000ae1e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xae1e,	// (0x0000ae1e) list_double2_large_graphic_pane_vc_g

0x59fa,	// (0x000059fa) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59fa,	// (0x000059fa) list_double2_large_graphic_pane_vc_t1

0x5a10,	// (0x00005a10) list_double_time_pane_vc_g1_ParamLimits

0x5a10,	// (0x00005a10) list_double_time_pane_vc_g1

0x5a1c,	// (0x00005a1c) list_double_time_pane_vc_g2_ParamLimits

0x5a1c,	// (0x00005a1c) list_double_time_pane_vc_g2

0x0001,

0xae25,	// (0x0000ae25) list_double_time_pane_vc_g_ParamLimits

0xae25,	// (0x0000ae25) list_double_time_pane_vc_g

0x5a28,	// (0x00005a28) list_double_time_pane_vc_t1_ParamLimits

0x5a28,	// (0x00005a28) list_double_time_pane_vc_t1

0x5a41,	// (0x00005a41) list_double_time_pane_vc_t2_ParamLimits

0x5a41,	// (0x00005a41) list_double_time_pane_vc_t2

0x5a5c,	// (0x00005a5c) list_double_time_pane_vc_t3_ParamLimits

0x5a5c,	// (0x00005a5c) list_double_time_pane_vc_t3

0x5a74,	// (0x00005a74) list_double_time_pane_vc_t4_ParamLimits

0x5a74,	// (0x00005a74) list_double_time_pane_vc_t4

0x0003,

0xae2a,	// (0x0000ae2a) list_double_time_pane_vc_t_ParamLimits

0xae2a,	// (0x0000ae2a) list_double_time_pane_vc_t

0x247a,	// (0x0000247a) list_double_pane_vc_g1_ParamLimits

0x247a,	// (0x0000247a) list_double_pane_vc_g1

0x34e9,	// (0x000034e9) list_double_pane_vc_g2_ParamLimits

0x34e9,	// (0x000034e9) list_double_pane_vc_g2

0x0001,

0xabb6,	// (0x0000abb6) list_double_pane_vc_g_ParamLimits

0xabb6,	// (0x0000abb6) list_double_pane_vc_g

0x5a88,	// (0x00005a88) list_double_pane_vc_t1_ParamLimits

0x5a88,	// (0x00005a88) list_double_pane_vc_t1

0x5a9a,	// (0x00005a9a) list_double_pane_vc_t2_ParamLimits

0x5a9a,	// (0x00005a9a) list_double_pane_vc_t2

0x0001,

0xae33,	// (0x0000ae33) list_double_pane_vc_t_ParamLimits

0xae33,	// (0x0000ae33) list_double_pane_vc_t

0x247a,	// (0x0000247a) list_double_number_pane_vc_g1_ParamLimits

0x247a,	// (0x0000247a) list_double_number_pane_vc_g1

0x34e9,	// (0x000034e9) list_double_number_pane_vc_g2_ParamLimits

0x34e9,	// (0x000034e9) list_double_number_pane_vc_g2

0x0001,

0xabb6,	// (0x0000abb6) list_double_number_pane_vc_g_ParamLimits

0xabb6,	// (0x0000abb6) list_double_number_pane_vc_g

0x5ab2,	// (0x00005ab2) list_double_number_pane_vc_t1_ParamLimits

0x5ab2,	// (0x00005ab2) list_double_number_pane_vc_t1

0x5ac6,	// (0x00005ac6) list_double_number_pane_vc_t2_ParamLimits

0x5ac6,	// (0x00005ac6) list_double_number_pane_vc_t2

0x5a9a,	// (0x00005a9a) list_double_number_pane_vc_t3_ParamLimits

0x5a9a,	// (0x00005a9a) list_double_number_pane_vc_t3

0x0002,

0xae38,	// (0x0000ae38) list_double_number_pane_vc_t_ParamLimits

0xae38,	// (0x0000ae38) list_double_number_pane_vc_t

0x5ad8,	// (0x00005ad8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5ad8,	// (0x00005ad8) list_double_large_graphic_pane_vc_g1

0x5ae4,	// (0x00005ae4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5ae4,	// (0x00005ae4) list_double_large_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double_large_graphic_pane_vc_g3

0x5af3,	// (0x00005af3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5af3,	// (0x00005af3) list_double_large_graphic_pane_vc_g4

0x0003,

0xae3f,	// (0x0000ae3f) list_double_large_graphic_pane_vc_g_ParamLimits

0xae3f,	// (0x0000ae3f) list_double_large_graphic_pane_vc_g

0x5aff,	// (0x00005aff) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5aff,	// (0x00005aff) list_double_large_graphic_pane_vc_t1

0x5b11,	// (0x00005b11) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5b11,	// (0x00005b11) list_double_large_graphic_pane_vc_t2

0x0001,

0xae48,	// (0x0000ae48) list_double_large_graphic_pane_vc_t_ParamLimits

0xae48,	// (0x0000ae48) list_double_large_graphic_pane_vc_t

0x24de,	// (0x000024de) list_double_heading_pane_vc_g1_ParamLimits

0x24de,	// (0x000024de) list_double_heading_pane_vc_g1

0x5719,	// (0x00005719) list_double_heading_pane_vc_g2_ParamLimits

0x5719,	// (0x00005719) list_double_heading_pane_vc_g2

0x0001,

0xae4d,	// (0x0000ae4d) list_double_heading_pane_vc_g_ParamLimits

0xae4d,	// (0x0000ae4d) list_double_heading_pane_vc_g

0x5b2a,	// (0x00005b2a) list_double_heading_pane_vc_t1_ParamLimits

0x5b2a,	// (0x00005b2a) list_double_heading_pane_vc_t1

0x36d6,	// (0x000036d6) list_double_heading_pane_vc_t2_ParamLimits

0x36d6,	// (0x000036d6) list_double_heading_pane_vc_t2

0x0001,

0xae52,	// (0x0000ae52) list_double_heading_pane_vc_t_ParamLimits

0xae52,	// (0x0000ae52) list_double_heading_pane_vc_t

0x34dd,	// (0x000034dd) list_double_graphic_pane_vc_g1_ParamLimits

0x34dd,	// (0x000034dd) list_double_graphic_pane_vc_g1

0x47b5,	// (0x000047b5) list_double_graphic_pane_vc_g2_ParamLimits

0x47b5,	// (0x000047b5) list_double_graphic_pane_vc_g2

0x5b3e,	// (0x00005b3e) list_double_graphic_pane_vc_g3_ParamLimits

0x5b3e,	// (0x00005b3e) list_double_graphic_pane_vc_g3

0x0002,

0xae57,	// (0x0000ae57) list_double_graphic_pane_vc_g_ParamLimits

0xae57,	// (0x0000ae57) list_double_graphic_pane_vc_g

0x5b4a,	// (0x00005b4a) list_double_graphic_pane_vc_t1_ParamLimits

0x5b4a,	// (0x00005b4a) list_double_graphic_pane_vc_t1

0x5a9a,	// (0x00005a9a) list_double_graphic_pane_vc_t2_ParamLimits

0x5a9a,	// (0x00005a9a) list_double_graphic_pane_vc_t2

0x0001,

0xae5e,	// (0x0000ae5e) list_double_graphic_pane_vc_t_ParamLimits

0xae5e,	// (0x0000ae5e) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb2f7,	// (0x0000b2f7) aid_size_cell_touch_ParamLimits

0xb2f7,	// (0x0000b2f7) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb442,	// (0x0000b442) touch_pane_ParamLimits

0xb442,	// (0x0000b442) touch_pane

0x1277,	// (0x00001277) button_value_adjust_pane_cp2

0x1277,	// (0x00001277) button_value_adjust_pane_cp4

0x1297,	// (0x00001297) form_field_data_pane_cp2

0xbbd3,	// (0x0000bbd3) form_field_data_wide_pane_cp2

0x1ae3,	// (0x00001ae3) bg_scroll_pane_ParamLimits

0x1b02,	// (0x00001b02) scroll_handle_pane_ParamLimits

0x1b16,	// (0x00001b16) scroll_sc2_down_pane_ParamLimits

0x1b16,	// (0x00001b16) scroll_sc2_down_pane

0x1b3d,	// (0x00001b3d) scroll_sc2_up_pane_ParamLimits

0x1b3d,	// (0x00001b3d) scroll_sc2_up_pane

0xd50d,	// (0x0000d50d) grid_wheel_folder_pane_g1_ParamLimits

0xd50d,	// (0x0000d50d) grid_wheel_folder_pane_g1

0x21f5,	// (0x000021f5) clock_nsta_pane_cp2_ParamLimits

0x21f5,	// (0x000021f5) clock_nsta_pane_cp2

0x2b0e,	// (0x00002b0e) listscroll_midp_pane_ParamLimits

0xc01d,	// (0x0000c01d) midp_canvas_pane

0x2a82,	// (0x00002a82) nsta_clock_indic_pane

0x2ae0,	// (0x00002ae0) listscroll_form_pane_vc

0x2afc,	// (0x00002afc) listscroll_set_pane_vc_ParamLimits

0x2afc,	// (0x00002afc) listscroll_set_pane_vc

0xca12,	// (0x0000ca12) clock_nsta_pane

0xca3c,	// (0x0000ca3c) indicator_nsta_pane

0x353b,	// (0x0000353b) bg_popup_sub_pane_cp2_ParamLimits

0x354f,	// (0x0000354f) find_pane_cp2_ParamLimits

0x354f,	// (0x0000354f) find_pane_cp2

0x3565,	// (0x00003565) grid_toobar_pane_ParamLimits

0x3792,	// (0x00003792) list_form_gen_pane_vc_ParamLimits

0x3792,	// (0x00003792) list_form_gen_pane_vc

0x37a8,	// (0x000037a8) scroll_pane_cp8_vc_ParamLimits

0x37a8,	// (0x000037a8) scroll_pane_cp8_vc

0x38c1,	// (0x000038c1) data_form_wide_pane_vc_ParamLimits

0x38c1,	// (0x000038c1) data_form_wide_pane_vc

0x38cd,	// (0x000038cd) form_field_data_wide_pane_vc_g1

0x38d5,	// (0x000038d5) form_field_data_wide_pane_vc_t1_ParamLimits

0x38d5,	// (0x000038d5) form_field_data_wide_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp6_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp6_vc

0xce4e,	// (0x0000ce4e) list_midp_pane_ParamLimits

0x52b5,	// (0x000052b5) scroll_pane_cp16_ParamLimits

0x52b5,	// (0x000052b5) scroll_pane_cp16

0x3c98,	// (0x00003c98) button_value_adjust_pane_ParamLimits

0x3c98,	// (0x00003c98) button_value_adjust_pane

0xd156,	// (0x0000d156) button_value_adjust_pane_cp6_ParamLimits

0xd156,	// (0x0000d156) button_value_adjust_pane_cp6

0xd26c,	// (0x0000d26c) settings_code_pane_cp_ParamLimits

0xd26c,	// (0x0000d26c) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xaae1,	// (0x0000aae1) cell_touch_pane_g

0xd3ec,	// (0x0000d3ec) cell_touch_pane_cp_ParamLimits

0xd3ec,	// (0x0000d3ec) cell_touch_pane_cp

0xd408,	// (0x0000d408) cell_touch_pane_ParamLimits

0xd408,	// (0x0000d408) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5739,	// (0x00005739) list_set_graphic_pane_vc_g1_ParamLimits

0x5739,	// (0x00005739) list_set_graphic_pane_vc_g1

0x5745,	// (0x00005745) list_set_graphic_pane_vc_g2_ParamLimits

0x5745,	// (0x00005745) list_set_graphic_pane_vc_g2

0x0001,

0xadcf,	// (0x0000adcf) list_set_graphic_pane_vc_g_ParamLimits

0xadcf,	// (0x0000adcf) list_set_graphic_pane_vc_g

0x5751,	// (0x00005751) text_primary_small_cp13_vc_ParamLimits

0x5751,	// (0x00005751) text_primary_small_cp13_vc

0x5769,	// (0x00005769) list_set_graphic_pane_vc_ParamLimits

0x5769,	// (0x00005769) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x577d,	// (0x0000577d) setting_code_pane_vc_t1

0x578b,	// (0x0000578b) set_text_pane_vc_t1_ParamLimits

0x578b,	// (0x0000578b) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x57aa,	// (0x000057aa) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x57b4,	// (0x000057b4) setting_slider_graphic_pane_vc_g1

0x57bc,	// (0x000057bc) setting_slider_graphic_pane_vc_t1

0x57ca,	// (0x000057ca) setting_slider_graphic_pane_vc_t2

0x0001,

0xadd4,	// (0x0000add4) setting_slider_graphic_pane_vc_t

0x57d8,	// (0x000057d8) slider_set_pane_cp_vc

0x57e0,	// (0x000057e0) slider_set_pane_vc_g1

0x57e9,	// (0x000057e9) slider_set_pane_vc_g2

0x0006,

0xadd9,	// (0x0000add9) slider_set_pane_vc_g

0x148b,	// (0x0000148b) set_opt_bg_pane_g1_copy1

0x1493,	// (0x00001493) set_opt_bg_pane_g2_copy1

0x5815,	// (0x00005815) set_opt_bg_pane_g3_copy1

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4_copy1

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5_copy1

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6_copy1

0x581d,	// (0x0000581d) set_opt_bg_pane_g7_copy1

0x5827,	// (0x00005827) set_opt_bg_pane_g8_copy1

0x582f,	// (0x0000582f) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x5837,	// (0x00005837) setting_slider_pane_vc_t1

0x57bc,	// (0x000057bc) setting_slider_pane_vc_t2

0x57ca,	// (0x000057ca) setting_slider_pane_vc_t3

0x0002,

0xade8,	// (0x0000ade8) setting_slider_pane_vc_t

0x57d8,	// (0x000057d8) slider_set_pane_vc

0x44ce,	// (0x000044ce) volume_set_pane_vc_g1

0x5846,	// (0x00005846) volume_set_pane_vc_g2

0x584f,	// (0x0000584f) volume_set_pane_vc_g3

0x5858,	// (0x00005858) volume_set_pane_vc_g4

0x5861,	// (0x00005861) volume_set_pane_vc_g5

0x586a,	// (0x0000586a) volume_set_pane_vc_g6

0x5873,	// (0x00005873) volume_set_pane_vc_g7

0x587c,	// (0x0000587c) volume_set_pane_vc_g8

0x5885,	// (0x00005885) volume_set_pane_vc_g9

0x588e,	// (0x0000588e) volume_set_pane_vc_g10

0x0009,

0xadef,	// (0x0000adef) volume_set_pane_vc_g

0x5897,	// (0x00005897) volume_set_pane_vc

0x589f,	// (0x0000589f) button_value_adjust_pane_cp1_vc

0x58a9,	// (0x000058a9) list_highlight_pane_cp2_vc

0x58b2,	// (0x000058b2) list_set_pane_vc_ParamLimits

0x58b2,	// (0x000058b2) list_set_pane_vc

0x5904,	// (0x00005904) main_pane_set_vc_t1_ParamLimits

0x5904,	// (0x00005904) main_pane_set_vc_t1

0x5919,	// (0x00005919) main_pane_set_vc_t2_ParamLimits

0x5919,	// (0x00005919) main_pane_set_vc_t2

0x592b,	// (0x0000592b) main_pane_set_vc_t3_ParamLimits

0x592b,	// (0x0000592b) main_pane_set_vc_t3

0x593d,	// (0x0000593d) main_pane_set_vc_t4_ParamLimits

0x593d,	// (0x0000593d) main_pane_set_vc_t4

0x0003,

0xae04,	// (0x0000ae04) main_pane_set_vc_t_ParamLimits

0xae04,	// (0x0000ae04) main_pane_set_vc_t

0x594f,	// (0x0000594f) setting_code_pane_vc_ParamLimits

0x594f,	// (0x0000594f) setting_code_pane_vc

0x595e,	// (0x0000595e) setting_slider_graphic_pane_vc

0x595e,	// (0x0000595e) setting_slider_pane_vc

0x595e,	// (0x0000595e) setting_text_pane_vc

0x595e,	// (0x0000595e) setting_volume_pane_vc

0x5966,	// (0x00005966) scroll_pane_cp121_vc

0x1265,	// (0x00001265) set_content_pane_vc

0x5b5c,	// (0x00005b5c) button_value_adjust_pane_g1

0x5b65,	// (0x00005b65) button_value_adjust_pane_g2

0x0001,

0xae63,	// (0x0000ae63) button_value_adjust_pane_g

0x5b6e,	// (0x00005b6e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5b6e,	// (0x00005b6e) form_field_slider_wide_pane_vc_t1

0x5b82,	// (0x00005b82) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5b82,	// (0x00005b82) form_field_slider_wide_pane_vc_t2

0x0001,

0xae68,	// (0x0000ae68) form_field_slider_wide_pane_vc_t_ParamLimits

0xae68,	// (0x0000ae68) form_field_slider_wide_pane_vc_t

0x080b,	// (0x0000080b) input_focus_pane_cp10_vc_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp10_vc

0x5b94,	// (0x00005b94) slider_cont_pane_cp1_vc_ParamLimits

0x5b94,	// (0x00005b94) slider_cont_pane_cp1_vc

0x57e0,	// (0x000057e0) slider_form_pane_g1_cp2

0x57e9,	// (0x000057e9) slider_form_pane_g2_cp2

0x5bad,	// (0x00005bad) form_field_slider_pane_vc_t3

0x5bbb,	// (0x00005bbb) form_field_slider_pane_vc_t4

0x5bc9,	// (0x00005bc9) slider_form_pane_vc_ParamLimits

0x5bc9,	// (0x00005bc9) slider_form_pane_vc

0x5bd6,	// (0x00005bd6) form_field_slider_pane_vc_t1_ParamLimits

0x5bd6,	// (0x00005bd6) form_field_slider_pane_vc_t1

0x5b82,	// (0x00005b82) form_field_slider_pane_vc_t2_ParamLimits

0x5b82,	// (0x00005b82) form_field_slider_pane_vc_t2

0x0001,

0xae78,	// (0x0000ae78) form_field_slider_pane_vc_t_ParamLimits

0xae78,	// (0x0000ae78) form_field_slider_pane_vc_t

0x080b,	// (0x0000080b) input_focus_pane_cp9_vc_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp9_vc

0x5bf2,	// (0x00005bf2) slider_cont_pane_vc_ParamLimits

0x5bf2,	// (0x00005bf2) slider_cont_pane_vc

0x5c04,	// (0x00005c04) list_form_graphic_pane_cp_vc_ParamLimits

0x5c04,	// (0x00005c04) list_form_graphic_pane_cp_vc

0x38cd,	// (0x000038cd) form_field_popup_wide_pane_vc_g1

0x5c19,	// (0x00005c19) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5c19,	// (0x00005c19) form_field_popup_wide_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp8_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp8_vc

0x5c30,	// (0x00005c30) list_form_wide_pane_vc_ParamLimits

0x5c30,	// (0x00005c30) list_form_wide_pane_vc

0x5c3c,	// (0x00005c3c) list_form_graphic_pane_vc_g1

0x5c44,	// (0x00005c44) list_form_graphic_pane_vc_t1_ParamLimits

0x5c44,	// (0x00005c44) list_form_graphic_pane_vc_t1

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_vc_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_vc

0x5c60,	// (0x00005c60) list_form_graphic_pane_vc_ParamLimits

0x5c60,	// (0x00005c60) list_form_graphic_pane_vc

0x38cd,	// (0x000038cd) form_field_popup_pane_vc_g1

0x5c76,	// (0x00005c76) form_field_popup_pane_vc_t1_ParamLimits

0x5c76,	// (0x00005c76) form_field_popup_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp7_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp7_vc

0x5c8d,	// (0x00005c8d) list_form_pane_vc_ParamLimits

0x5c8d,	// (0x00005c8d) list_form_pane_vc

0x5c99,	// (0x00005c99) data_form_pane_vc_t1_ParamLimits

0x5c99,	// (0x00005c99) data_form_pane_vc_t1

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

0xaa6a,	// (0x0000aa6a) input_focus_pane_vc_g

0x38c1,	// (0x000038c1) data_form_pane_vc_ParamLimits

0x38c1,	// (0x000038c1) data_form_pane_vc

0x38cd,	// (0x000038cd) form_field_data_pane_vc_g1

0x5cb4,	// (0x00005cb4) form_field_data_pane_vc_t1_ParamLimits

0x5cb4,	// (0x00005cb4) form_field_data_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_vc

0x5cce,	// (0x00005cce) button_value_adjust_pane_cp3_vc

0x5cd6,	// (0x00005cd6) button_value_adjust_pane_cp5_vc

0x5cde,	// (0x00005cde) form_field_data_pane_vc_ParamLimits

0x5cde,	// (0x00005cde) form_field_data_pane_vc

0x5cf5,	// (0x00005cf5) form_field_data_pane_vc_cp2

0x5cfd,	// (0x00005cfd) form_field_data_wide_pane_vc_ParamLimits

0x5cfd,	// (0x00005cfd) form_field_data_wide_pane_vc

0x5d13,	// (0x00005d13) form_field_data_wide_pane_vc_cp2

0x5d1b,	// (0x00005d1b) form_field_popup_pane_vc_ParamLimits

0x5d1b,	// (0x00005d1b) form_field_popup_pane_vc

0x5d32,	// (0x00005d32) form_field_popup_wide_pane_vc_ParamLimits

0x5d32,	// (0x00005d32) form_field_popup_wide_pane_vc

0x5d48,	// (0x00005d48) form_field_slider_pane_vc_ParamLimits

0x5d48,	// (0x00005d48) form_field_slider_pane_vc

0x5d5b,	// (0x00005d5b) form_field_slider_wide_pane_vc_ParamLimits

0x5d5b,	// (0x00005d5b) form_field_slider_wide_pane_vc

0xd426,	// (0x0000d426) grid_touch_1_pane_ParamLimits

0xd426,	// (0x0000d426) grid_touch_1_pane

0xd43a,	// (0x0000d43a) grid_touch_2_pane_ParamLimits

0xd43a,	// (0x0000d43a) grid_touch_2_pane

0x5e30,	// (0x00005e30) touch_pane_g1_ParamLimits

0x5e30,	// (0x00005e30) touch_pane_g1

0x5d92,	// (0x00005d92) cell_app_pane_cp_wide_ParamLimits

0x5d92,	// (0x00005d92) cell_app_pane_cp_wide

0x5da3,	// (0x00005da3) grid_popup_fast_wide_pane_ParamLimits

0x5da3,	// (0x00005da3) grid_popup_fast_wide_pane

0x5db7,	// (0x00005db7) scroll_pane_cp19_ParamLimits

0x5db7,	// (0x00005db7) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5dcb,	// (0x00005dcb) listscroll_popup_fast_wide_pane

0x1698,	// (0x00001698) grid_indicator_nsta_pane

0x5dd3,	// (0x00005dd3) clock_nsta_pane_g1

0x5ddc,	// (0x00005ddc) clock_nsta_pane_t1

0xd464,	// (0x0000d464) cell_indicator_nsta_pane_ParamLimits

0xd464,	// (0x0000d464) cell_indicator_nsta_pane

0x5e30,	// (0x00005e30) cell_indicator_nsta_pane_g1

0xd481,	// (0x0000d481) cell_indicator_nsta_pane_g2

0x0001,

0xef64,	// (0x0000ef64) cell_indicator_nsta_pane_g

0x5e54,	// (0x00005e54) clock_nsta_pane_cp

0x5e5c,	// (0x00005e5c) indicator_nsta_pane_cp

0x5e65,	// (0x00005e65) nsta_clock_indic_pane_g1

0x0659,	// (0x00000659) grid_indicator_pane

0x1c2f,	// (0x00001c2f) scroll_pane_cp29

0x2122,	// (0x00002122) indicator_nsta_pane_cp2_ParamLimits

0x2122,	// (0x00002122) indicator_nsta_pane_cp2

0x04e9,	// (0x000004e9) main_apps_wheel_pane

0x3b25,	// (0x00003b25) form_midp_field_text_pane_ParamLimits

0x3c6a,	// (0x00003c6a) scroll_bar_cp050_ParamLimits

0x5ece,	// (0x00005ece) cell_indicator_pane_ParamLimits

0x5ece,	// (0x00005ece) cell_indicator_pane

0x5eeb,	// (0x00005eeb) cell_indicator_pane_g1

0xd497,	// (0x0000d497) grid_wheel_folder_pane_ParamLimits

0xd497,	// (0x0000d497) grid_wheel_folder_pane

0xd4a5,	// (0x0000d4a5) list_wheel_apps_pane_ParamLimits

0xd4a5,	// (0x0000d4a5) list_wheel_apps_pane

0xd4b3,	// (0x0000d4b3) main_apps_wheel_pane_g1_ParamLimits

0xd4b3,	// (0x0000d4b3) main_apps_wheel_pane_g1

0xd4bf,	// (0x0000d4bf) main_apps_wheel_pane_g2_ParamLimits

0xd4bf,	// (0x0000d4bf) main_apps_wheel_pane_g2

0x0001,

0xef69,	// (0x0000ef69) main_apps_wheel_pane_g_ParamLimits

0xef69,	// (0x0000ef69) main_apps_wheel_pane_g

0xd4cd,	// (0x0000d4cd) main_apps_wheel_pane_t1_ParamLimits

0xd4cd,	// (0x0000d4cd) main_apps_wheel_pane_t1

0xd4e1,	// (0x0000d4e1) list_wheel_apps_pane_g1

0xd4e9,	// (0x0000d4e9) list_wheel_apps_pane_g2

0xd4f1,	// (0x0000d4f1) list_wheel_apps_pane_g3

0xd4f9,	// (0x0000d4f9) list_wheel_apps_pane_g4

0xd503,	// (0x0000d503) list_wheel_apps_pane_g5

0x0004,

0xef6e,	// (0x0000ef6e) list_wheel_apps_pane_g

0x2425,	// (0x00002425) navi_icon_text_pane

0xc906,	// (0x0000c906) aid_fill_nsta

0x5fb2,	// (0x00005fb2) navi_icon_text_pane_g1

0x5fbe,	// (0x00005fbe) navi_icon_text_pane_t1

0x22c1,	// (0x000022c1) list_set_graphic_pane_t1_ParamLimits

0x22c1,	// (0x000022c1) list_set_graphic_pane_t1

0x43ac,	// (0x000043ac) popup_midp_note_alarm_window_t6_ParamLimits

0x43ac,	// (0x000043ac) popup_midp_note_alarm_window_t6

0x43be,	// (0x000043be) popup_midp_note_alarm_window_t7_ParamLimits

0x43be,	// (0x000043be) popup_midp_note_alarm_window_t7

0x43d0,	// (0x000043d0) popup_midp_note_alarm_window_t8_ParamLimits

0x43d0,	// (0x000043d0) popup_midp_note_alarm_window_t8

0x43e2,	// (0x000043e2) popup_midp_note_alarm_window_t9_ParamLimits

0x43e2,	// (0x000043e2) popup_midp_note_alarm_window_t9

0x43f4,	// (0x000043f4) popup_midp_note_alarm_window_t10_ParamLimits

0x43f4,	// (0x000043f4) popup_midp_note_alarm_window_t10

0x4406,	// (0x00004406) popup_midp_note_alarm_window_t11_ParamLimits

0x4406,	// (0x00004406) popup_midp_note_alarm_window_t11

0x4418,	// (0x00004418) scroll_pane_cp17_ParamLimits

0x4418,	// (0x00004418) scroll_pane_cp17

0x44ce,	// (0x000044ce) volume_small_pane_cp_g1

0x5fd0,	// (0x00005fd0) volume_small_pane_cp_g2

0x5fd9,	// (0x00005fd9) volume_small_pane_cp_g3

0x5fe2,	// (0x00005fe2) volume_small_pane_cp_g4

0x5feb,	// (0x00005feb) volume_small_pane_cp_g5

0x5ff4,	// (0x00005ff4) volume_small_pane_cp_g6

0x5ffd,	// (0x00005ffd) volume_small_pane_cp_g7

0x6006,	// (0x00006006) volume_small_pane_cp_g8

0x600f,	// (0x0000600f) volume_small_pane_cp_g9

0x6018,	// (0x00006018) volume_small_pane_cp_g10

0x267a,	// (0x0000267a) midp_ticker_pane_g1_ParamLimits

0x2686,	// (0x00002686) midp_ticker_pane_g2_ParamLimits

0xab36,	// (0x0000ab36) midp_ticker_pane_g_ParamLimits

0x2692,	// (0x00002692) midp_ticker_pane_t1_ParamLimits

0xc92a,	// (0x0000c92a) aid_fill_nsta_2

0x3c56,	// (0x00003c56) list_form2_midp_pane

0x4fff,	// (0x00004fff) midp_editing_number_pane_ParamLimits

0x500e,	// (0x0000500e) midp_ticker_pane_ParamLimits

0x6021,	// (0x00006021) form2_midp_field_pane

0x6045,	// (0x00006045) scroll_pane_cp51

0x6065,	// (0x00006065) form2_midp_button_pane_ParamLimits

0x6065,	// (0x00006065) form2_midp_button_pane

0x6077,	// (0x00006077) form2_midp_content_pane_ParamLimits

0x6077,	// (0x00006077) form2_midp_content_pane

0x6091,	// (0x00006091) form2_midp_field_choice_group_pane

0x6099,	// (0x00006099) form2_midp_field_pane_g1

0x60a1,	// (0x000060a1) form2_midp_field_pane_g2

0x60a9,	// (0x000060a9) form2_midp_field_pane_g3

0x60b1,	// (0x000060b1) form2_midp_field_pane_g4

0x0003,

0xaec8,	// (0x0000aec8) form2_midp_field_pane_g

0x60b9,	// (0x000060b9) form2_midp_gauge_slider_pane

0x60c1,	// (0x000060c1) form2_midp_gauge_wait_pane

0x60c9,	// (0x000060c9) form2_midp_image_pane_ParamLimits

0x60c9,	// (0x000060c9) form2_midp_image_pane

0x60e4,	// (0x000060e4) form2_midp_label_pane_ParamLimits

0x60e4,	// (0x000060e4) form2_midp_label_pane

0xd536,	// (0x0000d536) form2_midp_label_pane_cp_ParamLimits

0xd536,	// (0x0000d536) form2_midp_label_pane_cp

0x611e,	// (0x0000611e) form2_midp_string_pane_ParamLimits

0x611e,	// (0x0000611e) form2_midp_string_pane

0x6130,	// (0x00006130) form2_midp_text_pane_ParamLimits

0x6130,	// (0x00006130) form2_midp_text_pane

0x6149,	// (0x00006149) form2_midp_time_pane

0x6159,	// (0x00006159) input_focus_pane_cp51_ParamLimits

0x6159,	// (0x00006159) input_focus_pane_cp51

0x6171,	// (0x00006171) form2_midp_label_pane_t1_ParamLimits

0x6171,	// (0x00006171) form2_midp_label_pane_t1

0x61b1,	// (0x000061b1) form2_mdip_text_pane_t1_ParamLimits

0x61b1,	// (0x000061b1) form2_mdip_text_pane_t1

0x61cd,	// (0x000061cd) form2_midp_time_pane_t1

0x61e8,	// (0x000061e8) form2_midp_gauge_slider_pane_t1

0xd557,	// (0x0000d557) form2_midp_gauge_slider_pane_t2

0xd56b,	// (0x0000d56b) form2_midp_gauge_slider_pane_t3

0x0002,

0xef7e,	// (0x0000ef7e) form2_midp_gauge_slider_pane_t

0x621e,	// (0x0000621e) form2_midp_slider_pane

0x622a,	// (0x0000622a) form2_midp_gauge_wait_pane_t1

0x6238,	// (0x00006238) form2_midp_wait_pane_ParamLimits

0x6238,	// (0x00006238) form2_midp_wait_pane

0xd57f,	// (0x0000d57f) list_single_2graphic_pane_cp4_ParamLimits

0xd57f,	// (0x0000d57f) list_single_2graphic_pane_cp4

0xcdb5,	// (0x0000cdb5) list_single_midp_graphic_pane_cp_ParamLimits

0xcdb5,	// (0x0000cdb5) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x6292,	// (0x00006292) list_single_2graphic_pane_g1_cp4

0x55df,	// (0x000055df) list_single_2graphic_pane_g2_cp4

0x629a,	// (0x0000629a) list_single_2graphic_pane_t1_cp4

0x04e9,	// (0x000004e9) list_highlight_pane_cp21

0x62a9,	// (0x000062a9) list_single_midp_graphic_pane_g4_cp

0x62b8,	// (0x000062b8) list_single_midp_graphic_pane_t1_cp

0xd596,	// (0x0000d596) form2_mdip_string_pane_t1_ParamLimits

0xd596,	// (0x0000d596) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1029,	// (0x00001029) list_double_large_graphic_pane_g5_ParamLimits

0x1029,	// (0x00001029) list_double_large_graphic_pane_g5

0x2b0e,	// (0x00002b0e) midp_form_pane_ParamLimits

0x04e9,	// (0x000004e9) main_apps_wheel_pane_ParamLimits

0xc662,	// (0x0000c662) popup_preview_window_ParamLimits

0xc662,	// (0x0000c662) popup_preview_window

0x3064,	// (0x00003064) popup_touch_info_window_ParamLimits

0x3064,	// (0x00003064) popup_touch_info_window

0x3082,	// (0x00003082) popup_touch_menu_window_ParamLimits

0x3082,	// (0x00003082) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x6407,	// (0x00006407) list_touch_menu_pane

0x640f,	// (0x0000640f) list_single_touch_menu_pane_ParamLimits

0x640f,	// (0x0000640f) list_single_touch_menu_pane

0x6423,	// (0x00006423) list_single_touch_menu_pane_t1

0x04e9,	// (0x000004e9) bg_popup_sub_pane_cp7_ParamLimits

0x04e9,	// (0x000004e9) bg_popup_sub_pane_cp7

0x6431,	// (0x00006431) heading_sub_pane

0x6439,	// (0x00006439) list_touch_info_pane_ParamLimits

0x6439,	// (0x00006439) list_touch_info_pane

0x6448,	// (0x00006448) list_single_touch_info_pane_ParamLimits

0x6448,	// (0x00006448) list_single_touch_info_pane

0x645a,	// (0x0000645a) list_single_touch_info_pane_t1

0x6468,	// (0x00006468) list_single_touch_info_pane_t2

0x0001,

0xaedf,	// (0x0000aedf) list_single_touch_info_pane_t

0x25a7,	// (0x000025a7) bg_popup_heading_pane_cp

0x6476,	// (0x00006476) heading_sub_pane_t1

0x37d3,	// (0x000037d3) bg_popup_preview_window_pane_cp_ParamLimits

0x37d3,	// (0x000037d3) bg_popup_preview_window_pane_cp

0x6431,	// (0x00006431) heading_preview_pane

0x6439,	// (0x00006439) list_preview_pane_ParamLimits

0x6439,	// (0x00006439) list_preview_pane

0x6484,	// (0x00006484) popup_preview_window_g1

0x6448,	// (0x00006448) list_single_preview_pane_ParamLimits

0x6448,	// (0x00006448) list_single_preview_pane

0x648c,	// (0x0000648c) list_single_preview_pane_g1

0x6494,	// (0x00006494) list_single_preview_pane_t1

0x645a,	// (0x0000645a) list_single_preview_pane_t2

0x0001,

0xaee4,	// (0x0000aee4) list_single_preview_pane_t

0x64a2,	// (0x000064a2) bg_popup_heading_pane_cp2_ParamLimits

0x64a2,	// (0x000064a2) bg_popup_heading_pane_cp2

0x64b8,	// (0x000064b8) heading_preview_pane_g1

0x64c0,	// (0x000064c0) heading_preview_pane_t1_ParamLimits

0x64c0,	// (0x000064c0) heading_preview_pane_t1

0x067c,	// (0x0000067c) soft_indicator_pane_t1_ParamLimits

0x0d56,	// (0x00000d56) scroll_pane_ParamLimits

0x1b2b,	// (0x00001b2b) scroll_sc2_left_pane

0x1b34,	// (0x00001b34) scroll_sc2_right_pane

0x1b53,	// (0x00001b53) scroll_bg_pane_g1_ParamLimits

0x1b68,	// (0x00001b68) scroll_bg_pane_g2_ParamLimits

0x1b80,	// (0x00001b80) scroll_bg_pane_g3_ParamLimits

0xaac1,	// (0x0000aac1) scroll_bg_pane_g_ParamLimits

0x1b53,	// (0x00001b53) scroll_handle_pane_g1_ParamLimits

0x1ba2,	// (0x00001ba2) scroll_handle_pane_g2_ParamLimits

0x1b80,	// (0x00001b80) scroll_handle_pane_g3_ParamLimits

0xaac8,	// (0x0000aac8) scroll_handle_pane_g_ParamLimits

0x2b3e,	// (0x00002b3e) popup_choice_list_window_ParamLimits

0x2b3e,	// (0x00002b3e) popup_choice_list_window

0x3547,	// (0x00003547) choice_list_pane

0x360f,	// (0x0000360f) cell_toolbar_pane_t1

0x3637,	// (0x00003637) toolbar_button_pane_ParamLimits

0x4a34,	// (0x00004a34) ai_gene_pane_1_t2_ParamLimits

0x4a34,	// (0x00004a34) ai_gene_pane_1_t2

0x0001,

0xace2,	// (0x0000ace2) ai_gene_pane_1_t_ParamLimits

0xace2,	// (0x0000ace2) ai_gene_pane_1_t

0x64dd,	// (0x000064dd) scroll_sc2_left_pane_g1

0x64dd,	// (0x000064dd) scroll_sc2_right_pane_g1

0x2b0e,	// (0x00002b0e) bg_popup_sub_pane_cp10

0x64e7,	// (0x000064e7) list_choice_list_pane

0x64fe,	// (0x000064fe) list_single_choice_list_pane_ParamLimits

0x64fe,	// (0x000064fe) list_single_choice_list_pane

0x1661,	// (0x00001661) list_single_choice_list_pane_g1

0x1669,	// (0x00001669) list_single_choice_list_pane_t1_ParamLimits

0x1669,	// (0x00001669) list_single_choice_list_pane_t1

0x6511,	// (0x00006511) choice_list_pane_g1

0x6519,	// (0x00006519) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x1890,	// (0x00001890) title_pane_stacon_g2_ParamLimits

0x1890,	// (0x00001890) title_pane_stacon_g2

0x0002,

0xaaa7,	// (0x0000aaa7) title_pane_stacon_g_ParamLimits

0xaaa7,	// (0x0000aaa7) title_pane_stacon_g

0x25a7,	// (0x000025a7) cursor_press_pane

0xc321,	// (0x0000c321) popup_fep_hwr_window_ParamLimits

0xc321,	// (0x0000c321) popup_fep_hwr_window

0x2c5c,	// (0x00002c5c) popup_fep_vkb_window_ParamLimits

0x2c5c,	// (0x00002c5c) popup_fep_vkb_window

0x6527,	// (0x00006527) cursor_press_pane_g1

0x0002,

0xef92,	// (0x0000ef92) fep_vkb_side_pane_g_ParamLimits

0x6568,	// (0x00006568) fep_hwr_candidate_pane_ParamLimits

0x6568,	// (0x00006568) fep_hwr_candidate_pane

0x6592,	// (0x00006592) fep_hwr_side_pane_ParamLimits

0x6592,	// (0x00006592) fep_hwr_side_pane

0x65b2,	// (0x000065b2) fep_hwr_top_pane_ParamLimits

0x65b2,	// (0x000065b2) fep_hwr_top_pane

0x65ca,	// (0x000065ca) fep_hwr_write_pane_ParamLimits

0x65ca,	// (0x000065ca) fep_hwr_write_pane

0xef92,	// (0x0000ef92) fep_vkb_side_pane_g

0x6604,	// (0x00006604) fep_hwr_top_pane_g1

0x6616,	// (0x00006616) fep_hwr_top_pane_g2

0x6628,	// (0x00006628) fep_hwr_top_pane_g3

0x0002,

0xaee9,	// (0x0000aee9) fep_hwr_top_pane_g

0x663d,	// (0x0000663d) fep_hwr_top_text_pane

0x1cf5,	// (0x00001cf5) fep_hwr_top_text_pane_g1

0x6715,	// (0x00006715) fep_hwr_top_text_pane_t1

0x6765,	// (0x00006765) fep_hwr_candidate_pane_g1

0x69e5,	// (0x000069e5) fep_vkb_keypad_pane_g3_ParamLimits

0x69e5,	// (0x000069e5) fep_vkb_keypad_pane_g3

0x6a0d,	// (0x00006a0d) fep_vkb_keypad_pane_g4_ParamLimits

0x6a0d,	// (0x00006a0d) fep_vkb_keypad_pane_g4

0x6a7c,	// (0x00006a7c) fep_vkb_bottom_pane_g2_ParamLimits

0x6a7c,	// (0x00006a7c) fep_vkb_bottom_pane_g2

0x0001,

0xaf14,	// (0x0000af14) fep_vkb_bottom_pane_g_ParamLimits

0xaf14,	// (0x0000af14) fep_vkb_bottom_pane_g

0x64dd,	// (0x000064dd) cell_vkb_side_pane_g2

0x0001,

0xaf1e,	// (0x0000af1e) cell_vkb_side_pane_g

0x6b07,	// (0x00006b07) cell_vkb_side_pane_t1

0x6b15,	// (0x00006b15) cell_vkb_side_pane_t1_copy1

0x64dd,	// (0x000064dd) bg_fep_vkb_candidate_pane_g2

0x6c47,	// (0x00006c47) cell_vkb_candidate_pane_ParamLimits

0x6799,	// (0x00006799) aid_size_cell_vkb_ParamLimits

0x6799,	// (0x00006799) aid_size_cell_vkb

0x6c47,	// (0x00006c47) cell_vkb_candidate_pane

0x6c7d,	// (0x00006c7d) bg_popup_fep_shadow_pane_g1

0x6827,	// (0x00006827) fep_vkb_bottom_pane_ParamLimits

0x6827,	// (0x00006827) fep_vkb_bottom_pane

0x6864,	// (0x00006864) fep_vkb_candidate_pane_ParamLimits

0x6864,	// (0x00006864) fep_vkb_candidate_pane

0x6880,	// (0x00006880) fep_vkb_keypad_pane_ParamLimits

0x6880,	// (0x00006880) fep_vkb_keypad_pane

0x68c6,	// (0x000068c6) fep_vkb_side_pane_ParamLimits

0x68c6,	// (0x000068c6) fep_vkb_side_pane

0x6902,	// (0x00006902) fep_vkb_top_pane_ParamLimits

0x6902,	// (0x00006902) fep_vkb_top_pane

0x693e,	// (0x0000693e) fep_vkb_top_pane_g1_ParamLimits

0x693e,	// (0x0000693e) fep_vkb_top_pane_g1

0x694d,	// (0x0000694d) fep_vkb_top_pane_g2_ParamLimits

0x694d,	// (0x0000694d) fep_vkb_top_pane_g2

0x695c,	// (0x0000695c) fep_vkb_top_pane_g3_ParamLimits

0x695c,	// (0x0000695c) fep_vkb_top_pane_g3

0x0003,

0xaf04,	// (0x0000af04) fep_vkb_top_pane_g_ParamLimits

0xaf04,	// (0x0000af04) fep_vkb_top_pane_g

0x697a,	// (0x0000697a) fep_vkb_top_text_pane_ParamLimits

0x697a,	// (0x0000697a) fep_vkb_top_text_pane

0xd67b,	// (0x0000d67b) fep_vkb_side_pane_g1_ParamLimits

0xd67b,	// (0x0000d67b) fep_vkb_side_pane_g1

0x69d4,	// (0x000069d4) grid_vkb_side_pane_ParamLimits

0x69d4,	// (0x000069d4) grid_vkb_side_pane

0x6c85,	// (0x00006c85) bg_popup_fep_shadow_pane_g2

0x6c8e,	// (0x00006c8e) bg_popup_fep_shadow_pane_g3

0x6c96,	// (0x00006c96) bg_popup_fep_shadow_pane_g4

0x6c9f,	// (0x00006c9f) bg_popup_fep_shadow_pane_g5

0x6ca9,	// (0x00006ca9) bg_popup_fep_shadow_pane_g6

0x6cb1,	// (0x00006cb1) bg_popup_fep_shadow_pane_g7

0x14ab,	// (0x000014ab) bg_popup_fep_shadow_pane_g8

0x6a2b,	// (0x00006a2b) grid_vkb_keypad_number_pane_ParamLimits

0x6a2b,	// (0x00006a2b) grid_vkb_keypad_number_pane

0x6a3b,	// (0x00006a3b) grid_vkb_keypad_pane_ParamLimits

0x6a3b,	// (0x00006a3b) grid_vkb_keypad_pane

0x6a61,	// (0x00006a61) fep_vkb_bottom_pane_g1_ParamLimits

0x6a61,	// (0x00006a61) fep_vkb_bottom_pane_g1

0x6a8a,	// (0x00006a8a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6a8a,	// (0x00006a8a) grid_vkb_keypad_bottom_left_pane

0x6a9f,	// (0x00006a9f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6a9f,	// (0x00006a9f) grid_vkb_keypad_bottom_right_pane

0x6ab4,	// (0x00006ab4) fep_vkb_top_text_pane_g1

0xd6c2,	// (0x0000d6c2) fep_vkb_top_text_pane_t1

0xd6d4,	// (0x0000d6d4) cell_vkb_side_pane_ParamLimits

0xd6d4,	// (0x0000d6d4) cell_vkb_side_pane

0x64dd,	// (0x000064dd) cell_vkb_side_pane_g1

0x6b23,	// (0x00006b23) cell_vkb_keypad_pane_ParamLimits

0x6b23,	// (0x00006b23) cell_vkb_keypad_pane

0x6b9e,	// (0x00006b9e) cell_vkb_keypad_pane_g1

0x0008,

0xaf31,	// (0x0000af31) bg_popup_fep_shadow_pane_g

0x64dd,	// (0x000064dd) cell_hwr_side_pane_g1

0x64dd,	// (0x000064dd) cell_hwr_side_pane_g2

0x6ba8,	// (0x00006ba8) cell_vkb_keypad_pane_t1

0xd6ea,	// (0x0000d6ea) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd6ea,	// (0x0000d6ea) cell_vkb_keypad_bottom_left_pane

0xd6ff,	// (0x0000d6ff) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd6ff,	// (0x0000d6ff) cell_vkb_keypad_bottom_right_pane

0x64dd,	// (0x000064dd) cell_vkb_keypad_bottom_left_pane_g1

0x64dd,	// (0x000064dd) cell_vkb_keypad_bottom_right_pane_g1

0x6c0c,	// (0x00006c0c) cell_vkb_keypad_number_pane_ParamLimits

0x6c0c,	// (0x00006c0c) cell_vkb_keypad_number_pane

0x6c2b,	// (0x00006c2b) cell_vkb_keypad_number_pane_g1

0x6c35,	// (0x00006c35) cell_vkb_keypad_number_pane_g2

0x6c3e,	// (0x00006c3e) cell_vkb_keypad_number_pane_g3

0x0002,

0xaf23,	// (0x0000af23) cell_vkb_keypad_number_pane_g

0x6ba8,	// (0x00006ba8) cell_vkb_keypad_number_pane_t1

0x6c64,	// (0x00006c64) fep_vkb_candidate_pane_g1

0x0001,

0xaf1e,	// (0x0000af1e) cell_hwr_side_pane_g

0x6cc3,	// (0x00006cc3) cell_hwr_side_pane_t1

0x6cd1,	// (0x00006cd1) cell_hwr_side_pane_t1_copy1

0x696c,	// (0x0000696c) cell_hwr_candidate_pane_g1

0x6d21,	// (0x00006d21) cell_hwr_candidate_pane_t1

0x64dd,	// (0x000064dd) cell_vkb_candidate_pane_g2

0x6d75,	// (0x00006d75) cell_vkb_candidate_pane_t1

0x652f,	// (0x0000652f) bg_popup_fep_shadow_pane_ParamLimits

0x652f,	// (0x0000652f) bg_popup_fep_shadow_pane

0x65e4,	// (0x000065e4) bg_fep_hwr_top_pane_g4

0x6652,	// (0x00006652) bg_hwr_side_pane_g1_ParamLimits

0x6652,	// (0x00006652) bg_hwr_side_pane_g1

0xd634,	// (0x0000d634) cell_hwr_side_pane_ParamLimits

0xd634,	// (0x0000d634) cell_hwr_side_pane

0x66c0,	// (0x000066c0) fep_hwr_write_pane_g1_ParamLimits

0x66c0,	// (0x000066c0) fep_hwr_write_pane_g1

0x66cd,	// (0x000066cd) fep_hwr_write_pane_g2_ParamLimits

0x66cd,	// (0x000066cd) fep_hwr_write_pane_g2

0x66da,	// (0x000066da) fep_hwr_write_pane_g3_ParamLimits

0x66da,	// (0x000066da) fep_hwr_write_pane_g3

0xd654,	// (0x0000d654) fep_hwr_write_pane_g4_ParamLimits

0xd654,	// (0x0000d654) fep_hwr_write_pane_g4

0x0005,

0xef85,	// (0x0000ef85) fep_hwr_write_pane_g_ParamLimits

0xef85,	// (0x0000ef85) fep_hwr_write_pane_g

0x65e4,	// (0x000065e4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65e4,	// (0x000065e4) bg_fep_hwr_candidate_pane_g2

0x6723,	// (0x00006723) cell_hwr_candidate_pane_ParamLimits

0x6723,	// (0x00006723) cell_hwr_candidate_pane

0x6765,	// (0x00006765) fep_hwr_candidate_pane_g1_ParamLimits

0x67c7,	// (0x000067c7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x67c7,	// (0x000067c7) bg_popup_fep_shadow_pane_cp2

0x696c,	// (0x0000696c) fep_vkb_top_pane_g4_ParamLimits

0x696c,	// (0x0000696c) fep_vkb_top_pane_g4

0x69b2,	// (0x000069b2) fep_vkb_side_pane_g2_ParamLimits

0x69b2,	// (0x000069b2) fep_vkb_side_pane_g2

0xbb01,	// (0x0000bb01) list_setting_pane_t4_ParamLimits

0xbb01,	// (0x0000bb01) list_setting_pane_t4

0xbb7b,	// (0x0000bb7b) list_setting_number_pane_t5_ParamLimits

0xbb7b,	// (0x0000bb7b) list_setting_number_pane_t5

0xbea5,	// (0x0000bea5) list_double_heading_pane_cp2_ParamLimits

0xbea5,	// (0x0000bea5) list_double_heading_pane_cp2

0x1375,	// (0x00001375) list_double_heading_pane_g1_cp2_ParamLimits

0x1375,	// (0x00001375) list_double_heading_pane_g1_cp2

0x1381,	// (0x00001381) list_double_heading_pane_g2_cp2_ParamLimits

0x1381,	// (0x00001381) list_double_heading_pane_g2_cp2

0x6d83,	// (0x00006d83) list_double_heading_pane_t1_cp2_ParamLimits

0x6d83,	// (0x00006d83) list_double_heading_pane_t1_cp2

0x6d99,	// (0x00006d99) list_double_heading_pane_t2_cp2_ParamLimits

0x6d99,	// (0x00006d99) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0309,	// (0x00000309) popup_preview_fixed_window

0x0819,	// (0x00000819) bg_popup_preview_window_pane_cp02

0x6dab,	// (0x00006dab) list_preview_fixed_pane

0x6df1,	// (0x00006df1) list_empty_pane_fp_ParamLimits

0x6df1,	// (0x00006df1) list_empty_pane_fp

0x6df1,	// (0x00006df1) list_single_cale_day_pane_fp_ParamLimits

0x6df1,	// (0x00006df1) list_single_cale_day_pane_fp

0x6df1,	// (0x00006df1) list_single_graphic_heading_pane_fp_ParamLimits

0x6df1,	// (0x00006df1) list_single_graphic_heading_pane_fp

0x6df1,	// (0x00006df1) list_single_graphic_pane_fp_ParamLimits

0x6df1,	// (0x00006df1) list_single_graphic_pane_fp

0x6df1,	// (0x00006df1) list_single_heading_pane_fp_ParamLimits

0x6df1,	// (0x00006df1) list_single_heading_pane_fp

0x6df1,	// (0x00006df1) list_single_pane_fp_ParamLimits

0x6df1,	// (0x00006df1) list_single_pane_fp

0x6e08,	// (0x00006e08) list_single_pane_fp_g1_ParamLimits

0x6e08,	// (0x00006e08) list_single_pane_fp_g1

0x1375,	// (0x00001375) list_single_pane_fp_g2_ParamLimits

0x1375,	// (0x00001375) list_single_pane_fp_g2

0x1381,	// (0x00001381) list_single_pane_fp_g3_ParamLimits

0x1381,	// (0x00001381) list_single_pane_fp_g3

0x6e14,	// (0x00006e14) list_single_pane_fp_g4_ParamLimits

0x6e14,	// (0x00006e14) list_single_pane_fp_g4

0x0003,

0xaf52,	// (0x0000af52) list_single_pane_fp_g_ParamLimits

0xaf52,	// (0x0000af52) list_single_pane_fp_g

0x6e20,	// (0x00006e20) list_single_pane_fp_t1_ParamLimits

0x6e20,	// (0x00006e20) list_single_pane_fp_t1

0x6e37,	// (0x00006e37) list_single_graphic_pane_fp_g1_ParamLimits

0x6e37,	// (0x00006e37) list_single_graphic_pane_fp_g1

0x6e08,	// (0x00006e08) list_single_graphic_pane_fp_g2_ParamLimits

0x6e08,	// (0x00006e08) list_single_graphic_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_pane_fp_g4

0x6e14,	// (0x00006e14) list_single_graphic_pane_fp_g5_ParamLimits

0x6e14,	// (0x00006e14) list_single_graphic_pane_fp_g5

0x0004,

0xaf5b,	// (0x0000af5b) list_single_graphic_pane_fp_g_ParamLimits

0xaf5b,	// (0x0000af5b) list_single_graphic_pane_fp_g

0x6e43,	// (0x00006e43) list_single_graphic_pane_fp_t1_ParamLimits

0x6e43,	// (0x00006e43) list_single_graphic_pane_fp_t1

0x6e37,	// (0x00006e37) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6e37,	// (0x00006e37) list_single_graphic_heading_pane_fp_g1

0x6e08,	// (0x00006e08) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6e08,	// (0x00006e08) list_single_graphic_heading_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_heading_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_heading_pane_fp_g4

0x6e14,	// (0x00006e14) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6e14,	// (0x00006e14) list_single_graphic_heading_pane_fp_g5

0x0004,

0xaf5b,	// (0x0000af5b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xaf5b,	// (0x0000af5b) list_single_graphic_heading_pane_fp_g

0x6e59,	// (0x00006e59) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6e59,	// (0x00006e59) list_single_graphic_heading_pane_fp_t1

0x6e6f,	// (0x00006e6f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6e6f,	// (0x00006e6f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xaf66,	// (0x0000af66) list_single_graphic_heading_pane_fp_t_ParamLimits

0xaf66,	// (0x0000af66) list_single_graphic_heading_pane_fp_t

0x6e81,	// (0x00006e81) list_single_cale_day_pane_fp_g1_ParamLimits

0x6e81,	// (0x00006e81) list_single_cale_day_pane_fp_g1

0x6eb9,	// (0x00006eb9) list_single_cale_day_pane_fp_g2_ParamLimits

0x6eb9,	// (0x00006eb9) list_single_cale_day_pane_fp_g2

0x6ec5,	// (0x00006ec5) list_single_cale_day_pane_fp_g3_ParamLimits

0x6ec5,	// (0x00006ec5) list_single_cale_day_pane_fp_g3

0x6eed,	// (0x00006eed) list_single_cale_day_pane_fp_g4_ParamLimits

0x6eed,	// (0x00006eed) list_single_cale_day_pane_fp_g4

0x6f11,	// (0x00006f11) list_single_cale_day_pane_fp_g5_ParamLimits

0x6f11,	// (0x00006f11) list_single_cale_day_pane_fp_g5

0x0004,

0xaf6b,	// (0x0000af6b) list_single_cale_day_pane_fp_g_ParamLimits

0xaf6b,	// (0x0000af6b) list_single_cale_day_pane_fp_g

0x6f35,	// (0x00006f35) list_single_cale_day_pane_fp_t1_ParamLimits

0x6f35,	// (0x00006f35) list_single_cale_day_pane_fp_t1

0x6f5b,	// (0x00006f5b) list_single_cale_day_pane_fp_t2_ParamLimits

0x6f5b,	// (0x00006f5b) list_single_cale_day_pane_fp_t2

0x6f74,	// (0x00006f74) list_single_cale_day_pane_fp_t3_ParamLimits

0x6f74,	// (0x00006f74) list_single_cale_day_pane_fp_t3

0x0002,

0xaf76,	// (0x0000af76) list_single_cale_day_pane_fp_t_ParamLimits

0xaf76,	// (0x0000af76) list_single_cale_day_pane_fp_t

0x6e08,	// (0x00006e08) list_empty_pane_fp_g1_ParamLimits

0x6e08,	// (0x00006e08) list_empty_pane_fp_g1

0x6f8d,	// (0x00006f8d) list_empty_pane_fp_t1

0x6f9b,	// (0x00006f9b) list_empty_pane_fp_t2

0x0001,

0xaf7d,	// (0x0000af7d) list_empty_pane_fp_t

0x6e08,	// (0x00006e08) list_single_heading_pane_fp_g1_ParamLimits

0x6e08,	// (0x00006e08) list_single_heading_pane_fp_g1

0x1375,	// (0x00001375) list_single_heading_pane_fp_g2_ParamLimits

0x1375,	// (0x00001375) list_single_heading_pane_fp_g2

0x1381,	// (0x00001381) list_single_heading_pane_fp_g3_ParamLimits

0x1381,	// (0x00001381) list_single_heading_pane_fp_g3

0x0002,

0xaf82,	// (0x0000af82) list_single_heading_pane_fp_g_ParamLimits

0xaf82,	// (0x0000af82) list_single_heading_pane_fp_g

0x6fa9,	// (0x00006fa9) list_single_heading_pane_fp_t1_ParamLimits

0x6fa9,	// (0x00006fa9) list_single_heading_pane_fp_t1

0x6fbb,	// (0x00006fbb) list_single_heading_pane_fp_t2_ParamLimits

0x6fbb,	// (0x00006fbb) list_single_heading_pane_fp_t2

0x0001,

0xaf89,	// (0x0000af89) list_single_heading_pane_fp_t_ParamLimits

0xaf89,	// (0x0000af89) list_single_heading_pane_fp_t

0x16d7,	// (0x000016d7) aid_size_cell_fast

0x0789,	// (0x00000789) soft_indicator_pane_cp1_t1

0x1714,	// (0x00001714) cell_app_pane_cp2_ParamLimits

0x1714,	// (0x00001714) cell_app_pane_cp2

0x6551,	// (0x00006551) fep_hwr_candidate_drop_down_list_pane

0x677f,	// (0x0000677f) fep_hwr_candidate_pane_g3_ParamLimits

0x677f,	// (0x0000677f) fep_hwr_candidate_pane_g3

0x678c,	// (0x0000678c) fep_hwr_candidate_pane_g4_ParamLimits

0x678c,	// (0x0000678c) fep_hwr_candidate_pane_g4

0x0002,

0xaefd,	// (0x0000aefd) fep_hwr_candidate_pane_g_ParamLimits

0xaefd,	// (0x0000aefd) fep_hwr_candidate_pane_g

0x6853,	// (0x00006853) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6853,	// (0x00006853) fep_vkb_candidate_drop_down_list_pane

0x6c6c,	// (0x00006c6c) fep_vkb_candidate_pane_g3

0x6c74,	// (0x00006c74) fep_vkb_candidate_pane_g4

0x0002,

0xaf2a,	// (0x0000af2a) fep_vkb_candidate_pane_g

0x696c,	// (0x0000696c) cell_hwr_candidate_pane_g1_ParamLimits

0x6cdf,	// (0x00006cdf) cell_hwr_candidate_pane_g3_ParamLimits

0x6cdf,	// (0x00006cdf) cell_hwr_candidate_pane_g3

0x6d00,	// (0x00006d00) cell_hwr_candidate_pane_g4_ParamLimits

0x6d00,	// (0x00006d00) cell_hwr_candidate_pane_g4

0x0002,

0xaf44,	// (0x0000af44) cell_hwr_candidate_pane_g_ParamLimits

0xaf44,	// (0x0000af44) cell_hwr_candidate_pane_g

0x6d3f,	// (0x00006d3f) cell_vkb_candidate_pane_g3_ParamLimits

0x6d3f,	// (0x00006d3f) cell_vkb_candidate_pane_g3

0x6d5a,	// (0x00006d5a) cell_vkb_candidate_pane_g4_ParamLimits

0x6d5a,	// (0x00006d5a) cell_vkb_candidate_pane_g4

0x6fd1,	// (0x00006fd1) cell_app_pane_cp2_g1_ParamLimits

0x6fd1,	// (0x00006fd1) cell_app_pane_cp2_g1

0x6fef,	// (0x00006fef) cell_app_pane_cp2_g2_ParamLimits

0x6fef,	// (0x00006fef) cell_app_pane_cp2_g2

0x0001,

0xaf8e,	// (0x0000af8e) cell_app_pane_cp2_g_ParamLimits

0xaf8e,	// (0x0000af8e) cell_app_pane_cp2_g

0x6ffb,	// (0x00006ffb) cell_app_pane_cp2_t1_ParamLimits

0x6ffb,	// (0x00006ffb) cell_app_pane_cp2_t1

0x134f,	// (0x0000134f) grid_highlight_pane_cp1_ParamLimits

0x134f,	// (0x0000134f) grid_highlight_pane_cp1

0x700d,	// (0x0000700d) cell_hwr_candidate_pane_cp1_ParamLimits

0x700d,	// (0x0000700d) cell_hwr_candidate_pane_cp1

0x696c,	// (0x0000696c) fep_hwr_candidate_drop_down_list_pane_g1

0x702c,	// (0x0000702c) fep_hwr_candidate_drop_down_list_pane_g2

0x7039,	// (0x00007039) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xaf93,	// (0x0000af93) fep_hwr_candidate_drop_down_list_pane_g

0x7046,	// (0x00007046) fep_hwr_candidate_drop_down_list_scroll_pane

0x704f,	// (0x0000704f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x704f,	// (0x0000704f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x705c,	// (0x0000705c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x705c,	// (0x0000705c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7069,	// (0x00007069) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7069,	// (0x00007069) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6d3f,	// (0x00006d3f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d3f,	// (0x00006d3f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d5a,	// (0x00006d5a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d5a,	// (0x00006d5a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7076,	// (0x00007076) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7076,	// (0x00007076) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7091,	// (0x00007091) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7091,	// (0x00007091) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x70ac,	// (0x000070ac) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x70ac,	// (0x000070ac) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xaf9a,	// (0x0000af9a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xaf9a,	// (0x0000af9a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x70c7,	// (0x000070c7) cell_vkb_candidate_pane_cp1_ParamLimits

0x70c7,	// (0x000070c7) cell_vkb_candidate_pane_cp1

0x696c,	// (0x0000696c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x696c,	// (0x0000696c) fep_vkb_candidate_drop_down_list_pane_g1

0x702c,	// (0x0000702c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x702c,	// (0x0000702c) fep_vkb_candidate_drop_down_list_pane_g2

0x7039,	// (0x00007039) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7039,	// (0x00007039) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xaf93,	// (0x0000af93) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xaf93,	// (0x0000af93) fep_vkb_candidate_drop_down_list_pane_g

0x70e7,	// (0x000070e7) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x70e7,	// (0x000070e7) fep_vkb_candidate_drop_down_list_scroll_pane

0x70f4,	// (0x000070f4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70f4,	// (0x000070f4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7101,	// (0x00007101) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7101,	// (0x00007101) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x710d,	// (0x0000710d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x710d,	// (0x0000710d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6cdf,	// (0x00006cdf) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6cdf,	// (0x00006cdf) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6d00,	// (0x00006d00) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d00,	// (0x00006d00) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7119,	// (0x00007119) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7119,	// (0x00007119) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x713a,	// (0x0000713a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x713a,	// (0x0000713a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x70ac,	// (0x000070ac) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x70ac,	// (0x000070ac) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xafab,	// (0x0000afab) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xafab,	// (0x0000afab) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb498,	// (0x0000b498) title_pane_g1_ParamLimits

0xb4ab,	// (0x0000b4ab) title_pane_g2_ParamLimits

0xedc4,	// (0x0000edc4) title_pane_g_ParamLimits

0x1ce5,	// (0x00001ce5) aid_call2_pane

0x1ced,	// (0x00001ced) aid_call_pane

0x1cf5,	// (0x00001cf5) popup_clock_analogue_window_g1

0x1cf5,	// (0x00001cf5) popup_clock_analogue_window_g2

0x1cfd,	// (0x00001cfd) popup_clock_analogue_window_g3

0x1d06,	// (0x00001d06) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xaad6,	// (0x0000aad6) popup_clock_analogue_window_g

0x1d0e,	// (0x00001d0e) popup_clock_analogue_window_t1

0x1d95,	// (0x00001d95) clock_digital_number_pane_ParamLimits

0x1d95,	// (0x00001d95) clock_digital_number_pane

0x1da1,	// (0x00001da1) clock_digital_number_pane_cp02_ParamLimits

0x1da1,	// (0x00001da1) clock_digital_number_pane_cp02

0x1dad,	// (0x00001dad) clock_digital_number_pane_cp03_ParamLimits

0x1dad,	// (0x00001dad) clock_digital_number_pane_cp03

0x1db9,	// (0x00001db9) clock_digital_number_pane_cp04_ParamLimits

0x1db9,	// (0x00001db9) clock_digital_number_pane_cp04

0x1dc5,	// (0x00001dc5) clock_digital_separator_pane_ParamLimits

0x1dc5,	// (0x00001dc5) clock_digital_separator_pane

0x1dd1,	// (0x00001dd1) popup_clock_digital_window_t1_ParamLimits

0x1dd1,	// (0x00001dd1) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xaae1,	// (0x0000aae1) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xaae1,	// (0x0000aae1) clock_digital_separator_pane_g

0xc906,	// (0x0000c906) aid_fill_nsta_ParamLimits

0xca3c,	// (0x0000ca3c) indicator_nsta_pane_ParamLimits

0x3378,	// (0x00003378) popup_clock_analogue_window

0x3378,	// (0x00003378) popup_clock_digital_window

0x1698,	// (0x00001698) grid_indicator_nsta_pane_ParamLimits

0x5dea,	// (0x00005dea) clock_nsta_pane_t2

0x0001,

0xae7d,	// (0x0000ae7d) clock_nsta_pane_t

0x1ad0,	// (0x00001ad0) aid_size_max_handle

0xbe9c,	// (0x0000be9c) aid_size_min_handle

0x25a7,	// (0x000025a7) editor_scroll_pane

0x715b,	// (0x0000715b) ex_editor_pane

0x1646,	// (0x00001646) scroll_pane_cp13

0x0d82,	// (0x00000d82) scroll_pane_cp14

0x1d43,	// (0x00001d43) scroll_pane_cp36

0xbeb6,	// (0x0000beb6) list_single_graphic_hl_pane_cp2_ParamLimits

0xbeb6,	// (0x0000beb6) list_single_graphic_hl_pane_cp2

0xd2f0,	// (0x0000d2f0) list_single_graphic_hl_pane_ParamLimits

0xd2f0,	// (0x0000d2f0) list_single_graphic_hl_pane

0x7163,	// (0x00007163) aid_size_min_hl_cp1

0x716c,	// (0x0000716c) list_highlight_pane_cp34_ParamLimits

0x716c,	// (0x0000716c) list_highlight_pane_cp34

0x717d,	// (0x0000717d) list_single_graphic_hl_pane_g1_ParamLimits

0x717d,	// (0x0000717d) list_single_graphic_hl_pane_g1

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g2_ParamLimits

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g2

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g3_ParamLimits

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g3

0x0d96,	// (0x00000d96) list_single_graphic_hl_pane_g4_ParamLimits

0x0d96,	// (0x00000d96) list_single_graphic_hl_pane_g4

0xd71a,	// (0x0000d71a) list_single_graphic_hl_pane_g5_ParamLimits

0xd71a,	// (0x0000d71a) list_single_graphic_hl_pane_g5

0x0004,

0xef9e,	// (0x0000ef9e) list_single_graphic_hl_pane_g_ParamLimits

0xef9e,	// (0x0000ef9e) list_single_graphic_hl_pane_g

0xd72e,	// (0x0000d72e) list_single_graphic_hl_pane_t1_ParamLimits

0xd72e,	// (0x0000d72e) list_single_graphic_hl_pane_t1

0x71aa,	// (0x000071aa) aid_size_min_hl_cp2

0x71b3,	// (0x000071b3) list_highlight_pane_cp34_cp2_ParamLimits

0x71b3,	// (0x000071b3) list_highlight_pane_cp34_cp2

0x717d,	// (0x0000717d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x717d,	// (0x0000717d) list_single_graphic_hl_pane_g1_cp2

0x71c0,	// (0x000071c0) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x71c0,	// (0x000071c0) list_single_graphic_hl_pane_g2_cp2

0x71cc,	// (0x000071cc) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x71cc,	// (0x000071cc) list_single_graphic_hl_pane_g3_cp2

0x24de,	// (0x000024de) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x24de,	// (0x000024de) list_single_graphic_hl_pane_g4_cp2

0x7196,	// (0x00007196) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7196,	// (0x00007196) list_single_graphic_hl_pane_g5_cp2

0xc110,	// (0x0000c110) control_pane_g4_ParamLimits

0xc110,	// (0x0000c110) control_pane_g4

0x2b0e,	// (0x00002b0e) bg_popup_sub_pane_cp10_ParamLimits

0x64e7,	// (0x000064e7) list_choice_list_pane_ParamLimits

0x64f6,	// (0x000064f6) scroll_pane_cp23

0x0819,	// (0x00000819) bg_popup_preview_window_pane_cp02_ParamLimits

0x6dab,	// (0x00006dab) list_preview_fixed_pane_ParamLimits

0x6dc1,	// (0x00006dc1) list_preview_fixed_pane_cp_ParamLimits

0x6dc1,	// (0x00006dc1) list_preview_fixed_pane_cp

0x6dcd,	// (0x00006dcd) popup_preview_fixed_window_g1_ParamLimits

0x6dcd,	// (0x00006dcd) popup_preview_fixed_window_g1

0x6dd9,	// (0x00006dd9) popup_preview_fixed_window_g2_ParamLimits

0x6dd9,	// (0x00006dd9) popup_preview_fixed_window_g2

0x0002,

0xaf4b,	// (0x0000af4b) popup_preview_fixed_window_g_ParamLimits

0xaf4b,	// (0x0000af4b) popup_preview_fixed_window_g

0x1975,	// (0x00001975) aid_navi_side_left_pane_ParamLimits

0x198a,	// (0x0000198a) aid_navi_side_right_pane_ParamLimits

0x19a2,	// (0x000019a2) navi_icon_pane_stacon_ParamLimits

0x19b6,	// (0x000019b6) navi_navi_pane_stacon_ParamLimits

0x19a2,	// (0x000019a2) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x71f0,	// (0x000071f0) listscroll_text_info_pane

0x71f8,	// (0x000071f8) list_text_info_pane_ParamLimits

0x71f8,	// (0x000071f8) list_text_info_pane

0x7207,	// (0x00007207) scroll_pane_cp24_ParamLimits

0x7207,	// (0x00007207) scroll_pane_cp24

0xd744,	// (0x0000d744) list_text_info_pane_t1_ParamLimits

0xd744,	// (0x0000d744) list_text_info_pane_t1

0xc296,	// (0x0000c296) popup_fast_swap2_window_ParamLimits

0xc296,	// (0x0000c296) popup_fast_swap2_window

0x725e,	// (0x0000725e) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c82,	// (0x00003c82) heading_pane_cp2

0x0a59,	// (0x00000a59) listscroll_fast2_pane

0x7268,	// (0x00007268) grid_fast2_pane

0x7272,	// (0x00007272) listscroll_fast2_pane_g1

0x727a,	// (0x0000727a) listscroll_fast2_pane_g2

0x0001,

0xafc7,	// (0x0000afc7) listscroll_fast2_pane_g

0x1646,	// (0x00001646) scroll_pane_cp26

0x7284,	// (0x00007284) cell_fast2_pane_ParamLimits

0x7284,	// (0x00007284) cell_fast2_pane

0x7299,	// (0x00007299) cell_fast2_pane_g1

0x72a2,	// (0x000072a2) cell_fast2_pane_g2

0x72ab,	// (0x000072ab) cell_fast2_pane_g3

0x0002,

0xafcc,	// (0x0000afcc) cell_fast2_pane_g

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp9

0x0b54,	// (0x00000b54) main_eswt_pane_ParamLimits

0x0b54,	// (0x00000b54) main_eswt_pane

0x721c,	// (0x0000721c) list_single_text_info_pane

0x72b3,	// (0x000072b3) eswt_ctrl_button_pane

0x72b3,	// (0x000072b3) eswt_ctrl_canvas_pane

0x72bb,	// (0x000072bb) eswt_ctrl_combo_pane

0x72b3,	// (0x000072b3) eswt_ctrl_default_pane

0x72b3,	// (0x000072b3) eswt_ctrl_label_pane

0x72c3,	// (0x000072c3) eswt_ctrl_wait_pane

0x72cb,	// (0x000072cb) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x72eb,	// (0x000072eb) popup_eswt_tasktip_window_ParamLimits

0x72eb,	// (0x000072eb) popup_eswt_tasktip_window

0x37d3,	// (0x000037d3) bg_popup_window_pane_cp18

0x72fc,	// (0x000072fc) eswt_control_pane_g1_ParamLimits

0x72fc,	// (0x000072fc) eswt_control_pane_g1

0x7309,	// (0x00007309) eswt_control_pane_g2_ParamLimits

0x7309,	// (0x00007309) eswt_control_pane_g2

0x7316,	// (0x00007316) eswt_control_pane_g3_ParamLimits

0x7316,	// (0x00007316) eswt_control_pane_g3

0x7323,	// (0x00007323) eswt_control_pane_g4_ParamLimits

0x7323,	// (0x00007323) eswt_control_pane_g4

0x0003,

0xafd3,	// (0x0000afd3) eswt_control_pane_g_ParamLimits

0xafd3,	// (0x0000afd3) eswt_control_pane_g

0x134f,	// (0x0000134f) bg_button_pane_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane

0x0b54,	// (0x00000b54) common_borders_pane_copy2_ParamLimits

0x0b54,	// (0x00000b54) common_borders_pane_copy2

0x7330,	// (0x00007330) control_button_pane_g1_ParamLimits

0x7330,	// (0x00007330) control_button_pane_g1

0x733c,	// (0x0000733c) control_button_pane_g2_ParamLimits

0x733c,	// (0x0000733c) control_button_pane_g2

0x7348,	// (0x00007348) control_button_pane_g3_ParamLimits

0x7348,	// (0x00007348) control_button_pane_g3

0x0002,

0xafdc,	// (0x0000afdc) control_button_pane_g_ParamLimits

0xafdc,	// (0x0000afdc) control_button_pane_g

0x735c,	// (0x0000735c) control_button_pane_t1

0x736a,	// (0x0000736a) control_button_pane_t2

0x0001,

0xafe3,	// (0x0000afe3) control_button_pane_t

0x3643,	// (0x00003643) bg_button_pane_g1

0x364b,	// (0x0000364b) bg_button_pane_g2

0x3653,	// (0x00003653) bg_button_pane_g3

0x365b,	// (0x0000365b) bg_button_pane_g4

0x3663,	// (0x00003663) bg_button_pane_g5

0x366b,	// (0x0000366b) bg_button_pane_g6

0x3673,	// (0x00003673) bg_button_pane_g7

0x367b,	// (0x0000367b) bg_button_pane_g8

0x3683,	// (0x00003683) bg_button_pane_g9

0x0008,

0xac36,	// (0x0000ac36) bg_button_pane_g

0x64a2,	// (0x000064a2) common_borders_pane_ParamLimits

0x64a2,	// (0x000064a2) common_borders_pane

0x72fc,	// (0x000072fc) eswt_control_pane_g1_copy1_ParamLimits

0x72fc,	// (0x000072fc) eswt_control_pane_g1_copy1

0x7309,	// (0x00007309) eswt_control_pane_g2_copy1_ParamLimits

0x7309,	// (0x00007309) eswt_control_pane_g2_copy1

0x7316,	// (0x00007316) eswt_control_pane_g3_copy1_ParamLimits

0x7316,	// (0x00007316) eswt_control_pane_g3_copy1

0x7323,	// (0x00007323) eswt_control_pane_g4_copy1_ParamLimits

0x7323,	// (0x00007323) eswt_control_pane_g4_copy1

0x64dd,	// (0x000064dd) bg_eswt_ctrl_canvas_pane_g1

0x64a2,	// (0x000064a2) common_borders_pane_cp2_ParamLimits

0x64a2,	// (0x000064a2) common_borders_pane_cp2

0x64a2,	// (0x000064a2) common_borders_pane_cp3_ParamLimits

0x64a2,	// (0x000064a2) common_borders_pane_cp3

0x7378,	// (0x00007378) separator_horizontal_pane

0x7380,	// (0x00007380) separator_vertical_pane

0x72fc,	// (0x000072fc) eswt_control_pane_g1_copy2_ParamLimits

0x72fc,	// (0x000072fc) eswt_control_pane_g1_copy2

0x7309,	// (0x00007309) eswt_control_pane_g2_copy2_ParamLimits

0x7309,	// (0x00007309) eswt_control_pane_g2_copy2

0x7316,	// (0x00007316) eswt_control_pane_g3_copy2_ParamLimits

0x7316,	// (0x00007316) eswt_control_pane_g3_copy2

0x7323,	// (0x00007323) eswt_control_pane_g4_copy2_ParamLimits

0x7323,	// (0x00007323) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x7389,	// (0x00007389) separator_horizontal_pane_g1

0x7392,	// (0x00007392) separator_horizontal_pane_g2

0x739b,	// (0x0000739b) separator_horizontal_pane_g3

0x0002,

0xafe8,	// (0x0000afe8) separator_horizontal_pane_g

0x72fc,	// (0x000072fc) eswt_control_pane_g1_copy3_ParamLimits

0x72fc,	// (0x000072fc) eswt_control_pane_g1_copy3

0x7309,	// (0x00007309) eswt_control_pane_g2_copy3_ParamLimits

0x7309,	// (0x00007309) eswt_control_pane_g2_copy3

0x7316,	// (0x00007316) eswt_control_pane_g3_copy3_ParamLimits

0x7316,	// (0x00007316) eswt_control_pane_g3_copy3

0x7323,	// (0x00007323) eswt_control_pane_g4_copy3_ParamLimits

0x7323,	// (0x00007323) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x73a4,	// (0x000073a4) separator_vertical_pane_g1

0x73ad,	// (0x000073ad) separator_vertical_pane_g2

0x73b6,	// (0x000073b6) separator_vertical_pane_g3

0x0002,

0xafef,	// (0x0000afef) separator_vertical_pane_g

0x72fc,	// (0x000072fc) eswt_control_pane_g1_copy4_ParamLimits

0x72fc,	// (0x000072fc) eswt_control_pane_g1_copy4

0x7309,	// (0x00007309) eswt_control_pane_g2_copy4_ParamLimits

0x7309,	// (0x00007309) eswt_control_pane_g2_copy4

0x7316,	// (0x00007316) eswt_control_pane_g3_copy4_ParamLimits

0x7316,	// (0x00007316) eswt_control_pane_g3_copy4

0x7323,	// (0x00007323) eswt_control_pane_g4_copy4_ParamLimits

0x7323,	// (0x00007323) eswt_control_pane_g4_copy4

0xd762,	// (0x0000d762) eswt_ctrl_combo_button_pane

0xd76a,	// (0x0000d76a) eswt_ctrl_input_pane

0xd772,	// (0x0000d772) popup_choice_list_window_cp70

0xd77a,	// (0x0000d77a) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x64a2,	// (0x000064a2) bg_button_pane_cp70_ParamLimits

0x64a2,	// (0x000064a2) bg_button_pane_cp70

0xd788,	// (0x0000d788) eswt_ctrl_combo_button_pane_g1

0x73ed,	// (0x000073ed) wait_bar_pane_cp70

0x37d3,	// (0x000037d3) bg_popup_window_pane_cp70_ParamLimits

0x37d3,	// (0x000037d3) bg_popup_window_pane_cp70

0x73f5,	// (0x000073f5) popup_eswt_tasktip_window_t1

0x740b,	// (0x0000740b) wait_bar_pane_cp71_ParamLimits

0x740b,	// (0x0000740b) wait_bar_pane_cp71

0x7417,	// (0x00007417) grid_eswt_app_pane

0x1b34,	// (0x00001b34) scroll_pane_cp70

0xd790,	// (0x0000d790) cell_eswt_app_pane_ParamLimits

0xd790,	// (0x0000d790) cell_eswt_app_pane

0xd7ba,	// (0x0000d7ba) cell_eswt_app_pane_g1_ParamLimits

0xd7ba,	// (0x0000d7ba) cell_eswt_app_pane_g1

0xd7e9,	// (0x0000d7e9) cell_eswt_app_pane_g2_ParamLimits

0xd7e9,	// (0x0000d7e9) cell_eswt_app_pane_g2

0x0001,

0xefa9,	// (0x0000efa9) cell_eswt_app_pane_g_ParamLimits

0xefa9,	// (0x0000efa9) cell_eswt_app_pane_g

0xd812,	// (0x0000d812) cell_eswt_app_pane_t1_ParamLimits

0xd812,	// (0x0000d812) cell_eswt_app_pane_t1

0x74de,	// (0x000074de) grid_highlight_pane_cp70_ParamLimits

0x74de,	// (0x000074de) grid_highlight_pane_cp70

0x247a,	// (0x0000247a) set_content_pane_g1

0x28ec,	// (0x000028ec) status_small_volume_pane

0x74ea,	// (0x000074ea) status_small_volume_pane_g1

0x74f2,	// (0x000074f2) volume_small2_pane

0x74fb,	// (0x000074fb) volume_small2_pane_g1

0x7504,	// (0x00007504) volume_small2_pane_g2

0x750d,	// (0x0000750d) volume_small2_pane_g3

0x7516,	// (0x00007516) volume_small2_pane_g4

0x751f,	// (0x0000751f) volume_small2_pane_g5

0x7528,	// (0x00007528) volume_small2_pane_g6

0x7531,	// (0x00007531) volume_small2_pane_g7

0x753a,	// (0x0000753a) volume_small2_pane_g8

0x7543,	// (0x00007543) volume_small2_pane_g9

0x754c,	// (0x0000754c) volume_small2_pane_g10

0x0009,

0xaffb,	// (0x0000affb) volume_small2_pane_g

0x6ab4,	// (0x00006ab4) fep_vkb_top_text_pane_g1_ParamLimits

0xd6c2,	// (0x0000d6c2) fep_vkb_top_text_pane_t1_ParamLimits

0x6de5,	// (0x00006de5) popup_preview_fixed_window_g3_ParamLimits

0x6de5,	// (0x00006de5) popup_preview_fixed_window_g3

0xc899,	// (0x0000c899) popup_toolbar_trans_pane

0xd145,	// (0x0000d145) aid_height_set_list_ParamLimits

0x4e4d,	// (0x00004e4d) aid_size_parent_ParamLimits

0x2b0e,	// (0x00002b0e) list_highlight_pane_cp2_ParamLimits

0x247a,	// (0x0000247a) set_content_pane_g1_ParamLimits

0xd303,	// (0x0000d303) list_single_image_pane_ParamLimits

0xd303,	// (0x0000d303) list_single_image_pane

0xd844,	// (0x0000d844) aid_size_cell_image_ParamLimits

0xd844,	// (0x0000d844) aid_size_cell_image

0xd851,	// (0x0000d851) grid_single_image_pane_ParamLimits

0xd851,	// (0x0000d851) grid_single_image_pane

0x1375,	// (0x00001375) list_single_image_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_single_image_pane_g1

0x1381,	// (0x00001381) list_single_image_pane_g2_ParamLimits

0x1381,	// (0x00001381) list_single_image_pane_g2

0x0001,

0xb010,	// (0x0000b010) list_single_image_pane_g_ParamLimits

0xb010,	// (0x0000b010) list_single_image_pane_g

0x756e,	// (0x0000756e) list_single_image_pane_t1_ParamLimits

0x756e,	// (0x0000756e) list_single_image_pane_t1

0xd85d,	// (0x0000d85d) cell_image_list_pane_ParamLimits

0xd85d,	// (0x0000d85d) cell_image_list_pane

0xd871,	// (0x0000d871) cell_image_list_pane_g1

0xd87a,	// (0x0000d87a) cell_image_list_pane_g2

0x0001,

0xefae,	// (0x0000efae) cell_image_list_pane_g

0x75aa,	// (0x000075aa) aid_size_cell_tb_trans_pane

0x134f,	// (0x0000134f) bg_tb_trans_pane

0x75bc,	// (0x000075bc) grid_tb_trans_pane

0x3643,	// (0x00003643) bg_tb_trans_pane_g1

0x364b,	// (0x0000364b) bg_tb_trans_pane_g2

0x3653,	// (0x00003653) bg_tb_trans_pane_g3

0x365b,	// (0x0000365b) bg_tb_trans_pane_g4

0x3663,	// (0x00003663) bg_tb_trans_pane_g5

0x367b,	// (0x0000367b) bg_tb_trans_pane_g6

0x3683,	// (0x00003683) bg_tb_trans_pane_g7

0x366b,	// (0x0000366b) bg_tb_trans_pane_g8

0x3673,	// (0x00003673) bg_tb_trans_pane_g9

0x0008,

0xb01a,	// (0x0000b01a) bg_tb_trans_pane_g

0x75d0,	// (0x000075d0) cell_toolbar_trans_pane_ParamLimits

0x75d0,	// (0x000075d0) cell_toolbar_trans_pane

0x64dd,	// (0x000064dd) cell_toolbar_trans_pane_g1

0xd51a,	// (0x0000d51a) list_form2_midp_pane_t1

0xd528,	// (0x0000d528) list_form2_midp_pane_t2

0x0001,

0xef79,	// (0x0000ef79) list_form2_midp_pane_t

0x6045,	// (0x00006045) scroll_pane_cp51_ParamLimits

0x6248,	// (0x00006248) form2_midp_wait_pane_g1

0x6251,	// (0x00006251) form2_midp_wait_pane_g2

0x625a,	// (0x0000625a) form2_midp_wait_pane_g3

0x0002,

0xaed8,	// (0x0000aed8) form2_midp_wait_pane_g

0x04e9,	// (0x000004e9) list_highlight_pane_cp21_ParamLimits

0x62a9,	// (0x000062a9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x62b8,	// (0x000062b8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x504f,	// (0x0000504f) list_single_2graphic_im_pane_ParamLimits

0x504f,	// (0x0000504f) list_single_2graphic_im_pane

0xd883,	// (0x0000d883) list_single_2graphic_im_pane_g1_ParamLimits

0xd883,	// (0x0000d883) list_single_2graphic_im_pane_g1

0xd894,	// (0x0000d894) list_single_2graphic_im_pane_g2_ParamLimits

0xd894,	// (0x0000d894) list_single_2graphic_im_pane_g2

0xd8a0,	// (0x0000d8a0) list_single_2graphic_im_pane_g3_ParamLimits

0xd8a0,	// (0x0000d8a0) list_single_2graphic_im_pane_g3

0x0003,

0xefb3,	// (0x0000efb3) list_single_2graphic_im_pane_g_ParamLimits

0xefb3,	// (0x0000efb3) list_single_2graphic_im_pane_g

0xd8b4,	// (0x0000d8b4) list_single_2graphic_im_pane_t1_ParamLimits

0xd8b4,	// (0x0000d8b4) list_single_2graphic_im_pane_t1

0x6df1,	// (0x00006df1) list_single_graphic_2heading_pane_fp_ParamLimits

0x6df1,	// (0x00006df1) list_single_graphic_2heading_pane_fp

0x6e37,	// (0x00006e37) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6e37,	// (0x00006e37) list_single_graphic_2heading_pane_fp_g1

0x6e08,	// (0x00006e08) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6e08,	// (0x00006e08) list_single_graphic_2heading_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_2heading_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_2heading_pane_fp_g4

0x6e14,	// (0x00006e14) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6e14,	// (0x00006e14) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xaf5b,	// (0x0000af5b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xaf5b,	// (0x0000af5b) list_single_graphic_2heading_pane_fp_g

0x7664,	// (0x00007664) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7664,	// (0x00007664) list_single_graphic_2heading_pane_fp_t1

0x6e6f,	// (0x00006e6f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6e6f,	// (0x00006e6f) list_single_graphic_2heading_pane_fp_t2

0x767a,	// (0x0000767a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x767a,	// (0x0000767a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb036,	// (0x0000b036) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb036,	// (0x0000b036) list_single_graphic_2heading_pane_fp_t

0x66fd,	// (0x000066fd) fep_hwr_write_pane_g5_ParamLimits

0x66fd,	// (0x000066fd) fep_hwr_write_pane_g5

0x6709,	// (0x00006709) fep_hwr_write_pane_g6_ParamLimits

0x6709,	// (0x00006709) fep_hwr_write_pane_g6

0x72cb,	// (0x000072cb) eswt_shell_pane_ParamLimits

0x37d3,	// (0x000037d3) bg_popup_window_pane_cp18_ParamLimits

0x4cfb,	// (0x00004cfb) heading_pane_cp70

0x73f5,	// (0x000073f5) popup_eswt_tasktip_window_t1_ParamLimits

0xc961,	// (0x0000c961) aid_touch_tab_arrow_left

0xc977,	// (0x0000c977) aid_touch_tab_arrow_right

0xb4c3,	// (0x0000b4c3) title_pane_g3_ParamLimits

0xb4c3,	// (0x0000b4c3) title_pane_g3

0x123c,	// (0x0000123c) set_value_pane_g1

0xc899,	// (0x0000c899) popup_toolbar_trans_pane_ParamLimits

0x75aa,	// (0x000075aa) aid_size_cell_tb_trans_pane_ParamLimits

0x134f,	// (0x0000134f) bg_tb_trans_pane_ParamLimits

0x75bc,	// (0x000075bc) grid_tb_trans_pane_ParamLimits

0x0819,	// (0x00000819) cont_note_pane_ParamLimits

0x0819,	// (0x00000819) cont_note_pane

0x0b54,	// (0x00000b54) cont_snote2_single_text_pane_ParamLimits

0x0b54,	// (0x00000b54) cont_snote2_single_text_pane

0x0b54,	// (0x00000b54) cont_snote2_single_graphic_pane_ParamLimits

0x0b54,	// (0x00000b54) cont_snote2_single_graphic_pane

0x3e98,	// (0x00003e98) cont_note_wait_pane_ParamLimits

0x3e98,	// (0x00003e98) cont_note_wait_pane

0x3e98,	// (0x00003e98) cont_note_image_pane_ParamLimits

0x3e98,	// (0x00003e98) cont_note_image_pane

0x7690,	// (0x00007690) popup_note2_window_g1_ParamLimits

0x7690,	// (0x00007690) popup_note2_window_g1

0x76c1,	// (0x000076c1) popup_note2_window_t1_ParamLimits

0x76c1,	// (0x000076c1) popup_note2_window_t1

0x7706,	// (0x00007706) popup_note2_window_t2_ParamLimits

0x7706,	// (0x00007706) popup_note2_window_t2

0x774b,	// (0x0000774b) popup_note2_window_t3_ParamLimits

0x774b,	// (0x0000774b) popup_note2_window_t3

0x7790,	// (0x00007790) popup_note2_window_t4_ParamLimits

0x7790,	// (0x00007790) popup_note2_window_t4

0x0891,	// (0x00000891) popup_note2_window_t5_ParamLimits

0x0891,	// (0x00000891) popup_note2_window_t5

0x0004,

0xb042,	// (0x0000b042) popup_note2_window_t_ParamLimits

0xb042,	// (0x0000b042) popup_note2_window_t

0x77bf,	// (0x000077bf) popup_note2_image_window_g1_ParamLimits

0x77bf,	// (0x000077bf) popup_note2_image_window_g1

0x77cb,	// (0x000077cb) popup_note2_image_window_g2_ParamLimits

0x77cb,	// (0x000077cb) popup_note2_image_window_g2

0x0001,

0xb04d,	// (0x0000b04d) popup_note2_image_window_g_ParamLimits

0xb04d,	// (0x0000b04d) popup_note2_image_window_g

0x77dd,	// (0x000077dd) popup_note2_image_window_t1_ParamLimits

0x77dd,	// (0x000077dd) popup_note2_image_window_t1

0x77f5,	// (0x000077f5) popup_note2_image_window_t2_ParamLimits

0x77f5,	// (0x000077f5) popup_note2_image_window_t2

0x780d,	// (0x0000780d) popup_note2_image_window_t3_ParamLimits

0x780d,	// (0x0000780d) popup_note2_image_window_t3

0x0002,

0xb052,	// (0x0000b052) popup_note2_image_window_t_ParamLimits

0xb052,	// (0x0000b052) popup_note2_image_window_t

0x3ea6,	// (0x00003ea6) popup_note2_wait_window_g1_ParamLimits

0x3ea6,	// (0x00003ea6) popup_note2_wait_window_g1

0x3eb2,	// (0x00003eb2) popup_note2_wait_window_g2_ParamLimits

0x3eb2,	// (0x00003eb2) popup_note2_wait_window_g2

0x3ebe,	// (0x00003ebe) popup_note2_wait_window_g3_ParamLimits

0x3ebe,	// (0x00003ebe) popup_note2_wait_window_g3

0x0002,

0xac18,	// (0x0000ac18) popup_note2_wait_window_g_ParamLimits

0xac18,	// (0x0000ac18) popup_note2_wait_window_g

0x7829,	// (0x00007829) popup_note2_wait_window_t1_ParamLimits

0x7829,	// (0x00007829) popup_note2_wait_window_t1

0x7847,	// (0x00007847) popup_note2_wait_window_t2_ParamLimits

0x7847,	// (0x00007847) popup_note2_wait_window_t2

0x7865,	// (0x00007865) popup_note2_wait_window_t3_ParamLimits

0x7865,	// (0x00007865) popup_note2_wait_window_t3

0x7877,	// (0x00007877) popup_note2_wait_window_t4_ParamLimits

0x7877,	// (0x00007877) popup_note2_wait_window_t4

0x0003,

0xb059,	// (0x0000b059) popup_note2_wait_window_t_ParamLimits

0xb059,	// (0x0000b059) popup_note2_wait_window_t

0x7889,	// (0x00007889) wait_bar2_pane_ParamLimits

0x7889,	// (0x00007889) wait_bar2_pane

0x78a1,	// (0x000078a1) popup_snote2_single_text_window_g1_ParamLimits

0x78a1,	// (0x000078a1) popup_snote2_single_text_window_g1

0x78c9,	// (0x000078c9) popup_snote2_single_text_window_t1_ParamLimits

0x78c9,	// (0x000078c9) popup_snote2_single_text_window_t1

0x7915,	// (0x00007915) popup_snote2_single_text_window_t2_ParamLimits

0x7915,	// (0x00007915) popup_snote2_single_text_window_t2

0x7961,	// (0x00007961) popup_snote2_single_text_window_t3_ParamLimits

0x7961,	// (0x00007961) popup_snote2_single_text_window_t3

0x79a2,	// (0x000079a2) popup_snote2_single_text_window_t4_ParamLimits

0x79a2,	// (0x000079a2) popup_snote2_single_text_window_t4

0x79d8,	// (0x000079d8) popup_snote2_single_text_window_t5_ParamLimits

0x79d8,	// (0x000079d8) popup_snote2_single_text_window_t5

0x0004,

0xb062,	// (0x0000b062) popup_snote2_single_text_window_t_ParamLimits

0xb062,	// (0x0000b062) popup_snote2_single_text_window_t

0x7a03,	// (0x00007a03) popup_snote2_single_graphic_window_g1_ParamLimits

0x7a03,	// (0x00007a03) popup_snote2_single_graphic_window_g1

0x7a2b,	// (0x00007a2b) popup_snote2_single_graphic_window_g2_ParamLimits

0x7a2b,	// (0x00007a2b) popup_snote2_single_graphic_window_g2

0x0001,

0xb06d,	// (0x0000b06d) popup_snote2_single_graphic_window_g_ParamLimits

0xb06d,	// (0x0000b06d) popup_snote2_single_graphic_window_g

0x7a53,	// (0x00007a53) popup_snote2_single_graphic_window_t1_ParamLimits

0x7a53,	// (0x00007a53) popup_snote2_single_graphic_window_t1

0x7a9f,	// (0x00007a9f) popup_snote2_single_graphic_window_t2_ParamLimits

0x7a9f,	// (0x00007a9f) popup_snote2_single_graphic_window_t2

0x7961,	// (0x00007961) popup_snote2_single_graphic_window_t3_ParamLimits

0x7961,	// (0x00007961) popup_snote2_single_graphic_window_t3

0x79a2,	// (0x000079a2) popup_snote2_single_graphic_window_t4_ParamLimits

0x79a2,	// (0x000079a2) popup_snote2_single_graphic_window_t4

0x79d8,	// (0x000079d8) popup_snote2_single_graphic_window_t5_ParamLimits

0x79d8,	// (0x000079d8) popup_snote2_single_graphic_window_t5

0x0004,

0xb072,	// (0x0000b072) popup_snote2_single_graphic_window_t_ParamLimits

0xb072,	// (0x0000b072) popup_snote2_single_graphic_window_t

0x5ead,	// (0x00005ead) clock_nsta_pane_cp2_t1

0x5ead,	// (0x00005ead) clock_nsta_pane_cp2_t2

0x0001,

0xae99,	// (0x0000ae99) clock_nsta_pane_cp2_t

0x1369,	// (0x00001369) form_field_data_wide_pane_g1_ParamLimits

0x1375,	// (0x00001375) form_field_data_wide_pane_g2_ParamLimits

0x1375,	// (0x00001375) form_field_data_wide_pane_g2

0x1381,	// (0x00001381) form_field_data_wide_pane_g3_ParamLimits

0x1381,	// (0x00001381) form_field_data_wide_pane_g3

0x0002,

0xaa59,	// (0x0000aa59) form_field_data_wide_pane_g_ParamLimits

0xaa59,	// (0x0000aa59) form_field_data_wide_pane_g

0xd44e,	// (0x0000d44e) grid_touch_3_pane_ParamLimits

0xd44e,	// (0x0000d44e) grid_touch_3_pane

0xd8e5,	// (0x0000d8e5) cell_touch_3_pane_ParamLimits

0xd8e5,	// (0x0000d8e5) cell_touch_3_pane

0x64dd,	// (0x000064dd) cell_touch_3_pane_g1

0x64dd,	// (0x000064dd) cell_touch_3_pane_g2

0x0001,

0xaf1e,	// (0x0000af1e) cell_touch_3_pane_g

0x08c3,	// (0x000008c3) cont_query_data_pane

0x08cb,	// (0x000008cb) cont_query_data_pane_cp1

0x7b1a,	// (0x00007b1a) button_value_adjust_pane_cp7

0x7b22,	// (0x00007b22) query_popup_pane_cp3

0x1e5b,	// (0x00001e5b) bg_popup_sub_pane_cp22_ParamLimits

0x1e71,	// (0x00001e71) navi_navi_volume_pane_cp2

0x1e8c,	// (0x00001e8c) popup_side_volume_key_window_g2

0x1e9b,	// (0x00001e9b) popup_side_volume_key_window_g3

0x0002,

0xaaef,	// (0x0000aaef) popup_side_volume_key_window_g

0x1eb8,	// (0x00001eb8) popup_side_volume_key_window_t2

0x0001,

0xaaf6,	// (0x0000aaf6) popup_side_volume_key_window_t

0x2344,	// (0x00002344) popup_side_volume_key_window_ParamLimits

0xb931,	// (0x0000b931) list_double_graphic_pane_g4_ParamLimits

0xb931,	// (0x0000b931) list_double_graphic_pane_g4

0xd2db,	// (0x0000d2db) list_single_2heading_msg_pane_ParamLimits

0xd2db,	// (0x0000d2db) list_single_2heading_msg_pane

0xd92f,	// (0x0000d92f) list_single_2heading_msg_pane_g1_ParamLimits

0xd92f,	// (0x0000d92f) list_single_2heading_msg_pane_g1

0xd93b,	// (0x0000d93b) list_single_2heading_msg_pane_g2_ParamLimits

0xd93b,	// (0x0000d93b) list_single_2heading_msg_pane_g2

0xd94e,	// (0x0000d94e) list_single_2heading_msg_pane_g3_ParamLimits

0xd94e,	// (0x0000d94e) list_single_2heading_msg_pane_g3

0xd95a,	// (0x0000d95a) list_single_2heading_msg_pane_g4_ParamLimits

0xd95a,	// (0x0000d95a) list_single_2heading_msg_pane_g4

0x0003,

0xefbc,	// (0x0000efbc) list_single_2heading_msg_pane_g_ParamLimits

0xefbc,	// (0x0000efbc) list_single_2heading_msg_pane_g

0xd972,	// (0x0000d972) list_single_2heading_msg_pane_t1_ParamLimits

0xd972,	// (0x0000d972) list_single_2heading_msg_pane_t1

0xd99a,	// (0x0000d99a) list_single_2heading_msg_pane_t2_ParamLimits

0xd99a,	// (0x0000d99a) list_single_2heading_msg_pane_t2

0xda05,	// (0x0000da05) list_single_2heading_msg_pane_t3_ParamLimits

0xda05,	// (0x0000da05) list_single_2heading_msg_pane_t3

0x7c16,	// (0x00007c16) list_single_2heading_msg_pane_t4_ParamLimits

0x7c16,	// (0x00007c16) list_single_2heading_msg_pane_t4

0x0003,

0xefc5,	// (0x0000efc5) list_single_2heading_msg_pane_t_ParamLimits

0xefc5,	// (0x0000efc5) list_single_2heading_msg_pane_t

0x043d,	// (0x0000043d) title_pane_g4_ParamLimits

0x043d,	// (0x0000043d) title_pane_g4

0x189d,	// (0x0000189d) title_pane_stacon_g3_ParamLimits

0x189d,	// (0x0000189d) title_pane_stacon_g3

0x7627,	// (0x00007627) list_single_2graphic_im_pane_g4_ParamLimits

0x7627,	// (0x00007627) list_single_2graphic_im_pane_g4

0x4a51,	// (0x00004a51) popup_side_volume_key_window_cp

0x54f4,	// (0x000054f4) main_idle_act2_pane_t1

0x368b,	// (0x0000368b) toolbar_button_pane_g10

0xb832,	// (0x0000b832) popup_toolbar_window_cp1

0x5e9e,	// (0x00005e9e) clock_nsta_pane_cp_t1

0x5e9e,	// (0x00005e9e) clock_nsta_pane_cp_t2

0x0001,

0xae94,	// (0x0000ae94) clock_nsta_pane_cp_t

0x1e71,	// (0x00001e71) navi_navi_volume_pane_cp2_ParamLimits

0x1e80,	// (0x00001e80) popup_side_volume_key_window_g1_ParamLimits

0x1e8c,	// (0x00001e8c) popup_side_volume_key_window_g2_ParamLimits

0x1e9b,	// (0x00001e9b) popup_side_volume_key_window_g3_ParamLimits

0xaaef,	// (0x0000aaef) popup_side_volume_key_window_g_ParamLimits

0x653d,	// (0x0000653d) fep_hwr_aid_pane

0x65e4,	// (0x000065e4) bg_fep_hwr_top_pane_g4_ParamLimits

0x6604,	// (0x00006604) fep_hwr_top_pane_g1_ParamLimits

0x6616,	// (0x00006616) fep_hwr_top_pane_g2_ParamLimits

0x6628,	// (0x00006628) fep_hwr_top_pane_g3_ParamLimits

0xaee9,	// (0x0000aee9) fep_hwr_top_pane_g_ParamLimits

0x663d,	// (0x0000663d) fep_hwr_top_text_pane_ParamLimits

0x4812,	// (0x00004812) aid_touch_tab_arrow_arrow_2

0x481b,	// (0x0000481b) aid_touch_tab_arrow_left_2

0x6551,	// (0x00006551) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6588,	// (0x00006588) fep_hwr_prediction_pane

0x68bc,	// (0x000068bc) fep_vkb_prediction_pane

0xd6a2,	// (0x0000d6a2) fep_vkb_side_pane_g3_ParamLimits

0xd6a2,	// (0x0000d6a2) fep_vkb_side_pane_g3

0x696c,	// (0x0000696c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x702c,	// (0x0000702c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7039,	// (0x00007039) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xaf93,	// (0x0000af93) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7c3b,	// (0x00007c3b) fep_hwr_prediction_pane_g1

0x7c45,	// (0x00007c45) fep_hwr_prediction_pane_g2

0x7c4d,	// (0x00007c4d) fep_hwr_prediction_pane_g3

0x7c55,	// (0x00007c55) fep_hwr_prediction_pane_g4

0x0003,

0xb08f,	// (0x0000b08f) fep_hwr_prediction_pane_g

0x7c3b,	// (0x00007c3b) fep_vkb_prediction_pane_g1

0x7c5d,	// (0x00007c5d) fep_vkb_prediction_pane_g2

0x7c65,	// (0x00007c65) fep_vkb_prediction_pane_g3

0x7c6d,	// (0x00007c6d) fep_vkb_prediction_pane_g4

0x0003,

0xb098,	// (0x0000b098) fep_vkb_prediction_pane_g

0x4dbc,	// (0x00004dbc) slider_set_pane_g3

0x4dd0,	// (0x00004dd0) slider_set_pane_g4

0x4de8,	// (0x00004de8) slider_set_pane_g5

0x4dbc,	// (0x00004dbc) slider_set_pane_g6

0x4dfe,	// (0x00004dfe) slider_set_pane_g7

0x4faa,	// (0x00004faa) slider_form_pane_g3

0x4fb3,	// (0x00004fb3) slider_form_pane_g4

0x4fbb,	// (0x00004fbb) slider_form_pane_g5

0x4faa,	// (0x00004faa) slider_form_pane_g6

0xd28c,	// (0x0000d28c) slider_form_pane_g7

0x57f1,	// (0x000057f1) slider_set_pane_vc_g3

0x57fa,	// (0x000057fa) slider_set_pane_vc_g4

0x5803,	// (0x00005803) slider_set_pane_vc_g5

0x57f1,	// (0x000057f1) slider_set_pane_vc_g6

0x580c,	// (0x0000580c) slider_set_pane_vc_g7

0x57f1,	// (0x000057f1) slider_form_pane_vc_g1

0x57fa,	// (0x000057fa) slider_form_pane_vc_g2

0x5803,	// (0x00005803) slider_form_pane_vc_g3

0x57f1,	// (0x000057f1) slider_form_pane_vc_g4

0x5ba4,	// (0x00005ba4) slider_form_pane_vc_g5

0x0004,

0xae6d,	// (0x0000ae6d) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7c75,	// (0x00007c75) ai3_links_pane

0xda73,	// (0x0000da73) popup_ai3_data_window_ParamLimits

0xda73,	// (0x0000da73) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xda8b,	// (0x0000da8b) cell_ai3_links_pane_ParamLimits

0xda8b,	// (0x0000da8b) cell_ai3_links_pane

0x7cae,	// (0x00007cae) bg_popup_sub_pane_cp11

0x7cbb,	// (0x00007cbb) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7ce0,	// (0x00007ce0) heading_ai3_data_pane

0x7ce8,	// (0x00007ce8) list_ai3_gene_pane

0x7cf4,	// (0x00007cf4) popup_ai3_data_window_g1

0x7cfc,	// (0x00007cfc) heading_ai3_data_pane_g1

0x7d04,	// (0x00007d04) heading_ai3_data_pane_t1

0x7d12,	// (0x00007d12) list_double_ai3_gene_pane_ParamLimits

0x7d12,	// (0x00007d12) list_double_ai3_gene_pane

0x7d1f,	// (0x00007d1f) list_single_ai3_gene_pane_ParamLimits

0x7d1f,	// (0x00007d1f) list_single_ai3_gene_pane

0x64a2,	// (0x000064a2) list_highlight_pane_cp7_ParamLimits

0x64a2,	// (0x000064a2) list_highlight_pane_cp7

0x7d2c,	// (0x00007d2c) list_single_a13_gene_pane_t1_ParamLimits

0x7d2c,	// (0x00007d2c) list_single_a13_gene_pane_t1

0x7d43,	// (0x00007d43) list_single_ai3_gene_pane_g1

0x7d4c,	// (0x00007d4c) list_single_ai3_gene_pane_g2

0x0001,

0xb0a1,	// (0x0000b0a1) list_single_ai3_gene_pane_g

0x7d54,	// (0x00007d54) list_double_ai3_gene_pane_g1_ParamLimits

0x7d54,	// (0x00007d54) list_double_ai3_gene_pane_g1

0x7d60,	// (0x00007d60) list_double_ai3_gene_pane_t1_ParamLimits

0x7d60,	// (0x00007d60) list_double_ai3_gene_pane_t1

0x7d7c,	// (0x00007d7c) list_double_ai3_gene_pane_t2_ParamLimits

0x7d7c,	// (0x00007d7c) list_double_ai3_gene_pane_t2

0x7d91,	// (0x00007d91) list_double_ai3_gene_pane_t3_ParamLimits

0x7d91,	// (0x00007d91) list_double_ai3_gene_pane_t3

0x0002,

0xb0a6,	// (0x0000b0a6) list_double_ai3_gene_pane_t_ParamLimits

0xb0a6,	// (0x0000b0a6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7b33,	// (0x00007b33) aid_size_min_col_2

0xd919,	// (0x0000d919) aid_size_min_msg_ParamLimits

0xd919,	// (0x0000d919) aid_size_min_msg

0xd6b6,	// (0x0000d6b6) fep_vkb_top_text_pane_g2_ParamLimits

0xd6b6,	// (0x0000d6b6) fep_vkb_top_text_pane_g2

0x0001,

0xef99,	// (0x0000ef99) fep_vkb_top_text_pane_g_ParamLimits

0xef99,	// (0x0000ef99) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7dae,	// (0x00007dae) grid_hc_apps_pane_ParamLimits

0x7dae,	// (0x00007dae) grid_hc_apps_pane

0x7dbd,	// (0x00007dbd) list_hc_apps_pane

0x7dc5,	// (0x00007dc5) scroll_pane_cp37_ParamLimits

0x7dc5,	// (0x00007dc5) scroll_pane_cp37

0xdaa5,	// (0x0000daa5) cell_hc_apps_pane_ParamLimits

0xdaa5,	// (0x0000daa5) cell_hc_apps_pane

0xdb65,	// (0x0000db65) cell_hc_apps_pane_g1_ParamLimits

0xdb65,	// (0x0000db65) cell_hc_apps_pane_g1

0x7eb2,	// (0x00007eb2) cell_hc_apps_pane_g2_ParamLimits

0x7eb2,	// (0x00007eb2) cell_hc_apps_pane_g2

0x7ece,	// (0x00007ece) cell_hc_apps_pane_g3_ParamLimits

0x7ece,	// (0x00007ece) cell_hc_apps_pane_g3

0x0002,

0xefce,	// (0x0000efce) cell_hc_apps_pane_g_ParamLimits

0xefce,	// (0x0000efce) cell_hc_apps_pane_g

0xdb92,	// (0x0000db92) cell_hc_apps_pane_t1_ParamLimits

0xdb92,	// (0x0000db92) cell_hc_apps_pane_t1

0x0819,	// (0x00000819) grid_highlight_pane_cp10_ParamLimits

0x0819,	// (0x00000819) grid_highlight_pane_cp10

0xdbd0,	// (0x0000dbd0) list_single_hc_apps_pane_ParamLimits

0xdbd0,	// (0x0000dbd0) list_single_hc_apps_pane

0xdc03,	// (0x0000dc03) list_single_hc_apps_pane_g1

0xdc1c,	// (0x0000dc1c) list_single_hc_apps_pane_g2

0x0001,

0xefd5,	// (0x0000efd5) list_single_hc_apps_pane_g

0xdc35,	// (0x0000dc35) list_single_hc_apps_pane_g2_copy1

0xdc51,	// (0x0000dc51) list_single_hc_apps_pane_t1

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_ParamLimits

0x0533,	// (0x00000533) setting_slider_pane_t1_ParamLimits

0x054c,	// (0x0000054c) setting_slider_pane_t2_ParamLimits

0x0565,	// (0x00000565) setting_slider_pane_t3_ParamLimits

0xa941,	// (0x0000a941) setting_slider_pane_t_ParamLimits

0x057c,	// (0x0000057c) slider_set_pane_ParamLimits

0x2975,	// (0x00002975) control_pane_g5_ParamLimits

0x2975,	// (0x00002975) control_pane_g5

0x4da3,	// (0x00004da3) slider_set_pane_g1_ParamLimits

0x4db0,	// (0x00004db0) slider_set_pane_g2_ParamLimits

0x4dbc,	// (0x00004dbc) slider_set_pane_g3_ParamLimits

0x4dd0,	// (0x00004dd0) slider_set_pane_g4_ParamLimits

0x4de8,	// (0x00004de8) slider_set_pane_g5_ParamLimits

0x4dbc,	// (0x00004dbc) slider_set_pane_g6_ParamLimits

0x4dfe,	// (0x00004dfe) slider_set_pane_g7_ParamLimits

0xad34,	// (0x0000ad34) slider_set_pane_g_ParamLimits

0x2425,	// (0x00002425) navi_icon_text_pane_ParamLimits

0xc92a,	// (0x0000c92a) aid_fill_nsta_2_ParamLimits

0xc961,	// (0x0000c961) aid_touch_tab_arrow_left_ParamLimits

0xc977,	// (0x0000c977) aid_touch_tab_arrow_right_ParamLimits

0xca12,	// (0x0000ca12) clock_nsta_pane_ParamLimits

0x47f4,	// (0x000047f4) navi_icon_pane_g1_ParamLimits

0x4800,	// (0x00004800) navi_text_pane_t1_ParamLimits

0x5fb2,	// (0x00005fb2) navi_icon_text_pane_g1_ParamLimits

0x5fbe,	// (0x00005fbe) navi_icon_text_pane_t1_ParamLimits

0xdc03,	// (0x0000dc03) list_single_hc_apps_pane_g1_ParamLimits

0xdc1c,	// (0x0000dc1c) list_single_hc_apps_pane_g2_ParamLimits

0xefd5,	// (0x0000efd5) list_single_hc_apps_pane_g_ParamLimits

0xdc35,	// (0x0000dc35) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xdc51,	// (0x0000dc51) list_single_hc_apps_pane_t1_ParamLimits

0xb42d,	// (0x0000b42d) popup_toolbar2_fixed_window_ParamLimits

0xb42d,	// (0x0000b42d) popup_toolbar2_fixed_window

0xc88f,	// (0x0000c88f) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x801f,	// (0x0000801f) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x801f,	// (0x0000801f) grid_toolbar2_fixed_pane

0xdc7f,	// (0x0000dc7f) cell_toolbar2_fixed_pane_ParamLimits

0xdc7f,	// (0x0000dc7f) cell_toolbar2_fixed_pane

0xdc99,	// (0x0000dc99) cell_toolbar2_fixed_pane_g1

0x8041,	// (0x00008041) toolbar2_fixed_button_pane

0x3643,	// (0x00003643) toolbar2_fixed_button_pane_g1

0x364b,	// (0x0000364b) toolbar2_fixed_button_pane_g2

0x3653,	// (0x00003653) toolbar2_fixed_button_pane_g3

0x365b,	// (0x0000365b) toolbar2_fixed_button_pane_g4

0x3663,	// (0x00003663) toolbar2_fixed_button_pane_g5

0x366b,	// (0x0000366b) toolbar2_fixed_button_pane_g6

0x3673,	// (0x00003673) toolbar2_fixed_button_pane_g7

0x367b,	// (0x0000367b) toolbar2_fixed_button_pane_g8

0x3683,	// (0x00003683) toolbar2_fixed_button_pane_g9

0x0008,

0xac36,	// (0x0000ac36) toolbar2_fixed_button_pane_g

0x8049,	// (0x00008049) cell_toolbar2_float_pane_ParamLimits

0x8049,	// (0x00008049) cell_toolbar2_float_pane

0x805a,	// (0x0000805a) cell_toolbar2_float_pane_g1

0x8041,	// (0x00008041) toolbar2_fixed_button_pane_cp

0xd669,	// (0x0000d669) fep_vkb_accented_list_pane_ParamLimits

0xd669,	// (0x0000d669) fep_vkb_accented_list_pane

0x6cbb,	// (0x00006cbb) bg_popup_fep_shadow_pane_g9

0x25a7,	// (0x000025a7) bg_popup_fep_shadow_pane_cp3

0x162d,	// (0x0000162d) list_accented_list_pane

0x8063,	// (0x00008063) list_single_accented_list_pane_ParamLimits

0x8063,	// (0x00008063) list_single_accented_list_pane

0x25a7,	// (0x000025a7) list_highlight_pane_cp10

0x8074,	// (0x00008074) list_single_accented_list_pane_t1

0xc7b9,	// (0x0000c7b9) popup_slider_window_ParamLimits

0xc7b9,	// (0x0000c7b9) popup_slider_window

0x7b2a,	// (0x00007b2a) aid_indentation_list_msg

0xdd92,	// (0x0000dd92) bg_popup_window_pane_cp19

0x8198,	// (0x00008198) popup_slider_window_g1

0x81b4,	// (0x000081b4) popup_slider_window_g2

0x81d0,	// (0x000081d0) popup_slider_window_g3

0x0005,

0xefda,	// (0x0000efda) popup_slider_window_g

0x822c,	// (0x0000822c) popup_slider_window_t1

0x82a0,	// (0x000082a0) small_volume_slider_vertical_pane

0x64dd,	// (0x000064dd) small_volume_slider_vertical_pane_g1

0x64dd,	// (0x000064dd) small_volume_slider_vertical_pane_g2

0x82bc,	// (0x000082bc) small_volume_slider_vertical_pane_g3

0x0002,

0xb0cb,	// (0x0000b0cb) small_volume_slider_vertical_pane_g

0xb39b,	// (0x0000b39b) area_side_right_pane_ParamLimits

0xb39b,	// (0x0000b39b) area_side_right_pane

0xde4a,	// (0x0000de4a) aid_size_side_button_ParamLimits

0xde4a,	// (0x0000de4a) aid_size_side_button

0xde63,	// (0x0000de63) grid_sctrl_middle_pane_ParamLimits

0xde63,	// (0x0000de63) grid_sctrl_middle_pane

0x82f9,	// (0x000082f9) sctrl_sk_bottom_pane

0x830a,	// (0x0000830a) sctrl_sk_top_pane

0x831c,	// (0x0000831c) aid_touch_sctrl_top

0x0819,	// (0x00000819) bg_sctrl_sk_pane_ParamLimits

0x0819,	// (0x00000819) bg_sctrl_sk_pane

0x8329,	// (0x00008329) sctrl_sk_top_pane_g1

0x8336,	// (0x00008336) sctrl_sk_top_pane_t1

0x831c,	// (0x0000831c) aid_touch_sctrl_bottom

0x0819,	// (0x00000819) bg_sctrl_sk_pane_cp_ParamLimits

0x0819,	// (0x00000819) bg_sctrl_sk_pane_cp

0x8351,	// (0x00008351) sctrl_sk_bottom_pane_g1

0x8336,	// (0x00008336) sctrl_sk_bottom_pane_t1

0xde7d,	// (0x0000de7d) cell_sctrl_middle_pane_ParamLimits

0xde7d,	// (0x0000de7d) cell_sctrl_middle_pane

0xde8e,	// (0x0000de8e) aid_touch_sctrl_middle_ParamLimits

0xde8e,	// (0x0000de8e) aid_touch_sctrl_middle

0xde9b,	// (0x0000de9b) bg_sctrl_middle_pane_ParamLimits

0xde9b,	// (0x0000de9b) bg_sctrl_middle_pane

0x8416,	// (0x00008416) cell_sctrl_middle_pane_g1_ParamLimits

0x8416,	// (0x00008416) cell_sctrl_middle_pane_g1

0xdea9,	// (0x0000dea9) cell_sctrl_middle_pane_g2_ParamLimits

0xdea9,	// (0x0000dea9) cell_sctrl_middle_pane_g2

0x0001,

0xefe7,	// (0x0000efe7) cell_sctrl_middle_pane_g_ParamLimits

0xefe7,	// (0x0000efe7) cell_sctrl_middle_pane_g

0x3643,	// (0x00003643) bg_sctrl_middle_pane_g1

0x364b,	// (0x0000364b) bg_sctrl_middle_pane_g2

0x3653,	// (0x00003653) bg_sctrl_middle_pane_g3

0x365b,	// (0x0000365b) bg_sctrl_middle_pane_g4

0x3663,	// (0x00003663) bg_sctrl_middle_pane_g5

0x366b,	// (0x0000366b) bg_sctrl_middle_pane_g6

0x3673,	// (0x00003673) bg_sctrl_middle_pane_g7

0x367b,	// (0x0000367b) bg_sctrl_middle_pane_g8

0x0007,

0xb0dc,	// (0x0000b0dc) bg_sctrl_middle_pane_g

0x3683,	// (0x00003683) bg_sctrl_middle_pane_g8_copy1

0x3643,	// (0x00003643) bg_sctrl_sk_pane_g1

0x364b,	// (0x0000364b) bg_sctrl_sk_pane_g2

0x3653,	// (0x00003653) bg_sctrl_sk_pane_g3

0x0008,

0xac36,	// (0x0000ac36) bg_sctrl_sk_pane_g

0x0d12,	// (0x00000d12) aid_size_touch_scroll_bar

0x365b,	// (0x0000365b) bg_sctrl_sk_pane_g4

0x3663,	// (0x00003663) bg_sctrl_sk_pane_g5

0x366b,	// (0x0000366b) bg_sctrl_sk_pane_g6

0x3673,	// (0x00003673) bg_sctrl_sk_pane_g7

0x367b,	// (0x0000367b) bg_sctrl_sk_pane_g8

0x3683,	// (0x00003683) bg_sctrl_sk_pane_g9

0x2bb6,	// (0x00002bb6) popup_fep_china_hwr2_fs_candidate_window

0xc2f3,	// (0x0000c2f3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc2f3,	// (0x0000c2f3) popup_fep_china_hwr2_fs_control_window

0x696c,	// (0x0000696c) sctrl_sk_top_pane_g2

0x0001,

0xb0d2,	// (0x0000b0d2) sctrl_sk_top_pane_g

0xdeb5,	// (0x0000deb5) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdeb5,	// (0x0000deb5) aid_fep_china_hwr2_fs_cell

0xdec9,	// (0x0000dec9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdec9,	// (0x0000dec9) bg_popup_fep_shadow_pane_cp4

0xdee0,	// (0x0000dee0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdee0,	// (0x0000dee0) bg_popup_fep_shadow_pane_cp5

0xdef2,	// (0x0000def2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdef2,	// (0x0000def2) popup_fep_china_hwr2_fs_control_bar_grid

0xdf06,	// (0x0000df06) popup_fep_china_hwr2_fs_control_funtion_grid

0x83ea,	// (0x000083ea) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x83f4,	// (0x000083f4) popup_fep_china_hwr2_fs_candidate_grid

0xdf0e,	// (0x0000df0e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdf0e,	// (0x0000df0e) cell_fep_china_hwr2_fs_funtion_grid

0x64dd,	// (0x000064dd) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8416,	// (0x00008416) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8416,	// (0x00008416) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8424,	// (0x00008424) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8424,	// (0x00008424) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb0ed,	// (0x0000b0ed) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb0ed,	// (0x0000b0ed) cell_fep_china_hwr2_fs_funtion_grid_g

0xdf26,	// (0x0000df26) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdf26,	// (0x0000df26) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdf3b,	// (0x0000df3b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdf3b,	// (0x0000df3b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xefec,	// (0x0000efec) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xefec,	// (0x0000efec) cell_fep_china_hwr2_fs_funtion_grid_t

0x846b,	// (0x0000846b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8473,	// (0x00008473) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x847b,	// (0x0000847b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb0f7,	// (0x0000b0f7) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8483,	// (0x00008483) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8483,	// (0x00008483) cell_fep_china_hwr2_fs_candidate_grid

0x849c,	// (0x0000849c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x84a4,	// (0x000084a4) popup_fep_china_hwr2_fs_candidate_grid_g21

0x64dd,	// (0x000064dd) cell_fep_china_hwr2_fs_candidate_grid_g1

0x64dd,	// (0x000064dd) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xaf1e,	// (0x0000af1e) cell_fep_china_hwr2_fs_candidate_grid_g

0x84ac,	// (0x000084ac) cell_fep_china_hwr2_fs_candidate_grid_t1

0x319d,	// (0x0000319d) clock_nsta_pane_cp_24_ParamLimits

0x319d,	// (0x0000319d) clock_nsta_pane_cp_24

0x321b,	// (0x0000321b) indicator_nsta_pane_cp_24_ParamLimits

0x321b,	// (0x0000321b) indicator_nsta_pane_cp_24

0x466b,	// (0x0000466b) heading_pane_g1

0x0001,

0xac9b,	// (0x0000ac9b) heading_pane_g

0x5283,	// (0x00005283) grid_sct_catagory_button_pane

0x52b5,	// (0x000052b5) scroll_pane_cp5_ParamLimits

0x6051,	// (0x00006051) button_value_adjust_pane_cp5_ParamLimits

0x6051,	// (0x00006051) button_value_adjust_pane_cp5

0x6149,	// (0x00006149) form2_midp_time_pane_ParamLimits

0x84ba,	// (0x000084ba) cell_sct_catagory_button_pane_ParamLimits

0x84ba,	// (0x000084ba) cell_sct_catagory_button_pane

0x64a2,	// (0x000064a2) bg_button_pane_cp01_ParamLimits

0x64a2,	// (0x000064a2) bg_button_pane_cp01

0x64dd,	// (0x000064dd) cell_sct_catagory_button_pane_g1

0xc832,	// (0x0000c832) popup_tb_extension_window

0xdf57,	// (0x0000df57) aid_size_cell_ext_ParamLimits

0xdf57,	// (0x0000df57) aid_size_cell_ext

0x0b54,	// (0x00000b54) bg_tb_trans_pane_cp1_ParamLimits

0x0b54,	// (0x00000b54) bg_tb_trans_pane_cp1

0xdf7d,	// (0x0000df7d) grid_tb_ext_pane_ParamLimits

0xdf7d,	// (0x0000df7d) grid_tb_ext_pane

0xdfba,	// (0x0000dfba) cell_tb_ext_pane_ParamLimits

0xdfba,	// (0x0000dfba) cell_tb_ext_pane

0xdfe2,	// (0x0000dfe2) cell_tb_ext_pane_g1_ParamLimits

0xdfe2,	// (0x0000dfe2) cell_tb_ext_pane_g1

0x8550,	// (0x00008550) cell_tb_ext_pane_t1

0x0819,	// (0x00000819) list_highlight_pane_cp11_ParamLimits

0x0819,	// (0x00000819) list_highlight_pane_cp11

0x0354,	// (0x00000354) popup_uni_indicator_window_ParamLimits

0x0354,	// (0x00000354) popup_uni_indicator_window

0x134f,	// (0x0000134f) bg_popup_sub_pane_cp14

0x856b,	// (0x0000856b) list_uniindi_pane

0x8577,	// (0x00008577) uniindi_top_pane

0x0819,	// (0x00000819) bg_uniindi_top_pane

0x8596,	// (0x00008596) uniindi_top_pane_g1

0x85ac,	// (0x000085ac) uniindi_top_pane_g2

0x0003,

0xb0fe,	// (0x0000b0fe) uniindi_top_pane_g

0x85d6,	// (0x000085d6) uniindi_top_pane_t1

0x8600,	// (0x00008600) list_single_uniindi_pane_ParamLimits

0x8600,	// (0x00008600) list_single_uniindi_pane

0x64dd,	// (0x000064dd) bg_uniindi_top_pane_g1

0x8612,	// (0x00008612) list_single_uniindi_pane_g1

0x8625,	// (0x00008625) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x864a,	// (0x0000864a) bg_sctrl_sk_pane_cp1

0x8653,	// (0x00008653) bg_sctrl_sk_pane_cp2

0x865c,	// (0x0000865c) control_bg_pane_g1

0x8665,	// (0x00008665) control_bg_pane_g2

0x0001,

0xb107,	// (0x0000b107) control_bg_pane_g

0x5e30,	// (0x00005e30) cell_indicator_nsta_pane_g1_ParamLimits

0xd481,	// (0x0000d481) cell_indicator_nsta_pane_g2_ParamLimits

0xef64,	// (0x0000ef64) cell_indicator_nsta_pane_g_ParamLimits

0x61cd,	// (0x000061cd) form2_midp_time_pane_t1_ParamLimits

0x652f,	// (0x0000652f) main_idle_act4_pane_ParamLimits

0x652f,	// (0x0000652f) main_idle_act4_pane

0xc832,	// (0x0000c832) popup_tb_extension_window_ParamLimits

0xdfa1,	// (0x0000dfa1) tb_ext_find_pane_ParamLimits

0xdfa1,	// (0x0000dfa1) tb_ext_find_pane

0x866e,	// (0x0000866e) ai_gene_pane_1_cp1

0x26e4,	// (0x000026e4) ai_gene_pane_2_cp1

0x8676,	// (0x00008676) list_single_idle_plugin_calendar_pane

0x867f,	// (0x0000867f) list_single_idle_plugin_notification_pane

0x8688,	// (0x00008688) list_single_idle_plugin_player_pane

0xdfff,	// (0x0000dfff) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdfff,	// (0x0000dfff) list_single_idle_plugin_shortcut_pane

0xe027,	// (0x0000e027) main_idle_act4_pane_t1

0xe03d,	// (0x0000e03d) main_idle_act4_pane_t2

0x0001,

0xeff1,	// (0x0000eff1) main_idle_act4_pane_t

0xe055,	// (0x0000e055) middle_sk_idle_act4_pane_ParamLimits

0xe055,	// (0x0000e055) middle_sk_idle_act4_pane

0xe071,	// (0x0000e071) popup_clock_digital_analogue_window_cp2

0xe098,	// (0x0000e098) shortcut_wheel_idle_act4_pane_ParamLimits

0xe098,	// (0x0000e098) shortcut_wheel_idle_act4_pane

0x64dd,	// (0x000064dd) shortcut_wheel_idle_act4_pane_g1

0x64dd,	// (0x000064dd) shortcut_wheel_idle_act4_pane_g2

0x64dd,	// (0x000064dd) shortcut_wheel_idle_act4_pane_g3

0x64dd,	// (0x000064dd) shortcut_wheel_idle_act4_pane_g4

0x64dd,	// (0x000064dd) shortcut_wheel_idle_act4_pane_g5

0x871b,	// (0x0000871b) shortcut_wheel_idle_act4_pane_g6

0x8723,	// (0x00008723) shortcut_wheel_idle_act4_pane_g7

0x872b,	// (0x0000872b) shortcut_wheel_idle_act4_pane_g8

0x8733,	// (0x00008733) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb111,	// (0x0000b111) shortcut_wheel_idle_act4_pane_g

0x65e4,	// (0x000065e4) middle_sk_idle_act4_pane_g1_ParamLimits

0x65e4,	// (0x000065e4) middle_sk_idle_act4_pane_g1

0xe115,	// (0x0000e115) middle_sk_idle_act4_pane_g2_ParamLimits

0xe115,	// (0x0000e115) middle_sk_idle_act4_pane_g2

0x0001,

0xf006,	// (0x0000f006) middle_sk_idle_act4_pane_g_ParamLimits

0xf006,	// (0x0000f006) middle_sk_idle_act4_pane_g

0xe12d,	// (0x0000e12d) middle_sk_idle_act4_pane_t1_ParamLimits

0xe12d,	// (0x0000e12d) middle_sk_idle_act4_pane_t1

0xe15c,	// (0x0000e15c) grid_ai_shortcut_pane_ParamLimits

0xe15c,	// (0x0000e15c) grid_ai_shortcut_pane

0xe179,	// (0x0000e179) list_highlight_pane_cp16_ParamLimits

0xe179,	// (0x0000e179) list_highlight_pane_cp16

0xe186,	// (0x0000e186) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe186,	// (0x0000e186) list_single_idle_plugin_shortcut_pane_g1

0xe192,	// (0x0000e192) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe192,	// (0x0000e192) list_single_idle_plugin_shortcut_pane_g2

0xe1ae,	// (0x0000e1ae) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe1ae,	// (0x0000e1ae) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf00b,	// (0x0000f00b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf00b,	// (0x0000f00b) list_single_idle_plugin_shortcut_pane_g

0xe1c3,	// (0x0000e1c3) cell_ai_shortcut_pane_ParamLimits

0xe1c3,	// (0x0000e1c3) cell_ai_shortcut_pane

0xe1d9,	// (0x0000e1d9) cell_ai_shortcut_pane_g1_ParamLimits

0xe1d9,	// (0x0000e1d9) cell_ai_shortcut_pane_g1

0x866e,	// (0x0000866e) ai_gene_pane_1_cp2

0x8860,	// (0x00008860) ai_gene_pane_2_cp2

0x8868,	// (0x00008868) list_highlight_pane_cp15

0x8871,	// (0x00008871) list_single_idle_plugin_calendar_pane_g1

0x8868,	// (0x00008868) list_highlight_pane_cp17

0x8879,	// (0x00008879) list_single_idle_plugin_calendar_pane_g1_copy1

0x8881,	// (0x00008881) list_single_idle_plugin_player_pane_g1

0x5594,	// (0x00005594) list_single_idle_plugin_player_pane_g2

0x0001,

0xb140,	// (0x0000b140) list_single_idle_plugin_player_pane_g

0x8889,	// (0x00008889) list_single_idle_plugin_player_pane_t1

0x8897,	// (0x00008897) list_single_idle_plugin_player_pane_t2

0x88a5,	// (0x000088a5) list_single_idle_plugin_player_pane_t3

0x88b3,	// (0x000088b3) list_single_idle_plugin_player_pane_t4

0x0003,

0xb145,	// (0x0000b145) list_single_idle_plugin_player_pane_t

0x88c1,	// (0x000088c1) wait_bar_pane_cp15

0x88c9,	// (0x000088c9) grid_ai_notification_pane

0x5594,	// (0x00005594) list_single_idle_plugin_notification_pane_g1

0xe1fb,	// (0x0000e1fb) cell_ai_notification_pane_ParamLimits

0xe1fb,	// (0x0000e1fb) cell_ai_notification_pane

0x88df,	// (0x000088df) cell_ai_notification_pane_g1

0x88e7,	// (0x000088e7) cell_ai_notification_pane_t1

0xe208,	// (0x0000e208) tb_ext_find_button_pane

0xe210,	// (0x0000e210) tb_ext_find_pane_g1

0xe218,	// (0x0000e218) tb_ext_find_pane_t1

0x1cf5,	// (0x00001cf5) tb_ext_find_button_pane_g1

0x8913,	// (0x00008913) tb_ext_find_button_pane_g2

0x0001,

0xb14e,	// (0x0000b14e) tb_ext_find_button_pane_g

0xe027,	// (0x0000e027) main_idle_act4_pane_t1_ParamLimits

0xe03d,	// (0x0000e03d) main_idle_act4_pane_t2_ParamLimits

0xeff1,	// (0x0000eff1) main_idle_act4_pane_t_ParamLimits

0xe071,	// (0x0000e071) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe088,	// (0x0000e088) sat_plugin_idle_act4_pane_ParamLimits

0xe088,	// (0x0000e088) sat_plugin_idle_act4_pane

0xe226,	// (0x0000e226) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe226,	// (0x0000e226) sat_plugin_idle_act4_pane_t1

0xe23e,	// (0x0000e23e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe23e,	// (0x0000e23e) sat_plugin_idle_act4_pane_t2

0xe256,	// (0x0000e256) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe256,	// (0x0000e256) sat_plugin_idle_act4_pane_t3

0xe26e,	// (0x0000e26e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe26e,	// (0x0000e26e) sat_plugin_idle_act4_pane_t4

0x0003,

0xf012,	// (0x0000f012) sat_plugin_idle_act4_pane_t_ParamLimits

0xf012,	// (0x0000f012) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0819,	// (0x00000819) bg_popup_sub_pane_cp25_ParamLimits

0x0819,	// (0x00000819) bg_popup_sub_pane_cp25

0x8968,	// (0x00008968) popup_battery_window_g1_ParamLimits

0x8968,	// (0x00008968) popup_battery_window_g1

0x8974,	// (0x00008974) popup_battery_window_t1_ParamLimits

0x8974,	// (0x00008974) popup_battery_window_t1

0x8986,	// (0x00008986) popup_battery_window_t2_ParamLimits

0x8986,	// (0x00008986) popup_battery_window_t2

0x0001,

0xb15c,	// (0x0000b15c) popup_battery_window_t_ParamLimits

0xb15c,	// (0x0000b15c) popup_battery_window_t

0xc01d,	// (0x0000c01d) midp_canvas_pane_ParamLimits

0xc07a,	// (0x0000c07a) midp_keypad_pane_ParamLimits

0xc07a,	// (0x0000c07a) midp_keypad_pane

0x2b0e,	// (0x00002b0e) main_midp_pane_ParamLimits

0x5ebc,	// (0x00005ebc) signal_pane_g2_cp_ParamLimits

0xe286,	// (0x0000e286) aid_size_cell_midp_keypad_ParamLimits

0xe286,	// (0x0000e286) aid_size_cell_midp_keypad

0xe2a4,	// (0x0000e2a4) midp_keyp_game_grid_pane_ParamLimits

0xe2a4,	// (0x0000e2a4) midp_keyp_game_grid_pane

0xe2cb,	// (0x0000e2cb) midp_keyp_rocker_pane_ParamLimits

0xe2cb,	// (0x0000e2cb) midp_keyp_rocker_pane

0xe30c,	// (0x0000e30c) midp_keyp_sk_left_pane_ParamLimits

0xe30c,	// (0x0000e30c) midp_keyp_sk_left_pane

0xe360,	// (0x0000e360) midp_keyp_sk_right_pane_ParamLimits

0xe360,	// (0x0000e360) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe3b4,	// (0x0000e3b4) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe3b4,	// (0x0000e3b4) midp_keyp_sk_right_pane_g1

0x64dd,	// (0x000064dd) midp_keyp_rocker_pane_g1

0xe3bd,	// (0x0000e3bd) keyp_game_cell_pane_ParamLimits

0xe3bd,	// (0x0000e3bd) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe3e1,	// (0x0000e3e1) keyp_game_cell_pane_g1

0xb3dd,	// (0x0000b3dd) popup_fep_vkb2_window_ParamLimits

0xb3dd,	// (0x0000b3dd) popup_fep_vkb2_window

0xe3ea,	// (0x0000e3ea) aid_size_cell_vkb2_ParamLimits

0xe3ea,	// (0x0000e3ea) aid_size_cell_vkb2

0xe420,	// (0x0000e420) popup_fep_vkb2_window_g1_ParamLimits

0xe420,	// (0x0000e420) popup_fep_vkb2_window_g1

0xe467,	// (0x0000e467) vkb2_area_bottom_pane_ParamLimits

0xe467,	// (0x0000e467) vkb2_area_bottom_pane

0xe4bb,	// (0x0000e4bb) vkb2_area_keypad_pane_ParamLimits

0xe4bb,	// (0x0000e4bb) vkb2_area_keypad_pane

0xe503,	// (0x0000e503) vkb2_area_top_pane_ParamLimits

0xe503,	// (0x0000e503) vkb2_area_top_pane

0xe589,	// (0x0000e589) vkb2_top_entry_pane_ParamLimits

0xe589,	// (0x0000e589) vkb2_top_entry_pane

0xe5b6,	// (0x0000e5b6) vkb2_top_grid_left_pane_ParamLimits

0xe5b6,	// (0x0000e5b6) vkb2_top_grid_left_pane

0xe5d6,	// (0x0000e5d6) vkb2_top_grid_right_pane_ParamLimits

0xe5d6,	// (0x0000e5d6) vkb2_top_grid_right_pane

0x8cf1,	// (0x00008cf1) vkb2_cell_keypad_pane_ParamLimits

0x8cf1,	// (0x00008cf1) vkb2_cell_keypad_pane

0xe61c,	// (0x0000e61c) vkb2_area_bottom_grid_pane_ParamLimits

0xe61c,	// (0x0000e61c) vkb2_area_bottom_grid_pane

0xe646,	// (0x0000e646) vkb2_area_bottom_pane_g1_ParamLimits

0xe646,	// (0x0000e646) vkb2_area_bottom_pane_g1

0xe66c,	// (0x0000e66c) vkb2_area_bottom_pane_g2_ParamLimits

0xe66c,	// (0x0000e66c) vkb2_area_bottom_pane_g2

0xe69d,	// (0x0000e69d) vkb2_area_bottom_pane_g3_ParamLimits

0xe69d,	// (0x0000e69d) vkb2_area_bottom_pane_g3

0x0002,

0xf01b,	// (0x0000f01b) vkb2_area_bottom_pane_g_ParamLimits

0xf01b,	// (0x0000f01b) vkb2_area_bottom_pane_g

0x8e9b,	// (0x00008e9b) vkb2_top_cell_left_pane_ParamLimits

0x8e9b,	// (0x00008e9b) vkb2_top_cell_left_pane

0xe707,	// (0x0000e707) vkb2_top_entry_pane_g1_ParamLimits

0xe707,	// (0x0000e707) vkb2_top_entry_pane_g1

0xe715,	// (0x0000e715) vkb2_top_entry_pane_t1_ParamLimits

0xe715,	// (0x0000e715) vkb2_top_entry_pane_t1

0x8f03,	// (0x00008f03) vkb2_top_entry_pane_t2_ParamLimits

0x8f03,	// (0x00008f03) vkb2_top_entry_pane_t2

0x8f35,	// (0x00008f35) vkb2_top_entry_pane_t3_ParamLimits

0x8f35,	// (0x00008f35) vkb2_top_entry_pane_t3

0x0002,

0xf022,	// (0x0000f022) vkb2_top_entry_pane_t_ParamLimits

0xf022,	// (0x0000f022) vkb2_top_entry_pane_t

0xe74e,	// (0x0000e74e) vkb2_top_grid_right_pane_g1_ParamLimits

0xe74e,	// (0x0000e74e) vkb2_top_grid_right_pane_g1

0x8f9c,	// (0x00008f9c) vkb2_top_grid_right_pane_g2_ParamLimits

0x8f9c,	// (0x00008f9c) vkb2_top_grid_right_pane_g2

0x8fb4,	// (0x00008fb4) vkb2_top_grid_right_pane_g3_ParamLimits

0x8fb4,	// (0x00008fb4) vkb2_top_grid_right_pane_g3

0xe764,	// (0x0000e764) vkb2_top_grid_right_pane_g4_ParamLimits

0xe764,	// (0x0000e764) vkb2_top_grid_right_pane_g4

0x0003,

0xf029,	// (0x0000f029) vkb2_top_grid_right_pane_g_ParamLimits

0xf029,	// (0x0000f029) vkb2_top_grid_right_pane_g

0x8fe2,	// (0x00008fe2) vkb2_top_cell_left_pane_g1

0x8ff9,	// (0x00008ff9) vkb2_cell_keypad_pane_g1_ParamLimits

0x8ff9,	// (0x00008ff9) vkb2_cell_keypad_pane_g1

0x9007,	// (0x00009007) vkb2_cell_keypad_pane_t1_ParamLimits

0x9007,	// (0x00009007) vkb2_cell_keypad_pane_t1

0x901e,	// (0x0000901e) vkb2_cell_bottom_grid_pane_ParamLimits

0x901e,	// (0x0000901e) vkb2_cell_bottom_grid_pane

0x9057,	// (0x00009057) vkb2_cell_bottom_grid_pane_g1

0xe0b9,	// (0x0000e0b9) aid_call2_pane_cp02

0xe0c1,	// (0x0000e0c1) aid_call_pane_cp02

0xe0c9,	// (0x0000e0c9) clock_digital_number_pane_cp10

0xe0d1,	// (0x0000e0d1) clock_digital_number_pane_cp11

0xe0d9,	// (0x0000e0d9) clock_digital_number_pane_cp12

0xe0e1,	// (0x0000e0e1) clock_digital_number_pane_cp13

0xe0e9,	// (0x0000e0e9) clock_digital_separator_pane_cp10

0x1cf5,	// (0x00001cf5) popup_clock_digital_analogue_window_cp2_g1

0x1cf5,	// (0x00001cf5) popup_clock_digital_analogue_window_cp2_g2

0xe0f1,	// (0x0000e0f1) popup_clock_digital_analogue_window_cp2_g3

0x1cf5,	// (0x00001cf5) popup_clock_digital_analogue_window_cp2_g4

0xe0f1,	// (0x0000e0f1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xeff6,	// (0x0000eff6) popup_clock_digital_analogue_window_cp2_g

0xe0f9,	// (0x0000e0f9) popup_clock_digital_analogue_window_cp2_t1

0xe107,	// (0x0000e107) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf001,	// (0x0000f001) popup_clock_digital_analogue_window_cp2_t

0x64dd,	// (0x000064dd) clock_digital_number_pane_cp10_g1

0x64dd,	// (0x000064dd) clock_digital_number_pane_cp10_g2

0x0001,

0xaf1e,	// (0x0000af1e) clock_digital_number_pane_cp10_g

0x64dd,	// (0x000064dd) clock_digital_separator_pane_cp10_g1

0x64dd,	// (0x000064dd) clock_digital_separator_pane_cp10_g2

0x0001,

0xaf1e,	// (0x0000af1e) clock_digital_separator_pane_cp10_g

0x85b8,	// (0x000085b8) uniindi_top_pane_g3

0x85c9,	// (0x000085c9) uniindi_top_pane_g4

0x8d7c,	// (0x00008d7c) vkb2_row_keypad_pane_ParamLimits

0x8d7c,	// (0x00008d7c) vkb2_row_keypad_pane

0x9077,	// (0x00009077) vkb2_cell_t_keypad_pane_ParamLimits

0x9077,	// (0x00009077) vkb2_cell_t_keypad_pane

0x9087,	// (0x00009087) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9087,	// (0x00009087) vkb2_cell_t_keypad_pane_cp08

0x909a,	// (0x0000909a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x909a,	// (0x0000909a) vkb2_cell_t_keypad_pane_cp09

0x90ae,	// (0x000090ae) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x90ae,	// (0x000090ae) vkb2_cell_t_keypad_pane_cp01

0x90bf,	// (0x000090bf) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x90bf,	// (0x000090bf) vkb2_cell_t_keypad_pane_cp02

0x90d0,	// (0x000090d0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x90d0,	// (0x000090d0) vkb2_cell_t_keypad_pane_cp03

0x90e1,	// (0x000090e1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x90e1,	// (0x000090e1) vkb2_cell_t_keypad_pane_cp04

0x90f2,	// (0x000090f2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x90f2,	// (0x000090f2) vkb2_cell_t_keypad_pane_cp05

0x9103,	// (0x00009103) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9103,	// (0x00009103) vkb2_cell_t_keypad_pane_cp06

0x9114,	// (0x00009114) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9114,	// (0x00009114) vkb2_cell_t_keypad_pane_cp07

0x9125,	// (0x00009125) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9125,	// (0x00009125) vkb2_cell_t_keypad_pane_cp10

0x696c,	// (0x0000696c) vkb2_cell_t_keypad_pane_g1

0x913a,	// (0x0000913a) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe77a,	// (0x0000e77a) aid_size_cell_graphic2_ParamLimits

0xe77a,	// (0x0000e77a) aid_size_cell_graphic2

0xe7b8,	// (0x0000e7b8) bg_popup_window_pane_cp21_ParamLimits

0xe7b8,	// (0x0000e7b8) bg_popup_window_pane_cp21

0xe7c6,	// (0x0000e7c6) graphic2_pages_pane_ParamLimits

0xe7c6,	// (0x0000e7c6) graphic2_pages_pane

0xe81c,	// (0x0000e81c) grid_graphic2_control_pane_ParamLimits

0xe81c,	// (0x0000e81c) grid_graphic2_control_pane

0xe864,	// (0x0000e864) grid_graphic2_pane_ParamLimits

0xe864,	// (0x0000e864) grid_graphic2_pane

0xe8eb,	// (0x0000e8eb) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7ce8,	// (0x00007ce8) list_ai3_gene_pane_ParamLimits

0xdd92,	// (0x0000dd92) bg_popup_window_pane_cp19_ParamLimits

0x813a,	// (0x0000813a) bg_touch_area_indi_pane_ParamLimits

0x813a,	// (0x0000813a) bg_touch_area_indi_pane

0x8150,	// (0x00008150) bg_touch_area_indi_pane_cp01_ParamLimits

0x8150,	// (0x00008150) bg_touch_area_indi_pane_cp01

0x8166,	// (0x00008166) bg_touch_area_indi_pane_cp02_ParamLimits

0x8166,	// (0x00008166) bg_touch_area_indi_pane_cp02

0x817e,	// (0x0000817e) bg_touch_area_indi_pane_cp03_ParamLimits

0x817e,	// (0x0000817e) bg_touch_area_indi_pane_cp03

0x8198,	// (0x00008198) popup_slider_window_g1_ParamLimits

0x81b4,	// (0x000081b4) popup_slider_window_g2_ParamLimits

0x81d0,	// (0x000081d0) popup_slider_window_g3_ParamLimits

0xefda,	// (0x0000efda) popup_slider_window_g_ParamLimits

0x822c,	// (0x0000822c) popup_slider_window_t1_ParamLimits

0x82a0,	// (0x000082a0) small_volume_slider_vertical_pane_ParamLimits

0xe8eb,	// (0x0000e8eb) cell_graphic2_pane_ParamLimits

0xe948,	// (0x0000e948) bg_button_pane_cp10_ParamLimits

0xe948,	// (0x0000e948) bg_button_pane_cp10

0xe95b,	// (0x0000e95b) bg_button_pane_cp11_ParamLimits

0xe95b,	// (0x0000e95b) bg_button_pane_cp11

0xe96e,	// (0x0000e96e) graphic2_pages_pane_g1_ParamLimits

0xe96e,	// (0x0000e96e) graphic2_pages_pane_g1

0xe989,	// (0x0000e989) graphic2_pages_pane_g2_ParamLimits

0xe989,	// (0x0000e989) graphic2_pages_pane_g2

0x0001,

0xf037,	// (0x0000f037) graphic2_pages_pane_g_ParamLimits

0xf037,	// (0x0000f037) graphic2_pages_pane_g

0xe9a1,	// (0x0000e9a1) graphic2_pages_pane_t1_ParamLimits

0xe9a1,	// (0x0000e9a1) graphic2_pages_pane_t1

0xe9b9,	// (0x0000e9b9) cell_graphic2_control_pane_ParamLimits

0xe9b9,	// (0x0000e9b9) cell_graphic2_control_pane

0xe9eb,	// (0x0000e9eb) cell_graphic2_pane_g1_ParamLimits

0xe9eb,	// (0x0000e9eb) cell_graphic2_pane_g1

0x677f,	// (0x0000677f) cell_graphic2_pane_g2_ParamLimits

0x677f,	// (0x0000677f) cell_graphic2_pane_g2

0xe9f8,	// (0x0000e9f8) cell_graphic2_pane_g3_ParamLimits

0xe9f8,	// (0x0000e9f8) cell_graphic2_pane_g3

0x678c,	// (0x0000678c) cell_graphic2_pane_g4_ParamLimits

0x678c,	// (0x0000678c) cell_graphic2_pane_g4

0xea05,	// (0x0000ea05) cell_graphic2_pane_g5_ParamLimits

0xea05,	// (0x0000ea05) cell_graphic2_pane_g5

0x0004,

0xf03c,	// (0x0000f03c) cell_graphic2_pane_g_ParamLimits

0xf03c,	// (0x0000f03c) cell_graphic2_pane_g

0xea25,	// (0x0000ea25) cell_graphic2_pane_t1_ParamLimits

0xea25,	// (0x0000ea25) cell_graphic2_pane_t1

0x465f,	// (0x0000465f) grid_highlight_pane_cp11_ParamLimits

0x465f,	// (0x0000465f) grid_highlight_pane_cp11

0x0819,	// (0x00000819) bg_button_pane_cp05

0xea5a,	// (0x0000ea5a) cell_graphic2_control_pane_g1

0x64dd,	// (0x000064dd) bg_touch_area_indi_pane_g1

0x9408,	// (0x00009408) aid_cmod_rocker_key_size

0x9412,	// (0x00009412) aid_cmode_itu_key_size

0x941c,	// (0x0000941c) main_cmode_video_pane

0x9426,	// (0x00009426) main_comp_mode_itu_pane

0x9432,	// (0x00009432) main_comp_mode_rocker_pane

0x943e,	// (0x0000943e) cell_cmode_rocker_pane_ParamLimits

0x943e,	// (0x0000943e) cell_cmode_rocker_pane

0x9450,	// (0x00009450) cell_cmode_itu_pane_ParamLimits

0x9450,	// (0x00009450) cell_cmode_itu_pane

0x134f,	// (0x0000134f) bg_button_pane_cp06_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane_cp06

0x696c,	// (0x0000696c) cell_cmode_rocker_pane_g1_ParamLimits

0x696c,	// (0x0000696c) cell_cmode_rocker_pane_g1

0x8416,	// (0x00008416) cell_cmode_rocker_pane_g2_ParamLimits

0x8416,	// (0x00008416) cell_cmode_rocker_pane_g2

0x0001,

0xb192,	// (0x0000b192) cell_cmode_rocker_pane_g_ParamLimits

0xb192,	// (0x0000b192) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x9465,	// (0x00009465) cell_cmode_itu_pane_g1

0x946e,	// (0x0000946e) cell_cmode_itu_pane_t1

0x947c,	// (0x0000947c) cell_cmode_itu_pane_t2

0x0001,

0xb197,	// (0x0000b197) cell_cmode_itu_pane_t

0x863a,	// (0x0000863a) aid_touch_ctrl_left

0x8642,	// (0x00008642) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xea80,	// (0x0000ea80) aid_cmod_rocker_key_size_cp

0xea8a,	// (0x0000ea8a) aid_cmode_itu_key_size_cp

0x949e,	// (0x0000949e) compa_mode_pane_g1

0x94a6,	// (0x000094a6) compa_mode_pane_g2

0x94ae,	// (0x000094ae) compa_mode_pane_g3

0x0002,

0xb19c,	// (0x0000b19c) compa_mode_pane_g

0xea94,	// (0x0000ea94) main_comp_mode_itu_pane_cp

0xea9c,	// (0x0000ea9c) main_comp_mode_rocker_pane_cp

0xeaa4,	// (0x0000eaa4) cell_cmode_itu_pane_cp_ParamLimits

0xeaa4,	// (0x0000eaa4) cell_cmode_itu_pane_cp

0xeab9,	// (0x0000eab9) cell_cmode_rocker_pane_cp_ParamLimits

0xeab9,	// (0x0000eab9) cell_cmode_rocker_pane_cp

0x134f,	// (0x0000134f) bg_button_pane_cp06_cp_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane_cp06_cp

0x696c,	// (0x0000696c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x696c,	// (0x0000696c) cell_cmode_rocker_pane_g1_cp

0x64dd,	// (0x000064dd) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xeacb,	// (0x0000eacb) cell_cmode_itu_pane_g1_cp

0xead4,	// (0x0000ead4) cell_cmode_itu_pane_t1_cp

0xead4,	// (0x0000ead4) cell_cmode_itu_pane_t2_cp

0xd282,	// (0x0000d282) settings_code_pane_cp2

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp3_ParamLimits

0x09e7,	// (0x000009e7) heading_pane_cp3_ParamLimits

0x09f3,	// (0x000009f3) listscroll_popup_graphic_pane_ParamLimits

0x653d,	// (0x0000653d) fep_hwr_aid_pane_ParamLimits

0x831c,	// (0x0000831c) aid_touch_sctrl_top_ParamLimits

0x8329,	// (0x00008329) sctrl_sk_top_pane_g1_ParamLimits

0x696c,	// (0x0000696c) sctrl_sk_top_pane_g2_ParamLimits

0xb0d2,	// (0x0000b0d2) sctrl_sk_top_pane_g_ParamLimits

0x8336,	// (0x00008336) sctrl_sk_top_pane_t1_ParamLimits

0x831c,	// (0x0000831c) aid_touch_sctrl_bottom_ParamLimits

0x8336,	// (0x00008336) sctrl_sk_bottom_pane_t1_ParamLimits

0x8584,	// (0x00008584) aid_area_touch_clock

0xe54b,	// (0x0000e54b) aid_vkb2_area_top_pane_cell_ParamLimits

0xe54b,	// (0x0000e54b) aid_vkb2_area_top_pane_cell

0xe5f6,	// (0x0000e5f6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe5f6,	// (0x0000e5f6) aid_vkb2_area_bottom_pane_cell

0x8ebb,	// (0x00008ebb) popup_char_count_window

0x9504,	// (0x00009504) popup_char_count_window_g1

0x950d,	// (0x0000950d) popup_char_count_window_g2

0x9516,	// (0x00009516) popup_char_count_window_g3

0x0002,

0xb1a3,	// (0x0000b1a3) popup_char_count_window_g

0x951f,	// (0x0000951f) popup_char_count_window_t1

0x8b21,	// (0x00008b21) popup_fep_char_preview_window_ParamLimits

0x8b21,	// (0x00008b21) popup_fep_char_preview_window

0xe56b,	// (0x0000e56b) vkb2_top_candi_pane_ParamLimits

0xe56b,	// (0x0000e56b) vkb2_top_candi_pane

0xeae2,	// (0x0000eae2) cell_vkb2_top_candi_pane_ParamLimits

0xeae2,	// (0x0000eae2) cell_vkb2_top_candi_pane

0x3e98,	// (0x00003e98) bg_popup_fep_char_preview_window_ParamLimits

0x3e98,	// (0x00003e98) bg_popup_fep_char_preview_window

0x957a,	// (0x0000957a) popup_fep_char_preview_window_t1_ParamLimits

0x957a,	// (0x0000957a) popup_fep_char_preview_window_t1

0x95b4,	// (0x000095b4) bg_popup_fep_char_preview_window_g1

0x95bc,	// (0x000095bc) bg_popup_fep_char_preview_window_g2

0x95c4,	// (0x000095c4) bg_popup_fep_char_preview_window_g3

0x95cc,	// (0x000095cc) bg_popup_fep_char_preview_window_g4

0x95d4,	// (0x000095d4) bg_popup_fep_char_preview_window_g5

0x95dc,	// (0x000095dc) bg_popup_fep_char_preview_window_g6

0x95e4,	// (0x000095e4) bg_popup_fep_char_preview_window_g7

0x95ec,	// (0x000095ec) bg_popup_fep_char_preview_window_g8

0x95f4,	// (0x000095f4) bg_popup_fep_char_preview_window_g9

0x0008,

0xb1aa,	// (0x0000b1aa) bg_popup_fep_char_preview_window_g

0x696c,	// (0x0000696c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x696c,	// (0x0000696c) cell_vkb2_top_candi_pane_g1

0x6cdf,	// (0x00006cdf) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6cdf,	// (0x00006cdf) cell_vkb2_top_candi_pane_g2

0x6d00,	// (0x00006d00) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6d00,	// (0x00006d00) cell_vkb2_top_candi_pane_g3

0x95fc,	// (0x000095fc) cell_vkb2_top_candi_pane_g4_ParamLimits

0x95fc,	// (0x000095fc) cell_vkb2_top_candi_pane_g4

0x961d,	// (0x0000961d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x961d,	// (0x0000961d) cell_vkb2_top_candi_pane_g5

0x8416,	// (0x00008416) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8416,	// (0x00008416) cell_vkb2_top_candi_pane_g6

0x0005,

0xb1bd,	// (0x0000b1bd) cell_vkb2_top_candi_pane_g_ParamLimits

0xb1bd,	// (0x0000b1bd) cell_vkb2_top_candi_pane_g

0x963e,	// (0x0000963e) cell_vkb2_top_candi_pane_t1

0x4d8f,	// (0x00004d8f) aid_size_touch_slider_mark_ParamLimits

0x4d8f,	// (0x00004d8f) aid_size_touch_slider_mark

0xe802,	// (0x0000e802) grid_graphic2_catg_pane_ParamLimits

0xe802,	// (0x0000e802) grid_graphic2_catg_pane

0xe8be,	// (0x0000e8be) popup_grid_graphic2_window_t1_ParamLimits

0xe8be,	// (0x0000e8be) popup_grid_graphic2_window_t1

0xe8d4,	// (0x0000e8d4) popup_grid_graphic2_window_t2_ParamLimits

0xe8d4,	// (0x0000e8d4) popup_grid_graphic2_window_t2

0x0001,

0xf032,	// (0x0000f032) popup_grid_graphic2_window_t_ParamLimits

0xf032,	// (0x0000f032) popup_grid_graphic2_window_t

0x0819,	// (0x00000819) bg_button_pane_cp05_ParamLimits

0xea5a,	// (0x0000ea5a) cell_graphic2_control_pane_g1_ParamLimits

0xeb48,	// (0x0000eb48) cell_graphic2_catg_pane_ParamLimits

0xeb48,	// (0x0000eb48) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xeb5a,	// (0x0000eb5a) cell_graphic2_catg_pane_g1

0x8550,	// (0x00008550) cell_tb_ext_pane_t1_ParamLimits

0x8f59,	// (0x00008f59) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8f59,	// (0x00008f59) vkb2_top_cell_right_narrow_pane

0x8f71,	// (0x00008f71) vkb2_top_cell_right_wide_pane_ParamLimits

0x8f71,	// (0x00008f71) vkb2_top_cell_right_wide_pane

0x652f,	// (0x0000652f) bg_vkb2_func_pane_ParamLimits

0x652f,	// (0x0000652f) bg_vkb2_func_pane

0x8fe2,	// (0x00008fe2) vkb2_top_cell_left_pane_g1_ParamLimits

0x652f,	// (0x0000652f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x652f,	// (0x0000652f) bg_vkb2_fuc_pane_cp03

0x9057,	// (0x00009057) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x364b,	// (0x0000364b) bg_vkb2_func_pane_g1

0x3653,	// (0x00003653) bg_vkb2_func_pane_g2

0x3663,	// (0x00003663) bg_vkb2_func_pane_g3

0x365b,	// (0x0000365b) bg_vkb2_func_pane_g4

0x366b,	// (0x0000366b) bg_vkb2_func_pane_g5

0x3673,	// (0x00003673) bg_vkb2_func_pane_g6

0x367b,	// (0x0000367b) bg_vkb2_func_pane_g7

0x3683,	// (0x00003683) bg_vkb2_func_pane_g8

0x3643,	// (0x00003643) bg_vkb2_func_pane_g9

0x0008,

0xb1ca,	// (0x0000b1ca) bg_vkb2_func_pane_g

0x652f,	// (0x0000652f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x652f,	// (0x0000652f) bg_vkb2_fuc_pane_cp01

0x8fe2,	// (0x00008fe2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8fe2,	// (0x00008fe2) vkb2_top_cell_right_wide_pane_g1

0x652f,	// (0x0000652f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x652f,	// (0x0000652f) bg_vkb2_fuc_pane_cp02

0x9057,	// (0x00009057) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9057,	// (0x00009057) vkb2_top_cell_right_narrow_pane_g1

0xdccc,	// (0x0000dccc) aid_touch_area_decrease_ParamLimits

0xdccc,	// (0x0000dccc) aid_touch_area_decrease

0xdd06,	// (0x0000dd06) aid_touch_area_increase_ParamLimits

0xdd06,	// (0x0000dd06) aid_touch_area_increase

0xdd2e,	// (0x0000dd2e) aid_touch_area_mute_ParamLimits

0xdd2e,	// (0x0000dd2e) aid_touch_area_mute

0xdd5e,	// (0x0000dd5e) aid_touch_area_slider_ParamLimits

0xdd5e,	// (0x0000dd5e) aid_touch_area_slider

0xdd9e,	// (0x0000dd9e) popup_slider_window_g4_ParamLimits

0xdd9e,	// (0x0000dd9e) popup_slider_window_g4

0xddc6,	// (0x0000ddc6) popup_slider_window_g5_ParamLimits

0xddc6,	// (0x0000ddc6) popup_slider_window_g5

0xddfa,	// (0x0000ddfa) popup_slider_window_g6_ParamLimits

0xddfa,	// (0x0000ddfa) popup_slider_window_g6

0x825a,	// (0x0000825a) popup_slider_window_t2_ParamLimits

0x825a,	// (0x0000825a) popup_slider_window_t2

0x0001,

0xb0c6,	// (0x0000b0c6) popup_slider_window_t_ParamLimits

0xb0c6,	// (0x0000b0c6) popup_slider_window_t

0xde16,	// (0x0000de16) slider_pane_ParamLimits

0xde16,	// (0x0000de16) slider_pane

0x9678,	// (0x00009678) slider_pane_g1_ParamLimits

0x9678,	// (0x00009678) slider_pane_g1

0x968c,	// (0x0000968c) slider_pane_g2_ParamLimits

0x968c,	// (0x0000968c) slider_pane_g2

0x96a2,	// (0x000096a2) slider_pane_g3_ParamLimits

0x96a2,	// (0x000096a2) slider_pane_g3

0x0003,

0xb1dd,	// (0x0000b1dd) slider_pane_g_ParamLimits

0xb1dd,	// (0x0000b1dd) slider_pane_g

0xc87a,	// (0x0000c87a) popup_tb_float_extension_window_ParamLimits

0xc87a,	// (0x0000c87a) popup_tb_float_extension_window

0x96ce,	// (0x000096ce) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x96da,	// (0x000096da) grid_tb_float_ext_pane

0x96e4,	// (0x000096e4) cell_tb_float_ext_pane_ParamLimits

0x96e4,	// (0x000096e4) cell_tb_float_ext_pane

0x96fe,	// (0x000096fe) cell_tb_float_ext_pane_g1

0x9707,	// (0x00009707) grid_highlight_pane_cp12

0xd647,	// (0x0000d647) cell_last_hwr_side_pane_ParamLimits

0xd647,	// (0x0000d647) cell_last_hwr_side_pane

0x64dd,	// (0x000064dd) cell_last_hwr_side_pane_g1

0x9710,	// (0x00009710) cell_last_hwr_side_pane_g2

0x0001,

0xb1e6,	// (0x0000b1e6) cell_last_hwr_side_pane_g

0xe6d2,	// (0x0000e6d2) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe6d2,	// (0x0000e6d2) vkb2_area_bottom_space_btn_pane

0x696c,	// (0x0000696c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x913a,	// (0x0000913a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x963e,	// (0x0000963e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9719,	// (0x00009719) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9719,	// (0x00009719) vkb2_area_bottom_space_btn_pane_g1

0x9753,	// (0x00009753) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9753,	// (0x00009753) vkb2_area_bottom_space_btn_pane_g2

0x9789,	// (0x00009789) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9789,	// (0x00009789) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb1eb,	// (0x0000b1eb) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb1eb,	// (0x0000b1eb) vkb2_area_bottom_space_btn_pane_g

0x65f2,	// (0x000065f2) cel_fep_hwr_func_pane_ParamLimits

0x65f2,	// (0x000065f2) cel_fep_hwr_func_pane

0xd61c,	// (0x0000d61c) cell_hwr_side_button_pane_ParamLimits

0xd61c,	// (0x0000d61c) cell_hwr_side_button_pane

0x8584,	// (0x00008584) aid_area_touch_clock_ParamLimits

0x0819,	// (0x00000819) bg_uniindi_top_pane_ParamLimits

0x8596,	// (0x00008596) uniindi_top_pane_g1_ParamLimits

0x85ac,	// (0x000085ac) uniindi_top_pane_g2_ParamLimits

0x85b8,	// (0x000085b8) uniindi_top_pane_g3_ParamLimits

0x85c9,	// (0x000085c9) uniindi_top_pane_g4_ParamLimits

0xb0fe,	// (0x0000b0fe) uniindi_top_pane_g_ParamLimits

0x85d6,	// (0x000085d6) uniindi_top_pane_t1_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp01_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp01

0x97d3,	// (0x000097d3) cel_fep_hwr_func_pane_g1_ParamLimits

0x97d3,	// (0x000097d3) cel_fep_hwr_func_pane_g1

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp02_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp02

0x97d3,	// (0x000097d3) cell_hwr_side_button_pane_g1_ParamLimits

0x97d3,	// (0x000097d3) cell_hwr_side_button_pane_g1

0x3422,	// (0x00003422) status_pane_g4_ParamLimits

0x3422,	// (0x00003422) status_pane_g4

0x343a,	// (0x0000343a) status_pane_t1

0x61e0,	// (0x000061e0) form2_midp_gauge_slider_cont_pane

0x61e8,	// (0x000061e8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd557,	// (0x0000d557) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd56b,	// (0x0000d56b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xef7e,	// (0x0000ef7e) form2_midp_gauge_slider_pane_t_ParamLimits

0x621e,	// (0x0000621e) form2_midp_slider_pane_ParamLimits

0x8ae1,	// (0x00008ae1) aid_size_cell_func_vkb2_ParamLimits

0x8ae1,	// (0x00008ae1) aid_size_cell_func_vkb2

0x96ba,	// (0x000096ba) slider_pane_g4_ParamLimits

0x96ba,	// (0x000096ba) slider_pane_g4

0xeb63,	// (0x0000eb63) form2_midp_gauge_slider_pane_t2_cp01

0xeb73,	// (0x0000eb73) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xeb73,	// (0x0000eb73) form2_midp_gauge_slider_pane_t3_cp01

0x980c,	// (0x0000980c) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9840,	// (0x00009840) navi_smil_pane_g1

0x9848,	// (0x00009848) navi_smil_pane_t1

0x9815,	// (0x00009815) form2_midp_slider_pane_g1

0x981e,	// (0x0000981e) form2_midp_slider_pane_g2

0x9826,	// (0x00009826) form2_midp_slider_pane_g3

0x9815,	// (0x00009815) form2_midp_slider_pane_g4

0xeb92,	// (0x0000eb92) form2_midp_slider_pane_g5

0x0004,

0xf04c,	// (0x0000f04c) form2_midp_slider_pane_g

0x97c3,	// (0x000097c3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x97c3,	// (0x000097c3) vkb2_area_bottom_space_btn_pane_g4

0xca5d,	// (0x0000ca5d) lc0_navi_pane_ParamLimits

0xca5d,	// (0x0000ca5d) lc0_navi_pane

0xcac7,	// (0x0000cac7) lc0_stat_indi_pane_ParamLimits

0xcac7,	// (0x0000cac7) lc0_stat_indi_pane

0xcadc,	// (0x0000cadc) ls0_title_pane_ParamLimits

0xcadc,	// (0x0000cadc) ls0_title_pane

0x134f,	// (0x0000134f) bg_popup_sub_pane_cp14_ParamLimits

0x856b,	// (0x0000856b) list_uniindi_pane_ParamLimits

0x8577,	// (0x00008577) uniindi_top_pane_ParamLimits

0x8612,	// (0x00008612) list_single_uniindi_pane_g1_ParamLimits

0x8625,	// (0x00008625) list_single_uniindi_pane_t1_ParamLimits

0xeb9d,	// (0x0000eb9d) lc0_stat_clock_pane_ParamLimits

0xeb9d,	// (0x0000eb9d) lc0_stat_clock_pane

0xebaa,	// (0x0000ebaa) lc0_stat_indi_pane_g1_ParamLimits

0xebaa,	// (0x0000ebaa) lc0_stat_indi_pane_g1

0xebb7,	// (0x0000ebb7) lc0_stat_indi_pane_g2_ParamLimits

0xebb7,	// (0x0000ebb7) lc0_stat_indi_pane_g2

0x0001,

0xf057,	// (0x0000f057) lc0_stat_indi_pane_g_ParamLimits

0xf057,	// (0x0000f057) lc0_stat_indi_pane_g

0xebc4,	// (0x0000ebc4) lc0_uni_indicator_pane_ParamLimits

0xebc4,	// (0x0000ebc4) lc0_uni_indicator_pane

0x988a,	// (0x0000988a) ls0_title_pane_g1_ParamLimits

0x988a,	// (0x0000988a) ls0_title_pane_g1

0xebd1,	// (0x0000ebd1) ls0_title_pane_t1_ParamLimits

0xebd1,	// (0x0000ebd1) ls0_title_pane_t1

0xebff,	// (0x0000ebff) lc0_uni_indicator_pane_g1_ParamLimits

0xebff,	// (0x0000ebff) lc0_uni_indicator_pane_g1

0x98ea,	// (0x000098ea) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x98f8,	// (0x000098f8) ai5_sk_pane_ParamLimits

0x98f8,	// (0x000098f8) ai5_sk_pane

0xec2e,	// (0x0000ec2e) cell_ai5_widget_pane_ParamLimits

0xec2e,	// (0x0000ec2e) cell_ai5_widget_pane

0x99d5,	// (0x000099d5) aid_size_cell_widget_grid

0x99e9,	// (0x000099e9) bg_ai5_widget_pane_ParamLimits

0x99e9,	// (0x000099e9) bg_ai5_widget_pane

0x9a33,	// (0x00009a33) cell_ai5_widget_pane_g2

0x9a43,	// (0x00009a43) cell_ai5_widget_pane_g3

0x9a62,	// (0x00009a62) cell_ai5_widget_pane_g4

0x9a6e,	// (0x00009a6e) cell_ai5_widget_pane_g5

0x9a7a,	// (0x00009a7a) cell_ai5_widget_pane_g6

0x9a86,	// (0x00009a86) cell_ai5_widget_pane_g7

0x9ace,	// (0x00009ace) cell_ai5_widget_pane_t1_ParamLimits

0x9ace,	// (0x00009ace) cell_ai5_widget_pane_t1

0x9aeb,	// (0x00009aeb) cell_ai5_widget_pane_t2_ParamLimits

0x9aeb,	// (0x00009aeb) cell_ai5_widget_pane_t2

0x9b03,	// (0x00009b03) cell_ai5_widget_pane_t3_ParamLimits

0x9b03,	// (0x00009b03) cell_ai5_widget_pane_t3

0x9b1b,	// (0x00009b1b) cell_ai5_widget_pane_t4_ParamLimits

0x9b1b,	// (0x00009b1b) cell_ai5_widget_pane_t4

0x9b35,	// (0x00009b35) cell_ai5_widget_pane_t5_ParamLimits

0x9b35,	// (0x00009b35) cell_ai5_widget_pane_t5

0x9b54,	// (0x00009b54) cell_ai5_widget_pane_t6_ParamLimits

0x9b54,	// (0x00009b54) cell_ai5_widget_pane_t6

0x9b66,	// (0x00009b66) cell_ai5_widget_pane_t7_ParamLimits

0x9b66,	// (0x00009b66) cell_ai5_widget_pane_t7

0x9b7f,	// (0x00009b7f) cell_ai5_widget_pane_t8_ParamLimits

0x9b7f,	// (0x00009b7f) cell_ai5_widget_pane_t8

0x0009,

0xb219,	// (0x0000b219) cell_ai5_widget_pane_t_ParamLimits

0xb219,	// (0x0000b219) cell_ai5_widget_pane_t

0x9bcb,	// (0x00009bcb) grid_ai5_widget_pane

0x134f,	// (0x0000134f) highlight_cell_ai5_widget_pane_ParamLimits

0x134f,	// (0x0000134f) highlight_cell_ai5_widget_pane

0xec99,	// (0x0000ec99) ai5_sk_left_pane

0xeca3,	// (0x0000eca3) ai5_sk_middle_pane

0xecad,	// (0x0000ecad) ai5_sk_right_pane

0x9bfd,	// (0x00009bfd) bg_ai5_widget_pane_g1_ParamLimits

0x9bfd,	// (0x00009bfd) bg_ai5_widget_pane_g1

0x9c09,	// (0x00009c09) bg_ai5_widget_pane_g2_ParamLimits

0x9c09,	// (0x00009c09) bg_ai5_widget_pane_g2

0x9c15,	// (0x00009c15) bg_ai5_widget_pane_g3_ParamLimits

0x9c15,	// (0x00009c15) bg_ai5_widget_pane_g3

0x9c21,	// (0x00009c21) bg_ai5_widget_pane_g4_ParamLimits

0x9c21,	// (0x00009c21) bg_ai5_widget_pane_g4

0x9c2d,	// (0x00009c2d) bg_ai5_widget_pane_g5_ParamLimits

0x9c2d,	// (0x00009c2d) bg_ai5_widget_pane_g5

0x9c39,	// (0x00009c39) bg_ai5_widget_pane_g6_ParamLimits

0x9c39,	// (0x00009c39) bg_ai5_widget_pane_g6

0x9c45,	// (0x00009c45) bg_ai5_widget_pane_g7_ParamLimits

0x9c45,	// (0x00009c45) bg_ai5_widget_pane_g7

0x9c51,	// (0x00009c51) bg_ai5_widget_pane_g8_ParamLimits

0x9c51,	// (0x00009c51) bg_ai5_widget_pane_g8

0x9c5d,	// (0x00009c5d) bg_ai5_widget_pane_g9_ParamLimits

0x9c5d,	// (0x00009c5d) bg_ai5_widget_pane_g9

0x0008,

0xb22e,	// (0x0000b22e) bg_ai5_widget_pane_g_ParamLimits

0xb22e,	// (0x0000b22e) bg_ai5_widget_pane_g

0x9c90,	// (0x00009c90) cell_shortcut_ai5_widget_pane_ParamLimits

0x9c90,	// (0x00009c90) cell_shortcut_ai5_widget_pane

0x0659,	// (0x00000659) bg_cell_shortcut_ai5_widget_pane

0x9ca1,	// (0x00009ca1) cell_grid_ai5_widget_pane_g1

0x9caa,	// (0x00009caa) highlight_cell_shortcut_ai5_widget_pane

0x3653,	// (0x00003653) ai5_sk_left_pane_g1

0x9cb2,	// (0x00009cb2) ai5_sk_left_pane_g2

0x9cba,	// (0x00009cba) ai5_sk_left_pane_g3

0x9cc2,	// (0x00009cc2) ai5_sk_left_pane_g4

0x0003,

0xb241,	// (0x0000b241) ai5_sk_left_pane_g

0x9cca,	// (0x00009cca) ai5_sk_left_pane_t1

0x364b,	// (0x0000364b) ai5_sk_right_pane_g1

0x9cd8,	// (0x00009cd8) ai5_sk_right_pane_g2

0x9ce0,	// (0x00009ce0) ai5_sk_right_pane_g3

0x9ce8,	// (0x00009ce8) ai5_sk_right_pane_g4

0x0003,

0xb24a,	// (0x0000b24a) ai5_sk_right_pane_g

0x9cf0,	// (0x00009cf0) ai5_sk_right_pane_t1

0x364b,	// (0x0000364b) ai5_sk_middle_pane_g1

0x3653,	// (0x00003653) ai5_sk_middle_pane_g2

0x366b,	// (0x0000366b) ai5_sk_middle_pane_g3

0x9ce0,	// (0x00009ce0) ai5_sk_middle_pane_g4

0x9cba,	// (0x00009cba) ai5_sk_middle_pane_g5

0x9cfe,	// (0x00009cfe) ai5_sk_middle_pane_g6

0xecb7,	// (0x0000ecb7) ai5_sk_middle_pane_g7

0x0006,

0xf05c,	// (0x0000f05c) ai5_sk_middle_pane_g

0xc949,	// (0x0000c949) aid_touch_area_size_lc0_ParamLimits

0xc949,	// (0x0000c949) aid_touch_area_size_lc0

0x6d21,	// (0x00006d21) cell_hwr_candidate_pane_t1_ParamLimits

0x30ff,	// (0x000030ff) aid_touch_navi_pane

0xcbcf,	// (0x0000cbcf) status_dt_navi_pane_ParamLimits

0xcbcf,	// (0x0000cbcf) status_dt_navi_pane

0xcbe7,	// (0x0000cbe7) status_dt_sta_pane_ParamLimits

0xcbe7,	// (0x0000cbe7) status_dt_sta_pane

0xecbf,	// (0x0000ecbf) dt_sta_controll_pane

0xeccc,	// (0x0000eccc) dt_sta_indi_pane

0xecd9,	// (0x0000ecd9) dt_sta_title_pane

0x0819,	// (0x00000819) bg_dt_sta_indi_pane_ParamLimits

0x0819,	// (0x00000819) bg_dt_sta_indi_pane

0x9d39,	// (0x00009d39) dt_sta_battery_pane

0x9d41,	// (0x00009d41) dt_sta_indi_pane_g1

0x9d4a,	// (0x00009d4a) dt_sta_indi_pane_g2

0x9d53,	// (0x00009d53) dt_sta_indi_pane_g3

0x0002,

0xb262,	// (0x0000b262) dt_sta_indi_pane_g

0x9d5c,	// (0x00009d5c) dt_sta_signal_pane

0x134f,	// (0x0000134f) bg_dt_sta_title_pane_ParamLimits

0x134f,	// (0x0000134f) bg_dt_sta_title_pane

0x47c4,	// (0x000047c4) dt_sta_title_pane_g1

0x9d65,	// (0x00009d65) dt_sta_title_pane_t1_ParamLimits

0x9d65,	// (0x00009d65) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0x9d7a,	// (0x00009d7a) dt_sta_controll_pane_g1

0x9d83,	// (0x00009d83) bg_dt_sta_title_pane_g1

0x9d8c,	// (0x00009d8c) bg_dt_sta_title_pane_g2

0x9d95,	// (0x00009d95) bg_dt_sta_title_pane_g3

0x0002,

0xb269,	// (0x0000b269) bg_dt_sta_title_pane_g

0x64dd,	// (0x000064dd) bg_dt_sta_indi_pane_g1

0x9d9e,	// (0x00009d9e) dt_sta_signal_pane_g1

0x9da6,	// (0x00009da6) dt_sta_signal_pane_g2

0x0001,

0xb270,	// (0x0000b270) dt_sta_signal_pane_g

0x9dae,	// (0x00009dae) dt_sta_battery_pane_g1

0x9db7,	// (0x00009db7) dt_sta_battery_pane_t1

0x64dd,	// (0x000064dd) bg_dt_sta_control_pane_g1

0x1eda,	// (0x00001eda) fep_china_uni_eep_pane

0x1ee2,	// (0x00001ee2) fep_china_uni_entry_pane_ParamLimits

0x1ef2,	// (0x00001ef2) popup_fep_china_uni_window_g1_ParamLimits

0x1f02,	// (0x00001f02) popup_fep_china_uni_window_g2_ParamLimits

0x1f02,	// (0x00001f02) popup_fep_china_uni_window_g2

0x0001,

0xaafb,	// (0x0000aafb) popup_fep_china_uni_window_g_ParamLimits

0xaafb,	// (0x0000aafb) popup_fep_china_uni_window_g

0x9dc6,	// (0x00009dc6) fep_china_uni_eep_pane_g1

0x9dce,	// (0x00009dce) fep_china_uni_eep_pane_t1

0x9837,	// (0x00009837) aid_touch_area_size_smil_player

0x324f,	// (0x0000324f) lc0_clock_pane

0x342e,	// (0x0000342e) status_pane_g5_ParamLimits

0x342e,	// (0x0000342e) status_pane_g5

0xc40e,	// (0x0000c40e) popup_keymap_window

0x33ee,	// (0x000033ee) status_icon_pane

0x9a43,	// (0x00009a43) cell_ai5_widget_pane_g3_ParamLimits

0x9a62,	// (0x00009a62) cell_ai5_widget_pane_g4_ParamLimits

0x9a6e,	// (0x00009a6e) cell_ai5_widget_pane_g5_ParamLimits

0x9a92,	// (0x00009a92) cell_ai5_widget_pane_g8_ParamLimits

0x9a92,	// (0x00009a92) cell_ai5_widget_pane_g8

0x9aa6,	// (0x00009aa6) cell_ai5_widget_pane_g9_ParamLimits

0x9aa6,	// (0x00009aa6) cell_ai5_widget_pane_g9

0x9aba,	// (0x00009aba) cell_ai5_widget_pane_g10_ParamLimits

0x9aba,	// (0x00009aba) cell_ai5_widget_pane_g10

0x9ddd,	// (0x00009ddd) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9de5,	// (0x00009de5) popup_keymap_window_t1

0xc128,	// (0x0000c128) control_pane_g6_ParamLimits

0xc128,	// (0x0000c128) control_pane_g6

0xc135,	// (0x0000c135) control_pane_g7_ParamLimits

0xc135,	// (0x0000c135) control_pane_g7

0xc142,	// (0x0000c142) control_pane_g8_ParamLimits

0xc142,	// (0x0000c142) control_pane_g8

0xecbf,	// (0x0000ecbf) dt_sta_controll_pane_ParamLimits

0xeccc,	// (0x0000eccc) dt_sta_indi_pane_ParamLimits

0xecd9,	// (0x0000ecd9) dt_sta_title_pane_ParamLimits

0x0d1b,	// (0x00000d1b) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb423,	// (0x0000b423) popup_sk_window

0x3e98,	// (0x00003e98) bg_popup_sub_pane_cp28_ParamLimits

0x3e98,	// (0x00003e98) bg_popup_sub_pane_cp28

0x9df3,	// (0x00009df3) popup_discreet_window_g1_ParamLimits

0x9df3,	// (0x00009df3) popup_discreet_window_g1

0x9e13,	// (0x00009e13) popup_discreet_window_t1_ParamLimits

0x9e13,	// (0x00009e13) popup_discreet_window_t1

0x9e31,	// (0x00009e31) popup_discreet_window_t2_ParamLimits

0x9e31,	// (0x00009e31) popup_discreet_window_t2

0x0002,

0xb275,	// (0x0000b275) popup_discreet_window_t_ParamLimits

0xb275,	// (0x0000b275) popup_discreet_window_t

0x9e83,	// (0x00009e83) popup_sk_window_g1

0x9e8d,	// (0x00009e8d) popup_sk_window_g2

0x0001,

0xb27c,	// (0x0000b27c) popup_sk_window_g

0x9e97,	// (0x00009e97) popup_sk_window_t1

0x9ea5,	// (0x00009ea5) popup_sk_window_t1_copy1

0x9a33,	// (0x00009a33) cell_ai5_widget_pane_g2_ParamLimits

0x9b91,	// (0x00009b91) cell_ai5_widget_pane_t9_ParamLimits

0x9b91,	// (0x00009b91) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xeceb,	// (0x0000eceb) aid_fshwr2_btn_pane

0xecf3,	// (0x0000ecf3) aid_fshwr2_syb_pane

0xecfb,	// (0x0000ecfb) aid_fshwr2_txt_pane

0xed03,	// (0x0000ed03) fshwr2_func_candi_pane

0xed0d,	// (0x0000ed0d) fshwr2_hwr_syb_pane

0xed1b,	// (0x0000ed1b) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xed25,	// (0x0000ed25) fshwr2_icf_pane_t1_ParamLimits

0xed25,	// (0x0000ed25) fshwr2_icf_pane_t1

0x64dd,	// (0x000064dd) fshwr2_func_candi_pane_g1

0x9f18,	// (0x00009f18) fshwr2_func_candi_row_pane_ParamLimits

0x9f18,	// (0x00009f18) fshwr2_func_candi_row_pane

0xed3f,	// (0x0000ed3f) cell_fshwr2_syb_pane_ParamLimits

0xed3f,	// (0x0000ed3f) cell_fshwr2_syb_pane

0x696c,	// (0x0000696c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x696c,	// (0x0000696c) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0x9f45,	// (0x00009f45) fshwr2_func_candi_cell_pane_ParamLimits

0x9f45,	// (0x00009f45) fshwr2_func_candi_cell_pane

0x9f76,	// (0x00009f76) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f76,	// (0x00009f76) fshwr2_func_candi_cell_bg_pane

0x9f90,	// (0x00009f90) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9f90,	// (0x00009f90) fshwr2_func_candi_cell_pane_g1

0x9fb0,	// (0x00009fb0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9fb0,	// (0x00009fb0) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x25a7,	// (0x000025a7) cell_fshwr2_syb_bg_pane

0xed59,	// (0x0000ed59) cell_fshwr2_syb_bg_pane_g1

0x9fcb,	// (0x00009fcb) cell_fshwr2_syb_bg_pane_t1

0x134f,	// (0x0000134f) main_tmo_pane

0xd0b6,	// (0x0000d0b6) uni_indicator_pane_g1_ParamLimits

0xd0cb,	// (0x0000d0cb) uni_indicator_pane_g2_ParamLimits

0x4b2c,	// (0x00004b2c) uni_indicator_pane_g3_ParamLimits

0x4b42,	// (0x00004b42) uni_indicator_pane_g4_ParamLimits

0x4b42,	// (0x00004b42) uni_indicator_pane_g4

0x4b56,	// (0x00004b56) uni_indicator_pane_g5_ParamLimits

0x4b56,	// (0x00004b56) uni_indicator_pane_g5

0x4b6a,	// (0x00004b6a) uni_indicator_pane_g6_ParamLimits

0x4b6a,	// (0x00004b6a) uni_indicator_pane_g6

0xef2a,	// (0x0000ef2a) uni_indicator_pane_g_ParamLimits

0xdcae,	// (0x0000dcae) popup_tmo_note_window_ParamLimits

0xdcae,	// (0x0000dcae) popup_tmo_note_window

0x0024,	// (0x00000024) fshwr2_bg_pane

0x9fa1,	// (0x00009fa1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9fa1,	// (0x00009fa1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xb281,	// (0x0000b281) fshwr2_func_candi_cell_pane_g_ParamLimits

0xb281,	// (0x0000b281) fshwr2_func_candi_cell_pane_g

0x64dd,	// (0x000064dd) bg_popup_window_pane_cp01

0x9fda,	// (0x00009fda) bg_popup_window_pane_g1_cp01

0x9fe3,	// (0x00009fe3) bg_popup_window_pane_cp22_ParamLimits

0x9fe3,	// (0x00009fe3) bg_popup_window_pane_cp22

0x9ff1,	// (0x00009ff1) listscroll_tmo_link_pane_ParamLimits

0x9ff1,	// (0x00009ff1) listscroll_tmo_link_pane

0xa031,	// (0x0000a031) popup_tmo_note_window_g1_ParamLimits

0xa031,	// (0x0000a031) popup_tmo_note_window_g1

0xa03e,	// (0x0000a03e) tmo_note_info_pane_ParamLimits

0xa03e,	// (0x0000a03e) tmo_note_info_pane

0xed61,	// (0x0000ed61) list_tmo_note_info_pane_g1_ParamLimits

0xed61,	// (0x0000ed61) list_tmo_note_info_pane_g1

0xa06f,	// (0x0000a06f) list_tmo_note_info_pane_g2_ParamLimits

0xa06f,	// (0x0000a06f) list_tmo_note_info_pane_g2

0x0001,

0xf06b,	// (0x0000f06b) list_tmo_note_info_pane_g_ParamLimits

0xf06b,	// (0x0000f06b) list_tmo_note_info_pane_g

0xa08b,	// (0x0000a08b) list_tmo_note_info_text_pane_ParamLimits

0xa08b,	// (0x0000a08b) list_tmo_note_info_text_pane

0xa110,	// (0x0000a110) list_tmo_link_pane

0xa11d,	// (0x0000a11d) scroll_pane_cp20

0xa12a,	// (0x0000a12a) list_single_tmo_link_pane_ParamLimits

0xa12a,	// (0x0000a12a) list_single_tmo_link_pane

0xa13a,	// (0x0000a13a) list_single_tmo_link_pane_t1

0xa148,	// (0x0000a148) list_tmo_note_info_text_pane_t1_ParamLimits

0xa148,	// (0x0000a148) list_tmo_note_info_text_pane_t1

0xbd35,	// (0x0000bd35) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbd35,	// (0x0000bd35) aid_size_touch_scroll_bar_cp01

0xbc50,	// (0x0000bc50) aid_size_touch_slider_marker

0xb413,	// (0x0000b413) popup_settings_window_ParamLimits

0xb413,	// (0x0000b413) popup_settings_window

0x2b36,	// (0x00002b36) popup_candi_list_indi_window

0x30ff,	// (0x000030ff) aid_touch_navi_pane_ParamLimits

0x82f0,	// (0x000082f0) rs_clock_indi_pane

0x82f9,	// (0x000082f9) sctrl_sk_bottom_pane_ParamLimits

0x830a,	// (0x0000830a) sctrl_sk_top_pane_ParamLimits

0x8b3b,	// (0x00008b3b) popup_fep_tooltip_window

0x99d5,	// (0x000099d5) aid_size_cell_widget_grid_ParamLimits

0x9a27,	// (0x00009a27) cell_ai5_widget_pane_g1_ParamLimits

0x9a27,	// (0x00009a27) cell_ai5_widget_pane_g1

0x9a7a,	// (0x00009a7a) cell_ai5_widget_pane_g6_ParamLimits

0x9a86,	// (0x00009a86) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb204,	// (0x0000b204) cell_ai5_widget_pane_g_ParamLimits

0xb204,	// (0x0000b204) cell_ai5_widget_pane_g

0x9bb5,	// (0x00009bb5) cell_ai5_widget_pane_t10_ParamLimits

0x9bb5,	// (0x00009bb5) cell_ai5_widget_pane_t10

0x9bcb,	// (0x00009bcb) grid_ai5_widget_pane_ParamLimits

0x9c69,	// (0x00009c69) cell_contacts_ai5_widget_pane_ParamLimits

0x9c69,	// (0x00009c69) cell_contacts_ai5_widget_pane

0x9e46,	// (0x00009e46) popup_discreet_window_t3_ParamLimits

0x9e46,	// (0x00009e46) popup_discreet_window_t3

0x9eed,	// (0x00009eed) popup_fshwr2_char_preview_window_ParamLimits

0x9eed,	// (0x00009eed) popup_fshwr2_char_preview_window

0xed78,	// (0x0000ed78) tmo_note_info_pane_t1

0xed8d,	// (0x0000ed8d) tmo_note_info_pane_t2

0xeda6,	// (0x0000eda6) tmo_note_info_pane_t3

0xa0ec,	// (0x0000a0ec) tmo_note_info_pane_t4

0xa0fe,	// (0x0000a0fe) tmo_note_info_pane_t5

0x0004,

0xf070,	// (0x0000f070) tmo_note_info_pane_t

0xa110,	// (0x0000a110) list_tmo_link_pane_ParamLimits

0xa11d,	// (0x0000a11d) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa161,	// (0x0000a161) popup_fshwr2_char_preview_window_t1

0xa16f,	// (0x0000a16f) popup_candi_list_indi_window_g1

0xa178,	// (0x0000a178) bg_cell_contacts_ai5_widget_pane

0xa184,	// (0x0000a184) cell_contacts_ai5_widget_pane_g1

0xa197,	// (0x0000a197) cell_contacts_ai5_widget_pane_g2

0xa1a3,	// (0x0000a1a3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb296,	// (0x0000b296) cell_contacts_ai5_widget_pane_g

0xa1b5,	// (0x0000a1b5) cell_contacts_ai5_widget_pane_t1

0x134f,	// (0x0000134f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa22f,	// (0x0000a22f) settings_container_pane

0x25a7,	// (0x000025a7) listscroll_set_pane_copy1

0x5966,	// (0x00005966) scroll_pane_cp121_copy1

0xa23b,	// (0x0000a23b) set_content_pane_copy1

0xa243,	// (0x0000a243) aid_height_set_list_copy1_ParamLimits

0xa243,	// (0x0000a243) aid_height_set_list_copy1

0x4e4d,	// (0x00004e4d) aid_size_parent_copy1_ParamLimits

0x4e4d,	// (0x00004e4d) aid_size_parent_copy1

0xa24f,	// (0x0000a24f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa24f,	// (0x0000a24f) button_value_adjust_pane_cp6_copy1

0x2b0e,	// (0x00002b0e) list_highlight_pane_cp2_copy1_ParamLimits

0x2b0e,	// (0x00002b0e) list_highlight_pane_cp2_copy1

0xa263,	// (0x0000a263) list_set_pane_copy1_ParamLimits

0xa263,	// (0x0000a263) list_set_pane_copy1

0xa1ca,	// (0x0000a1ca) main_pane_set_t1_copy1_ParamLimits

0xa1ca,	// (0x0000a1ca) main_pane_set_t1_copy1

0xa204,	// (0x0000a204) main_pane_set_t2_copy1_ParamLimits

0xa204,	// (0x0000a204) main_pane_set_t2_copy1

0xa310,	// (0x0000a310) main_pane_set_t3_copy1

0xa31e,	// (0x0000a31e) main_pane_set_t4_copy1

0xa223,	// (0x0000a223) set_content_pane_g1_copy1_ParamLimits

0xa223,	// (0x0000a223) set_content_pane_g1_copy1

0xa32c,	// (0x0000a32c) setting_code_pane_copy1

0xa336,	// (0x0000a336) setting_slider_graphic_pane_copy1

0xa336,	// (0x0000a336) setting_slider_pane_copy1

0xa336,	// (0x0000a336) setting_text_pane_copy1

0xa340,	// (0x0000a340) setting_volume_pane_copy1

0xa349,	// (0x0000a349) settings_code_pane_cp2_copy1

0xa351,	// (0x0000a351) settings_code_pane_cp_copy1_ParamLimits

0xa351,	// (0x0000a351) settings_code_pane_cp_copy1

0xa365,	// (0x0000a365) volume_set_pane_copy1

0xa36d,	// (0x0000a36d) volume_set_pane_g10_copy1

0xa375,	// (0x0000a375) volume_set_pane_g1_copy1

0xa37d,	// (0x0000a37d) volume_set_pane_g2_copy1

0xa385,	// (0x0000a385) volume_set_pane_g3_copy1

0xa38d,	// (0x0000a38d) volume_set_pane_g4_copy1

0xa395,	// (0x0000a395) volume_set_pane_g5_copy1

0xa39d,	// (0x0000a39d) volume_set_pane_g6_copy1

0xa3a5,	// (0x0000a3a5) volume_set_pane_g7_copy1

0xa3ad,	// (0x0000a3ad) volume_set_pane_g8_copy1

0xa3b5,	// (0x0000a3b5) volume_set_pane_g9_copy1

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_copy1_ParamLimits

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_copy1

0xa3bd,	// (0x0000a3bd) setting_slider_pane_t1_copy1_ParamLimits

0xa3bd,	// (0x0000a3bd) setting_slider_pane_t1_copy1

0xa3db,	// (0x0000a3db) setting_slider_pane_t2_copy1_ParamLimits

0xa3db,	// (0x0000a3db) setting_slider_pane_t2_copy1

0xa3f5,	// (0x0000a3f5) setting_slider_pane_t3_copy1_ParamLimits

0xa3f5,	// (0x0000a3f5) setting_slider_pane_t3_copy1

0xa40d,	// (0x0000a40d) slider_set_pane_copy1_ParamLimits

0xa40d,	// (0x0000a40d) slider_set_pane_copy1

0x148b,	// (0x0000148b) set_opt_bg_pane_g1_copy2

0x1493,	// (0x00001493) set_opt_bg_pane_g2_copy2

0xa423,	// (0x0000a423) set_opt_bg_pane_g3_copy2

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4_copy2

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5_copy2

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6_copy2

0xa42d,	// (0x0000a42d) set_opt_bg_pane_g7_copy2

0xa435,	// (0x0000a435) set_opt_bg_pane_g8_copy2

0xa43f,	// (0x0000a43f) set_opt_bg_pane_g9_copy2

0xa449,	// (0x0000a449) aid_size_touch_slider_mark_copy1_ParamLimits

0xa449,	// (0x0000a449) aid_size_touch_slider_mark_copy1

0xa45d,	// (0x0000a45d) slider_set_pane_g1_copy1

0xa466,	// (0x0000a466) slider_set_pane_g2_copy1

0x4dbc,	// (0x00004dbc) slider_set_pane_g3_copy1_ParamLimits

0x4dbc,	// (0x00004dbc) slider_set_pane_g3_copy1

0x4dd0,	// (0x00004dd0) slider_set_pane_g4_copy1_ParamLimits

0x4dd0,	// (0x00004dd0) slider_set_pane_g4_copy1

0x4de8,	// (0x00004de8) slider_set_pane_g5_copy1_ParamLimits

0x4de8,	// (0x00004de8) slider_set_pane_g5_copy1

0x4dbc,	// (0x00004dbc) slider_set_pane_g6_copy1_ParamLimits

0x4dbc,	// (0x00004dbc) slider_set_pane_g6_copy1

0xa46e,	// (0x0000a46e) slider_set_pane_g7_copy1_ParamLimits

0xa46e,	// (0x0000a46e) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa484,	// (0x0000a484) setting_slider_graphic_pane_g1_copy1

0xa48d,	// (0x0000a48d) setting_slider_graphic_pane_t1_copy1

0xa49d,	// (0x0000a49d) setting_slider_graphic_pane_t2_copy1

0xa4ad,	// (0x0000a4ad) slider_set_pane_cp_copy1

0xa4bd,	// (0x0000a4bd) input_focus_pane_cp1_copy1

0xa4c6,	// (0x0000a4c6) list_set_text_pane_copy1

0xa4ce,	// (0x0000a4ce) setting_text_pane_g1_copy1

0xa4d7,	// (0x0000a4d7) set_text_pane_t1_copy1

0xa4bd,	// (0x0000a4bd) input_focus_pane_cp2_copy1

0xa4ce,	// (0x0000a4ce) setting_code_pane_g1_copy1

0xa4f4,	// (0x0000a4f4) setting_code_pane_t1_copy1

0xa502,	// (0x0000a502) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x22a9,	// (0x000022a9) list_set_graphic_pane_g1_copy1_ParamLimits

0x22a9,	// (0x000022a9) list_set_graphic_pane_g1_copy1

0xa516,	// (0x0000a516) list_set_graphic_pane_g2_copy1

0x22c1,	// (0x000022c1) list_set_graphic_pane_t1_copy1_ParamLimits

0x22c1,	// (0x000022c1) list_set_graphic_pane_t1_copy1

0x64dd,	// (0x000064dd) rs_clock_indi_pane_g1

0xa51e,	// (0x0000a51e) rs_clock_indi_pane_t1

0xa52c,	// (0x0000a52c) rs_indi_pane

0xa534,	// (0x0000a534) rs_indi_pane_g1

0xa53d,	// (0x0000a53d) rs_indi_pane_g2

0xa546,	// (0x0000a546) rs_indi_pane_g3

0x0002,

0xb29d,	// (0x0000b29d) rs_indi_pane_g

0x25a7,	// (0x000025a7) bg_popup_preview_window_pane_cp03

0xa54f,	// (0x0000a54f) popup_fep_tooltip_window_t1

0x76b4,	// (0x000076b4) popup_note2_window_g2_ParamLimits

0x76b4,	// (0x000076b4) popup_note2_window_g2

0x0001,

0xb03d,	// (0x0000b03d) popup_note2_window_g_ParamLimits

0xb03d,	// (0x0000b03d) popup_note2_window_g

0x7cae,	// (0x00007cae) bg_popup_sub_pane_cp11_ParamLimits

0x7cbb,	// (0x00007cbb) cell_ai3_links_pane_g1_ParamLimits

0x7cd2,	// (0x00007cd2) cell_ai3_links_pane_t1

0xa4d7,	// (0x0000a4d7) set_text_pane_t1_copy1_ParamLimits

0x24b6,	// (0x000024b6) cell_graphic_popup_pane_cp2_ParamLimits

0x24b6,	// (0x000024b6) cell_graphic_popup_pane_cp2

0xa55d,	// (0x0000a55d) cell_graphic_popup_pane_g1_cp2

0x0b2e,	// (0x00000b2e) cell_graphic_popup_pane_g2_cp2

0xa565,	// (0x0000a565) cell_graphic_popup_pane_g3_cp2

0xa56d,	// (0x0000a56d) cell_graphic_popup_pane_t2_cp2

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp3_cp2

0x1a01,	// (0x00001a01) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x134f,	// (0x0000134f) main_tmo_pane_ParamLimits

0xdca2,	// (0x0000dca2) popup_tmo_big_image_note_window

0x9a17,	// (0x00009a17) cell_ai5_widget_list_pane

0x9a1f,	// (0x00009a1f) cell_ai5_widget_lrg_icon_pane

0xed78,	// (0x0000ed78) tmo_note_info_pane_t1_ParamLimits

0xed8d,	// (0x0000ed8d) tmo_note_info_pane_t2_ParamLimits

0xeda6,	// (0x0000eda6) tmo_note_info_pane_t3_ParamLimits

0xa0ec,	// (0x0000a0ec) tmo_note_info_pane_t4_ParamLimits

0xa0fe,	// (0x0000a0fe) tmo_note_info_pane_t5_ParamLimits

0xf070,	// (0x0000f070) tmo_note_info_pane_t_ParamLimits

0xa22f,	// (0x0000a22f) settings_container_pane_ParamLimits

0xa4b5,	// (0x0000a4b5) indicator_popup_pane_cp5

0xa4b5,	// (0x0000a4b5) indicator_popup_pane_cp6

0xa502,	// (0x0000a502) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa57b,	// (0x0000a57b) popup_tmo_big_image_note_window_g1

0xa586,	// (0x0000a586) popup_tmo_big_image_note_window_t1

0xa596,	// (0x0000a596) popup_tmo_big_image_note_window_t2

0xa5a6,	// (0x0000a5a6) popup_tmo_big_image_note_window_t3

0x0002,

0xb2a4,	// (0x0000b2a4) popup_tmo_big_image_note_window_t

0xa5b6,	// (0x0000a5b6) cell_ai5_widget_lrg_icon_pane_g1

0xa5be,	// (0x0000a5be) cell_ai5_widget_lrg_icon_pane_t1

0xa5cc,	// (0x0000a5cc) cell_ai5_widget_list_row_pane_ParamLimits

0xa5cc,	// (0x0000a5cc) cell_ai5_widget_list_row_pane

0xa5e5,	// (0x0000a5e5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa5e5,	// (0x0000a5e5) cell_ai5_widget_list_row_pane_g1

0xa5f2,	// (0x0000a5f2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa5f2,	// (0x0000a5f2) cell_ai5_widget_list_row_pane_t1

0xa60a,	// (0x0000a60a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa60a,	// (0x0000a60a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xb2ab,	// (0x0000b2ab) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb2ab,	// (0x0000b2ab) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa61c,	// (0x0000a61c) popup_fep_char_pre_window

0xa624,	// (0x0000a624) popup_fep_ituss_window

0xa63e,	// (0x0000a63e) popup_fep_vkbss_window

0xa65c,	// (0x0000a65c) grid_vkbss_keypad_pane_ParamLimits

0xa65c,	// (0x0000a65c) grid_vkbss_keypad_pane

0xa66c,	// (0x0000a66c) ituss_keypad_pane

0xa682,	// (0x0000a682) aid_vkbss_key_offset_ParamLimits

0xa682,	// (0x0000a682) aid_vkbss_key_offset

0xa68e,	// (0x0000a68e) cell_vkbss_key_pane_ParamLimits

0xa68e,	// (0x0000a68e) cell_vkbss_key_pane

0x340a,	// (0x0000340a) bg_cell_vkbss_key_g1_ParamLimits

0x340a,	// (0x0000340a) bg_cell_vkbss_key_g1

0xa6a4,	// (0x0000a6a4) cell_vkbss_key_3p_pane_ParamLimits

0xa6a4,	// (0x0000a6a4) cell_vkbss_key_3p_pane

0xa6be,	// (0x0000a6be) cell_vkbss_key_g1_ParamLimits

0xa6be,	// (0x0000a6be) cell_vkbss_key_g1

0xa6d8,	// (0x0000a6d8) cell_vkbss_key_t1_ParamLimits

0xa6d8,	// (0x0000a6d8) cell_vkbss_key_t1

0xa703,	// (0x0000a703) cell_ituss_key_pane_ParamLimits

0xa703,	// (0x0000a703) cell_ituss_key_pane

0xa713,	// (0x0000a713) bg_cell_ituss_key_g1_ParamLimits

0xa713,	// (0x0000a713) bg_cell_ituss_key_g1

0xa71f,	// (0x0000a71f) cell_ituss_key_pane_g1_ParamLimits

0xa71f,	// (0x0000a71f) cell_ituss_key_pane_g1

0xa72b,	// (0x0000a72b) cell_ituss_key_pane_g2_ParamLimits

0xa72b,	// (0x0000a72b) cell_ituss_key_pane_g2

0x0001,

0xb2b0,	// (0x0000b2b0) cell_ituss_key_pane_g_ParamLimits

0xb2b0,	// (0x0000b2b0) cell_ituss_key_pane_g

0xa744,	// (0x0000a744) cell_ituss_key_t1_ParamLimits

0xa744,	// (0x0000a744) cell_ituss_key_t1

0xa772,	// (0x0000a772) cell_ituss_key_t2_ParamLimits

0xa772,	// (0x0000a772) cell_ituss_key_t2

0xa7a3,	// (0x0000a7a3) cell_ituss_key_t3_ParamLimits

0xa7a3,	// (0x0000a7a3) cell_ituss_key_t3

0xa7d4,	// (0x0000a7d4) cell_ituss_key_t4_ParamLimits

0xa7d4,	// (0x0000a7d4) cell_ituss_key_t4

0x0003,

0xb2b5,	// (0x0000b2b5) cell_ituss_key_t_ParamLimits

0xb2b5,	// (0x0000b2b5) cell_ituss_key_t

0xa805,	// (0x0000a805) cell_vkbss_key_3p_pane_g1

0xa80d,	// (0x0000a80d) cell_vkbss_key_3p_pane_g2

0xa815,	// (0x0000a815) cell_vkbss_key_3p_pane_g3

0x0002,

0xb2be,	// (0x0000b2be) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa81d,	// (0x0000a81d) popup_fep_char_pre_window_t1

0xec8f,	// (0x0000ec8f) main_ai5_sk_pane

0xa178,	// (0x0000a178) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa184,	// (0x0000a184) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa197,	// (0x0000a197) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa1a3,	// (0x0000a1a3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb296,	// (0x0000b296) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa1b5,	// (0x0000a1b5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x134f,	// (0x0000134f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xedbb,	// (0x0000edbb) main_ai5_sk_pane_g1

0x3cd6,	// (0x00003cd6) popup_query_code_window_g1

0xa633,	// (0x0000a633) popup_fep_vkb_icf_pane

0xa647,	// (0x0000a647) popup_fep_vtchi_icf_pane

0x134f,	// (0x0000134f) bg_icf_pane

0xa844,	// (0x0000a844) list_vkb_icf_pane

0x134f,	// (0x0000134f) bg_icf_pane_cp01

0xa85c,	// (0x0000a85c) vtchi_icf_list_pane

0xa86c,	// (0x0000a86c) list_vkb_icf_pane_t1_ParamLimits

0xa86c,	// (0x0000a86c) list_vkb_icf_pane_t1

0xa886,	// (0x0000a886) vtchi_icf_list_pane_t1_ParamLimits

0xa886,	// (0x0000a886) vtchi_icf_list_pane_t1

0xa624,	// (0x0000a624) popup_fep_ituss_window_ParamLimits

0xa647,	// (0x0000a647) popup_fep_vtchi_icf_pane_ParamLimits

0xa66c,	// (0x0000a66c) ituss_keypad_pane_ParamLimits

0xa678,	// (0x0000a678) ituss_sks_pane

0x134f,	// (0x0000134f) bg_icf_pane_ParamLimits

0xa835,	// (0x0000a835) icf_edit_indi_pane_ParamLimits

0xa835,	// (0x0000a835) icf_edit_indi_pane

0xa844,	// (0x0000a844) list_vkb_icf_pane_ParamLimits

0x134f,	// (0x0000134f) bg_icf_pane_cp01_ParamLimits

0xa850,	// (0x0000a850) icf_edit_indi_pane_cp01_ParamLimits

0xa850,	// (0x0000a850) icf_edit_indi_pane_cp01

0xa864,	// (0x0000a864) vtchi_query_pane

0x696c,	// (0x0000696c) icf_edit_indi_pane_g1_ParamLimits

0x696c,	// (0x0000696c) icf_edit_indi_pane_g1

0xa8ad,	// (0x0000a8ad) icf_edit_indi_pane_g2_ParamLimits

0xa8ad,	// (0x0000a8ad) icf_edit_indi_pane_g2

0x0001,

0xb2c5,	// (0x0000b2c5) icf_edit_indi_pane_g_ParamLimits

0xb2c5,	// (0x0000b2c5) icf_edit_indi_pane_g

0xa8b9,	// (0x0000a8b9) icf_edit_indi_pane_t1

0xa8c7,	// (0x0000a8c7) bg_input_focus_pane_cp042

0x0d12,	// (0x00000d12) vtchi_button_pane

0xa8d0,	// (0x0000a8d0) vtchi_query_pane_t1

0xa8de,	// (0x0000a8de) vtchi_query_pane_t2

0xa8ec,	// (0x0000a8ec) vtchi_query_pane_t3

0x0002,

0xb2ca,	// (0x0000b2ca) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xa8fa,	// (0x0000a8fa) vtchi_button_pane_g1

0xa902,	// (0x0000a902) ituss_sks_pane_g1

0xa90d,	// (0x0000a90d) ituss_sks_pane_g2

0x0001,

0xb2d1,	// (0x0000b2d1) ituss_sks_pane_g

0xa915,	// (0x0000a915) ituss_sks_pane_t1

0xa923,	// (0x0000a923) ituss_sks_pane_t2

0x0001,

0xb2d6,	// (0x0000b2d6) ituss_sks_pane_t

0x5e6d,	// (0x00005e6d) indicator_nsta_pane_cp_g1

0x5e76,	// (0x00005e76) indicator_nsta_pane_cp_g2

0x5e7e,	// (0x00005e7e) indicator_nsta_pane_cp_g3

0x5e86,	// (0x00005e86) indicator_nsta_pane_cp_g4

0x5e8e,	// (0x00005e8e) indicator_nsta_pane_cp_g5

0x5e96,	// (0x00005e96) indicator_nsta_pane_cp_g6

0x0005,

0xae87,	// (0x0000ae87) indicator_nsta_pane_cp_g

0xea3c,	// (0x0000ea3c) cell_graphic2_pane_t2_ParamLimits

0xea3c,	// (0x0000ea3c) cell_graphic2_pane_t2

0x0001,

0xf047,	// (0x0000f047) cell_graphic2_pane_t_ParamLimits

0xf047,	// (0x0000f047) cell_graphic2_pane_t

0xea72,	// (0x0000ea72) cell_graphic2_control_pane_t1

0xbf18,	// (0x0000bf18) signal_pane_g3_ParamLimits

0xbf18,	// (0x0000bf18) signal_pane_g3

0xbf2c,	// (0x0000bf2c) signal_pane_g4_ParamLimits

0xbf2c,	// (0x0000bf2c) signal_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

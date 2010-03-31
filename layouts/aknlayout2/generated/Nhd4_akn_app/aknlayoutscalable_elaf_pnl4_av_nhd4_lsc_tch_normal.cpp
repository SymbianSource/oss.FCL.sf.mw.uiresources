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
0xb3ce,	// (0x0000b3ce) Screen

0xb3da,	// (0x0000b3da) application_window_ParamLimits

0xb3da,	// (0x0000b3da) application_window

0x002e,	// (0x0000002e) screen_g1

0xb412,	// (0x0000b412) area_bottom_pane_ParamLimits

0xb412,	// (0x0000b412) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc9ca,	// (0x0000c9ca) battery_pane_ParamLimits

0xc9ca,	// (0x0000c9ca) battery_pane

0x4045,	// (0x00004045) bg_status_flat_pane_g8

0x404d,	// (0x0000404d) bg_status_flat_pane_g9

0x31b3,	// (0x000031b3) context_pane_ParamLimits

0x31b3,	// (0x000031b3) context_pane

0xcb35,	// (0x0000cb35) navi_pane_ParamLimits

0xcb35,	// (0x0000cb35) navi_pane

0xcbb3,	// (0x0000cbb3) signal_pane_ParamLimits

0xcbb3,	// (0x0000cbb3) signal_pane

0x0008,

0xad2a,	// (0x0000ad2a) bg_status_flat_pane_g

0xcc43,	// (0x0000cc43) status_pane_g1_ParamLimits

0xcc43,	// (0x0000cc43) status_pane_g1

0xcc59,	// (0x0000cc59) status_pane_g2_ParamLimits

0xcc59,	// (0x0000cc59) status_pane_g2

0x33d2,	// (0x000033d2) status_pane_g3_ParamLimits

0x33d2,	// (0x000033d2) status_pane_g3

0x0004,

0xef93,	// (0x0000ef93) status_pane_g_ParamLimits

0xef93,	// (0x0000ef93) status_pane_g

0xcc65,	// (0x0000cc65) title_pane_ParamLimits

0xcc65,	// (0x0000cc65) title_pane

0xccc8,	// (0x0000ccc8) uni_indicator_pane_ParamLimits

0xccc8,	// (0x0000ccc8) uni_indicator_pane

0x2a5c,	// (0x00002a5c) bg_list_pane_ParamLimits

0x2a5c,	// (0x00002a5c) bg_list_pane

0x2a7c,	// (0x00002a7c) find_pane

0xc2a1,	// (0x0000c2a1) listscroll_app_pane_ParamLimits

0xc2a1,	// (0x0000c2a1) listscroll_app_pane

0x2a90,	// (0x00002a90) listscroll_form_pane

0x2a98,	// (0x00002a98) listscroll_gen_pane_ParamLimits

0x2a98,	// (0x00002a98) listscroll_gen_pane

0x2aac,	// (0x00002aac) listscroll_set_pane

0x4df4,	// (0x00004df4) main_idle_act_pane

0x2553,	// (0x00002553) main_idle_trad_pane

0x2553,	// (0x00002553) main_list_empty_pane

0x2ac6,	// (0x00002ac6) main_midp_pane

0x2ad2,	// (0x00002ad2) main_pane_g1_ParamLimits

0x2ad2,	// (0x00002ad2) main_pane_g1

0xc2b1,	// (0x0000c2b1) popup_ai_message_window_ParamLimits

0xc2b1,	// (0x0000c2b1) popup_ai_message_window

0xc342,	// (0x0000c342) popup_fep_china_uni_window_ParamLimits

0xc342,	// (0x0000c342) popup_fep_china_uni_window

0x2be6,	// (0x00002be6) popup_fep_japan_candidate_window_ParamLimits

0x2be6,	// (0x00002be6) popup_fep_japan_candidate_window

0x2c04,	// (0x00002c04) popup_fep_japan_predictive_window_ParamLimits

0x2c04,	// (0x00002c04) popup_fep_japan_predictive_window

0xc39c,	// (0x0000c39c) popup_find_window

0xc3b9,	// (0x0000c3b9) popup_grid_graphic_window_ParamLimits

0xc3b9,	// (0x0000c3b9) popup_grid_graphic_window

0x2c69,	// (0x00002c69) popup_large_graphic_colour_window

0xc451,	// (0x0000c451) popup_menu_window_ParamLimits

0xc451,	// (0x0000c451) popup_menu_window

0xc61d,	// (0x0000c61d) popup_note_image_window

0xc5e3,	// (0x0000c5e3) popup_note_wait_window_ParamLimits

0xc5e3,	// (0x0000c5e3) popup_note_wait_window

0xc635,	// (0x0000c635) popup_note_window_ParamLimits

0xc635,	// (0x0000c635) popup_note_window

0xc6db,	// (0x0000c6db) popup_query_code_window_ParamLimits

0xc6db,	// (0x0000c6db) popup_query_code_window

0x2eb3,	// (0x00002eb3) popup_query_data_code_window_ParamLimits

0x2eb3,	// (0x00002eb3) popup_query_data_code_window

0xc715,	// (0x0000c715) popup_query_data_window_ParamLimits

0xc715,	// (0x0000c715) popup_query_data_window

0xc791,	// (0x0000c791) popup_query_sat_info_window_ParamLimits

0xc791,	// (0x0000c791) popup_query_sat_info_window

0xc828,	// (0x0000c828) popup_snote_single_graphic_window_ParamLimits

0xc828,	// (0x0000c828) popup_snote_single_graphic_window

0xc828,	// (0x0000c828) popup_snote_single_text_window_ParamLimits

0xc828,	// (0x0000c828) popup_snote_single_text_window

0x2f36,	// (0x00002f36) popup_sub_window_general

0x3064,	// (0x00003064) popup_window_general_ParamLimits

0x3064,	// (0x00003064) popup_window_general

0x3079,	// (0x00003079) power_save_pane

0xc109,	// (0x0000c109) control_pane_g1_ParamLimits

0xc109,	// (0x0000c109) control_pane_g1

0xc132,	// (0x0000c132) control_pane_g2_ParamLimits

0xc132,	// (0x0000c132) control_pane_g2

0x2903,	// (0x00002903) control_pane_g3_ParamLimits

0x2903,	// (0x00002903) control_pane_g3

0x0007,

0xef7b,	// (0x0000ef7b) control_pane_g_ParamLimits

0xef7b,	// (0x0000ef7b) control_pane_g

0xc19a,	// (0x0000c19a) control_pane_t1_ParamLimits

0xc19a,	// (0x0000c19a) control_pane_t1

0xc1f8,	// (0x0000c1f8) control_pane_t2_ParamLimits

0xc1f8,	// (0x0000c1f8) control_pane_t2

0x0002,

0xef8c,	// (0x0000ef8c) control_pane_t_ParamLimits

0xef8c,	// (0x0000ef8c) control_pane_t

0x27d6,	// (0x000027d6) navi_navi_volume_pane_cp1

0x27df,	// (0x000027df) status_small_icon_pane

0x27e7,	// (0x000027e7) status_small_pane_g1_ParamLimits

0x27e7,	// (0x000027e7) status_small_pane_g1

0x281b,	// (0x0000281b) status_small_pane_g2_ParamLimits

0x281b,	// (0x0000281b) status_small_pane_g2

0x2827,	// (0x00002827) status_small_pane_g3_ParamLimits

0x2827,	// (0x00002827) status_small_pane_g3

0x2833,	// (0x00002833) status_small_pane_g4_ParamLimits

0x2833,	// (0x00002833) status_small_pane_g4

0x283f,	// (0x0000283f) status_small_pane_g5_ParamLimits

0x283f,	// (0x0000283f) status_small_pane_g5

0x284e,	// (0x0000284e) status_small_pane_g6_ParamLimits

0x284e,	// (0x0000284e) status_small_pane_g6

0x0007,

0xac34,	// (0x0000ac34) status_small_pane_g_ParamLimits

0xac34,	// (0x0000ac34) status_small_pane_g

0x287e,	// (0x0000287e) status_small_pane_t1

0x28a1,	// (0x000028a1) status_small_wait_pane_ParamLimits

0x28a1,	// (0x000028a1) status_small_wait_pane

0xbf69,	// (0x0000bf69) aid_levels_signal_ParamLimits

0xbf69,	// (0x0000bf69) aid_levels_signal

0xbf81,	// (0x0000bf81) signal_pane_g1_ParamLimits

0xbf81,	// (0x0000bf81) signal_pane_g1

0xbf9c,	// (0x0000bf9c) signal_pane_g2_ParamLimits

0xbf9c,	// (0x0000bf9c) signal_pane_g2

0x0003,

0xef5b,	// (0x0000ef5b) signal_pane_g_ParamLimits

0xef5b,	// (0x0000ef5b) signal_pane_g

0x1e1b,	// (0x00001e1b) context_pane_g1

0xb5f0,	// (0x0000b5f0) title_pane_g1

0xb627,	// (0x0000b627) title_pane_t1

0x04c1,	// (0x000004c1) title_pane_t2

0x04e7,	// (0x000004e7) title_pane_t3

0x0002,

0xeea5,	// (0x0000eea5) title_pane_t

0xccf0,	// (0x0000ccf0) aid_levels_battery_ParamLimits

0xccf0,	// (0x0000ccf0) aid_levels_battery

0xcd0c,	// (0x0000cd0c) battery_pane_g1_ParamLimits

0xcd0c,	// (0x0000cd0c) battery_pane_g1

0xcd29,	// (0x0000cd29) battery_pane_g2_ParamLimits

0xcd29,	// (0x0000cd29) battery_pane_g2

0x0001,

0xef9e,	// (0x0000ef9e) battery_pane_g_ParamLimits

0xef9e,	// (0x0000ef9e) battery_pane_g

0xd07a,	// (0x0000d07a) uni_indicator_pane_g1

0xd091,	// (0x0000d091) uni_indicator_pane_g2

0xd0a7,	// (0x0000d0a7) uni_indicator_pane_g3

0x0005,

0xefd5,	// (0x0000efd5) uni_indicator_pane_g

0x23d1,	// (0x000023d1) navi_icon_pane_ParamLimits

0x23d1,	// (0x000023d1) navi_icon_pane

0x231a,	// (0x0000231a) navi_midp_pane

0x23ed,	// (0x000023ed) navi_navi_pane

0x23f7,	// (0x000023f7) navi_text_pane_ParamLimits

0x23f7,	// (0x000023f7) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09b5,	// (0x000009b5) status_small_wait_pane_g2

0x0001,

0xadcd,	// (0x0000adcd) status_small_wait_pane_g

0x47fe,	// (0x000047fe) navi_navi_icon_text_pane

0x4806,	// (0x00004806) navi_navi_pane_g1_ParamLimits

0x4806,	// (0x00004806) navi_navi_pane_g1

0x4818,	// (0x00004818) navi_navi_pane_g2_ParamLimits

0x4818,	// (0x00004818) navi_navi_pane_g2

0x0001,

0xad9b,	// (0x0000ad9b) navi_navi_pane_g_ParamLimits

0xad9b,	// (0x0000ad9b) navi_navi_pane_g

0x482a,	// (0x0000482a) navi_navi_tabs_pane

0x4833,	// (0x00004833) navi_navi_text_pane

0x47fe,	// (0x000047fe) navi_navi_volume_pane

0x47da,	// (0x000047da) navi_text_pane_t1

0x47ce,	// (0x000047ce) navi_icon_pane_g1

0x4721,	// (0x00004721) navi_navi_text_pane_t1

0x4710,	// (0x00004710) navi_navi_volume_pane_g1

0xd044,	// (0x0000d044) volume_small_pane

0xcfae,	// (0x0000cfae) navi_navi_icon_text_pane_g1

0x467e,	// (0x0000467e) navi_navi_icon_text_pane_t1

0x23ed,	// (0x000023ed) navi_tabs_2_long_pane

0x23ed,	// (0x000023ed) navi_tabs_2_pane

0x23ed,	// (0x000023ed) navi_tabs_3_long_pane

0x23ed,	// (0x000023ed) navi_tabs_3_pane

0x23ed,	// (0x000023ed) navi_tabs_4_pane

0xcf8e,	// (0x0000cf8e) tabs_2_active_pane_ParamLimits

0xcf8e,	// (0x0000cf8e) tabs_2_active_pane

0xcf9e,	// (0x0000cf9e) tabs_2_passive_pane_ParamLimits

0xcf9e,	// (0x0000cf9e) tabs_2_passive_pane

0xcf5c,	// (0x0000cf5c) tabs_3_active_pane_ParamLimits

0xcf5c,	// (0x0000cf5c) tabs_3_active_pane

0xcf6c,	// (0x0000cf6c) tabs_3_passive_pane_ParamLimits

0xcf6c,	// (0x0000cf6c) tabs_3_passive_pane

0xcf7d,	// (0x0000cf7d) tabs_3_passive_pane_cp_ParamLimits

0xcf7d,	// (0x0000cf7d) tabs_3_passive_pane_cp

0xcf29,	// (0x0000cf29) tabs_4_active_pane_ParamLimits

0xcf29,	// (0x0000cf29) tabs_4_active_pane

0xcf3a,	// (0x0000cf3a) tabs_4_passive_pane_ParamLimits

0xcf3a,	// (0x0000cf3a) tabs_4_passive_pane

0x4581,	// (0x00004581) tabs_4_passive_pane_cp_ParamLimits

0x4581,	// (0x00004581) tabs_4_passive_pane_cp

0xcf4b,	// (0x0000cf4b) tabs_4_passive_pane_cp2_ParamLimits

0xcf4b,	// (0x0000cf4b) tabs_4_passive_pane_cp2

0xcf05,	// (0x0000cf05) tabs_2_long_active_pane_ParamLimits

0xcf05,	// (0x0000cf05) tabs_2_long_active_pane

0xcf17,	// (0x0000cf17) tabs_2_long_passive_pane_ParamLimits

0xcf17,	// (0x0000cf17) tabs_2_long_passive_pane

0xcec6,	// (0x0000cec6) tabs_3_long_active_pane_ParamLimits

0xcec6,	// (0x0000cec6) tabs_3_long_active_pane

0xced9,	// (0x0000ced9) tabs_3_long_passive_pane_ParamLimits

0xced9,	// (0x0000ced9) tabs_3_long_passive_pane

0xcef2,	// (0x0000cef2) tabs_3_long_passive_pane_cp_ParamLimits

0xcef2,	// (0x0000cef2) tabs_3_long_passive_pane_cp

0x44a8,	// (0x000044a8) volume_small_pane_g1

0x44b1,	// (0x000044b1) volume_small_pane_g2

0x44ba,	// (0x000044ba) volume_small_pane_g3

0x44c3,	// (0x000044c3) volume_small_pane_g4

0x44cc,	// (0x000044cc) volume_small_pane_g5

0x44d5,	// (0x000044d5) volume_small_pane_g6

0x44de,	// (0x000044de) volume_small_pane_g7

0x44e7,	// (0x000044e7) volume_small_pane_g8

0x44f0,	// (0x000044f0) volume_small_pane_g9

0x44f9,	// (0x000044f9) volume_small_pane_g10

0x0009,

0xad67,	// (0x0000ad67) volume_small_pane_g

0x081f,	// (0x0000081f) bg_active_tab_pane_cp2_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp2

0x0507,	// (0x00000507) tabs_3_active_pane_g1

0xb6b3,	// (0x0000b6b3) tabs_3_active_pane_t1

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp2_ParamLimits

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp2

0x0507,	// (0x00000507) tabs_3_passive_pane_g1

0xb6b3,	// (0x0000b6b3) tabs_3_passive_pane_t1

0x081f,	// (0x0000081f) bg_active_tab_pane_cp3_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp3

0x0521,	// (0x00000521) tabs_4_active_pane_g1

0xb6c5,	// (0x0000b6c5) tabs_4_active_pane_t1

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp3_ParamLimits

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp3

0x0521,	// (0x00000521) tabs_4_1_passive_pane_g1

0xb6c5,	// (0x0000b6c5) tabs_4_1_passive_pane_t1

0x2ac6,	// (0x00002ac6) list_highlight_pane_cp2

0xd130,	// (0x0000d130) list_set_pane_ParamLimits

0xd130,	// (0x0000d130) list_set_pane

0xd1ca,	// (0x0000d1ca) main_pane_set_t1_ParamLimits

0xd1ca,	// (0x0000d1ca) main_pane_set_t1

0xd1ea,	// (0x0000d1ea) main_pane_set_t2_ParamLimits

0xd1ea,	// (0x0000d1ea) main_pane_set_t2

0xd1fe,	// (0x0000d1fe) main_pane_set_t3_ParamLimits

0xd1fe,	// (0x0000d1fe) main_pane_set_t3

0xd210,	// (0x0000d210) main_pane_set_t4_ParamLimits

0xd210,	// (0x0000d210) main_pane_set_t4

0x0003,

0xefe2,	// (0x0000efe2) main_pane_set_t_ParamLimits

0xefe2,	// (0x0000efe2) main_pane_set_t

0xd222,	// (0x0000d222) setting_code_pane

0xd22a,	// (0x0000d22a) setting_slider_graphic_pane

0xd22a,	// (0x0000d22a) setting_slider_pane

0xd22a,	// (0x0000d22a) setting_text_pane

0xd22a,	// (0x0000d22a) setting_volume_pane

0x053b,	// (0x0000053b) volume_set_pane

0x04f9,	// (0x000004f9) bg_set_opt_pane_cp

0x0543,	// (0x00000543) setting_slider_pane_t1

0x055c,	// (0x0000055c) setting_slider_pane_t2

0x0576,	// (0x00000576) setting_slider_pane_t3

0x0002,

0xaa20,	// (0x0000aa20) setting_slider_pane_t

0x058e,	// (0x0000058e) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05a4,	// (0x000005a4) setting_slider_graphic_pane_g1

0x05ad,	// (0x000005ad) setting_slider_graphic_pane_t1

0x05bd,	// (0x000005bd) setting_slider_graphic_pane_t2

0x0001,

0xaa27,	// (0x0000aa27) setting_slider_graphic_pane_t

0x05cd,	// (0x000005cd) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4ddb,	// (0x00004ddb) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05d5,	// (0x000005d5) setting_code_pane_t1

0x05e3,	// (0x000005e3) set_text_pane_t1_ParamLimits

0x05e3,	// (0x000005e3) set_text_pane_t1

0x1473,	// (0x00001473) set_opt_bg_pane_g1

0x147b,	// (0x0000147b) set_opt_bg_pane_g2

0x4dbb,	// (0x00004dbb) set_opt_bg_pane_g3

0x148b,	// (0x0000148b) set_opt_bg_pane_g4

0x1493,	// (0x00001493) set_opt_bg_pane_g5

0x149b,	// (0x0000149b) set_opt_bg_pane_g6

0x4dc3,	// (0x00004dc3) set_opt_bg_pane_g7

0x4dcb,	// (0x00004dcb) set_opt_bg_pane_g8

0x4dd3,	// (0x00004dd3) set_opt_bg_pane_g9

0x0008,

0xae24,	// (0x0000ae24) set_opt_bg_pane_g

0x4d4a,	// (0x00004d4a) slider_set_pane_g1

0x4d57,	// (0x00004d57) slider_set_pane_g2

0x0006,

0xae15,	// (0x0000ae15) slider_set_pane_g

0x4be0,	// (0x00004be0) volume_set_pane_g1

0x4be8,	// (0x00004be8) volume_set_pane_g2

0x4bf0,	// (0x00004bf0) volume_set_pane_g3

0x4bf8,	// (0x00004bf8) volume_set_pane_g4

0x4c00,	// (0x00004c00) volume_set_pane_g5

0x4c08,	// (0x00004c08) volume_set_pane_g6

0x4c10,	// (0x00004c10) volume_set_pane_g7

0x4c18,	// (0x00004c18) volume_set_pane_g8

0x4c20,	// (0x00004c20) volume_set_pane_g9

0x4c28,	// (0x00004c28) volume_set_pane_g10

0x0009,

0xaded,	// (0x0000aded) volume_set_pane_g

0xb6d7,	// (0x0000b6d7) indicator_pane_ParamLimits

0xb6d7,	// (0x0000b6d7) indicator_pane

0xb6ff,	// (0x0000b6ff) main_idle_pane_g2_ParamLimits

0xb6ff,	// (0x0000b6ff) main_idle_pane_g2

0xb737,	// (0x0000b737) main_pane_idle_g1_ParamLimits

0xb737,	// (0x0000b737) main_pane_idle_g1

0x063e,	// (0x0000063e) popup_clock_digital_analogue_window_ParamLimits

0x063e,	// (0x0000063e) popup_clock_digital_analogue_window

0xb75e,	// (0x0000b75e) soft_indicator_pane_ParamLimits

0xb75e,	// (0x0000b75e) soft_indicator_pane

0xb778,	// (0x0000b778) wallpaper_pane_ParamLimits

0xb778,	// (0x0000b778) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb78a,	// (0x0000b78a) indicator_pane_g1_ParamLimits

0xb78a,	// (0x0000b78a) indicator_pane_g1

0x5331,	// (0x00005331) navi_navi_icon_text_pane_srt_g1

0x0690,	// (0x00000690) soft_indicator_pane_t1

0x06aa,	// (0x000006aa) aid_ps_area_pane

0xb7a0,	// (0x0000b7a0) aid_ps_clock_pane

0x06c9,	// (0x000006c9) aid_ps_indicator_pane

0x06d5,	// (0x000006d5) indicator_ps_pane_ParamLimits

0x06d5,	// (0x000006d5) indicator_ps_pane

0x06e4,	// (0x000006e4) power_save_pane_g1_ParamLimits

0x06e4,	// (0x000006e4) power_save_pane_g1

0x06f0,	// (0x000006f0) power_save_pane_g2_ParamLimits

0x06f0,	// (0x000006f0) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06aa,	// (0x000006aa) aid_ps_area_pane_ParamLimits

0x0001,

0xaa2c,	// (0x0000aa2c) power_save_pane_g_ParamLimits

0xaa2c,	// (0x0000aa2c) power_save_pane_g

0x06fe,	// (0x000006fe) power_save_pane_t1_ParamLimits

0x06fe,	// (0x000006fe) power_save_pane_t1

0xb7a0,	// (0x0000b7a0) aid_ps_clock_pane_ParamLimits

0x06c9,	// (0x000006c9) aid_ps_indicator_pane_ParamLimits

0x0710,	// (0x00000710) power_save_pane_t4_ParamLimits

0x0710,	// (0x00000710) power_save_pane_t4

0x0001,

0xaa31,	// (0x0000aa31) power_save_pane_t_ParamLimits

0xaa31,	// (0x0000aa31) power_save_pane_t

0x073a,	// (0x0000073a) power_save_t3_ParamLimits

0x073a,	// (0x0000073a) power_save_t3

0x0725,	// (0x00000725) power_save_t2_ParamLimits

0x0725,	// (0x00000725) power_save_t2

0x074f,	// (0x0000074f) indicator_ps_pane_g1

0xb7ae,	// (0x0000b7ae) ai_gene_pane_ParamLimits

0xb7ae,	// (0x0000b7ae) ai_gene_pane

0xb7c5,	// (0x0000b7c5) ai_links_pane_ParamLimits

0xb7c5,	// (0x0000b7c5) ai_links_pane

0xb7dd,	// (0x0000b7dd) indicator_pane_cp1_ParamLimits

0xb7dd,	// (0x0000b7dd) indicator_pane_cp1

0xb7ec,	// (0x0000b7ec) main_pane_idle_g1_cp_ParamLimits

0xb7ec,	// (0x0000b7ec) main_pane_idle_g1_cp

0x0788,	// (0x00000788) popup_ai_links_title_window

0xb804,	// (0x0000b804) soft_indicator_pane_cp1_ParamLimits

0xb804,	// (0x0000b804) soft_indicator_pane_cp1

0x4ac5,	// (0x00004ac5) ai_links_pane_g1

0x4ace,	// (0x00004ace) grid_ai_links_pane

0xd071,	// (0x0000d071) ai_gene_pane_1

0x4ab3,	// (0x00004ab3) ai_gene_pane_2

0x4abc,	// (0x00004abc) list_highlight_pane_cp4

0xd04d,	// (0x0000d04d) cell_ai_link_pane_ParamLimits

0xd04d,	// (0x0000d04d) cell_ai_link_pane

0x4a84,	// (0x00004a84) cell_ai_link_pane_g1

0x09b5,	// (0x000009b5) cell_ai_link_pane_g2

0x0001,

0xadc8,	// (0x0000adc8) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07ab,	// (0x000007ab) popup_ai_links_title_window_t1

0x49d4,	// (0x000049d4) ai_gene_pane_1_g1_ParamLimits

0x49d4,	// (0x000049d4) ai_gene_pane_1_g1

0x49e0,	// (0x000049e0) ai_gene_pane_1_g2_ParamLimits

0x49e0,	// (0x000049e0) ai_gene_pane_1_g2

0x0001,

0xadbe,	// (0x0000adbe) ai_gene_pane_1_g_ParamLimits

0xadbe,	// (0x0000adbe) ai_gene_pane_1_g

0x49ed,	// (0x000049ed) ai_gene_pane_1_t1_ParamLimits

0x49ed,	// (0x000049ed) ai_gene_pane_1_t1

0x4a21,	// (0x00004a21) grid_ai_soft_ind_pane

0x49bf,	// (0x000049bf) ai_gene_pane_2_t1_ParamLimits

0x49bf,	// (0x000049bf) ai_gene_pane_2_t1

0xb818,	// (0x0000b818) main_pane_empty_t1_ParamLimits

0xb818,	// (0x0000b818) main_pane_empty_t1

0xb830,	// (0x0000b830) main_pane_empty_t2_ParamLimits

0xb830,	// (0x0000b830) main_pane_empty_t2

0xb845,	// (0x0000b845) main_pane_empty_t3_ParamLimits

0xb845,	// (0x0000b845) main_pane_empty_t3

0xb857,	// (0x0000b857) main_pane_empty_t4_ParamLimits

0xb857,	// (0x0000b857) main_pane_empty_t4

0xb869,	// (0x0000b869) main_pane_empty_t5_ParamLimits

0xb869,	// (0x0000b869) main_pane_empty_t5

0x0004,

0xeeac,	// (0x0000eeac) main_pane_empty_t_ParamLimits

0xeeac,	// (0x0000eeac) main_pane_empty_t

0x1552,	// (0x00001552) bg_popup_window_pane_ParamLimits

0x1552,	// (0x00001552) bg_popup_window_pane

0x472f,	// (0x0000472f) find_popup_pane_cp2_ParamLimits

0x472f,	// (0x0000472f) find_popup_pane_cp2

0x473b,	// (0x0000473b) heading_pane_ParamLimits

0x473b,	// (0x0000473b) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xcfc5,	// (0x0000cfc5) bg_popup_window_pane_g1_ParamLimits

0xcfc5,	// (0x0000cfc5) bg_popup_window_pane_g1

0xcfd4,	// (0x0000cfd4) bg_popup_window_pane_g2_ParamLimits

0xcfd4,	// (0x0000cfd4) bg_popup_window_pane_g2

0xcfe0,	// (0x0000cfe0) bg_popup_window_pane_g3_ParamLimits

0xcfe0,	// (0x0000cfe0) bg_popup_window_pane_g3

0xcfec,	// (0x0000cfec) bg_popup_window_pane_g4_ParamLimits

0xcfec,	// (0x0000cfec) bg_popup_window_pane_g4

0xcffb,	// (0x0000cffb) bg_popup_window_pane_g5_ParamLimits

0xcffb,	// (0x0000cffb) bg_popup_window_pane_g5

0xd00b,	// (0x0000d00b) bg_popup_window_pane_g6_ParamLimits

0xd00b,	// (0x0000d00b) bg_popup_window_pane_g6

0xd017,	// (0x0000d017) bg_popup_window_pane_g7_ParamLimits

0xd017,	// (0x0000d017) bg_popup_window_pane_g7

0xd026,	// (0x0000d026) bg_popup_window_pane_g8_ParamLimits

0xd026,	// (0x0000d026) bg_popup_window_pane_g8

0xd035,	// (0x0000d035) bg_popup_window_pane_g9_ParamLimits

0xd035,	// (0x0000d035) bg_popup_window_pane_g9

0x4704,	// (0x00004704) bg_popup_window_pane_g10_ParamLimits

0x4704,	// (0x00004704) bg_popup_window_pane_g10

0x0009,

0xefc0,	// (0x0000efc0) bg_popup_window_pane_g_ParamLimits

0xefc0,	// (0x0000efc0) bg_popup_window_pane_g

0x462d,	// (0x0000462d) bg_popup_heading_pane_ParamLimits

0x462d,	// (0x0000462d) bg_popup_heading_pane

0x5274,	// (0x00005274) tabs_4_passive_pane_cp_srt_ParamLimits

0x5274,	// (0x00005274) tabs_4_passive_pane_cp_srt

0x5286,	// (0x00005286) tabs_4_passive_pane_srt_ParamLimits

0x4641,	// (0x00004641) heading_pane_g2

0x5286,	// (0x00005286) tabs_4_passive_pane_srt

0x3785,	// (0x00003785) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3785,	// (0x00003785) bg_passive_tab_pane_cp3_srt

0x4649,	// (0x00004649) heading_pane_t1_ParamLimits

0x4649,	// (0x00004649) heading_pane_t1

0x4660,	// (0x00004660) heading_pane_t2_ParamLimits

0x4660,	// (0x00004660) heading_pane_t2

0x0001,

0xad81,	// (0x0000ad81) heading_pane_t_ParamLimits

0xad81,	// (0x0000ad81) heading_pane_t

0x400d,	// (0x0000400d) bg_popup_heading_pane_g1

0x40bc,	// (0x000040bc) bg_popup_heading_pane_g2

0x40c6,	// (0x000040c6) bg_popup_heading_pane_g3

0x40d0,	// (0x000040d0) bg_popup_heading_pane_g4

0x40da,	// (0x000040da) bg_popup_heading_pane_g5

0x40e4,	// (0x000040e4) bg_popup_heading_pane_g6

0x40ec,	// (0x000040ec) bg_popup_heading_pane_g7

0x40f4,	// (0x000040f4) bg_popup_heading_pane_g8

0x40fe,	// (0x000040fe) bg_popup_heading_pane_g9

0x0008,

0xad3d,	// (0x0000ad3d) bg_popup_heading_pane_g

0x35eb,	// (0x000035eb) bg_popup_sub_pane_g1

0x35f3,	// (0x000035f3) bg_popup_sub_pane_g2

0x35fb,	// (0x000035fb) bg_popup_sub_pane_g3

0x3603,	// (0x00003603) bg_popup_sub_pane_g4

0x360b,	// (0x0000360b) bg_popup_sub_pane_g5

0x3613,	// (0x00003613) bg_popup_sub_pane_g6

0x361b,	// (0x0000361b) bg_popup_sub_pane_g7

0x3623,	// (0x00003623) bg_popup_sub_pane_g8

0x362b,	// (0x0000362b) bg_popup_sub_pane_g9

0x0008,

0xad17,	// (0x0000ad17) bg_popup_sub_pane_g

0x081f,	// (0x0000081f) bg_popup_window_pane_cp5_ParamLimits

0x081f,	// (0x0000081f) bg_popup_window_pane_cp5

0x083b,	// (0x0000083b) popup_note_window_g1_ParamLimits

0x083b,	// (0x0000083b) popup_note_window_g1

0x0847,	// (0x00000847) popup_note_window_t1_ParamLimits

0x0847,	// (0x00000847) popup_note_window_t1

0x0859,	// (0x00000859) popup_note_window_t2_ParamLimits

0x0859,	// (0x00000859) popup_note_window_t2

0x086b,	// (0x0000086b) popup_note_window_t3_ParamLimits

0x086b,	// (0x0000086b) popup_note_window_t3

0x087d,	// (0x0000087d) popup_note_window_t4_ParamLimits

0x087d,	// (0x0000087d) popup_note_window_t4

0x08a5,	// (0x000008a5) popup_note_window_t5_ParamLimits

0x08a5,	// (0x000008a5) popup_note_window_t5

0x0004,

0xaa41,	// (0x0000aa41) popup_note_window_t_ParamLimits

0xaa41,	// (0x0000aa41) popup_note_window_t

0x08c9,	// (0x000008c9) bg_popup_window_pane_cp6_ParamLimits

0x08c9,	// (0x000008c9) bg_popup_window_pane_cp6

0x3f81,	// (0x00003f81) popup_note_image_window_g1_ParamLimits

0x3f81,	// (0x00003f81) popup_note_image_window_g1

0x3f8d,	// (0x00003f8d) popup_note_image_window_g2_ParamLimits

0x3f8d,	// (0x00003f8d) popup_note_image_window_g2

0x0001,

0xad0b,	// (0x0000ad0b) popup_note_image_window_g_ParamLimits

0xad0b,	// (0x0000ad0b) popup_note_image_window_g

0x3fa6,	// (0x00003fa6) popup_note_image_window_t1_ParamLimits

0x3fa6,	// (0x00003fa6) popup_note_image_window_t1

0x3fbf,	// (0x00003fbf) popup_note_image_window_t2_ParamLimits

0x3fbf,	// (0x00003fbf) popup_note_image_window_t2

0x3fd8,	// (0x00003fd8) popup_note_image_window_t3_ParamLimits

0x3fd8,	// (0x00003fd8) popup_note_image_window_t3

0x0002,

0xad10,	// (0x0000ad10) popup_note_image_window_t_ParamLimits

0xad10,	// (0x0000ad10) popup_note_image_window_t

0x3e42,	// (0x00003e42) bg_popup_window_pane_cp7_ParamLimits

0x3e42,	// (0x00003e42) bg_popup_window_pane_cp7

0x3e72,	// (0x00003e72) popup_note_wait_window_g1_ParamLimits

0x3e72,	// (0x00003e72) popup_note_wait_window_g1

0x3e7e,	// (0x00003e7e) popup_note_wait_window_g2_ParamLimits

0x3e7e,	// (0x00003e7e) popup_note_wait_window_g2

0x0002,

0xacf9,	// (0x0000acf9) popup_note_wait_window_g_ParamLimits

0xacf9,	// (0x0000acf9) popup_note_wait_window_g

0x3e96,	// (0x00003e96) popup_note_wait_window_t1_ParamLimits

0x3e96,	// (0x00003e96) popup_note_wait_window_t1

0x3ebd,	// (0x00003ebd) popup_note_wait_window_t2_ParamLimits

0x3ebd,	// (0x00003ebd) popup_note_wait_window_t2

0x3eda,	// (0x00003eda) popup_note_wait_window_t3_ParamLimits

0x3eda,	// (0x00003eda) popup_note_wait_window_t3

0x3eed,	// (0x00003eed) popup_note_wait_window_t4_ParamLimits

0x3eed,	// (0x00003eed) popup_note_wait_window_t4

0x0004,

0xad00,	// (0x0000ad00) popup_note_wait_window_t_ParamLimits

0xad00,	// (0x0000ad00) popup_note_wait_window_t

0x3f12,	// (0x00003f12) wait_bar_pane_ParamLimits

0x3f12,	// (0x00003f12) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xabc0,	// (0x0000abc0) wait_anim_pane_g

0x3de6,	// (0x00003de6) wait_border_pane_g1

0x3df1,	// (0x00003df1) wait_border_pane_g2

0x3dfa,	// (0x00003dfa) wait_border_pane_g3

0x0002,

0xacf2,	// (0x0000acf2) wait_border_pane_g

0x3c56,	// (0x00003c56) bg_popup_window_pane_cp16_ParamLimits

0x3c56,	// (0x00003c56) bg_popup_window_pane_cp16

0x3d56,	// (0x00003d56) indicator_popup_pane_cp4_ParamLimits

0x3d56,	// (0x00003d56) indicator_popup_pane_cp4

0x3d6a,	// (0x00003d6a) popup_query_data_window_t1_ParamLimits

0x3d6a,	// (0x00003d6a) popup_query_data_window_t1

0x3d7c,	// (0x00003d7c) popup_query_data_window_t2_ParamLimits

0x3d7c,	// (0x00003d7c) popup_query_data_window_t2

0x3d95,	// (0x00003d95) popup_query_data_window_t3_ParamLimits

0x3d95,	// (0x00003d95) popup_query_data_window_t3

0x0002,

0xaceb,	// (0x0000aceb) popup_query_data_window_t_ParamLimits

0xaceb,	// (0x0000aceb) popup_query_data_window_t

0x3daf,	// (0x00003daf) query_popup_data_pane_ParamLimits

0x3daf,	// (0x00003daf) query_popup_data_pane

0x3dc3,	// (0x00003dc3) query_popup_data_pane_cp1_ParamLimits

0x3dc3,	// (0x00003dc3) query_popup_data_pane_cp1

0x3c56,	// (0x00003c56) bg_popup_window_pane_cp10_ParamLimits

0x3c56,	// (0x00003c56) bg_popup_window_pane_cp10

0x3c88,	// (0x00003c88) indicator_popup_pane_ParamLimits

0x3c88,	// (0x00003c88) indicator_popup_pane

0x3caa,	// (0x00003caa) popup_query_code_window_t1_ParamLimits

0x3caa,	// (0x00003caa) popup_query_code_window_t1

0x3cc4,	// (0x00003cc4) popup_query_code_window_t2_ParamLimits

0x3cc4,	// (0x00003cc4) popup_query_code_window_t2

0x3d0d,	// (0x00003d0d) popup_query_code_window_t3_ParamLimits

0x3d0d,	// (0x00003d0d) popup_query_code_window_t3

0x0002,

0xace4,	// (0x0000ace4) popup_query_code_window_t_ParamLimits

0xace4,	// (0x0000ace4) popup_query_code_window_t

0x3d3c,	// (0x00003d3c) query_popup_pane_ParamLimits

0x3d3c,	// (0x00003d3c) query_popup_pane

0x08c9,	// (0x000008c9) bg_popup_window_pane_cp15_ParamLimits

0x08c9,	// (0x000008c9) bg_popup_window_pane_cp15

0x08e7,	// (0x000008e7) indicator_popup_pane_cp1_ParamLimits

0x08e7,	// (0x000008e7) indicator_popup_pane_cp1

0x08fa,	// (0x000008fa) indicator_popup_pane_cp2_ParamLimits

0x08fa,	// (0x000008fa) indicator_popup_pane_cp2

0x090d,	// (0x0000090d) popup_query_data_code_window_g1_ParamLimits

0x090d,	// (0x0000090d) popup_query_data_code_window_g1

0x0920,	// (0x00000920) popup_query_data_code_window_t1_ParamLimits

0x0920,	// (0x00000920) popup_query_data_code_window_t1

0x0932,	// (0x00000932) popup_query_data_code_window_t2_ParamLimits

0x0932,	// (0x00000932) popup_query_data_code_window_t2

0x0944,	// (0x00000944) popup_query_data_code_window_t3_ParamLimits

0x0944,	// (0x00000944) popup_query_data_code_window_t3

0x095a,	// (0x0000095a) popup_query_data_code_window_t4_ParamLimits

0x095a,	// (0x0000095a) popup_query_data_code_window_t4

0x0003,

0xaa4c,	// (0x0000aa4c) popup_query_data_code_window_t_ParamLimits

0xaa4c,	// (0x0000aa4c) popup_query_data_code_window_t

0x238f,	// (0x0000238f) list_single_midp_graphic_pane_g3

0x0972,	// (0x00000972) query_popup_data_pane_cp2_ParamLimits

0x0985,	// (0x00000985) query_popup_pane_cp2_ParamLimits

0x0985,	// (0x00000985) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c4e,	// (0x00003c4e) heading_pane_cp5

0x0a6d,	// (0x00000a6d) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x0998,	// (0x00000998) query_popup_pane_t1

0x09a6,	// (0x000009a6) list_popup_info_pane_ParamLimits

0x09a6,	// (0x000009a6) list_popup_info_pane

0x09b5,	// (0x000009b5) listscroll_popup_info_pane_g1

0x09bd,	// (0x000009bd) scroll_pane_cp7

0x09c7,	// (0x000009c7) popup_info_list_pane_t1_ParamLimits

0x09c7,	// (0x000009c7) popup_info_list_pane_t1

0x09e1,	// (0x000009e1) popup_info_list_pane_t2_ParamLimits

0x09e1,	// (0x000009e1) popup_info_list_pane_t2

0x0001,

0xaa55,	// (0x0000aa55) popup_info_list_pane_t_ParamLimits

0xaa55,	// (0x0000aa55) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x5368,	// (0x00005368) find_popup_pane

0x04f9,	// (0x000004f9) bg_popup_window_pane_cp3

0x09fb,	// (0x000009fb) heading_pane_cp3

0x0a07,	// (0x00000a07) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb8cb,	// (0x0000b8cb) heading_pane_cp4

0x0a6d,	// (0x00000a6d) listscroll_popup_colour_pane

0x0a75,	// (0x00000a75) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a75,	// (0x00000a75) cell_large_graphic_colour_none_popup_pane

0xb8d3,	// (0x0000b8d3) grid_large_graphic_colour_popup_pane_ParamLimits

0xb8d3,	// (0x0000b8d3) grid_large_graphic_colour_popup_pane

0x0ab1,	// (0x00000ab1) listscroll_popup_colour_pane_g1_ParamLimits

0x0ab1,	// (0x00000ab1) listscroll_popup_colour_pane_g1

0x0ac8,	// (0x00000ac8) listscroll_popup_colour_pane_g2_ParamLimits

0x0ac8,	// (0x00000ac8) listscroll_popup_colour_pane_g2

0x0adf,	// (0x00000adf) listscroll_popup_colour_pane_g3_ParamLimits

0x0adf,	// (0x00000adf) listscroll_popup_colour_pane_g3

0xb8f7,	// (0x0000b8f7) listscroll_popup_colour_pane_g4_ParamLimits

0xb8f7,	// (0x0000b8f7) listscroll_popup_colour_pane_g4

0x0003,

0xeeb7,	// (0x0000eeb7) listscroll_popup_colour_pane_g_ParamLimits

0xeeb7,	// (0x0000eeb7) listscroll_popup_colour_pane_g

0x0afe,	// (0x00000afe) scroll_pane_cp6_ParamLimits

0x0afe,	// (0x00000afe) scroll_pane_cp6

0xb906,	// (0x0000b906) cell_large_graphic_colour_popup_pane_ParamLimits

0xb906,	// (0x0000b906) cell_large_graphic_colour_popup_pane

0x0b2f,	// (0x00000b2f) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b3e,	// (0x00000b3e) cell_large_graphic_colour_popup_pane_g1

0x0b46,	// (0x00000b46) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xaa63,	// (0x0000aa63) cell_large_graphic_colour_popup_pane_g

0x0b4e,	// (0x00000b4e) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b57,	// (0x00000b57) grid_highlight_pane_cp4

0x0b5f,	// (0x00000b5f) bg_popup_window_pane_cp8_ParamLimits

0x0b5f,	// (0x00000b5f) bg_popup_window_pane_cp8

0x0b7a,	// (0x00000b7a) popup_snote_single_text_window_g1_ParamLimits

0x0b7a,	// (0x00000b7a) popup_snote_single_text_window_g1

0x0b8c,	// (0x00000b8c) popup_snote_single_text_window_t1_ParamLimits

0x0b8c,	// (0x00000b8c) popup_snote_single_text_window_t1

0x0b9f,	// (0x00000b9f) popup_snote_single_text_window_t2_ParamLimits

0x0b9f,	// (0x00000b9f) popup_snote_single_text_window_t2

0x0bb2,	// (0x00000bb2) popup_snote_single_text_window_t3_ParamLimits

0x0bb2,	// (0x00000bb2) popup_snote_single_text_window_t3

0x0beb,	// (0x00000beb) popup_snote_single_text_window_t4_ParamLimits

0x0beb,	// (0x00000beb) popup_snote_single_text_window_t4

0x0c1f,	// (0x00000c1f) popup_snote_single_text_window_t5_ParamLimits

0x0c1f,	// (0x00000c1f) popup_snote_single_text_window_t5

0x0004,

0xaa68,	// (0x0000aa68) popup_snote_single_text_window_t_ParamLimits

0xaa68,	// (0x0000aa68) popup_snote_single_text_window_t

0x0c4e,	// (0x00000c4e) bg_popup_window_pane_cp9_ParamLimits

0x0c4e,	// (0x00000c4e) bg_popup_window_pane_cp9

0x0b7a,	// (0x00000b7a) popup_snote_single_graphic_window_g1_ParamLimits

0x0b7a,	// (0x00000b7a) popup_snote_single_graphic_window_g1

0x0c5c,	// (0x00000c5c) popup_snote_single_graphic_window_g2_ParamLimits

0x0c5c,	// (0x00000c5c) popup_snote_single_graphic_window_g2

0x0001,

0xaa73,	// (0x0000aa73) popup_snote_single_graphic_window_g_ParamLimits

0xaa73,	// (0x0000aa73) popup_snote_single_graphic_window_g

0x0c68,	// (0x00000c68) popup_snote_single_graphic_window_t1_ParamLimits

0x0c68,	// (0x00000c68) popup_snote_single_graphic_window_t1

0x0c7b,	// (0x00000c7b) popup_snote_single_graphic_window_t2_ParamLimits

0x0c7b,	// (0x00000c7b) popup_snote_single_graphic_window_t2

0x0c8e,	// (0x00000c8e) popup_snote_single_graphic_window_t3_ParamLimits

0x0c8e,	// (0x00000c8e) popup_snote_single_graphic_window_t3

0x0cc7,	// (0x00000cc7) popup_snote_single_graphic_window_t4_ParamLimits

0x0cc7,	// (0x00000cc7) popup_snote_single_graphic_window_t4

0x0cfb,	// (0x00000cfb) popup_snote_single_graphic_window_t5_ParamLimits

0x0cfb,	// (0x00000cfb) popup_snote_single_graphic_window_t5

0x0004,

0xaa78,	// (0x0000aa78) popup_snote_single_graphic_window_t_ParamLimits

0xaa78,	// (0x0000aa78) popup_snote_single_graphic_window_t

0x51f4,	// (0x000051f4) grid_graphic_popup_pane_ParamLimits

0x51f4,	// (0x000051f4) grid_graphic_popup_pane

0x521c,	// (0x0000521c) listscroll_popup_graphic_pane_g1_ParamLimits

0x521c,	// (0x0000521c) listscroll_popup_graphic_pane_g1

0xd36b,	// (0x0000d36b) listscroll_popup_graphic_pane_g2_ParamLimits

0xd36b,	// (0x0000d36b) listscroll_popup_graphic_pane_g2

0x0001,

0xf005,	// (0x0000f005) listscroll_popup_graphic_pane_g_ParamLimits

0xf005,	// (0x0000f005) listscroll_popup_graphic_pane_g

0x5244,	// (0x00005244) scroll_pane_cp5

0xd32f,	// (0x0000d32f) cell_graphic_popup_pane_ParamLimits

0xd32f,	// (0x0000d32f) cell_graphic_popup_pane

0x5180,	// (0x00005180) cell_graphic_popup_pane_g1

0x5188,	// (0x00005188) cell_graphic_popup_pane_g2

0x0b4e,	// (0x00000b4e) cell_graphic_popup_pane_g3

0x0002,

0xae5a,	// (0x0000ae5a) cell_graphic_popup_pane_g

0x5191,	// (0x00005191) cell_graphic_popup_pane_t2

0x0b57,	// (0x00000b57) grid_highlight_pane_cp3

0x0d3c,	// (0x00000d3c) list_gen_pane_ParamLimits

0x0d3c,	// (0x00000d3c) list_gen_pane

0x0d6e,	// (0x00000d6e) scroll_pane

0xd2ea,	// (0x0000d2ea) bg_list_pane_g1_ParamLimits

0xd2ea,	// (0x0000d2ea) bg_list_pane_g1

0x50fd,	// (0x000050fd) bg_list_pane_g2_ParamLimits

0x50fd,	// (0x000050fd) bg_list_pane_g2

0x5110,	// (0x00005110) bg_list_pane_g3_ParamLimits

0x5110,	// (0x00005110) bg_list_pane_g3

0x5122,	// (0x00005122) bg_list_pane_g4_ParamLimits

0x5122,	// (0x00005122) bg_list_pane_g4

0xd305,	// (0x0000d305) bg_list_pane_g5_ParamLimits

0xd305,	// (0x0000d305) bg_list_pane_g5

0x0004,

0xeffa,	// (0x0000effa) bg_list_pane_g_ParamLimits

0xeffa,	// (0x0000effa) bg_list_pane_g

0xd279,	// (0x0000d279) list_double2_graphic_large_graphic_pane_ParamLimits

0xd279,	// (0x0000d279) list_double2_graphic_large_graphic_pane

0xd279,	// (0x0000d279) list_double2_graphic_pane_ParamLimits

0xd279,	// (0x0000d279) list_double2_graphic_pane

0xd279,	// (0x0000d279) list_double2_large_graphic_pane_ParamLimits

0xd279,	// (0x0000d279) list_double2_large_graphic_pane

0xd28c,	// (0x0000d28c) list_double2_pane_ParamLimits

0xd28c,	// (0x0000d28c) list_double2_pane

0xd279,	// (0x0000d279) list_double_graphic_heading_pane_ParamLimits

0xd279,	// (0x0000d279) list_double_graphic_heading_pane

0xd279,	// (0x0000d279) list_double_graphic_pane_ParamLimits

0xd279,	// (0x0000d279) list_double_graphic_pane

0xd279,	// (0x0000d279) list_double_heading_pane_ParamLimits

0xd279,	// (0x0000d279) list_double_heading_pane

0xd279,	// (0x0000d279) list_double_large_graphic_pane_ParamLimits

0xd279,	// (0x0000d279) list_double_large_graphic_pane

0xd279,	// (0x0000d279) list_double_number_pane_ParamLimits

0xd279,	// (0x0000d279) list_double_number_pane

0xd279,	// (0x0000d279) list_double_pane_ParamLimits

0xd279,	// (0x0000d279) list_double_pane

0xd279,	// (0x0000d279) list_double_time_pane_ParamLimits

0xd279,	// (0x0000d279) list_double_time_pane

0xd279,	// (0x0000d279) list_setting_number_pane_ParamLimits

0xd279,	// (0x0000d279) list_setting_number_pane

0xd279,	// (0x0000d279) list_setting_pane_ParamLimits

0xd279,	// (0x0000d279) list_setting_pane

0xd29e,	// (0x0000d29e) list_single_2graphic_pane_ParamLimits

0xd29e,	// (0x0000d29e) list_single_2graphic_pane

0xd29e,	// (0x0000d29e) list_single_graphic_heading_pane_ParamLimits

0xd29e,	// (0x0000d29e) list_single_graphic_heading_pane

0xd29e,	// (0x0000d29e) list_single_graphic_pane_ParamLimits

0xd29e,	// (0x0000d29e) list_single_graphic_pane

0xd29e,	// (0x0000d29e) list_single_heading_pane_ParamLimits

0xd29e,	// (0x0000d29e) list_single_heading_pane

0xd279,	// (0x0000d279) list_single_large_graphic_pane_ParamLimits

0xd279,	// (0x0000d279) list_single_large_graphic_pane

0xd29e,	// (0x0000d29e) list_single_number_heading_pane_ParamLimits

0xd29e,	// (0x0000d29e) list_single_number_heading_pane

0xd29e,	// (0x0000d29e) list_single_number_pane_ParamLimits

0xd29e,	// (0x0000d29e) list_single_number_pane

0xd29e,	// (0x0000d29e) list_single_pane_ParamLimits

0xd29e,	// (0x0000d29e) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x0dae,	// (0x00000dae) list_single_pane_g1_ParamLimits

0x0dae,	// (0x00000dae) list_single_pane_g1

0x0dba,	// (0x00000dba) list_single_pane_g2_ParamLimits

0x0dba,	// (0x00000dba) list_single_pane_g2

0x0001,

0xaa8a,	// (0x0000aa8a) list_single_pane_g_ParamLimits

0xaa8a,	// (0x0000aa8a) list_single_pane_g

0x4f94,	// (0x00004f94) list_single_pane_t1_ParamLimits

0x4f94,	// (0x00004f94) list_single_pane_t1

0x0dae,	// (0x00000dae) list_single_number_pane_g1_ParamLimits

0x0dae,	// (0x00000dae) list_single_number_pane_g1

0x0dba,	// (0x00000dba) list_single_number_pane_g2_ParamLimits

0x0dba,	// (0x00000dba) list_single_number_pane_g2

0x0001,

0xaa8a,	// (0x0000aa8a) list_single_number_pane_g_ParamLimits

0xaa8a,	// (0x0000aa8a) list_single_number_pane_g

0x3579,	// (0x00003579) list_single_number_pane_t1_ParamLimits

0x3579,	// (0x00003579) list_single_number_pane_t1

0x4cc8,	// (0x00004cc8) list_single_number_pane_t2_ParamLimits

0x4cc8,	// (0x00004cc8) list_single_number_pane_t2

0x0001,

0xae10,	// (0x0000ae10) list_single_number_pane_t_ParamLimits

0xae10,	// (0x0000ae10) list_single_number_pane_t

0x0da2,	// (0x00000da2) list_single_graphic_pane_g1_ParamLimits

0x0da2,	// (0x00000da2) list_single_graphic_pane_g1

0x0dae,	// (0x00000dae) list_single_graphic_pane_g2_ParamLimits

0x0dae,	// (0x00000dae) list_single_graphic_pane_g2

0x0dba,	// (0x00000dba) list_single_graphic_pane_g3_ParamLimits

0x0dba,	// (0x00000dba) list_single_graphic_pane_g3

0x0002,

0xaa83,	// (0x0000aa83) list_single_graphic_pane_g_ParamLimits

0xaa83,	// (0x0000aa83) list_single_graphic_pane_g

0x0dc6,	// (0x00000dc6) list_single_graphic_pane_t1_ParamLimits

0x0dc6,	// (0x00000dc6) list_single_graphic_pane_t1

0x0dae,	// (0x00000dae) list_single_heading_pane_g1_ParamLimits

0x0dae,	// (0x00000dae) list_single_heading_pane_g1

0x0dba,	// (0x00000dba) list_single_heading_pane_g2_ParamLimits

0x0dba,	// (0x00000dba) list_single_heading_pane_g2

0x0001,

0xaa8a,	// (0x0000aa8a) list_single_heading_pane_g_ParamLimits

0xaa8a,	// (0x0000aa8a) list_single_heading_pane_g

0x0ddc,	// (0x00000ddc) list_single_heading_pane_t1_ParamLimits

0x0ddc,	// (0x00000ddc) list_single_heading_pane_t1

0x0df2,	// (0x00000df2) list_single_heading_pane_t2_ParamLimits

0x0df2,	// (0x00000df2) list_single_heading_pane_t2

0x0001,

0xaa8f,	// (0x0000aa8f) list_single_heading_pane_t_ParamLimits

0xaa8f,	// (0x0000aa8f) list_single_heading_pane_t

0x0dae,	// (0x00000dae) list_single_number_heading_pane_g1_ParamLimits

0x0dae,	// (0x00000dae) list_single_number_heading_pane_g1

0x0dba,	// (0x00000dba) list_single_number_heading_pane_g2_ParamLimits

0x0dba,	// (0x00000dba) list_single_number_heading_pane_g2

0x0001,

0xaa8a,	// (0x0000aa8a) list_single_number_heading_pane_g_ParamLimits

0xaa8a,	// (0x0000aa8a) list_single_number_heading_pane_g

0x0ddc,	// (0x00000ddc) list_single_number_heading_pane_t1_ParamLimits

0x0ddc,	// (0x00000ddc) list_single_number_heading_pane_t1

0x0e04,	// (0x00000e04) list_single_number_heading_pane_t2_ParamLimits

0x0e04,	// (0x00000e04) list_single_number_heading_pane_t2

0x0e16,	// (0x00000e16) list_single_number_heading_pane_t3_ParamLimits

0x0e16,	// (0x00000e16) list_single_number_heading_pane_t3

0x0002,

0xaa94,	// (0x0000aa94) list_single_number_heading_pane_t_ParamLimits

0xaa94,	// (0x0000aa94) list_single_number_heading_pane_t

0x0e28,	// (0x00000e28) list_single_graphic_heading_pane_g1_ParamLimits

0x0e28,	// (0x00000e28) list_single_graphic_heading_pane_g1

0xb92f,	// (0x0000b92f) list_single_graphic_heading_pane_g4_ParamLimits

0xb92f,	// (0x0000b92f) list_single_graphic_heading_pane_g4

0x0dba,	// (0x00000dba) list_single_graphic_heading_pane_g5_ParamLimits

0x0dba,	// (0x00000dba) list_single_graphic_heading_pane_g5

0x0002,

0xeec0,	// (0x0000eec0) list_single_graphic_heading_pane_g_ParamLimits

0xeec0,	// (0x0000eec0) list_single_graphic_heading_pane_g

0x0ddc,	// (0x00000ddc) list_single_graphic_heading_pane_t1_ParamLimits

0x0ddc,	// (0x00000ddc) list_single_graphic_heading_pane_t1

0x0e45,	// (0x00000e45) list_single_graphic_heading_pane_t2_ParamLimits

0x0e45,	// (0x00000e45) list_single_graphic_heading_pane_t2

0x0001,

0xaaa2,	// (0x0000aaa2) list_single_graphic_heading_pane_t_ParamLimits

0xaaa2,	// (0x0000aaa2) list_single_graphic_heading_pane_t

0x5998,	// (0x00005998) list_single_large_graphic_pane_g1_ParamLimits

0x5998,	// (0x00005998) list_single_large_graphic_pane_g1

0x59a4,	// (0x000059a4) list_single_large_graphic_pane_g2_ParamLimits

0x59a4,	// (0x000059a4) list_single_large_graphic_pane_g2

0x59b0,	// (0x000059b0) list_single_large_graphic_pane_g3_ParamLimits

0x59b0,	// (0x000059b0) list_single_large_graphic_pane_g3

0x0002,

0xaeff,	// (0x0000aeff) list_single_large_graphic_pane_g_ParamLimits

0xaeff,	// (0x0000aeff) list_single_large_graphic_pane_g

0x3df1,	// (0x00003df1) wait_border_pane_g2_copy1

0xb940,	// (0x0000b940) list_single_large_graphic_pane_g4_cp2

0x59bc,	// (0x000059bc) list_single_large_graphic_pane_t1_ParamLimits

0x59bc,	// (0x000059bc) list_single_large_graphic_pane_t1

0x2383,	// (0x00002383) list_double_pane_g1_ParamLimits

0x2383,	// (0x00002383) list_double_pane_g1

0xb948,	// (0x0000b948) list_double_pane_g2_ParamLimits

0xb948,	// (0x0000b948) list_double_pane_g2

0x0001,

0xeec7,	// (0x0000eec7) list_double_pane_g_ParamLimits

0xeec7,	// (0x0000eec7) list_double_pane_g

0xb954,	// (0x0000b954) list_double_pane_t1_ParamLimits

0xb954,	// (0x0000b954) list_double_pane_t1

0xb96a,	// (0x0000b96a) list_double_pane_t2_ParamLimits

0xb96a,	// (0x0000b96a) list_double_pane_t2

0x0001,

0xeecc,	// (0x0000eecc) list_double_pane_t_ParamLimits

0xeecc,	// (0x0000eecc) list_double_pane_t

0xb97c,	// (0x0000b97c) list_double2_pane_g1_ParamLimits

0xb97c,	// (0x0000b97c) list_double2_pane_g1

0x0ea5,	// (0x00000ea5) list_double2_pane_g2_ParamLimits

0x0ea5,	// (0x00000ea5) list_double2_pane_g2

0x0001,

0xeed1,	// (0x0000eed1) list_double2_pane_g_ParamLimits

0xeed1,	// (0x0000eed1) list_double2_pane_g

0x0eb1,	// (0x00000eb1) list_double2_pane_t1_ParamLimits

0x0eb1,	// (0x00000eb1) list_double2_pane_t1

0xb98d,	// (0x0000b98d) list_double2_pane_t2_ParamLimits

0xb98d,	// (0x0000b98d) list_double2_pane_t2

0x0001,

0xeed6,	// (0x0000eed6) list_double2_pane_t_ParamLimits

0xeed6,	// (0x0000eed6) list_double2_pane_t

0x2383,	// (0x00002383) list_double_number_pane_g1_ParamLimits

0x2383,	// (0x00002383) list_double_number_pane_g1

0xb948,	// (0x0000b948) list_double_number_pane_g2_ParamLimits

0xb948,	// (0x0000b948) list_double_number_pane_g2

0x0001,

0xeec7,	// (0x0000eec7) list_double_number_pane_g_ParamLimits

0xeec7,	// (0x0000eec7) list_double_number_pane_g

0xb99f,	// (0x0000b99f) list_double_number_pane_t1_ParamLimits

0xb99f,	// (0x0000b99f) list_double_number_pane_t1

0xb9b1,	// (0x0000b9b1) list_double_number_pane_t2_ParamLimits

0xb9b1,	// (0x0000b9b1) list_double_number_pane_t2

0xb9c7,	// (0x0000b9c7) list_double_number_pane_t3_ParamLimits

0xb9c7,	// (0x0000b9c7) list_double_number_pane_t3

0x0002,

0xeedb,	// (0x0000eedb) list_double_number_pane_t_ParamLimits

0xeedb,	// (0x0000eedb) list_double_number_pane_t

0x4474,	// (0x00004474) list_double_graphic_pane_g1_ParamLimits

0x4474,	// (0x00004474) list_double_graphic_pane_g1

0xb9d9,	// (0x0000b9d9) list_double_graphic_pane_g2_ParamLimits

0xb9d9,	// (0x0000b9d9) list_double_graphic_pane_g2

0xb9e8,	// (0x0000b9e8) list_double_graphic_pane_g3_ParamLimits

0xb9e8,	// (0x0000b9e8) list_double_graphic_pane_g3

0x0003,

0xeee2,	// (0x0000eee2) list_double_graphic_pane_g_ParamLimits

0xeee2,	// (0x0000eee2) list_double_graphic_pane_g

0xba00,	// (0x0000ba00) list_double_graphic_pane_t1_ParamLimits

0xba00,	// (0x0000ba00) list_double_graphic_pane_t1

0xba16,	// (0x0000ba16) list_double_graphic_pane_t2_ParamLimits

0xba16,	// (0x0000ba16) list_double_graphic_pane_t2

0x0001,

0xeeeb,	// (0x0000eeeb) list_double_graphic_pane_t_ParamLimits

0xeeeb,	// (0x0000eeeb) list_double_graphic_pane_t

0xba28,	// (0x0000ba28) list_double2_graphic_pane_g1_ParamLimits

0xba28,	// (0x0000ba28) list_double2_graphic_pane_g1

0xba34,	// (0x0000ba34) list_double2_graphic_pane_g2_ParamLimits

0xba34,	// (0x0000ba34) list_double2_graphic_pane_g2

0xba40,	// (0x0000ba40) list_double2_graphic_pane_g3_ParamLimits

0xba40,	// (0x0000ba40) list_double2_graphic_pane_g3

0x0002,

0xeef0,	// (0x0000eef0) list_double2_graphic_pane_g_ParamLimits

0xeef0,	// (0x0000eef0) list_double2_graphic_pane_g

0xba4c,	// (0x0000ba4c) list_double2_graphic_pane_t1_ParamLimits

0xba4c,	// (0x0000ba4c) list_double2_graphic_pane_t1

0xba62,	// (0x0000ba62) list_double2_graphic_pane_t2_ParamLimits

0xba62,	// (0x0000ba62) list_double2_graphic_pane_t2

0x0001,

0xeef7,	// (0x0000eef7) list_double2_graphic_pane_t_ParamLimits

0xeef7,	// (0x0000eef7) list_double2_graphic_pane_t

0xba74,	// (0x0000ba74) list_double_large_graphic_pane_g1_ParamLimits

0xba74,	// (0x0000ba74) list_double_large_graphic_pane_g1

0xba93,	// (0x0000ba93) list_double_large_graphic_pane_g2_ParamLimits

0xba93,	// (0x0000ba93) list_double_large_graphic_pane_g2

0xb948,	// (0x0000b948) list_double_large_graphic_pane_g3_ParamLimits

0xb948,	// (0x0000b948) list_double_large_graphic_pane_g3

0xbaa4,	// (0x0000baa4) list_double_large_graphic_pane_g4_ParamLimits

0xbaa4,	// (0x0000baa4) list_double_large_graphic_pane_g4

0x0004,

0xeefc,	// (0x0000eefc) list_double_large_graphic_pane_g_ParamLimits

0xeefc,	// (0x0000eefc) list_double_large_graphic_pane_g

0xbab7,	// (0x0000bab7) list_double_large_graphic_pane_t1_ParamLimits

0xbab7,	// (0x0000bab7) list_double_large_graphic_pane_t1

0xbad0,	// (0x0000bad0) list_double_large_graphic_pane_t2_ParamLimits

0xbad0,	// (0x0000bad0) list_double_large_graphic_pane_t2

0x0001,

0xef07,	// (0x0000ef07) list_double_large_graphic_pane_t_ParamLimits

0xef07,	// (0x0000ef07) list_double_large_graphic_pane_t

0xbae2,	// (0x0000bae2) list_double2_large_graphic_pane_g1_ParamLimits

0xbae2,	// (0x0000bae2) list_double2_large_graphic_pane_g1

0xbaee,	// (0x0000baee) list_double2_large_graphic_pane_g2_ParamLimits

0xbaee,	// (0x0000baee) list_double2_large_graphic_pane_g2

0xba40,	// (0x0000ba40) list_double2_large_graphic_pane_g3_ParamLimits

0xba40,	// (0x0000ba40) list_double2_large_graphic_pane_g3

0x0002,

0xef0c,	// (0x0000ef0c) list_double2_large_graphic_pane_g_ParamLimits

0xef0c,	// (0x0000ef0c) list_double2_large_graphic_pane_g

0xbaff,	// (0x0000baff) list_double2_large_graphic_pane_t1_ParamLimits

0xbaff,	// (0x0000baff) list_double2_large_graphic_pane_t1

0xbb15,	// (0x0000bb15) list_double2_large_graphic_pane_t2_ParamLimits

0xbb15,	// (0x0000bb15) list_double2_large_graphic_pane_t2

0x0001,

0xef13,	// (0x0000ef13) list_double2_large_graphic_pane_t_ParamLimits

0xef13,	// (0x0000ef13) list_double2_large_graphic_pane_t

0xbb27,	// (0x0000bb27) list_double_heading_pane_g1_ParamLimits

0xbb27,	// (0x0000bb27) list_double_heading_pane_g1

0xbb38,	// (0x0000bb38) list_double_heading_pane_g2_ParamLimits

0xbb38,	// (0x0000bb38) list_double_heading_pane_g2

0x0001,

0xef18,	// (0x0000ef18) list_double_heading_pane_g_ParamLimits

0xef18,	// (0x0000ef18) list_double_heading_pane_g

0xbb44,	// (0x0000bb44) list_double_heading_pane_t1_ParamLimits

0xbb44,	// (0x0000bb44) list_double_heading_pane_t1

0xbb5a,	// (0x0000bb5a) list_double_heading_pane_t2_ParamLimits

0xbb5a,	// (0x0000bb5a) list_double_heading_pane_t2

0x0001,

0xef1d,	// (0x0000ef1d) list_double_heading_pane_t_ParamLimits

0xef1d,	// (0x0000ef1d) list_double_heading_pane_t

0x0fb3,	// (0x00000fb3) list_double_graphic_heading_pane_g1_ParamLimits

0x0fb3,	// (0x00000fb3) list_double_graphic_heading_pane_g1

0xbb27,	// (0x0000bb27) list_double_graphic_heading_pane_g2_ParamLimits

0xbb27,	// (0x0000bb27) list_double_graphic_heading_pane_g2

0xbb38,	// (0x0000bb38) list_double_graphic_heading_pane_g3_ParamLimits

0xbb38,	// (0x0000bb38) list_double_graphic_heading_pane_g3

0x0002,

0xef22,	// (0x0000ef22) list_double_graphic_heading_pane_g_ParamLimits

0xef22,	// (0x0000ef22) list_double_graphic_heading_pane_g

0xbb6c,	// (0x0000bb6c) list_double_graphic_heading_pane_t1_ParamLimits

0xbb6c,	// (0x0000bb6c) list_double_graphic_heading_pane_t1

0xbb82,	// (0x0000bb82) list_double_graphic_heading_pane_t2_ParamLimits

0xbb82,	// (0x0000bb82) list_double_graphic_heading_pane_t2

0x0001,

0xef29,	// (0x0000ef29) list_double_graphic_heading_pane_t_ParamLimits

0xef29,	// (0x0000ef29) list_double_graphic_heading_pane_t

0xba93,	// (0x0000ba93) list_double_time_pane_g1_ParamLimits

0xba93,	// (0x0000ba93) list_double_time_pane_g1

0xb948,	// (0x0000b948) list_double_time_pane_g2_ParamLimits

0xb948,	// (0x0000b948) list_double_time_pane_g2

0x0001,

0xef2e,	// (0x0000ef2e) list_double_time_pane_g_ParamLimits

0xef2e,	// (0x0000ef2e) list_double_time_pane_g

0xbb94,	// (0x0000bb94) list_double_time_pane_t1_ParamLimits

0xbb94,	// (0x0000bb94) list_double_time_pane_t1

0xbbaa,	// (0x0000bbaa) list_double_time_pane_t2_ParamLimits

0xbbaa,	// (0x0000bbaa) list_double_time_pane_t2

0xbbbc,	// (0x0000bbbc) list_double_time_pane_t3_ParamLimits

0xbbbc,	// (0x0000bbbc) list_double_time_pane_t3

0xbbce,	// (0x0000bbce) list_double_time_pane_t4_ParamLimits

0xbbce,	// (0x0000bbce) list_double_time_pane_t4

0x0003,

0xef33,	// (0x0000ef33) list_double_time_pane_t_ParamLimits

0xef33,	// (0x0000ef33) list_double_time_pane_t

0xba34,	// (0x0000ba34) list_setting_pane_g1_ParamLimits

0xba34,	// (0x0000ba34) list_setting_pane_g1

0xba40,	// (0x0000ba40) list_setting_pane_g2_ParamLimits

0xba40,	// (0x0000ba40) list_setting_pane_g2

0x0001,

0xef3c,	// (0x0000ef3c) list_setting_pane_g_ParamLimits

0xef3c,	// (0x0000ef3c) list_setting_pane_g

0xbbe0,	// (0x0000bbe0) list_setting_pane_t1_ParamLimits

0xbbe0,	// (0x0000bbe0) list_setting_pane_t1

0xbbf7,	// (0x0000bbf7) list_setting_pane_t2_ParamLimits

0xbbf7,	// (0x0000bbf7) list_setting_pane_t2

0x0002,

0xef41,	// (0x0000ef41) list_setting_pane_t_ParamLimits

0xef41,	// (0x0000ef41) list_setting_pane_t

0xbc34,	// (0x0000bc34) set_value_pane_cp_ParamLimits

0xbc34,	// (0x0000bc34) set_value_pane_cp

0xba34,	// (0x0000ba34) list_setting_number_pane_g1_ParamLimits

0xba34,	// (0x0000ba34) list_setting_number_pane_g1

0xba40,	// (0x0000ba40) list_setting_number_pane_g2_ParamLimits

0xba40,	// (0x0000ba40) list_setting_number_pane_g2

0x0001,

0xef3c,	// (0x0000ef3c) list_setting_number_pane_g_ParamLimits

0xef3c,	// (0x0000ef3c) list_setting_number_pane_g

0xbc40,	// (0x0000bc40) list_setting_number_pane_t1_ParamLimits

0xbc40,	// (0x0000bc40) list_setting_number_pane_t1

0xbc54,	// (0x0000bc54) list_setting_number_pane_t2_ParamLimits

0xbc54,	// (0x0000bc54) list_setting_number_pane_t2

0xbc6b,	// (0x0000bc6b) list_setting_number_pane_t3_ParamLimits

0xbc6b,	// (0x0000bc6b) list_setting_number_pane_t3

0x0003,

0xef48,	// (0x0000ef48) list_setting_number_pane_t_ParamLimits

0xef48,	// (0x0000ef48) list_setting_number_pane_t

0xbc34,	// (0x0000bc34) set_value_pane_ParamLimits

0xbc34,	// (0x0000bc34) set_value_pane

0x1219,	// (0x00001219) bg_set_opt_pane_ParamLimits

0x1219,	// (0x00001219) bg_set_opt_pane

0x123a,	// (0x0000123a) set_value_pane_t1

0x1248,	// (0x00001248) slider_set_pane_cp3

0x1251,	// (0x00001251) volume_small_pane_cp

0x125a,	// (0x0000125a) list_form_gen_pane

0x1263,	// (0x00001263) scroll_pane_cp8

0xbcae,	// (0x0000bcae) form_field_data_pane_ParamLimits

0xbcae,	// (0x0000bcae) form_field_data_pane

0xbcc5,	// (0x0000bcc5) form_field_data_wide_pane_ParamLimits

0xbcc5,	// (0x0000bcc5) form_field_data_wide_pane

0xbce5,	// (0x0000bce5) form_field_popup_pane_ParamLimits

0xbce5,	// (0x0000bce5) form_field_popup_pane

0xbcfd,	// (0x0000bcfd) form_field_popup_wide_pane_ParamLimits

0xbcfd,	// (0x0000bcfd) form_field_popup_wide_pane

0x12f0,	// (0x000012f0) form_field_slider_pane_ParamLimits

0x12f0,	// (0x000012f0) form_field_slider_pane

0x1303,	// (0x00001303) form_field_slider_wide_pane_ParamLimits

0x1303,	// (0x00001303) form_field_slider_wide_pane

0x1316,	// (0x00001316) data_form_pane

0xbd24,	// (0x0000bd24) form_field_data_pane_t1

0x1346,	// (0x00001346) input_focus_pane

0x1354,	// (0x00001354) data_form_wide_pane

0x1380,	// (0x00001380) form_field_data_wide_pane_t1

0x0b6c,	// (0x00000b6c) input_focus_pane_cp6

0xbd3e,	// (0x0000bd3e) form_field_popup_pane_t1

0x1346,	// (0x00001346) input_focus_pane_cp7

0x13b9,	// (0x000013b9) list_form_pane

0x13cd,	// (0x000013cd) form_field_popup_wide_pane_t1

0x1346,	// (0x00001346) input_focus_pane_cp8

0x13e2,	// (0x000013e2) list_form_wide_pane

0xbd60,	// (0x0000bd60) form_field_slider_pane_t1_ParamLimits

0xbd60,	// (0x0000bd60) form_field_slider_pane_t1

0xbd78,	// (0x0000bd78) form_field_slider_pane_t2_ParamLimits

0xbd78,	// (0x0000bd78) form_field_slider_pane_t2

0x0001,

0xef51,	// (0x0000ef51) form_field_slider_pane_t_ParamLimits

0xef51,	// (0x0000ef51) form_field_slider_pane_t

0x081f,	// (0x0000081f) input_focus_pane_cp9_ParamLimits

0x081f,	// (0x0000081f) input_focus_pane_cp9

0xbd8d,	// (0x0000bd8d) slider_cont_pane_ParamLimits

0xbd8d,	// (0x0000bd8d) slider_cont_pane

0x1433,	// (0x00001433) form_field_slider_wide_pane_t1_ParamLimits

0x1433,	// (0x00001433) form_field_slider_wide_pane_t1

0x1445,	// (0x00001445) form_field_slider_wide_pane_t2_ParamLimits

0x1445,	// (0x00001445) form_field_slider_wide_pane_t2

0x0001,

0xab44,	// (0x0000ab44) form_field_slider_wide_pane_t_ParamLimits

0xab44,	// (0x0000ab44) form_field_slider_wide_pane_t

0x081f,	// (0x0000081f) input_focus_pane_cp10_ParamLimits

0x081f,	// (0x0000081f) input_focus_pane_cp10

0xbda1,	// (0x0000bda1) slider_cont_pane_cp1_ParamLimits

0xbda1,	// (0x0000bda1) slider_cont_pane_cp1

0xbdb5,	// (0x0000bdb5) slider_form_pane_cp

0x1473,	// (0x00001473) input_focus_pane_g1

0x147b,	// (0x0000147b) input_focus_pane_g2

0x1483,	// (0x00001483) input_focus_pane_g3

0x148b,	// (0x0000148b) input_focus_pane_g4

0x1493,	// (0x00001493) input_focus_pane_g5

0x149b,	// (0x0000149b) input_focus_pane_g6

0x14a3,	// (0x000014a3) input_focus_pane_g7

0x14ab,	// (0x000014ab) input_focus_pane_g8

0x14b3,	// (0x000014b3) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xab49,	// (0x0000ab49) input_focus_pane_g

0x3dfa,	// (0x00003dfa) wait_border_pane_g3_copy1

0xbdbd,	// (0x0000bdbd) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd25d,	// (0x0000d25d) data_form_wide_pane_t1

0xbdd7,	// (0x0000bdd7) list_form_graphic_pane_cp_ParamLimits

0xbdd7,	// (0x0000bdd7) list_form_graphic_pane_cp

0x4f4c,	// (0x00004f4c) slider_form_pane_g1

0x4f55,	// (0x00004f55) slider_form_pane_g2

0x0006,

0xefeb,	// (0x0000efeb) slider_form_pane_g

0xbdea,	// (0x0000bdea) list_form_graphic_pane_ParamLimits

0xbdea,	// (0x0000bdea) list_form_graphic_pane

0x14ed,	// (0x000014ed) list_form_graphic_pane_g1

0x14f5,	// (0x000014f5) list_form_graphic_pane_t1_ParamLimits

0x14f5,	// (0x000014f5) list_form_graphic_pane_t1

0x04f9,	// (0x000004f9) list_highlight_pane_cp5_ParamLimits

0x04f9,	// (0x000004f9) list_highlight_pane_cp5

0x150a,	// (0x0000150a) find_pane_g1

0x1513,	// (0x00001513) input_find_pane

0x151c,	// (0x0000151c) input_find_pane_g1_ParamLimits

0x151c,	// (0x0000151c) input_find_pane_g1

0x1528,	// (0x00001528) input_find_pane_t1_ParamLimits

0x1528,	// (0x00001528) input_find_pane_t1

0x153d,	// (0x0000153d) input_find_pane_t2_ParamLimits

0x153d,	// (0x0000153d) input_find_pane_t2

0x0001,

0xab5e,	// (0x0000ab5e) input_find_pane_t_ParamLimits

0xab5e,	// (0x0000ab5e) input_find_pane_t

0x1552,	// (0x00001552) input_focus_pane_cp5_ParamLimits

0x1552,	// (0x00001552) input_focus_pane_cp5

0x156c,	// (0x0000156c) bg_popup_window_pane_cp2_ParamLimits

0x156c,	// (0x0000156c) bg_popup_window_pane_cp2

0x1579,	// (0x00001579) listscroll_menu_pane_ParamLimits

0x1579,	// (0x00001579) listscroll_menu_pane

0xbe08,	// (0x0000be08) popup_submenu_window_ParamLimits

0xbe08,	// (0x0000be08) popup_submenu_window

0x15ad,	// (0x000015ad) find_popup_pane_g1

0x15b5,	// (0x000015b5) input_popup_find_pane_cp

0x1552,	// (0x00001552) input_focus_pane_cp4_ParamLimits

0x1552,	// (0x00001552) input_focus_pane_cp4

0x15cd,	// (0x000015cd) input_popup_find_pane_t1_ParamLimits

0x15cd,	// (0x000015cd) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x15fb,	// (0x000015fb) listscroll_popup_sub_pane

0x1603,	// (0x00001603) list_submenu_pane_ParamLimits

0x1603,	// (0x00001603) list_submenu_pane

0x1614,	// (0x00001614) scroll_pane_cp4

0x161c,	// (0x0000161c) list_single_popup_submenu_pane_ParamLimits

0x161c,	// (0x0000161c) list_single_popup_submenu_pane

0x1630,	// (0x00001630) list_single_popup_submenu_pane_g1

0x1638,	// (0x00001638) list_single_popup_submenu_pane_t1_ParamLimits

0x1638,	// (0x00001638) list_single_popup_submenu_pane_t1

0x081f,	// (0x0000081f) bg_active_tab_pane_cp1_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp1

0xbe3e,	// (0x0000be3e) tabs_2_active_pane_g1

0xbe46,	// (0x0000be46) tabs_2_active_pane_t1

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp1_ParamLimits

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp1

0xbe3e,	// (0x0000be3e) tabs_2_passive_pane_g1

0xbe46,	// (0x0000be46) tabs_2_passive_pane_t1

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp4

0xbe58,	// (0x0000be58) tabs_2_long_active_pane_t1

0x2ac6,	// (0x00002ac6) bg_passive_tab_pane_cp4

0x3658,	// (0x00003658) list_single_midp_graphic_pane_g4_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp5

0xbe6b,	// (0x0000be6b) tabs_3_long_active_pane_t1

0x2ac6,	// (0x00002ac6) bg_passive_tab_pane_cp5

0x3658,	// (0x00003658) list_single_midp_graphic_pane_g4

0x04f9,	// (0x000004f9) bg_popup_window_pane_cp13_ParamLimits

0x04f9,	// (0x000004f9) bg_popup_window_pane_cp13

0x16af,	// (0x000016af) listscroll_popup_fast_pane_ParamLimits

0x16af,	// (0x000016af) listscroll_popup_fast_pane

0x16bb,	// (0x000016bb) grid_popup_fast_pane_ParamLimits

0x16bb,	// (0x000016bb) grid_popup_fast_pane

0x16cd,	// (0x000016cd) scroll_pane_cp9_ParamLimits

0x16cd,	// (0x000016cd) scroll_pane_cp9

0x7234,	// (0x00007234) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7234,	// (0x00007234) list_single_graphic_hl_pane_t1_cp2

0x16f1,	// (0x000016f1) input_focus_pane_cp20_ParamLimits

0x16f1,	// (0x000016f1) input_focus_pane_cp20

0x16ff,	// (0x000016ff) query_popup_data_pane_t1_ParamLimits

0x16ff,	// (0x000016ff) query_popup_data_pane_t1

0x1712,	// (0x00001712) query_popup_data_pane_t2_ParamLimits

0x1712,	// (0x00001712) query_popup_data_pane_t2

0x1758,	// (0x00001758) query_popup_data_pane_t3_ParamLimits

0x1758,	// (0x00001758) query_popup_data_pane_t3

0x1799,	// (0x00001799) query_popup_data_pane_t4_ParamLimits

0x1799,	// (0x00001799) query_popup_data_pane_t4

0x17d5,	// (0x000017d5) query_popup_data_pane_t5_ParamLimits

0x17d5,	// (0x000017d5) query_popup_data_pane_t5

0x0004,

0xab63,	// (0x0000ab63) query_popup_data_pane_t_ParamLimits

0xab63,	// (0x0000ab63) query_popup_data_pane_t

0x1473,	// (0x00001473) bg_set_opt_pane_g1

0x147b,	// (0x0000147b) bg_set_opt_pane_g2

0x1483,	// (0x00001483) bg_set_opt_pane_g3

0x148b,	// (0x0000148b) bg_set_opt_pane_g4

0x1493,	// (0x00001493) bg_set_opt_pane_g5

0x149b,	// (0x0000149b) bg_set_opt_pane_g6

0x14a3,	// (0x000014a3) bg_set_opt_pane_g7

0x14ab,	// (0x000014ab) bg_set_opt_pane_g8

0x14b3,	// (0x000014b3) bg_set_opt_pane_g9

0x0008,

0xab6e,	// (0x0000ab6e) bg_set_opt_pane_g

0x20b8,	// (0x000020b8) control_top_pane_stacon_ParamLimits

0x20b8,	// (0x000020b8) control_top_pane_stacon

0x210b,	// (0x0000210b) signal_pane_stacon_ParamLimits

0x210b,	// (0x0000210b) signal_pane_stacon

0x2130,	// (0x00002130) stacon_top_pane_g1_ParamLimits

0x2130,	// (0x00002130) stacon_top_pane_g1

0x2152,	// (0x00002152) title_pane_stacon_ParamLimits

0x2152,	// (0x00002152) title_pane_stacon

0x217c,	// (0x0000217c) uni_indicator_pane_stacon_ParamLimits

0x217c,	// (0x0000217c) uni_indicator_pane_stacon

0x2191,	// (0x00002191) battery_pane_stacon_ParamLimits

0x2191,	// (0x00002191) battery_pane_stacon

0x21d5,	// (0x000021d5) control_bottom_pane_stacon_ParamLimits

0x21d5,	// (0x000021d5) control_bottom_pane_stacon

0x21f8,	// (0x000021f8) navi_pane_stacon_ParamLimits

0x21f8,	// (0x000021f8) navi_pane_stacon

0x221b,	// (0x0000221b) stacon_bottom_pane_g1_ParamLimits

0x221b,	// (0x0000221b) stacon_bottom_pane_g1

0x180c,	// (0x0000180c) aid_levels_signal_lsc_ParamLimits

0x180c,	// (0x0000180c) aid_levels_signal_lsc

0x1823,	// (0x00001823) signal_pane_stacon_g1_ParamLimits

0x1823,	// (0x00001823) signal_pane_stacon_g1

0x1837,	// (0x00001837) signal_pane_stacon_g2_ParamLimits

0x1837,	// (0x00001837) signal_pane_stacon_g2

0x0001,

0xab81,	// (0x0000ab81) signal_pane_stacon_g_ParamLimits

0xab81,	// (0x0000ab81) signal_pane_stacon_g

0x1879,	// (0x00001879) title_pane_stacon_t1_ParamLimits

0x1879,	// (0x00001879) title_pane_stacon_t1

0x189e,	// (0x0000189e) uni_indicator_pane_stacon_g1

0x18a8,	// (0x000018a8) uni_indicator_pane_stacon_g2

0x18b2,	// (0x000018b2) uni_indicator_pane_stacon_g3

0x18bc,	// (0x000018bc) uni_indicator_pane_stacon_g4

0x0003,

0xab8d,	// (0x0000ab8d) uni_indicator_pane_stacon_g

0x18c6,	// (0x000018c6) control_top_pane_stacon_g1

0x18ce,	// (0x000018ce) control_top_pane_stacon_t1_ParamLimits

0x18ce,	// (0x000018ce) control_top_pane_stacon_t1

0x1905,	// (0x00001905) aid_levels_battery_lsc_ParamLimits

0x1905,	// (0x00001905) aid_levels_battery_lsc

0x191d,	// (0x0000191d) battery_pane_stacon_g1_ParamLimits

0x191d,	// (0x0000191d) battery_pane_stacon_g1

0x1930,	// (0x00001930) battery_pane_stacon_g2_ParamLimits

0x1930,	// (0x00001930) battery_pane_stacon_g2

0x0001,

0xab96,	// (0x0000ab96) battery_pane_stacon_g_ParamLimits

0xab96,	// (0x0000ab96) battery_pane_stacon_g

0x196e,	// (0x0000196e) navi_icon_pane_stacon

0x1982,	// (0x00001982) navi_navi_pane_stacon

0x196e,	// (0x0000196e) navi_text_pane_stacon

0x18c6,	// (0x000018c6) control_bottom_pane_stacon_g1

0x1996,	// (0x00001996) control_bottom_pane_stacon_t1_ParamLimits

0x1996,	// (0x00001996) control_bottom_pane_stacon_t1

0xbe7d,	// (0x0000be7d) grid_app_pane_ParamLimits

0xbe7d,	// (0x0000be7d) grid_app_pane

0xbeb3,	// (0x0000beb3) scroll_pane_cp15_ParamLimits

0xbeb3,	// (0x0000beb3) scroll_pane_cp15

0xbec8,	// (0x0000bec8) cell_app_pane_ParamLimits

0xbec8,	// (0x0000bec8) cell_app_pane

0xbf0f,	// (0x0000bf0f) cell_app_pane_g1_ParamLimits

0xbf0f,	// (0x0000bf0f) cell_app_pane_g1

0x1a62,	// (0x00001a62) cell_app_pane_g2_ParamLimits

0x1a62,	// (0x00001a62) cell_app_pane_g2

0x0001,

0xef56,	// (0x0000ef56) cell_app_pane_g_ParamLimits

0xef56,	// (0x0000ef56) cell_app_pane_g

0xbf2f,	// (0x0000bf2f) cell_app_pane_t1_ParamLimits

0xbf2f,	// (0x0000bf2f) cell_app_pane_t1

0x1a85,	// (0x00001a85) grid_highlight_pane_ParamLimits

0x1a85,	// (0x00001a85) grid_highlight_pane

0x1473,	// (0x00001473) cell_highlight_pane_g1

0x147b,	// (0x0000147b) cell_highlight_pane_g2

0x1483,	// (0x00001483) cell_highlight_pane_g3

0x148b,	// (0x0000148b) cell_highlight_pane_g4

0x1493,	// (0x00001493) cell_highlight_pane_g5

0x149b,	// (0x0000149b) cell_highlight_pane_g6

0x14a3,	// (0x000014a3) cell_highlight_pane_g7

0x14ab,	// (0x000014ab) cell_highlight_pane_g8

0x14b3,	// (0x000014b3) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xab49,	// (0x0000ab49) cell_highlight_pane_g

0x1aa9,	// (0x00001aa9) bg_scroll_pane

0x1ac8,	// (0x00001ac8) scroll_handle_pane

0x1b19,	// (0x00001b19) scroll_bg_pane_g1

0x1b2e,	// (0x00001b2e) scroll_bg_pane_g2

0x1b46,	// (0x00001b46) scroll_bg_pane_g3

0x0002,

0xaba0,	// (0x0000aba0) scroll_bg_pane_g

0x1b5b,	// (0x00001b5b) scroll_handle_focus_pane_ParamLimits

0x1b5b,	// (0x00001b5b) scroll_handle_focus_pane

0x1b19,	// (0x00001b19) scroll_handle_pane_g1

0x1b68,	// (0x00001b68) scroll_handle_pane_g2

0x1b46,	// (0x00001b46) scroll_handle_pane_g3

0x0002,

0xaba7,	// (0x0000aba7) scroll_handle_pane_g

0x1552,	// (0x00001552) bg_popup_sub_pane_cp21_ParamLimits

0x1552,	// (0x00001552) bg_popup_sub_pane_cp21

0x1b7c,	// (0x00001b7c) popup_fep_japan_predictive_window_t1_ParamLimits

0x1b7c,	// (0x00001b7c) popup_fep_japan_predictive_window_t1

0x1b96,	// (0x00001b96) popup_fep_japan_predictive_window_t2_ParamLimits

0x1b96,	// (0x00001b96) popup_fep_japan_predictive_window_t2

0x1bc9,	// (0x00001bc9) popup_fep_japan_predictive_window_t3_ParamLimits

0x1bc9,	// (0x00001bc9) popup_fep_japan_predictive_window_t3

0x0002,

0xabae,	// (0x0000abae) popup_fep_japan_predictive_window_t_ParamLimits

0xabae,	// (0x0000abae) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c00,	// (0x00001c00) listscroll_japin_cand_pane

0x1c08,	// (0x00001c08) popup_fep_japan_candidate_window_t1

0x1c16,	// (0x00001c16) candidate_pane_ParamLimits

0x1c16,	// (0x00001c16) candidate_pane

0x1c28,	// (0x00001c28) scroll_pane_cp30

0x1c30,	// (0x00001c30) list_single_popup_jap_candidate_pane_ParamLimits

0x1c30,	// (0x00001c30) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1c44,	// (0x00001c44) list_single_popup_jap_candidate_pane_t1

0x1c53,	// (0x00001c53) level_1_signal

0x1c60,	// (0x00001c60) level_2_signal

0x1c6d,	// (0x00001c6d) level_3_signal

0x1c7a,	// (0x00001c7a) level_4_signal

0x1c87,	// (0x00001c87) level_5_signal

0x1c94,	// (0x00001c94) level_6_signal

0x1ca1,	// (0x00001ca1) level_7_signal

0x1c53,	// (0x00001c53) level_1_battery

0x1c60,	// (0x00001c60) level_2_battery

0x1c6d,	// (0x00001c6d) level_3_battery

0x1c7a,	// (0x00001c7a) level_4_battery

0x1c87,	// (0x00001c87) level_5_battery

0x1c94,	// (0x00001c94) level_6_battery

0x1ca1,	// (0x00001ca1) level_7_battery

0x1ce5,	// (0x00001ce5) list_menu_pane_ParamLimits

0x1ce5,	// (0x00001ce5) list_menu_pane

0x1cfb,	// (0x00001cfb) scroll_pane_cp25_ParamLimits

0x1cfb,	// (0x00001cfb) scroll_pane_cp25

0x1d14,	// (0x00001d14) list_double2_graphic_pane_cp2_ParamLimits

0x1d14,	// (0x00001d14) list_double2_graphic_pane_cp2

0x1d14,	// (0x00001d14) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d14,	// (0x00001d14) list_double2_large_graphic_pane_cp2

0x1d14,	// (0x00001d14) list_double2_pane_cp2_ParamLimits

0x1d14,	// (0x00001d14) list_double2_pane_cp2

0x1d14,	// (0x00001d14) list_double_graphic_pane_cp2_ParamLimits

0x1d14,	// (0x00001d14) list_double_graphic_pane_cp2

0x1d14,	// (0x00001d14) list_double_large_graphic_pane_cp2_ParamLimits

0x1d14,	// (0x00001d14) list_double_large_graphic_pane_cp2

0x1d14,	// (0x00001d14) list_double_number_pane_cp2_ParamLimits

0x1d14,	// (0x00001d14) list_double_number_pane_cp2

0x1d14,	// (0x00001d14) list_double_pane_cp2_ParamLimits

0x1d14,	// (0x00001d14) list_double_pane_cp2

0xbf57,	// (0x0000bf57) list_single_2graphic_pane_cp2_ParamLimits

0xbf57,	// (0x0000bf57) list_single_2graphic_pane_cp2

0xbf57,	// (0x0000bf57) list_single_graphic_heading_pane_cp2_ParamLimits

0xbf57,	// (0x0000bf57) list_single_graphic_heading_pane_cp2

0xbf57,	// (0x0000bf57) list_single_graphic_pane_cp2_ParamLimits

0xbf57,	// (0x0000bf57) list_single_graphic_pane_cp2

0xbf57,	// (0x0000bf57) list_single_heading_pane_cp2_ParamLimits

0xbf57,	// (0x0000bf57) list_single_heading_pane_cp2

0x1d4e,	// (0x00001d4e) list_single_large_graphic_pane_cp2_ParamLimits

0x1d4e,	// (0x00001d4e) list_single_large_graphic_pane_cp2

0xbf57,	// (0x0000bf57) list_single_number_heading_pane_cp2_ParamLimits

0xbf57,	// (0x0000bf57) list_single_number_heading_pane_cp2

0xbf57,	// (0x0000bf57) list_single_number_pane_cp2_ParamLimits

0xbf57,	// (0x0000bf57) list_single_number_pane_cp2

0xbf57,	// (0x0000bf57) list_single_pane_cp2_ParamLimits

0xbf57,	// (0x0000bf57) list_single_pane_cp2

0x1e24,	// (0x00001e24) bg_popup_sub_pane_cp22

0x1e46,	// (0x00001e46) popup_side_volume_key_window_g1

0x1e6a,	// (0x00001e6a) popup_side_volume_key_window_t1

0x1e86,	// (0x00001e86) volume_small_pane_cp1

0x081f,	// (0x0000081f) bg_popup_sub_pane_cp24_ParamLimits

0x081f,	// (0x0000081f) bg_popup_sub_pane_cp24

0x1e8e,	// (0x00001e8e) fep_china_uni_candidate_pane_ParamLimits

0x1e8e,	// (0x00001e8e) fep_china_uni_candidate_pane

0x1ea2,	// (0x00001ea2) fep_china_uni_entry_pane

0x1eb2,	// (0x00001eb2) popup_fep_china_uni_window_g1

0x1ece,	// (0x00001ece) fep_china_uni_entry_pane_g1

0x1ed6,	// (0x00001ed6) fep_china_uni_entry_pane_g2

0x0001,

0xabdf,	// (0x0000abdf) fep_china_uni_entry_pane_g

0x1ede,	// (0x00001ede) fep_entry_item_pane

0x1ee8,	// (0x00001ee8) fep_candidate_item_pane

0x1ef0,	// (0x00001ef0) fep_china_uni_candidate_pane_g1

0x1ef8,	// (0x00001ef8) fep_china_uni_candidate_pane_g2

0x1f00,	// (0x00001f00) fep_china_uni_candidate_pane_g3

0x1f08,	// (0x00001f08) fep_china_uni_candidate_pane_g4

0x0003,

0xabe4,	// (0x0000abe4) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f10,	// (0x00001f10) fep_entry_item_pane_t1_ParamLimits

0x1f10,	// (0x00001f10) fep_entry_item_pane_t1

0x1f26,	// (0x00001f26) fep_candidate_item_pane_t1_ParamLimits

0x1f26,	// (0x00001f26) fep_candidate_item_pane_t1

0x1f3b,	// (0x00001f3b) fep_candidate_item_pane_t2_ParamLimits

0x1f3b,	// (0x00001f3b) fep_candidate_item_pane_t2

0x0001,

0xabed,	// (0x0000abed) fep_candidate_item_pane_t_ParamLimits

0xabed,	// (0x0000abed) fep_candidate_item_pane_t

0x04f9,	// (0x000004f9) list_highlight_pane_cp31_ParamLimits

0x04f9,	// (0x000004f9) list_highlight_pane_cp31

0x1f4d,	// (0x00001f4d) level_1_signal_lsc

0x1f56,	// (0x00001f56) level_2_signal_lsc

0x1f5f,	// (0x00001f5f) level_3_signal_lsc

0x1f68,	// (0x00001f68) level_4_signal_lsc

0x1f71,	// (0x00001f71) level_5_signal_lsc

0x1f7a,	// (0x00001f7a) level_6_signal_lsc

0x1f83,	// (0x00001f83) level_7_signal_lsc

0x1f83,	// (0x00001f83) level_1_battery_lsc

0x1f8c,	// (0x00001f8c) level_2_battery_lsc

0x1f95,	// (0x00001f95) level_3_battery_lsc

0x1f9e,	// (0x00001f9e) level_4_battery_lsc

0x1fa7,	// (0x00001fa7) level_5_battery_lsc

0x1fb0,	// (0x00001fb0) level_6_battery_lsc

0x1f4d,	// (0x00001f4d) level_7_battery_lsc

0x1fb9,	// (0x00001fb9) scroll_handle_focus_pane_g1

0x1fc2,	// (0x00001fc2) scroll_handle_focus_pane_g2

0x1fcb,	// (0x00001fcb) scroll_handle_focus_pane_g3

0x0002,

0xabf2,	// (0x0000abf2) scroll_handle_focus_pane_g

0x1fd4,	// (0x00001fd4) list_single_2graphic_pane_g1_ParamLimits

0x1fd4,	// (0x00001fd4) list_single_2graphic_pane_g1

0xb92f,	// (0x0000b92f) list_single_2graphic_pane_g2_ParamLimits

0xb92f,	// (0x0000b92f) list_single_2graphic_pane_g2

0x0dba,	// (0x00000dba) list_single_2graphic_pane_g3_ParamLimits

0x0dba,	// (0x00000dba) list_single_2graphic_pane_g3

0x1fe0,	// (0x00001fe0) list_single_2graphic_pane_g4_ParamLimits

0x1fe0,	// (0x00001fe0) list_single_2graphic_pane_g4

0x0003,

0xef64,	// (0x0000ef64) list_single_2graphic_pane_g_ParamLimits

0xef64,	// (0x0000ef64) list_single_2graphic_pane_g

0x1ff1,	// (0x00001ff1) list_single_2graphic_pane_t1_ParamLimits

0x1ff1,	// (0x00001ff1) list_single_2graphic_pane_t1

0xbfe4,	// (0x0000bfe4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbfe4,	// (0x0000bfe4) list_double2_graphic_large_graphic_pane_g1

0xbaee,	// (0x0000baee) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbaee,	// (0x0000baee) list_double2_graphic_large_graphic_pane_g2

0xba40,	// (0x0000ba40) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba40,	// (0x0000ba40) list_double2_graphic_large_graphic_pane_g3

0xbff6,	// (0x0000bff6) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbff6,	// (0x0000bff6) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xef6d,	// (0x0000ef6d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xef6d,	// (0x0000ef6d) list_double2_graphic_large_graphic_pane_g

0xc002,	// (0x0000c002) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc002,	// (0x0000c002) list_double2_graphic_large_graphic_pane_t1

0xc018,	// (0x0000c018) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc018,	// (0x0000c018) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xef76,	// (0x0000ef76) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xef76,	// (0x0000ef76) list_double2_graphic_large_graphic_pane_t

0x22e4,	// (0x000022e4) popup_fast_swap_window_ParamLimits

0x22e4,	// (0x000022e4) popup_fast_swap_window

0x2300,	// (0x00002300) popup_side_volume_key_window

0x231a,	// (0x0000231a) stacon_top_pane

0x2324,	// (0x00002324) status_pane_ParamLimits

0x2324,	// (0x00002324) status_pane

0x231a,	// (0x0000231a) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x1263,	// (0x00001263) scroll_pane_cp121

0x125a,	// (0x0000125a) set_content_pane

0xc02a,	// (0x0000c02a) bg_active_tab_pane_g1_cp1

0x206c,	// (0x0000206c) bg_active_tab_pane_g2_cp1

0xc033,	// (0x0000c033) bg_active_tab_pane_g3_cp1

0xc02a,	// (0x0000c02a) bg_passive_tab_pane_g1_cp1

0x206c,	// (0x0000206c) bg_passive_tab_pane_g2_cp1

0xc033,	// (0x0000c033) bg_passive_tab_pane_g3_cp1

0xc03c,	// (0x0000c03c) bg_active_tab_pane_g1_cp2

0x206c,	// (0x0000206c) bg_active_tab_pane_g2_cp2

0xc045,	// (0x0000c045) bg_active_tab_pane_g3_cp2

0xc03c,	// (0x0000c03c) bg_passive_tab_pane_g1_cp2

0x206c,	// (0x0000206c) bg_passive_tab_pane_g2_cp2

0xc045,	// (0x0000c045) bg_passive_tab_pane_g3_cp2

0x2090,	// (0x00002090) bg_active_tab_pane_g1_cp3

0x206c,	// (0x0000206c) bg_active_tab_pane_g2_cp3

0x2099,	// (0x00002099) bg_active_tab_pane_g3_cp3

0x2090,	// (0x00002090) bg_passive_tab_pane_g1_cp3

0x206c,	// (0x0000206c) bg_passive_tab_pane_g2_cp3

0x2099,	// (0x00002099) bg_passive_tab_pane_g3_cp3

0xc04e,	// (0x0000c04e) bg_active_tab_pane_g1_cp4

0x206c,	// (0x0000206c) bg_active_tab_pane_g2_cp4

0xc059,	// (0x0000c059) bg_active_tab_pane_g3_cp4

0xc04e,	// (0x0000c04e) bg_passive_tab_pane_g1_cp4

0x206c,	// (0x0000206c) bg_passive_tab_pane_g2_cp4

0xc059,	// (0x0000c059) bg_passive_tab_pane_g3_cp4

0x2237,	// (0x00002237) bg_active_tab_pane_g1_cp5

0x206c,	// (0x0000206c) bg_active_tab_pane_g2_cp5

0x2240,	// (0x00002240) bg_active_tab_pane_g3_cp5

0x2237,	// (0x00002237) bg_passive_tab_pane_g1_cp5

0x206c,	// (0x0000206c) bg_passive_tab_pane_g2_cp5

0x2240,	// (0x00002240) bg_passive_tab_pane_g3_cp5

0x5723,	// (0x00005723) list_set_graphic_pane_ParamLimits

0x5723,	// (0x00005723) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0x2269,	// (0x00002269) list_set_graphic_pane_g1_ParamLimits

0x2269,	// (0x00002269) list_set_graphic_pane_g1

0x2275,	// (0x00002275) list_set_graphic_pane_g2_ParamLimits

0x2275,	// (0x00002275) list_set_graphic_pane_g2

0x0001,

0xac10,	// (0x0000ac10) list_set_graphic_pane_g_ParamLimits

0xac10,	// (0x0000ac10) list_set_graphic_pane_g

0x0009,

0xaf98,	// (0x0000af98) volume_small_pane_cp_g

0x2297,	// (0x00002297) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2297,	// (0x00002297) list_double2_large_graphic_pane_g1_cp2

0x22a3,	// (0x000022a3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22a3,	// (0x000022a3) list_double2_large_graphic_pane_g2_cp2

0x22b4,	// (0x000022b4) list_double2_large_graphic_pane_g3_cp2

0x22bc,	// (0x000022bc) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22bc,	// (0x000022bc) list_double2_large_graphic_pane_t1_cp2

0x22d2,	// (0x000022d2) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x22d2,	// (0x000022d2) list_double2_large_graphic_pane_t2_cp2

0x4a31,	// (0x00004a31) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a31,	// (0x00004a31) list_double_large_graphic_pane_g1_cp2

0x4a42,	// (0x00004a42) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a42,	// (0x00004a42) list_double_large_graphic_pane_g2_cp2

0x2440,	// (0x00002440) list_double_large_graphic_pane_g3_cp2

0x4a53,	// (0x00004a53) list_double_large_graphic_pane_g4_cp

0x4a5b,	// (0x00004a5b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a5b,	// (0x00004a5b) list_double_large_graphic_pane_t1_cp2

0x4a72,	// (0x00004a72) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a72,	// (0x00004a72) list_double_large_graphic_pane_t2_cp2

0x2332,	// (0x00002332) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2332,	// (0x00002332) list_double2_graphic_pane_g1_cp2

0x2340,	// (0x00002340) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2340,	// (0x00002340) list_double2_graphic_pane_g2_cp2

0x2351,	// (0x00002351) list_double2_graphic_pane_g3_cp2

0x235b,	// (0x0000235b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x235b,	// (0x0000235b) list_double2_graphic_pane_t1_cp2

0x2371,	// (0x00002371) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2371,	// (0x00002371) list_double2_graphic_pane_t2_cp2

0x2383,	// (0x00002383) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2383,	// (0x00002383) list_single_number_heading_pane_g1_cp2

0x238f,	// (0x0000238f) list_single_number_heading_pane_g2_cp2

0x2397,	// (0x00002397) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2397,	// (0x00002397) list_single_number_heading_pane_t1_cp2

0x23ad,	// (0x000023ad) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23ad,	// (0x000023ad) list_single_number_heading_pane_t2_cp2

0x23bf,	// (0x000023bf) list_single_number_heading_pane_t3_cp2_ParamLimits

0x23bf,	// (0x000023bf) list_single_number_heading_pane_t3_cp2

0x2383,	// (0x00002383) list_single_heading_pane_g1_cp2_ParamLimits

0x2383,	// (0x00002383) list_single_heading_pane_g1_cp2

0x238f,	// (0x0000238f) list_single_heading_pane_g2_cp2

0x2397,	// (0x00002397) list_single_heading_pane_t1_cp2_ParamLimits

0x2397,	// (0x00002397) list_single_heading_pane_t1_cp2

0x483b,	// (0x0000483b) list_single_heading_pane_t2_cp2_ParamLimits

0x483b,	// (0x0000483b) list_single_heading_pane_t2_cp2

0x4783,	// (0x00004783) list_double_graphic_pane_g1_cp2_ParamLimits

0x4783,	// (0x00004783) list_double_graphic_pane_g1_cp2

0x478f,	// (0x0000478f) list_double_graphic_pane_g2_cp2_ParamLimits

0x478f,	// (0x0000478f) list_double_graphic_pane_g2_cp2

0x479e,	// (0x0000479e) list_double_graphic_pane_g3_cp2

0x47a6,	// (0x000047a6) list_double_graphic_pane_t1_cp2_ParamLimits

0x47a6,	// (0x000047a6) list_double_graphic_pane_t1_cp2

0x47bc,	// (0x000047bc) list_double_graphic_pane_t2_cp2_ParamLimits

0x47bc,	// (0x000047bc) list_double_graphic_pane_t2_cp2

0x2434,	// (0x00002434) list_double_number_pane_g1_cp2_ParamLimits

0x2434,	// (0x00002434) list_double_number_pane_g1_cp2

0x2440,	// (0x00002440) list_double_number_pane_g2_cp2

0x4747,	// (0x00004747) list_double_number_pane_t1_cp2_ParamLimits

0x4747,	// (0x00004747) list_double_number_pane_t1_cp2

0x475b,	// (0x0000475b) list_double_number_pane_t2_cp2_ParamLimits

0x475b,	// (0x0000475b) list_double_number_pane_t2_cp2

0x4771,	// (0x00004771) list_double_number_pane_t3_cp2_ParamLimits

0x4771,	// (0x00004771) list_double_number_pane_t3_cp2

0x461f,	// (0x0000461f) list_single_graphic_pane_g1_cp2_ParamLimits

0x461f,	// (0x0000461f) list_single_graphic_pane_g1_cp2

0x0dae,	// (0x00000dae) list_single_graphic_pane_g2_cp2_ParamLimits

0x0dae,	// (0x00000dae) list_single_graphic_pane_g2_cp2

0x2498,	// (0x00002498) list_single_graphic_pane_g3_cp2

0x45f5,	// (0x000045f5) list_single_graphic_pane_t1_cp2_ParamLimits

0x45f5,	// (0x000045f5) list_single_graphic_pane_t1_cp2

0x0dae,	// (0x00000dae) list_single_number_pane_g1_cp2_ParamLimits

0x0dae,	// (0x00000dae) list_single_number_pane_g1_cp2

0x2498,	// (0x00002498) list_single_number_pane_g2_cp2

0x45f5,	// (0x000045f5) list_single_number_pane_t1_cp2_ParamLimits

0x45f5,	// (0x000045f5) list_single_number_pane_t1_cp2

0x460b,	// (0x0000460b) list_single_number_pane_t2_cp2_ParamLimits

0x460b,	// (0x0000460b) list_single_number_pane_t2_cp2

0x22a3,	// (0x000022a3) list_double2_pane_g1_cp2_ParamLimits

0x22a3,	// (0x000022a3) list_double2_pane_g1_cp2

0x22b4,	// (0x000022b4) list_double2_pane_g2_cp2

0x240c,	// (0x0000240c) list_double2_pane_t1_cp2_ParamLimits

0x240c,	// (0x0000240c) list_double2_pane_t1_cp2

0x2422,	// (0x00002422) list_double2_pane_t2_cp2_ParamLimits

0x2422,	// (0x00002422) list_double2_pane_t2_cp2

0x2434,	// (0x00002434) list_double_pane_g1_cp2_ParamLimits

0x2434,	// (0x00002434) list_double_pane_g1_cp2

0x2440,	// (0x00002440) list_double_pane_g2_cp2

0x2448,	// (0x00002448) list_double_pane_t1_cp2_ParamLimits

0x2448,	// (0x00002448) list_double_pane_t1_cp2

0x245e,	// (0x0000245e) list_double_pane_t2_cp2_ParamLimits

0x245e,	// (0x0000245e) list_double_pane_t2_cp2

0x2488,	// (0x00002488) list_single_pane_cp2_g3

0x0dae,	// (0x00000dae) list_single_pane_g1_cp2_ParamLimits

0x0dae,	// (0x00000dae) list_single_pane_g1_cp2

0x2498,	// (0x00002498) list_single_pane_g2_cp2

0x24a0,	// (0x000024a0) list_single_pane_t1_cp2_ParamLimits

0x24a0,	// (0x000024a0) list_single_pane_t1_cp2

0x24b8,	// (0x000024b8) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x24b8,	// (0x000024b8) list_single_large_graphic_pane_g1_cp2

0x24c4,	// (0x000024c4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x24c4,	// (0x000024c4) list_single_large_graphic_pane_g2_cp2

0x24d0,	// (0x000024d0) list_single_large_graphic_pane_g3_cp2

0x24d8,	// (0x000024d8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x24d8,	// (0x000024d8) list_single_large_graphic_pane_g4_cp1

0x24f2,	// (0x000024f2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x24f2,	// (0x000024f2) list_single_large_graphic_pane_t1_cp2

0x4474,	// (0x00004474) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4474,	// (0x00004474) list_single_graphic_heading_pane_g1_cp2

0x4441,	// (0x00004441) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4441,	// (0x00004441) list_single_graphic_heading_pane_g4_cp2

0x2498,	// (0x00002498) list_single_graphic_heading_pane_g5_cp2

0x4480,	// (0x00004480) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4480,	// (0x00004480) list_single_graphic_heading_pane_t1_cp2

0x4496,	// (0x00004496) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4496,	// (0x00004496) list_single_graphic_heading_pane_t2_cp2

0x4435,	// (0x00004435) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4435,	// (0x00004435) list_single_2graphic_pane_g1_cp2

0x4441,	// (0x00004441) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4441,	// (0x00004441) list_single_2graphic_pane_g2_cp2

0x2498,	// (0x00002498) list_single_2graphic_pane_g3_cp2

0x4452,	// (0x00004452) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4452,	// (0x00004452) list_single_2graphic_pane_g4_cp2

0x445e,	// (0x0000445e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x445e,	// (0x0000445e) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x400d,	// (0x0000400d) list_highlight_pane_g1_cp1

0x4015,	// (0x00004015) list_highlight_pane_g2_cp1

0x401d,	// (0x0000401d) list_highlight_pane_g3_cp1

0x4025,	// (0x00004025) list_highlight_pane_g4_cp1

0x402d,	// (0x0000402d) list_highlight_pane_g5_cp1

0x4035,	// (0x00004035) list_highlight_pane_g6_cp1

0x403d,	// (0x0000403d) list_highlight_pane_g7_cp1

0x4045,	// (0x00004045) list_highlight_pane_g8_cp1

0x404d,	// (0x0000404d) list_highlight_pane_g9_cp1

0xce88,	// (0x0000ce88) form_field_slider_pane_t3

0xce98,	// (0x0000ce98) form_field_slider_pane_t4

0x3f41,	// (0x00003f41) slider_form_pane_ParamLimits

0x3f41,	// (0x00003f41) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4885,	// (0x00004885) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xada0,	// (0x0000ada0) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x2508,	// (0x00002508) text_digital

0x2517,	// (0x00002517) text_primary

0x2526,	// (0x00002526) text_primary_small

0x2535,	// (0x00002535) text_secondary

0x2544,	// (0x00002544) text_title

0x5154,	// (0x00005154) bg_passive_tab_pane_g1_cp3_srt

0x206c,	// (0x0000206c) bg_passive_tab_pane_g2_cp3_srt

0x515d,	// (0x0000515d) bg_passive_tab_pane_g3_cp3_srt

0x081f,	// (0x0000081f) bg_active_tab_pane_cp3_srt_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp3_srt

0x5166,	// (0x00005166) tabs_4_active_pane_srt_g1

0xd319,	// (0x0000d319) tabs_4_active_pane_srt_t1_ParamLimits

0xd319,	// (0x0000d319) tabs_4_active_pane_srt_t1

0x5154,	// (0x00005154) bg_active_tab_pane_g1_cp3_copy1

0x206c,	// (0x0000206c) bg_active_tab_pane_g2_cp3_copy1

0x515d,	// (0x0000515d) bg_active_tab_pane_g3_cp3_copy1

0x04f9,	// (0x000004f9) tabs_2_long_active_pane_srt_ParamLimits

0x04f9,	// (0x000004f9) tabs_2_long_active_pane_srt

0x04f9,	// (0x000004f9) tabs_2_long_passive_pane_srt_ParamLimits

0x04f9,	// (0x000004f9) tabs_2_long_passive_pane_srt

0x2ac6,	// (0x00002ac6) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2ac6,	// (0x00002ac6) bg_passive_tab_pane_cp4_srt

0x4d11,	// (0x00004d11) bg_passive_tab_pane_g1_cp4_srt

0x206c,	// (0x0000206c) bg_passive_tab_pane_g2_cp4_srt

0x4d1a,	// (0x00004d1a) bg_passive_tab_pane_g3_cp4_srt

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp4_srt_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp4_srt

0xd0f4,	// (0x0000d0f4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd0f4,	// (0x0000d0f4) tabs_2_long_active_pane_srt_t1

0x4d11,	// (0x00004d11) bg_active_tab_pane_g1_cp4_srt

0x206c,	// (0x0000206c) bg_active_tab_pane_g2_cp4_srt

0x4d1a,	// (0x00004d1a) bg_active_tab_pane_g3_cp4_srt

0x081f,	// (0x0000081f) tabs_3_long_active_pane_srt_ParamLimits

0x081f,	// (0x0000081f) tabs_3_long_active_pane_srt

0x081f,	// (0x0000081f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x081f,	// (0x0000081f) tabs_3_long_passive_pane_cp_srt

0x081f,	// (0x0000081f) tabs_3_long_passive_pane_srt_ParamLimits

0x081f,	// (0x0000081f) tabs_3_long_passive_pane_srt

0x2ac6,	// (0x00002ac6) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2ac6,	// (0x00002ac6) bg_passive_tab_pane_cp5_srt

0x2237,	// (0x00002237) bg_passive_tab_pane_g1_cp5_srt

0x206c,	// (0x0000206c) bg_passive_tab_pane_g2_cp5_srt

0x2240,	// (0x00002240) bg_passive_tab_pane_g3_cp5_srt

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp5_srt_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp5_srt

0xd0de,	// (0x0000d0de) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd0de,	// (0x0000d0de) tabs_3_long_active_pane_srt_t1

0x2237,	// (0x00002237) bg_active_tab_pane_g1_cp5_srt

0x206c,	// (0x0000206c) bg_active_tab_pane_g2_cp5_srt

0x2240,	// (0x00002240) bg_active_tab_pane_g3_cp5_srt

0x4cf1,	// (0x00004cf1) navi_text_pane_srt_t1

0x4ce9,	// (0x00004ce9) navi_icon_pane_srt_g1

0x27b0,	// (0x000027b0) midp_editing_number_pane_srt

0x2553,	// (0x00002553) midp_ticker_pane_srt

0x27b8,	// (0x000027b8) midp_ticker_pane_srt_g1

0x27c0,	// (0x000027c0) midp_ticker_pane_srt_g2

0x0001,

0xac2f,	// (0x0000ac2f) midp_ticker_pane_srt_g

0x27c8,	// (0x000027c8) midp_ticker_pane_srt_t1

0x4cda,	// (0x00004cda) midp_editing_number_pane_t1_copy1

0x2ac6,	// (0x00002ac6) listscroll_midp_pane

0x2ac6,	// (0x00002ac6) midp_form_pane

0x25bf,	// (0x000025bf) midp_info_popup_window_ParamLimits

0x25bf,	// (0x000025bf) midp_info_popup_window

0x1552,	// (0x00001552) bg_popup_sub_pane_cp50_ParamLimits

0x1552,	// (0x00001552) bg_popup_sub_pane_cp50

0x3c42,	// (0x00003c42) listscroll_midp_info_pane_ParamLimits

0x3c42,	// (0x00003c42) listscroll_midp_info_pane

0x3c2a,	// (0x00003c2a) listscroll_form_midp_pane_ParamLimits

0x3c2a,	// (0x00003c2a) listscroll_form_midp_pane

0x3c36,	// (0x00003c36) scroll_bar_cp050

0xce7c,	// (0x0000ce7c) list_midp_pane

0x5f22,	// (0x00005f22) signal_pane_g2_cp

0x3b44,	// (0x00003b44) listscroll_midp_info_pane_t1_ParamLimits

0x3b44,	// (0x00003b44) listscroll_midp_info_pane_t1

0x3b5c,	// (0x00003b5c) listscroll_midp_info_pane_t2_ParamLimits

0x3b5c,	// (0x00003b5c) listscroll_midp_info_pane_t2

0x3b9a,	// (0x00003b9a) listscroll_midp_info_pane_t3_ParamLimits

0x3b9a,	// (0x00003b9a) listscroll_midp_info_pane_t3

0x3bd4,	// (0x00003bd4) listscroll_midp_info_pane_t4_ParamLimits

0x3bd4,	// (0x00003bd4) listscroll_midp_info_pane_t4

0x0003,

0xacdb,	// (0x0000acdb) listscroll_midp_info_pane_t_ParamLimits

0xacdb,	// (0x0000acdb) listscroll_midp_info_pane_t

0x1614,	// (0x00001614) scroll_pane_cp21

0x3ae6,	// (0x00003ae6) form_midp_field_choice_group_pane

0x3aef,	// (0x00003aef) form_midp_field_text_pane

0x3b2a,	// (0x00003b2a) form_midp_field_time_pane

0x3b32,	// (0x00003b32) form_midp_gauge_slider_pane

0x3b3b,	// (0x00003b3b) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xce62,	// (0x0000ce62) list_single_midp_pane_ParamLimits

0xce62,	// (0x0000ce62) list_single_midp_pane

0xce3f,	// (0x0000ce3f) form_midp_field_text_pane_t1

0x3785,	// (0x00003785) input_focus_pane_cp050

0x3a9f,	// (0x00003a9f) list_midp_form_text_pane

0x3a33,	// (0x00003a33) form_midp_field_choice_group_pane_t1

0x3a41,	// (0x00003a41) input_focus_pane_cp051

0x3a55,	// (0x00003a55) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a17,	// (0x00003a17) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a25,	// (0x00003a25) form_midp_field_time_pane_t2

0x0001,

0x266f,	// (0x0000266f) aid_navinavi_width_2_pane

0xacd6,	// (0x0000acd6) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x39d7,	// (0x000039d7) form_midp_gauge_slider_pane_t1

0x39e5,	// (0x000039e5) form_midp_gauge_slider_pane_t2

0xce1f,	// (0x0000ce1f) form_midp_gauge_slider_pane_t3

0xce2f,	// (0x0000ce2f) form_midp_gauge_slider_pane_t4

0x0003,

0xefb7,	// (0x0000efb7) form_midp_gauge_slider_pane_t

0x3a0f,	// (0x00003a0f) form_midp_slider_pane

0x04f9,	// (0x000004f9) bg_input_focus_pane_cp041_ParamLimits

0x04f9,	// (0x000004f9) bg_input_focus_pane_cp041

0x39a4,	// (0x000039a4) form_midp_gauge_wait_pane_t1_ParamLimits

0x39a4,	// (0x000039a4) form_midp_gauge_wait_pane_t1

0x39b6,	// (0x000039b6) form_midp_gauge_wait_pane_t2_ParamLimits

0x39b6,	// (0x000039b6) form_midp_gauge_wait_pane_t2

0x0001,

0xacc8,	// (0x0000acc8) form_midp_gauge_wait_pane_t_ParamLimits

0xacc8,	// (0x0000acc8) form_midp_gauge_wait_pane_t

0x39c8,	// (0x000039c8) form_midp_wait_pane_ParamLimits

0x39c8,	// (0x000039c8) form_midp_wait_pane

0x396e,	// (0x0000396e) form_midp_image_pane_g1

0x3977,	// (0x00003977) form_midp_image_pane_t1

0x3986,	// (0x00003986) form_midp_image_pane_t2

0x3995,	// (0x00003995) form_midp_image_pane_t3

0x0002,

0xacc1,	// (0x0000acc1) form_midp_image_pane_t

0x3956,	// (0x00003956) list_single_midp_pane_g1

0x395f,	// (0x0000395f) list_single_midp_pane_t1

0xce09,	// (0x0000ce09) list_midp_form_item_pane_ParamLimits

0xce09,	// (0x0000ce09) list_midp_form_item_pane

0x2617,	// (0x00002617) list_midp_form_item_pane_t1

0x2626,	// (0x00002626) midp_ticker_pane_g1

0x2632,	// (0x00002632) midp_ticker_pane_g2

0x0001,

0xac15,	// (0x0000ac15) midp_ticker_pane_g

0x263e,	// (0x0000263e) midp_ticker_pane_t1

0x4fcc,	// (0x00004fcc) midp_editing_number_pane_t1

0x4faa,	// (0x00004faa) midp_editing_number_pane

0x4fb9,	// (0x00004fb9) midp_ticker_pane

0x4cb8,	// (0x00004cb8) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4cc0,	// (0x00004cc0) listscroll_ai_message_pane

0x4c42,	// (0x00004c42) ai_message_heading_pane_g1_ParamLimits

0x4c42,	// (0x00004c42) ai_message_heading_pane_g1

0x4c4e,	// (0x00004c4e) ai_message_heading_pane_g2_ParamLimits

0x4c4e,	// (0x00004c4e) ai_message_heading_pane_g2

0x4c5a,	// (0x00004c5a) ai_message_heading_pane_g3_ParamLimits

0x4c5a,	// (0x00004c5a) ai_message_heading_pane_g3

0x4c66,	// (0x00004c66) ai_message_heading_pane_g4_ParamLimits

0x4c66,	// (0x00004c66) ai_message_heading_pane_g4

0x0003,

0xae02,	// (0x0000ae02) ai_message_heading_pane_g_ParamLimits

0xae02,	// (0x0000ae02) ai_message_heading_pane_g

0x4c72,	// (0x00004c72) ai_message_heading_pane_t1_ParamLimits

0x4c72,	// (0x00004c72) ai_message_heading_pane_t1

0x4c8c,	// (0x00004c8c) ai_message_heading_pane_t2_ParamLimits

0x4c8c,	// (0x00004c8c) ai_message_heading_pane_t2

0x0001,

0xae0b,	// (0x0000ae0b) ai_message_heading_pane_t_ParamLimits

0xae0b,	// (0x0000ae0b) ai_message_heading_pane_t

0x4c9e,	// (0x00004c9e) bg_popup_heading_pane_cp1_ParamLimits

0x4c9e,	// (0x00004c9e) bg_popup_heading_pane_cp1

0x4c30,	// (0x00004c30) list_ai_message_pane_ParamLimits

0x4c30,	// (0x00004c30) list_ai_message_pane

0x1614,	// (0x00001614) scroll_pane_cp10

0x4b7c,	// (0x00004b7c) list_ai_message_pane_g1

0x4b84,	// (0x00004b84) list_ai_message_pane_g2

0x0001,

0xaddf,	// (0x0000addf) list_ai_message_pane_g

0x4b8c,	// (0x00004b8c) list_ai_message_pane_t1_ParamLimits

0x4b8c,	// (0x00004b8c) list_ai_message_pane_t1

0x4ba1,	// (0x00004ba1) list_ai_message_pane_t2_ParamLimits

0x4ba1,	// (0x00004ba1) list_ai_message_pane_t2

0x4bb6,	// (0x00004bb6) list_ai_message_pane_t3_ParamLimits

0x4bb6,	// (0x00004bb6) list_ai_message_pane_t3

0x4bcb,	// (0x00004bcb) list_ai_message_pane_t4_ParamLimits

0x4bcb,	// (0x00004bcb) list_ai_message_pane_t4

0x0003,

0xade4,	// (0x0000ade4) list_ai_message_pane_t_ParamLimits

0xade4,	// (0x0000ade4) list_ai_message_pane_t

0xd0bc,	// (0x0000d0bc) cell_ai_soft_ind_pane_ParamLimits

0xd0bc,	// (0x0000d0bc) cell_ai_soft_ind_pane

0x2650,	// (0x00002650) cell_ai_soft_ind_pane_g1_ParamLimits

0x2650,	// (0x00002650) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x265d,	// (0x0000265d) text_secondary_cp56_ParamLimits

0x265d,	// (0x0000265d) text_secondary_cp56

0x4b3b,	// (0x00004b3b) example_general_pane_ParamLimits

0x4b3b,	// (0x00004b3b) example_general_pane

0x4b47,	// (0x00004b47) example_parent_pane_g1_ParamLimits

0x4b47,	// (0x00004b47) example_parent_pane_g1

0x4b53,	// (0x00004b53) example_parent_pane_t1_ParamLimits

0x4b53,	// (0x00004b53) example_parent_pane_t1

0xc667,	// (0x0000c667) popup_preview_text_window_ParamLimits

0xc667,	// (0x0000c667) popup_preview_text_window

0x2490,	// (0x00002490) list_single_pane_cp2_g4

0x08c9,	// (0x000008c9) bg_popup_preview_window_pane_ParamLimits

0x08c9,	// (0x000008c9) bg_popup_preview_window_pane

0x488d,	// (0x0000488d) popup_preview_text_window_t1_ParamLimits

0x488d,	// (0x0000488d) popup_preview_text_window_t1

0x48ab,	// (0x000048ab) popup_preview_text_window_t2_ParamLimits

0x48ab,	// (0x000048ab) popup_preview_text_window_t2

0x48f4,	// (0x000048f4) popup_preview_text_window_t3_ParamLimits

0x48f4,	// (0x000048f4) popup_preview_text_window_t3

0x4939,	// (0x00004939) popup_preview_text_window_t4_ParamLimits

0x4939,	// (0x00004939) popup_preview_text_window_t4

0x0004,

0xadb3,	// (0x0000adb3) popup_preview_text_window_t_ParamLimits

0xadb3,	// (0x0000adb3) popup_preview_text_window_t

0x49b7,	// (0x000049b7) scroll_pane_cp11

0x35eb,	// (0x000035eb) bg_popup_preview_window_pane_g1

0x484d,	// (0x0000484d) bg_popup_preview_window_pane_g2

0x4855,	// (0x00004855) bg_popup_preview_window_pane_g3

0x485d,	// (0x0000485d) bg_popup_preview_window_pane_g4

0x4865,	// (0x00004865) bg_popup_preview_window_pane_g5

0x486d,	// (0x0000486d) bg_popup_preview_window_pane_g6

0x4875,	// (0x00004875) bg_popup_preview_window_pane_g7

0x487d,	// (0x0000487d) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc5e3,	// (0x0000c5e3) popup_midp_note_alarm_window_ParamLimits

0xc5e3,	// (0x0000c5e3) popup_midp_note_alarm_window

0x1316,	// (0x00001316) data_form_pane_ParamLimits

0xbd1a,	// (0x0000bd1a) form_field_data_pane_g1

0xbd24,	// (0x0000bd24) form_field_data_pane_t1_ParamLimits

0x1346,	// (0x00001346) input_focus_pane_ParamLimits

0x1354,	// (0x00001354) data_form_wide_pane_ParamLimits

0x1360,	// (0x00001360) form_field_data_wide_pane_g1

0x1380,	// (0x00001380) form_field_data_wide_pane_t1_ParamLimits

0x0b6c,	// (0x00000b6c) input_focus_pane_cp6_ParamLimits

0xbe30,	// (0x0000be30) input_popup_find_pane_g1_ParamLimits

0xbe30,	// (0x0000be30) input_popup_find_pane_g1

0x1941,	// (0x00001941) aid_navi_side_left_pane

0x1956,	// (0x00001956) aid_navi_side_right_pane

0x4108,	// (0x00004108) bg_popup_window_pane_cp30_ParamLimits

0x4108,	// (0x00004108) bg_popup_window_pane_cp30

0x4182,	// (0x00004182) popup_midp_note_alarm_window_g1_ParamLimits

0x4182,	// (0x00004182) popup_midp_note_alarm_window_g1

0x41b2,	// (0x000041b2) popup_midp_note_alarm_window_t1_ParamLimits

0x41b2,	// (0x000041b2) popup_midp_note_alarm_window_t1

0x4253,	// (0x00004253) popup_midp_note_alarm_window_t2_ParamLimits

0x4253,	// (0x00004253) popup_midp_note_alarm_window_t2

0x4301,	// (0x00004301) popup_midp_note_alarm_window_t3_ParamLimits

0x4301,	// (0x00004301) popup_midp_note_alarm_window_t3

0x4333,	// (0x00004333) popup_midp_note_alarm_window_t4_ParamLimits

0x4333,	// (0x00004333) popup_midp_note_alarm_window_t4

0x4359,	// (0x00004359) popup_midp_note_alarm_window_t5_ParamLimits

0x4359,	// (0x00004359) popup_midp_note_alarm_window_t5

0x000a,

0xad50,	// (0x0000ad50) popup_midp_note_alarm_window_t_ParamLimits

0xad50,	// (0x0000ad50) popup_midp_note_alarm_window_t

0x4405,	// (0x00004405) wait_bar_pane_cp1_ParamLimits

0x4405,	// (0x00004405) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3de6,	// (0x00003de6) wait_border_pane_g1_copy1

0x1397,	// (0x00001397) form_field_popup_pane_g1

0xbd3e,	// (0x0000bd3e) form_field_popup_pane_t1_ParamLimits

0x1346,	// (0x00001346) input_focus_pane_cp7_ParamLimits

0x13b9,	// (0x000013b9) list_form_pane_ParamLimits

0x13c5,	// (0x000013c5) form_field_popup_wide_pane_g1

0x13cd,	// (0x000013cd) form_field_popup_wide_pane_t1_ParamLimits

0x1346,	// (0x00001346) input_focus_pane_cp8_ParamLimits

0x13e2,	// (0x000013e2) list_form_wide_pane_ParamLimits

0x51de,	// (0x000051de) aid_size_cell_graphic_pane

0xbdbd,	// (0x0000bdbd) data_form_pane_t1_ParamLimits

0xd25d,	// (0x0000d25d) data_form_wide_pane_t1_ParamLimits

0xca29,	// (0x0000ca29) bg_status_flat_pane

0xb627,	// (0x0000b627) title_pane_t1_ParamLimits

0x04c1,	// (0x000004c1) title_pane_t2_ParamLimits

0x04e7,	// (0x000004e7) title_pane_t3_ParamLimits

0xeea5,	// (0x0000eea5) title_pane_t_ParamLimits

0x1c53,	// (0x00001c53) level_1_signal_ParamLimits

0x1c60,	// (0x00001c60) level_2_signal_ParamLimits

0x1c6d,	// (0x00001c6d) level_3_signal_ParamLimits

0x1c7a,	// (0x00001c7a) level_4_signal_ParamLimits

0x1c87,	// (0x00001c87) level_5_signal_ParamLimits

0x1c94,	// (0x00001c94) level_6_signal_ParamLimits

0x1ca1,	// (0x00001ca1) level_7_signal_ParamLimits

0x1c53,	// (0x00001c53) level_1_battery_ParamLimits

0x1c60,	// (0x00001c60) level_2_battery_ParamLimits

0x1c6d,	// (0x00001c6d) level_3_battery_ParamLimits

0x1c7a,	// (0x00001c7a) level_4_battery_ParamLimits

0x1c87,	// (0x00001c87) level_5_battery_ParamLimits

0x1c94,	// (0x00001c94) level_6_battery_ParamLimits

0x1ca1,	// (0x00001ca1) level_7_battery_ParamLimits

0x400d,	// (0x0000400d) bg_status_flat_pane_g1

0x4015,	// (0x00004015) bg_status_flat_pane_g2

0x401d,	// (0x0000401d) bg_status_flat_pane_g3

0x4025,	// (0x00004025) bg_status_flat_pane_g4

0x402d,	// (0x0000402d) bg_status_flat_pane_g5

0x4035,	// (0x00004035) bg_status_flat_pane_g6

0x403d,	// (0x0000403d) bg_status_flat_pane_g7

0xb6b3,	// (0x0000b6b3) tabs_3_active_pane_t1_ParamLimits

0xb6b3,	// (0x0000b6b3) tabs_3_passive_pane_t1_ParamLimits

0xb6c5,	// (0x0000b6c5) tabs_4_active_pane_t1_ParamLimits

0xb6c5,	// (0x0000b6c5) tabs_4_1_passive_pane_t1_ParamLimits

0xbe46,	// (0x0000be46) tabs_2_active_pane_t1_ParamLimits

0xbe46,	// (0x0000be46) tabs_2_passive_pane_t1_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp4_ParamLimits

0xbe58,	// (0x0000be58) tabs_2_long_active_pane_t1_ParamLimits

0x2ac6,	// (0x00002ac6) bg_passive_tab_pane_cp4_ParamLimits

0x36b0,	// (0x000036b0) list_single_midp_graphic_pane_t1_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp5_ParamLimits

0xbe6b,	// (0x0000be6b) tabs_3_long_active_pane_t1_ParamLimits

0x2ac6,	// (0x00002ac6) bg_passive_tab_pane_cp5_ParamLimits

0x36b0,	// (0x000036b0) list_single_midp_graphic_pane_t1

0xca29,	// (0x0000ca29) bg_status_flat_pane_ParamLimits

0x31f5,	// (0x000031f5) indicator_pane_cp2_ParamLimits

0x31f5,	// (0x000031f5) indicator_pane_cp2

0xcba7,	// (0x0000cba7) navi_pane_srt_ParamLimits

0xcba7,	// (0x0000cba7) navi_pane_srt

0x3344,	// (0x00003344) popup_clock_digital_analogue_window_cp1

0x0681,	// (0x00000681) indicator_pane_t1

0x2553,	// (0x00002553) copy_highlight_pane

0x2553,	// (0x00002553) cursor_graphics_pane

0x2553,	// (0x00002553) graphic_within_text_pane

0x2553,	// (0x00002553) link_highlight_pane

0x497a,	// (0x0000497a) popup_preview_text_window_t5_ParamLimits

0x497a,	// (0x0000497a) popup_preview_text_window_t5

0x2677,	// (0x00002677) cursor_digital_pane

0x2677,	// (0x00002677) cursor_primary_pane

0x2688,	// (0x00002688) cursor_primary_small_pane

0x2690,	// (0x00002690) cursor_secondary_pane

0x2698,	// (0x00002698) cursor_title_pane

0x2677,	// (0x00002677) link_highlight_digital_pane

0x267f,	// (0x0000267f) link_highlight_primary_pane

0x2688,	// (0x00002688) link_highlight_primary_small_pane

0x2690,	// (0x00002690) link_highlight_secondary_pane

0x2698,	// (0x00002698) link_highlight_title_pane

0x2677,	// (0x00002677) copy_highlight_digital_pane

0x2677,	// (0x00002677) copy_highlight_primary_pane

0x2688,	// (0x00002688) copy_highlight_primary_small_pane

0x2690,	// (0x00002690) copy_highlight_secondary_pane

0x2698,	// (0x00002698) copy_highlight_title_pane

0x2690,	// (0x00002690) graphic_text_digital_pane

0x40ab,	// (0x000040ab) graphic_text_primary_pane

0x40b4,	// (0x000040b4) graphic_text_primary_small_pane

0x2688,	// (0x00002688) graphic_text_secondary_pane

0x2677,	// (0x00002677) graphic_text_title_pane

0xc0ff,	// (0x0000c0ff) cursor_primary_pane_g1

0x409d,	// (0x0000409d) cursor_text_primary_t1

0xcebc,	// (0x0000cebc) cursor_primary_small_pane_g1

0x408f,	// (0x0000408f) cursor_text_primary_small_t1

0xceb2,	// (0x0000ceb2) cursor_primary_small_pane_g1_copy1

0x4077,	// (0x00004077) cursor_text_primary_small_t1_copy1

0x4055,	// (0x00004055) cursor_text_title_t1

0xcea8,	// (0x0000cea8) cursor_title_pane_g1

0xc0ff,	// (0x0000c0ff) cursor_digital_pane_g1

0x26aa,	// (0x000026aa) cursor_text_digital_t1

0x3ff6,	// (0x00003ff6) link_highlight_primary_pane_g1

0x3ffe,	// (0x00003ffe) link_highlight_primary_pane_t1

0x26b8,	// (0x000026b8) link_highlight_primary_small_pane_g1

0x26c0,	// (0x000026c0) link_highlight_primary_small_pane_t1

0x26b8,	// (0x000026b8) link_highlight_secondary_pane_g1

0x26cf,	// (0x000026cf) link_highlight_secondary_pane_t1

0x3f6a,	// (0x00003f6a) link_highlight_title_pane_g1

0x3f72,	// (0x00003f72) link_highlight_title_pane_t1

0x3f53,	// (0x00003f53) link_highlight_digital_pane_g1

0x3f5b,	// (0x00003f5b) link_highlight_digital_pane_t1

0x3e2b,	// (0x00003e2b) copy_highlight_primary_pane_g1

0x3e33,	// (0x00003e33) copy_highlight_primary_pane_t1

0x3e05,	// (0x00003e05) copy_highlight_primary_small_pane_g1

0x3e1c,	// (0x00003e1c) copy_highlight_primary_small_pane_t1

0x26de,	// (0x000026de) copy_highlight_secondary_pane_g1

0x26e6,	// (0x000026e6) copy_highlight_secondary_pane_t1

0x3e05,	// (0x00003e05) copy_highlight_title_pane_g1

0x3e0d,	// (0x00003e0d) copy_highlight_title_pane_t1

0x3e2b,	// (0x00003e2b) copy_highlight_digital_pane_g1

0x5460,	// (0x00005460) copy_highlight_digital_pane_t1

0x53b4,	// (0x000053b4) graphic_text_primary_pane_g1

0x5444,	// (0x00005444) graphic_text_primary_pane_t1

0x5452,	// (0x00005452) graphic_text_primary_pane_t2

0x0001,

0xae7f,	// (0x0000ae7f) graphic_text_primary_pane_t

0x5420,	// (0x00005420) graphic_text_primary_small_pane_g1

0x5428,	// (0x00005428) graphic_text_primary_small_pane_t1

0x5436,	// (0x00005436) graphic_text_primary_small_pane_t2

0x0001,

0xae7a,	// (0x0000ae7a) graphic_text_primary_small_pane_t

0x53fc,	// (0x000053fc) graphic_text_secondary_pane_g1

0x5404,	// (0x00005404) graphic_text_secondary_pane_t1

0x5412,	// (0x00005412) graphic_text_secondary_pane_t2

0x0001,

0xae75,	// (0x0000ae75) graphic_text_secondary_pane_t

0x53d8,	// (0x000053d8) graphic_text_title_pane_g1

0x53e0,	// (0x000053e0) graphic_text_title_pane_t1

0x53ee,	// (0x000053ee) graphic_text_title_pane_t2

0x0001,

0xae70,	// (0x0000ae70) graphic_text_title_pane_t

0x53b4,	// (0x000053b4) graphic_text_digital_pane_g1

0x53bc,	// (0x000053bc) graphic_text_digital_pane_t1

0x53ca,	// (0x000053ca) graphic_text_digital_pane_t2

0x0001,

0xae6b,	// (0x0000ae6b) graphic_text_digital_pane_t

0x04f9,	// (0x000004f9) navi_icon_pane_srt_ParamLimits

0x04f9,	// (0x000004f9) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04f9,	// (0x000004f9) navi_text_pane_srt_ParamLimits

0x04f9,	// (0x000004f9) navi_text_pane_srt

0x537f,	// (0x0000537f) navi_navi_icon_text_pane_srt

0x5387,	// (0x00005387) navi_navi_pane_srt_g1_ParamLimits

0x5387,	// (0x00005387) navi_navi_pane_srt_g1

0x5399,	// (0x00005399) navi_navi_pane_srt_g2_ParamLimits

0x5399,	// (0x00005399) navi_navi_pane_srt_g2

0x0001,

0xae66,	// (0x0000ae66) navi_navi_pane_srt_g_ParamLimits

0xae66,	// (0x0000ae66) navi_navi_pane_srt_g

0x53ab,	// (0x000053ab) navi_navi_tabs_pane_srt

0x537f,	// (0x0000537f) navi_navi_text_pane_srt

0x537f,	// (0x0000537f) navi_navi_volume_pane_srt

0x5370,	// (0x00005370) navi_navi_text_pane_srt_t1

0x534b,	// (0x0000534b) navi_navi_volume_pane_srt_g1

0x5353,	// (0x00005353) volume_small_pane_srt_ParamLimits

0x5353,	// (0x00005353) volume_small_pane_srt

0x26f5,	// (0x000026f5) volume_small_pane_srt_g1_ParamLimits

0x26f5,	// (0x000026f5) volume_small_pane_srt_g1

0x2705,	// (0x00002705) volume_small_pane_srt_g2_ParamLimits

0x2705,	// (0x00002705) volume_small_pane_srt_g2

0x2716,	// (0x00002716) volume_small_pane_srt_g3_ParamLimits

0x2716,	// (0x00002716) volume_small_pane_srt_g3

0x2727,	// (0x00002727) volume_small_pane_srt_g4_ParamLimits

0x2727,	// (0x00002727) volume_small_pane_srt_g4

0x2738,	// (0x00002738) volume_small_pane_srt_g5_ParamLimits

0x2738,	// (0x00002738) volume_small_pane_srt_g5

0x2749,	// (0x00002749) volume_small_pane_srt_g6_ParamLimits

0x2749,	// (0x00002749) volume_small_pane_srt_g6

0x275a,	// (0x0000275a) volume_small_pane_srt_g7_ParamLimits

0x275a,	// (0x0000275a) volume_small_pane_srt_g7

0x276b,	// (0x0000276b) volume_small_pane_srt_g8_ParamLimits

0x276b,	// (0x0000276b) volume_small_pane_srt_g8

0x277c,	// (0x0000277c) volume_small_pane_srt_g9_ParamLimits

0x277c,	// (0x0000277c) volume_small_pane_srt_g9

0x278d,	// (0x0000278d) volume_small_pane_srt_g10_ParamLimits

0x278d,	// (0x0000278d) volume_small_pane_srt_g10

0x0009,

0xac1a,	// (0x0000ac1a) volume_small_pane_srt_g_ParamLimits

0xac1a,	// (0x0000ac1a) volume_small_pane_srt_g

0x0972,	// (0x00000972) query_popup_data_pane_cp2

0x5339,	// (0x00005339) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5339,	// (0x00005339) navi_navi_icon_text_pane_srt_t1

0x40ab,	// (0x000040ab) navi_tabs_2_long_pane_srt

0x40ab,	// (0x000040ab) navi_tabs_2_pane_srt

0x40ab,	// (0x000040ab) navi_tabs_3_long_pane_srt

0x40ab,	// (0x000040ab) navi_tabs_3_pane_srt

0x40ab,	// (0x000040ab) navi_tabs_4_pane_srt

0x5311,	// (0x00005311) tabs_2_active_pane_srt_ParamLimits

0x5311,	// (0x00005311) tabs_2_active_pane_srt

0x5321,	// (0x00005321) tabs_2_passive_pane_srt_ParamLimits

0x5321,	// (0x00005321) tabs_2_passive_pane_srt

0x3785,	// (0x00003785) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3785,	// (0x00003785) bg_passive_tab_pane_cp1_srt

0x52e5,	// (0x000052e5) bg_passive_tab_pane_g1_cp1_srt

0x206c,	// (0x0000206c) bg_passive_tab_pane_g2_cp1_srt

0x52ee,	// (0x000052ee) bg_passive_tab_pane_g3_cp1_srt

0x081f,	// (0x0000081f) bg_active_tab_pane_cp1_srt_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp1_srt

0x52f7,	// (0x000052f7) tabs_2_active_pane_srt_g1

0xd395,	// (0x0000d395) tabs_2_active_pane_srt_t1_ParamLimits

0xd395,	// (0x0000d395) tabs_2_active_pane_srt_t1

0x52e5,	// (0x000052e5) bg_active_tab_pane_g1_cp1_srt

0x206c,	// (0x0000206c) bg_active_tab_pane_g2_cp1_srt

0x52ee,	// (0x000052ee) bg_active_tab_pane_g3_cp1_srt

0x52b2,	// (0x000052b2) tabs_3_active_pane_srt_ParamLimits

0x52b2,	// (0x000052b2) tabs_3_active_pane_srt

0x52c3,	// (0x000052c3) tabs_3_passive_pane_cp_srt_ParamLimits

0x52c3,	// (0x000052c3) tabs_3_passive_pane_cp_srt

0x52d4,	// (0x000052d4) tabs_3_passive_pane_srt_ParamLimits

0x52d4,	// (0x000052d4) tabs_3_passive_pane_srt

0x3785,	// (0x00003785) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3785,	// (0x00003785) bg_passive_tab_pane_cp2_srt

0x279e,	// (0x0000279e) bg_passive_tab_pane_g1_cp2_srt

0x206c,	// (0x0000206c) bg_passive_tab_pane_g2_cp2_srt

0x27a7,	// (0x000027a7) bg_passive_tab_pane_g3_cp2_srt

0x081f,	// (0x0000081f) bg_active_tab_pane_cp2_srt_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp2_srt

0x5298,	// (0x00005298) tabs_3_active_pane_srt_g1

0xd37f,	// (0x0000d37f) tabs_3_active_pane_srt_t1_ParamLimits

0xd37f,	// (0x0000d37f) tabs_3_active_pane_srt_t1

0x279e,	// (0x0000279e) bg_active_tab_pane_g1_cp2_srt

0x206c,	// (0x0000206c) bg_active_tab_pane_g2_cp2_srt

0x27a7,	// (0x000027a7) bg_active_tab_pane_g3_cp2_srt

0x5250,	// (0x00005250) tabs_4_active_pane_srt_ParamLimits

0x5250,	// (0x00005250) tabs_4_active_pane_srt

0x5262,	// (0x00005262) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5262,	// (0x00005262) tabs_4_passive_pane_cp2_srt

0x2a44,	// (0x00002a44) aid_size_cell_toolbar

0x4df4,	// (0x00004df4) main_idle_act_pane_ParamLimits

0x2c69,	// (0x00002c69) popup_large_graphic_colour_window_ParamLimits

0xc8ed,	// (0x0000c8ed) popup_toolbar_window_ParamLimits

0xc8ed,	// (0x0000c8ed) popup_toolbar_window

0x4ff7,	// (0x00004ff7) list_single_graphic_2heading_pane_ParamLimits

0x4ff7,	// (0x00004ff7) list_single_graphic_2heading_pane

0x19cd,	// (0x000019cd) aid_size_cell_apps_grid_lsc_pane

0x19df,	// (0x000019df) aid_size_cell_apps_grid_prt_pane

0x2ac6,	// (0x00002ac6) bg_wml_button_pane_cp1_ParamLimits

0x2ac6,	// (0x00002ac6) bg_wml_button_pane_cp1

0xce3f,	// (0x0000ce3f) form_midp_field_text_pane_t1_ParamLimits

0x3785,	// (0x00003785) input_focus_pane_cp050_ParamLimits

0x3a9f,	// (0x00003a9f) list_midp_form_text_pane_ParamLimits

0x3a41,	// (0x00003a41) input_focus_pane_cp051_ParamLimits

0x3a55,	// (0x00003a55) list_midp_choice_pane_ParamLimits

0xcdd3,	// (0x0000cdd3) list_single_2graphic_pane_cp3_ParamLimits

0xcdd3,	// (0x0000cdd3) list_single_2graphic_pane_cp3

0xcde8,	// (0x0000cde8) list_single_midp_graphic_pane_ParamLimits

0xcde8,	// (0x0000cde8) list_single_midp_graphic_pane

0x0e28,	// (0x00000e28) list_single_graphic_2heading_pane_g1_ParamLimits

0x0e28,	// (0x00000e28) list_single_graphic_2heading_pane_g1

0x0dae,	// (0x00000dae) list_single_graphic_2heading_pane_g4_ParamLimits

0x0dae,	// (0x00000dae) list_single_graphic_2heading_pane_g4

0x0dba,	// (0x00000dba) list_single_graphic_2heading_pane_g5_ParamLimits

0x0dba,	// (0x00000dba) list_single_graphic_2heading_pane_g5

0x0002,

0xac6d,	// (0x0000ac6d) list_single_graphic_2heading_pane_g_ParamLimits

0xac6d,	// (0x0000ac6d) list_single_graphic_2heading_pane_g

0x349b,	// (0x0000349b) list_single_graphic_2heading_pane_t1_ParamLimits

0x349b,	// (0x0000349b) list_single_graphic_2heading_pane_t1

0x34af,	// (0x000034af) list_single_graphic_2heading_pane_t2_ParamLimits

0x34af,	// (0x000034af) list_single_graphic_2heading_pane_t2

0x34cb,	// (0x000034cb) list_single_graphic_2heading_pane_t3_ParamLimits

0x34cb,	// (0x000034cb) list_single_graphic_2heading_pane_t3

0x0002,

0xac74,	// (0x0000ac74) list_single_graphic_2heading_pane_t_ParamLimits

0xac74,	// (0x0000ac74) list_single_graphic_2heading_pane_t

0x34e3,	// (0x000034e3) bg_popup_sub_pane_cp2

0x350d,	// (0x0000350d) grid_toobar_pane

0x3549,	// (0x00003549) cell_toolbar_pane_ParamLimits

0x3549,	// (0x00003549) cell_toolbar_pane

0x358f,	// (0x0000358f) cell_toolbar_pane_g1_ParamLimits

0x358f,	// (0x0000358f) cell_toolbar_pane_g1

0x35a3,	// (0x000035a3) cell_toolbar_pane_g2_ParamLimits

0x35a3,	// (0x000035a3) cell_toolbar_pane_g2

0x0001,

0xac7b,	// (0x0000ac7b) cell_toolbar_pane_g_ParamLimits

0xac7b,	// (0x0000ac7b) cell_toolbar_pane_g

0x35c5,	// (0x000035c5) grid_highlight_pane_cp2_ParamLimits

0x35c5,	// (0x000035c5) grid_highlight_pane_cp2

0x35df,	// (0x000035df) toolbar_button_pane

0x35eb,	// (0x000035eb) toolbar_button_pane_g1

0x35f3,	// (0x000035f3) toolbar_button_pane_g2

0x35fb,	// (0x000035fb) toolbar_button_pane_g3

0x3603,	// (0x00003603) toolbar_button_pane_g4

0x360b,	// (0x0000360b) toolbar_button_pane_g5

0x3613,	// (0x00003613) toolbar_button_pane_g6

0x361b,	// (0x0000361b) toolbar_button_pane_g7

0x3623,	// (0x00003623) toolbar_button_pane_g8

0x362b,	// (0x0000362b) toolbar_button_pane_g9

0x0009,

0xac80,	// (0x0000ac80) toolbar_button_pane_g

0x363b,	// (0x0000363b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x363b,	// (0x0000363b) list_single_2graphic_pane_g1_cp3

0xba93,	// (0x0000ba93) list_single_2graphic_pane_g2_cp3_ParamLimits

0xba93,	// (0x0000ba93) list_single_2graphic_pane_g2_cp3

0x238f,	// (0x0000238f) list_single_2graphic_pane_g3_cp3

0x3658,	// (0x00003658) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3658,	// (0x00003658) list_single_2graphic_pane_g4_cp3

0x3664,	// (0x00003664) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3664,	// (0x00003664) list_single_2graphic_pane_t1_cp3

0x2383,	// (0x00002383) list_single_midp_graphic_pane_g2_ParamLimits

0x2383,	// (0x00002383) list_single_midp_graphic_pane_g2

0x2a4c,	// (0x00002a4c) aid_zoom_text_primary

0x2a54,	// (0x00002a54) aid_zoom_text_secondary

0x285b,	// (0x0000285b) status_small_pane_g7_ParamLimits

0x285b,	// (0x0000285b) status_small_pane_g7

0x287e,	// (0x0000287e) status_small_pane_t1_ParamLimits

0xb603,	// (0x0000b603) title_pane_g2

0x0003,

0xee9c,	// (0x0000ee9c) title_pane_g

0xb87b,	// (0x0000b87b) aid_size_cell_colour_1_pane_ParamLimits

0xb87b,	// (0x0000b87b) aid_size_cell_colour_1_pane

0xb88f,	// (0x0000b88f) aid_size_cell_colour_2_pane_ParamLimits

0xb88f,	// (0x0000b88f) aid_size_cell_colour_2_pane

0xb8a3,	// (0x0000b8a3) aid_size_cell_colour_3_pane_ParamLimits

0xb8a3,	// (0x0000b8a3) aid_size_cell_colour_3_pane

0xb8b7,	// (0x0000b8b7) aid_size_cell_colour_4_pane_ParamLimits

0xb8b7,	// (0x0000b8b7) aid_size_cell_colour_4_pane

0x1848,	// (0x00001848) title_pane_stacon_g1_ParamLimits

0x1848,	// (0x00001848) title_pane_stacon_g1

0x3e8a,	// (0x00003e8a) popup_note_wait_window_g3_ParamLimits

0x3e8a,	// (0x00003e8a) popup_note_wait_window_g3

0x3f00,	// (0x00003f00) popup_note_wait_window_t5_ParamLimits

0x3f00,	// (0x00003f00) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc309,	// (0x0000c309) popup_feb_china_hwr_fs_window_ParamLimits

0xc309,	// (0x0000c309) popup_feb_china_hwr_fs_window

0xcd46,	// (0x0000cd46) aid_size_cell_hwr_fs_ParamLimits

0xcd46,	// (0x0000cd46) aid_size_cell_hwr_fs

0x3785,	// (0x00003785) bg_popup_sub_pane_cp3_ParamLimits

0x3785,	// (0x00003785) bg_popup_sub_pane_cp3

0xcd5b,	// (0x0000cd5b) grid_hwr_fs_pane_ParamLimits

0xcd5b,	// (0x0000cd5b) grid_hwr_fs_pane

0x37a9,	// (0x000037a9) linegrid_hwr_fs_pane_ParamLimits

0x37a9,	// (0x000037a9) linegrid_hwr_fs_pane

0xcd73,	// (0x0000cd73) cell_hwr_fs_pane_ParamLimits

0xcd73,	// (0x0000cd73) cell_hwr_fs_pane

0x37db,	// (0x000037db) linegrid_hwr_fs_pane_g1_ParamLimits

0x37db,	// (0x000037db) linegrid_hwr_fs_pane_g1

0xcd99,	// (0x0000cd99) linegrid_hwr_fs_pane_g2_ParamLimits

0xcd99,	// (0x0000cd99) linegrid_hwr_fs_pane_g2

0x37f9,	// (0x000037f9) linegrid_hwr_fs_pane_g3_ParamLimits

0x37f9,	// (0x000037f9) linegrid_hwr_fs_pane_g3

0x3805,	// (0x00003805) linegrid_hwr_fs_pane_g4_ParamLimits

0x3805,	// (0x00003805) linegrid_hwr_fs_pane_g4

0x381f,	// (0x0000381f) linegrid_hwr_fs_pane_g5_ParamLimits

0x381f,	// (0x0000381f) linegrid_hwr_fs_pane_g5

0x0004,

0xefa3,	// (0x0000efa3) linegrid_hwr_fs_pane_g_ParamLimits

0xefa3,	// (0x0000efa3) linegrid_hwr_fs_pane_g

0x3835,	// (0x00003835) cell_hwr_fs_pane_g1_ParamLimits

0x3835,	// (0x00003835) cell_hwr_fs_pane_g1

0x33d2,	// (0x000033d2) cell_hwr_fs_pane_g2_ParamLimits

0x33d2,	// (0x000033d2) cell_hwr_fs_pane_g2

0xcdab,	// (0x0000cdab) cell_hwr_fs_pane_g3_ParamLimits

0xcdab,	// (0x0000cdab) cell_hwr_fs_pane_g3

0xcdb8,	// (0x0000cdb8) cell_hwr_fs_pane_g4_ParamLimits

0xcdb8,	// (0x0000cdb8) cell_hwr_fs_pane_g4

0x0003,

0xefae,	// (0x0000efae) cell_hwr_fs_pane_g_ParamLimits

0xefae,	// (0x0000efae) cell_hwr_fs_pane_g

0xcdc5,	// (0x0000cdc5) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x15fb,	// (0x000015fb) aid_inside_area_popup_secondary

0xcfb6,	// (0x0000cfb6) aid_inside_area_window_primary_ParamLimits

0xcfb6,	// (0x0000cfb6) aid_inside_area_window_primary

0x546f,	// (0x0000546f) ai2_news_ticker_pane

0x5477,	// (0x00005477) aid_size_cell_ai1_link_ParamLimits

0x5477,	// (0x00005477) aid_size_cell_ai1_link

0x5491,	// (0x00005491) popup_ai2_data_window_ParamLimits

0x5491,	// (0x00005491) popup_ai2_data_window

0x54a5,	// (0x000054a5) popup_ai2_link_window_ParamLimits

0x54a5,	// (0x000054a5) popup_ai2_link_window

0x3785,	// (0x00003785) bg_popup_sub_pane_cp4_ParamLimits

0x3785,	// (0x00003785) bg_popup_sub_pane_cp4

0x54b9,	// (0x000054b9) grid_ai2_link_pane_ParamLimits

0x54b9,	// (0x000054b9) grid_ai2_link_pane

0x54d0,	// (0x000054d0) popup_ai2_link_window_g1_ParamLimits

0x54d0,	// (0x000054d0) popup_ai2_link_window_g1

0x54dc,	// (0x000054dc) popup_ai2_link_window_g2_ParamLimits

0x54dc,	// (0x000054dc) popup_ai2_link_window_g2

0x0001,

0xae84,	// (0x0000ae84) popup_ai2_link_window_g_ParamLimits

0xae84,	// (0x0000ae84) popup_ai2_link_window_g

0x54eb,	// (0x000054eb) ai2_mp_button_pane

0x54f3,	// (0x000054f3) ai2_mp_volume_pane

0x3a41,	// (0x00003a41) bg_popup_sub_pane_cp5_ParamLimits

0x3a41,	// (0x00003a41) bg_popup_sub_pane_cp5

0x54fb,	// (0x000054fb) heading_ai2_gene_pane_ParamLimits

0x54fb,	// (0x000054fb) heading_ai2_gene_pane

0x5507,	// (0x00005507) list_ai2_gene_pane_ParamLimits

0x5507,	// (0x00005507) list_ai2_gene_pane

0x554f,	// (0x0000554f) cell_ai2_link_pane_ParamLimits

0x554f,	// (0x0000554f) cell_ai2_link_pane

0x5565,	// (0x00005565) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5636,	// (0x00005636) ai2_mp_volume_pane_g1

0x563e,	// (0x0000563e) ai2_mp_volume_pane_g2

0x55ab,	// (0x000055ab) list_ai2_gene_pane_t1

0x5646,	// (0x00005646) ai2_mp_volume_pane_g3

0x0002,

0xae9d,	// (0x0000ae9d) ai2_mp_volume_pane_g

0x564e,	// (0x0000564e) volume_small_pane_cp3

0x5657,	// (0x00005657) aid_size_cell_ai2_button

0x565f,	// (0x0000565f) grid_ai2_button_pane

0x5668,	// (0x00005668) cell_ai2_button_pane_ParamLimits

0x5668,	// (0x00005668) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x55f6,	// (0x000055f6) ai2_gene_pane_t1_ParamLimits

0x55f6,	// (0x000055f6) ai2_gene_pane_t1

0xc297,	// (0x0000c297) aid_height_parent_landscape

0xd10b,	// (0x0000d10b) aid_height_set_list

0x4df4,	// (0x00004df4) aid_size_parent

0x51de,	// (0x000051de) aid_size_cell_graphic_pane_ParamLimits

0x5517,	// (0x00005517) popup_ai2_data_window_g1_ParamLimits

0x5517,	// (0x00005517) popup_ai2_data_window_g1

0x5523,	// (0x00005523) ai2_news_ticker_pane_g1

0x552b,	// (0x0000552b) ai2_news_ticker_pane_g2

0x0001,

0xae89,	// (0x0000ae89) ai2_news_ticker_pane_g

0x5533,	// (0x00005533) ai2_news_ticker_pane_t1

0x5541,	// (0x00005541) ai2_news_ticker_pane_t2

0x0001,

0xae8e,	// (0x0000ae8e) ai2_news_ticker_pane_t

0x556e,	// (0x0000556e) heading_ai2_gene_pane_g1

0x5576,	// (0x00005576) heading_ai2_gene_pane_t1_ParamLimits

0x5576,	// (0x00005576) heading_ai2_gene_pane_t1

0x558b,	// (0x0000558b) list_highlight_pane_cp6

0x5593,	// (0x00005593) ai2_gene_pane_ParamLimits

0x5593,	// (0x00005593) ai2_gene_pane

0x55b9,	// (0x000055b9) list_ai2_gene_pane_t2

0x0001,

0xae93,	// (0x0000ae93) list_ai2_gene_pane_t

0x55c7,	// (0x000055c7) list_highlight_pane_cp8_ParamLimits

0x55c7,	// (0x000055c7) list_highlight_pane_cp8

0x55d8,	// (0x000055d8) ai2_gene_pane_g1_ParamLimits

0x55d8,	// (0x000055d8) ai2_gene_pane_g1

0x55ea,	// (0x000055ea) ai2_gene_pane_g2_ParamLimits

0x55ea,	// (0x000055ea) ai2_gene_pane_g2

0x0001,

0xae98,	// (0x0000ae98) ai2_gene_pane_g_ParamLimits

0xae98,	// (0x0000ae98) ai2_gene_pane_g

0x0d91,	// (0x00000d91) scroll_pane_cp12

0xc256,	// (0x0000c256) control_pane_t3_ParamLimits

0xc256,	// (0x0000c256) control_pane_t3

0x286f,	// (0x0000286f) status_small_pane_g8_ParamLimits

0x286f,	// (0x0000286f) status_small_pane_g8

0xc39c,	// (0x0000c39c) popup_find_window_ParamLimits

0xc61d,	// (0x0000c61d) popup_note_image_window_ParamLimits

0x0e28,	// (0x00000e28) list_double2_graphic_pane_vc_g1_ParamLimits

0x0e28,	// (0x00000e28) list_double2_graphic_pane_vc_g1

0x0dae,	// (0x00000dae) list_double2_graphic_pane_vc_g2_ParamLimits

0x0dae,	// (0x00000dae) list_double2_graphic_pane_vc_g2

0x0dba,	// (0x00000dba) list_double2_graphic_pane_vc_g3_ParamLimits

0x0dba,	// (0x00000dba) list_double2_graphic_pane_vc_g3

0x0002,

0xac6d,	// (0x0000ac6d) list_double2_graphic_pane_vc_g_ParamLimits

0xac6d,	// (0x0000ac6d) list_double2_graphic_pane_vc_g

0x3579,	// (0x00003579) list_double2_graphic_pane_vc_t1_ParamLimits

0x3579,	// (0x00003579) list_double2_graphic_pane_vc_t1

0x0dae,	// (0x00000dae) list_single_heading_pane_vc_g1_ParamLimits

0x0dae,	// (0x00000dae) list_single_heading_pane_vc_g1

0x0dba,	// (0x00000dba) list_single_heading_pane_vc_g2_ParamLimits

0x0dba,	// (0x00000dba) list_single_heading_pane_vc_g2

0x0001,

0xaa8a,	// (0x0000aa8a) list_single_heading_pane_vc_g_ParamLimits

0xaa8a,	// (0x0000aa8a) list_single_heading_pane_vc_g

0x367e,	// (0x0000367e) list_single_heading_pane_vc_t1_ParamLimits

0x367e,	// (0x0000367e) list_single_heading_pane_vc_t1

0x3694,	// (0x00003694) list_single_heading_pane_vc_t2_ParamLimits

0x3694,	// (0x00003694) list_single_heading_pane_vc_t2

0x0001,

0xac95,	// (0x0000ac95) list_single_heading_pane_vc_t_ParamLimits

0xac95,	// (0x0000ac95) list_single_heading_pane_vc_t

0x36c6,	// (0x000036c6) list_setting_number_pane_vc_g1_ParamLimits

0x36c6,	// (0x000036c6) list_setting_number_pane_vc_g1

0x36d2,	// (0x000036d2) list_setting_number_pane_vc_g2_ParamLimits

0x36d2,	// (0x000036d2) list_setting_number_pane_vc_g2

0x0001,

0xac9a,	// (0x0000ac9a) list_setting_number_pane_vc_g_ParamLimits

0xac9a,	// (0x0000ac9a) list_setting_number_pane_vc_g

0x36de,	// (0x000036de) list_setting_number_pane_vc_t1_ParamLimits

0x36de,	// (0x000036de) list_setting_number_pane_vc_t1

0x36f2,	// (0x000036f2) list_setting_number_pane_vc_t2_ParamLimits

0x36f2,	// (0x000036f2) list_setting_number_pane_vc_t2

0x370c,	// (0x0000370c) list_setting_number_pane_vc_t3_ParamLimits

0x370c,	// (0x0000370c) list_setting_number_pane_vc_t3

0x0002,

0xac9f,	// (0x0000ac9f) list_setting_number_pane_vc_t_ParamLimits

0xac9f,	// (0x0000ac9f) list_setting_number_pane_vc_t

0x3734,	// (0x00003734) set_value_pane_vc_ParamLimits

0x3734,	// (0x00003734) set_value_pane_vc

0x4ff7,	// (0x00004ff7) list_double2_graphic_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_double2_graphic_pane_vc

0x500a,	// (0x0000500a) list_double2_large_graphic_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_double2_large_graphic_pane_vc

0x4ff7,	// (0x00004ff7) list_double2_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_double2_pane_vc

0x4ff7,	// (0x00004ff7) list_double_graphic_heading_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_double_graphic_heading_pane_vc

0x4ff7,	// (0x00004ff7) list_double_graphic_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_double_graphic_pane_vc

0x4ff7,	// (0x00004ff7) list_double_heading_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_double_heading_pane_vc

0x500a,	// (0x0000500a) list_double_large_graphic_pane_vc_ParamLimits

0x500a,	// (0x0000500a) list_double_large_graphic_pane_vc

0x4ff7,	// (0x00004ff7) list_double_number_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_double_number_pane_vc

0x4ff7,	// (0x00004ff7) list_double_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_double_pane_vc

0x4ff7,	// (0x00004ff7) list_double_time_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_double_time_pane_vc

0x4ff7,	// (0x00004ff7) list_setting_number_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_setting_number_pane_vc

0x4ff7,	// (0x00004ff7) list_setting_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_setting_pane_vc

0x4ff7,	// (0x00004ff7) list_single_graphic_heading_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_single_graphic_heading_pane_vc

0x4ff7,	// (0x00004ff7) list_single_heading_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_single_heading_pane_vc

0x4ff7,	// (0x00004ff7) list_single_number_heading_pane_vc_ParamLimits

0x4ff7,	// (0x00004ff7) list_single_number_heading_pane_vc

0x569b,	// (0x0000569b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x569b,	// (0x0000569b) list_double_graphic_heading_pane_vc_g1

0x56a7,	// (0x000056a7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x56a7,	// (0x000056a7) list_double_graphic_heading_pane_vc_g2

0x56b3,	// (0x000056b3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x56b3,	// (0x000056b3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xaea4,	// (0x0000aea4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xaea4,	// (0x0000aea4) list_double_graphic_heading_pane_vc_g

0x56bf,	// (0x000056bf) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56bf,	// (0x000056bf) list_double_graphic_heading_pane_vc_t1

0x56db,	// (0x000056db) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x56db,	// (0x000056db) list_double_graphic_heading_pane_vc_t2

0x0001,

0xaeab,	// (0x0000aeab) list_double_graphic_heading_pane_vc_t_ParamLimits

0xaeab,	// (0x0000aeab) list_double_graphic_heading_pane_vc_t

0x36c6,	// (0x000036c6) list_setting_pane_vc_g1_ParamLimits

0x36c6,	// (0x000036c6) list_setting_pane_vc_g1

0x36d2,	// (0x000036d2) list_setting_pane_vc_g2_ParamLimits

0x36d2,	// (0x000036d2) list_setting_pane_vc_g2

0x0001,

0xac9a,	// (0x0000ac9a) list_setting_pane_vc_g_ParamLimits

0xac9a,	// (0x0000ac9a) list_setting_pane_vc_g

0x593e,	// (0x0000593e) list_setting_pane_vc_t1_ParamLimits

0x593e,	// (0x0000593e) list_setting_pane_vc_t1

0x5958,	// (0x00005958) list_setting_pane_vc_t2_ParamLimits

0x5958,	// (0x00005958) list_setting_pane_vc_t2

0x0001,

0xaeee,	// (0x0000aeee) list_setting_pane_vc_t_ParamLimits

0xaeee,	// (0x0000aeee) list_setting_pane_vc_t

0x3734,	// (0x00003734) set_value_pane_cp_vc_ParamLimits

0x3734,	// (0x00003734) set_value_pane_cp_vc

0x0dae,	// (0x00000dae) list_single_number_heading_pane_vc_g1_ParamLimits

0x0dae,	// (0x00000dae) list_single_number_heading_pane_vc_g1

0x0dba,	// (0x00000dba) list_single_number_heading_pane_vc_g2_ParamLimits

0x0dba,	// (0x00000dba) list_single_number_heading_pane_vc_g2

0x0001,

0xaa8a,	// (0x0000aa8a) list_single_number_heading_pane_vc_g_ParamLimits

0xaa8a,	// (0x0000aa8a) list_single_number_heading_pane_vc_g

0x367e,	// (0x0000367e) list_single_number_heading_pane_vc_t1_ParamLimits

0x367e,	// (0x0000367e) list_single_number_heading_pane_vc_t1

0x5970,	// (0x00005970) list_single_number_heading_pane_vc_t2_ParamLimits

0x5970,	// (0x00005970) list_single_number_heading_pane_vc_t2

0x0e16,	// (0x00000e16) list_single_number_heading_pane_vc_t3_ParamLimits

0x0e16,	// (0x00000e16) list_single_number_heading_pane_vc_t3

0x0002,

0xaef3,	// (0x0000aef3) list_single_number_heading_pane_vc_t_ParamLimits

0xaef3,	// (0x0000aef3) list_single_number_heading_pane_vc_t

0x0e28,	// (0x00000e28) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0e28,	// (0x00000e28) list_single_graphic_heading_pane_vc_g1

0x0dae,	// (0x00000dae) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0dae,	// (0x00000dae) list_single_graphic_heading_pane_vc_g4

0x0dba,	// (0x00000dba) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0dba,	// (0x00000dba) list_single_graphic_heading_pane_vc_g5

0x0002,

0xac6d,	// (0x0000ac6d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xac6d,	// (0x0000ac6d) list_single_graphic_heading_pane_vc_g

0x367e,	// (0x0000367e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x367e,	// (0x0000367e) list_single_graphic_heading_pane_vc_t1

0x5984,	// (0x00005984) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5984,	// (0x00005984) list_single_graphic_heading_pane_vc_t2

0x0001,

0xaefa,	// (0x0000aefa) list_single_graphic_heading_pane_vc_t_ParamLimits

0xaefa,	// (0x0000aefa) list_single_graphic_heading_pane_vc_t

0x0dae,	// (0x00000dae) list_double2_pane_vc_g1_ParamLimits

0x0dae,	// (0x00000dae) list_double2_pane_vc_g1

0x0dba,	// (0x00000dba) list_double2_pane_vc_g2_ParamLimits

0x0dba,	// (0x00000dba) list_double2_pane_vc_g2

0x0001,

0xaa8a,	// (0x0000aa8a) list_double2_pane_vc_g_ParamLimits

0xaa8a,	// (0x0000aa8a) list_double2_pane_vc_g

0x4f94,	// (0x00004f94) list_double2_pane_vc_t1_ParamLimits

0x4f94,	// (0x00004f94) list_double2_pane_vc_t1

0x5998,	// (0x00005998) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5998,	// (0x00005998) list_double2_large_graphic_pane_vc_g1

0x59a4,	// (0x000059a4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x59a4,	// (0x000059a4) list_double2_large_graphic_pane_vc_g2

0x59b0,	// (0x000059b0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x59b0,	// (0x000059b0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xaeff,	// (0x0000aeff) list_double2_large_graphic_pane_vc_g_ParamLimits

0xaeff,	// (0x0000aeff) list_double2_large_graphic_pane_vc_g

0x59bc,	// (0x000059bc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59bc,	// (0x000059bc) list_double2_large_graphic_pane_vc_t1

0x59d2,	// (0x000059d2) list_double_time_pane_vc_g1_ParamLimits

0x59d2,	// (0x000059d2) list_double_time_pane_vc_g1

0x59de,	// (0x000059de) list_double_time_pane_vc_g2_ParamLimits

0x59de,	// (0x000059de) list_double_time_pane_vc_g2

0x0001,

0xaf06,	// (0x0000af06) list_double_time_pane_vc_g_ParamLimits

0xaf06,	// (0x0000af06) list_double_time_pane_vc_g

0x59ea,	// (0x000059ea) list_double_time_pane_vc_t1_ParamLimits

0x59ea,	// (0x000059ea) list_double_time_pane_vc_t1

0x5a0e,	// (0x00005a0e) list_double_time_pane_vc_t2_ParamLimits

0x5a0e,	// (0x00005a0e) list_double_time_pane_vc_t2

0x5a38,	// (0x00005a38) list_double_time_pane_vc_t3_ParamLimits

0x5a38,	// (0x00005a38) list_double_time_pane_vc_t3

0x5a4a,	// (0x00005a4a) list_double_time_pane_vc_t4_ParamLimits

0x5a4a,	// (0x00005a4a) list_double_time_pane_vc_t4

0x0003,

0xaf0b,	// (0x0000af0b) list_double_time_pane_vc_t_ParamLimits

0xaf0b,	// (0x0000af0b) list_double_time_pane_vc_t

0x0dae,	// (0x00000dae) list_double_pane_vc_g1_ParamLimits

0x0dae,	// (0x00000dae) list_double_pane_vc_g1

0x0dba,	// (0x00000dba) list_double_pane_vc_g2_ParamLimits

0x0dba,	// (0x00000dba) list_double_pane_vc_g2

0x0001,

0xaa8a,	// (0x0000aa8a) list_double_pane_vc_g_ParamLimits

0xaa8a,	// (0x0000aa8a) list_double_pane_vc_g

0x5a5e,	// (0x00005a5e) list_double_pane_vc_t1_ParamLimits

0x5a5e,	// (0x00005a5e) list_double_pane_vc_t1

0x5a72,	// (0x00005a72) list_double_pane_vc_t2_ParamLimits

0x5a72,	// (0x00005a72) list_double_pane_vc_t2

0x0001,

0xaf14,	// (0x0000af14) list_double_pane_vc_t_ParamLimits

0xaf14,	// (0x0000af14) list_double_pane_vc_t

0x0dae,	// (0x00000dae) list_double_number_pane_vc_g1_ParamLimits

0x0dae,	// (0x00000dae) list_double_number_pane_vc_g1

0x0dba,	// (0x00000dba) list_double_number_pane_vc_g2_ParamLimits

0x0dba,	// (0x00000dba) list_double_number_pane_vc_g2

0x0001,

0xaa8a,	// (0x0000aa8a) list_double_number_pane_vc_g_ParamLimits

0xaa8a,	// (0x0000aa8a) list_double_number_pane_vc_g

0x5a8a,	// (0x00005a8a) list_double_number_pane_vc_t1_ParamLimits

0x5a8a,	// (0x00005a8a) list_double_number_pane_vc_t1

0x5a9c,	// (0x00005a9c) list_double_number_pane_vc_t2_ParamLimits

0x5a9c,	// (0x00005a9c) list_double_number_pane_vc_t2

0x5a72,	// (0x00005a72) list_double_number_pane_vc_t3_ParamLimits

0x5a72,	// (0x00005a72) list_double_number_pane_vc_t3

0x0002,

0xaf19,	// (0x0000af19) list_double_number_pane_vc_t_ParamLimits

0xaf19,	// (0x0000af19) list_double_number_pane_vc_t

0x5ab0,	// (0x00005ab0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5ab0,	// (0x00005ab0) list_double_large_graphic_pane_vc_g1

0x5abc,	// (0x00005abc) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5abc,	// (0x00005abc) list_double_large_graphic_pane_vc_g2

0x59b0,	// (0x000059b0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x59b0,	// (0x000059b0) list_double_large_graphic_pane_vc_g3

0x5acb,	// (0x00005acb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5acb,	// (0x00005acb) list_double_large_graphic_pane_vc_g4

0x0003,

0xaf20,	// (0x0000af20) list_double_large_graphic_pane_vc_g_ParamLimits

0xaf20,	// (0x0000af20) list_double_large_graphic_pane_vc_g

0x5ad7,	// (0x00005ad7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5ad7,	// (0x00005ad7) list_double_large_graphic_pane_vc_t1

0x5aeb,	// (0x00005aeb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5aeb,	// (0x00005aeb) list_double_large_graphic_pane_vc_t2

0x0001,

0xaf29,	// (0x0000af29) list_double_large_graphic_pane_vc_t_ParamLimits

0xaf29,	// (0x0000af29) list_double_large_graphic_pane_vc_t

0x56a7,	// (0x000056a7) list_double_heading_pane_vc_g1_ParamLimits

0x56a7,	// (0x000056a7) list_double_heading_pane_vc_g1

0x56b3,	// (0x000056b3) list_double_heading_pane_vc_g2_ParamLimits

0x56b3,	// (0x000056b3) list_double_heading_pane_vc_g2

0x0001,

0xaf2e,	// (0x0000af2e) list_double_heading_pane_vc_g_ParamLimits

0xaf2e,	// (0x0000af2e) list_double_heading_pane_vc_g

0x5b04,	// (0x00005b04) list_double_heading_pane_vc_t1_ParamLimits

0x5b04,	// (0x00005b04) list_double_heading_pane_vc_t1

0x367e,	// (0x0000367e) list_double_heading_pane_vc_t2_ParamLimits

0x367e,	// (0x0000367e) list_double_heading_pane_vc_t2

0x0001,

0xaf33,	// (0x0000af33) list_double_heading_pane_vc_t_ParamLimits

0xaf33,	// (0x0000af33) list_double_heading_pane_vc_t

0x0e28,	// (0x00000e28) list_double_graphic_pane_vc_g1_ParamLimits

0x0e28,	// (0x00000e28) list_double_graphic_pane_vc_g1

0x5b18,	// (0x00005b18) list_double_graphic_pane_vc_g2_ParamLimits

0x5b18,	// (0x00005b18) list_double_graphic_pane_vc_g2

0x5b27,	// (0x00005b27) list_double_graphic_pane_vc_g3_ParamLimits

0x5b27,	// (0x00005b27) list_double_graphic_pane_vc_g3

0x0002,

0xaf38,	// (0x0000af38) list_double_graphic_pane_vc_g_ParamLimits

0xaf38,	// (0x0000af38) list_double_graphic_pane_vc_g

0x5b33,	// (0x00005b33) list_double_graphic_pane_vc_t1_ParamLimits

0x5b33,	// (0x00005b33) list_double_graphic_pane_vc_t1

0x5b47,	// (0x00005b47) list_double_graphic_pane_vc_t2_ParamLimits

0x5b47,	// (0x00005b47) list_double_graphic_pane_vc_t2

0x0001,

0xaf3f,	// (0x0000af3f) list_double_graphic_pane_vc_t_ParamLimits

0xaf3f,	// (0x0000af3f) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb3ea,	// (0x0000b3ea) aid_size_cell_touch_ParamLimits

0xb3ea,	// (0x0000b3ea) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb59a,	// (0x0000b59a) touch_pane_ParamLimits

0xb59a,	// (0x0000b59a) touch_pane

0x126c,	// (0x0000126c) button_value_adjust_pane_cp2

0x126c,	// (0x0000126c) button_value_adjust_pane_cp4

0x128c,	// (0x0000128c) form_field_data_pane_cp2

0xbcdb,	// (0x0000bcdb) form_field_data_wide_pane_cp2

0x1aa9,	// (0x00001aa9) bg_scroll_pane_ParamLimits

0x1ac8,	// (0x00001ac8) scroll_handle_pane_ParamLimits

0x1adc,	// (0x00001adc) scroll_sc2_down_pane_ParamLimits

0x1adc,	// (0x00001adc) scroll_sc2_down_pane

0x1b03,	// (0x00001b03) scroll_sc2_up_pane_ParamLimits

0x1b03,	// (0x00001b03) scroll_sc2_up_pane

0xd4cc,	// (0x0000d4cc) grid_wheel_folder_pane_g1_ParamLimits

0xd4cc,	// (0x0000d4cc) grid_wheel_folder_pane_g1

0x21b3,	// (0x000021b3) clock_nsta_pane_cp2_ParamLimits

0x21b3,	// (0x000021b3) clock_nsta_pane_cp2

0x2ac6,	// (0x00002ac6) listscroll_midp_pane_ParamLimits

0xc064,	// (0x0000c064) midp_canvas_pane

0x2a32,	// (0x00002a32) nsta_clock_indic_pane

0x2a90,	// (0x00002a90) listscroll_form_pane_vc

0x2ab4,	// (0x00002ab4) listscroll_set_pane_vc_ParamLimits

0x2ab4,	// (0x00002ab4) listscroll_set_pane_vc

0xca51,	// (0x0000ca51) clock_nsta_pane

0xca7b,	// (0x0000ca7b) indicator_nsta_pane

0x34e3,	// (0x000034e3) bg_popup_sub_pane_cp2_ParamLimits

0x34f7,	// (0x000034f7) find_pane_cp2_ParamLimits

0x34f7,	// (0x000034f7) find_pane_cp2

0x350d,	// (0x0000350d) grid_toobar_pane_ParamLimits

0x3744,	// (0x00003744) list_form_gen_pane_vc_ParamLimits

0x3744,	// (0x00003744) list_form_gen_pane_vc

0x375a,	// (0x0000375a) scroll_pane_cp8_vc_ParamLimits

0x375a,	// (0x0000375a) scroll_pane_cp8_vc

0x3873,	// (0x00003873) data_form_wide_pane_vc_ParamLimits

0x3873,	// (0x00003873) data_form_wide_pane_vc

0x387f,	// (0x0000387f) form_field_data_wide_pane_vc_g1

0x3887,	// (0x00003887) form_field_data_wide_pane_vc_t1_ParamLimits

0x3887,	// (0x00003887) form_field_data_wide_pane_vc_t1

0x1346,	// (0x00001346) input_focus_pane_cp6_vc_ParamLimits

0x1346,	// (0x00001346) input_focus_pane_cp6_vc

0xce7c,	// (0x0000ce7c) list_midp_pane_ParamLimits

0x5244,	// (0x00005244) scroll_pane_cp16_ParamLimits

0x5244,	// (0x00005244) scroll_pane_cp16

0x3c64,	// (0x00003c64) button_value_adjust_pane_ParamLimits

0x3c64,	// (0x00003c64) button_value_adjust_pane

0xd11c,	// (0x0000d11c) button_value_adjust_pane_cp6_ParamLimits

0xd11c,	// (0x0000d11c) button_value_adjust_pane_cp6

0xd232,	// (0x0000d232) settings_code_pane_cp_ParamLimits

0xd232,	// (0x0000d232) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xabc0,	// (0x0000abc0) cell_touch_pane_g

0xd3ab,	// (0x0000d3ab) cell_touch_pane_cp_ParamLimits

0xd3ab,	// (0x0000d3ab) cell_touch_pane_cp

0xd3c7,	// (0x0000d3c7) cell_touch_pane_ParamLimits

0xd3c7,	// (0x0000d3c7) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x56f3,	// (0x000056f3) list_set_graphic_pane_vc_g1_ParamLimits

0x56f3,	// (0x000056f3) list_set_graphic_pane_vc_g1

0x56ff,	// (0x000056ff) list_set_graphic_pane_vc_g2_ParamLimits

0x56ff,	// (0x000056ff) list_set_graphic_pane_vc_g2

0x0001,

0xaeb0,	// (0x0000aeb0) list_set_graphic_pane_vc_g_ParamLimits

0xaeb0,	// (0x0000aeb0) list_set_graphic_pane_vc_g

0x570b,	// (0x0000570b) text_primary_small_cp13_vc_ParamLimits

0x570b,	// (0x0000570b) text_primary_small_cp13_vc

0x5723,	// (0x00005723) list_set_graphic_pane_vc_ParamLimits

0x5723,	// (0x00005723) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05d5,	// (0x000005d5) setting_code_pane_vc_t1

0x5736,	// (0x00005736) set_text_pane_vc_t1_ParamLimits

0x5736,	// (0x00005736) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5753,	// (0x00005753) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x05a4,	// (0x000005a4) setting_slider_graphic_pane_vc_g1

0x575d,	// (0x0000575d) setting_slider_graphic_pane_vc_t1

0x576d,	// (0x0000576d) setting_slider_graphic_pane_vc_t2

0x0001,

0xaeb5,	// (0x0000aeb5) setting_slider_graphic_pane_vc_t

0x577d,	// (0x0000577d) slider_set_pane_cp_vc

0x5785,	// (0x00005785) slider_set_pane_vc_g1

0x578e,	// (0x0000578e) slider_set_pane_vc_g2

0x0006,

0xaeba,	// (0x0000aeba) slider_set_pane_vc_g

0x1473,	// (0x00001473) set_opt_bg_pane_g1_copy1

0x147b,	// (0x0000147b) set_opt_bg_pane_g2_copy1

0x57ba,	// (0x000057ba) set_opt_bg_pane_g3_copy1

0x148b,	// (0x0000148b) set_opt_bg_pane_g4_copy1

0x1493,	// (0x00001493) set_opt_bg_pane_g5_copy1

0x149b,	// (0x0000149b) set_opt_bg_pane_g6_copy1

0x57c2,	// (0x000057c2) set_opt_bg_pane_g7_copy1

0x57cc,	// (0x000057cc) set_opt_bg_pane_g8_copy1

0x57d4,	// (0x000057d4) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x57dc,	// (0x000057dc) setting_slider_pane_vc_t1

0x57eb,	// (0x000057eb) setting_slider_pane_vc_t2

0x57fb,	// (0x000057fb) setting_slider_pane_vc_t3

0x0002,

0xaec9,	// (0x0000aec9) setting_slider_pane_vc_t

0x580b,	// (0x0000580b) slider_set_pane_vc

0x44a8,	// (0x000044a8) volume_set_pane_vc_g1

0x5813,	// (0x00005813) volume_set_pane_vc_g2

0x581c,	// (0x0000581c) volume_set_pane_vc_g3

0x5825,	// (0x00005825) volume_set_pane_vc_g4

0x582e,	// (0x0000582e) volume_set_pane_vc_g5

0x5837,	// (0x00005837) volume_set_pane_vc_g6

0x44d5,	// (0x000044d5) volume_set_pane_vc_g7

0x5840,	// (0x00005840) volume_set_pane_vc_g8

0x5849,	// (0x00005849) volume_set_pane_vc_g9

0x5852,	// (0x00005852) volume_set_pane_vc_g10

0x0009,

0xaed0,	// (0x0000aed0) volume_set_pane_vc_g

0x585b,	// (0x0000585b) volume_set_pane_vc

0x5863,	// (0x00005863) button_value_adjust_pane_cp1_vc

0x586d,	// (0x0000586d) list_highlight_pane_cp2_vc

0x5876,	// (0x00005876) list_set_pane_vc_ParamLimits

0x5876,	// (0x00005876) list_set_pane_vc

0x58d4,	// (0x000058d4) main_pane_set_vc_t1_ParamLimits

0x58d4,	// (0x000058d4) main_pane_set_vc_t1

0x58e9,	// (0x000058e9) main_pane_set_vc_t2_ParamLimits

0x58e9,	// (0x000058e9) main_pane_set_vc_t2

0x58fb,	// (0x000058fb) main_pane_set_vc_t3_ParamLimits

0x58fb,	// (0x000058fb) main_pane_set_vc_t3

0x590d,	// (0x0000590d) main_pane_set_vc_t4_ParamLimits

0x590d,	// (0x0000590d) main_pane_set_vc_t4

0x0003,

0xaee5,	// (0x0000aee5) main_pane_set_vc_t_ParamLimits

0xaee5,	// (0x0000aee5) main_pane_set_vc_t

0x591f,	// (0x0000591f) setting_code_pane_vc_ParamLimits

0x591f,	// (0x0000591f) setting_code_pane_vc

0x592e,	// (0x0000592e) setting_slider_graphic_pane_vc

0x592e,	// (0x0000592e) setting_slider_pane_vc

0x592e,	// (0x0000592e) setting_text_pane_vc

0x592e,	// (0x0000592e) setting_volume_pane_vc

0x5936,	// (0x00005936) scroll_pane_cp121_vc

0x125a,	// (0x0000125a) set_content_pane_vc

0x5b5f,	// (0x00005b5f) button_value_adjust_pane_g1

0x5b68,	// (0x00005b68) button_value_adjust_pane_g2

0x0001,

0xaf44,	// (0x0000af44) button_value_adjust_pane_g

0x5b71,	// (0x00005b71) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5b71,	// (0x00005b71) form_field_slider_wide_pane_vc_t1

0x5b85,	// (0x00005b85) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5b85,	// (0x00005b85) form_field_slider_wide_pane_vc_t2

0x0002,

0xaf49,	// (0x0000af49) form_field_slider_wide_pane_vc_t_ParamLimits

0xaf49,	// (0x0000af49) form_field_slider_wide_pane_vc_t

0x081f,	// (0x0000081f) input_focus_pane_cp10_vc_ParamLimits

0x081f,	// (0x0000081f) input_focus_pane_cp10_vc

0x5bb1,	// (0x00005bb1) slider_cont_pane_cp1_vc_ParamLimits

0x5bb1,	// (0x00005bb1) slider_cont_pane_cp1_vc

0x5bc1,	// (0x00005bc1) slider_form_pane_g1_cp2

0x578e,	// (0x0000578e) slider_form_pane_g2_cp2

0x5bee,	// (0x00005bee) form_field_slider_pane_vc_t3

0x5bfc,	// (0x00005bfc) form_field_slider_pane_vc_t4

0x5c0a,	// (0x00005c0a) slider_form_pane_vc_ParamLimits

0x5c0a,	// (0x00005c0a) slider_form_pane_vc

0x5c17,	// (0x00005c17) form_field_slider_pane_vc_t1_ParamLimits

0x5c17,	// (0x00005c17) form_field_slider_pane_vc_t1

0x5b85,	// (0x00005b85) form_field_slider_pane_vc_t2_ParamLimits

0x5b85,	// (0x00005b85) form_field_slider_pane_vc_t2

0x0001,

0xaf5b,	// (0x0000af5b) form_field_slider_pane_vc_t_ParamLimits

0xaf5b,	// (0x0000af5b) form_field_slider_pane_vc_t

0x081f,	// (0x0000081f) input_focus_pane_cp9_vc_ParamLimits

0x081f,	// (0x0000081f) input_focus_pane_cp9_vc

0x5c33,	// (0x00005c33) slider_cont_pane_vc_ParamLimits

0x5c33,	// (0x00005c33) slider_cont_pane_vc

0x5c45,	// (0x00005c45) list_form_graphic_pane_cp_vc_ParamLimits

0x5c45,	// (0x00005c45) list_form_graphic_pane_cp_vc

0x387f,	// (0x0000387f) form_field_popup_wide_pane_vc_g1

0x5c5a,	// (0x00005c5a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5c5a,	// (0x00005c5a) form_field_popup_wide_pane_vc_t1

0x1346,	// (0x00001346) input_focus_pane_cp8_vc_ParamLimits

0x1346,	// (0x00001346) input_focus_pane_cp8_vc

0x5c9f,	// (0x00005c9f) list_form_wide_pane_vc_ParamLimits

0x5c9f,	// (0x00005c9f) list_form_wide_pane_vc

0x5cab,	// (0x00005cab) list_form_graphic_pane_vc_g1

0x5cb3,	// (0x00005cb3) list_form_graphic_pane_vc_t1_ParamLimits

0x5cb3,	// (0x00005cb3) list_form_graphic_pane_vc_t1

0x04f9,	// (0x000004f9) list_highlight_pane_cp5_vc_ParamLimits

0x04f9,	// (0x000004f9) list_highlight_pane_cp5_vc

0x5ccf,	// (0x00005ccf) list_form_graphic_pane_vc_ParamLimits

0x5ccf,	// (0x00005ccf) list_form_graphic_pane_vc

0x387f,	// (0x0000387f) form_field_popup_pane_vc_g1

0x5ce5,	// (0x00005ce5) form_field_popup_pane_vc_t1_ParamLimits

0x5ce5,	// (0x00005ce5) form_field_popup_pane_vc_t1

0x1346,	// (0x00001346) input_focus_pane_cp7_vc_ParamLimits

0x1346,	// (0x00001346) input_focus_pane_cp7_vc

0x5cfc,	// (0x00005cfc) list_form_pane_vc_ParamLimits

0x5cfc,	// (0x00005cfc) list_form_pane_vc

0x5d08,	// (0x00005d08) data_form_pane_vc_t1_ParamLimits

0x5d08,	// (0x00005d08) data_form_pane_vc_t1

0x1473,	// (0x00001473) input_focus_pane_vc_g1

0x147b,	// (0x0000147b) input_focus_pane_vc_g2

0x1483,	// (0x00001483) input_focus_pane_vc_g3

0x148b,	// (0x0000148b) input_focus_pane_vc_g4

0x1493,	// (0x00001493) input_focus_pane_vc_g5

0x149b,	// (0x0000149b) input_focus_pane_vc_g6

0x14a3,	// (0x000014a3) input_focus_pane_vc_g7

0x14ab,	// (0x000014ab) input_focus_pane_vc_g8

0x14b3,	// (0x000014b3) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xab49,	// (0x0000ab49) input_focus_pane_vc_g

0x3873,	// (0x00003873) data_form_pane_vc_ParamLimits

0x3873,	// (0x00003873) data_form_pane_vc

0x387f,	// (0x0000387f) form_field_data_pane_vc_g1

0x5d23,	// (0x00005d23) form_field_data_pane_vc_t1_ParamLimits

0x5d23,	// (0x00005d23) form_field_data_pane_vc_t1

0x1346,	// (0x00001346) input_focus_pane_vc_ParamLimits

0x1346,	// (0x00001346) input_focus_pane_vc

0x5d3d,	// (0x00005d3d) button_value_adjust_pane_cp3_vc

0x5d45,	// (0x00005d45) button_value_adjust_pane_cp5_vc

0x5d4d,	// (0x00005d4d) form_field_data_pane_vc_ParamLimits

0x5d4d,	// (0x00005d4d) form_field_data_pane_vc

0x5d64,	// (0x00005d64) form_field_data_pane_vc_cp2

0x5d6c,	// (0x00005d6c) form_field_data_wide_pane_vc_ParamLimits

0x5d6c,	// (0x00005d6c) form_field_data_wide_pane_vc

0x5d82,	// (0x00005d82) form_field_data_wide_pane_vc_cp2

0x5d8a,	// (0x00005d8a) form_field_popup_pane_vc_ParamLimits

0x5d8a,	// (0x00005d8a) form_field_popup_pane_vc

0x5da1,	// (0x00005da1) form_field_popup_wide_pane_vc_ParamLimits

0x5da1,	// (0x00005da1) form_field_popup_wide_pane_vc

0x5db7,	// (0x00005db7) form_field_slider_pane_vc_ParamLimits

0x5db7,	// (0x00005db7) form_field_slider_pane_vc

0x5dca,	// (0x00005dca) form_field_slider_wide_pane_vc_ParamLimits

0x5dca,	// (0x00005dca) form_field_slider_wide_pane_vc

0xd3e5,	// (0x0000d3e5) grid_touch_1_pane_ParamLimits

0xd3e5,	// (0x0000d3e5) grid_touch_1_pane

0xd3f9,	// (0x0000d3f9) grid_touch_2_pane_ParamLimits

0xd3f9,	// (0x0000d3f9) grid_touch_2_pane

0x5e9f,	// (0x00005e9f) touch_pane_g1_ParamLimits

0x5e9f,	// (0x00005e9f) touch_pane_g1

0x5e01,	// (0x00005e01) cell_app_pane_cp_wide_ParamLimits

0x5e01,	// (0x00005e01) cell_app_pane_cp_wide

0x5e12,	// (0x00005e12) grid_popup_fast_wide_pane_ParamLimits

0x5e12,	// (0x00005e12) grid_popup_fast_wide_pane

0x5e26,	// (0x00005e26) scroll_pane_cp19_ParamLimits

0x5e26,	// (0x00005e26) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5e3a,	// (0x00005e3a) listscroll_popup_fast_wide_pane

0x1667,	// (0x00001667) grid_indicator_nsta_pane

0x5e42,	// (0x00005e42) clock_nsta_pane_g1

0x5e4b,	// (0x00005e4b) clock_nsta_pane_t1

0xd423,	// (0x0000d423) cell_indicator_nsta_pane_ParamLimits

0xd423,	// (0x0000d423) cell_indicator_nsta_pane

0x5e9f,	// (0x00005e9f) cell_indicator_nsta_pane_g1

0xd440,	// (0x0000d440) cell_indicator_nsta_pane_g2

0x0001,

0xf00a,	// (0x0000f00a) cell_indicator_nsta_pane_g

0x5ec3,	// (0x00005ec3) clock_nsta_pane_cp

0x5ecb,	// (0x00005ecb) indicator_nsta_pane_cp

0x5ed3,	// (0x00005ed3) nsta_clock_indic_pane_g1

0x066d,	// (0x0000066d) grid_indicator_pane

0x1bf8,	// (0x00001bf8) scroll_pane_cp29

0x20e0,	// (0x000020e0) indicator_nsta_pane_cp2_ParamLimits

0x20e0,	// (0x000020e0) indicator_nsta_pane_cp2

0x04f9,	// (0x000004f9) main_apps_wheel_pane

0x3aef,	// (0x00003aef) form_midp_field_text_pane_ParamLimits

0x3c36,	// (0x00003c36) scroll_bar_cp050_ParamLimits

0x5f34,	// (0x00005f34) cell_indicator_pane_ParamLimits

0x5f34,	// (0x00005f34) cell_indicator_pane

0x5f4f,	// (0x00005f4f) cell_indicator_pane_g1

0xd456,	// (0x0000d456) grid_wheel_folder_pane_ParamLimits

0xd456,	// (0x0000d456) grid_wheel_folder_pane

0xd464,	// (0x0000d464) list_wheel_apps_pane_ParamLimits

0xd464,	// (0x0000d464) list_wheel_apps_pane

0xd472,	// (0x0000d472) main_apps_wheel_pane_g1_ParamLimits

0xd472,	// (0x0000d472) main_apps_wheel_pane_g1

0xd47e,	// (0x0000d47e) main_apps_wheel_pane_g2_ParamLimits

0xd47e,	// (0x0000d47e) main_apps_wheel_pane_g2

0x0001,

0xf00f,	// (0x0000f00f) main_apps_wheel_pane_g_ParamLimits

0xf00f,	// (0x0000f00f) main_apps_wheel_pane_g

0xd48c,	// (0x0000d48c) main_apps_wheel_pane_t1_ParamLimits

0xd48c,	// (0x0000d48c) main_apps_wheel_pane_t1

0xd4a0,	// (0x0000d4a0) list_wheel_apps_pane_g1

0xd4a8,	// (0x0000d4a8) list_wheel_apps_pane_g2

0xd4b0,	// (0x0000d4b0) list_wheel_apps_pane_g3

0xd4b8,	// (0x0000d4b8) list_wheel_apps_pane_g4

0xd4c2,	// (0x0000d4c2) list_wheel_apps_pane_g5

0x0004,

0xf014,	// (0x0000f014) list_wheel_apps_pane_g

0x23df,	// (0x000023df) navi_icon_text_pane

0xc945,	// (0x0000c945) aid_fill_nsta

0x6016,	// (0x00006016) navi_icon_text_pane_g1

0x6022,	// (0x00006022) navi_icon_text_pane_t1

0x2281,	// (0x00002281) list_set_graphic_pane_t1_ParamLimits

0x2281,	// (0x00002281) list_set_graphic_pane_t1

0x4388,	// (0x00004388) popup_midp_note_alarm_window_t6_ParamLimits

0x4388,	// (0x00004388) popup_midp_note_alarm_window_t6

0x439a,	// (0x0000439a) popup_midp_note_alarm_window_t7_ParamLimits

0x439a,	// (0x0000439a) popup_midp_note_alarm_window_t7

0x43ac,	// (0x000043ac) popup_midp_note_alarm_window_t8_ParamLimits

0x43ac,	// (0x000043ac) popup_midp_note_alarm_window_t8

0x43be,	// (0x000043be) popup_midp_note_alarm_window_t9_ParamLimits

0x43be,	// (0x000043be) popup_midp_note_alarm_window_t9

0x43d0,	// (0x000043d0) popup_midp_note_alarm_window_t10_ParamLimits

0x43d0,	// (0x000043d0) popup_midp_note_alarm_window_t10

0x43e2,	// (0x000043e2) popup_midp_note_alarm_window_t11_ParamLimits

0x43e2,	// (0x000043e2) popup_midp_note_alarm_window_t11

0x43f4,	// (0x000043f4) scroll_pane_cp17_ParamLimits

0x43f4,	// (0x000043f4) scroll_pane_cp17

0x44a8,	// (0x000044a8) volume_small_pane_cp_g1

0x6034,	// (0x00006034) volume_small_pane_cp_g2

0x603d,	// (0x0000603d) volume_small_pane_cp_g3

0x44ba,	// (0x000044ba) volume_small_pane_cp_g4

0x6046,	// (0x00006046) volume_small_pane_cp_g5

0x582e,	// (0x0000582e) volume_small_pane_cp_g6

0x44cc,	// (0x000044cc) volume_small_pane_cp_g7

0x604f,	// (0x0000604f) volume_small_pane_cp_g8

0x6058,	// (0x00006058) volume_small_pane_cp_g9

0x44de,	// (0x000044de) volume_small_pane_cp_g10

0x2626,	// (0x00002626) midp_ticker_pane_g1_ParamLimits

0x2632,	// (0x00002632) midp_ticker_pane_g2_ParamLimits

0xac15,	// (0x0000ac15) midp_ticker_pane_g_ParamLimits

0x263e,	// (0x0000263e) midp_ticker_pane_t1_ParamLimits

0xc969,	// (0x0000c969) aid_fill_nsta_2

0x3c22,	// (0x00003c22) list_form2_midp_pane

0x4faa,	// (0x00004faa) midp_editing_number_pane_ParamLimits

0x4fb9,	// (0x00004fb9) midp_ticker_pane_ParamLimits

0x6061,	// (0x00006061) form2_midp_field_pane

0x6085,	// (0x00006085) scroll_pane_cp51

0x60a5,	// (0x000060a5) form2_midp_button_pane_ParamLimits

0x60a5,	// (0x000060a5) form2_midp_button_pane

0x60b7,	// (0x000060b7) form2_midp_content_pane_ParamLimits

0x60b7,	// (0x000060b7) form2_midp_content_pane

0x60d1,	// (0x000060d1) form2_midp_field_choice_group_pane

0x60d9,	// (0x000060d9) form2_midp_field_pane_g1

0x60e1,	// (0x000060e1) form2_midp_field_pane_g2

0x60e9,	// (0x000060e9) form2_midp_field_pane_g3

0x60f1,	// (0x000060f1) form2_midp_field_pane_g4

0x0003,

0xafb2,	// (0x0000afb2) form2_midp_field_pane_g

0x60f9,	// (0x000060f9) form2_midp_gauge_slider_pane

0x6101,	// (0x00006101) form2_midp_gauge_wait_pane

0x6109,	// (0x00006109) form2_midp_image_pane_ParamLimits

0x6109,	// (0x00006109) form2_midp_image_pane

0x6124,	// (0x00006124) form2_midp_label_pane_ParamLimits

0x6124,	// (0x00006124) form2_midp_label_pane

0xd4f5,	// (0x0000d4f5) form2_midp_label_pane_cp_ParamLimits

0xd4f5,	// (0x0000d4f5) form2_midp_label_pane_cp

0x615e,	// (0x0000615e) form2_midp_string_pane_ParamLimits

0x615e,	// (0x0000615e) form2_midp_string_pane

0x6170,	// (0x00006170) form2_midp_text_pane_ParamLimits

0x6170,	// (0x00006170) form2_midp_text_pane

0x618b,	// (0x0000618b) form2_midp_time_pane

0x619b,	// (0x0000619b) input_focus_pane_cp51_ParamLimits

0x619b,	// (0x0000619b) input_focus_pane_cp51

0x61b3,	// (0x000061b3) form2_midp_label_pane_t1_ParamLimits

0x61b3,	// (0x000061b3) form2_midp_label_pane_t1

0x61f3,	// (0x000061f3) form2_mdip_text_pane_t1_ParamLimits

0x61f3,	// (0x000061f3) form2_mdip_text_pane_t1

0x620f,	// (0x0000620f) form2_midp_time_pane_t1

0x622a,	// (0x0000622a) form2_midp_gauge_slider_pane_t1

0xd516,	// (0x0000d516) form2_midp_gauge_slider_pane_t2

0xd52a,	// (0x0000d52a) form2_midp_gauge_slider_pane_t3

0x0002,

0xf024,	// (0x0000f024) form2_midp_gauge_slider_pane_t

0x6260,	// (0x00006260) form2_midp_slider_pane

0x626c,	// (0x0000626c) form2_midp_gauge_wait_pane_t1

0x627a,	// (0x0000627a) form2_midp_wait_pane_ParamLimits

0x627a,	// (0x0000627a) form2_midp_wait_pane

0xd53e,	// (0x0000d53e) list_single_2graphic_pane_cp4_ParamLimits

0xd53e,	// (0x0000d53e) list_single_2graphic_pane_cp4

0xcde8,	// (0x0000cde8) list_single_midp_graphic_pane_cp_ParamLimits

0xcde8,	// (0x0000cde8) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x62d4,	// (0x000062d4) list_single_2graphic_pane_g1_cp4

0x556e,	// (0x0000556e) list_single_2graphic_pane_g2_cp4

0x62dc,	// (0x000062dc) list_single_2graphic_pane_t1_cp4

0x04f9,	// (0x000004f9) list_highlight_pane_cp21

0x62eb,	// (0x000062eb) list_single_midp_graphic_pane_g4_cp

0x62fa,	// (0x000062fa) list_single_midp_graphic_pane_t1_cp

0xd554,	// (0x0000d554) form2_mdip_string_pane_t1_ParamLimits

0xd554,	// (0x0000d554) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1036,	// (0x00001036) list_double_large_graphic_pane_g5_ParamLimits

0x1036,	// (0x00001036) list_double_large_graphic_pane_g5

0x2ac6,	// (0x00002ac6) midp_form_pane_ParamLimits

0x04f9,	// (0x000004f9) main_apps_wheel_pane_ParamLimits

0xc69b,	// (0x0000c69b) popup_preview_window_ParamLimits

0xc69b,	// (0x0000c69b) popup_preview_window

0x3026,	// (0x00003026) popup_touch_info_window_ParamLimits

0x3026,	// (0x00003026) popup_touch_info_window

0x3044,	// (0x00003044) popup_touch_menu_window_ParamLimits

0x3044,	// (0x00003044) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x6432,	// (0x00006432) list_touch_menu_pane

0x643a,	// (0x0000643a) list_single_touch_menu_pane_ParamLimits

0x643a,	// (0x0000643a) list_single_touch_menu_pane

0x644e,	// (0x0000644e) list_single_touch_menu_pane_t1

0x04f9,	// (0x000004f9) bg_popup_sub_pane_cp7_ParamLimits

0x04f9,	// (0x000004f9) bg_popup_sub_pane_cp7

0x645c,	// (0x0000645c) heading_sub_pane

0x6464,	// (0x00006464) list_touch_info_pane_ParamLimits

0x6464,	// (0x00006464) list_touch_info_pane

0x6473,	// (0x00006473) list_single_touch_info_pane_ParamLimits

0x6473,	// (0x00006473) list_single_touch_info_pane

0x6485,	// (0x00006485) list_single_touch_info_pane_t1

0x6493,	// (0x00006493) list_single_touch_info_pane_t2

0x0001,

0xafc9,	// (0x0000afc9) list_single_touch_info_pane_t

0x2553,	// (0x00002553) bg_popup_heading_pane_cp

0x64a1,	// (0x000064a1) heading_sub_pane_t1

0x3785,	// (0x00003785) bg_popup_preview_window_pane_cp_ParamLimits

0x3785,	// (0x00003785) bg_popup_preview_window_pane_cp

0x645c,	// (0x0000645c) heading_preview_pane

0x6464,	// (0x00006464) list_preview_pane_ParamLimits

0x6464,	// (0x00006464) list_preview_pane

0x64af,	// (0x000064af) popup_preview_window_g1

0x6473,	// (0x00006473) list_single_preview_pane_ParamLimits

0x6473,	// (0x00006473) list_single_preview_pane

0x64b7,	// (0x000064b7) list_single_preview_pane_g1

0x64bf,	// (0x000064bf) list_single_preview_pane_t1

0x6485,	// (0x00006485) list_single_preview_pane_t2

0x0001,

0xafce,	// (0x0000afce) list_single_preview_pane_t

0x64cd,	// (0x000064cd) bg_popup_heading_pane_cp2_ParamLimits

0x64cd,	// (0x000064cd) bg_popup_heading_pane_cp2

0x64e3,	// (0x000064e3) heading_preview_pane_g1

0x64eb,	// (0x000064eb) heading_preview_pane_t1_ParamLimits

0x64eb,	// (0x000064eb) heading_preview_pane_t1

0x0690,	// (0x00000690) soft_indicator_pane_t1_ParamLimits

0x0d6e,	// (0x00000d6e) scroll_pane_ParamLimits

0x1af1,	// (0x00001af1) scroll_sc2_left_pane

0x1afa,	// (0x00001afa) scroll_sc2_right_pane

0x1b19,	// (0x00001b19) scroll_bg_pane_g1_ParamLimits

0x1b2e,	// (0x00001b2e) scroll_bg_pane_g2_ParamLimits

0x1b46,	// (0x00001b46) scroll_bg_pane_g3_ParamLimits

0xaba0,	// (0x0000aba0) scroll_bg_pane_g_ParamLimits

0x1b19,	// (0x00001b19) scroll_handle_pane_g1_ParamLimits

0x1b68,	// (0x00001b68) scroll_handle_pane_g2_ParamLimits

0x1b46,	// (0x00001b46) scroll_handle_pane_g3_ParamLimits

0xaba7,	// (0x0000aba7) scroll_handle_pane_g_ParamLimits

0x2af6,	// (0x00002af6) popup_choice_list_window_ParamLimits

0x2af6,	// (0x00002af6) popup_choice_list_window

0x34ef,	// (0x000034ef) choice_list_pane

0x35b7,	// (0x000035b7) cell_toolbar_pane_t1

0x35df,	// (0x000035df) toolbar_button_pane_ParamLimits

0x4a0c,	// (0x00004a0c) ai_gene_pane_1_t2_ParamLimits

0x4a0c,	// (0x00004a0c) ai_gene_pane_1_t2

0x0001,

0xadc3,	// (0x0000adc3) ai_gene_pane_1_t_ParamLimits

0xadc3,	// (0x0000adc3) ai_gene_pane_1_t

0x6508,	// (0x00006508) scroll_sc2_left_pane_g1

0x6508,	// (0x00006508) scroll_sc2_right_pane_g1

0x2ac6,	// (0x00002ac6) bg_popup_sub_pane_cp10

0x6512,	// (0x00006512) list_choice_list_pane

0x652b,	// (0x0000652b) list_single_choice_list_pane_ParamLimits

0x652b,	// (0x0000652b) list_single_choice_list_pane

0x653e,	// (0x0000653e) list_single_choice_list_pane_g1

0x1638,	// (0x00001638) list_single_choice_list_pane_t1_ParamLimits

0x1638,	// (0x00001638) list_single_choice_list_pane_t1

0x6546,	// (0x00006546) choice_list_pane_g1

0x654e,	// (0x0000654e) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x185c,	// (0x0000185c) title_pane_stacon_g2_ParamLimits

0x185c,	// (0x0000185c) title_pane_stacon_g2

0x0002,

0xab86,	// (0x0000ab86) title_pane_stacon_g_ParamLimits

0xab86,	// (0x0000ab86) title_pane_stacon_g

0x2553,	// (0x00002553) cursor_press_pane

0xc354,	// (0x0000c354) popup_fep_hwr_window_ParamLimits

0xc354,	// (0x0000c354) popup_fep_hwr_window

0x2c16,	// (0x00002c16) popup_fep_vkb_window_ParamLimits

0x2c16,	// (0x00002c16) popup_fep_vkb_window

0x655c,	// (0x0000655c) cursor_press_pane_g1

0x0002,

0xf038,	// (0x0000f038) fep_vkb_side_pane_g_ParamLimits

0x659d,	// (0x0000659d) fep_hwr_candidate_pane_ParamLimits

0x659d,	// (0x0000659d) fep_hwr_candidate_pane

0x65c7,	// (0x000065c7) fep_hwr_side_pane_ParamLimits

0x65c7,	// (0x000065c7) fep_hwr_side_pane

0x65e7,	// (0x000065e7) fep_hwr_top_pane_ParamLimits

0x65e7,	// (0x000065e7) fep_hwr_top_pane

0x65ff,	// (0x000065ff) fep_hwr_write_pane_ParamLimits

0x65ff,	// (0x000065ff) fep_hwr_write_pane

0xf038,	// (0x0000f038) fep_vkb_side_pane_g

0x6639,	// (0x00006639) fep_hwr_top_pane_g1

0x664b,	// (0x0000664b) fep_hwr_top_pane_g2

0x665d,	// (0x0000665d) fep_hwr_top_pane_g3

0x0002,

0xafd3,	// (0x0000afd3) fep_hwr_top_pane_g

0x6672,	// (0x00006672) fep_hwr_top_text_pane

0x1cbe,	// (0x00001cbe) fep_hwr_top_text_pane_g1

0x674a,	// (0x0000674a) fep_hwr_top_text_pane_t1

0x679a,	// (0x0000679a) fep_hwr_candidate_pane_g1

0x6a03,	// (0x00006a03) fep_vkb_keypad_pane_g3_ParamLimits

0x6a03,	// (0x00006a03) fep_vkb_keypad_pane_g3

0x6a2b,	// (0x00006a2b) fep_vkb_keypad_pane_g4_ParamLimits

0x6a2b,	// (0x00006a2b) fep_vkb_keypad_pane_g4

0x6a9a,	// (0x00006a9a) fep_vkb_bottom_pane_g2_ParamLimits

0x6a9a,	// (0x00006a9a) fep_vkb_bottom_pane_g2

0x0001,

0xaffe,	// (0x0000affe) fep_vkb_bottom_pane_g_ParamLimits

0xaffe,	// (0x0000affe) fep_vkb_bottom_pane_g

0x6508,	// (0x00006508) cell_vkb_side_pane_g2

0x0001,

0xb008,	// (0x0000b008) cell_vkb_side_pane_g

0x6b25,	// (0x00006b25) cell_vkb_side_pane_t1

0x6b33,	// (0x00006b33) cell_vkb_side_pane_t1_copy1

0x6508,	// (0x00006508) bg_fep_vkb_candidate_pane_g2

0x6c5f,	// (0x00006c5f) cell_vkb_candidate_pane_ParamLimits

0x67ce,	// (0x000067ce) aid_size_cell_vkb_ParamLimits

0x67ce,	// (0x000067ce) aid_size_cell_vkb

0x6c5f,	// (0x00006c5f) cell_vkb_candidate_pane

0x6c93,	// (0x00006c93) bg_popup_fep_shadow_pane_g1

0xd631,	// (0x0000d631) fep_vkb_bottom_pane_ParamLimits

0xd631,	// (0x0000d631) fep_vkb_bottom_pane

0x6890,	// (0x00006890) fep_vkb_candidate_pane_ParamLimits

0x6890,	// (0x00006890) fep_vkb_candidate_pane

0xd656,	// (0x0000d656) fep_vkb_keypad_pane_ParamLimits

0xd656,	// (0x0000d656) fep_vkb_keypad_pane

0xd68b,	// (0x0000d68b) fep_vkb_side_pane_ParamLimits

0xd68b,	// (0x0000d68b) fep_vkb_side_pane

0xd6c7,	// (0x0000d6c7) fep_vkb_top_pane_ParamLimits

0xd6c7,	// (0x0000d6c7) fep_vkb_top_pane

0x695c,	// (0x0000695c) fep_vkb_top_pane_g1_ParamLimits

0x695c,	// (0x0000695c) fep_vkb_top_pane_g1

0x696b,	// (0x0000696b) fep_vkb_top_pane_g2_ParamLimits

0x696b,	// (0x0000696b) fep_vkb_top_pane_g2

0x697a,	// (0x0000697a) fep_vkb_top_pane_g3_ParamLimits

0x697a,	// (0x0000697a) fep_vkb_top_pane_g3

0x0003,

0xafee,	// (0x0000afee) fep_vkb_top_pane_g_ParamLimits

0xafee,	// (0x0000afee) fep_vkb_top_pane_g

0x6998,	// (0x00006998) fep_vkb_top_text_pane_ParamLimits

0x6998,	// (0x00006998) fep_vkb_top_text_pane

0xd6fc,	// (0x0000d6fc) fep_vkb_side_pane_g1_ParamLimits

0xd6fc,	// (0x0000d6fc) fep_vkb_side_pane_g1

0x69f2,	// (0x000069f2) grid_vkb_side_pane_ParamLimits

0x69f2,	// (0x000069f2) grid_vkb_side_pane

0x6c9b,	// (0x00006c9b) bg_popup_fep_shadow_pane_g2

0x6ca4,	// (0x00006ca4) bg_popup_fep_shadow_pane_g3

0x6cac,	// (0x00006cac) bg_popup_fep_shadow_pane_g4

0x6cb5,	// (0x00006cb5) bg_popup_fep_shadow_pane_g5

0x6cbf,	// (0x00006cbf) bg_popup_fep_shadow_pane_g6

0x6cc7,	// (0x00006cc7) bg_popup_fep_shadow_pane_g7

0x1493,	// (0x00001493) bg_popup_fep_shadow_pane_g8

0x6a49,	// (0x00006a49) grid_vkb_keypad_number_pane_ParamLimits

0x6a49,	// (0x00006a49) grid_vkb_keypad_number_pane

0x6a59,	// (0x00006a59) grid_vkb_keypad_pane_ParamLimits

0x6a59,	// (0x00006a59) grid_vkb_keypad_pane

0x6a7f,	// (0x00006a7f) fep_vkb_bottom_pane_g1_ParamLimits

0x6a7f,	// (0x00006a7f) fep_vkb_bottom_pane_g1

0x6aa8,	// (0x00006aa8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6aa8,	// (0x00006aa8) grid_vkb_keypad_bottom_left_pane

0x6abd,	// (0x00006abd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6abd,	// (0x00006abd) grid_vkb_keypad_bottom_right_pane

0x6ad2,	// (0x00006ad2) fep_vkb_top_text_pane_g1

0xd743,	// (0x0000d743) fep_vkb_top_text_pane_t1

0xd755,	// (0x0000d755) cell_vkb_side_pane_ParamLimits

0xd755,	// (0x0000d755) cell_vkb_side_pane

0x6508,	// (0x00006508) cell_vkb_side_pane_g1

0x6b41,	// (0x00006b41) cell_vkb_keypad_pane_ParamLimits

0x6b41,	// (0x00006b41) cell_vkb_keypad_pane

0x6bb6,	// (0x00006bb6) cell_vkb_keypad_pane_g1

0x0008,

0xb01b,	// (0x0000b01b) bg_popup_fep_shadow_pane_g

0x6508,	// (0x00006508) cell_hwr_side_pane_g1

0x6508,	// (0x00006508) cell_hwr_side_pane_g2

0x6bc0,	// (0x00006bc0) cell_vkb_keypad_pane_t1

0xd76b,	// (0x0000d76b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd76b,	// (0x0000d76b) cell_vkb_keypad_bottom_left_pane

0xd780,	// (0x0000d780) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd780,	// (0x0000d780) cell_vkb_keypad_bottom_right_pane

0x6508,	// (0x00006508) cell_vkb_keypad_bottom_left_pane_g1

0x6508,	// (0x00006508) cell_vkb_keypad_bottom_right_pane_g1

0x6c24,	// (0x00006c24) cell_vkb_keypad_number_pane_ParamLimits

0x6c24,	// (0x00006c24) cell_vkb_keypad_number_pane

0x6c43,	// (0x00006c43) cell_vkb_keypad_number_pane_g1

0x6c4d,	// (0x00006c4d) cell_vkb_keypad_number_pane_g2

0x6c56,	// (0x00006c56) cell_vkb_keypad_number_pane_g3

0x0002,

0xb00d,	// (0x0000b00d) cell_vkb_keypad_number_pane_g

0x6bc0,	// (0x00006bc0) cell_vkb_keypad_number_pane_t1

0x6c7a,	// (0x00006c7a) fep_vkb_candidate_pane_g1

0x0001,

0xb008,	// (0x0000b008) cell_hwr_side_pane_g

0x6cd9,	// (0x00006cd9) cell_hwr_side_pane_t1

0x6ce7,	// (0x00006ce7) cell_hwr_side_pane_t1_copy1

0x698a,	// (0x0000698a) cell_hwr_candidate_pane_g1

0x6d37,	// (0x00006d37) cell_hwr_candidate_pane_t1

0x6508,	// (0x00006508) cell_vkb_candidate_pane_g2

0x6d8b,	// (0x00006d8b) cell_vkb_candidate_pane_t1

0x6564,	// (0x00006564) bg_popup_fep_shadow_pane_ParamLimits

0x6564,	// (0x00006564) bg_popup_fep_shadow_pane

0x6619,	// (0x00006619) bg_fep_hwr_top_pane_g4

0x6687,	// (0x00006687) bg_hwr_side_pane_g1_ParamLimits

0x6687,	// (0x00006687) bg_hwr_side_pane_g1

0xd5ea,	// (0x0000d5ea) cell_hwr_side_pane_ParamLimits

0xd5ea,	// (0x0000d5ea) cell_hwr_side_pane

0x66f5,	// (0x000066f5) fep_hwr_write_pane_g1_ParamLimits

0x66f5,	// (0x000066f5) fep_hwr_write_pane_g1

0x6702,	// (0x00006702) fep_hwr_write_pane_g2_ParamLimits

0x6702,	// (0x00006702) fep_hwr_write_pane_g2

0x670f,	// (0x0000670f) fep_hwr_write_pane_g3_ParamLimits

0x670f,	// (0x0000670f) fep_hwr_write_pane_g3

0xd60a,	// (0x0000d60a) fep_hwr_write_pane_g4_ParamLimits

0xd60a,	// (0x0000d60a) fep_hwr_write_pane_g4

0x0005,

0xf02b,	// (0x0000f02b) fep_hwr_write_pane_g_ParamLimits

0xf02b,	// (0x0000f02b) fep_hwr_write_pane_g

0x6619,	// (0x00006619) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6619,	// (0x00006619) bg_fep_hwr_candidate_pane_g2

0x6758,	// (0x00006758) cell_hwr_candidate_pane_ParamLimits

0x6758,	// (0x00006758) cell_hwr_candidate_pane

0x679a,	// (0x0000679a) fep_hwr_candidate_pane_g1_ParamLimits

0x67fc,	// (0x000067fc) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x67fc,	// (0x000067fc) bg_popup_fep_shadow_pane_cp2

0x698a,	// (0x0000698a) fep_vkb_top_pane_g4_ParamLimits

0x698a,	// (0x0000698a) fep_vkb_top_pane_g4

0x69d0,	// (0x000069d0) fep_vkb_side_pane_g2_ParamLimits

0x69d0,	// (0x000069d0) fep_vkb_side_pane_g2

0xbc09,	// (0x0000bc09) list_setting_pane_t4_ParamLimits

0xbc09,	// (0x0000bc09) list_setting_pane_t4

0xbc83,	// (0x0000bc83) list_setting_number_pane_t5_ParamLimits

0xbc83,	// (0x0000bc83) list_setting_number_pane_t5

0xbf46,	// (0x0000bf46) list_double_heading_pane_cp2_ParamLimits

0xbf46,	// (0x0000bf46) list_double_heading_pane_cp2

0x0fbf,	// (0x00000fbf) list_double_heading_pane_g1_cp2_ParamLimits

0x0fbf,	// (0x00000fbf) list_double_heading_pane_g1_cp2

0x136c,	// (0x0000136c) list_double_heading_pane_g2_cp2_ParamLimits

0x136c,	// (0x0000136c) list_double_heading_pane_g2_cp2

0x6d99,	// (0x00006d99) list_double_heading_pane_t1_cp2_ParamLimits

0x6d99,	// (0x00006d99) list_double_heading_pane_t1_cp2

0x6daf,	// (0x00006daf) list_double_heading_pane_t2_cp2_ParamLimits

0x6daf,	// (0x00006daf) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0309,	// (0x00000309) popup_preview_fixed_window

0x082d,	// (0x0000082d) bg_popup_preview_window_pane_cp02

0x6dc1,	// (0x00006dc1) list_preview_fixed_pane

0x6e07,	// (0x00006e07) list_empty_pane_fp_ParamLimits

0x6e07,	// (0x00006e07) list_empty_pane_fp

0x6e07,	// (0x00006e07) list_single_cale_day_pane_fp_ParamLimits

0x6e07,	// (0x00006e07) list_single_cale_day_pane_fp

0x6e07,	// (0x00006e07) list_single_graphic_heading_pane_fp_ParamLimits

0x6e07,	// (0x00006e07) list_single_graphic_heading_pane_fp

0x6e07,	// (0x00006e07) list_single_graphic_pane_fp_ParamLimits

0x6e07,	// (0x00006e07) list_single_graphic_pane_fp

0x6e07,	// (0x00006e07) list_single_heading_pane_fp_ParamLimits

0x6e07,	// (0x00006e07) list_single_heading_pane_fp

0x6e07,	// (0x00006e07) list_single_pane_fp_ParamLimits

0x6e07,	// (0x00006e07) list_single_pane_fp

0x6e1d,	// (0x00006e1d) list_single_pane_fp_g1_ParamLimits

0x6e1d,	// (0x00006e1d) list_single_pane_fp_g1

0x0fbf,	// (0x00000fbf) list_single_pane_fp_g2_ParamLimits

0x0fbf,	// (0x00000fbf) list_single_pane_fp_g2

0x136c,	// (0x0000136c) list_single_pane_fp_g3_ParamLimits

0x136c,	// (0x0000136c) list_single_pane_fp_g3

0x6e29,	// (0x00006e29) list_single_pane_fp_g4_ParamLimits

0x6e29,	// (0x00006e29) list_single_pane_fp_g4

0x0003,

0xb03c,	// (0x0000b03c) list_single_pane_fp_g_ParamLimits

0xb03c,	// (0x0000b03c) list_single_pane_fp_g

0x6e35,	// (0x00006e35) list_single_pane_fp_t1_ParamLimits

0x6e35,	// (0x00006e35) list_single_pane_fp_t1

0x6e4c,	// (0x00006e4c) list_single_graphic_pane_fp_g1_ParamLimits

0x6e4c,	// (0x00006e4c) list_single_graphic_pane_fp_g1

0x6e1d,	// (0x00006e1d) list_single_graphic_pane_fp_g2_ParamLimits

0x6e1d,	// (0x00006e1d) list_single_graphic_pane_fp_g2

0x0fbf,	// (0x00000fbf) list_single_graphic_pane_fp_g3_ParamLimits

0x0fbf,	// (0x00000fbf) list_single_graphic_pane_fp_g3

0x136c,	// (0x0000136c) list_single_graphic_pane_fp_g4_ParamLimits

0x136c,	// (0x0000136c) list_single_graphic_pane_fp_g4

0x6e29,	// (0x00006e29) list_single_graphic_pane_fp_g5_ParamLimits

0x6e29,	// (0x00006e29) list_single_graphic_pane_fp_g5

0x0004,

0xb045,	// (0x0000b045) list_single_graphic_pane_fp_g_ParamLimits

0xb045,	// (0x0000b045) list_single_graphic_pane_fp_g

0x6e58,	// (0x00006e58) list_single_graphic_pane_fp_t1_ParamLimits

0x6e58,	// (0x00006e58) list_single_graphic_pane_fp_t1

0x6e4c,	// (0x00006e4c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6e4c,	// (0x00006e4c) list_single_graphic_heading_pane_fp_g1

0x6e1d,	// (0x00006e1d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6e1d,	// (0x00006e1d) list_single_graphic_heading_pane_fp_g2

0x0fbf,	// (0x00000fbf) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fbf,	// (0x00000fbf) list_single_graphic_heading_pane_fp_g3

0x136c,	// (0x0000136c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x136c,	// (0x0000136c) list_single_graphic_heading_pane_fp_g4

0x6e29,	// (0x00006e29) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6e29,	// (0x00006e29) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb045,	// (0x0000b045) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb045,	// (0x0000b045) list_single_graphic_heading_pane_fp_g

0x6e6e,	// (0x00006e6e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6e6e,	// (0x00006e6e) list_single_graphic_heading_pane_fp_t1

0x6e84,	// (0x00006e84) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6e84,	// (0x00006e84) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb050,	// (0x0000b050) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb050,	// (0x0000b050) list_single_graphic_heading_pane_fp_t

0x6e96,	// (0x00006e96) list_single_cale_day_pane_fp_g1_ParamLimits

0x6e96,	// (0x00006e96) list_single_cale_day_pane_fp_g1

0x6ece,	// (0x00006ece) list_single_cale_day_pane_fp_g2_ParamLimits

0x6ece,	// (0x00006ece) list_single_cale_day_pane_fp_g2

0x6eda,	// (0x00006eda) list_single_cale_day_pane_fp_g3_ParamLimits

0x6eda,	// (0x00006eda) list_single_cale_day_pane_fp_g3

0x6f02,	// (0x00006f02) list_single_cale_day_pane_fp_g4_ParamLimits

0x6f02,	// (0x00006f02) list_single_cale_day_pane_fp_g4

0x6f26,	// (0x00006f26) list_single_cale_day_pane_fp_g5_ParamLimits

0x6f26,	// (0x00006f26) list_single_cale_day_pane_fp_g5

0x0004,

0xb055,	// (0x0000b055) list_single_cale_day_pane_fp_g_ParamLimits

0xb055,	// (0x0000b055) list_single_cale_day_pane_fp_g

0x6f4a,	// (0x00006f4a) list_single_cale_day_pane_fp_t1_ParamLimits

0x6f4a,	// (0x00006f4a) list_single_cale_day_pane_fp_t1

0x6f70,	// (0x00006f70) list_single_cale_day_pane_fp_t2_ParamLimits

0x6f70,	// (0x00006f70) list_single_cale_day_pane_fp_t2

0x6f89,	// (0x00006f89) list_single_cale_day_pane_fp_t3_ParamLimits

0x6f89,	// (0x00006f89) list_single_cale_day_pane_fp_t3

0x0002,

0xb060,	// (0x0000b060) list_single_cale_day_pane_fp_t_ParamLimits

0xb060,	// (0x0000b060) list_single_cale_day_pane_fp_t

0x6e1d,	// (0x00006e1d) list_empty_pane_fp_g1_ParamLimits

0x6e1d,	// (0x00006e1d) list_empty_pane_fp_g1

0x6fa2,	// (0x00006fa2) list_empty_pane_fp_t1

0x6fb0,	// (0x00006fb0) list_empty_pane_fp_t2

0x0001,

0xb067,	// (0x0000b067) list_empty_pane_fp_t

0x6e1d,	// (0x00006e1d) list_single_heading_pane_fp_g1_ParamLimits

0x6e1d,	// (0x00006e1d) list_single_heading_pane_fp_g1

0x0fbf,	// (0x00000fbf) list_single_heading_pane_fp_g2_ParamLimits

0x0fbf,	// (0x00000fbf) list_single_heading_pane_fp_g2

0x136c,	// (0x0000136c) list_single_heading_pane_fp_g3_ParamLimits

0x136c,	// (0x0000136c) list_single_heading_pane_fp_g3

0x0002,

0xb06c,	// (0x0000b06c) list_single_heading_pane_fp_g_ParamLimits

0xb06c,	// (0x0000b06c) list_single_heading_pane_fp_g

0x6fbe,	// (0x00006fbe) list_single_heading_pane_fp_t1_ParamLimits

0x6fbe,	// (0x00006fbe) list_single_heading_pane_fp_t1

0x6fd0,	// (0x00006fd0) list_single_heading_pane_fp_t2_ParamLimits

0x6fd0,	// (0x00006fd0) list_single_heading_pane_fp_t2

0x0001,

0xb073,	// (0x0000b073) list_single_heading_pane_fp_t_ParamLimits

0xb073,	// (0x0000b073) list_single_heading_pane_fp_t

0x16a6,	// (0x000016a6) aid_size_cell_fast

0x079d,	// (0x0000079d) soft_indicator_pane_cp1_t1

0x16e0,	// (0x000016e0) cell_app_pane_cp2_ParamLimits

0x16e0,	// (0x000016e0) cell_app_pane_cp2

0x6586,	// (0x00006586) fep_hwr_candidate_drop_down_list_pane

0x67b4,	// (0x000067b4) fep_hwr_candidate_pane_g3_ParamLimits

0x67b4,	// (0x000067b4) fep_hwr_candidate_pane_g3

0x67c1,	// (0x000067c1) fep_hwr_candidate_pane_g4_ParamLimits

0x67c1,	// (0x000067c1) fep_hwr_candidate_pane_g4

0x0002,

0xafe7,	// (0x0000afe7) fep_hwr_candidate_pane_g_ParamLimits

0xafe7,	// (0x0000afe7) fep_hwr_candidate_pane_g

0x687f,	// (0x0000687f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x687f,	// (0x0000687f) fep_vkb_candidate_drop_down_list_pane

0x6c82,	// (0x00006c82) fep_vkb_candidate_pane_g3

0x6c8a,	// (0x00006c8a) fep_vkb_candidate_pane_g4

0x0002,

0xb014,	// (0x0000b014) fep_vkb_candidate_pane_g

0x698a,	// (0x0000698a) cell_hwr_candidate_pane_g1_ParamLimits

0x6cf5,	// (0x00006cf5) cell_hwr_candidate_pane_g3_ParamLimits

0x6cf5,	// (0x00006cf5) cell_hwr_candidate_pane_g3

0x6d16,	// (0x00006d16) cell_hwr_candidate_pane_g4_ParamLimits

0x6d16,	// (0x00006d16) cell_hwr_candidate_pane_g4

0x0002,

0xb02e,	// (0x0000b02e) cell_hwr_candidate_pane_g_ParamLimits

0xb02e,	// (0x0000b02e) cell_hwr_candidate_pane_g

0x6d55,	// (0x00006d55) cell_vkb_candidate_pane_g3_ParamLimits

0x6d55,	// (0x00006d55) cell_vkb_candidate_pane_g3

0x6d70,	// (0x00006d70) cell_vkb_candidate_pane_g4_ParamLimits

0x6d70,	// (0x00006d70) cell_vkb_candidate_pane_g4

0x6fe6,	// (0x00006fe6) cell_app_pane_cp2_g1_ParamLimits

0x6fe6,	// (0x00006fe6) cell_app_pane_cp2_g1

0x7004,	// (0x00007004) cell_app_pane_cp2_g2_ParamLimits

0x7004,	// (0x00007004) cell_app_pane_cp2_g2

0x0001,

0xb078,	// (0x0000b078) cell_app_pane_cp2_g_ParamLimits

0xb078,	// (0x0000b078) cell_app_pane_cp2_g

0x7010,	// (0x00007010) cell_app_pane_cp2_t1_ParamLimits

0x7010,	// (0x00007010) cell_app_pane_cp2_t1

0x1346,	// (0x00001346) grid_highlight_pane_cp1_ParamLimits

0x1346,	// (0x00001346) grid_highlight_pane_cp1

0x7022,	// (0x00007022) cell_hwr_candidate_pane_cp1_ParamLimits

0x7022,	// (0x00007022) cell_hwr_candidate_pane_cp1

0x698a,	// (0x0000698a) fep_hwr_candidate_drop_down_list_pane_g1

0x7041,	// (0x00007041) fep_hwr_candidate_drop_down_list_pane_g2

0x704e,	// (0x0000704e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb07d,	// (0x0000b07d) fep_hwr_candidate_drop_down_list_pane_g

0x705b,	// (0x0000705b) fep_hwr_candidate_drop_down_list_scroll_pane

0x7064,	// (0x00007064) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7064,	// (0x00007064) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7071,	// (0x00007071) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7071,	// (0x00007071) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x707e,	// (0x0000707e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x707e,	// (0x0000707e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6d55,	// (0x00006d55) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d55,	// (0x00006d55) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d70,	// (0x00006d70) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d70,	// (0x00006d70) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x708b,	// (0x0000708b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x708b,	// (0x0000708b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x70a6,	// (0x000070a6) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x70a6,	// (0x000070a6) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x70c1,	// (0x000070c1) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x70c1,	// (0x000070c1) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb084,	// (0x0000b084) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb084,	// (0x0000b084) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x70dc,	// (0x000070dc) cell_vkb_candidate_pane_cp1_ParamLimits

0x70dc,	// (0x000070dc) cell_vkb_candidate_pane_cp1

0x698a,	// (0x0000698a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x698a,	// (0x0000698a) fep_vkb_candidate_drop_down_list_pane_g1

0x7041,	// (0x00007041) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7041,	// (0x00007041) fep_vkb_candidate_drop_down_list_pane_g2

0x704e,	// (0x0000704e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x704e,	// (0x0000704e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb07d,	// (0x0000b07d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb07d,	// (0x0000b07d) fep_vkb_candidate_drop_down_list_pane_g

0x70fc,	// (0x000070fc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x70fc,	// (0x000070fc) fep_vkb_candidate_drop_down_list_scroll_pane

0x7109,	// (0x00007109) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7109,	// (0x00007109) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7116,	// (0x00007116) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7116,	// (0x00007116) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7122,	// (0x00007122) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7122,	// (0x00007122) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6cf5,	// (0x00006cf5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6cf5,	// (0x00006cf5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6d16,	// (0x00006d16) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d16,	// (0x00006d16) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x712e,	// (0x0000712e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x712e,	// (0x0000712e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x714f,	// (0x0000714f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x714f,	// (0x0000714f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7170,	// (0x00007170) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7170,	// (0x00007170) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb095,	// (0x0000b095) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb095,	// (0x0000b095) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb5f0,	// (0x0000b5f0) title_pane_g1_ParamLimits

0xb603,	// (0x0000b603) title_pane_g2_ParamLimits

0xee9c,	// (0x0000ee9c) title_pane_g_ParamLimits

0x1cae,	// (0x00001cae) aid_call2_pane

0x1cb6,	// (0x00001cb6) aid_call_pane

0x1cbe,	// (0x00001cbe) popup_clock_analogue_window_g1

0x1cbe,	// (0x00001cbe) popup_clock_analogue_window_g2

0x1cc6,	// (0x00001cc6) popup_clock_analogue_window_g3

0x1ccf,	// (0x00001ccf) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xabb5,	// (0x0000abb5) popup_clock_analogue_window_g

0x1cd7,	// (0x00001cd7) popup_clock_analogue_window_t1

0x1d5f,	// (0x00001d5f) clock_digital_number_pane_ParamLimits

0x1d5f,	// (0x00001d5f) clock_digital_number_pane

0x1d6b,	// (0x00001d6b) clock_digital_number_pane_cp02_ParamLimits

0x1d6b,	// (0x00001d6b) clock_digital_number_pane_cp02

0x1d77,	// (0x00001d77) clock_digital_number_pane_cp03_ParamLimits

0x1d77,	// (0x00001d77) clock_digital_number_pane_cp03

0x1d83,	// (0x00001d83) clock_digital_number_pane_cp04_ParamLimits

0x1d83,	// (0x00001d83) clock_digital_number_pane_cp04

0x1d8f,	// (0x00001d8f) clock_digital_separator_pane_ParamLimits

0x1d8f,	// (0x00001d8f) clock_digital_separator_pane

0x1d9b,	// (0x00001d9b) popup_clock_digital_window_t1_ParamLimits

0x1d9b,	// (0x00001d9b) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xabc0,	// (0x0000abc0) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xabc0,	// (0x0000abc0) clock_digital_separator_pane_g

0xc945,	// (0x0000c945) aid_fill_nsta_ParamLimits

0xca7b,	// (0x0000ca7b) indicator_nsta_pane_ParamLimits

0x333c,	// (0x0000333c) popup_clock_analogue_window

0x333c,	// (0x0000333c) popup_clock_digital_window

0x1667,	// (0x00001667) grid_indicator_nsta_pane_ParamLimits

0x5e59,	// (0x00005e59) clock_nsta_pane_t2

0x0001,

0xaf67,	// (0x0000af67) clock_nsta_pane_t

0x1a96,	// (0x00001a96) aid_size_max_handle

0x1aa0,	// (0x00001aa0) aid_size_min_handle

0x2553,	// (0x00002553) editor_scroll_pane

0x718b,	// (0x0000718b) ex_editor_pane

0x1614,	// (0x00001614) scroll_pane_cp13

0x0d9a,	// (0x00000d9a) scroll_pane_cp14

0x1d0c,	// (0x00001d0c) scroll_pane_cp36

0xbf57,	// (0x0000bf57) list_single_graphic_hl_pane_cp2_ParamLimits

0xbf57,	// (0x0000bf57) list_single_graphic_hl_pane_cp2

0xd2c6,	// (0x0000d2c6) list_single_graphic_hl_pane_ParamLimits

0xd2c6,	// (0x0000d2c6) list_single_graphic_hl_pane

0x7193,	// (0x00007193) aid_size_min_hl_cp1

0x719c,	// (0x0000719c) list_highlight_pane_cp34_ParamLimits

0x719c,	// (0x0000719c) list_highlight_pane_cp34

0x71ad,	// (0x000071ad) list_single_graphic_hl_pane_g1_ParamLimits

0x71ad,	// (0x000071ad) list_single_graphic_hl_pane_g1

0xd79b,	// (0x0000d79b) list_single_graphic_hl_pane_g2_ParamLimits

0xd79b,	// (0x0000d79b) list_single_graphic_hl_pane_g2

0xd79b,	// (0x0000d79b) list_single_graphic_hl_pane_g3_ParamLimits

0xd79b,	// (0x0000d79b) list_single_graphic_hl_pane_g3

0x24c4,	// (0x000024c4) list_single_graphic_hl_pane_g4_ParamLimits

0x24c4,	// (0x000024c4) list_single_graphic_hl_pane_g4

0xd7a7,	// (0x0000d7a7) list_single_graphic_hl_pane_g5_ParamLimits

0xd7a7,	// (0x0000d7a7) list_single_graphic_hl_pane_g5

0x0004,

0xf044,	// (0x0000f044) list_single_graphic_hl_pane_g_ParamLimits

0xf044,	// (0x0000f044) list_single_graphic_hl_pane_g

0xd7bb,	// (0x0000d7bb) list_single_graphic_hl_pane_t1_ParamLimits

0xd7bb,	// (0x0000d7bb) list_single_graphic_hl_pane_t1

0x71f0,	// (0x000071f0) aid_size_min_hl_cp2

0x71f9,	// (0x000071f9) list_highlight_pane_cp34_cp2_ParamLimits

0x71f9,	// (0x000071f9) list_highlight_pane_cp34_cp2

0x71ad,	// (0x000071ad) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x71ad,	// (0x000071ad) list_single_graphic_hl_pane_g1_cp2

0x7206,	// (0x00007206) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7206,	// (0x00007206) list_single_graphic_hl_pane_g2_cp2

0x7212,	// (0x00007212) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7212,	// (0x00007212) list_single_graphic_hl_pane_g3_cp2

0x0dae,	// (0x00000dae) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0dae,	// (0x00000dae) list_single_graphic_hl_pane_g4_cp2

0x7220,	// (0x00007220) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7220,	// (0x00007220) list_single_graphic_hl_pane_g5_cp2

0xc15b,	// (0x0000c15b) control_pane_g4_ParamLimits

0xc15b,	// (0x0000c15b) control_pane_g4

0x2ac6,	// (0x00002ac6) bg_popup_sub_pane_cp10_ParamLimits

0x6512,	// (0x00006512) list_choice_list_pane_ParamLimits

0x6521,	// (0x00006521) scroll_pane_cp23

0x082d,	// (0x0000082d) bg_popup_preview_window_pane_cp02_ParamLimits

0x6dc1,	// (0x00006dc1) list_preview_fixed_pane_ParamLimits

0x6dd7,	// (0x00006dd7) list_preview_fixed_pane_cp_ParamLimits

0x6dd7,	// (0x00006dd7) list_preview_fixed_pane_cp

0x6de3,	// (0x00006de3) popup_preview_fixed_window_g1_ParamLimits

0x6de3,	// (0x00006de3) popup_preview_fixed_window_g1

0x6def,	// (0x00006def) popup_preview_fixed_window_g2_ParamLimits

0x6def,	// (0x00006def) popup_preview_fixed_window_g2

0x0002,

0xb035,	// (0x0000b035) popup_preview_fixed_window_g_ParamLimits

0xb035,	// (0x0000b035) popup_preview_fixed_window_g

0x1941,	// (0x00001941) aid_navi_side_left_pane_ParamLimits

0x1956,	// (0x00001956) aid_navi_side_right_pane_ParamLimits

0x196e,	// (0x0000196e) navi_icon_pane_stacon_ParamLimits

0x1982,	// (0x00001982) navi_navi_pane_stacon_ParamLimits

0x196e,	// (0x0000196e) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x724a,	// (0x0000724a) listscroll_text_info_pane

0x7252,	// (0x00007252) list_text_info_pane_ParamLimits

0x7252,	// (0x00007252) list_text_info_pane

0x7261,	// (0x00007261) scroll_pane_cp24_ParamLimits

0x7261,	// (0x00007261) scroll_pane_cp24

0xd7d1,	// (0x0000d7d1) list_text_info_pane_t1_ParamLimits

0xd7d1,	// (0x0000d7d1) list_text_info_pane_t1

0xc2c9,	// (0x0000c2c9) popup_fast_swap2_window_ParamLimits

0xc2c9,	// (0x0000c2c9) popup_fast_swap2_window

0x72b4,	// (0x000072b4) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c4e,	// (0x00003c4e) heading_pane_cp2

0x0a6d,	// (0x00000a6d) listscroll_fast2_pane

0x72be,	// (0x000072be) grid_fast2_pane

0x72c8,	// (0x000072c8) listscroll_fast2_pane_g1

0x72d0,	// (0x000072d0) listscroll_fast2_pane_g2

0x0001,

0xb0b1,	// (0x0000b0b1) listscroll_fast2_pane_g

0x1614,	// (0x00001614) scroll_pane_cp26

0x72da,	// (0x000072da) cell_fast2_pane_ParamLimits

0x72da,	// (0x000072da) cell_fast2_pane

0x72ef,	// (0x000072ef) cell_fast2_pane_g1

0x72f8,	// (0x000072f8) cell_fast2_pane_g2

0x7301,	// (0x00007301) cell_fast2_pane_g3

0x0002,

0xb0b6,	// (0x0000b0b6) cell_fast2_pane_g

0x0b57,	// (0x00000b57) grid_highlight_pane_cp9

0x0b6c,	// (0x00000b6c) main_eswt_pane_ParamLimits

0x0b6c,	// (0x00000b6c) main_eswt_pane

0x7276,	// (0x00007276) list_single_text_info_pane

0x7309,	// (0x00007309) eswt_ctrl_button_pane

0x7309,	// (0x00007309) eswt_ctrl_canvas_pane

0x7311,	// (0x00007311) eswt_ctrl_combo_pane

0x7309,	// (0x00007309) eswt_ctrl_default_pane

0x7309,	// (0x00007309) eswt_ctrl_label_pane

0x7319,	// (0x00007319) eswt_ctrl_wait_pane

0x7321,	// (0x00007321) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x7341,	// (0x00007341) popup_eswt_tasktip_window_ParamLimits

0x7341,	// (0x00007341) popup_eswt_tasktip_window

0x3785,	// (0x00003785) bg_popup_window_pane_cp18

0x7352,	// (0x00007352) eswt_control_pane_g1_ParamLimits

0x7352,	// (0x00007352) eswt_control_pane_g1

0x735f,	// (0x0000735f) eswt_control_pane_g2_ParamLimits

0x735f,	// (0x0000735f) eswt_control_pane_g2

0x736c,	// (0x0000736c) eswt_control_pane_g3_ParamLimits

0x736c,	// (0x0000736c) eswt_control_pane_g3

0x7379,	// (0x00007379) eswt_control_pane_g4_ParamLimits

0x7379,	// (0x00007379) eswt_control_pane_g4

0x0003,

0xb0bd,	// (0x0000b0bd) eswt_control_pane_g_ParamLimits

0xb0bd,	// (0x0000b0bd) eswt_control_pane_g

0x1346,	// (0x00001346) bg_button_pane_ParamLimits

0x1346,	// (0x00001346) bg_button_pane

0x0b6c,	// (0x00000b6c) common_borders_pane_copy2_ParamLimits

0x0b6c,	// (0x00000b6c) common_borders_pane_copy2

0x7386,	// (0x00007386) control_button_pane_g1_ParamLimits

0x7386,	// (0x00007386) control_button_pane_g1

0x7392,	// (0x00007392) control_button_pane_g2_ParamLimits

0x7392,	// (0x00007392) control_button_pane_g2

0x739e,	// (0x0000739e) control_button_pane_g3_ParamLimits

0x739e,	// (0x0000739e) control_button_pane_g3

0x0002,

0xb0c6,	// (0x0000b0c6) control_button_pane_g_ParamLimits

0xb0c6,	// (0x0000b0c6) control_button_pane_g

0x73b2,	// (0x000073b2) control_button_pane_t1

0x73c0,	// (0x000073c0) control_button_pane_t2

0x0001,

0xb0cd,	// (0x0000b0cd) control_button_pane_t

0x35eb,	// (0x000035eb) bg_button_pane_g1

0x35f3,	// (0x000035f3) bg_button_pane_g2

0x35fb,	// (0x000035fb) bg_button_pane_g3

0x3603,	// (0x00003603) bg_button_pane_g4

0x360b,	// (0x0000360b) bg_button_pane_g5

0x3613,	// (0x00003613) bg_button_pane_g6

0x361b,	// (0x0000361b) bg_button_pane_g7

0x3623,	// (0x00003623) bg_button_pane_g8

0x362b,	// (0x0000362b) bg_button_pane_g9

0x0008,

0xad17,	// (0x0000ad17) bg_button_pane_g

0x64cd,	// (0x000064cd) common_borders_pane_ParamLimits

0x64cd,	// (0x000064cd) common_borders_pane

0x7352,	// (0x00007352) eswt_control_pane_g1_copy1_ParamLimits

0x7352,	// (0x00007352) eswt_control_pane_g1_copy1

0x735f,	// (0x0000735f) eswt_control_pane_g2_copy1_ParamLimits

0x735f,	// (0x0000735f) eswt_control_pane_g2_copy1

0x736c,	// (0x0000736c) eswt_control_pane_g3_copy1_ParamLimits

0x736c,	// (0x0000736c) eswt_control_pane_g3_copy1

0x7379,	// (0x00007379) eswt_control_pane_g4_copy1_ParamLimits

0x7379,	// (0x00007379) eswt_control_pane_g4_copy1

0x6508,	// (0x00006508) bg_eswt_ctrl_canvas_pane_g1

0x64cd,	// (0x000064cd) common_borders_pane_cp2_ParamLimits

0x64cd,	// (0x000064cd) common_borders_pane_cp2

0x64cd,	// (0x000064cd) common_borders_pane_cp3_ParamLimits

0x64cd,	// (0x000064cd) common_borders_pane_cp3

0x73ce,	// (0x000073ce) separator_horizontal_pane

0x73d6,	// (0x000073d6) separator_vertical_pane

0x7352,	// (0x00007352) eswt_control_pane_g1_copy2_ParamLimits

0x7352,	// (0x00007352) eswt_control_pane_g1_copy2

0x735f,	// (0x0000735f) eswt_control_pane_g2_copy2_ParamLimits

0x735f,	// (0x0000735f) eswt_control_pane_g2_copy2

0x736c,	// (0x0000736c) eswt_control_pane_g3_copy2_ParamLimits

0x736c,	// (0x0000736c) eswt_control_pane_g3_copy2

0x7379,	// (0x00007379) eswt_control_pane_g4_copy2_ParamLimits

0x7379,	// (0x00007379) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x73df,	// (0x000073df) separator_horizontal_pane_g1

0x73e8,	// (0x000073e8) separator_horizontal_pane_g2

0x73f1,	// (0x000073f1) separator_horizontal_pane_g3

0x0002,

0xb0d2,	// (0x0000b0d2) separator_horizontal_pane_g

0x7352,	// (0x00007352) eswt_control_pane_g1_copy3_ParamLimits

0x7352,	// (0x00007352) eswt_control_pane_g1_copy3

0x735f,	// (0x0000735f) eswt_control_pane_g2_copy3_ParamLimits

0x735f,	// (0x0000735f) eswt_control_pane_g2_copy3

0x736c,	// (0x0000736c) eswt_control_pane_g3_copy3_ParamLimits

0x736c,	// (0x0000736c) eswt_control_pane_g3_copy3

0x7379,	// (0x00007379) eswt_control_pane_g4_copy3_ParamLimits

0x7379,	// (0x00007379) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x73fa,	// (0x000073fa) separator_vertical_pane_g1

0x7403,	// (0x00007403) separator_vertical_pane_g2

0x740c,	// (0x0000740c) separator_vertical_pane_g3

0x0002,

0xb0d9,	// (0x0000b0d9) separator_vertical_pane_g

0x7352,	// (0x00007352) eswt_control_pane_g1_copy4_ParamLimits

0x7352,	// (0x00007352) eswt_control_pane_g1_copy4

0x735f,	// (0x0000735f) eswt_control_pane_g2_copy4_ParamLimits

0x735f,	// (0x0000735f) eswt_control_pane_g2_copy4

0x736c,	// (0x0000736c) eswt_control_pane_g3_copy4_ParamLimits

0x736c,	// (0x0000736c) eswt_control_pane_g3_copy4

0x7379,	// (0x00007379) eswt_control_pane_g4_copy4_ParamLimits

0x7379,	// (0x00007379) eswt_control_pane_g4_copy4

0x7415,	// (0x00007415) eswt_ctrl_combo_button_pane

0x741d,	// (0x0000741d) eswt_ctrl_input_pane

0x7425,	// (0x00007425) popup_choice_list_window_cp70

0x742d,	// (0x0000742d) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x64cd,	// (0x000064cd) bg_button_pane_cp70_ParamLimits

0x64cd,	// (0x000064cd) bg_button_pane_cp70

0x743b,	// (0x0000743b) eswt_ctrl_combo_button_pane_g1

0x7443,	// (0x00007443) wait_bar_pane_cp70

0x3785,	// (0x00003785) bg_popup_window_pane_cp70_ParamLimits

0x3785,	// (0x00003785) bg_popup_window_pane_cp70

0x744b,	// (0x0000744b) popup_eswt_tasktip_window_t1

0x7461,	// (0x00007461) wait_bar_pane_cp71_ParamLimits

0x7461,	// (0x00007461) wait_bar_pane_cp71

0x746d,	// (0x0000746d) grid_eswt_app_pane

0x1afa,	// (0x00001afa) scroll_pane_cp70

0xd7ee,	// (0x0000d7ee) cell_eswt_app_pane_ParamLimits

0xd7ee,	// (0x0000d7ee) cell_eswt_app_pane

0xd818,	// (0x0000d818) cell_eswt_app_pane_g1_ParamLimits

0xd818,	// (0x0000d818) cell_eswt_app_pane_g1

0xd847,	// (0x0000d847) cell_eswt_app_pane_g2_ParamLimits

0xd847,	// (0x0000d847) cell_eswt_app_pane_g2

0x0001,

0xf04f,	// (0x0000f04f) cell_eswt_app_pane_g_ParamLimits

0xf04f,	// (0x0000f04f) cell_eswt_app_pane_g

0xd86b,	// (0x0000d86b) cell_eswt_app_pane_t1_ParamLimits

0xd86b,	// (0x0000d86b) cell_eswt_app_pane_t1

0x752f,	// (0x0000752f) grid_highlight_pane_cp70_ParamLimits

0x752f,	// (0x0000752f) grid_highlight_pane_cp70

0x2434,	// (0x00002434) set_content_pane_g1

0x2898,	// (0x00002898) status_small_volume_pane

0x753b,	// (0x0000753b) status_small_volume_pane_g1

0x7543,	// (0x00007543) volume_small2_pane

0x754c,	// (0x0000754c) volume_small2_pane_g1

0x7555,	// (0x00007555) volume_small2_pane_g2

0x755e,	// (0x0000755e) volume_small2_pane_g3

0x7567,	// (0x00007567) volume_small2_pane_g4

0x7570,	// (0x00007570) volume_small2_pane_g5

0x7579,	// (0x00007579) volume_small2_pane_g6

0x7582,	// (0x00007582) volume_small2_pane_g7

0x758b,	// (0x0000758b) volume_small2_pane_g8

0x7594,	// (0x00007594) volume_small2_pane_g9

0x759d,	// (0x0000759d) volume_small2_pane_g10

0x0009,

0xb0e5,	// (0x0000b0e5) volume_small2_pane_g

0x6ad2,	// (0x00006ad2) fep_vkb_top_text_pane_g1_ParamLimits

0xd743,	// (0x0000d743) fep_vkb_top_text_pane_t1_ParamLimits

0x6dfb,	// (0x00006dfb) popup_preview_fixed_window_g3_ParamLimits

0x6dfb,	// (0x00006dfb) popup_preview_fixed_window_g3

0xc8d8,	// (0x0000c8d8) popup_toolbar_trans_pane

0xd10b,	// (0x0000d10b) aid_height_set_list_ParamLimits

0x4df4,	// (0x00004df4) aid_size_parent_ParamLimits

0x2ac6,	// (0x00002ac6) list_highlight_pane_cp2_ParamLimits

0x2434,	// (0x00002434) set_content_pane_g1_ParamLimits

0xd2d8,	// (0x0000d2d8) list_single_image_pane_ParamLimits

0xd2d8,	// (0x0000d2d8) list_single_image_pane

0xd89d,	// (0x0000d89d) aid_size_cell_image_ParamLimits

0xd89d,	// (0x0000d89d) aid_size_cell_image

0xd8aa,	// (0x0000d8aa) grid_single_image_pane_ParamLimits

0xd8aa,	// (0x0000d8aa) grid_single_image_pane

0x75bf,	// (0x000075bf) list_single_image_pane_g1_ParamLimits

0x75bf,	// (0x000075bf) list_single_image_pane_g1

0x75cb,	// (0x000075cb) list_single_image_pane_g2_ParamLimits

0x75cb,	// (0x000075cb) list_single_image_pane_g2

0x0001,

0xb0fa,	// (0x0000b0fa) list_single_image_pane_g_ParamLimits

0xb0fa,	// (0x0000b0fa) list_single_image_pane_g

0x75df,	// (0x000075df) list_single_image_pane_t1_ParamLimits

0x75df,	// (0x000075df) list_single_image_pane_t1

0xd8b6,	// (0x0000d8b6) cell_image_list_pane_ParamLimits

0xd8b6,	// (0x0000d8b6) cell_image_list_pane

0xd8ca,	// (0x0000d8ca) cell_image_list_pane_g1

0xd8d3,	// (0x0000d8d3) cell_image_list_pane_g2

0x0001,

0xf054,	// (0x0000f054) cell_image_list_pane_g

0x761b,	// (0x0000761b) aid_size_cell_tb_trans_pane

0x1346,	// (0x00001346) bg_tb_trans_pane

0x762d,	// (0x0000762d) grid_tb_trans_pane

0x35eb,	// (0x000035eb) bg_tb_trans_pane_g1

0x35f3,	// (0x000035f3) bg_tb_trans_pane_g2

0x35fb,	// (0x000035fb) bg_tb_trans_pane_g3

0x3603,	// (0x00003603) bg_tb_trans_pane_g4

0x360b,	// (0x0000360b) bg_tb_trans_pane_g5

0x3623,	// (0x00003623) bg_tb_trans_pane_g6

0x362b,	// (0x0000362b) bg_tb_trans_pane_g7

0x3613,	// (0x00003613) bg_tb_trans_pane_g8

0x361b,	// (0x0000361b) bg_tb_trans_pane_g9

0x0008,

0xb104,	// (0x0000b104) bg_tb_trans_pane_g

0x7641,	// (0x00007641) cell_toolbar_trans_pane_ParamLimits

0x7641,	// (0x00007641) cell_toolbar_trans_pane

0x6508,	// (0x00006508) cell_toolbar_trans_pane_g1

0xd4d9,	// (0x0000d4d9) list_form2_midp_pane_t1

0xd4e7,	// (0x0000d4e7) list_form2_midp_pane_t2

0x0001,

0xf01f,	// (0x0000f01f) list_form2_midp_pane_t

0x6085,	// (0x00006085) scroll_pane_cp51_ParamLimits

0x628b,	// (0x0000628b) form2_midp_wait_pane_g1

0x6294,	// (0x00006294) form2_midp_wait_pane_g2

0x629d,	// (0x0000629d) form2_midp_wait_pane_g3

0x0002,

0xafc2,	// (0x0000afc2) form2_midp_wait_pane_g

0x04f9,	// (0x000004f9) list_highlight_pane_cp21_ParamLimits

0x62eb,	// (0x000062eb) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x62fa,	// (0x000062fa) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4ff7,	// (0x00004ff7) list_single_2graphic_im_pane_ParamLimits

0x4ff7,	// (0x00004ff7) list_single_2graphic_im_pane

0x7667,	// (0x00007667) list_single_2graphic_im_pane_g1_ParamLimits

0x7667,	// (0x00007667) list_single_2graphic_im_pane_g1

0x7678,	// (0x00007678) list_single_2graphic_im_pane_g2_ParamLimits

0x7678,	// (0x00007678) list_single_2graphic_im_pane_g2

0x7684,	// (0x00007684) list_single_2graphic_im_pane_g3_ParamLimits

0x7684,	// (0x00007684) list_single_2graphic_im_pane_g3

0x0003,

0xb117,	// (0x0000b117) list_single_2graphic_im_pane_g_ParamLimits

0xb117,	// (0x0000b117) list_single_2graphic_im_pane_g

0x76a4,	// (0x000076a4) list_single_2graphic_im_pane_t1_ParamLimits

0x76a4,	// (0x000076a4) list_single_2graphic_im_pane_t1

0x6e07,	// (0x00006e07) list_single_graphic_2heading_pane_fp_ParamLimits

0x6e07,	// (0x00006e07) list_single_graphic_2heading_pane_fp

0x6e4c,	// (0x00006e4c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6e4c,	// (0x00006e4c) list_single_graphic_2heading_pane_fp_g1

0x6e1d,	// (0x00006e1d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6e1d,	// (0x00006e1d) list_single_graphic_2heading_pane_fp_g2

0x0fbf,	// (0x00000fbf) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fbf,	// (0x00000fbf) list_single_graphic_2heading_pane_fp_g3

0x136c,	// (0x0000136c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x136c,	// (0x0000136c) list_single_graphic_2heading_pane_fp_g4

0x6e29,	// (0x00006e29) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6e29,	// (0x00006e29) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb045,	// (0x0000b045) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb045,	// (0x0000b045) list_single_graphic_2heading_pane_fp_g

0x76d5,	// (0x000076d5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x76d5,	// (0x000076d5) list_single_graphic_2heading_pane_fp_t1

0x6e84,	// (0x00006e84) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6e84,	// (0x00006e84) list_single_graphic_2heading_pane_fp_t2

0x76eb,	// (0x000076eb) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x76eb,	// (0x000076eb) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb120,	// (0x0000b120) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb120,	// (0x0000b120) list_single_graphic_2heading_pane_fp_t

0x6732,	// (0x00006732) fep_hwr_write_pane_g5_ParamLimits

0x6732,	// (0x00006732) fep_hwr_write_pane_g5

0x673e,	// (0x0000673e) fep_hwr_write_pane_g6_ParamLimits

0x673e,	// (0x0000673e) fep_hwr_write_pane_g6

0x7321,	// (0x00007321) eswt_shell_pane_ParamLimits

0x3785,	// (0x00003785) bg_popup_window_pane_cp18_ParamLimits

0x4cb8,	// (0x00004cb8) heading_pane_cp70

0x744b,	// (0x0000744b) popup_eswt_tasktip_window_t1_ParamLimits

0xc9a0,	// (0x0000c9a0) aid_touch_tab_arrow_left

0xc9b6,	// (0x0000c9b6) aid_touch_tab_arrow_right

0xb61b,	// (0x0000b61b) title_pane_g3_ParamLimits

0xb61b,	// (0x0000b61b) title_pane_g3

0x1231,	// (0x00001231) set_value_pane_g1

0xc8d8,	// (0x0000c8d8) popup_toolbar_trans_pane_ParamLimits

0x761b,	// (0x0000761b) aid_size_cell_tb_trans_pane_ParamLimits

0x1346,	// (0x00001346) bg_tb_trans_pane_ParamLimits

0x762d,	// (0x0000762d) grid_tb_trans_pane_ParamLimits

0x082d,	// (0x0000082d) cont_note_pane_ParamLimits

0x082d,	// (0x0000082d) cont_note_pane

0x0b6c,	// (0x00000b6c) cont_snote2_single_text_pane_ParamLimits

0x0b6c,	// (0x00000b6c) cont_snote2_single_text_pane

0x0b6c,	// (0x00000b6c) cont_snote2_single_graphic_pane_ParamLimits

0x0b6c,	// (0x00000b6c) cont_snote2_single_graphic_pane

0x3e64,	// (0x00003e64) cont_note_wait_pane_ParamLimits

0x3e64,	// (0x00003e64) cont_note_wait_pane

0x3e64,	// (0x00003e64) cont_note_image_pane_ParamLimits

0x3e64,	// (0x00003e64) cont_note_image_pane

0x7701,	// (0x00007701) popup_note2_window_g1_ParamLimits

0x7701,	// (0x00007701) popup_note2_window_g1

0x7732,	// (0x00007732) popup_note2_window_t1_ParamLimits

0x7732,	// (0x00007732) popup_note2_window_t1

0x7777,	// (0x00007777) popup_note2_window_t2_ParamLimits

0x7777,	// (0x00007777) popup_note2_window_t2

0x77bc,	// (0x000077bc) popup_note2_window_t3_ParamLimits

0x77bc,	// (0x000077bc) popup_note2_window_t3

0x7801,	// (0x00007801) popup_note2_window_t4_ParamLimits

0x7801,	// (0x00007801) popup_note2_window_t4

0x08a5,	// (0x000008a5) popup_note2_window_t5_ParamLimits

0x08a5,	// (0x000008a5) popup_note2_window_t5

0x0004,

0xb12c,	// (0x0000b12c) popup_note2_window_t_ParamLimits

0xb12c,	// (0x0000b12c) popup_note2_window_t

0x7830,	// (0x00007830) popup_note2_image_window_g1_ParamLimits

0x7830,	// (0x00007830) popup_note2_image_window_g1

0x783c,	// (0x0000783c) popup_note2_image_window_g2_ParamLimits

0x783c,	// (0x0000783c) popup_note2_image_window_g2

0x0001,

0xb137,	// (0x0000b137) popup_note2_image_window_g_ParamLimits

0xb137,	// (0x0000b137) popup_note2_image_window_g

0x784e,	// (0x0000784e) popup_note2_image_window_t1_ParamLimits

0x784e,	// (0x0000784e) popup_note2_image_window_t1

0x7866,	// (0x00007866) popup_note2_image_window_t2_ParamLimits

0x7866,	// (0x00007866) popup_note2_image_window_t2

0x787e,	// (0x0000787e) popup_note2_image_window_t3_ParamLimits

0x787e,	// (0x0000787e) popup_note2_image_window_t3

0x0002,

0xb13c,	// (0x0000b13c) popup_note2_image_window_t_ParamLimits

0xb13c,	// (0x0000b13c) popup_note2_image_window_t

0x3e72,	// (0x00003e72) popup_note2_wait_window_g1_ParamLimits

0x3e72,	// (0x00003e72) popup_note2_wait_window_g1

0x789a,	// (0x0000789a) popup_note2_wait_window_g2_ParamLimits

0x789a,	// (0x0000789a) popup_note2_wait_window_g2

0x3e8a,	// (0x00003e8a) popup_note2_wait_window_g3_ParamLimits

0x3e8a,	// (0x00003e8a) popup_note2_wait_window_g3

0x0002,

0xb143,	// (0x0000b143) popup_note2_wait_window_g_ParamLimits

0xb143,	// (0x0000b143) popup_note2_wait_window_g

0x78a6,	// (0x000078a6) popup_note2_wait_window_t1_ParamLimits

0x78a6,	// (0x000078a6) popup_note2_wait_window_t1

0x78c4,	// (0x000078c4) popup_note2_wait_window_t2_ParamLimits

0x78c4,	// (0x000078c4) popup_note2_wait_window_t2

0x78e2,	// (0x000078e2) popup_note2_wait_window_t3_ParamLimits

0x78e2,	// (0x000078e2) popup_note2_wait_window_t3

0x78f4,	// (0x000078f4) popup_note2_wait_window_t4_ParamLimits

0x78f4,	// (0x000078f4) popup_note2_wait_window_t4

0x0003,

0xb14a,	// (0x0000b14a) popup_note2_wait_window_t_ParamLimits

0xb14a,	// (0x0000b14a) popup_note2_wait_window_t

0x7906,	// (0x00007906) wait_bar2_pane_ParamLimits

0x7906,	// (0x00007906) wait_bar2_pane

0x791e,	// (0x0000791e) popup_snote2_single_text_window_g1_ParamLimits

0x791e,	// (0x0000791e) popup_snote2_single_text_window_g1

0x7946,	// (0x00007946) popup_snote2_single_text_window_t1_ParamLimits

0x7946,	// (0x00007946) popup_snote2_single_text_window_t1

0x7992,	// (0x00007992) popup_snote2_single_text_window_t2_ParamLimits

0x7992,	// (0x00007992) popup_snote2_single_text_window_t2

0x79de,	// (0x000079de) popup_snote2_single_text_window_t3_ParamLimits

0x79de,	// (0x000079de) popup_snote2_single_text_window_t3

0x7a1f,	// (0x00007a1f) popup_snote2_single_text_window_t4_ParamLimits

0x7a1f,	// (0x00007a1f) popup_snote2_single_text_window_t4

0x7a55,	// (0x00007a55) popup_snote2_single_text_window_t5_ParamLimits

0x7a55,	// (0x00007a55) popup_snote2_single_text_window_t5

0x0004,

0xb153,	// (0x0000b153) popup_snote2_single_text_window_t_ParamLimits

0xb153,	// (0x0000b153) popup_snote2_single_text_window_t

0x7a80,	// (0x00007a80) popup_snote2_single_graphic_window_g1_ParamLimits

0x7a80,	// (0x00007a80) popup_snote2_single_graphic_window_g1

0x7aa8,	// (0x00007aa8) popup_snote2_single_graphic_window_g2_ParamLimits

0x7aa8,	// (0x00007aa8) popup_snote2_single_graphic_window_g2

0x0001,

0xb15e,	// (0x0000b15e) popup_snote2_single_graphic_window_g_ParamLimits

0xb15e,	// (0x0000b15e) popup_snote2_single_graphic_window_g

0x7ad0,	// (0x00007ad0) popup_snote2_single_graphic_window_t1_ParamLimits

0x7ad0,	// (0x00007ad0) popup_snote2_single_graphic_window_t1

0x7b1c,	// (0x00007b1c) popup_snote2_single_graphic_window_t2_ParamLimits

0x7b1c,	// (0x00007b1c) popup_snote2_single_graphic_window_t2

0x79de,	// (0x000079de) popup_snote2_single_graphic_window_t3_ParamLimits

0x79de,	// (0x000079de) popup_snote2_single_graphic_window_t3

0x7a1f,	// (0x00007a1f) popup_snote2_single_graphic_window_t4_ParamLimits

0x7a1f,	// (0x00007a1f) popup_snote2_single_graphic_window_t4

0x7a55,	// (0x00007a55) popup_snote2_single_graphic_window_t5_ParamLimits

0x7a55,	// (0x00007a55) popup_snote2_single_graphic_window_t5

0x0004,

0xb163,	// (0x0000b163) popup_snote2_single_graphic_window_t_ParamLimits

0xb163,	// (0x0000b163) popup_snote2_single_graphic_window_t

0x5f13,	// (0x00005f13) clock_nsta_pane_cp2_t1

0x5f13,	// (0x00005f13) clock_nsta_pane_cp2_t2

0x0001,

0xaf83,	// (0x0000af83) clock_nsta_pane_cp2_t

0x1360,	// (0x00001360) form_field_data_wide_pane_g1_ParamLimits

0x0fbf,	// (0x00000fbf) form_field_data_wide_pane_g2_ParamLimits

0x0fbf,	// (0x00000fbf) form_field_data_wide_pane_g2

0x136c,	// (0x0000136c) form_field_data_wide_pane_g3_ParamLimits

0x136c,	// (0x0000136c) form_field_data_wide_pane_g3

0x0002,

0xab38,	// (0x0000ab38) form_field_data_wide_pane_g_ParamLimits

0xab38,	// (0x0000ab38) form_field_data_wide_pane_g

0xd40d,	// (0x0000d40d) grid_touch_3_pane_ParamLimits

0xd40d,	// (0x0000d40d) grid_touch_3_pane

0xd8dc,	// (0x0000d8dc) cell_touch_3_pane_ParamLimits

0xd8dc,	// (0x0000d8dc) cell_touch_3_pane

0x6508,	// (0x00006508) cell_touch_3_pane_g1

0x6508,	// (0x00006508) cell_touch_3_pane_g2

0x0001,

0xb008,	// (0x0000b008) cell_touch_3_pane_g

0x08d7,	// (0x000008d7) cont_query_data_pane

0x08df,	// (0x000008df) cont_query_data_pane_cp1

0x7b99,	// (0x00007b99) button_value_adjust_pane_cp7

0x7ba1,	// (0x00007ba1) query_popup_pane_cp3

0x1e24,	// (0x00001e24) bg_popup_sub_pane_cp22_ParamLimits

0x1e3a,	// (0x00001e3a) navi_navi_volume_pane_cp2

0x1e52,	// (0x00001e52) popup_side_volume_key_window_g2

0x1e5e,	// (0x00001e5e) popup_side_volume_key_window_g3

0x0002,

0xabce,	// (0x0000abce) popup_side_volume_key_window_g

0x1e78,	// (0x00001e78) popup_side_volume_key_window_t2

0x0001,

0xabd5,	// (0x0000abd5) popup_side_volume_key_window_t

0x2300,	// (0x00002300) popup_side_volume_key_window_ParamLimits

0xb9f4,	// (0x0000b9f4) list_double_graphic_pane_g4_ParamLimits

0xb9f4,	// (0x0000b9f4) list_double_graphic_pane_g4

0xd2b2,	// (0x0000d2b2) list_single_2heading_msg_pane_ParamLimits

0xd2b2,	// (0x0000d2b2) list_single_2heading_msg_pane

0xd925,	// (0x0000d925) list_single_2heading_msg_pane_g1_ParamLimits

0xd925,	// (0x0000d925) list_single_2heading_msg_pane_g1

0xd931,	// (0x0000d931) list_single_2heading_msg_pane_g2_ParamLimits

0xd931,	// (0x0000d931) list_single_2heading_msg_pane_g2

0xd944,	// (0x0000d944) list_single_2heading_msg_pane_g3_ParamLimits

0xd944,	// (0x0000d944) list_single_2heading_msg_pane_g3

0x7bdc,	// (0x00007bdc) list_single_2heading_msg_pane_g4_ParamLimits

0x7bdc,	// (0x00007bdc) list_single_2heading_msg_pane_g4

0x0003,

0xf059,	// (0x0000f059) list_single_2heading_msg_pane_g_ParamLimits

0xf059,	// (0x0000f059) list_single_2heading_msg_pane_g

0x7bf4,	// (0x00007bf4) list_single_2heading_msg_pane_t1_ParamLimits

0x7bf4,	// (0x00007bf4) list_single_2heading_msg_pane_t1

0xd950,	// (0x0000d950) list_single_2heading_msg_pane_t2_ParamLimits

0xd950,	// (0x0000d950) list_single_2heading_msg_pane_t2

0xd9bb,	// (0x0000d9bb) list_single_2heading_msg_pane_t3_ParamLimits

0xd9bb,	// (0x0000d9bb) list_single_2heading_msg_pane_t3

0x7c89,	// (0x00007c89) list_single_2heading_msg_pane_t4_ParamLimits

0x7c89,	// (0x00007c89) list_single_2heading_msg_pane_t4

0x0003,

0xf062,	// (0x0000f062) list_single_2heading_msg_pane_t_ParamLimits

0xf062,	// (0x0000f062) list_single_2heading_msg_pane_t

0x044d,	// (0x0000044d) title_pane_g4_ParamLimits

0x044d,	// (0x0000044d) title_pane_g4

0x1869,	// (0x00001869) title_pane_stacon_g3_ParamLimits

0x1869,	// (0x00001869) title_pane_stacon_g3

0x7698,	// (0x00007698) list_single_2graphic_im_pane_g4_ParamLimits

0x7698,	// (0x00007698) list_single_2graphic_im_pane_g4

0x4a29,	// (0x00004a29) popup_side_volume_key_window_cp

0x5483,	// (0x00005483) main_idle_act2_pane_t1

0x3633,	// (0x00003633) toolbar_button_pane_g10

0xb925,	// (0x0000b925) popup_toolbar_window_cp1

0x5f04,	// (0x00005f04) clock_nsta_pane_cp_t1

0x5f04,	// (0x00005f04) clock_nsta_pane_cp_t2

0x0001,

0xaf7e,	// (0x0000af7e) clock_nsta_pane_cp_t

0x1e3a,	// (0x00001e3a) navi_navi_volume_pane_cp2_ParamLimits

0x1e46,	// (0x00001e46) popup_side_volume_key_window_g1_ParamLimits

0x1e52,	// (0x00001e52) popup_side_volume_key_window_g2_ParamLimits

0x1e5e,	// (0x00001e5e) popup_side_volume_key_window_g3_ParamLimits

0xabce,	// (0x0000abce) popup_side_volume_key_window_g_ParamLimits

0x6572,	// (0x00006572) fep_hwr_aid_pane

0x6619,	// (0x00006619) bg_fep_hwr_top_pane_g4_ParamLimits

0x6639,	// (0x00006639) fep_hwr_top_pane_g1_ParamLimits

0x664b,	// (0x0000664b) fep_hwr_top_pane_g2_ParamLimits

0x665d,	// (0x0000665d) fep_hwr_top_pane_g3_ParamLimits

0xafd3,	// (0x0000afd3) fep_hwr_top_pane_g_ParamLimits

0x6672,	// (0x00006672) fep_hwr_top_text_pane_ParamLimits

0x47ec,	// (0x000047ec) aid_touch_tab_arrow_arrow_2

0x47f5,	// (0x000047f5) aid_touch_tab_arrow_left_2

0x6586,	// (0x00006586) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x65bd,	// (0x000065bd) fep_hwr_prediction_pane

0x68e1,	// (0x000068e1) fep_vkb_prediction_pane

0xd723,	// (0x0000d723) fep_vkb_side_pane_g3_ParamLimits

0xd723,	// (0x0000d723) fep_vkb_side_pane_g3

0x698a,	// (0x0000698a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7041,	// (0x00007041) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x704e,	// (0x0000704e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb07d,	// (0x0000b07d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7cae,	// (0x00007cae) fep_hwr_prediction_pane_g1

0x7cb8,	// (0x00007cb8) fep_hwr_prediction_pane_g2

0x7cc0,	// (0x00007cc0) fep_hwr_prediction_pane_g3

0x7cc8,	// (0x00007cc8) fep_hwr_prediction_pane_g4

0x0003,

0xb180,	// (0x0000b180) fep_hwr_prediction_pane_g

0x7cae,	// (0x00007cae) fep_vkb_prediction_pane_g1

0x7cd0,	// (0x00007cd0) fep_vkb_prediction_pane_g2

0x7cd8,	// (0x00007cd8) fep_vkb_prediction_pane_g3

0x7ce0,	// (0x00007ce0) fep_vkb_prediction_pane_g4

0x0003,

0xb189,	// (0x0000b189) fep_vkb_prediction_pane_g

0x4d63,	// (0x00004d63) slider_set_pane_g3

0x4d77,	// (0x00004d77) slider_set_pane_g4

0x4d8f,	// (0x00004d8f) slider_set_pane_g5

0x4d63,	// (0x00004d63) slider_set_pane_g6

0x4da5,	// (0x00004da5) slider_set_pane_g7

0x4f55,	// (0x00004f55) slider_form_pane_g3

0x4f5e,	// (0x00004f5e) slider_form_pane_g4

0x4f66,	// (0x00004f66) slider_form_pane_g5

0x4f55,	// (0x00004f55) slider_form_pane_g6

0xd252,	// (0x0000d252) slider_form_pane_g7

0x5796,	// (0x00005796) slider_set_pane_vc_g3

0x579f,	// (0x0000579f) slider_set_pane_vc_g4

0x57a8,	// (0x000057a8) slider_set_pane_vc_g5

0x5796,	// (0x00005796) slider_set_pane_vc_g6

0x57b1,	// (0x000057b1) slider_set_pane_vc_g7

0x5bca,	// (0x00005bca) slider_form_pane_vc_g1

0x5bd3,	// (0x00005bd3) slider_form_pane_vc_g2

0x5bdc,	// (0x00005bdc) slider_form_pane_vc_g3

0x5bca,	// (0x00005bca) slider_form_pane_vc_g4

0x5be5,	// (0x00005be5) slider_form_pane_vc_g5

0x0004,

0xaf50,	// (0x0000af50) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7ce8,	// (0x00007ce8) ai3_links_pane

0xda29,	// (0x0000da29) popup_ai3_data_window_ParamLimits

0xda29,	// (0x0000da29) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xda41,	// (0x0000da41) cell_ai3_links_pane_ParamLimits

0xda41,	// (0x0000da41) cell_ai3_links_pane

0x7d21,	// (0x00007d21) bg_popup_sub_pane_cp11

0x7d2e,	// (0x00007d2e) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7d53,	// (0x00007d53) heading_ai3_data_pane

0x7d5b,	// (0x00007d5b) list_ai3_gene_pane

0x7d67,	// (0x00007d67) popup_ai3_data_window_g1

0x7d6f,	// (0x00007d6f) heading_ai3_data_pane_g1

0x7d77,	// (0x00007d77) heading_ai3_data_pane_t1

0x7d85,	// (0x00007d85) list_double_ai3_gene_pane_ParamLimits

0x7d85,	// (0x00007d85) list_double_ai3_gene_pane

0x7d92,	// (0x00007d92) list_single_ai3_gene_pane_ParamLimits

0x7d92,	// (0x00007d92) list_single_ai3_gene_pane

0x64cd,	// (0x000064cd) list_highlight_pane_cp7_ParamLimits

0x64cd,	// (0x000064cd) list_highlight_pane_cp7

0x7d9f,	// (0x00007d9f) list_single_a13_gene_pane_t1_ParamLimits

0x7d9f,	// (0x00007d9f) list_single_a13_gene_pane_t1

0x7db6,	// (0x00007db6) list_single_ai3_gene_pane_g1

0x7dbf,	// (0x00007dbf) list_single_ai3_gene_pane_g2

0x0001,

0xb192,	// (0x0000b192) list_single_ai3_gene_pane_g

0x7dc7,	// (0x00007dc7) list_double_ai3_gene_pane_g1_ParamLimits

0x7dc7,	// (0x00007dc7) list_double_ai3_gene_pane_g1

0x7dd3,	// (0x00007dd3) list_double_ai3_gene_pane_t1_ParamLimits

0x7dd3,	// (0x00007dd3) list_double_ai3_gene_pane_t1

0x7def,	// (0x00007def) list_double_ai3_gene_pane_t2_ParamLimits

0x7def,	// (0x00007def) list_double_ai3_gene_pane_t2

0x7e04,	// (0x00007e04) list_double_ai3_gene_pane_t3_ParamLimits

0x7e04,	// (0x00007e04) list_double_ai3_gene_pane_t3

0x0002,

0xb197,	// (0x0000b197) list_double_ai3_gene_pane_t_ParamLimits

0xb197,	// (0x0000b197) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7bb2,	// (0x00007bb2) aid_size_min_col_2

0xd90f,	// (0x0000d90f) aid_size_min_msg_ParamLimits

0xd90f,	// (0x0000d90f) aid_size_min_msg

0xd737,	// (0x0000d737) fep_vkb_top_text_pane_g2_ParamLimits

0xd737,	// (0x0000d737) fep_vkb_top_text_pane_g2

0x0001,

0xf03f,	// (0x0000f03f) fep_vkb_top_text_pane_g_ParamLimits

0xf03f,	// (0x0000f03f) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7e21,	// (0x00007e21) grid_hc_apps_pane_ParamLimits

0x7e21,	// (0x00007e21) grid_hc_apps_pane

0x7e30,	// (0x00007e30) list_hc_apps_pane

0x7e38,	// (0x00007e38) scroll_pane_cp37_ParamLimits

0x7e38,	// (0x00007e38) scroll_pane_cp37

0xda5b,	// (0x0000da5b) cell_hc_apps_pane_ParamLimits

0xda5b,	// (0x0000da5b) cell_hc_apps_pane

0xdb19,	// (0x0000db19) cell_hc_apps_pane_g1_ParamLimits

0xdb19,	// (0x0000db19) cell_hc_apps_pane_g1

0x7f23,	// (0x00007f23) cell_hc_apps_pane_g2_ParamLimits

0x7f23,	// (0x00007f23) cell_hc_apps_pane_g2

0x7f3f,	// (0x00007f3f) cell_hc_apps_pane_g3_ParamLimits

0x7f3f,	// (0x00007f3f) cell_hc_apps_pane_g3

0x0002,

0xf06b,	// (0x0000f06b) cell_hc_apps_pane_g_ParamLimits

0xf06b,	// (0x0000f06b) cell_hc_apps_pane_g

0xdb46,	// (0x0000db46) cell_hc_apps_pane_t1_ParamLimits

0xdb46,	// (0x0000db46) cell_hc_apps_pane_t1

0x082d,	// (0x0000082d) grid_highlight_pane_cp10_ParamLimits

0x082d,	// (0x0000082d) grid_highlight_pane_cp10

0xdb84,	// (0x0000db84) list_single_hc_apps_pane_ParamLimits

0xdb84,	// (0x0000db84) list_single_hc_apps_pane

0xdbb5,	// (0x0000dbb5) list_single_hc_apps_pane_g1

0xdbce,	// (0x0000dbce) list_single_hc_apps_pane_g2

0x0001,

0xf072,	// (0x0000f072) list_single_hc_apps_pane_g

0xdbe7,	// (0x0000dbe7) list_single_hc_apps_pane_g2_copy1

0xdc03,	// (0x0000dc03) list_single_hc_apps_pane_t1

0x04f9,	// (0x000004f9) bg_set_opt_pane_cp_ParamLimits

0x0543,	// (0x00000543) setting_slider_pane_t1_ParamLimits

0x055c,	// (0x0000055c) setting_slider_pane_t2_ParamLimits

0x0576,	// (0x00000576) setting_slider_pane_t3_ParamLimits

0xaa20,	// (0x0000aa20) setting_slider_pane_t_ParamLimits

0x058e,	// (0x0000058e) slider_set_pane_ParamLimits

0x2925,	// (0x00002925) control_pane_g5_ParamLimits

0x2925,	// (0x00002925) control_pane_g5

0x4d4a,	// (0x00004d4a) slider_set_pane_g1_ParamLimits

0x4d57,	// (0x00004d57) slider_set_pane_g2_ParamLimits

0x4d63,	// (0x00004d63) slider_set_pane_g3_ParamLimits

0x4d77,	// (0x00004d77) slider_set_pane_g4_ParamLimits

0x4d8f,	// (0x00004d8f) slider_set_pane_g5_ParamLimits

0x4d63,	// (0x00004d63) slider_set_pane_g6_ParamLimits

0x4da5,	// (0x00004da5) slider_set_pane_g7_ParamLimits

0xae15,	// (0x0000ae15) slider_set_pane_g_ParamLimits

0x23df,	// (0x000023df) navi_icon_text_pane_ParamLimits

0xc969,	// (0x0000c969) aid_fill_nsta_2_ParamLimits

0xc9a0,	// (0x0000c9a0) aid_touch_tab_arrow_left_ParamLimits

0xc9b6,	// (0x0000c9b6) aid_touch_tab_arrow_right_ParamLimits

0xca51,	// (0x0000ca51) clock_nsta_pane_ParamLimits

0x47ce,	// (0x000047ce) navi_icon_pane_g1_ParamLimits

0x47da,	// (0x000047da) navi_text_pane_t1_ParamLimits

0x6016,	// (0x00006016) navi_icon_text_pane_g1_ParamLimits

0x6022,	// (0x00006022) navi_icon_text_pane_t1_ParamLimits

0xdbb5,	// (0x0000dbb5) list_single_hc_apps_pane_g1_ParamLimits

0xdbce,	// (0x0000dbce) list_single_hc_apps_pane_g2_ParamLimits

0xf072,	// (0x0000f072) list_single_hc_apps_pane_g_ParamLimits

0xdbe7,	// (0x0000dbe7) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xdc03,	// (0x0000dc03) list_single_hc_apps_pane_t1_ParamLimits

0xb520,	// (0x0000b520) popup_toolbar2_fixed_window_ParamLimits

0xb520,	// (0x0000b520) popup_toolbar2_fixed_window

0xc8ce,	// (0x0000c8ce) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x8085,	// (0x00008085) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x8085,	// (0x00008085) grid_toolbar2_fixed_pane

0xdc31,	// (0x0000dc31) cell_toolbar2_fixed_pane_ParamLimits

0xdc31,	// (0x0000dc31) cell_toolbar2_fixed_pane

0xdc4c,	// (0x0000dc4c) cell_toolbar2_fixed_pane_g1

0x3525,	// (0x00003525) toolbar2_fixed_button_pane

0x35eb,	// (0x000035eb) toolbar2_fixed_button_pane_g1

0x35f3,	// (0x000035f3) toolbar2_fixed_button_pane_g2

0x35fb,	// (0x000035fb) toolbar2_fixed_button_pane_g3

0x3603,	// (0x00003603) toolbar2_fixed_button_pane_g4

0x360b,	// (0x0000360b) toolbar2_fixed_button_pane_g5

0x3613,	// (0x00003613) toolbar2_fixed_button_pane_g6

0x361b,	// (0x0000361b) toolbar2_fixed_button_pane_g7

0x3623,	// (0x00003623) toolbar2_fixed_button_pane_g8

0x362b,	// (0x0000362b) toolbar2_fixed_button_pane_g9

0x0008,

0xad17,	// (0x0000ad17) toolbar2_fixed_button_pane_g

0x80a7,	// (0x000080a7) cell_toolbar2_float_pane_ParamLimits

0x80a7,	// (0x000080a7) cell_toolbar2_float_pane

0x80bb,	// (0x000080bb) cell_toolbar2_float_pane_g1

0x3525,	// (0x00003525) toolbar2_fixed_button_pane_cp

0xd61f,	// (0x0000d61f) fep_vkb_accented_list_pane_ParamLimits

0xd61f,	// (0x0000d61f) fep_vkb_accented_list_pane

0x6cd1,	// (0x00006cd1) bg_popup_fep_shadow_pane_g9

0x2553,	// (0x00002553) bg_popup_fep_shadow_pane_cp3

0x15fb,	// (0x000015fb) list_accented_list_pane

0x80c4,	// (0x000080c4) list_single_accented_list_pane_ParamLimits

0x80c4,	// (0x000080c4) list_single_accented_list_pane

0x2553,	// (0x00002553) list_highlight_pane_cp10

0x80d5,	// (0x000080d5) list_single_accented_list_pane_t1

0xc7f8,	// (0x0000c7f8) popup_slider_window_ParamLimits

0xc7f8,	// (0x0000c7f8) popup_slider_window

0x7ba9,	// (0x00007ba9) aid_indentation_list_msg

0xdd45,	// (0x0000dd45) bg_popup_window_pane_cp19

0x81f9,	// (0x000081f9) popup_slider_window_g1

0x8215,	// (0x00008215) popup_slider_window_g2

0x8231,	// (0x00008231) popup_slider_window_g3

0x0005,

0xf077,	// (0x0000f077) popup_slider_window_g

0x828d,	// (0x0000828d) popup_slider_window_t1

0x8301,	// (0x00008301) small_volume_slider_vertical_pane

0x6508,	// (0x00006508) small_volume_slider_vertical_pane_g1

0x6508,	// (0x00006508) small_volume_slider_vertical_pane_g2

0x831d,	// (0x0000831d) small_volume_slider_vertical_pane_g3

0x0002,

0xb1bc,	// (0x0000b1bc) small_volume_slider_vertical_pane_g

0xb48e,	// (0x0000b48e) area_side_right_pane_ParamLimits

0xb48e,	// (0x0000b48e) area_side_right_pane

0xddfd,	// (0x0000ddfd) aid_size_side_button_ParamLimits

0xddfd,	// (0x0000ddfd) aid_size_side_button

0xde16,	// (0x0000de16) grid_sctrl_middle_pane_ParamLimits

0xde16,	// (0x0000de16) grid_sctrl_middle_pane

0x8359,	// (0x00008359) sctrl_sk_bottom_pane

0x836a,	// (0x0000836a) sctrl_sk_top_pane

0x837c,	// (0x0000837c) aid_touch_sctrl_top

0x082d,	// (0x0000082d) bg_sctrl_sk_pane_ParamLimits

0x082d,	// (0x0000082d) bg_sctrl_sk_pane

0x8389,	// (0x00008389) sctrl_sk_top_pane_g1

0x8396,	// (0x00008396) sctrl_sk_top_pane_t1

0x837c,	// (0x0000837c) aid_touch_sctrl_bottom

0x082d,	// (0x0000082d) bg_sctrl_sk_pane_cp_ParamLimits

0x082d,	// (0x0000082d) bg_sctrl_sk_pane_cp

0x83b1,	// (0x000083b1) sctrl_sk_bottom_pane_g1

0x8396,	// (0x00008396) sctrl_sk_bottom_pane_t1

0xde30,	// (0x0000de30) cell_sctrl_middle_pane_ParamLimits

0xde30,	// (0x0000de30) cell_sctrl_middle_pane

0xde41,	// (0x0000de41) aid_touch_sctrl_middle_ParamLimits

0xde41,	// (0x0000de41) aid_touch_sctrl_middle

0xde4e,	// (0x0000de4e) bg_sctrl_middle_pane_ParamLimits

0xde4e,	// (0x0000de4e) bg_sctrl_middle_pane

0x8476,	// (0x00008476) cell_sctrl_middle_pane_g1_ParamLimits

0x8476,	// (0x00008476) cell_sctrl_middle_pane_g1

0xde5c,	// (0x0000de5c) cell_sctrl_middle_pane_g2_ParamLimits

0xde5c,	// (0x0000de5c) cell_sctrl_middle_pane_g2

0x0001,

0xf084,	// (0x0000f084) cell_sctrl_middle_pane_g_ParamLimits

0xf084,	// (0x0000f084) cell_sctrl_middle_pane_g

0x35eb,	// (0x000035eb) bg_sctrl_middle_pane_g1

0x35f3,	// (0x000035f3) bg_sctrl_middle_pane_g2

0x35fb,	// (0x000035fb) bg_sctrl_middle_pane_g3

0x3603,	// (0x00003603) bg_sctrl_middle_pane_g4

0x360b,	// (0x0000360b) bg_sctrl_middle_pane_g5

0x3613,	// (0x00003613) bg_sctrl_middle_pane_g6

0x361b,	// (0x0000361b) bg_sctrl_middle_pane_g7

0x3623,	// (0x00003623) bg_sctrl_middle_pane_g8

0x0007,

0xb1cd,	// (0x0000b1cd) bg_sctrl_middle_pane_g

0x362b,	// (0x0000362b) bg_sctrl_middle_pane_g8_copy1

0x35eb,	// (0x000035eb) bg_sctrl_sk_pane_g1

0x35f3,	// (0x000035f3) bg_sctrl_sk_pane_g2

0x35fb,	// (0x000035fb) bg_sctrl_sk_pane_g3

0x0008,

0xad17,	// (0x0000ad17) bg_sctrl_sk_pane_g

0x0d2a,	// (0x00000d2a) aid_size_touch_scroll_bar

0x3603,	// (0x00003603) bg_sctrl_sk_pane_g4

0x360b,	// (0x0000360b) bg_sctrl_sk_pane_g5

0x3613,	// (0x00003613) bg_sctrl_sk_pane_g6

0x361b,	// (0x0000361b) bg_sctrl_sk_pane_g7

0x3623,	// (0x00003623) bg_sctrl_sk_pane_g8

0x362b,	// (0x0000362b) bg_sctrl_sk_pane_g9

0x2b70,	// (0x00002b70) popup_fep_china_hwr2_fs_candidate_window

0xc326,	// (0x0000c326) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc326,	// (0x0000c326) popup_fep_china_hwr2_fs_control_window

0x698a,	// (0x0000698a) sctrl_sk_top_pane_g2

0x0001,

0xb1c3,	// (0x0000b1c3) sctrl_sk_top_pane_g

0xde68,	// (0x0000de68) aid_fep_china_hwr2_fs_cell_ParamLimits

0xde68,	// (0x0000de68) aid_fep_china_hwr2_fs_cell

0xde7c,	// (0x0000de7c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xde7c,	// (0x0000de7c) bg_popup_fep_shadow_pane_cp4

0xde93,	// (0x0000de93) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xde93,	// (0x0000de93) bg_popup_fep_shadow_pane_cp5

0xdea5,	// (0x0000dea5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdea5,	// (0x0000dea5) popup_fep_china_hwr2_fs_control_bar_grid

0xdeb9,	// (0x0000deb9) popup_fep_china_hwr2_fs_control_funtion_grid

0x844a,	// (0x0000844a) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x8454,	// (0x00008454) popup_fep_china_hwr2_fs_candidate_grid

0xdec1,	// (0x0000dec1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdec1,	// (0x0000dec1) cell_fep_china_hwr2_fs_funtion_grid

0x6508,	// (0x00006508) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8476,	// (0x00008476) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8476,	// (0x00008476) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8484,	// (0x00008484) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8484,	// (0x00008484) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb1de,	// (0x0000b1de) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb1de,	// (0x0000b1de) cell_fep_china_hwr2_fs_funtion_grid_g

0xded9,	// (0x0000ded9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xded9,	// (0x0000ded9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdeee,	// (0x0000deee) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdeee,	// (0x0000deee) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf089,	// (0x0000f089) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf089,	// (0x0000f089) cell_fep_china_hwr2_fs_funtion_grid_t

0x84cb,	// (0x000084cb) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x84d3,	// (0x000084d3) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x84db,	// (0x000084db) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb1e8,	// (0x0000b1e8) popup_fep_china_hwr2_fs_control_bar_grid_g

0x84e3,	// (0x000084e3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x84e3,	// (0x000084e3) cell_fep_china_hwr2_fs_candidate_grid

0x84fc,	// (0x000084fc) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8504,	// (0x00008504) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6508,	// (0x00006508) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6508,	// (0x00006508) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb008,	// (0x0000b008) cell_fep_china_hwr2_fs_candidate_grid_g

0x850c,	// (0x0000850c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x315b,	// (0x0000315b) clock_nsta_pane_cp_24_ParamLimits

0x315b,	// (0x0000315b) clock_nsta_pane_cp_24

0x31d9,	// (0x000031d9) indicator_nsta_pane_cp_24_ParamLimits

0x31d9,	// (0x000031d9) indicator_nsta_pane_cp_24

0x4639,	// (0x00004639) heading_pane_g1

0x0001,

0xad7c,	// (0x0000ad7c) heading_pane_g

0x5214,	// (0x00005214) grid_sct_catagory_button_pane

0x5244,	// (0x00005244) scroll_pane_cp5_ParamLimits

0x6091,	// (0x00006091) button_value_adjust_pane_cp5_ParamLimits

0x6091,	// (0x00006091) button_value_adjust_pane_cp5

0x618b,	// (0x0000618b) form2_midp_time_pane_ParamLimits

0x851a,	// (0x0000851a) cell_sct_catagory_button_pane_ParamLimits

0x851a,	// (0x0000851a) cell_sct_catagory_button_pane

0x64cd,	// (0x000064cd) bg_button_pane_cp01_ParamLimits

0x64cd,	// (0x000064cd) bg_button_pane_cp01

0x6508,	// (0x00006508) cell_sct_catagory_button_pane_g1

0xc871,	// (0x0000c871) popup_tb_extension_window

0xdf0a,	// (0x0000df0a) aid_size_cell_ext_ParamLimits

0xdf0a,	// (0x0000df0a) aid_size_cell_ext

0x0b6c,	// (0x00000b6c) bg_tb_trans_pane_cp1_ParamLimits

0x0b6c,	// (0x00000b6c) bg_tb_trans_pane_cp1

0xdf30,	// (0x0000df30) grid_tb_ext_pane_ParamLimits

0xdf30,	// (0x0000df30) grid_tb_ext_pane

0xdf72,	// (0x0000df72) cell_tb_ext_pane_ParamLimits

0xdf72,	// (0x0000df72) cell_tb_ext_pane

0xdf9a,	// (0x0000df9a) cell_tb_ext_pane_g1_ParamLimits

0xdf9a,	// (0x0000df9a) cell_tb_ext_pane_g1

0x85b2,	// (0x000085b2) cell_tb_ext_pane_t1

0x082d,	// (0x0000082d) list_highlight_pane_cp11_ParamLimits

0x082d,	// (0x0000082d) list_highlight_pane_cp11

0xb535,	// (0x0000b535) popup_uni_indicator_window_ParamLimits

0xb535,	// (0x0000b535) popup_uni_indicator_window

0x1346,	// (0x00001346) bg_popup_sub_pane_cp14

0x85cd,	// (0x000085cd) list_uniindi_pane

0x85d9,	// (0x000085d9) uniindi_top_pane

0x082d,	// (0x0000082d) bg_uniindi_top_pane

0x85f8,	// (0x000085f8) uniindi_top_pane_g1

0x860e,	// (0x0000860e) uniindi_top_pane_g2

0x0003,

0xb1ef,	// (0x0000b1ef) uniindi_top_pane_g

0x8638,	// (0x00008638) uniindi_top_pane_t1

0x8662,	// (0x00008662) list_single_uniindi_pane_ParamLimits

0x8662,	// (0x00008662) list_single_uniindi_pane

0x6508,	// (0x00006508) bg_uniindi_top_pane_g1

0x8675,	// (0x00008675) list_single_uniindi_pane_g1

0x8688,	// (0x00008688) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x86ad,	// (0x000086ad) bg_sctrl_sk_pane_cp1

0x86b6,	// (0x000086b6) bg_sctrl_sk_pane_cp2

0x86bf,	// (0x000086bf) control_bg_pane_g1

0x86c8,	// (0x000086c8) control_bg_pane_g2

0x0001,

0xb1f8,	// (0x0000b1f8) control_bg_pane_g

0x5e9f,	// (0x00005e9f) cell_indicator_nsta_pane_g1_ParamLimits

0xd440,	// (0x0000d440) cell_indicator_nsta_pane_g2_ParamLimits

0xf00a,	// (0x0000f00a) cell_indicator_nsta_pane_g_ParamLimits

0x620f,	// (0x0000620f) form2_midp_time_pane_t1_ParamLimits

0x6564,	// (0x00006564) main_idle_act4_pane_ParamLimits

0x6564,	// (0x00006564) main_idle_act4_pane

0xc871,	// (0x0000c871) popup_tb_extension_window_ParamLimits

0xdf58,	// (0x0000df58) tb_ext_find_pane_ParamLimits

0xdf58,	// (0x0000df58) tb_ext_find_pane

0x86d1,	// (0x000086d1) ai_gene_pane_1_cp1

0x2690,	// (0x00002690) ai_gene_pane_2_cp1

0x86d9,	// (0x000086d9) list_single_idle_plugin_calendar_pane

0x86e2,	// (0x000086e2) list_single_idle_plugin_notification_pane

0x86eb,	// (0x000086eb) list_single_idle_plugin_player_pane

0xdfb7,	// (0x0000dfb7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdfb7,	// (0x0000dfb7) list_single_idle_plugin_shortcut_pane

0xdfdf,	// (0x0000dfdf) main_idle_act4_pane_t1

0xdff5,	// (0x0000dff5) main_idle_act4_pane_t2

0x0001,

0xf08e,	// (0x0000f08e) main_idle_act4_pane_t

0xe00d,	// (0x0000e00d) middle_sk_idle_act4_pane_ParamLimits

0xe00d,	// (0x0000e00d) middle_sk_idle_act4_pane

0xe029,	// (0x0000e029) popup_clock_digital_analogue_window_cp2

0xe050,	// (0x0000e050) shortcut_wheel_idle_act4_pane_ParamLimits

0xe050,	// (0x0000e050) shortcut_wheel_idle_act4_pane

0x6508,	// (0x00006508) shortcut_wheel_idle_act4_pane_g1

0x6508,	// (0x00006508) shortcut_wheel_idle_act4_pane_g2

0x6508,	// (0x00006508) shortcut_wheel_idle_act4_pane_g3

0x6508,	// (0x00006508) shortcut_wheel_idle_act4_pane_g4

0x6508,	// (0x00006508) shortcut_wheel_idle_act4_pane_g5

0x877e,	// (0x0000877e) shortcut_wheel_idle_act4_pane_g6

0x8786,	// (0x00008786) shortcut_wheel_idle_act4_pane_g7

0x878e,	// (0x0000878e) shortcut_wheel_idle_act4_pane_g8

0x8796,	// (0x00008796) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb202,	// (0x0000b202) shortcut_wheel_idle_act4_pane_g

0x6619,	// (0x00006619) middle_sk_idle_act4_pane_g1_ParamLimits

0x6619,	// (0x00006619) middle_sk_idle_act4_pane_g1

0xe0cd,	// (0x0000e0cd) middle_sk_idle_act4_pane_g2_ParamLimits

0xe0cd,	// (0x0000e0cd) middle_sk_idle_act4_pane_g2

0x0001,

0xf0a3,	// (0x0000f0a3) middle_sk_idle_act4_pane_g_ParamLimits

0xf0a3,	// (0x0000f0a3) middle_sk_idle_act4_pane_g

0xe0e5,	// (0x0000e0e5) middle_sk_idle_act4_pane_t1_ParamLimits

0xe0e5,	// (0x0000e0e5) middle_sk_idle_act4_pane_t1

0xe114,	// (0x0000e114) grid_ai_shortcut_pane_ParamLimits

0xe114,	// (0x0000e114) grid_ai_shortcut_pane

0xe131,	// (0x0000e131) list_highlight_pane_cp16_ParamLimits

0xe131,	// (0x0000e131) list_highlight_pane_cp16

0xe13e,	// (0x0000e13e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe13e,	// (0x0000e13e) list_single_idle_plugin_shortcut_pane_g1

0xe14a,	// (0x0000e14a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe14a,	// (0x0000e14a) list_single_idle_plugin_shortcut_pane_g2

0xe166,	// (0x0000e166) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe166,	// (0x0000e166) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf0a8,	// (0x0000f0a8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf0a8,	// (0x0000f0a8) list_single_idle_plugin_shortcut_pane_g

0xe17b,	// (0x0000e17b) cell_ai_shortcut_pane_ParamLimits

0xe17b,	// (0x0000e17b) cell_ai_shortcut_pane

0xe191,	// (0x0000e191) cell_ai_shortcut_pane_g1_ParamLimits

0xe191,	// (0x0000e191) cell_ai_shortcut_pane_g1

0x86d1,	// (0x000086d1) ai_gene_pane_1_cp2

0x88c3,	// (0x000088c3) ai_gene_pane_2_cp2

0x88cb,	// (0x000088cb) list_highlight_pane_cp15

0x88d4,	// (0x000088d4) list_single_idle_plugin_calendar_pane_g1

0x88cb,	// (0x000088cb) list_highlight_pane_cp17

0x88dc,	// (0x000088dc) list_single_idle_plugin_calendar_pane_g1_copy1

0x88e4,	// (0x000088e4) list_single_idle_plugin_player_pane_g1

0x5523,	// (0x00005523) list_single_idle_plugin_player_pane_g2

0x0001,

0xb231,	// (0x0000b231) list_single_idle_plugin_player_pane_g

0x88ec,	// (0x000088ec) list_single_idle_plugin_player_pane_t1

0x88fa,	// (0x000088fa) list_single_idle_plugin_player_pane_t2

0x8908,	// (0x00008908) list_single_idle_plugin_player_pane_t3

0x8916,	// (0x00008916) list_single_idle_plugin_player_pane_t4

0x0003,

0xb236,	// (0x0000b236) list_single_idle_plugin_player_pane_t

0x8924,	// (0x00008924) wait_bar_pane_cp15

0x892c,	// (0x0000892c) grid_ai_notification_pane

0x5523,	// (0x00005523) list_single_idle_plugin_notification_pane_g1

0xe1b3,	// (0x0000e1b3) cell_ai_notification_pane_ParamLimits

0xe1b3,	// (0x0000e1b3) cell_ai_notification_pane

0x8942,	// (0x00008942) cell_ai_notification_pane_g1

0x894a,	// (0x0000894a) cell_ai_notification_pane_t1

0xe1c0,	// (0x0000e1c0) tb_ext_find_button_pane

0xe1c8,	// (0x0000e1c8) tb_ext_find_pane_g1

0xe1d0,	// (0x0000e1d0) tb_ext_find_pane_t1

0x1cbe,	// (0x00001cbe) tb_ext_find_button_pane_g1

0x8976,	// (0x00008976) tb_ext_find_button_pane_g2

0x0001,

0xb23f,	// (0x0000b23f) tb_ext_find_button_pane_g

0xdfdf,	// (0x0000dfdf) main_idle_act4_pane_t1_ParamLimits

0xdff5,	// (0x0000dff5) main_idle_act4_pane_t2_ParamLimits

0xf08e,	// (0x0000f08e) main_idle_act4_pane_t_ParamLimits

0xe029,	// (0x0000e029) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe040,	// (0x0000e040) sat_plugin_idle_act4_pane_ParamLimits

0xe040,	// (0x0000e040) sat_plugin_idle_act4_pane

0xe1de,	// (0x0000e1de) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe1de,	// (0x0000e1de) sat_plugin_idle_act4_pane_t1

0xe1f6,	// (0x0000e1f6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe1f6,	// (0x0000e1f6) sat_plugin_idle_act4_pane_t2

0xe20e,	// (0x0000e20e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe20e,	// (0x0000e20e) sat_plugin_idle_act4_pane_t3

0xe226,	// (0x0000e226) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe226,	// (0x0000e226) sat_plugin_idle_act4_pane_t4

0x0003,

0xf0af,	// (0x0000f0af) sat_plugin_idle_act4_pane_t_ParamLimits

0xf0af,	// (0x0000f0af) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp25_ParamLimits

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp25

0x89cb,	// (0x000089cb) popup_battery_window_g1_ParamLimits

0x89cb,	// (0x000089cb) popup_battery_window_g1

0x89d7,	// (0x000089d7) popup_battery_window_t1_ParamLimits

0x89d7,	// (0x000089d7) popup_battery_window_t1

0x89e9,	// (0x000089e9) popup_battery_window_t2_ParamLimits

0x89e9,	// (0x000089e9) popup_battery_window_t2

0x0001,

0xb24d,	// (0x0000b24d) popup_battery_window_t_ParamLimits

0xb24d,	// (0x0000b24d) popup_battery_window_t

0xc064,	// (0x0000c064) midp_canvas_pane_ParamLimits

0xc0c1,	// (0x0000c0c1) midp_keypad_pane_ParamLimits

0xc0c1,	// (0x0000c0c1) midp_keypad_pane

0x2ac6,	// (0x00002ac6) main_midp_pane_ParamLimits

0x5f22,	// (0x00005f22) signal_pane_g2_cp_ParamLimits

0xe23e,	// (0x0000e23e) aid_size_cell_midp_keypad_ParamLimits

0xe23e,	// (0x0000e23e) aid_size_cell_midp_keypad

0xe25c,	// (0x0000e25c) midp_keyp_game_grid_pane_ParamLimits

0xe25c,	// (0x0000e25c) midp_keyp_game_grid_pane

0xe283,	// (0x0000e283) midp_keyp_rocker_pane_ParamLimits

0xe283,	// (0x0000e283) midp_keyp_rocker_pane

0xe2cc,	// (0x0000e2cc) midp_keyp_sk_left_pane_ParamLimits

0xe2cc,	// (0x0000e2cc) midp_keyp_sk_left_pane

0xe31e,	// (0x0000e31e) midp_keyp_sk_right_pane_ParamLimits

0xe31e,	// (0x0000e31e) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe370,	// (0x0000e370) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe370,	// (0x0000e370) midp_keyp_sk_right_pane_g1

0x6508,	// (0x00006508) midp_keyp_rocker_pane_g1

0xe379,	// (0x0000e379) keyp_game_cell_pane_ParamLimits

0xe379,	// (0x0000e379) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe39d,	// (0x0000e39d) keyp_game_cell_pane_g1

0xb4d0,	// (0x0000b4d0) popup_fep_vkb2_window_ParamLimits

0xb4d0,	// (0x0000b4d0) popup_fep_vkb2_window

0xe3a6,	// (0x0000e3a6) aid_size_cell_vkb2_ParamLimits

0xe3a6,	// (0x0000e3a6) aid_size_cell_vkb2

0xe3dc,	// (0x0000e3dc) popup_fep_vkb2_window_g1_ParamLimits

0xe3dc,	// (0x0000e3dc) popup_fep_vkb2_window_g1

0xe42c,	// (0x0000e42c) vkb2_area_bottom_pane_ParamLimits

0xe42c,	// (0x0000e42c) vkb2_area_bottom_pane

0xe480,	// (0x0000e480) vkb2_area_keypad_pane_ParamLimits

0xe480,	// (0x0000e480) vkb2_area_keypad_pane

0xe4c8,	// (0x0000e4c8) vkb2_area_top_pane_ParamLimits

0xe4c8,	// (0x0000e4c8) vkb2_area_top_pane

0xe54e,	// (0x0000e54e) vkb2_top_entry_pane_ParamLimits

0xe54e,	// (0x0000e54e) vkb2_top_entry_pane

0xe57b,	// (0x0000e57b) vkb2_top_grid_left_pane_ParamLimits

0xe57b,	// (0x0000e57b) vkb2_top_grid_left_pane

0xe59b,	// (0x0000e59b) vkb2_top_grid_right_pane_ParamLimits

0xe59b,	// (0x0000e59b) vkb2_top_grid_right_pane

0x8d62,	// (0x00008d62) vkb2_cell_keypad_pane_ParamLimits

0x8d62,	// (0x00008d62) vkb2_cell_keypad_pane

0xe5e1,	// (0x0000e5e1) vkb2_area_bottom_grid_pane_ParamLimits

0xe5e1,	// (0x0000e5e1) vkb2_area_bottom_grid_pane

0xe60b,	// (0x0000e60b) vkb2_area_bottom_pane_g1_ParamLimits

0xe60b,	// (0x0000e60b) vkb2_area_bottom_pane_g1

0xe631,	// (0x0000e631) vkb2_area_bottom_pane_g2_ParamLimits

0xe631,	// (0x0000e631) vkb2_area_bottom_pane_g2

0xe662,	// (0x0000e662) vkb2_area_bottom_pane_g3_ParamLimits

0xe662,	// (0x0000e662) vkb2_area_bottom_pane_g3

0x0002,

0xf0b8,	// (0x0000f0b8) vkb2_area_bottom_pane_g_ParamLimits

0xf0b8,	// (0x0000f0b8) vkb2_area_bottom_pane_g

0x8f0c,	// (0x00008f0c) vkb2_top_cell_left_pane_ParamLimits

0x8f0c,	// (0x00008f0c) vkb2_top_cell_left_pane

0xe6cc,	// (0x0000e6cc) vkb2_top_entry_pane_g1_ParamLimits

0xe6cc,	// (0x0000e6cc) vkb2_top_entry_pane_g1

0xe6da,	// (0x0000e6da) vkb2_top_entry_pane_t1_ParamLimits

0xe6da,	// (0x0000e6da) vkb2_top_entry_pane_t1

0x8f74,	// (0x00008f74) vkb2_top_entry_pane_t2_ParamLimits

0x8f74,	// (0x00008f74) vkb2_top_entry_pane_t2

0x8fa6,	// (0x00008fa6) vkb2_top_entry_pane_t3_ParamLimits

0x8fa6,	// (0x00008fa6) vkb2_top_entry_pane_t3

0x0002,

0xf0bf,	// (0x0000f0bf) vkb2_top_entry_pane_t_ParamLimits

0xf0bf,	// (0x0000f0bf) vkb2_top_entry_pane_t

0xe713,	// (0x0000e713) vkb2_top_grid_right_pane_g1_ParamLimits

0xe713,	// (0x0000e713) vkb2_top_grid_right_pane_g1

0x900d,	// (0x0000900d) vkb2_top_grid_right_pane_g2_ParamLimits

0x900d,	// (0x0000900d) vkb2_top_grid_right_pane_g2

0x9025,	// (0x00009025) vkb2_top_grid_right_pane_g3_ParamLimits

0x9025,	// (0x00009025) vkb2_top_grid_right_pane_g3

0xe729,	// (0x0000e729) vkb2_top_grid_right_pane_g4_ParamLimits

0xe729,	// (0x0000e729) vkb2_top_grid_right_pane_g4

0x0003,

0xf0c6,	// (0x0000f0c6) vkb2_top_grid_right_pane_g_ParamLimits

0xf0c6,	// (0x0000f0c6) vkb2_top_grid_right_pane_g

0x9053,	// (0x00009053) vkb2_top_cell_left_pane_g1

0x906a,	// (0x0000906a) vkb2_cell_keypad_pane_g1_ParamLimits

0x906a,	// (0x0000906a) vkb2_cell_keypad_pane_g1

0x9078,	// (0x00009078) vkb2_cell_keypad_pane_t1_ParamLimits

0x9078,	// (0x00009078) vkb2_cell_keypad_pane_t1

0x908f,	// (0x0000908f) vkb2_cell_bottom_grid_pane_ParamLimits

0x908f,	// (0x0000908f) vkb2_cell_bottom_grid_pane

0x90c8,	// (0x000090c8) vkb2_cell_bottom_grid_pane_g1

0xe071,	// (0x0000e071) aid_call2_pane_cp02

0xe079,	// (0x0000e079) aid_call_pane_cp02

0xe081,	// (0x0000e081) clock_digital_number_pane_cp10

0xe089,	// (0x0000e089) clock_digital_number_pane_cp11

0xe091,	// (0x0000e091) clock_digital_number_pane_cp12

0xe099,	// (0x0000e099) clock_digital_number_pane_cp13

0xe0a1,	// (0x0000e0a1) clock_digital_separator_pane_cp10

0x1cbe,	// (0x00001cbe) popup_clock_digital_analogue_window_cp2_g1

0x1cbe,	// (0x00001cbe) popup_clock_digital_analogue_window_cp2_g2

0xe0a9,	// (0x0000e0a9) popup_clock_digital_analogue_window_cp2_g3

0x1cbe,	// (0x00001cbe) popup_clock_digital_analogue_window_cp2_g4

0xe0a9,	// (0x0000e0a9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf093,	// (0x0000f093) popup_clock_digital_analogue_window_cp2_g

0xe0b1,	// (0x0000e0b1) popup_clock_digital_analogue_window_cp2_t1

0xe0bf,	// (0x0000e0bf) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf09e,	// (0x0000f09e) popup_clock_digital_analogue_window_cp2_t

0x6508,	// (0x00006508) clock_digital_number_pane_cp10_g1

0x6508,	// (0x00006508) clock_digital_number_pane_cp10_g2

0x0001,

0xb008,	// (0x0000b008) clock_digital_number_pane_cp10_g

0x6508,	// (0x00006508) clock_digital_separator_pane_cp10_g1

0x6508,	// (0x00006508) clock_digital_separator_pane_cp10_g2

0x0001,

0xb008,	// (0x0000b008) clock_digital_separator_pane_cp10_g

0x861a,	// (0x0000861a) uniindi_top_pane_g3

0x862b,	// (0x0000862b) uniindi_top_pane_g4

0x8ded,	// (0x00008ded) vkb2_row_keypad_pane_ParamLimits

0x8ded,	// (0x00008ded) vkb2_row_keypad_pane

0x90e8,	// (0x000090e8) vkb2_cell_t_keypad_pane_ParamLimits

0x90e8,	// (0x000090e8) vkb2_cell_t_keypad_pane

0x90f8,	// (0x000090f8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x90f8,	// (0x000090f8) vkb2_cell_t_keypad_pane_cp08

0x910b,	// (0x0000910b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x910b,	// (0x0000910b) vkb2_cell_t_keypad_pane_cp09

0x911f,	// (0x0000911f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x911f,	// (0x0000911f) vkb2_cell_t_keypad_pane_cp01

0x9130,	// (0x00009130) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9130,	// (0x00009130) vkb2_cell_t_keypad_pane_cp02

0x9141,	// (0x00009141) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9141,	// (0x00009141) vkb2_cell_t_keypad_pane_cp03

0x9152,	// (0x00009152) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9152,	// (0x00009152) vkb2_cell_t_keypad_pane_cp04

0x9163,	// (0x00009163) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9163,	// (0x00009163) vkb2_cell_t_keypad_pane_cp05

0x9174,	// (0x00009174) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9174,	// (0x00009174) vkb2_cell_t_keypad_pane_cp06

0x9185,	// (0x00009185) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9185,	// (0x00009185) vkb2_cell_t_keypad_pane_cp07

0x9196,	// (0x00009196) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9196,	// (0x00009196) vkb2_cell_t_keypad_pane_cp10

0x698a,	// (0x0000698a) vkb2_cell_t_keypad_pane_g1

0x91ab,	// (0x000091ab) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe73f,	// (0x0000e73f) aid_size_cell_graphic2_ParamLimits

0xe73f,	// (0x0000e73f) aid_size_cell_graphic2

0xe77d,	// (0x0000e77d) bg_popup_window_pane_cp21_ParamLimits

0xe77d,	// (0x0000e77d) bg_popup_window_pane_cp21

0xe78b,	// (0x0000e78b) graphic2_pages_pane_ParamLimits

0xe78b,	// (0x0000e78b) graphic2_pages_pane

0xe7e1,	// (0x0000e7e1) grid_graphic2_control_pane_ParamLimits

0xe7e1,	// (0x0000e7e1) grid_graphic2_control_pane

0xe829,	// (0x0000e829) grid_graphic2_pane_ParamLimits

0xe829,	// (0x0000e829) grid_graphic2_pane

0xe8b0,	// (0x0000e8b0) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7d5b,	// (0x00007d5b) list_ai3_gene_pane_ParamLimits

0xdd45,	// (0x0000dd45) bg_popup_window_pane_cp19_ParamLimits

0x819b,	// (0x0000819b) bg_touch_area_indi_pane_ParamLimits

0x819b,	// (0x0000819b) bg_touch_area_indi_pane

0x81b1,	// (0x000081b1) bg_touch_area_indi_pane_cp01_ParamLimits

0x81b1,	// (0x000081b1) bg_touch_area_indi_pane_cp01

0x81c7,	// (0x000081c7) bg_touch_area_indi_pane_cp02_ParamLimits

0x81c7,	// (0x000081c7) bg_touch_area_indi_pane_cp02

0x81df,	// (0x000081df) bg_touch_area_indi_pane_cp03_ParamLimits

0x81df,	// (0x000081df) bg_touch_area_indi_pane_cp03

0x81f9,	// (0x000081f9) popup_slider_window_g1_ParamLimits

0x8215,	// (0x00008215) popup_slider_window_g2_ParamLimits

0x8231,	// (0x00008231) popup_slider_window_g3_ParamLimits

0xf077,	// (0x0000f077) popup_slider_window_g_ParamLimits

0x828d,	// (0x0000828d) popup_slider_window_t1_ParamLimits

0x8301,	// (0x00008301) small_volume_slider_vertical_pane_ParamLimits

0xe8b0,	// (0x0000e8b0) cell_graphic2_pane_ParamLimits

0xe90d,	// (0x0000e90d) bg_button_pane_cp10_ParamLimits

0xe90d,	// (0x0000e90d) bg_button_pane_cp10

0xe920,	// (0x0000e920) bg_button_pane_cp11_ParamLimits

0xe920,	// (0x0000e920) bg_button_pane_cp11

0xe933,	// (0x0000e933) graphic2_pages_pane_g1_ParamLimits

0xe933,	// (0x0000e933) graphic2_pages_pane_g1

0xe94e,	// (0x0000e94e) graphic2_pages_pane_g2_ParamLimits

0xe94e,	// (0x0000e94e) graphic2_pages_pane_g2

0x0001,

0xf0d4,	// (0x0000f0d4) graphic2_pages_pane_g_ParamLimits

0xf0d4,	// (0x0000f0d4) graphic2_pages_pane_g

0xe966,	// (0x0000e966) graphic2_pages_pane_t1_ParamLimits

0xe966,	// (0x0000e966) graphic2_pages_pane_t1

0xe97e,	// (0x0000e97e) cell_graphic2_control_pane_ParamLimits

0xe97e,	// (0x0000e97e) cell_graphic2_control_pane

0xe9b0,	// (0x0000e9b0) cell_graphic2_pane_g1_ParamLimits

0xe9b0,	// (0x0000e9b0) cell_graphic2_pane_g1

0x67b4,	// (0x000067b4) cell_graphic2_pane_g2_ParamLimits

0x67b4,	// (0x000067b4) cell_graphic2_pane_g2

0xe9bd,	// (0x0000e9bd) cell_graphic2_pane_g3_ParamLimits

0xe9bd,	// (0x0000e9bd) cell_graphic2_pane_g3

0x67c1,	// (0x000067c1) cell_graphic2_pane_g4_ParamLimits

0x67c1,	// (0x000067c1) cell_graphic2_pane_g4

0xe9ca,	// (0x0000e9ca) cell_graphic2_pane_g5_ParamLimits

0xe9ca,	// (0x0000e9ca) cell_graphic2_pane_g5

0x0004,

0xf0d9,	// (0x0000f0d9) cell_graphic2_pane_g_ParamLimits

0xf0d9,	// (0x0000f0d9) cell_graphic2_pane_g

0xe9ea,	// (0x0000e9ea) cell_graphic2_pane_t1_ParamLimits

0xe9ea,	// (0x0000e9ea) cell_graphic2_pane_t1

0x462d,	// (0x0000462d) grid_highlight_pane_cp11_ParamLimits

0x462d,	// (0x0000462d) grid_highlight_pane_cp11

0x082d,	// (0x0000082d) bg_button_pane_cp05

0xea1e,	// (0x0000ea1e) cell_graphic2_control_pane_g1

0x6508,	// (0x00006508) bg_touch_area_indi_pane_g1

0x9479,	// (0x00009479) aid_cmod_rocker_key_size

0x9483,	// (0x00009483) aid_cmode_itu_key_size

0x948d,	// (0x0000948d) main_cmode_video_pane

0x9497,	// (0x00009497) main_comp_mode_itu_pane

0x94a3,	// (0x000094a3) main_comp_mode_rocker_pane

0x94af,	// (0x000094af) cell_cmode_rocker_pane_ParamLimits

0x94af,	// (0x000094af) cell_cmode_rocker_pane

0x94c1,	// (0x000094c1) cell_cmode_itu_pane_ParamLimits

0x94c1,	// (0x000094c1) cell_cmode_itu_pane

0x1346,	// (0x00001346) bg_button_pane_cp06_ParamLimits

0x1346,	// (0x00001346) bg_button_pane_cp06

0x698a,	// (0x0000698a) cell_cmode_rocker_pane_g1_ParamLimits

0x698a,	// (0x0000698a) cell_cmode_rocker_pane_g1

0x8476,	// (0x00008476) cell_cmode_rocker_pane_g2_ParamLimits

0x8476,	// (0x00008476) cell_cmode_rocker_pane_g2

0x0001,

0xb283,	// (0x0000b283) cell_cmode_rocker_pane_g_ParamLimits

0xb283,	// (0x0000b283) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x94d6,	// (0x000094d6) cell_cmode_itu_pane_g1

0x94df,	// (0x000094df) cell_cmode_itu_pane_t1

0x94ed,	// (0x000094ed) cell_cmode_itu_pane_t2

0x0001,

0xb288,	// (0x0000b288) cell_cmode_itu_pane_t

0x869d,	// (0x0000869d) aid_touch_ctrl_left

0x86a5,	// (0x000086a5) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xea42,	// (0x0000ea42) aid_cmod_rocker_key_size_cp

0xea4c,	// (0x0000ea4c) aid_cmode_itu_key_size_cp

0x950f,	// (0x0000950f) compa_mode_pane_g1

0x9517,	// (0x00009517) compa_mode_pane_g2

0x951f,	// (0x0000951f) compa_mode_pane_g3

0x0002,

0xb28d,	// (0x0000b28d) compa_mode_pane_g

0xea56,	// (0x0000ea56) main_comp_mode_itu_pane_cp

0xea5e,	// (0x0000ea5e) main_comp_mode_rocker_pane_cp

0xea66,	// (0x0000ea66) cell_cmode_itu_pane_cp_ParamLimits

0xea66,	// (0x0000ea66) cell_cmode_itu_pane_cp

0xea7b,	// (0x0000ea7b) cell_cmode_rocker_pane_cp_ParamLimits

0xea7b,	// (0x0000ea7b) cell_cmode_rocker_pane_cp

0x1346,	// (0x00001346) bg_button_pane_cp06_cp_ParamLimits

0x1346,	// (0x00001346) bg_button_pane_cp06_cp

0x698a,	// (0x0000698a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x698a,	// (0x0000698a) cell_cmode_rocker_pane_g1_cp

0x6508,	// (0x00006508) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xea8d,	// (0x0000ea8d) cell_cmode_itu_pane_g1_cp

0xea96,	// (0x0000ea96) cell_cmode_itu_pane_t1_cp

0xea96,	// (0x0000ea96) cell_cmode_itu_pane_t2_cp

0xd248,	// (0x0000d248) settings_code_pane_cp2

0x04f9,	// (0x000004f9) bg_popup_window_pane_cp3_ParamLimits

0x09fb,	// (0x000009fb) heading_pane_cp3_ParamLimits

0x0a07,	// (0x00000a07) listscroll_popup_graphic_pane_ParamLimits

0x6572,	// (0x00006572) fep_hwr_aid_pane_ParamLimits

0x837c,	// (0x0000837c) aid_touch_sctrl_top_ParamLimits

0x8389,	// (0x00008389) sctrl_sk_top_pane_g1_ParamLimits

0x698a,	// (0x0000698a) sctrl_sk_top_pane_g2_ParamLimits

0xb1c3,	// (0x0000b1c3) sctrl_sk_top_pane_g_ParamLimits

0x8396,	// (0x00008396) sctrl_sk_top_pane_t1_ParamLimits

0x837c,	// (0x0000837c) aid_touch_sctrl_bottom_ParamLimits

0x8396,	// (0x00008396) sctrl_sk_bottom_pane_t1_ParamLimits

0x85e6,	// (0x000085e6) aid_area_touch_clock

0xe510,	// (0x0000e510) aid_vkb2_area_top_pane_cell_ParamLimits

0xe510,	// (0x0000e510) aid_vkb2_area_top_pane_cell

0xe5bb,	// (0x0000e5bb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe5bb,	// (0x0000e5bb) aid_vkb2_area_bottom_pane_cell

0x8f2c,	// (0x00008f2c) popup_char_count_window

0x9575,	// (0x00009575) popup_char_count_window_g1

0x957e,	// (0x0000957e) popup_char_count_window_g2

0x9587,	// (0x00009587) popup_char_count_window_g3

0x0002,

0xb294,	// (0x0000b294) popup_char_count_window_g

0x9590,	// (0x00009590) popup_char_count_window_t1

0x8b8a,	// (0x00008b8a) popup_fep_char_preview_window_ParamLimits

0x8b8a,	// (0x00008b8a) popup_fep_char_preview_window

0xe530,	// (0x0000e530) vkb2_top_candi_pane_ParamLimits

0xe530,	// (0x0000e530) vkb2_top_candi_pane

0xeaa4,	// (0x0000eaa4) cell_vkb2_top_candi_pane_ParamLimits

0xeaa4,	// (0x0000eaa4) cell_vkb2_top_candi_pane

0x3e64,	// (0x00003e64) bg_popup_fep_char_preview_window_ParamLimits

0x3e64,	// (0x00003e64) bg_popup_fep_char_preview_window

0x95eb,	// (0x000095eb) popup_fep_char_preview_window_t1_ParamLimits

0x95eb,	// (0x000095eb) popup_fep_char_preview_window_t1

0x9625,	// (0x00009625) bg_popup_fep_char_preview_window_g1

0x962d,	// (0x0000962d) bg_popup_fep_char_preview_window_g2

0x9635,	// (0x00009635) bg_popup_fep_char_preview_window_g3

0x963d,	// (0x0000963d) bg_popup_fep_char_preview_window_g4

0x9645,	// (0x00009645) bg_popup_fep_char_preview_window_g5

0x964d,	// (0x0000964d) bg_popup_fep_char_preview_window_g6

0x9655,	// (0x00009655) bg_popup_fep_char_preview_window_g7

0x965d,	// (0x0000965d) bg_popup_fep_char_preview_window_g8

0x9665,	// (0x00009665) bg_popup_fep_char_preview_window_g9

0x0008,

0xb29b,	// (0x0000b29b) bg_popup_fep_char_preview_window_g

0x698a,	// (0x0000698a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x698a,	// (0x0000698a) cell_vkb2_top_candi_pane_g1

0x6cf5,	// (0x00006cf5) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6cf5,	// (0x00006cf5) cell_vkb2_top_candi_pane_g2

0x6d16,	// (0x00006d16) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6d16,	// (0x00006d16) cell_vkb2_top_candi_pane_g3

0x966d,	// (0x0000966d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x966d,	// (0x0000966d) cell_vkb2_top_candi_pane_g4

0x968e,	// (0x0000968e) cell_vkb2_top_candi_pane_g5_ParamLimits

0x968e,	// (0x0000968e) cell_vkb2_top_candi_pane_g5

0x8476,	// (0x00008476) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8476,	// (0x00008476) cell_vkb2_top_candi_pane_g6

0x0005,

0xb2ae,	// (0x0000b2ae) cell_vkb2_top_candi_pane_g_ParamLimits

0xb2ae,	// (0x0000b2ae) cell_vkb2_top_candi_pane_g

0x96af,	// (0x000096af) cell_vkb2_top_candi_pane_t1

0x4d36,	// (0x00004d36) aid_size_touch_slider_mark_ParamLimits

0x4d36,	// (0x00004d36) aid_size_touch_slider_mark

0xe7c7,	// (0x0000e7c7) grid_graphic2_catg_pane_ParamLimits

0xe7c7,	// (0x0000e7c7) grid_graphic2_catg_pane

0xe883,	// (0x0000e883) popup_grid_graphic2_window_t1_ParamLimits

0xe883,	// (0x0000e883) popup_grid_graphic2_window_t1

0xe899,	// (0x0000e899) popup_grid_graphic2_window_t2_ParamLimits

0xe899,	// (0x0000e899) popup_grid_graphic2_window_t2

0x0001,

0xf0cf,	// (0x0000f0cf) popup_grid_graphic2_window_t_ParamLimits

0xf0cf,	// (0x0000f0cf) popup_grid_graphic2_window_t

0x082d,	// (0x0000082d) bg_button_pane_cp05_ParamLimits

0xea1e,	// (0x0000ea1e) cell_graphic2_control_pane_g1_ParamLimits

0xeb0a,	// (0x0000eb0a) cell_graphic2_catg_pane_ParamLimits

0xeb0a,	// (0x0000eb0a) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xeb1c,	// (0x0000eb1c) cell_graphic2_catg_pane_g1

0x85b2,	// (0x000085b2) cell_tb_ext_pane_t1_ParamLimits

0x8fca,	// (0x00008fca) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8fca,	// (0x00008fca) vkb2_top_cell_right_narrow_pane

0x8fe2,	// (0x00008fe2) vkb2_top_cell_right_wide_pane_ParamLimits

0x8fe2,	// (0x00008fe2) vkb2_top_cell_right_wide_pane

0x6564,	// (0x00006564) bg_vkb2_func_pane_ParamLimits

0x6564,	// (0x00006564) bg_vkb2_func_pane

0x9053,	// (0x00009053) vkb2_top_cell_left_pane_g1_ParamLimits

0x6564,	// (0x00006564) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6564,	// (0x00006564) bg_vkb2_fuc_pane_cp03

0x90c8,	// (0x000090c8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x35f3,	// (0x000035f3) bg_vkb2_func_pane_g1

0x35fb,	// (0x000035fb) bg_vkb2_func_pane_g2

0x360b,	// (0x0000360b) bg_vkb2_func_pane_g3

0x3603,	// (0x00003603) bg_vkb2_func_pane_g4

0x3613,	// (0x00003613) bg_vkb2_func_pane_g5

0x361b,	// (0x0000361b) bg_vkb2_func_pane_g6

0x3623,	// (0x00003623) bg_vkb2_func_pane_g7

0x362b,	// (0x0000362b) bg_vkb2_func_pane_g8

0x35eb,	// (0x000035eb) bg_vkb2_func_pane_g9

0x0008,

0xb2bb,	// (0x0000b2bb) bg_vkb2_func_pane_g

0x6564,	// (0x00006564) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6564,	// (0x00006564) bg_vkb2_fuc_pane_cp01

0x9053,	// (0x00009053) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9053,	// (0x00009053) vkb2_top_cell_right_wide_pane_g1

0x6564,	// (0x00006564) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6564,	// (0x00006564) bg_vkb2_fuc_pane_cp02

0x90c8,	// (0x000090c8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x90c8,	// (0x000090c8) vkb2_top_cell_right_narrow_pane_g1

0xdc7f,	// (0x0000dc7f) aid_touch_area_decrease_ParamLimits

0xdc7f,	// (0x0000dc7f) aid_touch_area_decrease

0xdcb9,	// (0x0000dcb9) aid_touch_area_increase_ParamLimits

0xdcb9,	// (0x0000dcb9) aid_touch_area_increase

0xdce1,	// (0x0000dce1) aid_touch_area_mute_ParamLimits

0xdce1,	// (0x0000dce1) aid_touch_area_mute

0xdd11,	// (0x0000dd11) aid_touch_area_slider_ParamLimits

0xdd11,	// (0x0000dd11) aid_touch_area_slider

0xdd51,	// (0x0000dd51) popup_slider_window_g4_ParamLimits

0xdd51,	// (0x0000dd51) popup_slider_window_g4

0xdd79,	// (0x0000dd79) popup_slider_window_g5_ParamLimits

0xdd79,	// (0x0000dd79) popup_slider_window_g5

0xddad,	// (0x0000ddad) popup_slider_window_g6_ParamLimits

0xddad,	// (0x0000ddad) popup_slider_window_g6

0x82bb,	// (0x000082bb) popup_slider_window_t2_ParamLimits

0x82bb,	// (0x000082bb) popup_slider_window_t2

0x0001,

0xb1b7,	// (0x0000b1b7) popup_slider_window_t_ParamLimits

0xb1b7,	// (0x0000b1b7) popup_slider_window_t

0xddc9,	// (0x0000ddc9) slider_pane_ParamLimits

0xddc9,	// (0x0000ddc9) slider_pane

0x96e9,	// (0x000096e9) slider_pane_g1_ParamLimits

0x96e9,	// (0x000096e9) slider_pane_g1

0x96fd,	// (0x000096fd) slider_pane_g2_ParamLimits

0x96fd,	// (0x000096fd) slider_pane_g2

0x9713,	// (0x00009713) slider_pane_g3_ParamLimits

0x9713,	// (0x00009713) slider_pane_g3

0x0003,

0xb2ce,	// (0x0000b2ce) slider_pane_g_ParamLimits

0xb2ce,	// (0x0000b2ce) slider_pane_g

0xc8b9,	// (0x0000c8b9) popup_tb_float_extension_window_ParamLimits

0xc8b9,	// (0x0000c8b9) popup_tb_float_extension_window

0x973f,	// (0x0000973f) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x974b,	// (0x0000974b) grid_tb_float_ext_pane

0x9755,	// (0x00009755) cell_tb_float_ext_pane_ParamLimits

0x9755,	// (0x00009755) cell_tb_float_ext_pane

0x976f,	// (0x0000976f) cell_tb_float_ext_pane_g1

0x9778,	// (0x00009778) grid_highlight_pane_cp12

0xd5fd,	// (0x0000d5fd) cell_last_hwr_side_pane_ParamLimits

0xd5fd,	// (0x0000d5fd) cell_last_hwr_side_pane

0x6508,	// (0x00006508) cell_last_hwr_side_pane_g1

0x9781,	// (0x00009781) cell_last_hwr_side_pane_g2

0x0001,

0xb2d7,	// (0x0000b2d7) cell_last_hwr_side_pane_g

0xe697,	// (0x0000e697) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe697,	// (0x0000e697) vkb2_area_bottom_space_btn_pane

0x698a,	// (0x0000698a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x91ab,	// (0x000091ab) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x96af,	// (0x000096af) cell_vkb2_top_candi_pane_t1_ParamLimits

0x978a,	// (0x0000978a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x978a,	// (0x0000978a) vkb2_area_bottom_space_btn_pane_g1

0x97c4,	// (0x000097c4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x97c4,	// (0x000097c4) vkb2_area_bottom_space_btn_pane_g2

0x97fa,	// (0x000097fa) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x97fa,	// (0x000097fa) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb2dc,	// (0x0000b2dc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb2dc,	// (0x0000b2dc) vkb2_area_bottom_space_btn_pane_g

0x6627,	// (0x00006627) cel_fep_hwr_func_pane_ParamLimits

0x6627,	// (0x00006627) cel_fep_hwr_func_pane

0xd5d2,	// (0x0000d5d2) cell_hwr_side_button_pane_ParamLimits

0xd5d2,	// (0x0000d5d2) cell_hwr_side_button_pane

0x85e6,	// (0x000085e6) aid_area_touch_clock_ParamLimits

0x082d,	// (0x0000082d) bg_uniindi_top_pane_ParamLimits

0x85f8,	// (0x000085f8) uniindi_top_pane_g1_ParamLimits

0x860e,	// (0x0000860e) uniindi_top_pane_g2_ParamLimits

0x861a,	// (0x0000861a) uniindi_top_pane_g3_ParamLimits

0x862b,	// (0x0000862b) uniindi_top_pane_g4_ParamLimits

0xb1ef,	// (0x0000b1ef) uniindi_top_pane_g_ParamLimits

0x8638,	// (0x00008638) uniindi_top_pane_t1_ParamLimits

0x082d,	// (0x0000082d) bg_vkb2_func_pane_cp01_ParamLimits

0x082d,	// (0x0000082d) bg_vkb2_func_pane_cp01

0x9844,	// (0x00009844) cel_fep_hwr_func_pane_g1_ParamLimits

0x9844,	// (0x00009844) cel_fep_hwr_func_pane_g1

0x082d,	// (0x0000082d) bg_vkb2_func_pane_cp02_ParamLimits

0x082d,	// (0x0000082d) bg_vkb2_func_pane_cp02

0x9844,	// (0x00009844) cell_hwr_side_button_pane_g1_ParamLimits

0x9844,	// (0x00009844) cell_hwr_side_button_pane_g1

0x33de,	// (0x000033de) status_pane_g4_ParamLimits

0x33de,	// (0x000033de) status_pane_g4

0x33f8,	// (0x000033f8) status_pane_t1

0x6222,	// (0x00006222) form2_midp_gauge_slider_cont_pane

0x622a,	// (0x0000622a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd516,	// (0x0000d516) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd52a,	// (0x0000d52a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf024,	// (0x0000f024) form2_midp_gauge_slider_pane_t_ParamLimits

0x6260,	// (0x00006260) form2_midp_slider_pane_ParamLimits

0x8b4a,	// (0x00008b4a) aid_size_cell_func_vkb2_ParamLimits

0x8b4a,	// (0x00008b4a) aid_size_cell_func_vkb2

0x972b,	// (0x0000972b) slider_pane_g4_ParamLimits

0x972b,	// (0x0000972b) slider_pane_g4

0xeb25,	// (0x0000eb25) form2_midp_gauge_slider_pane_t2_cp01

0xeb35,	// (0x0000eb35) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xeb35,	// (0x0000eb35) form2_midp_gauge_slider_pane_t3_cp01

0x987d,	// (0x0000987d) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x98b1,	// (0x000098b1) navi_smil_pane_g1

0x98b9,	// (0x000098b9) navi_smil_pane_t1

0x9886,	// (0x00009886) form2_midp_slider_pane_g1

0x988f,	// (0x0000988f) form2_midp_slider_pane_g2

0x9897,	// (0x00009897) form2_midp_slider_pane_g3

0x9886,	// (0x00009886) form2_midp_slider_pane_g4

0xeb54,	// (0x0000eb54) form2_midp_slider_pane_g5

0x0004,

0xf0e9,	// (0x0000f0e9) form2_midp_slider_pane_g

0x9834,	// (0x00009834) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9834,	// (0x00009834) vkb2_area_bottom_space_btn_pane_g4

0xca9c,	// (0x0000ca9c) lc0_navi_pane_ParamLimits

0xca9c,	// (0x0000ca9c) lc0_navi_pane

0xcb06,	// (0x0000cb06) lc0_stat_indi_pane_ParamLimits

0xcb06,	// (0x0000cb06) lc0_stat_indi_pane

0xcb1b,	// (0x0000cb1b) ls0_title_pane_ParamLimits

0xcb1b,	// (0x0000cb1b) ls0_title_pane

0x1346,	// (0x00001346) bg_popup_sub_pane_cp14_ParamLimits

0x85cd,	// (0x000085cd) list_uniindi_pane_ParamLimits

0x85d9,	// (0x000085d9) uniindi_top_pane_ParamLimits

0x8675,	// (0x00008675) list_single_uniindi_pane_g1_ParamLimits

0x8688,	// (0x00008688) list_single_uniindi_pane_t1_ParamLimits

0xeb5f,	// (0x0000eb5f) lc0_stat_clock_pane_ParamLimits

0xeb5f,	// (0x0000eb5f) lc0_stat_clock_pane

0xeb6c,	// (0x0000eb6c) lc0_stat_indi_pane_g1_ParamLimits

0xeb6c,	// (0x0000eb6c) lc0_stat_indi_pane_g1

0xeb79,	// (0x0000eb79) lc0_stat_indi_pane_g2_ParamLimits

0xeb79,	// (0x0000eb79) lc0_stat_indi_pane_g2

0x0001,

0xf0f4,	// (0x0000f0f4) lc0_stat_indi_pane_g_ParamLimits

0xf0f4,	// (0x0000f0f4) lc0_stat_indi_pane_g

0xeb86,	// (0x0000eb86) lc0_uni_indicator_pane_ParamLimits

0xeb86,	// (0x0000eb86) lc0_uni_indicator_pane

0xeb93,	// (0x0000eb93) ls0_title_pane_g1_ParamLimits

0xeb93,	// (0x0000eb93) ls0_title_pane_g1

0xeba7,	// (0x0000eba7) ls0_title_pane_t1_ParamLimits

0xeba7,	// (0x0000eba7) ls0_title_pane_t1

0xebd5,	// (0x0000ebd5) lc0_uni_indicator_pane_g1_ParamLimits

0xebd5,	// (0x0000ebd5) lc0_uni_indicator_pane_g1

0x995a,	// (0x0000995a) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9968,	// (0x00009968) ai5_sk_pane_ParamLimits

0x9968,	// (0x00009968) ai5_sk_pane

0xec03,	// (0x0000ec03) cell_ai5_widget_pane_ParamLimits

0xec03,	// (0x0000ec03) cell_ai5_widget_pane

0x9a3f,	// (0x00009a3f) aid_size_cell_widget_grid

0x9a4d,	// (0x00009a4d) bg_ai5_widget_pane_ParamLimits

0x9a4d,	// (0x00009a4d) bg_ai5_widget_pane

0x9ac1,	// (0x00009ac1) cell_ai5_widget_pane_g2

0x9ad1,	// (0x00009ad1) cell_ai5_widget_pane_g3

0x9ae8,	// (0x00009ae8) cell_ai5_widget_pane_g4

0x9af4,	// (0x00009af4) cell_ai5_widget_pane_g5

0x9b00,	// (0x00009b00) cell_ai5_widget_pane_g6

0x9b0c,	// (0x00009b0c) cell_ai5_widget_pane_g7

0x9b54,	// (0x00009b54) cell_ai5_widget_pane_t1_ParamLimits

0x9b54,	// (0x00009b54) cell_ai5_widget_pane_t1

0x9b71,	// (0x00009b71) cell_ai5_widget_pane_t2_ParamLimits

0x9b71,	// (0x00009b71) cell_ai5_widget_pane_t2

0x9b89,	// (0x00009b89) cell_ai5_widget_pane_t3_ParamLimits

0x9b89,	// (0x00009b89) cell_ai5_widget_pane_t3

0x9ba1,	// (0x00009ba1) cell_ai5_widget_pane_t4_ParamLimits

0x9ba1,	// (0x00009ba1) cell_ai5_widget_pane_t4

0x9bbe,	// (0x00009bbe) cell_ai5_widget_pane_t5_ParamLimits

0x9bbe,	// (0x00009bbe) cell_ai5_widget_pane_t5

0x9bdd,	// (0x00009bdd) cell_ai5_widget_pane_t6_ParamLimits

0x9bdd,	// (0x00009bdd) cell_ai5_widget_pane_t6

0x9bef,	// (0x00009bef) cell_ai5_widget_pane_t7_ParamLimits

0x9bef,	// (0x00009bef) cell_ai5_widget_pane_t7

0x9c08,	// (0x00009c08) cell_ai5_widget_pane_t8_ParamLimits

0x9c08,	// (0x00009c08) cell_ai5_widget_pane_t8

0x0009,

0xb30a,	// (0x0000b30a) cell_ai5_widget_pane_t_ParamLimits

0xb30a,	// (0x0000b30a) cell_ai5_widget_pane_t

0x9c5c,	// (0x00009c5c) grid_ai5_widget_pane

0x1346,	// (0x00001346) highlight_cell_ai5_widget_pane_ParamLimits

0x1346,	// (0x00001346) highlight_cell_ai5_widget_pane

0xec6d,	// (0x0000ec6d) ai5_sk_left_pane

0xec77,	// (0x0000ec77) ai5_sk_middle_pane

0xec81,	// (0x0000ec81) ai5_sk_right_pane

0x9c8e,	// (0x00009c8e) bg_ai5_widget_pane_g1_ParamLimits

0x9c8e,	// (0x00009c8e) bg_ai5_widget_pane_g1

0x9c9a,	// (0x00009c9a) bg_ai5_widget_pane_g2_ParamLimits

0x9c9a,	// (0x00009c9a) bg_ai5_widget_pane_g2

0x9ca6,	// (0x00009ca6) bg_ai5_widget_pane_g3_ParamLimits

0x9ca6,	// (0x00009ca6) bg_ai5_widget_pane_g3

0x9cb2,	// (0x00009cb2) bg_ai5_widget_pane_g4_ParamLimits

0x9cb2,	// (0x00009cb2) bg_ai5_widget_pane_g4

0x9cbe,	// (0x00009cbe) bg_ai5_widget_pane_g5_ParamLimits

0x9cbe,	// (0x00009cbe) bg_ai5_widget_pane_g5

0x9cca,	// (0x00009cca) bg_ai5_widget_pane_g6_ParamLimits

0x9cca,	// (0x00009cca) bg_ai5_widget_pane_g6

0x9cd6,	// (0x00009cd6) bg_ai5_widget_pane_g7_ParamLimits

0x9cd6,	// (0x00009cd6) bg_ai5_widget_pane_g7

0x9ce2,	// (0x00009ce2) bg_ai5_widget_pane_g8_ParamLimits

0x9ce2,	// (0x00009ce2) bg_ai5_widget_pane_g8

0x9cee,	// (0x00009cee) bg_ai5_widget_pane_g9_ParamLimits

0x9cee,	// (0x00009cee) bg_ai5_widget_pane_g9

0x0008,

0xb31f,	// (0x0000b31f) bg_ai5_widget_pane_g_ParamLimits

0xb31f,	// (0x0000b31f) bg_ai5_widget_pane_g

0x9d20,	// (0x00009d20) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d20,	// (0x00009d20) cell_shortcut_ai5_widget_pane

0x2553,	// (0x00002553) bg_cell_shortcut_ai5_widget_pane

0x9d31,	// (0x00009d31) cell_grid_ai5_widget_pane_g1

0x9d3a,	// (0x00009d3a) highlight_cell_shortcut_ai5_widget_pane

0x35fb,	// (0x000035fb) ai5_sk_left_pane_g1

0x9d42,	// (0x00009d42) ai5_sk_left_pane_g2

0x9d4a,	// (0x00009d4a) ai5_sk_left_pane_g3

0x9d52,	// (0x00009d52) ai5_sk_left_pane_g4

0x0003,

0xb332,	// (0x0000b332) ai5_sk_left_pane_g

0x9d5a,	// (0x00009d5a) ai5_sk_left_pane_t1

0x35f3,	// (0x000035f3) ai5_sk_right_pane_g1

0x9d68,	// (0x00009d68) ai5_sk_right_pane_g2

0x9d70,	// (0x00009d70) ai5_sk_right_pane_g3

0x9d78,	// (0x00009d78) ai5_sk_right_pane_g4

0x0003,

0xb33b,	// (0x0000b33b) ai5_sk_right_pane_g

0x9d80,	// (0x00009d80) ai5_sk_right_pane_t1

0x35f3,	// (0x000035f3) ai5_sk_middle_pane_g1

0x35fb,	// (0x000035fb) ai5_sk_middle_pane_g2

0x3613,	// (0x00003613) ai5_sk_middle_pane_g3

0x9d70,	// (0x00009d70) ai5_sk_middle_pane_g4

0x9d4a,	// (0x00009d4a) ai5_sk_middle_pane_g5

0x9d8e,	// (0x00009d8e) ai5_sk_middle_pane_g6

0xec8b,	// (0x0000ec8b) ai5_sk_middle_pane_g7

0x0006,

0xf0f9,	// (0x0000f0f9) ai5_sk_middle_pane_g

0xc988,	// (0x0000c988) aid_touch_area_size_lc0_ParamLimits

0xc988,	// (0x0000c988) aid_touch_area_size_lc0

0x6d37,	// (0x00006d37) cell_hwr_candidate_pane_t1_ParamLimits

0x30c1,	// (0x000030c1) aid_touch_navi_pane

0xcc14,	// (0x0000cc14) status_dt_navi_pane_ParamLimits

0xcc14,	// (0x0000cc14) status_dt_navi_pane

0xcc2c,	// (0x0000cc2c) status_dt_sta_pane_ParamLimits

0xcc2c,	// (0x0000cc2c) status_dt_sta_pane

0xec93,	// (0x0000ec93) dt_sta_controll_pane

0xeca0,	// (0x0000eca0) dt_sta_indi_pane

0xecad,	// (0x0000ecad) dt_sta_title_pane

0x082d,	// (0x0000082d) bg_dt_sta_indi_pane_ParamLimits

0x082d,	// (0x0000082d) bg_dt_sta_indi_pane

0x9dcf,	// (0x00009dcf) dt_sta_battery_pane

0xecbf,	// (0x0000ecbf) dt_sta_indi_pane_g1

0xecc8,	// (0x0000ecc8) dt_sta_indi_pane_g2

0xecd1,	// (0x0000ecd1) dt_sta_indi_pane_g3

0x0002,

0xf108,	// (0x0000f108) dt_sta_indi_pane_g

0xecda,	// (0x0000ecda) dt_sta_signal_pane

0x1346,	// (0x00001346) bg_dt_sta_title_pane_ParamLimits

0x1346,	// (0x00001346) bg_dt_sta_title_pane

0x9dfb,	// (0x00009dfb) dt_sta_title_pane_g1

0xece3,	// (0x0000ece3) dt_sta_title_pane_t1_ParamLimits

0xece3,	// (0x0000ece3) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xecf8,	// (0x0000ecf8) dt_sta_controll_pane_g1

0x9e21,	// (0x00009e21) bg_dt_sta_title_pane_g1

0x9e2a,	// (0x00009e2a) bg_dt_sta_title_pane_g2

0x9e33,	// (0x00009e33) bg_dt_sta_title_pane_g3

0x0002,

0xb35a,	// (0x0000b35a) bg_dt_sta_title_pane_g

0x6508,	// (0x00006508) bg_dt_sta_indi_pane_g1

0x9e3c,	// (0x00009e3c) dt_sta_signal_pane_g1

0x9e44,	// (0x00009e44) dt_sta_signal_pane_g2

0x0001,

0xb361,	// (0x0000b361) dt_sta_signal_pane_g

0x9e4c,	// (0x00009e4c) dt_sta_battery_pane_g1

0x9e55,	// (0x00009e55) dt_sta_battery_pane_t1

0x6508,	// (0x00006508) bg_dt_sta_control_pane_g1

0x1e9a,	// (0x00001e9a) fep_china_uni_eep_pane

0x1ea2,	// (0x00001ea2) fep_china_uni_entry_pane_ParamLimits

0x1eb2,	// (0x00001eb2) popup_fep_china_uni_window_g1_ParamLimits

0x1ec2,	// (0x00001ec2) popup_fep_china_uni_window_g2_ParamLimits

0x1ec2,	// (0x00001ec2) popup_fep_china_uni_window_g2

0x0001,

0xabda,	// (0x0000abda) popup_fep_china_uni_window_g_ParamLimits

0xabda,	// (0x0000abda) popup_fep_china_uni_window_g

0x9e64,	// (0x00009e64) fep_china_uni_eep_pane_g1

0x9e6c,	// (0x00009e6c) fep_china_uni_eep_pane_t1

0x98a8,	// (0x000098a8) aid_touch_area_size_smil_player

0x320d,	// (0x0000320d) lc0_clock_pane

0x33ec,	// (0x000033ec) status_pane_g5_ParamLimits

0x33ec,	// (0x000033ec) status_pane_g5

0xc447,	// (0x0000c447) popup_keymap_window

0x33b2,	// (0x000033b2) status_icon_pane

0x9ad1,	// (0x00009ad1) cell_ai5_widget_pane_g3_ParamLimits

0x9ae8,	// (0x00009ae8) cell_ai5_widget_pane_g4_ParamLimits

0x9af4,	// (0x00009af4) cell_ai5_widget_pane_g5_ParamLimits

0x9b18,	// (0x00009b18) cell_ai5_widget_pane_g8_ParamLimits

0x9b18,	// (0x00009b18) cell_ai5_widget_pane_g8

0x9b2c,	// (0x00009b2c) cell_ai5_widget_pane_g9_ParamLimits

0x9b2c,	// (0x00009b2c) cell_ai5_widget_pane_g9

0x9b40,	// (0x00009b40) cell_ai5_widget_pane_g10_ParamLimits

0x9b40,	// (0x00009b40) cell_ai5_widget_pane_g10

0x9e7b,	// (0x00009e7b) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9e83,	// (0x00009e83) popup_keymap_window_t1

0xc173,	// (0x0000c173) control_pane_g6_ParamLimits

0xc173,	// (0x0000c173) control_pane_g6

0xc180,	// (0x0000c180) control_pane_g7_ParamLimits

0xc180,	// (0x0000c180) control_pane_g7

0xc18d,	// (0x0000c18d) control_pane_g8_ParamLimits

0xc18d,	// (0x0000c18d) control_pane_g8

0xec93,	// (0x0000ec93) dt_sta_controll_pane_ParamLimits

0xeca0,	// (0x0000eca0) dt_sta_indi_pane_ParamLimits

0xecad,	// (0x0000ecad) dt_sta_title_pane_ParamLimits

0x0d33,	// (0x00000d33) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb516,	// (0x0000b516) popup_sk_window

0x3e64,	// (0x00003e64) bg_popup_sub_pane_cp28_ParamLimits

0x3e64,	// (0x00003e64) bg_popup_sub_pane_cp28

0x9e91,	// (0x00009e91) popup_discreet_window_g1_ParamLimits

0x9e91,	// (0x00009e91) popup_discreet_window_g1

0x9eb1,	// (0x00009eb1) popup_discreet_window_t1_ParamLimits

0x9eb1,	// (0x00009eb1) popup_discreet_window_t1

0x9ecf,	// (0x00009ecf) popup_discreet_window_t2_ParamLimits

0x9ecf,	// (0x00009ecf) popup_discreet_window_t2

0x0002,

0xb366,	// (0x0000b366) popup_discreet_window_t_ParamLimits

0xb366,	// (0x0000b366) popup_discreet_window_t

0x9f21,	// (0x00009f21) popup_sk_window_g1

0x9f2b,	// (0x00009f2b) popup_sk_window_g2

0x0001,

0xb36d,	// (0x0000b36d) popup_sk_window_g

0x9f35,	// (0x00009f35) popup_sk_window_t1

0x9f43,	// (0x00009f43) popup_sk_window_t1_copy1

0x9ac1,	// (0x00009ac1) cell_ai5_widget_pane_g2_ParamLimits

0x9c1a,	// (0x00009c1a) cell_ai5_widget_pane_t9_ParamLimits

0x9c1a,	// (0x00009c1a) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xed01,	// (0x0000ed01) aid_fshwr2_btn_pane

0xed12,	// (0x0000ed12) aid_fshwr2_syb_pane

0xed23,	// (0x0000ed23) aid_fshwr2_txt_pane

0xed2f,	// (0x0000ed2f) fshwr2_func_candi_pane

0xed4e,	// (0x0000ed4e) fshwr2_hwr_syb_pane

0xed69,	// (0x0000ed69) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xed94,	// (0x0000ed94) fshwr2_icf_pane_t1_ParamLimits

0xed94,	// (0x0000ed94) fshwr2_icf_pane_t1

0x1cbe,	// (0x00001cbe) fshwr2_func_candi_pane_g1

0xedad,	// (0x0000edad) fshwr2_func_candi_row_pane_ParamLimits

0xedad,	// (0x0000edad) fshwr2_func_candi_row_pane

0xedbd,	// (0x0000edbd) cell_fshwr2_syb_pane_ParamLimits

0xedbd,	// (0x0000edbd) cell_fshwr2_syb_pane

0x698a,	// (0x0000698a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x698a,	// (0x0000698a) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xedd7,	// (0x0000edd7) fshwr2_func_candi_cell_pane_ParamLimits

0xedd7,	// (0x0000edd7) fshwr2_func_candi_cell_pane

0x462d,	// (0x0000462d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x462d,	// (0x0000462d) fshwr2_func_candi_cell_bg_pane

0xee02,	// (0x0000ee02) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xee02,	// (0x0000ee02) fshwr2_func_candi_cell_pane_g1

0xa05f,	// (0x0000a05f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa05f,	// (0x0000a05f) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x2553,	// (0x00002553) cell_fshwr2_syb_bg_pane

0xee22,	// (0x0000ee22) cell_fshwr2_syb_bg_pane_g1

0xee2a,	// (0x0000ee2a) cell_fshwr2_syb_bg_pane_t1

0x1346,	// (0x00001346) main_tmo_pane

0xd07a,	// (0x0000d07a) uni_indicator_pane_g1_ParamLimits

0xd091,	// (0x0000d091) uni_indicator_pane_g2_ParamLimits

0xd0a7,	// (0x0000d0a7) uni_indicator_pane_g3_ParamLimits

0x4b13,	// (0x00004b13) uni_indicator_pane_g4_ParamLimits

0x4b13,	// (0x00004b13) uni_indicator_pane_g4

0x4b27,	// (0x00004b27) uni_indicator_pane_g5_ParamLimits

0x4b27,	// (0x00004b27) uni_indicator_pane_g5

0x4b27,	// (0x00004b27) uni_indicator_pane_g6_ParamLimits

0x4b27,	// (0x00004b27) uni_indicator_pane_g6

0xefd5,	// (0x0000efd5) uni_indicator_pane_g_ParamLimits

0xdc61,	// (0x0000dc61) popup_tmo_note_window_ParamLimits

0xdc61,	// (0x0000dc61) popup_tmo_note_window

0x1346,	// (0x00001346) fshwr2_bg_pane

0xee13,	// (0x0000ee13) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xee13,	// (0x0000ee13) fshwr2_func_candi_cell_pane_g2

0x0001,

0xf10f,	// (0x0000f10f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xf10f,	// (0x0000f10f) fshwr2_func_candi_cell_pane_g

0x6508,	// (0x00006508) bg_popup_window_pane_cp01

0xa089,	// (0x0000a089) bg_popup_window_pane_g1_cp01

0xa092,	// (0x0000a092) bg_popup_window_pane_cp22_ParamLimits

0xa092,	// (0x0000a092) bg_popup_window_pane_cp22

0xa0a0,	// (0x0000a0a0) listscroll_tmo_link_pane_ParamLimits

0xa0a0,	// (0x0000a0a0) listscroll_tmo_link_pane

0xa0e0,	// (0x0000a0e0) popup_tmo_note_window_g1_ParamLimits

0xa0e0,	// (0x0000a0e0) popup_tmo_note_window_g1

0xa0ed,	// (0x0000a0ed) tmo_note_info_pane_ParamLimits

0xa0ed,	// (0x0000a0ed) tmo_note_info_pane

0xee39,	// (0x0000ee39) list_tmo_note_info_pane_g1_ParamLimits

0xee39,	// (0x0000ee39) list_tmo_note_info_pane_g1

0xa11e,	// (0x0000a11e) list_tmo_note_info_pane_g2_ParamLimits

0xa11e,	// (0x0000a11e) list_tmo_note_info_pane_g2

0x0001,

0xf114,	// (0x0000f114) list_tmo_note_info_pane_g_ParamLimits

0xf114,	// (0x0000f114) list_tmo_note_info_pane_g

0xa13a,	// (0x0000a13a) list_tmo_note_info_text_pane_ParamLimits

0xa13a,	// (0x0000a13a) list_tmo_note_info_text_pane

0xa1bd,	// (0x0000a1bd) list_tmo_link_pane

0xa1ca,	// (0x0000a1ca) scroll_pane_cp20

0xa1d7,	// (0x0000a1d7) list_single_tmo_link_pane_ParamLimits

0xa1d7,	// (0x0000a1d7) list_single_tmo_link_pane

0xa1e7,	// (0x0000a1e7) list_single_tmo_link_pane_t1

0xa1f5,	// (0x0000a1f5) list_tmo_note_info_text_pane_t1_ParamLimits

0xa1f5,	// (0x0000a1f5) list_tmo_note_info_text_pane_t1

0xbdfc,	// (0x0000bdfc) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbdfc,	// (0x0000bdfc) aid_size_touch_scroll_bar_cp01

0xbd58,	// (0x0000bd58) aid_size_touch_slider_marker

0xb506,	// (0x0000b506) popup_settings_window_ParamLimits

0xb506,	// (0x0000b506) popup_settings_window

0x2aee,	// (0x00002aee) popup_candi_list_indi_window

0x30c1,	// (0x000030c1) aid_touch_navi_pane_ParamLimits

0x8350,	// (0x00008350) rs_clock_indi_pane

0x8359,	// (0x00008359) sctrl_sk_bottom_pane_ParamLimits

0x836a,	// (0x0000836a) sctrl_sk_top_pane_ParamLimits

0x8ba4,	// (0x00008ba4) popup_fep_tooltip_window

0x9a3f,	// (0x00009a3f) aid_size_cell_widget_grid_ParamLimits

0x9aac,	// (0x00009aac) cell_ai5_widget_pane_g1_ParamLimits

0x9aac,	// (0x00009aac) cell_ai5_widget_pane_g1

0x9b00,	// (0x00009b00) cell_ai5_widget_pane_g6_ParamLimits

0x9b0c,	// (0x00009b0c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb2f5,	// (0x0000b2f5) cell_ai5_widget_pane_g_ParamLimits

0xb2f5,	// (0x0000b2f5) cell_ai5_widget_pane_g

0x9c3e,	// (0x00009c3e) cell_ai5_widget_pane_t10_ParamLimits

0x9c3e,	// (0x00009c3e) cell_ai5_widget_pane_t10

0x9c5c,	// (0x00009c5c) grid_ai5_widget_pane_ParamLimits

0x9cfa,	// (0x00009cfa) cell_contacts_ai5_widget_pane_ParamLimits

0x9cfa,	// (0x00009cfa) cell_contacts_ai5_widget_pane

0x9ee4,	// (0x00009ee4) popup_discreet_window_t3_ParamLimits

0x9ee4,	// (0x00009ee4) popup_discreet_window_t3

0xed7e,	// (0x0000ed7e) popup_fshwr2_char_preview_window_ParamLimits

0xed7e,	// (0x0000ed7e) popup_fshwr2_char_preview_window

0xee50,	// (0x0000ee50) tmo_note_info_pane_t1

0xee65,	// (0x0000ee65) tmo_note_info_pane_t2

0xee7e,	// (0x0000ee7e) tmo_note_info_pane_t3

0xa199,	// (0x0000a199) tmo_note_info_pane_t4

0xa1ab,	// (0x0000a1ab) tmo_note_info_pane_t5

0x0004,

0xf119,	// (0x0000f119) tmo_note_info_pane_t

0xa1bd,	// (0x0000a1bd) list_tmo_link_pane_ParamLimits

0xa1ca,	// (0x0000a1ca) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa20e,	// (0x0000a20e) popup_fshwr2_char_preview_window_t1

0xa21c,	// (0x0000a21c) popup_candi_list_indi_window_g1

0xa225,	// (0x0000a225) bg_cell_contacts_ai5_widget_pane

0xa231,	// (0x0000a231) cell_contacts_ai5_widget_pane_g1

0xa244,	// (0x0000a244) cell_contacts_ai5_widget_pane_g2

0xa250,	// (0x0000a250) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb387,	// (0x0000b387) cell_contacts_ai5_widget_pane_g

0xa262,	// (0x0000a262) cell_contacts_ai5_widget_pane_t1

0x1346,	// (0x00001346) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa2dc,	// (0x0000a2dc) settings_container_pane

0x2553,	// (0x00002553) listscroll_set_pane_copy1

0x5936,	// (0x00005936) scroll_pane_cp121_copy1

0xa2e8,	// (0x0000a2e8) set_content_pane_copy1

0xa2f0,	// (0x0000a2f0) aid_height_set_list_copy1_ParamLimits

0xa2f0,	// (0x0000a2f0) aid_height_set_list_copy1

0x4df4,	// (0x00004df4) aid_size_parent_copy1_ParamLimits

0x4df4,	// (0x00004df4) aid_size_parent_copy1

0xa2fc,	// (0x0000a2fc) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa2fc,	// (0x0000a2fc) button_value_adjust_pane_cp6_copy1

0x2ac6,	// (0x00002ac6) list_highlight_pane_cp2_copy1_ParamLimits

0x2ac6,	// (0x00002ac6) list_highlight_pane_cp2_copy1

0xa310,	// (0x0000a310) list_set_pane_copy1_ParamLimits

0xa310,	// (0x0000a310) list_set_pane_copy1

0xa277,	// (0x0000a277) main_pane_set_t1_copy1_ParamLimits

0xa277,	// (0x0000a277) main_pane_set_t1_copy1

0xa2b1,	// (0x0000a2b1) main_pane_set_t2_copy1_ParamLimits

0xa2b1,	// (0x0000a2b1) main_pane_set_t2_copy1

0xa3bd,	// (0x0000a3bd) main_pane_set_t3_copy1

0xa3cb,	// (0x0000a3cb) main_pane_set_t4_copy1

0xa2d0,	// (0x0000a2d0) set_content_pane_g1_copy1_ParamLimits

0xa2d0,	// (0x0000a2d0) set_content_pane_g1_copy1

0xa3d9,	// (0x0000a3d9) setting_code_pane_copy1

0xa3e1,	// (0x0000a3e1) setting_slider_graphic_pane_copy1

0xa3e1,	// (0x0000a3e1) setting_slider_pane_copy1

0xa3e1,	// (0x0000a3e1) setting_text_pane_copy1

0xa3e1,	// (0x0000a3e1) setting_volume_pane_copy1

0xa3d9,	// (0x0000a3d9) settings_code_pane_cp2_copy1

0xa3e9,	// (0x0000a3e9) settings_code_pane_cp_copy1_ParamLimits

0xa3e9,	// (0x0000a3e9) settings_code_pane_cp_copy1

0xa3fd,	// (0x0000a3fd) volume_set_pane_copy1

0xa405,	// (0x0000a405) volume_set_pane_g10_copy1

0xa40d,	// (0x0000a40d) volume_set_pane_g1_copy1

0xa415,	// (0x0000a415) volume_set_pane_g2_copy1

0xa41d,	// (0x0000a41d) volume_set_pane_g3_copy1

0xa425,	// (0x0000a425) volume_set_pane_g4_copy1

0xa42d,	// (0x0000a42d) volume_set_pane_g5_copy1

0xa435,	// (0x0000a435) volume_set_pane_g6_copy1

0xa43d,	// (0x0000a43d) volume_set_pane_g7_copy1

0xa445,	// (0x0000a445) volume_set_pane_g8_copy1

0xa44d,	// (0x0000a44d) volume_set_pane_g9_copy1

0x04f9,	// (0x000004f9) bg_set_opt_pane_cp_copy1_ParamLimits

0x04f9,	// (0x000004f9) bg_set_opt_pane_cp_copy1

0xa455,	// (0x0000a455) setting_slider_pane_t1_copy1_ParamLimits

0xa455,	// (0x0000a455) setting_slider_pane_t1_copy1

0xa473,	// (0x0000a473) setting_slider_pane_t2_copy1_ParamLimits

0xa473,	// (0x0000a473) setting_slider_pane_t2_copy1

0xa48d,	// (0x0000a48d) setting_slider_pane_t3_copy1_ParamLimits

0xa48d,	// (0x0000a48d) setting_slider_pane_t3_copy1

0xa4a5,	// (0x0000a4a5) slider_set_pane_copy1_ParamLimits

0xa4a5,	// (0x0000a4a5) slider_set_pane_copy1

0x1473,	// (0x00001473) set_opt_bg_pane_g1_copy2

0x147b,	// (0x0000147b) set_opt_bg_pane_g2_copy2

0xa4bb,	// (0x0000a4bb) set_opt_bg_pane_g3_copy2

0x148b,	// (0x0000148b) set_opt_bg_pane_g4_copy2

0x1493,	// (0x00001493) set_opt_bg_pane_g5_copy2

0x149b,	// (0x0000149b) set_opt_bg_pane_g6_copy2

0xa4c5,	// (0x0000a4c5) set_opt_bg_pane_g7_copy2

0xa4cd,	// (0x0000a4cd) set_opt_bg_pane_g8_copy2

0xa4d7,	// (0x0000a4d7) set_opt_bg_pane_g9_copy2

0xa4e1,	// (0x0000a4e1) aid_size_touch_slider_mark_copy1_ParamLimits

0xa4e1,	// (0x0000a4e1) aid_size_touch_slider_mark_copy1

0xa4f5,	// (0x0000a4f5) slider_set_pane_g1_copy1

0xa4fe,	// (0x0000a4fe) slider_set_pane_g2_copy1

0x4d63,	// (0x00004d63) slider_set_pane_g3_copy1_ParamLimits

0x4d63,	// (0x00004d63) slider_set_pane_g3_copy1

0x4d77,	// (0x00004d77) slider_set_pane_g4_copy1_ParamLimits

0x4d77,	// (0x00004d77) slider_set_pane_g4_copy1

0x4d8f,	// (0x00004d8f) slider_set_pane_g5_copy1_ParamLimits

0x4d8f,	// (0x00004d8f) slider_set_pane_g5_copy1

0x4d63,	// (0x00004d63) slider_set_pane_g6_copy1_ParamLimits

0x4d63,	// (0x00004d63) slider_set_pane_g6_copy1

0xa506,	// (0x0000a506) slider_set_pane_g7_copy1_ParamLimits

0xa506,	// (0x0000a506) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa51c,	// (0x0000a51c) setting_slider_graphic_pane_g1_copy1

0xa525,	// (0x0000a525) setting_slider_graphic_pane_t1_copy1

0xa535,	// (0x0000a535) setting_slider_graphic_pane_t2_copy1

0xa545,	// (0x0000a545) slider_set_pane_cp_copy1

0xa555,	// (0x0000a555) input_focus_pane_cp1_copy1

0xa55e,	// (0x0000a55e) list_set_text_pane_copy1

0xa566,	// (0x0000a566) setting_text_pane_g1_copy1

0xa56f,	// (0x0000a56f) set_text_pane_t1_copy1

0xa555,	// (0x0000a555) input_focus_pane_cp2_copy1

0xa566,	// (0x0000a566) setting_code_pane_g1_copy1

0xa58a,	// (0x0000a58a) setting_code_pane_t1_copy1

0x5723,	// (0x00005723) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x2269,	// (0x00002269) list_set_graphic_pane_g1_copy1_ParamLimits

0x2269,	// (0x00002269) list_set_graphic_pane_g1_copy1

0xa598,	// (0x0000a598) list_set_graphic_pane_g2_copy1

0x2281,	// (0x00002281) list_set_graphic_pane_t1_copy1_ParamLimits

0x2281,	// (0x00002281) list_set_graphic_pane_t1_copy1

0x6508,	// (0x00006508) rs_clock_indi_pane_g1

0xa5a0,	// (0x0000a5a0) rs_clock_indi_pane_t1

0xa5ae,	// (0x0000a5ae) rs_indi_pane

0xa5b6,	// (0x0000a5b6) rs_indi_pane_g1

0xa5bf,	// (0x0000a5bf) rs_indi_pane_g2

0xa5c8,	// (0x0000a5c8) rs_indi_pane_g3

0x0002,

0xb38e,	// (0x0000b38e) rs_indi_pane_g

0x2553,	// (0x00002553) bg_popup_preview_window_pane_cp03

0xa5d1,	// (0x0000a5d1) popup_fep_tooltip_window_t1

0x7725,	// (0x00007725) popup_note2_window_g2_ParamLimits

0x7725,	// (0x00007725) popup_note2_window_g2

0x0001,

0xb127,	// (0x0000b127) popup_note2_window_g_ParamLimits

0xb127,	// (0x0000b127) popup_note2_window_g

0x7d21,	// (0x00007d21) bg_popup_sub_pane_cp11_ParamLimits

0x7d2e,	// (0x00007d2e) cell_ai3_links_pane_g1_ParamLimits

0x7d45,	// (0x00007d45) cell_ai3_links_pane_t1

0xa56f,	// (0x0000a56f) set_text_pane_t1_copy1_ParamLimits

0x2470,	// (0x00002470) cell_graphic_popup_pane_cp2_ParamLimits

0x2470,	// (0x00002470) cell_graphic_popup_pane_cp2

0xa5df,	// (0x0000a5df) cell_graphic_popup_pane_g1_cp2

0x0b46,	// (0x00000b46) cell_graphic_popup_pane_g2_cp2

0xa5e7,	// (0x0000a5e7) cell_graphic_popup_pane_g3_cp2

0xa5ef,	// (0x0000a5ef) cell_graphic_popup_pane_t2_cp2

0x0b57,	// (0x00000b57) grid_highlight_pane_cp3_cp2

0x19cd,	// (0x000019cd) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1346,	// (0x00001346) main_tmo_pane_ParamLimits

0xdc55,	// (0x0000dc55) popup_tmo_big_image_note_window

0x9a9b,	// (0x00009a9b) cell_ai5_widget_list_pane

0x9aa3,	// (0x00009aa3) cell_ai5_widget_lrg_icon_pane

0xee50,	// (0x0000ee50) tmo_note_info_pane_t1_ParamLimits

0xee65,	// (0x0000ee65) tmo_note_info_pane_t2_ParamLimits

0xee7e,	// (0x0000ee7e) tmo_note_info_pane_t3_ParamLimits

0xa199,	// (0x0000a199) tmo_note_info_pane_t4_ParamLimits

0xa1ab,	// (0x0000a1ab) tmo_note_info_pane_t5_ParamLimits

0xf119,	// (0x0000f119) tmo_note_info_pane_t_ParamLimits

0xa2dc,	// (0x0000a2dc) settings_container_pane_ParamLimits

0xa54d,	// (0x0000a54d) indicator_popup_pane_cp5

0xa54d,	// (0x0000a54d) indicator_popup_pane_cp6

0x5723,	// (0x00005723) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa5fd,	// (0x0000a5fd) popup_tmo_big_image_note_window_g1

0xa606,	// (0x0000a606) popup_tmo_big_image_note_window_t1

0xa616,	// (0x0000a616) popup_tmo_big_image_note_window_t2

0xa626,	// (0x0000a626) popup_tmo_big_image_note_window_t3

0x0002,

0xb395,	// (0x0000b395) popup_tmo_big_image_note_window_t

0x6508,	// (0x00006508) cell_ai5_widget_lrg_icon_pane_g1

0xa636,	// (0x0000a636) cell_ai5_widget_lrg_icon_pane_t1

0xa644,	// (0x0000a644) cell_ai5_widget_list_row_pane_ParamLimits

0xa644,	// (0x0000a644) cell_ai5_widget_list_row_pane

0xa65d,	// (0x0000a65d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa65d,	// (0x0000a65d) cell_ai5_widget_list_row_pane_g1

0xa66a,	// (0x0000a66a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa66a,	// (0x0000a66a) cell_ai5_widget_list_row_pane_t1

0xa698,	// (0x0000a698) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa698,	// (0x0000a698) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb39c,	// (0x0000b39c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb39c,	// (0x0000b39c) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa6cf,	// (0x0000a6cf) popup_fep_char_pre_window

0xa6d7,	// (0x0000a6d7) popup_fep_ituss_window

0xa6f8,	// (0x0000a6f8) popup_fep_vkbss_window

0xa717,	// (0x0000a717) grid_vkbss_keypad_pane_ParamLimits

0xa717,	// (0x0000a717) grid_vkbss_keypad_pane

0xa727,	// (0x0000a727) ituss_keypad_pane

0xa743,	// (0x0000a743) aid_vkbss_key_offset_ParamLimits

0xa743,	// (0x0000a743) aid_vkbss_key_offset

0xa74f,	// (0x0000a74f) cell_vkbss_key_pane_ParamLimits

0xa74f,	// (0x0000a74f) cell_vkbss_key_pane

0x33c6,	// (0x000033c6) bg_cell_vkbss_key_g1_ParamLimits

0x33c6,	// (0x000033c6) bg_cell_vkbss_key_g1

0xa765,	// (0x0000a765) cell_vkbss_key_3p_pane_ParamLimits

0xa765,	// (0x0000a765) cell_vkbss_key_3p_pane

0xa77f,	// (0x0000a77f) cell_vkbss_key_g1_ParamLimits

0xa77f,	// (0x0000a77f) cell_vkbss_key_g1

0xa799,	// (0x0000a799) cell_vkbss_key_t1_ParamLimits

0xa799,	// (0x0000a799) cell_vkbss_key_t1

0xa7c4,	// (0x0000a7c4) cell_ituss_key_pane_ParamLimits

0xa7c4,	// (0x0000a7c4) cell_ituss_key_pane

0xa7d5,	// (0x0000a7d5) bg_cell_ituss_key_g1_ParamLimits

0xa7d5,	// (0x0000a7d5) bg_cell_ituss_key_g1

0xa7e1,	// (0x0000a7e1) cell_ituss_key_pane_g1_ParamLimits

0xa7e1,	// (0x0000a7e1) cell_ituss_key_pane_g1

0xa7f5,	// (0x0000a7f5) cell_ituss_key_pane_g2_ParamLimits

0xa7f5,	// (0x0000a7f5) cell_ituss_key_pane_g2

0x0001,

0xb3a3,	// (0x0000b3a3) cell_ituss_key_pane_g_ParamLimits

0xb3a3,	// (0x0000b3a3) cell_ituss_key_pane_g

0xa823,	// (0x0000a823) cell_ituss_key_t1_ParamLimits

0xa823,	// (0x0000a823) cell_ituss_key_t1

0xa85d,	// (0x0000a85d) cell_ituss_key_t2_ParamLimits

0xa85d,	// (0x0000a85d) cell_ituss_key_t2

0xa88e,	// (0x0000a88e) cell_ituss_key_t3_ParamLimits

0xa88e,	// (0x0000a88e) cell_ituss_key_t3

0xa8c8,	// (0x0000a8c8) cell_ituss_key_t4_ParamLimits

0xa8c8,	// (0x0000a8c8) cell_ituss_key_t4

0x0003,

0xb3a8,	// (0x0000b3a8) cell_ituss_key_t_ParamLimits

0xb3a8,	// (0x0000b3a8) cell_ituss_key_t

0xa902,	// (0x0000a902) cell_vkbss_key_3p_pane_g1

0xa90a,	// (0x0000a90a) cell_vkbss_key_3p_pane_g2

0xa912,	// (0x0000a912) cell_vkbss_key_3p_pane_g3

0x0002,

0xb3b1,	// (0x0000b3b1) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa91a,	// (0x0000a91a) popup_fep_char_pre_window_t1

0xec63,	// (0x0000ec63) main_ai5_sk_pane

0xa225,	// (0x0000a225) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa231,	// (0x0000a231) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa244,	// (0x0000a244) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa250,	// (0x0000a250) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb387,	// (0x0000b387) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa262,	// (0x0000a262) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1346,	// (0x00001346) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xee93,	// (0x0000ee93) main_ai5_sk_pane_g1

0x3ca2,	// (0x00003ca2) popup_query_code_window_g1

0xa6ed,	// (0x0000a6ed) popup_fep_vkb_icf_pane

0xa701,	// (0x0000a701) popup_fep_vtchi_icf_pane

0x1346,	// (0x00001346) bg_icf_pane

0xa932,	// (0x0000a932) list_vkb_icf_pane

0x1346,	// (0x00001346) bg_icf_pane_cp01

0xa93e,	// (0x0000a93e) vtchi_icf_list_pane

0xa94f,	// (0x0000a94f) list_vkb_icf_pane_t1_ParamLimits

0xa94f,	// (0x0000a94f) list_vkb_icf_pane_t1

0xa967,	// (0x0000a967) vtchi_icf_list_pane_t1_ParamLimits

0xa967,	// (0x0000a967) vtchi_icf_list_pane_t1

0xa6d7,	// (0x0000a6d7) popup_fep_ituss_window_ParamLimits

0xa701,	// (0x0000a701) popup_fep_vtchi_icf_pane_ParamLimits

0xa727,	// (0x0000a727) ituss_keypad_pane_ParamLimits

0xa737,	// (0x0000a737) ituss_sks_pane

0x1346,	// (0x00001346) bg_icf_pane_ParamLimits

0xa6c0,	// (0x0000a6c0) icf_edit_indi_pane_ParamLimits

0xa6c0,	// (0x0000a6c0) icf_edit_indi_pane

0xa932,	// (0x0000a932) list_vkb_icf_pane_ParamLimits

0x1346,	// (0x00001346) bg_icf_pane_cp01_ParamLimits

0xa6c0,	// (0x0000a6c0) icf_edit_indi_pane_cp01_ParamLimits

0xa6c0,	// (0x0000a6c0) icf_edit_indi_pane_cp01

0xa946,	// (0x0000a946) vtchi_query_pane

0x698a,	// (0x0000698a) icf_edit_indi_pane_g1_ParamLimits

0x698a,	// (0x0000698a) icf_edit_indi_pane_g1

0xa9f3,	// (0x0000a9f3) icf_edit_indi_pane_g2_ParamLimits

0xa9f3,	// (0x0000a9f3) icf_edit_indi_pane_g2

0x0001,

0xb3c9,	// (0x0000b3c9) icf_edit_indi_pane_g_ParamLimits

0xb3c9,	// (0x0000b3c9) icf_edit_indi_pane_g

0xaa02,	// (0x0000aa02) icf_edit_indi_pane_t1

0xa989,	// (0x0000a989) bg_input_focus_pane_cp042

0x0d2a,	// (0x00000d2a) vtchi_button_pane

0xa992,	// (0x0000a992) vtchi_query_pane_t1

0xa9a0,	// (0x0000a9a0) vtchi_query_pane_t2

0xa9ae,	// (0x0000a9ae) vtchi_query_pane_t3

0x0002,

0xb3b8,	// (0x0000b3b8) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xa9bc,	// (0x0000a9bc) vtchi_button_pane_g1

0xa9c4,	// (0x0000a9c4) ituss_sks_pane_g1

0xa9cf,	// (0x0000a9cf) ituss_sks_pane_g2

0x0001,

0xb3bf,	// (0x0000b3bf) ituss_sks_pane_g

0xa9d7,	// (0x0000a9d7) ituss_sks_pane_t1

0xa9e5,	// (0x0000a9e5) ituss_sks_pane_t2

0x0001,

0xb3c4,	// (0x0000b3c4) ituss_sks_pane_t

0x5edb,	// (0x00005edb) indicator_nsta_pane_cp_g1

0x5ee4,	// (0x00005ee4) indicator_nsta_pane_cp_g2

0x5eec,	// (0x00005eec) indicator_nsta_pane_cp_g3

0x5ef4,	// (0x00005ef4) indicator_nsta_pane_cp_g4

0x5efc,	// (0x00005efc) indicator_nsta_pane_cp_g5

0x5efc,	// (0x00005efc) indicator_nsta_pane_cp_g6

0x0005,

0xaf71,	// (0x0000af71) indicator_nsta_pane_cp_g

0xea01,	// (0x0000ea01) cell_graphic2_pane_t2_ParamLimits

0xea01,	// (0x0000ea01) cell_graphic2_pane_t2

0x0001,

0xf0e4,	// (0x0000f0e4) cell_graphic2_pane_t_ParamLimits

0xf0e4,	// (0x0000f0e4) cell_graphic2_pane_t

0xea34,	// (0x0000ea34) cell_graphic2_control_pane_t1

0xbfb8,	// (0x0000bfb8) signal_pane_g3_ParamLimits

0xbfb8,	// (0x0000bfb8) signal_pane_g3

0xbfcc,	// (0x0000bfcc) signal_pane_g4_ParamLimits

0xbfcc,	// (0x0000bfcc) signal_pane_g4

0xa6aa,	// (0x0000a6aa) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa6aa,	// (0x0000a6aa) cell_ai5_widget_list_row_pane_t3

0xa811,	// (0x0000a811) cell_ituss_key_pane_t1_ParamLimits

0xa811,	// (0x0000a811) cell_ituss_key_pane_t1

0x389b,	// (0x0000389b) form_field_data_wide_pane_vc_t2_ParamLimits

0x389b,	// (0x0000389b) form_field_data_wide_pane_vc_t2

0x38af,	// (0x000038af) form_field_data_wide_pane_vc_t3_ParamLimits

0x38af,	// (0x000038af) form_field_data_wide_pane_vc_t3

0x0002,

0xacba,	// (0x0000acba) form_field_data_wide_pane_vc_t_ParamLimits

0xacba,	// (0x0000acba) form_field_data_wide_pane_vc_t

0x5b97,	// (0x00005b97) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5b97,	// (0x00005b97) form_field_slider_wide_pane_vc_t3

0x5c71,	// (0x00005c71) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5c71,	// (0x00005c71) form_field_popup_wide_pane_vc_t2

0x5c88,	// (0x00005c88) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5c88,	// (0x00005c88) form_field_popup_wide_pane_vc_t3

0x0002,

0xaf60,	// (0x0000af60) form_field_popup_wide_pane_vc_t_ParamLimits

0xaf60,	// (0x0000af60) form_field_popup_wide_pane_vc_t

0xed01,	// (0x0000ed01) aid_fshwr2_btn_pane_ParamLimits

0xed12,	// (0x0000ed12) aid_fshwr2_syb_pane_ParamLimits

0xed23,	// (0x0000ed23) aid_fshwr2_txt_pane_ParamLimits

0x1346,	// (0x00001346) fshwr2_bg_pane_ParamLimits

0xed2f,	// (0x0000ed2f) fshwr2_func_candi_pane_ParamLimits

0xed4e,	// (0x0000ed4e) fshwr2_hwr_syb_pane_ParamLimits

0xed69,	// (0x0000ed69) fshwr2_icf_pane_ParamLimits
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

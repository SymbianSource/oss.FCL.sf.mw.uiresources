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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002f4a0 };

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
0x947d,	// (0x0003891d) Screen

0x9489,	// (0x00038929) application_window_ParamLimits

0x9489,	// (0x00038929) application_window

0x387c,	// (0x00032d1c) screen_g1

0x94e5,	// (0x00038985) area_bottom_pane_ParamLimits

0x94e5,	// (0x00038985) area_bottom_pane

0x95a5,	// (0x00038a45) area_top_pane_ParamLimits

0x95a5,	// (0x00038a45) area_top_pane

0x9639,	// (0x00038ad9) main_pane_ParamLimits

0x9639,	// (0x00038ad9) main_pane

0x3886,	// (0x00032d26) misc_graphics

0xabab,	// (0x0003a04b) battery_pane_ParamLimits

0xabab,	// (0x0003a04b) battery_pane

0x5477,	// (0x00034917) bg_status_flat_pane_g8

0x547f,	// (0x0003491f) bg_status_flat_pane_g9

0x4bd3,	// (0x00034073) context_pane_ParamLimits

0x4bd3,	// (0x00034073) context_pane

0xacdf,	// (0x0003a17f) navi_pane_ParamLimits

0xacdf,	// (0x0003a17f) navi_pane

0xad4c,	// (0x0003a1ec) signal_pane_ParamLimits

0xad4c,	// (0x0003a1ec) signal_pane

0x0008,

0xf87f,	// (0x0003ed1f) bg_status_flat_pane_g

0xadb1,	// (0x0003a251) status_pane_g1_ParamLimits

0xadb1,	// (0x0003a251) status_pane_g1

0x4dd4,	// (0x00034274) status_pane_g2_ParamLimits

0x4dd4,	// (0x00034274) status_pane_g2

0x4c38,	// (0x000340d8) status_pane_g3_ParamLimits

0x4c38,	// (0x000340d8) status_pane_g3

0x0004,

0xf7ab,	// (0x0003ec4b) status_pane_g_ParamLimits

0xf7ab,	// (0x0003ec4b) status_pane_g

0xadc5,	// (0x0003a265) title_pane_ParamLimits

0xadc5,	// (0x0003a265) title_pane

0xae02,	// (0x0003a2a2) uni_indicator_pane_ParamLimits

0xae02,	// (0x0003a2a2) uni_indicator_pane

0x4b16,	// (0x00033fb6) bg_list_pane_ParamLimits

0x4b16,	// (0x00033fb6) bg_list_pane

0xa593,	// (0x00039a33) find_pane

0xa59b,	// (0x00039a3b) listscroll_app_pane_ParamLimits

0xa59b,	// (0x00039a3b) listscroll_app_pane

0x4b36,	// (0x00033fd6) listscroll_form_pane

0xa5a7,	// (0x00039a47) listscroll_gen_pane_ParamLimits

0xa5a7,	// (0x00039a47) listscroll_gen_pane

0x4b36,	// (0x00033fd6) listscroll_set_pane

0x9cb0,	// (0x00039150) main_idle_act_pane

0x48fa,	// (0x00033d9a) main_idle_trad_pane

0x48fa,	// (0x00033d9a) main_list_empty_pane

0x408e,	// (0x0003352e) main_midp_pane

0x4b50,	// (0x00033ff0) main_pane_g1_ParamLimits

0x4b50,	// (0x00033ff0) main_pane_g1

0xa5bb,	// (0x00039a5b) popup_ai_message_window_ParamLimits

0xa5bb,	// (0x00039a5b) popup_ai_message_window

0xa65f,	// (0x00039aff) popup_fep_china_uni_window_ParamLimits

0xa65f,	// (0x00039aff) popup_fep_china_uni_window

0xa6b9,	// (0x00039b59) popup_fep_japan_candidate_window_ParamLimits

0xa6b9,	// (0x00039b59) popup_fep_japan_candidate_window

0xa6d7,	// (0x00039b77) popup_fep_japan_predictive_window_ParamLimits

0xa6d7,	// (0x00039b77) popup_fep_japan_predictive_window

0xa707,	// (0x00039ba7) popup_find_window

0xa714,	// (0x00039bb4) popup_grid_graphic_window_ParamLimits

0xa714,	// (0x00039bb4) popup_grid_graphic_window

0xa73c,	// (0x00039bdc) popup_large_graphic_colour_window

0xa762,	// (0x00039c02) popup_menu_window_ParamLimits

0xa762,	// (0x00039c02) popup_menu_window

0xa91c,	// (0x00039dbc) popup_note_image_window

0xa908,	// (0x00039da8) popup_note_wait_window_ParamLimits

0xa908,	// (0x00039da8) popup_note_wait_window

0xa908,	// (0x00039da8) popup_note_window_ParamLimits

0xa908,	// (0x00039da8) popup_note_window

0xa972,	// (0x00039e12) popup_query_code_window_ParamLimits

0xa972,	// (0x00039e12) popup_query_code_window

0xa986,	// (0x00039e26) popup_query_data_code_window_ParamLimits

0xa986,	// (0x00039e26) popup_query_data_code_window

0xa9a1,	// (0x00039e41) popup_query_data_window_ParamLimits

0xa9a1,	// (0x00039e41) popup_query_data_window

0xa9bb,	// (0x00039e5b) popup_query_sat_info_window_ParamLimits

0xa9bb,	// (0x00039e5b) popup_query_sat_info_window

0xa9f4,	// (0x00039e94) popup_snote_single_graphic_window_ParamLimits

0xa9f4,	// (0x00039e94) popup_snote_single_graphic_window

0xa9f4,	// (0x00039e94) popup_snote_single_text_window_ParamLimits

0xa9f4,	// (0x00039e94) popup_snote_single_text_window

0xaa09,	// (0x00039ea9) popup_sub_window_general

0xab37,	// (0x00039fd7) popup_window_general_ParamLimits

0xab37,	// (0x00039fd7) popup_window_general

0x4b5e,	// (0x00033ffe) power_save_pane

0xa412,	// (0x000398b2) control_pane_g1_ParamLimits

0xa412,	// (0x000398b2) control_pane_g1

0xa439,	// (0x000398d9) control_pane_g2_ParamLimits

0xa439,	// (0x000398d9) control_pane_g2

0x4b00,	// (0x00033fa0) control_pane_g3_ParamLimits

0x4b00,	// (0x00033fa0) control_pane_g3

0x0007,

0xf793,	// (0x0003ec33) control_pane_g_ParamLimits

0xf793,	// (0x0003ec33) control_pane_g

0xa4a8,	// (0x00039948) control_pane_t1_ParamLimits

0xa4a8,	// (0x00039948) control_pane_t1

0xa4f4,	// (0x00039994) control_pane_t2_ParamLimits

0xa4f4,	// (0x00039994) control_pane_t2

0x0002,

0xf7a4,	// (0x0003ec44) control_pane_t_ParamLimits

0xf7a4,	// (0x0003ec44) control_pane_t

0x4a21,	// (0x00033ec1) navi_navi_volume_pane_cp1

0x4a2a,	// (0x00033eca) status_small_icon_pane

0x4a32,	// (0x00033ed2) status_small_pane_g1_ParamLimits

0x4a32,	// (0x00033ed2) status_small_pane_g1

0x4a66,	// (0x00033f06) status_small_pane_g2_ParamLimits

0x4a66,	// (0x00033f06) status_small_pane_g2

0x4a72,	// (0x00033f12) status_small_pane_g3_ParamLimits

0x4a72,	// (0x00033f12) status_small_pane_g3

0x4a7e,	// (0x00033f1e) status_small_pane_g4_ParamLimits

0x4a7e,	// (0x00033f1e) status_small_pane_g4

0x4a8a,	// (0x00033f2a) status_small_pane_g5_ParamLimits

0x4a8a,	// (0x00033f2a) status_small_pane_g5

0x4a99,	// (0x00033f39) status_small_pane_g6_ParamLimits

0x4a99,	// (0x00033f39) status_small_pane_g6

0x0007,

0xf782,	// (0x0003ec22) status_small_pane_g_ParamLimits

0xf782,	// (0x0003ec22) status_small_pane_g

0x4ac9,	// (0x00033f69) status_small_pane_t1

0x4aec,	// (0x00033f8c) status_small_wait_pane_ParamLimits

0x4aec,	// (0x00033f8c) status_small_wait_pane

0x9fce,	// (0x0003946e) aid_levels_signal_ParamLimits

0x9fce,	// (0x0003946e) aid_levels_signal

0x9fe0,	// (0x00039480) signal_pane_g1_ParamLimits

0x9fe0,	// (0x00039480) signal_pane_g1

0x9ff5,	// (0x00039495) signal_pane_g2_ParamLimits

0x9ff5,	// (0x00039495) signal_pane_g2

0x0003,

0xf713,	// (0x0003ebb3) signal_pane_g_ParamLimits

0xf713,	// (0x0003ebb3) signal_pane_g

0x44b0,	// (0x00033950) context_pane_g1

0x9870,	// (0x00038d10) title_pane_g1

0x989a,	// (0x00038d3a) title_pane_t1

0x389c,	// (0x00032d3c) title_pane_t2

0x38c2,	// (0x00032d62) title_pane_t3

0x0002,

0xf55d,	// (0x0003e9fd) title_pane_t

0xae1a,	// (0x0003a2ba) aid_levels_battery_ParamLimits

0xae1a,	// (0x0003a2ba) aid_levels_battery

0xae2e,	// (0x0003a2ce) battery_pane_g1_ParamLimits

0xae2e,	// (0x0003a2ce) battery_pane_g1

0xae44,	// (0x0003a2e4) battery_pane_g2_ParamLimits

0xae44,	// (0x0003a2e4) battery_pane_g2

0x0001,

0xf7b6,	// (0x0003ec56) battery_pane_g_ParamLimits

0xf7b6,	// (0x0003ec56) battery_pane_g

0xb3a2,	// (0x0003a842) uni_indicator_pane_g1

0xb3b7,	// (0x0003a857) uni_indicator_pane_g2

0x5c39,	// (0x000350d9) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0003edc7) uni_indicator_pane_g

0x4790,	// (0x00033c30) navi_icon_pane_ParamLimits

0x4790,	// (0x00033c30) navi_icon_pane

0x4714,	// (0x00033bb4) navi_midp_pane

0x47ac,	// (0x00033c4c) navi_navi_pane

0x47b6,	// (0x00033c56) navi_text_pane_ParamLimits

0x47b6,	// (0x00033c56) navi_text_pane

0x387c,	// (0x00032d1c) status_small_wait_pane_g1

0x3b9d,	// (0x0003303d) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0003edc2) status_small_wait_pane_g

0x59bb,	// (0x00034e5b) navi_navi_icon_text_pane

0x59d5,	// (0x00034e75) navi_navi_pane_g1_ParamLimits

0x59d5,	// (0x00034e75) navi_navi_pane_g1

0x59c3,	// (0x00034e63) navi_navi_pane_g2_ParamLimits

0x59c3,	// (0x00034e63) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0003ed90) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0003ed90) navi_navi_pane_g

0x59e7,	// (0x00034e87) navi_navi_tabs_pane

0x59f0,	// (0x00034e90) navi_navi_text_pane

0x59bb,	// (0x00034e5b) navi_navi_volume_pane

0xb335,	// (0x0003a7d5) navi_text_pane_t1

0x599d,	// (0x00034e3d) navi_icon_pane_g1

0x5904,	// (0x00034da4) navi_navi_text_pane_t1

0xb310,	// (0x0003a7b0) navi_navi_volume_pane_g1

0xb318,	// (0x0003a7b8) volume_small_pane

0xb282,	// (0x0003a722) navi_navi_icon_text_pane_g1

0xb28a,	// (0x0003a72a) navi_navi_icon_text_pane_t1

0x47ac,	// (0x00033c4c) navi_tabs_2_long_pane

0x47ac,	// (0x00033c4c) navi_tabs_2_pane

0x47ac,	// (0x00033c4c) navi_tabs_3_long_pane

0x47ac,	// (0x00033c4c) navi_tabs_3_pane

0x47ac,	// (0x00033c4c) navi_tabs_4_pane

0xb240,	// (0x0003a6e0) tabs_2_active_pane_ParamLimits

0xb240,	// (0x0003a6e0) tabs_2_active_pane

0xb250,	// (0x0003a6f0) tabs_2_passive_pane_ParamLimits

0xb250,	// (0x0003a6f0) tabs_2_passive_pane

0xb20e,	// (0x0003a6ae) tabs_3_active_pane_ParamLimits

0xb20e,	// (0x0003a6ae) tabs_3_active_pane

0xb21e,	// (0x0003a6be) tabs_3_passive_pane_ParamLimits

0xb21e,	// (0x0003a6be) tabs_3_passive_pane

0xb22f,	// (0x0003a6cf) tabs_3_passive_pane_cp_ParamLimits

0xb22f,	// (0x0003a6cf) tabs_3_passive_pane_cp

0xb1ca,	// (0x0003a66a) tabs_4_active_pane_ParamLimits

0xb1ca,	// (0x0003a66a) tabs_4_active_pane

0xb1db,	// (0x0003a67b) tabs_4_passive_pane_ParamLimits

0xb1db,	// (0x0003a67b) tabs_4_passive_pane

0xb1ec,	// (0x0003a68c) tabs_4_passive_pane_cp_ParamLimits

0xb1ec,	// (0x0003a68c) tabs_4_passive_pane_cp

0xb1fd,	// (0x0003a69d) tabs_4_passive_pane_cp2_ParamLimits

0xb1fd,	// (0x0003a69d) tabs_4_passive_pane_cp2

0xb1a6,	// (0x0003a646) tabs_2_long_active_pane_ParamLimits

0xb1a6,	// (0x0003a646) tabs_2_long_active_pane

0xb1b8,	// (0x0003a658) tabs_2_long_passive_pane_ParamLimits

0xb1b8,	// (0x0003a658) tabs_2_long_passive_pane

0xb16d,	// (0x0003a60d) tabs_3_long_active_pane_ParamLimits

0xb16d,	// (0x0003a60d) tabs_3_long_active_pane

0xb180,	// (0x0003a620) tabs_3_long_passive_pane_ParamLimits

0xb180,	// (0x0003a620) tabs_3_long_passive_pane

0xb193,	// (0x0003a633) tabs_3_long_passive_pane_cp_ParamLimits

0xb193,	// (0x0003a633) tabs_3_long_passive_pane_cp

0xb113,	// (0x0003a5b3) volume_small_pane_g1

0xb11c,	// (0x0003a5bc) volume_small_pane_g2

0xb125,	// (0x0003a5c5) volume_small_pane_g3

0xb12e,	// (0x0003a5ce) volume_small_pane_g4

0xb137,	// (0x0003a5d7) volume_small_pane_g5

0xb140,	// (0x0003a5e0) volume_small_pane_g6

0xb149,	// (0x0003a5e9) volume_small_pane_g7

0xb152,	// (0x0003a5f2) volume_small_pane_g8

0xb15b,	// (0x0003a5fb) volume_small_pane_g9

0xb164,	// (0x0003a604) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0003ed5c) volume_small_pane_g

0x38e2,	// (0x00032d82) bg_active_tab_pane_cp2_ParamLimits

0x38e2,	// (0x00032d82) bg_active_tab_pane_cp2

0x9902,	// (0x00038da2) tabs_3_active_pane_g1

0x990a,	// (0x00038daa) tabs_3_active_pane_t1

0x38e2,	// (0x00032d82) bg_passive_tab_pane_cp2_ParamLimits

0x38e2,	// (0x00032d82) bg_passive_tab_pane_cp2

0x9902,	// (0x00038da2) tabs_3_passive_pane_g1

0x990a,	// (0x00038daa) tabs_3_passive_pane_t1

0x38e2,	// (0x00032d82) bg_active_tab_pane_cp3_ParamLimits

0x38e2,	// (0x00032d82) bg_active_tab_pane_cp3

0x991c,	// (0x00038dbc) tabs_4_active_pane_g1

0x9924,	// (0x00038dc4) tabs_4_active_pane_t1

0x38e2,	// (0x00032d82) bg_passive_tab_pane_cp3_ParamLimits

0x38e2,	// (0x00032d82) bg_passive_tab_pane_cp3

0x991c,	// (0x00038dbc) tabs_4_1_passive_pane_g1

0x9924,	// (0x00038dc4) tabs_4_1_passive_pane_t1

0x408e,	// (0x0003352e) list_highlight_pane_cp2

0xb4b5,	// (0x0003a955) list_set_pane_ParamLimits

0xb4b5,	// (0x0003a955) list_set_pane

0xb55b,	// (0x0003a9fb) main_pane_set_t1_ParamLimits

0xb55b,	// (0x0003a9fb) main_pane_set_t1

0xb57b,	// (0x0003aa1b) main_pane_set_t2_ParamLimits

0xb57b,	// (0x0003aa1b) main_pane_set_t2

0xb58f,	// (0x0003aa2f) main_pane_set_t3_ParamLimits

0xb58f,	// (0x0003aa2f) main_pane_set_t3

0xb5a1,	// (0x0003aa41) main_pane_set_t4_ParamLimits

0xb5a1,	// (0x0003aa41) main_pane_set_t4

0x0003,

0xf98c,	// (0x0003ee2c) main_pane_set_t_ParamLimits

0xf98c,	// (0x0003ee2c) main_pane_set_t

0xb5b3,	// (0x0003aa53) setting_code_pane

0xb5bd,	// (0x0003aa5d) setting_slider_graphic_pane

0xb5bd,	// (0x0003aa5d) setting_slider_pane

0xb5bd,	// (0x0003aa5d) setting_text_pane

0xb5bd,	// (0x0003aa5d) setting_volume_pane

0x9936,	// (0x00038dd6) volume_set_pane

0x38e2,	// (0x00032d82) bg_set_opt_pane_cp

0x993e,	// (0x00038dde) setting_slider_pane_t1

0x9957,	// (0x00038df7) setting_slider_pane_t2

0x9971,	// (0x00038e11) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0003ea04) setting_slider_pane_t

0x9989,	// (0x00038e29) slider_set_pane

0x3886,	// (0x00032d26) bg_set_opt_pane_cp2

0x38f0,	// (0x00032d90) setting_slider_graphic_pane_g1

0x999f,	// (0x00038e3f) setting_slider_graphic_pane_t1

0x99af,	// (0x00038e4f) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0003ea0b) setting_slider_graphic_pane_t

0x99bf,	// (0x00038e5f) slider_set_pane_cp

0x3886,	// (0x00032d26) input_focus_pane_cp1

0x5e16,	// (0x000352b6) list_set_text_pane

0x387c,	// (0x00032d1c) setting_text_pane_g1

0x3886,	// (0x00032d26) input_focus_pane_cp2

0x387c,	// (0x00032d1c) setting_code_pane_g1

0x38f9,	// (0x00032d99) setting_code_pane_t1

0x8641,	// (0x00037ae1) set_text_pane_t1_ParamLimits

0x8641,	// (0x00037ae1) set_text_pane_t1

0x3f84,	// (0x00033424) set_opt_bg_pane_g1

0x3f8c,	// (0x0003342c) set_opt_bg_pane_g2

0x5df6,	// (0x00035296) set_opt_bg_pane_g3

0x3f9c,	// (0x0003343c) set_opt_bg_pane_g4

0x3fa4,	// (0x00033444) set_opt_bg_pane_g5

0x3fac,	// (0x0003344c) set_opt_bg_pane_g6

0x5dfe,	// (0x0003529e) set_opt_bg_pane_g7

0x5e06,	// (0x000352a6) set_opt_bg_pane_g8

0x5e0e,	// (0x000352ae) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0003ee19) set_opt_bg_pane_g

0x5de9,	// (0x00035289) slider_set_pane_g1

0xb46c,	// (0x0003a90c) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0003ee0a) slider_set_pane_g

0xb3e3,	// (0x0003a883) volume_set_pane_g1

0xb3eb,	// (0x0003a88b) volume_set_pane_g2

0xb3f3,	// (0x0003a893) volume_set_pane_g3

0xb3fb,	// (0x0003a89b) volume_set_pane_g4

0xb403,	// (0x0003a8a3) volume_set_pane_g5

0xb40b,	// (0x0003a8ab) volume_set_pane_g6

0xb413,	// (0x0003a8b3) volume_set_pane_g7

0xb41b,	// (0x0003a8bb) volume_set_pane_g8

0xb423,	// (0x0003a8c3) volume_set_pane_g9

0xb42b,	// (0x0003a8cb) volume_set_pane_g10

0x0009,

0xf942,	// (0x0003ede2) volume_set_pane_g

0x99c7,	// (0x00038e67) indicator_pane_ParamLimits

0x99c7,	// (0x00038e67) indicator_pane

0x99d3,	// (0x00038e73) main_idle_pane_g2_ParamLimits

0x99d3,	// (0x00038e73) main_idle_pane_g2

0x99fb,	// (0x00038e9b) main_pane_idle_g1_ParamLimits

0x99fb,	// (0x00038e9b) main_pane_idle_g1

0x3907,	// (0x00032da7) popup_clock_digital_analogue_window_ParamLimits

0x3907,	// (0x00032da7) popup_clock_digital_analogue_window

0x9a08,	// (0x00038ea8) soft_indicator_pane_ParamLimits

0x9a08,	// (0x00038ea8) soft_indicator_pane

0x9a14,	// (0x00038eb4) wallpaper_pane_ParamLimits

0x9a14,	// (0x00038eb4) wallpaper_pane

0x387c,	// (0x00032d1c) wallpaper_pane_g1

0x9a20,	// (0x00038ec0) indicator_pane_g1_ParamLimits

0x9a20,	// (0x00038ec0) indicator_pane_g1

0x5f87,	// (0x00035427) navi_navi_icon_text_pane_srt_g1

0x3935,	// (0x00032dd5) soft_indicator_pane_t1

0x394f,	// (0x00032def) aid_ps_area_pane

0x9a2c,	// (0x00038ecc) aid_ps_clock_pane

0x3960,	// (0x00032e00) aid_ps_indicator_pane

0x396c,	// (0x00032e0c) indicator_ps_pane_ParamLimits

0x396c,	// (0x00032e0c) indicator_ps_pane

0x397b,	// (0x00032e1b) power_save_pane_g1_ParamLimits

0x397b,	// (0x00032e1b) power_save_pane_g1

0x3987,	// (0x00032e27) power_save_pane_g2_ParamLimits

0x3987,	// (0x00032e27) power_save_pane_g2

0x9499,	// (0x00038939) aid_navinavi_width_pane

0x394f,	// (0x00032def) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0003ea10) power_save_pane_g_ParamLimits

0xf570,	// (0x0003ea10) power_save_pane_g

0x3995,	// (0x00032e35) power_save_pane_t1_ParamLimits

0x3995,	// (0x00032e35) power_save_pane_t1

0x9a2c,	// (0x00038ecc) aid_ps_clock_pane_ParamLimits

0x3960,	// (0x00032e00) aid_ps_indicator_pane_ParamLimits

0x39a7,	// (0x00032e47) power_save_pane_t4_ParamLimits

0x39a7,	// (0x00032e47) power_save_pane_t4

0x0001,

0xf575,	// (0x0003ea15) power_save_pane_t_ParamLimits

0xf575,	// (0x0003ea15) power_save_pane_t

0x39d1,	// (0x00032e71) power_save_t3_ParamLimits

0x39d1,	// (0x00032e71) power_save_t3

0x39bc,	// (0x00032e5c) power_save_t2_ParamLimits

0x39bc,	// (0x00032e5c) power_save_t2

0x39e6,	// (0x00032e86) indicator_ps_pane_g1

0x9a3a,	// (0x00038eda) ai_gene_pane_ParamLimits

0x9a3a,	// (0x00038eda) ai_gene_pane

0x9a46,	// (0x00038ee6) ai_links_pane_ParamLimits

0x9a46,	// (0x00038ee6) ai_links_pane

0x9a52,	// (0x00038ef2) indicator_pane_cp1_ParamLimits

0x9a52,	// (0x00038ef2) indicator_pane_cp1

0x9a5e,	// (0x00038efe) main_pane_idle_g1_cp_ParamLimits

0x9a5e,	// (0x00038efe) main_pane_idle_g1_cp

0x39ef,	// (0x00032e8f) popup_ai_links_title_window

0x9a6a,	// (0x00038f0a) soft_indicator_pane_cp1_ParamLimits

0x9a6a,	// (0x00038f0a) soft_indicator_pane_cp1

0x5c27,	// (0x000350c7) ai_links_pane_g1

0x5c30,	// (0x000350d0) grid_ai_links_pane

0xb397,	// (0x0003a837) ai_gene_pane_1

0x5c15,	// (0x000350b5) ai_gene_pane_2

0x5c1e,	// (0x000350be) list_highlight_pane_cp4

0xb37b,	// (0x0003a81b) cell_ai_link_pane_ParamLimits

0xb37b,	// (0x0003a81b) cell_ai_link_pane

0x5c0d,	// (0x000350ad) cell_ai_link_pane_g1

0x3b9d,	// (0x0003303d) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0003edbd) cell_ai_link_pane_g

0x3886,	// (0x00032d26) grid_highlight_cp2

0x3886,	// (0x00032d26) bg_popup_sub_pane_cp1

0x3a06,	// (0x00032ea6) popup_ai_links_title_window_t1

0x5b7f,	// (0x0003501f) ai_gene_pane_1_g1_ParamLimits

0x5b7f,	// (0x0003501f) ai_gene_pane_1_g1

0x5b8b,	// (0x0003502b) ai_gene_pane_1_g2_ParamLimits

0x5b8b,	// (0x0003502b) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0003edb3) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0003edb3) ai_gene_pane_1_g

0x5b98,	// (0x00035038) ai_gene_pane_1_t1_ParamLimits

0x5b98,	// (0x00035038) ai_gene_pane_1_t1

0x5bcc,	// (0x0003506c) grid_ai_soft_ind_pane

0x5b6a,	// (0x0003500a) ai_gene_pane_2_t1_ParamLimits

0x5b6a,	// (0x0003500a) ai_gene_pane_2_t1

0x9a76,	// (0x00038f16) main_pane_empty_t1_ParamLimits

0x9a76,	// (0x00038f16) main_pane_empty_t1

0x9a8e,	// (0x00038f2e) main_pane_empty_t2_ParamLimits

0x9a8e,	// (0x00038f2e) main_pane_empty_t2

0x9aa3,	// (0x00038f43) main_pane_empty_t3_ParamLimits

0x9aa3,	// (0x00038f43) main_pane_empty_t3

0x9ab5,	// (0x00038f55) main_pane_empty_t4_ParamLimits

0x9ab5,	// (0x00038f55) main_pane_empty_t4

0x9ac7,	// (0x00038f67) main_pane_empty_t5_ParamLimits

0x9ac7,	// (0x00038f67) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0003ea1a) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0003ea1a) main_pane_empty_t

0x3fd5,	// (0x00033475) bg_popup_window_pane_ParamLimits

0x3fd5,	// (0x00033475) bg_popup_window_pane

0x5912,	// (0x00034db2) find_popup_pane_cp2_ParamLimits

0x5912,	// (0x00034db2) find_popup_pane_cp2

0x591e,	// (0x00034dbe) heading_pane_ParamLimits

0x591e,	// (0x00034dbe) heading_pane

0x3886,	// (0x00032d26) bg_popup_sub_pane

0xb2a4,	// (0x0003a744) bg_popup_window_pane_g1_ParamLimits

0xb2a4,	// (0x0003a744) bg_popup_window_pane_g1

0xb2b0,	// (0x0003a750) bg_popup_window_pane_g2_ParamLimits

0xb2b0,	// (0x0003a750) bg_popup_window_pane_g2

0xb2bc,	// (0x0003a75c) bg_popup_window_pane_g3_ParamLimits

0xb2bc,	// (0x0003a75c) bg_popup_window_pane_g3

0xb2c8,	// (0x0003a768) bg_popup_window_pane_g4_ParamLimits

0xb2c8,	// (0x0003a768) bg_popup_window_pane_g4

0xb2d4,	// (0x0003a774) bg_popup_window_pane_g5_ParamLimits

0xb2d4,	// (0x0003a774) bg_popup_window_pane_g5

0xb2e0,	// (0x0003a780) bg_popup_window_pane_g6_ParamLimits

0xb2e0,	// (0x0003a780) bg_popup_window_pane_g6

0xb2ec,	// (0x0003a78c) bg_popup_window_pane_g7_ParamLimits

0xb2ec,	// (0x0003a78c) bg_popup_window_pane_g7

0xb2f8,	// (0x0003a798) bg_popup_window_pane_g8_ParamLimits

0xb2f8,	// (0x0003a798) bg_popup_window_pane_g8

0xb304,	// (0x0003a7a4) bg_popup_window_pane_g9_ParamLimits

0xb304,	// (0x0003a7a4) bg_popup_window_pane_g9

0x58f8,	// (0x00034d98) bg_popup_window_pane_g10_ParamLimits

0x58f8,	// (0x00034d98) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0003ed7b) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0003ed7b) bg_popup_window_pane_g

0x58af,	// (0x00034d4f) bg_popup_heading_pane_ParamLimits

0x58af,	// (0x00034d4f) bg_popup_heading_pane

0xb7a6,	// (0x0003ac46) tabs_4_passive_pane_cp_srt_ParamLimits

0xb7a6,	// (0x0003ac46) tabs_4_passive_pane_cp_srt

0xb7b8,	// (0x0003ac58) tabs_4_passive_pane_srt_ParamLimits

0x58c3,	// (0x00034d63) heading_pane_g2

0xb7b8,	// (0x0003ac58) tabs_4_passive_pane_srt

0x408e,	// (0x0003352e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x408e,	// (0x0003352e) bg_passive_tab_pane_cp3_srt

0x58cb,	// (0x00034d6b) heading_pane_t1_ParamLimits

0x58cb,	// (0x00034d6b) heading_pane_t1

0x58e2,	// (0x00034d82) heading_pane_t2_ParamLimits

0x58e2,	// (0x00034d82) heading_pane_t2

0x0001,

0xf8d6,	// (0x0003ed76) heading_pane_t_ParamLimits

0xf8d6,	// (0x0003ed76) heading_pane_t

0x543f,	// (0x000348df) bg_popup_heading_pane_g1

0x54d0,	// (0x00034970) bg_popup_heading_pane_g2

0x54da,	// (0x0003497a) bg_popup_heading_pane_g3

0x54e4,	// (0x00034984) bg_popup_heading_pane_g4

0x54ee,	// (0x0003498e) bg_popup_heading_pane_g5

0x54f8,	// (0x00034998) bg_popup_heading_pane_g6

0x5500,	// (0x000349a0) bg_popup_heading_pane_g7

0x5508,	// (0x000349a8) bg_popup_heading_pane_g8

0x5512,	// (0x000349b2) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0003ed32) bg_popup_heading_pane_g

0x4d2e,	// (0x000341ce) bg_popup_sub_pane_g1

0x4d3e,	// (0x000341de) bg_popup_sub_pane_g2

0x4d36,	// (0x000341d6) bg_popup_sub_pane_g3

0x4d4e,	// (0x000341ee) bg_popup_sub_pane_g4

0x4d46,	// (0x000341e6) bg_popup_sub_pane_g5

0x4d56,	// (0x000341f6) bg_popup_sub_pane_g6

0x4d5e,	// (0x000341fe) bg_popup_sub_pane_g7

0x4d6e,	// (0x0003420e) bg_popup_sub_pane_g8

0x4d66,	// (0x00034206) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0003ed0c) bg_popup_sub_pane_g

0x38d4,	// (0x00032d74) bg_popup_window_pane_cp5_ParamLimits

0x38d4,	// (0x00032d74) bg_popup_window_pane_cp5

0x3a23,	// (0x00032ec3) popup_note_window_g1_ParamLimits

0x3a23,	// (0x00032ec3) popup_note_window_g1

0x3a2f,	// (0x00032ecf) popup_note_window_t1_ParamLimits

0x3a2f,	// (0x00032ecf) popup_note_window_t1

0x3a41,	// (0x00032ee1) popup_note_window_t2_ParamLimits

0x3a41,	// (0x00032ee1) popup_note_window_t2

0x3a53,	// (0x00032ef3) popup_note_window_t3_ParamLimits

0x3a53,	// (0x00032ef3) popup_note_window_t3

0x3a65,	// (0x00032f05) popup_note_window_t4_ParamLimits

0x3a65,	// (0x00032f05) popup_note_window_t4

0x3a8d,	// (0x00032f2d) popup_note_window_t5_ParamLimits

0x3a8d,	// (0x00032f2d) popup_note_window_t5

0x0004,

0xf585,	// (0x0003ea25) popup_note_window_t_ParamLimits

0xf585,	// (0x0003ea25) popup_note_window_t

0x3ab1,	// (0x00032f51) bg_popup_window_pane_cp6_ParamLimits

0x3ab1,	// (0x00032f51) bg_popup_window_pane_cp6

0x53b3,	// (0x00034853) popup_note_image_window_g1_ParamLimits

0x53b3,	// (0x00034853) popup_note_image_window_g1

0x53bf,	// (0x0003485f) popup_note_image_window_g2_ParamLimits

0x53bf,	// (0x0003485f) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0003ed00) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0003ed00) popup_note_image_window_g

0x53d8,	// (0x00034878) popup_note_image_window_t1_ParamLimits

0x53d8,	// (0x00034878) popup_note_image_window_t1

0x53f1,	// (0x00034891) popup_note_image_window_t2_ParamLimits

0x53f1,	// (0x00034891) popup_note_image_window_t2

0x540a,	// (0x000348aa) popup_note_image_window_t3_ParamLimits

0x540a,	// (0x000348aa) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0003ed05) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0003ed05) popup_note_image_window_t

0x5290,	// (0x00034730) bg_popup_window_pane_cp7_ParamLimits

0x5290,	// (0x00034730) bg_popup_window_pane_cp7

0x52c0,	// (0x00034760) popup_note_wait_window_g1_ParamLimits

0x52c0,	// (0x00034760) popup_note_wait_window_g1

0x52cc,	// (0x0003476c) popup_note_wait_window_g2_ParamLimits

0x52cc,	// (0x0003476c) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0003ecee) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0003ecee) popup_note_wait_window_g

0x52e4,	// (0x00034784) popup_note_wait_window_t1_ParamLimits

0x52e4,	// (0x00034784) popup_note_wait_window_t1

0x530b,	// (0x000347ab) popup_note_wait_window_t2_ParamLimits

0x530b,	// (0x000347ab) popup_note_wait_window_t2

0x5328,	// (0x000347c8) popup_note_wait_window_t3_ParamLimits

0x5328,	// (0x000347c8) popup_note_wait_window_t3

0x533b,	// (0x000347db) popup_note_wait_window_t4_ParamLimits

0x533b,	// (0x000347db) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0003ecf5) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0003ecf5) popup_note_wait_window_t

0x5360,	// (0x00034800) wait_bar_pane_ParamLimits

0x5360,	// (0x00034800) wait_bar_pane

0x3886,	// (0x00032d26) wait_anim_pane

0x3886,	// (0x00032d26) wait_border_pane

0x387c,	// (0x00032d1c) wait_anim_pane_g1

0x387c,	// (0x00032d1c) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0003ebae) wait_anim_pane_g

0x5234,	// (0x000346d4) wait_border_pane_g1

0x523f,	// (0x000346df) wait_border_pane_g2

0x5248,	// (0x000346e8) wait_border_pane_g3

0x0002,

0xf847,	// (0x0003ece7) wait_border_pane_g

0x50a4,	// (0x00034544) bg_popup_window_pane_cp16_ParamLimits

0x50a4,	// (0x00034544) bg_popup_window_pane_cp16

0x51a4,	// (0x00034644) indicator_popup_pane_cp4_ParamLimits

0x51a4,	// (0x00034644) indicator_popup_pane_cp4

0x51b8,	// (0x00034658) popup_query_data_window_t1_ParamLimits

0x51b8,	// (0x00034658) popup_query_data_window_t1

0x51ca,	// (0x0003466a) popup_query_data_window_t2_ParamLimits

0x51ca,	// (0x0003466a) popup_query_data_window_t2

0x51e3,	// (0x00034683) popup_query_data_window_t3_ParamLimits

0x51e3,	// (0x00034683) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0003ece0) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0003ece0) popup_query_data_window_t

0x51fd,	// (0x0003469d) query_popup_data_pane_ParamLimits

0x51fd,	// (0x0003469d) query_popup_data_pane

0x5211,	// (0x000346b1) query_popup_data_pane_cp1_ParamLimits

0x5211,	// (0x000346b1) query_popup_data_pane_cp1

0x50a4,	// (0x00034544) bg_popup_window_pane_cp10_ParamLimits

0x50a4,	// (0x00034544) bg_popup_window_pane_cp10

0x50d6,	// (0x00034576) indicator_popup_pane_ParamLimits

0x50d6,	// (0x00034576) indicator_popup_pane

0x50f8,	// (0x00034598) popup_query_code_window_t1_ParamLimits

0x50f8,	// (0x00034598) popup_query_code_window_t1

0x5112,	// (0x000345b2) popup_query_code_window_t2_ParamLimits

0x5112,	// (0x000345b2) popup_query_code_window_t2

0x515b,	// (0x000345fb) popup_query_code_window_t3_ParamLimits

0x515b,	// (0x000345fb) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0003ecd9) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0003ecd9) popup_query_code_window_t

0x518a,	// (0x0003462a) query_popup_pane_ParamLimits

0x518a,	// (0x0003462a) query_popup_pane

0x3ab1,	// (0x00032f51) bg_popup_window_pane_cp15_ParamLimits

0x3ab1,	// (0x00032f51) bg_popup_window_pane_cp15

0x3acf,	// (0x00032f6f) indicator_popup_pane_cp1_ParamLimits

0x3acf,	// (0x00032f6f) indicator_popup_pane_cp1

0x3ae2,	// (0x00032f82) indicator_popup_pane_cp2_ParamLimits

0x3ae2,	// (0x00032f82) indicator_popup_pane_cp2

0x3af5,	// (0x00032f95) popup_query_data_code_window_g1_ParamLimits

0x3af5,	// (0x00032f95) popup_query_data_code_window_g1

0x3b08,	// (0x00032fa8) popup_query_data_code_window_t1_ParamLimits

0x3b08,	// (0x00032fa8) popup_query_data_code_window_t1

0x3b1a,	// (0x00032fba) popup_query_data_code_window_t2_ParamLimits

0x3b1a,	// (0x00032fba) popup_query_data_code_window_t2

0x3b2c,	// (0x00032fcc) popup_query_data_code_window_t3_ParamLimits

0x3b2c,	// (0x00032fcc) popup_query_data_code_window_t3

0x3b42,	// (0x00032fe2) popup_query_data_code_window_t4_ParamLimits

0x3b42,	// (0x00032fe2) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0003ea30) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0003ea30) popup_query_data_code_window_t

0x4760,	// (0x00033c00) list_single_midp_graphic_pane_g3

0x3b5a,	// (0x00032ffa) query_popup_data_pane_cp2_ParamLimits

0x3b6d,	// (0x0003300d) query_popup_pane_cp2_ParamLimits

0x3b6d,	// (0x0003300d) query_popup_pane_cp2

0x3886,	// (0x00032d26) bg_popup_window_pane_cp11

0x509c,	// (0x0003453c) heading_pane_cp5

0x3bfb,	// (0x0003309b) listscroll_popup_info_pane

0x3886,	// (0x00032d26) input_focus_pane_cp3

0x3b80,	// (0x00033020) query_popup_pane_t1

0x3b8e,	// (0x0003302e) list_popup_info_pane_ParamLimits

0x3b8e,	// (0x0003302e) list_popup_info_pane

0x3b9d,	// (0x0003303d) listscroll_popup_info_pane_g1

0x3ba5,	// (0x00033045) scroll_pane_cp7

0x3baf,	// (0x0003304f) popup_info_list_pane_t1_ParamLimits

0x3baf,	// (0x0003304f) popup_info_list_pane_t1

0x3bc9,	// (0x00033069) popup_info_list_pane_t2_ParamLimits

0x3bc9,	// (0x00033069) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003ea39) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003ea39) popup_info_list_pane_t

0x3886,	// (0x00032d26) bg_popup_window_pane_cp12

0x5fa1,	// (0x00035441) find_popup_pane

0x38e2,	// (0x00032d82) bg_popup_window_pane_cp3

0x3be3,	// (0x00033083) heading_pane_cp3

0x3bef,	// (0x0003308f) listscroll_popup_graphic_pane

0x3886,	// (0x00032d26) bg_popup_window_pane_cp4

0x9b2b,	// (0x00038fcb) heading_pane_cp4

0x3bfb,	// (0x0003309b) listscroll_popup_colour_pane

0x3c03,	// (0x000330a3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3c03,	// (0x000330a3) cell_large_graphic_colour_none_popup_pane

0x9b35,	// (0x00038fd5) grid_large_graphic_colour_popup_pane_ParamLimits

0x9b35,	// (0x00038fd5) grid_large_graphic_colour_popup_pane

0x3c17,	// (0x000330b7) listscroll_popup_colour_pane_g1_ParamLimits

0x3c17,	// (0x000330b7) listscroll_popup_colour_pane_g1

0x3c2e,	// (0x000330ce) listscroll_popup_colour_pane_g2_ParamLimits

0x3c2e,	// (0x000330ce) listscroll_popup_colour_pane_g2

0x3c45,	// (0x000330e5) listscroll_popup_colour_pane_g3_ParamLimits

0x3c45,	// (0x000330e5) listscroll_popup_colour_pane_g3

0x9b5d,	// (0x00038ffd) listscroll_popup_colour_pane_g4_ParamLimits

0x9b5d,	// (0x00038ffd) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0003ea3e) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0003ea3e) listscroll_popup_colour_pane_g

0x3c55,	// (0x000330f5) scroll_pane_cp6_ParamLimits

0x3c55,	// (0x000330f5) scroll_pane_cp6

0x9b6c,	// (0x0003900c) cell_large_graphic_colour_popup_pane_ParamLimits

0x9b6c,	// (0x0003900c) cell_large_graphic_colour_popup_pane

0x3c67,	// (0x00033107) cell_large_graphic_colour_none_popup_pane_t1

0x3886,	// (0x00032d26) grid_highlight_pane_cp5

0x3c76,	// (0x00033116) cell_large_graphic_colour_popup_pane_g1

0x3c7e,	// (0x0003311e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003ea47) cell_large_graphic_colour_popup_pane_g

0x3c86,	// (0x00033126) cell_large_graphic_colour_popup_pane_g2_copy1

0x3c8f,	// (0x0003312f) grid_highlight_pane_cp4

0x3c97,	// (0x00033137) bg_popup_window_pane_cp8_ParamLimits

0x3c97,	// (0x00033137) bg_popup_window_pane_cp8

0x3cb2,	// (0x00033152) popup_snote_single_text_window_g1_ParamLimits

0x3cb2,	// (0x00033152) popup_snote_single_text_window_g1

0x3cc4,	// (0x00033164) popup_snote_single_text_window_t1_ParamLimits

0x3cc4,	// (0x00033164) popup_snote_single_text_window_t1

0x3cd7,	// (0x00033177) popup_snote_single_text_window_t2_ParamLimits

0x3cd7,	// (0x00033177) popup_snote_single_text_window_t2

0x3cea,	// (0x0003318a) popup_snote_single_text_window_t3_ParamLimits

0x3cea,	// (0x0003318a) popup_snote_single_text_window_t3

0x3d23,	// (0x000331c3) popup_snote_single_text_window_t4_ParamLimits

0x3d23,	// (0x000331c3) popup_snote_single_text_window_t4

0x3d57,	// (0x000331f7) popup_snote_single_text_window_t5_ParamLimits

0x3d57,	// (0x000331f7) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0003ea4c) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0003ea4c) popup_snote_single_text_window_t

0x3d86,	// (0x00033226) bg_popup_window_pane_cp9_ParamLimits

0x3d86,	// (0x00033226) bg_popup_window_pane_cp9

0x3cb2,	// (0x00033152) popup_snote_single_graphic_window_g1_ParamLimits

0x3cb2,	// (0x00033152) popup_snote_single_graphic_window_g1

0x3d94,	// (0x00033234) popup_snote_single_graphic_window_g2_ParamLimits

0x3d94,	// (0x00033234) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003ea57) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003ea57) popup_snote_single_graphic_window_g

0x3da0,	// (0x00033240) popup_snote_single_graphic_window_t1_ParamLimits

0x3da0,	// (0x00033240) popup_snote_single_graphic_window_t1

0x3db3,	// (0x00033253) popup_snote_single_graphic_window_t2_ParamLimits

0x3db3,	// (0x00033253) popup_snote_single_graphic_window_t2

0x3dc6,	// (0x00033266) popup_snote_single_graphic_window_t3_ParamLimits

0x3dc6,	// (0x00033266) popup_snote_single_graphic_window_t3

0x3dff,	// (0x0003329f) popup_snote_single_graphic_window_t4_ParamLimits

0x3dff,	// (0x0003329f) popup_snote_single_graphic_window_t4

0x3e33,	// (0x000332d3) popup_snote_single_graphic_window_t5_ParamLimits

0x3e33,	// (0x000332d3) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0003ea5c) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0003ea5c) popup_snote_single_graphic_window_t

0x5f29,	// (0x000353c9) grid_graphic_popup_pane_ParamLimits

0x5f29,	// (0x000353c9) grid_graphic_popup_pane

0x5f51,	// (0x000353f1) listscroll_popup_graphic_pane_g1_ParamLimits

0x5f51,	// (0x000353f1) listscroll_popup_graphic_pane_g1

0xb76e,	// (0x0003ac0e) listscroll_popup_graphic_pane_g2_ParamLimits

0xb76e,	// (0x0003ac0e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0003ee56) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0003ee56) listscroll_popup_graphic_pane_g

0x5ece,	// (0x0003536e) scroll_pane_cp5

0xb72f,	// (0x0003abcf) cell_graphic_popup_pane_ParamLimits

0xb72f,	// (0x0003abcf) cell_graphic_popup_pane

0x5ef4,	// (0x00035394) cell_graphic_popup_pane_g1

0x5efc,	// (0x0003539c) cell_graphic_popup_pane_g2

0x3c86,	// (0x00033126) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0003ee4f) cell_graphic_popup_pane_g

0x5f05,	// (0x000353a5) cell_graphic_popup_pane_t2

0x3c8f,	// (0x0003312f) grid_highlight_pane_cp3

0x3e74,	// (0x00033314) list_gen_pane_ParamLimits

0x3e74,	// (0x00033314) list_gen_pane

0x3e9c,	// (0x0003333c) scroll_pane

0xb6e2,	// (0x0003ab82) bg_list_pane_g1_ParamLimits

0xb6e2,	// (0x0003ab82) bg_list_pane_g1

0x5e84,	// (0x00035324) bg_list_pane_g2_ParamLimits

0x5e84,	// (0x00035324) bg_list_pane_g2

0x5e97,	// (0x00035337) bg_list_pane_g3_ParamLimits

0x5e97,	// (0x00035337) bg_list_pane_g3

0x5ea9,	// (0x00035349) bg_list_pane_g4_ParamLimits

0x5ea9,	// (0x00035349) bg_list_pane_g4

0xb6fd,	// (0x0003ab9d) bg_list_pane_g5_ParamLimits

0xb6fd,	// (0x0003ab9d) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0003ee44) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0003ee44) bg_list_pane_g

0xb5ee,	// (0x0003aa8e) list_double2_graphic_large_graphic_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_double2_graphic_large_graphic_pane

0xb5ee,	// (0x0003aa8e) list_double2_graphic_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_double2_graphic_pane

0xb5ee,	// (0x0003aa8e) list_double2_large_graphic_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_double2_large_graphic_pane

0xb5ee,	// (0x0003aa8e) list_double2_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_double2_pane

0xb5ee,	// (0x0003aa8e) list_double_graphic_heading_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_double_graphic_heading_pane

0xb5ee,	// (0x0003aa8e) list_double_graphic_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_double_graphic_pane

0xb5ee,	// (0x0003aa8e) list_double_heading_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_double_heading_pane

0xb5ee,	// (0x0003aa8e) list_double_large_graphic_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_double_large_graphic_pane

0xb5ee,	// (0x0003aa8e) list_double_number_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_double_number_pane

0xb5ee,	// (0x0003aa8e) list_double_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_double_pane

0xb5ee,	// (0x0003aa8e) list_double_time_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_double_time_pane

0xb5ee,	// (0x0003aa8e) list_setting_number_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_setting_number_pane

0xb5ee,	// (0x0003aa8e) list_setting_pane_ParamLimits

0xb5ee,	// (0x0003aa8e) list_setting_pane

0xb63e,	// (0x0003aade) list_single_2graphic_pane_ParamLimits

0xb63e,	// (0x0003aade) list_single_2graphic_pane

0xb63e,	// (0x0003aade) list_single_graphic_heading_pane_ParamLimits

0xb63e,	// (0x0003aade) list_single_graphic_heading_pane

0xb63e,	// (0x0003aade) list_single_graphic_pane_ParamLimits

0xb63e,	// (0x0003aade) list_single_graphic_pane

0xb63e,	// (0x0003aade) list_single_heading_pane_ParamLimits

0xb63e,	// (0x0003aade) list_single_heading_pane

0xb6bf,	// (0x0003ab5f) list_single_large_graphic_pane_ParamLimits

0xb6bf,	// (0x0003ab5f) list_single_large_graphic_pane

0xb63e,	// (0x0003aade) list_single_number_heading_pane_ParamLimits

0xb63e,	// (0x0003aade) list_single_number_heading_pane

0xb63e,	// (0x0003aade) list_single_number_pane_ParamLimits

0xb63e,	// (0x0003aade) list_single_number_pane

0xb63e,	// (0x0003aade) list_single_pane_ParamLimits

0xb63e,	// (0x0003aade) list_single_pane

0x3886,	// (0x00032d26) list_highlight_pane_cp1

0x9b95,	// (0x00039035) list_single_pane_g1_ParamLimits

0x9b95,	// (0x00039035) list_single_pane_g1

0x9ba1,	// (0x00039041) list_single_pane_g2_ParamLimits

0x9ba1,	// (0x00039041) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0003ea78) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0003ea78) list_single_pane_g

0x8f53,	// (0x000383f3) list_single_pane_t1_ParamLimits

0x8f53,	// (0x000383f3) list_single_pane_t1

0x9b95,	// (0x00039035) list_single_number_pane_g1_ParamLimits

0x9b95,	// (0x00039035) list_single_number_pane_g1

0x9ba1,	// (0x00039041) list_single_number_pane_g2_ParamLimits

0x9ba1,	// (0x00039041) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0003ea78) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0003ea78) list_single_number_pane_g

0x8e2a,	// (0x000382ca) list_single_number_pane_t1_ParamLimits

0x8e2a,	// (0x000382ca) list_single_number_pane_t1

0x8f11,	// (0x000383b1) list_single_number_pane_t2_ParamLimits

0x8f11,	// (0x000383b1) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0003ee05) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0003ee05) list_single_number_pane_t

0x865a,	// (0x00037afa) list_single_graphic_pane_g1_ParamLimits

0x865a,	// (0x00037afa) list_single_graphic_pane_g1

0x9b95,	// (0x00039035) list_single_graphic_pane_g2_ParamLimits

0x9b95,	// (0x00039035) list_single_graphic_pane_g2

0x9ba1,	// (0x00039041) list_single_graphic_pane_g3_ParamLimits

0x9ba1,	// (0x00039041) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003ea67) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003ea67) list_single_graphic_pane_g

0x8666,	// (0x00037b06) list_single_graphic_pane_t1_ParamLimits

0x8666,	// (0x00037b06) list_single_graphic_pane_t1

0x867c,	// (0x00037b1c) list_single_heading_pane_g1_ParamLimits

0x867c,	// (0x00037b1c) list_single_heading_pane_g1

0x9ba1,	// (0x00039041) list_single_heading_pane_g2_ParamLimits

0x9ba1,	// (0x00039041) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003ea6e) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003ea6e) list_single_heading_pane_g

0x868f,	// (0x00037b2f) list_single_heading_pane_t1_ParamLimits

0x868f,	// (0x00037b2f) list_single_heading_pane_t1

0x9bad,	// (0x0003904d) list_single_heading_pane_t2_ParamLimits

0x9bad,	// (0x0003904d) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0003ea73) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0003ea73) list_single_heading_pane_t

0x9b95,	// (0x00039035) list_single_number_heading_pane_g1_ParamLimits

0x9b95,	// (0x00039035) list_single_number_heading_pane_g1

0x9ba1,	// (0x00039041) list_single_number_heading_pane_g2_ParamLimits

0x9ba1,	// (0x00039041) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0003ea78) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0003ea78) list_single_number_heading_pane_g

0x86a5,	// (0x00037b45) list_single_number_heading_pane_t1_ParamLimits

0x86a5,	// (0x00037b45) list_single_number_heading_pane_t1

0x86bb,	// (0x00037b5b) list_single_number_heading_pane_t2_ParamLimits

0x86bb,	// (0x00037b5b) list_single_number_heading_pane_t2

0x86cd,	// (0x00037b6d) list_single_number_heading_pane_t3_ParamLimits

0x86cd,	// (0x00037b6d) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0003ea7d) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0003ea7d) list_single_number_heading_pane_t

0x86df,	// (0x00037b7f) list_single_graphic_heading_pane_g1_ParamLimits

0x86df,	// (0x00037b7f) list_single_graphic_heading_pane_g1

0x86f5,	// (0x00037b95) list_single_graphic_heading_pane_g4_ParamLimits

0x86f5,	// (0x00037b95) list_single_graphic_heading_pane_g4

0x9ba1,	// (0x00039041) list_single_graphic_heading_pane_g5_ParamLimits

0x9ba1,	// (0x00039041) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0003ea84) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003ea84) list_single_graphic_heading_pane_g

0x86a5,	// (0x00037b45) list_single_graphic_heading_pane_t1_ParamLimits

0x86a5,	// (0x00037b45) list_single_graphic_heading_pane_t1

0x8706,	// (0x00037ba6) list_single_graphic_heading_pane_t2_ParamLimits

0x8706,	// (0x00037ba6) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0003ea8b) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0003ea8b) list_single_graphic_heading_pane_t

0x9bbf,	// (0x0003905f) list_single_large_graphic_pane_g1_ParamLimits

0x9bbf,	// (0x0003905f) list_single_large_graphic_pane_g1

0x9bcb,	// (0x0003906b) list_single_large_graphic_pane_g2_ParamLimits

0x9bcb,	// (0x0003906b) list_single_large_graphic_pane_g2

0x9bd7,	// (0x00039077) list_single_large_graphic_pane_g3_ParamLimits

0x9bd7,	// (0x00039077) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0003ea90) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0003ea90) list_single_large_graphic_pane_g

0x523f,	// (0x000346df) wait_border_pane_g2_copy1

0x9be3,	// (0x00039083) list_single_large_graphic_pane_g4_cp2

0x871e,	// (0x00037bbe) list_single_large_graphic_pane_t1_ParamLimits

0x871e,	// (0x00037bbe) list_single_large_graphic_pane_t1

0x8734,	// (0x00037bd4) list_double_pane_g1_ParamLimits

0x8734,	// (0x00037bd4) list_double_pane_g1

0x8740,	// (0x00037be0) list_double_pane_g2_ParamLimits

0x8740,	// (0x00037be0) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0003ea97) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0003ea97) list_double_pane_g

0x874c,	// (0x00037bec) list_double_pane_t1_ParamLimits

0x874c,	// (0x00037bec) list_double_pane_t1

0x8762,	// (0x00037c02) list_double_pane_t2_ParamLimits

0x8762,	// (0x00037c02) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0003ea9c) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0003ea9c) list_double_pane_t

0x8774,	// (0x00037c14) list_double2_pane_g1_ParamLimits

0x8774,	// (0x00037c14) list_double2_pane_g1

0x8785,	// (0x00037c25) list_double2_pane_g2_ParamLimits

0x8785,	// (0x00037c25) list_double2_pane_g2

0x0001,

0xf601,	// (0x0003eaa1) list_double2_pane_g_ParamLimits

0xf601,	// (0x0003eaa1) list_double2_pane_g

0x8791,	// (0x00037c31) list_double2_pane_t1_ParamLimits

0x8791,	// (0x00037c31) list_double2_pane_t1

0x87a7,	// (0x00037c47) list_double2_pane_t2_ParamLimits

0x87a7,	// (0x00037c47) list_double2_pane_t2

0x0001,

0xf606,	// (0x0003eaa6) list_double2_pane_t_ParamLimits

0xf606,	// (0x0003eaa6) list_double2_pane_t

0x8734,	// (0x00037bd4) list_double_number_pane_g1_ParamLimits

0x8734,	// (0x00037bd4) list_double_number_pane_g1

0x8740,	// (0x00037be0) list_double_number_pane_g2_ParamLimits

0x8740,	// (0x00037be0) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0003ea97) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0003ea97) list_double_number_pane_g

0x87b9,	// (0x00037c59) list_double_number_pane_t1_ParamLimits

0x87b9,	// (0x00037c59) list_double_number_pane_t1

0x87cb,	// (0x00037c6b) list_double_number_pane_t2_ParamLimits

0x87cb,	// (0x00037c6b) list_double_number_pane_t2

0x87e1,	// (0x00037c81) list_double_number_pane_t3_ParamLimits

0x87e1,	// (0x00037c81) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0003eaab) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0003eaab) list_double_number_pane_t

0x87f3,	// (0x00037c93) list_double_graphic_pane_g1_ParamLimits

0x87f3,	// (0x00037c93) list_double_graphic_pane_g1

0x87ff,	// (0x00037c9f) list_double_graphic_pane_g2_ParamLimits

0x87ff,	// (0x00037c9f) list_double_graphic_pane_g2

0x880e,	// (0x00037cae) list_double_graphic_pane_g3_ParamLimits

0x880e,	// (0x00037cae) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0003eab2) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0003eab2) list_double_graphic_pane_g

0x881a,	// (0x00037cba) list_double_graphic_pane_t1_ParamLimits

0x881a,	// (0x00037cba) list_double_graphic_pane_t1

0x8830,	// (0x00037cd0) list_double_graphic_pane_t2_ParamLimits

0x8830,	// (0x00037cd0) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0003eabb) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0003eabb) list_double_graphic_pane_t

0x8842,	// (0x00037ce2) list_double2_graphic_pane_g1_ParamLimits

0x8842,	// (0x00037ce2) list_double2_graphic_pane_g1

0x3f37,	// (0x000333d7) list_double2_graphic_pane_g2_ParamLimits

0x3f37,	// (0x000333d7) list_double2_graphic_pane_g2

0x9bf7,	// (0x00039097) list_double2_graphic_pane_g3_ParamLimits

0x9bf7,	// (0x00039097) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0003eac0) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0003eac0) list_double2_graphic_pane_g

0x884e,	// (0x00037cee) list_double2_graphic_pane_t1_ParamLimits

0x884e,	// (0x00037cee) list_double2_graphic_pane_t1

0x8864,	// (0x00037d04) list_double2_graphic_pane_t2_ParamLimits

0x8864,	// (0x00037d04) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0003eac7) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0003eac7) list_double2_graphic_pane_t

0x8876,	// (0x00037d16) list_double_large_graphic_pane_g1_ParamLimits

0x8876,	// (0x00037d16) list_double_large_graphic_pane_g1

0x88a1,	// (0x00037d41) list_double_large_graphic_pane_g2_ParamLimits

0x88a1,	// (0x00037d41) list_double_large_graphic_pane_g2

0x8740,	// (0x00037be0) list_double_large_graphic_pane_g3_ParamLimits

0x8740,	// (0x00037be0) list_double_large_graphic_pane_g3

0x88b7,	// (0x00037d57) list_double_large_graphic_pane_g4_ParamLimits

0x88b7,	// (0x00037d57) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0003eacc) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0003eacc) list_double_large_graphic_pane_g

0x88ca,	// (0x00037d6a) list_double_large_graphic_pane_t1_ParamLimits

0x88ca,	// (0x00037d6a) list_double_large_graphic_pane_t1

0x88e3,	// (0x00037d83) list_double_large_graphic_pane_t2_ParamLimits

0x88e3,	// (0x00037d83) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0003ead7) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0003ead7) list_double_large_graphic_pane_t

0x9c18,	// (0x000390b8) list_double2_large_graphic_pane_g1_ParamLimits

0x9c18,	// (0x000390b8) list_double2_large_graphic_pane_g1

0x9c24,	// (0x000390c4) list_double2_large_graphic_pane_g2_ParamLimits

0x9c24,	// (0x000390c4) list_double2_large_graphic_pane_g2

0x9bf7,	// (0x00039097) list_double2_large_graphic_pane_g3_ParamLimits

0x9bf7,	// (0x00039097) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0003eadc) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0003eadc) list_double2_large_graphic_pane_g

0x88f5,	// (0x00037d95) list_double2_large_graphic_pane_t1_ParamLimits

0x88f5,	// (0x00037d95) list_double2_large_graphic_pane_t1

0x890b,	// (0x00037dab) list_double2_large_graphic_pane_t2_ParamLimits

0x890b,	// (0x00037dab) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0003eae3) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0003eae3) list_double2_large_graphic_pane_t

0x891d,	// (0x00037dbd) list_double_heading_pane_g1_ParamLimits

0x891d,	// (0x00037dbd) list_double_heading_pane_g1

0x9c35,	// (0x000390d5) list_double_heading_pane_g2_ParamLimits

0x9c35,	// (0x000390d5) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0003eae8) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0003eae8) list_double_heading_pane_g

0x892e,	// (0x00037dce) list_double_heading_pane_t1_ParamLimits

0x892e,	// (0x00037dce) list_double_heading_pane_t1

0x87a7,	// (0x00037c47) list_double_heading_pane_t2_ParamLimits

0x87a7,	// (0x00037c47) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0003eaed) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0003eaed) list_double_heading_pane_t

0x8944,	// (0x00037de4) list_double_graphic_heading_pane_g1_ParamLimits

0x8944,	// (0x00037de4) list_double_graphic_heading_pane_g1

0x891d,	// (0x00037dbd) list_double_graphic_heading_pane_g2_ParamLimits

0x891d,	// (0x00037dbd) list_double_graphic_heading_pane_g2

0x9c35,	// (0x000390d5) list_double_graphic_heading_pane_g3_ParamLimits

0x9c35,	// (0x000390d5) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0003eaf2) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0003eaf2) list_double_graphic_heading_pane_g

0x8950,	// (0x00037df0) list_double_graphic_heading_pane_t1_ParamLimits

0x8950,	// (0x00037df0) list_double_graphic_heading_pane_t1

0x8864,	// (0x00037d04) list_double_graphic_heading_pane_t2_ParamLimits

0x8864,	// (0x00037d04) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0003eaf9) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0003eaf9) list_double_graphic_heading_pane_t

0x8966,	// (0x00037e06) list_double_time_pane_g1_ParamLimits

0x8966,	// (0x00037e06) list_double_time_pane_g1

0x8977,	// (0x00037e17) list_double_time_pane_g2_ParamLimits

0x8977,	// (0x00037e17) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0003eafe) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0003eafe) list_double_time_pane_g

0x8983,	// (0x00037e23) list_double_time_pane_t1_ParamLimits

0x8983,	// (0x00037e23) list_double_time_pane_t1

0x8999,	// (0x00037e39) list_double_time_pane_t2_ParamLimits

0x8999,	// (0x00037e39) list_double_time_pane_t2

0x89ab,	// (0x00037e4b) list_double_time_pane_t3_ParamLimits

0x89ab,	// (0x00037e4b) list_double_time_pane_t3

0x89bd,	// (0x00037e5d) list_double_time_pane_t4_ParamLimits

0x89bd,	// (0x00037e5d) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0003eb03) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0003eb03) list_double_time_pane_t

0x89cf,	// (0x00037e6f) list_setting_pane_g1_ParamLimits

0x89cf,	// (0x00037e6f) list_setting_pane_g1

0x8785,	// (0x00037c25) list_setting_pane_g2_ParamLimits

0x8785,	// (0x00037c25) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0003eb0c) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0003eb0c) list_setting_pane_g

0x89db,	// (0x00037e7b) list_setting_pane_t1_ParamLimits

0x89db,	// (0x00037e7b) list_setting_pane_t1

0x89f5,	// (0x00037e95) list_setting_pane_t2_ParamLimits

0x89f5,	// (0x00037e95) list_setting_pane_t2

0x0002,

0xf671,	// (0x0003eb11) list_setting_pane_t_ParamLimits

0xf671,	// (0x0003eb11) list_setting_pane_t

0x8a32,	// (0x00037ed2) set_value_pane_cp_ParamLimits

0x8a32,	// (0x00037ed2) set_value_pane_cp

0x8a3e,	// (0x00037ede) list_setting_number_pane_g1_ParamLimits

0x8a3e,	// (0x00037ede) list_setting_number_pane_g1

0x8a4a,	// (0x00037eea) list_setting_number_pane_g2_ParamLimits

0x8a4a,	// (0x00037eea) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0003eb18) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0003eb18) list_setting_number_pane_g

0x8a56,	// (0x00037ef6) list_setting_number_pane_t1_ParamLimits

0x8a56,	// (0x00037ef6) list_setting_number_pane_t1

0x8a6f,	// (0x00037f0f) list_setting_number_pane_t2_ParamLimits

0x8a6f,	// (0x00037f0f) list_setting_number_pane_t2

0x8a89,	// (0x00037f29) list_setting_number_pane_t3_ParamLimits

0x8a89,	// (0x00037f29) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0003eb1d) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0003eb1d) list_setting_number_pane_t

0x8a32,	// (0x00037ed2) set_value_pane_ParamLimits

0x8a32,	// (0x00037ed2) set_value_pane

0x3ed0,	// (0x00033370) bg_set_opt_pane_ParamLimits

0x3ed0,	// (0x00033370) bg_set_opt_pane

0x8acc,	// (0x00037f6c) set_value_pane_t1

0x3ef1,	// (0x00033391) slider_set_pane_cp3

0x3efa,	// (0x0003339a) volume_small_pane_cp

0x3f03,	// (0x000333a3) list_form_gen_pane

0x3f0c,	// (0x000333ac) scroll_pane_cp8

0x8ae2,	// (0x00037f82) form_field_data_pane_ParamLimits

0x8ae2,	// (0x00037f82) form_field_data_pane

0x8b04,	// (0x00037fa4) form_field_data_wide_pane_ParamLimits

0x8b04,	// (0x00037fa4) form_field_data_wide_pane

0x8b25,	// (0x00037fc5) form_field_popup_pane_ParamLimits

0x8b25,	// (0x00037fc5) form_field_popup_pane

0x8b45,	// (0x00037fe5) form_field_popup_wide_pane_ParamLimits

0x8b45,	// (0x00037fe5) form_field_popup_wide_pane

0x8b62,	// (0x00038002) form_field_slider_pane_ParamLimits

0x8b62,	// (0x00038002) form_field_slider_pane

0x8b75,	// (0x00038015) form_field_slider_wide_pane_ParamLimits

0x8b75,	// (0x00038015) form_field_slider_wide_pane

0x3f1d,	// (0x000333bd) data_form_pane

0x8b92,	// (0x00038032) form_field_data_pane_t1

0x3f29,	// (0x000333c9) input_focus_pane

0x8bac,	// (0x0003804c) data_form_wide_pane

0x8bc9,	// (0x00038069) form_field_data_wide_pane_t1

0x3ca4,	// (0x00033144) input_focus_pane_cp6

0x8beb,	// (0x0003808b) form_field_popup_pane_t1

0x3f29,	// (0x000333c9) input_focus_pane_cp7

0x3f57,	// (0x000333f7) list_form_pane

0x8c0d,	// (0x000380ad) form_field_popup_wide_pane_t1

0x3f29,	// (0x000333c9) input_focus_pane_cp8

0x3f63,	// (0x00033403) list_form_wide_pane

0x8c2a,	// (0x000380ca) form_field_slider_pane_t1_ParamLimits

0x8c2a,	// (0x000380ca) form_field_slider_pane_t1

0x8c42,	// (0x000380e2) form_field_slider_pane_t2_ParamLimits

0x8c42,	// (0x000380e2) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0003eb2d) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0003eb2d) form_field_slider_pane_t

0x38d4,	// (0x00032d74) input_focus_pane_cp9_ParamLimits

0x38d4,	// (0x00032d74) input_focus_pane_cp9

0x8c57,	// (0x000380f7) slider_cont_pane_ParamLimits

0x8c57,	// (0x000380f7) slider_cont_pane

0x3f72,	// (0x00033412) form_field_slider_wide_pane_t1_ParamLimits

0x3f72,	// (0x00033412) form_field_slider_wide_pane_t1

0x8c6b,	// (0x0003810b) form_field_slider_wide_pane_t2_ParamLimits

0x8c6b,	// (0x0003810b) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0003eb32) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0003eb32) form_field_slider_wide_pane_t

0x38d4,	// (0x00032d74) input_focus_pane_cp10_ParamLimits

0x38d4,	// (0x00032d74) input_focus_pane_cp10

0x8c7d,	// (0x0003811d) slider_cont_pane_cp1_ParamLimits

0x8c7d,	// (0x0003811d) slider_cont_pane_cp1

0x8c91,	// (0x00038131) slider_form_pane_cp

0x3f84,	// (0x00033424) input_focus_pane_g1

0x3f8c,	// (0x0003342c) input_focus_pane_g2

0x3f94,	// (0x00033434) input_focus_pane_g3

0x3f9c,	// (0x0003343c) input_focus_pane_g4

0x3fa4,	// (0x00033444) input_focus_pane_g5

0x3fac,	// (0x0003344c) input_focus_pane_g6

0x3fb4,	// (0x00033454) input_focus_pane_g7

0x3fbc,	// (0x0003345c) input_focus_pane_g8

0x3fc4,	// (0x00033464) input_focus_pane_g9

0x387c,	// (0x00032d1c) input_focus_pane_g10

0x0009,

0xf697,	// (0x0003eb37) input_focus_pane_g

0x5248,	// (0x000346e8) wait_border_pane_g3_copy1

0x8c99,	// (0x00038139) data_form_pane_t1

0x387c,	// (0x00032d1c) wait_anim_pane_g1_copy1

0x8f23,	// (0x000383c3) data_form_wide_pane_t1

0x8cb4,	// (0x00038154) list_form_graphic_pane_cp_ParamLimits

0x8cb4,	// (0x00038154) list_form_graphic_pane_cp

0x5e1e,	// (0x000352be) slider_form_pane_g1

0x5e27,	// (0x000352c7) slider_form_pane_g2

0x0006,

0xf995,	// (0x0003ee35) slider_form_pane_g

0x8cb4,	// (0x00038154) list_form_graphic_pane_ParamLimits

0x8cb4,	// (0x00038154) list_form_graphic_pane

0x8ccb,	// (0x0003816b) list_form_graphic_pane_g1

0x8cd3,	// (0x00038173) list_form_graphic_pane_t1_ParamLimits

0x8cd3,	// (0x00038173) list_form_graphic_pane_t1

0x38e2,	// (0x00032d82) list_highlight_pane_cp5_ParamLimits

0x38e2,	// (0x00032d82) list_highlight_pane_cp5

0x8ce8,	// (0x00038188) find_pane_g1

0x3fcc,	// (0x0003346c) input_find_pane

0x8cf1,	// (0x00038191) input_find_pane_g1_ParamLimits

0x8cf1,	// (0x00038191) input_find_pane_g1

0x8cfd,	// (0x0003819d) input_find_pane_t1_ParamLimits

0x8cfd,	// (0x0003819d) input_find_pane_t1

0x8d12,	// (0x000381b2) input_find_pane_t2_ParamLimits

0x8d12,	// (0x000381b2) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0003eb4c) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0003eb4c) input_find_pane_t

0x3fd5,	// (0x00033475) input_focus_pane_cp5_ParamLimits

0x3fd5,	// (0x00033475) input_focus_pane_cp5

0x3fe3,	// (0x00033483) bg_popup_window_pane_cp2_ParamLimits

0x3fe3,	// (0x00033483) bg_popup_window_pane_cp2

0x3ff0,	// (0x00033490) listscroll_menu_pane_ParamLimits

0x3ff0,	// (0x00033490) listscroll_menu_pane

0x9c4d,	// (0x000390ed) popup_submenu_window_ParamLimits

0x9c4d,	// (0x000390ed) popup_submenu_window

0x3ffc,	// (0x0003349c) find_popup_pane_g1

0x4004,	// (0x000334a4) input_popup_find_pane_cp

0x3fd5,	// (0x00033475) input_focus_pane_cp4_ParamLimits

0x3fd5,	// (0x00033475) input_focus_pane_cp4

0x400e,	// (0x000334ae) input_popup_find_pane_t1_ParamLimits

0x400e,	// (0x000334ae) input_popup_find_pane_t1

0x3886,	// (0x00032d26) bg_popup_sub_pane_cp

0x403c,	// (0x000334dc) listscroll_popup_sub_pane

0x4044,	// (0x000334e4) list_submenu_pane_ParamLimits

0x4044,	// (0x000334e4) list_submenu_pane

0x4055,	// (0x000334f5) scroll_pane_cp4

0x405d,	// (0x000334fd) list_single_popup_submenu_pane_ParamLimits

0x405d,	// (0x000334fd) list_single_popup_submenu_pane

0x4071,	// (0x00033511) list_single_popup_submenu_pane_g1

0x4079,	// (0x00033519) list_single_popup_submenu_pane_t1_ParamLimits

0x4079,	// (0x00033519) list_single_popup_submenu_pane_t1

0x38e2,	// (0x00032d82) bg_active_tab_pane_cp1_ParamLimits

0x38e2,	// (0x00032d82) bg_active_tab_pane_cp1

0x9c83,	// (0x00039123) tabs_2_active_pane_g1

0x9c8b,	// (0x0003912b) tabs_2_active_pane_t1

0x38e2,	// (0x00032d82) bg_passive_tab_pane_cp1_ParamLimits

0x38e2,	// (0x00032d82) bg_passive_tab_pane_cp1

0x9c83,	// (0x00039123) tabs_2_passive_pane_g1

0x9c8b,	// (0x0003912b) tabs_2_passive_pane_t1

0x4dc6,	// (0x00034266) bg_active_tab_pane_cp4

0x9c9d,	// (0x0003913d) tabs_2_long_active_pane_t1

0x9cb0,	// (0x00039150) bg_passive_tab_pane_cp4

0xaeaf,	// (0x0003a34f) list_single_midp_graphic_pane_g4_ParamLimits

0x4dc6,	// (0x00034266) bg_active_tab_pane_cp5

0x9cbc,	// (0x0003915c) tabs_3_long_active_pane_t1

0x9cb0,	// (0x00039150) bg_passive_tab_pane_cp5

0xaeaf,	// (0x0003a34f) list_single_midp_graphic_pane_g4

0x38e2,	// (0x00032d82) bg_popup_window_pane_cp13_ParamLimits

0x38e2,	// (0x00032d82) bg_popup_window_pane_cp13

0x40a3,	// (0x00033543) listscroll_popup_fast_pane_ParamLimits

0x40a3,	// (0x00033543) listscroll_popup_fast_pane

0x40af,	// (0x0003354f) grid_popup_fast_pane_ParamLimits

0x40af,	// (0x0003354f) grid_popup_fast_pane

0x40c1,	// (0x00033561) scroll_pane_cp9_ParamLimits

0x40c1,	// (0x00033561) scroll_pane_cp9

0x7184,	// (0x00036624) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7184,	// (0x00036624) list_single_graphic_hl_pane_t1_cp2

0x40e5,	// (0x00033585) input_focus_pane_cp20_ParamLimits

0x40e5,	// (0x00033585) input_focus_pane_cp20

0x40f3,	// (0x00033593) query_popup_data_pane_t1_ParamLimits

0x40f3,	// (0x00033593) query_popup_data_pane_t1

0x4106,	// (0x000335a6) query_popup_data_pane_t2_ParamLimits

0x4106,	// (0x000335a6) query_popup_data_pane_t2

0x414c,	// (0x000335ec) query_popup_data_pane_t3_ParamLimits

0x414c,	// (0x000335ec) query_popup_data_pane_t3

0x418d,	// (0x0003362d) query_popup_data_pane_t4_ParamLimits

0x418d,	// (0x0003362d) query_popup_data_pane_t4

0x41c9,	// (0x00033669) query_popup_data_pane_t5_ParamLimits

0x41c9,	// (0x00033669) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0003eb51) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0003eb51) query_popup_data_pane_t

0x3f84,	// (0x00033424) bg_set_opt_pane_g1

0x3f8c,	// (0x0003342c) bg_set_opt_pane_g2

0x3f94,	// (0x00033434) bg_set_opt_pane_g3

0x3f9c,	// (0x0003343c) bg_set_opt_pane_g4

0x3fa4,	// (0x00033444) bg_set_opt_pane_g5

0x3fac,	// (0x0003344c) bg_set_opt_pane_g6

0x3fb4,	// (0x00033454) bg_set_opt_pane_g7

0x3fbc,	// (0x0003345c) bg_set_opt_pane_g8

0x3fc4,	// (0x00033464) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0003eb5c) bg_set_opt_pane_g

0xa0d9,	// (0x00039579) control_top_pane_stacon_ParamLimits

0xa0d9,	// (0x00039579) control_top_pane_stacon

0xa12c,	// (0x000395cc) signal_pane_stacon_ParamLimits

0xa12c,	// (0x000395cc) signal_pane_stacon

0x4630,	// (0x00033ad0) stacon_top_pane_g1_ParamLimits

0x4630,	// (0x00033ad0) stacon_top_pane_g1

0xa151,	// (0x000395f1) title_pane_stacon_ParamLimits

0xa151,	// (0x000395f1) title_pane_stacon

0xa17b,	// (0x0003961b) uni_indicator_pane_stacon_ParamLimits

0xa17b,	// (0x0003961b) uni_indicator_pane_stacon

0xa190,	// (0x00039630) battery_pane_stacon_ParamLimits

0xa190,	// (0x00039630) battery_pane_stacon

0xa1d4,	// (0x00039674) control_bottom_pane_stacon_ParamLimits

0xa1d4,	// (0x00039674) control_bottom_pane_stacon

0xa1f7,	// (0x00039697) navi_pane_stacon_ParamLimits

0xa1f7,	// (0x00039697) navi_pane_stacon

0x4652,	// (0x00033af2) stacon_bottom_pane_g1_ParamLimits

0x4652,	// (0x00033af2) stacon_bottom_pane_g1

0x9cce,	// (0x0003916e) aid_levels_signal_lsc_ParamLimits

0x9cce,	// (0x0003916e) aid_levels_signal_lsc

0x9ce5,	// (0x00039185) signal_pane_stacon_g1_ParamLimits

0x9ce5,	// (0x00039185) signal_pane_stacon_g1

0x9cf9,	// (0x00039199) signal_pane_stacon_g2_ParamLimits

0x9cf9,	// (0x00039199) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0003eb6f) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003eb6f) signal_pane_stacon_g

0x9d2e,	// (0x000391ce) title_pane_stacon_t1_ParamLimits

0x9d2e,	// (0x000391ce) title_pane_stacon_t1

0x4221,	// (0x000336c1) uni_indicator_pane_stacon_g1

0x422b,	// (0x000336cb) uni_indicator_pane_stacon_g2

0x420d,	// (0x000336ad) uni_indicator_pane_stacon_g3

0x4217,	// (0x000336b7) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0003eb7b) uni_indicator_pane_stacon_g

0x9d53,	// (0x000391f3) control_top_pane_stacon_g1

0x9d5b,	// (0x000391fb) control_top_pane_stacon_t1_ParamLimits

0x9d5b,	// (0x000391fb) control_top_pane_stacon_t1

0x9d92,	// (0x00039232) aid_levels_battery_lsc_ParamLimits

0x9d92,	// (0x00039232) aid_levels_battery_lsc

0x9daa,	// (0x0003924a) battery_pane_stacon_g1_ParamLimits

0x9daa,	// (0x0003924a) battery_pane_stacon_g1

0x9dbd,	// (0x0003925d) battery_pane_stacon_g2_ParamLimits

0x9dbd,	// (0x0003925d) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0003eb84) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0003eb84) battery_pane_stacon_g

0x9dfb,	// (0x0003929b) navi_icon_pane_stacon

0x9e0f,	// (0x000392af) navi_navi_pane_stacon

0x9dfb,	// (0x0003929b) navi_text_pane_stacon

0x9d53,	// (0x000391f3) control_bottom_pane_stacon_g1

0x9e23,	// (0x000392c3) control_bottom_pane_stacon_t1_ParamLimits

0x9e23,	// (0x000392c3) control_bottom_pane_stacon_t1

0x9e5a,	// (0x000392fa) grid_app_pane_ParamLimits

0x9e5a,	// (0x000392fa) grid_app_pane

0x9e7c,	// (0x0003931c) scroll_pane_cp15_ParamLimits

0x9e7c,	// (0x0003931c) scroll_pane_cp15

0x9e91,	// (0x00039331) cell_app_pane_ParamLimits

0x9e91,	// (0x00039331) cell_app_pane

0x9eb7,	// (0x00039357) cell_app_pane_g1_ParamLimits

0x9eb7,	// (0x00039357) cell_app_pane_g1

0x424f,	// (0x000336ef) cell_app_pane_g2_ParamLimits

0x424f,	// (0x000336ef) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0003eb89) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0003eb89) cell_app_pane_g

0x9ed7,	// (0x00039377) cell_app_pane_t1_ParamLimits

0x9ed7,	// (0x00039377) cell_app_pane_t1

0x425b,	// (0x000336fb) grid_highlight_pane_ParamLimits

0x425b,	// (0x000336fb) grid_highlight_pane

0x3f84,	// (0x00033424) cell_highlight_pane_g1

0x3f8c,	// (0x0003342c) cell_highlight_pane_g2

0x3f94,	// (0x00033434) cell_highlight_pane_g3

0x3f9c,	// (0x0003343c) cell_highlight_pane_g4

0x3fa4,	// (0x00033444) cell_highlight_pane_g5

0x3fac,	// (0x0003344c) cell_highlight_pane_g6

0x3fb4,	// (0x00033454) cell_highlight_pane_g7

0x3fbc,	// (0x0003345c) cell_highlight_pane_g8

0x3fc4,	// (0x00033464) cell_highlight_pane_g9

0x387c,	// (0x00032d1c) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0003eb37) cell_highlight_pane_g

0x426c,	// (0x0003370c) bg_scroll_pane

0x9f01,	// (0x000393a1) scroll_handle_pane

0x42b3,	// (0x00033753) scroll_bg_pane_g1

0x42c8,	// (0x00033768) scroll_bg_pane_g2

0x42e0,	// (0x00033780) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0003eb8e) scroll_bg_pane_g

0x42f5,	// (0x00033795) scroll_handle_focus_pane_ParamLimits

0x42f5,	// (0x00033795) scroll_handle_focus_pane

0x42b3,	// (0x00033753) scroll_handle_pane_g1

0x4302,	// (0x000337a2) scroll_handle_pane_g2

0x42e0,	// (0x00033780) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0003eb95) scroll_handle_pane_g

0x3fd5,	// (0x00033475) bg_popup_sub_pane_cp21_ParamLimits

0x3fd5,	// (0x00033475) bg_popup_sub_pane_cp21

0x4316,	// (0x000337b6) popup_fep_japan_predictive_window_t1_ParamLimits

0x4316,	// (0x000337b6) popup_fep_japan_predictive_window_t1

0x4330,	// (0x000337d0) popup_fep_japan_predictive_window_t2_ParamLimits

0x4330,	// (0x000337d0) popup_fep_japan_predictive_window_t2

0x4363,	// (0x00033803) popup_fep_japan_predictive_window_t3_ParamLimits

0x4363,	// (0x00033803) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0003eb9c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0003eb9c) popup_fep_japan_predictive_window_t

0x3886,	// (0x00032d26) bg_popup_sub_pane_cp23

0x439a,	// (0x0003383a) listscroll_japin_cand_pane

0x43a2,	// (0x00033842) popup_fep_japan_candidate_window_t1

0x43b0,	// (0x00033850) candidate_pane_ParamLimits

0x43b0,	// (0x00033850) candidate_pane

0x43c2,	// (0x00033862) scroll_pane_cp30

0x43ca,	// (0x0003386a) list_single_popup_jap_candidate_pane_ParamLimits

0x43ca,	// (0x0003386a) list_single_popup_jap_candidate_pane

0x3886,	// (0x00032d26) list_highlight_pane_cp30

0x43de,	// (0x0003387e) list_single_popup_jap_candidate_pane_t1

0x43ed,	// (0x0003388d) level_1_signal

0x43fa,	// (0x0003389a) level_2_signal

0x4407,	// (0x000338a7) level_3_signal

0x4414,	// (0x000338b4) level_4_signal

0x4421,	// (0x000338c1) level_5_signal

0x442e,	// (0x000338ce) level_6_signal

0x443b,	// (0x000338db) level_7_signal

0x43ed,	// (0x0003388d) level_1_battery

0x43fa,	// (0x0003389a) level_2_battery

0x4407,	// (0x000338a7) level_3_battery

0x4414,	// (0x000338b4) level_4_battery

0x4421,	// (0x000338c1) level_5_battery

0x442e,	// (0x000338ce) level_6_battery

0x443b,	// (0x000338db) level_7_battery

0x4460,	// (0x00033900) list_menu_pane_ParamLimits

0x4460,	// (0x00033900) list_menu_pane

0x4476,	// (0x00033916) scroll_pane_cp25_ParamLimits

0x4476,	// (0x00033916) scroll_pane_cp25

0x448f,	// (0x0003392f) list_double2_graphic_pane_cp2_ParamLimits

0x448f,	// (0x0003392f) list_double2_graphic_pane_cp2

0x448f,	// (0x0003392f) list_double2_large_graphic_pane_cp2_ParamLimits

0x448f,	// (0x0003392f) list_double2_large_graphic_pane_cp2

0x448f,	// (0x0003392f) list_double2_pane_cp2_ParamLimits

0x448f,	// (0x0003392f) list_double2_pane_cp2

0x448f,	// (0x0003392f) list_double_graphic_pane_cp2_ParamLimits

0x448f,	// (0x0003392f) list_double_graphic_pane_cp2

0x448f,	// (0x0003392f) list_double_large_graphic_pane_cp2_ParamLimits

0x448f,	// (0x0003392f) list_double_large_graphic_pane_cp2

0x448f,	// (0x0003392f) list_double_number_pane_cp2_ParamLimits

0x448f,	// (0x0003392f) list_double_number_pane_cp2

0x448f,	// (0x0003392f) list_double_pane_cp2_ParamLimits

0x448f,	// (0x0003392f) list_double_pane_cp2

0x9f5d,	// (0x000393fd) list_single_2graphic_pane_cp2_ParamLimits

0x9f5d,	// (0x000393fd) list_single_2graphic_pane_cp2

0x9f5d,	// (0x000393fd) list_single_graphic_heading_pane_cp2_ParamLimits

0x9f5d,	// (0x000393fd) list_single_graphic_heading_pane_cp2

0x9f5d,	// (0x000393fd) list_single_graphic_pane_cp2_ParamLimits

0x9f5d,	// (0x000393fd) list_single_graphic_pane_cp2

0x9f5d,	// (0x000393fd) list_single_heading_pane_cp2_ParamLimits

0x9f5d,	// (0x000393fd) list_single_heading_pane_cp2

0x449f,	// (0x0003393f) list_single_large_graphic_pane_cp2_ParamLimits

0x449f,	// (0x0003393f) list_single_large_graphic_pane_cp2

0x9f5d,	// (0x000393fd) list_single_number_heading_pane_cp2_ParamLimits

0x9f5d,	// (0x000393fd) list_single_number_heading_pane_cp2

0x9f5d,	// (0x000393fd) list_single_number_pane_cp2_ParamLimits

0x9f5d,	// (0x000393fd) list_single_number_pane_cp2

0x9f5d,	// (0x000393fd) list_single_pane_cp2_ParamLimits

0x9f5d,	// (0x000393fd) list_single_pane_cp2

0x44b9,	// (0x00033959) bg_popup_sub_pane_cp22

0xa03b,	// (0x000394db) popup_side_volume_key_window_g1

0xa05f,	// (0x000394ff) popup_side_volume_key_window_t1

0xa07b,	// (0x0003951b) volume_small_pane_cp1

0x38d4,	// (0x00032d74) bg_popup_sub_pane_cp24_ParamLimits

0x38d4,	// (0x00032d74) bg_popup_sub_pane_cp24

0x44cf,	// (0x0003396f) fep_china_uni_candidate_pane_ParamLimits

0x44cf,	// (0x0003396f) fep_china_uni_candidate_pane

0x44e3,	// (0x00033983) fep_china_uni_entry_pane

0x44f3,	// (0x00033993) popup_fep_china_uni_window_g1

0x450f,	// (0x000339af) fep_china_uni_entry_pane_g1

0x4517,	// (0x000339b7) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0003ebcd) fep_china_uni_entry_pane_g

0x451f,	// (0x000339bf) fep_entry_item_pane

0x4529,	// (0x000339c9) fep_candidate_item_pane

0x4531,	// (0x000339d1) fep_china_uni_candidate_pane_g1

0x4539,	// (0x000339d9) fep_china_uni_candidate_pane_g2

0x4541,	// (0x000339e1) fep_china_uni_candidate_pane_g3

0x4549,	// (0x000339e9) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0003ebd2) fep_china_uni_candidate_pane_g

0x387c,	// (0x00032d1c) fep_entry_item_pane_g1

0x4551,	// (0x000339f1) fep_entry_item_pane_t1_ParamLimits

0x4551,	// (0x000339f1) fep_entry_item_pane_t1

0x4567,	// (0x00033a07) fep_candidate_item_pane_t1_ParamLimits

0x4567,	// (0x00033a07) fep_candidate_item_pane_t1

0x457c,	// (0x00033a1c) fep_candidate_item_pane_t2_ParamLimits

0x457c,	// (0x00033a1c) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0003ebdb) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0003ebdb) fep_candidate_item_pane_t

0x38e2,	// (0x00032d82) list_highlight_pane_cp31_ParamLimits

0x38e2,	// (0x00032d82) list_highlight_pane_cp31

0x458e,	// (0x00033a2e) level_1_signal_lsc

0x4597,	// (0x00033a37) level_2_signal_lsc

0x45a0,	// (0x00033a40) level_3_signal_lsc

0x45a9,	// (0x00033a49) level_4_signal_lsc

0x45b2,	// (0x00033a52) level_5_signal_lsc

0x45bb,	// (0x00033a5b) level_6_signal_lsc

0x45c4,	// (0x00033a64) level_7_signal_lsc

0x45c4,	// (0x00033a64) level_1_battery_lsc

0x45cd,	// (0x00033a6d) level_2_battery_lsc

0x45d6,	// (0x00033a76) level_3_battery_lsc

0x45df,	// (0x00033a7f) level_4_battery_lsc

0x45e8,	// (0x00033a88) level_5_battery_lsc

0x45f1,	// (0x00033a91) level_6_battery_lsc

0x458e,	// (0x00033a2e) level_7_battery_lsc

0x45fa,	// (0x00033a9a) scroll_handle_focus_pane_g1

0x4603,	// (0x00033aa3) scroll_handle_focus_pane_g2

0x460c,	// (0x00033aac) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0003ebe0) scroll_handle_focus_pane_g

0x8d27,	// (0x000381c7) list_single_2graphic_pane_g1_ParamLimits

0x8d27,	// (0x000381c7) list_single_2graphic_pane_g1

0x86f5,	// (0x00037b95) list_single_2graphic_pane_g2_ParamLimits

0x86f5,	// (0x00037b95) list_single_2graphic_pane_g2

0x9ba1,	// (0x00039041) list_single_2graphic_pane_g3_ParamLimits

0x9ba1,	// (0x00039041) list_single_2graphic_pane_g3

0x8d33,	// (0x000381d3) list_single_2graphic_pane_g4_ParamLimits

0x8d33,	// (0x000381d3) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0003ebe7) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0003ebe7) list_single_2graphic_pane_g

0x8d44,	// (0x000381e4) list_single_2graphic_pane_t1_ParamLimits

0x8d44,	// (0x000381e4) list_single_2graphic_pane_t1

0xa083,	// (0x00039523) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa083,	// (0x00039523) list_double2_graphic_large_graphic_pane_g1

0x9c24,	// (0x000390c4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9c24,	// (0x000390c4) list_double2_graphic_large_graphic_pane_g2

0x9bf7,	// (0x00039097) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9bf7,	// (0x00039097) list_double2_graphic_large_graphic_pane_g3

0xa093,	// (0x00039533) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa093,	// (0x00039533) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0003ebf0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0003ebf0) list_double2_graphic_large_graphic_pane_g

0x8d72,	// (0x00038212) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8d72,	// (0x00038212) list_double2_graphic_large_graphic_pane_t1

0x8d88,	// (0x00038228) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8d88,	// (0x00038228) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0003ebf9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0003ebf9) list_double2_graphic_large_graphic_pane_t

0x46de,	// (0x00033b7e) popup_fast_swap_window_ParamLimits

0x46de,	// (0x00033b7e) popup_fast_swap_window

0x46fa,	// (0x00033b9a) popup_side_volume_key_window

0x4714,	// (0x00033bb4) stacon_top_pane

0x471e,	// (0x00033bbe) status_pane_ParamLimits

0x471e,	// (0x00033bbe) status_pane

0x4714,	// (0x00033bb4) status_small_pane

0x3886,	// (0x00032d26) control_pane

0x3886,	// (0x00032d26) stacon_bottom_pane

0x3f0c,	// (0x000333ac) scroll_pane_cp121

0x3f03,	// (0x000333a3) set_content_pane

0xa09f,	// (0x0003953f) bg_active_tab_pane_g1_cp1

0x461e,	// (0x00033abe) bg_active_tab_pane_g2_cp1

0xa0a8,	// (0x00039548) bg_active_tab_pane_g3_cp1

0xa09f,	// (0x0003953f) bg_passive_tab_pane_g1_cp1

0x461e,	// (0x00033abe) bg_passive_tab_pane_g2_cp1

0xa0a8,	// (0x00039548) bg_passive_tab_pane_g3_cp1

0x4627,	// (0x00033ac7) bg_active_tab_pane_g1_cp2

0x461e,	// (0x00033abe) bg_active_tab_pane_g2_cp2

0x4615,	// (0x00033ab5) bg_active_tab_pane_g3_cp2

0x4627,	// (0x00033ac7) bg_passive_tab_pane_g1_cp2

0x461e,	// (0x00033abe) bg_passive_tab_pane_g2_cp2

0x4615,	// (0x00033ab5) bg_passive_tab_pane_g3_cp2

0xa0b1,	// (0x00039551) bg_active_tab_pane_g1_cp3

0x461e,	// (0x00033abe) bg_active_tab_pane_g2_cp3

0xa0ba,	// (0x0003955a) bg_active_tab_pane_g3_cp3

0xa0b1,	// (0x00039551) bg_passive_tab_pane_g1_cp3

0x461e,	// (0x00033abe) bg_passive_tab_pane_g2_cp3

0xa0ba,	// (0x0003955a) bg_passive_tab_pane_g3_cp3

0xa0c3,	// (0x00039563) bg_active_tab_pane_g1_cp4

0x461e,	// (0x00033abe) bg_active_tab_pane_g2_cp4

0xa0ce,	// (0x0003956e) bg_active_tab_pane_g3_cp4

0xa0c3,	// (0x00039563) bg_passive_tab_pane_g1_cp4

0x461e,	// (0x00033abe) bg_passive_tab_pane_g2_cp4

0xa0ce,	// (0x0003956e) bg_passive_tab_pane_g3_cp4

0x4677,	// (0x00033b17) bg_active_tab_pane_g1_cp5

0x461e,	// (0x00033abe) bg_active_tab_pane_g2_cp5

0x466e,	// (0x00033b0e) bg_active_tab_pane_g3_cp5

0x4677,	// (0x00033b17) bg_passive_tab_pane_g1_cp5

0x461e,	// (0x00033abe) bg_passive_tab_pane_g2_cp5

0x466e,	// (0x00033b0e) bg_passive_tab_pane_g3_cp5

0xa21a,	// (0x000396ba) list_set_graphic_pane_ParamLimits

0xa21a,	// (0x000396ba) list_set_graphic_pane

0x3886,	// (0x00032d26) bg_set_opt_pane_cp4

0x4680,	// (0x00033b20) list_set_graphic_pane_g1_ParamLimits

0x4680,	// (0x00033b20) list_set_graphic_pane_g1

0x468c,	// (0x00033b2c) list_set_graphic_pane_g2_ParamLimits

0x468c,	// (0x00033b2c) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0003ebfe) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0003ebfe) list_set_graphic_pane_g

0x0009,

0xfae1,	// (0x0003ef81) volume_small_pane_cp_g

0xa23a,	// (0x000396da) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa23a,	// (0x000396da) list_double2_large_graphic_pane_g1_cp2

0xa246,	// (0x000396e6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa246,	// (0x000396e6) list_double2_large_graphic_pane_g2_cp2

0x46ae,	// (0x00033b4e) list_double2_large_graphic_pane_g3_cp2

0x46b6,	// (0x00033b56) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x46b6,	// (0x00033b56) list_double2_large_graphic_pane_t1_cp2

0x46cc,	// (0x00033b6c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x46cc,	// (0x00033b6c) list_double2_large_graphic_pane_t2_cp2

0xb359,	// (0x0003a7f9) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb359,	// (0x0003a7f9) list_double_large_graphic_pane_g1_cp2

0xb36a,	// (0x0003a80a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb36a,	// (0x0003a80a) list_double_large_graphic_pane_g2_cp2

0x47ff,	// (0x00033c9f) list_double_large_graphic_pane_g3_cp2

0x5bdc,	// (0x0003507c) list_double_large_graphic_pane_g4_cp

0x5be4,	// (0x00035084) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5be4,	// (0x00035084) list_double_large_graphic_pane_t1_cp2

0x5bfb,	// (0x0003509b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5bfb,	// (0x0003509b) list_double_large_graphic_pane_t2_cp2

0xa257,	// (0x000396f7) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa257,	// (0x000396f7) list_double2_graphic_pane_g1_cp2

0xa265,	// (0x00039705) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa265,	// (0x00039705) list_double2_graphic_pane_g2_cp2

0xa276,	// (0x00039716) list_double2_graphic_pane_g3_cp2

0x472c,	// (0x00033bcc) list_double2_graphic_pane_t1_cp2_ParamLimits

0x472c,	// (0x00033bcc) list_double2_graphic_pane_t1_cp2

0x4742,	// (0x00033be2) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4742,	// (0x00033be2) list_double2_graphic_pane_t2_cp2

0x4754,	// (0x00033bf4) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4754,	// (0x00033bf4) list_single_number_heading_pane_g1_cp2

0x4760,	// (0x00033c00) list_single_number_heading_pane_g2_cp2

0x4768,	// (0x00033c08) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4768,	// (0x00033c08) list_single_number_heading_pane_t1_cp2

0xa280,	// (0x00039720) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa280,	// (0x00039720) list_single_number_heading_pane_t2_cp2

0x477e,	// (0x00033c1e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x477e,	// (0x00033c1e) list_single_number_heading_pane_t3_cp2

0x4754,	// (0x00033bf4) list_single_heading_pane_g1_cp2_ParamLimits

0x4754,	// (0x00033bf4) list_single_heading_pane_g1_cp2

0x4760,	// (0x00033c00) list_single_heading_pane_g2_cp2

0x4768,	// (0x00033c08) list_single_heading_pane_t1_cp2_ParamLimits

0x4768,	// (0x00033c08) list_single_heading_pane_t1_cp2

0xb347,	// (0x0003a7e7) list_single_heading_pane_t2_cp2_ParamLimits

0xb347,	// (0x0003a7e7) list_single_heading_pane_t2_cp2

0x5952,	// (0x00034df2) list_double_graphic_pane_g1_cp2_ParamLimits

0x5952,	// (0x00034df2) list_double_graphic_pane_g1_cp2

0x595e,	// (0x00034dfe) list_double_graphic_pane_g2_cp2_ParamLimits

0x595e,	// (0x00034dfe) list_double_graphic_pane_g2_cp2

0x596d,	// (0x00034e0d) list_double_graphic_pane_g3_cp2

0x5975,	// (0x00034e15) list_double_graphic_pane_t1_cp2_ParamLimits

0x5975,	// (0x00034e15) list_double_graphic_pane_t1_cp2

0x598b,	// (0x00034e2b) list_double_graphic_pane_t2_cp2_ParamLimits

0x598b,	// (0x00034e2b) list_double_graphic_pane_t2_cp2

0x47f3,	// (0x00033c93) list_double_number_pane_g1_cp2_ParamLimits

0x47f3,	// (0x00033c93) list_double_number_pane_g1_cp2

0x47ff,	// (0x00033c9f) list_double_number_pane_g2_cp2

0xb321,	// (0x0003a7c1) list_double_number_pane_t1_cp2_ParamLimits

0xb321,	// (0x0003a7c1) list_double_number_pane_t1_cp2

0x592a,	// (0x00034dca) list_double_number_pane_t2_cp2_ParamLimits

0x592a,	// (0x00034dca) list_double_number_pane_t2_cp2

0x5940,	// (0x00034de0) list_double_number_pane_t3_cp2_ParamLimits

0x5940,	// (0x00034de0) list_double_number_pane_t3_cp2

0xb274,	// (0x0003a714) list_single_graphic_pane_g1_cp2_ParamLimits

0xb274,	// (0x0003a714) list_single_graphic_pane_g1_cp2

0x483f,	// (0x00033cdf) list_single_graphic_pane_g2_cp2_ParamLimits

0x483f,	// (0x00033cdf) list_single_graphic_pane_g2_cp2

0x484b,	// (0x00033ceb) list_single_graphic_pane_g3_cp2

0x5899,	// (0x00034d39) list_single_graphic_pane_t1_cp2_ParamLimits

0x5899,	// (0x00034d39) list_single_graphic_pane_t1_cp2

0x483f,	// (0x00033cdf) list_single_number_pane_g1_cp2_ParamLimits

0x483f,	// (0x00033cdf) list_single_number_pane_g1_cp2

0x484b,	// (0x00033ceb) list_single_number_pane_g2_cp2

0x5899,	// (0x00034d39) list_single_number_pane_t1_cp2_ParamLimits

0x5899,	// (0x00034d39) list_single_number_pane_t1_cp2

0xb260,	// (0x0003a700) list_single_number_pane_t2_cp2_ParamLimits

0xb260,	// (0x0003a700) list_single_number_pane_t2_cp2

0xa246,	// (0x000396e6) list_double2_pane_g1_cp2_ParamLimits

0xa246,	// (0x000396e6) list_double2_pane_g1_cp2

0x46ae,	// (0x00033b4e) list_double2_pane_g2_cp2

0x47cb,	// (0x00033c6b) list_double2_pane_t1_cp2_ParamLimits

0x47cb,	// (0x00033c6b) list_double2_pane_t1_cp2

0x47e1,	// (0x00033c81) list_double2_pane_t2_cp2_ParamLimits

0x47e1,	// (0x00033c81) list_double2_pane_t2_cp2

0x47f3,	// (0x00033c93) list_double_pane_g1_cp2_ParamLimits

0x47f3,	// (0x00033c93) list_double_pane_g1_cp2

0x47ff,	// (0x00033c9f) list_double_pane_g2_cp2

0x4807,	// (0x00033ca7) list_double_pane_t1_cp2_ParamLimits

0x4807,	// (0x00033ca7) list_double_pane_t1_cp2

0x481d,	// (0x00033cbd) list_double_pane_t2_cp2_ParamLimits

0x481d,	// (0x00033cbd) list_double_pane_t2_cp2

0x482f,	// (0x00033ccf) list_single_pane_cp2_g3

0x483f,	// (0x00033cdf) list_single_pane_g1_cp2_ParamLimits

0x483f,	// (0x00033cdf) list_single_pane_g1_cp2

0x484b,	// (0x00033ceb) list_single_pane_g2_cp2

0x4853,	// (0x00033cf3) list_single_pane_t1_cp2_ParamLimits

0x4853,	// (0x00033cf3) list_single_pane_t1_cp2

0xa2aa,	// (0x0003974a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa2aa,	// (0x0003974a) list_single_large_graphic_pane_g1_cp2

0x486b,	// (0x00033d0b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x486b,	// (0x00033d0b) list_single_large_graphic_pane_g2_cp2

0x4877,	// (0x00033d17) list_single_large_graphic_pane_g3_cp2

0x487f,	// (0x00033d1f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x487f,	// (0x00033d1f) list_single_large_graphic_pane_g4_cp1

0x4899,	// (0x00033d39) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4899,	// (0x00033d39) list_single_large_graphic_pane_t1_cp2

0x5877,	// (0x00034d17) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5877,	// (0x00034d17) list_single_graphic_heading_pane_g1_cp2

0xb0f0,	// (0x0003a590) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb0f0,	// (0x0003a590) list_single_graphic_heading_pane_g4_cp2

0x484b,	// (0x00033ceb) list_single_graphic_heading_pane_g5_cp2

0x5883,	// (0x00034d23) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5883,	// (0x00034d23) list_single_graphic_heading_pane_t1_cp2

0xb101,	// (0x0003a5a1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb101,	// (0x0003a5a1) list_single_graphic_heading_pane_t2_cp2

0x5849,	// (0x00034ce9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5849,	// (0x00034ce9) list_single_2graphic_pane_g1_cp2

0xb0f0,	// (0x0003a590) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb0f0,	// (0x0003a590) list_single_2graphic_pane_g2_cp2

0x484b,	// (0x00033ceb) list_single_2graphic_pane_g3_cp2

0x5855,	// (0x00034cf5) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5855,	// (0x00034cf5) list_single_2graphic_pane_g4_cp2

0x5861,	// (0x00034d01) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5861,	// (0x00034d01) list_single_2graphic_pane_t1_cp2

0x387c,	// (0x00032d1c) list_highlight_pane_g10_cp1

0x543f,	// (0x000348df) list_highlight_pane_g1_cp1

0x5447,	// (0x000348e7) list_highlight_pane_g2_cp1

0x544f,	// (0x000348ef) list_highlight_pane_g3_cp1

0x5457,	// (0x000348f7) list_highlight_pane_g4_cp1

0x545f,	// (0x000348ff) list_highlight_pane_g5_cp1

0x5467,	// (0x00034907) list_highlight_pane_g6_cp1

0x546f,	// (0x0003490f) list_highlight_pane_g7_cp1

0x5477,	// (0x00034917) list_highlight_pane_g8_cp1

0x547f,	// (0x0003491f) list_highlight_pane_g9_cp1

0xb0b6,	// (0x0003a556) form_field_slider_pane_t3

0xb0c4,	// (0x0003a564) form_field_slider_pane_t4

0x5373,	// (0x00034813) slider_form_pane_ParamLimits

0x5373,	// (0x00034813) slider_form_pane

0x3886,	// (0x00032d26) control_abbreviations

0x3886,	// (0x00032d26) control_conventions

0x3886,	// (0x00032d26) control_definitions

0x3886,	// (0x00032d26) format_table_attribute

0x5a30,	// (0x00034ed0) bg_popup_preview_window_pane_g9

0x3886,	// (0x00032d26) format_table_data2

0x3886,	// (0x00032d26) format_table_data3

0x3886,	// (0x00032d26) format_table_data_example

0x0008,

0x3886,	// (0x00032d26) intro_purpose

0xf8f5,	// (0x0003ed95) bg_popup_preview_window_pane_g

0x3886,	// (0x00032d26) texts_category

0x3886,	// (0x00032d26) texts_graphics

0x48af,	// (0x00033d4f) text_digital

0x48be,	// (0x00033d5e) text_primary

0x48cd,	// (0x00033d6d) text_primary_small

0x48dc,	// (0x00033d7c) text_secondary

0x48eb,	// (0x00033d8b) text_title

0x5ee3,	// (0x00035383) bg_passive_tab_pane_g1_cp3_srt

0x461e,	// (0x00033abe) bg_passive_tab_pane_g2_cp3_srt

0x5eda,	// (0x0003537a) bg_passive_tab_pane_g3_cp3_srt

0x38e2,	// (0x00032d82) bg_active_tab_pane_cp3_srt_ParamLimits

0x38e2,	// (0x00032d82) bg_active_tab_pane_cp3_srt

0x5eec,	// (0x0003538c) tabs_4_active_pane_srt_g1

0xb71d,	// (0x0003abbd) tabs_4_active_pane_srt_t1_ParamLimits

0xb71d,	// (0x0003abbd) tabs_4_active_pane_srt_t1

0x5ee3,	// (0x00035383) bg_active_tab_pane_g1_cp3_copy1

0x461e,	// (0x00033abe) bg_active_tab_pane_g2_cp3_copy1

0x5eda,	// (0x0003537a) bg_active_tab_pane_g3_cp3_copy1

0x38e2,	// (0x00032d82) tabs_2_long_active_pane_srt_ParamLimits

0x38e2,	// (0x00032d82) tabs_2_long_active_pane_srt

0x38e2,	// (0x00032d82) tabs_2_long_passive_pane_srt_ParamLimits

0x38e2,	// (0x00032d82) tabs_2_long_passive_pane_srt

0x9cb0,	// (0x00039150) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9cb0,	// (0x00039150) bg_passive_tab_pane_cp4_srt

0x5de0,	// (0x00035280) bg_passive_tab_pane_g1_cp4_srt

0x461e,	// (0x00033abe) bg_passive_tab_pane_g2_cp4_srt

0x5dd7,	// (0x00035277) bg_passive_tab_pane_g3_cp4_srt

0x4dc6,	// (0x00034266) bg_active_tab_pane_cp4_srt_ParamLimits

0x4dc6,	// (0x00034266) bg_active_tab_pane_cp4_srt

0xb445,	// (0x0003a8e5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb445,	// (0x0003a8e5) tabs_2_long_active_pane_srt_t1

0x5de0,	// (0x00035280) bg_active_tab_pane_g1_cp4_srt

0x461e,	// (0x00033abe) bg_active_tab_pane_g2_cp4_srt

0x5dd7,	// (0x00035277) bg_active_tab_pane_g3_cp4_srt

0x38d4,	// (0x00032d74) tabs_3_long_active_pane_srt_ParamLimits

0x38d4,	// (0x00032d74) tabs_3_long_active_pane_srt

0x38d4,	// (0x00032d74) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x38d4,	// (0x00032d74) tabs_3_long_passive_pane_cp_srt

0x38d4,	// (0x00032d74) tabs_3_long_passive_pane_srt_ParamLimits

0x38d4,	// (0x00032d74) tabs_3_long_passive_pane_srt

0x9cb0,	// (0x00039150) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9cb0,	// (0x00039150) bg_passive_tab_pane_cp5_srt

0x4677,	// (0x00033b17) bg_passive_tab_pane_g1_cp5_srt

0x461e,	// (0x00033abe) bg_passive_tab_pane_g2_cp5_srt

0x466e,	// (0x00033b0e) bg_passive_tab_pane_g3_cp5_srt

0x4dc6,	// (0x00034266) bg_active_tab_pane_cp5_srt_ParamLimits

0x4dc6,	// (0x00034266) bg_active_tab_pane_cp5_srt

0xb433,	// (0x0003a8d3) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb433,	// (0x0003a8d3) tabs_3_long_active_pane_srt_t1

0x4677,	// (0x00033b17) bg_active_tab_pane_g1_cp5_srt

0x461e,	// (0x00033abe) bg_active_tab_pane_g2_cp5_srt

0x466e,	// (0x00033b0e) bg_active_tab_pane_g3_cp5_srt

0x5dc9,	// (0x00035269) navi_text_pane_srt_t1

0x5dc1,	// (0x00035261) navi_icon_pane_srt_g1

0x49fb,	// (0x00033e9b) midp_editing_number_pane_srt

0x48fa,	// (0x00033d9a) midp_ticker_pane_srt

0x4a03,	// (0x00033ea3) midp_ticker_pane_srt_g1

0x4a0b,	// (0x00033eab) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0003ec1d) midp_ticker_pane_srt_g

0x4a13,	// (0x00033eb3) midp_ticker_pane_srt_t1

0x5db2,	// (0x00035252) midp_editing_number_pane_t1_copy1

0x9cb0,	// (0x00039150) listscroll_midp_pane

0x9cb0,	// (0x00039150) midp_form_pane

0x4902,	// (0x00033da2) midp_info_popup_window_ParamLimits

0x4902,	// (0x00033da2) midp_info_popup_window

0x3fd5,	// (0x00033475) bg_popup_sub_pane_cp50_ParamLimits

0x3fd5,	// (0x00033475) bg_popup_sub_pane_cp50

0x5090,	// (0x00034530) listscroll_midp_info_pane_ParamLimits

0x5090,	// (0x00034530) listscroll_midp_info_pane

0x5078,	// (0x00034518) listscroll_form_midp_pane_ParamLimits

0x5078,	// (0x00034518) listscroll_form_midp_pane

0x5084,	// (0x00034524) scroll_bar_cp050

0xb09e,	// (0x0003a53e) list_midp_pane

0x67e3,	// (0x00035c83) signal_pane_g2_cp

0x4faa,	// (0x0003444a) listscroll_midp_info_pane_t1_ParamLimits

0x4faa,	// (0x0003444a) listscroll_midp_info_pane_t1

0x4fc2,	// (0x00034462) listscroll_midp_info_pane_t2_ParamLimits

0x4fc2,	// (0x00034462) listscroll_midp_info_pane_t2

0x5000,	// (0x000344a0) listscroll_midp_info_pane_t3_ParamLimits

0x5000,	// (0x000344a0) listscroll_midp_info_pane_t3

0x503a,	// (0x000344da) listscroll_midp_info_pane_t4_ParamLimits

0x503a,	// (0x000344da) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0003ecd0) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0003ecd0) listscroll_midp_info_pane_t

0x4055,	// (0x000334f5) scroll_pane_cp21

0x4f4c,	// (0x000343ec) form_midp_field_choice_group_pane

0x4f55,	// (0x000343f5) form_midp_field_text_pane

0x4f90,	// (0x00034430) form_midp_field_time_pane

0x4f98,	// (0x00034438) form_midp_gauge_slider_pane

0x4fa1,	// (0x00034441) form_midp_gauge_wait_pane

0x3886,	// (0x00032d26) form_midp_image_pane

0x8edf,	// (0x0003837f) list_single_midp_pane_ParamLimits

0x8edf,	// (0x0003837f) list_single_midp_pane

0xb063,	// (0x0003a503) form_midp_field_text_pane_t1

0x4da2,	// (0x00034242) input_focus_pane_cp050

0x4f3b,	// (0x000343db) list_midp_form_text_pane

0x4f0a,	// (0x000343aa) form_midp_field_choice_group_pane_t1

0x4f18,	// (0x000343b8) input_focus_pane_cp051

0x4f2c,	// (0x000343cc) list_midp_choice_pane

0x3886,	// (0x00032d26) status_idle_pane

0x4eee,	// (0x0003438e) form_midp_field_time_pane_t1

0x387c,	// (0x00032d1c) wait_anim_pane_g2_copy1

0x4efc,	// (0x0003439c) form_midp_field_time_pane_t2

0x0001,

0x496d,	// (0x00033e0d) aid_navinavi_width_2_pane

0xf82b,	// (0x0003eccb) form_midp_field_time_pane_t

0x3886,	// (0x00032d26) input_focus_pane_cp052

0x3886,	// (0x00032d26) bg_input_focus_pane_cp040

0x4eca,	// (0x0003436a) form_midp_gauge_slider_pane_t1

0x4ed8,	// (0x00034378) form_midp_gauge_slider_pane_t2

0xb047,	// (0x0003a4e7) form_midp_gauge_slider_pane_t3

0xb055,	// (0x0003a4f5) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0003ecc2) form_midp_gauge_slider_pane_t

0x4ee6,	// (0x00034386) form_midp_slider_pane

0x38e2,	// (0x00032d82) bg_input_focus_pane_cp041_ParamLimits

0x38e2,	// (0x00032d82) bg_input_focus_pane_cp041

0x4e97,	// (0x00034337) form_midp_gauge_wait_pane_t1_ParamLimits

0x4e97,	// (0x00034337) form_midp_gauge_wait_pane_t1

0x4ea9,	// (0x00034349) form_midp_gauge_wait_pane_t2_ParamLimits

0x4ea9,	// (0x00034349) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0003ecbd) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0003ecbd) form_midp_gauge_wait_pane_t

0x4ebb,	// (0x0003435b) form_midp_wait_pane_ParamLimits

0x4ebb,	// (0x0003435b) form_midp_wait_pane

0x4e61,	// (0x00034301) form_midp_image_pane_g1

0x4e6a,	// (0x0003430a) form_midp_image_pane_t1

0x4e79,	// (0x00034319) form_midp_image_pane_t2

0x4e88,	// (0x00034328) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0003ecb6) form_midp_image_pane_t

0x4e58,	// (0x000342f8) list_single_midp_pane_g1

0x8ed0,	// (0x00038370) list_single_midp_pane_t1

0xb018,	// (0x0003a4b8) list_midp_form_item_pane_ParamLimits

0xb018,	// (0x0003a4b8) list_midp_form_item_pane

0x4915,	// (0x00033db5) list_midp_form_item_pane_t1

0x4924,	// (0x00033dc4) midp_ticker_pane_g1

0x4930,	// (0x00033dd0) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0003ec03) midp_ticker_pane_g

0x493c,	// (0x00033ddc) midp_ticker_pane_t1

0x5e62,	// (0x00035302) midp_editing_number_pane_t1

0x5e40,	// (0x000352e0) midp_editing_number_pane

0x5e4f,	// (0x000352ef) midp_ticker_pane

0x5da2,	// (0x00035242) ai_message_heading_pane

0x3886,	// (0x00032d26) bg_popup_window_pane_cp14

0x5daa,	// (0x0003524a) listscroll_ai_message_pane

0x5d2c,	// (0x000351cc) ai_message_heading_pane_g1_ParamLimits

0x5d2c,	// (0x000351cc) ai_message_heading_pane_g1

0x5d38,	// (0x000351d8) ai_message_heading_pane_g2_ParamLimits

0x5d38,	// (0x000351d8) ai_message_heading_pane_g2

0x5d44,	// (0x000351e4) ai_message_heading_pane_g3_ParamLimits

0x5d44,	// (0x000351e4) ai_message_heading_pane_g3

0x5d50,	// (0x000351f0) ai_message_heading_pane_g4_ParamLimits

0x5d50,	// (0x000351f0) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0003edf7) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0003edf7) ai_message_heading_pane_g

0x5d5c,	// (0x000351fc) ai_message_heading_pane_t1_ParamLimits

0x5d5c,	// (0x000351fc) ai_message_heading_pane_t1

0x5d76,	// (0x00035216) ai_message_heading_pane_t2_ParamLimits

0x5d76,	// (0x00035216) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0003ee00) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0003ee00) ai_message_heading_pane_t

0x5d88,	// (0x00035228) bg_popup_heading_pane_cp1_ParamLimits

0x5d88,	// (0x00035228) bg_popup_heading_pane_cp1

0x5d1a,	// (0x000351ba) list_ai_message_pane_ParamLimits

0x5d1a,	// (0x000351ba) list_ai_message_pane

0x4055,	// (0x000334f5) scroll_pane_cp10

0x5cb6,	// (0x00035156) list_ai_message_pane_g1

0x5cbe,	// (0x0003515e) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0003edd4) list_ai_message_pane_g

0x5cc6,	// (0x00035166) list_ai_message_pane_t1_ParamLimits

0x5cc6,	// (0x00035166) list_ai_message_pane_t1

0x5cdb,	// (0x0003517b) list_ai_message_pane_t2_ParamLimits

0x5cdb,	// (0x0003517b) list_ai_message_pane_t2

0x5cf0,	// (0x00035190) list_ai_message_pane_t3_ParamLimits

0x5cf0,	// (0x00035190) list_ai_message_pane_t3

0x5d05,	// (0x000351a5) list_ai_message_pane_t4_ParamLimits

0x5d05,	// (0x000351a5) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0003edd9) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0003edd9) list_ai_message_pane_t

0xb3cd,	// (0x0003a86d) cell_ai_soft_ind_pane_ParamLimits

0xb3cd,	// (0x0003a86d) cell_ai_soft_ind_pane

0x494e,	// (0x00033dee) cell_ai_soft_ind_pane_g1_ParamLimits

0x494e,	// (0x00033dee) cell_ai_soft_ind_pane_g1

0x3886,	// (0x00032d26) grid_highlight_cp1

0x495b,	// (0x00033dfb) text_secondary_cp56_ParamLimits

0x495b,	// (0x00033dfb) text_secondary_cp56

0x5c8b,	// (0x0003512b) example_general_pane_ParamLimits

0x5c8b,	// (0x0003512b) example_general_pane

0x5c97,	// (0x00035137) example_parent_pane_g1_ParamLimits

0x5c97,	// (0x00035137) example_parent_pane_g1

0x5ca3,	// (0x00035143) example_parent_pane_t1_ParamLimits

0x5ca3,	// (0x00035143) example_parent_pane_t1

0xa92a,	// (0x00039dca) popup_preview_text_window_ParamLimits

0xa92a,	// (0x00039dca) popup_preview_text_window

0x4837,	// (0x00033cd7) list_single_pane_cp2_g4

0x3ab1,	// (0x00032f51) bg_popup_preview_window_pane_ParamLimits

0x3ab1,	// (0x00032f51) bg_popup_preview_window_pane

0x5a38,	// (0x00034ed8) popup_preview_text_window_t1_ParamLimits

0x5a38,	// (0x00034ed8) popup_preview_text_window_t1

0x5a56,	// (0x00034ef6) popup_preview_text_window_t2_ParamLimits

0x5a56,	// (0x00034ef6) popup_preview_text_window_t2

0x5a9f,	// (0x00034f3f) popup_preview_text_window_t3_ParamLimits

0x5a9f,	// (0x00034f3f) popup_preview_text_window_t3

0x5ae4,	// (0x00034f84) popup_preview_text_window_t4_ParamLimits

0x5ae4,	// (0x00034f84) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0003eda8) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0003eda8) popup_preview_text_window_t

0x5b62,	// (0x00035002) scroll_pane_cp11

0x4d2e,	// (0x000341ce) bg_popup_preview_window_pane_g1

0x59f8,	// (0x00034e98) bg_popup_preview_window_pane_g2

0x5a00,	// (0x00034ea0) bg_popup_preview_window_pane_g3

0x5a08,	// (0x00034ea8) bg_popup_preview_window_pane_g4

0x5a10,	// (0x00034eb0) bg_popup_preview_window_pane_g5

0x5a18,	// (0x00034eb8) bg_popup_preview_window_pane_g6

0x5a20,	// (0x00034ec0) bg_popup_preview_window_pane_g7

0x5a28,	// (0x00034ec8) bg_popup_preview_window_pane_g8

0x94a5,	// (0x00038945) aid_popup_width_pane

0xa908,	// (0x00039da8) popup_midp_note_alarm_window_ParamLimits

0xa908,	// (0x00039da8) popup_midp_note_alarm_window

0x3f1d,	// (0x000333bd) data_form_pane_ParamLimits

0x8b88,	// (0x00038028) form_field_data_pane_g1

0x8b92,	// (0x00038032) form_field_data_pane_t1_ParamLimits

0x3f29,	// (0x000333c9) input_focus_pane_ParamLimits

0x8bac,	// (0x0003804c) data_form_wide_pane_ParamLimits

0x8bbd,	// (0x0003805d) form_field_data_wide_pane_g1

0x8bc9,	// (0x00038069) form_field_data_wide_pane_t1_ParamLimits

0x3ca4,	// (0x00033144) input_focus_pane_cp6_ParamLimits

0x9c75,	// (0x00039115) input_popup_find_pane_g1_ParamLimits

0x9c75,	// (0x00039115) input_popup_find_pane_g1

0x9dce,	// (0x0003926e) aid_navi_side_left_pane

0x9de3,	// (0x00039283) aid_navi_side_right_pane

0x551c,	// (0x000349bc) bg_popup_window_pane_cp30_ParamLimits

0x551c,	// (0x000349bc) bg_popup_window_pane_cp30

0x5596,	// (0x00034a36) popup_midp_note_alarm_window_g1_ParamLimits

0x5596,	// (0x00034a36) popup_midp_note_alarm_window_g1

0x55c6,	// (0x00034a66) popup_midp_note_alarm_window_t1_ParamLimits

0x55c6,	// (0x00034a66) popup_midp_note_alarm_window_t1

0x5667,	// (0x00034b07) popup_midp_note_alarm_window_t2_ParamLimits

0x5667,	// (0x00034b07) popup_midp_note_alarm_window_t2

0x5715,	// (0x00034bb5) popup_midp_note_alarm_window_t3_ParamLimits

0x5715,	// (0x00034bb5) popup_midp_note_alarm_window_t3

0x5747,	// (0x00034be7) popup_midp_note_alarm_window_t4_ParamLimits

0x5747,	// (0x00034be7) popup_midp_note_alarm_window_t4

0x576d,	// (0x00034c0d) popup_midp_note_alarm_window_t5_ParamLimits

0x576d,	// (0x00034c0d) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0003ed45) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0003ed45) popup_midp_note_alarm_window_t

0x5819,	// (0x00034cb9) wait_bar_pane_cp1_ParamLimits

0x5819,	// (0x00034cb9) wait_bar_pane_cp1

0x3886,	// (0x00032d26) wait_anim_pane_copy1

0x3886,	// (0x00032d26) wait_border_pane_copy1

0x5234,	// (0x000346d4) wait_border_pane_g1_copy1

0x8be3,	// (0x00038083) form_field_popup_pane_g1

0x8beb,	// (0x0003808b) form_field_popup_pane_t1_ParamLimits

0x3f29,	// (0x000333c9) input_focus_pane_cp7_ParamLimits

0x3f57,	// (0x000333f7) list_form_pane_ParamLimits

0x8c05,	// (0x000380a5) form_field_popup_wide_pane_g1

0x8c0d,	// (0x000380ad) form_field_popup_wide_pane_t1_ParamLimits

0x3f29,	// (0x000333c9) input_focus_pane_cp8_ParamLimits

0x3f63,	// (0x00033403) list_form_wide_pane_ParamLimits

0x5f13,	// (0x000353b3) aid_size_cell_graphic_pane

0x8c99,	// (0x00038139) data_form_pane_t1_ParamLimits

0x8f23,	// (0x000383c3) data_form_wide_pane_t1_ParamLimits

0xabec,	// (0x0003a08c) bg_status_flat_pane

0x989a,	// (0x00038d3a) title_pane_t1_ParamLimits

0x389c,	// (0x00032d3c) title_pane_t2_ParamLimits

0x38c2,	// (0x00032d62) title_pane_t3_ParamLimits

0xf55d,	// (0x0003e9fd) title_pane_t_ParamLimits

0x43ed,	// (0x0003388d) level_1_signal_ParamLimits

0x43fa,	// (0x0003389a) level_2_signal_ParamLimits

0x4407,	// (0x000338a7) level_3_signal_ParamLimits

0x4414,	// (0x000338b4) level_4_signal_ParamLimits

0x4421,	// (0x000338c1) level_5_signal_ParamLimits

0x442e,	// (0x000338ce) level_6_signal_ParamLimits

0x443b,	// (0x000338db) level_7_signal_ParamLimits

0x43ed,	// (0x0003388d) level_1_battery_ParamLimits

0x43fa,	// (0x0003389a) level_2_battery_ParamLimits

0x4407,	// (0x000338a7) level_3_battery_ParamLimits

0x4414,	// (0x000338b4) level_4_battery_ParamLimits

0x4421,	// (0x000338c1) level_5_battery_ParamLimits

0x442e,	// (0x000338ce) level_6_battery_ParamLimits

0x443b,	// (0x000338db) level_7_battery_ParamLimits

0x543f,	// (0x000348df) bg_status_flat_pane_g1

0x5447,	// (0x000348e7) bg_status_flat_pane_g2

0x544f,	// (0x000348ef) bg_status_flat_pane_g3

0x5457,	// (0x000348f7) bg_status_flat_pane_g4

0x545f,	// (0x000348ff) bg_status_flat_pane_g5

0x5467,	// (0x00034907) bg_status_flat_pane_g6

0x546f,	// (0x0003490f) bg_status_flat_pane_g7

0x990a,	// (0x00038daa) tabs_3_active_pane_t1_ParamLimits

0x990a,	// (0x00038daa) tabs_3_passive_pane_t1_ParamLimits

0x9924,	// (0x00038dc4) tabs_4_active_pane_t1_ParamLimits

0x9924,	// (0x00038dc4) tabs_4_1_passive_pane_t1_ParamLimits

0x9c8b,	// (0x0003912b) tabs_2_active_pane_t1_ParamLimits

0x9c8b,	// (0x0003912b) tabs_2_passive_pane_t1_ParamLimits

0x4dc6,	// (0x00034266) bg_active_tab_pane_cp4_ParamLimits

0x9c9d,	// (0x0003913d) tabs_2_long_active_pane_t1_ParamLimits

0x9cb0,	// (0x00039150) bg_passive_tab_pane_cp4_ParamLimits

0xaed5,	// (0x0003a375) list_single_midp_graphic_pane_t1_ParamLimits

0x4dc6,	// (0x00034266) bg_active_tab_pane_cp5_ParamLimits

0x9cbc,	// (0x0003915c) tabs_3_long_active_pane_t1_ParamLimits

0x9cb0,	// (0x00039150) bg_passive_tab_pane_cp5_ParamLimits

0xaed5,	// (0x0003a375) list_single_midp_graphic_pane_t1

0xabec,	// (0x0003a08c) bg_status_flat_pane_ParamLimits

0x4bff,	// (0x0003409f) indicator_pane_cp2_ParamLimits

0x4bff,	// (0x0003409f) indicator_pane_cp2

0xad30,	// (0x0003a1d0) navi_pane_srt_ParamLimits

0xad30,	// (0x0003a1d0) navi_pane_srt

0x4c27,	// (0x000340c7) popup_clock_digital_analogue_window_cp1

0x3926,	// (0x00032dc6) indicator_pane_t1

0x48fa,	// (0x00033d9a) copy_highlight_pane

0x48fa,	// (0x00033d9a) cursor_graphics_pane

0x48fa,	// (0x00033d9a) graphic_within_text_pane

0x48fa,	// (0x00033d9a) link_highlight_pane

0x5b25,	// (0x00034fc5) popup_preview_text_window_t5_ParamLimits

0x5b25,	// (0x00034fc5) popup_preview_text_window_t5

0x4975,	// (0x00033e15) cursor_digital_pane

0x4975,	// (0x00033e15) cursor_primary_pane

0x4986,	// (0x00033e26) cursor_primary_small_pane

0x498e,	// (0x00033e2e) cursor_secondary_pane

0x4996,	// (0x00033e36) cursor_title_pane

0x4975,	// (0x00033e15) link_highlight_digital_pane

0x497d,	// (0x00033e1d) link_highlight_primary_pane

0x4986,	// (0x00033e26) link_highlight_primary_small_pane

0x498e,	// (0x00033e2e) link_highlight_secondary_pane

0x4996,	// (0x00033e36) link_highlight_title_pane

0x4975,	// (0x00033e15) copy_highlight_digital_pane

0x4975,	// (0x00033e15) copy_highlight_primary_pane

0x4986,	// (0x00033e26) copy_highlight_primary_small_pane

0x498e,	// (0x00033e2e) copy_highlight_secondary_pane

0x4996,	// (0x00033e36) copy_highlight_title_pane

0x498e,	// (0x00033e2e) graphic_text_digital_pane

0x54bf,	// (0x0003495f) graphic_text_primary_pane

0x54c8,	// (0x00034968) graphic_text_primary_small_pane

0x4986,	// (0x00033e26) graphic_text_secondary_pane

0x4975,	// (0x00033e15) graphic_text_title_pane

0xa35f,	// (0x000397ff) cursor_primary_pane_g1

0x54b1,	// (0x00034951) cursor_text_primary_t1

0xb0e6,	// (0x0003a586) cursor_primary_small_pane_g1

0x54a3,	// (0x00034943) cursor_text_primary_small_t1

0xb0dc,	// (0x0003a57c) cursor_primary_small_pane_g1_copy1

0x5495,	// (0x00034935) cursor_text_primary_small_t1_copy1

0x5487,	// (0x00034927) cursor_text_title_t1

0xb0d2,	// (0x0003a572) cursor_title_pane_g1

0xa35f,	// (0x000397ff) cursor_digital_pane_g1

0x499e,	// (0x00033e3e) cursor_text_digital_t1

0x5428,	// (0x000348c8) link_highlight_primary_pane_g1

0x5430,	// (0x000348d0) link_highlight_primary_pane_t1

0x49ac,	// (0x00033e4c) link_highlight_primary_small_pane_g1

0x49b4,	// (0x00033e54) link_highlight_primary_small_pane_t1

0x49ac,	// (0x00033e4c) link_highlight_secondary_pane_g1

0x49c3,	// (0x00033e63) link_highlight_secondary_pane_t1

0x539c,	// (0x0003483c) link_highlight_title_pane_g1

0x53a4,	// (0x00034844) link_highlight_title_pane_t1

0x5385,	// (0x00034825) link_highlight_digital_pane_g1

0x538d,	// (0x0003482d) link_highlight_digital_pane_t1

0x5279,	// (0x00034719) copy_highlight_primary_pane_g1

0x5281,	// (0x00034721) copy_highlight_primary_pane_t1

0x5253,	// (0x000346f3) copy_highlight_primary_small_pane_g1

0x526a,	// (0x0003470a) copy_highlight_primary_small_pane_t1

0x49d2,	// (0x00033e72) copy_highlight_secondary_pane_g1

0x49da,	// (0x00033e7a) copy_highlight_secondary_pane_t1

0x5253,	// (0x000346f3) copy_highlight_title_pane_g1

0x525b,	// (0x000346fb) copy_highlight_title_pane_t1

0x5279,	// (0x00034719) copy_highlight_digital_pane_g1

0x6099,	// (0x00035539) copy_highlight_digital_pane_t1

0x5fed,	// (0x0003548d) graphic_text_primary_pane_g1

0x607d,	// (0x0003551d) graphic_text_primary_pane_t1

0x608b,	// (0x0003552b) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0003ee74) graphic_text_primary_pane_t

0x6059,	// (0x000354f9) graphic_text_primary_small_pane_g1

0x6061,	// (0x00035501) graphic_text_primary_small_pane_t1

0x606f,	// (0x0003550f) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0003ee6f) graphic_text_primary_small_pane_t

0x6035,	// (0x000354d5) graphic_text_secondary_pane_g1

0x603d,	// (0x000354dd) graphic_text_secondary_pane_t1

0x604b,	// (0x000354eb) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0003ee6a) graphic_text_secondary_pane_t

0x6011,	// (0x000354b1) graphic_text_title_pane_g1

0x6019,	// (0x000354b9) graphic_text_title_pane_t1

0x6027,	// (0x000354c7) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0003ee65) graphic_text_title_pane_t

0x5fed,	// (0x0003548d) graphic_text_digital_pane_g1

0x5ff5,	// (0x00035495) graphic_text_digital_pane_t1

0x6003,	// (0x000354a3) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0003ee60) graphic_text_digital_pane_t

0x38e2,	// (0x00032d82) navi_icon_pane_srt_ParamLimits

0x38e2,	// (0x00032d82) navi_icon_pane_srt

0x3886,	// (0x00032d26) navi_midp_pane_srt

0x3886,	// (0x00032d26) navi_navi_pane_srt

0x38e2,	// (0x00032d82) navi_text_pane_srt_ParamLimits

0x38e2,	// (0x00032d82) navi_text_pane_srt

0x5fb8,	// (0x00035458) navi_navi_icon_text_pane_srt

0x5fd2,	// (0x00035472) navi_navi_pane_srt_g1_ParamLimits

0x5fd2,	// (0x00035472) navi_navi_pane_srt_g1

0x5fc0,	// (0x00035460) navi_navi_pane_srt_g2_ParamLimits

0x5fc0,	// (0x00035460) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0003ee5b) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0003ee5b) navi_navi_pane_srt_g

0x5fe4,	// (0x00035484) navi_navi_tabs_pane_srt

0x5fb8,	// (0x00035458) navi_navi_text_pane_srt

0x5fb8,	// (0x00035458) navi_navi_volume_pane_srt

0x5fa9,	// (0x00035449) navi_navi_text_pane_srt_t1

0xb841,	// (0x0003ace1) navi_navi_volume_pane_srt_g1

0xb849,	// (0x0003ace9) volume_small_pane_srt_ParamLimits

0xb849,	// (0x0003ace9) volume_small_pane_srt

0xa369,	// (0x00039809) volume_small_pane_srt_g1_ParamLimits

0xa369,	// (0x00039809) volume_small_pane_srt_g1

0xa379,	// (0x00039819) volume_small_pane_srt_g2_ParamLimits

0xa379,	// (0x00039819) volume_small_pane_srt_g2

0xa38a,	// (0x0003982a) volume_small_pane_srt_g3_ParamLimits

0xa38a,	// (0x0003982a) volume_small_pane_srt_g3

0xa39b,	// (0x0003983b) volume_small_pane_srt_g4_ParamLimits

0xa39b,	// (0x0003983b) volume_small_pane_srt_g4

0xa3ac,	// (0x0003984c) volume_small_pane_srt_g5_ParamLimits

0xa3ac,	// (0x0003984c) volume_small_pane_srt_g5

0xa3bd,	// (0x0003985d) volume_small_pane_srt_g6_ParamLimits

0xa3bd,	// (0x0003985d) volume_small_pane_srt_g6

0xa3ce,	// (0x0003986e) volume_small_pane_srt_g7_ParamLimits

0xa3ce,	// (0x0003986e) volume_small_pane_srt_g7

0xa3df,	// (0x0003987f) volume_small_pane_srt_g8_ParamLimits

0xa3df,	// (0x0003987f) volume_small_pane_srt_g8

0xa3f0,	// (0x00039890) volume_small_pane_srt_g9_ParamLimits

0xa3f0,	// (0x00039890) volume_small_pane_srt_g9

0xa401,	// (0x000398a1) volume_small_pane_srt_g10_ParamLimits

0xa401,	// (0x000398a1) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0003ec08) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0003ec08) volume_small_pane_srt_g

0x3b5a,	// (0x00032ffa) query_popup_data_pane_cp2

0x5f8f,	// (0x0003542f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5f8f,	// (0x0003542f) navi_navi_icon_text_pane_srt_t1

0x54bf,	// (0x0003495f) navi_tabs_2_long_pane_srt

0x54bf,	// (0x0003495f) navi_tabs_2_pane_srt

0x54bf,	// (0x0003495f) navi_tabs_3_long_pane_srt

0x54bf,	// (0x0003495f) navi_tabs_3_pane_srt

0x54bf,	// (0x0003495f) navi_tabs_4_pane_srt

0xb821,	// (0x0003acc1) tabs_2_active_pane_srt_ParamLimits

0xb821,	// (0x0003acc1) tabs_2_active_pane_srt

0xb831,	// (0x0003acd1) tabs_2_passive_pane_srt_ParamLimits

0xb831,	// (0x0003acd1) tabs_2_passive_pane_srt

0x408e,	// (0x0003352e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x408e,	// (0x0003352e) bg_passive_tab_pane_cp1_srt

0x5f76,	// (0x00035416) bg_passive_tab_pane_g1_cp1_srt

0x461e,	// (0x00033abe) bg_passive_tab_pane_g2_cp1_srt

0x5f6d,	// (0x0003540d) bg_passive_tab_pane_g3_cp1_srt

0x38e2,	// (0x00032d82) bg_active_tab_pane_cp1_srt_ParamLimits

0x38e2,	// (0x00032d82) bg_active_tab_pane_cp1_srt

0x5f7f,	// (0x0003541f) tabs_2_active_pane_srt_g1

0xb80f,	// (0x0003acaf) tabs_2_active_pane_srt_t1_ParamLimits

0xb80f,	// (0x0003acaf) tabs_2_active_pane_srt_t1

0x5f76,	// (0x00035416) bg_active_tab_pane_g1_cp1_srt

0x461e,	// (0x00033abe) bg_active_tab_pane_g2_cp1_srt

0x5f6d,	// (0x0003540d) bg_active_tab_pane_g3_cp1_srt

0xb7dc,	// (0x0003ac7c) tabs_3_active_pane_srt_ParamLimits

0xb7dc,	// (0x0003ac7c) tabs_3_active_pane_srt

0xb7ed,	// (0x0003ac8d) tabs_3_passive_pane_cp_srt_ParamLimits

0xb7ed,	// (0x0003ac8d) tabs_3_passive_pane_cp_srt

0xb7fe,	// (0x0003ac9e) tabs_3_passive_pane_srt_ParamLimits

0xb7fe,	// (0x0003ac9e) tabs_3_passive_pane_srt

0x408e,	// (0x0003352e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x408e,	// (0x0003352e) bg_passive_tab_pane_cp2_srt

0x49f2,	// (0x00033e92) bg_passive_tab_pane_g1_cp2_srt

0x461e,	// (0x00033abe) bg_passive_tab_pane_g2_cp2_srt

0x49e9,	// (0x00033e89) bg_passive_tab_pane_g3_cp2_srt

0x38e2,	// (0x00032d82) bg_active_tab_pane_cp2_srt_ParamLimits

0x38e2,	// (0x00032d82) bg_active_tab_pane_cp2_srt

0x5f65,	// (0x00035405) tabs_3_active_pane_srt_g1

0xb7ca,	// (0x0003ac6a) tabs_3_active_pane_srt_t1_ParamLimits

0xb7ca,	// (0x0003ac6a) tabs_3_active_pane_srt_t1

0x49f2,	// (0x00033e92) bg_active_tab_pane_g1_cp2_srt

0x461e,	// (0x00033abe) bg_active_tab_pane_g2_cp2_srt

0x49e9,	// (0x00033e89) bg_active_tab_pane_g3_cp2_srt

0xb782,	// (0x0003ac22) tabs_4_active_pane_srt_ParamLimits

0xb782,	// (0x0003ac22) tabs_4_active_pane_srt

0xb794,	// (0x0003ac34) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb794,	// (0x0003ac34) tabs_4_passive_pane_cp2_srt

0xa58b,	// (0x00039a2b) aid_size_cell_toolbar

0x9cb0,	// (0x00039150) main_idle_act_pane_ParamLimits

0xa73c,	// (0x00039bdc) popup_large_graphic_colour_window_ParamLimits

0xaaa1,	// (0x00039f41) popup_toolbar_window_ParamLimits

0xaaa1,	// (0x00039f41) popup_toolbar_window

0x5e71,	// (0x00035311) list_single_graphic_2heading_pane_ParamLimits

0x5e71,	// (0x00035311) list_single_graphic_2heading_pane

0x4235,	// (0x000336d5) aid_size_cell_apps_grid_lsc_pane

0x4247,	// (0x000336e7) aid_size_cell_apps_grid_prt_pane

0x408e,	// (0x0003352e) bg_wml_button_pane_cp1_ParamLimits

0x408e,	// (0x0003352e) bg_wml_button_pane_cp1

0xb063,	// (0x0003a503) form_midp_field_text_pane_t1_ParamLimits

0x4da2,	// (0x00034242) input_focus_pane_cp050_ParamLimits

0x4f3b,	// (0x000343db) list_midp_form_text_pane_ParamLimits

0x4f18,	// (0x000343b8) input_focus_pane_cp051_ParamLimits

0x4f2c,	// (0x000343cc) list_midp_choice_pane_ParamLimits

0xafb4,	// (0x0003a454) list_single_2graphic_pane_cp3_ParamLimits

0xafb4,	// (0x0003a454) list_single_2graphic_pane_cp3

0xafdf,	// (0x0003a47f) list_single_midp_graphic_pane_ParamLimits

0xafdf,	// (0x0003a47f) list_single_midp_graphic_pane

0x8db2,	// (0x00038252) list_single_graphic_2heading_pane_g1_ParamLimits

0x8db2,	// (0x00038252) list_single_graphic_2heading_pane_g1

0x8dbe,	// (0x0003825e) list_single_graphic_2heading_pane_g4_ParamLimits

0x8dbe,	// (0x0003825e) list_single_graphic_2heading_pane_g4

0x8dca,	// (0x0003826a) list_single_graphic_2heading_pane_g5_ParamLimits

0x8dca,	// (0x0003826a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0003ec5b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0003ec5b) list_single_graphic_2heading_pane_g

0x8dd6,	// (0x00038276) list_single_graphic_2heading_pane_t1_ParamLimits

0x8dd6,	// (0x00038276) list_single_graphic_2heading_pane_t1

0x8dea,	// (0x0003828a) list_single_graphic_2heading_pane_t2_ParamLimits

0x8dea,	// (0x0003828a) list_single_graphic_2heading_pane_t2

0x8e06,	// (0x000382a6) list_single_graphic_2heading_pane_t3_ParamLimits

0x8e06,	// (0x000382a6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0003ec62) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0003ec62) list_single_graphic_2heading_pane_t

0x4c6c,	// (0x0003410c) bg_popup_sub_pane_cp2

0x4c96,	// (0x00034136) grid_toobar_pane

0xae5a,	// (0x0003a2fa) cell_toolbar_pane_ParamLimits

0xae5a,	// (0x0003a2fa) cell_toolbar_pane

0x4cd2,	// (0x00034172) cell_toolbar_pane_g1_ParamLimits

0x4cd2,	// (0x00034172) cell_toolbar_pane_g1

0x4ce6,	// (0x00034186) cell_toolbar_pane_g2_ParamLimits

0x4ce6,	// (0x00034186) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0003ec70) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0003ec70) cell_toolbar_pane_g

0x4d08,	// (0x000341a8) grid_highlight_pane_cp2_ParamLimits

0x4d08,	// (0x000341a8) grid_highlight_pane_cp2

0x4d22,	// (0x000341c2) toolbar_button_pane

0x4d2e,	// (0x000341ce) toolbar_button_pane_g1

0x4d3e,	// (0x000341de) toolbar_button_pane_g2

0x4d36,	// (0x000341d6) toolbar_button_pane_g3

0x4d4e,	// (0x000341ee) toolbar_button_pane_g4

0x4d46,	// (0x000341e6) toolbar_button_pane_g5

0x4d56,	// (0x000341f6) toolbar_button_pane_g6

0x4d5e,	// (0x000341fe) toolbar_button_pane_g7

0x4d6e,	// (0x0003420e) toolbar_button_pane_g8

0x4d66,	// (0x00034206) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0003ec75) toolbar_button_pane_g

0xae92,	// (0x0003a332) list_single_2graphic_pane_g1_cp3_ParamLimits

0xae92,	// (0x0003a332) list_single_2graphic_pane_g1_cp3

0xae9e,	// (0x0003a33e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xae9e,	// (0x0003a33e) list_single_2graphic_pane_g2_cp3

0x4760,	// (0x00033c00) list_single_2graphic_pane_g3_cp3

0xaeaf,	// (0x0003a34f) list_single_2graphic_pane_g4_cp3_ParamLimits

0xaeaf,	// (0x0003a34f) list_single_2graphic_pane_g4_cp3

0xaebb,	// (0x0003a35b) list_single_2graphic_pane_t1_cp3_ParamLimits

0xaebb,	// (0x0003a35b) list_single_2graphic_pane_t1_cp3

0x4754,	// (0x00033bf4) list_single_midp_graphic_pane_g2_ParamLimits

0x4754,	// (0x00033bf4) list_single_midp_graphic_pane_g2

0x8d9a,	// (0x0003823a) aid_zoom_text_primary

0x8da2,	// (0x00038242) aid_zoom_text_secondary

0x4aa6,	// (0x00033f46) status_small_pane_g7_ParamLimits

0x4aa6,	// (0x00033f46) status_small_pane_g7

0x4ac9,	// (0x00033f69) status_small_pane_t1_ParamLimits

0x987d,	// (0x00038d1d) title_pane_g2

0x0003,

0xf554,	// (0x0003e9f4) title_pane_g

0x9adb,	// (0x00038f7b) aid_size_cell_colour_1_pane_ParamLimits

0x9adb,	// (0x00038f7b) aid_size_cell_colour_1_pane

0x9aef,	// (0x00038f8f) aid_size_cell_colour_2_pane_ParamLimits

0x9aef,	// (0x00038f8f) aid_size_cell_colour_2_pane

0x9b03,	// (0x00038fa3) aid_size_cell_colour_3_pane_ParamLimits

0x9b03,	// (0x00038fa3) aid_size_cell_colour_3_pane

0x9b17,	// (0x00038fb7) aid_size_cell_colour_4_pane_ParamLimits

0x9b17,	// (0x00038fb7) aid_size_cell_colour_4_pane

0x9d0a,	// (0x000391aa) title_pane_stacon_g1_ParamLimits

0x9d0a,	// (0x000391aa) title_pane_stacon_g1

0x52d8,	// (0x00034778) popup_note_wait_window_g3_ParamLimits

0x52d8,	// (0x00034778) popup_note_wait_window_g3

0x534e,	// (0x000347ee) popup_note_wait_window_t5_ParamLimits

0x534e,	// (0x000347ee) popup_note_wait_window_t5

0x3886,	// (0x00032d26) main_feb_china_hwr_fs_writing_pane

0xa625,	// (0x00039ac5) popup_feb_china_hwr_fs_window_ParamLimits

0xa625,	// (0x00039ac5) popup_feb_china_hwr_fs_window

0xaeeb,	// (0x0003a38b) aid_size_cell_hwr_fs_ParamLimits

0xaeeb,	// (0x0003a38b) aid_size_cell_hwr_fs

0x4da2,	// (0x00034242) bg_popup_sub_pane_cp3_ParamLimits

0x4da2,	// (0x00034242) bg_popup_sub_pane_cp3

0xaf00,	// (0x0003a3a0) grid_hwr_fs_pane_ParamLimits

0xaf00,	// (0x0003a3a0) grid_hwr_fs_pane

0xaf18,	// (0x0003a3b8) linegrid_hwr_fs_pane_ParamLimits

0xaf18,	// (0x0003a3b8) linegrid_hwr_fs_pane

0xaf28,	// (0x0003a3c8) cell_hwr_fs_pane_ParamLimits

0xaf28,	// (0x0003a3c8) cell_hwr_fs_pane

0x4dae,	// (0x0003424e) linegrid_hwr_fs_pane_g1_ParamLimits

0x4dae,	// (0x0003424e) linegrid_hwr_fs_pane_g1

0xaf4a,	// (0x0003a3ea) linegrid_hwr_fs_pane_g2_ParamLimits

0xaf4a,	// (0x0003a3ea) linegrid_hwr_fs_pane_g2

0x4dba,	// (0x0003425a) linegrid_hwr_fs_pane_g3_ParamLimits

0x4dba,	// (0x0003425a) linegrid_hwr_fs_pane_g3

0xaf5c,	// (0x0003a3fc) linegrid_hwr_fs_pane_g4_ParamLimits

0xaf5c,	// (0x0003a3fc) linegrid_hwr_fs_pane_g4

0xaf76,	// (0x0003a416) linegrid_hwr_fs_pane_g5_ParamLimits

0xaf76,	// (0x0003a416) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0003ec9b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003ec9b) linegrid_hwr_fs_pane_g

0x4df2,	// (0x00034292) cell_hwr_fs_pane_g1_ParamLimits

0x4df2,	// (0x00034292) cell_hwr_fs_pane_g1

0x4c38,	// (0x000340d8) cell_hwr_fs_pane_g2_ParamLimits

0x4c38,	// (0x000340d8) cell_hwr_fs_pane_g2

0xaf8c,	// (0x0003a42c) cell_hwr_fs_pane_g3_ParamLimits

0xaf8c,	// (0x0003a42c) cell_hwr_fs_pane_g3

0xaf99,	// (0x0003a439) cell_hwr_fs_pane_g4_ParamLimits

0xaf99,	// (0x0003a439) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0003eca6) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0003eca6) cell_hwr_fs_pane_g

0xafa6,	// (0x0003a446) cell_hwr_fs_pane_t1

0x3886,	// (0x00032d26) grid_highlight_pane_cp6

0x3886,	// (0x00032d26) main_idle_act2_pane

0x403c,	// (0x000334dc) aid_inside_area_popup_secondary

0xb298,	// (0x0003a738) aid_inside_area_window_primary_ParamLimits

0xb298,	// (0x0003a738) aid_inside_area_window_primary

0x60a8,	// (0x00035548) ai2_news_ticker_pane

0x60b0,	// (0x00035550) aid_size_cell_ai1_link_ParamLimits

0x60b0,	// (0x00035550) aid_size_cell_ai1_link

0x60ca,	// (0x0003556a) popup_ai2_data_window_ParamLimits

0x60ca,	// (0x0003556a) popup_ai2_data_window

0x60de,	// (0x0003557e) popup_ai2_link_window_ParamLimits

0x60de,	// (0x0003557e) popup_ai2_link_window

0x4da2,	// (0x00034242) bg_popup_sub_pane_cp4_ParamLimits

0x4da2,	// (0x00034242) bg_popup_sub_pane_cp4

0x60f2,	// (0x00035592) grid_ai2_link_pane_ParamLimits

0x60f2,	// (0x00035592) grid_ai2_link_pane

0x6109,	// (0x000355a9) popup_ai2_link_window_g1_ParamLimits

0x6109,	// (0x000355a9) popup_ai2_link_window_g1

0x6115,	// (0x000355b5) popup_ai2_link_window_g2_ParamLimits

0x6115,	// (0x000355b5) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0003ee79) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0003ee79) popup_ai2_link_window_g

0x6124,	// (0x000355c4) ai2_mp_button_pane

0x612c,	// (0x000355cc) ai2_mp_volume_pane

0x4f18,	// (0x000343b8) bg_popup_sub_pane_cp5_ParamLimits

0x4f18,	// (0x000343b8) bg_popup_sub_pane_cp5

0x6134,	// (0x000355d4) heading_ai2_gene_pane_ParamLimits

0x6134,	// (0x000355d4) heading_ai2_gene_pane

0x6140,	// (0x000355e0) list_ai2_gene_pane_ParamLimits

0x6140,	// (0x000355e0) list_ai2_gene_pane

0x6188,	// (0x00035628) cell_ai2_link_pane_ParamLimits

0x6188,	// (0x00035628) cell_ai2_link_pane

0x619e,	// (0x0003563e) cell_ai2_link_pane_g1

0x3886,	// (0x00032d26) grid_highlight_pane_cp7

0xb85e,	// (0x0003acfe) ai2_mp_volume_pane_g1

0x6277,	// (0x00035717) ai2_mp_volume_pane_g2

0x61e4,	// (0x00035684) list_ai2_gene_pane_t1

0x626f,	// (0x0003570f) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0003ee92) ai2_mp_volume_pane_g

0xb866,	// (0x0003ad06) volume_small_pane_cp3

0x627f,	// (0x0003571f) aid_size_cell_ai2_button

0x6287,	// (0x00035727) grid_ai2_button_pane

0x6290,	// (0x00035730) cell_ai2_button_pane_ParamLimits

0x6290,	// (0x00035730) cell_ai2_button_pane

0x387c,	// (0x00032d1c) cell_ai2_button_pane_g1

0x3886,	// (0x00032d26) grid_highlight_pane_cp8

0x622f,	// (0x000356cf) ai2_gene_pane_t1_ParamLimits

0x622f,	// (0x000356cf) ai2_gene_pane_t1

0xa581,	// (0x00039a21) aid_height_parent_landscape

0xb48e,	// (0x0003a92e) aid_height_set_list

0x4de0,	// (0x00034280) aid_size_parent

0x5f13,	// (0x000353b3) aid_size_cell_graphic_pane_ParamLimits

0x6150,	// (0x000355f0) popup_ai2_data_window_g1_ParamLimits

0x6150,	// (0x000355f0) popup_ai2_data_window_g1

0x615c,	// (0x000355fc) ai2_news_ticker_pane_g1

0x6164,	// (0x00035604) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0003ee7e) ai2_news_ticker_pane_g

0x616c,	// (0x0003560c) ai2_news_ticker_pane_t1

0x617a,	// (0x0003561a) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0003ee83) ai2_news_ticker_pane_t

0x61a7,	// (0x00035647) heading_ai2_gene_pane_g1

0x61af,	// (0x0003564f) heading_ai2_gene_pane_t1_ParamLimits

0x61af,	// (0x0003564f) heading_ai2_gene_pane_t1

0x61c4,	// (0x00035664) list_highlight_pane_cp6

0x61cc,	// (0x0003566c) ai2_gene_pane_ParamLimits

0x61cc,	// (0x0003566c) ai2_gene_pane

0x61f2,	// (0x00035692) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0003ee88) list_ai2_gene_pane_t

0x6200,	// (0x000356a0) list_highlight_pane_cp8_ParamLimits

0x6200,	// (0x000356a0) list_highlight_pane_cp8

0x6211,	// (0x000356b1) ai2_gene_pane_g1_ParamLimits

0x6211,	// (0x000356b1) ai2_gene_pane_g1

0x6223,	// (0x000356c3) ai2_gene_pane_g2_ParamLimits

0x6223,	// (0x000356c3) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0003ee8d) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0003ee8d) ai2_gene_pane_g

0x3ebf,	// (0x0003335f) scroll_pane_cp12

0xa540,	// (0x000399e0) control_pane_t3_ParamLimits

0xa540,	// (0x000399e0) control_pane_t3

0x4aba,	// (0x00033f5a) status_small_pane_g8_ParamLimits

0x4aba,	// (0x00033f5a) status_small_pane_g8

0xa707,	// (0x00039ba7) popup_find_window_ParamLimits

0xa91c,	// (0x00039dbc) popup_note_image_window_ParamLimits

0x8e1e,	// (0x000382be) list_double2_graphic_pane_vc_g1_ParamLimits

0x8e1e,	// (0x000382be) list_double2_graphic_pane_vc_g1

0x9b95,	// (0x00039035) list_double2_graphic_pane_vc_g2_ParamLimits

0x9b95,	// (0x00039035) list_double2_graphic_pane_vc_g2

0x9ba1,	// (0x00039041) list_double2_graphic_pane_vc_g3_ParamLimits

0x9ba1,	// (0x00039041) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0003ec69) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0003ec69) list_double2_graphic_pane_vc_g

0x8e2a,	// (0x000382ca) list_double2_graphic_pane_vc_t1_ParamLimits

0x8e2a,	// (0x000382ca) list_double2_graphic_pane_vc_t1

0x9b95,	// (0x00039035) list_single_heading_pane_vc_g1_ParamLimits

0x9b95,	// (0x00039035) list_single_heading_pane_vc_g1

0x9ba1,	// (0x00039041) list_single_heading_pane_vc_g2_ParamLimits

0x9ba1,	// (0x00039041) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0003ea78) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0003ea78) list_single_heading_pane_vc_g

0x8e40,	// (0x000382e0) list_single_heading_pane_vc_t1_ParamLimits

0x8e40,	// (0x000382e0) list_single_heading_pane_vc_t1

0x8e56,	// (0x000382f6) list_single_heading_pane_vc_t2_ParamLimits

0x8e56,	// (0x000382f6) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0003ec8a) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0003ec8a) list_single_heading_pane_vc_t

0xf53c,	// (0x0003e9dc) list_setting_number_pane_vc_g1_ParamLimits

0xf53c,	// (0x0003e9dc) list_setting_number_pane_vc_g1

0xf548,	// (0x0003e9e8) list_setting_number_pane_vc_g2_ParamLimits

0xf548,	// (0x0003e9e8) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0003ec8f) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0003ec8f) list_setting_number_pane_vc_g

0x8e6a,	// (0x0003830a) list_setting_number_pane_vc_t1_ParamLimits

0x8e6a,	// (0x0003830a) list_setting_number_pane_vc_t1

0x8e7e,	// (0x0003831e) list_setting_number_pane_vc_t2_ParamLimits

0x8e7e,	// (0x0003831e) list_setting_number_pane_vc_t2

0x8e98,	// (0x00038338) list_setting_number_pane_vc_t3_ParamLimits

0x8e98,	// (0x00038338) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0003ec94) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0003ec94) list_setting_number_pane_vc_t

0x8ec0,	// (0x00038360) set_value_pane_vc_ParamLimits

0x8ec0,	// (0x00038360) set_value_pane_vc

0x5e71,	// (0x00035311) list_double2_graphic_pane_vc_ParamLimits

0x5e71,	// (0x00035311) list_double2_graphic_pane_vc

0xb60a,	// (0x0003aaaa) list_double2_large_graphic_pane_vc_ParamLimits

0xb60a,	// (0x0003aaaa) list_double2_large_graphic_pane_vc

0x5e71,	// (0x00035311) list_double2_pane_vc_ParamLimits

0x5e71,	// (0x00035311) list_double2_pane_vc

0x5e71,	// (0x00035311) list_double_graphic_heading_pane_vc_ParamLimits

0x5e71,	// (0x00035311) list_double_graphic_heading_pane_vc

0x5e71,	// (0x00035311) list_double_graphic_pane_vc_ParamLimits

0x5e71,	// (0x00035311) list_double_graphic_pane_vc

0x5e71,	// (0x00035311) list_double_heading_pane_vc_ParamLimits

0x5e71,	// (0x00035311) list_double_heading_pane_vc

0xb60a,	// (0x0003aaaa) list_double_large_graphic_pane_vc_ParamLimits

0xb60a,	// (0x0003aaaa) list_double_large_graphic_pane_vc

0x5e71,	// (0x00035311) list_double_number_pane_vc_ParamLimits

0x5e71,	// (0x00035311) list_double_number_pane_vc

0x5e71,	// (0x00035311) list_double_pane_vc_ParamLimits

0x5e71,	// (0x00035311) list_double_pane_vc

0x5e71,	// (0x00035311) list_double_time_pane_vc_ParamLimits

0x5e71,	// (0x00035311) list_double_time_pane_vc

0x5e71,	// (0x00035311) list_setting_number_pane_vc_ParamLimits

0x5e71,	// (0x00035311) list_setting_number_pane_vc

0x5e71,	// (0x00035311) list_setting_pane_vc_ParamLimits

0x5e71,	// (0x00035311) list_setting_pane_vc

0x5e71,	// (0x00035311) list_single_graphic_heading_pane_vc_ParamLimits

0x5e71,	// (0x00035311) list_single_graphic_heading_pane_vc

0x5e71,	// (0x00035311) list_single_heading_pane_vc_ParamLimits

0x5e71,	// (0x00035311) list_single_heading_pane_vc

0xb61c,	// (0x0003aabc) list_single_number_heading_pane_vc_ParamLimits

0xb61c,	// (0x0003aabc) list_single_number_heading_pane_vc

0x8e1e,	// (0x000382be) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8e1e,	// (0x000382be) list_double_graphic_heading_pane_vc_g1

0x9b95,	// (0x00039035) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9b95,	// (0x00039035) list_double_graphic_heading_pane_vc_g2

0x9ba1,	// (0x00039041) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9ba1,	// (0x00039041) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0003ec69) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0003ec69) list_double_graphic_heading_pane_vc_g

0x8f69,	// (0x00038409) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x8f69,	// (0x00038409) list_double_graphic_heading_pane_vc_t1

0x8f85,	// (0x00038425) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x8f85,	// (0x00038425) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x0003ee99) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x0003ee99) list_double_graphic_heading_pane_vc_t

0xf53c,	// (0x0003e9dc) list_setting_pane_vc_g1_ParamLimits

0xf53c,	// (0x0003e9dc) list_setting_pane_vc_g1

0xf548,	// (0x0003e9e8) list_setting_pane_vc_g2_ParamLimits

0xf548,	// (0x0003e9e8) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0003ec8f) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0003ec8f) list_setting_pane_vc_g

0x8f9d,	// (0x0003843d) list_setting_pane_vc_t1_ParamLimits

0x8f9d,	// (0x0003843d) list_setting_pane_vc_t1

0x8fb7,	// (0x00038457) list_setting_pane_vc_t2_ParamLimits

0x8fb7,	// (0x00038457) list_setting_pane_vc_t2

0x0001,

0xfa3c,	// (0x0003eedc) list_setting_pane_vc_t_ParamLimits

0xfa3c,	// (0x0003eedc) list_setting_pane_vc_t

0x8ec0,	// (0x00038360) set_value_pane_cp_vc_ParamLimits

0x8ec0,	// (0x00038360) set_value_pane_cp_vc

0x9b95,	// (0x00039035) list_single_number_heading_pane_vc_g1_ParamLimits

0x9b95,	// (0x00039035) list_single_number_heading_pane_vc_g1

0x9ba1,	// (0x00039041) list_single_number_heading_pane_vc_g2_ParamLimits

0x9ba1,	// (0x00039041) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0003ea78) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0003ea78) list_single_number_heading_pane_vc_g

0x8e40,	// (0x000382e0) list_single_number_heading_pane_vc_t1_ParamLimits

0x8e40,	// (0x000382e0) list_single_number_heading_pane_vc_t1

0x8fcf,	// (0x0003846f) list_single_number_heading_pane_vc_t2_ParamLimits

0x8fcf,	// (0x0003846f) list_single_number_heading_pane_vc_t2

0x86cd,	// (0x00037b6d) list_single_number_heading_pane_vc_t3_ParamLimits

0x86cd,	// (0x00037b6d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa41,	// (0x0003eee1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0003eee1) list_single_number_heading_pane_vc_t

0x8e1e,	// (0x000382be) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8e1e,	// (0x000382be) list_single_graphic_heading_pane_vc_g1

0x9b95,	// (0x00039035) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9b95,	// (0x00039035) list_single_graphic_heading_pane_vc_g4

0x9ba1,	// (0x00039041) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9ba1,	// (0x00039041) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0003ec69) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0003ec69) list_single_graphic_heading_pane_vc_g

0x8e40,	// (0x000382e0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8e40,	// (0x000382e0) list_single_graphic_heading_pane_vc_t1

0x8fe3,	// (0x00038483) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x8fe3,	// (0x00038483) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x0003eee8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x0003eee8) list_single_graphic_heading_pane_vc_t

0x9b95,	// (0x00039035) list_double2_pane_vc_g1_ParamLimits

0x9b95,	// (0x00039035) list_double2_pane_vc_g1

0x9ba1,	// (0x00039041) list_double2_pane_vc_g2_ParamLimits

0x9ba1,	// (0x00039041) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x0003ea78) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x0003ea78) list_double2_pane_vc_g

0x8f53,	// (0x000383f3) list_double2_pane_vc_t1_ParamLimits

0x8f53,	// (0x000383f3) list_double2_pane_vc_t1

0xb8d8,	// (0x0003ad78) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb8d8,	// (0x0003ad78) list_double2_large_graphic_pane_vc_g1

0xb8e4,	// (0x0003ad84) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb8e4,	// (0x0003ad84) list_double2_large_graphic_pane_vc_g2

0xb8f0,	// (0x0003ad90) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb8f0,	// (0x0003ad90) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4d,	// (0x0003eeed) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4d,	// (0x0003eeed) list_double2_large_graphic_pane_vc_g

0x8ff7,	// (0x00038497) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x8ff7,	// (0x00038497) list_double2_large_graphic_pane_vc_t1

0x900d,	// (0x000384ad) list_double_time_pane_vc_g1_ParamLimits

0x900d,	// (0x000384ad) list_double_time_pane_vc_g1

0x9019,	// (0x000384b9) list_double_time_pane_vc_g2_ParamLimits

0x9019,	// (0x000384b9) list_double_time_pane_vc_g2

0x0001,

0xfa54,	// (0x0003eef4) list_double_time_pane_vc_g_ParamLimits

0xfa54,	// (0x0003eef4) list_double_time_pane_vc_g

0x9025,	// (0x000384c5) list_double_time_pane_vc_t1_ParamLimits

0x9025,	// (0x000384c5) list_double_time_pane_vc_t1

0x9049,	// (0x000384e9) list_double_time_pane_vc_t2_ParamLimits

0x9049,	// (0x000384e9) list_double_time_pane_vc_t2

0x9093,	// (0x00038533) list_double_time_pane_vc_t3_ParamLimits

0x9093,	// (0x00038533) list_double_time_pane_vc_t3

0x90a5,	// (0x00038545) list_double_time_pane_vc_t4_ParamLimits

0x90a5,	// (0x00038545) list_double_time_pane_vc_t4

0x0003,

0xfa59,	// (0x0003eef9) list_double_time_pane_vc_t_ParamLimits

0xfa59,	// (0x0003eef9) list_double_time_pane_vc_t

0x9b95,	// (0x00039035) list_double_pane_vc_g1_ParamLimits

0x9b95,	// (0x00039035) list_double_pane_vc_g1

0x9ba1,	// (0x00039041) list_double_pane_vc_g2_ParamLimits

0x9ba1,	// (0x00039041) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x0003ea78) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x0003ea78) list_double_pane_vc_g

0x90b9,	// (0x00038559) list_double_pane_vc_t1_ParamLimits

0x90b9,	// (0x00038559) list_double_pane_vc_t1

0x90cd,	// (0x0003856d) list_double_pane_vc_t2_ParamLimits

0x90cd,	// (0x0003856d) list_double_pane_vc_t2

0x0001,

0xfa62,	// (0x0003ef02) list_double_pane_vc_t_ParamLimits

0xfa62,	// (0x0003ef02) list_double_pane_vc_t

0x9b95,	// (0x00039035) list_double_number_pane_vc_g1_ParamLimits

0x9b95,	// (0x00039035) list_double_number_pane_vc_g1

0x9ba1,	// (0x00039041) list_double_number_pane_vc_g2_ParamLimits

0x9ba1,	// (0x00039041) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x0003ea78) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x0003ea78) list_double_number_pane_vc_g

0x90e5,	// (0x00038585) list_double_number_pane_vc_t1_ParamLimits

0x90e5,	// (0x00038585) list_double_number_pane_vc_t1

0x90f9,	// (0x00038599) list_double_number_pane_vc_t2_ParamLimits

0x90f9,	// (0x00038599) list_double_number_pane_vc_t2

0x90cd,	// (0x0003856d) list_double_number_pane_vc_t3_ParamLimits

0x90cd,	// (0x0003856d) list_double_number_pane_vc_t3

0x0002,

0xfa67,	// (0x0003ef07) list_double_number_pane_vc_t_ParamLimits

0xfa67,	// (0x0003ef07) list_double_number_pane_vc_t

0xb8fc,	// (0x0003ad9c) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb8fc,	// (0x0003ad9c) list_double_large_graphic_pane_vc_g1

0xb90d,	// (0x0003adad) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb90d,	// (0x0003adad) list_double_large_graphic_pane_vc_g2

0xb8f0,	// (0x0003ad90) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb8f0,	// (0x0003ad90) list_double_large_graphic_pane_vc_g3

0x910d,	// (0x000385ad) list_double_large_graphic_pane_vc_g4_ParamLimits

0x910d,	// (0x000385ad) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6e,	// (0x0003ef0e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x0003ef0e) list_double_large_graphic_pane_vc_g

0x9119,	// (0x000385b9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x9119,	// (0x000385b9) list_double_large_graphic_pane_vc_t1

0x9132,	// (0x000385d2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x9132,	// (0x000385d2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x0003ef17) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x0003ef17) list_double_large_graphic_pane_vc_t

0x9b95,	// (0x00039035) list_double_heading_pane_vc_g1_ParamLimits

0x9b95,	// (0x00039035) list_double_heading_pane_vc_g1

0x9ba1,	// (0x00039041) list_double_heading_pane_vc_g2_ParamLimits

0x9ba1,	// (0x00039041) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0003ea78) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0003ea78) list_double_heading_pane_vc_g

0x914b,	// (0x000385eb) list_double_heading_pane_vc_t1_ParamLimits

0x914b,	// (0x000385eb) list_double_heading_pane_vc_t1

0x8e40,	// (0x000382e0) list_double_heading_pane_vc_t2_ParamLimits

0x8e40,	// (0x000382e0) list_double_heading_pane_vc_t2

0x0001,

0xfa7c,	// (0x0003ef1c) list_double_heading_pane_vc_t_ParamLimits

0xfa7c,	// (0x0003ef1c) list_double_heading_pane_vc_t

0x8e1e,	// (0x000382be) list_double_graphic_pane_vc_g1_ParamLimits

0x8e1e,	// (0x000382be) list_double_graphic_pane_vc_g1

0x915f,	// (0x000385ff) list_double_graphic_pane_vc_g2_ParamLimits

0x915f,	// (0x000385ff) list_double_graphic_pane_vc_g2

0x62ae,	// (0x0003574e) list_double_graphic_pane_vc_g3_ParamLimits

0x62ae,	// (0x0003574e) list_double_graphic_pane_vc_g3

0x0002,

0xfa81,	// (0x0003ef21) list_double_graphic_pane_vc_g_ParamLimits

0xfa81,	// (0x0003ef21) list_double_graphic_pane_vc_g

0x916e,	// (0x0003860e) list_double_graphic_pane_vc_t1_ParamLimits

0x916e,	// (0x0003860e) list_double_graphic_pane_vc_t1

0x9182,	// (0x00038622) list_double_graphic_pane_vc_t2_ParamLimits

0x9182,	// (0x00038622) list_double_graphic_pane_vc_t2

0x0001,

0xfa88,	// (0x0003ef28) list_double_graphic_pane_vc_t_ParamLimits

0xfa88,	// (0x0003ef28) list_double_graphic_pane_vc_t

0x94b1,	// (0x00038951) aid_size_cell_fastswap

0x94b9,	// (0x00038959) aid_size_cell_touch_ParamLimits

0x94b9,	// (0x00038959) aid_size_cell_touch

0x9714,	// (0x00038bb4) popup_fast_swap_wide_window_ParamLimits

0x9714,	// (0x00038bb4) popup_fast_swap_wide_window

0x9810,	// (0x00038cb0) touch_pane_ParamLimits

0x9810,	// (0x00038cb0) touch_pane

0x3f15,	// (0x000333b5) button_value_adjust_pane_cp2

0x8ada,	// (0x00037f7a) button_value_adjust_pane_cp4

0x8afc,	// (0x00037f9c) form_field_data_pane_cp2

0x8b1b,	// (0x00037fbb) form_field_data_wide_pane_cp2

0x426c,	// (0x0003370c) bg_scroll_pane_ParamLimits

0x9f01,	// (0x000393a1) scroll_handle_pane_ParamLimits

0x9f15,	// (0x000393b5) scroll_sc2_down_pane_ParamLimits

0x9f15,	// (0x000393b5) scroll_sc2_down_pane

0x429d,	// (0x0003373d) scroll_sc2_up_pane_ParamLimits

0x429d,	// (0x0003373d) scroll_sc2_up_pane

0xba32,	// (0x0003aed2) grid_wheel_folder_pane_g1_ParamLimits

0xba32,	// (0x0003aed2) grid_wheel_folder_pane_g1

0xa1b2,	// (0x00039652) clock_nsta_pane_cp2_ParamLimits

0xa1b2,	// (0x00039652) clock_nsta_pane_cp2

0x9cb0,	// (0x00039150) listscroll_midp_pane_ParamLimits

0xa2b6,	// (0x00039756) midp_canvas_pane

0x4b0e,	// (0x00033fae) nsta_clock_indic_pane

0x4b36,	// (0x00033fd6) listscroll_form_pane_vc

0x4b3e,	// (0x00033fde) listscroll_set_pane_vc_ParamLimits

0x4b3e,	// (0x00033fde) listscroll_set_pane_vc

0xac08,	// (0x0003a0a8) clock_nsta_pane

0xac15,	// (0x0003a0b5) indicator_nsta_pane

0x4c6c,	// (0x0003410c) bg_popup_sub_pane_cp2_ParamLimits

0x4c80,	// (0x00034120) find_pane_cp2_ParamLimits

0x4c80,	// (0x00034120) find_pane_cp2

0x4c96,	// (0x00034136) grid_toobar_pane_ParamLimits

0x4d76,	// (0x00034216) list_form_gen_pane_vc_ParamLimits

0x4d76,	// (0x00034216) list_form_gen_pane_vc

0x4d8c,	// (0x0003422c) scroll_pane_cp8_vc_ParamLimits

0x4d8c,	// (0x0003422c) scroll_pane_cp8_vc

0x4e08,	// (0x000342a8) data_form_wide_pane_vc_ParamLimits

0x4e08,	// (0x000342a8) data_form_wide_pane_vc

0x4e14,	// (0x000342b4) form_field_data_wide_pane_vc_g1

0x4e1c,	// (0x000342bc) form_field_data_wide_pane_vc_t1_ParamLimits

0x4e1c,	// (0x000342bc) form_field_data_wide_pane_vc_t1

0x3f29,	// (0x000333c9) input_focus_pane_cp6_vc_ParamLimits

0x3f29,	// (0x000333c9) input_focus_pane_cp6_vc

0xb09e,	// (0x0003a53e) list_midp_pane_ParamLimits

0xb0aa,	// (0x0003a54a) scroll_pane_cp16_ParamLimits

0xb0aa,	// (0x0003a54a) scroll_pane_cp16

0x50b2,	// (0x00034552) button_value_adjust_pane_ParamLimits

0x50b2,	// (0x00034552) button_value_adjust_pane

0xb49f,	// (0x0003a93f) button_value_adjust_pane_cp6_ParamLimits

0xb49f,	// (0x0003a93f) button_value_adjust_pane_cp6

0xb5c5,	// (0x0003aa65) settings_code_pane_cp_ParamLimits

0xb5c5,	// (0x0003aa65) settings_code_pane_cp

0x387c,	// (0x00032d1c) cell_touch_pane_g1

0x387c,	// (0x00032d1c) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0003ebae) cell_touch_pane_g

0xb86f,	// (0x0003ad0f) cell_touch_pane_cp_ParamLimits

0xb86f,	// (0x0003ad0f) cell_touch_pane_cp

0xb87f,	// (0x0003ad1f) cell_touch_pane_ParamLimits

0xb87f,	// (0x0003ad1f) cell_touch_pane

0x387c,	// (0x00032d1c) scroll_sc2_down_pane_g1

0x387c,	// (0x00032d1c) scroll_sc2_up_pane_g1

0x3886,	// (0x00032d26) bg_set_opt_pane_cp4_vc

0x62a2,	// (0x00035742) list_set_graphic_pane_vc_g1_ParamLimits

0x62a2,	// (0x00035742) list_set_graphic_pane_vc_g1

0x62ae,	// (0x0003574e) list_set_graphic_pane_vc_g2_ParamLimits

0x62ae,	// (0x0003574e) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x0003ee9e) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x0003ee9e) list_set_graphic_pane_vc_g

0x62ba,	// (0x0003575a) text_primary_small_cp13_vc_ParamLimits

0x62ba,	// (0x0003575a) text_primary_small_cp13_vc

0x5ebb,	// (0x0003535b) list_set_graphic_pane_vc_ParamLimits

0x5ebb,	// (0x0003535b) list_set_graphic_pane_vc

0x3886,	// (0x00032d26) input_focus_pane_cp2_vc

0x387c,	// (0x00032d1c) setting_code_pane_vc_g1

0x38f9,	// (0x00032d99) setting_code_pane_vc_t1

0x62d2,	// (0x00035772) set_text_pane_vc_t1_ParamLimits

0x62d2,	// (0x00035772) set_text_pane_vc_t1

0x3886,	// (0x00032d26) input_focus_pane_cp1_vc

0x62ef,	// (0x0003578f) list_set_text_pane_vc

0x387c,	// (0x00032d1c) setting_text_pane_vc_g1

0x3886,	// (0x00032d26) bg_set_opt_pane_cp2_vc

0x38f0,	// (0x00032d90) setting_slider_graphic_pane_vc_g1

0x62f9,	// (0x00035799) setting_slider_graphic_pane_vc_t1

0x6309,	// (0x000357a9) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x0003eea3) setting_slider_graphic_pane_vc_t

0x6319,	// (0x000357b9) slider_set_pane_cp_vc

0x6321,	// (0x000357c1) slider_set_pane_vc_g1

0x632a,	// (0x000357ca) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x0003eea8) slider_set_pane_vc_g

0x3f84,	// (0x00033424) set_opt_bg_pane_g1_copy1

0x3f8c,	// (0x0003342c) set_opt_bg_pane_g2_copy1

0x6356,	// (0x000357f6) set_opt_bg_pane_g3_copy1

0x3f9c,	// (0x0003343c) set_opt_bg_pane_g4_copy1

0x3fa4,	// (0x00033444) set_opt_bg_pane_g5_copy1

0x3fac,	// (0x0003344c) set_opt_bg_pane_g6_copy1

0x635e,	// (0x000357fe) set_opt_bg_pane_g7_copy1

0x6368,	// (0x00035808) set_opt_bg_pane_g8_copy1

0x6370,	// (0x00035810) set_opt_bg_pane_g9_copy1

0x3886,	// (0x00032d26) bg_set_opt_pane_cp_vc

0x6378,	// (0x00035818) setting_slider_pane_vc_t1

0x6387,	// (0x00035827) setting_slider_pane_vc_t2

0x6397,	// (0x00035837) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x0003eeb7) setting_slider_pane_vc_t

0x63a7,	// (0x00035847) slider_set_pane_vc

0xb113,	// (0x0003a5b3) volume_set_pane_vc_g1

0xb890,	// (0x0003ad30) volume_set_pane_vc_g2

0xb899,	// (0x0003ad39) volume_set_pane_vc_g3

0xb8a2,	// (0x0003ad42) volume_set_pane_vc_g4

0xb8ab,	// (0x0003ad4b) volume_set_pane_vc_g5

0xb8b4,	// (0x0003ad54) volume_set_pane_vc_g6

0xb140,	// (0x0003a5e0) volume_set_pane_vc_g7

0xb8bd,	// (0x0003ad5d) volume_set_pane_vc_g8

0xb8c6,	// (0x0003ad66) volume_set_pane_vc_g9

0xb8cf,	// (0x0003ad6f) volume_set_pane_vc_g10

0x0009,

0xfa1e,	// (0x0003eebe) volume_set_pane_vc_g

0x63af,	// (0x0003584f) volume_set_pane_vc

0x63b7,	// (0x00035857) button_value_adjust_pane_cp1_vc

0x63c1,	// (0x00035861) list_highlight_pane_cp2_vc

0x63ca,	// (0x0003586a) list_set_pane_vc_ParamLimits

0x63ca,	// (0x0003586a) list_set_pane_vc

0x6428,	// (0x000358c8) main_pane_set_vc_t1_ParamLimits

0x6428,	// (0x000358c8) main_pane_set_vc_t1

0x643d,	// (0x000358dd) main_pane_set_vc_t2_ParamLimits

0x643d,	// (0x000358dd) main_pane_set_vc_t2

0x644f,	// (0x000358ef) main_pane_set_vc_t3_ParamLimits

0x644f,	// (0x000358ef) main_pane_set_vc_t3

0x6461,	// (0x00035901) main_pane_set_vc_t4_ParamLimits

0x6461,	// (0x00035901) main_pane_set_vc_t4

0x0003,

0xfa33,	// (0x0003eed3) main_pane_set_vc_t_ParamLimits

0xfa33,	// (0x0003eed3) main_pane_set_vc_t

0x6473,	// (0x00035913) setting_code_pane_vc_ParamLimits

0x6473,	// (0x00035913) setting_code_pane_vc

0x6482,	// (0x00035922) setting_slider_graphic_pane_vc

0x6482,	// (0x00035922) setting_slider_pane_vc

0x6482,	// (0x00035922) setting_text_pane_vc

0x6482,	// (0x00035922) setting_volume_pane_vc

0x648a,	// (0x0003592a) scroll_pane_cp121_vc

0x3f03,	// (0x000333a3) set_content_pane_vc

0x6492,	// (0x00035932) button_value_adjust_pane_g1

0x649b,	// (0x0003593b) button_value_adjust_pane_g2

0x0001,

0xfa8d,	// (0x0003ef2d) button_value_adjust_pane_g

0x64a4,	// (0x00035944) form_field_slider_wide_pane_vc_t1_ParamLimits

0x64a4,	// (0x00035944) form_field_slider_wide_pane_vc_t1

0x64b8,	// (0x00035958) form_field_slider_wide_pane_vc_t2_ParamLimits

0x64b8,	// (0x00035958) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa92,	// (0x0003ef32) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x0003ef32) form_field_slider_wide_pane_vc_t

0x38d4,	// (0x00032d74) input_focus_pane_cp10_vc_ParamLimits

0x38d4,	// (0x00032d74) input_focus_pane_cp10_vc

0x64e4,	// (0x00035984) slider_cont_pane_cp1_vc_ParamLimits

0x64e4,	// (0x00035984) slider_cont_pane_cp1_vc

0x64f4,	// (0x00035994) slider_form_pane_g1_cp2

0x632a,	// (0x000357ca) slider_form_pane_g2_cp2

0x6521,	// (0x000359c1) form_field_slider_pane_vc_t3

0x652f,	// (0x000359cf) form_field_slider_pane_vc_t4

0x653d,	// (0x000359dd) slider_form_pane_vc_ParamLimits

0x653d,	// (0x000359dd) slider_form_pane_vc

0x654a,	// (0x000359ea) form_field_slider_pane_vc_t1_ParamLimits

0x654a,	// (0x000359ea) form_field_slider_pane_vc_t1

0x64b8,	// (0x00035958) form_field_slider_pane_vc_t2_ParamLimits

0x64b8,	// (0x00035958) form_field_slider_pane_vc_t2

0x0001,

0xfaa4,	// (0x0003ef44) form_field_slider_pane_vc_t_ParamLimits

0xfaa4,	// (0x0003ef44) form_field_slider_pane_vc_t

0x38d4,	// (0x00032d74) input_focus_pane_cp9_vc_ParamLimits

0x38d4,	// (0x00032d74) input_focus_pane_cp9_vc

0x6566,	// (0x00035a06) slider_cont_pane_vc_ParamLimits

0x6566,	// (0x00035a06) slider_cont_pane_vc

0x6578,	// (0x00035a18) list_form_graphic_pane_cp_vc_ParamLimits

0x6578,	// (0x00035a18) list_form_graphic_pane_cp_vc

0x4e14,	// (0x000342b4) form_field_popup_wide_pane_vc_g1

0x658d,	// (0x00035a2d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x658d,	// (0x00035a2d) form_field_popup_wide_pane_vc_t1

0x3f29,	// (0x000333c9) input_focus_pane_cp8_vc_ParamLimits

0x3f29,	// (0x000333c9) input_focus_pane_cp8_vc

0x65d2,	// (0x00035a72) list_form_wide_pane_vc_ParamLimits

0x65d2,	// (0x00035a72) list_form_wide_pane_vc

0x65de,	// (0x00035a7e) list_form_graphic_pane_vc_g1

0x65e6,	// (0x00035a86) list_form_graphic_pane_vc_t1_ParamLimits

0x65e6,	// (0x00035a86) list_form_graphic_pane_vc_t1

0x38e2,	// (0x00032d82) list_highlight_pane_cp5_vc_ParamLimits

0x38e2,	// (0x00032d82) list_highlight_pane_cp5_vc

0x6602,	// (0x00035aa2) list_form_graphic_pane_vc_ParamLimits

0x6602,	// (0x00035aa2) list_form_graphic_pane_vc

0x4e14,	// (0x000342b4) form_field_popup_pane_vc_g1

0x6618,	// (0x00035ab8) form_field_popup_pane_vc_t1_ParamLimits

0x6618,	// (0x00035ab8) form_field_popup_pane_vc_t1

0x3f29,	// (0x000333c9) input_focus_pane_cp7_vc_ParamLimits

0x3f29,	// (0x000333c9) input_focus_pane_cp7_vc

0x662f,	// (0x00035acf) list_form_pane_vc_ParamLimits

0x662f,	// (0x00035acf) list_form_pane_vc

0x663b,	// (0x00035adb) data_form_pane_vc_t1_ParamLimits

0x663b,	// (0x00035adb) data_form_pane_vc_t1

0x3f84,	// (0x00033424) input_focus_pane_vc_g1

0x3f8c,	// (0x0003342c) input_focus_pane_vc_g2

0x3f94,	// (0x00033434) input_focus_pane_vc_g3

0x3f9c,	// (0x0003343c) input_focus_pane_vc_g4

0x3fa4,	// (0x00033444) input_focus_pane_vc_g5

0x3fac,	// (0x0003344c) input_focus_pane_vc_g6

0x3fb4,	// (0x00033454) input_focus_pane_vc_g7

0x3fbc,	// (0x0003345c) input_focus_pane_vc_g8

0x3fc4,	// (0x00033464) input_focus_pane_vc_g9

0x387c,	// (0x00032d1c) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0003eb37) input_focus_pane_vc_g

0x4e08,	// (0x000342a8) data_form_pane_vc_ParamLimits

0x4e08,	// (0x000342a8) data_form_pane_vc

0x4e14,	// (0x000342b4) form_field_data_pane_vc_g1

0x6656,	// (0x00035af6) form_field_data_pane_vc_t1_ParamLimits

0x6656,	// (0x00035af6) form_field_data_pane_vc_t1

0x3f29,	// (0x000333c9) input_focus_pane_vc_ParamLimits

0x3f29,	// (0x000333c9) input_focus_pane_vc

0x6670,	// (0x00035b10) button_value_adjust_pane_cp3_vc

0x6678,	// (0x00035b18) button_value_adjust_pane_cp5_vc

0x6680,	// (0x00035b20) form_field_data_pane_vc_ParamLimits

0x6680,	// (0x00035b20) form_field_data_pane_vc

0x6697,	// (0x00035b37) form_field_data_pane_vc_cp2

0x669f,	// (0x00035b3f) form_field_data_wide_pane_vc_ParamLimits

0x669f,	// (0x00035b3f) form_field_data_wide_pane_vc

0x66b5,	// (0x00035b55) form_field_data_wide_pane_vc_cp2

0x66bd,	// (0x00035b5d) form_field_popup_pane_vc_ParamLimits

0x66bd,	// (0x00035b5d) form_field_popup_pane_vc

0x66d4,	// (0x00035b74) form_field_popup_wide_pane_vc_ParamLimits

0x66d4,	// (0x00035b74) form_field_popup_wide_pane_vc

0x66ea,	// (0x00035b8a) form_field_slider_pane_vc_ParamLimits

0x66ea,	// (0x00035b8a) form_field_slider_pane_vc

0x66fd,	// (0x00035b9d) form_field_slider_wide_pane_vc_ParamLimits

0x66fd,	// (0x00035b9d) form_field_slider_wide_pane_vc

0xb91c,	// (0x0003adbc) grid_touch_1_pane_ParamLimits

0xb91c,	// (0x0003adbc) grid_touch_1_pane

0xb928,	// (0x0003adc8) grid_touch_2_pane_ParamLimits

0xb928,	// (0x0003adc8) grid_touch_2_pane

0x4b00,	// (0x00033fa0) touch_pane_g1_ParamLimits

0x4b00,	// (0x00033fa0) touch_pane_g1

0x671e,	// (0x00035bbe) cell_app_pane_cp_wide_ParamLimits

0x671e,	// (0x00035bbe) cell_app_pane_cp_wide

0x672f,	// (0x00035bcf) grid_popup_fast_wide_pane_ParamLimits

0x672f,	// (0x00035bcf) grid_popup_fast_wide_pane

0x6743,	// (0x00035be3) scroll_pane_cp19_ParamLimits

0x6743,	// (0x00035be3) scroll_pane_cp19

0x3886,	// (0x00032d26) bg_popup_window_pane_cp20

0x6757,	// (0x00035bf7) listscroll_popup_fast_wide_pane

0x38e2,	// (0x00032d82) grid_indicator_nsta_pane

0x675f,	// (0x00035bff) clock_nsta_pane_g1

0x6768,	// (0x00035c08) clock_nsta_pane_t1

0xb940,	// (0x0003ade0) cell_indicator_nsta_pane_ParamLimits

0xb940,	// (0x0003ade0) cell_indicator_nsta_pane

0x6710,	// (0x00035bb0) cell_indicator_nsta_pane_g1

0xb978,	// (0x0003ae18) cell_indicator_nsta_pane_g2

0x0001,

0xfab5,	// (0x0003ef55) cell_indicator_nsta_pane_g

0x6784,	// (0x00035c24) clock_nsta_pane_cp

0x678c,	// (0x00035c2c) indicator_nsta_pane_cp

0x6794,	// (0x00035c34) nsta_clock_indic_pane_g1

0x391e,	// (0x00032dbe) grid_indicator_pane

0x4392,	// (0x00033832) scroll_pane_cp29

0xa101,	// (0x000395a1) indicator_nsta_pane_cp2_ParamLimits

0xa101,	// (0x000395a1) indicator_nsta_pane_cp2

0x38e2,	// (0x00032d82) main_apps_wheel_pane

0x4f55,	// (0x000343f5) form_midp_field_text_pane_ParamLimits

0x5084,	// (0x00034524) scroll_bar_cp050_ParamLimits

0x67f5,	// (0x00035c95) cell_indicator_pane_ParamLimits

0x67f5,	// (0x00035c95) cell_indicator_pane

0x6810,	// (0x00035cb0) cell_indicator_pane_g1

0xb98e,	// (0x0003ae2e) grid_wheel_folder_pane_ParamLimits

0xb98e,	// (0x0003ae2e) grid_wheel_folder_pane

0xb9a4,	// (0x0003ae44) list_wheel_apps_pane_ParamLimits

0xb9a4,	// (0x0003ae44) list_wheel_apps_pane

0xb9b5,	// (0x0003ae55) main_apps_wheel_pane_g1_ParamLimits

0xb9b5,	// (0x0003ae55) main_apps_wheel_pane_g1

0xb9c9,	// (0x0003ae69) main_apps_wheel_pane_g2_ParamLimits

0xb9c9,	// (0x0003ae69) main_apps_wheel_pane_g2

0x0001,

0xfad1,	// (0x0003ef71) main_apps_wheel_pane_g_ParamLimits

0xfad1,	// (0x0003ef71) main_apps_wheel_pane_g

0xb9e1,	// (0x0003ae81) main_apps_wheel_pane_t1_ParamLimits

0xb9e1,	// (0x0003ae81) main_apps_wheel_pane_t1

0xba04,	// (0x0003aea4) list_wheel_apps_pane_g1

0xba0c,	// (0x0003aeac) list_wheel_apps_pane_g2

0xba14,	// (0x0003aeb4) list_wheel_apps_pane_g3

0xba1e,	// (0x0003aebe) list_wheel_apps_pane_g4

0xba28,	// (0x0003aec8) list_wheel_apps_pane_g5

0x0004,

0xfad6,	// (0x0003ef76) list_wheel_apps_pane_g

0x479e,	// (0x00033c3e) navi_icon_text_pane

0xab4c,	// (0x00039fec) aid_fill_nsta

0x681a,	// (0x00035cba) navi_icon_text_pane_g1

0x6826,	// (0x00035cc6) navi_icon_text_pane_t1

0x4698,	// (0x00033b38) list_set_graphic_pane_t1_ParamLimits

0x4698,	// (0x00033b38) list_set_graphic_pane_t1

0x579c,	// (0x00034c3c) popup_midp_note_alarm_window_t6_ParamLimits

0x579c,	// (0x00034c3c) popup_midp_note_alarm_window_t6

0x57ae,	// (0x00034c4e) popup_midp_note_alarm_window_t7_ParamLimits

0x57ae,	// (0x00034c4e) popup_midp_note_alarm_window_t7

0x57c0,	// (0x00034c60) popup_midp_note_alarm_window_t8_ParamLimits

0x57c0,	// (0x00034c60) popup_midp_note_alarm_window_t8

0x57d2,	// (0x00034c72) popup_midp_note_alarm_window_t9_ParamLimits

0x57d2,	// (0x00034c72) popup_midp_note_alarm_window_t9

0x57e4,	// (0x00034c84) popup_midp_note_alarm_window_t10_ParamLimits

0x57e4,	// (0x00034c84) popup_midp_note_alarm_window_t10

0x57f6,	// (0x00034c96) popup_midp_note_alarm_window_t11_ParamLimits

0x57f6,	// (0x00034c96) popup_midp_note_alarm_window_t11

0x5808,	// (0x00034ca8) scroll_pane_cp17_ParamLimits

0x5808,	// (0x00034ca8) scroll_pane_cp17

0xb113,	// (0x0003a5b3) volume_small_pane_cp_g1

0xba4b,	// (0x0003aeeb) volume_small_pane_cp_g2

0xba54,	// (0x0003aef4) volume_small_pane_cp_g3

0xb125,	// (0x0003a5c5) volume_small_pane_cp_g4

0xba5d,	// (0x0003aefd) volume_small_pane_cp_g5

0xb8ab,	// (0x0003ad4b) volume_small_pane_cp_g6

0xb137,	// (0x0003a5d7) volume_small_pane_cp_g7

0xba66,	// (0x0003af06) volume_small_pane_cp_g8

0xba6f,	// (0x0003af0f) volume_small_pane_cp_g9

0xb149,	// (0x0003a5e9) volume_small_pane_cp_g10

0x4924,	// (0x00033dc4) midp_ticker_pane_g1_ParamLimits

0x4930,	// (0x00033dd0) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0003ec03) midp_ticker_pane_g_ParamLimits

0x493c,	// (0x00033ddc) midp_ticker_pane_t1_ParamLimits

0xab62,	// (0x0003a002) aid_fill_nsta_2

0x5070,	// (0x00034510) list_form2_midp_pane

0x5e40,	// (0x000352e0) midp_editing_number_pane_ParamLimits

0x5e4f,	// (0x000352ef) midp_ticker_pane_ParamLimits

0x6838,	// (0x00035cd8) form2_midp_field_pane

0x6840,	// (0x00035ce0) scroll_pane_cp51

0x6860,	// (0x00035d00) form2_midp_button_pane_ParamLimits

0x6860,	// (0x00035d00) form2_midp_button_pane

0x6872,	// (0x00035d12) form2_midp_content_pane_ParamLimits

0x6872,	// (0x00035d12) form2_midp_content_pane

0x688c,	// (0x00035d2c) form2_midp_field_choice_group_pane

0x6894,	// (0x00035d34) form2_midp_field_pane_g1

0x689c,	// (0x00035d3c) form2_midp_field_pane_g2

0x68a4,	// (0x00035d44) form2_midp_field_pane_g3

0x68ac,	// (0x00035d4c) form2_midp_field_pane_g4

0x0003,

0xfafb,	// (0x0003ef9b) form2_midp_field_pane_g

0x68b4,	// (0x00035d54) form2_midp_gauge_slider_pane

0x68bc,	// (0x00035d5c) form2_midp_gauge_wait_pane

0x68c4,	// (0x00035d64) form2_midp_image_pane_ParamLimits

0x68c4,	// (0x00035d64) form2_midp_image_pane

0x68df,	// (0x00035d7f) form2_midp_label_pane_ParamLimits

0x68df,	// (0x00035d7f) form2_midp_label_pane

0xba94,	// (0x0003af34) form2_midp_label_pane_cp_ParamLimits

0xba94,	// (0x0003af34) form2_midp_label_pane_cp

0x68f8,	// (0x00035d98) form2_midp_string_pane_ParamLimits

0x68f8,	// (0x00035d98) form2_midp_string_pane

0x919a,	// (0x0003863a) form2_midp_text_pane_ParamLimits

0x919a,	// (0x0003863a) form2_midp_text_pane

0x690a,	// (0x00035daa) form2_midp_time_pane

0x691a,	// (0x00035dba) input_focus_pane_cp51_ParamLimits

0x691a,	// (0x00035dba) input_focus_pane_cp51

0x6932,	// (0x00035dd2) form2_midp_label_pane_t1_ParamLimits

0x6932,	// (0x00035dd2) form2_midp_label_pane_t1

0x91b5,	// (0x00038655) form2_mdip_text_pane_t1_ParamLimits

0x91b5,	// (0x00038655) form2_mdip_text_pane_t1

0x91d1,	// (0x00038671) form2_midp_time_pane_t1

0x697a,	// (0x00035e1a) form2_midp_gauge_slider_pane_t1

0xbab5,	// (0x0003af55) form2_midp_gauge_slider_pane_t2

0xbac7,	// (0x0003af67) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb04,	// (0x0003efa4) form2_midp_gauge_slider_pane_t

0x698c,	// (0x00035e2c) form2_midp_slider_pane

0x6998,	// (0x00035e38) form2_midp_gauge_wait_pane_t1

0x69a6,	// (0x00035e46) form2_midp_wait_pane_ParamLimits

0x69a6,	// (0x00035e46) form2_midp_wait_pane

0xbad9,	// (0x0003af79) list_single_2graphic_pane_cp4_ParamLimits

0xbad9,	// (0x0003af79) list_single_2graphic_pane_cp4

0xafdf,	// (0x0003a47f) list_single_midp_graphic_pane_cp_ParamLimits

0xafdf,	// (0x0003a47f) list_single_midp_graphic_pane_cp

0x3886,	// (0x00032d26) list_highlight_pane_cp20

0x69d2,	// (0x00035e72) list_single_2graphic_pane_g1_cp4

0x61a7,	// (0x00035647) list_single_2graphic_pane_g2_cp4

0x69da,	// (0x00035e7a) list_single_2graphic_pane_t1_cp4

0x38e2,	// (0x00032d82) list_highlight_pane_cp21

0x69e9,	// (0x00035e89) list_single_midp_graphic_pane_g4_cp

0x69f8,	// (0x00035e98) list_single_midp_graphic_pane_t1_cp

0xbb07,	// (0x0003afa7) form2_mdip_string_pane_t1_ParamLimits

0xbb07,	// (0x0003afa7) form2_mdip_string_pane_t1

0x3886,	// (0x00032d26) bg_wml_button_pane_cp2

0x387c,	// (0x00032d1c) form2_midp_image_pane_g1

0x9c03,	// (0x000390a3) list_double_large_graphic_pane_g5_ParamLimits

0x9c03,	// (0x000390a3) list_double_large_graphic_pane_g5

0x9cb0,	// (0x00039150) midp_form_pane_ParamLimits

0x38e2,	// (0x00032d82) main_apps_wheel_pane_ParamLimits

0xa942,	// (0x00039de2) popup_preview_window_ParamLimits

0xa942,	// (0x00039de2) popup_preview_window

0xaaf9,	// (0x00039f99) popup_touch_info_window_ParamLimits

0xaaf9,	// (0x00039f99) popup_touch_info_window

0xab17,	// (0x00039fb7) popup_touch_menu_window_ParamLimits

0xab17,	// (0x00039fb7) popup_touch_menu_window

0x3872,	// (0x00032d12) bg_popup_sub_pane_cp6

0x6a0d,	// (0x00035ead) list_touch_menu_pane

0x6a15,	// (0x00035eb5) list_single_touch_menu_pane_ParamLimits

0x6a15,	// (0x00035eb5) list_single_touch_menu_pane

0x6a29,	// (0x00035ec9) list_single_touch_menu_pane_t1

0x38e2,	// (0x00032d82) bg_popup_sub_pane_cp7_ParamLimits

0x38e2,	// (0x00032d82) bg_popup_sub_pane_cp7

0x6a37,	// (0x00035ed7) heading_sub_pane

0x6a3f,	// (0x00035edf) list_touch_info_pane_ParamLimits

0x6a3f,	// (0x00035edf) list_touch_info_pane

0x6a4e,	// (0x00035eee) list_single_touch_info_pane_ParamLimits

0x6a4e,	// (0x00035eee) list_single_touch_info_pane

0x6a60,	// (0x00035f00) list_single_touch_info_pane_t1

0x6a6e,	// (0x00035f0e) list_single_touch_info_pane_t2

0x0001,

0xfb12,	// (0x0003efb2) list_single_touch_info_pane_t

0x48fa,	// (0x00033d9a) bg_popup_heading_pane_cp

0x6a7c,	// (0x00035f1c) heading_sub_pane_t1

0x4da2,	// (0x00034242) bg_popup_preview_window_pane_cp_ParamLimits

0x4da2,	// (0x00034242) bg_popup_preview_window_pane_cp

0x6a37,	// (0x00035ed7) heading_preview_pane

0x6a3f,	// (0x00035edf) list_preview_pane_ParamLimits

0x6a3f,	// (0x00035edf) list_preview_pane

0x6a8a,	// (0x00035f2a) popup_preview_window_g1

0x6a4e,	// (0x00035eee) list_single_preview_pane_ParamLimits

0x6a4e,	// (0x00035eee) list_single_preview_pane

0x6a92,	// (0x00035f32) list_single_preview_pane_g1

0x6a9a,	// (0x00035f3a) list_single_preview_pane_t1

0x6a60,	// (0x00035f00) list_single_preview_pane_t2

0x0001,

0xfb17,	// (0x0003efb7) list_single_preview_pane_t

0x6aa8,	// (0x00035f48) bg_popup_heading_pane_cp2_ParamLimits

0x6aa8,	// (0x00035f48) bg_popup_heading_pane_cp2

0x6abe,	// (0x00035f5e) heading_preview_pane_g1

0x6ac6,	// (0x00035f66) heading_preview_pane_t1_ParamLimits

0x6ac6,	// (0x00035f66) heading_preview_pane_t1

0x3935,	// (0x00032dd5) soft_indicator_pane_t1_ParamLimits

0x3e9c,	// (0x0003333c) scroll_pane_ParamLimits

0x4294,	// (0x00033734) scroll_sc2_left_pane

0x428b,	// (0x0003372b) scroll_sc2_right_pane

0x42b3,	// (0x00033753) scroll_bg_pane_g1_ParamLimits

0x42c8,	// (0x00033768) scroll_bg_pane_g2_ParamLimits

0x42e0,	// (0x00033780) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0003eb8e) scroll_bg_pane_g_ParamLimits

0x42b3,	// (0x00033753) scroll_handle_pane_g1_ParamLimits

0x4302,	// (0x000337a2) scroll_handle_pane_g2_ParamLimits

0x42e0,	// (0x00033780) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0003eb95) scroll_handle_pane_g_ParamLimits

0xa5c9,	// (0x00039a69) popup_choice_list_window_ParamLimits

0xa5c9,	// (0x00039a69) popup_choice_list_window

0x4c78,	// (0x00034118) choice_list_pane

0x4cfa,	// (0x0003419a) cell_toolbar_pane_t1

0x4d22,	// (0x000341c2) toolbar_button_pane_ParamLimits

0x5bb7,	// (0x00035057) ai_gene_pane_1_t2_ParamLimits

0x5bb7,	// (0x00035057) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0003edb8) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0003edb8) ai_gene_pane_1_t

0x6ae3,	// (0x00035f83) scroll_sc2_left_pane_g1

0x6ae3,	// (0x00035f83) scroll_sc2_right_pane_g1

0x408e,	// (0x0003352e) bg_popup_sub_pane_cp10

0x6aed,	// (0x00035f8d) list_choice_list_pane

0x6b06,	// (0x00035fa6) list_single_choice_list_pane_ParamLimits

0x6b06,	// (0x00035fa6) list_single_choice_list_pane

0x6b19,	// (0x00035fb9) list_single_choice_list_pane_g1

0x4079,	// (0x00033519) list_single_choice_list_pane_t1_ParamLimits

0x4079,	// (0x00033519) list_single_choice_list_pane_t1

0x6b21,	// (0x00035fc1) choice_list_pane_g1

0x6b29,	// (0x00035fc9) choice_list_pane_t1

0x3872,	// (0x00032d12) input_focus_pane_cp11

0x4200,	// (0x000336a0) title_pane_stacon_g2_ParamLimits

0x4200,	// (0x000336a0) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0003eb74) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0003eb74) title_pane_stacon_g

0x48fa,	// (0x00033d9a) cursor_press_pane

0xa671,	// (0x00039b11) popup_fep_hwr_window_ParamLimits

0xa671,	// (0x00039b11) popup_fep_hwr_window

0xa6e9,	// (0x00039b89) popup_fep_vkb_window_ParamLimits

0xa6e9,	// (0x00039b89) popup_fep_vkb_window

0x6b37,	// (0x00035fd7) cursor_press_pane_g1

0x0002,

0xfb40,	// (0x0003efe0) fep_vkb_side_pane_g_ParamLimits

0xbc63,	// (0x0003b103) fep_hwr_candidate_pane_ParamLimits

0xbc63,	// (0x0003b103) fep_hwr_candidate_pane

0xbc8d,	// (0x0003b12d) fep_hwr_side_pane_ParamLimits

0xbc8d,	// (0x0003b12d) fep_hwr_side_pane

0xbcad,	// (0x0003b14d) fep_hwr_top_pane_ParamLimits

0xbcad,	// (0x0003b14d) fep_hwr_top_pane

0xbcc5,	// (0x0003b165) fep_hwr_write_pane_ParamLimits

0xbcc5,	// (0x0003b165) fep_hwr_write_pane

0xfb40,	// (0x0003efe0) fep_vkb_side_pane_g

0x6b51,	// (0x00035ff1) fep_hwr_top_pane_g1

0x6b3f,	// (0x00035fdf) fep_hwr_top_pane_g2

0xbcf1,	// (0x0003b191) fep_hwr_top_pane_g3

0x0002,

0xfb1c,	// (0x0003efbc) fep_hwr_top_pane_g

0xbd06,	// (0x0003b1a6) fep_hwr_top_text_pane

0x4458,	// (0x000338f8) fep_hwr_top_text_pane_g1

0x6b87,	// (0x00036027) fep_hwr_top_text_pane_t1

0xbdfc,	// (0x0003b29c) fep_hwr_candidate_pane_g1

0x6cf4,	// (0x00036194) fep_vkb_keypad_pane_g3_ParamLimits

0x6cf4,	// (0x00036194) fep_vkb_keypad_pane_g3

0x6d1c,	// (0x000361bc) fep_vkb_keypad_pane_g4_ParamLimits

0x6d1c,	// (0x000361bc) fep_vkb_keypad_pane_g4

0x6d8b,	// (0x0003622b) fep_vkb_bottom_pane_g2_ParamLimits

0x6d8b,	// (0x0003622b) fep_vkb_bottom_pane_g2

0x0001,

0xfb47,	// (0x0003efe7) fep_vkb_bottom_pane_g_ParamLimits

0xfb47,	// (0x0003efe7) fep_vkb_bottom_pane_g

0x6ae3,	// (0x00035f83) cell_vkb_side_pane_g2

0x0001,

0xfb51,	// (0x0003eff1) cell_vkb_side_pane_g

0x6dcf,	// (0x0003626f) cell_vkb_side_pane_t1

0x6ddd,	// (0x0003627d) cell_vkb_side_pane_t1_copy1

0x6ae3,	// (0x00035f83) bg_fep_vkb_candidate_pane_g2

0x6eb3,	// (0x00036353) cell_vkb_candidate_pane_ParamLimits

0x6b95,	// (0x00036035) aid_size_cell_vkb_ParamLimits

0x6b95,	// (0x00036035) aid_size_cell_vkb

0x6eb3,	// (0x00036353) cell_vkb_candidate_pane

0xbfcb,	// (0x0003b46b) bg_popup_fep_shadow_pane_g1

0xbe28,	// (0x0003b2c8) fep_vkb_bottom_pane_ParamLimits

0xbe28,	// (0x0003b2c8) fep_vkb_bottom_pane

0x6c62,	// (0x00036102) fep_vkb_candidate_pane_ParamLimits

0x6c62,	// (0x00036102) fep_vkb_candidate_pane

0xbe4d,	// (0x0003b2ed) fep_vkb_keypad_pane_ParamLimits

0xbe4d,	// (0x0003b2ed) fep_vkb_keypad_pane

0xbe82,	// (0x0003b322) fep_vkb_side_pane_ParamLimits

0xbe82,	// (0x0003b322) fep_vkb_side_pane

0xbebe,	// (0x0003b35e) fep_vkb_top_pane_ParamLimits

0xbebe,	// (0x0003b35e) fep_vkb_top_pane

0x6c88,	// (0x00036128) fep_vkb_top_pane_g1_ParamLimits

0x6c88,	// (0x00036128) fep_vkb_top_pane_g1

0x6c97,	// (0x00036137) fep_vkb_top_pane_g2_ParamLimits

0x6c97,	// (0x00036137) fep_vkb_top_pane_g2

0x6ca6,	// (0x00036146) fep_vkb_top_pane_g3_ParamLimits

0x6ca6,	// (0x00036146) fep_vkb_top_pane_g3

0x0003,

0xfb37,	// (0x0003efd7) fep_vkb_top_pane_g_ParamLimits

0xfb37,	// (0x0003efd7) fep_vkb_top_pane_g

0x6cc4,	// (0x00036164) fep_vkb_top_text_pane_ParamLimits

0x6cc4,	// (0x00036164) fep_vkb_top_text_pane

0xbef3,	// (0x0003b393) fep_vkb_side_pane_g1_ParamLimits

0xbef3,	// (0x0003b393) fep_vkb_side_pane_g1

0x6ce3,	// (0x00036183) grid_vkb_side_pane_ParamLimits

0x6ce3,	// (0x00036183) grid_vkb_side_pane

0xbfd3,	// (0x0003b473) bg_popup_fep_shadow_pane_g2

0xbfdc,	// (0x0003b47c) bg_popup_fep_shadow_pane_g3

0xbfe4,	// (0x0003b484) bg_popup_fep_shadow_pane_g4

0xbfed,	// (0x0003b48d) bg_popup_fep_shadow_pane_g5

0xbff7,	// (0x0003b497) bg_popup_fep_shadow_pane_g6

0xbfff,	// (0x0003b49f) bg_popup_fep_shadow_pane_g7

0x3fa4,	// (0x00033444) bg_popup_fep_shadow_pane_g8

0x6d3a,	// (0x000361da) grid_vkb_keypad_number_pane_ParamLimits

0x6d3a,	// (0x000361da) grid_vkb_keypad_number_pane

0x6d4a,	// (0x000361ea) grid_vkb_keypad_pane_ParamLimits

0x6d4a,	// (0x000361ea) grid_vkb_keypad_pane

0x6d70,	// (0x00036210) fep_vkb_bottom_pane_g1_ParamLimits

0x6d70,	// (0x00036210) fep_vkb_bottom_pane_g1

0x6d99,	// (0x00036239) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6d99,	// (0x00036239) grid_vkb_keypad_bottom_left_pane

0x6dae,	// (0x0003624e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6dae,	// (0x0003624e) grid_vkb_keypad_bottom_right_pane

0x6dc3,	// (0x00036263) fep_vkb_top_text_pane_g1

0xbf3d,	// (0x0003b3dd) fep_vkb_top_text_pane_t1

0xbf52,	// (0x0003b3f2) cell_vkb_side_pane_ParamLimits

0xbf52,	// (0x0003b3f2) cell_vkb_side_pane

0x6ae3,	// (0x00035f83) cell_vkb_side_pane_g1

0x6deb,	// (0x0003628b) cell_vkb_keypad_pane_ParamLimits

0x6deb,	// (0x0003628b) cell_vkb_keypad_pane

0x6e60,	// (0x00036300) cell_vkb_keypad_pane_g1

0x0008,

0xfb64,	// (0x0003f004) bg_popup_fep_shadow_pane_g

0x6ae3,	// (0x00035f83) cell_hwr_side_pane_g1

0x6ae3,	// (0x00035f83) cell_hwr_side_pane_g2

0x6e6a,	// (0x0003630a) cell_vkb_keypad_pane_t1

0xbf75,	// (0x0003b415) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbf75,	// (0x0003b415) cell_vkb_keypad_bottom_left_pane

0xbf92,	// (0x0003b432) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbf92,	// (0x0003b432) cell_vkb_keypad_bottom_right_pane

0x6ae3,	// (0x00035f83) cell_vkb_keypad_bottom_left_pane_g1

0x6ae3,	// (0x00035f83) cell_vkb_keypad_bottom_right_pane_g1

0x6e78,	// (0x00036318) cell_vkb_keypad_number_pane_ParamLimits

0x6e78,	// (0x00036318) cell_vkb_keypad_number_pane

0x6e97,	// (0x00036337) cell_vkb_keypad_number_pane_g1

0x6ea1,	// (0x00036341) cell_vkb_keypad_number_pane_g2

0x6eaa,	// (0x0003634a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb56,	// (0x0003eff6) cell_vkb_keypad_number_pane_g

0x6e6a,	// (0x0003630a) cell_vkb_keypad_number_pane_t1

0x6ece,	// (0x0003636e) fep_vkb_candidate_pane_g1

0x0001,

0xfb51,	// (0x0003eff1) cell_hwr_side_pane_g

0x6ee7,	// (0x00036387) cell_hwr_side_pane_t1

0xc011,	// (0x0003b4b1) cell_hwr_side_pane_t1_copy1

0x6cb6,	// (0x00036156) cell_hwr_candidate_pane_g1

0xc01f,	// (0x0003b4bf) cell_hwr_candidate_pane_t1

0x6ae3,	// (0x00035f83) cell_vkb_candidate_pane_g2

0x6f2b,	// (0x000363cb) cell_vkb_candidate_pane_t1

0xbc2a,	// (0x0003b0ca) bg_popup_fep_shadow_pane_ParamLimits

0xbc2a,	// (0x0003b0ca) bg_popup_fep_shadow_pane

0xd9b9,	// (0x0003ce59) bg_fep_hwr_top_pane_g4

0x6b63,	// (0x00036003) bg_hwr_side_pane_g1_ParamLimits

0x6b63,	// (0x00036003) bg_hwr_side_pane_g1

0xbd42,	// (0x0003b1e2) cell_hwr_side_pane_ParamLimits

0xbd42,	// (0x0003b1e2) cell_hwr_side_pane

0xbd7d,	// (0x0003b21d) fep_hwr_write_pane_g1_ParamLimits

0xbd7d,	// (0x0003b21d) fep_hwr_write_pane_g1

0xbd8a,	// (0x0003b22a) fep_hwr_write_pane_g2_ParamLimits

0xbd8a,	// (0x0003b22a) fep_hwr_write_pane_g2

0xbd97,	// (0x0003b237) fep_hwr_write_pane_g3_ParamLimits

0xbd97,	// (0x0003b237) fep_hwr_write_pane_g3

0xbda5,	// (0x0003b245) fep_hwr_write_pane_g4_ParamLimits

0xbda5,	// (0x0003b245) fep_hwr_write_pane_g4

0x0005,

0xfb23,	// (0x0003efc3) fep_hwr_write_pane_g_ParamLimits

0xfb23,	// (0x0003efc3) fep_hwr_write_pane_g

0xd9b9,	// (0x0003ce59) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd9b9,	// (0x0003ce59) bg_fep_hwr_candidate_pane_g2

0xbdba,	// (0x0003b25a) cell_hwr_candidate_pane_ParamLimits

0xbdba,	// (0x0003b25a) cell_hwr_candidate_pane

0xbdfc,	// (0x0003b29c) fep_hwr_candidate_pane_g1_ParamLimits

0x6c05,	// (0x000360a5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6c05,	// (0x000360a5) bg_popup_fep_shadow_pane_cp2

0x6cb6,	// (0x00036156) fep_vkb_top_pane_g4_ParamLimits

0x6cb6,	// (0x00036156) fep_vkb_top_pane_g4

0x6cd5,	// (0x00036175) fep_vkb_side_pane_g2_ParamLimits

0x6cd5,	// (0x00036175) fep_vkb_side_pane_g2

0x8a07,	// (0x00037ea7) list_setting_pane_t4_ParamLimits

0x8a07,	// (0x00037ea7) list_setting_pane_t4

0x8aa1,	// (0x00037f41) list_setting_number_pane_t5_ParamLimits

0x8aa1,	// (0x00037f41) list_setting_number_pane_t5

0x9f49,	// (0x000393e9) list_double_heading_pane_cp2_ParamLimits

0x9f49,	// (0x000393e9) list_double_heading_pane_cp2

0x3f37,	// (0x000333d7) list_double_heading_pane_g1_cp2_ParamLimits

0x3f37,	// (0x000333d7) list_double_heading_pane_g1_cp2

0x3f43,	// (0x000333e3) list_double_heading_pane_g2_cp2_ParamLimits

0x3f43,	// (0x000333e3) list_double_heading_pane_g2_cp2

0x6f39,	// (0x000363d9) list_double_heading_pane_t1_cp2_ParamLimits

0x6f39,	// (0x000363d9) list_double_heading_pane_t1_cp2

0x6f4f,	// (0x000363ef) list_double_heading_pane_t2_cp2_ParamLimits

0x6f4f,	// (0x000363ef) list_double_heading_pane_t2_cp2

0x386a,	// (0x00032d0a) aid_value_unit2

0x9760,	// (0x00038c00) popup_preview_fixed_window

0x3a15,	// (0x00032eb5) bg_popup_preview_window_pane_cp02

0x6f61,	// (0x00036401) list_preview_fixed_pane

0x6fa7,	// (0x00036447) list_empty_pane_fp_ParamLimits

0x6fa7,	// (0x00036447) list_empty_pane_fp

0x6fa7,	// (0x00036447) list_single_cale_day_pane_fp_ParamLimits

0x6fa7,	// (0x00036447) list_single_cale_day_pane_fp

0x6fa7,	// (0x00036447) list_single_graphic_heading_pane_fp_ParamLimits

0x6fa7,	// (0x00036447) list_single_graphic_heading_pane_fp

0x6fa7,	// (0x00036447) list_single_graphic_pane_fp_ParamLimits

0x6fa7,	// (0x00036447) list_single_graphic_pane_fp

0x6fa7,	// (0x00036447) list_single_heading_pane_fp_ParamLimits

0x6fa7,	// (0x00036447) list_single_heading_pane_fp

0x6fa7,	// (0x00036447) list_single_pane_fp_ParamLimits

0x6fa7,	// (0x00036447) list_single_pane_fp

0x6fbd,	// (0x0003645d) list_single_pane_fp_g1_ParamLimits

0x6fbd,	// (0x0003645d) list_single_pane_fp_g1

0x3f37,	// (0x000333d7) list_single_pane_fp_g2_ParamLimits

0x3f37,	// (0x000333d7) list_single_pane_fp_g2

0x3f43,	// (0x000333e3) list_single_pane_fp_g3_ParamLimits

0x3f43,	// (0x000333e3) list_single_pane_fp_g3

0x6fc9,	// (0x00036469) list_single_pane_fp_g4_ParamLimits

0x6fc9,	// (0x00036469) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0003f025) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0003f025) list_single_pane_fp_g

0x91e4,	// (0x00038684) list_single_pane_fp_t1_ParamLimits

0x91e4,	// (0x00038684) list_single_pane_fp_t1

0x91fb,	// (0x0003869b) list_single_graphic_pane_fp_g1_ParamLimits

0x91fb,	// (0x0003869b) list_single_graphic_pane_fp_g1

0x6fbd,	// (0x0003645d) list_single_graphic_pane_fp_g2_ParamLimits

0x6fbd,	// (0x0003645d) list_single_graphic_pane_fp_g2

0x3f37,	// (0x000333d7) list_single_graphic_pane_fp_g3_ParamLimits

0x3f37,	// (0x000333d7) list_single_graphic_pane_fp_g3

0x3f43,	// (0x000333e3) list_single_graphic_pane_fp_g4_ParamLimits

0x3f43,	// (0x000333e3) list_single_graphic_pane_fp_g4

0x6fc9,	// (0x00036469) list_single_graphic_pane_fp_g5_ParamLimits

0x6fc9,	// (0x00036469) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003f02e) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003f02e) list_single_graphic_pane_fp_g

0x9207,	// (0x000386a7) list_single_graphic_pane_fp_t1_ParamLimits

0x9207,	// (0x000386a7) list_single_graphic_pane_fp_t1

0x91fb,	// (0x0003869b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x91fb,	// (0x0003869b) list_single_graphic_heading_pane_fp_g1

0x6fbd,	// (0x0003645d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6fbd,	// (0x0003645d) list_single_graphic_heading_pane_fp_g2

0x3f37,	// (0x000333d7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3f37,	// (0x000333d7) list_single_graphic_heading_pane_fp_g3

0x3f43,	// (0x000333e3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3f43,	// (0x000333e3) list_single_graphic_heading_pane_fp_g4

0x6fc9,	// (0x00036469) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6fc9,	// (0x00036469) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003f02e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003f02e) list_single_graphic_heading_pane_fp_g

0x921d,	// (0x000386bd) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x921d,	// (0x000386bd) list_single_graphic_heading_pane_fp_t1

0x9233,	// (0x000386d3) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x9233,	// (0x000386d3) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0003f039) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0003f039) list_single_graphic_heading_pane_fp_t

0x9245,	// (0x000386e5) list_single_cale_day_pane_fp_g1_ParamLimits

0x9245,	// (0x000386e5) list_single_cale_day_pane_fp_g1

0x6fd5,	// (0x00036475) list_single_cale_day_pane_fp_g2_ParamLimits

0x6fd5,	// (0x00036475) list_single_cale_day_pane_fp_g2

0xc03d,	// (0x0003b4dd) list_single_cale_day_pane_fp_g3_ParamLimits

0xc03d,	// (0x0003b4dd) list_single_cale_day_pane_fp_g3

0xc065,	// (0x0003b505) list_single_cale_day_pane_fp_g4_ParamLimits

0xc065,	// (0x0003b505) list_single_cale_day_pane_fp_g4

0xc089,	// (0x0003b529) list_single_cale_day_pane_fp_g5_ParamLimits

0xc089,	// (0x0003b529) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0003f03e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0003f03e) list_single_cale_day_pane_fp_g

0x927d,	// (0x0003871d) list_single_cale_day_pane_fp_t1_ParamLimits

0x927d,	// (0x0003871d) list_single_cale_day_pane_fp_t1

0x92a3,	// (0x00038743) list_single_cale_day_pane_fp_t2_ParamLimits

0x92a3,	// (0x00038743) list_single_cale_day_pane_fp_t2

0x92bc,	// (0x0003875c) list_single_cale_day_pane_fp_t3_ParamLimits

0x92bc,	// (0x0003875c) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0003f049) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0003f049) list_single_cale_day_pane_fp_t

0x6fbd,	// (0x0003645d) list_empty_pane_fp_g1_ParamLimits

0x6fbd,	// (0x0003645d) list_empty_pane_fp_g1

0x92d5,	// (0x00038775) list_empty_pane_fp_t1

0x92e3,	// (0x00038783) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0003f050) list_empty_pane_fp_t

0x6fbd,	// (0x0003645d) list_single_heading_pane_fp_g1_ParamLimits

0x6fbd,	// (0x0003645d) list_single_heading_pane_fp_g1

0x3f37,	// (0x000333d7) list_single_heading_pane_fp_g2_ParamLimits

0x3f37,	// (0x000333d7) list_single_heading_pane_fp_g2

0x3f43,	// (0x000333e3) list_single_heading_pane_fp_g3_ParamLimits

0x3f43,	// (0x000333e3) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0003f055) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0003f055) list_single_heading_pane_fp_g

0x92f1,	// (0x00038791) list_single_heading_pane_fp_t1_ParamLimits

0x92f1,	// (0x00038791) list_single_heading_pane_fp_t1

0x9303,	// (0x000387a3) list_single_heading_pane_fp_t2_ParamLimits

0x9303,	// (0x000387a3) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0003f05c) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0003f05c) list_single_heading_pane_fp_t

0x409a,	// (0x0003353a) aid_size_cell_fast

0x39f8,	// (0x00032e98) soft_indicator_pane_cp1_t1

0x40d4,	// (0x00033574) cell_app_pane_cp2_ParamLimits

0x40d4,	// (0x00033574) cell_app_pane_cp2

0xbc4c,	// (0x0003b0ec) fep_hwr_candidate_drop_down_list_pane

0xd9c7,	// (0x0003ce67) fep_hwr_candidate_pane_g3_ParamLimits

0xd9c7,	// (0x0003ce67) fep_hwr_candidate_pane_g3

0xd9d4,	// (0x0003ce74) fep_hwr_candidate_pane_g4_ParamLimits

0xd9d4,	// (0x0003ce74) fep_hwr_candidate_pane_g4

0x0002,

0xfb30,	// (0x0003efd0) fep_hwr_candidate_pane_g_ParamLimits

0xfb30,	// (0x0003efd0) fep_hwr_candidate_pane_g

0x6c51,	// (0x000360f1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6c51,	// (0x000360f1) fep_vkb_candidate_drop_down_list_pane

0x6ed6,	// (0x00036376) fep_vkb_candidate_pane_g3

0x6ede,	// (0x0003637e) fep_vkb_candidate_pane_g4

0x0002,

0xfb5d,	// (0x0003effd) fep_vkb_candidate_pane_g

0x6cb6,	// (0x00036156) cell_hwr_candidate_pane_g1_ParamLimits

0x7089,	// (0x00036529) cell_hwr_candidate_pane_g3_ParamLimits

0x7089,	// (0x00036529) cell_hwr_candidate_pane_g3

0x70aa,	// (0x0003654a) cell_hwr_candidate_pane_g4_ParamLimits

0x70aa,	// (0x0003654a) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0003f017) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0003f017) cell_hwr_candidate_pane_g

0x6ef5,	// (0x00036395) cell_vkb_candidate_pane_g3_ParamLimits

0x6ef5,	// (0x00036395) cell_vkb_candidate_pane_g3

0x6f10,	// (0x000363b0) cell_vkb_candidate_pane_g4_ParamLimits

0x6f10,	// (0x000363b0) cell_vkb_candidate_pane_g4

0x6fe1,	// (0x00036481) cell_app_pane_cp2_g1_ParamLimits

0x6fe1,	// (0x00036481) cell_app_pane_cp2_g1

0x6fff,	// (0x0003649f) cell_app_pane_cp2_g2_ParamLimits

0x6fff,	// (0x0003649f) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0003f061) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0003f061) cell_app_pane_cp2_g

0x700b,	// (0x000364ab) cell_app_pane_cp2_t1_ParamLimits

0x700b,	// (0x000364ab) cell_app_pane_cp2_t1

0x3f29,	// (0x000333c9) grid_highlight_pane_cp1_ParamLimits

0x3f29,	// (0x000333c9) grid_highlight_pane_cp1

0xc0ad,	// (0x0003b54d) cell_hwr_candidate_pane_cp1_ParamLimits

0xc0ad,	// (0x0003b54d) cell_hwr_candidate_pane_cp1

0x6cb6,	// (0x00036156) fep_hwr_candidate_drop_down_list_pane_g1

0x703d,	// (0x000364dd) fep_hwr_candidate_drop_down_list_pane_g2

0x704a,	// (0x000364ea) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0003f066) fep_hwr_candidate_drop_down_list_pane_g

0xc0cc,	// (0x0003b56c) fep_hwr_candidate_drop_down_list_scroll_pane

0xc0d5,	// (0x0003b575) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc0d5,	// (0x0003b575) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc0e2,	// (0x0003b582) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc0e2,	// (0x0003b582) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc0ef,	// (0x0003b58f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc0ef,	// (0x0003b58f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6ef5,	// (0x00036395) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ef5,	// (0x00036395) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6f10,	// (0x000363b0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6f10,	// (0x000363b0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc0fc,	// (0x0003b59c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc0fc,	// (0x0003b59c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xc117,	// (0x0003b5b7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc117,	// (0x0003b5b7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc132,	// (0x0003b5d2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc132,	// (0x0003b5d2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0003f06d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0003f06d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x701d,	// (0x000364bd) cell_vkb_candidate_pane_cp1_ParamLimits

0x701d,	// (0x000364bd) cell_vkb_candidate_pane_cp1

0x6cb6,	// (0x00036156) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6cb6,	// (0x00036156) fep_vkb_candidate_drop_down_list_pane_g1

0x703d,	// (0x000364dd) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x703d,	// (0x000364dd) fep_vkb_candidate_drop_down_list_pane_g2

0x704a,	// (0x000364ea) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x704a,	// (0x000364ea) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0003f066) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc6,	// (0x0003f066) fep_vkb_candidate_drop_down_list_pane_g

0x7057,	// (0x000364f7) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7057,	// (0x000364f7) fep_vkb_candidate_drop_down_list_scroll_pane

0x7064,	// (0x00036504) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7064,	// (0x00036504) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7071,	// (0x00036511) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7071,	// (0x00036511) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x707d,	// (0x0003651d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x707d,	// (0x0003651d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7089,	// (0x00036529) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7089,	// (0x00036529) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x70aa,	// (0x0003654a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x70aa,	// (0x0003654a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x70cb,	// (0x0003656b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x70cb,	// (0x0003656b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x70ec,	// (0x0003658c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x70ec,	// (0x0003658c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x710d,	// (0x000365ad) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x710d,	// (0x000365ad) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0003f07e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0003f07e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9870,	// (0x00038d10) title_pane_g1_ParamLimits

0x987d,	// (0x00038d1d) title_pane_g2_ParamLimits

0xf554,	// (0x0003e9f4) title_pane_g_ParamLimits

0x4450,	// (0x000338f0) aid_call2_pane

0x4448,	// (0x000338e8) aid_call_pane

0x4458,	// (0x000338f8) popup_clock_analogue_window_g1

0x4458,	// (0x000338f8) popup_clock_analogue_window_g2

0x9f2a,	// (0x000393ca) popup_clock_analogue_window_g3

0x9f33,	// (0x000393d3) popup_clock_analogue_window_g4

0x387c,	// (0x00032d1c) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0003eba3) popup_clock_analogue_window_g

0x9f3b,	// (0x000393db) popup_clock_analogue_window_t1

0x9f73,	// (0x00039413) clock_digital_number_pane_ParamLimits

0x9f73,	// (0x00039413) clock_digital_number_pane

0x9f7f,	// (0x0003941f) clock_digital_number_pane_cp02_ParamLimits

0x9f7f,	// (0x0003941f) clock_digital_number_pane_cp02

0x9f8b,	// (0x0003942b) clock_digital_number_pane_cp03_ParamLimits

0x9f8b,	// (0x0003942b) clock_digital_number_pane_cp03

0x9f97,	// (0x00039437) clock_digital_number_pane_cp04_ParamLimits

0x9f97,	// (0x00039437) clock_digital_number_pane_cp04

0x9fa3,	// (0x00039443) clock_digital_separator_pane_ParamLimits

0x9fa3,	// (0x00039443) clock_digital_separator_pane

0x9faf,	// (0x0003944f) popup_clock_digital_window_t1_ParamLimits

0x9faf,	// (0x0003944f) popup_clock_digital_window_t1

0x387c,	// (0x00032d1c) clock_digital_number_pane_g1

0x387c,	// (0x00032d1c) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0003ebae) clock_digital_number_pane_g

0x387c,	// (0x00032d1c) clock_digital_separator_pane_g1

0x387c,	// (0x00032d1c) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0003ebae) clock_digital_separator_pane_g

0xab4c,	// (0x00039fec) aid_fill_nsta_ParamLimits

0xac15,	// (0x0003a0b5) indicator_nsta_pane_ParamLimits

0x4c1f,	// (0x000340bf) popup_clock_analogue_window

0x4c1f,	// (0x000340bf) popup_clock_digital_window

0x38e2,	// (0x00032d82) grid_indicator_nsta_pane_ParamLimits

0x6776,	// (0x00035c16) clock_nsta_pane_t2

0x0001,

0xfab0,	// (0x0003ef50) clock_nsta_pane_t

0x9eee,	// (0x0003938e) aid_size_max_handle

0x9ef8,	// (0x00039398) aid_size_min_handle

0x48fa,	// (0x00033d9a) editor_scroll_pane

0x7128,	// (0x000365c8) ex_editor_pane

0x4055,	// (0x000334f5) scroll_pane_cp13

0x3ec8,	// (0x00033368) scroll_pane_cp14

0x4487,	// (0x00033927) scroll_pane_cp36

0x9f5d,	// (0x000393fd) list_single_graphic_hl_pane_cp2_ParamLimits

0x9f5d,	// (0x000393fd) list_single_graphic_hl_pane_cp2

0xb684,	// (0x0003ab24) list_single_graphic_hl_pane_ParamLimits

0xb684,	// (0x0003ab24) list_single_graphic_hl_pane

0x9319,	// (0x000387b9) aid_size_min_hl_cp1

0x7130,	// (0x000365d0) list_highlight_pane_cp34_ParamLimits

0x7130,	// (0x000365d0) list_highlight_pane_cp34

0x7141,	// (0x000365e1) list_single_graphic_hl_pane_g1_ParamLimits

0x7141,	// (0x000365e1) list_single_graphic_hl_pane_g1

0x9322,	// (0x000387c2) list_single_graphic_hl_pane_g2_ParamLimits

0x9322,	// (0x000387c2) list_single_graphic_hl_pane_g2

0x9322,	// (0x000387c2) list_single_graphic_hl_pane_g3_ParamLimits

0x9322,	// (0x000387c2) list_single_graphic_hl_pane_g3

0x9b95,	// (0x00039035) list_single_graphic_hl_pane_g4_ParamLimits

0x9b95,	// (0x00039035) list_single_graphic_hl_pane_g4

0xc14d,	// (0x0003b5ed) list_single_graphic_hl_pane_g5_ParamLimits

0xc14d,	// (0x0003b5ed) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x0003f08f) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x0003f08f) list_single_graphic_hl_pane_g

0x932e,	// (0x000387ce) list_single_graphic_hl_pane_t1_ParamLimits

0x932e,	// (0x000387ce) list_single_graphic_hl_pane_t1

0x714e,	// (0x000365ee) aid_size_min_hl_cp2

0x7157,	// (0x000365f7) list_highlight_pane_cp34_cp2_ParamLimits

0x7157,	// (0x000365f7) list_highlight_pane_cp34_cp2

0x7141,	// (0x000365e1) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7141,	// (0x000365e1) list_single_graphic_hl_pane_g1_cp2

0x7164,	// (0x00036604) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7164,	// (0x00036604) list_single_graphic_hl_pane_g2_cp2

0xc161,	// (0x0003b601) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc161,	// (0x0003b601) list_single_graphic_hl_pane_g3_cp2

0x483f,	// (0x00033cdf) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x483f,	// (0x00033cdf) list_single_graphic_hl_pane_g4_cp2

0x7170,	// (0x00036610) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7170,	// (0x00036610) list_single_graphic_hl_pane_g5_cp2

0xa460,	// (0x00039900) control_pane_g4_ParamLimits

0xa460,	// (0x00039900) control_pane_g4

0x408e,	// (0x0003352e) bg_popup_sub_pane_cp10_ParamLimits

0x6aed,	// (0x00035f8d) list_choice_list_pane_ParamLimits

0x6afc,	// (0x00035f9c) scroll_pane_cp23

0x3a15,	// (0x00032eb5) bg_popup_preview_window_pane_cp02_ParamLimits

0x6f61,	// (0x00036401) list_preview_fixed_pane_ParamLimits

0x6f77,	// (0x00036417) list_preview_fixed_pane_cp_ParamLimits

0x6f77,	// (0x00036417) list_preview_fixed_pane_cp

0x6f83,	// (0x00036423) popup_preview_fixed_window_g1_ParamLimits

0x6f83,	// (0x00036423) popup_preview_fixed_window_g1

0x6f8f,	// (0x0003642f) popup_preview_fixed_window_g2_ParamLimits

0x6f8f,	// (0x0003642f) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0003f01e) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0003f01e) popup_preview_fixed_window_g

0x9dce,	// (0x0003926e) aid_navi_side_left_pane_ParamLimits

0x9de3,	// (0x00039283) aid_navi_side_right_pane_ParamLimits

0x9dfb,	// (0x0003929b) navi_icon_pane_stacon_ParamLimits

0x9e0f,	// (0x000392af) navi_navi_pane_stacon_ParamLimits

0x9dfb,	// (0x0003929b) navi_text_pane_stacon_ParamLimits

0x3872,	// (0x00032d12) main_text_info_pane

0x719a,	// (0x0003663a) listscroll_text_info_pane

0x71a2,	// (0x00036642) list_text_info_pane_ParamLimits

0x71a2,	// (0x00036642) list_text_info_pane

0x71b1,	// (0x00036651) scroll_pane_cp24_ParamLimits

0x71b1,	// (0x00036651) scroll_pane_cp24

0xc16f,	// (0x0003b60f) list_text_info_pane_t1_ParamLimits

0xc16f,	// (0x0003b60f) list_text_info_pane_t1

0xa5e5,	// (0x00039a85) popup_fast_swap2_window_ParamLimits

0xa5e5,	// (0x00039a85) popup_fast_swap2_window

0x71cf,	// (0x0003666f) aid_size_cell_fast2

0x3872,	// (0x00032d12) bg_popup_window_pane_cp17

0x509c,	// (0x0003453c) heading_pane_cp2

0x3bfb,	// (0x0003309b) listscroll_fast2_pane

0x71d9,	// (0x00036679) grid_fast2_pane

0x71e3,	// (0x00036683) listscroll_fast2_pane_g1

0x71eb,	// (0x0003668b) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x0003f09a) listscroll_fast2_pane_g

0x4055,	// (0x000334f5) scroll_pane_cp26

0x71f5,	// (0x00036695) cell_fast2_pane_ParamLimits

0x71f5,	// (0x00036695) cell_fast2_pane

0x720a,	// (0x000366aa) cell_fast2_pane_g1

0x7213,	// (0x000366b3) cell_fast2_pane_g2

0x721c,	// (0x000366bc) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x0003f09f) cell_fast2_pane_g

0x3c8f,	// (0x0003312f) grid_highlight_pane_cp9

0x3ca4,	// (0x00033144) main_eswt_pane_ParamLimits

0x3ca4,	// (0x00033144) main_eswt_pane

0x71c6,	// (0x00036666) list_single_text_info_pane

0x7224,	// (0x000366c4) eswt_ctrl_button_pane

0x7224,	// (0x000366c4) eswt_ctrl_canvas_pane

0x722c,	// (0x000366cc) eswt_ctrl_combo_pane

0x7224,	// (0x000366c4) eswt_ctrl_default_pane

0x7224,	// (0x000366c4) eswt_ctrl_label_pane

0x7234,	// (0x000366d4) eswt_ctrl_wait_pane

0x723c,	// (0x000366dc) eswt_shell_pane

0x3872,	// (0x00032d12) listscroll_eswt_app_pane

0x725c,	// (0x000366fc) popup_eswt_tasktip_window_ParamLimits

0x725c,	// (0x000366fc) popup_eswt_tasktip_window

0x4da2,	// (0x00034242) bg_popup_window_pane_cp18

0x726d,	// (0x0003670d) eswt_control_pane_g1_ParamLimits

0x726d,	// (0x0003670d) eswt_control_pane_g1

0x727a,	// (0x0003671a) eswt_control_pane_g2_ParamLimits

0x727a,	// (0x0003671a) eswt_control_pane_g2

0x7287,	// (0x00036727) eswt_control_pane_g3_ParamLimits

0x7287,	// (0x00036727) eswt_control_pane_g3

0x7294,	// (0x00036734) eswt_control_pane_g4_ParamLimits

0x7294,	// (0x00036734) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x0003f0a6) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x0003f0a6) eswt_control_pane_g

0x3f29,	// (0x000333c9) bg_button_pane_ParamLimits

0x3f29,	// (0x000333c9) bg_button_pane

0x3ca4,	// (0x00033144) common_borders_pane_copy2_ParamLimits

0x3ca4,	// (0x00033144) common_borders_pane_copy2

0x72a1,	// (0x00036741) control_button_pane_g1_ParamLimits

0x72a1,	// (0x00036741) control_button_pane_g1

0x72ad,	// (0x0003674d) control_button_pane_g2_ParamLimits

0x72ad,	// (0x0003674d) control_button_pane_g2

0x72b9,	// (0x00036759) control_button_pane_g3_ParamLimits

0x72b9,	// (0x00036759) control_button_pane_g3

0x0002,

0xfc0f,	// (0x0003f0af) control_button_pane_g_ParamLimits

0xfc0f,	// (0x0003f0af) control_button_pane_g

0x72cd,	// (0x0003676d) control_button_pane_t1

0x72db,	// (0x0003677b) control_button_pane_t2

0x0001,

0xfc16,	// (0x0003f0b6) control_button_pane_t

0x4d2e,	// (0x000341ce) bg_button_pane_g1

0x4d3e,	// (0x000341de) bg_button_pane_g2

0x4d36,	// (0x000341d6) bg_button_pane_g3

0x4d4e,	// (0x000341ee) bg_button_pane_g4

0x4d46,	// (0x000341e6) bg_button_pane_g5

0x4d56,	// (0x000341f6) bg_button_pane_g6

0x4d5e,	// (0x000341fe) bg_button_pane_g7

0x4d6e,	// (0x0003420e) bg_button_pane_g8

0x4d66,	// (0x00034206) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0003ed0c) bg_button_pane_g

0x6aa8,	// (0x00035f48) common_borders_pane_ParamLimits

0x6aa8,	// (0x00035f48) common_borders_pane

0x726d,	// (0x0003670d) eswt_control_pane_g1_copy1_ParamLimits

0x726d,	// (0x0003670d) eswt_control_pane_g1_copy1

0x727a,	// (0x0003671a) eswt_control_pane_g2_copy1_ParamLimits

0x727a,	// (0x0003671a) eswt_control_pane_g2_copy1

0x7287,	// (0x00036727) eswt_control_pane_g3_copy1_ParamLimits

0x7287,	// (0x00036727) eswt_control_pane_g3_copy1

0x7294,	// (0x00036734) eswt_control_pane_g4_copy1_ParamLimits

0x7294,	// (0x00036734) eswt_control_pane_g4_copy1

0x6ae3,	// (0x00035f83) bg_eswt_ctrl_canvas_pane_g1

0x6aa8,	// (0x00035f48) common_borders_pane_cp2_ParamLimits

0x6aa8,	// (0x00035f48) common_borders_pane_cp2

0x6aa8,	// (0x00035f48) common_borders_pane_cp3_ParamLimits

0x6aa8,	// (0x00035f48) common_borders_pane_cp3

0x72e9,	// (0x00036789) separator_horizontal_pane

0x72f1,	// (0x00036791) separator_vertical_pane

0x726d,	// (0x0003670d) eswt_control_pane_g1_copy2_ParamLimits

0x726d,	// (0x0003670d) eswt_control_pane_g1_copy2

0x727a,	// (0x0003671a) eswt_control_pane_g2_copy2_ParamLimits

0x727a,	// (0x0003671a) eswt_control_pane_g2_copy2

0x7287,	// (0x00036727) eswt_control_pane_g3_copy2_ParamLimits

0x7287,	// (0x00036727) eswt_control_pane_g3_copy2

0x7294,	// (0x00036734) eswt_control_pane_g4_copy2_ParamLimits

0x7294,	// (0x00036734) eswt_control_pane_g4_copy2

0x3872,	// (0x00032d12) common_borders_pane_cp4

0x72fa,	// (0x0003679a) separator_horizontal_pane_g1

0x7303,	// (0x000367a3) separator_horizontal_pane_g2

0x730c,	// (0x000367ac) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x0003f0bb) separator_horizontal_pane_g

0x726d,	// (0x0003670d) eswt_control_pane_g1_copy3_ParamLimits

0x726d,	// (0x0003670d) eswt_control_pane_g1_copy3

0x727a,	// (0x0003671a) eswt_control_pane_g2_copy3_ParamLimits

0x727a,	// (0x0003671a) eswt_control_pane_g2_copy3

0x7287,	// (0x00036727) eswt_control_pane_g3_copy3_ParamLimits

0x7287,	// (0x00036727) eswt_control_pane_g3_copy3

0x7294,	// (0x00036734) eswt_control_pane_g4_copy3_ParamLimits

0x7294,	// (0x00036734) eswt_control_pane_g4_copy3

0x3872,	// (0x00032d12) common_borders_pane_cp5

0x7315,	// (0x000367b5) separator_vertical_pane_g1

0x731e,	// (0x000367be) separator_vertical_pane_g2

0x7327,	// (0x000367c7) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x0003f0c2) separator_vertical_pane_g

0x726d,	// (0x0003670d) eswt_control_pane_g1_copy4_ParamLimits

0x726d,	// (0x0003670d) eswt_control_pane_g1_copy4

0x727a,	// (0x0003671a) eswt_control_pane_g2_copy4_ParamLimits

0x727a,	// (0x0003671a) eswt_control_pane_g2_copy4

0x7287,	// (0x00036727) eswt_control_pane_g3_copy4_ParamLimits

0x7287,	// (0x00036727) eswt_control_pane_g3_copy4

0x7294,	// (0x00036734) eswt_control_pane_g4_copy4_ParamLimits

0x7294,	// (0x00036734) eswt_control_pane_g4_copy4

0x7330,	// (0x000367d0) eswt_ctrl_combo_button_pane

0x7338,	// (0x000367d8) eswt_ctrl_input_pane

0x7340,	// (0x000367e0) popup_choice_list_window_cp70

0x7348,	// (0x000367e8) eswt_ctrl_input_pane_t1

0x3872,	// (0x00032d12) input_focus_pane_cp70

0x6aa8,	// (0x00035f48) bg_button_pane_cp70_ParamLimits

0x6aa8,	// (0x00035f48) bg_button_pane_cp70

0x7356,	// (0x000367f6) eswt_ctrl_combo_button_pane_g1

0x735e,	// (0x000367fe) wait_bar_pane_cp70

0x4da2,	// (0x00034242) bg_popup_window_pane_cp70_ParamLimits

0x4da2,	// (0x00034242) bg_popup_window_pane_cp70

0x7366,	// (0x00036806) popup_eswt_tasktip_window_t1

0x737c,	// (0x0003681c) wait_bar_pane_cp71_ParamLimits

0x737c,	// (0x0003681c) wait_bar_pane_cp71

0x7388,	// (0x00036828) grid_eswt_app_pane

0x428b,	// (0x0003372b) scroll_pane_cp70

0xc1a4,	// (0x0003b644) cell_eswt_app_pane_ParamLimits

0xc1a4,	// (0x0003b644) cell_eswt_app_pane

0xc1d8,	// (0x0003b678) cell_eswt_app_pane_g1_ParamLimits

0xc1d8,	// (0x0003b678) cell_eswt_app_pane_g1

0xc207,	// (0x0003b6a7) cell_eswt_app_pane_g2_ParamLimits

0xc207,	// (0x0003b6a7) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x0003f0c9) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x0003f0c9) cell_eswt_app_pane_g

0xc22b,	// (0x0003b6cb) cell_eswt_app_pane_t1_ParamLimits

0xc22b,	// (0x0003b6cb) cell_eswt_app_pane_t1

0x7391,	// (0x00036831) grid_highlight_pane_cp70_ParamLimits

0x7391,	// (0x00036831) grid_highlight_pane_cp70

0x47f3,	// (0x00033c93) set_content_pane_g1

0x4ae3,	// (0x00033f83) status_small_volume_pane

0xc25d,	// (0x0003b6fd) status_small_volume_pane_g1

0xc265,	// (0x0003b705) volume_small2_pane

0xc26e,	// (0x0003b70e) volume_small2_pane_g1

0xc277,	// (0x0003b717) volume_small2_pane_g2

0xc280,	// (0x0003b720) volume_small2_pane_g3

0xc289,	// (0x0003b729) volume_small2_pane_g4

0xc292,	// (0x0003b732) volume_small2_pane_g5

0xc29b,	// (0x0003b73b) volume_small2_pane_g6

0xc2a4,	// (0x0003b744) volume_small2_pane_g7

0xc2ad,	// (0x0003b74d) volume_small2_pane_g8

0xc2b6,	// (0x0003b756) volume_small2_pane_g9

0xc2bf,	// (0x0003b75f) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x0003f0ce) volume_small2_pane_g

0x6dc3,	// (0x00036263) fep_vkb_top_text_pane_g1_ParamLimits

0xbf3d,	// (0x0003b3dd) fep_vkb_top_text_pane_t1_ParamLimits

0x6f9b,	// (0x0003643b) popup_preview_fixed_window_g3_ParamLimits

0x6f9b,	// (0x0003643b) popup_preview_fixed_window_g3

0xaa8c,	// (0x00039f2c) popup_toolbar_trans_pane

0xb48e,	// (0x0003a92e) aid_height_set_list_ParamLimits

0x4de0,	// (0x00034280) aid_size_parent_ParamLimits

0x408e,	// (0x0003352e) list_highlight_pane_cp2_ParamLimits

0x47f3,	// (0x00033c93) set_content_pane_g1_ParamLimits

0xb6a3,	// (0x0003ab43) list_single_image_pane_ParamLimits

0xb6a3,	// (0x0003ab43) list_single_image_pane

0xc2c8,	// (0x0003b768) aid_size_cell_image_ParamLimits

0xc2c8,	// (0x0003b768) aid_size_cell_image

0xc2d5,	// (0x0003b775) grid_single_image_pane_ParamLimits

0xc2d5,	// (0x0003b775) grid_single_image_pane

0x739d,	// (0x0003683d) list_single_image_pane_g1_ParamLimits

0x739d,	// (0x0003683d) list_single_image_pane_g1

0x73a9,	// (0x00036849) list_single_image_pane_g2_ParamLimits

0x73a9,	// (0x00036849) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x0003f0e3) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x0003f0e3) list_single_image_pane_g

0x73bd,	// (0x0003685d) list_single_image_pane_t1_ParamLimits

0x73bd,	// (0x0003685d) list_single_image_pane_t1

0xc2e1,	// (0x0003b781) cell_image_list_pane_ParamLimits

0xc2e1,	// (0x0003b781) cell_image_list_pane

0xc2f5,	// (0x0003b795) cell_image_list_pane_g1

0xc2fe,	// (0x0003b79e) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x0003f0e8) cell_image_list_pane_g

0x73d3,	// (0x00036873) aid_size_cell_tb_trans_pane

0x3f29,	// (0x000333c9) bg_tb_trans_pane

0x73e5,	// (0x00036885) grid_tb_trans_pane

0x4d2e,	// (0x000341ce) bg_tb_trans_pane_g1

0x4d3e,	// (0x000341de) bg_tb_trans_pane_g2

0x4d36,	// (0x000341d6) bg_tb_trans_pane_g3

0x4d4e,	// (0x000341ee) bg_tb_trans_pane_g4

0x4d46,	// (0x000341e6) bg_tb_trans_pane_g5

0x4d6e,	// (0x0003420e) bg_tb_trans_pane_g6

0x4d66,	// (0x00034206) bg_tb_trans_pane_g7

0x4d56,	// (0x000341f6) bg_tb_trans_pane_g8

0x4d5e,	// (0x000341fe) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x0003f0ed) bg_tb_trans_pane_g

0x73f9,	// (0x00036899) cell_toolbar_trans_pane_ParamLimits

0x73f9,	// (0x00036899) cell_toolbar_trans_pane

0x6ae3,	// (0x00035f83) cell_toolbar_trans_pane_g1

0xba78,	// (0x0003af18) list_form2_midp_pane_t1

0xba86,	// (0x0003af26) list_form2_midp_pane_t2

0x0001,

0xfaf6,	// (0x0003ef96) list_form2_midp_pane_t

0x6840,	// (0x00035ce0) scroll_pane_cp51_ParamLimits

0x69b7,	// (0x00035e57) form2_midp_wait_pane_g1

0x69c0,	// (0x00035e60) form2_midp_wait_pane_g2

0x69c9,	// (0x00035e69) form2_midp_wait_pane_g3

0x0002,

0xfb0b,	// (0x0003efab) form2_midp_wait_pane_g

0x38e2,	// (0x00032d82) list_highlight_pane_cp21_ParamLimits

0x69e9,	// (0x00035e89) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x69f8,	// (0x00035e98) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb61c,	// (0x0003aabc) list_single_2graphic_im_pane_ParamLimits

0xb61c,	// (0x0003aabc) list_single_2graphic_im_pane

0x741f,	// (0x000368bf) list_single_2graphic_im_pane_g1_ParamLimits

0x741f,	// (0x000368bf) list_single_2graphic_im_pane_g1

0x7430,	// (0x000368d0) list_single_2graphic_im_pane_g2_ParamLimits

0x7430,	// (0x000368d0) list_single_2graphic_im_pane_g2

0x743c,	// (0x000368dc) list_single_2graphic_im_pane_g3_ParamLimits

0x743c,	// (0x000368dc) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x0003f100) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x0003f100) list_single_2graphic_im_pane_g

0x745c,	// (0x000368fc) list_single_2graphic_im_pane_t1_ParamLimits

0x745c,	// (0x000368fc) list_single_2graphic_im_pane_t1

0x6fa7,	// (0x00036447) list_single_graphic_2heading_pane_fp_ParamLimits

0x6fa7,	// (0x00036447) list_single_graphic_2heading_pane_fp

0x91fb,	// (0x0003869b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x91fb,	// (0x0003869b) list_single_graphic_2heading_pane_fp_g1

0x6fbd,	// (0x0003645d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6fbd,	// (0x0003645d) list_single_graphic_2heading_pane_fp_g2

0x3f37,	// (0x000333d7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3f37,	// (0x000333d7) list_single_graphic_2heading_pane_fp_g3

0x3f43,	// (0x000333e3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3f43,	// (0x000333e3) list_single_graphic_2heading_pane_fp_g4

0x6fc9,	// (0x00036469) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6fc9,	// (0x00036469) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003f02e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003f02e) list_single_graphic_2heading_pane_fp_g

0x9344,	// (0x000387e4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x9344,	// (0x000387e4) list_single_graphic_2heading_pane_fp_t1

0x9233,	// (0x000386d3) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x9233,	// (0x000386d3) list_single_graphic_2heading_pane_fp_t2

0x935a,	// (0x000387fa) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x935a,	// (0x000387fa) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0003f109) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0003f109) list_single_graphic_2heading_pane_fp_t

0x6b6f,	// (0x0003600f) fep_hwr_write_pane_g5_ParamLimits

0x6b6f,	// (0x0003600f) fep_hwr_write_pane_g5

0x6b7b,	// (0x0003601b) fep_hwr_write_pane_g6_ParamLimits

0x6b7b,	// (0x0003601b) fep_hwr_write_pane_g6

0x723c,	// (0x000366dc) eswt_shell_pane_ParamLimits

0x4da2,	// (0x00034242) bg_popup_window_pane_cp18_ParamLimits

0x5da2,	// (0x00035242) heading_pane_cp70

0x7366,	// (0x00036806) popup_eswt_tasktip_window_t1_ParamLimits

0xab8c,	// (0x0003a02c) aid_touch_tab_arrow_left

0xab9b,	// (0x0003a03b) aid_touch_tab_arrow_right

0x988e,	// (0x00038d2e) title_pane_g3_ParamLimits

0x988e,	// (0x00038d2e) title_pane_g3

0x3ee8,	// (0x00033388) set_value_pane_g1

0xaa8c,	// (0x00039f2c) popup_toolbar_trans_pane_ParamLimits

0x73d3,	// (0x00036873) aid_size_cell_tb_trans_pane_ParamLimits

0x3f29,	// (0x000333c9) bg_tb_trans_pane_ParamLimits

0x73e5,	// (0x00036885) grid_tb_trans_pane_ParamLimits

0x3a15,	// (0x00032eb5) cont_note_pane_ParamLimits

0x3a15,	// (0x00032eb5) cont_note_pane

0x3ca4,	// (0x00033144) cont_snote2_single_text_pane_ParamLimits

0x3ca4,	// (0x00033144) cont_snote2_single_text_pane

0x3ca4,	// (0x00033144) cont_snote2_single_graphic_pane_ParamLimits

0x3ca4,	// (0x00033144) cont_snote2_single_graphic_pane

0x52b2,	// (0x00034752) cont_note_wait_pane_ParamLimits

0x52b2,	// (0x00034752) cont_note_wait_pane

0x52b2,	// (0x00034752) cont_note_image_pane_ParamLimits

0x52b2,	// (0x00034752) cont_note_image_pane

0xc307,	// (0x0003b7a7) popup_note2_window_g1_ParamLimits

0xc307,	// (0x0003b7a7) popup_note2_window_g1

0xc338,	// (0x0003b7d8) popup_note2_window_t1_ParamLimits

0xc338,	// (0x0003b7d8) popup_note2_window_t1

0xc37d,	// (0x0003b81d) popup_note2_window_t2_ParamLimits

0xc37d,	// (0x0003b81d) popup_note2_window_t2

0xc3c2,	// (0x0003b862) popup_note2_window_t3_ParamLimits

0xc3c2,	// (0x0003b862) popup_note2_window_t3

0xc407,	// (0x0003b8a7) popup_note2_window_t4_ParamLimits

0xc407,	// (0x0003b8a7) popup_note2_window_t4

0x3a8d,	// (0x00032f2d) popup_note2_window_t5_ParamLimits

0x3a8d,	// (0x00032f2d) popup_note2_window_t5

0x0004,

0xfc75,	// (0x0003f115) popup_note2_window_t_ParamLimits

0xfc75,	// (0x0003f115) popup_note2_window_t

0xc436,	// (0x0003b8d6) popup_note2_image_window_g1_ParamLimits

0xc436,	// (0x0003b8d6) popup_note2_image_window_g1

0xc442,	// (0x0003b8e2) popup_note2_image_window_g2_ParamLimits

0xc442,	// (0x0003b8e2) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x0003f120) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x0003f120) popup_note2_image_window_g

0xc454,	// (0x0003b8f4) popup_note2_image_window_t1_ParamLimits

0xc454,	// (0x0003b8f4) popup_note2_image_window_t1

0xc46c,	// (0x0003b90c) popup_note2_image_window_t2_ParamLimits

0xc46c,	// (0x0003b90c) popup_note2_image_window_t2

0xc484,	// (0x0003b924) popup_note2_image_window_t3_ParamLimits

0xc484,	// (0x0003b924) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x0003f125) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x0003f125) popup_note2_image_window_t

0x52c0,	// (0x00034760) popup_note2_wait_window_g1_ParamLimits

0x52c0,	// (0x00034760) popup_note2_wait_window_g1

0xc4a0,	// (0x0003b940) popup_note2_wait_window_g2_ParamLimits

0xc4a0,	// (0x0003b940) popup_note2_wait_window_g2

0x52d8,	// (0x00034778) popup_note2_wait_window_g3_ParamLimits

0x52d8,	// (0x00034778) popup_note2_wait_window_g3

0x0002,

0xfc8c,	// (0x0003f12c) popup_note2_wait_window_g_ParamLimits

0xfc8c,	// (0x0003f12c) popup_note2_wait_window_g

0xc4ac,	// (0x0003b94c) popup_note2_wait_window_t1_ParamLimits

0xc4ac,	// (0x0003b94c) popup_note2_wait_window_t1

0xc4ca,	// (0x0003b96a) popup_note2_wait_window_t2_ParamLimits

0xc4ca,	// (0x0003b96a) popup_note2_wait_window_t2

0xc4e8,	// (0x0003b988) popup_note2_wait_window_t3_ParamLimits

0xc4e8,	// (0x0003b988) popup_note2_wait_window_t3

0xc4fa,	// (0x0003b99a) popup_note2_wait_window_t4_ParamLimits

0xc4fa,	// (0x0003b99a) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0003f133) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0003f133) popup_note2_wait_window_t

0xc50c,	// (0x0003b9ac) wait_bar2_pane_ParamLimits

0xc50c,	// (0x0003b9ac) wait_bar2_pane

0xc524,	// (0x0003b9c4) popup_snote2_single_text_window_g1_ParamLimits

0xc524,	// (0x0003b9c4) popup_snote2_single_text_window_g1

0xc54c,	// (0x0003b9ec) popup_snote2_single_text_window_t1_ParamLimits

0xc54c,	// (0x0003b9ec) popup_snote2_single_text_window_t1

0xc598,	// (0x0003ba38) popup_snote2_single_text_window_t2_ParamLimits

0xc598,	// (0x0003ba38) popup_snote2_single_text_window_t2

0xc5e4,	// (0x0003ba84) popup_snote2_single_text_window_t3_ParamLimits

0xc5e4,	// (0x0003ba84) popup_snote2_single_text_window_t3

0xc625,	// (0x0003bac5) popup_snote2_single_text_window_t4_ParamLimits

0xc625,	// (0x0003bac5) popup_snote2_single_text_window_t4

0xc65b,	// (0x0003bafb) popup_snote2_single_text_window_t5_ParamLimits

0xc65b,	// (0x0003bafb) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0003f13c) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0003f13c) popup_snote2_single_text_window_t

0xc686,	// (0x0003bb26) popup_snote2_single_graphic_window_g1_ParamLimits

0xc686,	// (0x0003bb26) popup_snote2_single_graphic_window_g1

0xc6ae,	// (0x0003bb4e) popup_snote2_single_graphic_window_g2_ParamLimits

0xc6ae,	// (0x0003bb4e) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0003f147) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0003f147) popup_snote2_single_graphic_window_g

0xc6d6,	// (0x0003bb76) popup_snote2_single_graphic_window_t1_ParamLimits

0xc6d6,	// (0x0003bb76) popup_snote2_single_graphic_window_t1

0xc722,	// (0x0003bbc2) popup_snote2_single_graphic_window_t2_ParamLimits

0xc722,	// (0x0003bbc2) popup_snote2_single_graphic_window_t2

0xc5e4,	// (0x0003ba84) popup_snote2_single_graphic_window_t3_ParamLimits

0xc5e4,	// (0x0003ba84) popup_snote2_single_graphic_window_t3

0xc625,	// (0x0003bac5) popup_snote2_single_graphic_window_t4_ParamLimits

0xc625,	// (0x0003bac5) popup_snote2_single_graphic_window_t4

0xc65b,	// (0x0003bafb) popup_snote2_single_graphic_window_t5_ParamLimits

0xc65b,	// (0x0003bafb) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0003f14c) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0003f14c) popup_snote2_single_graphic_window_t

0x67d4,	// (0x00035c74) clock_nsta_pane_cp2_t1

0x67d4,	// (0x00035c74) clock_nsta_pane_cp2_t2

0x0001,

0xfacc,	// (0x0003ef6c) clock_nsta_pane_cp2_t

0x8bbd,	// (0x0003805d) form_field_data_wide_pane_g1_ParamLimits

0x3f37,	// (0x000333d7) form_field_data_wide_pane_g2_ParamLimits

0x3f37,	// (0x000333d7) form_field_data_wide_pane_g2

0x3f43,	// (0x000333e3) form_field_data_wide_pane_g3_ParamLimits

0x3f43,	// (0x000333e3) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0003eb26) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0003eb26) form_field_data_wide_pane_g

0xb934,	// (0x0003add4) grid_touch_3_pane_ParamLimits

0xb934,	// (0x0003add4) grid_touch_3_pane

0xd9e1,	// (0x0003ce81) cell_touch_3_pane_ParamLimits

0xd9e1,	// (0x0003ce81) cell_touch_3_pane

0x6ae3,	// (0x00035f83) cell_touch_3_pane_g1

0x6ae3,	// (0x00035f83) cell_touch_3_pane_g2

0x0001,

0xfb51,	// (0x0003eff1) cell_touch_3_pane_g

0x3abf,	// (0x00032f5f) cont_query_data_pane

0x3ac7,	// (0x00032f67) cont_query_data_pane_cp1

0xc76e,	// (0x0003bc0e) button_value_adjust_pane_cp7

0xc776,	// (0x0003bc16) query_popup_pane_cp3

0x44b9,	// (0x00033959) bg_popup_sub_pane_cp22_ParamLimits

0xa02f,	// (0x000394cf) navi_navi_volume_pane_cp2

0xa047,	// (0x000394e7) popup_side_volume_key_window_g2

0xa053,	// (0x000394f3) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0003ebbc) popup_side_volume_key_window_g

0xa06d,	// (0x0003950d) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0003ebc3) popup_side_volume_key_window_t

0x46fa,	// (0x00033b9a) popup_side_volume_key_window_ParamLimits

0x9beb,	// (0x0003908b) list_double_graphic_pane_g4_ParamLimits

0x9beb,	// (0x0003908b) list_double_graphic_pane_g4

0xb661,	// (0x0003ab01) list_single_2heading_msg_pane_ParamLimits

0xb661,	// (0x0003ab01) list_single_2heading_msg_pane

0xc787,	// (0x0003bc27) list_single_2heading_msg_pane_g1_ParamLimits

0xc787,	// (0x0003bc27) list_single_2heading_msg_pane_g1

0x483f,	// (0x00033cdf) list_single_2heading_msg_pane_g2_ParamLimits

0x483f,	// (0x00033cdf) list_single_2heading_msg_pane_g2

0xc793,	// (0x0003bc33) list_single_2heading_msg_pane_g3_ParamLimits

0xc793,	// (0x0003bc33) list_single_2heading_msg_pane_g3

0xc79f,	// (0x0003bc3f) list_single_2heading_msg_pane_g4_ParamLimits

0xc79f,	// (0x0003bc3f) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0003f157) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0003f157) list_single_2heading_msg_pane_g

0x937a,	// (0x0003881a) list_single_2heading_msg_pane_t1_ParamLimits

0x937a,	// (0x0003881a) list_single_2heading_msg_pane_t1

0x93a2,	// (0x00038842) list_single_2heading_msg_pane_t2_ParamLimits

0x93a2,	// (0x00038842) list_single_2heading_msg_pane_t2

0x93d6,	// (0x00038876) list_single_2heading_msg_pane_t3_ParamLimits

0x93d6,	// (0x00038876) list_single_2heading_msg_pane_t3

0x940f,	// (0x000388af) list_single_2heading_msg_pane_t4_ParamLimits

0x940f,	// (0x000388af) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0003f160) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0003f160) list_single_2heading_msg_pane_t

0x3890,	// (0x00032d30) title_pane_g4_ParamLimits

0x3890,	// (0x00032d30) title_pane_g4

0x9d1e,	// (0x000391be) title_pane_stacon_g3_ParamLimits

0x9d1e,	// (0x000391be) title_pane_stacon_g3

0x7450,	// (0x000368f0) list_single_2graphic_im_pane_g4_ParamLimits

0x7450,	// (0x000368f0) list_single_2graphic_im_pane_g4

0x5bd4,	// (0x00035074) popup_side_volume_key_window_cp

0x60bc,	// (0x0003555c) main_idle_act2_pane_t1

0xae8a,	// (0x0003a32a) toolbar_button_pane_g10

0x9b8b,	// (0x0003902b) popup_toolbar_window_cp1

0x67c5,	// (0x00035c65) clock_nsta_pane_cp_t1

0x67c5,	// (0x00035c65) clock_nsta_pane_cp_t2

0x0001,

0xfac7,	// (0x0003ef67) clock_nsta_pane_cp_t

0xa02f,	// (0x000394cf) navi_navi_volume_pane_cp2_ParamLimits

0xa03b,	// (0x000394db) popup_side_volume_key_window_g1_ParamLimits

0xa047,	// (0x000394e7) popup_side_volume_key_window_g2_ParamLimits

0xa053,	// (0x000394f3) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0003ebbc) popup_side_volume_key_window_g_ParamLimits

0xbc38,	// (0x0003b0d8) fep_hwr_aid_pane

0xd9b9,	// (0x0003ce59) bg_fep_hwr_top_pane_g4_ParamLimits

0x6b51,	// (0x00035ff1) fep_hwr_top_pane_g1_ParamLimits

0x6b3f,	// (0x00035fdf) fep_hwr_top_pane_g2_ParamLimits

0xbcf1,	// (0x0003b191) fep_hwr_top_pane_g3_ParamLimits

0xfb1c,	// (0x0003efbc) fep_hwr_top_pane_g_ParamLimits

0xbd06,	// (0x0003b1a6) fep_hwr_top_text_pane_ParamLimits

0x59b2,	// (0x00034e52) aid_touch_tab_arrow_arrow_2

0x59a9,	// (0x00034e49) aid_touch_tab_arrow_left_2

0xbc4c,	// (0x0003b0ec) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xbc83,	// (0x0003b123) fep_hwr_prediction_pane

0x6c7e,	// (0x0003611e) fep_vkb_prediction_pane

0xbf1a,	// (0x0003b3ba) fep_vkb_side_pane_g3_ParamLimits

0xbf1a,	// (0x0003b3ba) fep_vkb_side_pane_g3

0x6cb6,	// (0x00036156) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x703d,	// (0x000364dd) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x704a,	// (0x000364ea) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0003f066) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc7b7,	// (0x0003bc57) fep_hwr_prediction_pane_g1

0xc7c1,	// (0x0003bc61) fep_hwr_prediction_pane_g2

0xc7c9,	// (0x0003bc69) fep_hwr_prediction_pane_g3

0xc7d1,	// (0x0003bc71) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003f169) fep_hwr_prediction_pane_g

0xc7b7,	// (0x0003bc57) fep_vkb_prediction_pane_g1

0xc7d9,	// (0x0003bc79) fep_vkb_prediction_pane_g2

0xc7e1,	// (0x0003bc81) fep_vkb_prediction_pane_g3

0xc7e9,	// (0x0003bc89) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0003f172) fep_vkb_prediction_pane_g

0x6bc3,	// (0x00036063) slider_set_pane_g3

0x6bd7,	// (0x00036077) slider_set_pane_g4

0x6bef,	// (0x0003608f) slider_set_pane_g5

0x6bc3,	// (0x00036063) slider_set_pane_g6

0xb478,	// (0x0003a918) slider_set_pane_g7

0x5e27,	// (0x000352c7) slider_form_pane_g3

0x5e30,	// (0x000352d0) slider_form_pane_g4

0x5e38,	// (0x000352d8) slider_form_pane_g5

0x5e27,	// (0x000352c7) slider_form_pane_g6

0xb5e5,	// (0x0003aa85) slider_form_pane_g7

0x6332,	// (0x000357d2) slider_set_pane_vc_g3

0x633b,	// (0x000357db) slider_set_pane_vc_g4

0x6344,	// (0x000357e4) slider_set_pane_vc_g5

0x6332,	// (0x000357d2) slider_set_pane_vc_g6

0x634d,	// (0x000357ed) slider_set_pane_vc_g7

0x64fd,	// (0x0003599d) slider_form_pane_vc_g1

0x6506,	// (0x000359a6) slider_form_pane_vc_g2

0x650f,	// (0x000359af) slider_form_pane_vc_g3

0x64fd,	// (0x0003599d) slider_form_pane_vc_g4

0x6518,	// (0x000359b8) slider_form_pane_vc_g5

0x0004,

0xfa99,	// (0x0003ef39) slider_form_pane_vc_g

0x3872,	// (0x00032d12) main_idle_act3_pane

0xc7f1,	// (0x0003bc91) ai3_links_pane

0xda26,	// (0x0003cec6) popup_ai3_data_window_ParamLimits

0xda26,	// (0x0003cec6) popup_ai3_data_window

0x3872,	// (0x00032d12) grid_ai3_links_pane

0xda3e,	// (0x0003cede) cell_ai3_links_pane_ParamLimits

0xda3e,	// (0x0003cede) cell_ai3_links_pane

0xc7fa,	// (0x0003bc9a) bg_popup_sub_pane_cp11

0xc807,	// (0x0003bca7) cell_ai3_links_pane_g1

0x3872,	// (0x00032d12) bg_popup_sub_pane_cp12

0xc82c,	// (0x0003bccc) heading_ai3_data_pane

0xc834,	// (0x0003bcd4) list_ai3_gene_pane

0xc840,	// (0x0003bce0) popup_ai3_data_window_g1

0xc848,	// (0x0003bce8) heading_ai3_data_pane_g1

0xc850,	// (0x0003bcf0) heading_ai3_data_pane_t1

0xc85e,	// (0x0003bcfe) list_double_ai3_gene_pane_ParamLimits

0xc85e,	// (0x0003bcfe) list_double_ai3_gene_pane

0xc86b,	// (0x0003bd0b) list_single_ai3_gene_pane_ParamLimits

0xc86b,	// (0x0003bd0b) list_single_ai3_gene_pane

0x6aa8,	// (0x00035f48) list_highlight_pane_cp7_ParamLimits

0x6aa8,	// (0x00035f48) list_highlight_pane_cp7

0xc878,	// (0x0003bd18) list_single_a13_gene_pane_t1_ParamLimits

0xc878,	// (0x0003bd18) list_single_a13_gene_pane_t1

0xc88f,	// (0x0003bd2f) list_single_ai3_gene_pane_g1

0xc898,	// (0x0003bd38) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0003f17b) list_single_ai3_gene_pane_g

0xc8a0,	// (0x0003bd40) list_double_ai3_gene_pane_g1_ParamLimits

0xc8a0,	// (0x0003bd40) list_double_ai3_gene_pane_g1

0xc8ac,	// (0x0003bd4c) list_double_ai3_gene_pane_t1_ParamLimits

0xc8ac,	// (0x0003bd4c) list_double_ai3_gene_pane_t1

0xc8c8,	// (0x0003bd68) list_double_ai3_gene_pane_t2_ParamLimits

0xc8c8,	// (0x0003bd68) list_double_ai3_gene_pane_t2

0xc8dd,	// (0x0003bd7d) list_double_ai3_gene_pane_t3_ParamLimits

0xc8dd,	// (0x0003bd7d) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0003f180) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0003f180) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9370,	// (0x00038810) aid_size_min_col_2

0xda12,	// (0x0003ceb2) aid_size_min_msg_ParamLimits

0xda12,	// (0x0003ceb2) aid_size_min_msg

0xbf2e,	// (0x0003b3ce) fep_vkb_top_text_pane_g2_ParamLimits

0xbf2e,	// (0x0003b3ce) fep_vkb_top_text_pane_g2

0x0001,

0xfb4c,	// (0x0003efec) fep_vkb_top_text_pane_g_ParamLimits

0xfb4c,	// (0x0003efec) fep_vkb_top_text_pane_g

0x3872,	// (0x00032d12) main_hc_apps_shell_pane

0xc8fa,	// (0x0003bd9a) grid_hc_apps_pane_ParamLimits

0xc8fa,	// (0x0003bd9a) grid_hc_apps_pane

0xc909,	// (0x0003bda9) list_hc_apps_pane

0xc911,	// (0x0003bdb1) scroll_pane_cp37_ParamLimits

0xc911,	// (0x0003bdb1) scroll_pane_cp37

0xda56,	// (0x0003cef6) cell_hc_apps_pane_ParamLimits

0xda56,	// (0x0003cef6) cell_hc_apps_pane

0xdb04,	// (0x0003cfa4) cell_hc_apps_pane_g1_ParamLimits

0xdb04,	// (0x0003cfa4) cell_hc_apps_pane_g1

0xc91d,	// (0x0003bdbd) cell_hc_apps_pane_g2_ParamLimits

0xc91d,	// (0x0003bdbd) cell_hc_apps_pane_g2

0xc939,	// (0x0003bdd9) cell_hc_apps_pane_g3_ParamLimits

0xc939,	// (0x0003bdd9) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0003f187) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0003f187) cell_hc_apps_pane_g

0xdb35,	// (0x0003cfd5) cell_hc_apps_pane_t1_ParamLimits

0xdb35,	// (0x0003cfd5) cell_hc_apps_pane_t1

0x3a15,	// (0x00032eb5) grid_highlight_pane_cp10_ParamLimits

0x3a15,	// (0x00032eb5) grid_highlight_pane_cp10

0xdb75,	// (0x0003d015) list_single_hc_apps_pane_ParamLimits

0xdb75,	// (0x0003d015) list_single_hc_apps_pane

0xdbdd,	// (0x0003d07d) list_single_hc_apps_pane_g1

0xc95b,	// (0x0003bdfb) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0003f18e) list_single_hc_apps_pane_g

0xc974,	// (0x0003be14) list_single_hc_apps_pane_g2_copy1

0x9434,	// (0x000388d4) list_single_hc_apps_pane_t1

0x38e2,	// (0x00032d82) bg_set_opt_pane_cp_ParamLimits

0x993e,	// (0x00038dde) setting_slider_pane_t1_ParamLimits

0x9957,	// (0x00038df7) setting_slider_pane_t2_ParamLimits

0x9971,	// (0x00038e11) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0003ea04) setting_slider_pane_t_ParamLimits

0x9989,	// (0x00038e29) slider_set_pane_ParamLimits

0xa474,	// (0x00039914) control_pane_g5_ParamLimits

0xa474,	// (0x00039914) control_pane_g5

0x5de9,	// (0x00035289) slider_set_pane_g1_ParamLimits

0xb46c,	// (0x0003a90c) slider_set_pane_g2_ParamLimits

0x6bc3,	// (0x00036063) slider_set_pane_g3_ParamLimits

0x6bd7,	// (0x00036077) slider_set_pane_g4_ParamLimits

0x6bef,	// (0x0003608f) slider_set_pane_g5_ParamLimits

0x6bc3,	// (0x00036063) slider_set_pane_g6_ParamLimits

0xb478,	// (0x0003a918) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0003ee0a) slider_set_pane_g_ParamLimits

0x479e,	// (0x00033c3e) navi_icon_text_pane_ParamLimits

0xab62,	// (0x0003a002) aid_fill_nsta_2_ParamLimits

0xab8c,	// (0x0003a02c) aid_touch_tab_arrow_left_ParamLimits

0xab9b,	// (0x0003a03b) aid_touch_tab_arrow_right_ParamLimits

0xac08,	// (0x0003a0a8) clock_nsta_pane_ParamLimits

0x599d,	// (0x00034e3d) navi_icon_pane_g1_ParamLimits

0xb335,	// (0x0003a7d5) navi_text_pane_t1_ParamLimits

0x681a,	// (0x00035cba) navi_icon_text_pane_g1_ParamLimits

0x6826,	// (0x00035cc6) navi_icon_text_pane_t1_ParamLimits

0xdbdd,	// (0x0003d07d) list_single_hc_apps_pane_g1_ParamLimits

0xc95b,	// (0x0003bdfb) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0003f18e) list_single_hc_apps_pane_g_ParamLimits

0xc974,	// (0x0003be14) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9434,	// (0x000388d4) list_single_hc_apps_pane_t1_ParamLimits

0x978c,	// (0x00038c2c) popup_toolbar2_fixed_window_ParamLimits

0x978c,	// (0x00038c2c) popup_toolbar2_fixed_window

0xaa82,	// (0x00039f22) popup_toolbar2_float_window

0x3872,	// (0x00032d12) bg_popup_sub_pane_cp27

0xc990,	// (0x0003be30) grid_toolbar2_float_pane

0x3872,	// (0x00032d12) bg_popup_sub_pane_cp26

0xc990,	// (0x0003be30) grid_toolbar2_fixed_pane

0xdbf6,	// (0x0003d096) cell_toolbar2_fixed_pane_ParamLimits

0xdbf6,	// (0x0003d096) cell_toolbar2_fixed_pane

0xdc07,	// (0x0003d0a7) cell_toolbar2_fixed_pane_g1

0x1830,	// (0x00030cd0) toolbar2_fixed_button_pane

0x4d2e,	// (0x000341ce) toolbar2_fixed_button_pane_g1

0x4d3e,	// (0x000341de) toolbar2_fixed_button_pane_g2

0x4d36,	// (0x000341d6) toolbar2_fixed_button_pane_g3

0x4d4e,	// (0x000341ee) toolbar2_fixed_button_pane_g4

0x4d46,	// (0x000341e6) toolbar2_fixed_button_pane_g5

0x4d56,	// (0x000341f6) toolbar2_fixed_button_pane_g6

0x4d5e,	// (0x000341fe) toolbar2_fixed_button_pane_g7

0x4d6e,	// (0x0003420e) toolbar2_fixed_button_pane_g8

0x4d66,	// (0x00034206) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0003ed0c) toolbar2_fixed_button_pane_g

0xc998,	// (0x0003be38) cell_toolbar2_float_pane_ParamLimits

0xc998,	// (0x0003be38) cell_toolbar2_float_pane

0xc9ac,	// (0x0003be4c) cell_toolbar2_float_pane_g1

0x1830,	// (0x00030cd0) toolbar2_fixed_button_pane_cp

0xbe16,	// (0x0003b2b6) fep_vkb_accented_list_pane_ParamLimits

0xbe16,	// (0x0003b2b6) fep_vkb_accented_list_pane

0xc009,	// (0x0003b4a9) bg_popup_fep_shadow_pane_g9

0x48fa,	// (0x00033d9a) bg_popup_fep_shadow_pane_cp3

0x403c,	// (0x000334dc) list_accented_list_pane

0xc9b5,	// (0x0003be55) list_single_accented_list_pane_ParamLimits

0xc9b5,	// (0x0003be55) list_single_accented_list_pane

0x48fa,	// (0x00033d9a) list_highlight_pane_cp10

0xc9c6,	// (0x0003be66) list_single_accented_list_pane_t1

0xa9d2,	// (0x00039e72) popup_slider_window_ParamLimits

0xa9d2,	// (0x00039e72) popup_slider_window

0xc77e,	// (0x0003bc1e) aid_indentation_list_msg

0xdcbc,	// (0x0003d15c) bg_popup_window_pane_cp19

0xca32,	// (0x0003bed2) popup_slider_window_g1

0xca4e,	// (0x0003beee) popup_slider_window_g2

0xca6a,	// (0x0003bf0a) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0003f193) popup_slider_window_g

0xca86,	// (0x0003bf26) popup_slider_window_t1

0xcacc,	// (0x0003bf6c) small_volume_slider_vertical_pane

0x6ae3,	// (0x00035f83) small_volume_slider_vertical_pane_g1

0x6ae3,	// (0x00035f83) small_volume_slider_vertical_pane_g2

0xcae8,	// (0x0003bf88) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0003f1a5) small_volume_slider_vertical_pane_g

0x955c,	// (0x000389fc) area_side_right_pane_ParamLimits

0x955c,	// (0x000389fc) area_side_right_pane

0xcaf1,	// (0x0003bf91) aid_size_side_button_ParamLimits

0xcaf1,	// (0x0003bf91) aid_size_side_button

0xcb05,	// (0x0003bfa5) grid_sctrl_middle_pane_ParamLimits

0xcb05,	// (0x0003bfa5) grid_sctrl_middle_pane

0xcb24,	// (0x0003bfc4) sctrl_sk_bottom_pane

0xcb35,	// (0x0003bfd5) sctrl_sk_top_pane

0xcb47,	// (0x0003bfe7) aid_touch_sctrl_top

0x3a15,	// (0x00032eb5) bg_sctrl_sk_pane_ParamLimits

0x3a15,	// (0x00032eb5) bg_sctrl_sk_pane

0xcb54,	// (0x0003bff4) sctrl_sk_top_pane_g1

0xcb61,	// (0x0003c001) sctrl_sk_top_pane_t1

0xcb47,	// (0x0003bfe7) aid_touch_sctrl_bottom

0x3a15,	// (0x00032eb5) bg_sctrl_sk_pane_cp_ParamLimits

0x3a15,	// (0x00032eb5) bg_sctrl_sk_pane_cp

0xcb7c,	// (0x0003c01c) sctrl_sk_bottom_pane_g1

0xcb61,	// (0x0003c001) sctrl_sk_bottom_pane_t1

0xcb85,	// (0x0003c025) cell_sctrl_middle_pane_ParamLimits

0xcb85,	// (0x0003c025) cell_sctrl_middle_pane

0xcba0,	// (0x0003c040) aid_touch_sctrl_middle_ParamLimits

0xcba0,	// (0x0003c040) aid_touch_sctrl_middle

0x3f29,	// (0x000333c9) bg_sctrl_middle_pane_ParamLimits

0x3f29,	// (0x000333c9) bg_sctrl_middle_pane

0x6cb6,	// (0x00036156) cell_sctrl_middle_pane_g1_ParamLimits

0x6cb6,	// (0x00036156) cell_sctrl_middle_pane_g1

0xcbb2,	// (0x0003c052) cell_sctrl_middle_pane_g2_ParamLimits

0xcbb2,	// (0x0003c052) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0003f1b1) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0003f1b1) cell_sctrl_middle_pane_g

0x4d2e,	// (0x000341ce) bg_sctrl_middle_pane_g1

0x4d3e,	// (0x000341de) bg_sctrl_middle_pane_g2

0x4d36,	// (0x000341d6) bg_sctrl_middle_pane_g3

0x4d4e,	// (0x000341ee) bg_sctrl_middle_pane_g4

0x4d46,	// (0x000341e6) bg_sctrl_middle_pane_g5

0x4d56,	// (0x000341f6) bg_sctrl_middle_pane_g6

0x4d5e,	// (0x000341fe) bg_sctrl_middle_pane_g7

0x4d6e,	// (0x0003420e) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0003f1b6) bg_sctrl_middle_pane_g

0x4d66,	// (0x00034206) bg_sctrl_middle_pane_g8_copy1

0x4d2e,	// (0x000341ce) bg_sctrl_sk_pane_g1

0x4d3e,	// (0x000341de) bg_sctrl_sk_pane_g2

0x4d36,	// (0x000341d6) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0003ed0c) bg_sctrl_sk_pane_g

0x3e62,	// (0x00033302) aid_size_touch_scroll_bar

0x4d4e,	// (0x000341ee) bg_sctrl_sk_pane_g4

0x4d46,	// (0x000341e6) bg_sctrl_sk_pane_g5

0x4d56,	// (0x000341f6) bg_sctrl_sk_pane_g6

0x4d5e,	// (0x000341fe) bg_sctrl_sk_pane_g7

0x4d6e,	// (0x0003420e) bg_sctrl_sk_pane_g8

0x4d66,	// (0x00034206) bg_sctrl_sk_pane_g9

0xa643,	// (0x00039ae3) popup_fep_china_hwr2_fs_candidate_window

0xa64d,	// (0x00039aed) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa64d,	// (0x00039aed) popup_fep_china_hwr2_fs_control_window

0x6cb6,	// (0x00036156) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0003f1ac) sctrl_sk_top_pane_g

0xdd36,	// (0x0003d1d6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdd36,	// (0x0003d1d6) aid_fep_china_hwr2_fs_cell

0xdd48,	// (0x0003d1e8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdd48,	// (0x0003d1e8) bg_popup_fep_shadow_pane_cp4

0xdd5f,	// (0x0003d1ff) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdd5f,	// (0x0003d1ff) bg_popup_fep_shadow_pane_cp5

0xdd71,	// (0x0003d211) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdd71,	// (0x0003d211) popup_fep_china_hwr2_fs_control_bar_grid

0xdd81,	// (0x0003d221) popup_fep_china_hwr2_fs_control_funtion_grid

0xcbc2,	// (0x0003c062) aid_fep_china_hwr2_fs_candi_cell

0x3872,	// (0x00032d12) bg_popup_fep_shadow_pane_cp6

0xcbcc,	// (0x0003c06c) popup_fep_china_hwr2_fs_candidate_grid

0xdd89,	// (0x0003d229) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdd89,	// (0x0003d229) cell_fep_china_hwr2_fs_funtion_grid

0x6ae3,	// (0x00035f83) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcbd6,	// (0x0003c076) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcbd6,	// (0x0003c076) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcbe4,	// (0x0003c084) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcbe4,	// (0x0003c084) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0003f1c7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0003f1c7) cell_fep_china_hwr2_fs_funtion_grid_g

0xdda1,	// (0x0003d241) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdda1,	// (0x0003d241) cell_fep_china_hwr2_fs_funtion_grid_t1

0xddb6,	// (0x0003d256) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xddb6,	// (0x0003d256) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0003f1cc) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0003f1cc) cell_fep_china_hwr2_fs_funtion_grid_t

0xcbfa,	// (0x0003c09a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcc02,	// (0x0003c0a2) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcc0a,	// (0x0003c0aa) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0003f1d1) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcc12,	// (0x0003c0b2) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcc12,	// (0x0003c0b2) cell_fep_china_hwr2_fs_candidate_grid

0xcc2b,	// (0x0003c0cb) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcc33,	// (0x0003c0d3) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6ae3,	// (0x00035f83) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6ae3,	// (0x00035f83) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb51,	// (0x0003eff1) cell_fep_china_hwr2_fs_candidate_grid_g

0xcc3b,	// (0x0003c0db) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4b7b,	// (0x0003401b) clock_nsta_pane_cp_24_ParamLimits

0x4b7b,	// (0x0003401b) clock_nsta_pane_cp_24

0x4be3,	// (0x00034083) indicator_nsta_pane_cp_24_ParamLimits

0x4be3,	// (0x00034083) indicator_nsta_pane_cp_24

0x58bb,	// (0x00034d5b) heading_pane_g1

0x0001,

0xf8d1,	// (0x0003ed71) heading_pane_g

0x5f49,	// (0x000353e9) grid_sct_catagory_button_pane

0x5ece,	// (0x0003536e) scroll_pane_cp5_ParamLimits

0x684c,	// (0x00035cec) button_value_adjust_pane_cp5_ParamLimits

0x684c,	// (0x00035cec) button_value_adjust_pane_cp5

0x690a,	// (0x00035daa) form2_midp_time_pane_ParamLimits

0xcc49,	// (0x0003c0e9) cell_sct_catagory_button_pane_ParamLimits

0xcc49,	// (0x0003c0e9) cell_sct_catagory_button_pane

0x6aa8,	// (0x00035f48) bg_button_pane_cp01_ParamLimits

0x6aa8,	// (0x00035f48) bg_button_pane_cp01

0x6ae3,	// (0x00035f83) cell_sct_catagory_button_pane_g1

0xaa11,	// (0x00039eb1) popup_tb_extension_window

0xddd2,	// (0x0003d272) aid_size_cell_ext_ParamLimits

0xddd2,	// (0x0003d272) aid_size_cell_ext

0x3a15,	// (0x00032eb5) bg_tb_trans_pane_cp1_ParamLimits

0x3a15,	// (0x00032eb5) bg_tb_trans_pane_cp1

0xddf2,	// (0x0003d292) grid_tb_ext_pane_ParamLimits

0xddf2,	// (0x0003d292) grid_tb_ext_pane

0xde24,	// (0x0003d2c4) cell_tb_ext_pane_ParamLimits

0xde24,	// (0x0003d2c4) cell_tb_ext_pane

0xde3b,	// (0x0003d2db) cell_tb_ext_pane_g1_ParamLimits

0xde3b,	// (0x0003d2db) cell_tb_ext_pane_g1

0xcc5b,	// (0x0003c0fb) cell_tb_ext_pane_t1

0x3a15,	// (0x00032eb5) list_highlight_pane_cp11_ParamLimits

0x3a15,	// (0x00032eb5) list_highlight_pane_cp11

0x97ab,	// (0x00038c4b) popup_uni_indicator_window_ParamLimits

0x97ab,	// (0x00038c4b) popup_uni_indicator_window

0x3f29,	// (0x000333c9) bg_popup_sub_pane_cp14

0xcc76,	// (0x0003c116) list_uniindi_pane

0xcc82,	// (0x0003c122) uniindi_top_pane

0x3a15,	// (0x00032eb5) bg_uniindi_top_pane

0xcca1,	// (0x0003c141) uniindi_top_pane_g1

0xccb7,	// (0x0003c157) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0003f1d8) uniindi_top_pane_g

0xcce1,	// (0x0003c181) uniindi_top_pane_t1

0xcd0b,	// (0x0003c1ab) list_single_uniindi_pane_ParamLimits

0xcd0b,	// (0x0003c1ab) list_single_uniindi_pane

0x6ae3,	// (0x00035f83) bg_uniindi_top_pane_g1

0xcd1e,	// (0x0003c1be) list_single_uniindi_pane_g1

0xcd31,	// (0x0003c1d1) list_single_uniindi_pane_t1

0x3872,	// (0x00032d12) control_bg_pane

0xcd56,	// (0x0003c1f6) bg_sctrl_sk_pane_cp1

0xcd5f,	// (0x0003c1ff) bg_sctrl_sk_pane_cp2

0xcd68,	// (0x0003c208) control_bg_pane_g1

0xcd71,	// (0x0003c211) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0003f1e1) control_bg_pane_g

0x6710,	// (0x00035bb0) cell_indicator_nsta_pane_g1_ParamLimits

0xb978,	// (0x0003ae18) cell_indicator_nsta_pane_g2_ParamLimits

0xfab5,	// (0x0003ef55) cell_indicator_nsta_pane_g_ParamLimits

0x91d1,	// (0x00038671) form2_midp_time_pane_t1_ParamLimits

0x3ca4,	// (0x00033144) main_idle_act4_pane_ParamLimits

0x3ca4,	// (0x00033144) main_idle_act4_pane

0xaa11,	// (0x00039eb1) popup_tb_extension_window_ParamLimits

0xde14,	// (0x0003d2b4) tb_ext_find_pane_ParamLimits

0xde14,	// (0x0003d2b4) tb_ext_find_pane

0xcd7a,	// (0x0003c21a) ai_gene_pane_1_cp1

0x498e,	// (0x00033e2e) ai_gene_pane_2_cp1

0xcd82,	// (0x0003c222) list_single_idle_plugin_calendar_pane

0xcd8b,	// (0x0003c22b) list_single_idle_plugin_notification_pane

0xcd94,	// (0x0003c234) list_single_idle_plugin_player_pane

0xde58,	// (0x0003d2f8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xde58,	// (0x0003d2f8) list_single_idle_plugin_shortcut_pane

0xde7a,	// (0x0003d31a) main_idle_act4_pane_t1

0xde8c,	// (0x0003d32c) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0003f1e6) main_idle_act4_pane_t

0xde9e,	// (0x0003d33e) middle_sk_idle_act4_pane_ParamLimits

0xde9e,	// (0x0003d33e) middle_sk_idle_act4_pane

0xdeb4,	// (0x0003d354) popup_clock_digital_analogue_window_cp2

0xdece,	// (0x0003d36e) shortcut_wheel_idle_act4_pane_ParamLimits

0xdece,	// (0x0003d36e) shortcut_wheel_idle_act4_pane

0x6ae3,	// (0x00035f83) shortcut_wheel_idle_act4_pane_g1

0x6ae3,	// (0x00035f83) shortcut_wheel_idle_act4_pane_g2

0x6ae3,	// (0x00035f83) shortcut_wheel_idle_act4_pane_g3

0x6ae3,	// (0x00035f83) shortcut_wheel_idle_act4_pane_g4

0x6ae3,	// (0x00035f83) shortcut_wheel_idle_act4_pane_g5

0xcd9d,	// (0x0003c23d) shortcut_wheel_idle_act4_pane_g6

0xcda5,	// (0x0003c245) shortcut_wheel_idle_act4_pane_g7

0xcdad,	// (0x0003c24d) shortcut_wheel_idle_act4_pane_g8

0xcdb5,	// (0x0003c255) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0003f1eb) shortcut_wheel_idle_act4_pane_g

0x6cb6,	// (0x00036156) middle_sk_idle_act4_pane_g1_ParamLimits

0x6cb6,	// (0x00036156) middle_sk_idle_act4_pane_g1

0xdf3e,	// (0x0003d3de) middle_sk_idle_act4_pane_g2_ParamLimits

0xdf3e,	// (0x0003d3de) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0003f20e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0003f20e) middle_sk_idle_act4_pane_g

0xdf4a,	// (0x0003d3ea) middle_sk_idle_act4_pane_t1_ParamLimits

0xdf4a,	// (0x0003d3ea) middle_sk_idle_act4_pane_t1

0xdf67,	// (0x0003d407) grid_ai_shortcut_pane_ParamLimits

0xdf67,	// (0x0003d407) grid_ai_shortcut_pane

0xdf80,	// (0x0003d420) list_highlight_pane_cp16_ParamLimits

0xdf80,	// (0x0003d420) list_highlight_pane_cp16

0xdf8d,	// (0x0003d42d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdf8d,	// (0x0003d42d) list_single_idle_plugin_shortcut_pane_g1

0xdf99,	// (0x0003d439) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdf99,	// (0x0003d439) list_single_idle_plugin_shortcut_pane_g2

0xdfb1,	// (0x0003d451) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdfb1,	// (0x0003d451) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0003f213) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0003f213) list_single_idle_plugin_shortcut_pane_g

0xdfc4,	// (0x0003d464) cell_ai_shortcut_pane_ParamLimits

0xdfc4,	// (0x0003d464) cell_ai_shortcut_pane

0xef99,	// (0x0003e439) cell_ai_shortcut_pane_g1_ParamLimits

0xef99,	// (0x0003e439) cell_ai_shortcut_pane_g1

0xcd7a,	// (0x0003c21a) ai_gene_pane_1_cp2

0xcdbd,	// (0x0003c25d) ai_gene_pane_2_cp2

0xcdc5,	// (0x0003c265) list_highlight_pane_cp15

0xcdce,	// (0x0003c26e) list_single_idle_plugin_calendar_pane_g1

0xcdc5,	// (0x0003c265) list_highlight_pane_cp17

0xcdd6,	// (0x0003c276) list_single_idle_plugin_calendar_pane_g1_copy1

0xcdde,	// (0x0003c27e) list_single_idle_plugin_player_pane_g1

0x615c,	// (0x000355fc) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0003f21a) list_single_idle_plugin_player_pane_g

0xcde6,	// (0x0003c286) list_single_idle_plugin_player_pane_t1

0xcdf4,	// (0x0003c294) list_single_idle_plugin_player_pane_t2

0xce02,	// (0x0003c2a2) list_single_idle_plugin_player_pane_t3

0xce10,	// (0x0003c2b0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0003f21f) list_single_idle_plugin_player_pane_t

0xce1e,	// (0x0003c2be) wait_bar_pane_cp15

0xce26,	// (0x0003c2c6) grid_ai_notification_pane

0x615c,	// (0x000355fc) list_single_idle_plugin_notification_pane_g1

0xefbb,	// (0x0003e45b) cell_ai_notification_pane_ParamLimits

0xefbb,	// (0x0003e45b) cell_ai_notification_pane

0xce2f,	// (0x0003c2cf) cell_ai_notification_pane_g1

0xce37,	// (0x0003c2d7) cell_ai_notification_pane_t1

0xefc8,	// (0x0003e468) tb_ext_find_button_pane

0xefd0,	// (0x0003e470) tb_ext_find_pane_g1

0xefd8,	// (0x0003e478) tb_ext_find_pane_t1

0x4458,	// (0x000338f8) tb_ext_find_button_pane_g1

0xdfe5,	// (0x0003d485) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0003f228) tb_ext_find_button_pane_g

0xde7a,	// (0x0003d31a) main_idle_act4_pane_t1_ParamLimits

0xde8c,	// (0x0003d32c) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0003f1e6) main_idle_act4_pane_t_ParamLimits

0xdeb4,	// (0x0003d354) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdec2,	// (0x0003d362) sat_plugin_idle_act4_pane_ParamLimits

0xdec2,	// (0x0003d362) sat_plugin_idle_act4_pane

0xefe6,	// (0x0003e486) sat_plugin_idle_act4_pane_t1_ParamLimits

0xefe6,	// (0x0003e486) sat_plugin_idle_act4_pane_t1

0xeff9,	// (0x0003e499) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeff9,	// (0x0003e499) sat_plugin_idle_act4_pane_t2

0xf00c,	// (0x0003e4ac) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf00c,	// (0x0003e4ac) sat_plugin_idle_act4_pane_t3

0xf01f,	// (0x0003e4bf) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf01f,	// (0x0003e4bf) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0003f22d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0003f22d) sat_plugin_idle_act4_pane_t

0x96f4,	// (0x00038b94) popup_battery_window_ParamLimits

0x96f4,	// (0x00038b94) popup_battery_window

0x3a15,	// (0x00032eb5) bg_popup_sub_pane_cp25_ParamLimits

0x3a15,	// (0x00032eb5) bg_popup_sub_pane_cp25

0xdfee,	// (0x0003d48e) popup_battery_window_g1_ParamLimits

0xdfee,	// (0x0003d48e) popup_battery_window_g1

0xdffa,	// (0x0003d49a) popup_battery_window_t1_ParamLimits

0xdffa,	// (0x0003d49a) popup_battery_window_t1

0xe00c,	// (0x0003d4ac) popup_battery_window_t2_ParamLimits

0xe00c,	// (0x0003d4ac) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0003f236) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0003f236) popup_battery_window_t

0xa2b6,	// (0x00039756) midp_canvas_pane_ParamLimits

0xa31a,	// (0x000397ba) midp_keypad_pane_ParamLimits

0xa31a,	// (0x000397ba) midp_keypad_pane

0x408e,	// (0x0003352e) main_midp_pane_ParamLimits

0x67e3,	// (0x00035c83) signal_pane_g2_cp_ParamLimits

0xf032,	// (0x0003e4d2) aid_size_cell_midp_keypad_ParamLimits

0xf032,	// (0x0003e4d2) aid_size_cell_midp_keypad

0xf04c,	// (0x0003e4ec) midp_keyp_game_grid_pane_ParamLimits

0xf04c,	// (0x0003e4ec) midp_keyp_game_grid_pane

0xf06c,	// (0x0003e50c) midp_keyp_rocker_pane_ParamLimits

0xf06c,	// (0x0003e50c) midp_keyp_rocker_pane

0xf0a1,	// (0x0003e541) midp_keyp_sk_left_pane_ParamLimits

0xf0a1,	// (0x0003e541) midp_keyp_sk_left_pane

0xf0f9,	// (0x0003e599) midp_keyp_sk_right_pane_ParamLimits

0xf0f9,	// (0x0003e599) midp_keyp_sk_right_pane

0x3872,	// (0x00032d12) bg_button_pane_cp03

0xf151,	// (0x0003e5f1) midp_keyp_sk_left_pane_g1

0x3872,	// (0x00032d12) bg_button_pane_cp04

0xf151,	// (0x0003e5f1) midp_keyp_sk_right_pane_g1

0x6ae3,	// (0x00035f83) midp_keyp_rocker_pane_g1

0xf15a,	// (0x0003e5fa) keyp_game_cell_pane_ParamLimits

0xf15a,	// (0x0003e5fa) keyp_game_cell_pane

0x3872,	// (0x00032d12) bg_button_pane_cp02

0xf16d,	// (0x0003e60d) keyp_game_cell_pane_g1

0x972a,	// (0x00038bca) popup_fep_vkb2_window_ParamLimits

0x972a,	// (0x00038bca) popup_fep_vkb2_window

0xce53,	// (0x0003c2f3) aid_size_cell_vkb2_ParamLimits

0xce53,	// (0x0003c2f3) aid_size_cell_vkb2

0xcea7,	// (0x0003c347) popup_fep_vkb2_window_g1_ParamLimits

0xcea7,	// (0x0003c347) popup_fep_vkb2_window_g1

0xceef,	// (0x0003c38f) vkb2_area_bottom_pane_ParamLimits

0xceef,	// (0x0003c38f) vkb2_area_bottom_pane

0xcf3b,	// (0x0003c3db) vkb2_area_keypad_pane_ParamLimits

0xcf3b,	// (0x0003c3db) vkb2_area_keypad_pane

0xcf7d,	// (0x0003c41d) vkb2_area_top_pane_ParamLimits

0xcf7d,	// (0x0003c41d) vkb2_area_top_pane

0xcff7,	// (0x0003c497) vkb2_top_entry_pane_ParamLimits

0xcff7,	// (0x0003c497) vkb2_top_entry_pane

0xd021,	// (0x0003c4c1) vkb2_top_grid_left_pane_ParamLimits

0xd021,	// (0x0003c4c1) vkb2_top_grid_left_pane

0xd03f,	// (0x0003c4df) vkb2_top_grid_right_pane_ParamLimits

0xd03f,	// (0x0003c4df) vkb2_top_grid_right_pane

0xd05d,	// (0x0003c4fd) vkb2_cell_keypad_pane_ParamLimits

0xd05d,	// (0x0003c4fd) vkb2_cell_keypad_pane

0xd12e,	// (0x0003c5ce) vkb2_area_bottom_grid_pane_ParamLimits

0xd12e,	// (0x0003c5ce) vkb2_area_bottom_grid_pane

0xd154,	// (0x0003c5f4) vkb2_area_bottom_pane_g1_ParamLimits

0xd154,	// (0x0003c5f4) vkb2_area_bottom_pane_g1

0xd178,	// (0x0003c618) vkb2_area_bottom_pane_g2_ParamLimits

0xd178,	// (0x0003c618) vkb2_area_bottom_pane_g2

0xd1a6,	// (0x0003c646) vkb2_area_bottom_pane_g3_ParamLimits

0xd1a6,	// (0x0003c646) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0003f23b) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0003f23b) vkb2_area_bottom_pane_g

0xd207,	// (0x0003c6a7) vkb2_top_cell_left_pane_ParamLimits

0xd207,	// (0x0003c6a7) vkb2_top_cell_left_pane

0xf176,	// (0x0003e616) vkb2_top_entry_pane_g1_ParamLimits

0xf176,	// (0x0003e616) vkb2_top_entry_pane_g1

0xf184,	// (0x0003e624) vkb2_top_entry_pane_t1_ParamLimits

0xf184,	// (0x0003e624) vkb2_top_entry_pane_t1

0xe031,	// (0x0003d4d1) vkb2_top_entry_pane_t2_ParamLimits

0xe031,	// (0x0003d4d1) vkb2_top_entry_pane_t2

0xe063,	// (0x0003d503) vkb2_top_entry_pane_t3_ParamLimits

0xe063,	// (0x0003d503) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0003f242) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0003f242) vkb2_top_entry_pane_t

0xd254,	// (0x0003c6f4) vkb2_top_grid_right_pane_g1_ParamLimits

0xd254,	// (0x0003c6f4) vkb2_top_grid_right_pane_g1

0xd26a,	// (0x0003c70a) vkb2_top_grid_right_pane_g2_ParamLimits

0xd26a,	// (0x0003c70a) vkb2_top_grid_right_pane_g2

0xd282,	// (0x0003c722) vkb2_top_grid_right_pane_g3_ParamLimits

0xd282,	// (0x0003c722) vkb2_top_grid_right_pane_g3

0xd29a,	// (0x0003c73a) vkb2_top_grid_right_pane_g4_ParamLimits

0xd29a,	// (0x0003c73a) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0003f249) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0003f249) vkb2_top_grid_right_pane_g

0xd2b0,	// (0x0003c750) vkb2_top_cell_left_pane_g1

0xd2c7,	// (0x0003c767) vkb2_cell_keypad_pane_g1_ParamLimits

0xd2c7,	// (0x0003c767) vkb2_cell_keypad_pane_g1

0xe087,	// (0x0003d527) vkb2_cell_keypad_pane_t1_ParamLimits

0xe087,	// (0x0003d527) vkb2_cell_keypad_pane_t1

0xd2d5,	// (0x0003c775) vkb2_cell_bottom_grid_pane_ParamLimits

0xd2d5,	// (0x0003c775) vkb2_cell_bottom_grid_pane

0xd30e,	// (0x0003c7ae) vkb2_cell_bottom_grid_pane_g1

0xdee2,	// (0x0003d382) aid_call2_pane_cp02

0xdeea,	// (0x0003d38a) aid_call_pane_cp02

0xdef2,	// (0x0003d392) clock_digital_number_pane_cp10

0xdefa,	// (0x0003d39a) clock_digital_number_pane_cp11

0xdf02,	// (0x0003d3a2) clock_digital_number_pane_cp12

0xdf0a,	// (0x0003d3aa) clock_digital_number_pane_cp13

0xdf12,	// (0x0003d3b2) clock_digital_separator_pane_cp10

0x4458,	// (0x000338f8) popup_clock_digital_analogue_window_cp2_g1

0x4458,	// (0x000338f8) popup_clock_digital_analogue_window_cp2_g2

0xdf1a,	// (0x0003d3ba) popup_clock_digital_analogue_window_cp2_g3

0x4458,	// (0x000338f8) popup_clock_digital_analogue_window_cp2_g4

0xdf1a,	// (0x0003d3ba) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0003f1fe) popup_clock_digital_analogue_window_cp2_g

0xdf22,	// (0x0003d3c2) popup_clock_digital_analogue_window_cp2_t1

0xdf30,	// (0x0003d3d0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0003f209) popup_clock_digital_analogue_window_cp2_t

0x6ae3,	// (0x00035f83) clock_digital_number_pane_cp10_g1

0x6ae3,	// (0x00035f83) clock_digital_number_pane_cp10_g2

0x0001,

0xfb51,	// (0x0003eff1) clock_digital_number_pane_cp10_g

0x6ae3,	// (0x00035f83) clock_digital_separator_pane_cp10_g1

0x6ae3,	// (0x00035f83) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb51,	// (0x0003eff1) clock_digital_separator_pane_cp10_g

0xccc3,	// (0x0003c163) uniindi_top_pane_g3

0xccd4,	// (0x0003c174) uniindi_top_pane_g4

0xd0e8,	// (0x0003c588) vkb2_row_keypad_pane_ParamLimits

0xd0e8,	// (0x0003c588) vkb2_row_keypad_pane

0xd32e,	// (0x0003c7ce) vkb2_cell_t_keypad_pane_ParamLimits

0xd32e,	// (0x0003c7ce) vkb2_cell_t_keypad_pane

0xd33e,	// (0x0003c7de) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xd33e,	// (0x0003c7de) vkb2_cell_t_keypad_pane_cp08

0xd351,	// (0x0003c7f1) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xd351,	// (0x0003c7f1) vkb2_cell_t_keypad_pane_cp09

0xd365,	// (0x0003c805) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xd365,	// (0x0003c805) vkb2_cell_t_keypad_pane_cp01

0xd376,	// (0x0003c816) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xd376,	// (0x0003c816) vkb2_cell_t_keypad_pane_cp02

0xd387,	// (0x0003c827) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xd387,	// (0x0003c827) vkb2_cell_t_keypad_pane_cp03

0xd398,	// (0x0003c838) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xd398,	// (0x0003c838) vkb2_cell_t_keypad_pane_cp04

0xd3a9,	// (0x0003c849) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xd3a9,	// (0x0003c849) vkb2_cell_t_keypad_pane_cp05

0xd3ba,	// (0x0003c85a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xd3ba,	// (0x0003c85a) vkb2_cell_t_keypad_pane_cp06

0xd3cb,	// (0x0003c86b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xd3cb,	// (0x0003c86b) vkb2_cell_t_keypad_pane_cp07

0xd3dc,	// (0x0003c87c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xd3dc,	// (0x0003c87c) vkb2_cell_t_keypad_pane_cp10

0x6cb6,	// (0x00036156) vkb2_cell_t_keypad_pane_g1

0xe09e,	// (0x0003d53e) vkb2_cell_t_keypad_pane_t1

0x3872,	// (0x00032d12) popup_grid_graphic2_window

0xf1b6,	// (0x0003e656) aid_size_cell_graphic2_ParamLimits

0xf1b6,	// (0x0003e656) aid_size_cell_graphic2

0xf1ee,	// (0x0003e68e) bg_popup_window_pane_cp21_ParamLimits

0xf1ee,	// (0x0003e68e) bg_popup_window_pane_cp21

0xf1fc,	// (0x0003e69c) graphic2_pages_pane_ParamLimits

0xf1fc,	// (0x0003e69c) graphic2_pages_pane

0xf242,	// (0x0003e6e2) grid_graphic2_control_pane_ParamLimits

0xf242,	// (0x0003e6e2) grid_graphic2_control_pane

0xf280,	// (0x0003e720) grid_graphic2_pane_ParamLimits

0xf280,	// (0x0003e720) grid_graphic2_pane

0xf2f4,	// (0x0003e794) cell_graphic2_pane

0x3872,	// (0x00032d12) main_comp_mode_pane

0xc834,	// (0x0003bcd4) list_ai3_gene_pane_ParamLimits

0xdcbc,	// (0x0003d15c) bg_popup_window_pane_cp19_ParamLimits

0xc9d4,	// (0x0003be74) bg_touch_area_indi_pane_ParamLimits

0xc9d4,	// (0x0003be74) bg_touch_area_indi_pane

0xc9ea,	// (0x0003be8a) bg_touch_area_indi_pane_cp01_ParamLimits

0xc9ea,	// (0x0003be8a) bg_touch_area_indi_pane_cp01

0xca00,	// (0x0003bea0) bg_touch_area_indi_pane_cp02_ParamLimits

0xca00,	// (0x0003bea0) bg_touch_area_indi_pane_cp02

0xca18,	// (0x0003beb8) bg_touch_area_indi_pane_cp03_ParamLimits

0xca18,	// (0x0003beb8) bg_touch_area_indi_pane_cp03

0xca32,	// (0x0003bed2) popup_slider_window_g1_ParamLimits

0xca4e,	// (0x0003beee) popup_slider_window_g2_ParamLimits

0xca6a,	// (0x0003bf0a) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0003f193) popup_slider_window_g_ParamLimits

0xca86,	// (0x0003bf26) popup_slider_window_t1_ParamLimits

0xcacc,	// (0x0003bf6c) small_volume_slider_vertical_pane_ParamLimits

0xf2f4,	// (0x0003e794) cell_graphic2_pane_ParamLimits

0xf342,	// (0x0003e7e2) bg_button_pane_cp10_ParamLimits

0xf342,	// (0x0003e7e2) bg_button_pane_cp10

0xf355,	// (0x0003e7f5) bg_button_pane_cp11_ParamLimits

0xf355,	// (0x0003e7f5) bg_button_pane_cp11

0xf368,	// (0x0003e808) graphic2_pages_pane_g1_ParamLimits

0xf368,	// (0x0003e808) graphic2_pages_pane_g1

0xf383,	// (0x0003e823) graphic2_pages_pane_g2_ParamLimits

0xf383,	// (0x0003e823) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0003f257) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0003f257) graphic2_pages_pane_g

0xf39b,	// (0x0003e83b) graphic2_pages_pane_t1_ParamLimits

0xf39b,	// (0x0003e83b) graphic2_pages_pane_t1

0xf3b1,	// (0x0003e851) cell_graphic2_control_pane_ParamLimits

0xf3b1,	// (0x0003e851) cell_graphic2_control_pane

0xf3d2,	// (0x0003e872) cell_graphic2_pane_g1_ParamLimits

0xf3d2,	// (0x0003e872) cell_graphic2_pane_g1

0xf3df,	// (0x0003e87f) cell_graphic2_pane_g2_ParamLimits

0xf3df,	// (0x0003e87f) cell_graphic2_pane_g2

0xf3ec,	// (0x0003e88c) cell_graphic2_pane_g3_ParamLimits

0xf3ec,	// (0x0003e88c) cell_graphic2_pane_g3

0xf3f9,	// (0x0003e899) cell_graphic2_pane_g4_ParamLimits

0xf3f9,	// (0x0003e899) cell_graphic2_pane_g4

0xf406,	// (0x0003e8a6) cell_graphic2_pane_g5_ParamLimits

0xf406,	// (0x0003e8a6) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0003f25c) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0003f25c) cell_graphic2_pane_g

0xf421,	// (0x0003e8c1) cell_graphic2_pane_t1_ParamLimits

0xf421,	// (0x0003e8c1) cell_graphic2_pane_t1

0x4da2,	// (0x00034242) grid_highlight_pane_cp11_ParamLimits

0x4da2,	// (0x00034242) grid_highlight_pane_cp11

0x3a15,	// (0x00032eb5) bg_button_pane_cp05

0xf44a,	// (0x0003e8ea) cell_graphic2_control_pane_g1

0x6ae3,	// (0x00035f83) bg_touch_area_indi_pane_g1

0xe0b0,	// (0x0003d550) aid_cmod_rocker_key_size

0xe0ba,	// (0x0003d55a) aid_cmode_itu_key_size

0xe0c4,	// (0x0003d564) main_cmode_video_pane

0xe0ce,	// (0x0003d56e) main_comp_mode_itu_pane

0xe0da,	// (0x0003d57a) main_comp_mode_rocker_pane

0xe0e6,	// (0x0003d586) cell_cmode_rocker_pane_ParamLimits

0xe0e6,	// (0x0003d586) cell_cmode_rocker_pane

0xe0f8,	// (0x0003d598) cell_cmode_itu_pane_ParamLimits

0xe0f8,	// (0x0003d598) cell_cmode_itu_pane

0x3f29,	// (0x000333c9) bg_button_pane_cp06_ParamLimits

0x3f29,	// (0x000333c9) bg_button_pane_cp06

0x6cb6,	// (0x00036156) cell_cmode_rocker_pane_g1_ParamLimits

0x6cb6,	// (0x00036156) cell_cmode_rocker_pane_g1

0xcbd6,	// (0x0003c076) cell_cmode_rocker_pane_g2_ParamLimits

0xcbd6,	// (0x0003c076) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0003f26c) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0003f26c) cell_cmode_rocker_pane_g

0x3872,	// (0x00032d12) bg_button_pane_cp07

0xe10d,	// (0x0003d5ad) cell_cmode_itu_pane_g1

0xe116,	// (0x0003d5b6) cell_cmode_itu_pane_t1

0xe124,	// (0x0003d5c4) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0003f271) cell_cmode_itu_pane_t

0xcd46,	// (0x0003c1e6) aid_touch_ctrl_left

0xcd4e,	// (0x0003c1ee) aid_touch_ctrl_right

0x3872,	// (0x00032d12) compa_mode_pane

0xf472,	// (0x0003e912) aid_cmod_rocker_key_size_cp

0xf47c,	// (0x0003e91c) aid_cmode_itu_key_size_cp

0xe132,	// (0x0003d5d2) compa_mode_pane_g1

0xe13a,	// (0x0003d5da) compa_mode_pane_g2

0xe142,	// (0x0003d5e2) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0003f276) compa_mode_pane_g

0xf486,	// (0x0003e926) main_comp_mode_itu_pane_cp

0xf48e,	// (0x0003e92e) main_comp_mode_rocker_pane_cp

0xf496,	// (0x0003e936) cell_cmode_itu_pane_cp_ParamLimits

0xf496,	// (0x0003e936) cell_cmode_itu_pane_cp

0xf4ab,	// (0x0003e94b) cell_cmode_rocker_pane_cp_ParamLimits

0xf4ab,	// (0x0003e94b) cell_cmode_rocker_pane_cp

0x3f29,	// (0x000333c9) bg_button_pane_cp06_cp_ParamLimits

0x3f29,	// (0x000333c9) bg_button_pane_cp06_cp

0x6cb6,	// (0x00036156) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6cb6,	// (0x00036156) cell_cmode_rocker_pane_g1_cp

0x6ae3,	// (0x00035f83) cell_cmode_rocker_pane_g2_cp

0x3872,	// (0x00032d12) bg_button_pane_cp07_cp

0xf4bd,	// (0x0003e95d) cell_cmode_itu_pane_g1_cp

0xf4c6,	// (0x0003e966) cell_cmode_itu_pane_t1_cp

0xf4c6,	// (0x0003e966) cell_cmode_itu_pane_t2_cp

0xb5db,	// (0x0003aa7b) settings_code_pane_cp2

0x38e2,	// (0x00032d82) bg_popup_window_pane_cp3_ParamLimits

0x3be3,	// (0x00033083) heading_pane_cp3_ParamLimits

0x3bef,	// (0x0003308f) listscroll_popup_graphic_pane_ParamLimits

0xbc38,	// (0x0003b0d8) fep_hwr_aid_pane_ParamLimits

0xcb47,	// (0x0003bfe7) aid_touch_sctrl_top_ParamLimits

0xcb54,	// (0x0003bff4) sctrl_sk_top_pane_g1_ParamLimits

0x6cb6,	// (0x00036156) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0003f1ac) sctrl_sk_top_pane_g_ParamLimits

0xcb61,	// (0x0003c001) sctrl_sk_top_pane_t1_ParamLimits

0xcb47,	// (0x0003bfe7) aid_touch_sctrl_bottom_ParamLimits

0xcb61,	// (0x0003c001) sctrl_sk_bottom_pane_t1_ParamLimits

0xcc8f,	// (0x0003c12f) aid_area_touch_clock

0xcfbf,	// (0x0003c45f) aid_vkb2_area_top_pane_cell_ParamLimits

0xcfbf,	// (0x0003c45f) aid_vkb2_area_top_pane_cell

0xd10a,	// (0x0003c5aa) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd10a,	// (0x0003c5aa) aid_vkb2_area_bottom_pane_cell

0xe029,	// (0x0003d4c9) popup_char_count_window

0xe14a,	// (0x0003d5ea) popup_char_count_window_g1

0xe153,	// (0x0003d5f3) popup_char_count_window_g2

0xe15c,	// (0x0003d5fc) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0003f27d) popup_char_count_window_g

0xe165,	// (0x0003d605) popup_char_count_window_t1

0xce85,	// (0x0003c325) popup_fep_char_preview_window_ParamLimits

0xce85,	// (0x0003c325) popup_fep_char_preview_window

0xcfdd,	// (0x0003c47d) vkb2_top_candi_pane_ParamLimits

0xcfdd,	// (0x0003c47d) vkb2_top_candi_pane

0xf4d4,	// (0x0003e974) cell_vkb2_top_candi_pane_ParamLimits

0xf4d4,	// (0x0003e974) cell_vkb2_top_candi_pane

0x52b2,	// (0x00034752) bg_popup_fep_char_preview_window_ParamLimits

0x52b2,	// (0x00034752) bg_popup_fep_char_preview_window

0xd3f1,	// (0x0003c891) popup_fep_char_preview_window_t1_ParamLimits

0xd3f1,	// (0x0003c891) popup_fep_char_preview_window_t1

0xe173,	// (0x0003d613) bg_popup_fep_char_preview_window_g1

0xe17b,	// (0x0003d61b) bg_popup_fep_char_preview_window_g2

0xe183,	// (0x0003d623) bg_popup_fep_char_preview_window_g3

0xe18b,	// (0x0003d62b) bg_popup_fep_char_preview_window_g4

0xe193,	// (0x0003d633) bg_popup_fep_char_preview_window_g5

0xd42b,	// (0x0003c8cb) bg_popup_fep_char_preview_window_g6

0xe19b,	// (0x0003d63b) bg_popup_fep_char_preview_window_g7

0xe1a3,	// (0x0003d643) bg_popup_fep_char_preview_window_g8

0xe1ab,	// (0x0003d64b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0003f284) bg_popup_fep_char_preview_window_g

0x6cb6,	// (0x00036156) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6cb6,	// (0x00036156) cell_vkb2_top_candi_pane_g1

0x7089,	// (0x00036529) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7089,	// (0x00036529) cell_vkb2_top_candi_pane_g2

0x70aa,	// (0x0003654a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x70aa,	// (0x0003654a) cell_vkb2_top_candi_pane_g3

0xd433,	// (0x0003c8d3) cell_vkb2_top_candi_pane_g4_ParamLimits

0xd433,	// (0x0003c8d3) cell_vkb2_top_candi_pane_g4

0xe1b3,	// (0x0003d653) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe1b3,	// (0x0003d653) cell_vkb2_top_candi_pane_g5

0xcbd6,	// (0x0003c076) cell_vkb2_top_candi_pane_g6_ParamLimits

0xcbd6,	// (0x0003c076) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0003f297) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0003f297) cell_vkb2_top_candi_pane_g

0xd454,	// (0x0003c8f4) cell_vkb2_top_candi_pane_t1

0xb458,	// (0x0003a8f8) aid_size_touch_slider_mark_ParamLimits

0xb458,	// (0x0003a8f8) aid_size_touch_slider_mark

0xf232,	// (0x0003e6d2) grid_graphic2_catg_pane_ParamLimits

0xf232,	// (0x0003e6d2) grid_graphic2_catg_pane

0xf2d0,	// (0x0003e770) popup_grid_graphic2_window_t1_ParamLimits

0xf2d0,	// (0x0003e770) popup_grid_graphic2_window_t1

0xf2e2,	// (0x0003e782) popup_grid_graphic2_window_t2_ParamLimits

0xf2e2,	// (0x0003e782) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0003f252) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0003f252) popup_grid_graphic2_window_t

0x3a15,	// (0x00032eb5) bg_button_pane_cp05_ParamLimits

0xf44a,	// (0x0003e8ea) cell_graphic2_control_pane_g1_ParamLimits

0xf521,	// (0x0003e9c1) cell_graphic2_catg_pane_ParamLimits

0xf521,	// (0x0003e9c1) cell_graphic2_catg_pane

0x3872,	// (0x00032d12) bg_button_pane_cp12

0xf533,	// (0x0003e9d3) cell_graphic2_catg_pane_g1

0xcc5b,	// (0x0003c0fb) cell_tb_ext_pane_t1_ParamLimits

0xd227,	// (0x0003c6c7) vkb2_top_cell_right_narrow_pane_ParamLimits

0xd227,	// (0x0003c6c7) vkb2_top_cell_right_narrow_pane

0xd23f,	// (0x0003c6df) vkb2_top_cell_right_wide_pane_ParamLimits

0xd23f,	// (0x0003c6df) vkb2_top_cell_right_wide_pane

0xbc2a,	// (0x0003b0ca) bg_vkb2_func_pane_ParamLimits

0xbc2a,	// (0x0003b0ca) bg_vkb2_func_pane

0xd2b0,	// (0x0003c750) vkb2_top_cell_left_pane_g1_ParamLimits

0xbc2a,	// (0x0003b0ca) bg_vkb2_fuc_pane_cp03_ParamLimits

0xbc2a,	// (0x0003b0ca) bg_vkb2_fuc_pane_cp03

0xd30e,	// (0x0003c7ae) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4d3e,	// (0x000341de) bg_vkb2_func_pane_g1

0x4d36,	// (0x000341d6) bg_vkb2_func_pane_g2

0x4d46,	// (0x000341e6) bg_vkb2_func_pane_g3

0x4d4e,	// (0x000341ee) bg_vkb2_func_pane_g4

0x4d56,	// (0x000341f6) bg_vkb2_func_pane_g5

0x4d5e,	// (0x000341fe) bg_vkb2_func_pane_g6

0x4d6e,	// (0x0003420e) bg_vkb2_func_pane_g7

0x4d66,	// (0x00034206) bg_vkb2_func_pane_g8

0x4d2e,	// (0x000341ce) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0003f2a4) bg_vkb2_func_pane_g

0xbc2a,	// (0x0003b0ca) bg_vkb2_fuc_pane_cp01_ParamLimits

0xbc2a,	// (0x0003b0ca) bg_vkb2_fuc_pane_cp01

0xd2b0,	// (0x0003c750) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xd2b0,	// (0x0003c750) vkb2_top_cell_right_wide_pane_g1

0xbc2a,	// (0x0003b0ca) bg_vkb2_fuc_pane_cp02_ParamLimits

0xbc2a,	// (0x0003b0ca) bg_vkb2_fuc_pane_cp02

0xd30e,	// (0x0003c7ae) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xd30e,	// (0x0003c7ae) vkb2_top_cell_right_narrow_pane_g1

0xdc3a,	// (0x0003d0da) aid_touch_area_decrease_ParamLimits

0xdc3a,	// (0x0003d0da) aid_touch_area_decrease

0xdc5e,	// (0x0003d0fe) aid_touch_area_increase_ParamLimits

0xdc5e,	// (0x0003d0fe) aid_touch_area_increase

0xdc6a,	// (0x0003d10a) aid_touch_area_mute_ParamLimits

0xdc6a,	// (0x0003d10a) aid_touch_area_mute

0xdc8e,	// (0x0003d12e) aid_touch_area_slider_ParamLimits

0xdc8e,	// (0x0003d12e) aid_touch_area_slider

0xdcc8,	// (0x0003d168) popup_slider_window_g4_ParamLimits

0xdcc8,	// (0x0003d168) popup_slider_window_g4

0xdcd4,	// (0x0003d174) popup_slider_window_g5_ParamLimits

0xdcd4,	// (0x0003d174) popup_slider_window_g5

0xdcf6,	// (0x0003d196) popup_slider_window_g6_ParamLimits

0xdcf6,	// (0x0003d196) popup_slider_window_g6

0xcab4,	// (0x0003bf54) popup_slider_window_t2_ParamLimits

0xcab4,	// (0x0003bf54) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0003f1a0) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0003f1a0) popup_slider_window_t

0xdd08,	// (0x0003d1a8) slider_pane_ParamLimits

0xdd08,	// (0x0003d1a8) slider_pane

0xe1d4,	// (0x0003d674) slider_pane_g1_ParamLimits

0xe1d4,	// (0x0003d674) slider_pane_g1

0xe1e8,	// (0x0003d688) slider_pane_g2_ParamLimits

0xe1e8,	// (0x0003d688) slider_pane_g2

0xe1fe,	// (0x0003d69e) slider_pane_g3_ParamLimits

0xe1fe,	// (0x0003d69e) slider_pane_g3

0x0003,

0xfe17,	// (0x0003f2b7) slider_pane_g_ParamLimits

0xfe17,	// (0x0003f2b7) slider_pane_g

0xaa6d,	// (0x00039f0d) popup_tb_float_extension_window_ParamLimits

0xaa6d,	// (0x00039f0d) popup_tb_float_extension_window

0xe22a,	// (0x0003d6ca) aid_size_cell_tb_float_ext

0x3872,	// (0x00032d12) bg_popup_sub_window_cp28

0xe236,	// (0x0003d6d6) grid_tb_float_ext_pane

0xe240,	// (0x0003d6e0) cell_tb_float_ext_pane_ParamLimits

0xe240,	// (0x0003d6e0) cell_tb_float_ext_pane

0xe25a,	// (0x0003d6fa) cell_tb_float_ext_pane_g1

0xe263,	// (0x0003d703) grid_highlight_pane_cp12

0xbd6b,	// (0x0003b20b) cell_last_hwr_side_pane_ParamLimits

0xbd6b,	// (0x0003b20b) cell_last_hwr_side_pane

0x6ae3,	// (0x00035f83) cell_last_hwr_side_pane_g1

0xe26c,	// (0x0003d70c) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0003f2c0) cell_last_hwr_side_pane_g

0xd1d6,	// (0x0003c676) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd1d6,	// (0x0003c676) vkb2_area_bottom_space_btn_pane

0x6cb6,	// (0x00036156) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe09e,	// (0x0003d53e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xd454,	// (0x0003c8f4) cell_vkb2_top_candi_pane_t1_ParamLimits

0xd473,	// (0x0003c913) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xd473,	// (0x0003c913) vkb2_area_bottom_space_btn_pane_g1

0xd4ad,	// (0x0003c94d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xd4ad,	// (0x0003c94d) vkb2_area_bottom_space_btn_pane_g2

0xd4e3,	// (0x0003c983) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xd4e3,	// (0x0003c983) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0003f2c5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0003f2c5) vkb2_area_bottom_space_btn_pane_g

0xbcdf,	// (0x0003b17f) cel_fep_hwr_func_pane_ParamLimits

0xbcdf,	// (0x0003b17f) cel_fep_hwr_func_pane

0xbd1b,	// (0x0003b1bb) cell_hwr_side_button_pane_ParamLimits

0xbd1b,	// (0x0003b1bb) cell_hwr_side_button_pane

0xcc8f,	// (0x0003c12f) aid_area_touch_clock_ParamLimits

0x3a15,	// (0x00032eb5) bg_uniindi_top_pane_ParamLimits

0xcca1,	// (0x0003c141) uniindi_top_pane_g1_ParamLimits

0xccb7,	// (0x0003c157) uniindi_top_pane_g2_ParamLimits

0xccc3,	// (0x0003c163) uniindi_top_pane_g3_ParamLimits

0xccd4,	// (0x0003c174) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0003f1d8) uniindi_top_pane_g_ParamLimits

0xcce1,	// (0x0003c181) uniindi_top_pane_t1_ParamLimits

0x3a15,	// (0x00032eb5) bg_vkb2_func_pane_cp01_ParamLimits

0x3a15,	// (0x00032eb5) bg_vkb2_func_pane_cp01

0xe275,	// (0x0003d715) cel_fep_hwr_func_pane_g1_ParamLimits

0xe275,	// (0x0003d715) cel_fep_hwr_func_pane_g1

0x3a15,	// (0x00032eb5) bg_vkb2_func_pane_cp02_ParamLimits

0x3a15,	// (0x00032eb5) bg_vkb2_func_pane_cp02

0xe275,	// (0x0003d715) cell_hwr_side_button_pane_g1_ParamLimits

0xe275,	// (0x0003d715) cell_hwr_side_button_pane_g1

0x4c44,	// (0x000340e4) status_pane_g4_ParamLimits

0x4c44,	// (0x000340e4) status_pane_g4

0x4c5e,	// (0x000340fe) status_pane_t1

0x6972,	// (0x00035e12) form2_midp_gauge_slider_cont_pane

0x697a,	// (0x00035e1a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbab5,	// (0x0003af55) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbac7,	// (0x0003af67) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb04,	// (0x0003efa4) form2_midp_gauge_slider_pane_t_ParamLimits

0x698c,	// (0x00035e2c) form2_midp_slider_pane_ParamLimits

0xce45,	// (0x0003c2e5) aid_size_cell_func_vkb2_ParamLimits

0xce45,	// (0x0003c2e5) aid_size_cell_func_vkb2

0xe216,	// (0x0003d6b6) slider_pane_g4_ParamLimits

0xe216,	// (0x0003d6b6) slider_pane_g4

0xd52d,	// (0x0003c9cd) form2_midp_gauge_slider_pane_t2_cp01

0xd53b,	// (0x0003c9db) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd53b,	// (0x0003c9db) form2_midp_gauge_slider_pane_t3_cp01

0xd558,	// (0x0003c9f8) form2_midp_slider_pane_cp01

0x3872,	// (0x00032d12) navi_smil_pane

0xe2a5,	// (0x0003d745) navi_smil_pane_g1

0xe2ad,	// (0x0003d74d) navi_smil_pane_t1

0xe283,	// (0x0003d723) form2_midp_slider_pane_g1

0xe28c,	// (0x0003d72c) form2_midp_slider_pane_g2

0xe294,	// (0x0003d734) form2_midp_slider_pane_g3

0xe283,	// (0x0003d723) form2_midp_slider_pane_g4

0xd561,	// (0x0003ca01) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0003f2ce) form2_midp_slider_pane_g

0xd51d,	// (0x0003c9bd) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xd51d,	// (0x0003c9bd) vkb2_area_bottom_space_btn_pane_g4

0xac2b,	// (0x0003a0cb) lc0_navi_pane_ParamLimits

0xac2b,	// (0x0003a0cb) lc0_navi_pane

0xaca1,	// (0x0003a141) lc0_stat_indi_pane_ParamLimits

0xaca1,	// (0x0003a141) lc0_stat_indi_pane

0xacb8,	// (0x0003a158) ls0_title_pane_ParamLimits

0xacb8,	// (0x0003a158) ls0_title_pane

0x3f29,	// (0x000333c9) bg_popup_sub_pane_cp14_ParamLimits

0xcc76,	// (0x0003c116) list_uniindi_pane_ParamLimits

0xcc82,	// (0x0003c122) uniindi_top_pane_ParamLimits

0xcd1e,	// (0x0003c1be) list_single_uniindi_pane_g1_ParamLimits

0xcd31,	// (0x0003c1d1) list_single_uniindi_pane_t1_ParamLimits

0xd56a,	// (0x0003ca0a) lc0_stat_clock_pane_ParamLimits

0xd56a,	// (0x0003ca0a) lc0_stat_clock_pane

0xd577,	// (0x0003ca17) lc0_stat_indi_pane_g1_ParamLimits

0xd577,	// (0x0003ca17) lc0_stat_indi_pane_g1

0xd584,	// (0x0003ca24) lc0_stat_indi_pane_g2_ParamLimits

0xd584,	// (0x0003ca24) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0003f2d9) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0003f2d9) lc0_stat_indi_pane_g

0xd591,	// (0x0003ca31) lc0_uni_indicator_pane_ParamLimits

0xd591,	// (0x0003ca31) lc0_uni_indicator_pane

0xd59e,	// (0x0003ca3e) ls0_title_pane_g1_ParamLimits

0xd59e,	// (0x0003ca3e) ls0_title_pane_g1

0xd5b2,	// (0x0003ca52) ls0_title_pane_t1_ParamLimits

0xd5b2,	// (0x0003ca52) ls0_title_pane_t1

0xd5e8,	// (0x0003ca88) lc0_uni_indicator_pane_g1_ParamLimits

0xd5e8,	// (0x0003ca88) lc0_uni_indicator_pane_g1

0xe2bb,	// (0x0003d75b) lc0_stat_clock_pane_t1

0x3872,	// (0x00032d12) main_ai5_pane

0xe2c9,	// (0x0003d769) ai5_sk_pane_ParamLimits

0xe2c9,	// (0x0003d769) ai5_sk_pane

0xd5fd,	// (0x0003ca9d) cell_ai5_widget_pane_ParamLimits

0xd5fd,	// (0x0003ca9d) cell_ai5_widget_pane

0xe2d6,	// (0x0003d776) aid_size_cell_widget_grid

0xe2ec,	// (0x0003d78c) bg_ai5_widget_pane_ParamLimits

0xe2ec,	// (0x0003d78c) bg_ai5_widget_pane

0xe356,	// (0x0003d7f6) cell_ai5_widget_pane_g2

0xe366,	// (0x0003d806) cell_ai5_widget_pane_g3

0xe385,	// (0x0003d825) cell_ai5_widget_pane_g4

0xe391,	// (0x0003d831) cell_ai5_widget_pane_g5

0xe39d,	// (0x0003d83d) cell_ai5_widget_pane_g6

0xe3a9,	// (0x0003d849) cell_ai5_widget_pane_g7

0xe3f1,	// (0x0003d891) cell_ai5_widget_pane_t1_ParamLimits

0xe3f1,	// (0x0003d891) cell_ai5_widget_pane_t1

0xe40e,	// (0x0003d8ae) cell_ai5_widget_pane_t2_ParamLimits

0xe40e,	// (0x0003d8ae) cell_ai5_widget_pane_t2

0xe426,	// (0x0003d8c6) cell_ai5_widget_pane_t3_ParamLimits

0xe426,	// (0x0003d8c6) cell_ai5_widget_pane_t3

0xe43e,	// (0x0003d8de) cell_ai5_widget_pane_t4_ParamLimits

0xe43e,	// (0x0003d8de) cell_ai5_widget_pane_t4

0xe458,	// (0x0003d8f8) cell_ai5_widget_pane_t5_ParamLimits

0xe458,	// (0x0003d8f8) cell_ai5_widget_pane_t5

0xe477,	// (0x0003d917) cell_ai5_widget_pane_t6_ParamLimits

0xe477,	// (0x0003d917) cell_ai5_widget_pane_t6

0xe489,	// (0x0003d929) cell_ai5_widget_pane_t7_ParamLimits

0xe489,	// (0x0003d929) cell_ai5_widget_pane_t7

0xe4a2,	// (0x0003d942) cell_ai5_widget_pane_t8_ParamLimits

0xe4a2,	// (0x0003d942) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0003f2f3) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0003f2f3) cell_ai5_widget_pane_t

0xe4ee,	// (0x0003d98e) grid_ai5_widget_pane

0x3f29,	// (0x000333c9) highlight_cell_ai5_widget_pane_ParamLimits

0x3f29,	// (0x000333c9) highlight_cell_ai5_widget_pane

0xd6c7,	// (0x0003cb67) ai5_sk_left_pane

0xd6d1,	// (0x0003cb71) ai5_sk_middle_pane

0xd6db,	// (0x0003cb7b) ai5_sk_right_pane

0xe506,	// (0x0003d9a6) bg_ai5_widget_pane_g1_ParamLimits

0xe506,	// (0x0003d9a6) bg_ai5_widget_pane_g1

0xe512,	// (0x0003d9b2) bg_ai5_widget_pane_g2_ParamLimits

0xe512,	// (0x0003d9b2) bg_ai5_widget_pane_g2

0xe51e,	// (0x0003d9be) bg_ai5_widget_pane_g3_ParamLimits

0xe51e,	// (0x0003d9be) bg_ai5_widget_pane_g3

0xe52a,	// (0x0003d9ca) bg_ai5_widget_pane_g4_ParamLimits

0xe52a,	// (0x0003d9ca) bg_ai5_widget_pane_g4

0xe536,	// (0x0003d9d6) bg_ai5_widget_pane_g5_ParamLimits

0xe536,	// (0x0003d9d6) bg_ai5_widget_pane_g5

0xe542,	// (0x0003d9e2) bg_ai5_widget_pane_g6_ParamLimits

0xe542,	// (0x0003d9e2) bg_ai5_widget_pane_g6

0xe54e,	// (0x0003d9ee) bg_ai5_widget_pane_g7_ParamLimits

0xe54e,	// (0x0003d9ee) bg_ai5_widget_pane_g7

0xe55a,	// (0x0003d9fa) bg_ai5_widget_pane_g8_ParamLimits

0xe55a,	// (0x0003d9fa) bg_ai5_widget_pane_g8

0xe566,	// (0x0003da06) bg_ai5_widget_pane_g9_ParamLimits

0xe566,	// (0x0003da06) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0003f308) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0003f308) bg_ai5_widget_pane_g

0xe599,	// (0x0003da39) cell_shortcut_ai5_widget_pane_ParamLimits

0xe599,	// (0x0003da39) cell_shortcut_ai5_widget_pane

0x48fa,	// (0x00033d9a) bg_cell_shortcut_ai5_widget_pane

0xe5aa,	// (0x0003da4a) cell_grid_ai5_widget_pane_g1

0xe5b3,	// (0x0003da53) highlight_cell_shortcut_ai5_widget_pane

0x4d36,	// (0x000341d6) ai5_sk_left_pane_g1

0xe5bb,	// (0x0003da5b) ai5_sk_left_pane_g2

0xe5c3,	// (0x0003da63) ai5_sk_left_pane_g3

0xe5cb,	// (0x0003da6b) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0003f31b) ai5_sk_left_pane_g

0xe5d3,	// (0x0003da73) ai5_sk_left_pane_t1

0x4d3e,	// (0x000341de) ai5_sk_right_pane_g1

0xe5e1,	// (0x0003da81) ai5_sk_right_pane_g2

0xe5e9,	// (0x0003da89) ai5_sk_right_pane_g3

0xe5f1,	// (0x0003da91) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0003f324) ai5_sk_right_pane_g

0xe5f9,	// (0x0003da99) ai5_sk_right_pane_t1

0x4d3e,	// (0x000341de) ai5_sk_middle_pane_g1

0x4d36,	// (0x000341d6) ai5_sk_middle_pane_g2

0x4d56,	// (0x000341f6) ai5_sk_middle_pane_g3

0xe5e9,	// (0x0003da89) ai5_sk_middle_pane_g4

0xe5c3,	// (0x0003da63) ai5_sk_middle_pane_g5

0xe607,	// (0x0003daa7) ai5_sk_middle_pane_g6

0xd6e5,	// (0x0003cb85) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0003f32d) ai5_sk_middle_pane_g

0xab70,	// (0x0003a010) aid_touch_area_size_lc0_ParamLimits

0xab70,	// (0x0003a010) aid_touch_area_size_lc0

0xc01f,	// (0x0003b4bf) cell_hwr_candidate_pane_t1_ParamLimits

0x4b66,	// (0x00034006) aid_touch_navi_pane

0xad8f,	// (0x0003a22f) status_dt_navi_pane_ParamLimits

0xad8f,	// (0x0003a22f) status_dt_navi_pane

0xad9c,	// (0x0003a23c) status_dt_sta_pane_ParamLimits

0xad9c,	// (0x0003a23c) status_dt_sta_pane

0xd6ed,	// (0x0003cb8d) dt_sta_controll_pane

0xd6fa,	// (0x0003cb9a) dt_sta_indi_pane

0xd70b,	// (0x0003cbab) dt_sta_title_pane

0x3a15,	// (0x00032eb5) bg_dt_sta_indi_pane_ParamLimits

0x3a15,	// (0x00032eb5) bg_dt_sta_indi_pane

0xe60f,	// (0x0003daaf) dt_sta_battery_pane

0xd71e,	// (0x0003cbbe) dt_sta_indi_pane_g1

0xd727,	// (0x0003cbc7) dt_sta_indi_pane_g2

0xd730,	// (0x0003cbd0) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0003f33c) dt_sta_indi_pane_g

0xd739,	// (0x0003cbd9) dt_sta_signal_pane

0x3f29,	// (0x000333c9) bg_dt_sta_title_pane_ParamLimits

0x3f29,	// (0x000333c9) bg_dt_sta_title_pane

0xe617,	// (0x0003dab7) dt_sta_title_pane_g1

0xd742,	// (0x0003cbe2) dt_sta_title_pane_t1_ParamLimits

0xd742,	// (0x0003cbe2) dt_sta_title_pane_t1

0x3872,	// (0x00032d12) bg_dt_sta_control_pane

0xd757,	// (0x0003cbf7) dt_sta_controll_pane_g1

0xe61f,	// (0x0003dabf) bg_dt_sta_title_pane_g1

0xe628,	// (0x0003dac8) bg_dt_sta_title_pane_g2

0xe631,	// (0x0003dad1) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0003f343) bg_dt_sta_title_pane_g

0x6ae3,	// (0x00035f83) bg_dt_sta_indi_pane_g1

0xe63a,	// (0x0003dada) dt_sta_signal_pane_g1

0xe642,	// (0x0003dae2) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0003f34a) dt_sta_signal_pane_g

0xe64a,	// (0x0003daea) dt_sta_battery_pane_g1

0xe653,	// (0x0003daf3) dt_sta_battery_pane_t1

0x6ae3,	// (0x00035f83) bg_dt_sta_control_pane_g1

0x44db,	// (0x0003397b) fep_china_uni_eep_pane

0x44e3,	// (0x00033983) fep_china_uni_entry_pane_ParamLimits

0x44f3,	// (0x00033993) popup_fep_china_uni_window_g1_ParamLimits

0x4503,	// (0x000339a3) popup_fep_china_uni_window_g2_ParamLimits

0x4503,	// (0x000339a3) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0003ebc8) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0003ebc8) popup_fep_china_uni_window_g

0xe662,	// (0x0003db02) fep_china_uni_eep_pane_g1

0xe66a,	// (0x0003db0a) fep_china_uni_eep_pane_t1

0xe29c,	// (0x0003d73c) aid_touch_area_size_smil_player

0x4c17,	// (0x000340b7) lc0_clock_pane

0x4c52,	// (0x000340f2) status_pane_g5_ParamLimits

0x4c52,	// (0x000340f2) status_pane_g5

0xa734,	// (0x00039bd4) popup_keymap_window

0x4c30,	// (0x000340d0) status_icon_pane

0xe366,	// (0x0003d806) cell_ai5_widget_pane_g3_ParamLimits

0xe385,	// (0x0003d825) cell_ai5_widget_pane_g4_ParamLimits

0xe391,	// (0x0003d831) cell_ai5_widget_pane_g5_ParamLimits

0xe3b5,	// (0x0003d855) cell_ai5_widget_pane_g8_ParamLimits

0xe3b5,	// (0x0003d855) cell_ai5_widget_pane_g8

0xe3c9,	// (0x0003d869) cell_ai5_widget_pane_g9_ParamLimits

0xe3c9,	// (0x0003d869) cell_ai5_widget_pane_g9

0xe3dd,	// (0x0003d87d) cell_ai5_widget_pane_g10_ParamLimits

0xe3dd,	// (0x0003d87d) cell_ai5_widget_pane_g10

0xe679,	// (0x0003db19) status_icon_pane_g1

0x3872,	// (0x00032d12) bg_popup_sub_pane_cp13

0xe681,	// (0x0003db21) popup_keymap_window_t1

0xa481,	// (0x00039921) control_pane_g6_ParamLimits

0xa481,	// (0x00039921) control_pane_g6

0xa48e,	// (0x0003992e) control_pane_g7_ParamLimits

0xa48e,	// (0x0003992e) control_pane_g7

0xa49b,	// (0x0003993b) control_pane_g8_ParamLimits

0xa49b,	// (0x0003993b) control_pane_g8

0xd6ed,	// (0x0003cb8d) dt_sta_controll_pane_ParamLimits

0xd6fa,	// (0x0003cb9a) dt_sta_indi_pane_ParamLimits

0xd70b,	// (0x0003cbab) dt_sta_title_pane_ParamLimits

0x3e6b,	// (0x0003330b) aid_size_touch_scroll_bar_cale

0x9708,	// (0x00038ba8) popup_discreet_window_ParamLimits

0x9708,	// (0x00038ba8) popup_discreet_window

0x9782,	// (0x00038c22) popup_sk_window

0x52b2,	// (0x00034752) bg_popup_sub_pane_cp28_ParamLimits

0x52b2,	// (0x00034752) bg_popup_sub_pane_cp28

0xe68f,	// (0x0003db2f) popup_discreet_window_g1_ParamLimits

0xe68f,	// (0x0003db2f) popup_discreet_window_g1

0xe6af,	// (0x0003db4f) popup_discreet_window_t1_ParamLimits

0xe6af,	// (0x0003db4f) popup_discreet_window_t1

0xe6cd,	// (0x0003db6d) popup_discreet_window_t2_ParamLimits

0xe6cd,	// (0x0003db6d) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0003f34f) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0003f34f) popup_discreet_window_t

0xd760,	// (0x0003cc00) popup_sk_window_g1

0xd76a,	// (0x0003cc0a) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0003f356) popup_sk_window_g

0xd774,	// (0x0003cc14) popup_sk_window_t1

0xd782,	// (0x0003cc22) popup_sk_window_t1_copy1

0xe356,	// (0x0003d7f6) cell_ai5_widget_pane_g2_ParamLimits

0xe4b4,	// (0x0003d954) cell_ai5_widget_pane_t9_ParamLimits

0xe4b4,	// (0x0003d954) cell_ai5_widget_pane_t9

0x3872,	// (0x00032d12) main_fep_fshwr2_pane

0xd790,	// (0x0003cc30) aid_fshwr2_btn_pane

0xd79c,	// (0x0003cc3c) aid_fshwr2_syb_pane

0xd7a8,	// (0x0003cc48) aid_fshwr2_txt_pane

0xd7b4,	// (0x0003cc54) fshwr2_func_candi_pane

0xd7c9,	// (0x0003cc69) fshwr2_hwr_syb_pane

0xd7d9,	// (0x0003cc79) fshwr2_icf_pane

0x3872,	// (0x00032d12) fshwr2_icf_bg_pane

0xd802,	// (0x0003cca2) fshwr2_icf_pane_t1_ParamLimits

0xd802,	// (0x0003cca2) fshwr2_icf_pane_t1

0x6ae3,	// (0x00035f83) fshwr2_func_candi_pane_g1

0xe71f,	// (0x0003dbbf) fshwr2_func_candi_row_pane_ParamLimits

0xe71f,	// (0x0003dbbf) fshwr2_func_candi_row_pane

0xd819,	// (0x0003ccb9) cell_fshwr2_syb_pane_ParamLimits

0xd819,	// (0x0003ccb9) cell_fshwr2_syb_pane

0x6cb6,	// (0x00036156) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6cb6,	// (0x00036156) fshwr2_hwr_syb_pane_g1

0x3872,	// (0x00032d12) bg_popup_call_pane_cp01

0xe730,	// (0x0003dbd0) fshwr2_func_candi_cell_pane_ParamLimits

0xe730,	// (0x0003dbd0) fshwr2_func_candi_cell_pane

0xe75e,	// (0x0003dbfe) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe75e,	// (0x0003dbfe) fshwr2_func_candi_cell_bg_pane

0xe778,	// (0x0003dc18) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe778,	// (0x0003dc18) fshwr2_func_candi_cell_pane_g1

0xe798,	// (0x0003dc38) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe798,	// (0x0003dc38) fshwr2_func_candi_cell_pane_t1

0x3872,	// (0x00032d12) bg_button_pane_cp08

0x48fa,	// (0x00033d9a) cell_fshwr2_syb_bg_pane

0xd835,	// (0x0003ccd5) cell_fshwr2_syb_bg_pane_g1

0xd83d,	// (0x0003ccdd) cell_fshwr2_syb_bg_pane_t1

0x3f29,	// (0x000333c9) main_tmo_pane

0xb3a2,	// (0x0003a842) uni_indicator_pane_g1_ParamLimits

0xb3b7,	// (0x0003a857) uni_indicator_pane_g2_ParamLimits

0x5c39,	// (0x000350d9) uni_indicator_pane_g3_ParamLimits

0x5c4f,	// (0x000350ef) uni_indicator_pane_g4_ParamLimits

0x5c4f,	// (0x000350ef) uni_indicator_pane_g4

0x5c63,	// (0x00035103) uni_indicator_pane_g5_ParamLimits

0x5c63,	// (0x00035103) uni_indicator_pane_g5

0x5c77,	// (0x00035117) uni_indicator_pane_g6_ParamLimits

0x5c77,	// (0x00035117) uni_indicator_pane_g6

0xf927,	// (0x0003edc7) uni_indicator_pane_g_ParamLimits

0xdc1c,	// (0x0003d0bc) popup_tmo_note_window_ParamLimits

0xdc1c,	// (0x0003d0bc) popup_tmo_note_window

0x3f29,	// (0x000333c9) fshwr2_bg_pane

0xe789,	// (0x0003dc29) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe789,	// (0x0003dc29) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0003f35b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0003f35b) fshwr2_func_candi_cell_pane_g

0x6ae3,	// (0x00035f83) bg_popup_window_pane_cp01

0xe7ab,	// (0x0003dc4b) bg_popup_window_pane_g1_cp01

0xe7b4,	// (0x0003dc54) bg_popup_window_pane_cp22_ParamLimits

0xe7b4,	// (0x0003dc54) bg_popup_window_pane_cp22

0xe7c2,	// (0x0003dc62) listscroll_tmo_link_pane_ParamLimits

0xe7c2,	// (0x0003dc62) listscroll_tmo_link_pane

0xe802,	// (0x0003dca2) popup_tmo_note_window_g1_ParamLimits

0xe802,	// (0x0003dca2) popup_tmo_note_window_g1

0xe80f,	// (0x0003dcaf) tmo_note_info_pane_ParamLimits

0xe80f,	// (0x0003dcaf) tmo_note_info_pane

0xd84c,	// (0x0003ccec) list_tmo_note_info_pane_g1_ParamLimits

0xd84c,	// (0x0003ccec) list_tmo_note_info_pane_g1

0xe829,	// (0x0003dcc9) list_tmo_note_info_pane_g2_ParamLimits

0xe829,	// (0x0003dcc9) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0003f360) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0003f360) list_tmo_note_info_pane_g

0xe845,	// (0x0003dce5) list_tmo_note_info_text_pane_ParamLimits

0xe845,	// (0x0003dce5) list_tmo_note_info_text_pane

0xe887,	// (0x0003dd27) list_tmo_link_pane

0xe894,	// (0x0003dd34) scroll_pane_cp20

0xe8a1,	// (0x0003dd41) list_single_tmo_link_pane_ParamLimits

0xe8a1,	// (0x0003dd41) list_single_tmo_link_pane

0xe8b1,	// (0x0003dd51) list_single_tmo_link_pane_t1

0xe8bf,	// (0x0003dd5f) list_tmo_note_info_text_pane_t1_ParamLimits

0xe8bf,	// (0x0003dd5f) list_tmo_note_info_text_pane_t1

0x9c41,	// (0x000390e1) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9c41,	// (0x000390e1) aid_size_touch_scroll_bar_cp01

0x8c22,	// (0x000380c2) aid_size_touch_slider_marker

0x976a,	// (0x00038c0a) popup_settings_window_ParamLimits

0x976a,	// (0x00038c0a) popup_settings_window

0x8daa,	// (0x0003824a) popup_candi_list_indi_window

0x4b66,	// (0x00034006) aid_touch_navi_pane_ParamLimits

0xcb1b,	// (0x0003bfbb) rs_clock_indi_pane

0xcb24,	// (0x0003bfc4) sctrl_sk_bottom_pane_ParamLimits

0xcb35,	// (0x0003bfd5) sctrl_sk_top_pane_ParamLimits

0xce9f,	// (0x0003c33f) popup_fep_tooltip_window

0xe2d6,	// (0x0003d776) aid_size_cell_widget_grid_ParamLimits

0xe34a,	// (0x0003d7ea) cell_ai5_widget_pane_g1_ParamLimits

0xe34a,	// (0x0003d7ea) cell_ai5_widget_pane_g1

0xe39d,	// (0x0003d83d) cell_ai5_widget_pane_g6_ParamLimits

0xe3a9,	// (0x0003d849) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0003f2de) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0003f2de) cell_ai5_widget_pane_g

0xe4d8,	// (0x0003d978) cell_ai5_widget_pane_t10_ParamLimits

0xe4d8,	// (0x0003d978) cell_ai5_widget_pane_t10

0xe4ee,	// (0x0003d98e) grid_ai5_widget_pane_ParamLimits

0xe572,	// (0x0003da12) cell_contacts_ai5_widget_pane_ParamLimits

0xe572,	// (0x0003da12) cell_contacts_ai5_widget_pane

0xe6e2,	// (0x0003db82) popup_discreet_window_t3_ParamLimits

0xe6e2,	// (0x0003db82) popup_discreet_window_t3

0xd7ee,	// (0x0003cc8e) popup_fshwr2_char_preview_window_ParamLimits

0xd7ee,	// (0x0003cc8e) popup_fshwr2_char_preview_window

0xd863,	// (0x0003cd03) tmo_note_info_pane_t1

0xd878,	// (0x0003cd18) tmo_note_info_pane_t2

0xd88f,	// (0x0003cd2f) tmo_note_info_pane_t3

0xe863,	// (0x0003dd03) tmo_note_info_pane_t4

0xe875,	// (0x0003dd15) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0003f365) tmo_note_info_pane_t

0xe887,	// (0x0003dd27) list_tmo_link_pane_ParamLimits

0xe894,	// (0x0003dd34) scroll_pane_cp20_ParamLimits

0x3872,	// (0x00032d12) bg_popup_fep_char_preview_window_cp01

0xe8d8,	// (0x0003dd78) popup_fshwr2_char_preview_window_t1

0xe8e6,	// (0x0003dd86) popup_candi_list_indi_window_g1

0xe8ef,	// (0x0003dd8f) bg_cell_contacts_ai5_widget_pane

0xe8fb,	// (0x0003dd9b) cell_contacts_ai5_widget_pane_g1

0xe90e,	// (0x0003ddae) cell_contacts_ai5_widget_pane_g2

0xe91a,	// (0x0003ddba) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0003f370) cell_contacts_ai5_widget_pane_g

0xe92c,	// (0x0003ddcc) cell_contacts_ai5_widget_pane_t1

0x3f29,	// (0x000333c9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe9a6,	// (0x0003de46) settings_container_pane

0x48fa,	// (0x00033d9a) listscroll_set_pane_copy1

0x648a,	// (0x0003592a) scroll_pane_cp121_copy1

0xe9b2,	// (0x0003de52) set_content_pane_copy1

0xe9ba,	// (0x0003de5a) aid_height_set_list_copy1_ParamLimits

0xe9ba,	// (0x0003de5a) aid_height_set_list_copy1

0x4de0,	// (0x00034280) aid_size_parent_copy1_ParamLimits

0x4de0,	// (0x00034280) aid_size_parent_copy1

0xe9c6,	// (0x0003de66) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe9c6,	// (0x0003de66) button_value_adjust_pane_cp6_copy1

0x408e,	// (0x0003352e) list_highlight_pane_cp2_copy1_ParamLimits

0x408e,	// (0x0003352e) list_highlight_pane_cp2_copy1

0xe9da,	// (0x0003de7a) list_set_pane_copy1_ParamLimits

0xe9da,	// (0x0003de7a) list_set_pane_copy1

0xe941,	// (0x0003dde1) main_pane_set_t1_copy1_ParamLimits

0xe941,	// (0x0003dde1) main_pane_set_t1_copy1

0xe97b,	// (0x0003de1b) main_pane_set_t2_copy1_ParamLimits

0xe97b,	// (0x0003de1b) main_pane_set_t2_copy1

0xea87,	// (0x0003df27) main_pane_set_t3_copy1

0xea95,	// (0x0003df35) main_pane_set_t4_copy1

0xe99a,	// (0x0003de3a) set_content_pane_g1_copy1_ParamLimits

0xe99a,	// (0x0003de3a) set_content_pane_g1_copy1

0xeaa3,	// (0x0003df43) setting_code_pane_copy1

0xeaab,	// (0x0003df4b) setting_slider_graphic_pane_copy1

0xeaab,	// (0x0003df4b) setting_slider_pane_copy1

0xeaab,	// (0x0003df4b) setting_text_pane_copy1

0xeaab,	// (0x0003df4b) setting_volume_pane_copy1

0xeaa3,	// (0x0003df43) settings_code_pane_cp2_copy1

0xeab3,	// (0x0003df53) settings_code_pane_cp_copy1_ParamLimits

0xeab3,	// (0x0003df53) settings_code_pane_cp_copy1

0xd8a4,	// (0x0003cd44) volume_set_pane_copy1

0xeac7,	// (0x0003df67) volume_set_pane_g10_copy1

0xeacf,	// (0x0003df6f) volume_set_pane_g1_copy1

0xead7,	// (0x0003df77) volume_set_pane_g2_copy1

0xeadf,	// (0x0003df7f) volume_set_pane_g3_copy1

0xeae7,	// (0x0003df87) volume_set_pane_g4_copy1

0xeaef,	// (0x0003df8f) volume_set_pane_g5_copy1

0xeaf7,	// (0x0003df97) volume_set_pane_g6_copy1

0xeaff,	// (0x0003df9f) volume_set_pane_g7_copy1

0xeb07,	// (0x0003dfa7) volume_set_pane_g8_copy1

0xeb0f,	// (0x0003dfaf) volume_set_pane_g9_copy1

0x38e2,	// (0x00032d82) bg_set_opt_pane_cp_copy1_ParamLimits

0x38e2,	// (0x00032d82) bg_set_opt_pane_cp_copy1

0xd8ac,	// (0x0003cd4c) setting_slider_pane_t1_copy1_ParamLimits

0xd8ac,	// (0x0003cd4c) setting_slider_pane_t1_copy1

0xd8ca,	// (0x0003cd6a) setting_slider_pane_t2_copy1_ParamLimits

0xd8ca,	// (0x0003cd6a) setting_slider_pane_t2_copy1

0xd8e4,	// (0x0003cd84) setting_slider_pane_t3_copy1_ParamLimits

0xd8e4,	// (0x0003cd84) setting_slider_pane_t3_copy1

0xd8fc,	// (0x0003cd9c) slider_set_pane_copy1_ParamLimits

0xd8fc,	// (0x0003cd9c) slider_set_pane_copy1

0x3f84,	// (0x00033424) set_opt_bg_pane_g1_copy2

0x3f8c,	// (0x0003342c) set_opt_bg_pane_g2_copy2

0xeb17,	// (0x0003dfb7) set_opt_bg_pane_g3_copy2

0x3f9c,	// (0x0003343c) set_opt_bg_pane_g4_copy2

0x3fa4,	// (0x00033444) set_opt_bg_pane_g5_copy2

0x3fac,	// (0x0003344c) set_opt_bg_pane_g6_copy2

0xeb21,	// (0x0003dfc1) set_opt_bg_pane_g7_copy2

0xeb29,	// (0x0003dfc9) set_opt_bg_pane_g8_copy2

0xeb33,	// (0x0003dfd3) set_opt_bg_pane_g9_copy2

0xeb3d,	// (0x0003dfdd) aid_size_touch_slider_mark_copy1_ParamLimits

0xeb3d,	// (0x0003dfdd) aid_size_touch_slider_mark_copy1

0xeb51,	// (0x0003dff1) slider_set_pane_g1_copy1

0xeb5a,	// (0x0003dffa) slider_set_pane_g2_copy1

0x6bc3,	// (0x00036063) slider_set_pane_g3_copy1_ParamLimits

0x6bc3,	// (0x00036063) slider_set_pane_g3_copy1

0x6bd7,	// (0x00036077) slider_set_pane_g4_copy1_ParamLimits

0x6bd7,	// (0x00036077) slider_set_pane_g4_copy1

0x6bef,	// (0x0003608f) slider_set_pane_g5_copy1_ParamLimits

0x6bef,	// (0x0003608f) slider_set_pane_g5_copy1

0x6bc3,	// (0x00036063) slider_set_pane_g6_copy1_ParamLimits

0x6bc3,	// (0x00036063) slider_set_pane_g6_copy1

0xeb62,	// (0x0003e002) slider_set_pane_g7_copy1_ParamLimits

0xeb62,	// (0x0003e002) slider_set_pane_g7_copy1

0x3886,	// (0x00032d26) bg_set_opt_pane_cp2_copy1

0xeb78,	// (0x0003e018) setting_slider_graphic_pane_g1_copy1

0xeb81,	// (0x0003e021) setting_slider_graphic_pane_t1_copy1

0xeb91,	// (0x0003e031) setting_slider_graphic_pane_t2_copy1

0xeba1,	// (0x0003e041) slider_set_pane_cp_copy1

0xebb1,	// (0x0003e051) input_focus_pane_cp1_copy1

0xebba,	// (0x0003e05a) list_set_text_pane_copy1

0xebc2,	// (0x0003e062) setting_text_pane_g1_copy1

0x9462,	// (0x00038902) set_text_pane_t1_copy1

0xebb1,	// (0x0003e051) input_focus_pane_cp2_copy1

0xebc2,	// (0x0003e062) setting_code_pane_g1_copy1

0xebcb,	// (0x0003e06b) setting_code_pane_t1_copy1

0x5ebb,	// (0x0003535b) list_set_graphic_pane_copy1

0x3886,	// (0x00032d26) bg_set_opt_pane_cp4_copy1

0x4680,	// (0x00033b20) list_set_graphic_pane_g1_copy1_ParamLimits

0x4680,	// (0x00033b20) list_set_graphic_pane_g1_copy1

0xebd9,	// (0x0003e079) list_set_graphic_pane_g2_copy1

0x4698,	// (0x00033b38) list_set_graphic_pane_t1_copy1_ParamLimits

0x4698,	// (0x00033b38) list_set_graphic_pane_t1_copy1

0x6ae3,	// (0x00035f83) rs_clock_indi_pane_g1

0xebe1,	// (0x0003e081) rs_clock_indi_pane_t1

0xebef,	// (0x0003e08f) rs_indi_pane

0xebf7,	// (0x0003e097) rs_indi_pane_g1

0xec00,	// (0x0003e0a0) rs_indi_pane_g2

0xec09,	// (0x0003e0a9) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0003f377) rs_indi_pane_g

0x48fa,	// (0x00033d9a) bg_popup_preview_window_pane_cp03

0xec12,	// (0x0003e0b2) popup_fep_tooltip_window_t1

0xc32b,	// (0x0003b7cb) popup_note2_window_g2_ParamLimits

0xc32b,	// (0x0003b7cb) popup_note2_window_g2

0x0001,

0xfc70,	// (0x0003f110) popup_note2_window_g_ParamLimits

0xfc70,	// (0x0003f110) popup_note2_window_g

0xc7fa,	// (0x0003bc9a) bg_popup_sub_pane_cp11_ParamLimits

0xc807,	// (0x0003bca7) cell_ai3_links_pane_g1_ParamLimits

0xc81e,	// (0x0003bcbe) cell_ai3_links_pane_t1

0x9462,	// (0x00038902) set_text_pane_t1_copy1_ParamLimits

0xa292,	// (0x00039732) cell_graphic_popup_pane_cp2_ParamLimits

0xa292,	// (0x00039732) cell_graphic_popup_pane_cp2

0xd912,	// (0x0003cdb2) cell_graphic_popup_pane_g1_cp2

0x3c7e,	// (0x0003311e) cell_graphic_popup_pane_g2_cp2

0xec20,	// (0x0003e0c0) cell_graphic_popup_pane_g3_cp2

0xec28,	// (0x0003e0c8) cell_graphic_popup_pane_t2_cp2

0x3c8f,	// (0x0003312f) grid_highlight_pane_cp3_cp2

0x4235,	// (0x000336d5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3f29,	// (0x000333c9) main_tmo_pane_ParamLimits

0xdc10,	// (0x0003d0b0) popup_tmo_big_image_note_window

0xe33a,	// (0x0003d7da) cell_ai5_widget_list_pane

0xe342,	// (0x0003d7e2) cell_ai5_widget_lrg_icon_pane

0xd863,	// (0x0003cd03) tmo_note_info_pane_t1_ParamLimits

0xd878,	// (0x0003cd18) tmo_note_info_pane_t2_ParamLimits

0xd88f,	// (0x0003cd2f) tmo_note_info_pane_t3_ParamLimits

0xe863,	// (0x0003dd03) tmo_note_info_pane_t4_ParamLimits

0xe875,	// (0x0003dd15) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0003f365) tmo_note_info_pane_t_ParamLimits

0xe9a6,	// (0x0003de46) settings_container_pane_ParamLimits

0xeba9,	// (0x0003e049) indicator_popup_pane_cp5

0xeba9,	// (0x0003e049) indicator_popup_pane_cp6

0x5ebb,	// (0x0003535b) list_set_graphic_pane_copy1_ParamLimits

0x3872,	// (0x00032d12) bg_popup_window_pane_cp23

0xec36,	// (0x0003e0d6) popup_tmo_big_image_note_window_g1

0xec3f,	// (0x0003e0df) popup_tmo_big_image_note_window_t1

0xec4f,	// (0x0003e0ef) popup_tmo_big_image_note_window_t2

0xec5f,	// (0x0003e0ff) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0003f37e) popup_tmo_big_image_note_window_t

0xec6f,	// (0x0003e10f) cell_ai5_widget_lrg_icon_pane_g1

0xec77,	// (0x0003e117) cell_ai5_widget_lrg_icon_pane_t1

0xec85,	// (0x0003e125) cell_ai5_widget_list_row_pane_ParamLimits

0xec85,	// (0x0003e125) cell_ai5_widget_list_row_pane

0xec9d,	// (0x0003e13d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xec9d,	// (0x0003e13d) cell_ai5_widget_list_row_pane_g1

0xecaa,	// (0x0003e14a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xecaa,	// (0x0003e14a) cell_ai5_widget_list_row_pane_t1

0xecc2,	// (0x0003e162) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xecc2,	// (0x0003e162) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x0003f385) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0003f385) cell_ai5_widget_list_row_pane_t

0x3872,	// (0x00032d12) main_fep_vtchi_ss_pane

0xd929,	// (0x0003cdc9) popup_fep_char_pre_window

0xd931,	// (0x0003cdd1) popup_fep_ituss_window

0xd952,	// (0x0003cdf2) popup_fep_vkbss_window

0xecea,	// (0x0003e18a) grid_vkbss_keypad_pane_ParamLimits

0xecea,	// (0x0003e18a) grid_vkbss_keypad_pane

0xecfa,	// (0x0003e19a) ituss_keypad_pane

0xd97d,	// (0x0003ce1d) aid_vkbss_key_offset_ParamLimits

0xd97d,	// (0x0003ce1d) aid_vkbss_key_offset

0xd989,	// (0x0003ce29) cell_vkbss_key_pane_ParamLimits

0xd989,	// (0x0003ce29) cell_vkbss_key_pane

0x4dd4,	// (0x00034274) bg_cell_vkbss_key_g1_ParamLimits

0x4dd4,	// (0x00034274) bg_cell_vkbss_key_g1

0xed0a,	// (0x0003e1aa) cell_vkbss_key_3p_pane_ParamLimits

0xed0a,	// (0x0003e1aa) cell_vkbss_key_3p_pane

0xed24,	// (0x0003e1c4) cell_vkbss_key_g1_ParamLimits

0xed24,	// (0x0003e1c4) cell_vkbss_key_g1

0xed3e,	// (0x0003e1de) cell_vkbss_key_t1_ParamLimits

0xed3e,	// (0x0003e1de) cell_vkbss_key_t1

0xd99f,	// (0x0003ce3f) cell_ituss_key_pane_ParamLimits

0xd99f,	// (0x0003ce3f) cell_ituss_key_pane

0xed69,	// (0x0003e209) bg_cell_ituss_key_g1_ParamLimits

0xed69,	// (0x0003e209) bg_cell_ituss_key_g1

0xed75,	// (0x0003e215) cell_ituss_key_pane_g1_ParamLimits

0xed75,	// (0x0003e215) cell_ituss_key_pane_g1

0xed89,	// (0x0003e229) cell_ituss_key_pane_g2_ParamLimits

0xed89,	// (0x0003e229) cell_ituss_key_pane_g2

0x0001,

0xfeec,	// (0x0003f38c) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x0003f38c) cell_ituss_key_pane_g

0xedb7,	// (0x0003e257) cell_ituss_key_t1_ParamLimits

0xedb7,	// (0x0003e257) cell_ituss_key_t1

0xeded,	// (0x0003e28d) cell_ituss_key_t2_ParamLimits

0xeded,	// (0x0003e28d) cell_ituss_key_t2

0xee1e,	// (0x0003e2be) cell_ituss_key_t3_ParamLimits

0xee1e,	// (0x0003e2be) cell_ituss_key_t3

0xee58,	// (0x0003e2f8) cell_ituss_key_t4_ParamLimits

0xee58,	// (0x0003e2f8) cell_ituss_key_t4

0x0003,

0xfef1,	// (0x0003f391) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x0003f391) cell_ituss_key_t

0xee92,	// (0x0003e332) cell_vkbss_key_3p_pane_g1

0xee9a,	// (0x0003e33a) cell_vkbss_key_3p_pane_g2

0xeea2,	// (0x0003e342) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x0003f39a) cell_vkbss_key_3p_pane_g

0x3872,	// (0x00032d12) bg_popup_fep_char_preview_window_cp02

0xeeaa,	// (0x0003e34a) popup_fep_char_pre_window_t1

0xd6bd,	// (0x0003cb5d) main_ai5_sk_pane

0xe8ef,	// (0x0003dd8f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe8fb,	// (0x0003dd9b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe90e,	// (0x0003ddae) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe91a,	// (0x0003ddba) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0003f370) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe92c,	// (0x0003ddcc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3f29,	// (0x000333c9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xd9b0,	// (0x0003ce50) main_ai5_sk_pane_g1

0x50f0,	// (0x00034590) popup_query_code_window_g1

0xd947,	// (0x0003cde7) popup_fep_vkb_icf_pane

0xd95b,	// (0x0003cdfb) popup_fep_vtchi_icf_pane

0x3f29,	// (0x000333c9) bg_icf_pane

0xeeb9,	// (0x0003e359) list_vkb_icf_pane

0x3f29,	// (0x000333c9) bg_icf_pane_cp01

0xeec5,	// (0x0003e365) vtchi_icf_list_pane

0xeed6,	// (0x0003e376) list_vkb_icf_pane_t1_ParamLimits

0xeed6,	// (0x0003e376) list_vkb_icf_pane_t1

0xeeef,	// (0x0003e38f) vtchi_icf_list_pane_t1_ParamLimits

0xeeef,	// (0x0003e38f) vtchi_icf_list_pane_t1

0xd931,	// (0x0003cdd1) popup_fep_ituss_window_ParamLimits

0xd95b,	// (0x0003cdfb) popup_fep_vtchi_icf_pane_ParamLimits

0xecfa,	// (0x0003e19a) ituss_keypad_pane_ParamLimits

0xd971,	// (0x0003ce11) ituss_sks_pane

0x3f29,	// (0x000333c9) bg_icf_pane_ParamLimits

0xd91a,	// (0x0003cdba) icf_edit_indi_pane_ParamLimits

0xd91a,	// (0x0003cdba) icf_edit_indi_pane

0xeeb9,	// (0x0003e359) list_vkb_icf_pane_ParamLimits

0x3f29,	// (0x000333c9) bg_icf_pane_cp01_ParamLimits

0xd91a,	// (0x0003cdba) icf_edit_indi_pane_cp01_ParamLimits

0xd91a,	// (0x0003cdba) icf_edit_indi_pane_cp01

0xeecd,	// (0x0003e36d) vtchi_query_pane

0x6cb6,	// (0x00036156) icf_edit_indi_pane_g1_ParamLimits

0x6cb6,	// (0x00036156) icf_edit_indi_pane_g1

0xef7c,	// (0x0003e41c) icf_edit_indi_pane_g2_ParamLimits

0xef7c,	// (0x0003e41c) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x0003f3b2) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x0003f3b2) icf_edit_indi_pane_g

0xef8b,	// (0x0003e42b) icf_edit_indi_pane_t1

0xef12,	// (0x0003e3b2) bg_input_focus_pane_cp042

0x3e62,	// (0x00033302) vtchi_button_pane

0xef1b,	// (0x0003e3bb) vtchi_query_pane_t1

0xef29,	// (0x0003e3c9) vtchi_query_pane_t2

0xef37,	// (0x0003e3d7) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x0003f3a1) vtchi_query_pane_t

0x3872,	// (0x00032d12) bg_button_pane_cp13

0xef45,	// (0x0003e3e5) vtchi_button_pane_g1

0xef4d,	// (0x0003e3ed) ituss_sks_pane_g1

0xef58,	// (0x0003e3f8) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x0003f3a8) ituss_sks_pane_g

0xef60,	// (0x0003e400) ituss_sks_pane_t1

0xef6e,	// (0x0003e40e) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x0003f3ad) ituss_sks_pane_t

0x679c,	// (0x00035c3c) indicator_nsta_pane_cp_g1

0x67a5,	// (0x00035c45) indicator_nsta_pane_cp_g2

0x67ad,	// (0x00035c4d) indicator_nsta_pane_cp_g3

0x67b5,	// (0x00035c55) indicator_nsta_pane_cp_g4

0x67bd,	// (0x00035c5d) indicator_nsta_pane_cp_g5

0x67bd,	// (0x00035c5d) indicator_nsta_pane_cp_g6

0x0005,

0xfaba,	// (0x0003ef5a) indicator_nsta_pane_cp_g

0xf437,	// (0x0003e8d7) cell_graphic2_pane_t2_ParamLimits

0xf437,	// (0x0003e8d7) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0003f267) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0003f267) cell_graphic2_pane_t

0xf464,	// (0x0003e904) cell_graphic2_control_pane_t1

0xa00a,	// (0x000394aa) signal_pane_g3_ParamLimits

0xa00a,	// (0x000394aa) signal_pane_g3

0xa01c,	// (0x000394bc) signal_pane_g4_ParamLimits

0xa01c,	// (0x000394bc) signal_pane_g4

0xecd4,	// (0x0003e174) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xecd4,	// (0x0003e174) cell_ai5_widget_list_row_pane_t3

0xeda5,	// (0x0003e245) cell_ituss_key_pane_t1_ParamLimits

0xeda5,	// (0x0003e245) cell_ituss_key_pane_t1

0x4e30,	// (0x000342d0) form_field_data_wide_pane_vc_t2_ParamLimits

0x4e30,	// (0x000342d0) form_field_data_wide_pane_vc_t2

0x4e44,	// (0x000342e4) form_field_data_wide_pane_vc_t3_ParamLimits

0x4e44,	// (0x000342e4) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0003ecaf) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0003ecaf) form_field_data_wide_pane_vc_t

0x64ca,	// (0x0003596a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x64ca,	// (0x0003596a) form_field_slider_wide_pane_vc_t3

0x65a4,	// (0x00035a44) form_field_popup_wide_pane_vc_t2_ParamLimits

0x65a4,	// (0x00035a44) form_field_popup_wide_pane_vc_t2

0x65bb,	// (0x00035a5b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x65bb,	// (0x00035a5b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa9,	// (0x0003ef49) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa9,	// (0x0003ef49) form_field_popup_wide_pane_vc_t

0xd790,	// (0x0003cc30) aid_fshwr2_btn_pane_ParamLimits

0xd79c,	// (0x0003cc3c) aid_fshwr2_syb_pane_ParamLimits

0xd7a8,	// (0x0003cc48) aid_fshwr2_txt_pane_ParamLimits

0x3f29,	// (0x000333c9) fshwr2_bg_pane_ParamLimits

0xd7b4,	// (0x0003cc54) fshwr2_func_candi_pane_ParamLimits

0xd7c9,	// (0x0003cc69) fshwr2_hwr_syb_pane_ParamLimits

0xd7d9,	// (0x0003cc79) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large

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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003ad6a };

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
0x773d,	// (0x000424a7) Screen

0x7751,	// (0x000424bb) application_window_ParamLimits

0x7751,	// (0x000424bb) application_window

0x776b,	// (0x000424d5) screen_g1

0x5a91,	// (0x000407fb) area_bottom_pane_ParamLimits

0x5a91,	// (0x000407fb) area_bottom_pane

0x5b51,	// (0x000408bb) area_top_pane_ParamLimits

0x5b51,	// (0x000408bb) area_top_pane

0x5be5,	// (0x0004094f) main_pane_ParamLimits

0x5be5,	// (0x0004094f) main_pane

0x7775,	// (0x000424df) misc_graphics

0x976d,	// (0x000444d7) battery_pane_ParamLimits

0x976d,	// (0x000444d7) battery_pane

0xa44f,	// (0x000451b9) bg_status_flat_pane_g8

0xa457,	// (0x000451c1) bg_status_flat_pane_g9

0x9835,	// (0x0004459f) context_pane_ParamLimits

0x9835,	// (0x0004459f) context_pane

0x9959,	// (0x000446c3) navi_pane_ParamLimits

0x9959,	// (0x000446c3) navi_pane

0x99e8,	// (0x00044752) signal_pane_ParamLimits

0x99e8,	// (0x00044752) signal_pane

0x0008,

0xf8b7,	// (0x0004a621) bg_status_flat_pane_g

0x9a55,	// (0x000447bf) status_pane_g1_ParamLimits

0x9a55,	// (0x000447bf) status_pane_g1

0x9a69,	// (0x000447d3) status_pane_g2_ParamLimits

0x9a69,	// (0x000447d3) status_pane_g2

0x9a75,	// (0x000447df) status_pane_g3_ParamLimits

0x9a75,	// (0x000447df) status_pane_g3

0x0004,

0xf7e5,	// (0x0004a54f) status_pane_g_ParamLimits

0xf7e5,	// (0x0004a54f) status_pane_g

0x9aa9,	// (0x00044813) title_pane_ParamLimits

0x9aa9,	// (0x00044813) title_pane

0x9ae6,	// (0x00044850) uni_indicator_pane_ParamLimits

0x9ae6,	// (0x00044850) uni_indicator_pane

0x9056,	// (0x00043dc0) bg_list_pane_ParamLimits

0x9056,	// (0x00043dc0) bg_list_pane

0x9076,	// (0x00043de0) find_pane

0x908a,	// (0x00043df4) listscroll_app_pane_ParamLimits

0x908a,	// (0x00043df4) listscroll_app_pane

0x9096,	// (0x00043e00) listscroll_form_pane

0x909e,	// (0x00043e08) listscroll_gen_pane_ParamLimits

0x909e,	// (0x00043e08) listscroll_gen_pane

0x9096,	// (0x00043e00) listscroll_set_pane

0x82d3,	// (0x0004303d) main_idle_act_pane

0x8d3a,	// (0x00043aa4) main_idle_trad_pane

0x8d3a,	// (0x00043aa4) main_list_empty_pane

0x90c4,	// (0x00043e2e) main_midp_pane

0x90d0,	// (0x00043e3a) main_pane_g1_ParamLimits

0x90d0,	// (0x00043e3a) main_pane_g1

0x90de,	// (0x00043e48) popup_ai_message_window_ParamLimits

0x90de,	// (0x00043e48) popup_ai_message_window

0x918e,	// (0x00043ef8) popup_fep_china_uni_window_ParamLimits

0x918e,	// (0x00043ef8) popup_fep_china_uni_window

0x91ee,	// (0x00043f58) popup_fep_japan_candidate_window_ParamLimits

0x91ee,	// (0x00043f58) popup_fep_japan_candidate_window

0x9218,	// (0x00043f82) popup_fep_japan_predictive_window_ParamLimits

0x9218,	// (0x00043f82) popup_fep_japan_predictive_window

0x924e,	// (0x00043fb8) popup_find_window

0x925b,	// (0x00043fc5) popup_grid_graphic_window_ParamLimits

0x925b,	// (0x00043fc5) popup_grid_graphic_window

0x9289,	// (0x00043ff3) popup_large_graphic_colour_window

0x92af,	// (0x00044019) popup_menu_window_ParamLimits

0x92af,	// (0x00044019) popup_menu_window

0x9479,	// (0x000441e3) popup_note_image_window

0x9463,	// (0x000441cd) popup_note_wait_window_ParamLimits

0x9463,	// (0x000441cd) popup_note_wait_window

0x9463,	// (0x000441cd) popup_note_window_ParamLimits

0x9463,	// (0x000441cd) popup_note_window

0x94df,	// (0x00044249) popup_query_code_window_ParamLimits

0x94df,	// (0x00044249) popup_query_code_window

0x94f5,	// (0x0004425f) popup_query_data_code_window_ParamLimits

0x94f5,	// (0x0004425f) popup_query_data_code_window

0x9518,	// (0x00044282) popup_query_data_window_ParamLimits

0x9518,	// (0x00044282) popup_query_data_window

0x953a,	// (0x000442a4) popup_query_sat_info_window_ParamLimits

0x953a,	// (0x000442a4) popup_query_sat_info_window

0x9579,	// (0x000442e3) popup_snote_single_graphic_window_ParamLimits

0x9579,	// (0x000442e3) popup_snote_single_graphic_window

0x9579,	// (0x000442e3) popup_snote_single_text_window_ParamLimits

0x9579,	// (0x000442e3) popup_snote_single_text_window

0x9590,	// (0x000442fa) popup_sub_window_general

0x96d6,	// (0x00044440) popup_window_general_ParamLimits

0x96d6,	// (0x00044440) popup_window_general

0x96ef,	// (0x00044459) power_save_pane

0x6423,	// (0x0004118d) control_pane_g1_ParamLimits

0x6423,	// (0x0004118d) control_pane_g1

0x644c,	// (0x000411b6) control_pane_g2_ParamLimits

0x644c,	// (0x000411b6) control_pane_g2

0x9007,	// (0x00043d71) control_pane_g3_ParamLimits

0x9007,	// (0x00043d71) control_pane_g3

0x0007,

0xf7cd,	// (0x0004a537) control_pane_g_ParamLimits

0xf7cd,	// (0x0004a537) control_pane_g

0x6497,	// (0x00041201) control_pane_t1_ParamLimits

0x6497,	// (0x00041201) control_pane_t1

0x64e9,	// (0x00041253) control_pane_t2_ParamLimits

0x64e9,	// (0x00041253) control_pane_t2

0x0002,

0xf7de,	// (0x0004a548) control_pane_t_ParamLimits

0xf7de,	// (0x0004a548) control_pane_t

0x8f28,	// (0x00043c92) navi_navi_volume_pane_cp1

0x8f31,	// (0x00043c9b) status_small_icon_pane

0x8f39,	// (0x00043ca3) status_small_pane_g1_ParamLimits

0x8f39,	// (0x00043ca3) status_small_pane_g1

0x8f6d,	// (0x00043cd7) status_small_pane_g2_ParamLimits

0x8f6d,	// (0x00043cd7) status_small_pane_g2

0x8f79,	// (0x00043ce3) status_small_pane_g3_ParamLimits

0x8f79,	// (0x00043ce3) status_small_pane_g3

0x8f85,	// (0x00043cef) status_small_pane_g4_ParamLimits

0x8f85,	// (0x00043cef) status_small_pane_g4

0x8f91,	// (0x00043cfb) status_small_pane_g5_ParamLimits

0x8f91,	// (0x00043cfb) status_small_pane_g5

0x8fa0,	// (0x00043d0a) status_small_pane_g6_ParamLimits

0x8fa0,	// (0x00043d0a) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0004a526) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0004a526) status_small_pane_g

0x8fd0,	// (0x00043d3a) status_small_pane_t1

0x8ff3,	// (0x00043d5d) status_small_wait_pane_ParamLimits

0x8ff3,	// (0x00043d5d) status_small_wait_pane

0x87d1,	// (0x0004353b) aid_levels_signal_ParamLimits

0x87d1,	// (0x0004353b) aid_levels_signal

0x87e3,	// (0x0004354d) signal_pane_g1_ParamLimits

0x87e3,	// (0x0004354d) signal_pane_g1

0x87f8,	// (0x00043562) signal_pane_g2_ParamLimits

0x87f8,	// (0x00043562) signal_pane_g2

0x0001,

0xf751,	// (0x0004a4bb) signal_pane_g_ParamLimits

0xf751,	// (0x0004a4bb) signal_pane_g

0x880d,	// (0x00043577) context_pane_g1

0x777f,	// (0x000424e9) title_pane_g1

0x77b5,	// (0x0004251f) title_pane_t1

0x781d,	// (0x00042587) title_pane_t2

0x7843,	// (0x000425ad) title_pane_t3

0x0002,

0xf59b,	// (0x0004a305) title_pane_t

0x9afe,	// (0x00044868) aid_levels_battery_ParamLimits

0x9afe,	// (0x00044868) aid_levels_battery

0x9b12,	// (0x0004487c) battery_pane_g1_ParamLimits

0x9b12,	// (0x0004487c) battery_pane_g1

0x9b28,	// (0x00044892) battery_pane_g2_ParamLimits

0x9b28,	// (0x00044892) battery_pane_g2

0x0001,

0xf7f0,	// (0x0004a55a) battery_pane_g_ParamLimits

0xf7f0,	// (0x0004a55a) battery_pane_g

0xad9f,	// (0x00045b09) uni_indicator_pane_g1

0xadb4,	// (0x00045b1e) uni_indicator_pane_g2

0xadca,	// (0x00045b34) uni_indicator_pane_g3

0x0005,

0xf95f,	// (0x0004a6c9) uni_indicator_pane_g

0x8ba8,	// (0x00043912) navi_icon_pane_ParamLimits

0x8ba8,	// (0x00043912) navi_icon_pane

0x8aef,	// (0x00043859) navi_midp_pane

0x8bc4,	// (0x0004392e) navi_navi_pane

0x8bce,	// (0x00043938) navi_text_pane_ParamLimits

0x8bce,	// (0x00043938) navi_text_pane

0x776b,	// (0x000424d5) status_small_wait_pane_g1

0x7c87,	// (0x000429f1) status_small_wait_pane_g2

0x0001,

0xf95a,	// (0x0004a6c4) status_small_wait_pane_g

0xaab2,	// (0x0004581c) navi_navi_icon_text_pane

0xaaba,	// (0x00045824) navi_navi_pane_g1_ParamLimits

0xaaba,	// (0x00045824) navi_navi_pane_g1

0xaacc,	// (0x00045836) navi_navi_pane_g2_ParamLimits

0xaacc,	// (0x00045836) navi_navi_pane_g2

0x0001,

0xf928,	// (0x0004a692) navi_navi_pane_g_ParamLimits

0xf928,	// (0x0004a692) navi_navi_pane_g

0xaade,	// (0x00045848) navi_navi_tabs_pane

0xaae7,	// (0x00045851) navi_navi_text_pane

0xaab2,	// (0x0004581c) navi_navi_volume_pane

0xaa8b,	// (0x000457f5) navi_text_pane_t1

0xaa7c,	// (0x000457e6) navi_icon_pane_g1

0xa9cf,	// (0x00045739) navi_navi_text_pane_t1

0x6818,	// (0x00041582) navi_navi_volume_pane_g1

0x6820,	// (0x0004158a) volume_small_pane

0xa935,	// (0x0004569f) navi_navi_icon_text_pane_g1

0xa93d,	// (0x000456a7) navi_navi_icon_text_pane_t1

0x8bc4,	// (0x0004392e) navi_tabs_2_long_pane

0x8bc4,	// (0x0004392e) navi_tabs_2_pane

0x8bc4,	// (0x0004392e) navi_tabs_3_long_pane

0x8bc4,	// (0x0004392e) navi_tabs_3_pane

0x8bc4,	// (0x0004392e) navi_tabs_4_pane

0x67f8,	// (0x00041562) tabs_2_active_pane_ParamLimits

0x67f8,	// (0x00041562) tabs_2_active_pane

0x6808,	// (0x00041572) tabs_2_passive_pane_ParamLimits

0x6808,	// (0x00041572) tabs_2_passive_pane

0x67c6,	// (0x00041530) tabs_3_active_pane_ParamLimits

0x67c6,	// (0x00041530) tabs_3_active_pane

0x67d6,	// (0x00041540) tabs_3_passive_pane_ParamLimits

0x67d6,	// (0x00041540) tabs_3_passive_pane

0x67e7,	// (0x00041551) tabs_3_passive_pane_cp_ParamLimits

0x67e7,	// (0x00041551) tabs_3_passive_pane_cp

0x677a,	// (0x000414e4) tabs_4_active_pane_ParamLimits

0x677a,	// (0x000414e4) tabs_4_active_pane

0x678d,	// (0x000414f7) tabs_4_passive_pane_ParamLimits

0x678d,	// (0x000414f7) tabs_4_passive_pane

0x679e,	// (0x00041508) tabs_4_passive_pane_cp_ParamLimits

0x679e,	// (0x00041508) tabs_4_passive_pane_cp

0x67af,	// (0x00041519) tabs_4_passive_pane_cp2_ParamLimits

0x67af,	// (0x00041519) tabs_4_passive_pane_cp2

0x6756,	// (0x000414c0) tabs_2_long_active_pane_ParamLimits

0x6756,	// (0x000414c0) tabs_2_long_active_pane

0x6768,	// (0x000414d2) tabs_2_long_passive_pane_ParamLimits

0x6768,	// (0x000414d2) tabs_2_long_passive_pane

0x6717,	// (0x00041481) tabs_3_long_active_pane_ParamLimits

0x6717,	// (0x00041481) tabs_3_long_active_pane

0x672a,	// (0x00041494) tabs_3_long_passive_pane_ParamLimits

0x672a,	// (0x00041494) tabs_3_long_passive_pane

0x6743,	// (0x000414ad) tabs_3_long_passive_pane_cp_ParamLimits

0x6743,	// (0x000414ad) tabs_3_long_passive_pane_cp

0x66bd,	// (0x00041427) volume_small_pane_g1

0x66c6,	// (0x00041430) volume_small_pane_g2

0x66cf,	// (0x00041439) volume_small_pane_g3

0x66d8,	// (0x00041442) volume_small_pane_g4

0x66e1,	// (0x0004144b) volume_small_pane_g5

0x66ea,	// (0x00041454) volume_small_pane_g6

0x66f3,	// (0x0004145d) volume_small_pane_g7

0x66fc,	// (0x00041466) volume_small_pane_g8

0x6705,	// (0x0004146f) volume_small_pane_g9

0x670e,	// (0x00041478) volume_small_pane_g10

0x0009,

0xf8f4,	// (0x0004a65e) volume_small_pane_g

0x7855,	// (0x000425bf) bg_active_tab_pane_cp2_ParamLimits

0x7855,	// (0x000425bf) bg_active_tab_pane_cp2

0x7863,	// (0x000425cd) tabs_3_active_pane_g1

0x786b,	// (0x000425d5) tabs_3_active_pane_t1

0x7855,	// (0x000425bf) bg_passive_tab_pane_cp2_ParamLimits

0x7855,	// (0x000425bf) bg_passive_tab_pane_cp2

0x7863,	// (0x000425cd) tabs_3_passive_pane_g1

0x786b,	// (0x000425d5) tabs_3_passive_pane_t1

0x7855,	// (0x000425bf) bg_active_tab_pane_cp3_ParamLimits

0x7855,	// (0x000425bf) bg_active_tab_pane_cp3

0x787d,	// (0x000425e7) tabs_4_active_pane_g1

0x7885,	// (0x000425ef) tabs_4_active_pane_t1

0x7855,	// (0x000425bf) bg_passive_tab_pane_cp3_ParamLimits

0x7855,	// (0x000425bf) bg_passive_tab_pane_cp3

0x787d,	// (0x000425e7) tabs_4_1_passive_pane_g1

0x7885,	// (0x000425ef) tabs_4_1_passive_pane_t1

0x90c4,	// (0x00043e2e) list_highlight_pane_cp2

0xb02e,	// (0x00045d98) list_set_pane_ParamLimits

0xb02e,	// (0x00045d98) list_set_pane

0xb0f6,	// (0x00045e60) main_pane_set_t1_ParamLimits

0xb0f6,	// (0x00045e60) main_pane_set_t1

0xb116,	// (0x00045e80) main_pane_set_t2_ParamLimits

0xb116,	// (0x00045e80) main_pane_set_t2

0xb12a,	// (0x00045e94) main_pane_set_t3_ParamLimits

0xb12a,	// (0x00045e94) main_pane_set_t3

0xb13e,	// (0x00045ea8) main_pane_set_t4_ParamLimits

0xb13e,	// (0x00045ea8) main_pane_set_t4

0x0003,

0xf9c4,	// (0x0004a72e) main_pane_set_t_ParamLimits

0xf9c4,	// (0x0004a72e) main_pane_set_t

0xb15e,	// (0x00045ec8) setting_code_pane

0xb168,	// (0x00045ed2) setting_slider_graphic_pane

0xb168,	// (0x00045ed2) setting_slider_pane

0xb168,	// (0x00045ed2) setting_text_pane

0xb168,	// (0x00045ed2) setting_volume_pane

0x5e3c,	// (0x00040ba6) volume_set_pane

0x7855,	// (0x000425bf) bg_set_opt_pane_cp

0x5e46,	// (0x00040bb0) setting_slider_pane_t1

0x5e5c,	// (0x00040bc6) setting_slider_pane_t2

0x5e76,	// (0x00040be0) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0004a30c) setting_slider_pane_t

0x5e8e,	// (0x00040bf8) slider_set_pane

0x7775,	// (0x000424df) bg_set_opt_pane_cp2

0x7897,	// (0x00042601) setting_slider_graphic_pane_g1

0x5ea4,	// (0x00040c0e) setting_slider_graphic_pane_t1

0x5eb4,	// (0x00040c1e) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0004a313) setting_slider_graphic_pane_t

0x5ec4,	// (0x00040c2e) slider_set_pane_cp

0x7775,	// (0x000424df) input_focus_pane_cp1

0xafef,	// (0x00045d59) list_set_text_pane

0x776b,	// (0x000424d5) setting_text_pane_g1

0x7775,	// (0x000424df) input_focus_pane_cp2

0x776b,	// (0x000424d5) setting_code_pane_g1

0x78a0,	// (0x0004260a) setting_code_pane_t1

0x4ccc,	// (0x0003fa36) set_text_pane_t1_ParamLimits

0x4ccc,	// (0x0003fa36) set_text_pane_t1

0x8143,	// (0x00042ead) set_opt_bg_pane_g1

0x814b,	// (0x00042eb5) set_opt_bg_pane_g2

0xafc7,	// (0x00045d31) set_opt_bg_pane_g3

0x815b,	// (0x00042ec5) set_opt_bg_pane_g4

0x8163,	// (0x00042ecd) set_opt_bg_pane_g5

0x816b,	// (0x00042ed5) set_opt_bg_pane_g6

0xafd1,	// (0x00045d3b) set_opt_bg_pane_g7

0xafdb,	// (0x00045d45) set_opt_bg_pane_g8

0xafe5,	// (0x00045d4f) set_opt_bg_pane_g9

0x0008,

0xf9b1,	// (0x0004a71b) set_opt_bg_pane_g

0xafba,	// (0x00045d24) slider_set_pane_g1

0x68a1,	// (0x0004160b) slider_set_pane_g2

0x0006,

0xf9a2,	// (0x0004a70c) slider_set_pane_g

0x6829,	// (0x00041593) volume_set_pane_g1

0x6833,	// (0x0004159d) volume_set_pane_g2

0x683d,	// (0x000415a7) volume_set_pane_g3

0x6847,	// (0x000415b1) volume_set_pane_g4

0x6851,	// (0x000415bb) volume_set_pane_g5

0x685b,	// (0x000415c5) volume_set_pane_g6

0x6865,	// (0x000415cf) volume_set_pane_g7

0x686f,	// (0x000415d9) volume_set_pane_g8

0x6879,	// (0x000415e3) volume_set_pane_g9

0x6883,	// (0x000415ed) volume_set_pane_g10

0x0009,

0xf97a,	// (0x0004a6e4) volume_set_pane_g

0x78ae,	// (0x00042618) indicator_pane_ParamLimits

0x78ae,	// (0x00042618) indicator_pane

0x78ba,	// (0x00042624) main_idle_pane_g2_ParamLimits

0x78ba,	// (0x00042624) main_idle_pane_g2

0x78e2,	// (0x0004264c) main_pane_idle_g1_ParamLimits

0x78e2,	// (0x0004264c) main_pane_idle_g1

0x78f0,	// (0x0004265a) popup_clock_digital_analogue_window_ParamLimits

0x78f0,	// (0x0004265a) popup_clock_digital_analogue_window

0x7907,	// (0x00042671) soft_indicator_pane_ParamLimits

0x7907,	// (0x00042671) soft_indicator_pane

0x7915,	// (0x0004267f) wallpaper_pane_ParamLimits

0x7915,	// (0x0004267f) wallpaper_pane

0x776b,	// (0x000424d5) wallpaper_pane_g1

0x7929,	// (0x00042693) indicator_pane_g1_ParamLimits

0x7929,	// (0x00042693) indicator_pane_g1

0xb42c,	// (0x00046196) navi_navi_icon_text_pane_srt_g1

0x7944,	// (0x000426ae) soft_indicator_pane_t1

0x795e,	// (0x000426c8) aid_ps_area_pane

0x796f,	// (0x000426d9) aid_ps_clock_pane

0x797d,	// (0x000426e7) aid_ps_indicator_pane

0x7989,	// (0x000426f3) indicator_ps_pane_ParamLimits

0x7989,	// (0x000426f3) indicator_ps_pane

0x7998,	// (0x00042702) power_save_pane_g1_ParamLimits

0x7998,	// (0x00042702) power_save_pane_g1

0x79a4,	// (0x0004270e) power_save_pane_g2_ParamLimits

0x79a4,	// (0x0004270e) power_save_pane_g2

0x5a45,	// (0x000407af) aid_navinavi_width_pane

0x795e,	// (0x000426c8) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0004a318) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0004a318) power_save_pane_g

0x79b2,	// (0x0004271c) power_save_pane_t1_ParamLimits

0x79b2,	// (0x0004271c) power_save_pane_t1

0x796f,	// (0x000426d9) aid_ps_clock_pane_ParamLimits

0x797d,	// (0x000426e7) aid_ps_indicator_pane_ParamLimits

0x79c4,	// (0x0004272e) power_save_pane_t4_ParamLimits

0x79c4,	// (0x0004272e) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0004a31d) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0004a31d) power_save_pane_t

0x79ee,	// (0x00042758) power_save_t3_ParamLimits

0x79ee,	// (0x00042758) power_save_t3

0x79d9,	// (0x00042743) power_save_t2_ParamLimits

0x79d9,	// (0x00042743) power_save_t2

0x7a03,	// (0x0004276d) indicator_ps_pane_g1

0x7a0c,	// (0x00042776) ai_gene_pane_ParamLimits

0x7a0c,	// (0x00042776) ai_gene_pane

0x7a18,	// (0x00042782) ai_links_pane_ParamLimits

0x7a18,	// (0x00042782) ai_links_pane

0x7a24,	// (0x0004278e) indicator_pane_cp1_ParamLimits

0x7a24,	// (0x0004278e) indicator_pane_cp1

0x7a30,	// (0x0004279a) main_pane_idle_g1_cp_ParamLimits

0x7a30,	// (0x0004279a) main_pane_idle_g1_cp

0x7a3c,	// (0x000427a6) popup_ai_links_title_window

0x7a45,	// (0x000427af) soft_indicator_pane_cp1_ParamLimits

0x7a45,	// (0x000427af) soft_indicator_pane_cp1

0xad8d,	// (0x00045af7) ai_links_pane_g1

0xad96,	// (0x00045b00) grid_ai_links_pane

0xad72,	// (0x00045adc) ai_gene_pane_1

0xad7b,	// (0x00045ae5) ai_gene_pane_2

0xad84,	// (0x00045aee) list_highlight_pane_cp4

0xad52,	// (0x00045abc) cell_ai_link_pane_ParamLimits

0xad52,	// (0x00045abc) cell_ai_link_pane

0xad4a,	// (0x00045ab4) cell_ai_link_pane_g1

0x7c87,	// (0x000429f1) cell_ai_link_pane_g2

0x0001,

0xf955,	// (0x0004a6bf) cell_ai_link_pane_g

0x7775,	// (0x000424df) grid_highlight_cp2

0x7775,	// (0x000424df) bg_popup_sub_pane_cp1

0x7a5f,	// (0x000427c9) popup_ai_links_title_window_t1

0xac96,	// (0x00045a00) ai_gene_pane_1_g1_ParamLimits

0xac96,	// (0x00045a00) ai_gene_pane_1_g1

0xaca2,	// (0x00045a0c) ai_gene_pane_1_g2_ParamLimits

0xaca2,	// (0x00045a0c) ai_gene_pane_1_g2

0x0001,

0xf94b,	// (0x0004a6b5) ai_gene_pane_1_g_ParamLimits

0xf94b,	// (0x0004a6b5) ai_gene_pane_1_g

0xacaf,	// (0x00045a19) ai_gene_pane_1_t1_ParamLimits

0xacaf,	// (0x00045a19) ai_gene_pane_1_t1

0xace3,	// (0x00045a4d) grid_ai_soft_ind_pane

0xac81,	// (0x000459eb) ai_gene_pane_2_t1_ParamLimits

0xac81,	// (0x000459eb) ai_gene_pane_2_t1

0x7a6e,	// (0x000427d8) main_pane_empty_t1_ParamLimits

0x7a6e,	// (0x000427d8) main_pane_empty_t1

0x7a86,	// (0x000427f0) main_pane_empty_t2_ParamLimits

0x7a86,	// (0x000427f0) main_pane_empty_t2

0x7a9b,	// (0x00042805) main_pane_empty_t3_ParamLimits

0x7a9b,	// (0x00042805) main_pane_empty_t3

0x7aad,	// (0x00042817) main_pane_empty_t4_ParamLimits

0x7aad,	// (0x00042817) main_pane_empty_t4

0x7abf,	// (0x00042829) main_pane_empty_t5_ParamLimits

0x7abf,	// (0x00042829) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0004a322) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0004a322) main_pane_empty_t

0x8194,	// (0x00042efe) bg_popup_window_pane_ParamLimits

0x8194,	// (0x00042efe) bg_popup_window_pane

0xa9dd,	// (0x00045747) find_popup_pane_cp2_ParamLimits

0xa9dd,	// (0x00045747) find_popup_pane_cp2

0xa9e9,	// (0x00045753) heading_pane_ParamLimits

0xa9e9,	// (0x00045753) heading_pane

0x7775,	// (0x000424df) bg_popup_sub_pane

0xa957,	// (0x000456c1) bg_popup_window_pane_g1_ParamLimits

0xa957,	// (0x000456c1) bg_popup_window_pane_g1

0xa963,	// (0x000456cd) bg_popup_window_pane_g2_ParamLimits

0xa963,	// (0x000456cd) bg_popup_window_pane_g2

0xa96f,	// (0x000456d9) bg_popup_window_pane_g3_ParamLimits

0xa96f,	// (0x000456d9) bg_popup_window_pane_g3

0xa97b,	// (0x000456e5) bg_popup_window_pane_g4_ParamLimits

0xa97b,	// (0x000456e5) bg_popup_window_pane_g4

0xa987,	// (0x000456f1) bg_popup_window_pane_g5_ParamLimits

0xa987,	// (0x000456f1) bg_popup_window_pane_g5

0xa993,	// (0x000456fd) bg_popup_window_pane_g6_ParamLimits

0xa993,	// (0x000456fd) bg_popup_window_pane_g6

0xa99f,	// (0x00045709) bg_popup_window_pane_g7_ParamLimits

0xa99f,	// (0x00045709) bg_popup_window_pane_g7

0xa9ab,	// (0x00045715) bg_popup_window_pane_g8_ParamLimits

0xa9ab,	// (0x00045715) bg_popup_window_pane_g8

0xa9b7,	// (0x00045721) bg_popup_window_pane_g9_ParamLimits

0xa9b7,	// (0x00045721) bg_popup_window_pane_g9

0xa9c3,	// (0x0004572d) bg_popup_window_pane_g10_ParamLimits

0xa9c3,	// (0x0004572d) bg_popup_window_pane_g10

0x0009,

0xf913,	// (0x0004a67d) bg_popup_window_pane_g_ParamLimits

0xf913,	// (0x0004a67d) bg_popup_window_pane_g

0xa8ec,	// (0x00045656) bg_popup_heading_pane_ParamLimits

0xa8ec,	// (0x00045656) bg_popup_heading_pane

0x6913,	// (0x0004167d) tabs_4_passive_pane_cp_srt_ParamLimits

0x6913,	// (0x0004167d) tabs_4_passive_pane_cp_srt

0x6925,	// (0x0004168f) tabs_4_passive_pane_srt_ParamLimits

0xa900,	// (0x0004566a) heading_pane_g2

0x6925,	// (0x0004168f) tabs_4_passive_pane_srt

0x90c4,	// (0x00043e2e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x90c4,	// (0x00043e2e) bg_passive_tab_pane_cp3_srt

0xa908,	// (0x00045672) heading_pane_t1_ParamLimits

0xa908,	// (0x00045672) heading_pane_t1

0xa91f,	// (0x00045689) heading_pane_t2_ParamLimits

0xa91f,	// (0x00045689) heading_pane_t2

0x0001,

0xf90e,	// (0x0004a678) heading_pane_t_ParamLimits

0xf90e,	// (0x0004a678) heading_pane_t

0xa417,	// (0x00045181) bg_popup_heading_pane_g1

0xa4c6,	// (0x00045230) bg_popup_heading_pane_g2

0xa4d0,	// (0x0004523a) bg_popup_heading_pane_g3

0xa4da,	// (0x00045244) bg_popup_heading_pane_g4

0xa4e4,	// (0x0004524e) bg_popup_heading_pane_g5

0xa4ee,	// (0x00045258) bg_popup_heading_pane_g6

0xa4f6,	// (0x00045260) bg_popup_heading_pane_g7

0xa4fe,	// (0x00045268) bg_popup_heading_pane_g8

0xa508,	// (0x00045272) bg_popup_heading_pane_g9

0x0008,

0xf8ca,	// (0x0004a634) bg_popup_heading_pane_g

0x9c00,	// (0x0004496a) bg_popup_sub_pane_g1

0x9c08,	// (0x00044972) bg_popup_sub_pane_g2

0x9c10,	// (0x0004497a) bg_popup_sub_pane_g3

0x9c18,	// (0x00044982) bg_popup_sub_pane_g4

0x9c20,	// (0x0004498a) bg_popup_sub_pane_g5

0x9c28,	// (0x00044992) bg_popup_sub_pane_g6

0x9c30,	// (0x0004499a) bg_popup_sub_pane_g7

0x9c38,	// (0x000449a2) bg_popup_sub_pane_g8

0x9c40,	// (0x000449aa) bg_popup_sub_pane_g9

0x0008,

0xf8a4,	// (0x0004a60e) bg_popup_sub_pane_g

0x7ad1,	// (0x0004283b) bg_popup_window_pane_cp5_ParamLimits

0x7ad1,	// (0x0004283b) bg_popup_window_pane_cp5

0x7aed,	// (0x00042857) popup_note_window_g1_ParamLimits

0x7aed,	// (0x00042857) popup_note_window_g1

0x7af9,	// (0x00042863) popup_note_window_t1_ParamLimits

0x7af9,	// (0x00042863) popup_note_window_t1

0x7b0f,	// (0x00042879) popup_note_window_t2_ParamLimits

0x7b0f,	// (0x00042879) popup_note_window_t2

0x7b25,	// (0x0004288f) popup_note_window_t3_ParamLimits

0x7b25,	// (0x0004288f) popup_note_window_t3

0x7b3b,	// (0x000428a5) popup_note_window_t4_ParamLimits

0x7b3b,	// (0x000428a5) popup_note_window_t4

0x7b63,	// (0x000428cd) popup_note_window_t5_ParamLimits

0x7b63,	// (0x000428cd) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0004a32d) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0004a32d) popup_note_window_t

0x7b87,	// (0x000428f1) bg_popup_window_pane_cp6_ParamLimits

0x7b87,	// (0x000428f1) bg_popup_window_pane_cp6

0xa393,	// (0x000450fd) popup_note_image_window_g1_ParamLimits

0xa393,	// (0x000450fd) popup_note_image_window_g1

0xa39f,	// (0x00045109) popup_note_image_window_g2_ParamLimits

0xa39f,	// (0x00045109) popup_note_image_window_g2

0x0001,

0xf898,	// (0x0004a602) popup_note_image_window_g_ParamLimits

0xf898,	// (0x0004a602) popup_note_image_window_g

0xa3b8,	// (0x00045122) popup_note_image_window_t1_ParamLimits

0xa3b8,	// (0x00045122) popup_note_image_window_t1

0xa3d1,	// (0x0004513b) popup_note_image_window_t2_ParamLimits

0xa3d1,	// (0x0004513b) popup_note_image_window_t2

0xa3ea,	// (0x00045154) popup_note_image_window_t3_ParamLimits

0xa3ea,	// (0x00045154) popup_note_image_window_t3

0x0002,

0xf89d,	// (0x0004a607) popup_note_image_window_t_ParamLimits

0xf89d,	// (0x0004a607) popup_note_image_window_t

0xa253,	// (0x00044fbd) bg_popup_window_pane_cp7_ParamLimits

0xa253,	// (0x00044fbd) bg_popup_window_pane_cp7

0xa283,	// (0x00044fed) popup_note_wait_window_g1_ParamLimits

0xa283,	// (0x00044fed) popup_note_wait_window_g1

0xa28f,	// (0x00044ff9) popup_note_wait_window_g2_ParamLimits

0xa28f,	// (0x00044ff9) popup_note_wait_window_g2

0x0002,

0xf886,	// (0x0004a5f0) popup_note_wait_window_g_ParamLimits

0xf886,	// (0x0004a5f0) popup_note_wait_window_g

0xa2a7,	// (0x00045011) popup_note_wait_window_t1_ParamLimits

0xa2a7,	// (0x00045011) popup_note_wait_window_t1

0xa2ce,	// (0x00045038) popup_note_wait_window_t2_ParamLimits

0xa2ce,	// (0x00045038) popup_note_wait_window_t2

0xa2ec,	// (0x00045056) popup_note_wait_window_t3_ParamLimits

0xa2ec,	// (0x00045056) popup_note_wait_window_t3

0xa2ff,	// (0x00045069) popup_note_wait_window_t4_ParamLimits

0xa2ff,	// (0x00045069) popup_note_wait_window_t4

0x0004,

0xf88d,	// (0x0004a5f7) popup_note_wait_window_t_ParamLimits

0xf88d,	// (0x0004a5f7) popup_note_wait_window_t

0xa324,	// (0x0004508e) wait_bar_pane_ParamLimits

0xa324,	// (0x0004508e) wait_bar_pane

0x7775,	// (0x000424df) wait_anim_pane

0x7775,	// (0x000424df) wait_border_pane

0x776b,	// (0x000424d5) wait_anim_pane_g1

0x776b,	// (0x000424d5) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0004a4b6) wait_anim_pane_g

0xa1f7,	// (0x00044f61) wait_border_pane_g1

0xa202,	// (0x00044f6c) wait_border_pane_g2

0xa20b,	// (0x00044f75) wait_border_pane_g3

0x0002,

0xf87f,	// (0x0004a5e9) wait_border_pane_g

0xa153,	// (0x00044ebd) bg_popup_window_pane_cp16_ParamLimits

0xa153,	// (0x00044ebd) bg_popup_window_pane_cp16

0xa161,	// (0x00044ecb) indicator_popup_pane_cp4_ParamLimits

0xa161,	// (0x00044ecb) indicator_popup_pane_cp4

0xa175,	// (0x00044edf) popup_query_data_window_t1_ParamLimits

0xa175,	// (0x00044edf) popup_query_data_window_t1

0xa187,	// (0x00044ef1) popup_query_data_window_t2_ParamLimits

0xa187,	// (0x00044ef1) popup_query_data_window_t2

0xa1a0,	// (0x00044f0a) popup_query_data_window_t3_ParamLimits

0xa1a0,	// (0x00044f0a) popup_query_data_window_t3

0x0002,

0xf878,	// (0x0004a5e2) popup_query_data_window_t_ParamLimits

0xf878,	// (0x0004a5e2) popup_query_data_window_t

0xa1ba,	// (0x00044f24) query_popup_data_pane_ParamLimits

0xa1ba,	// (0x00044f24) query_popup_data_pane

0xa1ce,	// (0x00044f38) query_popup_data_pane_cp1_ParamLimits

0xa1ce,	// (0x00044f38) query_popup_data_pane_cp1

0x7b87,	// (0x000428f1) bg_popup_window_pane_cp10_ParamLimits

0x7b87,	// (0x000428f1) bg_popup_window_pane_cp10

0xa0b6,	// (0x00044e20) indicator_popup_pane_ParamLimits

0xa0b6,	// (0x00044e20) indicator_popup_pane

0x7be8,	// (0x00042952) popup_query_code_window_t1_ParamLimits

0x7be8,	// (0x00042952) popup_query_code_window_t1

0xa0ce,	// (0x00044e38) popup_query_code_window_t2_ParamLimits

0xa0ce,	// (0x00044e38) popup_query_code_window_t2

0xa10c,	// (0x00044e76) popup_query_code_window_t3_ParamLimits

0xa10c,	// (0x00044e76) popup_query_code_window_t3

0x0002,

0xf871,	// (0x0004a5db) popup_query_code_window_t_ParamLimits

0xf871,	// (0x0004a5db) popup_query_code_window_t

0xa13b,	// (0x00044ea5) query_popup_pane_ParamLimits

0xa13b,	// (0x00044ea5) query_popup_pane

0x7b87,	// (0x000428f1) bg_popup_window_pane_cp15_ParamLimits

0x7b87,	// (0x000428f1) bg_popup_window_pane_cp15

0x7ba7,	// (0x00042911) indicator_popup_pane_cp1_ParamLimits

0x7ba7,	// (0x00042911) indicator_popup_pane_cp1

0x7bba,	// (0x00042924) indicator_popup_pane_cp2_ParamLimits

0x7bba,	// (0x00042924) indicator_popup_pane_cp2

0x7bd5,	// (0x0004293f) popup_query_data_code_window_g1_ParamLimits

0x7bd5,	// (0x0004293f) popup_query_data_code_window_g1

0x7be8,	// (0x00042952) popup_query_data_code_window_t1_ParamLimits

0x7be8,	// (0x00042952) popup_query_data_code_window_t1

0x7bfa,	// (0x00042964) popup_query_data_code_window_t2_ParamLimits

0x7bfa,	// (0x00042964) popup_query_data_code_window_t2

0x7c0c,	// (0x00042976) popup_query_data_code_window_t3_ParamLimits

0x7c0c,	// (0x00042976) popup_query_data_code_window_t3

0x7c22,	// (0x0004298c) popup_query_data_code_window_t4_ParamLimits

0x7c22,	// (0x0004298c) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0004a338) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0004a338) popup_query_data_code_window_t

0x8b64,	// (0x000438ce) list_single_midp_graphic_pane_g3

0x7c3c,	// (0x000429a6) query_popup_data_pane_cp2_ParamLimits

0x7c4f,	// (0x000429b9) query_popup_pane_cp2_ParamLimits

0x7c4f,	// (0x000429b9) query_popup_pane_cp2

0x7775,	// (0x000424df) bg_popup_window_pane_cp11

0xa08a,	// (0x00044df4) heading_pane_cp5

0x7d3f,	// (0x00042aa9) listscroll_popup_info_pane

0x7775,	// (0x000424df) input_focus_pane_cp3

0x7c6a,	// (0x000429d4) query_popup_pane_t1

0x7c78,	// (0x000429e2) list_popup_info_pane_ParamLimits

0x7c78,	// (0x000429e2) list_popup_info_pane

0x7c87,	// (0x000429f1) listscroll_popup_info_pane_g1

0x7c8f,	// (0x000429f9) scroll_pane_cp7

0x7c99,	// (0x00042a03) popup_info_list_pane_t1_ParamLimits

0x7c99,	// (0x00042a03) popup_info_list_pane_t1

0x7cb3,	// (0x00042a1d) popup_info_list_pane_t2_ParamLimits

0x7cb3,	// (0x00042a1d) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0004a341) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0004a341) popup_info_list_pane_t

0x7775,	// (0x000424df) bg_popup_window_pane_cp12

0xb446,	// (0x000461b0) find_popup_pane

0x7855,	// (0x000425bf) bg_popup_window_pane_cp3

0x7ccd,	// (0x00042a37) heading_pane_cp3

0x7cd9,	// (0x00042a43) listscroll_popup_graphic_pane

0x7775,	// (0x000424df) bg_popup_window_pane_cp4

0x7d35,	// (0x00042a9f) heading_pane_cp4

0x7d3f,	// (0x00042aa9) listscroll_popup_colour_pane

0x7d47,	// (0x00042ab1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d47,	// (0x00042ab1) cell_large_graphic_colour_none_popup_pane

0x7d5b,	// (0x00042ac5) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d5b,	// (0x00042ac5) grid_large_graphic_colour_popup_pane

0x7d87,	// (0x00042af1) listscroll_popup_colour_pane_g1_ParamLimits

0x7d87,	// (0x00042af1) listscroll_popup_colour_pane_g1

0x7d9e,	// (0x00042b08) listscroll_popup_colour_pane_g2_ParamLimits

0x7d9e,	// (0x00042b08) listscroll_popup_colour_pane_g2

0x7db5,	// (0x00042b1f) listscroll_popup_colour_pane_g3_ParamLimits

0x7db5,	// (0x00042b1f) listscroll_popup_colour_pane_g3

0x7dc5,	// (0x00042b2f) listscroll_popup_colour_pane_g4_ParamLimits

0x7dc5,	// (0x00042b2f) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0004a346) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0004a346) listscroll_popup_colour_pane_g

0x7dd9,	// (0x00042b43) scroll_pane_cp6_ParamLimits

0x7dd9,	// (0x00042b43) scroll_pane_cp6

0x7deb,	// (0x00042b55) cell_large_graphic_colour_popup_pane_ParamLimits

0x7deb,	// (0x00042b55) cell_large_graphic_colour_popup_pane

0x7e10,	// (0x00042b7a) cell_large_graphic_colour_none_popup_pane_t1

0x7775,	// (0x000424df) grid_highlight_pane_cp5

0x7e1f,	// (0x00042b89) cell_large_graphic_colour_popup_pane_g1

0x7e27,	// (0x00042b91) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0004a34f) cell_large_graphic_colour_popup_pane_g

0x7e2f,	// (0x00042b99) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e38,	// (0x00042ba2) grid_highlight_pane_cp4

0x7e40,	// (0x00042baa) bg_popup_window_pane_cp8_ParamLimits

0x7e40,	// (0x00042baa) bg_popup_window_pane_cp8

0x7e5b,	// (0x00042bc5) popup_snote_single_text_window_g1_ParamLimits

0x7e5b,	// (0x00042bc5) popup_snote_single_text_window_g1

0x7e6d,	// (0x00042bd7) popup_snote_single_text_window_t1_ParamLimits

0x7e6d,	// (0x00042bd7) popup_snote_single_text_window_t1

0x7e80,	// (0x00042bea) popup_snote_single_text_window_t2_ParamLimits

0x7e80,	// (0x00042bea) popup_snote_single_text_window_t2

0x7e93,	// (0x00042bfd) popup_snote_single_text_window_t3_ParamLimits

0x7e93,	// (0x00042bfd) popup_snote_single_text_window_t3

0x7ecc,	// (0x00042c36) popup_snote_single_text_window_t4_ParamLimits

0x7ecc,	// (0x00042c36) popup_snote_single_text_window_t4

0x7f00,	// (0x00042c6a) popup_snote_single_text_window_t5_ParamLimits

0x7f00,	// (0x00042c6a) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0004a354) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0004a354) popup_snote_single_text_window_t

0x7f2f,	// (0x00042c99) bg_popup_window_pane_cp9_ParamLimits

0x7f2f,	// (0x00042c99) bg_popup_window_pane_cp9

0x7e5b,	// (0x00042bc5) popup_snote_single_graphic_window_g1_ParamLimits

0x7e5b,	// (0x00042bc5) popup_snote_single_graphic_window_g1

0x7f3d,	// (0x00042ca7) popup_snote_single_graphic_window_g2_ParamLimits

0x7f3d,	// (0x00042ca7) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0004a35f) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0004a35f) popup_snote_single_graphic_window_g

0x7f49,	// (0x00042cb3) popup_snote_single_graphic_window_t1_ParamLimits

0x7f49,	// (0x00042cb3) popup_snote_single_graphic_window_t1

0x7f5c,	// (0x00042cc6) popup_snote_single_graphic_window_t2_ParamLimits

0x7f5c,	// (0x00042cc6) popup_snote_single_graphic_window_t2

0x7f6f,	// (0x00042cd9) popup_snote_single_graphic_window_t3_ParamLimits

0x7f6f,	// (0x00042cd9) popup_snote_single_graphic_window_t3

0x7fa8,	// (0x00042d12) popup_snote_single_graphic_window_t4_ParamLimits

0x7fa8,	// (0x00042d12) popup_snote_single_graphic_window_t4

0x7fdc,	// (0x00042d46) popup_snote_single_graphic_window_t5_ParamLimits

0x7fdc,	// (0x00042d46) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0004a364) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0004a364) popup_snote_single_graphic_window_t

0xb384,	// (0x000460ee) grid_graphic_popup_pane_ParamLimits

0xb384,	// (0x000460ee) grid_graphic_popup_pane

0xb3b2,	// (0x0004611c) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3b2,	// (0x0004611c) listscroll_popup_graphic_pane_g1

0xb3c6,	// (0x00046130) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3c6,	// (0x00046130) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ee,	// (0x0004a758) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ee,	// (0x0004a758) listscroll_popup_graphic_pane_g

0xb3da,	// (0x00046144) scroll_pane_cp5

0xb32c,	// (0x00046096) cell_graphic_popup_pane_ParamLimits

0xb32c,	// (0x00046096) cell_graphic_popup_pane

0xb30d,	// (0x00046077) cell_graphic_popup_pane_g1

0xb315,	// (0x0004607f) cell_graphic_popup_pane_g2

0x7e2f,	// (0x00042b99) cell_graphic_popup_pane_g3

0x0002,

0xf9e7,	// (0x0004a751) cell_graphic_popup_pane_g

0xb31e,	// (0x00046088) cell_graphic_popup_pane_t2

0x7e38,	// (0x00042ba2) grid_highlight_pane_cp3

0x801d,	// (0x00042d87) list_gen_pane_ParamLimits

0x801d,	// (0x00042d87) list_gen_pane

0x804f,	// (0x00042db9) scroll_pane

0xb26f,	// (0x00045fd9) bg_list_pane_g1_ParamLimits

0xb26f,	// (0x00045fd9) bg_list_pane_g1

0xb28a,	// (0x00045ff4) bg_list_pane_g2_ParamLimits

0xb28a,	// (0x00045ff4) bg_list_pane_g2

0xb29d,	// (0x00046007) bg_list_pane_g3_ParamLimits

0xb29d,	// (0x00046007) bg_list_pane_g3

0xb2af,	// (0x00046019) bg_list_pane_g4_ParamLimits

0xb2af,	// (0x00046019) bg_list_pane_g4

0xb2c1,	// (0x0004602b) bg_list_pane_g5_ParamLimits

0xb2c1,	// (0x0004602b) bg_list_pane_g5

0x0004,

0xf9dc,	// (0x0004a746) bg_list_pane_g_ParamLimits

0xf9dc,	// (0x0004a746) bg_list_pane_g

0xb1ec,	// (0x00045f56) list_double2_graphic_large_graphic_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_double2_graphic_large_graphic_pane

0xb1ec,	// (0x00045f56) list_double2_graphic_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_double2_graphic_pane

0xb1ec,	// (0x00045f56) list_double2_large_graphic_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_double2_large_graphic_pane

0xb1ec,	// (0x00045f56) list_double2_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_double2_pane

0xb1ec,	// (0x00045f56) list_double_graphic_heading_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_double_graphic_heading_pane

0xb1ec,	// (0x00045f56) list_double_graphic_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_double_graphic_pane

0xb1ec,	// (0x00045f56) list_double_heading_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_double_heading_pane

0xb1ec,	// (0x00045f56) list_double_large_graphic_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_double_large_graphic_pane

0xb1ec,	// (0x00045f56) list_double_number_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_double_number_pane

0xb1ec,	// (0x00045f56) list_double_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_double_pane

0xb1ec,	// (0x00045f56) list_double_time_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_double_time_pane

0xb1ec,	// (0x00045f56) list_setting_number_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_setting_number_pane

0xb1ec,	// (0x00045f56) list_setting_pane_ParamLimits

0xb1ec,	// (0x00045f56) list_setting_pane

0xb22b,	// (0x00045f95) list_single_2graphic_pane_ParamLimits

0xb22b,	// (0x00045f95) list_single_2graphic_pane

0xb22b,	// (0x00045f95) list_single_graphic_heading_pane_ParamLimits

0xb22b,	// (0x00045f95) list_single_graphic_heading_pane

0xb22b,	// (0x00045f95) list_single_graphic_pane_ParamLimits

0xb22b,	// (0x00045f95) list_single_graphic_pane

0xb22b,	// (0x00045f95) list_single_heading_pane_ParamLimits

0xb22b,	// (0x00045f95) list_single_heading_pane

0x68d7,	// (0x00041641) list_single_large_graphic_pane_ParamLimits

0x68d7,	// (0x00041641) list_single_large_graphic_pane

0xb22b,	// (0x00045f95) list_single_number_heading_pane_ParamLimits

0xb22b,	// (0x00045f95) list_single_number_heading_pane

0xb22b,	// (0x00045f95) list_single_number_pane_ParamLimits

0xb22b,	// (0x00045f95) list_single_number_pane

0xb22b,	// (0x00045f95) list_single_pane_ParamLimits

0xb22b,	// (0x00045f95) list_single_pane

0x7775,	// (0x000424df) list_highlight_pane_cp1

0x907e,	// (0x00043de8) list_single_pane_g1_ParamLimits

0x907e,	// (0x00043de8) list_single_pane_g1

0x5ecc,	// (0x00040c36) list_single_pane_g2_ParamLimits

0x5ecc,	// (0x00040c36) list_single_pane_g2

0x0001,

0xf616,	// (0x0004a380) list_single_pane_g_ParamLimits

0xf616,	// (0x0004a380) list_single_pane_g

0x55b5,	// (0x0004031f) list_single_pane_t1_ParamLimits

0x55b5,	// (0x0004031f) list_single_pane_t1

0x907e,	// (0x00043de8) list_single_number_pane_g1_ParamLimits

0x907e,	// (0x00043de8) list_single_number_pane_g1

0x5ecc,	// (0x00040c36) list_single_number_pane_g2_ParamLimits

0x5ecc,	// (0x00040c36) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0004a380) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0004a380) list_single_number_pane_g

0x5557,	// (0x000402c1) list_single_number_pane_t1_ParamLimits

0x5557,	// (0x000402c1) list_single_number_pane_t1

0x556d,	// (0x000402d7) list_single_number_pane_t2_ParamLimits

0x556d,	// (0x000402d7) list_single_number_pane_t2

0x0001,

0xf99d,	// (0x0004a707) list_single_number_pane_t_ParamLimits

0xf99d,	// (0x0004a707) list_single_number_pane_t

0x4ce5,	// (0x0003fa4f) list_single_graphic_pane_g1_ParamLimits

0x4ce5,	// (0x0003fa4f) list_single_graphic_pane_g1

0x907e,	// (0x00043de8) list_single_graphic_pane_g2_ParamLimits

0x907e,	// (0x00043de8) list_single_graphic_pane_g2

0x5ecc,	// (0x00040c36) list_single_graphic_pane_g3_ParamLimits

0x5ecc,	// (0x00040c36) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0004a36f) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0004a36f) list_single_graphic_pane_g

0x4cf1,	// (0x0003fa5b) list_single_graphic_pane_t1_ParamLimits

0x4cf1,	// (0x0003fa5b) list_single_graphic_pane_t1

0x4d07,	// (0x0003fa71) list_single_heading_pane_g1_ParamLimits

0x4d07,	// (0x0003fa71) list_single_heading_pane_g1

0x5ecc,	// (0x00040c36) list_single_heading_pane_g2_ParamLimits

0x5ecc,	// (0x00040c36) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0004a376) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0004a376) list_single_heading_pane_g

0x4d1a,	// (0x0003fa84) list_single_heading_pane_t1_ParamLimits

0x4d1a,	// (0x0003fa84) list_single_heading_pane_t1

0x5ed8,	// (0x00040c42) list_single_heading_pane_t2_ParamLimits

0x5ed8,	// (0x00040c42) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0004a37b) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0004a37b) list_single_heading_pane_t

0x907e,	// (0x00043de8) list_single_number_heading_pane_g1_ParamLimits

0x907e,	// (0x00043de8) list_single_number_heading_pane_g1

0x5ecc,	// (0x00040c36) list_single_number_heading_pane_g2_ParamLimits

0x5ecc,	// (0x00040c36) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0004a380) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0004a380) list_single_number_heading_pane_g

0x4d30,	// (0x0003fa9a) list_single_number_heading_pane_t1_ParamLimits

0x4d30,	// (0x0003fa9a) list_single_number_heading_pane_t1

0x4d46,	// (0x0003fab0) list_single_number_heading_pane_t2_ParamLimits

0x4d46,	// (0x0003fab0) list_single_number_heading_pane_t2

0x4d58,	// (0x0003fac2) list_single_number_heading_pane_t3_ParamLimits

0x4d58,	// (0x0003fac2) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0004a385) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0004a385) list_single_number_heading_pane_t

0x4d6a,	// (0x0003fad4) list_single_graphic_heading_pane_g1_ParamLimits

0x4d6a,	// (0x0003fad4) list_single_graphic_heading_pane_g1

0x5eea,	// (0x00040c54) list_single_graphic_heading_pane_g4_ParamLimits

0x5eea,	// (0x00040c54) list_single_graphic_heading_pane_g4

0x5ecc,	// (0x00040c36) list_single_graphic_heading_pane_g5_ParamLimits

0x5ecc,	// (0x00040c36) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0004a38c) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0004a38c) list_single_graphic_heading_pane_g

0x4d30,	// (0x0003fa9a) list_single_graphic_heading_pane_t1_ParamLimits

0x4d30,	// (0x0003fa9a) list_single_graphic_heading_pane_t1

0x4d82,	// (0x0003faec) list_single_graphic_heading_pane_t2_ParamLimits

0x4d82,	// (0x0003faec) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0004a393) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0004a393) list_single_graphic_heading_pane_t

0x5efb,	// (0x00040c65) list_single_large_graphic_pane_g1_ParamLimits

0x5efb,	// (0x00040c65) list_single_large_graphic_pane_g1

0x5f07,	// (0x00040c71) list_single_large_graphic_pane_g2_ParamLimits

0x5f07,	// (0x00040c71) list_single_large_graphic_pane_g2

0x5f13,	// (0x00040c7d) list_single_large_graphic_pane_g3_ParamLimits

0x5f13,	// (0x00040c7d) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0004a398) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0004a398) list_single_large_graphic_pane_g

0xa202,	// (0x00044f6c) wait_border_pane_g2_copy1

0x5f1f,	// (0x00040c89) list_single_large_graphic_pane_g4_cp2

0x4d9a,	// (0x0003fb04) list_single_large_graphic_pane_t1_ParamLimits

0x4d9a,	// (0x0003fb04) list_single_large_graphic_pane_t1

0x5f27,	// (0x00040c91) list_double_pane_g1_ParamLimits

0x5f27,	// (0x00040c91) list_double_pane_g1

0x5f33,	// (0x00040c9d) list_double_pane_g2_ParamLimits

0x5f33,	// (0x00040c9d) list_double_pane_g2

0x0001,

0xf635,	// (0x0004a39f) list_double_pane_g_ParamLimits

0xf635,	// (0x0004a39f) list_double_pane_g

0x4db0,	// (0x0003fb1a) list_double_pane_t1_ParamLimits

0x4db0,	// (0x0003fb1a) list_double_pane_t1

0x4dc6,	// (0x0003fb30) list_double_pane_t2_ParamLimits

0x4dc6,	// (0x0003fb30) list_double_pane_t2

0x0001,

0xf63a,	// (0x0004a3a4) list_double_pane_t_ParamLimits

0xf63a,	// (0x0004a3a4) list_double_pane_t

0x4dd8,	// (0x0003fb42) list_double2_pane_g1_ParamLimits

0x4dd8,	// (0x0003fb42) list_double2_pane_g1

0x4de9,	// (0x0003fb53) list_double2_pane_g2_ParamLimits

0x4de9,	// (0x0003fb53) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0004a3a9) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0004a3a9) list_double2_pane_g

0x4df5,	// (0x0003fb5f) list_double2_pane_t1_ParamLimits

0x4df5,	// (0x0003fb5f) list_double2_pane_t1

0x4e0b,	// (0x0003fb75) list_double2_pane_t2_ParamLimits

0x4e0b,	// (0x0003fb75) list_double2_pane_t2

0x0001,

0xf644,	// (0x0004a3ae) list_double2_pane_t_ParamLimits

0xf644,	// (0x0004a3ae) list_double2_pane_t

0x5f27,	// (0x00040c91) list_double_number_pane_g1_ParamLimits

0x5f27,	// (0x00040c91) list_double_number_pane_g1

0x5f33,	// (0x00040c9d) list_double_number_pane_g2_ParamLimits

0x5f33,	// (0x00040c9d) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0004a39f) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0004a39f) list_double_number_pane_g

0x4e1d,	// (0x0003fb87) list_double_number_pane_t1_ParamLimits

0x4e1d,	// (0x0003fb87) list_double_number_pane_t1

0x4e2f,	// (0x0003fb99) list_double_number_pane_t2_ParamLimits

0x4e2f,	// (0x0003fb99) list_double_number_pane_t2

0x4e45,	// (0x0003fbaf) list_double_number_pane_t3_ParamLimits

0x4e45,	// (0x0003fbaf) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0004a3b3) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0004a3b3) list_double_number_pane_t

0x4e57,	// (0x0003fbc1) list_double_graphic_pane_g1_ParamLimits

0x4e57,	// (0x0003fbc1) list_double_graphic_pane_g1

0x4e63,	// (0x0003fbcd) list_double_graphic_pane_g2_ParamLimits

0x4e63,	// (0x0003fbcd) list_double_graphic_pane_g2

0x4e72,	// (0x0003fbdc) list_double_graphic_pane_g3_ParamLimits

0x4e72,	// (0x0003fbdc) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0004a3ba) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0004a3ba) list_double_graphic_pane_g

0x4e8a,	// (0x0003fbf4) list_double_graphic_pane_t1_ParamLimits

0x4e8a,	// (0x0003fbf4) list_double_graphic_pane_t1

0x4ea0,	// (0x0003fc0a) list_double_graphic_pane_t2_ParamLimits

0x4ea0,	// (0x0003fc0a) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0004a3c3) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0004a3c3) list_double_graphic_pane_t

0x4eb2,	// (0x0003fc1c) list_double2_graphic_pane_g1_ParamLimits

0x4eb2,	// (0x0003fc1c) list_double2_graphic_pane_g1

0x5f3f,	// (0x00040ca9) list_double2_graphic_pane_g2_ParamLimits

0x5f3f,	// (0x00040ca9) list_double2_graphic_pane_g2

0x4ebe,	// (0x0003fc28) list_double2_graphic_pane_g3_ParamLimits

0x4ebe,	// (0x0003fc28) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0004a3c8) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0004a3c8) list_double2_graphic_pane_g

0x4eca,	// (0x0003fc34) list_double2_graphic_pane_t1_ParamLimits

0x4eca,	// (0x0003fc34) list_double2_graphic_pane_t1

0x4ee0,	// (0x0003fc4a) list_double2_graphic_pane_t2_ParamLimits

0x4ee0,	// (0x0003fc4a) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0004a3cf) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0004a3cf) list_double2_graphic_pane_t

0x4ef2,	// (0x0003fc5c) list_double_large_graphic_pane_g1_ParamLimits

0x4ef2,	// (0x0003fc5c) list_double_large_graphic_pane_g1

0x4f1d,	// (0x0003fc87) list_double_large_graphic_pane_g2_ParamLimits

0x4f1d,	// (0x0003fc87) list_double_large_graphic_pane_g2

0x5f33,	// (0x00040c9d) list_double_large_graphic_pane_g3_ParamLimits

0x5f33,	// (0x00040c9d) list_double_large_graphic_pane_g3

0x4f33,	// (0x0003fc9d) list_double_large_graphic_pane_g4_ParamLimits

0x4f33,	// (0x0003fc9d) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0004a3d4) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0004a3d4) list_double_large_graphic_pane_g

0x4f46,	// (0x0003fcb0) list_double_large_graphic_pane_t1_ParamLimits

0x4f46,	// (0x0003fcb0) list_double_large_graphic_pane_t1

0x4f5f,	// (0x0003fcc9) list_double_large_graphic_pane_t2_ParamLimits

0x4f5f,	// (0x0003fcc9) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0004a3df) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0004a3df) list_double_large_graphic_pane_t

0x5f60,	// (0x00040cca) list_double2_large_graphic_pane_g1_ParamLimits

0x5f60,	// (0x00040cca) list_double2_large_graphic_pane_g1

0x4f71,	// (0x0003fcdb) list_double2_large_graphic_pane_g2_ParamLimits

0x4f71,	// (0x0003fcdb) list_double2_large_graphic_pane_g2

0x4ebe,	// (0x0003fc28) list_double2_large_graphic_pane_g3_ParamLimits

0x4ebe,	// (0x0003fc28) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0004a3e4) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0004a3e4) list_double2_large_graphic_pane_g

0x4f82,	// (0x0003fcec) list_double2_large_graphic_pane_t1_ParamLimits

0x4f82,	// (0x0003fcec) list_double2_large_graphic_pane_t1

0x4f98,	// (0x0003fd02) list_double2_large_graphic_pane_t2_ParamLimits

0x4f98,	// (0x0003fd02) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0004a3eb) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0004a3eb) list_double2_large_graphic_pane_t

0x4faa,	// (0x0003fd14) list_double_heading_pane_g1_ParamLimits

0x4faa,	// (0x0003fd14) list_double_heading_pane_g1

0x4fbb,	// (0x0003fd25) list_double_heading_pane_g2_ParamLimits

0x4fbb,	// (0x0003fd25) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0004a3f0) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0004a3f0) list_double_heading_pane_g

0x4fc7,	// (0x0003fd31) list_double_heading_pane_t1_ParamLimits

0x4fc7,	// (0x0003fd31) list_double_heading_pane_t1

0x4fdd,	// (0x0003fd47) list_double_heading_pane_t2_ParamLimits

0x4fdd,	// (0x0003fd47) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0004a3f5) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0004a3f5) list_double_heading_pane_t

0x4fef,	// (0x0003fd59) list_double_graphic_heading_pane_g1_ParamLimits

0x4fef,	// (0x0003fd59) list_double_graphic_heading_pane_g1

0x4faa,	// (0x0003fd14) list_double_graphic_heading_pane_g2_ParamLimits

0x4faa,	// (0x0003fd14) list_double_graphic_heading_pane_g2

0x4fbb,	// (0x0003fd25) list_double_graphic_heading_pane_g3_ParamLimits

0x4fbb,	// (0x0003fd25) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0004a3fa) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0004a3fa) list_double_graphic_heading_pane_g

0x4ffb,	// (0x0003fd65) list_double_graphic_heading_pane_t1_ParamLimits

0x4ffb,	// (0x0003fd65) list_double_graphic_heading_pane_t1

0x5011,	// (0x0003fd7b) list_double_graphic_heading_pane_t2_ParamLimits

0x5011,	// (0x0003fd7b) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0004a401) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0004a401) list_double_graphic_heading_pane_t

0x5023,	// (0x0003fd8d) list_double_time_pane_g1_ParamLimits

0x5023,	// (0x0003fd8d) list_double_time_pane_g1

0x5034,	// (0x0003fd9e) list_double_time_pane_g2_ParamLimits

0x5034,	// (0x0003fd9e) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0004a406) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0004a406) list_double_time_pane_g

0x5040,	// (0x0003fdaa) list_double_time_pane_t1_ParamLimits

0x5040,	// (0x0003fdaa) list_double_time_pane_t1

0x5056,	// (0x0003fdc0) list_double_time_pane_t2_ParamLimits

0x5056,	// (0x0003fdc0) list_double_time_pane_t2

0x5068,	// (0x0003fdd2) list_double_time_pane_t3_ParamLimits

0x5068,	// (0x0003fdd2) list_double_time_pane_t3

0x507a,	// (0x0003fde4) list_double_time_pane_t4_ParamLimits

0x507a,	// (0x0003fde4) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0004a40b) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0004a40b) list_double_time_pane_t

0x508c,	// (0x0003fdf6) list_setting_pane_g1_ParamLimits

0x508c,	// (0x0003fdf6) list_setting_pane_g1

0x5098,	// (0x0003fe02) list_setting_pane_g2_ParamLimits

0x5098,	// (0x0003fe02) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0004a414) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0004a414) list_setting_pane_g

0x50a4,	// (0x0003fe0e) list_setting_pane_t1_ParamLimits

0x50a4,	// (0x0003fe0e) list_setting_pane_t1

0x50be,	// (0x0003fe28) list_setting_pane_t2_ParamLimits

0x50be,	// (0x0003fe28) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0004a419) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0004a419) list_setting_pane_t

0x50fd,	// (0x0003fe67) set_value_pane_cp_ParamLimits

0x50fd,	// (0x0003fe67) set_value_pane_cp

0x510b,	// (0x0003fe75) list_setting_number_pane_g1_ParamLimits

0x510b,	// (0x0003fe75) list_setting_number_pane_g1

0x5117,	// (0x0003fe81) list_setting_number_pane_g2_ParamLimits

0x5117,	// (0x0003fe81) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0004a420) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0004a420) list_setting_number_pane_g

0x5123,	// (0x0003fe8d) list_setting_number_pane_t1_ParamLimits

0x5123,	// (0x0003fe8d) list_setting_number_pane_t1

0x513c,	// (0x0003fea6) list_setting_number_pane_t2_ParamLimits

0x513c,	// (0x0003fea6) list_setting_number_pane_t2

0x5156,	// (0x0003fec0) list_setting_number_pane_t3_ParamLimits

0x5156,	// (0x0003fec0) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0004a425) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0004a425) list_setting_number_pane_t

0x50fd,	// (0x0003fe67) set_value_pane_ParamLimits

0x50fd,	// (0x0003fe67) set_value_pane

0x8083,	// (0x00042ded) bg_set_opt_pane_ParamLimits

0x8083,	// (0x00042ded) bg_set_opt_pane

0x5199,	// (0x0003ff03) set_value_pane_t1

0x80a4,	// (0x00042e0e) slider_set_pane_cp3

0x80ad,	// (0x00042e17) volume_small_pane_cp

0x80b6,	// (0x00042e20) list_form_gen_pane

0x80bf,	// (0x00042e29) scroll_pane_cp8

0x51af,	// (0x0003ff19) form_field_data_pane_ParamLimits

0x51af,	// (0x0003ff19) form_field_data_pane

0x51d7,	// (0x0003ff41) form_field_data_wide_pane_ParamLimits

0x51d7,	// (0x0003ff41) form_field_data_wide_pane

0x51fe,	// (0x0003ff68) form_field_popup_pane_ParamLimits

0x51fe,	// (0x0003ff68) form_field_popup_pane

0x5220,	// (0x0003ff8a) form_field_popup_wide_pane_ParamLimits

0x5220,	// (0x0003ff8a) form_field_popup_wide_pane

0x5241,	// (0x0003ffab) form_field_slider_pane_ParamLimits

0x5241,	// (0x0003ffab) form_field_slider_pane

0x5254,	// (0x0003ffbe) form_field_slider_wide_pane_ParamLimits

0x5254,	// (0x0003ffbe) form_field_slider_wide_pane

0x80d0,	// (0x00042e3a) data_form_pane

0x5271,	// (0x0003ffdb) form_field_data_pane_t1

0x80dc,	// (0x00042e46) input_focus_pane

0x80ea,	// (0x00042e54) data_form_wide_pane

0x5297,	// (0x00040001) form_field_data_wide_pane_t1

0x7e4d,	// (0x00042bb7) input_focus_pane_cp6

0x52b9,	// (0x00040023) form_field_popup_pane_t1

0x80dc,	// (0x00042e46) input_focus_pane_cp7

0x8116,	// (0x00042e80) list_form_pane

0x52db,	// (0x00040045) form_field_popup_wide_pane_t1

0x80dc,	// (0x00042e46) input_focus_pane_cp8

0x8122,	// (0x00042e8c) list_form_wide_pane

0x52f8,	// (0x00040062) form_field_slider_pane_t1_ParamLimits

0x52f8,	// (0x00040062) form_field_slider_pane_t1

0x5310,	// (0x0004007a) form_field_slider_pane_t2_ParamLimits

0x5310,	// (0x0004007a) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0004a435) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0004a435) form_field_slider_pane_t

0x7ad1,	// (0x0004283b) input_focus_pane_cp9_ParamLimits

0x7ad1,	// (0x0004283b) input_focus_pane_cp9

0x5325,	// (0x0004008f) slider_cont_pane_ParamLimits

0x5325,	// (0x0004008f) slider_cont_pane

0x8131,	// (0x00042e9b) form_field_slider_wide_pane_t1_ParamLimits

0x8131,	// (0x00042e9b) form_field_slider_wide_pane_t1

0x5339,	// (0x000400a3) form_field_slider_wide_pane_t2_ParamLimits

0x5339,	// (0x000400a3) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0004a43a) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0004a43a) form_field_slider_wide_pane_t

0x7ad1,	// (0x0004283b) input_focus_pane_cp10_ParamLimits

0x7ad1,	// (0x0004283b) input_focus_pane_cp10

0x534b,	// (0x000400b5) slider_cont_pane_cp1_ParamLimits

0x534b,	// (0x000400b5) slider_cont_pane_cp1

0x535f,	// (0x000400c9) slider_form_pane_cp

0x8143,	// (0x00042ead) input_focus_pane_g1

0x814b,	// (0x00042eb5) input_focus_pane_g2

0x8153,	// (0x00042ebd) input_focus_pane_g3

0x815b,	// (0x00042ec5) input_focus_pane_g4

0x8163,	// (0x00042ecd) input_focus_pane_g5

0x816b,	// (0x00042ed5) input_focus_pane_g6

0x8173,	// (0x00042edd) input_focus_pane_g7

0x817b,	// (0x00042ee5) input_focus_pane_g8

0x8183,	// (0x00042eed) input_focus_pane_g9

0x776b,	// (0x000424d5) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0004a43f) input_focus_pane_g

0xa20b,	// (0x00044f75) wait_border_pane_g3_copy1

0x5367,	// (0x000400d1) data_form_pane_t1

0x776b,	// (0x000424d5) wait_anim_pane_g1_copy1

0x557f,	// (0x000402e9) data_form_wide_pane_t1

0x5386,	// (0x000400f0) list_form_graphic_pane_cp_ParamLimits

0x5386,	// (0x000400f0) list_form_graphic_pane_cp

0xb190,	// (0x00045efa) slider_form_pane_g1

0xb199,	// (0x00045f03) slider_form_pane_g2

0x0006,

0xf9cd,	// (0x0004a737) slider_form_pane_g

0x5386,	// (0x000400f0) list_form_graphic_pane_ParamLimits

0x5386,	// (0x000400f0) list_form_graphic_pane

0x5398,	// (0x00040102) list_form_graphic_pane_g1

0x53a0,	// (0x0004010a) list_form_graphic_pane_t1_ParamLimits

0x53a0,	// (0x0004010a) list_form_graphic_pane_t1

0x7855,	// (0x000425bf) list_highlight_pane_cp5_ParamLimits

0x7855,	// (0x000425bf) list_highlight_pane_cp5

0x5f6c,	// (0x00040cd6) find_pane_g1

0x818b,	// (0x00042ef5) input_find_pane

0x53b5,	// (0x0004011f) input_find_pane_g1_ParamLimits

0x53b5,	// (0x0004011f) input_find_pane_g1

0x53c1,	// (0x0004012b) input_find_pane_t1_ParamLimits

0x53c1,	// (0x0004012b) input_find_pane_t1

0x53d6,	// (0x00040140) input_find_pane_t2_ParamLimits

0x53d6,	// (0x00040140) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0004a454) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0004a454) input_find_pane_t

0x8194,	// (0x00042efe) input_focus_pane_cp5_ParamLimits

0x8194,	// (0x00042efe) input_focus_pane_cp5

0x81ae,	// (0x00042f18) bg_popup_window_pane_cp2_ParamLimits

0x81ae,	// (0x00042f18) bg_popup_window_pane_cp2

0x81bb,	// (0x00042f25) listscroll_menu_pane_ParamLimits

0x81bb,	// (0x00042f25) listscroll_menu_pane

0x81c7,	// (0x00042f31) popup_submenu_window_ParamLimits

0x81c7,	// (0x00042f31) popup_submenu_window

0x81f7,	// (0x00042f61) find_popup_pane_g1

0x81ff,	// (0x00042f69) input_popup_find_pane_cp

0x8194,	// (0x00042efe) input_focus_pane_cp4_ParamLimits

0x8194,	// (0x00042efe) input_focus_pane_cp4

0x8217,	// (0x00042f81) input_popup_find_pane_t1_ParamLimits

0x8217,	// (0x00042f81) input_popup_find_pane_t1

0x7775,	// (0x000424df) bg_popup_sub_pane_cp

0x8245,	// (0x00042faf) listscroll_popup_sub_pane

0x824d,	// (0x00042fb7) list_submenu_pane_ParamLimits

0x824d,	// (0x00042fb7) list_submenu_pane

0x825e,	// (0x00042fc8) scroll_pane_cp4

0x8266,	// (0x00042fd0) list_single_popup_submenu_pane_ParamLimits

0x8266,	// (0x00042fd0) list_single_popup_submenu_pane

0x827b,	// (0x00042fe5) list_single_popup_submenu_pane_g1

0x8283,	// (0x00042fed) list_single_popup_submenu_pane_t1_ParamLimits

0x8283,	// (0x00042fed) list_single_popup_submenu_pane_t1

0x7855,	// (0x000425bf) bg_active_tab_pane_cp1_ParamLimits

0x7855,	// (0x000425bf) bg_active_tab_pane_cp1

0x8298,	// (0x00043002) tabs_2_active_pane_g1

0x82a0,	// (0x0004300a) tabs_2_active_pane_t1

0x7855,	// (0x000425bf) bg_passive_tab_pane_cp1_ParamLimits

0x7855,	// (0x000425bf) bg_passive_tab_pane_cp1

0x8298,	// (0x00043002) tabs_2_passive_pane_g1

0x82a0,	// (0x0004300a) tabs_2_passive_pane_t1

0x82b2,	// (0x0004301c) bg_active_tab_pane_cp4

0x82c0,	// (0x0004302a) tabs_2_long_active_pane_t1

0x82d3,	// (0x0004303d) bg_passive_tab_pane_cp4

0x65dd,	// (0x00041347) list_single_midp_graphic_pane_g4_ParamLimits

0x82b2,	// (0x0004301c) bg_active_tab_pane_cp5

0x82df,	// (0x00043049) tabs_3_long_active_pane_t1

0x82d3,	// (0x0004303d) bg_passive_tab_pane_cp5

0x65dd,	// (0x00041347) list_single_midp_graphic_pane_g4

0x7855,	// (0x000425bf) bg_popup_window_pane_cp13_ParamLimits

0x7855,	// (0x000425bf) bg_popup_window_pane_cp13

0x82fa,	// (0x00043064) listscroll_popup_fast_pane_ParamLimits

0x82fa,	// (0x00043064) listscroll_popup_fast_pane

0x8309,	// (0x00043073) grid_popup_fast_pane_ParamLimits

0x8309,	// (0x00043073) grid_popup_fast_pane

0x831b,	// (0x00043085) scroll_pane_cp9_ParamLimits

0x831b,	// (0x00043085) scroll_pane_cp9

0xcac3,	// (0x0004782d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcac3,	// (0x0004782d) list_single_graphic_hl_pane_t1_cp2

0x833f,	// (0x000430a9) input_focus_pane_cp20_ParamLimits

0x833f,	// (0x000430a9) input_focus_pane_cp20

0x834d,	// (0x000430b7) query_popup_data_pane_t1_ParamLimits

0x834d,	// (0x000430b7) query_popup_data_pane_t1

0x8360,	// (0x000430ca) query_popup_data_pane_t2_ParamLimits

0x8360,	// (0x000430ca) query_popup_data_pane_t2

0x83a6,	// (0x00043110) query_popup_data_pane_t3_ParamLimits

0x83a6,	// (0x00043110) query_popup_data_pane_t3

0x83e7,	// (0x00043151) query_popup_data_pane_t4_ParamLimits

0x83e7,	// (0x00043151) query_popup_data_pane_t4

0x8423,	// (0x0004318d) query_popup_data_pane_t5_ParamLimits

0x8423,	// (0x0004318d) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0004a459) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0004a459) query_popup_data_pane_t

0x8143,	// (0x00042ead) bg_set_opt_pane_g1

0x814b,	// (0x00042eb5) bg_set_opt_pane_g2

0x8153,	// (0x00042ebd) bg_set_opt_pane_g3

0x815b,	// (0x00042ec5) bg_set_opt_pane_g4

0x8163,	// (0x00042ecd) bg_set_opt_pane_g5

0x816b,	// (0x00042ed5) bg_set_opt_pane_g6

0x8173,	// (0x00042edd) bg_set_opt_pane_g7

0x817b,	// (0x00042ee5) bg_set_opt_pane_g8

0x8183,	// (0x00042eed) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0004a464) bg_set_opt_pane_g

0x6236,	// (0x00040fa0) control_top_pane_stacon_ParamLimits

0x6236,	// (0x00040fa0) control_top_pane_stacon

0x6289,	// (0x00040ff3) signal_pane_stacon_ParamLimits

0x6289,	// (0x00040ff3) signal_pane_stacon

0x89cf,	// (0x00043739) stacon_top_pane_g1_ParamLimits

0x89cf,	// (0x00043739) stacon_top_pane_g1

0x62ae,	// (0x00041018) title_pane_stacon_ParamLimits

0x62ae,	// (0x00041018) title_pane_stacon

0x62d8,	// (0x00041042) uni_indicator_pane_stacon_ParamLimits

0x62d8,	// (0x00041042) uni_indicator_pane_stacon

0x62f0,	// (0x0004105a) battery_pane_stacon_ParamLimits

0x62f0,	// (0x0004105a) battery_pane_stacon

0x6334,	// (0x0004109e) control_bottom_pane_stacon_ParamLimits

0x6334,	// (0x0004109e) control_bottom_pane_stacon

0x6357,	// (0x000410c1) navi_pane_stacon_ParamLimits

0x6357,	// (0x000410c1) navi_pane_stacon

0x89f1,	// (0x0004375b) stacon_bottom_pane_g1_ParamLimits

0x89f1,	// (0x0004375b) stacon_bottom_pane_g1

0x5f75,	// (0x00040cdf) aid_levels_signal_lsc_ParamLimits

0x5f75,	// (0x00040cdf) aid_levels_signal_lsc

0x5f8c,	// (0x00040cf6) signal_pane_stacon_g1_ParamLimits

0x5f8c,	// (0x00040cf6) signal_pane_stacon_g1

0x5fa0,	// (0x00040d0a) signal_pane_stacon_g2_ParamLimits

0x5fa0,	// (0x00040d0a) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0004a477) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0004a477) signal_pane_stacon_g

0x5fd5,	// (0x00040d3f) title_pane_stacon_t1_ParamLimits

0x5fd5,	// (0x00040d3f) title_pane_stacon_t1

0x8467,	// (0x000431d1) uni_indicator_pane_stacon_g1

0x8471,	// (0x000431db) uni_indicator_pane_stacon_g2

0x847b,	// (0x000431e5) uni_indicator_pane_stacon_g3

0x8485,	// (0x000431ef) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0004a483) uni_indicator_pane_stacon_g

0x5ffa,	// (0x00040d64) control_top_pane_stacon_g1

0x6002,	// (0x00040d6c) control_top_pane_stacon_t1_ParamLimits

0x6002,	// (0x00040d6c) control_top_pane_stacon_t1

0x6039,	// (0x00040da3) aid_levels_battery_lsc_ParamLimits

0x6039,	// (0x00040da3) aid_levels_battery_lsc

0x6051,	// (0x00040dbb) battery_pane_stacon_g1_ParamLimits

0x6051,	// (0x00040dbb) battery_pane_stacon_g1

0x6064,	// (0x00040dce) battery_pane_stacon_g2_ParamLimits

0x6064,	// (0x00040dce) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0004a48c) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0004a48c) battery_pane_stacon_g

0x60a2,	// (0x00040e0c) navi_icon_pane_stacon

0x60b6,	// (0x00040e20) navi_navi_pane_stacon

0x60a2,	// (0x00040e0c) navi_text_pane_stacon

0x5ffa,	// (0x00040d64) control_bottom_pane_stacon_g1

0x60cc,	// (0x00040e36) control_bottom_pane_stacon_t1_ParamLimits

0x60cc,	// (0x00040e36) control_bottom_pane_stacon_t1

0x84a9,	// (0x00043213) grid_app_pane_ParamLimits

0x84a9,	// (0x00043213) grid_app_pane

0x84cd,	// (0x00043237) scroll_pane_cp15_ParamLimits

0x84cd,	// (0x00043237) scroll_pane_cp15

0x84e2,	// (0x0004324c) cell_app_pane_ParamLimits

0x84e2,	// (0x0004324c) cell_app_pane

0x850e,	// (0x00043278) cell_app_pane_g1_ParamLimits

0x850e,	// (0x00043278) cell_app_pane_g1

0x8532,	// (0x0004329c) cell_app_pane_g2_ParamLimits

0x8532,	// (0x0004329c) cell_app_pane_g2

0x0001,

0xf727,	// (0x0004a491) cell_app_pane_g_ParamLimits

0xf727,	// (0x0004a491) cell_app_pane_g

0x853e,	// (0x000432a8) cell_app_pane_t1_ParamLimits

0x853e,	// (0x000432a8) cell_app_pane_t1

0x8550,	// (0x000432ba) grid_highlight_pane_ParamLimits

0x8550,	// (0x000432ba) grid_highlight_pane

0x8143,	// (0x00042ead) cell_highlight_pane_g1

0x814b,	// (0x00042eb5) cell_highlight_pane_g2

0x8153,	// (0x00042ebd) cell_highlight_pane_g3

0x815b,	// (0x00042ec5) cell_highlight_pane_g4

0x8163,	// (0x00042ecd) cell_highlight_pane_g5

0x816b,	// (0x00042ed5) cell_highlight_pane_g6

0x8173,	// (0x00042edd) cell_highlight_pane_g7

0x817b,	// (0x00042ee5) cell_highlight_pane_g8

0x8183,	// (0x00042eed) cell_highlight_pane_g9

0x776b,	// (0x000424d5) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0004a43f) cell_highlight_pane_g

0x8561,	// (0x000432cb) bg_scroll_pane

0x6116,	// (0x00040e80) scroll_handle_pane

0x85a8,	// (0x00043312) scroll_bg_pane_g1

0x85bd,	// (0x00043327) scroll_bg_pane_g2

0x85d5,	// (0x0004333f) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0004a496) scroll_bg_pane_g

0x85ea,	// (0x00043354) scroll_handle_focus_pane_ParamLimits

0x85ea,	// (0x00043354) scroll_handle_focus_pane

0x85a8,	// (0x00043312) scroll_handle_pane_g1

0x85f7,	// (0x00043361) scroll_handle_pane_g2

0x85d5,	// (0x0004333f) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0004a49d) scroll_handle_pane_g

0x8194,	// (0x00042efe) bg_popup_sub_pane_cp21_ParamLimits

0x8194,	// (0x00042efe) bg_popup_sub_pane_cp21

0x860b,	// (0x00043375) popup_fep_japan_predictive_window_t1_ParamLimits

0x860b,	// (0x00043375) popup_fep_japan_predictive_window_t1

0x8622,	// (0x0004338c) popup_fep_japan_predictive_window_t2_ParamLimits

0x8622,	// (0x0004338c) popup_fep_japan_predictive_window_t2

0x8655,	// (0x000433bf) popup_fep_japan_predictive_window_t3_ParamLimits

0x8655,	// (0x000433bf) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0004a4a4) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0004a4a4) popup_fep_japan_predictive_window_t

0x7775,	// (0x000424df) bg_popup_sub_pane_cp23

0x868c,	// (0x000433f6) listscroll_japin_cand_pane

0x8694,	// (0x000433fe) popup_fep_japan_candidate_window_t1

0x86a2,	// (0x0004340c) candidate_pane_ParamLimits

0x86a2,	// (0x0004340c) candidate_pane

0x86b4,	// (0x0004341e) scroll_pane_cp30

0x86be,	// (0x00043428) list_single_popup_jap_candidate_pane_ParamLimits

0x86be,	// (0x00043428) list_single_popup_jap_candidate_pane

0x7775,	// (0x000424df) list_highlight_pane_cp30

0x86d2,	// (0x0004343c) list_single_popup_jap_candidate_pane_t1

0x86e1,	// (0x0004344b) level_1_signal

0x86ee,	// (0x00043458) level_2_signal

0x86fb,	// (0x00043465) level_3_signal

0x8708,	// (0x00043472) level_4_signal

0x8715,	// (0x0004347f) level_5_signal

0x8722,	// (0x0004348c) level_6_signal

0x872f,	// (0x00043499) level_7_signal

0x86e1,	// (0x0004344b) level_1_battery

0x86ee,	// (0x00043458) level_2_battery

0x86fb,	// (0x00043465) level_3_battery

0x8708,	// (0x00043472) level_4_battery

0x8715,	// (0x0004347f) level_5_battery

0x8722,	// (0x0004348c) level_6_battery

0x872f,	// (0x00043499) level_7_battery

0x8754,	// (0x000434be) list_menu_pane_ParamLimits

0x8754,	// (0x000434be) list_menu_pane

0x8765,	// (0x000434cf) scroll_pane_cp25_ParamLimits

0x8765,	// (0x000434cf) scroll_pane_cp25

0x877e,	// (0x000434e8) list_double2_graphic_pane_cp2_ParamLimits

0x877e,	// (0x000434e8) list_double2_graphic_pane_cp2

0x877e,	// (0x000434e8) list_double2_large_graphic_pane_cp2_ParamLimits

0x877e,	// (0x000434e8) list_double2_large_graphic_pane_cp2

0x877e,	// (0x000434e8) list_double2_pane_cp2_ParamLimits

0x877e,	// (0x000434e8) list_double2_pane_cp2

0x877e,	// (0x000434e8) list_double_graphic_pane_cp2_ParamLimits

0x877e,	// (0x000434e8) list_double_graphic_pane_cp2

0x877e,	// (0x000434e8) list_double_large_graphic_pane_cp2_ParamLimits

0x877e,	// (0x000434e8) list_double_large_graphic_pane_cp2

0x877e,	// (0x000434e8) list_double_number_pane_cp2_ParamLimits

0x877e,	// (0x000434e8) list_double_number_pane_cp2

0x877e,	// (0x000434e8) list_double_pane_cp2_ParamLimits

0x877e,	// (0x000434e8) list_double_pane_cp2

0x87a4,	// (0x0004350e) list_single_2graphic_pane_cp2_ParamLimits

0x87a4,	// (0x0004350e) list_single_2graphic_pane_cp2

0x87a4,	// (0x0004350e) list_single_graphic_heading_pane_cp2_ParamLimits

0x87a4,	// (0x0004350e) list_single_graphic_heading_pane_cp2

0x87a4,	// (0x0004350e) list_single_graphic_pane_cp2_ParamLimits

0x87a4,	// (0x0004350e) list_single_graphic_pane_cp2

0x87a4,	// (0x0004350e) list_single_heading_pane_cp2_ParamLimits

0x87a4,	// (0x0004350e) list_single_heading_pane_cp2

0x87c1,	// (0x0004352b) list_single_large_graphic_pane_cp2_ParamLimits

0x87c1,	// (0x0004352b) list_single_large_graphic_pane_cp2

0x87a4,	// (0x0004350e) list_single_number_heading_pane_cp2_ParamLimits

0x87a4,	// (0x0004350e) list_single_number_heading_pane_cp2

0x87a4,	// (0x0004350e) list_single_number_pane_cp2_ParamLimits

0x87a4,	// (0x0004350e) list_single_number_pane_cp2

0x87a4,	// (0x0004350e) list_single_pane_cp2_ParamLimits

0x87a4,	// (0x0004350e) list_single_pane_cp2

0x8816,	// (0x00043580) bg_popup_sub_pane_cp22

0x61c8,	// (0x00040f32) popup_side_volume_key_window_g1

0x61f2,	// (0x00040f5c) popup_side_volume_key_window_t1

0x6210,	// (0x00040f7a) volume_small_pane_cp1

0x7ad1,	// (0x0004283b) bg_popup_sub_pane_cp24_ParamLimits

0x7ad1,	// (0x0004283b) bg_popup_sub_pane_cp24

0x882c,	// (0x00043596) fep_china_uni_candidate_pane_ParamLimits

0x882c,	// (0x00043596) fep_china_uni_candidate_pane

0x8840,	// (0x000435aa) fep_china_uni_entry_pane

0x8850,	// (0x000435ba) popup_fep_china_uni_window_g1

0x886c,	// (0x000435d6) fep_china_uni_entry_pane_g1

0x8876,	// (0x000435e0) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0004a4d1) fep_china_uni_entry_pane_g

0x8880,	// (0x000435ea) fep_entry_item_pane

0x888a,	// (0x000435f4) fep_candidate_item_pane

0x8892,	// (0x000435fc) fep_china_uni_candidate_pane_g1

0x889c,	// (0x00043606) fep_china_uni_candidate_pane_g2

0x88a4,	// (0x0004360e) fep_china_uni_candidate_pane_g3

0x88ac,	// (0x00043616) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0004a4d6) fep_china_uni_candidate_pane_g

0x776b,	// (0x000424d5) fep_entry_item_pane_g1

0x88b6,	// (0x00043620) fep_entry_item_pane_t1_ParamLimits

0x88b6,	// (0x00043620) fep_entry_item_pane_t1

0x88cc,	// (0x00043636) fep_candidate_item_pane_t1_ParamLimits

0x88cc,	// (0x00043636) fep_candidate_item_pane_t1

0x88e1,	// (0x0004364b) fep_candidate_item_pane_t2_ParamLimits

0x88e1,	// (0x0004364b) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0004a4df) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0004a4df) fep_candidate_item_pane_t

0x7855,	// (0x000425bf) list_highlight_pane_cp31_ParamLimits

0x7855,	// (0x000425bf) list_highlight_pane_cp31

0x88f3,	// (0x0004365d) level_1_signal_lsc

0x88fc,	// (0x00043666) level_2_signal_lsc

0x8905,	// (0x0004366f) level_3_signal_lsc

0x890e,	// (0x00043678) level_4_signal_lsc

0x8917,	// (0x00043681) level_5_signal_lsc

0x8920,	// (0x0004368a) level_6_signal_lsc

0x8929,	// (0x00043693) level_7_signal_lsc

0x8929,	// (0x00043693) level_1_battery_lsc

0x8932,	// (0x0004369c) level_2_battery_lsc

0x893b,	// (0x000436a5) level_3_battery_lsc

0x8944,	// (0x000436ae) level_4_battery_lsc

0x894d,	// (0x000436b7) level_5_battery_lsc

0x8956,	// (0x000436c0) level_6_battery_lsc

0x88f3,	// (0x0004365d) level_7_battery_lsc

0x895f,	// (0x000436c9) scroll_handle_focus_pane_g1

0x8968,	// (0x000436d2) scroll_handle_focus_pane_g2

0x8971,	// (0x000436db) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0004a4e4) scroll_handle_focus_pane_g

0x53eb,	// (0x00040155) list_single_2graphic_pane_g1_ParamLimits

0x53eb,	// (0x00040155) list_single_2graphic_pane_g1

0x5eea,	// (0x00040c54) list_single_2graphic_pane_g2_ParamLimits

0x5eea,	// (0x00040c54) list_single_2graphic_pane_g2

0x5ecc,	// (0x00040c36) list_single_2graphic_pane_g3_ParamLimits

0x5ecc,	// (0x00040c36) list_single_2graphic_pane_g3

0x6218,	// (0x00040f82) list_single_2graphic_pane_g4_ParamLimits

0x6218,	// (0x00040f82) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0004a4eb) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0004a4eb) list_single_2graphic_pane_g

0x53f7,	// (0x00040161) list_single_2graphic_pane_t1_ParamLimits

0x53f7,	// (0x00040161) list_single_2graphic_pane_t1

0x6224,	// (0x00040f8e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6224,	// (0x00040f8e) list_double2_graphic_large_graphic_pane_g1

0x4f71,	// (0x0003fcdb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f71,	// (0x0003fcdb) list_double2_graphic_large_graphic_pane_g2

0x4ebe,	// (0x0003fc28) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ebe,	// (0x0003fc28) list_double2_graphic_large_graphic_pane_g3

0x5425,	// (0x0004018f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5425,	// (0x0004018f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0004a4f4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0004a4f4) list_double2_graphic_large_graphic_pane_g

0x5431,	// (0x0004019b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5431,	// (0x0004019b) list_double2_graphic_large_graphic_pane_t1

0x5447,	// (0x000401b1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5447,	// (0x000401b1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0004a4fd) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0004a4fd) list_double2_graphic_large_graphic_pane_t

0x8ab3,	// (0x0004381d) popup_fast_swap_window_ParamLimits

0x8ab3,	// (0x0004381d) popup_fast_swap_window

0x8ad1,	// (0x0004383b) popup_side_volume_key_window

0x8aef,	// (0x00043859) stacon_top_pane

0x8af9,	// (0x00043863) status_pane_ParamLimits

0x8af9,	// (0x00043863) status_pane

0x8aef,	// (0x00043859) status_small_pane

0x7775,	// (0x000424df) control_pane

0x7775,	// (0x000424df) stacon_bottom_pane

0x80bf,	// (0x00042e29) scroll_pane_cp121

0x80b6,	// (0x00042e20) set_content_pane

0x897a,	// (0x000436e4) bg_active_tab_pane_g1_cp1

0x8983,	// (0x000436ed) bg_active_tab_pane_g2_cp1

0x898c,	// (0x000436f6) bg_active_tab_pane_g3_cp1

0x897a,	// (0x000436e4) bg_passive_tab_pane_g1_cp1

0x8983,	// (0x000436ed) bg_passive_tab_pane_g2_cp1

0x898c,	// (0x000436f6) bg_passive_tab_pane_g3_cp1

0x8995,	// (0x000436ff) bg_active_tab_pane_g1_cp2

0x8983,	// (0x000436ed) bg_active_tab_pane_g2_cp2

0x899e,	// (0x00043708) bg_active_tab_pane_g3_cp2

0x8995,	// (0x000436ff) bg_passive_tab_pane_g1_cp2

0x8983,	// (0x000436ed) bg_passive_tab_pane_g2_cp2

0x899e,	// (0x00043708) bg_passive_tab_pane_g3_cp2

0x89a7,	// (0x00043711) bg_active_tab_pane_g1_cp3

0x8983,	// (0x000436ed) bg_active_tab_pane_g2_cp3

0x89b0,	// (0x0004371a) bg_active_tab_pane_g3_cp3

0x89a7,	// (0x00043711) bg_passive_tab_pane_g1_cp3

0x8983,	// (0x000436ed) bg_passive_tab_pane_g2_cp3

0x89b0,	// (0x0004371a) bg_passive_tab_pane_g3_cp3

0x89b9,	// (0x00043723) bg_active_tab_pane_g1_cp4

0x8983,	// (0x000436ed) bg_active_tab_pane_g2_cp4

0x89c4,	// (0x0004372e) bg_active_tab_pane_g3_cp4

0x89b9,	// (0x00043723) bg_passive_tab_pane_g1_cp4

0x8983,	// (0x000436ed) bg_passive_tab_pane_g2_cp4

0x89c4,	// (0x0004372e) bg_passive_tab_pane_g3_cp4

0x8a0d,	// (0x00043777) bg_active_tab_pane_g1_cp5

0x8983,	// (0x000436ed) bg_active_tab_pane_g2_cp5

0x8a16,	// (0x00043780) bg_active_tab_pane_g3_cp5

0x8a0d,	// (0x00043777) bg_passive_tab_pane_g1_cp5

0x8983,	// (0x000436ed) bg_passive_tab_pane_g2_cp5

0x8a16,	// (0x00043780) bg_passive_tab_pane_g3_cp5

0x8a1f,	// (0x00043789) list_set_graphic_pane_ParamLimits

0x8a1f,	// (0x00043789) list_set_graphic_pane

0x7775,	// (0x000424df) bg_set_opt_pane_cp4

0x8a34,	// (0x0004379e) list_set_graphic_pane_g1_ParamLimits

0x8a34,	// (0x0004379e) list_set_graphic_pane_g1

0x8a40,	// (0x000437aa) list_set_graphic_pane_g2_ParamLimits

0x8a40,	// (0x000437aa) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0004a502) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0004a502) list_set_graphic_pane_g

0x0009,

0xfafa,	// (0x0004a864) volume_small_pane_cp_g

0x8a64,	// (0x000437ce) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a64,	// (0x000437ce) list_double2_large_graphic_pane_g1_cp2

0x8a72,	// (0x000437dc) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a72,	// (0x000437dc) list_double2_large_graphic_pane_g2_cp2

0x8a83,	// (0x000437ed) list_double2_large_graphic_pane_g3_cp2

0x8a8b,	// (0x000437f5) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a8b,	// (0x000437f5) list_double2_large_graphic_pane_t1_cp2

0x8aa1,	// (0x0004380b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8aa1,	// (0x0004380b) list_double2_large_graphic_pane_t2_cp2

0xacf5,	// (0x00045a5f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xacf5,	// (0x00045a5f) list_double_large_graphic_pane_g1_cp2

0xad08,	// (0x00045a72) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad08,	// (0x00045a72) list_double_large_graphic_pane_g2_cp2

0x8c17,	// (0x00043981) list_double_large_graphic_pane_g3_cp2

0xad19,	// (0x00045a83) list_double_large_graphic_pane_g4_cp

0xad21,	// (0x00045a8b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad21,	// (0x00045a8b) list_double_large_graphic_pane_t1_cp2

0xad38,	// (0x00045aa2) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad38,	// (0x00045aa2) list_double_large_graphic_pane_t2_cp2

0x8b07,	// (0x00043871) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8b07,	// (0x00043871) list_double2_graphic_pane_g1_cp2

0x8b15,	// (0x0004387f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8b15,	// (0x0004387f) list_double2_graphic_pane_g2_cp2

0x8b26,	// (0x00043890) list_double2_graphic_pane_g3_cp2

0x8b30,	// (0x0004389a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8b30,	// (0x0004389a) list_double2_graphic_pane_t1_cp2

0x8b46,	// (0x000438b0) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8b46,	// (0x000438b0) list_double2_graphic_pane_t2_cp2

0x8b58,	// (0x000438c2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b58,	// (0x000438c2) list_single_number_heading_pane_g1_cp2

0x8b64,	// (0x000438ce) list_single_number_heading_pane_g2_cp2

0x8b6c,	// (0x000438d6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8b6c,	// (0x000438d6) list_single_number_heading_pane_t1_cp2

0x8b82,	// (0x000438ec) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8b82,	// (0x000438ec) list_single_number_heading_pane_t2_cp2

0x8b96,	// (0x00043900) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8b96,	// (0x00043900) list_single_number_heading_pane_t3_cp2

0x8b58,	// (0x000438c2) list_single_heading_pane_g1_cp2_ParamLimits

0x8b58,	// (0x000438c2) list_single_heading_pane_g1_cp2

0x8b64,	// (0x000438ce) list_single_heading_pane_g2_cp2

0x8b6c,	// (0x000438d6) list_single_heading_pane_t1_cp2_ParamLimits

0x8b6c,	// (0x000438d6) list_single_heading_pane_t1_cp2

0xaaef,	// (0x00045859) list_single_heading_pane_t2_cp2_ParamLimits

0xaaef,	// (0x00045859) list_single_heading_pane_t2_cp2

0xaa31,	// (0x0004579b) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa31,	// (0x0004579b) list_double_graphic_pane_g1_cp2

0xaa3d,	// (0x000457a7) list_double_graphic_pane_g2_cp2_ParamLimits

0xaa3d,	// (0x000457a7) list_double_graphic_pane_g2_cp2

0xaa4c,	// (0x000457b6) list_double_graphic_pane_g3_cp2

0xaa54,	// (0x000457be) list_double_graphic_pane_t1_cp2_ParamLimits

0xaa54,	// (0x000457be) list_double_graphic_pane_t1_cp2

0xaa6a,	// (0x000457d4) list_double_graphic_pane_t2_cp2_ParamLimits

0xaa6a,	// (0x000457d4) list_double_graphic_pane_t2_cp2

0x8c0b,	// (0x00043975) list_double_number_pane_g1_cp2_ParamLimits

0x8c0b,	// (0x00043975) list_double_number_pane_g1_cp2

0x8c17,	// (0x00043981) list_double_number_pane_g2_cp2

0xa9f5,	// (0x0004575f) list_double_number_pane_t1_cp2_ParamLimits

0xa9f5,	// (0x0004575f) list_double_number_pane_t1_cp2

0xaa09,	// (0x00045773) list_double_number_pane_t2_cp2_ParamLimits

0xaa09,	// (0x00045773) list_double_number_pane_t2_cp2

0xaa1f,	// (0x00045789) list_double_number_pane_t3_cp2_ParamLimits

0xaa1f,	// (0x00045789) list_double_number_pane_t3_cp2

0xa8de,	// (0x00045648) list_single_graphic_pane_g1_cp2_ParamLimits

0xa8de,	// (0x00045648) list_single_graphic_pane_g1_cp2

0x8c71,	// (0x000439db) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c71,	// (0x000439db) list_single_graphic_pane_g2_cp2

0x8c7d,	// (0x000439e7) list_single_graphic_pane_g3_cp2

0xa8b4,	// (0x0004561e) list_single_graphic_pane_t1_cp2_ParamLimits

0xa8b4,	// (0x0004561e) list_single_graphic_pane_t1_cp2

0x8c71,	// (0x000439db) list_single_number_pane_g1_cp2_ParamLimits

0x8c71,	// (0x000439db) list_single_number_pane_g1_cp2

0x8c7d,	// (0x000439e7) list_single_number_pane_g2_cp2

0xa8b4,	// (0x0004561e) list_single_number_pane_t1_cp2_ParamLimits

0xa8b4,	// (0x0004561e) list_single_number_pane_t1_cp2

0xa8ca,	// (0x00045634) list_single_number_pane_t2_cp2_ParamLimits

0xa8ca,	// (0x00045634) list_single_number_pane_t2_cp2

0x8a72,	// (0x000437dc) list_double2_pane_g1_cp2_ParamLimits

0x8a72,	// (0x000437dc) list_double2_pane_g1_cp2

0x8a83,	// (0x000437ed) list_double2_pane_g2_cp2

0x8be3,	// (0x0004394d) list_double2_pane_t1_cp2_ParamLimits

0x8be3,	// (0x0004394d) list_double2_pane_t1_cp2

0x8bf9,	// (0x00043963) list_double2_pane_t2_cp2_ParamLimits

0x8bf9,	// (0x00043963) list_double2_pane_t2_cp2

0x8c0b,	// (0x00043975) list_double_pane_g1_cp2_ParamLimits

0x8c0b,	// (0x00043975) list_double_pane_g1_cp2

0x8c17,	// (0x00043981) list_double_pane_g2_cp2

0x8c1f,	// (0x00043989) list_double_pane_t1_cp2_ParamLimits

0x8c1f,	// (0x00043989) list_double_pane_t1_cp2

0x8c35,	// (0x0004399f) list_double_pane_t2_cp2_ParamLimits

0x8c35,	// (0x0004399f) list_double_pane_t2_cp2

0x8c61,	// (0x000439cb) list_single_pane_cp2_g3

0x8c71,	// (0x000439db) list_single_pane_g1_cp2_ParamLimits

0x8c71,	// (0x000439db) list_single_pane_g1_cp2

0x8c7d,	// (0x000439e7) list_single_pane_g2_cp2

0x8c85,	// (0x000439ef) list_single_pane_t1_cp2_ParamLimits

0x8c85,	// (0x000439ef) list_single_pane_t1_cp2

0x8c9d,	// (0x00043a07) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8c9d,	// (0x00043a07) list_single_large_graphic_pane_g1_cp2

0x8cab,	// (0x00043a15) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8cab,	// (0x00043a15) list_single_large_graphic_pane_g2_cp2

0x8cb7,	// (0x00043a21) list_single_large_graphic_pane_g3_cp2

0x8cbf,	// (0x00043a29) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8cbf,	// (0x00043a29) list_single_large_graphic_pane_g4_cp1

0x8cd9,	// (0x00043a43) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8cd9,	// (0x00043a43) list_single_large_graphic_pane_t1_cp2

0xa87e,	// (0x000455e8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa87e,	// (0x000455e8) list_single_graphic_heading_pane_g1_cp2

0xa84b,	// (0x000455b5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa84b,	// (0x000455b5) list_single_graphic_heading_pane_g4_cp2

0x8c7d,	// (0x000439e7) list_single_graphic_heading_pane_g5_cp2

0xa88a,	// (0x000455f4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa88a,	// (0x000455f4) list_single_graphic_heading_pane_t1_cp2

0xa8a0,	// (0x0004560a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa8a0,	// (0x0004560a) list_single_graphic_heading_pane_t2_cp2

0xa83f,	// (0x000455a9) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa83f,	// (0x000455a9) list_single_2graphic_pane_g1_cp2

0xa84b,	// (0x000455b5) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa84b,	// (0x000455b5) list_single_2graphic_pane_g2_cp2

0x8c7d,	// (0x000439e7) list_single_2graphic_pane_g3_cp2

0xa85c,	// (0x000455c6) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa85c,	// (0x000455c6) list_single_2graphic_pane_g4_cp2

0xa868,	// (0x000455d2) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa868,	// (0x000455d2) list_single_2graphic_pane_t1_cp2

0x776b,	// (0x000424d5) list_highlight_pane_g10_cp1

0xa417,	// (0x00045181) list_highlight_pane_g1_cp1

0xa41f,	// (0x00045189) list_highlight_pane_g2_cp1

0xa427,	// (0x00045191) list_highlight_pane_g3_cp1

0xa42f,	// (0x00045199) list_highlight_pane_g4_cp1

0xa437,	// (0x000451a1) list_highlight_pane_g5_cp1

0xa43f,	// (0x000451a9) list_highlight_pane_g6_cp1

0xa447,	// (0x000451b1) list_highlight_pane_g7_cp1

0xa44f,	// (0x000451b9) list_highlight_pane_g8_cp1

0xa457,	// (0x000451c1) list_highlight_pane_g9_cp1

0xa337,	// (0x000450a1) form_field_slider_pane_t3

0xa345,	// (0x000450af) form_field_slider_pane_t4

0xa353,	// (0x000450bd) slider_form_pane_ParamLimits

0xa353,	// (0x000450bd) slider_form_pane

0x7775,	// (0x000424df) control_abbreviations

0x7775,	// (0x000424df) control_conventions

0x7775,	// (0x000424df) control_definitions

0x7775,	// (0x000424df) format_table_attribute

0xab45,	// (0x000458af) bg_popup_preview_window_pane_g9

0x7775,	// (0x000424df) format_table_data2

0x7775,	// (0x000424df) format_table_data3

0x7775,	// (0x000424df) format_table_data_example

0x0008,

0x7775,	// (0x000424df) intro_purpose

0xf92d,	// (0x0004a697) bg_popup_preview_window_pane_g

0x7775,	// (0x000424df) texts_category

0x7775,	// (0x000424df) texts_graphics

0x8cef,	// (0x00043a59) text_digital

0x8cfe,	// (0x00043a68) text_primary

0x8d0d,	// (0x00043a77) text_primary_small

0x8d1c,	// (0x00043a86) text_secondary

0x8d2b,	// (0x00043a95) text_title

0xb2e1,	// (0x0004604b) bg_passive_tab_pane_g1_cp3_srt

0x8983,	// (0x000436ed) bg_passive_tab_pane_g2_cp3_srt

0xb2ea,	// (0x00046054) bg_passive_tab_pane_g3_cp3_srt

0x7855,	// (0x000425bf) bg_active_tab_pane_cp3_srt_ParamLimits

0x7855,	// (0x000425bf) bg_active_tab_pane_cp3_srt

0xb2f3,	// (0x0004605d) tabs_4_active_pane_srt_g1

0xb2fb,	// (0x00046065) tabs_4_active_pane_srt_t1_ParamLimits

0xb2fb,	// (0x00046065) tabs_4_active_pane_srt_t1

0xb2e1,	// (0x0004604b) bg_active_tab_pane_g1_cp3_copy1

0x8983,	// (0x000436ed) bg_active_tab_pane_g2_cp3_copy1

0xb2ea,	// (0x00046054) bg_active_tab_pane_g3_cp3_copy1

0x7855,	// (0x000425bf) tabs_2_long_active_pane_srt_ParamLimits

0x7855,	// (0x000425bf) tabs_2_long_active_pane_srt

0x7855,	// (0x000425bf) tabs_2_long_passive_pane_srt_ParamLimits

0x7855,	// (0x000425bf) tabs_2_long_passive_pane_srt

0x82d3,	// (0x0004303d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x82d3,	// (0x0004303d) bg_passive_tab_pane_cp4_srt

0xaf95,	// (0x00045cff) bg_passive_tab_pane_g1_cp4_srt

0x8983,	// (0x000436ed) bg_passive_tab_pane_g2_cp4_srt

0xaf9e,	// (0x00045d08) bg_passive_tab_pane_g3_cp4_srt

0x82b2,	// (0x0004301c) bg_active_tab_pane_cp4_srt_ParamLimits

0x82b2,	// (0x0004301c) bg_active_tab_pane_cp4_srt

0xafa7,	// (0x00045d11) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafa7,	// (0x00045d11) tabs_2_long_active_pane_srt_t1

0xaf95,	// (0x00045cff) bg_active_tab_pane_g1_cp4_srt

0x8983,	// (0x000436ed) bg_active_tab_pane_g2_cp4_srt

0xaf9e,	// (0x00045d08) bg_active_tab_pane_g3_cp4_srt

0x7ad1,	// (0x0004283b) tabs_3_long_active_pane_srt_ParamLimits

0x7ad1,	// (0x0004283b) tabs_3_long_active_pane_srt

0x7ad1,	// (0x0004283b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7ad1,	// (0x0004283b) tabs_3_long_passive_pane_cp_srt

0x7ad1,	// (0x0004283b) tabs_3_long_passive_pane_srt_ParamLimits

0x7ad1,	// (0x0004283b) tabs_3_long_passive_pane_srt

0x82d3,	// (0x0004303d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x82d3,	// (0x0004303d) bg_passive_tab_pane_cp5_srt

0x8a0d,	// (0x00043777) bg_passive_tab_pane_g1_cp5_srt

0x8983,	// (0x000436ed) bg_passive_tab_pane_g2_cp5_srt

0x8a16,	// (0x00043780) bg_passive_tab_pane_g3_cp5_srt

0x82b2,	// (0x0004301c) bg_active_tab_pane_cp5_srt_ParamLimits

0x82b2,	// (0x0004301c) bg_active_tab_pane_cp5_srt

0xaf83,	// (0x00045ced) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaf83,	// (0x00045ced) tabs_3_long_active_pane_srt_t1

0x8a0d,	// (0x00043777) bg_active_tab_pane_g1_cp5_srt

0x8983,	// (0x000436ed) bg_active_tab_pane_g2_cp5_srt

0x8a16,	// (0x00043780) bg_active_tab_pane_g3_cp5_srt

0xaf75,	// (0x00045cdf) navi_text_pane_srt_t1

0xaf6d,	// (0x00045cd7) navi_icon_pane_srt_g1

0x8f02,	// (0x00043c6c) midp_editing_number_pane_srt

0x8d3a,	// (0x00043aa4) midp_ticker_pane_srt

0x8f0a,	// (0x00043c74) midp_ticker_pane_srt_g1

0x8f12,	// (0x00043c7c) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0004a521) midp_ticker_pane_srt_g

0x8f1a,	// (0x00043c84) midp_ticker_pane_srt_t1

0xaf5e,	// (0x00045cc8) midp_editing_number_pane_t1_copy1

0x8d42,	// (0x00043aac) listscroll_midp_pane

0x8d42,	// (0x00043aac) midp_form_pane

0x8db0,	// (0x00043b1a) midp_info_popup_window_ParamLimits

0x8db0,	// (0x00043b1a) midp_info_popup_window

0x8194,	// (0x00042efe) bg_popup_sub_pane_cp50_ParamLimits

0x8194,	// (0x00042efe) bg_popup_sub_pane_cp50

0xa07e,	// (0x00044de8) listscroll_midp_info_pane_ParamLimits

0xa07e,	// (0x00044de8) listscroll_midp_info_pane

0xa066,	// (0x00044dd0) listscroll_form_midp_pane_ParamLimits

0xa066,	// (0x00044dd0) listscroll_form_midp_pane

0xa072,	// (0x00044ddc) scroll_bar_cp050

0xa046,	// (0x00044db0) list_midp_pane

0xbd3a,	// (0x00046aa4) signal_pane_g2_cp

0x9f80,	// (0x00044cea) listscroll_midp_info_pane_t1_ParamLimits

0x9f80,	// (0x00044cea) listscroll_midp_info_pane_t1

0x9f98,	// (0x00044d02) listscroll_midp_info_pane_t2_ParamLimits

0x9f98,	// (0x00044d02) listscroll_midp_info_pane_t2

0x9fd6,	// (0x00044d40) listscroll_midp_info_pane_t3_ParamLimits

0x9fd6,	// (0x00044d40) listscroll_midp_info_pane_t3

0xa010,	// (0x00044d7a) listscroll_midp_info_pane_t4_ParamLimits

0xa010,	// (0x00044d7a) listscroll_midp_info_pane_t4

0x0003,

0xf868,	// (0x0004a5d2) listscroll_midp_info_pane_t_ParamLimits

0xf868,	// (0x0004a5d2) listscroll_midp_info_pane_t

0x825e,	// (0x00042fc8) scroll_pane_cp21

0x9f1a,	// (0x00044c84) form_midp_field_choice_group_pane

0x9f23,	// (0x00044c8d) form_midp_field_text_pane

0x9f66,	// (0x00044cd0) form_midp_field_time_pane

0x9f6e,	// (0x00044cd8) form_midp_gauge_slider_pane

0x9f77,	// (0x00044ce1) form_midp_gauge_wait_pane

0x7775,	// (0x000424df) form_midp_image_pane

0x5538,	// (0x000402a2) list_single_midp_pane_ParamLimits

0x5538,	// (0x000402a2) list_single_midp_pane

0x9ede,	// (0x00044c48) form_midp_field_text_pane_t1

0x9cf2,	// (0x00044a5c) input_focus_pane_cp050

0x9f09,	// (0x00044c73) list_midp_form_text_pane

0x9ead,	// (0x00044c17) form_midp_field_choice_group_pane_t1

0x9ebb,	// (0x00044c25) input_focus_pane_cp051

0x9ecf,	// (0x00044c39) list_midp_choice_pane

0x7775,	// (0x000424df) status_idle_pane

0x9e91,	// (0x00044bfb) form_midp_field_time_pane_t1

0x776b,	// (0x000424d5) wait_anim_pane_g2_copy1

0x9e9f,	// (0x00044c09) form_midp_field_time_pane_t2

0x0001,

0x8e60,	// (0x00043bca) aid_navinavi_width_2_pane

0xf863,	// (0x0004a5cd) form_midp_field_time_pane_t

0x7775,	// (0x000424df) input_focus_pane_cp052

0x7775,	// (0x000424df) bg_input_focus_pane_cp040

0x9e51,	// (0x00044bbb) form_midp_gauge_slider_pane_t1

0x9e5f,	// (0x00044bc9) form_midp_gauge_slider_pane_t2

0x9e6d,	// (0x00044bd7) form_midp_gauge_slider_pane_t3

0x9e7b,	// (0x00044be5) form_midp_gauge_slider_pane_t4

0x0003,

0xf85a,	// (0x0004a5c4) form_midp_gauge_slider_pane_t

0x9e89,	// (0x00044bf3) form_midp_slider_pane

0x7855,	// (0x000425bf) bg_input_focus_pane_cp041_ParamLimits

0x7855,	// (0x000425bf) bg_input_focus_pane_cp041

0x9e1e,	// (0x00044b88) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e1e,	// (0x00044b88) form_midp_gauge_wait_pane_t1

0x9e30,	// (0x00044b9a) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e30,	// (0x00044b9a) form_midp_gauge_wait_pane_t2

0x0001,

0xf855,	// (0x0004a5bf) form_midp_gauge_wait_pane_t_ParamLimits

0xf855,	// (0x0004a5bf) form_midp_gauge_wait_pane_t

0x9e42,	// (0x00044bac) form_midp_wait_pane_ParamLimits

0x9e42,	// (0x00044bac) form_midp_wait_pane

0x9de6,	// (0x00044b50) form_midp_image_pane_g1

0x9def,	// (0x00044b59) form_midp_image_pane_t1

0x9dfe,	// (0x00044b68) form_midp_image_pane_t2

0x9e0d,	// (0x00044b77) form_midp_image_pane_t3

0x0002,

0xf84e,	// (0x0004a5b8) form_midp_image_pane_t

0x9ddd,	// (0x00044b47) list_single_midp_pane_g1

0x5529,	// (0x00040293) list_single_midp_pane_t1

0x9dc3,	// (0x00044b2d) list_midp_form_item_pane_ParamLimits

0x9dc3,	// (0x00044b2d) list_midp_form_item_pane

0x8e08,	// (0x00043b72) list_midp_form_item_pane_t1

0x8e17,	// (0x00043b81) midp_ticker_pane_g1

0x8e23,	// (0x00043b8d) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0004a507) midp_ticker_pane_g

0x8e2f,	// (0x00043b99) midp_ticker_pane_t1

0xb1dd,	// (0x00045f47) midp_editing_number_pane_t1

0xb1bb,	// (0x00045f25) midp_editing_number_pane

0xb1ca,	// (0x00045f34) midp_ticker_pane

0xaf4e,	// (0x00045cb8) ai_message_heading_pane

0x7775,	// (0x000424df) bg_popup_window_pane_cp14

0xaf56,	// (0x00045cc0) listscroll_ai_message_pane

0xaed4,	// (0x00045c3e) ai_message_heading_pane_g1_ParamLimits

0xaed4,	// (0x00045c3e) ai_message_heading_pane_g1

0xaee0,	// (0x00045c4a) ai_message_heading_pane_g2_ParamLimits

0xaee0,	// (0x00045c4a) ai_message_heading_pane_g2

0xaeee,	// (0x00045c58) ai_message_heading_pane_g3_ParamLimits

0xaeee,	// (0x00045c58) ai_message_heading_pane_g3

0xaefa,	// (0x00045c64) ai_message_heading_pane_g4_ParamLimits

0xaefa,	// (0x00045c64) ai_message_heading_pane_g4

0x0003,

0xf98f,	// (0x0004a6f9) ai_message_heading_pane_g_ParamLimits

0xf98f,	// (0x0004a6f9) ai_message_heading_pane_g

0xaf06,	// (0x00045c70) ai_message_heading_pane_t1_ParamLimits

0xaf06,	// (0x00045c70) ai_message_heading_pane_t1

0xaf20,	// (0x00045c8a) ai_message_heading_pane_t2_ParamLimits

0xaf20,	// (0x00045c8a) ai_message_heading_pane_t2

0x0001,

0xf998,	// (0x0004a702) ai_message_heading_pane_t_ParamLimits

0xf998,	// (0x0004a702) ai_message_heading_pane_t

0xaf34,	// (0x00045c9e) bg_popup_heading_pane_cp1_ParamLimits

0xaf34,	// (0x00045c9e) bg_popup_heading_pane_cp1

0xaec2,	// (0x00045c2c) list_ai_message_pane_ParamLimits

0xaec2,	// (0x00045c2c) list_ai_message_pane

0x825e,	// (0x00042fc8) scroll_pane_cp10

0xae5e,	// (0x00045bc8) list_ai_message_pane_g1

0xae66,	// (0x00045bd0) list_ai_message_pane_g2

0x0001,

0xf96c,	// (0x0004a6d6) list_ai_message_pane_g

0xae6e,	// (0x00045bd8) list_ai_message_pane_t1_ParamLimits

0xae6e,	// (0x00045bd8) list_ai_message_pane_t1

0xae83,	// (0x00045bed) list_ai_message_pane_t2_ParamLimits

0xae83,	// (0x00045bed) list_ai_message_pane_t2

0xae98,	// (0x00045c02) list_ai_message_pane_t3_ParamLimits

0xae98,	// (0x00045c02) list_ai_message_pane_t3

0xaead,	// (0x00045c17) list_ai_message_pane_t4_ParamLimits

0xaead,	// (0x00045c17) list_ai_message_pane_t4

0x0003,

0xf971,	// (0x0004a6db) list_ai_message_pane_t_ParamLimits

0xf971,	// (0x0004a6db) list_ai_message_pane_t

0xae47,	// (0x00045bb1) cell_ai_soft_ind_pane_ParamLimits

0xae47,	// (0x00045bb1) cell_ai_soft_ind_pane

0x8e41,	// (0x00043bab) cell_ai_soft_ind_pane_g1_ParamLimits

0x8e41,	// (0x00043bab) cell_ai_soft_ind_pane_g1

0x7775,	// (0x000424df) grid_highlight_cp1

0x8e4e,	// (0x00043bb8) text_secondary_cp56_ParamLimits

0x8e4e,	// (0x00043bb8) text_secondary_cp56

0xae1c,	// (0x00045b86) example_general_pane_ParamLimits

0xae1c,	// (0x00045b86) example_general_pane

0xae28,	// (0x00045b92) example_parent_pane_g1_ParamLimits

0xae28,	// (0x00045b92) example_parent_pane_g1

0xae34,	// (0x00045b9e) example_parent_pane_t1_ParamLimits

0xae34,	// (0x00045b9e) example_parent_pane_t1

0x9487,	// (0x000441f1) popup_preview_text_window_ParamLimits

0x9487,	// (0x000441f1) popup_preview_text_window

0x8c69,	// (0x000439d3) list_single_pane_cp2_g4

0x7b87,	// (0x000428f1) bg_popup_preview_window_pane_ParamLimits

0x7b87,	// (0x000428f1) bg_popup_preview_window_pane

0xab4f,	// (0x000458b9) popup_preview_text_window_t1_ParamLimits

0xab4f,	// (0x000458b9) popup_preview_text_window_t1

0xab6d,	// (0x000458d7) popup_preview_text_window_t2_ParamLimits

0xab6d,	// (0x000458d7) popup_preview_text_window_t2

0xabb6,	// (0x00045920) popup_preview_text_window_t3_ParamLimits

0xabb6,	// (0x00045920) popup_preview_text_window_t3

0xabfb,	// (0x00045965) popup_preview_text_window_t4_ParamLimits

0xabfb,	// (0x00045965) popup_preview_text_window_t4

0x0004,

0xf940,	// (0x0004a6aa) popup_preview_text_window_t_ParamLimits

0xf940,	// (0x0004a6aa) popup_preview_text_window_t

0xac79,	// (0x000459e3) scroll_pane_cp11

0x9c00,	// (0x0004496a) bg_popup_preview_window_pane_g1

0xab03,	// (0x0004586d) bg_popup_preview_window_pane_g2

0xab0d,	// (0x00045877) bg_popup_preview_window_pane_g3

0xab17,	// (0x00045881) bg_popup_preview_window_pane_g4

0xab21,	// (0x0004588b) bg_popup_preview_window_pane_g5

0xab2b,	// (0x00045895) bg_popup_preview_window_pane_g6

0xab33,	// (0x0004589d) bg_popup_preview_window_pane_g7

0xab3b,	// (0x000458a5) bg_popup_preview_window_pane_g8

0x5a51,	// (0x000407bb) aid_popup_width_pane

0x9463,	// (0x000441cd) popup_midp_note_alarm_window_ParamLimits

0x9463,	// (0x000441cd) popup_midp_note_alarm_window

0x80d0,	// (0x00042e3a) data_form_pane_ParamLimits

0x5267,	// (0x0003ffd1) form_field_data_pane_g1

0x5271,	// (0x0003ffdb) form_field_data_pane_t1_ParamLimits

0x80dc,	// (0x00042e46) input_focus_pane_ParamLimits

0x80ea,	// (0x00042e54) data_form_wide_pane_ParamLimits

0x528b,	// (0x0003fff5) form_field_data_wide_pane_g1

0x5297,	// (0x00040001) form_field_data_wide_pane_t1_ParamLimits

0x7e4d,	// (0x00042bb7) input_focus_pane_cp6_ParamLimits

0x8209,	// (0x00042f73) input_popup_find_pane_g1_ParamLimits

0x8209,	// (0x00042f73) input_popup_find_pane_g1

0x6075,	// (0x00040ddf) aid_navi_side_left_pane

0x608a,	// (0x00040df4) aid_navi_side_right_pane

0xa512,	// (0x0004527c) bg_popup_window_pane_cp30_ParamLimits

0xa512,	// (0x0004527c) bg_popup_window_pane_cp30

0xa58c,	// (0x000452f6) popup_midp_note_alarm_window_g1_ParamLimits

0xa58c,	// (0x000452f6) popup_midp_note_alarm_window_g1

0xa5bc,	// (0x00045326) popup_midp_note_alarm_window_t1_ParamLimits

0xa5bc,	// (0x00045326) popup_midp_note_alarm_window_t1

0xa65d,	// (0x000453c7) popup_midp_note_alarm_window_t2_ParamLimits

0xa65d,	// (0x000453c7) popup_midp_note_alarm_window_t2

0xa70b,	// (0x00045475) popup_midp_note_alarm_window_t3_ParamLimits

0xa70b,	// (0x00045475) popup_midp_note_alarm_window_t3

0xa73d,	// (0x000454a7) popup_midp_note_alarm_window_t4_ParamLimits

0xa73d,	// (0x000454a7) popup_midp_note_alarm_window_t4

0xa763,	// (0x000454cd) popup_midp_note_alarm_window_t5_ParamLimits

0xa763,	// (0x000454cd) popup_midp_note_alarm_window_t5

0x000a,

0xf8dd,	// (0x0004a647) popup_midp_note_alarm_window_t_ParamLimits

0xf8dd,	// (0x0004a647) popup_midp_note_alarm_window_t

0xa80f,	// (0x00045579) wait_bar_pane_cp1_ParamLimits

0xa80f,	// (0x00045579) wait_bar_pane_cp1

0x7775,	// (0x000424df) wait_anim_pane_copy1

0x7775,	// (0x000424df) wait_border_pane_copy1

0xa1f7,	// (0x00044f61) wait_border_pane_g1_copy1

0x52b1,	// (0x0004001b) form_field_popup_pane_g1

0x52b9,	// (0x00040023) form_field_popup_pane_t1_ParamLimits

0x80dc,	// (0x00042e46) input_focus_pane_cp7_ParamLimits

0x8116,	// (0x00042e80) list_form_pane_ParamLimits

0x52d3,	// (0x0004003d) form_field_popup_wide_pane_g1

0x52db,	// (0x00040045) form_field_popup_wide_pane_t1_ParamLimits

0x80dc,	// (0x00042e46) input_focus_pane_cp8_ParamLimits

0x8122,	// (0x00042e8c) list_form_wide_pane_ParamLimits

0xb36e,	// (0x000460d8) aid_size_cell_graphic_pane

0x5367,	// (0x000400d1) data_form_pane_t1_ParamLimits

0x557f,	// (0x000402e9) data_form_wide_pane_t1_ParamLimits

0x97ae,	// (0x00044518) bg_status_flat_pane

0x77b5,	// (0x0004251f) title_pane_t1_ParamLimits

0x781d,	// (0x00042587) title_pane_t2_ParamLimits

0x7843,	// (0x000425ad) title_pane_t3_ParamLimits

0xf59b,	// (0x0004a305) title_pane_t_ParamLimits

0x86e1,	// (0x0004344b) level_1_signal_ParamLimits

0x86ee,	// (0x00043458) level_2_signal_ParamLimits

0x86fb,	// (0x00043465) level_3_signal_ParamLimits

0x8708,	// (0x00043472) level_4_signal_ParamLimits

0x8715,	// (0x0004347f) level_5_signal_ParamLimits

0x8722,	// (0x0004348c) level_6_signal_ParamLimits

0x872f,	// (0x00043499) level_7_signal_ParamLimits

0x86e1,	// (0x0004344b) level_1_battery_ParamLimits

0x86ee,	// (0x00043458) level_2_battery_ParamLimits

0x86fb,	// (0x00043465) level_3_battery_ParamLimits

0x8708,	// (0x00043472) level_4_battery_ParamLimits

0x8715,	// (0x0004347f) level_5_battery_ParamLimits

0x8722,	// (0x0004348c) level_6_battery_ParamLimits

0x872f,	// (0x00043499) level_7_battery_ParamLimits

0xa417,	// (0x00045181) bg_status_flat_pane_g1

0xa41f,	// (0x00045189) bg_status_flat_pane_g2

0xa427,	// (0x00045191) bg_status_flat_pane_g3

0xa42f,	// (0x00045199) bg_status_flat_pane_g4

0xa437,	// (0x000451a1) bg_status_flat_pane_g5

0xa43f,	// (0x000451a9) bg_status_flat_pane_g6

0xa447,	// (0x000451b1) bg_status_flat_pane_g7

0x786b,	// (0x000425d5) tabs_3_active_pane_t1_ParamLimits

0x786b,	// (0x000425d5) tabs_3_passive_pane_t1_ParamLimits

0x7885,	// (0x000425ef) tabs_4_active_pane_t1_ParamLimits

0x7885,	// (0x000425ef) tabs_4_1_passive_pane_t1_ParamLimits

0x82a0,	// (0x0004300a) tabs_2_active_pane_t1_ParamLimits

0x82a0,	// (0x0004300a) tabs_2_passive_pane_t1_ParamLimits

0x82b2,	// (0x0004301c) bg_active_tab_pane_cp4_ParamLimits

0x82c0,	// (0x0004302a) tabs_2_long_active_pane_t1_ParamLimits

0x82d3,	// (0x0004303d) bg_passive_tab_pane_cp4_ParamLimits

0x6604,	// (0x0004136e) list_single_midp_graphic_pane_t1_ParamLimits

0x82b2,	// (0x0004301c) bg_active_tab_pane_cp5_ParamLimits

0x82df,	// (0x00043049) tabs_3_long_active_pane_t1_ParamLimits

0x82d3,	// (0x0004303d) bg_passive_tab_pane_cp5_ParamLimits

0x6604,	// (0x0004136e) list_single_midp_graphic_pane_t1

0x97ae,	// (0x00044518) bg_status_flat_pane_ParamLimits

0x9879,	// (0x000445e3) indicator_pane_cp2_ParamLimits

0x9879,	// (0x000445e3) indicator_pane_cp2

0x99bb,	// (0x00044725) navi_pane_srt_ParamLimits

0x99bb,	// (0x00044725) navi_pane_srt

0x99df,	// (0x00044749) popup_clock_digital_analogue_window_cp1

0x7935,	// (0x0004269f) indicator_pane_t1

0x8d3a,	// (0x00043aa4) copy_highlight_pane

0x8d3a,	// (0x00043aa4) cursor_graphics_pane

0x8d3a,	// (0x00043aa4) graphic_within_text_pane

0x8d3a,	// (0x00043aa4) link_highlight_pane

0xac3c,	// (0x000459a6) popup_preview_text_window_t5_ParamLimits

0xac3c,	// (0x000459a6) popup_preview_text_window_t5

0x8e6a,	// (0x00043bd4) cursor_digital_pane

0x8e6a,	// (0x00043bd4) cursor_primary_pane

0x8e7b,	// (0x00043be5) cursor_primary_small_pane

0x8e83,	// (0x00043bed) cursor_secondary_pane

0x8e8b,	// (0x00043bf5) cursor_title_pane

0x8e6a,	// (0x00043bd4) link_highlight_digital_pane

0x8e72,	// (0x00043bdc) link_highlight_primary_pane

0x8e7b,	// (0x00043be5) link_highlight_primary_small_pane

0x8e83,	// (0x00043bed) link_highlight_secondary_pane

0x8e8b,	// (0x00043bf5) link_highlight_title_pane

0x8e6a,	// (0x00043bd4) copy_highlight_digital_pane

0x8e6a,	// (0x00043bd4) copy_highlight_primary_pane

0x8e7b,	// (0x00043be5) copy_highlight_primary_small_pane

0x8e83,	// (0x00043bed) copy_highlight_secondary_pane

0x8e8b,	// (0x00043bf5) copy_highlight_title_pane

0x8e83,	// (0x00043bed) graphic_text_digital_pane

0xa4b5,	// (0x0004521f) graphic_text_primary_pane

0xa4be,	// (0x00045228) graphic_text_primary_small_pane

0x8e7b,	// (0x00043be5) graphic_text_secondary_pane

0x8e6a,	// (0x00043bd4) graphic_text_title_pane

0x8e93,	// (0x00043bfd) cursor_primary_pane_g1

0xa4a7,	// (0x00045211) cursor_text_primary_t1

0xa48f,	// (0x000451f9) cursor_primary_small_pane_g1

0xa499,	// (0x00045203) cursor_text_primary_small_t1

0xa477,	// (0x000451e1) cursor_primary_small_pane_g1_copy1

0xa481,	// (0x000451eb) cursor_text_primary_small_t1_copy1

0xa45f,	// (0x000451c9) cursor_text_title_t1

0xa46d,	// (0x000451d7) cursor_title_pane_g1

0x8e93,	// (0x00043bfd) cursor_digital_pane_g1

0x8e9d,	// (0x00043c07) cursor_text_digital_t1

0x8eab,	// (0x00043c15) link_highlight_primary_pane_g1

0xa408,	// (0x00045172) link_highlight_primary_pane_t1

0x8eab,	// (0x00043c15) link_highlight_primary_small_pane_g1

0x8eb3,	// (0x00043c1d) link_highlight_primary_small_pane_t1

0x8ec2,	// (0x00043c2c) link_highlight_secondary_pane_g1

0x8eca,	// (0x00043c34) link_highlight_secondary_pane_t1

0xa37c,	// (0x000450e6) link_highlight_title_pane_g1

0xa384,	// (0x000450ee) link_highlight_title_pane_t1

0xa365,	// (0x000450cf) link_highlight_digital_pane_g1

0xa36d,	// (0x000450d7) link_highlight_digital_pane_t1

0xa22d,	// (0x00044f97) copy_highlight_primary_pane_g1

0xa244,	// (0x00044fae) copy_highlight_primary_pane_t1

0xa22d,	// (0x00044f97) copy_highlight_primary_small_pane_g1

0xa235,	// (0x00044f9f) copy_highlight_primary_small_pane_t1

0x8ed9,	// (0x00043c43) copy_highlight_secondary_pane_g1

0x8ee1,	// (0x00043c4b) copy_highlight_secondary_pane_t1

0xa216,	// (0x00044f80) copy_highlight_title_pane_g1

0xa21e,	// (0x00044f88) copy_highlight_title_pane_t1

0xa22d,	// (0x00044f97) copy_highlight_digital_pane_g1

0xb53e,	// (0x000462a8) copy_highlight_digital_pane_t1

0xb492,	// (0x000461fc) graphic_text_primary_pane_g1

0xb522,	// (0x0004628c) graphic_text_primary_pane_t1

0xb530,	// (0x0004629a) graphic_text_primary_pane_t2

0x0001,

0xfa0c,	// (0x0004a776) graphic_text_primary_pane_t

0xb4fe,	// (0x00046268) graphic_text_primary_small_pane_g1

0xb506,	// (0x00046270) graphic_text_primary_small_pane_t1

0xb514,	// (0x0004627e) graphic_text_primary_small_pane_t2

0x0001,

0xfa07,	// (0x0004a771) graphic_text_primary_small_pane_t

0xb4da,	// (0x00046244) graphic_text_secondary_pane_g1

0xb4e2,	// (0x0004624c) graphic_text_secondary_pane_t1

0xb4f0,	// (0x0004625a) graphic_text_secondary_pane_t2

0x0001,

0xfa02,	// (0x0004a76c) graphic_text_secondary_pane_t

0xb4b6,	// (0x00046220) graphic_text_title_pane_g1

0xb4be,	// (0x00046228) graphic_text_title_pane_t1

0xb4cc,	// (0x00046236) graphic_text_title_pane_t2

0x0001,

0xf9fd,	// (0x0004a767) graphic_text_title_pane_t

0xb492,	// (0x000461fc) graphic_text_digital_pane_g1

0xb49a,	// (0x00046204) graphic_text_digital_pane_t1

0xb4a8,	// (0x00046212) graphic_text_digital_pane_t2

0x0001,

0xf9f8,	// (0x0004a762) graphic_text_digital_pane_t

0x7855,	// (0x000425bf) navi_icon_pane_srt_ParamLimits

0x7855,	// (0x000425bf) navi_icon_pane_srt

0x7775,	// (0x000424df) navi_midp_pane_srt

0x7775,	// (0x000424df) navi_navi_pane_srt

0x7855,	// (0x000425bf) navi_text_pane_srt_ParamLimits

0x7855,	// (0x000425bf) navi_text_pane_srt

0xb45d,	// (0x000461c7) navi_navi_icon_text_pane_srt

0xb465,	// (0x000461cf) navi_navi_pane_srt_g1_ParamLimits

0xb465,	// (0x000461cf) navi_navi_pane_srt_g1

0xb477,	// (0x000461e1) navi_navi_pane_srt_g2_ParamLimits

0xb477,	// (0x000461e1) navi_navi_pane_srt_g2

0x0001,

0xf9f3,	// (0x0004a75d) navi_navi_pane_srt_g_ParamLimits

0xf9f3,	// (0x0004a75d) navi_navi_pane_srt_g

0xb489,	// (0x000461f3) navi_navi_tabs_pane_srt

0xb45d,	// (0x000461c7) navi_navi_text_pane_srt

0xb45d,	// (0x000461c7) navi_navi_volume_pane_srt

0xb44e,	// (0x000461b8) navi_navi_text_pane_srt_t1

0x698a,	// (0x000416f4) navi_navi_volume_pane_srt_g1

0x6992,	// (0x000416fc) volume_small_pane_srt_ParamLimits

0x6992,	// (0x000416fc) volume_small_pane_srt

0x637a,	// (0x000410e4) volume_small_pane_srt_g1_ParamLimits

0x637a,	// (0x000410e4) volume_small_pane_srt_g1

0x638a,	// (0x000410f4) volume_small_pane_srt_g2_ParamLimits

0x638a,	// (0x000410f4) volume_small_pane_srt_g2

0x639b,	// (0x00041105) volume_small_pane_srt_g3_ParamLimits

0x639b,	// (0x00041105) volume_small_pane_srt_g3

0x63ac,	// (0x00041116) volume_small_pane_srt_g4_ParamLimits

0x63ac,	// (0x00041116) volume_small_pane_srt_g4

0x63bd,	// (0x00041127) volume_small_pane_srt_g5_ParamLimits

0x63bd,	// (0x00041127) volume_small_pane_srt_g5

0x63ce,	// (0x00041138) volume_small_pane_srt_g6_ParamLimits

0x63ce,	// (0x00041138) volume_small_pane_srt_g6

0x63df,	// (0x00041149) volume_small_pane_srt_g7_ParamLimits

0x63df,	// (0x00041149) volume_small_pane_srt_g7

0x63f0,	// (0x0004115a) volume_small_pane_srt_g8_ParamLimits

0x63f0,	// (0x0004115a) volume_small_pane_srt_g8

0x6401,	// (0x0004116b) volume_small_pane_srt_g9_ParamLimits

0x6401,	// (0x0004116b) volume_small_pane_srt_g9

0x6412,	// (0x0004117c) volume_small_pane_srt_g10_ParamLimits

0x6412,	// (0x0004117c) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0004a50c) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0004a50c) volume_small_pane_srt_g

0x7c3c,	// (0x000429a6) query_popup_data_pane_cp2

0xb434,	// (0x0004619e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb434,	// (0x0004619e) navi_navi_icon_text_pane_srt_t1

0xa4b5,	// (0x0004521f) navi_tabs_2_long_pane_srt

0xa4b5,	// (0x0004521f) navi_tabs_2_pane_srt

0xa4b5,	// (0x0004521f) navi_tabs_3_long_pane_srt

0xa4b5,	// (0x0004521f) navi_tabs_3_pane_srt

0xa4b5,	// (0x0004521f) navi_tabs_4_pane_srt

0x696a,	// (0x000416d4) tabs_2_active_pane_srt_ParamLimits

0x696a,	// (0x000416d4) tabs_2_active_pane_srt

0x697a,	// (0x000416e4) tabs_2_passive_pane_srt_ParamLimits

0x697a,	// (0x000416e4) tabs_2_passive_pane_srt

0x90c4,	// (0x00043e2e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x90c4,	// (0x00043e2e) bg_passive_tab_pane_cp1_srt

0xb400,	// (0x0004616a) bg_passive_tab_pane_g1_cp1_srt

0x8983,	// (0x000436ed) bg_passive_tab_pane_g2_cp1_srt

0xb409,	// (0x00046173) bg_passive_tab_pane_g3_cp1_srt

0x7855,	// (0x000425bf) bg_active_tab_pane_cp1_srt_ParamLimits

0x7855,	// (0x000425bf) bg_active_tab_pane_cp1_srt

0xb412,	// (0x0004617c) tabs_2_active_pane_srt_g1

0xb41a,	// (0x00046184) tabs_2_active_pane_srt_t1_ParamLimits

0xb41a,	// (0x00046184) tabs_2_active_pane_srt_t1

0xb400,	// (0x0004616a) bg_active_tab_pane_g1_cp1_srt

0x8983,	// (0x000436ed) bg_active_tab_pane_g2_cp1_srt

0xb409,	// (0x00046173) bg_active_tab_pane_g3_cp1_srt

0x6937,	// (0x000416a1) tabs_3_active_pane_srt_ParamLimits

0x6937,	// (0x000416a1) tabs_3_active_pane_srt

0x6948,	// (0x000416b2) tabs_3_passive_pane_cp_srt_ParamLimits

0x6948,	// (0x000416b2) tabs_3_passive_pane_cp_srt

0x6959,	// (0x000416c3) tabs_3_passive_pane_srt_ParamLimits

0x6959,	// (0x000416c3) tabs_3_passive_pane_srt

0x90c4,	// (0x00043e2e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x90c4,	// (0x00043e2e) bg_passive_tab_pane_cp2_srt

0x8ef0,	// (0x00043c5a) bg_passive_tab_pane_g1_cp2_srt

0x8983,	// (0x000436ed) bg_passive_tab_pane_g2_cp2_srt

0x8ef9,	// (0x00043c63) bg_passive_tab_pane_g3_cp2_srt

0x7855,	// (0x000425bf) bg_active_tab_pane_cp2_srt_ParamLimits

0x7855,	// (0x000425bf) bg_active_tab_pane_cp2_srt

0xb3e6,	// (0x00046150) tabs_3_active_pane_srt_g1

0xb3ee,	// (0x00046158) tabs_3_active_pane_srt_t1_ParamLimits

0xb3ee,	// (0x00046158) tabs_3_active_pane_srt_t1

0x8ef0,	// (0x00043c5a) bg_active_tab_pane_g1_cp2_srt

0x8983,	// (0x000436ed) bg_active_tab_pane_g2_cp2_srt

0x8ef9,	// (0x00043c63) bg_active_tab_pane_g3_cp2_srt

0x68ef,	// (0x00041659) tabs_4_active_pane_srt_ParamLimits

0x68ef,	// (0x00041659) tabs_4_active_pane_srt

0x6901,	// (0x0004166b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6901,	// (0x0004166b) tabs_4_passive_pane_cp2_srt

0x904e,	// (0x00043db8) aid_size_cell_toolbar

0x82d3,	// (0x0004303d) main_idle_act_pane_ParamLimits

0x9289,	// (0x00043ff3) popup_large_graphic_colour_window_ParamLimits

0x9630,	// (0x0004439a) popup_toolbar_window_ParamLimits

0x9630,	// (0x0004439a) popup_toolbar_window

0xb200,	// (0x00045f6a) list_single_graphic_2heading_pane_ParamLimits

0xb200,	// (0x00045f6a) list_single_graphic_2heading_pane

0x848f,	// (0x000431f9) aid_size_cell_apps_grid_lsc_pane

0x84a1,	// (0x0004320b) aid_size_cell_apps_grid_prt_pane

0x90c4,	// (0x00043e2e) bg_wml_button_pane_cp1_ParamLimits

0x90c4,	// (0x00043e2e) bg_wml_button_pane_cp1

0x9ede,	// (0x00044c48) form_midp_field_text_pane_t1_ParamLimits

0x9cf2,	// (0x00044a5c) input_focus_pane_cp050_ParamLimits

0x9f09,	// (0x00044c73) list_midp_form_text_pane_ParamLimits

0x9ebb,	// (0x00044c25) input_focus_pane_cp051_ParamLimits

0x9ecf,	// (0x00044c39) list_midp_choice_pane_ParamLimits

0x9d83,	// (0x00044aed) list_single_2graphic_pane_cp3_ParamLimits

0x9d83,	// (0x00044aed) list_single_2graphic_pane_cp3

0x9d9c,	// (0x00044b06) list_single_midp_graphic_pane_ParamLimits

0x9d9c,	// (0x00044b06) list_single_midp_graphic_pane

0x5471,	// (0x000401db) list_single_graphic_2heading_pane_g1_ParamLimits

0x5471,	// (0x000401db) list_single_graphic_2heading_pane_g1

0x547d,	// (0x000401e7) list_single_graphic_2heading_pane_g4_ParamLimits

0x547d,	// (0x000401e7) list_single_graphic_2heading_pane_g4

0x5489,	// (0x000401f3) list_single_graphic_2heading_pane_g5_ParamLimits

0x5489,	// (0x000401f3) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0004a55f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0004a55f) list_single_graphic_2heading_pane_g

0x5495,	// (0x000401ff) list_single_graphic_2heading_pane_t1_ParamLimits

0x5495,	// (0x000401ff) list_single_graphic_2heading_pane_t1

0x54a9,	// (0x00040213) list_single_graphic_2heading_pane_t2_ParamLimits

0x54a9,	// (0x00040213) list_single_graphic_2heading_pane_t2

0x54c5,	// (0x0004022f) list_single_graphic_2heading_pane_t3_ParamLimits

0x54c5,	// (0x0004022f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0004a566) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0004a566) list_single_graphic_2heading_pane_t

0x9b3e,	// (0x000448a8) bg_popup_sub_pane_cp2

0x9b68,	// (0x000448d2) grid_toobar_pane

0x657c,	// (0x000412e6) cell_toolbar_pane_ParamLimits

0x657c,	// (0x000412e6) cell_toolbar_pane

0x9ba4,	// (0x0004490e) cell_toolbar_pane_g1_ParamLimits

0x9ba4,	// (0x0004490e) cell_toolbar_pane_g1

0x9bb8,	// (0x00044922) cell_toolbar_pane_g2_ParamLimits

0x9bb8,	// (0x00044922) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0004a574) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0004a574) cell_toolbar_pane_g

0x9bda,	// (0x00044944) grid_highlight_pane_cp2_ParamLimits

0x9bda,	// (0x00044944) grid_highlight_pane_cp2

0x9bf4,	// (0x0004495e) toolbar_button_pane

0x9c00,	// (0x0004496a) toolbar_button_pane_g1

0x9c08,	// (0x00044972) toolbar_button_pane_g2

0x9c10,	// (0x0004497a) toolbar_button_pane_g3

0x9c18,	// (0x00044982) toolbar_button_pane_g4

0x9c20,	// (0x0004498a) toolbar_button_pane_g5

0x9c28,	// (0x00044992) toolbar_button_pane_g6

0x9c30,	// (0x0004499a) toolbar_button_pane_g7

0x9c38,	// (0x000449a2) toolbar_button_pane_g8

0x9c40,	// (0x000449aa) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0004a579) toolbar_button_pane_g

0x65c0,	// (0x0004132a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x65c0,	// (0x0004132a) list_single_2graphic_pane_g1_cp3

0x65cc,	// (0x00041336) list_single_2graphic_pane_g2_cp3_ParamLimits

0x65cc,	// (0x00041336) list_single_2graphic_pane_g2_cp3

0x8b64,	// (0x000438ce) list_single_2graphic_pane_g3_cp3

0x65dd,	// (0x00041347) list_single_2graphic_pane_g4_cp3_ParamLimits

0x65dd,	// (0x00041347) list_single_2graphic_pane_g4_cp3

0x65e9,	// (0x00041353) list_single_2graphic_pane_t1_cp3_ParamLimits

0x65e9,	// (0x00041353) list_single_2graphic_pane_t1_cp3

0x8b58,	// (0x000438c2) list_single_midp_graphic_pane_g2_ParamLimits

0x8b58,	// (0x000438c2) list_single_midp_graphic_pane_g2

0x5459,	// (0x000401c3) aid_zoom_text_primary

0x5461,	// (0x000401cb) aid_zoom_text_secondary

0x8fad,	// (0x00043d17) status_small_pane_g7_ParamLimits

0x8fad,	// (0x00043d17) status_small_pane_g7

0x8fd0,	// (0x00043d3a) status_small_pane_t1_ParamLimits

0x778c,	// (0x000424f6) title_pane_g2

0x0003,

0xf592,	// (0x0004a2fc) title_pane_g

0x7ce5,	// (0x00042a4f) aid_size_cell_colour_1_pane_ParamLimits

0x7ce5,	// (0x00042a4f) aid_size_cell_colour_1_pane

0x7cf9,	// (0x00042a63) aid_size_cell_colour_2_pane_ParamLimits

0x7cf9,	// (0x00042a63) aid_size_cell_colour_2_pane

0x7d0d,	// (0x00042a77) aid_size_cell_colour_3_pane_ParamLimits

0x7d0d,	// (0x00042a77) aid_size_cell_colour_3_pane

0x7d21,	// (0x00042a8b) aid_size_cell_colour_4_pane_ParamLimits

0x7d21,	// (0x00042a8b) aid_size_cell_colour_4_pane

0x5fb1,	// (0x00040d1b) title_pane_stacon_g1_ParamLimits

0x5fb1,	// (0x00040d1b) title_pane_stacon_g1

0xa29b,	// (0x00045005) popup_note_wait_window_g3_ParamLimits

0xa29b,	// (0x00045005) popup_note_wait_window_g3

0xa312,	// (0x0004507c) popup_note_wait_window_t5_ParamLimits

0xa312,	// (0x0004507c) popup_note_wait_window_t5

0x7775,	// (0x000424df) main_feb_china_hwr_fs_writing_pane

0x9150,	// (0x00043eba) popup_feb_china_hwr_fs_window_ParamLimits

0x9150,	// (0x00043eba) popup_feb_china_hwr_fs_window

0x661a,	// (0x00041384) aid_size_cell_hwr_fs_ParamLimits

0x661a,	// (0x00041384) aid_size_cell_hwr_fs

0x9cf2,	// (0x00044a5c) bg_popup_sub_pane_cp3_ParamLimits

0x9cf2,	// (0x00044a5c) bg_popup_sub_pane_cp3

0x662f,	// (0x00041399) grid_hwr_fs_pane_ParamLimits

0x662f,	// (0x00041399) grid_hwr_fs_pane

0x6647,	// (0x000413b1) linegrid_hwr_fs_pane_ParamLimits

0x6647,	// (0x000413b1) linegrid_hwr_fs_pane

0x6657,	// (0x000413c1) cell_hwr_fs_pane_ParamLimits

0x6657,	// (0x000413c1) cell_hwr_fs_pane

0x9cfe,	// (0x00044a68) linegrid_hwr_fs_pane_g1_ParamLimits

0x9cfe,	// (0x00044a68) linegrid_hwr_fs_pane_g1

0x9d0a,	// (0x00044a74) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d0a,	// (0x00044a74) linegrid_hwr_fs_pane_g2

0x9d1c,	// (0x00044a86) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d1c,	// (0x00044a86) linegrid_hwr_fs_pane_g3

0x667b,	// (0x000413e5) linegrid_hwr_fs_pane_g4_ParamLimits

0x667b,	// (0x000413e5) linegrid_hwr_fs_pane_g4

0x6699,	// (0x00041403) linegrid_hwr_fs_pane_g5_ParamLimits

0x6699,	// (0x00041403) linegrid_hwr_fs_pane_g5

0x0004,

0xf83a,	// (0x0004a5a4) linegrid_hwr_fs_pane_g_ParamLimits

0xf83a,	// (0x0004a5a4) linegrid_hwr_fs_pane_g

0x9d28,	// (0x00044a92) cell_hwr_fs_pane_g1_ParamLimits

0x9d28,	// (0x00044a92) cell_hwr_fs_pane_g1

0x9a75,	// (0x000447df) cell_hwr_fs_pane_g2_ParamLimits

0x9a75,	// (0x000447df) cell_hwr_fs_pane_g2

0x9d3e,	// (0x00044aa8) cell_hwr_fs_pane_g3_ParamLimits

0x9d3e,	// (0x00044aa8) cell_hwr_fs_pane_g3

0x9d4b,	// (0x00044ab5) cell_hwr_fs_pane_g4_ParamLimits

0x9d4b,	// (0x00044ab5) cell_hwr_fs_pane_g4

0x0003,

0xf845,	// (0x0004a5af) cell_hwr_fs_pane_g_ParamLimits

0xf845,	// (0x0004a5af) cell_hwr_fs_pane_g

0x66af,	// (0x00041419) cell_hwr_fs_pane_t1

0x7775,	// (0x000424df) grid_highlight_pane_cp6

0x7775,	// (0x000424df) main_idle_act2_pane

0x8245,	// (0x00042faf) aid_inside_area_popup_secondary

0xa94b,	// (0x000456b5) aid_inside_area_window_primary_ParamLimits

0xa94b,	// (0x000456b5) aid_inside_area_window_primary

0xb54d,	// (0x000462b7) ai2_news_ticker_pane

0xb555,	// (0x000462bf) aid_size_cell_ai1_link_ParamLimits

0xb555,	// (0x000462bf) aid_size_cell_ai1_link

0xb56f,	// (0x000462d9) popup_ai2_data_window_ParamLimits

0xb56f,	// (0x000462d9) popup_ai2_data_window

0xb58d,	// (0x000462f7) popup_ai2_link_window_ParamLimits

0xb58d,	// (0x000462f7) popup_ai2_link_window

0x9cf2,	// (0x00044a5c) bg_popup_sub_pane_cp4_ParamLimits

0x9cf2,	// (0x00044a5c) bg_popup_sub_pane_cp4

0xb5a3,	// (0x0004630d) grid_ai2_link_pane_ParamLimits

0xb5a3,	// (0x0004630d) grid_ai2_link_pane

0xb5ba,	// (0x00046324) popup_ai2_link_window_g1_ParamLimits

0xb5ba,	// (0x00046324) popup_ai2_link_window_g1

0xb5c6,	// (0x00046330) popup_ai2_link_window_g2_ParamLimits

0xb5c6,	// (0x00046330) popup_ai2_link_window_g2

0x0001,

0xfa11,	// (0x0004a77b) popup_ai2_link_window_g_ParamLimits

0xfa11,	// (0x0004a77b) popup_ai2_link_window_g

0xb5d7,	// (0x00046341) ai2_mp_button_pane

0xb5df,	// (0x00046349) ai2_mp_volume_pane

0x9ebb,	// (0x00044c25) bg_popup_sub_pane_cp5_ParamLimits

0x9ebb,	// (0x00044c25) bg_popup_sub_pane_cp5

0xb5e7,	// (0x00046351) heading_ai2_gene_pane_ParamLimits

0xb5e7,	// (0x00046351) heading_ai2_gene_pane

0xb5f3,	// (0x0004635d) list_ai2_gene_pane_ParamLimits

0xb5f3,	// (0x0004635d) list_ai2_gene_pane

0xb63b,	// (0x000463a5) cell_ai2_link_pane_ParamLimits

0xb63b,	// (0x000463a5) cell_ai2_link_pane

0xb693,	// (0x000463fd) cell_ai2_link_pane_g1

0x7775,	// (0x000424df) grid_highlight_pane_cp7

0x69a7,	// (0x00041711) ai2_mp_volume_pane_g1

0xb766,	// (0x000464d0) ai2_mp_volume_pane_g2

0xb6db,	// (0x00046445) list_ai2_gene_pane_t1

0xb76e,	// (0x000464d8) ai2_mp_volume_pane_g3

0x0002,

0xfa2a,	// (0x0004a794) ai2_mp_volume_pane_g

0x69af,	// (0x00041719) volume_small_pane_cp3

0xb776,	// (0x000464e0) aid_size_cell_ai2_button

0xb77e,	// (0x000464e8) grid_ai2_button_pane

0xb787,	// (0x000464f1) cell_ai2_button_pane_ParamLimits

0xb787,	// (0x000464f1) cell_ai2_button_pane

0x776b,	// (0x000424d5) cell_ai2_button_pane_g1

0x7775,	// (0x000424df) grid_highlight_pane_cp8

0xb726,	// (0x00046490) ai2_gene_pane_t1_ParamLimits

0xb726,	// (0x00046490) ai2_gene_pane_t1

0x9044,	// (0x00043dae) aid_height_parent_landscape

0xaff7,	// (0x00045d61) aid_height_set_list

0xb008,	// (0x00045d72) aid_size_parent

0xb36e,	// (0x000460d8) aid_size_cell_graphic_pane_ParamLimits

0xb603,	// (0x0004636d) popup_ai2_data_window_g1_ParamLimits

0xb603,	// (0x0004636d) popup_ai2_data_window_g1

0xb60f,	// (0x00046379) ai2_news_ticker_pane_g1

0xb617,	// (0x00046381) ai2_news_ticker_pane_g2

0x0001,

0xfa16,	// (0x0004a780) ai2_news_ticker_pane_g

0xb61f,	// (0x00046389) ai2_news_ticker_pane_t1

0xb62d,	// (0x00046397) ai2_news_ticker_pane_t2

0x0001,

0xfa1b,	// (0x0004a785) ai2_news_ticker_pane_t

0xb69c,	// (0x00046406) heading_ai2_gene_pane_g1

0xb6a4,	// (0x0004640e) heading_ai2_gene_pane_t1_ParamLimits

0xb6a4,	// (0x0004640e) heading_ai2_gene_pane_t1

0xb6b9,	// (0x00046423) list_highlight_pane_cp6

0xb6c1,	// (0x0004642b) ai2_gene_pane_ParamLimits

0xb6c1,	// (0x0004642b) ai2_gene_pane

0xb6e9,	// (0x00046453) list_ai2_gene_pane_t2

0x0001,

0xfa20,	// (0x0004a78a) list_ai2_gene_pane_t

0xb6f7,	// (0x00046461) list_highlight_pane_cp8_ParamLimits

0xb6f7,	// (0x00046461) list_highlight_pane_cp8

0xb708,	// (0x00046472) ai2_gene_pane_g1_ParamLimits

0xb708,	// (0x00046472) ai2_gene_pane_g1

0xb71a,	// (0x00046484) ai2_gene_pane_g2_ParamLimits

0xb71a,	// (0x00046484) ai2_gene_pane_g2

0x0001,

0xfa25,	// (0x0004a78f) ai2_gene_pane_g_ParamLimits

0xfa25,	// (0x0004a78f) ai2_gene_pane_g

0x8072,	// (0x00042ddc) scroll_pane_cp12

0x653b,	// (0x000412a5) control_pane_t3_ParamLimits

0x653b,	// (0x000412a5) control_pane_t3

0x8fc1,	// (0x00043d2b) status_small_pane_g8_ParamLimits

0x8fc1,	// (0x00043d2b) status_small_pane_g8

0x924e,	// (0x00043fb8) popup_find_window_ParamLimits

0x9479,	// (0x000441e3) popup_note_image_window_ParamLimits

0x54dd,	// (0x00040247) list_double2_graphic_pane_vc_g1_ParamLimits

0x54dd,	// (0x00040247) list_double2_graphic_pane_vc_g1

0x8cab,	// (0x00043a15) list_double2_graphic_pane_vc_g2_ParamLimits

0x8cab,	// (0x00043a15) list_double2_graphic_pane_vc_g2

0x65ac,	// (0x00041316) list_double2_graphic_pane_vc_g3_ParamLimits

0x65ac,	// (0x00041316) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0004a56d) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0004a56d) list_double2_graphic_pane_vc_g

0x54e9,	// (0x00040253) list_double2_graphic_pane_vc_t1_ParamLimits

0x54e9,	// (0x00040253) list_double2_graphic_pane_vc_t1

0x8cab,	// (0x00043a15) list_single_heading_pane_vc_g1_ParamLimits

0x8cab,	// (0x00043a15) list_single_heading_pane_vc_g1

0x65ac,	// (0x00041316) list_single_heading_pane_vc_g2_ParamLimits

0x65ac,	// (0x00041316) list_single_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0004a58e) list_single_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0004a58e) list_single_heading_pane_vc_g

0x54ff,	// (0x00040269) list_single_heading_pane_vc_t1_ParamLimits

0x54ff,	// (0x00040269) list_single_heading_pane_vc_t1

0x5515,	// (0x0004027f) list_single_heading_pane_vc_t2_ParamLimits

0x5515,	// (0x0004027f) list_single_heading_pane_vc_t2

0x0001,

0xf829,	// (0x0004a593) list_single_heading_pane_vc_t_ParamLimits

0xf829,	// (0x0004a593) list_single_heading_pane_vc_t

0x9c48,	// (0x000449b2) list_setting_number_pane_vc_g1_ParamLimits

0x9c48,	// (0x000449b2) list_setting_number_pane_vc_g1

0x9c54,	// (0x000449be) list_setting_number_pane_vc_g2_ParamLimits

0x9c54,	// (0x000449be) list_setting_number_pane_vc_g2

0x0001,

0xf82e,	// (0x0004a598) list_setting_number_pane_vc_g_ParamLimits

0xf82e,	// (0x0004a598) list_setting_number_pane_vc_g

0x9c60,	// (0x000449ca) list_setting_number_pane_vc_t1_ParamLimits

0x9c60,	// (0x000449ca) list_setting_number_pane_vc_t1

0x9c74,	// (0x000449de) list_setting_number_pane_vc_t2_ParamLimits

0x9c74,	// (0x000449de) list_setting_number_pane_vc_t2

0x9c90,	// (0x000449fa) list_setting_number_pane_vc_t3_ParamLimits

0x9c90,	// (0x000449fa) list_setting_number_pane_vc_t3

0x0002,

0xf833,	// (0x0004a59d) list_setting_number_pane_vc_t_ParamLimits

0xf833,	// (0x0004a59d) list_setting_number_pane_vc_t

0x9cb8,	// (0x00044a22) set_value_pane_vc_ParamLimits

0x9cb8,	// (0x00044a22) set_value_pane_vc

0xb200,	// (0x00045f6a) list_double2_graphic_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_double2_graphic_pane_vc

0xb200,	// (0x00045f6a) list_double2_large_graphic_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_double2_large_graphic_pane_vc

0xb200,	// (0x00045f6a) list_double2_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_double2_pane_vc

0xb200,	// (0x00045f6a) list_double_graphic_heading_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_double_graphic_heading_pane_vc

0xb200,	// (0x00045f6a) list_double_graphic_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_double_graphic_pane_vc

0xb200,	// (0x00045f6a) list_double_heading_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_double_heading_pane_vc

0xb200,	// (0x00045f6a) list_double_large_graphic_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_double_large_graphic_pane_vc

0xb200,	// (0x00045f6a) list_double_number_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_double_number_pane_vc

0xb200,	// (0x00045f6a) list_double_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_double_pane_vc

0xb200,	// (0x00045f6a) list_double_time_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_double_time_pane_vc

0xb200,	// (0x00045f6a) list_setting_number_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_setting_number_pane_vc

0xb200,	// (0x00045f6a) list_setting_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_setting_pane_vc

0xb200,	// (0x00045f6a) list_single_graphic_heading_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_single_graphic_heading_pane_vc

0xb200,	// (0x00045f6a) list_single_heading_pane_vc_ParamLimits

0xb200,	// (0x00045f6a) list_single_heading_pane_vc

0xb214,	// (0x00045f7e) list_single_number_heading_pane_vc_ParamLimits

0xb214,	// (0x00045f7e) list_single_number_heading_pane_vc

0x54dd,	// (0x00040247) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x54dd,	// (0x00040247) list_double_graphic_heading_pane_vc_g1

0x69b8,	// (0x00041722) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x69b8,	// (0x00041722) list_double_graphic_heading_pane_vc_g2

0x69c4,	// (0x0004172e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x69c4,	// (0x0004172e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa31,	// (0x0004a79b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa31,	// (0x0004a79b) list_double_graphic_heading_pane_vc_g

0x55cb,	// (0x00040335) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x55cb,	// (0x00040335) list_double_graphic_heading_pane_vc_t1

0x54ff,	// (0x00040269) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x54ff,	// (0x00040269) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x0004a7a2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0004a7a2) list_double_graphic_heading_pane_vc_t

0x9c48,	// (0x000449b2) list_setting_pane_vc_g1_ParamLimits

0x9c48,	// (0x000449b2) list_setting_pane_vc_g1

0x9c54,	// (0x000449be) list_setting_pane_vc_g2_ParamLimits

0x9c54,	// (0x000449be) list_setting_pane_vc_g2

0x0001,

0xf82e,	// (0x0004a598) list_setting_pane_vc_g_ParamLimits

0xf82e,	// (0x0004a598) list_setting_pane_vc_g

0xb9c3,	// (0x0004672d) list_setting_pane_vc_t1_ParamLimits

0xb9c3,	// (0x0004672d) list_setting_pane_vc_t1

0xb9d7,	// (0x00046741) list_setting_pane_vc_t2_ParamLimits

0xb9d7,	// (0x00046741) list_setting_pane_vc_t2

0x0001,

0xfa66,	// (0x0004a7d0) list_setting_pane_vc_t_ParamLimits

0xfa66,	// (0x0004a7d0) list_setting_pane_vc_t

0x9cb8,	// (0x00044a22) set_value_pane_cp_vc_ParamLimits

0x9cb8,	// (0x00044a22) set_value_pane_cp_vc

0x8cab,	// (0x00043a15) list_single_number_heading_pane_vc_g1_ParamLimits

0x8cab,	// (0x00043a15) list_single_number_heading_pane_vc_g1

0x65ac,	// (0x00041316) list_single_number_heading_pane_vc_g2_ParamLimits

0x65ac,	// (0x00041316) list_single_number_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0004a58e) list_single_number_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0004a58e) list_single_number_heading_pane_vc_g

0x54ff,	// (0x00040269) list_single_number_heading_pane_vc_t1_ParamLimits

0x54ff,	// (0x00040269) list_single_number_heading_pane_vc_t1

0x55df,	// (0x00040349) list_single_number_heading_pane_vc_t2_ParamLimits

0x55df,	// (0x00040349) list_single_number_heading_pane_vc_t2

0x55f3,	// (0x0004035d) list_single_number_heading_pane_vc_t3_ParamLimits

0x55f3,	// (0x0004035d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6b,	// (0x0004a7d5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6b,	// (0x0004a7d5) list_single_number_heading_pane_vc_t

0x54dd,	// (0x00040247) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x54dd,	// (0x00040247) list_single_graphic_heading_pane_vc_g1

0x8cab,	// (0x00043a15) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8cab,	// (0x00043a15) list_single_graphic_heading_pane_vc_g4

0x65ac,	// (0x00041316) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x65ac,	// (0x00041316) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0004a56d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0004a56d) list_single_graphic_heading_pane_vc_g

0x54ff,	// (0x00040269) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x54ff,	// (0x00040269) list_single_graphic_heading_pane_vc_t1

0x5605,	// (0x0004036f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5605,	// (0x0004036f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x0004a7dc) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x0004a7dc) list_single_graphic_heading_pane_vc_t

0x8cab,	// (0x00043a15) list_double2_pane_vc_g1_ParamLimits

0x8cab,	// (0x00043a15) list_double2_pane_vc_g1

0x65ac,	// (0x00041316) list_double2_pane_vc_g2_ParamLimits

0x65ac,	// (0x00041316) list_double2_pane_vc_g2

0x0001,

0xf824,	// (0x0004a58e) list_double2_pane_vc_g_ParamLimits

0xf824,	// (0x0004a58e) list_double2_pane_vc_g

0x5619,	// (0x00040383) list_double2_pane_vc_t1_ParamLimits

0x5619,	// (0x00040383) list_double2_pane_vc_t1

0x69d0,	// (0x0004173a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x69d0,	// (0x0004173a) list_double2_large_graphic_pane_vc_g1

0x8cab,	// (0x00043a15) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8cab,	// (0x00043a15) list_double2_large_graphic_pane_vc_g2

0x65ac,	// (0x00041316) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x65ac,	// (0x00041316) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa77,	// (0x0004a7e1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x0004a7e1) list_double2_large_graphic_pane_vc_g

0x562f,	// (0x00040399) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x562f,	// (0x00040399) list_double2_large_graphic_pane_vc_t1

0x69dc,	// (0x00041746) list_double_time_pane_vc_g1_ParamLimits

0x69dc,	// (0x00041746) list_double_time_pane_vc_g1

0x69e8,	// (0x00041752) list_double_time_pane_vc_g2_ParamLimits

0x69e8,	// (0x00041752) list_double_time_pane_vc_g2

0x0001,

0xfa7e,	// (0x0004a7e8) list_double_time_pane_vc_g_ParamLimits

0xfa7e,	// (0x0004a7e8) list_double_time_pane_vc_g

0x5645,	// (0x000403af) list_double_time_pane_vc_t1_ParamLimits

0x5645,	// (0x000403af) list_double_time_pane_vc_t1

0x565e,	// (0x000403c8) list_double_time_pane_vc_t2_ParamLimits

0x565e,	// (0x000403c8) list_double_time_pane_vc_t2

0x569e,	// (0x00040408) list_double_time_pane_vc_t3_ParamLimits

0x569e,	// (0x00040408) list_double_time_pane_vc_t3

0x56b6,	// (0x00040420) list_double_time_pane_vc_t4_ParamLimits

0x56b6,	// (0x00040420) list_double_time_pane_vc_t4

0x0003,

0xfa83,	// (0x0004a7ed) list_double_time_pane_vc_t_ParamLimits

0xfa83,	// (0x0004a7ed) list_double_time_pane_vc_t

0x8cab,	// (0x00043a15) list_double_pane_vc_g1_ParamLimits

0x8cab,	// (0x00043a15) list_double_pane_vc_g1

0x65ac,	// (0x00041316) list_double_pane_vc_g2_ParamLimits

0x65ac,	// (0x00041316) list_double_pane_vc_g2

0x0001,

0xf824,	// (0x0004a58e) list_double_pane_vc_g_ParamLimits

0xf824,	// (0x0004a58e) list_double_pane_vc_g

0x56ca,	// (0x00040434) list_double_pane_vc_t1_ParamLimits

0x56ca,	// (0x00040434) list_double_pane_vc_t1

0x56dc,	// (0x00040446) list_double_pane_vc_t2_ParamLimits

0x56dc,	// (0x00040446) list_double_pane_vc_t2

0x0001,

0xfa8c,	// (0x0004a7f6) list_double_pane_vc_t_ParamLimits

0xfa8c,	// (0x0004a7f6) list_double_pane_vc_t

0x8cab,	// (0x00043a15) list_double_number_pane_vc_g1_ParamLimits

0x8cab,	// (0x00043a15) list_double_number_pane_vc_g1

0x65ac,	// (0x00041316) list_double_number_pane_vc_g2_ParamLimits

0x65ac,	// (0x00041316) list_double_number_pane_vc_g2

0x0001,

0xf824,	// (0x0004a58e) list_double_number_pane_vc_g_ParamLimits

0xf824,	// (0x0004a58e) list_double_number_pane_vc_g

0x56f4,	// (0x0004045e) list_double_number_pane_vc_t1_ParamLimits

0x56f4,	// (0x0004045e) list_double_number_pane_vc_t1

0x5708,	// (0x00040472) list_double_number_pane_vc_t2_ParamLimits

0x5708,	// (0x00040472) list_double_number_pane_vc_t2

0x56dc,	// (0x00040446) list_double_number_pane_vc_t3_ParamLimits

0x56dc,	// (0x00040446) list_double_number_pane_vc_t3

0x0002,

0xfa91,	// (0x0004a7fb) list_double_number_pane_vc_t_ParamLimits

0xfa91,	// (0x0004a7fb) list_double_number_pane_vc_t

0x69f4,	// (0x0004175e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x69f4,	// (0x0004175e) list_double_large_graphic_pane_vc_g1

0x6a00,	// (0x0004176a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6a00,	// (0x0004176a) list_double_large_graphic_pane_vc_g2

0x65ac,	// (0x00041316) list_double_large_graphic_pane_vc_g3_ParamLimits

0x65ac,	// (0x00041316) list_double_large_graphic_pane_vc_g3

0x571a,	// (0x00040484) list_double_large_graphic_pane_vc_g4_ParamLimits

0x571a,	// (0x00040484) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa98,	// (0x0004a802) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa98,	// (0x0004a802) list_double_large_graphic_pane_vc_g

0x5726,	// (0x00040490) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5726,	// (0x00040490) list_double_large_graphic_pane_vc_t1

0x5738,	// (0x000404a2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5738,	// (0x000404a2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa1,	// (0x0004a80b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa1,	// (0x0004a80b) list_double_large_graphic_pane_vc_t

0x69b8,	// (0x00041722) list_double_heading_pane_vc_g1_ParamLimits

0x69b8,	// (0x00041722) list_double_heading_pane_vc_g1

0x69c4,	// (0x0004172e) list_double_heading_pane_vc_g2_ParamLimits

0x69c4,	// (0x0004172e) list_double_heading_pane_vc_g2

0x0001,

0xfaa6,	// (0x0004a810) list_double_heading_pane_vc_g_ParamLimits

0xfaa6,	// (0x0004a810) list_double_heading_pane_vc_g

0x5751,	// (0x000404bb) list_double_heading_pane_vc_t1_ParamLimits

0x5751,	// (0x000404bb) list_double_heading_pane_vc_t1

0x54ff,	// (0x00040269) list_double_heading_pane_vc_t2_ParamLimits

0x54ff,	// (0x00040269) list_double_heading_pane_vc_t2

0x0001,

0xfaab,	// (0x0004a815) list_double_heading_pane_vc_t_ParamLimits

0xfaab,	// (0x0004a815) list_double_heading_pane_vc_t

0x54dd,	// (0x00040247) list_double_graphic_pane_vc_g1_ParamLimits

0x54dd,	// (0x00040247) list_double_graphic_pane_vc_g1

0x6a0f,	// (0x00041779) list_double_graphic_pane_vc_g2_ParamLimits

0x6a0f,	// (0x00041779) list_double_graphic_pane_vc_g2

0x6a1e,	// (0x00041788) list_double_graphic_pane_vc_g3_ParamLimits

0x6a1e,	// (0x00041788) list_double_graphic_pane_vc_g3

0x0002,

0xfab0,	// (0x0004a81a) list_double_graphic_pane_vc_g_ParamLimits

0xfab0,	// (0x0004a81a) list_double_graphic_pane_vc_g

0x5765,	// (0x000404cf) list_double_graphic_pane_vc_t1_ParamLimits

0x5765,	// (0x000404cf) list_double_graphic_pane_vc_t1

0x56dc,	// (0x00040446) list_double_graphic_pane_vc_t2_ParamLimits

0x56dc,	// (0x00040446) list_double_graphic_pane_vc_t2

0x0001,

0xfab7,	// (0x0004a821) list_double_graphic_pane_vc_t_ParamLimits

0xfab7,	// (0x0004a821) list_double_graphic_pane_vc_t

0x5a5d,	// (0x000407c7) aid_size_cell_fastswap

0x5a65,	// (0x000407cf) aid_size_cell_touch_ParamLimits

0x5a65,	// (0x000407cf) aid_size_cell_touch

0x5cc6,	// (0x00040a30) popup_fast_swap_wide_window_ParamLimits

0x5cc6,	// (0x00040a30) popup_fast_swap_wide_window

0x5ddc,	// (0x00040b46) touch_pane_ParamLimits

0x5ddc,	// (0x00040b46) touch_pane

0x80c8,	// (0x00042e32) button_value_adjust_pane_cp2

0x51a7,	// (0x0003ff11) button_value_adjust_pane_cp4

0x51cf,	// (0x0003ff39) form_field_data_pane_cp2

0x51f4,	// (0x0003ff5e) form_field_data_wide_pane_cp2

0x8561,	// (0x000432cb) bg_scroll_pane_ParamLimits

0x6116,	// (0x00040e80) scroll_handle_pane_ParamLimits

0x612a,	// (0x00040e94) scroll_sc2_down_pane_ParamLimits

0x612a,	// (0x00040e94) scroll_sc2_down_pane

0x8592,	// (0x000432fc) scroll_sc2_up_pane_ParamLimits

0x8592,	// (0x000432fc) scroll_sc2_up_pane

0xbe22,	// (0x00046b8c) grid_wheel_folder_pane_g1_ParamLimits

0xbe22,	// (0x00046b8c) grid_wheel_folder_pane_g1

0x6312,	// (0x0004107c) clock_nsta_pane_cp2_ParamLimits

0x6312,	// (0x0004107c) clock_nsta_pane_cp2

0x8d42,	// (0x00043aac) listscroll_midp_pane_ParamLimits

0x8d4e,	// (0x00043ab8) midp_canvas_pane

0x903c,	// (0x00043da6) nsta_clock_indic_pane

0x9096,	// (0x00043e00) listscroll_form_pane_vc

0x90b2,	// (0x00043e1c) listscroll_set_pane_vc_ParamLimits

0x90b2,	// (0x00043e1c) listscroll_set_pane_vc

0x97ca,	// (0x00044534) clock_nsta_pane

0x9847,	// (0x000445b1) indicator_nsta_pane

0x9b3e,	// (0x000448a8) bg_popup_sub_pane_cp2_ParamLimits

0x9b52,	// (0x000448bc) find_pane_cp2_ParamLimits

0x9b52,	// (0x000448bc) find_pane_cp2

0x9b68,	// (0x000448d2) grid_toobar_pane_ParamLimits

0x9cc6,	// (0x00044a30) list_form_gen_pane_vc_ParamLimits

0x9cc6,	// (0x00044a30) list_form_gen_pane_vc

0x9cdc,	// (0x00044a46) scroll_pane_cp8_vc_ParamLimits

0x9cdc,	// (0x00044a46) scroll_pane_cp8_vc

0x9d58,	// (0x00044ac2) data_form_wide_pane_vc_ParamLimits

0x9d58,	// (0x00044ac2) data_form_wide_pane_vc

0x9d64,	// (0x00044ace) form_field_data_wide_pane_vc_g1

0x9d6c,	// (0x00044ad6) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d6c,	// (0x00044ad6) form_field_data_wide_pane_vc_t1

0x80dc,	// (0x00042e46) input_focus_pane_cp6_vc_ParamLimits

0x80dc,	// (0x00042e46) input_focus_pane_cp6_vc

0xa046,	// (0x00044db0) list_midp_pane_ParamLimits

0xa052,	// (0x00044dbc) scroll_pane_cp16_ParamLimits

0xa052,	// (0x00044dbc) scroll_pane_cp16

0xa092,	// (0x00044dfc) button_value_adjust_pane_ParamLimits

0xa092,	// (0x00044dfc) button_value_adjust_pane

0xb01a,	// (0x00045d84) button_value_adjust_pane_cp6_ParamLimits

0xb01a,	// (0x00045d84) button_value_adjust_pane_cp6

0xb174,	// (0x00045ede) settings_code_pane_cp_ParamLimits

0xb174,	// (0x00045ede) settings_code_pane_cp

0x776b,	// (0x000424d5) cell_touch_pane_g1

0x776b,	// (0x000424d5) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0004a4b6) cell_touch_pane_g

0xb799,	// (0x00046503) cell_touch_pane_cp_ParamLimits

0xb799,	// (0x00046503) cell_touch_pane_cp

0xb7a9,	// (0x00046513) cell_touch_pane_ParamLimits

0xb7a9,	// (0x00046513) cell_touch_pane

0x776b,	// (0x000424d5) scroll_sc2_down_pane_g1

0x776b,	// (0x000424d5) scroll_sc2_up_pane_g1

0x7775,	// (0x000424df) bg_set_opt_pane_cp4_vc

0xb7ba,	// (0x00046524) list_set_graphic_pane_vc_g1_ParamLimits

0xb7ba,	// (0x00046524) list_set_graphic_pane_vc_g1

0xb7c6,	// (0x00046530) list_set_graphic_pane_vc_g2_ParamLimits

0xb7c6,	// (0x00046530) list_set_graphic_pane_vc_g2

0x0001,

0xfa3d,	// (0x0004a7a7) list_set_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0004a7a7) list_set_graphic_pane_vc_g

0xb7d2,	// (0x0004653c) text_primary_small_cp13_vc_ParamLimits

0xb7d2,	// (0x0004653c) text_primary_small_cp13_vc

0xb7ea,	// (0x00046554) list_set_graphic_pane_vc_ParamLimits

0xb7ea,	// (0x00046554) list_set_graphic_pane_vc

0x7775,	// (0x000424df) input_focus_pane_cp2_vc

0x776b,	// (0x000424d5) setting_code_pane_vc_g1

0xb7fe,	// (0x00046568) setting_code_pane_vc_t1

0xb80c,	// (0x00046576) set_text_pane_vc_t1_ParamLimits

0xb80c,	// (0x00046576) set_text_pane_vc_t1

0x7775,	// (0x000424df) input_focus_pane_cp1_vc

0xb82a,	// (0x00046594) list_set_text_pane_vc

0x776b,	// (0x000424d5) setting_text_pane_vc_g1

0x7775,	// (0x000424df) bg_set_opt_pane_cp2_vc

0xb834,	// (0x0004659e) setting_slider_graphic_pane_vc_g1

0xb83c,	// (0x000465a6) setting_slider_graphic_pane_vc_t1

0xb84a,	// (0x000465b4) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa42,	// (0x0004a7ac) setting_slider_graphic_pane_vc_t

0xb858,	// (0x000465c2) slider_set_pane_cp_vc

0xb860,	// (0x000465ca) slider_set_pane_vc_g1

0xb869,	// (0x000465d3) slider_set_pane_vc_g2

0x0006,

0xfa47,	// (0x0004a7b1) slider_set_pane_vc_g

0x8143,	// (0x00042ead) set_opt_bg_pane_g1_copy1

0x814b,	// (0x00042eb5) set_opt_bg_pane_g2_copy1

0xb895,	// (0x000465ff) set_opt_bg_pane_g3_copy1

0x815b,	// (0x00042ec5) set_opt_bg_pane_g4_copy1

0x8163,	// (0x00042ecd) set_opt_bg_pane_g5_copy1

0x816b,	// (0x00042ed5) set_opt_bg_pane_g6_copy1

0xb89f,	// (0x00046609) set_opt_bg_pane_g7_copy1

0xb8a9,	// (0x00046613) set_opt_bg_pane_g8_copy1

0xb8b3,	// (0x0004661d) set_opt_bg_pane_g9_copy1

0x7775,	// (0x000424df) bg_set_opt_pane_cp_vc

0xb8bd,	// (0x00046627) setting_slider_pane_vc_t1

0xb83c,	// (0x000465a6) setting_slider_pane_vc_t2

0xb84a,	// (0x000465b4) setting_slider_pane_vc_t3

0x0002,

0xfa56,	// (0x0004a7c0) setting_slider_pane_vc_t

0xb858,	// (0x000465c2) slider_set_pane_vc

0x66bd,	// (0x00041427) volume_set_pane_vc_g1

0x66c6,	// (0x00041430) volume_set_pane_vc_g2

0x66cf,	// (0x00041439) volume_set_pane_vc_g3

0x66d8,	// (0x00041442) volume_set_pane_vc_g4

0x66e1,	// (0x0004144b) volume_set_pane_vc_g5

0x66ea,	// (0x00041454) volume_set_pane_vc_g6

0x66f3,	// (0x0004145d) volume_set_pane_vc_g7

0x66fc,	// (0x00041466) volume_set_pane_vc_g8

0x6705,	// (0x0004146f) volume_set_pane_vc_g9

0x670e,	// (0x00041478) volume_set_pane_vc_g10

0x0009,

0xf8f4,	// (0x0004a65e) volume_set_pane_vc_g

0xb8cc,	// (0x00046636) volume_set_pane_vc

0xb8d4,	// (0x0004663e) button_value_adjust_pane_cp1_vc

0xb8de,	// (0x00046648) list_highlight_pane_cp2_vc

0xb8e7,	// (0x00046651) list_set_pane_vc_ParamLimits

0xb8e7,	// (0x00046651) list_set_pane_vc

0xb951,	// (0x000466bb) main_pane_set_vc_t1_ParamLimits

0xb951,	// (0x000466bb) main_pane_set_vc_t1

0xb966,	// (0x000466d0) main_pane_set_vc_t2_ParamLimits

0xb966,	// (0x000466d0) main_pane_set_vc_t2

0xb978,	// (0x000466e2) main_pane_set_vc_t3_ParamLimits

0xb978,	// (0x000466e2) main_pane_set_vc_t3

0xb98c,	// (0x000466f6) main_pane_set_vc_t4_ParamLimits

0xb98c,	// (0x000466f6) main_pane_set_vc_t4

0x0003,

0xfa5d,	// (0x0004a7c7) main_pane_set_vc_t_ParamLimits

0xfa5d,	// (0x0004a7c7) main_pane_set_vc_t

0xb9a0,	// (0x0004670a) setting_code_pane_vc_ParamLimits

0xb9a0,	// (0x0004670a) setting_code_pane_vc

0xb9b1,	// (0x0004671b) setting_slider_graphic_pane_vc

0xb9b1,	// (0x0004671b) setting_slider_pane_vc

0xb9b1,	// (0x0004671b) setting_text_pane_vc

0xb9b1,	// (0x0004671b) setting_volume_pane_vc

0xb9bb,	// (0x00046725) scroll_pane_cp121_vc

0x80b6,	// (0x00042e20) set_content_pane_vc

0xb9f9,	// (0x00046763) button_value_adjust_pane_g1

0xba02,	// (0x0004676c) button_value_adjust_pane_g2

0x0001,

0xfabc,	// (0x0004a826) button_value_adjust_pane_g

0xba0b,	// (0x00046775) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba0b,	// (0x00046775) form_field_slider_wide_pane_vc_t1

0xba1f,	// (0x00046789) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba1f,	// (0x00046789) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac1,	// (0x0004a82b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac1,	// (0x0004a82b) form_field_slider_wide_pane_vc_t

0x7ad1,	// (0x0004283b) input_focus_pane_cp10_vc_ParamLimits

0x7ad1,	// (0x0004283b) input_focus_pane_cp10_vc

0xba31,	// (0x0004679b) slider_cont_pane_cp1_vc_ParamLimits

0xba31,	// (0x0004679b) slider_cont_pane_cp1_vc

0xb860,	// (0x000465ca) slider_form_pane_g1_cp2

0xb869,	// (0x000465d3) slider_form_pane_g2_cp2

0xba4a,	// (0x000467b4) form_field_slider_pane_vc_t3

0xba58,	// (0x000467c2) form_field_slider_pane_vc_t4

0xba66,	// (0x000467d0) slider_form_pane_vc_ParamLimits

0xba66,	// (0x000467d0) slider_form_pane_vc

0xba73,	// (0x000467dd) form_field_slider_pane_vc_t1_ParamLimits

0xba73,	// (0x000467dd) form_field_slider_pane_vc_t1

0xba1f,	// (0x00046789) form_field_slider_pane_vc_t2_ParamLimits

0xba1f,	// (0x00046789) form_field_slider_pane_vc_t2

0x0001,

0xfad1,	// (0x0004a83b) form_field_slider_pane_vc_t_ParamLimits

0xfad1,	// (0x0004a83b) form_field_slider_pane_vc_t

0x7ad1,	// (0x0004283b) input_focus_pane_cp9_vc_ParamLimits

0x7ad1,	// (0x0004283b) input_focus_pane_cp9_vc

0xba8f,	// (0x000467f9) slider_cont_pane_vc_ParamLimits

0xba8f,	// (0x000467f9) slider_cont_pane_vc

0xbaa1,	// (0x0004680b) list_form_graphic_pane_cp_vc_ParamLimits

0xbaa1,	// (0x0004680b) list_form_graphic_pane_cp_vc

0x9d64,	// (0x00044ace) form_field_popup_wide_pane_vc_g1

0xbab6,	// (0x00046820) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbab6,	// (0x00046820) form_field_popup_wide_pane_vc_t1

0x80dc,	// (0x00042e46) input_focus_pane_cp8_vc_ParamLimits

0x80dc,	// (0x00042e46) input_focus_pane_cp8_vc

0xbacd,	// (0x00046837) list_form_wide_pane_vc_ParamLimits

0xbacd,	// (0x00046837) list_form_wide_pane_vc

0xbad9,	// (0x00046843) list_form_graphic_pane_vc_g1

0xbae1,	// (0x0004684b) list_form_graphic_pane_vc_t1_ParamLimits

0xbae1,	// (0x0004684b) list_form_graphic_pane_vc_t1

0x7855,	// (0x000425bf) list_highlight_pane_cp5_vc_ParamLimits

0x7855,	// (0x000425bf) list_highlight_pane_cp5_vc

0xbafd,	// (0x00046867) list_form_graphic_pane_vc_ParamLimits

0xbafd,	// (0x00046867) list_form_graphic_pane_vc

0x9d64,	// (0x00044ace) form_field_popup_pane_vc_g1

0xbb13,	// (0x0004687d) form_field_popup_pane_vc_t1_ParamLimits

0xbb13,	// (0x0004687d) form_field_popup_pane_vc_t1

0x80dc,	// (0x00042e46) input_focus_pane_cp7_vc_ParamLimits

0x80dc,	// (0x00042e46) input_focus_pane_cp7_vc

0xbb2a,	// (0x00046894) list_form_pane_vc_ParamLimits

0xbb2a,	// (0x00046894) list_form_pane_vc

0xbb36,	// (0x000468a0) data_form_pane_vc_t1_ParamLimits

0xbb36,	// (0x000468a0) data_form_pane_vc_t1

0x8143,	// (0x00042ead) input_focus_pane_vc_g1

0x814b,	// (0x00042eb5) input_focus_pane_vc_g2

0x8153,	// (0x00042ebd) input_focus_pane_vc_g3

0x815b,	// (0x00042ec5) input_focus_pane_vc_g4

0x8163,	// (0x00042ecd) input_focus_pane_vc_g5

0x816b,	// (0x00042ed5) input_focus_pane_vc_g6

0x8173,	// (0x00042edd) input_focus_pane_vc_g7

0x817b,	// (0x00042ee5) input_focus_pane_vc_g8

0x8183,	// (0x00042eed) input_focus_pane_vc_g9

0x776b,	// (0x000424d5) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0004a43f) input_focus_pane_vc_g

0x9d58,	// (0x00044ac2) data_form_pane_vc_ParamLimits

0x9d58,	// (0x00044ac2) data_form_pane_vc

0x9d64,	// (0x00044ace) form_field_data_pane_vc_g1

0xbb53,	// (0x000468bd) form_field_data_pane_vc_t1_ParamLimits

0xbb53,	// (0x000468bd) form_field_data_pane_vc_t1

0x80dc,	// (0x00042e46) input_focus_pane_vc_ParamLimits

0x80dc,	// (0x00042e46) input_focus_pane_vc

0xbb6d,	// (0x000468d7) button_value_adjust_pane_cp3_vc

0xbb75,	// (0x000468df) button_value_adjust_pane_cp5_vc

0xbb7d,	// (0x000468e7) form_field_data_pane_vc_ParamLimits

0xbb7d,	// (0x000468e7) form_field_data_pane_vc

0xbb98,	// (0x00046902) form_field_data_pane_vc_cp2

0xbba0,	// (0x0004690a) form_field_data_wide_pane_vc_ParamLimits

0xbba0,	// (0x0004690a) form_field_data_wide_pane_vc

0xbbba,	// (0x00046924) form_field_data_wide_pane_vc_cp2

0xbbc2,	// (0x0004692c) form_field_popup_pane_vc_ParamLimits

0xbbc2,	// (0x0004692c) form_field_popup_pane_vc

0xbbdd,	// (0x00046947) form_field_popup_wide_pane_vc_ParamLimits

0xbbdd,	// (0x00046947) form_field_popup_wide_pane_vc

0xbbf7,	// (0x00046961) form_field_slider_pane_vc_ParamLimits

0xbbf7,	// (0x00046961) form_field_slider_pane_vc

0xbc0a,	// (0x00046974) form_field_slider_wide_pane_vc_ParamLimits

0xbc0a,	// (0x00046974) form_field_slider_wide_pane_vc

0xbc1d,	// (0x00046987) grid_touch_1_pane_ParamLimits

0xbc1d,	// (0x00046987) grid_touch_1_pane

0xbc29,	// (0x00046993) grid_touch_2_pane_ParamLimits

0xbc29,	// (0x00046993) grid_touch_2_pane

0x9007,	// (0x00043d71) touch_pane_g1_ParamLimits

0x9007,	// (0x00043d71) touch_pane_g1

0xbc43,	// (0x000469ad) cell_app_pane_cp_wide_ParamLimits

0xbc43,	// (0x000469ad) cell_app_pane_cp_wide

0xbc54,	// (0x000469be) grid_popup_fast_wide_pane_ParamLimits

0xbc54,	// (0x000469be) grid_popup_fast_wide_pane

0xbc68,	// (0x000469d2) scroll_pane_cp19_ParamLimits

0xbc68,	// (0x000469d2) scroll_pane_cp19

0x7775,	// (0x000424df) bg_popup_window_pane_cp20

0xbc7c,	// (0x000469e6) listscroll_popup_fast_wide_pane

0x7855,	// (0x000425bf) grid_indicator_nsta_pane

0xbc84,	// (0x000469ee) clock_nsta_pane_g1

0xbc8d,	// (0x000469f7) clock_nsta_pane_t1

0xbca9,	// (0x00046a13) cell_indicator_nsta_pane_ParamLimits

0xbca9,	// (0x00046a13) cell_indicator_nsta_pane

0xbce1,	// (0x00046a4b) cell_indicator_nsta_pane_g1

0xbcef,	// (0x00046a59) cell_indicator_nsta_pane_g2

0x0001,

0xfadb,	// (0x0004a845) cell_indicator_nsta_pane_g

0xbd04,	// (0x00046a6e) clock_nsta_pane_cp

0xbd0c,	// (0x00046a76) indicator_nsta_pane_cp

0xbd14,	// (0x00046a7e) nsta_clock_indic_pane_g1

0x7921,	// (0x0004268b) grid_indicator_pane

0x8684,	// (0x000433ee) scroll_pane_cp29

0x625e,	// (0x00040fc8) indicator_nsta_pane_cp2_ParamLimits

0x625e,	// (0x00040fc8) indicator_nsta_pane_cp2

0x7855,	// (0x000425bf) main_apps_wheel_pane

0x9f23,	// (0x00044c8d) form_midp_field_text_pane_ParamLimits

0xa072,	// (0x00044ddc) scroll_bar_cp050_ParamLimits

0xbd4c,	// (0x00046ab6) cell_indicator_pane_ParamLimits

0xbd4c,	// (0x00046ab6) cell_indicator_pane

0xbd64,	// (0x00046ace) cell_indicator_pane_g1

0xbd6e,	// (0x00046ad8) grid_wheel_folder_pane_ParamLimits

0xbd6e,	// (0x00046ad8) grid_wheel_folder_pane

0xbd82,	// (0x00046aec) list_wheel_apps_pane_ParamLimits

0xbd82,	// (0x00046aec) list_wheel_apps_pane

0xbd95,	// (0x00046aff) main_apps_wheel_pane_g1_ParamLimits

0xbd95,	// (0x00046aff) main_apps_wheel_pane_g1

0xbdb1,	// (0x00046b1b) main_apps_wheel_pane_g2_ParamLimits

0xbdb1,	// (0x00046b1b) main_apps_wheel_pane_g2

0x0001,

0xfaea,	// (0x0004a854) main_apps_wheel_pane_g_ParamLimits

0xfaea,	// (0x0004a854) main_apps_wheel_pane_g

0xbdcd,	// (0x00046b37) main_apps_wheel_pane_t1_ParamLimits

0xbdcd,	// (0x00046b37) main_apps_wheel_pane_t1

0xbdf6,	// (0x00046b60) list_wheel_apps_pane_g1

0xbdfe,	// (0x00046b68) list_wheel_apps_pane_g2

0xbe06,	// (0x00046b70) list_wheel_apps_pane_g3

0xbe0e,	// (0x00046b78) list_wheel_apps_pane_g4

0xbe18,	// (0x00046b82) list_wheel_apps_pane_g5

0x0004,

0xfaef,	// (0x0004a859) list_wheel_apps_pane_g

0x8bb6,	// (0x00043920) navi_icon_text_pane

0x96f7,	// (0x00044461) aid_fill_nsta

0xbe39,	// (0x00046ba3) navi_icon_text_pane_g1

0xbe48,	// (0x00046bb2) navi_icon_text_pane_t1

0x8a4c,	// (0x000437b6) list_set_graphic_pane_t1_ParamLimits

0x8a4c,	// (0x000437b6) list_set_graphic_pane_t1

0xa792,	// (0x000454fc) popup_midp_note_alarm_window_t6_ParamLimits

0xa792,	// (0x000454fc) popup_midp_note_alarm_window_t6

0xa7a4,	// (0x0004550e) popup_midp_note_alarm_window_t7_ParamLimits

0xa7a4,	// (0x0004550e) popup_midp_note_alarm_window_t7

0xa7b6,	// (0x00045520) popup_midp_note_alarm_window_t8_ParamLimits

0xa7b6,	// (0x00045520) popup_midp_note_alarm_window_t8

0xa7c8,	// (0x00045532) popup_midp_note_alarm_window_t9_ParamLimits

0xa7c8,	// (0x00045532) popup_midp_note_alarm_window_t9

0xa7da,	// (0x00045544) popup_midp_note_alarm_window_t10_ParamLimits

0xa7da,	// (0x00045544) popup_midp_note_alarm_window_t10

0xa7ec,	// (0x00045556) popup_midp_note_alarm_window_t11_ParamLimits

0xa7ec,	// (0x00045556) popup_midp_note_alarm_window_t11

0xa7fe,	// (0x00045568) scroll_pane_cp17_ParamLimits

0xa7fe,	// (0x00045568) scroll_pane_cp17

0x66bd,	// (0x00041427) volume_small_pane_cp_g1

0x6a2a,	// (0x00041794) volume_small_pane_cp_g2

0x6a33,	// (0x0004179d) volume_small_pane_cp_g3

0x6a3c,	// (0x000417a6) volume_small_pane_cp_g4

0x6a45,	// (0x000417af) volume_small_pane_cp_g5

0x6a4e,	// (0x000417b8) volume_small_pane_cp_g6

0x6a57,	// (0x000417c1) volume_small_pane_cp_g7

0x6a60,	// (0x000417ca) volume_small_pane_cp_g8

0x6a69,	// (0x000417d3) volume_small_pane_cp_g9

0x6a72,	// (0x000417dc) volume_small_pane_cp_g10

0x8e17,	// (0x00043b81) midp_ticker_pane_g1_ParamLimits

0x8e23,	// (0x00043b8d) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0004a507) midp_ticker_pane_g_ParamLimits

0x8e2f,	// (0x00043b99) midp_ticker_pane_t1_ParamLimits

0x970d,	// (0x00044477) aid_fill_nsta_2

0xa05e,	// (0x00044dc8) list_form2_midp_pane

0xb1bb,	// (0x00045f25) midp_editing_number_pane_ParamLimits

0xb1ca,	// (0x00045f34) midp_ticker_pane_ParamLimits

0xbe5d,	// (0x00046bc7) form2_midp_field_pane

0xbe81,	// (0x00046beb) scroll_pane_cp51

0xbea1,	// (0x00046c0b) form2_midp_button_pane_ParamLimits

0xbea1,	// (0x00046c0b) form2_midp_button_pane

0xbeb3,	// (0x00046c1d) form2_midp_content_pane_ParamLimits

0xbeb3,	// (0x00046c1d) form2_midp_content_pane

0xbecd,	// (0x00046c37) form2_midp_field_choice_group_pane

0xbed5,	// (0x00046c3f) form2_midp_field_pane_g1

0xbedd,	// (0x00046c47) form2_midp_field_pane_g2

0xbee5,	// (0x00046c4f) form2_midp_field_pane_g3

0xbeed,	// (0x00046c57) form2_midp_field_pane_g4

0x0003,

0xfb14,	// (0x0004a87e) form2_midp_field_pane_g

0xbef5,	// (0x00046c5f) form2_midp_gauge_slider_pane

0xbefd,	// (0x00046c67) form2_midp_gauge_wait_pane

0xbf05,	// (0x00046c6f) form2_midp_image_pane_ParamLimits

0xbf05,	// (0x00046c6f) form2_midp_image_pane

0xbf20,	// (0x00046c8a) form2_midp_label_pane_ParamLimits

0xbf20,	// (0x00046c8a) form2_midp_label_pane

0xbf3f,	// (0x00046ca9) form2_midp_label_pane_cp_ParamLimits

0xbf3f,	// (0x00046ca9) form2_midp_label_pane_cp

0xbf60,	// (0x00046cca) form2_midp_string_pane_ParamLimits

0xbf60,	// (0x00046cca) form2_midp_string_pane

0x5777,	// (0x000404e1) form2_midp_text_pane_ParamLimits

0x5777,	// (0x000404e1) form2_midp_text_pane

0xbf72,	// (0x00046cdc) form2_midp_time_pane

0xbf82,	// (0x00046cec) input_focus_pane_cp51_ParamLimits

0xbf82,	// (0x00046cec) input_focus_pane_cp51

0xbf9a,	// (0x00046d04) form2_midp_label_pane_t1_ParamLimits

0xbf9a,	// (0x00046d04) form2_midp_label_pane_t1

0x579a,	// (0x00040504) form2_mdip_text_pane_t1_ParamLimits

0x579a,	// (0x00040504) form2_mdip_text_pane_t1

0x57b9,	// (0x00040523) form2_midp_time_pane_t1

0xbfe8,	// (0x00046d52) form2_midp_gauge_slider_pane_t1

0xbffa,	// (0x00046d64) form2_midp_gauge_slider_pane_t2

0xc00c,	// (0x00046d76) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1d,	// (0x0004a887) form2_midp_gauge_slider_pane_t

0xc01e,	// (0x00046d88) form2_midp_slider_pane

0xc02a,	// (0x00046d94) form2_midp_gauge_wait_pane_t1

0xc038,	// (0x00046da2) form2_midp_wait_pane_ParamLimits

0xc038,	// (0x00046da2) form2_midp_wait_pane

0x9d83,	// (0x00044aed) list_single_2graphic_pane_cp4_ParamLimits

0x9d83,	// (0x00044aed) list_single_2graphic_pane_cp4

0xc063,	// (0x00046dcd) list_single_midp_graphic_pane_cp_ParamLimits

0xc063,	// (0x00046dcd) list_single_midp_graphic_pane_cp

0x7775,	// (0x000424df) list_highlight_pane_cp20

0xc087,	// (0x00046df1) list_single_2graphic_pane_g1_cp4

0xb69c,	// (0x00046406) list_single_2graphic_pane_g2_cp4

0xc08f,	// (0x00046df9) list_single_2graphic_pane_t1_cp4

0x7855,	// (0x000425bf) list_highlight_pane_cp21

0xc09e,	// (0x00046e08) list_single_midp_graphic_pane_g4_cp

0xc0ad,	// (0x00046e17) list_single_midp_graphic_pane_t1_cp

0xc0c2,	// (0x00046e2c) form2_mdip_string_pane_t1_ParamLimits

0xc0c2,	// (0x00046e2c) form2_mdip_string_pane_t1

0x7775,	// (0x000424df) bg_wml_button_pane_cp2

0x776b,	// (0x000424d5) form2_midp_image_pane_g1

0x5f4b,	// (0x00040cb5) list_double_large_graphic_pane_g5_ParamLimits

0x5f4b,	// (0x00040cb5) list_double_large_graphic_pane_g5

0x8d42,	// (0x00043aac) midp_form_pane_ParamLimits

0x7855,	// (0x000425bf) main_apps_wheel_pane_ParamLimits

0x94a1,	// (0x0004420b) popup_preview_window_ParamLimits

0x94a1,	// (0x0004420b) popup_preview_window

0x9688,	// (0x000443f2) popup_touch_info_window_ParamLimits

0x9688,	// (0x000443f2) popup_touch_info_window

0x96aa,	// (0x00044414) popup_touch_menu_window_ParamLimits

0x96aa,	// (0x00044414) popup_touch_menu_window

0x7761,	// (0x000424cb) bg_popup_sub_pane_cp6

0xc167,	// (0x00046ed1) list_touch_menu_pane

0xc16f,	// (0x00046ed9) list_single_touch_menu_pane_ParamLimits

0xc16f,	// (0x00046ed9) list_single_touch_menu_pane

0xc18a,	// (0x00046ef4) list_single_touch_menu_pane_t1

0x7855,	// (0x000425bf) bg_popup_sub_pane_cp7_ParamLimits

0x7855,	// (0x000425bf) bg_popup_sub_pane_cp7

0xc198,	// (0x00046f02) heading_sub_pane

0xc1a0,	// (0x00046f0a) list_touch_info_pane_ParamLimits

0xc1a0,	// (0x00046f0a) list_touch_info_pane

0xc1af,	// (0x00046f19) list_single_touch_info_pane_ParamLimits

0xc1af,	// (0x00046f19) list_single_touch_info_pane

0xc1c1,	// (0x00046f2b) list_single_touch_info_pane_t1

0xc1cf,	// (0x00046f39) list_single_touch_info_pane_t2

0x0001,

0xfb2b,	// (0x0004a895) list_single_touch_info_pane_t

0x8d3a,	// (0x00043aa4) bg_popup_heading_pane_cp

0xc1dd,	// (0x00046f47) heading_sub_pane_t1

0x9cf2,	// (0x00044a5c) bg_popup_preview_window_pane_cp_ParamLimits

0x9cf2,	// (0x00044a5c) bg_popup_preview_window_pane_cp

0xc198,	// (0x00046f02) heading_preview_pane

0xc1a0,	// (0x00046f0a) list_preview_pane_ParamLimits

0xc1a0,	// (0x00046f0a) list_preview_pane

0xc1eb,	// (0x00046f55) popup_preview_window_g1

0xc1af,	// (0x00046f19) list_single_preview_pane_ParamLimits

0xc1af,	// (0x00046f19) list_single_preview_pane

0xc1f3,	// (0x00046f5d) list_single_preview_pane_g1

0xc1fb,	// (0x00046f65) list_single_preview_pane_t1

0xc1c1,	// (0x00046f2b) list_single_preview_pane_t2

0x0001,

0xfb30,	// (0x0004a89a) list_single_preview_pane_t

0xc209,	// (0x00046f73) bg_popup_heading_pane_cp2_ParamLimits

0xc209,	// (0x00046f73) bg_popup_heading_pane_cp2

0xc21f,	// (0x00046f89) heading_preview_pane_g1

0xc227,	// (0x00046f91) heading_preview_pane_t1_ParamLimits

0xc227,	// (0x00046f91) heading_preview_pane_t1

0x7944,	// (0x000426ae) soft_indicator_pane_t1_ParamLimits

0x804f,	// (0x00042db9) scroll_pane_ParamLimits

0x8580,	// (0x000432ea) scroll_sc2_left_pane

0x8589,	// (0x000432f3) scroll_sc2_right_pane

0x85a8,	// (0x00043312) scroll_bg_pane_g1_ParamLimits

0x85bd,	// (0x00043327) scroll_bg_pane_g2_ParamLimits

0x85d5,	// (0x0004333f) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0004a496) scroll_bg_pane_g_ParamLimits

0x85a8,	// (0x00043312) scroll_handle_pane_g1_ParamLimits

0x85f7,	// (0x00043361) scroll_handle_pane_g2_ParamLimits

0x85d5,	// (0x0004333f) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0004a49d) scroll_handle_pane_g_ParamLimits

0x90ec,	// (0x00043e56) popup_choice_list_window_ParamLimits

0x90ec,	// (0x00043e56) popup_choice_list_window

0x9b4a,	// (0x000448b4) choice_list_pane

0x9bcc,	// (0x00044936) cell_toolbar_pane_t1

0x9bf4,	// (0x0004495e) toolbar_button_pane_ParamLimits

0xacce,	// (0x00045a38) ai_gene_pane_1_t2_ParamLimits

0xacce,	// (0x00045a38) ai_gene_pane_1_t2

0x0001,

0xf950,	// (0x0004a6ba) ai_gene_pane_1_t_ParamLimits

0xf950,	// (0x0004a6ba) ai_gene_pane_1_t

0xc244,	// (0x00046fae) scroll_sc2_left_pane_g1

0xc244,	// (0x00046fae) scroll_sc2_right_pane_g1

0x90c4,	// (0x00043e2e) bg_popup_sub_pane_cp10

0xc24e,	// (0x00046fb8) list_choice_list_pane

0xc265,	// (0x00046fcf) list_single_choice_list_pane_ParamLimits

0xc265,	// (0x00046fcf) list_single_choice_list_pane

0xc279,	// (0x00046fe3) list_single_choice_list_pane_g1

0xc281,	// (0x00046feb) list_single_choice_list_pane_t1_ParamLimits

0xc281,	// (0x00046feb) list_single_choice_list_pane_t1

0xc296,	// (0x00047000) choice_list_pane_g1

0xc29e,	// (0x00047008) choice_list_pane_t1

0x7761,	// (0x000424cb) input_focus_pane_cp11

0x845a,	// (0x000431c4) title_pane_stacon_g2_ParamLimits

0x845a,	// (0x000431c4) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0004a47c) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0004a47c) title_pane_stacon_g

0x8d3a,	// (0x00043aa4) cursor_press_pane

0x91a2,	// (0x00043f0c) popup_fep_hwr_window_ParamLimits

0x91a2,	// (0x00043f0c) popup_fep_hwr_window

0x922c,	// (0x00043f96) popup_fep_vkb_window_ParamLimits

0x922c,	// (0x00043f96) popup_fep_vkb_window

0xc2ac,	// (0x00047016) cursor_press_pane_g1

0x0002,

0xfb59,	// (0x0004a8c3) fep_vkb_side_pane_g_ParamLimits

0x6aa6,	// (0x00041810) fep_hwr_candidate_pane_ParamLimits

0x6aa6,	// (0x00041810) fep_hwr_candidate_pane

0x6ad0,	// (0x0004183a) fep_hwr_side_pane_ParamLimits

0x6ad0,	// (0x0004183a) fep_hwr_side_pane

0x6af2,	// (0x0004185c) fep_hwr_top_pane_ParamLimits

0x6af2,	// (0x0004185c) fep_hwr_top_pane

0x6b0a,	// (0x00041874) fep_hwr_write_pane_ParamLimits

0x6b0a,	// (0x00041874) fep_hwr_write_pane

0xfb59,	// (0x0004a8c3) fep_vkb_side_pane_g

0xc2b4,	// (0x0004701e) fep_hwr_top_pane_g1

0xc2c6,	// (0x00047030) fep_hwr_top_pane_g2

0x6b36,	// (0x000418a0) fep_hwr_top_pane_g3

0x0002,

0xfb35,	// (0x0004a89f) fep_hwr_top_pane_g

0x6b4b,	// (0x000418b5) fep_hwr_top_text_pane

0x874c,	// (0x000434b6) fep_hwr_top_text_pane_g1

0xc30a,	// (0x00047074) fep_hwr_top_text_pane_t1

0x6c55,	// (0x000419bf) fep_hwr_candidate_pane_g1

0xc555,	// (0x000472bf) fep_vkb_keypad_pane_g3_ParamLimits

0xc555,	// (0x000472bf) fep_vkb_keypad_pane_g3

0xc581,	// (0x000472eb) fep_vkb_keypad_pane_g4_ParamLimits

0xc581,	// (0x000472eb) fep_vkb_keypad_pane_g4

0xc5f8,	// (0x00047362) fep_vkb_bottom_pane_g2_ParamLimits

0xc5f8,	// (0x00047362) fep_vkb_bottom_pane_g2

0x0001,

0xfb60,	// (0x0004a8ca) fep_vkb_bottom_pane_g_ParamLimits

0xfb60,	// (0x0004a8ca) fep_vkb_bottom_pane_g

0xc244,	// (0x00046fae) cell_vkb_side_pane_g2

0x0001,

0xfb6a,	// (0x0004a8d4) cell_vkb_side_pane_g

0xc683,	// (0x000473ed) cell_vkb_side_pane_t1

0xc691,	// (0x000473fb) cell_vkb_side_pane_t1_copy1

0xc244,	// (0x00046fae) bg_fep_vkb_candidate_pane_g2

0xc7d5,	// (0x0004753f) cell_vkb_candidate_pane_ParamLimits

0xc318,	// (0x00047082) aid_size_cell_vkb_ParamLimits

0xc318,	// (0x00047082) aid_size_cell_vkb

0xc7d5,	// (0x0004753f) cell_vkb_candidate_pane

0x6c6f,	// (0x000419d9) bg_popup_fep_shadow_pane_g1

0xc3aa,	// (0x00047114) fep_vkb_bottom_pane_ParamLimits

0xc3aa,	// (0x00047114) fep_vkb_bottom_pane

0xc3e7,	// (0x00047151) fep_vkb_candidate_pane_ParamLimits

0xc3e7,	// (0x00047151) fep_vkb_candidate_pane

0xc403,	// (0x0004716d) fep_vkb_keypad_pane_ParamLimits

0xc403,	// (0x0004716d) fep_vkb_keypad_pane

0xc436,	// (0x000471a0) fep_vkb_side_pane_ParamLimits

0xc436,	// (0x000471a0) fep_vkb_side_pane

0xc472,	// (0x000471dc) fep_vkb_top_pane_ParamLimits

0xc472,	// (0x000471dc) fep_vkb_top_pane

0xc4ae,	// (0x00047218) fep_vkb_top_pane_g1_ParamLimits

0xc4ae,	// (0x00047218) fep_vkb_top_pane_g1

0xc4bd,	// (0x00047227) fep_vkb_top_pane_g2_ParamLimits

0xc4bd,	// (0x00047227) fep_vkb_top_pane_g2

0xc4cc,	// (0x00047236) fep_vkb_top_pane_g3_ParamLimits

0xc4cc,	// (0x00047236) fep_vkb_top_pane_g3

0x0003,

0xfb50,	// (0x0004a8ba) fep_vkb_top_pane_g_ParamLimits

0xfb50,	// (0x0004a8ba) fep_vkb_top_pane_g

0xc4ea,	// (0x00047254) fep_vkb_top_text_pane_ParamLimits

0xc4ea,	// (0x00047254) fep_vkb_top_text_pane

0xc4fb,	// (0x00047265) fep_vkb_side_pane_g1_ParamLimits

0xc4fb,	// (0x00047265) fep_vkb_side_pane_g1

0xc544,	// (0x000472ae) grid_vkb_side_pane_ParamLimits

0xc544,	// (0x000472ae) grid_vkb_side_pane

0x6c77,	// (0x000419e1) bg_popup_fep_shadow_pane_g2

0x6c80,	// (0x000419ea) bg_popup_fep_shadow_pane_g3

0x6c88,	// (0x000419f2) bg_popup_fep_shadow_pane_g4

0x6c91,	// (0x000419fb) bg_popup_fep_shadow_pane_g5

0x6c9b,	// (0x00041a05) bg_popup_fep_shadow_pane_g6

0x6ca3,	// (0x00041a0d) bg_popup_fep_shadow_pane_g7

0x8163,	// (0x00042ecd) bg_popup_fep_shadow_pane_g8

0xc5a3,	// (0x0004730d) grid_vkb_keypad_number_pane_ParamLimits

0xc5a3,	// (0x0004730d) grid_vkb_keypad_number_pane

0xc5b7,	// (0x00047321) grid_vkb_keypad_pane_ParamLimits

0xc5b7,	// (0x00047321) grid_vkb_keypad_pane

0xc5dd,	// (0x00047347) fep_vkb_bottom_pane_g1_ParamLimits

0xc5dd,	// (0x00047347) fep_vkb_bottom_pane_g1

0xc606,	// (0x00047370) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc606,	// (0x00047370) grid_vkb_keypad_bottom_left_pane

0xc61b,	// (0x00047385) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc61b,	// (0x00047385) grid_vkb_keypad_bottom_right_pane

0xc630,	// (0x0004739a) fep_vkb_top_text_pane_g1

0xc64b,	// (0x000473b5) fep_vkb_top_text_pane_t1

0xc660,	// (0x000473ca) cell_vkb_side_pane_ParamLimits

0xc660,	// (0x000473ca) cell_vkb_side_pane

0xc244,	// (0x00046fae) cell_vkb_side_pane_g1

0xc69f,	// (0x00047409) cell_vkb_keypad_pane_ParamLimits

0xc69f,	// (0x00047409) cell_vkb_keypad_pane

0xc72c,	// (0x00047496) cell_vkb_keypad_pane_g1

0x0008,

0xfb7d,	// (0x0004a8e7) bg_popup_fep_shadow_pane_g

0xc244,	// (0x00046fae) cell_hwr_side_pane_g1

0xc244,	// (0x00046fae) cell_hwr_side_pane_g2

0xc736,	// (0x000474a0) cell_vkb_keypad_pane_t1

0xc744,	// (0x000474ae) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc744,	// (0x000474ae) cell_vkb_keypad_bottom_left_pane

0xc761,	// (0x000474cb) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc761,	// (0x000474cb) cell_vkb_keypad_bottom_right_pane

0xc244,	// (0x00046fae) cell_vkb_keypad_bottom_left_pane_g1

0xc244,	// (0x00046fae) cell_vkb_keypad_bottom_right_pane_g1

0xc79a,	// (0x00047504) cell_vkb_keypad_number_pane_ParamLimits

0xc79a,	// (0x00047504) cell_vkb_keypad_number_pane

0xc7b9,	// (0x00047523) cell_vkb_keypad_number_pane_g1

0xc7c3,	// (0x0004752d) cell_vkb_keypad_number_pane_g2

0xc7cc,	// (0x00047536) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6f,	// (0x0004a8d9) cell_vkb_keypad_number_pane_g

0xc736,	// (0x000474a0) cell_vkb_keypad_number_pane_t1

0xc7f6,	// (0x00047560) fep_vkb_candidate_pane_g1

0x0001,

0xfb6a,	// (0x0004a8d4) cell_hwr_side_pane_g

0xc80f,	// (0x00047579) cell_hwr_side_pane_t1

0x6cb5,	// (0x00041a1f) cell_hwr_side_pane_t1_copy1

0xc4dc,	// (0x00047246) cell_hwr_candidate_pane_g1

0x6cc3,	// (0x00041a2d) cell_hwr_candidate_pane_t1

0xc244,	// (0x00046fae) cell_vkb_candidate_pane_g2

0xc895,	// (0x000475ff) cell_vkb_candidate_pane_t1

0xc2f0,	// (0x0004705a) bg_popup_fep_shadow_pane_ParamLimits

0xc2f0,	// (0x0004705a) bg_popup_fep_shadow_pane

0x25f4,	// (0x0003d35e) bg_fep_hwr_top_pane_g4

0xc2d8,	// (0x00047042) bg_hwr_side_pane_g1_ParamLimits

0xc2d8,	// (0x00047042) bg_hwr_side_pane_g1

0x6b89,	// (0x000418f3) cell_hwr_side_pane_ParamLimits

0x6b89,	// (0x000418f3) cell_hwr_side_pane

0x6bc6,	// (0x00041930) fep_hwr_write_pane_g1_ParamLimits

0x6bc6,	// (0x00041930) fep_hwr_write_pane_g1

0x6bd3,	// (0x0004193d) fep_hwr_write_pane_g2_ParamLimits

0x6bd3,	// (0x0004193d) fep_hwr_write_pane_g2

0x6be0,	// (0x0004194a) fep_hwr_write_pane_g3_ParamLimits

0x6be0,	// (0x0004194a) fep_hwr_write_pane_g3

0x6bee,	// (0x00041958) fep_hwr_write_pane_g4_ParamLimits

0x6bee,	// (0x00041958) fep_hwr_write_pane_g4

0x0005,

0xfb3c,	// (0x0004a8a6) fep_hwr_write_pane_g_ParamLimits

0xfb3c,	// (0x0004a8a6) fep_hwr_write_pane_g

0x25f4,	// (0x0003d35e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x25f4,	// (0x0003d35e) bg_fep_hwr_candidate_pane_g2

0x6c03,	// (0x0004196d) cell_hwr_candidate_pane_ParamLimits

0x6c03,	// (0x0004196d) cell_hwr_candidate_pane

0x6c55,	// (0x000419bf) fep_hwr_candidate_pane_g1_ParamLimits

0xc346,	// (0x000470b0) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc346,	// (0x000470b0) bg_popup_fep_shadow_pane_cp2

0xc4dc,	// (0x00047246) fep_vkb_top_pane_g4_ParamLimits

0xc4dc,	// (0x00047246) fep_vkb_top_pane_g4

0xc522,	// (0x0004728c) fep_vkb_side_pane_g2_ParamLimits

0xc522,	// (0x0004728c) fep_vkb_side_pane_g2

0x50d2,	// (0x0003fe3c) list_setting_pane_t4_ParamLimits

0x50d2,	// (0x0003fe3c) list_setting_pane_t4

0x516e,	// (0x0003fed8) list_setting_number_pane_t5_ParamLimits

0x516e,	// (0x0003fed8) list_setting_number_pane_t5

0x878e,	// (0x000434f8) list_double_heading_pane_cp2_ParamLimits

0x878e,	// (0x000434f8) list_double_heading_pane_cp2

0x80f6,	// (0x00042e60) list_double_heading_pane_g1_cp2_ParamLimits

0x80f6,	// (0x00042e60) list_double_heading_pane_g1_cp2

0x8102,	// (0x00042e6c) list_double_heading_pane_g2_cp2_ParamLimits

0x8102,	// (0x00042e6c) list_double_heading_pane_g2_cp2

0xc8a3,	// (0x0004760d) list_double_heading_pane_t1_cp2_ParamLimits

0xc8a3,	// (0x0004760d) list_double_heading_pane_t1_cp2

0xc8b9,	// (0x00047623) list_double_heading_pane_t2_cp2_ParamLimits

0xc8b9,	// (0x00047623) list_double_heading_pane_t2_cp2

0x7749,	// (0x000424b3) aid_value_unit2

0x5d24,	// (0x00040a8e) popup_preview_fixed_window

0x7adf,	// (0x00042849) bg_popup_preview_window_pane_cp02

0xc8cb,	// (0x00047635) list_preview_fixed_pane

0xc911,	// (0x0004767b) list_empty_pane_fp_ParamLimits

0xc911,	// (0x0004767b) list_empty_pane_fp

0xc911,	// (0x0004767b) list_single_cale_day_pane_fp_ParamLimits

0xc911,	// (0x0004767b) list_single_cale_day_pane_fp

0xc911,	// (0x0004767b) list_single_graphic_heading_pane_fp_ParamLimits

0xc911,	// (0x0004767b) list_single_graphic_heading_pane_fp

0xc911,	// (0x0004767b) list_single_graphic_pane_fp_ParamLimits

0xc911,	// (0x0004767b) list_single_graphic_pane_fp

0xc911,	// (0x0004767b) list_single_heading_pane_fp_ParamLimits

0xc911,	// (0x0004767b) list_single_heading_pane_fp

0xc911,	// (0x0004767b) list_single_pane_fp_ParamLimits

0xc911,	// (0x0004767b) list_single_pane_fp

0xc92a,	// (0x00047694) list_single_pane_fp_g1_ParamLimits

0xc92a,	// (0x00047694) list_single_pane_fp_g1

0x5f3f,	// (0x00040ca9) list_single_pane_fp_g2_ParamLimits

0x5f3f,	// (0x00040ca9) list_single_pane_fp_g2

0x6ce1,	// (0x00041a4b) list_single_pane_fp_g3_ParamLimits

0x6ce1,	// (0x00041a4b) list_single_pane_fp_g3

0xc936,	// (0x000476a0) list_single_pane_fp_g4_ParamLimits

0xc936,	// (0x000476a0) list_single_pane_fp_g4

0x0003,

0xfb9e,	// (0x0004a908) list_single_pane_fp_g_ParamLimits

0xfb9e,	// (0x0004a908) list_single_pane_fp_g

0x57cc,	// (0x00040536) list_single_pane_fp_t1_ParamLimits

0x57cc,	// (0x00040536) list_single_pane_fp_t1

0x57e3,	// (0x0004054d) list_single_graphic_pane_fp_g1_ParamLimits

0x57e3,	// (0x0004054d) list_single_graphic_pane_fp_g1

0xc92a,	// (0x00047694) list_single_graphic_pane_fp_g2_ParamLimits

0xc92a,	// (0x00047694) list_single_graphic_pane_fp_g2

0x5f3f,	// (0x00040ca9) list_single_graphic_pane_fp_g3_ParamLimits

0x5f3f,	// (0x00040ca9) list_single_graphic_pane_fp_g3

0x6ce1,	// (0x00041a4b) list_single_graphic_pane_fp_g4_ParamLimits

0x6ce1,	// (0x00041a4b) list_single_graphic_pane_fp_g4

0xc936,	// (0x000476a0) list_single_graphic_pane_fp_g5_ParamLimits

0xc936,	// (0x000476a0) list_single_graphic_pane_fp_g5

0x0004,

0xfba7,	// (0x0004a911) list_single_graphic_pane_fp_g_ParamLimits

0xfba7,	// (0x0004a911) list_single_graphic_pane_fp_g

0x57ef,	// (0x00040559) list_single_graphic_pane_fp_t1_ParamLimits

0x57ef,	// (0x00040559) list_single_graphic_pane_fp_t1

0x57e3,	// (0x0004054d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x57e3,	// (0x0004054d) list_single_graphic_heading_pane_fp_g1

0xc92a,	// (0x00047694) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc92a,	// (0x00047694) list_single_graphic_heading_pane_fp_g2

0x5f3f,	// (0x00040ca9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5f3f,	// (0x00040ca9) list_single_graphic_heading_pane_fp_g3

0x6ce1,	// (0x00041a4b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6ce1,	// (0x00041a4b) list_single_graphic_heading_pane_fp_g4

0xc936,	// (0x000476a0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc936,	// (0x000476a0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba7,	// (0x0004a911) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0004a911) list_single_graphic_heading_pane_fp_g

0x5805,	// (0x0004056f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5805,	// (0x0004056f) list_single_graphic_heading_pane_fp_t1

0x581b,	// (0x00040585) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x581b,	// (0x00040585) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb2,	// (0x0004a91c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb2,	// (0x0004a91c) list_single_graphic_heading_pane_fp_t

0x582d,	// (0x00040597) list_single_cale_day_pane_fp_g1_ParamLimits

0x582d,	// (0x00040597) list_single_cale_day_pane_fp_g1

0xc942,	// (0x000476ac) list_single_cale_day_pane_fp_g2_ParamLimits

0xc942,	// (0x000476ac) list_single_cale_day_pane_fp_g2

0x6cf5,	// (0x00041a5f) list_single_cale_day_pane_fp_g3_ParamLimits

0x6cf5,	// (0x00041a5f) list_single_cale_day_pane_fp_g3

0x6d1d,	// (0x00041a87) list_single_cale_day_pane_fp_g4_ParamLimits

0x6d1d,	// (0x00041a87) list_single_cale_day_pane_fp_g4

0x6d41,	// (0x00041aab) list_single_cale_day_pane_fp_g5_ParamLimits

0x6d41,	// (0x00041aab) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb7,	// (0x0004a921) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb7,	// (0x0004a921) list_single_cale_day_pane_fp_g

0x5865,	// (0x000405cf) list_single_cale_day_pane_fp_t1_ParamLimits

0x5865,	// (0x000405cf) list_single_cale_day_pane_fp_t1

0x588b,	// (0x000405f5) list_single_cale_day_pane_fp_t2_ParamLimits

0x588b,	// (0x000405f5) list_single_cale_day_pane_fp_t2

0x58a4,	// (0x0004060e) list_single_cale_day_pane_fp_t3_ParamLimits

0x58a4,	// (0x0004060e) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc2,	// (0x0004a92c) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc2,	// (0x0004a92c) list_single_cale_day_pane_fp_t

0xc92a,	// (0x00047694) list_empty_pane_fp_g1_ParamLimits

0xc92a,	// (0x00047694) list_empty_pane_fp_g1

0x58bd,	// (0x00040627) list_empty_pane_fp_t1

0x58cb,	// (0x00040635) list_empty_pane_fp_t2

0x0001,

0xfbc9,	// (0x0004a933) list_empty_pane_fp_t

0xc92a,	// (0x00047694) list_single_heading_pane_fp_g1_ParamLimits

0xc92a,	// (0x00047694) list_single_heading_pane_fp_g1

0x5f3f,	// (0x00040ca9) list_single_heading_pane_fp_g2_ParamLimits

0x5f3f,	// (0x00040ca9) list_single_heading_pane_fp_g2

0x6ce1,	// (0x00041a4b) list_single_heading_pane_fp_g3_ParamLimits

0x6ce1,	// (0x00041a4b) list_single_heading_pane_fp_g3

0x0002,

0xfbce,	// (0x0004a938) list_single_heading_pane_fp_g_ParamLimits

0xfbce,	// (0x0004a938) list_single_heading_pane_fp_g

0x58d9,	// (0x00040643) list_single_heading_pane_fp_t1_ParamLimits

0x58d9,	// (0x00040643) list_single_heading_pane_fp_t1

0x58eb,	// (0x00040655) list_single_heading_pane_fp_t2_ParamLimits

0x58eb,	// (0x00040655) list_single_heading_pane_fp_t2

0x0001,

0xfbd5,	// (0x0004a93f) list_single_heading_pane_fp_t_ParamLimits

0xfbd5,	// (0x0004a93f) list_single_heading_pane_fp_t

0x82f1,	// (0x0004305b) aid_size_cell_fast

0x7a51,	// (0x000427bb) soft_indicator_pane_cp1_t1

0x832e,	// (0x00043098) cell_app_pane_cp2_ParamLimits

0x832e,	// (0x00043098) cell_app_pane_cp2

0x6a8f,	// (0x000417f9) fep_hwr_candidate_drop_down_list_pane

0x2602,	// (0x0003d36c) fep_hwr_candidate_pane_g3_ParamLimits

0x2602,	// (0x0003d36c) fep_hwr_candidate_pane_g3

0x260f,	// (0x0003d379) fep_hwr_candidate_pane_g4_ParamLimits

0x260f,	// (0x0003d379) fep_hwr_candidate_pane_g4

0x0002,

0xfb49,	// (0x0004a8b3) fep_hwr_candidate_pane_g_ParamLimits

0xfb49,	// (0x0004a8b3) fep_hwr_candidate_pane_g

0xc3d6,	// (0x00047140) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3d6,	// (0x00047140) fep_vkb_candidate_drop_down_list_pane

0xc7fe,	// (0x00047568) fep_vkb_candidate_pane_g3

0xc806,	// (0x00047570) fep_vkb_candidate_pane_g4

0x0002,

0xfb76,	// (0x0004a8e0) fep_vkb_candidate_pane_g

0xc4dc,	// (0x00047246) cell_hwr_candidate_pane_g1_ParamLimits

0xc81d,	// (0x00047587) cell_hwr_candidate_pane_g3_ParamLimits

0xc81d,	// (0x00047587) cell_hwr_candidate_pane_g3

0xc83e,	// (0x000475a8) cell_hwr_candidate_pane_g4_ParamLimits

0xc83e,	// (0x000475a8) cell_hwr_candidate_pane_g4

0x0002,

0xfb90,	// (0x0004a8fa) cell_hwr_candidate_pane_g_ParamLimits

0xfb90,	// (0x0004a8fa) cell_hwr_candidate_pane_g

0xc85f,	// (0x000475c9) cell_vkb_candidate_pane_g3_ParamLimits

0xc85f,	// (0x000475c9) cell_vkb_candidate_pane_g3

0xc87a,	// (0x000475e4) cell_vkb_candidate_pane_g4_ParamLimits

0xc87a,	// (0x000475e4) cell_vkb_candidate_pane_g4

0xc94e,	// (0x000476b8) cell_app_pane_cp2_g1_ParamLimits

0xc94e,	// (0x000476b8) cell_app_pane_cp2_g1

0xc96c,	// (0x000476d6) cell_app_pane_cp2_g2_ParamLimits

0xc96c,	// (0x000476d6) cell_app_pane_cp2_g2

0x0001,

0xfbda,	// (0x0004a944) cell_app_pane_cp2_g_ParamLimits

0xfbda,	// (0x0004a944) cell_app_pane_cp2_g

0xc978,	// (0x000476e2) cell_app_pane_cp2_t1_ParamLimits

0xc978,	// (0x000476e2) cell_app_pane_cp2_t1

0x80dc,	// (0x00042e46) grid_highlight_pane_cp1_ParamLimits

0x80dc,	// (0x00042e46) grid_highlight_pane_cp1

0x6d65,	// (0x00041acf) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d65,	// (0x00041acf) cell_hwr_candidate_pane_cp1

0xc4dc,	// (0x00047246) fep_hwr_candidate_drop_down_list_pane_g1

0xc98a,	// (0x000476f4) fep_hwr_candidate_drop_down_list_pane_g2

0xc997,	// (0x00047701) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbdf,	// (0x0004a949) fep_hwr_candidate_drop_down_list_pane_g

0x6d89,	// (0x00041af3) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d92,	// (0x00041afc) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d92,	// (0x00041afc) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d9f,	// (0x00041b09) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d9f,	// (0x00041b09) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6dac,	// (0x00041b16) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6dac,	// (0x00041b16) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc85f,	// (0x000475c9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc85f,	// (0x000475c9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc87a,	// (0x000475e4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc87a,	// (0x000475e4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6db9,	// (0x00041b23) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6db9,	// (0x00041b23) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6dd4,	// (0x00041b3e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6dd4,	// (0x00041b3e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6def,	// (0x00041b59) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6def,	// (0x00041b59) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe6,	// (0x0004a950) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe6,	// (0x0004a950) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9a4,	// (0x0004770e) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9a4,	// (0x0004770e) cell_vkb_candidate_pane_cp1

0xc4dc,	// (0x00047246) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4dc,	// (0x00047246) fep_vkb_candidate_drop_down_list_pane_g1

0xc98a,	// (0x000476f4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98a,	// (0x000476f4) fep_vkb_candidate_drop_down_list_pane_g2

0xc997,	// (0x00047701) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc997,	// (0x00047701) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdf,	// (0x0004a949) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdf,	// (0x0004a949) fep_vkb_candidate_drop_down_list_pane_g

0xc9ca,	// (0x00047734) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9ca,	// (0x00047734) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9d7,	// (0x00047741) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9d7,	// (0x00047741) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9e4,	// (0x0004774e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9e4,	// (0x0004774e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9f0,	// (0x0004775a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9f0,	// (0x0004775a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc81d,	// (0x00047587) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc81d,	// (0x00047587) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc83e,	// (0x000475a8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc83e,	// (0x000475a8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9fc,	// (0x00047766) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9fc,	// (0x00047766) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca1d,	// (0x00047787) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca1d,	// (0x00047787) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca3e,	// (0x000477a8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca3e,	// (0x000477a8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf7,	// (0x0004a961) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf7,	// (0x0004a961) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x777f,	// (0x000424e9) title_pane_g1_ParamLimits

0x778c,	// (0x000424f6) title_pane_g2_ParamLimits

0xf592,	// (0x0004a2fc) title_pane_g_ParamLimits

0x873c,	// (0x000434a6) aid_call2_pane

0x8744,	// (0x000434ae) aid_call_pane

0x874c,	// (0x000434b6) popup_clock_analogue_window_g1

0x874c,	// (0x000434b6) popup_clock_analogue_window_g2

0x613f,	// (0x00040ea9) popup_clock_analogue_window_g3

0x6148,	// (0x00040eb2) popup_clock_analogue_window_g4

0x776b,	// (0x000424d5) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0004a4ab) popup_clock_analogue_window_g

0x6150,	// (0x00040eba) popup_clock_analogue_window_t1

0x615e,	// (0x00040ec8) clock_digital_number_pane_ParamLimits

0x615e,	// (0x00040ec8) clock_digital_number_pane

0x616a,	// (0x00040ed4) clock_digital_number_pane_cp02_ParamLimits

0x616a,	// (0x00040ed4) clock_digital_number_pane_cp02

0x6176,	// (0x00040ee0) clock_digital_number_pane_cp03_ParamLimits

0x6176,	// (0x00040ee0) clock_digital_number_pane_cp03

0x6182,	// (0x00040eec) clock_digital_number_pane_cp04_ParamLimits

0x6182,	// (0x00040eec) clock_digital_number_pane_cp04

0x618e,	// (0x00040ef8) clock_digital_separator_pane_ParamLimits

0x618e,	// (0x00040ef8) clock_digital_separator_pane

0x619a,	// (0x00040f04) popup_clock_digital_window_t1_ParamLimits

0x619a,	// (0x00040f04) popup_clock_digital_window_t1

0x776b,	// (0x000424d5) clock_digital_number_pane_g1

0x776b,	// (0x000424d5) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0004a4b6) clock_digital_number_pane_g

0x776b,	// (0x000424d5) clock_digital_separator_pane_g1

0x776b,	// (0x000424d5) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0004a4b6) clock_digital_separator_pane_g

0x96f7,	// (0x00044461) aid_fill_nsta_ParamLimits

0x9847,	// (0x000445b1) indicator_nsta_pane_ParamLimits

0x99d7,	// (0x00044741) popup_clock_analogue_window

0x99d7,	// (0x00044741) popup_clock_digital_window

0x7855,	// (0x000425bf) grid_indicator_nsta_pane_ParamLimits

0xbc9b,	// (0x00046a05) clock_nsta_pane_t2

0x0001,

0xfad6,	// (0x0004a840) clock_nsta_pane_t

0x6103,	// (0x00040e6d) aid_size_max_handle

0x610d,	// (0x00040e77) aid_size_min_handle

0x8d3a,	// (0x00043aa4) editor_scroll_pane

0xca59,	// (0x000477c3) ex_editor_pane

0x825e,	// (0x00042fc8) scroll_pane_cp13

0x807b,	// (0x00042de5) scroll_pane_cp14

0x8776,	// (0x000434e0) scroll_pane_cp36

0x87a4,	// (0x0004350e) list_single_graphic_hl_pane_cp2_ParamLimits

0x87a4,	// (0x0004350e) list_single_graphic_hl_pane_cp2

0x68c3,	// (0x0004162d) list_single_graphic_hl_pane_ParamLimits

0x68c3,	// (0x0004162d) list_single_graphic_hl_pane

0x5901,	// (0x0004066b) aid_size_min_hl_cp1

0xca61,	// (0x000477cb) list_highlight_pane_cp34_ParamLimits

0xca61,	// (0x000477cb) list_highlight_pane_cp34

0xca72,	// (0x000477dc) list_single_graphic_hl_pane_g1_ParamLimits

0xca72,	// (0x000477dc) list_single_graphic_hl_pane_g1

0x590a,	// (0x00040674) list_single_graphic_hl_pane_g2_ParamLimits

0x590a,	// (0x00040674) list_single_graphic_hl_pane_g2

0x590a,	// (0x00040674) list_single_graphic_hl_pane_g3_ParamLimits

0x590a,	// (0x00040674) list_single_graphic_hl_pane_g3

0x69b8,	// (0x00041722) list_single_graphic_hl_pane_g4_ParamLimits

0x69b8,	// (0x00041722) list_single_graphic_hl_pane_g4

0x6e0a,	// (0x00041b74) list_single_graphic_hl_pane_g5_ParamLimits

0x6e0a,	// (0x00041b74) list_single_graphic_hl_pane_g5

0x0004,

0xfc08,	// (0x0004a972) list_single_graphic_hl_pane_g_ParamLimits

0xfc08,	// (0x0004a972) list_single_graphic_hl_pane_g

0x5916,	// (0x00040680) list_single_graphic_hl_pane_t1_ParamLimits

0x5916,	// (0x00040680) list_single_graphic_hl_pane_t1

0xca7f,	// (0x000477e9) aid_size_min_hl_cp2

0xca88,	// (0x000477f2) list_highlight_pane_cp34_cp2_ParamLimits

0xca88,	// (0x000477f2) list_highlight_pane_cp34_cp2

0xca72,	// (0x000477dc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca72,	// (0x000477dc) list_single_graphic_hl_pane_g1_cp2

0xca95,	// (0x000477ff) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca95,	// (0x000477ff) list_single_graphic_hl_pane_g2_cp2

0xcaa1,	// (0x0004780b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcaa1,	// (0x0004780b) list_single_graphic_hl_pane_g3_cp2

0x907e,	// (0x00043de8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x907e,	// (0x00043de8) list_single_graphic_hl_pane_g4_cp2

0xcaaf,	// (0x00047819) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcaaf,	// (0x00047819) list_single_graphic_hl_pane_g5_cp2

0x6471,	// (0x000411db) control_pane_g4_ParamLimits

0x6471,	// (0x000411db) control_pane_g4

0x90c4,	// (0x00043e2e) bg_popup_sub_pane_cp10_ParamLimits

0xc24e,	// (0x00046fb8) list_choice_list_pane_ParamLimits

0xc25d,	// (0x00046fc7) scroll_pane_cp23

0x7adf,	// (0x00042849) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8cb,	// (0x00047635) list_preview_fixed_pane_ParamLimits

0xc8e1,	// (0x0004764b) list_preview_fixed_pane_cp_ParamLimits

0xc8e1,	// (0x0004764b) list_preview_fixed_pane_cp

0xc8ed,	// (0x00047657) popup_preview_fixed_window_g1_ParamLimits

0xc8ed,	// (0x00047657) popup_preview_fixed_window_g1

0xc8f9,	// (0x00047663) popup_preview_fixed_window_g2_ParamLimits

0xc8f9,	// (0x00047663) popup_preview_fixed_window_g2

0x0002,

0xfb97,	// (0x0004a901) popup_preview_fixed_window_g_ParamLimits

0xfb97,	// (0x0004a901) popup_preview_fixed_window_g

0x6075,	// (0x00040ddf) aid_navi_side_left_pane_ParamLimits

0x608a,	// (0x00040df4) aid_navi_side_right_pane_ParamLimits

0x60a2,	// (0x00040e0c) navi_icon_pane_stacon_ParamLimits

0x60b6,	// (0x00040e20) navi_navi_pane_stacon_ParamLimits

0x60a2,	// (0x00040e0c) navi_text_pane_stacon_ParamLimits

0x7761,	// (0x000424cb) main_text_info_pane

0xcad9,	// (0x00047843) listscroll_text_info_pane

0xcae1,	// (0x0004784b) list_text_info_pane_ParamLimits

0xcae1,	// (0x0004784b) list_text_info_pane

0xcaf0,	// (0x0004785a) scroll_pane_cp24_ParamLimits

0xcaf0,	// (0x0004785a) scroll_pane_cp24

0xcb0e,	// (0x00047878) list_text_info_pane_t1_ParamLimits

0xcb0e,	// (0x00047878) list_text_info_pane_t1

0x910a,	// (0x00043e74) popup_fast_swap2_window_ParamLimits

0x910a,	// (0x00043e74) popup_fast_swap2_window

0xcb33,	// (0x0004789d) aid_size_cell_fast2

0x7761,	// (0x000424cb) bg_popup_window_pane_cp17

0xa08a,	// (0x00044df4) heading_pane_cp2

0x7d3f,	// (0x00042aa9) listscroll_fast2_pane

0xcb3d,	// (0x000478a7) grid_fast2_pane

0xcb47,	// (0x000478b1) listscroll_fast2_pane_g1

0xcb51,	// (0x000478bb) listscroll_fast2_pane_g2

0x0001,

0xfc13,	// (0x0004a97d) listscroll_fast2_pane_g

0x825e,	// (0x00042fc8) scroll_pane_cp26

0xcb5b,	// (0x000478c5) cell_fast2_pane_ParamLimits

0xcb5b,	// (0x000478c5) cell_fast2_pane

0xcb72,	// (0x000478dc) cell_fast2_pane_g1

0xcb7b,	// (0x000478e5) cell_fast2_pane_g2

0xcb84,	// (0x000478ee) cell_fast2_pane_g3

0x0002,

0xfc18,	// (0x0004a982) cell_fast2_pane_g

0x7e38,	// (0x00042ba2) grid_highlight_pane_cp9

0x7e4d,	// (0x00042bb7) main_eswt_pane_ParamLimits

0x7e4d,	// (0x00042bb7) main_eswt_pane

0xcb05,	// (0x0004786f) list_single_text_info_pane

0xcb8c,	// (0x000478f6) eswt_ctrl_button_pane

0xcb8c,	// (0x000478f6) eswt_ctrl_canvas_pane

0xcb94,	// (0x000478fe) eswt_ctrl_combo_pane

0xcb8c,	// (0x000478f6) eswt_ctrl_default_pane

0xcb8c,	// (0x000478f6) eswt_ctrl_label_pane

0xcb9c,	// (0x00047906) eswt_ctrl_wait_pane

0xcba4,	// (0x0004790e) eswt_shell_pane

0x7761,	// (0x000424cb) listscroll_eswt_app_pane

0xcbc4,	// (0x0004792e) popup_eswt_tasktip_window_ParamLimits

0xcbc4,	// (0x0004792e) popup_eswt_tasktip_window

0x9cf2,	// (0x00044a5c) bg_popup_window_pane_cp18

0xcbd5,	// (0x0004793f) eswt_control_pane_g1_ParamLimits

0xcbd5,	// (0x0004793f) eswt_control_pane_g1

0xcbe2,	// (0x0004794c) eswt_control_pane_g2_ParamLimits

0xcbe2,	// (0x0004794c) eswt_control_pane_g2

0xcbef,	// (0x00047959) eswt_control_pane_g3_ParamLimits

0xcbef,	// (0x00047959) eswt_control_pane_g3

0xcbfc,	// (0x00047966) eswt_control_pane_g4_ParamLimits

0xcbfc,	// (0x00047966) eswt_control_pane_g4

0x0003,

0xfc1f,	// (0x0004a989) eswt_control_pane_g_ParamLimits

0xfc1f,	// (0x0004a989) eswt_control_pane_g

0x80dc,	// (0x00042e46) bg_button_pane_ParamLimits

0x80dc,	// (0x00042e46) bg_button_pane

0x7e4d,	// (0x00042bb7) common_borders_pane_copy2_ParamLimits

0x7e4d,	// (0x00042bb7) common_borders_pane_copy2

0xcc09,	// (0x00047973) control_button_pane_g1_ParamLimits

0xcc09,	// (0x00047973) control_button_pane_g1

0xcc15,	// (0x0004797f) control_button_pane_g2_ParamLimits

0xcc15,	// (0x0004797f) control_button_pane_g2

0xcc21,	// (0x0004798b) control_button_pane_g3_ParamLimits

0xcc21,	// (0x0004798b) control_button_pane_g3

0x0002,

0xfc28,	// (0x0004a992) control_button_pane_g_ParamLimits

0xfc28,	// (0x0004a992) control_button_pane_g

0xcc35,	// (0x0004799f) control_button_pane_t1

0xcc43,	// (0x000479ad) control_button_pane_t2

0x0001,

0xfc2f,	// (0x0004a999) control_button_pane_t

0x9c00,	// (0x0004496a) bg_button_pane_g1

0x9c08,	// (0x00044972) bg_button_pane_g2

0x9c10,	// (0x0004497a) bg_button_pane_g3

0x9c18,	// (0x00044982) bg_button_pane_g4

0x9c20,	// (0x0004498a) bg_button_pane_g5

0x9c28,	// (0x00044992) bg_button_pane_g6

0x9c30,	// (0x0004499a) bg_button_pane_g7

0x9c38,	// (0x000449a2) bg_button_pane_g8

0x9c40,	// (0x000449aa) bg_button_pane_g9

0x0008,

0xf8a4,	// (0x0004a60e) bg_button_pane_g

0xc209,	// (0x00046f73) common_borders_pane_ParamLimits

0xc209,	// (0x00046f73) common_borders_pane

0xcbd5,	// (0x0004793f) eswt_control_pane_g1_copy1_ParamLimits

0xcbd5,	// (0x0004793f) eswt_control_pane_g1_copy1

0xcbe2,	// (0x0004794c) eswt_control_pane_g2_copy1_ParamLimits

0xcbe2,	// (0x0004794c) eswt_control_pane_g2_copy1

0xcbef,	// (0x00047959) eswt_control_pane_g3_copy1_ParamLimits

0xcbef,	// (0x00047959) eswt_control_pane_g3_copy1

0xcbfc,	// (0x00047966) eswt_control_pane_g4_copy1_ParamLimits

0xcbfc,	// (0x00047966) eswt_control_pane_g4_copy1

0xc244,	// (0x00046fae) bg_eswt_ctrl_canvas_pane_g1

0xc209,	// (0x00046f73) common_borders_pane_cp2_ParamLimits

0xc209,	// (0x00046f73) common_borders_pane_cp2

0xc209,	// (0x00046f73) common_borders_pane_cp3_ParamLimits

0xc209,	// (0x00046f73) common_borders_pane_cp3

0xcc51,	// (0x000479bb) separator_horizontal_pane

0xcc59,	// (0x000479c3) separator_vertical_pane

0xcbd5,	// (0x0004793f) eswt_control_pane_g1_copy2_ParamLimits

0xcbd5,	// (0x0004793f) eswt_control_pane_g1_copy2

0xcbe2,	// (0x0004794c) eswt_control_pane_g2_copy2_ParamLimits

0xcbe2,	// (0x0004794c) eswt_control_pane_g2_copy2

0xcbef,	// (0x00047959) eswt_control_pane_g3_copy2_ParamLimits

0xcbef,	// (0x00047959) eswt_control_pane_g3_copy2

0xcbfc,	// (0x00047966) eswt_control_pane_g4_copy2_ParamLimits

0xcbfc,	// (0x00047966) eswt_control_pane_g4_copy2

0x7761,	// (0x000424cb) common_borders_pane_cp4

0xcc62,	// (0x000479cc) separator_horizontal_pane_g1

0xcc6b,	// (0x000479d5) separator_horizontal_pane_g2

0xcc74,	// (0x000479de) separator_horizontal_pane_g3

0x0002,

0xfc34,	// (0x0004a99e) separator_horizontal_pane_g

0xcbd5,	// (0x0004793f) eswt_control_pane_g1_copy3_ParamLimits

0xcbd5,	// (0x0004793f) eswt_control_pane_g1_copy3

0xcbe2,	// (0x0004794c) eswt_control_pane_g2_copy3_ParamLimits

0xcbe2,	// (0x0004794c) eswt_control_pane_g2_copy3

0xcbef,	// (0x00047959) eswt_control_pane_g3_copy3_ParamLimits

0xcbef,	// (0x00047959) eswt_control_pane_g3_copy3

0xcbfc,	// (0x00047966) eswt_control_pane_g4_copy3_ParamLimits

0xcbfc,	// (0x00047966) eswt_control_pane_g4_copy3

0x7761,	// (0x000424cb) common_borders_pane_cp5

0xcc7d,	// (0x000479e7) separator_vertical_pane_g1

0xcc86,	// (0x000479f0) separator_vertical_pane_g2

0xcc8f,	// (0x000479f9) separator_vertical_pane_g3

0x0002,

0xfc3b,	// (0x0004a9a5) separator_vertical_pane_g

0xcbd5,	// (0x0004793f) eswt_control_pane_g1_copy4_ParamLimits

0xcbd5,	// (0x0004793f) eswt_control_pane_g1_copy4

0xcbe2,	// (0x0004794c) eswt_control_pane_g2_copy4_ParamLimits

0xcbe2,	// (0x0004794c) eswt_control_pane_g2_copy4

0xcbef,	// (0x00047959) eswt_control_pane_g3_copy4_ParamLimits

0xcbef,	// (0x00047959) eswt_control_pane_g3_copy4

0xcbfc,	// (0x00047966) eswt_control_pane_g4_copy4_ParamLimits

0xcbfc,	// (0x00047966) eswt_control_pane_g4_copy4

0xcc98,	// (0x00047a02) eswt_ctrl_combo_button_pane

0xcca0,	// (0x00047a0a) eswt_ctrl_input_pane

0xcca8,	// (0x00047a12) popup_choice_list_window_cp70

0xccb0,	// (0x00047a1a) eswt_ctrl_input_pane_t1

0x7761,	// (0x000424cb) input_focus_pane_cp70

0xc209,	// (0x00046f73) bg_button_pane_cp70_ParamLimits

0xc209,	// (0x00046f73) bg_button_pane_cp70

0xccbe,	// (0x00047a28) eswt_ctrl_combo_button_pane_g1

0xccc6,	// (0x00047a30) wait_bar_pane_cp70

0x9cf2,	// (0x00044a5c) bg_popup_window_pane_cp70_ParamLimits

0x9cf2,	// (0x00044a5c) bg_popup_window_pane_cp70

0xccce,	// (0x00047a38) popup_eswt_tasktip_window_t1

0xcce4,	// (0x00047a4e) wait_bar_pane_cp71_ParamLimits

0xcce4,	// (0x00047a4e) wait_bar_pane_cp71

0xccf0,	// (0x00047a5a) grid_eswt_app_pane

0x8589,	// (0x000432f3) scroll_pane_cp70

0xccf9,	// (0x00047a63) cell_eswt_app_pane_ParamLimits

0xccf9,	// (0x00047a63) cell_eswt_app_pane

0xcd2b,	// (0x00047a95) cell_eswt_app_pane_g1_ParamLimits

0xcd2b,	// (0x00047a95) cell_eswt_app_pane_g1

0xcd5a,	// (0x00047ac4) cell_eswt_app_pane_g2_ParamLimits

0xcd5a,	// (0x00047ac4) cell_eswt_app_pane_g2

0x0001,

0xfc42,	// (0x0004a9ac) cell_eswt_app_pane_g_ParamLimits

0xfc42,	// (0x0004a9ac) cell_eswt_app_pane_g

0xcd83,	// (0x00047aed) cell_eswt_app_pane_t1_ParamLimits

0xcd83,	// (0x00047aed) cell_eswt_app_pane_t1

0xcdb5,	// (0x00047b1f) grid_highlight_pane_cp70_ParamLimits

0xcdb5,	// (0x00047b1f) grid_highlight_pane_cp70

0xb152,	// (0x00045ebc) set_content_pane_g1

0x8fea,	// (0x00043d54) status_small_volume_pane

0x6e1e,	// (0x00041b88) status_small_volume_pane_g1

0x6e26,	// (0x00041b90) volume_small2_pane

0x6e2f,	// (0x00041b99) volume_small2_pane_g1

0x6e38,	// (0x00041ba2) volume_small2_pane_g2

0x6e41,	// (0x00041bab) volume_small2_pane_g3

0x6e4a,	// (0x00041bb4) volume_small2_pane_g4

0x6e53,	// (0x00041bbd) volume_small2_pane_g5

0x6e5c,	// (0x00041bc6) volume_small2_pane_g6

0x6e65,	// (0x00041bcf) volume_small2_pane_g7

0x6e6e,	// (0x00041bd8) volume_small2_pane_g8

0x6e77,	// (0x00041be1) volume_small2_pane_g9

0x6e80,	// (0x00041bea) volume_small2_pane_g10

0x0009,

0xfc47,	// (0x0004a9b1) volume_small2_pane_g

0xc630,	// (0x0004739a) fep_vkb_top_text_pane_g1_ParamLimits

0xc64b,	// (0x000473b5) fep_vkb_top_text_pane_t1_ParamLimits

0xc905,	// (0x0004766f) popup_preview_fixed_window_g3_ParamLimits

0xc905,	// (0x0004766f) popup_preview_fixed_window_g3

0x961b,	// (0x00044385) popup_toolbar_trans_pane

0xaff7,	// (0x00045d61) aid_height_set_list_ParamLimits

0xb008,	// (0x00045d72) aid_size_parent_ParamLimits

0x90c4,	// (0x00043e2e) list_highlight_pane_cp2_ParamLimits

0xb152,	// (0x00045ebc) set_content_pane_g1_ParamLimits

0xb25b,	// (0x00045fc5) list_single_image_pane_ParamLimits

0xb25b,	// (0x00045fc5) list_single_image_pane

0xcdc1,	// (0x00047b2b) aid_size_cell_image_ParamLimits

0xcdc1,	// (0x00047b2b) aid_size_cell_image

0xcdce,	// (0x00047b38) grid_single_image_pane_ParamLimits

0xcdce,	// (0x00047b38) grid_single_image_pane

0x80f6,	// (0x00042e60) list_single_image_pane_g1_ParamLimits

0x80f6,	// (0x00042e60) list_single_image_pane_g1

0x8102,	// (0x00042e6c) list_single_image_pane_g2_ParamLimits

0x8102,	// (0x00042e6c) list_single_image_pane_g2

0x0001,

0xfc5c,	// (0x0004a9c6) list_single_image_pane_g_ParamLimits

0xfc5c,	// (0x0004a9c6) list_single_image_pane_g

0xcddc,	// (0x00047b46) list_single_image_pane_t1_ParamLimits

0xcddc,	// (0x00047b46) list_single_image_pane_t1

0xcdf2,	// (0x00047b5c) cell_image_list_pane_ParamLimits

0xcdf2,	// (0x00047b5c) cell_image_list_pane

0xce08,	// (0x00047b72) cell_image_list_pane_g1

0xce11,	// (0x00047b7b) cell_image_list_pane_g2

0x0001,

0xfc61,	// (0x0004a9cb) cell_image_list_pane_g

0xce1a,	// (0x00047b84) aid_size_cell_tb_trans_pane

0x80dc,	// (0x00042e46) bg_tb_trans_pane

0xce2c,	// (0x00047b96) grid_tb_trans_pane

0x9c00,	// (0x0004496a) bg_tb_trans_pane_g1

0x9c08,	// (0x00044972) bg_tb_trans_pane_g2

0x9c10,	// (0x0004497a) bg_tb_trans_pane_g3

0x9c18,	// (0x00044982) bg_tb_trans_pane_g4

0x9c20,	// (0x0004498a) bg_tb_trans_pane_g5

0x9c38,	// (0x000449a2) bg_tb_trans_pane_g6

0x9c40,	// (0x000449aa) bg_tb_trans_pane_g7

0x9c28,	// (0x00044992) bg_tb_trans_pane_g8

0x9c30,	// (0x0004499a) bg_tb_trans_pane_g9

0x0008,

0xfc66,	// (0x0004a9d0) bg_tb_trans_pane_g

0xce40,	// (0x00047baa) cell_toolbar_trans_pane_ParamLimits

0xce40,	// (0x00047baa) cell_toolbar_trans_pane

0xc244,	// (0x00046fae) cell_toolbar_trans_pane_g1

0xbe65,	// (0x00046bcf) list_form2_midp_pane_t1

0xbe73,	// (0x00046bdd) list_form2_midp_pane_t2

0x0001,

0xfb0f,	// (0x0004a879) list_form2_midp_pane_t

0xbe81,	// (0x00046beb) scroll_pane_cp51_ParamLimits

0xc048,	// (0x00046db2) form2_midp_wait_pane_g1

0xc051,	// (0x00046dbb) form2_midp_wait_pane_g2

0xc05a,	// (0x00046dc4) form2_midp_wait_pane_g3

0x0002,

0xfb24,	// (0x0004a88e) form2_midp_wait_pane_g

0x7855,	// (0x000425bf) list_highlight_pane_cp21_ParamLimits

0xc09e,	// (0x00046e08) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0ad,	// (0x00046e17) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb214,	// (0x00045f7e) list_single_2graphic_im_pane_ParamLimits

0xb214,	// (0x00045f7e) list_single_2graphic_im_pane

0xce66,	// (0x00047bd0) list_single_2graphic_im_pane_g1_ParamLimits

0xce66,	// (0x00047bd0) list_single_2graphic_im_pane_g1

0xce77,	// (0x00047be1) list_single_2graphic_im_pane_g2_ParamLimits

0xce77,	// (0x00047be1) list_single_2graphic_im_pane_g2

0xce83,	// (0x00047bed) list_single_2graphic_im_pane_g3_ParamLimits

0xce83,	// (0x00047bed) list_single_2graphic_im_pane_g3

0x0003,

0xfc79,	// (0x0004a9e3) list_single_2graphic_im_pane_g_ParamLimits

0xfc79,	// (0x0004a9e3) list_single_2graphic_im_pane_g

0xcea3,	// (0x00047c0d) list_single_2graphic_im_pane_t1_ParamLimits

0xcea3,	// (0x00047c0d) list_single_2graphic_im_pane_t1

0xc911,	// (0x0004767b) list_single_graphic_2heading_pane_fp_ParamLimits

0xc911,	// (0x0004767b) list_single_graphic_2heading_pane_fp

0x57e3,	// (0x0004054d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x57e3,	// (0x0004054d) list_single_graphic_2heading_pane_fp_g1

0xc92a,	// (0x00047694) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc92a,	// (0x00047694) list_single_graphic_2heading_pane_fp_g2

0x5f3f,	// (0x00040ca9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5f3f,	// (0x00040ca9) list_single_graphic_2heading_pane_fp_g3

0x6ce1,	// (0x00041a4b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6ce1,	// (0x00041a4b) list_single_graphic_2heading_pane_fp_g4

0xc936,	// (0x000476a0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc936,	// (0x000476a0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba7,	// (0x0004a911) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0004a911) list_single_graphic_2heading_pane_fp_g

0x592c,	// (0x00040696) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x592c,	// (0x00040696) list_single_graphic_2heading_pane_fp_t1

0x581b,	// (0x00040585) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x581b,	// (0x00040585) list_single_graphic_2heading_pane_fp_t2

0x5942,	// (0x000406ac) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5942,	// (0x000406ac) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc82,	// (0x0004a9ec) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc82,	// (0x0004a9ec) list_single_graphic_2heading_pane_fp_t

0xc2e4,	// (0x0004704e) fep_hwr_write_pane_g5_ParamLimits

0xc2e4,	// (0x0004704e) fep_hwr_write_pane_g5

0xc2fe,	// (0x00047068) fep_hwr_write_pane_g6_ParamLimits

0xc2fe,	// (0x00047068) fep_hwr_write_pane_g6

0xcba4,	// (0x0004790e) eswt_shell_pane_ParamLimits

0x9cf2,	// (0x00044a5c) bg_popup_window_pane_cp18_ParamLimits

0xaf4e,	// (0x00045cb8) heading_pane_cp70

0xccce,	// (0x00047a38) popup_eswt_tasktip_window_t1_ParamLimits

0x974e,	// (0x000444b8) aid_touch_tab_arrow_left

0x975d,	// (0x000444c7) aid_touch_tab_arrow_right

0x779d,	// (0x00042507) title_pane_g3_ParamLimits

0x779d,	// (0x00042507) title_pane_g3

0x809b,	// (0x00042e05) set_value_pane_g1

0x961b,	// (0x00044385) popup_toolbar_trans_pane_ParamLimits

0xce1a,	// (0x00047b84) aid_size_cell_tb_trans_pane_ParamLimits

0x80dc,	// (0x00042e46) bg_tb_trans_pane_ParamLimits

0xce2c,	// (0x00047b96) grid_tb_trans_pane_ParamLimits

0x7adf,	// (0x00042849) cont_note_pane_ParamLimits

0x7adf,	// (0x00042849) cont_note_pane

0x7e4d,	// (0x00042bb7) cont_snote2_single_text_pane_ParamLimits

0x7e4d,	// (0x00042bb7) cont_snote2_single_text_pane

0x7e4d,	// (0x00042bb7) cont_snote2_single_graphic_pane_ParamLimits

0x7e4d,	// (0x00042bb7) cont_snote2_single_graphic_pane

0xa275,	// (0x00044fdf) cont_note_wait_pane_ParamLimits

0xa275,	// (0x00044fdf) cont_note_wait_pane

0xa275,	// (0x00044fdf) cont_note_image_pane_ParamLimits

0xa275,	// (0x00044fdf) cont_note_image_pane

0xced4,	// (0x00047c3e) popup_note2_window_g1_ParamLimits

0xced4,	// (0x00047c3e) popup_note2_window_g1

0xcf05,	// (0x00047c6f) popup_note2_window_t1_ParamLimits

0xcf05,	// (0x00047c6f) popup_note2_window_t1

0xcf4a,	// (0x00047cb4) popup_note2_window_t2_ParamLimits

0xcf4a,	// (0x00047cb4) popup_note2_window_t2

0xcf8f,	// (0x00047cf9) popup_note2_window_t3_ParamLimits

0xcf8f,	// (0x00047cf9) popup_note2_window_t3

0xcfd4,	// (0x00047d3e) popup_note2_window_t4_ParamLimits

0xcfd4,	// (0x00047d3e) popup_note2_window_t4

0x7b63,	// (0x000428cd) popup_note2_window_t5_ParamLimits

0x7b63,	// (0x000428cd) popup_note2_window_t5

0x0004,

0xfc8e,	// (0x0004a9f8) popup_note2_window_t_ParamLimits

0xfc8e,	// (0x0004a9f8) popup_note2_window_t

0xd003,	// (0x00047d6d) popup_note2_image_window_g1_ParamLimits

0xd003,	// (0x00047d6d) popup_note2_image_window_g1

0xd00f,	// (0x00047d79) popup_note2_image_window_g2_ParamLimits

0xd00f,	// (0x00047d79) popup_note2_image_window_g2

0x0001,

0xfc99,	// (0x0004aa03) popup_note2_image_window_g_ParamLimits

0xfc99,	// (0x0004aa03) popup_note2_image_window_g

0xd021,	// (0x00047d8b) popup_note2_image_window_t1_ParamLimits

0xd021,	// (0x00047d8b) popup_note2_image_window_t1

0xd039,	// (0x00047da3) popup_note2_image_window_t2_ParamLimits

0xd039,	// (0x00047da3) popup_note2_image_window_t2

0xd051,	// (0x00047dbb) popup_note2_image_window_t3_ParamLimits

0xd051,	// (0x00047dbb) popup_note2_image_window_t3

0x0002,

0xfc9e,	// (0x0004aa08) popup_note2_image_window_t_ParamLimits

0xfc9e,	// (0x0004aa08) popup_note2_image_window_t

0xa283,	// (0x00044fed) popup_note2_wait_window_g1_ParamLimits

0xa283,	// (0x00044fed) popup_note2_wait_window_g1

0xd06d,	// (0x00047dd7) popup_note2_wait_window_g2_ParamLimits

0xd06d,	// (0x00047dd7) popup_note2_wait_window_g2

0xa29b,	// (0x00045005) popup_note2_wait_window_g3_ParamLimits

0xa29b,	// (0x00045005) popup_note2_wait_window_g3

0x0002,

0xfca5,	// (0x0004aa0f) popup_note2_wait_window_g_ParamLimits

0xfca5,	// (0x0004aa0f) popup_note2_wait_window_g

0xd079,	// (0x00047de3) popup_note2_wait_window_t1_ParamLimits

0xd079,	// (0x00047de3) popup_note2_wait_window_t1

0xd097,	// (0x00047e01) popup_note2_wait_window_t2_ParamLimits

0xd097,	// (0x00047e01) popup_note2_wait_window_t2

0xd0b5,	// (0x00047e1f) popup_note2_wait_window_t3_ParamLimits

0xd0b5,	// (0x00047e1f) popup_note2_wait_window_t3

0xd0c7,	// (0x00047e31) popup_note2_wait_window_t4_ParamLimits

0xd0c7,	// (0x00047e31) popup_note2_wait_window_t4

0x0003,

0xfcac,	// (0x0004aa16) popup_note2_wait_window_t_ParamLimits

0xfcac,	// (0x0004aa16) popup_note2_wait_window_t

0xd0d9,	// (0x00047e43) wait_bar2_pane_ParamLimits

0xd0d9,	// (0x00047e43) wait_bar2_pane

0xd0f1,	// (0x00047e5b) popup_snote2_single_text_window_g1_ParamLimits

0xd0f1,	// (0x00047e5b) popup_snote2_single_text_window_g1

0xd119,	// (0x00047e83) popup_snote2_single_text_window_t1_ParamLimits

0xd119,	// (0x00047e83) popup_snote2_single_text_window_t1

0xd165,	// (0x00047ecf) popup_snote2_single_text_window_t2_ParamLimits

0xd165,	// (0x00047ecf) popup_snote2_single_text_window_t2

0xd1b1,	// (0x00047f1b) popup_snote2_single_text_window_t3_ParamLimits

0xd1b1,	// (0x00047f1b) popup_snote2_single_text_window_t3

0xd1f2,	// (0x00047f5c) popup_snote2_single_text_window_t4_ParamLimits

0xd1f2,	// (0x00047f5c) popup_snote2_single_text_window_t4

0xd228,	// (0x00047f92) popup_snote2_single_text_window_t5_ParamLimits

0xd228,	// (0x00047f92) popup_snote2_single_text_window_t5

0x0004,

0xfcb5,	// (0x0004aa1f) popup_snote2_single_text_window_t_ParamLimits

0xfcb5,	// (0x0004aa1f) popup_snote2_single_text_window_t

0xd253,	// (0x00047fbd) popup_snote2_single_graphic_window_g1_ParamLimits

0xd253,	// (0x00047fbd) popup_snote2_single_graphic_window_g1

0xd27b,	// (0x00047fe5) popup_snote2_single_graphic_window_g2_ParamLimits

0xd27b,	// (0x00047fe5) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc0,	// (0x0004aa2a) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc0,	// (0x0004aa2a) popup_snote2_single_graphic_window_g

0xd2a3,	// (0x0004800d) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2a3,	// (0x0004800d) popup_snote2_single_graphic_window_t1

0xd2ef,	// (0x00048059) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2ef,	// (0x00048059) popup_snote2_single_graphic_window_t2

0xd1b1,	// (0x00047f1b) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1b1,	// (0x00047f1b) popup_snote2_single_graphic_window_t3

0xd1f2,	// (0x00047f5c) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1f2,	// (0x00047f5c) popup_snote2_single_graphic_window_t4

0xd228,	// (0x00047f92) popup_snote2_single_graphic_window_t5_ParamLimits

0xd228,	// (0x00047f92) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc5,	// (0x0004aa2f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc5,	// (0x0004aa2f) popup_snote2_single_graphic_window_t

0xbd2b,	// (0x00046a95) clock_nsta_pane_cp2_t1

0xbd2b,	// (0x00046a95) clock_nsta_pane_cp2_t2

0x0001,

0xfae5,	// (0x0004a84f) clock_nsta_pane_cp2_t

0x528b,	// (0x0003fff5) form_field_data_wide_pane_g1_ParamLimits

0x80f6,	// (0x00042e60) form_field_data_wide_pane_g2_ParamLimits

0x80f6,	// (0x00042e60) form_field_data_wide_pane_g2

0x8102,	// (0x00042e6c) form_field_data_wide_pane_g3_ParamLimits

0x8102,	// (0x00042e6c) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0004a42e) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0004a42e) form_field_data_wide_pane_g

0xbc37,	// (0x000469a1) grid_touch_3_pane_ParamLimits

0xbc37,	// (0x000469a1) grid_touch_3_pane

0xd33b,	// (0x000480a5) cell_touch_3_pane_ParamLimits

0xd33b,	// (0x000480a5) cell_touch_3_pane

0xc244,	// (0x00046fae) cell_touch_3_pane_g1

0xc244,	// (0x00046fae) cell_touch_3_pane_g2

0x0001,

0xfb6a,	// (0x0004a8d4) cell_touch_3_pane_g

0x7b95,	// (0x000428ff) cont_query_data_pane

0x7b9d,	// (0x00042907) cont_query_data_pane_cp1

0xd36e,	// (0x000480d8) button_value_adjust_pane_cp7

0xd376,	// (0x000480e0) query_popup_pane_cp3

0x8816,	// (0x00043580) bg_popup_sub_pane_cp22_ParamLimits

0x61b9,	// (0x00040f23) navi_navi_volume_pane_cp2

0x61d4,	// (0x00040f3e) popup_side_volume_key_window_g2

0x61e3,	// (0x00040f4d) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0004a4c0) popup_side_volume_key_window_g

0x6200,	// (0x00040f6a) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0004a4c7) popup_side_volume_key_window_t

0x8ad1,	// (0x0004383b) popup_side_volume_key_window_ParamLimits

0x4e7e,	// (0x0003fbe8) list_double_graphic_pane_g4_ParamLimits

0x4e7e,	// (0x0003fbe8) list_double_graphic_pane_g4

0xb243,	// (0x00045fad) list_single_2heading_msg_pane_ParamLimits

0xb243,	// (0x00045fad) list_single_2heading_msg_pane

0x6e89,	// (0x00041bf3) list_single_2heading_msg_pane_g1_ParamLimits

0x6e89,	// (0x00041bf3) list_single_2heading_msg_pane_g1

0x907e,	// (0x00043de8) list_single_2heading_msg_pane_g2_ParamLimits

0x907e,	// (0x00043de8) list_single_2heading_msg_pane_g2

0x6e95,	// (0x00041bff) list_single_2heading_msg_pane_g3_ParamLimits

0x6e95,	// (0x00041bff) list_single_2heading_msg_pane_g3

0x6ea1,	// (0x00041c0b) list_single_2heading_msg_pane_g4_ParamLimits

0x6ea1,	// (0x00041c0b) list_single_2heading_msg_pane_g4

0x0003,

0xfcd0,	// (0x0004aa3a) list_single_2heading_msg_pane_g_ParamLimits

0xfcd0,	// (0x0004aa3a) list_single_2heading_msg_pane_g

0x5962,	// (0x000406cc) list_single_2heading_msg_pane_t1_ParamLimits

0x5962,	// (0x000406cc) list_single_2heading_msg_pane_t1

0x598a,	// (0x000406f4) list_single_2heading_msg_pane_t2_ParamLimits

0x598a,	// (0x000406f4) list_single_2heading_msg_pane_t2

0x59b9,	// (0x00040723) list_single_2heading_msg_pane_t3_ParamLimits

0x59b9,	// (0x00040723) list_single_2heading_msg_pane_t3

0x59f2,	// (0x0004075c) list_single_2heading_msg_pane_t4_ParamLimits

0x59f2,	// (0x0004075c) list_single_2heading_msg_pane_t4

0x0003,

0xfcd9,	// (0x0004aa43) list_single_2heading_msg_pane_t_ParamLimits

0xfcd9,	// (0x0004aa43) list_single_2heading_msg_pane_t

0x77a9,	// (0x00042513) title_pane_g4_ParamLimits

0x77a9,	// (0x00042513) title_pane_g4

0x5fc5,	// (0x00040d2f) title_pane_stacon_g3_ParamLimits

0x5fc5,	// (0x00040d2f) title_pane_stacon_g3

0xce97,	// (0x00047c01) list_single_2graphic_im_pane_g4_ParamLimits

0xce97,	// (0x00047c01) list_single_2graphic_im_pane_g4

0xaceb,	// (0x00045a55) popup_side_volume_key_window_cp

0xb561,	// (0x000462cb) main_idle_act2_pane_t1

0x65b8,	// (0x00041322) toolbar_button_pane_g10

0x8045,	// (0x00042daf) popup_toolbar_window_cp1

0xbd1c,	// (0x00046a86) clock_nsta_pane_cp_t1

0xbd1c,	// (0x00046a86) clock_nsta_pane_cp_t2

0x0001,

0xfae0,	// (0x0004a84a) clock_nsta_pane_cp_t

0x61b9,	// (0x00040f23) navi_navi_volume_pane_cp2_ParamLimits

0x61c8,	// (0x00040f32) popup_side_volume_key_window_g1_ParamLimits

0x61d4,	// (0x00040f3e) popup_side_volume_key_window_g2_ParamLimits

0x61e3,	// (0x00040f4d) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0004a4c0) popup_side_volume_key_window_g_ParamLimits

0x6a7b,	// (0x000417e5) fep_hwr_aid_pane

0x25f4,	// (0x0003d35e) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2b4,	// (0x0004701e) fep_hwr_top_pane_g1_ParamLimits

0xc2c6,	// (0x00047030) fep_hwr_top_pane_g2_ParamLimits

0x6b36,	// (0x000418a0) fep_hwr_top_pane_g3_ParamLimits

0xfb35,	// (0x0004a89f) fep_hwr_top_pane_g_ParamLimits

0x6b4b,	// (0x000418b5) fep_hwr_top_text_pane_ParamLimits

0xaaa0,	// (0x0004580a) aid_touch_tab_arrow_arrow_2

0xaaa9,	// (0x00045813) aid_touch_tab_arrow_left_2

0x6a8f,	// (0x000417f9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6ac6,	// (0x00041830) fep_hwr_prediction_pane

0xc42a,	// (0x00047194) fep_vkb_prediction_pane

0xc530,	// (0x0004729a) fep_vkb_side_pane_g3_ParamLimits

0xc530,	// (0x0004729a) fep_vkb_side_pane_g3

0xc4dc,	// (0x00047246) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc98a,	// (0x000476f4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc997,	// (0x00047701) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbdf,	// (0x0004a949) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd39d,	// (0x00048107) fep_hwr_prediction_pane_g1

0x6eb9,	// (0x00041c23) fep_hwr_prediction_pane_g2

0x6ec1,	// (0x00041c2b) fep_hwr_prediction_pane_g3

0x6ec9,	// (0x00041c33) fep_hwr_prediction_pane_g4

0x0003,

0xfce2,	// (0x0004aa4c) fep_hwr_prediction_pane_g

0xd39d,	// (0x00048107) fep_vkb_prediction_pane_g1

0xd3a7,	// (0x00048111) fep_vkb_prediction_pane_g2

0xd3af,	// (0x00048119) fep_vkb_prediction_pane_g3

0xd3b7,	// (0x00048121) fep_vkb_prediction_pane_g4

0x0003,

0xfceb,	// (0x0004aa55) fep_vkb_prediction_pane_g

0xb651,	// (0x000463bb) slider_set_pane_g3

0xb665,	// (0x000463cf) slider_set_pane_g4

0xb67d,	// (0x000463e7) slider_set_pane_g5

0xb651,	// (0x000463bb) slider_set_pane_g6

0x68ad,	// (0x00041617) slider_set_pane_g7

0xb199,	// (0x00045f03) slider_form_pane_g3

0xb1a2,	// (0x00045f0c) slider_form_pane_g4

0xb1aa,	// (0x00045f14) slider_form_pane_g5

0xb199,	// (0x00045f03) slider_form_pane_g6

0xb1b2,	// (0x00045f1c) slider_form_pane_g7

0xb871,	// (0x000465db) slider_set_pane_vc_g3

0xb87a,	// (0x000465e4) slider_set_pane_vc_g4

0xb883,	// (0x000465ed) slider_set_pane_vc_g5

0xb871,	// (0x000465db) slider_set_pane_vc_g6

0xb88c,	// (0x000465f6) slider_set_pane_vc_g7

0xb871,	// (0x000465db) slider_form_pane_vc_g1

0xb87a,	// (0x000465e4) slider_form_pane_vc_g2

0xb883,	// (0x000465ed) slider_form_pane_vc_g3

0xb871,	// (0x000465db) slider_form_pane_vc_g4

0xba41,	// (0x000467ab) slider_form_pane_vc_g5

0x0004,

0xfac6,	// (0x0004a830) slider_form_pane_vc_g

0x7761,	// (0x000424cb) main_idle_act3_pane

0xd3bf,	// (0x00048129) ai3_links_pane

0xd3c8,	// (0x00048132) popup_ai3_data_window_ParamLimits

0xd3c8,	// (0x00048132) popup_ai3_data_window

0x7761,	// (0x000424cb) grid_ai3_links_pane

0xd3e6,	// (0x00048150) cell_ai3_links_pane_ParamLimits

0xd3e6,	// (0x00048150) cell_ai3_links_pane

0xd400,	// (0x0004816a) bg_popup_sub_pane_cp11

0xd40d,	// (0x00048177) cell_ai3_links_pane_g1

0x7761,	// (0x000424cb) bg_popup_sub_pane_cp12

0xd432,	// (0x0004819c) heading_ai3_data_pane

0xd43a,	// (0x000481a4) list_ai3_gene_pane

0xd446,	// (0x000481b0) popup_ai3_data_window_g1

0xd44e,	// (0x000481b8) heading_ai3_data_pane_g1

0xd456,	// (0x000481c0) heading_ai3_data_pane_t1

0xd464,	// (0x000481ce) list_double_ai3_gene_pane_ParamLimits

0xd464,	// (0x000481ce) list_double_ai3_gene_pane

0xd471,	// (0x000481db) list_single_ai3_gene_pane_ParamLimits

0xd471,	// (0x000481db) list_single_ai3_gene_pane

0xc209,	// (0x00046f73) list_highlight_pane_cp7_ParamLimits

0xc209,	// (0x00046f73) list_highlight_pane_cp7

0xd47e,	// (0x000481e8) list_single_a13_gene_pane_t1_ParamLimits

0xd47e,	// (0x000481e8) list_single_a13_gene_pane_t1

0xd495,	// (0x000481ff) list_single_ai3_gene_pane_g1

0xd49e,	// (0x00048208) list_single_ai3_gene_pane_g2

0x0001,

0xfcf4,	// (0x0004aa5e) list_single_ai3_gene_pane_g

0xd4a6,	// (0x00048210) list_double_ai3_gene_pane_g1_ParamLimits

0xd4a6,	// (0x00048210) list_double_ai3_gene_pane_g1

0xd4b2,	// (0x0004821c) list_double_ai3_gene_pane_t1_ParamLimits

0xd4b2,	// (0x0004821c) list_double_ai3_gene_pane_t1

0xd4ce,	// (0x00048238) list_double_ai3_gene_pane_t2_ParamLimits

0xd4ce,	// (0x00048238) list_double_ai3_gene_pane_t2

0xd4e3,	// (0x0004824d) list_double_ai3_gene_pane_t3_ParamLimits

0xd4e3,	// (0x0004824d) list_double_ai3_gene_pane_t3

0x0002,

0xfcf9,	// (0x0004aa63) list_double_ai3_gene_pane_t_ParamLimits

0xfcf9,	// (0x0004aa63) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5958,	// (0x000406c2) aid_size_min_col_2

0xd387,	// (0x000480f1) aid_size_min_msg_ParamLimits

0xd387,	// (0x000480f1) aid_size_min_msg

0xc63c,	// (0x000473a6) fep_vkb_top_text_pane_g2_ParamLimits

0xc63c,	// (0x000473a6) fep_vkb_top_text_pane_g2

0x0001,

0xfb65,	// (0x0004a8cf) fep_vkb_top_text_pane_g_ParamLimits

0xfb65,	// (0x0004a8cf) fep_vkb_top_text_pane_g

0x7761,	// (0x000424cb) main_hc_apps_shell_pane

0xd500,	// (0x0004826a) grid_hc_apps_pane_ParamLimits

0xd500,	// (0x0004826a) grid_hc_apps_pane

0xd50f,	// (0x00048279) list_hc_apps_pane

0xd517,	// (0x00048281) scroll_pane_cp37_ParamLimits

0xd517,	// (0x00048281) scroll_pane_cp37

0xd523,	// (0x0004828d) cell_hc_apps_pane_ParamLimits

0xd523,	// (0x0004828d) cell_hc_apps_pane

0xd5db,	// (0x00048345) cell_hc_apps_pane_g1_ParamLimits

0xd5db,	// (0x00048345) cell_hc_apps_pane_g1

0xd60c,	// (0x00048376) cell_hc_apps_pane_g2_ParamLimits

0xd60c,	// (0x00048376) cell_hc_apps_pane_g2

0xd628,	// (0x00048392) cell_hc_apps_pane_g3_ParamLimits

0xd628,	// (0x00048392) cell_hc_apps_pane_g3

0x0002,

0xfd00,	// (0x0004aa6a) cell_hc_apps_pane_g_ParamLimits

0xfd00,	// (0x0004aa6a) cell_hc_apps_pane_g

0xd64a,	// (0x000483b4) cell_hc_apps_pane_t1_ParamLimits

0xd64a,	// (0x000483b4) cell_hc_apps_pane_t1

0x7adf,	// (0x00042849) grid_highlight_pane_cp10_ParamLimits

0x7adf,	// (0x00042849) grid_highlight_pane_cp10

0xd68a,	// (0x000483f4) list_single_hc_apps_pane_ParamLimits

0xd68a,	// (0x000483f4) list_single_hc_apps_pane

0xd6c9,	// (0x00048433) list_single_hc_apps_pane_g1

0x6ed1,	// (0x00041c3b) list_single_hc_apps_pane_g2

0x0001,

0xfd07,	// (0x0004aa71) list_single_hc_apps_pane_g

0x6eea,	// (0x00041c54) list_single_hc_apps_pane_g2_copy1

0x5a17,	// (0x00040781) list_single_hc_apps_pane_t1

0x7855,	// (0x000425bf) bg_set_opt_pane_cp_ParamLimits

0x5e46,	// (0x00040bb0) setting_slider_pane_t1_ParamLimits

0x5e5c,	// (0x00040bc6) setting_slider_pane_t2_ParamLimits

0x5e76,	// (0x00040be0) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0004a30c) setting_slider_pane_t_ParamLimits

0x5e8e,	// (0x00040bf8) slider_set_pane_ParamLimits

0x6488,	// (0x000411f2) control_pane_g5_ParamLimits

0x6488,	// (0x000411f2) control_pane_g5

0xafba,	// (0x00045d24) slider_set_pane_g1_ParamLimits

0x68a1,	// (0x0004160b) slider_set_pane_g2_ParamLimits

0xb651,	// (0x000463bb) slider_set_pane_g3_ParamLimits

0xb665,	// (0x000463cf) slider_set_pane_g4_ParamLimits

0xb67d,	// (0x000463e7) slider_set_pane_g5_ParamLimits

0xb651,	// (0x000463bb) slider_set_pane_g6_ParamLimits

0x68ad,	// (0x00041617) slider_set_pane_g7_ParamLimits

0xf9a2,	// (0x0004a70c) slider_set_pane_g_ParamLimits

0x8bb6,	// (0x00043920) navi_icon_text_pane_ParamLimits

0x970d,	// (0x00044477) aid_fill_nsta_2_ParamLimits

0x974e,	// (0x000444b8) aid_touch_tab_arrow_left_ParamLimits

0x975d,	// (0x000444c7) aid_touch_tab_arrow_right_ParamLimits

0x97ca,	// (0x00044534) clock_nsta_pane_ParamLimits

0xaa7c,	// (0x000457e6) navi_icon_pane_g1_ParamLimits

0xaa8b,	// (0x000457f5) navi_text_pane_t1_ParamLimits

0xbe39,	// (0x00046ba3) navi_icon_text_pane_g1_ParamLimits

0xbe48,	// (0x00046bb2) navi_icon_text_pane_t1_ParamLimits

0xd6c9,	// (0x00048433) list_single_hc_apps_pane_g1_ParamLimits

0x6ed1,	// (0x00041c3b) list_single_hc_apps_pane_g2_ParamLimits

0xfd07,	// (0x0004aa71) list_single_hc_apps_pane_g_ParamLimits

0x6eea,	// (0x00041c54) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5a17,	// (0x00040781) list_single_hc_apps_pane_t1_ParamLimits

0x5d50,	// (0x00040aba) popup_toolbar2_fixed_window_ParamLimits

0x5d50,	// (0x00040aba) popup_toolbar2_fixed_window

0x9611,	// (0x0004437b) popup_toolbar2_float_window

0x7761,	// (0x000424cb) bg_popup_sub_pane_cp27

0xd6e2,	// (0x0004844c) grid_toolbar2_float_pane

0x7761,	// (0x000424cb) bg_popup_sub_pane_cp26

0xd6e2,	// (0x0004844c) grid_toolbar2_fixed_pane

0xd6ea,	// (0x00048454) cell_toolbar2_fixed_pane_ParamLimits

0xd6ea,	// (0x00048454) cell_toolbar2_fixed_pane

0xd6fa,	// (0x00048464) cell_toolbar2_fixed_pane_g1

0xd703,	// (0x0004846d) toolbar2_fixed_button_pane

0x9c00,	// (0x0004496a) toolbar2_fixed_button_pane_g1

0x9c08,	// (0x00044972) toolbar2_fixed_button_pane_g2

0x9c10,	// (0x0004497a) toolbar2_fixed_button_pane_g3

0x9c18,	// (0x00044982) toolbar2_fixed_button_pane_g4

0x9c20,	// (0x0004498a) toolbar2_fixed_button_pane_g5

0x9c28,	// (0x00044992) toolbar2_fixed_button_pane_g6

0x9c30,	// (0x0004499a) toolbar2_fixed_button_pane_g7

0x9c38,	// (0x000449a2) toolbar2_fixed_button_pane_g8

0x9c40,	// (0x000449aa) toolbar2_fixed_button_pane_g9

0x0008,

0xf8a4,	// (0x0004a60e) toolbar2_fixed_button_pane_g

0xd70b,	// (0x00048475) cell_toolbar2_float_pane_ParamLimits

0xd70b,	// (0x00048475) cell_toolbar2_float_pane

0xd71c,	// (0x00048486) cell_toolbar2_float_pane_g1

0xd703,	// (0x0004846d) toolbar2_fixed_button_pane_cp

0xc398,	// (0x00047102) fep_vkb_accented_list_pane_ParamLimits

0xc398,	// (0x00047102) fep_vkb_accented_list_pane

0x6cad,	// (0x00041a17) bg_popup_fep_shadow_pane_g9

0x8d3a,	// (0x00043aa4) bg_popup_fep_shadow_pane_cp3

0x8245,	// (0x00042faf) list_accented_list_pane

0xd725,	// (0x0004848f) list_single_accented_list_pane_ParamLimits

0xd725,	// (0x0004848f) list_single_accented_list_pane

0x8d3a,	// (0x00043aa4) list_highlight_pane_cp10

0xd736,	// (0x000484a0) list_single_accented_list_pane_t1

0x9557,	// (0x000442c1) popup_slider_window_ParamLimits

0x9557,	// (0x000442c1) popup_slider_window

0xd37e,	// (0x000480e8) aid_indentation_list_msg

0xd802,	// (0x0004856c) bg_popup_window_pane_cp19

0xd870,	// (0x000485da) popup_slider_window_g1

0xd88c,	// (0x000485f6) popup_slider_window_g2

0xd8a8,	// (0x00048612) popup_slider_window_g3

0x0005,

0xfd0c,	// (0x0004aa76) popup_slider_window_g

0xd904,	// (0x0004866e) popup_slider_window_t1

0xd978,	// (0x000486e2) small_volume_slider_vertical_pane

0xc244,	// (0x00046fae) small_volume_slider_vertical_pane_g1

0xc244,	// (0x00046fae) small_volume_slider_vertical_pane_g2

0xd994,	// (0x000486fe) small_volume_slider_vertical_pane_g3

0x0002,

0xfd1e,	// (0x0004aa88) small_volume_slider_vertical_pane_g

0x5b08,	// (0x00040872) area_side_right_pane_ParamLimits

0x5b08,	// (0x00040872) area_side_right_pane

0x6f06,	// (0x00041c70) aid_size_side_button_ParamLimits

0x6f06,	// (0x00041c70) aid_size_side_button

0x6f1a,	// (0x00041c84) grid_sctrl_middle_pane_ParamLimits

0x6f1a,	// (0x00041c84) grid_sctrl_middle_pane

0x6f3a,	// (0x00041ca4) sctrl_sk_bottom_pane

0x6f4b,	// (0x00041cb5) sctrl_sk_top_pane

0x6f5d,	// (0x00041cc7) aid_touch_sctrl_top

0x7adf,	// (0x00042849) bg_sctrl_sk_pane_ParamLimits

0x7adf,	// (0x00042849) bg_sctrl_sk_pane

0x6f6a,	// (0x00041cd4) sctrl_sk_top_pane_g1

0x6f77,	// (0x00041ce1) sctrl_sk_top_pane_t1

0x6f5d,	// (0x00041cc7) aid_touch_sctrl_bottom

0x7adf,	// (0x00042849) bg_sctrl_sk_pane_cp_ParamLimits

0x7adf,	// (0x00042849) bg_sctrl_sk_pane_cp

0x6f92,	// (0x00041cfc) sctrl_sk_bottom_pane_g1

0x6f77,	// (0x00041ce1) sctrl_sk_bottom_pane_t1

0x6f9b,	// (0x00041d05) cell_sctrl_middle_pane_ParamLimits

0x6f9b,	// (0x00041d05) cell_sctrl_middle_pane

0x6fb8,	// (0x00041d22) aid_touch_sctrl_middle_ParamLimits

0x6fb8,	// (0x00041d22) aid_touch_sctrl_middle

0x80dc,	// (0x00042e46) bg_sctrl_middle_pane_ParamLimits

0x80dc,	// (0x00042e46) bg_sctrl_middle_pane

0xc4dc,	// (0x00047246) cell_sctrl_middle_pane_g1_ParamLimits

0xc4dc,	// (0x00047246) cell_sctrl_middle_pane_g1

0x6fca,	// (0x00041d34) cell_sctrl_middle_pane_g2_ParamLimits

0x6fca,	// (0x00041d34) cell_sctrl_middle_pane_g2

0x0001,

0xfd2a,	// (0x0004aa94) cell_sctrl_middle_pane_g_ParamLimits

0xfd2a,	// (0x0004aa94) cell_sctrl_middle_pane_g

0x9c00,	// (0x0004496a) bg_sctrl_middle_pane_g1

0x9c08,	// (0x00044972) bg_sctrl_middle_pane_g2

0x9c10,	// (0x0004497a) bg_sctrl_middle_pane_g3

0x9c18,	// (0x00044982) bg_sctrl_middle_pane_g4

0x9c20,	// (0x0004498a) bg_sctrl_middle_pane_g5

0x9c28,	// (0x00044992) bg_sctrl_middle_pane_g6

0x9c30,	// (0x0004499a) bg_sctrl_middle_pane_g7

0x9c38,	// (0x000449a2) bg_sctrl_middle_pane_g8

0x0007,

0xfd2f,	// (0x0004aa99) bg_sctrl_middle_pane_g

0x9c40,	// (0x000449aa) bg_sctrl_middle_pane_g8_copy1

0x9c00,	// (0x0004496a) bg_sctrl_sk_pane_g1

0x9c08,	// (0x00044972) bg_sctrl_sk_pane_g2

0x9c10,	// (0x0004497a) bg_sctrl_sk_pane_g3

0x0008,

0xf8a4,	// (0x0004a60e) bg_sctrl_sk_pane_g

0x800b,	// (0x00042d75) aid_size_touch_scroll_bar

0x9c18,	// (0x00044982) bg_sctrl_sk_pane_g4

0x9c20,	// (0x0004498a) bg_sctrl_sk_pane_g5

0x9c28,	// (0x00044992) bg_sctrl_sk_pane_g6

0x9c30,	// (0x0004499a) bg_sctrl_sk_pane_g7

0x9c38,	// (0x000449a2) bg_sctrl_sk_pane_g8

0x9c40,	// (0x000449aa) bg_sctrl_sk_pane_g9

0x916e,	// (0x00043ed8) popup_fep_china_hwr2_fs_candidate_window

0x9178,	// (0x00043ee2) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9178,	// (0x00043ee2) popup_fep_china_hwr2_fs_control_window

0xc4dc,	// (0x00047246) sctrl_sk_top_pane_g2

0x0001,

0xfd25,	// (0x0004aa8f) sctrl_sk_top_pane_g

0xd99d,	// (0x00048707) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd99d,	// (0x00048707) aid_fep_china_hwr2_fs_cell

0xd9b0,	// (0x0004871a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9b0,	// (0x0004871a) bg_popup_fep_shadow_pane_cp4

0xd9c9,	// (0x00048733) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9c9,	// (0x00048733) bg_popup_fep_shadow_pane_cp5

0xd9db,	// (0x00048745) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9db,	// (0x00048745) popup_fep_china_hwr2_fs_control_bar_grid

0xd9eb,	// (0x00048755) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9f3,	// (0x0004875d) aid_fep_china_hwr2_fs_candi_cell

0x7761,	// (0x000424cb) bg_popup_fep_shadow_pane_cp6

0xd9fd,	// (0x00048767) popup_fep_china_hwr2_fs_candidate_grid

0xda07,	// (0x00048771) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda07,	// (0x00048771) cell_fep_china_hwr2_fs_funtion_grid

0xc244,	// (0x00046fae) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda1f,	// (0x00048789) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda1f,	// (0x00048789) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda2d,	// (0x00048797) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda2d,	// (0x00048797) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd40,	// (0x0004aaaa) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd40,	// (0x0004aaaa) cell_fep_china_hwr2_fs_funtion_grid_g

0xda43,	// (0x000487ad) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda43,	// (0x000487ad) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda58,	// (0x000487c2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda58,	// (0x000487c2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd45,	// (0x0004aaaf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd45,	// (0x0004aaaf) cell_fep_china_hwr2_fs_funtion_grid_t

0xda74,	// (0x000487de) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda7c,	// (0x000487e6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda84,	// (0x000487ee) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd4a,	// (0x0004aab4) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda8c,	// (0x000487f6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda8c,	// (0x000487f6) cell_fep_china_hwr2_fs_candidate_grid

0xdaab,	// (0x00048815) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdab3,	// (0x0004881d) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc244,	// (0x00046fae) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc244,	// (0x00046fae) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb6a,	// (0x0004a8d4) cell_fep_china_hwr2_fs_candidate_grid_g

0xdabb,	// (0x00048825) cell_fep_china_hwr2_fs_candidate_grid_t1

0x97dd,	// (0x00044547) clock_nsta_pane_cp_24_ParamLimits

0x97dd,	// (0x00044547) clock_nsta_pane_cp_24

0x985d,	// (0x000445c7) indicator_nsta_pane_cp_24_ParamLimits

0x985d,	// (0x000445c7) indicator_nsta_pane_cp_24

0xa8f8,	// (0x00045662) heading_pane_g1

0x0001,

0xf909,	// (0x0004a673) heading_pane_g

0xb3a8,	// (0x00046112) grid_sct_catagory_button_pane

0xb3da,	// (0x00046144) scroll_pane_cp5_ParamLimits

0xbe8d,	// (0x00046bf7) button_value_adjust_pane_cp5_ParamLimits

0xbe8d,	// (0x00046bf7) button_value_adjust_pane_cp5

0xbf72,	// (0x00046cdc) form2_midp_time_pane_ParamLimits

0xdac9,	// (0x00048833) cell_sct_catagory_button_pane_ParamLimits

0xdac9,	// (0x00048833) cell_sct_catagory_button_pane

0xc209,	// (0x00046f73) bg_button_pane_cp01_ParamLimits

0xc209,	// (0x00046f73) bg_button_pane_cp01

0xc244,	// (0x00046fae) cell_sct_catagory_button_pane_g1

0x9598,	// (0x00044302) popup_tb_extension_window

0xdadb,	// (0x00048845) aid_size_cell_ext_ParamLimits

0xdadb,	// (0x00048845) aid_size_cell_ext

0x7adf,	// (0x00042849) bg_tb_trans_pane_cp1_ParamLimits

0x7adf,	// (0x00042849) bg_tb_trans_pane_cp1

0xdafb,	// (0x00048865) grid_tb_ext_pane_ParamLimits

0xdafb,	// (0x00048865) grid_tb_ext_pane

0xdb2b,	// (0x00048895) cell_tb_ext_pane_ParamLimits

0xdb2b,	// (0x00048895) cell_tb_ext_pane

0xdb42,	// (0x000488ac) cell_tb_ext_pane_g1_ParamLimits

0xdb42,	// (0x000488ac) cell_tb_ext_pane_g1

0xdb5f,	// (0x000488c9) cell_tb_ext_pane_t1

0x7adf,	// (0x00042849) list_highlight_pane_cp11_ParamLimits

0x7adf,	// (0x00042849) list_highlight_pane_cp11

0x5d6f,	// (0x00040ad9) popup_uni_indicator_window_ParamLimits

0x5d6f,	// (0x00040ad9) popup_uni_indicator_window

0x80dc,	// (0x00042e46) bg_popup_sub_pane_cp14

0xdb7a,	// (0x000488e4) list_uniindi_pane

0xdb86,	// (0x000488f0) uniindi_top_pane

0x7adf,	// (0x00042849) bg_uniindi_top_pane

0xdba7,	// (0x00048911) uniindi_top_pane_g1

0xdbbd,	// (0x00048927) uniindi_top_pane_g2

0x0003,

0xfd51,	// (0x0004aabb) uniindi_top_pane_g

0xdbe7,	// (0x00048951) uniindi_top_pane_t1

0xdc13,	// (0x0004897d) list_single_uniindi_pane_ParamLimits

0xdc13,	// (0x0004897d) list_single_uniindi_pane

0xc244,	// (0x00046fae) bg_uniindi_top_pane_g1

0xdc25,	// (0x0004898f) list_single_uniindi_pane_g1

0xdc38,	// (0x000489a2) list_single_uniindi_pane_t1

0x7761,	// (0x000424cb) control_bg_pane

0xdc5d,	// (0x000489c7) bg_sctrl_sk_pane_cp1

0xdc66,	// (0x000489d0) bg_sctrl_sk_pane_cp2

0xdc6f,	// (0x000489d9) control_bg_pane_g1

0xdc78,	// (0x000489e2) control_bg_pane_g2

0x0001,

0xfd5a,	// (0x0004aac4) control_bg_pane_g

0xbce1,	// (0x00046a4b) cell_indicator_nsta_pane_g1_ParamLimits

0xbcef,	// (0x00046a59) cell_indicator_nsta_pane_g2_ParamLimits

0xfadb,	// (0x0004a845) cell_indicator_nsta_pane_g_ParamLimits

0x57b9,	// (0x00040523) form2_midp_time_pane_t1_ParamLimits

0x7e4d,	// (0x00042bb7) main_idle_act4_pane_ParamLimits

0x7e4d,	// (0x00042bb7) main_idle_act4_pane

0x9598,	// (0x00044302) popup_tb_extension_window_ParamLimits

0xdb1d,	// (0x00048887) tb_ext_find_pane_ParamLimits

0xdb1d,	// (0x00048887) tb_ext_find_pane

0xdc81,	// (0x000489eb) ai_gene_pane_1_cp1

0x8e83,	// (0x00043bed) ai_gene_pane_2_cp1

0xdc89,	// (0x000489f3) list_single_idle_plugin_calendar_pane

0xdc92,	// (0x000489fc) list_single_idle_plugin_notification_pane

0xdc9b,	// (0x00048a05) list_single_idle_plugin_player_pane

0xdca4,	// (0x00048a0e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdca4,	// (0x00048a0e) list_single_idle_plugin_shortcut_pane

0xdcc6,	// (0x00048a30) main_idle_act4_pane_t1

0xdcd8,	// (0x00048a42) main_idle_act4_pane_t2

0x0001,

0xfd5f,	// (0x0004aac9) main_idle_act4_pane_t

0xdcea,	// (0x00048a54) middle_sk_idle_act4_pane_ParamLimits

0xdcea,	// (0x00048a54) middle_sk_idle_act4_pane

0xdd00,	// (0x00048a6a) popup_clock_digital_analogue_window_cp2

0xdd1a,	// (0x00048a84) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd1a,	// (0x00048a84) shortcut_wheel_idle_act4_pane

0xc244,	// (0x00046fae) shortcut_wheel_idle_act4_pane_g1

0xc244,	// (0x00046fae) shortcut_wheel_idle_act4_pane_g2

0xc244,	// (0x00046fae) shortcut_wheel_idle_act4_pane_g3

0xc244,	// (0x00046fae) shortcut_wheel_idle_act4_pane_g4

0xc244,	// (0x00046fae) shortcut_wheel_idle_act4_pane_g5

0xdd2e,	// (0x00048a98) shortcut_wheel_idle_act4_pane_g6

0xdd36,	// (0x00048aa0) shortcut_wheel_idle_act4_pane_g7

0xdd3e,	// (0x00048aa8) shortcut_wheel_idle_act4_pane_g8

0xdd46,	// (0x00048ab0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd64,	// (0x0004aace) shortcut_wheel_idle_act4_pane_g

0xc4dc,	// (0x00047246) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4dc,	// (0x00047246) middle_sk_idle_act4_pane_g1

0xddaa,	// (0x00048b14) middle_sk_idle_act4_pane_g2_ParamLimits

0xddaa,	// (0x00048b14) middle_sk_idle_act4_pane_g2

0x0001,

0xfd87,	// (0x0004aaf1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd87,	// (0x0004aaf1) middle_sk_idle_act4_pane_g

0xddb6,	// (0x00048b20) middle_sk_idle_act4_pane_t1_ParamLimits

0xddb6,	// (0x00048b20) middle_sk_idle_act4_pane_t1

0xddd3,	// (0x00048b3d) grid_ai_shortcut_pane_ParamLimits

0xddd3,	// (0x00048b3d) grid_ai_shortcut_pane

0xddec,	// (0x00048b56) list_highlight_pane_cp16_ParamLimits

0xddec,	// (0x00048b56) list_highlight_pane_cp16

0xddf9,	// (0x00048b63) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddf9,	// (0x00048b63) list_single_idle_plugin_shortcut_pane_g1

0xde05,	// (0x00048b6f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde05,	// (0x00048b6f) list_single_idle_plugin_shortcut_pane_g2

0xde1f,	// (0x00048b89) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde1f,	// (0x00048b89) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8c,	// (0x0004aaf6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8c,	// (0x0004aaf6) list_single_idle_plugin_shortcut_pane_g

0xde32,	// (0x00048b9c) cell_ai_shortcut_pane_ParamLimits

0xde32,	// (0x00048b9c) cell_ai_shortcut_pane

0xde55,	// (0x00048bbf) cell_ai_shortcut_pane_g1_ParamLimits

0xde55,	// (0x00048bbf) cell_ai_shortcut_pane_g1

0xdc81,	// (0x000489eb) ai_gene_pane_1_cp2

0xde77,	// (0x00048be1) ai_gene_pane_2_cp2

0xde7f,	// (0x00048be9) list_highlight_pane_cp15

0xde88,	// (0x00048bf2) list_single_idle_plugin_calendar_pane_g1

0xde7f,	// (0x00048be9) list_highlight_pane_cp17

0xde90,	// (0x00048bfa) list_single_idle_plugin_calendar_pane_g1_copy1

0xde98,	// (0x00048c02) list_single_idle_plugin_player_pane_g1

0xb60f,	// (0x00046379) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd93,	// (0x0004aafd) list_single_idle_plugin_player_pane_g

0xdea0,	// (0x00048c0a) list_single_idle_plugin_player_pane_t1

0xdeae,	// (0x00048c18) list_single_idle_plugin_player_pane_t2

0xdebc,	// (0x00048c26) list_single_idle_plugin_player_pane_t3

0xdeca,	// (0x00048c34) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd98,	// (0x0004ab02) list_single_idle_plugin_player_pane_t

0xded8,	// (0x00048c42) wait_bar_pane_cp15

0xdee0,	// (0x00048c4a) grid_ai_notification_pane

0xb60f,	// (0x00046379) list_single_idle_plugin_notification_pane_g1

0xdee9,	// (0x00048c53) cell_ai_notification_pane_ParamLimits

0xdee9,	// (0x00048c53) cell_ai_notification_pane

0xdef6,	// (0x00048c60) cell_ai_notification_pane_g1

0xdefe,	// (0x00048c68) cell_ai_notification_pane_t1

0xdf0c,	// (0x00048c76) tb_ext_find_button_pane

0xdf14,	// (0x00048c7e) tb_ext_find_pane_g1

0xdf1c,	// (0x00048c86) tb_ext_find_pane_t1

0x874c,	// (0x000434b6) tb_ext_find_button_pane_g1

0xdf2a,	// (0x00048c94) tb_ext_find_button_pane_g2

0x0001,

0xfda1,	// (0x0004ab0b) tb_ext_find_button_pane_g

0xdcc6,	// (0x00048a30) main_idle_act4_pane_t1_ParamLimits

0xdcd8,	// (0x00048a42) main_idle_act4_pane_t2_ParamLimits

0xfd5f,	// (0x0004aac9) main_idle_act4_pane_t_ParamLimits

0xdd00,	// (0x00048a6a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd0e,	// (0x00048a78) sat_plugin_idle_act4_pane_ParamLimits

0xdd0e,	// (0x00048a78) sat_plugin_idle_act4_pane

0xdf33,	// (0x00048c9d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf33,	// (0x00048c9d) sat_plugin_idle_act4_pane_t1

0xdf46,	// (0x00048cb0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf46,	// (0x00048cb0) sat_plugin_idle_act4_pane_t2

0xdf59,	// (0x00048cc3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf59,	// (0x00048cc3) sat_plugin_idle_act4_pane_t3

0xdf6c,	// (0x00048cd6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf6c,	// (0x00048cd6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda6,	// (0x0004ab10) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda6,	// (0x0004ab10) sat_plugin_idle_act4_pane_t

0x5ca0,	// (0x00040a0a) popup_battery_window_ParamLimits

0x5ca0,	// (0x00040a0a) popup_battery_window

0x7adf,	// (0x00042849) bg_popup_sub_pane_cp25_ParamLimits

0x7adf,	// (0x00042849) bg_popup_sub_pane_cp25

0xdf7f,	// (0x00048ce9) popup_battery_window_g1_ParamLimits

0xdf7f,	// (0x00048ce9) popup_battery_window_g1

0xdf8b,	// (0x00048cf5) popup_battery_window_t1_ParamLimits

0xdf8b,	// (0x00048cf5) popup_battery_window_t1

0xdf9d,	// (0x00048d07) popup_battery_window_t2_ParamLimits

0xdf9d,	// (0x00048d07) popup_battery_window_t2

0x0001,

0xfdaf,	// (0x0004ab19) popup_battery_window_t_ParamLimits

0xfdaf,	// (0x0004ab19) popup_battery_window_t

0x8d4e,	// (0x00043ab8) midp_canvas_pane_ParamLimits

0x8dc5,	// (0x00043b2f) midp_keypad_pane_ParamLimits

0x8dc5,	// (0x00043b2f) midp_keypad_pane

0x90c4,	// (0x00043e2e) main_midp_pane_ParamLimits

0xbd3a,	// (0x00046aa4) signal_pane_g2_cp_ParamLimits

0xdfba,	// (0x00048d24) aid_size_cell_midp_keypad_ParamLimits

0xdfba,	// (0x00048d24) aid_size_cell_midp_keypad

0xdfd4,	// (0x00048d3e) midp_keyp_game_grid_pane_ParamLimits

0xdfd4,	// (0x00048d3e) midp_keyp_game_grid_pane

0xdff4,	// (0x00048d5e) midp_keyp_rocker_pane_ParamLimits

0xdff4,	// (0x00048d5e) midp_keyp_rocker_pane

0xe023,	// (0x00048d8d) midp_keyp_sk_left_pane_ParamLimits

0xe023,	// (0x00048d8d) midp_keyp_sk_left_pane

0xe07d,	// (0x00048de7) midp_keyp_sk_right_pane_ParamLimits

0xe07d,	// (0x00048de7) midp_keyp_sk_right_pane

0x7761,	// (0x000424cb) bg_button_pane_cp03

0xe0d7,	// (0x00048e41) midp_keyp_sk_left_pane_g1

0x7761,	// (0x000424cb) bg_button_pane_cp04

0xe0d7,	// (0x00048e41) midp_keyp_sk_right_pane_g1

0xc244,	// (0x00046fae) midp_keyp_rocker_pane_g1

0xe0e0,	// (0x00048e4a) keyp_game_cell_pane_ParamLimits

0xe0e0,	// (0x00048e4a) keyp_game_cell_pane

0x7761,	// (0x000424cb) bg_button_pane_cp02

0xe0f3,	// (0x00048e5d) keyp_game_cell_pane_g1

0x5cea,	// (0x00040a54) popup_fep_vkb2_window_ParamLimits

0x5cea,	// (0x00040a54) popup_fep_vkb2_window

0x6fec,	// (0x00041d56) aid_size_cell_vkb2_ParamLimits

0x6fec,	// (0x00041d56) aid_size_cell_vkb2

0x7038,	// (0x00041da2) popup_fep_vkb2_window_g1_ParamLimits

0x7038,	// (0x00041da2) popup_fep_vkb2_window_g1

0x7080,	// (0x00041dea) vkb2_area_bottom_pane_ParamLimits

0x7080,	// (0x00041dea) vkb2_area_bottom_pane

0x70d4,	// (0x00041e3e) vkb2_area_keypad_pane_ParamLimits

0x70d4,	// (0x00041e3e) vkb2_area_keypad_pane

0x711a,	// (0x00041e84) vkb2_area_top_pane_ParamLimits

0x711a,	// (0x00041e84) vkb2_area_top_pane

0x7194,	// (0x00041efe) vkb2_top_entry_pane_ParamLimits

0x7194,	// (0x00041efe) vkb2_top_entry_pane

0x71be,	// (0x00041f28) vkb2_top_grid_left_pane_ParamLimits

0x71be,	// (0x00041f28) vkb2_top_grid_left_pane

0x71dc,	// (0x00041f46) vkb2_top_grid_right_pane_ParamLimits

0x71dc,	// (0x00041f46) vkb2_top_grid_right_pane

0x71fa,	// (0x00041f64) vkb2_cell_keypad_pane_ParamLimits

0x71fa,	// (0x00041f64) vkb2_cell_keypad_pane

0x72b0,	// (0x0004201a) vkb2_area_bottom_grid_pane_ParamLimits

0x72b0,	// (0x0004201a) vkb2_area_bottom_grid_pane

0x72d6,	// (0x00042040) vkb2_area_bottom_pane_g1_ParamLimits

0x72d6,	// (0x00042040) vkb2_area_bottom_pane_g1

0x72fa,	// (0x00042064) vkb2_area_bottom_pane_g2_ParamLimits

0x72fa,	// (0x00042064) vkb2_area_bottom_pane_g2

0x7328,	// (0x00042092) vkb2_area_bottom_pane_g3_ParamLimits

0x7328,	// (0x00042092) vkb2_area_bottom_pane_g3

0x0002,

0xfdb4,	// (0x0004ab1e) vkb2_area_bottom_pane_g_ParamLimits

0xfdb4,	// (0x0004ab1e) vkb2_area_bottom_pane_g

0x7389,	// (0x000420f3) vkb2_top_cell_left_pane_ParamLimits

0x7389,	// (0x000420f3) vkb2_top_cell_left_pane

0xe104,	// (0x00048e6e) vkb2_top_entry_pane_g1_ParamLimits

0xe104,	// (0x00048e6e) vkb2_top_entry_pane_g1

0xe112,	// (0x00048e7c) vkb2_top_entry_pane_t1_ParamLimits

0xe112,	// (0x00048e7c) vkb2_top_entry_pane_t1

0xe12a,	// (0x00048e94) vkb2_top_entry_pane_t2_ParamLimits

0xe12a,	// (0x00048e94) vkb2_top_entry_pane_t2

0xe142,	// (0x00048eac) vkb2_top_entry_pane_t3_ParamLimits

0xe142,	// (0x00048eac) vkb2_top_entry_pane_t3

0x0002,

0xfdbb,	// (0x0004ab25) vkb2_top_entry_pane_t_ParamLimits

0xfdbb,	// (0x0004ab25) vkb2_top_entry_pane_t

0x73d6,	// (0x00042140) vkb2_top_grid_right_pane_g1_ParamLimits

0x73d6,	// (0x00042140) vkb2_top_grid_right_pane_g1

0x73ec,	// (0x00042156) vkb2_top_grid_right_pane_g2_ParamLimits

0x73ec,	// (0x00042156) vkb2_top_grid_right_pane_g2

0x7404,	// (0x0004216e) vkb2_top_grid_right_pane_g3_ParamLimits

0x7404,	// (0x0004216e) vkb2_top_grid_right_pane_g3

0x741c,	// (0x00042186) vkb2_top_grid_right_pane_g4_ParamLimits

0x741c,	// (0x00042186) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc2,	// (0x0004ab2c) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc2,	// (0x0004ab2c) vkb2_top_grid_right_pane_g

0x7432,	// (0x0004219c) vkb2_top_cell_left_pane_g1

0x7449,	// (0x000421b3) vkb2_cell_keypad_pane_g1_ParamLimits

0x7449,	// (0x000421b3) vkb2_cell_keypad_pane_g1

0xe158,	// (0x00048ec2) vkb2_cell_keypad_pane_t1_ParamLimits

0xe158,	// (0x00048ec2) vkb2_cell_keypad_pane_t1

0x746d,	// (0x000421d7) vkb2_cell_bottom_grid_pane_ParamLimits

0x746d,	// (0x000421d7) vkb2_cell_bottom_grid_pane

0x74a6,	// (0x00042210) vkb2_cell_bottom_grid_pane_g1

0xdd4e,	// (0x00048ab8) aid_call2_pane_cp02

0xdd56,	// (0x00048ac0) aid_call_pane_cp02

0xdd5e,	// (0x00048ac8) clock_digital_number_pane_cp10

0xdd66,	// (0x00048ad0) clock_digital_number_pane_cp11

0xdd6e,	// (0x00048ad8) clock_digital_number_pane_cp12

0xdd76,	// (0x00048ae0) clock_digital_number_pane_cp13

0xdd7e,	// (0x00048ae8) clock_digital_separator_pane_cp10

0x874c,	// (0x000434b6) popup_clock_digital_analogue_window_cp2_g1

0x874c,	// (0x000434b6) popup_clock_digital_analogue_window_cp2_g2

0xdd86,	// (0x00048af0) popup_clock_digital_analogue_window_cp2_g3

0x874c,	// (0x000434b6) popup_clock_digital_analogue_window_cp2_g4

0xdd86,	// (0x00048af0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd77,	// (0x0004aae1) popup_clock_digital_analogue_window_cp2_g

0xdd8e,	// (0x00048af8) popup_clock_digital_analogue_window_cp2_t1

0xdd9c,	// (0x00048b06) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd82,	// (0x0004aaec) popup_clock_digital_analogue_window_cp2_t

0xc244,	// (0x00046fae) clock_digital_number_pane_cp10_g1

0xc244,	// (0x00046fae) clock_digital_number_pane_cp10_g2

0x0001,

0xfb6a,	// (0x0004a8d4) clock_digital_number_pane_cp10_g

0xc244,	// (0x00046fae) clock_digital_separator_pane_cp10_g1

0xc244,	// (0x00046fae) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb6a,	// (0x0004a8d4) clock_digital_separator_pane_cp10_g

0xdbc9,	// (0x00048933) uniindi_top_pane_g3

0xdbda,	// (0x00048944) uniindi_top_pane_g4

0x726a,	// (0x00041fd4) vkb2_row_keypad_pane_ParamLimits

0x726a,	// (0x00041fd4) vkb2_row_keypad_pane

0x74c2,	// (0x0004222c) vkb2_cell_t_keypad_pane_ParamLimits

0x74c2,	// (0x0004222c) vkb2_cell_t_keypad_pane

0x74d2,	// (0x0004223c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x74d2,	// (0x0004223c) vkb2_cell_t_keypad_pane_cp08

0x74e7,	// (0x00042251) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x74e7,	// (0x00042251) vkb2_cell_t_keypad_pane_cp09

0x74fb,	// (0x00042265) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x74fb,	// (0x00042265) vkb2_cell_t_keypad_pane_cp01

0x750c,	// (0x00042276) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x750c,	// (0x00042276) vkb2_cell_t_keypad_pane_cp02

0x751d,	// (0x00042287) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x751d,	// (0x00042287) vkb2_cell_t_keypad_pane_cp03

0x752e,	// (0x00042298) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x752e,	// (0x00042298) vkb2_cell_t_keypad_pane_cp04

0x753f,	// (0x000422a9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x753f,	// (0x000422a9) vkb2_cell_t_keypad_pane_cp05

0x7550,	// (0x000422ba) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7550,	// (0x000422ba) vkb2_cell_t_keypad_pane_cp06

0x7563,	// (0x000422cd) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7563,	// (0x000422cd) vkb2_cell_t_keypad_pane_cp07

0x7578,	// (0x000422e2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7578,	// (0x000422e2) vkb2_cell_t_keypad_pane_cp10

0xc4dc,	// (0x00047246) vkb2_cell_t_keypad_pane_g1

0xe16f,	// (0x00048ed9) vkb2_cell_t_keypad_pane_t1

0x7761,	// (0x000424cb) popup_grid_graphic2_window

0xe181,	// (0x00048eeb) aid_size_cell_graphic2_ParamLimits

0xe181,	// (0x00048eeb) aid_size_cell_graphic2

0xc2f0,	// (0x0004705a) bg_popup_window_pane_cp21_ParamLimits

0xc2f0,	// (0x0004705a) bg_popup_window_pane_cp21

0xe1ad,	// (0x00048f17) graphic2_pages_pane_ParamLimits

0xe1ad,	// (0x00048f17) graphic2_pages_pane

0xe1f3,	// (0x00048f5d) grid_graphic2_control_pane_ParamLimits

0xe1f3,	// (0x00048f5d) grid_graphic2_control_pane

0xe221,	// (0x00048f8b) grid_graphic2_pane_ParamLimits

0xe221,	// (0x00048f8b) grid_graphic2_pane

0xe283,	// (0x00048fed) cell_graphic2_pane

0x7761,	// (0x000424cb) main_comp_mode_pane

0xd43a,	// (0x000481a4) list_ai3_gene_pane_ParamLimits

0xd802,	// (0x0004856c) bg_popup_window_pane_cp19_ParamLimits

0xd80e,	// (0x00048578) bg_touch_area_indi_pane_ParamLimits

0xd80e,	// (0x00048578) bg_touch_area_indi_pane

0xd824,	// (0x0004858e) bg_touch_area_indi_pane_cp01_ParamLimits

0xd824,	// (0x0004858e) bg_touch_area_indi_pane_cp01

0xd83c,	// (0x000485a6) bg_touch_area_indi_pane_cp02_ParamLimits

0xd83c,	// (0x000485a6) bg_touch_area_indi_pane_cp02

0xd856,	// (0x000485c0) bg_touch_area_indi_pane_cp03_ParamLimits

0xd856,	// (0x000485c0) bg_touch_area_indi_pane_cp03

0xd870,	// (0x000485da) popup_slider_window_g1_ParamLimits

0xd88c,	// (0x000485f6) popup_slider_window_g2_ParamLimits

0xd8a8,	// (0x00048612) popup_slider_window_g3_ParamLimits

0xfd0c,	// (0x0004aa76) popup_slider_window_g_ParamLimits

0xd904,	// (0x0004866e) popup_slider_window_t1_ParamLimits

0xd978,	// (0x000486e2) small_volume_slider_vertical_pane_ParamLimits

0xe283,	// (0x00048fed) cell_graphic2_pane_ParamLimits

0xe2d8,	// (0x00049042) bg_button_pane_cp10_ParamLimits

0xe2d8,	// (0x00049042) bg_button_pane_cp10

0xe2ed,	// (0x00049057) bg_button_pane_cp11_ParamLimits

0xe2ed,	// (0x00049057) bg_button_pane_cp11

0xe302,	// (0x0004906c) graphic2_pages_pane_g1_ParamLimits

0xe302,	// (0x0004906c) graphic2_pages_pane_g1

0xe31d,	// (0x00049087) graphic2_pages_pane_g2_ParamLimits

0xe31d,	// (0x00049087) graphic2_pages_pane_g2

0x0001,

0xfdd0,	// (0x0004ab3a) graphic2_pages_pane_g_ParamLimits

0xfdd0,	// (0x0004ab3a) graphic2_pages_pane_g

0xe335,	// (0x0004909f) graphic2_pages_pane_t1_ParamLimits

0xe335,	// (0x0004909f) graphic2_pages_pane_t1

0xe34b,	// (0x000490b5) cell_graphic2_control_pane_ParamLimits

0xe34b,	// (0x000490b5) cell_graphic2_control_pane

0xe365,	// (0x000490cf) cell_graphic2_pane_g1_ParamLimits

0xe365,	// (0x000490cf) cell_graphic2_pane_g1

0xe372,	// (0x000490dc) cell_graphic2_pane_g2_ParamLimits

0xe372,	// (0x000490dc) cell_graphic2_pane_g2

0xe37f,	// (0x000490e9) cell_graphic2_pane_g3_ParamLimits

0xe37f,	// (0x000490e9) cell_graphic2_pane_g3

0xe38c,	// (0x000490f6) cell_graphic2_pane_g4_ParamLimits

0xe38c,	// (0x000490f6) cell_graphic2_pane_g4

0xe399,	// (0x00049103) cell_graphic2_pane_g5_ParamLimits

0xe399,	// (0x00049103) cell_graphic2_pane_g5

0x0004,

0xfdd5,	// (0x0004ab3f) cell_graphic2_pane_g_ParamLimits

0xfdd5,	// (0x0004ab3f) cell_graphic2_pane_g

0xe3b4,	// (0x0004911e) cell_graphic2_pane_t1_ParamLimits

0xe3b4,	// (0x0004911e) cell_graphic2_pane_t1

0x9cf2,	// (0x00044a5c) grid_highlight_pane_cp11_ParamLimits

0x9cf2,	// (0x00044a5c) grid_highlight_pane_cp11

0x80dc,	// (0x00042e46) bg_button_pane_cp05

0xe3ca,	// (0x00049134) cell_graphic2_control_pane_g1

0xc244,	// (0x00046fae) bg_touch_area_indi_pane_g1

0xe3d7,	// (0x00049141) aid_cmod_rocker_key_size

0xe3e1,	// (0x0004914b) aid_cmode_itu_key_size

0xe3eb,	// (0x00049155) main_cmode_video_pane

0xe3f5,	// (0x0004915f) main_comp_mode_itu_pane

0xe401,	// (0x0004916b) main_comp_mode_rocker_pane

0xe40d,	// (0x00049177) cell_cmode_rocker_pane_ParamLimits

0xe40d,	// (0x00049177) cell_cmode_rocker_pane

0xe421,	// (0x0004918b) cell_cmode_itu_pane_ParamLimits

0xe421,	// (0x0004918b) cell_cmode_itu_pane

0x80dc,	// (0x00042e46) bg_button_pane_cp06_ParamLimits

0x80dc,	// (0x00042e46) bg_button_pane_cp06

0xc4dc,	// (0x00047246) cell_cmode_rocker_pane_g1_ParamLimits

0xc4dc,	// (0x00047246) cell_cmode_rocker_pane_g1

0xda1f,	// (0x00048789) cell_cmode_rocker_pane_g2_ParamLimits

0xda1f,	// (0x00048789) cell_cmode_rocker_pane_g2

0x0001,

0xfde0,	// (0x0004ab4a) cell_cmode_rocker_pane_g_ParamLimits

0xfde0,	// (0x0004ab4a) cell_cmode_rocker_pane_g

0x7761,	// (0x000424cb) bg_button_pane_cp07

0xe438,	// (0x000491a2) cell_cmode_itu_pane_g1

0xe441,	// (0x000491ab) cell_cmode_itu_pane_t1

0xe44f,	// (0x000491b9) cell_cmode_itu_pane_t2

0x0001,

0xfde5,	// (0x0004ab4f) cell_cmode_itu_pane_t

0xdc4d,	// (0x000489b7) aid_touch_ctrl_left

0xdc55,	// (0x000489bf) aid_touch_ctrl_right

0x7761,	// (0x000424cb) compa_mode_pane

0xe45d,	// (0x000491c7) aid_cmod_rocker_key_size_cp

0xe467,	// (0x000491d1) aid_cmode_itu_key_size_cp

0xe471,	// (0x000491db) compa_mode_pane_g1

0xe479,	// (0x000491e3) compa_mode_pane_g2

0xe481,	// (0x000491eb) compa_mode_pane_g3

0x0002,

0xfdea,	// (0x0004ab54) compa_mode_pane_g

0xe489,	// (0x000491f3) main_comp_mode_itu_pane_cp

0xe491,	// (0x000491fb) main_comp_mode_rocker_pane_cp

0xe499,	// (0x00049203) cell_cmode_itu_pane_cp_ParamLimits

0xe499,	// (0x00049203) cell_cmode_itu_pane_cp

0xe4ae,	// (0x00049218) cell_cmode_rocker_pane_cp_ParamLimits

0xe4ae,	// (0x00049218) cell_cmode_rocker_pane_cp

0x80dc,	// (0x00042e46) bg_button_pane_cp06_cp_ParamLimits

0x80dc,	// (0x00042e46) bg_button_pane_cp06_cp

0xc4dc,	// (0x00047246) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4dc,	// (0x00047246) cell_cmode_rocker_pane_g1_cp

0xc244,	// (0x00046fae) cell_cmode_rocker_pane_g2_cp

0x7761,	// (0x000424cb) bg_button_pane_cp07_cp

0xe4c0,	// (0x0004922a) cell_cmode_itu_pane_g1_cp

0xe4c9,	// (0x00049233) cell_cmode_itu_pane_t1_cp

0xe4c9,	// (0x00049233) cell_cmode_itu_pane_t2_cp

0xb188,	// (0x00045ef2) settings_code_pane_cp2

0x7855,	// (0x000425bf) bg_popup_window_pane_cp3_ParamLimits

0x7ccd,	// (0x00042a37) heading_pane_cp3_ParamLimits

0x7cd9,	// (0x00042a43) listscroll_popup_graphic_pane_ParamLimits

0x6a7b,	// (0x000417e5) fep_hwr_aid_pane_ParamLimits

0x6f5d,	// (0x00041cc7) aid_touch_sctrl_top_ParamLimits

0x6f6a,	// (0x00041cd4) sctrl_sk_top_pane_g1_ParamLimits

0xc4dc,	// (0x00047246) sctrl_sk_top_pane_g2_ParamLimits

0xfd25,	// (0x0004aa8f) sctrl_sk_top_pane_g_ParamLimits

0x6f77,	// (0x00041ce1) sctrl_sk_top_pane_t1_ParamLimits

0x6f5d,	// (0x00041cc7) aid_touch_sctrl_bottom_ParamLimits

0x6f77,	// (0x00041ce1) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb93,	// (0x000488fd) aid_area_touch_clock

0x715c,	// (0x00041ec6) aid_vkb2_area_top_pane_cell_ParamLimits

0x715c,	// (0x00041ec6) aid_vkb2_area_top_pane_cell

0x728c,	// (0x00041ff6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x728c,	// (0x00041ff6) aid_vkb2_area_bottom_pane_cell

0xe0fc,	// (0x00048e66) popup_char_count_window

0xe4d7,	// (0x00049241) popup_char_count_window_g1

0xe4e0,	// (0x0004924a) popup_char_count_window_g2

0xe4e9,	// (0x00049253) popup_char_count_window_g3

0x0002,

0xfdf1,	// (0x0004ab5b) popup_char_count_window_g

0xe4f2,	// (0x0004925c) popup_char_count_window_t1

0x7016,	// (0x00041d80) popup_fep_char_preview_window_ParamLimits

0x7016,	// (0x00041d80) popup_fep_char_preview_window

0x717a,	// (0x00041ee4) vkb2_top_candi_pane_ParamLimits

0x717a,	// (0x00041ee4) vkb2_top_candi_pane

0xe500,	// (0x0004926a) cell_vkb2_top_candi_pane_ParamLimits

0xe500,	// (0x0004926a) cell_vkb2_top_candi_pane

0xa275,	// (0x00044fdf) bg_popup_fep_char_preview_window_ParamLimits

0xa275,	// (0x00044fdf) bg_popup_fep_char_preview_window

0x758d,	// (0x000422f7) popup_fep_char_preview_window_t1_ParamLimits

0x758d,	// (0x000422f7) popup_fep_char_preview_window_t1

0xe551,	// (0x000492bb) bg_popup_fep_char_preview_window_g1

0xe559,	// (0x000492c3) bg_popup_fep_char_preview_window_g2

0xe561,	// (0x000492cb) bg_popup_fep_char_preview_window_g3

0xe569,	// (0x000492d3) bg_popup_fep_char_preview_window_g4

0xe571,	// (0x000492db) bg_popup_fep_char_preview_window_g5

0x75c7,	// (0x00042331) bg_popup_fep_char_preview_window_g6

0xe579,	// (0x000492e3) bg_popup_fep_char_preview_window_g7

0xe581,	// (0x000492eb) bg_popup_fep_char_preview_window_g8

0xe589,	// (0x000492f3) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf8,	// (0x0004ab62) bg_popup_fep_char_preview_window_g

0xc4dc,	// (0x00047246) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc4dc,	// (0x00047246) cell_vkb2_top_candi_pane_g1

0xc81d,	// (0x00047587) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc81d,	// (0x00047587) cell_vkb2_top_candi_pane_g2

0xc83e,	// (0x000475a8) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc83e,	// (0x000475a8) cell_vkb2_top_candi_pane_g3

0x75cf,	// (0x00042339) cell_vkb2_top_candi_pane_g4_ParamLimits

0x75cf,	// (0x00042339) cell_vkb2_top_candi_pane_g4

0xe591,	// (0x000492fb) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe591,	// (0x000492fb) cell_vkb2_top_candi_pane_g5

0xda1f,	// (0x00048789) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda1f,	// (0x00048789) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0b,	// (0x0004ab75) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0b,	// (0x0004ab75) cell_vkb2_top_candi_pane_g

0x75f0,	// (0x0004235a) cell_vkb2_top_candi_pane_t1

0x688d,	// (0x000415f7) aid_size_touch_slider_mark_ParamLimits

0x688d,	// (0x000415f7) aid_size_touch_slider_mark

0xe1e3,	// (0x00048f4d) grid_graphic2_catg_pane_ParamLimits

0xe1e3,	// (0x00048f4d) grid_graphic2_catg_pane

0xe25d,	// (0x00048fc7) popup_grid_graphic2_window_t1_ParamLimits

0xe25d,	// (0x00048fc7) popup_grid_graphic2_window_t1

0xe26f,	// (0x00048fd9) popup_grid_graphic2_window_t2_ParamLimits

0xe26f,	// (0x00048fd9) popup_grid_graphic2_window_t2

0x0001,

0xfdcb,	// (0x0004ab35) popup_grid_graphic2_window_t_ParamLimits

0xfdcb,	// (0x0004ab35) popup_grid_graphic2_window_t

0x80dc,	// (0x00042e46) bg_button_pane_cp05_ParamLimits

0xe3ca,	// (0x00049134) cell_graphic2_control_pane_g1_ParamLimits

0xe5b2,	// (0x0004931c) cell_graphic2_catg_pane_ParamLimits

0xe5b2,	// (0x0004931c) cell_graphic2_catg_pane

0x7761,	// (0x000424cb) bg_button_pane_cp12

0xe5c4,	// (0x0004932e) cell_graphic2_catg_pane_g1

0xdb5f,	// (0x000488c9) cell_tb_ext_pane_t1_ParamLimits

0x73a9,	// (0x00042113) vkb2_top_cell_right_narrow_pane_ParamLimits

0x73a9,	// (0x00042113) vkb2_top_cell_right_narrow_pane

0x73c1,	// (0x0004212b) vkb2_top_cell_right_wide_pane_ParamLimits

0x73c1,	// (0x0004212b) vkb2_top_cell_right_wide_pane

0xc2f0,	// (0x0004705a) bg_vkb2_func_pane_ParamLimits

0xc2f0,	// (0x0004705a) bg_vkb2_func_pane

0x7432,	// (0x0004219c) vkb2_top_cell_left_pane_g1_ParamLimits

0xc2f0,	// (0x0004705a) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc2f0,	// (0x0004705a) bg_vkb2_fuc_pane_cp03

0x74a6,	// (0x00042210) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c08,	// (0x00044972) bg_vkb2_func_pane_g1

0x9c10,	// (0x0004497a) bg_vkb2_func_pane_g2

0x9c20,	// (0x0004498a) bg_vkb2_func_pane_g3

0x9c18,	// (0x00044982) bg_vkb2_func_pane_g4

0x9c28,	// (0x00044992) bg_vkb2_func_pane_g5

0x9c30,	// (0x0004499a) bg_vkb2_func_pane_g6

0x9c38,	// (0x000449a2) bg_vkb2_func_pane_g7

0x9c40,	// (0x000449aa) bg_vkb2_func_pane_g8

0x9c00,	// (0x0004496a) bg_vkb2_func_pane_g9

0x0008,

0xfe18,	// (0x0004ab82) bg_vkb2_func_pane_g

0xc2f0,	// (0x0004705a) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc2f0,	// (0x0004705a) bg_vkb2_fuc_pane_cp01

0x7432,	// (0x0004219c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7432,	// (0x0004219c) vkb2_top_cell_right_wide_pane_g1

0xc2f0,	// (0x0004705a) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc2f0,	// (0x0004705a) bg_vkb2_fuc_pane_cp02

0x74a6,	// (0x00042210) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x74a6,	// (0x00042210) vkb2_top_cell_right_narrow_pane_g1

0xd780,	// (0x000484ea) aid_touch_area_decrease_ParamLimits

0xd780,	// (0x000484ea) aid_touch_area_decrease

0xd7a4,	// (0x0004850e) aid_touch_area_increase_ParamLimits

0xd7a4,	// (0x0004850e) aid_touch_area_increase

0xd7b0,	// (0x0004851a) aid_touch_area_mute_ParamLimits

0xd7b0,	// (0x0004851a) aid_touch_area_mute

0xd7d4,	// (0x0004853e) aid_touch_area_slider_ParamLimits

0xd7d4,	// (0x0004853e) aid_touch_area_slider

0xd8c4,	// (0x0004862e) popup_slider_window_g4_ParamLimits

0xd8c4,	// (0x0004862e) popup_slider_window_g4

0xd8d0,	// (0x0004863a) popup_slider_window_g5_ParamLimits

0xd8d0,	// (0x0004863a) popup_slider_window_g5

0xd8f2,	// (0x0004865c) popup_slider_window_g6_ParamLimits

0xd8f2,	// (0x0004865c) popup_slider_window_g6

0xd932,	// (0x0004869c) popup_slider_window_t2_ParamLimits

0xd932,	// (0x0004869c) popup_slider_window_t2

0x0001,

0xfd19,	// (0x0004aa83) popup_slider_window_t_ParamLimits

0xfd19,	// (0x0004aa83) popup_slider_window_t

0xd94a,	// (0x000486b4) slider_pane_ParamLimits

0xd94a,	// (0x000486b4) slider_pane

0xe5cd,	// (0x00049337) slider_pane_g1_ParamLimits

0xe5cd,	// (0x00049337) slider_pane_g1

0xe5e1,	// (0x0004934b) slider_pane_g2_ParamLimits

0xe5e1,	// (0x0004934b) slider_pane_g2

0xe5f7,	// (0x00049361) slider_pane_g3_ParamLimits

0xe5f7,	// (0x00049361) slider_pane_g3

0x0003,

0xfe2b,	// (0x0004ab95) slider_pane_g_ParamLimits

0xfe2b,	// (0x0004ab95) slider_pane_g

0x95fa,	// (0x00044364) popup_tb_float_extension_window_ParamLimits

0x95fa,	// (0x00044364) popup_tb_float_extension_window

0xe623,	// (0x0004938d) aid_size_cell_tb_float_ext

0x7761,	// (0x000424cb) bg_popup_sub_window_cp28

0xe62f,	// (0x00049399) grid_tb_float_ext_pane

0xe63b,	// (0x000493a5) cell_tb_float_ext_pane_ParamLimits

0xe63b,	// (0x000493a5) cell_tb_float_ext_pane

0xe657,	// (0x000493c1) cell_tb_float_ext_pane_g1

0xe660,	// (0x000493ca) grid_highlight_pane_cp12

0x6bb4,	// (0x0004191e) cell_last_hwr_side_pane_ParamLimits

0x6bb4,	// (0x0004191e) cell_last_hwr_side_pane

0xc244,	// (0x00046fae) cell_last_hwr_side_pane_g1

0xe669,	// (0x000493d3) cell_last_hwr_side_pane_g2

0x0001,

0xfe34,	// (0x0004ab9e) cell_last_hwr_side_pane_g

0x7358,	// (0x000420c2) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7358,	// (0x000420c2) vkb2_area_bottom_space_btn_pane

0xc4dc,	// (0x00047246) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe16f,	// (0x00048ed9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x75f0,	// (0x0004235a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x760e,	// (0x00042378) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x760e,	// (0x00042378) vkb2_area_bottom_space_btn_pane_g1

0x7648,	// (0x000423b2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7648,	// (0x000423b2) vkb2_area_bottom_space_btn_pane_g2

0x767e,	// (0x000423e8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x767e,	// (0x000423e8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe39,	// (0x0004aba3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe39,	// (0x0004aba3) vkb2_area_bottom_space_btn_pane_g

0x6b24,	// (0x0004188e) cel_fep_hwr_func_pane_ParamLimits

0x6b24,	// (0x0004188e) cel_fep_hwr_func_pane

0x6b60,	// (0x000418ca) cell_hwr_side_button_pane_ParamLimits

0x6b60,	// (0x000418ca) cell_hwr_side_button_pane

0xdb93,	// (0x000488fd) aid_area_touch_clock_ParamLimits

0x7adf,	// (0x00042849) bg_uniindi_top_pane_ParamLimits

0xdba7,	// (0x00048911) uniindi_top_pane_g1_ParamLimits

0xdbbd,	// (0x00048927) uniindi_top_pane_g2_ParamLimits

0xdbc9,	// (0x00048933) uniindi_top_pane_g3_ParamLimits

0xdbda,	// (0x00048944) uniindi_top_pane_g4_ParamLimits

0xfd51,	// (0x0004aabb) uniindi_top_pane_g_ParamLimits

0xdbe7,	// (0x00048951) uniindi_top_pane_t1_ParamLimits

0x7adf,	// (0x00042849) bg_vkb2_func_pane_cp01_ParamLimits

0x7adf,	// (0x00042849) bg_vkb2_func_pane_cp01

0xe672,	// (0x000493dc) cel_fep_hwr_func_pane_g1_ParamLimits

0xe672,	// (0x000493dc) cel_fep_hwr_func_pane_g1

0x7adf,	// (0x00042849) bg_vkb2_func_pane_cp02_ParamLimits

0x7adf,	// (0x00042849) bg_vkb2_func_pane_cp02

0xe672,	// (0x000493dc) cell_hwr_side_button_pane_g1_ParamLimits

0xe672,	// (0x000493dc) cell_hwr_side_button_pane_g1

0x9a81,	// (0x000447eb) status_pane_g4_ParamLimits

0x9a81,	// (0x000447eb) status_pane_g4

0x9a9b,	// (0x00044805) status_pane_t1

0xbfe0,	// (0x00046d4a) form2_midp_gauge_slider_cont_pane

0xbfe8,	// (0x00046d52) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbffa,	// (0x00046d64) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc00c,	// (0x00046d76) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1d,	// (0x0004a887) form2_midp_gauge_slider_pane_t_ParamLimits

0xc01e,	// (0x00046d88) form2_midp_slider_pane_ParamLimits

0x6fde,	// (0x00041d48) aid_size_cell_func_vkb2_ParamLimits

0x6fde,	// (0x00041d48) aid_size_cell_func_vkb2

0xe60f,	// (0x00049379) slider_pane_g4_ParamLimits

0xe60f,	// (0x00049379) slider_pane_g4

0x76c8,	// (0x00042432) form2_midp_gauge_slider_pane_t2_cp01

0x76d6,	// (0x00042440) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x76d6,	// (0x00042440) form2_midp_gauge_slider_pane_t3_cp01

0x76f3,	// (0x0004245d) form2_midp_slider_pane_cp01

0x7761,	// (0x000424cb) navi_smil_pane

0xe6ab,	// (0x00049415) navi_smil_pane_g1

0xe6b3,	// (0x0004941d) navi_smil_pane_t1

0xe680,	// (0x000493ea) form2_midp_slider_pane_g1

0xe689,	// (0x000493f3) form2_midp_slider_pane_g2

0xe691,	// (0x000493fb) form2_midp_slider_pane_g3

0xe680,	// (0x000493ea) form2_midp_slider_pane_g4

0xe699,	// (0x00049403) form2_midp_slider_pane_g5

0x0004,

0xfe42,	// (0x0004abac) form2_midp_slider_pane_g

0x76b8,	// (0x00042422) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x76b8,	// (0x00042422) vkb2_area_bottom_space_btn_pane_g4

0x9899,	// (0x00044603) lc0_navi_pane_ParamLimits

0x9899,	// (0x00044603) lc0_navi_pane

0x9915,	// (0x0004467f) lc0_stat_indi_pane_ParamLimits

0x9915,	// (0x0004467f) lc0_stat_indi_pane

0x992c,	// (0x00044696) ls0_title_pane_ParamLimits

0x992c,	// (0x00044696) ls0_title_pane

0x80dc,	// (0x00042e46) bg_popup_sub_pane_cp14_ParamLimits

0xdb7a,	// (0x000488e4) list_uniindi_pane_ParamLimits

0xdb86,	// (0x000488f0) uniindi_top_pane_ParamLimits

0xdc25,	// (0x0004898f) list_single_uniindi_pane_g1_ParamLimits

0xdc38,	// (0x000489a2) list_single_uniindi_pane_t1_ParamLimits

0x76fc,	// (0x00042466) lc0_stat_clock_pane_ParamLimits

0x76fc,	// (0x00042466) lc0_stat_clock_pane

0xe6c1,	// (0x0004942b) lc0_stat_indi_pane_g1_ParamLimits

0xe6c1,	// (0x0004942b) lc0_stat_indi_pane_g1

0xe6ce,	// (0x00049438) lc0_stat_indi_pane_g2_ParamLimits

0xe6ce,	// (0x00049438) lc0_stat_indi_pane_g2

0x0001,

0xfe4d,	// (0x0004abb7) lc0_stat_indi_pane_g_ParamLimits

0xfe4d,	// (0x0004abb7) lc0_stat_indi_pane_g

0x7709,	// (0x00042473) lc0_uni_indicator_pane_ParamLimits

0x7709,	// (0x00042473) lc0_uni_indicator_pane

0xe6db,	// (0x00049445) ls0_title_pane_g1_ParamLimits

0xe6db,	// (0x00049445) ls0_title_pane_g1

0xe6ef,	// (0x00049459) ls0_title_pane_t1_ParamLimits

0xe6ef,	// (0x00049459) ls0_title_pane_t1

0x7716,	// (0x00042480) lc0_uni_indicator_pane_g1_ParamLimits

0x7716,	// (0x00042480) lc0_uni_indicator_pane_g1

0xe725,	// (0x0004948f) lc0_stat_clock_pane_t1

0x7761,	// (0x000424cb) main_ai5_pane

0xe733,	// (0x0004949d) ai5_sk_pane_ParamLimits

0xe733,	// (0x0004949d) ai5_sk_pane

0xe740,	// (0x000494aa) cell_ai5_widget_pane_ParamLimits

0xe740,	// (0x000494aa) cell_ai5_widget_pane

0xe7b6,	// (0x00049520) aid_size_cell_widget_grid

0xe7ca,	// (0x00049534) bg_ai5_widget_pane_ParamLimits

0xe7ca,	// (0x00049534) bg_ai5_widget_pane

0xe7f2,	// (0x0004955c) cell_ai5_widget_pane_g2

0xe802,	// (0x0004956c) cell_ai5_widget_pane_g3

0xe816,	// (0x00049580) cell_ai5_widget_pane_g4

0xe822,	// (0x0004958c) cell_ai5_widget_pane_g5

0xe82e,	// (0x00049598) cell_ai5_widget_pane_g6

0xe83c,	// (0x000495a6) cell_ai5_widget_pane_g7

0xe884,	// (0x000495ee) cell_ai5_widget_pane_t1_ParamLimits

0xe884,	// (0x000495ee) cell_ai5_widget_pane_t1

0xe8a1,	// (0x0004960b) cell_ai5_widget_pane_t2_ParamLimits

0xe8a1,	// (0x0004960b) cell_ai5_widget_pane_t2

0xe8b9,	// (0x00049623) cell_ai5_widget_pane_t3_ParamLimits

0xe8b9,	// (0x00049623) cell_ai5_widget_pane_t3

0xe8d1,	// (0x0004963b) cell_ai5_widget_pane_t4_ParamLimits

0xe8d1,	// (0x0004963b) cell_ai5_widget_pane_t4

0xe8eb,	// (0x00049655) cell_ai5_widget_pane_t5_ParamLimits

0xe8eb,	// (0x00049655) cell_ai5_widget_pane_t5

0xe90a,	// (0x00049674) cell_ai5_widget_pane_t6_ParamLimits

0xe90a,	// (0x00049674) cell_ai5_widget_pane_t6

0xe91c,	// (0x00049686) cell_ai5_widget_pane_t7_ParamLimits

0xe91c,	// (0x00049686) cell_ai5_widget_pane_t7

0xe935,	// (0x0004969f) cell_ai5_widget_pane_t8_ParamLimits

0xe935,	// (0x0004969f) cell_ai5_widget_pane_t8

0x0009,

0xfe67,	// (0x0004abd1) cell_ai5_widget_pane_t_ParamLimits

0xfe67,	// (0x0004abd1) cell_ai5_widget_pane_t

0xe97d,	// (0x000496e7) grid_ai5_widget_pane

0x80dc,	// (0x00042e46) highlight_cell_ai5_widget_pane_ParamLimits

0x80dc,	// (0x00042e46) highlight_cell_ai5_widget_pane

0xe994,	// (0x000496fe) ai5_sk_left_pane

0xe99e,	// (0x00049708) ai5_sk_middle_pane

0xe9a8,	// (0x00049712) ai5_sk_right_pane

0xe9b2,	// (0x0004971c) bg_ai5_widget_pane_g1_ParamLimits

0xe9b2,	// (0x0004971c) bg_ai5_widget_pane_g1

0xe9be,	// (0x00049728) bg_ai5_widget_pane_g2_ParamLimits

0xe9be,	// (0x00049728) bg_ai5_widget_pane_g2

0xe9ca,	// (0x00049734) bg_ai5_widget_pane_g3_ParamLimits

0xe9ca,	// (0x00049734) bg_ai5_widget_pane_g3

0xe9d6,	// (0x00049740) bg_ai5_widget_pane_g4_ParamLimits

0xe9d6,	// (0x00049740) bg_ai5_widget_pane_g4

0xe9e2,	// (0x0004974c) bg_ai5_widget_pane_g5_ParamLimits

0xe9e2,	// (0x0004974c) bg_ai5_widget_pane_g5

0xe9ee,	// (0x00049758) bg_ai5_widget_pane_g6_ParamLimits

0xe9ee,	// (0x00049758) bg_ai5_widget_pane_g6

0xe9fa,	// (0x00049764) bg_ai5_widget_pane_g7_ParamLimits

0xe9fa,	// (0x00049764) bg_ai5_widget_pane_g7

0xea06,	// (0x00049770) bg_ai5_widget_pane_g8_ParamLimits

0xea06,	// (0x00049770) bg_ai5_widget_pane_g8

0xea12,	// (0x0004977c) bg_ai5_widget_pane_g9_ParamLimits

0xea12,	// (0x0004977c) bg_ai5_widget_pane_g9

0x0008,

0xfe7c,	// (0x0004abe6) bg_ai5_widget_pane_g_ParamLimits

0xfe7c,	// (0x0004abe6) bg_ai5_widget_pane_g

0xea39,	// (0x000497a3) cell_shortcut_ai5_widget_pane_ParamLimits

0xea39,	// (0x000497a3) cell_shortcut_ai5_widget_pane

0x7921,	// (0x0004268b) bg_cell_shortcut_ai5_widget_pane

0xea4b,	// (0x000497b5) cell_grid_ai5_widget_pane_g1

0xea54,	// (0x000497be) highlight_cell_shortcut_ai5_widget_pane

0x9c10,	// (0x0004497a) ai5_sk_left_pane_g1

0xea5c,	// (0x000497c6) ai5_sk_left_pane_g2

0xea64,	// (0x000497ce) ai5_sk_left_pane_g3

0xea6c,	// (0x000497d6) ai5_sk_left_pane_g4

0x0003,

0xfe8f,	// (0x0004abf9) ai5_sk_left_pane_g

0xea74,	// (0x000497de) ai5_sk_left_pane_t1

0x9c08,	// (0x00044972) ai5_sk_right_pane_g1

0xea82,	// (0x000497ec) ai5_sk_right_pane_g2

0xea8a,	// (0x000497f4) ai5_sk_right_pane_g3

0xea92,	// (0x000497fc) ai5_sk_right_pane_g4

0x0003,

0xfe98,	// (0x0004ac02) ai5_sk_right_pane_g

0xea9a,	// (0x00049804) ai5_sk_right_pane_t1

0x9c08,	// (0x00044972) ai5_sk_middle_pane_g1

0x9c10,	// (0x0004497a) ai5_sk_middle_pane_g2

0x9c28,	// (0x00044992) ai5_sk_middle_pane_g3

0xea8a,	// (0x000497f4) ai5_sk_middle_pane_g4

0xea64,	// (0x000497ce) ai5_sk_middle_pane_g5

0xeaa8,	// (0x00049812) ai5_sk_middle_pane_g6

0xeab0,	// (0x0004981a) ai5_sk_middle_pane_g7

0x0006,

0xfea1,	// (0x0004ac0b) ai5_sk_middle_pane_g

0x971b,	// (0x00044485) aid_touch_area_size_lc0_ParamLimits

0x971b,	// (0x00044485) aid_touch_area_size_lc0

0x6cc3,	// (0x00041a2d) cell_hwr_candidate_pane_t1_ParamLimits

0x9739,	// (0x000444a3) aid_touch_navi_pane

0x9a2b,	// (0x00044795) status_dt_navi_pane_ParamLimits

0x9a2b,	// (0x00044795) status_dt_navi_pane

0x9a38,	// (0x000447a2) status_dt_sta_pane_ParamLimits

0x9a38,	// (0x000447a2) status_dt_sta_pane

0xeab8,	// (0x00049822) dt_sta_controll_pane

0xeac5,	// (0x0004982f) dt_sta_indi_pane

0xead6,	// (0x00049840) dt_sta_title_pane

0x7adf,	// (0x00042849) bg_dt_sta_indi_pane_ParamLimits

0x7adf,	// (0x00042849) bg_dt_sta_indi_pane

0xeae9,	// (0x00049853) dt_sta_battery_pane

0xeaf1,	// (0x0004985b) dt_sta_indi_pane_g1

0xeafa,	// (0x00049864) dt_sta_indi_pane_g2

0xeb03,	// (0x0004986d) dt_sta_indi_pane_g3

0x0002,

0xfeb0,	// (0x0004ac1a) dt_sta_indi_pane_g

0xeb0c,	// (0x00049876) dt_sta_signal_pane

0x80dc,	// (0x00042e46) bg_dt_sta_title_pane_ParamLimits

0x80dc,	// (0x00042e46) bg_dt_sta_title_pane

0xeb15,	// (0x0004987f) dt_sta_title_pane_g1

0xeb1d,	// (0x00049887) dt_sta_title_pane_t1_ParamLimits

0xeb1d,	// (0x00049887) dt_sta_title_pane_t1

0x7761,	// (0x000424cb) bg_dt_sta_control_pane

0xeb32,	// (0x0004989c) dt_sta_controll_pane_g1

0xeb3b,	// (0x000498a5) bg_dt_sta_title_pane_g1

0xeb44,	// (0x000498ae) bg_dt_sta_title_pane_g2

0xeb4d,	// (0x000498b7) bg_dt_sta_title_pane_g3

0x0002,

0xfeb7,	// (0x0004ac21) bg_dt_sta_title_pane_g

0xc244,	// (0x00046fae) bg_dt_sta_indi_pane_g1

0xeb56,	// (0x000498c0) dt_sta_signal_pane_g1

0xeb5e,	// (0x000498c8) dt_sta_signal_pane_g2

0x0001,

0xfebe,	// (0x0004ac28) dt_sta_signal_pane_g

0xeb66,	// (0x000498d0) dt_sta_battery_pane_g1

0xeb6f,	// (0x000498d9) dt_sta_battery_pane_t1

0xc244,	// (0x00046fae) bg_dt_sta_control_pane_g1

0x8838,	// (0x000435a2) fep_china_uni_eep_pane

0x8840,	// (0x000435aa) fep_china_uni_entry_pane_ParamLimits

0x8850,	// (0x000435ba) popup_fep_china_uni_window_g1_ParamLimits

0x8860,	// (0x000435ca) popup_fep_china_uni_window_g2_ParamLimits

0x8860,	// (0x000435ca) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0004a4cc) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0004a4cc) popup_fep_china_uni_window_g

0xeb7e,	// (0x000498e8) fep_china_uni_eep_pane_g1

0xeb86,	// (0x000498f0) fep_china_uni_eep_pane_t1

0xe6a2,	// (0x0004940c) aid_touch_area_size_smil_player

0x9891,	// (0x000445fb) lc0_clock_pane

0x9a8f,	// (0x000447f9) status_pane_g5_ParamLimits

0x9a8f,	// (0x000447f9) status_pane_g5

0x927f,	// (0x00043fe9) popup_keymap_window

0x9a4d,	// (0x000447b7) status_icon_pane

0xe802,	// (0x0004956c) cell_ai5_widget_pane_g3_ParamLimits

0xe816,	// (0x00049580) cell_ai5_widget_pane_g4_ParamLimits

0xe822,	// (0x0004958c) cell_ai5_widget_pane_g5_ParamLimits

0xe848,	// (0x000495b2) cell_ai5_widget_pane_g8_ParamLimits

0xe848,	// (0x000495b2) cell_ai5_widget_pane_g8

0xe85c,	// (0x000495c6) cell_ai5_widget_pane_g9_ParamLimits

0xe85c,	// (0x000495c6) cell_ai5_widget_pane_g9

0xe870,	// (0x000495da) cell_ai5_widget_pane_g10_ParamLimits

0xe870,	// (0x000495da) cell_ai5_widget_pane_g10

0xeb95,	// (0x000498ff) status_icon_pane_g1

0x7761,	// (0x000424cb) bg_popup_sub_pane_cp13

0xeb9d,	// (0x00049907) popup_keymap_window_t1

0x9015,	// (0x00043d7f) control_pane_g6_ParamLimits

0x9015,	// (0x00043d7f) control_pane_g6

0x9022,	// (0x00043d8c) control_pane_g7_ParamLimits

0x9022,	// (0x00043d8c) control_pane_g7

0x902f,	// (0x00043d99) control_pane_g8_ParamLimits

0x902f,	// (0x00043d99) control_pane_g8

0xeab8,	// (0x00049822) dt_sta_controll_pane_ParamLimits

0xeac5,	// (0x0004982f) dt_sta_indi_pane_ParamLimits

0xead6,	// (0x00049840) dt_sta_title_pane_ParamLimits

0x8014,	// (0x00042d7e) aid_size_touch_scroll_bar_cale

0x5cb8,	// (0x00040a22) popup_discreet_window_ParamLimits

0x5cb8,	// (0x00040a22) popup_discreet_window

0x5d46,	// (0x00040ab0) popup_sk_window

0xa275,	// (0x00044fdf) bg_popup_sub_pane_cp28_ParamLimits

0xa275,	// (0x00044fdf) bg_popup_sub_pane_cp28

0xebab,	// (0x00049915) popup_discreet_window_g1_ParamLimits

0xebab,	// (0x00049915) popup_discreet_window_g1

0xebcb,	// (0x00049935) popup_discreet_window_t1_ParamLimits

0xebcb,	// (0x00049935) popup_discreet_window_t1

0xebe9,	// (0x00049953) popup_discreet_window_t2_ParamLimits

0xebe9,	// (0x00049953) popup_discreet_window_t2

0x0002,

0xfec3,	// (0x0004ac2d) popup_discreet_window_t_ParamLimits

0xfec3,	// (0x0004ac2d) popup_discreet_window_t

0x7729,	// (0x00042493) popup_sk_window_g1

0x7733,	// (0x0004249d) popup_sk_window_g2

0x0001,

0xfeca,	// (0x0004ac34) popup_sk_window_g

0xec3b,	// (0x000499a5) popup_sk_window_t1

0xec49,	// (0x000499b3) popup_sk_window_t1_copy1

0xe7f2,	// (0x0004955c) cell_ai5_widget_pane_g2_ParamLimits

0xe947,	// (0x000496b1) cell_ai5_widget_pane_t9_ParamLimits

0xe947,	// (0x000496b1) cell_ai5_widget_pane_t9

0x7761,	// (0x000424cb) main_fep_fshwr2_pane

0xec57,	// (0x000499c1) aid_fshwr2_btn_pane

0xec5f,	// (0x000499c9) aid_fshwr2_syb_pane

0xec67,	// (0x000499d1) aid_fshwr2_txt_pane

0xec6f,	// (0x000499d9) fshwr2_func_candi_pane

0xec79,	// (0x000499e3) fshwr2_hwr_syb_pane

0xec83,	// (0x000499ed) fshwr2_icf_pane

0x7761,	// (0x000424cb) fshwr2_icf_bg_pane

0xeca5,	// (0x00049a0f) fshwr2_icf_pane_t1_ParamLimits

0xeca5,	// (0x00049a0f) fshwr2_icf_pane_t1

0xc244,	// (0x00046fae) fshwr2_func_candi_pane_g1

0xecbc,	// (0x00049a26) fshwr2_func_candi_row_pane_ParamLimits

0xecbc,	// (0x00049a26) fshwr2_func_candi_row_pane

0xeccd,	// (0x00049a37) cell_fshwr2_syb_pane_ParamLimits

0xeccd,	// (0x00049a37) cell_fshwr2_syb_pane

0xc4dc,	// (0x00047246) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc4dc,	// (0x00047246) fshwr2_hwr_syb_pane_g1

0x7761,	// (0x000424cb) bg_popup_call_pane_cp01

0xece7,	// (0x00049a51) fshwr2_func_candi_cell_pane_ParamLimits

0xece7,	// (0x00049a51) fshwr2_func_candi_cell_pane

0xed19,	// (0x00049a83) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed19,	// (0x00049a83) fshwr2_func_candi_cell_bg_pane

0xed33,	// (0x00049a9d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed33,	// (0x00049a9d) fshwr2_func_candi_cell_pane_g1

0xed53,	// (0x00049abd) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed53,	// (0x00049abd) fshwr2_func_candi_cell_pane_t1

0x7761,	// (0x000424cb) bg_button_pane_cp08

0x8d3a,	// (0x00043aa4) cell_fshwr2_syb_bg_pane

0xed66,	// (0x00049ad0) cell_fshwr2_syb_bg_pane_g1

0xed6e,	// (0x00049ad8) cell_fshwr2_syb_bg_pane_t1

0x80dc,	// (0x00042e46) main_tmo_pane

0xad9f,	// (0x00045b09) uni_indicator_pane_g1_ParamLimits

0xadb4,	// (0x00045b1e) uni_indicator_pane_g2_ParamLimits

0xadca,	// (0x00045b34) uni_indicator_pane_g3_ParamLimits

0xade0,	// (0x00045b4a) uni_indicator_pane_g4_ParamLimits

0xade0,	// (0x00045b4a) uni_indicator_pane_g4

0xadf4,	// (0x00045b5e) uni_indicator_pane_g5_ParamLimits

0xadf4,	// (0x00045b5e) uni_indicator_pane_g5

0xae08,	// (0x00045b72) uni_indicator_pane_g6_ParamLimits

0xae08,	// (0x00045b72) uni_indicator_pane_g6

0xf95f,	// (0x0004a6c9) uni_indicator_pane_g_ParamLimits

0xd750,	// (0x000484ba) popup_tmo_note_window_ParamLimits

0xd750,	// (0x000484ba) popup_tmo_note_window

0x7761,	// (0x000424cb) fshwr2_bg_pane

0xed44,	// (0x00049aae) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed44,	// (0x00049aae) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecf,	// (0x0004ac39) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecf,	// (0x0004ac39) fshwr2_func_candi_cell_pane_g

0xc244,	// (0x00046fae) bg_popup_window_pane_cp01

0xed7d,	// (0x00049ae7) bg_popup_window_pane_g1_cp01

0xed86,	// (0x00049af0) bg_popup_window_pane_cp22_ParamLimits

0xed86,	// (0x00049af0) bg_popup_window_pane_cp22

0xed94,	// (0x00049afe) listscroll_tmo_link_pane_ParamLimits

0xed94,	// (0x00049afe) listscroll_tmo_link_pane

0xedd4,	// (0x00049b3e) popup_tmo_note_window_g1_ParamLimits

0xedd4,	// (0x00049b3e) popup_tmo_note_window_g1

0xede1,	// (0x00049b4b) tmo_note_info_pane_ParamLimits

0xede1,	// (0x00049b4b) tmo_note_info_pane

0xedfb,	// (0x00049b65) list_tmo_note_info_pane_g1_ParamLimits

0xedfb,	// (0x00049b65) list_tmo_note_info_pane_g1

0xee12,	// (0x00049b7c) list_tmo_note_info_pane_g2_ParamLimits

0xee12,	// (0x00049b7c) list_tmo_note_info_pane_g2

0x0001,

0xfed4,	// (0x0004ac3e) list_tmo_note_info_pane_g_ParamLimits

0xfed4,	// (0x0004ac3e) list_tmo_note_info_pane_g

0xee2e,	// (0x00049b98) list_tmo_note_info_text_pane_ParamLimits

0xee2e,	// (0x00049b98) list_tmo_note_info_text_pane

0xeeb3,	// (0x00049c1d) list_tmo_link_pane

0xeec0,	// (0x00049c2a) scroll_pane_cp20

0xeecd,	// (0x00049c37) list_single_tmo_link_pane_ParamLimits

0xeecd,	// (0x00049c37) list_single_tmo_link_pane

0xeedd,	// (0x00049c47) list_single_tmo_link_pane_t1

0xeeeb,	// (0x00049c55) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeeb,	// (0x00049c55) list_tmo_note_info_text_pane_t1

0x81a2,	// (0x00042f0c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x81a2,	// (0x00042f0c) aid_size_touch_scroll_bar_cp01

0x52f0,	// (0x0004005a) aid_size_touch_slider_marker

0x5d2e,	// (0x00040a98) popup_settings_window_ParamLimits

0x5d2e,	// (0x00040a98) popup_settings_window

0x5469,	// (0x000401d3) popup_candi_list_indi_window

0x9739,	// (0x000444a3) aid_touch_navi_pane_ParamLimits

0x6f31,	// (0x00041c9b) rs_clock_indi_pane

0x6f3a,	// (0x00041ca4) sctrl_sk_bottom_pane_ParamLimits

0x6f4b,	// (0x00041cb5) sctrl_sk_top_pane_ParamLimits

0x7030,	// (0x00041d9a) popup_fep_tooltip_window

0xe7b6,	// (0x00049520) aid_size_cell_widget_grid_ParamLimits

0xe7e6,	// (0x00049550) cell_ai5_widget_pane_g1_ParamLimits

0xe7e6,	// (0x00049550) cell_ai5_widget_pane_g1

0xe82e,	// (0x00049598) cell_ai5_widget_pane_g6_ParamLimits

0xe83c,	// (0x000495a6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe52,	// (0x0004abbc) cell_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x0004abbc) cell_ai5_widget_pane_g

0xe96b,	// (0x000496d5) cell_ai5_widget_pane_t10_ParamLimits

0xe96b,	// (0x000496d5) cell_ai5_widget_pane_t10

0xe97d,	// (0x000496e7) grid_ai5_widget_pane_ParamLimits

0xea1e,	// (0x00049788) cell_contacts_ai5_widget_pane_ParamLimits

0xea1e,	// (0x00049788) cell_contacts_ai5_widget_pane

0xebfe,	// (0x00049968) popup_discreet_window_t3_ParamLimits

0xebfe,	// (0x00049968) popup_discreet_window_t3

0xec8d,	// (0x000499f7) popup_fshwr2_char_preview_window_ParamLimits

0xec8d,	// (0x000499f7) popup_fshwr2_char_preview_window

0xee4c,	// (0x00049bb6) tmo_note_info_pane_t1

0xee61,	// (0x00049bcb) tmo_note_info_pane_t2

0xee7a,	// (0x00049be4) tmo_note_info_pane_t3

0xee8f,	// (0x00049bf9) tmo_note_info_pane_t4

0xeea1,	// (0x00049c0b) tmo_note_info_pane_t5

0x0004,

0xfed9,	// (0x0004ac43) tmo_note_info_pane_t

0xeeb3,	// (0x00049c1d) list_tmo_link_pane_ParamLimits

0xeec0,	// (0x00049c2a) scroll_pane_cp20_ParamLimits

0x7761,	// (0x000424cb) bg_popup_fep_char_preview_window_cp01

0xef04,	// (0x00049c6e) popup_fshwr2_char_preview_window_t1

0xef12,	// (0x00049c7c) popup_candi_list_indi_window_g1

0xef1b,	// (0x00049c85) bg_cell_contacts_ai5_widget_pane

0xef27,	// (0x00049c91) cell_contacts_ai5_widget_pane_g1

0xef3b,	// (0x00049ca5) cell_contacts_ai5_widget_pane_g2

0xef4a,	// (0x00049cb4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee4,	// (0x0004ac4e) cell_contacts_ai5_widget_pane_g

0xef5d,	// (0x00049cc7) cell_contacts_ai5_widget_pane_t1

0x80dc,	// (0x00042e46) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd7,	// (0x00049d41) settings_container_pane

0x8d3a,	// (0x00043aa4) listscroll_set_pane_copy1

0xb9bb,	// (0x00046725) scroll_pane_cp121_copy1

0xefe3,	// (0x00049d4d) set_content_pane_copy1

0xefeb,	// (0x00049d55) aid_height_set_list_copy1_ParamLimits

0xefeb,	// (0x00049d55) aid_height_set_list_copy1

0xb008,	// (0x00045d72) aid_size_parent_copy1_ParamLimits

0xb008,	// (0x00045d72) aid_size_parent_copy1

0xeff7,	// (0x00049d61) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff7,	// (0x00049d61) button_value_adjust_pane_cp6_copy1

0x90c4,	// (0x00043e2e) list_highlight_pane_cp2_copy1_ParamLimits

0x90c4,	// (0x00043e2e) list_highlight_pane_cp2_copy1

0xf00b,	// (0x00049d75) list_set_pane_copy1_ParamLimits

0xf00b,	// (0x00049d75) list_set_pane_copy1

0xef72,	// (0x00049cdc) main_pane_set_t1_copy1_ParamLimits

0xef72,	// (0x00049cdc) main_pane_set_t1_copy1

0xefac,	// (0x00049d16) main_pane_set_t2_copy1_ParamLimits

0xefac,	// (0x00049d16) main_pane_set_t2_copy1

0xf0d2,	// (0x00049e3c) main_pane_set_t3_copy1

0xf0e0,	// (0x00049e4a) main_pane_set_t4_copy1

0xefcb,	// (0x00049d35) set_content_pane_g1_copy1_ParamLimits

0xefcb,	// (0x00049d35) set_content_pane_g1_copy1

0xf0ee,	// (0x00049e58) setting_code_pane_copy1

0xf0f8,	// (0x00049e62) setting_slider_graphic_pane_copy1

0xf0f8,	// (0x00049e62) setting_slider_pane_copy1

0xf102,	// (0x00049e6c) setting_text_pane_copy1

0xf10c,	// (0x00049e76) setting_volume_pane_copy1

0xf115,	// (0x00049e7f) settings_code_pane_cp2_copy1

0xf11d,	// (0x00049e87) settings_code_pane_cp_copy1_ParamLimits

0xf11d,	// (0x00049e87) settings_code_pane_cp_copy1

0xf131,	// (0x00049e9b) volume_set_pane_copy1

0xf13d,	// (0x00049ea7) volume_set_pane_g10_copy1

0xf149,	// (0x00049eb3) volume_set_pane_g1_copy1

0xf153,	// (0x00049ebd) volume_set_pane_g2_copy1

0xf15d,	// (0x00049ec7) volume_set_pane_g3_copy1

0xf167,	// (0x00049ed1) volume_set_pane_g4_copy1

0xf171,	// (0x00049edb) volume_set_pane_g5_copy1

0xf17b,	// (0x00049ee5) volume_set_pane_g6_copy1

0xf185,	// (0x00049eef) volume_set_pane_g7_copy1

0xf18f,	// (0x00049ef9) volume_set_pane_g8_copy1

0xf199,	// (0x00049f03) volume_set_pane_g9_copy1

0x7855,	// (0x000425bf) bg_set_opt_pane_cp_copy1_ParamLimits

0x7855,	// (0x000425bf) bg_set_opt_pane_cp_copy1

0xf1a3,	// (0x00049f0d) setting_slider_pane_t1_copy1_ParamLimits

0xf1a3,	// (0x00049f0d) setting_slider_pane_t1_copy1

0xf1c1,	// (0x00049f2b) setting_slider_pane_t2_copy1_ParamLimits

0xf1c1,	// (0x00049f2b) setting_slider_pane_t2_copy1

0xf1db,	// (0x00049f45) setting_slider_pane_t3_copy1_ParamLimits

0xf1db,	// (0x00049f45) setting_slider_pane_t3_copy1

0xf1f3,	// (0x00049f5d) slider_set_pane_copy1_ParamLimits

0xf1f3,	// (0x00049f5d) slider_set_pane_copy1

0x8143,	// (0x00042ead) set_opt_bg_pane_g1_copy2

0x814b,	// (0x00042eb5) set_opt_bg_pane_g2_copy2

0xf209,	// (0x00049f73) set_opt_bg_pane_g3_copy2

0x815b,	// (0x00042ec5) set_opt_bg_pane_g4_copy2

0x8163,	// (0x00042ecd) set_opt_bg_pane_g5_copy2

0x816b,	// (0x00042ed5) set_opt_bg_pane_g6_copy2

0xf213,	// (0x00049f7d) set_opt_bg_pane_g7_copy2

0xf21d,	// (0x00049f87) set_opt_bg_pane_g8_copy2

0xf227,	// (0x00049f91) set_opt_bg_pane_g9_copy2

0xf231,	// (0x00049f9b) aid_size_touch_slider_mark_copy1_ParamLimits

0xf231,	// (0x00049f9b) aid_size_touch_slider_mark_copy1

0xf245,	// (0x00049faf) slider_set_pane_g1_copy1

0xf24e,	// (0x00049fb8) slider_set_pane_g2_copy1

0xb651,	// (0x000463bb) slider_set_pane_g3_copy1_ParamLimits

0xb651,	// (0x000463bb) slider_set_pane_g3_copy1

0xb665,	// (0x000463cf) slider_set_pane_g4_copy1_ParamLimits

0xb665,	// (0x000463cf) slider_set_pane_g4_copy1

0xb67d,	// (0x000463e7) slider_set_pane_g5_copy1_ParamLimits

0xb67d,	// (0x000463e7) slider_set_pane_g5_copy1

0xb651,	// (0x000463bb) slider_set_pane_g6_copy1_ParamLimits

0xb651,	// (0x000463bb) slider_set_pane_g6_copy1

0xf256,	// (0x00049fc0) slider_set_pane_g7_copy1_ParamLimits

0xf256,	// (0x00049fc0) slider_set_pane_g7_copy1

0x7775,	// (0x000424df) bg_set_opt_pane_cp2_copy1

0xf26c,	// (0x00049fd6) setting_slider_graphic_pane_g1_copy1

0xf275,	// (0x00049fdf) setting_slider_graphic_pane_t1_copy1

0xf285,	// (0x00049fef) setting_slider_graphic_pane_t2_copy1

0xf295,	// (0x00049fff) slider_set_pane_cp_copy1

0xf2a5,	// (0x0004a00f) input_focus_pane_cp1_copy1

0xf2ae,	// (0x0004a018) list_set_text_pane_copy1

0xf2b6,	// (0x0004a020) setting_text_pane_g1_copy1

0x4ccc,	// (0x0003fa36) set_text_pane_t1_copy1

0xf2a5,	// (0x0004a00f) input_focus_pane_cp2_copy1

0xf2b6,	// (0x0004a020) setting_code_pane_g1_copy1

0xf2bf,	// (0x0004a029) setting_code_pane_t1_copy1

0xf2cd,	// (0x0004a037) list_set_graphic_pane_copy1

0x7775,	// (0x000424df) bg_set_opt_pane_cp4_copy1

0x8a34,	// (0x0004379e) list_set_graphic_pane_g1_copy1_ParamLimits

0x8a34,	// (0x0004379e) list_set_graphic_pane_g1_copy1

0xf2df,	// (0x0004a049) list_set_graphic_pane_g2_copy1

0x8a4c,	// (0x000437b6) list_set_graphic_pane_t1_copy1_ParamLimits

0x8a4c,	// (0x000437b6) list_set_graphic_pane_t1_copy1

0xc244,	// (0x00046fae) rs_clock_indi_pane_g1

0xf2e7,	// (0x0004a051) rs_clock_indi_pane_t1

0xf2f5,	// (0x0004a05f) rs_indi_pane

0xf2fd,	// (0x0004a067) rs_indi_pane_g1

0xf306,	// (0x0004a070) rs_indi_pane_g2

0xf30f,	// (0x0004a079) rs_indi_pane_g3

0x0002,

0xfeeb,	// (0x0004ac55) rs_indi_pane_g

0x8d3a,	// (0x00043aa4) bg_popup_preview_window_pane_cp03

0xf318,	// (0x0004a082) popup_fep_tooltip_window_t1

0xcef8,	// (0x00047c62) popup_note2_window_g2_ParamLimits

0xcef8,	// (0x00047c62) popup_note2_window_g2

0x0001,

0xfc89,	// (0x0004a9f3) popup_note2_window_g_ParamLimits

0xfc89,	// (0x0004a9f3) popup_note2_window_g

0xd400,	// (0x0004816a) bg_popup_sub_pane_cp11_ParamLimits

0xd40d,	// (0x00048177) cell_ai3_links_pane_g1_ParamLimits

0xd424,	// (0x0004818e) cell_ai3_links_pane_t1

0x4ccc,	// (0x0003fa36) set_text_pane_t1_copy1_ParamLimits

0x8c47,	// (0x000439b1) cell_graphic_popup_pane_cp2_ParamLimits

0x8c47,	// (0x000439b1) cell_graphic_popup_pane_cp2

0xf326,	// (0x0004a090) cell_graphic_popup_pane_g1_cp2

0x7e27,	// (0x00042b91) cell_graphic_popup_pane_g2_cp2

0xf32e,	// (0x0004a098) cell_graphic_popup_pane_g3_cp2

0xf336,	// (0x0004a0a0) cell_graphic_popup_pane_t2_cp2

0x7e38,	// (0x00042ba2) grid_highlight_pane_cp3_cp2

0x848f,	// (0x000431f9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x80dc,	// (0x00042e46) main_tmo_pane_ParamLimits

0xd744,	// (0x000484ae) popup_tmo_big_image_note_window

0xe7d6,	// (0x00049540) cell_ai5_widget_list_pane

0xe7de,	// (0x00049548) cell_ai5_widget_lrg_icon_pane

0xee4c,	// (0x00049bb6) tmo_note_info_pane_t1_ParamLimits

0xee61,	// (0x00049bcb) tmo_note_info_pane_t2_ParamLimits

0xee7a,	// (0x00049be4) tmo_note_info_pane_t3_ParamLimits

0xee8f,	// (0x00049bf9) tmo_note_info_pane_t4_ParamLimits

0xeea1,	// (0x00049c0b) tmo_note_info_pane_t5_ParamLimits

0xfed9,	// (0x0004ac43) tmo_note_info_pane_t_ParamLimits

0xefd7,	// (0x00049d41) settings_container_pane_ParamLimits

0xf29d,	// (0x0004a007) indicator_popup_pane_cp5

0xf29d,	// (0x0004a007) indicator_popup_pane_cp6

0xf2cd,	// (0x0004a037) list_set_graphic_pane_copy1_ParamLimits

0x7761,	// (0x000424cb) bg_popup_window_pane_cp23

0xf344,	// (0x0004a0ae) popup_tmo_big_image_note_window_g1

0xf350,	// (0x0004a0ba) popup_tmo_big_image_note_window_t1

0xf360,	// (0x0004a0ca) popup_tmo_big_image_note_window_t2

0xf370,	// (0x0004a0da) popup_tmo_big_image_note_window_t3

0x0002,

0xfef2,	// (0x0004ac5c) popup_tmo_big_image_note_window_t

0xf380,	// (0x0004a0ea) cell_ai5_widget_lrg_icon_pane_g1

0xf388,	// (0x0004a0f2) cell_ai5_widget_lrg_icon_pane_t1

0xf396,	// (0x0004a100) cell_ai5_widget_list_row_pane_ParamLimits

0xf396,	// (0x0004a100) cell_ai5_widget_list_row_pane

0xf3af,	// (0x0004a119) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3af,	// (0x0004a119) cell_ai5_widget_list_row_pane_g1

0xf3bc,	// (0x0004a126) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3bc,	// (0x0004a126) cell_ai5_widget_list_row_pane_t1

0xf3d4,	// (0x0004a13e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3d4,	// (0x0004a13e) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef9,	// (0x0004ac63) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef9,	// (0x0004ac63) cell_ai5_widget_list_row_pane_t

0x7761,	// (0x000424cb) main_fep_vtchi_ss_pane

0xf3e6,	// (0x0004a150) popup_fep_char_pre_window

0xf3ee,	// (0x0004a158) popup_fep_ituss_window

0xf3f9,	// (0x0004a163) popup_fep_vkbss_window

0xf404,	// (0x0004a16e) grid_vkbss_keypad_pane_ParamLimits

0xf404,	// (0x0004a16e) grid_vkbss_keypad_pane

0xf414,	// (0x0004a17e) ituss_keypad_pane

0xf41c,	// (0x0004a186) aid_vkbss_key_offset_ParamLimits

0xf41c,	// (0x0004a186) aid_vkbss_key_offset

0xf42b,	// (0x0004a195) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x0004a195) cell_vkbss_key_pane

0xf441,	// (0x0004a1ab) bg_cell_vkbss_key_g1_ParamLimits

0xf441,	// (0x0004a1ab) bg_cell_vkbss_key_g1

0xf44d,	// (0x0004a1b7) cell_vkbss_key_3p_pane_ParamLimits

0xf44d,	// (0x0004a1b7) cell_vkbss_key_3p_pane

0xf467,	// (0x0004a1d1) cell_vkbss_key_g1_ParamLimits

0xf467,	// (0x0004a1d1) cell_vkbss_key_g1

0xf481,	// (0x0004a1eb) cell_vkbss_key_t1_ParamLimits

0xf481,	// (0x0004a1eb) cell_vkbss_key_t1

0xf4ac,	// (0x0004a216) cell_ituss_key_pane_ParamLimits

0xf4ac,	// (0x0004a216) cell_ituss_key_pane

0xf4bb,	// (0x0004a225) bg_cell_ituss_key_g1_ParamLimits

0xf4bb,	// (0x0004a225) bg_cell_ituss_key_g1

0xf4c7,	// (0x0004a231) cell_ituss_key_pane_g1_ParamLimits

0xf4c7,	// (0x0004a231) cell_ituss_key_pane_g1

0xf4d3,	// (0x0004a23d) cell_ituss_key_pane_g2_ParamLimits

0xf4d3,	// (0x0004a23d) cell_ituss_key_pane_g2

0x0001,

0xfefe,	// (0x0004ac68) cell_ituss_key_pane_g_ParamLimits

0xfefe,	// (0x0004ac68) cell_ituss_key_pane_g

0xf4e7,	// (0x0004a251) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x0004a251) cell_ituss_key_t1

0xf505,	// (0x0004a26f) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x0004a26f) cell_ituss_key_t2

0xf524,	// (0x0004a28e) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x0004a28e) cell_ituss_key_t3

0xf543,	// (0x0004a2ad) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x0004a2ad) cell_ituss_key_t4

0x0003,

0xff03,	// (0x0004ac6d) cell_ituss_key_t_ParamLimits

0xff03,	// (0x0004ac6d) cell_ituss_key_t

0xf562,	// (0x0004a2cc) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x0004a2d4) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0004a2dc) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0c,	// (0x0004ac76) cell_vkbss_key_3p_pane_g

0x7761,	// (0x000424cb) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0004a2e4) popup_fep_char_pre_window_t1

0xe7ac,	// (0x00049516) main_ai5_sk_pane

0xef1b,	// (0x00049c85) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef27,	// (0x00049c91) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef3b,	// (0x00049ca5) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4a,	// (0x00049cb4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee4,	// (0x0004ac4e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5d,	// (0x00049cc7) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x80dc,	// (0x00042e46) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0004a2f3) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large

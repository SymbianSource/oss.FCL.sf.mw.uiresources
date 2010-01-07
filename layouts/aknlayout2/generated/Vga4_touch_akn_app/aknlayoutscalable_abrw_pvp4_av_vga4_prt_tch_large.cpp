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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0004aeb0 };

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
0x7256,	// (0x00052106) Screen

0x726a,	// (0x0005211a) application_window_ParamLimits

0x726a,	// (0x0005211a) application_window

0x7284,	// (0x00052134) screen_g1

0x4c5f,	// (0x0004fb0f) area_bottom_pane_ParamLimits

0x4c5f,	// (0x0004fb0f) area_bottom_pane

0x4d1f,	// (0x0004fbcf) area_top_pane_ParamLimits

0x4d1f,	// (0x0004fbcf) area_top_pane

0x4dbd,	// (0x0004fc6d) main_pane_ParamLimits

0x4dbd,	// (0x0004fc6d) main_pane

0x728e,	// (0x0005213e) misc_graphics

0x976d,	// (0x0005461d) battery_pane_ParamLimits

0x976d,	// (0x0005461d) battery_pane

0xa44f,	// (0x000552ff) bg_status_flat_pane_g8

0xa457,	// (0x00055307) bg_status_flat_pane_g9

0x9835,	// (0x000546e5) context_pane_ParamLimits

0x9835,	// (0x000546e5) context_pane

0x9959,	// (0x00054809) navi_pane_ParamLimits

0x9959,	// (0x00054809) navi_pane

0x99e8,	// (0x00054898) signal_pane_ParamLimits

0x99e8,	// (0x00054898) signal_pane

0x0008,

0xf8b7,	// (0x0005a767) bg_status_flat_pane_g

0x9a55,	// (0x00054905) status_pane_g1_ParamLimits

0x9a55,	// (0x00054905) status_pane_g1

0x9a69,	// (0x00054919) status_pane_g2_ParamLimits

0x9a69,	// (0x00054919) status_pane_g2

0x9a75,	// (0x00054925) status_pane_g3_ParamLimits

0x9a75,	// (0x00054925) status_pane_g3

0x0004,

0xf7e5,	// (0x0005a695) status_pane_g_ParamLimits

0xf7e5,	// (0x0005a695) status_pane_g

0x9aa9,	// (0x00054959) title_pane_ParamLimits

0x9aa9,	// (0x00054959) title_pane

0x9ae6,	// (0x00054996) uni_indicator_pane_ParamLimits

0x9ae6,	// (0x00054996) uni_indicator_pane

0x9062,	// (0x00053f12) bg_list_pane_ParamLimits

0x9062,	// (0x00053f12) bg_list_pane

0x9082,	// (0x00053f32) find_pane

0x908a,	// (0x00053f3a) listscroll_app_pane_ParamLimits

0x908a,	// (0x00053f3a) listscroll_app_pane

0x9096,	// (0x00053f46) listscroll_form_pane

0x909e,	// (0x00053f4e) listscroll_gen_pane_ParamLimits

0x909e,	// (0x00053f4e) listscroll_gen_pane

0x9096,	// (0x00053f46) listscroll_set_pane

0x82d3,	// (0x00053183) main_idle_act_pane

0x8d46,	// (0x00053bf6) main_idle_trad_pane

0x8d46,	// (0x00053bf6) main_list_empty_pane

0x90c4,	// (0x00053f74) main_midp_pane

0x90d0,	// (0x00053f80) main_pane_g1_ParamLimits

0x90d0,	// (0x00053f80) main_pane_g1

0x90de,	// (0x00053f8e) popup_ai_message_window_ParamLimits

0x90de,	// (0x00053f8e) popup_ai_message_window

0x918e,	// (0x0005403e) popup_fep_china_uni_window_ParamLimits

0x918e,	// (0x0005403e) popup_fep_china_uni_window

0x91ee,	// (0x0005409e) popup_fep_japan_candidate_window_ParamLimits

0x91ee,	// (0x0005409e) popup_fep_japan_candidate_window

0x9218,	// (0x000540c8) popup_fep_japan_predictive_window_ParamLimits

0x9218,	// (0x000540c8) popup_fep_japan_predictive_window

0x924e,	// (0x000540fe) popup_find_window

0x925b,	// (0x0005410b) popup_grid_graphic_window_ParamLimits

0x925b,	// (0x0005410b) popup_grid_graphic_window

0x9289,	// (0x00054139) popup_large_graphic_colour_window

0x92af,	// (0x0005415f) popup_menu_window_ParamLimits

0x92af,	// (0x0005415f) popup_menu_window

0x9479,	// (0x00054329) popup_note_image_window

0x9463,	// (0x00054313) popup_note_wait_window_ParamLimits

0x9463,	// (0x00054313) popup_note_wait_window

0x9463,	// (0x00054313) popup_note_window_ParamLimits

0x9463,	// (0x00054313) popup_note_window

0x94df,	// (0x0005438f) popup_query_code_window_ParamLimits

0x94df,	// (0x0005438f) popup_query_code_window

0x94f5,	// (0x000543a5) popup_query_data_code_window_ParamLimits

0x94f5,	// (0x000543a5) popup_query_data_code_window

0x9518,	// (0x000543c8) popup_query_data_window_ParamLimits

0x9518,	// (0x000543c8) popup_query_data_window

0x953a,	// (0x000543ea) popup_query_sat_info_window_ParamLimits

0x953a,	// (0x000543ea) popup_query_sat_info_window

0x9579,	// (0x00054429) popup_snote_single_graphic_window_ParamLimits

0x9579,	// (0x00054429) popup_snote_single_graphic_window

0x9579,	// (0x00054429) popup_snote_single_text_window_ParamLimits

0x9579,	// (0x00054429) popup_snote_single_text_window

0x9590,	// (0x00054440) popup_sub_window_general

0x96d6,	// (0x00054586) popup_window_general_ParamLimits

0x96d6,	// (0x00054586) popup_window_general

0x96ef,	// (0x0005459f) power_save_pane

0x5c92,	// (0x00050b42) control_pane_g1_ParamLimits

0x5c92,	// (0x00050b42) control_pane_g1

0x5cbb,	// (0x00050b6b) control_pane_g2_ParamLimits

0x5cbb,	// (0x00050b6b) control_pane_g2

0x9013,	// (0x00053ec3) control_pane_g3_ParamLimits

0x9013,	// (0x00053ec3) control_pane_g3

0x0007,

0xf7cd,	// (0x0005a67d) control_pane_g_ParamLimits

0xf7cd,	// (0x0005a67d) control_pane_g

0x5d06,	// (0x00050bb6) control_pane_t1_ParamLimits

0x5d06,	// (0x00050bb6) control_pane_t1

0x5d58,	// (0x00050c08) control_pane_t2_ParamLimits

0x5d58,	// (0x00050c08) control_pane_t2

0x0002,

0xf7de,	// (0x0005a68e) control_pane_t_ParamLimits

0xf7de,	// (0x0005a68e) control_pane_t

0x8f34,	// (0x00053de4) navi_navi_volume_pane_cp1

0x8f3d,	// (0x00053ded) status_small_icon_pane

0x8f45,	// (0x00053df5) status_small_pane_g1_ParamLimits

0x8f45,	// (0x00053df5) status_small_pane_g1

0x8f79,	// (0x00053e29) status_small_pane_g2_ParamLimits

0x8f79,	// (0x00053e29) status_small_pane_g2

0x8f85,	// (0x00053e35) status_small_pane_g3_ParamLimits

0x8f85,	// (0x00053e35) status_small_pane_g3

0x8f91,	// (0x00053e41) status_small_pane_g4_ParamLimits

0x8f91,	// (0x00053e41) status_small_pane_g4

0x8f9d,	// (0x00053e4d) status_small_pane_g5_ParamLimits

0x8f9d,	// (0x00053e4d) status_small_pane_g5

0x8fac,	// (0x00053e5c) status_small_pane_g6_ParamLimits

0x8fac,	// (0x00053e5c) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0005a66c) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0005a66c) status_small_pane_g

0x8fdc,	// (0x00053e8c) status_small_pane_t1

0x8fff,	// (0x00053eaf) status_small_wait_pane_ParamLimits

0x8fff,	// (0x00053eaf) status_small_wait_pane

0x87d1,	// (0x00053681) aid_levels_signal_ParamLimits

0x87d1,	// (0x00053681) aid_levels_signal

0x87e3,	// (0x00053693) signal_pane_g1_ParamLimits

0x87e3,	// (0x00053693) signal_pane_g1

0x87f8,	// (0x000536a8) signal_pane_g2_ParamLimits

0x87f8,	// (0x000536a8) signal_pane_g2

0x0001,

0xf751,	// (0x0005a601) signal_pane_g_ParamLimits

0xf751,	// (0x0005a601) signal_pane_g

0x880d,	// (0x000536bd) context_pane_g1

0x7298,	// (0x00052148) title_pane_g1

0x72ce,	// (0x0005217e) title_pane_t1

0x7336,	// (0x000521e6) title_pane_t2

0x735c,	// (0x0005220c) title_pane_t3

0x0002,

0xf59b,	// (0x0005a44b) title_pane_t

0x9afe,	// (0x000549ae) aid_levels_battery_ParamLimits

0x9afe,	// (0x000549ae) aid_levels_battery

0x9b12,	// (0x000549c2) battery_pane_g1_ParamLimits

0x9b12,	// (0x000549c2) battery_pane_g1

0x9b28,	// (0x000549d8) battery_pane_g2_ParamLimits

0x9b28,	// (0x000549d8) battery_pane_g2

0x0001,

0xf7f0,	// (0x0005a6a0) battery_pane_g_ParamLimits

0xf7f0,	// (0x0005a6a0) battery_pane_g

0xad9f,	// (0x00055c4f) uni_indicator_pane_g1

0xadb4,	// (0x00055c64) uni_indicator_pane_g2

0xadca,	// (0x00055c7a) uni_indicator_pane_g3

0x0005,

0xf95f,	// (0x0005a80f) uni_indicator_pane_g

0x8bb4,	// (0x00053a64) navi_icon_pane_ParamLimits

0x8bb4,	// (0x00053a64) navi_icon_pane

0x8afb,	// (0x000539ab) navi_midp_pane

0x8bd0,	// (0x00053a80) navi_navi_pane

0x8bda,	// (0x00053a8a) navi_text_pane_ParamLimits

0x8bda,	// (0x00053a8a) navi_text_pane

0x7284,	// (0x00052134) status_small_wait_pane_g1

0x77a0,	// (0x00052650) status_small_wait_pane_g2

0x0001,

0xf95a,	// (0x0005a80a) status_small_wait_pane_g

0xaab2,	// (0x00055962) navi_navi_icon_text_pane

0xaaba,	// (0x0005596a) navi_navi_pane_g1_ParamLimits

0xaaba,	// (0x0005596a) navi_navi_pane_g1

0xaacc,	// (0x0005597c) navi_navi_pane_g2_ParamLimits

0xaacc,	// (0x0005597c) navi_navi_pane_g2

0x0001,

0xf928,	// (0x0005a7d8) navi_navi_pane_g_ParamLimits

0xf928,	// (0x0005a7d8) navi_navi_pane_g

0xaade,	// (0x0005598e) navi_navi_tabs_pane

0xaae7,	// (0x00055997) navi_navi_text_pane

0xaab2,	// (0x00055962) navi_navi_volume_pane

0xaa8b,	// (0x0005593b) navi_text_pane_t1

0xaa7c,	// (0x0005592c) navi_icon_pane_g1

0xa9cf,	// (0x0005587f) navi_navi_text_pane_t1

0x6121,	// (0x00050fd1) navi_navi_volume_pane_g1

0x6129,	// (0x00050fd9) volume_small_pane

0xa935,	// (0x000557e5) navi_navi_icon_text_pane_g1

0xa93d,	// (0x000557ed) navi_navi_icon_text_pane_t1

0x8bd0,	// (0x00053a80) navi_tabs_2_long_pane

0x8bd0,	// (0x00053a80) navi_tabs_2_pane

0x8bd0,	// (0x00053a80) navi_tabs_3_long_pane

0x8bd0,	// (0x00053a80) navi_tabs_3_pane

0x8bd0,	// (0x00053a80) navi_tabs_4_pane

0x6101,	// (0x00050fb1) tabs_2_active_pane_ParamLimits

0x6101,	// (0x00050fb1) tabs_2_active_pane

0x6111,	// (0x00050fc1) tabs_2_passive_pane_ParamLimits

0x6111,	// (0x00050fc1) tabs_2_passive_pane

0x60cf,	// (0x00050f7f) tabs_3_active_pane_ParamLimits

0x60cf,	// (0x00050f7f) tabs_3_active_pane

0x60df,	// (0x00050f8f) tabs_3_passive_pane_ParamLimits

0x60df,	// (0x00050f8f) tabs_3_passive_pane

0x60f0,	// (0x00050fa0) tabs_3_passive_pane_cp_ParamLimits

0x60f0,	// (0x00050fa0) tabs_3_passive_pane_cp

0x6083,	// (0x00050f33) tabs_4_active_pane_ParamLimits

0x6083,	// (0x00050f33) tabs_4_active_pane

0x6096,	// (0x00050f46) tabs_4_passive_pane_ParamLimits

0x6096,	// (0x00050f46) tabs_4_passive_pane

0x60a7,	// (0x00050f57) tabs_4_passive_pane_cp_ParamLimits

0x60a7,	// (0x00050f57) tabs_4_passive_pane_cp

0x60b8,	// (0x00050f68) tabs_4_passive_pane_cp2_ParamLimits

0x60b8,	// (0x00050f68) tabs_4_passive_pane_cp2

0x605f,	// (0x00050f0f) tabs_2_long_active_pane_ParamLimits

0x605f,	// (0x00050f0f) tabs_2_long_active_pane

0x6071,	// (0x00050f21) tabs_2_long_passive_pane_ParamLimits

0x6071,	// (0x00050f21) tabs_2_long_passive_pane

0x6020,	// (0x00050ed0) tabs_3_long_active_pane_ParamLimits

0x6020,	// (0x00050ed0) tabs_3_long_active_pane

0x6033,	// (0x00050ee3) tabs_3_long_passive_pane_ParamLimits

0x6033,	// (0x00050ee3) tabs_3_long_passive_pane

0x604c,	// (0x00050efc) tabs_3_long_passive_pane_cp_ParamLimits

0x604c,	// (0x00050efc) tabs_3_long_passive_pane_cp

0x5fc6,	// (0x00050e76) volume_small_pane_g1

0x5fcf,	// (0x00050e7f) volume_small_pane_g2

0x5fd8,	// (0x00050e88) volume_small_pane_g3

0x5fe1,	// (0x00050e91) volume_small_pane_g4

0x5fea,	// (0x00050e9a) volume_small_pane_g5

0x5ff3,	// (0x00050ea3) volume_small_pane_g6

0x5ffc,	// (0x00050eac) volume_small_pane_g7

0x6005,	// (0x00050eb5) volume_small_pane_g8

0x600e,	// (0x00050ebe) volume_small_pane_g9

0x6017,	// (0x00050ec7) volume_small_pane_g10

0x0009,

0xf8f4,	// (0x0005a7a4) volume_small_pane_g

0x736e,	// (0x0005221e) bg_active_tab_pane_cp2_ParamLimits

0x736e,	// (0x0005221e) bg_active_tab_pane_cp2

0x737c,	// (0x0005222c) tabs_3_active_pane_g1

0x7384,	// (0x00052234) tabs_3_active_pane_t1

0x736e,	// (0x0005221e) bg_passive_tab_pane_cp2_ParamLimits

0x736e,	// (0x0005221e) bg_passive_tab_pane_cp2

0x737c,	// (0x0005222c) tabs_3_passive_pane_g1

0x7384,	// (0x00052234) tabs_3_passive_pane_t1

0x736e,	// (0x0005221e) bg_active_tab_pane_cp3_ParamLimits

0x736e,	// (0x0005221e) bg_active_tab_pane_cp3

0x7396,	// (0x00052246) tabs_4_active_pane_g1

0x739e,	// (0x0005224e) tabs_4_active_pane_t1

0x736e,	// (0x0005221e) bg_passive_tab_pane_cp3_ParamLimits

0x736e,	// (0x0005221e) bg_passive_tab_pane_cp3

0x7396,	// (0x00052246) tabs_4_1_passive_pane_g1

0x739e,	// (0x0005224e) tabs_4_1_passive_pane_t1

0x90c4,	// (0x00053f74) list_highlight_pane_cp2

0xb02e,	// (0x00055ede) list_set_pane_ParamLimits

0xb02e,	// (0x00055ede) list_set_pane

0xb0f6,	// (0x00055fa6) main_pane_set_t1_ParamLimits

0xb0f6,	// (0x00055fa6) main_pane_set_t1

0xb116,	// (0x00055fc6) main_pane_set_t2_ParamLimits

0xb116,	// (0x00055fc6) main_pane_set_t2

0xb12a,	// (0x00055fda) main_pane_set_t3_ParamLimits

0xb12a,	// (0x00055fda) main_pane_set_t3

0xb13e,	// (0x00055fee) main_pane_set_t4_ParamLimits

0xb13e,	// (0x00055fee) main_pane_set_t4

0x0003,

0xf9c4,	// (0x0005a874) main_pane_set_t_ParamLimits

0xf9c4,	// (0x0005a874) main_pane_set_t

0xb15e,	// (0x0005600e) setting_code_pane

0xb168,	// (0x00056018) setting_slider_graphic_pane

0xb168,	// (0x00056018) setting_slider_pane

0xb168,	// (0x00056018) setting_text_pane

0xb168,	// (0x00056018) setting_volume_pane

0x5014,	// (0x0004fec4) volume_set_pane

0x736e,	// (0x0005221e) bg_set_opt_pane_cp

0x501e,	// (0x0004fece) setting_slider_pane_t1

0x5034,	// (0x0004fee4) setting_slider_pane_t2

0x504e,	// (0x0004fefe) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0005a452) setting_slider_pane_t

0x5066,	// (0x0004ff16) slider_set_pane

0x728e,	// (0x0005213e) bg_set_opt_pane_cp2

0x73b0,	// (0x00052260) setting_slider_graphic_pane_g1

0x507c,	// (0x0004ff2c) setting_slider_graphic_pane_t1

0x508c,	// (0x0004ff3c) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0005a459) setting_slider_graphic_pane_t

0x509c,	// (0x0004ff4c) slider_set_pane_cp

0x728e,	// (0x0005213e) input_focus_pane_cp1

0xafef,	// (0x00055e9f) list_set_text_pane

0x7284,	// (0x00052134) setting_text_pane_g1

0x728e,	// (0x0005213e) input_focus_pane_cp2

0x7284,	// (0x00052134) setting_code_pane_g1

0x73b9,	// (0x00052269) setting_code_pane_t1

0x41ee,	// (0x0004f09e) set_text_pane_t1_ParamLimits

0x41ee,	// (0x0004f09e) set_text_pane_t1

0x8143,	// (0x00052ff3) set_opt_bg_pane_g1

0x814b,	// (0x00052ffb) set_opt_bg_pane_g2

0xafc7,	// (0x00055e77) set_opt_bg_pane_g3

0x815b,	// (0x0005300b) set_opt_bg_pane_g4

0x8163,	// (0x00053013) set_opt_bg_pane_g5

0x816b,	// (0x0005301b) set_opt_bg_pane_g6

0xafd1,	// (0x00055e81) set_opt_bg_pane_g7

0xafdb,	// (0x00055e8b) set_opt_bg_pane_g8

0xafe5,	// (0x00055e95) set_opt_bg_pane_g9

0x0008,

0xf9b1,	// (0x0005a861) set_opt_bg_pane_g

0xafba,	// (0x00055e6a) slider_set_pane_g1

0x61d2,	// (0x00051082) slider_set_pane_g2

0x0006,

0xf9a2,	// (0x0005a852) slider_set_pane_g

0x6132,	// (0x00050fe2) volume_set_pane_g1

0x613c,	// (0x00050fec) volume_set_pane_g2

0x6146,	// (0x00050ff6) volume_set_pane_g3

0x6150,	// (0x00051000) volume_set_pane_g4

0x615a,	// (0x0005100a) volume_set_pane_g5

0x6164,	// (0x00051014) volume_set_pane_g6

0x616e,	// (0x0005101e) volume_set_pane_g7

0x6178,	// (0x00051028) volume_set_pane_g8

0x6182,	// (0x00051032) volume_set_pane_g9

0x618c,	// (0x0005103c) volume_set_pane_g10

0x0009,

0xf97a,	// (0x0005a82a) volume_set_pane_g

0x73c7,	// (0x00052277) indicator_pane_ParamLimits

0x73c7,	// (0x00052277) indicator_pane

0x73d3,	// (0x00052283) main_idle_pane_g2_ParamLimits

0x73d3,	// (0x00052283) main_idle_pane_g2

0x73fb,	// (0x000522ab) main_pane_idle_g1_ParamLimits

0x73fb,	// (0x000522ab) main_pane_idle_g1

0x7409,	// (0x000522b9) popup_clock_digital_analogue_window_ParamLimits

0x7409,	// (0x000522b9) popup_clock_digital_analogue_window

0x7420,	// (0x000522d0) soft_indicator_pane_ParamLimits

0x7420,	// (0x000522d0) soft_indicator_pane

0x742e,	// (0x000522de) wallpaper_pane_ParamLimits

0x742e,	// (0x000522de) wallpaper_pane

0x7284,	// (0x00052134) wallpaper_pane_g1

0x7442,	// (0x000522f2) indicator_pane_g1_ParamLimits

0x7442,	// (0x000522f2) indicator_pane_g1

0xb42c,	// (0x000562dc) navi_navi_icon_text_pane_srt_g1

0x745d,	// (0x0005230d) soft_indicator_pane_t1

0x7477,	// (0x00052327) aid_ps_area_pane

0x7488,	// (0x00052338) aid_ps_clock_pane

0x7496,	// (0x00052346) aid_ps_indicator_pane

0x74a2,	// (0x00052352) indicator_ps_pane_ParamLimits

0x74a2,	// (0x00052352) indicator_ps_pane

0x74b1,	// (0x00052361) power_save_pane_g1_ParamLimits

0x74b1,	// (0x00052361) power_save_pane_g1

0x74bd,	// (0x0005236d) power_save_pane_g2_ParamLimits

0x74bd,	// (0x0005236d) power_save_pane_g2

0x4c13,	// (0x0004fac3) aid_navinavi_width_pane

0x7477,	// (0x00052327) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0005a45e) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0005a45e) power_save_pane_g

0x74cb,	// (0x0005237b) power_save_pane_t1_ParamLimits

0x74cb,	// (0x0005237b) power_save_pane_t1

0x7488,	// (0x00052338) aid_ps_clock_pane_ParamLimits

0x7496,	// (0x00052346) aid_ps_indicator_pane_ParamLimits

0x74dd,	// (0x0005238d) power_save_pane_t4_ParamLimits

0x74dd,	// (0x0005238d) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0005a463) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0005a463) power_save_pane_t

0x7507,	// (0x000523b7) power_save_t3_ParamLimits

0x7507,	// (0x000523b7) power_save_t3

0x74f2,	// (0x000523a2) power_save_t2_ParamLimits

0x74f2,	// (0x000523a2) power_save_t2

0x751c,	// (0x000523cc) indicator_ps_pane_g1

0x7525,	// (0x000523d5) ai_gene_pane_ParamLimits

0x7525,	// (0x000523d5) ai_gene_pane

0x7531,	// (0x000523e1) ai_links_pane_ParamLimits

0x7531,	// (0x000523e1) ai_links_pane

0x753d,	// (0x000523ed) indicator_pane_cp1_ParamLimits

0x753d,	// (0x000523ed) indicator_pane_cp1

0x7549,	// (0x000523f9) main_pane_idle_g1_cp_ParamLimits

0x7549,	// (0x000523f9) main_pane_idle_g1_cp

0x7555,	// (0x00052405) popup_ai_links_title_window

0x755e,	// (0x0005240e) soft_indicator_pane_cp1_ParamLimits

0x755e,	// (0x0005240e) soft_indicator_pane_cp1

0xad8d,	// (0x00055c3d) ai_links_pane_g1

0xad96,	// (0x00055c46) grid_ai_links_pane

0xad72,	// (0x00055c22) ai_gene_pane_1

0xad7b,	// (0x00055c2b) ai_gene_pane_2

0xad84,	// (0x00055c34) list_highlight_pane_cp4

0xad52,	// (0x00055c02) cell_ai_link_pane_ParamLimits

0xad52,	// (0x00055c02) cell_ai_link_pane

0xad4a,	// (0x00055bfa) cell_ai_link_pane_g1

0x77a0,	// (0x00052650) cell_ai_link_pane_g2

0x0001,

0xf955,	// (0x0005a805) cell_ai_link_pane_g

0x728e,	// (0x0005213e) grid_highlight_cp2

0x728e,	// (0x0005213e) bg_popup_sub_pane_cp1

0x7578,	// (0x00052428) popup_ai_links_title_window_t1

0xac96,	// (0x00055b46) ai_gene_pane_1_g1_ParamLimits

0xac96,	// (0x00055b46) ai_gene_pane_1_g1

0xaca2,	// (0x00055b52) ai_gene_pane_1_g2_ParamLimits

0xaca2,	// (0x00055b52) ai_gene_pane_1_g2

0x0001,

0xf94b,	// (0x0005a7fb) ai_gene_pane_1_g_ParamLimits

0xf94b,	// (0x0005a7fb) ai_gene_pane_1_g

0xacaf,	// (0x00055b5f) ai_gene_pane_1_t1_ParamLimits

0xacaf,	// (0x00055b5f) ai_gene_pane_1_t1

0xace3,	// (0x00055b93) grid_ai_soft_ind_pane

0xac81,	// (0x00055b31) ai_gene_pane_2_t1_ParamLimits

0xac81,	// (0x00055b31) ai_gene_pane_2_t1

0x7587,	// (0x00052437) main_pane_empty_t1_ParamLimits

0x7587,	// (0x00052437) main_pane_empty_t1

0x759f,	// (0x0005244f) main_pane_empty_t2_ParamLimits

0x759f,	// (0x0005244f) main_pane_empty_t2

0x75b4,	// (0x00052464) main_pane_empty_t3_ParamLimits

0x75b4,	// (0x00052464) main_pane_empty_t3

0x75c6,	// (0x00052476) main_pane_empty_t4_ParamLimits

0x75c6,	// (0x00052476) main_pane_empty_t4

0x75d8,	// (0x00052488) main_pane_empty_t5_ParamLimits

0x75d8,	// (0x00052488) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0005a468) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0005a468) main_pane_empty_t

0x8194,	// (0x00053044) bg_popup_window_pane_ParamLimits

0x8194,	// (0x00053044) bg_popup_window_pane

0xa9dd,	// (0x0005588d) find_popup_pane_cp2_ParamLimits

0xa9dd,	// (0x0005588d) find_popup_pane_cp2

0xa9e9,	// (0x00055899) heading_pane_ParamLimits

0xa9e9,	// (0x00055899) heading_pane

0x728e,	// (0x0005213e) bg_popup_sub_pane

0xa957,	// (0x00055807) bg_popup_window_pane_g1_ParamLimits

0xa957,	// (0x00055807) bg_popup_window_pane_g1

0xa963,	// (0x00055813) bg_popup_window_pane_g2_ParamLimits

0xa963,	// (0x00055813) bg_popup_window_pane_g2

0xa96f,	// (0x0005581f) bg_popup_window_pane_g3_ParamLimits

0xa96f,	// (0x0005581f) bg_popup_window_pane_g3

0xa97b,	// (0x0005582b) bg_popup_window_pane_g4_ParamLimits

0xa97b,	// (0x0005582b) bg_popup_window_pane_g4

0xa987,	// (0x00055837) bg_popup_window_pane_g5_ParamLimits

0xa987,	// (0x00055837) bg_popup_window_pane_g5

0xa993,	// (0x00055843) bg_popup_window_pane_g6_ParamLimits

0xa993,	// (0x00055843) bg_popup_window_pane_g6

0xa99f,	// (0x0005584f) bg_popup_window_pane_g7_ParamLimits

0xa99f,	// (0x0005584f) bg_popup_window_pane_g7

0xa9ab,	// (0x0005585b) bg_popup_window_pane_g8_ParamLimits

0xa9ab,	// (0x0005585b) bg_popup_window_pane_g8

0xa9b7,	// (0x00055867) bg_popup_window_pane_g9_ParamLimits

0xa9b7,	// (0x00055867) bg_popup_window_pane_g9

0xa9c3,	// (0x00055873) bg_popup_window_pane_g10_ParamLimits

0xa9c3,	// (0x00055873) bg_popup_window_pane_g10

0x0009,

0xf913,	// (0x0005a7c3) bg_popup_window_pane_g_ParamLimits

0xf913,	// (0x0005a7c3) bg_popup_window_pane_g

0xa8ec,	// (0x0005579c) bg_popup_heading_pane_ParamLimits

0xa8ec,	// (0x0005579c) bg_popup_heading_pane

0x62a6,	// (0x00051156) tabs_4_passive_pane_cp_srt_ParamLimits

0x62a6,	// (0x00051156) tabs_4_passive_pane_cp_srt

0x62b8,	// (0x00051168) tabs_4_passive_pane_srt_ParamLimits

0xa900,	// (0x000557b0) heading_pane_g2

0x62b8,	// (0x00051168) tabs_4_passive_pane_srt

0x90c4,	// (0x00053f74) bg_passive_tab_pane_cp3_srt_ParamLimits

0x90c4,	// (0x00053f74) bg_passive_tab_pane_cp3_srt

0xa908,	// (0x000557b8) heading_pane_t1_ParamLimits

0xa908,	// (0x000557b8) heading_pane_t1

0xa91f,	// (0x000557cf) heading_pane_t2_ParamLimits

0xa91f,	// (0x000557cf) heading_pane_t2

0x0001,

0xf90e,	// (0x0005a7be) heading_pane_t_ParamLimits

0xf90e,	// (0x0005a7be) heading_pane_t

0xa417,	// (0x000552c7) bg_popup_heading_pane_g1

0xa4c6,	// (0x00055376) bg_popup_heading_pane_g2

0xa4d0,	// (0x00055380) bg_popup_heading_pane_g3

0xa4da,	// (0x0005538a) bg_popup_heading_pane_g4

0xa4e4,	// (0x00055394) bg_popup_heading_pane_g5

0xa4ee,	// (0x0005539e) bg_popup_heading_pane_g6

0xa4f6,	// (0x000553a6) bg_popup_heading_pane_g7

0xa4fe,	// (0x000553ae) bg_popup_heading_pane_g8

0xa508,	// (0x000553b8) bg_popup_heading_pane_g9

0x0008,

0xf8ca,	// (0x0005a77a) bg_popup_heading_pane_g

0x9c00,	// (0x00054ab0) bg_popup_sub_pane_g1

0x9c10,	// (0x00054ac0) bg_popup_sub_pane_g2

0x9c08,	// (0x00054ab8) bg_popup_sub_pane_g3

0x9c20,	// (0x00054ad0) bg_popup_sub_pane_g4

0x9c18,	// (0x00054ac8) bg_popup_sub_pane_g5

0x9c28,	// (0x00054ad8) bg_popup_sub_pane_g6

0x9c30,	// (0x00054ae0) bg_popup_sub_pane_g7

0x9c40,	// (0x00054af0) bg_popup_sub_pane_g8

0x9c38,	// (0x00054ae8) bg_popup_sub_pane_g9

0x0008,

0xf8a4,	// (0x0005a754) bg_popup_sub_pane_g

0x75ea,	// (0x0005249a) bg_popup_window_pane_cp5_ParamLimits

0x75ea,	// (0x0005249a) bg_popup_window_pane_cp5

0x7606,	// (0x000524b6) popup_note_window_g1_ParamLimits

0x7606,	// (0x000524b6) popup_note_window_g1

0x7612,	// (0x000524c2) popup_note_window_t1_ParamLimits

0x7612,	// (0x000524c2) popup_note_window_t1

0x7628,	// (0x000524d8) popup_note_window_t2_ParamLimits

0x7628,	// (0x000524d8) popup_note_window_t2

0x763e,	// (0x000524ee) popup_note_window_t3_ParamLimits

0x763e,	// (0x000524ee) popup_note_window_t3

0x7654,	// (0x00052504) popup_note_window_t4_ParamLimits

0x7654,	// (0x00052504) popup_note_window_t4

0x767c,	// (0x0005252c) popup_note_window_t5_ParamLimits

0x767c,	// (0x0005252c) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0005a473) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0005a473) popup_note_window_t

0x76a0,	// (0x00052550) bg_popup_window_pane_cp6_ParamLimits

0x76a0,	// (0x00052550) bg_popup_window_pane_cp6

0xa393,	// (0x00055243) popup_note_image_window_g1_ParamLimits

0xa393,	// (0x00055243) popup_note_image_window_g1

0xa39f,	// (0x0005524f) popup_note_image_window_g2_ParamLimits

0xa39f,	// (0x0005524f) popup_note_image_window_g2

0x0001,

0xf898,	// (0x0005a748) popup_note_image_window_g_ParamLimits

0xf898,	// (0x0005a748) popup_note_image_window_g

0xa3b8,	// (0x00055268) popup_note_image_window_t1_ParamLimits

0xa3b8,	// (0x00055268) popup_note_image_window_t1

0xa3d1,	// (0x00055281) popup_note_image_window_t2_ParamLimits

0xa3d1,	// (0x00055281) popup_note_image_window_t2

0xa3ea,	// (0x0005529a) popup_note_image_window_t3_ParamLimits

0xa3ea,	// (0x0005529a) popup_note_image_window_t3

0x0002,

0xf89d,	// (0x0005a74d) popup_note_image_window_t_ParamLimits

0xf89d,	// (0x0005a74d) popup_note_image_window_t

0xa253,	// (0x00055103) bg_popup_window_pane_cp7_ParamLimits

0xa253,	// (0x00055103) bg_popup_window_pane_cp7

0xa283,	// (0x00055133) popup_note_wait_window_g1_ParamLimits

0xa283,	// (0x00055133) popup_note_wait_window_g1

0xa28f,	// (0x0005513f) popup_note_wait_window_g2_ParamLimits

0xa28f,	// (0x0005513f) popup_note_wait_window_g2

0x0002,

0xf886,	// (0x0005a736) popup_note_wait_window_g_ParamLimits

0xf886,	// (0x0005a736) popup_note_wait_window_g

0xa2a7,	// (0x00055157) popup_note_wait_window_t1_ParamLimits

0xa2a7,	// (0x00055157) popup_note_wait_window_t1

0xa2ce,	// (0x0005517e) popup_note_wait_window_t2_ParamLimits

0xa2ce,	// (0x0005517e) popup_note_wait_window_t2

0xa2ec,	// (0x0005519c) popup_note_wait_window_t3_ParamLimits

0xa2ec,	// (0x0005519c) popup_note_wait_window_t3

0xa2ff,	// (0x000551af) popup_note_wait_window_t4_ParamLimits

0xa2ff,	// (0x000551af) popup_note_wait_window_t4

0x0004,

0xf88d,	// (0x0005a73d) popup_note_wait_window_t_ParamLimits

0xf88d,	// (0x0005a73d) popup_note_wait_window_t

0xa324,	// (0x000551d4) wait_bar_pane_ParamLimits

0xa324,	// (0x000551d4) wait_bar_pane

0x728e,	// (0x0005213e) wait_anim_pane

0x728e,	// (0x0005213e) wait_border_pane

0x7284,	// (0x00052134) wait_anim_pane_g1

0x7284,	// (0x00052134) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0005a5fc) wait_anim_pane_g

0xa1f7,	// (0x000550a7) wait_border_pane_g1

0xa202,	// (0x000550b2) wait_border_pane_g2

0xa20b,	// (0x000550bb) wait_border_pane_g3

0x0002,

0xf87f,	// (0x0005a72f) wait_border_pane_g

0xa153,	// (0x00055003) bg_popup_window_pane_cp16_ParamLimits

0xa153,	// (0x00055003) bg_popup_window_pane_cp16

0xa161,	// (0x00055011) indicator_popup_pane_cp4_ParamLimits

0xa161,	// (0x00055011) indicator_popup_pane_cp4

0xa175,	// (0x00055025) popup_query_data_window_t1_ParamLimits

0xa175,	// (0x00055025) popup_query_data_window_t1

0xa187,	// (0x00055037) popup_query_data_window_t2_ParamLimits

0xa187,	// (0x00055037) popup_query_data_window_t2

0xa1a0,	// (0x00055050) popup_query_data_window_t3_ParamLimits

0xa1a0,	// (0x00055050) popup_query_data_window_t3

0x0002,

0xf878,	// (0x0005a728) popup_query_data_window_t_ParamLimits

0xf878,	// (0x0005a728) popup_query_data_window_t

0xa1ba,	// (0x0005506a) query_popup_data_pane_ParamLimits

0xa1ba,	// (0x0005506a) query_popup_data_pane

0xa1ce,	// (0x0005507e) query_popup_data_pane_cp1_ParamLimits

0xa1ce,	// (0x0005507e) query_popup_data_pane_cp1

0x76a0,	// (0x00052550) bg_popup_window_pane_cp10_ParamLimits

0x76a0,	// (0x00052550) bg_popup_window_pane_cp10

0xa0b6,	// (0x00054f66) indicator_popup_pane_ParamLimits

0xa0b6,	// (0x00054f66) indicator_popup_pane

0x7701,	// (0x000525b1) popup_query_code_window_t1_ParamLimits

0x7701,	// (0x000525b1) popup_query_code_window_t1

0xa0ce,	// (0x00054f7e) popup_query_code_window_t2_ParamLimits

0xa0ce,	// (0x00054f7e) popup_query_code_window_t2

0xa10c,	// (0x00054fbc) popup_query_code_window_t3_ParamLimits

0xa10c,	// (0x00054fbc) popup_query_code_window_t3

0x0002,

0xf871,	// (0x0005a721) popup_query_code_window_t_ParamLimits

0xf871,	// (0x0005a721) popup_query_code_window_t

0xa13b,	// (0x00054feb) query_popup_pane_ParamLimits

0xa13b,	// (0x00054feb) query_popup_pane

0x76a0,	// (0x00052550) bg_popup_window_pane_cp15_ParamLimits

0x76a0,	// (0x00052550) bg_popup_window_pane_cp15

0x76c0,	// (0x00052570) indicator_popup_pane_cp1_ParamLimits

0x76c0,	// (0x00052570) indicator_popup_pane_cp1

0x76d3,	// (0x00052583) indicator_popup_pane_cp2_ParamLimits

0x76d3,	// (0x00052583) indicator_popup_pane_cp2

0x76ee,	// (0x0005259e) popup_query_data_code_window_g1_ParamLimits

0x76ee,	// (0x0005259e) popup_query_data_code_window_g1

0x7701,	// (0x000525b1) popup_query_data_code_window_t1_ParamLimits

0x7701,	// (0x000525b1) popup_query_data_code_window_t1

0x7713,	// (0x000525c3) popup_query_data_code_window_t2_ParamLimits

0x7713,	// (0x000525c3) popup_query_data_code_window_t2

0x7725,	// (0x000525d5) popup_query_data_code_window_t3_ParamLimits

0x7725,	// (0x000525d5) popup_query_data_code_window_t3

0x773b,	// (0x000525eb) popup_query_data_code_window_t4_ParamLimits

0x773b,	// (0x000525eb) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0005a47e) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0005a47e) popup_query_data_code_window_t

0x5e7a,	// (0x00050d2a) list_single_midp_graphic_pane_g3

0x7755,	// (0x00052605) query_popup_data_pane_cp2_ParamLimits

0x7768,	// (0x00052618) query_popup_pane_cp2_ParamLimits

0x7768,	// (0x00052618) query_popup_pane_cp2

0x728e,	// (0x0005213e) bg_popup_window_pane_cp11

0xa08a,	// (0x00054f3a) heading_pane_cp5

0x7858,	// (0x00052708) listscroll_popup_info_pane

0x728e,	// (0x0005213e) input_focus_pane_cp3

0x7783,	// (0x00052633) query_popup_pane_t1

0x7791,	// (0x00052641) list_popup_info_pane_ParamLimits

0x7791,	// (0x00052641) list_popup_info_pane

0x77a0,	// (0x00052650) listscroll_popup_info_pane_g1

0x77a8,	// (0x00052658) scroll_pane_cp7

0x77b2,	// (0x00052662) popup_info_list_pane_t1_ParamLimits

0x77b2,	// (0x00052662) popup_info_list_pane_t1

0x77cc,	// (0x0005267c) popup_info_list_pane_t2_ParamLimits

0x77cc,	// (0x0005267c) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0005a487) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0005a487) popup_info_list_pane_t

0x728e,	// (0x0005213e) bg_popup_window_pane_cp12

0xb446,	// (0x000562f6) find_popup_pane

0x736e,	// (0x0005221e) bg_popup_window_pane_cp3

0x77e6,	// (0x00052696) heading_pane_cp3

0x77f2,	// (0x000526a2) listscroll_popup_graphic_pane

0x728e,	// (0x0005213e) bg_popup_window_pane_cp4

0x784e,	// (0x000526fe) heading_pane_cp4

0x7858,	// (0x00052708) listscroll_popup_colour_pane

0x7860,	// (0x00052710) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7860,	// (0x00052710) cell_large_graphic_colour_none_popup_pane

0x7874,	// (0x00052724) grid_large_graphic_colour_popup_pane_ParamLimits

0x7874,	// (0x00052724) grid_large_graphic_colour_popup_pane

0x78a0,	// (0x00052750) listscroll_popup_colour_pane_g1_ParamLimits

0x78a0,	// (0x00052750) listscroll_popup_colour_pane_g1

0x78b7,	// (0x00052767) listscroll_popup_colour_pane_g2_ParamLimits

0x78b7,	// (0x00052767) listscroll_popup_colour_pane_g2

0x78ce,	// (0x0005277e) listscroll_popup_colour_pane_g3_ParamLimits

0x78ce,	// (0x0005277e) listscroll_popup_colour_pane_g3

0x78de,	// (0x0005278e) listscroll_popup_colour_pane_g4_ParamLimits

0x78de,	// (0x0005278e) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0005a48c) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0005a48c) listscroll_popup_colour_pane_g

0x78f2,	// (0x000527a2) scroll_pane_cp6_ParamLimits

0x78f2,	// (0x000527a2) scroll_pane_cp6

0x7904,	// (0x000527b4) cell_large_graphic_colour_popup_pane_ParamLimits

0x7904,	// (0x000527b4) cell_large_graphic_colour_popup_pane

0x7e10,	// (0x00052cc0) cell_large_graphic_colour_none_popup_pane_t1

0x728e,	// (0x0005213e) grid_highlight_pane_cp5

0x7e1f,	// (0x00052ccf) cell_large_graphic_colour_popup_pane_g1

0x7e27,	// (0x00052cd7) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0005a495) cell_large_graphic_colour_popup_pane_g

0x7e2f,	// (0x00052cdf) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e38,	// (0x00052ce8) grid_highlight_pane_cp4

0x7e40,	// (0x00052cf0) bg_popup_window_pane_cp8_ParamLimits

0x7e40,	// (0x00052cf0) bg_popup_window_pane_cp8

0x7e5b,	// (0x00052d0b) popup_snote_single_text_window_g1_ParamLimits

0x7e5b,	// (0x00052d0b) popup_snote_single_text_window_g1

0x7e6d,	// (0x00052d1d) popup_snote_single_text_window_t1_ParamLimits

0x7e6d,	// (0x00052d1d) popup_snote_single_text_window_t1

0x7e80,	// (0x00052d30) popup_snote_single_text_window_t2_ParamLimits

0x7e80,	// (0x00052d30) popup_snote_single_text_window_t2

0x7e93,	// (0x00052d43) popup_snote_single_text_window_t3_ParamLimits

0x7e93,	// (0x00052d43) popup_snote_single_text_window_t3

0x7ecc,	// (0x00052d7c) popup_snote_single_text_window_t4_ParamLimits

0x7ecc,	// (0x00052d7c) popup_snote_single_text_window_t4

0x7f00,	// (0x00052db0) popup_snote_single_text_window_t5_ParamLimits

0x7f00,	// (0x00052db0) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0005a49a) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0005a49a) popup_snote_single_text_window_t

0x7f2f,	// (0x00052ddf) bg_popup_window_pane_cp9_ParamLimits

0x7f2f,	// (0x00052ddf) bg_popup_window_pane_cp9

0x7e5b,	// (0x00052d0b) popup_snote_single_graphic_window_g1_ParamLimits

0x7e5b,	// (0x00052d0b) popup_snote_single_graphic_window_g1

0x7f3d,	// (0x00052ded) popup_snote_single_graphic_window_g2_ParamLimits

0x7f3d,	// (0x00052ded) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0005a4a5) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0005a4a5) popup_snote_single_graphic_window_g

0x7f49,	// (0x00052df9) popup_snote_single_graphic_window_t1_ParamLimits

0x7f49,	// (0x00052df9) popup_snote_single_graphic_window_t1

0x7f5c,	// (0x00052e0c) popup_snote_single_graphic_window_t2_ParamLimits

0x7f5c,	// (0x00052e0c) popup_snote_single_graphic_window_t2

0x7f6f,	// (0x00052e1f) popup_snote_single_graphic_window_t3_ParamLimits

0x7f6f,	// (0x00052e1f) popup_snote_single_graphic_window_t3

0x7fa8,	// (0x00052e58) popup_snote_single_graphic_window_t4_ParamLimits

0x7fa8,	// (0x00052e58) popup_snote_single_graphic_window_t4

0x7fdc,	// (0x00052e8c) popup_snote_single_graphic_window_t5_ParamLimits

0x7fdc,	// (0x00052e8c) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0005a4aa) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0005a4aa) popup_snote_single_graphic_window_t

0xb384,	// (0x00056234) grid_graphic_popup_pane_ParamLimits

0xb384,	// (0x00056234) grid_graphic_popup_pane

0xb3b2,	// (0x00056262) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3b2,	// (0x00056262) listscroll_popup_graphic_pane_g1

0xb3c6,	// (0x00056276) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3c6,	// (0x00056276) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ee,	// (0x0005a89e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ee,	// (0x0005a89e) listscroll_popup_graphic_pane_g

0xb3da,	// (0x0005628a) scroll_pane_cp5

0xb32c,	// (0x000561dc) cell_graphic_popup_pane_ParamLimits

0xb32c,	// (0x000561dc) cell_graphic_popup_pane

0xb30d,	// (0x000561bd) cell_graphic_popup_pane_g1

0xb315,	// (0x000561c5) cell_graphic_popup_pane_g2

0x7e2f,	// (0x00052cdf) cell_graphic_popup_pane_g3

0x0002,

0xf9e7,	// (0x0005a897) cell_graphic_popup_pane_g

0xb31e,	// (0x000561ce) cell_graphic_popup_pane_t2

0x7e38,	// (0x00052ce8) grid_highlight_pane_cp3

0x801d,	// (0x00052ecd) list_gen_pane_ParamLimits

0x801d,	// (0x00052ecd) list_gen_pane

0x804f,	// (0x00052eff) scroll_pane

0xb26f,	// (0x0005611f) bg_list_pane_g1_ParamLimits

0xb26f,	// (0x0005611f) bg_list_pane_g1

0xb28a,	// (0x0005613a) bg_list_pane_g2_ParamLimits

0xb28a,	// (0x0005613a) bg_list_pane_g2

0xb29d,	// (0x0005614d) bg_list_pane_g3_ParamLimits

0xb29d,	// (0x0005614d) bg_list_pane_g3

0xb2af,	// (0x0005615f) bg_list_pane_g4_ParamLimits

0xb2af,	// (0x0005615f) bg_list_pane_g4

0xb2c1,	// (0x00056171) bg_list_pane_g5_ParamLimits

0xb2c1,	// (0x00056171) bg_list_pane_g5

0x0004,

0xf9dc,	// (0x0005a88c) bg_list_pane_g_ParamLimits

0xf9dc,	// (0x0005a88c) bg_list_pane_g

0xb1ec,	// (0x0005609c) list_double2_graphic_large_graphic_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_double2_graphic_large_graphic_pane

0xb1ec,	// (0x0005609c) list_double2_graphic_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_double2_graphic_pane

0xb1ec,	// (0x0005609c) list_double2_large_graphic_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_double2_large_graphic_pane

0xb1ec,	// (0x0005609c) list_double2_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_double2_pane

0xb1ec,	// (0x0005609c) list_double_graphic_heading_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_double_graphic_heading_pane

0xb1ec,	// (0x0005609c) list_double_graphic_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_double_graphic_pane

0xb1ec,	// (0x0005609c) list_double_heading_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_double_heading_pane

0xb1ec,	// (0x0005609c) list_double_large_graphic_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_double_large_graphic_pane

0xb1ec,	// (0x0005609c) list_double_number_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_double_number_pane

0xb1ec,	// (0x0005609c) list_double_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_double_pane

0xb1ec,	// (0x0005609c) list_double_time_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_double_time_pane

0xb1ec,	// (0x0005609c) list_setting_number_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_setting_number_pane

0xb1ec,	// (0x0005609c) list_setting_pane_ParamLimits

0xb1ec,	// (0x0005609c) list_setting_pane

0xb22b,	// (0x000560db) list_single_2graphic_pane_ParamLimits

0xb22b,	// (0x000560db) list_single_2graphic_pane

0xb22b,	// (0x000560db) list_single_graphic_heading_pane_ParamLimits

0xb22b,	// (0x000560db) list_single_graphic_heading_pane

0xb22b,	// (0x000560db) list_single_graphic_pane_ParamLimits

0xb22b,	// (0x000560db) list_single_graphic_pane

0xb22b,	// (0x000560db) list_single_heading_pane_ParamLimits

0xb22b,	// (0x000560db) list_single_heading_pane

0x7a10,	// (0x000528c0) list_single_large_graphic_pane_ParamLimits

0x7a10,	// (0x000528c0) list_single_large_graphic_pane

0xb22b,	// (0x000560db) list_single_number_heading_pane_ParamLimits

0xb22b,	// (0x000560db) list_single_number_heading_pane

0xb22b,	// (0x000560db) list_single_number_pane_ParamLimits

0xb22b,	// (0x000560db) list_single_number_pane

0xb22b,	// (0x000560db) list_single_pane_ParamLimits

0xb22b,	// (0x000560db) list_single_pane

0x728e,	// (0x0005213e) list_highlight_pane_cp1

0x89c4,	// (0x00053874) list_single_pane_g1_ParamLimits

0x89c4,	// (0x00053874) list_single_pane_g1

0x7929,	// (0x000527d9) list_single_pane_g2_ParamLimits

0x7929,	// (0x000527d9) list_single_pane_g2

0x0001,

0xf616,	// (0x0005a4c6) list_single_pane_g_ParamLimits

0xf616,	// (0x0005a4c6) list_single_pane_g

0x626c,	// (0x0005111c) list_single_pane_t1_ParamLimits

0x626c,	// (0x0005111c) list_single_pane_t1

0x89c4,	// (0x00053874) list_single_number_pane_g1_ParamLimits

0x89c4,	// (0x00053874) list_single_number_pane_g1

0x7929,	// (0x000527d9) list_single_number_pane_g2_ParamLimits

0x7929,	// (0x000527d9) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0005a4c6) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0005a4c6) list_single_number_pane_g

0x6196,	// (0x00051046) list_single_number_pane_t1_ParamLimits

0x6196,	// (0x00051046) list_single_number_pane_t1

0x61ac,	// (0x0005105c) list_single_number_pane_t2_ParamLimits

0x61ac,	// (0x0005105c) list_single_number_pane_t2

0x0001,

0xf99d,	// (0x0005a84d) list_single_number_pane_t_ParamLimits

0xf99d,	// (0x0005a84d) list_single_number_pane_t

0x50a4,	// (0x0004ff54) list_single_graphic_pane_g1_ParamLimits

0x50a4,	// (0x0004ff54) list_single_graphic_pane_g1

0x89c4,	// (0x00053874) list_single_graphic_pane_g2_ParamLimits

0x89c4,	// (0x00053874) list_single_graphic_pane_g2

0x7929,	// (0x000527d9) list_single_graphic_pane_g3_ParamLimits

0x7929,	// (0x000527d9) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0005a4b5) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0005a4b5) list_single_graphic_pane_g

0x4207,	// (0x0004f0b7) list_single_graphic_pane_t1_ParamLimits

0x4207,	// (0x0004f0b7) list_single_graphic_pane_t1

0x50b0,	// (0x0004ff60) list_single_heading_pane_g1_ParamLimits

0x50b0,	// (0x0004ff60) list_single_heading_pane_g1

0x7929,	// (0x000527d9) list_single_heading_pane_g2_ParamLimits

0x7929,	// (0x000527d9) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0005a4bc) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0005a4bc) list_single_heading_pane_g

0x50c3,	// (0x0004ff73) list_single_heading_pane_t1_ParamLimits

0x50c3,	// (0x0004ff73) list_single_heading_pane_t1

0x7935,	// (0x000527e5) list_single_heading_pane_t2_ParamLimits

0x7935,	// (0x000527e5) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0005a4c1) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0005a4c1) list_single_heading_pane_t

0x89c4,	// (0x00053874) list_single_number_heading_pane_g1_ParamLimits

0x89c4,	// (0x00053874) list_single_number_heading_pane_g1

0x7929,	// (0x000527d9) list_single_number_heading_pane_g2_ParamLimits

0x7929,	// (0x000527d9) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0005a4c6) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0005a4c6) list_single_number_heading_pane_g

0x50d9,	// (0x0004ff89) list_single_number_heading_pane_t1_ParamLimits

0x50d9,	// (0x0004ff89) list_single_number_heading_pane_t1

0x50ef,	// (0x0004ff9f) list_single_number_heading_pane_t2_ParamLimits

0x50ef,	// (0x0004ff9f) list_single_number_heading_pane_t2

0x5101,	// (0x0004ffb1) list_single_number_heading_pane_t3_ParamLimits

0x5101,	// (0x0004ffb1) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0005a4cb) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0005a4cb) list_single_number_heading_pane_t

0x5113,	// (0x0004ffc3) list_single_graphic_heading_pane_g1_ParamLimits

0x5113,	// (0x0004ffc3) list_single_graphic_heading_pane_g1

0x7947,	// (0x000527f7) list_single_graphic_heading_pane_g4_ParamLimits

0x7947,	// (0x000527f7) list_single_graphic_heading_pane_g4

0x7929,	// (0x000527d9) list_single_graphic_heading_pane_g5_ParamLimits

0x7929,	// (0x000527d9) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0005a4d2) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0005a4d2) list_single_graphic_heading_pane_g

0x50d9,	// (0x0004ff89) list_single_graphic_heading_pane_t1_ParamLimits

0x50d9,	// (0x0004ff89) list_single_graphic_heading_pane_t1

0x512b,	// (0x0004ffdb) list_single_graphic_heading_pane_t2_ParamLimits

0x512b,	// (0x0004ffdb) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0005a4d9) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0005a4d9) list_single_graphic_heading_pane_t

0x7958,	// (0x00052808) list_single_large_graphic_pane_g1_ParamLimits

0x7958,	// (0x00052808) list_single_large_graphic_pane_g1

0x7964,	// (0x00052814) list_single_large_graphic_pane_g2_ParamLimits

0x7964,	// (0x00052814) list_single_large_graphic_pane_g2

0x7970,	// (0x00052820) list_single_large_graphic_pane_g3_ParamLimits

0x7970,	// (0x00052820) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0005a4de) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0005a4de) list_single_large_graphic_pane_g

0xa202,	// (0x000550b2) wait_border_pane_g2_copy1

0x797c,	// (0x0005282c) list_single_large_graphic_pane_g4_cp2

0x5143,	// (0x0004fff3) list_single_large_graphic_pane_t1_ParamLimits

0x5143,	// (0x0004fff3) list_single_large_graphic_pane_t1

0x7984,	// (0x00052834) list_double_pane_g1_ParamLimits

0x7984,	// (0x00052834) list_double_pane_g1

0x7990,	// (0x00052840) list_double_pane_g2_ParamLimits

0x7990,	// (0x00052840) list_double_pane_g2

0x0001,

0xf635,	// (0x0005a4e5) list_double_pane_g_ParamLimits

0xf635,	// (0x0005a4e5) list_double_pane_g

0x5159,	// (0x00050009) list_double_pane_t1_ParamLimits

0x5159,	// (0x00050009) list_double_pane_t1

0x516f,	// (0x0005001f) list_double_pane_t2_ParamLimits

0x516f,	// (0x0005001f) list_double_pane_t2

0x0001,

0xf63a,	// (0x0005a4ea) list_double_pane_t_ParamLimits

0xf63a,	// (0x0005a4ea) list_double_pane_t

0x5181,	// (0x00050031) list_double2_pane_g1_ParamLimits

0x5181,	// (0x00050031) list_double2_pane_g1

0x5192,	// (0x00050042) list_double2_pane_g2_ParamLimits

0x5192,	// (0x00050042) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0005a4ef) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0005a4ef) list_double2_pane_g

0x519e,	// (0x0005004e) list_double2_pane_t1_ParamLimits

0x519e,	// (0x0005004e) list_double2_pane_t1

0x51b4,	// (0x00050064) list_double2_pane_t2_ParamLimits

0x51b4,	// (0x00050064) list_double2_pane_t2

0x0001,

0xf644,	// (0x0005a4f4) list_double2_pane_t_ParamLimits

0xf644,	// (0x0005a4f4) list_double2_pane_t

0x7984,	// (0x00052834) list_double_number_pane_g1_ParamLimits

0x7984,	// (0x00052834) list_double_number_pane_g1

0x7990,	// (0x00052840) list_double_number_pane_g2_ParamLimits

0x7990,	// (0x00052840) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0005a4e5) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0005a4e5) list_double_number_pane_g

0x51c6,	// (0x00050076) list_double_number_pane_t1_ParamLimits

0x51c6,	// (0x00050076) list_double_number_pane_t1

0x51d8,	// (0x00050088) list_double_number_pane_t2_ParamLimits

0x51d8,	// (0x00050088) list_double_number_pane_t2

0x51ee,	// (0x0005009e) list_double_number_pane_t3_ParamLimits

0x51ee,	// (0x0005009e) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0005a4f9) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0005a4f9) list_double_number_pane_t

0x5200,	// (0x000500b0) list_double_graphic_pane_g1_ParamLimits

0x5200,	// (0x000500b0) list_double_graphic_pane_g1

0x520c,	// (0x000500bc) list_double_graphic_pane_g2_ParamLimits

0x520c,	// (0x000500bc) list_double_graphic_pane_g2

0x521b,	// (0x000500cb) list_double_graphic_pane_g3_ParamLimits

0x521b,	// (0x000500cb) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0005a500) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0005a500) list_double_graphic_pane_g

0x5233,	// (0x000500e3) list_double_graphic_pane_t1_ParamLimits

0x5233,	// (0x000500e3) list_double_graphic_pane_t1

0x5249,	// (0x000500f9) list_double_graphic_pane_t2_ParamLimits

0x5249,	// (0x000500f9) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0005a509) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0005a509) list_double_graphic_pane_t

0x525b,	// (0x0005010b) list_double2_graphic_pane_g1_ParamLimits

0x525b,	// (0x0005010b) list_double2_graphic_pane_g1

0x799c,	// (0x0005284c) list_double2_graphic_pane_g2_ParamLimits

0x799c,	// (0x0005284c) list_double2_graphic_pane_g2

0x5267,	// (0x00050117) list_double2_graphic_pane_g3_ParamLimits

0x5267,	// (0x00050117) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0005a50e) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0005a50e) list_double2_graphic_pane_g

0x5273,	// (0x00050123) list_double2_graphic_pane_t1_ParamLimits

0x5273,	// (0x00050123) list_double2_graphic_pane_t1

0x5289,	// (0x00050139) list_double2_graphic_pane_t2_ParamLimits

0x5289,	// (0x00050139) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0005a515) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0005a515) list_double2_graphic_pane_t

0x529b,	// (0x0005014b) list_double_large_graphic_pane_g1_ParamLimits

0x529b,	// (0x0005014b) list_double_large_graphic_pane_g1

0x52c6,	// (0x00050176) list_double_large_graphic_pane_g2_ParamLimits

0x52c6,	// (0x00050176) list_double_large_graphic_pane_g2

0x7990,	// (0x00052840) list_double_large_graphic_pane_g3_ParamLimits

0x7990,	// (0x00052840) list_double_large_graphic_pane_g3

0x52dc,	// (0x0005018c) list_double_large_graphic_pane_g4_ParamLimits

0x52dc,	// (0x0005018c) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0005a51a) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0005a51a) list_double_large_graphic_pane_g

0x52ef,	// (0x0005019f) list_double_large_graphic_pane_t1_ParamLimits

0x52ef,	// (0x0005019f) list_double_large_graphic_pane_t1

0x5308,	// (0x000501b8) list_double_large_graphic_pane_t2_ParamLimits

0x5308,	// (0x000501b8) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0005a525) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0005a525) list_double_large_graphic_pane_t

0x79bd,	// (0x0005286d) list_double2_large_graphic_pane_g1_ParamLimits

0x79bd,	// (0x0005286d) list_double2_large_graphic_pane_g1

0x531a,	// (0x000501ca) list_double2_large_graphic_pane_g2_ParamLimits

0x531a,	// (0x000501ca) list_double2_large_graphic_pane_g2

0x5267,	// (0x00050117) list_double2_large_graphic_pane_g3_ParamLimits

0x5267,	// (0x00050117) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0005a52a) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0005a52a) list_double2_large_graphic_pane_g

0x532b,	// (0x000501db) list_double2_large_graphic_pane_t1_ParamLimits

0x532b,	// (0x000501db) list_double2_large_graphic_pane_t1

0x5341,	// (0x000501f1) list_double2_large_graphic_pane_t2_ParamLimits

0x5341,	// (0x000501f1) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0005a531) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0005a531) list_double2_large_graphic_pane_t

0x5353,	// (0x00050203) list_double_heading_pane_g1_ParamLimits

0x5353,	// (0x00050203) list_double_heading_pane_g1

0x5364,	// (0x00050214) list_double_heading_pane_g2_ParamLimits

0x5364,	// (0x00050214) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0005a536) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0005a536) list_double_heading_pane_g

0x5370,	// (0x00050220) list_double_heading_pane_t1_ParamLimits

0x5370,	// (0x00050220) list_double_heading_pane_t1

0x5386,	// (0x00050236) list_double_heading_pane_t2_ParamLimits

0x5386,	// (0x00050236) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0005a53b) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0005a53b) list_double_heading_pane_t

0x5398,	// (0x00050248) list_double_graphic_heading_pane_g1_ParamLimits

0x5398,	// (0x00050248) list_double_graphic_heading_pane_g1

0x5353,	// (0x00050203) list_double_graphic_heading_pane_g2_ParamLimits

0x5353,	// (0x00050203) list_double_graphic_heading_pane_g2

0x5364,	// (0x00050214) list_double_graphic_heading_pane_g3_ParamLimits

0x5364,	// (0x00050214) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0005a540) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0005a540) list_double_graphic_heading_pane_g

0x53a4,	// (0x00050254) list_double_graphic_heading_pane_t1_ParamLimits

0x53a4,	// (0x00050254) list_double_graphic_heading_pane_t1

0x53ba,	// (0x0005026a) list_double_graphic_heading_pane_t2_ParamLimits

0x53ba,	// (0x0005026a) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0005a547) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0005a547) list_double_graphic_heading_pane_t

0x53cc,	// (0x0005027c) list_double_time_pane_g1_ParamLimits

0x53cc,	// (0x0005027c) list_double_time_pane_g1

0x53dd,	// (0x0005028d) list_double_time_pane_g2_ParamLimits

0x53dd,	// (0x0005028d) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0005a54c) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0005a54c) list_double_time_pane_g

0x53e9,	// (0x00050299) list_double_time_pane_t1_ParamLimits

0x53e9,	// (0x00050299) list_double_time_pane_t1

0x53ff,	// (0x000502af) list_double_time_pane_t2_ParamLimits

0x53ff,	// (0x000502af) list_double_time_pane_t2

0x5411,	// (0x000502c1) list_double_time_pane_t3_ParamLimits

0x5411,	// (0x000502c1) list_double_time_pane_t3

0x5423,	// (0x000502d3) list_double_time_pane_t4_ParamLimits

0x5423,	// (0x000502d3) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0005a551) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0005a551) list_double_time_pane_t

0x5435,	// (0x000502e5) list_setting_pane_g1_ParamLimits

0x5435,	// (0x000502e5) list_setting_pane_g1

0x5441,	// (0x000502f1) list_setting_pane_g2_ParamLimits

0x5441,	// (0x000502f1) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0005a55a) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0005a55a) list_setting_pane_g

0x544d,	// (0x000502fd) list_setting_pane_t1_ParamLimits

0x544d,	// (0x000502fd) list_setting_pane_t1

0x5467,	// (0x00050317) list_setting_pane_t2_ParamLimits

0x5467,	// (0x00050317) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0005a55f) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0005a55f) list_setting_pane_t

0x54a6,	// (0x00050356) set_value_pane_cp_ParamLimits

0x54a6,	// (0x00050356) set_value_pane_cp

0x54b4,	// (0x00050364) list_setting_number_pane_g1_ParamLimits

0x54b4,	// (0x00050364) list_setting_number_pane_g1

0x54c0,	// (0x00050370) list_setting_number_pane_g2_ParamLimits

0x54c0,	// (0x00050370) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0005a566) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0005a566) list_setting_number_pane_g

0x54cc,	// (0x0005037c) list_setting_number_pane_t1_ParamLimits

0x54cc,	// (0x0005037c) list_setting_number_pane_t1

0x54e5,	// (0x00050395) list_setting_number_pane_t2_ParamLimits

0x54e5,	// (0x00050395) list_setting_number_pane_t2

0x54ff,	// (0x000503af) list_setting_number_pane_t3_ParamLimits

0x54ff,	// (0x000503af) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0005a56b) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0005a56b) list_setting_number_pane_t

0x54a6,	// (0x00050356) set_value_pane_ParamLimits

0x54a6,	// (0x00050356) set_value_pane

0x8083,	// (0x00052f33) bg_set_opt_pane_ParamLimits

0x8083,	// (0x00052f33) bg_set_opt_pane

0x5542,	// (0x000503f2) set_value_pane_t1

0x80a4,	// (0x00052f54) slider_set_pane_cp3

0x80ad,	// (0x00052f5d) volume_small_pane_cp

0x80b6,	// (0x00052f66) list_form_gen_pane

0x80bf,	// (0x00052f6f) scroll_pane_cp8

0x5558,	// (0x00050408) form_field_data_pane_ParamLimits

0x5558,	// (0x00050408) form_field_data_pane

0x5580,	// (0x00050430) form_field_data_wide_pane_ParamLimits

0x5580,	// (0x00050430) form_field_data_wide_pane

0x55a7,	// (0x00050457) form_field_popup_pane_ParamLimits

0x55a7,	// (0x00050457) form_field_popup_pane

0x55c9,	// (0x00050479) form_field_popup_wide_pane_ParamLimits

0x55c9,	// (0x00050479) form_field_popup_wide_pane

0x55ea,	// (0x0005049a) form_field_slider_pane_ParamLimits

0x55ea,	// (0x0005049a) form_field_slider_pane

0x55fd,	// (0x000504ad) form_field_slider_wide_pane_ParamLimits

0x55fd,	// (0x000504ad) form_field_slider_wide_pane

0x80d0,	// (0x00052f80) data_form_pane

0x561a,	// (0x000504ca) form_field_data_pane_t1

0x80dc,	// (0x00052f8c) input_focus_pane

0x80ea,	// (0x00052f9a) data_form_wide_pane

0x5640,	// (0x000504f0) form_field_data_wide_pane_t1

0x7e4d,	// (0x00052cfd) input_focus_pane_cp6

0x5662,	// (0x00050512) form_field_popup_pane_t1

0x80dc,	// (0x00052f8c) input_focus_pane_cp7

0x8116,	// (0x00052fc6) list_form_pane

0x5684,	// (0x00050534) form_field_popup_wide_pane_t1

0x80dc,	// (0x00052f8c) input_focus_pane_cp8

0x8122,	// (0x00052fd2) list_form_wide_pane

0x56a1,	// (0x00050551) form_field_slider_pane_t1_ParamLimits

0x56a1,	// (0x00050551) form_field_slider_pane_t1

0x56b9,	// (0x00050569) form_field_slider_pane_t2_ParamLimits

0x56b9,	// (0x00050569) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0005a57b) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0005a57b) form_field_slider_pane_t

0x75ea,	// (0x0005249a) input_focus_pane_cp9_ParamLimits

0x75ea,	// (0x0005249a) input_focus_pane_cp9

0x56ce,	// (0x0005057e) slider_cont_pane_ParamLimits

0x56ce,	// (0x0005057e) slider_cont_pane

0x8131,	// (0x00052fe1) form_field_slider_wide_pane_t1_ParamLimits

0x8131,	// (0x00052fe1) form_field_slider_wide_pane_t1

0x56e2,	// (0x00050592) form_field_slider_wide_pane_t2_ParamLimits

0x56e2,	// (0x00050592) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0005a580) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0005a580) form_field_slider_wide_pane_t

0x75ea,	// (0x0005249a) input_focus_pane_cp10_ParamLimits

0x75ea,	// (0x0005249a) input_focus_pane_cp10

0x56f4,	// (0x000505a4) slider_cont_pane_cp1_ParamLimits

0x56f4,	// (0x000505a4) slider_cont_pane_cp1

0x5708,	// (0x000505b8) slider_form_pane_cp

0x8143,	// (0x00052ff3) input_focus_pane_g1

0x814b,	// (0x00052ffb) input_focus_pane_g2

0x8153,	// (0x00053003) input_focus_pane_g3

0x815b,	// (0x0005300b) input_focus_pane_g4

0x8163,	// (0x00053013) input_focus_pane_g5

0x816b,	// (0x0005301b) input_focus_pane_g6

0x8173,	// (0x00053023) input_focus_pane_g7

0x817b,	// (0x0005302b) input_focus_pane_g8

0x8183,	// (0x00053033) input_focus_pane_g9

0x7284,	// (0x00052134) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0005a585) input_focus_pane_g

0xa20b,	// (0x000550bb) wait_border_pane_g3_copy1

0x5710,	// (0x000505c0) data_form_pane_t1

0x7284,	// (0x00052134) wait_anim_pane_g1_copy1

0x6236,	// (0x000510e6) data_form_wide_pane_t1

0x572f,	// (0x000505df) list_form_graphic_pane_cp_ParamLimits

0x572f,	// (0x000505df) list_form_graphic_pane_cp

0xb190,	// (0x00056040) slider_form_pane_g1

0xb199,	// (0x00056049) slider_form_pane_g2

0x0006,

0xf9cd,	// (0x0005a87d) slider_form_pane_g

0x572f,	// (0x000505df) list_form_graphic_pane_ParamLimits

0x572f,	// (0x000505df) list_form_graphic_pane

0x5741,	// (0x000505f1) list_form_graphic_pane_g1

0x5749,	// (0x000505f9) list_form_graphic_pane_t1_ParamLimits

0x5749,	// (0x000505f9) list_form_graphic_pane_t1

0x736e,	// (0x0005221e) list_highlight_pane_cp5_ParamLimits

0x736e,	// (0x0005221e) list_highlight_pane_cp5

0x79c9,	// (0x00052879) find_pane_g1

0x818b,	// (0x0005303b) input_find_pane

0x575e,	// (0x0005060e) input_find_pane_g1_ParamLimits

0x575e,	// (0x0005060e) input_find_pane_g1

0x576a,	// (0x0005061a) input_find_pane_t1_ParamLimits

0x576a,	// (0x0005061a) input_find_pane_t1

0x577f,	// (0x0005062f) input_find_pane_t2_ParamLimits

0x577f,	// (0x0005062f) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0005a59a) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0005a59a) input_find_pane_t

0x8194,	// (0x00053044) input_focus_pane_cp5_ParamLimits

0x8194,	// (0x00053044) input_focus_pane_cp5

0x81ae,	// (0x0005305e) bg_popup_window_pane_cp2_ParamLimits

0x81ae,	// (0x0005305e) bg_popup_window_pane_cp2

0x81bb,	// (0x0005306b) listscroll_menu_pane_ParamLimits

0x81bb,	// (0x0005306b) listscroll_menu_pane

0x81c7,	// (0x00053077) popup_submenu_window_ParamLimits

0x81c7,	// (0x00053077) popup_submenu_window

0x81f7,	// (0x000530a7) find_popup_pane_g1

0x81ff,	// (0x000530af) input_popup_find_pane_cp

0x8194,	// (0x00053044) input_focus_pane_cp4_ParamLimits

0x8194,	// (0x00053044) input_focus_pane_cp4

0x8217,	// (0x000530c7) input_popup_find_pane_t1_ParamLimits

0x8217,	// (0x000530c7) input_popup_find_pane_t1

0x728e,	// (0x0005213e) bg_popup_sub_pane_cp

0x8245,	// (0x000530f5) listscroll_popup_sub_pane

0x824d,	// (0x000530fd) list_submenu_pane_ParamLimits

0x824d,	// (0x000530fd) list_submenu_pane

0x825e,	// (0x0005310e) scroll_pane_cp4

0x8266,	// (0x00053116) list_single_popup_submenu_pane_ParamLimits

0x8266,	// (0x00053116) list_single_popup_submenu_pane

0x827b,	// (0x0005312b) list_single_popup_submenu_pane_g1

0x8283,	// (0x00053133) list_single_popup_submenu_pane_t1_ParamLimits

0x8283,	// (0x00053133) list_single_popup_submenu_pane_t1

0x736e,	// (0x0005221e) bg_active_tab_pane_cp1_ParamLimits

0x736e,	// (0x0005221e) bg_active_tab_pane_cp1

0x8298,	// (0x00053148) tabs_2_active_pane_g1

0x82a0,	// (0x00053150) tabs_2_active_pane_t1

0x736e,	// (0x0005221e) bg_passive_tab_pane_cp1_ParamLimits

0x736e,	// (0x0005221e) bg_passive_tab_pane_cp1

0x8298,	// (0x00053148) tabs_2_passive_pane_g1

0x82a0,	// (0x00053150) tabs_2_passive_pane_t1

0x82b2,	// (0x00053162) bg_active_tab_pane_cp4

0x82c0,	// (0x00053170) tabs_2_long_active_pane_t1

0x82d3,	// (0x00053183) bg_passive_tab_pane_cp4

0x5e82,	// (0x00050d32) list_single_midp_graphic_pane_g4_ParamLimits

0x82b2,	// (0x00053162) bg_active_tab_pane_cp5

0x82df,	// (0x0005318f) tabs_3_long_active_pane_t1

0x82d3,	// (0x00053183) bg_passive_tab_pane_cp5

0x5e82,	// (0x00050d32) list_single_midp_graphic_pane_g4

0x736e,	// (0x0005221e) bg_popup_window_pane_cp13_ParamLimits

0x736e,	// (0x0005221e) bg_popup_window_pane_cp13

0x82fa,	// (0x000531aa) listscroll_popup_fast_pane_ParamLimits

0x82fa,	// (0x000531aa) listscroll_popup_fast_pane

0x8309,	// (0x000531b9) grid_popup_fast_pane_ParamLimits

0x8309,	// (0x000531b9) grid_popup_fast_pane

0x831b,	// (0x000531cb) scroll_pane_cp9_ParamLimits

0x831b,	// (0x000531cb) scroll_pane_cp9

0xcac3,	// (0x00057973) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcac3,	// (0x00057973) list_single_graphic_hl_pane_t1_cp2

0x833f,	// (0x000531ef) input_focus_pane_cp20_ParamLimits

0x833f,	// (0x000531ef) input_focus_pane_cp20

0x834d,	// (0x000531fd) query_popup_data_pane_t1_ParamLimits

0x834d,	// (0x000531fd) query_popup_data_pane_t1

0x8360,	// (0x00053210) query_popup_data_pane_t2_ParamLimits

0x8360,	// (0x00053210) query_popup_data_pane_t2

0x83a6,	// (0x00053256) query_popup_data_pane_t3_ParamLimits

0x83a6,	// (0x00053256) query_popup_data_pane_t3

0x83e7,	// (0x00053297) query_popup_data_pane_t4_ParamLimits

0x83e7,	// (0x00053297) query_popup_data_pane_t4

0x8423,	// (0x000532d3) query_popup_data_pane_t5_ParamLimits

0x8423,	// (0x000532d3) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0005a59f) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0005a59f) query_popup_data_pane_t

0x8143,	// (0x00052ff3) bg_set_opt_pane_g1

0x814b,	// (0x00052ffb) bg_set_opt_pane_g2

0x8153,	// (0x00053003) bg_set_opt_pane_g3

0x815b,	// (0x0005300b) bg_set_opt_pane_g4

0x8163,	// (0x00053013) bg_set_opt_pane_g5

0x816b,	// (0x0005301b) bg_set_opt_pane_g6

0x8173,	// (0x00053023) bg_set_opt_pane_g7

0x817b,	// (0x0005302b) bg_set_opt_pane_g8

0x8183,	// (0x00053033) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0005a5aa) bg_set_opt_pane_g

0x5aa5,	// (0x00050955) control_top_pane_stacon_ParamLimits

0x5aa5,	// (0x00050955) control_top_pane_stacon

0x5af8,	// (0x000509a8) signal_pane_stacon_ParamLimits

0x5af8,	// (0x000509a8) signal_pane_stacon

0x89db,	// (0x0005388b) stacon_top_pane_g1_ParamLimits

0x89db,	// (0x0005388b) stacon_top_pane_g1

0x5b1d,	// (0x000509cd) title_pane_stacon_ParamLimits

0x5b1d,	// (0x000509cd) title_pane_stacon

0x5b47,	// (0x000509f7) uni_indicator_pane_stacon_ParamLimits

0x5b47,	// (0x000509f7) uni_indicator_pane_stacon

0x5b5f,	// (0x00050a0f) battery_pane_stacon_ParamLimits

0x5b5f,	// (0x00050a0f) battery_pane_stacon

0x5ba3,	// (0x00050a53) control_bottom_pane_stacon_ParamLimits

0x5ba3,	// (0x00050a53) control_bottom_pane_stacon

0x5bc6,	// (0x00050a76) navi_pane_stacon_ParamLimits

0x5bc6,	// (0x00050a76) navi_pane_stacon

0x89fd,	// (0x000538ad) stacon_bottom_pane_g1_ParamLimits

0x89fd,	// (0x000538ad) stacon_bottom_pane_g1

0x5794,	// (0x00050644) aid_levels_signal_lsc_ParamLimits

0x5794,	// (0x00050644) aid_levels_signal_lsc

0x57ab,	// (0x0005065b) signal_pane_stacon_g1_ParamLimits

0x57ab,	// (0x0005065b) signal_pane_stacon_g1

0x57bf,	// (0x0005066f) signal_pane_stacon_g2_ParamLimits

0x57bf,	// (0x0005066f) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0005a5bd) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0005a5bd) signal_pane_stacon_g

0x57f4,	// (0x000506a4) title_pane_stacon_t1_ParamLimits

0x57f4,	// (0x000506a4) title_pane_stacon_t1

0x8467,	// (0x00053317) uni_indicator_pane_stacon_g1

0x8471,	// (0x00053321) uni_indicator_pane_stacon_g2

0x847b,	// (0x0005332b) uni_indicator_pane_stacon_g3

0x8485,	// (0x00053335) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0005a5c9) uni_indicator_pane_stacon_g

0x5819,	// (0x000506c9) control_top_pane_stacon_g1

0x5821,	// (0x000506d1) control_top_pane_stacon_t1_ParamLimits

0x5821,	// (0x000506d1) control_top_pane_stacon_t1

0x5858,	// (0x00050708) aid_levels_battery_lsc_ParamLimits

0x5858,	// (0x00050708) aid_levels_battery_lsc

0x5870,	// (0x00050720) battery_pane_stacon_g1_ParamLimits

0x5870,	// (0x00050720) battery_pane_stacon_g1

0x5883,	// (0x00050733) battery_pane_stacon_g2_ParamLimits

0x5883,	// (0x00050733) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0005a5d2) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0005a5d2) battery_pane_stacon_g

0x58c1,	// (0x00050771) navi_icon_pane_stacon

0x58d5,	// (0x00050785) navi_navi_pane_stacon

0x58c1,	// (0x00050771) navi_text_pane_stacon

0x5819,	// (0x000506c9) control_bottom_pane_stacon_g1

0x58eb,	// (0x0005079b) control_bottom_pane_stacon_t1_ParamLimits

0x58eb,	// (0x0005079b) control_bottom_pane_stacon_t1

0x84a9,	// (0x00053359) grid_app_pane_ParamLimits

0x84a9,	// (0x00053359) grid_app_pane

0x84cd,	// (0x0005337d) scroll_pane_cp15_ParamLimits

0x84cd,	// (0x0005337d) scroll_pane_cp15

0x84e2,	// (0x00053392) cell_app_pane_ParamLimits

0x84e2,	// (0x00053392) cell_app_pane

0x850e,	// (0x000533be) cell_app_pane_g1_ParamLimits

0x850e,	// (0x000533be) cell_app_pane_g1

0x8532,	// (0x000533e2) cell_app_pane_g2_ParamLimits

0x8532,	// (0x000533e2) cell_app_pane_g2

0x0001,

0xf727,	// (0x0005a5d7) cell_app_pane_g_ParamLimits

0xf727,	// (0x0005a5d7) cell_app_pane_g

0x853e,	// (0x000533ee) cell_app_pane_t1_ParamLimits

0x853e,	// (0x000533ee) cell_app_pane_t1

0x8550,	// (0x00053400) grid_highlight_pane_ParamLimits

0x8550,	// (0x00053400) grid_highlight_pane

0x8143,	// (0x00052ff3) cell_highlight_pane_g1

0x814b,	// (0x00052ffb) cell_highlight_pane_g2

0x8153,	// (0x00053003) cell_highlight_pane_g3

0x815b,	// (0x0005300b) cell_highlight_pane_g4

0x8163,	// (0x00053013) cell_highlight_pane_g5

0x816b,	// (0x0005301b) cell_highlight_pane_g6

0x8173,	// (0x00053023) cell_highlight_pane_g7

0x817b,	// (0x0005302b) cell_highlight_pane_g8

0x8183,	// (0x00053033) cell_highlight_pane_g9

0x7284,	// (0x00052134) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0005a585) cell_highlight_pane_g

0x8561,	// (0x00053411) bg_scroll_pane

0x5935,	// (0x000507e5) scroll_handle_pane

0x85a8,	// (0x00053458) scroll_bg_pane_g1

0x85bd,	// (0x0005346d) scroll_bg_pane_g2

0x85d5,	// (0x00053485) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0005a5dc) scroll_bg_pane_g

0x85ea,	// (0x0005349a) scroll_handle_focus_pane_ParamLimits

0x85ea,	// (0x0005349a) scroll_handle_focus_pane

0x85a8,	// (0x00053458) scroll_handle_pane_g1

0x85f7,	// (0x000534a7) scroll_handle_pane_g2

0x85d5,	// (0x00053485) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0005a5e3) scroll_handle_pane_g

0x8194,	// (0x00053044) bg_popup_sub_pane_cp21_ParamLimits

0x8194,	// (0x00053044) bg_popup_sub_pane_cp21

0x860b,	// (0x000534bb) popup_fep_japan_predictive_window_t1_ParamLimits

0x860b,	// (0x000534bb) popup_fep_japan_predictive_window_t1

0x8622,	// (0x000534d2) popup_fep_japan_predictive_window_t2_ParamLimits

0x8622,	// (0x000534d2) popup_fep_japan_predictive_window_t2

0x8655,	// (0x00053505) popup_fep_japan_predictive_window_t3_ParamLimits

0x8655,	// (0x00053505) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0005a5ea) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0005a5ea) popup_fep_japan_predictive_window_t

0x728e,	// (0x0005213e) bg_popup_sub_pane_cp23

0x868c,	// (0x0005353c) listscroll_japin_cand_pane

0x8694,	// (0x00053544) popup_fep_japan_candidate_window_t1

0x86a2,	// (0x00053552) candidate_pane_ParamLimits

0x86a2,	// (0x00053552) candidate_pane

0x86b4,	// (0x00053564) scroll_pane_cp30

0x86be,	// (0x0005356e) list_single_popup_jap_candidate_pane_ParamLimits

0x86be,	// (0x0005356e) list_single_popup_jap_candidate_pane

0x728e,	// (0x0005213e) list_highlight_pane_cp30

0x86d2,	// (0x00053582) list_single_popup_jap_candidate_pane_t1

0x86e1,	// (0x00053591) level_1_signal

0x86ee,	// (0x0005359e) level_2_signal

0x86fb,	// (0x000535ab) level_3_signal

0x8708,	// (0x000535b8) level_4_signal

0x8715,	// (0x000535c5) level_5_signal

0x8722,	// (0x000535d2) level_6_signal

0x872f,	// (0x000535df) level_7_signal

0x86e1,	// (0x00053591) level_1_battery

0x86ee,	// (0x0005359e) level_2_battery

0x86fb,	// (0x000535ab) level_3_battery

0x8708,	// (0x000535b8) level_4_battery

0x8715,	// (0x000535c5) level_5_battery

0x8722,	// (0x000535d2) level_6_battery

0x872f,	// (0x000535df) level_7_battery

0x8754,	// (0x00053604) list_menu_pane_ParamLimits

0x8754,	// (0x00053604) list_menu_pane

0x8765,	// (0x00053615) scroll_pane_cp25_ParamLimits

0x8765,	// (0x00053615) scroll_pane_cp25

0x877e,	// (0x0005362e) list_double2_graphic_pane_cp2_ParamLimits

0x877e,	// (0x0005362e) list_double2_graphic_pane_cp2

0x877e,	// (0x0005362e) list_double2_large_graphic_pane_cp2_ParamLimits

0x877e,	// (0x0005362e) list_double2_large_graphic_pane_cp2

0x877e,	// (0x0005362e) list_double2_pane_cp2_ParamLimits

0x877e,	// (0x0005362e) list_double2_pane_cp2

0x877e,	// (0x0005362e) list_double_graphic_pane_cp2_ParamLimits

0x877e,	// (0x0005362e) list_double_graphic_pane_cp2

0x877e,	// (0x0005362e) list_double_large_graphic_pane_cp2_ParamLimits

0x877e,	// (0x0005362e) list_double_large_graphic_pane_cp2

0x877e,	// (0x0005362e) list_double_number_pane_cp2_ParamLimits

0x877e,	// (0x0005362e) list_double_number_pane_cp2

0x877e,	// (0x0005362e) list_double_pane_cp2_ParamLimits

0x877e,	// (0x0005362e) list_double_pane_cp2

0x87a4,	// (0x00053654) list_single_2graphic_pane_cp2_ParamLimits

0x87a4,	// (0x00053654) list_single_2graphic_pane_cp2

0x87a4,	// (0x00053654) list_single_graphic_heading_pane_cp2_ParamLimits

0x87a4,	// (0x00053654) list_single_graphic_heading_pane_cp2

0x87a4,	// (0x00053654) list_single_graphic_pane_cp2_ParamLimits

0x87a4,	// (0x00053654) list_single_graphic_pane_cp2

0x87a4,	// (0x00053654) list_single_heading_pane_cp2_ParamLimits

0x87a4,	// (0x00053654) list_single_heading_pane_cp2

0x87c1,	// (0x00053671) list_single_large_graphic_pane_cp2_ParamLimits

0x87c1,	// (0x00053671) list_single_large_graphic_pane_cp2

0x87a4,	// (0x00053654) list_single_number_heading_pane_cp2_ParamLimits

0x87a4,	// (0x00053654) list_single_number_heading_pane_cp2

0x87a4,	// (0x00053654) list_single_number_pane_cp2_ParamLimits

0x87a4,	// (0x00053654) list_single_number_pane_cp2

0x87a4,	// (0x00053654) list_single_pane_cp2_ParamLimits

0x87a4,	// (0x00053654) list_single_pane_cp2

0x8816,	// (0x000536c6) bg_popup_sub_pane_cp22

0x59e7,	// (0x00050897) popup_side_volume_key_window_g1

0x5a11,	// (0x000508c1) popup_side_volume_key_window_t1

0x5a2f,	// (0x000508df) volume_small_pane_cp1

0x75ea,	// (0x0005249a) bg_popup_sub_pane_cp24_ParamLimits

0x75ea,	// (0x0005249a) bg_popup_sub_pane_cp24

0x882c,	// (0x000536dc) fep_china_uni_candidate_pane_ParamLimits

0x882c,	// (0x000536dc) fep_china_uni_candidate_pane

0x8840,	// (0x000536f0) fep_china_uni_entry_pane

0x8850,	// (0x00053700) popup_fep_china_uni_window_g1

0x886c,	// (0x0005371c) fep_china_uni_entry_pane_g1

0x8876,	// (0x00053726) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0005a617) fep_china_uni_entry_pane_g

0x8880,	// (0x00053730) fep_entry_item_pane

0x888a,	// (0x0005373a) fep_candidate_item_pane

0x8892,	// (0x00053742) fep_china_uni_candidate_pane_g1

0x889c,	// (0x0005374c) fep_china_uni_candidate_pane_g2

0x88a4,	// (0x00053754) fep_china_uni_candidate_pane_g3

0x88ac,	// (0x0005375c) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0005a61c) fep_china_uni_candidate_pane_g

0x7284,	// (0x00052134) fep_entry_item_pane_g1

0x88b6,	// (0x00053766) fep_entry_item_pane_t1_ParamLimits

0x88b6,	// (0x00053766) fep_entry_item_pane_t1

0x88cc,	// (0x0005377c) fep_candidate_item_pane_t1_ParamLimits

0x88cc,	// (0x0005377c) fep_candidate_item_pane_t1

0x88e1,	// (0x00053791) fep_candidate_item_pane_t2_ParamLimits

0x88e1,	// (0x00053791) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0005a625) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0005a625) fep_candidate_item_pane_t

0x736e,	// (0x0005221e) list_highlight_pane_cp31_ParamLimits

0x736e,	// (0x0005221e) list_highlight_pane_cp31

0x88f3,	// (0x000537a3) level_1_signal_lsc

0x88fc,	// (0x000537ac) level_2_signal_lsc

0x8905,	// (0x000537b5) level_3_signal_lsc

0x890e,	// (0x000537be) level_4_signal_lsc

0x8917,	// (0x000537c7) level_5_signal_lsc

0x8920,	// (0x000537d0) level_6_signal_lsc

0x8929,	// (0x000537d9) level_7_signal_lsc

0x8929,	// (0x000537d9) level_1_battery_lsc

0x8932,	// (0x000537e2) level_2_battery_lsc

0x893b,	// (0x000537eb) level_3_battery_lsc

0x8944,	// (0x000537f4) level_4_battery_lsc

0x894d,	// (0x000537fd) level_5_battery_lsc

0x8956,	// (0x00053806) level_6_battery_lsc

0x88f3,	// (0x000537a3) level_7_battery_lsc

0x895f,	// (0x0005380f) scroll_handle_focus_pane_g1

0x8968,	// (0x00053818) scroll_handle_focus_pane_g2

0x8971,	// (0x00053821) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0005a62a) scroll_handle_focus_pane_g

0x5a37,	// (0x000508e7) list_single_2graphic_pane_g1_ParamLimits

0x5a37,	// (0x000508e7) list_single_2graphic_pane_g1

0x7947,	// (0x000527f7) list_single_2graphic_pane_g2_ParamLimits

0x7947,	// (0x000527f7) list_single_2graphic_pane_g2

0x7929,	// (0x000527d9) list_single_2graphic_pane_g3_ParamLimits

0x7929,	// (0x000527d9) list_single_2graphic_pane_g3

0x79d2,	// (0x00052882) list_single_2graphic_pane_g4_ParamLimits

0x79d2,	// (0x00052882) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0005a631) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0005a631) list_single_2graphic_pane_g

0x5a43,	// (0x000508f3) list_single_2graphic_pane_t1_ParamLimits

0x5a43,	// (0x000508f3) list_single_2graphic_pane_t1

0x79de,	// (0x0005288e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x79de,	// (0x0005288e) list_double2_graphic_large_graphic_pane_g1

0x531a,	// (0x000501ca) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x531a,	// (0x000501ca) list_double2_graphic_large_graphic_pane_g2

0x5267,	// (0x00050117) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5267,	// (0x00050117) list_double2_graphic_large_graphic_pane_g3

0x5a71,	// (0x00050921) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5a71,	// (0x00050921) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0005a63a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0005a63a) list_double2_graphic_large_graphic_pane_g

0x5a7d,	// (0x0005092d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5a7d,	// (0x0005092d) list_double2_graphic_large_graphic_pane_t1

0x5a93,	// (0x00050943) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5a93,	// (0x00050943) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0005a643) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0005a643) list_double2_graphic_large_graphic_pane_t

0x8abf,	// (0x0005396f) popup_fast_swap_window_ParamLimits

0x8abf,	// (0x0005396f) popup_fast_swap_window

0x8add,	// (0x0005398d) popup_side_volume_key_window

0x8afb,	// (0x000539ab) stacon_top_pane

0x8b05,	// (0x000539b5) status_pane_ParamLimits

0x8b05,	// (0x000539b5) status_pane

0x8afb,	// (0x000539ab) status_small_pane

0x728e,	// (0x0005213e) control_pane

0x728e,	// (0x0005213e) stacon_bottom_pane

0x80bf,	// (0x00052f6f) scroll_pane_cp121

0x80b6,	// (0x00052f66) set_content_pane

0x897a,	// (0x0005382a) bg_active_tab_pane_g1_cp1

0x8983,	// (0x00053833) bg_active_tab_pane_g2_cp1

0x898c,	// (0x0005383c) bg_active_tab_pane_g3_cp1

0x897a,	// (0x0005382a) bg_passive_tab_pane_g1_cp1

0x8983,	// (0x00053833) bg_passive_tab_pane_g2_cp1

0x898c,	// (0x0005383c) bg_passive_tab_pane_g3_cp1

0x8995,	// (0x00053845) bg_active_tab_pane_g1_cp2

0x8983,	// (0x00053833) bg_active_tab_pane_g2_cp2

0x899e,	// (0x0005384e) bg_active_tab_pane_g3_cp2

0x8995,	// (0x00053845) bg_passive_tab_pane_g1_cp2

0x8983,	// (0x00053833) bg_passive_tab_pane_g2_cp2

0x899e,	// (0x0005384e) bg_passive_tab_pane_g3_cp2

0x89a7,	// (0x00053857) bg_active_tab_pane_g1_cp3

0x8983,	// (0x00053833) bg_active_tab_pane_g2_cp3

0x89b0,	// (0x00053860) bg_active_tab_pane_g3_cp3

0x89a7,	// (0x00053857) bg_passive_tab_pane_g1_cp3

0x8983,	// (0x00053833) bg_passive_tab_pane_g2_cp3

0x89b0,	// (0x00053860) bg_passive_tab_pane_g3_cp3

0x89d0,	// (0x00053880) bg_active_tab_pane_g1_cp4

0x8983,	// (0x00053833) bg_active_tab_pane_g2_cp4

0x89b9,	// (0x00053869) bg_active_tab_pane_g3_cp4

0x89d0,	// (0x00053880) bg_passive_tab_pane_g1_cp4

0x8983,	// (0x00053833) bg_passive_tab_pane_g2_cp4

0x89b9,	// (0x00053869) bg_passive_tab_pane_g3_cp4

0x8a19,	// (0x000538c9) bg_active_tab_pane_g1_cp5

0x8983,	// (0x00053833) bg_active_tab_pane_g2_cp5

0x8a22,	// (0x000538d2) bg_active_tab_pane_g3_cp5

0x8a19,	// (0x000538c9) bg_passive_tab_pane_g1_cp5

0x8983,	// (0x00053833) bg_passive_tab_pane_g2_cp5

0x8a22,	// (0x000538d2) bg_passive_tab_pane_g3_cp5

0x8a2b,	// (0x000538db) list_set_graphic_pane_ParamLimits

0x8a2b,	// (0x000538db) list_set_graphic_pane

0x728e,	// (0x0005213e) bg_set_opt_pane_cp4

0x8a40,	// (0x000538f0) list_set_graphic_pane_g1_ParamLimits

0x8a40,	// (0x000538f0) list_set_graphic_pane_g1

0x8a4c,	// (0x000538fc) list_set_graphic_pane_g2_ParamLimits

0x8a4c,	// (0x000538fc) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0005a648) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0005a648) list_set_graphic_pane_g

0x0009,

0xfafa,	// (0x0005a9aa) volume_small_pane_cp_g

0x8a70,	// (0x00053920) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a70,	// (0x00053920) list_double2_large_graphic_pane_g1_cp2

0x8a7e,	// (0x0005392e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a7e,	// (0x0005392e) list_double2_large_graphic_pane_g2_cp2

0x8a8f,	// (0x0005393f) list_double2_large_graphic_pane_g3_cp2

0x8a97,	// (0x00053947) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a97,	// (0x00053947) list_double2_large_graphic_pane_t1_cp2

0x8aad,	// (0x0005395d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8aad,	// (0x0005395d) list_double2_large_graphic_pane_t2_cp2

0xacf5,	// (0x00055ba5) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xacf5,	// (0x00055ba5) list_double_large_graphic_pane_g1_cp2

0xad08,	// (0x00055bb8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad08,	// (0x00055bb8) list_double_large_graphic_pane_g2_cp2

0x8c23,	// (0x00053ad3) list_double_large_graphic_pane_g3_cp2

0xad19,	// (0x00055bc9) list_double_large_graphic_pane_g4_cp

0xad21,	// (0x00055bd1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad21,	// (0x00055bd1) list_double_large_graphic_pane_t1_cp2

0xad38,	// (0x00055be8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad38,	// (0x00055be8) list_double_large_graphic_pane_t2_cp2

0x8b13,	// (0x000539c3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8b13,	// (0x000539c3) list_double2_graphic_pane_g1_cp2

0x8b21,	// (0x000539d1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8b21,	// (0x000539d1) list_double2_graphic_pane_g2_cp2

0x8b32,	// (0x000539e2) list_double2_graphic_pane_g3_cp2

0x8b3c,	// (0x000539ec) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8b3c,	// (0x000539ec) list_double2_graphic_pane_t1_cp2

0x8b52,	// (0x00053a02) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8b52,	// (0x00053a02) list_double2_graphic_pane_t2_cp2

0x8b64,	// (0x00053a14) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b64,	// (0x00053a14) list_single_number_heading_pane_g1_cp2

0x8b70,	// (0x00053a20) list_single_number_heading_pane_g2_cp2

0x8b78,	// (0x00053a28) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8b78,	// (0x00053a28) list_single_number_heading_pane_t1_cp2

0x8b8e,	// (0x00053a3e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8b8e,	// (0x00053a3e) list_single_number_heading_pane_t2_cp2

0x8ba2,	// (0x00053a52) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8ba2,	// (0x00053a52) list_single_number_heading_pane_t3_cp2

0x8b64,	// (0x00053a14) list_single_heading_pane_g1_cp2_ParamLimits

0x8b64,	// (0x00053a14) list_single_heading_pane_g1_cp2

0x8b70,	// (0x00053a20) list_single_heading_pane_g2_cp2

0x8b78,	// (0x00053a28) list_single_heading_pane_t1_cp2_ParamLimits

0x8b78,	// (0x00053a28) list_single_heading_pane_t1_cp2

0xaaef,	// (0x0005599f) list_single_heading_pane_t2_cp2_ParamLimits

0xaaef,	// (0x0005599f) list_single_heading_pane_t2_cp2

0xaa31,	// (0x000558e1) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa31,	// (0x000558e1) list_double_graphic_pane_g1_cp2

0xaa3d,	// (0x000558ed) list_double_graphic_pane_g2_cp2_ParamLimits

0xaa3d,	// (0x000558ed) list_double_graphic_pane_g2_cp2

0xaa4c,	// (0x000558fc) list_double_graphic_pane_g3_cp2

0xaa54,	// (0x00055904) list_double_graphic_pane_t1_cp2_ParamLimits

0xaa54,	// (0x00055904) list_double_graphic_pane_t1_cp2

0xaa6a,	// (0x0005591a) list_double_graphic_pane_t2_cp2_ParamLimits

0xaa6a,	// (0x0005591a) list_double_graphic_pane_t2_cp2

0x8c17,	// (0x00053ac7) list_double_number_pane_g1_cp2_ParamLimits

0x8c17,	// (0x00053ac7) list_double_number_pane_g1_cp2

0x8c23,	// (0x00053ad3) list_double_number_pane_g2_cp2

0xa9f5,	// (0x000558a5) list_double_number_pane_t1_cp2_ParamLimits

0xa9f5,	// (0x000558a5) list_double_number_pane_t1_cp2

0xaa09,	// (0x000558b9) list_double_number_pane_t2_cp2_ParamLimits

0xaa09,	// (0x000558b9) list_double_number_pane_t2_cp2

0xaa1f,	// (0x000558cf) list_double_number_pane_t3_cp2_ParamLimits

0xaa1f,	// (0x000558cf) list_double_number_pane_t3_cp2

0xa8de,	// (0x0005578e) list_single_graphic_pane_g1_cp2_ParamLimits

0xa8de,	// (0x0005578e) list_single_graphic_pane_g1_cp2

0x8c7d,	// (0x00053b2d) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c7d,	// (0x00053b2d) list_single_graphic_pane_g2_cp2

0x8c89,	// (0x00053b39) list_single_graphic_pane_g3_cp2

0xa8b4,	// (0x00055764) list_single_graphic_pane_t1_cp2_ParamLimits

0xa8b4,	// (0x00055764) list_single_graphic_pane_t1_cp2

0x8c7d,	// (0x00053b2d) list_single_number_pane_g1_cp2_ParamLimits

0x8c7d,	// (0x00053b2d) list_single_number_pane_g1_cp2

0x8c89,	// (0x00053b39) list_single_number_pane_g2_cp2

0xa8b4,	// (0x00055764) list_single_number_pane_t1_cp2_ParamLimits

0xa8b4,	// (0x00055764) list_single_number_pane_t1_cp2

0xa8ca,	// (0x0005577a) list_single_number_pane_t2_cp2_ParamLimits

0xa8ca,	// (0x0005577a) list_single_number_pane_t2_cp2

0x8a7e,	// (0x0005392e) list_double2_pane_g1_cp2_ParamLimits

0x8a7e,	// (0x0005392e) list_double2_pane_g1_cp2

0x8a8f,	// (0x0005393f) list_double2_pane_g2_cp2

0x8bef,	// (0x00053a9f) list_double2_pane_t1_cp2_ParamLimits

0x8bef,	// (0x00053a9f) list_double2_pane_t1_cp2

0x8c05,	// (0x00053ab5) list_double2_pane_t2_cp2_ParamLimits

0x8c05,	// (0x00053ab5) list_double2_pane_t2_cp2

0x8c17,	// (0x00053ac7) list_double_pane_g1_cp2_ParamLimits

0x8c17,	// (0x00053ac7) list_double_pane_g1_cp2

0x8c23,	// (0x00053ad3) list_double_pane_g2_cp2

0x8c2b,	// (0x00053adb) list_double_pane_t1_cp2_ParamLimits

0x8c2b,	// (0x00053adb) list_double_pane_t1_cp2

0x8c41,	// (0x00053af1) list_double_pane_t2_cp2_ParamLimits

0x8c41,	// (0x00053af1) list_double_pane_t2_cp2

0x8c6d,	// (0x00053b1d) list_single_pane_cp2_g3

0x8c7d,	// (0x00053b2d) list_single_pane_g1_cp2_ParamLimits

0x8c7d,	// (0x00053b2d) list_single_pane_g1_cp2

0x8c89,	// (0x00053b39) list_single_pane_g2_cp2

0x8c91,	// (0x00053b41) list_single_pane_t1_cp2_ParamLimits

0x8c91,	// (0x00053b41) list_single_pane_t1_cp2

0x8ca9,	// (0x00053b59) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8ca9,	// (0x00053b59) list_single_large_graphic_pane_g1_cp2

0x8cb7,	// (0x00053b67) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8cb7,	// (0x00053b67) list_single_large_graphic_pane_g2_cp2

0x8cc3,	// (0x00053b73) list_single_large_graphic_pane_g3_cp2

0x8ccb,	// (0x00053b7b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8ccb,	// (0x00053b7b) list_single_large_graphic_pane_g4_cp1

0x8ce5,	// (0x00053b95) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8ce5,	// (0x00053b95) list_single_large_graphic_pane_t1_cp2

0xa87e,	// (0x0005572e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa87e,	// (0x0005572e) list_single_graphic_heading_pane_g1_cp2

0xa84b,	// (0x000556fb) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa84b,	// (0x000556fb) list_single_graphic_heading_pane_g4_cp2

0x8c89,	// (0x00053b39) list_single_graphic_heading_pane_g5_cp2

0xa88a,	// (0x0005573a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa88a,	// (0x0005573a) list_single_graphic_heading_pane_t1_cp2

0xa8a0,	// (0x00055750) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa8a0,	// (0x00055750) list_single_graphic_heading_pane_t2_cp2

0xa83f,	// (0x000556ef) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa83f,	// (0x000556ef) list_single_2graphic_pane_g1_cp2

0xa84b,	// (0x000556fb) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa84b,	// (0x000556fb) list_single_2graphic_pane_g2_cp2

0x8c89,	// (0x00053b39) list_single_2graphic_pane_g3_cp2

0xa85c,	// (0x0005570c) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa85c,	// (0x0005570c) list_single_2graphic_pane_g4_cp2

0xa868,	// (0x00055718) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa868,	// (0x00055718) list_single_2graphic_pane_t1_cp2

0x7284,	// (0x00052134) list_highlight_pane_g10_cp1

0xa417,	// (0x000552c7) list_highlight_pane_g1_cp1

0xa41f,	// (0x000552cf) list_highlight_pane_g2_cp1

0xa427,	// (0x000552d7) list_highlight_pane_g3_cp1

0xa42f,	// (0x000552df) list_highlight_pane_g4_cp1

0xa437,	// (0x000552e7) list_highlight_pane_g5_cp1

0xa43f,	// (0x000552ef) list_highlight_pane_g6_cp1

0xa447,	// (0x000552f7) list_highlight_pane_g7_cp1

0xa44f,	// (0x000552ff) list_highlight_pane_g8_cp1

0xa457,	// (0x00055307) list_highlight_pane_g9_cp1

0xa337,	// (0x000551e7) form_field_slider_pane_t3

0xa345,	// (0x000551f5) form_field_slider_pane_t4

0xa353,	// (0x00055203) slider_form_pane_ParamLimits

0xa353,	// (0x00055203) slider_form_pane

0x728e,	// (0x0005213e) control_abbreviations

0x728e,	// (0x0005213e) control_conventions

0x728e,	// (0x0005213e) control_definitions

0x728e,	// (0x0005213e) format_table_attribute

0xab45,	// (0x000559f5) bg_popup_preview_window_pane_g9

0x728e,	// (0x0005213e) format_table_data2

0x728e,	// (0x0005213e) format_table_data3

0x728e,	// (0x0005213e) format_table_data_example

0x0008,

0x728e,	// (0x0005213e) intro_purpose

0xf92d,	// (0x0005a7dd) bg_popup_preview_window_pane_g

0x728e,	// (0x0005213e) texts_category

0x728e,	// (0x0005213e) texts_graphics

0x8cfb,	// (0x00053bab) text_digital

0x8d0a,	// (0x00053bba) text_primary

0x8d19,	// (0x00053bc9) text_primary_small

0x8d28,	// (0x00053bd8) text_secondary

0x8d37,	// (0x00053be7) text_title

0xb2e1,	// (0x00056191) bg_passive_tab_pane_g1_cp3_srt

0x8983,	// (0x00053833) bg_passive_tab_pane_g2_cp3_srt

0xb2ea,	// (0x0005619a) bg_passive_tab_pane_g3_cp3_srt

0x736e,	// (0x0005221e) bg_active_tab_pane_cp3_srt_ParamLimits

0x736e,	// (0x0005221e) bg_active_tab_pane_cp3_srt

0xb2f3,	// (0x000561a3) tabs_4_active_pane_srt_g1

0xb2fb,	// (0x000561ab) tabs_4_active_pane_srt_t1_ParamLimits

0xb2fb,	// (0x000561ab) tabs_4_active_pane_srt_t1

0xb2e1,	// (0x00056191) bg_active_tab_pane_g1_cp3_copy1

0x8983,	// (0x00053833) bg_active_tab_pane_g2_cp3_copy1

0xb2ea,	// (0x0005619a) bg_active_tab_pane_g3_cp3_copy1

0x736e,	// (0x0005221e) tabs_2_long_active_pane_srt_ParamLimits

0x736e,	// (0x0005221e) tabs_2_long_active_pane_srt

0x736e,	// (0x0005221e) tabs_2_long_passive_pane_srt_ParamLimits

0x736e,	// (0x0005221e) tabs_2_long_passive_pane_srt

0x82d3,	// (0x00053183) bg_passive_tab_pane_cp4_srt_ParamLimits

0x82d3,	// (0x00053183) bg_passive_tab_pane_cp4_srt

0xaf95,	// (0x00055e45) bg_passive_tab_pane_g1_cp4_srt

0x8983,	// (0x00053833) bg_passive_tab_pane_g2_cp4_srt

0xaf9e,	// (0x00055e4e) bg_passive_tab_pane_g3_cp4_srt

0x82b2,	// (0x00053162) bg_active_tab_pane_cp4_srt_ParamLimits

0x82b2,	// (0x00053162) bg_active_tab_pane_cp4_srt

0xafa7,	// (0x00055e57) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafa7,	// (0x00055e57) tabs_2_long_active_pane_srt_t1

0xaf95,	// (0x00055e45) bg_active_tab_pane_g1_cp4_srt

0x8983,	// (0x00053833) bg_active_tab_pane_g2_cp4_srt

0xaf9e,	// (0x00055e4e) bg_active_tab_pane_g3_cp4_srt

0x75ea,	// (0x0005249a) tabs_3_long_active_pane_srt_ParamLimits

0x75ea,	// (0x0005249a) tabs_3_long_active_pane_srt

0x75ea,	// (0x0005249a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x75ea,	// (0x0005249a) tabs_3_long_passive_pane_cp_srt

0x75ea,	// (0x0005249a) tabs_3_long_passive_pane_srt_ParamLimits

0x75ea,	// (0x0005249a) tabs_3_long_passive_pane_srt

0x82d3,	// (0x00053183) bg_passive_tab_pane_cp5_srt_ParamLimits

0x82d3,	// (0x00053183) bg_passive_tab_pane_cp5_srt

0x8a19,	// (0x000538c9) bg_passive_tab_pane_g1_cp5_srt

0x8983,	// (0x00053833) bg_passive_tab_pane_g2_cp5_srt

0x8a22,	// (0x000538d2) bg_passive_tab_pane_g3_cp5_srt

0x82b2,	// (0x00053162) bg_active_tab_pane_cp5_srt_ParamLimits

0x82b2,	// (0x00053162) bg_active_tab_pane_cp5_srt

0xaf83,	// (0x00055e33) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaf83,	// (0x00055e33) tabs_3_long_active_pane_srt_t1

0x8a19,	// (0x000538c9) bg_active_tab_pane_g1_cp5_srt

0x8983,	// (0x00053833) bg_active_tab_pane_g2_cp5_srt

0x8a22,	// (0x000538d2) bg_active_tab_pane_g3_cp5_srt

0xaf75,	// (0x00055e25) navi_text_pane_srt_t1

0xaf6d,	// (0x00055e1d) navi_icon_pane_srt_g1

0x8f0e,	// (0x00053dbe) midp_editing_number_pane_srt

0x8d46,	// (0x00053bf6) midp_ticker_pane_srt

0x8f16,	// (0x00053dc6) midp_ticker_pane_srt_g1

0x8f1e,	// (0x00053dce) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0005a667) midp_ticker_pane_srt_g

0x8f26,	// (0x00053dd6) midp_ticker_pane_srt_t1

0xaf5e,	// (0x00055e0e) midp_editing_number_pane_t1_copy1

0x8d4e,	// (0x00053bfe) listscroll_midp_pane

0x8d4e,	// (0x00053bfe) midp_form_pane

0x8dbc,	// (0x00053c6c) midp_info_popup_window_ParamLimits

0x8dbc,	// (0x00053c6c) midp_info_popup_window

0x8194,	// (0x00053044) bg_popup_sub_pane_cp50_ParamLimits

0x8194,	// (0x00053044) bg_popup_sub_pane_cp50

0xa07e,	// (0x00054f2e) listscroll_midp_info_pane_ParamLimits

0xa07e,	// (0x00054f2e) listscroll_midp_info_pane

0xa066,	// (0x00054f16) listscroll_form_midp_pane_ParamLimits

0xa066,	// (0x00054f16) listscroll_form_midp_pane

0xa072,	// (0x00054f22) scroll_bar_cp050

0xa046,	// (0x00054ef6) list_midp_pane

0xbd3a,	// (0x00056bea) signal_pane_g2_cp

0x9f80,	// (0x00054e30) listscroll_midp_info_pane_t1_ParamLimits

0x9f80,	// (0x00054e30) listscroll_midp_info_pane_t1

0x9f98,	// (0x00054e48) listscroll_midp_info_pane_t2_ParamLimits

0x9f98,	// (0x00054e48) listscroll_midp_info_pane_t2

0x9fd6,	// (0x00054e86) listscroll_midp_info_pane_t3_ParamLimits

0x9fd6,	// (0x00054e86) listscroll_midp_info_pane_t3

0xa010,	// (0x00054ec0) listscroll_midp_info_pane_t4_ParamLimits

0xa010,	// (0x00054ec0) listscroll_midp_info_pane_t4

0x0003,

0xf868,	// (0x0005a718) listscroll_midp_info_pane_t_ParamLimits

0xf868,	// (0x0005a718) listscroll_midp_info_pane_t

0x825e,	// (0x0005310e) scroll_pane_cp21

0x9f1a,	// (0x00054dca) form_midp_field_choice_group_pane

0x9f23,	// (0x00054dd3) form_midp_field_text_pane

0x9f66,	// (0x00054e16) form_midp_field_time_pane

0x9f6e,	// (0x00054e1e) form_midp_gauge_slider_pane

0x9f77,	// (0x00054e27) form_midp_gauge_wait_pane

0x728e,	// (0x0005213e) form_midp_image_pane

0x5fa7,	// (0x00050e57) list_single_midp_pane_ParamLimits

0x5fa7,	// (0x00050e57) list_single_midp_pane

0x9ede,	// (0x00054d8e) form_midp_field_text_pane_t1

0x9cf2,	// (0x00054ba2) input_focus_pane_cp050

0x9f09,	// (0x00054db9) list_midp_form_text_pane

0x9ead,	// (0x00054d5d) form_midp_field_choice_group_pane_t1

0x9ebb,	// (0x00054d6b) input_focus_pane_cp051

0x9ecf,	// (0x00054d7f) list_midp_choice_pane

0x728e,	// (0x0005213e) status_idle_pane

0x9e91,	// (0x00054d41) form_midp_field_time_pane_t1

0x7284,	// (0x00052134) wait_anim_pane_g2_copy1

0x9e9f,	// (0x00054d4f) form_midp_field_time_pane_t2

0x0001,

0x8e6c,	// (0x00053d1c) aid_navinavi_width_2_pane

0xf863,	// (0x0005a713) form_midp_field_time_pane_t

0x728e,	// (0x0005213e) input_focus_pane_cp052

0x728e,	// (0x0005213e) bg_input_focus_pane_cp040

0x9e51,	// (0x00054d01) form_midp_gauge_slider_pane_t1

0x9e5f,	// (0x00054d0f) form_midp_gauge_slider_pane_t2

0x9e6d,	// (0x00054d1d) form_midp_gauge_slider_pane_t3

0x9e7b,	// (0x00054d2b) form_midp_gauge_slider_pane_t4

0x0003,

0xf85a,	// (0x0005a70a) form_midp_gauge_slider_pane_t

0x9e89,	// (0x00054d39) form_midp_slider_pane

0x736e,	// (0x0005221e) bg_input_focus_pane_cp041_ParamLimits

0x736e,	// (0x0005221e) bg_input_focus_pane_cp041

0x9e1e,	// (0x00054cce) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e1e,	// (0x00054cce) form_midp_gauge_wait_pane_t1

0x9e30,	// (0x00054ce0) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e30,	// (0x00054ce0) form_midp_gauge_wait_pane_t2

0x0001,

0xf855,	// (0x0005a705) form_midp_gauge_wait_pane_t_ParamLimits

0xf855,	// (0x0005a705) form_midp_gauge_wait_pane_t

0x9e42,	// (0x00054cf2) form_midp_wait_pane_ParamLimits

0x9e42,	// (0x00054cf2) form_midp_wait_pane

0x9de6,	// (0x00054c96) form_midp_image_pane_g1

0x9def,	// (0x00054c9f) form_midp_image_pane_t1

0x9dfe,	// (0x00054cae) form_midp_image_pane_t2

0x9e0d,	// (0x00054cbd) form_midp_image_pane_t3

0x0002,

0xf84e,	// (0x0005a6fe) form_midp_image_pane_t

0x9ddd,	// (0x00054c8d) list_single_midp_pane_g1

0x5f98,	// (0x00050e48) list_single_midp_pane_t1

0x9dc3,	// (0x00054c73) list_midp_form_item_pane_ParamLimits

0x9dc3,	// (0x00054c73) list_midp_form_item_pane

0x8e14,	// (0x00053cc4) list_midp_form_item_pane_t1

0x8e23,	// (0x00053cd3) midp_ticker_pane_g1

0x8e2f,	// (0x00053cdf) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0005a64d) midp_ticker_pane_g

0x8e3b,	// (0x00053ceb) midp_ticker_pane_t1

0xb1dd,	// (0x0005608d) midp_editing_number_pane_t1

0xb1bb,	// (0x0005606b) midp_editing_number_pane

0xb1ca,	// (0x0005607a) midp_ticker_pane

0xaf4e,	// (0x00055dfe) ai_message_heading_pane

0x728e,	// (0x0005213e) bg_popup_window_pane_cp14

0xaf56,	// (0x00055e06) listscroll_ai_message_pane

0xaed4,	// (0x00055d84) ai_message_heading_pane_g1_ParamLimits

0xaed4,	// (0x00055d84) ai_message_heading_pane_g1

0xaee0,	// (0x00055d90) ai_message_heading_pane_g2_ParamLimits

0xaee0,	// (0x00055d90) ai_message_heading_pane_g2

0xaeee,	// (0x00055d9e) ai_message_heading_pane_g3_ParamLimits

0xaeee,	// (0x00055d9e) ai_message_heading_pane_g3

0xaefa,	// (0x00055daa) ai_message_heading_pane_g4_ParamLimits

0xaefa,	// (0x00055daa) ai_message_heading_pane_g4

0x0003,

0xf98f,	// (0x0005a83f) ai_message_heading_pane_g_ParamLimits

0xf98f,	// (0x0005a83f) ai_message_heading_pane_g

0xaf06,	// (0x00055db6) ai_message_heading_pane_t1_ParamLimits

0xaf06,	// (0x00055db6) ai_message_heading_pane_t1

0xaf20,	// (0x00055dd0) ai_message_heading_pane_t2_ParamLimits

0xaf20,	// (0x00055dd0) ai_message_heading_pane_t2

0x0001,

0xf998,	// (0x0005a848) ai_message_heading_pane_t_ParamLimits

0xf998,	// (0x0005a848) ai_message_heading_pane_t

0xaf34,	// (0x00055de4) bg_popup_heading_pane_cp1_ParamLimits

0xaf34,	// (0x00055de4) bg_popup_heading_pane_cp1

0xaec2,	// (0x00055d72) list_ai_message_pane_ParamLimits

0xaec2,	// (0x00055d72) list_ai_message_pane

0x825e,	// (0x0005310e) scroll_pane_cp10

0xae5e,	// (0x00055d0e) list_ai_message_pane_g1

0xae66,	// (0x00055d16) list_ai_message_pane_g2

0x0001,

0xf96c,	// (0x0005a81c) list_ai_message_pane_g

0xae6e,	// (0x00055d1e) list_ai_message_pane_t1_ParamLimits

0xae6e,	// (0x00055d1e) list_ai_message_pane_t1

0xae83,	// (0x00055d33) list_ai_message_pane_t2_ParamLimits

0xae83,	// (0x00055d33) list_ai_message_pane_t2

0xae98,	// (0x00055d48) list_ai_message_pane_t3_ParamLimits

0xae98,	// (0x00055d48) list_ai_message_pane_t3

0xaead,	// (0x00055d5d) list_ai_message_pane_t4_ParamLimits

0xaead,	// (0x00055d5d) list_ai_message_pane_t4

0x0003,

0xf971,	// (0x0005a821) list_ai_message_pane_t_ParamLimits

0xf971,	// (0x0005a821) list_ai_message_pane_t

0xae47,	// (0x00055cf7) cell_ai_soft_ind_pane_ParamLimits

0xae47,	// (0x00055cf7) cell_ai_soft_ind_pane

0x8e4d,	// (0x00053cfd) cell_ai_soft_ind_pane_g1_ParamLimits

0x8e4d,	// (0x00053cfd) cell_ai_soft_ind_pane_g1

0x728e,	// (0x0005213e) grid_highlight_cp1

0x8e5a,	// (0x00053d0a) text_secondary_cp56_ParamLimits

0x8e5a,	// (0x00053d0a) text_secondary_cp56

0xae1c,	// (0x00055ccc) example_general_pane_ParamLimits

0xae1c,	// (0x00055ccc) example_general_pane

0xae28,	// (0x00055cd8) example_parent_pane_g1_ParamLimits

0xae28,	// (0x00055cd8) example_parent_pane_g1

0xae34,	// (0x00055ce4) example_parent_pane_t1_ParamLimits

0xae34,	// (0x00055ce4) example_parent_pane_t1

0x9487,	// (0x00054337) popup_preview_text_window_ParamLimits

0x9487,	// (0x00054337) popup_preview_text_window

0x8c75,	// (0x00053b25) list_single_pane_cp2_g4

0x76a0,	// (0x00052550) bg_popup_preview_window_pane_ParamLimits

0x76a0,	// (0x00052550) bg_popup_preview_window_pane

0xab4f,	// (0x000559ff) popup_preview_text_window_t1_ParamLimits

0xab4f,	// (0x000559ff) popup_preview_text_window_t1

0xab6d,	// (0x00055a1d) popup_preview_text_window_t2_ParamLimits

0xab6d,	// (0x00055a1d) popup_preview_text_window_t2

0xabb6,	// (0x00055a66) popup_preview_text_window_t3_ParamLimits

0xabb6,	// (0x00055a66) popup_preview_text_window_t3

0xabfb,	// (0x00055aab) popup_preview_text_window_t4_ParamLimits

0xabfb,	// (0x00055aab) popup_preview_text_window_t4

0x0004,

0xf940,	// (0x0005a7f0) popup_preview_text_window_t_ParamLimits

0xf940,	// (0x0005a7f0) popup_preview_text_window_t

0xac79,	// (0x00055b29) scroll_pane_cp11

0x9c00,	// (0x00054ab0) bg_popup_preview_window_pane_g1

0xab03,	// (0x000559b3) bg_popup_preview_window_pane_g2

0xab0d,	// (0x000559bd) bg_popup_preview_window_pane_g3

0xab17,	// (0x000559c7) bg_popup_preview_window_pane_g4

0xab21,	// (0x000559d1) bg_popup_preview_window_pane_g5

0xab2b,	// (0x000559db) bg_popup_preview_window_pane_g6

0xab33,	// (0x000559e3) bg_popup_preview_window_pane_g7

0xab3b,	// (0x000559eb) bg_popup_preview_window_pane_g8

0x4c1f,	// (0x0004facf) aid_popup_width_pane

0x9463,	// (0x00054313) popup_midp_note_alarm_window_ParamLimits

0x9463,	// (0x00054313) popup_midp_note_alarm_window

0x80d0,	// (0x00052f80) data_form_pane_ParamLimits

0x5610,	// (0x000504c0) form_field_data_pane_g1

0x561a,	// (0x000504ca) form_field_data_pane_t1_ParamLimits

0x80dc,	// (0x00052f8c) input_focus_pane_ParamLimits

0x80ea,	// (0x00052f9a) data_form_wide_pane_ParamLimits

0x5634,	// (0x000504e4) form_field_data_wide_pane_g1

0x5640,	// (0x000504f0) form_field_data_wide_pane_t1_ParamLimits

0x7e4d,	// (0x00052cfd) input_focus_pane_cp6_ParamLimits

0x8209,	// (0x000530b9) input_popup_find_pane_g1_ParamLimits

0x8209,	// (0x000530b9) input_popup_find_pane_g1

0x5894,	// (0x00050744) aid_navi_side_left_pane

0x58a9,	// (0x00050759) aid_navi_side_right_pane

0xa512,	// (0x000553c2) bg_popup_window_pane_cp30_ParamLimits

0xa512,	// (0x000553c2) bg_popup_window_pane_cp30

0xa58c,	// (0x0005543c) popup_midp_note_alarm_window_g1_ParamLimits

0xa58c,	// (0x0005543c) popup_midp_note_alarm_window_g1

0xa5bc,	// (0x0005546c) popup_midp_note_alarm_window_t1_ParamLimits

0xa5bc,	// (0x0005546c) popup_midp_note_alarm_window_t1

0xa65d,	// (0x0005550d) popup_midp_note_alarm_window_t2_ParamLimits

0xa65d,	// (0x0005550d) popup_midp_note_alarm_window_t2

0xa70b,	// (0x000555bb) popup_midp_note_alarm_window_t3_ParamLimits

0xa70b,	// (0x000555bb) popup_midp_note_alarm_window_t3

0xa73d,	// (0x000555ed) popup_midp_note_alarm_window_t4_ParamLimits

0xa73d,	// (0x000555ed) popup_midp_note_alarm_window_t4

0xa763,	// (0x00055613) popup_midp_note_alarm_window_t5_ParamLimits

0xa763,	// (0x00055613) popup_midp_note_alarm_window_t5

0x000a,

0xf8dd,	// (0x0005a78d) popup_midp_note_alarm_window_t_ParamLimits

0xf8dd,	// (0x0005a78d) popup_midp_note_alarm_window_t

0xa80f,	// (0x000556bf) wait_bar_pane_cp1_ParamLimits

0xa80f,	// (0x000556bf) wait_bar_pane_cp1

0x728e,	// (0x0005213e) wait_anim_pane_copy1

0x728e,	// (0x0005213e) wait_border_pane_copy1

0xa1f7,	// (0x000550a7) wait_border_pane_g1_copy1

0x565a,	// (0x0005050a) form_field_popup_pane_g1

0x5662,	// (0x00050512) form_field_popup_pane_t1_ParamLimits

0x80dc,	// (0x00052f8c) input_focus_pane_cp7_ParamLimits

0x8116,	// (0x00052fc6) list_form_pane_ParamLimits

0x567c,	// (0x0005052c) form_field_popup_wide_pane_g1

0x5684,	// (0x00050534) form_field_popup_wide_pane_t1_ParamLimits

0x80dc,	// (0x00052f8c) input_focus_pane_cp8_ParamLimits

0x8122,	// (0x00052fd2) list_form_wide_pane_ParamLimits

0xb36e,	// (0x0005621e) aid_size_cell_graphic_pane

0x5710,	// (0x000505c0) data_form_pane_t1_ParamLimits

0x6236,	// (0x000510e6) data_form_wide_pane_t1_ParamLimits

0x97ae,	// (0x0005465e) bg_status_flat_pane

0x72ce,	// (0x0005217e) title_pane_t1_ParamLimits

0x7336,	// (0x000521e6) title_pane_t2_ParamLimits

0x735c,	// (0x0005220c) title_pane_t3_ParamLimits

0xf59b,	// (0x0005a44b) title_pane_t_ParamLimits

0x86e1,	// (0x00053591) level_1_signal_ParamLimits

0x86ee,	// (0x0005359e) level_2_signal_ParamLimits

0x86fb,	// (0x000535ab) level_3_signal_ParamLimits

0x8708,	// (0x000535b8) level_4_signal_ParamLimits

0x8715,	// (0x000535c5) level_5_signal_ParamLimits

0x8722,	// (0x000535d2) level_6_signal_ParamLimits

0x872f,	// (0x000535df) level_7_signal_ParamLimits

0x86e1,	// (0x00053591) level_1_battery_ParamLimits

0x86ee,	// (0x0005359e) level_2_battery_ParamLimits

0x86fb,	// (0x000535ab) level_3_battery_ParamLimits

0x8708,	// (0x000535b8) level_4_battery_ParamLimits

0x8715,	// (0x000535c5) level_5_battery_ParamLimits

0x8722,	// (0x000535d2) level_6_battery_ParamLimits

0x872f,	// (0x000535df) level_7_battery_ParamLimits

0xa417,	// (0x000552c7) bg_status_flat_pane_g1

0xa41f,	// (0x000552cf) bg_status_flat_pane_g2

0xa427,	// (0x000552d7) bg_status_flat_pane_g3

0xa42f,	// (0x000552df) bg_status_flat_pane_g4

0xa437,	// (0x000552e7) bg_status_flat_pane_g5

0xa43f,	// (0x000552ef) bg_status_flat_pane_g6

0xa447,	// (0x000552f7) bg_status_flat_pane_g7

0x7384,	// (0x00052234) tabs_3_active_pane_t1_ParamLimits

0x7384,	// (0x00052234) tabs_3_passive_pane_t1_ParamLimits

0x739e,	// (0x0005224e) tabs_4_active_pane_t1_ParamLimits

0x739e,	// (0x0005224e) tabs_4_1_passive_pane_t1_ParamLimits

0x82a0,	// (0x00053150) tabs_2_active_pane_t1_ParamLimits

0x82a0,	// (0x00053150) tabs_2_passive_pane_t1_ParamLimits

0x82b2,	// (0x00053162) bg_active_tab_pane_cp4_ParamLimits

0x82c0,	// (0x00053170) tabs_2_long_active_pane_t1_ParamLimits

0x82d3,	// (0x00053183) bg_passive_tab_pane_cp4_ParamLimits

0x5edf,	// (0x00050d8f) list_single_midp_graphic_pane_t1_ParamLimits

0x82b2,	// (0x00053162) bg_active_tab_pane_cp5_ParamLimits

0x82df,	// (0x0005318f) tabs_3_long_active_pane_t1_ParamLimits

0x82d3,	// (0x00053183) bg_passive_tab_pane_cp5_ParamLimits

0x5edf,	// (0x00050d8f) list_single_midp_graphic_pane_t1

0x97ae,	// (0x0005465e) bg_status_flat_pane_ParamLimits

0x9879,	// (0x00054729) indicator_pane_cp2_ParamLimits

0x9879,	// (0x00054729) indicator_pane_cp2

0x99bb,	// (0x0005486b) navi_pane_srt_ParamLimits

0x99bb,	// (0x0005486b) navi_pane_srt

0x99df,	// (0x0005488f) popup_clock_digital_analogue_window_cp1

0x744e,	// (0x000522fe) indicator_pane_t1

0x8d46,	// (0x00053bf6) copy_highlight_pane

0x8d46,	// (0x00053bf6) cursor_graphics_pane

0x8d46,	// (0x00053bf6) graphic_within_text_pane

0x8d46,	// (0x00053bf6) link_highlight_pane

0xac3c,	// (0x00055aec) popup_preview_text_window_t5_ParamLimits

0xac3c,	// (0x00055aec) popup_preview_text_window_t5

0x8e76,	// (0x00053d26) cursor_digital_pane

0x8e76,	// (0x00053d26) cursor_primary_pane

0x8e87,	// (0x00053d37) cursor_primary_small_pane

0x8e8f,	// (0x00053d3f) cursor_secondary_pane

0x8e97,	// (0x00053d47) cursor_title_pane

0x8e76,	// (0x00053d26) link_highlight_digital_pane

0x8e7e,	// (0x00053d2e) link_highlight_primary_pane

0x8e87,	// (0x00053d37) link_highlight_primary_small_pane

0x8e8f,	// (0x00053d3f) link_highlight_secondary_pane

0x8e97,	// (0x00053d47) link_highlight_title_pane

0x8e76,	// (0x00053d26) copy_highlight_digital_pane

0x8e76,	// (0x00053d26) copy_highlight_primary_pane

0x8e87,	// (0x00053d37) copy_highlight_primary_small_pane

0x8e8f,	// (0x00053d3f) copy_highlight_secondary_pane

0x8e97,	// (0x00053d47) copy_highlight_title_pane

0x8e8f,	// (0x00053d3f) graphic_text_digital_pane

0xa4b5,	// (0x00055365) graphic_text_primary_pane

0xa4be,	// (0x0005536e) graphic_text_primary_small_pane

0x8e87,	// (0x00053d37) graphic_text_secondary_pane

0x8e76,	// (0x00053d26) graphic_text_title_pane

0x8e9f,	// (0x00053d4f) cursor_primary_pane_g1

0xa4a7,	// (0x00055357) cursor_text_primary_t1

0xa48f,	// (0x0005533f) cursor_primary_small_pane_g1

0xa499,	// (0x00055349) cursor_text_primary_small_t1

0xa477,	// (0x00055327) cursor_primary_small_pane_g1_copy1

0xa481,	// (0x00055331) cursor_text_primary_small_t1_copy1

0xa45f,	// (0x0005530f) cursor_text_title_t1

0xa46d,	// (0x0005531d) cursor_title_pane_g1

0x8e9f,	// (0x00053d4f) cursor_digital_pane_g1

0x8ea9,	// (0x00053d59) cursor_text_digital_t1

0x8eb7,	// (0x00053d67) link_highlight_primary_pane_g1

0xa408,	// (0x000552b8) link_highlight_primary_pane_t1

0x8eb7,	// (0x00053d67) link_highlight_primary_small_pane_g1

0x8ebf,	// (0x00053d6f) link_highlight_primary_small_pane_t1

0x8ece,	// (0x00053d7e) link_highlight_secondary_pane_g1

0x8ed6,	// (0x00053d86) link_highlight_secondary_pane_t1

0xa37c,	// (0x0005522c) link_highlight_title_pane_g1

0xa384,	// (0x00055234) link_highlight_title_pane_t1

0xa365,	// (0x00055215) link_highlight_digital_pane_g1

0xa36d,	// (0x0005521d) link_highlight_digital_pane_t1

0xa22d,	// (0x000550dd) copy_highlight_primary_pane_g1

0xa244,	// (0x000550f4) copy_highlight_primary_pane_t1

0xa22d,	// (0x000550dd) copy_highlight_primary_small_pane_g1

0xa235,	// (0x000550e5) copy_highlight_primary_small_pane_t1

0x8ee5,	// (0x00053d95) copy_highlight_secondary_pane_g1

0x8eed,	// (0x00053d9d) copy_highlight_secondary_pane_t1

0xa216,	// (0x000550c6) copy_highlight_title_pane_g1

0xa21e,	// (0x000550ce) copy_highlight_title_pane_t1

0xa22d,	// (0x000550dd) copy_highlight_digital_pane_g1

0xb53e,	// (0x000563ee) copy_highlight_digital_pane_t1

0xb492,	// (0x00056342) graphic_text_primary_pane_g1

0xb522,	// (0x000563d2) graphic_text_primary_pane_t1

0xb530,	// (0x000563e0) graphic_text_primary_pane_t2

0x0001,

0xfa0c,	// (0x0005a8bc) graphic_text_primary_pane_t

0xb4fe,	// (0x000563ae) graphic_text_primary_small_pane_g1

0xb506,	// (0x000563b6) graphic_text_primary_small_pane_t1

0xb514,	// (0x000563c4) graphic_text_primary_small_pane_t2

0x0001,

0xfa07,	// (0x0005a8b7) graphic_text_primary_small_pane_t

0xb4da,	// (0x0005638a) graphic_text_secondary_pane_g1

0xb4e2,	// (0x00056392) graphic_text_secondary_pane_t1

0xb4f0,	// (0x000563a0) graphic_text_secondary_pane_t2

0x0001,

0xfa02,	// (0x0005a8b2) graphic_text_secondary_pane_t

0xb4b6,	// (0x00056366) graphic_text_title_pane_g1

0xb4be,	// (0x0005636e) graphic_text_title_pane_t1

0xb4cc,	// (0x0005637c) graphic_text_title_pane_t2

0x0001,

0xf9fd,	// (0x0005a8ad) graphic_text_title_pane_t

0xb492,	// (0x00056342) graphic_text_digital_pane_g1

0xb49a,	// (0x0005634a) graphic_text_digital_pane_t1

0xb4a8,	// (0x00056358) graphic_text_digital_pane_t2

0x0001,

0xf9f8,	// (0x0005a8a8) graphic_text_digital_pane_t

0x736e,	// (0x0005221e) navi_icon_pane_srt_ParamLimits

0x736e,	// (0x0005221e) navi_icon_pane_srt

0x728e,	// (0x0005213e) navi_midp_pane_srt

0x728e,	// (0x0005213e) navi_navi_pane_srt

0x736e,	// (0x0005221e) navi_text_pane_srt_ParamLimits

0x736e,	// (0x0005221e) navi_text_pane_srt

0xb45d,	// (0x0005630d) navi_navi_icon_text_pane_srt

0xb465,	// (0x00056315) navi_navi_pane_srt_g1_ParamLimits

0xb465,	// (0x00056315) navi_navi_pane_srt_g1

0xb477,	// (0x00056327) navi_navi_pane_srt_g2_ParamLimits

0xb477,	// (0x00056327) navi_navi_pane_srt_g2

0x0001,

0xf9f3,	// (0x0005a8a3) navi_navi_pane_srt_g_ParamLimits

0xf9f3,	// (0x0005a8a3) navi_navi_pane_srt_g

0xb489,	// (0x00056339) navi_navi_tabs_pane_srt

0xb45d,	// (0x0005630d) navi_navi_text_pane_srt

0xb45d,	// (0x0005630d) navi_navi_volume_pane_srt

0xb44e,	// (0x000562fe) navi_navi_text_pane_srt_t1

0x631d,	// (0x000511cd) navi_navi_volume_pane_srt_g1

0x6325,	// (0x000511d5) volume_small_pane_srt_ParamLimits

0x6325,	// (0x000511d5) volume_small_pane_srt

0x5be9,	// (0x00050a99) volume_small_pane_srt_g1_ParamLimits

0x5be9,	// (0x00050a99) volume_small_pane_srt_g1

0x5bf9,	// (0x00050aa9) volume_small_pane_srt_g2_ParamLimits

0x5bf9,	// (0x00050aa9) volume_small_pane_srt_g2

0x5c0a,	// (0x00050aba) volume_small_pane_srt_g3_ParamLimits

0x5c0a,	// (0x00050aba) volume_small_pane_srt_g3

0x5c1b,	// (0x00050acb) volume_small_pane_srt_g4_ParamLimits

0x5c1b,	// (0x00050acb) volume_small_pane_srt_g4

0x5c2c,	// (0x00050adc) volume_small_pane_srt_g5_ParamLimits

0x5c2c,	// (0x00050adc) volume_small_pane_srt_g5

0x5c3d,	// (0x00050aed) volume_small_pane_srt_g6_ParamLimits

0x5c3d,	// (0x00050aed) volume_small_pane_srt_g6

0x5c4e,	// (0x00050afe) volume_small_pane_srt_g7_ParamLimits

0x5c4e,	// (0x00050afe) volume_small_pane_srt_g7

0x5c5f,	// (0x00050b0f) volume_small_pane_srt_g8_ParamLimits

0x5c5f,	// (0x00050b0f) volume_small_pane_srt_g8

0x5c70,	// (0x00050b20) volume_small_pane_srt_g9_ParamLimits

0x5c70,	// (0x00050b20) volume_small_pane_srt_g9

0x5c81,	// (0x00050b31) volume_small_pane_srt_g10_ParamLimits

0x5c81,	// (0x00050b31) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0005a652) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0005a652) volume_small_pane_srt_g

0x7755,	// (0x00052605) query_popup_data_pane_cp2

0xb434,	// (0x000562e4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb434,	// (0x000562e4) navi_navi_icon_text_pane_srt_t1

0xa4b5,	// (0x00055365) navi_tabs_2_long_pane_srt

0xa4b5,	// (0x00055365) navi_tabs_2_pane_srt

0xa4b5,	// (0x00055365) navi_tabs_3_long_pane_srt

0xa4b5,	// (0x00055365) navi_tabs_3_pane_srt

0xa4b5,	// (0x00055365) navi_tabs_4_pane_srt

0x62fd,	// (0x000511ad) tabs_2_active_pane_srt_ParamLimits

0x62fd,	// (0x000511ad) tabs_2_active_pane_srt

0x630d,	// (0x000511bd) tabs_2_passive_pane_srt_ParamLimits

0x630d,	// (0x000511bd) tabs_2_passive_pane_srt

0x90c4,	// (0x00053f74) bg_passive_tab_pane_cp1_srt_ParamLimits

0x90c4,	// (0x00053f74) bg_passive_tab_pane_cp1_srt

0xb400,	// (0x000562b0) bg_passive_tab_pane_g1_cp1_srt

0x8983,	// (0x00053833) bg_passive_tab_pane_g2_cp1_srt

0xb409,	// (0x000562b9) bg_passive_tab_pane_g3_cp1_srt

0x736e,	// (0x0005221e) bg_active_tab_pane_cp1_srt_ParamLimits

0x736e,	// (0x0005221e) bg_active_tab_pane_cp1_srt

0xb412,	// (0x000562c2) tabs_2_active_pane_srt_g1

0xb41a,	// (0x000562ca) tabs_2_active_pane_srt_t1_ParamLimits

0xb41a,	// (0x000562ca) tabs_2_active_pane_srt_t1

0xb400,	// (0x000562b0) bg_active_tab_pane_g1_cp1_srt

0x8983,	// (0x00053833) bg_active_tab_pane_g2_cp1_srt

0xb409,	// (0x000562b9) bg_active_tab_pane_g3_cp1_srt

0x62ca,	// (0x0005117a) tabs_3_active_pane_srt_ParamLimits

0x62ca,	// (0x0005117a) tabs_3_active_pane_srt

0x62db,	// (0x0005118b) tabs_3_passive_pane_cp_srt_ParamLimits

0x62db,	// (0x0005118b) tabs_3_passive_pane_cp_srt

0x62ec,	// (0x0005119c) tabs_3_passive_pane_srt_ParamLimits

0x62ec,	// (0x0005119c) tabs_3_passive_pane_srt

0x90c4,	// (0x00053f74) bg_passive_tab_pane_cp2_srt_ParamLimits

0x90c4,	// (0x00053f74) bg_passive_tab_pane_cp2_srt

0x8efc,	// (0x00053dac) bg_passive_tab_pane_g1_cp2_srt

0x8983,	// (0x00053833) bg_passive_tab_pane_g2_cp2_srt

0x8f05,	// (0x00053db5) bg_passive_tab_pane_g3_cp2_srt

0x736e,	// (0x0005221e) bg_active_tab_pane_cp2_srt_ParamLimits

0x736e,	// (0x0005221e) bg_active_tab_pane_cp2_srt

0xb3e6,	// (0x00056296) tabs_3_active_pane_srt_g1

0xb3ee,	// (0x0005629e) tabs_3_active_pane_srt_t1_ParamLimits

0xb3ee,	// (0x0005629e) tabs_3_active_pane_srt_t1

0x8efc,	// (0x00053dac) bg_active_tab_pane_g1_cp2_srt

0x8983,	// (0x00053833) bg_active_tab_pane_g2_cp2_srt

0x8f05,	// (0x00053db5) bg_active_tab_pane_g3_cp2_srt

0x6282,	// (0x00051132) tabs_4_active_pane_srt_ParamLimits

0x6282,	// (0x00051132) tabs_4_active_pane_srt

0x6294,	// (0x00051144) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6294,	// (0x00051144) tabs_4_passive_pane_cp2_srt

0x905a,	// (0x00053f0a) aid_size_cell_toolbar

0x82d3,	// (0x00053183) main_idle_act_pane_ParamLimits

0x9289,	// (0x00054139) popup_large_graphic_colour_window_ParamLimits

0x9630,	// (0x000544e0) popup_toolbar_window_ParamLimits

0x9630,	// (0x000544e0) popup_toolbar_window

0xb200,	// (0x000560b0) list_single_graphic_2heading_pane_ParamLimits

0xb200,	// (0x000560b0) list_single_graphic_2heading_pane

0x848f,	// (0x0005333f) aid_size_cell_apps_grid_lsc_pane

0x84a1,	// (0x00053351) aid_size_cell_apps_grid_prt_pane

0x90c4,	// (0x00053f74) bg_wml_button_pane_cp1_ParamLimits

0x90c4,	// (0x00053f74) bg_wml_button_pane_cp1

0x9ede,	// (0x00054d8e) form_midp_field_text_pane_t1_ParamLimits

0x9cf2,	// (0x00054ba2) input_focus_pane_cp050_ParamLimits

0x9f09,	// (0x00054db9) list_midp_form_text_pane_ParamLimits

0x9ebb,	// (0x00054d6b) input_focus_pane_cp051_ParamLimits

0x9ecf,	// (0x00054d7f) list_midp_choice_pane_ParamLimits

0x9d83,	// (0x00054c33) list_single_2graphic_pane_cp3_ParamLimits

0x9d83,	// (0x00054c33) list_single_2graphic_pane_cp3

0x9d9c,	// (0x00054c4c) list_single_midp_graphic_pane_ParamLimits

0x9d9c,	// (0x00054c4c) list_single_midp_graphic_pane

0x4ba7,	// (0x0004fa57) list_single_graphic_2heading_pane_g1_ParamLimits

0x4ba7,	// (0x0004fa57) list_single_graphic_2heading_pane_g1

0x4bb3,	// (0x0004fa63) list_single_graphic_2heading_pane_g4_ParamLimits

0x4bb3,	// (0x0004fa63) list_single_graphic_2heading_pane_g4

0x4bbf,	// (0x0004fa6f) list_single_graphic_2heading_pane_g5_ParamLimits

0x4bbf,	// (0x0004fa6f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0005a6a5) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0005a6a5) list_single_graphic_2heading_pane_g

0x4bcb,	// (0x0004fa7b) list_single_graphic_2heading_pane_t1_ParamLimits

0x4bcb,	// (0x0004fa7b) list_single_graphic_2heading_pane_t1

0x4bdf,	// (0x0004fa8f) list_single_graphic_2heading_pane_t2_ParamLimits

0x4bdf,	// (0x0004fa8f) list_single_graphic_2heading_pane_t2

0x4bfb,	// (0x0004faab) list_single_graphic_2heading_pane_t3_ParamLimits

0x4bfb,	// (0x0004faab) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0005a6ac) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0005a6ac) list_single_graphic_2heading_pane_t

0x9b3e,	// (0x000549ee) bg_popup_sub_pane_cp2

0x9b68,	// (0x00054a18) grid_toobar_pane

0x5e03,	// (0x00050cb3) cell_toolbar_pane_ParamLimits

0x5e03,	// (0x00050cb3) cell_toolbar_pane

0x9ba4,	// (0x00054a54) cell_toolbar_pane_g1_ParamLimits

0x9ba4,	// (0x00054a54) cell_toolbar_pane_g1

0x9bb8,	// (0x00054a68) cell_toolbar_pane_g2_ParamLimits

0x9bb8,	// (0x00054a68) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0005a6ba) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0005a6ba) cell_toolbar_pane_g

0x9bda,	// (0x00054a8a) grid_highlight_pane_cp2_ParamLimits

0x9bda,	// (0x00054a8a) grid_highlight_pane_cp2

0x9bf4,	// (0x00054aa4) toolbar_button_pane

0x9c00,	// (0x00054ab0) toolbar_button_pane_g1

0x9c08,	// (0x00054ab8) toolbar_button_pane_g2

0x9c10,	// (0x00054ac0) toolbar_button_pane_g3

0x9c18,	// (0x00054ac8) toolbar_button_pane_g4

0x9c20,	// (0x00054ad0) toolbar_button_pane_g5

0x9c28,	// (0x00054ad8) toolbar_button_pane_g6

0x9c30,	// (0x00054ae0) toolbar_button_pane_g7

0x9c38,	// (0x00054ae8) toolbar_button_pane_g8

0x9c40,	// (0x00054af0) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0005a6bf) toolbar_button_pane_g

0x5e5d,	// (0x00050d0d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5e5d,	// (0x00050d0d) list_single_2graphic_pane_g1_cp3

0x5e69,	// (0x00050d19) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5e69,	// (0x00050d19) list_single_2graphic_pane_g2_cp3

0x5e7a,	// (0x00050d2a) list_single_2graphic_pane_g3_cp3

0x5e82,	// (0x00050d32) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5e82,	// (0x00050d32) list_single_2graphic_pane_g4_cp3

0x5e8e,	// (0x00050d3e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5e8e,	// (0x00050d3e) list_single_2graphic_pane_t1_cp3

0x5ed3,	// (0x00050d83) list_single_midp_graphic_pane_g2_ParamLimits

0x5ed3,	// (0x00050d83) list_single_midp_graphic_pane_g2

0x5deb,	// (0x00050c9b) aid_zoom_text_primary

0x5df3,	// (0x00050ca3) aid_zoom_text_secondary

0x8fb9,	// (0x00053e69) status_small_pane_g7_ParamLimits

0x8fb9,	// (0x00053e69) status_small_pane_g7

0x8fdc,	// (0x00053e8c) status_small_pane_t1_ParamLimits

0x72a5,	// (0x00052155) title_pane_g2

0x0003,

0xf592,	// (0x0005a442) title_pane_g

0x77fe,	// (0x000526ae) aid_size_cell_colour_1_pane_ParamLimits

0x77fe,	// (0x000526ae) aid_size_cell_colour_1_pane

0x7812,	// (0x000526c2) aid_size_cell_colour_2_pane_ParamLimits

0x7812,	// (0x000526c2) aid_size_cell_colour_2_pane

0x7826,	// (0x000526d6) aid_size_cell_colour_3_pane_ParamLimits

0x7826,	// (0x000526d6) aid_size_cell_colour_3_pane

0x783a,	// (0x000526ea) aid_size_cell_colour_4_pane_ParamLimits

0x783a,	// (0x000526ea) aid_size_cell_colour_4_pane

0x57d0,	// (0x00050680) title_pane_stacon_g1_ParamLimits

0x57d0,	// (0x00050680) title_pane_stacon_g1

0xa29b,	// (0x0005514b) popup_note_wait_window_g3_ParamLimits

0xa29b,	// (0x0005514b) popup_note_wait_window_g3

0xa312,	// (0x000551c2) popup_note_wait_window_t5_ParamLimits

0xa312,	// (0x000551c2) popup_note_wait_window_t5

0x728e,	// (0x0005213e) main_feb_china_hwr_fs_writing_pane

0x9150,	// (0x00054000) popup_feb_china_hwr_fs_window_ParamLimits

0x9150,	// (0x00054000) popup_feb_china_hwr_fs_window

0x5ef5,	// (0x00050da5) aid_size_cell_hwr_fs_ParamLimits

0x5ef5,	// (0x00050da5) aid_size_cell_hwr_fs

0x9cf2,	// (0x00054ba2) bg_popup_sub_pane_cp3_ParamLimits

0x9cf2,	// (0x00054ba2) bg_popup_sub_pane_cp3

0x5f0a,	// (0x00050dba) grid_hwr_fs_pane_ParamLimits

0x5f0a,	// (0x00050dba) grid_hwr_fs_pane

0x5f22,	// (0x00050dd2) linegrid_hwr_fs_pane_ParamLimits

0x5f22,	// (0x00050dd2) linegrid_hwr_fs_pane

0x5f32,	// (0x00050de2) cell_hwr_fs_pane_ParamLimits

0x5f32,	// (0x00050de2) cell_hwr_fs_pane

0x9cfe,	// (0x00054bae) linegrid_hwr_fs_pane_g1_ParamLimits

0x9cfe,	// (0x00054bae) linegrid_hwr_fs_pane_g1

0x9d0a,	// (0x00054bba) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d0a,	// (0x00054bba) linegrid_hwr_fs_pane_g2

0x9d1c,	// (0x00054bcc) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d1c,	// (0x00054bcc) linegrid_hwr_fs_pane_g3

0x5f56,	// (0x00050e06) linegrid_hwr_fs_pane_g4_ParamLimits

0x5f56,	// (0x00050e06) linegrid_hwr_fs_pane_g4

0x5f74,	// (0x00050e24) linegrid_hwr_fs_pane_g5_ParamLimits

0x5f74,	// (0x00050e24) linegrid_hwr_fs_pane_g5

0x0004,

0xf83a,	// (0x0005a6ea) linegrid_hwr_fs_pane_g_ParamLimits

0xf83a,	// (0x0005a6ea) linegrid_hwr_fs_pane_g

0x9d28,	// (0x00054bd8) cell_hwr_fs_pane_g1_ParamLimits

0x9d28,	// (0x00054bd8) cell_hwr_fs_pane_g1

0x9a75,	// (0x00054925) cell_hwr_fs_pane_g2_ParamLimits

0x9a75,	// (0x00054925) cell_hwr_fs_pane_g2

0x9d3e,	// (0x00054bee) cell_hwr_fs_pane_g3_ParamLimits

0x9d3e,	// (0x00054bee) cell_hwr_fs_pane_g3

0x9d4b,	// (0x00054bfb) cell_hwr_fs_pane_g4_ParamLimits

0x9d4b,	// (0x00054bfb) cell_hwr_fs_pane_g4

0x0003,

0xf845,	// (0x0005a6f5) cell_hwr_fs_pane_g_ParamLimits

0xf845,	// (0x0005a6f5) cell_hwr_fs_pane_g

0x5f8a,	// (0x00050e3a) cell_hwr_fs_pane_t1

0x728e,	// (0x0005213e) grid_highlight_pane_cp6

0x728e,	// (0x0005213e) main_idle_act2_pane

0x8245,	// (0x000530f5) aid_inside_area_popup_secondary

0xa94b,	// (0x000557fb) aid_inside_area_window_primary_ParamLimits

0xa94b,	// (0x000557fb) aid_inside_area_window_primary

0xb54d,	// (0x000563fd) ai2_news_ticker_pane

0xb555,	// (0x00056405) aid_size_cell_ai1_link_ParamLimits

0xb555,	// (0x00056405) aid_size_cell_ai1_link

0xb56f,	// (0x0005641f) popup_ai2_data_window_ParamLimits

0xb56f,	// (0x0005641f) popup_ai2_data_window

0xb58d,	// (0x0005643d) popup_ai2_link_window_ParamLimits

0xb58d,	// (0x0005643d) popup_ai2_link_window

0x9cf2,	// (0x00054ba2) bg_popup_sub_pane_cp4_ParamLimits

0x9cf2,	// (0x00054ba2) bg_popup_sub_pane_cp4

0xb5a3,	// (0x00056453) grid_ai2_link_pane_ParamLimits

0xb5a3,	// (0x00056453) grid_ai2_link_pane

0xb5ba,	// (0x0005646a) popup_ai2_link_window_g1_ParamLimits

0xb5ba,	// (0x0005646a) popup_ai2_link_window_g1

0xb5c6,	// (0x00056476) popup_ai2_link_window_g2_ParamLimits

0xb5c6,	// (0x00056476) popup_ai2_link_window_g2

0x0001,

0xfa11,	// (0x0005a8c1) popup_ai2_link_window_g_ParamLimits

0xfa11,	// (0x0005a8c1) popup_ai2_link_window_g

0xb5d7,	// (0x00056487) ai2_mp_button_pane

0xb5df,	// (0x0005648f) ai2_mp_volume_pane

0x9ebb,	// (0x00054d6b) bg_popup_sub_pane_cp5_ParamLimits

0x9ebb,	// (0x00054d6b) bg_popup_sub_pane_cp5

0xb5e7,	// (0x00056497) heading_ai2_gene_pane_ParamLimits

0xb5e7,	// (0x00056497) heading_ai2_gene_pane

0xb5f3,	// (0x000564a3) list_ai2_gene_pane_ParamLimits

0xb5f3,	// (0x000564a3) list_ai2_gene_pane

0xb63b,	// (0x000564eb) cell_ai2_link_pane_ParamLimits

0xb63b,	// (0x000564eb) cell_ai2_link_pane

0xb651,	// (0x00056501) cell_ai2_link_pane_g1

0x728e,	// (0x0005213e) grid_highlight_pane_cp7

0x633a,	// (0x000511ea) ai2_mp_volume_pane_g1

0xb724,	// (0x000565d4) ai2_mp_volume_pane_g2

0xb699,	// (0x00056549) list_ai2_gene_pane_t1

0xb72c,	// (0x000565dc) ai2_mp_volume_pane_g3

0x0002,

0xfa2a,	// (0x0005a8da) ai2_mp_volume_pane_g

0x6342,	// (0x000511f2) volume_small_pane_cp3

0xb734,	// (0x000565e4) aid_size_cell_ai2_button

0xb73c,	// (0x000565ec) grid_ai2_button_pane

0xb745,	// (0x000565f5) cell_ai2_button_pane_ParamLimits

0xb745,	// (0x000565f5) cell_ai2_button_pane

0x7284,	// (0x00052134) cell_ai2_button_pane_g1

0x728e,	// (0x0005213e) grid_highlight_pane_cp8

0xb6e4,	// (0x00056594) ai2_gene_pane_t1_ParamLimits

0xb6e4,	// (0x00056594) ai2_gene_pane_t1

0x9050,	// (0x00053f00) aid_height_parent_landscape

0xaff7,	// (0x00055ea7) aid_height_set_list

0xb008,	// (0x00055eb8) aid_size_parent

0xb36e,	// (0x0005621e) aid_size_cell_graphic_pane_ParamLimits

0xb603,	// (0x000564b3) popup_ai2_data_window_g1_ParamLimits

0xb603,	// (0x000564b3) popup_ai2_data_window_g1

0xb60f,	// (0x000564bf) ai2_news_ticker_pane_g1

0xb617,	// (0x000564c7) ai2_news_ticker_pane_g2

0x0001,

0xfa16,	// (0x0005a8c6) ai2_news_ticker_pane_g

0xb61f,	// (0x000564cf) ai2_news_ticker_pane_t1

0xb62d,	// (0x000564dd) ai2_news_ticker_pane_t2

0x0001,

0xfa1b,	// (0x0005a8cb) ai2_news_ticker_pane_t

0xb65a,	// (0x0005650a) heading_ai2_gene_pane_g1

0xb662,	// (0x00056512) heading_ai2_gene_pane_t1_ParamLimits

0xb662,	// (0x00056512) heading_ai2_gene_pane_t1

0xb677,	// (0x00056527) list_highlight_pane_cp6

0xb67f,	// (0x0005652f) ai2_gene_pane_ParamLimits

0xb67f,	// (0x0005652f) ai2_gene_pane

0xb6a7,	// (0x00056557) list_ai2_gene_pane_t2

0x0001,

0xfa20,	// (0x0005a8d0) list_ai2_gene_pane_t

0xb6b5,	// (0x00056565) list_highlight_pane_cp8_ParamLimits

0xb6b5,	// (0x00056565) list_highlight_pane_cp8

0xb6c6,	// (0x00056576) ai2_gene_pane_g1_ParamLimits

0xb6c6,	// (0x00056576) ai2_gene_pane_g1

0xb6d8,	// (0x00056588) ai2_gene_pane_g2_ParamLimits

0xb6d8,	// (0x00056588) ai2_gene_pane_g2

0x0001,

0xfa25,	// (0x0005a8d5) ai2_gene_pane_g_ParamLimits

0xfa25,	// (0x0005a8d5) ai2_gene_pane_g

0x8072,	// (0x00052f22) scroll_pane_cp12

0x5daa,	// (0x00050c5a) control_pane_t3_ParamLimits

0x5daa,	// (0x00050c5a) control_pane_t3

0x8fcd,	// (0x00053e7d) status_small_pane_g8_ParamLimits

0x8fcd,	// (0x00053e7d) status_small_pane_g8

0x924e,	// (0x000540fe) popup_find_window_ParamLimits

0x9479,	// (0x00054329) popup_note_image_window_ParamLimits

0x5e33,	// (0x00050ce3) list_double2_graphic_pane_vc_g1_ParamLimits

0x5e33,	// (0x00050ce3) list_double2_graphic_pane_vc_g1

0x8cb7,	// (0x00053b67) list_double2_graphic_pane_vc_g2_ParamLimits

0x8cb7,	// (0x00053b67) list_double2_graphic_pane_vc_g2

0x79f0,	// (0x000528a0) list_double2_graphic_pane_vc_g3_ParamLimits

0x79f0,	// (0x000528a0) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0005a6b3) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0005a6b3) list_double2_graphic_pane_vc_g

0x5e3f,	// (0x00050cef) list_double2_graphic_pane_vc_t1_ParamLimits

0x5e3f,	// (0x00050cef) list_double2_graphic_pane_vc_t1

0x8cb7,	// (0x00053b67) list_single_heading_pane_vc_g1_ParamLimits

0x8cb7,	// (0x00053b67) list_single_heading_pane_vc_g1

0x79f0,	// (0x000528a0) list_single_heading_pane_vc_g2_ParamLimits

0x79f0,	// (0x000528a0) list_single_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0005a6d4) list_single_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0005a6d4) list_single_heading_pane_vc_g

0x5ea9,	// (0x00050d59) list_single_heading_pane_vc_t1_ParamLimits

0x5ea9,	// (0x00050d59) list_single_heading_pane_vc_t1

0x5ebf,	// (0x00050d6f) list_single_heading_pane_vc_t2_ParamLimits

0x5ebf,	// (0x00050d6f) list_single_heading_pane_vc_t2

0x0001,

0xf829,	// (0x0005a6d9) list_single_heading_pane_vc_t_ParamLimits

0xf829,	// (0x0005a6d9) list_single_heading_pane_vc_t

0x9c48,	// (0x00054af8) list_setting_number_pane_vc_g1_ParamLimits

0x9c48,	// (0x00054af8) list_setting_number_pane_vc_g1

0x9c54,	// (0x00054b04) list_setting_number_pane_vc_g2_ParamLimits

0x9c54,	// (0x00054b04) list_setting_number_pane_vc_g2

0x0001,

0xf82e,	// (0x0005a6de) list_setting_number_pane_vc_g_ParamLimits

0xf82e,	// (0x0005a6de) list_setting_number_pane_vc_g

0x9c60,	// (0x00054b10) list_setting_number_pane_vc_t1_ParamLimits

0x9c60,	// (0x00054b10) list_setting_number_pane_vc_t1

0x9c74,	// (0x00054b24) list_setting_number_pane_vc_t2_ParamLimits

0x9c74,	// (0x00054b24) list_setting_number_pane_vc_t2

0x9c90,	// (0x00054b40) list_setting_number_pane_vc_t3_ParamLimits

0x9c90,	// (0x00054b40) list_setting_number_pane_vc_t3

0x0002,

0xf833,	// (0x0005a6e3) list_setting_number_pane_vc_t_ParamLimits

0xf833,	// (0x0005a6e3) list_setting_number_pane_vc_t

0x9cb8,	// (0x00054b68) set_value_pane_vc_ParamLimits

0x9cb8,	// (0x00054b68) set_value_pane_vc

0xb200,	// (0x000560b0) list_double2_graphic_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_double2_graphic_pane_vc

0xb200,	// (0x000560b0) list_double2_large_graphic_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_double2_large_graphic_pane_vc

0xb200,	// (0x000560b0) list_double2_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_double2_pane_vc

0xb200,	// (0x000560b0) list_double_graphic_heading_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_double_graphic_heading_pane_vc

0xb200,	// (0x000560b0) list_double_graphic_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_double_graphic_pane_vc

0xb200,	// (0x000560b0) list_double_heading_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_double_heading_pane_vc

0xb200,	// (0x000560b0) list_double_large_graphic_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_double_large_graphic_pane_vc

0xb200,	// (0x000560b0) list_double_number_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_double_number_pane_vc

0xb200,	// (0x000560b0) list_double_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_double_pane_vc

0xb200,	// (0x000560b0) list_double_time_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_double_time_pane_vc

0xb200,	// (0x000560b0) list_setting_number_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_setting_number_pane_vc

0xb200,	// (0x000560b0) list_setting_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_setting_pane_vc

0xb200,	// (0x000560b0) list_single_graphic_heading_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_single_graphic_heading_pane_vc

0xb200,	// (0x000560b0) list_single_heading_pane_vc_ParamLimits

0xb200,	// (0x000560b0) list_single_heading_pane_vc

0xb214,	// (0x000560c4) list_single_number_heading_pane_vc_ParamLimits

0xb214,	// (0x000560c4) list_single_number_heading_pane_vc

0x5e33,	// (0x00050ce3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5e33,	// (0x00050ce3) list_double_graphic_heading_pane_vc_g1

0x7a28,	// (0x000528d8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7a28,	// (0x000528d8) list_double_graphic_heading_pane_vc_g2

0x7a34,	// (0x000528e4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7a34,	// (0x000528e4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa31,	// (0x0005a8e1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa31,	// (0x0005a8e1) list_double_graphic_heading_pane_vc_g

0x634b,	// (0x000511fb) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x634b,	// (0x000511fb) list_double_graphic_heading_pane_vc_t1

0x5ea9,	// (0x00050d59) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5ea9,	// (0x00050d59) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x0005a8e8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0005a8e8) list_double_graphic_heading_pane_vc_t

0x9c48,	// (0x00054af8) list_setting_pane_vc_g1_ParamLimits

0x9c48,	// (0x00054af8) list_setting_pane_vc_g1

0x9c54,	// (0x00054b04) list_setting_pane_vc_g2_ParamLimits

0x9c54,	// (0x00054b04) list_setting_pane_vc_g2

0x0001,

0xf82e,	// (0x0005a6de) list_setting_pane_vc_g_ParamLimits

0xf82e,	// (0x0005a6de) list_setting_pane_vc_g

0xb9c3,	// (0x00056873) list_setting_pane_vc_t1_ParamLimits

0xb9c3,	// (0x00056873) list_setting_pane_vc_t1

0xb9d7,	// (0x00056887) list_setting_pane_vc_t2_ParamLimits

0xb9d7,	// (0x00056887) list_setting_pane_vc_t2

0x0001,

0xfa66,	// (0x0005a916) list_setting_pane_vc_t_ParamLimits

0xfa66,	// (0x0005a916) list_setting_pane_vc_t

0x9cb8,	// (0x00054b68) set_value_pane_cp_vc_ParamLimits

0x9cb8,	// (0x00054b68) set_value_pane_cp_vc

0x8cb7,	// (0x00053b67) list_single_number_heading_pane_vc_g1_ParamLimits

0x8cb7,	// (0x00053b67) list_single_number_heading_pane_vc_g1

0x79f0,	// (0x000528a0) list_single_number_heading_pane_vc_g2_ParamLimits

0x79f0,	// (0x000528a0) list_single_number_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0005a6d4) list_single_number_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0005a6d4) list_single_number_heading_pane_vc_g

0x5ea9,	// (0x00050d59) list_single_number_heading_pane_vc_t1_ParamLimits

0x5ea9,	// (0x00050d59) list_single_number_heading_pane_vc_t1

0x635f,	// (0x0005120f) list_single_number_heading_pane_vc_t2_ParamLimits

0x635f,	// (0x0005120f) list_single_number_heading_pane_vc_t2

0x6373,	// (0x00051223) list_single_number_heading_pane_vc_t3_ParamLimits

0x6373,	// (0x00051223) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6b,	// (0x0005a91b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6b,	// (0x0005a91b) list_single_number_heading_pane_vc_t

0x5e33,	// (0x00050ce3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5e33,	// (0x00050ce3) list_single_graphic_heading_pane_vc_g1

0x8cb7,	// (0x00053b67) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8cb7,	// (0x00053b67) list_single_graphic_heading_pane_vc_g4

0x79f0,	// (0x000528a0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x79f0,	// (0x000528a0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0005a6b3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0005a6b3) list_single_graphic_heading_pane_vc_g

0x5ea9,	// (0x00050d59) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5ea9,	// (0x00050d59) list_single_graphic_heading_pane_vc_t1

0x6385,	// (0x00051235) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6385,	// (0x00051235) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x0005a922) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x0005a922) list_single_graphic_heading_pane_vc_t

0x8cb7,	// (0x00053b67) list_double2_pane_vc_g1_ParamLimits

0x8cb7,	// (0x00053b67) list_double2_pane_vc_g1

0x79f0,	// (0x000528a0) list_double2_pane_vc_g2_ParamLimits

0x79f0,	// (0x000528a0) list_double2_pane_vc_g2

0x0001,

0xf824,	// (0x0005a6d4) list_double2_pane_vc_g_ParamLimits

0xf824,	// (0x0005a6d4) list_double2_pane_vc_g

0x6399,	// (0x00051249) list_double2_pane_vc_t1_ParamLimits

0x6399,	// (0x00051249) list_double2_pane_vc_t1

0x7a40,	// (0x000528f0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7a40,	// (0x000528f0) list_double2_large_graphic_pane_vc_g1

0x8cb7,	// (0x00053b67) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8cb7,	// (0x00053b67) list_double2_large_graphic_pane_vc_g2

0x79f0,	// (0x000528a0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x79f0,	// (0x000528a0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa77,	// (0x0005a927) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x0005a927) list_double2_large_graphic_pane_vc_g

0x63af,	// (0x0005125f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x63af,	// (0x0005125f) list_double2_large_graphic_pane_vc_t1

0x7a4c,	// (0x000528fc) list_double_time_pane_vc_g1_ParamLimits

0x7a4c,	// (0x000528fc) list_double_time_pane_vc_g1

0x7a58,	// (0x00052908) list_double_time_pane_vc_g2_ParamLimits

0x7a58,	// (0x00052908) list_double_time_pane_vc_g2

0x0001,

0xfa7e,	// (0x0005a92e) list_double_time_pane_vc_g_ParamLimits

0xfa7e,	// (0x0005a92e) list_double_time_pane_vc_g

0x63c5,	// (0x00051275) list_double_time_pane_vc_t1_ParamLimits

0x63c5,	// (0x00051275) list_double_time_pane_vc_t1

0x63de,	// (0x0005128e) list_double_time_pane_vc_t2_ParamLimits

0x63de,	// (0x0005128e) list_double_time_pane_vc_t2

0x641e,	// (0x000512ce) list_double_time_pane_vc_t3_ParamLimits

0x641e,	// (0x000512ce) list_double_time_pane_vc_t3

0x6436,	// (0x000512e6) list_double_time_pane_vc_t4_ParamLimits

0x6436,	// (0x000512e6) list_double_time_pane_vc_t4

0x0003,

0xfa83,	// (0x0005a933) list_double_time_pane_vc_t_ParamLimits

0xfa83,	// (0x0005a933) list_double_time_pane_vc_t

0x8cb7,	// (0x00053b67) list_double_pane_vc_g1_ParamLimits

0x8cb7,	// (0x00053b67) list_double_pane_vc_g1

0x79f0,	// (0x000528a0) list_double_pane_vc_g2_ParamLimits

0x79f0,	// (0x000528a0) list_double_pane_vc_g2

0x0001,

0xf824,	// (0x0005a6d4) list_double_pane_vc_g_ParamLimits

0xf824,	// (0x0005a6d4) list_double_pane_vc_g

0x644a,	// (0x000512fa) list_double_pane_vc_t1_ParamLimits

0x644a,	// (0x000512fa) list_double_pane_vc_t1

0x645c,	// (0x0005130c) list_double_pane_vc_t2_ParamLimits

0x645c,	// (0x0005130c) list_double_pane_vc_t2

0x0001,

0xfa8c,	// (0x0005a93c) list_double_pane_vc_t_ParamLimits

0xfa8c,	// (0x0005a93c) list_double_pane_vc_t

0x8cb7,	// (0x00053b67) list_double_number_pane_vc_g1_ParamLimits

0x8cb7,	// (0x00053b67) list_double_number_pane_vc_g1

0x79f0,	// (0x000528a0) list_double_number_pane_vc_g2_ParamLimits

0x79f0,	// (0x000528a0) list_double_number_pane_vc_g2

0x0001,

0xf824,	// (0x0005a6d4) list_double_number_pane_vc_g_ParamLimits

0xf824,	// (0x0005a6d4) list_double_number_pane_vc_g

0x6474,	// (0x00051324) list_double_number_pane_vc_t1_ParamLimits

0x6474,	// (0x00051324) list_double_number_pane_vc_t1

0x6488,	// (0x00051338) list_double_number_pane_vc_t2_ParamLimits

0x6488,	// (0x00051338) list_double_number_pane_vc_t2

0x645c,	// (0x0005130c) list_double_number_pane_vc_t3_ParamLimits

0x645c,	// (0x0005130c) list_double_number_pane_vc_t3

0x0002,

0xfa91,	// (0x0005a941) list_double_number_pane_vc_t_ParamLimits

0xfa91,	// (0x0005a941) list_double_number_pane_vc_t

0x7a64,	// (0x00052914) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7a64,	// (0x00052914) list_double_large_graphic_pane_vc_g1

0x7a70,	// (0x00052920) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7a70,	// (0x00052920) list_double_large_graphic_pane_vc_g2

0x79f0,	// (0x000528a0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x79f0,	// (0x000528a0) list_double_large_graphic_pane_vc_g3

0x649a,	// (0x0005134a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x649a,	// (0x0005134a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa98,	// (0x0005a948) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa98,	// (0x0005a948) list_double_large_graphic_pane_vc_g

0x64a6,	// (0x00051356) list_double_large_graphic_pane_vc_t1_ParamLimits

0x64a6,	// (0x00051356) list_double_large_graphic_pane_vc_t1

0x64b8,	// (0x00051368) list_double_large_graphic_pane_vc_t2_ParamLimits

0x64b8,	// (0x00051368) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa1,	// (0x0005a951) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa1,	// (0x0005a951) list_double_large_graphic_pane_vc_t

0x7a28,	// (0x000528d8) list_double_heading_pane_vc_g1_ParamLimits

0x7a28,	// (0x000528d8) list_double_heading_pane_vc_g1

0x7a34,	// (0x000528e4) list_double_heading_pane_vc_g2_ParamLimits

0x7a34,	// (0x000528e4) list_double_heading_pane_vc_g2

0x0001,

0xfaa6,	// (0x0005a956) list_double_heading_pane_vc_g_ParamLimits

0xfaa6,	// (0x0005a956) list_double_heading_pane_vc_g

0x64d1,	// (0x00051381) list_double_heading_pane_vc_t1_ParamLimits

0x64d1,	// (0x00051381) list_double_heading_pane_vc_t1

0x5ea9,	// (0x00050d59) list_double_heading_pane_vc_t2_ParamLimits

0x5ea9,	// (0x00050d59) list_double_heading_pane_vc_t2

0x0001,

0xfaab,	// (0x0005a95b) list_double_heading_pane_vc_t_ParamLimits

0xfaab,	// (0x0005a95b) list_double_heading_pane_vc_t

0x5e33,	// (0x00050ce3) list_double_graphic_pane_vc_g1_ParamLimits

0x5e33,	// (0x00050ce3) list_double_graphic_pane_vc_g1

0x7a7f,	// (0x0005292f) list_double_graphic_pane_vc_g2_ParamLimits

0x7a7f,	// (0x0005292f) list_double_graphic_pane_vc_g2

0x7a8e,	// (0x0005293e) list_double_graphic_pane_vc_g3_ParamLimits

0x7a8e,	// (0x0005293e) list_double_graphic_pane_vc_g3

0x0002,

0xfab0,	// (0x0005a960) list_double_graphic_pane_vc_g_ParamLimits

0xfab0,	// (0x0005a960) list_double_graphic_pane_vc_g

0x64e5,	// (0x00051395) list_double_graphic_pane_vc_t1_ParamLimits

0x64e5,	// (0x00051395) list_double_graphic_pane_vc_t1

0x645c,	// (0x0005130c) list_double_graphic_pane_vc_t2_ParamLimits

0x645c,	// (0x0005130c) list_double_graphic_pane_vc_t2

0x0001,

0xfab7,	// (0x0005a967) list_double_graphic_pane_vc_t_ParamLimits

0xfab7,	// (0x0005a967) list_double_graphic_pane_vc_t

0x4c2b,	// (0x0004fadb) aid_size_cell_fastswap

0x4c33,	// (0x0004fae3) aid_size_cell_touch_ParamLimits

0x4c33,	// (0x0004fae3) aid_size_cell_touch

0x4e9e,	// (0x0004fd4e) popup_fast_swap_wide_window_ParamLimits

0x4e9e,	// (0x0004fd4e) popup_fast_swap_wide_window

0x4fb4,	// (0x0004fe64) touch_pane_ParamLimits

0x4fb4,	// (0x0004fe64) touch_pane

0x80c8,	// (0x00052f78) button_value_adjust_pane_cp2

0x5550,	// (0x00050400) button_value_adjust_pane_cp4

0x5578,	// (0x00050428) form_field_data_pane_cp2

0x559d,	// (0x0005044d) form_field_data_wide_pane_cp2

0x8561,	// (0x00053411) bg_scroll_pane_ParamLimits

0x5935,	// (0x000507e5) scroll_handle_pane_ParamLimits

0x5949,	// (0x000507f9) scroll_sc2_down_pane_ParamLimits

0x5949,	// (0x000507f9) scroll_sc2_down_pane

0x8592,	// (0x00053442) scroll_sc2_up_pane_ParamLimits

0x8592,	// (0x00053442) scroll_sc2_up_pane

0xbe22,	// (0x00056cd2) grid_wheel_folder_pane_g1_ParamLimits

0xbe22,	// (0x00056cd2) grid_wheel_folder_pane_g1

0x5b81,	// (0x00050a31) clock_nsta_pane_cp2_ParamLimits

0x5b81,	// (0x00050a31) clock_nsta_pane_cp2

0x8d4e,	// (0x00053bfe) listscroll_midp_pane_ParamLimits

0x8d5a,	// (0x00053c0a) midp_canvas_pane

0x9048,	// (0x00053ef8) nsta_clock_indic_pane

0x9096,	// (0x00053f46) listscroll_form_pane_vc

0x90b2,	// (0x00053f62) listscroll_set_pane_vc_ParamLimits

0x90b2,	// (0x00053f62) listscroll_set_pane_vc

0x97ca,	// (0x0005467a) clock_nsta_pane

0x9847,	// (0x000546f7) indicator_nsta_pane

0x9b3e,	// (0x000549ee) bg_popup_sub_pane_cp2_ParamLimits

0x9b52,	// (0x00054a02) find_pane_cp2_ParamLimits

0x9b52,	// (0x00054a02) find_pane_cp2

0x9b68,	// (0x00054a18) grid_toobar_pane_ParamLimits

0x9cc6,	// (0x00054b76) list_form_gen_pane_vc_ParamLimits

0x9cc6,	// (0x00054b76) list_form_gen_pane_vc

0x9cdc,	// (0x00054b8c) scroll_pane_cp8_vc_ParamLimits

0x9cdc,	// (0x00054b8c) scroll_pane_cp8_vc

0x9d58,	// (0x00054c08) data_form_wide_pane_vc_ParamLimits

0x9d58,	// (0x00054c08) data_form_wide_pane_vc

0x9d64,	// (0x00054c14) form_field_data_wide_pane_vc_g1

0x9d6c,	// (0x00054c1c) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d6c,	// (0x00054c1c) form_field_data_wide_pane_vc_t1

0x80dc,	// (0x00052f8c) input_focus_pane_cp6_vc_ParamLimits

0x80dc,	// (0x00052f8c) input_focus_pane_cp6_vc

0xa046,	// (0x00054ef6) list_midp_pane_ParamLimits

0xa052,	// (0x00054f02) scroll_pane_cp16_ParamLimits

0xa052,	// (0x00054f02) scroll_pane_cp16

0xa092,	// (0x00054f42) button_value_adjust_pane_ParamLimits

0xa092,	// (0x00054f42) button_value_adjust_pane

0xb01a,	// (0x00055eca) button_value_adjust_pane_cp6_ParamLimits

0xb01a,	// (0x00055eca) button_value_adjust_pane_cp6

0xb174,	// (0x00056024) settings_code_pane_cp_ParamLimits

0xb174,	// (0x00056024) settings_code_pane_cp

0x7284,	// (0x00052134) cell_touch_pane_g1

0x7284,	// (0x00052134) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0005a5fc) cell_touch_pane_g

0xb757,	// (0x00056607) cell_touch_pane_cp_ParamLimits

0xb757,	// (0x00056607) cell_touch_pane_cp

0xb767,	// (0x00056617) cell_touch_pane_ParamLimits

0xb767,	// (0x00056617) cell_touch_pane

0x7284,	// (0x00052134) scroll_sc2_down_pane_g1

0x7284,	// (0x00052134) scroll_sc2_up_pane_g1

0x728e,	// (0x0005213e) bg_set_opt_pane_cp4_vc

0xb778,	// (0x00056628) list_set_graphic_pane_vc_g1_ParamLimits

0xb778,	// (0x00056628) list_set_graphic_pane_vc_g1

0xb784,	// (0x00056634) list_set_graphic_pane_vc_g2_ParamLimits

0xb784,	// (0x00056634) list_set_graphic_pane_vc_g2

0x0001,

0xfa3d,	// (0x0005a8ed) list_set_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0005a8ed) list_set_graphic_pane_vc_g

0xb790,	// (0x00056640) text_primary_small_cp13_vc_ParamLimits

0xb790,	// (0x00056640) text_primary_small_cp13_vc

0xb7a8,	// (0x00056658) list_set_graphic_pane_vc_ParamLimits

0xb7a8,	// (0x00056658) list_set_graphic_pane_vc

0x728e,	// (0x0005213e) input_focus_pane_cp2_vc

0x7284,	// (0x00052134) setting_code_pane_vc_g1

0xb7bc,	// (0x0005666c) setting_code_pane_vc_t1

0xb7ca,	// (0x0005667a) set_text_pane_vc_t1_ParamLimits

0xb7ca,	// (0x0005667a) set_text_pane_vc_t1

0x728e,	// (0x0005213e) input_focus_pane_cp1_vc

0xb7e8,	// (0x00056698) list_set_text_pane_vc

0x7284,	// (0x00052134) setting_text_pane_vc_g1

0x728e,	// (0x0005213e) bg_set_opt_pane_cp2_vc

0xb7f2,	// (0x000566a2) setting_slider_graphic_pane_vc_g1

0xb7fa,	// (0x000566aa) setting_slider_graphic_pane_vc_t1

0xb808,	// (0x000566b8) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa42,	// (0x0005a8f2) setting_slider_graphic_pane_vc_t

0xb816,	// (0x000566c6) slider_set_pane_cp_vc

0xb81e,	// (0x000566ce) slider_set_pane_vc_g1

0xb827,	// (0x000566d7) slider_set_pane_vc_g2

0x0006,

0xfa47,	// (0x0005a8f7) slider_set_pane_vc_g

0x8143,	// (0x00052ff3) set_opt_bg_pane_g1_copy1

0x814b,	// (0x00052ffb) set_opt_bg_pane_g2_copy1

0xb853,	// (0x00056703) set_opt_bg_pane_g3_copy1

0x815b,	// (0x0005300b) set_opt_bg_pane_g4_copy1

0x8163,	// (0x00053013) set_opt_bg_pane_g5_copy1

0x816b,	// (0x0005301b) set_opt_bg_pane_g6_copy1

0xb85d,	// (0x0005670d) set_opt_bg_pane_g7_copy1

0xb8a9,	// (0x00056759) set_opt_bg_pane_g8_copy1

0xb8b3,	// (0x00056763) set_opt_bg_pane_g9_copy1

0x728e,	// (0x0005213e) bg_set_opt_pane_cp_vc

0xb8bd,	// (0x0005676d) setting_slider_pane_vc_t1

0xb7fa,	// (0x000566aa) setting_slider_pane_vc_t2

0xb808,	// (0x000566b8) setting_slider_pane_vc_t3

0x0002,

0xfa56,	// (0x0005a906) setting_slider_pane_vc_t

0xb816,	// (0x000566c6) slider_set_pane_vc

0x5fc6,	// (0x00050e76) volume_set_pane_vc_g1

0x5fcf,	// (0x00050e7f) volume_set_pane_vc_g2

0x5fd8,	// (0x00050e88) volume_set_pane_vc_g3

0x5fe1,	// (0x00050e91) volume_set_pane_vc_g4

0x5fea,	// (0x00050e9a) volume_set_pane_vc_g5

0x5ff3,	// (0x00050ea3) volume_set_pane_vc_g6

0x5ffc,	// (0x00050eac) volume_set_pane_vc_g7

0x6005,	// (0x00050eb5) volume_set_pane_vc_g8

0x600e,	// (0x00050ebe) volume_set_pane_vc_g9

0x6017,	// (0x00050ec7) volume_set_pane_vc_g10

0x0009,

0xf8f4,	// (0x0005a7a4) volume_set_pane_vc_g

0xb8cc,	// (0x0005677c) volume_set_pane_vc

0xb8d4,	// (0x00056784) button_value_adjust_pane_cp1_vc

0xb8de,	// (0x0005678e) list_highlight_pane_cp2_vc

0xb8e7,	// (0x00056797) list_set_pane_vc_ParamLimits

0xb8e7,	// (0x00056797) list_set_pane_vc

0xb951,	// (0x00056801) main_pane_set_vc_t1_ParamLimits

0xb951,	// (0x00056801) main_pane_set_vc_t1

0xb966,	// (0x00056816) main_pane_set_vc_t2_ParamLimits

0xb966,	// (0x00056816) main_pane_set_vc_t2

0xb978,	// (0x00056828) main_pane_set_vc_t3_ParamLimits

0xb978,	// (0x00056828) main_pane_set_vc_t3

0xb98c,	// (0x0005683c) main_pane_set_vc_t4_ParamLimits

0xb98c,	// (0x0005683c) main_pane_set_vc_t4

0x0003,

0xfa5d,	// (0x0005a90d) main_pane_set_vc_t_ParamLimits

0xfa5d,	// (0x0005a90d) main_pane_set_vc_t

0xb9a0,	// (0x00056850) setting_code_pane_vc_ParamLimits

0xb9a0,	// (0x00056850) setting_code_pane_vc

0xb9b1,	// (0x00056861) setting_slider_graphic_pane_vc

0xb9b1,	// (0x00056861) setting_slider_pane_vc

0xb9b1,	// (0x00056861) setting_text_pane_vc

0xb9b1,	// (0x00056861) setting_volume_pane_vc

0xb9bb,	// (0x0005686b) scroll_pane_cp121_vc

0x80b6,	// (0x00052f66) set_content_pane_vc

0xb9f9,	// (0x000568a9) button_value_adjust_pane_g1

0xba02,	// (0x000568b2) button_value_adjust_pane_g2

0x0001,

0xfabc,	// (0x0005a96c) button_value_adjust_pane_g

0xba0b,	// (0x000568bb) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba0b,	// (0x000568bb) form_field_slider_wide_pane_vc_t1

0xba1f,	// (0x000568cf) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba1f,	// (0x000568cf) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac1,	// (0x0005a971) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac1,	// (0x0005a971) form_field_slider_wide_pane_vc_t

0x75ea,	// (0x0005249a) input_focus_pane_cp10_vc_ParamLimits

0x75ea,	// (0x0005249a) input_focus_pane_cp10_vc

0xba31,	// (0x000568e1) slider_cont_pane_cp1_vc_ParamLimits

0xba31,	// (0x000568e1) slider_cont_pane_cp1_vc

0xb81e,	// (0x000566ce) slider_form_pane_g1_cp2

0xb827,	// (0x000566d7) slider_form_pane_g2_cp2

0xba4a,	// (0x000568fa) form_field_slider_pane_vc_t3

0xba58,	// (0x00056908) form_field_slider_pane_vc_t4

0xba66,	// (0x00056916) slider_form_pane_vc_ParamLimits

0xba66,	// (0x00056916) slider_form_pane_vc

0xba73,	// (0x00056923) form_field_slider_pane_vc_t1_ParamLimits

0xba73,	// (0x00056923) form_field_slider_pane_vc_t1

0xba1f,	// (0x000568cf) form_field_slider_pane_vc_t2_ParamLimits

0xba1f,	// (0x000568cf) form_field_slider_pane_vc_t2

0x0001,

0xfad1,	// (0x0005a981) form_field_slider_pane_vc_t_ParamLimits

0xfad1,	// (0x0005a981) form_field_slider_pane_vc_t

0x75ea,	// (0x0005249a) input_focus_pane_cp9_vc_ParamLimits

0x75ea,	// (0x0005249a) input_focus_pane_cp9_vc

0xba8f,	// (0x0005693f) slider_cont_pane_vc_ParamLimits

0xba8f,	// (0x0005693f) slider_cont_pane_vc

0xbaa1,	// (0x00056951) list_form_graphic_pane_cp_vc_ParamLimits

0xbaa1,	// (0x00056951) list_form_graphic_pane_cp_vc

0x9d64,	// (0x00054c14) form_field_popup_wide_pane_vc_g1

0xbab6,	// (0x00056966) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbab6,	// (0x00056966) form_field_popup_wide_pane_vc_t1

0x80dc,	// (0x00052f8c) input_focus_pane_cp8_vc_ParamLimits

0x80dc,	// (0x00052f8c) input_focus_pane_cp8_vc

0xbacd,	// (0x0005697d) list_form_wide_pane_vc_ParamLimits

0xbacd,	// (0x0005697d) list_form_wide_pane_vc

0xbad9,	// (0x00056989) list_form_graphic_pane_vc_g1

0xbae1,	// (0x00056991) list_form_graphic_pane_vc_t1_ParamLimits

0xbae1,	// (0x00056991) list_form_graphic_pane_vc_t1

0x736e,	// (0x0005221e) list_highlight_pane_cp5_vc_ParamLimits

0x736e,	// (0x0005221e) list_highlight_pane_cp5_vc

0xbafd,	// (0x000569ad) list_form_graphic_pane_vc_ParamLimits

0xbafd,	// (0x000569ad) list_form_graphic_pane_vc

0x9d64,	// (0x00054c14) form_field_popup_pane_vc_g1

0xbb13,	// (0x000569c3) form_field_popup_pane_vc_t1_ParamLimits

0xbb13,	// (0x000569c3) form_field_popup_pane_vc_t1

0x80dc,	// (0x00052f8c) input_focus_pane_cp7_vc_ParamLimits

0x80dc,	// (0x00052f8c) input_focus_pane_cp7_vc

0xbb2a,	// (0x000569da) list_form_pane_vc_ParamLimits

0xbb2a,	// (0x000569da) list_form_pane_vc

0xbb36,	// (0x000569e6) data_form_pane_vc_t1_ParamLimits

0xbb36,	// (0x000569e6) data_form_pane_vc_t1

0x8143,	// (0x00052ff3) input_focus_pane_vc_g1

0x814b,	// (0x00052ffb) input_focus_pane_vc_g2

0x8153,	// (0x00053003) input_focus_pane_vc_g3

0x815b,	// (0x0005300b) input_focus_pane_vc_g4

0x8163,	// (0x00053013) input_focus_pane_vc_g5

0x816b,	// (0x0005301b) input_focus_pane_vc_g6

0x8173,	// (0x00053023) input_focus_pane_vc_g7

0x817b,	// (0x0005302b) input_focus_pane_vc_g8

0x8183,	// (0x00053033) input_focus_pane_vc_g9

0x7284,	// (0x00052134) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0005a585) input_focus_pane_vc_g

0x9d58,	// (0x00054c08) data_form_pane_vc_ParamLimits

0x9d58,	// (0x00054c08) data_form_pane_vc

0x9d64,	// (0x00054c14) form_field_data_pane_vc_g1

0xbb53,	// (0x00056a03) form_field_data_pane_vc_t1_ParamLimits

0xbb53,	// (0x00056a03) form_field_data_pane_vc_t1

0x80dc,	// (0x00052f8c) input_focus_pane_vc_ParamLimits

0x80dc,	// (0x00052f8c) input_focus_pane_vc

0xbb6d,	// (0x00056a1d) button_value_adjust_pane_cp3_vc

0xbb75,	// (0x00056a25) button_value_adjust_pane_cp5_vc

0xbb7d,	// (0x00056a2d) form_field_data_pane_vc_ParamLimits

0xbb7d,	// (0x00056a2d) form_field_data_pane_vc

0xbb98,	// (0x00056a48) form_field_data_pane_vc_cp2

0xbba0,	// (0x00056a50) form_field_data_wide_pane_vc_ParamLimits

0xbba0,	// (0x00056a50) form_field_data_wide_pane_vc

0xbbba,	// (0x00056a6a) form_field_data_wide_pane_vc_cp2

0xbbc2,	// (0x00056a72) form_field_popup_pane_vc_ParamLimits

0xbbc2,	// (0x00056a72) form_field_popup_pane_vc

0xbbdd,	// (0x00056a8d) form_field_popup_wide_pane_vc_ParamLimits

0xbbdd,	// (0x00056a8d) form_field_popup_wide_pane_vc

0xbbf7,	// (0x00056aa7) form_field_slider_pane_vc_ParamLimits

0xbbf7,	// (0x00056aa7) form_field_slider_pane_vc

0xbc0a,	// (0x00056aba) form_field_slider_wide_pane_vc_ParamLimits

0xbc0a,	// (0x00056aba) form_field_slider_wide_pane_vc

0xbc1d,	// (0x00056acd) grid_touch_1_pane_ParamLimits

0xbc1d,	// (0x00056acd) grid_touch_1_pane

0xbc29,	// (0x00056ad9) grid_touch_2_pane_ParamLimits

0xbc29,	// (0x00056ad9) grid_touch_2_pane

0x9013,	// (0x00053ec3) touch_pane_g1_ParamLimits

0x9013,	// (0x00053ec3) touch_pane_g1

0xbc43,	// (0x00056af3) cell_app_pane_cp_wide_ParamLimits

0xbc43,	// (0x00056af3) cell_app_pane_cp_wide

0xbc54,	// (0x00056b04) grid_popup_fast_wide_pane_ParamLimits

0xbc54,	// (0x00056b04) grid_popup_fast_wide_pane

0xbc68,	// (0x00056b18) scroll_pane_cp19_ParamLimits

0xbc68,	// (0x00056b18) scroll_pane_cp19

0x728e,	// (0x0005213e) bg_popup_window_pane_cp20

0xbc7c,	// (0x00056b2c) listscroll_popup_fast_wide_pane

0x736e,	// (0x0005221e) grid_indicator_nsta_pane

0xbc84,	// (0x00056b34) clock_nsta_pane_g1

0xbc8d,	// (0x00056b3d) clock_nsta_pane_t1

0xbca9,	// (0x00056b59) cell_indicator_nsta_pane_ParamLimits

0xbca9,	// (0x00056b59) cell_indicator_nsta_pane

0xbce1,	// (0x00056b91) cell_indicator_nsta_pane_g1

0xbcef,	// (0x00056b9f) cell_indicator_nsta_pane_g2

0x0001,

0xfadb,	// (0x0005a98b) cell_indicator_nsta_pane_g

0xbd04,	// (0x00056bb4) clock_nsta_pane_cp

0xbd0c,	// (0x00056bbc) indicator_nsta_pane_cp

0xbd14,	// (0x00056bc4) nsta_clock_indic_pane_g1

0x743a,	// (0x000522ea) grid_indicator_pane

0x8684,	// (0x00053534) scroll_pane_cp29

0x5acd,	// (0x0005097d) indicator_nsta_pane_cp2_ParamLimits

0x5acd,	// (0x0005097d) indicator_nsta_pane_cp2

0x736e,	// (0x0005221e) main_apps_wheel_pane

0x9f23,	// (0x00054dd3) form_midp_field_text_pane_ParamLimits

0xa072,	// (0x00054f22) scroll_bar_cp050_ParamLimits

0xbd4c,	// (0x00056bfc) cell_indicator_pane_ParamLimits

0xbd4c,	// (0x00056bfc) cell_indicator_pane

0xbd64,	// (0x00056c14) cell_indicator_pane_g1

0xbd6e,	// (0x00056c1e) grid_wheel_folder_pane_ParamLimits

0xbd6e,	// (0x00056c1e) grid_wheel_folder_pane

0xbd82,	// (0x00056c32) list_wheel_apps_pane_ParamLimits

0xbd82,	// (0x00056c32) list_wheel_apps_pane

0xbd95,	// (0x00056c45) main_apps_wheel_pane_g1_ParamLimits

0xbd95,	// (0x00056c45) main_apps_wheel_pane_g1

0xbdb1,	// (0x00056c61) main_apps_wheel_pane_g2_ParamLimits

0xbdb1,	// (0x00056c61) main_apps_wheel_pane_g2

0x0001,

0xfaea,	// (0x0005a99a) main_apps_wheel_pane_g_ParamLimits

0xfaea,	// (0x0005a99a) main_apps_wheel_pane_g

0xbdcd,	// (0x00056c7d) main_apps_wheel_pane_t1_ParamLimits

0xbdcd,	// (0x00056c7d) main_apps_wheel_pane_t1

0xbdf6,	// (0x00056ca6) list_wheel_apps_pane_g1

0xbdfe,	// (0x00056cae) list_wheel_apps_pane_g2

0xbe06,	// (0x00056cb6) list_wheel_apps_pane_g3

0xbe0e,	// (0x00056cbe) list_wheel_apps_pane_g4

0xbe18,	// (0x00056cc8) list_wheel_apps_pane_g5

0x0004,

0xfaef,	// (0x0005a99f) list_wheel_apps_pane_g

0x8bc2,	// (0x00053a72) navi_icon_text_pane

0x96f7,	// (0x000545a7) aid_fill_nsta

0xbe39,	// (0x00056ce9) navi_icon_text_pane_g1

0xbe48,	// (0x00056cf8) navi_icon_text_pane_t1

0x8a58,	// (0x00053908) list_set_graphic_pane_t1_ParamLimits

0x8a58,	// (0x00053908) list_set_graphic_pane_t1

0xa792,	// (0x00055642) popup_midp_note_alarm_window_t6_ParamLimits

0xa792,	// (0x00055642) popup_midp_note_alarm_window_t6

0xa7a4,	// (0x00055654) popup_midp_note_alarm_window_t7_ParamLimits

0xa7a4,	// (0x00055654) popup_midp_note_alarm_window_t7

0xa7b6,	// (0x00055666) popup_midp_note_alarm_window_t8_ParamLimits

0xa7b6,	// (0x00055666) popup_midp_note_alarm_window_t8

0xa7c8,	// (0x00055678) popup_midp_note_alarm_window_t9_ParamLimits

0xa7c8,	// (0x00055678) popup_midp_note_alarm_window_t9

0xa7da,	// (0x0005568a) popup_midp_note_alarm_window_t10_ParamLimits

0xa7da,	// (0x0005568a) popup_midp_note_alarm_window_t10

0xa7ec,	// (0x0005569c) popup_midp_note_alarm_window_t11_ParamLimits

0xa7ec,	// (0x0005569c) popup_midp_note_alarm_window_t11

0xa7fe,	// (0x000556ae) scroll_pane_cp17_ParamLimits

0xa7fe,	// (0x000556ae) scroll_pane_cp17

0x5fc6,	// (0x00050e76) volume_small_pane_cp_g1

0x64f7,	// (0x000513a7) volume_small_pane_cp_g2

0x6500,	// (0x000513b0) volume_small_pane_cp_g3

0x6509,	// (0x000513b9) volume_small_pane_cp_g4

0x6512,	// (0x000513c2) volume_small_pane_cp_g5

0x651b,	// (0x000513cb) volume_small_pane_cp_g6

0x6524,	// (0x000513d4) volume_small_pane_cp_g7

0x652d,	// (0x000513dd) volume_small_pane_cp_g8

0x6536,	// (0x000513e6) volume_small_pane_cp_g9

0x653f,	// (0x000513ef) volume_small_pane_cp_g10

0x8e23,	// (0x00053cd3) midp_ticker_pane_g1_ParamLimits

0x8e2f,	// (0x00053cdf) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0005a64d) midp_ticker_pane_g_ParamLimits

0x8e3b,	// (0x00053ceb) midp_ticker_pane_t1_ParamLimits

0x970d,	// (0x000545bd) aid_fill_nsta_2

0xa05e,	// (0x00054f0e) list_form2_midp_pane

0xb1bb,	// (0x0005606b) midp_editing_number_pane_ParamLimits

0xb1ca,	// (0x0005607a) midp_ticker_pane_ParamLimits

0xbe5d,	// (0x00056d0d) form2_midp_field_pane

0xbe81,	// (0x00056d31) scroll_pane_cp51

0xbea1,	// (0x00056d51) form2_midp_button_pane_ParamLimits

0xbea1,	// (0x00056d51) form2_midp_button_pane

0xbeb3,	// (0x00056d63) form2_midp_content_pane_ParamLimits

0xbeb3,	// (0x00056d63) form2_midp_content_pane

0xbecd,	// (0x00056d7d) form2_midp_field_choice_group_pane

0xbed5,	// (0x00056d85) form2_midp_field_pane_g1

0xbedd,	// (0x00056d8d) form2_midp_field_pane_g2

0xbee5,	// (0x00056d95) form2_midp_field_pane_g3

0xbeed,	// (0x00056d9d) form2_midp_field_pane_g4

0x0003,

0xfb14,	// (0x0005a9c4) form2_midp_field_pane_g

0xbef5,	// (0x00056da5) form2_midp_gauge_slider_pane

0xbefd,	// (0x00056dad) form2_midp_gauge_wait_pane

0xbf05,	// (0x00056db5) form2_midp_image_pane_ParamLimits

0xbf05,	// (0x00056db5) form2_midp_image_pane

0xbf20,	// (0x00056dd0) form2_midp_label_pane_ParamLimits

0xbf20,	// (0x00056dd0) form2_midp_label_pane

0xbf3f,	// (0x00056def) form2_midp_label_pane_cp_ParamLimits

0xbf3f,	// (0x00056def) form2_midp_label_pane_cp

0xbf60,	// (0x00056e10) form2_midp_string_pane_ParamLimits

0xbf60,	// (0x00056e10) form2_midp_string_pane

0x6548,	// (0x000513f8) form2_midp_text_pane_ParamLimits

0x6548,	// (0x000513f8) form2_midp_text_pane

0xbf72,	// (0x00056e22) form2_midp_time_pane

0xbf82,	// (0x00056e32) input_focus_pane_cp51_ParamLimits

0xbf82,	// (0x00056e32) input_focus_pane_cp51

0xbf9a,	// (0x00056e4a) form2_midp_label_pane_t1_ParamLimits

0xbf9a,	// (0x00056e4a) form2_midp_label_pane_t1

0x656b,	// (0x0005141b) form2_mdip_text_pane_t1_ParamLimits

0x656b,	// (0x0005141b) form2_mdip_text_pane_t1

0x658a,	// (0x0005143a) form2_midp_time_pane_t1

0xbfe8,	// (0x00056e98) form2_midp_gauge_slider_pane_t1

0xbffa,	// (0x00056eaa) form2_midp_gauge_slider_pane_t2

0xc00c,	// (0x00056ebc) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1d,	// (0x0005a9cd) form2_midp_gauge_slider_pane_t

0xc01e,	// (0x00056ece) form2_midp_slider_pane

0xc02a,	// (0x00056eda) form2_midp_gauge_wait_pane_t1

0xc038,	// (0x00056ee8) form2_midp_wait_pane_ParamLimits

0xc038,	// (0x00056ee8) form2_midp_wait_pane

0x9d83,	// (0x00054c33) list_single_2graphic_pane_cp4_ParamLimits

0x9d83,	// (0x00054c33) list_single_2graphic_pane_cp4

0xc063,	// (0x00056f13) list_single_midp_graphic_pane_cp_ParamLimits

0xc063,	// (0x00056f13) list_single_midp_graphic_pane_cp

0x728e,	// (0x0005213e) list_highlight_pane_cp20

0xc087,	// (0x00056f37) list_single_2graphic_pane_g1_cp4

0xb65a,	// (0x0005650a) list_single_2graphic_pane_g2_cp4

0xc08f,	// (0x00056f3f) list_single_2graphic_pane_t1_cp4

0x736e,	// (0x0005221e) list_highlight_pane_cp21

0xc09e,	// (0x00056f4e) list_single_midp_graphic_pane_g4_cp

0xc0ad,	// (0x00056f5d) list_single_midp_graphic_pane_t1_cp

0xc0c2,	// (0x00056f72) form2_mdip_string_pane_t1_ParamLimits

0xc0c2,	// (0x00056f72) form2_mdip_string_pane_t1

0x728e,	// (0x0005213e) bg_wml_button_pane_cp2

0x7284,	// (0x00052134) form2_midp_image_pane_g1

0x79a8,	// (0x00052858) list_double_large_graphic_pane_g5_ParamLimits

0x79a8,	// (0x00052858) list_double_large_graphic_pane_g5

0x8d4e,	// (0x00053bfe) midp_form_pane_ParamLimits

0x736e,	// (0x0005221e) main_apps_wheel_pane_ParamLimits

0x94a1,	// (0x00054351) popup_preview_window_ParamLimits

0x94a1,	// (0x00054351) popup_preview_window

0x9688,	// (0x00054538) popup_touch_info_window_ParamLimits

0x9688,	// (0x00054538) popup_touch_info_window

0x96aa,	// (0x0005455a) popup_touch_menu_window_ParamLimits

0x96aa,	// (0x0005455a) popup_touch_menu_window

0x727a,	// (0x0005212a) bg_popup_sub_pane_cp6

0xc167,	// (0x00057017) list_touch_menu_pane

0xc16f,	// (0x0005701f) list_single_touch_menu_pane_ParamLimits

0xc16f,	// (0x0005701f) list_single_touch_menu_pane

0xc18a,	// (0x0005703a) list_single_touch_menu_pane_t1

0x736e,	// (0x0005221e) bg_popup_sub_pane_cp7_ParamLimits

0x736e,	// (0x0005221e) bg_popup_sub_pane_cp7

0xc198,	// (0x00057048) heading_sub_pane

0xc1a0,	// (0x00057050) list_touch_info_pane_ParamLimits

0xc1a0,	// (0x00057050) list_touch_info_pane

0xc1af,	// (0x0005705f) list_single_touch_info_pane_ParamLimits

0xc1af,	// (0x0005705f) list_single_touch_info_pane

0xc1c1,	// (0x00057071) list_single_touch_info_pane_t1

0xc1cf,	// (0x0005707f) list_single_touch_info_pane_t2

0x0001,

0xfb2b,	// (0x0005a9db) list_single_touch_info_pane_t

0x8d46,	// (0x00053bf6) bg_popup_heading_pane_cp

0xc1dd,	// (0x0005708d) heading_sub_pane_t1

0x9cf2,	// (0x00054ba2) bg_popup_preview_window_pane_cp_ParamLimits

0x9cf2,	// (0x00054ba2) bg_popup_preview_window_pane_cp

0xc198,	// (0x00057048) heading_preview_pane

0xc1a0,	// (0x00057050) list_preview_pane_ParamLimits

0xc1a0,	// (0x00057050) list_preview_pane

0xc1eb,	// (0x0005709b) popup_preview_window_g1

0xc1af,	// (0x0005705f) list_single_preview_pane_ParamLimits

0xc1af,	// (0x0005705f) list_single_preview_pane

0xc1f3,	// (0x000570a3) list_single_preview_pane_g1

0xc1fb,	// (0x000570ab) list_single_preview_pane_t1

0xc1c1,	// (0x00057071) list_single_preview_pane_t2

0x0001,

0xfb30,	// (0x0005a9e0) list_single_preview_pane_t

0xc209,	// (0x000570b9) bg_popup_heading_pane_cp2_ParamLimits

0xc209,	// (0x000570b9) bg_popup_heading_pane_cp2

0xc21f,	// (0x000570cf) heading_preview_pane_g1

0xc227,	// (0x000570d7) heading_preview_pane_t1_ParamLimits

0xc227,	// (0x000570d7) heading_preview_pane_t1

0x745d,	// (0x0005230d) soft_indicator_pane_t1_ParamLimits

0x804f,	// (0x00052eff) scroll_pane_ParamLimits

0x8580,	// (0x00053430) scroll_sc2_left_pane

0x8589,	// (0x00053439) scroll_sc2_right_pane

0x85a8,	// (0x00053458) scroll_bg_pane_g1_ParamLimits

0x85bd,	// (0x0005346d) scroll_bg_pane_g2_ParamLimits

0x85d5,	// (0x00053485) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0005a5dc) scroll_bg_pane_g_ParamLimits

0x85a8,	// (0x00053458) scroll_handle_pane_g1_ParamLimits

0x85f7,	// (0x000534a7) scroll_handle_pane_g2_ParamLimits

0x85d5,	// (0x00053485) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0005a5e3) scroll_handle_pane_g_ParamLimits

0x90ec,	// (0x00053f9c) popup_choice_list_window_ParamLimits

0x90ec,	// (0x00053f9c) popup_choice_list_window

0x9b4a,	// (0x000549fa) choice_list_pane

0x9bcc,	// (0x00054a7c) cell_toolbar_pane_t1

0x9bf4,	// (0x00054aa4) toolbar_button_pane_ParamLimits

0xacce,	// (0x00055b7e) ai_gene_pane_1_t2_ParamLimits

0xacce,	// (0x00055b7e) ai_gene_pane_1_t2

0x0001,

0xf950,	// (0x0005a800) ai_gene_pane_1_t_ParamLimits

0xf950,	// (0x0005a800) ai_gene_pane_1_t

0xc244,	// (0x000570f4) scroll_sc2_left_pane_g1

0xc244,	// (0x000570f4) scroll_sc2_right_pane_g1

0x90c4,	// (0x00053f74) bg_popup_sub_pane_cp10

0xc24e,	// (0x000570fe) list_choice_list_pane

0xc265,	// (0x00057115) list_single_choice_list_pane_ParamLimits

0xc265,	// (0x00057115) list_single_choice_list_pane

0xc279,	// (0x00057129) list_single_choice_list_pane_g1

0xc281,	// (0x00057131) list_single_choice_list_pane_t1_ParamLimits

0xc281,	// (0x00057131) list_single_choice_list_pane_t1

0xc296,	// (0x00057146) choice_list_pane_g1

0xc29e,	// (0x0005714e) choice_list_pane_t1

0x727a,	// (0x0005212a) input_focus_pane_cp11

0x845a,	// (0x0005330a) title_pane_stacon_g2_ParamLimits

0x845a,	// (0x0005330a) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0005a5c2) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0005a5c2) title_pane_stacon_g

0x8d46,	// (0x00053bf6) cursor_press_pane

0x91a2,	// (0x00054052) popup_fep_hwr_window_ParamLimits

0x91a2,	// (0x00054052) popup_fep_hwr_window

0x922c,	// (0x000540dc) popup_fep_vkb_window_ParamLimits

0x922c,	// (0x000540dc) popup_fep_vkb_window

0xc2ac,	// (0x0005715c) cursor_press_pane_g1

0x0002,

0xfb59,	// (0x0005aa09) fep_vkb_side_pane_g_ParamLimits

0x65d6,	// (0x00051486) fep_hwr_candidate_pane_ParamLimits

0x65d6,	// (0x00051486) fep_hwr_candidate_pane

0x6600,	// (0x000514b0) fep_hwr_side_pane_ParamLimits

0x6600,	// (0x000514b0) fep_hwr_side_pane

0x6622,	// (0x000514d2) fep_hwr_top_pane_ParamLimits

0x6622,	// (0x000514d2) fep_hwr_top_pane

0x663a,	// (0x000514ea) fep_hwr_write_pane_ParamLimits

0x663a,	// (0x000514ea) fep_hwr_write_pane

0xfb59,	// (0x0005aa09) fep_vkb_side_pane_g

0xc2b4,	// (0x00057164) fep_hwr_top_pane_g1

0xc2c6,	// (0x00057176) fep_hwr_top_pane_g2

0x6674,	// (0x00051524) fep_hwr_top_pane_g3

0x0002,

0xfb35,	// (0x0005a9e5) fep_hwr_top_pane_g

0x6689,	// (0x00051539) fep_hwr_top_text_pane

0x874c,	// (0x000535fc) fep_hwr_top_text_pane_g1

0xc2fc,	// (0x000571ac) fep_hwr_top_text_pane_t1

0x6793,	// (0x00051643) fep_hwr_candidate_pane_g1

0xc555,	// (0x00057405) fep_vkb_keypad_pane_g3_ParamLimits

0xc555,	// (0x00057405) fep_vkb_keypad_pane_g3

0xc581,	// (0x00057431) fep_vkb_keypad_pane_g4_ParamLimits

0xc581,	// (0x00057431) fep_vkb_keypad_pane_g4

0xc5f8,	// (0x000574a8) fep_vkb_bottom_pane_g2_ParamLimits

0xc5f8,	// (0x000574a8) fep_vkb_bottom_pane_g2

0x0001,

0xfb60,	// (0x0005aa10) fep_vkb_bottom_pane_g_ParamLimits

0xfb60,	// (0x0005aa10) fep_vkb_bottom_pane_g

0xc244,	// (0x000570f4) cell_vkb_side_pane_g2

0x0001,

0xfb6a,	// (0x0005aa1a) cell_vkb_side_pane_g

0xc683,	// (0x00057533) cell_vkb_side_pane_t1

0xc691,	// (0x00057541) cell_vkb_side_pane_t1_copy1

0xc244,	// (0x000570f4) bg_fep_vkb_candidate_pane_g2

0xc7d5,	// (0x00057685) cell_vkb_candidate_pane_ParamLimits

0xc30a,	// (0x000571ba) aid_size_cell_vkb_ParamLimits

0xc30a,	// (0x000571ba) aid_size_cell_vkb

0xc7d5,	// (0x00057685) cell_vkb_candidate_pane

0x67ba,	// (0x0005166a) bg_popup_fep_shadow_pane_g1

0xc39c,	// (0x0005724c) fep_vkb_bottom_pane_ParamLimits

0xc39c,	// (0x0005724c) fep_vkb_bottom_pane

0xc3d9,	// (0x00057289) fep_vkb_candidate_pane_ParamLimits

0xc3d9,	// (0x00057289) fep_vkb_candidate_pane

0xc3f5,	// (0x000572a5) fep_vkb_keypad_pane_ParamLimits

0xc3f5,	// (0x000572a5) fep_vkb_keypad_pane

0xc428,	// (0x000572d8) fep_vkb_side_pane_ParamLimits

0xc428,	// (0x000572d8) fep_vkb_side_pane

0xc472,	// (0x00057322) fep_vkb_top_pane_ParamLimits

0xc472,	// (0x00057322) fep_vkb_top_pane

0xc4ae,	// (0x0005735e) fep_vkb_top_pane_g1_ParamLimits

0xc4ae,	// (0x0005735e) fep_vkb_top_pane_g1

0xc4bd,	// (0x0005736d) fep_vkb_top_pane_g2_ParamLimits

0xc4bd,	// (0x0005736d) fep_vkb_top_pane_g2

0xc4cc,	// (0x0005737c) fep_vkb_top_pane_g3_ParamLimits

0xc4cc,	// (0x0005737c) fep_vkb_top_pane_g3

0x0003,

0xfb50,	// (0x0005aa00) fep_vkb_top_pane_g_ParamLimits

0xfb50,	// (0x0005aa00) fep_vkb_top_pane_g

0xc4ea,	// (0x0005739a) fep_vkb_top_text_pane_ParamLimits

0xc4ea,	// (0x0005739a) fep_vkb_top_text_pane

0xc4fb,	// (0x000573ab) fep_vkb_side_pane_g1_ParamLimits

0xc4fb,	// (0x000573ab) fep_vkb_side_pane_g1

0xc544,	// (0x000573f4) grid_vkb_side_pane_ParamLimits

0xc544,	// (0x000573f4) grid_vkb_side_pane

0x67c2,	// (0x00051672) bg_popup_fep_shadow_pane_g2

0x67cb,	// (0x0005167b) bg_popup_fep_shadow_pane_g3

0x67d3,	// (0x00051683) bg_popup_fep_shadow_pane_g4

0x67dc,	// (0x0005168c) bg_popup_fep_shadow_pane_g5

0x67e6,	// (0x00051696) bg_popup_fep_shadow_pane_g6

0x67ee,	// (0x0005169e) bg_popup_fep_shadow_pane_g7

0x815b,	// (0x0005300b) bg_popup_fep_shadow_pane_g8

0xc5a3,	// (0x00057453) grid_vkb_keypad_number_pane_ParamLimits

0xc5a3,	// (0x00057453) grid_vkb_keypad_number_pane

0xc5b7,	// (0x00057467) grid_vkb_keypad_pane_ParamLimits

0xc5b7,	// (0x00057467) grid_vkb_keypad_pane

0xc5dd,	// (0x0005748d) fep_vkb_bottom_pane_g1_ParamLimits

0xc5dd,	// (0x0005748d) fep_vkb_bottom_pane_g1

0xc606,	// (0x000574b6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc606,	// (0x000574b6) grid_vkb_keypad_bottom_left_pane

0xc61b,	// (0x000574cb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc61b,	// (0x000574cb) grid_vkb_keypad_bottom_right_pane

0xc630,	// (0x000574e0) fep_vkb_top_text_pane_g1

0xc64b,	// (0x000574fb) fep_vkb_top_text_pane_t1

0xc660,	// (0x00057510) cell_vkb_side_pane_ParamLimits

0xc660,	// (0x00057510) cell_vkb_side_pane

0xc244,	// (0x000570f4) cell_vkb_side_pane_g1

0xc69f,	// (0x0005754f) cell_vkb_keypad_pane_ParamLimits

0xc69f,	// (0x0005754f) cell_vkb_keypad_pane

0xc72c,	// (0x000575dc) cell_vkb_keypad_pane_g1

0x0008,

0xfb7d,	// (0x0005aa2d) bg_popup_fep_shadow_pane_g

0x6800,	// (0x000516b0) cell_hwr_side_pane_g1

0x6800,	// (0x000516b0) cell_hwr_side_pane_g2

0xc736,	// (0x000575e6) cell_vkb_keypad_pane_t1

0xc744,	// (0x000575f4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc744,	// (0x000575f4) cell_vkb_keypad_bottom_left_pane

0xc761,	// (0x00057611) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc761,	// (0x00057611) cell_vkb_keypad_bottom_right_pane

0xc244,	// (0x000570f4) cell_vkb_keypad_bottom_left_pane_g1

0xc244,	// (0x000570f4) cell_vkb_keypad_bottom_right_pane_g1

0xc79a,	// (0x0005764a) cell_vkb_keypad_number_pane_ParamLimits

0xc79a,	// (0x0005764a) cell_vkb_keypad_number_pane

0xc7b9,	// (0x00057669) cell_vkb_keypad_number_pane_g1

0xc7c3,	// (0x00057673) cell_vkb_keypad_number_pane_g2

0xc7cc,	// (0x0005767c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6f,	// (0x0005aa1f) cell_vkb_keypad_number_pane_g

0xc736,	// (0x000575e6) cell_vkb_keypad_number_pane_t1

0xc7f6,	// (0x000576a6) fep_vkb_candidate_pane_g1

0x0001,

0xfb90,	// (0x0005aa40) cell_hwr_side_pane_g

0xc80f,	// (0x000576bf) cell_hwr_side_pane_t1

0x680a,	// (0x000516ba) cell_hwr_side_pane_t1_copy1

0x6818,	// (0x000516c8) cell_hwr_candidate_pane_g1

0x6847,	// (0x000516f7) cell_hwr_candidate_pane_t1

0xc244,	// (0x000570f4) cell_vkb_candidate_pane_g2

0xc853,	// (0x00057703) cell_vkb_candidate_pane_t1

0x659d,	// (0x0005144d) bg_popup_fep_shadow_pane_ParamLimits

0x659d,	// (0x0005144d) bg_popup_fep_shadow_pane

0x6654,	// (0x00051504) bg_fep_hwr_top_pane_g4

0xc2d8,	// (0x00057188) bg_hwr_side_pane_g1_ParamLimits

0xc2d8,	// (0x00057188) bg_hwr_side_pane_g1

0x66c7,	// (0x00051577) cell_hwr_side_pane_ParamLimits

0x66c7,	// (0x00051577) cell_hwr_side_pane

0x6704,	// (0x000515b4) fep_hwr_write_pane_g1_ParamLimits

0x6704,	// (0x000515b4) fep_hwr_write_pane_g1

0x6711,	// (0x000515c1) fep_hwr_write_pane_g2_ParamLimits

0x6711,	// (0x000515c1) fep_hwr_write_pane_g2

0x671e,	// (0x000515ce) fep_hwr_write_pane_g3_ParamLimits

0x671e,	// (0x000515ce) fep_hwr_write_pane_g3

0x672c,	// (0x000515dc) fep_hwr_write_pane_g4_ParamLimits

0x672c,	// (0x000515dc) fep_hwr_write_pane_g4

0x0005,

0xfb3c,	// (0x0005a9ec) fep_hwr_write_pane_g_ParamLimits

0xfb3c,	// (0x0005a9ec) fep_hwr_write_pane_g

0x6654,	// (0x00051504) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6654,	// (0x00051504) bg_fep_hwr_candidate_pane_g2

0x6741,	// (0x000515f1) cell_hwr_candidate_pane_ParamLimits

0x6741,	// (0x000515f1) cell_hwr_candidate_pane

0x6793,	// (0x00051643) fep_hwr_candidate_pane_g1_ParamLimits

0xc338,	// (0x000571e8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc338,	// (0x000571e8) bg_popup_fep_shadow_pane_cp2

0xc4dc,	// (0x0005738c) fep_vkb_top_pane_g4_ParamLimits

0xc4dc,	// (0x0005738c) fep_vkb_top_pane_g4

0xc522,	// (0x000573d2) fep_vkb_side_pane_g2_ParamLimits

0xc522,	// (0x000573d2) fep_vkb_side_pane_g2

0x547b,	// (0x0005032b) list_setting_pane_t4_ParamLimits

0x547b,	// (0x0005032b) list_setting_pane_t4

0x5517,	// (0x000503c7) list_setting_number_pane_t5_ParamLimits

0x5517,	// (0x000503c7) list_setting_number_pane_t5

0x878e,	// (0x0005363e) list_double_heading_pane_cp2_ParamLimits

0x878e,	// (0x0005363e) list_double_heading_pane_cp2

0x80f6,	// (0x00052fa6) list_double_heading_pane_g1_cp2_ParamLimits

0x80f6,	// (0x00052fa6) list_double_heading_pane_g1_cp2

0x8102,	// (0x00052fb2) list_double_heading_pane_g2_cp2_ParamLimits

0x8102,	// (0x00052fb2) list_double_heading_pane_g2_cp2

0xc861,	// (0x00057711) list_double_heading_pane_t1_cp2_ParamLimits

0xc861,	// (0x00057711) list_double_heading_pane_t1_cp2

0xc877,	// (0x00057727) list_double_heading_pane_t2_cp2_ParamLimits

0xc877,	// (0x00057727) list_double_heading_pane_t2_cp2

0x7262,	// (0x00052112) aid_value_unit2

0x4efc,	// (0x0004fdac) popup_preview_fixed_window

0x75f8,	// (0x000524a8) bg_popup_preview_window_pane_cp02

0xc889,	// (0x00057739) list_preview_fixed_pane

0xc8cf,	// (0x0005777f) list_empty_pane_fp_ParamLimits

0xc8cf,	// (0x0005777f) list_empty_pane_fp

0xc8cf,	// (0x0005777f) list_single_cale_day_pane_fp_ParamLimits

0xc8cf,	// (0x0005777f) list_single_cale_day_pane_fp

0xc8cf,	// (0x0005777f) list_single_graphic_heading_pane_fp_ParamLimits

0xc8cf,	// (0x0005777f) list_single_graphic_heading_pane_fp

0xc8cf,	// (0x0005777f) list_single_graphic_pane_fp_ParamLimits

0xc8cf,	// (0x0005777f) list_single_graphic_pane_fp

0xc8cf,	// (0x0005777f) list_single_heading_pane_fp_ParamLimits

0xc8cf,	// (0x0005777f) list_single_heading_pane_fp

0xc8cf,	// (0x0005777f) list_single_pane_fp_ParamLimits

0xc8cf,	// (0x0005777f) list_single_pane_fp

0xc8e8,	// (0x00057798) list_single_pane_fp_g1_ParamLimits

0xc8e8,	// (0x00057798) list_single_pane_fp_g1

0x799c,	// (0x0005284c) list_single_pane_fp_g2_ParamLimits

0x799c,	// (0x0005284c) list_single_pane_fp_g2

0x7a9a,	// (0x0005294a) list_single_pane_fp_g3_ParamLimits

0x7a9a,	// (0x0005294a) list_single_pane_fp_g3

0xc8f4,	// (0x000577a4) list_single_pane_fp_g4_ParamLimits

0xc8f4,	// (0x000577a4) list_single_pane_fp_g4

0x0003,

0xfba3,	// (0x0005aa53) list_single_pane_fp_g_ParamLimits

0xfba3,	// (0x0005aa53) list_single_pane_fp_g

0x7aae,	// (0x0005295e) list_single_pane_fp_t1_ParamLimits

0x7aae,	// (0x0005295e) list_single_pane_fp_t1

0x7ac5,	// (0x00052975) list_single_graphic_pane_fp_g1_ParamLimits

0x7ac5,	// (0x00052975) list_single_graphic_pane_fp_g1

0xc8e8,	// (0x00057798) list_single_graphic_pane_fp_g2_ParamLimits

0xc8e8,	// (0x00057798) list_single_graphic_pane_fp_g2

0x799c,	// (0x0005284c) list_single_graphic_pane_fp_g3_ParamLimits

0x799c,	// (0x0005284c) list_single_graphic_pane_fp_g3

0x7a9a,	// (0x0005294a) list_single_graphic_pane_fp_g4_ParamLimits

0x7a9a,	// (0x0005294a) list_single_graphic_pane_fp_g4

0xc8f4,	// (0x000577a4) list_single_graphic_pane_fp_g5_ParamLimits

0xc8f4,	// (0x000577a4) list_single_graphic_pane_fp_g5

0x0004,

0xfbac,	// (0x0005aa5c) list_single_graphic_pane_fp_g_ParamLimits

0xfbac,	// (0x0005aa5c) list_single_graphic_pane_fp_g

0x7ad1,	// (0x00052981) list_single_graphic_pane_fp_t1_ParamLimits

0x7ad1,	// (0x00052981) list_single_graphic_pane_fp_t1

0x7ac5,	// (0x00052975) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7ac5,	// (0x00052975) list_single_graphic_heading_pane_fp_g1

0xc8e8,	// (0x00057798) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8e8,	// (0x00057798) list_single_graphic_heading_pane_fp_g2

0x799c,	// (0x0005284c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x799c,	// (0x0005284c) list_single_graphic_heading_pane_fp_g3

0x7a9a,	// (0x0005294a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7a9a,	// (0x0005294a) list_single_graphic_heading_pane_fp_g4

0xc8f4,	// (0x000577a4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8f4,	// (0x000577a4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbac,	// (0x0005aa5c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0005aa5c) list_single_graphic_heading_pane_fp_g

0x7ae7,	// (0x00052997) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7ae7,	// (0x00052997) list_single_graphic_heading_pane_fp_t1

0x7afd,	// (0x000529ad) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7afd,	// (0x000529ad) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x0005aa67) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x0005aa67) list_single_graphic_heading_pane_fp_t

0x7b0f,	// (0x000529bf) list_single_cale_day_pane_fp_g1_ParamLimits

0x7b0f,	// (0x000529bf) list_single_cale_day_pane_fp_g1

0xc900,	// (0x000577b0) list_single_cale_day_pane_fp_g2_ParamLimits

0xc900,	// (0x000577b0) list_single_cale_day_pane_fp_g2

0x7b47,	// (0x000529f7) list_single_cale_day_pane_fp_g3_ParamLimits

0x7b47,	// (0x000529f7) list_single_cale_day_pane_fp_g3

0x7b6f,	// (0x00052a1f) list_single_cale_day_pane_fp_g4_ParamLimits

0x7b6f,	// (0x00052a1f) list_single_cale_day_pane_fp_g4

0x7b93,	// (0x00052a43) list_single_cale_day_pane_fp_g5_ParamLimits

0x7b93,	// (0x00052a43) list_single_cale_day_pane_fp_g5

0x0004,

0xfbbc,	// (0x0005aa6c) list_single_cale_day_pane_fp_g_ParamLimits

0xfbbc,	// (0x0005aa6c) list_single_cale_day_pane_fp_g

0x7bb7,	// (0x00052a67) list_single_cale_day_pane_fp_t1_ParamLimits

0x7bb7,	// (0x00052a67) list_single_cale_day_pane_fp_t1

0x7bdd,	// (0x00052a8d) list_single_cale_day_pane_fp_t2_ParamLimits

0x7bdd,	// (0x00052a8d) list_single_cale_day_pane_fp_t2

0x7bf6,	// (0x00052aa6) list_single_cale_day_pane_fp_t3_ParamLimits

0x7bf6,	// (0x00052aa6) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc7,	// (0x0005aa77) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc7,	// (0x0005aa77) list_single_cale_day_pane_fp_t

0xc8e8,	// (0x00057798) list_empty_pane_fp_g1_ParamLimits

0xc8e8,	// (0x00057798) list_empty_pane_fp_g1

0x7c0f,	// (0x00052abf) list_empty_pane_fp_t1

0x7c1d,	// (0x00052acd) list_empty_pane_fp_t2

0x0001,

0xfbce,	// (0x0005aa7e) list_empty_pane_fp_t

0xc8e8,	// (0x00057798) list_single_heading_pane_fp_g1_ParamLimits

0xc8e8,	// (0x00057798) list_single_heading_pane_fp_g1

0x799c,	// (0x0005284c) list_single_heading_pane_fp_g2_ParamLimits

0x799c,	// (0x0005284c) list_single_heading_pane_fp_g2

0x7a9a,	// (0x0005294a) list_single_heading_pane_fp_g3_ParamLimits

0x7a9a,	// (0x0005294a) list_single_heading_pane_fp_g3

0x0002,

0xfbd3,	// (0x0005aa83) list_single_heading_pane_fp_g_ParamLimits

0xfbd3,	// (0x0005aa83) list_single_heading_pane_fp_g

0x7c2b,	// (0x00052adb) list_single_heading_pane_fp_t1_ParamLimits

0x7c2b,	// (0x00052adb) list_single_heading_pane_fp_t1

0x7c3d,	// (0x00052aed) list_single_heading_pane_fp_t2_ParamLimits

0x7c3d,	// (0x00052aed) list_single_heading_pane_fp_t2

0x0001,

0xfbda,	// (0x0005aa8a) list_single_heading_pane_fp_t_ParamLimits

0xfbda,	// (0x0005aa8a) list_single_heading_pane_fp_t

0x82f1,	// (0x000531a1) aid_size_cell_fast

0x756a,	// (0x0005241a) soft_indicator_pane_cp1_t1

0x832e,	// (0x000531de) cell_app_pane_cp2_ParamLimits

0x832e,	// (0x000531de) cell_app_pane_cp2

0x65bf,	// (0x0005146f) fep_hwr_candidate_drop_down_list_pane

0x67ad,	// (0x0005165d) fep_hwr_candidate_pane_g3_ParamLimits

0x67ad,	// (0x0005165d) fep_hwr_candidate_pane_g3

0x3999,	// (0x0004e849) fep_hwr_candidate_pane_g4_ParamLimits

0x3999,	// (0x0004e849) fep_hwr_candidate_pane_g4

0x0002,

0xfb49,	// (0x0005a9f9) fep_hwr_candidate_pane_g_ParamLimits

0xfb49,	// (0x0005a9f9) fep_hwr_candidate_pane_g

0xc3c8,	// (0x00057278) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3c8,	// (0x00057278) fep_vkb_candidate_drop_down_list_pane

0xc7fe,	// (0x000576ae) fep_vkb_candidate_pane_g3

0xc806,	// (0x000576b6) fep_vkb_candidate_pane_g4

0x0002,

0xfb76,	// (0x0005aa26) fep_vkb_candidate_pane_g

0x6818,	// (0x000516c8) cell_hwr_candidate_pane_g1_ParamLimits

0x6826,	// (0x000516d6) cell_hwr_candidate_pane_g3_ParamLimits

0x6826,	// (0x000516d6) cell_hwr_candidate_pane_g3

0xdc13,	// (0x00058ac3) cell_hwr_candidate_pane_g4_ParamLimits

0xdc13,	// (0x00058ac3) cell_hwr_candidate_pane_g4

0x0002,

0xfb95,	// (0x0005aa45) cell_hwr_candidate_pane_g_ParamLimits

0xfb95,	// (0x0005aa45) cell_hwr_candidate_pane_g

0xc81d,	// (0x000576cd) cell_vkb_candidate_pane_g3_ParamLimits

0xc81d,	// (0x000576cd) cell_vkb_candidate_pane_g3

0xc838,	// (0x000576e8) cell_vkb_candidate_pane_g4_ParamLimits

0xc838,	// (0x000576e8) cell_vkb_candidate_pane_g4

0xc90c,	// (0x000577bc) cell_app_pane_cp2_g1_ParamLimits

0xc90c,	// (0x000577bc) cell_app_pane_cp2_g1

0xc92a,	// (0x000577da) cell_app_pane_cp2_g2_ParamLimits

0xc92a,	// (0x000577da) cell_app_pane_cp2_g2

0x0001,

0xfbdf,	// (0x0005aa8f) cell_app_pane_cp2_g_ParamLimits

0xfbdf,	// (0x0005aa8f) cell_app_pane_cp2_g

0xc936,	// (0x000577e6) cell_app_pane_cp2_t1_ParamLimits

0xc936,	// (0x000577e6) cell_app_pane_cp2_t1

0x80dc,	// (0x00052f8c) grid_highlight_pane_cp1_ParamLimits

0x80dc,	// (0x00052f8c) grid_highlight_pane_cp1

0x6865,	// (0x00051715) cell_hwr_candidate_pane_cp1_ParamLimits

0x6865,	// (0x00051715) cell_hwr_candidate_pane_cp1

0x6818,	// (0x000516c8) fep_hwr_candidate_drop_down_list_pane_g1

0x6889,	// (0x00051739) fep_hwr_candidate_drop_down_list_pane_g2

0x6896,	// (0x00051746) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe4,	// (0x0005aa94) fep_hwr_candidate_drop_down_list_pane_g

0x68a3,	// (0x00051753) fep_hwr_candidate_drop_down_list_scroll_pane

0x68ac,	// (0x0005175c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x68ac,	// (0x0005175c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x68b9,	// (0x00051769) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x68b9,	// (0x00051769) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x68c6,	// (0x00051776) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x68c6,	// (0x00051776) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x68d3,	// (0x00051783) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x68d3,	// (0x00051783) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x68ee,	// (0x0005179e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x68ee,	// (0x0005179e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6909,	// (0x000517b9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6909,	// (0x000517b9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6924,	// (0x000517d4) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6924,	// (0x000517d4) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x693f,	// (0x000517ef) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x693f,	// (0x000517ef) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbeb,	// (0x0005aa9b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbeb,	// (0x0005aa9b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc948,	// (0x000577f8) cell_vkb_candidate_pane_cp1_ParamLimits

0xc948,	// (0x000577f8) cell_vkb_candidate_pane_cp1

0xc4dc,	// (0x0005738c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4dc,	// (0x0005738c) fep_vkb_candidate_drop_down_list_pane_g1

0xc96e,	// (0x0005781e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc96e,	// (0x0005781e) fep_vkb_candidate_drop_down_list_pane_g2

0xc97b,	// (0x0005782b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc97b,	// (0x0005782b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbfc,	// (0x0005aaac) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbfc,	// (0x0005aaac) fep_vkb_candidate_drop_down_list_pane_g

0xc988,	// (0x00057838) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc988,	// (0x00057838) fep_vkb_candidate_drop_down_list_scroll_pane

0xc995,	// (0x00057845) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc995,	// (0x00057845) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9a2,	// (0x00057852) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9a2,	// (0x00057852) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9ae,	// (0x0005785e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9ae,	// (0x0005785e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9ba,	// (0x0005786a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9ba,	// (0x0005786a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9db,	// (0x0005788b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9db,	// (0x0005788b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9fc,	// (0x000578ac) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9fc,	// (0x000578ac) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca1d,	// (0x000578cd) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca1d,	// (0x000578cd) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca3e,	// (0x000578ee) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca3e,	// (0x000578ee) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc03,	// (0x0005aab3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc03,	// (0x0005aab3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7298,	// (0x00052148) title_pane_g1_ParamLimits

0x72a5,	// (0x00052155) title_pane_g2_ParamLimits

0xf592,	// (0x0005a442) title_pane_g_ParamLimits

0x873c,	// (0x000535ec) aid_call2_pane

0x8744,	// (0x000535f4) aid_call_pane

0x874c,	// (0x000535fc) popup_clock_analogue_window_g1

0x874c,	// (0x000535fc) popup_clock_analogue_window_g2

0x595e,	// (0x0005080e) popup_clock_analogue_window_g3

0x5967,	// (0x00050817) popup_clock_analogue_window_g4

0x7284,	// (0x00052134) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0005a5f1) popup_clock_analogue_window_g

0x596f,	// (0x0005081f) popup_clock_analogue_window_t1

0x597d,	// (0x0005082d) clock_digital_number_pane_ParamLimits

0x597d,	// (0x0005082d) clock_digital_number_pane

0x5989,	// (0x00050839) clock_digital_number_pane_cp02_ParamLimits

0x5989,	// (0x00050839) clock_digital_number_pane_cp02

0x5995,	// (0x00050845) clock_digital_number_pane_cp03_ParamLimits

0x5995,	// (0x00050845) clock_digital_number_pane_cp03

0x59a1,	// (0x00050851) clock_digital_number_pane_cp04_ParamLimits

0x59a1,	// (0x00050851) clock_digital_number_pane_cp04

0x59ad,	// (0x0005085d) clock_digital_separator_pane_ParamLimits

0x59ad,	// (0x0005085d) clock_digital_separator_pane

0x59b9,	// (0x00050869) popup_clock_digital_window_t1_ParamLimits

0x59b9,	// (0x00050869) popup_clock_digital_window_t1

0x7284,	// (0x00052134) clock_digital_number_pane_g1

0x7284,	// (0x00052134) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0005a5fc) clock_digital_number_pane_g

0x7284,	// (0x00052134) clock_digital_separator_pane_g1

0x7284,	// (0x00052134) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0005a5fc) clock_digital_separator_pane_g

0x96f7,	// (0x000545a7) aid_fill_nsta_ParamLimits

0x9847,	// (0x000546f7) indicator_nsta_pane_ParamLimits

0x99d7,	// (0x00054887) popup_clock_analogue_window

0x99d7,	// (0x00054887) popup_clock_digital_window

0x736e,	// (0x0005221e) grid_indicator_nsta_pane_ParamLimits

0xbc9b,	// (0x00056b4b) clock_nsta_pane_t2

0x0001,

0xfad6,	// (0x0005a986) clock_nsta_pane_t

0x5922,	// (0x000507d2) aid_size_max_handle

0x592c,	// (0x000507dc) aid_size_min_handle

0x8d46,	// (0x00053bf6) editor_scroll_pane

0xca59,	// (0x00057909) ex_editor_pane

0x825e,	// (0x0005310e) scroll_pane_cp13

0x807b,	// (0x00052f2b) scroll_pane_cp14

0x8776,	// (0x00053626) scroll_pane_cp36

0x87a4,	// (0x00053654) list_single_graphic_hl_pane_cp2_ParamLimits

0x87a4,	// (0x00053654) list_single_graphic_hl_pane_cp2

0x79fc,	// (0x000528ac) list_single_graphic_hl_pane_ParamLimits

0x79fc,	// (0x000528ac) list_single_graphic_hl_pane

0x7c53,	// (0x00052b03) aid_size_min_hl_cp1

0xca61,	// (0x00057911) list_highlight_pane_cp34_ParamLimits

0xca61,	// (0x00057911) list_highlight_pane_cp34

0xca72,	// (0x00057922) list_single_graphic_hl_pane_g1_ParamLimits

0xca72,	// (0x00057922) list_single_graphic_hl_pane_g1

0x7c5c,	// (0x00052b0c) list_single_graphic_hl_pane_g2_ParamLimits

0x7c5c,	// (0x00052b0c) list_single_graphic_hl_pane_g2

0x7c5c,	// (0x00052b0c) list_single_graphic_hl_pane_g3_ParamLimits

0x7c5c,	// (0x00052b0c) list_single_graphic_hl_pane_g3

0x7a28,	// (0x000528d8) list_single_graphic_hl_pane_g4_ParamLimits

0x7a28,	// (0x000528d8) list_single_graphic_hl_pane_g4

0x7c68,	// (0x00052b18) list_single_graphic_hl_pane_g5_ParamLimits

0x7c68,	// (0x00052b18) list_single_graphic_hl_pane_g5

0x0004,

0xfc14,	// (0x0005aac4) list_single_graphic_hl_pane_g_ParamLimits

0xfc14,	// (0x0005aac4) list_single_graphic_hl_pane_g

0x7c7c,	// (0x00052b2c) list_single_graphic_hl_pane_t1_ParamLimits

0x7c7c,	// (0x00052b2c) list_single_graphic_hl_pane_t1

0xca7f,	// (0x0005792f) aid_size_min_hl_cp2

0xca88,	// (0x00057938) list_highlight_pane_cp34_cp2_ParamLimits

0xca88,	// (0x00057938) list_highlight_pane_cp34_cp2

0xca72,	// (0x00057922) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca72,	// (0x00057922) list_single_graphic_hl_pane_g1_cp2

0xca95,	// (0x00057945) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca95,	// (0x00057945) list_single_graphic_hl_pane_g2_cp2

0xcaa1,	// (0x00057951) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcaa1,	// (0x00057951) list_single_graphic_hl_pane_g3_cp2

0x89c4,	// (0x00053874) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x89c4,	// (0x00053874) list_single_graphic_hl_pane_g4_cp2

0xcaaf,	// (0x0005795f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcaaf,	// (0x0005795f) list_single_graphic_hl_pane_g5_cp2

0x5ce0,	// (0x00050b90) control_pane_g4_ParamLimits

0x5ce0,	// (0x00050b90) control_pane_g4

0x90c4,	// (0x00053f74) bg_popup_sub_pane_cp10_ParamLimits

0xc24e,	// (0x000570fe) list_choice_list_pane_ParamLimits

0xc25d,	// (0x0005710d) scroll_pane_cp23

0x75f8,	// (0x000524a8) bg_popup_preview_window_pane_cp02_ParamLimits

0xc889,	// (0x00057739) list_preview_fixed_pane_ParamLimits

0xc89f,	// (0x0005774f) list_preview_fixed_pane_cp_ParamLimits

0xc89f,	// (0x0005774f) list_preview_fixed_pane_cp

0xc8ab,	// (0x0005775b) popup_preview_fixed_window_g1_ParamLimits

0xc8ab,	// (0x0005775b) popup_preview_fixed_window_g1

0xc8b7,	// (0x00057767) popup_preview_fixed_window_g2_ParamLimits

0xc8b7,	// (0x00057767) popup_preview_fixed_window_g2

0x0002,

0xfb9c,	// (0x0005aa4c) popup_preview_fixed_window_g_ParamLimits

0xfb9c,	// (0x0005aa4c) popup_preview_fixed_window_g

0x5894,	// (0x00050744) aid_navi_side_left_pane_ParamLimits

0x58a9,	// (0x00050759) aid_navi_side_right_pane_ParamLimits

0x58c1,	// (0x00050771) navi_icon_pane_stacon_ParamLimits

0x58d5,	// (0x00050785) navi_navi_pane_stacon_ParamLimits

0x58c1,	// (0x00050771) navi_text_pane_stacon_ParamLimits

0x727a,	// (0x0005212a) main_text_info_pane

0xcad9,	// (0x00057989) listscroll_text_info_pane

0xcae1,	// (0x00057991) list_text_info_pane_ParamLimits

0xcae1,	// (0x00057991) list_text_info_pane

0xcaf0,	// (0x000579a0) scroll_pane_cp24_ParamLimits

0xcaf0,	// (0x000579a0) scroll_pane_cp24

0xcb0e,	// (0x000579be) list_text_info_pane_t1_ParamLimits

0xcb0e,	// (0x000579be) list_text_info_pane_t1

0x910a,	// (0x00053fba) popup_fast_swap2_window_ParamLimits

0x910a,	// (0x00053fba) popup_fast_swap2_window

0xcb33,	// (0x000579e3) aid_size_cell_fast2

0x727a,	// (0x0005212a) bg_popup_window_pane_cp17

0xa08a,	// (0x00054f3a) heading_pane_cp2

0x7858,	// (0x00052708) listscroll_fast2_pane

0xcb3d,	// (0x000579ed) grid_fast2_pane

0xcb47,	// (0x000579f7) listscroll_fast2_pane_g1

0xcb51,	// (0x00057a01) listscroll_fast2_pane_g2

0x0001,

0xfc1f,	// (0x0005aacf) listscroll_fast2_pane_g

0x825e,	// (0x0005310e) scroll_pane_cp26

0xcb5b,	// (0x00057a0b) cell_fast2_pane_ParamLimits

0xcb5b,	// (0x00057a0b) cell_fast2_pane

0xcb72,	// (0x00057a22) cell_fast2_pane_g1

0xcb7b,	// (0x00057a2b) cell_fast2_pane_g2

0xcb84,	// (0x00057a34) cell_fast2_pane_g3

0x0002,

0xfc24,	// (0x0005aad4) cell_fast2_pane_g

0x7e38,	// (0x00052ce8) grid_highlight_pane_cp9

0x7e4d,	// (0x00052cfd) main_eswt_pane_ParamLimits

0x7e4d,	// (0x00052cfd) main_eswt_pane

0xcb05,	// (0x000579b5) list_single_text_info_pane

0xcb8c,	// (0x00057a3c) eswt_ctrl_button_pane

0xcb8c,	// (0x00057a3c) eswt_ctrl_canvas_pane

0xcb94,	// (0x00057a44) eswt_ctrl_combo_pane

0xcb8c,	// (0x00057a3c) eswt_ctrl_default_pane

0xcb8c,	// (0x00057a3c) eswt_ctrl_label_pane

0xcb9c,	// (0x00057a4c) eswt_ctrl_wait_pane

0xcba4,	// (0x00057a54) eswt_shell_pane

0x727a,	// (0x0005212a) listscroll_eswt_app_pane

0xcbc4,	// (0x00057a74) popup_eswt_tasktip_window_ParamLimits

0xcbc4,	// (0x00057a74) popup_eswt_tasktip_window

0x9cf2,	// (0x00054ba2) bg_popup_window_pane_cp18

0xcbd5,	// (0x00057a85) eswt_control_pane_g1_ParamLimits

0xcbd5,	// (0x00057a85) eswt_control_pane_g1

0xcbe2,	// (0x00057a92) eswt_control_pane_g2_ParamLimits

0xcbe2,	// (0x00057a92) eswt_control_pane_g2

0xcbef,	// (0x00057a9f) eswt_control_pane_g3_ParamLimits

0xcbef,	// (0x00057a9f) eswt_control_pane_g3

0xcbfc,	// (0x00057aac) eswt_control_pane_g4_ParamLimits

0xcbfc,	// (0x00057aac) eswt_control_pane_g4

0x0003,

0xfc2b,	// (0x0005aadb) eswt_control_pane_g_ParamLimits

0xfc2b,	// (0x0005aadb) eswt_control_pane_g

0x80dc,	// (0x00052f8c) bg_button_pane_ParamLimits

0x80dc,	// (0x00052f8c) bg_button_pane

0x7e4d,	// (0x00052cfd) common_borders_pane_copy2_ParamLimits

0x7e4d,	// (0x00052cfd) common_borders_pane_copy2

0xcc09,	// (0x00057ab9) control_button_pane_g1_ParamLimits

0xcc09,	// (0x00057ab9) control_button_pane_g1

0xcc15,	// (0x00057ac5) control_button_pane_g2_ParamLimits

0xcc15,	// (0x00057ac5) control_button_pane_g2

0xcc21,	// (0x00057ad1) control_button_pane_g3_ParamLimits

0xcc21,	// (0x00057ad1) control_button_pane_g3

0x0002,

0xfc34,	// (0x0005aae4) control_button_pane_g_ParamLimits

0xfc34,	// (0x0005aae4) control_button_pane_g

0xcc35,	// (0x00057ae5) control_button_pane_t1

0xcc43,	// (0x00057af3) control_button_pane_t2

0x0001,

0xfc3b,	// (0x0005aaeb) control_button_pane_t

0x9c00,	// (0x00054ab0) bg_button_pane_g1

0x9c10,	// (0x00054ac0) bg_button_pane_g2

0x9c08,	// (0x00054ab8) bg_button_pane_g3

0x9c20,	// (0x00054ad0) bg_button_pane_g4

0x9c18,	// (0x00054ac8) bg_button_pane_g5

0x9c28,	// (0x00054ad8) bg_button_pane_g6

0x9c30,	// (0x00054ae0) bg_button_pane_g7

0x9c40,	// (0x00054af0) bg_button_pane_g8

0x9c38,	// (0x00054ae8) bg_button_pane_g9

0x0008,

0xf8a4,	// (0x0005a754) bg_button_pane_g

0xc209,	// (0x000570b9) common_borders_pane_ParamLimits

0xc209,	// (0x000570b9) common_borders_pane

0xcbd5,	// (0x00057a85) eswt_control_pane_g1_copy1_ParamLimits

0xcbd5,	// (0x00057a85) eswt_control_pane_g1_copy1

0xcbe2,	// (0x00057a92) eswt_control_pane_g2_copy1_ParamLimits

0xcbe2,	// (0x00057a92) eswt_control_pane_g2_copy1

0xcbef,	// (0x00057a9f) eswt_control_pane_g3_copy1_ParamLimits

0xcbef,	// (0x00057a9f) eswt_control_pane_g3_copy1

0xcbfc,	// (0x00057aac) eswt_control_pane_g4_copy1_ParamLimits

0xcbfc,	// (0x00057aac) eswt_control_pane_g4_copy1

0xc244,	// (0x000570f4) bg_eswt_ctrl_canvas_pane_g1

0xc209,	// (0x000570b9) common_borders_pane_cp2_ParamLimits

0xc209,	// (0x000570b9) common_borders_pane_cp2

0xc209,	// (0x000570b9) common_borders_pane_cp3_ParamLimits

0xc209,	// (0x000570b9) common_borders_pane_cp3

0xcc51,	// (0x00057b01) separator_horizontal_pane

0xcc59,	// (0x00057b09) separator_vertical_pane

0xcbd5,	// (0x00057a85) eswt_control_pane_g1_copy2_ParamLimits

0xcbd5,	// (0x00057a85) eswt_control_pane_g1_copy2

0xcbe2,	// (0x00057a92) eswt_control_pane_g2_copy2_ParamLimits

0xcbe2,	// (0x00057a92) eswt_control_pane_g2_copy2

0xcbef,	// (0x00057a9f) eswt_control_pane_g3_copy2_ParamLimits

0xcbef,	// (0x00057a9f) eswt_control_pane_g3_copy2

0xcbfc,	// (0x00057aac) eswt_control_pane_g4_copy2_ParamLimits

0xcbfc,	// (0x00057aac) eswt_control_pane_g4_copy2

0x727a,	// (0x0005212a) common_borders_pane_cp4

0xcc62,	// (0x00057b12) separator_horizontal_pane_g1

0xcc6b,	// (0x00057b1b) separator_horizontal_pane_g2

0xcc74,	// (0x00057b24) separator_horizontal_pane_g3

0x0002,

0xfc40,	// (0x0005aaf0) separator_horizontal_pane_g

0xcbd5,	// (0x00057a85) eswt_control_pane_g1_copy3_ParamLimits

0xcbd5,	// (0x00057a85) eswt_control_pane_g1_copy3

0xcbe2,	// (0x00057a92) eswt_control_pane_g2_copy3_ParamLimits

0xcbe2,	// (0x00057a92) eswt_control_pane_g2_copy3

0xcbef,	// (0x00057a9f) eswt_control_pane_g3_copy3_ParamLimits

0xcbef,	// (0x00057a9f) eswt_control_pane_g3_copy3

0xcbfc,	// (0x00057aac) eswt_control_pane_g4_copy3_ParamLimits

0xcbfc,	// (0x00057aac) eswt_control_pane_g4_copy3

0x727a,	// (0x0005212a) common_borders_pane_cp5

0xcc7d,	// (0x00057b2d) separator_vertical_pane_g1

0xcc86,	// (0x00057b36) separator_vertical_pane_g2

0xcc8f,	// (0x00057b3f) separator_vertical_pane_g3

0x0002,

0xfc47,	// (0x0005aaf7) separator_vertical_pane_g

0xcbd5,	// (0x00057a85) eswt_control_pane_g1_copy4_ParamLimits

0xcbd5,	// (0x00057a85) eswt_control_pane_g1_copy4

0xcbe2,	// (0x00057a92) eswt_control_pane_g2_copy4_ParamLimits

0xcbe2,	// (0x00057a92) eswt_control_pane_g2_copy4

0xcbef,	// (0x00057a9f) eswt_control_pane_g3_copy4_ParamLimits

0xcbef,	// (0x00057a9f) eswt_control_pane_g3_copy4

0xcbfc,	// (0x00057aac) eswt_control_pane_g4_copy4_ParamLimits

0xcbfc,	// (0x00057aac) eswt_control_pane_g4_copy4

0xcc98,	// (0x00057b48) eswt_ctrl_combo_button_pane

0xcca0,	// (0x00057b50) eswt_ctrl_input_pane

0xcca8,	// (0x00057b58) popup_choice_list_window_cp70

0xccb0,	// (0x00057b60) eswt_ctrl_input_pane_t1

0x727a,	// (0x0005212a) input_focus_pane_cp70

0xc209,	// (0x000570b9) bg_button_pane_cp70_ParamLimits

0xc209,	// (0x000570b9) bg_button_pane_cp70

0xccbe,	// (0x00057b6e) eswt_ctrl_combo_button_pane_g1

0xccc6,	// (0x00057b76) wait_bar_pane_cp70

0x9cf2,	// (0x00054ba2) bg_popup_window_pane_cp70_ParamLimits

0x9cf2,	// (0x00054ba2) bg_popup_window_pane_cp70

0xccce,	// (0x00057b7e) popup_eswt_tasktip_window_t1

0xcce4,	// (0x00057b94) wait_bar_pane_cp71_ParamLimits

0xcce4,	// (0x00057b94) wait_bar_pane_cp71

0xccf0,	// (0x00057ba0) grid_eswt_app_pane

0x8580,	// (0x00053430) scroll_pane_cp70

0xccf9,	// (0x00057ba9) cell_eswt_app_pane_ParamLimits

0xccf9,	// (0x00057ba9) cell_eswt_app_pane

0xcd2b,	// (0x00057bdb) cell_eswt_app_pane_g1_ParamLimits

0xcd2b,	// (0x00057bdb) cell_eswt_app_pane_g1

0xcd5a,	// (0x00057c0a) cell_eswt_app_pane_g2_ParamLimits

0xcd5a,	// (0x00057c0a) cell_eswt_app_pane_g2

0x0001,

0xfc4e,	// (0x0005aafe) cell_eswt_app_pane_g_ParamLimits

0xfc4e,	// (0x0005aafe) cell_eswt_app_pane_g

0xcd83,	// (0x00057c33) cell_eswt_app_pane_t1_ParamLimits

0xcd83,	// (0x00057c33) cell_eswt_app_pane_t1

0xcdb5,	// (0x00057c65) grid_highlight_pane_cp70_ParamLimits

0xcdb5,	// (0x00057c65) grid_highlight_pane_cp70

0xb152,	// (0x00056002) set_content_pane_g1

0x8ff6,	// (0x00053ea6) status_small_volume_pane

0x695a,	// (0x0005180a) status_small_volume_pane_g1

0x6962,	// (0x00051812) volume_small2_pane

0x696b,	// (0x0005181b) volume_small2_pane_g1

0x6974,	// (0x00051824) volume_small2_pane_g2

0x697d,	// (0x0005182d) volume_small2_pane_g3

0x6986,	// (0x00051836) volume_small2_pane_g4

0x698f,	// (0x0005183f) volume_small2_pane_g5

0x6998,	// (0x00051848) volume_small2_pane_g6

0x69a1,	// (0x00051851) volume_small2_pane_g7

0x69aa,	// (0x0005185a) volume_small2_pane_g8

0x69b3,	// (0x00051863) volume_small2_pane_g9

0x69bc,	// (0x0005186c) volume_small2_pane_g10

0x0009,

0xfc53,	// (0x0005ab03) volume_small2_pane_g

0xc630,	// (0x000574e0) fep_vkb_top_text_pane_g1_ParamLimits

0xc64b,	// (0x000574fb) fep_vkb_top_text_pane_t1_ParamLimits

0xc8c3,	// (0x00057773) popup_preview_fixed_window_g3_ParamLimits

0xc8c3,	// (0x00057773) popup_preview_fixed_window_g3

0x961b,	// (0x000544cb) popup_toolbar_trans_pane

0xaff7,	// (0x00055ea7) aid_height_set_list_ParamLimits

0xb008,	// (0x00055eb8) aid_size_parent_ParamLimits

0x90c4,	// (0x00053f74) list_highlight_pane_cp2_ParamLimits

0xb152,	// (0x00056002) set_content_pane_g1_ParamLimits

0xb25b,	// (0x0005610b) list_single_image_pane_ParamLimits

0xb25b,	// (0x0005610b) list_single_image_pane

0xcdc1,	// (0x00057c71) aid_size_cell_image_ParamLimits

0xcdc1,	// (0x00057c71) aid_size_cell_image

0xcdce,	// (0x00057c7e) grid_single_image_pane_ParamLimits

0xcdce,	// (0x00057c7e) grid_single_image_pane

0x80f6,	// (0x00052fa6) list_single_image_pane_g1_ParamLimits

0x80f6,	// (0x00052fa6) list_single_image_pane_g1

0x8102,	// (0x00052fb2) list_single_image_pane_g2_ParamLimits

0x8102,	// (0x00052fb2) list_single_image_pane_g2

0x0001,

0xfc68,	// (0x0005ab18) list_single_image_pane_g_ParamLimits

0xfc68,	// (0x0005ab18) list_single_image_pane_g

0xcddc,	// (0x00057c8c) list_single_image_pane_t1_ParamLimits

0xcddc,	// (0x00057c8c) list_single_image_pane_t1

0xcdf2,	// (0x00057ca2) cell_image_list_pane_ParamLimits

0xcdf2,	// (0x00057ca2) cell_image_list_pane

0xce08,	// (0x00057cb8) cell_image_list_pane_g1

0xce11,	// (0x00057cc1) cell_image_list_pane_g2

0x0001,

0xfc6d,	// (0x0005ab1d) cell_image_list_pane_g

0xce1a,	// (0x00057cca) aid_size_cell_tb_trans_pane

0x80dc,	// (0x00052f8c) bg_tb_trans_pane

0xce2c,	// (0x00057cdc) grid_tb_trans_pane

0x9c00,	// (0x00054ab0) bg_tb_trans_pane_g1

0x9c10,	// (0x00054ac0) bg_tb_trans_pane_g2

0x9c08,	// (0x00054ab8) bg_tb_trans_pane_g3

0x9c20,	// (0x00054ad0) bg_tb_trans_pane_g4

0x9c18,	// (0x00054ac8) bg_tb_trans_pane_g5

0x9c40,	// (0x00054af0) bg_tb_trans_pane_g6

0x9c38,	// (0x00054ae8) bg_tb_trans_pane_g7

0x9c28,	// (0x00054ad8) bg_tb_trans_pane_g8

0x9c30,	// (0x00054ae0) bg_tb_trans_pane_g9

0x0008,

0xfc72,	// (0x0005ab22) bg_tb_trans_pane_g

0xce40,	// (0x00057cf0) cell_toolbar_trans_pane_ParamLimits

0xce40,	// (0x00057cf0) cell_toolbar_trans_pane

0xc244,	// (0x000570f4) cell_toolbar_trans_pane_g1

0xbe65,	// (0x00056d15) list_form2_midp_pane_t1

0xbe73,	// (0x00056d23) list_form2_midp_pane_t2

0x0001,

0xfb0f,	// (0x0005a9bf) list_form2_midp_pane_t

0xbe81,	// (0x00056d31) scroll_pane_cp51_ParamLimits

0xc048,	// (0x00056ef8) form2_midp_wait_pane_g1

0xc051,	// (0x00056f01) form2_midp_wait_pane_g2

0xc05a,	// (0x00056f0a) form2_midp_wait_pane_g3

0x0002,

0xfb24,	// (0x0005a9d4) form2_midp_wait_pane_g

0x736e,	// (0x0005221e) list_highlight_pane_cp21_ParamLimits

0xc09e,	// (0x00056f4e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0ad,	// (0x00056f5d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb214,	// (0x000560c4) list_single_2graphic_im_pane_ParamLimits

0xb214,	// (0x000560c4) list_single_2graphic_im_pane

0xce66,	// (0x00057d16) list_single_2graphic_im_pane_g1_ParamLimits

0xce66,	// (0x00057d16) list_single_2graphic_im_pane_g1

0xce77,	// (0x00057d27) list_single_2graphic_im_pane_g2_ParamLimits

0xce77,	// (0x00057d27) list_single_2graphic_im_pane_g2

0xce83,	// (0x00057d33) list_single_2graphic_im_pane_g3_ParamLimits

0xce83,	// (0x00057d33) list_single_2graphic_im_pane_g3

0x0003,

0xfc85,	// (0x0005ab35) list_single_2graphic_im_pane_g_ParamLimits

0xfc85,	// (0x0005ab35) list_single_2graphic_im_pane_g

0xcea3,	// (0x00057d53) list_single_2graphic_im_pane_t1_ParamLimits

0xcea3,	// (0x00057d53) list_single_2graphic_im_pane_t1

0xc8cf,	// (0x0005777f) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8cf,	// (0x0005777f) list_single_graphic_2heading_pane_fp

0x7ac5,	// (0x00052975) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7ac5,	// (0x00052975) list_single_graphic_2heading_pane_fp_g1

0xc8e8,	// (0x00057798) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8e8,	// (0x00057798) list_single_graphic_2heading_pane_fp_g2

0x799c,	// (0x0005284c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x799c,	// (0x0005284c) list_single_graphic_2heading_pane_fp_g3

0x7a9a,	// (0x0005294a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7a9a,	// (0x0005294a) list_single_graphic_2heading_pane_fp_g4

0xc8f4,	// (0x000577a4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8f4,	// (0x000577a4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbac,	// (0x0005aa5c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0005aa5c) list_single_graphic_2heading_pane_fp_g

0x7c92,	// (0x00052b42) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7c92,	// (0x00052b42) list_single_graphic_2heading_pane_fp_t1

0x7afd,	// (0x000529ad) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7afd,	// (0x000529ad) list_single_graphic_2heading_pane_fp_t2

0x7ca8,	// (0x00052b58) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7ca8,	// (0x00052b58) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8e,	// (0x0005ab3e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8e,	// (0x0005ab3e) list_single_graphic_2heading_pane_fp_t

0xc2e4,	// (0x00057194) fep_hwr_write_pane_g5_ParamLimits

0xc2e4,	// (0x00057194) fep_hwr_write_pane_g5

0xc2f0,	// (0x000571a0) fep_hwr_write_pane_g6_ParamLimits

0xc2f0,	// (0x000571a0) fep_hwr_write_pane_g6

0xcba4,	// (0x00057a54) eswt_shell_pane_ParamLimits

0x9cf2,	// (0x00054ba2) bg_popup_window_pane_cp18_ParamLimits

0xaf4e,	// (0x00055dfe) heading_pane_cp70

0xccce,	// (0x00057b7e) popup_eswt_tasktip_window_t1_ParamLimits

0x974e,	// (0x000545fe) aid_touch_tab_arrow_left

0x975d,	// (0x0005460d) aid_touch_tab_arrow_right

0x72b6,	// (0x00052166) title_pane_g3_ParamLimits

0x72b6,	// (0x00052166) title_pane_g3

0x809b,	// (0x00052f4b) set_value_pane_g1

0x961b,	// (0x000544cb) popup_toolbar_trans_pane_ParamLimits

0xce1a,	// (0x00057cca) aid_size_cell_tb_trans_pane_ParamLimits

0x80dc,	// (0x00052f8c) bg_tb_trans_pane_ParamLimits

0xce2c,	// (0x00057cdc) grid_tb_trans_pane_ParamLimits

0x75f8,	// (0x000524a8) cont_note_pane_ParamLimits

0x75f8,	// (0x000524a8) cont_note_pane

0x7e4d,	// (0x00052cfd) cont_snote2_single_text_pane_ParamLimits

0x7e4d,	// (0x00052cfd) cont_snote2_single_text_pane

0x7e4d,	// (0x00052cfd) cont_snote2_single_graphic_pane_ParamLimits

0x7e4d,	// (0x00052cfd) cont_snote2_single_graphic_pane

0xa275,	// (0x00055125) cont_note_wait_pane_ParamLimits

0xa275,	// (0x00055125) cont_note_wait_pane

0xa275,	// (0x00055125) cont_note_image_pane_ParamLimits

0xa275,	// (0x00055125) cont_note_image_pane

0xced4,	// (0x00057d84) popup_note2_window_g1_ParamLimits

0xced4,	// (0x00057d84) popup_note2_window_g1

0xcf05,	// (0x00057db5) popup_note2_window_t1_ParamLimits

0xcf05,	// (0x00057db5) popup_note2_window_t1

0xcf4a,	// (0x00057dfa) popup_note2_window_t2_ParamLimits

0xcf4a,	// (0x00057dfa) popup_note2_window_t2

0xcf8f,	// (0x00057e3f) popup_note2_window_t3_ParamLimits

0xcf8f,	// (0x00057e3f) popup_note2_window_t3

0xcfd4,	// (0x00057e84) popup_note2_window_t4_ParamLimits

0xcfd4,	// (0x00057e84) popup_note2_window_t4

0x767c,	// (0x0005252c) popup_note2_window_t5_ParamLimits

0x767c,	// (0x0005252c) popup_note2_window_t5

0x0004,

0xfc9a,	// (0x0005ab4a) popup_note2_window_t_ParamLimits

0xfc9a,	// (0x0005ab4a) popup_note2_window_t

0xd003,	// (0x00057eb3) popup_note2_image_window_g1_ParamLimits

0xd003,	// (0x00057eb3) popup_note2_image_window_g1

0xd00f,	// (0x00057ebf) popup_note2_image_window_g2_ParamLimits

0xd00f,	// (0x00057ebf) popup_note2_image_window_g2

0x0001,

0xfca5,	// (0x0005ab55) popup_note2_image_window_g_ParamLimits

0xfca5,	// (0x0005ab55) popup_note2_image_window_g

0xd021,	// (0x00057ed1) popup_note2_image_window_t1_ParamLimits

0xd021,	// (0x00057ed1) popup_note2_image_window_t1

0xd039,	// (0x00057ee9) popup_note2_image_window_t2_ParamLimits

0xd039,	// (0x00057ee9) popup_note2_image_window_t2

0xd051,	// (0x00057f01) popup_note2_image_window_t3_ParamLimits

0xd051,	// (0x00057f01) popup_note2_image_window_t3

0x0002,

0xfcaa,	// (0x0005ab5a) popup_note2_image_window_t_ParamLimits

0xfcaa,	// (0x0005ab5a) popup_note2_image_window_t

0xa283,	// (0x00055133) popup_note2_wait_window_g1_ParamLimits

0xa283,	// (0x00055133) popup_note2_wait_window_g1

0xd06d,	// (0x00057f1d) popup_note2_wait_window_g2_ParamLimits

0xd06d,	// (0x00057f1d) popup_note2_wait_window_g2

0xa29b,	// (0x0005514b) popup_note2_wait_window_g3_ParamLimits

0xa29b,	// (0x0005514b) popup_note2_wait_window_g3

0x0002,

0xfcb1,	// (0x0005ab61) popup_note2_wait_window_g_ParamLimits

0xfcb1,	// (0x0005ab61) popup_note2_wait_window_g

0xd079,	// (0x00057f29) popup_note2_wait_window_t1_ParamLimits

0xd079,	// (0x00057f29) popup_note2_wait_window_t1

0xd097,	// (0x00057f47) popup_note2_wait_window_t2_ParamLimits

0xd097,	// (0x00057f47) popup_note2_wait_window_t2

0xd0b5,	// (0x00057f65) popup_note2_wait_window_t3_ParamLimits

0xd0b5,	// (0x00057f65) popup_note2_wait_window_t3

0xd0c7,	// (0x00057f77) popup_note2_wait_window_t4_ParamLimits

0xd0c7,	// (0x00057f77) popup_note2_wait_window_t4

0x0003,

0xfcb8,	// (0x0005ab68) popup_note2_wait_window_t_ParamLimits

0xfcb8,	// (0x0005ab68) popup_note2_wait_window_t

0xd0d9,	// (0x00057f89) wait_bar2_pane_ParamLimits

0xd0d9,	// (0x00057f89) wait_bar2_pane

0xd0f1,	// (0x00057fa1) popup_snote2_single_text_window_g1_ParamLimits

0xd0f1,	// (0x00057fa1) popup_snote2_single_text_window_g1

0xd119,	// (0x00057fc9) popup_snote2_single_text_window_t1_ParamLimits

0xd119,	// (0x00057fc9) popup_snote2_single_text_window_t1

0xd165,	// (0x00058015) popup_snote2_single_text_window_t2_ParamLimits

0xd165,	// (0x00058015) popup_snote2_single_text_window_t2

0xd1b1,	// (0x00058061) popup_snote2_single_text_window_t3_ParamLimits

0xd1b1,	// (0x00058061) popup_snote2_single_text_window_t3

0xd1f2,	// (0x000580a2) popup_snote2_single_text_window_t4_ParamLimits

0xd1f2,	// (0x000580a2) popup_snote2_single_text_window_t4

0xd228,	// (0x000580d8) popup_snote2_single_text_window_t5_ParamLimits

0xd228,	// (0x000580d8) popup_snote2_single_text_window_t5

0x0004,

0xfcc1,	// (0x0005ab71) popup_snote2_single_text_window_t_ParamLimits

0xfcc1,	// (0x0005ab71) popup_snote2_single_text_window_t

0xd253,	// (0x00058103) popup_snote2_single_graphic_window_g1_ParamLimits

0xd253,	// (0x00058103) popup_snote2_single_graphic_window_g1

0xd27b,	// (0x0005812b) popup_snote2_single_graphic_window_g2_ParamLimits

0xd27b,	// (0x0005812b) popup_snote2_single_graphic_window_g2

0x0001,

0xfccc,	// (0x0005ab7c) popup_snote2_single_graphic_window_g_ParamLimits

0xfccc,	// (0x0005ab7c) popup_snote2_single_graphic_window_g

0xd2a3,	// (0x00058153) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2a3,	// (0x00058153) popup_snote2_single_graphic_window_t1

0xd2ef,	// (0x0005819f) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2ef,	// (0x0005819f) popup_snote2_single_graphic_window_t2

0xd1b1,	// (0x00058061) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1b1,	// (0x00058061) popup_snote2_single_graphic_window_t3

0xd1f2,	// (0x000580a2) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1f2,	// (0x000580a2) popup_snote2_single_graphic_window_t4

0xd228,	// (0x000580d8) popup_snote2_single_graphic_window_t5_ParamLimits

0xd228,	// (0x000580d8) popup_snote2_single_graphic_window_t5

0x0004,

0xfcd1,	// (0x0005ab81) popup_snote2_single_graphic_window_t_ParamLimits

0xfcd1,	// (0x0005ab81) popup_snote2_single_graphic_window_t

0xbd2b,	// (0x00056bdb) clock_nsta_pane_cp2_t1

0xbd2b,	// (0x00056bdb) clock_nsta_pane_cp2_t2

0x0001,

0xfae5,	// (0x0005a995) clock_nsta_pane_cp2_t

0x5634,	// (0x000504e4) form_field_data_wide_pane_g1_ParamLimits

0x80f6,	// (0x00052fa6) form_field_data_wide_pane_g2_ParamLimits

0x80f6,	// (0x00052fa6) form_field_data_wide_pane_g2

0x8102,	// (0x00052fb2) form_field_data_wide_pane_g3_ParamLimits

0x8102,	// (0x00052fb2) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0005a574) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0005a574) form_field_data_wide_pane_g

0xbc37,	// (0x00056ae7) grid_touch_3_pane_ParamLimits

0xbc37,	// (0x00056ae7) grid_touch_3_pane

0xd33b,	// (0x000581eb) cell_touch_3_pane_ParamLimits

0xd33b,	// (0x000581eb) cell_touch_3_pane

0xc244,	// (0x000570f4) cell_touch_3_pane_g1

0xc244,	// (0x000570f4) cell_touch_3_pane_g2

0x0001,

0xfb6a,	// (0x0005aa1a) cell_touch_3_pane_g

0x76ae,	// (0x0005255e) cont_query_data_pane

0x76b6,	// (0x00052566) cont_query_data_pane_cp1

0xd36e,	// (0x0005821e) button_value_adjust_pane_cp7

0xd376,	// (0x00058226) query_popup_pane_cp3

0x8816,	// (0x000536c6) bg_popup_sub_pane_cp22_ParamLimits

0x59d8,	// (0x00050888) navi_navi_volume_pane_cp2

0x59f3,	// (0x000508a3) popup_side_volume_key_window_g2

0x5a02,	// (0x000508b2) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0005a606) popup_side_volume_key_window_g

0x5a1f,	// (0x000508cf) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0005a60d) popup_side_volume_key_window_t

0x8add,	// (0x0005398d) popup_side_volume_key_window_ParamLimits

0x5227,	// (0x000500d7) list_double_graphic_pane_g4_ParamLimits

0x5227,	// (0x000500d7) list_double_graphic_pane_g4

0xb243,	// (0x000560f3) list_single_2heading_msg_pane_ParamLimits

0xb243,	// (0x000560f3) list_single_2heading_msg_pane

0x7cc8,	// (0x00052b78) list_single_2heading_msg_pane_g1_ParamLimits

0x7cc8,	// (0x00052b78) list_single_2heading_msg_pane_g1

0x89c4,	// (0x00053874) list_single_2heading_msg_pane_g2_ParamLimits

0x89c4,	// (0x00053874) list_single_2heading_msg_pane_g2

0x7cd4,	// (0x00052b84) list_single_2heading_msg_pane_g3_ParamLimits

0x7cd4,	// (0x00052b84) list_single_2heading_msg_pane_g3

0x7ce0,	// (0x00052b90) list_single_2heading_msg_pane_g4_ParamLimits

0x7ce0,	// (0x00052b90) list_single_2heading_msg_pane_g4

0x0003,

0xfcdc,	// (0x0005ab8c) list_single_2heading_msg_pane_g_ParamLimits

0xfcdc,	// (0x0005ab8c) list_single_2heading_msg_pane_g

0x7cf8,	// (0x00052ba8) list_single_2heading_msg_pane_t1_ParamLimits

0x7cf8,	// (0x00052ba8) list_single_2heading_msg_pane_t1

0x7d20,	// (0x00052bd0) list_single_2heading_msg_pane_t2_ParamLimits

0x7d20,	// (0x00052bd0) list_single_2heading_msg_pane_t2

0x7d4f,	// (0x00052bff) list_single_2heading_msg_pane_t3_ParamLimits

0x7d4f,	// (0x00052bff) list_single_2heading_msg_pane_t3

0x7d88,	// (0x00052c38) list_single_2heading_msg_pane_t4_ParamLimits

0x7d88,	// (0x00052c38) list_single_2heading_msg_pane_t4

0x0003,

0xfce5,	// (0x0005ab95) list_single_2heading_msg_pane_t_ParamLimits

0xfce5,	// (0x0005ab95) list_single_2heading_msg_pane_t

0x72c2,	// (0x00052172) title_pane_g4_ParamLimits

0x72c2,	// (0x00052172) title_pane_g4

0x57e4,	// (0x00050694) title_pane_stacon_g3_ParamLimits

0x57e4,	// (0x00050694) title_pane_stacon_g3

0xce97,	// (0x00057d47) list_single_2graphic_im_pane_g4_ParamLimits

0xce97,	// (0x00057d47) list_single_2graphic_im_pane_g4

0xaceb,	// (0x00055b9b) popup_side_volume_key_window_cp

0xb561,	// (0x00056411) main_idle_act2_pane_t1

0x5e55,	// (0x00050d05) toolbar_button_pane_g10

0x8045,	// (0x00052ef5) popup_toolbar_window_cp1

0xbd1c,	// (0x00056bcc) clock_nsta_pane_cp_t1

0xbd1c,	// (0x00056bcc) clock_nsta_pane_cp_t2

0x0001,

0xfae0,	// (0x0005a990) clock_nsta_pane_cp_t

0x59d8,	// (0x00050888) navi_navi_volume_pane_cp2_ParamLimits

0x59e7,	// (0x00050897) popup_side_volume_key_window_g1_ParamLimits

0x59f3,	// (0x000508a3) popup_side_volume_key_window_g2_ParamLimits

0x5a02,	// (0x000508b2) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0005a606) popup_side_volume_key_window_g_ParamLimits

0x65ab,	// (0x0005145b) fep_hwr_aid_pane

0x6654,	// (0x00051504) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2b4,	// (0x00057164) fep_hwr_top_pane_g1_ParamLimits

0xc2c6,	// (0x00057176) fep_hwr_top_pane_g2_ParamLimits

0x6674,	// (0x00051524) fep_hwr_top_pane_g3_ParamLimits

0xfb35,	// (0x0005a9e5) fep_hwr_top_pane_g_ParamLimits

0x6689,	// (0x00051539) fep_hwr_top_text_pane_ParamLimits

0xaaa0,	// (0x00055950) aid_touch_tab_arrow_arrow_2

0xaaa9,	// (0x00055959) aid_touch_tab_arrow_left_2

0x65bf,	// (0x0005146f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x65f6,	// (0x000514a6) fep_hwr_prediction_pane

0xc41c,	// (0x000572cc) fep_vkb_prediction_pane

0xc530,	// (0x000573e0) fep_vkb_side_pane_g3_ParamLimits

0xc530,	// (0x000573e0) fep_vkb_side_pane_g3

0x6818,	// (0x000516c8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6889,	// (0x00051739) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6896,	// (0x00051746) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe4,	// (0x0005aa94) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x69c5,	// (0x00051875) fep_hwr_prediction_pane_g1

0x69cf,	// (0x0005187f) fep_hwr_prediction_pane_g2

0x69d7,	// (0x00051887) fep_hwr_prediction_pane_g3

0x69df,	// (0x0005188f) fep_hwr_prediction_pane_g4

0x0003,

0xfcee,	// (0x0005ab9e) fep_hwr_prediction_pane_g

0xd39d,	// (0x0005824d) fep_vkb_prediction_pane_g1

0xd3a7,	// (0x00058257) fep_vkb_prediction_pane_g2

0xd3af,	// (0x0005825f) fep_vkb_prediction_pane_g3

0xd3b7,	// (0x00058267) fep_vkb_prediction_pane_g4

0x0003,

0xfcf7,	// (0x0005aba7) fep_vkb_prediction_pane_g

0x61de,	// (0x0005108e) slider_set_pane_g3

0x61f2,	// (0x000510a2) slider_set_pane_g4

0x620a,	// (0x000510ba) slider_set_pane_g5

0x61de,	// (0x0005108e) slider_set_pane_g6

0x6220,	// (0x000510d0) slider_set_pane_g7

0xb199,	// (0x00056049) slider_form_pane_g3

0xb1a2,	// (0x00056052) slider_form_pane_g4

0xb1aa,	// (0x0005605a) slider_form_pane_g5

0xb199,	// (0x00056049) slider_form_pane_g6

0xb1b2,	// (0x00056062) slider_form_pane_g7

0xb82f,	// (0x000566df) slider_set_pane_vc_g3

0xb838,	// (0x000566e8) slider_set_pane_vc_g4

0xb841,	// (0x000566f1) slider_set_pane_vc_g5

0xb82f,	// (0x000566df) slider_set_pane_vc_g6

0xb84a,	// (0x000566fa) slider_set_pane_vc_g7

0xb82f,	// (0x000566df) slider_form_pane_vc_g1

0xb838,	// (0x000566e8) slider_form_pane_vc_g2

0xb841,	// (0x000566f1) slider_form_pane_vc_g3

0xb82f,	// (0x000566df) slider_form_pane_vc_g4

0xba41,	// (0x000568f1) slider_form_pane_vc_g5

0x0004,

0xfac6,	// (0x0005a976) slider_form_pane_vc_g

0x727a,	// (0x0005212a) main_idle_act3_pane

0xd3bf,	// (0x0005826f) ai3_links_pane

0xd3c8,	// (0x00058278) popup_ai3_data_window_ParamLimits

0xd3c8,	// (0x00058278) popup_ai3_data_window

0x727a,	// (0x0005212a) grid_ai3_links_pane

0xd3e6,	// (0x00058296) cell_ai3_links_pane_ParamLimits

0xd3e6,	// (0x00058296) cell_ai3_links_pane

0xd400,	// (0x000582b0) bg_popup_sub_pane_cp11

0xd40d,	// (0x000582bd) cell_ai3_links_pane_g1

0x727a,	// (0x0005212a) bg_popup_sub_pane_cp12

0xd432,	// (0x000582e2) heading_ai3_data_pane

0xd43a,	// (0x000582ea) list_ai3_gene_pane

0xd446,	// (0x000582f6) popup_ai3_data_window_g1

0xd44e,	// (0x000582fe) heading_ai3_data_pane_g1

0xd456,	// (0x00058306) heading_ai3_data_pane_t1

0xd464,	// (0x00058314) list_double_ai3_gene_pane_ParamLimits

0xd464,	// (0x00058314) list_double_ai3_gene_pane

0xd471,	// (0x00058321) list_single_ai3_gene_pane_ParamLimits

0xd471,	// (0x00058321) list_single_ai3_gene_pane

0xc209,	// (0x000570b9) list_highlight_pane_cp7_ParamLimits

0xc209,	// (0x000570b9) list_highlight_pane_cp7

0xd47e,	// (0x0005832e) list_single_a13_gene_pane_t1_ParamLimits

0xd47e,	// (0x0005832e) list_single_a13_gene_pane_t1

0xd495,	// (0x00058345) list_single_ai3_gene_pane_g1

0xd49e,	// (0x0005834e) list_single_ai3_gene_pane_g2

0x0001,

0xfd00,	// (0x0005abb0) list_single_ai3_gene_pane_g

0xd4a6,	// (0x00058356) list_double_ai3_gene_pane_g1_ParamLimits

0xd4a6,	// (0x00058356) list_double_ai3_gene_pane_g1

0xd4b2,	// (0x00058362) list_double_ai3_gene_pane_t1_ParamLimits

0xd4b2,	// (0x00058362) list_double_ai3_gene_pane_t1

0xd4ce,	// (0x0005837e) list_double_ai3_gene_pane_t2_ParamLimits

0xd4ce,	// (0x0005837e) list_double_ai3_gene_pane_t2

0xd4e3,	// (0x00058393) list_double_ai3_gene_pane_t3_ParamLimits

0xd4e3,	// (0x00058393) list_double_ai3_gene_pane_t3

0x0002,

0xfd05,	// (0x0005abb5) list_double_ai3_gene_pane_t_ParamLimits

0xfd05,	// (0x0005abb5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7cbe,	// (0x00052b6e) aid_size_min_col_2

0xd387,	// (0x00058237) aid_size_min_msg_ParamLimits

0xd387,	// (0x00058237) aid_size_min_msg

0xc63c,	// (0x000574ec) fep_vkb_top_text_pane_g2_ParamLimits

0xc63c,	// (0x000574ec) fep_vkb_top_text_pane_g2

0x0001,

0xfb65,	// (0x0005aa15) fep_vkb_top_text_pane_g_ParamLimits

0xfb65,	// (0x0005aa15) fep_vkb_top_text_pane_g

0x727a,	// (0x0005212a) main_hc_apps_shell_pane

0xd500,	// (0x000583b0) grid_hc_apps_pane_ParamLimits

0xd500,	// (0x000583b0) grid_hc_apps_pane

0xd50f,	// (0x000583bf) list_hc_apps_pane

0xd517,	// (0x000583c7) scroll_pane_cp37_ParamLimits

0xd517,	// (0x000583c7) scroll_pane_cp37

0xd523,	// (0x000583d3) cell_hc_apps_pane_ParamLimits

0xd523,	// (0x000583d3) cell_hc_apps_pane

0xd5db,	// (0x0005848b) cell_hc_apps_pane_g1_ParamLimits

0xd5db,	// (0x0005848b) cell_hc_apps_pane_g1

0xd60c,	// (0x000584bc) cell_hc_apps_pane_g2_ParamLimits

0xd60c,	// (0x000584bc) cell_hc_apps_pane_g2

0xd628,	// (0x000584d8) cell_hc_apps_pane_g3_ParamLimits

0xd628,	// (0x000584d8) cell_hc_apps_pane_g3

0x0002,

0xfd0c,	// (0x0005abbc) cell_hc_apps_pane_g_ParamLimits

0xfd0c,	// (0x0005abbc) cell_hc_apps_pane_g

0xd64a,	// (0x000584fa) cell_hc_apps_pane_t1_ParamLimits

0xd64a,	// (0x000584fa) cell_hc_apps_pane_t1

0x75f8,	// (0x000524a8) grid_highlight_pane_cp10_ParamLimits

0x75f8,	// (0x000524a8) grid_highlight_pane_cp10

0xd68a,	// (0x0005853a) list_single_hc_apps_pane_ParamLimits

0xd68a,	// (0x0005853a) list_single_hc_apps_pane

0xd6c9,	// (0x00058579) list_single_hc_apps_pane_g1

0x7dad,	// (0x00052c5d) list_single_hc_apps_pane_g2

0x0001,

0xfd13,	// (0x0005abc3) list_single_hc_apps_pane_g

0x7dc6,	// (0x00052c76) list_single_hc_apps_pane_g2_copy1

0x7de2,	// (0x00052c92) list_single_hc_apps_pane_t1

0x736e,	// (0x0005221e) bg_set_opt_pane_cp_ParamLimits

0x501e,	// (0x0004fece) setting_slider_pane_t1_ParamLimits

0x5034,	// (0x0004fee4) setting_slider_pane_t2_ParamLimits

0x504e,	// (0x0004fefe) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0005a452) setting_slider_pane_t_ParamLimits

0x5066,	// (0x0004ff16) slider_set_pane_ParamLimits

0x5cf7,	// (0x00050ba7) control_pane_g5_ParamLimits

0x5cf7,	// (0x00050ba7) control_pane_g5

0xafba,	// (0x00055e6a) slider_set_pane_g1_ParamLimits

0x61d2,	// (0x00051082) slider_set_pane_g2_ParamLimits

0x61de,	// (0x0005108e) slider_set_pane_g3_ParamLimits

0x61f2,	// (0x000510a2) slider_set_pane_g4_ParamLimits

0x620a,	// (0x000510ba) slider_set_pane_g5_ParamLimits

0x61de,	// (0x0005108e) slider_set_pane_g6_ParamLimits

0x6220,	// (0x000510d0) slider_set_pane_g7_ParamLimits

0xf9a2,	// (0x0005a852) slider_set_pane_g_ParamLimits

0x8bc2,	// (0x00053a72) navi_icon_text_pane_ParamLimits

0x970d,	// (0x000545bd) aid_fill_nsta_2_ParamLimits

0x974e,	// (0x000545fe) aid_touch_tab_arrow_left_ParamLimits

0x975d,	// (0x0005460d) aid_touch_tab_arrow_right_ParamLimits

0x97ca,	// (0x0005467a) clock_nsta_pane_ParamLimits

0xaa7c,	// (0x0005592c) navi_icon_pane_g1_ParamLimits

0xaa8b,	// (0x0005593b) navi_text_pane_t1_ParamLimits

0xbe39,	// (0x00056ce9) navi_icon_text_pane_g1_ParamLimits

0xbe48,	// (0x00056cf8) navi_icon_text_pane_t1_ParamLimits

0xd6c9,	// (0x00058579) list_single_hc_apps_pane_g1_ParamLimits

0x7dad,	// (0x00052c5d) list_single_hc_apps_pane_g2_ParamLimits

0xfd13,	// (0x0005abc3) list_single_hc_apps_pane_g_ParamLimits

0x7dc6,	// (0x00052c76) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7de2,	// (0x00052c92) list_single_hc_apps_pane_t1_ParamLimits

0x4f28,	// (0x0004fdd8) popup_toolbar2_fixed_window_ParamLimits

0x4f28,	// (0x0004fdd8) popup_toolbar2_fixed_window

0x9611,	// (0x000544c1) popup_toolbar2_float_window

0x727a,	// (0x0005212a) bg_popup_sub_pane_cp27

0xd6e2,	// (0x00058592) grid_toolbar2_float_pane

0x727a,	// (0x0005212a) bg_popup_sub_pane_cp26

0xd6e2,	// (0x00058592) grid_toolbar2_fixed_pane

0xd6ea,	// (0x0005859a) cell_toolbar2_fixed_pane_ParamLimits

0xd6ea,	// (0x0005859a) cell_toolbar2_fixed_pane

0xd6fa,	// (0x000585aa) cell_toolbar2_fixed_pane_g1

0xd703,	// (0x000585b3) toolbar2_fixed_button_pane

0x9c00,	// (0x00054ab0) toolbar2_fixed_button_pane_g1

0x9c10,	// (0x00054ac0) toolbar2_fixed_button_pane_g2

0x9c08,	// (0x00054ab8) toolbar2_fixed_button_pane_g3

0x9c20,	// (0x00054ad0) toolbar2_fixed_button_pane_g4

0x9c18,	// (0x00054ac8) toolbar2_fixed_button_pane_g5

0x9c28,	// (0x00054ad8) toolbar2_fixed_button_pane_g6

0x9c30,	// (0x00054ae0) toolbar2_fixed_button_pane_g7

0x9c40,	// (0x00054af0) toolbar2_fixed_button_pane_g8

0x9c38,	// (0x00054ae8) toolbar2_fixed_button_pane_g9

0x0008,

0xf8a4,	// (0x0005a754) toolbar2_fixed_button_pane_g

0xd70b,	// (0x000585bb) cell_toolbar2_float_pane_ParamLimits

0xd70b,	// (0x000585bb) cell_toolbar2_float_pane

0xd71c,	// (0x000585cc) cell_toolbar2_float_pane_g1

0xd703,	// (0x000585b3) toolbar2_fixed_button_pane_cp

0xc38a,	// (0x0005723a) fep_vkb_accented_list_pane_ParamLimits

0xc38a,	// (0x0005723a) fep_vkb_accented_list_pane

0x67f8,	// (0x000516a8) bg_popup_fep_shadow_pane_g9

0x8d46,	// (0x00053bf6) bg_popup_fep_shadow_pane_cp3

0x8245,	// (0x000530f5) list_accented_list_pane

0xd725,	// (0x000585d5) list_single_accented_list_pane_ParamLimits

0xd725,	// (0x000585d5) list_single_accented_list_pane

0x8d46,	// (0x00053bf6) list_highlight_pane_cp10

0xd736,	// (0x000585e6) list_single_accented_list_pane_t1

0x9557,	// (0x00054407) popup_slider_window_ParamLimits

0x9557,	// (0x00054407) popup_slider_window

0xd37e,	// (0x0005822e) aid_indentation_list_msg

0xd802,	// (0x000586b2) bg_popup_window_pane_cp19

0xd870,	// (0x00058720) popup_slider_window_g1

0xd88c,	// (0x0005873c) popup_slider_window_g2

0xd8a8,	// (0x00058758) popup_slider_window_g3

0x0005,

0xfd18,	// (0x0005abc8) popup_slider_window_g

0xd904,	// (0x000587b4) popup_slider_window_t1

0xd978,	// (0x00058828) small_volume_slider_vertical_pane

0xc244,	// (0x000570f4) small_volume_slider_vertical_pane_g1

0xc244,	// (0x000570f4) small_volume_slider_vertical_pane_g2

0xd994,	// (0x00058844) small_volume_slider_vertical_pane_g3

0x0002,

0xfd2a,	// (0x0005abda) small_volume_slider_vertical_pane_g

0x4cd6,	// (0x0004fb86) area_side_right_pane_ParamLimits

0x4cd6,	// (0x0004fb86) area_side_right_pane

0x69e7,	// (0x00051897) aid_size_side_button_ParamLimits

0x69e7,	// (0x00051897) aid_size_side_button

0x69fb,	// (0x000518ab) grid_sctrl_middle_pane_ParamLimits

0x69fb,	// (0x000518ab) grid_sctrl_middle_pane

0x6a1b,	// (0x000518cb) sctrl_sk_bottom_pane

0x6a2c,	// (0x000518dc) sctrl_sk_top_pane

0x6a3e,	// (0x000518ee) aid_touch_sctrl_top

0x6a4b,	// (0x000518fb) bg_sctrl_sk_pane_ParamLimits

0x6a4b,	// (0x000518fb) bg_sctrl_sk_pane

0x6a59,	// (0x00051909) sctrl_sk_top_pane_g1

0x6a66,	// (0x00051916) sctrl_sk_top_pane_t1

0x6a3e,	// (0x000518ee) aid_touch_sctrl_bottom

0x6a4b,	// (0x000518fb) bg_sctrl_sk_pane_cp_ParamLimits

0x6a4b,	// (0x000518fb) bg_sctrl_sk_pane_cp

0x6a81,	// (0x00051931) sctrl_sk_bottom_pane_g1

0x6a66,	// (0x00051916) sctrl_sk_bottom_pane_t1

0x6a8a,	// (0x0005193a) cell_sctrl_middle_pane_ParamLimits

0x6a8a,	// (0x0005193a) cell_sctrl_middle_pane

0x6aa7,	// (0x00051957) aid_touch_sctrl_middle_ParamLimits

0x6aa7,	// (0x00051957) aid_touch_sctrl_middle

0x6ab9,	// (0x00051969) bg_sctrl_middle_pane_ParamLimits

0x6ab9,	// (0x00051969) bg_sctrl_middle_pane

0x6818,	// (0x000516c8) cell_sctrl_middle_pane_g1_ParamLimits

0x6818,	// (0x000516c8) cell_sctrl_middle_pane_g1

0x6ac7,	// (0x00051977) cell_sctrl_middle_pane_g2_ParamLimits

0x6ac7,	// (0x00051977) cell_sctrl_middle_pane_g2

0x0001,

0xfd36,	// (0x0005abe6) cell_sctrl_middle_pane_g_ParamLimits

0xfd36,	// (0x0005abe6) cell_sctrl_middle_pane_g

0x9c00,	// (0x00054ab0) bg_sctrl_middle_pane_g1

0x9c08,	// (0x00054ab8) bg_sctrl_middle_pane_g2

0x9c10,	// (0x00054ac0) bg_sctrl_middle_pane_g3

0x9c18,	// (0x00054ac8) bg_sctrl_middle_pane_g4

0x9c20,	// (0x00054ad0) bg_sctrl_middle_pane_g5

0x9c28,	// (0x00054ad8) bg_sctrl_middle_pane_g6

0x9c30,	// (0x00054ae0) bg_sctrl_middle_pane_g7

0x9c38,	// (0x00054ae8) bg_sctrl_middle_pane_g8

0x0007,

0xfd3b,	// (0x0005abeb) bg_sctrl_middle_pane_g

0x9c40,	// (0x00054af0) bg_sctrl_middle_pane_g8_copy1

0x9c00,	// (0x00054ab0) bg_sctrl_sk_pane_g1

0x9c10,	// (0x00054ac0) bg_sctrl_sk_pane_g2

0x9c08,	// (0x00054ab8) bg_sctrl_sk_pane_g3

0x0008,

0xf8a4,	// (0x0005a754) bg_sctrl_sk_pane_g

0x800b,	// (0x00052ebb) aid_size_touch_scroll_bar

0x9c20,	// (0x00054ad0) bg_sctrl_sk_pane_g4

0x9c18,	// (0x00054ac8) bg_sctrl_sk_pane_g5

0x9c28,	// (0x00054ad8) bg_sctrl_sk_pane_g6

0x9c30,	// (0x00054ae0) bg_sctrl_sk_pane_g7

0x9c40,	// (0x00054af0) bg_sctrl_sk_pane_g8

0x9c38,	// (0x00054ae8) bg_sctrl_sk_pane_g9

0x916e,	// (0x0005401e) popup_fep_china_hwr2_fs_candidate_window

0x9178,	// (0x00054028) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9178,	// (0x00054028) popup_fep_china_hwr2_fs_control_window

0x6818,	// (0x000516c8) sctrl_sk_top_pane_g2

0x0001,

0xfd31,	// (0x0005abe1) sctrl_sk_top_pane_g

0xd99d,	// (0x0005884d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd99d,	// (0x0005884d) aid_fep_china_hwr2_fs_cell

0xd9b0,	// (0x00058860) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9b0,	// (0x00058860) bg_popup_fep_shadow_pane_cp4

0xd9c9,	// (0x00058879) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9c9,	// (0x00058879) bg_popup_fep_shadow_pane_cp5

0xd9db,	// (0x0005888b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9db,	// (0x0005888b) popup_fep_china_hwr2_fs_control_bar_grid

0xd9eb,	// (0x0005889b) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9f3,	// (0x000588a3) aid_fep_china_hwr2_fs_candi_cell

0x727a,	// (0x0005212a) bg_popup_fep_shadow_pane_cp6

0xd9fd,	// (0x000588ad) popup_fep_china_hwr2_fs_candidate_grid

0xda07,	// (0x000588b7) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda07,	// (0x000588b7) cell_fep_china_hwr2_fs_funtion_grid

0xc244,	// (0x000570f4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda1f,	// (0x000588cf) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda1f,	// (0x000588cf) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda2d,	// (0x000588dd) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda2d,	// (0x000588dd) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd4c,	// (0x0005abfc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd4c,	// (0x0005abfc) cell_fep_china_hwr2_fs_funtion_grid_g

0xda43,	// (0x000588f3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda43,	// (0x000588f3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda58,	// (0x00058908) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda58,	// (0x00058908) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd51,	// (0x0005ac01) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd51,	// (0x0005ac01) cell_fep_china_hwr2_fs_funtion_grid_t

0xda74,	// (0x00058924) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda7c,	// (0x0005892c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda84,	// (0x00058934) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd56,	// (0x0005ac06) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda8c,	// (0x0005893c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda8c,	// (0x0005893c) cell_fep_china_hwr2_fs_candidate_grid

0xdaab,	// (0x0005895b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdab3,	// (0x00058963) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc244,	// (0x000570f4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc244,	// (0x000570f4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb6a,	// (0x0005aa1a) cell_fep_china_hwr2_fs_candidate_grid_g

0xdabb,	// (0x0005896b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x97dd,	// (0x0005468d) clock_nsta_pane_cp_24_ParamLimits

0x97dd,	// (0x0005468d) clock_nsta_pane_cp_24

0x985d,	// (0x0005470d) indicator_nsta_pane_cp_24_ParamLimits

0x985d,	// (0x0005470d) indicator_nsta_pane_cp_24

0xa8f8,	// (0x000557a8) heading_pane_g1

0x0001,

0xf909,	// (0x0005a7b9) heading_pane_g

0xb3a8,	// (0x00056258) grid_sct_catagory_button_pane

0xb3da,	// (0x0005628a) scroll_pane_cp5_ParamLimits

0xbe8d,	// (0x00056d3d) button_value_adjust_pane_cp5_ParamLimits

0xbe8d,	// (0x00056d3d) button_value_adjust_pane_cp5

0xbf72,	// (0x00056e22) form2_midp_time_pane_ParamLimits

0xdac9,	// (0x00058979) cell_sct_catagory_button_pane_ParamLimits

0xdac9,	// (0x00058979) cell_sct_catagory_button_pane

0xc209,	// (0x000570b9) bg_button_pane_cp01_ParamLimits

0xc209,	// (0x000570b9) bg_button_pane_cp01

0xc244,	// (0x000570f4) cell_sct_catagory_button_pane_g1

0x9598,	// (0x00054448) popup_tb_extension_window

0xdadb,	// (0x0005898b) aid_size_cell_ext_ParamLimits

0xdadb,	// (0x0005898b) aid_size_cell_ext

0x75f8,	// (0x000524a8) bg_tb_trans_pane_cp1_ParamLimits

0x75f8,	// (0x000524a8) bg_tb_trans_pane_cp1

0xdafb,	// (0x000589ab) grid_tb_ext_pane_ParamLimits

0xdafb,	// (0x000589ab) grid_tb_ext_pane

0xdb2b,	// (0x000589db) cell_tb_ext_pane_ParamLimits

0xdb2b,	// (0x000589db) cell_tb_ext_pane

0xdb42,	// (0x000589f2) cell_tb_ext_pane_g1_ParamLimits

0xdb42,	// (0x000589f2) cell_tb_ext_pane_g1

0xdb5f,	// (0x00058a0f) cell_tb_ext_pane_t1

0x75f8,	// (0x000524a8) list_highlight_pane_cp11_ParamLimits

0x75f8,	// (0x000524a8) list_highlight_pane_cp11

0x4f47,	// (0x0004fdf7) popup_uni_indicator_window_ParamLimits

0x4f47,	// (0x0004fdf7) popup_uni_indicator_window

0x80dc,	// (0x00052f8c) bg_popup_sub_pane_cp14

0xdb7a,	// (0x00058a2a) list_uniindi_pane

0xdb86,	// (0x00058a36) uniindi_top_pane

0x75f8,	// (0x000524a8) bg_uniindi_top_pane

0xdba7,	// (0x00058a57) uniindi_top_pane_g1

0xdbbd,	// (0x00058a6d) uniindi_top_pane_g2

0x0003,

0xfd5d,	// (0x0005ac0d) uniindi_top_pane_g

0xdbe7,	// (0x00058a97) uniindi_top_pane_t1

0xdc34,	// (0x00058ae4) list_single_uniindi_pane_ParamLimits

0xdc34,	// (0x00058ae4) list_single_uniindi_pane

0xc244,	// (0x000570f4) bg_uniindi_top_pane_g1

0xdc46,	// (0x00058af6) list_single_uniindi_pane_g1

0xdc59,	// (0x00058b09) list_single_uniindi_pane_t1

0x4db3,	// (0x0004fc63) control_bg_pane

0xdc7e,	// (0x00058b2e) bg_sctrl_sk_pane_cp1

0xdc87,	// (0x00058b37) bg_sctrl_sk_pane_cp2

0xdc90,	// (0x00058b40) control_bg_pane_g1

0xdc99,	// (0x00058b49) control_bg_pane_g2

0x0001,

0xfd66,	// (0x0005ac16) control_bg_pane_g

0xbce1,	// (0x00056b91) cell_indicator_nsta_pane_g1_ParamLimits

0xbcef,	// (0x00056b9f) cell_indicator_nsta_pane_g2_ParamLimits

0xfadb,	// (0x0005a98b) cell_indicator_nsta_pane_g_ParamLimits

0x658a,	// (0x0005143a) form2_midp_time_pane_t1_ParamLimits

0x7e4d,	// (0x00052cfd) main_idle_act4_pane_ParamLimits

0x7e4d,	// (0x00052cfd) main_idle_act4_pane

0x9598,	// (0x00054448) popup_tb_extension_window_ParamLimits

0xdb1d,	// (0x000589cd) tb_ext_find_pane_ParamLimits

0xdb1d,	// (0x000589cd) tb_ext_find_pane

0xdca2,	// (0x00058b52) ai_gene_pane_1_cp1

0x8e8f,	// (0x00053d3f) ai_gene_pane_2_cp1

0xdcaa,	// (0x00058b5a) list_single_idle_plugin_calendar_pane

0xdcb3,	// (0x00058b63) list_single_idle_plugin_notification_pane

0xdcbc,	// (0x00058b6c) list_single_idle_plugin_player_pane

0xdcc5,	// (0x00058b75) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcc5,	// (0x00058b75) list_single_idle_plugin_shortcut_pane

0xdce7,	// (0x00058b97) main_idle_act4_pane_t1

0xdcf9,	// (0x00058ba9) main_idle_act4_pane_t2

0x0001,

0xfd6b,	// (0x0005ac1b) main_idle_act4_pane_t

0xdd0b,	// (0x00058bbb) middle_sk_idle_act4_pane_ParamLimits

0xdd0b,	// (0x00058bbb) middle_sk_idle_act4_pane

0xdd21,	// (0x00058bd1) popup_clock_digital_analogue_window_cp2

0xdd3b,	// (0x00058beb) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd3b,	// (0x00058beb) shortcut_wheel_idle_act4_pane

0xc244,	// (0x000570f4) shortcut_wheel_idle_act4_pane_g1

0xc244,	// (0x000570f4) shortcut_wheel_idle_act4_pane_g2

0xc244,	// (0x000570f4) shortcut_wheel_idle_act4_pane_g3

0xc244,	// (0x000570f4) shortcut_wheel_idle_act4_pane_g4

0xc244,	// (0x000570f4) shortcut_wheel_idle_act4_pane_g5

0xdd4f,	// (0x00058bff) shortcut_wheel_idle_act4_pane_g6

0xdd57,	// (0x00058c07) shortcut_wheel_idle_act4_pane_g7

0xdd5f,	// (0x00058c0f) shortcut_wheel_idle_act4_pane_g8

0xdd67,	// (0x00058c17) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd70,	// (0x0005ac20) shortcut_wheel_idle_act4_pane_g

0xc4dc,	// (0x0005738c) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4dc,	// (0x0005738c) middle_sk_idle_act4_pane_g1

0xddcb,	// (0x00058c7b) middle_sk_idle_act4_pane_g2_ParamLimits

0xddcb,	// (0x00058c7b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd93,	// (0x0005ac43) middle_sk_idle_act4_pane_g_ParamLimits

0xfd93,	// (0x0005ac43) middle_sk_idle_act4_pane_g

0xddd7,	// (0x00058c87) middle_sk_idle_act4_pane_t1_ParamLimits

0xddd7,	// (0x00058c87) middle_sk_idle_act4_pane_t1

0xddf4,	// (0x00058ca4) grid_ai_shortcut_pane_ParamLimits

0xddf4,	// (0x00058ca4) grid_ai_shortcut_pane

0xde0d,	// (0x00058cbd) list_highlight_pane_cp16_ParamLimits

0xde0d,	// (0x00058cbd) list_highlight_pane_cp16

0xde1a,	// (0x00058cca) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde1a,	// (0x00058cca) list_single_idle_plugin_shortcut_pane_g1

0xde26,	// (0x00058cd6) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde26,	// (0x00058cd6) list_single_idle_plugin_shortcut_pane_g2

0xde40,	// (0x00058cf0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde40,	// (0x00058cf0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd98,	// (0x0005ac48) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd98,	// (0x0005ac48) list_single_idle_plugin_shortcut_pane_g

0xde53,	// (0x00058d03) cell_ai_shortcut_pane_ParamLimits

0xde53,	// (0x00058d03) cell_ai_shortcut_pane

0xde76,	// (0x00058d26) cell_ai_shortcut_pane_g1_ParamLimits

0xde76,	// (0x00058d26) cell_ai_shortcut_pane_g1

0xdca2,	// (0x00058b52) ai_gene_pane_1_cp2

0xde98,	// (0x00058d48) ai_gene_pane_2_cp2

0xdea0,	// (0x00058d50) list_highlight_pane_cp15

0xdea9,	// (0x00058d59) list_single_idle_plugin_calendar_pane_g1

0xdea0,	// (0x00058d50) list_highlight_pane_cp17

0xdeb1,	// (0x00058d61) list_single_idle_plugin_calendar_pane_g1_copy1

0xdeb9,	// (0x00058d69) list_single_idle_plugin_player_pane_g1

0xb60f,	// (0x000564bf) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd9f,	// (0x0005ac4f) list_single_idle_plugin_player_pane_g

0xdec1,	// (0x00058d71) list_single_idle_plugin_player_pane_t1

0xdecf,	// (0x00058d7f) list_single_idle_plugin_player_pane_t2

0xdedd,	// (0x00058d8d) list_single_idle_plugin_player_pane_t3

0xdeeb,	// (0x00058d9b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfda4,	// (0x0005ac54) list_single_idle_plugin_player_pane_t

0xdef9,	// (0x00058da9) wait_bar_pane_cp15

0xdf01,	// (0x00058db1) grid_ai_notification_pane

0xb60f,	// (0x000564bf) list_single_idle_plugin_notification_pane_g1

0xdf0a,	// (0x00058dba) cell_ai_notification_pane_ParamLimits

0xdf0a,	// (0x00058dba) cell_ai_notification_pane

0xdf17,	// (0x00058dc7) cell_ai_notification_pane_g1

0xdf1f,	// (0x00058dcf) cell_ai_notification_pane_t1

0xdf2d,	// (0x00058ddd) tb_ext_find_button_pane

0xdf35,	// (0x00058de5) tb_ext_find_pane_g1

0xdf3d,	// (0x00058ded) tb_ext_find_pane_t1

0x874c,	// (0x000535fc) tb_ext_find_button_pane_g1

0xdf4b,	// (0x00058dfb) tb_ext_find_button_pane_g2

0x0001,

0xfdad,	// (0x0005ac5d) tb_ext_find_button_pane_g

0xdce7,	// (0x00058b97) main_idle_act4_pane_t1_ParamLimits

0xdcf9,	// (0x00058ba9) main_idle_act4_pane_t2_ParamLimits

0xfd6b,	// (0x0005ac1b) main_idle_act4_pane_t_ParamLimits

0xdd21,	// (0x00058bd1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd2f,	// (0x00058bdf) sat_plugin_idle_act4_pane_ParamLimits

0xdd2f,	// (0x00058bdf) sat_plugin_idle_act4_pane

0xdf54,	// (0x00058e04) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf54,	// (0x00058e04) sat_plugin_idle_act4_pane_t1

0xdf67,	// (0x00058e17) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf67,	// (0x00058e17) sat_plugin_idle_act4_pane_t2

0xdf7a,	// (0x00058e2a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf7a,	// (0x00058e2a) sat_plugin_idle_act4_pane_t3

0xdf8d,	// (0x00058e3d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf8d,	// (0x00058e3d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdb2,	// (0x0005ac62) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdb2,	// (0x0005ac62) sat_plugin_idle_act4_pane_t

0x4e78,	// (0x0004fd28) popup_battery_window_ParamLimits

0x4e78,	// (0x0004fd28) popup_battery_window

0x75f8,	// (0x000524a8) bg_popup_sub_pane_cp25_ParamLimits

0x75f8,	// (0x000524a8) bg_popup_sub_pane_cp25

0xdfa0,	// (0x00058e50) popup_battery_window_g1_ParamLimits

0xdfa0,	// (0x00058e50) popup_battery_window_g1

0xdfac,	// (0x00058e5c) popup_battery_window_t1_ParamLimits

0xdfac,	// (0x00058e5c) popup_battery_window_t1

0xdfbe,	// (0x00058e6e) popup_battery_window_t2_ParamLimits

0xdfbe,	// (0x00058e6e) popup_battery_window_t2

0x0001,

0xfdbb,	// (0x0005ac6b) popup_battery_window_t_ParamLimits

0xfdbb,	// (0x0005ac6b) popup_battery_window_t

0x8d5a,	// (0x00053c0a) midp_canvas_pane_ParamLimits

0x8dd1,	// (0x00053c81) midp_keypad_pane_ParamLimits

0x8dd1,	// (0x00053c81) midp_keypad_pane

0x90c4,	// (0x00053f74) main_midp_pane_ParamLimits

0xbd3a,	// (0x00056bea) signal_pane_g2_cp_ParamLimits

0xdfdb,	// (0x00058e8b) aid_size_cell_midp_keypad_ParamLimits

0xdfdb,	// (0x00058e8b) aid_size_cell_midp_keypad

0xdff5,	// (0x00058ea5) midp_keyp_game_grid_pane_ParamLimits

0xdff5,	// (0x00058ea5) midp_keyp_game_grid_pane

0xe015,	// (0x00058ec5) midp_keyp_rocker_pane_ParamLimits

0xe015,	// (0x00058ec5) midp_keyp_rocker_pane

0xe044,	// (0x00058ef4) midp_keyp_sk_left_pane_ParamLimits

0xe044,	// (0x00058ef4) midp_keyp_sk_left_pane

0xe09e,	// (0x00058f4e) midp_keyp_sk_right_pane_ParamLimits

0xe09e,	// (0x00058f4e) midp_keyp_sk_right_pane

0x727a,	// (0x0005212a) bg_button_pane_cp03

0xe0f8,	// (0x00058fa8) midp_keyp_sk_left_pane_g1

0x727a,	// (0x0005212a) bg_button_pane_cp04

0xe0f8,	// (0x00058fa8) midp_keyp_sk_right_pane_g1

0xc244,	// (0x000570f4) midp_keyp_rocker_pane_g1

0xe101,	// (0x00058fb1) keyp_game_cell_pane_ParamLimits

0xe101,	// (0x00058fb1) keyp_game_cell_pane

0x727a,	// (0x0005212a) bg_button_pane_cp02

0xe114,	// (0x00058fc4) keyp_game_cell_pane_g1

0x4ec2,	// (0x0004fd72) popup_fep_vkb2_window_ParamLimits

0x4ec2,	// (0x0004fd72) popup_fep_vkb2_window

0x6ae9,	// (0x00051999) aid_size_cell_vkb2_ParamLimits

0x6ae9,	// (0x00051999) aid_size_cell_vkb2

0x6b35,	// (0x000519e5) popup_fep_vkb2_window_g1_ParamLimits

0x6b35,	// (0x000519e5) popup_fep_vkb2_window_g1

0x6b7d,	// (0x00051a2d) vkb2_area_bottom_pane_ParamLimits

0x6b7d,	// (0x00051a2d) vkb2_area_bottom_pane

0x6bd1,	// (0x00051a81) vkb2_area_keypad_pane_ParamLimits

0x6bd1,	// (0x00051a81) vkb2_area_keypad_pane

0x6c17,	// (0x00051ac7) vkb2_area_top_pane_ParamLimits

0x6c17,	// (0x00051ac7) vkb2_area_top_pane

0x6c91,	// (0x00051b41) vkb2_top_entry_pane_ParamLimits

0x6c91,	// (0x00051b41) vkb2_top_entry_pane

0x6cbb,	// (0x00051b6b) vkb2_top_grid_left_pane_ParamLimits

0x6cbb,	// (0x00051b6b) vkb2_top_grid_left_pane

0x6cd9,	// (0x00051b89) vkb2_top_grid_right_pane_ParamLimits

0x6cd9,	// (0x00051b89) vkb2_top_grid_right_pane

0x6cf7,	// (0x00051ba7) vkb2_cell_keypad_pane_ParamLimits

0x6cf7,	// (0x00051ba7) vkb2_cell_keypad_pane

0x6dad,	// (0x00051c5d) vkb2_area_bottom_grid_pane_ParamLimits

0x6dad,	// (0x00051c5d) vkb2_area_bottom_grid_pane

0x6dd3,	// (0x00051c83) vkb2_area_bottom_pane_g1_ParamLimits

0x6dd3,	// (0x00051c83) vkb2_area_bottom_pane_g1

0x6df7,	// (0x00051ca7) vkb2_area_bottom_pane_g2_ParamLimits

0x6df7,	// (0x00051ca7) vkb2_area_bottom_pane_g2

0x6e25,	// (0x00051cd5) vkb2_area_bottom_pane_g3_ParamLimits

0x6e25,	// (0x00051cd5) vkb2_area_bottom_pane_g3

0x0002,

0xfdc0,	// (0x0005ac70) vkb2_area_bottom_pane_g_ParamLimits

0xfdc0,	// (0x0005ac70) vkb2_area_bottom_pane_g

0x6e86,	// (0x00051d36) vkb2_top_cell_left_pane_ParamLimits

0x6e86,	// (0x00051d36) vkb2_top_cell_left_pane

0xe125,	// (0x00058fd5) vkb2_top_entry_pane_g1_ParamLimits

0xe125,	// (0x00058fd5) vkb2_top_entry_pane_g1

0xe133,	// (0x00058fe3) vkb2_top_entry_pane_t1_ParamLimits

0xe133,	// (0x00058fe3) vkb2_top_entry_pane_t1

0xe14b,	// (0x00058ffb) vkb2_top_entry_pane_t2_ParamLimits

0xe14b,	// (0x00058ffb) vkb2_top_entry_pane_t2

0xe163,	// (0x00059013) vkb2_top_entry_pane_t3_ParamLimits

0xe163,	// (0x00059013) vkb2_top_entry_pane_t3

0x0002,

0xfdc7,	// (0x0005ac77) vkb2_top_entry_pane_t_ParamLimits

0xfdc7,	// (0x0005ac77) vkb2_top_entry_pane_t

0x6ed3,	// (0x00051d83) vkb2_top_grid_right_pane_g1_ParamLimits

0x6ed3,	// (0x00051d83) vkb2_top_grid_right_pane_g1

0x6ee9,	// (0x00051d99) vkb2_top_grid_right_pane_g2_ParamLimits

0x6ee9,	// (0x00051d99) vkb2_top_grid_right_pane_g2

0x6f01,	// (0x00051db1) vkb2_top_grid_right_pane_g3_ParamLimits

0x6f01,	// (0x00051db1) vkb2_top_grid_right_pane_g3

0x6f19,	// (0x00051dc9) vkb2_top_grid_right_pane_g4_ParamLimits

0x6f19,	// (0x00051dc9) vkb2_top_grid_right_pane_g4

0x0003,

0xfdce,	// (0x0005ac7e) vkb2_top_grid_right_pane_g_ParamLimits

0xfdce,	// (0x0005ac7e) vkb2_top_grid_right_pane_g

0x6f2f,	// (0x00051ddf) vkb2_top_cell_left_pane_g1

0x6f46,	// (0x00051df6) vkb2_cell_keypad_pane_g1_ParamLimits

0x6f46,	// (0x00051df6) vkb2_cell_keypad_pane_g1

0xe179,	// (0x00059029) vkb2_cell_keypad_pane_t1_ParamLimits

0xe179,	// (0x00059029) vkb2_cell_keypad_pane_t1

0x6f6a,	// (0x00051e1a) vkb2_cell_bottom_grid_pane_ParamLimits

0x6f6a,	// (0x00051e1a) vkb2_cell_bottom_grid_pane

0x6fa3,	// (0x00051e53) vkb2_cell_bottom_grid_pane_g1

0xdd6f,	// (0x00058c1f) aid_call2_pane_cp02

0xdd77,	// (0x00058c27) aid_call_pane_cp02

0xdd7f,	// (0x00058c2f) clock_digital_number_pane_cp10

0xdd87,	// (0x00058c37) clock_digital_number_pane_cp11

0xdd8f,	// (0x00058c3f) clock_digital_number_pane_cp12

0xdd97,	// (0x00058c47) clock_digital_number_pane_cp13

0xdd9f,	// (0x00058c4f) clock_digital_separator_pane_cp10

0x874c,	// (0x000535fc) popup_clock_digital_analogue_window_cp2_g1

0x874c,	// (0x000535fc) popup_clock_digital_analogue_window_cp2_g2

0xdda7,	// (0x00058c57) popup_clock_digital_analogue_window_cp2_g3

0x874c,	// (0x000535fc) popup_clock_digital_analogue_window_cp2_g4

0xdda7,	// (0x00058c57) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd83,	// (0x0005ac33) popup_clock_digital_analogue_window_cp2_g

0xddaf,	// (0x00058c5f) popup_clock_digital_analogue_window_cp2_t1

0xddbd,	// (0x00058c6d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd8e,	// (0x0005ac3e) popup_clock_digital_analogue_window_cp2_t

0xc244,	// (0x000570f4) clock_digital_number_pane_cp10_g1

0xc244,	// (0x000570f4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb6a,	// (0x0005aa1a) clock_digital_number_pane_cp10_g

0xc244,	// (0x000570f4) clock_digital_separator_pane_cp10_g1

0xc244,	// (0x000570f4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb6a,	// (0x0005aa1a) clock_digital_separator_pane_cp10_g

0xdbc9,	// (0x00058a79) uniindi_top_pane_g3

0xdbda,	// (0x00058a8a) uniindi_top_pane_g4

0x6d67,	// (0x00051c17) vkb2_row_keypad_pane_ParamLimits

0x6d67,	// (0x00051c17) vkb2_row_keypad_pane

0x6fbf,	// (0x00051e6f) vkb2_cell_t_keypad_pane_ParamLimits

0x6fbf,	// (0x00051e6f) vkb2_cell_t_keypad_pane

0x6fcf,	// (0x00051e7f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6fcf,	// (0x00051e7f) vkb2_cell_t_keypad_pane_cp08

0x6fe4,	// (0x00051e94) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6fe4,	// (0x00051e94) vkb2_cell_t_keypad_pane_cp09

0x6ff8,	// (0x00051ea8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6ff8,	// (0x00051ea8) vkb2_cell_t_keypad_pane_cp01

0x7009,	// (0x00051eb9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7009,	// (0x00051eb9) vkb2_cell_t_keypad_pane_cp02

0x701a,	// (0x00051eca) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x701a,	// (0x00051eca) vkb2_cell_t_keypad_pane_cp03

0x702b,	// (0x00051edb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x702b,	// (0x00051edb) vkb2_cell_t_keypad_pane_cp04

0x703c,	// (0x00051eec) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x703c,	// (0x00051eec) vkb2_cell_t_keypad_pane_cp05

0x704d,	// (0x00051efd) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x704d,	// (0x00051efd) vkb2_cell_t_keypad_pane_cp06

0x7060,	// (0x00051f10) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7060,	// (0x00051f10) vkb2_cell_t_keypad_pane_cp07

0x7075,	// (0x00051f25) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7075,	// (0x00051f25) vkb2_cell_t_keypad_pane_cp10

0x6818,	// (0x000516c8) vkb2_cell_t_keypad_pane_g1

0xe190,	// (0x00059040) vkb2_cell_t_keypad_pane_t1

0x4db3,	// (0x0004fc63) popup_grid_graphic2_window

0xe1a2,	// (0x00059052) aid_size_cell_graphic2_ParamLimits

0xe1a2,	// (0x00059052) aid_size_cell_graphic2

0xc464,	// (0x00057314) bg_popup_window_pane_cp21_ParamLimits

0xc464,	// (0x00057314) bg_popup_window_pane_cp21

0xe1ce,	// (0x0005907e) graphic2_pages_pane_ParamLimits

0xe1ce,	// (0x0005907e) graphic2_pages_pane

0xe214,	// (0x000590c4) grid_graphic2_control_pane_ParamLimits

0xe214,	// (0x000590c4) grid_graphic2_control_pane

0xe242,	// (0x000590f2) grid_graphic2_pane_ParamLimits

0xe242,	// (0x000590f2) grid_graphic2_pane

0xe2a4,	// (0x00059154) cell_graphic2_pane

0x727a,	// (0x0005212a) main_comp_mode_pane

0xd43a,	// (0x000582ea) list_ai3_gene_pane_ParamLimits

0xd802,	// (0x000586b2) bg_popup_window_pane_cp19_ParamLimits

0xd80e,	// (0x000586be) bg_touch_area_indi_pane_ParamLimits

0xd80e,	// (0x000586be) bg_touch_area_indi_pane

0xd824,	// (0x000586d4) bg_touch_area_indi_pane_cp01_ParamLimits

0xd824,	// (0x000586d4) bg_touch_area_indi_pane_cp01

0xd83c,	// (0x000586ec) bg_touch_area_indi_pane_cp02_ParamLimits

0xd83c,	// (0x000586ec) bg_touch_area_indi_pane_cp02

0xd856,	// (0x00058706) bg_touch_area_indi_pane_cp03_ParamLimits

0xd856,	// (0x00058706) bg_touch_area_indi_pane_cp03

0xd870,	// (0x00058720) popup_slider_window_g1_ParamLimits

0xd88c,	// (0x0005873c) popup_slider_window_g2_ParamLimits

0xd8a8,	// (0x00058758) popup_slider_window_g3_ParamLimits

0xfd18,	// (0x0005abc8) popup_slider_window_g_ParamLimits

0xd904,	// (0x000587b4) popup_slider_window_t1_ParamLimits

0xd978,	// (0x00058828) small_volume_slider_vertical_pane_ParamLimits

0xe2a4,	// (0x00059154) cell_graphic2_pane_ParamLimits

0xe2f9,	// (0x000591a9) bg_button_pane_cp10_ParamLimits

0xe2f9,	// (0x000591a9) bg_button_pane_cp10

0xe30e,	// (0x000591be) bg_button_pane_cp11_ParamLimits

0xe30e,	// (0x000591be) bg_button_pane_cp11

0xe323,	// (0x000591d3) graphic2_pages_pane_g1_ParamLimits

0xe323,	// (0x000591d3) graphic2_pages_pane_g1

0xe33e,	// (0x000591ee) graphic2_pages_pane_g2_ParamLimits

0xe33e,	// (0x000591ee) graphic2_pages_pane_g2

0x0001,

0xfddc,	// (0x0005ac8c) graphic2_pages_pane_g_ParamLimits

0xfddc,	// (0x0005ac8c) graphic2_pages_pane_g

0xe356,	// (0x00059206) graphic2_pages_pane_t1_ParamLimits

0xe356,	// (0x00059206) graphic2_pages_pane_t1

0xe36c,	// (0x0005921c) cell_graphic2_control_pane_ParamLimits

0xe36c,	// (0x0005921c) cell_graphic2_control_pane

0xe386,	// (0x00059236) cell_graphic2_pane_g1_ParamLimits

0xe386,	// (0x00059236) cell_graphic2_pane_g1

0xe393,	// (0x00059243) cell_graphic2_pane_g2_ParamLimits

0xe393,	// (0x00059243) cell_graphic2_pane_g2

0xe3a0,	// (0x00059250) cell_graphic2_pane_g3_ParamLimits

0xe3a0,	// (0x00059250) cell_graphic2_pane_g3

0xe3ad,	// (0x0005925d) cell_graphic2_pane_g4_ParamLimits

0xe3ad,	// (0x0005925d) cell_graphic2_pane_g4

0xe3ba,	// (0x0005926a) cell_graphic2_pane_g5_ParamLimits

0xe3ba,	// (0x0005926a) cell_graphic2_pane_g5

0x0004,

0xfde1,	// (0x0005ac91) cell_graphic2_pane_g_ParamLimits

0xfde1,	// (0x0005ac91) cell_graphic2_pane_g

0xe3d5,	// (0x00059285) cell_graphic2_pane_t1_ParamLimits

0xe3d5,	// (0x00059285) cell_graphic2_pane_t1

0x9cf2,	// (0x00054ba2) grid_highlight_pane_cp11_ParamLimits

0x9cf2,	// (0x00054ba2) grid_highlight_pane_cp11

0x80dc,	// (0x00052f8c) bg_button_pane_cp05

0xe3eb,	// (0x0005929b) cell_graphic2_control_pane_g1

0xc244,	// (0x000570f4) bg_touch_area_indi_pane_g1

0xe3f8,	// (0x000592a8) aid_cmod_rocker_key_size

0xe402,	// (0x000592b2) aid_cmode_itu_key_size

0xe40c,	// (0x000592bc) main_cmode_video_pane

0xe416,	// (0x000592c6) main_comp_mode_itu_pane

0xe422,	// (0x000592d2) main_comp_mode_rocker_pane

0xe42e,	// (0x000592de) cell_cmode_rocker_pane_ParamLimits

0xe42e,	// (0x000592de) cell_cmode_rocker_pane

0xe442,	// (0x000592f2) cell_cmode_itu_pane_ParamLimits

0xe442,	// (0x000592f2) cell_cmode_itu_pane

0x80dc,	// (0x00052f8c) bg_button_pane_cp06_ParamLimits

0x80dc,	// (0x00052f8c) bg_button_pane_cp06

0xc4dc,	// (0x0005738c) cell_cmode_rocker_pane_g1_ParamLimits

0xc4dc,	// (0x0005738c) cell_cmode_rocker_pane_g1

0xda1f,	// (0x000588cf) cell_cmode_rocker_pane_g2_ParamLimits

0xda1f,	// (0x000588cf) cell_cmode_rocker_pane_g2

0x0001,

0xfdec,	// (0x0005ac9c) cell_cmode_rocker_pane_g_ParamLimits

0xfdec,	// (0x0005ac9c) cell_cmode_rocker_pane_g

0x727a,	// (0x0005212a) bg_button_pane_cp07

0xe459,	// (0x00059309) cell_cmode_itu_pane_g1

0xe462,	// (0x00059312) cell_cmode_itu_pane_t1

0xe470,	// (0x00059320) cell_cmode_itu_pane_t2

0x0001,

0xfdf1,	// (0x0005aca1) cell_cmode_itu_pane_t

0xdc6e,	// (0x00058b1e) aid_touch_ctrl_left

0xdc76,	// (0x00058b26) aid_touch_ctrl_right

0x727a,	// (0x0005212a) compa_mode_pane

0xe47e,	// (0x0005932e) aid_cmod_rocker_key_size_cp

0xe488,	// (0x00059338) aid_cmode_itu_key_size_cp

0xe492,	// (0x00059342) compa_mode_pane_g1

0xe49a,	// (0x0005934a) compa_mode_pane_g2

0xe4a2,	// (0x00059352) compa_mode_pane_g3

0x0002,

0xfdf6,	// (0x0005aca6) compa_mode_pane_g

0xe4aa,	// (0x0005935a) main_comp_mode_itu_pane_cp

0xe4b2,	// (0x00059362) main_comp_mode_rocker_pane_cp

0xe4ba,	// (0x0005936a) cell_cmode_itu_pane_cp_ParamLimits

0xe4ba,	// (0x0005936a) cell_cmode_itu_pane_cp

0xe4cf,	// (0x0005937f) cell_cmode_rocker_pane_cp_ParamLimits

0xe4cf,	// (0x0005937f) cell_cmode_rocker_pane_cp

0x80dc,	// (0x00052f8c) bg_button_pane_cp06_cp_ParamLimits

0x80dc,	// (0x00052f8c) bg_button_pane_cp06_cp

0xc4dc,	// (0x0005738c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4dc,	// (0x0005738c) cell_cmode_rocker_pane_g1_cp

0xc244,	// (0x000570f4) cell_cmode_rocker_pane_g2_cp

0x727a,	// (0x0005212a) bg_button_pane_cp07_cp

0xe4e1,	// (0x00059391) cell_cmode_itu_pane_g1_cp

0xe4ea,	// (0x0005939a) cell_cmode_itu_pane_t1_cp

0xe4ea,	// (0x0005939a) cell_cmode_itu_pane_t2_cp

0xb188,	// (0x00056038) settings_code_pane_cp2

0x736e,	// (0x0005221e) bg_popup_window_pane_cp3_ParamLimits

0x77e6,	// (0x00052696) heading_pane_cp3_ParamLimits

0x77f2,	// (0x000526a2) listscroll_popup_graphic_pane_ParamLimits

0x65ab,	// (0x0005145b) fep_hwr_aid_pane_ParamLimits

0x6a3e,	// (0x000518ee) aid_touch_sctrl_top_ParamLimits

0x6a59,	// (0x00051909) sctrl_sk_top_pane_g1_ParamLimits

0x6818,	// (0x000516c8) sctrl_sk_top_pane_g2_ParamLimits

0xfd31,	// (0x0005abe1) sctrl_sk_top_pane_g_ParamLimits

0x6a66,	// (0x00051916) sctrl_sk_top_pane_t1_ParamLimits

0x6a3e,	// (0x000518ee) aid_touch_sctrl_bottom_ParamLimits

0x6a66,	// (0x00051916) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb93,	// (0x00058a43) aid_area_touch_clock

0x6c59,	// (0x00051b09) aid_vkb2_area_top_pane_cell_ParamLimits

0x6c59,	// (0x00051b09) aid_vkb2_area_top_pane_cell

0x6d89,	// (0x00051c39) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6d89,	// (0x00051c39) aid_vkb2_area_bottom_pane_cell

0xe11d,	// (0x00058fcd) popup_char_count_window

0xe4f8,	// (0x000593a8) popup_char_count_window_g1

0xe501,	// (0x000593b1) popup_char_count_window_g2

0xe50a,	// (0x000593ba) popup_char_count_window_g3

0x0002,

0xfdfd,	// (0x0005acad) popup_char_count_window_g

0xe513,	// (0x000593c3) popup_char_count_window_t1

0x6b13,	// (0x000519c3) popup_fep_char_preview_window_ParamLimits

0x6b13,	// (0x000519c3) popup_fep_char_preview_window

0x6c77,	// (0x00051b27) vkb2_top_candi_pane_ParamLimits

0x6c77,	// (0x00051b27) vkb2_top_candi_pane

0xe521,	// (0x000593d1) cell_vkb2_top_candi_pane_ParamLimits

0xe521,	// (0x000593d1) cell_vkb2_top_candi_pane

0x708a,	// (0x00051f3a) bg_popup_fep_char_preview_window_ParamLimits

0x708a,	// (0x00051f3a) bg_popup_fep_char_preview_window

0x7098,	// (0x00051f48) popup_fep_char_preview_window_t1_ParamLimits

0x7098,	// (0x00051f48) popup_fep_char_preview_window_t1

0xe572,	// (0x00059422) bg_popup_fep_char_preview_window_g1

0xe57a,	// (0x0005942a) bg_popup_fep_char_preview_window_g2

0xe582,	// (0x00059432) bg_popup_fep_char_preview_window_g3

0xe58a,	// (0x0005943a) bg_popup_fep_char_preview_window_g4

0xe592,	// (0x00059442) bg_popup_fep_char_preview_window_g5

0x70d2,	// (0x00051f82) bg_popup_fep_char_preview_window_g6

0xe59a,	// (0x0005944a) bg_popup_fep_char_preview_window_g7

0xe5a2,	// (0x00059452) bg_popup_fep_char_preview_window_g8

0xe5aa,	// (0x0005945a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe04,	// (0x0005acb4) bg_popup_fep_char_preview_window_g

0x6818,	// (0x000516c8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6818,	// (0x000516c8) cell_vkb2_top_candi_pane_g1

0x6826,	// (0x000516d6) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6826,	// (0x000516d6) cell_vkb2_top_candi_pane_g2

0xdc13,	// (0x00058ac3) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdc13,	// (0x00058ac3) cell_vkb2_top_candi_pane_g3

0x70da,	// (0x00051f8a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x70da,	// (0x00051f8a) cell_vkb2_top_candi_pane_g4

0xc9db,	// (0x0005788b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9db,	// (0x0005788b) cell_vkb2_top_candi_pane_g5

0x70fb,	// (0x00051fab) cell_vkb2_top_candi_pane_g6_ParamLimits

0x70fb,	// (0x00051fab) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe17,	// (0x0005acc7) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe17,	// (0x0005acc7) cell_vkb2_top_candi_pane_g

0x7109,	// (0x00051fb9) cell_vkb2_top_candi_pane_t1

0x61be,	// (0x0005106e) aid_size_touch_slider_mark_ParamLimits

0x61be,	// (0x0005106e) aid_size_touch_slider_mark

0xe204,	// (0x000590b4) grid_graphic2_catg_pane_ParamLimits

0xe204,	// (0x000590b4) grid_graphic2_catg_pane

0xe27e,	// (0x0005912e) popup_grid_graphic2_window_t1_ParamLimits

0xe27e,	// (0x0005912e) popup_grid_graphic2_window_t1

0xe290,	// (0x00059140) popup_grid_graphic2_window_t2_ParamLimits

0xe290,	// (0x00059140) popup_grid_graphic2_window_t2

0x0001,

0xfdd7,	// (0x0005ac87) popup_grid_graphic2_window_t_ParamLimits

0xfdd7,	// (0x0005ac87) popup_grid_graphic2_window_t

0x80dc,	// (0x00052f8c) bg_button_pane_cp05_ParamLimits

0xe3eb,	// (0x0005929b) cell_graphic2_control_pane_g1_ParamLimits

0xe5b2,	// (0x00059462) cell_graphic2_catg_pane_ParamLimits

0xe5b2,	// (0x00059462) cell_graphic2_catg_pane

0x727a,	// (0x0005212a) bg_button_pane_cp12

0xe5c4,	// (0x00059474) cell_graphic2_catg_pane_g1

0xdb5f,	// (0x00058a0f) cell_tb_ext_pane_t1_ParamLimits

0x6ea6,	// (0x00051d56) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6ea6,	// (0x00051d56) vkb2_top_cell_right_narrow_pane

0x6ebe,	// (0x00051d6e) vkb2_top_cell_right_wide_pane_ParamLimits

0x6ebe,	// (0x00051d6e) vkb2_top_cell_right_wide_pane

0x659d,	// (0x0005144d) bg_vkb2_func_pane_ParamLimits

0x659d,	// (0x0005144d) bg_vkb2_func_pane

0x6f2f,	// (0x00051ddf) vkb2_top_cell_left_pane_g1_ParamLimits

0x659d,	// (0x0005144d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x659d,	// (0x0005144d) bg_vkb2_fuc_pane_cp03

0x6fa3,	// (0x00051e53) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c08,	// (0x00054ab8) bg_vkb2_func_pane_g1

0x9c10,	// (0x00054ac0) bg_vkb2_func_pane_g2

0x9c20,	// (0x00054ad0) bg_vkb2_func_pane_g3

0x9c18,	// (0x00054ac8) bg_vkb2_func_pane_g4

0x9c28,	// (0x00054ad8) bg_vkb2_func_pane_g5

0x9c30,	// (0x00054ae0) bg_vkb2_func_pane_g6

0x9c38,	// (0x00054ae8) bg_vkb2_func_pane_g7

0x9c40,	// (0x00054af0) bg_vkb2_func_pane_g8

0x9c00,	// (0x00054ab0) bg_vkb2_func_pane_g9

0x0008,

0xfe24,	// (0x0005acd4) bg_vkb2_func_pane_g

0x659d,	// (0x0005144d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x659d,	// (0x0005144d) bg_vkb2_fuc_pane_cp01

0x6f2f,	// (0x00051ddf) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6f2f,	// (0x00051ddf) vkb2_top_cell_right_wide_pane_g1

0x659d,	// (0x0005144d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x659d,	// (0x0005144d) bg_vkb2_fuc_pane_cp02

0x6fa3,	// (0x00051e53) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6fa3,	// (0x00051e53) vkb2_top_cell_right_narrow_pane_g1

0xd780,	// (0x00058630) aid_touch_area_decrease_ParamLimits

0xd780,	// (0x00058630) aid_touch_area_decrease

0xd7a4,	// (0x00058654) aid_touch_area_increase_ParamLimits

0xd7a4,	// (0x00058654) aid_touch_area_increase

0xd7b0,	// (0x00058660) aid_touch_area_mute_ParamLimits

0xd7b0,	// (0x00058660) aid_touch_area_mute

0xd7d4,	// (0x00058684) aid_touch_area_slider_ParamLimits

0xd7d4,	// (0x00058684) aid_touch_area_slider

0xd8c4,	// (0x00058774) popup_slider_window_g4_ParamLimits

0xd8c4,	// (0x00058774) popup_slider_window_g4

0xd8d0,	// (0x00058780) popup_slider_window_g5_ParamLimits

0xd8d0,	// (0x00058780) popup_slider_window_g5

0xd8f2,	// (0x000587a2) popup_slider_window_g6_ParamLimits

0xd8f2,	// (0x000587a2) popup_slider_window_g6

0xd932,	// (0x000587e2) popup_slider_window_t2_ParamLimits

0xd932,	// (0x000587e2) popup_slider_window_t2

0x0001,

0xfd25,	// (0x0005abd5) popup_slider_window_t_ParamLimits

0xfd25,	// (0x0005abd5) popup_slider_window_t

0xd94a,	// (0x000587fa) slider_pane_ParamLimits

0xd94a,	// (0x000587fa) slider_pane

0xe5cd,	// (0x0005947d) slider_pane_g1_ParamLimits

0xe5cd,	// (0x0005947d) slider_pane_g1

0xe5e1,	// (0x00059491) slider_pane_g2_ParamLimits

0xe5e1,	// (0x00059491) slider_pane_g2

0xe5f7,	// (0x000594a7) slider_pane_g3_ParamLimits

0xe5f7,	// (0x000594a7) slider_pane_g3

0x0003,

0xfe37,	// (0x0005ace7) slider_pane_g_ParamLimits

0xfe37,	// (0x0005ace7) slider_pane_g

0x95fa,	// (0x000544aa) popup_tb_float_extension_window_ParamLimits

0x95fa,	// (0x000544aa) popup_tb_float_extension_window

0xe623,	// (0x000594d3) aid_size_cell_tb_float_ext

0x727a,	// (0x0005212a) bg_popup_sub_window_cp28

0xe62f,	// (0x000594df) grid_tb_float_ext_pane

0xe63b,	// (0x000594eb) cell_tb_float_ext_pane_ParamLimits

0xe63b,	// (0x000594eb) cell_tb_float_ext_pane

0xe657,	// (0x00059507) cell_tb_float_ext_pane_g1

0xe660,	// (0x00059510) grid_highlight_pane_cp12

0x66f2,	// (0x000515a2) cell_last_hwr_side_pane_ParamLimits

0x66f2,	// (0x000515a2) cell_last_hwr_side_pane

0xc244,	// (0x000570f4) cell_last_hwr_side_pane_g1

0xe669,	// (0x00059519) cell_last_hwr_side_pane_g2

0x0001,

0xfe40,	// (0x0005acf0) cell_last_hwr_side_pane_g

0x6e55,	// (0x00051d05) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6e55,	// (0x00051d05) vkb2_area_bottom_space_btn_pane

0x6818,	// (0x000516c8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe190,	// (0x00059040) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7109,	// (0x00051fb9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7127,	// (0x00051fd7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7127,	// (0x00051fd7) vkb2_area_bottom_space_btn_pane_g1

0x7161,	// (0x00052011) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7161,	// (0x00052011) vkb2_area_bottom_space_btn_pane_g2

0x7197,	// (0x00052047) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7197,	// (0x00052047) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe45,	// (0x0005acf5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe45,	// (0x0005acf5) vkb2_area_bottom_space_btn_pane_g

0x6662,	// (0x00051512) cel_fep_hwr_func_pane_ParamLimits

0x6662,	// (0x00051512) cel_fep_hwr_func_pane

0x669e,	// (0x0005154e) cell_hwr_side_button_pane_ParamLimits

0x669e,	// (0x0005154e) cell_hwr_side_button_pane

0xdb93,	// (0x00058a43) aid_area_touch_clock_ParamLimits

0x75f8,	// (0x000524a8) bg_uniindi_top_pane_ParamLimits

0xdba7,	// (0x00058a57) uniindi_top_pane_g1_ParamLimits

0xdbbd,	// (0x00058a6d) uniindi_top_pane_g2_ParamLimits

0xdbc9,	// (0x00058a79) uniindi_top_pane_g3_ParamLimits

0xdbda,	// (0x00058a8a) uniindi_top_pane_g4_ParamLimits

0xfd5d,	// (0x0005ac0d) uniindi_top_pane_g_ParamLimits

0xdbe7,	// (0x00058a97) uniindi_top_pane_t1_ParamLimits

0x75f8,	// (0x000524a8) bg_vkb2_func_pane_cp01_ParamLimits

0x75f8,	// (0x000524a8) bg_vkb2_func_pane_cp01

0xe672,	// (0x00059522) cel_fep_hwr_func_pane_g1_ParamLimits

0xe672,	// (0x00059522) cel_fep_hwr_func_pane_g1

0x75f8,	// (0x000524a8) bg_vkb2_func_pane_cp02_ParamLimits

0x75f8,	// (0x000524a8) bg_vkb2_func_pane_cp02

0xe672,	// (0x00059522) cell_hwr_side_button_pane_g1_ParamLimits

0xe672,	// (0x00059522) cell_hwr_side_button_pane_g1

0x9a81,	// (0x00054931) status_pane_g4_ParamLimits

0x9a81,	// (0x00054931) status_pane_g4

0x9a9b,	// (0x0005494b) status_pane_t1

0xbfe0,	// (0x00056e90) form2_midp_gauge_slider_cont_pane

0xbfe8,	// (0x00056e98) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbffa,	// (0x00056eaa) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc00c,	// (0x00056ebc) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1d,	// (0x0005a9cd) form2_midp_gauge_slider_pane_t_ParamLimits

0xc01e,	// (0x00056ece) form2_midp_slider_pane_ParamLimits

0x6adb,	// (0x0005198b) aid_size_cell_func_vkb2_ParamLimits

0x6adb,	// (0x0005198b) aid_size_cell_func_vkb2

0xe60f,	// (0x000594bf) slider_pane_g4_ParamLimits

0xe60f,	// (0x000594bf) slider_pane_g4

0x71e1,	// (0x00052091) form2_midp_gauge_slider_pane_t2_cp01

0x71ef,	// (0x0005209f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x71ef,	// (0x0005209f) form2_midp_gauge_slider_pane_t3_cp01

0x720c,	// (0x000520bc) form2_midp_slider_pane_cp01

0x727a,	// (0x0005212a) navi_smil_pane

0xe6ab,	// (0x0005955b) navi_smil_pane_g1

0xe6b3,	// (0x00059563) navi_smil_pane_t1

0xe680,	// (0x00059530) form2_midp_slider_pane_g1

0xe689,	// (0x00059539) form2_midp_slider_pane_g2

0xe691,	// (0x00059541) form2_midp_slider_pane_g3

0xe680,	// (0x00059530) form2_midp_slider_pane_g4

0xe699,	// (0x00059549) form2_midp_slider_pane_g5

0x0004,

0xfe4e,	// (0x0005acfe) form2_midp_slider_pane_g

0x71d1,	// (0x00052081) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x71d1,	// (0x00052081) vkb2_area_bottom_space_btn_pane_g4

0x9899,	// (0x00054749) lc0_navi_pane_ParamLimits

0x9899,	// (0x00054749) lc0_navi_pane

0x9915,	// (0x000547c5) lc0_stat_indi_pane_ParamLimits

0x9915,	// (0x000547c5) lc0_stat_indi_pane

0x992c,	// (0x000547dc) ls0_title_pane_ParamLimits

0x992c,	// (0x000547dc) ls0_title_pane

0x80dc,	// (0x00052f8c) bg_popup_sub_pane_cp14_ParamLimits

0xdb7a,	// (0x00058a2a) list_uniindi_pane_ParamLimits

0xdb86,	// (0x00058a36) uniindi_top_pane_ParamLimits

0xdc46,	// (0x00058af6) list_single_uniindi_pane_g1_ParamLimits

0xdc59,	// (0x00058b09) list_single_uniindi_pane_t1_ParamLimits

0x7215,	// (0x000520c5) lc0_stat_clock_pane_ParamLimits

0x7215,	// (0x000520c5) lc0_stat_clock_pane

0xe6c1,	// (0x00059571) lc0_stat_indi_pane_g1_ParamLimits

0xe6c1,	// (0x00059571) lc0_stat_indi_pane_g1

0xe6ce,	// (0x0005957e) lc0_stat_indi_pane_g2_ParamLimits

0xe6ce,	// (0x0005957e) lc0_stat_indi_pane_g2

0x0001,

0xfe59,	// (0x0005ad09) lc0_stat_indi_pane_g_ParamLimits

0xfe59,	// (0x0005ad09) lc0_stat_indi_pane_g

0x7222,	// (0x000520d2) lc0_uni_indicator_pane_ParamLimits

0x7222,	// (0x000520d2) lc0_uni_indicator_pane

0xe6db,	// (0x0005958b) ls0_title_pane_g1_ParamLimits

0xe6db,	// (0x0005958b) ls0_title_pane_g1

0xe6ef,	// (0x0005959f) ls0_title_pane_t1_ParamLimits

0xe6ef,	// (0x0005959f) ls0_title_pane_t1

0x722f,	// (0x000520df) lc0_uni_indicator_pane_g1_ParamLimits

0x722f,	// (0x000520df) lc0_uni_indicator_pane_g1

0xe725,	// (0x000595d5) lc0_stat_clock_pane_t1

0x727a,	// (0x0005212a) main_ai5_pane

0xe733,	// (0x000595e3) ai5_sk_pane_ParamLimits

0xe733,	// (0x000595e3) ai5_sk_pane

0xe740,	// (0x000595f0) cell_ai5_widget_pane_ParamLimits

0xe740,	// (0x000595f0) cell_ai5_widget_pane

0xe7b6,	// (0x00059666) aid_size_cell_widget_grid

0xe7ca,	// (0x0005967a) bg_ai5_widget_pane_ParamLimits

0xe7ca,	// (0x0005967a) bg_ai5_widget_pane

0xe7f2,	// (0x000596a2) cell_ai5_widget_pane_g2

0xe802,	// (0x000596b2) cell_ai5_widget_pane_g3

0xe816,	// (0x000596c6) cell_ai5_widget_pane_g4

0xe822,	// (0x000596d2) cell_ai5_widget_pane_g5

0xe82e,	// (0x000596de) cell_ai5_widget_pane_g6

0xe83c,	// (0x000596ec) cell_ai5_widget_pane_g7

0xe884,	// (0x00059734) cell_ai5_widget_pane_t1_ParamLimits

0xe884,	// (0x00059734) cell_ai5_widget_pane_t1

0xe8a1,	// (0x00059751) cell_ai5_widget_pane_t2_ParamLimits

0xe8a1,	// (0x00059751) cell_ai5_widget_pane_t2

0xe8b9,	// (0x00059769) cell_ai5_widget_pane_t3_ParamLimits

0xe8b9,	// (0x00059769) cell_ai5_widget_pane_t3

0xe8d1,	// (0x00059781) cell_ai5_widget_pane_t4_ParamLimits

0xe8d1,	// (0x00059781) cell_ai5_widget_pane_t4

0xe8eb,	// (0x0005979b) cell_ai5_widget_pane_t5_ParamLimits

0xe8eb,	// (0x0005979b) cell_ai5_widget_pane_t5

0xe90a,	// (0x000597ba) cell_ai5_widget_pane_t6_ParamLimits

0xe90a,	// (0x000597ba) cell_ai5_widget_pane_t6

0xe91c,	// (0x000597cc) cell_ai5_widget_pane_t7_ParamLimits

0xe91c,	// (0x000597cc) cell_ai5_widget_pane_t7

0xe935,	// (0x000597e5) cell_ai5_widget_pane_t8_ParamLimits

0xe935,	// (0x000597e5) cell_ai5_widget_pane_t8

0x0009,

0xfe73,	// (0x0005ad23) cell_ai5_widget_pane_t_ParamLimits

0xfe73,	// (0x0005ad23) cell_ai5_widget_pane_t

0xe97d,	// (0x0005982d) grid_ai5_widget_pane

0x80dc,	// (0x00052f8c) highlight_cell_ai5_widget_pane_ParamLimits

0x80dc,	// (0x00052f8c) highlight_cell_ai5_widget_pane

0xe994,	// (0x00059844) ai5_sk_left_pane

0xe99e,	// (0x0005984e) ai5_sk_middle_pane

0xe9a8,	// (0x00059858) ai5_sk_right_pane

0xe9b2,	// (0x00059862) bg_ai5_widget_pane_g1_ParamLimits

0xe9b2,	// (0x00059862) bg_ai5_widget_pane_g1

0xe9be,	// (0x0005986e) bg_ai5_widget_pane_g2_ParamLimits

0xe9be,	// (0x0005986e) bg_ai5_widget_pane_g2

0xe9ca,	// (0x0005987a) bg_ai5_widget_pane_g3_ParamLimits

0xe9ca,	// (0x0005987a) bg_ai5_widget_pane_g3

0xe9d6,	// (0x00059886) bg_ai5_widget_pane_g4_ParamLimits

0xe9d6,	// (0x00059886) bg_ai5_widget_pane_g4

0xe9e2,	// (0x00059892) bg_ai5_widget_pane_g5_ParamLimits

0xe9e2,	// (0x00059892) bg_ai5_widget_pane_g5

0xe9ee,	// (0x0005989e) bg_ai5_widget_pane_g6_ParamLimits

0xe9ee,	// (0x0005989e) bg_ai5_widget_pane_g6

0xe9fa,	// (0x000598aa) bg_ai5_widget_pane_g7_ParamLimits

0xe9fa,	// (0x000598aa) bg_ai5_widget_pane_g7

0xea06,	// (0x000598b6) bg_ai5_widget_pane_g8_ParamLimits

0xea06,	// (0x000598b6) bg_ai5_widget_pane_g8

0xea12,	// (0x000598c2) bg_ai5_widget_pane_g9_ParamLimits

0xea12,	// (0x000598c2) bg_ai5_widget_pane_g9

0x0008,

0xfe88,	// (0x0005ad38) bg_ai5_widget_pane_g_ParamLimits

0xfe88,	// (0x0005ad38) bg_ai5_widget_pane_g

0xea39,	// (0x000598e9) cell_shortcut_ai5_widget_pane_ParamLimits

0xea39,	// (0x000598e9) cell_shortcut_ai5_widget_pane

0x743a,	// (0x000522ea) bg_cell_shortcut_ai5_widget_pane

0xea4b,	// (0x000598fb) cell_grid_ai5_widget_pane_g1

0xea54,	// (0x00059904) highlight_cell_shortcut_ai5_widget_pane

0x9c08,	// (0x00054ab8) ai5_sk_left_pane_g1

0xea5c,	// (0x0005990c) ai5_sk_left_pane_g2

0xea64,	// (0x00059914) ai5_sk_left_pane_g3

0xea6c,	// (0x0005991c) ai5_sk_left_pane_g4

0x0003,

0xfe9b,	// (0x0005ad4b) ai5_sk_left_pane_g

0xea74,	// (0x00059924) ai5_sk_left_pane_t1

0x9c10,	// (0x00054ac0) ai5_sk_right_pane_g1

0xea82,	// (0x00059932) ai5_sk_right_pane_g2

0xea8a,	// (0x0005993a) ai5_sk_right_pane_g3

0xea92,	// (0x00059942) ai5_sk_right_pane_g4

0x0003,

0xfea4,	// (0x0005ad54) ai5_sk_right_pane_g

0xea9a,	// (0x0005994a) ai5_sk_right_pane_t1

0x9c10,	// (0x00054ac0) ai5_sk_middle_pane_g1

0x9c08,	// (0x00054ab8) ai5_sk_middle_pane_g2

0x9c28,	// (0x00054ad8) ai5_sk_middle_pane_g3

0xea8a,	// (0x0005993a) ai5_sk_middle_pane_g4

0xea64,	// (0x00059914) ai5_sk_middle_pane_g5

0xeaa8,	// (0x00059958) ai5_sk_middle_pane_g6

0xeab0,	// (0x00059960) ai5_sk_middle_pane_g7

0x0006,

0xfead,	// (0x0005ad5d) ai5_sk_middle_pane_g

0x971b,	// (0x000545cb) aid_touch_area_size_lc0_ParamLimits

0x971b,	// (0x000545cb) aid_touch_area_size_lc0

0x6847,	// (0x000516f7) cell_hwr_candidate_pane_t1_ParamLimits

0x9739,	// (0x000545e9) aid_touch_navi_pane

0x9a2b,	// (0x000548db) status_dt_navi_pane_ParamLimits

0x9a2b,	// (0x000548db) status_dt_navi_pane

0x9a38,	// (0x000548e8) status_dt_sta_pane_ParamLimits

0x9a38,	// (0x000548e8) status_dt_sta_pane

0xeab8,	// (0x00059968) dt_sta_controll_pane

0xeac5,	// (0x00059975) dt_sta_indi_pane

0xead6,	// (0x00059986) dt_sta_title_pane

0x75f8,	// (0x000524a8) bg_dt_sta_indi_pane_ParamLimits

0x75f8,	// (0x000524a8) bg_dt_sta_indi_pane

0xeae9,	// (0x00059999) dt_sta_battery_pane

0xeaf1,	// (0x000599a1) dt_sta_indi_pane_g1

0xeafa,	// (0x000599aa) dt_sta_indi_pane_g2

0xeb03,	// (0x000599b3) dt_sta_indi_pane_g3

0x0002,

0xfebc,	// (0x0005ad6c) dt_sta_indi_pane_g

0xeb0c,	// (0x000599bc) dt_sta_signal_pane

0x80dc,	// (0x00052f8c) bg_dt_sta_title_pane_ParamLimits

0x80dc,	// (0x00052f8c) bg_dt_sta_title_pane

0xeb15,	// (0x000599c5) dt_sta_title_pane_g1

0xeb1d,	// (0x000599cd) dt_sta_title_pane_t1_ParamLimits

0xeb1d,	// (0x000599cd) dt_sta_title_pane_t1

0x727a,	// (0x0005212a) bg_dt_sta_control_pane

0xeb32,	// (0x000599e2) dt_sta_controll_pane_g1

0xeb3b,	// (0x000599eb) bg_dt_sta_title_pane_g1

0xeb44,	// (0x000599f4) bg_dt_sta_title_pane_g2

0xeb4d,	// (0x000599fd) bg_dt_sta_title_pane_g3

0x0002,

0xfec3,	// (0x0005ad73) bg_dt_sta_title_pane_g

0xc244,	// (0x000570f4) bg_dt_sta_indi_pane_g1

0xeb56,	// (0x00059a06) dt_sta_signal_pane_g1

0xeb5e,	// (0x00059a0e) dt_sta_signal_pane_g2

0x0001,

0xfeca,	// (0x0005ad7a) dt_sta_signal_pane_g

0xeb66,	// (0x00059a16) dt_sta_battery_pane_g1

0xeb6f,	// (0x00059a1f) dt_sta_battery_pane_t1

0xc244,	// (0x000570f4) bg_dt_sta_control_pane_g1

0x8838,	// (0x000536e8) fep_china_uni_eep_pane

0x8840,	// (0x000536f0) fep_china_uni_entry_pane_ParamLimits

0x8850,	// (0x00053700) popup_fep_china_uni_window_g1_ParamLimits

0x8860,	// (0x00053710) popup_fep_china_uni_window_g2_ParamLimits

0x8860,	// (0x00053710) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0005a612) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0005a612) popup_fep_china_uni_window_g

0xeb7e,	// (0x00059a2e) fep_china_uni_eep_pane_g1

0xeb86,	// (0x00059a36) fep_china_uni_eep_pane_t1

0xe6a2,	// (0x00059552) aid_touch_area_size_smil_player

0x9891,	// (0x00054741) lc0_clock_pane

0x9a8f,	// (0x0005493f) status_pane_g5_ParamLimits

0x9a8f,	// (0x0005493f) status_pane_g5

0x927f,	// (0x0005412f) popup_keymap_window

0x9a4d,	// (0x000548fd) status_icon_pane

0xe802,	// (0x000596b2) cell_ai5_widget_pane_g3_ParamLimits

0xe816,	// (0x000596c6) cell_ai5_widget_pane_g4_ParamLimits

0xe822,	// (0x000596d2) cell_ai5_widget_pane_g5_ParamLimits

0xe848,	// (0x000596f8) cell_ai5_widget_pane_g8_ParamLimits

0xe848,	// (0x000596f8) cell_ai5_widget_pane_g8

0xe85c,	// (0x0005970c) cell_ai5_widget_pane_g9_ParamLimits

0xe85c,	// (0x0005970c) cell_ai5_widget_pane_g9

0xe870,	// (0x00059720) cell_ai5_widget_pane_g10_ParamLimits

0xe870,	// (0x00059720) cell_ai5_widget_pane_g10

0xeb95,	// (0x00059a45) status_icon_pane_g1

0x727a,	// (0x0005212a) bg_popup_sub_pane_cp13

0xeb9d,	// (0x00059a4d) popup_keymap_window_t1

0x9021,	// (0x00053ed1) control_pane_g6_ParamLimits

0x9021,	// (0x00053ed1) control_pane_g6

0x902e,	// (0x00053ede) control_pane_g7_ParamLimits

0x902e,	// (0x00053ede) control_pane_g7

0x903b,	// (0x00053eeb) control_pane_g8_ParamLimits

0x903b,	// (0x00053eeb) control_pane_g8

0xeab8,	// (0x00059968) dt_sta_controll_pane_ParamLimits

0xeac5,	// (0x00059975) dt_sta_indi_pane_ParamLimits

0xead6,	// (0x00059986) dt_sta_title_pane_ParamLimits

0x8014,	// (0x00052ec4) aid_size_touch_scroll_bar_cale

0x4e90,	// (0x0004fd40) popup_discreet_window_ParamLimits

0x4e90,	// (0x0004fd40) popup_discreet_window

0x4f1e,	// (0x0004fdce) popup_sk_window

0xa275,	// (0x00055125) bg_popup_sub_pane_cp28_ParamLimits

0xa275,	// (0x00055125) bg_popup_sub_pane_cp28

0xebab,	// (0x00059a5b) popup_discreet_window_g1_ParamLimits

0xebab,	// (0x00059a5b) popup_discreet_window_g1

0xebcb,	// (0x00059a7b) popup_discreet_window_t1_ParamLimits

0xebcb,	// (0x00059a7b) popup_discreet_window_t1

0xebe9,	// (0x00059a99) popup_discreet_window_t2_ParamLimits

0xebe9,	// (0x00059a99) popup_discreet_window_t2

0x0002,

0xfecf,	// (0x0005ad7f) popup_discreet_window_t_ParamLimits

0xfecf,	// (0x0005ad7f) popup_discreet_window_t

0x7242,	// (0x000520f2) popup_sk_window_g1

0x724c,	// (0x000520fc) popup_sk_window_g2

0x0001,

0xfed6,	// (0x0005ad86) popup_sk_window_g

0xec3b,	// (0x00059aeb) popup_sk_window_t1

0xec49,	// (0x00059af9) popup_sk_window_t1_copy1

0xe7f2,	// (0x000596a2) cell_ai5_widget_pane_g2_ParamLimits

0xe947,	// (0x000597f7) cell_ai5_widget_pane_t9_ParamLimits

0xe947,	// (0x000597f7) cell_ai5_widget_pane_t9

0x727a,	// (0x0005212a) main_fep_fshwr2_pane

0xec57,	// (0x00059b07) aid_fshwr2_btn_pane

0xec5f,	// (0x00059b0f) aid_fshwr2_syb_pane

0xec67,	// (0x00059b17) aid_fshwr2_txt_pane

0xec6f,	// (0x00059b1f) fshwr2_func_candi_pane

0xec79,	// (0x00059b29) fshwr2_hwr_syb_pane

0xec83,	// (0x00059b33) fshwr2_icf_pane

0x727a,	// (0x0005212a) fshwr2_icf_bg_pane

0xeca5,	// (0x00059b55) fshwr2_icf_pane_t1_ParamLimits

0xeca5,	// (0x00059b55) fshwr2_icf_pane_t1

0xc244,	// (0x000570f4) fshwr2_func_candi_pane_g1

0xecbc,	// (0x00059b6c) fshwr2_func_candi_row_pane_ParamLimits

0xecbc,	// (0x00059b6c) fshwr2_func_candi_row_pane

0xeccd,	// (0x00059b7d) cell_fshwr2_syb_pane_ParamLimits

0xeccd,	// (0x00059b7d) cell_fshwr2_syb_pane

0xc4dc,	// (0x0005738c) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc4dc,	// (0x0005738c) fshwr2_hwr_syb_pane_g1

0x727a,	// (0x0005212a) bg_popup_call_pane_cp01

0xece7,	// (0x00059b97) fshwr2_func_candi_cell_pane_ParamLimits

0xece7,	// (0x00059b97) fshwr2_func_candi_cell_pane

0xed19,	// (0x00059bc9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed19,	// (0x00059bc9) fshwr2_func_candi_cell_bg_pane

0xed33,	// (0x00059be3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed33,	// (0x00059be3) fshwr2_func_candi_cell_pane_g1

0xed53,	// (0x00059c03) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed53,	// (0x00059c03) fshwr2_func_candi_cell_pane_t1

0x727a,	// (0x0005212a) bg_button_pane_cp08

0x8d46,	// (0x00053bf6) cell_fshwr2_syb_bg_pane

0xed66,	// (0x00059c16) cell_fshwr2_syb_bg_pane_g1

0xed6e,	// (0x00059c1e) cell_fshwr2_syb_bg_pane_t1

0x80dc,	// (0x00052f8c) main_tmo_pane

0xad9f,	// (0x00055c4f) uni_indicator_pane_g1_ParamLimits

0xadb4,	// (0x00055c64) uni_indicator_pane_g2_ParamLimits

0xadca,	// (0x00055c7a) uni_indicator_pane_g3_ParamLimits

0xade0,	// (0x00055c90) uni_indicator_pane_g4_ParamLimits

0xade0,	// (0x00055c90) uni_indicator_pane_g4

0xadf4,	// (0x00055ca4) uni_indicator_pane_g5_ParamLimits

0xadf4,	// (0x00055ca4) uni_indicator_pane_g5

0xae08,	// (0x00055cb8) uni_indicator_pane_g6_ParamLimits

0xae08,	// (0x00055cb8) uni_indicator_pane_g6

0xf95f,	// (0x0005a80f) uni_indicator_pane_g_ParamLimits

0xd750,	// (0x00058600) popup_tmo_note_window_ParamLimits

0xd750,	// (0x00058600) popup_tmo_note_window

0x727a,	// (0x0005212a) fshwr2_bg_pane

0xed44,	// (0x00059bf4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed44,	// (0x00059bf4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfedb,	// (0x0005ad8b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfedb,	// (0x0005ad8b) fshwr2_func_candi_cell_pane_g

0xc244,	// (0x000570f4) bg_popup_window_pane_cp01

0xed7d,	// (0x00059c2d) bg_popup_window_pane_g1_cp01

0xed86,	// (0x00059c36) bg_popup_window_pane_cp22_ParamLimits

0xed86,	// (0x00059c36) bg_popup_window_pane_cp22

0xed94,	// (0x00059c44) listscroll_tmo_link_pane_ParamLimits

0xed94,	// (0x00059c44) listscroll_tmo_link_pane

0xedd4,	// (0x00059c84) popup_tmo_note_window_g1_ParamLimits

0xedd4,	// (0x00059c84) popup_tmo_note_window_g1

0xede1,	// (0x00059c91) tmo_note_info_pane_ParamLimits

0xede1,	// (0x00059c91) tmo_note_info_pane

0xedfb,	// (0x00059cab) list_tmo_note_info_pane_g1_ParamLimits

0xedfb,	// (0x00059cab) list_tmo_note_info_pane_g1

0xee12,	// (0x00059cc2) list_tmo_note_info_pane_g2_ParamLimits

0xee12,	// (0x00059cc2) list_tmo_note_info_pane_g2

0x0001,

0xfee0,	// (0x0005ad90) list_tmo_note_info_pane_g_ParamLimits

0xfee0,	// (0x0005ad90) list_tmo_note_info_pane_g

0xee2e,	// (0x00059cde) list_tmo_note_info_text_pane_ParamLimits

0xee2e,	// (0x00059cde) list_tmo_note_info_text_pane

0xeeb3,	// (0x00059d63) list_tmo_link_pane

0xeec0,	// (0x00059d70) scroll_pane_cp20

0xeecd,	// (0x00059d7d) list_single_tmo_link_pane_ParamLimits

0xeecd,	// (0x00059d7d) list_single_tmo_link_pane

0xeedd,	// (0x00059d8d) list_single_tmo_link_pane_t1

0xeeeb,	// (0x00059d9b) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeeb,	// (0x00059d9b) list_tmo_note_info_text_pane_t1

0x81a2,	// (0x00053052) aid_size_touch_scroll_bar_cp01_ParamLimits

0x81a2,	// (0x00053052) aid_size_touch_scroll_bar_cp01

0x5699,	// (0x00050549) aid_size_touch_slider_marker

0x4f06,	// (0x0004fdb6) popup_settings_window_ParamLimits

0x4f06,	// (0x0004fdb6) popup_settings_window

0x5dfb,	// (0x00050cab) popup_candi_list_indi_window

0x9739,	// (0x000545e9) aid_touch_navi_pane_ParamLimits

0x6a12,	// (0x000518c2) rs_clock_indi_pane

0x6a1b,	// (0x000518cb) sctrl_sk_bottom_pane_ParamLimits

0x6a2c,	// (0x000518dc) sctrl_sk_top_pane_ParamLimits

0x6b2d,	// (0x000519dd) popup_fep_tooltip_window

0xe7b6,	// (0x00059666) aid_size_cell_widget_grid_ParamLimits

0xe7e6,	// (0x00059696) cell_ai5_widget_pane_g1_ParamLimits

0xe7e6,	// (0x00059696) cell_ai5_widget_pane_g1

0xe82e,	// (0x000596de) cell_ai5_widget_pane_g6_ParamLimits

0xe83c,	// (0x000596ec) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe5e,	// (0x0005ad0e) cell_ai5_widget_pane_g_ParamLimits

0xfe5e,	// (0x0005ad0e) cell_ai5_widget_pane_g

0xe96b,	// (0x0005981b) cell_ai5_widget_pane_t10_ParamLimits

0xe96b,	// (0x0005981b) cell_ai5_widget_pane_t10

0xe97d,	// (0x0005982d) grid_ai5_widget_pane_ParamLimits

0xea1e,	// (0x000598ce) cell_contacts_ai5_widget_pane_ParamLimits

0xea1e,	// (0x000598ce) cell_contacts_ai5_widget_pane

0xebfe,	// (0x00059aae) popup_discreet_window_t3_ParamLimits

0xebfe,	// (0x00059aae) popup_discreet_window_t3

0xec8d,	// (0x00059b3d) popup_fshwr2_char_preview_window_ParamLimits

0xec8d,	// (0x00059b3d) popup_fshwr2_char_preview_window

0xee4c,	// (0x00059cfc) tmo_note_info_pane_t1

0xee61,	// (0x00059d11) tmo_note_info_pane_t2

0xee7a,	// (0x00059d2a) tmo_note_info_pane_t3

0xee8f,	// (0x00059d3f) tmo_note_info_pane_t4

0xeea1,	// (0x00059d51) tmo_note_info_pane_t5

0x0004,

0xfee5,	// (0x0005ad95) tmo_note_info_pane_t

0xeeb3,	// (0x00059d63) list_tmo_link_pane_ParamLimits

0xeec0,	// (0x00059d70) scroll_pane_cp20_ParamLimits

0x727a,	// (0x0005212a) bg_popup_fep_char_preview_window_cp01

0xef04,	// (0x00059db4) popup_fshwr2_char_preview_window_t1

0xef12,	// (0x00059dc2) popup_candi_list_indi_window_g1

0xef1b,	// (0x00059dcb) bg_cell_contacts_ai5_widget_pane

0xef27,	// (0x00059dd7) cell_contacts_ai5_widget_pane_g1

0xef3b,	// (0x00059deb) cell_contacts_ai5_widget_pane_g2

0xef4a,	// (0x00059dfa) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfef0,	// (0x0005ada0) cell_contacts_ai5_widget_pane_g

0xef5d,	// (0x00059e0d) cell_contacts_ai5_widget_pane_t1

0x80dc,	// (0x00052f8c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd7,	// (0x00059e87) settings_container_pane

0x8d46,	// (0x00053bf6) listscroll_set_pane_copy1

0xb9bb,	// (0x0005686b) scroll_pane_cp121_copy1

0xefe3,	// (0x00059e93) set_content_pane_copy1

0xefeb,	// (0x00059e9b) aid_height_set_list_copy1_ParamLimits

0xefeb,	// (0x00059e9b) aid_height_set_list_copy1

0xb008,	// (0x00055eb8) aid_size_parent_copy1_ParamLimits

0xb008,	// (0x00055eb8) aid_size_parent_copy1

0xeff7,	// (0x00059ea7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff7,	// (0x00059ea7) button_value_adjust_pane_cp6_copy1

0x90c4,	// (0x00053f74) list_highlight_pane_cp2_copy1_ParamLimits

0x90c4,	// (0x00053f74) list_highlight_pane_cp2_copy1

0xf00b,	// (0x00059ebb) list_set_pane_copy1_ParamLimits

0xf00b,	// (0x00059ebb) list_set_pane_copy1

0xef72,	// (0x00059e22) main_pane_set_t1_copy1_ParamLimits

0xef72,	// (0x00059e22) main_pane_set_t1_copy1

0xefac,	// (0x00059e5c) main_pane_set_t2_copy1_ParamLimits

0xefac,	// (0x00059e5c) main_pane_set_t2_copy1

0xf0d2,	// (0x00059f82) main_pane_set_t3_copy1

0xf0e0,	// (0x00059f90) main_pane_set_t4_copy1

0xefcb,	// (0x00059e7b) set_content_pane_g1_copy1_ParamLimits

0xefcb,	// (0x00059e7b) set_content_pane_g1_copy1

0xf0ee,	// (0x00059f9e) setting_code_pane_copy1

0xf0f8,	// (0x00059fa8) setting_slider_graphic_pane_copy1

0xf0f8,	// (0x00059fa8) setting_slider_pane_copy1

0xf102,	// (0x00059fb2) setting_text_pane_copy1

0xf10c,	// (0x00059fbc) setting_volume_pane_copy1

0xf115,	// (0x00059fc5) settings_code_pane_cp2_copy1

0xf11d,	// (0x00059fcd) settings_code_pane_cp_copy1_ParamLimits

0xf11d,	// (0x00059fcd) settings_code_pane_cp_copy1

0xf131,	// (0x00059fe1) volume_set_pane_copy1

0xf13d,	// (0x00059fed) volume_set_pane_g10_copy1

0xf149,	// (0x00059ff9) volume_set_pane_g1_copy1

0xf153,	// (0x0005a003) volume_set_pane_g2_copy1

0xf15d,	// (0x0005a00d) volume_set_pane_g3_copy1

0xf167,	// (0x0005a017) volume_set_pane_g4_copy1

0xf171,	// (0x0005a021) volume_set_pane_g5_copy1

0xf17b,	// (0x0005a02b) volume_set_pane_g6_copy1

0xf185,	// (0x0005a035) volume_set_pane_g7_copy1

0xf18f,	// (0x0005a03f) volume_set_pane_g8_copy1

0xf199,	// (0x0005a049) volume_set_pane_g9_copy1

0x736e,	// (0x0005221e) bg_set_opt_pane_cp_copy1_ParamLimits

0x736e,	// (0x0005221e) bg_set_opt_pane_cp_copy1

0xf1a3,	// (0x0005a053) setting_slider_pane_t1_copy1_ParamLimits

0xf1a3,	// (0x0005a053) setting_slider_pane_t1_copy1

0xf1c1,	// (0x0005a071) setting_slider_pane_t2_copy1_ParamLimits

0xf1c1,	// (0x0005a071) setting_slider_pane_t2_copy1

0xf1db,	// (0x0005a08b) setting_slider_pane_t3_copy1_ParamLimits

0xf1db,	// (0x0005a08b) setting_slider_pane_t3_copy1

0xf1f3,	// (0x0005a0a3) slider_set_pane_copy1_ParamLimits

0xf1f3,	// (0x0005a0a3) slider_set_pane_copy1

0x8143,	// (0x00052ff3) set_opt_bg_pane_g1_copy2

0x814b,	// (0x00052ffb) set_opt_bg_pane_g2_copy2

0xf209,	// (0x0005a0b9) set_opt_bg_pane_g3_copy2

0x815b,	// (0x0005300b) set_opt_bg_pane_g4_copy2

0x8163,	// (0x00053013) set_opt_bg_pane_g5_copy2

0x816b,	// (0x0005301b) set_opt_bg_pane_g6_copy2

0xf213,	// (0x0005a0c3) set_opt_bg_pane_g7_copy2

0xf21d,	// (0x0005a0cd) set_opt_bg_pane_g8_copy2

0xf227,	// (0x0005a0d7) set_opt_bg_pane_g9_copy2

0xf231,	// (0x0005a0e1) aid_size_touch_slider_mark_copy1_ParamLimits

0xf231,	// (0x0005a0e1) aid_size_touch_slider_mark_copy1

0xf245,	// (0x0005a0f5) slider_set_pane_g1_copy1

0xf24e,	// (0x0005a0fe) slider_set_pane_g2_copy1

0xb867,	// (0x00056717) slider_set_pane_g3_copy1_ParamLimits

0xb867,	// (0x00056717) slider_set_pane_g3_copy1

0xb87b,	// (0x0005672b) slider_set_pane_g4_copy1_ParamLimits

0xb87b,	// (0x0005672b) slider_set_pane_g4_copy1

0xb893,	// (0x00056743) slider_set_pane_g5_copy1_ParamLimits

0xb893,	// (0x00056743) slider_set_pane_g5_copy1

0xb867,	// (0x00056717) slider_set_pane_g6_copy1_ParamLimits

0xb867,	// (0x00056717) slider_set_pane_g6_copy1

0xf256,	// (0x0005a106) slider_set_pane_g7_copy1_ParamLimits

0xf256,	// (0x0005a106) slider_set_pane_g7_copy1

0x728e,	// (0x0005213e) bg_set_opt_pane_cp2_copy1

0xf26c,	// (0x0005a11c) setting_slider_graphic_pane_g1_copy1

0xf275,	// (0x0005a125) setting_slider_graphic_pane_t1_copy1

0xf285,	// (0x0005a135) setting_slider_graphic_pane_t2_copy1

0xf295,	// (0x0005a145) slider_set_pane_cp_copy1

0xf2a5,	// (0x0005a155) input_focus_pane_cp1_copy1

0xf2ae,	// (0x0005a15e) list_set_text_pane_copy1

0xf2b6,	// (0x0005a166) setting_text_pane_g1_copy1

0x41ee,	// (0x0004f09e) set_text_pane_t1_copy1

0xf2a5,	// (0x0005a155) input_focus_pane_cp2_copy1

0xf2b6,	// (0x0005a166) setting_code_pane_g1_copy1

0xf2bf,	// (0x0005a16f) setting_code_pane_t1_copy1

0xf2cd,	// (0x0005a17d) list_set_graphic_pane_copy1

0x728e,	// (0x0005213e) bg_set_opt_pane_cp4_copy1

0x8a40,	// (0x000538f0) list_set_graphic_pane_g1_copy1_ParamLimits

0x8a40,	// (0x000538f0) list_set_graphic_pane_g1_copy1

0xf2df,	// (0x0005a18f) list_set_graphic_pane_g2_copy1

0x8a58,	// (0x00053908) list_set_graphic_pane_t1_copy1_ParamLimits

0x8a58,	// (0x00053908) list_set_graphic_pane_t1_copy1

0xc244,	// (0x000570f4) rs_clock_indi_pane_g1

0xf2e7,	// (0x0005a197) rs_clock_indi_pane_t1

0xf2f5,	// (0x0005a1a5) rs_indi_pane

0xf2fd,	// (0x0005a1ad) rs_indi_pane_g1

0xf306,	// (0x0005a1b6) rs_indi_pane_g2

0xf30f,	// (0x0005a1bf) rs_indi_pane_g3

0x0002,

0xfef7,	// (0x0005ada7) rs_indi_pane_g

0x8d46,	// (0x00053bf6) bg_popup_preview_window_pane_cp03

0xf318,	// (0x0005a1c8) popup_fep_tooltip_window_t1

0xcef8,	// (0x00057da8) popup_note2_window_g2_ParamLimits

0xcef8,	// (0x00057da8) popup_note2_window_g2

0x0001,

0xfc95,	// (0x0005ab45) popup_note2_window_g_ParamLimits

0xfc95,	// (0x0005ab45) popup_note2_window_g

0xd400,	// (0x000582b0) bg_popup_sub_pane_cp11_ParamLimits

0xd40d,	// (0x000582bd) cell_ai3_links_pane_g1_ParamLimits

0xd424,	// (0x000582d4) cell_ai3_links_pane_t1

0x41ee,	// (0x0004f09e) set_text_pane_t1_copy1_ParamLimits

0x8c53,	// (0x00053b03) cell_graphic_popup_pane_cp2_ParamLimits

0x8c53,	// (0x00053b03) cell_graphic_popup_pane_cp2

0xf326,	// (0x0005a1d6) cell_graphic_popup_pane_g1_cp2

0x7e27,	// (0x00052cd7) cell_graphic_popup_pane_g2_cp2

0xf32e,	// (0x0005a1de) cell_graphic_popup_pane_g3_cp2

0xf336,	// (0x0005a1e6) cell_graphic_popup_pane_t2_cp2

0x7e38,	// (0x00052ce8) grid_highlight_pane_cp3_cp2

0x848f,	// (0x0005333f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x80dc,	// (0x00052f8c) main_tmo_pane_ParamLimits

0xd744,	// (0x000585f4) popup_tmo_big_image_note_window

0xe7d6,	// (0x00059686) cell_ai5_widget_list_pane

0xe7de,	// (0x0005968e) cell_ai5_widget_lrg_icon_pane

0xee4c,	// (0x00059cfc) tmo_note_info_pane_t1_ParamLimits

0xee61,	// (0x00059d11) tmo_note_info_pane_t2_ParamLimits

0xee7a,	// (0x00059d2a) tmo_note_info_pane_t3_ParamLimits

0xee8f,	// (0x00059d3f) tmo_note_info_pane_t4_ParamLimits

0xeea1,	// (0x00059d51) tmo_note_info_pane_t5_ParamLimits

0xfee5,	// (0x0005ad95) tmo_note_info_pane_t_ParamLimits

0xefd7,	// (0x00059e87) settings_container_pane_ParamLimits

0xf29d,	// (0x0005a14d) indicator_popup_pane_cp5

0xf29d,	// (0x0005a14d) indicator_popup_pane_cp6

0xf2cd,	// (0x0005a17d) list_set_graphic_pane_copy1_ParamLimits

0x727a,	// (0x0005212a) bg_popup_window_pane_cp23

0xf344,	// (0x0005a1f4) popup_tmo_big_image_note_window_g1

0xf350,	// (0x0005a200) popup_tmo_big_image_note_window_t1

0xf360,	// (0x0005a210) popup_tmo_big_image_note_window_t2

0xf370,	// (0x0005a220) popup_tmo_big_image_note_window_t3

0x0002,

0xfefe,	// (0x0005adae) popup_tmo_big_image_note_window_t

0xf380,	// (0x0005a230) cell_ai5_widget_lrg_icon_pane_g1

0xf388,	// (0x0005a238) cell_ai5_widget_lrg_icon_pane_t1

0xf396,	// (0x0005a246) cell_ai5_widget_list_row_pane_ParamLimits

0xf396,	// (0x0005a246) cell_ai5_widget_list_row_pane

0xf3af,	// (0x0005a25f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3af,	// (0x0005a25f) cell_ai5_widget_list_row_pane_g1

0xf3bc,	// (0x0005a26c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3bc,	// (0x0005a26c) cell_ai5_widget_list_row_pane_t1

0xf3d4,	// (0x0005a284) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3d4,	// (0x0005a284) cell_ai5_widget_list_row_pane_t2

0x0001,

0xff05,	// (0x0005adb5) cell_ai5_widget_list_row_pane_t_ParamLimits

0xff05,	// (0x0005adb5) cell_ai5_widget_list_row_pane_t

0x4db3,	// (0x0004fc63) main_fep_vtchi_ss_pane

0xf3e6,	// (0x0005a296) popup_fep_char_pre_window

0xf3ee,	// (0x0005a29e) popup_fep_ituss_window

0xf3f9,	// (0x0005a2a9) popup_fep_vkbss_window

0xf404,	// (0x0005a2b4) grid_vkbss_keypad_pane_ParamLimits

0xf404,	// (0x0005a2b4) grid_vkbss_keypad_pane

0xf414,	// (0x0005a2c4) ituss_keypad_pane

0xf41c,	// (0x0005a2cc) aid_vkbss_key_offset_ParamLimits

0xf41c,	// (0x0005a2cc) aid_vkbss_key_offset

0xf42b,	// (0x0005a2db) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x0005a2db) cell_vkbss_key_pane

0xf441,	// (0x0005a2f1) bg_cell_vkbss_key_g1_ParamLimits

0xf441,	// (0x0005a2f1) bg_cell_vkbss_key_g1

0xf44d,	// (0x0005a2fd) cell_vkbss_key_3p_pane_ParamLimits

0xf44d,	// (0x0005a2fd) cell_vkbss_key_3p_pane

0xf467,	// (0x0005a317) cell_vkbss_key_g1_ParamLimits

0xf467,	// (0x0005a317) cell_vkbss_key_g1

0xf481,	// (0x0005a331) cell_vkbss_key_t1_ParamLimits

0xf481,	// (0x0005a331) cell_vkbss_key_t1

0xf4ac,	// (0x0005a35c) cell_ituss_key_pane_ParamLimits

0xf4ac,	// (0x0005a35c) cell_ituss_key_pane

0xf4bb,	// (0x0005a36b) bg_cell_ituss_key_g1_ParamLimits

0xf4bb,	// (0x0005a36b) bg_cell_ituss_key_g1

0xf4c7,	// (0x0005a377) cell_ituss_key_pane_g1_ParamLimits

0xf4c7,	// (0x0005a377) cell_ituss_key_pane_g1

0xf4d3,	// (0x0005a383) cell_ituss_key_pane_g2_ParamLimits

0xf4d3,	// (0x0005a383) cell_ituss_key_pane_g2

0x0001,

0xff0a,	// (0x0005adba) cell_ituss_key_pane_g_ParamLimits

0xff0a,	// (0x0005adba) cell_ituss_key_pane_g

0xf4e7,	// (0x0005a397) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x0005a397) cell_ituss_key_t1

0xf505,	// (0x0005a3b5) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x0005a3b5) cell_ituss_key_t2

0xf524,	// (0x0005a3d4) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x0005a3d4) cell_ituss_key_t3

0xf543,	// (0x0005a3f3) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x0005a3f3) cell_ituss_key_t4

0x0003,

0xff0f,	// (0x0005adbf) cell_ituss_key_t_ParamLimits

0xff0f,	// (0x0005adbf) cell_ituss_key_t

0xf562,	// (0x0005a412) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x0005a41a) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0005a422) cell_vkbss_key_3p_pane_g3

0x0002,

0xff18,	// (0x0005adc8) cell_vkbss_key_3p_pane_g

0x727a,	// (0x0005212a) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0005a42a) popup_fep_char_pre_window_t1

0xe7ac,	// (0x0005965c) main_ai5_sk_pane

0xef1b,	// (0x00059dcb) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef27,	// (0x00059dd7) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef3b,	// (0x00059deb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4a,	// (0x00059dfa) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfef0,	// (0x0005ada0) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5d,	// (0x00059e0d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x80dc,	// (0x00052f8c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0005a439) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large

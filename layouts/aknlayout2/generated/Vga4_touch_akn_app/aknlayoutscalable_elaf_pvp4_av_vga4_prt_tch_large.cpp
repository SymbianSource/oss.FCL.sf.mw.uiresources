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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00042fed };

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
0x5c56,	// (0x00048c43) Screen

0x5c62,	// (0x00048c4f) application_window_ParamLimits

0x5c62,	// (0x00048c4f) application_window

0xd9e2,	// (0x000509cf) screen_g1

0x5cbe,	// (0x00048cab) area_bottom_pane_ParamLimits

0x5cbe,	// (0x00048cab) area_bottom_pane

0x5d7e,	// (0x00048d6b) area_top_pane_ParamLimits

0x5d7e,	// (0x00048d6b) area_top_pane

0x5e12,	// (0x00048dff) main_pane_ParamLimits

0x5e12,	// (0x00048dff) main_pane

0xd9ec,	// (0x000509d9) misc_graphics

0x8c0b,	// (0x0004bbf8) battery_pane_ParamLimits

0x8c0b,	// (0x0004bbf8) battery_pane

0x98c9,	// (0x0004c8b6) bg_status_flat_pane_g8

0x98d1,	// (0x0004c8be) bg_status_flat_pane_g9

0x8cd3,	// (0x0004bcc0) context_pane_ParamLimits

0x8cd3,	// (0x0004bcc0) context_pane

0x8df7,	// (0x0004bde4) navi_pane_ParamLimits

0x8df7,	// (0x0004bde4) navi_pane

0x8e87,	// (0x0004be74) signal_pane_ParamLimits

0x8e87,	// (0x0004be74) signal_pane

0x0008,

0xf87e,	// (0x0005286b) bg_status_flat_pane_g

0x8ef4,	// (0x0004bee1) status_pane_g1_ParamLimits

0x8ef4,	// (0x0004bee1) status_pane_g1

0x8f08,	// (0x0004bef5) status_pane_g2_ParamLimits

0x8f08,	// (0x0004bef5) status_pane_g2

0x8f14,	// (0x0004bf01) status_pane_g3_ParamLimits

0x8f14,	// (0x0004bf01) status_pane_g3

0x0004,

0xf7a5,	// (0x00052792) status_pane_g_ParamLimits

0xf7a5,	// (0x00052792) status_pane_g

0x8f48,	// (0x0004bf35) title_pane_ParamLimits

0x8f48,	// (0x0004bf35) title_pane

0x8f85,	// (0x0004bf72) uni_indicator_pane_ParamLimits

0x8f85,	// (0x0004bf72) uni_indicator_pane

0x6f78,	// (0x00049f65) bg_list_pane_ParamLimits

0x6f78,	// (0x00049f65) bg_list_pane

0x6f98,	// (0x00049f85) find_pane

0x6fa0,	// (0x00049f8d) listscroll_app_pane_ParamLimits

0x6fa0,	// (0x00049f8d) listscroll_app_pane

0x6fac,	// (0x00049f99) listscroll_form_pane

0x6fb4,	// (0x00049fa1) listscroll_gen_pane_ParamLimits

0x6fb4,	// (0x00049fa1) listscroll_gen_pane

0x6fc8,	// (0x00049fb5) listscroll_set_pane

0x6526,	// (0x00049513) main_idle_act_pane

0x41a9,	// (0x00047196) main_idle_trad_pane

0x41a9,	// (0x00047196) main_list_empty_pane

0x6fe2,	// (0x00049fcf) main_midp_pane

0x6fee,	// (0x00049fdb) main_pane_g1_ParamLimits

0x6fee,	// (0x00049fdb) main_pane_g1

0x6ffc,	// (0x00049fe9) popup_ai_message_window_ParamLimits

0x6ffc,	// (0x00049fe9) popup_ai_message_window

0x70b0,	// (0x0004a09d) popup_fep_china_uni_window_ParamLimits

0x70b0,	// (0x0004a09d) popup_fep_china_uni_window

0x868c,	// (0x0004b679) popup_fep_japan_candidate_window_ParamLimits

0x868c,	// (0x0004b679) popup_fep_japan_candidate_window

0x86b6,	// (0x0004b6a3) popup_fep_japan_predictive_window_ParamLimits

0x86b6,	// (0x0004b6a3) popup_fep_japan_predictive_window

0x86ec,	// (0x0004b6d9) popup_find_window

0x86f9,	// (0x0004b6e6) popup_grid_graphic_window_ParamLimits

0x86f9,	// (0x0004b6e6) popup_grid_graphic_window

0x8727,	// (0x0004b714) popup_large_graphic_colour_window

0x874d,	// (0x0004b73a) popup_menu_window_ParamLimits

0x874d,	// (0x0004b73a) popup_menu_window

0x8917,	// (0x0004b904) popup_note_image_window

0x8901,	// (0x0004b8ee) popup_note_wait_window_ParamLimits

0x8901,	// (0x0004b8ee) popup_note_wait_window

0x8901,	// (0x0004b8ee) popup_note_window_ParamLimits

0x8901,	// (0x0004b8ee) popup_note_window

0x897d,	// (0x0004b96a) popup_query_code_window_ParamLimits

0x897d,	// (0x0004b96a) popup_query_code_window

0x8993,	// (0x0004b980) popup_query_data_code_window_ParamLimits

0x8993,	// (0x0004b980) popup_query_data_code_window

0x89b6,	// (0x0004b9a3) popup_query_data_window_ParamLimits

0x89b6,	// (0x0004b9a3) popup_query_data_window

0x89d8,	// (0x0004b9c5) popup_query_sat_info_window_ParamLimits

0x89d8,	// (0x0004b9c5) popup_query_sat_info_window

0x8a17,	// (0x0004ba04) popup_snote_single_graphic_window_ParamLimits

0x8a17,	// (0x0004ba04) popup_snote_single_graphic_window

0x8a17,	// (0x0004ba04) popup_snote_single_text_window_ParamLimits

0x8a17,	// (0x0004ba04) popup_snote_single_text_window

0x8a2e,	// (0x0004ba1b) popup_sub_window_general

0x8b74,	// (0x0004bb61) popup_window_general_ParamLimits

0x8b74,	// (0x0004bb61) popup_window_general

0x8b8d,	// (0x0004bb7a) power_save_pane

0x6ded,	// (0x00049dda) control_pane_g1_ParamLimits

0x6ded,	// (0x00049dda) control_pane_g1

0x6e16,	// (0x00049e03) control_pane_g2_ParamLimits

0x6e16,	// (0x00049e03) control_pane_g2

0x43a7,	// (0x00047394) control_pane_g3_ParamLimits

0x43a7,	// (0x00047394) control_pane_g3

0x0007,

0xf78d,	// (0x0005277a) control_pane_g_ParamLimits

0xf78d,	// (0x0005277a) control_pane_g

0x6e85,	// (0x00049e72) control_pane_t1_ParamLimits

0x6e85,	// (0x00049e72) control_pane_t1

0x6ed1,	// (0x00049ebe) control_pane_t2_ParamLimits

0x6ed1,	// (0x00049ebe) control_pane_t2

0x0002,

0xf79e,	// (0x0005278b) control_pane_t_ParamLimits

0xf79e,	// (0x0005278b) control_pane_t

0x6d46,	// (0x00049d33) navi_navi_volume_pane_cp1

0x6d4e,	// (0x00049d3b) status_small_icon_pane

0x4373,	// (0x00047360) status_small_pane_g1_ParamLimits

0x4373,	// (0x00047360) status_small_pane_g1

0x6d56,	// (0x00049d43) status_small_pane_g2_ParamLimits

0x6d56,	// (0x00049d43) status_small_pane_g2

0x6d62,	// (0x00049d4f) status_small_pane_g3_ParamLimits

0x6d62,	// (0x00049d4f) status_small_pane_g3

0x6d6e,	// (0x00049d5b) status_small_pane_g4_ParamLimits

0x6d6e,	// (0x00049d5b) status_small_pane_g4

0x6d7a,	// (0x00049d67) status_small_pane_g5_ParamLimits

0x6d7a,	// (0x00049d67) status_small_pane_g5

0x6d88,	// (0x00049d75) status_small_pane_g6_ParamLimits

0x6d88,	// (0x00049d75) status_small_pane_g6

0x0007,

0xf77c,	// (0x00052769) status_small_pane_g_ParamLimits

0xf77c,	// (0x00052769) status_small_pane_g

0x6db7,	// (0x00049da4) status_small_pane_t1

0x6dd9,	// (0x00049dc6) status_small_wait_pane_ParamLimits

0x6dd9,	// (0x00049dc6) status_small_wait_pane

0x6899,	// (0x00049886) aid_levels_signal_ParamLimits

0x6899,	// (0x00049886) aid_levels_signal

0x68ab,	// (0x00049898) signal_pane_g1_ParamLimits

0x68ab,	// (0x00049898) signal_pane_g1

0x68c0,	// (0x000498ad) signal_pane_g2_ParamLimits

0x68c0,	// (0x000498ad) signal_pane_g2

0x0003,

0xf70d,	// (0x000526fa) signal_pane_g_ParamLimits

0xf70d,	// (0x000526fa) signal_pane_g

0x0d22,	// (0x00043d0f) context_pane_g1

0x6071,	// (0x0004905e) title_pane_g1

0x608f,	// (0x0004907c) title_pane_t1

0xda0e,	// (0x000509fb) title_pane_t2

0xda34,	// (0x00050a21) title_pane_t3

0x0002,

0xf557,	// (0x00052544) title_pane_t

0x8f9d,	// (0x0004bf8a) aid_levels_battery_ParamLimits

0x8f9d,	// (0x0004bf8a) aid_levels_battery

0x8fb1,	// (0x0004bf9e) battery_pane_g1_ParamLimits

0x8fb1,	// (0x0004bf9e) battery_pane_g1

0x8fc7,	// (0x0004bfb4) battery_pane_g2_ParamLimits

0x8fc7,	// (0x0004bfb4) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005279d) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005279d) battery_pane_g

0xa213,	// (0x0004d200) uni_indicator_pane_g1

0xa229,	// (0x0004d216) uni_indicator_pane_g2

0xa23f,	// (0x0004d22c) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00052913) uni_indicator_pane_g

0x0fd0,	// (0x00043fbd) navi_icon_pane_ParamLimits

0x0fd0,	// (0x00043fbd) navi_icon_pane

0x0f54,	// (0x00043f41) navi_midp_pane

0x0fec,	// (0x00043fd9) navi_navi_pane

0x0ff6,	// (0x00043fe3) navi_text_pane_ParamLimits

0x0ff6,	// (0x00043fe3) navi_text_pane

0xd9e2,	// (0x000509cf) status_small_wait_pane_g1

0xdd2f,	// (0x00050d1c) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0005290e) status_small_wait_pane_g

0x9f26,	// (0x0004cf13) navi_navi_icon_text_pane

0x9f2e,	// (0x0004cf1b) navi_navi_pane_g1_ParamLimits

0x9f2e,	// (0x0004cf1b) navi_navi_pane_g1

0x9f40,	// (0x0004cf2d) navi_navi_pane_g2_ParamLimits

0x9f40,	// (0x0004cf2d) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x000528dc) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x000528dc) navi_navi_pane_g

0x9f52,	// (0x0004cf3f) navi_navi_tabs_pane

0x9f5b,	// (0x0004cf48) navi_navi_text_pane

0x9f26,	// (0x0004cf13) navi_navi_volume_pane

0x9f02,	// (0x0004ceef) navi_text_pane_t1

0x9ef6,	// (0x0004cee3) navi_icon_pane_g1

0x9e49,	// (0x0004ce36) navi_navi_text_pane_t1

0x73c4,	// (0x0004a3b1) navi_navi_volume_pane_g1

0x73cc,	// (0x0004a3b9) volume_small_pane

0x9daf,	// (0x0004cd9c) navi_navi_icon_text_pane_g1

0x9db7,	// (0x0004cda4) navi_navi_icon_text_pane_t1

0x0fec,	// (0x00043fd9) navi_tabs_2_long_pane

0x0fec,	// (0x00043fd9) navi_tabs_2_pane

0x0fec,	// (0x00043fd9) navi_tabs_3_long_pane

0x0fec,	// (0x00043fd9) navi_tabs_3_pane

0x0fec,	// (0x00043fd9) navi_tabs_4_pane

0x73a4,	// (0x0004a391) tabs_2_active_pane_ParamLimits

0x73a4,	// (0x0004a391) tabs_2_active_pane

0x73b4,	// (0x0004a3a1) tabs_2_passive_pane_ParamLimits

0x73b4,	// (0x0004a3a1) tabs_2_passive_pane

0x7372,	// (0x0004a35f) tabs_3_active_pane_ParamLimits

0x7372,	// (0x0004a35f) tabs_3_active_pane

0x7382,	// (0x0004a36f) tabs_3_passive_pane_ParamLimits

0x7382,	// (0x0004a36f) tabs_3_passive_pane

0x7393,	// (0x0004a380) tabs_3_passive_pane_cp_ParamLimits

0x7393,	// (0x0004a380) tabs_3_passive_pane_cp

0x7326,	// (0x0004a313) tabs_4_active_pane_ParamLimits

0x7326,	// (0x0004a313) tabs_4_active_pane

0x7339,	// (0x0004a326) tabs_4_passive_pane_ParamLimits

0x7339,	// (0x0004a326) tabs_4_passive_pane

0x734a,	// (0x0004a337) tabs_4_passive_pane_cp_ParamLimits

0x734a,	// (0x0004a337) tabs_4_passive_pane_cp

0x735b,	// (0x0004a348) tabs_4_passive_pane_cp2_ParamLimits

0x735b,	// (0x0004a348) tabs_4_passive_pane_cp2

0x7302,	// (0x0004a2ef) tabs_2_long_active_pane_ParamLimits

0x7302,	// (0x0004a2ef) tabs_2_long_active_pane

0x7314,	// (0x0004a301) tabs_2_long_passive_pane_ParamLimits

0x7314,	// (0x0004a301) tabs_2_long_passive_pane

0x72c3,	// (0x0004a2b0) tabs_3_long_active_pane_ParamLimits

0x72c3,	// (0x0004a2b0) tabs_3_long_active_pane

0x72d6,	// (0x0004a2c3) tabs_3_long_passive_pane_ParamLimits

0x72d6,	// (0x0004a2c3) tabs_3_long_passive_pane

0x72ef,	// (0x0004a2dc) tabs_3_long_passive_pane_cp_ParamLimits

0x72ef,	// (0x0004a2dc) tabs_3_long_passive_pane_cp

0x7269,	// (0x0004a256) volume_small_pane_g1

0x7272,	// (0x0004a25f) volume_small_pane_g2

0x727b,	// (0x0004a268) volume_small_pane_g3

0x7284,	// (0x0004a271) volume_small_pane_g4

0x728d,	// (0x0004a27a) volume_small_pane_g5

0x7296,	// (0x0004a283) volume_small_pane_g6

0x729f,	// (0x0004a28c) volume_small_pane_g7

0x72a8,	// (0x0004a295) volume_small_pane_g8

0x72b1,	// (0x0004a29e) volume_small_pane_g9

0x72ba,	// (0x0004a2a7) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x000528a8) volume_small_pane_g

0xda46,	// (0x00050a33) bg_active_tab_pane_cp2_ParamLimits

0xda46,	// (0x00050a33) bg_active_tab_pane_cp2

0x60f7,	// (0x000490e4) tabs_3_active_pane_g1

0x60ff,	// (0x000490ec) tabs_3_active_pane_t1

0xda46,	// (0x00050a33) bg_passive_tab_pane_cp2_ParamLimits

0xda46,	// (0x00050a33) bg_passive_tab_pane_cp2

0x60f7,	// (0x000490e4) tabs_3_passive_pane_g1

0x60ff,	// (0x000490ec) tabs_3_passive_pane_t1

0xda46,	// (0x00050a33) bg_active_tab_pane_cp3_ParamLimits

0xda46,	// (0x00050a33) bg_active_tab_pane_cp3

0x6111,	// (0x000490fe) tabs_4_active_pane_g1

0x6119,	// (0x00049106) tabs_4_active_pane_t1

0xda46,	// (0x00050a33) bg_passive_tab_pane_cp3_ParamLimits

0xda46,	// (0x00050a33) bg_passive_tab_pane_cp3

0x6111,	// (0x000490fe) tabs_4_1_passive_pane_g1

0x6119,	// (0x00049106) tabs_4_1_passive_pane_t1

0x6fe2,	// (0x00049fcf) list_highlight_pane_cp2

0xa48e,	// (0x0004d47b) list_set_pane_ParamLimits

0xa48e,	// (0x0004d47b) list_set_pane

0xa556,	// (0x0004d543) main_pane_set_t1_ParamLimits

0xa556,	// (0x0004d543) main_pane_set_t1

0xa576,	// (0x0004d563) main_pane_set_t2_ParamLimits

0xa576,	// (0x0004d563) main_pane_set_t2

0xa58a,	// (0x0004d577) main_pane_set_t3_ParamLimits

0xa58a,	// (0x0004d577) main_pane_set_t3

0xa59e,	// (0x0004d58b) main_pane_set_t4_ParamLimits

0xa59e,	// (0x0004d58b) main_pane_set_t4

0x0003,

0xf98b,	// (0x00052978) main_pane_set_t_ParamLimits

0xf98b,	// (0x00052978) main_pane_set_t

0xa5b2,	// (0x0004d59f) setting_code_pane

0xa5bc,	// (0x0004d5a9) setting_slider_graphic_pane

0xa5bc,	// (0x0004d5a9) setting_slider_pane

0xa5bc,	// (0x0004d5a9) setting_text_pane

0xa5bc,	// (0x0004d5a9) setting_volume_pane

0x612b,	// (0x00049118) volume_set_pane

0xda46,	// (0x00050a33) bg_set_opt_pane_cp

0x6135,	// (0x00049122) setting_slider_pane_t1

0x614e,	// (0x0004913b) setting_slider_pane_t2

0x6168,	// (0x00049155) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005254b) setting_slider_pane_t

0x6180,	// (0x0004916d) slider_set_pane

0xd9ec,	// (0x000509d9) bg_set_opt_pane_cp2

0xda54,	// (0x00050a41) setting_slider_graphic_pane_g1

0x6196,	// (0x00049183) setting_slider_graphic_pane_t1

0x61a6,	// (0x00049193) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00052552) setting_slider_graphic_pane_t

0x61b6,	// (0x000491a3) slider_set_pane_cp

0xd9ec,	// (0x000509d9) input_focus_pane_cp1

0xa44f,	// (0x0004d43c) list_set_text_pane

0xd9e2,	// (0x000509cf) setting_text_pane_g1

0xd9ec,	// (0x000509d9) input_focus_pane_cp2

0xd9e2,	// (0x000509cf) setting_code_pane_g1

0xda5d,	// (0x00050a4a) setting_code_pane_t1

0x4d94,	// (0x00047d81) set_text_pane_t1_ParamLimits

0x4d94,	// (0x00047d81) set_text_pane_t1

0x0844,	// (0x00043831) set_opt_bg_pane_g1

0x084c,	// (0x00043839) set_opt_bg_pane_g2

0xa427,	// (0x0004d414) set_opt_bg_pane_g3

0x085c,	// (0x00043849) set_opt_bg_pane_g4

0x0864,	// (0x00043851) set_opt_bg_pane_g5

0x086c,	// (0x00043859) set_opt_bg_pane_g6

0xa431,	// (0x0004d41e) set_opt_bg_pane_g7

0xa43b,	// (0x0004d428) set_opt_bg_pane_g8

0xa445,	// (0x0004d432) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00052965) set_opt_bg_pane_g

0xa41a,	// (0x0004d407) slider_set_pane_g1

0x744d,	// (0x0004a43a) slider_set_pane_g2

0x0006,

0xf969,	// (0x00052956) slider_set_pane_g

0x73d5,	// (0x0004a3c2) volume_set_pane_g1

0x73df,	// (0x0004a3cc) volume_set_pane_g2

0x73e9,	// (0x0004a3d6) volume_set_pane_g3

0x73f3,	// (0x0004a3e0) volume_set_pane_g4

0x73fd,	// (0x0004a3ea) volume_set_pane_g5

0x7407,	// (0x0004a3f4) volume_set_pane_g6

0x7411,	// (0x0004a3fe) volume_set_pane_g7

0x741b,	// (0x0004a408) volume_set_pane_g8

0x7425,	// (0x0004a412) volume_set_pane_g9

0x742f,	// (0x0004a41c) volume_set_pane_g10

0x0009,

0xf941,	// (0x0005292e) volume_set_pane_g

0x61be,	// (0x000491ab) indicator_pane_ParamLimits

0x61be,	// (0x000491ab) indicator_pane

0x61ca,	// (0x000491b7) main_idle_pane_g2_ParamLimits

0x61ca,	// (0x000491b7) main_idle_pane_g2

0x61f2,	// (0x000491df) main_pane_idle_g1_ParamLimits

0x61f2,	// (0x000491df) main_pane_idle_g1

0xda6b,	// (0x00050a58) popup_clock_digital_analogue_window_ParamLimits

0xda6b,	// (0x00050a58) popup_clock_digital_analogue_window

0x6200,	// (0x000491ed) soft_indicator_pane_ParamLimits

0x6200,	// (0x000491ed) soft_indicator_pane

0x620e,	// (0x000491fb) wallpaper_pane_ParamLimits

0x620e,	// (0x000491fb) wallpaper_pane

0xd9e2,	// (0x000509cf) wallpaper_pane_g1

0x621a,	// (0x00049207) indicator_pane_g1_ParamLimits

0x621a,	// (0x00049207) indicator_pane_g1

0xa898,	// (0x0004d885) navi_navi_icon_text_pane_srt_g1

0xda99,	// (0x00050a86) soft_indicator_pane_t1

0xdab3,	// (0x00050aa0) aid_ps_area_pane

0x6226,	// (0x00049213) aid_ps_clock_pane

0xdac4,	// (0x00050ab1) aid_ps_indicator_pane

0xdad0,	// (0x00050abd) indicator_ps_pane_ParamLimits

0xdad0,	// (0x00050abd) indicator_ps_pane

0xdadf,	// (0x00050acc) power_save_pane_g1_ParamLimits

0xdadf,	// (0x00050acc) power_save_pane_g1

0xdaeb,	// (0x00050ad8) power_save_pane_g2_ParamLimits

0xdaeb,	// (0x00050ad8) power_save_pane_g2

0x5c72,	// (0x00048c5f) aid_navinavi_width_pane

0xdab3,	// (0x00050aa0) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00052557) power_save_pane_g_ParamLimits

0xf56a,	// (0x00052557) power_save_pane_g

0xdaf9,	// (0x00050ae6) power_save_pane_t1_ParamLimits

0xdaf9,	// (0x00050ae6) power_save_pane_t1

0x6226,	// (0x00049213) aid_ps_clock_pane_ParamLimits

0xdac4,	// (0x00050ab1) aid_ps_indicator_pane_ParamLimits

0xdb0b,	// (0x00050af8) power_save_pane_t4_ParamLimits

0xdb0b,	// (0x00050af8) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005255c) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005255c) power_save_pane_t

0xdb35,	// (0x00050b22) power_save_t3_ParamLimits

0xdb35,	// (0x00050b22) power_save_t3

0xdb20,	// (0x00050b0d) power_save_t2_ParamLimits

0xdb20,	// (0x00050b0d) power_save_t2

0xdb4a,	// (0x00050b37) indicator_ps_pane_g1

0x6234,	// (0x00049221) ai_gene_pane_ParamLimits

0x6234,	// (0x00049221) ai_gene_pane

0x6240,	// (0x0004922d) ai_links_pane_ParamLimits

0x6240,	// (0x0004922d) ai_links_pane

0x624c,	// (0x00049239) indicator_pane_cp1_ParamLimits

0x624c,	// (0x00049239) indicator_pane_cp1

0x6258,	// (0x00049245) main_pane_idle_g1_cp_ParamLimits

0x6258,	// (0x00049245) main_pane_idle_g1_cp

0xdb53,	// (0x00050b40) popup_ai_links_title_window

0x6264,	// (0x00049251) soft_indicator_pane_cp1_ParamLimits

0x6264,	// (0x00049251) soft_indicator_pane_cp1

0xa201,	// (0x0004d1ee) ai_links_pane_g1

0xa20a,	// (0x0004d1f7) grid_ai_links_pane

0xa1e6,	// (0x0004d1d3) ai_gene_pane_1

0xa1ef,	// (0x0004d1dc) ai_gene_pane_2

0xa1f8,	// (0x0004d1e5) list_highlight_pane_cp4

0xa1c6,	// (0x0004d1b3) cell_ai_link_pane_ParamLimits

0xa1c6,	// (0x0004d1b3) cell_ai_link_pane

0xa1be,	// (0x0004d1ab) cell_ai_link_pane_g1

0xdd2f,	// (0x00050d1c) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00052909) cell_ai_link_pane_g

0xd9ec,	// (0x000509d9) grid_highlight_cp2

0xd9ec,	// (0x000509d9) bg_popup_sub_pane_cp1

0xdb6a,	// (0x00050b57) popup_ai_links_title_window_t1

0xa10a,	// (0x0004d0f7) ai_gene_pane_1_g1_ParamLimits

0xa10a,	// (0x0004d0f7) ai_gene_pane_1_g1

0xa116,	// (0x0004d103) ai_gene_pane_1_g2_ParamLimits

0xa116,	// (0x0004d103) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x000528ff) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x000528ff) ai_gene_pane_1_g

0xa123,	// (0x0004d110) ai_gene_pane_1_t1_ParamLimits

0xa123,	// (0x0004d110) ai_gene_pane_1_t1

0xa157,	// (0x0004d144) grid_ai_soft_ind_pane

0xa0f5,	// (0x0004d0e2) ai_gene_pane_2_t1_ParamLimits

0xa0f5,	// (0x0004d0e2) ai_gene_pane_2_t1

0x6270,	// (0x0004925d) main_pane_empty_t1_ParamLimits

0x6270,	// (0x0004925d) main_pane_empty_t1

0x6288,	// (0x00049275) main_pane_empty_t2_ParamLimits

0x6288,	// (0x00049275) main_pane_empty_t2

0x629d,	// (0x0004928a) main_pane_empty_t3_ParamLimits

0x629d,	// (0x0004928a) main_pane_empty_t3

0x62af,	// (0x0004929c) main_pane_empty_t4_ParamLimits

0x62af,	// (0x0004929c) main_pane_empty_t4

0x62c1,	// (0x000492ae) main_pane_empty_t5_ParamLimits

0x62c1,	// (0x000492ae) main_pane_empty_t5

0x0004,

0xf574,	// (0x00052561) main_pane_empty_t_ParamLimits

0xf574,	// (0x00052561) main_pane_empty_t

0x0895,	// (0x00043882) bg_popup_window_pane_ParamLimits

0x0895,	// (0x00043882) bg_popup_window_pane

0x9e57,	// (0x0004ce44) find_popup_pane_cp2_ParamLimits

0x9e57,	// (0x0004ce44) find_popup_pane_cp2

0x9e63,	// (0x0004ce50) heading_pane_ParamLimits

0x9e63,	// (0x0004ce50) heading_pane

0xd9ec,	// (0x000509d9) bg_popup_sub_pane

0x9dd1,	// (0x0004cdbe) bg_popup_window_pane_g1_ParamLimits

0x9dd1,	// (0x0004cdbe) bg_popup_window_pane_g1

0x9ddd,	// (0x0004cdca) bg_popup_window_pane_g2_ParamLimits

0x9ddd,	// (0x0004cdca) bg_popup_window_pane_g2

0x9de9,	// (0x0004cdd6) bg_popup_window_pane_g3_ParamLimits

0x9de9,	// (0x0004cdd6) bg_popup_window_pane_g3

0x9df5,	// (0x0004cde2) bg_popup_window_pane_g4_ParamLimits

0x9df5,	// (0x0004cde2) bg_popup_window_pane_g4

0x9e01,	// (0x0004cdee) bg_popup_window_pane_g5_ParamLimits

0x9e01,	// (0x0004cdee) bg_popup_window_pane_g5

0x9e0d,	// (0x0004cdfa) bg_popup_window_pane_g6_ParamLimits

0x9e0d,	// (0x0004cdfa) bg_popup_window_pane_g6

0x9e19,	// (0x0004ce06) bg_popup_window_pane_g7_ParamLimits

0x9e19,	// (0x0004ce06) bg_popup_window_pane_g7

0x9e25,	// (0x0004ce12) bg_popup_window_pane_g8_ParamLimits

0x9e25,	// (0x0004ce12) bg_popup_window_pane_g8

0x9e31,	// (0x0004ce1e) bg_popup_window_pane_g9_ParamLimits

0x9e31,	// (0x0004ce1e) bg_popup_window_pane_g9

0x9e3d,	// (0x0004ce2a) bg_popup_window_pane_g10_ParamLimits

0x9e3d,	// (0x0004ce2a) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x000528c7) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x000528c7) bg_popup_window_pane_g

0x9d66,	// (0x0004cd53) bg_popup_heading_pane_ParamLimits

0x9d66,	// (0x0004cd53) bg_popup_heading_pane

0x7515,	// (0x0004a502) tabs_4_passive_pane_cp_srt_ParamLimits

0x7515,	// (0x0004a502) tabs_4_passive_pane_cp_srt

0x7527,	// (0x0004a514) tabs_4_passive_pane_srt_ParamLimits

0x9d7a,	// (0x0004cd67) heading_pane_g2

0x7527,	// (0x0004a514) tabs_4_passive_pane_srt

0x6fe2,	// (0x00049fcf) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6fe2,	// (0x00049fcf) bg_passive_tab_pane_cp3_srt

0x9d82,	// (0x0004cd6f) heading_pane_t1_ParamLimits

0x9d82,	// (0x0004cd6f) heading_pane_t1

0x9d99,	// (0x0004cd86) heading_pane_t2_ParamLimits

0x9d99,	// (0x0004cd86) heading_pane_t2

0x0001,

0xf8d5,	// (0x000528c2) heading_pane_t_ParamLimits

0xf8d5,	// (0x000528c2) heading_pane_t

0x9891,	// (0x0004c87e) bg_popup_heading_pane_g1

0x9940,	// (0x0004c92d) bg_popup_heading_pane_g2

0x994a,	// (0x0004c937) bg_popup_heading_pane_g3

0x9954,	// (0x0004c941) bg_popup_heading_pane_g4

0x995e,	// (0x0004c94b) bg_popup_heading_pane_g5

0x9968,	// (0x0004c955) bg_popup_heading_pane_g6

0x9970,	// (0x0004c95d) bg_popup_heading_pane_g7

0x9978,	// (0x0004c965) bg_popup_heading_pane_g8

0x9982,	// (0x0004c96f) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x0005287e) bg_popup_heading_pane_g

0x909f,	// (0x0004c08c) bg_popup_sub_pane_g1

0x90a7,	// (0x0004c094) bg_popup_sub_pane_g2

0x90af,	// (0x0004c09c) bg_popup_sub_pane_g3

0x90b7,	// (0x0004c0a4) bg_popup_sub_pane_g4

0x90bf,	// (0x0004c0ac) bg_popup_sub_pane_g5

0x90c7,	// (0x0004c0b4) bg_popup_sub_pane_g6

0x90cf,	// (0x0004c0bc) bg_popup_sub_pane_g7

0x90d7,	// (0x0004c0c4) bg_popup_sub_pane_g8

0x90df,	// (0x0004c0cc) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00052858) bg_popup_sub_pane_g

0xdb79,	// (0x00050b66) bg_popup_window_pane_cp5_ParamLimits

0xdb79,	// (0x00050b66) bg_popup_window_pane_cp5

0xdb95,	// (0x00050b82) popup_note_window_g1_ParamLimits

0xdb95,	// (0x00050b82) popup_note_window_g1

0xdba1,	// (0x00050b8e) popup_note_window_t1_ParamLimits

0xdba1,	// (0x00050b8e) popup_note_window_t1

0xdbb7,	// (0x00050ba4) popup_note_window_t2_ParamLimits

0xdbb7,	// (0x00050ba4) popup_note_window_t2

0xdbcd,	// (0x00050bba) popup_note_window_t3_ParamLimits

0xdbcd,	// (0x00050bba) popup_note_window_t3

0xdbe3,	// (0x00050bd0) popup_note_window_t4_ParamLimits

0xdbe3,	// (0x00050bd0) popup_note_window_t4

0xdc0b,	// (0x00050bf8) popup_note_window_t5_ParamLimits

0xdc0b,	// (0x00050bf8) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005256c) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005256c) popup_note_window_t

0xdc2f,	// (0x00050c1c) bg_popup_window_pane_cp6_ParamLimits

0xdc2f,	// (0x00050c1c) bg_popup_window_pane_cp6

0x980d,	// (0x0004c7fa) popup_note_image_window_g1_ParamLimits

0x980d,	// (0x0004c7fa) popup_note_image_window_g1

0x9819,	// (0x0004c806) popup_note_image_window_g2_ParamLimits

0x9819,	// (0x0004c806) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0005284c) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0005284c) popup_note_image_window_g

0x9832,	// (0x0004c81f) popup_note_image_window_t1_ParamLimits

0x9832,	// (0x0004c81f) popup_note_image_window_t1

0x984b,	// (0x0004c838) popup_note_image_window_t2_ParamLimits

0x984b,	// (0x0004c838) popup_note_image_window_t2

0x9864,	// (0x0004c851) popup_note_image_window_t3_ParamLimits

0x9864,	// (0x0004c851) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00052851) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00052851) popup_note_image_window_t

0x96cd,	// (0x0004c6ba) bg_popup_window_pane_cp7_ParamLimits

0x96cd,	// (0x0004c6ba) bg_popup_window_pane_cp7

0x96fd,	// (0x0004c6ea) popup_note_wait_window_g1_ParamLimits

0x96fd,	// (0x0004c6ea) popup_note_wait_window_g1

0x9709,	// (0x0004c6f6) popup_note_wait_window_g2_ParamLimits

0x9709,	// (0x0004c6f6) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0005283a) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0005283a) popup_note_wait_window_g

0x9721,	// (0x0004c70e) popup_note_wait_window_t1_ParamLimits

0x9721,	// (0x0004c70e) popup_note_wait_window_t1

0x9748,	// (0x0004c735) popup_note_wait_window_t2_ParamLimits

0x9748,	// (0x0004c735) popup_note_wait_window_t2

0x9766,	// (0x0004c753) popup_note_wait_window_t3_ParamLimits

0x9766,	// (0x0004c753) popup_note_wait_window_t3

0x9779,	// (0x0004c766) popup_note_wait_window_t4_ParamLimits

0x9779,	// (0x0004c766) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00052841) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00052841) popup_note_wait_window_t

0x979e,	// (0x0004c78b) wait_bar_pane_ParamLimits

0x979e,	// (0x0004c78b) wait_bar_pane

0xd9ec,	// (0x000509d9) wait_anim_pane

0xd9ec,	// (0x000509d9) wait_border_pane

0xd9e2,	// (0x000509cf) wait_anim_pane_g1

0xd9e2,	// (0x000509cf) wait_anim_pane_g2

0x0001,

0xf708,	// (0x000526f5) wait_anim_pane_g

0x9671,	// (0x0004c65e) wait_border_pane_g1

0x967c,	// (0x0004c669) wait_border_pane_g2

0x9685,	// (0x0004c672) wait_border_pane_g3

0x0002,

0xf846,	// (0x00052833) wait_border_pane_g

0x94db,	// (0x0004c4c8) bg_popup_window_pane_cp16_ParamLimits

0x94db,	// (0x0004c4c8) bg_popup_window_pane_cp16

0x95db,	// (0x0004c5c8) indicator_popup_pane_cp4_ParamLimits

0x95db,	// (0x0004c5c8) indicator_popup_pane_cp4

0x95ef,	// (0x0004c5dc) popup_query_data_window_t1_ParamLimits

0x95ef,	// (0x0004c5dc) popup_query_data_window_t1

0x9601,	// (0x0004c5ee) popup_query_data_window_t2_ParamLimits

0x9601,	// (0x0004c5ee) popup_query_data_window_t2

0x961a,	// (0x0004c607) popup_query_data_window_t3_ParamLimits

0x961a,	// (0x0004c607) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0005282c) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0005282c) popup_query_data_window_t

0x9634,	// (0x0004c621) query_popup_data_pane_ParamLimits

0x9634,	// (0x0004c621) query_popup_data_pane

0x9648,	// (0x0004c635) query_popup_data_pane_cp1_ParamLimits

0x9648,	// (0x0004c635) query_popup_data_pane_cp1

0x94db,	// (0x0004c4c8) bg_popup_window_pane_cp10_ParamLimits

0x94db,	// (0x0004c4c8) bg_popup_window_pane_cp10

0x950d,	// (0x0004c4fa) indicator_popup_pane_ParamLimits

0x950d,	// (0x0004c4fa) indicator_popup_pane

0x952f,	// (0x0004c51c) popup_query_code_window_t1_ParamLimits

0x952f,	// (0x0004c51c) popup_query_code_window_t1

0x9549,	// (0x0004c536) popup_query_code_window_t2_ParamLimits

0x9549,	// (0x0004c536) popup_query_code_window_t2

0x9592,	// (0x0004c57f) popup_query_code_window_t3_ParamLimits

0x9592,	// (0x0004c57f) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00052825) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00052825) popup_query_code_window_t

0x95c1,	// (0x0004c5ae) query_popup_pane_ParamLimits

0x95c1,	// (0x0004c5ae) query_popup_pane

0xdc2f,	// (0x00050c1c) bg_popup_window_pane_cp15_ParamLimits

0xdc2f,	// (0x00050c1c) bg_popup_window_pane_cp15

0xdc4f,	// (0x00050c3c) indicator_popup_pane_cp1_ParamLimits

0xdc4f,	// (0x00050c3c) indicator_popup_pane_cp1

0xdc62,	// (0x00050c4f) indicator_popup_pane_cp2_ParamLimits

0xdc62,	// (0x00050c4f) indicator_popup_pane_cp2

0xdc7d,	// (0x00050c6a) popup_query_data_code_window_g1_ParamLimits

0xdc7d,	// (0x00050c6a) popup_query_data_code_window_g1

0xdc90,	// (0x00050c7d) popup_query_data_code_window_t1_ParamLimits

0xdc90,	// (0x00050c7d) popup_query_data_code_window_t1

0xdca2,	// (0x00050c8f) popup_query_data_code_window_t2_ParamLimits

0xdca2,	// (0x00050c8f) popup_query_data_code_window_t2

0xdcb4,	// (0x00050ca1) popup_query_data_code_window_t3_ParamLimits

0xdcb4,	// (0x00050ca1) popup_query_data_code_window_t3

0xdcca,	// (0x00050cb7) popup_query_data_code_window_t4_ParamLimits

0xdcca,	// (0x00050cb7) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00052577) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00052577) popup_query_data_code_window_t

0x0fa0,	// (0x00043f8d) list_single_midp_graphic_pane_g3

0xdce4,	// (0x00050cd1) query_popup_data_pane_cp2_ParamLimits

0xdcf7,	// (0x00050ce4) query_popup_pane_cp2_ParamLimits

0xdcf7,	// (0x00050ce4) query_popup_pane_cp2

0xd9ec,	// (0x000509d9) bg_popup_window_pane_cp11

0x94d3,	// (0x0004c4c0) heading_pane_cp5

0xdd8d,	// (0x00050d7a) listscroll_popup_info_pane

0xd9ec,	// (0x000509d9) input_focus_pane_cp3

0xdd12,	// (0x00050cff) query_popup_pane_t1

0xdd20,	// (0x00050d0d) list_popup_info_pane_ParamLimits

0xdd20,	// (0x00050d0d) list_popup_info_pane

0xdd2f,	// (0x00050d1c) listscroll_popup_info_pane_g1

0xdd37,	// (0x00050d24) scroll_pane_cp7

0xdd41,	// (0x00050d2e) popup_info_list_pane_t1_ParamLimits

0xdd41,	// (0x00050d2e) popup_info_list_pane_t1

0xdd5b,	// (0x00050d48) popup_info_list_pane_t2_ParamLimits

0xdd5b,	// (0x00050d48) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00052580) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00052580) popup_info_list_pane_t

0xd9ec,	// (0x000509d9) bg_popup_window_pane_cp12

0xa8b2,	// (0x0004d89f) find_popup_pane

0xda46,	// (0x00050a33) bg_popup_window_pane_cp3

0xdd75,	// (0x00050d62) heading_pane_cp3

0xdd81,	// (0x00050d6e) listscroll_popup_graphic_pane

0xd9ec,	// (0x000509d9) bg_popup_window_pane_cp4

0x6323,	// (0x00049310) heading_pane_cp4

0xdd8d,	// (0x00050d7a) listscroll_popup_colour_pane

0x632d,	// (0x0004931a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x632d,	// (0x0004931a) cell_large_graphic_colour_none_popup_pane

0x6341,	// (0x0004932e) grid_large_graphic_colour_popup_pane_ParamLimits

0x6341,	// (0x0004932e) grid_large_graphic_colour_popup_pane

0x636d,	// (0x0004935a) listscroll_popup_colour_pane_g1_ParamLimits

0x636d,	// (0x0004935a) listscroll_popup_colour_pane_g1

0x6384,	// (0x00049371) listscroll_popup_colour_pane_g2_ParamLimits

0x6384,	// (0x00049371) listscroll_popup_colour_pane_g2

0x639b,	// (0x00049388) listscroll_popup_colour_pane_g3_ParamLimits

0x639b,	// (0x00049388) listscroll_popup_colour_pane_g3

0x63ab,	// (0x00049398) listscroll_popup_colour_pane_g4_ParamLimits

0x63ab,	// (0x00049398) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00052585) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00052585) listscroll_popup_colour_pane_g

0xdd95,	// (0x00050d82) scroll_pane_cp6_ParamLimits

0xdd95,	// (0x00050d82) scroll_pane_cp6

0x63bf,	// (0x000493ac) cell_large_graphic_colour_popup_pane_ParamLimits

0x63bf,	// (0x000493ac) cell_large_graphic_colour_popup_pane

0xdda7,	// (0x00050d94) cell_large_graphic_colour_none_popup_pane_t1

0xd9ec,	// (0x000509d9) grid_highlight_pane_cp5

0xddb6,	// (0x00050da3) cell_large_graphic_colour_popup_pane_g1

0xddbe,	// (0x00050dab) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005258e) cell_large_graphic_colour_popup_pane_g

0xddc6,	// (0x00050db3) cell_large_graphic_colour_popup_pane_g2_copy1

0xddcf,	// (0x00050dbc) grid_highlight_pane_cp4

0xddd7,	// (0x00050dc4) bg_popup_window_pane_cp8_ParamLimits

0xddd7,	// (0x00050dc4) bg_popup_window_pane_cp8

0xddf2,	// (0x00050ddf) popup_snote_single_text_window_g1_ParamLimits

0xddf2,	// (0x00050ddf) popup_snote_single_text_window_g1

0xde04,	// (0x00050df1) popup_snote_single_text_window_t1_ParamLimits

0xde04,	// (0x00050df1) popup_snote_single_text_window_t1

0xde17,	// (0x00050e04) popup_snote_single_text_window_t2_ParamLimits

0xde17,	// (0x00050e04) popup_snote_single_text_window_t2

0xde2a,	// (0x00050e17) popup_snote_single_text_window_t3_ParamLimits

0xde2a,	// (0x00050e17) popup_snote_single_text_window_t3

0xde63,	// (0x00050e50) popup_snote_single_text_window_t4_ParamLimits

0xde63,	// (0x00050e50) popup_snote_single_text_window_t4

0xde97,	// (0x00050e84) popup_snote_single_text_window_t5_ParamLimits

0xde97,	// (0x00050e84) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00052593) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00052593) popup_snote_single_text_window_t

0xdec6,	// (0x00050eb3) bg_popup_window_pane_cp9_ParamLimits

0xdec6,	// (0x00050eb3) bg_popup_window_pane_cp9

0xddf2,	// (0x00050ddf) popup_snote_single_graphic_window_g1_ParamLimits

0xddf2,	// (0x00050ddf) popup_snote_single_graphic_window_g1

0xded4,	// (0x00050ec1) popup_snote_single_graphic_window_g2_ParamLimits

0xded4,	// (0x00050ec1) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005259e) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005259e) popup_snote_single_graphic_window_g

0xdee0,	// (0x00050ecd) popup_snote_single_graphic_window_t1_ParamLimits

0xdee0,	// (0x00050ecd) popup_snote_single_graphic_window_t1

0xdef3,	// (0x00050ee0) popup_snote_single_graphic_window_t2_ParamLimits

0xdef3,	// (0x00050ee0) popup_snote_single_graphic_window_t2

0xdf06,	// (0x00050ef3) popup_snote_single_graphic_window_t3_ParamLimits

0xdf06,	// (0x00050ef3) popup_snote_single_graphic_window_t3

0xdf3f,	// (0x00050f2c) popup_snote_single_graphic_window_t4_ParamLimits

0xdf3f,	// (0x00050f2c) popup_snote_single_graphic_window_t4

0xdf73,	// (0x00050f60) popup_snote_single_graphic_window_t5_ParamLimits

0xdf73,	// (0x00050f60) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000525a3) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000525a3) popup_snote_single_graphic_window_t

0xa7f0,	// (0x0004d7dd) grid_graphic_popup_pane_ParamLimits

0xa7f0,	// (0x0004d7dd) grid_graphic_popup_pane

0xa81e,	// (0x0004d80b) listscroll_popup_graphic_pane_g1_ParamLimits

0xa81e,	// (0x0004d80b) listscroll_popup_graphic_pane_g1

0xa832,	// (0x0004d81f) listscroll_popup_graphic_pane_g2_ParamLimits

0xa832,	// (0x0004d81f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x000529a2) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x000529a2) listscroll_popup_graphic_pane_g

0xa846,	// (0x0004d833) scroll_pane_cp5

0xa798,	// (0x0004d785) cell_graphic_popup_pane_ParamLimits

0xa798,	// (0x0004d785) cell_graphic_popup_pane

0xa779,	// (0x0004d766) cell_graphic_popup_pane_g1

0xa781,	// (0x0004d76e) cell_graphic_popup_pane_g2

0xddc6,	// (0x00050db3) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x0005299b) cell_graphic_popup_pane_g

0xa78a,	// (0x0004d777) cell_graphic_popup_pane_t2

0xddcf,	// (0x00050dbc) grid_highlight_pane_cp3

0xdfb4,	// (0x00050fa1) list_gen_pane_ParamLimits

0xdfb4,	// (0x00050fa1) list_gen_pane

0xdfdc,	// (0x00050fc9) scroll_pane

0xa6d1,	// (0x0004d6be) bg_list_pane_g1_ParamLimits

0xa6d1,	// (0x0004d6be) bg_list_pane_g1

0xa6ee,	// (0x0004d6db) bg_list_pane_g2_ParamLimits

0xa6ee,	// (0x0004d6db) bg_list_pane_g2

0xa703,	// (0x0004d6f0) bg_list_pane_g3_ParamLimits

0xa703,	// (0x0004d6f0) bg_list_pane_g3

0xa717,	// (0x0004d704) bg_list_pane_g4_ParamLimits

0xa717,	// (0x0004d704) bg_list_pane_g4

0xa72b,	// (0x0004d718) bg_list_pane_g5_ParamLimits

0xa72b,	// (0x0004d718) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00052990) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00052990) bg_list_pane_g

0x74b1,	// (0x0004a49e) list_double2_graphic_large_graphic_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_double2_graphic_large_graphic_pane

0x74b1,	// (0x0004a49e) list_double2_graphic_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_double2_graphic_pane

0x74b1,	// (0x0004a49e) list_double2_large_graphic_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_double2_large_graphic_pane

0x74b1,	// (0x0004a49e) list_double2_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_double2_pane

0x74b1,	// (0x0004a49e) list_double_graphic_heading_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_double_graphic_heading_pane

0x74b1,	// (0x0004a49e) list_double_graphic_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_double_graphic_pane

0x74b1,	// (0x0004a49e) list_double_heading_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_double_heading_pane

0x74b1,	// (0x0004a49e) list_double_large_graphic_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_double_large_graphic_pane

0x74b1,	// (0x0004a49e) list_double_number_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_double_number_pane

0x74b1,	// (0x0004a49e) list_double_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_double_pane

0x74b1,	// (0x0004a49e) list_double_time_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_double_time_pane

0x74b1,	// (0x0004a49e) list_setting_number_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_setting_number_pane

0x74b1,	// (0x0004a49e) list_setting_pane_ParamLimits

0x74b1,	// (0x0004a49e) list_setting_pane

0xa68d,	// (0x0004d67a) list_single_2graphic_pane_ParamLimits

0xa68d,	// (0x0004d67a) list_single_2graphic_pane

0xa68d,	// (0x0004d67a) list_single_graphic_heading_pane_ParamLimits

0xa68d,	// (0x0004d67a) list_single_graphic_heading_pane

0xa68d,	// (0x0004d67a) list_single_graphic_pane_ParamLimits

0xa68d,	// (0x0004d67a) list_single_graphic_pane

0xa68d,	// (0x0004d67a) list_single_heading_pane_ParamLimits

0xa68d,	// (0x0004d67a) list_single_heading_pane

0x74d9,	// (0x0004a4c6) list_single_large_graphic_pane_ParamLimits

0x74d9,	// (0x0004a4c6) list_single_large_graphic_pane

0xa68d,	// (0x0004d67a) list_single_number_heading_pane_ParamLimits

0xa68d,	// (0x0004d67a) list_single_number_heading_pane

0xa68d,	// (0x0004d67a) list_single_number_pane_ParamLimits

0xa68d,	// (0x0004d67a) list_single_number_pane

0xa68d,	// (0x0004d67a) list_single_pane_ParamLimits

0xa68d,	// (0x0004d67a) list_single_pane

0xd9ec,	// (0x000509d9) list_highlight_pane_cp1

0x1b33,	// (0x00044b20) list_single_pane_g1_ParamLimits

0x1b33,	// (0x00044b20) list_single_pane_g1

0x63ee,	// (0x000493db) list_single_pane_g2_ParamLimits

0x63ee,	// (0x000493db) list_single_pane_g2

0x0001,

0xf5d2,	// (0x000525bf) list_single_pane_g_ParamLimits

0xf5d2,	// (0x000525bf) list_single_pane_g

0x56da,	// (0x000486c7) list_single_pane_t1_ParamLimits

0x56da,	// (0x000486c7) list_single_pane_t1

0x1b33,	// (0x00044b20) list_single_number_pane_g1_ParamLimits

0x1b33,	// (0x00044b20) list_single_number_pane_g1

0x63ee,	// (0x000493db) list_single_number_pane_g2_ParamLimits

0x63ee,	// (0x000493db) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x000525bf) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x000525bf) list_single_number_pane_g

0x567c,	// (0x00048669) list_single_number_pane_t1_ParamLimits

0x567c,	// (0x00048669) list_single_number_pane_t1

0x5692,	// (0x0004867f) list_single_number_pane_t2_ParamLimits

0x5692,	// (0x0004867f) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00052951) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00052951) list_single_number_pane_t

0x4dad,	// (0x00047d9a) list_single_graphic_pane_g1_ParamLimits

0x4dad,	// (0x00047d9a) list_single_graphic_pane_g1

0x1b33,	// (0x00044b20) list_single_graphic_pane_g2_ParamLimits

0x1b33,	// (0x00044b20) list_single_graphic_pane_g2

0x63ee,	// (0x000493db) list_single_graphic_pane_g3_ParamLimits

0x63ee,	// (0x000493db) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000525ae) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000525ae) list_single_graphic_pane_g

0x4db9,	// (0x00047da6) list_single_graphic_pane_t1_ParamLimits

0x4db9,	// (0x00047da6) list_single_graphic_pane_t1

0x4dcf,	// (0x00047dbc) list_single_heading_pane_g1_ParamLimits

0x4dcf,	// (0x00047dbc) list_single_heading_pane_g1

0x63ee,	// (0x000493db) list_single_heading_pane_g2_ParamLimits

0x63ee,	// (0x000493db) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000525b5) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000525b5) list_single_heading_pane_g

0x4de2,	// (0x00047dcf) list_single_heading_pane_t1_ParamLimits

0x4de2,	// (0x00047dcf) list_single_heading_pane_t1

0x63fa,	// (0x000493e7) list_single_heading_pane_t2_ParamLimits

0x63fa,	// (0x000493e7) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000525ba) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000525ba) list_single_heading_pane_t

0x1b33,	// (0x00044b20) list_single_number_heading_pane_g1_ParamLimits

0x1b33,	// (0x00044b20) list_single_number_heading_pane_g1

0x63ee,	// (0x000493db) list_single_number_heading_pane_g2_ParamLimits

0x63ee,	// (0x000493db) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x000525bf) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x000525bf) list_single_number_heading_pane_g

0x4df8,	// (0x00047de5) list_single_number_heading_pane_t1_ParamLimits

0x4df8,	// (0x00047de5) list_single_number_heading_pane_t1

0x4e0e,	// (0x00047dfb) list_single_number_heading_pane_t2_ParamLimits

0x4e0e,	// (0x00047dfb) list_single_number_heading_pane_t2

0x4e20,	// (0x00047e0d) list_single_number_heading_pane_t3_ParamLimits

0x4e20,	// (0x00047e0d) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x000525c4) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x000525c4) list_single_number_heading_pane_t

0x4e32,	// (0x00047e1f) list_single_graphic_heading_pane_g1_ParamLimits

0x4e32,	// (0x00047e1f) list_single_graphic_heading_pane_g1

0x640c,	// (0x000493f9) list_single_graphic_heading_pane_g4_ParamLimits

0x640c,	// (0x000493f9) list_single_graphic_heading_pane_g4

0x63ee,	// (0x000493db) list_single_graphic_heading_pane_g5_ParamLimits

0x63ee,	// (0x000493db) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x000525cb) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x000525cb) list_single_graphic_heading_pane_g

0x4df8,	// (0x00047de5) list_single_graphic_heading_pane_t1_ParamLimits

0x4df8,	// (0x00047de5) list_single_graphic_heading_pane_t1

0x4e4a,	// (0x00047e37) list_single_graphic_heading_pane_t2_ParamLimits

0x4e4a,	// (0x00047e37) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x000525d2) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x000525d2) list_single_graphic_heading_pane_t

0x641d,	// (0x0004940a) list_single_large_graphic_pane_g1_ParamLimits

0x641d,	// (0x0004940a) list_single_large_graphic_pane_g1

0x6429,	// (0x00049416) list_single_large_graphic_pane_g2_ParamLimits

0x6429,	// (0x00049416) list_single_large_graphic_pane_g2

0x6435,	// (0x00049422) list_single_large_graphic_pane_g3_ParamLimits

0x6435,	// (0x00049422) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x000525d7) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x000525d7) list_single_large_graphic_pane_g

0x967c,	// (0x0004c669) wait_border_pane_g2_copy1

0x6441,	// (0x0004942e) list_single_large_graphic_pane_g4_cp2

0x4e62,	// (0x00047e4f) list_single_large_graphic_pane_t1_ParamLimits

0x4e62,	// (0x00047e4f) list_single_large_graphic_pane_t1

0x6449,	// (0x00049436) list_double_pane_g1_ParamLimits

0x6449,	// (0x00049436) list_double_pane_g1

0x6455,	// (0x00049442) list_double_pane_g2_ParamLimits

0x6455,	// (0x00049442) list_double_pane_g2

0x0001,

0xf5f1,	// (0x000525de) list_double_pane_g_ParamLimits

0xf5f1,	// (0x000525de) list_double_pane_g

0x4e78,	// (0x00047e65) list_double_pane_t1_ParamLimits

0x4e78,	// (0x00047e65) list_double_pane_t1

0x4e8e,	// (0x00047e7b) list_double_pane_t2_ParamLimits

0x4e8e,	// (0x00047e7b) list_double_pane_t2

0x0001,

0xf5f6,	// (0x000525e3) list_double_pane_t_ParamLimits

0xf5f6,	// (0x000525e3) list_double_pane_t

0x4ea0,	// (0x00047e8d) list_double2_pane_g1_ParamLimits

0x4ea0,	// (0x00047e8d) list_double2_pane_g1

0x4eb1,	// (0x00047e9e) list_double2_pane_g2_ParamLimits

0x4eb1,	// (0x00047e9e) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x000525e8) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x000525e8) list_double2_pane_g

0x4ebd,	// (0x00047eaa) list_double2_pane_t1_ParamLimits

0x4ebd,	// (0x00047eaa) list_double2_pane_t1

0x4ed3,	// (0x00047ec0) list_double2_pane_t2_ParamLimits

0x4ed3,	// (0x00047ec0) list_double2_pane_t2

0x0001,

0xf600,	// (0x000525ed) list_double2_pane_t_ParamLimits

0xf600,	// (0x000525ed) list_double2_pane_t

0x6449,	// (0x00049436) list_double_number_pane_g1_ParamLimits

0x6449,	// (0x00049436) list_double_number_pane_g1

0x6455,	// (0x00049442) list_double_number_pane_g2_ParamLimits

0x6455,	// (0x00049442) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x000525de) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x000525de) list_double_number_pane_g

0x4ee5,	// (0x00047ed2) list_double_number_pane_t1_ParamLimits

0x4ee5,	// (0x00047ed2) list_double_number_pane_t1

0x4ef7,	// (0x00047ee4) list_double_number_pane_t2_ParamLimits

0x4ef7,	// (0x00047ee4) list_double_number_pane_t2

0x4f0d,	// (0x00047efa) list_double_number_pane_t3_ParamLimits

0x4f0d,	// (0x00047efa) list_double_number_pane_t3

0x0002,

0xf605,	// (0x000525f2) list_double_number_pane_t_ParamLimits

0xf605,	// (0x000525f2) list_double_number_pane_t

0x4f1f,	// (0x00047f0c) list_double_graphic_pane_g1_ParamLimits

0x4f1f,	// (0x00047f0c) list_double_graphic_pane_g1

0x4f2b,	// (0x00047f18) list_double_graphic_pane_g2_ParamLimits

0x4f2b,	// (0x00047f18) list_double_graphic_pane_g2

0x4f3a,	// (0x00047f27) list_double_graphic_pane_g3_ParamLimits

0x4f3a,	// (0x00047f27) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000525f9) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000525f9) list_double_graphic_pane_g

0x4f52,	// (0x00047f3f) list_double_graphic_pane_t1_ParamLimits

0x4f52,	// (0x00047f3f) list_double_graphic_pane_t1

0x4f68,	// (0x00047f55) list_double_graphic_pane_t2_ParamLimits

0x4f68,	// (0x00047f55) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00052602) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00052602) list_double_graphic_pane_t

0x4f7a,	// (0x00047f67) list_double2_graphic_pane_g1_ParamLimits

0x4f7a,	// (0x00047f67) list_double2_graphic_pane_g1

0x6461,	// (0x0004944e) list_double2_graphic_pane_g2_ParamLimits

0x6461,	// (0x0004944e) list_double2_graphic_pane_g2

0x646d,	// (0x0004945a) list_double2_graphic_pane_g3_ParamLimits

0x646d,	// (0x0004945a) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00052607) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00052607) list_double2_graphic_pane_g

0x4f86,	// (0x00047f73) list_double2_graphic_pane_t1_ParamLimits

0x4f86,	// (0x00047f73) list_double2_graphic_pane_t1

0x4f9c,	// (0x00047f89) list_double2_graphic_pane_t2_ParamLimits

0x4f9c,	// (0x00047f89) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005260e) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005260e) list_double2_graphic_pane_t

0x4fae,	// (0x00047f9b) list_double_large_graphic_pane_g1_ParamLimits

0x4fae,	// (0x00047f9b) list_double_large_graphic_pane_g1

0x4fd9,	// (0x00047fc6) list_double_large_graphic_pane_g2_ParamLimits

0x4fd9,	// (0x00047fc6) list_double_large_graphic_pane_g2

0x6455,	// (0x00049442) list_double_large_graphic_pane_g3_ParamLimits

0x6455,	// (0x00049442) list_double_large_graphic_pane_g3

0x4fef,	// (0x00047fdc) list_double_large_graphic_pane_g4_ParamLimits

0x4fef,	// (0x00047fdc) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00052613) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00052613) list_double_large_graphic_pane_g

0x5002,	// (0x00047fef) list_double_large_graphic_pane_t1_ParamLimits

0x5002,	// (0x00047fef) list_double_large_graphic_pane_t1

0x501b,	// (0x00048008) list_double_large_graphic_pane_t2_ParamLimits

0x501b,	// (0x00048008) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005261e) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005261e) list_double_large_graphic_pane_t

0x648e,	// (0x0004947b) list_double2_large_graphic_pane_g1_ParamLimits

0x648e,	// (0x0004947b) list_double2_large_graphic_pane_g1

0x502d,	// (0x0004801a) list_double2_large_graphic_pane_g2_ParamLimits

0x502d,	// (0x0004801a) list_double2_large_graphic_pane_g2

0x646d,	// (0x0004945a) list_double2_large_graphic_pane_g3_ParamLimits

0x646d,	// (0x0004945a) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00052623) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00052623) list_double2_large_graphic_pane_g

0x503e,	// (0x0004802b) list_double2_large_graphic_pane_t1_ParamLimits

0x503e,	// (0x0004802b) list_double2_large_graphic_pane_t1

0x5054,	// (0x00048041) list_double2_large_graphic_pane_t2_ParamLimits

0x5054,	// (0x00048041) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005262a) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005262a) list_double2_large_graphic_pane_t

0x5066,	// (0x00048053) list_double_heading_pane_g1_ParamLimits

0x5066,	// (0x00048053) list_double_heading_pane_g1

0x649a,	// (0x00049487) list_double_heading_pane_g2_ParamLimits

0x649a,	// (0x00049487) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005262f) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005262f) list_double_heading_pane_g

0x5077,	// (0x00048064) list_double_heading_pane_t1_ParamLimits

0x5077,	// (0x00048064) list_double_heading_pane_t1

0x508d,	// (0x0004807a) list_double_heading_pane_t2_ParamLimits

0x508d,	// (0x0004807a) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00052634) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00052634) list_double_heading_pane_t

0x4f1f,	// (0x00047f0c) list_double_graphic_heading_pane_g1_ParamLimits

0x4f1f,	// (0x00047f0c) list_double_graphic_heading_pane_g1

0x5066,	// (0x00048053) list_double_graphic_heading_pane_g2_ParamLimits

0x5066,	// (0x00048053) list_double_graphic_heading_pane_g2

0x649a,	// (0x00049487) list_double_graphic_heading_pane_g3_ParamLimits

0x649a,	// (0x00049487) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00052639) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00052639) list_double_graphic_heading_pane_g

0x509f,	// (0x0004808c) list_double_graphic_heading_pane_t1_ParamLimits

0x509f,	// (0x0004808c) list_double_graphic_heading_pane_t1

0x50b5,	// (0x000480a2) list_double_graphic_heading_pane_t2_ParamLimits

0x50b5,	// (0x000480a2) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00052640) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00052640) list_double_graphic_heading_pane_t

0x50c7,	// (0x000480b4) list_double_time_pane_g1_ParamLimits

0x50c7,	// (0x000480b4) list_double_time_pane_g1

0x50d8,	// (0x000480c5) list_double_time_pane_g2_ParamLimits

0x50d8,	// (0x000480c5) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00052645) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00052645) list_double_time_pane_g

0x50e4,	// (0x000480d1) list_double_time_pane_t1_ParamLimits

0x50e4,	// (0x000480d1) list_double_time_pane_t1

0x50fa,	// (0x000480e7) list_double_time_pane_t2_ParamLimits

0x50fa,	// (0x000480e7) list_double_time_pane_t2

0x510c,	// (0x000480f9) list_double_time_pane_t3_ParamLimits

0x510c,	// (0x000480f9) list_double_time_pane_t3

0x511e,	// (0x0004810b) list_double_time_pane_t4_ParamLimits

0x511e,	// (0x0004810b) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0005264a) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0005264a) list_double_time_pane_t

0x5130,	// (0x0004811d) list_setting_pane_g1_ParamLimits

0x5130,	// (0x0004811d) list_setting_pane_g1

0x513c,	// (0x00048129) list_setting_pane_g2_ParamLimits

0x513c,	// (0x00048129) list_setting_pane_g2

0x0001,

0xf666,	// (0x00052653) list_setting_pane_g_ParamLimits

0xf666,	// (0x00052653) list_setting_pane_g

0x5148,	// (0x00048135) list_setting_pane_t1_ParamLimits

0x5148,	// (0x00048135) list_setting_pane_t1

0x5162,	// (0x0004814f) list_setting_pane_t2_ParamLimits

0x5162,	// (0x0004814f) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00052658) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00052658) list_setting_pane_t

0x51a1,	// (0x0004818e) set_value_pane_cp_ParamLimits

0x51a1,	// (0x0004818e) set_value_pane_cp

0x51af,	// (0x0004819c) list_setting_number_pane_g1_ParamLimits

0x51af,	// (0x0004819c) list_setting_number_pane_g1

0x51bb,	// (0x000481a8) list_setting_number_pane_g2_ParamLimits

0x51bb,	// (0x000481a8) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005265f) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005265f) list_setting_number_pane_g

0x51c7,	// (0x000481b4) list_setting_number_pane_t1_ParamLimits

0x51c7,	// (0x000481b4) list_setting_number_pane_t1

0x51e0,	// (0x000481cd) list_setting_number_pane_t2_ParamLimits

0x51e0,	// (0x000481cd) list_setting_number_pane_t2

0x51fa,	// (0x000481e7) list_setting_number_pane_t3_ParamLimits

0x51fa,	// (0x000481e7) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00052664) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00052664) list_setting_number_pane_t

0x51a1,	// (0x0004818e) set_value_pane_ParamLimits

0x51a1,	// (0x0004818e) set_value_pane

0x0790,	// (0x0004377d) bg_set_opt_pane_ParamLimits

0x0790,	// (0x0004377d) bg_set_opt_pane

0x523d,	// (0x0004822a) set_value_pane_t1

0x07b1,	// (0x0004379e) slider_set_pane_cp3

0x07ba,	// (0x000437a7) volume_small_pane_cp

0x07c3,	// (0x000437b0) list_form_gen_pane

0x07cc,	// (0x000437b9) scroll_pane_cp8

0x5253,	// (0x00048240) form_field_data_pane_ParamLimits

0x5253,	// (0x00048240) form_field_data_pane

0x527b,	// (0x00048268) form_field_data_wide_pane_ParamLimits

0x527b,	// (0x00048268) form_field_data_wide_pane

0x52a2,	// (0x0004828f) form_field_popup_pane_ParamLimits

0x52a2,	// (0x0004828f) form_field_popup_pane

0x52c4,	// (0x000482b1) form_field_popup_wide_pane_ParamLimits

0x52c4,	// (0x000482b1) form_field_popup_wide_pane

0x52e5,	// (0x000482d2) form_field_slider_pane_ParamLimits

0x52e5,	// (0x000482d2) form_field_slider_pane

0x52f8,	// (0x000482e5) form_field_slider_wide_pane_ParamLimits

0x52f8,	// (0x000482e5) form_field_slider_wide_pane

0x07dd,	// (0x000437ca) data_form_pane

0x5315,	// (0x00048302) form_field_data_pane_t1

0x07e9,	// (0x000437d6) input_focus_pane

0x532f,	// (0x0004831c) data_form_wide_pane

0x534c,	// (0x00048339) form_field_data_wide_pane_t1

0xdde4,	// (0x00050dd1) input_focus_pane_cp6

0x536e,	// (0x0004835b) form_field_popup_pane_t1

0x07e9,	// (0x000437d6) input_focus_pane_cp7

0x0817,	// (0x00043804) list_form_pane

0x5390,	// (0x0004837d) form_field_popup_wide_pane_t1

0x07e9,	// (0x000437d6) input_focus_pane_cp8

0x0823,	// (0x00043810) list_form_wide_pane

0x53ad,	// (0x0004839a) form_field_slider_pane_t1_ParamLimits

0x53ad,	// (0x0004839a) form_field_slider_pane_t1

0x53c5,	// (0x000483b2) form_field_slider_pane_t2_ParamLimits

0x53c5,	// (0x000483b2) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00052674) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00052674) form_field_slider_pane_t

0xdb79,	// (0x00050b66) input_focus_pane_cp9_ParamLimits

0xdb79,	// (0x00050b66) input_focus_pane_cp9

0x53da,	// (0x000483c7) slider_cont_pane_ParamLimits

0x53da,	// (0x000483c7) slider_cont_pane

0x0832,	// (0x0004381f) form_field_slider_wide_pane_t1_ParamLimits

0x0832,	// (0x0004381f) form_field_slider_wide_pane_t1

0x53ee,	// (0x000483db) form_field_slider_wide_pane_t2_ParamLimits

0x53ee,	// (0x000483db) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00052679) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00052679) form_field_slider_wide_pane_t

0xdb79,	// (0x00050b66) input_focus_pane_cp10_ParamLimits

0xdb79,	// (0x00050b66) input_focus_pane_cp10

0x5400,	// (0x000483ed) slider_cont_pane_cp1_ParamLimits

0x5400,	// (0x000483ed) slider_cont_pane_cp1

0x5414,	// (0x00048401) slider_form_pane_cp

0x0844,	// (0x00043831) input_focus_pane_g1

0x084c,	// (0x00043839) input_focus_pane_g2

0x0854,	// (0x00043841) input_focus_pane_g3

0x085c,	// (0x00043849) input_focus_pane_g4

0x0864,	// (0x00043851) input_focus_pane_g5

0x086c,	// (0x00043859) input_focus_pane_g6

0x0874,	// (0x00043861) input_focus_pane_g7

0x087c,	// (0x00043869) input_focus_pane_g8

0x0884,	// (0x00043871) input_focus_pane_g9

0xd9e2,	// (0x000509cf) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005267e) input_focus_pane_g

0x9685,	// (0x0004c672) wait_border_pane_g3_copy1

0x541c,	// (0x00048409) data_form_pane_t1

0xd9e2,	// (0x000509cf) wait_anim_pane_g1_copy1

0x56a4,	// (0x00048691) data_form_wide_pane_t1

0x543b,	// (0x00048428) list_form_graphic_pane_cp_ParamLimits

0x543b,	// (0x00048428) list_form_graphic_pane_cp

0xa5e4,	// (0x0004d5d1) slider_form_pane_g1

0xa5ed,	// (0x0004d5da) slider_form_pane_g2

0x0006,

0xf994,	// (0x00052981) slider_form_pane_g

0x543b,	// (0x00048428) list_form_graphic_pane_ParamLimits

0x543b,	// (0x00048428) list_form_graphic_pane

0x544d,	// (0x0004843a) list_form_graphic_pane_g1

0x5455,	// (0x00048442) list_form_graphic_pane_t1_ParamLimits

0x5455,	// (0x00048442) list_form_graphic_pane_t1

0xda46,	// (0x00050a33) list_highlight_pane_cp5_ParamLimits

0xda46,	// (0x00050a33) list_highlight_pane_cp5

0x64a6,	// (0x00049493) find_pane_g1

0x088c,	// (0x00043879) input_find_pane

0x546a,	// (0x00048457) input_find_pane_g1_ParamLimits

0x546a,	// (0x00048457) input_find_pane_g1

0x5476,	// (0x00048463) input_find_pane_t1_ParamLimits

0x5476,	// (0x00048463) input_find_pane_t1

0x548b,	// (0x00048478) input_find_pane_t2_ParamLimits

0x548b,	// (0x00048478) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00052693) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00052693) input_find_pane_t

0x0895,	// (0x00043882) input_focus_pane_cp5_ParamLimits

0x0895,	// (0x00043882) input_focus_pane_cp5

0x08a3,	// (0x00043890) bg_popup_window_pane_cp2_ParamLimits

0x08a3,	// (0x00043890) bg_popup_window_pane_cp2

0x08b0,	// (0x0004389d) listscroll_menu_pane_ParamLimits

0x08b0,	// (0x0004389d) listscroll_menu_pane

0x64bb,	// (0x000494a8) popup_submenu_window_ParamLimits

0x64bb,	// (0x000494a8) popup_submenu_window

0x08bc,	// (0x000438a9) find_popup_pane_g1

0x08c4,	// (0x000438b1) input_popup_find_pane_cp

0x0895,	// (0x00043882) input_focus_pane_cp4_ParamLimits

0x0895,	// (0x00043882) input_focus_pane_cp4

0x08ce,	// (0x000438bb) input_popup_find_pane_t1_ParamLimits

0x08ce,	// (0x000438bb) input_popup_find_pane_t1

0xd9ec,	// (0x000509d9) bg_popup_sub_pane_cp

0x08fc,	// (0x000438e9) listscroll_popup_sub_pane

0x0904,	// (0x000438f1) list_submenu_pane_ParamLimits

0x0904,	// (0x000438f1) list_submenu_pane

0x0915,	// (0x00043902) scroll_pane_cp4

0x091d,	// (0x0004390a) list_single_popup_submenu_pane_ParamLimits

0x091d,	// (0x0004390a) list_single_popup_submenu_pane

0x0932,	// (0x0004391f) list_single_popup_submenu_pane_g1

0x093a,	// (0x00043927) list_single_popup_submenu_pane_t1_ParamLimits

0x093a,	// (0x00043927) list_single_popup_submenu_pane_t1

0xda46,	// (0x00050a33) bg_active_tab_pane_cp1_ParamLimits

0xda46,	// (0x00050a33) bg_active_tab_pane_cp1

0x64f9,	// (0x000494e6) tabs_2_active_pane_g1

0x6501,	// (0x000494ee) tabs_2_active_pane_t1

0xda46,	// (0x00050a33) bg_passive_tab_pane_cp1_ParamLimits

0xda46,	// (0x00050a33) bg_passive_tab_pane_cp1

0x64f9,	// (0x000494e6) tabs_2_passive_pane_g1

0x6501,	// (0x000494ee) tabs_2_passive_pane_t1

0x17b9,	// (0x000447a6) bg_active_tab_pane_cp4

0x6513,	// (0x00049500) tabs_2_long_active_pane_t1

0x6526,	// (0x00049513) bg_passive_tab_pane_cp4

0x7171,	// (0x0004a15e) list_single_midp_graphic_pane_g4_ParamLimits

0x17b9,	// (0x000447a6) bg_active_tab_pane_cp5

0x6532,	// (0x0004951f) tabs_3_long_active_pane_t1

0x6526,	// (0x00049513) bg_passive_tab_pane_cp5

0x7171,	// (0x0004a15e) list_single_midp_graphic_pane_g4

0xda46,	// (0x00050a33) bg_popup_window_pane_cp13_ParamLimits

0xda46,	// (0x00050a33) bg_popup_window_pane_cp13

0x0958,	// (0x00043945) listscroll_popup_fast_pane_ParamLimits

0x0958,	// (0x00043945) listscroll_popup_fast_pane

0x0967,	// (0x00043954) grid_popup_fast_pane_ParamLimits

0x0967,	// (0x00043954) grid_popup_fast_pane

0x0979,	// (0x00043966) scroll_pane_cp9_ParamLimits

0x0979,	// (0x00043966) scroll_pane_cp9

0xbf65,	// (0x0004ef52) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbf65,	// (0x0004ef52) list_single_graphic_hl_pane_t1_cp2

0x099d,	// (0x0004398a) input_focus_pane_cp20_ParamLimits

0x099d,	// (0x0004398a) input_focus_pane_cp20

0x09ab,	// (0x00043998) query_popup_data_pane_t1_ParamLimits

0x09ab,	// (0x00043998) query_popup_data_pane_t1

0x09be,	// (0x000439ab) query_popup_data_pane_t2_ParamLimits

0x09be,	// (0x000439ab) query_popup_data_pane_t2

0x0a04,	// (0x000439f1) query_popup_data_pane_t3_ParamLimits

0x0a04,	// (0x000439f1) query_popup_data_pane_t3

0x0a45,	// (0x00043a32) query_popup_data_pane_t4_ParamLimits

0x0a45,	// (0x00043a32) query_popup_data_pane_t4

0x0a81,	// (0x00043a6e) query_popup_data_pane_t5_ParamLimits

0x0a81,	// (0x00043a6e) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00052698) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00052698) query_popup_data_pane_t

0x0844,	// (0x00043831) bg_set_opt_pane_g1

0x084c,	// (0x00043839) bg_set_opt_pane_g2

0x0854,	// (0x00043841) bg_set_opt_pane_g3

0x085c,	// (0x00043849) bg_set_opt_pane_g4

0x0864,	// (0x00043851) bg_set_opt_pane_g5

0x086c,	// (0x00043859) bg_set_opt_pane_g6

0x0874,	// (0x00043861) bg_set_opt_pane_g7

0x087c,	// (0x00043869) bg_set_opt_pane_g8

0x0884,	// (0x00043871) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x000526a3) bg_set_opt_pane_g

0x69c4,	// (0x000499b1) control_top_pane_stacon_ParamLimits

0x69c4,	// (0x000499b1) control_top_pane_stacon

0x6a17,	// (0x00049a04) signal_pane_stacon_ParamLimits

0x6a17,	// (0x00049a04) signal_pane_stacon

0x0e98,	// (0x00043e85) stacon_top_pane_g1_ParamLimits

0x0e98,	// (0x00043e85) stacon_top_pane_g1

0x6a3c,	// (0x00049a29) title_pane_stacon_ParamLimits

0x6a3c,	// (0x00049a29) title_pane_stacon

0x6a66,	// (0x00049a53) uni_indicator_pane_stacon_ParamLimits

0x6a66,	// (0x00049a53) uni_indicator_pane_stacon

0x6a7e,	// (0x00049a6b) battery_pane_stacon_ParamLimits

0x6a7e,	// (0x00049a6b) battery_pane_stacon

0x6ac2,	// (0x00049aaf) control_bottom_pane_stacon_ParamLimits

0x6ac2,	// (0x00049aaf) control_bottom_pane_stacon

0x6ae5,	// (0x00049ad2) navi_pane_stacon_ParamLimits

0x6ae5,	// (0x00049ad2) navi_pane_stacon

0x0eba,	// (0x00043ea7) stacon_bottom_pane_g1_ParamLimits

0x0eba,	// (0x00043ea7) stacon_bottom_pane_g1

0x6544,	// (0x00049531) aid_levels_signal_lsc_ParamLimits

0x6544,	// (0x00049531) aid_levels_signal_lsc

0x655b,	// (0x00049548) signal_pane_stacon_g1_ParamLimits

0x655b,	// (0x00049548) signal_pane_stacon_g1

0x656f,	// (0x0004955c) signal_pane_stacon_g2_ParamLimits

0x656f,	// (0x0004955c) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x000526b6) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000526b6) signal_pane_stacon_g

0x65a4,	// (0x00049591) title_pane_stacon_t1_ParamLimits

0x65a4,	// (0x00049591) title_pane_stacon_t1

0x0ad9,	// (0x00043ac6) uni_indicator_pane_stacon_g1

0x0ae3,	// (0x00043ad0) uni_indicator_pane_stacon_g2

0x0ac5,	// (0x00043ab2) uni_indicator_pane_stacon_g3

0x0acf,	// (0x00043abc) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x000526c2) uni_indicator_pane_stacon_g

0x65c9,	// (0x000495b6) control_top_pane_stacon_g1

0x65d1,	// (0x000495be) control_top_pane_stacon_t1_ParamLimits

0x65d1,	// (0x000495be) control_top_pane_stacon_t1

0x6608,	// (0x000495f5) aid_levels_battery_lsc_ParamLimits

0x6608,	// (0x000495f5) aid_levels_battery_lsc

0x6620,	// (0x0004960d) battery_pane_stacon_g1_ParamLimits

0x6620,	// (0x0004960d) battery_pane_stacon_g1

0x6633,	// (0x00049620) battery_pane_stacon_g2_ParamLimits

0x6633,	// (0x00049620) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x000526cb) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x000526cb) battery_pane_stacon_g

0x6671,	// (0x0004965e) navi_icon_pane_stacon

0x6685,	// (0x00049672) navi_navi_pane_stacon

0x6671,	// (0x0004965e) navi_text_pane_stacon

0x65c9,	// (0x000495b6) control_bottom_pane_stacon_g1

0x669b,	// (0x00049688) control_bottom_pane_stacon_t1_ParamLimits

0x669b,	// (0x00049688) control_bottom_pane_stacon_t1

0x66d2,	// (0x000496bf) grid_app_pane_ParamLimits

0x66d2,	// (0x000496bf) grid_app_pane

0x66f6,	// (0x000496e3) scroll_pane_cp15_ParamLimits

0x66f6,	// (0x000496e3) scroll_pane_cp15

0x6709,	// (0x000496f6) cell_app_pane_ParamLimits

0x6709,	// (0x000496f6) cell_app_pane

0x6735,	// (0x00049722) cell_app_pane_g1_ParamLimits

0x6735,	// (0x00049722) cell_app_pane_g1

0x0b07,	// (0x00043af4) cell_app_pane_g2_ParamLimits

0x0b07,	// (0x00043af4) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x000526d0) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x000526d0) cell_app_pane_g

0x0b13,	// (0x00043b00) cell_app_pane_t1_ParamLimits

0x0b13,	// (0x00043b00) cell_app_pane_t1

0x0b2a,	// (0x00043b17) grid_highlight_pane_ParamLimits

0x0b2a,	// (0x00043b17) grid_highlight_pane

0x0844,	// (0x00043831) cell_highlight_pane_g1

0x084c,	// (0x00043839) cell_highlight_pane_g2

0x0854,	// (0x00043841) cell_highlight_pane_g3

0x085c,	// (0x00043849) cell_highlight_pane_g4

0x0864,	// (0x00043851) cell_highlight_pane_g5

0x086c,	// (0x00043859) cell_highlight_pane_g6

0x0874,	// (0x00043861) cell_highlight_pane_g7

0x087c,	// (0x00043869) cell_highlight_pane_g8

0x0884,	// (0x00043871) cell_highlight_pane_g9

0xd9e2,	// (0x000509cf) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005267e) cell_highlight_pane_g

0x0b3b,	// (0x00043b28) bg_scroll_pane

0x6768,	// (0x00049755) scroll_handle_pane

0x0b82,	// (0x00043b6f) scroll_bg_pane_g1

0x0b97,	// (0x00043b84) scroll_bg_pane_g2

0x0baf,	// (0x00043b9c) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x000526d5) scroll_bg_pane_g

0x0bc4,	// (0x00043bb1) scroll_handle_focus_pane_ParamLimits

0x0bc4,	// (0x00043bb1) scroll_handle_focus_pane

0x0b82,	// (0x00043b6f) scroll_handle_pane_g1

0x0bd1,	// (0x00043bbe) scroll_handle_pane_g2

0x0baf,	// (0x00043b9c) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x000526dc) scroll_handle_pane_g

0x0895,	// (0x00043882) bg_popup_sub_pane_cp21_ParamLimits

0x0895,	// (0x00043882) bg_popup_sub_pane_cp21

0x0be5,	// (0x00043bd2) popup_fep_japan_predictive_window_t1_ParamLimits

0x0be5,	// (0x00043bd2) popup_fep_japan_predictive_window_t1

0x0bfc,	// (0x00043be9) popup_fep_japan_predictive_window_t2_ParamLimits

0x0bfc,	// (0x00043be9) popup_fep_japan_predictive_window_t2

0x0c2f,	// (0x00043c1c) popup_fep_japan_predictive_window_t3_ParamLimits

0x0c2f,	// (0x00043c1c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x000526e3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x000526e3) popup_fep_japan_predictive_window_t

0xd9ec,	// (0x000509d9) bg_popup_sub_pane_cp23

0x0c66,	// (0x00043c53) listscroll_japin_cand_pane

0x0c6e,	// (0x00043c5b) popup_fep_japan_candidate_window_t1

0x0c7c,	// (0x00043c69) candidate_pane_ParamLimits

0x0c7c,	// (0x00043c69) candidate_pane

0x0c8e,	// (0x00043c7b) scroll_pane_cp30

0x0c98,	// (0x00043c85) list_single_popup_jap_candidate_pane_ParamLimits

0x0c98,	// (0x00043c85) list_single_popup_jap_candidate_pane

0xd9ec,	// (0x000509d9) list_highlight_pane_cp30

0x0cac,	// (0x00043c99) list_single_popup_jap_candidate_pane_t1

0x6791,	// (0x0004977e) level_1_signal

0x679e,	// (0x0004978b) level_2_signal

0x67ab,	// (0x00049798) level_3_signal

0x67b8,	// (0x000497a5) level_4_signal

0x67c5,	// (0x000497b2) level_5_signal

0x67d2,	// (0x000497bf) level_6_signal

0x67df,	// (0x000497cc) level_7_signal

0x6791,	// (0x0004977e) level_1_battery

0x679e,	// (0x0004978b) level_2_battery

0x67ab,	// (0x00049798) level_3_battery

0x67b8,	// (0x000497a5) level_4_battery

0x67c5,	// (0x000497b2) level_5_battery

0x67d2,	// (0x000497bf) level_6_battery

0x67df,	// (0x000497cc) level_7_battery

0x0cd3,	// (0x00043cc0) list_menu_pane_ParamLimits

0x0cd3,	// (0x00043cc0) list_menu_pane

0x0ce9,	// (0x00043cd6) scroll_pane_cp25_ParamLimits

0x0ce9,	// (0x00043cd6) scroll_pane_cp25

0x0d02,	// (0x00043cef) list_double2_graphic_pane_cp2_ParamLimits

0x0d02,	// (0x00043cef) list_double2_graphic_pane_cp2

0x0d02,	// (0x00043cef) list_double2_large_graphic_pane_cp2_ParamLimits

0x0d02,	// (0x00043cef) list_double2_large_graphic_pane_cp2

0x0d02,	// (0x00043cef) list_double2_pane_cp2_ParamLimits

0x0d02,	// (0x00043cef) list_double2_pane_cp2

0x0d02,	// (0x00043cef) list_double_graphic_pane_cp2_ParamLimits

0x0d02,	// (0x00043cef) list_double_graphic_pane_cp2

0x0d02,	// (0x00043cef) list_double_large_graphic_pane_cp2_ParamLimits

0x0d02,	// (0x00043cef) list_double_large_graphic_pane_cp2

0x0d02,	// (0x00043cef) list_double_number_pane_cp2_ParamLimits

0x0d02,	// (0x00043cef) list_double_number_pane_cp2

0x0d02,	// (0x00043cef) list_double_pane_cp2_ParamLimits

0x0d02,	// (0x00043cef) list_double_pane_cp2

0x6821,	// (0x0004980e) list_single_2graphic_pane_cp2_ParamLimits

0x6821,	// (0x0004980e) list_single_2graphic_pane_cp2

0x6821,	// (0x0004980e) list_single_graphic_heading_pane_cp2_ParamLimits

0x6821,	// (0x0004980e) list_single_graphic_heading_pane_cp2

0x6821,	// (0x0004980e) list_single_graphic_pane_cp2_ParamLimits

0x6821,	// (0x0004980e) list_single_graphic_pane_cp2

0x6821,	// (0x0004980e) list_single_heading_pane_cp2_ParamLimits

0x6821,	// (0x0004980e) list_single_heading_pane_cp2

0x0d12,	// (0x00043cff) list_single_large_graphic_pane_cp2_ParamLimits

0x0d12,	// (0x00043cff) list_single_large_graphic_pane_cp2

0x6821,	// (0x0004980e) list_single_number_heading_pane_cp2_ParamLimits

0x6821,	// (0x0004980e) list_single_number_heading_pane_cp2

0x6821,	// (0x0004980e) list_single_number_pane_cp2_ParamLimits

0x6821,	// (0x0004980e) list_single_number_pane_cp2

0x6821,	// (0x0004980e) list_single_pane_cp2_ParamLimits

0x6821,	// (0x0004980e) list_single_pane_cp2

0x0d2b,	// (0x00043d18) bg_popup_sub_pane_cp22

0x690a,	// (0x000498f7) popup_side_volume_key_window_g1

0x6934,	// (0x00049921) popup_side_volume_key_window_t1

0x6952,	// (0x0004993f) volume_small_pane_cp1

0xdb79,	// (0x00050b66) bg_popup_sub_pane_cp24_ParamLimits

0xdb79,	// (0x00050b66) bg_popup_sub_pane_cp24

0x0d41,	// (0x00043d2e) fep_china_uni_candidate_pane_ParamLimits

0x0d41,	// (0x00043d2e) fep_china_uni_candidate_pane

0x0d55,	// (0x00043d42) fep_china_uni_entry_pane

0x0d65,	// (0x00043d52) popup_fep_china_uni_window_g1

0x0d81,	// (0x00043d6e) fep_china_uni_entry_pane_g1

0x0d8b,	// (0x00043d78) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00052714) fep_china_uni_entry_pane_g

0x0d95,	// (0x00043d82) fep_entry_item_pane

0x0d9f,	// (0x00043d8c) fep_candidate_item_pane

0x0da7,	// (0x00043d94) fep_china_uni_candidate_pane_g1

0x0db1,	// (0x00043d9e) fep_china_uni_candidate_pane_g2

0x0db9,	// (0x00043da6) fep_china_uni_candidate_pane_g3

0x0dc1,	// (0x00043dae) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00052719) fep_china_uni_candidate_pane_g

0xd9e2,	// (0x000509cf) fep_entry_item_pane_g1

0x0dcb,	// (0x00043db8) fep_entry_item_pane_t1_ParamLimits

0x0dcb,	// (0x00043db8) fep_entry_item_pane_t1

0x0de1,	// (0x00043dce) fep_candidate_item_pane_t1_ParamLimits

0x0de1,	// (0x00043dce) fep_candidate_item_pane_t1

0x0df6,	// (0x00043de3) fep_candidate_item_pane_t2_ParamLimits

0x0df6,	// (0x00043de3) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00052722) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00052722) fep_candidate_item_pane_t

0xda46,	// (0x00050a33) list_highlight_pane_cp31_ParamLimits

0xda46,	// (0x00050a33) list_highlight_pane_cp31

0x0e08,	// (0x00043df5) level_1_signal_lsc

0x0e11,	// (0x00043dfe) level_2_signal_lsc

0x0e1a,	// (0x00043e07) level_3_signal_lsc

0x0e23,	// (0x00043e10) level_4_signal_lsc

0x0e2c,	// (0x00043e19) level_5_signal_lsc

0x0e35,	// (0x00043e22) level_6_signal_lsc

0x0e3e,	// (0x00043e2b) level_7_signal_lsc

0x0e3e,	// (0x00043e2b) level_1_battery_lsc

0x0e47,	// (0x00043e34) level_2_battery_lsc

0x0e50,	// (0x00043e3d) level_3_battery_lsc

0x0e59,	// (0x00043e46) level_4_battery_lsc

0x0e62,	// (0x00043e4f) level_5_battery_lsc

0x0e6b,	// (0x00043e58) level_6_battery_lsc

0x0e08,	// (0x00043df5) level_7_battery_lsc

0x0e74,	// (0x00043e61) scroll_handle_focus_pane_g1

0x0e7d,	// (0x00043e6a) scroll_handle_focus_pane_g2

0x0e86,	// (0x00043e73) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00052727) scroll_handle_focus_pane_g

0x54a0,	// (0x0004848d) list_single_2graphic_pane_g1_ParamLimits

0x54a0,	// (0x0004848d) list_single_2graphic_pane_g1

0x640c,	// (0x000493f9) list_single_2graphic_pane_g2_ParamLimits

0x640c,	// (0x000493f9) list_single_2graphic_pane_g2

0x63ee,	// (0x000493db) list_single_2graphic_pane_g3_ParamLimits

0x63ee,	// (0x000493db) list_single_2graphic_pane_g3

0x695a,	// (0x00049947) list_single_2graphic_pane_g4_ParamLimits

0x695a,	// (0x00049947) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005272e) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005272e) list_single_2graphic_pane_g

0x54ac,	// (0x00048499) list_single_2graphic_pane_t1_ParamLimits

0x54ac,	// (0x00048499) list_single_2graphic_pane_t1

0x6966,	// (0x00049953) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6966,	// (0x00049953) list_double2_graphic_large_graphic_pane_g1

0x502d,	// (0x0004801a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x502d,	// (0x0004801a) list_double2_graphic_large_graphic_pane_g2

0x646d,	// (0x0004945a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x646d,	// (0x0004945a) list_double2_graphic_large_graphic_pane_g3

0x54da,	// (0x000484c7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x54da,	// (0x000484c7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00052737) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00052737) list_double2_graphic_large_graphic_pane_g

0x54e6,	// (0x000484d3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x54e6,	// (0x000484d3) list_double2_graphic_large_graphic_pane_t1

0x54fc,	// (0x000484e9) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x54fc,	// (0x000484e9) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00052740) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00052740) list_double2_graphic_large_graphic_pane_t

0x0f18,	// (0x00043f05) popup_fast_swap_window_ParamLimits

0x0f18,	// (0x00043f05) popup_fast_swap_window

0x0f36,	// (0x00043f23) popup_side_volume_key_window

0x0f54,	// (0x00043f41) stacon_top_pane

0x0f5e,	// (0x00043f4b) status_pane_ParamLimits

0x0f5e,	// (0x00043f4b) status_pane

0x6b6c,	// (0x00049b59) status_small_pane

0xd9ec,	// (0x000509d9) control_pane

0xd9ec,	// (0x000509d9) stacon_bottom_pane

0x07cc,	// (0x000437b9) scroll_pane_cp121

0x07c3,	// (0x000437b0) set_content_pane

0x6978,	// (0x00049965) bg_active_tab_pane_g1_cp1

0x0e8f,	// (0x00043e7c) bg_active_tab_pane_g2_cp1

0x6981,	// (0x0004996e) bg_active_tab_pane_g3_cp1

0x6978,	// (0x00049965) bg_passive_tab_pane_g1_cp1

0x0e8f,	// (0x00043e7c) bg_passive_tab_pane_g2_cp1

0x6981,	// (0x0004996e) bg_passive_tab_pane_g3_cp1

0x698a,	// (0x00049977) bg_active_tab_pane_g1_cp2

0x0e8f,	// (0x00043e7c) bg_active_tab_pane_g2_cp2

0x6993,	// (0x00049980) bg_active_tab_pane_g3_cp2

0x698a,	// (0x00049977) bg_passive_tab_pane_g1_cp2

0x0e8f,	// (0x00043e7c) bg_passive_tab_pane_g2_cp2

0x6993,	// (0x00049980) bg_passive_tab_pane_g3_cp2

0x699c,	// (0x00049989) bg_active_tab_pane_g1_cp3

0x0e8f,	// (0x00043e7c) bg_active_tab_pane_g2_cp3

0x69a5,	// (0x00049992) bg_active_tab_pane_g3_cp3

0x699c,	// (0x00049989) bg_passive_tab_pane_g1_cp3

0x0e8f,	// (0x00043e7c) bg_passive_tab_pane_g2_cp3

0x69a5,	// (0x00049992) bg_passive_tab_pane_g3_cp3

0x69ae,	// (0x0004999b) bg_active_tab_pane_g1_cp4

0x0e8f,	// (0x00043e7c) bg_active_tab_pane_g2_cp4

0x69b9,	// (0x000499a6) bg_active_tab_pane_g3_cp4

0x69ae,	// (0x0004999b) bg_passive_tab_pane_g1_cp4

0x0e8f,	// (0x00043e7c) bg_passive_tab_pane_g2_cp4

0x69b9,	// (0x000499a6) bg_passive_tab_pane_g3_cp4

0x0edf,	// (0x00043ecc) bg_active_tab_pane_g1_cp5

0x0e8f,	// (0x00043e7c) bg_active_tab_pane_g2_cp5

0x0ed6,	// (0x00043ec3) bg_active_tab_pane_g3_cp5

0x0edf,	// (0x00043ecc) bg_passive_tab_pane_g1_cp5

0x0e8f,	// (0x00043e7c) bg_passive_tab_pane_g2_cp5

0x0ed6,	// (0x00043ec3) bg_passive_tab_pane_g3_cp5

0x6b08,	// (0x00049af5) list_set_graphic_pane_ParamLimits

0x6b08,	// (0x00049af5) list_set_graphic_pane

0xd9ec,	// (0x000509d9) bg_set_opt_pane_cp4

0x6b1d,	// (0x00049b0a) list_set_graphic_pane_g1_ParamLimits

0x6b1d,	// (0x00049b0a) list_set_graphic_pane_g1

0x6b29,	// (0x00049b16) list_set_graphic_pane_g2_ParamLimits

0x6b29,	// (0x00049b16) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00052745) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00052745) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x00052ac6) volume_small_pane_cp_g

0x6b4d,	// (0x00049b3a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6b4d,	// (0x00049b3a) list_double2_large_graphic_pane_g1_cp2

0x6b5b,	// (0x00049b48) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6b5b,	// (0x00049b48) list_double2_large_graphic_pane_g2_cp2

0x0ee8,	// (0x00043ed5) list_double2_large_graphic_pane_g3_cp2

0x0ef0,	// (0x00043edd) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0ef0,	// (0x00043edd) list_double2_large_graphic_pane_t1_cp2

0x0f06,	// (0x00043ef3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0f06,	// (0x00043ef3) list_double2_large_graphic_pane_t2_cp2

0xa169,	// (0x0004d156) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa169,	// (0x0004d156) list_double_large_graphic_pane_g1_cp2

0xa17c,	// (0x0004d169) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa17c,	// (0x0004d169) list_double_large_graphic_pane_g2_cp2

0x103f,	// (0x0004402c) list_double_large_graphic_pane_g3_cp2

0xa18d,	// (0x0004d17a) list_double_large_graphic_pane_g4_cp

0xa195,	// (0x0004d182) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa195,	// (0x0004d182) list_double_large_graphic_pane_t1_cp2

0xa1ac,	// (0x0004d199) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa1ac,	// (0x0004d199) list_double_large_graphic_pane_t2_cp2

0x6b77,	// (0x00049b64) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6b77,	// (0x00049b64) list_double2_graphic_pane_g1_cp2

0x6b85,	// (0x00049b72) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6b85,	// (0x00049b72) list_double2_graphic_pane_g2_cp2

0x6b96,	// (0x00049b83) list_double2_graphic_pane_g3_cp2

0x0f6c,	// (0x00043f59) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0f6c,	// (0x00043f59) list_double2_graphic_pane_t1_cp2

0x0f82,	// (0x00043f6f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0f82,	// (0x00043f6f) list_double2_graphic_pane_t2_cp2

0x0f94,	// (0x00043f81) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0f94,	// (0x00043f81) list_single_number_heading_pane_g1_cp2

0x0fa0,	// (0x00043f8d) list_single_number_heading_pane_g2_cp2

0x0fa8,	// (0x00043f95) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0fa8,	// (0x00043f95) list_single_number_heading_pane_t1_cp2

0x6ba0,	// (0x00049b8d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6ba0,	// (0x00049b8d) list_single_number_heading_pane_t2_cp2

0x0fbe,	// (0x00043fab) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0fbe,	// (0x00043fab) list_single_number_heading_pane_t3_cp2

0x0f94,	// (0x00043f81) list_single_heading_pane_g1_cp2_ParamLimits

0x0f94,	// (0x00043f81) list_single_heading_pane_g1_cp2

0x0fa0,	// (0x00043f8d) list_single_heading_pane_g2_cp2

0x0fa8,	// (0x00043f95) list_single_heading_pane_t1_cp2_ParamLimits

0x0fa8,	// (0x00043f95) list_single_heading_pane_t1_cp2

0x9f63,	// (0x0004cf50) list_single_heading_pane_t2_cp2_ParamLimits

0x9f63,	// (0x0004cf50) list_single_heading_pane_t2_cp2

0x9eab,	// (0x0004ce98) list_double_graphic_pane_g1_cp2_ParamLimits

0x9eab,	// (0x0004ce98) list_double_graphic_pane_g1_cp2

0x9eb7,	// (0x0004cea4) list_double_graphic_pane_g2_cp2_ParamLimits

0x9eb7,	// (0x0004cea4) list_double_graphic_pane_g2_cp2

0x9ec6,	// (0x0004ceb3) list_double_graphic_pane_g3_cp2

0x9ece,	// (0x0004cebb) list_double_graphic_pane_t1_cp2_ParamLimits

0x9ece,	// (0x0004cebb) list_double_graphic_pane_t1_cp2

0x9ee4,	// (0x0004ced1) list_double_graphic_pane_t2_cp2_ParamLimits

0x9ee4,	// (0x0004ced1) list_double_graphic_pane_t2_cp2

0x1033,	// (0x00044020) list_double_number_pane_g1_cp2_ParamLimits

0x1033,	// (0x00044020) list_double_number_pane_g1_cp2

0x103f,	// (0x0004402c) list_double_number_pane_g2_cp2

0x9e6f,	// (0x0004ce5c) list_double_number_pane_t1_cp2_ParamLimits

0x9e6f,	// (0x0004ce5c) list_double_number_pane_t1_cp2

0x9e83,	// (0x0004ce70) list_double_number_pane_t2_cp2_ParamLimits

0x9e83,	// (0x0004ce70) list_double_number_pane_t2_cp2

0x9e99,	// (0x0004ce86) list_double_number_pane_t3_cp2_ParamLimits

0x9e99,	// (0x0004ce86) list_double_number_pane_t3_cp2

0x9d58,	// (0x0004cd45) list_single_graphic_pane_g1_cp2_ParamLimits

0x9d58,	// (0x0004cd45) list_single_graphic_pane_g1_cp2

0x40ee,	// (0x000470db) list_single_graphic_pane_g2_cp2_ParamLimits

0x40ee,	// (0x000470db) list_single_graphic_pane_g2_cp2

0x40fa,	// (0x000470e7) list_single_graphic_pane_g3_cp2

0x9d2e,	// (0x0004cd1b) list_single_graphic_pane_t1_cp2_ParamLimits

0x9d2e,	// (0x0004cd1b) list_single_graphic_pane_t1_cp2

0x40ee,	// (0x000470db) list_single_number_pane_g1_cp2_ParamLimits

0x40ee,	// (0x000470db) list_single_number_pane_g1_cp2

0x40fa,	// (0x000470e7) list_single_number_pane_g2_cp2

0x9d2e,	// (0x0004cd1b) list_single_number_pane_t1_cp2_ParamLimits

0x9d2e,	// (0x0004cd1b) list_single_number_pane_t1_cp2

0x9d44,	// (0x0004cd31) list_single_number_pane_t2_cp2_ParamLimits

0x9d44,	// (0x0004cd31) list_single_number_pane_t2_cp2

0x6b5b,	// (0x00049b48) list_double2_pane_g1_cp2_ParamLimits

0x6b5b,	// (0x00049b48) list_double2_pane_g1_cp2

0x0ee8,	// (0x00043ed5) list_double2_pane_g2_cp2

0x100b,	// (0x00043ff8) list_double2_pane_t1_cp2_ParamLimits

0x100b,	// (0x00043ff8) list_double2_pane_t1_cp2

0x1021,	// (0x0004400e) list_double2_pane_t2_cp2_ParamLimits

0x1021,	// (0x0004400e) list_double2_pane_t2_cp2

0x1033,	// (0x00044020) list_double_pane_g1_cp2_ParamLimits

0x1033,	// (0x00044020) list_double_pane_g1_cp2

0x103f,	// (0x0004402c) list_double_pane_g2_cp2

0x1047,	// (0x00044034) list_double_pane_t1_cp2_ParamLimits

0x1047,	// (0x00044034) list_double_pane_t1_cp2

0x105d,	// (0x0004404a) list_double_pane_t2_cp2_ParamLimits

0x105d,	// (0x0004404a) list_double_pane_t2_cp2

0x40de,	// (0x000470cb) list_single_pane_cp2_g3

0x40ee,	// (0x000470db) list_single_pane_g1_cp2_ParamLimits

0x40ee,	// (0x000470db) list_single_pane_g1_cp2

0x40fa,	// (0x000470e7) list_single_pane_g2_cp2

0x4102,	// (0x000470ef) list_single_pane_t1_cp2_ParamLimits

0x4102,	// (0x000470ef) list_single_pane_t1_cp2

0x6bce,	// (0x00049bbb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6bce,	// (0x00049bbb) list_single_large_graphic_pane_g1_cp2

0x411a,	// (0x00047107) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x411a,	// (0x00047107) list_single_large_graphic_pane_g2_cp2

0x4126,	// (0x00047113) list_single_large_graphic_pane_g3_cp2

0x412e,	// (0x0004711b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x412e,	// (0x0004711b) list_single_large_graphic_pane_g4_cp1

0x4148,	// (0x00047135) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4148,	// (0x00047135) list_single_large_graphic_pane_t1_cp2

0x9cf8,	// (0x0004cce5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9cf8,	// (0x0004cce5) list_single_graphic_heading_pane_g1_cp2

0x9cc5,	// (0x0004ccb2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9cc5,	// (0x0004ccb2) list_single_graphic_heading_pane_g4_cp2

0x40fa,	// (0x000470e7) list_single_graphic_heading_pane_g5_cp2

0x9d04,	// (0x0004ccf1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9d04,	// (0x0004ccf1) list_single_graphic_heading_pane_t1_cp2

0x9d1a,	// (0x0004cd07) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9d1a,	// (0x0004cd07) list_single_graphic_heading_pane_t2_cp2

0x9cb9,	// (0x0004cca6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9cb9,	// (0x0004cca6) list_single_2graphic_pane_g1_cp2

0x9cc5,	// (0x0004ccb2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9cc5,	// (0x0004ccb2) list_single_2graphic_pane_g2_cp2

0x40fa,	// (0x000470e7) list_single_2graphic_pane_g3_cp2

0x9cd6,	// (0x0004ccc3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9cd6,	// (0x0004ccc3) list_single_2graphic_pane_g4_cp2

0x9ce2,	// (0x0004cccf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9ce2,	// (0x0004cccf) list_single_2graphic_pane_t1_cp2

0xd9e2,	// (0x000509cf) list_highlight_pane_g10_cp1

0x9891,	// (0x0004c87e) list_highlight_pane_g1_cp1

0x9899,	// (0x0004c886) list_highlight_pane_g2_cp1

0x98a1,	// (0x0004c88e) list_highlight_pane_g3_cp1

0x98a9,	// (0x0004c896) list_highlight_pane_g4_cp1

0x98b1,	// (0x0004c89e) list_highlight_pane_g5_cp1

0x98b9,	// (0x0004c8a6) list_highlight_pane_g6_cp1

0x98c1,	// (0x0004c8ae) list_highlight_pane_g7_cp1

0x98c9,	// (0x0004c8b6) list_highlight_pane_g8_cp1

0x98d1,	// (0x0004c8be) list_highlight_pane_g9_cp1

0x97b1,	// (0x0004c79e) form_field_slider_pane_t3

0x97bf,	// (0x0004c7ac) form_field_slider_pane_t4

0x97cd,	// (0x0004c7ba) slider_form_pane_ParamLimits

0x97cd,	// (0x0004c7ba) slider_form_pane

0xd9ec,	// (0x000509d9) control_abbreviations

0xd9ec,	// (0x000509d9) control_conventions

0xd9ec,	// (0x000509d9) control_definitions

0xd9ec,	// (0x000509d9) format_table_attribute

0x9fb9,	// (0x0004cfa6) bg_popup_preview_window_pane_g9

0xd9ec,	// (0x000509d9) format_table_data2

0xd9ec,	// (0x000509d9) format_table_data3

0xd9ec,	// (0x000509d9) format_table_data_example

0x0008,

0xd9ec,	// (0x000509d9) intro_purpose

0xf8f4,	// (0x000528e1) bg_popup_preview_window_pane_g

0xd9ec,	// (0x000509d9) texts_category

0xd9ec,	// (0x000509d9) texts_graphics

0x415e,	// (0x0004714b) text_digital

0x416d,	// (0x0004715a) text_primary

0x417c,	// (0x00047169) text_primary_small

0x418b,	// (0x00047178) text_secondary

0x419a,	// (0x00047187) text_title

0xa74d,	// (0x0004d73a) bg_passive_tab_pane_g1_cp3_srt

0x0e8f,	// (0x00043e7c) bg_passive_tab_pane_g2_cp3_srt

0xa756,	// (0x0004d743) bg_passive_tab_pane_g3_cp3_srt

0xda46,	// (0x00050a33) bg_active_tab_pane_cp3_srt_ParamLimits

0xda46,	// (0x00050a33) bg_active_tab_pane_cp3_srt

0xa75f,	// (0x0004d74c) tabs_4_active_pane_srt_g1

0xa767,	// (0x0004d754) tabs_4_active_pane_srt_t1_ParamLimits

0xa767,	// (0x0004d754) tabs_4_active_pane_srt_t1

0xa74d,	// (0x0004d73a) bg_active_tab_pane_g1_cp3_copy1

0x0e8f,	// (0x00043e7c) bg_active_tab_pane_g2_cp3_copy1

0xa756,	// (0x0004d743) bg_active_tab_pane_g3_cp3_copy1

0xda46,	// (0x00050a33) tabs_2_long_active_pane_srt_ParamLimits

0xda46,	// (0x00050a33) tabs_2_long_active_pane_srt

0xda46,	// (0x00050a33) tabs_2_long_passive_pane_srt_ParamLimits

0xda46,	// (0x00050a33) tabs_2_long_passive_pane_srt

0x6526,	// (0x00049513) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6526,	// (0x00049513) bg_passive_tab_pane_cp4_srt

0xa3f5,	// (0x0004d3e2) bg_passive_tab_pane_g1_cp4_srt

0x0e8f,	// (0x00043e7c) bg_passive_tab_pane_g2_cp4_srt

0xa3fe,	// (0x0004d3eb) bg_passive_tab_pane_g3_cp4_srt

0x17b9,	// (0x000447a6) bg_active_tab_pane_cp4_srt_ParamLimits

0x17b9,	// (0x000447a6) bg_active_tab_pane_cp4_srt

0xa407,	// (0x0004d3f4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa407,	// (0x0004d3f4) tabs_2_long_active_pane_srt_t1

0xa3f5,	// (0x0004d3e2) bg_active_tab_pane_g1_cp4_srt

0x0e8f,	// (0x00043e7c) bg_active_tab_pane_g2_cp4_srt

0xa3fe,	// (0x0004d3eb) bg_active_tab_pane_g3_cp4_srt

0xdb79,	// (0x00050b66) tabs_3_long_active_pane_srt_ParamLimits

0xdb79,	// (0x00050b66) tabs_3_long_active_pane_srt

0xdb79,	// (0x00050b66) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xdb79,	// (0x00050b66) tabs_3_long_passive_pane_cp_srt

0xdb79,	// (0x00050b66) tabs_3_long_passive_pane_srt_ParamLimits

0xdb79,	// (0x00050b66) tabs_3_long_passive_pane_srt

0x6526,	// (0x00049513) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6526,	// (0x00049513) bg_passive_tab_pane_cp5_srt

0x0edf,	// (0x00043ecc) bg_passive_tab_pane_g1_cp5_srt

0x0e8f,	// (0x00043e7c) bg_passive_tab_pane_g2_cp5_srt

0x0ed6,	// (0x00043ec3) bg_passive_tab_pane_g3_cp5_srt

0x17b9,	// (0x000447a6) bg_active_tab_pane_cp5_srt_ParamLimits

0x17b9,	// (0x000447a6) bg_active_tab_pane_cp5_srt

0xa3e3,	// (0x0004d3d0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa3e3,	// (0x0004d3d0) tabs_3_long_active_pane_srt_t1

0x0edf,	// (0x00043ecc) bg_active_tab_pane_g1_cp5_srt

0x0e8f,	// (0x00043e7c) bg_active_tab_pane_g2_cp5_srt

0x0ed6,	// (0x00043ec3) bg_active_tab_pane_g3_cp5_srt

0xa3d5,	// (0x0004d3c2) navi_text_pane_srt_t1

0xa3cd,	// (0x0004d3ba) navi_icon_pane_srt_g1

0x434d,	// (0x0004733a) midp_editing_number_pane_srt

0x41a9,	// (0x00047196) midp_ticker_pane_srt

0x4355,	// (0x00047342) midp_ticker_pane_srt_g1

0x435d,	// (0x0004734a) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00052764) midp_ticker_pane_srt_g

0x4365,	// (0x00047352) midp_ticker_pane_srt_t1

0xa3be,	// (0x0004d3ab) midp_editing_number_pane_t1_copy1

0x6526,	// (0x00049513) listscroll_midp_pane

0x6526,	// (0x00049513) midp_form_pane

0x41b1,	// (0x0004719e) midp_info_popup_window_ParamLimits

0x41b1,	// (0x0004719e) midp_info_popup_window

0x0895,	// (0x00043882) bg_popup_sub_pane_cp50_ParamLimits

0x0895,	// (0x00043882) bg_popup_sub_pane_cp50

0x94c7,	// (0x0004c4b4) listscroll_midp_info_pane_ParamLimits

0x94c7,	// (0x0004c4b4) listscroll_midp_info_pane

0x94af,	// (0x0004c49c) listscroll_form_midp_pane_ParamLimits

0x94af,	// (0x0004c49c) listscroll_form_midp_pane

0x94bb,	// (0x0004c4a8) scroll_bar_cp050

0x948f,	// (0x0004c47c) list_midp_pane

0xb1e2,	// (0x0004e1cf) signal_pane_g2_cp

0x93c9,	// (0x0004c3b6) listscroll_midp_info_pane_t1_ParamLimits

0x93c9,	// (0x0004c3b6) listscroll_midp_info_pane_t1

0x93e1,	// (0x0004c3ce) listscroll_midp_info_pane_t2_ParamLimits

0x93e1,	// (0x0004c3ce) listscroll_midp_info_pane_t2

0x941f,	// (0x0004c40c) listscroll_midp_info_pane_t3_ParamLimits

0x941f,	// (0x0004c40c) listscroll_midp_info_pane_t3

0x9459,	// (0x0004c446) listscroll_midp_info_pane_t4_ParamLimits

0x9459,	// (0x0004c446) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0005281c) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0005281c) listscroll_midp_info_pane_t

0x0915,	// (0x00043902) scroll_pane_cp21

0x9363,	// (0x0004c350) form_midp_field_choice_group_pane

0x936c,	// (0x0004c359) form_midp_field_text_pane

0x93af,	// (0x0004c39c) form_midp_field_time_pane

0x93b7,	// (0x0004c3a4) form_midp_gauge_slider_pane

0x93c0,	// (0x0004c3ad) form_midp_gauge_wait_pane

0xd9ec,	// (0x000509d9) form_midp_image_pane

0x565d,	// (0x0004864a) list_single_midp_pane_ParamLimits

0x565d,	// (0x0004864a) list_single_midp_pane

0x9327,	// (0x0004c314) form_midp_field_text_pane_t1

0x9113,	// (0x0004c100) input_focus_pane_cp050

0x9352,	// (0x0004c33f) list_midp_form_text_pane

0x92f6,	// (0x0004c2e3) form_midp_field_choice_group_pane_t1

0x9304,	// (0x0004c2f1) input_focus_pane_cp051

0x9318,	// (0x0004c305) list_midp_choice_pane

0xd9ec,	// (0x000509d9) status_idle_pane

0x92da,	// (0x0004c2c7) form_midp_field_time_pane_t1

0xd9e2,	// (0x000509cf) wait_anim_pane_g2_copy1

0x92e8,	// (0x0004c2d5) form_midp_field_time_pane_t2

0x0001,

0x420c,	// (0x000471f9) aid_navinavi_width_2_pane

0xf82a,	// (0x00052817) form_midp_field_time_pane_t

0xd9ec,	// (0x000509d9) input_focus_pane_cp052

0xd9ec,	// (0x000509d9) bg_input_focus_pane_cp040

0x929a,	// (0x0004c287) form_midp_gauge_slider_pane_t1

0x92a8,	// (0x0004c295) form_midp_gauge_slider_pane_t2

0x92b6,	// (0x0004c2a3) form_midp_gauge_slider_pane_t3

0x92c4,	// (0x0004c2b1) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0005280e) form_midp_gauge_slider_pane_t

0x92d2,	// (0x0004c2bf) form_midp_slider_pane

0xda46,	// (0x00050a33) bg_input_focus_pane_cp041_ParamLimits

0xda46,	// (0x00050a33) bg_input_focus_pane_cp041

0x9267,	// (0x0004c254) form_midp_gauge_wait_pane_t1_ParamLimits

0x9267,	// (0x0004c254) form_midp_gauge_wait_pane_t1

0x9279,	// (0x0004c266) form_midp_gauge_wait_pane_t2_ParamLimits

0x9279,	// (0x0004c266) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00052809) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00052809) form_midp_gauge_wait_pane_t

0x928b,	// (0x0004c278) form_midp_wait_pane_ParamLimits

0x928b,	// (0x0004c278) form_midp_wait_pane

0x922f,	// (0x0004c21c) form_midp_image_pane_g1

0x9238,	// (0x0004c225) form_midp_image_pane_t1

0x9247,	// (0x0004c234) form_midp_image_pane_t2

0x9256,	// (0x0004c243) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00052802) form_midp_image_pane_t

0x9226,	// (0x0004c213) list_single_midp_pane_g1

0x564e,	// (0x0004863b) list_single_midp_pane_t1

0x920c,	// (0x0004c1f9) list_midp_form_item_pane_ParamLimits

0x920c,	// (0x0004c1f9) list_midp_form_item_pane

0x41c6,	// (0x000471b3) list_midp_form_item_pane_t1

0x41d5,	// (0x000471c2) midp_ticker_pane_g1

0x41e1,	// (0x000471ce) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0005274a) midp_ticker_pane_g

0x6c81,	// (0x00049c6e) midp_ticker_pane_t1

0xa631,	// (0x0004d61e) midp_editing_number_pane_t1

0xa60f,	// (0x0004d5fc) midp_editing_number_pane

0xa61e,	// (0x0004d60b) midp_ticker_pane

0xa3ae,	// (0x0004d39b) ai_message_heading_pane

0xd9ec,	// (0x000509d9) bg_popup_window_pane_cp14

0xa3b6,	// (0x0004d3a3) listscroll_ai_message_pane

0xa334,	// (0x0004d321) ai_message_heading_pane_g1_ParamLimits

0xa334,	// (0x0004d321) ai_message_heading_pane_g1

0xa340,	// (0x0004d32d) ai_message_heading_pane_g2_ParamLimits

0xa340,	// (0x0004d32d) ai_message_heading_pane_g2

0xa34e,	// (0x0004d33b) ai_message_heading_pane_g3_ParamLimits

0xa34e,	// (0x0004d33b) ai_message_heading_pane_g3

0xa35a,	// (0x0004d347) ai_message_heading_pane_g4_ParamLimits

0xa35a,	// (0x0004d347) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00052943) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00052943) ai_message_heading_pane_g

0xa366,	// (0x0004d353) ai_message_heading_pane_t1_ParamLimits

0xa366,	// (0x0004d353) ai_message_heading_pane_t1

0xa380,	// (0x0004d36d) ai_message_heading_pane_t2_ParamLimits

0xa380,	// (0x0004d36d) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0005294c) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0005294c) ai_message_heading_pane_t

0xa394,	// (0x0004d381) bg_popup_heading_pane_cp1_ParamLimits

0xa394,	// (0x0004d381) bg_popup_heading_pane_cp1

0xa322,	// (0x0004d30f) list_ai_message_pane_ParamLimits

0xa322,	// (0x0004d30f) list_ai_message_pane

0x0915,	// (0x00043902) scroll_pane_cp10

0xa2be,	// (0x0004d2ab) list_ai_message_pane_g1

0xa2c6,	// (0x0004d2b3) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00052920) list_ai_message_pane_g

0xa2ce,	// (0x0004d2bb) list_ai_message_pane_t1_ParamLimits

0xa2ce,	// (0x0004d2bb) list_ai_message_pane_t1

0xa2e3,	// (0x0004d2d0) list_ai_message_pane_t2_ParamLimits

0xa2e3,	// (0x0004d2d0) list_ai_message_pane_t2

0xa2f8,	// (0x0004d2e5) list_ai_message_pane_t3_ParamLimits

0xa2f8,	// (0x0004d2e5) list_ai_message_pane_t3

0xa30d,	// (0x0004d2fa) list_ai_message_pane_t4_ParamLimits

0xa30d,	// (0x0004d2fa) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00052925) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00052925) list_ai_message_pane_t

0xa2a7,	// (0x0004d294) cell_ai_soft_ind_pane_ParamLimits

0xa2a7,	// (0x0004d294) cell_ai_soft_ind_pane

0x41ed,	// (0x000471da) cell_ai_soft_ind_pane_g1_ParamLimits

0x41ed,	// (0x000471da) cell_ai_soft_ind_pane_g1

0xd9ec,	// (0x000509d9) grid_highlight_cp1

0x41fa,	// (0x000471e7) text_secondary_cp56_ParamLimits

0x41fa,	// (0x000471e7) text_secondary_cp56

0xa27c,	// (0x0004d269) example_general_pane_ParamLimits

0xa27c,	// (0x0004d269) example_general_pane

0xa288,	// (0x0004d275) example_parent_pane_g1_ParamLimits

0xa288,	// (0x0004d275) example_parent_pane_g1

0xa294,	// (0x0004d281) example_parent_pane_t1_ParamLimits

0xa294,	// (0x0004d281) example_parent_pane_t1

0x8925,	// (0x0004b912) popup_preview_text_window_ParamLimits

0x8925,	// (0x0004b912) popup_preview_text_window

0x40e6,	// (0x000470d3) list_single_pane_cp2_g4

0xdc2f,	// (0x00050c1c) bg_popup_preview_window_pane_ParamLimits

0xdc2f,	// (0x00050c1c) bg_popup_preview_window_pane

0x9fc3,	// (0x0004cfb0) popup_preview_text_window_t1_ParamLimits

0x9fc3,	// (0x0004cfb0) popup_preview_text_window_t1

0x9fe1,	// (0x0004cfce) popup_preview_text_window_t2_ParamLimits

0x9fe1,	// (0x0004cfce) popup_preview_text_window_t2

0xa02a,	// (0x0004d017) popup_preview_text_window_t3_ParamLimits

0xa02a,	// (0x0004d017) popup_preview_text_window_t3

0xa06f,	// (0x0004d05c) popup_preview_text_window_t4_ParamLimits

0xa06f,	// (0x0004d05c) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x000528f4) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x000528f4) popup_preview_text_window_t

0xa0ed,	// (0x0004d0da) scroll_pane_cp11

0x909f,	// (0x0004c08c) bg_popup_preview_window_pane_g1

0x9f77,	// (0x0004cf64) bg_popup_preview_window_pane_g2

0x9f81,	// (0x0004cf6e) bg_popup_preview_window_pane_g3

0x9f8b,	// (0x0004cf78) bg_popup_preview_window_pane_g4

0x9f95,	// (0x0004cf82) bg_popup_preview_window_pane_g5

0x9f9f,	// (0x0004cf8c) bg_popup_preview_window_pane_g6

0x9fa7,	// (0x0004cf94) bg_popup_preview_window_pane_g7

0x9faf,	// (0x0004cf9c) bg_popup_preview_window_pane_g8

0x5c7e,	// (0x00048c6b) aid_popup_width_pane

0x8901,	// (0x0004b8ee) popup_midp_note_alarm_window_ParamLimits

0x8901,	// (0x0004b8ee) popup_midp_note_alarm_window

0x07dd,	// (0x000437ca) data_form_pane_ParamLimits

0x530b,	// (0x000482f8) form_field_data_pane_g1

0x5315,	// (0x00048302) form_field_data_pane_t1_ParamLimits

0x07e9,	// (0x000437d6) input_focus_pane_ParamLimits

0x532f,	// (0x0004831c) data_form_wide_pane_ParamLimits

0x5340,	// (0x0004832d) form_field_data_wide_pane_g1

0x534c,	// (0x00048339) form_field_data_wide_pane_t1_ParamLimits

0xdde4,	// (0x00050dd1) input_focus_pane_cp6_ParamLimits

0x64eb,	// (0x000494d8) input_popup_find_pane_g1_ParamLimits

0x64eb,	// (0x000494d8) input_popup_find_pane_g1

0x6644,	// (0x00049631) aid_navi_side_left_pane

0x6659,	// (0x00049646) aid_navi_side_right_pane

0x998c,	// (0x0004c979) bg_popup_window_pane_cp30_ParamLimits

0x998c,	// (0x0004c979) bg_popup_window_pane_cp30

0x9a06,	// (0x0004c9f3) popup_midp_note_alarm_window_g1_ParamLimits

0x9a06,	// (0x0004c9f3) popup_midp_note_alarm_window_g1

0x9a36,	// (0x0004ca23) popup_midp_note_alarm_window_t1_ParamLimits

0x9a36,	// (0x0004ca23) popup_midp_note_alarm_window_t1

0x9ad7,	// (0x0004cac4) popup_midp_note_alarm_window_t2_ParamLimits

0x9ad7,	// (0x0004cac4) popup_midp_note_alarm_window_t2

0x9b85,	// (0x0004cb72) popup_midp_note_alarm_window_t3_ParamLimits

0x9b85,	// (0x0004cb72) popup_midp_note_alarm_window_t3

0x9bb7,	// (0x0004cba4) popup_midp_note_alarm_window_t4_ParamLimits

0x9bb7,	// (0x0004cba4) popup_midp_note_alarm_window_t4

0x9bdd,	// (0x0004cbca) popup_midp_note_alarm_window_t5_ParamLimits

0x9bdd,	// (0x0004cbca) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00052891) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00052891) popup_midp_note_alarm_window_t

0x9c89,	// (0x0004cc76) wait_bar_pane_cp1_ParamLimits

0x9c89,	// (0x0004cc76) wait_bar_pane_cp1

0xd9ec,	// (0x000509d9) wait_anim_pane_copy1

0xd9ec,	// (0x000509d9) wait_border_pane_copy1

0x9671,	// (0x0004c65e) wait_border_pane_g1_copy1

0x5366,	// (0x00048353) form_field_popup_pane_g1

0x536e,	// (0x0004835b) form_field_popup_pane_t1_ParamLimits

0x07e9,	// (0x000437d6) input_focus_pane_cp7_ParamLimits

0x0817,	// (0x00043804) list_form_pane_ParamLimits

0x5388,	// (0x00048375) form_field_popup_wide_pane_g1

0x5390,	// (0x0004837d) form_field_popup_wide_pane_t1_ParamLimits

0x07e9,	// (0x000437d6) input_focus_pane_cp8_ParamLimits

0x0823,	// (0x00043810) list_form_wide_pane_ParamLimits

0xa7da,	// (0x0004d7c7) aid_size_cell_graphic_pane

0x541c,	// (0x00048409) data_form_pane_t1_ParamLimits

0x56a4,	// (0x00048691) data_form_wide_pane_t1_ParamLimits

0x8c4c,	// (0x0004bc39) bg_status_flat_pane

0x608f,	// (0x0004907c) title_pane_t1_ParamLimits

0xda0e,	// (0x000509fb) title_pane_t2_ParamLimits

0xda34,	// (0x00050a21) title_pane_t3_ParamLimits

0xf557,	// (0x00052544) title_pane_t_ParamLimits

0x6791,	// (0x0004977e) level_1_signal_ParamLimits

0x679e,	// (0x0004978b) level_2_signal_ParamLimits

0x67ab,	// (0x00049798) level_3_signal_ParamLimits

0x67b8,	// (0x000497a5) level_4_signal_ParamLimits

0x67c5,	// (0x000497b2) level_5_signal_ParamLimits

0x67d2,	// (0x000497bf) level_6_signal_ParamLimits

0x67df,	// (0x000497cc) level_7_signal_ParamLimits

0x6791,	// (0x0004977e) level_1_battery_ParamLimits

0x679e,	// (0x0004978b) level_2_battery_ParamLimits

0x67ab,	// (0x00049798) level_3_battery_ParamLimits

0x67b8,	// (0x000497a5) level_4_battery_ParamLimits

0x67c5,	// (0x000497b2) level_5_battery_ParamLimits

0x67d2,	// (0x000497bf) level_6_battery_ParamLimits

0x67df,	// (0x000497cc) level_7_battery_ParamLimits

0x9891,	// (0x0004c87e) bg_status_flat_pane_g1

0x9899,	// (0x0004c886) bg_status_flat_pane_g2

0x98a1,	// (0x0004c88e) bg_status_flat_pane_g3

0x98a9,	// (0x0004c896) bg_status_flat_pane_g4

0x98b1,	// (0x0004c89e) bg_status_flat_pane_g5

0x98b9,	// (0x0004c8a6) bg_status_flat_pane_g6

0x98c1,	// (0x0004c8ae) bg_status_flat_pane_g7

0x60ff,	// (0x000490ec) tabs_3_active_pane_t1_ParamLimits

0x60ff,	// (0x000490ec) tabs_3_passive_pane_t1_ParamLimits

0x6119,	// (0x00049106) tabs_4_active_pane_t1_ParamLimits

0x6119,	// (0x00049106) tabs_4_1_passive_pane_t1_ParamLimits

0x6501,	// (0x000494ee) tabs_2_active_pane_t1_ParamLimits

0x6501,	// (0x000494ee) tabs_2_passive_pane_t1_ParamLimits

0x17b9,	// (0x000447a6) bg_active_tab_pane_cp4_ParamLimits

0x6513,	// (0x00049500) tabs_2_long_active_pane_t1_ParamLimits

0x6526,	// (0x00049513) bg_passive_tab_pane_cp4_ParamLimits

0x7198,	// (0x0004a185) list_single_midp_graphic_pane_t1_ParamLimits

0x17b9,	// (0x000447a6) bg_active_tab_pane_cp5_ParamLimits

0x6532,	// (0x0004951f) tabs_3_long_active_pane_t1_ParamLimits

0x6526,	// (0x00049513) bg_passive_tab_pane_cp5_ParamLimits

0x7198,	// (0x0004a185) list_single_midp_graphic_pane_t1

0x8c4c,	// (0x0004bc39) bg_status_flat_pane_ParamLimits

0x8d17,	// (0x0004bd04) indicator_pane_cp2_ParamLimits

0x8d17,	// (0x0004bd04) indicator_pane_cp2

0x8e5a,	// (0x0004be47) navi_pane_srt_ParamLimits

0x8e5a,	// (0x0004be47) navi_pane_srt

0x8e7e,	// (0x0004be6b) popup_clock_digital_analogue_window_cp1

0xda8a,	// (0x00050a77) indicator_pane_t1

0x41a9,	// (0x00047196) copy_highlight_pane

0x41a9,	// (0x00047196) cursor_graphics_pane

0x41a9,	// (0x00047196) graphic_within_text_pane

0x41a9,	// (0x00047196) link_highlight_pane

0xa0b0,	// (0x0004d09d) popup_preview_text_window_t5_ParamLimits

0xa0b0,	// (0x0004d09d) popup_preview_text_window_t5

0x4216,	// (0x00047203) cursor_digital_pane

0x4216,	// (0x00047203) cursor_primary_pane

0x4227,	// (0x00047214) cursor_primary_small_pane

0x422f,	// (0x0004721c) cursor_secondary_pane

0x4237,	// (0x00047224) cursor_title_pane

0x4216,	// (0x00047203) link_highlight_digital_pane

0x421e,	// (0x0004720b) link_highlight_primary_pane

0x4227,	// (0x00047214) link_highlight_primary_small_pane

0x422f,	// (0x0004721c) link_highlight_secondary_pane

0x4237,	// (0x00047224) link_highlight_title_pane

0x4216,	// (0x00047203) copy_highlight_digital_pane

0x4216,	// (0x00047203) copy_highlight_primary_pane

0x4227,	// (0x00047214) copy_highlight_primary_small_pane

0x422f,	// (0x0004721c) copy_highlight_secondary_pane

0x4237,	// (0x00047224) copy_highlight_title_pane

0x422f,	// (0x0004721c) graphic_text_digital_pane

0x992f,	// (0x0004c91c) graphic_text_primary_pane

0x9938,	// (0x0004c925) graphic_text_primary_small_pane

0x4227,	// (0x00047214) graphic_text_secondary_pane

0x4216,	// (0x00047203) graphic_text_title_pane

0x6c93,	// (0x00049c80) cursor_primary_pane_g1

0x9921,	// (0x0004c90e) cursor_text_primary_t1

0x9909,	// (0x0004c8f6) cursor_primary_small_pane_g1

0x9913,	// (0x0004c900) cursor_text_primary_small_t1

0x98f1,	// (0x0004c8de) cursor_primary_small_pane_g1_copy1

0x98fb,	// (0x0004c8e8) cursor_text_primary_small_t1_copy1

0x98d9,	// (0x0004c8c6) cursor_text_title_t1

0x98e7,	// (0x0004c8d4) cursor_title_pane_g1

0x6c93,	// (0x00049c80) cursor_digital_pane_g1

0x423f,	// (0x0004722c) cursor_text_digital_t1

0x424d,	// (0x0004723a) link_highlight_primary_pane_g1

0x9882,	// (0x0004c86f) link_highlight_primary_pane_t1

0x424d,	// (0x0004723a) link_highlight_primary_small_pane_g1

0x4255,	// (0x00047242) link_highlight_primary_small_pane_t1

0x4264,	// (0x00047251) link_highlight_secondary_pane_g1

0x426c,	// (0x00047259) link_highlight_secondary_pane_t1

0x97f6,	// (0x0004c7e3) link_highlight_title_pane_g1

0x97fe,	// (0x0004c7eb) link_highlight_title_pane_t1

0x97df,	// (0x0004c7cc) link_highlight_digital_pane_g1

0x97e7,	// (0x0004c7d4) link_highlight_digital_pane_t1

0x96a7,	// (0x0004c694) copy_highlight_primary_pane_g1

0x96be,	// (0x0004c6ab) copy_highlight_primary_pane_t1

0x96a7,	// (0x0004c694) copy_highlight_primary_small_pane_g1

0x96af,	// (0x0004c69c) copy_highlight_primary_small_pane_t1

0x427b,	// (0x00047268) copy_highlight_secondary_pane_g1

0x4283,	// (0x00047270) copy_highlight_secondary_pane_t1

0x9690,	// (0x0004c67d) copy_highlight_title_pane_g1

0x9698,	// (0x0004c685) copy_highlight_title_pane_t1

0x96a7,	// (0x0004c694) copy_highlight_digital_pane_g1

0xa9aa,	// (0x0004d997) copy_highlight_digital_pane_t1

0xa8fe,	// (0x0004d8eb) graphic_text_primary_pane_g1

0xa98e,	// (0x0004d97b) graphic_text_primary_pane_t1

0xa99c,	// (0x0004d989) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x000529c0) graphic_text_primary_pane_t

0xa96a,	// (0x0004d957) graphic_text_primary_small_pane_g1

0xa972,	// (0x0004d95f) graphic_text_primary_small_pane_t1

0xa980,	// (0x0004d96d) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x000529bb) graphic_text_primary_small_pane_t

0xa946,	// (0x0004d933) graphic_text_secondary_pane_g1

0xa94e,	// (0x0004d93b) graphic_text_secondary_pane_t1

0xa95c,	// (0x0004d949) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x000529b6) graphic_text_secondary_pane_t

0xa922,	// (0x0004d90f) graphic_text_title_pane_g1

0xa92a,	// (0x0004d917) graphic_text_title_pane_t1

0xa938,	// (0x0004d925) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x000529b1) graphic_text_title_pane_t

0xa8fe,	// (0x0004d8eb) graphic_text_digital_pane_g1

0xa906,	// (0x0004d8f3) graphic_text_digital_pane_t1

0xa914,	// (0x0004d901) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x000529ac) graphic_text_digital_pane_t

0xda46,	// (0x00050a33) navi_icon_pane_srt_ParamLimits

0xda46,	// (0x00050a33) navi_icon_pane_srt

0xd9ec,	// (0x000509d9) navi_midp_pane_srt

0xd9ec,	// (0x000509d9) navi_navi_pane_srt

0xda46,	// (0x00050a33) navi_text_pane_srt_ParamLimits

0xda46,	// (0x00050a33) navi_text_pane_srt

0xa8c9,	// (0x0004d8b6) navi_navi_icon_text_pane_srt

0xa8d1,	// (0x0004d8be) navi_navi_pane_srt_g1_ParamLimits

0xa8d1,	// (0x0004d8be) navi_navi_pane_srt_g1

0xa8e3,	// (0x0004d8d0) navi_navi_pane_srt_g2_ParamLimits

0xa8e3,	// (0x0004d8d0) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x000529a7) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x000529a7) navi_navi_pane_srt_g

0xa8f5,	// (0x0004d8e2) navi_navi_tabs_pane_srt

0xa8c9,	// (0x0004d8b6) navi_navi_text_pane_srt

0xa8c9,	// (0x0004d8b6) navi_navi_volume_pane_srt

0xa8ba,	// (0x0004d8a7) navi_navi_text_pane_srt_t1

0x758c,	// (0x0004a579) navi_navi_volume_pane_srt_g1

0x7594,	// (0x0004a581) volume_small_pane_srt_ParamLimits

0x7594,	// (0x0004a581) volume_small_pane_srt

0x6c9d,	// (0x00049c8a) volume_small_pane_srt_g1_ParamLimits

0x6c9d,	// (0x00049c8a) volume_small_pane_srt_g1

0x6cad,	// (0x00049c9a) volume_small_pane_srt_g2_ParamLimits

0x6cad,	// (0x00049c9a) volume_small_pane_srt_g2

0x6cbe,	// (0x00049cab) volume_small_pane_srt_g3_ParamLimits

0x6cbe,	// (0x00049cab) volume_small_pane_srt_g3

0x6ccf,	// (0x00049cbc) volume_small_pane_srt_g4_ParamLimits

0x6ccf,	// (0x00049cbc) volume_small_pane_srt_g4

0x6ce0,	// (0x00049ccd) volume_small_pane_srt_g5_ParamLimits

0x6ce0,	// (0x00049ccd) volume_small_pane_srt_g5

0x6cf1,	// (0x00049cde) volume_small_pane_srt_g6_ParamLimits

0x6cf1,	// (0x00049cde) volume_small_pane_srt_g6

0x6d02,	// (0x00049cef) volume_small_pane_srt_g7_ParamLimits

0x6d02,	// (0x00049cef) volume_small_pane_srt_g7

0x6d13,	// (0x00049d00) volume_small_pane_srt_g8_ParamLimits

0x6d13,	// (0x00049d00) volume_small_pane_srt_g8

0x6d24,	// (0x00049d11) volume_small_pane_srt_g9_ParamLimits

0x6d24,	// (0x00049d11) volume_small_pane_srt_g9

0x6d35,	// (0x00049d22) volume_small_pane_srt_g10_ParamLimits

0x6d35,	// (0x00049d22) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005274f) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005274f) volume_small_pane_srt_g

0xdce4,	// (0x00050cd1) query_popup_data_pane_cp2

0xa8a0,	// (0x0004d88d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa8a0,	// (0x0004d88d) navi_navi_icon_text_pane_srt_t1

0x992f,	// (0x0004c91c) navi_tabs_2_long_pane_srt

0x992f,	// (0x0004c91c) navi_tabs_2_pane_srt

0x992f,	// (0x0004c91c) navi_tabs_3_long_pane_srt

0x992f,	// (0x0004c91c) navi_tabs_3_pane_srt

0x992f,	// (0x0004c91c) navi_tabs_4_pane_srt

0x756c,	// (0x0004a559) tabs_2_active_pane_srt_ParamLimits

0x756c,	// (0x0004a559) tabs_2_active_pane_srt

0x757c,	// (0x0004a569) tabs_2_passive_pane_srt_ParamLimits

0x757c,	// (0x0004a569) tabs_2_passive_pane_srt

0x6fe2,	// (0x00049fcf) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6fe2,	// (0x00049fcf) bg_passive_tab_pane_cp1_srt

0xa86c,	// (0x0004d859) bg_passive_tab_pane_g1_cp1_srt

0x0e8f,	// (0x00043e7c) bg_passive_tab_pane_g2_cp1_srt

0xa875,	// (0x0004d862) bg_passive_tab_pane_g3_cp1_srt

0xda46,	// (0x00050a33) bg_active_tab_pane_cp1_srt_ParamLimits

0xda46,	// (0x00050a33) bg_active_tab_pane_cp1_srt

0xa87e,	// (0x0004d86b) tabs_2_active_pane_srt_g1

0xa886,	// (0x0004d873) tabs_2_active_pane_srt_t1_ParamLimits

0xa886,	// (0x0004d873) tabs_2_active_pane_srt_t1

0xa86c,	// (0x0004d859) bg_active_tab_pane_g1_cp1_srt

0x0e8f,	// (0x00043e7c) bg_active_tab_pane_g2_cp1_srt

0xa875,	// (0x0004d862) bg_active_tab_pane_g3_cp1_srt

0x7539,	// (0x0004a526) tabs_3_active_pane_srt_ParamLimits

0x7539,	// (0x0004a526) tabs_3_active_pane_srt

0x754a,	// (0x0004a537) tabs_3_passive_pane_cp_srt_ParamLimits

0x754a,	// (0x0004a537) tabs_3_passive_pane_cp_srt

0x755b,	// (0x0004a548) tabs_3_passive_pane_srt_ParamLimits

0x755b,	// (0x0004a548) tabs_3_passive_pane_srt

0x6fe2,	// (0x00049fcf) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6fe2,	// (0x00049fcf) bg_passive_tab_pane_cp2_srt

0x4344,	// (0x00047331) bg_passive_tab_pane_g1_cp2_srt

0x0e8f,	// (0x00043e7c) bg_passive_tab_pane_g2_cp2_srt

0x433b,	// (0x00047328) bg_passive_tab_pane_g3_cp2_srt

0xda46,	// (0x00050a33) bg_active_tab_pane_cp2_srt_ParamLimits

0xda46,	// (0x00050a33) bg_active_tab_pane_cp2_srt

0xa852,	// (0x0004d83f) tabs_3_active_pane_srt_g1

0xa85a,	// (0x0004d847) tabs_3_active_pane_srt_t1_ParamLimits

0xa85a,	// (0x0004d847) tabs_3_active_pane_srt_t1

0x4344,	// (0x00047331) bg_active_tab_pane_g1_cp2_srt

0x0e8f,	// (0x00043e7c) bg_active_tab_pane_g2_cp2_srt

0x433b,	// (0x00047328) bg_active_tab_pane_g3_cp2_srt

0x74f1,	// (0x0004a4de) tabs_4_active_pane_srt_ParamLimits

0x74f1,	// (0x0004a4de) tabs_4_active_pane_srt

0x7503,	// (0x0004a4f0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7503,	// (0x0004a4f0) tabs_4_passive_pane_cp2_srt

0x6f70,	// (0x00049f5d) aid_size_cell_toolbar

0x6526,	// (0x00049513) main_idle_act_pane_ParamLimits

0x8727,	// (0x0004b714) popup_large_graphic_colour_window_ParamLimits

0x8ace,	// (0x0004babb) popup_toolbar_window_ParamLimits

0x8ace,	// (0x0004babb) popup_toolbar_window

0xa640,	// (0x0004d62d) list_single_graphic_2heading_pane_ParamLimits

0xa640,	// (0x0004d62d) list_single_graphic_2heading_pane

0x0aed,	// (0x00043ada) aid_size_cell_apps_grid_lsc_pane

0x0aff,	// (0x00043aec) aid_size_cell_apps_grid_prt_pane

0x6fe2,	// (0x00049fcf) bg_wml_button_pane_cp1_ParamLimits

0x6fe2,	// (0x00049fcf) bg_wml_button_pane_cp1

0x9327,	// (0x0004c314) form_midp_field_text_pane_t1_ParamLimits

0x9113,	// (0x0004c100) input_focus_pane_cp050_ParamLimits

0x9352,	// (0x0004c33f) list_midp_form_text_pane_ParamLimits

0x9304,	// (0x0004c2f1) input_focus_pane_cp051_ParamLimits

0x9318,	// (0x0004c305) list_midp_choice_pane_ParamLimits

0x91cc,	// (0x0004c1b9) list_single_2graphic_pane_cp3_ParamLimits

0x91cc,	// (0x0004c1b9) list_single_2graphic_pane_cp3

0x91e5,	// (0x0004c1d2) list_single_midp_graphic_pane_ParamLimits

0x91e5,	// (0x0004c1d2) list_single_midp_graphic_pane

0x5526,	// (0x00048513) list_single_graphic_2heading_pane_g1_ParamLimits

0x5526,	// (0x00048513) list_single_graphic_2heading_pane_g1

0x5532,	// (0x0004851f) list_single_graphic_2heading_pane_g4_ParamLimits

0x5532,	// (0x0004851f) list_single_graphic_2heading_pane_g4

0x553e,	// (0x0004852b) list_single_graphic_2heading_pane_g5_ParamLimits

0x553e,	// (0x0004852b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x000527a2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x000527a2) list_single_graphic_2heading_pane_g

0x554a,	// (0x00048537) list_single_graphic_2heading_pane_t1_ParamLimits

0x554a,	// (0x00048537) list_single_graphic_2heading_pane_t1

0x555e,	// (0x0004854b) list_single_graphic_2heading_pane_t2_ParamLimits

0x555e,	// (0x0004854b) list_single_graphic_2heading_pane_t2

0x557a,	// (0x00048567) list_single_graphic_2heading_pane_t3_ParamLimits

0x557a,	// (0x00048567) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x000527a9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x000527a9) list_single_graphic_2heading_pane_t

0x8fdd,	// (0x0004bfca) bg_popup_sub_pane_cp2

0x9007,	// (0x0004bff4) grid_toobar_pane

0x7110,	// (0x0004a0fd) cell_toolbar_pane_ParamLimits

0x7110,	// (0x0004a0fd) cell_toolbar_pane

0x9043,	// (0x0004c030) cell_toolbar_pane_g1_ParamLimits

0x9043,	// (0x0004c030) cell_toolbar_pane_g1

0x9057,	// (0x0004c044) cell_toolbar_pane_g2_ParamLimits

0x9057,	// (0x0004c044) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x000527b7) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x000527b7) cell_toolbar_pane_g

0x9079,	// (0x0004c066) grid_highlight_pane_cp2_ParamLimits

0x9079,	// (0x0004c066) grid_highlight_pane_cp2

0x9093,	// (0x0004c080) toolbar_button_pane

0x909f,	// (0x0004c08c) toolbar_button_pane_g1

0x90a7,	// (0x0004c094) toolbar_button_pane_g2

0x90af,	// (0x0004c09c) toolbar_button_pane_g3

0x90b7,	// (0x0004c0a4) toolbar_button_pane_g4

0x90bf,	// (0x0004c0ac) toolbar_button_pane_g5

0x90c7,	// (0x0004c0b4) toolbar_button_pane_g6

0x90cf,	// (0x0004c0bc) toolbar_button_pane_g7

0x90d7,	// (0x0004c0c4) toolbar_button_pane_g8

0x90df,	// (0x0004c0cc) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x000527bc) toolbar_button_pane_g

0x7154,	// (0x0004a141) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7154,	// (0x0004a141) list_single_2graphic_pane_g1_cp3

0x7160,	// (0x0004a14d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7160,	// (0x0004a14d) list_single_2graphic_pane_g2_cp3

0x0fa0,	// (0x00043f8d) list_single_2graphic_pane_g3_cp3

0x7171,	// (0x0004a15e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7171,	// (0x0004a15e) list_single_2graphic_pane_g4_cp3

0x717d,	// (0x0004a16a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x717d,	// (0x0004a16a) list_single_2graphic_pane_t1_cp3

0x0f94,	// (0x00043f81) list_single_midp_graphic_pane_g2_ParamLimits

0x0f94,	// (0x00043f81) list_single_midp_graphic_pane_g2

0x550e,	// (0x000484fb) aid_zoom_text_primary

0x5516,	// (0x00048503) aid_zoom_text_secondary

0x6d94,	// (0x00049d81) status_small_pane_g7_ParamLimits

0x6d94,	// (0x00049d81) status_small_pane_g7

0x6db7,	// (0x00049da4) status_small_pane_t1_ParamLimits

0x607e,	// (0x0004906b) title_pane_g2

0x0003,

0xf54e,	// (0x0005253b) title_pane_g

0x62d3,	// (0x000492c0) aid_size_cell_colour_1_pane_ParamLimits

0x62d3,	// (0x000492c0) aid_size_cell_colour_1_pane

0x62e7,	// (0x000492d4) aid_size_cell_colour_2_pane_ParamLimits

0x62e7,	// (0x000492d4) aid_size_cell_colour_2_pane

0x62fb,	// (0x000492e8) aid_size_cell_colour_3_pane_ParamLimits

0x62fb,	// (0x000492e8) aid_size_cell_colour_3_pane

0x630f,	// (0x000492fc) aid_size_cell_colour_4_pane_ParamLimits

0x630f,	// (0x000492fc) aid_size_cell_colour_4_pane

0x6580,	// (0x0004956d) title_pane_stacon_g1_ParamLimits

0x6580,	// (0x0004956d) title_pane_stacon_g1

0x9715,	// (0x0004c702) popup_note_wait_window_g3_ParamLimits

0x9715,	// (0x0004c702) popup_note_wait_window_g3

0x978c,	// (0x0004c779) popup_note_wait_window_t5_ParamLimits

0x978c,	// (0x0004c779) popup_note_wait_window_t5

0xd9ec,	// (0x000509d9) main_feb_china_hwr_fs_writing_pane

0x7072,	// (0x0004a05f) popup_feb_china_hwr_fs_window_ParamLimits

0x7072,	// (0x0004a05f) popup_feb_china_hwr_fs_window

0x71c6,	// (0x0004a1b3) aid_size_cell_hwr_fs_ParamLimits

0x71c6,	// (0x0004a1b3) aid_size_cell_hwr_fs

0x9113,	// (0x0004c100) bg_popup_sub_pane_cp3_ParamLimits

0x9113,	// (0x0004c100) bg_popup_sub_pane_cp3

0x71db,	// (0x0004a1c8) grid_hwr_fs_pane_ParamLimits

0x71db,	// (0x0004a1c8) grid_hwr_fs_pane

0x71f3,	// (0x0004a1e0) linegrid_hwr_fs_pane_ParamLimits

0x71f3,	// (0x0004a1e0) linegrid_hwr_fs_pane

0x7203,	// (0x0004a1f0) cell_hwr_fs_pane_ParamLimits

0x7203,	// (0x0004a1f0) cell_hwr_fs_pane

0x911f,	// (0x0004c10c) linegrid_hwr_fs_pane_g1_ParamLimits

0x911f,	// (0x0004c10c) linegrid_hwr_fs_pane_g1

0x912b,	// (0x0004c118) linegrid_hwr_fs_pane_g2_ParamLimits

0x912b,	// (0x0004c118) linegrid_hwr_fs_pane_g2

0x913d,	// (0x0004c12a) linegrid_hwr_fs_pane_g3_ParamLimits

0x913d,	// (0x0004c12a) linegrid_hwr_fs_pane_g3

0x7227,	// (0x0004a214) linegrid_hwr_fs_pane_g4_ParamLimits

0x7227,	// (0x0004a214) linegrid_hwr_fs_pane_g4

0x7245,	// (0x0004a232) linegrid_hwr_fs_pane_g5_ParamLimits

0x7245,	// (0x0004a232) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x000527e7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x000527e7) linegrid_hwr_fs_pane_g

0x9149,	// (0x0004c136) cell_hwr_fs_pane_g1_ParamLimits

0x9149,	// (0x0004c136) cell_hwr_fs_pane_g1

0x8f14,	// (0x0004bf01) cell_hwr_fs_pane_g2_ParamLimits

0x8f14,	// (0x0004bf01) cell_hwr_fs_pane_g2

0x915f,	// (0x0004c14c) cell_hwr_fs_pane_g3_ParamLimits

0x915f,	// (0x0004c14c) cell_hwr_fs_pane_g3

0x916c,	// (0x0004c159) cell_hwr_fs_pane_g4_ParamLimits

0x916c,	// (0x0004c159) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x000527f2) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x000527f2) cell_hwr_fs_pane_g

0x725b,	// (0x0004a248) cell_hwr_fs_pane_t1

0xd9ec,	// (0x000509d9) grid_highlight_pane_cp6

0xd9ec,	// (0x000509d9) main_idle_act2_pane

0x08fc,	// (0x000438e9) aid_inside_area_popup_secondary

0x9dc5,	// (0x0004cdb2) aid_inside_area_window_primary_ParamLimits

0x9dc5,	// (0x0004cdb2) aid_inside_area_window_primary

0xa9b9,	// (0x0004d9a6) ai2_news_ticker_pane

0xa9c1,	// (0x0004d9ae) aid_size_cell_ai1_link_ParamLimits

0xa9c1,	// (0x0004d9ae) aid_size_cell_ai1_link

0xa9db,	// (0x0004d9c8) popup_ai2_data_window_ParamLimits

0xa9db,	// (0x0004d9c8) popup_ai2_data_window

0xa9f9,	// (0x0004d9e6) popup_ai2_link_window_ParamLimits

0xa9f9,	// (0x0004d9e6) popup_ai2_link_window

0x9113,	// (0x0004c100) bg_popup_sub_pane_cp4_ParamLimits

0x9113,	// (0x0004c100) bg_popup_sub_pane_cp4

0xaa0f,	// (0x0004d9fc) grid_ai2_link_pane_ParamLimits

0xaa0f,	// (0x0004d9fc) grid_ai2_link_pane

0xaa26,	// (0x0004da13) popup_ai2_link_window_g1_ParamLimits

0xaa26,	// (0x0004da13) popup_ai2_link_window_g1

0xaa32,	// (0x0004da1f) popup_ai2_link_window_g2_ParamLimits

0xaa32,	// (0x0004da1f) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x000529c5) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x000529c5) popup_ai2_link_window_g

0xaa43,	// (0x0004da30) ai2_mp_button_pane

0xaa4b,	// (0x0004da38) ai2_mp_volume_pane

0x9304,	// (0x0004c2f1) bg_popup_sub_pane_cp5_ParamLimits

0x9304,	// (0x0004c2f1) bg_popup_sub_pane_cp5

0xaa53,	// (0x0004da40) heading_ai2_gene_pane_ParamLimits

0xaa53,	// (0x0004da40) heading_ai2_gene_pane

0xaa5f,	// (0x0004da4c) list_ai2_gene_pane_ParamLimits

0xaa5f,	// (0x0004da4c) list_ai2_gene_pane

0xaaa7,	// (0x0004da94) cell_ai2_link_pane_ParamLimits

0xaaa7,	// (0x0004da94) cell_ai2_link_pane

0xaabd,	// (0x0004daaa) cell_ai2_link_pane_g1

0xd9ec,	// (0x000509d9) grid_highlight_pane_cp7

0x75a9,	// (0x0004a596) ai2_mp_volume_pane_g1

0xab90,	// (0x0004db7d) ai2_mp_volume_pane_g2

0xab05,	// (0x0004daf2) list_ai2_gene_pane_t1

0xab98,	// (0x0004db85) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x000529de) ai2_mp_volume_pane_g

0x75b1,	// (0x0004a59e) volume_small_pane_cp3

0xaba0,	// (0x0004db8d) aid_size_cell_ai2_button

0xaba8,	// (0x0004db95) grid_ai2_button_pane

0xabb1,	// (0x0004db9e) cell_ai2_button_pane_ParamLimits

0xabb1,	// (0x0004db9e) cell_ai2_button_pane

0xd9e2,	// (0x000509cf) cell_ai2_button_pane_g1

0xd9ec,	// (0x000509d9) grid_highlight_pane_cp8

0xab50,	// (0x0004db3d) ai2_gene_pane_t1_ParamLimits

0xab50,	// (0x0004db3d) ai2_gene_pane_t1

0x6f66,	// (0x00049f53) aid_height_parent_landscape

0xa457,	// (0x0004d444) aid_height_set_list

0xa468,	// (0x0004d455) aid_size_parent

0xa7da,	// (0x0004d7c7) aid_size_cell_graphic_pane_ParamLimits

0xaa6f,	// (0x0004da5c) popup_ai2_data_window_g1_ParamLimits

0xaa6f,	// (0x0004da5c) popup_ai2_data_window_g1

0xaa7b,	// (0x0004da68) ai2_news_ticker_pane_g1

0xaa83,	// (0x0004da70) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x000529ca) ai2_news_ticker_pane_g

0xaa8b,	// (0x0004da78) ai2_news_ticker_pane_t1

0xaa99,	// (0x0004da86) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x000529cf) ai2_news_ticker_pane_t

0xaac6,	// (0x0004dab3) heading_ai2_gene_pane_g1

0xaace,	// (0x0004dabb) heading_ai2_gene_pane_t1_ParamLimits

0xaace,	// (0x0004dabb) heading_ai2_gene_pane_t1

0xaae3,	// (0x0004dad0) list_highlight_pane_cp6

0xaaeb,	// (0x0004dad8) ai2_gene_pane_ParamLimits

0xaaeb,	// (0x0004dad8) ai2_gene_pane

0xab13,	// (0x0004db00) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x000529d4) list_ai2_gene_pane_t

0xab21,	// (0x0004db0e) list_highlight_pane_cp8_ParamLimits

0xab21,	// (0x0004db0e) list_highlight_pane_cp8

0xab32,	// (0x0004db1f) ai2_gene_pane_g1_ParamLimits

0xab32,	// (0x0004db1f) ai2_gene_pane_g1

0xab44,	// (0x0004db31) ai2_gene_pane_g2_ParamLimits

0xab44,	// (0x0004db31) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x000529d9) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x000529d9) ai2_gene_pane_g

0xdfff,	// (0x00050fec) scroll_pane_cp12

0x6f1d,	// (0x00049f0a) control_pane_t3_ParamLimits

0x6f1d,	// (0x00049f0a) control_pane_t3

0x6da8,	// (0x00049d95) status_small_pane_g8_ParamLimits

0x6da8,	// (0x00049d95) status_small_pane_g8

0x86ec,	// (0x0004b6d9) popup_find_window_ParamLimits

0x8917,	// (0x0004b904) popup_note_image_window_ParamLimits

0x5592,	// (0x0004857f) list_double2_graphic_pane_vc_g1_ParamLimits

0x5592,	// (0x0004857f) list_double2_graphic_pane_vc_g1

0x411a,	// (0x00047107) list_double2_graphic_pane_vc_g2_ParamLimits

0x411a,	// (0x00047107) list_double2_graphic_pane_vc_g2

0x7140,	// (0x0004a12d) list_double2_graphic_pane_vc_g3_ParamLimits

0x7140,	// (0x0004a12d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x000527b0) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x000527b0) list_double2_graphic_pane_vc_g

0x559e,	// (0x0004858b) list_double2_graphic_pane_vc_t1_ParamLimits

0x559e,	// (0x0004858b) list_double2_graphic_pane_vc_t1

0x411a,	// (0x00047107) list_single_heading_pane_vc_g1_ParamLimits

0x411a,	// (0x00047107) list_single_heading_pane_vc_g1

0x7140,	// (0x0004a12d) list_single_heading_pane_vc_g2_ParamLimits

0x7140,	// (0x0004a12d) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x000527d1) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x000527d1) list_single_heading_pane_vc_g

0x55b4,	// (0x000485a1) list_single_heading_pane_vc_t1_ParamLimits

0x55b4,	// (0x000485a1) list_single_heading_pane_vc_t1

0x55cc,	// (0x000485b9) list_single_heading_pane_vc_t2_ParamLimits

0x55cc,	// (0x000485b9) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x000527d6) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x000527d6) list_single_heading_pane_vc_t

0x71ae,	// (0x0004a19b) list_setting_number_pane_vc_g1_ParamLimits

0x71ae,	// (0x0004a19b) list_setting_number_pane_vc_g1

0x71ba,	// (0x0004a1a7) list_setting_number_pane_vc_g2_ParamLimits

0x71ba,	// (0x0004a1a7) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x000527db) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x000527db) list_setting_number_pane_vc_g

0x55de,	// (0x000485cb) list_setting_number_pane_vc_t1_ParamLimits

0x55de,	// (0x000485cb) list_setting_number_pane_vc_t1

0x55f2,	// (0x000485df) list_setting_number_pane_vc_t2_ParamLimits

0x55f2,	// (0x000485df) list_setting_number_pane_vc_t2

0x560e,	// (0x000485fb) list_setting_number_pane_vc_t3_ParamLimits

0x560e,	// (0x000485fb) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x000527e0) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x000527e0) list_setting_number_pane_vc_t

0x563c,	// (0x00048629) set_value_pane_vc_ParamLimits

0x563c,	// (0x00048629) set_value_pane_vc

0xa640,	// (0x0004d62d) list_double2_graphic_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_double2_graphic_pane_vc

0xa640,	// (0x0004d62d) list_double2_large_graphic_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_double2_large_graphic_pane_vc

0xa640,	// (0x0004d62d) list_double2_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_double2_pane_vc

0xa640,	// (0x0004d62d) list_double_graphic_heading_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_double_graphic_heading_pane_vc

0xa640,	// (0x0004d62d) list_double_graphic_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_double_graphic_pane_vc

0xa640,	// (0x0004d62d) list_double_heading_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_double_heading_pane_vc

0xa654,	// (0x0004d641) list_double_large_graphic_pane_vc_ParamLimits

0xa654,	// (0x0004d641) list_double_large_graphic_pane_vc

0xa640,	// (0x0004d62d) list_double_number_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_double_number_pane_vc

0xa640,	// (0x0004d62d) list_double_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_double_pane_vc

0xa640,	// (0x0004d62d) list_double_time_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_double_time_pane_vc

0xa640,	// (0x0004d62d) list_setting_number_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_setting_number_pane_vc

0xa640,	// (0x0004d62d) list_setting_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_setting_pane_vc

0xa640,	// (0x0004d62d) list_single_graphic_heading_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_single_graphic_heading_pane_vc

0xa640,	// (0x0004d62d) list_single_heading_pane_vc_ParamLimits

0xa640,	// (0x0004d62d) list_single_heading_pane_vc

0xa676,	// (0x0004d663) list_single_number_heading_pane_vc_ParamLimits

0xa676,	// (0x0004d663) list_single_number_heading_pane_vc

0x5592,	// (0x0004857f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5592,	// (0x0004857f) list_double_graphic_heading_pane_vc_g1

0x75ba,	// (0x0004a5a7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x75ba,	// (0x0004a5a7) list_double_graphic_heading_pane_vc_g2

0x75c6,	// (0x0004a5b3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x75c6,	// (0x0004a5b3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f8,	// (0x000529e5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f8,	// (0x000529e5) list_double_graphic_heading_pane_vc_g

0x56f0,	// (0x000486dd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56f0,	// (0x000486dd) list_double_graphic_heading_pane_vc_t1

0x5706,	// (0x000486f3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5706,	// (0x000486f3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x000529ec) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x000529ec) list_double_graphic_heading_pane_vc_t

0x71ae,	// (0x0004a19b) list_setting_pane_vc_g1_ParamLimits

0x71ae,	// (0x0004a19b) list_setting_pane_vc_g1

0x71ba,	// (0x0004a1a7) list_setting_pane_vc_g2_ParamLimits

0x71ba,	// (0x0004a1a7) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x000527db) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x000527db) list_setting_pane_vc_g

0x5724,	// (0x00048711) list_setting_pane_vc_t1_ParamLimits

0x5724,	// (0x00048711) list_setting_pane_vc_t1

0x5740,	// (0x0004872d) list_setting_pane_vc_t2_ParamLimits

0x5740,	// (0x0004872d) list_setting_pane_vc_t2

0x0001,

0xfa2d,	// (0x00052a1a) list_setting_pane_vc_t_ParamLimits

0xfa2d,	// (0x00052a1a) list_setting_pane_vc_t

0x563c,	// (0x00048629) set_value_pane_cp_vc_ParamLimits

0x563c,	// (0x00048629) set_value_pane_cp_vc

0x411a,	// (0x00047107) list_single_number_heading_pane_vc_g1_ParamLimits

0x411a,	// (0x00047107) list_single_number_heading_pane_vc_g1

0x7140,	// (0x0004a12d) list_single_number_heading_pane_vc_g2_ParamLimits

0x7140,	// (0x0004a12d) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x000527d1) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x000527d1) list_single_number_heading_pane_vc_g

0x55b4,	// (0x000485a1) list_single_number_heading_pane_vc_t1_ParamLimits

0x55b4,	// (0x000485a1) list_single_number_heading_pane_vc_t1

0x575c,	// (0x00048749) list_single_number_heading_pane_vc_t2_ParamLimits

0x575c,	// (0x00048749) list_single_number_heading_pane_vc_t2

0x576e,	// (0x0004875b) list_single_number_heading_pane_vc_t3_ParamLimits

0x576e,	// (0x0004875b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa32,	// (0x00052a1f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00052a1f) list_single_number_heading_pane_vc_t

0x5592,	// (0x0004857f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5592,	// (0x0004857f) list_single_graphic_heading_pane_vc_g1

0x411a,	// (0x00047107) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x411a,	// (0x00047107) list_single_graphic_heading_pane_vc_g4

0x7140,	// (0x0004a12d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7140,	// (0x0004a12d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x000527b0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000527b0) list_single_graphic_heading_pane_vc_g

0x55b4,	// (0x000485a1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x55b4,	// (0x000485a1) list_single_graphic_heading_pane_vc_t1

0x5780,	// (0x0004876d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5780,	// (0x0004876d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa39,	// (0x00052a26) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x00052a26) list_single_graphic_heading_pane_vc_t

0x411a,	// (0x00047107) list_double2_pane_vc_g1_ParamLimits

0x411a,	// (0x00047107) list_double2_pane_vc_g1

0x7140,	// (0x0004a12d) list_double2_pane_vc_g2_ParamLimits

0x7140,	// (0x0004a12d) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x000527d1) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x000527d1) list_double2_pane_vc_g

0x5792,	// (0x0004877f) list_double2_pane_vc_t1_ParamLimits

0x5792,	// (0x0004877f) list_double2_pane_vc_t1

0x75d2,	// (0x0004a5bf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x75d2,	// (0x0004a5bf) list_double2_large_graphic_pane_vc_g1

0x411a,	// (0x00047107) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x411a,	// (0x00047107) list_double2_large_graphic_pane_vc_g2

0x7140,	// (0x0004a12d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7140,	// (0x0004a12d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3e,	// (0x00052a2b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00052a2b) list_double2_large_graphic_pane_vc_g

0x57a8,	// (0x00048795) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x57a8,	// (0x00048795) list_double2_large_graphic_pane_vc_t1

0x75de,	// (0x0004a5cb) list_double_time_pane_vc_g1_ParamLimits

0x75de,	// (0x0004a5cb) list_double_time_pane_vc_g1

0x75ea,	// (0x0004a5d7) list_double_time_pane_vc_g2_ParamLimits

0x75ea,	// (0x0004a5d7) list_double_time_pane_vc_g2

0x0001,

0xfa45,	// (0x00052a32) list_double_time_pane_vc_g_ParamLimits

0xfa45,	// (0x00052a32) list_double_time_pane_vc_g

0x57be,	// (0x000487ab) list_double_time_pane_vc_t1_ParamLimits

0x57be,	// (0x000487ab) list_double_time_pane_vc_t1

0x57e8,	// (0x000487d5) list_double_time_pane_vc_t2_ParamLimits

0x57e8,	// (0x000487d5) list_double_time_pane_vc_t2

0x5831,	// (0x0004881e) list_double_time_pane_vc_t3_ParamLimits

0x5831,	// (0x0004881e) list_double_time_pane_vc_t3

0x5843,	// (0x00048830) list_double_time_pane_vc_t4_ParamLimits

0x5843,	// (0x00048830) list_double_time_pane_vc_t4

0x0003,

0xfa4a,	// (0x00052a37) list_double_time_pane_vc_t_ParamLimits

0xfa4a,	// (0x00052a37) list_double_time_pane_vc_t

0x411a,	// (0x00047107) list_double_pane_vc_g1_ParamLimits

0x411a,	// (0x00047107) list_double_pane_vc_g1

0x7140,	// (0x0004a12d) list_double_pane_vc_g2_ParamLimits

0x7140,	// (0x0004a12d) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x000527d1) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x000527d1) list_double_pane_vc_g

0x5868,	// (0x00048855) list_double_pane_vc_t1_ParamLimits

0x5868,	// (0x00048855) list_double_pane_vc_t1

0x587c,	// (0x00048869) list_double_pane_vc_t2_ParamLimits

0x587c,	// (0x00048869) list_double_pane_vc_t2

0x0001,

0xfa53,	// (0x00052a40) list_double_pane_vc_t_ParamLimits

0xfa53,	// (0x00052a40) list_double_pane_vc_t

0x411a,	// (0x00047107) list_double_number_pane_vc_g1_ParamLimits

0x411a,	// (0x00047107) list_double_number_pane_vc_g1

0x7140,	// (0x0004a12d) list_double_number_pane_vc_g2_ParamLimits

0x7140,	// (0x0004a12d) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x000527d1) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x000527d1) list_double_number_pane_vc_g

0x5892,	// (0x0004887f) list_double_number_pane_vc_t1_ParamLimits

0x5892,	// (0x0004887f) list_double_number_pane_vc_t1

0x58a6,	// (0x00048893) list_double_number_pane_vc_t2_ParamLimits

0x58a6,	// (0x00048893) list_double_number_pane_vc_t2

0x58ba,	// (0x000488a7) list_double_number_pane_vc_t3_ParamLimits

0x58ba,	// (0x000488a7) list_double_number_pane_vc_t3

0x0002,

0xfa58,	// (0x00052a45) list_double_number_pane_vc_t_ParamLimits

0xfa58,	// (0x00052a45) list_double_number_pane_vc_t

0x75f6,	// (0x0004a5e3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x75f6,	// (0x0004a5e3) list_double_large_graphic_pane_vc_g1

0x761e,	// (0x0004a60b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x761e,	// (0x0004a60b) list_double_large_graphic_pane_vc_g2

0x7632,	// (0x0004a61f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7632,	// (0x0004a61f) list_double_large_graphic_pane_vc_g3

0x58d0,	// (0x000488bd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x58d0,	// (0x000488bd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5f,	// (0x00052a4c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00052a4c) list_double_large_graphic_pane_vc_g

0x58e0,	// (0x000488cd) list_double_large_graphic_pane_vc_t1_ParamLimits

0x58e0,	// (0x000488cd) list_double_large_graphic_pane_vc_t1

0x5902,	// (0x000488ef) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5902,	// (0x000488ef) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00052a55) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00052a55) list_double_large_graphic_pane_vc_t

0x75ba,	// (0x0004a5a7) list_double_heading_pane_vc_g1_ParamLimits

0x75ba,	// (0x0004a5a7) list_double_heading_pane_vc_g1

0x75c6,	// (0x0004a5b3) list_double_heading_pane_vc_g2_ParamLimits

0x75c6,	// (0x0004a5b3) list_double_heading_pane_vc_g2

0x0001,

0xfa6d,	// (0x00052a5a) list_double_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x00052a5a) list_double_heading_pane_vc_g

0x5922,	// (0x0004890f) list_double_heading_pane_vc_t1_ParamLimits

0x5922,	// (0x0004890f) list_double_heading_pane_vc_t1

0x55b4,	// (0x000485a1) list_double_heading_pane_vc_t2_ParamLimits

0x55b4,	// (0x000485a1) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x00052a5f) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x00052a5f) list_double_heading_pane_vc_t

0x5934,	// (0x00048921) list_double_graphic_pane_vc_g1_ParamLimits

0x5934,	// (0x00048921) list_double_graphic_pane_vc_g1

0x7641,	// (0x0004a62e) list_double_graphic_pane_vc_g2_ParamLimits

0x7641,	// (0x0004a62e) list_double_graphic_pane_vc_g2

0x411a,	// (0x00047107) list_double_graphic_pane_vc_g3_ParamLimits

0x411a,	// (0x00047107) list_double_graphic_pane_vc_g3

0x0003,

0xfa77,	// (0x00052a64) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x00052a64) list_double_graphic_pane_vc_g

0x5940,	// (0x0004892d) list_double_graphic_pane_vc_t1_ParamLimits

0x5940,	// (0x0004892d) list_double_graphic_pane_vc_t1

0x596a,	// (0x00048957) list_double_graphic_pane_vc_t2_ParamLimits

0x596a,	// (0x00048957) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x00052a6d) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x00052a6d) list_double_graphic_pane_vc_t

0x5c8a,	// (0x00048c77) aid_size_cell_fastswap

0x5c92,	// (0x00048c7f) aid_size_cell_touch_ParamLimits

0x5c92,	// (0x00048c7f) aid_size_cell_touch

0x5ef3,	// (0x00048ee0) popup_fast_swap_wide_window_ParamLimits

0x5ef3,	// (0x00048ee0) popup_fast_swap_wide_window

0x6011,	// (0x00048ffe) touch_pane_ParamLimits

0x6011,	// (0x00048ffe) touch_pane

0x07d5,	// (0x000437c2) button_value_adjust_pane_cp2

0x524b,	// (0x00048238) button_value_adjust_pane_cp4

0x5273,	// (0x00048260) form_field_data_pane_cp2

0x5298,	// (0x00048285) form_field_data_wide_pane_cp2

0x0b3b,	// (0x00043b28) bg_scroll_pane_ParamLimits

0x6768,	// (0x00049755) scroll_handle_pane_ParamLimits

0x677c,	// (0x00049769) scroll_sc2_down_pane_ParamLimits

0x677c,	// (0x00049769) scroll_sc2_down_pane

0x0b6c,	// (0x00043b59) scroll_sc2_up_pane_ParamLimits

0x0b6c,	// (0x00043b59) scroll_sc2_up_pane

0xb2ca,	// (0x0004e2b7) grid_wheel_folder_pane_g1_ParamLimits

0xb2ca,	// (0x0004e2b7) grid_wheel_folder_pane_g1

0x6aa0,	// (0x00049a8d) clock_nsta_pane_cp2_ParamLimits

0x6aa0,	// (0x00049a8d) clock_nsta_pane_cp2

0x6526,	// (0x00049513) listscroll_midp_pane_ParamLimits

0x6bdc,	// (0x00049bc9) midp_canvas_pane

0x6f5e,	// (0x00049f4b) nsta_clock_indic_pane

0x6fac,	// (0x00049f99) listscroll_form_pane_vc

0x6fd0,	// (0x00049fbd) listscroll_set_pane_vc_ParamLimits

0x6fd0,	// (0x00049fbd) listscroll_set_pane_vc

0x8c68,	// (0x0004bc55) clock_nsta_pane

0x8ce5,	// (0x0004bcd2) indicator_nsta_pane

0x8fdd,	// (0x0004bfca) bg_popup_sub_pane_cp2_ParamLimits

0x8ff1,	// (0x0004bfde) find_pane_cp2_ParamLimits

0x8ff1,	// (0x0004bfde) find_pane_cp2

0x9007,	// (0x0004bff4) grid_toobar_pane_ParamLimits

0x90e7,	// (0x0004c0d4) list_form_gen_pane_vc_ParamLimits

0x90e7,	// (0x0004c0d4) list_form_gen_pane_vc

0x90fd,	// (0x0004c0ea) scroll_pane_cp8_vc_ParamLimits

0x90fd,	// (0x0004c0ea) scroll_pane_cp8_vc

0x9179,	// (0x0004c166) data_form_wide_pane_vc_ParamLimits

0x9179,	// (0x0004c166) data_form_wide_pane_vc

0x9185,	// (0x0004c172) form_field_data_wide_pane_vc_g1

0x918d,	// (0x0004c17a) form_field_data_wide_pane_vc_t1_ParamLimits

0x918d,	// (0x0004c17a) form_field_data_wide_pane_vc_t1

0x07e9,	// (0x000437d6) input_focus_pane_cp6_vc_ParamLimits

0x07e9,	// (0x000437d6) input_focus_pane_cp6_vc

0x948f,	// (0x0004c47c) list_midp_pane_ParamLimits

0x949b,	// (0x0004c488) scroll_pane_cp16_ParamLimits

0x949b,	// (0x0004c488) scroll_pane_cp16

0x94e9,	// (0x0004c4d6) button_value_adjust_pane_ParamLimits

0x94e9,	// (0x0004c4d6) button_value_adjust_pane

0xa47a,	// (0x0004d467) button_value_adjust_pane_cp6_ParamLimits

0xa47a,	// (0x0004d467) button_value_adjust_pane_cp6

0xa5c8,	// (0x0004d5b5) settings_code_pane_cp_ParamLimits

0xa5c8,	// (0x0004d5b5) settings_code_pane_cp

0xd9e2,	// (0x000509cf) cell_touch_pane_g1

0xd9e2,	// (0x000509cf) cell_touch_pane_g2

0x0001,

0xf708,	// (0x000526f5) cell_touch_pane_g

0xabc3,	// (0x0004dbb0) cell_touch_pane_cp_ParamLimits

0xabc3,	// (0x0004dbb0) cell_touch_pane_cp

0xabd3,	// (0x0004dbc0) cell_touch_pane_ParamLimits

0xabd3,	// (0x0004dbc0) cell_touch_pane

0xd9e2,	// (0x000509cf) scroll_sc2_down_pane_g1

0xd9e2,	// (0x000509cf) scroll_sc2_up_pane_g1

0xd9ec,	// (0x000509d9) bg_set_opt_pane_cp4_vc

0xabe4,	// (0x0004dbd1) list_set_graphic_pane_vc_g1_ParamLimits

0xabe4,	// (0x0004dbd1) list_set_graphic_pane_vc_g1

0x176d,	// (0x0004475a) list_set_graphic_pane_vc_g2_ParamLimits

0x176d,	// (0x0004475a) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x000529f1) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x000529f1) list_set_graphic_pane_vc_g

0xabf0,	// (0x0004dbdd) text_primary_small_cp13_vc_ParamLimits

0xabf0,	// (0x0004dbdd) text_primary_small_cp13_vc

0xac08,	// (0x0004dbf5) list_set_graphic_pane_vc_ParamLimits

0xac08,	// (0x0004dbf5) list_set_graphic_pane_vc

0xd9ec,	// (0x000509d9) input_focus_pane_cp2_vc

0xd9e2,	// (0x000509cf) setting_code_pane_vc_g1

0xda5d,	// (0x00050a4a) setting_code_pane_vc_t1

0xac1d,	// (0x0004dc0a) set_text_pane_vc_t1_ParamLimits

0xac1d,	// (0x0004dc0a) set_text_pane_vc_t1

0xd9ec,	// (0x000509d9) input_focus_pane_cp1_vc

0xac3b,	// (0x0004dc28) list_set_text_pane_vc

0xd9e2,	// (0x000509cf) setting_text_pane_vc_g1

0xd9ec,	// (0x000509d9) bg_set_opt_pane_cp2_vc

0xda54,	// (0x00050a41) setting_slider_graphic_pane_vc_g1

0xac45,	// (0x0004dc32) setting_slider_graphic_pane_vc_t1

0xac57,	// (0x0004dc44) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x000529f6) setting_slider_graphic_pane_vc_t

0xac69,	// (0x0004dc56) slider_set_pane_cp_vc

0xac73,	// (0x0004dc60) slider_set_pane_vc_g1

0xac7c,	// (0x0004dc69) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x000529fb) slider_set_pane_vc_g

0x0844,	// (0x00043831) set_opt_bg_pane_g1_copy1

0x084c,	// (0x00043839) set_opt_bg_pane_g2_copy1

0xaca8,	// (0x0004dc95) set_opt_bg_pane_g3_copy1

0x085c,	// (0x00043849) set_opt_bg_pane_g4_copy1

0x0864,	// (0x00043851) set_opt_bg_pane_g5_copy1

0x086c,	// (0x00043859) set_opt_bg_pane_g6_copy1

0xacb2,	// (0x0004dc9f) set_opt_bg_pane_g7_copy1

0xacbc,	// (0x0004dca9) set_opt_bg_pane_g8_copy1

0xacc6,	// (0x0004dcb3) set_opt_bg_pane_g9_copy1

0xd9ec,	// (0x000509d9) bg_set_opt_pane_cp_vc

0xacd0,	// (0x0004dcbd) setting_slider_pane_vc_t1

0xacdf,	// (0x0004dccc) setting_slider_pane_vc_t2

0xacf1,	// (0x0004dcde) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x00052a0a) setting_slider_pane_vc_t

0xad03,	// (0x0004dcf0) slider_set_pane_vc

0x7269,	// (0x0004a256) volume_set_pane_vc_g1

0x7272,	// (0x0004a25f) volume_set_pane_vc_g2

0x727b,	// (0x0004a268) volume_set_pane_vc_g3

0x7284,	// (0x0004a271) volume_set_pane_vc_g4

0x728d,	// (0x0004a27a) volume_set_pane_vc_g5

0x7296,	// (0x0004a283) volume_set_pane_vc_g6

0x729f,	// (0x0004a28c) volume_set_pane_vc_g7

0x72a8,	// (0x0004a295) volume_set_pane_vc_g8

0x72b1,	// (0x0004a29e) volume_set_pane_vc_g9

0x72ba,	// (0x0004a2a7) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x000528a8) volume_set_pane_vc_g

0xad0d,	// (0x0004dcfa) volume_set_pane_vc

0xad17,	// (0x0004dd04) button_value_adjust_pane_cp1_vc

0xad21,	// (0x0004dd0e) list_highlight_pane_cp2_vc

0xad2a,	// (0x0004dd17) list_set_pane_vc_ParamLimits

0xad2a,	// (0x0004dd17) list_set_pane_vc

0xad9a,	// (0x0004dd87) main_pane_set_vc_t1_ParamLimits

0xad9a,	// (0x0004dd87) main_pane_set_vc_t1

0xadaf,	// (0x0004dd9c) main_pane_set_vc_t2_ParamLimits

0xadaf,	// (0x0004dd9c) main_pane_set_vc_t2

0xadc1,	// (0x0004ddae) main_pane_set_vc_t3_ParamLimits

0xadc1,	// (0x0004ddae) main_pane_set_vc_t3

0xadd5,	// (0x0004ddc2) main_pane_set_vc_t4_ParamLimits

0xadd5,	// (0x0004ddc2) main_pane_set_vc_t4

0x0003,

0xfa24,	// (0x00052a11) main_pane_set_vc_t_ParamLimits

0xfa24,	// (0x00052a11) main_pane_set_vc_t

0xade9,	// (0x0004ddd6) setting_code_pane_vc_ParamLimits

0xade9,	// (0x0004ddd6) setting_code_pane_vc

0xadfa,	// (0x0004dde7) setting_slider_graphic_pane_vc

0xadfa,	// (0x0004dde7) setting_slider_pane_vc

0xadfa,	// (0x0004dde7) setting_text_pane_vc

0xadfa,	// (0x0004dde7) setting_volume_pane_vc

0xae04,	// (0x0004ddf1) scroll_pane_cp121_vc

0x07c3,	// (0x000437b0) set_content_pane_vc

0xae0c,	// (0x0004ddf9) button_value_adjust_pane_g1

0xae15,	// (0x0004de02) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x00052a72) button_value_adjust_pane_g

0xae1e,	// (0x0004de0b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xae1e,	// (0x0004de0b) form_field_slider_wide_pane_vc_t1

0xae30,	// (0x0004de1d) form_field_slider_wide_pane_vc_t2_ParamLimits

0xae30,	// (0x0004de1d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8a,	// (0x00052a77) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x00052a77) form_field_slider_wide_pane_vc_t

0xdb79,	// (0x00050b66) input_focus_pane_cp10_vc_ParamLimits

0xdb79,	// (0x00050b66) input_focus_pane_cp10_vc

0xae5c,	// (0x0004de49) slider_cont_pane_cp1_vc_ParamLimits

0xae5c,	// (0x0004de49) slider_cont_pane_cp1_vc

0xae6e,	// (0x0004de5b) slider_form_pane_g1_cp2

0xac7c,	// (0x0004dc69) slider_form_pane_g2_cp2

0xae9b,	// (0x0004de88) form_field_slider_pane_vc_t3

0xaea9,	// (0x0004de96) form_field_slider_pane_vc_t4

0xaeb7,	// (0x0004dea4) slider_form_pane_vc_ParamLimits

0xaeb7,	// (0x0004dea4) slider_form_pane_vc

0xaec4,	// (0x0004deb1) form_field_slider_pane_vc_t1_ParamLimits

0xaec4,	// (0x0004deb1) form_field_slider_pane_vc_t1

0xae30,	// (0x0004de1d) form_field_slider_pane_vc_t2_ParamLimits

0xae30,	// (0x0004de1d) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x00052a89) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x00052a89) form_field_slider_pane_vc_t

0xdb79,	// (0x00050b66) input_focus_pane_cp9_vc_ParamLimits

0xdb79,	// (0x00050b66) input_focus_pane_cp9_vc

0xaeda,	// (0x0004dec7) slider_cont_pane_vc_ParamLimits

0xaeda,	// (0x0004dec7) slider_cont_pane_vc

0xaeee,	// (0x0004dedb) list_form_graphic_pane_cp_vc_ParamLimits

0xaeee,	// (0x0004dedb) list_form_graphic_pane_cp_vc

0x9185,	// (0x0004c172) form_field_popup_wide_pane_vc_g1

0xaf03,	// (0x0004def0) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaf03,	// (0x0004def0) form_field_popup_wide_pane_vc_t1

0x07e9,	// (0x000437d6) input_focus_pane_cp8_vc_ParamLimits

0x07e9,	// (0x000437d6) input_focus_pane_cp8_vc

0xaf48,	// (0x0004df35) list_form_wide_pane_vc_ParamLimits

0xaf48,	// (0x0004df35) list_form_wide_pane_vc

0xaf54,	// (0x0004df41) list_form_graphic_pane_vc_g1

0xaf5c,	// (0x0004df49) list_form_graphic_pane_vc_t1_ParamLimits

0xaf5c,	// (0x0004df49) list_form_graphic_pane_vc_t1

0xda46,	// (0x00050a33) list_highlight_pane_cp5_vc_ParamLimits

0xda46,	// (0x00050a33) list_highlight_pane_cp5_vc

0xaf78,	// (0x0004df65) list_form_graphic_pane_vc_ParamLimits

0xaf78,	// (0x0004df65) list_form_graphic_pane_vc

0x9185,	// (0x0004c172) form_field_popup_pane_vc_g1

0xaf8e,	// (0x0004df7b) form_field_popup_pane_vc_t1_ParamLimits

0xaf8e,	// (0x0004df7b) form_field_popup_pane_vc_t1

0x07e9,	// (0x000437d6) input_focus_pane_cp7_vc_ParamLimits

0x07e9,	// (0x000437d6) input_focus_pane_cp7_vc

0xafa5,	// (0x0004df92) list_form_pane_vc_ParamLimits

0xafa5,	// (0x0004df92) list_form_pane_vc

0xafb1,	// (0x0004df9e) data_form_pane_vc_t1_ParamLimits

0xafb1,	// (0x0004df9e) data_form_pane_vc_t1

0x0844,	// (0x00043831) input_focus_pane_vc_g1

0x084c,	// (0x00043839) input_focus_pane_vc_g2

0x0854,	// (0x00043841) input_focus_pane_vc_g3

0x085c,	// (0x00043849) input_focus_pane_vc_g4

0x0864,	// (0x00043851) input_focus_pane_vc_g5

0x086c,	// (0x00043859) input_focus_pane_vc_g6

0x0874,	// (0x00043861) input_focus_pane_vc_g7

0x087c,	// (0x00043869) input_focus_pane_vc_g8

0x0884,	// (0x00043871) input_focus_pane_vc_g9

0xd9e2,	// (0x000509cf) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005267e) input_focus_pane_vc_g

0x9179,	// (0x0004c166) data_form_pane_vc_ParamLimits

0x9179,	// (0x0004c166) data_form_pane_vc

0x9185,	// (0x0004c172) form_field_data_pane_vc_g1

0xafce,	// (0x0004dfbb) form_field_data_pane_vc_t1_ParamLimits

0xafce,	// (0x0004dfbb) form_field_data_pane_vc_t1

0x07e9,	// (0x000437d6) input_focus_pane_vc_ParamLimits

0x07e9,	// (0x000437d6) input_focus_pane_vc

0xafe8,	// (0x0004dfd5) button_value_adjust_pane_cp3_vc

0xaff0,	// (0x0004dfdd) button_value_adjust_pane_cp5_vc

0xaff8,	// (0x0004dfe5) form_field_data_pane_vc_ParamLimits

0xaff8,	// (0x0004dfe5) form_field_data_pane_vc

0xb013,	// (0x0004e000) form_field_data_pane_vc_cp2

0xb01b,	// (0x0004e008) form_field_data_wide_pane_vc_ParamLimits

0xb01b,	// (0x0004e008) form_field_data_wide_pane_vc

0xb035,	// (0x0004e022) form_field_data_wide_pane_vc_cp2

0xb03d,	// (0x0004e02a) form_field_popup_pane_vc_ParamLimits

0xb03d,	// (0x0004e02a) form_field_popup_pane_vc

0xb058,	// (0x0004e045) form_field_popup_wide_pane_vc_ParamLimits

0xb058,	// (0x0004e045) form_field_popup_wide_pane_vc

0xb072,	// (0x0004e05f) form_field_slider_pane_vc_ParamLimits

0xb072,	// (0x0004e05f) form_field_slider_pane_vc

0xb085,	// (0x0004e072) form_field_slider_wide_pane_vc_ParamLimits

0xb085,	// (0x0004e072) form_field_slider_wide_pane_vc

0xb098,	// (0x0004e085) grid_touch_1_pane_ParamLimits

0xb098,	// (0x0004e085) grid_touch_1_pane

0xb0a4,	// (0x0004e091) grid_touch_2_pane_ParamLimits

0xb0a4,	// (0x0004e091) grid_touch_2_pane

0x43a7,	// (0x00047394) touch_pane_g1_ParamLimits

0x43a7,	// (0x00047394) touch_pane_g1

0xb0be,	// (0x0004e0ab) cell_app_pane_cp_wide_ParamLimits

0xb0be,	// (0x0004e0ab) cell_app_pane_cp_wide

0xb0cf,	// (0x0004e0bc) grid_popup_fast_wide_pane_ParamLimits

0xb0cf,	// (0x0004e0bc) grid_popup_fast_wide_pane

0xb0e3,	// (0x0004e0d0) scroll_pane_cp19_ParamLimits

0xb0e3,	// (0x0004e0d0) scroll_pane_cp19

0xd9ec,	// (0x000509d9) bg_popup_window_pane_cp20

0xb0f7,	// (0x0004e0e4) listscroll_popup_fast_wide_pane

0xda46,	// (0x00050a33) grid_indicator_nsta_pane

0xb0ff,	// (0x0004e0ec) clock_nsta_pane_g1

0xb108,	// (0x0004e0f5) clock_nsta_pane_t1

0xb124,	// (0x0004e111) cell_indicator_nsta_pane_ParamLimits

0xb124,	// (0x0004e111) cell_indicator_nsta_pane

0xb156,	// (0x0004e143) cell_indicator_nsta_pane_g1

0xb164,	// (0x0004e151) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00052a9a) cell_indicator_nsta_pane_g

0xb17a,	// (0x0004e167) clock_nsta_pane_cp

0xb182,	// (0x0004e16f) indicator_nsta_pane_cp

0xb18b,	// (0x0004e178) nsta_clock_indic_pane_g1

0xda82,	// (0x00050a6f) grid_indicator_pane

0x0c5e,	// (0x00043c4b) scroll_pane_cp29

0x69ec,	// (0x000499d9) indicator_nsta_pane_cp2_ParamLimits

0x69ec,	// (0x000499d9) indicator_nsta_pane_cp2

0xda46,	// (0x00050a33) main_apps_wheel_pane

0x936c,	// (0x0004c359) form_midp_field_text_pane_ParamLimits

0x94bb,	// (0x0004c4a8) scroll_bar_cp050_ParamLimits

0xb1f4,	// (0x0004e1e1) cell_indicator_pane_ParamLimits

0xb1f4,	// (0x0004e1e1) cell_indicator_pane

0xb20c,	// (0x0004e1f9) cell_indicator_pane_g1

0xb216,	// (0x0004e203) grid_wheel_folder_pane_ParamLimits

0xb216,	// (0x0004e203) grid_wheel_folder_pane

0xb22a,	// (0x0004e217) list_wheel_apps_pane_ParamLimits

0xb22a,	// (0x0004e217) list_wheel_apps_pane

0xb23d,	// (0x0004e22a) main_apps_wheel_pane_g1_ParamLimits

0xb23d,	// (0x0004e22a) main_apps_wheel_pane_g1

0xb259,	// (0x0004e246) main_apps_wheel_pane_g2_ParamLimits

0xb259,	// (0x0004e246) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x00052ab6) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x00052ab6) main_apps_wheel_pane_g

0xb275,	// (0x0004e262) main_apps_wheel_pane_t1_ParamLimits

0xb275,	// (0x0004e262) main_apps_wheel_pane_t1

0xb29e,	// (0x0004e28b) list_wheel_apps_pane_g1

0xb2a6,	// (0x0004e293) list_wheel_apps_pane_g2

0xb2ae,	// (0x0004e29b) list_wheel_apps_pane_g3

0xb2b6,	// (0x0004e2a3) list_wheel_apps_pane_g4

0xb2c0,	// (0x0004e2ad) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x00052abb) list_wheel_apps_pane_g

0x0fde,	// (0x00043fcb) navi_icon_text_pane

0x8b95,	// (0x0004bb82) aid_fill_nsta

0xb2e1,	// (0x0004e2ce) navi_icon_text_pane_g1

0xb2ed,	// (0x0004e2da) navi_icon_text_pane_t1

0x6b35,	// (0x00049b22) list_set_graphic_pane_t1_ParamLimits

0x6b35,	// (0x00049b22) list_set_graphic_pane_t1

0x9c0c,	// (0x0004cbf9) popup_midp_note_alarm_window_t6_ParamLimits

0x9c0c,	// (0x0004cbf9) popup_midp_note_alarm_window_t6

0x9c1e,	// (0x0004cc0b) popup_midp_note_alarm_window_t7_ParamLimits

0x9c1e,	// (0x0004cc0b) popup_midp_note_alarm_window_t7

0x9c30,	// (0x0004cc1d) popup_midp_note_alarm_window_t8_ParamLimits

0x9c30,	// (0x0004cc1d) popup_midp_note_alarm_window_t8

0x9c42,	// (0x0004cc2f) popup_midp_note_alarm_window_t9_ParamLimits

0x9c42,	// (0x0004cc2f) popup_midp_note_alarm_window_t9

0x9c54,	// (0x0004cc41) popup_midp_note_alarm_window_t10_ParamLimits

0x9c54,	// (0x0004cc41) popup_midp_note_alarm_window_t10

0x9c66,	// (0x0004cc53) popup_midp_note_alarm_window_t11_ParamLimits

0x9c66,	// (0x0004cc53) popup_midp_note_alarm_window_t11

0x9c78,	// (0x0004cc65) scroll_pane_cp17_ParamLimits

0x9c78,	// (0x0004cc65) scroll_pane_cp17

0x7269,	// (0x0004a256) volume_small_pane_cp_g1

0x765e,	// (0x0004a64b) volume_small_pane_cp_g2

0x7667,	// (0x0004a654) volume_small_pane_cp_g3

0x7670,	// (0x0004a65d) volume_small_pane_cp_g4

0x7679,	// (0x0004a666) volume_small_pane_cp_g5

0x7682,	// (0x0004a66f) volume_small_pane_cp_g6

0x768b,	// (0x0004a678) volume_small_pane_cp_g7

0x7694,	// (0x0004a681) volume_small_pane_cp_g8

0x769d,	// (0x0004a68a) volume_small_pane_cp_g9

0x76a6,	// (0x0004a693) volume_small_pane_cp_g10

0x41d5,	// (0x000471c2) midp_ticker_pane_g1_ParamLimits

0x41e1,	// (0x000471ce) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0005274a) midp_ticker_pane_g_ParamLimits

0x6c81,	// (0x00049c6e) midp_ticker_pane_t1_ParamLimits

0x8bab,	// (0x0004bb98) aid_fill_nsta_2

0x94a7,	// (0x0004c494) list_form2_midp_pane

0xa60f,	// (0x0004d5fc) midp_editing_number_pane_ParamLimits

0xa61e,	// (0x0004d60b) midp_ticker_pane_ParamLimits

0xb2ff,	// (0x0004e2ec) form2_midp_field_pane

0xb323,	// (0x0004e310) scroll_pane_cp51

0xb343,	// (0x0004e330) form2_midp_button_pane_ParamLimits

0xb343,	// (0x0004e330) form2_midp_button_pane

0xb355,	// (0x0004e342) form2_midp_content_pane_ParamLimits

0xb355,	// (0x0004e342) form2_midp_content_pane

0xb36f,	// (0x0004e35c) form2_midp_field_choice_group_pane

0xb377,	// (0x0004e364) form2_midp_field_pane_g1

0xb37f,	// (0x0004e36c) form2_midp_field_pane_g2

0xb387,	// (0x0004e374) form2_midp_field_pane_g3

0xb38f,	// (0x0004e37c) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00052ae0) form2_midp_field_pane_g

0xb397,	// (0x0004e384) form2_midp_gauge_slider_pane

0xb39f,	// (0x0004e38c) form2_midp_gauge_wait_pane

0xb3a7,	// (0x0004e394) form2_midp_image_pane_ParamLimits

0xb3a7,	// (0x0004e394) form2_midp_image_pane

0xb3c2,	// (0x0004e3af) form2_midp_label_pane_ParamLimits

0xb3c2,	// (0x0004e3af) form2_midp_label_pane

0xb3e1,	// (0x0004e3ce) form2_midp_label_pane_cp_ParamLimits

0xb3e1,	// (0x0004e3ce) form2_midp_label_pane_cp

0xb402,	// (0x0004e3ef) form2_midp_string_pane_ParamLimits

0xb402,	// (0x0004e3ef) form2_midp_string_pane

0x5988,	// (0x00048975) form2_midp_text_pane_ParamLimits

0x5988,	// (0x00048975) form2_midp_text_pane

0xb414,	// (0x0004e401) form2_midp_time_pane

0xb424,	// (0x0004e411) input_focus_pane_cp51_ParamLimits

0xb424,	// (0x0004e411) input_focus_pane_cp51

0xb43c,	// (0x0004e429) form2_midp_label_pane_t1_ParamLimits

0xb43c,	// (0x0004e429) form2_midp_label_pane_t1

0x59ab,	// (0x00048998) form2_mdip_text_pane_t1_ParamLimits

0x59ab,	// (0x00048998) form2_mdip_text_pane_t1

0x59ca,	// (0x000489b7) form2_midp_time_pane_t1

0xb48a,	// (0x0004e477) form2_midp_gauge_slider_pane_t1

0xb49c,	// (0x0004e489) form2_midp_gauge_slider_pane_t2

0xb4ae,	// (0x0004e49b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x00052ae9) form2_midp_gauge_slider_pane_t

0xb4c0,	// (0x0004e4ad) form2_midp_slider_pane

0xb4cc,	// (0x0004e4b9) form2_midp_gauge_wait_pane_t1

0xb4da,	// (0x0004e4c7) form2_midp_wait_pane_ParamLimits

0xb4da,	// (0x0004e4c7) form2_midp_wait_pane

0x91cc,	// (0x0004c1b9) list_single_2graphic_pane_cp4_ParamLimits

0x91cc,	// (0x0004c1b9) list_single_2graphic_pane_cp4

0xb505,	// (0x0004e4f2) list_single_midp_graphic_pane_cp_ParamLimits

0xb505,	// (0x0004e4f2) list_single_midp_graphic_pane_cp

0xd9ec,	// (0x000509d9) list_highlight_pane_cp20

0xb529,	// (0x0004e516) list_single_2graphic_pane_g1_cp4

0xaac6,	// (0x0004dab3) list_single_2graphic_pane_g2_cp4

0xb531,	// (0x0004e51e) list_single_2graphic_pane_t1_cp4

0xda46,	// (0x00050a33) list_highlight_pane_cp21

0xb540,	// (0x0004e52d) list_single_midp_graphic_pane_g4_cp

0xb54f,	// (0x0004e53c) list_single_midp_graphic_pane_t1_cp

0xb564,	// (0x0004e551) form2_mdip_string_pane_t1_ParamLimits

0xb564,	// (0x0004e551) form2_mdip_string_pane_t1

0xd9ec,	// (0x000509d9) bg_wml_button_pane_cp2

0xd9e2,	// (0x000509cf) form2_midp_image_pane_g1

0x6479,	// (0x00049466) list_double_large_graphic_pane_g5_ParamLimits

0x6479,	// (0x00049466) list_double_large_graphic_pane_g5

0x6526,	// (0x00049513) midp_form_pane_ParamLimits

0xda46,	// (0x00050a33) main_apps_wheel_pane_ParamLimits

0x893f,	// (0x0004b92c) popup_preview_window_ParamLimits

0x893f,	// (0x0004b92c) popup_preview_window

0x8b26,	// (0x0004bb13) popup_touch_info_window_ParamLimits

0x8b26,	// (0x0004bb13) popup_touch_info_window

0x8b48,	// (0x0004bb35) popup_touch_menu_window_ParamLimits

0x8b48,	// (0x0004bb35) popup_touch_menu_window

0xd9d8,	// (0x000509c5) bg_popup_sub_pane_cp6

0xb609,	// (0x0004e5f6) list_touch_menu_pane

0xb611,	// (0x0004e5fe) list_single_touch_menu_pane_ParamLimits

0xb611,	// (0x0004e5fe) list_single_touch_menu_pane

0xb629,	// (0x0004e616) list_single_touch_menu_pane_t1

0xda46,	// (0x00050a33) bg_popup_sub_pane_cp7_ParamLimits

0xda46,	// (0x00050a33) bg_popup_sub_pane_cp7

0xb637,	// (0x0004e624) heading_sub_pane

0xb63f,	// (0x0004e62c) list_touch_info_pane_ParamLimits

0xb63f,	// (0x0004e62c) list_touch_info_pane

0xb64e,	// (0x0004e63b) list_single_touch_info_pane_ParamLimits

0xb64e,	// (0x0004e63b) list_single_touch_info_pane

0xb660,	// (0x0004e64d) list_single_touch_info_pane_t1

0xb66e,	// (0x0004e65b) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x00052af7) list_single_touch_info_pane_t

0x41a9,	// (0x00047196) bg_popup_heading_pane_cp

0xb67c,	// (0x0004e669) heading_sub_pane_t1

0x9113,	// (0x0004c100) bg_popup_preview_window_pane_cp_ParamLimits

0x9113,	// (0x0004c100) bg_popup_preview_window_pane_cp

0xb637,	// (0x0004e624) heading_preview_pane

0xb63f,	// (0x0004e62c) list_preview_pane_ParamLimits

0xb63f,	// (0x0004e62c) list_preview_pane

0xb68a,	// (0x0004e677) popup_preview_window_g1

0xb64e,	// (0x0004e63b) list_single_preview_pane_ParamLimits

0xb64e,	// (0x0004e63b) list_single_preview_pane

0xb692,	// (0x0004e67f) list_single_preview_pane_g1

0xb69a,	// (0x0004e687) list_single_preview_pane_t1

0xb660,	// (0x0004e64d) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00052afc) list_single_preview_pane_t

0xb6a8,	// (0x0004e695) bg_popup_heading_pane_cp2_ParamLimits

0xb6a8,	// (0x0004e695) bg_popup_heading_pane_cp2

0xb6be,	// (0x0004e6ab) heading_preview_pane_g1

0xb6c6,	// (0x0004e6b3) heading_preview_pane_t1_ParamLimits

0xb6c6,	// (0x0004e6b3) heading_preview_pane_t1

0xda99,	// (0x00050a86) soft_indicator_pane_t1_ParamLimits

0xdfdc,	// (0x00050fc9) scroll_pane_ParamLimits

0x0b63,	// (0x00043b50) scroll_sc2_left_pane

0x0b5a,	// (0x00043b47) scroll_sc2_right_pane

0x0b82,	// (0x00043b6f) scroll_bg_pane_g1_ParamLimits

0x0b97,	// (0x00043b84) scroll_bg_pane_g2_ParamLimits

0x0baf,	// (0x00043b9c) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x000526d5) scroll_bg_pane_g_ParamLimits

0x0b82,	// (0x00043b6f) scroll_handle_pane_g1_ParamLimits

0x0bd1,	// (0x00043bbe) scroll_handle_pane_g2_ParamLimits

0x0baf,	// (0x00043b9c) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x000526dc) scroll_handle_pane_g_ParamLimits

0x700a,	// (0x00049ff7) popup_choice_list_window_ParamLimits

0x700a,	// (0x00049ff7) popup_choice_list_window

0x8fe9,	// (0x0004bfd6) choice_list_pane

0x906b,	// (0x0004c058) cell_toolbar_pane_t1

0x9093,	// (0x0004c080) toolbar_button_pane_ParamLimits

0xa142,	// (0x0004d12f) ai_gene_pane_1_t2_ParamLimits

0xa142,	// (0x0004d12f) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00052904) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00052904) ai_gene_pane_1_t

0xb6e3,	// (0x0004e6d0) scroll_sc2_left_pane_g1

0xb6e3,	// (0x0004e6d0) scroll_sc2_right_pane_g1

0x6fe2,	// (0x00049fcf) bg_popup_sub_pane_cp10

0xb6ed,	// (0x0004e6da) list_choice_list_pane

0xb706,	// (0x0004e6f3) list_single_choice_list_pane_ParamLimits

0xb706,	// (0x0004e6f3) list_single_choice_list_pane

0xb71e,	// (0x0004e70b) list_single_choice_list_pane_g1

0x093a,	// (0x00043927) list_single_choice_list_pane_t1_ParamLimits

0x093a,	// (0x00043927) list_single_choice_list_pane_t1

0xb726,	// (0x0004e713) choice_list_pane_g1

0xb72e,	// (0x0004e71b) choice_list_pane_t1

0xd9d8,	// (0x000509c5) input_focus_pane_cp11

0x0ab8,	// (0x00043aa5) title_pane_stacon_g2_ParamLimits

0x0ab8,	// (0x00043aa5) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x000526bb) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x000526bb) title_pane_stacon_g

0x41a9,	// (0x00047196) cursor_press_pane

0x70c4,	// (0x0004a0b1) popup_fep_hwr_window_ParamLimits

0x70c4,	// (0x0004a0b1) popup_fep_hwr_window

0x86ca,	// (0x0004b6b7) popup_fep_vkb_window_ParamLimits

0x86ca,	// (0x0004b6b7) popup_fep_vkb_window

0xb73c,	// (0x0004e729) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x00052b25) fep_vkb_side_pane_g_ParamLimits

0x76da,	// (0x0004a6c7) fep_hwr_candidate_pane_ParamLimits

0x76da,	// (0x0004a6c7) fep_hwr_candidate_pane

0x7704,	// (0x0004a6f1) fep_hwr_side_pane_ParamLimits

0x7704,	// (0x0004a6f1) fep_hwr_side_pane

0x7726,	// (0x0004a713) fep_hwr_top_pane_ParamLimits

0x7726,	// (0x0004a713) fep_hwr_top_pane

0x773e,	// (0x0004a72b) fep_hwr_write_pane_ParamLimits

0x773e,	// (0x0004a72b) fep_hwr_write_pane

0xfb38,	// (0x00052b25) fep_vkb_side_pane_g

0xb744,	// (0x0004e731) fep_hwr_top_pane_g1

0xb756,	// (0x0004e743) fep_hwr_top_pane_g2

0x776a,	// (0x0004a757) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00052b01) fep_hwr_top_pane_g

0x777f,	// (0x0004a76c) fep_hwr_top_text_pane

0x0ccb,	// (0x00043cb8) fep_hwr_top_text_pane_g1

0xb78c,	// (0x0004e779) fep_hwr_top_text_pane_t1

0x7889,	// (0x0004a876) fep_hwr_candidate_pane_g1

0xb9d7,	// (0x0004e9c4) fep_vkb_keypad_pane_g3_ParamLimits

0xb9d7,	// (0x0004e9c4) fep_vkb_keypad_pane_g3

0xba03,	// (0x0004e9f0) fep_vkb_keypad_pane_g4_ParamLimits

0xba03,	// (0x0004e9f0) fep_vkb_keypad_pane_g4

0xba7a,	// (0x0004ea67) fep_vkb_bottom_pane_g2_ParamLimits

0xba7a,	// (0x0004ea67) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00052b2c) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00052b2c) fep_vkb_bottom_pane_g

0xb6e3,	// (0x0004e6d0) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x00052b36) cell_vkb_side_pane_g

0xbb05,	// (0x0004eaf2) cell_vkb_side_pane_t1

0xbb13,	// (0x0004eb00) cell_vkb_side_pane_t1_copy1

0xb6e3,	// (0x0004e6d0) bg_fep_vkb_candidate_pane_g2

0xbc57,	// (0x0004ec44) cell_vkb_candidate_pane_ParamLimits

0xb79a,	// (0x0004e787) aid_size_cell_vkb_ParamLimits

0xb79a,	// (0x0004e787) aid_size_cell_vkb

0xbc57,	// (0x0004ec44) cell_vkb_candidate_pane

0x78a3,	// (0x0004a890) bg_popup_fep_shadow_pane_g1

0xb82c,	// (0x0004e819) fep_vkb_bottom_pane_ParamLimits

0xb82c,	// (0x0004e819) fep_vkb_bottom_pane

0xb869,	// (0x0004e856) fep_vkb_candidate_pane_ParamLimits

0xb869,	// (0x0004e856) fep_vkb_candidate_pane

0xb885,	// (0x0004e872) fep_vkb_keypad_pane_ParamLimits

0xb885,	// (0x0004e872) fep_vkb_keypad_pane

0xb8b8,	// (0x0004e8a5) fep_vkb_side_pane_ParamLimits

0xb8b8,	// (0x0004e8a5) fep_vkb_side_pane

0xb8f4,	// (0x0004e8e1) fep_vkb_top_pane_ParamLimits

0xb8f4,	// (0x0004e8e1) fep_vkb_top_pane

0xb930,	// (0x0004e91d) fep_vkb_top_pane_g1_ParamLimits

0xb930,	// (0x0004e91d) fep_vkb_top_pane_g1

0xb93f,	// (0x0004e92c) fep_vkb_top_pane_g2_ParamLimits

0xb93f,	// (0x0004e92c) fep_vkb_top_pane_g2

0xb94e,	// (0x0004e93b) fep_vkb_top_pane_g3_ParamLimits

0xb94e,	// (0x0004e93b) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00052b1c) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00052b1c) fep_vkb_top_pane_g

0xb96c,	// (0x0004e959) fep_vkb_top_text_pane_ParamLimits

0xb96c,	// (0x0004e959) fep_vkb_top_text_pane

0xb97d,	// (0x0004e96a) fep_vkb_side_pane_g1_ParamLimits

0xb97d,	// (0x0004e96a) fep_vkb_side_pane_g1

0xb9c6,	// (0x0004e9b3) grid_vkb_side_pane_ParamLimits

0xb9c6,	// (0x0004e9b3) grid_vkb_side_pane

0x78ab,	// (0x0004a898) bg_popup_fep_shadow_pane_g2

0x78b4,	// (0x0004a8a1) bg_popup_fep_shadow_pane_g3

0x78bc,	// (0x0004a8a9) bg_popup_fep_shadow_pane_g4

0x78c5,	// (0x0004a8b2) bg_popup_fep_shadow_pane_g5

0x78cf,	// (0x0004a8bc) bg_popup_fep_shadow_pane_g6

0x78d7,	// (0x0004a8c4) bg_popup_fep_shadow_pane_g7

0x0864,	// (0x00043851) bg_popup_fep_shadow_pane_g8

0xba25,	// (0x0004ea12) grid_vkb_keypad_number_pane_ParamLimits

0xba25,	// (0x0004ea12) grid_vkb_keypad_number_pane

0xba39,	// (0x0004ea26) grid_vkb_keypad_pane_ParamLimits

0xba39,	// (0x0004ea26) grid_vkb_keypad_pane

0xba5f,	// (0x0004ea4c) fep_vkb_bottom_pane_g1_ParamLimits

0xba5f,	// (0x0004ea4c) fep_vkb_bottom_pane_g1

0xba88,	// (0x0004ea75) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xba88,	// (0x0004ea75) grid_vkb_keypad_bottom_left_pane

0xba9d,	// (0x0004ea8a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xba9d,	// (0x0004ea8a) grid_vkb_keypad_bottom_right_pane

0xbab2,	// (0x0004ea9f) fep_vkb_top_text_pane_g1

0xbacd,	// (0x0004eaba) fep_vkb_top_text_pane_t1

0xbae2,	// (0x0004eacf) cell_vkb_side_pane_ParamLimits

0xbae2,	// (0x0004eacf) cell_vkb_side_pane

0xb6e3,	// (0x0004e6d0) cell_vkb_side_pane_g1

0xbb21,	// (0x0004eb0e) cell_vkb_keypad_pane_ParamLimits

0xbb21,	// (0x0004eb0e) cell_vkb_keypad_pane

0xbbae,	// (0x0004eb9b) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00052b49) bg_popup_fep_shadow_pane_g

0xb6e3,	// (0x0004e6d0) cell_hwr_side_pane_g1

0xb6e3,	// (0x0004e6d0) cell_hwr_side_pane_g2

0xbbb8,	// (0x0004eba5) cell_vkb_keypad_pane_t1

0xbbc6,	// (0x0004ebb3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbbc6,	// (0x0004ebb3) cell_vkb_keypad_bottom_left_pane

0xbbe3,	// (0x0004ebd0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbbe3,	// (0x0004ebd0) cell_vkb_keypad_bottom_right_pane

0xb6e3,	// (0x0004e6d0) cell_vkb_keypad_bottom_left_pane_g1

0xb6e3,	// (0x0004e6d0) cell_vkb_keypad_bottom_right_pane_g1

0xbc1c,	// (0x0004ec09) cell_vkb_keypad_number_pane_ParamLimits

0xbc1c,	// (0x0004ec09) cell_vkb_keypad_number_pane

0xbc3b,	// (0x0004ec28) cell_vkb_keypad_number_pane_g1

0xbc45,	// (0x0004ec32) cell_vkb_keypad_number_pane_g2

0xbc4e,	// (0x0004ec3b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00052b3b) cell_vkb_keypad_number_pane_g

0xbbb8,	// (0x0004eba5) cell_vkb_keypad_number_pane_t1

0xbc78,	// (0x0004ec65) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00052b36) cell_hwr_side_pane_g

0xbc91,	// (0x0004ec7e) cell_hwr_side_pane_t1

0x78e9,	// (0x0004a8d6) cell_hwr_side_pane_t1_copy1

0xb95e,	// (0x0004e94b) cell_hwr_candidate_pane_g1

0x78f7,	// (0x0004a8e4) cell_hwr_candidate_pane_t1

0xb6e3,	// (0x0004e6d0) cell_vkb_candidate_pane_g2

0xbd17,	// (0x0004ed04) cell_vkb_candidate_pane_t1

0xf540,	// (0x0005252d) bg_popup_fep_shadow_pane_ParamLimits

0xf540,	// (0x0005252d) bg_popup_fep_shadow_pane

0x2341,	// (0x0004532e) bg_fep_hwr_top_pane_g4

0xb768,	// (0x0004e755) bg_hwr_side_pane_g1_ParamLimits

0xb768,	// (0x0004e755) bg_hwr_side_pane_g1

0x77bd,	// (0x0004a7aa) cell_hwr_side_pane_ParamLimits

0x77bd,	// (0x0004a7aa) cell_hwr_side_pane

0x77fa,	// (0x0004a7e7) fep_hwr_write_pane_g1_ParamLimits

0x77fa,	// (0x0004a7e7) fep_hwr_write_pane_g1

0x7807,	// (0x0004a7f4) fep_hwr_write_pane_g2_ParamLimits

0x7807,	// (0x0004a7f4) fep_hwr_write_pane_g2

0x7814,	// (0x0004a801) fep_hwr_write_pane_g3_ParamLimits

0x7814,	// (0x0004a801) fep_hwr_write_pane_g3

0x7822,	// (0x0004a80f) fep_hwr_write_pane_g4_ParamLimits

0x7822,	// (0x0004a80f) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x00052b08) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x00052b08) fep_hwr_write_pane_g

0x2341,	// (0x0004532e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2341,	// (0x0004532e) bg_fep_hwr_candidate_pane_g2

0x7837,	// (0x0004a824) cell_hwr_candidate_pane_ParamLimits

0x7837,	// (0x0004a824) cell_hwr_candidate_pane

0x7889,	// (0x0004a876) fep_hwr_candidate_pane_g1_ParamLimits

0xb7c8,	// (0x0004e7b5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb7c8,	// (0x0004e7b5) bg_popup_fep_shadow_pane_cp2

0xb95e,	// (0x0004e94b) fep_vkb_top_pane_g4_ParamLimits

0xb95e,	// (0x0004e94b) fep_vkb_top_pane_g4

0xb9a4,	// (0x0004e991) fep_vkb_side_pane_g2_ParamLimits

0xb9a4,	// (0x0004e991) fep_vkb_side_pane_g2

0x5176,	// (0x00048163) list_setting_pane_t4_ParamLimits

0x5176,	// (0x00048163) list_setting_pane_t4

0x5212,	// (0x000481ff) list_setting_number_pane_t5_ParamLimits

0x5212,	// (0x000481ff) list_setting_number_pane_t5

0x680b,	// (0x000497f8) list_double_heading_pane_cp2_ParamLimits

0x680b,	// (0x000497f8) list_double_heading_pane_cp2

0xbd25,	// (0x0004ed12) list_double_heading_pane_g1_cp2_ParamLimits

0xbd25,	// (0x0004ed12) list_double_heading_pane_g1_cp2

0xbd31,	// (0x0004ed1e) list_double_heading_pane_g2_cp2_ParamLimits

0xbd31,	// (0x0004ed1e) list_double_heading_pane_g2_cp2

0xbd45,	// (0x0004ed32) list_double_heading_pane_t1_cp2_ParamLimits

0xbd45,	// (0x0004ed32) list_double_heading_pane_t1_cp2

0xbd5b,	// (0x0004ed48) list_double_heading_pane_t2_cp2_ParamLimits

0xbd5b,	// (0x0004ed48) list_double_heading_pane_t2_cp2

0xd9d0,	// (0x000509bd) aid_value_unit2

0x5f51,	// (0x00048f3e) popup_preview_fixed_window

0xdb87,	// (0x00050b74) bg_popup_preview_window_pane_cp02

0xbd6d,	// (0x0004ed5a) list_preview_fixed_pane

0xbdb3,	// (0x0004eda0) list_empty_pane_fp_ParamLimits

0xbdb3,	// (0x0004eda0) list_empty_pane_fp

0xbdb3,	// (0x0004eda0) list_single_cale_day_pane_fp_ParamLimits

0xbdb3,	// (0x0004eda0) list_single_cale_day_pane_fp

0xbdb3,	// (0x0004eda0) list_single_graphic_heading_pane_fp_ParamLimits

0xbdb3,	// (0x0004eda0) list_single_graphic_heading_pane_fp

0xbdb3,	// (0x0004eda0) list_single_graphic_pane_fp_ParamLimits

0xbdb3,	// (0x0004eda0) list_single_graphic_pane_fp

0xbdb3,	// (0x0004eda0) list_single_heading_pane_fp_ParamLimits

0xbdb3,	// (0x0004eda0) list_single_heading_pane_fp

0xbdb3,	// (0x0004eda0) list_single_pane_fp_ParamLimits

0xbdb3,	// (0x0004eda0) list_single_pane_fp

0xbdcc,	// (0x0004edb9) list_single_pane_fp_g1_ParamLimits

0xbdcc,	// (0x0004edb9) list_single_pane_fp_g1

0xbd25,	// (0x0004ed12) list_single_pane_fp_g2_ParamLimits

0xbd25,	// (0x0004ed12) list_single_pane_fp_g2

0xbd31,	// (0x0004ed1e) list_single_pane_fp_g3_ParamLimits

0xbd31,	// (0x0004ed1e) list_single_pane_fp_g3

0xbdd8,	// (0x0004edc5) list_single_pane_fp_g4_ParamLimits

0xbdd8,	// (0x0004edc5) list_single_pane_fp_g4

0x0003,

0xfb7d,	// (0x00052b6a) list_single_pane_fp_g_ParamLimits

0xfb7d,	// (0x00052b6a) list_single_pane_fp_g

0x59dd,	// (0x000489ca) list_single_pane_fp_t1_ParamLimits

0x59dd,	// (0x000489ca) list_single_pane_fp_t1

0x59f4,	// (0x000489e1) list_single_graphic_pane_fp_g1_ParamLimits

0x59f4,	// (0x000489e1) list_single_graphic_pane_fp_g1

0xbdcc,	// (0x0004edb9) list_single_graphic_pane_fp_g2_ParamLimits

0xbdcc,	// (0x0004edb9) list_single_graphic_pane_fp_g2

0xbd25,	// (0x0004ed12) list_single_graphic_pane_fp_g3_ParamLimits

0xbd25,	// (0x0004ed12) list_single_graphic_pane_fp_g3

0xbd31,	// (0x0004ed1e) list_single_graphic_pane_fp_g4_ParamLimits

0xbd31,	// (0x0004ed1e) list_single_graphic_pane_fp_g4

0xbdd8,	// (0x0004edc5) list_single_graphic_pane_fp_g5_ParamLimits

0xbdd8,	// (0x0004edc5) list_single_graphic_pane_fp_g5

0x0004,

0xfb86,	// (0x00052b73) list_single_graphic_pane_fp_g_ParamLimits

0xfb86,	// (0x00052b73) list_single_graphic_pane_fp_g

0x5a00,	// (0x000489ed) list_single_graphic_pane_fp_t1_ParamLimits

0x5a00,	// (0x000489ed) list_single_graphic_pane_fp_t1

0x59f4,	// (0x000489e1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x59f4,	// (0x000489e1) list_single_graphic_heading_pane_fp_g1

0xbdcc,	// (0x0004edb9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbdcc,	// (0x0004edb9) list_single_graphic_heading_pane_fp_g2

0xbd25,	// (0x0004ed12) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbd25,	// (0x0004ed12) list_single_graphic_heading_pane_fp_g3

0xbd31,	// (0x0004ed1e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbd31,	// (0x0004ed1e) list_single_graphic_heading_pane_fp_g4

0xbdd8,	// (0x0004edc5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbdd8,	// (0x0004edc5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00052b73) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00052b73) list_single_graphic_heading_pane_fp_g

0x5a16,	// (0x00048a03) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5a16,	// (0x00048a03) list_single_graphic_heading_pane_fp_t1

0x5a2c,	// (0x00048a19) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5a2c,	// (0x00048a19) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x00052b7e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x00052b7e) list_single_graphic_heading_pane_fp_t

0x5a3e,	// (0x00048a2b) list_single_cale_day_pane_fp_g1_ParamLimits

0x5a3e,	// (0x00048a2b) list_single_cale_day_pane_fp_g1

0xbde4,	// (0x0004edd1) list_single_cale_day_pane_fp_g2_ParamLimits

0xbde4,	// (0x0004edd1) list_single_cale_day_pane_fp_g2

0x7915,	// (0x0004a902) list_single_cale_day_pane_fp_g3_ParamLimits

0x7915,	// (0x0004a902) list_single_cale_day_pane_fp_g3

0x793d,	// (0x0004a92a) list_single_cale_day_pane_fp_g4_ParamLimits

0x793d,	// (0x0004a92a) list_single_cale_day_pane_fp_g4

0x7961,	// (0x0004a94e) list_single_cale_day_pane_fp_g5_ParamLimits

0x7961,	// (0x0004a94e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb96,	// (0x00052b83) list_single_cale_day_pane_fp_g_ParamLimits

0xfb96,	// (0x00052b83) list_single_cale_day_pane_fp_g

0x5a76,	// (0x00048a63) list_single_cale_day_pane_fp_t1_ParamLimits

0x5a76,	// (0x00048a63) list_single_cale_day_pane_fp_t1

0x5a9c,	// (0x00048a89) list_single_cale_day_pane_fp_t2_ParamLimits

0x5a9c,	// (0x00048a89) list_single_cale_day_pane_fp_t2

0x5ab5,	// (0x00048aa2) list_single_cale_day_pane_fp_t3_ParamLimits

0x5ab5,	// (0x00048aa2) list_single_cale_day_pane_fp_t3

0x0002,

0xfba1,	// (0x00052b8e) list_single_cale_day_pane_fp_t_ParamLimits

0xfba1,	// (0x00052b8e) list_single_cale_day_pane_fp_t

0xbdcc,	// (0x0004edb9) list_empty_pane_fp_g1_ParamLimits

0xbdcc,	// (0x0004edb9) list_empty_pane_fp_g1

0x5ace,	// (0x00048abb) list_empty_pane_fp_t1

0x5adc,	// (0x00048ac9) list_empty_pane_fp_t2

0x0001,

0xfba8,	// (0x00052b95) list_empty_pane_fp_t

0xbdcc,	// (0x0004edb9) list_single_heading_pane_fp_g1_ParamLimits

0xbdcc,	// (0x0004edb9) list_single_heading_pane_fp_g1

0xbd25,	// (0x0004ed12) list_single_heading_pane_fp_g2_ParamLimits

0xbd25,	// (0x0004ed12) list_single_heading_pane_fp_g2

0xbd31,	// (0x0004ed1e) list_single_heading_pane_fp_g3_ParamLimits

0xbd31,	// (0x0004ed1e) list_single_heading_pane_fp_g3

0x0002,

0xfbad,	// (0x00052b9a) list_single_heading_pane_fp_g_ParamLimits

0xfbad,	// (0x00052b9a) list_single_heading_pane_fp_g

0x5aea,	// (0x00048ad7) list_single_heading_pane_fp_t1_ParamLimits

0x5aea,	// (0x00048ad7) list_single_heading_pane_fp_t1

0x5afc,	// (0x00048ae9) list_single_heading_pane_fp_t2_ParamLimits

0x5afc,	// (0x00048ae9) list_single_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x00052ba1) list_single_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x00052ba1) list_single_heading_pane_fp_t

0x094f,	// (0x0004393c) aid_size_cell_fast

0xdb5c,	// (0x00050b49) soft_indicator_pane_cp1_t1

0x098c,	// (0x00043979) cell_app_pane_cp2_ParamLimits

0x098c,	// (0x00043979) cell_app_pane_cp2

0x76c3,	// (0x0004a6b0) fep_hwr_candidate_drop_down_list_pane

0x26f5,	// (0x000456e2) fep_hwr_candidate_pane_g3_ParamLimits

0x26f5,	// (0x000456e2) fep_hwr_candidate_pane_g3

0x2702,	// (0x000456ef) fep_hwr_candidate_pane_g4_ParamLimits

0x2702,	// (0x000456ef) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x00052b15) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x00052b15) fep_hwr_candidate_pane_g

0xb858,	// (0x0004e845) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb858,	// (0x0004e845) fep_vkb_candidate_drop_down_list_pane

0xbc80,	// (0x0004ec6d) fep_vkb_candidate_pane_g3

0xbc88,	// (0x0004ec75) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00052b42) fep_vkb_candidate_pane_g

0xb95e,	// (0x0004e94b) cell_hwr_candidate_pane_g1_ParamLimits

0xbc9f,	// (0x0004ec8c) cell_hwr_candidate_pane_g3_ParamLimits

0xbc9f,	// (0x0004ec8c) cell_hwr_candidate_pane_g3

0xbcc0,	// (0x0004ecad) cell_hwr_candidate_pane_g4_ParamLimits

0xbcc0,	// (0x0004ecad) cell_hwr_candidate_pane_g4

0x0002,

0xfb6f,	// (0x00052b5c) cell_hwr_candidate_pane_g_ParamLimits

0xfb6f,	// (0x00052b5c) cell_hwr_candidate_pane_g

0xbce1,	// (0x0004ecce) cell_vkb_candidate_pane_g3_ParamLimits

0xbce1,	// (0x0004ecce) cell_vkb_candidate_pane_g3

0xbcfc,	// (0x0004ece9) cell_vkb_candidate_pane_g4_ParamLimits

0xbcfc,	// (0x0004ece9) cell_vkb_candidate_pane_g4

0xbdf0,	// (0x0004eddd) cell_app_pane_cp2_g1_ParamLimits

0xbdf0,	// (0x0004eddd) cell_app_pane_cp2_g1

0xbe0e,	// (0x0004edfb) cell_app_pane_cp2_g2_ParamLimits

0xbe0e,	// (0x0004edfb) cell_app_pane_cp2_g2

0x0001,

0xfbb9,	// (0x00052ba6) cell_app_pane_cp2_g_ParamLimits

0xfbb9,	// (0x00052ba6) cell_app_pane_cp2_g

0xbe1a,	// (0x0004ee07) cell_app_pane_cp2_t1_ParamLimits

0xbe1a,	// (0x0004ee07) cell_app_pane_cp2_t1

0x07e9,	// (0x000437d6) grid_highlight_pane_cp1_ParamLimits

0x07e9,	// (0x000437d6) grid_highlight_pane_cp1

0x7985,	// (0x0004a972) cell_hwr_candidate_pane_cp1_ParamLimits

0x7985,	// (0x0004a972) cell_hwr_candidate_pane_cp1

0xb95e,	// (0x0004e94b) fep_hwr_candidate_drop_down_list_pane_g1

0xbe2c,	// (0x0004ee19) fep_hwr_candidate_drop_down_list_pane_g2

0xbe39,	// (0x0004ee26) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00052bab) fep_hwr_candidate_drop_down_list_pane_g

0x79a9,	// (0x0004a996) fep_hwr_candidate_drop_down_list_scroll_pane

0x79b2,	// (0x0004a99f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x79b2,	// (0x0004a99f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x79bf,	// (0x0004a9ac) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x79bf,	// (0x0004a9ac) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x79cc,	// (0x0004a9b9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x79cc,	// (0x0004a9b9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xbce1,	// (0x0004ecce) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbce1,	// (0x0004ecce) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xbcfc,	// (0x0004ece9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbcfc,	// (0x0004ece9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x79d9,	// (0x0004a9c6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x79d9,	// (0x0004a9c6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x79f4,	// (0x0004a9e1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x79f4,	// (0x0004a9e1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7a0f,	// (0x0004a9fc) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7a0f,	// (0x0004a9fc) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x00052bb2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x00052bb2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbe46,	// (0x0004ee33) cell_vkb_candidate_pane_cp1_ParamLimits

0xbe46,	// (0x0004ee33) cell_vkb_candidate_pane_cp1

0xb95e,	// (0x0004e94b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb95e,	// (0x0004e94b) fep_vkb_candidate_drop_down_list_pane_g1

0xbe2c,	// (0x0004ee19) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbe2c,	// (0x0004ee19) fep_vkb_candidate_drop_down_list_pane_g2

0xbe39,	// (0x0004ee26) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbe39,	// (0x0004ee26) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00052bab) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x00052bab) fep_vkb_candidate_drop_down_list_pane_g

0xbe6c,	// (0x0004ee59) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbe6c,	// (0x0004ee59) fep_vkb_candidate_drop_down_list_scroll_pane

0xbe79,	// (0x0004ee66) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbe79,	// (0x0004ee66) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbe86,	// (0x0004ee73) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbe86,	// (0x0004ee73) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbe92,	// (0x0004ee7f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbe92,	// (0x0004ee7f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbc9f,	// (0x0004ec8c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbc9f,	// (0x0004ec8c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbcc0,	// (0x0004ecad) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbcc0,	// (0x0004ecad) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbe9e,	// (0x0004ee8b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbe9e,	// (0x0004ee8b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbebf,	// (0x0004eeac) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbebf,	// (0x0004eeac) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbee0,	// (0x0004eecd) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbee0,	// (0x0004eecd) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x00052bc3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x00052bc3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6071,	// (0x0004905e) title_pane_g1_ParamLimits

0x607e,	// (0x0004906b) title_pane_g2_ParamLimits

0xf54e,	// (0x0005253b) title_pane_g_ParamLimits

0x0cc3,	// (0x00043cb0) aid_call2_pane

0x0cbb,	// (0x00043ca8) aid_call_pane

0x0ccb,	// (0x00043cb8) popup_clock_analogue_window_g1

0x0ccb,	// (0x00043cb8) popup_clock_analogue_window_g2

0x67ec,	// (0x000497d9) popup_clock_analogue_window_g3

0x67f5,	// (0x000497e2) popup_clock_analogue_window_g4

0xd9e2,	// (0x000509cf) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x000526ea) popup_clock_analogue_window_g

0x67fd,	// (0x000497ea) popup_clock_analogue_window_t1

0x683e,	// (0x0004982b) clock_digital_number_pane_ParamLimits

0x683e,	// (0x0004982b) clock_digital_number_pane

0x684a,	// (0x00049837) clock_digital_number_pane_cp02_ParamLimits

0x684a,	// (0x00049837) clock_digital_number_pane_cp02

0x6856,	// (0x00049843) clock_digital_number_pane_cp03_ParamLimits

0x6856,	// (0x00049843) clock_digital_number_pane_cp03

0x6862,	// (0x0004984f) clock_digital_number_pane_cp04_ParamLimits

0x6862,	// (0x0004984f) clock_digital_number_pane_cp04

0x686e,	// (0x0004985b) clock_digital_separator_pane_ParamLimits

0x686e,	// (0x0004985b) clock_digital_separator_pane

0x687a,	// (0x00049867) popup_clock_digital_window_t1_ParamLimits

0x687a,	// (0x00049867) popup_clock_digital_window_t1

0xd9e2,	// (0x000509cf) clock_digital_number_pane_g1

0xd9e2,	// (0x000509cf) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x000526f5) clock_digital_number_pane_g

0xd9e2,	// (0x000509cf) clock_digital_separator_pane_g1

0xd9e2,	// (0x000509cf) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x000526f5) clock_digital_separator_pane_g

0x8b95,	// (0x0004bb82) aid_fill_nsta_ParamLimits

0x8ce5,	// (0x0004bcd2) indicator_nsta_pane_ParamLimits

0x8e76,	// (0x0004be63) popup_clock_analogue_window

0x8e76,	// (0x0004be63) popup_clock_digital_window

0xda46,	// (0x00050a33) grid_indicator_nsta_pane_ParamLimits

0xb116,	// (0x0004e103) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x00052a95) clock_nsta_pane_t

0x6755,	// (0x00049742) aid_size_max_handle

0x675f,	// (0x0004974c) aid_size_min_handle

0x41a9,	// (0x00047196) editor_scroll_pane

0xbefb,	// (0x0004eee8) ex_editor_pane

0x0915,	// (0x00043902) scroll_pane_cp13

0xe008,	// (0x00050ff5) scroll_pane_cp14

0x0cfa,	// (0x00043ce7) scroll_pane_cp36

0x6821,	// (0x0004980e) list_single_graphic_hl_pane_cp2_ParamLimits

0x6821,	// (0x0004980e) list_single_graphic_hl_pane_cp2

0x74c5,	// (0x0004a4b2) list_single_graphic_hl_pane_ParamLimits

0x74c5,	// (0x0004a4b2) list_single_graphic_hl_pane

0x5b12,	// (0x00048aff) aid_size_min_hl_cp1

0xbf03,	// (0x0004eef0) list_highlight_pane_cp34_ParamLimits

0xbf03,	// (0x0004eef0) list_highlight_pane_cp34

0xbf14,	// (0x0004ef01) list_single_graphic_hl_pane_g1_ParamLimits

0xbf14,	// (0x0004ef01) list_single_graphic_hl_pane_g1

0x5b1b,	// (0x00048b08) list_single_graphic_hl_pane_g2_ParamLimits

0x5b1b,	// (0x00048b08) list_single_graphic_hl_pane_g2

0x5b1b,	// (0x00048b08) list_single_graphic_hl_pane_g3_ParamLimits

0x5b1b,	// (0x00048b08) list_single_graphic_hl_pane_g3

0x75ba,	// (0x0004a5a7) list_single_graphic_hl_pane_g4_ParamLimits

0x75ba,	// (0x0004a5a7) list_single_graphic_hl_pane_g4

0x7a2a,	// (0x0004aa17) list_single_graphic_hl_pane_g5_ParamLimits

0x7a2a,	// (0x0004aa17) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x00052bd4) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x00052bd4) list_single_graphic_hl_pane_g

0x5b27,	// (0x00048b14) list_single_graphic_hl_pane_t1_ParamLimits

0x5b27,	// (0x00048b14) list_single_graphic_hl_pane_t1

0xbf21,	// (0x0004ef0e) aid_size_min_hl_cp2

0xbf2a,	// (0x0004ef17) list_highlight_pane_cp34_cp2_ParamLimits

0xbf2a,	// (0x0004ef17) list_highlight_pane_cp34_cp2

0xbf14,	// (0x0004ef01) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbf14,	// (0x0004ef01) list_single_graphic_hl_pane_g1_cp2

0xbf37,	// (0x0004ef24) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbf37,	// (0x0004ef24) list_single_graphic_hl_pane_g2_cp2

0xbf43,	// (0x0004ef30) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbf43,	// (0x0004ef30) list_single_graphic_hl_pane_g3_cp2

0x1b33,	// (0x00044b20) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1b33,	// (0x00044b20) list_single_graphic_hl_pane_g4_cp2

0xbf51,	// (0x0004ef3e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbf51,	// (0x0004ef3e) list_single_graphic_hl_pane_g5_cp2

0x6e3b,	// (0x00049e28) control_pane_g4_ParamLimits

0x6e3b,	// (0x00049e28) control_pane_g4

0x6fe2,	// (0x00049fcf) bg_popup_sub_pane_cp10_ParamLimits

0xb6ed,	// (0x0004e6da) list_choice_list_pane_ParamLimits

0xb6fc,	// (0x0004e6e9) scroll_pane_cp23

0xdb87,	// (0x00050b74) bg_popup_preview_window_pane_cp02_ParamLimits

0xbd6d,	// (0x0004ed5a) list_preview_fixed_pane_ParamLimits

0xbd83,	// (0x0004ed70) list_preview_fixed_pane_cp_ParamLimits

0xbd83,	// (0x0004ed70) list_preview_fixed_pane_cp

0xbd8f,	// (0x0004ed7c) popup_preview_fixed_window_g1_ParamLimits

0xbd8f,	// (0x0004ed7c) popup_preview_fixed_window_g1

0xbd9b,	// (0x0004ed88) popup_preview_fixed_window_g2_ParamLimits

0xbd9b,	// (0x0004ed88) popup_preview_fixed_window_g2

0x0002,

0xfb76,	// (0x00052b63) popup_preview_fixed_window_g_ParamLimits

0xfb76,	// (0x00052b63) popup_preview_fixed_window_g

0x6644,	// (0x00049631) aid_navi_side_left_pane_ParamLimits

0x6659,	// (0x00049646) aid_navi_side_right_pane_ParamLimits

0x6671,	// (0x0004965e) navi_icon_pane_stacon_ParamLimits

0x6685,	// (0x00049672) navi_navi_pane_stacon_ParamLimits

0x6671,	// (0x0004965e) navi_text_pane_stacon_ParamLimits

0xd9d8,	// (0x000509c5) main_text_info_pane

0xbf7b,	// (0x0004ef68) listscroll_text_info_pane

0xbf83,	// (0x0004ef70) list_text_info_pane_ParamLimits

0xbf83,	// (0x0004ef70) list_text_info_pane

0xbf92,	// (0x0004ef7f) scroll_pane_cp24_ParamLimits

0xbf92,	// (0x0004ef7f) scroll_pane_cp24

0xbfb0,	// (0x0004ef9d) list_text_info_pane_t1_ParamLimits

0xbfb0,	// (0x0004ef9d) list_text_info_pane_t1

0x702c,	// (0x0004a019) popup_fast_swap2_window_ParamLimits

0x702c,	// (0x0004a019) popup_fast_swap2_window

0xbfd5,	// (0x0004efc2) aid_size_cell_fast2

0xd9d8,	// (0x000509c5) bg_popup_window_pane_cp17

0x94d3,	// (0x0004c4c0) heading_pane_cp2

0xdd8d,	// (0x00050d7a) listscroll_fast2_pane

0xbfdf,	// (0x0004efcc) grid_fast2_pane

0xbfe9,	// (0x0004efd6) listscroll_fast2_pane_g1

0xbff3,	// (0x0004efe0) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x00052bdf) listscroll_fast2_pane_g

0x0915,	// (0x00043902) scroll_pane_cp26

0xbffd,	// (0x0004efea) cell_fast2_pane_ParamLimits

0xbffd,	// (0x0004efea) cell_fast2_pane

0xc014,	// (0x0004f001) cell_fast2_pane_g1

0xc01d,	// (0x0004f00a) cell_fast2_pane_g2

0xc026,	// (0x0004f013) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x00052be4) cell_fast2_pane_g

0xddcf,	// (0x00050dbc) grid_highlight_pane_cp9

0xdde4,	// (0x00050dd1) main_eswt_pane_ParamLimits

0xdde4,	// (0x00050dd1) main_eswt_pane

0xbfa7,	// (0x0004ef94) list_single_text_info_pane

0xc02e,	// (0x0004f01b) eswt_ctrl_button_pane

0xc02e,	// (0x0004f01b) eswt_ctrl_canvas_pane

0xc036,	// (0x0004f023) eswt_ctrl_combo_pane

0xc02e,	// (0x0004f01b) eswt_ctrl_default_pane

0xc02e,	// (0x0004f01b) eswt_ctrl_label_pane

0xc03e,	// (0x0004f02b) eswt_ctrl_wait_pane

0xc046,	// (0x0004f033) eswt_shell_pane

0xd9d8,	// (0x000509c5) listscroll_eswt_app_pane

0xc066,	// (0x0004f053) popup_eswt_tasktip_window_ParamLimits

0xc066,	// (0x0004f053) popup_eswt_tasktip_window

0x9113,	// (0x0004c100) bg_popup_window_pane_cp18

0xc077,	// (0x0004f064) eswt_control_pane_g1_ParamLimits

0xc077,	// (0x0004f064) eswt_control_pane_g1

0xc084,	// (0x0004f071) eswt_control_pane_g2_ParamLimits

0xc084,	// (0x0004f071) eswt_control_pane_g2

0xc091,	// (0x0004f07e) eswt_control_pane_g3_ParamLimits

0xc091,	// (0x0004f07e) eswt_control_pane_g3

0xc09e,	// (0x0004f08b) eswt_control_pane_g4_ParamLimits

0xc09e,	// (0x0004f08b) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x00052beb) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x00052beb) eswt_control_pane_g

0x07e9,	// (0x000437d6) bg_button_pane_ParamLimits

0x07e9,	// (0x000437d6) bg_button_pane

0xdde4,	// (0x00050dd1) common_borders_pane_copy2_ParamLimits

0xdde4,	// (0x00050dd1) common_borders_pane_copy2

0xc0ab,	// (0x0004f098) control_button_pane_g1_ParamLimits

0xc0ab,	// (0x0004f098) control_button_pane_g1

0xc0b7,	// (0x0004f0a4) control_button_pane_g2_ParamLimits

0xc0b7,	// (0x0004f0a4) control_button_pane_g2

0xc0c3,	// (0x0004f0b0) control_button_pane_g3_ParamLimits

0xc0c3,	// (0x0004f0b0) control_button_pane_g3

0x0002,

0xfc07,	// (0x00052bf4) control_button_pane_g_ParamLimits

0xfc07,	// (0x00052bf4) control_button_pane_g

0xc0d7,	// (0x0004f0c4) control_button_pane_t1

0xc0e5,	// (0x0004f0d2) control_button_pane_t2

0x0001,

0xfc0e,	// (0x00052bfb) control_button_pane_t

0x909f,	// (0x0004c08c) bg_button_pane_g1

0x90a7,	// (0x0004c094) bg_button_pane_g2

0x90af,	// (0x0004c09c) bg_button_pane_g3

0x90b7,	// (0x0004c0a4) bg_button_pane_g4

0x90bf,	// (0x0004c0ac) bg_button_pane_g5

0x90c7,	// (0x0004c0b4) bg_button_pane_g6

0x90cf,	// (0x0004c0bc) bg_button_pane_g7

0x90d7,	// (0x0004c0c4) bg_button_pane_g8

0x90df,	// (0x0004c0cc) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00052858) bg_button_pane_g

0xb6a8,	// (0x0004e695) common_borders_pane_ParamLimits

0xb6a8,	// (0x0004e695) common_borders_pane

0xc077,	// (0x0004f064) eswt_control_pane_g1_copy1_ParamLimits

0xc077,	// (0x0004f064) eswt_control_pane_g1_copy1

0xc084,	// (0x0004f071) eswt_control_pane_g2_copy1_ParamLimits

0xc084,	// (0x0004f071) eswt_control_pane_g2_copy1

0xc091,	// (0x0004f07e) eswt_control_pane_g3_copy1_ParamLimits

0xc091,	// (0x0004f07e) eswt_control_pane_g3_copy1

0xc09e,	// (0x0004f08b) eswt_control_pane_g4_copy1_ParamLimits

0xc09e,	// (0x0004f08b) eswt_control_pane_g4_copy1

0xb6e3,	// (0x0004e6d0) bg_eswt_ctrl_canvas_pane_g1

0xb6a8,	// (0x0004e695) common_borders_pane_cp2_ParamLimits

0xb6a8,	// (0x0004e695) common_borders_pane_cp2

0xb6a8,	// (0x0004e695) common_borders_pane_cp3_ParamLimits

0xb6a8,	// (0x0004e695) common_borders_pane_cp3

0xc0f3,	// (0x0004f0e0) separator_horizontal_pane

0xc0fb,	// (0x0004f0e8) separator_vertical_pane

0xc077,	// (0x0004f064) eswt_control_pane_g1_copy2_ParamLimits

0xc077,	// (0x0004f064) eswt_control_pane_g1_copy2

0xc084,	// (0x0004f071) eswt_control_pane_g2_copy2_ParamLimits

0xc084,	// (0x0004f071) eswt_control_pane_g2_copy2

0xc091,	// (0x0004f07e) eswt_control_pane_g3_copy2_ParamLimits

0xc091,	// (0x0004f07e) eswt_control_pane_g3_copy2

0xc09e,	// (0x0004f08b) eswt_control_pane_g4_copy2_ParamLimits

0xc09e,	// (0x0004f08b) eswt_control_pane_g4_copy2

0xd9d8,	// (0x000509c5) common_borders_pane_cp4

0xc104,	// (0x0004f0f1) separator_horizontal_pane_g1

0xc10d,	// (0x0004f0fa) separator_horizontal_pane_g2

0xc116,	// (0x0004f103) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x00052c00) separator_horizontal_pane_g

0xc077,	// (0x0004f064) eswt_control_pane_g1_copy3_ParamLimits

0xc077,	// (0x0004f064) eswt_control_pane_g1_copy3

0xc084,	// (0x0004f071) eswt_control_pane_g2_copy3_ParamLimits

0xc084,	// (0x0004f071) eswt_control_pane_g2_copy3

0xc091,	// (0x0004f07e) eswt_control_pane_g3_copy3_ParamLimits

0xc091,	// (0x0004f07e) eswt_control_pane_g3_copy3

0xc09e,	// (0x0004f08b) eswt_control_pane_g4_copy3_ParamLimits

0xc09e,	// (0x0004f08b) eswt_control_pane_g4_copy3

0xd9d8,	// (0x000509c5) common_borders_pane_cp5

0xc11f,	// (0x0004f10c) separator_vertical_pane_g1

0xc128,	// (0x0004f115) separator_vertical_pane_g2

0xc131,	// (0x0004f11e) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x00052c07) separator_vertical_pane_g

0xc077,	// (0x0004f064) eswt_control_pane_g1_copy4_ParamLimits

0xc077,	// (0x0004f064) eswt_control_pane_g1_copy4

0xc084,	// (0x0004f071) eswt_control_pane_g2_copy4_ParamLimits

0xc084,	// (0x0004f071) eswt_control_pane_g2_copy4

0xc091,	// (0x0004f07e) eswt_control_pane_g3_copy4_ParamLimits

0xc091,	// (0x0004f07e) eswt_control_pane_g3_copy4

0xc09e,	// (0x0004f08b) eswt_control_pane_g4_copy4_ParamLimits

0xc09e,	// (0x0004f08b) eswt_control_pane_g4_copy4

0xc13a,	// (0x0004f127) eswt_ctrl_combo_button_pane

0xc142,	// (0x0004f12f) eswt_ctrl_input_pane

0xc14a,	// (0x0004f137) popup_choice_list_window_cp70

0xc152,	// (0x0004f13f) eswt_ctrl_input_pane_t1

0xd9d8,	// (0x000509c5) input_focus_pane_cp70

0xb6a8,	// (0x0004e695) bg_button_pane_cp70_ParamLimits

0xb6a8,	// (0x0004e695) bg_button_pane_cp70

0xc160,	// (0x0004f14d) eswt_ctrl_combo_button_pane_g1

0xc168,	// (0x0004f155) wait_bar_pane_cp70

0x9113,	// (0x0004c100) bg_popup_window_pane_cp70_ParamLimits

0x9113,	// (0x0004c100) bg_popup_window_pane_cp70

0xc170,	// (0x0004f15d) popup_eswt_tasktip_window_t1

0xc186,	// (0x0004f173) wait_bar_pane_cp71_ParamLimits

0xc186,	// (0x0004f173) wait_bar_pane_cp71

0xc192,	// (0x0004f17f) grid_eswt_app_pane

0x0b5a,	// (0x00043b47) scroll_pane_cp70

0xc19b,	// (0x0004f188) cell_eswt_app_pane_ParamLimits

0xc19b,	// (0x0004f188) cell_eswt_app_pane

0xc1cd,	// (0x0004f1ba) cell_eswt_app_pane_g1_ParamLimits

0xc1cd,	// (0x0004f1ba) cell_eswt_app_pane_g1

0xc1fc,	// (0x0004f1e9) cell_eswt_app_pane_g2_ParamLimits

0xc1fc,	// (0x0004f1e9) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x00052c0e) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x00052c0e) cell_eswt_app_pane_g

0xc225,	// (0x0004f212) cell_eswt_app_pane_t1_ParamLimits

0xc225,	// (0x0004f212) cell_eswt_app_pane_t1

0xc257,	// (0x0004f244) grid_highlight_pane_cp70_ParamLimits

0xc257,	// (0x0004f244) grid_highlight_pane_cp70

0x1033,	// (0x00044020) set_content_pane_g1

0x6dd1,	// (0x00049dbe) status_small_volume_pane

0x7a3e,	// (0x0004aa2b) status_small_volume_pane_g1

0x7a46,	// (0x0004aa33) volume_small2_pane

0x7a4f,	// (0x0004aa3c) volume_small2_pane_g1

0x7a58,	// (0x0004aa45) volume_small2_pane_g2

0x7a61,	// (0x0004aa4e) volume_small2_pane_g3

0x7a6a,	// (0x0004aa57) volume_small2_pane_g4

0x7a73,	// (0x0004aa60) volume_small2_pane_g5

0x7a7c,	// (0x0004aa69) volume_small2_pane_g6

0x7a85,	// (0x0004aa72) volume_small2_pane_g7

0x7a8e,	// (0x0004aa7b) volume_small2_pane_g8

0x7a97,	// (0x0004aa84) volume_small2_pane_g9

0x7aa0,	// (0x0004aa8d) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x00052c13) volume_small2_pane_g

0xbab2,	// (0x0004ea9f) fep_vkb_top_text_pane_g1_ParamLimits

0xbacd,	// (0x0004eaba) fep_vkb_top_text_pane_t1_ParamLimits

0xbda7,	// (0x0004ed94) popup_preview_fixed_window_g3_ParamLimits

0xbda7,	// (0x0004ed94) popup_preview_fixed_window_g3

0x8ab9,	// (0x0004baa6) popup_toolbar_trans_pane

0xa457,	// (0x0004d444) aid_height_set_list_ParamLimits

0xa468,	// (0x0004d455) aid_size_parent_ParamLimits

0x6fe2,	// (0x00049fcf) list_highlight_pane_cp2_ParamLimits

0x1033,	// (0x00044020) set_content_pane_g1_ParamLimits

0xa6bd,	// (0x0004d6aa) list_single_image_pane_ParamLimits

0xa6bd,	// (0x0004d6aa) list_single_image_pane

0xc263,	// (0x0004f250) aid_size_cell_image_ParamLimits

0xc263,	// (0x0004f250) aid_size_cell_image

0xc270,	// (0x0004f25d) grid_single_image_pane_ParamLimits

0xc270,	// (0x0004f25d) grid_single_image_pane

0x07f7,	// (0x000437e4) list_single_image_pane_g1_ParamLimits

0x07f7,	// (0x000437e4) list_single_image_pane_g1

0x0803,	// (0x000437f0) list_single_image_pane_g2_ParamLimits

0x0803,	// (0x000437f0) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x00052c28) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x00052c28) list_single_image_pane_g

0xc27e,	// (0x0004f26b) list_single_image_pane_t1_ParamLimits

0xc27e,	// (0x0004f26b) list_single_image_pane_t1

0xc294,	// (0x0004f281) cell_image_list_pane_ParamLimits

0xc294,	// (0x0004f281) cell_image_list_pane

0xc2aa,	// (0x0004f297) cell_image_list_pane_g1

0xc2b3,	// (0x0004f2a0) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x00052c2d) cell_image_list_pane_g

0xc2bc,	// (0x0004f2a9) aid_size_cell_tb_trans_pane

0x07e9,	// (0x000437d6) bg_tb_trans_pane

0xc2ce,	// (0x0004f2bb) grid_tb_trans_pane

0x909f,	// (0x0004c08c) bg_tb_trans_pane_g1

0x90a7,	// (0x0004c094) bg_tb_trans_pane_g2

0x90af,	// (0x0004c09c) bg_tb_trans_pane_g3

0x90b7,	// (0x0004c0a4) bg_tb_trans_pane_g4

0x90bf,	// (0x0004c0ac) bg_tb_trans_pane_g5

0x90d7,	// (0x0004c0c4) bg_tb_trans_pane_g6

0x90df,	// (0x0004c0cc) bg_tb_trans_pane_g7

0x90c7,	// (0x0004c0b4) bg_tb_trans_pane_g8

0x90cf,	// (0x0004c0bc) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x00052c32) bg_tb_trans_pane_g

0xc2e2,	// (0x0004f2cf) cell_toolbar_trans_pane_ParamLimits

0xc2e2,	// (0x0004f2cf) cell_toolbar_trans_pane

0xb6e3,	// (0x0004e6d0) cell_toolbar_trans_pane_g1

0xb307,	// (0x0004e2f4) list_form2_midp_pane_t1

0xb315,	// (0x0004e302) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00052adb) list_form2_midp_pane_t

0xb323,	// (0x0004e310) scroll_pane_cp51_ParamLimits

0xb4ea,	// (0x0004e4d7) form2_midp_wait_pane_g1

0xb4f3,	// (0x0004e4e0) form2_midp_wait_pane_g2

0xb4fc,	// (0x0004e4e9) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00052af0) form2_midp_wait_pane_g

0xda46,	// (0x00050a33) list_highlight_pane_cp21_ParamLimits

0xb540,	// (0x0004e52d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb54f,	// (0x0004e53c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa676,	// (0x0004d663) list_single_2graphic_im_pane_ParamLimits

0xa676,	// (0x0004d663) list_single_2graphic_im_pane

0xc308,	// (0x0004f2f5) list_single_2graphic_im_pane_g1_ParamLimits

0xc308,	// (0x0004f2f5) list_single_2graphic_im_pane_g1

0xc319,	// (0x0004f306) list_single_2graphic_im_pane_g2_ParamLimits

0xc319,	// (0x0004f306) list_single_2graphic_im_pane_g2

0xc325,	// (0x0004f312) list_single_2graphic_im_pane_g3_ParamLimits

0xc325,	// (0x0004f312) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x00052c45) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x00052c45) list_single_2graphic_im_pane_g

0xc345,	// (0x0004f332) list_single_2graphic_im_pane_t1_ParamLimits

0xc345,	// (0x0004f332) list_single_2graphic_im_pane_t1

0xbdb3,	// (0x0004eda0) list_single_graphic_2heading_pane_fp_ParamLimits

0xbdb3,	// (0x0004eda0) list_single_graphic_2heading_pane_fp

0x59f4,	// (0x000489e1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x59f4,	// (0x000489e1) list_single_graphic_2heading_pane_fp_g1

0xbdcc,	// (0x0004edb9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbdcc,	// (0x0004edb9) list_single_graphic_2heading_pane_fp_g2

0xbd25,	// (0x0004ed12) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbd25,	// (0x0004ed12) list_single_graphic_2heading_pane_fp_g3

0xbd31,	// (0x0004ed1e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbd31,	// (0x0004ed1e) list_single_graphic_2heading_pane_fp_g4

0xbdd8,	// (0x0004edc5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbdd8,	// (0x0004edc5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00052b73) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00052b73) list_single_graphic_2heading_pane_fp_g

0x5b3d,	// (0x00048b2a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5b3d,	// (0x00048b2a) list_single_graphic_2heading_pane_fp_t1

0x5a2c,	// (0x00048a19) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5a2c,	// (0x00048a19) list_single_graphic_2heading_pane_fp_t2

0x5b53,	// (0x00048b40) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5b53,	// (0x00048b40) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x00052c4e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x00052c4e) list_single_graphic_2heading_pane_fp_t

0xb774,	// (0x0004e761) fep_hwr_write_pane_g5_ParamLimits

0xb774,	// (0x0004e761) fep_hwr_write_pane_g5

0xb780,	// (0x0004e76d) fep_hwr_write_pane_g6_ParamLimits

0xb780,	// (0x0004e76d) fep_hwr_write_pane_g6

0xc046,	// (0x0004f033) eswt_shell_pane_ParamLimits

0x9113,	// (0x0004c100) bg_popup_window_pane_cp18_ParamLimits

0xa3ae,	// (0x0004d39b) heading_pane_cp70

0xc170,	// (0x0004f15d) popup_eswt_tasktip_window_t1_ParamLimits

0x8bec,	// (0x0004bbd9) aid_touch_tab_arrow_left

0x8bfb,	// (0x0004bbe8) aid_touch_tab_arrow_right

0xd9f6,	// (0x000509e3) title_pane_g3_ParamLimits

0xd9f6,	// (0x000509e3) title_pane_g3

0x07a8,	// (0x00043795) set_value_pane_g1

0x8ab9,	// (0x0004baa6) popup_toolbar_trans_pane_ParamLimits

0xc2bc,	// (0x0004f2a9) aid_size_cell_tb_trans_pane_ParamLimits

0x07e9,	// (0x000437d6) bg_tb_trans_pane_ParamLimits

0xc2ce,	// (0x0004f2bb) grid_tb_trans_pane_ParamLimits

0xdb87,	// (0x00050b74) cont_note_pane_ParamLimits

0xdb87,	// (0x00050b74) cont_note_pane

0xdde4,	// (0x00050dd1) cont_snote2_single_text_pane_ParamLimits

0xdde4,	// (0x00050dd1) cont_snote2_single_text_pane

0xdde4,	// (0x00050dd1) cont_snote2_single_graphic_pane_ParamLimits

0xdde4,	// (0x00050dd1) cont_snote2_single_graphic_pane

0x96ef,	// (0x0004c6dc) cont_note_wait_pane_ParamLimits

0x96ef,	// (0x0004c6dc) cont_note_wait_pane

0x96ef,	// (0x0004c6dc) cont_note_image_pane_ParamLimits

0x96ef,	// (0x0004c6dc) cont_note_image_pane

0xc376,	// (0x0004f363) popup_note2_window_g1_ParamLimits

0xc376,	// (0x0004f363) popup_note2_window_g1

0xc3a7,	// (0x0004f394) popup_note2_window_t1_ParamLimits

0xc3a7,	// (0x0004f394) popup_note2_window_t1

0xc3ec,	// (0x0004f3d9) popup_note2_window_t2_ParamLimits

0xc3ec,	// (0x0004f3d9) popup_note2_window_t2

0xc431,	// (0x0004f41e) popup_note2_window_t3_ParamLimits

0xc431,	// (0x0004f41e) popup_note2_window_t3

0xc476,	// (0x0004f463) popup_note2_window_t4_ParamLimits

0xc476,	// (0x0004f463) popup_note2_window_t4

0xdc0b,	// (0x00050bf8) popup_note2_window_t5_ParamLimits

0xdc0b,	// (0x00050bf8) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x00052c5a) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x00052c5a) popup_note2_window_t

0xc4a5,	// (0x0004f492) popup_note2_image_window_g1_ParamLimits

0xc4a5,	// (0x0004f492) popup_note2_image_window_g1

0xc4b1,	// (0x0004f49e) popup_note2_image_window_g2_ParamLimits

0xc4b1,	// (0x0004f49e) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x00052c65) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x00052c65) popup_note2_image_window_g

0xc4c3,	// (0x0004f4b0) popup_note2_image_window_t1_ParamLimits

0xc4c3,	// (0x0004f4b0) popup_note2_image_window_t1

0xc4db,	// (0x0004f4c8) popup_note2_image_window_t2_ParamLimits

0xc4db,	// (0x0004f4c8) popup_note2_image_window_t2

0xc4f3,	// (0x0004f4e0) popup_note2_image_window_t3_ParamLimits

0xc4f3,	// (0x0004f4e0) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x00052c6a) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x00052c6a) popup_note2_image_window_t

0x96fd,	// (0x0004c6ea) popup_note2_wait_window_g1_ParamLimits

0x96fd,	// (0x0004c6ea) popup_note2_wait_window_g1

0xc50f,	// (0x0004f4fc) popup_note2_wait_window_g2_ParamLimits

0xc50f,	// (0x0004f4fc) popup_note2_wait_window_g2

0x9715,	// (0x0004c702) popup_note2_wait_window_g3_ParamLimits

0x9715,	// (0x0004c702) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x00052c71) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x00052c71) popup_note2_wait_window_g

0xc51b,	// (0x0004f508) popup_note2_wait_window_t1_ParamLimits

0xc51b,	// (0x0004f508) popup_note2_wait_window_t1

0xc539,	// (0x0004f526) popup_note2_wait_window_t2_ParamLimits

0xc539,	// (0x0004f526) popup_note2_wait_window_t2

0xc557,	// (0x0004f544) popup_note2_wait_window_t3_ParamLimits

0xc557,	// (0x0004f544) popup_note2_wait_window_t3

0xc569,	// (0x0004f556) popup_note2_wait_window_t4_ParamLimits

0xc569,	// (0x0004f556) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x00052c78) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x00052c78) popup_note2_wait_window_t

0xc57b,	// (0x0004f568) wait_bar2_pane_ParamLimits

0xc57b,	// (0x0004f568) wait_bar2_pane

0xc593,	// (0x0004f580) popup_snote2_single_text_window_g1_ParamLimits

0xc593,	// (0x0004f580) popup_snote2_single_text_window_g1

0xc5bb,	// (0x0004f5a8) popup_snote2_single_text_window_t1_ParamLimits

0xc5bb,	// (0x0004f5a8) popup_snote2_single_text_window_t1

0xc607,	// (0x0004f5f4) popup_snote2_single_text_window_t2_ParamLimits

0xc607,	// (0x0004f5f4) popup_snote2_single_text_window_t2

0xc653,	// (0x0004f640) popup_snote2_single_text_window_t3_ParamLimits

0xc653,	// (0x0004f640) popup_snote2_single_text_window_t3

0xc694,	// (0x0004f681) popup_snote2_single_text_window_t4_ParamLimits

0xc694,	// (0x0004f681) popup_snote2_single_text_window_t4

0xc6ca,	// (0x0004f6b7) popup_snote2_single_text_window_t5_ParamLimits

0xc6ca,	// (0x0004f6b7) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x00052c81) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x00052c81) popup_snote2_single_text_window_t

0xc6f5,	// (0x0004f6e2) popup_snote2_single_graphic_window_g1_ParamLimits

0xc6f5,	// (0x0004f6e2) popup_snote2_single_graphic_window_g1

0xc71d,	// (0x0004f70a) popup_snote2_single_graphic_window_g2_ParamLimits

0xc71d,	// (0x0004f70a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x00052c8c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x00052c8c) popup_snote2_single_graphic_window_g

0xc745,	// (0x0004f732) popup_snote2_single_graphic_window_t1_ParamLimits

0xc745,	// (0x0004f732) popup_snote2_single_graphic_window_t1

0xc791,	// (0x0004f77e) popup_snote2_single_graphic_window_t2_ParamLimits

0xc791,	// (0x0004f77e) popup_snote2_single_graphic_window_t2

0xc653,	// (0x0004f640) popup_snote2_single_graphic_window_t3_ParamLimits

0xc653,	// (0x0004f640) popup_snote2_single_graphic_window_t3

0xc694,	// (0x0004f681) popup_snote2_single_graphic_window_t4_ParamLimits

0xc694,	// (0x0004f681) popup_snote2_single_graphic_window_t4

0xc6ca,	// (0x0004f6b7) popup_snote2_single_graphic_window_t5_ParamLimits

0xc6ca,	// (0x0004f6b7) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x00052c91) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x00052c91) popup_snote2_single_graphic_window_t

0xb1d3,	// (0x0004e1c0) clock_nsta_pane_cp2_t1

0xb1d3,	// (0x0004e1c0) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x00052ab1) clock_nsta_pane_cp2_t

0x5340,	// (0x0004832d) form_field_data_wide_pane_g1_ParamLimits

0x07f7,	// (0x000437e4) form_field_data_wide_pane_g2_ParamLimits

0x07f7,	// (0x000437e4) form_field_data_wide_pane_g2

0x0803,	// (0x000437f0) form_field_data_wide_pane_g3_ParamLimits

0x0803,	// (0x000437f0) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005266d) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005266d) form_field_data_wide_pane_g

0xb0b2,	// (0x0004e09f) grid_touch_3_pane_ParamLimits

0xb0b2,	// (0x0004e09f) grid_touch_3_pane

0xc7dd,	// (0x0004f7ca) cell_touch_3_pane_ParamLimits

0xc7dd,	// (0x0004f7ca) cell_touch_3_pane

0xb6e3,	// (0x0004e6d0) cell_touch_3_pane_g1

0xb6e3,	// (0x0004e6d0) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x00052b36) cell_touch_3_pane_g

0xdc3d,	// (0x00050c2a) cont_query_data_pane

0xdc45,	// (0x00050c32) cont_query_data_pane_cp1

0xc810,	// (0x0004f7fd) button_value_adjust_pane_cp7

0xc818,	// (0x0004f805) query_popup_pane_cp3

0x0d2b,	// (0x00043d18) bg_popup_sub_pane_cp22_ParamLimits

0x68fb,	// (0x000498e8) navi_navi_volume_pane_cp2

0x6916,	// (0x00049903) popup_side_volume_key_window_g2

0x6925,	// (0x00049912) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00052703) popup_side_volume_key_window_g

0x6942,	// (0x0004992f) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005270a) popup_side_volume_key_window_t

0x0f36,	// (0x00043f23) popup_side_volume_key_window_ParamLimits

0x4f46,	// (0x00047f33) list_double_graphic_pane_g4_ParamLimits

0x4f46,	// (0x00047f33) list_double_graphic_pane_g4

0xa6a5,	// (0x0004d692) list_single_2heading_msg_pane_ParamLimits

0xa6a5,	// (0x0004d692) list_single_2heading_msg_pane

0x7aa9,	// (0x0004aa96) list_single_2heading_msg_pane_g1_ParamLimits

0x7aa9,	// (0x0004aa96) list_single_2heading_msg_pane_g1

0x1b33,	// (0x00044b20) list_single_2heading_msg_pane_g2_ParamLimits

0x1b33,	// (0x00044b20) list_single_2heading_msg_pane_g2

0x7ab5,	// (0x0004aaa2) list_single_2heading_msg_pane_g3_ParamLimits

0x7ab5,	// (0x0004aaa2) list_single_2heading_msg_pane_g3

0x7ac1,	// (0x0004aaae) list_single_2heading_msg_pane_g4_ParamLimits

0x7ac1,	// (0x0004aaae) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x00052c9c) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x00052c9c) list_single_2heading_msg_pane_g

0x5b73,	// (0x00048b60) list_single_2heading_msg_pane_t1_ParamLimits

0x5b73,	// (0x00048b60) list_single_2heading_msg_pane_t1

0x5b9b,	// (0x00048b88) list_single_2heading_msg_pane_t2_ParamLimits

0x5b9b,	// (0x00048b88) list_single_2heading_msg_pane_t2

0x5bca,	// (0x00048bb7) list_single_2heading_msg_pane_t3_ParamLimits

0x5bca,	// (0x00048bb7) list_single_2heading_msg_pane_t3

0x5c03,	// (0x00048bf0) list_single_2heading_msg_pane_t4_ParamLimits

0x5c03,	// (0x00048bf0) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x00052ca5) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x00052ca5) list_single_2heading_msg_pane_t

0xda02,	// (0x000509ef) title_pane_g4_ParamLimits

0xda02,	// (0x000509ef) title_pane_g4

0x6594,	// (0x00049581) title_pane_stacon_g3_ParamLimits

0x6594,	// (0x00049581) title_pane_stacon_g3

0xc339,	// (0x0004f326) list_single_2graphic_im_pane_g4_ParamLimits

0xc339,	// (0x0004f326) list_single_2graphic_im_pane_g4

0xa15f,	// (0x0004d14c) popup_side_volume_key_window_cp

0xa9cd,	// (0x0004d9ba) main_idle_act2_pane_t1

0x714c,	// (0x0004a139) toolbar_button_pane_g10

0x63e4,	// (0x000493d1) popup_toolbar_window_cp1

0xb1c4,	// (0x0004e1b1) clock_nsta_pane_cp_t1

0xb1c4,	// (0x0004e1b1) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x00052aac) clock_nsta_pane_cp_t

0x68fb,	// (0x000498e8) navi_navi_volume_pane_cp2_ParamLimits

0x690a,	// (0x000498f7) popup_side_volume_key_window_g1_ParamLimits

0x6916,	// (0x00049903) popup_side_volume_key_window_g2_ParamLimits

0x6925,	// (0x00049912) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00052703) popup_side_volume_key_window_g_ParamLimits

0x76af,	// (0x0004a69c) fep_hwr_aid_pane

0x2341,	// (0x0004532e) bg_fep_hwr_top_pane_g4_ParamLimits

0xb744,	// (0x0004e731) fep_hwr_top_pane_g1_ParamLimits

0xb756,	// (0x0004e743) fep_hwr_top_pane_g2_ParamLimits

0x776a,	// (0x0004a757) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00052b01) fep_hwr_top_pane_g_ParamLimits

0x777f,	// (0x0004a76c) fep_hwr_top_text_pane_ParamLimits

0x9f14,	// (0x0004cf01) aid_touch_tab_arrow_arrow_2

0x9f1d,	// (0x0004cf0a) aid_touch_tab_arrow_left_2

0x76c3,	// (0x0004a6b0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x76fa,	// (0x0004a6e7) fep_hwr_prediction_pane

0xb8ac,	// (0x0004e899) fep_vkb_prediction_pane

0xb9b2,	// (0x0004e99f) fep_vkb_side_pane_g3_ParamLimits

0xb9b2,	// (0x0004e99f) fep_vkb_side_pane_g3

0xb95e,	// (0x0004e94b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xbe2c,	// (0x0004ee19) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xbe39,	// (0x0004ee26) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbe,	// (0x00052bab) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc83f,	// (0x0004f82c) fep_hwr_prediction_pane_g1

0x7ad9,	// (0x0004aac6) fep_hwr_prediction_pane_g2

0x7ae1,	// (0x0004aace) fep_hwr_prediction_pane_g3

0x7ae9,	// (0x0004aad6) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x00052cae) fep_hwr_prediction_pane_g

0xc83f,	// (0x0004f82c) fep_vkb_prediction_pane_g1

0xc849,	// (0x0004f836) fep_vkb_prediction_pane_g2

0xc851,	// (0x0004f83e) fep_vkb_prediction_pane_g3

0xc859,	// (0x0004f846) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x00052cb7) fep_vkb_prediction_pane_g

0x7459,	// (0x0004a446) slider_set_pane_g3

0x746d,	// (0x0004a45a) slider_set_pane_g4

0x7485,	// (0x0004a472) slider_set_pane_g5

0x7459,	// (0x0004a446) slider_set_pane_g6

0x749b,	// (0x0004a488) slider_set_pane_g7

0xa5ed,	// (0x0004d5da) slider_form_pane_g3

0xa5f6,	// (0x0004d5e3) slider_form_pane_g4

0xa5fe,	// (0x0004d5eb) slider_form_pane_g5

0xa5ed,	// (0x0004d5da) slider_form_pane_g6

0xa606,	// (0x0004d5f3) slider_form_pane_g7

0xac84,	// (0x0004dc71) slider_set_pane_vc_g3

0xac8d,	// (0x0004dc7a) slider_set_pane_vc_g4

0xac96,	// (0x0004dc83) slider_set_pane_vc_g5

0xac84,	// (0x0004dc71) slider_set_pane_vc_g6

0xac9f,	// (0x0004dc8c) slider_set_pane_vc_g7

0xae77,	// (0x0004de64) slider_form_pane_vc_g1

0xae80,	// (0x0004de6d) slider_form_pane_vc_g2

0xae89,	// (0x0004de76) slider_form_pane_vc_g3

0xae77,	// (0x0004de64) slider_form_pane_vc_g4

0xae92,	// (0x0004de7f) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x00052a7e) slider_form_pane_vc_g

0xd9d8,	// (0x000509c5) main_idle_act3_pane

0xc861,	// (0x0004f84e) ai3_links_pane

0xc86a,	// (0x0004f857) popup_ai3_data_window_ParamLimits

0xc86a,	// (0x0004f857) popup_ai3_data_window

0xd9d8,	// (0x000509c5) grid_ai3_links_pane

0xc888,	// (0x0004f875) cell_ai3_links_pane_ParamLimits

0xc888,	// (0x0004f875) cell_ai3_links_pane

0xc8a2,	// (0x0004f88f) bg_popup_sub_pane_cp11

0xc8af,	// (0x0004f89c) cell_ai3_links_pane_g1

0xd9d8,	// (0x000509c5) bg_popup_sub_pane_cp12

0xc8d4,	// (0x0004f8c1) heading_ai3_data_pane

0xc8dc,	// (0x0004f8c9) list_ai3_gene_pane

0xc8e8,	// (0x0004f8d5) popup_ai3_data_window_g1

0xc8f0,	// (0x0004f8dd) heading_ai3_data_pane_g1

0xc8f8,	// (0x0004f8e5) heading_ai3_data_pane_t1

0xc906,	// (0x0004f8f3) list_double_ai3_gene_pane_ParamLimits

0xc906,	// (0x0004f8f3) list_double_ai3_gene_pane

0xc913,	// (0x0004f900) list_single_ai3_gene_pane_ParamLimits

0xc913,	// (0x0004f900) list_single_ai3_gene_pane

0xb6a8,	// (0x0004e695) list_highlight_pane_cp7_ParamLimits

0xb6a8,	// (0x0004e695) list_highlight_pane_cp7

0xc920,	// (0x0004f90d) list_single_a13_gene_pane_t1_ParamLimits

0xc920,	// (0x0004f90d) list_single_a13_gene_pane_t1

0xc937,	// (0x0004f924) list_single_ai3_gene_pane_g1

0xc940,	// (0x0004f92d) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x00052cc0) list_single_ai3_gene_pane_g

0xc948,	// (0x0004f935) list_double_ai3_gene_pane_g1_ParamLimits

0xc948,	// (0x0004f935) list_double_ai3_gene_pane_g1

0xc954,	// (0x0004f941) list_double_ai3_gene_pane_t1_ParamLimits

0xc954,	// (0x0004f941) list_double_ai3_gene_pane_t1

0xc970,	// (0x0004f95d) list_double_ai3_gene_pane_t2_ParamLimits

0xc970,	// (0x0004f95d) list_double_ai3_gene_pane_t2

0xc985,	// (0x0004f972) list_double_ai3_gene_pane_t3_ParamLimits

0xc985,	// (0x0004f972) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x00052cc5) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x00052cc5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5b69,	// (0x00048b56) aid_size_min_col_2

0xc829,	// (0x0004f816) aid_size_min_msg_ParamLimits

0xc829,	// (0x0004f816) aid_size_min_msg

0xbabe,	// (0x0004eaab) fep_vkb_top_text_pane_g2_ParamLimits

0xbabe,	// (0x0004eaab) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00052b31) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00052b31) fep_vkb_top_text_pane_g

0xd9d8,	// (0x000509c5) main_hc_apps_shell_pane

0xc9a2,	// (0x0004f98f) grid_hc_apps_pane_ParamLimits

0xc9a2,	// (0x0004f98f) grid_hc_apps_pane

0xc9b1,	// (0x0004f99e) list_hc_apps_pane

0xc9b9,	// (0x0004f9a6) scroll_pane_cp37_ParamLimits

0xc9b9,	// (0x0004f9a6) scroll_pane_cp37

0xc9c5,	// (0x0004f9b2) cell_hc_apps_pane_ParamLimits

0xc9c5,	// (0x0004f9b2) cell_hc_apps_pane

0xca7d,	// (0x0004fa6a) cell_hc_apps_pane_g1_ParamLimits

0xca7d,	// (0x0004fa6a) cell_hc_apps_pane_g1

0xcaae,	// (0x0004fa9b) cell_hc_apps_pane_g2_ParamLimits

0xcaae,	// (0x0004fa9b) cell_hc_apps_pane_g2

0xcaca,	// (0x0004fab7) cell_hc_apps_pane_g3_ParamLimits

0xcaca,	// (0x0004fab7) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x00052ccc) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x00052ccc) cell_hc_apps_pane_g

0xcaec,	// (0x0004fad9) cell_hc_apps_pane_t1_ParamLimits

0xcaec,	// (0x0004fad9) cell_hc_apps_pane_t1

0xdb87,	// (0x00050b74) grid_highlight_pane_cp10_ParamLimits

0xdb87,	// (0x00050b74) grid_highlight_pane_cp10

0xcb2c,	// (0x0004fb19) list_single_hc_apps_pane_ParamLimits

0xcb2c,	// (0x0004fb19) list_single_hc_apps_pane

0xcb6b,	// (0x0004fb58) list_single_hc_apps_pane_g1

0x7af1,	// (0x0004aade) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x00052cd3) list_single_hc_apps_pane_g

0x7b0a,	// (0x0004aaf7) list_single_hc_apps_pane_g2_copy1

0x5c28,	// (0x00048c15) list_single_hc_apps_pane_t1

0xda46,	// (0x00050a33) bg_set_opt_pane_cp_ParamLimits

0x6135,	// (0x00049122) setting_slider_pane_t1_ParamLimits

0x614e,	// (0x0004913b) setting_slider_pane_t2_ParamLimits

0x6168,	// (0x00049155) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005254b) setting_slider_pane_t_ParamLimits

0x6180,	// (0x0004916d) slider_set_pane_ParamLimits

0x6e4f,	// (0x00049e3c) control_pane_g5_ParamLimits

0x6e4f,	// (0x00049e3c) control_pane_g5

0xa41a,	// (0x0004d407) slider_set_pane_g1_ParamLimits

0x744d,	// (0x0004a43a) slider_set_pane_g2_ParamLimits

0x7459,	// (0x0004a446) slider_set_pane_g3_ParamLimits

0x746d,	// (0x0004a45a) slider_set_pane_g4_ParamLimits

0x7485,	// (0x0004a472) slider_set_pane_g5_ParamLimits

0x7459,	// (0x0004a446) slider_set_pane_g6_ParamLimits

0x749b,	// (0x0004a488) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00052956) slider_set_pane_g_ParamLimits

0x0fde,	// (0x00043fcb) navi_icon_text_pane_ParamLimits

0x8bab,	// (0x0004bb98) aid_fill_nsta_2_ParamLimits

0x8bec,	// (0x0004bbd9) aid_touch_tab_arrow_left_ParamLimits

0x8bfb,	// (0x0004bbe8) aid_touch_tab_arrow_right_ParamLimits

0x8c68,	// (0x0004bc55) clock_nsta_pane_ParamLimits

0x9ef6,	// (0x0004cee3) navi_icon_pane_g1_ParamLimits

0x9f02,	// (0x0004ceef) navi_text_pane_t1_ParamLimits

0xb2e1,	// (0x0004e2ce) navi_icon_text_pane_g1_ParamLimits

0xb2ed,	// (0x0004e2da) navi_icon_text_pane_t1_ParamLimits

0xcb6b,	// (0x0004fb58) list_single_hc_apps_pane_g1_ParamLimits

0x7af1,	// (0x0004aade) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x00052cd3) list_single_hc_apps_pane_g_ParamLimits

0x7b0a,	// (0x0004aaf7) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5c28,	// (0x00048c15) list_single_hc_apps_pane_t1_ParamLimits

0x5f7d,	// (0x00048f6a) popup_toolbar2_fixed_window_ParamLimits

0x5f7d,	// (0x00048f6a) popup_toolbar2_fixed_window

0x8aaf,	// (0x0004ba9c) popup_toolbar2_float_window

0xd9d8,	// (0x000509c5) bg_popup_sub_pane_cp27

0xcb84,	// (0x0004fb71) grid_toolbar2_float_pane

0xd9d8,	// (0x000509c5) bg_popup_sub_pane_cp26

0xcb84,	// (0x0004fb71) grid_toolbar2_fixed_pane

0xcb8c,	// (0x0004fb79) cell_toolbar2_fixed_pane_ParamLimits

0xcb8c,	// (0x0004fb79) cell_toolbar2_fixed_pane

0xcb9c,	// (0x0004fb89) cell_toolbar2_fixed_pane_g1

0xcba5,	// (0x0004fb92) toolbar2_fixed_button_pane

0x909f,	// (0x0004c08c) toolbar2_fixed_button_pane_g1

0x90a7,	// (0x0004c094) toolbar2_fixed_button_pane_g2

0x90af,	// (0x0004c09c) toolbar2_fixed_button_pane_g3

0x90b7,	// (0x0004c0a4) toolbar2_fixed_button_pane_g4

0x90bf,	// (0x0004c0ac) toolbar2_fixed_button_pane_g5

0x90c7,	// (0x0004c0b4) toolbar2_fixed_button_pane_g6

0x90cf,	// (0x0004c0bc) toolbar2_fixed_button_pane_g7

0x90d7,	// (0x0004c0c4) toolbar2_fixed_button_pane_g8

0x90df,	// (0x0004c0cc) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00052858) toolbar2_fixed_button_pane_g

0xcbad,	// (0x0004fb9a) cell_toolbar2_float_pane_ParamLimits

0xcbad,	// (0x0004fb9a) cell_toolbar2_float_pane

0xcbbe,	// (0x0004fbab) cell_toolbar2_float_pane_g1

0xcba5,	// (0x0004fb92) toolbar2_fixed_button_pane_cp

0xb81a,	// (0x0004e807) fep_vkb_accented_list_pane_ParamLimits

0xb81a,	// (0x0004e807) fep_vkb_accented_list_pane

0x78e1,	// (0x0004a8ce) bg_popup_fep_shadow_pane_g9

0x41a9,	// (0x00047196) bg_popup_fep_shadow_pane_cp3

0x08fc,	// (0x000438e9) list_accented_list_pane

0xcbc7,	// (0x0004fbb4) list_single_accented_list_pane_ParamLimits

0xcbc7,	// (0x0004fbb4) list_single_accented_list_pane

0x41a9,	// (0x00047196) list_highlight_pane_cp10

0xcbd8,	// (0x0004fbc5) list_single_accented_list_pane_t1

0x89f5,	// (0x0004b9e2) popup_slider_window_ParamLimits

0x89f5,	// (0x0004b9e2) popup_slider_window

0xc820,	// (0x0004f80d) aid_indentation_list_msg

0xcca4,	// (0x0004fc91) bg_popup_window_pane_cp19

0xcd12,	// (0x0004fcff) popup_slider_window_g1

0xcd2e,	// (0x0004fd1b) popup_slider_window_g2

0xcd4a,	// (0x0004fd37) popup_slider_window_g3

0x0005,

0xfceb,	// (0x00052cd8) popup_slider_window_g

0xcda6,	// (0x0004fd93) popup_slider_window_t1

0xce1a,	// (0x0004fe07) small_volume_slider_vertical_pane

0xb6e3,	// (0x0004e6d0) small_volume_slider_vertical_pane_g1

0xb6e3,	// (0x0004e6d0) small_volume_slider_vertical_pane_g2

0xce36,	// (0x0004fe23) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x00052cea) small_volume_slider_vertical_pane_g

0x5d35,	// (0x00048d22) area_side_right_pane_ParamLimits

0x5d35,	// (0x00048d22) area_side_right_pane

0x7b26,	// (0x0004ab13) aid_size_side_button_ParamLimits

0x7b26,	// (0x0004ab13) aid_size_side_button

0x7b3a,	// (0x0004ab27) grid_sctrl_middle_pane_ParamLimits

0x7b3a,	// (0x0004ab27) grid_sctrl_middle_pane

0x7b5a,	// (0x0004ab47) sctrl_sk_bottom_pane

0x7b6b,	// (0x0004ab58) sctrl_sk_top_pane

0x7b7d,	// (0x0004ab6a) aid_touch_sctrl_top

0xdb87,	// (0x00050b74) bg_sctrl_sk_pane_ParamLimits

0xdb87,	// (0x00050b74) bg_sctrl_sk_pane

0x7b8a,	// (0x0004ab77) sctrl_sk_top_pane_g1

0x7b97,	// (0x0004ab84) sctrl_sk_top_pane_t1

0x7b7d,	// (0x0004ab6a) aid_touch_sctrl_bottom

0xdb87,	// (0x00050b74) bg_sctrl_sk_pane_cp_ParamLimits

0xdb87,	// (0x00050b74) bg_sctrl_sk_pane_cp

0x7bb2,	// (0x0004ab9f) sctrl_sk_bottom_pane_g1

0x7b97,	// (0x0004ab84) sctrl_sk_bottom_pane_t1

0x7bbb,	// (0x0004aba8) cell_sctrl_middle_pane_ParamLimits

0x7bbb,	// (0x0004aba8) cell_sctrl_middle_pane

0x7bd8,	// (0x0004abc5) aid_touch_sctrl_middle_ParamLimits

0x7bd8,	// (0x0004abc5) aid_touch_sctrl_middle

0x07e9,	// (0x000437d6) bg_sctrl_middle_pane_ParamLimits

0x07e9,	// (0x000437d6) bg_sctrl_middle_pane

0xb95e,	// (0x0004e94b) cell_sctrl_middle_pane_g1_ParamLimits

0xb95e,	// (0x0004e94b) cell_sctrl_middle_pane_g1

0x7bea,	// (0x0004abd7) cell_sctrl_middle_pane_g2_ParamLimits

0x7bea,	// (0x0004abd7) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x00052cf6) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x00052cf6) cell_sctrl_middle_pane_g

0x909f,	// (0x0004c08c) bg_sctrl_middle_pane_g1

0x90a7,	// (0x0004c094) bg_sctrl_middle_pane_g2

0x90af,	// (0x0004c09c) bg_sctrl_middle_pane_g3

0x90b7,	// (0x0004c0a4) bg_sctrl_middle_pane_g4

0x90bf,	// (0x0004c0ac) bg_sctrl_middle_pane_g5

0x90c7,	// (0x0004c0b4) bg_sctrl_middle_pane_g6

0x90cf,	// (0x0004c0bc) bg_sctrl_middle_pane_g7

0x90d7,	// (0x0004c0c4) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x00052cfb) bg_sctrl_middle_pane_g

0x90df,	// (0x0004c0cc) bg_sctrl_middle_pane_g8_copy1

0x909f,	// (0x0004c08c) bg_sctrl_sk_pane_g1

0x90a7,	// (0x0004c094) bg_sctrl_sk_pane_g2

0x90af,	// (0x0004c09c) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00052858) bg_sctrl_sk_pane_g

0xdfa2,	// (0x00050f8f) aid_size_touch_scroll_bar

0x90b7,	// (0x0004c0a4) bg_sctrl_sk_pane_g4

0x90bf,	// (0x0004c0ac) bg_sctrl_sk_pane_g5

0x90c7,	// (0x0004c0b4) bg_sctrl_sk_pane_g6

0x90cf,	// (0x0004c0bc) bg_sctrl_sk_pane_g7

0x90d7,	// (0x0004c0c4) bg_sctrl_sk_pane_g8

0x90df,	// (0x0004c0cc) bg_sctrl_sk_pane_g9

0x7090,	// (0x0004a07d) popup_fep_china_hwr2_fs_candidate_window

0x709a,	// (0x0004a087) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x709a,	// (0x0004a087) popup_fep_china_hwr2_fs_control_window

0xb95e,	// (0x0004e94b) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x00052cf1) sctrl_sk_top_pane_g

0xce3f,	// (0x0004fe2c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xce3f,	// (0x0004fe2c) aid_fep_china_hwr2_fs_cell

0xce52,	// (0x0004fe3f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xce52,	// (0x0004fe3f) bg_popup_fep_shadow_pane_cp4

0xce6b,	// (0x0004fe58) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xce6b,	// (0x0004fe58) bg_popup_fep_shadow_pane_cp5

0xce7d,	// (0x0004fe6a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xce7d,	// (0x0004fe6a) popup_fep_china_hwr2_fs_control_bar_grid

0xce8d,	// (0x0004fe7a) popup_fep_china_hwr2_fs_control_funtion_grid

0xce95,	// (0x0004fe82) aid_fep_china_hwr2_fs_candi_cell

0xd9d8,	// (0x000509c5) bg_popup_fep_shadow_pane_cp6

0xce9f,	// (0x0004fe8c) popup_fep_china_hwr2_fs_candidate_grid

0xcea9,	// (0x0004fe96) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcea9,	// (0x0004fe96) cell_fep_china_hwr2_fs_funtion_grid

0xb6e3,	// (0x0004e6d0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcec1,	// (0x0004feae) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcec1,	// (0x0004feae) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcecf,	// (0x0004febc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcecf,	// (0x0004febc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x00052d0c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x00052d0c) cell_fep_china_hwr2_fs_funtion_grid_g

0xcee5,	// (0x0004fed2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcee5,	// (0x0004fed2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcefa,	// (0x0004fee7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcefa,	// (0x0004fee7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x00052d11) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x00052d11) cell_fep_china_hwr2_fs_funtion_grid_t

0xcf16,	// (0x0004ff03) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcf1e,	// (0x0004ff0b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcf26,	// (0x0004ff13) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x00052d16) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcf2e,	// (0x0004ff1b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcf2e,	// (0x0004ff1b) cell_fep_china_hwr2_fs_candidate_grid

0xcf4d,	// (0x0004ff3a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcf55,	// (0x0004ff42) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb6e3,	// (0x0004e6d0) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb6e3,	// (0x0004e6d0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x00052b36) cell_fep_china_hwr2_fs_candidate_grid_g

0xcf5d,	// (0x0004ff4a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8c7b,	// (0x0004bc68) clock_nsta_pane_cp_24_ParamLimits

0x8c7b,	// (0x0004bc68) clock_nsta_pane_cp_24

0x8cfb,	// (0x0004bce8) indicator_nsta_pane_cp_24_ParamLimits

0x8cfb,	// (0x0004bce8) indicator_nsta_pane_cp_24

0x9d72,	// (0x0004cd5f) heading_pane_g1

0x0001,

0xf8d0,	// (0x000528bd) heading_pane_g

0xa814,	// (0x0004d801) grid_sct_catagory_button_pane

0xa846,	// (0x0004d833) scroll_pane_cp5_ParamLimits

0xb32f,	// (0x0004e31c) button_value_adjust_pane_cp5_ParamLimits

0xb32f,	// (0x0004e31c) button_value_adjust_pane_cp5

0xb414,	// (0x0004e401) form2_midp_time_pane_ParamLimits

0xcf6b,	// (0x0004ff58) cell_sct_catagory_button_pane_ParamLimits

0xcf6b,	// (0x0004ff58) cell_sct_catagory_button_pane

0xb6a8,	// (0x0004e695) bg_button_pane_cp01_ParamLimits

0xb6a8,	// (0x0004e695) bg_button_pane_cp01

0xb6e3,	// (0x0004e6d0) cell_sct_catagory_button_pane_g1

0x8a36,	// (0x0004ba23) popup_tb_extension_window

0xcf7d,	// (0x0004ff6a) aid_size_cell_ext_ParamLimits

0xcf7d,	// (0x0004ff6a) aid_size_cell_ext

0xdb87,	// (0x00050b74) bg_tb_trans_pane_cp1_ParamLimits

0xdb87,	// (0x00050b74) bg_tb_trans_pane_cp1

0xcf9d,	// (0x0004ff8a) grid_tb_ext_pane_ParamLimits

0xcf9d,	// (0x0004ff8a) grid_tb_ext_pane

0xcfcd,	// (0x0004ffba) cell_tb_ext_pane_ParamLimits

0xcfcd,	// (0x0004ffba) cell_tb_ext_pane

0xcfe4,	// (0x0004ffd1) cell_tb_ext_pane_g1_ParamLimits

0xcfe4,	// (0x0004ffd1) cell_tb_ext_pane_g1

0xd001,	// (0x0004ffee) cell_tb_ext_pane_t1

0xdb87,	// (0x00050b74) list_highlight_pane_cp11_ParamLimits

0xdb87,	// (0x00050b74) list_highlight_pane_cp11

0x5f9c,	// (0x00048f89) popup_uni_indicator_window_ParamLimits

0x5f9c,	// (0x00048f89) popup_uni_indicator_window

0x07e9,	// (0x000437d6) bg_popup_sub_pane_cp14

0xd01c,	// (0x00050009) list_uniindi_pane

0xd028,	// (0x00050015) uniindi_top_pane

0xdb87,	// (0x00050b74) bg_uniindi_top_pane

0xd049,	// (0x00050036) uniindi_top_pane_g1

0xd05f,	// (0x0005004c) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x00052d1d) uniindi_top_pane_g

0xd089,	// (0x00050076) uniindi_top_pane_t1

0xd0b5,	// (0x000500a2) list_single_uniindi_pane_ParamLimits

0xd0b5,	// (0x000500a2) list_single_uniindi_pane

0xb6e3,	// (0x0004e6d0) bg_uniindi_top_pane_g1

0xd0c7,	// (0x000500b4) list_single_uniindi_pane_g1

0xd0da,	// (0x000500c7) list_single_uniindi_pane_t1

0xd9d8,	// (0x000509c5) control_bg_pane

0xd0ff,	// (0x000500ec) bg_sctrl_sk_pane_cp1

0xd108,	// (0x000500f5) bg_sctrl_sk_pane_cp2

0xd111,	// (0x000500fe) control_bg_pane_g1

0xd11a,	// (0x00050107) control_bg_pane_g2

0x0001,

0xfd39,	// (0x00052d26) control_bg_pane_g

0xb156,	// (0x0004e143) cell_indicator_nsta_pane_g1_ParamLimits

0xb164,	// (0x0004e151) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00052a9a) cell_indicator_nsta_pane_g_ParamLimits

0x59ca,	// (0x000489b7) form2_midp_time_pane_t1_ParamLimits

0xdde4,	// (0x00050dd1) main_idle_act4_pane_ParamLimits

0xdde4,	// (0x00050dd1) main_idle_act4_pane

0x8a36,	// (0x0004ba23) popup_tb_extension_window_ParamLimits

0xcfbf,	// (0x0004ffac) tb_ext_find_pane_ParamLimits

0xcfbf,	// (0x0004ffac) tb_ext_find_pane

0xd123,	// (0x00050110) ai_gene_pane_1_cp1

0x422f,	// (0x0004721c) ai_gene_pane_2_cp1

0xd12b,	// (0x00050118) list_single_idle_plugin_calendar_pane

0xd134,	// (0x00050121) list_single_idle_plugin_notification_pane

0xd13d,	// (0x0005012a) list_single_idle_plugin_player_pane

0xd146,	// (0x00050133) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd146,	// (0x00050133) list_single_idle_plugin_shortcut_pane

0xd168,	// (0x00050155) main_idle_act4_pane_t1

0xd17a,	// (0x00050167) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x00052d2b) main_idle_act4_pane_t

0xd18c,	// (0x00050179) middle_sk_idle_act4_pane_ParamLimits

0xd18c,	// (0x00050179) middle_sk_idle_act4_pane

0xd1a2,	// (0x0005018f) popup_clock_digital_analogue_window_cp2

0xd1bc,	// (0x000501a9) shortcut_wheel_idle_act4_pane_ParamLimits

0xd1bc,	// (0x000501a9) shortcut_wheel_idle_act4_pane

0xb6e3,	// (0x0004e6d0) shortcut_wheel_idle_act4_pane_g1

0xb6e3,	// (0x0004e6d0) shortcut_wheel_idle_act4_pane_g2

0xb6e3,	// (0x0004e6d0) shortcut_wheel_idle_act4_pane_g3

0xb6e3,	// (0x0004e6d0) shortcut_wheel_idle_act4_pane_g4

0xb6e3,	// (0x0004e6d0) shortcut_wheel_idle_act4_pane_g5

0xd1d0,	// (0x000501bd) shortcut_wheel_idle_act4_pane_g6

0xd1d8,	// (0x000501c5) shortcut_wheel_idle_act4_pane_g7

0xd1e0,	// (0x000501cd) shortcut_wheel_idle_act4_pane_g8

0xd1e8,	// (0x000501d5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x00052d30) shortcut_wheel_idle_act4_pane_g

0xb95e,	// (0x0004e94b) middle_sk_idle_act4_pane_g1_ParamLimits

0xb95e,	// (0x0004e94b) middle_sk_idle_act4_pane_g1

0xd24c,	// (0x00050239) middle_sk_idle_act4_pane_g2_ParamLimits

0xd24c,	// (0x00050239) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x00052d53) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x00052d53) middle_sk_idle_act4_pane_g

0xd258,	// (0x00050245) middle_sk_idle_act4_pane_t1_ParamLimits

0xd258,	// (0x00050245) middle_sk_idle_act4_pane_t1

0xd275,	// (0x00050262) grid_ai_shortcut_pane_ParamLimits

0xd275,	// (0x00050262) grid_ai_shortcut_pane

0xd28e,	// (0x0005027b) list_highlight_pane_cp16_ParamLimits

0xd28e,	// (0x0005027b) list_highlight_pane_cp16

0xd29b,	// (0x00050288) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd29b,	// (0x00050288) list_single_idle_plugin_shortcut_pane_g1

0xd2a7,	// (0x00050294) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd2a7,	// (0x00050294) list_single_idle_plugin_shortcut_pane_g2

0xd2c1,	// (0x000502ae) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd2c1,	// (0x000502ae) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x00052d58) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x00052d58) list_single_idle_plugin_shortcut_pane_g

0xd2d4,	// (0x000502c1) cell_ai_shortcut_pane_ParamLimits

0xd2d4,	// (0x000502c1) cell_ai_shortcut_pane

0xd2f7,	// (0x000502e4) cell_ai_shortcut_pane_g1_ParamLimits

0xd2f7,	// (0x000502e4) cell_ai_shortcut_pane_g1

0xd123,	// (0x00050110) ai_gene_pane_1_cp2

0xd319,	// (0x00050306) ai_gene_pane_2_cp2

0xd321,	// (0x0005030e) list_highlight_pane_cp15

0xd32a,	// (0x00050317) list_single_idle_plugin_calendar_pane_g1

0xd321,	// (0x0005030e) list_highlight_pane_cp17

0xd332,	// (0x0005031f) list_single_idle_plugin_calendar_pane_g1_copy1

0xd33a,	// (0x00050327) list_single_idle_plugin_player_pane_g1

0xaa7b,	// (0x0004da68) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x00052d5f) list_single_idle_plugin_player_pane_g

0xd342,	// (0x0005032f) list_single_idle_plugin_player_pane_t1

0xd350,	// (0x0005033d) list_single_idle_plugin_player_pane_t2

0xd35e,	// (0x0005034b) list_single_idle_plugin_player_pane_t3

0xd36c,	// (0x00050359) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x00052d64) list_single_idle_plugin_player_pane_t

0xd37a,	// (0x00050367) wait_bar_pane_cp15

0xd382,	// (0x0005036f) grid_ai_notification_pane

0xaa7b,	// (0x0004da68) list_single_idle_plugin_notification_pane_g1

0xd38b,	// (0x00050378) cell_ai_notification_pane_ParamLimits

0xd38b,	// (0x00050378) cell_ai_notification_pane

0xd398,	// (0x00050385) cell_ai_notification_pane_g1

0xd3a0,	// (0x0005038d) cell_ai_notification_pane_t1

0xd3ae,	// (0x0005039b) tb_ext_find_button_pane

0xd3b6,	// (0x000503a3) tb_ext_find_pane_g1

0xd3be,	// (0x000503ab) tb_ext_find_pane_t1

0x0ccb,	// (0x00043cb8) tb_ext_find_button_pane_g1

0xd3cc,	// (0x000503b9) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x00052d6d) tb_ext_find_button_pane_g

0xd168,	// (0x00050155) main_idle_act4_pane_t1_ParamLimits

0xd17a,	// (0x00050167) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x00052d2b) main_idle_act4_pane_t_ParamLimits

0xd1a2,	// (0x0005018f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd1b0,	// (0x0005019d) sat_plugin_idle_act4_pane_ParamLimits

0xd1b0,	// (0x0005019d) sat_plugin_idle_act4_pane

0xd3d5,	// (0x000503c2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd3d5,	// (0x000503c2) sat_plugin_idle_act4_pane_t1

0xd3e8,	// (0x000503d5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd3e8,	// (0x000503d5) sat_plugin_idle_act4_pane_t2

0xd3fb,	// (0x000503e8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd3fb,	// (0x000503e8) sat_plugin_idle_act4_pane_t3

0xd40e,	// (0x000503fb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd40e,	// (0x000503fb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x00052d72) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x00052d72) sat_plugin_idle_act4_pane_t

0x5ecd,	// (0x00048eba) popup_battery_window_ParamLimits

0x5ecd,	// (0x00048eba) popup_battery_window

0xdb87,	// (0x00050b74) bg_popup_sub_pane_cp25_ParamLimits

0xdb87,	// (0x00050b74) bg_popup_sub_pane_cp25

0xd421,	// (0x0005040e) popup_battery_window_g1_ParamLimits

0xd421,	// (0x0005040e) popup_battery_window_g1

0xd42d,	// (0x0005041a) popup_battery_window_t1_ParamLimits

0xd42d,	// (0x0005041a) popup_battery_window_t1

0xd43f,	// (0x0005042c) popup_battery_window_t2_ParamLimits

0xd43f,	// (0x0005042c) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x00052d7b) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x00052d7b) popup_battery_window_t

0x6bdc,	// (0x00049bc9) midp_canvas_pane_ParamLimits

0x6c3e,	// (0x00049c2b) midp_keypad_pane_ParamLimits

0x6c3e,	// (0x00049c2b) midp_keypad_pane

0x6fe2,	// (0x00049fcf) main_midp_pane_ParamLimits

0xb1e2,	// (0x0004e1cf) signal_pane_g2_cp_ParamLimits

0xd45c,	// (0x00050449) aid_size_cell_midp_keypad_ParamLimits

0xd45c,	// (0x00050449) aid_size_cell_midp_keypad

0xd476,	// (0x00050463) midp_keyp_game_grid_pane_ParamLimits

0xd476,	// (0x00050463) midp_keyp_game_grid_pane

0xd496,	// (0x00050483) midp_keyp_rocker_pane_ParamLimits

0xd496,	// (0x00050483) midp_keyp_rocker_pane

0xd4c1,	// (0x000504ae) midp_keyp_sk_left_pane_ParamLimits

0xd4c1,	// (0x000504ae) midp_keyp_sk_left_pane

0xd51b,	// (0x00050508) midp_keyp_sk_right_pane_ParamLimits

0xd51b,	// (0x00050508) midp_keyp_sk_right_pane

0xd9d8,	// (0x000509c5) bg_button_pane_cp03

0xd575,	// (0x00050562) midp_keyp_sk_left_pane_g1

0xd9d8,	// (0x000509c5) bg_button_pane_cp04

0xd575,	// (0x00050562) midp_keyp_sk_right_pane_g1

0xb6e3,	// (0x0004e6d0) midp_keyp_rocker_pane_g1

0xd57e,	// (0x0005056b) keyp_game_cell_pane_ParamLimits

0xd57e,	// (0x0005056b) keyp_game_cell_pane

0xd9d8,	// (0x000509c5) bg_button_pane_cp02

0xd591,	// (0x0005057e) keyp_game_cell_pane_g1

0x5f17,	// (0x00048f04) popup_fep_vkb2_window_ParamLimits

0x5f17,	// (0x00048f04) popup_fep_vkb2_window

0x7c08,	// (0x0004abf5) aid_size_cell_vkb2_ParamLimits

0x7c08,	// (0x0004abf5) aid_size_cell_vkb2

0x7c5c,	// (0x0004ac49) popup_fep_vkb2_window_g1_ParamLimits

0x7c5c,	// (0x0004ac49) popup_fep_vkb2_window_g1

0x7ca4,	// (0x0004ac91) vkb2_area_bottom_pane_ParamLimits

0x7ca4,	// (0x0004ac91) vkb2_area_bottom_pane

0x7cf8,	// (0x0004ace5) vkb2_area_keypad_pane_ParamLimits

0x7cf8,	// (0x0004ace5) vkb2_area_keypad_pane

0x7d3e,	// (0x0004ad2b) vkb2_area_top_pane_ParamLimits

0x7d3e,	// (0x0004ad2b) vkb2_area_top_pane

0x7db8,	// (0x0004ada5) vkb2_top_entry_pane_ParamLimits

0x7db8,	// (0x0004ada5) vkb2_top_entry_pane

0x7de2,	// (0x0004adcf) vkb2_top_grid_left_pane_ParamLimits

0x7de2,	// (0x0004adcf) vkb2_top_grid_left_pane

0x7e00,	// (0x0004aded) vkb2_top_grid_right_pane_ParamLimits

0x7e00,	// (0x0004aded) vkb2_top_grid_right_pane

0x7e1e,	// (0x0004ae0b) vkb2_cell_keypad_pane_ParamLimits

0x7e1e,	// (0x0004ae0b) vkb2_cell_keypad_pane

0x7eef,	// (0x0004aedc) vkb2_area_bottom_grid_pane_ParamLimits

0x7eef,	// (0x0004aedc) vkb2_area_bottom_grid_pane

0x7f15,	// (0x0004af02) vkb2_area_bottom_pane_g1_ParamLimits

0x7f15,	// (0x0004af02) vkb2_area_bottom_pane_g1

0x7f39,	// (0x0004af26) vkb2_area_bottom_pane_g2_ParamLimits

0x7f39,	// (0x0004af26) vkb2_area_bottom_pane_g2

0x7f67,	// (0x0004af54) vkb2_area_bottom_pane_g3_ParamLimits

0x7f67,	// (0x0004af54) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x00052d80) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x00052d80) vkb2_area_bottom_pane_g

0x7fc8,	// (0x0004afb5) vkb2_top_cell_left_pane_ParamLimits

0x7fc8,	// (0x0004afb5) vkb2_top_cell_left_pane

0xd5a2,	// (0x0005058f) vkb2_top_entry_pane_g1_ParamLimits

0xd5a2,	// (0x0005058f) vkb2_top_entry_pane_g1

0xd5b0,	// (0x0005059d) vkb2_top_entry_pane_t1_ParamLimits

0xd5b0,	// (0x0005059d) vkb2_top_entry_pane_t1

0xd5e2,	// (0x000505cf) vkb2_top_entry_pane_t2_ParamLimits

0xd5e2,	// (0x000505cf) vkb2_top_entry_pane_t2

0xd614,	// (0x00050601) vkb2_top_entry_pane_t3_ParamLimits

0xd614,	// (0x00050601) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x00052d87) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x00052d87) vkb2_top_entry_pane_t

0x8015,	// (0x0004b002) vkb2_top_grid_right_pane_g1_ParamLimits

0x8015,	// (0x0004b002) vkb2_top_grid_right_pane_g1

0x802b,	// (0x0004b018) vkb2_top_grid_right_pane_g2_ParamLimits

0x802b,	// (0x0004b018) vkb2_top_grid_right_pane_g2

0x8043,	// (0x0004b030) vkb2_top_grid_right_pane_g3_ParamLimits

0x8043,	// (0x0004b030) vkb2_top_grid_right_pane_g3

0x805b,	// (0x0004b048) vkb2_top_grid_right_pane_g4_ParamLimits

0x805b,	// (0x0004b048) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x00052d8e) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x00052d8e) vkb2_top_grid_right_pane_g

0x8071,	// (0x0004b05e) vkb2_top_cell_left_pane_g1

0x8088,	// (0x0004b075) vkb2_cell_keypad_pane_g1_ParamLimits

0x8088,	// (0x0004b075) vkb2_cell_keypad_pane_g1

0xd638,	// (0x00050625) vkb2_cell_keypad_pane_t1_ParamLimits

0xd638,	// (0x00050625) vkb2_cell_keypad_pane_t1

0x8096,	// (0x0004b083) vkb2_cell_bottom_grid_pane_ParamLimits

0x8096,	// (0x0004b083) vkb2_cell_bottom_grid_pane

0x80cf,	// (0x0004b0bc) vkb2_cell_bottom_grid_pane_g1

0xd1f0,	// (0x000501dd) aid_call2_pane_cp02

0xd1f8,	// (0x000501e5) aid_call_pane_cp02

0xd200,	// (0x000501ed) clock_digital_number_pane_cp10

0xd208,	// (0x000501f5) clock_digital_number_pane_cp11

0xd210,	// (0x000501fd) clock_digital_number_pane_cp12

0xd218,	// (0x00050205) clock_digital_number_pane_cp13

0xd220,	// (0x0005020d) clock_digital_separator_pane_cp10

0x0ccb,	// (0x00043cb8) popup_clock_digital_analogue_window_cp2_g1

0x0ccb,	// (0x00043cb8) popup_clock_digital_analogue_window_cp2_g2

0xd228,	// (0x00050215) popup_clock_digital_analogue_window_cp2_g3

0x0ccb,	// (0x00043cb8) popup_clock_digital_analogue_window_cp2_g4

0xd228,	// (0x00050215) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x00052d43) popup_clock_digital_analogue_window_cp2_g

0xd230,	// (0x0005021d) popup_clock_digital_analogue_window_cp2_t1

0xd23e,	// (0x0005022b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x00052d4e) popup_clock_digital_analogue_window_cp2_t

0xb6e3,	// (0x0004e6d0) clock_digital_number_pane_cp10_g1

0xb6e3,	// (0x0004e6d0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x00052b36) clock_digital_number_pane_cp10_g

0xb6e3,	// (0x0004e6d0) clock_digital_separator_pane_cp10_g1

0xb6e3,	// (0x0004e6d0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x00052b36) clock_digital_separator_pane_cp10_g

0xd06b,	// (0x00050058) uniindi_top_pane_g3

0xd07c,	// (0x00050069) uniindi_top_pane_g4

0x7ea9,	// (0x0004ae96) vkb2_row_keypad_pane_ParamLimits

0x7ea9,	// (0x0004ae96) vkb2_row_keypad_pane

0x80eb,	// (0x0004b0d8) vkb2_cell_t_keypad_pane_ParamLimits

0x80eb,	// (0x0004b0d8) vkb2_cell_t_keypad_pane

0x80fb,	// (0x0004b0e8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x80fb,	// (0x0004b0e8) vkb2_cell_t_keypad_pane_cp08

0x8110,	// (0x0004b0fd) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8110,	// (0x0004b0fd) vkb2_cell_t_keypad_pane_cp09

0x8124,	// (0x0004b111) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8124,	// (0x0004b111) vkb2_cell_t_keypad_pane_cp01

0x8135,	// (0x0004b122) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8135,	// (0x0004b122) vkb2_cell_t_keypad_pane_cp02

0x8146,	// (0x0004b133) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8146,	// (0x0004b133) vkb2_cell_t_keypad_pane_cp03

0x8157,	// (0x0004b144) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8157,	// (0x0004b144) vkb2_cell_t_keypad_pane_cp04

0x8168,	// (0x0004b155) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8168,	// (0x0004b155) vkb2_cell_t_keypad_pane_cp05

0x8179,	// (0x0004b166) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8179,	// (0x0004b166) vkb2_cell_t_keypad_pane_cp06

0x818c,	// (0x0004b179) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x818c,	// (0x0004b179) vkb2_cell_t_keypad_pane_cp07

0x81a1,	// (0x0004b18e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x81a1,	// (0x0004b18e) vkb2_cell_t_keypad_pane_cp10

0xb95e,	// (0x0004e94b) vkb2_cell_t_keypad_pane_g1

0xd64f,	// (0x0005063c) vkb2_cell_t_keypad_pane_t1

0xd9d8,	// (0x000509c5) popup_grid_graphic2_window

0xd661,	// (0x0005064e) aid_size_cell_graphic2_ParamLimits

0xd661,	// (0x0005064e) aid_size_cell_graphic2

0xd699,	// (0x00050686) bg_popup_window_pane_cp21_ParamLimits

0xd699,	// (0x00050686) bg_popup_window_pane_cp21

0xd6a7,	// (0x00050694) graphic2_pages_pane_ParamLimits

0xd6a7,	// (0x00050694) graphic2_pages_pane

0xd6ed,	// (0x000506da) grid_graphic2_control_pane_ParamLimits

0xd6ed,	// (0x000506da) grid_graphic2_control_pane

0xd72b,	// (0x00050718) grid_graphic2_pane_ParamLimits

0xd72b,	// (0x00050718) grid_graphic2_pane

0xd7a1,	// (0x0005078e) cell_graphic2_pane

0xd9d8,	// (0x000509c5) main_comp_mode_pane

0xc8dc,	// (0x0004f8c9) list_ai3_gene_pane_ParamLimits

0xcca4,	// (0x0004fc91) bg_popup_window_pane_cp19_ParamLimits

0xccb0,	// (0x0004fc9d) bg_touch_area_indi_pane_ParamLimits

0xccb0,	// (0x0004fc9d) bg_touch_area_indi_pane

0xccc6,	// (0x0004fcb3) bg_touch_area_indi_pane_cp01_ParamLimits

0xccc6,	// (0x0004fcb3) bg_touch_area_indi_pane_cp01

0xccde,	// (0x0004fccb) bg_touch_area_indi_pane_cp02_ParamLimits

0xccde,	// (0x0004fccb) bg_touch_area_indi_pane_cp02

0xccf8,	// (0x0004fce5) bg_touch_area_indi_pane_cp03_ParamLimits

0xccf8,	// (0x0004fce5) bg_touch_area_indi_pane_cp03

0xcd12,	// (0x0004fcff) popup_slider_window_g1_ParamLimits

0xcd2e,	// (0x0004fd1b) popup_slider_window_g2_ParamLimits

0xcd4a,	// (0x0004fd37) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x00052cd8) popup_slider_window_g_ParamLimits

0xcda6,	// (0x0004fd93) popup_slider_window_t1_ParamLimits

0xce1a,	// (0x0004fe07) small_volume_slider_vertical_pane_ParamLimits

0xd7a1,	// (0x0005078e) cell_graphic2_pane_ParamLimits

0xd7f3,	// (0x000507e0) bg_button_pane_cp10_ParamLimits

0xd7f3,	// (0x000507e0) bg_button_pane_cp10

0xd808,	// (0x000507f5) bg_button_pane_cp11_ParamLimits

0xd808,	// (0x000507f5) bg_button_pane_cp11

0xd81d,	// (0x0005080a) graphic2_pages_pane_g1_ParamLimits

0xd81d,	// (0x0005080a) graphic2_pages_pane_g1

0xd838,	// (0x00050825) graphic2_pages_pane_g2_ParamLimits

0xd838,	// (0x00050825) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x00052d9c) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x00052d9c) graphic2_pages_pane_g

0xd850,	// (0x0005083d) graphic2_pages_pane_t1_ParamLimits

0xd850,	// (0x0005083d) graphic2_pages_pane_t1

0xd866,	// (0x00050853) cell_graphic2_control_pane_ParamLimits

0xd866,	// (0x00050853) cell_graphic2_control_pane

0xd889,	// (0x00050876) cell_graphic2_pane_g1_ParamLimits

0xd889,	// (0x00050876) cell_graphic2_pane_g1

0xd896,	// (0x00050883) cell_graphic2_pane_g2_ParamLimits

0xd896,	// (0x00050883) cell_graphic2_pane_g2

0xd8a3,	// (0x00050890) cell_graphic2_pane_g3_ParamLimits

0xd8a3,	// (0x00050890) cell_graphic2_pane_g3

0xd8b0,	// (0x0005089d) cell_graphic2_pane_g4_ParamLimits

0xd8b0,	// (0x0005089d) cell_graphic2_pane_g4

0xd8bd,	// (0x000508aa) cell_graphic2_pane_g5_ParamLimits

0xd8bd,	// (0x000508aa) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x00052da1) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x00052da1) cell_graphic2_pane_g

0xd8d8,	// (0x000508c5) cell_graphic2_pane_t1_ParamLimits

0xd8d8,	// (0x000508c5) cell_graphic2_pane_t1

0x9113,	// (0x0004c100) grid_highlight_pane_cp11_ParamLimits

0x9113,	// (0x0004c100) grid_highlight_pane_cp11

0xdb87,	// (0x00050b74) bg_button_pane_cp05

0xd901,	// (0x000508ee) cell_graphic2_control_pane_g1

0xb6e3,	// (0x0004e6d0) bg_touch_area_indi_pane_g1

0xd929,	// (0x00050916) aid_cmod_rocker_key_size

0xd933,	// (0x00050920) aid_cmode_itu_key_size

0xd93d,	// (0x0005092a) main_cmode_video_pane

0xd947,	// (0x00050934) main_comp_mode_itu_pane

0xd953,	// (0x00050940) main_comp_mode_rocker_pane

0xd95f,	// (0x0005094c) cell_cmode_rocker_pane_ParamLimits

0xd95f,	// (0x0005094c) cell_cmode_rocker_pane

0xd973,	// (0x00050960) cell_cmode_itu_pane_ParamLimits

0xd973,	// (0x00050960) cell_cmode_itu_pane

0x07e9,	// (0x000437d6) bg_button_pane_cp06_ParamLimits

0x07e9,	// (0x000437d6) bg_button_pane_cp06

0xb95e,	// (0x0004e94b) cell_cmode_rocker_pane_g1_ParamLimits

0xb95e,	// (0x0004e94b) cell_cmode_rocker_pane_g1

0xcec1,	// (0x0004feae) cell_cmode_rocker_pane_g2_ParamLimits

0xcec1,	// (0x0004feae) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x00052db1) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x00052db1) cell_cmode_rocker_pane_g

0xd9d8,	// (0x000509c5) bg_button_pane_cp07

0xd98a,	// (0x00050977) cell_cmode_itu_pane_g1

0xd993,	// (0x00050980) cell_cmode_itu_pane_t1

0xd9a1,	// (0x0005098e) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x00052db6) cell_cmode_itu_pane_t

0xd0ef,	// (0x000500dc) aid_touch_ctrl_left

0xd0f7,	// (0x000500e4) aid_touch_ctrl_right

0xd9d8,	// (0x000509c5) compa_mode_pane

0xe010,	// (0x00050ffd) aid_cmod_rocker_key_size_cp

0xe01a,	// (0x00051007) aid_cmode_itu_key_size_cp

0xe024,	// (0x00051011) compa_mode_pane_g1

0xe02c,	// (0x00051019) compa_mode_pane_g2

0xe034,	// (0x00051021) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x00052dbb) compa_mode_pane_g

0xe03c,	// (0x00051029) main_comp_mode_itu_pane_cp

0xe044,	// (0x00051031) main_comp_mode_rocker_pane_cp

0xe04c,	// (0x00051039) cell_cmode_itu_pane_cp_ParamLimits

0xe04c,	// (0x00051039) cell_cmode_itu_pane_cp

0xe061,	// (0x0005104e) cell_cmode_rocker_pane_cp_ParamLimits

0xe061,	// (0x0005104e) cell_cmode_rocker_pane_cp

0x07e9,	// (0x000437d6) bg_button_pane_cp06_cp_ParamLimits

0x07e9,	// (0x000437d6) bg_button_pane_cp06_cp

0xb95e,	// (0x0004e94b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb95e,	// (0x0004e94b) cell_cmode_rocker_pane_g1_cp

0xb6e3,	// (0x0004e6d0) cell_cmode_rocker_pane_g2_cp

0xd9d8,	// (0x000509c5) bg_button_pane_cp07_cp

0xe073,	// (0x00051060) cell_cmode_itu_pane_g1_cp

0xe07c,	// (0x00051069) cell_cmode_itu_pane_t1_cp

0xe07c,	// (0x00051069) cell_cmode_itu_pane_t2_cp

0xa5dc,	// (0x0004d5c9) settings_code_pane_cp2

0xda46,	// (0x00050a33) bg_popup_window_pane_cp3_ParamLimits

0xdd75,	// (0x00050d62) heading_pane_cp3_ParamLimits

0xdd81,	// (0x00050d6e) listscroll_popup_graphic_pane_ParamLimits

0x76af,	// (0x0004a69c) fep_hwr_aid_pane_ParamLimits

0x7b7d,	// (0x0004ab6a) aid_touch_sctrl_top_ParamLimits

0x7b8a,	// (0x0004ab77) sctrl_sk_top_pane_g1_ParamLimits

0xb95e,	// (0x0004e94b) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x00052cf1) sctrl_sk_top_pane_g_ParamLimits

0x7b97,	// (0x0004ab84) sctrl_sk_top_pane_t1_ParamLimits

0x7b7d,	// (0x0004ab6a) aid_touch_sctrl_bottom_ParamLimits

0x7b97,	// (0x0004ab84) sctrl_sk_bottom_pane_t1_ParamLimits

0xd035,	// (0x00050022) aid_area_touch_clock

0x7d80,	// (0x0004ad6d) aid_vkb2_area_top_pane_cell_ParamLimits

0x7d80,	// (0x0004ad6d) aid_vkb2_area_top_pane_cell

0x7ecb,	// (0x0004aeb8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7ecb,	// (0x0004aeb8) aid_vkb2_area_bottom_pane_cell

0xd59a,	// (0x00050587) popup_char_count_window

0xe08a,	// (0x00051077) popup_char_count_window_g1

0xe093,	// (0x00051080) popup_char_count_window_g2

0xe09c,	// (0x00051089) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x00052dc2) popup_char_count_window_g

0xe0a5,	// (0x00051092) popup_char_count_window_t1

0x7c3a,	// (0x0004ac27) popup_fep_char_preview_window_ParamLimits

0x7c3a,	// (0x0004ac27) popup_fep_char_preview_window

0x7d9e,	// (0x0004ad8b) vkb2_top_candi_pane_ParamLimits

0x7d9e,	// (0x0004ad8b) vkb2_top_candi_pane

0xe0b3,	// (0x000510a0) cell_vkb2_top_candi_pane_ParamLimits

0xe0b3,	// (0x000510a0) cell_vkb2_top_candi_pane

0x96ef,	// (0x0004c6dc) bg_popup_fep_char_preview_window_ParamLimits

0x96ef,	// (0x0004c6dc) bg_popup_fep_char_preview_window

0x81b6,	// (0x0004b1a3) popup_fep_char_preview_window_t1_ParamLimits

0x81b6,	// (0x0004b1a3) popup_fep_char_preview_window_t1

0xe104,	// (0x000510f1) bg_popup_fep_char_preview_window_g1

0xe10c,	// (0x000510f9) bg_popup_fep_char_preview_window_g2

0xe114,	// (0x00051101) bg_popup_fep_char_preview_window_g3

0xe11c,	// (0x00051109) bg_popup_fep_char_preview_window_g4

0xe124,	// (0x00051111) bg_popup_fep_char_preview_window_g5

0x81f0,	// (0x0004b1dd) bg_popup_fep_char_preview_window_g6

0xe12c,	// (0x00051119) bg_popup_fep_char_preview_window_g7

0xe134,	// (0x00051121) bg_popup_fep_char_preview_window_g8

0xe13c,	// (0x00051129) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x00052dc9) bg_popup_fep_char_preview_window_g

0xb95e,	// (0x0004e94b) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb95e,	// (0x0004e94b) cell_vkb2_top_candi_pane_g1

0xbc9f,	// (0x0004ec8c) cell_vkb2_top_candi_pane_g2_ParamLimits

0xbc9f,	// (0x0004ec8c) cell_vkb2_top_candi_pane_g2

0xbcc0,	// (0x0004ecad) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbcc0,	// (0x0004ecad) cell_vkb2_top_candi_pane_g3

0x81f8,	// (0x0004b1e5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x81f8,	// (0x0004b1e5) cell_vkb2_top_candi_pane_g4

0xd9af,	// (0x0005099c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd9af,	// (0x0005099c) cell_vkb2_top_candi_pane_g5

0xcec1,	// (0x0004feae) cell_vkb2_top_candi_pane_g6_ParamLimits

0xcec1,	// (0x0004feae) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x00052ddc) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x00052ddc) cell_vkb2_top_candi_pane_g

0x8219,	// (0x0004b206) cell_vkb2_top_candi_pane_t1

0x7439,	// (0x0004a426) aid_size_touch_slider_mark_ParamLimits

0x7439,	// (0x0004a426) aid_size_touch_slider_mark

0xd6dd,	// (0x000506ca) grid_graphic2_catg_pane_ParamLimits

0xd6dd,	// (0x000506ca) grid_graphic2_catg_pane

0xd77b,	// (0x00050768) popup_grid_graphic2_window_t1_ParamLimits

0xd77b,	// (0x00050768) popup_grid_graphic2_window_t1

0xd78d,	// (0x0005077a) popup_grid_graphic2_window_t2_ParamLimits

0xd78d,	// (0x0005077a) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x00052d97) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x00052d97) popup_grid_graphic2_window_t

0xdb87,	// (0x00050b74) bg_button_pane_cp05_ParamLimits

0xd901,	// (0x000508ee) cell_graphic2_control_pane_g1_ParamLimits

0xe144,	// (0x00051131) cell_graphic2_catg_pane_ParamLimits

0xe144,	// (0x00051131) cell_graphic2_catg_pane

0xd9d8,	// (0x000509c5) bg_button_pane_cp12

0xe156,	// (0x00051143) cell_graphic2_catg_pane_g1

0xd001,	// (0x0004ffee) cell_tb_ext_pane_t1_ParamLimits

0x7fe8,	// (0x0004afd5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7fe8,	// (0x0004afd5) vkb2_top_cell_right_narrow_pane

0x8000,	// (0x0004afed) vkb2_top_cell_right_wide_pane_ParamLimits

0x8000,	// (0x0004afed) vkb2_top_cell_right_wide_pane

0xf540,	// (0x0005252d) bg_vkb2_func_pane_ParamLimits

0xf540,	// (0x0005252d) bg_vkb2_func_pane

0x8071,	// (0x0004b05e) vkb2_top_cell_left_pane_g1_ParamLimits

0xf540,	// (0x0005252d) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf540,	// (0x0005252d) bg_vkb2_fuc_pane_cp03

0x80cf,	// (0x0004b0bc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x90a7,	// (0x0004c094) bg_vkb2_func_pane_g1

0x90af,	// (0x0004c09c) bg_vkb2_func_pane_g2

0x90bf,	// (0x0004c0ac) bg_vkb2_func_pane_g3

0x90b7,	// (0x0004c0a4) bg_vkb2_func_pane_g4

0x90c7,	// (0x0004c0b4) bg_vkb2_func_pane_g5

0x90cf,	// (0x0004c0bc) bg_vkb2_func_pane_g6

0x90d7,	// (0x0004c0c4) bg_vkb2_func_pane_g7

0x90df,	// (0x0004c0cc) bg_vkb2_func_pane_g8

0x909f,	// (0x0004c08c) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x00052de9) bg_vkb2_func_pane_g

0xf540,	// (0x0005252d) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf540,	// (0x0005252d) bg_vkb2_fuc_pane_cp01

0x8071,	// (0x0004b05e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8071,	// (0x0004b05e) vkb2_top_cell_right_wide_pane_g1

0xf540,	// (0x0005252d) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf540,	// (0x0005252d) bg_vkb2_fuc_pane_cp02

0x80cf,	// (0x0004b0bc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x80cf,	// (0x0004b0bc) vkb2_top_cell_right_narrow_pane_g1

0xcc22,	// (0x0004fc0f) aid_touch_area_decrease_ParamLimits

0xcc22,	// (0x0004fc0f) aid_touch_area_decrease

0xcc46,	// (0x0004fc33) aid_touch_area_increase_ParamLimits

0xcc46,	// (0x0004fc33) aid_touch_area_increase

0xcc52,	// (0x0004fc3f) aid_touch_area_mute_ParamLimits

0xcc52,	// (0x0004fc3f) aid_touch_area_mute

0xcc76,	// (0x0004fc63) aid_touch_area_slider_ParamLimits

0xcc76,	// (0x0004fc63) aid_touch_area_slider

0xcd66,	// (0x0004fd53) popup_slider_window_g4_ParamLimits

0xcd66,	// (0x0004fd53) popup_slider_window_g4

0xcd72,	// (0x0004fd5f) popup_slider_window_g5_ParamLimits

0xcd72,	// (0x0004fd5f) popup_slider_window_g5

0xcd94,	// (0x0004fd81) popup_slider_window_g6_ParamLimits

0xcd94,	// (0x0004fd81) popup_slider_window_g6

0xcdd4,	// (0x0004fdc1) popup_slider_window_t2_ParamLimits

0xcdd4,	// (0x0004fdc1) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x00052ce5) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x00052ce5) popup_slider_window_t

0xcdec,	// (0x0004fdd9) slider_pane_ParamLimits

0xcdec,	// (0x0004fdd9) slider_pane

0xe15f,	// (0x0005114c) slider_pane_g1_ParamLimits

0xe15f,	// (0x0005114c) slider_pane_g1

0xe173,	// (0x00051160) slider_pane_g2_ParamLimits

0xe173,	// (0x00051160) slider_pane_g2

0xe189,	// (0x00051176) slider_pane_g3_ParamLimits

0xe189,	// (0x00051176) slider_pane_g3

0x0003,

0xfe0f,	// (0x00052dfc) slider_pane_g_ParamLimits

0xfe0f,	// (0x00052dfc) slider_pane_g

0x8a98,	// (0x0004ba85) popup_tb_float_extension_window_ParamLimits

0x8a98,	// (0x0004ba85) popup_tb_float_extension_window

0xe1b5,	// (0x000511a2) aid_size_cell_tb_float_ext

0xd9d8,	// (0x000509c5) bg_popup_sub_window_cp28

0xe1c1,	// (0x000511ae) grid_tb_float_ext_pane

0xe1cd,	// (0x000511ba) cell_tb_float_ext_pane_ParamLimits

0xe1cd,	// (0x000511ba) cell_tb_float_ext_pane

0xe1e9,	// (0x000511d6) cell_tb_float_ext_pane_g1

0xe1f2,	// (0x000511df) grid_highlight_pane_cp12

0x77e8,	// (0x0004a7d5) cell_last_hwr_side_pane_ParamLimits

0x77e8,	// (0x0004a7d5) cell_last_hwr_side_pane

0xb6e3,	// (0x0004e6d0) cell_last_hwr_side_pane_g1

0xe1fb,	// (0x000511e8) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x00052e05) cell_last_hwr_side_pane_g

0x7f97,	// (0x0004af84) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7f97,	// (0x0004af84) vkb2_area_bottom_space_btn_pane

0xb95e,	// (0x0004e94b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd64f,	// (0x0005063c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8219,	// (0x0004b206) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8237,	// (0x0004b224) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8237,	// (0x0004b224) vkb2_area_bottom_space_btn_pane_g1

0x8271,	// (0x0004b25e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8271,	// (0x0004b25e) vkb2_area_bottom_space_btn_pane_g2

0x82a7,	// (0x0004b294) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x82a7,	// (0x0004b294) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x00052e0a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x00052e0a) vkb2_area_bottom_space_btn_pane_g

0x7758,	// (0x0004a745) cel_fep_hwr_func_pane_ParamLimits

0x7758,	// (0x0004a745) cel_fep_hwr_func_pane

0x7794,	// (0x0004a781) cell_hwr_side_button_pane_ParamLimits

0x7794,	// (0x0004a781) cell_hwr_side_button_pane

0xd035,	// (0x00050022) aid_area_touch_clock_ParamLimits

0xdb87,	// (0x00050b74) bg_uniindi_top_pane_ParamLimits

0xd049,	// (0x00050036) uniindi_top_pane_g1_ParamLimits

0xd05f,	// (0x0005004c) uniindi_top_pane_g2_ParamLimits

0xd06b,	// (0x00050058) uniindi_top_pane_g3_ParamLimits

0xd07c,	// (0x00050069) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x00052d1d) uniindi_top_pane_g_ParamLimits

0xd089,	// (0x00050076) uniindi_top_pane_t1_ParamLimits

0xdb87,	// (0x00050b74) bg_vkb2_func_pane_cp01_ParamLimits

0xdb87,	// (0x00050b74) bg_vkb2_func_pane_cp01

0xe204,	// (0x000511f1) cel_fep_hwr_func_pane_g1_ParamLimits

0xe204,	// (0x000511f1) cel_fep_hwr_func_pane_g1

0xdb87,	// (0x00050b74) bg_vkb2_func_pane_cp02_ParamLimits

0xdb87,	// (0x00050b74) bg_vkb2_func_pane_cp02

0xe204,	// (0x000511f1) cell_hwr_side_button_pane_g1_ParamLimits

0xe204,	// (0x000511f1) cell_hwr_side_button_pane_g1

0x8f20,	// (0x0004bf0d) status_pane_g4_ParamLimits

0x8f20,	// (0x0004bf0d) status_pane_g4

0x8f3a,	// (0x0004bf27) status_pane_t1

0xb482,	// (0x0004e46f) form2_midp_gauge_slider_cont_pane

0xb48a,	// (0x0004e477) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb49c,	// (0x0004e489) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb4ae,	// (0x0004e49b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x00052ae9) form2_midp_gauge_slider_pane_t_ParamLimits

0xb4c0,	// (0x0004e4ad) form2_midp_slider_pane_ParamLimits

0x7bfa,	// (0x0004abe7) aid_size_cell_func_vkb2_ParamLimits

0x7bfa,	// (0x0004abe7) aid_size_cell_func_vkb2

0xe1a1,	// (0x0005118e) slider_pane_g4_ParamLimits

0xe1a1,	// (0x0005118e) slider_pane_g4

0x82f1,	// (0x0004b2de) form2_midp_gauge_slider_pane_t2_cp01

0x82ff,	// (0x0004b2ec) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x82ff,	// (0x0004b2ec) form2_midp_gauge_slider_pane_t3_cp01

0x831c,	// (0x0004b309) form2_midp_slider_pane_cp01

0xd9d8,	// (0x000509c5) navi_smil_pane

0xe23d,	// (0x0005122a) navi_smil_pane_g1

0xe245,	// (0x00051232) navi_smil_pane_t1

0xe212,	// (0x000511ff) form2_midp_slider_pane_g1

0xe21b,	// (0x00051208) form2_midp_slider_pane_g2

0xe223,	// (0x00051210) form2_midp_slider_pane_g3

0xe212,	// (0x000511ff) form2_midp_slider_pane_g4

0xe22b,	// (0x00051218) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x00052e13) form2_midp_slider_pane_g

0x82e1,	// (0x0004b2ce) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x82e1,	// (0x0004b2ce) vkb2_area_bottom_space_btn_pane_g4

0x8d37,	// (0x0004bd24) lc0_navi_pane_ParamLimits

0x8d37,	// (0x0004bd24) lc0_navi_pane

0x8db3,	// (0x0004bda0) lc0_stat_indi_pane_ParamLimits

0x8db3,	// (0x0004bda0) lc0_stat_indi_pane

0x8dca,	// (0x0004bdb7) ls0_title_pane_ParamLimits

0x8dca,	// (0x0004bdb7) ls0_title_pane

0x07e9,	// (0x000437d6) bg_popup_sub_pane_cp14_ParamLimits

0xd01c,	// (0x00050009) list_uniindi_pane_ParamLimits

0xd028,	// (0x00050015) uniindi_top_pane_ParamLimits

0xd0c7,	// (0x000500b4) list_single_uniindi_pane_g1_ParamLimits

0xd0da,	// (0x000500c7) list_single_uniindi_pane_t1_ParamLimits

0x8325,	// (0x0004b312) lc0_stat_clock_pane_ParamLimits

0x8325,	// (0x0004b312) lc0_stat_clock_pane

0xe253,	// (0x00051240) lc0_stat_indi_pane_g1_ParamLimits

0xe253,	// (0x00051240) lc0_stat_indi_pane_g1

0xe260,	// (0x0005124d) lc0_stat_indi_pane_g2_ParamLimits

0xe260,	// (0x0005124d) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x00052e1e) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x00052e1e) lc0_stat_indi_pane_g

0x8332,	// (0x0004b31f) lc0_uni_indicator_pane_ParamLimits

0x8332,	// (0x0004b31f) lc0_uni_indicator_pane

0xe26d,	// (0x0005125a) ls0_title_pane_g1_ParamLimits

0xe26d,	// (0x0005125a) ls0_title_pane_g1

0xe281,	// (0x0005126e) ls0_title_pane_t1_ParamLimits

0xe281,	// (0x0005126e) ls0_title_pane_t1

0x833f,	// (0x0004b32c) lc0_uni_indicator_pane_g1_ParamLimits

0x833f,	// (0x0004b32c) lc0_uni_indicator_pane_g1

0xe2b7,	// (0x000512a4) lc0_stat_clock_pane_t1

0xd9d8,	// (0x000509c5) main_ai5_pane

0xe2c5,	// (0x000512b2) ai5_sk_pane_ParamLimits

0xe2c5,	// (0x000512b2) ai5_sk_pane

0xe2d2,	// (0x000512bf) cell_ai5_widget_pane_ParamLimits

0xe2d2,	// (0x000512bf) cell_ai5_widget_pane

0xe86e,	// (0x0005185b) aid_size_cell_widget_grid

0xe87c,	// (0x00051869) bg_ai5_widget_pane_ParamLimits

0xe87c,	// (0x00051869) bg_ai5_widget_pane

0xe8f0,	// (0x000518dd) cell_ai5_widget_pane_g2

0xe900,	// (0x000518ed) cell_ai5_widget_pane_g3

0xe917,	// (0x00051904) cell_ai5_widget_pane_g4

0xe923,	// (0x00051910) cell_ai5_widget_pane_g5

0xe92f,	// (0x0005191c) cell_ai5_widget_pane_g6

0xe93b,	// (0x00051928) cell_ai5_widget_pane_g7

0xe983,	// (0x00051970) cell_ai5_widget_pane_t1_ParamLimits

0xe983,	// (0x00051970) cell_ai5_widget_pane_t1

0xe9a0,	// (0x0005198d) cell_ai5_widget_pane_t2_ParamLimits

0xe9a0,	// (0x0005198d) cell_ai5_widget_pane_t2

0xe9b8,	// (0x000519a5) cell_ai5_widget_pane_t3_ParamLimits

0xe9b8,	// (0x000519a5) cell_ai5_widget_pane_t3

0xe9d0,	// (0x000519bd) cell_ai5_widget_pane_t4_ParamLimits

0xe9d0,	// (0x000519bd) cell_ai5_widget_pane_t4

0xe9ed,	// (0x000519da) cell_ai5_widget_pane_t5_ParamLimits

0xe9ed,	// (0x000519da) cell_ai5_widget_pane_t5

0xea0c,	// (0x000519f9) cell_ai5_widget_pane_t6_ParamLimits

0xea0c,	// (0x000519f9) cell_ai5_widget_pane_t6

0xea1e,	// (0x00051a0b) cell_ai5_widget_pane_t7_ParamLimits

0xea1e,	// (0x00051a0b) cell_ai5_widget_pane_t7

0xea37,	// (0x00051a24) cell_ai5_widget_pane_t8_ParamLimits

0xea37,	// (0x00051a24) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x00052e38) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x00052e38) cell_ai5_widget_pane_t

0xea8b,	// (0x00051a78) grid_ai5_widget_pane

0x07e9,	// (0x000437d6) highlight_cell_ai5_widget_pane_ParamLimits

0x07e9,	// (0x000437d6) highlight_cell_ai5_widget_pane

0xea99,	// (0x00051a86) ai5_sk_left_pane

0xeaa3,	// (0x00051a90) ai5_sk_middle_pane

0xeaad,	// (0x00051a9a) ai5_sk_right_pane

0xeab7,	// (0x00051aa4) bg_ai5_widget_pane_g1_ParamLimits

0xeab7,	// (0x00051aa4) bg_ai5_widget_pane_g1

0xeac3,	// (0x00051ab0) bg_ai5_widget_pane_g2_ParamLimits

0xeac3,	// (0x00051ab0) bg_ai5_widget_pane_g2

0xeacf,	// (0x00051abc) bg_ai5_widget_pane_g3_ParamLimits

0xeacf,	// (0x00051abc) bg_ai5_widget_pane_g3

0xeadb,	// (0x00051ac8) bg_ai5_widget_pane_g4_ParamLimits

0xeadb,	// (0x00051ac8) bg_ai5_widget_pane_g4

0xeae7,	// (0x00051ad4) bg_ai5_widget_pane_g5_ParamLimits

0xeae7,	// (0x00051ad4) bg_ai5_widget_pane_g5

0xeaf3,	// (0x00051ae0) bg_ai5_widget_pane_g6_ParamLimits

0xeaf3,	// (0x00051ae0) bg_ai5_widget_pane_g6

0xeaff,	// (0x00051aec) bg_ai5_widget_pane_g7_ParamLimits

0xeaff,	// (0x00051aec) bg_ai5_widget_pane_g7

0xeb0b,	// (0x00051af8) bg_ai5_widget_pane_g8_ParamLimits

0xeb0b,	// (0x00051af8) bg_ai5_widget_pane_g8

0xeb17,	// (0x00051b04) bg_ai5_widget_pane_g9_ParamLimits

0xeb17,	// (0x00051b04) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x00052e4d) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x00052e4d) bg_ai5_widget_pane_g

0xeb4f,	// (0x00051b3c) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb4f,	// (0x00051b3c) cell_shortcut_ai5_widget_pane

0x41a9,	// (0x00047196) bg_cell_shortcut_ai5_widget_pane

0xeb62,	// (0x00051b4f) cell_grid_ai5_widget_pane_g1

0x41a9,	// (0x00047196) highlight_cell_shortcut_ai5_widget_pane

0x90af,	// (0x0004c09c) ai5_sk_left_pane_g1

0xeb6b,	// (0x00051b58) ai5_sk_left_pane_g2

0xeb73,	// (0x00051b60) ai5_sk_left_pane_g3

0xeb7b,	// (0x00051b68) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x00052e60) ai5_sk_left_pane_g

0xeb83,	// (0x00051b70) ai5_sk_left_pane_t1

0x90a7,	// (0x0004c094) ai5_sk_right_pane_g1

0xeb91,	// (0x00051b7e) ai5_sk_right_pane_g2

0xeb99,	// (0x00051b86) ai5_sk_right_pane_g3

0xeba1,	// (0x00051b8e) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x00052e69) ai5_sk_right_pane_g

0xeba9,	// (0x00051b96) ai5_sk_right_pane_t1

0x90a7,	// (0x0004c094) ai5_sk_middle_pane_g1

0x90af,	// (0x0004c09c) ai5_sk_middle_pane_g2

0x90c7,	// (0x0004c0b4) ai5_sk_middle_pane_g3

0xeb99,	// (0x00051b86) ai5_sk_middle_pane_g4

0xeb73,	// (0x00051b60) ai5_sk_middle_pane_g5

0xebb7,	// (0x00051ba4) ai5_sk_middle_pane_g6

0xebbf,	// (0x00051bac) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x00052e72) ai5_sk_middle_pane_g

0x8bb9,	// (0x0004bba6) aid_touch_area_size_lc0_ParamLimits

0x8bb9,	// (0x0004bba6) aid_touch_area_size_lc0

0x78f7,	// (0x0004a8e4) cell_hwr_candidate_pane_t1_ParamLimits

0x8bd7,	// (0x0004bbc4) aid_touch_navi_pane

0x8eca,	// (0x0004beb7) status_dt_navi_pane_ParamLimits

0x8eca,	// (0x0004beb7) status_dt_navi_pane

0x8ed7,	// (0x0004bec4) status_dt_sta_pane_ParamLimits

0x8ed7,	// (0x0004bec4) status_dt_sta_pane

0xebc7,	// (0x00051bb4) dt_sta_controll_pane

0xebd4,	// (0x00051bc1) dt_sta_indi_pane

0xebe5,	// (0x00051bd2) dt_sta_title_pane

0xdb87,	// (0x00050b74) bg_dt_sta_indi_pane_ParamLimits

0xdb87,	// (0x00050b74) bg_dt_sta_indi_pane

0xebf8,	// (0x00051be5) dt_sta_battery_pane

0xec00,	// (0x00051bed) dt_sta_indi_pane_g1

0xec09,	// (0x00051bf6) dt_sta_indi_pane_g2

0xec12,	// (0x00051bff) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x00052e81) dt_sta_indi_pane_g

0xec1b,	// (0x00051c08) dt_sta_signal_pane

0x07e9,	// (0x000437d6) bg_dt_sta_title_pane_ParamLimits

0x07e9,	// (0x000437d6) bg_dt_sta_title_pane

0xec24,	// (0x00051c11) dt_sta_title_pane_g1

0xec2c,	// (0x00051c19) dt_sta_title_pane_t1_ParamLimits

0xec2c,	// (0x00051c19) dt_sta_title_pane_t1

0xd9d8,	// (0x000509c5) bg_dt_sta_control_pane

0xec41,	// (0x00051c2e) dt_sta_controll_pane_g1

0xec4a,	// (0x00051c37) bg_dt_sta_title_pane_g1

0xec53,	// (0x00051c40) bg_dt_sta_title_pane_g2

0xec5c,	// (0x00051c49) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x00052e88) bg_dt_sta_title_pane_g

0xb6e3,	// (0x0004e6d0) bg_dt_sta_indi_pane_g1

0xec65,	// (0x00051c52) dt_sta_signal_pane_g1

0xec6d,	// (0x00051c5a) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x00052e8f) dt_sta_signal_pane_g

0xec75,	// (0x00051c62) dt_sta_battery_pane_g1

0xec7e,	// (0x00051c6b) dt_sta_battery_pane_t1

0xb6e3,	// (0x0004e6d0) bg_dt_sta_control_pane_g1

0x0d4d,	// (0x00043d3a) fep_china_uni_eep_pane

0x0d55,	// (0x00043d42) fep_china_uni_entry_pane_ParamLimits

0x0d65,	// (0x00043d52) popup_fep_china_uni_window_g1_ParamLimits

0x0d75,	// (0x00043d62) popup_fep_china_uni_window_g2_ParamLimits

0x0d75,	// (0x00043d62) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005270f) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005270f) popup_fep_china_uni_window_g

0xec8d,	// (0x00051c7a) fep_china_uni_eep_pane_g1

0xec95,	// (0x00051c82) fep_china_uni_eep_pane_t1

0xe234,	// (0x00051221) aid_touch_area_size_smil_player

0x8d2f,	// (0x0004bd1c) lc0_clock_pane

0x8f2e,	// (0x0004bf1b) status_pane_g5_ParamLimits

0x8f2e,	// (0x0004bf1b) status_pane_g5

0x871d,	// (0x0004b70a) popup_keymap_window

0x8eec,	// (0x0004bed9) status_icon_pane

0xe900,	// (0x000518ed) cell_ai5_widget_pane_g3_ParamLimits

0xe917,	// (0x00051904) cell_ai5_widget_pane_g4_ParamLimits

0xe923,	// (0x00051910) cell_ai5_widget_pane_g5_ParamLimits

0xe947,	// (0x00051934) cell_ai5_widget_pane_g8_ParamLimits

0xe947,	// (0x00051934) cell_ai5_widget_pane_g8

0xe95b,	// (0x00051948) cell_ai5_widget_pane_g9_ParamLimits

0xe95b,	// (0x00051948) cell_ai5_widget_pane_g9

0xe96f,	// (0x0005195c) cell_ai5_widget_pane_g10_ParamLimits

0xe96f,	// (0x0005195c) cell_ai5_widget_pane_g10

0xeca4,	// (0x00051c91) status_icon_pane_g1

0xd9d8,	// (0x000509c5) bg_popup_sub_pane_cp13

0xecac,	// (0x00051c99) popup_keymap_window_t1

0x6e5e,	// (0x00049e4b) control_pane_g6_ParamLimits

0x6e5e,	// (0x00049e4b) control_pane_g6

0x6e6b,	// (0x00049e58) control_pane_g7_ParamLimits

0x6e6b,	// (0x00049e58) control_pane_g7

0x6e78,	// (0x00049e65) control_pane_g8_ParamLimits

0x6e78,	// (0x00049e65) control_pane_g8

0xebc7,	// (0x00051bb4) dt_sta_controll_pane_ParamLimits

0xebd4,	// (0x00051bc1) dt_sta_indi_pane_ParamLimits

0xebe5,	// (0x00051bd2) dt_sta_title_pane_ParamLimits

0xdfab,	// (0x00050f98) aid_size_touch_scroll_bar_cale

0x5ee5,	// (0x00048ed2) popup_discreet_window_ParamLimits

0x5ee5,	// (0x00048ed2) popup_discreet_window

0x5f73,	// (0x00048f60) popup_sk_window

0x96ef,	// (0x0004c6dc) bg_popup_sub_pane_cp28_ParamLimits

0x96ef,	// (0x0004c6dc) bg_popup_sub_pane_cp28

0xecba,	// (0x00051ca7) popup_discreet_window_g1_ParamLimits

0xecba,	// (0x00051ca7) popup_discreet_window_g1

0xecda,	// (0x00051cc7) popup_discreet_window_t1_ParamLimits

0xecda,	// (0x00051cc7) popup_discreet_window_t1

0xecf8,	// (0x00051ce5) popup_discreet_window_t2_ParamLimits

0xecf8,	// (0x00051ce5) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x00052e94) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x00052e94) popup_discreet_window_t

0x8352,	// (0x0004b33f) popup_sk_window_g1

0x835c,	// (0x0004b349) popup_sk_window_g2

0x0001,

0xfeae,	// (0x00052e9b) popup_sk_window_g

0x8366,	// (0x0004b353) popup_sk_window_t1

0x8376,	// (0x0004b363) popup_sk_window_t1_copy1

0xe8f0,	// (0x000518dd) cell_ai5_widget_pane_g2_ParamLimits

0xea49,	// (0x00051a36) cell_ai5_widget_pane_t9_ParamLimits

0xea49,	// (0x00051a36) cell_ai5_widget_pane_t9

0xd9d8,	// (0x000509c5) main_fep_fshwr2_pane

0x8384,	// (0x0004b371) aid_fshwr2_btn_pane

0x8390,	// (0x0004b37d) aid_fshwr2_syb_pane

0x839c,	// (0x0004b389) aid_fshwr2_txt_pane

0x83a8,	// (0x0004b395) fshwr2_func_candi_pane

0x83bb,	// (0x0004b3a8) fshwr2_hwr_syb_pane

0x83c9,	// (0x0004b3b6) fshwr2_icf_pane

0xd9d8,	// (0x000509c5) fshwr2_icf_bg_pane

0x83f8,	// (0x0004b3e5) fshwr2_icf_pane_t1_ParamLimits

0x83f8,	// (0x0004b3e5) fshwr2_icf_pane_t1

0x0ccb,	// (0x00043cb8) fshwr2_func_candi_pane_g1

0xed4a,	// (0x00051d37) fshwr2_func_candi_row_pane_ParamLimits

0xed4a,	// (0x00051d37) fshwr2_func_candi_row_pane

0x8410,	// (0x0004b3fd) cell_fshwr2_syb_pane_ParamLimits

0x8410,	// (0x0004b3fd) cell_fshwr2_syb_pane

0xb95e,	// (0x0004e94b) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb95e,	// (0x0004e94b) fshwr2_hwr_syb_pane_g1

0xd9d8,	// (0x000509c5) bg_popup_call_pane_cp01

0x8426,	// (0x0004b413) fshwr2_func_candi_cell_pane_ParamLimits

0x8426,	// (0x0004b413) fshwr2_func_candi_cell_pane

0xed5a,	// (0x00051d47) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed5a,	// (0x00051d47) fshwr2_func_candi_cell_bg_pane

0x845a,	// (0x0004b447) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x845a,	// (0x0004b447) fshwr2_func_candi_cell_pane_g1

0x847a,	// (0x0004b467) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x847a,	// (0x0004b467) fshwr2_func_candi_cell_pane_t1

0xd9d8,	// (0x000509c5) bg_button_pane_cp08

0xed66,	// (0x00051d53) cell_fshwr2_syb_bg_pane

0x848d,	// (0x0004b47a) cell_fshwr2_syb_bg_pane_g1

0x8495,	// (0x0004b482) cell_fshwr2_syb_bg_pane_t1

0x07e9,	// (0x000437d6) main_tmo_pane

0xa213,	// (0x0004d200) uni_indicator_pane_g1_ParamLimits

0xa229,	// (0x0004d216) uni_indicator_pane_g2_ParamLimits

0xa23f,	// (0x0004d22c) uni_indicator_pane_g3_ParamLimits

0xa254,	// (0x0004d241) uni_indicator_pane_g4_ParamLimits

0xa254,	// (0x0004d241) uni_indicator_pane_g4

0xa268,	// (0x0004d255) uni_indicator_pane_g5_ParamLimits

0xa268,	// (0x0004d255) uni_indicator_pane_g5

0xa268,	// (0x0004d255) uni_indicator_pane_g6_ParamLimits

0xa268,	// (0x0004d255) uni_indicator_pane_g6

0xf926,	// (0x00052913) uni_indicator_pane_g_ParamLimits

0xcbf2,	// (0x0004fbdf) popup_tmo_note_window_ParamLimits

0xcbf2,	// (0x0004fbdf) popup_tmo_note_window

0x07e9,	// (0x000437d6) fshwr2_bg_pane

0x846b,	// (0x0004b458) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x846b,	// (0x0004b458) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x00052ea0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x00052ea0) fshwr2_func_candi_cell_pane_g

0xb6e3,	// (0x0004e6d0) bg_popup_window_pane_cp01

0x84a4,	// (0x0004b491) bg_popup_window_pane_g1_cp01

0xed6e,	// (0x00051d5b) bg_popup_window_pane_cp22_ParamLimits

0xed6e,	// (0x00051d5b) bg_popup_window_pane_cp22

0xed7c,	// (0x00051d69) listscroll_tmo_link_pane_ParamLimits

0xed7c,	// (0x00051d69) listscroll_tmo_link_pane

0xedbc,	// (0x00051da9) popup_tmo_note_window_g1_ParamLimits

0xedbc,	// (0x00051da9) popup_tmo_note_window_g1

0xedc9,	// (0x00051db6) tmo_note_info_pane_ParamLimits

0xedc9,	// (0x00051db6) tmo_note_info_pane

0xede3,	// (0x00051dd0) list_tmo_note_info_pane_g1_ParamLimits

0xede3,	// (0x00051dd0) list_tmo_note_info_pane_g1

0xedfa,	// (0x00051de7) list_tmo_note_info_pane_g2_ParamLimits

0xedfa,	// (0x00051de7) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x00052ea5) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x00052ea5) list_tmo_note_info_pane_g

0xee16,	// (0x00051e03) list_tmo_note_info_text_pane_ParamLimits

0xee16,	// (0x00051e03) list_tmo_note_info_text_pane

0xee9b,	// (0x00051e88) list_tmo_link_pane

0xeea8,	// (0x00051e95) scroll_pane_cp20

0xeeb5,	// (0x00051ea2) list_single_tmo_link_pane_ParamLimits

0xeeb5,	// (0x00051ea2) list_single_tmo_link_pane

0xeec5,	// (0x00051eb2) list_single_tmo_link_pane_t1

0xeed3,	// (0x00051ec0) list_tmo_note_info_text_pane_t1_ParamLimits

0xeed3,	// (0x00051ec0) list_tmo_note_info_text_pane_t1

0x64af,	// (0x0004949c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x64af,	// (0x0004949c) aid_size_touch_scroll_bar_cp01

0x53a5,	// (0x00048392) aid_size_touch_slider_marker

0x5f5b,	// (0x00048f48) popup_settings_window_ParamLimits

0x5f5b,	// (0x00048f48) popup_settings_window

0x551e,	// (0x0004850b) popup_candi_list_indi_window

0x8bd7,	// (0x0004bbc4) aid_touch_navi_pane_ParamLimits

0x7b51,	// (0x0004ab3e) rs_clock_indi_pane

0x7b5a,	// (0x0004ab47) sctrl_sk_bottom_pane_ParamLimits

0x7b6b,	// (0x0004ab58) sctrl_sk_top_pane_ParamLimits

0x7c54,	// (0x0004ac41) popup_fep_tooltip_window

0xe86e,	// (0x0005185b) aid_size_cell_widget_grid_ParamLimits

0xe8db,	// (0x000518c8) cell_ai5_widget_pane_g1_ParamLimits

0xe8db,	// (0x000518c8) cell_ai5_widget_pane_g1

0xe92f,	// (0x0005191c) cell_ai5_widget_pane_g6_ParamLimits

0xe93b,	// (0x00051928) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x00052e23) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x00052e23) cell_ai5_widget_pane_g

0xea6d,	// (0x00051a5a) cell_ai5_widget_pane_t10_ParamLimits

0xea6d,	// (0x00051a5a) cell_ai5_widget_pane_t10

0xea8b,	// (0x00051a78) grid_ai5_widget_pane_ParamLimits

0xeb23,	// (0x00051b10) cell_contacts_ai5_widget_pane_ParamLimits

0xeb23,	// (0x00051b10) cell_contacts_ai5_widget_pane

0xed0d,	// (0x00051cfa) popup_discreet_window_t3_ParamLimits

0xed0d,	// (0x00051cfa) popup_discreet_window_t3

0x83e0,	// (0x0004b3cd) popup_fshwr2_char_preview_window_ParamLimits

0x83e0,	// (0x0004b3cd) popup_fshwr2_char_preview_window

0xee34,	// (0x00051e21) tmo_note_info_pane_t1

0xee49,	// (0x00051e36) tmo_note_info_pane_t2

0xee62,	// (0x00051e4f) tmo_note_info_pane_t3

0xee77,	// (0x00051e64) tmo_note_info_pane_t4

0xee89,	// (0x00051e76) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x00052eaa) tmo_note_info_pane_t

0xee9b,	// (0x00051e88) list_tmo_link_pane_ParamLimits

0xeea8,	// (0x00051e95) scroll_pane_cp20_ParamLimits

0xd9d8,	// (0x000509c5) bg_popup_fep_char_preview_window_cp01

0xeeec,	// (0x00051ed9) popup_fshwr2_char_preview_window_t1

0xeefa,	// (0x00051ee7) popup_candi_list_indi_window_g1

0xef03,	// (0x00051ef0) bg_cell_contacts_ai5_widget_pane

0xef0f,	// (0x00051efc) cell_contacts_ai5_widget_pane_g1

0xef24,	// (0x00051f11) cell_contacts_ai5_widget_pane_g2

0xef30,	// (0x00051f1d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x00052eb5) cell_contacts_ai5_widget_pane_g

0xef3c,	// (0x00051f29) cell_contacts_ai5_widget_pane_t1

0x07e9,	// (0x000437d6) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefb3,	// (0x00051fa0) settings_container_pane

0x41a9,	// (0x00047196) listscroll_set_pane_copy1

0xae04,	// (0x0004ddf1) scroll_pane_cp121_copy1

0xefbf,	// (0x00051fac) set_content_pane_copy1

0xefc7,	// (0x00051fb4) aid_height_set_list_copy1_ParamLimits

0xefc7,	// (0x00051fb4) aid_height_set_list_copy1

0xa468,	// (0x0004d455) aid_size_parent_copy1_ParamLimits

0xa468,	// (0x0004d455) aid_size_parent_copy1

0xefd3,	// (0x00051fc0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd3,	// (0x00051fc0) button_value_adjust_pane_cp6_copy1

0x6fe2,	// (0x00049fcf) list_highlight_pane_cp2_copy1_ParamLimits

0x6fe2,	// (0x00049fcf) list_highlight_pane_cp2_copy1

0xefe7,	// (0x00051fd4) list_set_pane_copy1_ParamLimits

0xefe7,	// (0x00051fd4) list_set_pane_copy1

0xef4e,	// (0x00051f3b) main_pane_set_t1_copy1_ParamLimits

0xef4e,	// (0x00051f3b) main_pane_set_t1_copy1

0xef88,	// (0x00051f75) main_pane_set_t2_copy1_ParamLimits

0xef88,	// (0x00051f75) main_pane_set_t2_copy1

0xf0ae,	// (0x0005209b) main_pane_set_t3_copy1

0xf0bc,	// (0x000520a9) main_pane_set_t4_copy1

0xefa7,	// (0x00051f94) set_content_pane_g1_copy1_ParamLimits

0xefa7,	// (0x00051f94) set_content_pane_g1_copy1

0xf0ca,	// (0x000520b7) setting_code_pane_copy1

0xf0d2,	// (0x000520bf) setting_slider_graphic_pane_copy1

0xf0d2,	// (0x000520bf) setting_slider_pane_copy1

0xf0d2,	// (0x000520bf) setting_text_pane_copy1

0xf0d2,	// (0x000520bf) setting_volume_pane_copy1

0xf0ca,	// (0x000520b7) settings_code_pane_cp2_copy1

0xf0da,	// (0x000520c7) settings_code_pane_cp_copy1_ParamLimits

0xf0da,	// (0x000520c7) settings_code_pane_cp_copy1

0x84ad,	// (0x0004b49a) volume_set_pane_copy1

0xf0ee,	// (0x000520db) volume_set_pane_g10_copy1

0xf0fa,	// (0x000520e7) volume_set_pane_g1_copy1

0xf104,	// (0x000520f1) volume_set_pane_g2_copy1

0xf10e,	// (0x000520fb) volume_set_pane_g3_copy1

0xf118,	// (0x00052105) volume_set_pane_g4_copy1

0xf122,	// (0x0005210f) volume_set_pane_g5_copy1

0xf12c,	// (0x00052119) volume_set_pane_g6_copy1

0xf136,	// (0x00052123) volume_set_pane_g7_copy1

0xf140,	// (0x0005212d) volume_set_pane_g8_copy1

0xf14a,	// (0x00052137) volume_set_pane_g9_copy1

0xda46,	// (0x00050a33) bg_set_opt_pane_cp_copy1_ParamLimits

0xda46,	// (0x00050a33) bg_set_opt_pane_cp_copy1

0x84b9,	// (0x0004b4a6) setting_slider_pane_t1_copy1_ParamLimits

0x84b9,	// (0x0004b4a6) setting_slider_pane_t1_copy1

0x84d7,	// (0x0004b4c4) setting_slider_pane_t2_copy1_ParamLimits

0x84d7,	// (0x0004b4c4) setting_slider_pane_t2_copy1

0x84f1,	// (0x0004b4de) setting_slider_pane_t3_copy1_ParamLimits

0x84f1,	// (0x0004b4de) setting_slider_pane_t3_copy1

0x8509,	// (0x0004b4f6) slider_set_pane_copy1_ParamLimits

0x8509,	// (0x0004b4f6) slider_set_pane_copy1

0x0844,	// (0x00043831) set_opt_bg_pane_g1_copy2

0x084c,	// (0x00043839) set_opt_bg_pane_g2_copy2

0xf154,	// (0x00052141) set_opt_bg_pane_g3_copy2

0x085c,	// (0x00043849) set_opt_bg_pane_g4_copy2

0x0864,	// (0x00043851) set_opt_bg_pane_g5_copy2

0x086c,	// (0x00043859) set_opt_bg_pane_g6_copy2

0xf15e,	// (0x0005214b) set_opt_bg_pane_g7_copy2

0xf168,	// (0x00052155) set_opt_bg_pane_g8_copy2

0xf172,	// (0x0005215f) set_opt_bg_pane_g9_copy2

0x851f,	// (0x0004b50c) aid_size_touch_slider_mark_copy1_ParamLimits

0x851f,	// (0x0004b50c) aid_size_touch_slider_mark_copy1

0xf17c,	// (0x00052169) slider_set_pane_g1_copy1

0x8533,	// (0x0004b520) slider_set_pane_g2_copy1

0x7459,	// (0x0004a446) slider_set_pane_g3_copy1_ParamLimits

0x7459,	// (0x0004a446) slider_set_pane_g3_copy1

0x746d,	// (0x0004a45a) slider_set_pane_g4_copy1_ParamLimits

0x746d,	// (0x0004a45a) slider_set_pane_g4_copy1

0x7485,	// (0x0004a472) slider_set_pane_g5_copy1_ParamLimits

0x7485,	// (0x0004a472) slider_set_pane_g5_copy1

0x7459,	// (0x0004a446) slider_set_pane_g6_copy1_ParamLimits

0x7459,	// (0x0004a446) slider_set_pane_g6_copy1

0x853b,	// (0x0004b528) slider_set_pane_g7_copy1_ParamLimits

0x853b,	// (0x0004b528) slider_set_pane_g7_copy1

0xd9ec,	// (0x000509d9) bg_set_opt_pane_cp2_copy1

0xf185,	// (0x00052172) setting_slider_graphic_pane_g1_copy1

0xf18e,	// (0x0005217b) setting_slider_graphic_pane_t1_copy1

0xf19e,	// (0x0005218b) setting_slider_graphic_pane_t2_copy1

0xf1ae,	// (0x0005219b) slider_set_pane_cp_copy1

0xf1be,	// (0x000521ab) input_focus_pane_cp1_copy1

0xf1c7,	// (0x000521b4) list_set_text_pane_copy1

0xf1cf,	// (0x000521bc) setting_text_pane_g1_copy1

0x4d94,	// (0x00047d81) set_text_pane_t1_copy1

0xf1be,	// (0x000521ab) input_focus_pane_cp2_copy1

0xf1cf,	// (0x000521bc) setting_code_pane_g1_copy1

0xf1d8,	// (0x000521c5) setting_code_pane_t1_copy1

0xf1e6,	// (0x000521d3) list_set_graphic_pane_copy1

0xd9ec,	// (0x000509d9) bg_set_opt_pane_cp4_copy1

0x6b1d,	// (0x00049b0a) list_set_graphic_pane_g1_copy1_ParamLimits

0x6b1d,	// (0x00049b0a) list_set_graphic_pane_g1_copy1

0xf1f8,	// (0x000521e5) list_set_graphic_pane_g2_copy1

0x6b35,	// (0x00049b22) list_set_graphic_pane_t1_copy1_ParamLimits

0x6b35,	// (0x00049b22) list_set_graphic_pane_t1_copy1

0xb6e3,	// (0x0004e6d0) rs_clock_indi_pane_g1

0xf200,	// (0x000521ed) rs_clock_indi_pane_t1

0xf20e,	// (0x000521fb) rs_indi_pane

0xf216,	// (0x00052203) rs_indi_pane_g1

0xf21f,	// (0x0005220c) rs_indi_pane_g2

0xf228,	// (0x00052215) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x00052ebc) rs_indi_pane_g

0x41a9,	// (0x00047196) bg_popup_preview_window_pane_cp03

0xf231,	// (0x0005221e) popup_fep_tooltip_window_t1

0xc39a,	// (0x0004f387) popup_note2_window_g2_ParamLimits

0xc39a,	// (0x0004f387) popup_note2_window_g2

0x0001,

0xfc68,	// (0x00052c55) popup_note2_window_g_ParamLimits

0xfc68,	// (0x00052c55) popup_note2_window_g

0xc8a2,	// (0x0004f88f) bg_popup_sub_pane_cp11_ParamLimits

0xc8af,	// (0x0004f89c) cell_ai3_links_pane_g1_ParamLimits

0xc8c6,	// (0x0004f8b3) cell_ai3_links_pane_t1

0x4d94,	// (0x00047d81) set_text_pane_t1_copy1_ParamLimits

0x6bb4,	// (0x00049ba1) cell_graphic_popup_pane_cp2_ParamLimits

0x6bb4,	// (0x00049ba1) cell_graphic_popup_pane_cp2

0xf23f,	// (0x0005222c) cell_graphic_popup_pane_g1_cp2

0xddbe,	// (0x00050dab) cell_graphic_popup_pane_g2_cp2

0xf247,	// (0x00052234) cell_graphic_popup_pane_g3_cp2

0xf24f,	// (0x0005223c) cell_graphic_popup_pane_t2_cp2

0xddcf,	// (0x00050dbc) grid_highlight_pane_cp3_cp2

0x0aed,	// (0x00043ada) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x07e9,	// (0x000437d6) main_tmo_pane_ParamLimits

0xcbe6,	// (0x0004fbd3) popup_tmo_big_image_note_window

0xe8ca,	// (0x000518b7) cell_ai5_widget_list_pane

0xe8d2,	// (0x000518bf) cell_ai5_widget_lrg_icon_pane

0xee34,	// (0x00051e21) tmo_note_info_pane_t1_ParamLimits

0xee49,	// (0x00051e36) tmo_note_info_pane_t2_ParamLimits

0xee62,	// (0x00051e4f) tmo_note_info_pane_t3_ParamLimits

0xee77,	// (0x00051e64) tmo_note_info_pane_t4_ParamLimits

0xee89,	// (0x00051e76) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x00052eaa) tmo_note_info_pane_t_ParamLimits

0xefb3,	// (0x00051fa0) settings_container_pane_ParamLimits

0xf1b6,	// (0x000521a3) indicator_popup_pane_cp5

0xf1b6,	// (0x000521a3) indicator_popup_pane_cp6

0xf1e6,	// (0x000521d3) list_set_graphic_pane_copy1_ParamLimits

0xd9d8,	// (0x000509c5) bg_popup_window_pane_cp23

0xf25d,	// (0x0005224a) popup_tmo_big_image_note_window_g1

0xf269,	// (0x00052256) popup_tmo_big_image_note_window_t1

0xf279,	// (0x00052266) popup_tmo_big_image_note_window_t2

0xf289,	// (0x00052276) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x00052ec3) popup_tmo_big_image_note_window_t

0xb6e3,	// (0x0004e6d0) cell_ai5_widget_lrg_icon_pane_g1

0xf299,	// (0x00052286) cell_ai5_widget_lrg_icon_pane_t1

0xf2a7,	// (0x00052294) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a7,	// (0x00052294) cell_ai5_widget_list_row_pane

0xf2bf,	// (0x000522ac) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2bf,	// (0x000522ac) cell_ai5_widget_list_row_pane_g1

0xf2cc,	// (0x000522b9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cc,	// (0x000522b9) cell_ai5_widget_list_row_pane_t1

0xf2f7,	// (0x000522e4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2f7,	// (0x000522e4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedd,	// (0x00052eca) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x00052eca) cell_ai5_widget_list_row_pane_t

0xd9d8,	// (0x000509c5) main_fep_vtchi_ss_pane

0xf33b,	// (0x00052328) popup_fep_char_pre_window

0xf343,	// (0x00052330) popup_fep_ituss_window

0xf364,	// (0x00052351) popup_fep_vkbss_window

0xf385,	// (0x00052372) grid_vkbss_keypad_pane_ParamLimits

0xf385,	// (0x00052372) grid_vkbss_keypad_pane

0xf395,	// (0x00052382) ituss_keypad_pane

0x855d,	// (0x0004b54a) aid_vkbss_key_offset_ParamLimits

0x855d,	// (0x0004b54a) aid_vkbss_key_offset

0x8569,	// (0x0004b556) cell_vkbss_key_pane_ParamLimits

0x8569,	// (0x0004b556) cell_vkbss_key_pane

0xf3a4,	// (0x00052391) bg_cell_vkbss_key_g1_ParamLimits

0xf3a4,	// (0x00052391) bg_cell_vkbss_key_g1

0xf3b0,	// (0x0005239d) cell_vkbss_key_3p_pane_ParamLimits

0xf3b0,	// (0x0005239d) cell_vkbss_key_3p_pane

0xf3ca,	// (0x000523b7) cell_vkbss_key_g1_ParamLimits

0xf3ca,	// (0x000523b7) cell_vkbss_key_g1

0xf3e4,	// (0x000523d1) cell_vkbss_key_t1_ParamLimits

0xf3e4,	// (0x000523d1) cell_vkbss_key_t1

0x857f,	// (0x0004b56c) cell_ituss_key_pane_ParamLimits

0x857f,	// (0x0004b56c) cell_ituss_key_pane

0xf40f,	// (0x000523fc) bg_cell_ituss_key_g1_ParamLimits

0xf40f,	// (0x000523fc) bg_cell_ituss_key_g1

0xf41b,	// (0x00052408) cell_ituss_key_pane_g1_ParamLimits

0xf41b,	// (0x00052408) cell_ituss_key_pane_g1

0x8590,	// (0x0004b57d) cell_ituss_key_pane_g2_ParamLimits

0x8590,	// (0x0004b57d) cell_ituss_key_pane_g2

0x0002,

0xfee4,	// (0x00052ed1) cell_ituss_key_pane_g_ParamLimits

0xfee4,	// (0x00052ed1) cell_ituss_key_pane_g

0x85bc,	// (0x0004b5a9) cell_ituss_key_t1_ParamLimits

0x85bc,	// (0x0004b5a9) cell_ituss_key_t1

0x85f6,	// (0x0004b5e3) cell_ituss_key_t2_ParamLimits

0x85f6,	// (0x0004b5e3) cell_ituss_key_t2

0x8627,	// (0x0004b614) cell_ituss_key_t3_ParamLimits

0x8627,	// (0x0004b614) cell_ituss_key_t3

0x85f6,	// (0x0004b5e3) cell_ituss_key_t4_ParamLimits

0x85f6,	// (0x0004b5e3) cell_ituss_key_t4

0x0004,

0xfeeb,	// (0x00052ed8) cell_ituss_key_t_ParamLimits

0xfeeb,	// (0x00052ed8) cell_ituss_key_t

0xf441,	// (0x0005242e) cell_vkbss_key_3p_pane_g1

0xf449,	// (0x00052436) cell_vkbss_key_3p_pane_g2

0xf451,	// (0x0005243e) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x00052ee3) cell_vkbss_key_3p_pane_g

0xd9d8,	// (0x000509c5) bg_popup_fep_char_preview_window_cp02

0x866a,	// (0x0004b657) popup_fep_char_pre_window_t1

0xe864,	// (0x00051851) main_ai5_sk_pane

0xef03,	// (0x00051ef0) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef0f,	// (0x00051efc) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef24,	// (0x00051f11) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef30,	// (0x00051f1d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x00052eb5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef3c,	// (0x00051f29) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x07e9,	// (0x000437d6) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf459,	// (0x00052446) main_ai5_sk_pane_g1

0x9527,	// (0x0004c514) popup_query_code_window_g1

0xf359,	// (0x00052346) popup_fep_vkb_icf_pane

0xf36f,	// (0x0005235c) popup_fep_vtchi_icf_pane

0xf462,	// (0x0005244f) bg_icf_pane

0xf46e,	// (0x0005245b) list_vkb_icf_pane

0xf47a,	// (0x00052467) bg_icf_pane_cp01

0xf48d,	// (0x0005247a) vtchi_icf_list_pane

0xf49e,	// (0x0005248b) list_vkb_icf_pane_t1_ParamLimits

0xf49e,	// (0x0005248b) list_vkb_icf_pane_t1

0xf4b4,	// (0x000524a1) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x000524a1) vtchi_icf_list_pane_t1

0xf343,	// (0x00052330) popup_fep_ituss_window_ParamLimits

0xf36f,	// (0x0005235c) popup_fep_vtchi_icf_pane_ParamLimits

0xf395,	// (0x00052382) ituss_keypad_pane_ParamLimits

0x8551,	// (0x0004b53e) ituss_sks_pane

0xf462,	// (0x0005244f) bg_icf_pane_ParamLimits

0xf31f,	// (0x0005230c) icf_edit_indi_pane_ParamLimits

0xf31f,	// (0x0005230c) icf_edit_indi_pane

0xf46e,	// (0x0005245b) list_vkb_icf_pane_ParamLimits

0xf47a,	// (0x00052467) bg_icf_pane_cp01_ParamLimits

0xf32e,	// (0x0005231b) icf_edit_indi_pane_cp01_ParamLimits

0xf32e,	// (0x0005231b) icf_edit_indi_pane_cp01

0xf495,	// (0x00052482) vtchi_query_pane

0xb95e,	// (0x0004e94b) icf_edit_indi_pane_g1_ParamLimits

0xb95e,	// (0x0004e94b) icf_edit_indi_pane_g1

0xf523,	// (0x00052510) icf_edit_indi_pane_g2_ParamLimits

0xf523,	// (0x00052510) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x00052efb) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x00052efb) icf_edit_indi_pane_g

0xf532,	// (0x0005251f) icf_edit_indi_pane_t1

0xf4cc,	// (0x000524b9) bg_input_focus_pane_cp042

0xdfa2,	// (0x00050f8f) vtchi_button_pane

0xf4d5,	// (0x000524c2) vtchi_query_pane_t1

0xf4e3,	// (0x000524d0) vtchi_query_pane_t2

0xf4f1,	// (0x000524de) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x00052eea) vtchi_query_pane_t

0xd9d8,	// (0x000509c5) bg_button_pane_cp13

0xf4ff,	// (0x000524ec) vtchi_button_pane_g1

0x8679,	// (0x0004b666) ituss_sks_pane_g1

0x8684,	// (0x0004b671) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x00052ef1) ituss_sks_pane_g

0xf507,	// (0x000524f4) ituss_sks_pane_t1

0xf515,	// (0x00052502) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x00052ef6) ituss_sks_pane_t

0xb193,	// (0x0004e180) indicator_nsta_pane_cp_g1

0xb19c,	// (0x0004e189) indicator_nsta_pane_cp_g2

0xb1a4,	// (0x0004e191) indicator_nsta_pane_cp_g3

0xb1ac,	// (0x0004e199) indicator_nsta_pane_cp_g4

0xb1b4,	// (0x0004e1a1) indicator_nsta_pane_cp_g5

0xb1bc,	// (0x0004e1a9) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x00052a9f) indicator_nsta_pane_cp_g

0xd8ee,	// (0x000508db) cell_graphic2_pane_t2_ParamLimits

0xd8ee,	// (0x000508db) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x00052dac) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x00052dac) cell_graphic2_pane_t

0xd91b,	// (0x00050908) cell_graphic2_control_pane_t1

0x68d5,	// (0x000498c2) signal_pane_g3_ParamLimits

0x68d5,	// (0x000498c2) signal_pane_g3

0x68e7,	// (0x000498d4) signal_pane_g4_ParamLimits

0x68e7,	// (0x000498d4) signal_pane_g4

0xf309,	// (0x000522f6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf309,	// (0x000522f6) cell_ai5_widget_list_row_pane_t3

0xf42f,	// (0x0005241c) cell_ituss_key_pane_t1_ParamLimits

0xf42f,	// (0x0005241c) cell_ituss_key_pane_t1

0x91a4,	// (0x0004c191) form_field_data_wide_pane_vc_t2_ParamLimits

0x91a4,	// (0x0004c191) form_field_data_wide_pane_vc_t2

0x91b8,	// (0x0004c1a5) form_field_data_wide_pane_vc_t3_ParamLimits

0x91b8,	// (0x0004c1a5) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x000527fb) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x000527fb) form_field_data_wide_pane_vc_t

0xae44,	// (0x0004de31) form_field_slider_wide_pane_vc_t3_ParamLimits

0xae44,	// (0x0004de31) form_field_slider_wide_pane_vc_t3

0xaf1a,	// (0x0004df07) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaf1a,	// (0x0004df07) form_field_popup_wide_pane_vc_t2

0xaf31,	// (0x0004df1e) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaf31,	// (0x0004df1e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa1,	// (0x00052a8e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa1,	// (0x00052a8e) form_field_popup_wide_pane_vc_t

0x8384,	// (0x0004b371) aid_fshwr2_btn_pane_ParamLimits

0x8390,	// (0x0004b37d) aid_fshwr2_syb_pane_ParamLimits

0x839c,	// (0x0004b389) aid_fshwr2_txt_pane_ParamLimits

0x07e9,	// (0x000437d6) fshwr2_bg_pane_ParamLimits

0x83a8,	// (0x0004b395) fshwr2_func_candi_pane_ParamLimits

0x83bb,	// (0x0004b3a8) fshwr2_hwr_syb_pane_ParamLimits

0x83c9,	// (0x0004b3b6) fshwr2_icf_pane_ParamLimits

0x7652,	// (0x0004a63f) list_double_graphic_pane_vc_g4_ParamLimits

0x7652,	// (0x0004a63f) list_double_graphic_pane_vc_g4

0x85b0,	// (0x0004b59d) cell_ituss_key_pane_g3_ParamLimits

0x85b0,	// (0x0004b59d) cell_ituss_key_pane_g3

0x8658,	// (0x0004b645) cell_ituss_key_t5_ParamLimits

0x8658,	// (0x0004b645) cell_ituss_key_t5
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large

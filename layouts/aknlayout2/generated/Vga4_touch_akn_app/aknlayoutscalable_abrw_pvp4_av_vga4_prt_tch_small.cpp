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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000302db };

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
0x56d8,	// (0x000359b3) Screen

0x56e4,	// (0x000359bf) application_window_ParamLimits

0x56e4,	// (0x000359bf) application_window

0xf475,	// (0x0003f750) screen_g1

0x5740,	// (0x00035a1b) area_bottom_pane_ParamLimits

0x5740,	// (0x00035a1b) area_bottom_pane

0x5800,	// (0x00035adb) area_top_pane_ParamLimits

0x5800,	// (0x00035adb) area_top_pane

0x589e,	// (0x00035b79) main_pane_ParamLimits

0x589e,	// (0x00035b79) main_pane

0xf47f,	// (0x0003f75a) misc_graphics

0x8fcb,	// (0x000392a6) battery_pane_ParamLimits

0x8fcb,	// (0x000392a6) battery_pane

0x9c89,	// (0x00039f64) bg_status_flat_pane_g8

0x9c91,	// (0x00039f6c) bg_status_flat_pane_g9

0x9093,	// (0x0003936e) context_pane_ParamLimits

0x9093,	// (0x0003936e) context_pane

0x91b7,	// (0x00039492) navi_pane_ParamLimits

0x91b7,	// (0x00039492) navi_pane

0x9247,	// (0x00039522) signal_pane_ParamLimits

0x9247,	// (0x00039522) signal_pane

0x0008,

0xf87a,	// (0x0003fb55) bg_status_flat_pane_g

0x92b4,	// (0x0003958f) status_pane_g1_ParamLimits

0x92b4,	// (0x0003958f) status_pane_g1

0x92c8,	// (0x000395a3) status_pane_g2_ParamLimits

0x92c8,	// (0x000395a3) status_pane_g2

0x92d4,	// (0x000395af) status_pane_g3_ParamLimits

0x92d4,	// (0x000395af) status_pane_g3

0x0004,

0xf7a1,	// (0x0003fa7c) status_pane_g_ParamLimits

0xf7a1,	// (0x0003fa7c) status_pane_g

0x9308,	// (0x000395e3) title_pane_ParamLimits

0x9308,	// (0x000395e3) title_pane

0x9345,	// (0x00039620) uni_indicator_pane_ParamLimits

0x9345,	// (0x00039620) uni_indicator_pane

0x88b4,	// (0x00038b8f) bg_list_pane_ParamLimits

0x88b4,	// (0x00038b8f) bg_list_pane

0x88d4,	// (0x00038baf) find_pane

0x88dc,	// (0x00038bb7) listscroll_app_pane_ParamLimits

0x88dc,	// (0x00038bb7) listscroll_app_pane

0x88e8,	// (0x00038bc3) listscroll_form_pane

0x88f0,	// (0x00038bcb) listscroll_gen_pane_ParamLimits

0x88f0,	// (0x00038bcb) listscroll_gen_pane

0x8904,	// (0x00038bdf) listscroll_set_pane

0x64a1,	// (0x0003677c) main_idle_act_pane

0x6e65,	// (0x00037140) main_idle_trad_pane

0x6e65,	// (0x00037140) main_list_empty_pane

0x891e,	// (0x00038bf9) main_midp_pane

0x892a,	// (0x00038c05) main_pane_g1_ParamLimits

0x892a,	// (0x00038c05) main_pane_g1

0x8938,	// (0x00038c13) popup_ai_message_window_ParamLimits

0x8938,	// (0x00038c13) popup_ai_message_window

0x89ec,	// (0x00038cc7) popup_fep_china_uni_window_ParamLimits

0x89ec,	// (0x00038cc7) popup_fep_china_uni_window

0x8a4c,	// (0x00038d27) popup_fep_japan_candidate_window_ParamLimits

0x8a4c,	// (0x00038d27) popup_fep_japan_candidate_window

0x8a76,	// (0x00038d51) popup_fep_japan_predictive_window_ParamLimits

0x8a76,	// (0x00038d51) popup_fep_japan_predictive_window

0x8aac,	// (0x00038d87) popup_find_window

0x8ab9,	// (0x00038d94) popup_grid_graphic_window_ParamLimits

0x8ab9,	// (0x00038d94) popup_grid_graphic_window

0x8ae7,	// (0x00038dc2) popup_large_graphic_colour_window

0x8b0d,	// (0x00038de8) popup_menu_window_ParamLimits

0x8b0d,	// (0x00038de8) popup_menu_window

0x8cd7,	// (0x00038fb2) popup_note_image_window

0x8cc1,	// (0x00038f9c) popup_note_wait_window_ParamLimits

0x8cc1,	// (0x00038f9c) popup_note_wait_window

0x8cc1,	// (0x00038f9c) popup_note_window_ParamLimits

0x8cc1,	// (0x00038f9c) popup_note_window

0x8d3d,	// (0x00039018) popup_query_code_window_ParamLimits

0x8d3d,	// (0x00039018) popup_query_code_window

0x8d53,	// (0x0003902e) popup_query_data_code_window_ParamLimits

0x8d53,	// (0x0003902e) popup_query_data_code_window

0x8d76,	// (0x00039051) popup_query_data_window_ParamLimits

0x8d76,	// (0x00039051) popup_query_data_window

0x8d98,	// (0x00039073) popup_query_sat_info_window_ParamLimits

0x8d98,	// (0x00039073) popup_query_sat_info_window

0x8dd7,	// (0x000390b2) popup_snote_single_graphic_window_ParamLimits

0x8dd7,	// (0x000390b2) popup_snote_single_graphic_window

0x8dd7,	// (0x000390b2) popup_snote_single_text_window_ParamLimits

0x8dd7,	// (0x000390b2) popup_snote_single_text_window

0x8dee,	// (0x000390c9) popup_sub_window_general

0x8f34,	// (0x0003920f) popup_window_general_ParamLimits

0x8f34,	// (0x0003920f) popup_window_general

0x8f4d,	// (0x00039228) power_save_pane

0x6ff7,	// (0x000372d2) control_pane_g1_ParamLimits

0x6ff7,	// (0x000372d2) control_pane_g1

0x7020,	// (0x000372fb) control_pane_g2_ParamLimits

0x7020,	// (0x000372fb) control_pane_g2

0x885d,	// (0x00038b38) control_pane_g3_ParamLimits

0x885d,	// (0x00038b38) control_pane_g3

0x0007,

0xf789,	// (0x0003fa64) control_pane_g_ParamLimits

0xf789,	// (0x0003fa64) control_pane_g

0x7068,	// (0x00037343) control_pane_t1_ParamLimits

0x7068,	// (0x00037343) control_pane_t1

0x70b4,	// (0x0003738f) control_pane_t2_ParamLimits

0x70b4,	// (0x0003738f) control_pane_t2

0x0002,

0xf79a,	// (0x0003fa75) control_pane_t_ParamLimits

0xf79a,	// (0x0003fa75) control_pane_t

0x877e,	// (0x00038a59) navi_navi_volume_pane_cp1

0x8787,	// (0x00038a62) status_small_icon_pane

0x878f,	// (0x00038a6a) status_small_pane_g1_ParamLimits

0x878f,	// (0x00038a6a) status_small_pane_g1

0x87c3,	// (0x00038a9e) status_small_pane_g2_ParamLimits

0x87c3,	// (0x00038a9e) status_small_pane_g2

0x87cf,	// (0x00038aaa) status_small_pane_g3_ParamLimits

0x87cf,	// (0x00038aaa) status_small_pane_g3

0x87db,	// (0x00038ab6) status_small_pane_g4_ParamLimits

0x87db,	// (0x00038ab6) status_small_pane_g4

0x87e7,	// (0x00038ac2) status_small_pane_g5_ParamLimits

0x87e7,	// (0x00038ac2) status_small_pane_g5

0x87f6,	// (0x00038ad1) status_small_pane_g6_ParamLimits

0x87f6,	// (0x00038ad1) status_small_pane_g6

0x0007,

0xf778,	// (0x0003fa53) status_small_pane_g_ParamLimits

0xf778,	// (0x0003fa53) status_small_pane_g

0x8826,	// (0x00038b01) status_small_pane_t1

0x8849,	// (0x00038b24) status_small_wait_pane_ParamLimits

0x8849,	// (0x00038b24) status_small_wait_pane

0x6814,	// (0x00036aef) aid_levels_signal_ParamLimits

0x6814,	// (0x00036aef) aid_levels_signal

0x6826,	// (0x00036b01) signal_pane_g1_ParamLimits

0x6826,	// (0x00036b01) signal_pane_g1

0x683b,	// (0x00036b16) signal_pane_g2_ParamLimits

0x683b,	// (0x00036b16) signal_pane_g2

0x0003,

0xf709,	// (0x0003f9e4) signal_pane_g_ParamLimits

0xf709,	// (0x0003f9e4) signal_pane_g

0x2d66,	// (0x00033041) context_pane_g1

0x5afd,	// (0x00035dd8) title_pane_g1

0x5b1b,	// (0x00035df6) title_pane_t1

0xf4a1,	// (0x0003f77c) title_pane_t2

0xf4c7,	// (0x0003f7a2) title_pane_t3

0x0002,

0xf55d,	// (0x0003f838) title_pane_t

0x935d,	// (0x00039638) aid_levels_battery_ParamLimits

0x935d,	// (0x00039638) aid_levels_battery

0x9371,	// (0x0003964c) battery_pane_g1_ParamLimits

0x9371,	// (0x0003964c) battery_pane_g1

0x9387,	// (0x00039662) battery_pane_g2_ParamLimits

0x9387,	// (0x00039662) battery_pane_g2

0x0001,

0xf7ac,	// (0x0003fa87) battery_pane_g_ParamLimits

0xf7ac,	// (0x0003fa87) battery_pane_g

0xa5d3,	// (0x0003a8ae) uni_indicator_pane_g1

0xa5ea,	// (0x0003a8c5) uni_indicator_pane_g2

0xa600,	// (0x0003a8db) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0003fbfd) uni_indicator_pane_g

0x6cd3,	// (0x00036fae) navi_icon_pane_ParamLimits

0x6cd3,	// (0x00036fae) navi_icon_pane

0x6c1a,	// (0x00036ef5) navi_midp_pane

0x6cef,	// (0x00036fca) navi_navi_pane

0x6cf9,	// (0x00036fd4) navi_text_pane_ParamLimits

0x6cf9,	// (0x00036fd4) navi_text_pane

0xf475,	// (0x0003f750) status_small_wait_pane_g1

0x24f3,	// (0x000327ce) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0003fbf8) status_small_wait_pane_g

0xa2e6,	// (0x0003a5c1) navi_navi_icon_text_pane

0xa2ee,	// (0x0003a5c9) navi_navi_pane_g1_ParamLimits

0xa2ee,	// (0x0003a5c9) navi_navi_pane_g1

0xa300,	// (0x0003a5db) navi_navi_pane_g2_ParamLimits

0xa300,	// (0x0003a5db) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0003fbc6) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0003fbc6) navi_navi_pane_g

0xa312,	// (0x0003a5ed) navi_navi_tabs_pane

0xa31b,	// (0x0003a5f6) navi_navi_text_pane

0xa2e6,	// (0x0003a5c1) navi_navi_volume_pane

0xa2c2,	// (0x0003a59d) navi_text_pane_t1

0xa2b6,	// (0x0003a591) navi_icon_pane_g1

0xa209,	// (0x0003a4e4) navi_navi_text_pane_t1

0x7408,	// (0x000376e3) navi_navi_volume_pane_g1

0x7410,	// (0x000376eb) volume_small_pane

0xa16f,	// (0x0003a44a) navi_navi_icon_text_pane_g1

0xa177,	// (0x0003a452) navi_navi_icon_text_pane_t1

0x6cef,	// (0x00036fca) navi_tabs_2_long_pane

0x6cef,	// (0x00036fca) navi_tabs_2_pane

0x6cef,	// (0x00036fca) navi_tabs_3_long_pane

0x6cef,	// (0x00036fca) navi_tabs_3_pane

0x6cef,	// (0x00036fca) navi_tabs_4_pane

0x73e8,	// (0x000376c3) tabs_2_active_pane_ParamLimits

0x73e8,	// (0x000376c3) tabs_2_active_pane

0x73f8,	// (0x000376d3) tabs_2_passive_pane_ParamLimits

0x73f8,	// (0x000376d3) tabs_2_passive_pane

0x73b6,	// (0x00037691) tabs_3_active_pane_ParamLimits

0x73b6,	// (0x00037691) tabs_3_active_pane

0x73c6,	// (0x000376a1) tabs_3_passive_pane_ParamLimits

0x73c6,	// (0x000376a1) tabs_3_passive_pane

0x73d7,	// (0x000376b2) tabs_3_passive_pane_cp_ParamLimits

0x73d7,	// (0x000376b2) tabs_3_passive_pane_cp

0x736a,	// (0x00037645) tabs_4_active_pane_ParamLimits

0x736a,	// (0x00037645) tabs_4_active_pane

0x737d,	// (0x00037658) tabs_4_passive_pane_ParamLimits

0x737d,	// (0x00037658) tabs_4_passive_pane

0x738e,	// (0x00037669) tabs_4_passive_pane_cp_ParamLimits

0x738e,	// (0x00037669) tabs_4_passive_pane_cp

0x739f,	// (0x0003767a) tabs_4_passive_pane_cp2_ParamLimits

0x739f,	// (0x0003767a) tabs_4_passive_pane_cp2

0x7346,	// (0x00037621) tabs_2_long_active_pane_ParamLimits

0x7346,	// (0x00037621) tabs_2_long_active_pane

0x7358,	// (0x00037633) tabs_2_long_passive_pane_ParamLimits

0x7358,	// (0x00037633) tabs_2_long_passive_pane

0x7307,	// (0x000375e2) tabs_3_long_active_pane_ParamLimits

0x7307,	// (0x000375e2) tabs_3_long_active_pane

0x731a,	// (0x000375f5) tabs_3_long_passive_pane_ParamLimits

0x731a,	// (0x000375f5) tabs_3_long_passive_pane

0x7333,	// (0x0003760e) tabs_3_long_passive_pane_cp_ParamLimits

0x7333,	// (0x0003760e) tabs_3_long_passive_pane_cp

0x72ad,	// (0x00037588) volume_small_pane_g1

0x72b6,	// (0x00037591) volume_small_pane_g2

0x72bf,	// (0x0003759a) volume_small_pane_g3

0x72c8,	// (0x000375a3) volume_small_pane_g4

0x72d1,	// (0x000375ac) volume_small_pane_g5

0x72da,	// (0x000375b5) volume_small_pane_g6

0x72e3,	// (0x000375be) volume_small_pane_g7

0x72ec,	// (0x000375c7) volume_small_pane_g8

0x72f5,	// (0x000375d0) volume_small_pane_g9

0x72fe,	// (0x000375d9) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0003fb92) volume_small_pane_g

0xf4d9,	// (0x0003f7b4) bg_active_tab_pane_cp2_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_active_tab_pane_cp2

0x5b83,	// (0x00035e5e) tabs_3_active_pane_g1

0x5b8b,	// (0x00035e66) tabs_3_active_pane_t1

0xf4d9,	// (0x0003f7b4) bg_passive_tab_pane_cp2_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_passive_tab_pane_cp2

0x5b83,	// (0x00035e5e) tabs_3_passive_pane_g1

0x5b8b,	// (0x00035e66) tabs_3_passive_pane_t1

0xf4d9,	// (0x0003f7b4) bg_active_tab_pane_cp3_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_active_tab_pane_cp3

0x5b9d,	// (0x00035e78) tabs_4_active_pane_g1

0x5ba5,	// (0x00035e80) tabs_4_active_pane_t1

0xf4d9,	// (0x0003f7b4) bg_passive_tab_pane_cp3_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_passive_tab_pane_cp3

0x5b9d,	// (0x00035e78) tabs_4_1_passive_pane_g1

0x5ba5,	// (0x00035e80) tabs_4_1_passive_pane_t1

0x891e,	// (0x00038bf9) list_highlight_pane_cp2

0xa84f,	// (0x0003ab2a) list_set_pane_ParamLimits

0xa84f,	// (0x0003ab2a) list_set_pane

0xa917,	// (0x0003abf2) main_pane_set_t1_ParamLimits

0xa917,	// (0x0003abf2) main_pane_set_t1

0xa937,	// (0x0003ac12) main_pane_set_t2_ParamLimits

0xa937,	// (0x0003ac12) main_pane_set_t2

0xa94b,	// (0x0003ac26) main_pane_set_t3_ParamLimits

0xa94b,	// (0x0003ac26) main_pane_set_t3

0xa95f,	// (0x0003ac3a) main_pane_set_t4_ParamLimits

0xa95f,	// (0x0003ac3a) main_pane_set_t4

0x0003,

0xf987,	// (0x0003fc62) main_pane_set_t_ParamLimits

0xf987,	// (0x0003fc62) main_pane_set_t

0xa973,	// (0x0003ac4e) setting_code_pane

0xa97d,	// (0x0003ac58) setting_slider_graphic_pane

0xa97d,	// (0x0003ac58) setting_slider_pane

0xa97d,	// (0x0003ac58) setting_text_pane

0xa97d,	// (0x0003ac58) setting_volume_pane

0x5bb7,	// (0x00035e92) volume_set_pane

0xf4d9,	// (0x0003f7b4) bg_set_opt_pane_cp

0x5bc1,	// (0x00035e9c) setting_slider_pane_t1

0x5bda,	// (0x00035eb5) setting_slider_pane_t2

0x5bf4,	// (0x00035ecf) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0003f83f) setting_slider_pane_t

0x5c0c,	// (0x00035ee7) slider_set_pane

0xf47f,	// (0x0003f75a) bg_set_opt_pane_cp2

0xf4e7,	// (0x0003f7c2) setting_slider_graphic_pane_g1

0x5c22,	// (0x00035efd) setting_slider_graphic_pane_t1

0x5c32,	// (0x00035f0d) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0003f846) setting_slider_graphic_pane_t

0x5c42,	// (0x00035f1d) slider_set_pane_cp

0xf47f,	// (0x0003f75a) input_focus_pane_cp1

0xa810,	// (0x0003aaeb) list_set_text_pane

0xf475,	// (0x0003f750) setting_text_pane_g1

0xf47f,	// (0x0003f75a) input_focus_pane_cp2

0xf475,	// (0x0003f750) setting_code_pane_g1

0xf4f0,	// (0x0003f7cb) setting_code_pane_t1

0x4213,	// (0x000344ee) set_text_pane_t1_ParamLimits

0x4213,	// (0x000344ee) set_text_pane_t1

0x2888,	// (0x00032b63) set_opt_bg_pane_g1

0x2890,	// (0x00032b6b) set_opt_bg_pane_g2

0xa7e8,	// (0x0003aac3) set_opt_bg_pane_g3

0x28a0,	// (0x00032b7b) set_opt_bg_pane_g4

0x28a8,	// (0x00032b83) set_opt_bg_pane_g5

0x28b0,	// (0x00032b8b) set_opt_bg_pane_g6

0xa7f2,	// (0x0003aacd) set_opt_bg_pane_g7

0xa7fc,	// (0x0003aad7) set_opt_bg_pane_g8

0xa806,	// (0x0003aae1) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0003fc4f) set_opt_bg_pane_g

0xa7db,	// (0x0003aab6) slider_set_pane_g1

0x74b9,	// (0x00037794) slider_set_pane_g2

0x0006,

0xf965,	// (0x0003fc40) slider_set_pane_g

0x7419,	// (0x000376f4) volume_set_pane_g1

0x7423,	// (0x000376fe) volume_set_pane_g2

0x742d,	// (0x00037708) volume_set_pane_g3

0x7437,	// (0x00037712) volume_set_pane_g4

0x7441,	// (0x0003771c) volume_set_pane_g5

0x744b,	// (0x00037726) volume_set_pane_g6

0x7455,	// (0x00037730) volume_set_pane_g7

0x745f,	// (0x0003773a) volume_set_pane_g8

0x7469,	// (0x00037744) volume_set_pane_g9

0x7473,	// (0x0003774e) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0003fc18) volume_set_pane_g

0x5c4a,	// (0x00035f25) indicator_pane_ParamLimits

0x5c4a,	// (0x00035f25) indicator_pane

0x5c56,	// (0x00035f31) main_idle_pane_g2_ParamLimits

0x5c56,	// (0x00035f31) main_idle_pane_g2

0x5c7e,	// (0x00035f59) main_pane_idle_g1_ParamLimits

0x5c7e,	// (0x00035f59) main_pane_idle_g1

0xf4fe,	// (0x0003f7d9) popup_clock_digital_analogue_window_ParamLimits

0xf4fe,	// (0x0003f7d9) popup_clock_digital_analogue_window

0x5c8c,	// (0x00035f67) soft_indicator_pane_ParamLimits

0x5c8c,	// (0x00035f67) soft_indicator_pane

0x5c9a,	// (0x00035f75) wallpaper_pane_ParamLimits

0x5c9a,	// (0x00035f75) wallpaper_pane

0xf475,	// (0x0003f750) wallpaper_pane_g1

0x5ca6,	// (0x00035f81) indicator_pane_g1_ParamLimits

0x5ca6,	// (0x00035f81) indicator_pane_g1

0xac37,	// (0x0003af12) navi_navi_icon_text_pane_srt_g1

0xf52c,	// (0x0003f807) soft_indicator_pane_t1

0x2285,	// (0x00032560) aid_ps_area_pane

0x5cb2,	// (0x00035f8d) aid_ps_clock_pane

0x2296,	// (0x00032571) aid_ps_indicator_pane

0x22a2,	// (0x0003257d) indicator_ps_pane_ParamLimits

0x22a2,	// (0x0003257d) indicator_ps_pane

0x22b1,	// (0x0003258c) power_save_pane_g1_ParamLimits

0x22b1,	// (0x0003258c) power_save_pane_g1

0x22bd,	// (0x00032598) power_save_pane_g2_ParamLimits

0x22bd,	// (0x00032598) power_save_pane_g2

0x56f4,	// (0x000359cf) aid_navinavi_width_pane

0x2285,	// (0x00032560) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0003f84b) power_save_pane_g_ParamLimits

0xf570,	// (0x0003f84b) power_save_pane_g

0x22cb,	// (0x000325a6) power_save_pane_t1_ParamLimits

0x22cb,	// (0x000325a6) power_save_pane_t1

0x5cb2,	// (0x00035f8d) aid_ps_clock_pane_ParamLimits

0x2296,	// (0x00032571) aid_ps_indicator_pane_ParamLimits

0x22dd,	// (0x000325b8) power_save_pane_t4_ParamLimits

0x22dd,	// (0x000325b8) power_save_pane_t4

0x0001,

0xf575,	// (0x0003f850) power_save_pane_t_ParamLimits

0xf575,	// (0x0003f850) power_save_pane_t

0x2307,	// (0x000325e2) power_save_t3_ParamLimits

0x2307,	// (0x000325e2) power_save_t3

0x22f2,	// (0x000325cd) power_save_t2_ParamLimits

0x22f2,	// (0x000325cd) power_save_t2

0x231c,	// (0x000325f7) indicator_ps_pane_g1

0x5cc0,	// (0x00035f9b) ai_gene_pane_ParamLimits

0x5cc0,	// (0x00035f9b) ai_gene_pane

0x5ccc,	// (0x00035fa7) ai_links_pane_ParamLimits

0x5ccc,	// (0x00035fa7) ai_links_pane

0x5cd8,	// (0x00035fb3) indicator_pane_cp1_ParamLimits

0x5cd8,	// (0x00035fb3) indicator_pane_cp1

0x5ce4,	// (0x00035fbf) main_pane_idle_g1_cp_ParamLimits

0x5ce4,	// (0x00035fbf) main_pane_idle_g1_cp

0x2325,	// (0x00032600) popup_ai_links_title_window

0x5cf0,	// (0x00035fcb) soft_indicator_pane_cp1_ParamLimits

0x5cf0,	// (0x00035fcb) soft_indicator_pane_cp1

0xa5c1,	// (0x0003a89c) ai_links_pane_g1

0xa5ca,	// (0x0003a8a5) grid_ai_links_pane

0xa5a6,	// (0x0003a881) ai_gene_pane_1

0xa5af,	// (0x0003a88a) ai_gene_pane_2

0xa5b8,	// (0x0003a893) list_highlight_pane_cp4

0xa586,	// (0x0003a861) cell_ai_link_pane_ParamLimits

0xa586,	// (0x0003a861) cell_ai_link_pane

0xa57e,	// (0x0003a859) cell_ai_link_pane_g1

0x24f3,	// (0x000327ce) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0003fbf3) cell_ai_link_pane_g

0xf47f,	// (0x0003f75a) grid_highlight_cp2

0xf47f,	// (0x0003f75a) bg_popup_sub_pane_cp1

0x233c,	// (0x00032617) popup_ai_links_title_window_t1

0xa4ca,	// (0x0003a7a5) ai_gene_pane_1_g1_ParamLimits

0xa4ca,	// (0x0003a7a5) ai_gene_pane_1_g1

0xa4d6,	// (0x0003a7b1) ai_gene_pane_1_g2_ParamLimits

0xa4d6,	// (0x0003a7b1) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0003fbe9) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0003fbe9) ai_gene_pane_1_g

0xa4e3,	// (0x0003a7be) ai_gene_pane_1_t1_ParamLimits

0xa4e3,	// (0x0003a7be) ai_gene_pane_1_t1

0xa517,	// (0x0003a7f2) grid_ai_soft_ind_pane

0xa4b5,	// (0x0003a790) ai_gene_pane_2_t1_ParamLimits

0xa4b5,	// (0x0003a790) ai_gene_pane_2_t1

0x5cfc,	// (0x00035fd7) main_pane_empty_t1_ParamLimits

0x5cfc,	// (0x00035fd7) main_pane_empty_t1

0x5d14,	// (0x00035fef) main_pane_empty_t2_ParamLimits

0x5d14,	// (0x00035fef) main_pane_empty_t2

0x5d29,	// (0x00036004) main_pane_empty_t3_ParamLimits

0x5d29,	// (0x00036004) main_pane_empty_t3

0x5d3b,	// (0x00036016) main_pane_empty_t4_ParamLimits

0x5d3b,	// (0x00036016) main_pane_empty_t4

0x5d4d,	// (0x00036028) main_pane_empty_t5_ParamLimits

0x5d4d,	// (0x00036028) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0003f855) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0003f855) main_pane_empty_t

0x28d9,	// (0x00032bb4) bg_popup_window_pane_ParamLimits

0x28d9,	// (0x00032bb4) bg_popup_window_pane

0xa217,	// (0x0003a4f2) find_popup_pane_cp2_ParamLimits

0xa217,	// (0x0003a4f2) find_popup_pane_cp2

0xa223,	// (0x0003a4fe) heading_pane_ParamLimits

0xa223,	// (0x0003a4fe) heading_pane

0xf47f,	// (0x0003f75a) bg_popup_sub_pane

0xa191,	// (0x0003a46c) bg_popup_window_pane_g1_ParamLimits

0xa191,	// (0x0003a46c) bg_popup_window_pane_g1

0xa19d,	// (0x0003a478) bg_popup_window_pane_g2_ParamLimits

0xa19d,	// (0x0003a478) bg_popup_window_pane_g2

0xa1a9,	// (0x0003a484) bg_popup_window_pane_g3_ParamLimits

0xa1a9,	// (0x0003a484) bg_popup_window_pane_g3

0xa1b5,	// (0x0003a490) bg_popup_window_pane_g4_ParamLimits

0xa1b5,	// (0x0003a490) bg_popup_window_pane_g4

0xa1c1,	// (0x0003a49c) bg_popup_window_pane_g5_ParamLimits

0xa1c1,	// (0x0003a49c) bg_popup_window_pane_g5

0xa1cd,	// (0x0003a4a8) bg_popup_window_pane_g6_ParamLimits

0xa1cd,	// (0x0003a4a8) bg_popup_window_pane_g6

0xa1d9,	// (0x0003a4b4) bg_popup_window_pane_g7_ParamLimits

0xa1d9,	// (0x0003a4b4) bg_popup_window_pane_g7

0xa1e5,	// (0x0003a4c0) bg_popup_window_pane_g8_ParamLimits

0xa1e5,	// (0x0003a4c0) bg_popup_window_pane_g8

0xa1f1,	// (0x0003a4cc) bg_popup_window_pane_g9_ParamLimits

0xa1f1,	// (0x0003a4cc) bg_popup_window_pane_g9

0xa1fd,	// (0x0003a4d8) bg_popup_window_pane_g10_ParamLimits

0xa1fd,	// (0x0003a4d8) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0003fbb1) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0003fbb1) bg_popup_window_pane_g

0xa126,	// (0x0003a401) bg_popup_heading_pane_ParamLimits

0xa126,	// (0x0003a401) bg_popup_heading_pane

0x75ca,	// (0x000378a5) tabs_4_passive_pane_cp_srt_ParamLimits

0x75ca,	// (0x000378a5) tabs_4_passive_pane_cp_srt

0x75dc,	// (0x000378b7) tabs_4_passive_pane_srt_ParamLimits

0xa13a,	// (0x0003a415) heading_pane_g2

0x75dc,	// (0x000378b7) tabs_4_passive_pane_srt

0x891e,	// (0x00038bf9) bg_passive_tab_pane_cp3_srt_ParamLimits

0x891e,	// (0x00038bf9) bg_passive_tab_pane_cp3_srt

0xa142,	// (0x0003a41d) heading_pane_t1_ParamLimits

0xa142,	// (0x0003a41d) heading_pane_t1

0xa159,	// (0x0003a434) heading_pane_t2_ParamLimits

0xa159,	// (0x0003a434) heading_pane_t2

0x0001,

0xf8d1,	// (0x0003fbac) heading_pane_t_ParamLimits

0xf8d1,	// (0x0003fbac) heading_pane_t

0x9c51,	// (0x00039f2c) bg_popup_heading_pane_g1

0x9d00,	// (0x00039fdb) bg_popup_heading_pane_g2

0x9d0a,	// (0x00039fe5) bg_popup_heading_pane_g3

0x9d14,	// (0x00039fef) bg_popup_heading_pane_g4

0x9d1e,	// (0x00039ff9) bg_popup_heading_pane_g5

0x9d28,	// (0x0003a003) bg_popup_heading_pane_g6

0x9d30,	// (0x0003a00b) bg_popup_heading_pane_g7

0x9d38,	// (0x0003a013) bg_popup_heading_pane_g8

0x9d42,	// (0x0003a01d) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0003fb68) bg_popup_heading_pane_g

0x945f,	// (0x0003973a) bg_popup_sub_pane_g1

0x946f,	// (0x0003974a) bg_popup_sub_pane_g2

0x9467,	// (0x00039742) bg_popup_sub_pane_g3

0x947f,	// (0x0003975a) bg_popup_sub_pane_g4

0x9477,	// (0x00039752) bg_popup_sub_pane_g5

0x9487,	// (0x00039762) bg_popup_sub_pane_g6

0x948f,	// (0x0003976a) bg_popup_sub_pane_g7

0x949f,	// (0x0003977a) bg_popup_sub_pane_g8

0x9497,	// (0x00039772) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0003fb42) bg_popup_sub_pane_g

0xf546,	// (0x0003f821) bg_popup_window_pane_cp5_ParamLimits

0xf546,	// (0x0003f821) bg_popup_window_pane_cp5

0x2359,	// (0x00032634) popup_note_window_g1_ParamLimits

0x2359,	// (0x00032634) popup_note_window_g1

0x2365,	// (0x00032640) popup_note_window_t1_ParamLimits

0x2365,	// (0x00032640) popup_note_window_t1

0x237b,	// (0x00032656) popup_note_window_t2_ParamLimits

0x237b,	// (0x00032656) popup_note_window_t2

0x2391,	// (0x0003266c) popup_note_window_t3_ParamLimits

0x2391,	// (0x0003266c) popup_note_window_t3

0x23a7,	// (0x00032682) popup_note_window_t4_ParamLimits

0x23a7,	// (0x00032682) popup_note_window_t4

0x23cf,	// (0x000326aa) popup_note_window_t5_ParamLimits

0x23cf,	// (0x000326aa) popup_note_window_t5

0x0004,

0xf585,	// (0x0003f860) popup_note_window_t_ParamLimits

0xf585,	// (0x0003f860) popup_note_window_t

0x23f3,	// (0x000326ce) bg_popup_window_pane_cp6_ParamLimits

0x23f3,	// (0x000326ce) bg_popup_window_pane_cp6

0x9bcd,	// (0x00039ea8) popup_note_image_window_g1_ParamLimits

0x9bcd,	// (0x00039ea8) popup_note_image_window_g1

0x9bd9,	// (0x00039eb4) popup_note_image_window_g2_ParamLimits

0x9bd9,	// (0x00039eb4) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0003fb36) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0003fb36) popup_note_image_window_g

0x9bf2,	// (0x00039ecd) popup_note_image_window_t1_ParamLimits

0x9bf2,	// (0x00039ecd) popup_note_image_window_t1

0x9c0b,	// (0x00039ee6) popup_note_image_window_t2_ParamLimits

0x9c0b,	// (0x00039ee6) popup_note_image_window_t2

0x9c24,	// (0x00039eff) popup_note_image_window_t3_ParamLimits

0x9c24,	// (0x00039eff) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0003fb3b) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0003fb3b) popup_note_image_window_t

0x9a8d,	// (0x00039d68) bg_popup_window_pane_cp7_ParamLimits

0x9a8d,	// (0x00039d68) bg_popup_window_pane_cp7

0x9abd,	// (0x00039d98) popup_note_wait_window_g1_ParamLimits

0x9abd,	// (0x00039d98) popup_note_wait_window_g1

0x9ac9,	// (0x00039da4) popup_note_wait_window_g2_ParamLimits

0x9ac9,	// (0x00039da4) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0003fb24) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0003fb24) popup_note_wait_window_g

0x9ae1,	// (0x00039dbc) popup_note_wait_window_t1_ParamLimits

0x9ae1,	// (0x00039dbc) popup_note_wait_window_t1

0x9b08,	// (0x00039de3) popup_note_wait_window_t2_ParamLimits

0x9b08,	// (0x00039de3) popup_note_wait_window_t2

0x9b26,	// (0x00039e01) popup_note_wait_window_t3_ParamLimits

0x9b26,	// (0x00039e01) popup_note_wait_window_t3

0x9b39,	// (0x00039e14) popup_note_wait_window_t4_ParamLimits

0x9b39,	// (0x00039e14) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0003fb2b) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0003fb2b) popup_note_wait_window_t

0x9b5e,	// (0x00039e39) wait_bar_pane_ParamLimits

0x9b5e,	// (0x00039e39) wait_bar_pane

0xf47f,	// (0x0003f75a) wait_anim_pane

0xf47f,	// (0x0003f75a) wait_border_pane

0xf475,	// (0x0003f750) wait_anim_pane_g1

0xf475,	// (0x0003f750) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0003f9df) wait_anim_pane_g

0x9a31,	// (0x00039d0c) wait_border_pane_g1

0x9a3c,	// (0x00039d17) wait_border_pane_g2

0x9a45,	// (0x00039d20) wait_border_pane_g3

0x0002,

0xf842,	// (0x0003fb1d) wait_border_pane_g

0x989b,	// (0x00039b76) bg_popup_window_pane_cp16_ParamLimits

0x989b,	// (0x00039b76) bg_popup_window_pane_cp16

0x999b,	// (0x00039c76) indicator_popup_pane_cp4_ParamLimits

0x999b,	// (0x00039c76) indicator_popup_pane_cp4

0x99af,	// (0x00039c8a) popup_query_data_window_t1_ParamLimits

0x99af,	// (0x00039c8a) popup_query_data_window_t1

0x99c1,	// (0x00039c9c) popup_query_data_window_t2_ParamLimits

0x99c1,	// (0x00039c9c) popup_query_data_window_t2

0x99da,	// (0x00039cb5) popup_query_data_window_t3_ParamLimits

0x99da,	// (0x00039cb5) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0003fb16) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0003fb16) popup_query_data_window_t

0x99f4,	// (0x00039ccf) query_popup_data_pane_ParamLimits

0x99f4,	// (0x00039ccf) query_popup_data_pane

0x9a08,	// (0x00039ce3) query_popup_data_pane_cp1_ParamLimits

0x9a08,	// (0x00039ce3) query_popup_data_pane_cp1

0x989b,	// (0x00039b76) bg_popup_window_pane_cp10_ParamLimits

0x989b,	// (0x00039b76) bg_popup_window_pane_cp10

0x98cd,	// (0x00039ba8) indicator_popup_pane_ParamLimits

0x98cd,	// (0x00039ba8) indicator_popup_pane

0x98ef,	// (0x00039bca) popup_query_code_window_t1_ParamLimits

0x98ef,	// (0x00039bca) popup_query_code_window_t1

0x9909,	// (0x00039be4) popup_query_code_window_t2_ParamLimits

0x9909,	// (0x00039be4) popup_query_code_window_t2

0x9952,	// (0x00039c2d) popup_query_code_window_t3_ParamLimits

0x9952,	// (0x00039c2d) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0003fb0f) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0003fb0f) popup_query_code_window_t

0x9981,	// (0x00039c5c) query_popup_pane_ParamLimits

0x9981,	// (0x00039c5c) query_popup_pane

0x23f3,	// (0x000326ce) bg_popup_window_pane_cp15_ParamLimits

0x23f3,	// (0x000326ce) bg_popup_window_pane_cp15

0x2413,	// (0x000326ee) indicator_popup_pane_cp1_ParamLimits

0x2413,	// (0x000326ee) indicator_popup_pane_cp1

0x2426,	// (0x00032701) indicator_popup_pane_cp2_ParamLimits

0x2426,	// (0x00032701) indicator_popup_pane_cp2

0x2441,	// (0x0003271c) popup_query_data_code_window_g1_ParamLimits

0x2441,	// (0x0003271c) popup_query_data_code_window_g1

0x2454,	// (0x0003272f) popup_query_data_code_window_t1_ParamLimits

0x2454,	// (0x0003272f) popup_query_data_code_window_t1

0x2466,	// (0x00032741) popup_query_data_code_window_t2_ParamLimits

0x2466,	// (0x00032741) popup_query_data_code_window_t2

0x2478,	// (0x00032753) popup_query_data_code_window_t3_ParamLimits

0x2478,	// (0x00032753) popup_query_data_code_window_t3

0x248e,	// (0x00032769) popup_query_data_code_window_t4_ParamLimits

0x248e,	// (0x00032769) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0003f86b) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0003f86b) popup_query_data_code_window_t

0x7196,	// (0x00037471) list_single_midp_graphic_pane_g3

0x24a8,	// (0x00032783) query_popup_data_pane_cp2_ParamLimits

0x24bb,	// (0x00032796) query_popup_pane_cp2_ParamLimits

0x24bb,	// (0x00032796) query_popup_pane_cp2

0xf47f,	// (0x0003f75a) bg_popup_window_pane_cp11

0x9893,	// (0x00039b6e) heading_pane_cp5

0x2551,	// (0x0003282c) listscroll_popup_info_pane

0xf47f,	// (0x0003f75a) input_focus_pane_cp3

0x24d6,	// (0x000327b1) query_popup_pane_t1

0x24e4,	// (0x000327bf) list_popup_info_pane_ParamLimits

0x24e4,	// (0x000327bf) list_popup_info_pane

0x24f3,	// (0x000327ce) listscroll_popup_info_pane_g1

0x24fb,	// (0x000327d6) scroll_pane_cp7

0x2505,	// (0x000327e0) popup_info_list_pane_t1_ParamLimits

0x2505,	// (0x000327e0) popup_info_list_pane_t1

0x251f,	// (0x000327fa) popup_info_list_pane_t2_ParamLimits

0x251f,	// (0x000327fa) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003f874) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003f874) popup_info_list_pane_t

0xf47f,	// (0x0003f75a) bg_popup_window_pane_cp12

0xac51,	// (0x0003af2c) find_popup_pane

0xf4d9,	// (0x0003f7b4) bg_popup_window_pane_cp3

0x2539,	// (0x00032814) heading_pane_cp3

0x2545,	// (0x00032820) listscroll_popup_graphic_pane

0xf47f,	// (0x0003f75a) bg_popup_window_pane_cp4

0x5daf,	// (0x0003608a) heading_pane_cp4

0x2551,	// (0x0003282c) listscroll_popup_colour_pane

0x5db9,	// (0x00036094) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5db9,	// (0x00036094) cell_large_graphic_colour_none_popup_pane

0x5dcd,	// (0x000360a8) grid_large_graphic_colour_popup_pane_ParamLimits

0x5dcd,	// (0x000360a8) grid_large_graphic_colour_popup_pane

0x5df9,	// (0x000360d4) listscroll_popup_colour_pane_g1_ParamLimits

0x5df9,	// (0x000360d4) listscroll_popup_colour_pane_g1

0x5e10,	// (0x000360eb) listscroll_popup_colour_pane_g2_ParamLimits

0x5e10,	// (0x000360eb) listscroll_popup_colour_pane_g2

0x5e27,	// (0x00036102) listscroll_popup_colour_pane_g3_ParamLimits

0x5e27,	// (0x00036102) listscroll_popup_colour_pane_g3

0x5e37,	// (0x00036112) listscroll_popup_colour_pane_g4_ParamLimits

0x5e37,	// (0x00036112) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0003f879) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0003f879) listscroll_popup_colour_pane_g

0x2559,	// (0x00032834) scroll_pane_cp6_ParamLimits

0x2559,	// (0x00032834) scroll_pane_cp6

0x5e4b,	// (0x00036126) cell_large_graphic_colour_popup_pane_ParamLimits

0x5e4b,	// (0x00036126) cell_large_graphic_colour_popup_pane

0x256b,	// (0x00032846) cell_large_graphic_colour_none_popup_pane_t1

0xf47f,	// (0x0003f75a) grid_highlight_pane_cp5

0x257a,	// (0x00032855) cell_large_graphic_colour_popup_pane_g1

0x2582,	// (0x0003285d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003f882) cell_large_graphic_colour_popup_pane_g

0x258a,	// (0x00032865) cell_large_graphic_colour_popup_pane_g2_copy1

0x2593,	// (0x0003286e) grid_highlight_pane_cp4

0x259b,	// (0x00032876) bg_popup_window_pane_cp8_ParamLimits

0x259b,	// (0x00032876) bg_popup_window_pane_cp8

0x25b6,	// (0x00032891) popup_snote_single_text_window_g1_ParamLimits

0x25b6,	// (0x00032891) popup_snote_single_text_window_g1

0x25c8,	// (0x000328a3) popup_snote_single_text_window_t1_ParamLimits

0x25c8,	// (0x000328a3) popup_snote_single_text_window_t1

0x25db,	// (0x000328b6) popup_snote_single_text_window_t2_ParamLimits

0x25db,	// (0x000328b6) popup_snote_single_text_window_t2

0x25ee,	// (0x000328c9) popup_snote_single_text_window_t3_ParamLimits

0x25ee,	// (0x000328c9) popup_snote_single_text_window_t3

0x2627,	// (0x00032902) popup_snote_single_text_window_t4_ParamLimits

0x2627,	// (0x00032902) popup_snote_single_text_window_t4

0x265b,	// (0x00032936) popup_snote_single_text_window_t5_ParamLimits

0x265b,	// (0x00032936) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0003f887) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0003f887) popup_snote_single_text_window_t

0x268a,	// (0x00032965) bg_popup_window_pane_cp9_ParamLimits

0x268a,	// (0x00032965) bg_popup_window_pane_cp9

0x25b6,	// (0x00032891) popup_snote_single_graphic_window_g1_ParamLimits

0x25b6,	// (0x00032891) popup_snote_single_graphic_window_g1

0x2698,	// (0x00032973) popup_snote_single_graphic_window_g2_ParamLimits

0x2698,	// (0x00032973) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003f892) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003f892) popup_snote_single_graphic_window_g

0x26a4,	// (0x0003297f) popup_snote_single_graphic_window_t1_ParamLimits

0x26a4,	// (0x0003297f) popup_snote_single_graphic_window_t1

0x26b7,	// (0x00032992) popup_snote_single_graphic_window_t2_ParamLimits

0x26b7,	// (0x00032992) popup_snote_single_graphic_window_t2

0x26ca,	// (0x000329a5) popup_snote_single_graphic_window_t3_ParamLimits

0x26ca,	// (0x000329a5) popup_snote_single_graphic_window_t3

0x2703,	// (0x000329de) popup_snote_single_graphic_window_t4_ParamLimits

0x2703,	// (0x000329de) popup_snote_single_graphic_window_t4

0x2737,	// (0x00032a12) popup_snote_single_graphic_window_t5_ParamLimits

0x2737,	// (0x00032a12) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0003f897) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0003f897) popup_snote_single_graphic_window_t

0xab8f,	// (0x0003ae6a) grid_graphic_popup_pane_ParamLimits

0xab8f,	// (0x0003ae6a) grid_graphic_popup_pane

0xabbd,	// (0x0003ae98) listscroll_popup_graphic_pane_g1_ParamLimits

0xabbd,	// (0x0003ae98) listscroll_popup_graphic_pane_g1

0xabd1,	// (0x0003aeac) listscroll_popup_graphic_pane_g2_ParamLimits

0xabd1,	// (0x0003aeac) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0003fc8c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0003fc8c) listscroll_popup_graphic_pane_g

0xabe5,	// (0x0003aec0) scroll_pane_cp5

0xab37,	// (0x0003ae12) cell_graphic_popup_pane_ParamLimits

0xab37,	// (0x0003ae12) cell_graphic_popup_pane

0xab18,	// (0x0003adf3) cell_graphic_popup_pane_g1

0xab20,	// (0x0003adfb) cell_graphic_popup_pane_g2

0x258a,	// (0x00032865) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0003fc85) cell_graphic_popup_pane_g

0xab29,	// (0x0003ae04) cell_graphic_popup_pane_t2

0x2593,	// (0x0003286e) grid_highlight_pane_cp3

0x2778,	// (0x00032a53) list_gen_pane_ParamLimits

0x2778,	// (0x00032a53) list_gen_pane

0x27a0,	// (0x00032a7b) scroll_pane

0xaa70,	// (0x0003ad4b) bg_list_pane_g1_ParamLimits

0xaa70,	// (0x0003ad4b) bg_list_pane_g1

0xaa8d,	// (0x0003ad68) bg_list_pane_g2_ParamLimits

0xaa8d,	// (0x0003ad68) bg_list_pane_g2

0xaaa2,	// (0x0003ad7d) bg_list_pane_g3_ParamLimits

0xaaa2,	// (0x0003ad7d) bg_list_pane_g3

0xaab6,	// (0x0003ad91) bg_list_pane_g4_ParamLimits

0xaab6,	// (0x0003ad91) bg_list_pane_g4

0xaaca,	// (0x0003ada5) bg_list_pane_g5_ParamLimits

0xaaca,	// (0x0003ada5) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0003fc7a) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0003fc7a) bg_list_pane_g

0x7561,	// (0x0003783c) list_double2_graphic_large_graphic_pane_ParamLimits

0x7561,	// (0x0003783c) list_double2_graphic_large_graphic_pane

0x7561,	// (0x0003783c) list_double2_graphic_pane_ParamLimits

0x7561,	// (0x0003783c) list_double2_graphic_pane

0x7561,	// (0x0003783c) list_double2_large_graphic_pane_ParamLimits

0x7561,	// (0x0003783c) list_double2_large_graphic_pane

0x7561,	// (0x0003783c) list_double2_pane_ParamLimits

0x7561,	// (0x0003783c) list_double2_pane

0x7561,	// (0x0003783c) list_double_graphic_heading_pane_ParamLimits

0x7561,	// (0x0003783c) list_double_graphic_heading_pane

0x7561,	// (0x0003783c) list_double_graphic_pane_ParamLimits

0x7561,	// (0x0003783c) list_double_graphic_pane

0x7561,	// (0x0003783c) list_double_heading_pane_ParamLimits

0x7561,	// (0x0003783c) list_double_heading_pane

0x7561,	// (0x0003783c) list_double_large_graphic_pane_ParamLimits

0x7561,	// (0x0003783c) list_double_large_graphic_pane

0x7561,	// (0x0003783c) list_double_number_pane_ParamLimits

0x7561,	// (0x0003783c) list_double_number_pane

0x7561,	// (0x0003783c) list_double_pane_ParamLimits

0x7561,	// (0x0003783c) list_double_pane

0x7561,	// (0x0003783c) list_double_time_pane_ParamLimits

0x7561,	// (0x0003783c) list_double_time_pane

0x7561,	// (0x0003783c) list_setting_number_pane_ParamLimits

0x7561,	// (0x0003783c) list_setting_number_pane

0x7561,	// (0x0003783c) list_setting_pane_ParamLimits

0x7561,	// (0x0003783c) list_setting_pane

0xaa2c,	// (0x0003ad07) list_single_2graphic_pane_ParamLimits

0xaa2c,	// (0x0003ad07) list_single_2graphic_pane

0xaa2c,	// (0x0003ad07) list_single_graphic_heading_pane_ParamLimits

0xaa2c,	// (0x0003ad07) list_single_graphic_heading_pane

0xaa2c,	// (0x0003ad07) list_single_graphic_pane_ParamLimits

0xaa2c,	// (0x0003ad07) list_single_graphic_pane

0xaa2c,	// (0x0003ad07) list_single_heading_pane_ParamLimits

0xaa2c,	// (0x0003ad07) list_single_heading_pane

0x758b,	// (0x00037866) list_single_large_graphic_pane_ParamLimits

0x758b,	// (0x00037866) list_single_large_graphic_pane

0xaa2c,	// (0x0003ad07) list_single_number_heading_pane_ParamLimits

0xaa2c,	// (0x0003ad07) list_single_number_heading_pane

0xaa2c,	// (0x0003ad07) list_single_number_pane_ParamLimits

0xaa2c,	// (0x0003ad07) list_single_number_pane

0xaa2c,	// (0x0003ad07) list_single_pane_ParamLimits

0xaa2c,	// (0x0003ad07) list_single_pane

0xf47f,	// (0x0003f75a) list_highlight_pane_cp1

0x4932,	// (0x00034c0d) list_single_pane_g1_ParamLimits

0x4932,	// (0x00034c0d) list_single_pane_g1

0x5e86,	// (0x00036161) list_single_pane_g2_ParamLimits

0x5e86,	// (0x00036161) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0003f8a9) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0003f8a9) list_single_pane_g

0x754b,	// (0x00037826) list_single_pane_t1_ParamLimits

0x754b,	// (0x00037826) list_single_pane_t1

0x4932,	// (0x00034c0d) list_single_number_pane_g1_ParamLimits

0x4932,	// (0x00034c0d) list_single_number_pane_g1

0x5e86,	// (0x00036161) list_single_number_pane_g2_ParamLimits

0x5e86,	// (0x00036161) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0003f8a9) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0003f8a9) list_single_number_pane_g

0x747d,	// (0x00037758) list_single_number_pane_t1_ParamLimits

0x747d,	// (0x00037758) list_single_number_pane_t1

0x7493,	// (0x0003776e) list_single_number_pane_t2_ParamLimits

0x7493,	// (0x0003776e) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0003fc3b) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0003fc3b) list_single_number_pane_t

0x5e7a,	// (0x00036155) list_single_graphic_pane_g1_ParamLimits

0x5e7a,	// (0x00036155) list_single_graphic_pane_g1

0x4932,	// (0x00034c0d) list_single_graphic_pane_g2_ParamLimits

0x4932,	// (0x00034c0d) list_single_graphic_pane_g2

0x5e86,	// (0x00036161) list_single_graphic_pane_g3_ParamLimits

0x5e86,	// (0x00036161) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003f8a2) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003f8a2) list_single_graphic_pane_g

0x5e92,	// (0x0003616d) list_single_graphic_pane_t1_ParamLimits

0x5e92,	// (0x0003616d) list_single_graphic_pane_t1

0x4932,	// (0x00034c0d) list_single_heading_pane_g1_ParamLimits

0x4932,	// (0x00034c0d) list_single_heading_pane_g1

0x5e86,	// (0x00036161) list_single_heading_pane_g2_ParamLimits

0x5e86,	// (0x00036161) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003f8a9) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003f8a9) list_single_heading_pane_g

0x5ea8,	// (0x00036183) list_single_heading_pane_t1_ParamLimits

0x5ea8,	// (0x00036183) list_single_heading_pane_t1

0x5ebe,	// (0x00036199) list_single_heading_pane_t2_ParamLimits

0x5ebe,	// (0x00036199) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0003f8ae) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0003f8ae) list_single_heading_pane_t

0x4932,	// (0x00034c0d) list_single_number_heading_pane_g1_ParamLimits

0x4932,	// (0x00034c0d) list_single_number_heading_pane_g1

0x5e86,	// (0x00036161) list_single_number_heading_pane_g2_ParamLimits

0x5e86,	// (0x00036161) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003f8a9) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003f8a9) list_single_number_heading_pane_g

0x5ea8,	// (0x00036183) list_single_number_heading_pane_t1_ParamLimits

0x5ea8,	// (0x00036183) list_single_number_heading_pane_t1

0x5ed0,	// (0x000361ab) list_single_number_heading_pane_t2_ParamLimits

0x5ed0,	// (0x000361ab) list_single_number_heading_pane_t2

0x5ee2,	// (0x000361bd) list_single_number_heading_pane_t3_ParamLimits

0x5ee2,	// (0x000361bd) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0003f8b3) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0003f8b3) list_single_number_heading_pane_t

0x5ef4,	// (0x000361cf) list_single_graphic_heading_pane_g1_ParamLimits

0x5ef4,	// (0x000361cf) list_single_graphic_heading_pane_g1

0x5f00,	// (0x000361db) list_single_graphic_heading_pane_g4_ParamLimits

0x5f00,	// (0x000361db) list_single_graphic_heading_pane_g4

0x5e86,	// (0x00036161) list_single_graphic_heading_pane_g5_ParamLimits

0x5e86,	// (0x00036161) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0003f8ba) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0003f8ba) list_single_graphic_heading_pane_g

0x5ea8,	// (0x00036183) list_single_graphic_heading_pane_t1_ParamLimits

0x5ea8,	// (0x00036183) list_single_graphic_heading_pane_t1

0x5f11,	// (0x000361ec) list_single_graphic_heading_pane_t2_ParamLimits

0x5f11,	// (0x000361ec) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0003f8c1) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0003f8c1) list_single_graphic_heading_pane_t

0x5f23,	// (0x000361fe) list_single_large_graphic_pane_g1_ParamLimits

0x5f23,	// (0x000361fe) list_single_large_graphic_pane_g1

0x4932,	// (0x00034c0d) list_single_large_graphic_pane_g2_ParamLimits

0x4932,	// (0x00034c0d) list_single_large_graphic_pane_g2

0x5e86,	// (0x00036161) list_single_large_graphic_pane_g3_ParamLimits

0x5e86,	// (0x00036161) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0003f8c6) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0003f8c6) list_single_large_graphic_pane_g

0x9a3c,	// (0x00039d17) wait_border_pane_g2_copy1

0x5f2f,	// (0x0003620a) list_single_large_graphic_pane_g4_cp2

0x5ea8,	// (0x00036183) list_single_large_graphic_pane_t1_ParamLimits

0x5ea8,	// (0x00036183) list_single_large_graphic_pane_t1

0x5f37,	// (0x00036212) list_double_pane_g1_ParamLimits

0x5f37,	// (0x00036212) list_double_pane_g1

0x5f43,	// (0x0003621e) list_double_pane_g2_ParamLimits

0x5f43,	// (0x0003621e) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0003f8cd) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0003f8cd) list_double_pane_g

0x5f4f,	// (0x0003622a) list_double_pane_t1_ParamLimits

0x5f4f,	// (0x0003622a) list_double_pane_t1

0x5f65,	// (0x00036240) list_double_pane_t2_ParamLimits

0x5f65,	// (0x00036240) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0003f8d2) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0003f8d2) list_double_pane_t

0x5f77,	// (0x00036252) list_double2_pane_g1_ParamLimits

0x5f77,	// (0x00036252) list_double2_pane_g1

0x5f43,	// (0x0003621e) list_double2_pane_g2_ParamLimits

0x5f43,	// (0x0003621e) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0003f8d7) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0003f8d7) list_double2_pane_g

0x5f4f,	// (0x0003622a) list_double2_pane_t1_ParamLimits

0x5f4f,	// (0x0003622a) list_double2_pane_t1

0x5f88,	// (0x00036263) list_double2_pane_t2_ParamLimits

0x5f88,	// (0x00036263) list_double2_pane_t2

0x0001,

0xf601,	// (0x0003f8dc) list_double2_pane_t_ParamLimits

0xf601,	// (0x0003f8dc) list_double2_pane_t

0x5f37,	// (0x00036212) list_double_number_pane_g1_ParamLimits

0x5f37,	// (0x00036212) list_double_number_pane_g1

0x5f43,	// (0x0003621e) list_double_number_pane_g2_ParamLimits

0x5f43,	// (0x0003621e) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0003f8cd) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0003f8cd) list_double_number_pane_g

0x5f9a,	// (0x00036275) list_double_number_pane_t1_ParamLimits

0x5f9a,	// (0x00036275) list_double_number_pane_t1

0x5fac,	// (0x00036287) list_double_number_pane_t2_ParamLimits

0x5fac,	// (0x00036287) list_double_number_pane_t2

0x5fc2,	// (0x0003629d) list_double_number_pane_t3_ParamLimits

0x5fc2,	// (0x0003629d) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0003f8e1) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0003f8e1) list_double_number_pane_t

0x5fd4,	// (0x000362af) list_double_graphic_pane_g1_ParamLimits

0x5fd4,	// (0x000362af) list_double_graphic_pane_g1

0x5fe0,	// (0x000362bb) list_double_graphic_pane_g2_ParamLimits

0x5fe0,	// (0x000362bb) list_double_graphic_pane_g2

0x5fef,	// (0x000362ca) list_double_graphic_pane_g3_ParamLimits

0x5fef,	// (0x000362ca) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0003f8e8) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0003f8e8) list_double_graphic_pane_g

0x6007,	// (0x000362e2) list_double_graphic_pane_t1_ParamLimits

0x6007,	// (0x000362e2) list_double_graphic_pane_t1

0x601d,	// (0x000362f8) list_double_graphic_pane_t2_ParamLimits

0x601d,	// (0x000362f8) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0003f8f1) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0003f8f1) list_double_graphic_pane_t

0x5fd4,	// (0x000362af) list_double2_graphic_pane_g1_ParamLimits

0x5fd4,	// (0x000362af) list_double2_graphic_pane_g1

0x602f,	// (0x0003630a) list_double2_graphic_pane_g2_ParamLimits

0x602f,	// (0x0003630a) list_double2_graphic_pane_g2

0x603b,	// (0x00036316) list_double2_graphic_pane_g3_ParamLimits

0x603b,	// (0x00036316) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0003f8f6) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0003f8f6) list_double2_graphic_pane_g

0x5fac,	// (0x00036287) list_double2_graphic_pane_t1_ParamLimits

0x5fac,	// (0x00036287) list_double2_graphic_pane_t1

0x6047,	// (0x00036322) list_double2_graphic_pane_t2_ParamLimits

0x6047,	// (0x00036322) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0003f8fd) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0003f8fd) list_double2_graphic_pane_t

0x6059,	// (0x00036334) list_double_large_graphic_pane_g1_ParamLimits

0x6059,	// (0x00036334) list_double_large_graphic_pane_g1

0x5f77,	// (0x00036252) list_double_large_graphic_pane_g2_ParamLimits

0x5f77,	// (0x00036252) list_double_large_graphic_pane_g2

0x5f43,	// (0x0003621e) list_double_large_graphic_pane_g3_ParamLimits

0x5f43,	// (0x0003621e) list_double_large_graphic_pane_g3

0x6084,	// (0x0003635f) list_double_large_graphic_pane_g4_ParamLimits

0x6084,	// (0x0003635f) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0003f902) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0003f902) list_double_large_graphic_pane_g

0x6097,	// (0x00036372) list_double_large_graphic_pane_t1_ParamLimits

0x6097,	// (0x00036372) list_double_large_graphic_pane_t1

0x60b0,	// (0x0003638b) list_double_large_graphic_pane_t2_ParamLimits

0x60b0,	// (0x0003638b) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0003f90d) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0003f90d) list_double_large_graphic_pane_t

0x60c2,	// (0x0003639d) list_double2_large_graphic_pane_g1_ParamLimits

0x60c2,	// (0x0003639d) list_double2_large_graphic_pane_g1

0x5f77,	// (0x00036252) list_double2_large_graphic_pane_g2_ParamLimits

0x5f77,	// (0x00036252) list_double2_large_graphic_pane_g2

0x5f43,	// (0x0003621e) list_double2_large_graphic_pane_g3_ParamLimits

0x5f43,	// (0x0003621e) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0003f912) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0003f912) list_double2_large_graphic_pane_g

0x60ce,	// (0x000363a9) list_double2_large_graphic_pane_t1_ParamLimits

0x60ce,	// (0x000363a9) list_double2_large_graphic_pane_t1

0x60e4,	// (0x000363bf) list_double2_large_graphic_pane_t2_ParamLimits

0x60e4,	// (0x000363bf) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0003f919) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0003f919) list_double2_large_graphic_pane_t

0x60f6,	// (0x000363d1) list_double_heading_pane_g1_ParamLimits

0x60f6,	// (0x000363d1) list_double_heading_pane_g1

0x6107,	// (0x000363e2) list_double_heading_pane_g2_ParamLimits

0x6107,	// (0x000363e2) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0003f91e) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0003f91e) list_double_heading_pane_g

0x6113,	// (0x000363ee) list_double_heading_pane_t1_ParamLimits

0x6113,	// (0x000363ee) list_double_heading_pane_t1

0x6129,	// (0x00036404) list_double_heading_pane_t2_ParamLimits

0x6129,	// (0x00036404) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0003f923) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0003f923) list_double_heading_pane_t

0x613b,	// (0x00036416) list_double_graphic_heading_pane_g1_ParamLimits

0x613b,	// (0x00036416) list_double_graphic_heading_pane_g1

0x60f6,	// (0x000363d1) list_double_graphic_heading_pane_g2_ParamLimits

0x60f6,	// (0x000363d1) list_double_graphic_heading_pane_g2

0x6107,	// (0x000363e2) list_double_graphic_heading_pane_g3_ParamLimits

0x6107,	// (0x000363e2) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0003f928) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0003f928) list_double_graphic_heading_pane_g

0x6147,	// (0x00036422) list_double_graphic_heading_pane_t1_ParamLimits

0x6147,	// (0x00036422) list_double_graphic_heading_pane_t1

0x615d,	// (0x00036438) list_double_graphic_heading_pane_t2_ParamLimits

0x615d,	// (0x00036438) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0003f92f) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0003f92f) list_double_graphic_heading_pane_t

0x5f77,	// (0x00036252) list_double_time_pane_g1_ParamLimits

0x5f77,	// (0x00036252) list_double_time_pane_g1

0x5f43,	// (0x0003621e) list_double_time_pane_g2_ParamLimits

0x5f43,	// (0x0003621e) list_double_time_pane_g2

0x0001,

0xf5fc,	// (0x0003f8d7) list_double_time_pane_g_ParamLimits

0xf5fc,	// (0x0003f8d7) list_double_time_pane_g

0x60ce,	// (0x000363a9) list_double_time_pane_t1_ParamLimits

0x60ce,	// (0x000363a9) list_double_time_pane_t1

0x616f,	// (0x0003644a) list_double_time_pane_t2_ParamLimits

0x616f,	// (0x0003644a) list_double_time_pane_t2

0x6181,	// (0x0003645c) list_double_time_pane_t3_ParamLimits

0x6181,	// (0x0003645c) list_double_time_pane_t3

0x6193,	// (0x0003646e) list_double_time_pane_t4_ParamLimits

0x6193,	// (0x0003646e) list_double_time_pane_t4

0x0003,

0xf659,	// (0x0003f934) list_double_time_pane_t_ParamLimits

0xf659,	// (0x0003f934) list_double_time_pane_t

0x61a5,	// (0x00036480) list_setting_pane_g1_ParamLimits

0x61a5,	// (0x00036480) list_setting_pane_g1

0x61b1,	// (0x0003648c) list_setting_pane_g2_ParamLimits

0x61b1,	// (0x0003648c) list_setting_pane_g2

0x0001,

0xf662,	// (0x0003f93d) list_setting_pane_g_ParamLimits

0xf662,	// (0x0003f93d) list_setting_pane_g

0x61bd,	// (0x00036498) list_setting_pane_t1_ParamLimits

0x61bd,	// (0x00036498) list_setting_pane_t1

0x61d7,	// (0x000364b2) list_setting_pane_t2_ParamLimits

0x61d7,	// (0x000364b2) list_setting_pane_t2

0x0002,

0xf667,	// (0x0003f942) list_setting_pane_t_ParamLimits

0xf667,	// (0x0003f942) list_setting_pane_t

0x6216,	// (0x000364f1) set_value_pane_cp_ParamLimits

0x6216,	// (0x000364f1) set_value_pane_cp

0x6224,	// (0x000364ff) list_setting_number_pane_g1_ParamLimits

0x6224,	// (0x000364ff) list_setting_number_pane_g1

0x6230,	// (0x0003650b) list_setting_number_pane_g2_ParamLimits

0x6230,	// (0x0003650b) list_setting_number_pane_g2

0x0001,

0xf66e,	// (0x0003f949) list_setting_number_pane_g_ParamLimits

0xf66e,	// (0x0003f949) list_setting_number_pane_g

0x623c,	// (0x00036517) list_setting_number_pane_t1_ParamLimits

0x623c,	// (0x00036517) list_setting_number_pane_t1

0x6255,	// (0x00036530) list_setting_number_pane_t2_ParamLimits

0x6255,	// (0x00036530) list_setting_number_pane_t2

0x626f,	// (0x0003654a) list_setting_number_pane_t3_ParamLimits

0x626f,	// (0x0003654a) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0003f94e) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0003f94e) list_setting_number_pane_t

0x6216,	// (0x000364f1) set_value_pane_ParamLimits

0x6216,	// (0x000364f1) set_value_pane

0x27d4,	// (0x00032aaf) bg_set_opt_pane_ParamLimits

0x27d4,	// (0x00032aaf) bg_set_opt_pane

0x42b3,	// (0x0003458e) set_value_pane_t1

0x27f5,	// (0x00032ad0) slider_set_pane_cp3

0x27fe,	// (0x00032ad9) volume_small_pane_cp

0x2807,	// (0x00032ae2) list_form_gen_pane

0x2810,	// (0x00032aeb) scroll_pane_cp8

0x62b2,	// (0x0003658d) form_field_data_pane_ParamLimits

0x62b2,	// (0x0003658d) form_field_data_pane

0x62d0,	// (0x000365ab) form_field_data_wide_pane_ParamLimits

0x62d0,	// (0x000365ab) form_field_data_wide_pane

0x42d1,	// (0x000345ac) form_field_popup_pane_ParamLimits

0x42d1,	// (0x000345ac) form_field_popup_pane

0x62f5,	// (0x000365d0) form_field_popup_wide_pane_ParamLimits

0x62f5,	// (0x000365d0) form_field_popup_wide_pane

0x42f3,	// (0x000345ce) form_field_slider_pane_ParamLimits

0x42f3,	// (0x000345ce) form_field_slider_pane

0x4306,	// (0x000345e1) form_field_slider_wide_pane_ParamLimits

0x4306,	// (0x000345e1) form_field_slider_wide_pane

0x2821,	// (0x00032afc) data_form_pane

0x6320,	// (0x000365fb) form_field_data_pane_t1

0x282d,	// (0x00032b08) input_focus_pane

0x4319,	// (0x000345f4) data_form_wide_pane

0x4336,	// (0x00034611) form_field_data_wide_pane_t1

0x25a8,	// (0x00032883) input_focus_pane_cp6

0x633a,	// (0x00036615) form_field_popup_pane_t1

0x282d,	// (0x00032b08) input_focus_pane_cp7

0x285b,	// (0x00032b36) list_form_pane

0x4360,	// (0x0003463b) form_field_popup_wide_pane_t1

0x282d,	// (0x00032b08) input_focus_pane_cp8

0x2867,	// (0x00032b42) list_form_wide_pane

0x635c,	// (0x00036637) form_field_slider_pane_t1_ParamLimits

0x635c,	// (0x00036637) form_field_slider_pane_t1

0x6374,	// (0x0003664f) form_field_slider_pane_t2_ParamLimits

0x6374,	// (0x0003664f) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0003f95e) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0003f95e) form_field_slider_pane_t

0xf546,	// (0x0003f821) input_focus_pane_cp9_ParamLimits

0xf546,	// (0x0003f821) input_focus_pane_cp9

0x6389,	// (0x00036664) slider_cont_pane_ParamLimits

0x6389,	// (0x00036664) slider_cont_pane

0x2876,	// (0x00032b51) form_field_slider_wide_pane_t1_ParamLimits

0x2876,	// (0x00032b51) form_field_slider_wide_pane_t1

0x4375,	// (0x00034650) form_field_slider_wide_pane_t2_ParamLimits

0x4375,	// (0x00034650) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0003f963) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0003f963) form_field_slider_wide_pane_t

0xf546,	// (0x0003f821) input_focus_pane_cp10_ParamLimits

0xf546,	// (0x0003f821) input_focus_pane_cp10

0x639d,	// (0x00036678) slider_cont_pane_cp1_ParamLimits

0x639d,	// (0x00036678) slider_cont_pane_cp1

0x63b1,	// (0x0003668c) slider_form_pane_cp

0x2888,	// (0x00032b63) input_focus_pane_g1

0x2890,	// (0x00032b6b) input_focus_pane_g2

0x2898,	// (0x00032b73) input_focus_pane_g3

0x28a0,	// (0x00032b7b) input_focus_pane_g4

0x28a8,	// (0x00032b83) input_focus_pane_g5

0x28b0,	// (0x00032b8b) input_focus_pane_g6

0x28b8,	// (0x00032b93) input_focus_pane_g7

0x28c0,	// (0x00032b9b) input_focus_pane_g8

0x28c8,	// (0x00032ba3) input_focus_pane_g9

0xf475,	// (0x0003f750) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0003f968) input_focus_pane_g

0x9a45,	// (0x00039d20) wait_border_pane_g3_copy1

0x63b9,	// (0x00036694) data_form_pane_t1

0xf475,	// (0x0003f750) wait_anim_pane_g1_copy1

0x751d,	// (0x000377f8) data_form_wide_pane_t1

0x63d6,	// (0x000366b1) list_form_graphic_pane_cp_ParamLimits

0x63d6,	// (0x000366b1) list_form_graphic_pane_cp

0xa9a5,	// (0x0003ac80) slider_form_pane_g1

0xa9ae,	// (0x0003ac89) slider_form_pane_g2

0x0006,

0xf990,	// (0x0003fc6b) slider_form_pane_g

0x4387,	// (0x00034662) list_form_graphic_pane_ParamLimits

0x4387,	// (0x00034662) list_form_graphic_pane

0x4399,	// (0x00034674) list_form_graphic_pane_g1

0x43a1,	// (0x0003467c) list_form_graphic_pane_t1_ParamLimits

0x43a1,	// (0x0003467c) list_form_graphic_pane_t1

0xf4d9,	// (0x0003f7b4) list_highlight_pane_cp5_ParamLimits

0xf4d9,	// (0x0003f7b4) list_highlight_pane_cp5

0x63eb,	// (0x000366c6) find_pane_g1

0x28d0,	// (0x00032bab) input_find_pane

0x63f4,	// (0x000366cf) input_find_pane_g1_ParamLimits

0x63f4,	// (0x000366cf) input_find_pane_g1

0x6400,	// (0x000366db) input_find_pane_t1_ParamLimits

0x6400,	// (0x000366db) input_find_pane_t1

0x6415,	// (0x000366f0) input_find_pane_t2_ParamLimits

0x6415,	// (0x000366f0) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0003f97d) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0003f97d) input_find_pane_t

0x28d9,	// (0x00032bb4) input_focus_pane_cp5_ParamLimits

0x28d9,	// (0x00032bb4) input_focus_pane_cp5

0x28e7,	// (0x00032bc2) bg_popup_window_pane_cp2_ParamLimits

0x28e7,	// (0x00032bc2) bg_popup_window_pane_cp2

0x28f4,	// (0x00032bcf) listscroll_menu_pane_ParamLimits

0x28f4,	// (0x00032bcf) listscroll_menu_pane

0x6436,	// (0x00036711) popup_submenu_window_ParamLimits

0x6436,	// (0x00036711) popup_submenu_window

0x2900,	// (0x00032bdb) find_popup_pane_g1

0x2908,	// (0x00032be3) input_popup_find_pane_cp

0x28d9,	// (0x00032bb4) input_focus_pane_cp4_ParamLimits

0x28d9,	// (0x00032bb4) input_focus_pane_cp4

0x2912,	// (0x00032bed) input_popup_find_pane_t1_ParamLimits

0x2912,	// (0x00032bed) input_popup_find_pane_t1

0xf47f,	// (0x0003f75a) bg_popup_sub_pane_cp

0x2940,	// (0x00032c1b) listscroll_popup_sub_pane

0x2948,	// (0x00032c23) list_submenu_pane_ParamLimits

0x2948,	// (0x00032c23) list_submenu_pane

0x2959,	// (0x00032c34) scroll_pane_cp4

0x2961,	// (0x00032c3c) list_single_popup_submenu_pane_ParamLimits

0x2961,	// (0x00032c3c) list_single_popup_submenu_pane

0x2976,	// (0x00032c51) list_single_popup_submenu_pane_g1

0x297e,	// (0x00032c59) list_single_popup_submenu_pane_t1_ParamLimits

0x297e,	// (0x00032c59) list_single_popup_submenu_pane_t1

0xf4d9,	// (0x0003f7b4) bg_active_tab_pane_cp1_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_active_tab_pane_cp1

0x6474,	// (0x0003674f) tabs_2_active_pane_g1

0x647c,	// (0x00036757) tabs_2_active_pane_t1

0xf4d9,	// (0x0003f7b4) bg_passive_tab_pane_cp1_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_passive_tab_pane_cp1

0x6474,	// (0x0003674f) tabs_2_passive_pane_g1

0x647c,	// (0x00036757) tabs_2_passive_pane_t1

0x2edf,	// (0x000331ba) bg_active_tab_pane_cp4

0x648e,	// (0x00036769) tabs_2_long_active_pane_t1

0x64a1,	// (0x0003677c) bg_passive_tab_pane_cp4

0x719e,	// (0x00037479) list_single_midp_graphic_pane_g4_ParamLimits

0x2edf,	// (0x000331ba) bg_active_tab_pane_cp5

0x64ad,	// (0x00036788) tabs_3_long_active_pane_t1

0x64a1,	// (0x0003677c) bg_passive_tab_pane_cp5

0x719e,	// (0x00037479) list_single_midp_graphic_pane_g4

0xf4d9,	// (0x0003f7b4) bg_popup_window_pane_cp13_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_popup_window_pane_cp13

0x299c,	// (0x00032c77) listscroll_popup_fast_pane_ParamLimits

0x299c,	// (0x00032c77) listscroll_popup_fast_pane

0x29ab,	// (0x00032c86) grid_popup_fast_pane_ParamLimits

0x29ab,	// (0x00032c86) grid_popup_fast_pane

0x29bd,	// (0x00032c98) scroll_pane_cp9_ParamLimits

0x29bd,	// (0x00032c98) scroll_pane_cp9

0xc30a,	// (0x0003c5e5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc30a,	// (0x0003c5e5) list_single_graphic_hl_pane_t1_cp2

0x29e1,	// (0x00032cbc) input_focus_pane_cp20_ParamLimits

0x29e1,	// (0x00032cbc) input_focus_pane_cp20

0x29ef,	// (0x00032cca) query_popup_data_pane_t1_ParamLimits

0x29ef,	// (0x00032cca) query_popup_data_pane_t1

0x2a02,	// (0x00032cdd) query_popup_data_pane_t2_ParamLimits

0x2a02,	// (0x00032cdd) query_popup_data_pane_t2

0x2a48,	// (0x00032d23) query_popup_data_pane_t3_ParamLimits

0x2a48,	// (0x00032d23) query_popup_data_pane_t3

0x2a89,	// (0x00032d64) query_popup_data_pane_t4_ParamLimits

0x2a89,	// (0x00032d64) query_popup_data_pane_t4

0x2ac5,	// (0x00032da0) query_popup_data_pane_t5_ParamLimits

0x2ac5,	// (0x00032da0) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0003f982) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0003f982) query_popup_data_pane_t

0x2888,	// (0x00032b63) bg_set_opt_pane_g1

0x2890,	// (0x00032b6b) bg_set_opt_pane_g2

0x2898,	// (0x00032b73) bg_set_opt_pane_g3

0x28a0,	// (0x00032b7b) bg_set_opt_pane_g4

0x28a8,	// (0x00032b83) bg_set_opt_pane_g5

0x28b0,	// (0x00032b8b) bg_set_opt_pane_g6

0x28b8,	// (0x00032b93) bg_set_opt_pane_g7

0x28c0,	// (0x00032b9b) bg_set_opt_pane_g8

0x28c8,	// (0x00032ba3) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0003f98d) bg_set_opt_pane_g

0x69b6,	// (0x00036c91) control_top_pane_stacon_ParamLimits

0x69b6,	// (0x00036c91) control_top_pane_stacon

0x6a09,	// (0x00036ce4) signal_pane_stacon_ParamLimits

0x6a09,	// (0x00036ce4) signal_pane_stacon

0x6a2e,	// (0x00036d09) stacon_top_pane_g1_ParamLimits

0x6a2e,	// (0x00036d09) stacon_top_pane_g1

0x6a50,	// (0x00036d2b) title_pane_stacon_ParamLimits

0x6a50,	// (0x00036d2b) title_pane_stacon

0x6a7a,	// (0x00036d55) uni_indicator_pane_stacon_ParamLimits

0x6a7a,	// (0x00036d55) uni_indicator_pane_stacon

0x6a92,	// (0x00036d6d) battery_pane_stacon_ParamLimits

0x6a92,	// (0x00036d6d) battery_pane_stacon

0x6ad6,	// (0x00036db1) control_bottom_pane_stacon_ParamLimits

0x6ad6,	// (0x00036db1) control_bottom_pane_stacon

0x6af9,	// (0x00036dd4) navi_pane_stacon_ParamLimits

0x6af9,	// (0x00036dd4) navi_pane_stacon

0x6b1c,	// (0x00036df7) stacon_bottom_pane_g1_ParamLimits

0x6b1c,	// (0x00036df7) stacon_bottom_pane_g1

0x64bf,	// (0x0003679a) aid_levels_signal_lsc_ParamLimits

0x64bf,	// (0x0003679a) aid_levels_signal_lsc

0x64d6,	// (0x000367b1) signal_pane_stacon_g1_ParamLimits

0x64d6,	// (0x000367b1) signal_pane_stacon_g1

0x64ea,	// (0x000367c5) signal_pane_stacon_g2_ParamLimits

0x64ea,	// (0x000367c5) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0003f9a0) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0003f9a0) signal_pane_stacon_g

0x651f,	// (0x000367fa) title_pane_stacon_t1_ParamLimits

0x651f,	// (0x000367fa) title_pane_stacon_t1

0x2b1d,	// (0x00032df8) uni_indicator_pane_stacon_g1

0x2b27,	// (0x00032e02) uni_indicator_pane_stacon_g2

0x2b09,	// (0x00032de4) uni_indicator_pane_stacon_g3

0x2b13,	// (0x00032dee) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0003f9ac) uni_indicator_pane_stacon_g

0x6544,	// (0x0003681f) control_top_pane_stacon_g1

0x654c,	// (0x00036827) control_top_pane_stacon_t1_ParamLimits

0x654c,	// (0x00036827) control_top_pane_stacon_t1

0x6583,	// (0x0003685e) aid_levels_battery_lsc_ParamLimits

0x6583,	// (0x0003685e) aid_levels_battery_lsc

0x659b,	// (0x00036876) battery_pane_stacon_g1_ParamLimits

0x659b,	// (0x00036876) battery_pane_stacon_g1

0x65ae,	// (0x00036889) battery_pane_stacon_g2_ParamLimits

0x65ae,	// (0x00036889) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0003f9b5) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0003f9b5) battery_pane_stacon_g

0x65ec,	// (0x000368c7) navi_icon_pane_stacon

0x6600,	// (0x000368db) navi_navi_pane_stacon

0x65ec,	// (0x000368c7) navi_text_pane_stacon

0x6544,	// (0x0003681f) control_bottom_pane_stacon_g1

0x6616,	// (0x000368f1) control_bottom_pane_stacon_t1_ParamLimits

0x6616,	// (0x000368f1) control_bottom_pane_stacon_t1

0x664d,	// (0x00036928) grid_app_pane_ParamLimits

0x664d,	// (0x00036928) grid_app_pane

0x6671,	// (0x0003694c) scroll_pane_cp15_ParamLimits

0x6671,	// (0x0003694c) scroll_pane_cp15

0x6684,	// (0x0003695f) cell_app_pane_ParamLimits

0x6684,	// (0x0003695f) cell_app_pane

0x66b0,	// (0x0003698b) cell_app_pane_g1_ParamLimits

0x66b0,	// (0x0003698b) cell_app_pane_g1

0x2b4b,	// (0x00032e26) cell_app_pane_g2_ParamLimits

0x2b4b,	// (0x00032e26) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0003f9ba) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0003f9ba) cell_app_pane_g

0x2b57,	// (0x00032e32) cell_app_pane_t1_ParamLimits

0x2b57,	// (0x00032e32) cell_app_pane_t1

0x2b6e,	// (0x00032e49) grid_highlight_pane_ParamLimits

0x2b6e,	// (0x00032e49) grid_highlight_pane

0x2888,	// (0x00032b63) cell_highlight_pane_g1

0x2890,	// (0x00032b6b) cell_highlight_pane_g2

0x2898,	// (0x00032b73) cell_highlight_pane_g3

0x28a0,	// (0x00032b7b) cell_highlight_pane_g4

0x28a8,	// (0x00032b83) cell_highlight_pane_g5

0x28b0,	// (0x00032b8b) cell_highlight_pane_g6

0x28b8,	// (0x00032b93) cell_highlight_pane_g7

0x28c0,	// (0x00032b9b) cell_highlight_pane_g8

0x28c8,	// (0x00032ba3) cell_highlight_pane_g9

0xf475,	// (0x0003f750) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0003f968) cell_highlight_pane_g

0x2b7f,	// (0x00032e5a) bg_scroll_pane

0x66e3,	// (0x000369be) scroll_handle_pane

0x2bc6,	// (0x00032ea1) scroll_bg_pane_g1

0x2bdb,	// (0x00032eb6) scroll_bg_pane_g2

0x2bf3,	// (0x00032ece) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0003f9bf) scroll_bg_pane_g

0x2c08,	// (0x00032ee3) scroll_handle_focus_pane_ParamLimits

0x2c08,	// (0x00032ee3) scroll_handle_focus_pane

0x2bc6,	// (0x00032ea1) scroll_handle_pane_g1

0x2c15,	// (0x00032ef0) scroll_handle_pane_g2

0x2bf3,	// (0x00032ece) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0003f9c6) scroll_handle_pane_g

0x28d9,	// (0x00032bb4) bg_popup_sub_pane_cp21_ParamLimits

0x28d9,	// (0x00032bb4) bg_popup_sub_pane_cp21

0x2c29,	// (0x00032f04) popup_fep_japan_predictive_window_t1_ParamLimits

0x2c29,	// (0x00032f04) popup_fep_japan_predictive_window_t1

0x2c40,	// (0x00032f1b) popup_fep_japan_predictive_window_t2_ParamLimits

0x2c40,	// (0x00032f1b) popup_fep_japan_predictive_window_t2

0x2c73,	// (0x00032f4e) popup_fep_japan_predictive_window_t3_ParamLimits

0x2c73,	// (0x00032f4e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0003f9cd) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0003f9cd) popup_fep_japan_predictive_window_t

0xf47f,	// (0x0003f75a) bg_popup_sub_pane_cp23

0x2caa,	// (0x00032f85) listscroll_japin_cand_pane

0x2cb2,	// (0x00032f8d) popup_fep_japan_candidate_window_t1

0x2cc0,	// (0x00032f9b) candidate_pane_ParamLimits

0x2cc0,	// (0x00032f9b) candidate_pane

0x2cd2,	// (0x00032fad) scroll_pane_cp30

0x2cdc,	// (0x00032fb7) list_single_popup_jap_candidate_pane_ParamLimits

0x2cdc,	// (0x00032fb7) list_single_popup_jap_candidate_pane

0xf47f,	// (0x0003f75a) list_highlight_pane_cp30

0x2cf0,	// (0x00032fcb) list_single_popup_jap_candidate_pane_t1

0x670c,	// (0x000369e7) level_1_signal

0x6719,	// (0x000369f4) level_2_signal

0x6726,	// (0x00036a01) level_3_signal

0x6733,	// (0x00036a0e) level_4_signal

0x6740,	// (0x00036a1b) level_5_signal

0x674d,	// (0x00036a28) level_6_signal

0x675a,	// (0x00036a35) level_7_signal

0x670c,	// (0x000369e7) level_1_battery

0x6719,	// (0x000369f4) level_2_battery

0x6726,	// (0x00036a01) level_3_battery

0x6733,	// (0x00036a0e) level_4_battery

0x6740,	// (0x00036a1b) level_5_battery

0x674d,	// (0x00036a28) level_6_battery

0x675a,	// (0x00036a35) level_7_battery

0x2d17,	// (0x00032ff2) list_menu_pane_ParamLimits

0x2d17,	// (0x00032ff2) list_menu_pane

0x2d2d,	// (0x00033008) scroll_pane_cp25_ParamLimits

0x2d2d,	// (0x00033008) scroll_pane_cp25

0x2d46,	// (0x00033021) list_double2_graphic_pane_cp2_ParamLimits

0x2d46,	// (0x00033021) list_double2_graphic_pane_cp2

0x2d46,	// (0x00033021) list_double2_large_graphic_pane_cp2_ParamLimits

0x2d46,	// (0x00033021) list_double2_large_graphic_pane_cp2

0x2d46,	// (0x00033021) list_double2_pane_cp2_ParamLimits

0x2d46,	// (0x00033021) list_double2_pane_cp2

0x2d46,	// (0x00033021) list_double_graphic_pane_cp2_ParamLimits

0x2d46,	// (0x00033021) list_double_graphic_pane_cp2

0x2d46,	// (0x00033021) list_double_large_graphic_pane_cp2_ParamLimits

0x2d46,	// (0x00033021) list_double_large_graphic_pane_cp2

0x2d46,	// (0x00033021) list_double_number_pane_cp2_ParamLimits

0x2d46,	// (0x00033021) list_double_number_pane_cp2

0x2d46,	// (0x00033021) list_double_pane_cp2_ParamLimits

0x2d46,	// (0x00033021) list_double_pane_cp2

0x679c,	// (0x00036a77) list_single_2graphic_pane_cp2_ParamLimits

0x679c,	// (0x00036a77) list_single_2graphic_pane_cp2

0x679c,	// (0x00036a77) list_single_graphic_heading_pane_cp2_ParamLimits

0x679c,	// (0x00036a77) list_single_graphic_heading_pane_cp2

0x679c,	// (0x00036a77) list_single_graphic_pane_cp2_ParamLimits

0x679c,	// (0x00036a77) list_single_graphic_pane_cp2

0x679c,	// (0x00036a77) list_single_heading_pane_cp2_ParamLimits

0x679c,	// (0x00036a77) list_single_heading_pane_cp2

0x2d56,	// (0x00033031) list_single_large_graphic_pane_cp2_ParamLimits

0x2d56,	// (0x00033031) list_single_large_graphic_pane_cp2

0x679c,	// (0x00036a77) list_single_number_heading_pane_cp2_ParamLimits

0x679c,	// (0x00036a77) list_single_number_heading_pane_cp2

0x679c,	// (0x00036a77) list_single_number_pane_cp2_ParamLimits

0x679c,	// (0x00036a77) list_single_number_pane_cp2

0x679c,	// (0x00036a77) list_single_pane_cp2_ParamLimits

0x679c,	// (0x00036a77) list_single_pane_cp2

0x2d6f,	// (0x0003304a) bg_popup_sub_pane_cp22

0x6885,	// (0x00036b60) popup_side_volume_key_window_g1

0x68af,	// (0x00036b8a) popup_side_volume_key_window_t1

0x68cd,	// (0x00036ba8) volume_small_pane_cp1

0xf546,	// (0x0003f821) bg_popup_sub_pane_cp24_ParamLimits

0xf546,	// (0x0003f821) bg_popup_sub_pane_cp24

0x2d85,	// (0x00033060) fep_china_uni_candidate_pane_ParamLimits

0x2d85,	// (0x00033060) fep_china_uni_candidate_pane

0x2d99,	// (0x00033074) fep_china_uni_entry_pane

0x2da9,	// (0x00033084) popup_fep_china_uni_window_g1

0x2dc5,	// (0x000330a0) fep_china_uni_entry_pane_g1

0x2dcf,	// (0x000330aa) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0003f9fe) fep_china_uni_entry_pane_g

0x2dd9,	// (0x000330b4) fep_entry_item_pane

0x2de3,	// (0x000330be) fep_candidate_item_pane

0x2deb,	// (0x000330c6) fep_china_uni_candidate_pane_g1

0x2df5,	// (0x000330d0) fep_china_uni_candidate_pane_g2

0x2dfd,	// (0x000330d8) fep_china_uni_candidate_pane_g3

0x2e05,	// (0x000330e0) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0003fa03) fep_china_uni_candidate_pane_g

0xf475,	// (0x0003f750) fep_entry_item_pane_g1

0x2e0f,	// (0x000330ea) fep_entry_item_pane_t1_ParamLimits

0x2e0f,	// (0x000330ea) fep_entry_item_pane_t1

0x2e25,	// (0x00033100) fep_candidate_item_pane_t1_ParamLimits

0x2e25,	// (0x00033100) fep_candidate_item_pane_t1

0x2e3a,	// (0x00033115) fep_candidate_item_pane_t2_ParamLimits

0x2e3a,	// (0x00033115) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0003fa0c) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0003fa0c) fep_candidate_item_pane_t

0xf4d9,	// (0x0003f7b4) list_highlight_pane_cp31_ParamLimits

0xf4d9,	// (0x0003f7b4) list_highlight_pane_cp31

0x2e4c,	// (0x00033127) level_1_signal_lsc

0x2e55,	// (0x00033130) level_2_signal_lsc

0x2e5e,	// (0x00033139) level_3_signal_lsc

0x2e67,	// (0x00033142) level_4_signal_lsc

0x2e70,	// (0x0003314b) level_5_signal_lsc

0x2e79,	// (0x00033154) level_6_signal_lsc

0x2e82,	// (0x0003315d) level_7_signal_lsc

0x2e82,	// (0x0003315d) level_1_battery_lsc

0x2e8b,	// (0x00033166) level_2_battery_lsc

0x2e94,	// (0x0003316f) level_3_battery_lsc

0x2e9d,	// (0x00033178) level_4_battery_lsc

0x2ea6,	// (0x00033181) level_5_battery_lsc

0x2eaf,	// (0x0003318a) level_6_battery_lsc

0x2e4c,	// (0x00033127) level_7_battery_lsc

0x2eb8,	// (0x00033193) scroll_handle_focus_pane_g1

0x2ec1,	// (0x0003319c) scroll_handle_focus_pane_g2

0x2eca,	// (0x000331a5) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0003fa11) scroll_handle_focus_pane_g

0x68d5,	// (0x00036bb0) list_single_2graphic_pane_g1_ParamLimits

0x68d5,	// (0x00036bb0) list_single_2graphic_pane_g1

0x5f00,	// (0x000361db) list_single_2graphic_pane_g2_ParamLimits

0x5f00,	// (0x000361db) list_single_2graphic_pane_g2

0x5e86,	// (0x00036161) list_single_2graphic_pane_g3_ParamLimits

0x5e86,	// (0x00036161) list_single_2graphic_pane_g3

0x68e1,	// (0x00036bbc) list_single_2graphic_pane_g4_ParamLimits

0x68e1,	// (0x00036bbc) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0003fa18) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0003fa18) list_single_2graphic_pane_g

0x68ed,	// (0x00036bc8) list_single_2graphic_pane_t1_ParamLimits

0x68ed,	// (0x00036bc8) list_single_2graphic_pane_t1

0x691b,	// (0x00036bf6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x691b,	// (0x00036bf6) list_double2_graphic_large_graphic_pane_g1

0x5f77,	// (0x00036252) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5f77,	// (0x00036252) list_double2_graphic_large_graphic_pane_g2

0x5f43,	// (0x0003621e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5f43,	// (0x0003621e) list_double2_graphic_large_graphic_pane_g3

0x692d,	// (0x00036c08) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x692d,	// (0x00036c08) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0003fa21) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0003fa21) list_double2_graphic_large_graphic_pane_g

0x6939,	// (0x00036c14) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6939,	// (0x00036c14) list_double2_graphic_large_graphic_pane_t1

0x694f,	// (0x00036c2a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x694f,	// (0x00036c2a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0003fa2a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0003fa2a) list_double2_graphic_large_graphic_pane_t

0x6bde,	// (0x00036eb9) popup_fast_swap_window_ParamLimits

0x6bde,	// (0x00036eb9) popup_fast_swap_window

0x6bfc,	// (0x00036ed7) popup_side_volume_key_window

0x6c1a,	// (0x00036ef5) stacon_top_pane

0x6c24,	// (0x00036eff) status_pane_ParamLimits

0x6c24,	// (0x00036eff) status_pane

0x6c1a,	// (0x00036ef5) status_small_pane

0xf47f,	// (0x0003f75a) control_pane

0xf47f,	// (0x0003f75a) stacon_bottom_pane

0x2810,	// (0x00032aeb) scroll_pane_cp121

0x2807,	// (0x00032ae2) set_content_pane

0x6961,	// (0x00036c3c) bg_active_tab_pane_g1_cp1

0x696a,	// (0x00036c45) bg_active_tab_pane_g2_cp1

0x6973,	// (0x00036c4e) bg_active_tab_pane_g3_cp1

0x6961,	// (0x00036c3c) bg_passive_tab_pane_g1_cp1

0x696a,	// (0x00036c45) bg_passive_tab_pane_g2_cp1

0x6973,	// (0x00036c4e) bg_passive_tab_pane_g3_cp1

0x697c,	// (0x00036c57) bg_active_tab_pane_g1_cp2

0x696a,	// (0x00036c45) bg_active_tab_pane_g2_cp2

0x6985,	// (0x00036c60) bg_active_tab_pane_g3_cp2

0x697c,	// (0x00036c57) bg_passive_tab_pane_g1_cp2

0x696a,	// (0x00036c45) bg_passive_tab_pane_g2_cp2

0x6985,	// (0x00036c60) bg_passive_tab_pane_g3_cp2

0x698e,	// (0x00036c69) bg_active_tab_pane_g1_cp3

0x696a,	// (0x00036c45) bg_active_tab_pane_g2_cp3

0x6997,	// (0x00036c72) bg_active_tab_pane_g3_cp3

0x698e,	// (0x00036c69) bg_passive_tab_pane_g1_cp3

0x696a,	// (0x00036c45) bg_passive_tab_pane_g2_cp3

0x6997,	// (0x00036c72) bg_passive_tab_pane_g3_cp3

0x69a0,	// (0x00036c7b) bg_active_tab_pane_g1_cp4

0x696a,	// (0x00036c45) bg_active_tab_pane_g2_cp4

0x69ab,	// (0x00036c86) bg_active_tab_pane_g3_cp4

0x69a0,	// (0x00036c7b) bg_passive_tab_pane_g1_cp4

0x696a,	// (0x00036c45) bg_passive_tab_pane_g2_cp4

0x69ab,	// (0x00036c86) bg_passive_tab_pane_g3_cp4

0x6b38,	// (0x00036e13) bg_active_tab_pane_g1_cp5

0x696a,	// (0x00036c45) bg_active_tab_pane_g2_cp5

0x6b41,	// (0x00036e1c) bg_active_tab_pane_g3_cp5

0x6b38,	// (0x00036e13) bg_passive_tab_pane_g1_cp5

0x696a,	// (0x00036c45) bg_passive_tab_pane_g2_cp5

0x6b41,	// (0x00036e1c) bg_passive_tab_pane_g3_cp5

0x6b4a,	// (0x00036e25) list_set_graphic_pane_ParamLimits

0x6b4a,	// (0x00036e25) list_set_graphic_pane

0xf47f,	// (0x0003f75a) bg_set_opt_pane_cp4

0x6b5f,	// (0x00036e3a) list_set_graphic_pane_g1_ParamLimits

0x6b5f,	// (0x00036e3a) list_set_graphic_pane_g1

0x6b6b,	// (0x00036e46) list_set_graphic_pane_g2_ParamLimits

0x6b6b,	// (0x00036e46) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0003fa2f) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0003fa2f) list_set_graphic_pane_g

0x0009,

0xface,	// (0x0003fda9) volume_small_pane_cp_g

0x6b8f,	// (0x00036e6a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6b8f,	// (0x00036e6a) list_double2_large_graphic_pane_g1_cp2

0x6b9d,	// (0x00036e78) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6b9d,	// (0x00036e78) list_double2_large_graphic_pane_g2_cp2

0x6bae,	// (0x00036e89) list_double2_large_graphic_pane_g3_cp2

0x6bb6,	// (0x00036e91) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6bb6,	// (0x00036e91) list_double2_large_graphic_pane_t1_cp2

0x6bcc,	// (0x00036ea7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x6bcc,	// (0x00036ea7) list_double2_large_graphic_pane_t2_cp2

0xa529,	// (0x0003a804) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa529,	// (0x0003a804) list_double_large_graphic_pane_g1_cp2

0xa53c,	// (0x0003a817) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa53c,	// (0x0003a817) list_double_large_graphic_pane_g2_cp2

0x6d42,	// (0x0003701d) list_double_large_graphic_pane_g3_cp2

0xa54d,	// (0x0003a828) list_double_large_graphic_pane_g4_cp

0xa555,	// (0x0003a830) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa555,	// (0x0003a830) list_double_large_graphic_pane_t1_cp2

0xa56c,	// (0x0003a847) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa56c,	// (0x0003a847) list_double_large_graphic_pane_t2_cp2

0x6c32,	// (0x00036f0d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6c32,	// (0x00036f0d) list_double2_graphic_pane_g1_cp2

0x6c40,	// (0x00036f1b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6c40,	// (0x00036f1b) list_double2_graphic_pane_g2_cp2

0x6c51,	// (0x00036f2c) list_double2_graphic_pane_g3_cp2

0x6c5b,	// (0x00036f36) list_double2_graphic_pane_t1_cp2_ParamLimits

0x6c5b,	// (0x00036f36) list_double2_graphic_pane_t1_cp2

0x6c71,	// (0x00036f4c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x6c71,	// (0x00036f4c) list_double2_graphic_pane_t2_cp2

0x6c83,	// (0x00036f5e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x6c83,	// (0x00036f5e) list_single_number_heading_pane_g1_cp2

0x6c8f,	// (0x00036f6a) list_single_number_heading_pane_g2_cp2

0x6c97,	// (0x00036f72) list_single_number_heading_pane_t1_cp2_ParamLimits

0x6c97,	// (0x00036f72) list_single_number_heading_pane_t1_cp2

0x6cad,	// (0x00036f88) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6cad,	// (0x00036f88) list_single_number_heading_pane_t2_cp2

0x6cc1,	// (0x00036f9c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x6cc1,	// (0x00036f9c) list_single_number_heading_pane_t3_cp2

0x6c83,	// (0x00036f5e) list_single_heading_pane_g1_cp2_ParamLimits

0x6c83,	// (0x00036f5e) list_single_heading_pane_g1_cp2

0x6c8f,	// (0x00036f6a) list_single_heading_pane_g2_cp2

0x6c97,	// (0x00036f72) list_single_heading_pane_t1_cp2_ParamLimits

0x6c97,	// (0x00036f72) list_single_heading_pane_t1_cp2

0xa323,	// (0x0003a5fe) list_single_heading_pane_t2_cp2_ParamLimits

0xa323,	// (0x0003a5fe) list_single_heading_pane_t2_cp2

0xa26b,	// (0x0003a546) list_double_graphic_pane_g1_cp2_ParamLimits

0xa26b,	// (0x0003a546) list_double_graphic_pane_g1_cp2

0xa277,	// (0x0003a552) list_double_graphic_pane_g2_cp2_ParamLimits

0xa277,	// (0x0003a552) list_double_graphic_pane_g2_cp2

0xa286,	// (0x0003a561) list_double_graphic_pane_g3_cp2

0xa28e,	// (0x0003a569) list_double_graphic_pane_t1_cp2_ParamLimits

0xa28e,	// (0x0003a569) list_double_graphic_pane_t1_cp2

0xa2a4,	// (0x0003a57f) list_double_graphic_pane_t2_cp2_ParamLimits

0xa2a4,	// (0x0003a57f) list_double_graphic_pane_t2_cp2

0x6d36,	// (0x00037011) list_double_number_pane_g1_cp2_ParamLimits

0x6d36,	// (0x00037011) list_double_number_pane_g1_cp2

0x6d42,	// (0x0003701d) list_double_number_pane_g2_cp2

0xa22f,	// (0x0003a50a) list_double_number_pane_t1_cp2_ParamLimits

0xa22f,	// (0x0003a50a) list_double_number_pane_t1_cp2

0xa243,	// (0x0003a51e) list_double_number_pane_t2_cp2_ParamLimits

0xa243,	// (0x0003a51e) list_double_number_pane_t2_cp2

0xa259,	// (0x0003a534) list_double_number_pane_t3_cp2_ParamLimits

0xa259,	// (0x0003a534) list_double_number_pane_t3_cp2

0xa118,	// (0x0003a3f3) list_single_graphic_pane_g1_cp2_ParamLimits

0xa118,	// (0x0003a3f3) list_single_graphic_pane_g1_cp2

0x6d9c,	// (0x00037077) list_single_graphic_pane_g2_cp2_ParamLimits

0x6d9c,	// (0x00037077) list_single_graphic_pane_g2_cp2

0x6da8,	// (0x00037083) list_single_graphic_pane_g3_cp2

0xa0ee,	// (0x0003a3c9) list_single_graphic_pane_t1_cp2_ParamLimits

0xa0ee,	// (0x0003a3c9) list_single_graphic_pane_t1_cp2

0x6d9c,	// (0x00037077) list_single_number_pane_g1_cp2_ParamLimits

0x6d9c,	// (0x00037077) list_single_number_pane_g1_cp2

0x6da8,	// (0x00037083) list_single_number_pane_g2_cp2

0xa0ee,	// (0x0003a3c9) list_single_number_pane_t1_cp2_ParamLimits

0xa0ee,	// (0x0003a3c9) list_single_number_pane_t1_cp2

0xa104,	// (0x0003a3df) list_single_number_pane_t2_cp2_ParamLimits

0xa104,	// (0x0003a3df) list_single_number_pane_t2_cp2

0x6b9d,	// (0x00036e78) list_double2_pane_g1_cp2_ParamLimits

0x6b9d,	// (0x00036e78) list_double2_pane_g1_cp2

0x6bae,	// (0x00036e89) list_double2_pane_g2_cp2

0x6d0e,	// (0x00036fe9) list_double2_pane_t1_cp2_ParamLimits

0x6d0e,	// (0x00036fe9) list_double2_pane_t1_cp2

0x6d24,	// (0x00036fff) list_double2_pane_t2_cp2_ParamLimits

0x6d24,	// (0x00036fff) list_double2_pane_t2_cp2

0x6d36,	// (0x00037011) list_double_pane_g1_cp2_ParamLimits

0x6d36,	// (0x00037011) list_double_pane_g1_cp2

0x6d42,	// (0x0003701d) list_double_pane_g2_cp2

0x6d4a,	// (0x00037025) list_double_pane_t1_cp2_ParamLimits

0x6d4a,	// (0x00037025) list_double_pane_t1_cp2

0x6d60,	// (0x0003703b) list_double_pane_t2_cp2_ParamLimits

0x6d60,	// (0x0003703b) list_double_pane_t2_cp2

0x6d8c,	// (0x00037067) list_single_pane_cp2_g3

0x6d9c,	// (0x00037077) list_single_pane_g1_cp2_ParamLimits

0x6d9c,	// (0x00037077) list_single_pane_g1_cp2

0x6da8,	// (0x00037083) list_single_pane_g2_cp2

0x6db0,	// (0x0003708b) list_single_pane_t1_cp2_ParamLimits

0x6db0,	// (0x0003708b) list_single_pane_t1_cp2

0x6dc8,	// (0x000370a3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6dc8,	// (0x000370a3) list_single_large_graphic_pane_g1_cp2

0x6dd6,	// (0x000370b1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x6dd6,	// (0x000370b1) list_single_large_graphic_pane_g2_cp2

0x6de2,	// (0x000370bd) list_single_large_graphic_pane_g3_cp2

0x6dea,	// (0x000370c5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x6dea,	// (0x000370c5) list_single_large_graphic_pane_g4_cp1

0x6e04,	// (0x000370df) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x6e04,	// (0x000370df) list_single_large_graphic_pane_t1_cp2

0xa0b8,	// (0x0003a393) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa0b8,	// (0x0003a393) list_single_graphic_heading_pane_g1_cp2

0xa085,	// (0x0003a360) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa085,	// (0x0003a360) list_single_graphic_heading_pane_g4_cp2

0x6da8,	// (0x00037083) list_single_graphic_heading_pane_g5_cp2

0xa0c4,	// (0x0003a39f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa0c4,	// (0x0003a39f) list_single_graphic_heading_pane_t1_cp2

0xa0da,	// (0x0003a3b5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa0da,	// (0x0003a3b5) list_single_graphic_heading_pane_t2_cp2

0xa079,	// (0x0003a354) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa079,	// (0x0003a354) list_single_2graphic_pane_g1_cp2

0xa085,	// (0x0003a360) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa085,	// (0x0003a360) list_single_2graphic_pane_g2_cp2

0x6da8,	// (0x00037083) list_single_2graphic_pane_g3_cp2

0xa096,	// (0x0003a371) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa096,	// (0x0003a371) list_single_2graphic_pane_g4_cp2

0xa0a2,	// (0x0003a37d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa0a2,	// (0x0003a37d) list_single_2graphic_pane_t1_cp2

0xf475,	// (0x0003f750) list_highlight_pane_g10_cp1

0x9c51,	// (0x00039f2c) list_highlight_pane_g1_cp1

0x9c59,	// (0x00039f34) list_highlight_pane_g2_cp1

0x9c61,	// (0x00039f3c) list_highlight_pane_g3_cp1

0x9c69,	// (0x00039f44) list_highlight_pane_g4_cp1

0x9c71,	// (0x00039f4c) list_highlight_pane_g5_cp1

0x9c79,	// (0x00039f54) list_highlight_pane_g6_cp1

0x9c81,	// (0x00039f5c) list_highlight_pane_g7_cp1

0x9c89,	// (0x00039f64) list_highlight_pane_g8_cp1

0x9c91,	// (0x00039f6c) list_highlight_pane_g9_cp1

0x9b71,	// (0x00039e4c) form_field_slider_pane_t3

0x9b7f,	// (0x00039e5a) form_field_slider_pane_t4

0x9b8d,	// (0x00039e68) slider_form_pane_ParamLimits

0x9b8d,	// (0x00039e68) slider_form_pane

0xf47f,	// (0x0003f75a) control_abbreviations

0xf47f,	// (0x0003f75a) control_conventions

0xf47f,	// (0x0003f75a) control_definitions

0xf47f,	// (0x0003f75a) format_table_attribute

0xa379,	// (0x0003a654) bg_popup_preview_window_pane_g9

0xf47f,	// (0x0003f75a) format_table_data2

0xf47f,	// (0x0003f75a) format_table_data3

0xf47f,	// (0x0003f75a) format_table_data_example

0x0008,

0xf47f,	// (0x0003f75a) intro_purpose

0xf8f0,	// (0x0003fbcb) bg_popup_preview_window_pane_g

0xf47f,	// (0x0003f75a) texts_category

0xf47f,	// (0x0003f75a) texts_graphics

0x6e1a,	// (0x000370f5) text_digital

0x6e29,	// (0x00037104) text_primary

0x6e38,	// (0x00037113) text_primary_small

0x6e47,	// (0x00037122) text_secondary

0x6e56,	// (0x00037131) text_title

0xaaec,	// (0x0003adc7) bg_passive_tab_pane_g1_cp3_srt

0x696a,	// (0x00036c45) bg_passive_tab_pane_g2_cp3_srt

0xaaf5,	// (0x0003add0) bg_passive_tab_pane_g3_cp3_srt

0xf4d9,	// (0x0003f7b4) bg_active_tab_pane_cp3_srt_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_active_tab_pane_cp3_srt

0xaafe,	// (0x0003add9) tabs_4_active_pane_srt_g1

0xab06,	// (0x0003ade1) tabs_4_active_pane_srt_t1_ParamLimits

0xab06,	// (0x0003ade1) tabs_4_active_pane_srt_t1

0xaaec,	// (0x0003adc7) bg_active_tab_pane_g1_cp3_copy1

0x696a,	// (0x00036c45) bg_active_tab_pane_g2_cp3_copy1

0xaaf5,	// (0x0003add0) bg_active_tab_pane_g3_cp3_copy1

0xf4d9,	// (0x0003f7b4) tabs_2_long_active_pane_srt_ParamLimits

0xf4d9,	// (0x0003f7b4) tabs_2_long_active_pane_srt

0xf4d9,	// (0x0003f7b4) tabs_2_long_passive_pane_srt_ParamLimits

0xf4d9,	// (0x0003f7b4) tabs_2_long_passive_pane_srt

0x64a1,	// (0x0003677c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x64a1,	// (0x0003677c) bg_passive_tab_pane_cp4_srt

0xa7b6,	// (0x0003aa91) bg_passive_tab_pane_g1_cp4_srt

0x696a,	// (0x00036c45) bg_passive_tab_pane_g2_cp4_srt

0xa7bf,	// (0x0003aa9a) bg_passive_tab_pane_g3_cp4_srt

0x2edf,	// (0x000331ba) bg_active_tab_pane_cp4_srt_ParamLimits

0x2edf,	// (0x000331ba) bg_active_tab_pane_cp4_srt

0xa7c8,	// (0x0003aaa3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa7c8,	// (0x0003aaa3) tabs_2_long_active_pane_srt_t1

0xa7b6,	// (0x0003aa91) bg_active_tab_pane_g1_cp4_srt

0x696a,	// (0x00036c45) bg_active_tab_pane_g2_cp4_srt

0xa7bf,	// (0x0003aa9a) bg_active_tab_pane_g3_cp4_srt

0xf546,	// (0x0003f821) tabs_3_long_active_pane_srt_ParamLimits

0xf546,	// (0x0003f821) tabs_3_long_active_pane_srt

0xf546,	// (0x0003f821) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xf546,	// (0x0003f821) tabs_3_long_passive_pane_cp_srt

0xf546,	// (0x0003f821) tabs_3_long_passive_pane_srt_ParamLimits

0xf546,	// (0x0003f821) tabs_3_long_passive_pane_srt

0x64a1,	// (0x0003677c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x64a1,	// (0x0003677c) bg_passive_tab_pane_cp5_srt

0x6b38,	// (0x00036e13) bg_passive_tab_pane_g1_cp5_srt

0x696a,	// (0x00036c45) bg_passive_tab_pane_g2_cp5_srt

0x6b41,	// (0x00036e1c) bg_passive_tab_pane_g3_cp5_srt

0x2edf,	// (0x000331ba) bg_active_tab_pane_cp5_srt_ParamLimits

0x2edf,	// (0x000331ba) bg_active_tab_pane_cp5_srt

0xa7a4,	// (0x0003aa7f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa7a4,	// (0x0003aa7f) tabs_3_long_active_pane_srt_t1

0x6b38,	// (0x00036e13) bg_active_tab_pane_g1_cp5_srt

0x696a,	// (0x00036c45) bg_active_tab_pane_g2_cp5_srt

0x6b41,	// (0x00036e1c) bg_active_tab_pane_g3_cp5_srt

0xa796,	// (0x0003aa71) navi_text_pane_srt_t1

0xa78e,	// (0x0003aa69) navi_icon_pane_srt_g1

0x8758,	// (0x00038a33) midp_editing_number_pane_srt

0x6e65,	// (0x00037140) midp_ticker_pane_srt

0x8760,	// (0x00038a3b) midp_ticker_pane_srt_g1

0x8768,	// (0x00038a43) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0003fa4e) midp_ticker_pane_srt_g

0x8770,	// (0x00038a4b) midp_ticker_pane_srt_t1

0xa77f,	// (0x0003aa5a) midp_editing_number_pane_t1_copy1

0x64a1,	// (0x0003677c) listscroll_midp_pane

0x64a1,	// (0x0003677c) midp_form_pane

0x6ecf,	// (0x000371aa) midp_info_popup_window_ParamLimits

0x6ecf,	// (0x000371aa) midp_info_popup_window

0x28d9,	// (0x00032bb4) bg_popup_sub_pane_cp50_ParamLimits

0x28d9,	// (0x00032bb4) bg_popup_sub_pane_cp50

0x9887,	// (0x00039b62) listscroll_midp_info_pane_ParamLimits

0x9887,	// (0x00039b62) listscroll_midp_info_pane

0x986f,	// (0x00039b4a) listscroll_form_midp_pane_ParamLimits

0x986f,	// (0x00039b4a) listscroll_form_midp_pane

0x987b,	// (0x00039b56) scroll_bar_cp050

0x984f,	// (0x00039b2a) list_midp_pane

0xb587,	// (0x0003b862) signal_pane_g2_cp

0x9789,	// (0x00039a64) listscroll_midp_info_pane_t1_ParamLimits

0x9789,	// (0x00039a64) listscroll_midp_info_pane_t1

0x97a1,	// (0x00039a7c) listscroll_midp_info_pane_t2_ParamLimits

0x97a1,	// (0x00039a7c) listscroll_midp_info_pane_t2

0x97df,	// (0x00039aba) listscroll_midp_info_pane_t3_ParamLimits

0x97df,	// (0x00039aba) listscroll_midp_info_pane_t3

0x9819,	// (0x00039af4) listscroll_midp_info_pane_t4_ParamLimits

0x9819,	// (0x00039af4) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0003fb06) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0003fb06) listscroll_midp_info_pane_t

0x2959,	// (0x00032c34) scroll_pane_cp21

0x9723,	// (0x000399fe) form_midp_field_choice_group_pane

0x972c,	// (0x00039a07) form_midp_field_text_pane

0x976f,	// (0x00039a4a) form_midp_field_time_pane

0x9777,	// (0x00039a52) form_midp_gauge_slider_pane

0x9780,	// (0x00039a5b) form_midp_gauge_wait_pane

0xf47f,	// (0x0003f75a) form_midp_image_pane

0x728a,	// (0x00037565) list_single_midp_pane_ParamLimits

0x728a,	// (0x00037565) list_single_midp_pane

0x96e7,	// (0x000399c2) form_midp_field_text_pane_t1

0x94d3,	// (0x000397ae) input_focus_pane_cp050

0x9712,	// (0x000399ed) list_midp_form_text_pane

0x96b6,	// (0x00039991) form_midp_field_choice_group_pane_t1

0x96c4,	// (0x0003999f) input_focus_pane_cp051

0x96d8,	// (0x000399b3) list_midp_choice_pane

0xf47f,	// (0x0003f75a) status_idle_pane

0x969a,	// (0x00039975) form_midp_field_time_pane_t1

0xf475,	// (0x0003f750) wait_anim_pane_g2_copy1

0x96a8,	// (0x00039983) form_midp_field_time_pane_t2

0x0001,

0x86b6,	// (0x00038991) aid_navinavi_width_2_pane

0xf826,	// (0x0003fb01) form_midp_field_time_pane_t

0xf47f,	// (0x0003f75a) input_focus_pane_cp052

0xf47f,	// (0x0003f75a) bg_input_focus_pane_cp040

0x965a,	// (0x00039935) form_midp_gauge_slider_pane_t1

0x9668,	// (0x00039943) form_midp_gauge_slider_pane_t2

0x9676,	// (0x00039951) form_midp_gauge_slider_pane_t3

0x9684,	// (0x0003995f) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0003faf8) form_midp_gauge_slider_pane_t

0x9692,	// (0x0003996d) form_midp_slider_pane

0xf4d9,	// (0x0003f7b4) bg_input_focus_pane_cp041_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_input_focus_pane_cp041

0x9627,	// (0x00039902) form_midp_gauge_wait_pane_t1_ParamLimits

0x9627,	// (0x00039902) form_midp_gauge_wait_pane_t1

0x9639,	// (0x00039914) form_midp_gauge_wait_pane_t2_ParamLimits

0x9639,	// (0x00039914) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0003faf3) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0003faf3) form_midp_gauge_wait_pane_t

0x964b,	// (0x00039926) form_midp_wait_pane_ParamLimits

0x964b,	// (0x00039926) form_midp_wait_pane

0x95ef,	// (0x000398ca) form_midp_image_pane_g1

0x95f8,	// (0x000398d3) form_midp_image_pane_t1

0x9607,	// (0x000398e2) form_midp_image_pane_t2

0x9616,	// (0x000398f1) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0003faec) form_midp_image_pane_t

0x95e6,	// (0x000398c1) list_single_midp_pane_g1

0x44fa,	// (0x000347d5) list_single_midp_pane_t1

0x95cc,	// (0x000398a7) list_midp_form_item_pane_ParamLimits

0x95cc,	// (0x000398a7) list_midp_form_item_pane

0x6f27,	// (0x00037202) list_midp_form_item_pane_t1

0x6f36,	// (0x00037211) midp_ticker_pane_g1

0x6f42,	// (0x0003721d) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0003fa34) midp_ticker_pane_g

0x8685,	// (0x00038960) midp_ticker_pane_t1

0xa9f2,	// (0x0003accd) midp_editing_number_pane_t1

0xa9d0,	// (0x0003acab) midp_editing_number_pane

0xa9df,	// (0x0003acba) midp_ticker_pane

0xa76f,	// (0x0003aa4a) ai_message_heading_pane

0xf47f,	// (0x0003f75a) bg_popup_window_pane_cp14

0xa777,	// (0x0003aa52) listscroll_ai_message_pane

0xa6f5,	// (0x0003a9d0) ai_message_heading_pane_g1_ParamLimits

0xa6f5,	// (0x0003a9d0) ai_message_heading_pane_g1

0xa701,	// (0x0003a9dc) ai_message_heading_pane_g2_ParamLimits

0xa701,	// (0x0003a9dc) ai_message_heading_pane_g2

0xa70f,	// (0x0003a9ea) ai_message_heading_pane_g3_ParamLimits

0xa70f,	// (0x0003a9ea) ai_message_heading_pane_g3

0xa71b,	// (0x0003a9f6) ai_message_heading_pane_g4_ParamLimits

0xa71b,	// (0x0003a9f6) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0003fc2d) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0003fc2d) ai_message_heading_pane_g

0xa727,	// (0x0003aa02) ai_message_heading_pane_t1_ParamLimits

0xa727,	// (0x0003aa02) ai_message_heading_pane_t1

0xa741,	// (0x0003aa1c) ai_message_heading_pane_t2_ParamLimits

0xa741,	// (0x0003aa1c) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0003fc36) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0003fc36) ai_message_heading_pane_t

0xa755,	// (0x0003aa30) bg_popup_heading_pane_cp1_ParamLimits

0xa755,	// (0x0003aa30) bg_popup_heading_pane_cp1

0xa6e3,	// (0x0003a9be) list_ai_message_pane_ParamLimits

0xa6e3,	// (0x0003a9be) list_ai_message_pane

0x2959,	// (0x00032c34) scroll_pane_cp10

0xa67f,	// (0x0003a95a) list_ai_message_pane_g1

0xa687,	// (0x0003a962) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0003fc0a) list_ai_message_pane_g

0xa68f,	// (0x0003a96a) list_ai_message_pane_t1_ParamLimits

0xa68f,	// (0x0003a96a) list_ai_message_pane_t1

0xa6a4,	// (0x0003a97f) list_ai_message_pane_t2_ParamLimits

0xa6a4,	// (0x0003a97f) list_ai_message_pane_t2

0xa6b9,	// (0x0003a994) list_ai_message_pane_t3_ParamLimits

0xa6b9,	// (0x0003a994) list_ai_message_pane_t3

0xa6ce,	// (0x0003a9a9) list_ai_message_pane_t4_ParamLimits

0xa6ce,	// (0x0003a9a9) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0003fc0f) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0003fc0f) list_ai_message_pane_t

0xa668,	// (0x0003a943) cell_ai_soft_ind_pane_ParamLimits

0xa668,	// (0x0003a943) cell_ai_soft_ind_pane

0x8697,	// (0x00038972) cell_ai_soft_ind_pane_g1_ParamLimits

0x8697,	// (0x00038972) cell_ai_soft_ind_pane_g1

0xf47f,	// (0x0003f75a) grid_highlight_cp1

0x86a4,	// (0x0003897f) text_secondary_cp56_ParamLimits

0x86a4,	// (0x0003897f) text_secondary_cp56

0xa63d,	// (0x0003a918) example_general_pane_ParamLimits

0xa63d,	// (0x0003a918) example_general_pane

0xa649,	// (0x0003a924) example_parent_pane_g1_ParamLimits

0xa649,	// (0x0003a924) example_parent_pane_g1

0xa655,	// (0x0003a930) example_parent_pane_t1_ParamLimits

0xa655,	// (0x0003a930) example_parent_pane_t1

0x8ce5,	// (0x00038fc0) popup_preview_text_window_ParamLimits

0x8ce5,	// (0x00038fc0) popup_preview_text_window

0x6d94,	// (0x0003706f) list_single_pane_cp2_g4

0x23f3,	// (0x000326ce) bg_popup_preview_window_pane_ParamLimits

0x23f3,	// (0x000326ce) bg_popup_preview_window_pane

0xa383,	// (0x0003a65e) popup_preview_text_window_t1_ParamLimits

0xa383,	// (0x0003a65e) popup_preview_text_window_t1

0xa3a1,	// (0x0003a67c) popup_preview_text_window_t2_ParamLimits

0xa3a1,	// (0x0003a67c) popup_preview_text_window_t2

0xa3ea,	// (0x0003a6c5) popup_preview_text_window_t3_ParamLimits

0xa3ea,	// (0x0003a6c5) popup_preview_text_window_t3

0xa42f,	// (0x0003a70a) popup_preview_text_window_t4_ParamLimits

0xa42f,	// (0x0003a70a) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0003fbde) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0003fbde) popup_preview_text_window_t

0xa4ad,	// (0x0003a788) scroll_pane_cp11

0x945f,	// (0x0003973a) bg_popup_preview_window_pane_g1

0xa337,	// (0x0003a612) bg_popup_preview_window_pane_g2

0xa341,	// (0x0003a61c) bg_popup_preview_window_pane_g3

0xa34b,	// (0x0003a626) bg_popup_preview_window_pane_g4

0xa355,	// (0x0003a630) bg_popup_preview_window_pane_g5

0xa35f,	// (0x0003a63a) bg_popup_preview_window_pane_g6

0xa367,	// (0x0003a642) bg_popup_preview_window_pane_g7

0xa36f,	// (0x0003a64a) bg_popup_preview_window_pane_g8

0x5700,	// (0x000359db) aid_popup_width_pane

0x8cc1,	// (0x00038f9c) popup_midp_note_alarm_window_ParamLimits

0x8cc1,	// (0x00038f9c) popup_midp_note_alarm_window

0x2821,	// (0x00032afc) data_form_pane_ParamLimits

0x6316,	// (0x000365f1) form_field_data_pane_g1

0x6320,	// (0x000365fb) form_field_data_pane_t1_ParamLimits

0x282d,	// (0x00032b08) input_focus_pane_ParamLimits

0x4319,	// (0x000345f4) data_form_wide_pane_ParamLimits

0x432a,	// (0x00034605) form_field_data_wide_pane_g1

0x4336,	// (0x00034611) form_field_data_wide_pane_t1_ParamLimits

0x25a8,	// (0x00032883) input_focus_pane_cp6_ParamLimits

0x6466,	// (0x00036741) input_popup_find_pane_g1_ParamLimits

0x6466,	// (0x00036741) input_popup_find_pane_g1

0x65bf,	// (0x0003689a) aid_navi_side_left_pane

0x65d4,	// (0x000368af) aid_navi_side_right_pane

0x9d4c,	// (0x0003a027) bg_popup_window_pane_cp30_ParamLimits

0x9d4c,	// (0x0003a027) bg_popup_window_pane_cp30

0x9dc6,	// (0x0003a0a1) popup_midp_note_alarm_window_g1_ParamLimits

0x9dc6,	// (0x0003a0a1) popup_midp_note_alarm_window_g1

0x9df6,	// (0x0003a0d1) popup_midp_note_alarm_window_t1_ParamLimits

0x9df6,	// (0x0003a0d1) popup_midp_note_alarm_window_t1

0x9e97,	// (0x0003a172) popup_midp_note_alarm_window_t2_ParamLimits

0x9e97,	// (0x0003a172) popup_midp_note_alarm_window_t2

0x9f45,	// (0x0003a220) popup_midp_note_alarm_window_t3_ParamLimits

0x9f45,	// (0x0003a220) popup_midp_note_alarm_window_t3

0x9f77,	// (0x0003a252) popup_midp_note_alarm_window_t4_ParamLimits

0x9f77,	// (0x0003a252) popup_midp_note_alarm_window_t4

0x9f9d,	// (0x0003a278) popup_midp_note_alarm_window_t5_ParamLimits

0x9f9d,	// (0x0003a278) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0003fb7b) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0003fb7b) popup_midp_note_alarm_window_t

0xa049,	// (0x0003a324) wait_bar_pane_cp1_ParamLimits

0xa049,	// (0x0003a324) wait_bar_pane_cp1

0xf47f,	// (0x0003f75a) wait_anim_pane_copy1

0xf47f,	// (0x0003f75a) wait_border_pane_copy1

0x9a31,	// (0x00039d0c) wait_border_pane_g1_copy1

0x4350,	// (0x0003462b) form_field_popup_pane_g1

0x633a,	// (0x00036615) form_field_popup_pane_t1_ParamLimits

0x282d,	// (0x00032b08) input_focus_pane_cp7_ParamLimits

0x285b,	// (0x00032b36) list_form_pane_ParamLimits

0x4358,	// (0x00034633) form_field_popup_wide_pane_g1

0x4360,	// (0x0003463b) form_field_popup_wide_pane_t1_ParamLimits

0x282d,	// (0x00032b08) input_focus_pane_cp8_ParamLimits

0x2867,	// (0x00032b42) list_form_wide_pane_ParamLimits

0xab79,	// (0x0003ae54) aid_size_cell_graphic_pane

0x63b9,	// (0x00036694) data_form_pane_t1_ParamLimits

0x751d,	// (0x000377f8) data_form_wide_pane_t1_ParamLimits

0x900c,	// (0x000392e7) bg_status_flat_pane

0x5b1b,	// (0x00035df6) title_pane_t1_ParamLimits

0xf4a1,	// (0x0003f77c) title_pane_t2_ParamLimits

0xf4c7,	// (0x0003f7a2) title_pane_t3_ParamLimits

0xf55d,	// (0x0003f838) title_pane_t_ParamLimits

0x670c,	// (0x000369e7) level_1_signal_ParamLimits

0x6719,	// (0x000369f4) level_2_signal_ParamLimits

0x6726,	// (0x00036a01) level_3_signal_ParamLimits

0x6733,	// (0x00036a0e) level_4_signal_ParamLimits

0x6740,	// (0x00036a1b) level_5_signal_ParamLimits

0x674d,	// (0x00036a28) level_6_signal_ParamLimits

0x675a,	// (0x00036a35) level_7_signal_ParamLimits

0x670c,	// (0x000369e7) level_1_battery_ParamLimits

0x6719,	// (0x000369f4) level_2_battery_ParamLimits

0x6726,	// (0x00036a01) level_3_battery_ParamLimits

0x6733,	// (0x00036a0e) level_4_battery_ParamLimits

0x6740,	// (0x00036a1b) level_5_battery_ParamLimits

0x674d,	// (0x00036a28) level_6_battery_ParamLimits

0x675a,	// (0x00036a35) level_7_battery_ParamLimits

0x9c51,	// (0x00039f2c) bg_status_flat_pane_g1

0x9c59,	// (0x00039f34) bg_status_flat_pane_g2

0x9c61,	// (0x00039f3c) bg_status_flat_pane_g3

0x9c69,	// (0x00039f44) bg_status_flat_pane_g4

0x9c71,	// (0x00039f4c) bg_status_flat_pane_g5

0x9c79,	// (0x00039f54) bg_status_flat_pane_g6

0x9c81,	// (0x00039f5c) bg_status_flat_pane_g7

0x5b8b,	// (0x00035e66) tabs_3_active_pane_t1_ParamLimits

0x5b8b,	// (0x00035e66) tabs_3_passive_pane_t1_ParamLimits

0x5ba5,	// (0x00035e80) tabs_4_active_pane_t1_ParamLimits

0x5ba5,	// (0x00035e80) tabs_4_1_passive_pane_t1_ParamLimits

0x647c,	// (0x00036757) tabs_2_active_pane_t1_ParamLimits

0x647c,	// (0x00036757) tabs_2_passive_pane_t1_ParamLimits

0x2edf,	// (0x000331ba) bg_active_tab_pane_cp4_ParamLimits

0x648e,	// (0x00036769) tabs_2_long_active_pane_t1_ParamLimits

0x64a1,	// (0x0003677c) bg_passive_tab_pane_cp4_ParamLimits

0x71d1,	// (0x000374ac) list_single_midp_graphic_pane_t1_ParamLimits

0x2edf,	// (0x000331ba) bg_active_tab_pane_cp5_ParamLimits

0x64ad,	// (0x00036788) tabs_3_long_active_pane_t1_ParamLimits

0x64a1,	// (0x0003677c) bg_passive_tab_pane_cp5_ParamLimits

0x71d1,	// (0x000374ac) list_single_midp_graphic_pane_t1

0x900c,	// (0x000392e7) bg_status_flat_pane_ParamLimits

0x90d7,	// (0x000393b2) indicator_pane_cp2_ParamLimits

0x90d7,	// (0x000393b2) indicator_pane_cp2

0x921a,	// (0x000394f5) navi_pane_srt_ParamLimits

0x921a,	// (0x000394f5) navi_pane_srt

0x923e,	// (0x00039519) popup_clock_digital_analogue_window_cp1

0xf51d,	// (0x0003f7f8) indicator_pane_t1

0x6e65,	// (0x00037140) copy_highlight_pane

0x6e65,	// (0x00037140) cursor_graphics_pane

0x6e65,	// (0x00037140) graphic_within_text_pane

0x6e65,	// (0x00037140) link_highlight_pane

0xa470,	// (0x0003a74b) popup_preview_text_window_t5_ParamLimits

0xa470,	// (0x0003a74b) popup_preview_text_window_t5

0x86c0,	// (0x0003899b) cursor_digital_pane

0x86c0,	// (0x0003899b) cursor_primary_pane

0x86d1,	// (0x000389ac) cursor_primary_small_pane

0x86d9,	// (0x000389b4) cursor_secondary_pane

0x86e1,	// (0x000389bc) cursor_title_pane

0x86c0,	// (0x0003899b) link_highlight_digital_pane

0x86c8,	// (0x000389a3) link_highlight_primary_pane

0x86d1,	// (0x000389ac) link_highlight_primary_small_pane

0x86d9,	// (0x000389b4) link_highlight_secondary_pane

0x86e1,	// (0x000389bc) link_highlight_title_pane

0x86c0,	// (0x0003899b) copy_highlight_digital_pane

0x86c0,	// (0x0003899b) copy_highlight_primary_pane

0x86d1,	// (0x000389ac) copy_highlight_primary_small_pane

0x86d9,	// (0x000389b4) copy_highlight_secondary_pane

0x86e1,	// (0x000389bc) copy_highlight_title_pane

0x86d9,	// (0x000389b4) graphic_text_digital_pane

0x9cef,	// (0x00039fca) graphic_text_primary_pane

0x9cf8,	// (0x00039fd3) graphic_text_primary_small_pane

0x86d1,	// (0x000389ac) graphic_text_secondary_pane

0x86c0,	// (0x0003899b) graphic_text_title_pane

0x86e9,	// (0x000389c4) cursor_primary_pane_g1

0x9ce1,	// (0x00039fbc) cursor_text_primary_t1

0x9cc9,	// (0x00039fa4) cursor_primary_small_pane_g1

0x9cd3,	// (0x00039fae) cursor_text_primary_small_t1

0x9cb1,	// (0x00039f8c) cursor_primary_small_pane_g1_copy1

0x9cbb,	// (0x00039f96) cursor_text_primary_small_t1_copy1

0x9c99,	// (0x00039f74) cursor_text_title_t1

0x9ca7,	// (0x00039f82) cursor_title_pane_g1

0x86e9,	// (0x000389c4) cursor_digital_pane_g1

0x86f3,	// (0x000389ce) cursor_text_digital_t1

0x8701,	// (0x000389dc) link_highlight_primary_pane_g1

0x9c42,	// (0x00039f1d) link_highlight_primary_pane_t1

0x8701,	// (0x000389dc) link_highlight_primary_small_pane_g1

0x8709,	// (0x000389e4) link_highlight_primary_small_pane_t1

0x8718,	// (0x000389f3) link_highlight_secondary_pane_g1

0x8720,	// (0x000389fb) link_highlight_secondary_pane_t1

0x9bb6,	// (0x00039e91) link_highlight_title_pane_g1

0x9bbe,	// (0x00039e99) link_highlight_title_pane_t1

0x9b9f,	// (0x00039e7a) link_highlight_digital_pane_g1

0x9ba7,	// (0x00039e82) link_highlight_digital_pane_t1

0x9a67,	// (0x00039d42) copy_highlight_primary_pane_g1

0x9a7e,	// (0x00039d59) copy_highlight_primary_pane_t1

0x9a67,	// (0x00039d42) copy_highlight_primary_small_pane_g1

0x9a6f,	// (0x00039d4a) copy_highlight_primary_small_pane_t1

0x872f,	// (0x00038a0a) copy_highlight_secondary_pane_g1

0x8737,	// (0x00038a12) copy_highlight_secondary_pane_t1

0x9a50,	// (0x00039d2b) copy_highlight_title_pane_g1

0x9a58,	// (0x00039d33) copy_highlight_title_pane_t1

0x9a67,	// (0x00039d42) copy_highlight_digital_pane_g1

0xad49,	// (0x0003b024) copy_highlight_digital_pane_t1

0xac9d,	// (0x0003af78) graphic_text_primary_pane_g1

0xad2d,	// (0x0003b008) graphic_text_primary_pane_t1

0xad3b,	// (0x0003b016) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0003fcaa) graphic_text_primary_pane_t

0xad09,	// (0x0003afe4) graphic_text_primary_small_pane_g1

0xad11,	// (0x0003afec) graphic_text_primary_small_pane_t1

0xad1f,	// (0x0003affa) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0003fca5) graphic_text_primary_small_pane_t

0xace5,	// (0x0003afc0) graphic_text_secondary_pane_g1

0xaced,	// (0x0003afc8) graphic_text_secondary_pane_t1

0xacfb,	// (0x0003afd6) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0003fca0) graphic_text_secondary_pane_t

0xacc1,	// (0x0003af9c) graphic_text_title_pane_g1

0xacc9,	// (0x0003afa4) graphic_text_title_pane_t1

0xacd7,	// (0x0003afb2) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0003fc9b) graphic_text_title_pane_t

0xac9d,	// (0x0003af78) graphic_text_digital_pane_g1

0xaca5,	// (0x0003af80) graphic_text_digital_pane_t1

0xacb3,	// (0x0003af8e) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0003fc96) graphic_text_digital_pane_t

0xf4d9,	// (0x0003f7b4) navi_icon_pane_srt_ParamLimits

0xf4d9,	// (0x0003f7b4) navi_icon_pane_srt

0xf47f,	// (0x0003f75a) navi_midp_pane_srt

0xf47f,	// (0x0003f75a) navi_navi_pane_srt

0xf4d9,	// (0x0003f7b4) navi_text_pane_srt_ParamLimits

0xf4d9,	// (0x0003f7b4) navi_text_pane_srt

0xac68,	// (0x0003af43) navi_navi_icon_text_pane_srt

0xac70,	// (0x0003af4b) navi_navi_pane_srt_g1_ParamLimits

0xac70,	// (0x0003af4b) navi_navi_pane_srt_g1

0xac82,	// (0x0003af5d) navi_navi_pane_srt_g2_ParamLimits

0xac82,	// (0x0003af5d) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0003fc91) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0003fc91) navi_navi_pane_srt_g

0xac94,	// (0x0003af6f) navi_navi_tabs_pane_srt

0xac68,	// (0x0003af43) navi_navi_text_pane_srt

0xac68,	// (0x0003af43) navi_navi_volume_pane_srt

0xac59,	// (0x0003af34) navi_navi_text_pane_srt_t1

0x7641,	// (0x0003791c) navi_navi_volume_pane_srt_g1

0x7649,	// (0x00037924) volume_small_pane_srt_ParamLimits

0x7649,	// (0x00037924) volume_small_pane_srt

0x6f4e,	// (0x00037229) volume_small_pane_srt_g1_ParamLimits

0x6f4e,	// (0x00037229) volume_small_pane_srt_g1

0x6f5e,	// (0x00037239) volume_small_pane_srt_g2_ParamLimits

0x6f5e,	// (0x00037239) volume_small_pane_srt_g2

0x6f6f,	// (0x0003724a) volume_small_pane_srt_g3_ParamLimits

0x6f6f,	// (0x0003724a) volume_small_pane_srt_g3

0x6f80,	// (0x0003725b) volume_small_pane_srt_g4_ParamLimits

0x6f80,	// (0x0003725b) volume_small_pane_srt_g4

0x6f91,	// (0x0003726c) volume_small_pane_srt_g5_ParamLimits

0x6f91,	// (0x0003726c) volume_small_pane_srt_g5

0x6fa2,	// (0x0003727d) volume_small_pane_srt_g6_ParamLimits

0x6fa2,	// (0x0003727d) volume_small_pane_srt_g6

0x6fb3,	// (0x0003728e) volume_small_pane_srt_g7_ParamLimits

0x6fb3,	// (0x0003728e) volume_small_pane_srt_g7

0x6fc4,	// (0x0003729f) volume_small_pane_srt_g8_ParamLimits

0x6fc4,	// (0x0003729f) volume_small_pane_srt_g8

0x6fd5,	// (0x000372b0) volume_small_pane_srt_g9_ParamLimits

0x6fd5,	// (0x000372b0) volume_small_pane_srt_g9

0x6fe6,	// (0x000372c1) volume_small_pane_srt_g10_ParamLimits

0x6fe6,	// (0x000372c1) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0003fa39) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0003fa39) volume_small_pane_srt_g

0x24a8,	// (0x00032783) query_popup_data_pane_cp2

0xac3f,	// (0x0003af1a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xac3f,	// (0x0003af1a) navi_navi_icon_text_pane_srt_t1

0x9cef,	// (0x00039fca) navi_tabs_2_long_pane_srt

0x9cef,	// (0x00039fca) navi_tabs_2_pane_srt

0x9cef,	// (0x00039fca) navi_tabs_3_long_pane_srt

0x9cef,	// (0x00039fca) navi_tabs_3_pane_srt

0x9cef,	// (0x00039fca) navi_tabs_4_pane_srt

0x7621,	// (0x000378fc) tabs_2_active_pane_srt_ParamLimits

0x7621,	// (0x000378fc) tabs_2_active_pane_srt

0x7631,	// (0x0003790c) tabs_2_passive_pane_srt_ParamLimits

0x7631,	// (0x0003790c) tabs_2_passive_pane_srt

0x891e,	// (0x00038bf9) bg_passive_tab_pane_cp1_srt_ParamLimits

0x891e,	// (0x00038bf9) bg_passive_tab_pane_cp1_srt

0xac0b,	// (0x0003aee6) bg_passive_tab_pane_g1_cp1_srt

0x696a,	// (0x00036c45) bg_passive_tab_pane_g2_cp1_srt

0xac14,	// (0x0003aeef) bg_passive_tab_pane_g3_cp1_srt

0xf4d9,	// (0x0003f7b4) bg_active_tab_pane_cp1_srt_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_active_tab_pane_cp1_srt

0xac1d,	// (0x0003aef8) tabs_2_active_pane_srt_g1

0xac25,	// (0x0003af00) tabs_2_active_pane_srt_t1_ParamLimits

0xac25,	// (0x0003af00) tabs_2_active_pane_srt_t1

0xac0b,	// (0x0003aee6) bg_active_tab_pane_g1_cp1_srt

0x696a,	// (0x00036c45) bg_active_tab_pane_g2_cp1_srt

0xac14,	// (0x0003aeef) bg_active_tab_pane_g3_cp1_srt

0x75ee,	// (0x000378c9) tabs_3_active_pane_srt_ParamLimits

0x75ee,	// (0x000378c9) tabs_3_active_pane_srt

0x75ff,	// (0x000378da) tabs_3_passive_pane_cp_srt_ParamLimits

0x75ff,	// (0x000378da) tabs_3_passive_pane_cp_srt

0x7610,	// (0x000378eb) tabs_3_passive_pane_srt_ParamLimits

0x7610,	// (0x000378eb) tabs_3_passive_pane_srt

0x891e,	// (0x00038bf9) bg_passive_tab_pane_cp2_srt_ParamLimits

0x891e,	// (0x00038bf9) bg_passive_tab_pane_cp2_srt

0x8746,	// (0x00038a21) bg_passive_tab_pane_g1_cp2_srt

0x696a,	// (0x00036c45) bg_passive_tab_pane_g2_cp2_srt

0x874f,	// (0x00038a2a) bg_passive_tab_pane_g3_cp2_srt

0xf4d9,	// (0x0003f7b4) bg_active_tab_pane_cp2_srt_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_active_tab_pane_cp2_srt

0xabf1,	// (0x0003aecc) tabs_3_active_pane_srt_g1

0xabf9,	// (0x0003aed4) tabs_3_active_pane_srt_t1_ParamLimits

0xabf9,	// (0x0003aed4) tabs_3_active_pane_srt_t1

0x8746,	// (0x00038a21) bg_active_tab_pane_g1_cp2_srt

0x696a,	// (0x00036c45) bg_active_tab_pane_g2_cp2_srt

0x874f,	// (0x00038a2a) bg_active_tab_pane_g3_cp2_srt

0x75a6,	// (0x00037881) tabs_4_active_pane_srt_ParamLimits

0x75a6,	// (0x00037881) tabs_4_active_pane_srt

0x75b8,	// (0x00037893) tabs_4_passive_pane_cp2_srt_ParamLimits

0x75b8,	// (0x00037893) tabs_4_passive_pane_cp2_srt

0x88a4,	// (0x00038b7f) aid_size_cell_toolbar

0x64a1,	// (0x0003677c) main_idle_act_pane_ParamLimits

0x8ae7,	// (0x00038dc2) popup_large_graphic_colour_window_ParamLimits

0x8e8e,	// (0x00039169) popup_toolbar_window_ParamLimits

0x8e8e,	// (0x00039169) popup_toolbar_window

0x451f,	// (0x000347fa) list_single_graphic_2heading_pane_ParamLimits

0x451f,	// (0x000347fa) list_single_graphic_2heading_pane

0x2b31,	// (0x00032e0c) aid_size_cell_apps_grid_lsc_pane

0x2b43,	// (0x00032e1e) aid_size_cell_apps_grid_prt_pane

0x891e,	// (0x00038bf9) bg_wml_button_pane_cp1_ParamLimits

0x891e,	// (0x00038bf9) bg_wml_button_pane_cp1

0x96e7,	// (0x000399c2) form_midp_field_text_pane_t1_ParamLimits

0x94d3,	// (0x000397ae) input_focus_pane_cp050_ParamLimits

0x9712,	// (0x000399ed) list_midp_form_text_pane_ParamLimits

0x96c4,	// (0x0003999f) input_focus_pane_cp051_ParamLimits

0x96d8,	// (0x000399b3) list_midp_choice_pane_ParamLimits

0x958c,	// (0x00039867) list_single_2graphic_pane_cp3_ParamLimits

0x958c,	// (0x00039867) list_single_2graphic_pane_cp3

0x95a5,	// (0x00039880) list_single_midp_graphic_pane_ParamLimits

0x95a5,	// (0x00039880) list_single_midp_graphic_pane

0x566c,	// (0x00035947) list_single_graphic_2heading_pane_g1_ParamLimits

0x566c,	// (0x00035947) list_single_graphic_2heading_pane_g1

0x5678,	// (0x00035953) list_single_graphic_2heading_pane_g4_ParamLimits

0x5678,	// (0x00035953) list_single_graphic_2heading_pane_g4

0x5684,	// (0x0003595f) list_single_graphic_2heading_pane_g5_ParamLimits

0x5684,	// (0x0003595f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0003fa8c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0003fa8c) list_single_graphic_2heading_pane_g

0x5690,	// (0x0003596b) list_single_graphic_2heading_pane_t1_ParamLimits

0x5690,	// (0x0003596b) list_single_graphic_2heading_pane_t1

0x56a4,	// (0x0003597f) list_single_graphic_2heading_pane_t2_ParamLimits

0x56a4,	// (0x0003597f) list_single_graphic_2heading_pane_t2

0x56c0,	// (0x0003599b) list_single_graphic_2heading_pane_t3_ParamLimits

0x56c0,	// (0x0003599b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0003fa93) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0003fa93) list_single_graphic_2heading_pane_t

0x939d,	// (0x00039678) bg_popup_sub_pane_cp2

0x93c7,	// (0x000396a2) grid_toobar_pane

0x7141,	// (0x0003741c) cell_toolbar_pane_ParamLimits

0x7141,	// (0x0003741c) cell_toolbar_pane

0x9403,	// (0x000396de) cell_toolbar_pane_g1_ParamLimits

0x9403,	// (0x000396de) cell_toolbar_pane_g1

0x9417,	// (0x000396f2) cell_toolbar_pane_g2_ParamLimits

0x9417,	// (0x000396f2) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0003faa1) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0003faa1) cell_toolbar_pane_g

0x9439,	// (0x00039714) grid_highlight_pane_cp2_ParamLimits

0x9439,	// (0x00039714) grid_highlight_pane_cp2

0x9453,	// (0x0003972e) toolbar_button_pane

0x945f,	// (0x0003973a) toolbar_button_pane_g1

0x9467,	// (0x00039742) toolbar_button_pane_g2

0x946f,	// (0x0003974a) toolbar_button_pane_g3

0x9477,	// (0x00039752) toolbar_button_pane_g4

0x947f,	// (0x0003975a) toolbar_button_pane_g5

0x9487,	// (0x00039762) toolbar_button_pane_g6

0x948f,	// (0x0003976a) toolbar_button_pane_g7

0x9497,	// (0x00039772) toolbar_button_pane_g8

0x949f,	// (0x0003977a) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0003faa6) toolbar_button_pane_g

0x7179,	// (0x00037454) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7179,	// (0x00037454) list_single_2graphic_pane_g1_cp3

0x7185,	// (0x00037460) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7185,	// (0x00037460) list_single_2graphic_pane_g2_cp3

0x7196,	// (0x00037471) list_single_2graphic_pane_g3_cp3

0x719e,	// (0x00037479) list_single_2graphic_pane_g4_cp3_ParamLimits

0x719e,	// (0x00037479) list_single_2graphic_pane_g4_cp3

0x71aa,	// (0x00037485) list_single_2graphic_pane_t1_cp3_ParamLimits

0x71aa,	// (0x00037485) list_single_2graphic_pane_t1_cp3

0x71c5,	// (0x000374a0) list_single_midp_graphic_pane_g2_ParamLimits

0x71c5,	// (0x000374a0) list_single_midp_graphic_pane_g2

0x88ac,	// (0x00038b87) aid_zoom_text_primary

0x43b6,	// (0x00034691) aid_zoom_text_secondary

0x8803,	// (0x00038ade) status_small_pane_g7_ParamLimits

0x8803,	// (0x00038ade) status_small_pane_g7

0x8826,	// (0x00038b01) status_small_pane_t1_ParamLimits

0x5b0a,	// (0x00035de5) title_pane_g2

0x0003,

0xf554,	// (0x0003f82f) title_pane_g

0x5d5f,	// (0x0003603a) aid_size_cell_colour_1_pane_ParamLimits

0x5d5f,	// (0x0003603a) aid_size_cell_colour_1_pane

0x5d73,	// (0x0003604e) aid_size_cell_colour_2_pane_ParamLimits

0x5d73,	// (0x0003604e) aid_size_cell_colour_2_pane

0x5d87,	// (0x00036062) aid_size_cell_colour_3_pane_ParamLimits

0x5d87,	// (0x00036062) aid_size_cell_colour_3_pane

0x5d9b,	// (0x00036076) aid_size_cell_colour_4_pane_ParamLimits

0x5d9b,	// (0x00036076) aid_size_cell_colour_4_pane

0x64fb,	// (0x000367d6) title_pane_stacon_g1_ParamLimits

0x64fb,	// (0x000367d6) title_pane_stacon_g1

0x9ad5,	// (0x00039db0) popup_note_wait_window_g3_ParamLimits

0x9ad5,	// (0x00039db0) popup_note_wait_window_g3

0x9b4c,	// (0x00039e27) popup_note_wait_window_t5_ParamLimits

0x9b4c,	// (0x00039e27) popup_note_wait_window_t5

0xf47f,	// (0x0003f75a) main_feb_china_hwr_fs_writing_pane

0x89ae,	// (0x00038c89) popup_feb_china_hwr_fs_window_ParamLimits

0x89ae,	// (0x00038c89) popup_feb_china_hwr_fs_window

0x71e7,	// (0x000374c2) aid_size_cell_hwr_fs_ParamLimits

0x71e7,	// (0x000374c2) aid_size_cell_hwr_fs

0x94d3,	// (0x000397ae) bg_popup_sub_pane_cp3_ParamLimits

0x94d3,	// (0x000397ae) bg_popup_sub_pane_cp3

0x71fc,	// (0x000374d7) grid_hwr_fs_pane_ParamLimits

0x71fc,	// (0x000374d7) grid_hwr_fs_pane

0x7214,	// (0x000374ef) linegrid_hwr_fs_pane_ParamLimits

0x7214,	// (0x000374ef) linegrid_hwr_fs_pane

0x7224,	// (0x000374ff) cell_hwr_fs_pane_ParamLimits

0x7224,	// (0x000374ff) cell_hwr_fs_pane

0x94df,	// (0x000397ba) linegrid_hwr_fs_pane_g1_ParamLimits

0x94df,	// (0x000397ba) linegrid_hwr_fs_pane_g1

0x94eb,	// (0x000397c6) linegrid_hwr_fs_pane_g2_ParamLimits

0x94eb,	// (0x000397c6) linegrid_hwr_fs_pane_g2

0x94fd,	// (0x000397d8) linegrid_hwr_fs_pane_g3_ParamLimits

0x94fd,	// (0x000397d8) linegrid_hwr_fs_pane_g3

0x7248,	// (0x00037523) linegrid_hwr_fs_pane_g4_ParamLimits

0x7248,	// (0x00037523) linegrid_hwr_fs_pane_g4

0x7266,	// (0x00037541) linegrid_hwr_fs_pane_g5_ParamLimits

0x7266,	// (0x00037541) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0003fad1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0003fad1) linegrid_hwr_fs_pane_g

0x9509,	// (0x000397e4) cell_hwr_fs_pane_g1_ParamLimits

0x9509,	// (0x000397e4) cell_hwr_fs_pane_g1

0x92d4,	// (0x000395af) cell_hwr_fs_pane_g2_ParamLimits

0x92d4,	// (0x000395af) cell_hwr_fs_pane_g2

0x951f,	// (0x000397fa) cell_hwr_fs_pane_g3_ParamLimits

0x951f,	// (0x000397fa) cell_hwr_fs_pane_g3

0x952c,	// (0x00039807) cell_hwr_fs_pane_g4_ParamLimits

0x952c,	// (0x00039807) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0003fadc) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0003fadc) cell_hwr_fs_pane_g

0x727c,	// (0x00037557) cell_hwr_fs_pane_t1

0xf47f,	// (0x0003f75a) grid_highlight_pane_cp6

0xf47f,	// (0x0003f75a) main_idle_act2_pane

0x2940,	// (0x00032c1b) aid_inside_area_popup_secondary

0xa185,	// (0x0003a460) aid_inside_area_window_primary_ParamLimits

0xa185,	// (0x0003a460) aid_inside_area_window_primary

0xad58,	// (0x0003b033) ai2_news_ticker_pane

0xad60,	// (0x0003b03b) aid_size_cell_ai1_link_ParamLimits

0xad60,	// (0x0003b03b) aid_size_cell_ai1_link

0xad7a,	// (0x0003b055) popup_ai2_data_window_ParamLimits

0xad7a,	// (0x0003b055) popup_ai2_data_window

0xad98,	// (0x0003b073) popup_ai2_link_window_ParamLimits

0xad98,	// (0x0003b073) popup_ai2_link_window

0x94d3,	// (0x000397ae) bg_popup_sub_pane_cp4_ParamLimits

0x94d3,	// (0x000397ae) bg_popup_sub_pane_cp4

0xadae,	// (0x0003b089) grid_ai2_link_pane_ParamLimits

0xadae,	// (0x0003b089) grid_ai2_link_pane

0xadc5,	// (0x0003b0a0) popup_ai2_link_window_g1_ParamLimits

0xadc5,	// (0x0003b0a0) popup_ai2_link_window_g1

0xadd1,	// (0x0003b0ac) popup_ai2_link_window_g2_ParamLimits

0xadd1,	// (0x0003b0ac) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0003fcaf) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0003fcaf) popup_ai2_link_window_g

0xade2,	// (0x0003b0bd) ai2_mp_button_pane

0xadea,	// (0x0003b0c5) ai2_mp_volume_pane

0x96c4,	// (0x0003999f) bg_popup_sub_pane_cp5_ParamLimits

0x96c4,	// (0x0003999f) bg_popup_sub_pane_cp5

0xadf2,	// (0x0003b0cd) heading_ai2_gene_pane_ParamLimits

0xadf2,	// (0x0003b0cd) heading_ai2_gene_pane

0xadfe,	// (0x0003b0d9) list_ai2_gene_pane_ParamLimits

0xadfe,	// (0x0003b0d9) list_ai2_gene_pane

0xae46,	// (0x0003b121) cell_ai2_link_pane_ParamLimits

0xae46,	// (0x0003b121) cell_ai2_link_pane

0xae5c,	// (0x0003b137) cell_ai2_link_pane_g1

0xf47f,	// (0x0003f75a) grid_highlight_pane_cp7

0x765e,	// (0x00037939) ai2_mp_volume_pane_g1

0xaf2f,	// (0x0003b20a) ai2_mp_volume_pane_g2

0xaea4,	// (0x0003b17f) list_ai2_gene_pane_t1

0xaf37,	// (0x0003b212) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0003fcc8) ai2_mp_volume_pane_g

0x7666,	// (0x00037941) volume_small_pane_cp3

0xaf3f,	// (0x0003b21a) aid_size_cell_ai2_button

0xaf47,	// (0x0003b222) grid_ai2_button_pane

0xaf50,	// (0x0003b22b) cell_ai2_button_pane_ParamLimits

0xaf50,	// (0x0003b22b) cell_ai2_button_pane

0xf475,	// (0x0003f750) cell_ai2_button_pane_g1

0xf47f,	// (0x0003f75a) grid_highlight_pane_cp8

0xaeef,	// (0x0003b1ca) ai2_gene_pane_t1_ParamLimits

0xaeef,	// (0x0003b1ca) ai2_gene_pane_t1

0x889a,	// (0x00038b75) aid_height_parent_landscape

0xa818,	// (0x0003aaf3) aid_height_set_list

0xa829,	// (0x0003ab04) aid_size_parent

0xab79,	// (0x0003ae54) aid_size_cell_graphic_pane_ParamLimits

0xae0e,	// (0x0003b0e9) popup_ai2_data_window_g1_ParamLimits

0xae0e,	// (0x0003b0e9) popup_ai2_data_window_g1

0xae1a,	// (0x0003b0f5) ai2_news_ticker_pane_g1

0xae22,	// (0x0003b0fd) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0003fcb4) ai2_news_ticker_pane_g

0xae2a,	// (0x0003b105) ai2_news_ticker_pane_t1

0xae38,	// (0x0003b113) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0003fcb9) ai2_news_ticker_pane_t

0xae65,	// (0x0003b140) heading_ai2_gene_pane_g1

0xae6d,	// (0x0003b148) heading_ai2_gene_pane_t1_ParamLimits

0xae6d,	// (0x0003b148) heading_ai2_gene_pane_t1

0xae82,	// (0x0003b15d) list_highlight_pane_cp6

0xae8a,	// (0x0003b165) ai2_gene_pane_ParamLimits

0xae8a,	// (0x0003b165) ai2_gene_pane

0xaeb2,	// (0x0003b18d) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0003fcbe) list_ai2_gene_pane_t

0xaec0,	// (0x0003b19b) list_highlight_pane_cp8_ParamLimits

0xaec0,	// (0x0003b19b) list_highlight_pane_cp8

0xaed1,	// (0x0003b1ac) ai2_gene_pane_g1_ParamLimits

0xaed1,	// (0x0003b1ac) ai2_gene_pane_g1

0xaee3,	// (0x0003b1be) ai2_gene_pane_g2_ParamLimits

0xaee3,	// (0x0003b1be) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0003fcc3) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0003fcc3) ai2_gene_pane_g

0x27c3,	// (0x00032a9e) scroll_pane_cp12

0x7100,	// (0x000373db) control_pane_t3_ParamLimits

0x7100,	// (0x000373db) control_pane_t3

0x8817,	// (0x00038af2) status_small_pane_g8_ParamLimits

0x8817,	// (0x00038af2) status_small_pane_g8

0x8aac,	// (0x00038d87) popup_find_window_ParamLimits

0x8cd7,	// (0x00038fb2) popup_note_image_window_ParamLimits

0x4258,	// (0x00034533) list_double2_graphic_pane_vc_g1_ParamLimits

0x4258,	// (0x00034533) list_double2_graphic_pane_vc_g1

0x441a,	// (0x000346f5) list_double2_graphic_pane_vc_g2_ParamLimits

0x441a,	// (0x000346f5) list_double2_graphic_pane_vc_g2

0x4426,	// (0x00034701) list_double2_graphic_pane_vc_g3_ParamLimits

0x4426,	// (0x00034701) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0003fa9a) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0003fa9a) list_double2_graphic_pane_vc_g

0x4432,	// (0x0003470d) list_double2_graphic_pane_vc_t1_ParamLimits

0x4432,	// (0x0003470d) list_double2_graphic_pane_vc_t1

0x422e,	// (0x00034509) list_single_heading_pane_vc_g1_ParamLimits

0x422e,	// (0x00034509) list_single_heading_pane_vc_g1

0x423a,	// (0x00034515) list_single_heading_pane_vc_g2_ParamLimits

0x423a,	// (0x00034515) list_single_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0003fabb) list_single_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0003fabb) list_single_heading_pane_vc_g

0x4448,	// (0x00034723) list_single_heading_pane_vc_t1_ParamLimits

0x4448,	// (0x00034723) list_single_heading_pane_vc_t1

0x4460,	// (0x0003473b) list_single_heading_pane_vc_t2_ParamLimits

0x4460,	// (0x0003473b) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0003fac0) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0003fac0) list_single_heading_pane_vc_t

0x4472,	// (0x0003474d) list_setting_number_pane_vc_g1_ParamLimits

0x4472,	// (0x0003474d) list_setting_number_pane_vc_g1

0x447e,	// (0x00034759) list_setting_number_pane_vc_g2_ParamLimits

0x447e,	// (0x00034759) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003fac5) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003fac5) list_setting_number_pane_vc_g

0x448a,	// (0x00034765) list_setting_number_pane_vc_t1_ParamLimits

0x448a,	// (0x00034765) list_setting_number_pane_vc_t1

0x449e,	// (0x00034779) list_setting_number_pane_vc_t2_ParamLimits

0x449e,	// (0x00034779) list_setting_number_pane_vc_t2

0x44ba,	// (0x00034795) list_setting_number_pane_vc_t3_ParamLimits

0x44ba,	// (0x00034795) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0003faca) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0003faca) list_setting_number_pane_vc_t

0x44e8,	// (0x000347c3) set_value_pane_vc_ParamLimits

0x44e8,	// (0x000347c3) set_value_pane_vc

0x451f,	// (0x000347fa) list_double2_graphic_pane_vc_ParamLimits

0x451f,	// (0x000347fa) list_double2_graphic_pane_vc

0xaa01,	// (0x0003acdc) list_double2_large_graphic_pane_vc_ParamLimits

0xaa01,	// (0x0003acdc) list_double2_large_graphic_pane_vc

0x451f,	// (0x000347fa) list_double2_pane_vc_ParamLimits

0x451f,	// (0x000347fa) list_double2_pane_vc

0x451f,	// (0x000347fa) list_double_graphic_heading_pane_vc_ParamLimits

0x451f,	// (0x000347fa) list_double_graphic_heading_pane_vc

0x451f,	// (0x000347fa) list_double_graphic_pane_vc_ParamLimits

0x451f,	// (0x000347fa) list_double_graphic_pane_vc

0x451f,	// (0x000347fa) list_double_heading_pane_vc_ParamLimits

0x451f,	// (0x000347fa) list_double_heading_pane_vc

0xaa01,	// (0x0003acdc) list_double_large_graphic_pane_vc_ParamLimits

0xaa01,	// (0x0003acdc) list_double_large_graphic_pane_vc

0x451f,	// (0x000347fa) list_double_number_pane_vc_ParamLimits

0x451f,	// (0x000347fa) list_double_number_pane_vc

0x451f,	// (0x000347fa) list_double_pane_vc_ParamLimits

0x451f,	// (0x000347fa) list_double_pane_vc

0x451f,	// (0x000347fa) list_double_time_pane_vc_ParamLimits

0x451f,	// (0x000347fa) list_double_time_pane_vc

0x451f,	// (0x000347fa) list_setting_number_pane_vc_ParamLimits

0x451f,	// (0x000347fa) list_setting_number_pane_vc

0x451f,	// (0x000347fa) list_setting_pane_vc_ParamLimits

0x451f,	// (0x000347fa) list_setting_pane_vc

0x451f,	// (0x000347fa) list_single_graphic_heading_pane_vc_ParamLimits

0x451f,	// (0x000347fa) list_single_graphic_heading_pane_vc

0x451f,	// (0x000347fa) list_single_heading_pane_vc_ParamLimits

0x451f,	// (0x000347fa) list_single_heading_pane_vc

0xaa15,	// (0x0003acf0) list_single_number_heading_pane_vc_ParamLimits

0xaa15,	// (0x0003acf0) list_single_number_heading_pane_vc

0x4258,	// (0x00034533) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4258,	// (0x00034533) list_double_graphic_heading_pane_vc_g1

0x422e,	// (0x00034509) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x422e,	// (0x00034509) list_double_graphic_heading_pane_vc_g2

0x423a,	// (0x00034515) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x423a,	// (0x00034515) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0003fccf) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0003fccf) list_double_graphic_heading_pane_vc_g

0x4534,	// (0x0003480f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4534,	// (0x0003480f) list_double_graphic_heading_pane_vc_t1

0x454a,	// (0x00034825) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x454a,	// (0x00034825) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0003fcd6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0003fcd6) list_double_graphic_heading_pane_vc_t

0x4472,	// (0x0003474d) list_setting_pane_vc_g1_ParamLimits

0x4472,	// (0x0003474d) list_setting_pane_vc_g1

0x447e,	// (0x00034759) list_setting_pane_vc_g2_ParamLimits

0x447e,	// (0x00034759) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003fac5) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003fac5) list_setting_pane_vc_g

0x4568,	// (0x00034843) list_setting_pane_vc_t1_ParamLimits

0x4568,	// (0x00034843) list_setting_pane_vc_t1

0x4584,	// (0x0003485f) list_setting_pane_vc_t2_ParamLimits

0x4584,	// (0x0003485f) list_setting_pane_vc_t2

0x0001,

0xfa29,	// (0x0003fd04) list_setting_pane_vc_t_ParamLimits

0xfa29,	// (0x0003fd04) list_setting_pane_vc_t

0x44e8,	// (0x000347c3) set_value_pane_cp_vc_ParamLimits

0x44e8,	// (0x000347c3) set_value_pane_cp_vc

0x422e,	// (0x00034509) list_single_number_heading_pane_vc_g1_ParamLimits

0x422e,	// (0x00034509) list_single_number_heading_pane_vc_g1

0x423a,	// (0x00034515) list_single_number_heading_pane_vc_g2_ParamLimits

0x423a,	// (0x00034515) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0003fabb) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0003fabb) list_single_number_heading_pane_vc_g

0x4448,	// (0x00034723) list_single_number_heading_pane_vc_t1_ParamLimits

0x4448,	// (0x00034723) list_single_number_heading_pane_vc_t1

0x45a0,	// (0x0003487b) list_single_number_heading_pane_vc_t2_ParamLimits

0x45a0,	// (0x0003487b) list_single_number_heading_pane_vc_t2

0x4246,	// (0x00034521) list_single_number_heading_pane_vc_t3_ParamLimits

0x4246,	// (0x00034521) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2e,	// (0x0003fd09) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003fd09) list_single_number_heading_pane_vc_t

0x4258,	// (0x00034533) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4258,	// (0x00034533) list_single_graphic_heading_pane_vc_g1

0x422e,	// (0x00034509) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x422e,	// (0x00034509) list_single_graphic_heading_pane_vc_g4

0x423a,	// (0x00034515) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x423a,	// (0x00034515) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9f4,	// (0x0003fccf) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0003fccf) list_single_graphic_heading_pane_vc_g

0x4448,	// (0x00034723) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4448,	// (0x00034723) list_single_graphic_heading_pane_vc_t1

0x45b2,	// (0x0003488d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x45b2,	// (0x0003488d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x0003fd10) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0003fd10) list_single_graphic_heading_pane_vc_t

0x422e,	// (0x00034509) list_double2_pane_vc_g1_ParamLimits

0x422e,	// (0x00034509) list_double2_pane_vc_g1

0x423a,	// (0x00034515) list_double2_pane_vc_g2_ParamLimits

0x423a,	// (0x00034515) list_double2_pane_vc_g2

0x0001,

0xf7e0,	// (0x0003fabb) list_double2_pane_vc_g_ParamLimits

0xf7e0,	// (0x0003fabb) list_double2_pane_vc_g

0x4509,	// (0x000347e4) list_double2_pane_vc_t1_ParamLimits

0x4509,	// (0x000347e4) list_double2_pane_vc_t1

0x4264,	// (0x0003453f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4264,	// (0x0003453f) list_double2_large_graphic_pane_vc_g1

0x4270,	// (0x0003454b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4270,	// (0x0003454b) list_double2_large_graphic_pane_vc_g2

0x427c,	// (0x00034557) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x427c,	// (0x00034557) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3a,	// (0x0003fd15) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0003fd15) list_double2_large_graphic_pane_vc_g

0x4288,	// (0x00034563) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4288,	// (0x00034563) list_double2_large_graphic_pane_vc_t1

0x45c4,	// (0x0003489f) list_double_time_pane_vc_g1_ParamLimits

0x45c4,	// (0x0003489f) list_double_time_pane_vc_g1

0x45d0,	// (0x000348ab) list_double_time_pane_vc_g2_ParamLimits

0x45d0,	// (0x000348ab) list_double_time_pane_vc_g2

0x0001,

0xfa41,	// (0x0003fd1c) list_double_time_pane_vc_g_ParamLimits

0xfa41,	// (0x0003fd1c) list_double_time_pane_vc_g

0x45dc,	// (0x000348b7) list_double_time_pane_vc_t1_ParamLimits

0x45dc,	// (0x000348b7) list_double_time_pane_vc_t1

0x4606,	// (0x000348e1) list_double_time_pane_vc_t2_ParamLimits

0x4606,	// (0x000348e1) list_double_time_pane_vc_t2

0x464f,	// (0x0003492a) list_double_time_pane_vc_t3_ParamLimits

0x464f,	// (0x0003492a) list_double_time_pane_vc_t3

0x4661,	// (0x0003493c) list_double_time_pane_vc_t4_ParamLimits

0x4661,	// (0x0003493c) list_double_time_pane_vc_t4

0x0003,

0xfa46,	// (0x0003fd21) list_double_time_pane_vc_t_ParamLimits

0xfa46,	// (0x0003fd21) list_double_time_pane_vc_t

0x422e,	// (0x00034509) list_double_pane_vc_g1_ParamLimits

0x422e,	// (0x00034509) list_double_pane_vc_g1

0x423a,	// (0x00034515) list_double_pane_vc_g2_ParamLimits

0x423a,	// (0x00034515) list_double_pane_vc_g2

0x0001,

0xf7e0,	// (0x0003fabb) list_double_pane_vc_g_ParamLimits

0xf7e0,	// (0x0003fabb) list_double_pane_vc_g

0x4686,	// (0x00034961) list_double_pane_vc_t1_ParamLimits

0x4686,	// (0x00034961) list_double_pane_vc_t1

0x469a,	// (0x00034975) list_double_pane_vc_t2_ParamLimits

0x469a,	// (0x00034975) list_double_pane_vc_t2

0x0001,

0xfa4f,	// (0x0003fd2a) list_double_pane_vc_t_ParamLimits

0xfa4f,	// (0x0003fd2a) list_double_pane_vc_t

0x422e,	// (0x00034509) list_double_number_pane_vc_g1_ParamLimits

0x422e,	// (0x00034509) list_double_number_pane_vc_g1

0x423a,	// (0x00034515) list_double_number_pane_vc_g2_ParamLimits

0x423a,	// (0x00034515) list_double_number_pane_vc_g2

0x0001,

0xf7e0,	// (0x0003fabb) list_double_number_pane_vc_g_ParamLimits

0xf7e0,	// (0x0003fabb) list_double_number_pane_vc_g

0x46b0,	// (0x0003498b) list_double_number_pane_vc_t1_ParamLimits

0x46b0,	// (0x0003498b) list_double_number_pane_vc_t1

0x46c4,	// (0x0003499f) list_double_number_pane_vc_t2_ParamLimits

0x46c4,	// (0x0003499f) list_double_number_pane_vc_t2

0x46d8,	// (0x000349b3) list_double_number_pane_vc_t3_ParamLimits

0x46d8,	// (0x000349b3) list_double_number_pane_vc_t3

0x0002,

0xfa54,	// (0x0003fd2f) list_double_number_pane_vc_t_ParamLimits

0xfa54,	// (0x0003fd2f) list_double_number_pane_vc_t

0x46ee,	// (0x000349c9) list_double_large_graphic_pane_vc_g1_ParamLimits

0x46ee,	// (0x000349c9) list_double_large_graphic_pane_vc_g1

0x46ff,	// (0x000349da) list_double_large_graphic_pane_vc_g2_ParamLimits

0x46ff,	// (0x000349da) list_double_large_graphic_pane_vc_g2

0x427c,	// (0x00034557) list_double_large_graphic_pane_vc_g3_ParamLimits

0x427c,	// (0x00034557) list_double_large_graphic_pane_vc_g3

0x470e,	// (0x000349e9) list_double_large_graphic_pane_vc_g4_ParamLimits

0x470e,	// (0x000349e9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5b,	// (0x0003fd36) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x0003fd36) list_double_large_graphic_pane_vc_g

0x471a,	// (0x000349f5) list_double_large_graphic_pane_vc_t1_ParamLimits

0x471a,	// (0x000349f5) list_double_large_graphic_pane_vc_t1

0x4733,	// (0x00034a0e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4733,	// (0x00034a0e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0003fd3f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0003fd3f) list_double_large_graphic_pane_vc_t

0x422e,	// (0x00034509) list_double_heading_pane_vc_g1_ParamLimits

0x422e,	// (0x00034509) list_double_heading_pane_vc_g1

0x423a,	// (0x00034515) list_double_heading_pane_vc_g2_ParamLimits

0x423a,	// (0x00034515) list_double_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0003fabb) list_double_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0003fabb) list_double_heading_pane_vc_g

0x474a,	// (0x00034a25) list_double_heading_pane_vc_t1_ParamLimits

0x474a,	// (0x00034a25) list_double_heading_pane_vc_t1

0x4448,	// (0x00034723) list_double_heading_pane_vc_t2_ParamLimits

0x4448,	// (0x00034723) list_double_heading_pane_vc_t2

0x0001,

0xfa69,	// (0x0003fd44) list_double_heading_pane_vc_t_ParamLimits

0xfa69,	// (0x0003fd44) list_double_heading_pane_vc_t

0x475c,	// (0x00034a37) list_double_graphic_pane_vc_g1_ParamLimits

0x475c,	// (0x00034a37) list_double_graphic_pane_vc_g1

0x476c,	// (0x00034a47) list_double_graphic_pane_vc_g2_ParamLimits

0x476c,	// (0x00034a47) list_double_graphic_pane_vc_g2

0x477b,	// (0x00034a56) list_double_graphic_pane_vc_g3_ParamLimits

0x477b,	// (0x00034a56) list_double_graphic_pane_vc_g3

0x0002,

0xfa6e,	// (0x0003fd49) list_double_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x0003fd49) list_double_graphic_pane_vc_g

0x4787,	// (0x00034a62) list_double_graphic_pane_vc_t1_ParamLimits

0x4787,	// (0x00034a62) list_double_graphic_pane_vc_t1

0x479b,	// (0x00034a76) list_double_graphic_pane_vc_t2_ParamLimits

0x479b,	// (0x00034a76) list_double_graphic_pane_vc_t2

0x0001,

0xfa75,	// (0x0003fd50) list_double_graphic_pane_vc_t_ParamLimits

0xfa75,	// (0x0003fd50) list_double_graphic_pane_vc_t

0x570c,	// (0x000359e7) aid_size_cell_fastswap

0x5714,	// (0x000359ef) aid_size_cell_touch_ParamLimits

0x5714,	// (0x000359ef) aid_size_cell_touch

0x597f,	// (0x00035c5a) popup_fast_swap_wide_window_ParamLimits

0x597f,	// (0x00035c5a) popup_fast_swap_wide_window

0x5a9d,	// (0x00035d78) touch_pane_ParamLimits

0x5a9d,	// (0x00035d78) touch_pane

0x2819,	// (0x00032af4) button_value_adjust_pane_cp2

0x42c1,	// (0x0003459c) button_value_adjust_pane_cp4

0x42c9,	// (0x000345a4) form_field_data_pane_cp2

0x62eb,	// (0x000365c6) form_field_data_wide_pane_cp2

0x2b7f,	// (0x00032e5a) bg_scroll_pane_ParamLimits

0x66e3,	// (0x000369be) scroll_handle_pane_ParamLimits

0x66f7,	// (0x000369d2) scroll_sc2_down_pane_ParamLimits

0x66f7,	// (0x000369d2) scroll_sc2_down_pane

0x2bb0,	// (0x00032e8b) scroll_sc2_up_pane_ParamLimits

0x2bb0,	// (0x00032e8b) scroll_sc2_up_pane

0xb66f,	// (0x0003b94a) grid_wheel_folder_pane_g1_ParamLimits

0xb66f,	// (0x0003b94a) grid_wheel_folder_pane_g1

0x6ab4,	// (0x00036d8f) clock_nsta_pane_cp2_ParamLimits

0x6ab4,	// (0x00036d8f) clock_nsta_pane_cp2

0x64a1,	// (0x0003677c) listscroll_midp_pane_ParamLimits

0x6e6d,	// (0x00037148) midp_canvas_pane

0x8892,	// (0x00038b6d) nsta_clock_indic_pane

0x88e8,	// (0x00038bc3) listscroll_form_pane_vc

0x890c,	// (0x00038be7) listscroll_set_pane_vc_ParamLimits

0x890c,	// (0x00038be7) listscroll_set_pane_vc

0x9028,	// (0x00039303) clock_nsta_pane

0x90a5,	// (0x00039380) indicator_nsta_pane

0x939d,	// (0x00039678) bg_popup_sub_pane_cp2_ParamLimits

0x93b1,	// (0x0003968c) find_pane_cp2_ParamLimits

0x93b1,	// (0x0003968c) find_pane_cp2

0x93c7,	// (0x000396a2) grid_toobar_pane_ParamLimits

0x94a7,	// (0x00039782) list_form_gen_pane_vc_ParamLimits

0x94a7,	// (0x00039782) list_form_gen_pane_vc

0x94bd,	// (0x00039798) scroll_pane_cp8_vc_ParamLimits

0x94bd,	// (0x00039798) scroll_pane_cp8_vc

0x9539,	// (0x00039814) data_form_wide_pane_vc_ParamLimits

0x9539,	// (0x00039814) data_form_wide_pane_vc

0x9545,	// (0x00039820) form_field_data_wide_pane_vc_g1

0x954d,	// (0x00039828) form_field_data_wide_pane_vc_t1_ParamLimits

0x954d,	// (0x00039828) form_field_data_wide_pane_vc_t1

0x282d,	// (0x00032b08) input_focus_pane_cp6_vc_ParamLimits

0x282d,	// (0x00032b08) input_focus_pane_cp6_vc

0x984f,	// (0x00039b2a) list_midp_pane_ParamLimits

0x985b,	// (0x00039b36) scroll_pane_cp16_ParamLimits

0x985b,	// (0x00039b36) scroll_pane_cp16

0x98a9,	// (0x00039b84) button_value_adjust_pane_ParamLimits

0x98a9,	// (0x00039b84) button_value_adjust_pane

0xa83b,	// (0x0003ab16) button_value_adjust_pane_cp6_ParamLimits

0xa83b,	// (0x0003ab16) button_value_adjust_pane_cp6

0xa989,	// (0x0003ac64) settings_code_pane_cp_ParamLimits

0xa989,	// (0x0003ac64) settings_code_pane_cp

0xf475,	// (0x0003f750) cell_touch_pane_g1

0xf475,	// (0x0003f750) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0003f9df) cell_touch_pane_g

0xaf62,	// (0x0003b23d) cell_touch_pane_cp_ParamLimits

0xaf62,	// (0x0003b23d) cell_touch_pane_cp

0xaf72,	// (0x0003b24d) cell_touch_pane_ParamLimits

0xaf72,	// (0x0003b24d) cell_touch_pane

0xf475,	// (0x0003f750) scroll_sc2_down_pane_g1

0xf475,	// (0x0003f750) scroll_sc2_up_pane_g1

0xf47f,	// (0x0003f75a) bg_set_opt_pane_cp4_vc

0xaf83,	// (0x0003b25e) list_set_graphic_pane_vc_g1_ParamLimits

0xaf83,	// (0x0003b25e) list_set_graphic_pane_vc_g1

0x2ed3,	// (0x000331ae) list_set_graphic_pane_vc_g2_ParamLimits

0x2ed3,	// (0x000331ae) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x0003fcdb) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x0003fcdb) list_set_graphic_pane_vc_g

0xaf8f,	// (0x0003b26a) text_primary_small_cp13_vc_ParamLimits

0xaf8f,	// (0x0003b26a) text_primary_small_cp13_vc

0xafa7,	// (0x0003b282) list_set_graphic_pane_vc_ParamLimits

0xafa7,	// (0x0003b282) list_set_graphic_pane_vc

0xf47f,	// (0x0003f75a) input_focus_pane_cp2_vc

0xf475,	// (0x0003f750) setting_code_pane_vc_g1

0xf4f0,	// (0x0003f7cb) setting_code_pane_vc_t1

0xafbc,	// (0x0003b297) set_text_pane_vc_t1_ParamLimits

0xafbc,	// (0x0003b297) set_text_pane_vc_t1

0xf47f,	// (0x0003f75a) input_focus_pane_cp1_vc

0xafda,	// (0x0003b2b5) list_set_text_pane_vc

0xf475,	// (0x0003f750) setting_text_pane_vc_g1

0xf47f,	// (0x0003f75a) bg_set_opt_pane_cp2_vc

0xf4e7,	// (0x0003f7c2) setting_slider_graphic_pane_vc_g1

0xafe4,	// (0x0003b2bf) setting_slider_graphic_pane_vc_t1

0xaff6,	// (0x0003b2d1) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0003fce0) setting_slider_graphic_pane_vc_t

0xb008,	// (0x0003b2e3) slider_set_pane_cp_vc

0xb012,	// (0x0003b2ed) slider_set_pane_vc_g1

0xb01b,	// (0x0003b2f6) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0003fce5) slider_set_pane_vc_g

0x2888,	// (0x00032b63) set_opt_bg_pane_g1_copy1

0x2890,	// (0x00032b6b) set_opt_bg_pane_g2_copy1

0xb047,	// (0x0003b322) set_opt_bg_pane_g3_copy1

0x28a0,	// (0x00032b7b) set_opt_bg_pane_g4_copy1

0x28a8,	// (0x00032b83) set_opt_bg_pane_g5_copy1

0x28b0,	// (0x00032b8b) set_opt_bg_pane_g6_copy1

0xb051,	// (0x0003b32c) set_opt_bg_pane_g7_copy1

0xb05b,	// (0x0003b336) set_opt_bg_pane_g8_copy1

0xb065,	// (0x0003b340) set_opt_bg_pane_g9_copy1

0xf47f,	// (0x0003f75a) bg_set_opt_pane_cp_vc

0xb06f,	// (0x0003b34a) setting_slider_pane_vc_t1

0xb07e,	// (0x0003b359) setting_slider_pane_vc_t2

0xb090,	// (0x0003b36b) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0003fcf4) setting_slider_pane_vc_t

0xb0a2,	// (0x0003b37d) slider_set_pane_vc

0x72ad,	// (0x00037588) volume_set_pane_vc_g1

0x72b6,	// (0x00037591) volume_set_pane_vc_g2

0x72bf,	// (0x0003759a) volume_set_pane_vc_g3

0x72c8,	// (0x000375a3) volume_set_pane_vc_g4

0x72d1,	// (0x000375ac) volume_set_pane_vc_g5

0x72da,	// (0x000375b5) volume_set_pane_vc_g6

0x72e3,	// (0x000375be) volume_set_pane_vc_g7

0x72ec,	// (0x000375c7) volume_set_pane_vc_g8

0x72f5,	// (0x000375d0) volume_set_pane_vc_g9

0x72fe,	// (0x000375d9) volume_set_pane_vc_g10

0x0009,

0xf8b7,	// (0x0003fb92) volume_set_pane_vc_g

0xb0ac,	// (0x0003b387) volume_set_pane_vc

0xb0b6,	// (0x0003b391) button_value_adjust_pane_cp1_vc

0xb0c0,	// (0x0003b39b) list_highlight_pane_cp2_vc

0xb0c9,	// (0x0003b3a4) list_set_pane_vc_ParamLimits

0xb0c9,	// (0x0003b3a4) list_set_pane_vc

0xb139,	// (0x0003b414) main_pane_set_vc_t1_ParamLimits

0xb139,	// (0x0003b414) main_pane_set_vc_t1

0xb14e,	// (0x0003b429) main_pane_set_vc_t2_ParamLimits

0xb14e,	// (0x0003b429) main_pane_set_vc_t2

0xb160,	// (0x0003b43b) main_pane_set_vc_t3_ParamLimits

0xb160,	// (0x0003b43b) main_pane_set_vc_t3

0xb174,	// (0x0003b44f) main_pane_set_vc_t4_ParamLimits

0xb174,	// (0x0003b44f) main_pane_set_vc_t4

0x0003,

0xfa20,	// (0x0003fcfb) main_pane_set_vc_t_ParamLimits

0xfa20,	// (0x0003fcfb) main_pane_set_vc_t

0xb188,	// (0x0003b463) setting_code_pane_vc_ParamLimits

0xb188,	// (0x0003b463) setting_code_pane_vc

0xb199,	// (0x0003b474) setting_slider_graphic_pane_vc

0xb199,	// (0x0003b474) setting_slider_pane_vc

0xb199,	// (0x0003b474) setting_text_pane_vc

0xb199,	// (0x0003b474) setting_volume_pane_vc

0xb1a3,	// (0x0003b47e) scroll_pane_cp121_vc

0x2807,	// (0x00032ae2) set_content_pane_vc

0xb1ab,	// (0x0003b486) button_value_adjust_pane_g1

0xb1b4,	// (0x0003b48f) button_value_adjust_pane_g2

0x0001,

0xfa7a,	// (0x0003fd55) button_value_adjust_pane_g

0xb1bd,	// (0x0003b498) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb1bd,	// (0x0003b498) form_field_slider_wide_pane_vc_t1

0xb1cf,	// (0x0003b4aa) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb1cf,	// (0x0003b4aa) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7f,	// (0x0003fd5a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0003fd5a) form_field_slider_wide_pane_vc_t

0xf546,	// (0x0003f821) input_focus_pane_cp10_vc_ParamLimits

0xf546,	// (0x0003f821) input_focus_pane_cp10_vc

0xb1fb,	// (0x0003b4d6) slider_cont_pane_cp1_vc_ParamLimits

0xb1fb,	// (0x0003b4d6) slider_cont_pane_cp1_vc

0xb20d,	// (0x0003b4e8) slider_form_pane_g1_cp2

0xb01b,	// (0x0003b2f6) slider_form_pane_g2_cp2

0xb23a,	// (0x0003b515) form_field_slider_pane_vc_t3

0xb248,	// (0x0003b523) form_field_slider_pane_vc_t4

0xb256,	// (0x0003b531) slider_form_pane_vc_ParamLimits

0xb256,	// (0x0003b531) slider_form_pane_vc

0xb263,	// (0x0003b53e) form_field_slider_pane_vc_t1_ParamLimits

0xb263,	// (0x0003b53e) form_field_slider_pane_vc_t1

0xb1cf,	// (0x0003b4aa) form_field_slider_pane_vc_t2_ParamLimits

0xb1cf,	// (0x0003b4aa) form_field_slider_pane_vc_t2

0x0001,

0xfa91,	// (0x0003fd6c) form_field_slider_pane_vc_t_ParamLimits

0xfa91,	// (0x0003fd6c) form_field_slider_pane_vc_t

0xf546,	// (0x0003f821) input_focus_pane_cp9_vc_ParamLimits

0xf546,	// (0x0003f821) input_focus_pane_cp9_vc

0xb279,	// (0x0003b554) slider_cont_pane_vc_ParamLimits

0xb279,	// (0x0003b554) slider_cont_pane_vc

0xb28d,	// (0x0003b568) list_form_graphic_pane_cp_vc_ParamLimits

0xb28d,	// (0x0003b568) list_form_graphic_pane_cp_vc

0x9545,	// (0x00039820) form_field_popup_wide_pane_vc_g1

0xb2a2,	// (0x0003b57d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb2a2,	// (0x0003b57d) form_field_popup_wide_pane_vc_t1

0x282d,	// (0x00032b08) input_focus_pane_cp8_vc_ParamLimits

0x282d,	// (0x00032b08) input_focus_pane_cp8_vc

0xb2e7,	// (0x0003b5c2) list_form_wide_pane_vc_ParamLimits

0xb2e7,	// (0x0003b5c2) list_form_wide_pane_vc

0xb2f3,	// (0x0003b5ce) list_form_graphic_pane_vc_g1

0xb2fb,	// (0x0003b5d6) list_form_graphic_pane_vc_t1_ParamLimits

0xb2fb,	// (0x0003b5d6) list_form_graphic_pane_vc_t1

0xf4d9,	// (0x0003f7b4) list_highlight_pane_cp5_vc_ParamLimits

0xf4d9,	// (0x0003f7b4) list_highlight_pane_cp5_vc

0xb317,	// (0x0003b5f2) list_form_graphic_pane_vc_ParamLimits

0xb317,	// (0x0003b5f2) list_form_graphic_pane_vc

0x9545,	// (0x00039820) form_field_popup_pane_vc_g1

0xb32d,	// (0x0003b608) form_field_popup_pane_vc_t1_ParamLimits

0xb32d,	// (0x0003b608) form_field_popup_pane_vc_t1

0x282d,	// (0x00032b08) input_focus_pane_cp7_vc_ParamLimits

0x282d,	// (0x00032b08) input_focus_pane_cp7_vc

0xb344,	// (0x0003b61f) list_form_pane_vc_ParamLimits

0xb344,	// (0x0003b61f) list_form_pane_vc

0xb350,	// (0x0003b62b) data_form_pane_vc_t1_ParamLimits

0xb350,	// (0x0003b62b) data_form_pane_vc_t1

0x2888,	// (0x00032b63) input_focus_pane_vc_g1

0x2890,	// (0x00032b6b) input_focus_pane_vc_g2

0x2898,	// (0x00032b73) input_focus_pane_vc_g3

0x28a0,	// (0x00032b7b) input_focus_pane_vc_g4

0x28a8,	// (0x00032b83) input_focus_pane_vc_g5

0x28b0,	// (0x00032b8b) input_focus_pane_vc_g6

0x28b8,	// (0x00032b93) input_focus_pane_vc_g7

0x28c0,	// (0x00032b9b) input_focus_pane_vc_g8

0x28c8,	// (0x00032ba3) input_focus_pane_vc_g9

0xf475,	// (0x0003f750) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0003f968) input_focus_pane_vc_g

0x9539,	// (0x00039814) data_form_pane_vc_ParamLimits

0x9539,	// (0x00039814) data_form_pane_vc

0x9545,	// (0x00039820) form_field_data_pane_vc_g1

0xb36d,	// (0x0003b648) form_field_data_pane_vc_t1_ParamLimits

0xb36d,	// (0x0003b648) form_field_data_pane_vc_t1

0x282d,	// (0x00032b08) input_focus_pane_vc_ParamLimits

0x282d,	// (0x00032b08) input_focus_pane_vc

0xb387,	// (0x0003b662) button_value_adjust_pane_cp3_vc

0xb38f,	// (0x0003b66a) button_value_adjust_pane_cp5_vc

0xb397,	// (0x0003b672) form_field_data_pane_vc_ParamLimits

0xb397,	// (0x0003b672) form_field_data_pane_vc

0xb3b2,	// (0x0003b68d) form_field_data_pane_vc_cp2

0xb3ba,	// (0x0003b695) form_field_data_wide_pane_vc_ParamLimits

0xb3ba,	// (0x0003b695) form_field_data_wide_pane_vc

0xb3d4,	// (0x0003b6af) form_field_data_wide_pane_vc_cp2

0xb3dc,	// (0x0003b6b7) form_field_popup_pane_vc_ParamLimits

0xb3dc,	// (0x0003b6b7) form_field_popup_pane_vc

0xb3f7,	// (0x0003b6d2) form_field_popup_wide_pane_vc_ParamLimits

0xb3f7,	// (0x0003b6d2) form_field_popup_wide_pane_vc

0xb411,	// (0x0003b6ec) form_field_slider_pane_vc_ParamLimits

0xb411,	// (0x0003b6ec) form_field_slider_pane_vc

0xb424,	// (0x0003b6ff) form_field_slider_wide_pane_vc_ParamLimits

0xb424,	// (0x0003b6ff) form_field_slider_wide_pane_vc

0xb437,	// (0x0003b712) grid_touch_1_pane_ParamLimits

0xb437,	// (0x0003b712) grid_touch_1_pane

0xb443,	// (0x0003b71e) grid_touch_2_pane_ParamLimits

0xb443,	// (0x0003b71e) grid_touch_2_pane

0x885d,	// (0x00038b38) touch_pane_g1_ParamLimits

0x885d,	// (0x00038b38) touch_pane_g1

0xb45d,	// (0x0003b738) cell_app_pane_cp_wide_ParamLimits

0xb45d,	// (0x0003b738) cell_app_pane_cp_wide

0xb46e,	// (0x0003b749) grid_popup_fast_wide_pane_ParamLimits

0xb46e,	// (0x0003b749) grid_popup_fast_wide_pane

0xb482,	// (0x0003b75d) scroll_pane_cp19_ParamLimits

0xb482,	// (0x0003b75d) scroll_pane_cp19

0xf47f,	// (0x0003f75a) bg_popup_window_pane_cp20

0xb496,	// (0x0003b771) listscroll_popup_fast_wide_pane

0xf4d9,	// (0x0003f7b4) grid_indicator_nsta_pane

0xb49e,	// (0x0003b779) clock_nsta_pane_g1

0xb4a7,	// (0x0003b782) clock_nsta_pane_t1

0xb4c3,	// (0x0003b79e) cell_indicator_nsta_pane_ParamLimits

0xb4c3,	// (0x0003b79e) cell_indicator_nsta_pane

0xb4fb,	// (0x0003b7d6) cell_indicator_nsta_pane_g1

0xb509,	// (0x0003b7e4) cell_indicator_nsta_pane_g2

0x0001,

0xfaa2,	// (0x0003fd7d) cell_indicator_nsta_pane_g

0xb51f,	// (0x0003b7fa) clock_nsta_pane_cp

0xb527,	// (0x0003b802) indicator_nsta_pane_cp

0xb530,	// (0x0003b80b) nsta_clock_indic_pane_g1

0xf515,	// (0x0003f7f0) grid_indicator_pane

0x2ca2,	// (0x00032f7d) scroll_pane_cp29

0x69de,	// (0x00036cb9) indicator_nsta_pane_cp2_ParamLimits

0x69de,	// (0x00036cb9) indicator_nsta_pane_cp2

0xf4d9,	// (0x0003f7b4) main_apps_wheel_pane

0x972c,	// (0x00039a07) form_midp_field_text_pane_ParamLimits

0x987b,	// (0x00039b56) scroll_bar_cp050_ParamLimits

0xb599,	// (0x0003b874) cell_indicator_pane_ParamLimits

0xb599,	// (0x0003b874) cell_indicator_pane

0xb5b1,	// (0x0003b88c) cell_indicator_pane_g1

0xb5bb,	// (0x0003b896) grid_wheel_folder_pane_ParamLimits

0xb5bb,	// (0x0003b896) grid_wheel_folder_pane

0xb5cf,	// (0x0003b8aa) list_wheel_apps_pane_ParamLimits

0xb5cf,	// (0x0003b8aa) list_wheel_apps_pane

0xb5e2,	// (0x0003b8bd) main_apps_wheel_pane_g1_ParamLimits

0xb5e2,	// (0x0003b8bd) main_apps_wheel_pane_g1

0xb5fe,	// (0x0003b8d9) main_apps_wheel_pane_g2_ParamLimits

0xb5fe,	// (0x0003b8d9) main_apps_wheel_pane_g2

0x0001,

0xfabe,	// (0x0003fd99) main_apps_wheel_pane_g_ParamLimits

0xfabe,	// (0x0003fd99) main_apps_wheel_pane_g

0xb61a,	// (0x0003b8f5) main_apps_wheel_pane_t1_ParamLimits

0xb61a,	// (0x0003b8f5) main_apps_wheel_pane_t1

0xb643,	// (0x0003b91e) list_wheel_apps_pane_g1

0xb64b,	// (0x0003b926) list_wheel_apps_pane_g2

0xb653,	// (0x0003b92e) list_wheel_apps_pane_g3

0xb65b,	// (0x0003b936) list_wheel_apps_pane_g4

0xb665,	// (0x0003b940) list_wheel_apps_pane_g5

0x0004,

0xfac3,	// (0x0003fd9e) list_wheel_apps_pane_g

0x6ce1,	// (0x00036fbc) navi_icon_text_pane

0x8f55,	// (0x00039230) aid_fill_nsta

0xb686,	// (0x0003b961) navi_icon_text_pane_g1

0xb692,	// (0x0003b96d) navi_icon_text_pane_t1

0x6b77,	// (0x00036e52) list_set_graphic_pane_t1_ParamLimits

0x6b77,	// (0x00036e52) list_set_graphic_pane_t1

0x9fcc,	// (0x0003a2a7) popup_midp_note_alarm_window_t6_ParamLimits

0x9fcc,	// (0x0003a2a7) popup_midp_note_alarm_window_t6

0x9fde,	// (0x0003a2b9) popup_midp_note_alarm_window_t7_ParamLimits

0x9fde,	// (0x0003a2b9) popup_midp_note_alarm_window_t7

0x9ff0,	// (0x0003a2cb) popup_midp_note_alarm_window_t8_ParamLimits

0x9ff0,	// (0x0003a2cb) popup_midp_note_alarm_window_t8

0xa002,	// (0x0003a2dd) popup_midp_note_alarm_window_t9_ParamLimits

0xa002,	// (0x0003a2dd) popup_midp_note_alarm_window_t9

0xa014,	// (0x0003a2ef) popup_midp_note_alarm_window_t10_ParamLimits

0xa014,	// (0x0003a2ef) popup_midp_note_alarm_window_t10

0xa026,	// (0x0003a301) popup_midp_note_alarm_window_t11_ParamLimits

0xa026,	// (0x0003a301) popup_midp_note_alarm_window_t11

0xa038,	// (0x0003a313) scroll_pane_cp17_ParamLimits

0xa038,	// (0x0003a313) scroll_pane_cp17

0x72ad,	// (0x00037588) volume_small_pane_cp_g1

0x766f,	// (0x0003794a) volume_small_pane_cp_g2

0x7678,	// (0x00037953) volume_small_pane_cp_g3

0x7681,	// (0x0003795c) volume_small_pane_cp_g4

0x768a,	// (0x00037965) volume_small_pane_cp_g5

0x7693,	// (0x0003796e) volume_small_pane_cp_g6

0x769c,	// (0x00037977) volume_small_pane_cp_g7

0x76a5,	// (0x00037980) volume_small_pane_cp_g8

0x76ae,	// (0x00037989) volume_small_pane_cp_g9

0x76b7,	// (0x00037992) volume_small_pane_cp_g10

0x6f36,	// (0x00037211) midp_ticker_pane_g1_ParamLimits

0x6f42,	// (0x0003721d) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0003fa34) midp_ticker_pane_g_ParamLimits

0x8685,	// (0x00038960) midp_ticker_pane_t1_ParamLimits

0x8f6b,	// (0x00039246) aid_fill_nsta_2

0x9867,	// (0x00039b42) list_form2_midp_pane

0xa9d0,	// (0x0003acab) midp_editing_number_pane_ParamLimits

0xa9df,	// (0x0003acba) midp_ticker_pane_ParamLimits

0xb6a4,	// (0x0003b97f) form2_midp_field_pane

0xb6c8,	// (0x0003b9a3) scroll_pane_cp51

0xb6e8,	// (0x0003b9c3) form2_midp_button_pane_ParamLimits

0xb6e8,	// (0x0003b9c3) form2_midp_button_pane

0xb6fa,	// (0x0003b9d5) form2_midp_content_pane_ParamLimits

0xb6fa,	// (0x0003b9d5) form2_midp_content_pane

0xb714,	// (0x0003b9ef) form2_midp_field_choice_group_pane

0xb71c,	// (0x0003b9f7) form2_midp_field_pane_g1

0xb724,	// (0x0003b9ff) form2_midp_field_pane_g2

0xb72c,	// (0x0003ba07) form2_midp_field_pane_g3

0xb734,	// (0x0003ba0f) form2_midp_field_pane_g4

0x0003,

0xfae8,	// (0x0003fdc3) form2_midp_field_pane_g

0xb73c,	// (0x0003ba17) form2_midp_gauge_slider_pane

0xb744,	// (0x0003ba1f) form2_midp_gauge_wait_pane

0xb74c,	// (0x0003ba27) form2_midp_image_pane_ParamLimits

0xb74c,	// (0x0003ba27) form2_midp_image_pane

0xb767,	// (0x0003ba42) form2_midp_label_pane_ParamLimits

0xb767,	// (0x0003ba42) form2_midp_label_pane

0xb786,	// (0x0003ba61) form2_midp_label_pane_cp_ParamLimits

0xb786,	// (0x0003ba61) form2_midp_label_pane_cp

0xb7a7,	// (0x0003ba82) form2_midp_string_pane_ParamLimits

0xb7a7,	// (0x0003ba82) form2_midp_string_pane

0x47b1,	// (0x00034a8c) form2_midp_text_pane_ParamLimits

0x47b1,	// (0x00034a8c) form2_midp_text_pane

0xb7b9,	// (0x0003ba94) form2_midp_time_pane

0xb7c9,	// (0x0003baa4) input_focus_pane_cp51_ParamLimits

0xb7c9,	// (0x0003baa4) input_focus_pane_cp51

0xb7e1,	// (0x0003babc) form2_midp_label_pane_t1_ParamLimits

0xb7e1,	// (0x0003babc) form2_midp_label_pane_t1

0x47d2,	// (0x00034aad) form2_mdip_text_pane_t1_ParamLimits

0x47d2,	// (0x00034aad) form2_mdip_text_pane_t1

0x47f6,	// (0x00034ad1) form2_midp_time_pane_t1

0xb82f,	// (0x0003bb0a) form2_midp_gauge_slider_pane_t1

0xb841,	// (0x0003bb1c) form2_midp_gauge_slider_pane_t2

0xb853,	// (0x0003bb2e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf1,	// (0x0003fdcc) form2_midp_gauge_slider_pane_t

0xb865,	// (0x0003bb40) form2_midp_slider_pane

0xb871,	// (0x0003bb4c) form2_midp_gauge_wait_pane_t1

0xb87f,	// (0x0003bb5a) form2_midp_wait_pane_ParamLimits

0xb87f,	// (0x0003bb5a) form2_midp_wait_pane

0x958c,	// (0x00039867) list_single_2graphic_pane_cp4_ParamLimits

0x958c,	// (0x00039867) list_single_2graphic_pane_cp4

0xb8aa,	// (0x0003bb85) list_single_midp_graphic_pane_cp_ParamLimits

0xb8aa,	// (0x0003bb85) list_single_midp_graphic_pane_cp

0xf47f,	// (0x0003f75a) list_highlight_pane_cp20

0xb8ce,	// (0x0003bba9) list_single_2graphic_pane_g1_cp4

0xae65,	// (0x0003b140) list_single_2graphic_pane_g2_cp4

0xb8d6,	// (0x0003bbb1) list_single_2graphic_pane_t1_cp4

0xf4d9,	// (0x0003f7b4) list_highlight_pane_cp21

0xb8e5,	// (0x0003bbc0) list_single_midp_graphic_pane_g4_cp

0xb8f4,	// (0x0003bbcf) list_single_midp_graphic_pane_t1_cp

0xb909,	// (0x0003bbe4) form2_mdip_string_pane_t1_ParamLimits

0xb909,	// (0x0003bbe4) form2_mdip_string_pane_t1

0xf47f,	// (0x0003f75a) bg_wml_button_pane_cp2

0xf475,	// (0x0003f750) form2_midp_image_pane_g1

0x429e,	// (0x00034579) list_double_large_graphic_pane_g5_ParamLimits

0x429e,	// (0x00034579) list_double_large_graphic_pane_g5

0x64a1,	// (0x0003677c) midp_form_pane_ParamLimits

0xf4d9,	// (0x0003f7b4) main_apps_wheel_pane_ParamLimits

0x8cff,	// (0x00038fda) popup_preview_window_ParamLimits

0x8cff,	// (0x00038fda) popup_preview_window

0x8ee6,	// (0x000391c1) popup_touch_info_window_ParamLimits

0x8ee6,	// (0x000391c1) popup_touch_info_window

0x8f08,	// (0x000391e3) popup_touch_menu_window_ParamLimits

0x8f08,	// (0x000391e3) popup_touch_menu_window

0xf46b,	// (0x0003f746) bg_popup_sub_pane_cp6

0xb9ae,	// (0x0003bc89) list_touch_menu_pane

0xb9b6,	// (0x0003bc91) list_single_touch_menu_pane_ParamLimits

0xb9b6,	// (0x0003bc91) list_single_touch_menu_pane

0xb9ce,	// (0x0003bca9) list_single_touch_menu_pane_t1

0xf4d9,	// (0x0003f7b4) bg_popup_sub_pane_cp7_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_popup_sub_pane_cp7

0xb9dc,	// (0x0003bcb7) heading_sub_pane

0xb9e4,	// (0x0003bcbf) list_touch_info_pane_ParamLimits

0xb9e4,	// (0x0003bcbf) list_touch_info_pane

0xb9f3,	// (0x0003bcce) list_single_touch_info_pane_ParamLimits

0xb9f3,	// (0x0003bcce) list_single_touch_info_pane

0xba05,	// (0x0003bce0) list_single_touch_info_pane_t1

0xba13,	// (0x0003bcee) list_single_touch_info_pane_t2

0x0001,

0xfaff,	// (0x0003fdda) list_single_touch_info_pane_t

0x6e65,	// (0x00037140) bg_popup_heading_pane_cp

0xba21,	// (0x0003bcfc) heading_sub_pane_t1

0x94d3,	// (0x000397ae) bg_popup_preview_window_pane_cp_ParamLimits

0x94d3,	// (0x000397ae) bg_popup_preview_window_pane_cp

0xb9dc,	// (0x0003bcb7) heading_preview_pane

0xb9e4,	// (0x0003bcbf) list_preview_pane_ParamLimits

0xb9e4,	// (0x0003bcbf) list_preview_pane

0xba2f,	// (0x0003bd0a) popup_preview_window_g1

0xb9f3,	// (0x0003bcce) list_single_preview_pane_ParamLimits

0xb9f3,	// (0x0003bcce) list_single_preview_pane

0xba37,	// (0x0003bd12) list_single_preview_pane_g1

0xba3f,	// (0x0003bd1a) list_single_preview_pane_t1

0xba05,	// (0x0003bce0) list_single_preview_pane_t2

0x0001,

0xfb04,	// (0x0003fddf) list_single_preview_pane_t

0xba4d,	// (0x0003bd28) bg_popup_heading_pane_cp2_ParamLimits

0xba4d,	// (0x0003bd28) bg_popup_heading_pane_cp2

0xba63,	// (0x0003bd3e) heading_preview_pane_g1

0xba6b,	// (0x0003bd46) heading_preview_pane_t1_ParamLimits

0xba6b,	// (0x0003bd46) heading_preview_pane_t1

0xf52c,	// (0x0003f807) soft_indicator_pane_t1_ParamLimits

0x27a0,	// (0x00032a7b) scroll_pane_ParamLimits

0x2ba7,	// (0x00032e82) scroll_sc2_left_pane

0x2b9e,	// (0x00032e79) scroll_sc2_right_pane

0x2bc6,	// (0x00032ea1) scroll_bg_pane_g1_ParamLimits

0x2bdb,	// (0x00032eb6) scroll_bg_pane_g2_ParamLimits

0x2bf3,	// (0x00032ece) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0003f9bf) scroll_bg_pane_g_ParamLimits

0x2bc6,	// (0x00032ea1) scroll_handle_pane_g1_ParamLimits

0x2c15,	// (0x00032ef0) scroll_handle_pane_g2_ParamLimits

0x2bf3,	// (0x00032ece) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0003f9c6) scroll_handle_pane_g_ParamLimits

0x8946,	// (0x00038c21) popup_choice_list_window_ParamLimits

0x8946,	// (0x00038c21) popup_choice_list_window

0x93a9,	// (0x00039684) choice_list_pane

0x942b,	// (0x00039706) cell_toolbar_pane_t1

0x9453,	// (0x0003972e) toolbar_button_pane_ParamLimits

0xa502,	// (0x0003a7dd) ai_gene_pane_1_t2_ParamLimits

0xa502,	// (0x0003a7dd) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0003fbee) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0003fbee) ai_gene_pane_1_t

0xba88,	// (0x0003bd63) scroll_sc2_left_pane_g1

0xba88,	// (0x0003bd63) scroll_sc2_right_pane_g1

0x891e,	// (0x00038bf9) bg_popup_sub_pane_cp10

0xba92,	// (0x0003bd6d) list_choice_list_pane

0xbaab,	// (0x0003bd86) list_single_choice_list_pane_ParamLimits

0xbaab,	// (0x0003bd86) list_single_choice_list_pane

0xbac3,	// (0x0003bd9e) list_single_choice_list_pane_g1

0x297e,	// (0x00032c59) list_single_choice_list_pane_t1_ParamLimits

0x297e,	// (0x00032c59) list_single_choice_list_pane_t1

0xbacb,	// (0x0003bda6) choice_list_pane_g1

0xbad3,	// (0x0003bdae) choice_list_pane_t1

0xf46b,	// (0x0003f746) input_focus_pane_cp11

0x2afc,	// (0x00032dd7) title_pane_stacon_g2_ParamLimits

0x2afc,	// (0x00032dd7) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0003f9a5) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0003f9a5) title_pane_stacon_g

0x6e65,	// (0x00037140) cursor_press_pane

0x8a00,	// (0x00038cdb) popup_fep_hwr_window_ParamLimits

0x8a00,	// (0x00038cdb) popup_fep_hwr_window

0x8a8a,	// (0x00038d65) popup_fep_vkb_window_ParamLimits

0x8a8a,	// (0x00038d65) popup_fep_vkb_window

0xbae1,	// (0x0003bdbc) cursor_press_pane_g1

0x0002,

0xfb2d,	// (0x0003fe08) fep_vkb_side_pane_g_ParamLimits

0x76f9,	// (0x000379d4) fep_hwr_candidate_pane_ParamLimits

0x76f9,	// (0x000379d4) fep_hwr_candidate_pane

0x7723,	// (0x000379fe) fep_hwr_side_pane_ParamLimits

0x7723,	// (0x000379fe) fep_hwr_side_pane

0x7745,	// (0x00037a20) fep_hwr_top_pane_ParamLimits

0x7745,	// (0x00037a20) fep_hwr_top_pane

0x775d,	// (0x00037a38) fep_hwr_write_pane_ParamLimits

0x775d,	// (0x00037a38) fep_hwr_write_pane

0xfb2d,	// (0x0003fe08) fep_vkb_side_pane_g

0xbae9,	// (0x0003bdc4) fep_hwr_top_pane_g1

0xbafb,	// (0x0003bdd6) fep_hwr_top_pane_g2

0x7797,	// (0x00037a72) fep_hwr_top_pane_g3

0x0002,

0xfb09,	// (0x0003fde4) fep_hwr_top_pane_g

0x77ac,	// (0x00037a87) fep_hwr_top_text_pane

0x2d0f,	// (0x00032fea) fep_hwr_top_text_pane_g1

0xbb31,	// (0x0003be0c) fep_hwr_top_text_pane_t1

0x78b6,	// (0x00037b91) fep_hwr_candidate_pane_g1

0xbd7c,	// (0x0003c057) fep_vkb_keypad_pane_g3_ParamLimits

0xbd7c,	// (0x0003c057) fep_vkb_keypad_pane_g3

0xbda8,	// (0x0003c083) fep_vkb_keypad_pane_g4_ParamLimits

0xbda8,	// (0x0003c083) fep_vkb_keypad_pane_g4

0xbe1f,	// (0x0003c0fa) fep_vkb_bottom_pane_g2_ParamLimits

0xbe1f,	// (0x0003c0fa) fep_vkb_bottom_pane_g2

0x0001,

0xfb34,	// (0x0003fe0f) fep_vkb_bottom_pane_g_ParamLimits

0xfb34,	// (0x0003fe0f) fep_vkb_bottom_pane_g

0xba88,	// (0x0003bd63) cell_vkb_side_pane_g2

0x0001,

0xfb3e,	// (0x0003fe19) cell_vkb_side_pane_g

0xbeaa,	// (0x0003c185) cell_vkb_side_pane_t1

0xbeb8,	// (0x0003c193) cell_vkb_side_pane_t1_copy1

0xba88,	// (0x0003bd63) bg_fep_vkb_candidate_pane_g2

0xbffc,	// (0x0003c2d7) cell_vkb_candidate_pane_ParamLimits

0xbb3f,	// (0x0003be1a) aid_size_cell_vkb_ParamLimits

0xbb3f,	// (0x0003be1a) aid_size_cell_vkb

0xbffc,	// (0x0003c2d7) cell_vkb_candidate_pane

0x78dd,	// (0x00037bb8) bg_popup_fep_shadow_pane_g1

0xbbd1,	// (0x0003beac) fep_vkb_bottom_pane_ParamLimits

0xbbd1,	// (0x0003beac) fep_vkb_bottom_pane

0xbc0e,	// (0x0003bee9) fep_vkb_candidate_pane_ParamLimits

0xbc0e,	// (0x0003bee9) fep_vkb_candidate_pane

0xbc2a,	// (0x0003bf05) fep_vkb_keypad_pane_ParamLimits

0xbc2a,	// (0x0003bf05) fep_vkb_keypad_pane

0xbc5d,	// (0x0003bf38) fep_vkb_side_pane_ParamLimits

0xbc5d,	// (0x0003bf38) fep_vkb_side_pane

0xbc99,	// (0x0003bf74) fep_vkb_top_pane_ParamLimits

0xbc99,	// (0x0003bf74) fep_vkb_top_pane

0xbcd5,	// (0x0003bfb0) fep_vkb_top_pane_g1_ParamLimits

0xbcd5,	// (0x0003bfb0) fep_vkb_top_pane_g1

0xbce4,	// (0x0003bfbf) fep_vkb_top_pane_g2_ParamLimits

0xbce4,	// (0x0003bfbf) fep_vkb_top_pane_g2

0xbcf3,	// (0x0003bfce) fep_vkb_top_pane_g3_ParamLimits

0xbcf3,	// (0x0003bfce) fep_vkb_top_pane_g3

0x0003,

0xfb24,	// (0x0003fdff) fep_vkb_top_pane_g_ParamLimits

0xfb24,	// (0x0003fdff) fep_vkb_top_pane_g

0xbd11,	// (0x0003bfec) fep_vkb_top_text_pane_ParamLimits

0xbd11,	// (0x0003bfec) fep_vkb_top_text_pane

0xbd22,	// (0x0003bffd) fep_vkb_side_pane_g1_ParamLimits

0xbd22,	// (0x0003bffd) fep_vkb_side_pane_g1

0xbd6b,	// (0x0003c046) grid_vkb_side_pane_ParamLimits

0xbd6b,	// (0x0003c046) grid_vkb_side_pane

0x78e5,	// (0x00037bc0) bg_popup_fep_shadow_pane_g2

0x78ee,	// (0x00037bc9) bg_popup_fep_shadow_pane_g3

0x78f6,	// (0x00037bd1) bg_popup_fep_shadow_pane_g4

0x78ff,	// (0x00037bda) bg_popup_fep_shadow_pane_g5

0x7909,	// (0x00037be4) bg_popup_fep_shadow_pane_g6

0x7911,	// (0x00037bec) bg_popup_fep_shadow_pane_g7

0x28a0,	// (0x00032b7b) bg_popup_fep_shadow_pane_g8

0xbdca,	// (0x0003c0a5) grid_vkb_keypad_number_pane_ParamLimits

0xbdca,	// (0x0003c0a5) grid_vkb_keypad_number_pane

0xbdde,	// (0x0003c0b9) grid_vkb_keypad_pane_ParamLimits

0xbdde,	// (0x0003c0b9) grid_vkb_keypad_pane

0xbe04,	// (0x0003c0df) fep_vkb_bottom_pane_g1_ParamLimits

0xbe04,	// (0x0003c0df) fep_vkb_bottom_pane_g1

0xbe2d,	// (0x0003c108) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbe2d,	// (0x0003c108) grid_vkb_keypad_bottom_left_pane

0xbe42,	// (0x0003c11d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbe42,	// (0x0003c11d) grid_vkb_keypad_bottom_right_pane

0xbe57,	// (0x0003c132) fep_vkb_top_text_pane_g1

0xbe72,	// (0x0003c14d) fep_vkb_top_text_pane_t1

0xbe87,	// (0x0003c162) cell_vkb_side_pane_ParamLimits

0xbe87,	// (0x0003c162) cell_vkb_side_pane

0xba88,	// (0x0003bd63) cell_vkb_side_pane_g1

0xbec6,	// (0x0003c1a1) cell_vkb_keypad_pane_ParamLimits

0xbec6,	// (0x0003c1a1) cell_vkb_keypad_pane

0xbf53,	// (0x0003c22e) cell_vkb_keypad_pane_g1

0x0008,

0xfb51,	// (0x0003fe2c) bg_popup_fep_shadow_pane_g

0x7923,	// (0x00037bfe) cell_hwr_side_pane_g1

0x7923,	// (0x00037bfe) cell_hwr_side_pane_g2

0xbf5d,	// (0x0003c238) cell_vkb_keypad_pane_t1

0xbf6b,	// (0x0003c246) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbf6b,	// (0x0003c246) cell_vkb_keypad_bottom_left_pane

0xbf88,	// (0x0003c263) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbf88,	// (0x0003c263) cell_vkb_keypad_bottom_right_pane

0xba88,	// (0x0003bd63) cell_vkb_keypad_bottom_left_pane_g1

0xba88,	// (0x0003bd63) cell_vkb_keypad_bottom_right_pane_g1

0xbfc1,	// (0x0003c29c) cell_vkb_keypad_number_pane_ParamLimits

0xbfc1,	// (0x0003c29c) cell_vkb_keypad_number_pane

0xbfe0,	// (0x0003c2bb) cell_vkb_keypad_number_pane_g1

0xbfea,	// (0x0003c2c5) cell_vkb_keypad_number_pane_g2

0xbff3,	// (0x0003c2ce) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb43,	// (0x0003fe1e) cell_vkb_keypad_number_pane_g

0xbf5d,	// (0x0003c238) cell_vkb_keypad_number_pane_t1

0xc01d,	// (0x0003c2f8) fep_vkb_candidate_pane_g1

0x0001,

0xfb64,	// (0x0003fe3f) cell_hwr_side_pane_g

0xc036,	// (0x0003c311) cell_hwr_side_pane_t1

0x792d,	// (0x00037c08) cell_hwr_side_pane_t1_copy1

0x793b,	// (0x00037c16) cell_hwr_candidate_pane_g1

0x796a,	// (0x00037c45) cell_hwr_candidate_pane_t1

0xba88,	// (0x0003bd63) cell_vkb_candidate_pane_g2

0xc07a,	// (0x0003c355) cell_vkb_candidate_pane_t1

0x76c0,	// (0x0003799b) bg_popup_fep_shadow_pane_ParamLimits

0x76c0,	// (0x0003799b) bg_popup_fep_shadow_pane

0x7777,	// (0x00037a52) bg_fep_hwr_top_pane_g4

0xbb0d,	// (0x0003bde8) bg_hwr_side_pane_g1_ParamLimits

0xbb0d,	// (0x0003bde8) bg_hwr_side_pane_g1

0x77ea,	// (0x00037ac5) cell_hwr_side_pane_ParamLimits

0x77ea,	// (0x00037ac5) cell_hwr_side_pane

0x7827,	// (0x00037b02) fep_hwr_write_pane_g1_ParamLimits

0x7827,	// (0x00037b02) fep_hwr_write_pane_g1

0x7834,	// (0x00037b0f) fep_hwr_write_pane_g2_ParamLimits

0x7834,	// (0x00037b0f) fep_hwr_write_pane_g2

0x7841,	// (0x00037b1c) fep_hwr_write_pane_g3_ParamLimits

0x7841,	// (0x00037b1c) fep_hwr_write_pane_g3

0x784f,	// (0x00037b2a) fep_hwr_write_pane_g4_ParamLimits

0x784f,	// (0x00037b2a) fep_hwr_write_pane_g4

0x0005,

0xfb10,	// (0x0003fdeb) fep_hwr_write_pane_g_ParamLimits

0xfb10,	// (0x0003fdeb) fep_hwr_write_pane_g

0x7777,	// (0x00037a52) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7777,	// (0x00037a52) bg_fep_hwr_candidate_pane_g2

0x7864,	// (0x00037b3f) cell_hwr_candidate_pane_ParamLimits

0x7864,	// (0x00037b3f) cell_hwr_candidate_pane

0x78b6,	// (0x00037b91) fep_hwr_candidate_pane_g1_ParamLimits

0xbb6d,	// (0x0003be48) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbb6d,	// (0x0003be48) bg_popup_fep_shadow_pane_cp2

0xbd03,	// (0x0003bfde) fep_vkb_top_pane_g4_ParamLimits

0xbd03,	// (0x0003bfde) fep_vkb_top_pane_g4

0xbd49,	// (0x0003c024) fep_vkb_side_pane_g2_ParamLimits

0xbd49,	// (0x0003c024) fep_vkb_side_pane_g2

0x61eb,	// (0x000364c6) list_setting_pane_t4_ParamLimits

0x61eb,	// (0x000364c6) list_setting_pane_t4

0x6287,	// (0x00036562) list_setting_number_pane_t5_ParamLimits

0x6287,	// (0x00036562) list_setting_number_pane_t5

0x6786,	// (0x00036a61) list_double_heading_pane_cp2_ParamLimits

0x6786,	// (0x00036a61) list_double_heading_pane_cp2

0xc088,	// (0x0003c363) list_double_heading_pane_g1_cp2_ParamLimits

0xc088,	// (0x0003c363) list_double_heading_pane_g1_cp2

0xc094,	// (0x0003c36f) list_double_heading_pane_g2_cp2_ParamLimits

0xc094,	// (0x0003c36f) list_double_heading_pane_g2_cp2

0xc0a8,	// (0x0003c383) list_double_heading_pane_t1_cp2_ParamLimits

0xc0a8,	// (0x0003c383) list_double_heading_pane_t1_cp2

0xc0be,	// (0x0003c399) list_double_heading_pane_t2_cp2_ParamLimits

0xc0be,	// (0x0003c399) list_double_heading_pane_t2_cp2

0xf463,	// (0x0003f73e) aid_value_unit2

0x59dd,	// (0x00035cb8) popup_preview_fixed_window

0x234b,	// (0x00032626) bg_popup_preview_window_pane_cp02

0xc0d0,	// (0x0003c3ab) list_preview_fixed_pane

0xc116,	// (0x0003c3f1) list_empty_pane_fp_ParamLimits

0xc116,	// (0x0003c3f1) list_empty_pane_fp

0xc116,	// (0x0003c3f1) list_single_cale_day_pane_fp_ParamLimits

0xc116,	// (0x0003c3f1) list_single_cale_day_pane_fp

0xc116,	// (0x0003c3f1) list_single_graphic_heading_pane_fp_ParamLimits

0xc116,	// (0x0003c3f1) list_single_graphic_heading_pane_fp

0xc116,	// (0x0003c3f1) list_single_graphic_pane_fp_ParamLimits

0xc116,	// (0x0003c3f1) list_single_graphic_pane_fp

0xc116,	// (0x0003c3f1) list_single_heading_pane_fp_ParamLimits

0xc116,	// (0x0003c3f1) list_single_heading_pane_fp

0xc116,	// (0x0003c3f1) list_single_pane_fp_ParamLimits

0xc116,	// (0x0003c3f1) list_single_pane_fp

0xc12f,	// (0x0003c40a) list_single_pane_fp_g1_ParamLimits

0xc12f,	// (0x0003c40a) list_single_pane_fp_g1

0x4809,	// (0x00034ae4) list_single_pane_fp_g2_ParamLimits

0x4809,	// (0x00034ae4) list_single_pane_fp_g2

0x4815,	// (0x00034af0) list_single_pane_fp_g3_ParamLimits

0x4815,	// (0x00034af0) list_single_pane_fp_g3

0xc13b,	// (0x0003c416) list_single_pane_fp_g4_ParamLimits

0xc13b,	// (0x0003c416) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x0003fe52) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x0003fe52) list_single_pane_fp_g

0x4829,	// (0x00034b04) list_single_pane_fp_t1_ParamLimits

0x4829,	// (0x00034b04) list_single_pane_fp_t1

0x4840,	// (0x00034b1b) list_single_graphic_pane_fp_g1_ParamLimits

0x4840,	// (0x00034b1b) list_single_graphic_pane_fp_g1

0xc12f,	// (0x0003c40a) list_single_graphic_pane_fp_g2_ParamLimits

0xc12f,	// (0x0003c40a) list_single_graphic_pane_fp_g2

0x4809,	// (0x00034ae4) list_single_graphic_pane_fp_g3_ParamLimits

0x4809,	// (0x00034ae4) list_single_graphic_pane_fp_g3

0x4815,	// (0x00034af0) list_single_graphic_pane_fp_g4_ParamLimits

0x4815,	// (0x00034af0) list_single_graphic_pane_fp_g4

0xc13b,	// (0x0003c416) list_single_graphic_pane_fp_g5_ParamLimits

0xc13b,	// (0x0003c416) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x0003fe5b) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x0003fe5b) list_single_graphic_pane_fp_g

0x484c,	// (0x00034b27) list_single_graphic_pane_fp_t1_ParamLimits

0x484c,	// (0x00034b27) list_single_graphic_pane_fp_t1

0x4840,	// (0x00034b1b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4840,	// (0x00034b1b) list_single_graphic_heading_pane_fp_g1

0xc12f,	// (0x0003c40a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc12f,	// (0x0003c40a) list_single_graphic_heading_pane_fp_g2

0x4809,	// (0x00034ae4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4809,	// (0x00034ae4) list_single_graphic_heading_pane_fp_g3

0x4815,	// (0x00034af0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4815,	// (0x00034af0) list_single_graphic_heading_pane_fp_g4

0xc13b,	// (0x0003c416) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc13b,	// (0x0003c416) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0003fe5b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0003fe5b) list_single_graphic_heading_pane_fp_g

0x4862,	// (0x00034b3d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4862,	// (0x00034b3d) list_single_graphic_heading_pane_fp_t1

0x4878,	// (0x00034b53) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4878,	// (0x00034b53) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0003fe66) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0003fe66) list_single_graphic_heading_pane_fp_t

0x488a,	// (0x00034b65) list_single_cale_day_pane_fp_g1_ParamLimits

0x488a,	// (0x00034b65) list_single_cale_day_pane_fp_g1

0xc147,	// (0x0003c422) list_single_cale_day_pane_fp_g2_ParamLimits

0xc147,	// (0x0003c422) list_single_cale_day_pane_fp_g2

0x48c2,	// (0x00034b9d) list_single_cale_day_pane_fp_g3_ParamLimits

0x48c2,	// (0x00034b9d) list_single_cale_day_pane_fp_g3

0x48ea,	// (0x00034bc5) list_single_cale_day_pane_fp_g4_ParamLimits

0x48ea,	// (0x00034bc5) list_single_cale_day_pane_fp_g4

0x490e,	// (0x00034be9) list_single_cale_day_pane_fp_g5_ParamLimits

0x490e,	// (0x00034be9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x0003fe6b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x0003fe6b) list_single_cale_day_pane_fp_g

0x4b01,	// (0x00034ddc) list_single_cale_day_pane_fp_t1_ParamLimits

0x4b01,	// (0x00034ddc) list_single_cale_day_pane_fp_t1

0x4b27,	// (0x00034e02) list_single_cale_day_pane_fp_t2_ParamLimits

0x4b27,	// (0x00034e02) list_single_cale_day_pane_fp_t2

0x4b40,	// (0x00034e1b) list_single_cale_day_pane_fp_t3_ParamLimits

0x4b40,	// (0x00034e1b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x0003fe76) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x0003fe76) list_single_cale_day_pane_fp_t

0xc12f,	// (0x0003c40a) list_empty_pane_fp_g1_ParamLimits

0xc12f,	// (0x0003c40a) list_empty_pane_fp_g1

0x4b59,	// (0x00034e34) list_empty_pane_fp_t1

0x4b67,	// (0x00034e42) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x0003fe7d) list_empty_pane_fp_t

0xc12f,	// (0x0003c40a) list_single_heading_pane_fp_g1_ParamLimits

0xc12f,	// (0x0003c40a) list_single_heading_pane_fp_g1

0x4809,	// (0x00034ae4) list_single_heading_pane_fp_g2_ParamLimits

0x4809,	// (0x00034ae4) list_single_heading_pane_fp_g2

0x4815,	// (0x00034af0) list_single_heading_pane_fp_g3_ParamLimits

0x4815,	// (0x00034af0) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x0003fe82) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0003fe82) list_single_heading_pane_fp_g

0x4b75,	// (0x00034e50) list_single_heading_pane_fp_t1_ParamLimits

0x4b75,	// (0x00034e50) list_single_heading_pane_fp_t1

0x4b87,	// (0x00034e62) list_single_heading_pane_fp_t2_ParamLimits

0x4b87,	// (0x00034e62) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x0003fe89) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x0003fe89) list_single_heading_pane_fp_t

0x2993,	// (0x00032c6e) aid_size_cell_fast

0x232e,	// (0x00032609) soft_indicator_pane_cp1_t1

0x29d0,	// (0x00032cab) cell_app_pane_cp2_ParamLimits

0x29d0,	// (0x00032cab) cell_app_pane_cp2

0x76e2,	// (0x000379bd) fep_hwr_candidate_drop_down_list_pane

0x78d0,	// (0x00037bab) fep_hwr_candidate_pane_g3_ParamLimits

0x78d0,	// (0x00037bab) fep_hwr_candidate_pane_g3

0x2124,	// (0x000323ff) fep_hwr_candidate_pane_g4_ParamLimits

0x2124,	// (0x000323ff) fep_hwr_candidate_pane_g4

0x0002,

0xfb1d,	// (0x0003fdf8) fep_hwr_candidate_pane_g_ParamLimits

0xfb1d,	// (0x0003fdf8) fep_hwr_candidate_pane_g

0xbbfd,	// (0x0003bed8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbbfd,	// (0x0003bed8) fep_vkb_candidate_drop_down_list_pane

0xc025,	// (0x0003c300) fep_vkb_candidate_pane_g3

0xc02d,	// (0x0003c308) fep_vkb_candidate_pane_g4

0x0002,

0xfb4a,	// (0x0003fe25) fep_vkb_candidate_pane_g

0x793b,	// (0x00037c16) cell_hwr_candidate_pane_g1_ParamLimits

0x7949,	// (0x00037c24) cell_hwr_candidate_pane_g3_ParamLimits

0x7949,	// (0x00037c24) cell_hwr_candidate_pane_g3

0xda80,	// (0x0003dd5b) cell_hwr_candidate_pane_g4_ParamLimits

0xda80,	// (0x0003dd5b) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x0003fe44) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x0003fe44) cell_hwr_candidate_pane_g

0xc044,	// (0x0003c31f) cell_vkb_candidate_pane_g3_ParamLimits

0xc044,	// (0x0003c31f) cell_vkb_candidate_pane_g3

0xc05f,	// (0x0003c33a) cell_vkb_candidate_pane_g4_ParamLimits

0xc05f,	// (0x0003c33a) cell_vkb_candidate_pane_g4

0xc153,	// (0x0003c42e) cell_app_pane_cp2_g1_ParamLimits

0xc153,	// (0x0003c42e) cell_app_pane_cp2_g1

0xc171,	// (0x0003c44c) cell_app_pane_cp2_g2_ParamLimits

0xc171,	// (0x0003c44c) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x0003fe8e) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x0003fe8e) cell_app_pane_cp2_g

0xc17d,	// (0x0003c458) cell_app_pane_cp2_t1_ParamLimits

0xc17d,	// (0x0003c458) cell_app_pane_cp2_t1

0x282d,	// (0x00032b08) grid_highlight_pane_cp1_ParamLimits

0x282d,	// (0x00032b08) grid_highlight_pane_cp1

0x7988,	// (0x00037c63) cell_hwr_candidate_pane_cp1_ParamLimits

0x7988,	// (0x00037c63) cell_hwr_candidate_pane_cp1

0x793b,	// (0x00037c16) fep_hwr_candidate_drop_down_list_pane_g1

0x79ac,	// (0x00037c87) fep_hwr_candidate_drop_down_list_pane_g2

0x79b9,	// (0x00037c94) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0003fe93) fep_hwr_candidate_drop_down_list_pane_g

0x79c6,	// (0x00037ca1) fep_hwr_candidate_drop_down_list_scroll_pane

0x79cf,	// (0x00037caa) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x79cf,	// (0x00037caa) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x79dc,	// (0x00037cb7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x79dc,	// (0x00037cb7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x79e9,	// (0x00037cc4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x79e9,	// (0x00037cc4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x79f6,	// (0x00037cd1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x79f6,	// (0x00037cd1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7a11,	// (0x00037cec) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7a11,	// (0x00037cec) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7a2c,	// (0x00037d07) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7a2c,	// (0x00037d07) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7a47,	// (0x00037d22) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7a47,	// (0x00037d22) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7a62,	// (0x00037d3d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7a62,	// (0x00037d3d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0003fe9a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0003fe9a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc18f,	// (0x0003c46a) cell_vkb_candidate_pane_cp1_ParamLimits

0xc18f,	// (0x0003c46a) cell_vkb_candidate_pane_cp1

0xbd03,	// (0x0003bfde) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbd03,	// (0x0003bfde) fep_vkb_candidate_drop_down_list_pane_g1

0xc1b5,	// (0x0003c490) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc1b5,	// (0x0003c490) fep_vkb_candidate_drop_down_list_pane_g2

0xc1c2,	// (0x0003c49d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc1c2,	// (0x0003c49d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x0003feab) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd0,	// (0x0003feab) fep_vkb_candidate_drop_down_list_pane_g

0xc1cf,	// (0x0003c4aa) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc1cf,	// (0x0003c4aa) fep_vkb_candidate_drop_down_list_scroll_pane

0xc1dc,	// (0x0003c4b7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc1dc,	// (0x0003c4b7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc1e9,	// (0x0003c4c4) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc1e9,	// (0x0003c4c4) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc1f5,	// (0x0003c4d0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc1f5,	// (0x0003c4d0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc201,	// (0x0003c4dc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc201,	// (0x0003c4dc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc222,	// (0x0003c4fd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc222,	// (0x0003c4fd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc243,	// (0x0003c51e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc243,	// (0x0003c51e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc264,	// (0x0003c53f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc264,	// (0x0003c53f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc285,	// (0x0003c560) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc285,	// (0x0003c560) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x0003feb2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x0003feb2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5afd,	// (0x00035dd8) title_pane_g1_ParamLimits

0x5b0a,	// (0x00035de5) title_pane_g2_ParamLimits

0xf554,	// (0x0003f82f) title_pane_g_ParamLimits

0x2d07,	// (0x00032fe2) aid_call2_pane

0x2cff,	// (0x00032fda) aid_call_pane

0x2d0f,	// (0x00032fea) popup_clock_analogue_window_g1

0x2d0f,	// (0x00032fea) popup_clock_analogue_window_g2

0x6767,	// (0x00036a42) popup_clock_analogue_window_g3

0x6770,	// (0x00036a4b) popup_clock_analogue_window_g4

0xf475,	// (0x0003f750) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0003f9d4) popup_clock_analogue_window_g

0x6778,	// (0x00036a53) popup_clock_analogue_window_t1

0x67b9,	// (0x00036a94) clock_digital_number_pane_ParamLimits

0x67b9,	// (0x00036a94) clock_digital_number_pane

0x67c5,	// (0x00036aa0) clock_digital_number_pane_cp02_ParamLimits

0x67c5,	// (0x00036aa0) clock_digital_number_pane_cp02

0x67d1,	// (0x00036aac) clock_digital_number_pane_cp03_ParamLimits

0x67d1,	// (0x00036aac) clock_digital_number_pane_cp03

0x67dd,	// (0x00036ab8) clock_digital_number_pane_cp04_ParamLimits

0x67dd,	// (0x00036ab8) clock_digital_number_pane_cp04

0x67e9,	// (0x00036ac4) clock_digital_separator_pane_ParamLimits

0x67e9,	// (0x00036ac4) clock_digital_separator_pane

0x67f5,	// (0x00036ad0) popup_clock_digital_window_t1_ParamLimits

0x67f5,	// (0x00036ad0) popup_clock_digital_window_t1

0xf475,	// (0x0003f750) clock_digital_number_pane_g1

0xf475,	// (0x0003f750) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0003f9df) clock_digital_number_pane_g

0xf475,	// (0x0003f750) clock_digital_separator_pane_g1

0xf475,	// (0x0003f750) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0003f9df) clock_digital_separator_pane_g

0x8f55,	// (0x00039230) aid_fill_nsta_ParamLimits

0x90a5,	// (0x00039380) indicator_nsta_pane_ParamLimits

0x9236,	// (0x00039511) popup_clock_analogue_window

0x9236,	// (0x00039511) popup_clock_digital_window

0xf4d9,	// (0x0003f7b4) grid_indicator_nsta_pane_ParamLimits

0xb4b5,	// (0x0003b790) clock_nsta_pane_t2

0x0001,

0xfa9d,	// (0x0003fd78) clock_nsta_pane_t

0x66d0,	// (0x000369ab) aid_size_max_handle

0x66da,	// (0x000369b5) aid_size_min_handle

0x6e65,	// (0x00037140) editor_scroll_pane

0xc2a0,	// (0x0003c57b) ex_editor_pane

0x2959,	// (0x00032c34) scroll_pane_cp13

0x27cc,	// (0x00032aa7) scroll_pane_cp14

0x2d3e,	// (0x00033019) scroll_pane_cp36

0x679c,	// (0x00036a77) list_single_graphic_hl_pane_cp2_ParamLimits

0x679c,	// (0x00036a77) list_single_graphic_hl_pane_cp2

0x7576,	// (0x00037851) list_single_graphic_hl_pane_ParamLimits

0x7576,	// (0x00037851) list_single_graphic_hl_pane

0x4b9d,	// (0x00034e78) aid_size_min_hl_cp1

0xc2a8,	// (0x0003c583) list_highlight_pane_cp34_ParamLimits

0xc2a8,	// (0x0003c583) list_highlight_pane_cp34

0xc2b9,	// (0x0003c594) list_single_graphic_hl_pane_g1_ParamLimits

0xc2b9,	// (0x0003c594) list_single_graphic_hl_pane_g1

0x7a7d,	// (0x00037d58) list_single_graphic_hl_pane_g2_ParamLimits

0x7a7d,	// (0x00037d58) list_single_graphic_hl_pane_g2

0x7a7d,	// (0x00037d58) list_single_graphic_hl_pane_g3_ParamLimits

0x7a7d,	// (0x00037d58) list_single_graphic_hl_pane_g3

0x422e,	// (0x00034509) list_single_graphic_hl_pane_g4_ParamLimits

0x422e,	// (0x00034509) list_single_graphic_hl_pane_g4

0x7a89,	// (0x00037d64) list_single_graphic_hl_pane_g5_ParamLimits

0x7a89,	// (0x00037d64) list_single_graphic_hl_pane_g5

0x0004,

0xfbe8,	// (0x0003fec3) list_single_graphic_hl_pane_g_ParamLimits

0xfbe8,	// (0x0003fec3) list_single_graphic_hl_pane_g

0x7a9d,	// (0x00037d78) list_single_graphic_hl_pane_t1_ParamLimits

0x7a9d,	// (0x00037d78) list_single_graphic_hl_pane_t1

0xc2c6,	// (0x0003c5a1) aid_size_min_hl_cp2

0xc2cf,	// (0x0003c5aa) list_highlight_pane_cp34_cp2_ParamLimits

0xc2cf,	// (0x0003c5aa) list_highlight_pane_cp34_cp2

0xc2b9,	// (0x0003c594) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc2b9,	// (0x0003c594) list_single_graphic_hl_pane_g1_cp2

0xc2dc,	// (0x0003c5b7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc2dc,	// (0x0003c5b7) list_single_graphic_hl_pane_g2_cp2

0xc2e8,	// (0x0003c5c3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc2e8,	// (0x0003c5c3) list_single_graphic_hl_pane_g3_cp2

0x2eed,	// (0x000331c8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2eed,	// (0x000331c8) list_single_graphic_hl_pane_g4_cp2

0xc2f6,	// (0x0003c5d1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc2f6,	// (0x0003c5d1) list_single_graphic_hl_pane_g5_cp2

0x7045,	// (0x00037320) control_pane_g4_ParamLimits

0x7045,	// (0x00037320) control_pane_g4

0x891e,	// (0x00038bf9) bg_popup_sub_pane_cp10_ParamLimits

0xba92,	// (0x0003bd6d) list_choice_list_pane_ParamLimits

0xbaa1,	// (0x0003bd7c) scroll_pane_cp23

0x234b,	// (0x00032626) bg_popup_preview_window_pane_cp02_ParamLimits

0xc0d0,	// (0x0003c3ab) list_preview_fixed_pane_ParamLimits

0xc0e6,	// (0x0003c3c1) list_preview_fixed_pane_cp_ParamLimits

0xc0e6,	// (0x0003c3c1) list_preview_fixed_pane_cp

0xc0f2,	// (0x0003c3cd) popup_preview_fixed_window_g1_ParamLimits

0xc0f2,	// (0x0003c3cd) popup_preview_fixed_window_g1

0xc0fe,	// (0x0003c3d9) popup_preview_fixed_window_g2_ParamLimits

0xc0fe,	// (0x0003c3d9) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x0003fe4b) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x0003fe4b) popup_preview_fixed_window_g

0x65bf,	// (0x0003689a) aid_navi_side_left_pane_ParamLimits

0x65d4,	// (0x000368af) aid_navi_side_right_pane_ParamLimits

0x65ec,	// (0x000368c7) navi_icon_pane_stacon_ParamLimits

0x6600,	// (0x000368db) navi_navi_pane_stacon_ParamLimits

0x65ec,	// (0x000368c7) navi_text_pane_stacon_ParamLimits

0xf46b,	// (0x0003f746) main_text_info_pane

0xc320,	// (0x0003c5fb) listscroll_text_info_pane

0xc328,	// (0x0003c603) list_text_info_pane_ParamLimits

0xc328,	// (0x0003c603) list_text_info_pane

0xc337,	// (0x0003c612) scroll_pane_cp24_ParamLimits

0xc337,	// (0x0003c612) scroll_pane_cp24

0xc355,	// (0x0003c630) list_text_info_pane_t1_ParamLimits

0xc355,	// (0x0003c630) list_text_info_pane_t1

0x8968,	// (0x00038c43) popup_fast_swap2_window_ParamLimits

0x8968,	// (0x00038c43) popup_fast_swap2_window

0xc37a,	// (0x0003c655) aid_size_cell_fast2

0xf46b,	// (0x0003f746) bg_popup_window_pane_cp17

0x9893,	// (0x00039b6e) heading_pane_cp2

0x2551,	// (0x0003282c) listscroll_fast2_pane

0xc384,	// (0x0003c65f) grid_fast2_pane

0xc38e,	// (0x0003c669) listscroll_fast2_pane_g1

0xc398,	// (0x0003c673) listscroll_fast2_pane_g2

0x0001,

0xfbf3,	// (0x0003fece) listscroll_fast2_pane_g

0x2959,	// (0x00032c34) scroll_pane_cp26

0xc3a2,	// (0x0003c67d) cell_fast2_pane_ParamLimits

0xc3a2,	// (0x0003c67d) cell_fast2_pane

0xc3b9,	// (0x0003c694) cell_fast2_pane_g1

0xc3c2,	// (0x0003c69d) cell_fast2_pane_g2

0xc3cb,	// (0x0003c6a6) cell_fast2_pane_g3

0x0002,

0xfbf8,	// (0x0003fed3) cell_fast2_pane_g

0x2593,	// (0x0003286e) grid_highlight_pane_cp9

0x25a8,	// (0x00032883) main_eswt_pane_ParamLimits

0x25a8,	// (0x00032883) main_eswt_pane

0xc34c,	// (0x0003c627) list_single_text_info_pane

0xc3d3,	// (0x0003c6ae) eswt_ctrl_button_pane

0xc3d3,	// (0x0003c6ae) eswt_ctrl_canvas_pane

0xc3db,	// (0x0003c6b6) eswt_ctrl_combo_pane

0xc3d3,	// (0x0003c6ae) eswt_ctrl_default_pane

0xc3d3,	// (0x0003c6ae) eswt_ctrl_label_pane

0xc3e3,	// (0x0003c6be) eswt_ctrl_wait_pane

0xc3eb,	// (0x0003c6c6) eswt_shell_pane

0xf46b,	// (0x0003f746) listscroll_eswt_app_pane

0xc40b,	// (0x0003c6e6) popup_eswt_tasktip_window_ParamLimits

0xc40b,	// (0x0003c6e6) popup_eswt_tasktip_window

0x94d3,	// (0x000397ae) bg_popup_window_pane_cp18

0xc41c,	// (0x0003c6f7) eswt_control_pane_g1_ParamLimits

0xc41c,	// (0x0003c6f7) eswt_control_pane_g1

0xc429,	// (0x0003c704) eswt_control_pane_g2_ParamLimits

0xc429,	// (0x0003c704) eswt_control_pane_g2

0xc436,	// (0x0003c711) eswt_control_pane_g3_ParamLimits

0xc436,	// (0x0003c711) eswt_control_pane_g3

0xc443,	// (0x0003c71e) eswt_control_pane_g4_ParamLimits

0xc443,	// (0x0003c71e) eswt_control_pane_g4

0x0003,

0xfbff,	// (0x0003feda) eswt_control_pane_g_ParamLimits

0xfbff,	// (0x0003feda) eswt_control_pane_g

0x282d,	// (0x00032b08) bg_button_pane_ParamLimits

0x282d,	// (0x00032b08) bg_button_pane

0x25a8,	// (0x00032883) common_borders_pane_copy2_ParamLimits

0x25a8,	// (0x00032883) common_borders_pane_copy2

0xc450,	// (0x0003c72b) control_button_pane_g1_ParamLimits

0xc450,	// (0x0003c72b) control_button_pane_g1

0xc45c,	// (0x0003c737) control_button_pane_g2_ParamLimits

0xc45c,	// (0x0003c737) control_button_pane_g2

0xc468,	// (0x0003c743) control_button_pane_g3_ParamLimits

0xc468,	// (0x0003c743) control_button_pane_g3

0x0002,

0xfc08,	// (0x0003fee3) control_button_pane_g_ParamLimits

0xfc08,	// (0x0003fee3) control_button_pane_g

0xc47c,	// (0x0003c757) control_button_pane_t1

0xc48a,	// (0x0003c765) control_button_pane_t2

0x0001,

0xfc0f,	// (0x0003feea) control_button_pane_t

0x945f,	// (0x0003973a) bg_button_pane_g1

0x946f,	// (0x0003974a) bg_button_pane_g2

0x9467,	// (0x00039742) bg_button_pane_g3

0x947f,	// (0x0003975a) bg_button_pane_g4

0x9477,	// (0x00039752) bg_button_pane_g5

0x9487,	// (0x00039762) bg_button_pane_g6

0x948f,	// (0x0003976a) bg_button_pane_g7

0x949f,	// (0x0003977a) bg_button_pane_g8

0x9497,	// (0x00039772) bg_button_pane_g9

0x0008,

0xf867,	// (0x0003fb42) bg_button_pane_g

0xba4d,	// (0x0003bd28) common_borders_pane_ParamLimits

0xba4d,	// (0x0003bd28) common_borders_pane

0xc41c,	// (0x0003c6f7) eswt_control_pane_g1_copy1_ParamLimits

0xc41c,	// (0x0003c6f7) eswt_control_pane_g1_copy1

0xc429,	// (0x0003c704) eswt_control_pane_g2_copy1_ParamLimits

0xc429,	// (0x0003c704) eswt_control_pane_g2_copy1

0xc436,	// (0x0003c711) eswt_control_pane_g3_copy1_ParamLimits

0xc436,	// (0x0003c711) eswt_control_pane_g3_copy1

0xc443,	// (0x0003c71e) eswt_control_pane_g4_copy1_ParamLimits

0xc443,	// (0x0003c71e) eswt_control_pane_g4_copy1

0xba88,	// (0x0003bd63) bg_eswt_ctrl_canvas_pane_g1

0xba4d,	// (0x0003bd28) common_borders_pane_cp2_ParamLimits

0xba4d,	// (0x0003bd28) common_borders_pane_cp2

0xba4d,	// (0x0003bd28) common_borders_pane_cp3_ParamLimits

0xba4d,	// (0x0003bd28) common_borders_pane_cp3

0xc498,	// (0x0003c773) separator_horizontal_pane

0xc4a0,	// (0x0003c77b) separator_vertical_pane

0xc41c,	// (0x0003c6f7) eswt_control_pane_g1_copy2_ParamLimits

0xc41c,	// (0x0003c6f7) eswt_control_pane_g1_copy2

0xc429,	// (0x0003c704) eswt_control_pane_g2_copy2_ParamLimits

0xc429,	// (0x0003c704) eswt_control_pane_g2_copy2

0xc436,	// (0x0003c711) eswt_control_pane_g3_copy2_ParamLimits

0xc436,	// (0x0003c711) eswt_control_pane_g3_copy2

0xc443,	// (0x0003c71e) eswt_control_pane_g4_copy2_ParamLimits

0xc443,	// (0x0003c71e) eswt_control_pane_g4_copy2

0xf46b,	// (0x0003f746) common_borders_pane_cp4

0xc4a9,	// (0x0003c784) separator_horizontal_pane_g1

0xc4b2,	// (0x0003c78d) separator_horizontal_pane_g2

0xc4bb,	// (0x0003c796) separator_horizontal_pane_g3

0x0002,

0xfc14,	// (0x0003feef) separator_horizontal_pane_g

0xc41c,	// (0x0003c6f7) eswt_control_pane_g1_copy3_ParamLimits

0xc41c,	// (0x0003c6f7) eswt_control_pane_g1_copy3

0xc429,	// (0x0003c704) eswt_control_pane_g2_copy3_ParamLimits

0xc429,	// (0x0003c704) eswt_control_pane_g2_copy3

0xc436,	// (0x0003c711) eswt_control_pane_g3_copy3_ParamLimits

0xc436,	// (0x0003c711) eswt_control_pane_g3_copy3

0xc443,	// (0x0003c71e) eswt_control_pane_g4_copy3_ParamLimits

0xc443,	// (0x0003c71e) eswt_control_pane_g4_copy3

0xf46b,	// (0x0003f746) common_borders_pane_cp5

0xc4c4,	// (0x0003c79f) separator_vertical_pane_g1

0xc4cd,	// (0x0003c7a8) separator_vertical_pane_g2

0xc4d6,	// (0x0003c7b1) separator_vertical_pane_g3

0x0002,

0xfc1b,	// (0x0003fef6) separator_vertical_pane_g

0xc41c,	// (0x0003c6f7) eswt_control_pane_g1_copy4_ParamLimits

0xc41c,	// (0x0003c6f7) eswt_control_pane_g1_copy4

0xc429,	// (0x0003c704) eswt_control_pane_g2_copy4_ParamLimits

0xc429,	// (0x0003c704) eswt_control_pane_g2_copy4

0xc436,	// (0x0003c711) eswt_control_pane_g3_copy4_ParamLimits

0xc436,	// (0x0003c711) eswt_control_pane_g3_copy4

0xc443,	// (0x0003c71e) eswt_control_pane_g4_copy4_ParamLimits

0xc443,	// (0x0003c71e) eswt_control_pane_g4_copy4

0xc4df,	// (0x0003c7ba) eswt_ctrl_combo_button_pane

0xc4e7,	// (0x0003c7c2) eswt_ctrl_input_pane

0xc4ef,	// (0x0003c7ca) popup_choice_list_window_cp70

0xc4f7,	// (0x0003c7d2) eswt_ctrl_input_pane_t1

0xf46b,	// (0x0003f746) input_focus_pane_cp70

0xba4d,	// (0x0003bd28) bg_button_pane_cp70_ParamLimits

0xba4d,	// (0x0003bd28) bg_button_pane_cp70

0xc505,	// (0x0003c7e0) eswt_ctrl_combo_button_pane_g1

0xc50d,	// (0x0003c7e8) wait_bar_pane_cp70

0x94d3,	// (0x000397ae) bg_popup_window_pane_cp70_ParamLimits

0x94d3,	// (0x000397ae) bg_popup_window_pane_cp70

0xc515,	// (0x0003c7f0) popup_eswt_tasktip_window_t1

0xc52b,	// (0x0003c806) wait_bar_pane_cp71_ParamLimits

0xc52b,	// (0x0003c806) wait_bar_pane_cp71

0xc537,	// (0x0003c812) grid_eswt_app_pane

0x2ba7,	// (0x00032e82) scroll_pane_cp70

0xc540,	// (0x0003c81b) cell_eswt_app_pane_ParamLimits

0xc540,	// (0x0003c81b) cell_eswt_app_pane

0xc572,	// (0x0003c84d) cell_eswt_app_pane_g1_ParamLimits

0xc572,	// (0x0003c84d) cell_eswt_app_pane_g1

0xc5a1,	// (0x0003c87c) cell_eswt_app_pane_g2_ParamLimits

0xc5a1,	// (0x0003c87c) cell_eswt_app_pane_g2

0x0001,

0xfc22,	// (0x0003fefd) cell_eswt_app_pane_g_ParamLimits

0xfc22,	// (0x0003fefd) cell_eswt_app_pane_g

0xc5ca,	// (0x0003c8a5) cell_eswt_app_pane_t1_ParamLimits

0xc5ca,	// (0x0003c8a5) cell_eswt_app_pane_t1

0xc5fc,	// (0x0003c8d7) grid_highlight_pane_cp70_ParamLimits

0xc5fc,	// (0x0003c8d7) grid_highlight_pane_cp70

0x6d36,	// (0x00037011) set_content_pane_g1

0x8840,	// (0x00038b1b) status_small_volume_pane

0x7ab3,	// (0x00037d8e) status_small_volume_pane_g1

0x7abb,	// (0x00037d96) volume_small2_pane

0x7ac4,	// (0x00037d9f) volume_small2_pane_g1

0x7acd,	// (0x00037da8) volume_small2_pane_g2

0x7ad6,	// (0x00037db1) volume_small2_pane_g3

0x7adf,	// (0x00037dba) volume_small2_pane_g4

0x7ae8,	// (0x00037dc3) volume_small2_pane_g5

0x7af1,	// (0x00037dcc) volume_small2_pane_g6

0x7afa,	// (0x00037dd5) volume_small2_pane_g7

0x7b03,	// (0x00037dde) volume_small2_pane_g8

0x7b0c,	// (0x00037de7) volume_small2_pane_g9

0x7b15,	// (0x00037df0) volume_small2_pane_g10

0x0009,

0xfc27,	// (0x0003ff02) volume_small2_pane_g

0xbe57,	// (0x0003c132) fep_vkb_top_text_pane_g1_ParamLimits

0xbe72,	// (0x0003c14d) fep_vkb_top_text_pane_t1_ParamLimits

0xc10a,	// (0x0003c3e5) popup_preview_fixed_window_g3_ParamLimits

0xc10a,	// (0x0003c3e5) popup_preview_fixed_window_g3

0x8e79,	// (0x00039154) popup_toolbar_trans_pane

0xa818,	// (0x0003aaf3) aid_height_set_list_ParamLimits

0xa829,	// (0x0003ab04) aid_size_parent_ParamLimits

0x891e,	// (0x00038bf9) list_highlight_pane_cp2_ParamLimits

0x6d36,	// (0x00037011) set_content_pane_g1_ParamLimits

0xaa5c,	// (0x0003ad37) list_single_image_pane_ParamLimits

0xaa5c,	// (0x0003ad37) list_single_image_pane

0xc608,	// (0x0003c8e3) aid_size_cell_image_ParamLimits

0xc608,	// (0x0003c8e3) aid_size_cell_image

0xc615,	// (0x0003c8f0) grid_single_image_pane_ParamLimits

0xc615,	// (0x0003c8f0) grid_single_image_pane

0x283b,	// (0x00032b16) list_single_image_pane_g1_ParamLimits

0x283b,	// (0x00032b16) list_single_image_pane_g1

0x2847,	// (0x00032b22) list_single_image_pane_g2_ParamLimits

0x2847,	// (0x00032b22) list_single_image_pane_g2

0x0001,

0xfc3c,	// (0x0003ff17) list_single_image_pane_g_ParamLimits

0xfc3c,	// (0x0003ff17) list_single_image_pane_g

0xc623,	// (0x0003c8fe) list_single_image_pane_t1_ParamLimits

0xc623,	// (0x0003c8fe) list_single_image_pane_t1

0xc639,	// (0x0003c914) cell_image_list_pane_ParamLimits

0xc639,	// (0x0003c914) cell_image_list_pane

0xc64f,	// (0x0003c92a) cell_image_list_pane_g1

0xc658,	// (0x0003c933) cell_image_list_pane_g2

0x0001,

0xfc41,	// (0x0003ff1c) cell_image_list_pane_g

0xc661,	// (0x0003c93c) aid_size_cell_tb_trans_pane

0x282d,	// (0x00032b08) bg_tb_trans_pane

0xc673,	// (0x0003c94e) grid_tb_trans_pane

0x945f,	// (0x0003973a) bg_tb_trans_pane_g1

0x946f,	// (0x0003974a) bg_tb_trans_pane_g2

0x9467,	// (0x00039742) bg_tb_trans_pane_g3

0x947f,	// (0x0003975a) bg_tb_trans_pane_g4

0x9477,	// (0x00039752) bg_tb_trans_pane_g5

0x949f,	// (0x0003977a) bg_tb_trans_pane_g6

0x9497,	// (0x00039772) bg_tb_trans_pane_g7

0x9487,	// (0x00039762) bg_tb_trans_pane_g8

0x948f,	// (0x0003976a) bg_tb_trans_pane_g9

0x0008,

0xfc46,	// (0x0003ff21) bg_tb_trans_pane_g

0xc687,	// (0x0003c962) cell_toolbar_trans_pane_ParamLimits

0xc687,	// (0x0003c962) cell_toolbar_trans_pane

0xba88,	// (0x0003bd63) cell_toolbar_trans_pane_g1

0xb6ac,	// (0x0003b987) list_form2_midp_pane_t1

0xb6ba,	// (0x0003b995) list_form2_midp_pane_t2

0x0001,

0xfae3,	// (0x0003fdbe) list_form2_midp_pane_t

0xb6c8,	// (0x0003b9a3) scroll_pane_cp51_ParamLimits

0xb88f,	// (0x0003bb6a) form2_midp_wait_pane_g1

0xb898,	// (0x0003bb73) form2_midp_wait_pane_g2

0xb8a1,	// (0x0003bb7c) form2_midp_wait_pane_g3

0x0002,

0xfaf8,	// (0x0003fdd3) form2_midp_wait_pane_g

0xf4d9,	// (0x0003f7b4) list_highlight_pane_cp21_ParamLimits

0xb8e5,	// (0x0003bbc0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb8f4,	// (0x0003bbcf) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaa15,	// (0x0003acf0) list_single_2graphic_im_pane_ParamLimits

0xaa15,	// (0x0003acf0) list_single_2graphic_im_pane

0xc6ad,	// (0x0003c988) list_single_2graphic_im_pane_g1_ParamLimits

0xc6ad,	// (0x0003c988) list_single_2graphic_im_pane_g1

0xc6be,	// (0x0003c999) list_single_2graphic_im_pane_g2_ParamLimits

0xc6be,	// (0x0003c999) list_single_2graphic_im_pane_g2

0xc6ca,	// (0x0003c9a5) list_single_2graphic_im_pane_g3_ParamLimits

0xc6ca,	// (0x0003c9a5) list_single_2graphic_im_pane_g3

0x0003,

0xfc59,	// (0x0003ff34) list_single_2graphic_im_pane_g_ParamLimits

0xfc59,	// (0x0003ff34) list_single_2graphic_im_pane_g

0xc6ea,	// (0x0003c9c5) list_single_2graphic_im_pane_t1_ParamLimits

0xc6ea,	// (0x0003c9c5) list_single_2graphic_im_pane_t1

0xc116,	// (0x0003c3f1) list_single_graphic_2heading_pane_fp_ParamLimits

0xc116,	// (0x0003c3f1) list_single_graphic_2heading_pane_fp

0x4840,	// (0x00034b1b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4840,	// (0x00034b1b) list_single_graphic_2heading_pane_fp_g1

0xc12f,	// (0x0003c40a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc12f,	// (0x0003c40a) list_single_graphic_2heading_pane_fp_g2

0x4809,	// (0x00034ae4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4809,	// (0x00034ae4) list_single_graphic_2heading_pane_fp_g3

0x4815,	// (0x00034af0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4815,	// (0x00034af0) list_single_graphic_2heading_pane_fp_g4

0xc13b,	// (0x0003c416) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc13b,	// (0x0003c416) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0003fe5b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0003fe5b) list_single_graphic_2heading_pane_fp_g

0x4ba6,	// (0x00034e81) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4ba6,	// (0x00034e81) list_single_graphic_2heading_pane_fp_t1

0x4878,	// (0x00034b53) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4878,	// (0x00034b53) list_single_graphic_2heading_pane_fp_t2

0x4bbc,	// (0x00034e97) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4bbc,	// (0x00034e97) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc62,	// (0x0003ff3d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc62,	// (0x0003ff3d) list_single_graphic_2heading_pane_fp_t

0xbb19,	// (0x0003bdf4) fep_hwr_write_pane_g5_ParamLimits

0xbb19,	// (0x0003bdf4) fep_hwr_write_pane_g5

0xbb25,	// (0x0003be00) fep_hwr_write_pane_g6_ParamLimits

0xbb25,	// (0x0003be00) fep_hwr_write_pane_g6

0xc3eb,	// (0x0003c6c6) eswt_shell_pane_ParamLimits

0x94d3,	// (0x000397ae) bg_popup_window_pane_cp18_ParamLimits

0xa76f,	// (0x0003aa4a) heading_pane_cp70

0xc515,	// (0x0003c7f0) popup_eswt_tasktip_window_t1_ParamLimits

0x8fac,	// (0x00039287) aid_touch_tab_arrow_left

0x8fbb,	// (0x00039296) aid_touch_tab_arrow_right

0xf489,	// (0x0003f764) title_pane_g3_ParamLimits

0xf489,	// (0x0003f764) title_pane_g3

0x27ec,	// (0x00032ac7) set_value_pane_g1

0x8e79,	// (0x00039154) popup_toolbar_trans_pane_ParamLimits

0xc661,	// (0x0003c93c) aid_size_cell_tb_trans_pane_ParamLimits

0x282d,	// (0x00032b08) bg_tb_trans_pane_ParamLimits

0xc673,	// (0x0003c94e) grid_tb_trans_pane_ParamLimits

0x234b,	// (0x00032626) cont_note_pane_ParamLimits

0x234b,	// (0x00032626) cont_note_pane

0x25a8,	// (0x00032883) cont_snote2_single_text_pane_ParamLimits

0x25a8,	// (0x00032883) cont_snote2_single_text_pane

0x25a8,	// (0x00032883) cont_snote2_single_graphic_pane_ParamLimits

0x25a8,	// (0x00032883) cont_snote2_single_graphic_pane

0x9aaf,	// (0x00039d8a) cont_note_wait_pane_ParamLimits

0x9aaf,	// (0x00039d8a) cont_note_wait_pane

0x9aaf,	// (0x00039d8a) cont_note_image_pane_ParamLimits

0x9aaf,	// (0x00039d8a) cont_note_image_pane

0xc71b,	// (0x0003c9f6) popup_note2_window_g1_ParamLimits

0xc71b,	// (0x0003c9f6) popup_note2_window_g1

0xc74c,	// (0x0003ca27) popup_note2_window_t1_ParamLimits

0xc74c,	// (0x0003ca27) popup_note2_window_t1

0xc791,	// (0x0003ca6c) popup_note2_window_t2_ParamLimits

0xc791,	// (0x0003ca6c) popup_note2_window_t2

0xc7d6,	// (0x0003cab1) popup_note2_window_t3_ParamLimits

0xc7d6,	// (0x0003cab1) popup_note2_window_t3

0xc81b,	// (0x0003caf6) popup_note2_window_t4_ParamLimits

0xc81b,	// (0x0003caf6) popup_note2_window_t4

0x23cf,	// (0x000326aa) popup_note2_window_t5_ParamLimits

0x23cf,	// (0x000326aa) popup_note2_window_t5

0x0004,

0xfc6e,	// (0x0003ff49) popup_note2_window_t_ParamLimits

0xfc6e,	// (0x0003ff49) popup_note2_window_t

0xc84a,	// (0x0003cb25) popup_note2_image_window_g1_ParamLimits

0xc84a,	// (0x0003cb25) popup_note2_image_window_g1

0xc856,	// (0x0003cb31) popup_note2_image_window_g2_ParamLimits

0xc856,	// (0x0003cb31) popup_note2_image_window_g2

0x0001,

0xfc79,	// (0x0003ff54) popup_note2_image_window_g_ParamLimits

0xfc79,	// (0x0003ff54) popup_note2_image_window_g

0xc868,	// (0x0003cb43) popup_note2_image_window_t1_ParamLimits

0xc868,	// (0x0003cb43) popup_note2_image_window_t1

0xc880,	// (0x0003cb5b) popup_note2_image_window_t2_ParamLimits

0xc880,	// (0x0003cb5b) popup_note2_image_window_t2

0xc898,	// (0x0003cb73) popup_note2_image_window_t3_ParamLimits

0xc898,	// (0x0003cb73) popup_note2_image_window_t3

0x0002,

0xfc7e,	// (0x0003ff59) popup_note2_image_window_t_ParamLimits

0xfc7e,	// (0x0003ff59) popup_note2_image_window_t

0x9abd,	// (0x00039d98) popup_note2_wait_window_g1_ParamLimits

0x9abd,	// (0x00039d98) popup_note2_wait_window_g1

0xc8b4,	// (0x0003cb8f) popup_note2_wait_window_g2_ParamLimits

0xc8b4,	// (0x0003cb8f) popup_note2_wait_window_g2

0x9ad5,	// (0x00039db0) popup_note2_wait_window_g3_ParamLimits

0x9ad5,	// (0x00039db0) popup_note2_wait_window_g3

0x0002,

0xfc85,	// (0x0003ff60) popup_note2_wait_window_g_ParamLimits

0xfc85,	// (0x0003ff60) popup_note2_wait_window_g

0xc8c0,	// (0x0003cb9b) popup_note2_wait_window_t1_ParamLimits

0xc8c0,	// (0x0003cb9b) popup_note2_wait_window_t1

0xc8de,	// (0x0003cbb9) popup_note2_wait_window_t2_ParamLimits

0xc8de,	// (0x0003cbb9) popup_note2_wait_window_t2

0xc8fc,	// (0x0003cbd7) popup_note2_wait_window_t3_ParamLimits

0xc8fc,	// (0x0003cbd7) popup_note2_wait_window_t3

0xc90e,	// (0x0003cbe9) popup_note2_wait_window_t4_ParamLimits

0xc90e,	// (0x0003cbe9) popup_note2_wait_window_t4

0x0003,

0xfc8c,	// (0x0003ff67) popup_note2_wait_window_t_ParamLimits

0xfc8c,	// (0x0003ff67) popup_note2_wait_window_t

0xc920,	// (0x0003cbfb) wait_bar2_pane_ParamLimits

0xc920,	// (0x0003cbfb) wait_bar2_pane

0xc938,	// (0x0003cc13) popup_snote2_single_text_window_g1_ParamLimits

0xc938,	// (0x0003cc13) popup_snote2_single_text_window_g1

0xc960,	// (0x0003cc3b) popup_snote2_single_text_window_t1_ParamLimits

0xc960,	// (0x0003cc3b) popup_snote2_single_text_window_t1

0xc9ac,	// (0x0003cc87) popup_snote2_single_text_window_t2_ParamLimits

0xc9ac,	// (0x0003cc87) popup_snote2_single_text_window_t2

0xc9f8,	// (0x0003ccd3) popup_snote2_single_text_window_t3_ParamLimits

0xc9f8,	// (0x0003ccd3) popup_snote2_single_text_window_t3

0xca39,	// (0x0003cd14) popup_snote2_single_text_window_t4_ParamLimits

0xca39,	// (0x0003cd14) popup_snote2_single_text_window_t4

0xca6f,	// (0x0003cd4a) popup_snote2_single_text_window_t5_ParamLimits

0xca6f,	// (0x0003cd4a) popup_snote2_single_text_window_t5

0x0004,

0xfc95,	// (0x0003ff70) popup_snote2_single_text_window_t_ParamLimits

0xfc95,	// (0x0003ff70) popup_snote2_single_text_window_t

0xca9a,	// (0x0003cd75) popup_snote2_single_graphic_window_g1_ParamLimits

0xca9a,	// (0x0003cd75) popup_snote2_single_graphic_window_g1

0xcac2,	// (0x0003cd9d) popup_snote2_single_graphic_window_g2_ParamLimits

0xcac2,	// (0x0003cd9d) popup_snote2_single_graphic_window_g2

0x0001,

0xfca0,	// (0x0003ff7b) popup_snote2_single_graphic_window_g_ParamLimits

0xfca0,	// (0x0003ff7b) popup_snote2_single_graphic_window_g

0xcaea,	// (0x0003cdc5) popup_snote2_single_graphic_window_t1_ParamLimits

0xcaea,	// (0x0003cdc5) popup_snote2_single_graphic_window_t1

0xcb36,	// (0x0003ce11) popup_snote2_single_graphic_window_t2_ParamLimits

0xcb36,	// (0x0003ce11) popup_snote2_single_graphic_window_t2

0xc9f8,	// (0x0003ccd3) popup_snote2_single_graphic_window_t3_ParamLimits

0xc9f8,	// (0x0003ccd3) popup_snote2_single_graphic_window_t3

0xca39,	// (0x0003cd14) popup_snote2_single_graphic_window_t4_ParamLimits

0xca39,	// (0x0003cd14) popup_snote2_single_graphic_window_t4

0xca6f,	// (0x0003cd4a) popup_snote2_single_graphic_window_t5_ParamLimits

0xca6f,	// (0x0003cd4a) popup_snote2_single_graphic_window_t5

0x0004,

0xfca5,	// (0x0003ff80) popup_snote2_single_graphic_window_t_ParamLimits

0xfca5,	// (0x0003ff80) popup_snote2_single_graphic_window_t

0xb578,	// (0x0003b853) clock_nsta_pane_cp2_t1

0xb578,	// (0x0003b853) clock_nsta_pane_cp2_t2

0x0001,

0xfab9,	// (0x0003fd94) clock_nsta_pane_cp2_t

0x432a,	// (0x00034605) form_field_data_wide_pane_g1_ParamLimits

0x283b,	// (0x00032b16) form_field_data_wide_pane_g2_ParamLimits

0x283b,	// (0x00032b16) form_field_data_wide_pane_g2

0x2847,	// (0x00032b22) form_field_data_wide_pane_g3_ParamLimits

0x2847,	// (0x00032b22) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0003f957) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0003f957) form_field_data_wide_pane_g

0xb451,	// (0x0003b72c) grid_touch_3_pane_ParamLimits

0xb451,	// (0x0003b72c) grid_touch_3_pane

0xcb82,	// (0x0003ce5d) cell_touch_3_pane_ParamLimits

0xcb82,	// (0x0003ce5d) cell_touch_3_pane

0xba88,	// (0x0003bd63) cell_touch_3_pane_g1

0xba88,	// (0x0003bd63) cell_touch_3_pane_g2

0x0001,

0xfb3e,	// (0x0003fe19) cell_touch_3_pane_g

0x2401,	// (0x000326dc) cont_query_data_pane

0x2409,	// (0x000326e4) cont_query_data_pane_cp1

0xcbb5,	// (0x0003ce90) button_value_adjust_pane_cp7

0xcbbd,	// (0x0003ce98) query_popup_pane_cp3

0x2d6f,	// (0x0003304a) bg_popup_sub_pane_cp22_ParamLimits

0x6876,	// (0x00036b51) navi_navi_volume_pane_cp2

0x6891,	// (0x00036b6c) popup_side_volume_key_window_g2

0x68a0,	// (0x00036b7b) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0003f9ed) popup_side_volume_key_window_g

0x68bd,	// (0x00036b98) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0003f9f4) popup_side_volume_key_window_t

0x6bfc,	// (0x00036ed7) popup_side_volume_key_window_ParamLimits

0x5ffb,	// (0x000362d6) list_double_graphic_pane_g4_ParamLimits

0x5ffb,	// (0x000362d6) list_double_graphic_pane_g4

0xaa44,	// (0x0003ad1f) list_single_2heading_msg_pane_ParamLimits

0xaa44,	// (0x0003ad1f) list_single_2heading_msg_pane

0x7b1e,	// (0x00037df9) list_single_2heading_msg_pane_g1_ParamLimits

0x7b1e,	// (0x00037df9) list_single_2heading_msg_pane_g1

0x4932,	// (0x00034c0d) list_single_2heading_msg_pane_g2_ParamLimits

0x4932,	// (0x00034c0d) list_single_2heading_msg_pane_g2

0x7b2a,	// (0x00037e05) list_single_2heading_msg_pane_g3_ParamLimits

0x7b2a,	// (0x00037e05) list_single_2heading_msg_pane_g3

0x7b36,	// (0x00037e11) list_single_2heading_msg_pane_g4_ParamLimits

0x7b36,	// (0x00037e11) list_single_2heading_msg_pane_g4

0x0003,

0xfcb0,	// (0x0003ff8b) list_single_2heading_msg_pane_g_ParamLimits

0xfcb0,	// (0x0003ff8b) list_single_2heading_msg_pane_g

0x7b4e,	// (0x00037e29) list_single_2heading_msg_pane_t1_ParamLimits

0x7b4e,	// (0x00037e29) list_single_2heading_msg_pane_t1

0x7b76,	// (0x00037e51) list_single_2heading_msg_pane_t2_ParamLimits

0x7b76,	// (0x00037e51) list_single_2heading_msg_pane_t2

0x7baa,	// (0x00037e85) list_single_2heading_msg_pane_t3_ParamLimits

0x7baa,	// (0x00037e85) list_single_2heading_msg_pane_t3

0x4bdc,	// (0x00034eb7) list_single_2heading_msg_pane_t4_ParamLimits

0x4bdc,	// (0x00034eb7) list_single_2heading_msg_pane_t4

0x0003,

0xfcb9,	// (0x0003ff94) list_single_2heading_msg_pane_t_ParamLimits

0xfcb9,	// (0x0003ff94) list_single_2heading_msg_pane_t

0xf495,	// (0x0003f770) title_pane_g4_ParamLimits

0xf495,	// (0x0003f770) title_pane_g4

0x650f,	// (0x000367ea) title_pane_stacon_g3_ParamLimits

0x650f,	// (0x000367ea) title_pane_stacon_g3

0xc6de,	// (0x0003c9b9) list_single_2graphic_im_pane_g4_ParamLimits

0xc6de,	// (0x0003c9b9) list_single_2graphic_im_pane_g4

0xa51f,	// (0x0003a7fa) popup_side_volume_key_window_cp

0xad6c,	// (0x0003b047) main_idle_act2_pane_t1

0x7171,	// (0x0003744c) toolbar_button_pane_g10

0x5e70,	// (0x0003614b) popup_toolbar_window_cp1

0xb569,	// (0x0003b844) clock_nsta_pane_cp_t1

0xb569,	// (0x0003b844) clock_nsta_pane_cp_t2

0x0001,

0xfab4,	// (0x0003fd8f) clock_nsta_pane_cp_t

0x6876,	// (0x00036b51) navi_navi_volume_pane_cp2_ParamLimits

0x6885,	// (0x00036b60) popup_side_volume_key_window_g1_ParamLimits

0x6891,	// (0x00036b6c) popup_side_volume_key_window_g2_ParamLimits

0x68a0,	// (0x00036b7b) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0003f9ed) popup_side_volume_key_window_g_ParamLimits

0x76ce,	// (0x000379a9) fep_hwr_aid_pane

0x7777,	// (0x00037a52) bg_fep_hwr_top_pane_g4_ParamLimits

0xbae9,	// (0x0003bdc4) fep_hwr_top_pane_g1_ParamLimits

0xbafb,	// (0x0003bdd6) fep_hwr_top_pane_g2_ParamLimits

0x7797,	// (0x00037a72) fep_hwr_top_pane_g3_ParamLimits

0xfb09,	// (0x0003fde4) fep_hwr_top_pane_g_ParamLimits

0x77ac,	// (0x00037a87) fep_hwr_top_text_pane_ParamLimits

0xa2d4,	// (0x0003a5af) aid_touch_tab_arrow_arrow_2

0xa2dd,	// (0x0003a5b8) aid_touch_tab_arrow_left_2

0x76e2,	// (0x000379bd) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7719,	// (0x000379f4) fep_hwr_prediction_pane

0xbc51,	// (0x0003bf2c) fep_vkb_prediction_pane

0xbd57,	// (0x0003c032) fep_vkb_side_pane_g3_ParamLimits

0xbd57,	// (0x0003c032) fep_vkb_side_pane_g3

0x793b,	// (0x00037c16) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x79ac,	// (0x00037c87) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x79b9,	// (0x00037c94) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0003fe93) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7be3,	// (0x00037ebe) fep_hwr_prediction_pane_g1

0x7bed,	// (0x00037ec8) fep_hwr_prediction_pane_g2

0x7bf5,	// (0x00037ed0) fep_hwr_prediction_pane_g3

0x7bfd,	// (0x00037ed8) fep_hwr_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0003ff9d) fep_hwr_prediction_pane_g

0xcbe4,	// (0x0003cebf) fep_vkb_prediction_pane_g1

0xcbee,	// (0x0003cec9) fep_vkb_prediction_pane_g2

0xcbf6,	// (0x0003ced1) fep_vkb_prediction_pane_g3

0xcbfe,	// (0x0003ced9) fep_vkb_prediction_pane_g4

0x0003,

0xfccb,	// (0x0003ffa6) fep_vkb_prediction_pane_g

0x74c5,	// (0x000377a0) slider_set_pane_g3

0x74d9,	// (0x000377b4) slider_set_pane_g4

0x74f1,	// (0x000377cc) slider_set_pane_g5

0x74c5,	// (0x000377a0) slider_set_pane_g6

0x7507,	// (0x000377e2) slider_set_pane_g7

0xa9ae,	// (0x0003ac89) slider_form_pane_g3

0xa9b7,	// (0x0003ac92) slider_form_pane_g4

0xa9bf,	// (0x0003ac9a) slider_form_pane_g5

0xa9ae,	// (0x0003ac89) slider_form_pane_g6

0xa9c7,	// (0x0003aca2) slider_form_pane_g7

0xb023,	// (0x0003b2fe) slider_set_pane_vc_g3

0xb02c,	// (0x0003b307) slider_set_pane_vc_g4

0xb035,	// (0x0003b310) slider_set_pane_vc_g5

0xb023,	// (0x0003b2fe) slider_set_pane_vc_g6

0xb03e,	// (0x0003b319) slider_set_pane_vc_g7

0xb216,	// (0x0003b4f1) slider_form_pane_vc_g1

0xb21f,	// (0x0003b4fa) slider_form_pane_vc_g2

0xb228,	// (0x0003b503) slider_form_pane_vc_g3

0xb216,	// (0x0003b4f1) slider_form_pane_vc_g4

0xb231,	// (0x0003b50c) slider_form_pane_vc_g5

0x0004,

0xfa86,	// (0x0003fd61) slider_form_pane_vc_g

0xf46b,	// (0x0003f746) main_idle_act3_pane

0xcc06,	// (0x0003cee1) ai3_links_pane

0xcc0f,	// (0x0003ceea) popup_ai3_data_window_ParamLimits

0xcc0f,	// (0x0003ceea) popup_ai3_data_window

0xf46b,	// (0x0003f746) grid_ai3_links_pane

0xcc2d,	// (0x0003cf08) cell_ai3_links_pane_ParamLimits

0xcc2d,	// (0x0003cf08) cell_ai3_links_pane

0xcc47,	// (0x0003cf22) bg_popup_sub_pane_cp11

0xcc54,	// (0x0003cf2f) cell_ai3_links_pane_g1

0xf46b,	// (0x0003f746) bg_popup_sub_pane_cp12

0xcc79,	// (0x0003cf54) heading_ai3_data_pane

0xcc81,	// (0x0003cf5c) list_ai3_gene_pane

0xcc8d,	// (0x0003cf68) popup_ai3_data_window_g1

0xcc95,	// (0x0003cf70) heading_ai3_data_pane_g1

0xcc9d,	// (0x0003cf78) heading_ai3_data_pane_t1

0xccab,	// (0x0003cf86) list_double_ai3_gene_pane_ParamLimits

0xccab,	// (0x0003cf86) list_double_ai3_gene_pane

0xccb8,	// (0x0003cf93) list_single_ai3_gene_pane_ParamLimits

0xccb8,	// (0x0003cf93) list_single_ai3_gene_pane

0xba4d,	// (0x0003bd28) list_highlight_pane_cp7_ParamLimits

0xba4d,	// (0x0003bd28) list_highlight_pane_cp7

0xccc5,	// (0x0003cfa0) list_single_a13_gene_pane_t1_ParamLimits

0xccc5,	// (0x0003cfa0) list_single_a13_gene_pane_t1

0xccdc,	// (0x0003cfb7) list_single_ai3_gene_pane_g1

0xcce5,	// (0x0003cfc0) list_single_ai3_gene_pane_g2

0x0001,

0xfcd4,	// (0x0003ffaf) list_single_ai3_gene_pane_g

0xcced,	// (0x0003cfc8) list_double_ai3_gene_pane_g1_ParamLimits

0xcced,	// (0x0003cfc8) list_double_ai3_gene_pane_g1

0xccf9,	// (0x0003cfd4) list_double_ai3_gene_pane_t1_ParamLimits

0xccf9,	// (0x0003cfd4) list_double_ai3_gene_pane_t1

0xcd15,	// (0x0003cff0) list_double_ai3_gene_pane_t2_ParamLimits

0xcd15,	// (0x0003cff0) list_double_ai3_gene_pane_t2

0xcd2a,	// (0x0003d005) list_double_ai3_gene_pane_t3_ParamLimits

0xcd2a,	// (0x0003d005) list_double_ai3_gene_pane_t3

0x0002,

0xfcd9,	// (0x0003ffb4) list_double_ai3_gene_pane_t_ParamLimits

0xfcd9,	// (0x0003ffb4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4bd2,	// (0x00034ead) aid_size_min_col_2

0xcbce,	// (0x0003cea9) aid_size_min_msg_ParamLimits

0xcbce,	// (0x0003cea9) aid_size_min_msg

0xbe63,	// (0x0003c13e) fep_vkb_top_text_pane_g2_ParamLimits

0xbe63,	// (0x0003c13e) fep_vkb_top_text_pane_g2

0x0001,

0xfb39,	// (0x0003fe14) fep_vkb_top_text_pane_g_ParamLimits

0xfb39,	// (0x0003fe14) fep_vkb_top_text_pane_g

0xf46b,	// (0x0003f746) main_hc_apps_shell_pane

0xcd47,	// (0x0003d022) grid_hc_apps_pane_ParamLimits

0xcd47,	// (0x0003d022) grid_hc_apps_pane

0xcd56,	// (0x0003d031) list_hc_apps_pane

0xcd5e,	// (0x0003d039) scroll_pane_cp37_ParamLimits

0xcd5e,	// (0x0003d039) scroll_pane_cp37

0xcd6a,	// (0x0003d045) cell_hc_apps_pane_ParamLimits

0xcd6a,	// (0x0003d045) cell_hc_apps_pane

0xce22,	// (0x0003d0fd) cell_hc_apps_pane_g1_ParamLimits

0xce22,	// (0x0003d0fd) cell_hc_apps_pane_g1

0xce53,	// (0x0003d12e) cell_hc_apps_pane_g2_ParamLimits

0xce53,	// (0x0003d12e) cell_hc_apps_pane_g2

0xce6f,	// (0x0003d14a) cell_hc_apps_pane_g3_ParamLimits

0xce6f,	// (0x0003d14a) cell_hc_apps_pane_g3

0x0002,

0xfce0,	// (0x0003ffbb) cell_hc_apps_pane_g_ParamLimits

0xfce0,	// (0x0003ffbb) cell_hc_apps_pane_g

0xce91,	// (0x0003d16c) cell_hc_apps_pane_t1_ParamLimits

0xce91,	// (0x0003d16c) cell_hc_apps_pane_t1

0x234b,	// (0x00032626) grid_highlight_pane_cp10_ParamLimits

0x234b,	// (0x00032626) grid_highlight_pane_cp10

0xced1,	// (0x0003d1ac) list_single_hc_apps_pane_ParamLimits

0xced1,	// (0x0003d1ac) list_single_hc_apps_pane

0xcf10,	// (0x0003d1eb) list_single_hc_apps_pane_g1

0x7c05,	// (0x00037ee0) list_single_hc_apps_pane_g2

0x0001,

0xfce7,	// (0x0003ffc2) list_single_hc_apps_pane_g

0x7c1e,	// (0x00037ef9) list_single_hc_apps_pane_g2_copy1

0x7c3a,	// (0x00037f15) list_single_hc_apps_pane_t1

0xf4d9,	// (0x0003f7b4) bg_set_opt_pane_cp_ParamLimits

0x5bc1,	// (0x00035e9c) setting_slider_pane_t1_ParamLimits

0x5bda,	// (0x00035eb5) setting_slider_pane_t2_ParamLimits

0x5bf4,	// (0x00035ecf) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0003f83f) setting_slider_pane_t_ParamLimits

0x5c0c,	// (0x00035ee7) slider_set_pane_ParamLimits

0x7059,	// (0x00037334) control_pane_g5_ParamLimits

0x7059,	// (0x00037334) control_pane_g5

0xa7db,	// (0x0003aab6) slider_set_pane_g1_ParamLimits

0x74b9,	// (0x00037794) slider_set_pane_g2_ParamLimits

0x74c5,	// (0x000377a0) slider_set_pane_g3_ParamLimits

0x74d9,	// (0x000377b4) slider_set_pane_g4_ParamLimits

0x74f1,	// (0x000377cc) slider_set_pane_g5_ParamLimits

0x74c5,	// (0x000377a0) slider_set_pane_g6_ParamLimits

0x7507,	// (0x000377e2) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0003fc40) slider_set_pane_g_ParamLimits

0x6ce1,	// (0x00036fbc) navi_icon_text_pane_ParamLimits

0x8f6b,	// (0x00039246) aid_fill_nsta_2_ParamLimits

0x8fac,	// (0x00039287) aid_touch_tab_arrow_left_ParamLimits

0x8fbb,	// (0x00039296) aid_touch_tab_arrow_right_ParamLimits

0x9028,	// (0x00039303) clock_nsta_pane_ParamLimits

0xa2b6,	// (0x0003a591) navi_icon_pane_g1_ParamLimits

0xa2c2,	// (0x0003a59d) navi_text_pane_t1_ParamLimits

0xb686,	// (0x0003b961) navi_icon_text_pane_g1_ParamLimits

0xb692,	// (0x0003b96d) navi_icon_text_pane_t1_ParamLimits

0xcf10,	// (0x0003d1eb) list_single_hc_apps_pane_g1_ParamLimits

0x7c05,	// (0x00037ee0) list_single_hc_apps_pane_g2_ParamLimits

0xfce7,	// (0x0003ffc2) list_single_hc_apps_pane_g_ParamLimits

0x7c1e,	// (0x00037ef9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7c3a,	// (0x00037f15) list_single_hc_apps_pane_t1_ParamLimits

0x5a09,	// (0x00035ce4) popup_toolbar2_fixed_window_ParamLimits

0x5a09,	// (0x00035ce4) popup_toolbar2_fixed_window

0x8e6f,	// (0x0003914a) popup_toolbar2_float_window

0xf46b,	// (0x0003f746) bg_popup_sub_pane_cp27

0xcf29,	// (0x0003d204) grid_toolbar2_float_pane

0xf46b,	// (0x0003f746) bg_popup_sub_pane_cp26

0xcf29,	// (0x0003d204) grid_toolbar2_fixed_pane

0xcf31,	// (0x0003d20c) cell_toolbar2_fixed_pane_ParamLimits

0xcf31,	// (0x0003d20c) cell_toolbar2_fixed_pane

0xcf41,	// (0x0003d21c) cell_toolbar2_fixed_pane_g1

0xcf4a,	// (0x0003d225) toolbar2_fixed_button_pane

0x945f,	// (0x0003973a) toolbar2_fixed_button_pane_g1

0x946f,	// (0x0003974a) toolbar2_fixed_button_pane_g2

0x9467,	// (0x00039742) toolbar2_fixed_button_pane_g3

0x947f,	// (0x0003975a) toolbar2_fixed_button_pane_g4

0x9477,	// (0x00039752) toolbar2_fixed_button_pane_g5

0x9487,	// (0x00039762) toolbar2_fixed_button_pane_g6

0x948f,	// (0x0003976a) toolbar2_fixed_button_pane_g7

0x949f,	// (0x0003977a) toolbar2_fixed_button_pane_g8

0x9497,	// (0x00039772) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0003fb42) toolbar2_fixed_button_pane_g

0xcf52,	// (0x0003d22d) cell_toolbar2_float_pane_ParamLimits

0xcf52,	// (0x0003d22d) cell_toolbar2_float_pane

0xcf63,	// (0x0003d23e) cell_toolbar2_float_pane_g1

0xcf4a,	// (0x0003d225) toolbar2_fixed_button_pane_cp

0xbbbf,	// (0x0003be9a) fep_vkb_accented_list_pane_ParamLimits

0xbbbf,	// (0x0003be9a) fep_vkb_accented_list_pane

0x791b,	// (0x00037bf6) bg_popup_fep_shadow_pane_g9

0x6e65,	// (0x00037140) bg_popup_fep_shadow_pane_cp3

0x2940,	// (0x00032c1b) list_accented_list_pane

0xcf6c,	// (0x0003d247) list_single_accented_list_pane_ParamLimits

0xcf6c,	// (0x0003d247) list_single_accented_list_pane

0x6e65,	// (0x00037140) list_highlight_pane_cp10

0xcf7d,	// (0x0003d258) list_single_accented_list_pane_t1

0x8db5,	// (0x00039090) popup_slider_window_ParamLimits

0x8db5,	// (0x00039090) popup_slider_window

0xcbc5,	// (0x0003cea0) aid_indentation_list_msg

0xd049,	// (0x0003d324) bg_popup_window_pane_cp19

0xd0b7,	// (0x0003d392) popup_slider_window_g1

0xd0d3,	// (0x0003d3ae) popup_slider_window_g2

0xd0ef,	// (0x0003d3ca) popup_slider_window_g3

0x0005,

0xfcec,	// (0x0003ffc7) popup_slider_window_g

0xd14b,	// (0x0003d426) popup_slider_window_t1

0xd1bf,	// (0x0003d49a) small_volume_slider_vertical_pane

0xba88,	// (0x0003bd63) small_volume_slider_vertical_pane_g1

0xba88,	// (0x0003bd63) small_volume_slider_vertical_pane_g2

0xd1db,	// (0x0003d4b6) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfe,	// (0x0003ffd9) small_volume_slider_vertical_pane_g

0x57b7,	// (0x00035a92) area_side_right_pane_ParamLimits

0x57b7,	// (0x00035a92) area_side_right_pane

0x7c68,	// (0x00037f43) aid_size_side_button_ParamLimits

0x7c68,	// (0x00037f43) aid_size_side_button

0x7c7c,	// (0x00037f57) grid_sctrl_middle_pane_ParamLimits

0x7c7c,	// (0x00037f57) grid_sctrl_middle_pane

0x7c9c,	// (0x00037f77) sctrl_sk_bottom_pane

0x7cad,	// (0x00037f88) sctrl_sk_top_pane

0x7cbf,	// (0x00037f9a) aid_touch_sctrl_top

0x7ccc,	// (0x00037fa7) bg_sctrl_sk_pane_ParamLimits

0x7ccc,	// (0x00037fa7) bg_sctrl_sk_pane

0x7cda,	// (0x00037fb5) sctrl_sk_top_pane_g1

0x7ce7,	// (0x00037fc2) sctrl_sk_top_pane_t1

0x7cbf,	// (0x00037f9a) aid_touch_sctrl_bottom

0x7ccc,	// (0x00037fa7) bg_sctrl_sk_pane_cp_ParamLimits

0x7ccc,	// (0x00037fa7) bg_sctrl_sk_pane_cp

0x7d02,	// (0x00037fdd) sctrl_sk_bottom_pane_g1

0x7ce7,	// (0x00037fc2) sctrl_sk_bottom_pane_t1

0x7d0b,	// (0x00037fe6) cell_sctrl_middle_pane_ParamLimits

0x7d0b,	// (0x00037fe6) cell_sctrl_middle_pane

0x7d28,	// (0x00038003) aid_touch_sctrl_middle_ParamLimits

0x7d28,	// (0x00038003) aid_touch_sctrl_middle

0x7d3a,	// (0x00038015) bg_sctrl_middle_pane_ParamLimits

0x7d3a,	// (0x00038015) bg_sctrl_middle_pane

0x793b,	// (0x00037c16) cell_sctrl_middle_pane_g1_ParamLimits

0x793b,	// (0x00037c16) cell_sctrl_middle_pane_g1

0x7d48,	// (0x00038023) cell_sctrl_middle_pane_g2_ParamLimits

0x7d48,	// (0x00038023) cell_sctrl_middle_pane_g2

0x0001,

0xfd0a,	// (0x0003ffe5) cell_sctrl_middle_pane_g_ParamLimits

0xfd0a,	// (0x0003ffe5) cell_sctrl_middle_pane_g

0x945f,	// (0x0003973a) bg_sctrl_middle_pane_g1

0x9467,	// (0x00039742) bg_sctrl_middle_pane_g2

0x946f,	// (0x0003974a) bg_sctrl_middle_pane_g3

0x9477,	// (0x00039752) bg_sctrl_middle_pane_g4

0x947f,	// (0x0003975a) bg_sctrl_middle_pane_g5

0x9487,	// (0x00039762) bg_sctrl_middle_pane_g6

0x948f,	// (0x0003976a) bg_sctrl_middle_pane_g7

0x9497,	// (0x00039772) bg_sctrl_middle_pane_g8

0x0007,

0xfd0f,	// (0x0003ffea) bg_sctrl_middle_pane_g

0x949f,	// (0x0003977a) bg_sctrl_middle_pane_g8_copy1

0x945f,	// (0x0003973a) bg_sctrl_sk_pane_g1

0x946f,	// (0x0003974a) bg_sctrl_sk_pane_g2

0x9467,	// (0x00039742) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0003fb42) bg_sctrl_sk_pane_g

0x2766,	// (0x00032a41) aid_size_touch_scroll_bar

0x947f,	// (0x0003975a) bg_sctrl_sk_pane_g4

0x9477,	// (0x00039752) bg_sctrl_sk_pane_g5

0x9487,	// (0x00039762) bg_sctrl_sk_pane_g6

0x948f,	// (0x0003976a) bg_sctrl_sk_pane_g7

0x949f,	// (0x0003977a) bg_sctrl_sk_pane_g8

0x9497,	// (0x00039772) bg_sctrl_sk_pane_g9

0x89cc,	// (0x00038ca7) popup_fep_china_hwr2_fs_candidate_window

0x89d6,	// (0x00038cb1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x89d6,	// (0x00038cb1) popup_fep_china_hwr2_fs_control_window

0x793b,	// (0x00037c16) sctrl_sk_top_pane_g2

0x0001,

0xfd05,	// (0x0003ffe0) sctrl_sk_top_pane_g

0xd1e4,	// (0x0003d4bf) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd1e4,	// (0x0003d4bf) aid_fep_china_hwr2_fs_cell

0xd1f7,	// (0x0003d4d2) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd1f7,	// (0x0003d4d2) bg_popup_fep_shadow_pane_cp4

0xd210,	// (0x0003d4eb) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd210,	// (0x0003d4eb) bg_popup_fep_shadow_pane_cp5

0xd222,	// (0x0003d4fd) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd222,	// (0x0003d4fd) popup_fep_china_hwr2_fs_control_bar_grid

0xd232,	// (0x0003d50d) popup_fep_china_hwr2_fs_control_funtion_grid

0xd23a,	// (0x0003d515) aid_fep_china_hwr2_fs_candi_cell

0xf46b,	// (0x0003f746) bg_popup_fep_shadow_pane_cp6

0xd244,	// (0x0003d51f) popup_fep_china_hwr2_fs_candidate_grid

0xd24e,	// (0x0003d529) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd24e,	// (0x0003d529) cell_fep_china_hwr2_fs_funtion_grid

0xba88,	// (0x0003bd63) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd266,	// (0x0003d541) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd266,	// (0x0003d541) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd274,	// (0x0003d54f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd274,	// (0x0003d54f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd20,	// (0x0003fffb) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd20,	// (0x0003fffb) cell_fep_china_hwr2_fs_funtion_grid_g

0xd28a,	// (0x0003d565) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd28a,	// (0x0003d565) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd29f,	// (0x0003d57a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd29f,	// (0x0003d57a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd25,	// (0x00040000) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd25,	// (0x00040000) cell_fep_china_hwr2_fs_funtion_grid_t

0xd2bb,	// (0x0003d596) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd2c3,	// (0x0003d59e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd2cb,	// (0x0003d5a6) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2a,	// (0x00040005) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd2d3,	// (0x0003d5ae) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd2d3,	// (0x0003d5ae) cell_fep_china_hwr2_fs_candidate_grid

0xd2f2,	// (0x0003d5cd) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd2fa,	// (0x0003d5d5) popup_fep_china_hwr2_fs_candidate_grid_g21

0xba88,	// (0x0003bd63) cell_fep_china_hwr2_fs_candidate_grid_g1

0xba88,	// (0x0003bd63) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3e,	// (0x0003fe19) cell_fep_china_hwr2_fs_candidate_grid_g

0xd302,	// (0x0003d5dd) cell_fep_china_hwr2_fs_candidate_grid_t1

0x903b,	// (0x00039316) clock_nsta_pane_cp_24_ParamLimits

0x903b,	// (0x00039316) clock_nsta_pane_cp_24

0x90bb,	// (0x00039396) indicator_nsta_pane_cp_24_ParamLimits

0x90bb,	// (0x00039396) indicator_nsta_pane_cp_24

0xa132,	// (0x0003a40d) heading_pane_g1

0x0001,

0xf8cc,	// (0x0003fba7) heading_pane_g

0xabb3,	// (0x0003ae8e) grid_sct_catagory_button_pane

0xabe5,	// (0x0003aec0) scroll_pane_cp5_ParamLimits

0xb6d4,	// (0x0003b9af) button_value_adjust_pane_cp5_ParamLimits

0xb6d4,	// (0x0003b9af) button_value_adjust_pane_cp5

0xb7b9,	// (0x0003ba94) form2_midp_time_pane_ParamLimits

0xd310,	// (0x0003d5eb) cell_sct_catagory_button_pane_ParamLimits

0xd310,	// (0x0003d5eb) cell_sct_catagory_button_pane

0xba4d,	// (0x0003bd28) bg_button_pane_cp01_ParamLimits

0xba4d,	// (0x0003bd28) bg_button_pane_cp01

0xba88,	// (0x0003bd63) cell_sct_catagory_button_pane_g1

0x8df6,	// (0x000390d1) popup_tb_extension_window

0xd322,	// (0x0003d5fd) aid_size_cell_ext_ParamLimits

0xd322,	// (0x0003d5fd) aid_size_cell_ext

0x234b,	// (0x00032626) bg_tb_trans_pane_cp1_ParamLimits

0x234b,	// (0x00032626) bg_tb_trans_pane_cp1

0xd342,	// (0x0003d61d) grid_tb_ext_pane_ParamLimits

0xd342,	// (0x0003d61d) grid_tb_ext_pane

0xd372,	// (0x0003d64d) cell_tb_ext_pane_ParamLimits

0xd372,	// (0x0003d64d) cell_tb_ext_pane

0xd389,	// (0x0003d664) cell_tb_ext_pane_g1_ParamLimits

0xd389,	// (0x0003d664) cell_tb_ext_pane_g1

0xd3a6,	// (0x0003d681) cell_tb_ext_pane_t1

0x234b,	// (0x00032626) list_highlight_pane_cp11_ParamLimits

0x234b,	// (0x00032626) list_highlight_pane_cp11

0x5a28,	// (0x00035d03) popup_uni_indicator_window_ParamLimits

0x5a28,	// (0x00035d03) popup_uni_indicator_window

0x282d,	// (0x00032b08) bg_popup_sub_pane_cp14

0xd3c1,	// (0x0003d69c) list_uniindi_pane

0xd3cd,	// (0x0003d6a8) uniindi_top_pane

0x234b,	// (0x00032626) bg_uniindi_top_pane

0xd3ee,	// (0x0003d6c9) uniindi_top_pane_g1

0xd404,	// (0x0003d6df) uniindi_top_pane_g2

0x0003,

0xfd31,	// (0x0004000c) uniindi_top_pane_g

0xd42e,	// (0x0003d709) uniindi_top_pane_t1

0xd45a,	// (0x0003d735) list_single_uniindi_pane_ParamLimits

0xd45a,	// (0x0003d735) list_single_uniindi_pane

0xba88,	// (0x0003bd63) bg_uniindi_top_pane_g1

0xd46c,	// (0x0003d747) list_single_uniindi_pane_g1

0xd47f,	// (0x0003d75a) list_single_uniindi_pane_t1

0x5894,	// (0x00035b6f) control_bg_pane

0xd4a4,	// (0x0003d77f) bg_sctrl_sk_pane_cp1

0xd4ad,	// (0x0003d788) bg_sctrl_sk_pane_cp2

0xd4b6,	// (0x0003d791) control_bg_pane_g1

0xd4bf,	// (0x0003d79a) control_bg_pane_g2

0x0001,

0xfd3a,	// (0x00040015) control_bg_pane_g

0xb4fb,	// (0x0003b7d6) cell_indicator_nsta_pane_g1_ParamLimits

0xb509,	// (0x0003b7e4) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa2,	// (0x0003fd7d) cell_indicator_nsta_pane_g_ParamLimits

0x47f6,	// (0x00034ad1) form2_midp_time_pane_t1_ParamLimits

0x25a8,	// (0x00032883) main_idle_act4_pane_ParamLimits

0x25a8,	// (0x00032883) main_idle_act4_pane

0x8df6,	// (0x000390d1) popup_tb_extension_window_ParamLimits

0xd364,	// (0x0003d63f) tb_ext_find_pane_ParamLimits

0xd364,	// (0x0003d63f) tb_ext_find_pane

0xd4c8,	// (0x0003d7a3) ai_gene_pane_1_cp1

0x86d9,	// (0x000389b4) ai_gene_pane_2_cp1

0xd4d0,	// (0x0003d7ab) list_single_idle_plugin_calendar_pane

0xd4d9,	// (0x0003d7b4) list_single_idle_plugin_notification_pane

0xd4e2,	// (0x0003d7bd) list_single_idle_plugin_player_pane

0xd4eb,	// (0x0003d7c6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd4eb,	// (0x0003d7c6) list_single_idle_plugin_shortcut_pane

0xd50d,	// (0x0003d7e8) main_idle_act4_pane_t1

0xd51f,	// (0x0003d7fa) main_idle_act4_pane_t2

0x0001,

0xfd3f,	// (0x0004001a) main_idle_act4_pane_t

0xd531,	// (0x0003d80c) middle_sk_idle_act4_pane_ParamLimits

0xd531,	// (0x0003d80c) middle_sk_idle_act4_pane

0xd547,	// (0x0003d822) popup_clock_digital_analogue_window_cp2

0xd561,	// (0x0003d83c) shortcut_wheel_idle_act4_pane_ParamLimits

0xd561,	// (0x0003d83c) shortcut_wheel_idle_act4_pane

0xba88,	// (0x0003bd63) shortcut_wheel_idle_act4_pane_g1

0xba88,	// (0x0003bd63) shortcut_wheel_idle_act4_pane_g2

0xba88,	// (0x0003bd63) shortcut_wheel_idle_act4_pane_g3

0xba88,	// (0x0003bd63) shortcut_wheel_idle_act4_pane_g4

0xba88,	// (0x0003bd63) shortcut_wheel_idle_act4_pane_g5

0xd575,	// (0x0003d850) shortcut_wheel_idle_act4_pane_g6

0xd57d,	// (0x0003d858) shortcut_wheel_idle_act4_pane_g7

0xd585,	// (0x0003d860) shortcut_wheel_idle_act4_pane_g8

0xd58d,	// (0x0003d868) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd44,	// (0x0004001f) shortcut_wheel_idle_act4_pane_g

0xbd03,	// (0x0003bfde) middle_sk_idle_act4_pane_g1_ParamLimits

0xbd03,	// (0x0003bfde) middle_sk_idle_act4_pane_g1

0xd5f1,	// (0x0003d8cc) middle_sk_idle_act4_pane_g2_ParamLimits

0xd5f1,	// (0x0003d8cc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd67,	// (0x00040042) middle_sk_idle_act4_pane_g_ParamLimits

0xfd67,	// (0x00040042) middle_sk_idle_act4_pane_g

0xd5fd,	// (0x0003d8d8) middle_sk_idle_act4_pane_t1_ParamLimits

0xd5fd,	// (0x0003d8d8) middle_sk_idle_act4_pane_t1

0xd61a,	// (0x0003d8f5) grid_ai_shortcut_pane_ParamLimits

0xd61a,	// (0x0003d8f5) grid_ai_shortcut_pane

0xd633,	// (0x0003d90e) list_highlight_pane_cp16_ParamLimits

0xd633,	// (0x0003d90e) list_highlight_pane_cp16

0xd640,	// (0x0003d91b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd640,	// (0x0003d91b) list_single_idle_plugin_shortcut_pane_g1

0xd64c,	// (0x0003d927) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd64c,	// (0x0003d927) list_single_idle_plugin_shortcut_pane_g2

0xd666,	// (0x0003d941) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd666,	// (0x0003d941) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6c,	// (0x00040047) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6c,	// (0x00040047) list_single_idle_plugin_shortcut_pane_g

0xd679,	// (0x0003d954) cell_ai_shortcut_pane_ParamLimits

0xd679,	// (0x0003d954) cell_ai_shortcut_pane

0xd69c,	// (0x0003d977) cell_ai_shortcut_pane_g1_ParamLimits

0xd69c,	// (0x0003d977) cell_ai_shortcut_pane_g1

0xd4c8,	// (0x0003d7a3) ai_gene_pane_1_cp2

0xd6be,	// (0x0003d999) ai_gene_pane_2_cp2

0xd6c6,	// (0x0003d9a1) list_highlight_pane_cp15

0xd6cf,	// (0x0003d9aa) list_single_idle_plugin_calendar_pane_g1

0xd6c6,	// (0x0003d9a1) list_highlight_pane_cp17

0xd6d7,	// (0x0003d9b2) list_single_idle_plugin_calendar_pane_g1_copy1

0xd6df,	// (0x0003d9ba) list_single_idle_plugin_player_pane_g1

0xae1a,	// (0x0003b0f5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd73,	// (0x0004004e) list_single_idle_plugin_player_pane_g

0xd6e7,	// (0x0003d9c2) list_single_idle_plugin_player_pane_t1

0xd6f5,	// (0x0003d9d0) list_single_idle_plugin_player_pane_t2

0xd703,	// (0x0003d9de) list_single_idle_plugin_player_pane_t3

0xd711,	// (0x0003d9ec) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd78,	// (0x00040053) list_single_idle_plugin_player_pane_t

0xd71f,	// (0x0003d9fa) wait_bar_pane_cp15

0xd727,	// (0x0003da02) grid_ai_notification_pane

0xae1a,	// (0x0003b0f5) list_single_idle_plugin_notification_pane_g1

0xd730,	// (0x0003da0b) cell_ai_notification_pane_ParamLimits

0xd730,	// (0x0003da0b) cell_ai_notification_pane

0xd73d,	// (0x0003da18) cell_ai_notification_pane_g1

0xd745,	// (0x0003da20) cell_ai_notification_pane_t1

0xd753,	// (0x0003da2e) tb_ext_find_button_pane

0xd75b,	// (0x0003da36) tb_ext_find_pane_g1

0xd763,	// (0x0003da3e) tb_ext_find_pane_t1

0x2d0f,	// (0x00032fea) tb_ext_find_button_pane_g1

0xd771,	// (0x0003da4c) tb_ext_find_button_pane_g2

0x0001,

0xfd81,	// (0x0004005c) tb_ext_find_button_pane_g

0xd50d,	// (0x0003d7e8) main_idle_act4_pane_t1_ParamLimits

0xd51f,	// (0x0003d7fa) main_idle_act4_pane_t2_ParamLimits

0xfd3f,	// (0x0004001a) main_idle_act4_pane_t_ParamLimits

0xd547,	// (0x0003d822) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd555,	// (0x0003d830) sat_plugin_idle_act4_pane_ParamLimits

0xd555,	// (0x0003d830) sat_plugin_idle_act4_pane

0xd77a,	// (0x0003da55) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd77a,	// (0x0003da55) sat_plugin_idle_act4_pane_t1

0xd78d,	// (0x0003da68) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd78d,	// (0x0003da68) sat_plugin_idle_act4_pane_t2

0xd7a0,	// (0x0003da7b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd7a0,	// (0x0003da7b) sat_plugin_idle_act4_pane_t3

0xd7b3,	// (0x0003da8e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd7b3,	// (0x0003da8e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd86,	// (0x00040061) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd86,	// (0x00040061) sat_plugin_idle_act4_pane_t

0x5959,	// (0x00035c34) popup_battery_window_ParamLimits

0x5959,	// (0x00035c34) popup_battery_window

0x234b,	// (0x00032626) bg_popup_sub_pane_cp25_ParamLimits

0x234b,	// (0x00032626) bg_popup_sub_pane_cp25

0xd7c6,	// (0x0003daa1) popup_battery_window_g1_ParamLimits

0xd7c6,	// (0x0003daa1) popup_battery_window_g1

0xd7d2,	// (0x0003daad) popup_battery_window_t1_ParamLimits

0xd7d2,	// (0x0003daad) popup_battery_window_t1

0xd7e4,	// (0x0003dabf) popup_battery_window_t2_ParamLimits

0xd7e4,	// (0x0003dabf) popup_battery_window_t2

0x0001,

0xfd8f,	// (0x0004006a) popup_battery_window_t_ParamLimits

0xfd8f,	// (0x0004006a) popup_battery_window_t

0x6e6d,	// (0x00037148) midp_canvas_pane_ParamLimits

0x6ee4,	// (0x000371bf) midp_keypad_pane_ParamLimits

0x6ee4,	// (0x000371bf) midp_keypad_pane

0x891e,	// (0x00038bf9) main_midp_pane_ParamLimits

0xb587,	// (0x0003b862) signal_pane_g2_cp_ParamLimits

0xd801,	// (0x0003dadc) aid_size_cell_midp_keypad_ParamLimits

0xd801,	// (0x0003dadc) aid_size_cell_midp_keypad

0xd81b,	// (0x0003daf6) midp_keyp_game_grid_pane_ParamLimits

0xd81b,	// (0x0003daf6) midp_keyp_game_grid_pane

0xd83b,	// (0x0003db16) midp_keyp_rocker_pane_ParamLimits

0xd83b,	// (0x0003db16) midp_keyp_rocker_pane

0xd866,	// (0x0003db41) midp_keyp_sk_left_pane_ParamLimits

0xd866,	// (0x0003db41) midp_keyp_sk_left_pane

0xd8c0,	// (0x0003db9b) midp_keyp_sk_right_pane_ParamLimits

0xd8c0,	// (0x0003db9b) midp_keyp_sk_right_pane

0xf46b,	// (0x0003f746) bg_button_pane_cp03

0xd91a,	// (0x0003dbf5) midp_keyp_sk_left_pane_g1

0xf46b,	// (0x0003f746) bg_button_pane_cp04

0xd91a,	// (0x0003dbf5) midp_keyp_sk_right_pane_g1

0xba88,	// (0x0003bd63) midp_keyp_rocker_pane_g1

0xd923,	// (0x0003dbfe) keyp_game_cell_pane_ParamLimits

0xd923,	// (0x0003dbfe) keyp_game_cell_pane

0xf46b,	// (0x0003f746) bg_button_pane_cp02

0xd936,	// (0x0003dc11) keyp_game_cell_pane_g1

0x59a3,	// (0x00035c7e) popup_fep_vkb2_window_ParamLimits

0x59a3,	// (0x00035c7e) popup_fep_vkb2_window

0x7d66,	// (0x00038041) aid_size_cell_vkb2_ParamLimits

0x7d66,	// (0x00038041) aid_size_cell_vkb2

0x7dba,	// (0x00038095) popup_fep_vkb2_window_g1_ParamLimits

0x7dba,	// (0x00038095) popup_fep_vkb2_window_g1

0x7e02,	// (0x000380dd) vkb2_area_bottom_pane_ParamLimits

0x7e02,	// (0x000380dd) vkb2_area_bottom_pane

0x7e56,	// (0x00038131) vkb2_area_keypad_pane_ParamLimits

0x7e56,	// (0x00038131) vkb2_area_keypad_pane

0x7e9c,	// (0x00038177) vkb2_area_top_pane_ParamLimits

0x7e9c,	// (0x00038177) vkb2_area_top_pane

0x7f16,	// (0x000381f1) vkb2_top_entry_pane_ParamLimits

0x7f16,	// (0x000381f1) vkb2_top_entry_pane

0x7f40,	// (0x0003821b) vkb2_top_grid_left_pane_ParamLimits

0x7f40,	// (0x0003821b) vkb2_top_grid_left_pane

0x7f5e,	// (0x00038239) vkb2_top_grid_right_pane_ParamLimits

0x7f5e,	// (0x00038239) vkb2_top_grid_right_pane

0x7f7c,	// (0x00038257) vkb2_cell_keypad_pane_ParamLimits

0x7f7c,	// (0x00038257) vkb2_cell_keypad_pane

0x804d,	// (0x00038328) vkb2_area_bottom_grid_pane_ParamLimits

0x804d,	// (0x00038328) vkb2_area_bottom_grid_pane

0x8073,	// (0x0003834e) vkb2_area_bottom_pane_g1_ParamLimits

0x8073,	// (0x0003834e) vkb2_area_bottom_pane_g1

0x8097,	// (0x00038372) vkb2_area_bottom_pane_g2_ParamLimits

0x8097,	// (0x00038372) vkb2_area_bottom_pane_g2

0x80c5,	// (0x000383a0) vkb2_area_bottom_pane_g3_ParamLimits

0x80c5,	// (0x000383a0) vkb2_area_bottom_pane_g3

0x0002,

0xfd94,	// (0x0004006f) vkb2_area_bottom_pane_g_ParamLimits

0xfd94,	// (0x0004006f) vkb2_area_bottom_pane_g

0x8126,	// (0x00038401) vkb2_top_cell_left_pane_ParamLimits

0x8126,	// (0x00038401) vkb2_top_cell_left_pane

0xd947,	// (0x0003dc22) vkb2_top_entry_pane_g1_ParamLimits

0xd947,	// (0x0003dc22) vkb2_top_entry_pane_g1

0xd955,	// (0x0003dc30) vkb2_top_entry_pane_t1_ParamLimits

0xd955,	// (0x0003dc30) vkb2_top_entry_pane_t1

0xd987,	// (0x0003dc62) vkb2_top_entry_pane_t2_ParamLimits

0xd987,	// (0x0003dc62) vkb2_top_entry_pane_t2

0xd9b9,	// (0x0003dc94) vkb2_top_entry_pane_t3_ParamLimits

0xd9b9,	// (0x0003dc94) vkb2_top_entry_pane_t3

0x0002,

0xfd9b,	// (0x00040076) vkb2_top_entry_pane_t_ParamLimits

0xfd9b,	// (0x00040076) vkb2_top_entry_pane_t

0x8173,	// (0x0003844e) vkb2_top_grid_right_pane_g1_ParamLimits

0x8173,	// (0x0003844e) vkb2_top_grid_right_pane_g1

0x8189,	// (0x00038464) vkb2_top_grid_right_pane_g2_ParamLimits

0x8189,	// (0x00038464) vkb2_top_grid_right_pane_g2

0x81a1,	// (0x0003847c) vkb2_top_grid_right_pane_g3_ParamLimits

0x81a1,	// (0x0003847c) vkb2_top_grid_right_pane_g3

0x81b9,	// (0x00038494) vkb2_top_grid_right_pane_g4_ParamLimits

0x81b9,	// (0x00038494) vkb2_top_grid_right_pane_g4

0x0003,

0xfda2,	// (0x0004007d) vkb2_top_grid_right_pane_g_ParamLimits

0xfda2,	// (0x0004007d) vkb2_top_grid_right_pane_g

0x81cf,	// (0x000384aa) vkb2_top_cell_left_pane_g1

0x81e6,	// (0x000384c1) vkb2_cell_keypad_pane_g1_ParamLimits

0x81e6,	// (0x000384c1) vkb2_cell_keypad_pane_g1

0xd9dd,	// (0x0003dcb8) vkb2_cell_keypad_pane_t1_ParamLimits

0xd9dd,	// (0x0003dcb8) vkb2_cell_keypad_pane_t1

0x81f4,	// (0x000384cf) vkb2_cell_bottom_grid_pane_ParamLimits

0x81f4,	// (0x000384cf) vkb2_cell_bottom_grid_pane

0x822d,	// (0x00038508) vkb2_cell_bottom_grid_pane_g1

0xd595,	// (0x0003d870) aid_call2_pane_cp02

0xd59d,	// (0x0003d878) aid_call_pane_cp02

0xd5a5,	// (0x0003d880) clock_digital_number_pane_cp10

0xd5ad,	// (0x0003d888) clock_digital_number_pane_cp11

0xd5b5,	// (0x0003d890) clock_digital_number_pane_cp12

0xd5bd,	// (0x0003d898) clock_digital_number_pane_cp13

0xd5c5,	// (0x0003d8a0) clock_digital_separator_pane_cp10

0x2d0f,	// (0x00032fea) popup_clock_digital_analogue_window_cp2_g1

0x2d0f,	// (0x00032fea) popup_clock_digital_analogue_window_cp2_g2

0xd5cd,	// (0x0003d8a8) popup_clock_digital_analogue_window_cp2_g3

0x2d0f,	// (0x00032fea) popup_clock_digital_analogue_window_cp2_g4

0xd5cd,	// (0x0003d8a8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd57,	// (0x00040032) popup_clock_digital_analogue_window_cp2_g

0xd5d5,	// (0x0003d8b0) popup_clock_digital_analogue_window_cp2_t1

0xd5e3,	// (0x0003d8be) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd62,	// (0x0004003d) popup_clock_digital_analogue_window_cp2_t

0xba88,	// (0x0003bd63) clock_digital_number_pane_cp10_g1

0xba88,	// (0x0003bd63) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0003fe19) clock_digital_number_pane_cp10_g

0xba88,	// (0x0003bd63) clock_digital_separator_pane_cp10_g1

0xba88,	// (0x0003bd63) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0003fe19) clock_digital_separator_pane_cp10_g

0xd410,	// (0x0003d6eb) uniindi_top_pane_g3

0xd421,	// (0x0003d6fc) uniindi_top_pane_g4

0x8007,	// (0x000382e2) vkb2_row_keypad_pane_ParamLimits

0x8007,	// (0x000382e2) vkb2_row_keypad_pane

0x8249,	// (0x00038524) vkb2_cell_t_keypad_pane_ParamLimits

0x8249,	// (0x00038524) vkb2_cell_t_keypad_pane

0x8259,	// (0x00038534) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8259,	// (0x00038534) vkb2_cell_t_keypad_pane_cp08

0x826e,	// (0x00038549) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x826e,	// (0x00038549) vkb2_cell_t_keypad_pane_cp09

0x8282,	// (0x0003855d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8282,	// (0x0003855d) vkb2_cell_t_keypad_pane_cp01

0x8293,	// (0x0003856e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8293,	// (0x0003856e) vkb2_cell_t_keypad_pane_cp02

0x82a4,	// (0x0003857f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x82a4,	// (0x0003857f) vkb2_cell_t_keypad_pane_cp03

0x82b5,	// (0x00038590) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x82b5,	// (0x00038590) vkb2_cell_t_keypad_pane_cp04

0x82c6,	// (0x000385a1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x82c6,	// (0x000385a1) vkb2_cell_t_keypad_pane_cp05

0x82d7,	// (0x000385b2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x82d7,	// (0x000385b2) vkb2_cell_t_keypad_pane_cp06

0x82ea,	// (0x000385c5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x82ea,	// (0x000385c5) vkb2_cell_t_keypad_pane_cp07

0x82ff,	// (0x000385da) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x82ff,	// (0x000385da) vkb2_cell_t_keypad_pane_cp10

0x793b,	// (0x00037c16) vkb2_cell_t_keypad_pane_g1

0xd9f4,	// (0x0003dccf) vkb2_cell_t_keypad_pane_t1

0x5894,	// (0x00035b6f) popup_grid_graphic2_window

0xda06,	// (0x0003dce1) aid_size_cell_graphic2_ParamLimits

0xda06,	// (0x0003dce1) aid_size_cell_graphic2

0xdaa1,	// (0x0003dd7c) bg_popup_window_pane_cp21_ParamLimits

0xdaa1,	// (0x0003dd7c) bg_popup_window_pane_cp21

0xdaaf,	// (0x0003dd8a) graphic2_pages_pane_ParamLimits

0xdaaf,	// (0x0003dd8a) graphic2_pages_pane

0xdaf5,	// (0x0003ddd0) grid_graphic2_control_pane_ParamLimits

0xdaf5,	// (0x0003ddd0) grid_graphic2_control_pane

0xdb33,	// (0x0003de0e) grid_graphic2_pane_ParamLimits

0xdb33,	// (0x0003de0e) grid_graphic2_pane

0xdba9,	// (0x0003de84) cell_graphic2_pane

0xf46b,	// (0x0003f746) main_comp_mode_pane

0xcc81,	// (0x0003cf5c) list_ai3_gene_pane_ParamLimits

0xd049,	// (0x0003d324) bg_popup_window_pane_cp19_ParamLimits

0xd055,	// (0x0003d330) bg_touch_area_indi_pane_ParamLimits

0xd055,	// (0x0003d330) bg_touch_area_indi_pane

0xd06b,	// (0x0003d346) bg_touch_area_indi_pane_cp01_ParamLimits

0xd06b,	// (0x0003d346) bg_touch_area_indi_pane_cp01

0xd083,	// (0x0003d35e) bg_touch_area_indi_pane_cp02_ParamLimits

0xd083,	// (0x0003d35e) bg_touch_area_indi_pane_cp02

0xd09d,	// (0x0003d378) bg_touch_area_indi_pane_cp03_ParamLimits

0xd09d,	// (0x0003d378) bg_touch_area_indi_pane_cp03

0xd0b7,	// (0x0003d392) popup_slider_window_g1_ParamLimits

0xd0d3,	// (0x0003d3ae) popup_slider_window_g2_ParamLimits

0xd0ef,	// (0x0003d3ca) popup_slider_window_g3_ParamLimits

0xfcec,	// (0x0003ffc7) popup_slider_window_g_ParamLimits

0xd14b,	// (0x0003d426) popup_slider_window_t1_ParamLimits

0xd1bf,	// (0x0003d49a) small_volume_slider_vertical_pane_ParamLimits

0xdba9,	// (0x0003de84) cell_graphic2_pane_ParamLimits

0xdbfb,	// (0x0003ded6) bg_button_pane_cp10_ParamLimits

0xdbfb,	// (0x0003ded6) bg_button_pane_cp10

0xdc10,	// (0x0003deeb) bg_button_pane_cp11_ParamLimits

0xdc10,	// (0x0003deeb) bg_button_pane_cp11

0xdc25,	// (0x0003df00) graphic2_pages_pane_g1_ParamLimits

0xdc25,	// (0x0003df00) graphic2_pages_pane_g1

0xdc40,	// (0x0003df1b) graphic2_pages_pane_g2_ParamLimits

0xdc40,	// (0x0003df1b) graphic2_pages_pane_g2

0x0001,

0xfdb0,	// (0x0004008b) graphic2_pages_pane_g_ParamLimits

0xfdb0,	// (0x0004008b) graphic2_pages_pane_g

0xdc58,	// (0x0003df33) graphic2_pages_pane_t1_ParamLimits

0xdc58,	// (0x0003df33) graphic2_pages_pane_t1

0xdc6e,	// (0x0003df49) cell_graphic2_control_pane_ParamLimits

0xdc6e,	// (0x0003df49) cell_graphic2_control_pane

0xdc91,	// (0x0003df6c) cell_graphic2_pane_g1_ParamLimits

0xdc91,	// (0x0003df6c) cell_graphic2_pane_g1

0xdc9e,	// (0x0003df79) cell_graphic2_pane_g2_ParamLimits

0xdc9e,	// (0x0003df79) cell_graphic2_pane_g2

0xdcab,	// (0x0003df86) cell_graphic2_pane_g3_ParamLimits

0xdcab,	// (0x0003df86) cell_graphic2_pane_g3

0xdcb8,	// (0x0003df93) cell_graphic2_pane_g4_ParamLimits

0xdcb8,	// (0x0003df93) cell_graphic2_pane_g4

0xdcc5,	// (0x0003dfa0) cell_graphic2_pane_g5_ParamLimits

0xdcc5,	// (0x0003dfa0) cell_graphic2_pane_g5

0x0004,

0xfdb5,	// (0x00040090) cell_graphic2_pane_g_ParamLimits

0xfdb5,	// (0x00040090) cell_graphic2_pane_g

0xdce0,	// (0x0003dfbb) cell_graphic2_pane_t1_ParamLimits

0xdce0,	// (0x0003dfbb) cell_graphic2_pane_t1

0x94d3,	// (0x000397ae) grid_highlight_pane_cp11_ParamLimits

0x94d3,	// (0x000397ae) grid_highlight_pane_cp11

0x234b,	// (0x00032626) bg_button_pane_cp05

0xdd09,	// (0x0003dfe4) cell_graphic2_control_pane_g1

0xba88,	// (0x0003bd63) bg_touch_area_indi_pane_g1

0xdd31,	// (0x0003e00c) aid_cmod_rocker_key_size

0xdd3b,	// (0x0003e016) aid_cmode_itu_key_size

0xdd45,	// (0x0003e020) main_cmode_video_pane

0xdd4f,	// (0x0003e02a) main_comp_mode_itu_pane

0xdd5b,	// (0x0003e036) main_comp_mode_rocker_pane

0xdd67,	// (0x0003e042) cell_cmode_rocker_pane_ParamLimits

0xdd67,	// (0x0003e042) cell_cmode_rocker_pane

0xdd7b,	// (0x0003e056) cell_cmode_itu_pane_ParamLimits

0xdd7b,	// (0x0003e056) cell_cmode_itu_pane

0x282d,	// (0x00032b08) bg_button_pane_cp06_ParamLimits

0x282d,	// (0x00032b08) bg_button_pane_cp06

0xbd03,	// (0x0003bfde) cell_cmode_rocker_pane_g1_ParamLimits

0xbd03,	// (0x0003bfde) cell_cmode_rocker_pane_g1

0xd266,	// (0x0003d541) cell_cmode_rocker_pane_g2_ParamLimits

0xd266,	// (0x0003d541) cell_cmode_rocker_pane_g2

0x0001,

0xfdc5,	// (0x000400a0) cell_cmode_rocker_pane_g_ParamLimits

0xfdc5,	// (0x000400a0) cell_cmode_rocker_pane_g

0xf46b,	// (0x0003f746) bg_button_pane_cp07

0xdd92,	// (0x0003e06d) cell_cmode_itu_pane_g1

0xdd9b,	// (0x0003e076) cell_cmode_itu_pane_t1

0xdda9,	// (0x0003e084) cell_cmode_itu_pane_t2

0x0001,

0xfdca,	// (0x000400a5) cell_cmode_itu_pane_t

0xd494,	// (0x0003d76f) aid_touch_ctrl_left

0xd49c,	// (0x0003d777) aid_touch_ctrl_right

0xf46b,	// (0x0003f746) compa_mode_pane

0xddb7,	// (0x0003e092) aid_cmod_rocker_key_size_cp

0xddc1,	// (0x0003e09c) aid_cmode_itu_key_size_cp

0xddcb,	// (0x0003e0a6) compa_mode_pane_g1

0xddd3,	// (0x0003e0ae) compa_mode_pane_g2

0xdddb,	// (0x0003e0b6) compa_mode_pane_g3

0x0002,

0xfdcf,	// (0x000400aa) compa_mode_pane_g

0xdde3,	// (0x0003e0be) main_comp_mode_itu_pane_cp

0xddeb,	// (0x0003e0c6) main_comp_mode_rocker_pane_cp

0xddf3,	// (0x0003e0ce) cell_cmode_itu_pane_cp_ParamLimits

0xddf3,	// (0x0003e0ce) cell_cmode_itu_pane_cp

0xde08,	// (0x0003e0e3) cell_cmode_rocker_pane_cp_ParamLimits

0xde08,	// (0x0003e0e3) cell_cmode_rocker_pane_cp

0x282d,	// (0x00032b08) bg_button_pane_cp06_cp_ParamLimits

0x282d,	// (0x00032b08) bg_button_pane_cp06_cp

0xbd03,	// (0x0003bfde) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbd03,	// (0x0003bfde) cell_cmode_rocker_pane_g1_cp

0xba88,	// (0x0003bd63) cell_cmode_rocker_pane_g2_cp

0xf46b,	// (0x0003f746) bg_button_pane_cp07_cp

0xde1a,	// (0x0003e0f5) cell_cmode_itu_pane_g1_cp

0xde23,	// (0x0003e0fe) cell_cmode_itu_pane_t1_cp

0xde23,	// (0x0003e0fe) cell_cmode_itu_pane_t2_cp

0xa99d,	// (0x0003ac78) settings_code_pane_cp2

0xf4d9,	// (0x0003f7b4) bg_popup_window_pane_cp3_ParamLimits

0x2539,	// (0x00032814) heading_pane_cp3_ParamLimits

0x2545,	// (0x00032820) listscroll_popup_graphic_pane_ParamLimits

0x76ce,	// (0x000379a9) fep_hwr_aid_pane_ParamLimits

0x7cbf,	// (0x00037f9a) aid_touch_sctrl_top_ParamLimits

0x7cda,	// (0x00037fb5) sctrl_sk_top_pane_g1_ParamLimits

0x793b,	// (0x00037c16) sctrl_sk_top_pane_g2_ParamLimits

0xfd05,	// (0x0003ffe0) sctrl_sk_top_pane_g_ParamLimits

0x7ce7,	// (0x00037fc2) sctrl_sk_top_pane_t1_ParamLimits

0x7cbf,	// (0x00037f9a) aid_touch_sctrl_bottom_ParamLimits

0x7ce7,	// (0x00037fc2) sctrl_sk_bottom_pane_t1_ParamLimits

0xd3da,	// (0x0003d6b5) aid_area_touch_clock

0x7ede,	// (0x000381b9) aid_vkb2_area_top_pane_cell_ParamLimits

0x7ede,	// (0x000381b9) aid_vkb2_area_top_pane_cell

0x8029,	// (0x00038304) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8029,	// (0x00038304) aid_vkb2_area_bottom_pane_cell

0xd93f,	// (0x0003dc1a) popup_char_count_window

0xde31,	// (0x0003e10c) popup_char_count_window_g1

0xde3a,	// (0x0003e115) popup_char_count_window_g2

0xde43,	// (0x0003e11e) popup_char_count_window_g3

0x0002,

0xfdd6,	// (0x000400b1) popup_char_count_window_g

0xde4c,	// (0x0003e127) popup_char_count_window_t1

0x7d98,	// (0x00038073) popup_fep_char_preview_window_ParamLimits

0x7d98,	// (0x00038073) popup_fep_char_preview_window

0x7efc,	// (0x000381d7) vkb2_top_candi_pane_ParamLimits

0x7efc,	// (0x000381d7) vkb2_top_candi_pane

0xde5a,	// (0x0003e135) cell_vkb2_top_candi_pane_ParamLimits

0xde5a,	// (0x0003e135) cell_vkb2_top_candi_pane

0x8314,	// (0x000385ef) bg_popup_fep_char_preview_window_ParamLimits

0x8314,	// (0x000385ef) bg_popup_fep_char_preview_window

0x8322,	// (0x000385fd) popup_fep_char_preview_window_t1_ParamLimits

0x8322,	// (0x000385fd) popup_fep_char_preview_window_t1

0xdeab,	// (0x0003e186) bg_popup_fep_char_preview_window_g1

0xdeb3,	// (0x0003e18e) bg_popup_fep_char_preview_window_g2

0xdebb,	// (0x0003e196) bg_popup_fep_char_preview_window_g3

0xdec3,	// (0x0003e19e) bg_popup_fep_char_preview_window_g4

0xdecb,	// (0x0003e1a6) bg_popup_fep_char_preview_window_g5

0x835c,	// (0x00038637) bg_popup_fep_char_preview_window_g6

0xded3,	// (0x0003e1ae) bg_popup_fep_char_preview_window_g7

0xdedb,	// (0x0003e1b6) bg_popup_fep_char_preview_window_g8

0xdee3,	// (0x0003e1be) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddd,	// (0x000400b8) bg_popup_fep_char_preview_window_g

0x793b,	// (0x00037c16) cell_vkb2_top_candi_pane_g1_ParamLimits

0x793b,	// (0x00037c16) cell_vkb2_top_candi_pane_g1

0x7949,	// (0x00037c24) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7949,	// (0x00037c24) cell_vkb2_top_candi_pane_g2

0xda80,	// (0x0003dd5b) cell_vkb2_top_candi_pane_g3_ParamLimits

0xda80,	// (0x0003dd5b) cell_vkb2_top_candi_pane_g3

0x8364,	// (0x0003863f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8364,	// (0x0003863f) cell_vkb2_top_candi_pane_g4

0xc222,	// (0x0003c4fd) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc222,	// (0x0003c4fd) cell_vkb2_top_candi_pane_g5

0x8385,	// (0x00038660) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8385,	// (0x00038660) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf0,	// (0x000400cb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf0,	// (0x000400cb) cell_vkb2_top_candi_pane_g

0x8393,	// (0x0003866e) cell_vkb2_top_candi_pane_t1

0x74a5,	// (0x00037780) aid_size_touch_slider_mark_ParamLimits

0x74a5,	// (0x00037780) aid_size_touch_slider_mark

0xdae5,	// (0x0003ddc0) grid_graphic2_catg_pane_ParamLimits

0xdae5,	// (0x0003ddc0) grid_graphic2_catg_pane

0xdb83,	// (0x0003de5e) popup_grid_graphic2_window_t1_ParamLimits

0xdb83,	// (0x0003de5e) popup_grid_graphic2_window_t1

0xdb95,	// (0x0003de70) popup_grid_graphic2_window_t2_ParamLimits

0xdb95,	// (0x0003de70) popup_grid_graphic2_window_t2

0x0001,

0xfdab,	// (0x00040086) popup_grid_graphic2_window_t_ParamLimits

0xfdab,	// (0x00040086) popup_grid_graphic2_window_t

0x234b,	// (0x00032626) bg_button_pane_cp05_ParamLimits

0xdd09,	// (0x0003dfe4) cell_graphic2_control_pane_g1_ParamLimits

0xdeeb,	// (0x0003e1c6) cell_graphic2_catg_pane_ParamLimits

0xdeeb,	// (0x0003e1c6) cell_graphic2_catg_pane

0xf46b,	// (0x0003f746) bg_button_pane_cp12

0xdefd,	// (0x0003e1d8) cell_graphic2_catg_pane_g1

0xd3a6,	// (0x0003d681) cell_tb_ext_pane_t1_ParamLimits

0x8146,	// (0x00038421) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8146,	// (0x00038421) vkb2_top_cell_right_narrow_pane

0x815e,	// (0x00038439) vkb2_top_cell_right_wide_pane_ParamLimits

0x815e,	// (0x00038439) vkb2_top_cell_right_wide_pane

0x76c0,	// (0x0003799b) bg_vkb2_func_pane_ParamLimits

0x76c0,	// (0x0003799b) bg_vkb2_func_pane

0x81cf,	// (0x000384aa) vkb2_top_cell_left_pane_g1_ParamLimits

0x76c0,	// (0x0003799b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x76c0,	// (0x0003799b) bg_vkb2_fuc_pane_cp03

0x822d,	// (0x00038508) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9467,	// (0x00039742) bg_vkb2_func_pane_g1

0x946f,	// (0x0003974a) bg_vkb2_func_pane_g2

0x947f,	// (0x0003975a) bg_vkb2_func_pane_g3

0x9477,	// (0x00039752) bg_vkb2_func_pane_g4

0x9487,	// (0x00039762) bg_vkb2_func_pane_g5

0x948f,	// (0x0003976a) bg_vkb2_func_pane_g6

0x9497,	// (0x00039772) bg_vkb2_func_pane_g7

0x949f,	// (0x0003977a) bg_vkb2_func_pane_g8

0x945f,	// (0x0003973a) bg_vkb2_func_pane_g9

0x0008,

0xfdfd,	// (0x000400d8) bg_vkb2_func_pane_g

0x76c0,	// (0x0003799b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x76c0,	// (0x0003799b) bg_vkb2_fuc_pane_cp01

0x81cf,	// (0x000384aa) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x81cf,	// (0x000384aa) vkb2_top_cell_right_wide_pane_g1

0x76c0,	// (0x0003799b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x76c0,	// (0x0003799b) bg_vkb2_fuc_pane_cp02

0x822d,	// (0x00038508) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x822d,	// (0x00038508) vkb2_top_cell_right_narrow_pane_g1

0xcfc7,	// (0x0003d2a2) aid_touch_area_decrease_ParamLimits

0xcfc7,	// (0x0003d2a2) aid_touch_area_decrease

0xcfeb,	// (0x0003d2c6) aid_touch_area_increase_ParamLimits

0xcfeb,	// (0x0003d2c6) aid_touch_area_increase

0xcff7,	// (0x0003d2d2) aid_touch_area_mute_ParamLimits

0xcff7,	// (0x0003d2d2) aid_touch_area_mute

0xd01b,	// (0x0003d2f6) aid_touch_area_slider_ParamLimits

0xd01b,	// (0x0003d2f6) aid_touch_area_slider

0xd10b,	// (0x0003d3e6) popup_slider_window_g4_ParamLimits

0xd10b,	// (0x0003d3e6) popup_slider_window_g4

0xd117,	// (0x0003d3f2) popup_slider_window_g5_ParamLimits

0xd117,	// (0x0003d3f2) popup_slider_window_g5

0xd139,	// (0x0003d414) popup_slider_window_g6_ParamLimits

0xd139,	// (0x0003d414) popup_slider_window_g6

0xd179,	// (0x0003d454) popup_slider_window_t2_ParamLimits

0xd179,	// (0x0003d454) popup_slider_window_t2

0x0001,

0xfcf9,	// (0x0003ffd4) popup_slider_window_t_ParamLimits

0xfcf9,	// (0x0003ffd4) popup_slider_window_t

0xd191,	// (0x0003d46c) slider_pane_ParamLimits

0xd191,	// (0x0003d46c) slider_pane

0xdf06,	// (0x0003e1e1) slider_pane_g1_ParamLimits

0xdf06,	// (0x0003e1e1) slider_pane_g1

0xdf1a,	// (0x0003e1f5) slider_pane_g2_ParamLimits

0xdf1a,	// (0x0003e1f5) slider_pane_g2

0xdf30,	// (0x0003e20b) slider_pane_g3_ParamLimits

0xdf30,	// (0x0003e20b) slider_pane_g3

0x0003,

0xfe10,	// (0x000400eb) slider_pane_g_ParamLimits

0xfe10,	// (0x000400eb) slider_pane_g

0x8e58,	// (0x00039133) popup_tb_float_extension_window_ParamLimits

0x8e58,	// (0x00039133) popup_tb_float_extension_window

0xdf5c,	// (0x0003e237) aid_size_cell_tb_float_ext

0xf46b,	// (0x0003f746) bg_popup_sub_window_cp28

0xdf68,	// (0x0003e243) grid_tb_float_ext_pane

0xdf74,	// (0x0003e24f) cell_tb_float_ext_pane_ParamLimits

0xdf74,	// (0x0003e24f) cell_tb_float_ext_pane

0xdf90,	// (0x0003e26b) cell_tb_float_ext_pane_g1

0xdf99,	// (0x0003e274) grid_highlight_pane_cp12

0x7815,	// (0x00037af0) cell_last_hwr_side_pane_ParamLimits

0x7815,	// (0x00037af0) cell_last_hwr_side_pane

0xba88,	// (0x0003bd63) cell_last_hwr_side_pane_g1

0xdfa2,	// (0x0003e27d) cell_last_hwr_side_pane_g2

0x0001,

0xfe19,	// (0x000400f4) cell_last_hwr_side_pane_g

0x80f5,	// (0x000383d0) vkb2_area_bottom_space_btn_pane_ParamLimits

0x80f5,	// (0x000383d0) vkb2_area_bottom_space_btn_pane

0x793b,	// (0x00037c16) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd9f4,	// (0x0003dccf) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8393,	// (0x0003866e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x83b1,	// (0x0003868c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x83b1,	// (0x0003868c) vkb2_area_bottom_space_btn_pane_g1

0x83eb,	// (0x000386c6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x83eb,	// (0x000386c6) vkb2_area_bottom_space_btn_pane_g2

0x8421,	// (0x000386fc) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8421,	// (0x000386fc) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1e,	// (0x000400f9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1e,	// (0x000400f9) vkb2_area_bottom_space_btn_pane_g

0x7785,	// (0x00037a60) cel_fep_hwr_func_pane_ParamLimits

0x7785,	// (0x00037a60) cel_fep_hwr_func_pane

0x77c1,	// (0x00037a9c) cell_hwr_side_button_pane_ParamLimits

0x77c1,	// (0x00037a9c) cell_hwr_side_button_pane

0xd3da,	// (0x0003d6b5) aid_area_touch_clock_ParamLimits

0x234b,	// (0x00032626) bg_uniindi_top_pane_ParamLimits

0xd3ee,	// (0x0003d6c9) uniindi_top_pane_g1_ParamLimits

0xd404,	// (0x0003d6df) uniindi_top_pane_g2_ParamLimits

0xd410,	// (0x0003d6eb) uniindi_top_pane_g3_ParamLimits

0xd421,	// (0x0003d6fc) uniindi_top_pane_g4_ParamLimits

0xfd31,	// (0x0004000c) uniindi_top_pane_g_ParamLimits

0xd42e,	// (0x0003d709) uniindi_top_pane_t1_ParamLimits

0x234b,	// (0x00032626) bg_vkb2_func_pane_cp01_ParamLimits

0x234b,	// (0x00032626) bg_vkb2_func_pane_cp01

0xdfab,	// (0x0003e286) cel_fep_hwr_func_pane_g1_ParamLimits

0xdfab,	// (0x0003e286) cel_fep_hwr_func_pane_g1

0x234b,	// (0x00032626) bg_vkb2_func_pane_cp02_ParamLimits

0x234b,	// (0x00032626) bg_vkb2_func_pane_cp02

0xdfab,	// (0x0003e286) cell_hwr_side_button_pane_g1_ParamLimits

0xdfab,	// (0x0003e286) cell_hwr_side_button_pane_g1

0x92e0,	// (0x000395bb) status_pane_g4_ParamLimits

0x92e0,	// (0x000395bb) status_pane_g4

0x92fa,	// (0x000395d5) status_pane_t1

0xb827,	// (0x0003bb02) form2_midp_gauge_slider_cont_pane

0xb82f,	// (0x0003bb0a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb841,	// (0x0003bb1c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb853,	// (0x0003bb2e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf1,	// (0x0003fdcc) form2_midp_gauge_slider_pane_t_ParamLimits

0xb865,	// (0x0003bb40) form2_midp_slider_pane_ParamLimits

0x7d58,	// (0x00038033) aid_size_cell_func_vkb2_ParamLimits

0x7d58,	// (0x00038033) aid_size_cell_func_vkb2

0xdf48,	// (0x0003e223) slider_pane_g4_ParamLimits

0xdf48,	// (0x0003e223) slider_pane_g4

0x846b,	// (0x00038746) form2_midp_gauge_slider_pane_t2_cp01

0x8479,	// (0x00038754) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8479,	// (0x00038754) form2_midp_gauge_slider_pane_t3_cp01

0x8496,	// (0x00038771) form2_midp_slider_pane_cp01

0xf46b,	// (0x0003f746) navi_smil_pane

0xdfe4,	// (0x0003e2bf) navi_smil_pane_g1

0xdfec,	// (0x0003e2c7) navi_smil_pane_t1

0xdfb9,	// (0x0003e294) form2_midp_slider_pane_g1

0xdfc2,	// (0x0003e29d) form2_midp_slider_pane_g2

0xdfca,	// (0x0003e2a5) form2_midp_slider_pane_g3

0xdfb9,	// (0x0003e294) form2_midp_slider_pane_g4

0xdfd2,	// (0x0003e2ad) form2_midp_slider_pane_g5

0x0004,

0xfe27,	// (0x00040102) form2_midp_slider_pane_g

0x845b,	// (0x00038736) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x845b,	// (0x00038736) vkb2_area_bottom_space_btn_pane_g4

0x90f7,	// (0x000393d2) lc0_navi_pane_ParamLimits

0x90f7,	// (0x000393d2) lc0_navi_pane

0x9173,	// (0x0003944e) lc0_stat_indi_pane_ParamLimits

0x9173,	// (0x0003944e) lc0_stat_indi_pane

0x918a,	// (0x00039465) ls0_title_pane_ParamLimits

0x918a,	// (0x00039465) ls0_title_pane

0x282d,	// (0x00032b08) bg_popup_sub_pane_cp14_ParamLimits

0xd3c1,	// (0x0003d69c) list_uniindi_pane_ParamLimits

0xd3cd,	// (0x0003d6a8) uniindi_top_pane_ParamLimits

0xd46c,	// (0x0003d747) list_single_uniindi_pane_g1_ParamLimits

0xd47f,	// (0x0003d75a) list_single_uniindi_pane_t1_ParamLimits

0x849f,	// (0x0003877a) lc0_stat_clock_pane_ParamLimits

0x849f,	// (0x0003877a) lc0_stat_clock_pane

0xdffa,	// (0x0003e2d5) lc0_stat_indi_pane_g1_ParamLimits

0xdffa,	// (0x0003e2d5) lc0_stat_indi_pane_g1

0xe007,	// (0x0003e2e2) lc0_stat_indi_pane_g2_ParamLimits

0xe007,	// (0x0003e2e2) lc0_stat_indi_pane_g2

0x0001,

0xfe32,	// (0x0004010d) lc0_stat_indi_pane_g_ParamLimits

0xfe32,	// (0x0004010d) lc0_stat_indi_pane_g

0x84ac,	// (0x00038787) lc0_uni_indicator_pane_ParamLimits

0x84ac,	// (0x00038787) lc0_uni_indicator_pane

0xe014,	// (0x0003e2ef) ls0_title_pane_g1_ParamLimits

0xe014,	// (0x0003e2ef) ls0_title_pane_g1

0xe028,	// (0x0003e303) ls0_title_pane_t1_ParamLimits

0xe028,	// (0x0003e303) ls0_title_pane_t1

0x84b9,	// (0x00038794) lc0_uni_indicator_pane_g1_ParamLimits

0x84b9,	// (0x00038794) lc0_uni_indicator_pane_g1

0xe05e,	// (0x0003e339) lc0_stat_clock_pane_t1

0xf46b,	// (0x0003f746) main_ai5_pane

0xe06c,	// (0x0003e347) ai5_sk_pane_ParamLimits

0xe06c,	// (0x0003e347) ai5_sk_pane

0xe079,	// (0x0003e354) cell_ai5_widget_pane_ParamLimits

0xe079,	// (0x0003e354) cell_ai5_widget_pane

0xe615,	// (0x0003e8f0) aid_size_cell_widget_grid

0xe623,	// (0x0003e8fe) bg_ai5_widget_pane_ParamLimits

0xe623,	// (0x0003e8fe) bg_ai5_widget_pane

0xe697,	// (0x0003e972) cell_ai5_widget_pane_g2

0xe6a7,	// (0x0003e982) cell_ai5_widget_pane_g3

0xe6be,	// (0x0003e999) cell_ai5_widget_pane_g4

0xe6ca,	// (0x0003e9a5) cell_ai5_widget_pane_g5

0xe6d6,	// (0x0003e9b1) cell_ai5_widget_pane_g6

0xe6e2,	// (0x0003e9bd) cell_ai5_widget_pane_g7

0xe72a,	// (0x0003ea05) cell_ai5_widget_pane_t1_ParamLimits

0xe72a,	// (0x0003ea05) cell_ai5_widget_pane_t1

0xe747,	// (0x0003ea22) cell_ai5_widget_pane_t2_ParamLimits

0xe747,	// (0x0003ea22) cell_ai5_widget_pane_t2

0xe75f,	// (0x0003ea3a) cell_ai5_widget_pane_t3_ParamLimits

0xe75f,	// (0x0003ea3a) cell_ai5_widget_pane_t3

0xe777,	// (0x0003ea52) cell_ai5_widget_pane_t4_ParamLimits

0xe777,	// (0x0003ea52) cell_ai5_widget_pane_t4

0xe794,	// (0x0003ea6f) cell_ai5_widget_pane_t5_ParamLimits

0xe794,	// (0x0003ea6f) cell_ai5_widget_pane_t5

0xe7b3,	// (0x0003ea8e) cell_ai5_widget_pane_t6_ParamLimits

0xe7b3,	// (0x0003ea8e) cell_ai5_widget_pane_t6

0xe7c5,	// (0x0003eaa0) cell_ai5_widget_pane_t7_ParamLimits

0xe7c5,	// (0x0003eaa0) cell_ai5_widget_pane_t7

0xe7de,	// (0x0003eab9) cell_ai5_widget_pane_t8_ParamLimits

0xe7de,	// (0x0003eab9) cell_ai5_widget_pane_t8

0x0009,

0xfe4c,	// (0x00040127) cell_ai5_widget_pane_t_ParamLimits

0xfe4c,	// (0x00040127) cell_ai5_widget_pane_t

0xe832,	// (0x0003eb0d) grid_ai5_widget_pane

0x282d,	// (0x00032b08) highlight_cell_ai5_widget_pane_ParamLimits

0x282d,	// (0x00032b08) highlight_cell_ai5_widget_pane

0xe846,	// (0x0003eb21) ai5_sk_left_pane

0xe850,	// (0x0003eb2b) ai5_sk_middle_pane

0xe85a,	// (0x0003eb35) ai5_sk_right_pane

0xe864,	// (0x0003eb3f) bg_ai5_widget_pane_g1_ParamLimits

0xe864,	// (0x0003eb3f) bg_ai5_widget_pane_g1

0xe870,	// (0x0003eb4b) bg_ai5_widget_pane_g2_ParamLimits

0xe870,	// (0x0003eb4b) bg_ai5_widget_pane_g2

0xe87c,	// (0x0003eb57) bg_ai5_widget_pane_g3_ParamLimits

0xe87c,	// (0x0003eb57) bg_ai5_widget_pane_g3

0xe888,	// (0x0003eb63) bg_ai5_widget_pane_g4_ParamLimits

0xe888,	// (0x0003eb63) bg_ai5_widget_pane_g4

0xe894,	// (0x0003eb6f) bg_ai5_widget_pane_g5_ParamLimits

0xe894,	// (0x0003eb6f) bg_ai5_widget_pane_g5

0xe8a0,	// (0x0003eb7b) bg_ai5_widget_pane_g6_ParamLimits

0xe8a0,	// (0x0003eb7b) bg_ai5_widget_pane_g6

0xe8ac,	// (0x0003eb87) bg_ai5_widget_pane_g7_ParamLimits

0xe8ac,	// (0x0003eb87) bg_ai5_widget_pane_g7

0xe8b8,	// (0x0003eb93) bg_ai5_widget_pane_g8_ParamLimits

0xe8b8,	// (0x0003eb93) bg_ai5_widget_pane_g8

0xe8c4,	// (0x0003eb9f) bg_ai5_widget_pane_g9_ParamLimits

0xe8c4,	// (0x0003eb9f) bg_ai5_widget_pane_g9

0x0008,

0xfe61,	// (0x0004013c) bg_ai5_widget_pane_g_ParamLimits

0xfe61,	// (0x0004013c) bg_ai5_widget_pane_g

0xe8fa,	// (0x0003ebd5) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8fa,	// (0x0003ebd5) cell_shortcut_ai5_widget_pane

0x6e65,	// (0x00037140) bg_cell_shortcut_ai5_widget_pane

0xe90d,	// (0x0003ebe8) cell_grid_ai5_widget_pane_g1

0xe916,	// (0x0003ebf1) highlight_cell_shortcut_ai5_widget_pane

0x9467,	// (0x00039742) ai5_sk_left_pane_g1

0xe91e,	// (0x0003ebf9) ai5_sk_left_pane_g2

0xe926,	// (0x0003ec01) ai5_sk_left_pane_g3

0xe92e,	// (0x0003ec09) ai5_sk_left_pane_g4

0x0003,

0xfe74,	// (0x0004014f) ai5_sk_left_pane_g

0xe936,	// (0x0003ec11) ai5_sk_left_pane_t1

0x946f,	// (0x0003974a) ai5_sk_right_pane_g1

0xe944,	// (0x0003ec1f) ai5_sk_right_pane_g2

0xe94c,	// (0x0003ec27) ai5_sk_right_pane_g3

0xe954,	// (0x0003ec2f) ai5_sk_right_pane_g4

0x0003,

0xfe7d,	// (0x00040158) ai5_sk_right_pane_g

0xe95c,	// (0x0003ec37) ai5_sk_right_pane_t1

0x946f,	// (0x0003974a) ai5_sk_middle_pane_g1

0x9467,	// (0x00039742) ai5_sk_middle_pane_g2

0x9487,	// (0x00039762) ai5_sk_middle_pane_g3

0xe94c,	// (0x0003ec27) ai5_sk_middle_pane_g4

0xe926,	// (0x0003ec01) ai5_sk_middle_pane_g5

0xe96a,	// (0x0003ec45) ai5_sk_middle_pane_g6

0xe972,	// (0x0003ec4d) ai5_sk_middle_pane_g7

0x0006,

0xfe86,	// (0x00040161) ai5_sk_middle_pane_g

0x8f79,	// (0x00039254) aid_touch_area_size_lc0_ParamLimits

0x8f79,	// (0x00039254) aid_touch_area_size_lc0

0x796a,	// (0x00037c45) cell_hwr_candidate_pane_t1_ParamLimits

0x8f97,	// (0x00039272) aid_touch_navi_pane

0x928a,	// (0x00039565) status_dt_navi_pane_ParamLimits

0x928a,	// (0x00039565) status_dt_navi_pane

0x9297,	// (0x00039572) status_dt_sta_pane_ParamLimits

0x9297,	// (0x00039572) status_dt_sta_pane

0xe97a,	// (0x0003ec55) dt_sta_controll_pane

0xe987,	// (0x0003ec62) dt_sta_indi_pane

0xe998,	// (0x0003ec73) dt_sta_title_pane

0x234b,	// (0x00032626) bg_dt_sta_indi_pane_ParamLimits

0x234b,	// (0x00032626) bg_dt_sta_indi_pane

0xe9ab,	// (0x0003ec86) dt_sta_battery_pane

0xe9b3,	// (0x0003ec8e) dt_sta_indi_pane_g1

0xe9bc,	// (0x0003ec97) dt_sta_indi_pane_g2

0xe9c5,	// (0x0003eca0) dt_sta_indi_pane_g3

0x0002,

0xfe95,	// (0x00040170) dt_sta_indi_pane_g

0xe9ce,	// (0x0003eca9) dt_sta_signal_pane

0x282d,	// (0x00032b08) bg_dt_sta_title_pane_ParamLimits

0x282d,	// (0x00032b08) bg_dt_sta_title_pane

0xe9d7,	// (0x0003ecb2) dt_sta_title_pane_g1

0xe9df,	// (0x0003ecba) dt_sta_title_pane_t1_ParamLimits

0xe9df,	// (0x0003ecba) dt_sta_title_pane_t1

0xf46b,	// (0x0003f746) bg_dt_sta_control_pane

0xe9f4,	// (0x0003eccf) dt_sta_controll_pane_g1

0xe9fd,	// (0x0003ecd8) bg_dt_sta_title_pane_g1

0xea06,	// (0x0003ece1) bg_dt_sta_title_pane_g2

0xea0f,	// (0x0003ecea) bg_dt_sta_title_pane_g3

0x0002,

0xfe9c,	// (0x00040177) bg_dt_sta_title_pane_g

0xba88,	// (0x0003bd63) bg_dt_sta_indi_pane_g1

0xea18,	// (0x0003ecf3) dt_sta_signal_pane_g1

0xea20,	// (0x0003ecfb) dt_sta_signal_pane_g2

0x0001,

0xfea3,	// (0x0004017e) dt_sta_signal_pane_g

0xea28,	// (0x0003ed03) dt_sta_battery_pane_g1

0xea31,	// (0x0003ed0c) dt_sta_battery_pane_t1

0xba88,	// (0x0003bd63) bg_dt_sta_control_pane_g1

0x2d91,	// (0x0003306c) fep_china_uni_eep_pane

0x2d99,	// (0x00033074) fep_china_uni_entry_pane_ParamLimits

0x2da9,	// (0x00033084) popup_fep_china_uni_window_g1_ParamLimits

0x2db9,	// (0x00033094) popup_fep_china_uni_window_g2_ParamLimits

0x2db9,	// (0x00033094) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0003f9f9) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0003f9f9) popup_fep_china_uni_window_g

0xea40,	// (0x0003ed1b) fep_china_uni_eep_pane_g1

0xea48,	// (0x0003ed23) fep_china_uni_eep_pane_t1

0xdfdb,	// (0x0003e2b6) aid_touch_area_size_smil_player

0x90ef,	// (0x000393ca) lc0_clock_pane

0x92ee,	// (0x000395c9) status_pane_g5_ParamLimits

0x92ee,	// (0x000395c9) status_pane_g5

0x8add,	// (0x00038db8) popup_keymap_window

0x92ac,	// (0x00039587) status_icon_pane

0xe6a7,	// (0x0003e982) cell_ai5_widget_pane_g3_ParamLimits

0xe6be,	// (0x0003e999) cell_ai5_widget_pane_g4_ParamLimits

0xe6ca,	// (0x0003e9a5) cell_ai5_widget_pane_g5_ParamLimits

0xe6ee,	// (0x0003e9c9) cell_ai5_widget_pane_g8_ParamLimits

0xe6ee,	// (0x0003e9c9) cell_ai5_widget_pane_g8

0xe702,	// (0x0003e9dd) cell_ai5_widget_pane_g9_ParamLimits

0xe702,	// (0x0003e9dd) cell_ai5_widget_pane_g9

0xe716,	// (0x0003e9f1) cell_ai5_widget_pane_g10_ParamLimits

0xe716,	// (0x0003e9f1) cell_ai5_widget_pane_g10

0xea57,	// (0x0003ed32) status_icon_pane_g1

0xf46b,	// (0x0003f746) bg_popup_sub_pane_cp13

0xea5f,	// (0x0003ed3a) popup_keymap_window_t1

0x886b,	// (0x00038b46) control_pane_g6_ParamLimits

0x886b,	// (0x00038b46) control_pane_g6

0x8878,	// (0x00038b53) control_pane_g7_ParamLimits

0x8878,	// (0x00038b53) control_pane_g7

0x8885,	// (0x00038b60) control_pane_g8_ParamLimits

0x8885,	// (0x00038b60) control_pane_g8

0xe97a,	// (0x0003ec55) dt_sta_controll_pane_ParamLimits

0xe987,	// (0x0003ec62) dt_sta_indi_pane_ParamLimits

0xe998,	// (0x0003ec73) dt_sta_title_pane_ParamLimits

0x276f,	// (0x00032a4a) aid_size_touch_scroll_bar_cale

0x5971,	// (0x00035c4c) popup_discreet_window_ParamLimits

0x5971,	// (0x00035c4c) popup_discreet_window

0x59ff,	// (0x00035cda) popup_sk_window

0x9aaf,	// (0x00039d8a) bg_popup_sub_pane_cp28_ParamLimits

0x9aaf,	// (0x00039d8a) bg_popup_sub_pane_cp28

0xea6d,	// (0x0003ed48) popup_discreet_window_g1_ParamLimits

0xea6d,	// (0x0003ed48) popup_discreet_window_g1

0xea8d,	// (0x0003ed68) popup_discreet_window_t1_ParamLimits

0xea8d,	// (0x0003ed68) popup_discreet_window_t1

0xeaab,	// (0x0003ed86) popup_discreet_window_t2_ParamLimits

0xeaab,	// (0x0003ed86) popup_discreet_window_t2

0x0002,

0xfea8,	// (0x00040183) popup_discreet_window_t_ParamLimits

0xfea8,	// (0x00040183) popup_discreet_window_t

0x84cc,	// (0x000387a7) popup_sk_window_g1

0x84d6,	// (0x000387b1) popup_sk_window_g2

0x0001,

0xfeaf,	// (0x0004018a) popup_sk_window_g

0x84e0,	// (0x000387bb) popup_sk_window_t1

0x84f0,	// (0x000387cb) popup_sk_window_t1_copy1

0xe697,	// (0x0003e972) cell_ai5_widget_pane_g2_ParamLimits

0xe7f0,	// (0x0003eacb) cell_ai5_widget_pane_t9_ParamLimits

0xe7f0,	// (0x0003eacb) cell_ai5_widget_pane_t9

0xf46b,	// (0x0003f746) main_fep_fshwr2_pane

0x84fe,	// (0x000387d9) aid_fshwr2_btn_pane

0x850a,	// (0x000387e5) aid_fshwr2_syb_pane

0x851b,	// (0x000387f6) aid_fshwr2_txt_pane

0x8527,	// (0x00038802) fshwr2_func_candi_pane

0x853b,	// (0x00038816) fshwr2_hwr_syb_pane

0x854e,	// (0x00038829) fshwr2_icf_pane

0xf46b,	// (0x0003f746) fshwr2_icf_bg_pane

0xeafd,	// (0x0003edd8) fshwr2_icf_pane_t1_ParamLimits

0xeafd,	// (0x0003edd8) fshwr2_icf_pane_t1

0x2d0f,	// (0x00032fea) fshwr2_func_candi_pane_g1

0xeb15,	// (0x0003edf0) fshwr2_func_candi_row_pane_ParamLimits

0xeb15,	// (0x0003edf0) fshwr2_func_candi_row_pane

0xeb25,	// (0x0003ee00) cell_fshwr2_syb_pane_ParamLimits

0xeb25,	// (0x0003ee00) cell_fshwr2_syb_pane

0xbd03,	// (0x0003bfde) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbd03,	// (0x0003bfde) fshwr2_hwr_syb_pane_g1

0xf46b,	// (0x0003f746) bg_popup_call_pane_cp01

0xeb3f,	// (0x0003ee1a) fshwr2_func_candi_cell_pane_ParamLimits

0xeb3f,	// (0x0003ee1a) fshwr2_func_candi_cell_pane

0xeb67,	// (0x0003ee42) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb67,	// (0x0003ee42) fshwr2_func_candi_cell_bg_pane

0xeb73,	// (0x0003ee4e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xeb73,	// (0x0003ee4e) fshwr2_func_candi_cell_pane_g1

0xeb93,	// (0x0003ee6e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xeb93,	// (0x0003ee6e) fshwr2_func_candi_cell_pane_t1

0xf46b,	// (0x0003f746) bg_button_pane_cp08

0x6e65,	// (0x00037140) cell_fshwr2_syb_bg_pane

0xeba6,	// (0x0003ee81) cell_fshwr2_syb_bg_pane_g1

0xebae,	// (0x0003ee89) cell_fshwr2_syb_bg_pane_t1

0x282d,	// (0x00032b08) main_tmo_pane

0xa5d3,	// (0x0003a8ae) uni_indicator_pane_g1_ParamLimits

0xa5ea,	// (0x0003a8c5) uni_indicator_pane_g2_ParamLimits

0xa600,	// (0x0003a8db) uni_indicator_pane_g3_ParamLimits

0xa615,	// (0x0003a8f0) uni_indicator_pane_g4_ParamLimits

0xa615,	// (0x0003a8f0) uni_indicator_pane_g4

0xa629,	// (0x0003a904) uni_indicator_pane_g5_ParamLimits

0xa629,	// (0x0003a904) uni_indicator_pane_g5

0xa629,	// (0x0003a904) uni_indicator_pane_g6_ParamLimits

0xa629,	// (0x0003a904) uni_indicator_pane_g6

0xf922,	// (0x0003fbfd) uni_indicator_pane_g_ParamLimits

0xcf97,	// (0x0003d272) popup_tmo_note_window_ParamLimits

0xcf97,	// (0x0003d272) popup_tmo_note_window

0x7d3a,	// (0x00038015) fshwr2_bg_pane

0xeb84,	// (0x0003ee5f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeb84,	// (0x0003ee5f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb4,	// (0x0004018f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb4,	// (0x0004018f) fshwr2_func_candi_cell_pane_g

0xba88,	// (0x0003bd63) bg_popup_window_pane_cp01

0xebbd,	// (0x0003ee98) bg_popup_window_pane_g1_cp01

0xebc6,	// (0x0003eea1) bg_popup_window_pane_cp22_ParamLimits

0xebc6,	// (0x0003eea1) bg_popup_window_pane_cp22

0xebd4,	// (0x0003eeaf) listscroll_tmo_link_pane_ParamLimits

0xebd4,	// (0x0003eeaf) listscroll_tmo_link_pane

0xec14,	// (0x0003eeef) popup_tmo_note_window_g1_ParamLimits

0xec14,	// (0x0003eeef) popup_tmo_note_window_g1

0xec21,	// (0x0003eefc) tmo_note_info_pane_ParamLimits

0xec21,	// (0x0003eefc) tmo_note_info_pane

0xec3b,	// (0x0003ef16) list_tmo_note_info_pane_g1_ParamLimits

0xec3b,	// (0x0003ef16) list_tmo_note_info_pane_g1

0xec52,	// (0x0003ef2d) list_tmo_note_info_pane_g2_ParamLimits

0xec52,	// (0x0003ef2d) list_tmo_note_info_pane_g2

0x0001,

0xfeb9,	// (0x00040194) list_tmo_note_info_pane_g_ParamLimits

0xfeb9,	// (0x00040194) list_tmo_note_info_pane_g

0xec6e,	// (0x0003ef49) list_tmo_note_info_text_pane_ParamLimits

0xec6e,	// (0x0003ef49) list_tmo_note_info_text_pane

0xecf3,	// (0x0003efce) list_tmo_link_pane

0xed00,	// (0x0003efdb) scroll_pane_cp20

0xed0d,	// (0x0003efe8) list_single_tmo_link_pane_ParamLimits

0xed0d,	// (0x0003efe8) list_single_tmo_link_pane

0xed1d,	// (0x0003eff8) list_single_tmo_link_pane_t1

0xed2b,	// (0x0003f006) list_tmo_note_info_text_pane_t1_ParamLimits

0xed2b,	// (0x0003f006) list_tmo_note_info_text_pane_t1

0x642a,	// (0x00036705) aid_size_touch_scroll_bar_cp01_ParamLimits

0x642a,	// (0x00036705) aid_size_touch_scroll_bar_cp01

0x6354,	// (0x0003662f) aid_size_touch_slider_marker

0x59e7,	// (0x00035cc2) popup_settings_window_ParamLimits

0x59e7,	// (0x00035cc2) popup_settings_window

0x43be,	// (0x00034699) popup_candi_list_indi_window

0x8f97,	// (0x00039272) aid_touch_navi_pane_ParamLimits

0x7c93,	// (0x00037f6e) rs_clock_indi_pane

0x7c9c,	// (0x00037f77) sctrl_sk_bottom_pane_ParamLimits

0x7cad,	// (0x00037f88) sctrl_sk_top_pane_ParamLimits

0x7db2,	// (0x0003808d) popup_fep_tooltip_window

0xe615,	// (0x0003e8f0) aid_size_cell_widget_grid_ParamLimits

0xe682,	// (0x0003e95d) cell_ai5_widget_pane_g1_ParamLimits

0xe682,	// (0x0003e95d) cell_ai5_widget_pane_g1

0xe6d6,	// (0x0003e9b1) cell_ai5_widget_pane_g6_ParamLimits

0xe6e2,	// (0x0003e9bd) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe37,	// (0x00040112) cell_ai5_widget_pane_g_ParamLimits

0xfe37,	// (0x00040112) cell_ai5_widget_pane_g

0xe814,	// (0x0003eaef) cell_ai5_widget_pane_t10_ParamLimits

0xe814,	// (0x0003eaef) cell_ai5_widget_pane_t10

0xe832,	// (0x0003eb0d) grid_ai5_widget_pane_ParamLimits

0xe8d0,	// (0x0003ebab) cell_contacts_ai5_widget_pane_ParamLimits

0xe8d0,	// (0x0003ebab) cell_contacts_ai5_widget_pane

0xeac0,	// (0x0003ed9b) popup_discreet_window_t3_ParamLimits

0xeac0,	// (0x0003ed9b) popup_discreet_window_t3

0x8563,	// (0x0003883e) popup_fshwr2_char_preview_window_ParamLimits

0x8563,	// (0x0003883e) popup_fshwr2_char_preview_window

0xec8c,	// (0x0003ef67) tmo_note_info_pane_t1

0xeca1,	// (0x0003ef7c) tmo_note_info_pane_t2

0xecba,	// (0x0003ef95) tmo_note_info_pane_t3

0xeccf,	// (0x0003efaa) tmo_note_info_pane_t4

0xece1,	// (0x0003efbc) tmo_note_info_pane_t5

0x0004,

0xfebe,	// (0x00040199) tmo_note_info_pane_t

0xecf3,	// (0x0003efce) list_tmo_link_pane_ParamLimits

0xed00,	// (0x0003efdb) scroll_pane_cp20_ParamLimits

0xf46b,	// (0x0003f746) bg_popup_fep_char_preview_window_cp01

0xed44,	// (0x0003f01f) popup_fshwr2_char_preview_window_t1

0xed52,	// (0x0003f02d) popup_candi_list_indi_window_g1

0xed5b,	// (0x0003f036) bg_cell_contacts_ai5_widget_pane

0xed67,	// (0x0003f042) cell_contacts_ai5_widget_pane_g1

0xed7b,	// (0x0003f056) cell_contacts_ai5_widget_pane_g2

0xed87,	// (0x0003f062) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec9,	// (0x000401a4) cell_contacts_ai5_widget_pane_g

0xed9a,	// (0x0003f075) cell_contacts_ai5_widget_pane_t1

0x282d,	// (0x00032b08) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee14,	// (0x0003f0ef) settings_container_pane

0x6e65,	// (0x00037140) listscroll_set_pane_copy1

0xb1a3,	// (0x0003b47e) scroll_pane_cp121_copy1

0xee20,	// (0x0003f0fb) set_content_pane_copy1

0xee28,	// (0x0003f103) aid_height_set_list_copy1_ParamLimits

0xee28,	// (0x0003f103) aid_height_set_list_copy1

0xa829,	// (0x0003ab04) aid_size_parent_copy1_ParamLimits

0xa829,	// (0x0003ab04) aid_size_parent_copy1

0xee34,	// (0x0003f10f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee34,	// (0x0003f10f) button_value_adjust_pane_cp6_copy1

0x891e,	// (0x00038bf9) list_highlight_pane_cp2_copy1_ParamLimits

0x891e,	// (0x00038bf9) list_highlight_pane_cp2_copy1

0xee48,	// (0x0003f123) list_set_pane_copy1_ParamLimits

0xee48,	// (0x0003f123) list_set_pane_copy1

0xedaf,	// (0x0003f08a) main_pane_set_t1_copy1_ParamLimits

0xedaf,	// (0x0003f08a) main_pane_set_t1_copy1

0xede9,	// (0x0003f0c4) main_pane_set_t2_copy1_ParamLimits

0xede9,	// (0x0003f0c4) main_pane_set_t2_copy1

0xef0f,	// (0x0003f1ea) main_pane_set_t3_copy1

0xef1d,	// (0x0003f1f8) main_pane_set_t4_copy1

0xee08,	// (0x0003f0e3) set_content_pane_g1_copy1_ParamLimits

0xee08,	// (0x0003f0e3) set_content_pane_g1_copy1

0xef2b,	// (0x0003f206) setting_code_pane_copy1

0xef33,	// (0x0003f20e) setting_slider_graphic_pane_copy1

0xef33,	// (0x0003f20e) setting_slider_pane_copy1

0xef33,	// (0x0003f20e) setting_text_pane_copy1

0xef33,	// (0x0003f20e) setting_volume_pane_copy1

0xef2b,	// (0x0003f206) settings_code_pane_cp2_copy1

0xef3b,	// (0x0003f216) settings_code_pane_cp_copy1_ParamLimits

0xef3b,	// (0x0003f216) settings_code_pane_cp_copy1

0x857b,	// (0x00038856) volume_set_pane_copy1

0xef4f,	// (0x0003f22a) volume_set_pane_g10_copy1

0xef5b,	// (0x0003f236) volume_set_pane_g1_copy1

0xef65,	// (0x0003f240) volume_set_pane_g2_copy1

0xef6f,	// (0x0003f24a) volume_set_pane_g3_copy1

0xef79,	// (0x0003f254) volume_set_pane_g4_copy1

0xef83,	// (0x0003f25e) volume_set_pane_g5_copy1

0xef8d,	// (0x0003f268) volume_set_pane_g6_copy1

0xef97,	// (0x0003f272) volume_set_pane_g7_copy1

0xefa1,	// (0x0003f27c) volume_set_pane_g8_copy1

0xefab,	// (0x0003f286) volume_set_pane_g9_copy1

0xf4d9,	// (0x0003f7b4) bg_set_opt_pane_cp_copy1_ParamLimits

0xf4d9,	// (0x0003f7b4) bg_set_opt_pane_cp_copy1

0x8587,	// (0x00038862) setting_slider_pane_t1_copy1_ParamLimits

0x8587,	// (0x00038862) setting_slider_pane_t1_copy1

0x85a5,	// (0x00038880) setting_slider_pane_t2_copy1_ParamLimits

0x85a5,	// (0x00038880) setting_slider_pane_t2_copy1

0x85bf,	// (0x0003889a) setting_slider_pane_t3_copy1_ParamLimits

0x85bf,	// (0x0003889a) setting_slider_pane_t3_copy1

0x85d7,	// (0x000388b2) slider_set_pane_copy1_ParamLimits

0x85d7,	// (0x000388b2) slider_set_pane_copy1

0x2888,	// (0x00032b63) set_opt_bg_pane_g1_copy2

0x2890,	// (0x00032b6b) set_opt_bg_pane_g2_copy2

0xefb5,	// (0x0003f290) set_opt_bg_pane_g3_copy2

0x28a0,	// (0x00032b7b) set_opt_bg_pane_g4_copy2

0x28a8,	// (0x00032b83) set_opt_bg_pane_g5_copy2

0x28b0,	// (0x00032b8b) set_opt_bg_pane_g6_copy2

0xefbf,	// (0x0003f29a) set_opt_bg_pane_g7_copy2

0xefc9,	// (0x0003f2a4) set_opt_bg_pane_g8_copy2

0xefd3,	// (0x0003f2ae) set_opt_bg_pane_g9_copy2

0xefdd,	// (0x0003f2b8) aid_size_touch_slider_mark_copy1_ParamLimits

0xefdd,	// (0x0003f2b8) aid_size_touch_slider_mark_copy1

0xeff1,	// (0x0003f2cc) slider_set_pane_g1_copy1

0xeffa,	// (0x0003f2d5) slider_set_pane_g2_copy1

0xda3e,	// (0x0003dd19) slider_set_pane_g3_copy1_ParamLimits

0xda3e,	// (0x0003dd19) slider_set_pane_g3_copy1

0xda52,	// (0x0003dd2d) slider_set_pane_g4_copy1_ParamLimits

0xda52,	// (0x0003dd2d) slider_set_pane_g4_copy1

0xda6a,	// (0x0003dd45) slider_set_pane_g5_copy1_ParamLimits

0xda6a,	// (0x0003dd45) slider_set_pane_g5_copy1

0xda3e,	// (0x0003dd19) slider_set_pane_g6_copy1_ParamLimits

0xda3e,	// (0x0003dd19) slider_set_pane_g6_copy1

0xf002,	// (0x0003f2dd) slider_set_pane_g7_copy1_ParamLimits

0xf002,	// (0x0003f2dd) slider_set_pane_g7_copy1

0xf47f,	// (0x0003f75a) bg_set_opt_pane_cp2_copy1

0xf018,	// (0x0003f2f3) setting_slider_graphic_pane_g1_copy1

0xf021,	// (0x0003f2fc) setting_slider_graphic_pane_t1_copy1

0xf031,	// (0x0003f30c) setting_slider_graphic_pane_t2_copy1

0xf041,	// (0x0003f31c) slider_set_pane_cp_copy1

0xf051,	// (0x0003f32c) input_focus_pane_cp1_copy1

0xf05a,	// (0x0003f335) list_set_text_pane_copy1

0xf062,	// (0x0003f33d) setting_text_pane_g1_copy1

0x4c01,	// (0x00034edc) set_text_pane_t1_copy1

0xf051,	// (0x0003f32c) input_focus_pane_cp2_copy1

0xf062,	// (0x0003f33d) setting_code_pane_g1_copy1

0xf06b,	// (0x0003f346) setting_code_pane_t1_copy1

0xf079,	// (0x0003f354) list_set_graphic_pane_copy1

0xf47f,	// (0x0003f75a) bg_set_opt_pane_cp4_copy1

0x6b5f,	// (0x00036e3a) list_set_graphic_pane_g1_copy1_ParamLimits

0x6b5f,	// (0x00036e3a) list_set_graphic_pane_g1_copy1

0xf08b,	// (0x0003f366) list_set_graphic_pane_g2_copy1

0x6b77,	// (0x00036e52) list_set_graphic_pane_t1_copy1_ParamLimits

0x6b77,	// (0x00036e52) list_set_graphic_pane_t1_copy1

0xba88,	// (0x0003bd63) rs_clock_indi_pane_g1

0xf093,	// (0x0003f36e) rs_clock_indi_pane_t1

0xf0a1,	// (0x0003f37c) rs_indi_pane

0xf0a9,	// (0x0003f384) rs_indi_pane_g1

0xf0b2,	// (0x0003f38d) rs_indi_pane_g2

0xf0bb,	// (0x0003f396) rs_indi_pane_g3

0x0002,

0xfed0,	// (0x000401ab) rs_indi_pane_g

0x6e65,	// (0x00037140) bg_popup_preview_window_pane_cp03

0xf0c4,	// (0x0003f39f) popup_fep_tooltip_window_t1

0xc73f,	// (0x0003ca1a) popup_note2_window_g2_ParamLimits

0xc73f,	// (0x0003ca1a) popup_note2_window_g2

0x0001,

0xfc69,	// (0x0003ff44) popup_note2_window_g_ParamLimits

0xfc69,	// (0x0003ff44) popup_note2_window_g

0xcc47,	// (0x0003cf22) bg_popup_sub_pane_cp11_ParamLimits

0xcc54,	// (0x0003cf2f) cell_ai3_links_pane_g1_ParamLimits

0xcc6b,	// (0x0003cf46) cell_ai3_links_pane_t1

0x4c01,	// (0x00034edc) set_text_pane_t1_copy1_ParamLimits

0x6d72,	// (0x0003704d) cell_graphic_popup_pane_cp2_ParamLimits

0x6d72,	// (0x0003704d) cell_graphic_popup_pane_cp2

0xf0d2,	// (0x0003f3ad) cell_graphic_popup_pane_g1_cp2

0x2582,	// (0x0003285d) cell_graphic_popup_pane_g2_cp2

0xf0da,	// (0x0003f3b5) cell_graphic_popup_pane_g3_cp2

0xf0e2,	// (0x0003f3bd) cell_graphic_popup_pane_t2_cp2

0x2593,	// (0x0003286e) grid_highlight_pane_cp3_cp2

0x2b31,	// (0x00032e0c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x282d,	// (0x00032b08) main_tmo_pane_ParamLimits

0xcf8b,	// (0x0003d266) popup_tmo_big_image_note_window

0xe671,	// (0x0003e94c) cell_ai5_widget_list_pane

0xe679,	// (0x0003e954) cell_ai5_widget_lrg_icon_pane

0xec8c,	// (0x0003ef67) tmo_note_info_pane_t1_ParamLimits

0xeca1,	// (0x0003ef7c) tmo_note_info_pane_t2_ParamLimits

0xecba,	// (0x0003ef95) tmo_note_info_pane_t3_ParamLimits

0xeccf,	// (0x0003efaa) tmo_note_info_pane_t4_ParamLimits

0xece1,	// (0x0003efbc) tmo_note_info_pane_t5_ParamLimits

0xfebe,	// (0x00040199) tmo_note_info_pane_t_ParamLimits

0xee14,	// (0x0003f0ef) settings_container_pane_ParamLimits

0xf049,	// (0x0003f324) indicator_popup_pane_cp5

0xf049,	// (0x0003f324) indicator_popup_pane_cp6

0xf079,	// (0x0003f354) list_set_graphic_pane_copy1_ParamLimits

0xf46b,	// (0x0003f746) bg_popup_window_pane_cp23

0xf0f0,	// (0x0003f3cb) popup_tmo_big_image_note_window_g1

0xf0fc,	// (0x0003f3d7) popup_tmo_big_image_note_window_t1

0xf10c,	// (0x0003f3e7) popup_tmo_big_image_note_window_t2

0xf11c,	// (0x0003f3f7) popup_tmo_big_image_note_window_t3

0x0002,

0xfed7,	// (0x000401b2) popup_tmo_big_image_note_window_t

0xba88,	// (0x0003bd63) cell_ai5_widget_lrg_icon_pane_g1

0xf12c,	// (0x0003f407) cell_ai5_widget_lrg_icon_pane_t1

0xf13a,	// (0x0003f415) cell_ai5_widget_list_row_pane_ParamLimits

0xf13a,	// (0x0003f415) cell_ai5_widget_list_row_pane

0xf153,	// (0x0003f42e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf153,	// (0x0003f42e) cell_ai5_widget_list_row_pane_g1

0xf160,	// (0x0003f43b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf160,	// (0x0003f43b) cell_ai5_widget_list_row_pane_t1

0xf18b,	// (0x0003f466) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf18b,	// (0x0003f466) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfede,	// (0x000401b9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfede,	// (0x000401b9) cell_ai5_widget_list_row_pane_t

0x5894,	// (0x00035b6f) main_fep_vtchi_ss_pane

0x85fc,	// (0x000388d7) popup_fep_char_pre_window

0x8604,	// (0x000388df) popup_fep_ituss_window

0x8625,	// (0x00038900) popup_fep_vkbss_window

0xf1b3,	// (0x0003f48e) grid_vkbss_keypad_pane_ParamLimits

0xf1b3,	// (0x0003f48e) grid_vkbss_keypad_pane

0xf1c3,	// (0x0003f49e) ituss_keypad_pane

0x8652,	// (0x0003892d) aid_vkbss_key_offset_ParamLimits

0x8652,	// (0x0003892d) aid_vkbss_key_offset

0x865e,	// (0x00038939) cell_vkbss_key_pane_ParamLimits

0x865e,	// (0x00038939) cell_vkbss_key_pane

0xf1d3,	// (0x0003f4ae) bg_cell_vkbss_key_g1_ParamLimits

0xf1d3,	// (0x0003f4ae) bg_cell_vkbss_key_g1

0xf1df,	// (0x0003f4ba) cell_vkbss_key_3p_pane_ParamLimits

0xf1df,	// (0x0003f4ba) cell_vkbss_key_3p_pane

0xf1f9,	// (0x0003f4d4) cell_vkbss_key_g1_ParamLimits

0xf1f9,	// (0x0003f4d4) cell_vkbss_key_g1

0xf213,	// (0x0003f4ee) cell_vkbss_key_t1_ParamLimits

0xf213,	// (0x0003f4ee) cell_vkbss_key_t1

0x8674,	// (0x0003894f) cell_ituss_key_pane_ParamLimits

0x8674,	// (0x0003894f) cell_ituss_key_pane

0xf23e,	// (0x0003f519) bg_cell_ituss_key_g1_ParamLimits

0xf23e,	// (0x0003f519) bg_cell_ituss_key_g1

0xf24a,	// (0x0003f525) cell_ituss_key_pane_g1_ParamLimits

0xf24a,	// (0x0003f525) cell_ituss_key_pane_g1

0xf25e,	// (0x0003f539) cell_ituss_key_pane_g2_ParamLimits

0xf25e,	// (0x0003f539) cell_ituss_key_pane_g2

0x0001,

0xfee5,	// (0x000401c0) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x000401c0) cell_ituss_key_pane_g

0xf290,	// (0x0003f56b) cell_ituss_key_t1_ParamLimits

0xf290,	// (0x0003f56b) cell_ituss_key_t1

0xf2ce,	// (0x0003f5a9) cell_ituss_key_t2_ParamLimits

0xf2ce,	// (0x0003f5a9) cell_ituss_key_t2

0xf2ff,	// (0x0003f5da) cell_ituss_key_t3_ParamLimits

0xf2ff,	// (0x0003f5da) cell_ituss_key_t3

0xf330,	// (0x0003f60b) cell_ituss_key_t4_ParamLimits

0xf330,	// (0x0003f60b) cell_ituss_key_t4

0x0003,

0xfeea,	// (0x000401c5) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x000401c5) cell_ituss_key_t

0xf361,	// (0x0003f63c) cell_vkbss_key_3p_pane_g1

0xf369,	// (0x0003f644) cell_vkbss_key_3p_pane_g2

0xf371,	// (0x0003f64c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x000401ce) cell_vkbss_key_3p_pane_g

0xf46b,	// (0x0003f746) bg_popup_fep_char_preview_window_cp02

0xf379,	// (0x0003f654) popup_fep_char_pre_window_t1

0xe60b,	// (0x0003e8e6) main_ai5_sk_pane

0xed5b,	// (0x0003f036) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed67,	// (0x0003f042) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed7b,	// (0x0003f056) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed87,	// (0x0003f062) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec9,	// (0x000401a4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed9a,	// (0x0003f075) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x282d,	// (0x00032b08) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf388,	// (0x0003f663) main_ai5_sk_pane_g1

0x98e7,	// (0x00039bc2) popup_query_code_window_g1

0x861a,	// (0x000388f5) popup_fep_vkb_icf_pane

0x8630,	// (0x0003890b) popup_fep_vtchi_icf_pane

0x282d,	// (0x00032b08) bg_icf_pane

0xf391,	// (0x0003f66c) list_vkb_icf_pane

0x282d,	// (0x00032b08) bg_icf_pane_cp01

0xf39d,	// (0x0003f678) vtchi_icf_list_pane

0xf3ae,	// (0x0003f689) list_vkb_icf_pane_t1_ParamLimits

0xf3ae,	// (0x0003f689) list_vkb_icf_pane_t1

0xf3c4,	// (0x0003f69f) vtchi_icf_list_pane_t1_ParamLimits

0xf3c4,	// (0x0003f69f) vtchi_icf_list_pane_t1

0x8604,	// (0x000388df) popup_fep_ituss_window_ParamLimits

0x8630,	// (0x0003890b) popup_fep_vtchi_icf_pane_ParamLimits

0xf1c3,	// (0x0003f49e) ituss_keypad_pane_ParamLimits

0x8646,	// (0x00038921) ituss_sks_pane

0x282d,	// (0x00032b08) bg_icf_pane_ParamLimits

0x85ed,	// (0x000388c8) icf_edit_indi_pane_ParamLimits

0x85ed,	// (0x000388c8) icf_edit_indi_pane

0xf391,	// (0x0003f66c) list_vkb_icf_pane_ParamLimits

0x282d,	// (0x00032b08) bg_icf_pane_cp01_ParamLimits

0x85ed,	// (0x000388c8) icf_edit_indi_pane_cp01_ParamLimits

0x85ed,	// (0x000388c8) icf_edit_indi_pane_cp01

0xf3a5,	// (0x0003f680) vtchi_query_pane

0xbd03,	// (0x0003bfde) icf_edit_indi_pane_g1_ParamLimits

0xbd03,	// (0x0003bfde) icf_edit_indi_pane_g1

0xf446,	// (0x0003f721) icf_edit_indi_pane_g2_ParamLimits

0xf446,	// (0x0003f721) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x000401e6) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x000401e6) icf_edit_indi_pane_g

0xf455,	// (0x0003f730) icf_edit_indi_pane_t1

0xf3dc,	// (0x0003f6b7) bg_input_focus_pane_cp042

0x2766,	// (0x00032a41) vtchi_button_pane

0xf3e5,	// (0x0003f6c0) vtchi_query_pane_t1

0xf3f3,	// (0x0003f6ce) vtchi_query_pane_t2

0xf401,	// (0x0003f6dc) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x000401d5) vtchi_query_pane_t

0xf46b,	// (0x0003f746) bg_button_pane_cp13

0xf40f,	// (0x0003f6ea) vtchi_button_pane_g1

0xf417,	// (0x0003f6f2) ituss_sks_pane_g1

0xf422,	// (0x0003f6fd) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x000401dc) ituss_sks_pane_g

0xf42a,	// (0x0003f705) ituss_sks_pane_t1

0xf438,	// (0x0003f713) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x000401e1) ituss_sks_pane_t

0xb538,	// (0x0003b813) indicator_nsta_pane_cp_g1

0xb541,	// (0x0003b81c) indicator_nsta_pane_cp_g2

0xb549,	// (0x0003b824) indicator_nsta_pane_cp_g3

0xb551,	// (0x0003b82c) indicator_nsta_pane_cp_g4

0xb559,	// (0x0003b834) indicator_nsta_pane_cp_g5

0xb561,	// (0x0003b83c) indicator_nsta_pane_cp_g6

0x0005,

0xfaa7,	// (0x0003fd82) indicator_nsta_pane_cp_g

0xdcf6,	// (0x0003dfd1) cell_graphic2_pane_t2_ParamLimits

0xdcf6,	// (0x0003dfd1) cell_graphic2_pane_t2

0x0001,

0xfdc0,	// (0x0004009b) cell_graphic2_pane_t_ParamLimits

0xfdc0,	// (0x0004009b) cell_graphic2_pane_t

0xdd23,	// (0x0003dffe) cell_graphic2_control_pane_t1

0x6850,	// (0x00036b2b) signal_pane_g3_ParamLimits

0x6850,	// (0x00036b2b) signal_pane_g3

0x6862,	// (0x00036b3d) signal_pane_g4_ParamLimits

0x6862,	// (0x00036b3d) signal_pane_g4

0xf19d,	// (0x0003f478) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf19d,	// (0x0003f478) cell_ai5_widget_list_row_pane_t3

0xf27e,	// (0x0003f559) cell_ituss_key_pane_t1_ParamLimits

0xf27e,	// (0x0003f559) cell_ituss_key_pane_t1

0x9564,	// (0x0003983f) form_field_data_wide_pane_vc_t2_ParamLimits

0x9564,	// (0x0003983f) form_field_data_wide_pane_vc_t2

0x9578,	// (0x00039853) form_field_data_wide_pane_vc_t3_ParamLimits

0x9578,	// (0x00039853) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0003fae5) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0003fae5) form_field_data_wide_pane_vc_t

0xb1e3,	// (0x0003b4be) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb1e3,	// (0x0003b4be) form_field_slider_wide_pane_vc_t3

0xb2b9,	// (0x0003b594) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb2b9,	// (0x0003b594) form_field_popup_wide_pane_vc_t2

0xb2d0,	// (0x0003b5ab) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb2d0,	// (0x0003b5ab) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa96,	// (0x0003fd71) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x0003fd71) form_field_popup_wide_pane_vc_t

0x84fe,	// (0x000387d9) aid_fshwr2_btn_pane_ParamLimits

0x850a,	// (0x000387e5) aid_fshwr2_syb_pane_ParamLimits

0x851b,	// (0x000387f6) aid_fshwr2_txt_pane_ParamLimits

0x7d3a,	// (0x00038015) fshwr2_bg_pane_ParamLimits

0x8527,	// (0x00038802) fshwr2_func_candi_pane_ParamLimits

0x853b,	// (0x00038816) fshwr2_hwr_syb_pane_ParamLimits

0x854e,	// (0x00038829) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small

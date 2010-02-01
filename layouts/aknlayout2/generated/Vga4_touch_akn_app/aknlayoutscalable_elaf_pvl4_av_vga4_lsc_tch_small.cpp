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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002130d };

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
0xb94e,	// (0x0002cc5b) Screen

0xb95a,	// (0x0002cc67) application_window_ParamLimits

0xb95a,	// (0x0002cc67) application_window

0xe7fb,	// (0x0002fb08) screen_g1

0xb992,	// (0x0002cc9f) area_bottom_pane_ParamLimits

0xb992,	// (0x0002cc9f) area_bottom_pane

0x0d8c,	// (0x00022099) area_top_pane_ParamLimits

0x0d8c,	// (0x00022099) area_top_pane

0x0e20,	// (0x0002212d) main_pane_ParamLimits

0x0e20,	// (0x0002212d) main_pane

0xe805,	// (0x0002fb12) misc_graphics

0xd1d4,	// (0x0002e4e1) battery_pane_ParamLimits

0xd1d4,	// (0x0002e4e1) battery_pane

0x53f8,	// (0x00026705) bg_status_flat_pane_g8

0x5400,	// (0x0002670d) bg_status_flat_pane_g9

0x47ad,	// (0x00025aba) context_pane_ParamLimits

0x47ad,	// (0x00025aba) context_pane

0xd34b,	// (0x0002e658) navi_pane_ParamLimits

0xd34b,	// (0x0002e658) navi_pane

0xd3d4,	// (0x0002e6e1) signal_pane_ParamLimits

0xd3d4,	// (0x0002e6e1) signal_pane

0x0008,

0xf880,	// (0x00030b8d) bg_status_flat_pane_g

0xd464,	// (0x0002e771) status_pane_g1_ParamLimits

0xd464,	// (0x0002e771) status_pane_g1

0xd47a,	// (0x0002e787) status_pane_g2_ParamLimits

0xd47a,	// (0x0002e787) status_pane_g2

0x49ed,	// (0x00025cfa) status_pane_g3_ParamLimits

0x49ed,	// (0x00025cfa) status_pane_g3

0x0004,

0xf7b3,	// (0x00030ac0) status_pane_g_ParamLimits

0xf7b3,	// (0x00030ac0) status_pane_g

0xd486,	// (0x0002e793) title_pane_ParamLimits

0xd486,	// (0x0002e793) title_pane

0xd4e3,	// (0x0002e7f0) uni_indicator_pane_ParamLimits

0xd4e3,	// (0x0002e7f0) uni_indicator_pane

0x3fda,	// (0x000252e7) bg_list_pane_ParamLimits

0x3fda,	// (0x000252e7) bg_list_pane

0xb6ba,	// (0x0002c9c7) find_pane

0xc3c4,	// (0x0002d6d1) listscroll_app_pane_ParamLimits

0xc3c4,	// (0x0002d6d1) listscroll_app_pane

0x400e,	// (0x0002531b) listscroll_form_pane

0xb6c2,	// (0x0002c9cf) listscroll_gen_pane_ParamLimits

0xb6c2,	// (0x0002c9cf) listscroll_gen_pane

0x400e,	// (0x0002531b) listscroll_set_pane

0x5fb1,	// (0x000272be) main_idle_act_pane

0x3cb6,	// (0x00024fc3) main_idle_trad_pane

0x3cb6,	// (0x00024fc3) main_list_empty_pane

0x403c,	// (0x00025349) main_midp_pane

0x4048,	// (0x00025355) main_pane_g1_ParamLimits

0x4048,	// (0x00025355) main_pane_g1

0xc3de,	// (0x0002d6eb) popup_ai_message_window_ParamLimits

0xc3de,	// (0x0002d6eb) popup_ai_message_window

0xc47e,	// (0x0002d78b) popup_fep_china_uni_window_ParamLimits

0xc47e,	// (0x0002d78b) popup_fep_china_uni_window

0x4166,	// (0x00025473) popup_fep_japan_candidate_window_ParamLimits

0x4166,	// (0x00025473) popup_fep_japan_candidate_window

0x4190,	// (0x0002549d) popup_fep_japan_predictive_window_ParamLimits

0x4190,	// (0x0002549d) popup_fep_japan_predictive_window

0xc4de,	// (0x0002d7eb) popup_find_window

0xc4fb,	// (0x0002d808) popup_grid_graphic_window_ParamLimits

0xc4fb,	// (0x0002d808) popup_grid_graphic_window

0x4201,	// (0x0002550e) popup_large_graphic_colour_window

0xc59f,	// (0x0002d8ac) popup_menu_window_ParamLimits

0xc59f,	// (0x0002d8ac) popup_menu_window

0xc78b,	// (0x0002da98) popup_note_image_window

0xc74b,	// (0x0002da58) popup_note_wait_window_ParamLimits

0xc74b,	// (0x0002da58) popup_note_wait_window

0xc7a3,	// (0x0002dab0) popup_note_window_ParamLimits

0xc7a3,	// (0x0002dab0) popup_note_window

0xc851,	// (0x0002db5e) popup_query_code_window_ParamLimits

0xc851,	// (0x0002db5e) popup_query_code_window

0x446d,	// (0x0002577a) popup_query_data_code_window_ParamLimits

0x446d,	// (0x0002577a) popup_query_data_code_window

0xc891,	// (0x0002db9e) popup_query_data_window_ParamLimits

0xc891,	// (0x0002db9e) popup_query_data_window

0xc925,	// (0x0002dc32) popup_query_sat_info_window_ParamLimits

0xc925,	// (0x0002dc32) popup_query_sat_info_window

0xc9d0,	// (0x0002dcdd) popup_snote_single_graphic_window_ParamLimits

0xc9d0,	// (0x0002dcdd) popup_snote_single_graphic_window

0xc9d0,	// (0x0002dcdd) popup_snote_single_text_window_ParamLimits

0xc9d0,	// (0x0002dcdd) popup_snote_single_text_window

0x4508,	// (0x00025815) popup_sub_window_general

0x464e,	// (0x0002595b) popup_window_general_ParamLimits

0x464e,	// (0x0002595b) popup_window_general

0x4667,	// (0x00025974) power_save_pane

0xc257,	// (0x0002d564) control_pane_g1_ParamLimits

0xc257,	// (0x0002d564) control_pane_g1

0x1eb8,	// (0x000231c5) control_pane_g2_ParamLimits

0x1eb8,	// (0x000231c5) control_pane_g2

0x3f83,	// (0x00025290) control_pane_g3_ParamLimits

0x3f83,	// (0x00025290) control_pane_g3

0x0007,

0xf79b,	// (0x00030aa8) control_pane_g_ParamLimits

0xf79b,	// (0x00030aa8) control_pane_g

0xc2bd,	// (0x0002d5ca) control_pane_t1_ParamLimits

0xc2bd,	// (0x0002d5ca) control_pane_t1

0xc31b,	// (0x0002d628) control_pane_t2_ParamLimits

0xc31b,	// (0x0002d628) control_pane_t2

0x0002,

0xf7ac,	// (0x00030ab9) control_pane_t_ParamLimits

0xf7ac,	// (0x00030ab9) control_pane_t

0x3ea4,	// (0x000251b1) navi_navi_volume_pane_cp1

0x3ead,	// (0x000251ba) status_small_icon_pane

0x3eb5,	// (0x000251c2) status_small_pane_g1_ParamLimits

0x3eb5,	// (0x000251c2) status_small_pane_g1

0x3ee9,	// (0x000251f6) status_small_pane_g2_ParamLimits

0x3ee9,	// (0x000251f6) status_small_pane_g2

0x3ef5,	// (0x00025202) status_small_pane_g3_ParamLimits

0x3ef5,	// (0x00025202) status_small_pane_g3

0x3f01,	// (0x0002520e) status_small_pane_g4_ParamLimits

0x3f01,	// (0x0002520e) status_small_pane_g4

0x3f0d,	// (0x0002521a) status_small_pane_g5_ParamLimits

0x3f0d,	// (0x0002521a) status_small_pane_g5

0x3f1c,	// (0x00025229) status_small_pane_g6_ParamLimits

0x3f1c,	// (0x00025229) status_small_pane_g6

0x0007,

0xf78a,	// (0x00030a97) status_small_pane_g_ParamLimits

0xf78a,	// (0x00030a97) status_small_pane_g

0x3f4c,	// (0x00025259) status_small_pane_t1

0x3f6f,	// (0x0002527c) status_small_wait_pane_ParamLimits

0x3f6f,	// (0x0002527c) status_small_wait_pane

0xc0cc,	// (0x0002d3d9) aid_levels_signal_ParamLimits

0xc0cc,	// (0x0002d3d9) aid_levels_signal

0xc0e4,	// (0x0002d3f1) signal_pane_g1_ParamLimits

0xc0e4,	// (0x0002d3f1) signal_pane_g1

0xc0ff,	// (0x0002d40c) signal_pane_g2_ParamLimits

0xc0ff,	// (0x0002d40c) signal_pane_g2

0x0001,

0xf71f,	// (0x00030a2c) signal_pane_g_ParamLimits

0xf71f,	// (0x00030a2c) signal_pane_g

0x3789,	// (0x00024a96) context_pane_g1

0xbb0f,	// (0x0002ce1c) title_pane_g1

0xbb44,	// (0x0002ce51) title_pane_t1

0x1109,	// (0x00022416) title_pane_t2

0x112f,	// (0x0002243c) title_pane_t3

0x0002,

0xf573,	// (0x00030880) title_pane_t

0xd50b,	// (0x0002e818) aid_levels_battery_ParamLimits

0xd50b,	// (0x0002e818) aid_levels_battery

0xd527,	// (0x0002e834) battery_pane_g1_ParamLimits

0xd527,	// (0x0002e834) battery_pane_g1

0xd544,	// (0x0002e851) battery_pane_g2_ParamLimits

0xd544,	// (0x0002e851) battery_pane_g2

0x0001,

0xf7be,	// (0x00030acb) battery_pane_g_ParamLimits

0xf7be,	// (0x00030acb) battery_pane_g

0xd767,	// (0x0002ea74) uni_indicator_pane_g1

0xd77c,	// (0x0002ea89) uni_indicator_pane_g2

0xd791,	// (0x0002ea9e) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x00030c35) uni_indicator_pane_g

0x3b24,	// (0x00024e31) navi_icon_pane_ParamLimits

0x3b24,	// (0x00024e31) navi_icon_pane

0x3a6b,	// (0x00024d78) navi_midp_pane

0x3b40,	// (0x00024e4d) navi_navi_pane

0x3b4a,	// (0x00024e57) navi_text_pane_ParamLimits

0x3b4a,	// (0x00024e57) navi_text_pane

0xe7fb,	// (0x0002fb08) status_small_wait_pane_g1

0x1603,	// (0x00022910) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x00030c30) status_small_wait_pane_g

0xd706,	// (0x0002ea13) navi_navi_icon_text_pane

0xd70e,	// (0x0002ea1b) navi_navi_pane_g1_ParamLimits

0xd70e,	// (0x0002ea1b) navi_navi_pane_g1

0xd720,	// (0x0002ea2d) navi_navi_pane_g2_ParamLimits

0xd720,	// (0x0002ea2d) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x00030bfe) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x00030bfe) navi_navi_pane_g

0x5a87,	// (0x00026d94) navi_navi_tabs_pane

0xd732,	// (0x0002ea3f) navi_navi_text_pane

0xd706,	// (0x0002ea13) navi_navi_volume_pane

0xd6f4,	// (0x0002ea01) navi_text_pane_t1

0xd6e8,	// (0x0002e9f5) navi_icon_pane_g1

0x5978,	// (0x00026c85) navi_navi_text_pane_t1

0xcd4d,	// (0x0002e05a) navi_navi_volume_pane_g1

0xcd55,	// (0x0002e062) volume_small_pane

0xd644,	// (0x0002e951) navi_navi_icon_text_pane_g1

0xd64c,	// (0x0002e959) navi_navi_icon_text_pane_t1

0x3b40,	// (0x00024e4d) navi_tabs_2_long_pane

0x3b40,	// (0x00024e4d) navi_tabs_2_pane

0x3b40,	// (0x00024e4d) navi_tabs_3_long_pane

0x3b40,	// (0x00024e4d) navi_tabs_3_pane

0x3b40,	// (0x00024e4d) navi_tabs_4_pane

0xcd2d,	// (0x0002e03a) tabs_2_active_pane_ParamLimits

0xcd2d,	// (0x0002e03a) tabs_2_active_pane

0xcd3d,	// (0x0002e04a) tabs_2_passive_pane_ParamLimits

0xcd3d,	// (0x0002e04a) tabs_2_passive_pane

0xccfb,	// (0x0002e008) tabs_3_active_pane_ParamLimits

0xccfb,	// (0x0002e008) tabs_3_active_pane

0xcd0b,	// (0x0002e018) tabs_3_passive_pane_ParamLimits

0xcd0b,	// (0x0002e018) tabs_3_passive_pane

0xcd1c,	// (0x0002e029) tabs_3_passive_pane_cp_ParamLimits

0xcd1c,	// (0x0002e029) tabs_3_passive_pane_cp

0xccb7,	// (0x0002dfc4) tabs_4_active_pane_ParamLimits

0xccb7,	// (0x0002dfc4) tabs_4_active_pane

0xccc8,	// (0x0002dfd5) tabs_4_passive_pane_ParamLimits

0xccc8,	// (0x0002dfd5) tabs_4_passive_pane

0xccd9,	// (0x0002dfe6) tabs_4_passive_pane_cp_ParamLimits

0xccd9,	// (0x0002dfe6) tabs_4_passive_pane_cp

0xccea,	// (0x0002dff7) tabs_4_passive_pane_cp2_ParamLimits

0xccea,	// (0x0002dff7) tabs_4_passive_pane_cp2

0xcc93,	// (0x0002dfa0) tabs_2_long_active_pane_ParamLimits

0xcc93,	// (0x0002dfa0) tabs_2_long_active_pane

0xcca5,	// (0x0002dfb2) tabs_2_long_passive_pane_ParamLimits

0xcca5,	// (0x0002dfb2) tabs_2_long_passive_pane

0xcc48,	// (0x0002df55) tabs_3_long_active_pane_ParamLimits

0xcc48,	// (0x0002df55) tabs_3_long_active_pane

0xcc61,	// (0x0002df6e) tabs_3_long_passive_pane_ParamLimits

0xcc61,	// (0x0002df6e) tabs_3_long_passive_pane

0xcc7a,	// (0x0002df87) tabs_3_long_passive_pane_cp_ParamLimits

0xcc7a,	// (0x0002df87) tabs_3_long_passive_pane_cp

0x210e,	// (0x0002341b) volume_small_pane_g1

0xcbf7,	// (0x0002df04) volume_small_pane_g2

0xcc00,	// (0x0002df0d) volume_small_pane_g3

0xcc09,	// (0x0002df16) volume_small_pane_g4

0xcc12,	// (0x0002df1f) volume_small_pane_g5

0xcc1b,	// (0x0002df28) volume_small_pane_g6

0xcc24,	// (0x0002df31) volume_small_pane_g7

0xcc2d,	// (0x0002df3a) volume_small_pane_g8

0xcc36,	// (0x0002df43) volume_small_pane_g9

0xcc3f,	// (0x0002df4c) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x00030bca) volume_small_pane_g

0x144d,	// (0x0002275a) bg_active_tab_pane_cp2_ParamLimits

0x144d,	// (0x0002275a) bg_active_tab_pane_cp2

0xbbd0,	// (0x0002cedd) tabs_3_active_pane_g1

0xbbd8,	// (0x0002cee5) tabs_3_active_pane_t1

0x144d,	// (0x0002275a) bg_passive_tab_pane_cp2_ParamLimits

0x144d,	// (0x0002275a) bg_passive_tab_pane_cp2

0xbbd0,	// (0x0002cedd) tabs_3_passive_pane_g1

0xbbd8,	// (0x0002cee5) tabs_3_passive_pane_t1

0x144d,	// (0x0002275a) bg_active_tab_pane_cp3_ParamLimits

0x144d,	// (0x0002275a) bg_active_tab_pane_cp3

0xbbea,	// (0x0002cef7) tabs_4_active_pane_g1

0xbbf2,	// (0x0002ceff) tabs_4_active_pane_t1

0x144d,	// (0x0002275a) bg_passive_tab_pane_cp3_ParamLimits

0x144d,	// (0x0002275a) bg_passive_tab_pane_cp3

0xbbea,	// (0x0002cef7) tabs_4_1_passive_pane_g1

0xbbf2,	// (0x0002ceff) tabs_4_1_passive_pane_t1

0x403c,	// (0x00025349) list_highlight_pane_cp2

0xd84f,	// (0x0002eb5c) list_set_pane_ParamLimits

0xd84f,	// (0x0002eb5c) list_set_pane

0xd917,	// (0x0002ec24) main_pane_set_t1_ParamLimits

0xd917,	// (0x0002ec24) main_pane_set_t1

0xd937,	// (0x0002ec44) main_pane_set_t2_ParamLimits

0xd937,	// (0x0002ec44) main_pane_set_t2

0xd94b,	// (0x0002ec58) main_pane_set_t3_ParamLimits

0xd94b,	// (0x0002ec58) main_pane_set_t3

0xd95f,	// (0x0002ec6c) main_pane_set_t4_ParamLimits

0xd95f,	// (0x0002ec6c) main_pane_set_t4

0x0003,

0xf98d,	// (0x00030c9a) main_pane_set_t_ParamLimits

0xf98d,	// (0x00030c9a) main_pane_set_t

0xd973,	// (0x0002ec80) setting_code_pane

0x6111,	// (0x0002741e) setting_slider_graphic_pane

0x6111,	// (0x0002741e) setting_slider_pane

0x6111,	// (0x0002741e) setting_text_pane

0x6111,	// (0x0002741e) setting_volume_pane

0x1183,	// (0x00022490) volume_set_pane

0x1141,	// (0x0002244e) bg_set_opt_pane_cp

0x118d,	// (0x0002249a) setting_slider_pane_t1

0x11a3,	// (0x000224b0) setting_slider_pane_t2

0x11bd,	// (0x000224ca) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00030887) setting_slider_pane_t

0x11d5,	// (0x000224e2) slider_set_pane

0xe805,	// (0x0002fb12) bg_set_opt_pane_cp2

0x11eb,	// (0x000224f8) setting_slider_graphic_pane_g1

0x11f4,	// (0x00022501) setting_slider_graphic_pane_t1

0x1204,	// (0x00022511) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0003088e) setting_slider_graphic_pane_t

0x1214,	// (0x00022521) slider_set_pane_cp

0xe805,	// (0x0002fb12) input_focus_pane_cp1

0x5f98,	// (0x000272a5) list_set_text_pane

0xe7fb,	// (0x0002fb08) setting_text_pane_g1

0xe805,	// (0x0002fb12) input_focus_pane_cp2

0xe7fb,	// (0x0002fb08) setting_code_pane_g1

0x121c,	// (0x00022529) setting_code_pane_t1

0xf52e,	// (0x0003083b) set_text_pane_t1_ParamLimits

0xf52e,	// (0x0003083b) set_text_pane_t1

0x30bf,	// (0x000243cc) set_opt_bg_pane_g1

0x30c7,	// (0x000243d4) set_opt_bg_pane_g2

0x5f70,	// (0x0002727d) set_opt_bg_pane_g3

0x30d7,	// (0x000243e4) set_opt_bg_pane_g4

0x30df,	// (0x000243ec) set_opt_bg_pane_g5

0x30e7,	// (0x000243f4) set_opt_bg_pane_g6

0x5f7a,	// (0x00027287) set_opt_bg_pane_g7

0x5f84,	// (0x00027291) set_opt_bg_pane_g8

0x5f8e,	// (0x0002729b) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x00030c87) set_opt_bg_pane_g

0x5f63,	// (0x00027270) slider_set_pane_g1

0x22f2,	// (0x000235ff) slider_set_pane_g2

0x0006,

0xf96b,	// (0x00030c78) slider_set_pane_g

0x227a,	// (0x00023587) volume_set_pane_g1

0x2284,	// (0x00023591) volume_set_pane_g2

0x228e,	// (0x0002359b) volume_set_pane_g3

0x2298,	// (0x000235a5) volume_set_pane_g4

0x22a2,	// (0x000235af) volume_set_pane_g5

0x22ac,	// (0x000235b9) volume_set_pane_g6

0x22b6,	// (0x000235c3) volume_set_pane_g7

0x22c0,	// (0x000235cd) volume_set_pane_g8

0x22ca,	// (0x000235d7) volume_set_pane_g9

0x22d4,	// (0x000235e1) volume_set_pane_g10

0x0009,

0xf943,	// (0x00030c50) volume_set_pane_g

0xbc04,	// (0x0002cf11) indicator_pane_ParamLimits

0xbc04,	// (0x0002cf11) indicator_pane

0xbc30,	// (0x0002cf3d) main_idle_pane_g2_ParamLimits

0xbc30,	// (0x0002cf3d) main_idle_pane_g2

0xbc68,	// (0x0002cf75) main_pane_idle_g1_ParamLimits

0xbc68,	// (0x0002cf75) main_pane_idle_g1

0x126c,	// (0x00022579) popup_clock_digital_analogue_window_ParamLimits

0x126c,	// (0x00022579) popup_clock_digital_analogue_window

0xbc96,	// (0x0002cfa3) soft_indicator_pane_ParamLimits

0xbc96,	// (0x0002cfa3) soft_indicator_pane

0xbcb2,	// (0x0002cfbf) wallpaper_pane_ParamLimits

0xbcb2,	// (0x0002cfbf) wallpaper_pane

0xe7fb,	// (0x0002fb08) wallpaper_pane_g1

0xbcc4,	// (0x0002cfd1) indicator_pane_g1_ParamLimits

0xbcc4,	// (0x0002cfd1) indicator_pane_g1

0x63d5,	// (0x000276e2) navi_navi_icon_text_pane_srt_g1

0x12c0,	// (0x000225cd) soft_indicator_pane_t1

0x12da,	// (0x000225e7) aid_ps_area_pane

0xbcdd,	// (0x0002cfea) aid_ps_clock_pane

0x12f9,	// (0x00022606) aid_ps_indicator_pane

0x1305,	// (0x00022612) indicator_ps_pane_ParamLimits

0x1305,	// (0x00022612) indicator_ps_pane

0x1314,	// (0x00022621) power_save_pane_g1_ParamLimits

0x1314,	// (0x00022621) power_save_pane_g1

0x1320,	// (0x0002262d) power_save_pane_g2_ParamLimits

0x1320,	// (0x0002262d) power_save_pane_g2

0x0c80,	// (0x00021f8d) aid_navinavi_width_pane

0x12da,	// (0x000225e7) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00030893) power_save_pane_g_ParamLimits

0xf586,	// (0x00030893) power_save_pane_g

0x132e,	// (0x0002263b) power_save_pane_t1_ParamLimits

0x132e,	// (0x0002263b) power_save_pane_t1

0xbcdd,	// (0x0002cfea) aid_ps_clock_pane_ParamLimits

0x12f9,	// (0x00022606) aid_ps_indicator_pane_ParamLimits

0x1340,	// (0x0002264d) power_save_pane_t4_ParamLimits

0x1340,	// (0x0002264d) power_save_pane_t4

0x0001,

0xf58b,	// (0x00030898) power_save_pane_t_ParamLimits

0xf58b,	// (0x00030898) power_save_pane_t

0x136a,	// (0x00022677) power_save_t3_ParamLimits

0x136a,	// (0x00022677) power_save_t3

0x1355,	// (0x00022662) power_save_t2_ParamLimits

0x1355,	// (0x00022662) power_save_t2

0x137f,	// (0x0002268c) indicator_ps_pane_g1

0xbceb,	// (0x0002cff8) ai_gene_pane_ParamLimits

0xbceb,	// (0x0002cff8) ai_gene_pane

0xbd02,	// (0x0002d00f) ai_links_pane_ParamLimits

0xbd02,	// (0x0002d00f) ai_links_pane

0xbd1a,	// (0x0002d027) indicator_pane_cp1_ParamLimits

0xbd1a,	// (0x0002d027) indicator_pane_cp1

0xbd29,	// (0x0002d036) main_pane_idle_g1_cp_ParamLimits

0xbd29,	// (0x0002d036) main_pane_idle_g1_cp

0x13b8,	// (0x000226c5) popup_ai_links_title_window

0xbd41,	// (0x0002d04e) soft_indicator_pane_cp1_ParamLimits

0xbd41,	// (0x0002d04e) soft_indicator_pane_cp1

0x5d36,	// (0x00027043) ai_links_pane_g1

0x5d3f,	// (0x0002704c) grid_ai_links_pane

0xd75e,	// (0x0002ea6b) ai_gene_pane_1

0x5d24,	// (0x00027031) ai_gene_pane_2

0x5d2d,	// (0x0002703a) list_highlight_pane_cp4

0xd73a,	// (0x0002ea47) cell_ai_link_pane_ParamLimits

0xd73a,	// (0x0002ea47) cell_ai_link_pane

0x5cf3,	// (0x00027000) cell_ai_link_pane_g1

0x1603,	// (0x00022910) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x00030c2b) cell_ai_link_pane_g

0xe805,	// (0x0002fb12) grid_highlight_cp2

0xe805,	// (0x0002fb12) bg_popup_sub_pane_cp1

0x13db,	// (0x000226e8) popup_ai_links_title_window_t1

0x5c3f,	// (0x00026f4c) ai_gene_pane_1_g1_ParamLimits

0x5c3f,	// (0x00026f4c) ai_gene_pane_1_g1

0x5c4b,	// (0x00026f58) ai_gene_pane_1_g2_ParamLimits

0x5c4b,	// (0x00026f58) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x00030c21) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x00030c21) ai_gene_pane_1_g

0x5c58,	// (0x00026f65) ai_gene_pane_1_t1_ParamLimits

0x5c58,	// (0x00026f65) ai_gene_pane_1_t1

0x5c8c,	// (0x00026f99) grid_ai_soft_ind_pane

0x5c2a,	// (0x00026f37) ai_gene_pane_2_t1_ParamLimits

0x5c2a,	// (0x00026f37) ai_gene_pane_2_t1

0xbd55,	// (0x0002d062) main_pane_empty_t1_ParamLimits

0xbd55,	// (0x0002d062) main_pane_empty_t1

0xbd6d,	// (0x0002d07a) main_pane_empty_t2_ParamLimits

0xbd6d,	// (0x0002d07a) main_pane_empty_t2

0xbd82,	// (0x0002d08f) main_pane_empty_t3_ParamLimits

0xbd82,	// (0x0002d08f) main_pane_empty_t3

0xbd94,	// (0x0002d0a1) main_pane_empty_t4_ParamLimits

0xbd94,	// (0x0002d0a1) main_pane_empty_t4

0xbda6,	// (0x0002d0b3) main_pane_empty_t5_ParamLimits

0xbda6,	// (0x0002d0b3) main_pane_empty_t5

0x0004,

0xf590,	// (0x0003089d) main_pane_empty_t_ParamLimits

0xf590,	// (0x0003089d) main_pane_empty_t

0x3110,	// (0x0002441d) bg_popup_window_pane_ParamLimits

0x3110,	// (0x0002441d) bg_popup_window_pane

0x5986,	// (0x00026c93) find_popup_pane_cp2_ParamLimits

0x5986,	// (0x00026c93) find_popup_pane_cp2

0x5992,	// (0x00026c9f) heading_pane_ParamLimits

0x5992,	// (0x00026c9f) heading_pane

0xe805,	// (0x0002fb12) bg_popup_sub_pane

0xd669,	// (0x0002e976) bg_popup_window_pane_g1_ParamLimits

0xd669,	// (0x0002e976) bg_popup_window_pane_g1

0xd678,	// (0x0002e985) bg_popup_window_pane_g2_ParamLimits

0xd678,	// (0x0002e985) bg_popup_window_pane_g2

0xd684,	// (0x0002e991) bg_popup_window_pane_g3_ParamLimits

0xd684,	// (0x0002e991) bg_popup_window_pane_g3

0xd690,	// (0x0002e99d) bg_popup_window_pane_g4_ParamLimits

0xd690,	// (0x0002e99d) bg_popup_window_pane_g4

0xd69f,	// (0x0002e9ac) bg_popup_window_pane_g5_ParamLimits

0xd69f,	// (0x0002e9ac) bg_popup_window_pane_g5

0xd6af,	// (0x0002e9bc) bg_popup_window_pane_g6_ParamLimits

0xd6af,	// (0x0002e9bc) bg_popup_window_pane_g6

0xd6bb,	// (0x0002e9c8) bg_popup_window_pane_g7_ParamLimits

0xd6bb,	// (0x0002e9c8) bg_popup_window_pane_g7

0xd6ca,	// (0x0002e9d7) bg_popup_window_pane_g8_ParamLimits

0xd6ca,	// (0x0002e9d7) bg_popup_window_pane_g8

0xd6d9,	// (0x0002e9e6) bg_popup_window_pane_g9_ParamLimits

0xd6d9,	// (0x0002e9e6) bg_popup_window_pane_g9

0x596c,	// (0x00026c79) bg_popup_window_pane_g10_ParamLimits

0x596c,	// (0x00026c79) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x00030be9) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x00030be9) bg_popup_window_pane_g

0x5895,	// (0x00026ba2) bg_popup_heading_pane_ParamLimits

0x5895,	// (0x00026ba2) bg_popup_heading_pane

0x2338,	// (0x00023645) tabs_4_passive_pane_cp_srt_ParamLimits

0x2338,	// (0x00023645) tabs_4_passive_pane_cp_srt

0x234a,	// (0x00023657) tabs_4_passive_pane_srt_ParamLimits

0x58a9,	// (0x00026bb6) heading_pane_g2

0x234a,	// (0x00023657) tabs_4_passive_pane_srt

0x4c6a,	// (0x00025f77) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4c6a,	// (0x00025f77) bg_passive_tab_pane_cp3_srt

0x58b1,	// (0x00026bbe) heading_pane_t1_ParamLimits

0x58b1,	// (0x00026bbe) heading_pane_t1

0x58c8,	// (0x00026bd5) heading_pane_t2_ParamLimits

0x58c8,	// (0x00026bd5) heading_pane_t2

0x0001,

0xf8d7,	// (0x00030be4) heading_pane_t_ParamLimits

0xf8d7,	// (0x00030be4) heading_pane_t

0x53c0,	// (0x000266cd) bg_popup_heading_pane_g1

0x546f,	// (0x0002677c) bg_popup_heading_pane_g2

0x5479,	// (0x00026786) bg_popup_heading_pane_g3

0x5483,	// (0x00026790) bg_popup_heading_pane_g4

0x548d,	// (0x0002679a) bg_popup_heading_pane_g5

0x5497,	// (0x000267a4) bg_popup_heading_pane_g6

0x549f,	// (0x000267ac) bg_popup_heading_pane_g7

0x54a7,	// (0x000267b4) bg_popup_heading_pane_g8

0x54b1,	// (0x000267be) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x00030ba0) bg_popup_heading_pane_g

0x4b78,	// (0x00025e85) bg_popup_sub_pane_g1

0x4b80,	// (0x00025e8d) bg_popup_sub_pane_g2

0x4b88,	// (0x00025e95) bg_popup_sub_pane_g3

0x4b90,	// (0x00025e9d) bg_popup_sub_pane_g4

0x4b98,	// (0x00025ea5) bg_popup_sub_pane_g5

0x4ba0,	// (0x00025ead) bg_popup_sub_pane_g6

0x4ba8,	// (0x00025eb5) bg_popup_sub_pane_g7

0x4bb0,	// (0x00025ebd) bg_popup_sub_pane_g8

0x4bb8,	// (0x00025ec5) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x00030b7a) bg_popup_sub_pane_g

0x144d,	// (0x0002275a) bg_popup_window_pane_cp5_ParamLimits

0x144d,	// (0x0002275a) bg_popup_window_pane_cp5

0x1469,	// (0x00022776) popup_note_window_g1_ParamLimits

0x1469,	// (0x00022776) popup_note_window_g1

0x1475,	// (0x00022782) popup_note_window_t1_ParamLimits

0x1475,	// (0x00022782) popup_note_window_t1

0x148b,	// (0x00022798) popup_note_window_t2_ParamLimits

0x148b,	// (0x00022798) popup_note_window_t2

0x14a1,	// (0x000227ae) popup_note_window_t3_ParamLimits

0x14a1,	// (0x000227ae) popup_note_window_t3

0x14b7,	// (0x000227c4) popup_note_window_t4_ParamLimits

0x14b7,	// (0x000227c4) popup_note_window_t4

0x14df,	// (0x000227ec) popup_note_window_t5_ParamLimits

0x14df,	// (0x000227ec) popup_note_window_t5

0x0004,

0xf59b,	// (0x000308a8) popup_note_window_t_ParamLimits

0xf59b,	// (0x000308a8) popup_note_window_t

0x1503,	// (0x00022810) bg_popup_window_pane_cp6_ParamLimits

0x1503,	// (0x00022810) bg_popup_window_pane_cp6

0x533c,	// (0x00026649) popup_note_image_window_g1_ParamLimits

0x533c,	// (0x00026649) popup_note_image_window_g1

0x5348,	// (0x00026655) popup_note_image_window_g2_ParamLimits

0x5348,	// (0x00026655) popup_note_image_window_g2

0x0001,

0xf861,	// (0x00030b6e) popup_note_image_window_g_ParamLimits

0xf861,	// (0x00030b6e) popup_note_image_window_g

0x5361,	// (0x0002666e) popup_note_image_window_t1_ParamLimits

0x5361,	// (0x0002666e) popup_note_image_window_t1

0x537a,	// (0x00026687) popup_note_image_window_t2_ParamLimits

0x537a,	// (0x00026687) popup_note_image_window_t2

0x5393,	// (0x000266a0) popup_note_image_window_t3_ParamLimits

0x5393,	// (0x000266a0) popup_note_image_window_t3

0x0002,

0xf866,	// (0x00030b73) popup_note_image_window_t_ParamLimits

0xf866,	// (0x00030b73) popup_note_image_window_t

0x51fc,	// (0x00026509) bg_popup_window_pane_cp7_ParamLimits

0x51fc,	// (0x00026509) bg_popup_window_pane_cp7

0x522c,	// (0x00026539) popup_note_wait_window_g1_ParamLimits

0x522c,	// (0x00026539) popup_note_wait_window_g1

0x5238,	// (0x00026545) popup_note_wait_window_g2_ParamLimits

0x5238,	// (0x00026545) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x00030b5c) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x00030b5c) popup_note_wait_window_g

0x5250,	// (0x0002655d) popup_note_wait_window_t1_ParamLimits

0x5250,	// (0x0002655d) popup_note_wait_window_t1

0x5277,	// (0x00026584) popup_note_wait_window_t2_ParamLimits

0x5277,	// (0x00026584) popup_note_wait_window_t2

0x5295,	// (0x000265a2) popup_note_wait_window_t3_ParamLimits

0x5295,	// (0x000265a2) popup_note_wait_window_t3

0x52a8,	// (0x000265b5) popup_note_wait_window_t4_ParamLimits

0x52a8,	// (0x000265b5) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x00030b63) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x00030b63) popup_note_wait_window_t

0x52cd,	// (0x000265da) wait_bar_pane_ParamLimits

0x52cd,	// (0x000265da) wait_bar_pane

0xe805,	// (0x0002fb12) wait_anim_pane

0xe805,	// (0x0002fb12) wait_border_pane

0xe7fb,	// (0x0002fb08) wait_anim_pane_g1

0xe7fb,	// (0x0002fb08) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x00030a27) wait_anim_pane_g

0x51a0,	// (0x000264ad) wait_border_pane_g1

0x51ab,	// (0x000264b8) wait_border_pane_g2

0x51b4,	// (0x000264c1) wait_border_pane_g3

0x0002,

0xf848,	// (0x00030b55) wait_border_pane_g

0x500a,	// (0x00026317) bg_popup_window_pane_cp16_ParamLimits

0x500a,	// (0x00026317) bg_popup_window_pane_cp16

0x510a,	// (0x00026417) indicator_popup_pane_cp4_ParamLimits

0x510a,	// (0x00026417) indicator_popup_pane_cp4

0x511e,	// (0x0002642b) popup_query_data_window_t1_ParamLimits

0x511e,	// (0x0002642b) popup_query_data_window_t1

0x5130,	// (0x0002643d) popup_query_data_window_t2_ParamLimits

0x5130,	// (0x0002643d) popup_query_data_window_t2

0x5149,	// (0x00026456) popup_query_data_window_t3_ParamLimits

0x5149,	// (0x00026456) popup_query_data_window_t3

0x0002,

0xf841,	// (0x00030b4e) popup_query_data_window_t_ParamLimits

0xf841,	// (0x00030b4e) popup_query_data_window_t

0x5163,	// (0x00026470) query_popup_data_pane_ParamLimits

0x5163,	// (0x00026470) query_popup_data_pane

0x5177,	// (0x00026484) query_popup_data_pane_cp1_ParamLimits

0x5177,	// (0x00026484) query_popup_data_pane_cp1

0x500a,	// (0x00026317) bg_popup_window_pane_cp10_ParamLimits

0x500a,	// (0x00026317) bg_popup_window_pane_cp10

0x503c,	// (0x00026349) indicator_popup_pane_ParamLimits

0x503c,	// (0x00026349) indicator_popup_pane

0x505e,	// (0x0002636b) popup_query_code_window_t1_ParamLimits

0x505e,	// (0x0002636b) popup_query_code_window_t1

0x5078,	// (0x00026385) popup_query_code_window_t2_ParamLimits

0x5078,	// (0x00026385) popup_query_code_window_t2

0x50c1,	// (0x000263ce) popup_query_code_window_t3_ParamLimits

0x50c1,	// (0x000263ce) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x00030b47) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x00030b47) popup_query_code_window_t

0x50f0,	// (0x000263fd) query_popup_pane_ParamLimits

0x50f0,	// (0x000263fd) query_popup_pane

0x1503,	// (0x00022810) bg_popup_window_pane_cp15_ParamLimits

0x1503,	// (0x00022810) bg_popup_window_pane_cp15

0x1523,	// (0x00022830) indicator_popup_pane_cp1_ParamLimits

0x1523,	// (0x00022830) indicator_popup_pane_cp1

0x1536,	// (0x00022843) indicator_popup_pane_cp2_ParamLimits

0x1536,	// (0x00022843) indicator_popup_pane_cp2

0x1551,	// (0x0002285e) popup_query_data_code_window_g1_ParamLimits

0x1551,	// (0x0002285e) popup_query_data_code_window_g1

0x1564,	// (0x00022871) popup_query_data_code_window_t1_ParamLimits

0x1564,	// (0x00022871) popup_query_data_code_window_t1

0x1576,	// (0x00022883) popup_query_data_code_window_t2_ParamLimits

0x1576,	// (0x00022883) popup_query_data_code_window_t2

0x1588,	// (0x00022895) popup_query_data_code_window_t3_ParamLimits

0x1588,	// (0x00022895) popup_query_data_code_window_t3

0x159e,	// (0x000228ab) popup_query_data_code_window_t4_ParamLimits

0x159e,	// (0x000228ab) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x000308b3) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x000308b3) popup_query_data_code_window_t

0x3ae0,	// (0x00024ded) list_single_midp_graphic_pane_g3

0x15b8,	// (0x000228c5) query_popup_data_pane_cp2_ParamLimits

0x15cb,	// (0x000228d8) query_popup_pane_cp2_ParamLimits

0x15cb,	// (0x000228d8) query_popup_pane_cp2

0xe805,	// (0x0002fb12) bg_popup_window_pane_cp11

0x5002,	// (0x0002630f) heading_pane_cp5

0x16bb,	// (0x000229c8) listscroll_popup_info_pane

0xe805,	// (0x0002fb12) input_focus_pane_cp3

0x15e6,	// (0x000228f3) query_popup_pane_t1

0x15f4,	// (0x00022901) list_popup_info_pane_ParamLimits

0x15f4,	// (0x00022901) list_popup_info_pane

0x1603,	// (0x00022910) listscroll_popup_info_pane_g1

0x160b,	// (0x00022918) scroll_pane_cp7

0x1615,	// (0x00022922) popup_info_list_pane_t1_ParamLimits

0x1615,	// (0x00022922) popup_info_list_pane_t1

0x162f,	// (0x0002293c) popup_info_list_pane_t2_ParamLimits

0x162f,	// (0x0002293c) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x000308bc) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x000308bc) popup_info_list_pane_t

0xe805,	// (0x0002fb12) bg_popup_window_pane_cp12

0x63ef,	// (0x000276fc) find_popup_pane

0x1141,	// (0x0002244e) bg_popup_window_pane_cp3

0x1649,	// (0x00022956) heading_pane_cp3

0x1655,	// (0x00022962) listscroll_popup_graphic_pane

0xe805,	// (0x0002fb12) bg_popup_window_pane_cp4

0xbe08,	// (0x0002d115) heading_pane_cp4

0x16bb,	// (0x000229c8) listscroll_popup_colour_pane

0xbe12,	// (0x0002d11f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbe12,	// (0x0002d11f) cell_large_graphic_colour_none_popup_pane

0xbe26,	// (0x0002d133) grid_large_graphic_colour_popup_pane_ParamLimits

0xbe26,	// (0x0002d133) grid_large_graphic_colour_popup_pane

0xbe52,	// (0x0002d15f) listscroll_popup_colour_pane_g1_ParamLimits

0xbe52,	// (0x0002d15f) listscroll_popup_colour_pane_g1

0xbe69,	// (0x0002d176) listscroll_popup_colour_pane_g2_ParamLimits

0xbe69,	// (0x0002d176) listscroll_popup_colour_pane_g2

0xbe80,	// (0x0002d18d) listscroll_popup_colour_pane_g3_ParamLimits

0xbe80,	// (0x0002d18d) listscroll_popup_colour_pane_g3

0xbe90,	// (0x0002d19d) listscroll_popup_colour_pane_g4_ParamLimits

0xbe90,	// (0x0002d19d) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x000308c1) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x000308c1) listscroll_popup_colour_pane_g

0x1755,	// (0x00022a62) scroll_pane_cp6_ParamLimits

0x1755,	// (0x00022a62) scroll_pane_cp6

0xbea4,	// (0x0002d1b1) cell_large_graphic_colour_popup_pane_ParamLimits

0xbea4,	// (0x0002d1b1) cell_large_graphic_colour_popup_pane

0x178c,	// (0x00022a99) cell_large_graphic_colour_none_popup_pane_t1

0xe805,	// (0x0002fb12) grid_highlight_pane_cp5

0x179b,	// (0x00022aa8) cell_large_graphic_colour_popup_pane_g1

0x17a3,	// (0x00022ab0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x000308ca) cell_large_graphic_colour_popup_pane_g

0x17ab,	// (0x00022ab8) cell_large_graphic_colour_popup_pane_g2_copy1

0x17b4,	// (0x00022ac1) grid_highlight_pane_cp4

0x17bc,	// (0x00022ac9) bg_popup_window_pane_cp8_ParamLimits

0x17bc,	// (0x00022ac9) bg_popup_window_pane_cp8

0x17d7,	// (0x00022ae4) popup_snote_single_text_window_g1_ParamLimits

0x17d7,	// (0x00022ae4) popup_snote_single_text_window_g1

0x17e9,	// (0x00022af6) popup_snote_single_text_window_t1_ParamLimits

0x17e9,	// (0x00022af6) popup_snote_single_text_window_t1

0x17fc,	// (0x00022b09) popup_snote_single_text_window_t2_ParamLimits

0x17fc,	// (0x00022b09) popup_snote_single_text_window_t2

0x180f,	// (0x00022b1c) popup_snote_single_text_window_t3_ParamLimits

0x180f,	// (0x00022b1c) popup_snote_single_text_window_t3

0x1848,	// (0x00022b55) popup_snote_single_text_window_t4_ParamLimits

0x1848,	// (0x00022b55) popup_snote_single_text_window_t4

0x187c,	// (0x00022b89) popup_snote_single_text_window_t5_ParamLimits

0x187c,	// (0x00022b89) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x000308cf) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x000308cf) popup_snote_single_text_window_t

0x18ab,	// (0x00022bb8) bg_popup_window_pane_cp9_ParamLimits

0x18ab,	// (0x00022bb8) bg_popup_window_pane_cp9

0x17d7,	// (0x00022ae4) popup_snote_single_graphic_window_g1_ParamLimits

0x17d7,	// (0x00022ae4) popup_snote_single_graphic_window_g1

0x18b9,	// (0x00022bc6) popup_snote_single_graphic_window_g2_ParamLimits

0x18b9,	// (0x00022bc6) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x000308da) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x000308da) popup_snote_single_graphic_window_g

0x18c5,	// (0x00022bd2) popup_snote_single_graphic_window_t1_ParamLimits

0x18c5,	// (0x00022bd2) popup_snote_single_graphic_window_t1

0x18d8,	// (0x00022be5) popup_snote_single_graphic_window_t2_ParamLimits

0x18d8,	// (0x00022be5) popup_snote_single_graphic_window_t2

0x18eb,	// (0x00022bf8) popup_snote_single_graphic_window_t3_ParamLimits

0x18eb,	// (0x00022bf8) popup_snote_single_graphic_window_t3

0x1924,	// (0x00022c31) popup_snote_single_graphic_window_t4_ParamLimits

0x1924,	// (0x00022c31) popup_snote_single_graphic_window_t4

0x1958,	// (0x00022c65) popup_snote_single_graphic_window_t5_ParamLimits

0x1958,	// (0x00022c65) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x000308df) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x000308df) popup_snote_single_graphic_window_t

0x632d,	// (0x0002763a) grid_graphic_popup_pane_ParamLimits

0x632d,	// (0x0002763a) grid_graphic_popup_pane

0x635b,	// (0x00027668) listscroll_popup_graphic_pane_g1_ParamLimits

0x635b,	// (0x00027668) listscroll_popup_graphic_pane_g1

0xda73,	// (0x0002ed80) listscroll_popup_graphic_pane_g2_ParamLimits

0xda73,	// (0x0002ed80) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x00030cc4) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x00030cc4) listscroll_popup_graphic_pane_g

0x6383,	// (0x00027690) scroll_pane_cp5

0xda33,	// (0x0002ed40) cell_graphic_popup_pane_ParamLimits

0xda33,	// (0x0002ed40) cell_graphic_popup_pane

0x62b6,	// (0x000275c3) cell_graphic_popup_pane_g1

0x62be,	// (0x000275cb) cell_graphic_popup_pane_g2

0x17ab,	// (0x00022ab8) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x00030cbd) cell_graphic_popup_pane_g

0x62c7,	// (0x000275d4) cell_graphic_popup_pane_t2

0x17b4,	// (0x00022ac1) grid_highlight_pane_cp3

0x1999,	// (0x00022ca6) list_gen_pane_ParamLimits

0x1999,	// (0x00022ca6) list_gen_pane

0x19cb,	// (0x00022cd8) scroll_pane

0xd9ee,	// (0x0002ecfb) bg_list_pane_g1_ParamLimits

0xd9ee,	// (0x0002ecfb) bg_list_pane_g1

0x6233,	// (0x00027540) bg_list_pane_g2_ParamLimits

0x6233,	// (0x00027540) bg_list_pane_g2

0x6246,	// (0x00027553) bg_list_pane_g3_ParamLimits

0x6246,	// (0x00027553) bg_list_pane_g3

0x6258,	// (0x00027565) bg_list_pane_g4_ParamLimits

0x6258,	// (0x00027565) bg_list_pane_g4

0xda09,	// (0x0002ed16) bg_list_pane_g5_ParamLimits

0xda09,	// (0x0002ed16) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x00030cb2) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x00030cb2) bg_list_pane_g

0xd9b1,	// (0x0002ecbe) list_double2_graphic_large_graphic_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_double2_graphic_large_graphic_pane

0xd9b1,	// (0x0002ecbe) list_double2_graphic_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_double2_graphic_pane

0xd9b1,	// (0x0002ecbe) list_double2_large_graphic_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_double2_large_graphic_pane

0xd9b1,	// (0x0002ecbe) list_double2_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_double2_pane

0xd9b1,	// (0x0002ecbe) list_double_graphic_heading_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_double_graphic_heading_pane

0xd9b1,	// (0x0002ecbe) list_double_graphic_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_double_graphic_pane

0xd9b1,	// (0x0002ecbe) list_double_heading_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_double_heading_pane

0xd9b1,	// (0x0002ecbe) list_double_large_graphic_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_double_large_graphic_pane

0xd9b1,	// (0x0002ecbe) list_double_number_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_double_number_pane

0xd9b1,	// (0x0002ecbe) list_double_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_double_pane

0xd9b1,	// (0x0002ecbe) list_double_time_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_double_time_pane

0xd9b1,	// (0x0002ecbe) list_setting_number_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_setting_number_pane

0xd9b1,	// (0x0002ecbe) list_setting_pane_ParamLimits

0xd9b1,	// (0x0002ecbe) list_setting_pane

0xb731,	// (0x0002ca3e) list_single_2graphic_pane_ParamLimits

0xb731,	// (0x0002ca3e) list_single_2graphic_pane

0xb731,	// (0x0002ca3e) list_single_graphic_heading_pane_ParamLimits

0xb731,	// (0x0002ca3e) list_single_graphic_heading_pane

0xb731,	// (0x0002ca3e) list_single_graphic_pane_ParamLimits

0xb731,	// (0x0002ca3e) list_single_graphic_pane

0xb731,	// (0x0002ca3e) list_single_heading_pane_ParamLimits

0xb731,	// (0x0002ca3e) list_single_heading_pane

0xd9d9,	// (0x0002ece6) list_single_large_graphic_pane_ParamLimits

0xd9d9,	// (0x0002ece6) list_single_large_graphic_pane

0xb731,	// (0x0002ca3e) list_single_number_heading_pane_ParamLimits

0xb731,	// (0x0002ca3e) list_single_number_heading_pane

0xb731,	// (0x0002ca3e) list_single_number_pane_ParamLimits

0xb731,	// (0x0002ca3e) list_single_number_pane

0xb731,	// (0x0002ca3e) list_single_pane_ParamLimits

0xb731,	// (0x0002ca3e) list_single_pane

0xe805,	// (0x0002fb12) list_highlight_pane_cp1

0x0481,	// (0x0002178e) list_single_pane_g1_ParamLimits

0x0481,	// (0x0002178e) list_single_pane_g1

0x048d,	// (0x0002179a) list_single_pane_g2_ParamLimits

0x048d,	// (0x0002179a) list_single_pane_g2

0x0001,

0xf5e4,	// (0x000308f1) list_single_pane_g_ParamLimits

0xf5e4,	// (0x000308f1) list_single_pane_g

0x068b,	// (0x00021998) list_single_pane_t1_ParamLimits

0x068b,	// (0x00021998) list_single_pane_t1

0x0481,	// (0x0002178e) list_single_number_pane_g1_ParamLimits

0x0481,	// (0x0002178e) list_single_number_pane_g1

0x048d,	// (0x0002179a) list_single_number_pane_g2_ParamLimits

0x048d,	// (0x0002179a) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x000308f1) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x000308f1) list_single_number_pane_g

0x0505,	// (0x00021812) list_single_number_pane_t1_ParamLimits

0x0505,	// (0x00021812) list_single_number_pane_t1

0xb6f3,	// (0x0002ca00) list_single_number_pane_t2_ParamLimits

0xb6f3,	// (0x0002ca00) list_single_number_pane_t2

0x0001,

0xf966,	// (0x00030c73) list_single_number_pane_t_ParamLimits

0xf966,	// (0x00030c73) list_single_number_pane_t

0xb0d1,	// (0x0002c3de) list_single_graphic_pane_g1_ParamLimits

0xb0d1,	// (0x0002c3de) list_single_graphic_pane_g1

0x0481,	// (0x0002178e) list_single_graphic_pane_g2_ParamLimits

0x0481,	// (0x0002178e) list_single_graphic_pane_g2

0x048d,	// (0x0002179a) list_single_graphic_pane_g3_ParamLimits

0x048d,	// (0x0002179a) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x000308ea) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x000308ea) list_single_graphic_pane_g

0xb0dd,	// (0x0002c3ea) list_single_graphic_pane_t1_ParamLimits

0xb0dd,	// (0x0002c3ea) list_single_graphic_pane_t1

0x0481,	// (0x0002178e) list_single_heading_pane_g1_ParamLimits

0x0481,	// (0x0002178e) list_single_heading_pane_g1

0x048d,	// (0x0002179a) list_single_heading_pane_g2_ParamLimits

0x048d,	// (0x0002179a) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x000308f1) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x000308f1) list_single_heading_pane_g

0xb0f3,	// (0x0002c400) list_single_heading_pane_t1_ParamLimits

0xb0f3,	// (0x0002c400) list_single_heading_pane_t1

0xb109,	// (0x0002c416) list_single_heading_pane_t2_ParamLimits

0xb109,	// (0x0002c416) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x000308f6) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x000308f6) list_single_heading_pane_t

0x0481,	// (0x0002178e) list_single_number_heading_pane_g1_ParamLimits

0x0481,	// (0x0002178e) list_single_number_heading_pane_g1

0x048d,	// (0x0002179a) list_single_number_heading_pane_g2_ParamLimits

0x048d,	// (0x0002179a) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x000308f1) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x000308f1) list_single_number_heading_pane_g

0xb0f3,	// (0x0002c400) list_single_number_heading_pane_t1_ParamLimits

0xb0f3,	// (0x0002c400) list_single_number_heading_pane_t1

0xb11b,	// (0x0002c428) list_single_number_heading_pane_t2_ParamLimits

0xb11b,	// (0x0002c428) list_single_number_heading_pane_t2

0x0665,	// (0x00021972) list_single_number_heading_pane_t3_ParamLimits

0x0665,	// (0x00021972) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x000308fb) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x000308fb) list_single_number_heading_pane_t

0x04e1,	// (0x000217ee) list_single_graphic_heading_pane_g1_ParamLimits

0x04e1,	// (0x000217ee) list_single_graphic_heading_pane_g1

0xb12d,	// (0x0002c43a) list_single_graphic_heading_pane_g4_ParamLimits

0xb12d,	// (0x0002c43a) list_single_graphic_heading_pane_g4

0x048d,	// (0x0002179a) list_single_graphic_heading_pane_g5_ParamLimits

0x048d,	// (0x0002179a) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00030902) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00030902) list_single_graphic_heading_pane_g

0xb0f3,	// (0x0002c400) list_single_graphic_heading_pane_t1_ParamLimits

0xb0f3,	// (0x0002c400) list_single_graphic_heading_pane_t1

0xb13e,	// (0x0002c44b) list_single_graphic_heading_pane_t2_ParamLimits

0xb13e,	// (0x0002c44b) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00030909) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00030909) list_single_graphic_heading_pane_t

0x06a1,	// (0x000219ae) list_single_large_graphic_pane_g1_ParamLimits

0x06a1,	// (0x000219ae) list_single_large_graphic_pane_g1

0x06ad,	// (0x000219ba) list_single_large_graphic_pane_g2_ParamLimits

0x06ad,	// (0x000219ba) list_single_large_graphic_pane_g2

0x06b9,	// (0x000219c6) list_single_large_graphic_pane_g3_ParamLimits

0x06b9,	// (0x000219c6) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0003090e) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0003090e) list_single_large_graphic_pane_g

0x51ab,	// (0x000264b8) wait_border_pane_g2_copy1

0xb150,	// (0x0002c45d) list_single_large_graphic_pane_g4_cp2

0x06c5,	// (0x000219d2) list_single_large_graphic_pane_t1_ParamLimits

0x06c5,	// (0x000219d2) list_single_large_graphic_pane_t1

0xb158,	// (0x0002c465) list_double_pane_g1_ParamLimits

0xb158,	// (0x0002c465) list_double_pane_g1

0xb164,	// (0x0002c471) list_double_pane_g2_ParamLimits

0xb164,	// (0x0002c471) list_double_pane_g2

0x0001,

0xf608,	// (0x00030915) list_double_pane_g_ParamLimits

0xf608,	// (0x00030915) list_double_pane_g

0xb170,	// (0x0002c47d) list_double_pane_t1_ParamLimits

0xb170,	// (0x0002c47d) list_double_pane_t1

0xb186,	// (0x0002c493) list_double_pane_t2_ParamLimits

0xb186,	// (0x0002c493) list_double_pane_t2

0x0001,

0xf60d,	// (0x0003091a) list_double_pane_t_ParamLimits

0xf60d,	// (0x0003091a) list_double_pane_t

0xb198,	// (0x0002c4a5) list_double2_pane_g1_ParamLimits

0xb198,	// (0x0002c4a5) list_double2_pane_g1

0xb164,	// (0x0002c471) list_double2_pane_g2_ParamLimits

0xb164,	// (0x0002c471) list_double2_pane_g2

0x0001,

0xf612,	// (0x0003091f) list_double2_pane_g_ParamLimits

0xf612,	// (0x0003091f) list_double2_pane_g

0xb170,	// (0x0002c47d) list_double2_pane_t1_ParamLimits

0xb170,	// (0x0002c47d) list_double2_pane_t1

0xb1a9,	// (0x0002c4b6) list_double2_pane_t2_ParamLimits

0xb1a9,	// (0x0002c4b6) list_double2_pane_t2

0x0001,

0xf617,	// (0x00030924) list_double2_pane_t_ParamLimits

0xf617,	// (0x00030924) list_double2_pane_t

0xb158,	// (0x0002c465) list_double_number_pane_g1_ParamLimits

0xb158,	// (0x0002c465) list_double_number_pane_g1

0xb164,	// (0x0002c471) list_double_number_pane_g2_ParamLimits

0xb164,	// (0x0002c471) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00030915) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00030915) list_double_number_pane_g

0xb1bb,	// (0x0002c4c8) list_double_number_pane_t1_ParamLimits

0xb1bb,	// (0x0002c4c8) list_double_number_pane_t1

0xb1cd,	// (0x0002c4da) list_double_number_pane_t2_ParamLimits

0xb1cd,	// (0x0002c4da) list_double_number_pane_t2

0xb1e3,	// (0x0002c4f0) list_double_number_pane_t3_ParamLimits

0xb1e3,	// (0x0002c4f0) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00030929) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00030929) list_double_number_pane_t

0xb1f5,	// (0x0002c502) list_double_graphic_pane_g1_ParamLimits

0xb1f5,	// (0x0002c502) list_double_graphic_pane_g1

0xb201,	// (0x0002c50e) list_double_graphic_pane_g2_ParamLimits

0xb201,	// (0x0002c50e) list_double_graphic_pane_g2

0xb210,	// (0x0002c51d) list_double_graphic_pane_g3_ParamLimits

0xb210,	// (0x0002c51d) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00030930) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00030930) list_double_graphic_pane_g

0xb228,	// (0x0002c535) list_double_graphic_pane_t1_ParamLimits

0xb228,	// (0x0002c535) list_double_graphic_pane_t1

0xb23e,	// (0x0002c54b) list_double_graphic_pane_t2_ParamLimits

0xb23e,	// (0x0002c54b) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00030939) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00030939) list_double_graphic_pane_t

0xb1f5,	// (0x0002c502) list_double2_graphic_pane_g1_ParamLimits

0xb1f5,	// (0x0002c502) list_double2_graphic_pane_g1

0xb250,	// (0x0002c55d) list_double2_graphic_pane_g2_ParamLimits

0xb250,	// (0x0002c55d) list_double2_graphic_pane_g2

0xb25c,	// (0x0002c569) list_double2_graphic_pane_g3_ParamLimits

0xb25c,	// (0x0002c569) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0003093e) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0003093e) list_double2_graphic_pane_g

0xb1cd,	// (0x0002c4da) list_double2_graphic_pane_t1_ParamLimits

0xb1cd,	// (0x0002c4da) list_double2_graphic_pane_t1

0xb268,	// (0x0002c575) list_double2_graphic_pane_t2_ParamLimits

0xb268,	// (0x0002c575) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00030945) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00030945) list_double2_graphic_pane_t

0xb27a,	// (0x0002c587) list_double_large_graphic_pane_g1_ParamLimits

0xb27a,	// (0x0002c587) list_double_large_graphic_pane_g1

0xb198,	// (0x0002c4a5) list_double_large_graphic_pane_g2_ParamLimits

0xb198,	// (0x0002c4a5) list_double_large_graphic_pane_g2

0xb164,	// (0x0002c471) list_double_large_graphic_pane_g3_ParamLimits

0xb164,	// (0x0002c471) list_double_large_graphic_pane_g3

0xb2a5,	// (0x0002c5b2) list_double_large_graphic_pane_g4_ParamLimits

0xb2a5,	// (0x0002c5b2) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0003094a) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0003094a) list_double_large_graphic_pane_g

0xb2b7,	// (0x0002c5c4) list_double_large_graphic_pane_t1_ParamLimits

0xb2b7,	// (0x0002c5c4) list_double_large_graphic_pane_t1

0xb2d0,	// (0x0002c5dd) list_double_large_graphic_pane_t2_ParamLimits

0xb2d0,	// (0x0002c5dd) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00030955) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00030955) list_double_large_graphic_pane_t

0xb2e2,	// (0x0002c5ef) list_double2_large_graphic_pane_g1_ParamLimits

0xb2e2,	// (0x0002c5ef) list_double2_large_graphic_pane_g1

0xb198,	// (0x0002c4a5) list_double2_large_graphic_pane_g2_ParamLimits

0xb198,	// (0x0002c4a5) list_double2_large_graphic_pane_g2

0xb164,	// (0x0002c471) list_double2_large_graphic_pane_g3_ParamLimits

0xb164,	// (0x0002c471) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0003095a) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0003095a) list_double2_large_graphic_pane_g

0xb2ee,	// (0x0002c5fb) list_double2_large_graphic_pane_t1_ParamLimits

0xb2ee,	// (0x0002c5fb) list_double2_large_graphic_pane_t1

0xb304,	// (0x0002c611) list_double2_large_graphic_pane_t2_ParamLimits

0xb304,	// (0x0002c611) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00030961) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00030961) list_double2_large_graphic_pane_t

0xb316,	// (0x0002c623) list_double_heading_pane_g1_ParamLimits

0xb316,	// (0x0002c623) list_double_heading_pane_g1

0xb327,	// (0x0002c634) list_double_heading_pane_g2_ParamLimits

0xb327,	// (0x0002c634) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00030966) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00030966) list_double_heading_pane_g

0xb333,	// (0x0002c640) list_double_heading_pane_t1_ParamLimits

0xb333,	// (0x0002c640) list_double_heading_pane_t1

0xb349,	// (0x0002c656) list_double_heading_pane_t2_ParamLimits

0xb349,	// (0x0002c656) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0003096b) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0003096b) list_double_heading_pane_t

0xb35b,	// (0x0002c668) list_double_graphic_heading_pane_g1_ParamLimits

0xb35b,	// (0x0002c668) list_double_graphic_heading_pane_g1

0xb316,	// (0x0002c623) list_double_graphic_heading_pane_g2_ParamLimits

0xb316,	// (0x0002c623) list_double_graphic_heading_pane_g2

0xb327,	// (0x0002c634) list_double_graphic_heading_pane_g3_ParamLimits

0xb327,	// (0x0002c634) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00030970) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00030970) list_double_graphic_heading_pane_g

0xb367,	// (0x0002c674) list_double_graphic_heading_pane_t1_ParamLimits

0xb367,	// (0x0002c674) list_double_graphic_heading_pane_t1

0xb37d,	// (0x0002c68a) list_double_graphic_heading_pane_t2_ParamLimits

0xb37d,	// (0x0002c68a) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00030977) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00030977) list_double_graphic_heading_pane_t

0xb198,	// (0x0002c4a5) list_double_time_pane_g1_ParamLimits

0xb198,	// (0x0002c4a5) list_double_time_pane_g1

0xb164,	// (0x0002c471) list_double_time_pane_g2_ParamLimits

0xb164,	// (0x0002c471) list_double_time_pane_g2

0x0001,

0xf612,	// (0x0003091f) list_double_time_pane_g_ParamLimits

0xf612,	// (0x0003091f) list_double_time_pane_g

0xb2ee,	// (0x0002c5fb) list_double_time_pane_t1_ParamLimits

0xb2ee,	// (0x0002c5fb) list_double_time_pane_t1

0xb38f,	// (0x0002c69c) list_double_time_pane_t2_ParamLimits

0xb38f,	// (0x0002c69c) list_double_time_pane_t2

0xb3a1,	// (0x0002c6ae) list_double_time_pane_t3_ParamLimits

0xb3a1,	// (0x0002c6ae) list_double_time_pane_t3

0xb3b3,	// (0x0002c6c0) list_double_time_pane_t4_ParamLimits

0xb3b3,	// (0x0002c6c0) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x0003097c) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x0003097c) list_double_time_pane_t

0xb3c5,	// (0x0002c6d2) list_setting_pane_g1_ParamLimits

0xb3c5,	// (0x0002c6d2) list_setting_pane_g1

0xb3d1,	// (0x0002c6de) list_setting_pane_g2_ParamLimits

0xb3d1,	// (0x0002c6de) list_setting_pane_g2

0x0001,

0xf678,	// (0x00030985) list_setting_pane_g_ParamLimits

0xf678,	// (0x00030985) list_setting_pane_g

0xb3dd,	// (0x0002c6ea) list_setting_pane_t1_ParamLimits

0xb3dd,	// (0x0002c6ea) list_setting_pane_t1

0xb3f7,	// (0x0002c704) list_setting_pane_t2_ParamLimits

0xb3f7,	// (0x0002c704) list_setting_pane_t2

0x0002,

0xf67d,	// (0x0003098a) list_setting_pane_t_ParamLimits

0xf67d,	// (0x0003098a) list_setting_pane_t

0xb436,	// (0x0002c743) set_value_pane_cp_ParamLimits

0xb436,	// (0x0002c743) set_value_pane_cp

0xb444,	// (0x0002c751) list_setting_number_pane_g1_ParamLimits

0xb444,	// (0x0002c751) list_setting_number_pane_g1

0xb450,	// (0x0002c75d) list_setting_number_pane_g2_ParamLimits

0xb450,	// (0x0002c75d) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x00030991) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x00030991) list_setting_number_pane_g

0xb45c,	// (0x0002c769) list_setting_number_pane_t1_ParamLimits

0xb45c,	// (0x0002c769) list_setting_number_pane_t1

0xb475,	// (0x0002c782) list_setting_number_pane_t2_ParamLimits

0xb475,	// (0x0002c782) list_setting_number_pane_t2

0xb48f,	// (0x0002c79c) list_setting_number_pane_t3_ParamLimits

0xb48f,	// (0x0002c79c) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x00030996) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x00030996) list_setting_number_pane_t

0xb436,	// (0x0002c743) set_value_pane_ParamLimits

0xb436,	// (0x0002c743) set_value_pane

0x2fff,	// (0x0002430c) bg_set_opt_pane_ParamLimits

0x2fff,	// (0x0002430c) bg_set_opt_pane

0x0175,	// (0x00021482) set_value_pane_t1

0x3020,	// (0x0002432d) slider_set_pane_cp3

0x3029,	// (0x00024336) volume_small_pane_cp

0x3032,	// (0x0002433f) list_form_gen_pane

0x303b,	// (0x00024348) scroll_pane_cp8

0xb4d2,	// (0x0002c7df) form_field_data_pane_ParamLimits

0xb4d2,	// (0x0002c7df) form_field_data_pane

0xb4ed,	// (0x0002c7fa) form_field_data_wide_pane_ParamLimits

0xb4ed,	// (0x0002c7fa) form_field_data_wide_pane

0x01d0,	// (0x000214dd) form_field_popup_pane_ParamLimits

0x01d0,	// (0x000214dd) form_field_popup_pane

0xb511,	// (0x0002c81e) form_field_popup_wide_pane_ParamLimits

0xb511,	// (0x0002c81e) form_field_popup_wide_pane

0x0213,	// (0x00021520) form_field_slider_pane_ParamLimits

0x0213,	// (0x00021520) form_field_slider_pane

0x0226,	// (0x00021533) form_field_slider_wide_pane_ParamLimits

0x0226,	// (0x00021533) form_field_slider_wide_pane

0x304c,	// (0x00024359) data_form_pane

0xb53c,	// (0x0002c849) form_field_data_pane_t1

0x3058,	// (0x00024365) input_focus_pane

0x3066,	// (0x00024373) data_form_wide_pane

0x0269,	// (0x00021576) form_field_data_wide_pane_t1

0x17c9,	// (0x00022ad6) input_focus_pane_cp6

0xb556,	// (0x0002c863) form_field_popup_pane_t1

0x3058,	// (0x00024365) input_focus_pane_cp7

0x3092,	// (0x0002439f) list_form_pane

0x02ad,	// (0x000215ba) form_field_popup_wide_pane_t1

0x3058,	// (0x00024365) input_focus_pane_cp8

0x309e,	// (0x000243ab) list_form_wide_pane

0xb578,	// (0x0002c885) form_field_slider_pane_t1_ParamLimits

0xb578,	// (0x0002c885) form_field_slider_pane_t1

0xb590,	// (0x0002c89d) form_field_slider_pane_t2_ParamLimits

0xb590,	// (0x0002c89d) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x000309a6) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x000309a6) form_field_slider_pane_t

0x144d,	// (0x0002275a) input_focus_pane_cp9_ParamLimits

0x144d,	// (0x0002275a) input_focus_pane_cp9

0xb5a5,	// (0x0002c8b2) slider_cont_pane_ParamLimits

0xb5a5,	// (0x0002c8b2) slider_cont_pane

0x30ad,	// (0x000243ba) form_field_slider_wide_pane_t1_ParamLimits

0x30ad,	// (0x000243ba) form_field_slider_wide_pane_t1

0x030b,	// (0x00021618) form_field_slider_wide_pane_t2_ParamLimits

0x030b,	// (0x00021618) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x000309ab) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x000309ab) form_field_slider_wide_pane_t

0x144d,	// (0x0002275a) input_focus_pane_cp10_ParamLimits

0x144d,	// (0x0002275a) input_focus_pane_cp10

0xb5b9,	// (0x0002c8c6) slider_cont_pane_cp1_ParamLimits

0xb5b9,	// (0x0002c8c6) slider_cont_pane_cp1

0xb5cd,	// (0x0002c8da) slider_form_pane_cp

0x30bf,	// (0x000243cc) input_focus_pane_g1

0x30c7,	// (0x000243d4) input_focus_pane_g2

0x30cf,	// (0x000243dc) input_focus_pane_g3

0x30d7,	// (0x000243e4) input_focus_pane_g4

0x30df,	// (0x000243ec) input_focus_pane_g5

0x30e7,	// (0x000243f4) input_focus_pane_g6

0x30ef,	// (0x000243fc) input_focus_pane_g7

0x30f7,	// (0x00024404) input_focus_pane_g8

0x30ff,	// (0x0002440c) input_focus_pane_g9

0xe7fb,	// (0x0002fb08) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x000309b0) input_focus_pane_g

0x51b4,	// (0x000264c1) wait_border_pane_g3_copy1

0xb5d5,	// (0x0002c8e2) data_form_pane_t1

0xe7fb,	// (0x0002fb08) wait_anim_pane_g1_copy1

0xb705,	// (0x0002ca12) data_form_wide_pane_t1

0x036b,	// (0x00021678) list_form_graphic_pane_cp_ParamLimits

0x036b,	// (0x00021678) list_form_graphic_pane_cp

0x6139,	// (0x00027446) slider_form_pane_g1

0x6142,	// (0x0002744f) slider_form_pane_g2

0x0006,

0xf996,	// (0x00030ca3) slider_form_pane_g

0x036b,	// (0x00021678) list_form_graphic_pane_ParamLimits

0x036b,	// (0x00021678) list_form_graphic_pane

0x037d,	// (0x0002168a) list_form_graphic_pane_g1

0x0385,	// (0x00021692) list_form_graphic_pane_t1_ParamLimits

0x0385,	// (0x00021692) list_form_graphic_pane_t1

0x1141,	// (0x0002244e) list_highlight_pane_cp5_ParamLimits

0x1141,	// (0x0002244e) list_highlight_pane_cp5

0xb5ef,	// (0x0002c8fc) find_pane_g1

0x3107,	// (0x00024414) input_find_pane

0xb5f8,	// (0x0002c905) input_find_pane_g1_ParamLimits

0xb5f8,	// (0x0002c905) input_find_pane_g1

0xb604,	// (0x0002c911) input_find_pane_t1_ParamLimits

0xb604,	// (0x0002c911) input_find_pane_t1

0xb619,	// (0x0002c926) input_find_pane_t2_ParamLimits

0xb619,	// (0x0002c926) input_find_pane_t2

0x0001,

0xf6b8,	// (0x000309c5) input_find_pane_t_ParamLimits

0xf6b8,	// (0x000309c5) input_find_pane_t

0x3110,	// (0x0002441d) input_focus_pane_cp5_ParamLimits

0x3110,	// (0x0002441d) input_focus_pane_cp5

0xbedb,	// (0x0002d1e8) bg_popup_window_pane_cp2_ParamLimits

0xbedb,	// (0x0002d1e8) bg_popup_window_pane_cp2

0xbee8,	// (0x0002d1f5) listscroll_menu_pane_ParamLimits

0xbee8,	// (0x0002d1f5) listscroll_menu_pane

0xbef4,	// (0x0002d201) popup_submenu_window_ParamLimits

0xbef4,	// (0x0002d201) popup_submenu_window

0x3173,	// (0x00024480) find_popup_pane_g1

0x317b,	// (0x00024488) input_popup_find_pane_cp

0x3110,	// (0x0002441d) input_focus_pane_cp4_ParamLimits

0x3110,	// (0x0002441d) input_focus_pane_cp4

0x3193,	// (0x000244a0) input_popup_find_pane_t1_ParamLimits

0x3193,	// (0x000244a0) input_popup_find_pane_t1

0xe805,	// (0x0002fb12) bg_popup_sub_pane_cp

0x31c1,	// (0x000244ce) listscroll_popup_sub_pane

0x31c9,	// (0x000244d6) list_submenu_pane_ParamLimits

0x31c9,	// (0x000244d6) list_submenu_pane

0x31da,	// (0x000244e7) scroll_pane_cp4

0x31e2,	// (0x000244ef) list_single_popup_submenu_pane_ParamLimits

0x31e2,	// (0x000244ef) list_single_popup_submenu_pane

0x31f7,	// (0x00024504) list_single_popup_submenu_pane_g1

0x31ff,	// (0x0002450c) list_single_popup_submenu_pane_t1_ParamLimits

0x31ff,	// (0x0002450c) list_single_popup_submenu_pane_t1

0x144d,	// (0x0002275a) bg_active_tab_pane_cp1_ParamLimits

0x144d,	// (0x0002275a) bg_active_tab_pane_cp1

0xbf32,	// (0x0002d23f) tabs_2_active_pane_g1

0xbf3a,	// (0x0002d247) tabs_2_active_pane_t1

0x144d,	// (0x0002275a) bg_passive_tab_pane_cp1_ParamLimits

0x144d,	// (0x0002275a) bg_passive_tab_pane_cp1

0xbf32,	// (0x0002d23f) tabs_2_passive_pane_g1

0xbf3a,	// (0x0002d247) tabs_2_passive_pane_t1

0x1141,	// (0x0002244e) bg_active_tab_pane_cp4

0xbf4c,	// (0x0002d259) tabs_2_long_active_pane_t1

0x403c,	// (0x00025349) bg_passive_tab_pane_cp4

0xcb8a,	// (0x0002de97) list_single_midp_graphic_pane_g4_ParamLimits

0x1141,	// (0x0002244e) bg_active_tab_pane_cp5

0xbf5f,	// (0x0002d26c) tabs_3_long_active_pane_t1

0x403c,	// (0x00025349) bg_passive_tab_pane_cp5

0xcb8a,	// (0x0002de97) list_single_midp_graphic_pane_g4

0x1141,	// (0x0002244e) bg_popup_window_pane_cp13_ParamLimits

0x1141,	// (0x0002244e) bg_popup_window_pane_cp13

0x3276,	// (0x00024583) listscroll_popup_fast_pane_ParamLimits

0x3276,	// (0x00024583) listscroll_popup_fast_pane

0x3285,	// (0x00024592) grid_popup_fast_pane_ParamLimits

0x3285,	// (0x00024592) grid_popup_fast_pane

0x3297,	// (0x000245a4) scroll_pane_cp9_ParamLimits

0x3297,	// (0x000245a4) scroll_pane_cp9

0x7a8f,	// (0x00028d9c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7a8f,	// (0x00028d9c) list_single_graphic_hl_pane_t1_cp2

0x32bb,	// (0x000245c8) input_focus_pane_cp20_ParamLimits

0x32bb,	// (0x000245c8) input_focus_pane_cp20

0x32c9,	// (0x000245d6) query_popup_data_pane_t1_ParamLimits

0x32c9,	// (0x000245d6) query_popup_data_pane_t1

0x32dc,	// (0x000245e9) query_popup_data_pane_t2_ParamLimits

0x32dc,	// (0x000245e9) query_popup_data_pane_t2

0x3322,	// (0x0002462f) query_popup_data_pane_t3_ParamLimits

0x3322,	// (0x0002462f) query_popup_data_pane_t3

0x3363,	// (0x00024670) query_popup_data_pane_t4_ParamLimits

0x3363,	// (0x00024670) query_popup_data_pane_t4

0x339f,	// (0x000246ac) query_popup_data_pane_t5_ParamLimits

0x339f,	// (0x000246ac) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x000309ca) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x000309ca) query_popup_data_pane_t

0x30bf,	// (0x000243cc) bg_set_opt_pane_g1

0x30c7,	// (0x000243d4) bg_set_opt_pane_g2

0x30cf,	// (0x000243dc) bg_set_opt_pane_g3

0x30d7,	// (0x000243e4) bg_set_opt_pane_g4

0x30df,	// (0x000243ec) bg_set_opt_pane_g5

0x30e7,	// (0x000243f4) bg_set_opt_pane_g6

0x30ef,	// (0x000243fc) bg_set_opt_pane_g7

0x30f7,	// (0x00024404) bg_set_opt_pane_g8

0x30ff,	// (0x0002440c) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x000309d5) bg_set_opt_pane_g

0x1ca2,	// (0x00022faf) control_top_pane_stacon_ParamLimits

0x1ca2,	// (0x00022faf) control_top_pane_stacon

0x1cf5,	// (0x00023002) signal_pane_stacon_ParamLimits

0x1cf5,	// (0x00023002) signal_pane_stacon

0x394b,	// (0x00024c58) stacon_top_pane_g1_ParamLimits

0x394b,	// (0x00024c58) stacon_top_pane_g1

0x1d1a,	// (0x00023027) title_pane_stacon_ParamLimits

0x1d1a,	// (0x00023027) title_pane_stacon

0x1d44,	// (0x00023051) uni_indicator_pane_stacon_ParamLimits

0x1d44,	// (0x00023051) uni_indicator_pane_stacon

0x1d5c,	// (0x00023069) battery_pane_stacon_ParamLimits

0x1d5c,	// (0x00023069) battery_pane_stacon

0x1da0,	// (0x000230ad) control_bottom_pane_stacon_ParamLimits

0x1da0,	// (0x000230ad) control_bottom_pane_stacon

0x1dc3,	// (0x000230d0) navi_pane_stacon_ParamLimits

0x1dc3,	// (0x000230d0) navi_pane_stacon

0x396d,	// (0x00024c7a) stacon_bottom_pane_g1_ParamLimits

0x396d,	// (0x00024c7a) stacon_bottom_pane_g1

0x19ff,	// (0x00022d0c) aid_levels_signal_lsc_ParamLimits

0x19ff,	// (0x00022d0c) aid_levels_signal_lsc

0x1a16,	// (0x00022d23) signal_pane_stacon_g1_ParamLimits

0x1a16,	// (0x00022d23) signal_pane_stacon_g1

0x1a2a,	// (0x00022d37) signal_pane_stacon_g2_ParamLimits

0x1a2a,	// (0x00022d37) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x000309e8) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x000309e8) signal_pane_stacon_g

0x1a5f,	// (0x00022d6c) title_pane_stacon_t1_ParamLimits

0x1a5f,	// (0x00022d6c) title_pane_stacon_t1

0x33e3,	// (0x000246f0) uni_indicator_pane_stacon_g1

0x33ed,	// (0x000246fa) uni_indicator_pane_stacon_g2

0x33f7,	// (0x00024704) uni_indicator_pane_stacon_g3

0x3401,	// (0x0002470e) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x000309f4) uni_indicator_pane_stacon_g

0x1a84,	// (0x00022d91) control_top_pane_stacon_g1

0x1a8c,	// (0x00022d99) control_top_pane_stacon_t1_ParamLimits

0x1a8c,	// (0x00022d99) control_top_pane_stacon_t1

0x1ac3,	// (0x00022dd0) aid_levels_battery_lsc_ParamLimits

0x1ac3,	// (0x00022dd0) aid_levels_battery_lsc

0x1adb,	// (0x00022de8) battery_pane_stacon_g1_ParamLimits

0x1adb,	// (0x00022de8) battery_pane_stacon_g1

0x1aee,	// (0x00022dfb) battery_pane_stacon_g2_ParamLimits

0x1aee,	// (0x00022dfb) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x000309fd) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x000309fd) battery_pane_stacon_g

0x1b2c,	// (0x00022e39) navi_icon_pane_stacon

0x1b40,	// (0x00022e4d) navi_navi_pane_stacon

0x1b2c,	// (0x00022e39) navi_text_pane_stacon

0x1a84,	// (0x00022d91) control_bottom_pane_stacon_g1

0x1b56,	// (0x00022e63) control_bottom_pane_stacon_t1_ParamLimits

0x1b56,	// (0x00022e63) control_bottom_pane_stacon_t1

0xbf71,	// (0x0002d27e) grid_app_pane_ParamLimits

0xbf71,	// (0x0002d27e) grid_app_pane

0xbfa9,	// (0x0002d2b6) scroll_pane_cp15_ParamLimits

0xbfa9,	// (0x0002d2b6) scroll_pane_cp15

0xbfc6,	// (0x0002d2d3) cell_app_pane_ParamLimits

0xbfc6,	// (0x0002d2d3) cell_app_pane

0xc007,	// (0x0002d314) cell_app_pane_g1_ParamLimits

0xc007,	// (0x0002d314) cell_app_pane_g1

0x34ae,	// (0x000247bb) cell_app_pane_g2_ParamLimits

0x34ae,	// (0x000247bb) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x00030a02) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x00030a02) cell_app_pane_g

0x34ba,	// (0x000247c7) cell_app_pane_t1_ParamLimits

0x34ba,	// (0x000247c7) cell_app_pane_t1

0x34cc,	// (0x000247d9) grid_highlight_pane_ParamLimits

0x34cc,	// (0x000247d9) grid_highlight_pane

0x30bf,	// (0x000243cc) cell_highlight_pane_g1

0x30c7,	// (0x000243d4) cell_highlight_pane_g2

0x30cf,	// (0x000243dc) cell_highlight_pane_g3

0x30d7,	// (0x000243e4) cell_highlight_pane_g4

0x30df,	// (0x000243ec) cell_highlight_pane_g5

0x30e7,	// (0x000243f4) cell_highlight_pane_g6

0x30ef,	// (0x000243fc) cell_highlight_pane_g7

0x30f7,	// (0x00024404) cell_highlight_pane_g8

0x30ff,	// (0x0002440c) cell_highlight_pane_g9

0xe7fb,	// (0x0002fb08) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x000309b0) cell_highlight_pane_g

0x34dd,	// (0x000247ea) bg_scroll_pane

0x1ba0,	// (0x00022ead) scroll_handle_pane

0x3524,	// (0x00024831) scroll_bg_pane_g1

0x3539,	// (0x00024846) scroll_bg_pane_g2

0x3551,	// (0x0002485e) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x00030a07) scroll_bg_pane_g

0x3566,	// (0x00024873) scroll_handle_focus_pane_ParamLimits

0x3566,	// (0x00024873) scroll_handle_focus_pane

0x3524,	// (0x00024831) scroll_handle_pane_g1

0x3573,	// (0x00024880) scroll_handle_pane_g2

0x3551,	// (0x0002485e) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x00030a0e) scroll_handle_pane_g

0x3110,	// (0x0002441d) bg_popup_sub_pane_cp21_ParamLimits

0x3110,	// (0x0002441d) bg_popup_sub_pane_cp21

0x3587,	// (0x00024894) popup_fep_japan_predictive_window_t1_ParamLimits

0x3587,	// (0x00024894) popup_fep_japan_predictive_window_t1

0x359e,	// (0x000248ab) popup_fep_japan_predictive_window_t2_ParamLimits

0x359e,	// (0x000248ab) popup_fep_japan_predictive_window_t2

0x35d1,	// (0x000248de) popup_fep_japan_predictive_window_t3_ParamLimits

0x35d1,	// (0x000248de) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x00030a15) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x00030a15) popup_fep_japan_predictive_window_t

0xe805,	// (0x0002fb12) bg_popup_sub_pane_cp23

0x3608,	// (0x00024915) listscroll_japin_cand_pane

0x3610,	// (0x0002491d) popup_fep_japan_candidate_window_t1

0x361e,	// (0x0002492b) candidate_pane_ParamLimits

0x361e,	// (0x0002492b) candidate_pane

0x3630,	// (0x0002493d) scroll_pane_cp30

0x363a,	// (0x00024947) list_single_popup_jap_candidate_pane_ParamLimits

0x363a,	// (0x00024947) list_single_popup_jap_candidate_pane

0xe805,	// (0x0002fb12) list_highlight_pane_cp30

0x364e,	// (0x0002495b) list_single_popup_jap_candidate_pane_t1

0xc034,	// (0x0002d341) level_1_signal

0xc046,	// (0x0002d353) level_2_signal

0xc059,	// (0x0002d366) level_3_signal

0xc06c,	// (0x0002d379) level_4_signal

0xc07f,	// (0x0002d38c) level_5_signal

0xc092,	// (0x0002d39f) level_6_signal

0xc0a5,	// (0x0002d3b2) level_7_signal

0xc034,	// (0x0002d341) level_1_battery

0xc046,	// (0x0002d353) level_2_battery

0xc059,	// (0x0002d366) level_3_battery

0xc06c,	// (0x0002d379) level_4_battery

0xc07f,	// (0x0002d38c) level_5_battery

0xc092,	// (0x0002d39f) level_6_battery

0xc0a5,	// (0x0002d3b2) level_7_battery

0x36d0,	// (0x000249dd) list_menu_pane_ParamLimits

0x36d0,	// (0x000249dd) list_menu_pane

0x36e1,	// (0x000249ee) scroll_pane_cp25_ParamLimits

0x36e1,	// (0x000249ee) scroll_pane_cp25

0x36fa,	// (0x00024a07) list_double2_graphic_pane_cp2_ParamLimits

0x36fa,	// (0x00024a07) list_double2_graphic_pane_cp2

0x36fa,	// (0x00024a07) list_double2_large_graphic_pane_cp2_ParamLimits

0x36fa,	// (0x00024a07) list_double2_large_graphic_pane_cp2

0x36fa,	// (0x00024a07) list_double2_pane_cp2_ParamLimits

0x36fa,	// (0x00024a07) list_double2_pane_cp2

0x36fa,	// (0x00024a07) list_double_graphic_pane_cp2_ParamLimits

0x36fa,	// (0x00024a07) list_double_graphic_pane_cp2

0x36fa,	// (0x00024a07) list_double_large_graphic_pane_cp2_ParamLimits

0x36fa,	// (0x00024a07) list_double_large_graphic_pane_cp2

0x36fa,	// (0x00024a07) list_double_number_pane_cp2_ParamLimits

0x36fa,	// (0x00024a07) list_double_number_pane_cp2

0x36fa,	// (0x00024a07) list_double_pane_cp2_ParamLimits

0x36fa,	// (0x00024a07) list_double_pane_cp2

0xc0b8,	// (0x0002d3c5) list_single_2graphic_pane_cp2_ParamLimits

0xc0b8,	// (0x0002d3c5) list_single_2graphic_pane_cp2

0xc0b8,	// (0x0002d3c5) list_single_graphic_heading_pane_cp2_ParamLimits

0xc0b8,	// (0x0002d3c5) list_single_graphic_heading_pane_cp2

0xc0b8,	// (0x0002d3c5) list_single_graphic_pane_cp2_ParamLimits

0xc0b8,	// (0x0002d3c5) list_single_graphic_pane_cp2

0xc0b8,	// (0x0002d3c5) list_single_heading_pane_cp2_ParamLimits

0xc0b8,	// (0x0002d3c5) list_single_heading_pane_cp2

0x373d,	// (0x00024a4a) list_single_large_graphic_pane_cp2_ParamLimits

0x373d,	// (0x00024a4a) list_single_large_graphic_pane_cp2

0xc0b8,	// (0x0002d3c5) list_single_number_heading_pane_cp2_ParamLimits

0xc0b8,	// (0x0002d3c5) list_single_number_heading_pane_cp2

0xc0b8,	// (0x0002d3c5) list_single_number_pane_cp2_ParamLimits

0xc0b8,	// (0x0002d3c5) list_single_number_pane_cp2

0xc0b8,	// (0x0002d3c5) list_single_pane_cp2_ParamLimits

0xc0b8,	// (0x0002d3c5) list_single_pane_cp2

0x3792,	// (0x00024a9f) bg_popup_sub_pane_cp22

0x1c52,	// (0x00022f5f) popup_side_volume_key_window_g1

0x1c7c,	// (0x00022f89) popup_side_volume_key_window_t1

0x1c9a,	// (0x00022fa7) volume_small_pane_cp1

0x144d,	// (0x0002275a) bg_popup_sub_pane_cp24_ParamLimits

0x144d,	// (0x0002275a) bg_popup_sub_pane_cp24

0x37a8,	// (0x00024ab5) fep_china_uni_candidate_pane_ParamLimits

0x37a8,	// (0x00024ab5) fep_china_uni_candidate_pane

0x37bc,	// (0x00024ac9) fep_china_uni_entry_pane

0x37cc,	// (0x00024ad9) popup_fep_china_uni_window_g1

0x37e8,	// (0x00024af5) fep_china_uni_entry_pane_g1

0x37f2,	// (0x00024aff) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x00030a42) fep_china_uni_entry_pane_g

0x37fc,	// (0x00024b09) fep_entry_item_pane

0x3806,	// (0x00024b13) fep_candidate_item_pane

0x380e,	// (0x00024b1b) fep_china_uni_candidate_pane_g1

0x3818,	// (0x00024b25) fep_china_uni_candidate_pane_g2

0x3820,	// (0x00024b2d) fep_china_uni_candidate_pane_g3

0x3828,	// (0x00024b35) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x00030a47) fep_china_uni_candidate_pane_g

0xe7fb,	// (0x0002fb08) fep_entry_item_pane_g1

0x3832,	// (0x00024b3f) fep_entry_item_pane_t1_ParamLimits

0x3832,	// (0x00024b3f) fep_entry_item_pane_t1

0x3848,	// (0x00024b55) fep_candidate_item_pane_t1_ParamLimits

0x3848,	// (0x00024b55) fep_candidate_item_pane_t1

0x385d,	// (0x00024b6a) fep_candidate_item_pane_t2_ParamLimits

0x385d,	// (0x00024b6a) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x00030a50) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x00030a50) fep_candidate_item_pane_t

0x1141,	// (0x0002244e) list_highlight_pane_cp31_ParamLimits

0x1141,	// (0x0002244e) list_highlight_pane_cp31

0x386f,	// (0x00024b7c) level_1_signal_lsc

0x3878,	// (0x00024b85) level_2_signal_lsc

0x3881,	// (0x00024b8e) level_3_signal_lsc

0x388a,	// (0x00024b97) level_4_signal_lsc

0x3893,	// (0x00024ba0) level_5_signal_lsc

0x389c,	// (0x00024ba9) level_6_signal_lsc

0x38a5,	// (0x00024bb2) level_7_signal_lsc

0x38a5,	// (0x00024bb2) level_1_battery_lsc

0x38ae,	// (0x00024bbb) level_2_battery_lsc

0x38b7,	// (0x00024bc4) level_3_battery_lsc

0x38c0,	// (0x00024bcd) level_4_battery_lsc

0x38c9,	// (0x00024bd6) level_5_battery_lsc

0x38d2,	// (0x00024bdf) level_6_battery_lsc

0x386f,	// (0x00024b7c) level_7_battery_lsc

0x38db,	// (0x00024be8) scroll_handle_focus_pane_g1

0x38e4,	// (0x00024bf1) scroll_handle_focus_pane_g2

0x38ed,	// (0x00024bfa) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x00030a55) scroll_handle_focus_pane_g

0xb62e,	// (0x0002c93b) list_single_2graphic_pane_g1_ParamLimits

0xb62e,	// (0x0002c93b) list_single_2graphic_pane_g1

0xb12d,	// (0x0002c43a) list_single_2graphic_pane_g2_ParamLimits

0xb12d,	// (0x0002c43a) list_single_2graphic_pane_g2

0x048d,	// (0x0002179a) list_single_2graphic_pane_g3_ParamLimits

0x048d,	// (0x0002179a) list_single_2graphic_pane_g3

0xb63a,	// (0x0002c947) list_single_2graphic_pane_g4_ParamLimits

0xb63a,	// (0x0002c947) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x00030a5c) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x00030a5c) list_single_2graphic_pane_g

0xb646,	// (0x0002c953) list_single_2graphic_pane_t1_ParamLimits

0xb646,	// (0x0002c953) list_single_2graphic_pane_t1

0xb674,	// (0x0002c981) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb674,	// (0x0002c981) list_double2_graphic_large_graphic_pane_g1

0xb198,	// (0x0002c4a5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb198,	// (0x0002c4a5) list_double2_graphic_large_graphic_pane_g2

0xb164,	// (0x0002c471) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb164,	// (0x0002c471) list_double2_graphic_large_graphic_pane_g3

0xb686,	// (0x0002c993) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb686,	// (0x0002c993) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x00030a65) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x00030a65) list_double2_graphic_large_graphic_pane_g

0xb692,	// (0x0002c99f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb692,	// (0x0002c99f) list_double2_graphic_large_graphic_pane_t1

0xb6a8,	// (0x0002c9b5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb6a8,	// (0x0002c9b5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x00030a6e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x00030a6e) list_double2_graphic_large_graphic_pane_t

0x3a2f,	// (0x00024d3c) popup_fast_swap_window_ParamLimits

0x3a2f,	// (0x00024d3c) popup_fast_swap_window

0x3a4d,	// (0x00024d5a) popup_side_volume_key_window

0x3a6b,	// (0x00024d78) stacon_top_pane

0x3a75,	// (0x00024d82) status_pane_ParamLimits

0x3a75,	// (0x00024d82) status_pane

0x3a6b,	// (0x00024d78) status_small_pane

0xe805,	// (0x0002fb12) control_pane

0xe805,	// (0x0002fb12) stacon_bottom_pane

0x303b,	// (0x00024348) scroll_pane_cp121

0x3032,	// (0x0002433f) set_content_pane

0xc11b,	// (0x0002d428) bg_active_tab_pane_g1_cp1

0x38ff,	// (0x00024c0c) bg_active_tab_pane_g2_cp1

0xc124,	// (0x0002d431) bg_active_tab_pane_g3_cp1

0xc11b,	// (0x0002d428) bg_passive_tab_pane_g1_cp1

0x38ff,	// (0x00024c0c) bg_passive_tab_pane_g2_cp1

0xc124,	// (0x0002d431) bg_passive_tab_pane_g3_cp1

0xc12d,	// (0x0002d43a) bg_active_tab_pane_g1_cp2

0x38ff,	// (0x00024c0c) bg_active_tab_pane_g2_cp2

0xc136,	// (0x0002d443) bg_active_tab_pane_g3_cp2

0xc12d,	// (0x0002d43a) bg_passive_tab_pane_g1_cp2

0x38ff,	// (0x00024c0c) bg_passive_tab_pane_g2_cp2

0xc136,	// (0x0002d443) bg_passive_tab_pane_g3_cp2

0xc13f,	// (0x0002d44c) bg_active_tab_pane_g1_cp3

0x38ff,	// (0x00024c0c) bg_active_tab_pane_g2_cp3

0xc148,	// (0x0002d455) bg_active_tab_pane_g3_cp3

0xc13f,	// (0x0002d44c) bg_passive_tab_pane_g1_cp3

0x38ff,	// (0x00024c0c) bg_passive_tab_pane_g2_cp3

0xc148,	// (0x0002d455) bg_passive_tab_pane_g3_cp3

0xc151,	// (0x0002d45e) bg_active_tab_pane_g1_cp4

0x38ff,	// (0x00024c0c) bg_active_tab_pane_g2_cp4

0xc15a,	// (0x0002d467) bg_active_tab_pane_g3_cp4

0xc151,	// (0x0002d45e) bg_passive_tab_pane_g1_cp4

0x38ff,	// (0x00024c0c) bg_passive_tab_pane_g2_cp4

0xc15a,	// (0x0002d467) bg_passive_tab_pane_g3_cp4

0x3989,	// (0x00024c96) bg_active_tab_pane_g1_cp5

0x38ff,	// (0x00024c0c) bg_active_tab_pane_g2_cp5

0x3992,	// (0x00024c9f) bg_active_tab_pane_g3_cp5

0x3989,	// (0x00024c96) bg_passive_tab_pane_g1_cp5

0x38ff,	// (0x00024c0c) bg_passive_tab_pane_g2_cp5

0x3992,	// (0x00024c9f) bg_passive_tab_pane_g3_cp5

0x31e2,	// (0x000244ef) list_set_graphic_pane_ParamLimits

0x31e2,	// (0x000244ef) list_set_graphic_pane

0xe805,	// (0x0002fb12) bg_set_opt_pane_cp4

0xc163,	// (0x0002d470) list_set_graphic_pane_g1_ParamLimits

0xc163,	// (0x0002d470) list_set_graphic_pane_g1

0xc16f,	// (0x0002d47c) list_set_graphic_pane_g2_ParamLimits

0xc16f,	// (0x0002d47c) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x00030a73) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x00030a73) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x00030de6) volume_small_pane_cp_g

0x39e0,	// (0x00024ced) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x39e0,	// (0x00024ced) list_double2_large_graphic_pane_g1_cp2

0x39ee,	// (0x00024cfb) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x39ee,	// (0x00024cfb) list_double2_large_graphic_pane_g2_cp2

0x39ff,	// (0x00024d0c) list_double2_large_graphic_pane_g3_cp2

0x3a07,	// (0x00024d14) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3a07,	// (0x00024d14) list_double2_large_graphic_pane_t1_cp2

0x3a1d,	// (0x00024d2a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3a1d,	// (0x00024d2a) list_double2_large_graphic_pane_t2_cp2

0x5c9e,	// (0x00026fab) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5c9e,	// (0x00026fab) list_double_large_graphic_pane_g1_cp2

0x5cb1,	// (0x00026fbe) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5cb1,	// (0x00026fbe) list_double_large_graphic_pane_g2_cp2

0x3b93,	// (0x00024ea0) list_double_large_graphic_pane_g3_cp2

0x5cc2,	// (0x00026fcf) list_double_large_graphic_pane_g4_cp

0x5cca,	// (0x00026fd7) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5cca,	// (0x00026fd7) list_double_large_graphic_pane_t1_cp2

0x5ce1,	// (0x00026fee) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5ce1,	// (0x00026fee) list_double_large_graphic_pane_t2_cp2

0x3a83,	// (0x00024d90) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3a83,	// (0x00024d90) list_double2_graphic_pane_g1_cp2

0x3a91,	// (0x00024d9e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3a91,	// (0x00024d9e) list_double2_graphic_pane_g2_cp2

0x3aa2,	// (0x00024daf) list_double2_graphic_pane_g3_cp2

0x3aac,	// (0x00024db9) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3aac,	// (0x00024db9) list_double2_graphic_pane_t1_cp2

0x3ac2,	// (0x00024dcf) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3ac2,	// (0x00024dcf) list_double2_graphic_pane_t2_cp2

0x3ad4,	// (0x00024de1) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3ad4,	// (0x00024de1) list_single_number_heading_pane_g1_cp2

0x3ae0,	// (0x00024ded) list_single_number_heading_pane_g2_cp2

0x3ae8,	// (0x00024df5) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3ae8,	// (0x00024df5) list_single_number_heading_pane_t1_cp2

0x3afe,	// (0x00024e0b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3afe,	// (0x00024e0b) list_single_number_heading_pane_t2_cp2

0x3b12,	// (0x00024e1f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3b12,	// (0x00024e1f) list_single_number_heading_pane_t3_cp2

0x3ad4,	// (0x00024de1) list_single_heading_pane_g1_cp2_ParamLimits

0x3ad4,	// (0x00024de1) list_single_heading_pane_g1_cp2

0x3ae0,	// (0x00024ded) list_single_heading_pane_g2_cp2

0x3ae8,	// (0x00024df5) list_single_heading_pane_t1_cp2_ParamLimits

0x3ae8,	// (0x00024df5) list_single_heading_pane_t1_cp2

0x5a98,	// (0x00026da5) list_single_heading_pane_t2_cp2_ParamLimits

0x5a98,	// (0x00026da5) list_single_heading_pane_t2_cp2

0x59da,	// (0x00026ce7) list_double_graphic_pane_g1_cp2_ParamLimits

0x59da,	// (0x00026ce7) list_double_graphic_pane_g1_cp2

0x59e6,	// (0x00026cf3) list_double_graphic_pane_g2_cp2_ParamLimits

0x59e6,	// (0x00026cf3) list_double_graphic_pane_g2_cp2

0x59f5,	// (0x00026d02) list_double_graphic_pane_g3_cp2

0x59fd,	// (0x00026d0a) list_double_graphic_pane_t1_cp2_ParamLimits

0x59fd,	// (0x00026d0a) list_double_graphic_pane_t1_cp2

0x5a13,	// (0x00026d20) list_double_graphic_pane_t2_cp2_ParamLimits

0x5a13,	// (0x00026d20) list_double_graphic_pane_t2_cp2

0x3b87,	// (0x00024e94) list_double_number_pane_g1_cp2_ParamLimits

0x3b87,	// (0x00024e94) list_double_number_pane_g1_cp2

0x3b93,	// (0x00024ea0) list_double_number_pane_g2_cp2

0x599e,	// (0x00026cab) list_double_number_pane_t1_cp2_ParamLimits

0x599e,	// (0x00026cab) list_double_number_pane_t1_cp2

0x59b2,	// (0x00026cbf) list_double_number_pane_t2_cp2_ParamLimits

0x59b2,	// (0x00026cbf) list_double_number_pane_t2_cp2

0x59c8,	// (0x00026cd5) list_double_number_pane_t3_cp2_ParamLimits

0x59c8,	// (0x00026cd5) list_double_number_pane_t3_cp2

0x5887,	// (0x00026b94) list_single_graphic_pane_g1_cp2_ParamLimits

0x5887,	// (0x00026b94) list_single_graphic_pane_g1_cp2

0x3bed,	// (0x00024efa) list_single_graphic_pane_g2_cp2_ParamLimits

0x3bed,	// (0x00024efa) list_single_graphic_pane_g2_cp2

0x3bf9,	// (0x00024f06) list_single_graphic_pane_g3_cp2

0x585d,	// (0x00026b6a) list_single_graphic_pane_t1_cp2_ParamLimits

0x585d,	// (0x00026b6a) list_single_graphic_pane_t1_cp2

0x3bed,	// (0x00024efa) list_single_number_pane_g1_cp2_ParamLimits

0x3bed,	// (0x00024efa) list_single_number_pane_g1_cp2

0x3bf9,	// (0x00024f06) list_single_number_pane_g2_cp2

0x585d,	// (0x00026b6a) list_single_number_pane_t1_cp2_ParamLimits

0x585d,	// (0x00026b6a) list_single_number_pane_t1_cp2

0x5873,	// (0x00026b80) list_single_number_pane_t2_cp2_ParamLimits

0x5873,	// (0x00026b80) list_single_number_pane_t2_cp2

0x39ee,	// (0x00024cfb) list_double2_pane_g1_cp2_ParamLimits

0x39ee,	// (0x00024cfb) list_double2_pane_g1_cp2

0x39ff,	// (0x00024d0c) list_double2_pane_g2_cp2

0x3b5f,	// (0x00024e6c) list_double2_pane_t1_cp2_ParamLimits

0x3b5f,	// (0x00024e6c) list_double2_pane_t1_cp2

0x3b75,	// (0x00024e82) list_double2_pane_t2_cp2_ParamLimits

0x3b75,	// (0x00024e82) list_double2_pane_t2_cp2

0x3b87,	// (0x00024e94) list_double_pane_g1_cp2_ParamLimits

0x3b87,	// (0x00024e94) list_double_pane_g1_cp2

0x3b93,	// (0x00024ea0) list_double_pane_g2_cp2

0x3b9b,	// (0x00024ea8) list_double_pane_t1_cp2_ParamLimits

0x3b9b,	// (0x00024ea8) list_double_pane_t1_cp2

0x3bb1,	// (0x00024ebe) list_double_pane_t2_cp2_ParamLimits

0x3bb1,	// (0x00024ebe) list_double_pane_t2_cp2

0x3bdd,	// (0x00024eea) list_single_pane_cp2_g3

0x3bed,	// (0x00024efa) list_single_pane_g1_cp2_ParamLimits

0x3bed,	// (0x00024efa) list_single_pane_g1_cp2

0x3bf9,	// (0x00024f06) list_single_pane_g2_cp2

0x3c01,	// (0x00024f0e) list_single_pane_t1_cp2_ParamLimits

0x3c01,	// (0x00024f0e) list_single_pane_t1_cp2

0x3c19,	// (0x00024f26) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3c19,	// (0x00024f26) list_single_large_graphic_pane_g1_cp2

0x3c27,	// (0x00024f34) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3c27,	// (0x00024f34) list_single_large_graphic_pane_g2_cp2

0x3c33,	// (0x00024f40) list_single_large_graphic_pane_g3_cp2

0x3c3b,	// (0x00024f48) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3c3b,	// (0x00024f48) list_single_large_graphic_pane_g4_cp1

0x3c55,	// (0x00024f62) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3c55,	// (0x00024f62) list_single_large_graphic_pane_t1_cp2

0x5827,	// (0x00026b34) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5827,	// (0x00026b34) list_single_graphic_heading_pane_g1_cp2

0x57f4,	// (0x00026b01) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x57f4,	// (0x00026b01) list_single_graphic_heading_pane_g4_cp2

0x3bf9,	// (0x00024f06) list_single_graphic_heading_pane_g5_cp2

0x5833,	// (0x00026b40) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5833,	// (0x00026b40) list_single_graphic_heading_pane_t1_cp2

0x5849,	// (0x00026b56) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5849,	// (0x00026b56) list_single_graphic_heading_pane_t2_cp2

0x57e8,	// (0x00026af5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x57e8,	// (0x00026af5) list_single_2graphic_pane_g1_cp2

0x57f4,	// (0x00026b01) list_single_2graphic_pane_g2_cp2_ParamLimits

0x57f4,	// (0x00026b01) list_single_2graphic_pane_g2_cp2

0x3bf9,	// (0x00024f06) list_single_2graphic_pane_g3_cp2

0x5805,	// (0x00026b12) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5805,	// (0x00026b12) list_single_2graphic_pane_g4_cp2

0x5811,	// (0x00026b1e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5811,	// (0x00026b1e) list_single_2graphic_pane_t1_cp2

0xe7fb,	// (0x0002fb08) list_highlight_pane_g10_cp1

0x53c0,	// (0x000266cd) list_highlight_pane_g1_cp1

0x53c8,	// (0x000266d5) list_highlight_pane_g2_cp1

0x53d0,	// (0x000266dd) list_highlight_pane_g3_cp1

0x53d8,	// (0x000266e5) list_highlight_pane_g4_cp1

0x53e0,	// (0x000266ed) list_highlight_pane_g5_cp1

0x53e8,	// (0x000266f5) list_highlight_pane_g6_cp1

0x53f0,	// (0x000266fd) list_highlight_pane_g7_cp1

0x53f8,	// (0x00026705) list_highlight_pane_g8_cp1

0x5400,	// (0x0002670d) list_highlight_pane_g9_cp1

0xd60a,	// (0x0002e917) form_field_slider_pane_t3

0xd618,	// (0x0002e925) form_field_slider_pane_t4

0x52fc,	// (0x00026609) slider_form_pane_ParamLimits

0x52fc,	// (0x00026609) slider_form_pane

0xe805,	// (0x0002fb12) control_abbreviations

0xe805,	// (0x0002fb12) control_conventions

0xe805,	// (0x0002fb12) control_definitions

0xe805,	// (0x0002fb12) format_table_attribute

0x5aee,	// (0x00026dfb) bg_popup_preview_window_pane_g9

0xe805,	// (0x0002fb12) format_table_data2

0xe805,	// (0x0002fb12) format_table_data3

0xe805,	// (0x0002fb12) format_table_data_example

0x0008,

0xe805,	// (0x0002fb12) intro_purpose

0xf8f6,	// (0x00030c03) bg_popup_preview_window_pane_g

0xe805,	// (0x0002fb12) texts_category

0xe805,	// (0x0002fb12) texts_graphics

0x3c6b,	// (0x00024f78) text_digital

0x3c7a,	// (0x00024f87) text_primary

0x3c89,	// (0x00024f96) text_primary_small

0x3c98,	// (0x00024fa5) text_secondary

0x3ca7,	// (0x00024fb4) text_title

0x628a,	// (0x00027597) bg_passive_tab_pane_g1_cp3_srt

0x38ff,	// (0x00024c0c) bg_passive_tab_pane_g2_cp3_srt

0x6293,	// (0x000275a0) bg_passive_tab_pane_g3_cp3_srt

0x144d,	// (0x0002275a) bg_active_tab_pane_cp3_srt_ParamLimits

0x144d,	// (0x0002275a) bg_active_tab_pane_cp3_srt

0x629c,	// (0x000275a9) tabs_4_active_pane_srt_g1

0xda1d,	// (0x0002ed2a) tabs_4_active_pane_srt_t1_ParamLimits

0xda1d,	// (0x0002ed2a) tabs_4_active_pane_srt_t1

0x628a,	// (0x00027597) bg_active_tab_pane_g1_cp3_copy1

0x38ff,	// (0x00024c0c) bg_active_tab_pane_g2_cp3_copy1

0x6293,	// (0x000275a0) bg_active_tab_pane_g3_cp3_copy1

0x1141,	// (0x0002244e) tabs_2_long_active_pane_srt_ParamLimits

0x1141,	// (0x0002244e) tabs_2_long_active_pane_srt

0x1141,	// (0x0002244e) tabs_2_long_passive_pane_srt_ParamLimits

0x1141,	// (0x0002244e) tabs_2_long_passive_pane_srt

0x403c,	// (0x00025349) bg_passive_tab_pane_cp4_srt_ParamLimits

0x403c,	// (0x00025349) bg_passive_tab_pane_cp4_srt

0x5f3e,	// (0x0002724b) bg_passive_tab_pane_g1_cp4_srt

0x38ff,	// (0x00024c0c) bg_passive_tab_pane_g2_cp4_srt

0x5f47,	// (0x00027254) bg_passive_tab_pane_g3_cp4_srt

0x1141,	// (0x0002244e) bg_active_tab_pane_cp4_srt_ParamLimits

0x1141,	// (0x0002244e) bg_active_tab_pane_cp4_srt

0xd813,	// (0x0002eb20) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd813,	// (0x0002eb20) tabs_2_long_active_pane_srt_t1

0x5f3e,	// (0x0002724b) bg_active_tab_pane_g1_cp4_srt

0x38ff,	// (0x00024c0c) bg_active_tab_pane_g2_cp4_srt

0x5f47,	// (0x00027254) bg_active_tab_pane_g3_cp4_srt

0x144d,	// (0x0002275a) tabs_3_long_active_pane_srt_ParamLimits

0x144d,	// (0x0002275a) tabs_3_long_active_pane_srt

0x144d,	// (0x0002275a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x144d,	// (0x0002275a) tabs_3_long_passive_pane_cp_srt

0x144d,	// (0x0002275a) tabs_3_long_passive_pane_srt_ParamLimits

0x144d,	// (0x0002275a) tabs_3_long_passive_pane_srt

0x403c,	// (0x00025349) bg_passive_tab_pane_cp5_srt_ParamLimits

0x403c,	// (0x00025349) bg_passive_tab_pane_cp5_srt

0x3989,	// (0x00024c96) bg_passive_tab_pane_g1_cp5_srt

0x38ff,	// (0x00024c0c) bg_passive_tab_pane_g2_cp5_srt

0x3992,	// (0x00024c9f) bg_passive_tab_pane_g3_cp5_srt

0x1141,	// (0x0002244e) bg_active_tab_pane_cp5_srt_ParamLimits

0x1141,	// (0x0002244e) bg_active_tab_pane_cp5_srt

0xd7fd,	// (0x0002eb0a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd7fd,	// (0x0002eb0a) tabs_3_long_active_pane_srt_t1

0x3989,	// (0x00024c96) bg_active_tab_pane_g1_cp5_srt

0x38ff,	// (0x00024c0c) bg_active_tab_pane_g2_cp5_srt

0x3992,	// (0x00024c9f) bg_active_tab_pane_g3_cp5_srt

0x5f1e,	// (0x0002722b) navi_text_pane_srt_t1

0x5f16,	// (0x00027223) navi_icon_pane_srt_g1

0x3e7e,	// (0x0002518b) midp_editing_number_pane_srt

0x3cb6,	// (0x00024fc3) midp_ticker_pane_srt

0x3e86,	// (0x00025193) midp_ticker_pane_srt_g1

0x3e8e,	// (0x0002519b) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x00030a92) midp_ticker_pane_srt_g

0x3e96,	// (0x000251a3) midp_ticker_pane_srt_t1

0x5f07,	// (0x00027214) midp_editing_number_pane_t1_copy1

0xc193,	// (0x0002d4a0) listscroll_midp_pane

0xc193,	// (0x0002d4a0) midp_form_pane

0x3d2c,	// (0x00025039) midp_info_popup_window_ParamLimits

0x3d2c,	// (0x00025039) midp_info_popup_window

0x3110,	// (0x0002441d) bg_popup_sub_pane_cp50_ParamLimits

0x3110,	// (0x0002441d) bg_popup_sub_pane_cp50

0x4ff6,	// (0x00026303) listscroll_midp_info_pane_ParamLimits

0x4ff6,	// (0x00026303) listscroll_midp_info_pane

0x4fde,	// (0x000262eb) listscroll_form_midp_pane_ParamLimits

0x4fde,	// (0x000262eb) listscroll_form_midp_pane

0x4fea,	// (0x000262f7) scroll_bar_cp050

0xd5fe,	// (0x0002e90b) list_midp_pane

0x6d14,	// (0x00028021) signal_pane_g2_cp

0x4ef8,	// (0x00026205) listscroll_midp_info_pane_t1_ParamLimits

0x4ef8,	// (0x00026205) listscroll_midp_info_pane_t1

0x4f10,	// (0x0002621d) listscroll_midp_info_pane_t2_ParamLimits

0x4f10,	// (0x0002621d) listscroll_midp_info_pane_t2

0x4f4e,	// (0x0002625b) listscroll_midp_info_pane_t3_ParamLimits

0x4f4e,	// (0x0002625b) listscroll_midp_info_pane_t3

0x4f88,	// (0x00026295) listscroll_midp_info_pane_t4_ParamLimits

0x4f88,	// (0x00026295) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x00030b3e) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x00030b3e) listscroll_midp_info_pane_t

0x31da,	// (0x000244e7) scroll_pane_cp21

0x4e92,	// (0x0002619f) form_midp_field_choice_group_pane

0x4e9b,	// (0x000261a8) form_midp_field_text_pane

0x4ede,	// (0x000261eb) form_midp_field_time_pane

0x4ee6,	// (0x000261f3) form_midp_gauge_slider_pane

0x4eef,	// (0x000261fc) form_midp_gauge_wait_pane

0xe805,	// (0x0002fb12) form_midp_image_pane

0xb6d6,	// (0x0002c9e3) list_single_midp_pane_ParamLimits

0xb6d6,	// (0x0002c9e3) list_single_midp_pane

0xd5d6,	// (0x0002e8e3) form_midp_field_text_pane_t1

0x4c6a,	// (0x00025f77) input_focus_pane_cp050

0x4e81,	// (0x0002618e) list_midp_form_text_pane

0x4e25,	// (0x00026132) form_midp_field_choice_group_pane_t1

0x4e33,	// (0x00026140) input_focus_pane_cp051

0x4e47,	// (0x00026154) list_midp_choice_pane

0xe805,	// (0x0002fb12) status_idle_pane

0x4e09,	// (0x00026116) form_midp_field_time_pane_t1

0xe7fb,	// (0x0002fb08) wait_anim_pane_g2_copy1

0x4e17,	// (0x00026124) form_midp_field_time_pane_t2

0x0001,

0x3ddc,	// (0x000250e9) aid_navinavi_width_2_pane

0xf82c,	// (0x00030b39) form_midp_field_time_pane_t

0xe805,	// (0x0002fb12) input_focus_pane_cp052

0xe805,	// (0x0002fb12) bg_input_focus_pane_cp040

0x4dc9,	// (0x000260d6) form_midp_gauge_slider_pane_t1

0x4dd7,	// (0x000260e4) form_midp_gauge_slider_pane_t2

0xd5ba,	// (0x0002e8c7) form_midp_gauge_slider_pane_t3

0xd5c8,	// (0x0002e8d5) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x00030b30) form_midp_gauge_slider_pane_t

0x4e01,	// (0x0002610e) form_midp_slider_pane

0x1141,	// (0x0002244e) bg_input_focus_pane_cp041_ParamLimits

0x1141,	// (0x0002244e) bg_input_focus_pane_cp041

0x4d96,	// (0x000260a3) form_midp_gauge_wait_pane_t1_ParamLimits

0x4d96,	// (0x000260a3) form_midp_gauge_wait_pane_t1

0x4da8,	// (0x000260b5) form_midp_gauge_wait_pane_t2_ParamLimits

0x4da8,	// (0x000260b5) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x00030b2b) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x00030b2b) form_midp_gauge_wait_pane_t

0x4dba,	// (0x000260c7) form_midp_wait_pane_ParamLimits

0x4dba,	// (0x000260c7) form_midp_wait_pane

0x4d5e,	// (0x0002606b) form_midp_image_pane_g1

0x4d67,	// (0x00026074) form_midp_image_pane_t1

0x4d76,	// (0x00026083) form_midp_image_pane_t2

0x4d85,	// (0x00026092) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x00030b24) form_midp_image_pane_t

0x4d55,	// (0x00026062) list_single_midp_pane_g1

0x0545,	// (0x00021852) list_single_midp_pane_t1

0xd5a3,	// (0x0002e8b0) list_midp_form_item_pane_ParamLimits

0xd5a3,	// (0x0002e8b0) list_midp_form_item_pane

0x3d84,	// (0x00025091) list_midp_form_item_pane_t1

0x3d93,	// (0x000250a0) midp_ticker_pane_g1

0x3d9f,	// (0x000250ac) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x00030a78) midp_ticker_pane_g

0xc23b,	// (0x0002d548) midp_ticker_pane_t1

0xd9a2,	// (0x0002ecaf) midp_editing_number_pane_t1

0x6164,	// (0x00027471) midp_editing_number_pane

0x6173,	// (0x00027480) midp_ticker_pane

0x5ef7,	// (0x00027204) ai_message_heading_pane

0xe805,	// (0x0002fb12) bg_popup_window_pane_cp14

0x5eff,	// (0x0002720c) listscroll_ai_message_pane

0x5e7d,	// (0x0002718a) ai_message_heading_pane_g1_ParamLimits

0x5e7d,	// (0x0002718a) ai_message_heading_pane_g1

0x5e89,	// (0x00027196) ai_message_heading_pane_g2_ParamLimits

0x5e89,	// (0x00027196) ai_message_heading_pane_g2

0x5e97,	// (0x000271a4) ai_message_heading_pane_g3_ParamLimits

0x5e97,	// (0x000271a4) ai_message_heading_pane_g3

0x5ea3,	// (0x000271b0) ai_message_heading_pane_g4_ParamLimits

0x5ea3,	// (0x000271b0) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x00030c65) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x00030c65) ai_message_heading_pane_g

0x5eaf,	// (0x000271bc) ai_message_heading_pane_t1_ParamLimits

0x5eaf,	// (0x000271bc) ai_message_heading_pane_t1

0x5ec9,	// (0x000271d6) ai_message_heading_pane_t2_ParamLimits

0x5ec9,	// (0x000271d6) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x00030c6e) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x00030c6e) ai_message_heading_pane_t

0x5edd,	// (0x000271ea) bg_popup_heading_pane_cp1_ParamLimits

0x5edd,	// (0x000271ea) bg_popup_heading_pane_cp1

0x5e6b,	// (0x00027178) list_ai_message_pane_ParamLimits

0x5e6b,	// (0x00027178) list_ai_message_pane

0x31da,	// (0x000244e7) scroll_pane_cp10

0x5e07,	// (0x00027114) list_ai_message_pane_g1

0x5e0f,	// (0x0002711c) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x00030c42) list_ai_message_pane_g

0x5e17,	// (0x00027124) list_ai_message_pane_t1_ParamLimits

0x5e17,	// (0x00027124) list_ai_message_pane_t1

0x5e2c,	// (0x00027139) list_ai_message_pane_t2_ParamLimits

0x5e2c,	// (0x00027139) list_ai_message_pane_t2

0x5e41,	// (0x0002714e) list_ai_message_pane_t3_ParamLimits

0x5e41,	// (0x0002714e) list_ai_message_pane_t3

0x5e56,	// (0x00027163) list_ai_message_pane_t4_ParamLimits

0x5e56,	// (0x00027163) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x00030c47) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x00030c47) list_ai_message_pane_t

0xd7e3,	// (0x0002eaf0) cell_ai_soft_ind_pane_ParamLimits

0xd7e3,	// (0x0002eaf0) cell_ai_soft_ind_pane

0x3dbd,	// (0x000250ca) cell_ai_soft_ind_pane_g1_ParamLimits

0x3dbd,	// (0x000250ca) cell_ai_soft_ind_pane_g1

0xe805,	// (0x0002fb12) grid_highlight_cp1

0x3dca,	// (0x000250d7) text_secondary_cp56_ParamLimits

0x3dca,	// (0x000250d7) text_secondary_cp56

0x5dc5,	// (0x000270d2) example_general_pane_ParamLimits

0x5dc5,	// (0x000270d2) example_general_pane

0x5dd1,	// (0x000270de) example_parent_pane_g1_ParamLimits

0x5dd1,	// (0x000270de) example_parent_pane_g1

0x5ddd,	// (0x000270ea) example_parent_pane_t1_ParamLimits

0x5ddd,	// (0x000270ea) example_parent_pane_t1

0xc7db,	// (0x0002dae8) popup_preview_text_window_ParamLimits

0xc7db,	// (0x0002dae8) popup_preview_text_window

0x3be5,	// (0x00024ef2) list_single_pane_cp2_g4

0x1503,	// (0x00022810) bg_popup_preview_window_pane_ParamLimits

0x1503,	// (0x00022810) bg_popup_preview_window_pane

0x5af8,	// (0x00026e05) popup_preview_text_window_t1_ParamLimits

0x5af8,	// (0x00026e05) popup_preview_text_window_t1

0x5b16,	// (0x00026e23) popup_preview_text_window_t2_ParamLimits

0x5b16,	// (0x00026e23) popup_preview_text_window_t2

0x5b5f,	// (0x00026e6c) popup_preview_text_window_t3_ParamLimits

0x5b5f,	// (0x00026e6c) popup_preview_text_window_t3

0x5ba4,	// (0x00026eb1) popup_preview_text_window_t4_ParamLimits

0x5ba4,	// (0x00026eb1) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x00030c16) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x00030c16) popup_preview_text_window_t

0x5c22,	// (0x00026f2f) scroll_pane_cp11

0x4b78,	// (0x00025e85) bg_popup_preview_window_pane_g1

0x5aac,	// (0x00026db9) bg_popup_preview_window_pane_g2

0x5ab6,	// (0x00026dc3) bg_popup_preview_window_pane_g3

0x5ac0,	// (0x00026dcd) bg_popup_preview_window_pane_g4

0x5aca,	// (0x00026dd7) bg_popup_preview_window_pane_g5

0x5ad4,	// (0x00026de1) bg_popup_preview_window_pane_g6

0x5adc,	// (0x00026de9) bg_popup_preview_window_pane_g7

0x5ae4,	// (0x00026df1) bg_popup_preview_window_pane_g8

0x0c8c,	// (0x00021f99) aid_popup_width_pane

0xc74b,	// (0x0002da58) popup_midp_note_alarm_window_ParamLimits

0xc74b,	// (0x0002da58) popup_midp_note_alarm_window

0x304c,	// (0x00024359) data_form_pane_ParamLimits

0xb532,	// (0x0002c83f) form_field_data_pane_g1

0xb53c,	// (0x0002c849) form_field_data_pane_t1_ParamLimits

0x3058,	// (0x00024365) input_focus_pane_ParamLimits

0x3066,	// (0x00024373) data_form_wide_pane_ParamLimits

0x025d,	// (0x0002156a) form_field_data_wide_pane_g1

0x0269,	// (0x00021576) form_field_data_wide_pane_t1_ParamLimits

0x17c9,	// (0x00022ad6) input_focus_pane_cp6_ParamLimits

0xbf24,	// (0x0002d231) input_popup_find_pane_g1_ParamLimits

0xbf24,	// (0x0002d231) input_popup_find_pane_g1

0x1aff,	// (0x00022e0c) aid_navi_side_left_pane

0x1b14,	// (0x00022e21) aid_navi_side_right_pane

0x54bb,	// (0x000267c8) bg_popup_window_pane_cp30_ParamLimits

0x54bb,	// (0x000267c8) bg_popup_window_pane_cp30

0x5535,	// (0x00026842) popup_midp_note_alarm_window_g1_ParamLimits

0x5535,	// (0x00026842) popup_midp_note_alarm_window_g1

0x5565,	// (0x00026872) popup_midp_note_alarm_window_t1_ParamLimits

0x5565,	// (0x00026872) popup_midp_note_alarm_window_t1

0x5606,	// (0x00026913) popup_midp_note_alarm_window_t2_ParamLimits

0x5606,	// (0x00026913) popup_midp_note_alarm_window_t2

0x56b4,	// (0x000269c1) popup_midp_note_alarm_window_t3_ParamLimits

0x56b4,	// (0x000269c1) popup_midp_note_alarm_window_t3

0x56e6,	// (0x000269f3) popup_midp_note_alarm_window_t4_ParamLimits

0x56e6,	// (0x000269f3) popup_midp_note_alarm_window_t4

0x570c,	// (0x00026a19) popup_midp_note_alarm_window_t5_ParamLimits

0x570c,	// (0x00026a19) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x00030bb3) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x00030bb3) popup_midp_note_alarm_window_t

0x57b8,	// (0x00026ac5) wait_bar_pane_cp1_ParamLimits

0x57b8,	// (0x00026ac5) wait_bar_pane_cp1

0xe805,	// (0x0002fb12) wait_anim_pane_copy1

0xe805,	// (0x0002fb12) wait_border_pane_copy1

0x51a0,	// (0x000264ad) wait_border_pane_g1_copy1

0x0283,	// (0x00021590) form_field_popup_pane_g1

0xb556,	// (0x0002c863) form_field_popup_pane_t1_ParamLimits

0x3058,	// (0x00024365) input_focus_pane_cp7_ParamLimits

0x3092,	// (0x0002439f) list_form_pane_ParamLimits

0x02a5,	// (0x000215b2) form_field_popup_wide_pane_g1

0x02ad,	// (0x000215ba) form_field_popup_wide_pane_t1_ParamLimits

0x3058,	// (0x00024365) input_focus_pane_cp8_ParamLimits

0x309e,	// (0x000243ab) list_form_wide_pane_ParamLimits

0x6317,	// (0x00027624) aid_size_cell_graphic_pane

0xb5d5,	// (0x0002c8e2) data_form_pane_t1_ParamLimits

0xb705,	// (0x0002ca12) data_form_wide_pane_t1_ParamLimits

0xd233,	// (0x0002e540) bg_status_flat_pane

0xbb44,	// (0x0002ce51) title_pane_t1_ParamLimits

0x1109,	// (0x00022416) title_pane_t2_ParamLimits

0x112f,	// (0x0002243c) title_pane_t3_ParamLimits

0xf573,	// (0x00030880) title_pane_t_ParamLimits

0xc034,	// (0x0002d341) level_1_signal_ParamLimits

0xc046,	// (0x0002d353) level_2_signal_ParamLimits

0xc059,	// (0x0002d366) level_3_signal_ParamLimits

0xc06c,	// (0x0002d379) level_4_signal_ParamLimits

0xc07f,	// (0x0002d38c) level_5_signal_ParamLimits

0xc092,	// (0x0002d39f) level_6_signal_ParamLimits

0xc0a5,	// (0x0002d3b2) level_7_signal_ParamLimits

0xc034,	// (0x0002d341) level_1_battery_ParamLimits

0xc046,	// (0x0002d353) level_2_battery_ParamLimits

0xc059,	// (0x0002d366) level_3_battery_ParamLimits

0xc06c,	// (0x0002d379) level_4_battery_ParamLimits

0xc07f,	// (0x0002d38c) level_5_battery_ParamLimits

0xc092,	// (0x0002d39f) level_6_battery_ParamLimits

0xc0a5,	// (0x0002d3b2) level_7_battery_ParamLimits

0x53c0,	// (0x000266cd) bg_status_flat_pane_g1

0x53c8,	// (0x000266d5) bg_status_flat_pane_g2

0x53d0,	// (0x000266dd) bg_status_flat_pane_g3

0x53d8,	// (0x000266e5) bg_status_flat_pane_g4

0x53e0,	// (0x000266ed) bg_status_flat_pane_g5

0x53e8,	// (0x000266f5) bg_status_flat_pane_g6

0x53f0,	// (0x000266fd) bg_status_flat_pane_g7

0xbbd8,	// (0x0002cee5) tabs_3_active_pane_t1_ParamLimits

0xbbd8,	// (0x0002cee5) tabs_3_passive_pane_t1_ParamLimits

0xbbf2,	// (0x0002ceff) tabs_4_active_pane_t1_ParamLimits

0xbbf2,	// (0x0002ceff) tabs_4_1_passive_pane_t1_ParamLimits

0xbf3a,	// (0x0002d247) tabs_2_active_pane_t1_ParamLimits

0xbf3a,	// (0x0002d247) tabs_2_passive_pane_t1_ParamLimits

0x1141,	// (0x0002244e) bg_active_tab_pane_cp4_ParamLimits

0xbf4c,	// (0x0002d259) tabs_2_long_active_pane_t1_ParamLimits

0x403c,	// (0x00025349) bg_passive_tab_pane_cp4_ParamLimits

0x2055,	// (0x00023362) list_single_midp_graphic_pane_t1_ParamLimits

0x1141,	// (0x0002244e) bg_active_tab_pane_cp5_ParamLimits

0xbf5f,	// (0x0002d26c) tabs_3_long_active_pane_t1_ParamLimits

0x403c,	// (0x00025349) bg_passive_tab_pane_cp5_ParamLimits

0x2055,	// (0x00023362) list_single_midp_graphic_pane_t1

0xd233,	// (0x0002e540) bg_status_flat_pane_ParamLimits

0x47f1,	// (0x00025afe) indicator_pane_cp2_ParamLimits

0x47f1,	// (0x00025afe) indicator_pane_cp2

0xd3c8,	// (0x0002e6d5) navi_pane_srt_ParamLimits

0xd3c8,	// (0x0002e6d5) navi_pane_srt

0x4957,	// (0x00025c64) popup_clock_digital_analogue_window_cp1

0x12b1,	// (0x000225be) indicator_pane_t1

0x3cb6,	// (0x00024fc3) copy_highlight_pane

0x3cb6,	// (0x00024fc3) cursor_graphics_pane

0x3cb6,	// (0x00024fc3) graphic_within_text_pane

0x3cb6,	// (0x00024fc3) link_highlight_pane

0x5be5,	// (0x00026ef2) popup_preview_text_window_t5_ParamLimits

0x5be5,	// (0x00026ef2) popup_preview_text_window_t5

0x3de6,	// (0x000250f3) cursor_digital_pane

0x3de6,	// (0x000250f3) cursor_primary_pane

0x3df7,	// (0x00025104) cursor_primary_small_pane

0x3dff,	// (0x0002510c) cursor_secondary_pane

0x3e07,	// (0x00025114) cursor_title_pane

0x3de6,	// (0x000250f3) link_highlight_digital_pane

0x3dee,	// (0x000250fb) link_highlight_primary_pane

0x3df7,	// (0x00025104) link_highlight_primary_small_pane

0x3dff,	// (0x0002510c) link_highlight_secondary_pane

0x3e07,	// (0x00025114) link_highlight_title_pane

0x3de6,	// (0x000250f3) copy_highlight_digital_pane

0x3de6,	// (0x000250f3) copy_highlight_primary_pane

0x3df7,	// (0x00025104) copy_highlight_primary_small_pane

0x3dff,	// (0x0002510c) copy_highlight_secondary_pane

0x3e07,	// (0x00025114) copy_highlight_title_pane

0x3dff,	// (0x0002510c) graphic_text_digital_pane

0x545e,	// (0x0002676b) graphic_text_primary_pane

0x5467,	// (0x00026774) graphic_text_primary_small_pane

0x3df7,	// (0x00025104) graphic_text_secondary_pane

0x3de6,	// (0x000250f3) graphic_text_title_pane

0xc24d,	// (0x0002d55a) cursor_primary_pane_g1

0x5450,	// (0x0002675d) cursor_text_primary_t1

0xd63a,	// (0x0002e947) cursor_primary_small_pane_g1

0x5442,	// (0x0002674f) cursor_text_primary_small_t1

0xd630,	// (0x0002e93d) cursor_primary_small_pane_g1_copy1

0x542a,	// (0x00026737) cursor_text_primary_small_t1_copy1

0x5408,	// (0x00026715) cursor_text_title_t1

0xd626,	// (0x0002e933) cursor_title_pane_g1

0xc24d,	// (0x0002d55a) cursor_digital_pane_g1

0x3e19,	// (0x00025126) cursor_text_digital_t1

0x3e27,	// (0x00025134) link_highlight_primary_pane_g1

0x53b1,	// (0x000266be) link_highlight_primary_pane_t1

0x3e27,	// (0x00025134) link_highlight_primary_small_pane_g1

0x3e2f,	// (0x0002513c) link_highlight_primary_small_pane_t1

0x3e3e,	// (0x0002514b) link_highlight_secondary_pane_g1

0x3e46,	// (0x00025153) link_highlight_secondary_pane_t1

0x5325,	// (0x00026632) link_highlight_title_pane_g1

0x532d,	// (0x0002663a) link_highlight_title_pane_t1

0x530e,	// (0x0002661b) link_highlight_digital_pane_g1

0x5316,	// (0x00026623) link_highlight_digital_pane_t1

0x51d6,	// (0x000264e3) copy_highlight_primary_pane_g1

0x51ed,	// (0x000264fa) copy_highlight_primary_pane_t1

0x51d6,	// (0x000264e3) copy_highlight_primary_small_pane_g1

0x51de,	// (0x000264eb) copy_highlight_primary_small_pane_t1

0x3e55,	// (0x00025162) copy_highlight_secondary_pane_g1

0x3e5d,	// (0x0002516a) copy_highlight_secondary_pane_t1

0x51bf,	// (0x000264cc) copy_highlight_title_pane_g1

0x51c7,	// (0x000264d4) copy_highlight_title_pane_t1

0x51d6,	// (0x000264e3) copy_highlight_digital_pane_g1

0x64e7,	// (0x000277f4) copy_highlight_digital_pane_t1

0x643b,	// (0x00027748) graphic_text_primary_pane_g1

0x64cb,	// (0x000277d8) graphic_text_primary_pane_t1

0x64d9,	// (0x000277e6) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x00030ce2) graphic_text_primary_pane_t

0x64a7,	// (0x000277b4) graphic_text_primary_small_pane_g1

0x64af,	// (0x000277bc) graphic_text_primary_small_pane_t1

0x64bd,	// (0x000277ca) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x00030cdd) graphic_text_primary_small_pane_t

0x6483,	// (0x00027790) graphic_text_secondary_pane_g1

0x648b,	// (0x00027798) graphic_text_secondary_pane_t1

0x6499,	// (0x000277a6) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x00030cd8) graphic_text_secondary_pane_t

0x645f,	// (0x0002776c) graphic_text_title_pane_g1

0x6467,	// (0x00027774) graphic_text_title_pane_t1

0x6475,	// (0x00027782) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x00030cd3) graphic_text_title_pane_t

0x643b,	// (0x00027748) graphic_text_digital_pane_g1

0x6443,	// (0x00027750) graphic_text_digital_pane_t1

0x6451,	// (0x0002775e) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x00030cce) graphic_text_digital_pane_t

0x1141,	// (0x0002244e) navi_icon_pane_srt_ParamLimits

0x1141,	// (0x0002244e) navi_icon_pane_srt

0xe805,	// (0x0002fb12) navi_midp_pane_srt

0xe805,	// (0x0002fb12) navi_navi_pane_srt

0x1141,	// (0x0002244e) navi_text_pane_srt_ParamLimits

0x1141,	// (0x0002244e) navi_text_pane_srt

0x6406,	// (0x00027713) navi_navi_icon_text_pane_srt

0x640e,	// (0x0002771b) navi_navi_pane_srt_g1_ParamLimits

0x640e,	// (0x0002771b) navi_navi_pane_srt_g1

0x6420,	// (0x0002772d) navi_navi_pane_srt_g2_ParamLimits

0x6420,	// (0x0002772d) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x00030cc9) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x00030cc9) navi_navi_pane_srt_g

0x6432,	// (0x0002773f) navi_navi_tabs_pane_srt

0x6406,	// (0x00027713) navi_navi_text_pane_srt

0x6406,	// (0x00027713) navi_navi_volume_pane_srt

0x63f7,	// (0x00027704) navi_navi_text_pane_srt_t1

0x23af,	// (0x000236bc) navi_navi_volume_pane_srt_g1

0x23b7,	// (0x000236c4) volume_small_pane_srt_ParamLimits

0x23b7,	// (0x000236c4) volume_small_pane_srt

0x1de6,	// (0x000230f3) volume_small_pane_srt_g1_ParamLimits

0x1de6,	// (0x000230f3) volume_small_pane_srt_g1

0x1df6,	// (0x00023103) volume_small_pane_srt_g2_ParamLimits

0x1df6,	// (0x00023103) volume_small_pane_srt_g2

0x1e07,	// (0x00023114) volume_small_pane_srt_g3_ParamLimits

0x1e07,	// (0x00023114) volume_small_pane_srt_g3

0x1e18,	// (0x00023125) volume_small_pane_srt_g4_ParamLimits

0x1e18,	// (0x00023125) volume_small_pane_srt_g4

0x1e29,	// (0x00023136) volume_small_pane_srt_g5_ParamLimits

0x1e29,	// (0x00023136) volume_small_pane_srt_g5

0x1e3a,	// (0x00023147) volume_small_pane_srt_g6_ParamLimits

0x1e3a,	// (0x00023147) volume_small_pane_srt_g6

0x1e4b,	// (0x00023158) volume_small_pane_srt_g7_ParamLimits

0x1e4b,	// (0x00023158) volume_small_pane_srt_g7

0x1e5c,	// (0x00023169) volume_small_pane_srt_g8_ParamLimits

0x1e5c,	// (0x00023169) volume_small_pane_srt_g8

0x1e6d,	// (0x0002317a) volume_small_pane_srt_g9_ParamLimits

0x1e6d,	// (0x0002317a) volume_small_pane_srt_g9

0x1e7e,	// (0x0002318b) volume_small_pane_srt_g10_ParamLimits

0x1e7e,	// (0x0002318b) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x00030a7d) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x00030a7d) volume_small_pane_srt_g

0x15b8,	// (0x000228c5) query_popup_data_pane_cp2

0x63dd,	// (0x000276ea) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x63dd,	// (0x000276ea) navi_navi_icon_text_pane_srt_t1

0x545e,	// (0x0002676b) navi_tabs_2_long_pane_srt

0x545e,	// (0x0002676b) navi_tabs_2_pane_srt

0x545e,	// (0x0002676b) navi_tabs_3_long_pane_srt

0x545e,	// (0x0002676b) navi_tabs_3_pane_srt

0x545e,	// (0x0002676b) navi_tabs_4_pane_srt

0x238f,	// (0x0002369c) tabs_2_active_pane_srt_ParamLimits

0x238f,	// (0x0002369c) tabs_2_active_pane_srt

0x239f,	// (0x000236ac) tabs_2_passive_pane_srt_ParamLimits

0x239f,	// (0x000236ac) tabs_2_passive_pane_srt

0x4c6a,	// (0x00025f77) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4c6a,	// (0x00025f77) bg_passive_tab_pane_cp1_srt

0x63a9,	// (0x000276b6) bg_passive_tab_pane_g1_cp1_srt

0x38ff,	// (0x00024c0c) bg_passive_tab_pane_g2_cp1_srt

0x63b2,	// (0x000276bf) bg_passive_tab_pane_g3_cp1_srt

0x144d,	// (0x0002275a) bg_active_tab_pane_cp1_srt_ParamLimits

0x144d,	// (0x0002275a) bg_active_tab_pane_cp1_srt

0x63bb,	// (0x000276c8) tabs_2_active_pane_srt_g1

0xda9d,	// (0x0002edaa) tabs_2_active_pane_srt_t1_ParamLimits

0xda9d,	// (0x0002edaa) tabs_2_active_pane_srt_t1

0x63a9,	// (0x000276b6) bg_active_tab_pane_g1_cp1_srt

0x38ff,	// (0x00024c0c) bg_active_tab_pane_g2_cp1_srt

0x63b2,	// (0x000276bf) bg_active_tab_pane_g3_cp1_srt

0x235c,	// (0x00023669) tabs_3_active_pane_srt_ParamLimits

0x235c,	// (0x00023669) tabs_3_active_pane_srt

0x236d,	// (0x0002367a) tabs_3_passive_pane_cp_srt_ParamLimits

0x236d,	// (0x0002367a) tabs_3_passive_pane_cp_srt

0x237e,	// (0x0002368b) tabs_3_passive_pane_srt_ParamLimits

0x237e,	// (0x0002368b) tabs_3_passive_pane_srt

0x4c6a,	// (0x00025f77) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4c6a,	// (0x00025f77) bg_passive_tab_pane_cp2_srt

0x3e6c,	// (0x00025179) bg_passive_tab_pane_g1_cp2_srt

0x38ff,	// (0x00024c0c) bg_passive_tab_pane_g2_cp2_srt

0x3e75,	// (0x00025182) bg_passive_tab_pane_g3_cp2_srt

0x144d,	// (0x0002275a) bg_active_tab_pane_cp2_srt_ParamLimits

0x144d,	// (0x0002275a) bg_active_tab_pane_cp2_srt

0x638f,	// (0x0002769c) tabs_3_active_pane_srt_g1

0xda87,	// (0x0002ed94) tabs_3_active_pane_srt_t1_ParamLimits

0xda87,	// (0x0002ed94) tabs_3_active_pane_srt_t1

0x3e6c,	// (0x00025179) bg_active_tab_pane_g1_cp2_srt

0x38ff,	// (0x00024c0c) bg_active_tab_pane_g2_cp2_srt

0x3e75,	// (0x00025182) bg_active_tab_pane_g3_cp2_srt

0x2314,	// (0x00023621) tabs_4_active_pane_srt_ParamLimits

0x2314,	// (0x00023621) tabs_4_active_pane_srt

0x2326,	// (0x00023633) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2326,	// (0x00023633) tabs_4_passive_pane_cp2_srt

0x3fca,	// (0x000252d7) aid_size_cell_toolbar

0x5fb1,	// (0x000272be) main_idle_act_pane_ParamLimits

0x4201,	// (0x0002550e) popup_large_graphic_colour_window_ParamLimits

0xcaa1,	// (0x0002ddae) popup_toolbar_window_ParamLimits

0xcaa1,	// (0x0002ddae) popup_toolbar_window

0x05f8,	// (0x00021905) list_single_graphic_2heading_pane_ParamLimits

0x05f8,	// (0x00021905) list_single_graphic_2heading_pane

0x340b,	// (0x00024718) aid_size_cell_apps_grid_lsc_pane

0x341d,	// (0x0002472a) aid_size_cell_apps_grid_prt_pane

0x403c,	// (0x00025349) bg_wml_button_pane_cp1_ParamLimits

0x403c,	// (0x00025349) bg_wml_button_pane_cp1

0xd5d6,	// (0x0002e8e3) form_midp_field_text_pane_t1_ParamLimits

0x4c6a,	// (0x00025f77) input_focus_pane_cp050_ParamLimits

0x4e81,	// (0x0002618e) list_midp_form_text_pane_ParamLimits

0x4e33,	// (0x00026140) input_focus_pane_cp051_ParamLimits

0x4e47,	// (0x00026154) list_midp_choice_pane_ParamLimits

0xd58d,	// (0x0002e89a) list_single_2graphic_pane_cp3_ParamLimits

0xd58d,	// (0x0002e89a) list_single_2graphic_pane_cp3

0x703d,	// (0x0002834a) list_single_midp_graphic_pane_ParamLimits

0x703d,	// (0x0002834a) list_single_midp_graphic_pane

0x0475,	// (0x00021782) list_single_graphic_2heading_pane_g1_ParamLimits

0x0475,	// (0x00021782) list_single_graphic_2heading_pane_g1

0x0481,	// (0x0002178e) list_single_graphic_2heading_pane_g4_ParamLimits

0x0481,	// (0x0002178e) list_single_graphic_2heading_pane_g4

0x048d,	// (0x0002179a) list_single_graphic_2heading_pane_g5_ParamLimits

0x048d,	// (0x0002179a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x00030ad0) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x00030ad0) list_single_graphic_2heading_pane_g

0x0499,	// (0x000217a6) list_single_graphic_2heading_pane_t1_ParamLimits

0x0499,	// (0x000217a6) list_single_graphic_2heading_pane_t1

0x04ad,	// (0x000217ba) list_single_graphic_2heading_pane_t2_ParamLimits

0x04ad,	// (0x000217ba) list_single_graphic_2heading_pane_t2

0x04c9,	// (0x000217d6) list_single_graphic_2heading_pane_t3_ParamLimits

0x04c9,	// (0x000217d6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x00030ad7) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x00030ad7) list_single_graphic_2heading_pane_t

0x4ab6,	// (0x00025dc3) bg_popup_sub_pane_cp2

0x4ae0,	// (0x00025ded) grid_toobar_pane

0x1fe5,	// (0x000232f2) cell_toolbar_pane_ParamLimits

0x1fe5,	// (0x000232f2) cell_toolbar_pane

0x4b1c,	// (0x00025e29) cell_toolbar_pane_g1_ParamLimits

0x4b1c,	// (0x00025e29) cell_toolbar_pane_g1

0x4b30,	// (0x00025e3d) cell_toolbar_pane_g2_ParamLimits

0x4b30,	// (0x00025e3d) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x00030ae5) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x00030ae5) cell_toolbar_pane_g

0x4b52,	// (0x00025e5f) grid_highlight_pane_cp2_ParamLimits

0x4b52,	// (0x00025e5f) grid_highlight_pane_cp2

0x4b6c,	// (0x00025e79) toolbar_button_pane

0x4b78,	// (0x00025e85) toolbar_button_pane_g1

0x4b80,	// (0x00025e8d) toolbar_button_pane_g2

0x4b88,	// (0x00025e95) toolbar_button_pane_g3

0x4b90,	// (0x00025e9d) toolbar_button_pane_g4

0x4b98,	// (0x00025ea5) toolbar_button_pane_g5

0x4ba0,	// (0x00025ead) toolbar_button_pane_g6

0x4ba8,	// (0x00025eb5) toolbar_button_pane_g7

0x4bb0,	// (0x00025ebd) toolbar_button_pane_g8

0x4bb8,	// (0x00025ec5) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x00030aea) toolbar_button_pane_g

0x201d,	// (0x0002332a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x201d,	// (0x0002332a) list_single_2graphic_pane_g1_cp3

0xcb79,	// (0x0002de86) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcb79,	// (0x0002de86) list_single_2graphic_pane_g2_cp3

0x3ae0,	// (0x00024ded) list_single_2graphic_pane_g3_cp3

0xcb8a,	// (0x0002de97) list_single_2graphic_pane_g4_cp3_ParamLimits

0xcb8a,	// (0x0002de97) list_single_2graphic_pane_g4_cp3

0x203a,	// (0x00023347) list_single_2graphic_pane_t1_cp3_ParamLimits

0x203a,	// (0x00023347) list_single_2graphic_pane_t1_cp3

0x3ad4,	// (0x00024de1) list_single_midp_graphic_pane_g2_ParamLimits

0x3ad4,	// (0x00024de1) list_single_midp_graphic_pane_g2

0x3fd2,	// (0x000252df) aid_zoom_text_primary

0x0465,	// (0x00021772) aid_zoom_text_secondary

0x3f29,	// (0x00025236) status_small_pane_g7_ParamLimits

0x3f29,	// (0x00025236) status_small_pane_g7

0x3f4c,	// (0x00025259) status_small_pane_t1_ParamLimits

0xbb20,	// (0x0002ce2d) title_pane_g2

0x0003,

0xf56a,	// (0x00030877) title_pane_g

0xbdb8,	// (0x0002d0c5) aid_size_cell_colour_1_pane_ParamLimits

0xbdb8,	// (0x0002d0c5) aid_size_cell_colour_1_pane

0xbdcc,	// (0x0002d0d9) aid_size_cell_colour_2_pane_ParamLimits

0xbdcc,	// (0x0002d0d9) aid_size_cell_colour_2_pane

0xbde0,	// (0x0002d0ed) aid_size_cell_colour_3_pane_ParamLimits

0xbde0,	// (0x0002d0ed) aid_size_cell_colour_3_pane

0xbdf4,	// (0x0002d101) aid_size_cell_colour_4_pane_ParamLimits

0xbdf4,	// (0x0002d101) aid_size_cell_colour_4_pane

0x1a3b,	// (0x00022d48) title_pane_stacon_g1_ParamLimits

0x1a3b,	// (0x00022d48) title_pane_stacon_g1

0x5244,	// (0x00026551) popup_note_wait_window_g3_ParamLimits

0x5244,	// (0x00026551) popup_note_wait_window_g3

0x52bb,	// (0x000265c8) popup_note_wait_window_t5_ParamLimits

0x52bb,	// (0x000265c8) popup_note_wait_window_t5

0xe805,	// (0x0002fb12) main_feb_china_hwr_fs_writing_pane

0xc43c,	// (0x0002d749) popup_feb_china_hwr_fs_window_ParamLimits

0xc43c,	// (0x0002d749) popup_feb_china_hwr_fs_window

0xcb96,	// (0x0002dea3) aid_size_cell_hwr_fs_ParamLimits

0xcb96,	// (0x0002dea3) aid_size_cell_hwr_fs

0x4c6a,	// (0x00025f77) bg_popup_sub_pane_cp3_ParamLimits

0x4c6a,	// (0x00025f77) bg_popup_sub_pane_cp3

0xcbab,	// (0x0002deb8) grid_hwr_fs_pane_ParamLimits

0xcbab,	// (0x0002deb8) grid_hwr_fs_pane

0x2098,	// (0x000233a5) linegrid_hwr_fs_pane_ParamLimits

0x2098,	// (0x000233a5) linegrid_hwr_fs_pane

0xcbc3,	// (0x0002ded0) cell_hwr_fs_pane_ParamLimits

0xcbc3,	// (0x0002ded0) cell_hwr_fs_pane

0x4c76,	// (0x00025f83) linegrid_hwr_fs_pane_g1_ParamLimits

0x4c76,	// (0x00025f83) linegrid_hwr_fs_pane_g1

0xd561,	// (0x0002e86e) linegrid_hwr_fs_pane_g2_ParamLimits

0xd561,	// (0x0002e86e) linegrid_hwr_fs_pane_g2

0x4c94,	// (0x00025fa1) linegrid_hwr_fs_pane_g3_ParamLimits

0x4c94,	// (0x00025fa1) linegrid_hwr_fs_pane_g3

0x20cc,	// (0x000233d9) linegrid_hwr_fs_pane_g4_ParamLimits

0x20cc,	// (0x000233d9) linegrid_hwr_fs_pane_g4

0x20ea,	// (0x000233f7) linegrid_hwr_fs_pane_g5_ParamLimits

0x20ea,	// (0x000233f7) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x00030b10) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x00030b10) linegrid_hwr_fs_pane_g

0x4ca0,	// (0x00025fad) cell_hwr_fs_pane_g1_ParamLimits

0x4ca0,	// (0x00025fad) cell_hwr_fs_pane_g1

0x49ed,	// (0x00025cfa) cell_hwr_fs_pane_g2_ParamLimits

0x49ed,	// (0x00025cfa) cell_hwr_fs_pane_g2

0xd573,	// (0x0002e880) cell_hwr_fs_pane_g3_ParamLimits

0xd573,	// (0x0002e880) cell_hwr_fs_pane_g3

0xd580,	// (0x0002e88d) cell_hwr_fs_pane_g4_ParamLimits

0xd580,	// (0x0002e88d) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x00030b1b) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x00030b1b) cell_hwr_fs_pane_g

0xcbe9,	// (0x0002def6) cell_hwr_fs_pane_t1

0xe805,	// (0x0002fb12) grid_highlight_pane_cp6

0xe805,	// (0x0002fb12) main_idle_act2_pane

0x31c1,	// (0x000244ce) aid_inside_area_popup_secondary

0xd65a,	// (0x0002e967) aid_inside_area_window_primary_ParamLimits

0xd65a,	// (0x0002e967) aid_inside_area_window_primary

0x64f6,	// (0x00027803) ai2_news_ticker_pane

0x64fe,	// (0x0002780b) aid_size_cell_ai1_link_ParamLimits

0x64fe,	// (0x0002780b) aid_size_cell_ai1_link

0x6518,	// (0x00027825) popup_ai2_data_window_ParamLimits

0x6518,	// (0x00027825) popup_ai2_data_window

0x6536,	// (0x00027843) popup_ai2_link_window_ParamLimits

0x6536,	// (0x00027843) popup_ai2_link_window

0x4c6a,	// (0x00025f77) bg_popup_sub_pane_cp4_ParamLimits

0x4c6a,	// (0x00025f77) bg_popup_sub_pane_cp4

0x654c,	// (0x00027859) grid_ai2_link_pane_ParamLimits

0x654c,	// (0x00027859) grid_ai2_link_pane

0x6563,	// (0x00027870) popup_ai2_link_window_g1_ParamLimits

0x6563,	// (0x00027870) popup_ai2_link_window_g1

0x656f,	// (0x0002787c) popup_ai2_link_window_g2_ParamLimits

0x656f,	// (0x0002787c) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x00030ce7) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x00030ce7) popup_ai2_link_window_g

0x6580,	// (0x0002788d) ai2_mp_button_pane

0x6588,	// (0x00027895) ai2_mp_volume_pane

0x4e33,	// (0x00026140) bg_popup_sub_pane_cp5_ParamLimits

0x4e33,	// (0x00026140) bg_popup_sub_pane_cp5

0x6590,	// (0x0002789d) heading_ai2_gene_pane_ParamLimits

0x6590,	// (0x0002789d) heading_ai2_gene_pane

0x659c,	// (0x000278a9) list_ai2_gene_pane_ParamLimits

0x659c,	// (0x000278a9) list_ai2_gene_pane

0x65e4,	// (0x000278f1) cell_ai2_link_pane_ParamLimits

0x65e4,	// (0x000278f1) cell_ai2_link_pane

0x65fa,	// (0x00027907) cell_ai2_link_pane_g1

0xe805,	// (0x0002fb12) grid_highlight_pane_cp7

0x23cc,	// (0x000236d9) ai2_mp_volume_pane_g1

0x66cd,	// (0x000279da) ai2_mp_volume_pane_g2

0x6642,	// (0x0002794f) list_ai2_gene_pane_t1

0x66d5,	// (0x000279e2) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x00030d00) ai2_mp_volume_pane_g

0x23d4,	// (0x000236e1) volume_small_pane_cp3

0x66dd,	// (0x000279ea) aid_size_cell_ai2_button

0x66e5,	// (0x000279f2) grid_ai2_button_pane

0x66ee,	// (0x000279fb) cell_ai2_button_pane_ParamLimits

0x66ee,	// (0x000279fb) cell_ai2_button_pane

0xe7fb,	// (0x0002fb08) cell_ai2_button_pane_g1

0xe805,	// (0x0002fb12) grid_highlight_pane_cp8

0x668d,	// (0x0002799a) ai2_gene_pane_t1_ParamLimits

0x668d,	// (0x0002799a) ai2_gene_pane_t1

0xc3ba,	// (0x0002d6c7) aid_height_parent_landscape

0xd82a,	// (0x0002eb37) aid_height_set_list

0x5fb1,	// (0x000272be) aid_size_parent

0x6317,	// (0x00027624) aid_size_cell_graphic_pane_ParamLimits

0x65ac,	// (0x000278b9) popup_ai2_data_window_g1_ParamLimits

0x65ac,	// (0x000278b9) popup_ai2_data_window_g1

0x65b8,	// (0x000278c5) ai2_news_ticker_pane_g1

0x65c0,	// (0x000278cd) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x00030cec) ai2_news_ticker_pane_g

0x65c8,	// (0x000278d5) ai2_news_ticker_pane_t1

0x65d6,	// (0x000278e3) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x00030cf1) ai2_news_ticker_pane_t

0x6603,	// (0x00027910) heading_ai2_gene_pane_g1

0x660b,	// (0x00027918) heading_ai2_gene_pane_t1_ParamLimits

0x660b,	// (0x00027918) heading_ai2_gene_pane_t1

0x6620,	// (0x0002792d) list_highlight_pane_cp6

0x6628,	// (0x00027935) ai2_gene_pane_ParamLimits

0x6628,	// (0x00027935) ai2_gene_pane

0x6650,	// (0x0002795d) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x00030cf6) list_ai2_gene_pane_t

0x665e,	// (0x0002796b) list_highlight_pane_cp8_ParamLimits

0x665e,	// (0x0002796b) list_highlight_pane_cp8

0x666f,	// (0x0002797c) ai2_gene_pane_g1_ParamLimits

0x666f,	// (0x0002797c) ai2_gene_pane_g1

0x6681,	// (0x0002798e) ai2_gene_pane_g2_ParamLimits

0x6681,	// (0x0002798e) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x00030cfb) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x00030cfb) ai2_gene_pane_g

0x19ee,	// (0x00022cfb) scroll_pane_cp12

0xc379,	// (0x0002d686) control_pane_t3_ParamLimits

0xc379,	// (0x0002d686) control_pane_t3

0x3f3d,	// (0x0002524a) status_small_pane_g8_ParamLimits

0x3f3d,	// (0x0002524a) status_small_pane_g8

0xc4de,	// (0x0002d7eb) popup_find_window_ParamLimits

0xc78b,	// (0x0002da98) popup_note_image_window_ParamLimits

0x04e1,	// (0x000217ee) list_double2_graphic_pane_vc_g1_ParamLimits

0x04e1,	// (0x000217ee) list_double2_graphic_pane_vc_g1

0x04ed,	// (0x000217fa) list_double2_graphic_pane_vc_g2_ParamLimits

0x04ed,	// (0x000217fa) list_double2_graphic_pane_vc_g2

0x04f9,	// (0x00021806) list_double2_graphic_pane_vc_g3_ParamLimits

0x04f9,	// (0x00021806) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x00030ade) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x00030ade) list_double2_graphic_pane_vc_g

0x0505,	// (0x00021812) list_double2_graphic_pane_vc_t1_ParamLimits

0x0505,	// (0x00021812) list_double2_graphic_pane_vc_t1

0x0481,	// (0x0002178e) list_single_heading_pane_vc_g1_ParamLimits

0x0481,	// (0x0002178e) list_single_heading_pane_vc_g1

0x048d,	// (0x0002179a) list_single_heading_pane_vc_g2_ParamLimits

0x048d,	// (0x0002179a) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x000308f1) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x000308f1) list_single_heading_pane_vc_g

0x051b,	// (0x00021828) list_single_heading_pane_vc_t1_ParamLimits

0x051b,	// (0x00021828) list_single_heading_pane_vc_t1

0x0531,	// (0x0002183e) list_single_heading_pane_vc_t2_ParamLimits

0x0531,	// (0x0002183e) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x00030aff) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x00030aff) list_single_heading_pane_vc_t

0x4bc0,	// (0x00025ecd) list_setting_number_pane_vc_g1_ParamLimits

0x4bc0,	// (0x00025ecd) list_setting_number_pane_vc_g1

0x4bcc,	// (0x00025ed9) list_setting_number_pane_vc_g2_ParamLimits

0x4bcc,	// (0x00025ed9) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x00030b04) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x00030b04) list_setting_number_pane_vc_g

0x4bd8,	// (0x00025ee5) list_setting_number_pane_vc_t1_ParamLimits

0x4bd8,	// (0x00025ee5) list_setting_number_pane_vc_t1

0x4bec,	// (0x00025ef9) list_setting_number_pane_vc_t2_ParamLimits

0x4bec,	// (0x00025ef9) list_setting_number_pane_vc_t2

0x4c08,	// (0x00025f15) list_setting_number_pane_vc_t3_ParamLimits

0x4c08,	// (0x00025f15) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x00030b09) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x00030b09) list_setting_number_pane_vc_t

0x4c30,	// (0x00025f3d) set_value_pane_vc_ParamLimits

0x4c30,	// (0x00025f3d) set_value_pane_vc

0x05f8,	// (0x00021905) list_double2_graphic_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_double2_graphic_pane_vc

0x6195,	// (0x000274a2) list_double2_large_graphic_pane_vc_ParamLimits

0x6195,	// (0x000274a2) list_double2_large_graphic_pane_vc

0x05f8,	// (0x00021905) list_double2_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_double2_pane_vc

0x05f8,	// (0x00021905) list_double_graphic_heading_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_double_graphic_heading_pane_vc

0x05f8,	// (0x00021905) list_double_graphic_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_double_graphic_pane_vc

0x05f8,	// (0x00021905) list_double_heading_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_double_heading_pane_vc

0x6195,	// (0x000274a2) list_double_large_graphic_pane_vc_ParamLimits

0x6195,	// (0x000274a2) list_double_large_graphic_pane_vc

0x05f8,	// (0x00021905) list_double_number_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_double_number_pane_vc

0x05f8,	// (0x00021905) list_double_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_double_pane_vc

0x05f8,	// (0x00021905) list_double_time_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_double_time_pane_vc

0x05f8,	// (0x00021905) list_setting_number_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_setting_number_pane_vc

0x05f8,	// (0x00021905) list_setting_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_setting_pane_vc

0x05f8,	// (0x00021905) list_single_graphic_heading_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_single_graphic_heading_pane_vc

0x05f8,	// (0x00021905) list_single_heading_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_single_heading_pane_vc

0x05f8,	// (0x00021905) list_single_number_heading_pane_vc_ParamLimits

0x05f8,	// (0x00021905) list_single_number_heading_pane_vc

0x04e1,	// (0x000217ee) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x04e1,	// (0x000217ee) list_double_graphic_heading_pane_vc_g1

0x0481,	// (0x0002178e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0481,	// (0x0002178e) list_double_graphic_heading_pane_vc_g2

0x048d,	// (0x0002179a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x048d,	// (0x0002179a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x00030d07) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x00030d07) list_double_graphic_heading_pane_vc_g

0x063d,	// (0x0002194a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x063d,	// (0x0002194a) list_double_graphic_heading_pane_vc_t1

0x051b,	// (0x00021828) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x051b,	// (0x00021828) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x00030d0e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x00030d0e) list_double_graphic_heading_pane_vc_t

0x4bc0,	// (0x00025ecd) list_setting_pane_vc_g1_ParamLimits

0x4bc0,	// (0x00025ecd) list_setting_pane_vc_g1

0x4bcc,	// (0x00025ed9) list_setting_pane_vc_g2_ParamLimits

0x4bcc,	// (0x00025ed9) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x00030b04) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x00030b04) list_setting_pane_vc_g

0x696c,	// (0x00027c79) list_setting_pane_vc_t1_ParamLimits

0x696c,	// (0x00027c79) list_setting_pane_vc_t1

0x6980,	// (0x00027c8d) list_setting_pane_vc_t2_ParamLimits

0x6980,	// (0x00027c8d) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x00030d51) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x00030d51) list_setting_pane_vc_t

0x4c30,	// (0x00025f3d) set_value_pane_cp_vc_ParamLimits

0x4c30,	// (0x00025f3d) set_value_pane_cp_vc

0x0481,	// (0x0002178e) list_single_number_heading_pane_vc_g1_ParamLimits

0x0481,	// (0x0002178e) list_single_number_heading_pane_vc_g1

0x048d,	// (0x0002179a) list_single_number_heading_pane_vc_g2_ParamLimits

0x048d,	// (0x0002179a) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x000308f1) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x000308f1) list_single_number_heading_pane_vc_g

0x051b,	// (0x00021828) list_single_number_heading_pane_vc_t1_ParamLimits

0x051b,	// (0x00021828) list_single_number_heading_pane_vc_t1

0x0651,	// (0x0002195e) list_single_number_heading_pane_vc_t2_ParamLimits

0x0651,	// (0x0002195e) list_single_number_heading_pane_vc_t2

0x0665,	// (0x00021972) list_single_number_heading_pane_vc_t3_ParamLimits

0x0665,	// (0x00021972) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x00030d56) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00030d56) list_single_number_heading_pane_vc_t

0x04e1,	// (0x000217ee) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x04e1,	// (0x000217ee) list_single_graphic_heading_pane_vc_g1

0x0481,	// (0x0002178e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0481,	// (0x0002178e) list_single_graphic_heading_pane_vc_g4

0x048d,	// (0x0002179a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x048d,	// (0x0002179a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9fa,	// (0x00030d07) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x00030d07) list_single_graphic_heading_pane_vc_g

0x051b,	// (0x00021828) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x051b,	// (0x00021828) list_single_graphic_heading_pane_vc_t1

0x0677,	// (0x00021984) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0677,	// (0x00021984) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x00030d5d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x00030d5d) list_single_graphic_heading_pane_vc_t

0x0481,	// (0x0002178e) list_double2_pane_vc_g1_ParamLimits

0x0481,	// (0x0002178e) list_double2_pane_vc_g1

0x048d,	// (0x0002179a) list_double2_pane_vc_g2_ParamLimits

0x048d,	// (0x0002179a) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x000308f1) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x000308f1) list_double2_pane_vc_g

0x068b,	// (0x00021998) list_double2_pane_vc_t1_ParamLimits

0x068b,	// (0x00021998) list_double2_pane_vc_t1

0x06a1,	// (0x000219ae) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x06a1,	// (0x000219ae) list_double2_large_graphic_pane_vc_g1

0x06ad,	// (0x000219ba) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x06ad,	// (0x000219ba) list_double2_large_graphic_pane_vc_g2

0x06b9,	// (0x000219c6) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x06b9,	// (0x000219c6) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0003090e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0003090e) list_double2_large_graphic_pane_vc_g

0x06c5,	// (0x000219d2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x06c5,	// (0x000219d2) list_double2_large_graphic_pane_vc_t1

0x06db,	// (0x000219e8) list_double_time_pane_vc_g1_ParamLimits

0x06db,	// (0x000219e8) list_double_time_pane_vc_g1

0x06e7,	// (0x000219f4) list_double_time_pane_vc_g2_ParamLimits

0x06e7,	// (0x000219f4) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x00030d62) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x00030d62) list_double_time_pane_vc_g

0x06f3,	// (0x00021a00) list_double_time_pane_vc_t1_ParamLimits

0x06f3,	// (0x00021a00) list_double_time_pane_vc_t1

0x070c,	// (0x00021a19) list_double_time_pane_vc_t2_ParamLimits

0x070c,	// (0x00021a19) list_double_time_pane_vc_t2

0x074c,	// (0x00021a59) list_double_time_pane_vc_t3_ParamLimits

0x074c,	// (0x00021a59) list_double_time_pane_vc_t3

0x0764,	// (0x00021a71) list_double_time_pane_vc_t4_ParamLimits

0x0764,	// (0x00021a71) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x00030d67) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x00030d67) list_double_time_pane_vc_t

0x0481,	// (0x0002178e) list_double_pane_vc_g1_ParamLimits

0x0481,	// (0x0002178e) list_double_pane_vc_g1

0x048d,	// (0x0002179a) list_double_pane_vc_g2_ParamLimits

0x048d,	// (0x0002179a) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x000308f1) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x000308f1) list_double_pane_vc_g

0x0778,	// (0x00021a85) list_double_pane_vc_t1_ParamLimits

0x0778,	// (0x00021a85) list_double_pane_vc_t1

0x078a,	// (0x00021a97) list_double_pane_vc_t2_ParamLimits

0x078a,	// (0x00021a97) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x00030d70) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x00030d70) list_double_pane_vc_t

0x0481,	// (0x0002178e) list_double_number_pane_vc_g1_ParamLimits

0x0481,	// (0x0002178e) list_double_number_pane_vc_g1

0x048d,	// (0x0002179a) list_double_number_pane_vc_g2_ParamLimits

0x048d,	// (0x0002179a) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x000308f1) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x000308f1) list_double_number_pane_vc_g

0x07a2,	// (0x00021aaf) list_double_number_pane_vc_t1_ParamLimits

0x07a2,	// (0x00021aaf) list_double_number_pane_vc_t1

0x07b6,	// (0x00021ac3) list_double_number_pane_vc_t2_ParamLimits

0x07b6,	// (0x00021ac3) list_double_number_pane_vc_t2

0x078a,	// (0x00021a97) list_double_number_pane_vc_t3_ParamLimits

0x078a,	// (0x00021a97) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x00030d75) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x00030d75) list_double_number_pane_vc_t

0x07c8,	// (0x00021ad5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x07c8,	// (0x00021ad5) list_double_large_graphic_pane_vc_g1

0x07d4,	// (0x00021ae1) list_double_large_graphic_pane_vc_g2_ParamLimits

0x07d4,	// (0x00021ae1) list_double_large_graphic_pane_vc_g2

0x06b9,	// (0x000219c6) list_double_large_graphic_pane_vc_g3_ParamLimits

0x06b9,	// (0x000219c6) list_double_large_graphic_pane_vc_g3

0x07e3,	// (0x00021af0) list_double_large_graphic_pane_vc_g4_ParamLimits

0x07e3,	// (0x00021af0) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x00030d7c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00030d7c) list_double_large_graphic_pane_vc_g

0x07ef,	// (0x00021afc) list_double_large_graphic_pane_vc_t1_ParamLimits

0x07ef,	// (0x00021afc) list_double_large_graphic_pane_vc_t1

0x0801,	// (0x00021b0e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0801,	// (0x00021b0e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00030d85) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00030d85) list_double_large_graphic_pane_vc_t

0x0481,	// (0x0002178e) list_double_heading_pane_vc_g1_ParamLimits

0x0481,	// (0x0002178e) list_double_heading_pane_vc_g1

0x048d,	// (0x0002179a) list_double_heading_pane_vc_g2_ParamLimits

0x048d,	// (0x0002179a) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x000308f1) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x000308f1) list_double_heading_pane_vc_g

0x081a,	// (0x00021b27) list_double_heading_pane_vc_t1_ParamLimits

0x081a,	// (0x00021b27) list_double_heading_pane_vc_t1

0x051b,	// (0x00021828) list_double_heading_pane_vc_t2_ParamLimits

0x051b,	// (0x00021828) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x00030d8a) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x00030d8a) list_double_heading_pane_vc_t

0x082e,	// (0x00021b3b) list_double_graphic_pane_vc_g1_ParamLimits

0x082e,	// (0x00021b3b) list_double_graphic_pane_vc_g1

0x083e,	// (0x00021b4b) list_double_graphic_pane_vc_g2_ParamLimits

0x083e,	// (0x00021b4b) list_double_graphic_pane_vc_g2

0x084d,	// (0x00021b5a) list_double_graphic_pane_vc_g3_ParamLimits

0x084d,	// (0x00021b5a) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x00030d8f) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x00030d8f) list_double_graphic_pane_vc_g

0x0859,	// (0x00021b66) list_double_graphic_pane_vc_t1_ParamLimits

0x0859,	// (0x00021b66) list_double_graphic_pane_vc_t1

0x078a,	// (0x00021a97) list_double_graphic_pane_vc_t2_ParamLimits

0x078a,	// (0x00021a97) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x00030d96) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x00030d96) list_double_graphic_pane_vc_t

0x0c98,	// (0x00021fa5) aid_size_cell_fastswap

0xb96a,	// (0x0002cc77) aid_size_cell_touch_ParamLimits

0xb96a,	// (0x0002cc77) aid_size_cell_touch

0x0f01,	// (0x0002220e) popup_fast_swap_wide_window_ParamLimits

0x0f01,	// (0x0002220e) popup_fast_swap_wide_window

0xbab9,	// (0x0002cdc6) touch_pane_ParamLimits

0xbab9,	// (0x0002cdc6) touch_pane

0x3044,	// (0x00024351) button_value_adjust_pane_cp2

0x3044,	// (0x00024351) button_value_adjust_pane_cp4

0x01a1,	// (0x000214ae) form_field_data_pane_cp2

0xb507,	// (0x0002c814) form_field_data_wide_pane_cp2

0x34dd,	// (0x000247ea) bg_scroll_pane_ParamLimits

0x1ba0,	// (0x00022ead) scroll_handle_pane_ParamLimits

0x1bb4,	// (0x00022ec1) scroll_sc2_down_pane_ParamLimits

0x1bb4,	// (0x00022ec1) scroll_sc2_down_pane

0x350e,	// (0x0002481b) scroll_sc2_up_pane_ParamLimits

0x350e,	// (0x0002481b) scroll_sc2_up_pane

0xdbde,	// (0x0002eeeb) grid_wheel_folder_pane_g1_ParamLimits

0xdbde,	// (0x0002eeeb) grid_wheel_folder_pane_g1

0x1d7e,	// (0x0002308b) clock_nsta_pane_cp2_ParamLimits

0x1d7e,	// (0x0002308b) clock_nsta_pane_cp2

0xc193,	// (0x0002d4a0) listscroll_midp_pane_ParamLimits

0xc1a4,	// (0x0002d4b1) midp_canvas_pane

0x3fb8,	// (0x000252c5) nsta_clock_indic_pane

0x400e,	// (0x0002531b) listscroll_form_pane_vc

0x402a,	// (0x00025337) listscroll_set_pane_vc_ParamLimits

0x402a,	// (0x00025337) listscroll_set_pane_vc

0xd25b,	// (0x0002e568) clock_nsta_pane

0xd285,	// (0x0002e592) indicator_nsta_pane

0x4ab6,	// (0x00025dc3) bg_popup_sub_pane_cp2_ParamLimits

0x4aca,	// (0x00025dd7) find_pane_cp2_ParamLimits

0x4aca,	// (0x00025dd7) find_pane_cp2

0x4ae0,	// (0x00025ded) grid_toobar_pane_ParamLimits

0x4c3e,	// (0x00025f4b) list_form_gen_pane_vc_ParamLimits

0x4c3e,	// (0x00025f4b) list_form_gen_pane_vc

0x4c54,	// (0x00025f61) scroll_pane_cp8_vc_ParamLimits

0x4c54,	// (0x00025f61) scroll_pane_cp8_vc

0x4cd0,	// (0x00025fdd) data_form_wide_pane_vc_ParamLimits

0x4cd0,	// (0x00025fdd) data_form_wide_pane_vc

0x4cdc,	// (0x00025fe9) form_field_data_wide_pane_vc_g1

0x4ce4,	// (0x00025ff1) form_field_data_wide_pane_vc_t1_ParamLimits

0x4ce4,	// (0x00025ff1) form_field_data_wide_pane_vc_t1

0x3058,	// (0x00024365) input_focus_pane_cp6_vc_ParamLimits

0x3058,	// (0x00024365) input_focus_pane_cp6_vc

0xd5fe,	// (0x0002e90b) list_midp_pane_ParamLimits

0x6383,	// (0x00027690) scroll_pane_cp16_ParamLimits

0x6383,	// (0x00027690) scroll_pane_cp16

0x5018,	// (0x00026325) button_value_adjust_pane_ParamLimits

0x5018,	// (0x00026325) button_value_adjust_pane

0xd83b,	// (0x0002eb48) button_value_adjust_pane_cp6_ParamLimits

0xd83b,	// (0x0002eb48) button_value_adjust_pane_cp6

0xd97d,	// (0x0002ec8a) settings_code_pane_cp_ParamLimits

0xd97d,	// (0x0002ec8a) settings_code_pane_cp

0xe7fb,	// (0x0002fb08) cell_touch_pane_g1

0xe7fb,	// (0x0002fb08) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x00030a27) cell_touch_pane_g

0xdab3,	// (0x0002edc0) cell_touch_pane_cp_ParamLimits

0xdab3,	// (0x0002edc0) cell_touch_pane_cp

0xdacf,	// (0x0002eddc) cell_touch_pane_ParamLimits

0xdacf,	// (0x0002eddc) cell_touch_pane

0xe7fb,	// (0x0002fb08) scroll_sc2_down_pane_g1

0xe7fb,	// (0x0002fb08) scroll_sc2_up_pane_g1

0xe805,	// (0x0002fb12) bg_set_opt_pane_cp4_vc

0x6721,	// (0x00027a2e) list_set_graphic_pane_vc_g1_ParamLimits

0x6721,	// (0x00027a2e) list_set_graphic_pane_vc_g1

0x672d,	// (0x00027a3a) list_set_graphic_pane_vc_g2_ParamLimits

0x672d,	// (0x00027a3a) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x00030d13) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x00030d13) list_set_graphic_pane_vc_g

0x6739,	// (0x00027a46) text_primary_small_cp13_vc_ParamLimits

0x6739,	// (0x00027a46) text_primary_small_cp13_vc

0x6751,	// (0x00027a5e) list_set_graphic_pane_vc_ParamLimits

0x6751,	// (0x00027a5e) list_set_graphic_pane_vc

0xe805,	// (0x0002fb12) input_focus_pane_cp2_vc

0xe7fb,	// (0x0002fb08) setting_code_pane_vc_g1

0x6765,	// (0x00027a72) setting_code_pane_vc_t1

0x6773,	// (0x00027a80) set_text_pane_vc_t1_ParamLimits

0x6773,	// (0x00027a80) set_text_pane_vc_t1

0xe805,	// (0x0002fb12) input_focus_pane_cp1_vc

0x6791,	// (0x00027a9e) list_set_text_pane_vc

0xe7fb,	// (0x0002fb08) setting_text_pane_vc_g1

0xe805,	// (0x0002fb12) bg_set_opt_pane_cp2_vc

0x679b,	// (0x00027aa8) setting_slider_graphic_pane_vc_g1

0x67a3,	// (0x00027ab0) setting_slider_graphic_pane_vc_t1

0x67b1,	// (0x00027abe) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x00030d18) setting_slider_graphic_pane_vc_t

0x67bf,	// (0x00027acc) slider_set_pane_cp_vc

0x67c7,	// (0x00027ad4) slider_set_pane_vc_g1

0x67d0,	// (0x00027add) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x00030d1d) slider_set_pane_vc_g

0x30bf,	// (0x000243cc) set_opt_bg_pane_g1_copy1

0x30c7,	// (0x000243d4) set_opt_bg_pane_g2_copy1

0x67fc,	// (0x00027b09) set_opt_bg_pane_g3_copy1

0x30d7,	// (0x000243e4) set_opt_bg_pane_g4_copy1

0x30df,	// (0x000243ec) set_opt_bg_pane_g5_copy1

0x30e7,	// (0x000243f4) set_opt_bg_pane_g6_copy1

0x6806,	// (0x00027b13) set_opt_bg_pane_g7_copy1

0x6810,	// (0x00027b1d) set_opt_bg_pane_g8_copy1

0x681a,	// (0x00027b27) set_opt_bg_pane_g9_copy1

0xe805,	// (0x0002fb12) bg_set_opt_pane_cp_vc

0x6824,	// (0x00027b31) setting_slider_pane_vc_t1

0x67a3,	// (0x00027ab0) setting_slider_pane_vc_t2

0x67b1,	// (0x00027abe) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x00030d2c) setting_slider_pane_vc_t

0x67bf,	// (0x00027acc) slider_set_pane_vc

0x210e,	// (0x0002341b) volume_set_pane_vc_g1

0x2117,	// (0x00023424) volume_set_pane_vc_g2

0x2120,	// (0x0002342d) volume_set_pane_vc_g3

0x2129,	// (0x00023436) volume_set_pane_vc_g4

0x2132,	// (0x0002343f) volume_set_pane_vc_g5

0x213b,	// (0x00023448) volume_set_pane_vc_g6

0x2144,	// (0x00023451) volume_set_pane_vc_g7

0x214d,	// (0x0002345a) volume_set_pane_vc_g8

0x2156,	// (0x00023463) volume_set_pane_vc_g9

0x215f,	// (0x0002346c) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x00030d33) volume_set_pane_vc_g

0x6833,	// (0x00027b40) volume_set_pane_vc

0x683b,	// (0x00027b48) button_value_adjust_pane_cp1_vc

0x6845,	// (0x00027b52) list_highlight_pane_cp2_vc

0x684e,	// (0x00027b5b) list_set_pane_vc_ParamLimits

0x684e,	// (0x00027b5b) list_set_pane_vc

0x68fa,	// (0x00027c07) main_pane_set_vc_t1_ParamLimits

0x68fa,	// (0x00027c07) main_pane_set_vc_t1

0x690f,	// (0x00027c1c) main_pane_set_vc_t2_ParamLimits

0x690f,	// (0x00027c1c) main_pane_set_vc_t2

0x6921,	// (0x00027c2e) main_pane_set_vc_t3_ParamLimits

0x6921,	// (0x00027c2e) main_pane_set_vc_t3

0x6935,	// (0x00027c42) main_pane_set_vc_t4_ParamLimits

0x6935,	// (0x00027c42) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x00030d48) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x00030d48) main_pane_set_vc_t

0x6949,	// (0x00027c56) setting_code_pane_vc_ParamLimits

0x6949,	// (0x00027c56) setting_code_pane_vc

0x695a,	// (0x00027c67) setting_slider_graphic_pane_vc

0x695a,	// (0x00027c67) setting_slider_pane_vc

0x695a,	// (0x00027c67) setting_text_pane_vc

0x695a,	// (0x00027c67) setting_volume_pane_vc

0x6964,	// (0x00027c71) scroll_pane_cp121_vc

0x3032,	// (0x0002433f) set_content_pane_vc

0x69a2,	// (0x00027caf) button_value_adjust_pane_g1

0x69ab,	// (0x00027cb8) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x00030d9b) button_value_adjust_pane_g

0x69b4,	// (0x00027cc1) form_field_slider_wide_pane_vc_t1_ParamLimits

0x69b4,	// (0x00027cc1) form_field_slider_wide_pane_vc_t1

0x69c8,	// (0x00027cd5) form_field_slider_wide_pane_vc_t2_ParamLimits

0x69c8,	// (0x00027cd5) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x00030da0) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x00030da0) form_field_slider_wide_pane_vc_t

0x144d,	// (0x0002275a) input_focus_pane_cp10_vc_ParamLimits

0x144d,	// (0x0002275a) input_focus_pane_cp10_vc

0x69da,	// (0x00027ce7) slider_cont_pane_cp1_vc_ParamLimits

0x69da,	// (0x00027ce7) slider_cont_pane_cp1_vc

0x67c7,	// (0x00027ad4) slider_form_pane_g1_cp2

0x67d0,	// (0x00027add) slider_form_pane_g2_cp2

0x69f3,	// (0x00027d00) form_field_slider_pane_vc_t3

0x6a01,	// (0x00027d0e) form_field_slider_pane_vc_t4

0x6a0f,	// (0x00027d1c) slider_form_pane_vc_ParamLimits

0x6a0f,	// (0x00027d1c) slider_form_pane_vc

0x6a1c,	// (0x00027d29) form_field_slider_pane_vc_t1_ParamLimits

0x6a1c,	// (0x00027d29) form_field_slider_pane_vc_t1

0x69c8,	// (0x00027cd5) form_field_slider_pane_vc_t2_ParamLimits

0x69c8,	// (0x00027cd5) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x00030db0) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x00030db0) form_field_slider_pane_vc_t

0x144d,	// (0x0002275a) input_focus_pane_cp9_vc_ParamLimits

0x144d,	// (0x0002275a) input_focus_pane_cp9_vc

0x6a38,	// (0x00027d45) slider_cont_pane_vc_ParamLimits

0x6a38,	// (0x00027d45) slider_cont_pane_vc

0x6a4a,	// (0x00027d57) list_form_graphic_pane_cp_vc_ParamLimits

0x6a4a,	// (0x00027d57) list_form_graphic_pane_cp_vc

0x4cdc,	// (0x00025fe9) form_field_popup_wide_pane_vc_g1

0x6a5f,	// (0x00027d6c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6a5f,	// (0x00027d6c) form_field_popup_wide_pane_vc_t1

0x3058,	// (0x00024365) input_focus_pane_cp8_vc_ParamLimits

0x3058,	// (0x00024365) input_focus_pane_cp8_vc

0x6a76,	// (0x00027d83) list_form_wide_pane_vc_ParamLimits

0x6a76,	// (0x00027d83) list_form_wide_pane_vc

0x6a82,	// (0x00027d8f) list_form_graphic_pane_vc_g1

0x6a8a,	// (0x00027d97) list_form_graphic_pane_vc_t1_ParamLimits

0x6a8a,	// (0x00027d97) list_form_graphic_pane_vc_t1

0x1141,	// (0x0002244e) list_highlight_pane_cp5_vc_ParamLimits

0x1141,	// (0x0002244e) list_highlight_pane_cp5_vc

0x6aa6,	// (0x00027db3) list_form_graphic_pane_vc_ParamLimits

0x6aa6,	// (0x00027db3) list_form_graphic_pane_vc

0x4cdc,	// (0x00025fe9) form_field_popup_pane_vc_g1

0x6abc,	// (0x00027dc9) form_field_popup_pane_vc_t1_ParamLimits

0x6abc,	// (0x00027dc9) form_field_popup_pane_vc_t1

0x3058,	// (0x00024365) input_focus_pane_cp7_vc_ParamLimits

0x3058,	// (0x00024365) input_focus_pane_cp7_vc

0x6ad3,	// (0x00027de0) list_form_pane_vc_ParamLimits

0x6ad3,	// (0x00027de0) list_form_pane_vc

0x6adf,	// (0x00027dec) data_form_pane_vc_t1_ParamLimits

0x6adf,	// (0x00027dec) data_form_pane_vc_t1

0x30bf,	// (0x000243cc) input_focus_pane_vc_g1

0x30c7,	// (0x000243d4) input_focus_pane_vc_g2

0x30cf,	// (0x000243dc) input_focus_pane_vc_g3

0x30d7,	// (0x000243e4) input_focus_pane_vc_g4

0x30df,	// (0x000243ec) input_focus_pane_vc_g5

0x30e7,	// (0x000243f4) input_focus_pane_vc_g6

0x30ef,	// (0x000243fc) input_focus_pane_vc_g7

0x30f7,	// (0x00024404) input_focus_pane_vc_g8

0x30ff,	// (0x0002440c) input_focus_pane_vc_g9

0xe7fb,	// (0x0002fb08) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x000309b0) input_focus_pane_vc_g

0x4cd0,	// (0x00025fdd) data_form_pane_vc_ParamLimits

0x4cd0,	// (0x00025fdd) data_form_pane_vc

0x4cdc,	// (0x00025fe9) form_field_data_pane_vc_g1

0x6afc,	// (0x00027e09) form_field_data_pane_vc_t1_ParamLimits

0x6afc,	// (0x00027e09) form_field_data_pane_vc_t1

0x3058,	// (0x00024365) input_focus_pane_vc_ParamLimits

0x3058,	// (0x00024365) input_focus_pane_vc

0x6b16,	// (0x00027e23) button_value_adjust_pane_cp3_vc

0x6b1e,	// (0x00027e2b) button_value_adjust_pane_cp5_vc

0x6b26,	// (0x00027e33) form_field_data_pane_vc_ParamLimits

0x6b26,	// (0x00027e33) form_field_data_pane_vc

0x6b41,	// (0x00027e4e) form_field_data_pane_vc_cp2

0x6b49,	// (0x00027e56) form_field_data_wide_pane_vc_ParamLimits

0x6b49,	// (0x00027e56) form_field_data_wide_pane_vc

0x6b63,	// (0x00027e70) form_field_data_wide_pane_vc_cp2

0x6b6b,	// (0x00027e78) form_field_popup_pane_vc_ParamLimits

0x6b6b,	// (0x00027e78) form_field_popup_pane_vc

0x6b86,	// (0x00027e93) form_field_popup_wide_pane_vc_ParamLimits

0x6b86,	// (0x00027e93) form_field_popup_wide_pane_vc

0x6ba0,	// (0x00027ead) form_field_slider_pane_vc_ParamLimits

0x6ba0,	// (0x00027ead) form_field_slider_pane_vc

0x6bb3,	// (0x00027ec0) form_field_slider_wide_pane_vc_ParamLimits

0x6bb3,	// (0x00027ec0) form_field_slider_wide_pane_vc

0xdaed,	// (0x0002edfa) grid_touch_1_pane_ParamLimits

0xdaed,	// (0x0002edfa) grid_touch_1_pane

0xdb01,	// (0x0002ee0e) grid_touch_2_pane_ParamLimits

0xdb01,	// (0x0002ee0e) grid_touch_2_pane

0x6c8a,	// (0x00027f97) touch_pane_g1_ParamLimits

0x6c8a,	// (0x00027f97) touch_pane_g1

0x6bec,	// (0x00027ef9) cell_app_pane_cp_wide_ParamLimits

0x6bec,	// (0x00027ef9) cell_app_pane_cp_wide

0x6bfd,	// (0x00027f0a) grid_popup_fast_wide_pane_ParamLimits

0x6bfd,	// (0x00027f0a) grid_popup_fast_wide_pane

0x6c11,	// (0x00027f1e) scroll_pane_cp19_ParamLimits

0x6c11,	// (0x00027f1e) scroll_pane_cp19

0xe805,	// (0x0002fb12) bg_popup_window_pane_cp20

0x6c25,	// (0x00027f32) listscroll_popup_fast_wide_pane

0x322e,	// (0x0002453b) grid_indicator_nsta_pane

0x6c2d,	// (0x00027f3a) clock_nsta_pane_g1

0x6c36,	// (0x00027f43) clock_nsta_pane_t1

0xdb2d,	// (0x0002ee3a) cell_indicator_nsta_pane_ParamLimits

0xdb2d,	// (0x0002ee3a) cell_indicator_nsta_pane

0x6c8a,	// (0x00027f97) cell_indicator_nsta_pane_g1

0xdb4a,	// (0x0002ee57) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00030dba) cell_indicator_nsta_pane_g

0x6cad,	// (0x00027fba) clock_nsta_pane_cp

0x6cb5,	// (0x00027fc2) indicator_nsta_pane_cp

0x6cbd,	// (0x00027fca) nsta_clock_indic_pane_g1

0x129d,	// (0x000225aa) grid_indicator_pane

0x3600,	// (0x0002490d) scroll_pane_cp29

0x1cca,	// (0x00022fd7) indicator_nsta_pane_cp2_ParamLimits

0x1cca,	// (0x00022fd7) indicator_nsta_pane_cp2

0x1141,	// (0x0002244e) main_apps_wheel_pane

0x4e9b,	// (0x000261a8) form_midp_field_text_pane_ParamLimits

0x4fea,	// (0x000262f7) scroll_bar_cp050_ParamLimits

0x6d26,	// (0x00028033) cell_indicator_pane_ParamLimits

0x6d26,	// (0x00028033) cell_indicator_pane

0x6d3e,	// (0x0002804b) cell_indicator_pane_g1

0xdb60,	// (0x0002ee6d) grid_wheel_folder_pane_ParamLimits

0xdb60,	// (0x0002ee6d) grid_wheel_folder_pane

0xdb6e,	// (0x0002ee7b) list_wheel_apps_pane_ParamLimits

0xdb6e,	// (0x0002ee7b) list_wheel_apps_pane

0xdb7c,	// (0x0002ee89) main_apps_wheel_pane_g1_ParamLimits

0xdb7c,	// (0x0002ee89) main_apps_wheel_pane_g1

0xdb8c,	// (0x0002ee99) main_apps_wheel_pane_g2_ParamLimits

0xdb8c,	// (0x0002ee99) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x00030dd6) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x00030dd6) main_apps_wheel_pane_g

0xdb9c,	// (0x0002eea9) main_apps_wheel_pane_t1_ParamLimits

0xdb9c,	// (0x0002eea9) main_apps_wheel_pane_t1

0xdbb4,	// (0x0002eec1) list_wheel_apps_pane_g1

0xdbbc,	// (0x0002eec9) list_wheel_apps_pane_g2

0xdbc4,	// (0x0002eed1) list_wheel_apps_pane_g3

0xdbcc,	// (0x0002eed9) list_wheel_apps_pane_g4

0xdbd4,	// (0x0002eee1) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x00030ddb) list_wheel_apps_pane_g

0x3b32,	// (0x00024e3f) navi_icon_text_pane

0xcaf9,	// (0x0002de06) aid_fill_nsta

0xdbf1,	// (0x0002eefe) navi_icon_text_pane_g1

0xdbfd,	// (0x0002ef0a) navi_icon_text_pane_t1

0xc17b,	// (0x0002d488) list_set_graphic_pane_t1_ParamLimits

0xc17b,	// (0x0002d488) list_set_graphic_pane_t1

0x573b,	// (0x00026a48) popup_midp_note_alarm_window_t6_ParamLimits

0x573b,	// (0x00026a48) popup_midp_note_alarm_window_t6

0x574d,	// (0x00026a5a) popup_midp_note_alarm_window_t7_ParamLimits

0x574d,	// (0x00026a5a) popup_midp_note_alarm_window_t7

0x575f,	// (0x00026a6c) popup_midp_note_alarm_window_t8_ParamLimits

0x575f,	// (0x00026a6c) popup_midp_note_alarm_window_t8

0x5771,	// (0x00026a7e) popup_midp_note_alarm_window_t9_ParamLimits

0x5771,	// (0x00026a7e) popup_midp_note_alarm_window_t9

0x5783,	// (0x00026a90) popup_midp_note_alarm_window_t10_ParamLimits

0x5783,	// (0x00026a90) popup_midp_note_alarm_window_t10

0x5795,	// (0x00026aa2) popup_midp_note_alarm_window_t11_ParamLimits

0x5795,	// (0x00026aa2) popup_midp_note_alarm_window_t11

0x57a7,	// (0x00026ab4) scroll_pane_cp17_ParamLimits

0x57a7,	// (0x00026ab4) scroll_pane_cp17

0x210e,	// (0x0002341b) volume_small_pane_cp_g1

0x23dd,	// (0x000236ea) volume_small_pane_cp_g2

0x23e6,	// (0x000236f3) volume_small_pane_cp_g3

0x23ef,	// (0x000236fc) volume_small_pane_cp_g4

0x23f8,	// (0x00023705) volume_small_pane_cp_g5

0x2401,	// (0x0002370e) volume_small_pane_cp_g6

0x240a,	// (0x00023717) volume_small_pane_cp_g7

0x2413,	// (0x00023720) volume_small_pane_cp_g8

0x241c,	// (0x00023729) volume_small_pane_cp_g9

0x2425,	// (0x00023732) volume_small_pane_cp_g10

0x3d93,	// (0x000250a0) midp_ticker_pane_g1_ParamLimits

0x3d9f,	// (0x000250ac) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x00030a78) midp_ticker_pane_g_ParamLimits

0xc23b,	// (0x0002d548) midp_ticker_pane_t1_ParamLimits

0xcb19,	// (0x0002de26) aid_fill_nsta_2

0x4fd6,	// (0x000262e3) list_form2_midp_pane

0x6164,	// (0x00027471) midp_editing_number_pane_ParamLimits

0x6173,	// (0x00027480) midp_ticker_pane_ParamLimits

0x6e37,	// (0x00028144) form2_midp_field_pane

0x6e5b,	// (0x00028168) scroll_pane_cp51

0x6e7b,	// (0x00028188) form2_midp_button_pane_ParamLimits

0x6e7b,	// (0x00028188) form2_midp_button_pane

0x6e8d,	// (0x0002819a) form2_midp_content_pane_ParamLimits

0x6e8d,	// (0x0002819a) form2_midp_content_pane

0x6ea7,	// (0x000281b4) form2_midp_field_choice_group_pane

0x6eaf,	// (0x000281bc) form2_midp_field_pane_g1

0x6eb7,	// (0x000281c4) form2_midp_field_pane_g2

0x6ebf,	// (0x000281cc) form2_midp_field_pane_g3

0x6ec7,	// (0x000281d4) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00030e00) form2_midp_field_pane_g

0x6ecf,	// (0x000281dc) form2_midp_gauge_slider_pane

0x6ed7,	// (0x000281e4) form2_midp_gauge_wait_pane

0x6edf,	// (0x000281ec) form2_midp_image_pane_ParamLimits

0x6edf,	// (0x000281ec) form2_midp_image_pane

0x6efa,	// (0x00028207) form2_midp_label_pane_ParamLimits

0x6efa,	// (0x00028207) form2_midp_label_pane

0xdc2b,	// (0x0002ef38) form2_midp_label_pane_cp_ParamLimits

0xdc2b,	// (0x0002ef38) form2_midp_label_pane_cp

0x6f3a,	// (0x00028247) form2_midp_string_pane_ParamLimits

0x6f3a,	// (0x00028247) form2_midp_string_pane

0x086b,	// (0x00021b78) form2_midp_text_pane_ParamLimits

0x086b,	// (0x00021b78) form2_midp_text_pane

0x6f4c,	// (0x00028259) form2_midp_time_pane

0x6f5c,	// (0x00028269) input_focus_pane_cp51_ParamLimits

0x6f5c,	// (0x00028269) input_focus_pane_cp51

0x6f74,	// (0x00028281) form2_midp_label_pane_t1_ParamLimits

0x6f74,	// (0x00028281) form2_midp_label_pane_t1

0x088c,	// (0x00021b99) form2_mdip_text_pane_t1_ParamLimits

0x088c,	// (0x00021b99) form2_mdip_text_pane_t1

0x08b0,	// (0x00021bbd) form2_midp_time_pane_t1

0x6fc2,	// (0x000282cf) form2_midp_gauge_slider_pane_t1

0xdc4c,	// (0x0002ef59) form2_midp_gauge_slider_pane_t2

0xdc5e,	// (0x0002ef6b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x00030e09) form2_midp_gauge_slider_pane_t

0x6ff8,	// (0x00028305) form2_midp_slider_pane

0x7004,	// (0x00028311) form2_midp_gauge_wait_pane_t1

0x7012,	// (0x0002831f) form2_midp_wait_pane_ParamLimits

0x7012,	// (0x0002831f) form2_midp_wait_pane

0xd58d,	// (0x0002e89a) list_single_2graphic_pane_cp4_ParamLimits

0xd58d,	// (0x0002e89a) list_single_2graphic_pane_cp4

0xdc70,	// (0x0002ef7d) list_single_midp_graphic_pane_cp_ParamLimits

0xdc70,	// (0x0002ef7d) list_single_midp_graphic_pane_cp

0xe805,	// (0x0002fb12) list_highlight_pane_cp20

0x7061,	// (0x0002836e) list_single_2graphic_pane_g1_cp4

0x6603,	// (0x00027910) list_single_2graphic_pane_g2_cp4

0x7069,	// (0x00028376) list_single_2graphic_pane_t1_cp4

0x1141,	// (0x0002244e) list_highlight_pane_cp21

0x7078,	// (0x00028385) list_single_midp_graphic_pane_g4_cp

0x7087,	// (0x00028394) list_single_midp_graphic_pane_t1_cp

0xdc91,	// (0x0002ef9e) form2_mdip_string_pane_t1_ParamLimits

0xdc91,	// (0x0002ef9e) form2_mdip_string_pane_t1

0xe805,	// (0x0002fb12) bg_wml_button_pane_cp2

0xe7fb,	// (0x0002fb08) form2_midp_image_pane_g1

0xf549,	// (0x00030856) list_double_large_graphic_pane_g5_ParamLimits

0xf549,	// (0x00030856) list_double_large_graphic_pane_g5

0xc193,	// (0x0002d4a0) midp_form_pane_ParamLimits

0x1141,	// (0x0002244e) main_apps_wheel_pane_ParamLimits

0xc811,	// (0x0002db1e) popup_preview_window_ParamLimits

0xc811,	// (0x0002db1e) popup_preview_window

0x4600,	// (0x0002590d) popup_touch_info_window_ParamLimits

0x4600,	// (0x0002590d) popup_touch_info_window

0x4622,	// (0x0002592f) popup_touch_menu_window_ParamLimits

0x4622,	// (0x0002592f) popup_touch_menu_window

0xe7f1,	// (0x0002fafe) bg_popup_sub_pane_cp6

0x7141,	// (0x0002844e) list_touch_menu_pane

0x7149,	// (0x00028456) list_single_touch_menu_pane_ParamLimits

0x7149,	// (0x00028456) list_single_touch_menu_pane

0x7164,	// (0x00028471) list_single_touch_menu_pane_t1

0x1141,	// (0x0002244e) bg_popup_sub_pane_cp7_ParamLimits

0x1141,	// (0x0002244e) bg_popup_sub_pane_cp7

0x7172,	// (0x0002847f) heading_sub_pane

0x717a,	// (0x00028487) list_touch_info_pane_ParamLimits

0x717a,	// (0x00028487) list_touch_info_pane

0x7189,	// (0x00028496) list_single_touch_info_pane_ParamLimits

0x7189,	// (0x00028496) list_single_touch_info_pane

0x719b,	// (0x000284a8) list_single_touch_info_pane_t1

0x71a9,	// (0x000284b6) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x00030e17) list_single_touch_info_pane_t

0x3cb6,	// (0x00024fc3) bg_popup_heading_pane_cp

0x71b7,	// (0x000284c4) heading_sub_pane_t1

0x4c6a,	// (0x00025f77) bg_popup_preview_window_pane_cp_ParamLimits

0x4c6a,	// (0x00025f77) bg_popup_preview_window_pane_cp

0x7172,	// (0x0002847f) heading_preview_pane

0x717a,	// (0x00028487) list_preview_pane_ParamLimits

0x717a,	// (0x00028487) list_preview_pane

0x71c5,	// (0x000284d2) popup_preview_window_g1

0x7189,	// (0x00028496) list_single_preview_pane_ParamLimits

0x7189,	// (0x00028496) list_single_preview_pane

0x71cd,	// (0x000284da) list_single_preview_pane_g1

0x71d5,	// (0x000284e2) list_single_preview_pane_t1

0x719b,	// (0x000284a8) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00030e1c) list_single_preview_pane_t

0x71e3,	// (0x000284f0) bg_popup_heading_pane_cp2_ParamLimits

0x71e3,	// (0x000284f0) bg_popup_heading_pane_cp2

0x71f9,	// (0x00028506) heading_preview_pane_g1

0x7201,	// (0x0002850e) heading_preview_pane_t1_ParamLimits

0x7201,	// (0x0002850e) heading_preview_pane_t1

0x12c0,	// (0x000225cd) soft_indicator_pane_t1_ParamLimits

0x19cb,	// (0x00022cd8) scroll_pane_ParamLimits

0x34fc,	// (0x00024809) scroll_sc2_left_pane

0x3505,	// (0x00024812) scroll_sc2_right_pane

0x3524,	// (0x00024831) scroll_bg_pane_g1_ParamLimits

0x3539,	// (0x00024846) scroll_bg_pane_g2_ParamLimits

0x3551,	// (0x0002485e) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x00030a07) scroll_bg_pane_g_ParamLimits

0x3524,	// (0x00024831) scroll_handle_pane_g1_ParamLimits

0x3573,	// (0x00024880) scroll_handle_pane_g2_ParamLimits

0x3551,	// (0x0002485e) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x00030a0e) scroll_handle_pane_g_ParamLimits

0x4064,	// (0x00025371) popup_choice_list_window_ParamLimits

0x4064,	// (0x00025371) popup_choice_list_window

0x4ac2,	// (0x00025dcf) choice_list_pane

0x4b44,	// (0x00025e51) cell_toolbar_pane_t1

0x4b6c,	// (0x00025e79) toolbar_button_pane_ParamLimits

0x5c77,	// (0x00026f84) ai_gene_pane_1_t2_ParamLimits

0x5c77,	// (0x00026f84) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x00030c26) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x00030c26) ai_gene_pane_1_t

0x721e,	// (0x0002852b) scroll_sc2_left_pane_g1

0x721e,	// (0x0002852b) scroll_sc2_right_pane_g1

0x403c,	// (0x00025349) bg_popup_sub_pane_cp10

0x7228,	// (0x00028535) list_choice_list_pane

0x723f,	// (0x0002854c) list_single_choice_list_pane_ParamLimits

0x723f,	// (0x0002854c) list_single_choice_list_pane

0x7253,	// (0x00028560) list_single_choice_list_pane_g1

0x725b,	// (0x00028568) list_single_choice_list_pane_t1_ParamLimits

0x725b,	// (0x00028568) list_single_choice_list_pane_t1

0x7270,	// (0x0002857d) choice_list_pane_g1

0x7278,	// (0x00028585) choice_list_pane_t1

0xe7f1,	// (0x0002fafe) input_focus_pane_cp11

0x33d6,	// (0x000246e3) title_pane_stacon_g2_ParamLimits

0x33d6,	// (0x000246e3) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x000309ed) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x000309ed) title_pane_stacon_g

0x3cb6,	// (0x00024fc3) cursor_press_pane

0xc492,	// (0x0002d79f) popup_fep_hwr_window_ParamLimits

0xc492,	// (0x0002d79f) popup_fep_hwr_window

0x41a4,	// (0x000254b1) popup_fep_vkb_window_ParamLimits

0x41a4,	// (0x000254b1) popup_fep_vkb_window

0x7286,	// (0x00028593) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x00030e45) fep_vkb_side_pane_g_ParamLimits

0x2459,	// (0x00023766) fep_hwr_candidate_pane_ParamLimits

0x2459,	// (0x00023766) fep_hwr_candidate_pane

0x2483,	// (0x00023790) fep_hwr_side_pane_ParamLimits

0x2483,	// (0x00023790) fep_hwr_side_pane

0x24a5,	// (0x000237b2) fep_hwr_top_pane_ParamLimits

0x24a5,	// (0x000237b2) fep_hwr_top_pane

0x24bd,	// (0x000237ca) fep_hwr_write_pane_ParamLimits

0x24bd,	// (0x000237ca) fep_hwr_write_pane

0xfb38,	// (0x00030e45) fep_vkb_side_pane_g

0x728e,	// (0x0002859b) fep_hwr_top_pane_g1

0x72a0,	// (0x000285ad) fep_hwr_top_pane_g2

0x24e9,	// (0x000237f6) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00030e21) fep_hwr_top_pane_g

0x24fe,	// (0x0002380b) fep_hwr_top_text_pane

0x36c8,	// (0x000249d5) fep_hwr_top_text_pane_g1

0x72d6,	// (0x000285e3) fep_hwr_top_text_pane_t1

0x2608,	// (0x00023915) fep_hwr_candidate_pane_g1

0x7521,	// (0x0002882e) fep_vkb_keypad_pane_g3_ParamLimits

0x7521,	// (0x0002882e) fep_vkb_keypad_pane_g3

0x754d,	// (0x0002885a) fep_vkb_keypad_pane_g4_ParamLimits

0x754d,	// (0x0002885a) fep_vkb_keypad_pane_g4

0x75c4,	// (0x000288d1) fep_vkb_bottom_pane_g2_ParamLimits

0x75c4,	// (0x000288d1) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00030e4c) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00030e4c) fep_vkb_bottom_pane_g

0x721e,	// (0x0002852b) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x00030e56) cell_vkb_side_pane_g

0x764f,	// (0x0002895c) cell_vkb_side_pane_t1

0x765d,	// (0x0002896a) cell_vkb_side_pane_t1_copy1

0x721e,	// (0x0002852b) bg_fep_vkb_candidate_pane_g2

0x77a1,	// (0x00028aae) cell_vkb_candidate_pane_ParamLimits

0x72e4,	// (0x000285f1) aid_size_cell_vkb_ParamLimits

0x72e4,	// (0x000285f1) aid_size_cell_vkb

0x77a1,	// (0x00028aae) cell_vkb_candidate_pane

0x2622,	// (0x0002392f) bg_popup_fep_shadow_pane_g1

0xdd55,	// (0x0002f062) fep_vkb_bottom_pane_ParamLimits

0xdd55,	// (0x0002f062) fep_vkb_bottom_pane

0x73b3,	// (0x000286c0) fep_vkb_candidate_pane_ParamLimits

0x73b3,	// (0x000286c0) fep_vkb_candidate_pane

0xdd81,	// (0x0002f08e) fep_vkb_keypad_pane_ParamLimits

0xdd81,	// (0x0002f08e) fep_vkb_keypad_pane

0xdda8,	// (0x0002f0b5) fep_vkb_side_pane_ParamLimits

0xdda8,	// (0x0002f0b5) fep_vkb_side_pane

0xdde4,	// (0x0002f0f1) fep_vkb_top_pane_ParamLimits

0xdde4,	// (0x0002f0f1) fep_vkb_top_pane

0x747a,	// (0x00028787) fep_vkb_top_pane_g1_ParamLimits

0x747a,	// (0x00028787) fep_vkb_top_pane_g1

0x7489,	// (0x00028796) fep_vkb_top_pane_g2_ParamLimits

0x7489,	// (0x00028796) fep_vkb_top_pane_g2

0x7498,	// (0x000287a5) fep_vkb_top_pane_g3_ParamLimits

0x7498,	// (0x000287a5) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00030e3c) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00030e3c) fep_vkb_top_pane_g

0x74b6,	// (0x000287c3) fep_vkb_top_text_pane_ParamLimits

0x74b6,	// (0x000287c3) fep_vkb_top_text_pane

0xde20,	// (0x0002f12d) fep_vkb_side_pane_g1_ParamLimits

0xde20,	// (0x0002f12d) fep_vkb_side_pane_g1

0x7510,	// (0x0002881d) grid_vkb_side_pane_ParamLimits

0x7510,	// (0x0002881d) grid_vkb_side_pane

0x262a,	// (0x00023937) bg_popup_fep_shadow_pane_g2

0x2633,	// (0x00023940) bg_popup_fep_shadow_pane_g3

0x263b,	// (0x00023948) bg_popup_fep_shadow_pane_g4

0x2644,	// (0x00023951) bg_popup_fep_shadow_pane_g5

0x264e,	// (0x0002395b) bg_popup_fep_shadow_pane_g6

0x2656,	// (0x00023963) bg_popup_fep_shadow_pane_g7

0x30df,	// (0x000243ec) bg_popup_fep_shadow_pane_g8

0x756f,	// (0x0002887c) grid_vkb_keypad_number_pane_ParamLimits

0x756f,	// (0x0002887c) grid_vkb_keypad_number_pane

0x7583,	// (0x00028890) grid_vkb_keypad_pane_ParamLimits

0x7583,	// (0x00028890) grid_vkb_keypad_pane

0x75a9,	// (0x000288b6) fep_vkb_bottom_pane_g1_ParamLimits

0x75a9,	// (0x000288b6) fep_vkb_bottom_pane_g1

0x75d2,	// (0x000288df) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x75d2,	// (0x000288df) grid_vkb_keypad_bottom_left_pane

0x75e7,	// (0x000288f4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x75e7,	// (0x000288f4) grid_vkb_keypad_bottom_right_pane

0x75fc,	// (0x00028909) fep_vkb_top_text_pane_g1

0xde67,	// (0x0002f174) fep_vkb_top_text_pane_t1

0xde79,	// (0x0002f186) cell_vkb_side_pane_ParamLimits

0xde79,	// (0x0002f186) cell_vkb_side_pane

0x721e,	// (0x0002852b) cell_vkb_side_pane_g1

0x766b,	// (0x00028978) cell_vkb_keypad_pane_ParamLimits

0x766b,	// (0x00028978) cell_vkb_keypad_pane

0x76f8,	// (0x00028a05) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00030e69) bg_popup_fep_shadow_pane_g

0x721e,	// (0x0002852b) cell_hwr_side_pane_g1

0x721e,	// (0x0002852b) cell_hwr_side_pane_g2

0x7702,	// (0x00028a0f) cell_vkb_keypad_pane_t1

0xde8f,	// (0x0002f19c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xde8f,	// (0x0002f19c) cell_vkb_keypad_bottom_left_pane

0xdea4,	// (0x0002f1b1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdea4,	// (0x0002f1b1) cell_vkb_keypad_bottom_right_pane

0x721e,	// (0x0002852b) cell_vkb_keypad_bottom_left_pane_g1

0x721e,	// (0x0002852b) cell_vkb_keypad_bottom_right_pane_g1

0x7766,	// (0x00028a73) cell_vkb_keypad_number_pane_ParamLimits

0x7766,	// (0x00028a73) cell_vkb_keypad_number_pane

0x7785,	// (0x00028a92) cell_vkb_keypad_number_pane_g1

0x778f,	// (0x00028a9c) cell_vkb_keypad_number_pane_g2

0x7798,	// (0x00028aa5) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00030e5b) cell_vkb_keypad_number_pane_g

0x7702,	// (0x00028a0f) cell_vkb_keypad_number_pane_t1

0x77c2,	// (0x00028acf) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00030e56) cell_hwr_side_pane_g

0x77db,	// (0x00028ae8) cell_hwr_side_pane_t1

0x2668,	// (0x00023975) cell_hwr_side_pane_t1_copy1

0x74a8,	// (0x000287b5) cell_hwr_candidate_pane_g1

0x2676,	// (0x00023983) cell_hwr_candidate_pane_t1

0x721e,	// (0x0002852b) cell_vkb_candidate_pane_g2

0x7861,	// (0x00028b6e) cell_vkb_candidate_pane_t1

0xc3d0,	// (0x0002d6dd) bg_popup_fep_shadow_pane_ParamLimits

0xc3d0,	// (0x0002d6dd) bg_popup_fep_shadow_pane

0xdd1b,	// (0x0002f028) bg_fep_hwr_top_pane_g4

0x72b2,	// (0x000285bf) bg_hwr_side_pane_g1_ParamLimits

0x72b2,	// (0x000285bf) bg_hwr_side_pane_g1

0xcd76,	// (0x0002e083) cell_hwr_side_pane_ParamLimits

0xcd76,	// (0x0002e083) cell_hwr_side_pane

0x2579,	// (0x00023886) fep_hwr_write_pane_g1_ParamLimits

0x2579,	// (0x00023886) fep_hwr_write_pane_g1

0x2586,	// (0x00023893) fep_hwr_write_pane_g2_ParamLimits

0x2586,	// (0x00023893) fep_hwr_write_pane_g2

0x2593,	// (0x000238a0) fep_hwr_write_pane_g3_ParamLimits

0x2593,	// (0x000238a0) fep_hwr_write_pane_g3

0xcd96,	// (0x0002e0a3) fep_hwr_write_pane_g4_ParamLimits

0xcd96,	// (0x0002e0a3) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x00030e28) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x00030e28) fep_hwr_write_pane_g

0xdd1b,	// (0x0002f028) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xdd1b,	// (0x0002f028) bg_fep_hwr_candidate_pane_g2

0x25b6,	// (0x000238c3) cell_hwr_candidate_pane_ParamLimits

0x25b6,	// (0x000238c3) cell_hwr_candidate_pane

0x2608,	// (0x00023915) fep_hwr_candidate_pane_g1_ParamLimits

0x7312,	// (0x0002861f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7312,	// (0x0002861f) bg_popup_fep_shadow_pane_cp2

0x74a8,	// (0x000287b5) fep_vkb_top_pane_g4_ParamLimits

0x74a8,	// (0x000287b5) fep_vkb_top_pane_g4

0x74ee,	// (0x000287fb) fep_vkb_side_pane_g2_ParamLimits

0x74ee,	// (0x000287fb) fep_vkb_side_pane_g2

0xb40b,	// (0x0002c718) list_setting_pane_t4_ParamLimits

0xb40b,	// (0x0002c718) list_setting_pane_t4

0xb4a7,	// (0x0002c7b4) list_setting_number_pane_t5_ParamLimits

0xb4a7,	// (0x0002c7b4) list_setting_number_pane_t5

0x36fa,	// (0x00024a07) list_double_heading_pane_cp2_ParamLimits

0x36fa,	// (0x00024a07) list_double_heading_pane_cp2

0x3072,	// (0x0002437f) list_double_heading_pane_g1_cp2_ParamLimits

0x3072,	// (0x0002437f) list_double_heading_pane_g1_cp2

0x307e,	// (0x0002438b) list_double_heading_pane_g2_cp2_ParamLimits

0x307e,	// (0x0002438b) list_double_heading_pane_g2_cp2

0x786f,	// (0x00028b7c) list_double_heading_pane_t1_cp2_ParamLimits

0x786f,	// (0x00028b7c) list_double_heading_pane_t1_cp2

0x7885,	// (0x00028b92) list_double_heading_pane_t2_cp2_ParamLimits

0x7885,	// (0x00028b92) list_double_heading_pane_t2_cp2

0xe7e9,	// (0x0002faf6) aid_value_unit2

0x0f5f,	// (0x0002226c) popup_preview_fixed_window

0x145b,	// (0x00022768) bg_popup_preview_window_pane_cp02

0x7897,	// (0x00028ba4) list_preview_fixed_pane

0x78dd,	// (0x00028bea) list_empty_pane_fp_ParamLimits

0x78dd,	// (0x00028bea) list_empty_pane_fp

0x78dd,	// (0x00028bea) list_single_cale_day_pane_fp_ParamLimits

0x78dd,	// (0x00028bea) list_single_cale_day_pane_fp

0x78dd,	// (0x00028bea) list_single_graphic_heading_pane_fp_ParamLimits

0x78dd,	// (0x00028bea) list_single_graphic_heading_pane_fp

0x78dd,	// (0x00028bea) list_single_graphic_pane_fp_ParamLimits

0x78dd,	// (0x00028bea) list_single_graphic_pane_fp

0x78dd,	// (0x00028bea) list_single_heading_pane_fp_ParamLimits

0x78dd,	// (0x00028bea) list_single_heading_pane_fp

0x78dd,	// (0x00028bea) list_single_pane_fp_ParamLimits

0x78dd,	// (0x00028bea) list_single_pane_fp

0x78f6,	// (0x00028c03) list_single_pane_fp_g1_ParamLimits

0x78f6,	// (0x00028c03) list_single_pane_fp_g1

0x08c3,	// (0x00021bd0) list_single_pane_fp_g2_ParamLimits

0x08c3,	// (0x00021bd0) list_single_pane_fp_g2

0x08cf,	// (0x00021bdc) list_single_pane_fp_g3_ParamLimits

0x08cf,	// (0x00021bdc) list_single_pane_fp_g3

0x7902,	// (0x00028c0f) list_single_pane_fp_g4_ParamLimits

0x7902,	// (0x00028c0f) list_single_pane_fp_g4

0x0003,

0xfb7d,	// (0x00030e8a) list_single_pane_fp_g_ParamLimits

0xfb7d,	// (0x00030e8a) list_single_pane_fp_g

0x08e3,	// (0x00021bf0) list_single_pane_fp_t1_ParamLimits

0x08e3,	// (0x00021bf0) list_single_pane_fp_t1

0x08fa,	// (0x00021c07) list_single_graphic_pane_fp_g1_ParamLimits

0x08fa,	// (0x00021c07) list_single_graphic_pane_fp_g1

0x78f6,	// (0x00028c03) list_single_graphic_pane_fp_g2_ParamLimits

0x78f6,	// (0x00028c03) list_single_graphic_pane_fp_g2

0x08c3,	// (0x00021bd0) list_single_graphic_pane_fp_g3_ParamLimits

0x08c3,	// (0x00021bd0) list_single_graphic_pane_fp_g3

0x08cf,	// (0x00021bdc) list_single_graphic_pane_fp_g4_ParamLimits

0x08cf,	// (0x00021bdc) list_single_graphic_pane_fp_g4

0x7902,	// (0x00028c0f) list_single_graphic_pane_fp_g5_ParamLimits

0x7902,	// (0x00028c0f) list_single_graphic_pane_fp_g5

0x0004,

0xfb86,	// (0x00030e93) list_single_graphic_pane_fp_g_ParamLimits

0xfb86,	// (0x00030e93) list_single_graphic_pane_fp_g

0x0906,	// (0x00021c13) list_single_graphic_pane_fp_t1_ParamLimits

0x0906,	// (0x00021c13) list_single_graphic_pane_fp_t1

0x08fa,	// (0x00021c07) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x08fa,	// (0x00021c07) list_single_graphic_heading_pane_fp_g1

0x78f6,	// (0x00028c03) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x78f6,	// (0x00028c03) list_single_graphic_heading_pane_fp_g2

0x08c3,	// (0x00021bd0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x08c3,	// (0x00021bd0) list_single_graphic_heading_pane_fp_g3

0x08cf,	// (0x00021bdc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x08cf,	// (0x00021bdc) list_single_graphic_heading_pane_fp_g4

0x7902,	// (0x00028c0f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7902,	// (0x00028c0f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00030e93) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00030e93) list_single_graphic_heading_pane_fp_g

0x091c,	// (0x00021c29) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x091c,	// (0x00021c29) list_single_graphic_heading_pane_fp_t1

0x0932,	// (0x00021c3f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0932,	// (0x00021c3f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x00030e9e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x00030e9e) list_single_graphic_heading_pane_fp_t

0x0944,	// (0x00021c51) list_single_cale_day_pane_fp_g1_ParamLimits

0x0944,	// (0x00021c51) list_single_cale_day_pane_fp_g1

0x790e,	// (0x00028c1b) list_single_cale_day_pane_fp_g2_ParamLimits

0x790e,	// (0x00028c1b) list_single_cale_day_pane_fp_g2

0x097c,	// (0x00021c89) list_single_cale_day_pane_fp_g3_ParamLimits

0x097c,	// (0x00021c89) list_single_cale_day_pane_fp_g3

0x09a4,	// (0x00021cb1) list_single_cale_day_pane_fp_g4_ParamLimits

0x09a4,	// (0x00021cb1) list_single_cale_day_pane_fp_g4

0x09c8,	// (0x00021cd5) list_single_cale_day_pane_fp_g5_ParamLimits

0x09c8,	// (0x00021cd5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb96,	// (0x00030ea3) list_single_cale_day_pane_fp_g_ParamLimits

0xfb96,	// (0x00030ea3) list_single_cale_day_pane_fp_g

0x09ec,	// (0x00021cf9) list_single_cale_day_pane_fp_t1_ParamLimits

0x09ec,	// (0x00021cf9) list_single_cale_day_pane_fp_t1

0x0a12,	// (0x00021d1f) list_single_cale_day_pane_fp_t2_ParamLimits

0x0a12,	// (0x00021d1f) list_single_cale_day_pane_fp_t2

0x0a2b,	// (0x00021d38) list_single_cale_day_pane_fp_t3_ParamLimits

0x0a2b,	// (0x00021d38) list_single_cale_day_pane_fp_t3

0x0002,

0xfba1,	// (0x00030eae) list_single_cale_day_pane_fp_t_ParamLimits

0xfba1,	// (0x00030eae) list_single_cale_day_pane_fp_t

0x78f6,	// (0x00028c03) list_empty_pane_fp_g1_ParamLimits

0x78f6,	// (0x00028c03) list_empty_pane_fp_g1

0x0a44,	// (0x00021d51) list_empty_pane_fp_t1

0x0a52,	// (0x00021d5f) list_empty_pane_fp_t2

0x0001,

0xfba8,	// (0x00030eb5) list_empty_pane_fp_t

0x78f6,	// (0x00028c03) list_single_heading_pane_fp_g1_ParamLimits

0x78f6,	// (0x00028c03) list_single_heading_pane_fp_g1

0x08c3,	// (0x00021bd0) list_single_heading_pane_fp_g2_ParamLimits

0x08c3,	// (0x00021bd0) list_single_heading_pane_fp_g2

0x08cf,	// (0x00021bdc) list_single_heading_pane_fp_g3_ParamLimits

0x08cf,	// (0x00021bdc) list_single_heading_pane_fp_g3

0x0002,

0xfbad,	// (0x00030eba) list_single_heading_pane_fp_g_ParamLimits

0xfbad,	// (0x00030eba) list_single_heading_pane_fp_g

0x0a60,	// (0x00021d6d) list_single_heading_pane_fp_t1_ParamLimits

0x0a60,	// (0x00021d6d) list_single_heading_pane_fp_t1

0x0a72,	// (0x00021d7f) list_single_heading_pane_fp_t2_ParamLimits

0x0a72,	// (0x00021d7f) list_single_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x00030ec1) list_single_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x00030ec1) list_single_heading_pane_fp_t

0x326d,	// (0x0002457a) aid_size_cell_fast

0x13cd,	// (0x000226da) soft_indicator_pane_cp1_t1

0x32aa,	// (0x000245b7) cell_app_pane_cp2_ParamLimits

0x32aa,	// (0x000245b7) cell_app_pane_cp2

0x2442,	// (0x0002374f) fep_hwr_candidate_drop_down_list_pane

0xdd29,	// (0x0002f036) fep_hwr_candidate_pane_g3_ParamLimits

0xdd29,	// (0x0002f036) fep_hwr_candidate_pane_g3

0xdd36,	// (0x0002f043) fep_hwr_candidate_pane_g4_ParamLimits

0xdd36,	// (0x0002f043) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x00030e35) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x00030e35) fep_hwr_candidate_pane_g

0x73a2,	// (0x000286af) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x73a2,	// (0x000286af) fep_vkb_candidate_drop_down_list_pane

0x77ca,	// (0x00028ad7) fep_vkb_candidate_pane_g3

0x77d2,	// (0x00028adf) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00030e62) fep_vkb_candidate_pane_g

0x74a8,	// (0x000287b5) cell_hwr_candidate_pane_g1_ParamLimits

0x77e9,	// (0x00028af6) cell_hwr_candidate_pane_g3_ParamLimits

0x77e9,	// (0x00028af6) cell_hwr_candidate_pane_g3

0x780a,	// (0x00028b17) cell_hwr_candidate_pane_g4_ParamLimits

0x780a,	// (0x00028b17) cell_hwr_candidate_pane_g4

0x0002,

0xfb6f,	// (0x00030e7c) cell_hwr_candidate_pane_g_ParamLimits

0xfb6f,	// (0x00030e7c) cell_hwr_candidate_pane_g

0x782b,	// (0x00028b38) cell_vkb_candidate_pane_g3_ParamLimits

0x782b,	// (0x00028b38) cell_vkb_candidate_pane_g3

0x7846,	// (0x00028b53) cell_vkb_candidate_pane_g4_ParamLimits

0x7846,	// (0x00028b53) cell_vkb_candidate_pane_g4

0x791a,	// (0x00028c27) cell_app_pane_cp2_g1_ParamLimits

0x791a,	// (0x00028c27) cell_app_pane_cp2_g1

0x7938,	// (0x00028c45) cell_app_pane_cp2_g2_ParamLimits

0x7938,	// (0x00028c45) cell_app_pane_cp2_g2

0x0001,

0xfbb9,	// (0x00030ec6) cell_app_pane_cp2_g_ParamLimits

0xfbb9,	// (0x00030ec6) cell_app_pane_cp2_g

0x7944,	// (0x00028c51) cell_app_pane_cp2_t1_ParamLimits

0x7944,	// (0x00028c51) cell_app_pane_cp2_t1

0x3058,	// (0x00024365) grid_highlight_pane_cp1_ParamLimits

0x3058,	// (0x00024365) grid_highlight_pane_cp1

0x2694,	// (0x000239a1) cell_hwr_candidate_pane_cp1_ParamLimits

0x2694,	// (0x000239a1) cell_hwr_candidate_pane_cp1

0x74a8,	// (0x000287b5) fep_hwr_candidate_drop_down_list_pane_g1

0x7956,	// (0x00028c63) fep_hwr_candidate_drop_down_list_pane_g2

0x7963,	// (0x00028c70) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00030ecb) fep_hwr_candidate_drop_down_list_pane_g

0x26b8,	// (0x000239c5) fep_hwr_candidate_drop_down_list_scroll_pane

0x26c1,	// (0x000239ce) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x26c1,	// (0x000239ce) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x26ce,	// (0x000239db) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x26ce,	// (0x000239db) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x26db,	// (0x000239e8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x26db,	// (0x000239e8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x782b,	// (0x00028b38) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x782b,	// (0x00028b38) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7846,	// (0x00028b53) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7846,	// (0x00028b53) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x26e8,	// (0x000239f5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x26e8,	// (0x000239f5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2703,	// (0x00023a10) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2703,	// (0x00023a10) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x271e,	// (0x00023a2b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x271e,	// (0x00023a2b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x00030ed2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x00030ed2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7970,	// (0x00028c7d) cell_vkb_candidate_pane_cp1_ParamLimits

0x7970,	// (0x00028c7d) cell_vkb_candidate_pane_cp1

0x74a8,	// (0x000287b5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x74a8,	// (0x000287b5) fep_vkb_candidate_drop_down_list_pane_g1

0x7956,	// (0x00028c63) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7956,	// (0x00028c63) fep_vkb_candidate_drop_down_list_pane_g2

0x7963,	// (0x00028c70) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7963,	// (0x00028c70) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00030ecb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x00030ecb) fep_vkb_candidate_drop_down_list_pane_g

0x7996,	// (0x00028ca3) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7996,	// (0x00028ca3) fep_vkb_candidate_drop_down_list_scroll_pane

0x79a3,	// (0x00028cb0) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x79a3,	// (0x00028cb0) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x79b0,	// (0x00028cbd) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x79b0,	// (0x00028cbd) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x79bc,	// (0x00028cc9) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x79bc,	// (0x00028cc9) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x77e9,	// (0x00028af6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x77e9,	// (0x00028af6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x780a,	// (0x00028b17) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x780a,	// (0x00028b17) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x79c8,	// (0x00028cd5) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x79c8,	// (0x00028cd5) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x79e9,	// (0x00028cf6) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x79e9,	// (0x00028cf6) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7a0a,	// (0x00028d17) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7a0a,	// (0x00028d17) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x00030ee3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x00030ee3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbb0f,	// (0x0002ce1c) title_pane_g1_ParamLimits

0xbb20,	// (0x0002ce2d) title_pane_g2_ParamLimits

0xf56a,	// (0x00030877) title_pane_g_ParamLimits

0x36b8,	// (0x000249c5) aid_call2_pane

0x36c0,	// (0x000249cd) aid_call_pane

0x36c8,	// (0x000249d5) popup_clock_analogue_window_g1

0x36c8,	// (0x000249d5) popup_clock_analogue_window_g2

0x1bc9,	// (0x00022ed6) popup_clock_analogue_window_g3

0x1bd2,	// (0x00022edf) popup_clock_analogue_window_g4

0xe7fb,	// (0x0002fb08) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x00030a1c) popup_clock_analogue_window_g

0x1bda,	// (0x00022ee7) popup_clock_analogue_window_t1

0x1be8,	// (0x00022ef5) clock_digital_number_pane_ParamLimits

0x1be8,	// (0x00022ef5) clock_digital_number_pane

0x1bf4,	// (0x00022f01) clock_digital_number_pane_cp02_ParamLimits

0x1bf4,	// (0x00022f01) clock_digital_number_pane_cp02

0x1c00,	// (0x00022f0d) clock_digital_number_pane_cp03_ParamLimits

0x1c00,	// (0x00022f0d) clock_digital_number_pane_cp03

0x1c0c,	// (0x00022f19) clock_digital_number_pane_cp04_ParamLimits

0x1c0c,	// (0x00022f19) clock_digital_number_pane_cp04

0x1c18,	// (0x00022f25) clock_digital_separator_pane_ParamLimits

0x1c18,	// (0x00022f25) clock_digital_separator_pane

0x1c24,	// (0x00022f31) popup_clock_digital_window_t1_ParamLimits

0x1c24,	// (0x00022f31) popup_clock_digital_window_t1

0xe7fb,	// (0x0002fb08) clock_digital_number_pane_g1

0xe7fb,	// (0x0002fb08) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x00030a27) clock_digital_number_pane_g

0xe7fb,	// (0x0002fb08) clock_digital_separator_pane_g1

0xe7fb,	// (0x0002fb08) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x00030a27) clock_digital_separator_pane_g

0xcaf9,	// (0x0002de06) aid_fill_nsta_ParamLimits

0xd285,	// (0x0002e592) indicator_nsta_pane_ParamLimits

0x494f,	// (0x00025c5c) popup_clock_analogue_window

0x494f,	// (0x00025c5c) popup_clock_digital_window

0x322e,	// (0x0002453b) grid_indicator_nsta_pane_ParamLimits

0x6c44,	// (0x00027f51) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x00030db5) clock_nsta_pane_t

0x1b8d,	// (0x00022e9a) aid_size_max_handle

0xc02b,	// (0x0002d338) aid_size_min_handle

0x3cb6,	// (0x00024fc3) editor_scroll_pane

0x7a25,	// (0x00028d32) ex_editor_pane

0x31da,	// (0x000244e7) scroll_pane_cp13

0x19f7,	// (0x00022d04) scroll_pane_cp14

0x36f2,	// (0x000249ff) scroll_pane_cp36

0xc0b8,	// (0x0002d3c5) list_single_graphic_hl_pane_cp2_ParamLimits

0xc0b8,	// (0x0002d3c5) list_single_graphic_hl_pane_cp2

0xd9c5,	// (0x0002ecd2) list_single_graphic_hl_pane_ParamLimits

0xd9c5,	// (0x0002ecd2) list_single_graphic_hl_pane

0x0a88,	// (0x00021d95) aid_size_min_hl_cp1

0x7a2d,	// (0x00028d3a) list_highlight_pane_cp34_ParamLimits

0x7a2d,	// (0x00028d3a) list_highlight_pane_cp34

0x7a3e,	// (0x00028d4b) list_single_graphic_hl_pane_g1_ParamLimits

0x7a3e,	// (0x00028d4b) list_single_graphic_hl_pane_g1

0xb771,	// (0x0002ca7e) list_single_graphic_hl_pane_g2_ParamLimits

0xb771,	// (0x0002ca7e) list_single_graphic_hl_pane_g2

0xb771,	// (0x0002ca7e) list_single_graphic_hl_pane_g3_ParamLimits

0xb771,	// (0x0002ca7e) list_single_graphic_hl_pane_g3

0xf55e,	// (0x0003086b) list_single_graphic_hl_pane_g4_ParamLimits

0xf55e,	// (0x0003086b) list_single_graphic_hl_pane_g4

0xb77d,	// (0x0002ca8a) list_single_graphic_hl_pane_g5_ParamLimits

0xb77d,	// (0x0002ca8a) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x00030ef4) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x00030ef4) list_single_graphic_hl_pane_g

0xb791,	// (0x0002ca9e) list_single_graphic_hl_pane_t1_ParamLimits

0xb791,	// (0x0002ca9e) list_single_graphic_hl_pane_t1

0x7a4b,	// (0x00028d58) aid_size_min_hl_cp2

0x7a54,	// (0x00028d61) list_highlight_pane_cp34_cp2_ParamLimits

0x7a54,	// (0x00028d61) list_highlight_pane_cp34_cp2

0x7a3e,	// (0x00028d4b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7a3e,	// (0x00028d4b) list_single_graphic_hl_pane_g1_cp2

0x7a61,	// (0x00028d6e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7a61,	// (0x00028d6e) list_single_graphic_hl_pane_g2_cp2

0x7a6d,	// (0x00028d7a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7a6d,	// (0x00028d7a) list_single_graphic_hl_pane_g3_cp2

0x2739,	// (0x00023a46) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2739,	// (0x00023a46) list_single_graphic_hl_pane_g4_cp2

0x7a7b,	// (0x00028d88) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7a7b,	// (0x00028d88) list_single_graphic_hl_pane_g5_cp2

0xc280,	// (0x0002d58d) control_pane_g4_ParamLimits

0xc280,	// (0x0002d58d) control_pane_g4

0x403c,	// (0x00025349) bg_popup_sub_pane_cp10_ParamLimits

0x7228,	// (0x00028535) list_choice_list_pane_ParamLimits

0x7237,	// (0x00028544) scroll_pane_cp23

0x145b,	// (0x00022768) bg_popup_preview_window_pane_cp02_ParamLimits

0x7897,	// (0x00028ba4) list_preview_fixed_pane_ParamLimits

0x78ad,	// (0x00028bba) list_preview_fixed_pane_cp_ParamLimits

0x78ad,	// (0x00028bba) list_preview_fixed_pane_cp

0x78b9,	// (0x00028bc6) popup_preview_fixed_window_g1_ParamLimits

0x78b9,	// (0x00028bc6) popup_preview_fixed_window_g1

0x78c5,	// (0x00028bd2) popup_preview_fixed_window_g2_ParamLimits

0x78c5,	// (0x00028bd2) popup_preview_fixed_window_g2

0x0002,

0xfb76,	// (0x00030e83) popup_preview_fixed_window_g_ParamLimits

0xfb76,	// (0x00030e83) popup_preview_fixed_window_g

0x1aff,	// (0x00022e0c) aid_navi_side_left_pane_ParamLimits

0x1b14,	// (0x00022e21) aid_navi_side_right_pane_ParamLimits

0x1b2c,	// (0x00022e39) navi_icon_pane_stacon_ParamLimits

0x1b40,	// (0x00022e4d) navi_navi_pane_stacon_ParamLimits

0x1b2c,	// (0x00022e39) navi_text_pane_stacon_ParamLimits

0xe7f1,	// (0x0002fafe) main_text_info_pane

0x7aa5,	// (0x00028db2) listscroll_text_info_pane

0x7aad,	// (0x00028dba) list_text_info_pane_ParamLimits

0x7aad,	// (0x00028dba) list_text_info_pane

0x7abc,	// (0x00028dc9) scroll_pane_cp24_ParamLimits

0x7abc,	// (0x00028dc9) scroll_pane_cp24

0xdebf,	// (0x0002f1cc) list_text_info_pane_t1_ParamLimits

0xdebf,	// (0x0002f1cc) list_text_info_pane_t1

0xc3f6,	// (0x0002d703) popup_fast_swap2_window_ParamLimits

0xc3f6,	// (0x0002d703) popup_fast_swap2_window

0x7aff,	// (0x00028e0c) aid_size_cell_fast2

0xe7f1,	// (0x0002fafe) bg_popup_window_pane_cp17

0x5002,	// (0x0002630f) heading_pane_cp2

0x16bb,	// (0x000229c8) listscroll_fast2_pane

0x7b09,	// (0x00028e16) grid_fast2_pane

0x7b13,	// (0x00028e20) listscroll_fast2_pane_g1

0x7b1d,	// (0x00028e2a) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x00030eff) listscroll_fast2_pane_g

0x31da,	// (0x000244e7) scroll_pane_cp26

0x7b27,	// (0x00028e34) cell_fast2_pane_ParamLimits

0x7b27,	// (0x00028e34) cell_fast2_pane

0x7b3e,	// (0x00028e4b) cell_fast2_pane_g1

0x7b47,	// (0x00028e54) cell_fast2_pane_g2

0x7b50,	// (0x00028e5d) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x00030f04) cell_fast2_pane_g

0x17b4,	// (0x00022ac1) grid_highlight_pane_cp9

0x17c9,	// (0x00022ad6) main_eswt_pane_ParamLimits

0x17c9,	// (0x00022ad6) main_eswt_pane

0x7ad1,	// (0x00028dde) list_single_text_info_pane

0x7b58,	// (0x00028e65) eswt_ctrl_button_pane

0x7b58,	// (0x00028e65) eswt_ctrl_canvas_pane

0x7b60,	// (0x00028e6d) eswt_ctrl_combo_pane

0x7b58,	// (0x00028e65) eswt_ctrl_default_pane

0x7b58,	// (0x00028e65) eswt_ctrl_label_pane

0x7b68,	// (0x00028e75) eswt_ctrl_wait_pane

0x7b70,	// (0x00028e7d) eswt_shell_pane

0xe7f1,	// (0x0002fafe) listscroll_eswt_app_pane

0x7b90,	// (0x00028e9d) popup_eswt_tasktip_window_ParamLimits

0x7b90,	// (0x00028e9d) popup_eswt_tasktip_window

0x4c6a,	// (0x00025f77) bg_popup_window_pane_cp18

0x7ba1,	// (0x00028eae) eswt_control_pane_g1_ParamLimits

0x7ba1,	// (0x00028eae) eswt_control_pane_g1

0x7bae,	// (0x00028ebb) eswt_control_pane_g2_ParamLimits

0x7bae,	// (0x00028ebb) eswt_control_pane_g2

0x7bbb,	// (0x00028ec8) eswt_control_pane_g3_ParamLimits

0x7bbb,	// (0x00028ec8) eswt_control_pane_g3

0x7bc8,	// (0x00028ed5) eswt_control_pane_g4_ParamLimits

0x7bc8,	// (0x00028ed5) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x00030f0b) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x00030f0b) eswt_control_pane_g

0x3058,	// (0x00024365) bg_button_pane_ParamLimits

0x3058,	// (0x00024365) bg_button_pane

0x17c9,	// (0x00022ad6) common_borders_pane_copy2_ParamLimits

0x17c9,	// (0x00022ad6) common_borders_pane_copy2

0x7bd5,	// (0x00028ee2) control_button_pane_g1_ParamLimits

0x7bd5,	// (0x00028ee2) control_button_pane_g1

0x7be1,	// (0x00028eee) control_button_pane_g2_ParamLimits

0x7be1,	// (0x00028eee) control_button_pane_g2

0x7bed,	// (0x00028efa) control_button_pane_g3_ParamLimits

0x7bed,	// (0x00028efa) control_button_pane_g3

0x0002,

0xfc07,	// (0x00030f14) control_button_pane_g_ParamLimits

0xfc07,	// (0x00030f14) control_button_pane_g

0x7c01,	// (0x00028f0e) control_button_pane_t1

0x7c0f,	// (0x00028f1c) control_button_pane_t2

0x0001,

0xfc0e,	// (0x00030f1b) control_button_pane_t

0x4b78,	// (0x00025e85) bg_button_pane_g1

0x4b80,	// (0x00025e8d) bg_button_pane_g2

0x4b88,	// (0x00025e95) bg_button_pane_g3

0x4b90,	// (0x00025e9d) bg_button_pane_g4

0x4b98,	// (0x00025ea5) bg_button_pane_g5

0x4ba0,	// (0x00025ead) bg_button_pane_g6

0x4ba8,	// (0x00025eb5) bg_button_pane_g7

0x4bb0,	// (0x00025ebd) bg_button_pane_g8

0x4bb8,	// (0x00025ec5) bg_button_pane_g9

0x0008,

0xf86d,	// (0x00030b7a) bg_button_pane_g

0x71e3,	// (0x000284f0) common_borders_pane_ParamLimits

0x71e3,	// (0x000284f0) common_borders_pane

0x7ba1,	// (0x00028eae) eswt_control_pane_g1_copy1_ParamLimits

0x7ba1,	// (0x00028eae) eswt_control_pane_g1_copy1

0x7bae,	// (0x00028ebb) eswt_control_pane_g2_copy1_ParamLimits

0x7bae,	// (0x00028ebb) eswt_control_pane_g2_copy1

0x7bbb,	// (0x00028ec8) eswt_control_pane_g3_copy1_ParamLimits

0x7bbb,	// (0x00028ec8) eswt_control_pane_g3_copy1

0x7bc8,	// (0x00028ed5) eswt_control_pane_g4_copy1_ParamLimits

0x7bc8,	// (0x00028ed5) eswt_control_pane_g4_copy1

0x721e,	// (0x0002852b) bg_eswt_ctrl_canvas_pane_g1

0x71e3,	// (0x000284f0) common_borders_pane_cp2_ParamLimits

0x71e3,	// (0x000284f0) common_borders_pane_cp2

0x71e3,	// (0x000284f0) common_borders_pane_cp3_ParamLimits

0x71e3,	// (0x000284f0) common_borders_pane_cp3

0x7c1d,	// (0x00028f2a) separator_horizontal_pane

0x7c25,	// (0x00028f32) separator_vertical_pane

0x7ba1,	// (0x00028eae) eswt_control_pane_g1_copy2_ParamLimits

0x7ba1,	// (0x00028eae) eswt_control_pane_g1_copy2

0x7bae,	// (0x00028ebb) eswt_control_pane_g2_copy2_ParamLimits

0x7bae,	// (0x00028ebb) eswt_control_pane_g2_copy2

0x7bbb,	// (0x00028ec8) eswt_control_pane_g3_copy2_ParamLimits

0x7bbb,	// (0x00028ec8) eswt_control_pane_g3_copy2

0x7bc8,	// (0x00028ed5) eswt_control_pane_g4_copy2_ParamLimits

0x7bc8,	// (0x00028ed5) eswt_control_pane_g4_copy2

0xe7f1,	// (0x0002fafe) common_borders_pane_cp4

0x7c2e,	// (0x00028f3b) separator_horizontal_pane_g1

0x7c37,	// (0x00028f44) separator_horizontal_pane_g2

0x7c40,	// (0x00028f4d) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x00030f20) separator_horizontal_pane_g

0x7ba1,	// (0x00028eae) eswt_control_pane_g1_copy3_ParamLimits

0x7ba1,	// (0x00028eae) eswt_control_pane_g1_copy3

0x7bae,	// (0x00028ebb) eswt_control_pane_g2_copy3_ParamLimits

0x7bae,	// (0x00028ebb) eswt_control_pane_g2_copy3

0x7bbb,	// (0x00028ec8) eswt_control_pane_g3_copy3_ParamLimits

0x7bbb,	// (0x00028ec8) eswt_control_pane_g3_copy3

0x7bc8,	// (0x00028ed5) eswt_control_pane_g4_copy3_ParamLimits

0x7bc8,	// (0x00028ed5) eswt_control_pane_g4_copy3

0xe7f1,	// (0x0002fafe) common_borders_pane_cp5

0x7c49,	// (0x00028f56) separator_vertical_pane_g1

0x7c52,	// (0x00028f5f) separator_vertical_pane_g2

0x7c5b,	// (0x00028f68) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x00030f27) separator_vertical_pane_g

0x7ba1,	// (0x00028eae) eswt_control_pane_g1_copy4_ParamLimits

0x7ba1,	// (0x00028eae) eswt_control_pane_g1_copy4

0x7bae,	// (0x00028ebb) eswt_control_pane_g2_copy4_ParamLimits

0x7bae,	// (0x00028ebb) eswt_control_pane_g2_copy4

0x7bbb,	// (0x00028ec8) eswt_control_pane_g3_copy4_ParamLimits

0x7bbb,	// (0x00028ec8) eswt_control_pane_g3_copy4

0x7bc8,	// (0x00028ed5) eswt_control_pane_g4_copy4_ParamLimits

0x7bc8,	// (0x00028ed5) eswt_control_pane_g4_copy4

0xdee1,	// (0x0002f1ee) eswt_ctrl_combo_button_pane

0xdee9,	// (0x0002f1f6) eswt_ctrl_input_pane

0xdef1,	// (0x0002f1fe) popup_choice_list_window_cp70

0xdef9,	// (0x0002f206) eswt_ctrl_input_pane_t1

0xe7f1,	// (0x0002fafe) input_focus_pane_cp70

0x71e3,	// (0x000284f0) bg_button_pane_cp70_ParamLimits

0x71e3,	// (0x000284f0) bg_button_pane_cp70

0xdf07,	// (0x0002f214) eswt_ctrl_combo_button_pane_g1

0x7c92,	// (0x00028f9f) wait_bar_pane_cp70

0x4c6a,	// (0x00025f77) bg_popup_window_pane_cp70_ParamLimits

0x4c6a,	// (0x00025f77) bg_popup_window_pane_cp70

0x7c9a,	// (0x00028fa7) popup_eswt_tasktip_window_t1

0x7cb0,	// (0x00028fbd) wait_bar_pane_cp71_ParamLimits

0x7cb0,	// (0x00028fbd) wait_bar_pane_cp71

0x7cbc,	// (0x00028fc9) grid_eswt_app_pane

0x3505,	// (0x00024812) scroll_pane_cp70

0xdf0f,	// (0x0002f21c) cell_eswt_app_pane_ParamLimits

0xdf0f,	// (0x0002f21c) cell_eswt_app_pane

0xdf41,	// (0x0002f24e) cell_eswt_app_pane_g1_ParamLimits

0xdf41,	// (0x0002f24e) cell_eswt_app_pane_g1

0xdf70,	// (0x0002f27d) cell_eswt_app_pane_g2_ParamLimits

0xdf70,	// (0x0002f27d) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x00030f2e) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x00030f2e) cell_eswt_app_pane_g

0xdf99,	// (0x0002f2a6) cell_eswt_app_pane_t1_ParamLimits

0xdf99,	// (0x0002f2a6) cell_eswt_app_pane_t1

0x7d81,	// (0x0002908e) grid_highlight_pane_cp70_ParamLimits

0x7d81,	// (0x0002908e) grid_highlight_pane_cp70

0x60fb,	// (0x00027408) set_content_pane_g1

0x3f66,	// (0x00025273) status_small_volume_pane

0x2745,	// (0x00023a52) status_small_volume_pane_g1

0x274d,	// (0x00023a5a) volume_small2_pane

0x2756,	// (0x00023a63) volume_small2_pane_g1

0x275f,	// (0x00023a6c) volume_small2_pane_g2

0x2768,	// (0x00023a75) volume_small2_pane_g3

0x2771,	// (0x00023a7e) volume_small2_pane_g4

0x277a,	// (0x00023a87) volume_small2_pane_g5

0x2783,	// (0x00023a90) volume_small2_pane_g6

0x278c,	// (0x00023a99) volume_small2_pane_g7

0x2795,	// (0x00023aa2) volume_small2_pane_g8

0x279e,	// (0x00023aab) volume_small2_pane_g9

0x27a7,	// (0x00023ab4) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x00030f33) volume_small2_pane_g

0x75fc,	// (0x00028909) fep_vkb_top_text_pane_g1_ParamLimits

0xde67,	// (0x0002f174) fep_vkb_top_text_pane_t1_ParamLimits

0x78d1,	// (0x00028bde) popup_preview_fixed_window_g3_ParamLimits

0x78d1,	// (0x00028bde) popup_preview_fixed_window_g3

0xca8c,	// (0x0002dd99) popup_toolbar_trans_pane

0xd82a,	// (0x0002eb37) aid_height_set_list_ParamLimits

0x5fb1,	// (0x000272be) aid_size_parent_ParamLimits

0x403c,	// (0x00025349) list_highlight_pane_cp2_ParamLimits

0x60fb,	// (0x00027408) set_content_pane_g1_ParamLimits

0xb75d,	// (0x0002ca6a) list_single_image_pane_ParamLimits

0xb75d,	// (0x0002ca6a) list_single_image_pane

0xdfcb,	// (0x0002f2d8) aid_size_cell_image_ParamLimits

0xdfcb,	// (0x0002f2d8) aid_size_cell_image

0xdfd8,	// (0x0002f2e5) grid_single_image_pane_ParamLimits

0xdfd8,	// (0x0002f2e5) grid_single_image_pane

0x3072,	// (0x0002437f) list_single_image_pane_g1_ParamLimits

0x3072,	// (0x0002437f) list_single_image_pane_g1

0x307e,	// (0x0002438b) list_single_image_pane_g2_ParamLimits

0x307e,	// (0x0002438b) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x00030f48) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x00030f48) list_single_image_pane_g

0x7da8,	// (0x000290b5) list_single_image_pane_t1_ParamLimits

0x7da8,	// (0x000290b5) list_single_image_pane_t1

0xdfe6,	// (0x0002f2f3) cell_image_list_pane_ParamLimits

0xdfe6,	// (0x0002f2f3) cell_image_list_pane

0xe000,	// (0x0002f30d) cell_image_list_pane_g1

0xe009,	// (0x0002f316) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x00030f4d) cell_image_list_pane_g

0x7de6,	// (0x000290f3) aid_size_cell_tb_trans_pane

0x3058,	// (0x00024365) bg_tb_trans_pane

0x7df8,	// (0x00029105) grid_tb_trans_pane

0x4b78,	// (0x00025e85) bg_tb_trans_pane_g1

0x4b80,	// (0x00025e8d) bg_tb_trans_pane_g2

0x4b88,	// (0x00025e95) bg_tb_trans_pane_g3

0x4b90,	// (0x00025e9d) bg_tb_trans_pane_g4

0x4b98,	// (0x00025ea5) bg_tb_trans_pane_g5

0x4bb0,	// (0x00025ebd) bg_tb_trans_pane_g6

0x4bb8,	// (0x00025ec5) bg_tb_trans_pane_g7

0x4ba0,	// (0x00025ead) bg_tb_trans_pane_g8

0x4ba8,	// (0x00025eb5) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x00030f52) bg_tb_trans_pane_g

0x7e0c,	// (0x00029119) cell_toolbar_trans_pane_ParamLimits

0x7e0c,	// (0x00029119) cell_toolbar_trans_pane

0x721e,	// (0x0002852b) cell_toolbar_trans_pane_g1

0xdc0f,	// (0x0002ef1c) list_form2_midp_pane_t1

0xdc1d,	// (0x0002ef2a) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00030dfb) list_form2_midp_pane_t

0x6e5b,	// (0x00028168) scroll_pane_cp51_ParamLimits

0x7022,	// (0x0002832f) form2_midp_wait_pane_g1

0x702b,	// (0x00028338) form2_midp_wait_pane_g2

0x7034,	// (0x00028341) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00030e10) form2_midp_wait_pane_g

0x1141,	// (0x0002244e) list_highlight_pane_cp21_ParamLimits

0x7078,	// (0x00028385) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7087,	// (0x00028394) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x05f8,	// (0x00021905) list_single_2graphic_im_pane_ParamLimits

0x05f8,	// (0x00021905) list_single_2graphic_im_pane

0xe012,	// (0x0002f31f) list_single_2graphic_im_pane_g1_ParamLimits

0xe012,	// (0x0002f31f) list_single_2graphic_im_pane_g1

0xe023,	// (0x0002f330) list_single_2graphic_im_pane_g2_ParamLimits

0xe023,	// (0x0002f330) list_single_2graphic_im_pane_g2

0xe02f,	// (0x0002f33c) list_single_2graphic_im_pane_g3_ParamLimits

0xe02f,	// (0x0002f33c) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x00030f65) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x00030f65) list_single_2graphic_im_pane_g

0xe043,	// (0x0002f350) list_single_2graphic_im_pane_t1_ParamLimits

0xe043,	// (0x0002f350) list_single_2graphic_im_pane_t1

0x78dd,	// (0x00028bea) list_single_graphic_2heading_pane_fp_ParamLimits

0x78dd,	// (0x00028bea) list_single_graphic_2heading_pane_fp

0x08fa,	// (0x00021c07) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x08fa,	// (0x00021c07) list_single_graphic_2heading_pane_fp_g1

0x78f6,	// (0x00028c03) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x78f6,	// (0x00028c03) list_single_graphic_2heading_pane_fp_g2

0x08c3,	// (0x00021bd0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x08c3,	// (0x00021bd0) list_single_graphic_2heading_pane_fp_g3

0x08cf,	// (0x00021bdc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x08cf,	// (0x00021bdc) list_single_graphic_2heading_pane_fp_g4

0x7902,	// (0x00028c0f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7902,	// (0x00028c0f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00030e93) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00030e93) list_single_graphic_2heading_pane_fp_g

0x0ac7,	// (0x00021dd4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0ac7,	// (0x00021dd4) list_single_graphic_2heading_pane_fp_t1

0x0932,	// (0x00021c3f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0932,	// (0x00021c3f) list_single_graphic_2heading_pane_fp_t2

0x0add,	// (0x00021dea) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0add,	// (0x00021dea) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x00030f6e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x00030f6e) list_single_graphic_2heading_pane_fp_t

0x72be,	// (0x000285cb) fep_hwr_write_pane_g5_ParamLimits

0x72be,	// (0x000285cb) fep_hwr_write_pane_g5

0x72ca,	// (0x000285d7) fep_hwr_write_pane_g6_ParamLimits

0x72ca,	// (0x000285d7) fep_hwr_write_pane_g6

0x7b70,	// (0x00028e7d) eswt_shell_pane_ParamLimits

0x4c6a,	// (0x00025f77) bg_popup_window_pane_cp18_ParamLimits

0x5ef7,	// (0x00027204) heading_pane_cp70

0x7c9a,	// (0x00028fa7) popup_eswt_tasktip_window_t1_ParamLimits

0xcb4f,	// (0x0002de5c) aid_touch_tab_arrow_left

0xcb65,	// (0x0002de72) aid_touch_tab_arrow_right

0xbb38,	// (0x0002ce45) title_pane_g3_ParamLimits

0xbb38,	// (0x0002ce45) title_pane_g3

0x3017,	// (0x00024324) set_value_pane_g1

0xca8c,	// (0x0002dd99) popup_toolbar_trans_pane_ParamLimits

0x7de6,	// (0x000290f3) aid_size_cell_tb_trans_pane_ParamLimits

0x3058,	// (0x00024365) bg_tb_trans_pane_ParamLimits

0x7df8,	// (0x00029105) grid_tb_trans_pane_ParamLimits

0x145b,	// (0x00022768) cont_note_pane_ParamLimits

0x145b,	// (0x00022768) cont_note_pane

0x17c9,	// (0x00022ad6) cont_snote2_single_text_pane_ParamLimits

0x17c9,	// (0x00022ad6) cont_snote2_single_text_pane

0x17c9,	// (0x00022ad6) cont_snote2_single_graphic_pane_ParamLimits

0x17c9,	// (0x00022ad6) cont_snote2_single_graphic_pane

0x521e,	// (0x0002652b) cont_note_wait_pane_ParamLimits

0x521e,	// (0x0002652b) cont_note_wait_pane

0x521e,	// (0x0002652b) cont_note_image_pane_ParamLimits

0x521e,	// (0x0002652b) cont_note_image_pane

0x7ea0,	// (0x000291ad) popup_note2_window_g1_ParamLimits

0x7ea0,	// (0x000291ad) popup_note2_window_g1

0x7ed1,	// (0x000291de) popup_note2_window_t1_ParamLimits

0x7ed1,	// (0x000291de) popup_note2_window_t1

0x7f16,	// (0x00029223) popup_note2_window_t2_ParamLimits

0x7f16,	// (0x00029223) popup_note2_window_t2

0x7f5b,	// (0x00029268) popup_note2_window_t3_ParamLimits

0x7f5b,	// (0x00029268) popup_note2_window_t3

0x7fa0,	// (0x000292ad) popup_note2_window_t4_ParamLimits

0x7fa0,	// (0x000292ad) popup_note2_window_t4

0x14df,	// (0x000227ec) popup_note2_window_t5_ParamLimits

0x14df,	// (0x000227ec) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x00030f7a) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x00030f7a) popup_note2_window_t

0x7fcf,	// (0x000292dc) popup_note2_image_window_g1_ParamLimits

0x7fcf,	// (0x000292dc) popup_note2_image_window_g1

0x7fdb,	// (0x000292e8) popup_note2_image_window_g2_ParamLimits

0x7fdb,	// (0x000292e8) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x00030f85) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x00030f85) popup_note2_image_window_g

0x7fed,	// (0x000292fa) popup_note2_image_window_t1_ParamLimits

0x7fed,	// (0x000292fa) popup_note2_image_window_t1

0x8005,	// (0x00029312) popup_note2_image_window_t2_ParamLimits

0x8005,	// (0x00029312) popup_note2_image_window_t2

0x801d,	// (0x0002932a) popup_note2_image_window_t3_ParamLimits

0x801d,	// (0x0002932a) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x00030f8a) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x00030f8a) popup_note2_image_window_t

0x522c,	// (0x00026539) popup_note2_wait_window_g1_ParamLimits

0x522c,	// (0x00026539) popup_note2_wait_window_g1

0x8039,	// (0x00029346) popup_note2_wait_window_g2_ParamLimits

0x8039,	// (0x00029346) popup_note2_wait_window_g2

0x5244,	// (0x00026551) popup_note2_wait_window_g3_ParamLimits

0x5244,	// (0x00026551) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x00030f91) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x00030f91) popup_note2_wait_window_g

0x8045,	// (0x00029352) popup_note2_wait_window_t1_ParamLimits

0x8045,	// (0x00029352) popup_note2_wait_window_t1

0x8063,	// (0x00029370) popup_note2_wait_window_t2_ParamLimits

0x8063,	// (0x00029370) popup_note2_wait_window_t2

0x8081,	// (0x0002938e) popup_note2_wait_window_t3_ParamLimits

0x8081,	// (0x0002938e) popup_note2_wait_window_t3

0x8093,	// (0x000293a0) popup_note2_wait_window_t4_ParamLimits

0x8093,	// (0x000293a0) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x00030f98) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x00030f98) popup_note2_wait_window_t

0x80a5,	// (0x000293b2) wait_bar2_pane_ParamLimits

0x80a5,	// (0x000293b2) wait_bar2_pane

0x80bd,	// (0x000293ca) popup_snote2_single_text_window_g1_ParamLimits

0x80bd,	// (0x000293ca) popup_snote2_single_text_window_g1

0x80e5,	// (0x000293f2) popup_snote2_single_text_window_t1_ParamLimits

0x80e5,	// (0x000293f2) popup_snote2_single_text_window_t1

0x8131,	// (0x0002943e) popup_snote2_single_text_window_t2_ParamLimits

0x8131,	// (0x0002943e) popup_snote2_single_text_window_t2

0x817d,	// (0x0002948a) popup_snote2_single_text_window_t3_ParamLimits

0x817d,	// (0x0002948a) popup_snote2_single_text_window_t3

0x81be,	// (0x000294cb) popup_snote2_single_text_window_t4_ParamLimits

0x81be,	// (0x000294cb) popup_snote2_single_text_window_t4

0x81f4,	// (0x00029501) popup_snote2_single_text_window_t5_ParamLimits

0x81f4,	// (0x00029501) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x00030fa1) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x00030fa1) popup_snote2_single_text_window_t

0x821f,	// (0x0002952c) popup_snote2_single_graphic_window_g1_ParamLimits

0x821f,	// (0x0002952c) popup_snote2_single_graphic_window_g1

0x8247,	// (0x00029554) popup_snote2_single_graphic_window_g2_ParamLimits

0x8247,	// (0x00029554) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x00030fac) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x00030fac) popup_snote2_single_graphic_window_g

0x826f,	// (0x0002957c) popup_snote2_single_graphic_window_t1_ParamLimits

0x826f,	// (0x0002957c) popup_snote2_single_graphic_window_t1

0x82bb,	// (0x000295c8) popup_snote2_single_graphic_window_t2_ParamLimits

0x82bb,	// (0x000295c8) popup_snote2_single_graphic_window_t2

0x817d,	// (0x0002948a) popup_snote2_single_graphic_window_t3_ParamLimits

0x817d,	// (0x0002948a) popup_snote2_single_graphic_window_t3

0x81be,	// (0x000294cb) popup_snote2_single_graphic_window_t4_ParamLimits

0x81be,	// (0x000294cb) popup_snote2_single_graphic_window_t4

0x81f4,	// (0x00029501) popup_snote2_single_graphic_window_t5_ParamLimits

0x81f4,	// (0x00029501) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x00030fb1) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x00030fb1) popup_snote2_single_graphic_window_t

0x6d05,	// (0x00028012) clock_nsta_pane_cp2_t1

0x6d05,	// (0x00028012) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x00030dd1) clock_nsta_pane_cp2_t

0x025d,	// (0x0002156a) form_field_data_wide_pane_g1_ParamLimits

0x3072,	// (0x0002437f) form_field_data_wide_pane_g2_ParamLimits

0x3072,	// (0x0002437f) form_field_data_wide_pane_g2

0x307e,	// (0x0002438b) form_field_data_wide_pane_g3_ParamLimits

0x307e,	// (0x0002438b) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0003099f) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0003099f) form_field_data_wide_pane_g

0xdb17,	// (0x0002ee24) grid_touch_3_pane_ParamLimits

0xdb17,	// (0x0002ee24) grid_touch_3_pane

0xe074,	// (0x0002f381) cell_touch_3_pane_ParamLimits

0xe074,	// (0x0002f381) cell_touch_3_pane

0x721e,	// (0x0002852b) cell_touch_3_pane_g1

0x721e,	// (0x0002852b) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x00030e56) cell_touch_3_pane_g

0x1511,	// (0x0002281e) cont_query_data_pane

0x1519,	// (0x00022826) cont_query_data_pane_cp1

0x833a,	// (0x00029647) button_value_adjust_pane_cp7

0x8342,	// (0x0002964f) query_popup_pane_cp3

0x3792,	// (0x00024a9f) bg_popup_sub_pane_cp22_ParamLimits

0x1c43,	// (0x00022f50) navi_navi_volume_pane_cp2

0x1c5e,	// (0x00022f6b) popup_side_volume_key_window_g2

0x1c6d,	// (0x00022f7a) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x00030a31) popup_side_volume_key_window_g

0x1c8a,	// (0x00022f97) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x00030a38) popup_side_volume_key_window_t

0x3a4d,	// (0x00024d5a) popup_side_volume_key_window_ParamLimits

0xb21c,	// (0x0002c529) list_double_graphic_pane_g4_ParamLimits

0xb21c,	// (0x0002c529) list_double_graphic_pane_g4

0xb747,	// (0x0002ca54) list_single_2heading_msg_pane_ParamLimits

0xb747,	// (0x0002ca54) list_single_2heading_msg_pane

0xb7a7,	// (0x0002cab4) list_single_2heading_msg_pane_g1_ParamLimits

0xb7a7,	// (0x0002cab4) list_single_2heading_msg_pane_g1

0xb7b3,	// (0x0002cac0) list_single_2heading_msg_pane_g2_ParamLimits

0xb7b3,	// (0x0002cac0) list_single_2heading_msg_pane_g2

0xb7c6,	// (0x0002cad3) list_single_2heading_msg_pane_g3_ParamLimits

0xb7c6,	// (0x0002cad3) list_single_2heading_msg_pane_g3

0xb7d2,	// (0x0002cadf) list_single_2heading_msg_pane_g4_ParamLimits

0xb7d2,	// (0x0002cadf) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x00030fbc) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x00030fbc) list_single_2heading_msg_pane_g

0xb7ea,	// (0x0002caf7) list_single_2heading_msg_pane_t1_ParamLimits

0xb7ea,	// (0x0002caf7) list_single_2heading_msg_pane_t1

0xb812,	// (0x0002cb1f) list_single_2heading_msg_pane_t2_ParamLimits

0xb812,	// (0x0002cb1f) list_single_2heading_msg_pane_t2

0xb87d,	// (0x0002cb8a) list_single_2heading_msg_pane_t3_ParamLimits

0xb87d,	// (0x0002cb8a) list_single_2heading_msg_pane_t3

0x0bc2,	// (0x00021ecf) list_single_2heading_msg_pane_t4_ParamLimits

0x0bc2,	// (0x00021ecf) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x00030fc5) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x00030fc5) list_single_2heading_msg_pane_t

0xe80f,	// (0x0002fb1c) title_pane_g4_ParamLimits

0xe80f,	// (0x0002fb1c) title_pane_g4

0x1a4f,	// (0x00022d5c) title_pane_stacon_g3_ParamLimits

0x1a4f,	// (0x00022d5c) title_pane_stacon_g3

0x7e63,	// (0x00029170) list_single_2graphic_im_pane_g4_ParamLimits

0x7e63,	// (0x00029170) list_single_2graphic_im_pane_g4

0x5c94,	// (0x00026fa1) popup_side_volume_key_window_cp

0x650a,	// (0x00027817) main_idle_act2_pane_t1

0x2015,	// (0x00023322) toolbar_button_pane_g10

0xbec5,	// (0x0002d1d2) popup_toolbar_window_cp1

0x6cf6,	// (0x00028003) clock_nsta_pane_cp_t1

0x6cf6,	// (0x00028003) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x00030dcc) clock_nsta_pane_cp_t

0x1c43,	// (0x00022f50) navi_navi_volume_pane_cp2_ParamLimits

0x1c52,	// (0x00022f5f) popup_side_volume_key_window_g1_ParamLimits

0x1c5e,	// (0x00022f6b) popup_side_volume_key_window_g2_ParamLimits

0x1c6d,	// (0x00022f7a) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x00030a31) popup_side_volume_key_window_g_ParamLimits

0x242e,	// (0x0002373b) fep_hwr_aid_pane

0xdd1b,	// (0x0002f028) bg_fep_hwr_top_pane_g4_ParamLimits

0x728e,	// (0x0002859b) fep_hwr_top_pane_g1_ParamLimits

0x72a0,	// (0x000285ad) fep_hwr_top_pane_g2_ParamLimits

0x24e9,	// (0x000237f6) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00030e21) fep_hwr_top_pane_g_ParamLimits

0x24fe,	// (0x0002380b) fep_hwr_top_text_pane_ParamLimits

0x5a49,	// (0x00026d56) aid_touch_tab_arrow_arrow_2

0x5a52,	// (0x00026d5f) aid_touch_tab_arrow_left_2

0x2442,	// (0x0002374f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2479,	// (0x00023786) fep_hwr_prediction_pane

0x73f6,	// (0x00028703) fep_vkb_prediction_pane

0xde47,	// (0x0002f154) fep_vkb_side_pane_g3_ParamLimits

0xde47,	// (0x0002f154) fep_vkb_side_pane_g3

0x74a8,	// (0x000287b5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7956,	// (0x00028c63) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7963,	// (0x00028c70) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbe,	// (0x00030ecb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8369,	// (0x00029676) fep_hwr_prediction_pane_g1

0x27b0,	// (0x00023abd) fep_hwr_prediction_pane_g2

0x27b8,	// (0x00023ac5) fep_hwr_prediction_pane_g3

0x27c0,	// (0x00023acd) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x00030fce) fep_hwr_prediction_pane_g

0x8369,	// (0x00029676) fep_vkb_prediction_pane_g1

0x8373,	// (0x00029680) fep_vkb_prediction_pane_g2

0x837b,	// (0x00029688) fep_vkb_prediction_pane_g3

0x8383,	// (0x00029690) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x00030fd7) fep_vkb_prediction_pane_g

0x68b8,	// (0x00027bc5) slider_set_pane_g3

0x68cc,	// (0x00027bd9) slider_set_pane_g4

0x68e4,	// (0x00027bf1) slider_set_pane_g5

0x68b8,	// (0x00027bc5) slider_set_pane_g6

0x22fe,	// (0x0002360b) slider_set_pane_g7

0x6142,	// (0x0002744f) slider_form_pane_g3

0x614b,	// (0x00027458) slider_form_pane_g4

0x6153,	// (0x00027460) slider_form_pane_g5

0x6142,	// (0x0002744f) slider_form_pane_g6

0xd999,	// (0x0002eca6) slider_form_pane_g7

0x67d8,	// (0x00027ae5) slider_set_pane_vc_g3

0x67e1,	// (0x00027aee) slider_set_pane_vc_g4

0x67ea,	// (0x00027af7) slider_set_pane_vc_g5

0x67d8,	// (0x00027ae5) slider_set_pane_vc_g6

0x67f3,	// (0x00027b00) slider_set_pane_vc_g7

0x67d8,	// (0x00027ae5) slider_form_pane_vc_g1

0x67e1,	// (0x00027aee) slider_form_pane_vc_g2

0x67ea,	// (0x00027af7) slider_form_pane_vc_g3

0x67d8,	// (0x00027ae5) slider_form_pane_vc_g4

0x69ea,	// (0x00027cf7) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x00030da5) slider_form_pane_vc_g

0xe7f1,	// (0x0002fafe) main_idle_act3_pane

0x838b,	// (0x00029698) ai3_links_pane

0xe0be,	// (0x0002f3cb) popup_ai3_data_window_ParamLimits

0xe0be,	// (0x0002f3cb) popup_ai3_data_window

0xe7f1,	// (0x0002fafe) grid_ai3_links_pane

0xe0dc,	// (0x0002f3e9) cell_ai3_links_pane_ParamLimits

0xe0dc,	// (0x0002f3e9) cell_ai3_links_pane

0x83cc,	// (0x000296d9) bg_popup_sub_pane_cp11

0x83d9,	// (0x000296e6) cell_ai3_links_pane_g1

0xe7f1,	// (0x0002fafe) bg_popup_sub_pane_cp12

0x83fe,	// (0x0002970b) heading_ai3_data_pane

0x8406,	// (0x00029713) list_ai3_gene_pane

0x8412,	// (0x0002971f) popup_ai3_data_window_g1

0x841a,	// (0x00029727) heading_ai3_data_pane_g1

0x8422,	// (0x0002972f) heading_ai3_data_pane_t1

0x8430,	// (0x0002973d) list_double_ai3_gene_pane_ParamLimits

0x8430,	// (0x0002973d) list_double_ai3_gene_pane

0x843d,	// (0x0002974a) list_single_ai3_gene_pane_ParamLimits

0x843d,	// (0x0002974a) list_single_ai3_gene_pane

0x71e3,	// (0x000284f0) list_highlight_pane_cp7_ParamLimits

0x71e3,	// (0x000284f0) list_highlight_pane_cp7

0x844a,	// (0x00029757) list_single_a13_gene_pane_t1_ParamLimits

0x844a,	// (0x00029757) list_single_a13_gene_pane_t1

0x8461,	// (0x0002976e) list_single_ai3_gene_pane_g1

0x846a,	// (0x00029777) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x00030fe0) list_single_ai3_gene_pane_g

0x8472,	// (0x0002977f) list_double_ai3_gene_pane_g1_ParamLimits

0x8472,	// (0x0002977f) list_double_ai3_gene_pane_g1

0x847e,	// (0x0002978b) list_double_ai3_gene_pane_t1_ParamLimits

0x847e,	// (0x0002978b) list_double_ai3_gene_pane_t1

0x849a,	// (0x000297a7) list_double_ai3_gene_pane_t2_ParamLimits

0x849a,	// (0x000297a7) list_double_ai3_gene_pane_t2

0x84af,	// (0x000297bc) list_double_ai3_gene_pane_t3_ParamLimits

0x84af,	// (0x000297bc) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x00030fe5) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x00030fe5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0af3,	// (0x00021e00) aid_size_min_col_2

0xe0a8,	// (0x0002f3b5) aid_size_min_msg_ParamLimits

0xe0a8,	// (0x0002f3b5) aid_size_min_msg

0xde5b,	// (0x0002f168) fep_vkb_top_text_pane_g2_ParamLimits

0xde5b,	// (0x0002f168) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00030e51) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00030e51) fep_vkb_top_text_pane_g

0xe7f1,	// (0x0002fafe) main_hc_apps_shell_pane

0x84cc,	// (0x000297d9) grid_hc_apps_pane_ParamLimits

0x84cc,	// (0x000297d9) grid_hc_apps_pane

0x84db,	// (0x000297e8) list_hc_apps_pane

0x84e3,	// (0x000297f0) scroll_pane_cp37_ParamLimits

0x84e3,	// (0x000297f0) scroll_pane_cp37

0xe0f6,	// (0x0002f403) cell_hc_apps_pane_ParamLimits

0xe0f6,	// (0x0002f403) cell_hc_apps_pane

0xe1c0,	// (0x0002f4cd) cell_hc_apps_pane_g1_ParamLimits

0xe1c0,	// (0x0002f4cd) cell_hc_apps_pane_g1

0x85d8,	// (0x000298e5) cell_hc_apps_pane_g2_ParamLimits

0x85d8,	// (0x000298e5) cell_hc_apps_pane_g2

0x85f4,	// (0x00029901) cell_hc_apps_pane_g3_ParamLimits

0x85f4,	// (0x00029901) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x00030fec) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x00030fec) cell_hc_apps_pane_g

0xe1ed,	// (0x0002f4fa) cell_hc_apps_pane_t1_ParamLimits

0xe1ed,	// (0x0002f4fa) cell_hc_apps_pane_t1

0x145b,	// (0x00022768) grid_highlight_pane_cp10_ParamLimits

0x145b,	// (0x00022768) grid_highlight_pane_cp10

0xe22d,	// (0x0002f53a) list_single_hc_apps_pane_ParamLimits

0xe22d,	// (0x0002f53a) list_single_hc_apps_pane

0xe267,	// (0x0002f574) list_single_hc_apps_pane_g1

0xb8eb,	// (0x0002cbf8) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x00030ff3) list_single_hc_apps_pane_g

0xb904,	// (0x0002cc11) list_single_hc_apps_pane_g2_copy1

0xb920,	// (0x0002cc2d) list_single_hc_apps_pane_t1

0x1141,	// (0x0002244e) bg_set_opt_pane_cp_ParamLimits

0x118d,	// (0x0002249a) setting_slider_pane_t1_ParamLimits

0x11a3,	// (0x000224b0) setting_slider_pane_t2_ParamLimits

0x11bd,	// (0x000224ca) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00030887) setting_slider_pane_t_ParamLimits

0x11d5,	// (0x000224e2) slider_set_pane_ParamLimits

0x1ef1,	// (0x000231fe) control_pane_g5_ParamLimits

0x1ef1,	// (0x000231fe) control_pane_g5

0x5f63,	// (0x00027270) slider_set_pane_g1_ParamLimits

0x22f2,	// (0x000235ff) slider_set_pane_g2_ParamLimits

0x68b8,	// (0x00027bc5) slider_set_pane_g3_ParamLimits

0x68cc,	// (0x00027bd9) slider_set_pane_g4_ParamLimits

0x68e4,	// (0x00027bf1) slider_set_pane_g5_ParamLimits

0x68b8,	// (0x00027bc5) slider_set_pane_g6_ParamLimits

0x22fe,	// (0x0002360b) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x00030c78) slider_set_pane_g_ParamLimits

0x3b32,	// (0x00024e3f) navi_icon_text_pane_ParamLimits

0xcb19,	// (0x0002de26) aid_fill_nsta_2_ParamLimits

0xcb4f,	// (0x0002de5c) aid_touch_tab_arrow_left_ParamLimits

0xcb65,	// (0x0002de72) aid_touch_tab_arrow_right_ParamLimits

0xd25b,	// (0x0002e568) clock_nsta_pane_ParamLimits

0xd6e8,	// (0x0002e9f5) navi_icon_pane_g1_ParamLimits

0xd6f4,	// (0x0002ea01) navi_text_pane_t1_ParamLimits

0xdbf1,	// (0x0002eefe) navi_icon_text_pane_g1_ParamLimits

0xdbfd,	// (0x0002ef0a) navi_icon_text_pane_t1_ParamLimits

0xe267,	// (0x0002f574) list_single_hc_apps_pane_g1_ParamLimits

0xb8eb,	// (0x0002cbf8) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x00030ff3) list_single_hc_apps_pane_g_ParamLimits

0xb904,	// (0x0002cc11) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb920,	// (0x0002cc2d) list_single_hc_apps_pane_t1_ParamLimits

0xbaa4,	// (0x0002cdb1) popup_toolbar2_fixed_window_ParamLimits

0xbaa4,	// (0x0002cdb1) popup_toolbar2_fixed_window

0xca82,	// (0x0002dd8f) popup_toolbar2_float_window

0xe7f1,	// (0x0002fafe) bg_popup_sub_pane_cp27

0x86ae,	// (0x000299bb) grid_toolbar2_float_pane

0xe7f1,	// (0x0002fafe) bg_popup_sub_pane_cp26

0x86ae,	// (0x000299bb) grid_toolbar2_fixed_pane

0xe280,	// (0x0002f58d) cell_toolbar2_fixed_pane_ParamLimits

0xe280,	// (0x0002f58d) cell_toolbar2_fixed_pane

0xe29d,	// (0x0002f5aa) cell_toolbar2_fixed_pane_g1

0x86cf,	// (0x000299dc) toolbar2_fixed_button_pane

0x4b78,	// (0x00025e85) toolbar2_fixed_button_pane_g1

0x4b80,	// (0x00025e8d) toolbar2_fixed_button_pane_g2

0x4b88,	// (0x00025e95) toolbar2_fixed_button_pane_g3

0x4b90,	// (0x00025e9d) toolbar2_fixed_button_pane_g4

0x4b98,	// (0x00025ea5) toolbar2_fixed_button_pane_g5

0x4ba0,	// (0x00025ead) toolbar2_fixed_button_pane_g6

0x4ba8,	// (0x00025eb5) toolbar2_fixed_button_pane_g7

0x4bb0,	// (0x00025ebd) toolbar2_fixed_button_pane_g8

0x4bb8,	// (0x00025ec5) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x00030b7a) toolbar2_fixed_button_pane_g

0x86d7,	// (0x000299e4) cell_toolbar2_float_pane_ParamLimits

0x86d7,	// (0x000299e4) cell_toolbar2_float_pane

0x86e8,	// (0x000299f5) cell_toolbar2_float_pane_g1

0x86cf,	// (0x000299dc) toolbar2_fixed_button_pane_cp

0xdd43,	// (0x0002f050) fep_vkb_accented_list_pane_ParamLimits

0xdd43,	// (0x0002f050) fep_vkb_accented_list_pane

0x2660,	// (0x0002396d) bg_popup_fep_shadow_pane_g9

0x3cb6,	// (0x00024fc3) bg_popup_fep_shadow_pane_cp3

0x31c1,	// (0x000244ce) list_accented_list_pane

0x86f1,	// (0x000299fe) list_single_accented_list_pane_ParamLimits

0x86f1,	// (0x000299fe) list_single_accented_list_pane

0x3cb6,	// (0x00024fc3) list_highlight_pane_cp10

0x8702,	// (0x00029a0f) list_single_accented_list_pane_t1

0xc99e,	// (0x0002dcab) popup_slider_window_ParamLimits

0xc99e,	// (0x0002dcab) popup_slider_window

0x834a,	// (0x00029657) aid_indentation_list_msg

0xe3a8,	// (0x0002f6b5) bg_popup_window_pane_cp19

0x883c,	// (0x00029b49) popup_slider_window_g1

0x8858,	// (0x00029b65) popup_slider_window_g2

0x8874,	// (0x00029b81) popup_slider_window_g3

0x0005,

0xfceb,	// (0x00030ff8) popup_slider_window_g

0x88d0,	// (0x00029bdd) popup_slider_window_t1

0x8944,	// (0x00029c51) small_volume_slider_vertical_pane

0x721e,	// (0x0002852b) small_volume_slider_vertical_pane_g1

0x721e,	// (0x0002852b) small_volume_slider_vertical_pane_g2

0x8960,	// (0x00029c6d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x0003100a) small_volume_slider_vertical_pane_g

0xba0e,	// (0x0002cd1b) area_side_right_pane_ParamLimits

0xba0e,	// (0x0002cd1b) area_side_right_pane

0xcdab,	// (0x0002e0b8) aid_size_side_button_ParamLimits

0xcdab,	// (0x0002e0b8) aid_size_side_button

0xcdc4,	// (0x0002e0d1) grid_sctrl_middle_pane_ParamLimits

0xcdc4,	// (0x0002e0d1) grid_sctrl_middle_pane

0x27fc,	// (0x00023b09) sctrl_sk_bottom_pane

0x280d,	// (0x00023b1a) sctrl_sk_top_pane

0x281f,	// (0x00023b2c) aid_touch_sctrl_top

0x145b,	// (0x00022768) bg_sctrl_sk_pane_ParamLimits

0x145b,	// (0x00022768) bg_sctrl_sk_pane

0x282c,	// (0x00023b39) sctrl_sk_top_pane_g1

0x2839,	// (0x00023b46) sctrl_sk_top_pane_t1

0x281f,	// (0x00023b2c) aid_touch_sctrl_bottom

0x145b,	// (0x00022768) bg_sctrl_sk_pane_cp_ParamLimits

0x145b,	// (0x00022768) bg_sctrl_sk_pane_cp

0x2854,	// (0x00023b61) sctrl_sk_bottom_pane_g1

0x2839,	// (0x00023b46) sctrl_sk_bottom_pane_t1

0xcdde,	// (0x0002e0eb) cell_sctrl_middle_pane_ParamLimits

0xcdde,	// (0x0002e0eb) cell_sctrl_middle_pane

0xcdf1,	// (0x0002e0fe) aid_touch_sctrl_middle_ParamLimits

0xcdf1,	// (0x0002e0fe) aid_touch_sctrl_middle

0xcdfe,	// (0x0002e10b) bg_sctrl_middle_pane_ParamLimits

0xcdfe,	// (0x0002e10b) bg_sctrl_middle_pane

0x89eb,	// (0x00029cf8) cell_sctrl_middle_pane_g1_ParamLimits

0x89eb,	// (0x00029cf8) cell_sctrl_middle_pane_g1

0xce0c,	// (0x0002e119) cell_sctrl_middle_pane_g2_ParamLimits

0xce0c,	// (0x0002e119) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x00031016) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x00031016) cell_sctrl_middle_pane_g

0x4b78,	// (0x00025e85) bg_sctrl_middle_pane_g1

0x4b80,	// (0x00025e8d) bg_sctrl_middle_pane_g2

0x4b88,	// (0x00025e95) bg_sctrl_middle_pane_g3

0x4b90,	// (0x00025e9d) bg_sctrl_middle_pane_g4

0x4b98,	// (0x00025ea5) bg_sctrl_middle_pane_g5

0x4ba0,	// (0x00025ead) bg_sctrl_middle_pane_g6

0x4ba8,	// (0x00025eb5) bg_sctrl_middle_pane_g7

0x4bb0,	// (0x00025ebd) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x0003101b) bg_sctrl_middle_pane_g

0x4bb8,	// (0x00025ec5) bg_sctrl_middle_pane_g8_copy1

0x4b78,	// (0x00025e85) bg_sctrl_sk_pane_g1

0x4b80,	// (0x00025e8d) bg_sctrl_sk_pane_g2

0x4b88,	// (0x00025e95) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x00030b7a) bg_sctrl_sk_pane_g

0x1987,	// (0x00022c94) aid_size_touch_scroll_bar

0x4b90,	// (0x00025e9d) bg_sctrl_sk_pane_g4

0x4b98,	// (0x00025ea5) bg_sctrl_sk_pane_g5

0x4ba0,	// (0x00025ead) bg_sctrl_sk_pane_g6

0x4ba8,	// (0x00025eb5) bg_sctrl_sk_pane_g7

0x4bb0,	// (0x00025ebd) bg_sctrl_sk_pane_g8

0x4bb8,	// (0x00025ec5) bg_sctrl_sk_pane_g9

0x40e6,	// (0x000253f3) popup_fep_china_hwr2_fs_candidate_window

0xc45a,	// (0x0002d767) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc45a,	// (0x0002d767) popup_fep_china_hwr2_fs_control_window

0x74a8,	// (0x000287b5) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x00031011) sctrl_sk_top_pane_g

0xe460,	// (0x0002f76d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe460,	// (0x0002f76d) aid_fep_china_hwr2_fs_cell

0xe476,	// (0x0002f783) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe476,	// (0x0002f783) bg_popup_fep_shadow_pane_cp4

0xe48d,	// (0x0002f79a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe48d,	// (0x0002f79a) bg_popup_fep_shadow_pane_cp5

0xe49f,	// (0x0002f7ac) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe49f,	// (0x0002f7ac) popup_fep_china_hwr2_fs_control_bar_grid

0xe4b3,	// (0x0002f7c0) popup_fep_china_hwr2_fs_control_funtion_grid

0x89bf,	// (0x00029ccc) aid_fep_china_hwr2_fs_candi_cell

0xe7f1,	// (0x0002fafe) bg_popup_fep_shadow_pane_cp6

0x89c9,	// (0x00029cd6) popup_fep_china_hwr2_fs_candidate_grid

0xe4bb,	// (0x0002f7c8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe4bb,	// (0x0002f7c8) cell_fep_china_hwr2_fs_funtion_grid

0x721e,	// (0x0002852b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x89eb,	// (0x00029cf8) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x89eb,	// (0x00029cf8) cell_fep_china_hwr2_fs_funtion_grid_g1

0x89f9,	// (0x00029d06) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x89f9,	// (0x00029d06) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x0003102c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x0003102c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe4d3,	// (0x0002f7e0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe4d3,	// (0x0002f7e0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe4e8,	// (0x0002f7f5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe4e8,	// (0x0002f7f5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x00031031) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x00031031) cell_fep_china_hwr2_fs_funtion_grid_t

0x8a40,	// (0x00029d4d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8a48,	// (0x00029d55) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8a50,	// (0x00029d5d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x00031036) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8a58,	// (0x00029d65) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8a58,	// (0x00029d65) cell_fep_china_hwr2_fs_candidate_grid

0x8a77,	// (0x00029d84) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8a7f,	// (0x00029d8c) popup_fep_china_hwr2_fs_candidate_grid_g21

0x721e,	// (0x0002852b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x721e,	// (0x0002852b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x00030e56) cell_fep_china_hwr2_fs_candidate_grid_g

0x8a87,	// (0x00029d94) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4755,	// (0x00025a62) clock_nsta_pane_cp_24_ParamLimits

0x4755,	// (0x00025a62) clock_nsta_pane_cp_24

0x47d5,	// (0x00025ae2) indicator_nsta_pane_cp_24_ParamLimits

0x47d5,	// (0x00025ae2) indicator_nsta_pane_cp_24

0x58a1,	// (0x00026bae) heading_pane_g1

0x0001,

0xf8d2,	// (0x00030bdf) heading_pane_g

0x6351,	// (0x0002765e) grid_sct_catagory_button_pane

0x6383,	// (0x00027690) scroll_pane_cp5_ParamLimits

0x6e67,	// (0x00028174) button_value_adjust_pane_cp5_ParamLimits

0x6e67,	// (0x00028174) button_value_adjust_pane_cp5

0x6f4c,	// (0x00028259) form2_midp_time_pane_ParamLimits

0x8a95,	// (0x00029da2) cell_sct_catagory_button_pane_ParamLimits

0x8a95,	// (0x00029da2) cell_sct_catagory_button_pane

0x71e3,	// (0x000284f0) bg_button_pane_cp01_ParamLimits

0x71e3,	// (0x000284f0) bg_button_pane_cp01

0x721e,	// (0x0002852b) cell_sct_catagory_button_pane_g1

0xca1f,	// (0x0002dd2c) popup_tb_extension_window

0xe504,	// (0x0002f811) aid_size_cell_ext_ParamLimits

0xe504,	// (0x0002f811) aid_size_cell_ext

0x17c9,	// (0x00022ad6) bg_tb_trans_pane_cp1_ParamLimits

0x17c9,	// (0x00022ad6) bg_tb_trans_pane_cp1

0xe52a,	// (0x0002f837) grid_tb_ext_pane_ParamLimits

0xe52a,	// (0x0002f837) grid_tb_ext_pane

0xe56a,	// (0x0002f877) cell_tb_ext_pane_ParamLimits

0xe56a,	// (0x0002f877) cell_tb_ext_pane

0xe594,	// (0x0002f8a1) cell_tb_ext_pane_g1_ParamLimits

0xe594,	// (0x0002f8a1) cell_tb_ext_pane_g1

0x8b2b,	// (0x00029e38) cell_tb_ext_pane_t1

0x145b,	// (0x00022768) list_highlight_pane_cp11_ParamLimits

0x145b,	// (0x00022768) list_highlight_pane_cp11

0x0faa,	// (0x000222b7) popup_uni_indicator_window_ParamLimits

0x0faa,	// (0x000222b7) popup_uni_indicator_window

0x3058,	// (0x00024365) bg_popup_sub_pane_cp14

0x8b46,	// (0x00029e53) list_uniindi_pane

0x8b52,	// (0x00029e5f) uniindi_top_pane

0x145b,	// (0x00022768) bg_uniindi_top_pane

0x8b73,	// (0x00029e80) uniindi_top_pane_g1

0x8b89,	// (0x00029e96) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x0003103d) uniindi_top_pane_g

0x8bb3,	// (0x00029ec0) uniindi_top_pane_t1

0x8bdf,	// (0x00029eec) list_single_uniindi_pane_ParamLimits

0x8bdf,	// (0x00029eec) list_single_uniindi_pane

0x721e,	// (0x0002852b) bg_uniindi_top_pane_g1

0x8bf1,	// (0x00029efe) list_single_uniindi_pane_g1

0x8c04,	// (0x00029f11) list_single_uniindi_pane_t1

0xe7f1,	// (0x0002fafe) control_bg_pane

0x8c29,	// (0x00029f36) bg_sctrl_sk_pane_cp1

0x8c32,	// (0x00029f3f) bg_sctrl_sk_pane_cp2

0x8c3b,	// (0x00029f48) control_bg_pane_g1

0x8c44,	// (0x00029f51) control_bg_pane_g2

0x0001,

0xfd39,	// (0x00031046) control_bg_pane_g

0x6c8a,	// (0x00027f97) cell_indicator_nsta_pane_g1_ParamLimits

0xdb4a,	// (0x0002ee57) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00030dba) cell_indicator_nsta_pane_g_ParamLimits

0x08b0,	// (0x00021bbd) form2_midp_time_pane_t1_ParamLimits

0xc3d0,	// (0x0002d6dd) main_idle_act4_pane_ParamLimits

0xc3d0,	// (0x0002d6dd) main_idle_act4_pane

0xca1f,	// (0x0002dd2c) popup_tb_extension_window_ParamLimits

0xe552,	// (0x0002f85f) tb_ext_find_pane_ParamLimits

0xe552,	// (0x0002f85f) tb_ext_find_pane

0x8c4d,	// (0x00029f5a) ai_gene_pane_1_cp1

0x3dff,	// (0x0002510c) ai_gene_pane_2_cp1

0x8c55,	// (0x00029f62) list_single_idle_plugin_calendar_pane

0x8c5e,	// (0x00029f6b) list_single_idle_plugin_notification_pane

0x8c67,	// (0x00029f74) list_single_idle_plugin_player_pane

0xe5b1,	// (0x0002f8be) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe5b1,	// (0x0002f8be) list_single_idle_plugin_shortcut_pane

0xe5d9,	// (0x0002f8e6) main_idle_act4_pane_t1

0xe5f1,	// (0x0002f8fe) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x0003104b) main_idle_act4_pane_t

0xe609,	// (0x0002f916) middle_sk_idle_act4_pane_ParamLimits

0xe609,	// (0x0002f916) middle_sk_idle_act4_pane

0xe625,	// (0x0002f932) popup_clock_digital_analogue_window_cp2

0xe64c,	// (0x0002f959) shortcut_wheel_idle_act4_pane_ParamLimits

0xe64c,	// (0x0002f959) shortcut_wheel_idle_act4_pane

0x721e,	// (0x0002852b) shortcut_wheel_idle_act4_pane_g1

0x721e,	// (0x0002852b) shortcut_wheel_idle_act4_pane_g2

0x721e,	// (0x0002852b) shortcut_wheel_idle_act4_pane_g3

0x721e,	// (0x0002852b) shortcut_wheel_idle_act4_pane_g4

0x721e,	// (0x0002852b) shortcut_wheel_idle_act4_pane_g5

0x8cfa,	// (0x0002a007) shortcut_wheel_idle_act4_pane_g6

0x8d02,	// (0x0002a00f) shortcut_wheel_idle_act4_pane_g7

0x8d0a,	// (0x0002a017) shortcut_wheel_idle_act4_pane_g8

0x8d12,	// (0x0002a01f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x00031050) shortcut_wheel_idle_act4_pane_g

0xdd1b,	// (0x0002f028) middle_sk_idle_act4_pane_g1_ParamLimits

0xdd1b,	// (0x0002f028) middle_sk_idle_act4_pane_g1

0xe6c9,	// (0x0002f9d6) middle_sk_idle_act4_pane_g2_ParamLimits

0xe6c9,	// (0x0002f9d6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x00031073) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x00031073) middle_sk_idle_act4_pane_g

0xe6e1,	// (0x0002f9ee) middle_sk_idle_act4_pane_t1_ParamLimits

0xe6e1,	// (0x0002f9ee) middle_sk_idle_act4_pane_t1

0xe710,	// (0x0002fa1d) grid_ai_shortcut_pane_ParamLimits

0xe710,	// (0x0002fa1d) grid_ai_shortcut_pane

0xe72d,	// (0x0002fa3a) list_highlight_pane_cp16_ParamLimits

0xe72d,	// (0x0002fa3a) list_highlight_pane_cp16

0xe73a,	// (0x0002fa47) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe73a,	// (0x0002fa47) list_single_idle_plugin_shortcut_pane_g1

0xe746,	// (0x0002fa53) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe746,	// (0x0002fa53) list_single_idle_plugin_shortcut_pane_g2

0xe764,	// (0x0002fa71) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe764,	// (0x0002fa71) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x00031078) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x00031078) list_single_idle_plugin_shortcut_pane_g

0xe779,	// (0x0002fa86) cell_ai_shortcut_pane_ParamLimits

0xe779,	// (0x0002fa86) cell_ai_shortcut_pane

0xe78f,	// (0x0002fa9c) cell_ai_shortcut_pane_g1_ParamLimits

0xe78f,	// (0x0002fa9c) cell_ai_shortcut_pane_g1

0x8c4d,	// (0x00029f5a) ai_gene_pane_1_cp2

0x8e43,	// (0x0002a150) ai_gene_pane_2_cp2

0x8e4b,	// (0x0002a158) list_highlight_pane_cp15

0x8e54,	// (0x0002a161) list_single_idle_plugin_calendar_pane_g1

0x8e4b,	// (0x0002a158) list_highlight_pane_cp17

0x8e5c,	// (0x0002a169) list_single_idle_plugin_calendar_pane_g1_copy1

0x8e64,	// (0x0002a171) list_single_idle_plugin_player_pane_g1

0x65b8,	// (0x000278c5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x0003107f) list_single_idle_plugin_player_pane_g

0x8e6c,	// (0x0002a179) list_single_idle_plugin_player_pane_t1

0x8e7a,	// (0x0002a187) list_single_idle_plugin_player_pane_t2

0x8e88,	// (0x0002a195) list_single_idle_plugin_player_pane_t3

0x8e96,	// (0x0002a1a3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x00031084) list_single_idle_plugin_player_pane_t

0x8ea4,	// (0x0002a1b1) wait_bar_pane_cp15

0x8eac,	// (0x0002a1b9) grid_ai_notification_pane

0x65b8,	// (0x000278c5) list_single_idle_plugin_notification_pane_g1

0xe7b1,	// (0x0002fabe) cell_ai_notification_pane_ParamLimits

0xe7b1,	// (0x0002fabe) cell_ai_notification_pane

0x8ec2,	// (0x0002a1cf) cell_ai_notification_pane_g1

0x8eca,	// (0x0002a1d7) cell_ai_notification_pane_t1

0xe7be,	// (0x0002facb) tb_ext_find_button_pane

0xe7c6,	// (0x0002fad3) tb_ext_find_pane_g1

0xe7ce,	// (0x0002fadb) tb_ext_find_pane_t1

0x36c8,	// (0x000249d5) tb_ext_find_button_pane_g1

0x8ef6,	// (0x0002a203) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x0003108d) tb_ext_find_button_pane_g

0xe5d9,	// (0x0002f8e6) main_idle_act4_pane_t1_ParamLimits

0xe5f1,	// (0x0002f8fe) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x0003104b) main_idle_act4_pane_t_ParamLimits

0xe625,	// (0x0002f932) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe63c,	// (0x0002f949) sat_plugin_idle_act4_pane_ParamLimits

0xe63c,	// (0x0002f949) sat_plugin_idle_act4_pane

0xe81b,	// (0x0002fb28) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe81b,	// (0x0002fb28) sat_plugin_idle_act4_pane_t1

0xe833,	// (0x0002fb40) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe833,	// (0x0002fb40) sat_plugin_idle_act4_pane_t2

0xe84b,	// (0x0002fb58) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe84b,	// (0x0002fb58) sat_plugin_idle_act4_pane_t3

0xe863,	// (0x0002fb70) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe863,	// (0x0002fb70) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x00031092) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x00031092) sat_plugin_idle_act4_pane_t

0x0edb,	// (0x000221e8) popup_battery_window_ParamLimits

0x0edb,	// (0x000221e8) popup_battery_window

0x145b,	// (0x00022768) bg_popup_sub_pane_cp25_ParamLimits

0x145b,	// (0x00022768) bg_popup_sub_pane_cp25

0x8f4b,	// (0x0002a258) popup_battery_window_g1_ParamLimits

0x8f4b,	// (0x0002a258) popup_battery_window_g1

0x8f57,	// (0x0002a264) popup_battery_window_t1_ParamLimits

0x8f57,	// (0x0002a264) popup_battery_window_t1

0x8f69,	// (0x0002a276) popup_battery_window_t2_ParamLimits

0x8f69,	// (0x0002a276) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x0003109b) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x0003109b) popup_battery_window_t

0xc1a4,	// (0x0002d4b1) midp_canvas_pane_ParamLimits

0xc1ff,	// (0x0002d50c) midp_keypad_pane_ParamLimits

0xc1ff,	// (0x0002d50c) midp_keypad_pane

0x403c,	// (0x00025349) main_midp_pane_ParamLimits

0x6d14,	// (0x00028021) signal_pane_g2_cp_ParamLimits

0xe87b,	// (0x0002fb88) aid_size_cell_midp_keypad_ParamLimits

0xe87b,	// (0x0002fb88) aid_size_cell_midp_keypad

0xe899,	// (0x0002fba6) midp_keyp_game_grid_pane_ParamLimits

0xe899,	// (0x0002fba6) midp_keyp_game_grid_pane

0xe8c0,	// (0x0002fbcd) midp_keyp_rocker_pane_ParamLimits

0xe8c0,	// (0x0002fbcd) midp_keyp_rocker_pane

0xe905,	// (0x0002fc12) midp_keyp_sk_left_pane_ParamLimits

0xe905,	// (0x0002fc12) midp_keyp_sk_left_pane

0xe959,	// (0x0002fc66) midp_keyp_sk_right_pane_ParamLimits

0xe959,	// (0x0002fc66) midp_keyp_sk_right_pane

0xe7f1,	// (0x0002fafe) bg_button_pane_cp03

0xe9ad,	// (0x0002fcba) midp_keyp_sk_left_pane_g1

0xe7f1,	// (0x0002fafe) bg_button_pane_cp04

0xe9ad,	// (0x0002fcba) midp_keyp_sk_right_pane_g1

0x721e,	// (0x0002852b) midp_keyp_rocker_pane_g1

0xe9b6,	// (0x0002fcc3) keyp_game_cell_pane_ParamLimits

0xe9b6,	// (0x0002fcc3) keyp_game_cell_pane

0xe7f1,	// (0x0002fafe) bg_button_pane_cp02

0xe9dc,	// (0x0002fce9) keyp_game_cell_pane_g1

0xba50,	// (0x0002cd5d) popup_fep_vkb2_window_ParamLimits

0xba50,	// (0x0002cd5d) popup_fep_vkb2_window

0xce18,	// (0x0002e125) aid_size_cell_vkb2_ParamLimits

0xce18,	// (0x0002e125) aid_size_cell_vkb2

0xce46,	// (0x0002e153) popup_fep_vkb2_window_g1_ParamLimits

0xce46,	// (0x0002e153) popup_fep_vkb2_window_g1

0xce96,	// (0x0002e1a3) vkb2_area_bottom_pane_ParamLimits

0xce96,	// (0x0002e1a3) vkb2_area_bottom_pane

0xcef2,	// (0x0002e1ff) vkb2_area_keypad_pane_ParamLimits

0xcef2,	// (0x0002e1ff) vkb2_area_keypad_pane

0xcf40,	// (0x0002e24d) vkb2_area_top_pane_ParamLimits

0xcf40,	// (0x0002e24d) vkb2_area_top_pane

0xcfc6,	// (0x0002e2d3) vkb2_top_entry_pane_ParamLimits

0xcfc6,	// (0x0002e2d3) vkb2_top_entry_pane

0xcff3,	// (0x0002e300) vkb2_top_grid_left_pane_ParamLimits

0xcff3,	// (0x0002e300) vkb2_top_grid_left_pane

0xd013,	// (0x0002e320) vkb2_top_grid_right_pane_ParamLimits

0xd013,	// (0x0002e320) vkb2_top_grid_right_pane

0x2abc,	// (0x00023dc9) vkb2_cell_keypad_pane_ParamLimits

0x2abc,	// (0x00023dc9) vkb2_cell_keypad_pane

0xd059,	// (0x0002e366) vkb2_area_bottom_grid_pane_ParamLimits

0xd059,	// (0x0002e366) vkb2_area_bottom_grid_pane

0xd083,	// (0x0002e390) vkb2_area_bottom_pane_g1_ParamLimits

0xd083,	// (0x0002e390) vkb2_area_bottom_pane_g1

0xd0a9,	// (0x0002e3b6) vkb2_area_bottom_pane_g2_ParamLimits

0xd0a9,	// (0x0002e3b6) vkb2_area_bottom_pane_g2

0xd0da,	// (0x0002e3e7) vkb2_area_bottom_pane_g3_ParamLimits

0xd0da,	// (0x0002e3e7) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x000310a0) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x000310a0) vkb2_area_bottom_pane_g

0x2c4b,	// (0x00023f58) vkb2_top_cell_left_pane_ParamLimits

0x2c4b,	// (0x00023f58) vkb2_top_cell_left_pane

0xe9e5,	// (0x0002fcf2) vkb2_top_entry_pane_g1_ParamLimits

0xe9e5,	// (0x0002fcf2) vkb2_top_entry_pane_g1

0xe9f3,	// (0x0002fd00) vkb2_top_entry_pane_t1_ParamLimits

0xe9f3,	// (0x0002fd00) vkb2_top_entry_pane_t1

0x90f6,	// (0x0002a403) vkb2_top_entry_pane_t2_ParamLimits

0x90f6,	// (0x0002a403) vkb2_top_entry_pane_t2

0x910e,	// (0x0002a41b) vkb2_top_entry_pane_t3_ParamLimits

0x910e,	// (0x0002a41b) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x000310a7) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x000310a7) vkb2_top_entry_pane_t

0xd144,	// (0x0002e451) vkb2_top_grid_right_pane_g1_ParamLimits

0xd144,	// (0x0002e451) vkb2_top_grid_right_pane_g1

0x2cae,	// (0x00023fbb) vkb2_top_grid_right_pane_g2_ParamLimits

0x2cae,	// (0x00023fbb) vkb2_top_grid_right_pane_g2

0x2cc6,	// (0x00023fd3) vkb2_top_grid_right_pane_g3_ParamLimits

0x2cc6,	// (0x00023fd3) vkb2_top_grid_right_pane_g3

0xd15a,	// (0x0002e467) vkb2_top_grid_right_pane_g4_ParamLimits

0xd15a,	// (0x0002e467) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x000310ae) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x000310ae) vkb2_top_grid_right_pane_g

0x2cf4,	// (0x00024001) vkb2_top_cell_left_pane_g1

0x2d0b,	// (0x00024018) vkb2_cell_keypad_pane_g1_ParamLimits

0x2d0b,	// (0x00024018) vkb2_cell_keypad_pane_g1

0x9124,	// (0x0002a431) vkb2_cell_keypad_pane_t1_ParamLimits

0x9124,	// (0x0002a431) vkb2_cell_keypad_pane_t1

0x2d2f,	// (0x0002403c) vkb2_cell_bottom_grid_pane_ParamLimits

0x2d2f,	// (0x0002403c) vkb2_cell_bottom_grid_pane

0x2d68,	// (0x00024075) vkb2_cell_bottom_grid_pane_g1

0xe66d,	// (0x0002f97a) aid_call2_pane_cp02

0xe675,	// (0x0002f982) aid_call_pane_cp02

0xe67d,	// (0x0002f98a) clock_digital_number_pane_cp10

0xe685,	// (0x0002f992) clock_digital_number_pane_cp11

0xe68d,	// (0x0002f99a) clock_digital_number_pane_cp12

0xe695,	// (0x0002f9a2) clock_digital_number_pane_cp13

0xe69d,	// (0x0002f9aa) clock_digital_separator_pane_cp10

0x36c8,	// (0x000249d5) popup_clock_digital_analogue_window_cp2_g1

0x36c8,	// (0x000249d5) popup_clock_digital_analogue_window_cp2_g2

0xe6a5,	// (0x0002f9b2) popup_clock_digital_analogue_window_cp2_g3

0x36c8,	// (0x000249d5) popup_clock_digital_analogue_window_cp2_g4

0xe6a5,	// (0x0002f9b2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x00031063) popup_clock_digital_analogue_window_cp2_g

0xe6ad,	// (0x0002f9ba) popup_clock_digital_analogue_window_cp2_t1

0xe6bb,	// (0x0002f9c8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x0003106e) popup_clock_digital_analogue_window_cp2_t

0x721e,	// (0x0002852b) clock_digital_number_pane_cp10_g1

0x721e,	// (0x0002852b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x00030e56) clock_digital_number_pane_cp10_g

0x721e,	// (0x0002852b) clock_digital_separator_pane_cp10_g1

0x721e,	// (0x0002852b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x00030e56) clock_digital_separator_pane_cp10_g

0x8b95,	// (0x00029ea2) uniindi_top_pane_g3

0x8ba6,	// (0x00029eb3) uniindi_top_pane_g4

0x2b2c,	// (0x00023e39) vkb2_row_keypad_pane_ParamLimits

0x2b2c,	// (0x00023e39) vkb2_row_keypad_pane

0x2d84,	// (0x00024091) vkb2_cell_t_keypad_pane_ParamLimits

0x2d84,	// (0x00024091) vkb2_cell_t_keypad_pane

0x2d94,	// (0x000240a1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2d94,	// (0x000240a1) vkb2_cell_t_keypad_pane_cp08

0x2da9,	// (0x000240b6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2da9,	// (0x000240b6) vkb2_cell_t_keypad_pane_cp09

0x2dbd,	// (0x000240ca) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2dbd,	// (0x000240ca) vkb2_cell_t_keypad_pane_cp01

0x2dce,	// (0x000240db) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2dce,	// (0x000240db) vkb2_cell_t_keypad_pane_cp02

0x2ddf,	// (0x000240ec) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2ddf,	// (0x000240ec) vkb2_cell_t_keypad_pane_cp03

0x2df0,	// (0x000240fd) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2df0,	// (0x000240fd) vkb2_cell_t_keypad_pane_cp04

0x2e01,	// (0x0002410e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2e01,	// (0x0002410e) vkb2_cell_t_keypad_pane_cp05

0x2e12,	// (0x0002411f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2e12,	// (0x0002411f) vkb2_cell_t_keypad_pane_cp06

0x2e25,	// (0x00024132) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2e25,	// (0x00024132) vkb2_cell_t_keypad_pane_cp07

0x2e3a,	// (0x00024147) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2e3a,	// (0x00024147) vkb2_cell_t_keypad_pane_cp10

0x74a8,	// (0x000287b5) vkb2_cell_t_keypad_pane_g1

0x913b,	// (0x0002a448) vkb2_cell_t_keypad_pane_t1

0xe7f1,	// (0x0002fafe) popup_grid_graphic2_window

0xea2c,	// (0x0002fd39) aid_size_cell_graphic2_ParamLimits

0xea2c,	// (0x0002fd39) aid_size_cell_graphic2

0xea6a,	// (0x0002fd77) bg_popup_window_pane_cp21_ParamLimits

0xea6a,	// (0x0002fd77) bg_popup_window_pane_cp21

0xea78,	// (0x0002fd85) graphic2_pages_pane_ParamLimits

0xea78,	// (0x0002fd85) graphic2_pages_pane

0xead0,	// (0x0002fddd) grid_graphic2_control_pane_ParamLimits

0xead0,	// (0x0002fddd) grid_graphic2_control_pane

0xeb18,	// (0x0002fe25) grid_graphic2_pane_ParamLimits

0xeb18,	// (0x0002fe25) grid_graphic2_pane

0xeba3,	// (0x0002feb0) cell_graphic2_pane

0xe7f1,	// (0x0002fafe) main_comp_mode_pane

0x8406,	// (0x00029713) list_ai3_gene_pane_ParamLimits

0xe3a8,	// (0x0002f6b5) bg_popup_window_pane_cp19_ParamLimits

0x87da,	// (0x00029ae7) bg_touch_area_indi_pane_ParamLimits

0x87da,	// (0x00029ae7) bg_touch_area_indi_pane

0x87f0,	// (0x00029afd) bg_touch_area_indi_pane_cp01_ParamLimits

0x87f0,	// (0x00029afd) bg_touch_area_indi_pane_cp01

0x8808,	// (0x00029b15) bg_touch_area_indi_pane_cp02_ParamLimits

0x8808,	// (0x00029b15) bg_touch_area_indi_pane_cp02

0x8822,	// (0x00029b2f) bg_touch_area_indi_pane_cp03_ParamLimits

0x8822,	// (0x00029b2f) bg_touch_area_indi_pane_cp03

0x883c,	// (0x00029b49) popup_slider_window_g1_ParamLimits

0x8858,	// (0x00029b65) popup_slider_window_g2_ParamLimits

0x8874,	// (0x00029b81) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x00030ff8) popup_slider_window_g_ParamLimits

0x88d0,	// (0x00029bdd) popup_slider_window_t1_ParamLimits

0x8944,	// (0x00029c51) small_volume_slider_vertical_pane_ParamLimits

0xeba3,	// (0x0002feb0) cell_graphic2_pane_ParamLimits

0xec06,	// (0x0002ff13) bg_button_pane_cp10_ParamLimits

0xec06,	// (0x0002ff13) bg_button_pane_cp10

0xec19,	// (0x0002ff26) bg_button_pane_cp11_ParamLimits

0xec19,	// (0x0002ff26) bg_button_pane_cp11

0xec2c,	// (0x0002ff39) graphic2_pages_pane_g1_ParamLimits

0xec2c,	// (0x0002ff39) graphic2_pages_pane_g1

0xec47,	// (0x0002ff54) graphic2_pages_pane_g2_ParamLimits

0xec47,	// (0x0002ff54) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x000310bc) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x000310bc) graphic2_pages_pane_g

0xec5f,	// (0x0002ff6c) graphic2_pages_pane_t1_ParamLimits

0xec5f,	// (0x0002ff6c) graphic2_pages_pane_t1

0xec77,	// (0x0002ff84) cell_graphic2_control_pane_ParamLimits

0xec77,	// (0x0002ff84) cell_graphic2_control_pane

0xec93,	// (0x0002ffa0) cell_graphic2_pane_g1_ParamLimits

0xec93,	// (0x0002ffa0) cell_graphic2_pane_g1

0xdd29,	// (0x0002f036) cell_graphic2_pane_g2_ParamLimits

0xdd29,	// (0x0002f036) cell_graphic2_pane_g2

0xe7dc,	// (0x0002fae9) cell_graphic2_pane_g3_ParamLimits

0xe7dc,	// (0x0002fae9) cell_graphic2_pane_g3

0xdd36,	// (0x0002f043) cell_graphic2_pane_g4_ParamLimits

0xdd36,	// (0x0002f043) cell_graphic2_pane_g4

0xeca0,	// (0x0002ffad) cell_graphic2_pane_g5_ParamLimits

0xeca0,	// (0x0002ffad) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x000310c1) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x000310c1) cell_graphic2_pane_g

0xecc0,	// (0x0002ffcd) cell_graphic2_pane_t1_ParamLimits

0xecc0,	// (0x0002ffcd) cell_graphic2_pane_t1

0x5895,	// (0x00026ba2) grid_highlight_pane_cp11_ParamLimits

0x5895,	// (0x00026ba2) grid_highlight_pane_cp11

0x145b,	// (0x00022768) bg_button_pane_cp05

0xecf5,	// (0x00030002) cell_graphic2_control_pane_g1

0x721e,	// (0x0002852b) bg_touch_area_indi_pane_g1

0x940c,	// (0x0002a719) aid_cmod_rocker_key_size

0x9416,	// (0x0002a723) aid_cmode_itu_key_size

0x9420,	// (0x0002a72d) main_cmode_video_pane

0x942a,	// (0x0002a737) main_comp_mode_itu_pane

0x9436,	// (0x0002a743) main_comp_mode_rocker_pane

0x9442,	// (0x0002a74f) cell_cmode_rocker_pane_ParamLimits

0x9442,	// (0x0002a74f) cell_cmode_rocker_pane

0x9456,	// (0x0002a763) cell_cmode_itu_pane_ParamLimits

0x9456,	// (0x0002a763) cell_cmode_itu_pane

0x3058,	// (0x00024365) bg_button_pane_cp06_ParamLimits

0x3058,	// (0x00024365) bg_button_pane_cp06

0x74a8,	// (0x000287b5) cell_cmode_rocker_pane_g1_ParamLimits

0x74a8,	// (0x000287b5) cell_cmode_rocker_pane_g1

0x89eb,	// (0x00029cf8) cell_cmode_rocker_pane_g2_ParamLimits

0x89eb,	// (0x00029cf8) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x000310d1) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x000310d1) cell_cmode_rocker_pane_g

0xe7f1,	// (0x0002fafe) bg_button_pane_cp07

0x946d,	// (0x0002a77a) cell_cmode_itu_pane_g1

0x9476,	// (0x0002a783) cell_cmode_itu_pane_t1

0x9484,	// (0x0002a791) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x000310d6) cell_cmode_itu_pane_t

0x8c19,	// (0x00029f26) aid_touch_ctrl_left

0x8c21,	// (0x00029f2e) aid_touch_ctrl_right

0xe7f1,	// (0x0002fafe) compa_mode_pane

0xed1b,	// (0x00030028) aid_cmod_rocker_key_size_cp

0xed25,	// (0x00030032) aid_cmode_itu_key_size_cp

0x94a6,	// (0x0002a7b3) compa_mode_pane_g1

0x94ae,	// (0x0002a7bb) compa_mode_pane_g2

0x94b6,	// (0x0002a7c3) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x000310db) compa_mode_pane_g

0xed2f,	// (0x0003003c) main_comp_mode_itu_pane_cp

0xed37,	// (0x00030044) main_comp_mode_rocker_pane_cp

0xed3f,	// (0x0003004c) cell_cmode_itu_pane_cp_ParamLimits

0xed3f,	// (0x0003004c) cell_cmode_itu_pane_cp

0xed54,	// (0x00030061) cell_cmode_rocker_pane_cp_ParamLimits

0xed54,	// (0x00030061) cell_cmode_rocker_pane_cp

0x3058,	// (0x00024365) bg_button_pane_cp06_cp_ParamLimits

0x3058,	// (0x00024365) bg_button_pane_cp06_cp

0x74a8,	// (0x000287b5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x74a8,	// (0x000287b5) cell_cmode_rocker_pane_g1_cp

0x721e,	// (0x0002852b) cell_cmode_rocker_pane_g2_cp

0xe7f1,	// (0x0002fafe) bg_button_pane_cp07_cp

0xed66,	// (0x00030073) cell_cmode_itu_pane_g1_cp

0xed6f,	// (0x0003007c) cell_cmode_itu_pane_t1_cp

0xed6f,	// (0x0003007c) cell_cmode_itu_pane_t2_cp

0xd991,	// (0x0002ec9e) settings_code_pane_cp2

0x1141,	// (0x0002244e) bg_popup_window_pane_cp3_ParamLimits

0x1649,	// (0x00022956) heading_pane_cp3_ParamLimits

0x1655,	// (0x00022962) listscroll_popup_graphic_pane_ParamLimits

0x242e,	// (0x0002373b) fep_hwr_aid_pane_ParamLimits

0x281f,	// (0x00023b2c) aid_touch_sctrl_top_ParamLimits

0x282c,	// (0x00023b39) sctrl_sk_top_pane_g1_ParamLimits

0x74a8,	// (0x000287b5) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x00031011) sctrl_sk_top_pane_g_ParamLimits

0x2839,	// (0x00023b46) sctrl_sk_top_pane_t1_ParamLimits

0x281f,	// (0x00023b2c) aid_touch_sctrl_bottom_ParamLimits

0x2839,	// (0x00023b46) sctrl_sk_bottom_pane_t1_ParamLimits

0x8b5f,	// (0x00029e6c) aid_area_touch_clock

0xcf88,	// (0x0002e295) aid_vkb2_area_top_pane_cell_ParamLimits

0xcf88,	// (0x0002e295) aid_vkb2_area_top_pane_cell

0xd033,	// (0x0002e340) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd033,	// (0x0002e340) aid_vkb2_area_bottom_pane_cell

0x90c8,	// (0x0002a3d5) popup_char_count_window

0x950c,	// (0x0002a819) popup_char_count_window_g1

0x9515,	// (0x0002a822) popup_char_count_window_g2

0x951e,	// (0x0002a82b) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x000310e2) popup_char_count_window_g

0x9527,	// (0x0002a834) popup_char_count_window_t1

0x28d8,	// (0x00023be5) popup_fep_char_preview_window_ParamLimits

0x28d8,	// (0x00023be5) popup_fep_char_preview_window

0xcfa8,	// (0x0002e2b5) vkb2_top_candi_pane_ParamLimits

0xcfa8,	// (0x0002e2b5) vkb2_top_candi_pane

0xed7d,	// (0x0003008a) cell_vkb2_top_candi_pane_ParamLimits

0xed7d,	// (0x0003008a) cell_vkb2_top_candi_pane

0x521e,	// (0x0002652b) bg_popup_fep_char_preview_window_ParamLimits

0x521e,	// (0x0002652b) bg_popup_fep_char_preview_window

0x2e4f,	// (0x0002415c) popup_fep_char_preview_window_t1_ParamLimits

0x2e4f,	// (0x0002415c) popup_fep_char_preview_window_t1

0x9586,	// (0x0002a893) bg_popup_fep_char_preview_window_g1

0x958e,	// (0x0002a89b) bg_popup_fep_char_preview_window_g2

0x9596,	// (0x0002a8a3) bg_popup_fep_char_preview_window_g3

0x959e,	// (0x0002a8ab) bg_popup_fep_char_preview_window_g4

0x95a6,	// (0x0002a8b3) bg_popup_fep_char_preview_window_g5

0x2e89,	// (0x00024196) bg_popup_fep_char_preview_window_g6

0x95ae,	// (0x0002a8bb) bg_popup_fep_char_preview_window_g7

0x95b6,	// (0x0002a8c3) bg_popup_fep_char_preview_window_g8

0x95be,	// (0x0002a8cb) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x000310e9) bg_popup_fep_char_preview_window_g

0x74a8,	// (0x000287b5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x74a8,	// (0x000287b5) cell_vkb2_top_candi_pane_g1

0x77e9,	// (0x00028af6) cell_vkb2_top_candi_pane_g2_ParamLimits

0x77e9,	// (0x00028af6) cell_vkb2_top_candi_pane_g2

0x780a,	// (0x00028b17) cell_vkb2_top_candi_pane_g3_ParamLimits

0x780a,	// (0x00028b17) cell_vkb2_top_candi_pane_g3

0x2e91,	// (0x0002419e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2e91,	// (0x0002419e) cell_vkb2_top_candi_pane_g4

0x95c6,	// (0x0002a8d3) cell_vkb2_top_candi_pane_g5_ParamLimits

0x95c6,	// (0x0002a8d3) cell_vkb2_top_candi_pane_g5

0x89eb,	// (0x00029cf8) cell_vkb2_top_candi_pane_g6_ParamLimits

0x89eb,	// (0x00029cf8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x000310fc) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x000310fc) cell_vkb2_top_candi_pane_g

0x2eb2,	// (0x000241bf) cell_vkb2_top_candi_pane_t1

0x22de,	// (0x000235eb) aid_size_touch_slider_mark_ParamLimits

0x22de,	// (0x000235eb) aid_size_touch_slider_mark

0xeab4,	// (0x0002fdc1) grid_graphic2_catg_pane_ParamLimits

0xeab4,	// (0x0002fdc1) grid_graphic2_catg_pane

0xeb72,	// (0x0002fe7f) popup_grid_graphic2_window_t1_ParamLimits

0xeb72,	// (0x0002fe7f) popup_grid_graphic2_window_t1

0xeb88,	// (0x0002fe95) popup_grid_graphic2_window_t2_ParamLimits

0xeb88,	// (0x0002fe95) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x000310b7) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x000310b7) popup_grid_graphic2_window_t

0x145b,	// (0x00022768) bg_button_pane_cp05_ParamLimits

0xecf5,	// (0x00030002) cell_graphic2_control_pane_g1_ParamLimits

0xedd1,	// (0x000300de) cell_graphic2_catg_pane_ParamLimits

0xedd1,	// (0x000300de) cell_graphic2_catg_pane

0xe7f1,	// (0x0002fafe) bg_button_pane_cp12

0xede3,	// (0x000300f0) cell_graphic2_catg_pane_g1

0x8b2b,	// (0x00029e38) cell_tb_ext_pane_t1_ParamLimits

0x2c6b,	// (0x00023f78) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2c6b,	// (0x00023f78) vkb2_top_cell_right_narrow_pane

0x2c83,	// (0x00023f90) vkb2_top_cell_right_wide_pane_ParamLimits

0x2c83,	// (0x00023f90) vkb2_top_cell_right_wide_pane

0xc3d0,	// (0x0002d6dd) bg_vkb2_func_pane_ParamLimits

0xc3d0,	// (0x0002d6dd) bg_vkb2_func_pane

0x2cf4,	// (0x00024001) vkb2_top_cell_left_pane_g1_ParamLimits

0xc3d0,	// (0x0002d6dd) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc3d0,	// (0x0002d6dd) bg_vkb2_fuc_pane_cp03

0x2d68,	// (0x00024075) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4b80,	// (0x00025e8d) bg_vkb2_func_pane_g1

0x4b88,	// (0x00025e95) bg_vkb2_func_pane_g2

0x4b98,	// (0x00025ea5) bg_vkb2_func_pane_g3

0x4b90,	// (0x00025e9d) bg_vkb2_func_pane_g4

0x4ba0,	// (0x00025ead) bg_vkb2_func_pane_g5

0x4ba8,	// (0x00025eb5) bg_vkb2_func_pane_g6

0x4bb0,	// (0x00025ebd) bg_vkb2_func_pane_g7

0x4bb8,	// (0x00025ec5) bg_vkb2_func_pane_g8

0x4b78,	// (0x00025e85) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x00031109) bg_vkb2_func_pane_g

0xc3d0,	// (0x0002d6dd) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc3d0,	// (0x0002d6dd) bg_vkb2_fuc_pane_cp01

0x2cf4,	// (0x00024001) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2cf4,	// (0x00024001) vkb2_top_cell_right_wide_pane_g1

0xc3d0,	// (0x0002d6dd) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc3d0,	// (0x0002d6dd) bg_vkb2_fuc_pane_cp02

0x2d68,	// (0x00024075) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2d68,	// (0x00024075) vkb2_top_cell_right_narrow_pane_g1

0xe2e2,	// (0x0002f5ef) aid_touch_area_decrease_ParamLimits

0xe2e2,	// (0x0002f5ef) aid_touch_area_decrease

0xe31c,	// (0x0002f629) aid_touch_area_increase_ParamLimits

0xe31c,	// (0x0002f629) aid_touch_area_increase

0xe344,	// (0x0002f651) aid_touch_area_mute_ParamLimits

0xe344,	// (0x0002f651) aid_touch_area_mute

0xe374,	// (0x0002f681) aid_touch_area_slider_ParamLimits

0xe374,	// (0x0002f681) aid_touch_area_slider

0xe3b4,	// (0x0002f6c1) popup_slider_window_g4_ParamLimits

0xe3b4,	// (0x0002f6c1) popup_slider_window_g4

0xe3dc,	// (0x0002f6e9) popup_slider_window_g5_ParamLimits

0xe3dc,	// (0x0002f6e9) popup_slider_window_g5

0xe410,	// (0x0002f71d) popup_slider_window_g6_ParamLimits

0xe410,	// (0x0002f71d) popup_slider_window_g6

0x88fe,	// (0x00029c0b) popup_slider_window_t2_ParamLimits

0x88fe,	// (0x00029c0b) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x00031005) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x00031005) popup_slider_window_t

0xe42c,	// (0x0002f739) slider_pane_ParamLimits

0xe42c,	// (0x0002f739) slider_pane

0x9602,	// (0x0002a90f) slider_pane_g1_ParamLimits

0x9602,	// (0x0002a90f) slider_pane_g1

0x9616,	// (0x0002a923) slider_pane_g2_ParamLimits

0x9616,	// (0x0002a923) slider_pane_g2

0x962c,	// (0x0002a939) slider_pane_g3_ParamLimits

0x962c,	// (0x0002a939) slider_pane_g3

0x0003,

0xfe0f,	// (0x0003111c) slider_pane_g_ParamLimits

0xfe0f,	// (0x0003111c) slider_pane_g

0xca6b,	// (0x0002dd78) popup_tb_float_extension_window_ParamLimits

0xca6b,	// (0x0002dd78) popup_tb_float_extension_window

0x9658,	// (0x0002a965) aid_size_cell_tb_float_ext

0xe7f1,	// (0x0002fafe) bg_popup_sub_window_cp28

0x9664,	// (0x0002a971) grid_tb_float_ext_pane

0x9670,	// (0x0002a97d) cell_tb_float_ext_pane_ParamLimits

0x9670,	// (0x0002a97d) cell_tb_float_ext_pane

0x968c,	// (0x0002a999) cell_tb_float_ext_pane_g1

0x9695,	// (0x0002a9a2) grid_highlight_pane_cp12

0xcd89,	// (0x0002e096) cell_last_hwr_side_pane_ParamLimits

0xcd89,	// (0x0002e096) cell_last_hwr_side_pane

0x721e,	// (0x0002852b) cell_last_hwr_side_pane_g1

0x969e,	// (0x0002a9ab) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x00031125) cell_last_hwr_side_pane_g

0xd10f,	// (0x0002e41c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd10f,	// (0x0002e41c) vkb2_area_bottom_space_btn_pane

0x74a8,	// (0x000287b5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x913b,	// (0x0002a448) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2eb2,	// (0x000241bf) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2ed0,	// (0x000241dd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2ed0,	// (0x000241dd) vkb2_area_bottom_space_btn_pane_g1

0x2f0a,	// (0x00024217) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2f0a,	// (0x00024217) vkb2_area_bottom_space_btn_pane_g2

0x2f40,	// (0x0002424d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2f40,	// (0x0002424d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x0003112a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x0003112a) vkb2_area_bottom_space_btn_pane_g

0x24d7,	// (0x000237e4) cel_fep_hwr_func_pane_ParamLimits

0x24d7,	// (0x000237e4) cel_fep_hwr_func_pane

0xcd5e,	// (0x0002e06b) cell_hwr_side_button_pane_ParamLimits

0xcd5e,	// (0x0002e06b) cell_hwr_side_button_pane

0x8b5f,	// (0x00029e6c) aid_area_touch_clock_ParamLimits

0x145b,	// (0x00022768) bg_uniindi_top_pane_ParamLimits

0x8b73,	// (0x00029e80) uniindi_top_pane_g1_ParamLimits

0x8b89,	// (0x00029e96) uniindi_top_pane_g2_ParamLimits

0x8b95,	// (0x00029ea2) uniindi_top_pane_g3_ParamLimits

0x8ba6,	// (0x00029eb3) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x0003103d) uniindi_top_pane_g_ParamLimits

0x8bb3,	// (0x00029ec0) uniindi_top_pane_t1_ParamLimits

0x145b,	// (0x00022768) bg_vkb2_func_pane_cp01_ParamLimits

0x145b,	// (0x00022768) bg_vkb2_func_pane_cp01

0x96a7,	// (0x0002a9b4) cel_fep_hwr_func_pane_g1_ParamLimits

0x96a7,	// (0x0002a9b4) cel_fep_hwr_func_pane_g1

0x145b,	// (0x00022768) bg_vkb2_func_pane_cp02_ParamLimits

0x145b,	// (0x00022768) bg_vkb2_func_pane_cp02

0x96a7,	// (0x0002a9b4) cell_hwr_side_button_pane_g1_ParamLimits

0x96a7,	// (0x0002a9b4) cell_hwr_side_button_pane_g1

0x49f9,	// (0x00025d06) status_pane_g4_ParamLimits

0x49f9,	// (0x00025d06) status_pane_g4

0x4a13,	// (0x00025d20) status_pane_t1

0x6fba,	// (0x000282c7) form2_midp_gauge_slider_cont_pane

0x6fc2,	// (0x000282cf) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdc4c,	// (0x0002ef59) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdc5e,	// (0x0002ef6b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x00030e09) form2_midp_gauge_slider_pane_t_ParamLimits

0x6ff8,	// (0x00028305) form2_midp_slider_pane_ParamLimits

0x28a0,	// (0x00023bad) aid_size_cell_func_vkb2_ParamLimits

0x28a0,	// (0x00023bad) aid_size_cell_func_vkb2

0x9644,	// (0x0002a951) slider_pane_g4_ParamLimits

0x9644,	// (0x0002a951) slider_pane_g4

0xd170,	// (0x0002e47d) form2_midp_gauge_slider_pane_t2_cp01

0xd17e,	// (0x0002e48b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd17e,	// (0x0002e48b) form2_midp_gauge_slider_pane_t3_cp01

0x2fb5,	// (0x000242c2) form2_midp_slider_pane_cp01

0xe7f1,	// (0x0002fafe) navi_smil_pane

0x96e0,	// (0x0002a9ed) navi_smil_pane_g1

0x96e8,	// (0x0002a9f5) navi_smil_pane_t1

0x96b5,	// (0x0002a9c2) form2_midp_slider_pane_g1

0x96be,	// (0x0002a9cb) form2_midp_slider_pane_g2

0x96c6,	// (0x0002a9d3) form2_midp_slider_pane_g3

0x96b5,	// (0x0002a9c2) form2_midp_slider_pane_g4

0xedec,	// (0x000300f9) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x00031133) form2_midp_slider_pane_g

0x2f7a,	// (0x00024287) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2f7a,	// (0x00024287) vkb2_area_bottom_space_btn_pane_g4

0xd2a6,	// (0x0002e5b3) lc0_navi_pane_ParamLimits

0xd2a6,	// (0x0002e5b3) lc0_navi_pane

0xd316,	// (0x0002e623) lc0_stat_indi_pane_ParamLimits

0xd316,	// (0x0002e623) lc0_stat_indi_pane

0xd32b,	// (0x0002e638) ls0_title_pane_ParamLimits

0xd32b,	// (0x0002e638) ls0_title_pane

0x3058,	// (0x00024365) bg_popup_sub_pane_cp14_ParamLimits

0x8b46,	// (0x00029e53) list_uniindi_pane_ParamLimits

0x8b52,	// (0x00029e5f) uniindi_top_pane_ParamLimits

0x8bf1,	// (0x00029efe) list_single_uniindi_pane_g1_ParamLimits

0x8c04,	// (0x00029f11) list_single_uniindi_pane_t1_ParamLimits

0xd19b,	// (0x0002e4a8) lc0_stat_clock_pane_ParamLimits

0xd19b,	// (0x0002e4a8) lc0_stat_clock_pane

0xedf5,	// (0x00030102) lc0_stat_indi_pane_g1_ParamLimits

0xedf5,	// (0x00030102) lc0_stat_indi_pane_g1

0xee02,	// (0x0003010f) lc0_stat_indi_pane_g2_ParamLimits

0xee02,	// (0x0003010f) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x0003113e) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x0003113e) lc0_stat_indi_pane_g

0xd1a8,	// (0x0002e4b5) lc0_uni_indicator_pane_ParamLimits

0xd1a8,	// (0x0002e4b5) lc0_uni_indicator_pane

0xee0f,	// (0x0003011c) ls0_title_pane_g1_ParamLimits

0xee0f,	// (0x0003011c) ls0_title_pane_g1

0xee23,	// (0x00030130) ls0_title_pane_t1_ParamLimits

0xee23,	// (0x00030130) ls0_title_pane_t1

0xd1b5,	// (0x0002e4c2) lc0_uni_indicator_pane_g1_ParamLimits

0xd1b5,	// (0x0002e4c2) lc0_uni_indicator_pane_g1

0x975a,	// (0x0002aa67) lc0_stat_clock_pane_t1

0xe7f1,	// (0x0002fafe) main_ai5_pane

0x9768,	// (0x0002aa75) ai5_sk_pane_ParamLimits

0x9768,	// (0x0002aa75) ai5_sk_pane

0xee51,	// (0x0003015e) cell_ai5_widget_pane_ParamLimits

0xee51,	// (0x0003015e) cell_ai5_widget_pane

0x97eb,	// (0x0002aaf8) aid_size_cell_widget_grid

0x97ff,	// (0x0002ab0c) bg_ai5_widget_pane_ParamLimits

0x97ff,	// (0x0002ab0c) bg_ai5_widget_pane

0xeede,	// (0x000301eb) cell_ai5_widget_pane_g2

0xeeee,	// (0x000301fb) cell_ai5_widget_pane_g3

0xef0d,	// (0x0003021a) cell_ai5_widget_pane_g4

0xef19,	// (0x00030226) cell_ai5_widget_pane_g5

0xef25,	// (0x00030232) cell_ai5_widget_pane_g6

0xef31,	// (0x0003023e) cell_ai5_widget_pane_g7

0xef79,	// (0x00030286) cell_ai5_widget_pane_t1_ParamLimits

0xef79,	// (0x00030286) cell_ai5_widget_pane_t1

0xef96,	// (0x000302a3) cell_ai5_widget_pane_t2_ParamLimits

0xef96,	// (0x000302a3) cell_ai5_widget_pane_t2

0xefae,	// (0x000302bb) cell_ai5_widget_pane_t3_ParamLimits

0xefae,	// (0x000302bb) cell_ai5_widget_pane_t3

0xefc6,	// (0x000302d3) cell_ai5_widget_pane_t4_ParamLimits

0xefc6,	// (0x000302d3) cell_ai5_widget_pane_t4

0xefe0,	// (0x000302ed) cell_ai5_widget_pane_t5_ParamLimits

0xefe0,	// (0x000302ed) cell_ai5_widget_pane_t5

0x994a,	// (0x0002ac57) cell_ai5_widget_pane_t6_ParamLimits

0x994a,	// (0x0002ac57) cell_ai5_widget_pane_t6

0x995c,	// (0x0002ac69) cell_ai5_widget_pane_t7_ParamLimits

0x995c,	// (0x0002ac69) cell_ai5_widget_pane_t7

0xefff,	// (0x0003030c) cell_ai5_widget_pane_t8_ParamLimits

0xefff,	// (0x0003030c) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x00031158) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x00031158) cell_ai5_widget_pane_t

0xf04b,	// (0x00030358) grid_ai5_widget_pane

0x3058,	// (0x00024365) highlight_cell_ai5_widget_pane_ParamLimits

0x3058,	// (0x00024365) highlight_cell_ai5_widget_pane

0xf062,	// (0x0003036f) ai5_sk_left_pane

0xf06c,	// (0x00030379) ai5_sk_middle_pane

0xf076,	// (0x00030383) ai5_sk_right_pane

0x99f6,	// (0x0002ad03) bg_ai5_widget_pane_g1_ParamLimits

0x99f6,	// (0x0002ad03) bg_ai5_widget_pane_g1

0x9a02,	// (0x0002ad0f) bg_ai5_widget_pane_g2_ParamLimits

0x9a02,	// (0x0002ad0f) bg_ai5_widget_pane_g2

0x9a0e,	// (0x0002ad1b) bg_ai5_widget_pane_g3_ParamLimits

0x9a0e,	// (0x0002ad1b) bg_ai5_widget_pane_g3

0x9a1a,	// (0x0002ad27) bg_ai5_widget_pane_g4_ParamLimits

0x9a1a,	// (0x0002ad27) bg_ai5_widget_pane_g4

0x9a26,	// (0x0002ad33) bg_ai5_widget_pane_g5_ParamLimits

0x9a26,	// (0x0002ad33) bg_ai5_widget_pane_g5

0x9a32,	// (0x0002ad3f) bg_ai5_widget_pane_g6_ParamLimits

0x9a32,	// (0x0002ad3f) bg_ai5_widget_pane_g6

0x9a3e,	// (0x0002ad4b) bg_ai5_widget_pane_g7_ParamLimits

0x9a3e,	// (0x0002ad4b) bg_ai5_widget_pane_g7

0x9a4a,	// (0x0002ad57) bg_ai5_widget_pane_g8_ParamLimits

0x9a4a,	// (0x0002ad57) bg_ai5_widget_pane_g8

0x9a56,	// (0x0002ad63) bg_ai5_widget_pane_g9_ParamLimits

0x9a56,	// (0x0002ad63) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x0003116d) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x0003116d) bg_ai5_widget_pane_g

0x9a7d,	// (0x0002ad8a) cell_shortcut_ai5_widget_pane_ParamLimits

0x9a7d,	// (0x0002ad8a) cell_shortcut_ai5_widget_pane

0x129d,	// (0x000225aa) bg_cell_shortcut_ai5_widget_pane

0x9a8f,	// (0x0002ad9c) cell_grid_ai5_widget_pane_g1

0x9a98,	// (0x0002ada5) highlight_cell_shortcut_ai5_widget_pane

0x4b88,	// (0x00025e95) ai5_sk_left_pane_g1

0x9aa0,	// (0x0002adad) ai5_sk_left_pane_g2

0x9aa8,	// (0x0002adb5) ai5_sk_left_pane_g3

0x9ab0,	// (0x0002adbd) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x00031180) ai5_sk_left_pane_g

0x9ab8,	// (0x0002adc5) ai5_sk_left_pane_t1

0x4b80,	// (0x00025e8d) ai5_sk_right_pane_g1

0x9ac6,	// (0x0002add3) ai5_sk_right_pane_g2

0x9ace,	// (0x0002addb) ai5_sk_right_pane_g3

0x9ad6,	// (0x0002ade3) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x00031189) ai5_sk_right_pane_g

0x9ade,	// (0x0002adeb) ai5_sk_right_pane_t1

0x4b80,	// (0x00025e8d) ai5_sk_middle_pane_g1

0x4b88,	// (0x00025e95) ai5_sk_middle_pane_g2

0x4ba0,	// (0x00025ead) ai5_sk_middle_pane_g3

0x9ace,	// (0x0002addb) ai5_sk_middle_pane_g4

0x9aa8,	// (0x0002adb5) ai5_sk_middle_pane_g5

0x9aec,	// (0x0002adf9) ai5_sk_middle_pane_g6

0xf080,	// (0x0003038d) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x00031192) ai5_sk_middle_pane_g

0xcb35,	// (0x0002de42) aid_touch_area_size_lc0_ParamLimits

0xcb35,	// (0x0002de42) aid_touch_area_size_lc0

0x2676,	// (0x00023983) cell_hwr_candidate_pane_t1_ParamLimits

0x46b1,	// (0x000259be) aid_touch_navi_pane

0xd435,	// (0x0002e742) status_dt_navi_pane_ParamLimits

0xd435,	// (0x0002e742) status_dt_navi_pane

0xd44d,	// (0x0002e75a) status_dt_sta_pane_ParamLimits

0xd44d,	// (0x0002e75a) status_dt_sta_pane

0xf088,	// (0x00030395) dt_sta_controll_pane

0xf095,	// (0x000303a2) dt_sta_indi_pane

0xf0a2,	// (0x000303af) dt_sta_title_pane

0x145b,	// (0x00022768) bg_dt_sta_indi_pane_ParamLimits

0x145b,	// (0x00022768) bg_dt_sta_indi_pane

0xf0b4,	// (0x000303c1) dt_sta_battery_pane

0xf0bc,	// (0x000303c9) dt_sta_indi_pane_g1

0xf0c5,	// (0x000303d2) dt_sta_indi_pane_g2

0xf0ce,	// (0x000303db) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x000311a1) dt_sta_indi_pane_g

0xf0d7,	// (0x000303e4) dt_sta_signal_pane

0x3058,	// (0x00024365) bg_dt_sta_title_pane_ParamLimits

0x3058,	// (0x00024365) bg_dt_sta_title_pane

0xf0e0,	// (0x000303ed) dt_sta_title_pane_g1

0xf0e8,	// (0x000303f5) dt_sta_title_pane_t1_ParamLimits

0xf0e8,	// (0x000303f5) dt_sta_title_pane_t1

0xe7f1,	// (0x0002fafe) bg_dt_sta_control_pane

0xf0fd,	// (0x0003040a) dt_sta_controll_pane_g1

0xf106,	// (0x00030413) bg_dt_sta_title_pane_g1

0xf10f,	// (0x0003041c) bg_dt_sta_title_pane_g2

0xf118,	// (0x00030425) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x000311a8) bg_dt_sta_title_pane_g

0x721e,	// (0x0002852b) bg_dt_sta_indi_pane_g1

0x9b9a,	// (0x0002aea7) dt_sta_signal_pane_g1

0x9ba2,	// (0x0002aeaf) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x000311af) dt_sta_signal_pane_g

0x9baa,	// (0x0002aeb7) dt_sta_battery_pane_g1

0x9bb3,	// (0x0002aec0) dt_sta_battery_pane_t1

0x721e,	// (0x0002852b) bg_dt_sta_control_pane_g1

0x37b4,	// (0x00024ac1) fep_china_uni_eep_pane

0x37bc,	// (0x00024ac9) fep_china_uni_entry_pane_ParamLimits

0x37cc,	// (0x00024ad9) popup_fep_china_uni_window_g1_ParamLimits

0x37dc,	// (0x00024ae9) popup_fep_china_uni_window_g2_ParamLimits

0x37dc,	// (0x00024ae9) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x00030a3d) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x00030a3d) popup_fep_china_uni_window_g

0x9bc2,	// (0x0002aecf) fep_china_uni_eep_pane_g1

0x9bca,	// (0x0002aed7) fep_china_uni_eep_pane_t1

0x96d7,	// (0x0002a9e4) aid_touch_area_size_smil_player

0x4809,	// (0x00025b16) lc0_clock_pane

0x4a07,	// (0x00025d14) status_pane_g5_ParamLimits

0x4a07,	// (0x00025d14) status_pane_g5

0xc595,	// (0x0002d8a2) popup_keymap_window

0x49c5,	// (0x00025cd2) status_icon_pane

0xeeee,	// (0x000301fb) cell_ai5_widget_pane_g3_ParamLimits

0xef0d,	// (0x0003021a) cell_ai5_widget_pane_g4_ParamLimits

0xef19,	// (0x00030226) cell_ai5_widget_pane_g5_ParamLimits

0xef3d,	// (0x0003024a) cell_ai5_widget_pane_g8_ParamLimits

0xef3d,	// (0x0003024a) cell_ai5_widget_pane_g8

0xef51,	// (0x0003025e) cell_ai5_widget_pane_g9_ParamLimits

0xef51,	// (0x0003025e) cell_ai5_widget_pane_g9

0xef65,	// (0x00030272) cell_ai5_widget_pane_g10_ParamLimits

0xef65,	// (0x00030272) cell_ai5_widget_pane_g10

0x9bd9,	// (0x0002aee6) status_icon_pane_g1

0xe7f1,	// (0x0002fafe) bg_popup_sub_pane_cp13

0x9be1,	// (0x0002aeee) popup_keymap_window_t1

0xc296,	// (0x0002d5a3) control_pane_g6_ParamLimits

0xc296,	// (0x0002d5a3) control_pane_g6

0xc2a3,	// (0x0002d5b0) control_pane_g7_ParamLimits

0xc2a3,	// (0x0002d5b0) control_pane_g7

0xc2b0,	// (0x0002d5bd) control_pane_g8_ParamLimits

0xc2b0,	// (0x0002d5bd) control_pane_g8

0xf088,	// (0x00030395) dt_sta_controll_pane_ParamLimits

0xf095,	// (0x000303a2) dt_sta_indi_pane_ParamLimits

0xf0a2,	// (0x000303af) dt_sta_title_pane_ParamLimits

0x1990,	// (0x00022c9d) aid_size_touch_scroll_bar_cale

0x0ef3,	// (0x00022200) popup_discreet_window_ParamLimits

0x0ef3,	// (0x00022200) popup_discreet_window

0xba9a,	// (0x0002cda7) popup_sk_window

0x521e,	// (0x0002652b) bg_popup_sub_pane_cp28_ParamLimits

0x521e,	// (0x0002652b) bg_popup_sub_pane_cp28

0x9bef,	// (0x0002aefc) popup_discreet_window_g1_ParamLimits

0x9bef,	// (0x0002aefc) popup_discreet_window_g1

0x9c0f,	// (0x0002af1c) popup_discreet_window_t1_ParamLimits

0x9c0f,	// (0x0002af1c) popup_discreet_window_t1

0x9c2d,	// (0x0002af3a) popup_discreet_window_t2_ParamLimits

0x9c2d,	// (0x0002af3a) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x000311b4) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x000311b4) popup_discreet_window_t

0x2feb,	// (0x000242f8) popup_sk_window_g1

0x2ff5,	// (0x00024302) popup_sk_window_g2

0x0001,

0xfeae,	// (0x000311bb) popup_sk_window_g

0x9c7f,	// (0x0002af8c) popup_sk_window_t1

0x9c8d,	// (0x0002af9a) popup_sk_window_t1_copy1

0xeede,	// (0x000301eb) cell_ai5_widget_pane_g2_ParamLimits

0xf011,	// (0x0003031e) cell_ai5_widget_pane_t9_ParamLimits

0xf011,	// (0x0003031e) cell_ai5_widget_pane_t9

0xe7f1,	// (0x0002fafe) main_fep_fshwr2_pane

0xf121,	// (0x0003042e) aid_fshwr2_btn_pane

0xf129,	// (0x00030436) aid_fshwr2_syb_pane

0xf131,	// (0x0003043e) aid_fshwr2_txt_pane

0xf139,	// (0x00030446) fshwr2_func_candi_pane

0xf143,	// (0x00030450) fshwr2_hwr_syb_pane

0xf14f,	// (0x0003045c) fshwr2_icf_pane

0xe7f1,	// (0x0002fafe) fshwr2_icf_bg_pane

0xf159,	// (0x00030466) fshwr2_icf_pane_t1_ParamLimits

0xf159,	// (0x00030466) fshwr2_icf_pane_t1

0x721e,	// (0x0002852b) fshwr2_func_candi_pane_g1

0x9d00,	// (0x0002b00d) fshwr2_func_candi_row_pane_ParamLimits

0x9d00,	// (0x0002b00d) fshwr2_func_candi_row_pane

0xf171,	// (0x0003047e) cell_fshwr2_syb_pane_ParamLimits

0xf171,	// (0x0003047e) cell_fshwr2_syb_pane

0x74a8,	// (0x000287b5) fshwr2_hwr_syb_pane_g1_ParamLimits

0x74a8,	// (0x000287b5) fshwr2_hwr_syb_pane_g1

0xe7f1,	// (0x0002fafe) bg_popup_call_pane_cp01

0x9d2b,	// (0x0002b038) fshwr2_func_candi_cell_pane_ParamLimits

0x9d2b,	// (0x0002b038) fshwr2_func_candi_cell_pane

0x9d5d,	// (0x0002b06a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9d5d,	// (0x0002b06a) fshwr2_func_candi_cell_bg_pane

0x9d77,	// (0x0002b084) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9d77,	// (0x0002b084) fshwr2_func_candi_cell_pane_g1

0x9d97,	// (0x0002b0a4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9d97,	// (0x0002b0a4) fshwr2_func_candi_cell_pane_t1

0xe7f1,	// (0x0002fafe) bg_button_pane_cp08

0x3cb6,	// (0x00024fc3) cell_fshwr2_syb_bg_pane

0xf18a,	// (0x00030497) cell_fshwr2_syb_bg_pane_g1

0xf192,	// (0x0003049f) cell_fshwr2_syb_bg_pane_t1

0x3058,	// (0x00024365) main_tmo_pane

0xd767,	// (0x0002ea74) uni_indicator_pane_g1_ParamLimits

0xd77c,	// (0x0002ea89) uni_indicator_pane_g2_ParamLimits

0xd791,	// (0x0002ea9e) uni_indicator_pane_g3_ParamLimits

0xd7a7,	// (0x0002eab4) uni_indicator_pane_g4_ParamLimits

0xd7a7,	// (0x0002eab4) uni_indicator_pane_g4

0xd7bb,	// (0x0002eac8) uni_indicator_pane_g5_ParamLimits

0xd7bb,	// (0x0002eac8) uni_indicator_pane_g5

0xd7cf,	// (0x0002eadc) uni_indicator_pane_g6_ParamLimits

0xd7cf,	// (0x0002eadc) uni_indicator_pane_g6

0xf928,	// (0x00030c35) uni_indicator_pane_g_ParamLimits

0xe2b2,	// (0x0002f5bf) popup_tmo_note_window_ParamLimits

0xe2b2,	// (0x0002f5bf) popup_tmo_note_window

0xe7f1,	// (0x0002fafe) fshwr2_bg_pane

0x9d88,	// (0x0002b095) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9d88,	// (0x0002b095) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x000311c0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x000311c0) fshwr2_func_candi_cell_pane_g

0x721e,	// (0x0002852b) bg_popup_window_pane_cp01

0x9dc1,	// (0x0002b0ce) bg_popup_window_pane_g1_cp01

0x9dca,	// (0x0002b0d7) bg_popup_window_pane_cp22_ParamLimits

0x9dca,	// (0x0002b0d7) bg_popup_window_pane_cp22

0x9dd8,	// (0x0002b0e5) listscroll_tmo_link_pane_ParamLimits

0x9dd8,	// (0x0002b0e5) listscroll_tmo_link_pane

0x9e18,	// (0x0002b125) popup_tmo_note_window_g1_ParamLimits

0x9e18,	// (0x0002b125) popup_tmo_note_window_g1

0x9e25,	// (0x0002b132) tmo_note_info_pane_ParamLimits

0x9e25,	// (0x0002b132) tmo_note_info_pane

0xf1a1,	// (0x000304ae) list_tmo_note_info_pane_g1_ParamLimits

0xf1a1,	// (0x000304ae) list_tmo_note_info_pane_g1

0x9e56,	// (0x0002b163) list_tmo_note_info_pane_g2_ParamLimits

0x9e56,	// (0x0002b163) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x000311c5) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x000311c5) list_tmo_note_info_pane_g

0x9e72,	// (0x0002b17f) list_tmo_note_info_text_pane_ParamLimits

0x9e72,	// (0x0002b17f) list_tmo_note_info_text_pane

0x9ef7,	// (0x0002b204) list_tmo_link_pane

0x9f04,	// (0x0002b211) scroll_pane_cp20

0x9f11,	// (0x0002b21e) list_single_tmo_link_pane_ParamLimits

0x9f11,	// (0x0002b21e) list_single_tmo_link_pane

0x9f21,	// (0x0002b22e) list_single_tmo_link_pane_t1

0x9f2f,	// (0x0002b23c) list_tmo_note_info_text_pane_t1_ParamLimits

0x9f2f,	// (0x0002b23c) list_tmo_note_info_text_pane_t1

0xbecf,	// (0x0002d1dc) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbecf,	// (0x0002d1dc) aid_size_touch_scroll_bar_cp01

0xb570,	// (0x0002c87d) aid_size_touch_slider_marker

0xba8a,	// (0x0002cd97) popup_settings_window_ParamLimits

0xba8a,	// (0x0002cd97) popup_settings_window

0x046d,	// (0x0002177a) popup_candi_list_indi_window

0x46b1,	// (0x000259be) aid_touch_navi_pane_ParamLimits

0x27f3,	// (0x00023b00) rs_clock_indi_pane

0x27fc,	// (0x00023b09) sctrl_sk_bottom_pane_ParamLimits

0x280d,	// (0x00023b1a) sctrl_sk_top_pane_ParamLimits

0x28f2,	// (0x00023bff) popup_fep_tooltip_window

0x97eb,	// (0x0002aaf8) aid_size_cell_widget_grid_ParamLimits

0xeed2,	// (0x000301df) cell_ai5_widget_pane_g1_ParamLimits

0xeed2,	// (0x000301df) cell_ai5_widget_pane_g1

0xef25,	// (0x00030232) cell_ai5_widget_pane_g6_ParamLimits

0xef31,	// (0x0003023e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x00031143) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x00031143) cell_ai5_widget_pane_g

0xf035,	// (0x00030342) cell_ai5_widget_pane_t10_ParamLimits

0xf035,	// (0x00030342) cell_ai5_widget_pane_t10

0xf04b,	// (0x00030358) grid_ai5_widget_pane_ParamLimits

0x9a62,	// (0x0002ad6f) cell_contacts_ai5_widget_pane_ParamLimits

0x9a62,	// (0x0002ad6f) cell_contacts_ai5_widget_pane

0x9c42,	// (0x0002af4f) popup_discreet_window_t3_ParamLimits

0x9c42,	// (0x0002af4f) popup_discreet_window_t3

0x9cd1,	// (0x0002afde) popup_fshwr2_char_preview_window_ParamLimits

0x9cd1,	// (0x0002afde) popup_fshwr2_char_preview_window

0xf1b8,	// (0x000304c5) tmo_note_info_pane_t1

0xf1cd,	// (0x000304da) tmo_note_info_pane_t2

0xf1e6,	// (0x000304f3) tmo_note_info_pane_t3

0x9ed3,	// (0x0002b1e0) tmo_note_info_pane_t4

0x9ee5,	// (0x0002b1f2) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x000311ca) tmo_note_info_pane_t

0x9ef7,	// (0x0002b204) list_tmo_link_pane_ParamLimits

0x9f04,	// (0x0002b211) scroll_pane_cp20_ParamLimits

0xe7f1,	// (0x0002fafe) bg_popup_fep_char_preview_window_cp01

0x9f48,	// (0x0002b255) popup_fshwr2_char_preview_window_t1

0x9f56,	// (0x0002b263) popup_candi_list_indi_window_g1

0x9f5f,	// (0x0002b26c) bg_cell_contacts_ai5_widget_pane

0x9f6b,	// (0x0002b278) cell_contacts_ai5_widget_pane_g1

0x9f7f,	// (0x0002b28c) cell_contacts_ai5_widget_pane_g2

0x9f8e,	// (0x0002b29b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x000311d5) cell_contacts_ai5_widget_pane_g

0x9fa1,	// (0x0002b2ae) cell_contacts_ai5_widget_pane_t1

0x3058,	// (0x00024365) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf260,	// (0x0003056d) settings_container_pane

0x3cb6,	// (0x00024fc3) listscroll_set_pane_copy1

0x6964,	// (0x00027c71) scroll_pane_cp121_copy1

0xa027,	// (0x0002b334) set_content_pane_copy1

0xf26c,	// (0x00030579) aid_height_set_list_copy1_ParamLimits

0xf26c,	// (0x00030579) aid_height_set_list_copy1

0x5fb1,	// (0x000272be) aid_size_parent_copy1_ParamLimits

0x5fb1,	// (0x000272be) aid_size_parent_copy1

0xf278,	// (0x00030585) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf278,	// (0x00030585) button_value_adjust_pane_cp6_copy1

0x403c,	// (0x00025349) list_highlight_pane_cp2_copy1_ParamLimits

0x403c,	// (0x00025349) list_highlight_pane_cp2_copy1

0xf28c,	// (0x00030599) list_set_pane_copy1_ParamLimits

0xf28c,	// (0x00030599) list_set_pane_copy1

0xf1fb,	// (0x00030508) main_pane_set_t1_copy1_ParamLimits

0xf1fb,	// (0x00030508) main_pane_set_t1_copy1

0xf235,	// (0x00030542) main_pane_set_t2_copy1_ParamLimits

0xf235,	// (0x00030542) main_pane_set_t2_copy1

0xf353,	// (0x00030660) main_pane_set_t3_copy1

0xf361,	// (0x0003066e) main_pane_set_t4_copy1

0xf254,	// (0x00030561) set_content_pane_g1_copy1_ParamLimits

0xf254,	// (0x00030561) set_content_pane_g1_copy1

0xf36f,	// (0x0003067c) setting_code_pane_copy1

0xa13c,	// (0x0002b449) setting_slider_graphic_pane_copy1

0xa13c,	// (0x0002b449) setting_slider_pane_copy1

0xa13c,	// (0x0002b449) setting_text_pane_copy1

0xa146,	// (0x0002b453) setting_volume_pane_copy1

0xf379,	// (0x00030686) settings_code_pane_cp2_copy1

0xf381,	// (0x0003068e) settings_code_pane_cp_copy1_ParamLimits

0xf381,	// (0x0003068e) settings_code_pane_cp_copy1

0xf395,	// (0x000306a2) volume_set_pane_copy1

0xf3a1,	// (0x000306ae) volume_set_pane_g10_copy1

0xf3ad,	// (0x000306ba) volume_set_pane_g1_copy1

0xf3b7,	// (0x000306c4) volume_set_pane_g2_copy1

0xf3c1,	// (0x000306ce) volume_set_pane_g3_copy1

0xf3cb,	// (0x000306d8) volume_set_pane_g4_copy1

0xf3d5,	// (0x000306e2) volume_set_pane_g5_copy1

0xf3df,	// (0x000306ec) volume_set_pane_g6_copy1

0xf3e9,	// (0x000306f6) volume_set_pane_g7_copy1

0xf3f3,	// (0x00030700) volume_set_pane_g8_copy1

0xf3fd,	// (0x0003070a) volume_set_pane_g9_copy1

0x1141,	// (0x0002244e) bg_set_opt_pane_cp_copy1_ParamLimits

0x1141,	// (0x0002244e) bg_set_opt_pane_cp_copy1

0xa1dd,	// (0x0002b4ea) setting_slider_pane_t1_copy1_ParamLimits

0xa1dd,	// (0x0002b4ea) setting_slider_pane_t1_copy1

0xf407,	// (0x00030714) setting_slider_pane_t2_copy1_ParamLimits

0xf407,	// (0x00030714) setting_slider_pane_t2_copy1

0xf421,	// (0x0003072e) setting_slider_pane_t3_copy1_ParamLimits

0xf421,	// (0x0003072e) setting_slider_pane_t3_copy1

0xf439,	// (0x00030746) slider_set_pane_copy1_ParamLimits

0xf439,	// (0x00030746) slider_set_pane_copy1

0x30bf,	// (0x000243cc) set_opt_bg_pane_g1_copy2

0x30c7,	// (0x000243d4) set_opt_bg_pane_g2_copy2

0xa243,	// (0x0002b550) set_opt_bg_pane_g3_copy2

0x30d7,	// (0x000243e4) set_opt_bg_pane_g4_copy2

0x30df,	// (0x000243ec) set_opt_bg_pane_g5_copy2

0x30e7,	// (0x000243f4) set_opt_bg_pane_g6_copy2

0xf44f,	// (0x0003075c) set_opt_bg_pane_g7_copy2

0xa257,	// (0x0002b564) set_opt_bg_pane_g8_copy2

0xa261,	// (0x0002b56e) set_opt_bg_pane_g9_copy2

0xa26b,	// (0x0002b578) aid_size_touch_slider_mark_copy1_ParamLimits

0xa26b,	// (0x0002b578) aid_size_touch_slider_mark_copy1

0xa27f,	// (0x0002b58c) slider_set_pane_g1_copy1

0xa288,	// (0x0002b595) slider_set_pane_g2_copy1

0x68b8,	// (0x00027bc5) slider_set_pane_g3_copy1_ParamLimits

0x68b8,	// (0x00027bc5) slider_set_pane_g3_copy1

0x68cc,	// (0x00027bd9) slider_set_pane_g4_copy1_ParamLimits

0x68cc,	// (0x00027bd9) slider_set_pane_g4_copy1

0x68e4,	// (0x00027bf1) slider_set_pane_g5_copy1_ParamLimits

0x68e4,	// (0x00027bf1) slider_set_pane_g5_copy1

0x68b8,	// (0x00027bc5) slider_set_pane_g6_copy1_ParamLimits

0x68b8,	// (0x00027bc5) slider_set_pane_g6_copy1

0xf459,	// (0x00030766) slider_set_pane_g7_copy1_ParamLimits

0xf459,	// (0x00030766) slider_set_pane_g7_copy1

0xe805,	// (0x0002fb12) bg_set_opt_pane_cp2_copy1

0xa2a6,	// (0x0002b5b3) setting_slider_graphic_pane_g1_copy1

0xf46f,	// (0x0003077c) setting_slider_graphic_pane_t1_copy1

0xf47f,	// (0x0003078c) setting_slider_graphic_pane_t2_copy1

0xf48f,	// (0x0003079c) slider_set_pane_cp_copy1

0xa2df,	// (0x0002b5ec) input_focus_pane_cp1_copy1

0xa2e8,	// (0x0002b5f5) list_set_text_pane_copy1

0xa2f0,	// (0x0002b5fd) setting_text_pane_g1_copy1

0x0c4a,	// (0x00021f57) set_text_pane_t1_copy1

0xa2df,	// (0x0002b5ec) input_focus_pane_cp2_copy1

0xa2f0,	// (0x0002b5fd) setting_code_pane_g1_copy1

0xf497,	// (0x000307a4) setting_code_pane_t1_copy1

0xf4a5,	// (0x000307b2) list_set_graphic_pane_copy1

0xe805,	// (0x0002fb12) bg_set_opt_pane_cp4_copy1

0xc163,	// (0x0002d470) list_set_graphic_pane_g1_copy1_ParamLimits

0xc163,	// (0x0002d470) list_set_graphic_pane_g1_copy1

0xf4b7,	// (0x000307c4) list_set_graphic_pane_g2_copy1

0xc17b,	// (0x0002d488) list_set_graphic_pane_t1_copy1_ParamLimits

0xc17b,	// (0x0002d488) list_set_graphic_pane_t1_copy1

0x721e,	// (0x0002852b) rs_clock_indi_pane_g1

0xa321,	// (0x0002b62e) rs_clock_indi_pane_t1

0xa32f,	// (0x0002b63c) rs_indi_pane

0xa337,	// (0x0002b644) rs_indi_pane_g1

0xa340,	// (0x0002b64d) rs_indi_pane_g2

0xa349,	// (0x0002b656) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x000311dc) rs_indi_pane_g

0x3cb6,	// (0x00024fc3) bg_popup_preview_window_pane_cp03

0xa352,	// (0x0002b65f) popup_fep_tooltip_window_t1

0x7ec4,	// (0x000291d1) popup_note2_window_g2_ParamLimits

0x7ec4,	// (0x000291d1) popup_note2_window_g2

0x0001,

0xfc68,	// (0x00030f75) popup_note2_window_g_ParamLimits

0xfc68,	// (0x00030f75) popup_note2_window_g

0x83cc,	// (0x000296d9) bg_popup_sub_pane_cp11_ParamLimits

0x83d9,	// (0x000296e6) cell_ai3_links_pane_g1_ParamLimits

0x83f0,	// (0x000296fd) cell_ai3_links_pane_t1

0x0c4a,	// (0x00021f57) set_text_pane_t1_copy1_ParamLimits

0x3bc3,	// (0x00024ed0) cell_graphic_popup_pane_cp2_ParamLimits

0x3bc3,	// (0x00024ed0) cell_graphic_popup_pane_cp2

0xa360,	// (0x0002b66d) cell_graphic_popup_pane_g1_cp2

0x17a3,	// (0x00022ab0) cell_graphic_popup_pane_g2_cp2

0xa368,	// (0x0002b675) cell_graphic_popup_pane_g3_cp2

0xa370,	// (0x0002b67d) cell_graphic_popup_pane_t2_cp2

0x17b4,	// (0x00022ac1) grid_highlight_pane_cp3_cp2

0x340b,	// (0x00024718) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3058,	// (0x00024365) main_tmo_pane_ParamLimits

0xe2a6,	// (0x0002f5b3) popup_tmo_big_image_note_window

0xeec2,	// (0x000301cf) cell_ai5_widget_list_pane

0xeeca,	// (0x000301d7) cell_ai5_widget_lrg_icon_pane

0xf1b8,	// (0x000304c5) tmo_note_info_pane_t1_ParamLimits

0xf1cd,	// (0x000304da) tmo_note_info_pane_t2_ParamLimits

0xf1e6,	// (0x000304f3) tmo_note_info_pane_t3_ParamLimits

0x9ed3,	// (0x0002b1e0) tmo_note_info_pane_t4_ParamLimits

0x9ee5,	// (0x0002b1f2) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x000311ca) tmo_note_info_pane_t_ParamLimits

0xf260,	// (0x0003056d) settings_container_pane_ParamLimits

0xa2d7,	// (0x0002b5e4) indicator_popup_pane_cp5

0xa2d7,	// (0x0002b5e4) indicator_popup_pane_cp6

0xf4a5,	// (0x000307b2) list_set_graphic_pane_copy1_ParamLimits

0xe7f1,	// (0x0002fafe) bg_popup_window_pane_cp23

0xa37e,	// (0x0002b68b) popup_tmo_big_image_note_window_g1

0xa38a,	// (0x0002b697) popup_tmo_big_image_note_window_t1

0xa39a,	// (0x0002b6a7) popup_tmo_big_image_note_window_t2

0xa3aa,	// (0x0002b6b7) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x000311e3) popup_tmo_big_image_note_window_t

0xf4bf,	// (0x000307cc) cell_ai5_widget_lrg_icon_pane_g1

0xf4c7,	// (0x000307d4) cell_ai5_widget_lrg_icon_pane_t1

0xf4d5,	// (0x000307e2) cell_ai5_widget_list_row_pane_ParamLimits

0xf4d5,	// (0x000307e2) cell_ai5_widget_list_row_pane

0xf4ee,	// (0x000307fb) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf4ee,	// (0x000307fb) cell_ai5_widget_list_row_pane_g1

0xf4fb,	// (0x00030808) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf4fb,	// (0x00030808) cell_ai5_widget_list_row_pane_t1

0xf513,	// (0x00030820) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf513,	// (0x00030820) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfedd,	// (0x000311ea) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x000311ea) cell_ai5_widget_list_row_pane_t

0xe7f1,	// (0x0002fafe) main_fep_vtchi_ss_pane

0xa420,	// (0x0002b72d) popup_fep_char_pre_window

0xa428,	// (0x0002b735) popup_fep_ituss_window

0xa449,	// (0x0002b756) popup_fep_vkbss_window

0xa46a,	// (0x0002b777) grid_vkbss_keypad_pane_ParamLimits

0xa46a,	// (0x0002b777) grid_vkbss_keypad_pane

0xa47a,	// (0x0002b787) ituss_keypad_pane

0xa492,	// (0x0002b79f) aid_vkbss_key_offset_ParamLimits

0xa492,	// (0x0002b79f) aid_vkbss_key_offset

0xa49e,	// (0x0002b7ab) cell_vkbss_key_pane_ParamLimits

0xa49e,	// (0x0002b7ab) cell_vkbss_key_pane

0xa4b4,	// (0x0002b7c1) bg_cell_vkbss_key_g1_ParamLimits

0xa4b4,	// (0x0002b7c1) bg_cell_vkbss_key_g1

0xa4c0,	// (0x0002b7cd) cell_vkbss_key_3p_pane_ParamLimits

0xa4c0,	// (0x0002b7cd) cell_vkbss_key_3p_pane

0xa4da,	// (0x0002b7e7) cell_vkbss_key_g1_ParamLimits

0xa4da,	// (0x0002b7e7) cell_vkbss_key_g1

0xa4f4,	// (0x0002b801) cell_vkbss_key_t1_ParamLimits

0xa4f4,	// (0x0002b801) cell_vkbss_key_t1

0xa51f,	// (0x0002b82c) cell_ituss_key_pane_ParamLimits

0xa51f,	// (0x0002b82c) cell_ituss_key_pane

0xa52f,	// (0x0002b83c) bg_cell_ituss_key_g1_ParamLimits

0xa52f,	// (0x0002b83c) bg_cell_ituss_key_g1

0xa53b,	// (0x0002b848) cell_ituss_key_pane_g1_ParamLimits

0xa53b,	// (0x0002b848) cell_ituss_key_pane_g1

0xa547,	// (0x0002b854) cell_ituss_key_pane_g2_ParamLimits

0xa547,	// (0x0002b854) cell_ituss_key_pane_g2

0x0001,

0xfee2,	// (0x000311ef) cell_ituss_key_pane_g_ParamLimits

0xfee2,	// (0x000311ef) cell_ituss_key_pane_g

0xa560,	// (0x0002b86d) cell_ituss_key_t1_ParamLimits

0xa560,	// (0x0002b86d) cell_ituss_key_t1

0xa58e,	// (0x0002b89b) cell_ituss_key_t2_ParamLimits

0xa58e,	// (0x0002b89b) cell_ituss_key_t2

0xa5bf,	// (0x0002b8cc) cell_ituss_key_t3_ParamLimits

0xa5bf,	// (0x0002b8cc) cell_ituss_key_t3

0xa5f0,	// (0x0002b8fd) cell_ituss_key_t4_ParamLimits

0xa5f0,	// (0x0002b8fd) cell_ituss_key_t4

0x0003,

0xfee7,	// (0x000311f4) cell_ituss_key_t_ParamLimits

0xfee7,	// (0x000311f4) cell_ituss_key_t

0xa621,	// (0x0002b92e) cell_vkbss_key_3p_pane_g1

0xa629,	// (0x0002b936) cell_vkbss_key_3p_pane_g2

0xa631,	// (0x0002b93e) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef0,	// (0x000311fd) cell_vkbss_key_3p_pane_g

0xe7f1,	// (0x0002fafe) bg_popup_fep_char_preview_window_cp02

0xa639,	// (0x0002b946) popup_fep_char_pre_window_t1

0xeeb8,	// (0x000301c5) main_ai5_sk_pane

0x9f5f,	// (0x0002b26c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9f6b,	// (0x0002b278) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9f7f,	// (0x0002b28c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9f8e,	// (0x0002b29b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x000311d5) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9fa1,	// (0x0002b2ae) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3058,	// (0x00024365) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf525,	// (0x00030832) main_ai5_sk_pane_g1

0x5056,	// (0x00026363) popup_query_code_window_g1

0xa43e,	// (0x0002b74b) popup_fep_vkb_icf_pane

0xa454,	// (0x0002b761) popup_fep_vtchi_icf_pane

0x3058,	// (0x00024365) bg_icf_pane

0xa660,	// (0x0002b96d) list_vkb_icf_pane

0x3058,	// (0x00024365) bg_icf_pane_cp01

0xa678,	// (0x0002b985) vtchi_icf_list_pane

0xa688,	// (0x0002b995) list_vkb_icf_pane_t1_ParamLimits

0xa688,	// (0x0002b995) list_vkb_icf_pane_t1

0xa69f,	// (0x0002b9ac) vtchi_icf_list_pane_t1_ParamLimits

0xa69f,	// (0x0002b9ac) vtchi_icf_list_pane_t1

0xa428,	// (0x0002b735) popup_fep_ituss_window_ParamLimits

0xa454,	// (0x0002b761) popup_fep_vtchi_icf_pane_ParamLimits

0xa47a,	// (0x0002b787) ituss_keypad_pane_ParamLimits

0xa489,	// (0x0002b796) ituss_sks_pane

0x3058,	// (0x00024365) bg_icf_pane_ParamLimits

0xa651,	// (0x0002b95e) icf_edit_indi_pane_ParamLimits

0xa651,	// (0x0002b95e) icf_edit_indi_pane

0xa660,	// (0x0002b96d) list_vkb_icf_pane_ParamLimits

0x3058,	// (0x00024365) bg_icf_pane_cp01_ParamLimits

0xa66c,	// (0x0002b979) icf_edit_indi_pane_cp01_ParamLimits

0xa66c,	// (0x0002b979) icf_edit_indi_pane_cp01

0xa680,	// (0x0002b98d) vtchi_query_pane

0x74a8,	// (0x000287b5) icf_edit_indi_pane_g1_ParamLimits

0x74a8,	// (0x000287b5) icf_edit_indi_pane_g1

0xa6b8,	// (0x0002b9c5) icf_edit_indi_pane_g2_ParamLimits

0xa6b8,	// (0x0002b9c5) icf_edit_indi_pane_g2

0x0001,

0xfef7,	// (0x00031204) icf_edit_indi_pane_g_ParamLimits

0xfef7,	// (0x00031204) icf_edit_indi_pane_g

0xa6c4,	// (0x0002b9d1) icf_edit_indi_pane_t1

0xa6d2,	// (0x0002b9df) bg_input_focus_pane_cp042

0x1987,	// (0x00022c94) vtchi_button_pane

0xa6db,	// (0x0002b9e8) vtchi_query_pane_t1

0xa6e9,	// (0x0002b9f6) vtchi_query_pane_t2

0xa6f7,	// (0x0002ba04) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x00031209) vtchi_query_pane_t

0xe7f1,	// (0x0002fafe) bg_button_pane_cp13

0xa705,	// (0x0002ba12) vtchi_button_pane_g1

0x8c3b,	// (0x00029f48) ituss_sks_pane_g1

0xa70d,	// (0x0002ba1a) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x00031210) ituss_sks_pane_g

0xa716,	// (0x0002ba23) ituss_sks_pane_t1

0xa724,	// (0x0002ba31) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x00031215) ituss_sks_pane_t

0x6cc5,	// (0x00027fd2) indicator_nsta_pane_cp_g1

0x6cce,	// (0x00027fdb) indicator_nsta_pane_cp_g2

0x6cd6,	// (0x00027fe3) indicator_nsta_pane_cp_g3

0x6cde,	// (0x00027feb) indicator_nsta_pane_cp_g4

0x6ce6,	// (0x00027ff3) indicator_nsta_pane_cp_g5

0x6cee,	// (0x00027ffb) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x00030dbf) indicator_nsta_pane_cp_g

0xecd7,	// (0x0002ffe4) cell_graphic2_pane_t2_ParamLimits

0xecd7,	// (0x0002ffe4) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x000310cc) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x000310cc) cell_graphic2_pane_t

0xed0d,	// (0x0003001a) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small

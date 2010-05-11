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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000268b };

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
0x955d,	// (0x0000bbe8) Screen

0x9569,	// (0x0000bbf4) application_window_ParamLimits

0x9569,	// (0x0000bbf4) application_window

0xddcb,	// (0x00010456) screen_g1

0x95a1,	// (0x0000bc2c) area_bottom_pane_ParamLimits

0x95a1,	// (0x0000bc2c) area_bottom_pane

0xddf5,	// (0x00010480) area_top_pane_ParamLimits

0xddf5,	// (0x00010480) area_top_pane

0xde89,	// (0x00010514) main_pane_ParamLimits

0xde89,	// (0x00010514) main_pane

0xdf44,	// (0x000105cf) misc_graphics

0xaf69,	// (0x0000d5f4) battery_pane_ParamLimits

0xaf69,	// (0x0000d5f4) battery_pane

0x1b40,	// (0x000041cb) bg_status_flat_pane_g8

0x1b48,	// (0x000041d3) bg_status_flat_pane_g9

0x0cbe,	// (0x00003349) context_pane_ParamLimits

0x0cbe,	// (0x00003349) context_pane

0xb0e0,	// (0x0000d76b) navi_pane_ParamLimits

0xb0e0,	// (0x0000d76b) navi_pane

0xb16a,	// (0x0000d7f5) signal_pane_ParamLimits

0xb16a,	// (0x0000d7f5) signal_pane

0x0008,

0xf868,	// (0x00011ef3) bg_status_flat_pane_g

0xb1fa,	// (0x0000d885) status_pane_g1_ParamLimits

0xb1fa,	// (0x0000d885) status_pane_g1

0xb210,	// (0x0000d89b) status_pane_g2_ParamLimits

0xb210,	// (0x0000d89b) status_pane_g2

0x0eff,	// (0x0000358a) status_pane_g3_ParamLimits

0x0eff,	// (0x0000358a) status_pane_g3

0x0004,

0xf79b,	// (0x00011e26) status_pane_g_ParamLimits

0xf79b,	// (0x00011e26) status_pane_g

0xb21c,	// (0x0000d8a7) title_pane_ParamLimits

0xb21c,	// (0x0000d8a7) title_pane

0xb27f,	// (0x0000d90a) uni_indicator_pane_ParamLimits

0xb27f,	// (0x0000d90a) uni_indicator_pane

0x04d7,	// (0x00002b62) bg_list_pane_ParamLimits

0x04d7,	// (0x00002b62) bg_list_pane

0xa797,	// (0x0000ce22) find_pane

0xa79f,	// (0x0000ce2a) listscroll_app_pane_ParamLimits

0xa79f,	// (0x0000ce2a) listscroll_app_pane

0x050b,	// (0x00002b96) listscroll_form_pane

0xa7af,	// (0x0000ce3a) listscroll_gen_pane_ParamLimits

0xa7af,	// (0x0000ce3a) listscroll_gen_pane

0x0527,	// (0x00002bb2) listscroll_set_pane

0x294f,	// (0x00004fda) main_idle_act_pane

0xf546,	// (0x00011bd1) main_idle_trad_pane

0xf546,	// (0x00011bd1) main_list_empty_pane

0x0541,	// (0x00002bcc) main_midp_pane

0x054d,	// (0x00002bd8) main_pane_g1_ParamLimits

0x054d,	// (0x00002bd8) main_pane_g1

0xa7c3,	// (0x0000ce4e) popup_ai_message_window_ParamLimits

0xa7c3,	// (0x0000ce4e) popup_ai_message_window

0xa863,	// (0x0000ceee) popup_fep_china_uni_window_ParamLimits

0xa863,	// (0x0000ceee) popup_fep_china_uni_window

0x0677,	// (0x00002d02) popup_fep_japan_candidate_window_ParamLimits

0x0677,	// (0x00002d02) popup_fep_japan_candidate_window

0x06a1,	// (0x00002d2c) popup_fep_japan_predictive_window_ParamLimits

0x06a1,	// (0x00002d2c) popup_fep_japan_predictive_window

0xa8c3,	// (0x0000cf4e) popup_find_window

0xa8e0,	// (0x0000cf6b) popup_grid_graphic_window_ParamLimits

0xa8e0,	// (0x0000cf6b) popup_grid_graphic_window

0x0712,	// (0x00002d9d) popup_large_graphic_colour_window

0xa984,	// (0x0000d00f) popup_menu_window_ParamLimits

0xa984,	// (0x0000d00f) popup_menu_window

0xab74,	// (0x0000d1ff) popup_note_image_window

0xab34,	// (0x0000d1bf) popup_note_wait_window_ParamLimits

0xab34,	// (0x0000d1bf) popup_note_wait_window

0xab8c,	// (0x0000d217) popup_note_window_ParamLimits

0xab8c,	// (0x0000d217) popup_note_window

0xac3a,	// (0x0000d2c5) popup_query_code_window_ParamLimits

0xac3a,	// (0x0000d2c5) popup_query_code_window

0x097e,	// (0x00003009) popup_query_data_code_window_ParamLimits

0x097e,	// (0x00003009) popup_query_data_code_window

0xac7a,	// (0x0000d305) popup_query_data_window_ParamLimits

0xac7a,	// (0x0000d305) popup_query_data_window

0xad0e,	// (0x0000d399) popup_query_sat_info_window_ParamLimits

0xad0e,	// (0x0000d399) popup_query_sat_info_window

0xadb9,	// (0x0000d444) popup_snote_single_graphic_window_ParamLimits

0xadb9,	// (0x0000d444) popup_snote_single_graphic_window

0xadb9,	// (0x0000d444) popup_snote_single_text_window_ParamLimits

0xadb9,	// (0x0000d444) popup_snote_single_text_window

0x0a19,	// (0x000030a4) popup_sub_window_general

0x0b5f,	// (0x000031ea) popup_window_general_ParamLimits

0x0b5f,	// (0x000031ea) popup_window_general

0x0b78,	// (0x00003203) power_save_pane

0xa605,	// (0x0000cc90) control_pane_g1_ParamLimits

0xa605,	// (0x0000cc90) control_pane_g1

0xa62e,	// (0x0000ccb9) control_pane_g2_ParamLimits

0xa62e,	// (0x0000ccb9) control_pane_g2

0x037c,	// (0x00002a07) control_pane_g3_ParamLimits

0x037c,	// (0x00002a07) control_pane_g3

0x0007,

0xf783,	// (0x00011e0e) control_pane_g_ParamLimits

0xf783,	// (0x00011e0e) control_pane_g

0xa690,	// (0x0000cd1b) control_pane_t1_ParamLimits

0xa690,	// (0x0000cd1b) control_pane_t1

0xa6ee,	// (0x0000cd79) control_pane_t2_ParamLimits

0xa6ee,	// (0x0000cd79) control_pane_t2

0x0002,

0xf794,	// (0x00011e1f) control_pane_t_ParamLimits

0xf794,	// (0x00011e1f) control_pane_t

0xa55e,	// (0x0000cbe9) navi_navi_volume_pane_cp1

0xa566,	// (0x0000cbf1) status_small_icon_pane

0x0263,	// (0x000028ee) status_small_pane_g1_ParamLimits

0x0263,	// (0x000028ee) status_small_pane_g1

0xa56e,	// (0x0000cbf9) status_small_pane_g2_ParamLimits

0xa56e,	// (0x0000cbf9) status_small_pane_g2

0xa57a,	// (0x0000cc05) status_small_pane_g3_ParamLimits

0xa57a,	// (0x0000cc05) status_small_pane_g3

0xa586,	// (0x0000cc11) status_small_pane_g4_ParamLimits

0xa586,	// (0x0000cc11) status_small_pane_g4

0xa592,	// (0x0000cc1d) status_small_pane_g5_ParamLimits

0xa592,	// (0x0000cc1d) status_small_pane_g5

0xa5a0,	// (0x0000cc2b) status_small_pane_g6_ParamLimits

0xa5a0,	// (0x0000cc2b) status_small_pane_g6

0x0007,

0xf772,	// (0x00011dfd) status_small_pane_g_ParamLimits

0xf772,	// (0x00011dfd) status_small_pane_g

0xa5cf,	// (0x0000cc5a) status_small_pane_t1

0xa5f1,	// (0x0000cc7c) status_small_wait_pane_ParamLimits

0xa5f1,	// (0x0000cc7c) status_small_wait_pane

0xa298,	// (0x0000c923) aid_levels_signal_ParamLimits

0xa298,	// (0x0000c923) aid_levels_signal

0xa2b0,	// (0x0000c93b) signal_pane_g1_ParamLimits

0xa2b0,	// (0x0000c93b) signal_pane_g1

0xa2cb,	// (0x0000c956) signal_pane_g2_ParamLimits

0xa2cb,	// (0x0000c956) signal_pane_g2

0x0003,

0xf703,	// (0x00011d8e) signal_pane_g_ParamLimits

0xf703,	// (0x00011d8e) signal_pane_g

0xef8b,	// (0x00011616) context_pane_g1

0x978d,	// (0x0000be18) title_pane_g1

0x97b8,	// (0x0000be43) title_pane_t1

0xdfba,	// (0x00010645) title_pane_t2

0xdfe0,	// (0x0001066b) title_pane_t3

0x0002,

0xf557,	// (0x00011be2) title_pane_t

0xb2a7,	// (0x0000d932) aid_levels_battery_ParamLimits

0xb2a7,	// (0x0000d932) aid_levels_battery

0xb2c3,	// (0x0000d94e) battery_pane_g1_ParamLimits

0xb2c3,	// (0x0000d94e) battery_pane_g1

0xb2e0,	// (0x0000d96b) battery_pane_g2_ParamLimits

0xb2e0,	// (0x0000d96b) battery_pane_g2

0x0001,

0xf7a6,	// (0x00011e31) battery_pane_g_ParamLimits

0xf7a6,	// (0x00011e31) battery_pane_g

0xb78c,	// (0x0000de17) uni_indicator_pane_g1

0xb7a2,	// (0x0000de2d) uni_indicator_pane_g2

0xb7b8,	// (0x0000de43) uni_indicator_pane_g3

0x0005,

0xf910,	// (0x00011f9b) uni_indicator_pane_g

0xf3dc,	// (0x00011a67) navi_icon_pane_ParamLimits

0xf3dc,	// (0x00011a67) navi_icon_pane

0xf360,	// (0x000119eb) navi_midp_pane

0xf3f8,	// (0x00011a83) navi_navi_pane

0xf402,	// (0x00011a8d) navi_text_pane_ParamLimits

0xf402,	// (0x00011a8d) navi_text_pane

0xddcb,	// (0x00010456) status_small_wait_pane_g1

0xe388,	// (0x00010a13) status_small_wait_pane_g2

0x0001,

0xf90b,	// (0x00011f96) status_small_wait_pane_g

0xb6f3,	// (0x0000dd7e) navi_navi_icon_text_pane

0xb6fb,	// (0x0000dd86) navi_navi_pane_g1_ParamLimits

0xb6fb,	// (0x0000dd86) navi_navi_pane_g1

0xb70d,	// (0x0000dd98) navi_navi_pane_g2_ParamLimits

0xb70d,	// (0x0000dd98) navi_navi_pane_g2

0x0001,

0xf8d9,	// (0x00011f64) navi_navi_pane_g_ParamLimits

0xf8d9,	// (0x00011f64) navi_navi_pane_g

0x2335,	// (0x000049c0) navi_navi_tabs_pane

0xb71f,	// (0x0000ddaa) navi_navi_text_pane

0xb6f3,	// (0x0000dd7e) navi_navi_volume_pane

0xb6e1,	// (0x0000dd6c) navi_text_pane_t1

0xb6d5,	// (0x0000dd60) navi_icon_pane_g1

0x222c,	// (0x000048b7) navi_navi_text_pane_t1

0xb6b0,	// (0x0000dd3b) navi_navi_volume_pane_g1

0xb6b8,	// (0x0000dd43) volume_small_pane

0xb60c,	// (0x0000dc97) navi_navi_icon_text_pane_g1

0xb614,	// (0x0000dc9f) navi_navi_icon_text_pane_t1

0xf3f8,	// (0x00011a83) navi_tabs_2_long_pane

0xf3f8,	// (0x00011a83) navi_tabs_2_pane

0xf3f8,	// (0x00011a83) navi_tabs_3_long_pane

0xf3f8,	// (0x00011a83) navi_tabs_3_pane

0xf3f8,	// (0x00011a83) navi_tabs_4_pane

0xb5ca,	// (0x0000dc55) tabs_2_active_pane_ParamLimits

0xb5ca,	// (0x0000dc55) tabs_2_active_pane

0xb5da,	// (0x0000dc65) tabs_2_passive_pane_ParamLimits

0xb5da,	// (0x0000dc65) tabs_2_passive_pane

0xb598,	// (0x0000dc23) tabs_3_active_pane_ParamLimits

0xb598,	// (0x0000dc23) tabs_3_active_pane

0xb5a8,	// (0x0000dc33) tabs_3_passive_pane_ParamLimits

0xb5a8,	// (0x0000dc33) tabs_3_passive_pane

0xb5b9,	// (0x0000dc44) tabs_3_passive_pane_cp_ParamLimits

0xb5b9,	// (0x0000dc44) tabs_3_passive_pane_cp

0xb554,	// (0x0000dbdf) tabs_4_active_pane_ParamLimits

0xb554,	// (0x0000dbdf) tabs_4_active_pane

0xb565,	// (0x0000dbf0) tabs_4_passive_pane_ParamLimits

0xb565,	// (0x0000dbf0) tabs_4_passive_pane

0xb576,	// (0x0000dc01) tabs_4_passive_pane_cp_ParamLimits

0xb576,	// (0x0000dc01) tabs_4_passive_pane_cp

0xb587,	// (0x0000dc12) tabs_4_passive_pane_cp2_ParamLimits

0xb587,	// (0x0000dc12) tabs_4_passive_pane_cp2

0xb530,	// (0x0000dbbb) tabs_2_long_active_pane_ParamLimits

0xb530,	// (0x0000dbbb) tabs_2_long_active_pane

0xb542,	// (0x0000dbcd) tabs_2_long_passive_pane_ParamLimits

0xb542,	// (0x0000dbcd) tabs_2_long_passive_pane

0xb4e5,	// (0x0000db70) tabs_3_long_active_pane_ParamLimits

0xb4e5,	// (0x0000db70) tabs_3_long_active_pane

0xb4fe,	// (0x0000db89) tabs_3_long_passive_pane_ParamLimits

0xb4fe,	// (0x0000db89) tabs_3_long_passive_pane

0xb517,	// (0x0000dba2) tabs_3_long_passive_pane_cp_ParamLimits

0xb517,	// (0x0000dba2) tabs_3_long_passive_pane_cp

0x1fa5,	// (0x00004630) volume_small_pane_g1

0xb494,	// (0x0000db1f) volume_small_pane_g2

0xb49d,	// (0x0000db28) volume_small_pane_g3

0xb4a6,	// (0x0000db31) volume_small_pane_g4

0xb4af,	// (0x0000db3a) volume_small_pane_g5

0xb4b8,	// (0x0000db43) volume_small_pane_g6

0xb4c1,	// (0x0000db4c) volume_small_pane_g7

0xb4ca,	// (0x0000db55) volume_small_pane_g8

0xb4d3,	// (0x0000db5e) volume_small_pane_g9

0xb4dc,	// (0x0000db67) volume_small_pane_g10

0x0009,

0xf8a5,	// (0x00011f30) volume_small_pane_g

0xdff2,	// (0x0001067d) bg_active_tab_pane_cp2_ParamLimits

0xdff2,	// (0x0001067d) bg_active_tab_pane_cp2

0x9844,	// (0x0000becf) tabs_3_active_pane_g1

0x984c,	// (0x0000bed7) tabs_3_active_pane_t1

0xdff2,	// (0x0001067d) bg_passive_tab_pane_cp2_ParamLimits

0xdff2,	// (0x0001067d) bg_passive_tab_pane_cp2

0x9844,	// (0x0000becf) tabs_3_passive_pane_g1

0x984c,	// (0x0000bed7) tabs_3_passive_pane_t1

0xdff2,	// (0x0001067d) bg_active_tab_pane_cp3_ParamLimits

0xdff2,	// (0x0001067d) bg_active_tab_pane_cp3

0x985e,	// (0x0000bee9) tabs_4_active_pane_g1

0x9866,	// (0x0000bef1) tabs_4_active_pane_t1

0xdff2,	// (0x0001067d) bg_passive_tab_pane_cp3_ParamLimits

0xdff2,	// (0x0001067d) bg_passive_tab_pane_cp3

0x985e,	// (0x0000bee9) tabs_4_1_passive_pane_g1

0x9866,	// (0x0000bef1) tabs_4_1_passive_pane_t1

0x0541,	// (0x00002bcc) list_highlight_pane_cp2

0xb85f,	// (0x0000deea) list_set_pane_ParamLimits

0xb85f,	// (0x0000deea) list_set_pane

0xb927,	// (0x0000dfb2) main_pane_set_t1_ParamLimits

0xb927,	// (0x0000dfb2) main_pane_set_t1

0xb947,	// (0x0000dfd2) main_pane_set_t2_ParamLimits

0xb947,	// (0x0000dfd2) main_pane_set_t2

0xb95b,	// (0x0000dfe6) main_pane_set_t3_ParamLimits

0xb95b,	// (0x0000dfe6) main_pane_set_t3

0xb96f,	// (0x0000dffa) main_pane_set_t4_ParamLimits

0xb96f,	// (0x0000dffa) main_pane_set_t4

0x0003,

0xf975,	// (0x00012000) main_pane_set_t_ParamLimits

0xf975,	// (0x00012000) main_pane_set_t

0xb983,	// (0x0000e00e) setting_code_pane

0x2aa3,	// (0x0000512e) setting_slider_graphic_pane

0x2aa3,	// (0x0000512e) setting_slider_pane

0x2aa3,	// (0x0000512e) setting_text_pane

0x2aa3,	// (0x0000512e) setting_volume_pane

0xe000,	// (0x0001068b) volume_set_pane

0xe00a,	// (0x00010695) bg_set_opt_pane_cp

0xe018,	// (0x000106a3) setting_slider_pane_t1

0xe031,	// (0x000106bc) setting_slider_pane_t2

0xe04b,	// (0x000106d6) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00011be9) setting_slider_pane_t

0xe063,	// (0x000106ee) slider_set_pane

0xdf44,	// (0x000105cf) bg_set_opt_pane_cp2

0xe079,	// (0x00010704) setting_slider_graphic_pane_g1

0xe082,	// (0x0001070d) setting_slider_graphic_pane_t1

0xe092,	// (0x0001071d) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00011bf0) setting_slider_graphic_pane_t

0xe0a2,	// (0x0001072d) slider_set_pane_cp

0xdf44,	// (0x000105cf) input_focus_pane_cp1

0x2936,	// (0x00004fc1) list_set_text_pane

0xddcb,	// (0x00010456) setting_text_pane_g1

0xdf44,	// (0x000105cf) input_focus_pane_cp2

0xddcb,	// (0x00010456) setting_code_pane_g1

0xe0aa,	// (0x00010735) setting_code_pane_t1

0xe0b8,	// (0x00010743) set_text_pane_t1_ParamLimits

0xe0b8,	// (0x00010743) set_text_pane_t1

0xe829,	// (0x00010eb4) set_opt_bg_pane_g1

0xe831,	// (0x00010ebc) set_opt_bg_pane_g2

0x290e,	// (0x00004f99) set_opt_bg_pane_g3

0xe841,	// (0x00010ecc) set_opt_bg_pane_g4

0xe849,	// (0x00010ed4) set_opt_bg_pane_g5

0xe851,	// (0x00010edc) set_opt_bg_pane_g6

0x2918,	// (0x00004fa3) set_opt_bg_pane_g7

0x2922,	// (0x00004fad) set_opt_bg_pane_g8

0x292c,	// (0x00004fb7) set_opt_bg_pane_g9

0x0008,

0xf962,	// (0x00011fed) set_opt_bg_pane_g

0x289d,	// (0x00004f28) slider_set_pane_g1

0x28aa,	// (0x00004f35) slider_set_pane_g2

0x0006,

0xf953,	// (0x00011fde) slider_set_pane_g

0x2705,	// (0x00004d90) volume_set_pane_g1

0x270f,	// (0x00004d9a) volume_set_pane_g2

0x2719,	// (0x00004da4) volume_set_pane_g3

0x2723,	// (0x00004dae) volume_set_pane_g4

0x272d,	// (0x00004db8) volume_set_pane_g5

0x2737,	// (0x00004dc2) volume_set_pane_g6

0x2741,	// (0x00004dcc) volume_set_pane_g7

0x274b,	// (0x00004dd6) volume_set_pane_g8

0x2755,	// (0x00004de0) volume_set_pane_g9

0x275f,	// (0x00004dea) volume_set_pane_g10

0x0009,

0xf92b,	// (0x00011fb6) volume_set_pane_g

0x9878,	// (0x0000bf03) indicator_pane_ParamLimits

0x9878,	// (0x0000bf03) indicator_pane

0x98a4,	// (0x0000bf2f) main_idle_pane_g2_ParamLimits

0x98a4,	// (0x0000bf2f) main_idle_pane_g2

0x98dc,	// (0x0000bf67) main_pane_idle_g1_ParamLimits

0x98dc,	// (0x0000bf67) main_pane_idle_g1

0xe0d2,	// (0x0001075d) popup_clock_digital_analogue_window_ParamLimits

0xe0d2,	// (0x0001075d) popup_clock_digital_analogue_window

0x990a,	// (0x0000bf95) soft_indicator_pane_ParamLimits

0x990a,	// (0x0000bf95) soft_indicator_pane

0x9926,	// (0x0000bfb1) wallpaper_pane_ParamLimits

0x9926,	// (0x0000bfb1) wallpaper_pane

0xddcb,	// (0x00010456) wallpaper_pane_g1

0x9938,	// (0x0000bfc3) indicator_pane_g1_ParamLimits

0x9938,	// (0x0000bfc3) indicator_pane_g1

0x2e8f,	// (0x0000551a) navi_navi_icon_text_pane_srt_g1

0xe100,	// (0x0001078b) soft_indicator_pane_t1

0xe11a,	// (0x000107a5) aid_ps_area_pane

0x9951,	// (0x0000bfdc) aid_ps_clock_pane

0xe12b,	// (0x000107b6) aid_ps_indicator_pane

0xe137,	// (0x000107c2) indicator_ps_pane_ParamLimits

0xe137,	// (0x000107c2) indicator_ps_pane

0xe146,	// (0x000107d1) power_save_pane_g1_ParamLimits

0xe146,	// (0x000107d1) power_save_pane_g1

0xe152,	// (0x000107dd) power_save_pane_g2_ParamLimits

0xe152,	// (0x000107dd) power_save_pane_g2

0xddd5,	// (0x00010460) aid_navinavi_width_pane

0xe11a,	// (0x000107a5) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00011bf5) power_save_pane_g_ParamLimits

0xf56a,	// (0x00011bf5) power_save_pane_g

0xe160,	// (0x000107eb) power_save_pane_t1_ParamLimits

0xe160,	// (0x000107eb) power_save_pane_t1

0x9951,	// (0x0000bfdc) aid_ps_clock_pane_ParamLimits

0xe12b,	// (0x000107b6) aid_ps_indicator_pane_ParamLimits

0xe172,	// (0x000107fd) power_save_pane_t4_ParamLimits

0xe172,	// (0x000107fd) power_save_pane_t4

0x0001,

0xf56f,	// (0x00011bfa) power_save_pane_t_ParamLimits

0xf56f,	// (0x00011bfa) power_save_pane_t

0xe19c,	// (0x00010827) power_save_t3_ParamLimits

0xe19c,	// (0x00010827) power_save_t3

0xe187,	// (0x00010812) power_save_t2_ParamLimits

0xe187,	// (0x00010812) power_save_t2

0xe1b1,	// (0x0001083c) indicator_ps_pane_g1

0x995f,	// (0x0000bfea) ai_gene_pane_ParamLimits

0x995f,	// (0x0000bfea) ai_gene_pane

0x9976,	// (0x0000c001) ai_links_pane_ParamLimits

0x9976,	// (0x0000c001) ai_links_pane

0x998e,	// (0x0000c019) indicator_pane_cp1_ParamLimits

0x998e,	// (0x0000c019) indicator_pane_cp1

0x999d,	// (0x0000c028) main_pane_idle_g1_cp_ParamLimits

0x999d,	// (0x0000c028) main_pane_idle_g1_cp

0xe1ba,	// (0x00010845) popup_ai_links_title_window

0x99b5,	// (0x0000c040) soft_indicator_pane_cp1_ParamLimits

0x99b5,	// (0x0000c040) soft_indicator_pane_cp1

0x25e4,	// (0x00004c6f) ai_links_pane_g1

0x25ed,	// (0x00004c78) grid_ai_links_pane

0xb783,	// (0x0000de0e) ai_gene_pane_1

0x25d2,	// (0x00004c5d) ai_gene_pane_2

0x25db,	// (0x00004c66) list_highlight_pane_cp4

0xb75f,	// (0x0000ddea) cell_ai_link_pane_ParamLimits

0xb75f,	// (0x0000ddea) cell_ai_link_pane

0x25a1,	// (0x00004c2c) cell_ai_link_pane_g1

0xe388,	// (0x00010a13) cell_ai_link_pane_g2

0x0001,

0xf906,	// (0x00011f91) cell_ai_link_pane_g

0xdf44,	// (0x000105cf) grid_highlight_cp2

0xdf44,	// (0x000105cf) bg_popup_sub_pane_cp1

0xe1d1,	// (0x0001085c) popup_ai_links_title_window_t1

0x24ed,	// (0x00004b78) ai_gene_pane_1_g1_ParamLimits

0x24ed,	// (0x00004b78) ai_gene_pane_1_g1

0x24f9,	// (0x00004b84) ai_gene_pane_1_g2_ParamLimits

0x24f9,	// (0x00004b84) ai_gene_pane_1_g2

0x0001,

0xf8fc,	// (0x00011f87) ai_gene_pane_1_g_ParamLimits

0xf8fc,	// (0x00011f87) ai_gene_pane_1_g

0x2506,	// (0x00004b91) ai_gene_pane_1_t1_ParamLimits

0x2506,	// (0x00004b91) ai_gene_pane_1_t1

0x253a,	// (0x00004bc5) grid_ai_soft_ind_pane

0x24d8,	// (0x00004b63) ai_gene_pane_2_t1_ParamLimits

0x24d8,	// (0x00004b63) ai_gene_pane_2_t1

0x99c9,	// (0x0000c054) main_pane_empty_t1_ParamLimits

0x99c9,	// (0x0000c054) main_pane_empty_t1

0x99e1,	// (0x0000c06c) main_pane_empty_t2_ParamLimits

0x99e1,	// (0x0000c06c) main_pane_empty_t2

0x99f6,	// (0x0000c081) main_pane_empty_t3_ParamLimits

0x99f6,	// (0x0000c081) main_pane_empty_t3

0x9a08,	// (0x0000c093) main_pane_empty_t4_ParamLimits

0x9a08,	// (0x0000c093) main_pane_empty_t4

0x9a1a,	// (0x0000c0a5) main_pane_empty_t5_ParamLimits

0x9a1a,	// (0x0000c0a5) main_pane_empty_t5

0x0004,

0xf574,	// (0x00011bff) main_pane_empty_t_ParamLimits

0xf574,	// (0x00011bff) main_pane_empty_t

0xe8a9,	// (0x00010f34) bg_popup_window_pane_ParamLimits

0xe8a9,	// (0x00010f34) bg_popup_window_pane

0x223a,	// (0x000048c5) find_popup_pane_cp2_ParamLimits

0x223a,	// (0x000048c5) find_popup_pane_cp2

0x2246,	// (0x000048d1) heading_pane_ParamLimits

0x2246,	// (0x000048d1) heading_pane

0xdf44,	// (0x000105cf) bg_popup_sub_pane

0xb631,	// (0x0000dcbc) bg_popup_window_pane_g1_ParamLimits

0xb631,	// (0x0000dcbc) bg_popup_window_pane_g1

0xb640,	// (0x0000dccb) bg_popup_window_pane_g2_ParamLimits

0xb640,	// (0x0000dccb) bg_popup_window_pane_g2

0xb64c,	// (0x0000dcd7) bg_popup_window_pane_g3_ParamLimits

0xb64c,	// (0x0000dcd7) bg_popup_window_pane_g3

0xb658,	// (0x0000dce3) bg_popup_window_pane_g4_ParamLimits

0xb658,	// (0x0000dce3) bg_popup_window_pane_g4

0xb667,	// (0x0000dcf2) bg_popup_window_pane_g5_ParamLimits

0xb667,	// (0x0000dcf2) bg_popup_window_pane_g5

0xb677,	// (0x0000dd02) bg_popup_window_pane_g6_ParamLimits

0xb677,	// (0x0000dd02) bg_popup_window_pane_g6

0xb683,	// (0x0000dd0e) bg_popup_window_pane_g7_ParamLimits

0xb683,	// (0x0000dd0e) bg_popup_window_pane_g7

0xb692,	// (0x0000dd1d) bg_popup_window_pane_g8_ParamLimits

0xb692,	// (0x0000dd1d) bg_popup_window_pane_g8

0xb6a1,	// (0x0000dd2c) bg_popup_window_pane_g9_ParamLimits

0xb6a1,	// (0x0000dd2c) bg_popup_window_pane_g9

0x220f,	// (0x0000489a) bg_popup_window_pane_g10_ParamLimits

0x220f,	// (0x0000489a) bg_popup_window_pane_g10

0x0009,

0xf8c4,	// (0x00011f4f) bg_popup_window_pane_g_ParamLimits

0xf8c4,	// (0x00011f4f) bg_popup_window_pane_g

0x2138,	// (0x000047c3) bg_popup_heading_pane_ParamLimits

0x2138,	// (0x000047c3) bg_popup_heading_pane

0x2dd2,	// (0x0000545d) tabs_4_passive_pane_cp_srt_ParamLimits

0x2dd2,	// (0x0000545d) tabs_4_passive_pane_cp_srt

0x2de4,	// (0x0000546f) tabs_4_passive_pane_srt_ParamLimits

0x214c,	// (0x000047d7) heading_pane_g2

0x2de4,	// (0x0000546f) tabs_4_passive_pane_srt

0x12cd,	// (0x00003958) bg_passive_tab_pane_cp3_srt_ParamLimits

0x12cd,	// (0x00003958) bg_passive_tab_pane_cp3_srt

0x2154,	// (0x000047df) heading_pane_t1_ParamLimits

0x2154,	// (0x000047df) heading_pane_t1

0x216b,	// (0x000047f6) heading_pane_t2_ParamLimits

0x216b,	// (0x000047f6) heading_pane_t2

0x0001,

0xf8bf,	// (0x00011f4a) heading_pane_t_ParamLimits

0xf8bf,	// (0x00011f4a) heading_pane_t

0x1b08,	// (0x00004193) bg_popup_heading_pane_g1

0x1bb7,	// (0x00004242) bg_popup_heading_pane_g2

0x1bc1,	// (0x0000424c) bg_popup_heading_pane_g3

0x1bcb,	// (0x00004256) bg_popup_heading_pane_g4

0x1bd5,	// (0x00004260) bg_popup_heading_pane_g5

0x1bdf,	// (0x0000426a) bg_popup_heading_pane_g6

0x1be7,	// (0x00004272) bg_popup_heading_pane_g7

0x1bef,	// (0x0000427a) bg_popup_heading_pane_g8

0x1bf9,	// (0x00004284) bg_popup_heading_pane_g9

0x0008,

0xf87b,	// (0x00011f06) bg_popup_heading_pane_g

0x1130,	// (0x000037bb) bg_popup_sub_pane_g1

0x1138,	// (0x000037c3) bg_popup_sub_pane_g2

0x1140,	// (0x000037cb) bg_popup_sub_pane_g3

0x1148,	// (0x000037d3) bg_popup_sub_pane_g4

0x1150,	// (0x000037db) bg_popup_sub_pane_g5

0x1158,	// (0x000037e3) bg_popup_sub_pane_g6

0x1160,	// (0x000037eb) bg_popup_sub_pane_g7

0x1168,	// (0x000037f3) bg_popup_sub_pane_g8

0x1170,	// (0x000037fb) bg_popup_sub_pane_g9

0x0008,

0xf855,	// (0x00011ee0) bg_popup_sub_pane_g

0xdff2,	// (0x0001067d) bg_popup_window_pane_cp5_ParamLimits

0xdff2,	// (0x0001067d) bg_popup_window_pane_cp5

0xe1ee,	// (0x00010879) popup_note_window_g1_ParamLimits

0xe1ee,	// (0x00010879) popup_note_window_g1

0xe1fa,	// (0x00010885) popup_note_window_t1_ParamLimits

0xe1fa,	// (0x00010885) popup_note_window_t1

0xe210,	// (0x0001089b) popup_note_window_t2_ParamLimits

0xe210,	// (0x0001089b) popup_note_window_t2

0xe226,	// (0x000108b1) popup_note_window_t3_ParamLimits

0xe226,	// (0x000108b1) popup_note_window_t3

0xe23c,	// (0x000108c7) popup_note_window_t4_ParamLimits

0xe23c,	// (0x000108c7) popup_note_window_t4

0xe264,	// (0x000108ef) popup_note_window_t5_ParamLimits

0xe264,	// (0x000108ef) popup_note_window_t5

0x0004,

0xf57f,	// (0x00011c0a) popup_note_window_t_ParamLimits

0xf57f,	// (0x00011c0a) popup_note_window_t

0xe288,	// (0x00010913) bg_popup_window_pane_cp6_ParamLimits

0xe288,	// (0x00010913) bg_popup_window_pane_cp6

0x1a84,	// (0x0000410f) popup_note_image_window_g1_ParamLimits

0x1a84,	// (0x0000410f) popup_note_image_window_g1

0x1a90,	// (0x0000411b) popup_note_image_window_g2_ParamLimits

0x1a90,	// (0x0000411b) popup_note_image_window_g2

0x0001,

0xf849,	// (0x00011ed4) popup_note_image_window_g_ParamLimits

0xf849,	// (0x00011ed4) popup_note_image_window_g

0x1aa9,	// (0x00004134) popup_note_image_window_t1_ParamLimits

0x1aa9,	// (0x00004134) popup_note_image_window_t1

0x1ac2,	// (0x0000414d) popup_note_image_window_t2_ParamLimits

0x1ac2,	// (0x0000414d) popup_note_image_window_t2

0x1adb,	// (0x00004166) popup_note_image_window_t3_ParamLimits

0x1adb,	// (0x00004166) popup_note_image_window_t3

0x0002,

0xf84e,	// (0x00011ed9) popup_note_image_window_t_ParamLimits

0xf84e,	// (0x00011ed9) popup_note_image_window_t

0x1944,	// (0x00003fcf) bg_popup_window_pane_cp7_ParamLimits

0x1944,	// (0x00003fcf) bg_popup_window_pane_cp7

0x1974,	// (0x00003fff) popup_note_wait_window_g1_ParamLimits

0x1974,	// (0x00003fff) popup_note_wait_window_g1

0x1980,	// (0x0000400b) popup_note_wait_window_g2_ParamLimits

0x1980,	// (0x0000400b) popup_note_wait_window_g2

0x0002,

0xf837,	// (0x00011ec2) popup_note_wait_window_g_ParamLimits

0xf837,	// (0x00011ec2) popup_note_wait_window_g

0x1998,	// (0x00004023) popup_note_wait_window_t1_ParamLimits

0x1998,	// (0x00004023) popup_note_wait_window_t1

0x19bf,	// (0x0000404a) popup_note_wait_window_t2_ParamLimits

0x19bf,	// (0x0000404a) popup_note_wait_window_t2

0x19dd,	// (0x00004068) popup_note_wait_window_t3_ParamLimits

0x19dd,	// (0x00004068) popup_note_wait_window_t3

0x19f0,	// (0x0000407b) popup_note_wait_window_t4_ParamLimits

0x19f0,	// (0x0000407b) popup_note_wait_window_t4

0x0004,

0xf83e,	// (0x00011ec9) popup_note_wait_window_t_ParamLimits

0xf83e,	// (0x00011ec9) popup_note_wait_window_t

0x1a15,	// (0x000040a0) wait_bar_pane_ParamLimits

0x1a15,	// (0x000040a0) wait_bar_pane

0xdf44,	// (0x000105cf) wait_anim_pane

0xdf44,	// (0x000105cf) wait_border_pane

0xddcb,	// (0x00010456) wait_anim_pane_g1

0xddcb,	// (0x00010456) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00011d89) wait_anim_pane_g

0x18e8,	// (0x00003f73) wait_border_pane_g1

0x18f3,	// (0x00003f7e) wait_border_pane_g2

0x18fc,	// (0x00003f87) wait_border_pane_g3

0x0002,

0xf830,	// (0x00011ebb) wait_border_pane_g

0x1752,	// (0x00003ddd) bg_popup_window_pane_cp16_ParamLimits

0x1752,	// (0x00003ddd) bg_popup_window_pane_cp16

0x1852,	// (0x00003edd) indicator_popup_pane_cp4_ParamLimits

0x1852,	// (0x00003edd) indicator_popup_pane_cp4

0x1866,	// (0x00003ef1) popup_query_data_window_t1_ParamLimits

0x1866,	// (0x00003ef1) popup_query_data_window_t1

0x1878,	// (0x00003f03) popup_query_data_window_t2_ParamLimits

0x1878,	// (0x00003f03) popup_query_data_window_t2

0x1891,	// (0x00003f1c) popup_query_data_window_t3_ParamLimits

0x1891,	// (0x00003f1c) popup_query_data_window_t3

0x0002,

0xf829,	// (0x00011eb4) popup_query_data_window_t_ParamLimits

0xf829,	// (0x00011eb4) popup_query_data_window_t

0x18ab,	// (0x00003f36) query_popup_data_pane_ParamLimits

0x18ab,	// (0x00003f36) query_popup_data_pane

0x18bf,	// (0x00003f4a) query_popup_data_pane_cp1_ParamLimits

0x18bf,	// (0x00003f4a) query_popup_data_pane_cp1

0x1752,	// (0x00003ddd) bg_popup_window_pane_cp10_ParamLimits

0x1752,	// (0x00003ddd) bg_popup_window_pane_cp10

0x1784,	// (0x00003e0f) indicator_popup_pane_ParamLimits

0x1784,	// (0x00003e0f) indicator_popup_pane

0x17a6,	// (0x00003e31) popup_query_code_window_t1_ParamLimits

0x17a6,	// (0x00003e31) popup_query_code_window_t1

0x17c0,	// (0x00003e4b) popup_query_code_window_t2_ParamLimits

0x17c0,	// (0x00003e4b) popup_query_code_window_t2

0x1809,	// (0x00003e94) popup_query_code_window_t3_ParamLimits

0x1809,	// (0x00003e94) popup_query_code_window_t3

0x0002,

0xf822,	// (0x00011ead) popup_query_code_window_t_ParamLimits

0xf822,	// (0x00011ead) popup_query_code_window_t

0x1838,	// (0x00003ec3) query_popup_pane_ParamLimits

0x1838,	// (0x00003ec3) query_popup_pane

0xe288,	// (0x00010913) bg_popup_window_pane_cp15_ParamLimits

0xe288,	// (0x00010913) bg_popup_window_pane_cp15

0xe2a8,	// (0x00010933) indicator_popup_pane_cp1_ParamLimits

0xe2a8,	// (0x00010933) indicator_popup_pane_cp1

0xe2bb,	// (0x00010946) indicator_popup_pane_cp2_ParamLimits

0xe2bb,	// (0x00010946) indicator_popup_pane_cp2

0xe2d6,	// (0x00010961) popup_query_data_code_window_g1_ParamLimits

0xe2d6,	// (0x00010961) popup_query_data_code_window_g1

0xe2e9,	// (0x00010974) popup_query_data_code_window_t1_ParamLimits

0xe2e9,	// (0x00010974) popup_query_data_code_window_t1

0xe2fb,	// (0x00010986) popup_query_data_code_window_t2_ParamLimits

0xe2fb,	// (0x00010986) popup_query_data_code_window_t2

0xe30d,	// (0x00010998) popup_query_data_code_window_t3_ParamLimits

0xe30d,	// (0x00010998) popup_query_data_code_window_t3

0xe323,	// (0x000109ae) popup_query_data_code_window_t4_ParamLimits

0xe323,	// (0x000109ae) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00011c15) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00011c15) popup_query_data_code_window_t

0xf3ac,	// (0x00011a37) list_single_midp_graphic_pane_g3

0xe33d,	// (0x000109c8) query_popup_data_pane_cp2_ParamLimits

0xe350,	// (0x000109db) query_popup_pane_cp2_ParamLimits

0xe350,	// (0x000109db) query_popup_pane_cp2

0xdf44,	// (0x000105cf) bg_popup_window_pane_cp11

0x174a,	// (0x00003dd5) heading_pane_cp5

0xe3e6,	// (0x00010a71) listscroll_popup_info_pane

0xdf44,	// (0x000105cf) input_focus_pane_cp3

0xe36b,	// (0x000109f6) query_popup_pane_t1

0xe379,	// (0x00010a04) list_popup_info_pane_ParamLimits

0xe379,	// (0x00010a04) list_popup_info_pane

0xe388,	// (0x00010a13) listscroll_popup_info_pane_g1

0xe390,	// (0x00010a1b) scroll_pane_cp7

0xe39a,	// (0x00010a25) popup_info_list_pane_t1_ParamLimits

0xe39a,	// (0x00010a25) popup_info_list_pane_t1

0xe3b4,	// (0x00010a3f) popup_info_list_pane_t2_ParamLimits

0xe3b4,	// (0x00010a3f) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00011c1e) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00011c1e) popup_info_list_pane_t

0xdf44,	// (0x000105cf) bg_popup_window_pane_cp12

0x2ec6,	// (0x00005551) find_popup_pane

0xe00a,	// (0x00010695) bg_popup_window_pane_cp3

0xe3ce,	// (0x00010a59) heading_pane_cp3

0xe3da,	// (0x00010a65) listscroll_popup_graphic_pane

0xdf44,	// (0x000105cf) bg_popup_window_pane_cp4

0x9a7c,	// (0x0000c107) heading_pane_cp4

0xe3e6,	// (0x00010a71) listscroll_popup_colour_pane

0x9a86,	// (0x0000c111) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9a86,	// (0x0000c111) cell_large_graphic_colour_none_popup_pane

0x9a9a,	// (0x0000c125) grid_large_graphic_colour_popup_pane_ParamLimits

0x9a9a,	// (0x0000c125) grid_large_graphic_colour_popup_pane

0x9abe,	// (0x0000c149) listscroll_popup_colour_pane_g1_ParamLimits

0x9abe,	// (0x0000c149) listscroll_popup_colour_pane_g1

0x9ad5,	// (0x0000c160) listscroll_popup_colour_pane_g2_ParamLimits

0x9ad5,	// (0x0000c160) listscroll_popup_colour_pane_g2

0x9aec,	// (0x0000c177) listscroll_popup_colour_pane_g3_ParamLimits

0x9aec,	// (0x0000c177) listscroll_popup_colour_pane_g3

0x9afc,	// (0x0000c187) listscroll_popup_colour_pane_g4_ParamLimits

0x9afc,	// (0x0000c187) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00011c23) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00011c23) listscroll_popup_colour_pane_g

0xe3ee,	// (0x00010a79) scroll_pane_cp6_ParamLimits

0xe3ee,	// (0x00010a79) scroll_pane_cp6

0x9b0c,	// (0x0000c197) cell_large_graphic_colour_popup_pane_ParamLimits

0x9b0c,	// (0x0000c197) cell_large_graphic_colour_popup_pane

0xe400,	// (0x00010a8b) cell_large_graphic_colour_none_popup_pane_t1

0xdf44,	// (0x000105cf) grid_highlight_pane_cp5

0xe40f,	// (0x00010a9a) cell_large_graphic_colour_popup_pane_g1

0xe417,	// (0x00010aa2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00011c2c) cell_large_graphic_colour_popup_pane_g

0xe41f,	// (0x00010aaa) cell_large_graphic_colour_popup_pane_g2_copy1

0xe428,	// (0x00010ab3) grid_highlight_pane_cp4

0xe430,	// (0x00010abb) bg_popup_window_pane_cp8_ParamLimits

0xe430,	// (0x00010abb) bg_popup_window_pane_cp8

0xe44b,	// (0x00010ad6) popup_snote_single_text_window_g1_ParamLimits

0xe44b,	// (0x00010ad6) popup_snote_single_text_window_g1

0xe45d,	// (0x00010ae8) popup_snote_single_text_window_t1_ParamLimits

0xe45d,	// (0x00010ae8) popup_snote_single_text_window_t1

0xe470,	// (0x00010afb) popup_snote_single_text_window_t2_ParamLimits

0xe470,	// (0x00010afb) popup_snote_single_text_window_t2

0xe483,	// (0x00010b0e) popup_snote_single_text_window_t3_ParamLimits

0xe483,	// (0x00010b0e) popup_snote_single_text_window_t3

0xe4bc,	// (0x00010b47) popup_snote_single_text_window_t4_ParamLimits

0xe4bc,	// (0x00010b47) popup_snote_single_text_window_t4

0xe4f0,	// (0x00010b7b) popup_snote_single_text_window_t5_ParamLimits

0xe4f0,	// (0x00010b7b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00011c31) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00011c31) popup_snote_single_text_window_t

0xe51f,	// (0x00010baa) bg_popup_window_pane_cp9_ParamLimits

0xe51f,	// (0x00010baa) bg_popup_window_pane_cp9

0xe44b,	// (0x00010ad6) popup_snote_single_graphic_window_g1_ParamLimits

0xe44b,	// (0x00010ad6) popup_snote_single_graphic_window_g1

0xe52d,	// (0x00010bb8) popup_snote_single_graphic_window_g2_ParamLimits

0xe52d,	// (0x00010bb8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00011c3c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00011c3c) popup_snote_single_graphic_window_g

0xe539,	// (0x00010bc4) popup_snote_single_graphic_window_t1_ParamLimits

0xe539,	// (0x00010bc4) popup_snote_single_graphic_window_t1

0xe54c,	// (0x00010bd7) popup_snote_single_graphic_window_t2_ParamLimits

0xe54c,	// (0x00010bd7) popup_snote_single_graphic_window_t2

0xe55f,	// (0x00010bea) popup_snote_single_graphic_window_t3_ParamLimits

0xe55f,	// (0x00010bea) popup_snote_single_graphic_window_t3

0xe598,	// (0x00010c23) popup_snote_single_graphic_window_t4_ParamLimits

0xe598,	// (0x00010c23) popup_snote_single_graphic_window_t4

0xe5cc,	// (0x00010c57) popup_snote_single_graphic_window_t5_ParamLimits

0xe5cc,	// (0x00010c57) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00011c41) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00011c41) popup_snote_single_graphic_window_t

0x2d4c,	// (0x000053d7) grid_graphic_popup_pane_ParamLimits

0x2d4c,	// (0x000053d7) grid_graphic_popup_pane

0x2d7a,	// (0x00005405) listscroll_popup_graphic_pane_g1_ParamLimits

0x2d7a,	// (0x00005405) listscroll_popup_graphic_pane_g1

0xbacd,	// (0x0000e158) listscroll_popup_graphic_pane_g2_ParamLimits

0xbacd,	// (0x0000e158) listscroll_popup_graphic_pane_g2

0x0001,

0xf99f,	// (0x0001202a) listscroll_popup_graphic_pane_g_ParamLimits

0xf99f,	// (0x0001202a) listscroll_popup_graphic_pane_g

0x2da2,	// (0x0000542d) scroll_pane_cp5

0xba8c,	// (0x0000e117) cell_graphic_popup_pane_ParamLimits

0xba8c,	// (0x0000e117) cell_graphic_popup_pane

0x2cd5,	// (0x00005360) cell_graphic_popup_pane_g1

0x2cdd,	// (0x00005368) cell_graphic_popup_pane_g2

0xe41f,	// (0x00010aaa) cell_graphic_popup_pane_g3

0x0002,

0xf998,	// (0x00012023) cell_graphic_popup_pane_g

0x2ce6,	// (0x00005371) cell_graphic_popup_pane_t2

0xe428,	// (0x00010ab3) grid_highlight_pane_cp3

0xe60d,	// (0x00010c98) list_gen_pane_ParamLimits

0xe60d,	// (0x00010c98) list_gen_pane

0xe635,	// (0x00010cc0) scroll_pane

0xba43,	// (0x0000e0ce) bg_list_pane_g1_ParamLimits

0xba43,	// (0x0000e0ce) bg_list_pane_g1

0x2c4a,	// (0x000052d5) bg_list_pane_g2_ParamLimits

0x2c4a,	// (0x000052d5) bg_list_pane_g2

0x2c5f,	// (0x000052ea) bg_list_pane_g3_ParamLimits

0x2c5f,	// (0x000052ea) bg_list_pane_g3

0x2c73,	// (0x000052fe) bg_list_pane_g4_ParamLimits

0x2c73,	// (0x000052fe) bg_list_pane_g4

0xba60,	// (0x0000e0eb) bg_list_pane_g5_ParamLimits

0xba60,	// (0x0000e0eb) bg_list_pane_g5

0x0004,

0xf98d,	// (0x00012018) bg_list_pane_g_ParamLimits

0xf98d,	// (0x00012018) bg_list_pane_g

0xb9dd,	// (0x0000e068) list_double2_graphic_large_graphic_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_double2_graphic_large_graphic_pane

0xb9dd,	// (0x0000e068) list_double2_graphic_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_double2_graphic_pane

0xb9dd,	// (0x0000e068) list_double2_large_graphic_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_double2_large_graphic_pane

0xb9dd,	// (0x0000e068) list_double2_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_double2_pane

0xb9dd,	// (0x0000e068) list_double_graphic_heading_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_double_graphic_heading_pane

0xb9dd,	// (0x0000e068) list_double_graphic_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_double_graphic_pane

0xb9dd,	// (0x0000e068) list_double_heading_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_double_heading_pane

0xb9dd,	// (0x0000e068) list_double_large_graphic_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_double_large_graphic_pane

0xb9dd,	// (0x0000e068) list_double_number_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_double_number_pane

0xb9dd,	// (0x0000e068) list_double_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_double_pane

0xb9dd,	// (0x0000e068) list_double_time_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_double_time_pane

0xb9dd,	// (0x0000e068) list_setting_number_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_setting_number_pane

0xb9dd,	// (0x0000e068) list_setting_pane_ParamLimits

0xb9dd,	// (0x0000e068) list_setting_pane

0xb9f1,	// (0x0000e07c) list_single_2graphic_pane_ParamLimits

0xb9f1,	// (0x0000e07c) list_single_2graphic_pane

0xb9f1,	// (0x0000e07c) list_single_graphic_heading_pane_ParamLimits

0xb9f1,	// (0x0000e07c) list_single_graphic_heading_pane

0xb9f1,	// (0x0000e07c) list_single_graphic_pane_ParamLimits

0xb9f1,	// (0x0000e07c) list_single_graphic_pane

0xb9f1,	// (0x0000e07c) list_single_heading_pane_ParamLimits

0xb9f1,	// (0x0000e07c) list_single_heading_pane

0xb9f1,	// (0x0000e07c) list_single_large_graphic_pane_ParamLimits

0xb9f1,	// (0x0000e07c) list_single_large_graphic_pane

0xb9f1,	// (0x0000e07c) list_single_number_heading_pane_ParamLimits

0xb9f1,	// (0x0000e07c) list_single_number_heading_pane

0xb9f1,	// (0x0000e07c) list_single_number_pane_ParamLimits

0xb9f1,	// (0x0000e07c) list_single_number_pane

0xb9f1,	// (0x0000e07c) list_single_pane_ParamLimits

0xb9f1,	// (0x0000e07c) list_single_pane

0xdf44,	// (0x000105cf) list_highlight_pane_cp1

0xf4b7,	// (0x00011b42) list_single_pane_g1_ParamLimits

0xf4b7,	// (0x00011b42) list_single_pane_g1

0x0fd4,	// (0x0000365f) list_single_pane_g2_ParamLimits

0x0fd4,	// (0x0000365f) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00011c53) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00011c53) list_single_pane_g

0x34eb,	// (0x00005b76) list_single_pane_t1_ParamLimits

0x34eb,	// (0x00005b76) list_single_pane_t1

0xf4b7,	// (0x00011b42) list_single_number_pane_g1_ParamLimits

0xf4b7,	// (0x00011b42) list_single_number_pane_g1

0x0fd4,	// (0x0000365f) list_single_number_pane_g2_ParamLimits

0x0fd4,	// (0x0000365f) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00011c53) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00011c53) list_single_number_pane_g

0x10be,	// (0x00003749) list_single_number_pane_t1_ParamLimits

0x10be,	// (0x00003749) list_single_number_pane_t1

0xb7fb,	// (0x0000de86) list_single_number_pane_t2_ParamLimits

0xb7fb,	// (0x0000de86) list_single_number_pane_t2

0x0001,

0xf94e,	// (0x00011fd9) list_single_number_pane_t_ParamLimits

0xf94e,	// (0x00011fd9) list_single_number_pane_t

0x4dfe,	// (0x00007489) list_single_graphic_pane_g1_ParamLimits

0x4dfe,	// (0x00007489) list_single_graphic_pane_g1

0xf4b7,	// (0x00011b42) list_single_graphic_pane_g2_ParamLimits

0xf4b7,	// (0x00011b42) list_single_graphic_pane_g2

0x0fd4,	// (0x0000365f) list_single_graphic_pane_g3_ParamLimits

0x0fd4,	// (0x0000365f) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00011c4c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00011c4c) list_single_graphic_pane_g

0x9b37,	// (0x0000c1c2) list_single_graphic_pane_t1_ParamLimits

0x9b37,	// (0x0000c1c2) list_single_graphic_pane_t1

0xf4b7,	// (0x00011b42) list_single_heading_pane_g1_ParamLimits

0xf4b7,	// (0x00011b42) list_single_heading_pane_g1

0x0fd4,	// (0x0000365f) list_single_heading_pane_g2_ParamLimits

0x0fd4,	// (0x0000365f) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00011c53) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00011c53) list_single_heading_pane_g

0x350d,	// (0x00005b98) list_single_heading_pane_t1_ParamLimits

0x350d,	// (0x00005b98) list_single_heading_pane_t1

0x9b4d,	// (0x0000c1d8) list_single_heading_pane_t2_ParamLimits

0x9b4d,	// (0x0000c1d8) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00011c58) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00011c58) list_single_heading_pane_t

0xf4b7,	// (0x00011b42) list_single_number_heading_pane_g1_ParamLimits

0xf4b7,	// (0x00011b42) list_single_number_heading_pane_g1

0x0fd4,	// (0x0000365f) list_single_number_heading_pane_g2_ParamLimits

0x0fd4,	// (0x0000365f) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00011c53) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00011c53) list_single_number_heading_pane_g

0x350d,	// (0x00005b98) list_single_number_heading_pane_t1_ParamLimits

0x350d,	// (0x00005b98) list_single_number_heading_pane_t1

0x9b5f,	// (0x0000c1ea) list_single_number_heading_pane_t2_ParamLimits

0x9b5f,	// (0x0000c1ea) list_single_number_heading_pane_t2

0x34c7,	// (0x00005b52) list_single_number_heading_pane_t3_ParamLimits

0x34c7,	// (0x00005b52) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00011c5d) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00011c5d) list_single_number_heading_pane_t

0x0fc8,	// (0x00003653) list_single_graphic_heading_pane_g1_ParamLimits

0x0fc8,	// (0x00003653) list_single_graphic_heading_pane_g1

0x9b71,	// (0x0000c1fc) list_single_graphic_heading_pane_g4_ParamLimits

0x9b71,	// (0x0000c1fc) list_single_graphic_heading_pane_g4

0x0fd4,	// (0x0000365f) list_single_graphic_heading_pane_g5_ParamLimits

0x0fd4,	// (0x0000365f) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00011c64) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00011c64) list_single_graphic_heading_pane_g

0x350d,	// (0x00005b98) list_single_graphic_heading_pane_t1_ParamLimits

0x350d,	// (0x00005b98) list_single_graphic_heading_pane_t1

0x9b82,	// (0x0000c20d) list_single_graphic_heading_pane_t2_ParamLimits

0x9b82,	// (0x0000c20d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00011c6b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00011c6b) list_single_graphic_heading_pane_t

0x3501,	// (0x00005b8c) list_single_large_graphic_pane_g1_ParamLimits

0x3501,	// (0x00005b8c) list_single_large_graphic_pane_g1

0xf4b7,	// (0x00011b42) list_single_large_graphic_pane_g2_ParamLimits

0xf4b7,	// (0x00011b42) list_single_large_graphic_pane_g2

0x0fd4,	// (0x0000365f) list_single_large_graphic_pane_g3_ParamLimits

0x0fd4,	// (0x0000365f) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00011c70) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00011c70) list_single_large_graphic_pane_g

0x18f3,	// (0x00003f7e) wait_border_pane_g2_copy1

0x9b94,	// (0x0000c21f) list_single_large_graphic_pane_g4_cp2

0x350d,	// (0x00005b98) list_single_large_graphic_pane_t1_ParamLimits

0x350d,	// (0x00005b98) list_single_large_graphic_pane_t1

0x9b9c,	// (0x0000c227) list_double_pane_g1_ParamLimits

0x9b9c,	// (0x0000c227) list_double_pane_g1

0x9ba8,	// (0x0000c233) list_double_pane_g2_ParamLimits

0x9ba8,	// (0x0000c233) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00011c77) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00011c77) list_double_pane_g

0x9bb4,	// (0x0000c23f) list_double_pane_t1_ParamLimits

0x9bb4,	// (0x0000c23f) list_double_pane_t1

0x9bca,	// (0x0000c255) list_double_pane_t2_ParamLimits

0x9bca,	// (0x0000c255) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00011c7c) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00011c7c) list_double_pane_t

0x9bdc,	// (0x0000c267) list_double2_pane_g1_ParamLimits

0x9bdc,	// (0x0000c267) list_double2_pane_g1

0x9bed,	// (0x0000c278) list_double2_pane_g2_ParamLimits

0x9bed,	// (0x0000c278) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00011c81) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00011c81) list_double2_pane_g

0x9bf9,	// (0x0000c284) list_double2_pane_t1_ParamLimits

0x9bf9,	// (0x0000c284) list_double2_pane_t1

0x9c0f,	// (0x0000c29a) list_double2_pane_t2_ParamLimits

0x9c0f,	// (0x0000c29a) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00011c86) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00011c86) list_double2_pane_t

0x9b9c,	// (0x0000c227) list_double_number_pane_g1_ParamLimits

0x9b9c,	// (0x0000c227) list_double_number_pane_g1

0x9ba8,	// (0x0000c233) list_double_number_pane_g2_ParamLimits

0x9ba8,	// (0x0000c233) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00011c77) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00011c77) list_double_number_pane_g

0x9c21,	// (0x0000c2ac) list_double_number_pane_t1_ParamLimits

0x9c21,	// (0x0000c2ac) list_double_number_pane_t1

0x9c33,	// (0x0000c2be) list_double_number_pane_t2_ParamLimits

0x9c33,	// (0x0000c2be) list_double_number_pane_t2

0x9c49,	// (0x0000c2d4) list_double_number_pane_t3_ParamLimits

0x9c49,	// (0x0000c2d4) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00011c8b) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00011c8b) list_double_number_pane_t

0xe681,	// (0x00010d0c) list_double_graphic_pane_g1_ParamLimits

0xe681,	// (0x00010d0c) list_double_graphic_pane_g1

0x9c5b,	// (0x0000c2e6) list_double_graphic_pane_g2_ParamLimits

0x9c5b,	// (0x0000c2e6) list_double_graphic_pane_g2

0x9c6a,	// (0x0000c2f5) list_double_graphic_pane_g3_ParamLimits

0x9c6a,	// (0x0000c2f5) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00011c92) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00011c92) list_double_graphic_pane_g

0x9c82,	// (0x0000c30d) list_double_graphic_pane_t1_ParamLimits

0x9c82,	// (0x0000c30d) list_double_graphic_pane_t1

0x9c98,	// (0x0000c323) list_double_graphic_pane_t2_ParamLimits

0x9c98,	// (0x0000c323) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00011c9b) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00011c9b) list_double_graphic_pane_t

0x9caa,	// (0x0000c335) list_double2_graphic_pane_g1_ParamLimits

0x9caa,	// (0x0000c335) list_double2_graphic_pane_g1

0x9cb6,	// (0x0000c341) list_double2_graphic_pane_g2_ParamLimits

0x9cb6,	// (0x0000c341) list_double2_graphic_pane_g2

0x9bed,	// (0x0000c278) list_double2_graphic_pane_g3_ParamLimits

0x9bed,	// (0x0000c278) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00011ca0) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00011ca0) list_double2_graphic_pane_g

0x9cc2,	// (0x0000c34d) list_double2_graphic_pane_t1_ParamLimits

0x9cc2,	// (0x0000c34d) list_double2_graphic_pane_t1

0x9cd8,	// (0x0000c363) list_double2_graphic_pane_t2_ParamLimits

0x9cd8,	// (0x0000c363) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00011ca7) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00011ca7) list_double2_graphic_pane_t

0x9cea,	// (0x0000c375) list_double_large_graphic_pane_g1_ParamLimits

0x9cea,	// (0x0000c375) list_double_large_graphic_pane_g1

0x9d15,	// (0x0000c3a0) list_double_large_graphic_pane_g2_ParamLimits

0x9d15,	// (0x0000c3a0) list_double_large_graphic_pane_g2

0x9ba8,	// (0x0000c233) list_double_large_graphic_pane_g3_ParamLimits

0x9ba8,	// (0x0000c233) list_double_large_graphic_pane_g3

0x9d26,	// (0x0000c3b1) list_double_large_graphic_pane_g4_ParamLimits

0x9d26,	// (0x0000c3b1) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00011cac) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00011cac) list_double_large_graphic_pane_g

0x9d38,	// (0x0000c3c3) list_double_large_graphic_pane_t1_ParamLimits

0x9d38,	// (0x0000c3c3) list_double_large_graphic_pane_t1

0x9d51,	// (0x0000c3dc) list_double_large_graphic_pane_t2_ParamLimits

0x9d51,	// (0x0000c3dc) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00011cb7) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00011cb7) list_double_large_graphic_pane_t

0x9d63,	// (0x0000c3ee) list_double2_large_graphic_pane_g1_ParamLimits

0x9d63,	// (0x0000c3ee) list_double2_large_graphic_pane_g1

0x9bdc,	// (0x0000c267) list_double2_large_graphic_pane_g2_ParamLimits

0x9bdc,	// (0x0000c267) list_double2_large_graphic_pane_g2

0x9bed,	// (0x0000c278) list_double2_large_graphic_pane_g3_ParamLimits

0x9bed,	// (0x0000c278) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00011cbc) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00011cbc) list_double2_large_graphic_pane_g

0x9d6f,	// (0x0000c3fa) list_double2_large_graphic_pane_t1_ParamLimits

0x9d6f,	// (0x0000c3fa) list_double2_large_graphic_pane_t1

0x9d85,	// (0x0000c410) list_double2_large_graphic_pane_t2_ParamLimits

0x9d85,	// (0x0000c410) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00011cc3) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00011cc3) list_double2_large_graphic_pane_t

0x9d97,	// (0x0000c422) list_double_heading_pane_g1_ParamLimits

0x9d97,	// (0x0000c422) list_double_heading_pane_g1

0x9da8,	// (0x0000c433) list_double_heading_pane_g2_ParamLimits

0x9da8,	// (0x0000c433) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00011cc8) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00011cc8) list_double_heading_pane_g

0x9db4,	// (0x0000c43f) list_double_heading_pane_t1_ParamLimits

0x9db4,	// (0x0000c43f) list_double_heading_pane_t1

0x9dca,	// (0x0000c455) list_double_heading_pane_t2_ParamLimits

0x9dca,	// (0x0000c455) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00011ccd) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00011ccd) list_double_heading_pane_t

0x9ddc,	// (0x0000c467) list_double_graphic_heading_pane_g1_ParamLimits

0x9ddc,	// (0x0000c467) list_double_graphic_heading_pane_g1

0x9d97,	// (0x0000c422) list_double_graphic_heading_pane_g2_ParamLimits

0x9d97,	// (0x0000c422) list_double_graphic_heading_pane_g2

0x9da8,	// (0x0000c433) list_double_graphic_heading_pane_g3_ParamLimits

0x9da8,	// (0x0000c433) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00011cd2) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00011cd2) list_double_graphic_heading_pane_g

0x9de8,	// (0x0000c473) list_double_graphic_heading_pane_t1_ParamLimits

0x9de8,	// (0x0000c473) list_double_graphic_heading_pane_t1

0x9dfe,	// (0x0000c489) list_double_graphic_heading_pane_t2_ParamLimits

0x9dfe,	// (0x0000c489) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00011cd9) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00011cd9) list_double_graphic_heading_pane_t

0x9d15,	// (0x0000c3a0) list_double_time_pane_g1_ParamLimits

0x9d15,	// (0x0000c3a0) list_double_time_pane_g1

0x9ba8,	// (0x0000c233) list_double_time_pane_g2_ParamLimits

0x9ba8,	// (0x0000c233) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00011cde) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00011cde) list_double_time_pane_g

0x9e10,	// (0x0000c49b) list_double_time_pane_t1_ParamLimits

0x9e10,	// (0x0000c49b) list_double_time_pane_t1

0x9e26,	// (0x0000c4b1) list_double_time_pane_t2_ParamLimits

0x9e26,	// (0x0000c4b1) list_double_time_pane_t2

0x9e38,	// (0x0000c4c3) list_double_time_pane_t3_ParamLimits

0x9e38,	// (0x0000c4c3) list_double_time_pane_t3

0x9e4a,	// (0x0000c4d5) list_double_time_pane_t4_ParamLimits

0x9e4a,	// (0x0000c4d5) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00011ce3) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00011ce3) list_double_time_pane_t

0x9cb6,	// (0x0000c341) list_setting_pane_g1_ParamLimits

0x9cb6,	// (0x0000c341) list_setting_pane_g1

0x9bed,	// (0x0000c278) list_setting_pane_g2_ParamLimits

0x9bed,	// (0x0000c278) list_setting_pane_g2

0x0001,

0xf661,	// (0x00011cec) list_setting_pane_g_ParamLimits

0xf661,	// (0x00011cec) list_setting_pane_g

0x9e5c,	// (0x0000c4e7) list_setting_pane_t1_ParamLimits

0x9e5c,	// (0x0000c4e7) list_setting_pane_t1

0x9e73,	// (0x0000c4fe) list_setting_pane_t2_ParamLimits

0x9e73,	// (0x0000c4fe) list_setting_pane_t2

0x0002,

0xf666,	// (0x00011cf1) list_setting_pane_t_ParamLimits

0xf666,	// (0x00011cf1) list_setting_pane_t

0x9eb2,	// (0x0000c53d) set_value_pane_cp_ParamLimits

0x9eb2,	// (0x0000c53d) set_value_pane_cp

0x9cb6,	// (0x0000c341) list_setting_number_pane_g1_ParamLimits

0x9cb6,	// (0x0000c341) list_setting_number_pane_g1

0x9bed,	// (0x0000c278) list_setting_number_pane_g2_ParamLimits

0x9bed,	// (0x0000c278) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x00011cec) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x00011cec) list_setting_number_pane_g

0x9ec0,	// (0x0000c54b) list_setting_number_pane_t1_ParamLimits

0x9ec0,	// (0x0000c54b) list_setting_number_pane_t1

0x9ed4,	// (0x0000c55f) list_setting_number_pane_t2_ParamLimits

0x9ed4,	// (0x0000c55f) list_setting_number_pane_t2

0x9eeb,	// (0x0000c576) list_setting_number_pane_t3_ParamLimits

0x9eeb,	// (0x0000c576) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00011cf8) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00011cf8) list_setting_number_pane_t

0x9eb2,	// (0x0000c53d) set_value_pane_ParamLimits

0x9eb2,	// (0x0000c53d) set_value_pane

0xe6a2,	// (0x00010d2d) bg_set_opt_pane_ParamLimits

0xe6a2,	// (0x00010d2d) bg_set_opt_pane

0xe6c3,	// (0x00010d4e) set_value_pane_t1

0xe6d1,	// (0x00010d5c) slider_set_pane_cp3

0xe6da,	// (0x00010d65) volume_small_pane_cp

0xe6e3,	// (0x00010d6e) list_form_gen_pane

0xe6ec,	// (0x00010d77) scroll_pane_cp8

0x9f2e,	// (0x0000c5b9) form_field_data_pane_ParamLimits

0x9f2e,	// (0x0000c5b9) form_field_data_pane

0x9f49,	// (0x0000c5d4) form_field_data_wide_pane_ParamLimits

0x9f49,	// (0x0000c5d4) form_field_data_wide_pane

0x9f6d,	// (0x0000c5f8) form_field_popup_pane_ParamLimits

0x9f6d,	// (0x0000c5f8) form_field_popup_pane

0xe70d,	// (0x00010d98) form_field_popup_wide_pane_ParamLimits

0xe70d,	// (0x00010d98) form_field_popup_wide_pane

0xe72e,	// (0x00010db9) form_field_slider_pane_ParamLimits

0xe72e,	// (0x00010db9) form_field_slider_pane

0xe741,	// (0x00010dcc) form_field_slider_wide_pane_ParamLimits

0xe741,	// (0x00010dcc) form_field_slider_wide_pane

0xe754,	// (0x00010ddf) data_form_pane

0x9f99,	// (0x0000c624) form_field_data_pane_t1

0xe760,	// (0x00010deb) input_focus_pane

0xe76e,	// (0x00010df9) data_form_wide_pane

0xe7ab,	// (0x00010e36) form_field_data_wide_pane_t1

0xe43d,	// (0x00010ac8) input_focus_pane_cp6

0x9fb3,	// (0x0000c63e) form_field_popup_pane_t1

0xe760,	// (0x00010deb) input_focus_pane_cp7

0xe7cd,	// (0x00010e58) list_form_pane

0xe7e1,	// (0x00010e6c) form_field_popup_wide_pane_t1

0xe760,	// (0x00010deb) input_focus_pane_cp8

0xe7f6,	// (0x00010e81) list_form_wide_pane

0x9fd5,	// (0x0000c660) form_field_slider_pane_t1_ParamLimits

0x9fd5,	// (0x0000c660) form_field_slider_pane_t1

0x9fed,	// (0x0000c678) form_field_slider_pane_t2_ParamLimits

0x9fed,	// (0x0000c678) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00011d08) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00011d08) form_field_slider_pane_t

0xdff2,	// (0x0001067d) input_focus_pane_cp9_ParamLimits

0xdff2,	// (0x0001067d) input_focus_pane_cp9

0xa002,	// (0x0000c68d) slider_cont_pane_ParamLimits

0xa002,	// (0x0000c68d) slider_cont_pane

0xe805,	// (0x00010e90) form_field_slider_wide_pane_t1_ParamLimits

0xe805,	// (0x00010e90) form_field_slider_wide_pane_t1

0xe817,	// (0x00010ea2) form_field_slider_wide_pane_t2_ParamLimits

0xe817,	// (0x00010ea2) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00011d0d) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00011d0d) form_field_slider_wide_pane_t

0xdff2,	// (0x0001067d) input_focus_pane_cp10_ParamLimits

0xdff2,	// (0x0001067d) input_focus_pane_cp10

0xa016,	// (0x0000c6a1) slider_cont_pane_cp1_ParamLimits

0xa016,	// (0x0000c6a1) slider_cont_pane_cp1

0xa02a,	// (0x0000c6b5) slider_form_pane_cp

0xe829,	// (0x00010eb4) input_focus_pane_g1

0xe831,	// (0x00010ebc) input_focus_pane_g2

0xe839,	// (0x00010ec4) input_focus_pane_g3

0xe841,	// (0x00010ecc) input_focus_pane_g4

0xe849,	// (0x00010ed4) input_focus_pane_g5

0xe851,	// (0x00010edc) input_focus_pane_g6

0xe859,	// (0x00010ee4) input_focus_pane_g7

0xe861,	// (0x00010eec) input_focus_pane_g8

0xe869,	// (0x00010ef4) input_focus_pane_g9

0xddcb,	// (0x00010456) input_focus_pane_g10

0x0009,

0xf687,	// (0x00011d12) input_focus_pane_g

0x18fc,	// (0x00003f87) wait_border_pane_g3_copy1

0xa032,	// (0x0000c6bd) data_form_pane_t1

0xddcb,	// (0x00010456) wait_anim_pane_g1_copy1

0xb9b2,	// (0x0000e03d) data_form_wide_pane_t1

0xe871,	// (0x00010efc) list_form_graphic_pane_cp_ParamLimits

0xe871,	// (0x00010efc) list_form_graphic_pane_cp

0x2acb,	// (0x00005156) slider_form_pane_g1

0x2ad4,	// (0x0000515f) slider_form_pane_g2

0x0006,

0xf97e,	// (0x00012009) slider_form_pane_g

0xa04e,	// (0x0000c6d9) list_form_graphic_pane_ParamLimits

0xa04e,	// (0x0000c6d9) list_form_graphic_pane

0xe883,	// (0x00010f0e) list_form_graphic_pane_g1

0xe88b,	// (0x00010f16) list_form_graphic_pane_t1_ParamLimits

0xe88b,	// (0x00010f16) list_form_graphic_pane_t1

0xe00a,	// (0x00010695) list_highlight_pane_cp5_ParamLimits

0xe00a,	// (0x00010695) list_highlight_pane_cp5

0xa05f,	// (0x0000c6ea) find_pane_g1

0xe8a0,	// (0x00010f2b) input_find_pane

0xa068,	// (0x0000c6f3) input_find_pane_g1_ParamLimits

0xa068,	// (0x0000c6f3) input_find_pane_g1

0xa074,	// (0x0000c6ff) input_find_pane_t1_ParamLimits

0xa074,	// (0x0000c6ff) input_find_pane_t1

0xa089,	// (0x0000c714) input_find_pane_t2_ParamLimits

0xa089,	// (0x0000c714) input_find_pane_t2

0x0001,

0xf69c,	// (0x00011d27) input_find_pane_t_ParamLimits

0xf69c,	// (0x00011d27) input_find_pane_t

0xe8a9,	// (0x00010f34) input_focus_pane_cp5_ParamLimits

0xe8a9,	// (0x00010f34) input_focus_pane_cp5

0xe8b7,	// (0x00010f42) bg_popup_window_pane_cp2_ParamLimits

0xe8b7,	// (0x00010f42) bg_popup_window_pane_cp2

0xe8c4,	// (0x00010f4f) listscroll_menu_pane_ParamLimits

0xe8c4,	// (0x00010f4f) listscroll_menu_pane

0xa0aa,	// (0x0000c735) popup_submenu_window_ParamLimits

0xa0aa,	// (0x0000c735) popup_submenu_window

0xe8d0,	// (0x00010f5b) find_popup_pane_g1

0xe8d8,	// (0x00010f63) input_popup_find_pane_cp

0xe8a9,	// (0x00010f34) input_focus_pane_cp4_ParamLimits

0xe8a9,	// (0x00010f34) input_focus_pane_cp4

0xe8e2,	// (0x00010f6d) input_popup_find_pane_t1_ParamLimits

0xe8e2,	// (0x00010f6d) input_popup_find_pane_t1

0xdf44,	// (0x000105cf) bg_popup_sub_pane_cp

0xe910,	// (0x00010f9b) listscroll_popup_sub_pane

0xe918,	// (0x00010fa3) list_submenu_pane_ParamLimits

0xe918,	// (0x00010fa3) list_submenu_pane

0xe929,	// (0x00010fb4) scroll_pane_cp4

0xe931,	// (0x00010fbc) list_single_popup_submenu_pane_ParamLimits

0xe931,	// (0x00010fbc) list_single_popup_submenu_pane

0xe946,	// (0x00010fd1) list_single_popup_submenu_pane_g1

0xe94e,	// (0x00010fd9) list_single_popup_submenu_pane_t1_ParamLimits

0xe94e,	// (0x00010fd9) list_single_popup_submenu_pane_t1

0xdff2,	// (0x0001067d) bg_active_tab_pane_cp1_ParamLimits

0xdff2,	// (0x0001067d) bg_active_tab_pane_cp1

0xa0e8,	// (0x0000c773) tabs_2_active_pane_g1

0xa0f0,	// (0x0000c77b) tabs_2_active_pane_t1

0xdff2,	// (0x0001067d) bg_passive_tab_pane_cp1_ParamLimits

0xdff2,	// (0x0001067d) bg_passive_tab_pane_cp1

0xa0e8,	// (0x0000c773) tabs_2_passive_pane_g1

0xa0f0,	// (0x0000c77b) tabs_2_passive_pane_t1

0xe00a,	// (0x00010695) bg_active_tab_pane_cp4

0xa102,	// (0x0000c78d) tabs_2_long_active_pane_t1

0x0541,	// (0x00002bcc) bg_passive_tab_pane_cp4

0x119d,	// (0x00003828) list_single_midp_graphic_pane_g4_ParamLimits

0xe00a,	// (0x00010695) bg_active_tab_pane_cp5

0xa115,	// (0x0000c7a0) tabs_3_long_active_pane_t1

0x0541,	// (0x00002bcc) bg_passive_tab_pane_cp5

0x119d,	// (0x00003828) list_single_midp_graphic_pane_g4

0xe00a,	// (0x00010695) bg_popup_window_pane_cp13_ParamLimits

0xe00a,	// (0x00010695) bg_popup_window_pane_cp13

0xe96c,	// (0x00010ff7) listscroll_popup_fast_pane_ParamLimits

0xe96c,	// (0x00010ff7) listscroll_popup_fast_pane

0xe97b,	// (0x00011006) grid_popup_fast_pane_ParamLimits

0xe97b,	// (0x00011006) grid_popup_fast_pane

0xe98d,	// (0x00011018) scroll_pane_cp9_ParamLimits

0xe98d,	// (0x00011018) scroll_pane_cp9

0x4e78,	// (0x00007503) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4e78,	// (0x00007503) list_single_graphic_hl_pane_t1_cp2

0xe9b1,	// (0x0001103c) input_focus_pane_cp20_ParamLimits

0xe9b1,	// (0x0001103c) input_focus_pane_cp20

0xe9d9,	// (0x00011064) query_popup_data_pane_t1_ParamLimits

0xe9d9,	// (0x00011064) query_popup_data_pane_t1

0xe9ec,	// (0x00011077) query_popup_data_pane_t2_ParamLimits

0xe9ec,	// (0x00011077) query_popup_data_pane_t2

0xea32,	// (0x000110bd) query_popup_data_pane_t3_ParamLimits

0xea32,	// (0x000110bd) query_popup_data_pane_t3

0xea73,	// (0x000110fe) query_popup_data_pane_t4_ParamLimits

0xea73,	// (0x000110fe) query_popup_data_pane_t4

0xeaaf,	// (0x0001113a) query_popup_data_pane_t5_ParamLimits

0xeaaf,	// (0x0001113a) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00011d2c) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00011d2c) query_popup_data_pane_t

0xe829,	// (0x00010eb4) bg_set_opt_pane_g1

0xe831,	// (0x00010ebc) bg_set_opt_pane_g2

0xe839,	// (0x00010ec4) bg_set_opt_pane_g3

0xe841,	// (0x00010ecc) bg_set_opt_pane_g4

0xe849,	// (0x00010ed4) bg_set_opt_pane_g5

0xe851,	// (0x00010edc) bg_set_opt_pane_g6

0xe859,	// (0x00010ee4) bg_set_opt_pane_g7

0xe861,	// (0x00010eec) bg_set_opt_pane_g8

0xe869,	// (0x00010ef4) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00011d37) bg_set_opt_pane_g

0xf160,	// (0x000117eb) control_top_pane_stacon_ParamLimits

0xf160,	// (0x000117eb) control_top_pane_stacon

0xf1b3,	// (0x0001183e) signal_pane_stacon_ParamLimits

0xf1b3,	// (0x0001183e) signal_pane_stacon

0xf1d8,	// (0x00011863) stacon_top_pane_g1_ParamLimits

0xf1d8,	// (0x00011863) stacon_top_pane_g1

0xf1fa,	// (0x00011885) title_pane_stacon_ParamLimits

0xf1fa,	// (0x00011885) title_pane_stacon

0xf224,	// (0x000118af) uni_indicator_pane_stacon_ParamLimits

0xf224,	// (0x000118af) uni_indicator_pane_stacon

0xf23c,	// (0x000118c7) battery_pane_stacon_ParamLimits

0xf23c,	// (0x000118c7) battery_pane_stacon

0xf280,	// (0x0001190b) control_bottom_pane_stacon_ParamLimits

0xf280,	// (0x0001190b) control_bottom_pane_stacon

0xf2a3,	// (0x0001192e) navi_pane_stacon_ParamLimits

0xf2a3,	// (0x0001192e) navi_pane_stacon

0xf2c6,	// (0x00011951) stacon_bottom_pane_g1_ParamLimits

0xf2c6,	// (0x00011951) stacon_bottom_pane_g1

0xeae6,	// (0x00011171) aid_levels_signal_lsc_ParamLimits

0xeae6,	// (0x00011171) aid_levels_signal_lsc

0xeafd,	// (0x00011188) signal_pane_stacon_g1_ParamLimits

0xeafd,	// (0x00011188) signal_pane_stacon_g1

0xeb11,	// (0x0001119c) signal_pane_stacon_g2_ParamLimits

0xeb11,	// (0x0001119c) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00011d4a) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00011d4a) signal_pane_stacon_g

0xeb53,	// (0x000111de) title_pane_stacon_t1_ParamLimits

0xeb53,	// (0x000111de) title_pane_stacon_t1

0xeb78,	// (0x00011203) uni_indicator_pane_stacon_g1

0xeb82,	// (0x0001120d) uni_indicator_pane_stacon_g2

0xeb8c,	// (0x00011217) uni_indicator_pane_stacon_g3

0xeb96,	// (0x00011221) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00011d56) uni_indicator_pane_stacon_g

0xeba0,	// (0x0001122b) control_top_pane_stacon_g1

0xeba8,	// (0x00011233) control_top_pane_stacon_t1_ParamLimits

0xeba8,	// (0x00011233) control_top_pane_stacon_t1

0xebdf,	// (0x0001126a) aid_levels_battery_lsc_ParamLimits

0xebdf,	// (0x0001126a) aid_levels_battery_lsc

0xebf7,	// (0x00011282) battery_pane_stacon_g1_ParamLimits

0xebf7,	// (0x00011282) battery_pane_stacon_g1

0xec0a,	// (0x00011295) battery_pane_stacon_g2_ParamLimits

0xec0a,	// (0x00011295) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00011d5f) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00011d5f) battery_pane_stacon_g

0xec48,	// (0x000112d3) navi_icon_pane_stacon

0xec5c,	// (0x000112e7) navi_navi_pane_stacon

0xec48,	// (0x000112d3) navi_text_pane_stacon

0xeba0,	// (0x0001122b) control_bottom_pane_stacon_g1

0xec72,	// (0x000112fd) control_bottom_pane_stacon_t1_ParamLimits

0xec72,	// (0x000112fd) control_bottom_pane_stacon_t1

0xa127,	// (0x0000c7b2) grid_app_pane_ParamLimits

0xa127,	// (0x0000c7b2) grid_app_pane

0xa15f,	// (0x0000c7ea) scroll_pane_cp15_ParamLimits

0xa15f,	// (0x0000c7ea) scroll_pane_cp15

0xa174,	// (0x0000c7ff) cell_app_pane_ParamLimits

0xa174,	// (0x0000c7ff) cell_app_pane

0xa1c1,	// (0x0000c84c) cell_app_pane_g1_ParamLimits

0xa1c1,	// (0x0000c84c) cell_app_pane_g1

0xecc3,	// (0x0001134e) cell_app_pane_g2_ParamLimits

0xecc3,	// (0x0001134e) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00011d64) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00011d64) cell_app_pane_g

0xeccf,	// (0x0001135a) cell_app_pane_t1_ParamLimits

0xeccf,	// (0x0001135a) cell_app_pane_t1

0xece6,	// (0x00011371) grid_highlight_pane_ParamLimits

0xece6,	// (0x00011371) grid_highlight_pane

0xe829,	// (0x00010eb4) cell_highlight_pane_g1

0xe831,	// (0x00010ebc) cell_highlight_pane_g2

0xe839,	// (0x00010ec4) cell_highlight_pane_g3

0xe841,	// (0x00010ecc) cell_highlight_pane_g4

0xe849,	// (0x00010ed4) cell_highlight_pane_g5

0xe851,	// (0x00010edc) cell_highlight_pane_g6

0xe859,	// (0x00010ee4) cell_highlight_pane_g7

0xe861,	// (0x00010eec) cell_highlight_pane_g8

0xe869,	// (0x00010ef4) cell_highlight_pane_g9

0xddcb,	// (0x00010456) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00011d12) cell_highlight_pane_g

0xed01,	// (0x0001138c) bg_scroll_pane

0xed20,	// (0x000113ab) scroll_handle_pane

0xed71,	// (0x000113fc) scroll_bg_pane_g1

0xed86,	// (0x00011411) scroll_bg_pane_g2

0xed9e,	// (0x00011429) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00011d69) scroll_bg_pane_g

0xedb3,	// (0x0001143e) scroll_handle_focus_pane_ParamLimits

0xedb3,	// (0x0001143e) scroll_handle_focus_pane

0xed71,	// (0x000113fc) scroll_handle_pane_g1

0xedc0,	// (0x0001144b) scroll_handle_pane_g2

0xed9e,	// (0x00011429) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00011d70) scroll_handle_pane_g

0xe8a9,	// (0x00010f34) bg_popup_sub_pane_cp21_ParamLimits

0xe8a9,	// (0x00010f34) bg_popup_sub_pane_cp21

0xedd4,	// (0x0001145f) popup_fep_japan_predictive_window_t1_ParamLimits

0xedd4,	// (0x0001145f) popup_fep_japan_predictive_window_t1

0xedeb,	// (0x00011476) popup_fep_japan_predictive_window_t2_ParamLimits

0xedeb,	// (0x00011476) popup_fep_japan_predictive_window_t2

0xee1e,	// (0x000114a9) popup_fep_japan_predictive_window_t3_ParamLimits

0xee1e,	// (0x000114a9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00011d77) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00011d77) popup_fep_japan_predictive_window_t

0xdf44,	// (0x000105cf) bg_popup_sub_pane_cp23

0xee55,	// (0x000114e0) listscroll_japin_cand_pane

0xee5d,	// (0x000114e8) popup_fep_japan_candidate_window_t1

0xee6b,	// (0x000114f6) candidate_pane_ParamLimits

0xee6b,	// (0x000114f6) candidate_pane

0xee7d,	// (0x00011508) scroll_pane_cp30

0xee87,	// (0x00011512) list_single_popup_jap_candidate_pane_ParamLimits

0xee87,	// (0x00011512) list_single_popup_jap_candidate_pane

0xdf44,	// (0x000105cf) list_highlight_pane_cp30

0xee9b,	// (0x00011526) list_single_popup_jap_candidate_pane_t1

0xa1ea,	// (0x0000c875) level_1_signal

0xa1fc,	// (0x0000c887) level_2_signal

0xa20f,	// (0x0000c89a) level_3_signal

0xa222,	// (0x0000c8ad) level_4_signal

0xa235,	// (0x0000c8c0) level_5_signal

0xa248,	// (0x0000c8d3) level_6_signal

0xa25b,	// (0x0000c8e6) level_7_signal

0xa1ea,	// (0x0000c875) level_1_battery

0xa1fc,	// (0x0000c887) level_2_battery

0xa20f,	// (0x0000c89a) level_3_battery

0xa222,	// (0x0000c8ad) level_4_battery

0xa235,	// (0x0000c8c0) level_5_battery

0xa248,	// (0x0000c8d3) level_6_battery

0xa25b,	// (0x0000c8e6) level_7_battery

0xeee1,	// (0x0001156c) list_menu_pane_ParamLimits

0xeee1,	// (0x0001156c) list_menu_pane

0xeef7,	// (0x00011582) scroll_pane_cp25_ParamLimits

0xeef7,	// (0x00011582) scroll_pane_cp25

0xef10,	// (0x0001159b) list_double2_graphic_pane_cp2_ParamLimits

0xef10,	// (0x0001159b) list_double2_graphic_pane_cp2

0xef10,	// (0x0001159b) list_double2_large_graphic_pane_cp2_ParamLimits

0xef10,	// (0x0001159b) list_double2_large_graphic_pane_cp2

0xef10,	// (0x0001159b) list_double2_pane_cp2_ParamLimits

0xef10,	// (0x0001159b) list_double2_pane_cp2

0xef10,	// (0x0001159b) list_double_graphic_pane_cp2_ParamLimits

0xef10,	// (0x0001159b) list_double_graphic_pane_cp2

0xef10,	// (0x0001159b) list_double_large_graphic_pane_cp2_ParamLimits

0xef10,	// (0x0001159b) list_double_large_graphic_pane_cp2

0xef10,	// (0x0001159b) list_double_number_pane_cp2_ParamLimits

0xef10,	// (0x0001159b) list_double_number_pane_cp2

0xef10,	// (0x0001159b) list_double_pane_cp2_ParamLimits

0xef10,	// (0x0001159b) list_double_pane_cp2

0xa281,	// (0x0000c90c) list_single_2graphic_pane_cp2_ParamLimits

0xa281,	// (0x0000c90c) list_single_2graphic_pane_cp2

0xa281,	// (0x0000c90c) list_single_graphic_heading_pane_cp2_ParamLimits

0xa281,	// (0x0000c90c) list_single_graphic_heading_pane_cp2

0xa281,	// (0x0000c90c) list_single_graphic_pane_cp2_ParamLimits

0xa281,	// (0x0000c90c) list_single_graphic_pane_cp2

0xa281,	// (0x0000c90c) list_single_heading_pane_cp2_ParamLimits

0xa281,	// (0x0000c90c) list_single_heading_pane_cp2

0xef20,	// (0x000115ab) list_single_large_graphic_pane_cp2_ParamLimits

0xef20,	// (0x000115ab) list_single_large_graphic_pane_cp2

0xa281,	// (0x0000c90c) list_single_number_heading_pane_cp2_ParamLimits

0xa281,	// (0x0000c90c) list_single_number_heading_pane_cp2

0xa281,	// (0x0000c90c) list_single_number_pane_cp2_ParamLimits

0xa281,	// (0x0000c90c) list_single_number_pane_cp2

0xa281,	// (0x0000c90c) list_single_pane_cp2_ParamLimits

0xa281,	// (0x0000c90c) list_single_pane_cp2

0xef94,	// (0x0001161f) bg_popup_sub_pane_cp22

0xefb9,	// (0x00011644) popup_side_volume_key_window_g1

0xefe3,	// (0x0001166e) popup_side_volume_key_window_t1

0xf001,	// (0x0001168c) volume_small_pane_cp1

0xdff2,	// (0x0001067d) bg_popup_sub_pane_cp24_ParamLimits

0xdff2,	// (0x0001067d) bg_popup_sub_pane_cp24

0xf009,	// (0x00011694) fep_china_uni_candidate_pane_ParamLimits

0xf009,	// (0x00011694) fep_china_uni_candidate_pane

0xf01d,	// (0x000116a8) fep_china_uni_entry_pane

0xf02d,	// (0x000116b8) popup_fep_china_uni_window_g1

0xf049,	// (0x000116d4) fep_china_uni_entry_pane_g1

0xf053,	// (0x000116de) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00011da8) fep_china_uni_entry_pane_g

0xf05d,	// (0x000116e8) fep_entry_item_pane

0xf067,	// (0x000116f2) fep_candidate_item_pane

0xf06f,	// (0x000116fa) fep_china_uni_candidate_pane_g1

0xf079,	// (0x00011704) fep_china_uni_candidate_pane_g2

0xf081,	// (0x0001170c) fep_china_uni_candidate_pane_g3

0xf089,	// (0x00011714) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00011dad) fep_china_uni_candidate_pane_g

0xddcb,	// (0x00010456) fep_entry_item_pane_g1

0xf093,	// (0x0001171e) fep_entry_item_pane_t1_ParamLimits

0xf093,	// (0x0001171e) fep_entry_item_pane_t1

0xf0a9,	// (0x00011734) fep_candidate_item_pane_t1_ParamLimits

0xf0a9,	// (0x00011734) fep_candidate_item_pane_t1

0xf0be,	// (0x00011749) fep_candidate_item_pane_t2_ParamLimits

0xf0be,	// (0x00011749) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00011db6) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00011db6) fep_candidate_item_pane_t

0xe00a,	// (0x00010695) list_highlight_pane_cp31_ParamLimits

0xe00a,	// (0x00010695) list_highlight_pane_cp31

0xf0d0,	// (0x0001175b) level_1_signal_lsc

0xf0d9,	// (0x00011764) level_2_signal_lsc

0xf0e2,	// (0x0001176d) level_3_signal_lsc

0xf0eb,	// (0x00011776) level_4_signal_lsc

0xf0f4,	// (0x0001177f) level_5_signal_lsc

0xf0fd,	// (0x00011788) level_6_signal_lsc

0xf106,	// (0x00011791) level_7_signal_lsc

0xf106,	// (0x00011791) level_1_battery_lsc

0xf10f,	// (0x0001179a) level_2_battery_lsc

0xf118,	// (0x000117a3) level_3_battery_lsc

0xf121,	// (0x000117ac) level_4_battery_lsc

0xf12a,	// (0x000117b5) level_5_battery_lsc

0xf133,	// (0x000117be) level_6_battery_lsc

0xf0d0,	// (0x0001175b) level_7_battery_lsc

0xf13c,	// (0x000117c7) scroll_handle_focus_pane_g1

0xf145,	// (0x000117d0) scroll_handle_focus_pane_g2

0xf14e,	// (0x000117d9) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00011dbb) scroll_handle_focus_pane_g

0xa313,	// (0x0000c99e) list_single_2graphic_pane_g1_ParamLimits

0xa313,	// (0x0000c99e) list_single_2graphic_pane_g1

0x9b71,	// (0x0000c1fc) list_single_2graphic_pane_g2_ParamLimits

0x9b71,	// (0x0000c1fc) list_single_2graphic_pane_g2

0x0fd4,	// (0x0000365f) list_single_2graphic_pane_g3_ParamLimits

0x0fd4,	// (0x0000365f) list_single_2graphic_pane_g3

0xa31f,	// (0x0000c9aa) list_single_2graphic_pane_g4_ParamLimits

0xa31f,	// (0x0000c9aa) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00011dc2) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00011dc2) list_single_2graphic_pane_g

0xa330,	// (0x0000c9bb) list_single_2graphic_pane_t1_ParamLimits

0xa330,	// (0x0000c9bb) list_single_2graphic_pane_t1

0xa35e,	// (0x0000c9e9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa35e,	// (0x0000c9e9) list_double2_graphic_large_graphic_pane_g1

0x9bdc,	// (0x0000c267) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9bdc,	// (0x0000c267) list_double2_graphic_large_graphic_pane_g2

0x9bed,	// (0x0000c278) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9bed,	// (0x0000c278) list_double2_graphic_large_graphic_pane_g3

0xa370,	// (0x0000c9fb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa370,	// (0x0000c9fb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00011dcb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00011dcb) list_double2_graphic_large_graphic_pane_g

0xa37c,	// (0x0000ca07) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa37c,	// (0x0000ca07) list_double2_graphic_large_graphic_pane_t1

0xa392,	// (0x0000ca1d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa392,	// (0x0000ca1d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00011dd4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00011dd4) list_double2_graphic_large_graphic_pane_t

0xf324,	// (0x000119af) popup_fast_swap_window_ParamLimits

0xf324,	// (0x000119af) popup_fast_swap_window

0xf342,	// (0x000119cd) popup_side_volume_key_window

0xf360,	// (0x000119eb) stacon_top_pane

0xf36a,	// (0x000119f5) status_pane_ParamLimits

0xf36a,	// (0x000119f5) status_pane

0xa43b,	// (0x0000cac6) status_small_pane

0xdf44,	// (0x000105cf) control_pane

0xdf44,	// (0x000105cf) stacon_bottom_pane

0xe6ec,	// (0x00010d77) scroll_pane_cp121

0xe6e3,	// (0x00010d6e) set_content_pane

0xa3a4,	// (0x0000ca2f) bg_active_tab_pane_g1_cp1

0xf157,	// (0x000117e2) bg_active_tab_pane_g2_cp1

0xa3ad,	// (0x0000ca38) bg_active_tab_pane_g3_cp1

0xa3a4,	// (0x0000ca2f) bg_passive_tab_pane_g1_cp1

0xf157,	// (0x000117e2) bg_passive_tab_pane_g2_cp1

0xa3ad,	// (0x0000ca38) bg_passive_tab_pane_g3_cp1

0xa3b6,	// (0x0000ca41) bg_active_tab_pane_g1_cp2

0xf157,	// (0x000117e2) bg_active_tab_pane_g2_cp2

0xa3bf,	// (0x0000ca4a) bg_active_tab_pane_g3_cp2

0xa3b6,	// (0x0000ca41) bg_passive_tab_pane_g1_cp2

0xf157,	// (0x000117e2) bg_passive_tab_pane_g2_cp2

0xa3bf,	// (0x0000ca4a) bg_passive_tab_pane_g3_cp2

0xa3c8,	// (0x0000ca53) bg_active_tab_pane_g1_cp3

0xf157,	// (0x000117e2) bg_active_tab_pane_g2_cp3

0xa3d1,	// (0x0000ca5c) bg_active_tab_pane_g3_cp3

0xa3c8,	// (0x0000ca53) bg_passive_tab_pane_g1_cp3

0xf157,	// (0x000117e2) bg_passive_tab_pane_g2_cp3

0xa3d1,	// (0x0000ca5c) bg_passive_tab_pane_g3_cp3

0xa3da,	// (0x0000ca65) bg_active_tab_pane_g1_cp4

0xf157,	// (0x000117e2) bg_active_tab_pane_g2_cp4

0xa3e3,	// (0x0000ca6e) bg_active_tab_pane_g3_cp4

0xa3da,	// (0x0000ca65) bg_passive_tab_pane_g1_cp4

0xf157,	// (0x000117e2) bg_passive_tab_pane_g2_cp4

0xa3e3,	// (0x0000ca6e) bg_passive_tab_pane_g3_cp4

0xf2e2,	// (0x0001196d) bg_active_tab_pane_g1_cp5

0xf157,	// (0x000117e2) bg_active_tab_pane_g2_cp5

0xf2eb,	// (0x00011976) bg_active_tab_pane_g3_cp5

0xf2e2,	// (0x0001196d) bg_passive_tab_pane_g1_cp5

0xf157,	// (0x000117e2) bg_passive_tab_pane_g2_cp5

0xf2eb,	// (0x00011976) bg_passive_tab_pane_g3_cp5

0x3279,	// (0x00005904) list_set_graphic_pane_ParamLimits

0x3279,	// (0x00005904) list_set_graphic_pane

0xdf44,	// (0x000105cf) bg_set_opt_pane_cp4

0xa3ec,	// (0x0000ca77) list_set_graphic_pane_g1_ParamLimits

0xa3ec,	// (0x0000ca77) list_set_graphic_pane_g1

0xa3f8,	// (0x0000ca83) list_set_graphic_pane_g2_ParamLimits

0xa3f8,	// (0x0000ca83) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00011dd9) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00011dd9) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0001215c) volume_small_pane_cp_g

0xa41c,	// (0x0000caa7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa41c,	// (0x0000caa7) list_double2_large_graphic_pane_g1_cp2

0xa42a,	// (0x0000cab5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa42a,	// (0x0000cab5) list_double2_large_graphic_pane_g2_cp2

0xf2f4,	// (0x0001197f) list_double2_large_graphic_pane_g3_cp2

0xf2fc,	// (0x00011987) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf2fc,	// (0x00011987) list_double2_large_graphic_pane_t1_cp2

0xf312,	// (0x0001199d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf312,	// (0x0001199d) list_double2_large_graphic_pane_t2_cp2

0xb73b,	// (0x0000ddc6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb73b,	// (0x0000ddc6) list_double_large_graphic_pane_g1_cp2

0xb74e,	// (0x0000ddd9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb74e,	// (0x0000ddd9) list_double_large_graphic_pane_g2_cp2

0xf44b,	// (0x00011ad6) list_double_large_graphic_pane_g3_cp2

0x2570,	// (0x00004bfb) list_double_large_graphic_pane_g4_cp

0x2578,	// (0x00004c03) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2578,	// (0x00004c03) list_double_large_graphic_pane_t1_cp2

0x258f,	// (0x00004c1a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x258f,	// (0x00004c1a) list_double_large_graphic_pane_t2_cp2

0xa446,	// (0x0000cad1) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa446,	// (0x0000cad1) list_double2_graphic_pane_g1_cp2

0xa454,	// (0x0000cadf) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa454,	// (0x0000cadf) list_double2_graphic_pane_g2_cp2

0xa465,	// (0x0000caf0) list_double2_graphic_pane_g3_cp2

0xf378,	// (0x00011a03) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf378,	// (0x00011a03) list_double2_graphic_pane_t1_cp2

0xf38e,	// (0x00011a19) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf38e,	// (0x00011a19) list_double2_graphic_pane_t2_cp2

0xf3a0,	// (0x00011a2b) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf3a0,	// (0x00011a2b) list_single_number_heading_pane_g1_cp2

0xf3ac,	// (0x00011a37) list_single_number_heading_pane_g2_cp2

0xf3b4,	// (0x00011a3f) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf3b4,	// (0x00011a3f) list_single_number_heading_pane_t1_cp2

0xa46f,	// (0x0000cafa) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa46f,	// (0x0000cafa) list_single_number_heading_pane_t2_cp2

0xf3ca,	// (0x00011a55) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf3ca,	// (0x00011a55) list_single_number_heading_pane_t3_cp2

0xf3a0,	// (0x00011a2b) list_single_heading_pane_g1_cp2_ParamLimits

0xf3a0,	// (0x00011a2b) list_single_heading_pane_g1_cp2

0xf3ac,	// (0x00011a37) list_single_heading_pane_g2_cp2

0xf3b4,	// (0x00011a3f) list_single_heading_pane_t1_cp2_ParamLimits

0xf3b4,	// (0x00011a3f) list_single_heading_pane_t1_cp2

0xb727,	// (0x0000ddb2) list_single_heading_pane_t2_cp2_ParamLimits

0xb727,	// (0x0000ddb2) list_single_heading_pane_t2_cp2

0x228e,	// (0x00004919) list_double_graphic_pane_g1_cp2_ParamLimits

0x228e,	// (0x00004919) list_double_graphic_pane_g1_cp2

0x229a,	// (0x00004925) list_double_graphic_pane_g2_cp2_ParamLimits

0x229a,	// (0x00004925) list_double_graphic_pane_g2_cp2

0x22a9,	// (0x00004934) list_double_graphic_pane_g3_cp2

0x22b1,	// (0x0000493c) list_double_graphic_pane_t1_cp2_ParamLimits

0x22b1,	// (0x0000493c) list_double_graphic_pane_t1_cp2

0x22c7,	// (0x00004952) list_double_graphic_pane_t2_cp2_ParamLimits

0x22c7,	// (0x00004952) list_double_graphic_pane_t2_cp2

0xf43f,	// (0x00011aca) list_double_number_pane_g1_cp2_ParamLimits

0xf43f,	// (0x00011aca) list_double_number_pane_g1_cp2

0xf44b,	// (0x00011ad6) list_double_number_pane_g2_cp2

0xb6c1,	// (0x0000dd4c) list_double_number_pane_t1_cp2_ParamLimits

0xb6c1,	// (0x0000dd4c) list_double_number_pane_t1_cp2

0x2266,	// (0x000048f1) list_double_number_pane_t2_cp2_ParamLimits

0x2266,	// (0x000048f1) list_double_number_pane_t2_cp2

0x227c,	// (0x00004907) list_double_number_pane_t3_cp2_ParamLimits

0x227c,	// (0x00004907) list_double_number_pane_t3_cp2

0xb5fe,	// (0x0000dc89) list_single_graphic_pane_g1_cp2_ParamLimits

0xb5fe,	// (0x0000dc89) list_single_graphic_pane_g1_cp2

0xf48b,	// (0x00011b16) list_single_graphic_pane_g2_cp2_ParamLimits

0xf48b,	// (0x00011b16) list_single_graphic_pane_g2_cp2

0xf497,	// (0x00011b22) list_single_graphic_pane_g3_cp2

0x2100,	// (0x0000478b) list_single_graphic_pane_t1_cp2_ParamLimits

0x2100,	// (0x0000478b) list_single_graphic_pane_t1_cp2

0xf48b,	// (0x00011b16) list_single_number_pane_g1_cp2_ParamLimits

0xf48b,	// (0x00011b16) list_single_number_pane_g1_cp2

0xf497,	// (0x00011b22) list_single_number_pane_g2_cp2

0x2100,	// (0x0000478b) list_single_number_pane_t1_cp2_ParamLimits

0x2100,	// (0x0000478b) list_single_number_pane_t1_cp2

0xb5ea,	// (0x0000dc75) list_single_number_pane_t2_cp2_ParamLimits

0xb5ea,	// (0x0000dc75) list_single_number_pane_t2_cp2

0xa42a,	// (0x0000cab5) list_double2_pane_g1_cp2_ParamLimits

0xa42a,	// (0x0000cab5) list_double2_pane_g1_cp2

0xf2f4,	// (0x0001197f) list_double2_pane_g2_cp2

0xf417,	// (0x00011aa2) list_double2_pane_t1_cp2_ParamLimits

0xf417,	// (0x00011aa2) list_double2_pane_t1_cp2

0xf42d,	// (0x00011ab8) list_double2_pane_t2_cp2_ParamLimits

0xf42d,	// (0x00011ab8) list_double2_pane_t2_cp2

0xf43f,	// (0x00011aca) list_double_pane_g1_cp2_ParamLimits

0xf43f,	// (0x00011aca) list_double_pane_g1_cp2

0xf44b,	// (0x00011ad6) list_double_pane_g2_cp2

0xf453,	// (0x00011ade) list_double_pane_t1_cp2_ParamLimits

0xf453,	// (0x00011ade) list_double_pane_t1_cp2

0xf469,	// (0x00011af4) list_double_pane_t2_cp2_ParamLimits

0xf469,	// (0x00011af4) list_double_pane_t2_cp2

0xf47b,	// (0x00011b06) list_single_pane_cp2_g3

0xf48b,	// (0x00011b16) list_single_pane_g1_cp2_ParamLimits

0xf48b,	// (0x00011b16) list_single_pane_g1_cp2

0xf497,	// (0x00011b22) list_single_pane_g2_cp2

0xf49f,	// (0x00011b2a) list_single_pane_t1_cp2_ParamLimits

0xf49f,	// (0x00011b2a) list_single_pane_t1_cp2

0xa49d,	// (0x0000cb28) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa49d,	// (0x0000cb28) list_single_large_graphic_pane_g1_cp2

0xf4b7,	// (0x00011b42) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf4b7,	// (0x00011b42) list_single_large_graphic_pane_g2_cp2

0xf4c3,	// (0x00011b4e) list_single_large_graphic_pane_g3_cp2

0xf4cb,	// (0x00011b56) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xf4cb,	// (0x00011b56) list_single_large_graphic_pane_g4_cp1

0xf4e5,	// (0x00011b70) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf4e5,	// (0x00011b70) list_single_large_graphic_pane_t1_cp2

0x1f6f,	// (0x000045fa) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x1f6f,	// (0x000045fa) list_single_graphic_heading_pane_g1_cp2

0xb46f,	// (0x0000dafa) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb46f,	// (0x0000dafa) list_single_graphic_heading_pane_g4_cp2

0xf497,	// (0x00011b22) list_single_graphic_heading_pane_g5_cp2

0x1f7b,	// (0x00004606) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1f7b,	// (0x00004606) list_single_graphic_heading_pane_t1_cp2

0xb480,	// (0x0000db0b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb480,	// (0x0000db0b) list_single_graphic_heading_pane_t2_cp2

0x1f30,	// (0x000045bb) list_single_2graphic_pane_g1_cp2_ParamLimits

0x1f30,	// (0x000045bb) list_single_2graphic_pane_g1_cp2

0xb46f,	// (0x0000dafa) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb46f,	// (0x0000dafa) list_single_2graphic_pane_g2_cp2

0xf497,	// (0x00011b22) list_single_2graphic_pane_g3_cp2

0x1f4d,	// (0x000045d8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x1f4d,	// (0x000045d8) list_single_2graphic_pane_g4_cp2

0x1f59,	// (0x000045e4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x1f59,	// (0x000045e4) list_single_2graphic_pane_t1_cp2

0xddcb,	// (0x00010456) list_highlight_pane_g10_cp1

0x1b08,	// (0x00004193) list_highlight_pane_g1_cp1

0x1b10,	// (0x0000419b) list_highlight_pane_g2_cp1

0x1b18,	// (0x000041a3) list_highlight_pane_g3_cp1

0x1b20,	// (0x000041ab) list_highlight_pane_g4_cp1

0x1b28,	// (0x000041b3) list_highlight_pane_g5_cp1

0x1b30,	// (0x000041bb) list_highlight_pane_g6_cp1

0x1b38,	// (0x000041c3) list_highlight_pane_g7_cp1

0x1b40,	// (0x000041cb) list_highlight_pane_g8_cp1

0x1b48,	// (0x000041d3) list_highlight_pane_g9_cp1

0xb435,	// (0x0000dac0) form_field_slider_pane_t3

0xb443,	// (0x0000dace) form_field_slider_pane_t4

0x1a44,	// (0x000040cf) slider_form_pane_ParamLimits

0x1a44,	// (0x000040cf) slider_form_pane

0xdf44,	// (0x000105cf) control_abbreviations

0xdf44,	// (0x000105cf) control_conventions

0xdf44,	// (0x000105cf) control_definitions

0xdf44,	// (0x000105cf) format_table_attribute

0x239c,	// (0x00004a27) bg_popup_preview_window_pane_g9

0xdf44,	// (0x000105cf) format_table_data2

0xdf44,	// (0x000105cf) format_table_data3

0xdf44,	// (0x000105cf) format_table_data_example

0x0008,

0xdf44,	// (0x000105cf) intro_purpose

0xf8de,	// (0x00011f69) bg_popup_preview_window_pane_g

0xdf44,	// (0x000105cf) texts_category

0xdf44,	// (0x000105cf) texts_graphics

0xf4fb,	// (0x00011b86) text_digital

0xf50a,	// (0x00011b95) text_primary

0xf519,	// (0x00011ba4) text_primary_small

0xf528,	// (0x00011bb3) text_secondary

0xf537,	// (0x00011bc2) text_title

0x2ca9,	// (0x00005334) bg_passive_tab_pane_g1_cp3_srt

0xf157,	// (0x000117e2) bg_passive_tab_pane_g2_cp3_srt

0x2cb2,	// (0x0000533d) bg_passive_tab_pane_g3_cp3_srt

0xdff2,	// (0x0001067d) bg_active_tab_pane_cp3_srt_ParamLimits

0xdff2,	// (0x0001067d) bg_active_tab_pane_cp3_srt

0x2cbb,	// (0x00005346) tabs_4_active_pane_srt_g1

0xba76,	// (0x0000e101) tabs_4_active_pane_srt_t1_ParamLimits

0xba76,	// (0x0000e101) tabs_4_active_pane_srt_t1

0x2ca9,	// (0x00005334) bg_active_tab_pane_g1_cp3_copy1

0xf157,	// (0x000117e2) bg_active_tab_pane_g2_cp3_copy1

0x2cb2,	// (0x0000533d) bg_active_tab_pane_g3_cp3_copy1

0xe00a,	// (0x00010695) tabs_2_long_active_pane_srt_ParamLimits

0xe00a,	// (0x00010695) tabs_2_long_active_pane_srt

0xe00a,	// (0x00010695) tabs_2_long_passive_pane_srt_ParamLimits

0xe00a,	// (0x00010695) tabs_2_long_passive_pane_srt

0x0541,	// (0x00002bcc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0541,	// (0x00002bcc) bg_passive_tab_pane_cp4_srt

0x2864,	// (0x00004eef) bg_passive_tab_pane_g1_cp4_srt

0xf157,	// (0x000117e2) bg_passive_tab_pane_g2_cp4_srt

0x286d,	// (0x00004ef8) bg_passive_tab_pane_g3_cp4_srt

0xe00a,	// (0x00010695) bg_active_tab_pane_cp4_srt_ParamLimits

0xe00a,	// (0x00010695) bg_active_tab_pane_cp4_srt

0xb823,	// (0x0000deae) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb823,	// (0x0000deae) tabs_2_long_active_pane_srt_t1

0x2864,	// (0x00004eef) bg_active_tab_pane_g1_cp4_srt

0xf157,	// (0x000117e2) bg_active_tab_pane_g2_cp4_srt

0x286d,	// (0x00004ef8) bg_active_tab_pane_g3_cp4_srt

0xdff2,	// (0x0001067d) tabs_3_long_active_pane_srt_ParamLimits

0xdff2,	// (0x0001067d) tabs_3_long_active_pane_srt

0xdff2,	// (0x0001067d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xdff2,	// (0x0001067d) tabs_3_long_passive_pane_cp_srt

0xdff2,	// (0x0001067d) tabs_3_long_passive_pane_srt_ParamLimits

0xdff2,	// (0x0001067d) tabs_3_long_passive_pane_srt

0x0541,	// (0x00002bcc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0541,	// (0x00002bcc) bg_passive_tab_pane_cp5_srt

0xf2e2,	// (0x0001196d) bg_passive_tab_pane_g1_cp5_srt

0xf157,	// (0x000117e2) bg_passive_tab_pane_g2_cp5_srt

0xf2eb,	// (0x00011976) bg_passive_tab_pane_g3_cp5_srt

0xe00a,	// (0x00010695) bg_active_tab_pane_cp5_srt_ParamLimits

0xe00a,	// (0x00010695) bg_active_tab_pane_cp5_srt

0xb80d,	// (0x0000de98) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb80d,	// (0x0000de98) tabs_3_long_active_pane_srt_t1

0xf2e2,	// (0x0001196d) bg_active_tab_pane_g1_cp5_srt

0xf157,	// (0x000117e2) bg_active_tab_pane_g2_cp5_srt

0xf2eb,	// (0x00011976) bg_active_tab_pane_g3_cp5_srt

0x2844,	// (0x00004ecf) navi_text_pane_srt_t1

0x283c,	// (0x00004ec7) navi_icon_pane_srt_g1

0x022d,	// (0x000028b8) midp_editing_number_pane_srt

0xf546,	// (0x00011bd1) midp_ticker_pane_srt

0x0235,	// (0x000028c0) midp_ticker_pane_srt_g1

0x023d,	// (0x000028c8) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00011df8) midp_ticker_pane_srt_g

0x0245,	// (0x000028d0) midp_ticker_pane_srt_t1

0x282d,	// (0x00004eb8) midp_editing_number_pane_t1_copy1

0x0541,	// (0x00002bcc) listscroll_midp_pane

0x0541,	// (0x00002bcc) midp_form_pane

0x0032,	// (0x000026bd) midp_info_popup_window_ParamLimits

0x0032,	// (0x000026bd) midp_info_popup_window

0xe8a9,	// (0x00010f34) bg_popup_sub_pane_cp50_ParamLimits

0xe8a9,	// (0x00010f34) bg_popup_sub_pane_cp50

0x173e,	// (0x00003dc9) listscroll_midp_info_pane_ParamLimits

0x173e,	// (0x00003dc9) listscroll_midp_info_pane

0x1726,	// (0x00003db1) listscroll_form_midp_pane_ParamLimits

0x1726,	// (0x00003db1) listscroll_form_midp_pane

0x1732,	// (0x00003dbd) scroll_bar_cp050

0xb429,	// (0x0000dab4) list_midp_pane

0x3b29,	// (0x000061b4) signal_pane_g2_cp

0x1640,	// (0x00003ccb) listscroll_midp_info_pane_t1_ParamLimits

0x1640,	// (0x00003ccb) listscroll_midp_info_pane_t1

0x1658,	// (0x00003ce3) listscroll_midp_info_pane_t2_ParamLimits

0x1658,	// (0x00003ce3) listscroll_midp_info_pane_t2

0x1696,	// (0x00003d21) listscroll_midp_info_pane_t3_ParamLimits

0x1696,	// (0x00003d21) listscroll_midp_info_pane_t3

0x16d0,	// (0x00003d5b) listscroll_midp_info_pane_t4_ParamLimits

0x16d0,	// (0x00003d5b) listscroll_midp_info_pane_t4

0x0003,

0xf819,	// (0x00011ea4) listscroll_midp_info_pane_t_ParamLimits

0xf819,	// (0x00011ea4) listscroll_midp_info_pane_t

0xe929,	// (0x00010fb4) scroll_pane_cp21

0x15da,	// (0x00003c65) form_midp_field_choice_group_pane

0x15e3,	// (0x00003c6e) form_midp_field_text_pane

0x1626,	// (0x00003cb1) form_midp_field_time_pane

0x162e,	// (0x00003cb9) form_midp_gauge_slider_pane

0x1637,	// (0x00003cc2) form_midp_gauge_wait_pane

0xdf44,	// (0x000105cf) form_midp_image_pane

0xb40c,	// (0x0000da97) list_single_midp_pane_ParamLimits

0xb40c,	// (0x0000da97) list_single_midp_pane

0xb3e4,	// (0x0000da6f) form_midp_field_text_pane_t1

0x12cd,	// (0x00003958) input_focus_pane_cp050

0x15a9,	// (0x00003c34) list_midp_form_text_pane

0x154d,	// (0x00003bd8) form_midp_field_choice_group_pane_t1

0x155b,	// (0x00003be6) input_focus_pane_cp051

0x156f,	// (0x00003bfa) list_midp_choice_pane

0xdf44,	// (0x000105cf) status_idle_pane

0x1531,	// (0x00003bbc) form_midp_field_time_pane_t1

0xddcb,	// (0x00010456) wait_anim_pane_g2_copy1

0x153f,	// (0x00003bca) form_midp_field_time_pane_t2

0x0001,

0x00e2,	// (0x0000276d) aid_navinavi_width_2_pane

0xf814,	// (0x00011e9f) form_midp_field_time_pane_t

0xdf44,	// (0x000105cf) input_focus_pane_cp052

0xdf44,	// (0x000105cf) bg_input_focus_pane_cp040

0x14f1,	// (0x00003b7c) form_midp_gauge_slider_pane_t1

0x14ff,	// (0x00003b8a) form_midp_gauge_slider_pane_t2

0xb3c8,	// (0x0000da53) form_midp_gauge_slider_pane_t3

0xb3d6,	// (0x0000da61) form_midp_gauge_slider_pane_t4

0x0003,

0xf80b,	// (0x00011e96) form_midp_gauge_slider_pane_t

0x1529,	// (0x00003bb4) form_midp_slider_pane

0xe00a,	// (0x00010695) bg_input_focus_pane_cp041_ParamLimits

0xe00a,	// (0x00010695) bg_input_focus_pane_cp041

0x14be,	// (0x00003b49) form_midp_gauge_wait_pane_t1_ParamLimits

0x14be,	// (0x00003b49) form_midp_gauge_wait_pane_t1

0x14d0,	// (0x00003b5b) form_midp_gauge_wait_pane_t2_ParamLimits

0x14d0,	// (0x00003b5b) form_midp_gauge_wait_pane_t2

0x0001,

0xf806,	// (0x00011e91) form_midp_gauge_wait_pane_t_ParamLimits

0xf806,	// (0x00011e91) form_midp_gauge_wait_pane_t

0x14e2,	// (0x00003b6d) form_midp_wait_pane_ParamLimits

0x14e2,	// (0x00003b6d) form_midp_wait_pane

0x1486,	// (0x00003b11) form_midp_image_pane_g1

0x148f,	// (0x00003b1a) form_midp_image_pane_t1

0x149e,	// (0x00003b29) form_midp_image_pane_t2

0x14ad,	// (0x00003b38) form_midp_image_pane_t3

0x0002,

0xf7ff,	// (0x00011e8a) form_midp_image_pane_t

0x146e,	// (0x00003af9) list_single_midp_pane_g1

0x1477,	// (0x00003b02) list_single_midp_pane_t1

0xb3b1,	// (0x0000da3c) list_midp_form_item_pane_ParamLimits

0xb3b1,	// (0x0000da3c) list_midp_form_item_pane

0x008a,	// (0x00002715) list_midp_form_item_pane_t1

0x0099,	// (0x00002724) midp_ticker_pane_g1

0x00a5,	// (0x00002730) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00011dde) midp_ticker_pane_g

0xa542,	// (0x0000cbcd) midp_ticker_pane_t1

0xb9ce,	// (0x0000e059) midp_editing_number_pane_t1

0x2b2b,	// (0x000051b6) midp_editing_number_pane

0x2b3a,	// (0x000051c5) midp_ticker_pane

0x27f5,	// (0x00004e80) ai_message_heading_pane

0xdf44,	// (0x000105cf) bg_popup_window_pane_cp14

0x27fd,	// (0x00004e88) listscroll_ai_message_pane

0x277b,	// (0x00004e06) ai_message_heading_pane_g1_ParamLimits

0x277b,	// (0x00004e06) ai_message_heading_pane_g1

0x2787,	// (0x00004e12) ai_message_heading_pane_g2_ParamLimits

0x2787,	// (0x00004e12) ai_message_heading_pane_g2

0x2795,	// (0x00004e20) ai_message_heading_pane_g3_ParamLimits

0x2795,	// (0x00004e20) ai_message_heading_pane_g3

0x27a1,	// (0x00004e2c) ai_message_heading_pane_g4_ParamLimits

0x27a1,	// (0x00004e2c) ai_message_heading_pane_g4

0x0003,

0xf940,	// (0x00011fcb) ai_message_heading_pane_g_ParamLimits

0xf940,	// (0x00011fcb) ai_message_heading_pane_g

0x27ad,	// (0x00004e38) ai_message_heading_pane_t1_ParamLimits

0x27ad,	// (0x00004e38) ai_message_heading_pane_t1

0x27c7,	// (0x00004e52) ai_message_heading_pane_t2_ParamLimits

0x27c7,	// (0x00004e52) ai_message_heading_pane_t2

0x0001,

0xf949,	// (0x00011fd4) ai_message_heading_pane_t_ParamLimits

0xf949,	// (0x00011fd4) ai_message_heading_pane_t

0x27db,	// (0x00004e66) bg_popup_heading_pane_cp1_ParamLimits

0x27db,	// (0x00004e66) bg_popup_heading_pane_cp1

0x2769,	// (0x00004df4) list_ai_message_pane_ParamLimits

0x2769,	// (0x00004df4) list_ai_message_pane

0xe929,	// (0x00010fb4) scroll_pane_cp10

0x26a1,	// (0x00004d2c) list_ai_message_pane_g1

0x26a9,	// (0x00004d34) list_ai_message_pane_g2

0x0001,

0xf91d,	// (0x00011fa8) list_ai_message_pane_g

0x26b1,	// (0x00004d3c) list_ai_message_pane_t1_ParamLimits

0x26b1,	// (0x00004d3c) list_ai_message_pane_t1

0x26c6,	// (0x00004d51) list_ai_message_pane_t2_ParamLimits

0x26c6,	// (0x00004d51) list_ai_message_pane_t2

0x26db,	// (0x00004d66) list_ai_message_pane_t3_ParamLimits

0x26db,	// (0x00004d66) list_ai_message_pane_t3

0x26f0,	// (0x00004d7b) list_ai_message_pane_t4_ParamLimits

0x26f0,	// (0x00004d7b) list_ai_message_pane_t4

0x0003,

0xf922,	// (0x00011fad) list_ai_message_pane_t_ParamLimits

0xf922,	// (0x00011fad) list_ai_message_pane_t

0xb7e1,	// (0x0000de6c) cell_ai_soft_ind_pane_ParamLimits

0xb7e1,	// (0x0000de6c) cell_ai_soft_ind_pane

0x00c3,	// (0x0000274e) cell_ai_soft_ind_pane_g1_ParamLimits

0x00c3,	// (0x0000274e) cell_ai_soft_ind_pane_g1

0xdf44,	// (0x000105cf) grid_highlight_cp1

0x00d0,	// (0x0000275b) text_secondary_cp56_ParamLimits

0x00d0,	// (0x0000275b) text_secondary_cp56

0x265f,	// (0x00004cea) example_general_pane_ParamLimits

0x265f,	// (0x00004cea) example_general_pane

0x266b,	// (0x00004cf6) example_parent_pane_g1_ParamLimits

0x266b,	// (0x00004cf6) example_parent_pane_g1

0x2677,	// (0x00004d02) example_parent_pane_t1_ParamLimits

0x2677,	// (0x00004d02) example_parent_pane_t1

0xabc4,	// (0x0000d24f) popup_preview_text_window_ParamLimits

0xabc4,	// (0x0000d24f) popup_preview_text_window

0xf483,	// (0x00011b0e) list_single_pane_cp2_g4

0xe288,	// (0x00010913) bg_popup_preview_window_pane_ParamLimits

0xe288,	// (0x00010913) bg_popup_preview_window_pane

0x23a6,	// (0x00004a31) popup_preview_text_window_t1_ParamLimits

0x23a6,	// (0x00004a31) popup_preview_text_window_t1

0x23c4,	// (0x00004a4f) popup_preview_text_window_t2_ParamLimits

0x23c4,	// (0x00004a4f) popup_preview_text_window_t2

0x240d,	// (0x00004a98) popup_preview_text_window_t3_ParamLimits

0x240d,	// (0x00004a98) popup_preview_text_window_t3

0x2452,	// (0x00004add) popup_preview_text_window_t4_ParamLimits

0x2452,	// (0x00004add) popup_preview_text_window_t4

0x0004,

0xf8f1,	// (0x00011f7c) popup_preview_text_window_t_ParamLimits

0xf8f1,	// (0x00011f7c) popup_preview_text_window_t

0x24d0,	// (0x00004b5b) scroll_pane_cp11

0x1130,	// (0x000037bb) bg_popup_preview_window_pane_g1

0x235a,	// (0x000049e5) bg_popup_preview_window_pane_g2

0x2364,	// (0x000049ef) bg_popup_preview_window_pane_g3

0x236e,	// (0x000049f9) bg_popup_preview_window_pane_g4

0x2378,	// (0x00004a03) bg_popup_preview_window_pane_g5

0x2382,	// (0x00004a0d) bg_popup_preview_window_pane_g6

0x238a,	// (0x00004a15) bg_popup_preview_window_pane_g7

0x2392,	// (0x00004a1d) bg_popup_preview_window_pane_g8

0xdde1,	// (0x0001046c) aid_popup_width_pane

0xab34,	// (0x0000d1bf) popup_midp_note_alarm_window_ParamLimits

0xab34,	// (0x0000d1bf) popup_midp_note_alarm_window

0xe754,	// (0x00010ddf) data_form_pane_ParamLimits

0x9f8f,	// (0x0000c61a) form_field_data_pane_g1

0x9f99,	// (0x0000c624) form_field_data_pane_t1_ParamLimits

0xe760,	// (0x00010deb) input_focus_pane_ParamLimits

0xe76e,	// (0x00010df9) data_form_wide_pane_ParamLimits

0xe77f,	// (0x00010e0a) form_field_data_wide_pane_g1

0xe7ab,	// (0x00010e36) form_field_data_wide_pane_t1_ParamLimits

0xe43d,	// (0x00010ac8) input_focus_pane_cp6_ParamLimits

0xa0da,	// (0x0000c765) input_popup_find_pane_g1_ParamLimits

0xa0da,	// (0x0000c765) input_popup_find_pane_g1

0xec1b,	// (0x000112a6) aid_navi_side_left_pane

0xec30,	// (0x000112bb) aid_navi_side_right_pane

0x1c03,	// (0x0000428e) bg_popup_window_pane_cp30_ParamLimits

0x1c03,	// (0x0000428e) bg_popup_window_pane_cp30

0x1c7d,	// (0x00004308) popup_midp_note_alarm_window_g1_ParamLimits

0x1c7d,	// (0x00004308) popup_midp_note_alarm_window_g1

0x1cad,	// (0x00004338) popup_midp_note_alarm_window_t1_ParamLimits

0x1cad,	// (0x00004338) popup_midp_note_alarm_window_t1

0x1d4e,	// (0x000043d9) popup_midp_note_alarm_window_t2_ParamLimits

0x1d4e,	// (0x000043d9) popup_midp_note_alarm_window_t2

0x1dfc,	// (0x00004487) popup_midp_note_alarm_window_t3_ParamLimits

0x1dfc,	// (0x00004487) popup_midp_note_alarm_window_t3

0x1e2e,	// (0x000044b9) popup_midp_note_alarm_window_t4_ParamLimits

0x1e2e,	// (0x000044b9) popup_midp_note_alarm_window_t4

0x1e54,	// (0x000044df) popup_midp_note_alarm_window_t5_ParamLimits

0x1e54,	// (0x000044df) popup_midp_note_alarm_window_t5

0x000a,

0xf88e,	// (0x00011f19) popup_midp_note_alarm_window_t_ParamLimits

0xf88e,	// (0x00011f19) popup_midp_note_alarm_window_t

0x1f00,	// (0x0000458b) wait_bar_pane_cp1_ParamLimits

0x1f00,	// (0x0000458b) wait_bar_pane_cp1

0xdf44,	// (0x000105cf) wait_anim_pane_copy1

0xdf44,	// (0x000105cf) wait_border_pane_copy1

0x18e8,	// (0x00003f73) wait_border_pane_g1_copy1

0xe7c5,	// (0x00010e50) form_field_popup_pane_g1

0x9fb3,	// (0x0000c63e) form_field_popup_pane_t1_ParamLimits

0xe760,	// (0x00010deb) input_focus_pane_cp7_ParamLimits

0xe7cd,	// (0x00010e58) list_form_pane_ParamLimits

0xe7d9,	// (0x00010e64) form_field_popup_wide_pane_g1

0xe7e1,	// (0x00010e6c) form_field_popup_wide_pane_t1_ParamLimits

0xe760,	// (0x00010deb) input_focus_pane_cp8_ParamLimits

0xe7f6,	// (0x00010e81) list_form_wide_pane_ParamLimits

0x2d36,	// (0x000053c1) aid_size_cell_graphic_pane

0xa032,	// (0x0000c6bd) data_form_pane_t1_ParamLimits

0xb9b2,	// (0x0000e03d) data_form_wide_pane_t1_ParamLimits

0xafc8,	// (0x0000d653) bg_status_flat_pane

0x97b8,	// (0x0000be43) title_pane_t1_ParamLimits

0xdfba,	// (0x00010645) title_pane_t2_ParamLimits

0xdfe0,	// (0x0001066b) title_pane_t3_ParamLimits

0xf557,	// (0x00011be2) title_pane_t_ParamLimits

0xa1ea,	// (0x0000c875) level_1_signal_ParamLimits

0xa1fc,	// (0x0000c887) level_2_signal_ParamLimits

0xa20f,	// (0x0000c89a) level_3_signal_ParamLimits

0xa222,	// (0x0000c8ad) level_4_signal_ParamLimits

0xa235,	// (0x0000c8c0) level_5_signal_ParamLimits

0xa248,	// (0x0000c8d3) level_6_signal_ParamLimits

0xa25b,	// (0x0000c8e6) level_7_signal_ParamLimits

0xa1ea,	// (0x0000c875) level_1_battery_ParamLimits

0xa1fc,	// (0x0000c887) level_2_battery_ParamLimits

0xa20f,	// (0x0000c89a) level_3_battery_ParamLimits

0xa222,	// (0x0000c8ad) level_4_battery_ParamLimits

0xa235,	// (0x0000c8c0) level_5_battery_ParamLimits

0xa248,	// (0x0000c8d3) level_6_battery_ParamLimits

0xa25b,	// (0x0000c8e6) level_7_battery_ParamLimits

0x1b08,	// (0x00004193) bg_status_flat_pane_g1

0x1b10,	// (0x0000419b) bg_status_flat_pane_g2

0x1b18,	// (0x000041a3) bg_status_flat_pane_g3

0x1b20,	// (0x000041ab) bg_status_flat_pane_g4

0x1b28,	// (0x000041b3) bg_status_flat_pane_g5

0x1b30,	// (0x000041bb) bg_status_flat_pane_g6

0x1b38,	// (0x000041c3) bg_status_flat_pane_g7

0x984c,	// (0x0000bed7) tabs_3_active_pane_t1_ParamLimits

0x984c,	// (0x0000bed7) tabs_3_passive_pane_t1_ParamLimits

0x9866,	// (0x0000bef1) tabs_4_active_pane_t1_ParamLimits

0x9866,	// (0x0000bef1) tabs_4_1_passive_pane_t1_ParamLimits

0xa0f0,	// (0x0000c77b) tabs_2_active_pane_t1_ParamLimits

0xa0f0,	// (0x0000c77b) tabs_2_passive_pane_t1_ParamLimits

0xe00a,	// (0x00010695) bg_active_tab_pane_cp4_ParamLimits

0xa102,	// (0x0000c78d) tabs_2_long_active_pane_t1_ParamLimits

0x0541,	// (0x00002bcc) bg_passive_tab_pane_cp4_ParamLimits

0x11ee,	// (0x00003879) list_single_midp_graphic_pane_t1_ParamLimits

0xe00a,	// (0x00010695) bg_active_tab_pane_cp5_ParamLimits

0xa115,	// (0x0000c7a0) tabs_3_long_active_pane_t1_ParamLimits

0x0541,	// (0x00002bcc) bg_passive_tab_pane_cp5_ParamLimits

0x11ee,	// (0x00003879) list_single_midp_graphic_pane_t1

0xafc8,	// (0x0000d653) bg_status_flat_pane_ParamLimits

0x0d02,	// (0x0000338d) indicator_pane_cp2_ParamLimits

0x0d02,	// (0x0000338d) indicator_pane_cp2

0xb15e,	// (0x0000d7e9) navi_pane_srt_ParamLimits

0xb15e,	// (0x0000d7e9) navi_pane_srt

0x0e69,	// (0x000034f4) popup_clock_digital_analogue_window_cp1

0xe0f1,	// (0x0001077c) indicator_pane_t1

0xf546,	// (0x00011bd1) copy_highlight_pane

0xf546,	// (0x00011bd1) cursor_graphics_pane

0xf546,	// (0x00011bd1) graphic_within_text_pane

0xf546,	// (0x00011bd1) link_highlight_pane

0x2493,	// (0x00004b1e) popup_preview_text_window_t5_ParamLimits

0x2493,	// (0x00004b1e) popup_preview_text_window_t5

0x00ec,	// (0x00002777) cursor_digital_pane

0x00ec,	// (0x00002777) cursor_primary_pane

0x00fd,	// (0x00002788) cursor_primary_small_pane

0x0105,	// (0x00002790) cursor_secondary_pane

0x010d,	// (0x00002798) cursor_title_pane

0x00ec,	// (0x00002777) link_highlight_digital_pane

0x00f4,	// (0x0000277f) link_highlight_primary_pane

0x00fd,	// (0x00002788) link_highlight_primary_small_pane

0x0105,	// (0x00002790) link_highlight_secondary_pane

0x010d,	// (0x00002798) link_highlight_title_pane

0x00ec,	// (0x00002777) copy_highlight_digital_pane

0x00ec,	// (0x00002777) copy_highlight_primary_pane

0x00fd,	// (0x00002788) copy_highlight_primary_small_pane

0x0105,	// (0x00002790) copy_highlight_secondary_pane

0x010d,	// (0x00002798) copy_highlight_title_pane

0x0105,	// (0x00002790) graphic_text_digital_pane

0x1ba6,	// (0x00004231) graphic_text_primary_pane

0x1baf,	// (0x0000423a) graphic_text_primary_small_pane

0x00fd,	// (0x00002788) graphic_text_secondary_pane

0x00ec,	// (0x00002777) graphic_text_title_pane

0xa554,	// (0x0000cbdf) cursor_primary_pane_g1

0x1b98,	// (0x00004223) cursor_text_primary_t1

0xb465,	// (0x0000daf0) cursor_primary_small_pane_g1

0x1b8a,	// (0x00004215) cursor_text_primary_small_t1

0xb45b,	// (0x0000dae6) cursor_primary_small_pane_g1_copy1

0x1b72,	// (0x000041fd) cursor_text_primary_small_t1_copy1

0x1b50,	// (0x000041db) cursor_text_title_t1

0xb451,	// (0x0000dadc) cursor_title_pane_g1

0xa554,	// (0x0000cbdf) cursor_digital_pane_g1

0x011f,	// (0x000027aa) cursor_text_digital_t1

0x012d,	// (0x000027b8) link_highlight_primary_pane_g1

0x1af9,	// (0x00004184) link_highlight_primary_pane_t1

0x012d,	// (0x000027b8) link_highlight_primary_small_pane_g1

0x0135,	// (0x000027c0) link_highlight_primary_small_pane_t1

0x0144,	// (0x000027cf) link_highlight_secondary_pane_g1

0x014c,	// (0x000027d7) link_highlight_secondary_pane_t1

0x1a6d,	// (0x000040f8) link_highlight_title_pane_g1

0x1a75,	// (0x00004100) link_highlight_title_pane_t1

0x1a56,	// (0x000040e1) link_highlight_digital_pane_g1

0x1a5e,	// (0x000040e9) link_highlight_digital_pane_t1

0x191e,	// (0x00003fa9) copy_highlight_primary_pane_g1

0x1935,	// (0x00003fc0) copy_highlight_primary_pane_t1

0x191e,	// (0x00003fa9) copy_highlight_primary_small_pane_g1

0x1926,	// (0x00003fb1) copy_highlight_primary_small_pane_t1

0x015b,	// (0x000027e6) copy_highlight_secondary_pane_g1

0x0163,	// (0x000027ee) copy_highlight_secondary_pane_t1

0x1907,	// (0x00003f92) copy_highlight_title_pane_g1

0x190f,	// (0x00003f9a) copy_highlight_title_pane_t1

0x191e,	// (0x00003fa9) copy_highlight_digital_pane_g1

0x2fbe,	// (0x00005649) copy_highlight_digital_pane_t1

0x2f12,	// (0x0000559d) graphic_text_primary_pane_g1

0x2fa2,	// (0x0000562d) graphic_text_primary_pane_t1

0x2fb0,	// (0x0000563b) graphic_text_primary_pane_t2

0x0001,

0xf9bd,	// (0x00012048) graphic_text_primary_pane_t

0x2f7e,	// (0x00005609) graphic_text_primary_small_pane_g1

0x2f86,	// (0x00005611) graphic_text_primary_small_pane_t1

0x2f94,	// (0x0000561f) graphic_text_primary_small_pane_t2

0x0001,

0xf9b8,	// (0x00012043) graphic_text_primary_small_pane_t

0x2f5a,	// (0x000055e5) graphic_text_secondary_pane_g1

0x2f62,	// (0x000055ed) graphic_text_secondary_pane_t1

0x2f70,	// (0x000055fb) graphic_text_secondary_pane_t2

0x0001,

0xf9b3,	// (0x0001203e) graphic_text_secondary_pane_t

0x2f36,	// (0x000055c1) graphic_text_title_pane_g1

0x2f3e,	// (0x000055c9) graphic_text_title_pane_t1

0x2f4c,	// (0x000055d7) graphic_text_title_pane_t2

0x0001,

0xf9ae,	// (0x00012039) graphic_text_title_pane_t

0x2f12,	// (0x0000559d) graphic_text_digital_pane_g1

0x2f1a,	// (0x000055a5) graphic_text_digital_pane_t1

0x2f28,	// (0x000055b3) graphic_text_digital_pane_t2

0x0001,

0xf9a9,	// (0x00012034) graphic_text_digital_pane_t

0xe00a,	// (0x00010695) navi_icon_pane_srt_ParamLimits

0xe00a,	// (0x00010695) navi_icon_pane_srt

0xdf44,	// (0x000105cf) navi_midp_pane_srt

0xdf44,	// (0x000105cf) navi_navi_pane_srt

0xe00a,	// (0x00010695) navi_text_pane_srt_ParamLimits

0xe00a,	// (0x00010695) navi_text_pane_srt

0x2edd,	// (0x00005568) navi_navi_icon_text_pane_srt

0x2ee5,	// (0x00005570) navi_navi_pane_srt_g1_ParamLimits

0x2ee5,	// (0x00005570) navi_navi_pane_srt_g1

0x2ef7,	// (0x00005582) navi_navi_pane_srt_g2_ParamLimits

0x2ef7,	// (0x00005582) navi_navi_pane_srt_g2

0x0001,

0xf9a4,	// (0x0001202f) navi_navi_pane_srt_g_ParamLimits

0xf9a4,	// (0x0001202f) navi_navi_pane_srt_g

0x2f09,	// (0x00005594) navi_navi_tabs_pane_srt

0x2edd,	// (0x00005568) navi_navi_text_pane_srt

0x2edd,	// (0x00005568) navi_navi_volume_pane_srt

0x2ece,	// (0x00005559) navi_navi_text_pane_srt_t1

0x2ea9,	// (0x00005534) navi_navi_volume_pane_srt_g1

0x2eb1,	// (0x0000553c) volume_small_pane_srt_ParamLimits

0x2eb1,	// (0x0000553c) volume_small_pane_srt

0x0172,	// (0x000027fd) volume_small_pane_srt_g1_ParamLimits

0x0172,	// (0x000027fd) volume_small_pane_srt_g1

0x0182,	// (0x0000280d) volume_small_pane_srt_g2_ParamLimits

0x0182,	// (0x0000280d) volume_small_pane_srt_g2

0x0193,	// (0x0000281e) volume_small_pane_srt_g3_ParamLimits

0x0193,	// (0x0000281e) volume_small_pane_srt_g3

0x01a4,	// (0x0000282f) volume_small_pane_srt_g4_ParamLimits

0x01a4,	// (0x0000282f) volume_small_pane_srt_g4

0x01b5,	// (0x00002840) volume_small_pane_srt_g5_ParamLimits

0x01b5,	// (0x00002840) volume_small_pane_srt_g5

0x01c6,	// (0x00002851) volume_small_pane_srt_g6_ParamLimits

0x01c6,	// (0x00002851) volume_small_pane_srt_g6

0x01d7,	// (0x00002862) volume_small_pane_srt_g7_ParamLimits

0x01d7,	// (0x00002862) volume_small_pane_srt_g7

0x01e8,	// (0x00002873) volume_small_pane_srt_g8_ParamLimits

0x01e8,	// (0x00002873) volume_small_pane_srt_g8

0x01f9,	// (0x00002884) volume_small_pane_srt_g9_ParamLimits

0x01f9,	// (0x00002884) volume_small_pane_srt_g9

0x020a,	// (0x00002895) volume_small_pane_srt_g10_ParamLimits

0x020a,	// (0x00002895) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00011de3) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00011de3) volume_small_pane_srt_g

0xe33d,	// (0x000109c8) query_popup_data_pane_cp2

0x2e97,	// (0x00005522) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2e97,	// (0x00005522) navi_navi_icon_text_pane_srt_t1

0x1ba6,	// (0x00004231) navi_tabs_2_long_pane_srt

0x1ba6,	// (0x00004231) navi_tabs_2_pane_srt

0x1ba6,	// (0x00004231) navi_tabs_3_long_pane_srt

0x1ba6,	// (0x00004231) navi_tabs_3_pane_srt

0x1ba6,	// (0x00004231) navi_tabs_4_pane_srt

0x2e6f,	// (0x000054fa) tabs_2_active_pane_srt_ParamLimits

0x2e6f,	// (0x000054fa) tabs_2_active_pane_srt

0x2e7f,	// (0x0000550a) tabs_2_passive_pane_srt_ParamLimits

0x2e7f,	// (0x0000550a) tabs_2_passive_pane_srt

0x12cd,	// (0x00003958) bg_passive_tab_pane_cp1_srt_ParamLimits

0x12cd,	// (0x00003958) bg_passive_tab_pane_cp1_srt

0x2e43,	// (0x000054ce) bg_passive_tab_pane_g1_cp1_srt

0xf157,	// (0x000117e2) bg_passive_tab_pane_g2_cp1_srt

0x2e4c,	// (0x000054d7) bg_passive_tab_pane_g3_cp1_srt

0xdff2,	// (0x0001067d) bg_active_tab_pane_cp1_srt_ParamLimits

0xdff2,	// (0x0001067d) bg_active_tab_pane_cp1_srt

0x2e55,	// (0x000054e0) tabs_2_active_pane_srt_g1

0xbaf7,	// (0x0000e182) tabs_2_active_pane_srt_t1_ParamLimits

0xbaf7,	// (0x0000e182) tabs_2_active_pane_srt_t1

0x2e43,	// (0x000054ce) bg_active_tab_pane_g1_cp1_srt

0xf157,	// (0x000117e2) bg_active_tab_pane_g2_cp1_srt

0x2e4c,	// (0x000054d7) bg_active_tab_pane_g3_cp1_srt

0x2e10,	// (0x0000549b) tabs_3_active_pane_srt_ParamLimits

0x2e10,	// (0x0000549b) tabs_3_active_pane_srt

0x2e21,	// (0x000054ac) tabs_3_passive_pane_cp_srt_ParamLimits

0x2e21,	// (0x000054ac) tabs_3_passive_pane_cp_srt

0x2e32,	// (0x000054bd) tabs_3_passive_pane_srt_ParamLimits

0x2e32,	// (0x000054bd) tabs_3_passive_pane_srt

0x12cd,	// (0x00003958) bg_passive_tab_pane_cp2_srt_ParamLimits

0x12cd,	// (0x00003958) bg_passive_tab_pane_cp2_srt

0x021b,	// (0x000028a6) bg_passive_tab_pane_g1_cp2_srt

0xf157,	// (0x000117e2) bg_passive_tab_pane_g2_cp2_srt

0x0224,	// (0x000028af) bg_passive_tab_pane_g3_cp2_srt

0xdff2,	// (0x0001067d) bg_active_tab_pane_cp2_srt_ParamLimits

0xdff2,	// (0x0001067d) bg_active_tab_pane_cp2_srt

0x2df6,	// (0x00005481) tabs_3_active_pane_srt_g1

0xbae1,	// (0x0000e16c) tabs_3_active_pane_srt_t1_ParamLimits

0xbae1,	// (0x0000e16c) tabs_3_active_pane_srt_t1

0x021b,	// (0x000028a6) bg_active_tab_pane_g1_cp2_srt

0xf157,	// (0x000117e2) bg_active_tab_pane_g2_cp2_srt

0x0224,	// (0x000028af) bg_active_tab_pane_g3_cp2_srt

0x2dae,	// (0x00005439) tabs_4_active_pane_srt_ParamLimits

0x2dae,	// (0x00005439) tabs_4_active_pane_srt

0x2dc0,	// (0x0000544b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2dc0,	// (0x0000544b) tabs_4_passive_pane_cp2_srt

0x04bf,	// (0x00002b4a) aid_size_cell_toolbar

0x294f,	// (0x00004fda) main_idle_act_pane_ParamLimits

0x0712,	// (0x00002d9d) popup_large_graphic_colour_window_ParamLimits

0xae8a,	// (0x0000d515) popup_toolbar_window_ParamLimits

0xae8a,	// (0x0000d515) popup_toolbar_window

0x2b70,	// (0x000051fb) list_single_graphic_2heading_pane_ParamLimits

0x2b70,	// (0x000051fb) list_single_graphic_2heading_pane

0xeca9,	// (0x00011334) aid_size_cell_apps_grid_lsc_pane

0xecbb,	// (0x00011346) aid_size_cell_apps_grid_prt_pane

0x0541,	// (0x00002bcc) bg_wml_button_pane_cp1_ParamLimits

0x0541,	// (0x00002bcc) bg_wml_button_pane_cp1

0xb3e4,	// (0x0000da6f) form_midp_field_text_pane_t1_ParamLimits

0x12cd,	// (0x00003958) input_focus_pane_cp050_ParamLimits

0x15a9,	// (0x00003c34) list_midp_form_text_pane_ParamLimits

0x155b,	// (0x00003be6) input_focus_pane_cp051_ParamLimits

0x156f,	// (0x00003bfa) list_midp_choice_pane_ParamLimits

0xb39b,	// (0x0000da26) list_single_2graphic_pane_cp3_ParamLimits

0xb39b,	// (0x0000da26) list_single_2graphic_pane_cp3

0x3ef3,	// (0x0000657e) list_single_midp_graphic_pane_ParamLimits

0x3ef3,	// (0x0000657e) list_single_midp_graphic_pane

0x0fc8,	// (0x00003653) list_single_graphic_2heading_pane_g1_ParamLimits

0x0fc8,	// (0x00003653) list_single_graphic_2heading_pane_g1

0xf4b7,	// (0x00011b42) list_single_graphic_2heading_pane_g4_ParamLimits

0xf4b7,	// (0x00011b42) list_single_graphic_2heading_pane_g4

0x0fd4,	// (0x0000365f) list_single_graphic_2heading_pane_g5_ParamLimits

0x0fd4,	// (0x0000365f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00011e36) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00011e36) list_single_graphic_2heading_pane_g

0x0fe0,	// (0x0000366b) list_single_graphic_2heading_pane_t1_ParamLimits

0x0fe0,	// (0x0000366b) list_single_graphic_2heading_pane_t1

0x0ff4,	// (0x0000367f) list_single_graphic_2heading_pane_t2_ParamLimits

0x0ff4,	// (0x0000367f) list_single_graphic_2heading_pane_t2

0x1010,	// (0x0000369b) list_single_graphic_2heading_pane_t3_ParamLimits

0x1010,	// (0x0000369b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x00011e3d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x00011e3d) list_single_graphic_2heading_pane_t

0x1028,	// (0x000036b3) bg_popup_sub_pane_cp2

0x1052,	// (0x000036dd) grid_toobar_pane

0x108e,	// (0x00003719) cell_toolbar_pane_ParamLimits

0x108e,	// (0x00003719) cell_toolbar_pane

0x10d4,	// (0x0000375f) cell_toolbar_pane_g1_ParamLimits

0x10d4,	// (0x0000375f) cell_toolbar_pane_g1

0x10e8,	// (0x00003773) cell_toolbar_pane_g2_ParamLimits

0x10e8,	// (0x00003773) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x00011e44) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x00011e44) cell_toolbar_pane_g

0x110a,	// (0x00003795) grid_highlight_pane_cp2_ParamLimits

0x110a,	// (0x00003795) grid_highlight_pane_cp2

0x1124,	// (0x000037af) toolbar_button_pane

0x1130,	// (0x000037bb) toolbar_button_pane_g1

0x1138,	// (0x000037c3) toolbar_button_pane_g2

0x1140,	// (0x000037cb) toolbar_button_pane_g3

0x1148,	// (0x000037d3) toolbar_button_pane_g4

0x1150,	// (0x000037db) toolbar_button_pane_g5

0x1158,	// (0x000037e3) toolbar_button_pane_g6

0x1160,	// (0x000037eb) toolbar_button_pane_g7

0x1168,	// (0x000037f3) toolbar_button_pane_g8

0x1170,	// (0x000037fb) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x00011e49) toolbar_button_pane_g

0x1180,	// (0x0000380b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1180,	// (0x0000380b) list_single_2graphic_pane_g1_cp3

0xb2fd,	// (0x0000d988) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb2fd,	// (0x0000d988) list_single_2graphic_pane_g2_cp3

0xf3ac,	// (0x00011a37) list_single_2graphic_pane_g3_cp3

0x119d,	// (0x00003828) list_single_2graphic_pane_g4_cp3_ParamLimits

0x119d,	// (0x00003828) list_single_2graphic_pane_g4_cp3

0x11a9,	// (0x00003834) list_single_2graphic_pane_t1_cp3_ParamLimits

0x11a9,	// (0x00003834) list_single_2graphic_pane_t1_cp3

0xf3a0,	// (0x00011a2b) list_single_midp_graphic_pane_g2_ParamLimits

0xf3a0,	// (0x00011a2b) list_single_midp_graphic_pane_g2

0x04c7,	// (0x00002b52) aid_zoom_text_primary

0x04cf,	// (0x00002b5a) aid_zoom_text_secondary

0xa5ac,	// (0x0000cc37) status_small_pane_g7_ParamLimits

0xa5ac,	// (0x0000cc37) status_small_pane_g7

0xa5cf,	// (0x0000cc5a) status_small_pane_t1_ParamLimits

0x97a0,	// (0x0000be2b) title_pane_g2

0x0003,

0xf54e,	// (0x00011bd9) title_pane_g

0x9a2c,	// (0x0000c0b7) aid_size_cell_colour_1_pane_ParamLimits

0x9a2c,	// (0x0000c0b7) aid_size_cell_colour_1_pane

0x9a40,	// (0x0000c0cb) aid_size_cell_colour_2_pane_ParamLimits

0x9a40,	// (0x0000c0cb) aid_size_cell_colour_2_pane

0x9a54,	// (0x0000c0df) aid_size_cell_colour_3_pane_ParamLimits

0x9a54,	// (0x0000c0df) aid_size_cell_colour_3_pane

0x9a68,	// (0x0000c0f3) aid_size_cell_colour_4_pane_ParamLimits

0x9a68,	// (0x0000c0f3) aid_size_cell_colour_4_pane

0xeb22,	// (0x000111ad) title_pane_stacon_g1_ParamLimits

0xeb22,	// (0x000111ad) title_pane_stacon_g1

0x198c,	// (0x00004017) popup_note_wait_window_g3_ParamLimits

0x198c,	// (0x00004017) popup_note_wait_window_g3

0x1a03,	// (0x0000408e) popup_note_wait_window_t5_ParamLimits

0x1a03,	// (0x0000408e) popup_note_wait_window_t5

0xdf44,	// (0x000105cf) main_feb_china_hwr_fs_writing_pane

0xa821,	// (0x0000ceac) popup_feb_china_hwr_fs_window_ParamLimits

0xa821,	// (0x0000ceac) popup_feb_china_hwr_fs_window

0xb30e,	// (0x0000d999) aid_size_cell_hwr_fs_ParamLimits

0xb30e,	// (0x0000d999) aid_size_cell_hwr_fs

0x12cd,	// (0x00003958) bg_popup_sub_pane_cp3_ParamLimits

0x12cd,	// (0x00003958) bg_popup_sub_pane_cp3

0xb323,	// (0x0000d9ae) grid_hwr_fs_pane_ParamLimits

0xb323,	// (0x0000d9ae) grid_hwr_fs_pane

0x12f1,	// (0x0000397c) linegrid_hwr_fs_pane_ParamLimits

0x12f1,	// (0x0000397c) linegrid_hwr_fs_pane

0xb33b,	// (0x0000d9c6) cell_hwr_fs_pane_ParamLimits

0xb33b,	// (0x0000d9c6) cell_hwr_fs_pane

0x1325,	// (0x000039b0) linegrid_hwr_fs_pane_g1_ParamLimits

0x1325,	// (0x000039b0) linegrid_hwr_fs_pane_g1

0xb361,	// (0x0000d9ec) linegrid_hwr_fs_pane_g2_ParamLimits

0xb361,	// (0x0000d9ec) linegrid_hwr_fs_pane_g2

0x1343,	// (0x000039ce) linegrid_hwr_fs_pane_g3_ParamLimits

0x1343,	// (0x000039ce) linegrid_hwr_fs_pane_g3

0x134f,	// (0x000039da) linegrid_hwr_fs_pane_g4_ParamLimits

0x134f,	// (0x000039da) linegrid_hwr_fs_pane_g4

0x136d,	// (0x000039f8) linegrid_hwr_fs_pane_g5_ParamLimits

0x136d,	// (0x000039f8) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e4,	// (0x00011e6f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e4,	// (0x00011e6f) linegrid_hwr_fs_pane_g

0x1383,	// (0x00003a0e) cell_hwr_fs_pane_g1_ParamLimits

0x1383,	// (0x00003a0e) cell_hwr_fs_pane_g1

0x0eff,	// (0x0000358a) cell_hwr_fs_pane_g2_ParamLimits

0x0eff,	// (0x0000358a) cell_hwr_fs_pane_g2

0xb373,	// (0x0000d9fe) cell_hwr_fs_pane_g3_ParamLimits

0xb373,	// (0x0000d9fe) cell_hwr_fs_pane_g3

0xb380,	// (0x0000da0b) cell_hwr_fs_pane_g4_ParamLimits

0xb380,	// (0x0000da0b) cell_hwr_fs_pane_g4

0x0003,

0xf7ef,	// (0x00011e7a) cell_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x00011e7a) cell_hwr_fs_pane_g

0xb38d,	// (0x0000da18) cell_hwr_fs_pane_t1

0xdf44,	// (0x000105cf) grid_highlight_pane_cp6

0xdf44,	// (0x000105cf) main_idle_act2_pane

0xe910,	// (0x00010f9b) aid_inside_area_popup_secondary

0xb622,	// (0x0000dcad) aid_inside_area_window_primary_ParamLimits

0xb622,	// (0x0000dcad) aid_inside_area_window_primary

0x2fcd,	// (0x00005658) ai2_news_ticker_pane

0x2fd5,	// (0x00005660) aid_size_cell_ai1_link_ParamLimits

0x2fd5,	// (0x00005660) aid_size_cell_ai1_link

0x2fef,	// (0x0000567a) popup_ai2_data_window_ParamLimits

0x2fef,	// (0x0000567a) popup_ai2_data_window

0x300d,	// (0x00005698) popup_ai2_link_window_ParamLimits

0x300d,	// (0x00005698) popup_ai2_link_window

0x12cd,	// (0x00003958) bg_popup_sub_pane_cp4_ParamLimits

0x12cd,	// (0x00003958) bg_popup_sub_pane_cp4

0x3023,	// (0x000056ae) grid_ai2_link_pane_ParamLimits

0x3023,	// (0x000056ae) grid_ai2_link_pane

0x303a,	// (0x000056c5) popup_ai2_link_window_g1_ParamLimits

0x303a,	// (0x000056c5) popup_ai2_link_window_g1

0x3046,	// (0x000056d1) popup_ai2_link_window_g2_ParamLimits

0x3046,	// (0x000056d1) popup_ai2_link_window_g2

0x0001,

0xf9c2,	// (0x0001204d) popup_ai2_link_window_g_ParamLimits

0xf9c2,	// (0x0001204d) popup_ai2_link_window_g

0x3057,	// (0x000056e2) ai2_mp_button_pane

0x305f,	// (0x000056ea) ai2_mp_volume_pane

0x155b,	// (0x00003be6) bg_popup_sub_pane_cp5_ParamLimits

0x155b,	// (0x00003be6) bg_popup_sub_pane_cp5

0x3067,	// (0x000056f2) heading_ai2_gene_pane_ParamLimits

0x3067,	// (0x000056f2) heading_ai2_gene_pane

0x3073,	// (0x000056fe) list_ai2_gene_pane_ParamLimits

0x3073,	// (0x000056fe) list_ai2_gene_pane

0x30bb,	// (0x00005746) cell_ai2_link_pane_ParamLimits

0x30bb,	// (0x00005746) cell_ai2_link_pane

0x30d1,	// (0x0000575c) cell_ai2_link_pane_g1

0xdf44,	// (0x000105cf) grid_highlight_pane_cp7

0x31a4,	// (0x0000582f) ai2_mp_volume_pane_g1

0x31ac,	// (0x00005837) ai2_mp_volume_pane_g2

0x3119,	// (0x000057a4) list_ai2_gene_pane_t1

0x31b4,	// (0x0000583f) ai2_mp_volume_pane_g3

0x0002,

0xf9db,	// (0x00012066) ai2_mp_volume_pane_g

0x31bc,	// (0x00005847) volume_small_pane_cp3

0x31c5,	// (0x00005850) aid_size_cell_ai2_button

0x31cd,	// (0x00005858) grid_ai2_button_pane

0x31d6,	// (0x00005861) cell_ai2_button_pane_ParamLimits

0x31d6,	// (0x00005861) cell_ai2_button_pane

0xddcb,	// (0x00010456) cell_ai2_button_pane_g1

0xdf44,	// (0x000105cf) grid_highlight_pane_cp8

0x3164,	// (0x000057ef) ai2_gene_pane_t1_ParamLimits

0x3164,	// (0x000057ef) ai2_gene_pane_t1

0xa78d,	// (0x0000ce18) aid_height_parent_landscape

0xb83a,	// (0x0000dec5) aid_height_set_list

0x294f,	// (0x00004fda) aid_size_parent

0x2d36,	// (0x000053c1) aid_size_cell_graphic_pane_ParamLimits

0x3083,	// (0x0000570e) popup_ai2_data_window_g1_ParamLimits

0x3083,	// (0x0000570e) popup_ai2_data_window_g1

0x308f,	// (0x0000571a) ai2_news_ticker_pane_g1

0x3097,	// (0x00005722) ai2_news_ticker_pane_g2

0x0001,

0xf9c7,	// (0x00012052) ai2_news_ticker_pane_g

0x309f,	// (0x0000572a) ai2_news_ticker_pane_t1

0x30ad,	// (0x00005738) ai2_news_ticker_pane_t2

0x0001,

0xf9cc,	// (0x00012057) ai2_news_ticker_pane_t

0x30da,	// (0x00005765) heading_ai2_gene_pane_g1

0x30e2,	// (0x0000576d) heading_ai2_gene_pane_t1_ParamLimits

0x30e2,	// (0x0000576d) heading_ai2_gene_pane_t1

0x30f7,	// (0x00005782) list_highlight_pane_cp6

0x30ff,	// (0x0000578a) ai2_gene_pane_ParamLimits

0x30ff,	// (0x0000578a) ai2_gene_pane

0x3127,	// (0x000057b2) list_ai2_gene_pane_t2

0x0001,

0xf9d1,	// (0x0001205c) list_ai2_gene_pane_t

0x3135,	// (0x000057c0) list_highlight_pane_cp8_ParamLimits

0x3135,	// (0x000057c0) list_highlight_pane_cp8

0x3146,	// (0x000057d1) ai2_gene_pane_g1_ParamLimits

0x3146,	// (0x000057d1) ai2_gene_pane_g1

0x3158,	// (0x000057e3) ai2_gene_pane_g2_ParamLimits

0x3158,	// (0x000057e3) ai2_gene_pane_g2

0x0001,

0xf9d6,	// (0x00012061) ai2_gene_pane_g_ParamLimits

0xf9d6,	// (0x00012061) ai2_gene_pane_g

0xe658,	// (0x00010ce3) scroll_pane_cp12

0xa74c,	// (0x0000cdd7) control_pane_t3_ParamLimits

0xa74c,	// (0x0000cdd7) control_pane_t3

0xa5c0,	// (0x0000cc4b) status_small_pane_g8_ParamLimits

0xa5c0,	// (0x0000cc4b) status_small_pane_g8

0xa8c3,	// (0x0000cf4e) popup_find_window_ParamLimits

0xab74,	// (0x0000d1ff) popup_note_image_window_ParamLimits

0x0fc8,	// (0x00003653) list_double2_graphic_pane_vc_g1_ParamLimits

0x0fc8,	// (0x00003653) list_double2_graphic_pane_vc_g1

0xf4b7,	// (0x00011b42) list_double2_graphic_pane_vc_g2_ParamLimits

0xf4b7,	// (0x00011b42) list_double2_graphic_pane_vc_g2

0x0fd4,	// (0x0000365f) list_double2_graphic_pane_vc_g3_ParamLimits

0x0fd4,	// (0x0000365f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7ab,	// (0x00011e36) list_double2_graphic_pane_vc_g_ParamLimits

0xf7ab,	// (0x00011e36) list_double2_graphic_pane_vc_g

0x10be,	// (0x00003749) list_double2_graphic_pane_vc_t1_ParamLimits

0x10be,	// (0x00003749) list_double2_graphic_pane_vc_t1

0xf4b7,	// (0x00011b42) list_single_heading_pane_vc_g1_ParamLimits

0xf4b7,	// (0x00011b42) list_single_heading_pane_vc_g1

0x0fd4,	// (0x0000365f) list_single_heading_pane_vc_g2_ParamLimits

0x0fd4,	// (0x0000365f) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011c53) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011c53) list_single_heading_pane_vc_g

0x11c4,	// (0x0000384f) list_single_heading_pane_vc_t1_ParamLimits

0x11c4,	// (0x0000384f) list_single_heading_pane_vc_t1

0x11dc,	// (0x00003867) list_single_heading_pane_vc_t2_ParamLimits

0x11dc,	// (0x00003867) list_single_heading_pane_vc_t2

0x0001,

0xf7d3,	// (0x00011e5e) list_single_heading_pane_vc_t_ParamLimits

0xf7d3,	// (0x00011e5e) list_single_heading_pane_vc_t

0x1204,	// (0x0000388f) list_setting_number_pane_vc_g1_ParamLimits

0x1204,	// (0x0000388f) list_setting_number_pane_vc_g1

0x1210,	// (0x0000389b) list_setting_number_pane_vc_g2_ParamLimits

0x1210,	// (0x0000389b) list_setting_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x00011e63) list_setting_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x00011e63) list_setting_number_pane_vc_g

0x121c,	// (0x000038a7) list_setting_number_pane_vc_t1_ParamLimits

0x121c,	// (0x000038a7) list_setting_number_pane_vc_t1

0x1230,	// (0x000038bb) list_setting_number_pane_vc_t2_ParamLimits

0x1230,	// (0x000038bb) list_setting_number_pane_vc_t2

0x124c,	// (0x000038d7) list_setting_number_pane_vc_t3_ParamLimits

0x124c,	// (0x000038d7) list_setting_number_pane_vc_t3

0x0002,

0xf7dd,	// (0x00011e68) list_setting_number_pane_vc_t_ParamLimits

0xf7dd,	// (0x00011e68) list_setting_number_pane_vc_t

0x127a,	// (0x00003905) set_value_pane_vc_ParamLimits

0x127a,	// (0x00003905) set_value_pane_vc

0x2b70,	// (0x000051fb) list_double2_graphic_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_double2_graphic_pane_vc

0x2b70,	// (0x000051fb) list_double2_large_graphic_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_double2_large_graphic_pane_vc

0x2b70,	// (0x000051fb) list_double2_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_double2_pane_vc

0x2b70,	// (0x000051fb) list_double_graphic_heading_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_double_graphic_heading_pane_vc

0x2b70,	// (0x000051fb) list_double_graphic_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_double_graphic_pane_vc

0x2b70,	// (0x000051fb) list_double_heading_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_double_heading_pane_vc

0x2b84,	// (0x0000520f) list_double_large_graphic_pane_vc_ParamLimits

0x2b84,	// (0x0000520f) list_double_large_graphic_pane_vc

0x2b70,	// (0x000051fb) list_double_number_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_double_number_pane_vc

0x2b70,	// (0x000051fb) list_double_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_double_pane_vc

0x2b70,	// (0x000051fb) list_double_time_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_double_time_pane_vc

0x2b70,	// (0x000051fb) list_setting_number_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_setting_number_pane_vc

0x2b70,	// (0x000051fb) list_setting_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_setting_pane_vc

0x2b70,	// (0x000051fb) list_single_graphic_heading_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_single_graphic_heading_pane_vc

0x2b70,	// (0x000051fb) list_single_heading_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_single_heading_pane_vc

0x2b70,	// (0x000051fb) list_single_number_heading_pane_vc_ParamLimits

0x2b70,	// (0x000051fb) list_single_number_heading_pane_vc

0x0fc8,	// (0x00003653) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0fc8,	// (0x00003653) list_double_graphic_heading_pane_vc_g1

0x3209,	// (0x00005894) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3209,	// (0x00005894) list_double_graphic_heading_pane_vc_g2

0x3215,	// (0x000058a0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3215,	// (0x000058a0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e2,	// (0x0001206d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e2,	// (0x0001206d) list_double_graphic_heading_pane_vc_g

0x3221,	// (0x000058ac) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3221,	// (0x000058ac) list_double_graphic_heading_pane_vc_t1

0x3237,	// (0x000058c2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3237,	// (0x000058c2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x00012074) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x00012074) list_double_graphic_heading_pane_vc_t

0x1204,	// (0x0000388f) list_setting_pane_vc_g1_ParamLimits

0x1204,	// (0x0000388f) list_setting_pane_vc_g1

0x1210,	// (0x0000389b) list_setting_pane_vc_g2_ParamLimits

0x1210,	// (0x0000389b) list_setting_pane_vc_g2

0x0001,

0xf7d8,	// (0x00011e63) list_setting_pane_vc_g_ParamLimits

0xf7d8,	// (0x00011e63) list_setting_pane_vc_g

0x347d,	// (0x00005b08) list_setting_pane_vc_t1_ParamLimits

0x347d,	// (0x00005b08) list_setting_pane_vc_t1

0x3499,	// (0x00005b24) list_setting_pane_vc_t2_ParamLimits

0x3499,	// (0x00005b24) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x000120b7) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x000120b7) list_setting_pane_vc_t

0x127a,	// (0x00003905) set_value_pane_cp_vc_ParamLimits

0x127a,	// (0x00003905) set_value_pane_cp_vc

0xf4b7,	// (0x00011b42) list_single_number_heading_pane_vc_g1_ParamLimits

0xf4b7,	// (0x00011b42) list_single_number_heading_pane_vc_g1

0x0fd4,	// (0x0000365f) list_single_number_heading_pane_vc_g2_ParamLimits

0x0fd4,	// (0x0000365f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011c53) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011c53) list_single_number_heading_pane_vc_g

0x11c4,	// (0x0000384f) list_single_number_heading_pane_vc_t1_ParamLimits

0x11c4,	// (0x0000384f) list_single_number_heading_pane_vc_t1

0x34b5,	// (0x00005b40) list_single_number_heading_pane_vc_t2_ParamLimits

0x34b5,	// (0x00005b40) list_single_number_heading_pane_vc_t2

0x34c7,	// (0x00005b52) list_single_number_heading_pane_vc_t3_ParamLimits

0x34c7,	// (0x00005b52) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x000120bc) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x000120bc) list_single_number_heading_pane_vc_t

0x0fc8,	// (0x00003653) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0fc8,	// (0x00003653) list_single_graphic_heading_pane_vc_g1

0xf4b7,	// (0x00011b42) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf4b7,	// (0x00011b42) list_single_graphic_heading_pane_vc_g4

0x0fd4,	// (0x0000365f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0fd4,	// (0x0000365f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7ab,	// (0x00011e36) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x00011e36) list_single_graphic_heading_pane_vc_g

0x11c4,	// (0x0000384f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x11c4,	// (0x0000384f) list_single_graphic_heading_pane_vc_t1

0x34d9,	// (0x00005b64) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x34d9,	// (0x00005b64) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x000120c3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x000120c3) list_single_graphic_heading_pane_vc_t

0xf4b7,	// (0x00011b42) list_double2_pane_vc_g1_ParamLimits

0xf4b7,	// (0x00011b42) list_double2_pane_vc_g1

0x0fd4,	// (0x0000365f) list_double2_pane_vc_g2_ParamLimits

0x0fd4,	// (0x0000365f) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011c53) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011c53) list_double2_pane_vc_g

0x34eb,	// (0x00005b76) list_double2_pane_vc_t1_ParamLimits

0x34eb,	// (0x00005b76) list_double2_pane_vc_t1

0x3501,	// (0x00005b8c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3501,	// (0x00005b8c) list_double2_large_graphic_pane_vc_g1

0xf4b7,	// (0x00011b42) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf4b7,	// (0x00011b42) list_double2_large_graphic_pane_vc_g2

0x0fd4,	// (0x0000365f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0fd4,	// (0x0000365f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00011c70) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00011c70) list_double2_large_graphic_pane_vc_g

0x350d,	// (0x00005b98) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x350d,	// (0x00005b98) list_double2_large_graphic_pane_vc_t1

0x3523,	// (0x00005bae) list_double_time_pane_vc_g1_ParamLimits

0x3523,	// (0x00005bae) list_double_time_pane_vc_g1

0x352f,	// (0x00005bba) list_double_time_pane_vc_g2_ParamLimits

0x352f,	// (0x00005bba) list_double_time_pane_vc_g2

0x0001,

0xfa3d,	// (0x000120c8) list_double_time_pane_vc_g_ParamLimits

0xfa3d,	// (0x000120c8) list_double_time_pane_vc_g

0x353b,	// (0x00005bc6) list_double_time_pane_vc_t1_ParamLimits

0x353b,	// (0x00005bc6) list_double_time_pane_vc_t1

0x356b,	// (0x00005bf6) list_double_time_pane_vc_t2_ParamLimits

0x356b,	// (0x00005bf6) list_double_time_pane_vc_t2

0x3594,	// (0x00005c1f) list_double_time_pane_vc_t3_ParamLimits

0x3594,	// (0x00005c1f) list_double_time_pane_vc_t3

0x35a6,	// (0x00005c31) list_double_time_pane_vc_t4_ParamLimits

0x35a6,	// (0x00005c31) list_double_time_pane_vc_t4

0x0003,

0xfa42,	// (0x000120cd) list_double_time_pane_vc_t_ParamLimits

0xfa42,	// (0x000120cd) list_double_time_pane_vc_t

0xf4b7,	// (0x00011b42) list_double_pane_vc_g1_ParamLimits

0xf4b7,	// (0x00011b42) list_double_pane_vc_g1

0x0fd4,	// (0x0000365f) list_double_pane_vc_g2_ParamLimits

0x0fd4,	// (0x0000365f) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011c53) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011c53) list_double_pane_vc_g

0x35cb,	// (0x00005c56) list_double_pane_vc_t1_ParamLimits

0x35cb,	// (0x00005c56) list_double_pane_vc_t1

0x35df,	// (0x00005c6a) list_double_pane_vc_t2_ParamLimits

0x35df,	// (0x00005c6a) list_double_pane_vc_t2

0x0001,

0xfa4b,	// (0x000120d6) list_double_pane_vc_t_ParamLimits

0xfa4b,	// (0x000120d6) list_double_pane_vc_t

0xf4b7,	// (0x00011b42) list_double_number_pane_vc_g1_ParamLimits

0xf4b7,	// (0x00011b42) list_double_number_pane_vc_g1

0x0fd4,	// (0x0000365f) list_double_number_pane_vc_g2_ParamLimits

0x0fd4,	// (0x0000365f) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011c53) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011c53) list_double_number_pane_vc_g

0x35f5,	// (0x00005c80) list_double_number_pane_vc_t1_ParamLimits

0x35f5,	// (0x00005c80) list_double_number_pane_vc_t1

0x3609,	// (0x00005c94) list_double_number_pane_vc_t2_ParamLimits

0x3609,	// (0x00005c94) list_double_number_pane_vc_t2

0x361d,	// (0x00005ca8) list_double_number_pane_vc_t3_ParamLimits

0x361d,	// (0x00005ca8) list_double_number_pane_vc_t3

0x0002,

0xfa50,	// (0x000120db) list_double_number_pane_vc_t_ParamLimits

0xfa50,	// (0x000120db) list_double_number_pane_vc_t

0x3633,	// (0x00005cbe) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3633,	// (0x00005cbe) list_double_large_graphic_pane_vc_g1

0x365b,	// (0x00005ce6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x365b,	// (0x00005ce6) list_double_large_graphic_pane_vc_g2

0x366f,	// (0x00005cfa) list_double_large_graphic_pane_vc_g3_ParamLimits

0x366f,	// (0x00005cfa) list_double_large_graphic_pane_vc_g3

0x367e,	// (0x00005d09) list_double_large_graphic_pane_vc_g4_ParamLimits

0x367e,	// (0x00005d09) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa57,	// (0x000120e2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa57,	// (0x000120e2) list_double_large_graphic_pane_vc_g

0x368e,	// (0x00005d19) list_double_large_graphic_pane_vc_t1_ParamLimits

0x368e,	// (0x00005d19) list_double_large_graphic_pane_vc_t1

0x36b0,	// (0x00005d3b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x36b0,	// (0x00005d3b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa60,	// (0x000120eb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa60,	// (0x000120eb) list_double_large_graphic_pane_vc_t

0x3209,	// (0x00005894) list_double_heading_pane_vc_g1_ParamLimits

0x3209,	// (0x00005894) list_double_heading_pane_vc_g1

0x3215,	// (0x000058a0) list_double_heading_pane_vc_g2_ParamLimits

0x3215,	// (0x000058a0) list_double_heading_pane_vc_g2

0x0001,

0xfa65,	// (0x000120f0) list_double_heading_pane_vc_g_ParamLimits

0xfa65,	// (0x000120f0) list_double_heading_pane_vc_g

0x36d0,	// (0x00005d5b) list_double_heading_pane_vc_t1_ParamLimits

0x36d0,	// (0x00005d5b) list_double_heading_pane_vc_t1

0x11c4,	// (0x0000384f) list_double_heading_pane_vc_t2_ParamLimits

0x11c4,	// (0x0000384f) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x000120f5) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x000120f5) list_double_heading_pane_vc_t

0x36e2,	// (0x00005d6d) list_double_graphic_pane_vc_g1_ParamLimits

0x36e2,	// (0x00005d6d) list_double_graphic_pane_vc_g1

0x36ee,	// (0x00005d79) list_double_graphic_pane_vc_g2_ParamLimits

0x36ee,	// (0x00005d79) list_double_graphic_pane_vc_g2

0xf4b7,	// (0x00011b42) list_double_graphic_pane_vc_g3_ParamLimits

0xf4b7,	// (0x00011b42) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x000120fa) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x000120fa) list_double_graphic_pane_vc_g

0x370b,	// (0x00005d96) list_double_graphic_pane_vc_t1_ParamLimits

0x370b,	// (0x00005d96) list_double_graphic_pane_vc_t1

0x3735,	// (0x00005dc0) list_double_graphic_pane_vc_t2_ParamLimits

0x3735,	// (0x00005dc0) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00012103) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00012103) list_double_graphic_pane_vc_t

0xdded,	// (0x00010478) aid_size_cell_fastswap

0x9579,	// (0x0000bc04) aid_size_cell_touch_ParamLimits

0x9579,	// (0x0000bc04) aid_size_cell_touch

0xdf74,	// (0x000105ff) popup_fast_swap_wide_window_ParamLimits

0xdf74,	// (0x000105ff) popup_fast_swap_wide_window

0x9737,	// (0x0000bdc2) touch_pane_ParamLimits

0x9737,	// (0x0000bdc2) touch_pane

0xe6f5,	// (0x00010d80) button_value_adjust_pane_cp2

0xe6fd,	// (0x00010d88) button_value_adjust_pane_cp4

0xe705,	// (0x00010d90) form_field_data_pane_cp2

0x9f63,	// (0x0000c5ee) form_field_data_wide_pane_cp2

0xed01,	// (0x0001138c) bg_scroll_pane_ParamLimits

0xed20,	// (0x000113ab) scroll_handle_pane_ParamLimits

0xed34,	// (0x000113bf) scroll_sc2_down_pane_ParamLimits

0xed34,	// (0x000113bf) scroll_sc2_down_pane

0xed5b,	// (0x000113e6) scroll_sc2_up_pane_ParamLimits

0xed5b,	// (0x000113e6) scroll_sc2_up_pane

0xbc34,	// (0x0000e2bf) grid_wheel_folder_pane_g1_ParamLimits

0xbc34,	// (0x0000e2bf) grid_wheel_folder_pane_g1

0xf25e,	// (0x000118e9) clock_nsta_pane_cp2_ParamLimits

0xf25e,	// (0x000118e9) clock_nsta_pane_cp2

0x0541,	// (0x00002bcc) listscroll_midp_pane_ParamLimits

0xa4ab,	// (0x0000cb36) midp_canvas_pane

0x04ad,	// (0x00002b38) nsta_clock_indic_pane

0x050b,	// (0x00002b96) listscroll_form_pane_vc

0x052f,	// (0x00002bba) listscroll_set_pane_vc_ParamLimits

0x052f,	// (0x00002bba) listscroll_set_pane_vc

0xaff0,	// (0x0000d67b) clock_nsta_pane

0xb01a,	// (0x0000d6a5) indicator_nsta_pane

0x1028,	// (0x000036b3) bg_popup_sub_pane_cp2_ParamLimits

0x103c,	// (0x000036c7) find_pane_cp2_ParamLimits

0x103c,	// (0x000036c7) find_pane_cp2

0x1052,	// (0x000036dd) grid_toobar_pane_ParamLimits

0x128c,	// (0x00003917) list_form_gen_pane_vc_ParamLimits

0x128c,	// (0x00003917) list_form_gen_pane_vc

0x12a2,	// (0x0000392d) scroll_pane_cp8_vc_ParamLimits

0x12a2,	// (0x0000392d) scroll_pane_cp8_vc

0x13c1,	// (0x00003a4c) data_form_wide_pane_vc_ParamLimits

0x13c1,	// (0x00003a4c) data_form_wide_pane_vc

0x13cd,	// (0x00003a58) form_field_data_wide_pane_vc_g1

0x13d5,	// (0x00003a60) form_field_data_wide_pane_vc_t1_ParamLimits

0x13d5,	// (0x00003a60) form_field_data_wide_pane_vc_t1

0xe760,	// (0x00010deb) input_focus_pane_cp6_vc_ParamLimits

0xe760,	// (0x00010deb) input_focus_pane_cp6_vc

0xb429,	// (0x0000dab4) list_midp_pane_ParamLimits

0x2da2,	// (0x0000542d) scroll_pane_cp16_ParamLimits

0x2da2,	// (0x0000542d) scroll_pane_cp16

0x1760,	// (0x00003deb) button_value_adjust_pane_ParamLimits

0x1760,	// (0x00003deb) button_value_adjust_pane

0xb84b,	// (0x0000ded6) button_value_adjust_pane_cp6_ParamLimits

0xb84b,	// (0x0000ded6) button_value_adjust_pane_cp6

0xb98d,	// (0x0000e018) settings_code_pane_cp_ParamLimits

0xb98d,	// (0x0000e018) settings_code_pane_cp

0xddcb,	// (0x00010456) cell_touch_pane_g1

0xddcb,	// (0x00010456) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00011d89) cell_touch_pane_g

0xbb0d,	// (0x0000e198) cell_touch_pane_cp_ParamLimits

0xbb0d,	// (0x0000e198) cell_touch_pane_cp

0xbb29,	// (0x0000e1b4) cell_touch_pane_ParamLimits

0xbb29,	// (0x0000e1b4) cell_touch_pane

0xddcb,	// (0x00010456) scroll_sc2_down_pane_g1

0xddcb,	// (0x00010456) scroll_sc2_up_pane_g1

0xdf44,	// (0x000105cf) bg_set_opt_pane_cp4_vc

0x3255,	// (0x000058e0) list_set_graphic_pane_vc_g1_ParamLimits

0x3255,	// (0x000058e0) list_set_graphic_pane_vc_g1

0xe9bf,	// (0x0001104a) list_set_graphic_pane_vc_g2_ParamLimits

0xe9bf,	// (0x0001104a) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x00012079) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x00012079) list_set_graphic_pane_vc_g

0x3261,	// (0x000058ec) text_primary_small_cp13_vc_ParamLimits

0x3261,	// (0x000058ec) text_primary_small_cp13_vc

0x3279,	// (0x00005904) list_set_graphic_pane_vc_ParamLimits

0x3279,	// (0x00005904) list_set_graphic_pane_vc

0xdf44,	// (0x000105cf) input_focus_pane_cp2_vc

0xddcb,	// (0x00010456) setting_code_pane_vc_g1

0xe0aa,	// (0x00010735) setting_code_pane_vc_t1

0x328e,	// (0x00005919) set_text_pane_vc_t1_ParamLimits

0x328e,	// (0x00005919) set_text_pane_vc_t1

0xdf44,	// (0x000105cf) input_focus_pane_cp1_vc

0x32ac,	// (0x00005937) list_set_text_pane_vc

0xddcb,	// (0x00010456) setting_text_pane_vc_g1

0xdf44,	// (0x000105cf) bg_set_opt_pane_cp2_vc

0xe079,	// (0x00010704) setting_slider_graphic_pane_vc_g1

0x32b6,	// (0x00005941) setting_slider_graphic_pane_vc_t1

0x32c8,	// (0x00005953) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x0001207e) setting_slider_graphic_pane_vc_t

0x32da,	// (0x00005965) slider_set_pane_cp_vc

0x32e4,	// (0x0000596f) slider_set_pane_vc_g1

0x32ed,	// (0x00005978) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x00012083) slider_set_pane_vc_g

0xe829,	// (0x00010eb4) set_opt_bg_pane_g1_copy1

0xe831,	// (0x00010ebc) set_opt_bg_pane_g2_copy1

0x3319,	// (0x000059a4) set_opt_bg_pane_g3_copy1

0xe841,	// (0x00010ecc) set_opt_bg_pane_g4_copy1

0xe849,	// (0x00010ed4) set_opt_bg_pane_g5_copy1

0xe851,	// (0x00010edc) set_opt_bg_pane_g6_copy1

0x3323,	// (0x000059ae) set_opt_bg_pane_g7_copy1

0x332d,	// (0x000059b8) set_opt_bg_pane_g8_copy1

0x3337,	// (0x000059c2) set_opt_bg_pane_g9_copy1

0xdf44,	// (0x000105cf) bg_set_opt_pane_cp_vc

0x3341,	// (0x000059cc) setting_slider_pane_vc_t1

0x3350,	// (0x000059db) setting_slider_pane_vc_t2

0x3362,	// (0x000059ed) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x00012092) setting_slider_pane_vc_t

0x3374,	// (0x000059ff) slider_set_pane_vc

0x1fa5,	// (0x00004630) volume_set_pane_vc_g1

0x1fae,	// (0x00004639) volume_set_pane_vc_g2

0x1fb7,	// (0x00004642) volume_set_pane_vc_g3

0x1fc0,	// (0x0000464b) volume_set_pane_vc_g4

0x1fc9,	// (0x00004654) volume_set_pane_vc_g5

0x1fd2,	// (0x0000465d) volume_set_pane_vc_g6

0x1fdb,	// (0x00004666) volume_set_pane_vc_g7

0x1fe4,	// (0x0000466f) volume_set_pane_vc_g8

0x1fed,	// (0x00004678) volume_set_pane_vc_g9

0x1ff6,	// (0x00004681) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x00012099) volume_set_pane_vc_g

0x337e,	// (0x00005a09) volume_set_pane_vc

0x3388,	// (0x00005a13) button_value_adjust_pane_cp1_vc

0x3392,	// (0x00005a1d) list_highlight_pane_cp2_vc

0x339b,	// (0x00005a26) list_set_pane_vc_ParamLimits

0x339b,	// (0x00005a26) list_set_pane_vc

0x340b,	// (0x00005a96) main_pane_set_vc_t1_ParamLimits

0x340b,	// (0x00005a96) main_pane_set_vc_t1

0x3420,	// (0x00005aab) main_pane_set_vc_t2_ParamLimits

0x3420,	// (0x00005aab) main_pane_set_vc_t2

0x3432,	// (0x00005abd) main_pane_set_vc_t3_ParamLimits

0x3432,	// (0x00005abd) main_pane_set_vc_t3

0x3446,	// (0x00005ad1) main_pane_set_vc_t4_ParamLimits

0x3446,	// (0x00005ad1) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x000120ae) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x000120ae) main_pane_set_vc_t

0x345a,	// (0x00005ae5) setting_code_pane_vc_ParamLimits

0x345a,	// (0x00005ae5) setting_code_pane_vc

0x346b,	// (0x00005af6) setting_slider_graphic_pane_vc

0x346b,	// (0x00005af6) setting_slider_pane_vc

0x346b,	// (0x00005af6) setting_text_pane_vc

0x346b,	// (0x00005af6) setting_volume_pane_vc

0x3475,	// (0x00005b00) scroll_pane_cp121_vc

0xe6e3,	// (0x00010d6e) set_content_pane_vc

0x3753,	// (0x00005dde) button_value_adjust_pane_g1

0x375c,	// (0x00005de7) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x00012108) button_value_adjust_pane_g

0x3765,	// (0x00005df0) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3765,	// (0x00005df0) form_field_slider_wide_pane_vc_t1

0x3777,	// (0x00005e02) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3777,	// (0x00005e02) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0001210d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0001210d) form_field_slider_wide_pane_vc_t

0xdff2,	// (0x0001067d) input_focus_pane_cp10_vc_ParamLimits

0xdff2,	// (0x0001067d) input_focus_pane_cp10_vc

0x37a3,	// (0x00005e2e) slider_cont_pane_cp1_vc_ParamLimits

0x37a3,	// (0x00005e2e) slider_cont_pane_cp1_vc

0x37b5,	// (0x00005e40) slider_form_pane_g1_cp2

0x32ed,	// (0x00005978) slider_form_pane_g2_cp2

0x37e2,	// (0x00005e6d) form_field_slider_pane_vc_t3

0x37f0,	// (0x00005e7b) form_field_slider_pane_vc_t4

0x37fe,	// (0x00005e89) slider_form_pane_vc_ParamLimits

0x37fe,	// (0x00005e89) slider_form_pane_vc

0x380b,	// (0x00005e96) form_field_slider_pane_vc_t1_ParamLimits

0x380b,	// (0x00005e96) form_field_slider_pane_vc_t1

0x3777,	// (0x00005e02) form_field_slider_pane_vc_t2_ParamLimits

0x3777,	// (0x00005e02) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0001211f) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0001211f) form_field_slider_pane_vc_t

0xdff2,	// (0x0001067d) input_focus_pane_cp9_vc_ParamLimits

0xdff2,	// (0x0001067d) input_focus_pane_cp9_vc

0x3821,	// (0x00005eac) slider_cont_pane_vc_ParamLimits

0x3821,	// (0x00005eac) slider_cont_pane_vc

0x3835,	// (0x00005ec0) list_form_graphic_pane_cp_vc_ParamLimits

0x3835,	// (0x00005ec0) list_form_graphic_pane_cp_vc

0x13cd,	// (0x00003a58) form_field_popup_wide_pane_vc_g1

0x384a,	// (0x00005ed5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x384a,	// (0x00005ed5) form_field_popup_wide_pane_vc_t1

0xe760,	// (0x00010deb) input_focus_pane_cp8_vc_ParamLimits

0xe760,	// (0x00010deb) input_focus_pane_cp8_vc

0x388f,	// (0x00005f1a) list_form_wide_pane_vc_ParamLimits

0x388f,	// (0x00005f1a) list_form_wide_pane_vc

0x389b,	// (0x00005f26) list_form_graphic_pane_vc_g1

0x38a3,	// (0x00005f2e) list_form_graphic_pane_vc_t1_ParamLimits

0x38a3,	// (0x00005f2e) list_form_graphic_pane_vc_t1

0xe00a,	// (0x00010695) list_highlight_pane_cp5_vc_ParamLimits

0xe00a,	// (0x00010695) list_highlight_pane_cp5_vc

0x38bf,	// (0x00005f4a) list_form_graphic_pane_vc_ParamLimits

0x38bf,	// (0x00005f4a) list_form_graphic_pane_vc

0x13cd,	// (0x00003a58) form_field_popup_pane_vc_g1

0x38d5,	// (0x00005f60) form_field_popup_pane_vc_t1_ParamLimits

0x38d5,	// (0x00005f60) form_field_popup_pane_vc_t1

0xe760,	// (0x00010deb) input_focus_pane_cp7_vc_ParamLimits

0xe760,	// (0x00010deb) input_focus_pane_cp7_vc

0x38ec,	// (0x00005f77) list_form_pane_vc_ParamLimits

0x38ec,	// (0x00005f77) list_form_pane_vc

0x38f8,	// (0x00005f83) data_form_pane_vc_t1_ParamLimits

0x38f8,	// (0x00005f83) data_form_pane_vc_t1

0xe829,	// (0x00010eb4) input_focus_pane_vc_g1

0xe831,	// (0x00010ebc) input_focus_pane_vc_g2

0xe839,	// (0x00010ec4) input_focus_pane_vc_g3

0xe841,	// (0x00010ecc) input_focus_pane_vc_g4

0xe849,	// (0x00010ed4) input_focus_pane_vc_g5

0xe851,	// (0x00010edc) input_focus_pane_vc_g6

0xe859,	// (0x00010ee4) input_focus_pane_vc_g7

0xe861,	// (0x00010eec) input_focus_pane_vc_g8

0xe869,	// (0x00010ef4) input_focus_pane_vc_g9

0xddcb,	// (0x00010456) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00011d12) input_focus_pane_vc_g

0x13c1,	// (0x00003a4c) data_form_pane_vc_ParamLimits

0x13c1,	// (0x00003a4c) data_form_pane_vc

0x13cd,	// (0x00003a58) form_field_data_pane_vc_g1

0x3915,	// (0x00005fa0) form_field_data_pane_vc_t1_ParamLimits

0x3915,	// (0x00005fa0) form_field_data_pane_vc_t1

0xe760,	// (0x00010deb) input_focus_pane_vc_ParamLimits

0xe760,	// (0x00010deb) input_focus_pane_vc

0x392f,	// (0x00005fba) button_value_adjust_pane_cp3_vc

0x3937,	// (0x00005fc2) button_value_adjust_pane_cp5_vc

0x393f,	// (0x00005fca) form_field_data_pane_vc_ParamLimits

0x393f,	// (0x00005fca) form_field_data_pane_vc

0x395a,	// (0x00005fe5) form_field_data_pane_vc_cp2

0x3962,	// (0x00005fed) form_field_data_wide_pane_vc_ParamLimits

0x3962,	// (0x00005fed) form_field_data_wide_pane_vc

0x397c,	// (0x00006007) form_field_data_wide_pane_vc_cp2

0x3984,	// (0x0000600f) form_field_popup_pane_vc_ParamLimits

0x3984,	// (0x0000600f) form_field_popup_pane_vc

0x399f,	// (0x0000602a) form_field_popup_wide_pane_vc_ParamLimits

0x399f,	// (0x0000602a) form_field_popup_wide_pane_vc

0x39b9,	// (0x00006044) form_field_slider_pane_vc_ParamLimits

0x39b9,	// (0x00006044) form_field_slider_pane_vc

0x39cc,	// (0x00006057) form_field_slider_wide_pane_vc_ParamLimits

0x39cc,	// (0x00006057) form_field_slider_wide_pane_vc

0xbb47,	// (0x0000e1d2) grid_touch_1_pane_ParamLimits

0xbb47,	// (0x0000e1d2) grid_touch_1_pane

0xbb5b,	// (0x0000e1e6) grid_touch_2_pane_ParamLimits

0xbb5b,	// (0x0000e1e6) grid_touch_2_pane

0x3a9d,	// (0x00006128) touch_pane_g1_ParamLimits

0x3a9d,	// (0x00006128) touch_pane_g1

0x3a05,	// (0x00006090) cell_app_pane_cp_wide_ParamLimits

0x3a05,	// (0x00006090) cell_app_pane_cp_wide

0x3a16,	// (0x000060a1) grid_popup_fast_wide_pane_ParamLimits

0x3a16,	// (0x000060a1) grid_popup_fast_wide_pane

0x3a2a,	// (0x000060b5) scroll_pane_cp19_ParamLimits

0x3a2a,	// (0x000060b5) scroll_pane_cp19

0xdf44,	// (0x000105cf) bg_popup_window_pane_cp20

0x3a3e,	// (0x000060c9) listscroll_popup_fast_wide_pane

0xe9cb,	// (0x00011056) grid_indicator_nsta_pane

0x3a46,	// (0x000060d1) clock_nsta_pane_g1

0x3a4f,	// (0x000060da) clock_nsta_pane_t1

0xbb87,	// (0x0000e212) cell_indicator_nsta_pane_ParamLimits

0xbb87,	// (0x0000e212) cell_indicator_nsta_pane

0x3a9d,	// (0x00006128) cell_indicator_nsta_pane_g1

0xbba0,	// (0x0000e22b) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x00012130) cell_indicator_nsta_pane_g

0x3ac1,	// (0x0000614c) clock_nsta_pane_cp

0x3ac9,	// (0x00006154) indicator_nsta_pane_cp

0x3ad2,	// (0x0000615d) nsta_clock_indic_pane_g1

0xe0e9,	// (0x00010774) grid_indicator_pane

0xee4d,	// (0x000114d8) scroll_pane_cp29

0xf188,	// (0x00011813) indicator_nsta_pane_cp2_ParamLimits

0xf188,	// (0x00011813) indicator_nsta_pane_cp2

0xe00a,	// (0x00010695) main_apps_wheel_pane

0x15e3,	// (0x00003c6e) form_midp_field_text_pane_ParamLimits

0x1732,	// (0x00003dbd) scroll_bar_cp050_ParamLimits

0x3b3b,	// (0x000061c6) cell_indicator_pane_ParamLimits

0x3b3b,	// (0x000061c6) cell_indicator_pane

0x3b53,	// (0x000061de) cell_indicator_pane_g1

0xbbb6,	// (0x0000e241) grid_wheel_folder_pane_ParamLimits

0xbbb6,	// (0x0000e241) grid_wheel_folder_pane

0xbbc4,	// (0x0000e24f) list_wheel_apps_pane_ParamLimits

0xbbc4,	// (0x0000e24f) list_wheel_apps_pane

0xbbd2,	// (0x0000e25d) main_apps_wheel_pane_g1_ParamLimits

0xbbd2,	// (0x0000e25d) main_apps_wheel_pane_g1

0xbbe2,	// (0x0000e26d) main_apps_wheel_pane_g2_ParamLimits

0xbbe2,	// (0x0000e26d) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0001214c) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0001214c) main_apps_wheel_pane_g

0xbbf2,	// (0x0000e27d) main_apps_wheel_pane_t1_ParamLimits

0xbbf2,	// (0x0000e27d) main_apps_wheel_pane_t1

0xbc0a,	// (0x0000e295) list_wheel_apps_pane_g1

0xbc12,	// (0x0000e29d) list_wheel_apps_pane_g2

0xbc1a,	// (0x0000e2a5) list_wheel_apps_pane_g3

0xbc22,	// (0x0000e2ad) list_wheel_apps_pane_g4

0xbc2a,	// (0x0000e2b5) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x00012151) list_wheel_apps_pane_g

0xf3ea,	// (0x00011a75) navi_icon_text_pane

0xaee2,	// (0x0000d56d) aid_fill_nsta

0xbc47,	// (0x0000e2d2) navi_icon_text_pane_g1

0xbc53,	// (0x0000e2de) navi_icon_text_pane_t1

0xa404,	// (0x0000ca8f) list_set_graphic_pane_t1_ParamLimits

0xa404,	// (0x0000ca8f) list_set_graphic_pane_t1

0x1e83,	// (0x0000450e) popup_midp_note_alarm_window_t6_ParamLimits

0x1e83,	// (0x0000450e) popup_midp_note_alarm_window_t6

0x1e95,	// (0x00004520) popup_midp_note_alarm_window_t7_ParamLimits

0x1e95,	// (0x00004520) popup_midp_note_alarm_window_t7

0x1ea7,	// (0x00004532) popup_midp_note_alarm_window_t8_ParamLimits

0x1ea7,	// (0x00004532) popup_midp_note_alarm_window_t8

0x1eb9,	// (0x00004544) popup_midp_note_alarm_window_t9_ParamLimits

0x1eb9,	// (0x00004544) popup_midp_note_alarm_window_t9

0x1ecb,	// (0x00004556) popup_midp_note_alarm_window_t10_ParamLimits

0x1ecb,	// (0x00004556) popup_midp_note_alarm_window_t10

0x1edd,	// (0x00004568) popup_midp_note_alarm_window_t11_ParamLimits

0x1edd,	// (0x00004568) popup_midp_note_alarm_window_t11

0x1eef,	// (0x0000457a) scroll_pane_cp17_ParamLimits

0x1eef,	// (0x0000457a) scroll_pane_cp17

0x1fa5,	// (0x00004630) volume_small_pane_cp_g1

0x3c46,	// (0x000062d1) volume_small_pane_cp_g2

0x3c4f,	// (0x000062da) volume_small_pane_cp_g3

0x3c58,	// (0x000062e3) volume_small_pane_cp_g4

0x3c61,	// (0x000062ec) volume_small_pane_cp_g5

0x3c6a,	// (0x000062f5) volume_small_pane_cp_g6

0x3c73,	// (0x000062fe) volume_small_pane_cp_g7

0x3c7c,	// (0x00006307) volume_small_pane_cp_g8

0x3c85,	// (0x00006310) volume_small_pane_cp_g9

0x3c8e,	// (0x00006319) volume_small_pane_cp_g10

0x0099,	// (0x00002724) midp_ticker_pane_g1_ParamLimits

0x00a5,	// (0x00002730) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00011dde) midp_ticker_pane_g_ParamLimits

0xa542,	// (0x0000cbcd) midp_ticker_pane_t1_ParamLimits

0xaf06,	// (0x0000d591) aid_fill_nsta_2

0x171e,	// (0x00003da9) list_form2_midp_pane

0x2b2b,	// (0x000051b6) midp_editing_number_pane_ParamLimits

0x2b3a,	// (0x000051c5) midp_ticker_pane_ParamLimits

0x3c97,	// (0x00006322) form2_midp_field_pane

0x3cbb,	// (0x00006346) scroll_pane_cp51

0x3cdb,	// (0x00006366) form2_midp_button_pane_ParamLimits

0x3cdb,	// (0x00006366) form2_midp_button_pane

0x3ced,	// (0x00006378) form2_midp_content_pane_ParamLimits

0x3ced,	// (0x00006378) form2_midp_content_pane

0x3d07,	// (0x00006392) form2_midp_field_choice_group_pane

0x3d0f,	// (0x0000639a) form2_midp_field_pane_g1

0x3d17,	// (0x000063a2) form2_midp_field_pane_g2

0x3d1f,	// (0x000063aa) form2_midp_field_pane_g3

0x3d27,	// (0x000063b2) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x00012176) form2_midp_field_pane_g

0x3d2f,	// (0x000063ba) form2_midp_gauge_slider_pane

0x3d37,	// (0x000063c2) form2_midp_gauge_wait_pane

0x3d3f,	// (0x000063ca) form2_midp_image_pane_ParamLimits

0x3d3f,	// (0x000063ca) form2_midp_image_pane

0x3d5a,	// (0x000063e5) form2_midp_label_pane_ParamLimits

0x3d5a,	// (0x000063e5) form2_midp_label_pane

0xbc81,	// (0x0000e30c) form2_midp_label_pane_cp_ParamLimits

0xbc81,	// (0x0000e30c) form2_midp_label_pane_cp

0x3d9a,	// (0x00006425) form2_midp_string_pane_ParamLimits

0x3d9a,	// (0x00006425) form2_midp_string_pane

0xbca2,	// (0x0000e32d) form2_midp_text_pane_ParamLimits

0xbca2,	// (0x0000e32d) form2_midp_text_pane

0x3dcd,	// (0x00006458) form2_midp_time_pane

0x3ddd,	// (0x00006468) input_focus_pane_cp51_ParamLimits

0x3ddd,	// (0x00006468) input_focus_pane_cp51

0x3df5,	// (0x00006480) form2_midp_label_pane_t1_ParamLimits

0x3df5,	// (0x00006480) form2_midp_label_pane_t1

0xbcc3,	// (0x0000e34e) form2_mdip_text_pane_t1_ParamLimits

0xbcc3,	// (0x0000e34e) form2_mdip_text_pane_t1

0x3e5d,	// (0x000064e8) form2_midp_time_pane_t1

0x3e78,	// (0x00006503) form2_midp_gauge_slider_pane_t1

0xbce2,	// (0x0000e36d) form2_midp_gauge_slider_pane_t2

0xbcf4,	// (0x0000e37f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0001217f) form2_midp_gauge_slider_pane_t

0x3eae,	// (0x00006539) form2_midp_slider_pane

0x3eba,	// (0x00006545) form2_midp_gauge_wait_pane_t1

0x3ec8,	// (0x00006553) form2_midp_wait_pane_ParamLimits

0x3ec8,	// (0x00006553) form2_midp_wait_pane

0x1414,	// (0x00003a9f) list_single_2graphic_pane_cp4_ParamLimits

0x1414,	// (0x00003a9f) list_single_2graphic_pane_cp4

0x3ef3,	// (0x0000657e) list_single_midp_graphic_pane_cp_ParamLimits

0x3ef3,	// (0x0000657e) list_single_midp_graphic_pane_cp

0xdf44,	// (0x000105cf) list_highlight_pane_cp20

0x3f17,	// (0x000065a2) list_single_2graphic_pane_g1_cp4

0x30da,	// (0x00005765) list_single_2graphic_pane_g2_cp4

0x3f1f,	// (0x000065aa) list_single_2graphic_pane_t1_cp4

0xe00a,	// (0x00010695) list_highlight_pane_cp21

0x3f2e,	// (0x000065b9) list_single_midp_graphic_pane_g4_cp

0x3f3d,	// (0x000065c8) list_single_midp_graphic_pane_t1_cp

0xbd06,	// (0x0000e391) form2_mdip_string_pane_t1_ParamLimits

0xbd06,	// (0x0000e391) form2_mdip_string_pane_t1

0xdf44,	// (0x000105cf) bg_wml_button_pane_cp2

0xddcb,	// (0x00010456) form2_midp_image_pane_g1

0xe68d,	// (0x00010d18) list_double_large_graphic_pane_g5_ParamLimits

0xe68d,	// (0x00010d18) list_double_large_graphic_pane_g5

0x0541,	// (0x00002bcc) midp_form_pane_ParamLimits

0xe00a,	// (0x00010695) main_apps_wheel_pane_ParamLimits

0xabfa,	// (0x0000d285) popup_preview_window_ParamLimits

0xabfa,	// (0x0000d285) popup_preview_window

0x0b11,	// (0x0000319c) popup_touch_info_window_ParamLimits

0x0b11,	// (0x0000319c) popup_touch_info_window

0x0b33,	// (0x000031be) popup_touch_menu_window_ParamLimits

0x0b33,	// (0x000031be) popup_touch_menu_window

0xddc1,	// (0x0001044c) bg_popup_sub_pane_cp6

0x3ff7,	// (0x00006682) list_touch_menu_pane

0x3fff,	// (0x0000668a) list_single_touch_menu_pane_ParamLimits

0x3fff,	// (0x0000668a) list_single_touch_menu_pane

0x4017,	// (0x000066a2) list_single_touch_menu_pane_t1

0xe00a,	// (0x00010695) bg_popup_sub_pane_cp7_ParamLimits

0xe00a,	// (0x00010695) bg_popup_sub_pane_cp7

0x4025,	// (0x000066b0) heading_sub_pane

0x402d,	// (0x000066b8) list_touch_info_pane_ParamLimits

0x402d,	// (0x000066b8) list_touch_info_pane

0x403c,	// (0x000066c7) list_single_touch_info_pane_ParamLimits

0x403c,	// (0x000066c7) list_single_touch_info_pane

0x404e,	// (0x000066d9) list_single_touch_info_pane_t1

0x405c,	// (0x000066e7) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0001218d) list_single_touch_info_pane_t

0xf546,	// (0x00011bd1) bg_popup_heading_pane_cp

0x406a,	// (0x000066f5) heading_sub_pane_t1

0x12cd,	// (0x00003958) bg_popup_preview_window_pane_cp_ParamLimits

0x12cd,	// (0x00003958) bg_popup_preview_window_pane_cp

0x4025,	// (0x000066b0) heading_preview_pane

0x402d,	// (0x000066b8) list_preview_pane_ParamLimits

0x402d,	// (0x000066b8) list_preview_pane

0x4078,	// (0x00006703) popup_preview_window_g1

0x403c,	// (0x000066c7) list_single_preview_pane_ParamLimits

0x403c,	// (0x000066c7) list_single_preview_pane

0x4080,	// (0x0000670b) list_single_preview_pane_g1

0x4088,	// (0x00006713) list_single_preview_pane_t1

0x404e,	// (0x000066d9) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x00012192) list_single_preview_pane_t

0x4096,	// (0x00006721) bg_popup_heading_pane_cp2_ParamLimits

0x4096,	// (0x00006721) bg_popup_heading_pane_cp2

0x40ac,	// (0x00006737) heading_preview_pane_g1

0x40b4,	// (0x0000673f) heading_preview_pane_t1_ParamLimits

0x40b4,	// (0x0000673f) heading_preview_pane_t1

0xe100,	// (0x0001078b) soft_indicator_pane_t1_ParamLimits

0xe635,	// (0x00010cc0) scroll_pane_ParamLimits

0xed49,	// (0x000113d4) scroll_sc2_left_pane

0xed52,	// (0x000113dd) scroll_sc2_right_pane

0xed71,	// (0x000113fc) scroll_bg_pane_g1_ParamLimits

0xed86,	// (0x00011411) scroll_bg_pane_g2_ParamLimits

0xed9e,	// (0x00011429) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00011d69) scroll_bg_pane_g_ParamLimits

0xed71,	// (0x000113fc) scroll_handle_pane_g1_ParamLimits

0xedc0,	// (0x0001144b) scroll_handle_pane_g2_ParamLimits

0xed9e,	// (0x00011429) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00011d70) scroll_handle_pane_g_ParamLimits

0x0571,	// (0x00002bfc) popup_choice_list_window_ParamLimits

0x0571,	// (0x00002bfc) popup_choice_list_window

0x1034,	// (0x000036bf) choice_list_pane

0x10fc,	// (0x00003787) cell_toolbar_pane_t1

0x1124,	// (0x000037af) toolbar_button_pane_ParamLimits

0x2525,	// (0x00004bb0) ai_gene_pane_1_t2_ParamLimits

0x2525,	// (0x00004bb0) ai_gene_pane_1_t2

0x0001,

0xf901,	// (0x00011f8c) ai_gene_pane_1_t_ParamLimits

0xf901,	// (0x00011f8c) ai_gene_pane_1_t

0x40d1,	// (0x0000675c) scroll_sc2_left_pane_g1

0x40d1,	// (0x0000675c) scroll_sc2_right_pane_g1

0x0541,	// (0x00002bcc) bg_popup_sub_pane_cp10

0x40db,	// (0x00006766) list_choice_list_pane

0x40f4,	// (0x0000677f) list_single_choice_list_pane_ParamLimits

0x40f4,	// (0x0000677f) list_single_choice_list_pane

0x410c,	// (0x00006797) list_single_choice_list_pane_g1

0xe94e,	// (0x00010fd9) list_single_choice_list_pane_t1_ParamLimits

0xe94e,	// (0x00010fd9) list_single_choice_list_pane_t1

0x4114,	// (0x0000679f) choice_list_pane_g1

0x411c,	// (0x000067a7) choice_list_pane_t1

0xddc1,	// (0x0001044c) input_focus_pane_cp11

0xeb36,	// (0x000111c1) title_pane_stacon_g2_ParamLimits

0xeb36,	// (0x000111c1) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00011d4f) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00011d4f) title_pane_stacon_g

0xf546,	// (0x00011bd1) cursor_press_pane

0xa877,	// (0x0000cf02) popup_fep_hwr_window_ParamLimits

0xa877,	// (0x0000cf02) popup_fep_hwr_window

0x06b5,	// (0x00002d40) popup_fep_vkb_window_ParamLimits

0x06b5,	// (0x00002d40) popup_fep_vkb_window

0x412a,	// (0x000067b5) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x000121bb) fep_vkb_side_pane_g_ParamLimits

0x416b,	// (0x000067f6) fep_hwr_candidate_pane_ParamLimits

0x416b,	// (0x000067f6) fep_hwr_candidate_pane

0x4195,	// (0x00006820) fep_hwr_side_pane_ParamLimits

0x4195,	// (0x00006820) fep_hwr_side_pane

0x41b7,	// (0x00006842) fep_hwr_top_pane_ParamLimits

0x41b7,	// (0x00006842) fep_hwr_top_pane

0x41cf,	// (0x0000685a) fep_hwr_write_pane_ParamLimits

0x41cf,	// (0x0000685a) fep_hwr_write_pane

0xfb30,	// (0x000121bb) fep_vkb_side_pane_g

0x4209,	// (0x00006894) fep_hwr_top_pane_g1

0x421b,	// (0x000068a6) fep_hwr_top_pane_g2

0x422d,	// (0x000068b8) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x00012197) fep_hwr_top_pane_g

0x4242,	// (0x000068cd) fep_hwr_top_text_pane

0xeeba,	// (0x00011545) fep_hwr_top_text_pane_g1

0x431e,	// (0x000069a9) fep_hwr_top_text_pane_t1

0x437e,	// (0x00006a09) fep_hwr_candidate_pane_g1

0x45ef,	// (0x00006c7a) fep_vkb_keypad_pane_g3_ParamLimits

0x45ef,	// (0x00006c7a) fep_vkb_keypad_pane_g3

0x461b,	// (0x00006ca6) fep_vkb_keypad_pane_g4_ParamLimits

0x461b,	// (0x00006ca6) fep_vkb_keypad_pane_g4

0x4692,	// (0x00006d1d) fep_vkb_bottom_pane_g2_ParamLimits

0x4692,	// (0x00006d1d) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x000121c2) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x000121c2) fep_vkb_bottom_pane_g

0x40d1,	// (0x0000675c) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x000121cc) cell_vkb_side_pane_g

0x471d,	// (0x00006da8) cell_vkb_side_pane_t1

0x472b,	// (0x00006db6) cell_vkb_side_pane_t1_copy1

0x40d1,	// (0x0000675c) bg_fep_vkb_candidate_pane_g2

0x486f,	// (0x00006efa) cell_vkb_candidate_pane_ParamLimits

0x43b2,	// (0x00006a3d) aid_size_cell_vkb_ParamLimits

0x43b2,	// (0x00006a3d) aid_size_cell_vkb

0x486f,	// (0x00006efa) cell_vkb_candidate_pane

0x48a9,	// (0x00006f34) bg_popup_fep_shadow_pane_g1

0xbdfb,	// (0x0000e486) fep_vkb_bottom_pane_ParamLimits

0xbdfb,	// (0x0000e486) fep_vkb_bottom_pane

0x4481,	// (0x00006b0c) fep_vkb_candidate_pane_ParamLimits

0x4481,	// (0x00006b0c) fep_vkb_candidate_pane

0xbe27,	// (0x0000e4b2) fep_vkb_keypad_pane_ParamLimits

0xbe27,	// (0x0000e4b2) fep_vkb_keypad_pane

0xbe4e,	// (0x0000e4d9) fep_vkb_side_pane_ParamLimits

0xbe4e,	// (0x0000e4d9) fep_vkb_side_pane

0xbe8a,	// (0x0000e515) fep_vkb_top_pane_ParamLimits

0xbe8a,	// (0x0000e515) fep_vkb_top_pane

0x4548,	// (0x00006bd3) fep_vkb_top_pane_g1_ParamLimits

0x4548,	// (0x00006bd3) fep_vkb_top_pane_g1

0x4557,	// (0x00006be2) fep_vkb_top_pane_g2_ParamLimits

0x4557,	// (0x00006be2) fep_vkb_top_pane_g2

0x4566,	// (0x00006bf1) fep_vkb_top_pane_g3_ParamLimits

0x4566,	// (0x00006bf1) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x000121b2) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x000121b2) fep_vkb_top_pane_g

0x4584,	// (0x00006c0f) fep_vkb_top_text_pane_ParamLimits

0x4584,	// (0x00006c0f) fep_vkb_top_text_pane

0xbec6,	// (0x0000e551) fep_vkb_side_pane_g1_ParamLimits

0xbec6,	// (0x0000e551) fep_vkb_side_pane_g1

0x45de,	// (0x00006c69) grid_vkb_side_pane_ParamLimits

0x45de,	// (0x00006c69) grid_vkb_side_pane

0x48b1,	// (0x00006f3c) bg_popup_fep_shadow_pane_g2

0x48ba,	// (0x00006f45) bg_popup_fep_shadow_pane_g3

0x48c2,	// (0x00006f4d) bg_popup_fep_shadow_pane_g4

0x48cb,	// (0x00006f56) bg_popup_fep_shadow_pane_g5

0x48d5,	// (0x00006f60) bg_popup_fep_shadow_pane_g6

0x48dd,	// (0x00006f68) bg_popup_fep_shadow_pane_g7

0xe849,	// (0x00010ed4) bg_popup_fep_shadow_pane_g8

0x463d,	// (0x00006cc8) grid_vkb_keypad_number_pane_ParamLimits

0x463d,	// (0x00006cc8) grid_vkb_keypad_number_pane

0x4651,	// (0x00006cdc) grid_vkb_keypad_pane_ParamLimits

0x4651,	// (0x00006cdc) grid_vkb_keypad_pane

0x4677,	// (0x00006d02) fep_vkb_bottom_pane_g1_ParamLimits

0x4677,	// (0x00006d02) fep_vkb_bottom_pane_g1

0x46a0,	// (0x00006d2b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x46a0,	// (0x00006d2b) grid_vkb_keypad_bottom_left_pane

0x46b5,	// (0x00006d40) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x46b5,	// (0x00006d40) grid_vkb_keypad_bottom_right_pane

0x46ca,	// (0x00006d55) fep_vkb_top_text_pane_g1

0xbf0d,	// (0x0000e598) fep_vkb_top_text_pane_t1

0xbf1f,	// (0x0000e5aa) cell_vkb_side_pane_ParamLimits

0xbf1f,	// (0x0000e5aa) cell_vkb_side_pane

0x40d1,	// (0x0000675c) cell_vkb_side_pane_g1

0x4739,	// (0x00006dc4) cell_vkb_keypad_pane_ParamLimits

0x4739,	// (0x00006dc4) cell_vkb_keypad_pane

0x47c6,	// (0x00006e51) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x000121df) bg_popup_fep_shadow_pane_g

0x40d1,	// (0x0000675c) cell_hwr_side_pane_g1

0x40d1,	// (0x0000675c) cell_hwr_side_pane_g2

0x47d0,	// (0x00006e5b) cell_vkb_keypad_pane_t1

0xbf35,	// (0x0000e5c0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbf35,	// (0x0000e5c0) cell_vkb_keypad_bottom_left_pane

0xbf4a,	// (0x0000e5d5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbf4a,	// (0x0000e5d5) cell_vkb_keypad_bottom_right_pane

0x40d1,	// (0x0000675c) cell_vkb_keypad_bottom_left_pane_g1

0x40d1,	// (0x0000675c) cell_vkb_keypad_bottom_right_pane_g1

0x4834,	// (0x00006ebf) cell_vkb_keypad_number_pane_ParamLimits

0x4834,	// (0x00006ebf) cell_vkb_keypad_number_pane

0x4853,	// (0x00006ede) cell_vkb_keypad_number_pane_g1

0x485d,	// (0x00006ee8) cell_vkb_keypad_number_pane_g2

0x4866,	// (0x00006ef1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x000121d1) cell_vkb_keypad_number_pane_g

0x47d0,	// (0x00006e5b) cell_vkb_keypad_number_pane_t1

0x4890,	// (0x00006f1b) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x000121cc) cell_hwr_side_pane_g

0x48ef,	// (0x00006f7a) cell_hwr_side_pane_t1

0x48fd,	// (0x00006f88) cell_hwr_side_pane_t1_copy1

0x4576,	// (0x00006c01) cell_hwr_candidate_pane_g1

0x494d,	// (0x00006fd8) cell_hwr_candidate_pane_t1

0x40d1,	// (0x0000675c) cell_vkb_candidate_pane_g2

0x49a1,	// (0x0000702c) cell_vkb_candidate_pane_t1

0x4132,	// (0x000067bd) bg_popup_fep_shadow_pane_ParamLimits

0x4132,	// (0x000067bd) bg_popup_fep_shadow_pane

0x41e9,	// (0x00006874) bg_fep_hwr_top_pane_g4

0x4257,	// (0x000068e2) bg_hwr_side_pane_g1_ParamLimits

0x4257,	// (0x000068e2) bg_hwr_side_pane_g1

0xbdb4,	// (0x0000e43f) cell_hwr_side_pane_ParamLimits

0xbdb4,	// (0x0000e43f) cell_hwr_side_pane

0x42c9,	// (0x00006954) fep_hwr_write_pane_g1_ParamLimits

0x42c9,	// (0x00006954) fep_hwr_write_pane_g1

0x42d6,	// (0x00006961) fep_hwr_write_pane_g2_ParamLimits

0x42d6,	// (0x00006961) fep_hwr_write_pane_g2

0x42e3,	// (0x0000696e) fep_hwr_write_pane_g3_ParamLimits

0x42e3,	// (0x0000696e) fep_hwr_write_pane_g3

0xbdd4,	// (0x0000e45f) fep_hwr_write_pane_g4_ParamLimits

0xbdd4,	// (0x0000e45f) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0001219e) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0001219e) fep_hwr_write_pane_g

0x41e9,	// (0x00006874) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x41e9,	// (0x00006874) bg_fep_hwr_candidate_pane_g2

0x432c,	// (0x000069b7) cell_hwr_candidate_pane_ParamLimits

0x432c,	// (0x000069b7) cell_hwr_candidate_pane

0x437e,	// (0x00006a09) fep_hwr_candidate_pane_g1_ParamLimits

0x43e0,	// (0x00006a6b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x43e0,	// (0x00006a6b) bg_popup_fep_shadow_pane_cp2

0x4576,	// (0x00006c01) fep_vkb_top_pane_g4_ParamLimits

0x4576,	// (0x00006c01) fep_vkb_top_pane_g4

0x45bc,	// (0x00006c47) fep_vkb_side_pane_g2_ParamLimits

0x45bc,	// (0x00006c47) fep_vkb_side_pane_g2

0x9e87,	// (0x0000c512) list_setting_pane_t4_ParamLimits

0x9e87,	// (0x0000c512) list_setting_pane_t4

0x9f03,	// (0x0000c58e) list_setting_number_pane_t5_ParamLimits

0x9f03,	// (0x0000c58e) list_setting_number_pane_t5

0xa26e,	// (0x0000c8f9) list_double_heading_pane_cp2_ParamLimits

0xa26e,	// (0x0000c8f9) list_double_heading_pane_cp2

0x49af,	// (0x0000703a) list_double_heading_pane_g1_cp2_ParamLimits

0x49af,	// (0x0000703a) list_double_heading_pane_g1_cp2

0x49bb,	// (0x00007046) list_double_heading_pane_g2_cp2_ParamLimits

0x49bb,	// (0x00007046) list_double_heading_pane_g2_cp2

0x49cf,	// (0x0000705a) list_double_heading_pane_t1_cp2_ParamLimits

0x49cf,	// (0x0000705a) list_double_heading_pane_t1_cp2

0x49e5,	// (0x00007070) list_double_heading_pane_t2_cp2_ParamLimits

0x49e5,	// (0x00007070) list_double_heading_pane_t2_cp2

0xddb9,	// (0x00010444) aid_value_unit2

0xdf98,	// (0x00010623) popup_preview_fixed_window

0xe1e0,	// (0x0001086b) bg_popup_preview_window_pane_cp02

0x49f7,	// (0x00007082) list_preview_fixed_pane

0x4a3d,	// (0x000070c8) list_empty_pane_fp_ParamLimits

0x4a3d,	// (0x000070c8) list_empty_pane_fp

0x4a3d,	// (0x000070c8) list_single_cale_day_pane_fp_ParamLimits

0x4a3d,	// (0x000070c8) list_single_cale_day_pane_fp

0x4a3d,	// (0x000070c8) list_single_graphic_heading_pane_fp_ParamLimits

0x4a3d,	// (0x000070c8) list_single_graphic_heading_pane_fp

0x4a3d,	// (0x000070c8) list_single_graphic_pane_fp_ParamLimits

0x4a3d,	// (0x000070c8) list_single_graphic_pane_fp

0x4a3d,	// (0x000070c8) list_single_heading_pane_fp_ParamLimits

0x4a3d,	// (0x000070c8) list_single_heading_pane_fp

0x4a3d,	// (0x000070c8) list_single_pane_fp_ParamLimits

0x4a3d,	// (0x000070c8) list_single_pane_fp

0x4a56,	// (0x000070e1) list_single_pane_fp_g1_ParamLimits

0x4a56,	// (0x000070e1) list_single_pane_fp_g1

0x49af,	// (0x0000703a) list_single_pane_fp_g2_ParamLimits

0x49af,	// (0x0000703a) list_single_pane_fp_g2

0x49bb,	// (0x00007046) list_single_pane_fp_g3_ParamLimits

0x49bb,	// (0x00007046) list_single_pane_fp_g3

0x4a62,	// (0x000070ed) list_single_pane_fp_g4_ParamLimits

0x4a62,	// (0x000070ed) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x00012200) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x00012200) list_single_pane_fp_g

0x4a6e,	// (0x000070f9) list_single_pane_fp_t1_ParamLimits

0x4a6e,	// (0x000070f9) list_single_pane_fp_t1

0x4a85,	// (0x00007110) list_single_graphic_pane_fp_g1_ParamLimits

0x4a85,	// (0x00007110) list_single_graphic_pane_fp_g1

0x4a56,	// (0x000070e1) list_single_graphic_pane_fp_g2_ParamLimits

0x4a56,	// (0x000070e1) list_single_graphic_pane_fp_g2

0x49af,	// (0x0000703a) list_single_graphic_pane_fp_g3_ParamLimits

0x49af,	// (0x0000703a) list_single_graphic_pane_fp_g3

0x49bb,	// (0x00007046) list_single_graphic_pane_fp_g4_ParamLimits

0x49bb,	// (0x00007046) list_single_graphic_pane_fp_g4

0x4a62,	// (0x000070ed) list_single_graphic_pane_fp_g5_ParamLimits

0x4a62,	// (0x000070ed) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x00012209) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x00012209) list_single_graphic_pane_fp_g

0x4a91,	// (0x0000711c) list_single_graphic_pane_fp_t1_ParamLimits

0x4a91,	// (0x0000711c) list_single_graphic_pane_fp_t1

0x4a85,	// (0x00007110) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4a85,	// (0x00007110) list_single_graphic_heading_pane_fp_g1

0x4a56,	// (0x000070e1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4a56,	// (0x000070e1) list_single_graphic_heading_pane_fp_g2

0x49af,	// (0x0000703a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x49af,	// (0x0000703a) list_single_graphic_heading_pane_fp_g3

0x49bb,	// (0x00007046) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x49bb,	// (0x00007046) list_single_graphic_heading_pane_fp_g4

0x4a62,	// (0x000070ed) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4a62,	// (0x000070ed) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x00012209) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00012209) list_single_graphic_heading_pane_fp_g

0x4aa7,	// (0x00007132) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4aa7,	// (0x00007132) list_single_graphic_heading_pane_fp_t1

0x4abd,	// (0x00007148) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4abd,	// (0x00007148) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x00012214) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x00012214) list_single_graphic_heading_pane_fp_t

0x4acf,	// (0x0000715a) list_single_cale_day_pane_fp_g1_ParamLimits

0x4acf,	// (0x0000715a) list_single_cale_day_pane_fp_g1

0x4b07,	// (0x00007192) list_single_cale_day_pane_fp_g2_ParamLimits

0x4b07,	// (0x00007192) list_single_cale_day_pane_fp_g2

0x4b13,	// (0x0000719e) list_single_cale_day_pane_fp_g3_ParamLimits

0x4b13,	// (0x0000719e) list_single_cale_day_pane_fp_g3

0x4b3b,	// (0x000071c6) list_single_cale_day_pane_fp_g4_ParamLimits

0x4b3b,	// (0x000071c6) list_single_cale_day_pane_fp_g4

0x4b5f,	// (0x000071ea) list_single_cale_day_pane_fp_g5_ParamLimits

0x4b5f,	// (0x000071ea) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x00012219) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x00012219) list_single_cale_day_pane_fp_g

0x4b83,	// (0x0000720e) list_single_cale_day_pane_fp_t1_ParamLimits

0x4b83,	// (0x0000720e) list_single_cale_day_pane_fp_t1

0x4ba9,	// (0x00007234) list_single_cale_day_pane_fp_t2_ParamLimits

0x4ba9,	// (0x00007234) list_single_cale_day_pane_fp_t2

0x4bc2,	// (0x0000724d) list_single_cale_day_pane_fp_t3_ParamLimits

0x4bc2,	// (0x0000724d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x00012224) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x00012224) list_single_cale_day_pane_fp_t

0x4a56,	// (0x000070e1) list_empty_pane_fp_g1_ParamLimits

0x4a56,	// (0x000070e1) list_empty_pane_fp_g1

0x4bdb,	// (0x00007266) list_empty_pane_fp_t1

0x4be9,	// (0x00007274) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0001222b) list_empty_pane_fp_t

0x4a56,	// (0x000070e1) list_single_heading_pane_fp_g1_ParamLimits

0x4a56,	// (0x000070e1) list_single_heading_pane_fp_g1

0x49af,	// (0x0000703a) list_single_heading_pane_fp_g2_ParamLimits

0x49af,	// (0x0000703a) list_single_heading_pane_fp_g2

0x49bb,	// (0x00007046) list_single_heading_pane_fp_g3_ParamLimits

0x49bb,	// (0x00007046) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x00012230) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x00012230) list_single_heading_pane_fp_g

0x4bf7,	// (0x00007282) list_single_heading_pane_fp_t1_ParamLimits

0x4bf7,	// (0x00007282) list_single_heading_pane_fp_t1

0x4c09,	// (0x00007294) list_single_heading_pane_fp_t2_ParamLimits

0x4c09,	// (0x00007294) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x00012237) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x00012237) list_single_heading_pane_fp_t

0xe963,	// (0x00010fee) aid_size_cell_fast

0xe1c3,	// (0x0001084e) soft_indicator_pane_cp1_t1

0xe9a0,	// (0x0001102b) cell_app_pane_cp2_ParamLimits

0xe9a0,	// (0x0001102b) cell_app_pane_cp2

0x4154,	// (0x000067df) fep_hwr_candidate_drop_down_list_pane

0x4398,	// (0x00006a23) fep_hwr_candidate_pane_g3_ParamLimits

0x4398,	// (0x00006a23) fep_hwr_candidate_pane_g3

0x43a5,	// (0x00006a30) fep_hwr_candidate_pane_g4_ParamLimits

0x43a5,	// (0x00006a30) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x000121ab) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x000121ab) fep_hwr_candidate_pane_g

0x4470,	// (0x00006afb) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4470,	// (0x00006afb) fep_vkb_candidate_drop_down_list_pane

0x4898,	// (0x00006f23) fep_vkb_candidate_pane_g3

0x48a0,	// (0x00006f2b) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x000121d8) fep_vkb_candidate_pane_g

0x4576,	// (0x00006c01) cell_hwr_candidate_pane_g1_ParamLimits

0x490b,	// (0x00006f96) cell_hwr_candidate_pane_g3_ParamLimits

0x490b,	// (0x00006f96) cell_hwr_candidate_pane_g3

0x492c,	// (0x00006fb7) cell_hwr_candidate_pane_g4_ParamLimits

0x492c,	// (0x00006fb7) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x000121f2) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x000121f2) cell_hwr_candidate_pane_g

0x496b,	// (0x00006ff6) cell_vkb_candidate_pane_g3_ParamLimits

0x496b,	// (0x00006ff6) cell_vkb_candidate_pane_g3

0x4986,	// (0x00007011) cell_vkb_candidate_pane_g4_ParamLimits

0x4986,	// (0x00007011) cell_vkb_candidate_pane_g4

0x4c1f,	// (0x000072aa) cell_app_pane_cp2_g1_ParamLimits

0x4c1f,	// (0x000072aa) cell_app_pane_cp2_g1

0x4c3d,	// (0x000072c8) cell_app_pane_cp2_g2_ParamLimits

0x4c3d,	// (0x000072c8) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0001223c) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0001223c) cell_app_pane_cp2_g

0x4c49,	// (0x000072d4) cell_app_pane_cp2_t1_ParamLimits

0x4c49,	// (0x000072d4) cell_app_pane_cp2_t1

0xe760,	// (0x00010deb) grid_highlight_pane_cp1_ParamLimits

0xe760,	// (0x00010deb) grid_highlight_pane_cp1

0x4c5b,	// (0x000072e6) cell_hwr_candidate_pane_cp1_ParamLimits

0x4c5b,	// (0x000072e6) cell_hwr_candidate_pane_cp1

0x4576,	// (0x00006c01) fep_hwr_candidate_drop_down_list_pane_g1

0x4c7f,	// (0x0000730a) fep_hwr_candidate_drop_down_list_pane_g2

0x4c8c,	// (0x00007317) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00012241) fep_hwr_candidate_drop_down_list_pane_g

0x4c99,	// (0x00007324) fep_hwr_candidate_drop_down_list_scroll_pane

0x4ca2,	// (0x0000732d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4ca2,	// (0x0000732d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x4caf,	// (0x0000733a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4caf,	// (0x0000733a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x4cbc,	// (0x00007347) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4cbc,	// (0x00007347) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x496b,	// (0x00006ff6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x496b,	// (0x00006ff6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4986,	// (0x00007011) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4986,	// (0x00007011) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x4cc9,	// (0x00007354) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4cc9,	// (0x00007354) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x4ce4,	// (0x0000736f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4ce4,	// (0x0000736f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x4cff,	// (0x0000738a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4cff,	// (0x0000738a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x00012248) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x00012248) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4d1a,	// (0x000073a5) cell_vkb_candidate_pane_cp1_ParamLimits

0x4d1a,	// (0x000073a5) cell_vkb_candidate_pane_cp1

0x4576,	// (0x00006c01) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4576,	// (0x00006c01) fep_vkb_candidate_drop_down_list_pane_g1

0x4c7f,	// (0x0000730a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4c7f,	// (0x0000730a) fep_vkb_candidate_drop_down_list_pane_g2

0x4c8c,	// (0x00007317) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4c8c,	// (0x00007317) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00012241) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x00012241) fep_vkb_candidate_drop_down_list_pane_g

0x4d40,	// (0x000073cb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4d40,	// (0x000073cb) fep_vkb_candidate_drop_down_list_scroll_pane

0x4d4d,	// (0x000073d8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4d4d,	// (0x000073d8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4d5a,	// (0x000073e5) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4d5a,	// (0x000073e5) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4d66,	// (0x000073f1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4d66,	// (0x000073f1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x490b,	// (0x00006f96) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x490b,	// (0x00006f96) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x492c,	// (0x00006fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x492c,	// (0x00006fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4d72,	// (0x000073fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4d72,	// (0x000073fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4d93,	// (0x0000741e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4d93,	// (0x0000741e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4db4,	// (0x0000743f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4db4,	// (0x0000743f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x00012259) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x00012259) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x978d,	// (0x0000be18) title_pane_g1_ParamLimits

0x97a0,	// (0x0000be2b) title_pane_g2_ParamLimits

0xf54e,	// (0x00011bd9) title_pane_g_ParamLimits

0xeeaa,	// (0x00011535) aid_call2_pane

0xeeb2,	// (0x0001153d) aid_call_pane

0xeeba,	// (0x00011545) popup_clock_analogue_window_g1

0xeeba,	// (0x00011545) popup_clock_analogue_window_g2

0xeec2,	// (0x0001154d) popup_clock_analogue_window_g3

0xeecb,	// (0x00011556) popup_clock_analogue_window_g4

0xddcb,	// (0x00010456) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00011d7e) popup_clock_analogue_window_g

0xeed3,	// (0x0001155e) popup_clock_analogue_window_t1

0xef30,	// (0x000115bb) clock_digital_number_pane_ParamLimits

0xef30,	// (0x000115bb) clock_digital_number_pane

0xef3c,	// (0x000115c7) clock_digital_number_pane_cp02_ParamLimits

0xef3c,	// (0x000115c7) clock_digital_number_pane_cp02

0xef48,	// (0x000115d3) clock_digital_number_pane_cp03_ParamLimits

0xef48,	// (0x000115d3) clock_digital_number_pane_cp03

0xef54,	// (0x000115df) clock_digital_number_pane_cp04_ParamLimits

0xef54,	// (0x000115df) clock_digital_number_pane_cp04

0xef60,	// (0x000115eb) clock_digital_separator_pane_ParamLimits

0xef60,	// (0x000115eb) clock_digital_separator_pane

0xef6c,	// (0x000115f7) popup_clock_digital_window_t1_ParamLimits

0xef6c,	// (0x000115f7) popup_clock_digital_window_t1

0xddcb,	// (0x00010456) clock_digital_number_pane_g1

0xddcb,	// (0x00010456) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00011d89) clock_digital_number_pane_g

0xddcb,	// (0x00010456) clock_digital_separator_pane_g1

0xddcb,	// (0x00010456) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00011d89) clock_digital_separator_pane_g

0xaee2,	// (0x0000d56d) aid_fill_nsta_ParamLimits

0xb01a,	// (0x0000d6a5) indicator_nsta_pane_ParamLimits

0x0e61,	// (0x000034ec) popup_clock_analogue_window

0x0e61,	// (0x000034ec) popup_clock_digital_window

0xe9cb,	// (0x00011056) grid_indicator_nsta_pane_ParamLimits

0x3a5d,	// (0x000060e8) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0001212b) clock_nsta_pane_t

0xecf7,	// (0x00011382) aid_size_max_handle

0xa1e1,	// (0x0000c86c) aid_size_min_handle

0xf546,	// (0x00011bd1) editor_scroll_pane

0x4dcf,	// (0x0000745a) ex_editor_pane

0xe929,	// (0x00010fb4) scroll_pane_cp13

0xe661,	// (0x00010cec) scroll_pane_cp14

0xef08,	// (0x00011593) scroll_pane_cp36

0xa281,	// (0x0000c90c) list_single_graphic_hl_pane_cp2_ParamLimits

0xa281,	// (0x0000c90c) list_single_graphic_hl_pane_cp2

0xba1b,	// (0x0000e0a6) list_single_graphic_hl_pane_ParamLimits

0xba1b,	// (0x0000e0a6) list_single_graphic_hl_pane

0x4dd7,	// (0x00007462) aid_size_min_hl_cp1

0x4de0,	// (0x0000746b) list_highlight_pane_cp34_ParamLimits

0x4de0,	// (0x0000746b) list_highlight_pane_cp34

0x4df1,	// (0x0000747c) list_single_graphic_hl_pane_g1_ParamLimits

0x4df1,	// (0x0000747c) list_single_graphic_hl_pane_g1

0xe669,	// (0x00010cf4) list_single_graphic_hl_pane_g2_ParamLimits

0xe669,	// (0x00010cf4) list_single_graphic_hl_pane_g2

0xe669,	// (0x00010cf4) list_single_graphic_hl_pane_g3_ParamLimits

0xe669,	// (0x00010cf4) list_single_graphic_hl_pane_g3

0xe675,	// (0x00010d00) list_single_graphic_hl_pane_g4_ParamLimits

0xe675,	// (0x00010d00) list_single_graphic_hl_pane_g4

0x4e64,	// (0x000074ef) list_single_graphic_hl_pane_g5_ParamLimits

0x4e64,	// (0x000074ef) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0001226a) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0001226a) list_single_graphic_hl_pane_g

0xbf65,	// (0x0000e5f0) list_single_graphic_hl_pane_t1_ParamLimits

0xbf65,	// (0x0000e5f0) list_single_graphic_hl_pane_t1

0x4e34,	// (0x000074bf) aid_size_min_hl_cp2

0x4e3d,	// (0x000074c8) list_highlight_pane_cp34_cp2_ParamLimits

0x4e3d,	// (0x000074c8) list_highlight_pane_cp34_cp2

0x4df1,	// (0x0000747c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4df1,	// (0x0000747c) list_single_graphic_hl_pane_g1_cp2

0x4e4a,	// (0x000074d5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4e4a,	// (0x000074d5) list_single_graphic_hl_pane_g2_cp2

0xbf7b,	// (0x0000e606) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbf7b,	// (0x0000e606) list_single_graphic_hl_pane_g3_cp2

0xe675,	// (0x00010d00) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe675,	// (0x00010d00) list_single_graphic_hl_pane_g4_cp2

0x4e64,	// (0x000074ef) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4e64,	// (0x000074ef) list_single_graphic_hl_pane_g5_cp2

0xa653,	// (0x0000ccde) control_pane_g4_ParamLimits

0xa653,	// (0x0000ccde) control_pane_g4

0x0541,	// (0x00002bcc) bg_popup_sub_pane_cp10_ParamLimits

0x40db,	// (0x00006766) list_choice_list_pane_ParamLimits

0x40ea,	// (0x00006775) scroll_pane_cp23

0xe1e0,	// (0x0001086b) bg_popup_preview_window_pane_cp02_ParamLimits

0x49f7,	// (0x00007082) list_preview_fixed_pane_ParamLimits

0x4a0d,	// (0x00007098) list_preview_fixed_pane_cp_ParamLimits

0x4a0d,	// (0x00007098) list_preview_fixed_pane_cp

0x4a19,	// (0x000070a4) popup_preview_fixed_window_g1_ParamLimits

0x4a19,	// (0x000070a4) popup_preview_fixed_window_g1

0x4a25,	// (0x000070b0) popup_preview_fixed_window_g2_ParamLimits

0x4a25,	// (0x000070b0) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x000121f9) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x000121f9) popup_preview_fixed_window_g

0xec1b,	// (0x000112a6) aid_navi_side_left_pane_ParamLimits

0xec30,	// (0x000112bb) aid_navi_side_right_pane_ParamLimits

0xec48,	// (0x000112d3) navi_icon_pane_stacon_ParamLimits

0xec5c,	// (0x000112e7) navi_navi_pane_stacon_ParamLimits

0xec48,	// (0x000112d3) navi_text_pane_stacon_ParamLimits

0xddc1,	// (0x0001044c) main_text_info_pane

0x4e8e,	// (0x00007519) listscroll_text_info_pane

0x4e96,	// (0x00007521) list_text_info_pane_ParamLimits

0x4e96,	// (0x00007521) list_text_info_pane

0x4ea5,	// (0x00007530) scroll_pane_cp24_ParamLimits

0x4ea5,	// (0x00007530) scroll_pane_cp24

0xbf89,	// (0x0000e614) list_text_info_pane_t1_ParamLimits

0xbf89,	// (0x0000e614) list_text_info_pane_t1

0xa7db,	// (0x0000ce66) popup_fast_swap2_window_ParamLimits

0xa7db,	// (0x0000ce66) popup_fast_swap2_window

0x4ee8,	// (0x00007573) aid_size_cell_fast2

0xddc1,	// (0x0001044c) bg_popup_window_pane_cp17

0x174a,	// (0x00003dd5) heading_pane_cp2

0xe3e6,	// (0x00010a71) listscroll_fast2_pane

0x4ef2,	// (0x0000757d) grid_fast2_pane

0x4efc,	// (0x00007587) listscroll_fast2_pane_g1

0x4f06,	// (0x00007591) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x00012275) listscroll_fast2_pane_g

0xe929,	// (0x00010fb4) scroll_pane_cp26

0x4f10,	// (0x0000759b) cell_fast2_pane_ParamLimits

0x4f10,	// (0x0000759b) cell_fast2_pane

0x4f27,	// (0x000075b2) cell_fast2_pane_g1

0x4f30,	// (0x000075bb) cell_fast2_pane_g2

0x4f39,	// (0x000075c4) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0001227a) cell_fast2_pane_g

0xe428,	// (0x00010ab3) grid_highlight_pane_cp9

0xe43d,	// (0x00010ac8) main_eswt_pane_ParamLimits

0xe43d,	// (0x00010ac8) main_eswt_pane

0x4eba,	// (0x00007545) list_single_text_info_pane

0x4f41,	// (0x000075cc) eswt_ctrl_button_pane

0x4f41,	// (0x000075cc) eswt_ctrl_canvas_pane

0x4f49,	// (0x000075d4) eswt_ctrl_combo_pane

0x4f41,	// (0x000075cc) eswt_ctrl_default_pane

0x4f41,	// (0x000075cc) eswt_ctrl_label_pane

0x4f51,	// (0x000075dc) eswt_ctrl_wait_pane

0x4f59,	// (0x000075e4) eswt_shell_pane

0xddc1,	// (0x0001044c) listscroll_eswt_app_pane

0x4f79,	// (0x00007604) popup_eswt_tasktip_window_ParamLimits

0x4f79,	// (0x00007604) popup_eswt_tasktip_window

0x12cd,	// (0x00003958) bg_popup_window_pane_cp18

0x4f8a,	// (0x00007615) eswt_control_pane_g1_ParamLimits

0x4f8a,	// (0x00007615) eswt_control_pane_g1

0x4f97,	// (0x00007622) eswt_control_pane_g2_ParamLimits

0x4f97,	// (0x00007622) eswt_control_pane_g2

0x4fa4,	// (0x0000762f) eswt_control_pane_g3_ParamLimits

0x4fa4,	// (0x0000762f) eswt_control_pane_g3

0x4fb1,	// (0x0000763c) eswt_control_pane_g4_ParamLimits

0x4fb1,	// (0x0000763c) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x00012281) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x00012281) eswt_control_pane_g

0xe760,	// (0x00010deb) bg_button_pane_ParamLimits

0xe760,	// (0x00010deb) bg_button_pane

0xe43d,	// (0x00010ac8) common_borders_pane_copy2_ParamLimits

0xe43d,	// (0x00010ac8) common_borders_pane_copy2

0x4fbe,	// (0x00007649) control_button_pane_g1_ParamLimits

0x4fbe,	// (0x00007649) control_button_pane_g1

0x4fca,	// (0x00007655) control_button_pane_g2_ParamLimits

0x4fca,	// (0x00007655) control_button_pane_g2

0x4fd6,	// (0x00007661) control_button_pane_g3_ParamLimits

0x4fd6,	// (0x00007661) control_button_pane_g3

0x0002,

0xfbff,	// (0x0001228a) control_button_pane_g_ParamLimits

0xfbff,	// (0x0001228a) control_button_pane_g

0x4fea,	// (0x00007675) control_button_pane_t1

0x4ff8,	// (0x00007683) control_button_pane_t2

0x0001,

0xfc06,	// (0x00012291) control_button_pane_t

0x1130,	// (0x000037bb) bg_button_pane_g1

0x1138,	// (0x000037c3) bg_button_pane_g2

0x1140,	// (0x000037cb) bg_button_pane_g3

0x1148,	// (0x000037d3) bg_button_pane_g4

0x1150,	// (0x000037db) bg_button_pane_g5

0x1158,	// (0x000037e3) bg_button_pane_g6

0x1160,	// (0x000037eb) bg_button_pane_g7

0x1168,	// (0x000037f3) bg_button_pane_g8

0x1170,	// (0x000037fb) bg_button_pane_g9

0x0008,

0xf855,	// (0x00011ee0) bg_button_pane_g

0x4096,	// (0x00006721) common_borders_pane_ParamLimits

0x4096,	// (0x00006721) common_borders_pane

0x4f8a,	// (0x00007615) eswt_control_pane_g1_copy1_ParamLimits

0x4f8a,	// (0x00007615) eswt_control_pane_g1_copy1

0x4f97,	// (0x00007622) eswt_control_pane_g2_copy1_ParamLimits

0x4f97,	// (0x00007622) eswt_control_pane_g2_copy1

0x4fa4,	// (0x0000762f) eswt_control_pane_g3_copy1_ParamLimits

0x4fa4,	// (0x0000762f) eswt_control_pane_g3_copy1

0x4fb1,	// (0x0000763c) eswt_control_pane_g4_copy1_ParamLimits

0x4fb1,	// (0x0000763c) eswt_control_pane_g4_copy1

0x40d1,	// (0x0000675c) bg_eswt_ctrl_canvas_pane_g1

0x4096,	// (0x00006721) common_borders_pane_cp2_ParamLimits

0x4096,	// (0x00006721) common_borders_pane_cp2

0x4096,	// (0x00006721) common_borders_pane_cp3_ParamLimits

0x4096,	// (0x00006721) common_borders_pane_cp3

0x5006,	// (0x00007691) separator_horizontal_pane

0x500e,	// (0x00007699) separator_vertical_pane

0x4f8a,	// (0x00007615) eswt_control_pane_g1_copy2_ParamLimits

0x4f8a,	// (0x00007615) eswt_control_pane_g1_copy2

0x4f97,	// (0x00007622) eswt_control_pane_g2_copy2_ParamLimits

0x4f97,	// (0x00007622) eswt_control_pane_g2_copy2

0x4fa4,	// (0x0000762f) eswt_control_pane_g3_copy2_ParamLimits

0x4fa4,	// (0x0000762f) eswt_control_pane_g3_copy2

0x4fb1,	// (0x0000763c) eswt_control_pane_g4_copy2_ParamLimits

0x4fb1,	// (0x0000763c) eswt_control_pane_g4_copy2

0xddc1,	// (0x0001044c) common_borders_pane_cp4

0x5017,	// (0x000076a2) separator_horizontal_pane_g1

0x5020,	// (0x000076ab) separator_horizontal_pane_g2

0x5029,	// (0x000076b4) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x00012296) separator_horizontal_pane_g

0x4f8a,	// (0x00007615) eswt_control_pane_g1_copy3_ParamLimits

0x4f8a,	// (0x00007615) eswt_control_pane_g1_copy3

0x4f97,	// (0x00007622) eswt_control_pane_g2_copy3_ParamLimits

0x4f97,	// (0x00007622) eswt_control_pane_g2_copy3

0x4fa4,	// (0x0000762f) eswt_control_pane_g3_copy3_ParamLimits

0x4fa4,	// (0x0000762f) eswt_control_pane_g3_copy3

0x4fb1,	// (0x0000763c) eswt_control_pane_g4_copy3_ParamLimits

0x4fb1,	// (0x0000763c) eswt_control_pane_g4_copy3

0xddc1,	// (0x0001044c) common_borders_pane_cp5

0x5032,	// (0x000076bd) separator_vertical_pane_g1

0x503b,	// (0x000076c6) separator_vertical_pane_g2

0x5044,	// (0x000076cf) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x0001229d) separator_vertical_pane_g

0x4f8a,	// (0x00007615) eswt_control_pane_g1_copy4_ParamLimits

0x4f8a,	// (0x00007615) eswt_control_pane_g1_copy4

0x4f97,	// (0x00007622) eswt_control_pane_g2_copy4_ParamLimits

0x4f97,	// (0x00007622) eswt_control_pane_g2_copy4

0x4fa4,	// (0x0000762f) eswt_control_pane_g3_copy4_ParamLimits

0x4fa4,	// (0x0000762f) eswt_control_pane_g3_copy4

0x4fb1,	// (0x0000763c) eswt_control_pane_g4_copy4_ParamLimits

0x4fb1,	// (0x0000763c) eswt_control_pane_g4_copy4

0xbfab,	// (0x0000e636) eswt_ctrl_combo_button_pane

0xbfb3,	// (0x0000e63e) eswt_ctrl_input_pane

0xbfbb,	// (0x0000e646) popup_choice_list_window_cp70

0xbfc3,	// (0x0000e64e) eswt_ctrl_input_pane_t1

0xddc1,	// (0x0001044c) input_focus_pane_cp70

0x4096,	// (0x00006721) bg_button_pane_cp70_ParamLimits

0x4096,	// (0x00006721) bg_button_pane_cp70

0xbfd1,	// (0x0000e65c) eswt_ctrl_combo_button_pane_g1

0x507b,	// (0x00007706) wait_bar_pane_cp70

0x12cd,	// (0x00003958) bg_popup_window_pane_cp70_ParamLimits

0x12cd,	// (0x00003958) bg_popup_window_pane_cp70

0x5083,	// (0x0000770e) popup_eswt_tasktip_window_t1

0x5099,	// (0x00007724) wait_bar_pane_cp71_ParamLimits

0x5099,	// (0x00007724) wait_bar_pane_cp71

0x50a5,	// (0x00007730) grid_eswt_app_pane

0xed52,	// (0x000113dd) scroll_pane_cp70

0xbfd9,	// (0x0000e664) cell_eswt_app_pane_ParamLimits

0xbfd9,	// (0x0000e664) cell_eswt_app_pane

0xc00b,	// (0x0000e696) cell_eswt_app_pane_g1_ParamLimits

0xc00b,	// (0x0000e696) cell_eswt_app_pane_g1

0xc03a,	// (0x0000e6c5) cell_eswt_app_pane_g2_ParamLimits

0xc03a,	// (0x0000e6c5) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x000122a4) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x000122a4) cell_eswt_app_pane_g

0xc063,	// (0x0000e6ee) cell_eswt_app_pane_t1_ParamLimits

0xc063,	// (0x0000e6ee) cell_eswt_app_pane_t1

0x516a,	// (0x000077f5) grid_highlight_pane_cp70_ParamLimits

0x516a,	// (0x000077f5) grid_highlight_pane_cp70

0xf43f,	// (0x00011aca) set_content_pane_g1

0xa5e9,	// (0x0000cc74) status_small_volume_pane

0x5176,	// (0x00007801) status_small_volume_pane_g1

0x517e,	// (0x00007809) volume_small2_pane

0x5187,	// (0x00007812) volume_small2_pane_g1

0x5190,	// (0x0000781b) volume_small2_pane_g2

0x5199,	// (0x00007824) volume_small2_pane_g3

0x51a2,	// (0x0000782d) volume_small2_pane_g4

0x51ab,	// (0x00007836) volume_small2_pane_g5

0x51b4,	// (0x0000783f) volume_small2_pane_g6

0x51bd,	// (0x00007848) volume_small2_pane_g7

0x51c6,	// (0x00007851) volume_small2_pane_g8

0x51cf,	// (0x0000785a) volume_small2_pane_g9

0x51d8,	// (0x00007863) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x000122a9) volume_small2_pane_g

0x46ca,	// (0x00006d55) fep_vkb_top_text_pane_g1_ParamLimits

0xbf0d,	// (0x0000e598) fep_vkb_top_text_pane_t1_ParamLimits

0x4a31,	// (0x000070bc) popup_preview_fixed_window_g3_ParamLimits

0x4a31,	// (0x000070bc) popup_preview_fixed_window_g3

0xae75,	// (0x0000d500) popup_toolbar_trans_pane

0xb83a,	// (0x0000dec5) aid_height_set_list_ParamLimits

0x294f,	// (0x00004fda) aid_size_parent_ParamLimits

0x0541,	// (0x00002bcc) list_highlight_pane_cp2_ParamLimits

0xf43f,	// (0x00011aca) set_content_pane_g1_ParamLimits

0xba2f,	// (0x0000e0ba) list_single_image_pane_ParamLimits

0xba2f,	// (0x0000e0ba) list_single_image_pane

0xc095,	// (0x0000e720) aid_size_cell_image_ParamLimits

0xc095,	// (0x0000e720) aid_size_cell_image

0xc0a2,	// (0x0000e72d) grid_single_image_pane_ParamLimits

0xc0a2,	// (0x0000e72d) grid_single_image_pane

0xe78b,	// (0x00010e16) list_single_image_pane_g1_ParamLimits

0xe78b,	// (0x00010e16) list_single_image_pane_g1

0xe797,	// (0x00010e22) list_single_image_pane_g2_ParamLimits

0xe797,	// (0x00010e22) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x000122be) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x000122be) list_single_image_pane_g

0x51fc,	// (0x00007887) list_single_image_pane_t1_ParamLimits

0x51fc,	// (0x00007887) list_single_image_pane_t1

0xc0b0,	// (0x0000e73b) cell_image_list_pane_ParamLimits

0xc0b0,	// (0x0000e73b) cell_image_list_pane

0xc0c4,	// (0x0000e74f) cell_image_list_pane_g1

0xc0cd,	// (0x0000e758) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x000122c3) cell_image_list_pane_g

0x523a,	// (0x000078c5) aid_size_cell_tb_trans_pane

0xe760,	// (0x00010deb) bg_tb_trans_pane

0x524c,	// (0x000078d7) grid_tb_trans_pane

0x1130,	// (0x000037bb) bg_tb_trans_pane_g1

0x1138,	// (0x000037c3) bg_tb_trans_pane_g2

0x1140,	// (0x000037cb) bg_tb_trans_pane_g3

0x1148,	// (0x000037d3) bg_tb_trans_pane_g4

0x1150,	// (0x000037db) bg_tb_trans_pane_g5

0x1168,	// (0x000037f3) bg_tb_trans_pane_g6

0x1170,	// (0x000037fb) bg_tb_trans_pane_g7

0x1158,	// (0x000037e3) bg_tb_trans_pane_g8

0x1160,	// (0x000037eb) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x000122c8) bg_tb_trans_pane_g

0x5260,	// (0x000078eb) cell_toolbar_trans_pane_ParamLimits

0x5260,	// (0x000078eb) cell_toolbar_trans_pane

0x40d1,	// (0x0000675c) cell_toolbar_trans_pane_g1

0xbc65,	// (0x0000e2f0) list_form2_midp_pane_t1

0xbc73,	// (0x0000e2fe) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x00012171) list_form2_midp_pane_t

0x3cbb,	// (0x00006346) scroll_pane_cp51_ParamLimits

0x3ed8,	// (0x00006563) form2_midp_wait_pane_g1

0x3ee1,	// (0x0000656c) form2_midp_wait_pane_g2

0x3eea,	// (0x00006575) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x00012186) form2_midp_wait_pane_g

0xe00a,	// (0x00010695) list_highlight_pane_cp21_ParamLimits

0x3f2e,	// (0x000065b9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x3f3d,	// (0x000065c8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2b70,	// (0x000051fb) list_single_2graphic_im_pane_ParamLimits

0x2b70,	// (0x000051fb) list_single_2graphic_im_pane

0xc0d6,	// (0x0000e761) list_single_2graphic_im_pane_g1_ParamLimits

0xc0d6,	// (0x0000e761) list_single_2graphic_im_pane_g1

0xc0e7,	// (0x0000e772) list_single_2graphic_im_pane_g2_ParamLimits

0xc0e7,	// (0x0000e772) list_single_2graphic_im_pane_g2

0xc0f3,	// (0x0000e77e) list_single_2graphic_im_pane_g3_ParamLimits

0xc0f3,	// (0x0000e77e) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x000122db) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x000122db) list_single_2graphic_im_pane_g

0xc107,	// (0x0000e792) list_single_2graphic_im_pane_t1_ParamLimits

0xc107,	// (0x0000e792) list_single_2graphic_im_pane_t1

0x4a3d,	// (0x000070c8) list_single_graphic_2heading_pane_fp_ParamLimits

0x4a3d,	// (0x000070c8) list_single_graphic_2heading_pane_fp

0x4a85,	// (0x00007110) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4a85,	// (0x00007110) list_single_graphic_2heading_pane_fp_g1

0x4a56,	// (0x000070e1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4a56,	// (0x000070e1) list_single_graphic_2heading_pane_fp_g2

0x49af,	// (0x0000703a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x49af,	// (0x0000703a) list_single_graphic_2heading_pane_fp_g3

0x49bb,	// (0x00007046) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x49bb,	// (0x00007046) list_single_graphic_2heading_pane_fp_g4

0x4a62,	// (0x000070ed) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4a62,	// (0x000070ed) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x00012209) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00012209) list_single_graphic_2heading_pane_fp_g

0x52f4,	// (0x0000797f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x52f4,	// (0x0000797f) list_single_graphic_2heading_pane_fp_t1

0x4abd,	// (0x00007148) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4abd,	// (0x00007148) list_single_graphic_2heading_pane_fp_t2

0x530a,	// (0x00007995) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x530a,	// (0x00007995) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x000122e4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x000122e4) list_single_graphic_2heading_pane_fp_t

0x4306,	// (0x00006991) fep_hwr_write_pane_g5_ParamLimits

0x4306,	// (0x00006991) fep_hwr_write_pane_g5

0x4312,	// (0x0000699d) fep_hwr_write_pane_g6_ParamLimits

0x4312,	// (0x0000699d) fep_hwr_write_pane_g6

0x4f59,	// (0x000075e4) eswt_shell_pane_ParamLimits

0x12cd,	// (0x00003958) bg_popup_window_pane_cp18_ParamLimits

0x27f5,	// (0x00004e80) heading_pane_cp70

0x5083,	// (0x0000770e) popup_eswt_tasktip_window_t1_ParamLimits

0xaf3f,	// (0x0000d5ca) aid_touch_tab_arrow_left

0xaf55,	// (0x0000d5e0) aid_touch_tab_arrow_right

0xdfa2,	// (0x0001062d) title_pane_g3_ParamLimits

0xdfa2,	// (0x0001062d) title_pane_g3

0xe6ba,	// (0x00010d45) set_value_pane_g1

0xae75,	// (0x0000d500) popup_toolbar_trans_pane_ParamLimits

0x523a,	// (0x000078c5) aid_size_cell_tb_trans_pane_ParamLimits

0xe760,	// (0x00010deb) bg_tb_trans_pane_ParamLimits

0x524c,	// (0x000078d7) grid_tb_trans_pane_ParamLimits

0xe1e0,	// (0x0001086b) cont_note_pane_ParamLimits

0xe1e0,	// (0x0001086b) cont_note_pane

0xe43d,	// (0x00010ac8) cont_snote2_single_text_pane_ParamLimits

0xe43d,	// (0x00010ac8) cont_snote2_single_text_pane

0xe43d,	// (0x00010ac8) cont_snote2_single_graphic_pane_ParamLimits

0xe43d,	// (0x00010ac8) cont_snote2_single_graphic_pane

0x1966,	// (0x00003ff1) cont_note_wait_pane_ParamLimits

0x1966,	// (0x00003ff1) cont_note_wait_pane

0x1966,	// (0x00003ff1) cont_note_image_pane_ParamLimits

0x1966,	// (0x00003ff1) cont_note_image_pane

0x5320,	// (0x000079ab) popup_note2_window_g1_ParamLimits

0x5320,	// (0x000079ab) popup_note2_window_g1

0x5351,	// (0x000079dc) popup_note2_window_t1_ParamLimits

0x5351,	// (0x000079dc) popup_note2_window_t1

0x5396,	// (0x00007a21) popup_note2_window_t2_ParamLimits

0x5396,	// (0x00007a21) popup_note2_window_t2

0x53db,	// (0x00007a66) popup_note2_window_t3_ParamLimits

0x53db,	// (0x00007a66) popup_note2_window_t3

0x5420,	// (0x00007aab) popup_note2_window_t4_ParamLimits

0x5420,	// (0x00007aab) popup_note2_window_t4

0xe264,	// (0x000108ef) popup_note2_window_t5_ParamLimits

0xe264,	// (0x000108ef) popup_note2_window_t5

0x0004,

0xfc65,	// (0x000122f0) popup_note2_window_t_ParamLimits

0xfc65,	// (0x000122f0) popup_note2_window_t

0x544f,	// (0x00007ada) popup_note2_image_window_g1_ParamLimits

0x544f,	// (0x00007ada) popup_note2_image_window_g1

0x545b,	// (0x00007ae6) popup_note2_image_window_g2_ParamLimits

0x545b,	// (0x00007ae6) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x000122fb) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x000122fb) popup_note2_image_window_g

0x546d,	// (0x00007af8) popup_note2_image_window_t1_ParamLimits

0x546d,	// (0x00007af8) popup_note2_image_window_t1

0x5485,	// (0x00007b10) popup_note2_image_window_t2_ParamLimits

0x5485,	// (0x00007b10) popup_note2_image_window_t2

0x549d,	// (0x00007b28) popup_note2_image_window_t3_ParamLimits

0x549d,	// (0x00007b28) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x00012300) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x00012300) popup_note2_image_window_t

0x1974,	// (0x00003fff) popup_note2_wait_window_g1_ParamLimits

0x1974,	// (0x00003fff) popup_note2_wait_window_g1

0x54b9,	// (0x00007b44) popup_note2_wait_window_g2_ParamLimits

0x54b9,	// (0x00007b44) popup_note2_wait_window_g2

0x198c,	// (0x00004017) popup_note2_wait_window_g3_ParamLimits

0x198c,	// (0x00004017) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x00012307) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x00012307) popup_note2_wait_window_g

0x54c5,	// (0x00007b50) popup_note2_wait_window_t1_ParamLimits

0x54c5,	// (0x00007b50) popup_note2_wait_window_t1

0x54e3,	// (0x00007b6e) popup_note2_wait_window_t2_ParamLimits

0x54e3,	// (0x00007b6e) popup_note2_wait_window_t2

0x5501,	// (0x00007b8c) popup_note2_wait_window_t3_ParamLimits

0x5501,	// (0x00007b8c) popup_note2_wait_window_t3

0x5513,	// (0x00007b9e) popup_note2_wait_window_t4_ParamLimits

0x5513,	// (0x00007b9e) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0001230e) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0001230e) popup_note2_wait_window_t

0x5525,	// (0x00007bb0) wait_bar2_pane_ParamLimits

0x5525,	// (0x00007bb0) wait_bar2_pane

0x553d,	// (0x00007bc8) popup_snote2_single_text_window_g1_ParamLimits

0x553d,	// (0x00007bc8) popup_snote2_single_text_window_g1

0x5565,	// (0x00007bf0) popup_snote2_single_text_window_t1_ParamLimits

0x5565,	// (0x00007bf0) popup_snote2_single_text_window_t1

0x55b1,	// (0x00007c3c) popup_snote2_single_text_window_t2_ParamLimits

0x55b1,	// (0x00007c3c) popup_snote2_single_text_window_t2

0x55fd,	// (0x00007c88) popup_snote2_single_text_window_t3_ParamLimits

0x55fd,	// (0x00007c88) popup_snote2_single_text_window_t3

0x563e,	// (0x00007cc9) popup_snote2_single_text_window_t4_ParamLimits

0x563e,	// (0x00007cc9) popup_snote2_single_text_window_t4

0x5674,	// (0x00007cff) popup_snote2_single_text_window_t5_ParamLimits

0x5674,	// (0x00007cff) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x00012317) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x00012317) popup_snote2_single_text_window_t

0x569f,	// (0x00007d2a) popup_snote2_single_graphic_window_g1_ParamLimits

0x569f,	// (0x00007d2a) popup_snote2_single_graphic_window_g1

0x56c7,	// (0x00007d52) popup_snote2_single_graphic_window_g2_ParamLimits

0x56c7,	// (0x00007d52) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x00012322) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x00012322) popup_snote2_single_graphic_window_g

0x56ef,	// (0x00007d7a) popup_snote2_single_graphic_window_t1_ParamLimits

0x56ef,	// (0x00007d7a) popup_snote2_single_graphic_window_t1

0x573b,	// (0x00007dc6) popup_snote2_single_graphic_window_t2_ParamLimits

0x573b,	// (0x00007dc6) popup_snote2_single_graphic_window_t2

0x55fd,	// (0x00007c88) popup_snote2_single_graphic_window_t3_ParamLimits

0x55fd,	// (0x00007c88) popup_snote2_single_graphic_window_t3

0x563e,	// (0x00007cc9) popup_snote2_single_graphic_window_t4_ParamLimits

0x563e,	// (0x00007cc9) popup_snote2_single_graphic_window_t4

0x5674,	// (0x00007cff) popup_snote2_single_graphic_window_t5_ParamLimits

0x5674,	// (0x00007cff) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x00012327) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x00012327) popup_snote2_single_graphic_window_t

0x3b1a,	// (0x000061a5) clock_nsta_pane_cp2_t1

0x3b1a,	// (0x000061a5) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x00012147) clock_nsta_pane_cp2_t

0xe77f,	// (0x00010e0a) form_field_data_wide_pane_g1_ParamLimits

0xe78b,	// (0x00010e16) form_field_data_wide_pane_g2_ParamLimits

0xe78b,	// (0x00010e16) form_field_data_wide_pane_g2

0xe797,	// (0x00010e22) form_field_data_wide_pane_g3_ParamLimits

0xe797,	// (0x00010e22) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00011d01) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00011d01) form_field_data_wide_pane_g

0xbb71,	// (0x0000e1fc) grid_touch_3_pane_ParamLimits

0xbb71,	// (0x0000e1fc) grid_touch_3_pane

0xc138,	// (0x0000e7c3) cell_touch_3_pane_ParamLimits

0xc138,	// (0x0000e7c3) cell_touch_3_pane

0x40d1,	// (0x0000675c) cell_touch_3_pane_g1

0x40d1,	// (0x0000675c) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x000121cc) cell_touch_3_pane_g

0xe296,	// (0x00010921) cont_query_data_pane

0xe29e,	// (0x00010929) cont_query_data_pane_cp1

0x57ba,	// (0x00007e45) button_value_adjust_pane_cp7

0x57c2,	// (0x00007e4d) query_popup_pane_cp3

0xef94,	// (0x0001161f) bg_popup_sub_pane_cp22_ParamLimits

0xefaa,	// (0x00011635) navi_navi_volume_pane_cp2

0xefc5,	// (0x00011650) popup_side_volume_key_window_g2

0xefd4,	// (0x0001165f) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00011d97) popup_side_volume_key_window_g

0xeff1,	// (0x0001167c) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00011d9e) popup_side_volume_key_window_t

0xf342,	// (0x000119cd) popup_side_volume_key_window_ParamLimits

0x9c76,	// (0x0000c301) list_double_graphic_pane_g4_ParamLimits

0x9c76,	// (0x0000c301) list_double_graphic_pane_g4

0xba06,	// (0x0000e091) list_single_2heading_msg_pane_ParamLimits

0xba06,	// (0x0000e091) list_single_2heading_msg_pane

0xc182,	// (0x0000e80d) list_single_2heading_msg_pane_g1_ParamLimits

0xc182,	// (0x0000e80d) list_single_2heading_msg_pane_g1

0xc18e,	// (0x0000e819) list_single_2heading_msg_pane_g2_ParamLimits

0xc18e,	// (0x0000e819) list_single_2heading_msg_pane_g2

0xc1a1,	// (0x0000e82c) list_single_2heading_msg_pane_g3_ParamLimits

0xc1a1,	// (0x0000e82c) list_single_2heading_msg_pane_g3

0xc1ad,	// (0x0000e838) list_single_2heading_msg_pane_g4_ParamLimits

0xc1ad,	// (0x0000e838) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x00012332) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x00012332) list_single_2heading_msg_pane_g

0xc1c5,	// (0x0000e850) list_single_2heading_msg_pane_t1_ParamLimits

0xc1c5,	// (0x0000e850) list_single_2heading_msg_pane_t1

0xc1ed,	// (0x0000e878) list_single_2heading_msg_pane_t2_ParamLimits

0xc1ed,	// (0x0000e878) list_single_2heading_msg_pane_t2

0xc258,	// (0x0000e8e3) list_single_2heading_msg_pane_t3_ParamLimits

0xc258,	// (0x0000e8e3) list_single_2heading_msg_pane_t3

0x58b3,	// (0x00007f3e) list_single_2heading_msg_pane_t4_ParamLimits

0x58b3,	// (0x00007f3e) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x0001233b) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x0001233b) list_single_2heading_msg_pane_t

0xdfae,	// (0x00010639) title_pane_g4_ParamLimits

0xdfae,	// (0x00010639) title_pane_g4

0xeb43,	// (0x000111ce) title_pane_stacon_g3_ParamLimits

0xeb43,	// (0x000111ce) title_pane_stacon_g3

0x52b7,	// (0x00007942) list_single_2graphic_im_pane_g4_ParamLimits

0x52b7,	// (0x00007942) list_single_2graphic_im_pane_g4

0x2542,	// (0x00004bcd) popup_side_volume_key_window_cp

0x2fe1,	// (0x0000566c) main_idle_act2_pane_t1

0x1178,	// (0x00003803) toolbar_button_pane_g10

0x9b2d,	// (0x0000c1b8) popup_toolbar_window_cp1

0x3b0b,	// (0x00006196) clock_nsta_pane_cp_t1

0x3b0b,	// (0x00006196) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x00012142) clock_nsta_pane_cp_t

0xefaa,	// (0x00011635) navi_navi_volume_pane_cp2_ParamLimits

0xefb9,	// (0x00011644) popup_side_volume_key_window_g1_ParamLimits

0xefc5,	// (0x00011650) popup_side_volume_key_window_g2_ParamLimits

0xefd4,	// (0x0001165f) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00011d97) popup_side_volume_key_window_g_ParamLimits

0x4140,	// (0x000067cb) fep_hwr_aid_pane

0x41e9,	// (0x00006874) bg_fep_hwr_top_pane_g4_ParamLimits

0x4209,	// (0x00006894) fep_hwr_top_pane_g1_ParamLimits

0x421b,	// (0x000068a6) fep_hwr_top_pane_g2_ParamLimits

0x422d,	// (0x000068b8) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x00012197) fep_hwr_top_pane_g_ParamLimits

0x4242,	// (0x000068cd) fep_hwr_top_text_pane_ParamLimits

0x22f7,	// (0x00004982) aid_touch_tab_arrow_arrow_2

0x2300,	// (0x0000498b) aid_touch_tab_arrow_left_2

0x4154,	// (0x000067df) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x418b,	// (0x00006816) fep_hwr_prediction_pane

0x44c4,	// (0x00006b4f) fep_vkb_prediction_pane

0xbeed,	// (0x0000e578) fep_vkb_side_pane_g3_ParamLimits

0xbeed,	// (0x0000e578) fep_vkb_side_pane_g3

0x4576,	// (0x00006c01) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4c7f,	// (0x0000730a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4c8c,	// (0x00007317) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x00012241) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x58d8,	// (0x00007f63) fep_hwr_prediction_pane_g1

0x58e2,	// (0x00007f6d) fep_hwr_prediction_pane_g2

0x58ea,	// (0x00007f75) fep_hwr_prediction_pane_g3

0x58f2,	// (0x00007f7d) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x00012344) fep_hwr_prediction_pane_g

0x58d8,	// (0x00007f63) fep_vkb_prediction_pane_g1

0x58fa,	// (0x00007f85) fep_vkb_prediction_pane_g2

0x5902,	// (0x00007f8d) fep_vkb_prediction_pane_g3

0x590a,	// (0x00007f95) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0001234d) fep_vkb_prediction_pane_g

0x28b6,	// (0x00004f41) slider_set_pane_g3

0x28ca,	// (0x00004f55) slider_set_pane_g4

0x28e2,	// (0x00004f6d) slider_set_pane_g5

0x28b6,	// (0x00004f41) slider_set_pane_g6

0x28f8,	// (0x00004f83) slider_set_pane_g7

0x2ad4,	// (0x0000515f) slider_form_pane_g3

0x2add,	// (0x00005168) slider_form_pane_g4

0x2ae5,	// (0x00005170) slider_form_pane_g5

0x2ad4,	// (0x0000515f) slider_form_pane_g6

0xb9a9,	// (0x0000e034) slider_form_pane_g7

0x32f5,	// (0x00005980) slider_set_pane_vc_g3

0x32fe,	// (0x00005989) slider_set_pane_vc_g4

0x3307,	// (0x00005992) slider_set_pane_vc_g5

0x32f5,	// (0x00005980) slider_set_pane_vc_g6

0x3310,	// (0x0000599b) slider_set_pane_vc_g7

0x37be,	// (0x00005e49) slider_form_pane_vc_g1

0x37c7,	// (0x00005e52) slider_form_pane_vc_g2

0x37d0,	// (0x00005e5b) slider_form_pane_vc_g3

0x37be,	// (0x00005e49) slider_form_pane_vc_g4

0x37d9,	// (0x00005e64) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x00012114) slider_form_pane_vc_g

0xddc1,	// (0x0001044c) main_idle_act3_pane

0x5912,	// (0x00007f9d) ai3_links_pane

0xc2c6,	// (0x0000e951) popup_ai3_data_window_ParamLimits

0xc2c6,	// (0x0000e951) popup_ai3_data_window

0xddc1,	// (0x0001044c) grid_ai3_links_pane

0xc2e4,	// (0x0000e96f) cell_ai3_links_pane_ParamLimits

0xc2e4,	// (0x0000e96f) cell_ai3_links_pane

0x5953,	// (0x00007fde) bg_popup_sub_pane_cp11

0x5960,	// (0x00007feb) cell_ai3_links_pane_g1

0xddc1,	// (0x0001044c) bg_popup_sub_pane_cp12

0x5985,	// (0x00008010) heading_ai3_data_pane

0x598d,	// (0x00008018) list_ai3_gene_pane

0x5999,	// (0x00008024) popup_ai3_data_window_g1

0x59a1,	// (0x0000802c) heading_ai3_data_pane_g1

0x59a9,	// (0x00008034) heading_ai3_data_pane_t1

0x59b7,	// (0x00008042) list_double_ai3_gene_pane_ParamLimits

0x59b7,	// (0x00008042) list_double_ai3_gene_pane

0x59c4,	// (0x0000804f) list_single_ai3_gene_pane_ParamLimits

0x59c4,	// (0x0000804f) list_single_ai3_gene_pane

0x4096,	// (0x00006721) list_highlight_pane_cp7_ParamLimits

0x4096,	// (0x00006721) list_highlight_pane_cp7

0x59d1,	// (0x0000805c) list_single_a13_gene_pane_t1_ParamLimits

0x59d1,	// (0x0000805c) list_single_a13_gene_pane_t1

0x59e8,	// (0x00008073) list_single_ai3_gene_pane_g1

0x59f1,	// (0x0000807c) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x00012356) list_single_ai3_gene_pane_g

0x59f9,	// (0x00008084) list_double_ai3_gene_pane_g1_ParamLimits

0x59f9,	// (0x00008084) list_double_ai3_gene_pane_g1

0x5a05,	// (0x00008090) list_double_ai3_gene_pane_t1_ParamLimits

0x5a05,	// (0x00008090) list_double_ai3_gene_pane_t1

0x5a21,	// (0x000080ac) list_double_ai3_gene_pane_t2_ParamLimits

0x5a21,	// (0x000080ac) list_double_ai3_gene_pane_t2

0x5a36,	// (0x000080c1) list_double_ai3_gene_pane_t3_ParamLimits

0x5a36,	// (0x000080c1) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x0001235b) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x0001235b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x57d3,	// (0x00007e5e) aid_size_min_col_2

0xc16c,	// (0x0000e7f7) aid_size_min_msg_ParamLimits

0xc16c,	// (0x0000e7f7) aid_size_min_msg

0xbf01,	// (0x0000e58c) fep_vkb_top_text_pane_g2_ParamLimits

0xbf01,	// (0x0000e58c) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x000121c7) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x000121c7) fep_vkb_top_text_pane_g

0xddc1,	// (0x0001044c) main_hc_apps_shell_pane

0x5a53,	// (0x000080de) grid_hc_apps_pane_ParamLimits

0x5a53,	// (0x000080de) grid_hc_apps_pane

0x5a62,	// (0x000080ed) list_hc_apps_pane

0x5a6a,	// (0x000080f5) scroll_pane_cp37_ParamLimits

0x5a6a,	// (0x000080f5) scroll_pane_cp37

0xc2fe,	// (0x0000e989) cell_hc_apps_pane_ParamLimits

0xc2fe,	// (0x0000e989) cell_hc_apps_pane

0xc3c8,	// (0x0000ea53) cell_hc_apps_pane_g1_ParamLimits

0xc3c8,	// (0x0000ea53) cell_hc_apps_pane_g1

0x5b5f,	// (0x000081ea) cell_hc_apps_pane_g2_ParamLimits

0x5b5f,	// (0x000081ea) cell_hc_apps_pane_g2

0x5b7b,	// (0x00008206) cell_hc_apps_pane_g3_ParamLimits

0x5b7b,	// (0x00008206) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x00012362) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x00012362) cell_hc_apps_pane_g

0xc3f5,	// (0x0000ea80) cell_hc_apps_pane_t1_ParamLimits

0xc3f5,	// (0x0000ea80) cell_hc_apps_pane_t1

0xe1e0,	// (0x0001086b) grid_highlight_pane_cp10_ParamLimits

0xe1e0,	// (0x0001086b) grid_highlight_pane_cp10

0xc435,	// (0x0000eac0) list_single_hc_apps_pane_ParamLimits

0xc435,	// (0x0000eac0) list_single_hc_apps_pane

0xc46f,	// (0x0000eafa) list_single_hc_apps_pane_g1

0xc488,	// (0x0000eb13) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x00012369) list_single_hc_apps_pane_g

0xc4a1,	// (0x0000eb2c) list_single_hc_apps_pane_g2_copy1

0xc4bd,	// (0x0000eb48) list_single_hc_apps_pane_t1

0xe00a,	// (0x00010695) bg_set_opt_pane_cp_ParamLimits

0xe018,	// (0x000106a3) setting_slider_pane_t1_ParamLimits

0xe031,	// (0x000106bc) setting_slider_pane_t2_ParamLimits

0xe04b,	// (0x000106d6) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00011be9) setting_slider_pane_t_ParamLimits

0xe063,	// (0x000106ee) slider_set_pane_ParamLimits

0x039e,	// (0x00002a29) control_pane_g5_ParamLimits

0x039e,	// (0x00002a29) control_pane_g5

0x289d,	// (0x00004f28) slider_set_pane_g1_ParamLimits

0x28aa,	// (0x00004f35) slider_set_pane_g2_ParamLimits

0x28b6,	// (0x00004f41) slider_set_pane_g3_ParamLimits

0x28ca,	// (0x00004f55) slider_set_pane_g4_ParamLimits

0x28e2,	// (0x00004f6d) slider_set_pane_g5_ParamLimits

0x28b6,	// (0x00004f41) slider_set_pane_g6_ParamLimits

0x28f8,	// (0x00004f83) slider_set_pane_g7_ParamLimits

0xf953,	// (0x00011fde) slider_set_pane_g_ParamLimits

0xf3ea,	// (0x00011a75) navi_icon_text_pane_ParamLimits

0xaf06,	// (0x0000d591) aid_fill_nsta_2_ParamLimits

0xaf3f,	// (0x0000d5ca) aid_touch_tab_arrow_left_ParamLimits

0xaf55,	// (0x0000d5e0) aid_touch_tab_arrow_right_ParamLimits

0xaff0,	// (0x0000d67b) clock_nsta_pane_ParamLimits

0xb6d5,	// (0x0000dd60) navi_icon_pane_g1_ParamLimits

0xb6e1,	// (0x0000dd6c) navi_text_pane_t1_ParamLimits

0xbc47,	// (0x0000e2d2) navi_icon_text_pane_g1_ParamLimits

0xbc53,	// (0x0000e2de) navi_icon_text_pane_t1_ParamLimits

0xc46f,	// (0x0000eafa) list_single_hc_apps_pane_g1_ParamLimits

0xc488,	// (0x0000eb13) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x00012369) list_single_hc_apps_pane_g_ParamLimits

0xc4a1,	// (0x0000eb2c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc4bd,	// (0x0000eb48) list_single_hc_apps_pane_t1_ParamLimits

0x96b3,	// (0x0000bd3e) popup_toolbar2_fixed_window_ParamLimits

0x96b3,	// (0x0000bd3e) popup_toolbar2_fixed_window

0xae6b,	// (0x0000d4f6) popup_toolbar2_float_window

0xddc1,	// (0x0001044c) bg_popup_sub_pane_cp27

0x5c98,	// (0x00008323) grid_toolbar2_float_pane

0xddc1,	// (0x0001044c) bg_popup_sub_pane_cp26

0x5c98,	// (0x00008323) grid_toolbar2_fixed_pane

0xc4eb,	// (0x0000eb76) cell_toolbar2_fixed_pane_ParamLimits

0xc4eb,	// (0x0000eb76) cell_toolbar2_fixed_pane

0xc508,	// (0x0000eb93) cell_toolbar2_fixed_pane_g1

0x5cb9,	// (0x00008344) toolbar2_fixed_button_pane

0x1130,	// (0x000037bb) toolbar2_fixed_button_pane_g1

0x1138,	// (0x000037c3) toolbar2_fixed_button_pane_g2

0x1140,	// (0x000037cb) toolbar2_fixed_button_pane_g3

0x1148,	// (0x000037d3) toolbar2_fixed_button_pane_g4

0x1150,	// (0x000037db) toolbar2_fixed_button_pane_g5

0x1158,	// (0x000037e3) toolbar2_fixed_button_pane_g6

0x1160,	// (0x000037eb) toolbar2_fixed_button_pane_g7

0x1168,	// (0x000037f3) toolbar2_fixed_button_pane_g8

0x1170,	// (0x000037fb) toolbar2_fixed_button_pane_g9

0x0008,

0xf855,	// (0x00011ee0) toolbar2_fixed_button_pane_g

0x5cc1,	// (0x0000834c) cell_toolbar2_float_pane_ParamLimits

0x5cc1,	// (0x0000834c) cell_toolbar2_float_pane

0x5cd2,	// (0x0000835d) cell_toolbar2_float_pane_g1

0x5cb9,	// (0x00008344) toolbar2_fixed_button_pane_cp

0xbde9,	// (0x0000e474) fep_vkb_accented_list_pane_ParamLimits

0xbde9,	// (0x0000e474) fep_vkb_accented_list_pane

0x48e7,	// (0x00006f72) bg_popup_fep_shadow_pane_g9

0xf546,	// (0x00011bd1) bg_popup_fep_shadow_pane_cp3

0xe910,	// (0x00010f9b) list_accented_list_pane

0x5cdb,	// (0x00008366) list_single_accented_list_pane_ParamLimits

0x5cdb,	// (0x00008366) list_single_accented_list_pane

0xf546,	// (0x00011bd1) list_highlight_pane_cp10

0x5cec,	// (0x00008377) list_single_accented_list_pane_t1

0xad87,	// (0x0000d412) popup_slider_window_ParamLimits

0xad87,	// (0x0000d412) popup_slider_window

0x57ca,	// (0x00007e55) aid_indentation_list_msg

0xc613,	// (0x0000ec9e) bg_popup_window_pane_cp19

0x5e26,	// (0x000084b1) popup_slider_window_g1

0x5e42,	// (0x000084cd) popup_slider_window_g2

0x5e5e,	// (0x000084e9) popup_slider_window_g3

0x0005,

0xfce3,	// (0x0001236e) popup_slider_window_g

0x5eba,	// (0x00008545) popup_slider_window_t1

0x5f2e,	// (0x000085b9) small_volume_slider_vertical_pane

0x40d1,	// (0x0000675c) small_volume_slider_vertical_pane_g1

0x40d1,	// (0x0000675c) small_volume_slider_vertical_pane_g2

0x5f4a,	// (0x000085d5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x00012380) small_volume_slider_vertical_pane_g

0x961d,	// (0x0000bca8) area_side_right_pane_ParamLimits

0x961d,	// (0x0000bca8) area_side_right_pane

0xc6cb,	// (0x0000ed56) aid_size_side_button_ParamLimits

0xc6cb,	// (0x0000ed56) aid_size_side_button

0xc6e4,	// (0x0000ed6f) grid_sctrl_middle_pane_ParamLimits

0xc6e4,	// (0x0000ed6f) grid_sctrl_middle_pane

0x5f87,	// (0x00008612) sctrl_sk_bottom_pane

0x5f98,	// (0x00008623) sctrl_sk_top_pane

0x5faa,	// (0x00008635) aid_touch_sctrl_top

0xe1e0,	// (0x0001086b) bg_sctrl_sk_pane_ParamLimits

0xe1e0,	// (0x0001086b) bg_sctrl_sk_pane

0x5fb7,	// (0x00008642) sctrl_sk_top_pane_g1

0x5fc4,	// (0x0000864f) sctrl_sk_top_pane_t1

0x5faa,	// (0x00008635) aid_touch_sctrl_bottom

0xe1e0,	// (0x0001086b) bg_sctrl_sk_pane_cp_ParamLimits

0xe1e0,	// (0x0001086b) bg_sctrl_sk_pane_cp

0x5fdf,	// (0x0000866a) sctrl_sk_bottom_pane_g1

0x5fc4,	// (0x0000864f) sctrl_sk_bottom_pane_t1

0xc6fe,	// (0x0000ed89) cell_sctrl_middle_pane_ParamLimits

0xc6fe,	// (0x0000ed89) cell_sctrl_middle_pane

0xc711,	// (0x0000ed9c) aid_touch_sctrl_middle_ParamLimits

0xc711,	// (0x0000ed9c) aid_touch_sctrl_middle

0xc71e,	// (0x0000eda9) bg_sctrl_middle_pane_ParamLimits

0xc71e,	// (0x0000eda9) bg_sctrl_middle_pane

0x60a9,	// (0x00008734) cell_sctrl_middle_pane_g1_ParamLimits

0x60a9,	// (0x00008734) cell_sctrl_middle_pane_g1

0xc72c,	// (0x0000edb7) cell_sctrl_middle_pane_g2_ParamLimits

0xc72c,	// (0x0000edb7) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0001238c) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0001238c) cell_sctrl_middle_pane_g

0x1130,	// (0x000037bb) bg_sctrl_middle_pane_g1

0x1138,	// (0x000037c3) bg_sctrl_middle_pane_g2

0x1140,	// (0x000037cb) bg_sctrl_middle_pane_g3

0x1148,	// (0x000037d3) bg_sctrl_middle_pane_g4

0x1150,	// (0x000037db) bg_sctrl_middle_pane_g5

0x1158,	// (0x000037e3) bg_sctrl_middle_pane_g6

0x1160,	// (0x000037eb) bg_sctrl_middle_pane_g7

0x1168,	// (0x000037f3) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x00012391) bg_sctrl_middle_pane_g

0x1170,	// (0x000037fb) bg_sctrl_middle_pane_g8_copy1

0x1130,	// (0x000037bb) bg_sctrl_sk_pane_g1

0x1138,	// (0x000037c3) bg_sctrl_sk_pane_g2

0x1140,	// (0x000037cb) bg_sctrl_sk_pane_g3

0x0008,

0xf855,	// (0x00011ee0) bg_sctrl_sk_pane_g

0xe5fb,	// (0x00010c86) aid_size_touch_scroll_bar

0x1148,	// (0x000037d3) bg_sctrl_sk_pane_g4

0x1150,	// (0x000037db) bg_sctrl_sk_pane_g5

0x1158,	// (0x000037e3) bg_sctrl_sk_pane_g6

0x1160,	// (0x000037eb) bg_sctrl_sk_pane_g7

0x1168,	// (0x000037f3) bg_sctrl_sk_pane_g8

0x1170,	// (0x000037fb) bg_sctrl_sk_pane_g9

0x05f7,	// (0x00002c82) popup_fep_china_hwr2_fs_candidate_window

0xa83f,	// (0x0000ceca) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa83f,	// (0x0000ceca) popup_fep_china_hwr2_fs_control_window

0x4576,	// (0x00006c01) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x00012387) sctrl_sk_top_pane_g

0xc738,	// (0x0000edc3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc738,	// (0x0000edc3) aid_fep_china_hwr2_fs_cell

0xc74e,	// (0x0000edd9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc74e,	// (0x0000edd9) bg_popup_fep_shadow_pane_cp4

0xc765,	// (0x0000edf0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc765,	// (0x0000edf0) bg_popup_fep_shadow_pane_cp5

0xc777,	// (0x0000ee02) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc777,	// (0x0000ee02) popup_fep_china_hwr2_fs_control_bar_grid

0xc78b,	// (0x0000ee16) popup_fep_china_hwr2_fs_control_funtion_grid

0x607d,	// (0x00008708) aid_fep_china_hwr2_fs_candi_cell

0xddc1,	// (0x0001044c) bg_popup_fep_shadow_pane_cp6

0x6087,	// (0x00008712) popup_fep_china_hwr2_fs_candidate_grid

0xc793,	// (0x0000ee1e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc793,	// (0x0000ee1e) cell_fep_china_hwr2_fs_funtion_grid

0x40d1,	// (0x0000675c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x60a9,	// (0x00008734) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x60a9,	// (0x00008734) cell_fep_china_hwr2_fs_funtion_grid_g1

0x60b7,	// (0x00008742) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x60b7,	// (0x00008742) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x000123a2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x000123a2) cell_fep_china_hwr2_fs_funtion_grid_g

0xc7ab,	// (0x0000ee36) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc7ab,	// (0x0000ee36) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc7c0,	// (0x0000ee4b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc7c0,	// (0x0000ee4b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x000123a7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x000123a7) cell_fep_china_hwr2_fs_funtion_grid_t

0x60fe,	// (0x00008789) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6106,	// (0x00008791) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x610e,	// (0x00008799) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x000123ac) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6116,	// (0x000087a1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6116,	// (0x000087a1) cell_fep_china_hwr2_fs_candidate_grid

0x6135,	// (0x000087c0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x613d,	// (0x000087c8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x40d1,	// (0x0000675c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x40d1,	// (0x0000675c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x000121cc) cell_fep_china_hwr2_fs_candidate_grid_g

0x6145,	// (0x000087d0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0c66,	// (0x000032f1) clock_nsta_pane_cp_24_ParamLimits

0x0c66,	// (0x000032f1) clock_nsta_pane_cp_24

0x0ce6,	// (0x00003371) indicator_nsta_pane_cp_24_ParamLimits

0x0ce6,	// (0x00003371) indicator_nsta_pane_cp_24

0x2144,	// (0x000047cf) heading_pane_g1

0x0001,

0xf8ba,	// (0x00011f45) heading_pane_g

0x2d70,	// (0x000053fb) grid_sct_catagory_button_pane

0x2da2,	// (0x0000542d) scroll_pane_cp5_ParamLimits

0x3cc7,	// (0x00006352) button_value_adjust_pane_cp5_ParamLimits

0x3cc7,	// (0x00006352) button_value_adjust_pane_cp5

0x3dcd,	// (0x00006458) form2_midp_time_pane_ParamLimits

0x6153,	// (0x000087de) cell_sct_catagory_button_pane_ParamLimits

0x6153,	// (0x000087de) cell_sct_catagory_button_pane

0x4096,	// (0x00006721) bg_button_pane_cp01_ParamLimits

0x4096,	// (0x00006721) bg_button_pane_cp01

0x40d1,	// (0x0000675c) cell_sct_catagory_button_pane_g1

0xae08,	// (0x0000d493) popup_tb_extension_window

0xc7dc,	// (0x0000ee67) aid_size_cell_ext_ParamLimits

0xc7dc,	// (0x0000ee67) aid_size_cell_ext

0xe43d,	// (0x00010ac8) bg_tb_trans_pane_cp1_ParamLimits

0xe43d,	// (0x00010ac8) bg_tb_trans_pane_cp1

0xc802,	// (0x0000ee8d) grid_tb_ext_pane_ParamLimits

0xc802,	// (0x0000ee8d) grid_tb_ext_pane

0xc842,	// (0x0000eecd) cell_tb_ext_pane_ParamLimits

0xc842,	// (0x0000eecd) cell_tb_ext_pane

0xc86a,	// (0x0000eef5) cell_tb_ext_pane_g1_ParamLimits

0xc86a,	// (0x0000eef5) cell_tb_ext_pane_g1

0x61e9,	// (0x00008874) cell_tb_ext_pane_t1

0xe1e0,	// (0x0001086b) list_highlight_pane_cp11_ParamLimits

0xe1e0,	// (0x0001086b) list_highlight_pane_cp11

0x96c8,	// (0x0000bd53) popup_uni_indicator_window_ParamLimits

0x96c8,	// (0x0000bd53) popup_uni_indicator_window

0xe760,	// (0x00010deb) bg_popup_sub_pane_cp14

0x6204,	// (0x0000888f) list_uniindi_pane

0x6210,	// (0x0000889b) uniindi_top_pane

0xe1e0,	// (0x0001086b) bg_uniindi_top_pane

0x6231,	// (0x000088bc) uniindi_top_pane_g1

0x6247,	// (0x000088d2) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x000123b3) uniindi_top_pane_g

0x6271,	// (0x000088fc) uniindi_top_pane_t1

0x629d,	// (0x00008928) list_single_uniindi_pane_ParamLimits

0x629d,	// (0x00008928) list_single_uniindi_pane

0x40d1,	// (0x0000675c) bg_uniindi_top_pane_g1

0x62af,	// (0x0000893a) list_single_uniindi_pane_g1

0x62c2,	// (0x0000894d) list_single_uniindi_pane_t1

0xddc1,	// (0x0001044c) control_bg_pane

0x62e7,	// (0x00008972) bg_sctrl_sk_pane_cp1

0x62f0,	// (0x0000897b) bg_sctrl_sk_pane_cp2

0x62f9,	// (0x00008984) control_bg_pane_g1

0x6302,	// (0x0000898d) control_bg_pane_g2

0x0001,

0xfd31,	// (0x000123bc) control_bg_pane_g

0x3a9d,	// (0x00006128) cell_indicator_nsta_pane_g1_ParamLimits

0xbba0,	// (0x0000e22b) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x00012130) cell_indicator_nsta_pane_g_ParamLimits

0x3e5d,	// (0x000064e8) form2_midp_time_pane_t1_ParamLimits

0x4132,	// (0x000067bd) main_idle_act4_pane_ParamLimits

0x4132,	// (0x000067bd) main_idle_act4_pane

0xae08,	// (0x0000d493) popup_tb_extension_window_ParamLimits

0xc82a,	// (0x0000eeb5) tb_ext_find_pane_ParamLimits

0xc82a,	// (0x0000eeb5) tb_ext_find_pane

0x630b,	// (0x00008996) ai_gene_pane_1_cp1

0x0105,	// (0x00002790) ai_gene_pane_2_cp1

0x6313,	// (0x0000899e) list_single_idle_plugin_calendar_pane

0x631c,	// (0x000089a7) list_single_idle_plugin_notification_pane

0x6325,	// (0x000089b0) list_single_idle_plugin_player_pane

0xc887,	// (0x0000ef12) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc887,	// (0x0000ef12) list_single_idle_plugin_shortcut_pane

0xc8af,	// (0x0000ef3a) main_idle_act4_pane_t1

0xc8c7,	// (0x0000ef52) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x000123c1) main_idle_act4_pane_t

0xc8df,	// (0x0000ef6a) middle_sk_idle_act4_pane_ParamLimits

0xc8df,	// (0x0000ef6a) middle_sk_idle_act4_pane

0xc8fb,	// (0x0000ef86) popup_clock_digital_analogue_window_cp2

0xc922,	// (0x0000efad) shortcut_wheel_idle_act4_pane_ParamLimits

0xc922,	// (0x0000efad) shortcut_wheel_idle_act4_pane

0x40d1,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g1

0x40d1,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g2

0x40d1,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g3

0x40d1,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g4

0x40d1,	// (0x0000675c) shortcut_wheel_idle_act4_pane_g5

0x63b8,	// (0x00008a43) shortcut_wheel_idle_act4_pane_g6

0x63c0,	// (0x00008a4b) shortcut_wheel_idle_act4_pane_g7

0x63c8,	// (0x00008a53) shortcut_wheel_idle_act4_pane_g8

0x63d0,	// (0x00008a5b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x000123c6) shortcut_wheel_idle_act4_pane_g

0x41e9,	// (0x00006874) middle_sk_idle_act4_pane_g1_ParamLimits

0x41e9,	// (0x00006874) middle_sk_idle_act4_pane_g1

0xc99f,	// (0x0000f02a) middle_sk_idle_act4_pane_g2_ParamLimits

0xc99f,	// (0x0000f02a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x000123e9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x000123e9) middle_sk_idle_act4_pane_g

0xc9b7,	// (0x0000f042) middle_sk_idle_act4_pane_t1_ParamLimits

0xc9b7,	// (0x0000f042) middle_sk_idle_act4_pane_t1

0xc9e6,	// (0x0000f071) grid_ai_shortcut_pane_ParamLimits

0xc9e6,	// (0x0000f071) grid_ai_shortcut_pane

0xca03,	// (0x0000f08e) list_highlight_pane_cp16_ParamLimits

0xca03,	// (0x0000f08e) list_highlight_pane_cp16

0xca10,	// (0x0000f09b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xca10,	// (0x0000f09b) list_single_idle_plugin_shortcut_pane_g1

0xca1c,	// (0x0000f0a7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xca1c,	// (0x0000f0a7) list_single_idle_plugin_shortcut_pane_g2

0xca3a,	// (0x0000f0c5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xca3a,	// (0x0000f0c5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x000123ee) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x000123ee) list_single_idle_plugin_shortcut_pane_g

0xca4f,	// (0x0000f0da) cell_ai_shortcut_pane_ParamLimits

0xca4f,	// (0x0000f0da) cell_ai_shortcut_pane

0xca65,	// (0x0000f0f0) cell_ai_shortcut_pane_g1_ParamLimits

0xca65,	// (0x0000f0f0) cell_ai_shortcut_pane_g1

0x630b,	// (0x00008996) ai_gene_pane_1_cp2

0x6501,	// (0x00008b8c) ai_gene_pane_2_cp2

0x6509,	// (0x00008b94) list_highlight_pane_cp15

0x6512,	// (0x00008b9d) list_single_idle_plugin_calendar_pane_g1

0x6509,	// (0x00008b94) list_highlight_pane_cp17

0x651a,	// (0x00008ba5) list_single_idle_plugin_calendar_pane_g1_copy1

0x6522,	// (0x00008bad) list_single_idle_plugin_player_pane_g1

0x308f,	// (0x0000571a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x000123f5) list_single_idle_plugin_player_pane_g

0x652a,	// (0x00008bb5) list_single_idle_plugin_player_pane_t1

0x6538,	// (0x00008bc3) list_single_idle_plugin_player_pane_t2

0x6546,	// (0x00008bd1) list_single_idle_plugin_player_pane_t3

0x6554,	// (0x00008bdf) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x000123fa) list_single_idle_plugin_player_pane_t

0x6562,	// (0x00008bed) wait_bar_pane_cp15

0x656a,	// (0x00008bf5) grid_ai_notification_pane

0x308f,	// (0x0000571a) list_single_idle_plugin_notification_pane_g1

0xca87,	// (0x0000f112) cell_ai_notification_pane_ParamLimits

0xca87,	// (0x0000f112) cell_ai_notification_pane

0x6580,	// (0x00008c0b) cell_ai_notification_pane_g1

0x6588,	// (0x00008c13) cell_ai_notification_pane_t1

0xca94,	// (0x0000f11f) tb_ext_find_button_pane

0xca9c,	// (0x0000f127) tb_ext_find_pane_g1

0xcaa4,	// (0x0000f12f) tb_ext_find_pane_t1

0xeeba,	// (0x00011545) tb_ext_find_button_pane_g1

0x65b4,	// (0x00008c3f) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x00012403) tb_ext_find_button_pane_g

0xc8af,	// (0x0000ef3a) main_idle_act4_pane_t1_ParamLimits

0xc8c7,	// (0x0000ef52) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x000123c1) main_idle_act4_pane_t_ParamLimits

0xc8fb,	// (0x0000ef86) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc912,	// (0x0000ef9d) sat_plugin_idle_act4_pane_ParamLimits

0xc912,	// (0x0000ef9d) sat_plugin_idle_act4_pane

0xcab2,	// (0x0000f13d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcab2,	// (0x0000f13d) sat_plugin_idle_act4_pane_t1

0xcaca,	// (0x0000f155) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcaca,	// (0x0000f155) sat_plugin_idle_act4_pane_t2

0xcae2,	// (0x0000f16d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcae2,	// (0x0000f16d) sat_plugin_idle_act4_pane_t3

0xcafa,	// (0x0000f185) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcafa,	// (0x0000f185) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x00012408) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x00012408) sat_plugin_idle_act4_pane_t

0xdf4e,	// (0x000105d9) popup_battery_window_ParamLimits

0xdf4e,	// (0x000105d9) popup_battery_window

0xe1e0,	// (0x0001086b) bg_popup_sub_pane_cp25_ParamLimits

0xe1e0,	// (0x0001086b) bg_popup_sub_pane_cp25

0x6609,	// (0x00008c94) popup_battery_window_g1_ParamLimits

0x6609,	// (0x00008c94) popup_battery_window_g1

0x6615,	// (0x00008ca0) popup_battery_window_t1_ParamLimits

0x6615,	// (0x00008ca0) popup_battery_window_t1

0x6627,	// (0x00008cb2) popup_battery_window_t2_ParamLimits

0x6627,	// (0x00008cb2) popup_battery_window_t2

0x0001,

0xfd86,	// (0x00012411) popup_battery_window_t_ParamLimits

0xfd86,	// (0x00012411) popup_battery_window_t

0xa4ab,	// (0x0000cb36) midp_canvas_pane_ParamLimits

0xa506,	// (0x0000cb91) midp_keypad_pane_ParamLimits

0xa506,	// (0x0000cb91) midp_keypad_pane

0x0541,	// (0x00002bcc) main_midp_pane_ParamLimits

0x3b29,	// (0x000061b4) signal_pane_g2_cp_ParamLimits

0xcb12,	// (0x0000f19d) aid_size_cell_midp_keypad_ParamLimits

0xcb12,	// (0x0000f19d) aid_size_cell_midp_keypad

0xcb30,	// (0x0000f1bb) midp_keyp_game_grid_pane_ParamLimits

0xcb30,	// (0x0000f1bb) midp_keyp_game_grid_pane

0xcb57,	// (0x0000f1e2) midp_keyp_rocker_pane_ParamLimits

0xcb57,	// (0x0000f1e2) midp_keyp_rocker_pane

0xcb96,	// (0x0000f221) midp_keyp_sk_left_pane_ParamLimits

0xcb96,	// (0x0000f221) midp_keyp_sk_left_pane

0xcbea,	// (0x0000f275) midp_keyp_sk_right_pane_ParamLimits

0xcbea,	// (0x0000f275) midp_keyp_sk_right_pane

0xddc1,	// (0x0001044c) bg_button_pane_cp03

0xcc3e,	// (0x0000f2c9) midp_keyp_sk_left_pane_g1

0xddc1,	// (0x0001044c) bg_button_pane_cp04

0xcc3e,	// (0x0000f2c9) midp_keyp_sk_right_pane_g1

0x40d1,	// (0x0000675c) midp_keyp_rocker_pane_g1

0xcc47,	// (0x0000f2d2) keyp_game_cell_pane_ParamLimits

0xcc47,	// (0x0000f2d2) keyp_game_cell_pane

0xddc1,	// (0x0001044c) bg_button_pane_cp02

0xcc6d,	// (0x0000f2f8) keyp_game_cell_pane_g1

0x965f,	// (0x0000bcea) popup_fep_vkb2_window_ParamLimits

0x965f,	// (0x0000bcea) popup_fep_vkb2_window

0xcc76,	// (0x0000f301) aid_size_cell_vkb2_ParamLimits

0xcc76,	// (0x0000f301) aid_size_cell_vkb2

0xccac,	// (0x0000f337) popup_fep_vkb2_window_g1_ParamLimits

0xccac,	// (0x0000f337) popup_fep_vkb2_window_g1

0xccfc,	// (0x0000f387) vkb2_area_bottom_pane_ParamLimits

0xccfc,	// (0x0000f387) vkb2_area_bottom_pane

0xcd58,	// (0x0000f3e3) vkb2_area_keypad_pane_ParamLimits

0xcd58,	// (0x0000f3e3) vkb2_area_keypad_pane

0xcda6,	// (0x0000f431) vkb2_area_top_pane_ParamLimits

0xcda6,	// (0x0000f431) vkb2_area_top_pane

0xce2c,	// (0x0000f4b7) vkb2_top_entry_pane_ParamLimits

0xce2c,	// (0x0000f4b7) vkb2_top_entry_pane

0xce59,	// (0x0000f4e4) vkb2_top_grid_left_pane_ParamLimits

0xce59,	// (0x0000f4e4) vkb2_top_grid_left_pane

0xce79,	// (0x0000f504) vkb2_top_grid_right_pane_ParamLimits

0xce79,	// (0x0000f504) vkb2_top_grid_right_pane

0x69a6,	// (0x00009031) vkb2_cell_keypad_pane_ParamLimits

0x69a6,	// (0x00009031) vkb2_cell_keypad_pane

0xcebf,	// (0x0000f54a) vkb2_area_bottom_grid_pane_ParamLimits

0xcebf,	// (0x0000f54a) vkb2_area_bottom_grid_pane

0xcee9,	// (0x0000f574) vkb2_area_bottom_pane_g1_ParamLimits

0xcee9,	// (0x0000f574) vkb2_area_bottom_pane_g1

0xcf0f,	// (0x0000f59a) vkb2_area_bottom_pane_g2_ParamLimits

0xcf0f,	// (0x0000f59a) vkb2_area_bottom_pane_g2

0xcf40,	// (0x0000f5cb) vkb2_area_bottom_pane_g3_ParamLimits

0xcf40,	// (0x0000f5cb) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x00012416) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x00012416) vkb2_area_bottom_pane_g

0x6b50,	// (0x000091db) vkb2_top_cell_left_pane_ParamLimits

0x6b50,	// (0x000091db) vkb2_top_cell_left_pane

0xcfaa,	// (0x0000f635) vkb2_top_entry_pane_g1_ParamLimits

0xcfaa,	// (0x0000f635) vkb2_top_entry_pane_g1

0xcfb8,	// (0x0000f643) vkb2_top_entry_pane_t1_ParamLimits

0xcfb8,	// (0x0000f643) vkb2_top_entry_pane_t1

0x6bb8,	// (0x00009243) vkb2_top_entry_pane_t2_ParamLimits

0x6bb8,	// (0x00009243) vkb2_top_entry_pane_t2

0x6bea,	// (0x00009275) vkb2_top_entry_pane_t3_ParamLimits

0x6bea,	// (0x00009275) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x0001241d) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x0001241d) vkb2_top_entry_pane_t

0xcff1,	// (0x0000f67c) vkb2_top_grid_right_pane_g1_ParamLimits

0xcff1,	// (0x0000f67c) vkb2_top_grid_right_pane_g1

0x6c51,	// (0x000092dc) vkb2_top_grid_right_pane_g2_ParamLimits

0x6c51,	// (0x000092dc) vkb2_top_grid_right_pane_g2

0x6c69,	// (0x000092f4) vkb2_top_grid_right_pane_g3_ParamLimits

0x6c69,	// (0x000092f4) vkb2_top_grid_right_pane_g3

0xd007,	// (0x0000f692) vkb2_top_grid_right_pane_g4_ParamLimits

0xd007,	// (0x0000f692) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x00012424) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x00012424) vkb2_top_grid_right_pane_g

0x6c97,	// (0x00009322) vkb2_top_cell_left_pane_g1

0x6cae,	// (0x00009339) vkb2_cell_keypad_pane_g1_ParamLimits

0x6cae,	// (0x00009339) vkb2_cell_keypad_pane_g1

0x6cbc,	// (0x00009347) vkb2_cell_keypad_pane_t1_ParamLimits

0x6cbc,	// (0x00009347) vkb2_cell_keypad_pane_t1

0x6cd3,	// (0x0000935e) vkb2_cell_bottom_grid_pane_ParamLimits

0x6cd3,	// (0x0000935e) vkb2_cell_bottom_grid_pane

0x6d0c,	// (0x00009397) vkb2_cell_bottom_grid_pane_g1

0xc943,	// (0x0000efce) aid_call2_pane_cp02

0xc94b,	// (0x0000efd6) aid_call_pane_cp02

0xc953,	// (0x0000efde) clock_digital_number_pane_cp10

0xc95b,	// (0x0000efe6) clock_digital_number_pane_cp11

0xc963,	// (0x0000efee) clock_digital_number_pane_cp12

0xc96b,	// (0x0000eff6) clock_digital_number_pane_cp13

0xc973,	// (0x0000effe) clock_digital_separator_pane_cp10

0xeeba,	// (0x00011545) popup_clock_digital_analogue_window_cp2_g1

0xeeba,	// (0x00011545) popup_clock_digital_analogue_window_cp2_g2

0xc97b,	// (0x0000f006) popup_clock_digital_analogue_window_cp2_g3

0xeeba,	// (0x00011545) popup_clock_digital_analogue_window_cp2_g4

0xc97b,	// (0x0000f006) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x000123d9) popup_clock_digital_analogue_window_cp2_g

0xc983,	// (0x0000f00e) popup_clock_digital_analogue_window_cp2_t1

0xc991,	// (0x0000f01c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x000123e4) popup_clock_digital_analogue_window_cp2_t

0x40d1,	// (0x0000675c) clock_digital_number_pane_cp10_g1

0x40d1,	// (0x0000675c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x000121cc) clock_digital_number_pane_cp10_g

0x40d1,	// (0x0000675c) clock_digital_separator_pane_cp10_g1

0x40d1,	// (0x0000675c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x000121cc) clock_digital_separator_pane_cp10_g

0x6253,	// (0x000088de) uniindi_top_pane_g3

0x6264,	// (0x000088ef) uniindi_top_pane_g4

0x6a31,	// (0x000090bc) vkb2_row_keypad_pane_ParamLimits

0x6a31,	// (0x000090bc) vkb2_row_keypad_pane

0x6d28,	// (0x000093b3) vkb2_cell_t_keypad_pane_ParamLimits

0x6d28,	// (0x000093b3) vkb2_cell_t_keypad_pane

0x6d38,	// (0x000093c3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6d38,	// (0x000093c3) vkb2_cell_t_keypad_pane_cp08

0x6d4d,	// (0x000093d8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6d4d,	// (0x000093d8) vkb2_cell_t_keypad_pane_cp09

0x6d61,	// (0x000093ec) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6d61,	// (0x000093ec) vkb2_cell_t_keypad_pane_cp01

0x6d72,	// (0x000093fd) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6d72,	// (0x000093fd) vkb2_cell_t_keypad_pane_cp02

0x6d83,	// (0x0000940e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6d83,	// (0x0000940e) vkb2_cell_t_keypad_pane_cp03

0x6d94,	// (0x0000941f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6d94,	// (0x0000941f) vkb2_cell_t_keypad_pane_cp04

0x6da5,	// (0x00009430) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6da5,	// (0x00009430) vkb2_cell_t_keypad_pane_cp05

0x6db6,	// (0x00009441) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6db6,	// (0x00009441) vkb2_cell_t_keypad_pane_cp06

0x6dc9,	// (0x00009454) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6dc9,	// (0x00009454) vkb2_cell_t_keypad_pane_cp07

0x6dde,	// (0x00009469) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6dde,	// (0x00009469) vkb2_cell_t_keypad_pane_cp10

0x4576,	// (0x00006c01) vkb2_cell_t_keypad_pane_g1

0x6df3,	// (0x0000947e) vkb2_cell_t_keypad_pane_t1

0xddc1,	// (0x0001044c) popup_grid_graphic2_window

0xd01d,	// (0x0000f6a8) aid_size_cell_graphic2_ParamLimits

0xd01d,	// (0x0000f6a8) aid_size_cell_graphic2

0xd05b,	// (0x0000f6e6) bg_popup_window_pane_cp21_ParamLimits

0xd05b,	// (0x0000f6e6) bg_popup_window_pane_cp21

0xd069,	// (0x0000f6f4) graphic2_pages_pane_ParamLimits

0xd069,	// (0x0000f6f4) graphic2_pages_pane

0xd0c1,	// (0x0000f74c) grid_graphic2_control_pane_ParamLimits

0xd0c1,	// (0x0000f74c) grid_graphic2_control_pane

0xd109,	// (0x0000f794) grid_graphic2_pane_ParamLimits

0xd109,	// (0x0000f794) grid_graphic2_pane

0xd194,	// (0x0000f81f) cell_graphic2_pane

0xddc1,	// (0x0001044c) main_comp_mode_pane

0x598d,	// (0x00008018) list_ai3_gene_pane_ParamLimits

0xc613,	// (0x0000ec9e) bg_popup_window_pane_cp19_ParamLimits

0x5dc4,	// (0x0000844f) bg_touch_area_indi_pane_ParamLimits

0x5dc4,	// (0x0000844f) bg_touch_area_indi_pane

0x5dda,	// (0x00008465) bg_touch_area_indi_pane_cp01_ParamLimits

0x5dda,	// (0x00008465) bg_touch_area_indi_pane_cp01

0x5df2,	// (0x0000847d) bg_touch_area_indi_pane_cp02_ParamLimits

0x5df2,	// (0x0000847d) bg_touch_area_indi_pane_cp02

0x5e0c,	// (0x00008497) bg_touch_area_indi_pane_cp03_ParamLimits

0x5e0c,	// (0x00008497) bg_touch_area_indi_pane_cp03

0x5e26,	// (0x000084b1) popup_slider_window_g1_ParamLimits

0x5e42,	// (0x000084cd) popup_slider_window_g2_ParamLimits

0x5e5e,	// (0x000084e9) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x0001236e) popup_slider_window_g_ParamLimits

0x5eba,	// (0x00008545) popup_slider_window_t1_ParamLimits

0x5f2e,	// (0x000085b9) small_volume_slider_vertical_pane_ParamLimits

0xd194,	// (0x0000f81f) cell_graphic2_pane_ParamLimits

0xd1f7,	// (0x0000f882) bg_button_pane_cp10_ParamLimits

0xd1f7,	// (0x0000f882) bg_button_pane_cp10

0xd20a,	// (0x0000f895) bg_button_pane_cp11_ParamLimits

0xd20a,	// (0x0000f895) bg_button_pane_cp11

0xd21d,	// (0x0000f8a8) graphic2_pages_pane_g1_ParamLimits

0xd21d,	// (0x0000f8a8) graphic2_pages_pane_g1

0xd238,	// (0x0000f8c3) graphic2_pages_pane_g2_ParamLimits

0xd238,	// (0x0000f8c3) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x00012432) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x00012432) graphic2_pages_pane_g

0xd250,	// (0x0000f8db) graphic2_pages_pane_t1_ParamLimits

0xd250,	// (0x0000f8db) graphic2_pages_pane_t1

0xd268,	// (0x0000f8f3) cell_graphic2_control_pane_ParamLimits

0xd268,	// (0x0000f8f3) cell_graphic2_control_pane

0xd29c,	// (0x0000f927) cell_graphic2_pane_g1_ParamLimits

0xd29c,	// (0x0000f927) cell_graphic2_pane_g1

0x4398,	// (0x00006a23) cell_graphic2_pane_g2_ParamLimits

0x4398,	// (0x00006a23) cell_graphic2_pane_g2

0xd2a9,	// (0x0000f934) cell_graphic2_pane_g3_ParamLimits

0xd2a9,	// (0x0000f934) cell_graphic2_pane_g3

0x43a5,	// (0x00006a30) cell_graphic2_pane_g4_ParamLimits

0x43a5,	// (0x00006a30) cell_graphic2_pane_g4

0xd2b6,	// (0x0000f941) cell_graphic2_pane_g5_ParamLimits

0xd2b6,	// (0x0000f941) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x00012437) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x00012437) cell_graphic2_pane_g

0xd2d6,	// (0x0000f961) cell_graphic2_pane_t1_ParamLimits

0xd2d6,	// (0x0000f961) cell_graphic2_pane_t1

0x2138,	// (0x000047c3) grid_highlight_pane_cp11_ParamLimits

0x2138,	// (0x000047c3) grid_highlight_pane_cp11

0xe1e0,	// (0x0001086b) bg_button_pane_cp05

0xd30b,	// (0x0000f996) cell_graphic2_control_pane_g1

0x40d1,	// (0x0000675c) bg_touch_area_indi_pane_g1

0x70cd,	// (0x00009758) aid_cmod_rocker_key_size

0x70d7,	// (0x00009762) aid_cmode_itu_key_size

0x70e1,	// (0x0000976c) main_cmode_video_pane

0x70eb,	// (0x00009776) main_comp_mode_itu_pane

0x70f7,	// (0x00009782) main_comp_mode_rocker_pane

0x7103,	// (0x0000978e) cell_cmode_rocker_pane_ParamLimits

0x7103,	// (0x0000978e) cell_cmode_rocker_pane

0x7117,	// (0x000097a2) cell_cmode_itu_pane_ParamLimits

0x7117,	// (0x000097a2) cell_cmode_itu_pane

0xe760,	// (0x00010deb) bg_button_pane_cp06_ParamLimits

0xe760,	// (0x00010deb) bg_button_pane_cp06

0x4576,	// (0x00006c01) cell_cmode_rocker_pane_g1_ParamLimits

0x4576,	// (0x00006c01) cell_cmode_rocker_pane_g1

0x60a9,	// (0x00008734) cell_cmode_rocker_pane_g2_ParamLimits

0x60a9,	// (0x00008734) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x00012447) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x00012447) cell_cmode_rocker_pane_g

0xddc1,	// (0x0001044c) bg_button_pane_cp07

0x712e,	// (0x000097b9) cell_cmode_itu_pane_g1

0x7137,	// (0x000097c2) cell_cmode_itu_pane_t1

0x7145,	// (0x000097d0) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x0001244c) cell_cmode_itu_pane_t

0x62d7,	// (0x00008962) aid_touch_ctrl_left

0x62df,	// (0x0000896a) aid_touch_ctrl_right

0xddc1,	// (0x0001044c) compa_mode_pane

0xd331,	// (0x0000f9bc) aid_cmod_rocker_key_size_cp

0xd33b,	// (0x0000f9c6) aid_cmode_itu_key_size_cp

0x7167,	// (0x000097f2) compa_mode_pane_g1

0x716f,	// (0x000097fa) compa_mode_pane_g2

0x7177,	// (0x00009802) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x00012451) compa_mode_pane_g

0xd345,	// (0x0000f9d0) main_comp_mode_itu_pane_cp

0xd34d,	// (0x0000f9d8) main_comp_mode_rocker_pane_cp

0xd355,	// (0x0000f9e0) cell_cmode_itu_pane_cp_ParamLimits

0xd355,	// (0x0000f9e0) cell_cmode_itu_pane_cp

0xd36a,	// (0x0000f9f5) cell_cmode_rocker_pane_cp_ParamLimits

0xd36a,	// (0x0000f9f5) cell_cmode_rocker_pane_cp

0xe760,	// (0x00010deb) bg_button_pane_cp06_cp_ParamLimits

0xe760,	// (0x00010deb) bg_button_pane_cp06_cp

0x4576,	// (0x00006c01) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4576,	// (0x00006c01) cell_cmode_rocker_pane_g1_cp

0x40d1,	// (0x0000675c) cell_cmode_rocker_pane_g2_cp

0xddc1,	// (0x0001044c) bg_button_pane_cp07_cp

0xd37c,	// (0x0000fa07) cell_cmode_itu_pane_g1_cp

0xd385,	// (0x0000fa10) cell_cmode_itu_pane_t1_cp

0xd385,	// (0x0000fa10) cell_cmode_itu_pane_t2_cp

0xb9a1,	// (0x0000e02c) settings_code_pane_cp2

0xe00a,	// (0x00010695) bg_popup_window_pane_cp3_ParamLimits

0xe3ce,	// (0x00010a59) heading_pane_cp3_ParamLimits

0xe3da,	// (0x00010a65) listscroll_popup_graphic_pane_ParamLimits

0x4140,	// (0x000067cb) fep_hwr_aid_pane_ParamLimits

0x5faa,	// (0x00008635) aid_touch_sctrl_top_ParamLimits

0x5fb7,	// (0x00008642) sctrl_sk_top_pane_g1_ParamLimits

0x4576,	// (0x00006c01) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x00012387) sctrl_sk_top_pane_g_ParamLimits

0x5fc4,	// (0x0000864f) sctrl_sk_top_pane_t1_ParamLimits

0x5faa,	// (0x00008635) aid_touch_sctrl_bottom_ParamLimits

0x5fc4,	// (0x0000864f) sctrl_sk_bottom_pane_t1_ParamLimits

0x621d,	// (0x000088a8) aid_area_touch_clock

0xcdee,	// (0x0000f479) aid_vkb2_area_top_pane_cell_ParamLimits

0xcdee,	// (0x0000f479) aid_vkb2_area_top_pane_cell

0xce99,	// (0x0000f524) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xce99,	// (0x0000f524) aid_vkb2_area_bottom_pane_cell

0x6b70,	// (0x000091fb) popup_char_count_window

0x71cd,	// (0x00009858) popup_char_count_window_g1

0x71d6,	// (0x00009861) popup_char_count_window_g2

0x71df,	// (0x0000986a) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x00012458) popup_char_count_window_g

0x71e8,	// (0x00009873) popup_char_count_window_t1

0x67c2,	// (0x00008e4d) popup_fep_char_preview_window_ParamLimits

0x67c2,	// (0x00008e4d) popup_fep_char_preview_window

0xce0e,	// (0x0000f499) vkb2_top_candi_pane_ParamLimits

0xce0e,	// (0x0000f499) vkb2_top_candi_pane

0xd393,	// (0x0000fa1e) cell_vkb2_top_candi_pane_ParamLimits

0xd393,	// (0x0000fa1e) cell_vkb2_top_candi_pane

0x1966,	// (0x00003ff1) bg_popup_fep_char_preview_window_ParamLimits

0x1966,	// (0x00003ff1) bg_popup_fep_char_preview_window

0x7247,	// (0x000098d2) popup_fep_char_preview_window_t1_ParamLimits

0x7247,	// (0x000098d2) popup_fep_char_preview_window_t1

0x7281,	// (0x0000990c) bg_popup_fep_char_preview_window_g1

0x7289,	// (0x00009914) bg_popup_fep_char_preview_window_g2

0x7291,	// (0x0000991c) bg_popup_fep_char_preview_window_g3

0x7299,	// (0x00009924) bg_popup_fep_char_preview_window_g4

0x72a1,	// (0x0000992c) bg_popup_fep_char_preview_window_g5

0x72a9,	// (0x00009934) bg_popup_fep_char_preview_window_g6

0x72b1,	// (0x0000993c) bg_popup_fep_char_preview_window_g7

0x72b9,	// (0x00009944) bg_popup_fep_char_preview_window_g8

0x72c1,	// (0x0000994c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x0001245f) bg_popup_fep_char_preview_window_g

0x4576,	// (0x00006c01) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4576,	// (0x00006c01) cell_vkb2_top_candi_pane_g1

0x490b,	// (0x00006f96) cell_vkb2_top_candi_pane_g2_ParamLimits

0x490b,	// (0x00006f96) cell_vkb2_top_candi_pane_g2

0x492c,	// (0x00006fb7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x492c,	// (0x00006fb7) cell_vkb2_top_candi_pane_g3

0x72c9,	// (0x00009954) cell_vkb2_top_candi_pane_g4_ParamLimits

0x72c9,	// (0x00009954) cell_vkb2_top_candi_pane_g4

0x72ea,	// (0x00009975) cell_vkb2_top_candi_pane_g5_ParamLimits

0x72ea,	// (0x00009975) cell_vkb2_top_candi_pane_g5

0x60a9,	// (0x00008734) cell_vkb2_top_candi_pane_g6_ParamLimits

0x60a9,	// (0x00008734) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x00012472) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x00012472) cell_vkb2_top_candi_pane_g

0x730b,	// (0x00009996) cell_vkb2_top_candi_pane_t1

0x2889,	// (0x00004f14) aid_size_touch_slider_mark_ParamLimits

0x2889,	// (0x00004f14) aid_size_touch_slider_mark

0xd0a5,	// (0x0000f730) grid_graphic2_catg_pane_ParamLimits

0xd0a5,	// (0x0000f730) grid_graphic2_catg_pane

0xd163,	// (0x0000f7ee) popup_grid_graphic2_window_t1_ParamLimits

0xd163,	// (0x0000f7ee) popup_grid_graphic2_window_t1

0xd179,	// (0x0000f804) popup_grid_graphic2_window_t2_ParamLimits

0xd179,	// (0x0000f804) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x0001242d) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x0001242d) popup_grid_graphic2_window_t

0xe1e0,	// (0x0001086b) bg_button_pane_cp05_ParamLimits

0xd30b,	// (0x0000f996) cell_graphic2_control_pane_g1_ParamLimits

0xd3fd,	// (0x0000fa88) cell_graphic2_catg_pane_ParamLimits

0xd3fd,	// (0x0000fa88) cell_graphic2_catg_pane

0xddc1,	// (0x0001044c) bg_button_pane_cp12

0xd40f,	// (0x0000fa9a) cell_graphic2_catg_pane_g1

0x61e9,	// (0x00008874) cell_tb_ext_pane_t1_ParamLimits

0x6c0e,	// (0x00009299) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6c0e,	// (0x00009299) vkb2_top_cell_right_narrow_pane

0x6c26,	// (0x000092b1) vkb2_top_cell_right_wide_pane_ParamLimits

0x6c26,	// (0x000092b1) vkb2_top_cell_right_wide_pane

0x4132,	// (0x000067bd) bg_vkb2_func_pane_ParamLimits

0x4132,	// (0x000067bd) bg_vkb2_func_pane

0x6c97,	// (0x00009322) vkb2_top_cell_left_pane_g1_ParamLimits

0x4132,	// (0x000067bd) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4132,	// (0x000067bd) bg_vkb2_fuc_pane_cp03

0x6d0c,	// (0x00009397) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1138,	// (0x000037c3) bg_vkb2_func_pane_g1

0x1140,	// (0x000037cb) bg_vkb2_func_pane_g2

0x1150,	// (0x000037db) bg_vkb2_func_pane_g3

0x1148,	// (0x000037d3) bg_vkb2_func_pane_g4

0x1158,	// (0x000037e3) bg_vkb2_func_pane_g5

0x1160,	// (0x000037eb) bg_vkb2_func_pane_g6

0x1168,	// (0x000037f3) bg_vkb2_func_pane_g7

0x1170,	// (0x000037fb) bg_vkb2_func_pane_g8

0x1130,	// (0x000037bb) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x0001247f) bg_vkb2_func_pane_g

0x4132,	// (0x000067bd) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4132,	// (0x000067bd) bg_vkb2_fuc_pane_cp01

0x6c97,	// (0x00009322) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6c97,	// (0x00009322) vkb2_top_cell_right_wide_pane_g1

0x4132,	// (0x000067bd) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4132,	// (0x000067bd) bg_vkb2_fuc_pane_cp02

0x6d0c,	// (0x00009397) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6d0c,	// (0x00009397) vkb2_top_cell_right_narrow_pane_g1

0xc54d,	// (0x0000ebd8) aid_touch_area_decrease_ParamLimits

0xc54d,	// (0x0000ebd8) aid_touch_area_decrease

0xc587,	// (0x0000ec12) aid_touch_area_increase_ParamLimits

0xc587,	// (0x0000ec12) aid_touch_area_increase

0xc5af,	// (0x0000ec3a) aid_touch_area_mute_ParamLimits

0xc5af,	// (0x0000ec3a) aid_touch_area_mute

0xc5df,	// (0x0000ec6a) aid_touch_area_slider_ParamLimits

0xc5df,	// (0x0000ec6a) aid_touch_area_slider

0xc61f,	// (0x0000ecaa) popup_slider_window_g4_ParamLimits

0xc61f,	// (0x0000ecaa) popup_slider_window_g4

0xc647,	// (0x0000ecd2) popup_slider_window_g5_ParamLimits

0xc647,	// (0x0000ecd2) popup_slider_window_g5

0xc67b,	// (0x0000ed06) popup_slider_window_g6_ParamLimits

0xc67b,	// (0x0000ed06) popup_slider_window_g6

0x5ee8,	// (0x00008573) popup_slider_window_t2_ParamLimits

0x5ee8,	// (0x00008573) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x0001237b) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x0001237b) popup_slider_window_t

0xc697,	// (0x0000ed22) slider_pane_ParamLimits

0xc697,	// (0x0000ed22) slider_pane

0x7344,	// (0x000099cf) slider_pane_g1_ParamLimits

0x7344,	// (0x000099cf) slider_pane_g1

0x7358,	// (0x000099e3) slider_pane_g2_ParamLimits

0x7358,	// (0x000099e3) slider_pane_g2

0x736e,	// (0x000099f9) slider_pane_g3_ParamLimits

0x736e,	// (0x000099f9) slider_pane_g3

0x0003,

0xfe07,	// (0x00012492) slider_pane_g_ParamLimits

0xfe07,	// (0x00012492) slider_pane_g

0xae54,	// (0x0000d4df) popup_tb_float_extension_window_ParamLimits

0xae54,	// (0x0000d4df) popup_tb_float_extension_window

0x739a,	// (0x00009a25) aid_size_cell_tb_float_ext

0xddc1,	// (0x0001044c) bg_popup_sub_window_cp28

0x73a6,	// (0x00009a31) grid_tb_float_ext_pane

0x73b2,	// (0x00009a3d) cell_tb_float_ext_pane_ParamLimits

0x73b2,	// (0x00009a3d) cell_tb_float_ext_pane

0x73ce,	// (0x00009a59) cell_tb_float_ext_pane_g1

0x73d7,	// (0x00009a62) grid_highlight_pane_cp12

0xbdc7,	// (0x0000e452) cell_last_hwr_side_pane_ParamLimits

0xbdc7,	// (0x0000e452) cell_last_hwr_side_pane

0x40d1,	// (0x0000675c) cell_last_hwr_side_pane_g1

0x73e0,	// (0x00009a6b) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x0001249b) cell_last_hwr_side_pane_g

0xcf75,	// (0x0000f600) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcf75,	// (0x0000f600) vkb2_area_bottom_space_btn_pane

0x4576,	// (0x00006c01) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6df3,	// (0x0000947e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x730b,	// (0x00009996) cell_vkb2_top_candi_pane_t1_ParamLimits

0x73e9,	// (0x00009a74) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x73e9,	// (0x00009a74) vkb2_area_bottom_space_btn_pane_g1

0x7423,	// (0x00009aae) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7423,	// (0x00009aae) vkb2_area_bottom_space_btn_pane_g2

0x7459,	// (0x00009ae4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7459,	// (0x00009ae4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x000124a0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x000124a0) vkb2_area_bottom_space_btn_pane_g

0x41f7,	// (0x00006882) cel_fep_hwr_func_pane_ParamLimits

0x41f7,	// (0x00006882) cel_fep_hwr_func_pane

0xbd9c,	// (0x0000e427) cell_hwr_side_button_pane_ParamLimits

0xbd9c,	// (0x0000e427) cell_hwr_side_button_pane

0x621d,	// (0x000088a8) aid_area_touch_clock_ParamLimits

0xe1e0,	// (0x0001086b) bg_uniindi_top_pane_ParamLimits

0x6231,	// (0x000088bc) uniindi_top_pane_g1_ParamLimits

0x6247,	// (0x000088d2) uniindi_top_pane_g2_ParamLimits

0x6253,	// (0x000088de) uniindi_top_pane_g3_ParamLimits

0x6264,	// (0x000088ef) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x000123b3) uniindi_top_pane_g_ParamLimits

0x6271,	// (0x000088fc) uniindi_top_pane_t1_ParamLimits

0xe1e0,	// (0x0001086b) bg_vkb2_func_pane_cp01_ParamLimits

0xe1e0,	// (0x0001086b) bg_vkb2_func_pane_cp01

0x74a3,	// (0x00009b2e) cel_fep_hwr_func_pane_g1_ParamLimits

0x74a3,	// (0x00009b2e) cel_fep_hwr_func_pane_g1

0xe1e0,	// (0x0001086b) bg_vkb2_func_pane_cp02_ParamLimits

0xe1e0,	// (0x0001086b) bg_vkb2_func_pane_cp02

0x74a3,	// (0x00009b2e) cell_hwr_side_button_pane_g1_ParamLimits

0x74a3,	// (0x00009b2e) cell_hwr_side_button_pane_g1

0x0f0b,	// (0x00003596) status_pane_g4_ParamLimits

0x0f0b,	// (0x00003596) status_pane_g4

0x0f25,	// (0x000035b0) status_pane_t1

0x3e70,	// (0x000064fb) form2_midp_gauge_slider_cont_pane

0x3e78,	// (0x00006503) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbce2,	// (0x0000e36d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbcf4,	// (0x0000e37f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0001217f) form2_midp_gauge_slider_pane_t_ParamLimits

0x3eae,	// (0x00006539) form2_midp_slider_pane_ParamLimits

0x6782,	// (0x00008e0d) aid_size_cell_func_vkb2_ParamLimits

0x6782,	// (0x00008e0d) aid_size_cell_func_vkb2

0x7386,	// (0x00009a11) slider_pane_g4_ParamLimits

0x7386,	// (0x00009a11) slider_pane_g4

0xd418,	// (0x0000faa3) form2_midp_gauge_slider_pane_t2_cp01

0xd426,	// (0x0000fab1) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd426,	// (0x0000fab1) form2_midp_gauge_slider_pane_t3_cp01

0x74dc,	// (0x00009b67) form2_midp_slider_pane_cp01

0xddc1,	// (0x0001044c) navi_smil_pane

0x7510,	// (0x00009b9b) navi_smil_pane_g1

0x7518,	// (0x00009ba3) navi_smil_pane_t1

0x74e5,	// (0x00009b70) form2_midp_slider_pane_g1

0x74ee,	// (0x00009b79) form2_midp_slider_pane_g2

0x74f6,	// (0x00009b81) form2_midp_slider_pane_g3

0x74e5,	// (0x00009b70) form2_midp_slider_pane_g4

0xd443,	// (0x0000face) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x000124a9) form2_midp_slider_pane_g

0x7493,	// (0x00009b1e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7493,	// (0x00009b1e) vkb2_area_bottom_space_btn_pane_g4

0xb03b,	// (0x0000d6c6) lc0_navi_pane_ParamLimits

0xb03b,	// (0x0000d6c6) lc0_navi_pane

0xb0ab,	// (0x0000d736) lc0_stat_indi_pane_ParamLimits

0xb0ab,	// (0x0000d736) lc0_stat_indi_pane

0xb0c0,	// (0x0000d74b) ls0_title_pane_ParamLimits

0xb0c0,	// (0x0000d74b) ls0_title_pane

0xe760,	// (0x00010deb) bg_popup_sub_pane_cp14_ParamLimits

0x6204,	// (0x0000888f) list_uniindi_pane_ParamLimits

0x6210,	// (0x0000889b) uniindi_top_pane_ParamLimits

0x62af,	// (0x0000893a) list_single_uniindi_pane_g1_ParamLimits

0x62c2,	// (0x0000894d) list_single_uniindi_pane_t1_ParamLimits

0xd44c,	// (0x0000fad7) lc0_stat_clock_pane_ParamLimits

0xd44c,	// (0x0000fad7) lc0_stat_clock_pane

0xd459,	// (0x0000fae4) lc0_stat_indi_pane_g1_ParamLimits

0xd459,	// (0x0000fae4) lc0_stat_indi_pane_g1

0xd466,	// (0x0000faf1) lc0_stat_indi_pane_g2_ParamLimits

0xd466,	// (0x0000faf1) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x000124b4) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x000124b4) lc0_stat_indi_pane_g

0xd473,	// (0x0000fafe) lc0_uni_indicator_pane_ParamLimits

0xd473,	// (0x0000fafe) lc0_uni_indicator_pane

0xd480,	// (0x0000fb0b) ls0_title_pane_g1_ParamLimits

0xd480,	// (0x0000fb0b) ls0_title_pane_g1

0xd494,	// (0x0000fb1f) ls0_title_pane_t1_ParamLimits

0xd494,	// (0x0000fb1f) ls0_title_pane_t1

0xd4c2,	// (0x0000fb4d) lc0_uni_indicator_pane_g1_ParamLimits

0xd4c2,	// (0x0000fb4d) lc0_uni_indicator_pane_g1

0x75b7,	// (0x00009c42) lc0_stat_clock_pane_t1

0xddc1,	// (0x0001044c) main_ai5_pane

0x75c5,	// (0x00009c50) ai5_sk_pane_ParamLimits

0x75c5,	// (0x00009c50) ai5_sk_pane

0xd4e1,	// (0x0000fb6c) cell_ai5_widget_pane_ParamLimits

0xd4e1,	// (0x0000fb6c) cell_ai5_widget_pane

0x7b6e,	// (0x0000a1f9) aid_size_cell_widget_grid

0x7b7c,	// (0x0000a207) bg_ai5_widget_pane_ParamLimits

0x7b7c,	// (0x0000a207) bg_ai5_widget_pane

0x7bf0,	// (0x0000a27b) cell_ai5_widget_pane_g2

0x7c00,	// (0x0000a28b) cell_ai5_widget_pane_g3

0x7c17,	// (0x0000a2a2) cell_ai5_widget_pane_g4

0x7c23,	// (0x0000a2ae) cell_ai5_widget_pane_g5

0xd838,	// (0x0000fec3) cell_ai5_widget_pane_g6

0xd844,	// (0x0000fecf) cell_ai5_widget_pane_g7

0x7c83,	// (0x0000a30e) cell_ai5_widget_pane_t1_ParamLimits

0x7c83,	// (0x0000a30e) cell_ai5_widget_pane_t1

0x7ca0,	// (0x0000a32b) cell_ai5_widget_pane_t2_ParamLimits

0x7ca0,	// (0x0000a32b) cell_ai5_widget_pane_t2

0x7cb8,	// (0x0000a343) cell_ai5_widget_pane_t3_ParamLimits

0x7cb8,	// (0x0000a343) cell_ai5_widget_pane_t3

0x7cd0,	// (0x0000a35b) cell_ai5_widget_pane_t4_ParamLimits

0x7cd0,	// (0x0000a35b) cell_ai5_widget_pane_t4

0x7ced,	// (0x0000a378) cell_ai5_widget_pane_t5_ParamLimits

0x7ced,	// (0x0000a378) cell_ai5_widget_pane_t5

0x7d0c,	// (0x0000a397) cell_ai5_widget_pane_t6_ParamLimits

0x7d0c,	// (0x0000a397) cell_ai5_widget_pane_t6

0x7d1e,	// (0x0000a3a9) cell_ai5_widget_pane_t7_ParamLimits

0x7d1e,	// (0x0000a3a9) cell_ai5_widget_pane_t7

0x7d37,	// (0x0000a3c2) cell_ai5_widget_pane_t8_ParamLimits

0x7d37,	// (0x0000a3c2) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x000124ce) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x000124ce) cell_ai5_widget_pane_t

0x7d8b,	// (0x0000a416) grid_ai5_widget_pane

0xe760,	// (0x00010deb) highlight_cell_ai5_widget_pane_ParamLimits

0xe760,	// (0x00010deb) highlight_cell_ai5_widget_pane

0xd850,	// (0x0000fedb) ai5_sk_left_pane

0xd85a,	// (0x0000fee5) ai5_sk_middle_pane

0xd864,	// (0x0000feef) ai5_sk_right_pane

0x7db7,	// (0x0000a442) bg_ai5_widget_pane_g1_ParamLimits

0x7db7,	// (0x0000a442) bg_ai5_widget_pane_g1

0x7dc3,	// (0x0000a44e) bg_ai5_widget_pane_g2_ParamLimits

0x7dc3,	// (0x0000a44e) bg_ai5_widget_pane_g2

0x7dcf,	// (0x0000a45a) bg_ai5_widget_pane_g3_ParamLimits

0x7dcf,	// (0x0000a45a) bg_ai5_widget_pane_g3

0x7ddb,	// (0x0000a466) bg_ai5_widget_pane_g4_ParamLimits

0x7ddb,	// (0x0000a466) bg_ai5_widget_pane_g4

0x7de7,	// (0x0000a472) bg_ai5_widget_pane_g5_ParamLimits

0x7de7,	// (0x0000a472) bg_ai5_widget_pane_g5

0x7df3,	// (0x0000a47e) bg_ai5_widget_pane_g6_ParamLimits

0x7df3,	// (0x0000a47e) bg_ai5_widget_pane_g6

0x7dff,	// (0x0000a48a) bg_ai5_widget_pane_g7_ParamLimits

0x7dff,	// (0x0000a48a) bg_ai5_widget_pane_g7

0x7e0b,	// (0x0000a496) bg_ai5_widget_pane_g8_ParamLimits

0x7e0b,	// (0x0000a496) bg_ai5_widget_pane_g8

0x7e17,	// (0x0000a4a2) bg_ai5_widget_pane_g9_ParamLimits

0x7e17,	// (0x0000a4a2) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x000124e3) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x000124e3) bg_ai5_widget_pane_g

0x7e4f,	// (0x0000a4da) cell_shortcut_ai5_widget_pane_ParamLimits

0x7e4f,	// (0x0000a4da) cell_shortcut_ai5_widget_pane

0xf546,	// (0x00011bd1) bg_cell_shortcut_ai5_widget_pane

0x7e62,	// (0x0000a4ed) cell_grid_ai5_widget_pane_g1

0xf546,	// (0x00011bd1) highlight_cell_shortcut_ai5_widget_pane

0x1140,	// (0x000037cb) ai5_sk_left_pane_g1

0x7e6b,	// (0x0000a4f6) ai5_sk_left_pane_g2

0x7e73,	// (0x0000a4fe) ai5_sk_left_pane_g3

0x7e7b,	// (0x0000a506) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x000124f6) ai5_sk_left_pane_g

0x7e83,	// (0x0000a50e) ai5_sk_left_pane_t1

0x1138,	// (0x000037c3) ai5_sk_right_pane_g1

0x7e91,	// (0x0000a51c) ai5_sk_right_pane_g2

0x7e99,	// (0x0000a524) ai5_sk_right_pane_g3

0x7ea1,	// (0x0000a52c) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x000124ff) ai5_sk_right_pane_g

0x7ea9,	// (0x0000a534) ai5_sk_right_pane_t1

0x1138,	// (0x000037c3) ai5_sk_middle_pane_g1

0x1140,	// (0x000037cb) ai5_sk_middle_pane_g2

0x1158,	// (0x000037e3) ai5_sk_middle_pane_g3

0x7e99,	// (0x0000a524) ai5_sk_middle_pane_g4

0x7e73,	// (0x0000a4fe) ai5_sk_middle_pane_g5

0x7eb7,	// (0x0000a542) ai5_sk_middle_pane_g6

0xd86e,	// (0x0000fef9) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x00012508) ai5_sk_middle_pane_g

0xaf25,	// (0x0000d5b0) aid_touch_area_size_lc0_ParamLimits

0xaf25,	// (0x0000d5b0) aid_touch_area_size_lc0

0x494d,	// (0x00006fd8) cell_hwr_candidate_pane_t1_ParamLimits

0x0bc2,	// (0x0000324d) aid_touch_navi_pane

0xb1cb,	// (0x0000d856) status_dt_navi_pane_ParamLimits

0xb1cb,	// (0x0000d856) status_dt_navi_pane

0xb1e3,	// (0x0000d86e) status_dt_sta_pane_ParamLimits

0xb1e3,	// (0x0000d86e) status_dt_sta_pane

0xd876,	// (0x0000ff01) dt_sta_controll_pane

0xd883,	// (0x0000ff0e) dt_sta_indi_pane

0xd890,	// (0x0000ff1b) dt_sta_title_pane

0xe1e0,	// (0x0001086b) bg_dt_sta_indi_pane_ParamLimits

0xe1e0,	// (0x0001086b) bg_dt_sta_indi_pane

0xd8a2,	// (0x0000ff2d) dt_sta_battery_pane

0xd8aa,	// (0x0000ff35) dt_sta_indi_pane_g1

0xd8b3,	// (0x0000ff3e) dt_sta_indi_pane_g2

0xd8bc,	// (0x0000ff47) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x00012517) dt_sta_indi_pane_g

0xd8c5,	// (0x0000ff50) dt_sta_signal_pane

0xe760,	// (0x00010deb) bg_dt_sta_title_pane_ParamLimits

0xe760,	// (0x00010deb) bg_dt_sta_title_pane

0xd8ce,	// (0x0000ff59) dt_sta_title_pane_g1

0xd8d6,	// (0x0000ff61) dt_sta_title_pane_t1_ParamLimits

0xd8d6,	// (0x0000ff61) dt_sta_title_pane_t1

0xddc1,	// (0x0001044c) bg_dt_sta_control_pane

0xd8eb,	// (0x0000ff76) dt_sta_controll_pane_g1

0xd8f4,	// (0x0000ff7f) bg_dt_sta_title_pane_g1

0xd8fd,	// (0x0000ff88) bg_dt_sta_title_pane_g2

0xd906,	// (0x0000ff91) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x0001251e) bg_dt_sta_title_pane_g

0x40d1,	// (0x0000675c) bg_dt_sta_indi_pane_g1

0x7f65,	// (0x0000a5f0) dt_sta_signal_pane_g1

0x7f6d,	// (0x0000a5f8) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x00012525) dt_sta_signal_pane_g

0x7f75,	// (0x0000a600) dt_sta_battery_pane_g1

0x7f7e,	// (0x0000a609) dt_sta_battery_pane_t1

0x40d1,	// (0x0000675c) bg_dt_sta_control_pane_g1

0xf015,	// (0x000116a0) fep_china_uni_eep_pane

0xf01d,	// (0x000116a8) fep_china_uni_entry_pane_ParamLimits

0xf02d,	// (0x000116b8) popup_fep_china_uni_window_g1_ParamLimits

0xf03d,	// (0x000116c8) popup_fep_china_uni_window_g2_ParamLimits

0xf03d,	// (0x000116c8) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00011da3) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00011da3) popup_fep_china_uni_window_g

0x7f8d,	// (0x0000a618) fep_china_uni_eep_pane_g1

0x7f95,	// (0x0000a620) fep_china_uni_eep_pane_t1

0x7507,	// (0x00009b92) aid_touch_area_size_smil_player

0x0d1a,	// (0x000033a5) lc0_clock_pane

0x0f19,	// (0x000035a4) status_pane_g5_ParamLimits

0x0f19,	// (0x000035a4) status_pane_g5

0xa97a,	// (0x0000d005) popup_keymap_window

0x0ed7,	// (0x00003562) status_icon_pane

0x7c00,	// (0x0000a28b) cell_ai5_widget_pane_g3_ParamLimits

0x7c17,	// (0x0000a2a2) cell_ai5_widget_pane_g4_ParamLimits

0x7c23,	// (0x0000a2ae) cell_ai5_widget_pane_g5_ParamLimits

0x7c47,	// (0x0000a2d2) cell_ai5_widget_pane_g8_ParamLimits

0x7c47,	// (0x0000a2d2) cell_ai5_widget_pane_g8

0x7c5b,	// (0x0000a2e6) cell_ai5_widget_pane_g9_ParamLimits

0x7c5b,	// (0x0000a2e6) cell_ai5_widget_pane_g9

0x7c6f,	// (0x0000a2fa) cell_ai5_widget_pane_g10_ParamLimits

0x7c6f,	// (0x0000a2fa) cell_ai5_widget_pane_g10

0x7fa4,	// (0x0000a62f) status_icon_pane_g1

0xddc1,	// (0x0001044c) bg_popup_sub_pane_cp13

0x7fac,	// (0x0000a637) popup_keymap_window_t1

0xa669,	// (0x0000ccf4) control_pane_g6_ParamLimits

0xa669,	// (0x0000ccf4) control_pane_g6

0xa676,	// (0x0000cd01) control_pane_g7_ParamLimits

0xa676,	// (0x0000cd01) control_pane_g7

0xa683,	// (0x0000cd0e) control_pane_g8_ParamLimits

0xa683,	// (0x0000cd0e) control_pane_g8

0xd876,	// (0x0000ff01) dt_sta_controll_pane_ParamLimits

0xd883,	// (0x0000ff0e) dt_sta_indi_pane_ParamLimits

0xd890,	// (0x0000ff1b) dt_sta_title_pane_ParamLimits

0xe604,	// (0x00010c8f) aid_size_touch_scroll_bar_cale

0xdf66,	// (0x000105f1) popup_discreet_window_ParamLimits

0xdf66,	// (0x000105f1) popup_discreet_window

0x96a9,	// (0x0000bd34) popup_sk_window

0x1966,	// (0x00003ff1) bg_popup_sub_pane_cp28_ParamLimits

0x1966,	// (0x00003ff1) bg_popup_sub_pane_cp28

0x7fba,	// (0x0000a645) popup_discreet_window_g1_ParamLimits

0x7fba,	// (0x0000a645) popup_discreet_window_g1

0x7fda,	// (0x0000a665) popup_discreet_window_t1_ParamLimits

0x7fda,	// (0x0000a665) popup_discreet_window_t1

0x7ff8,	// (0x0000a683) popup_discreet_window_t2_ParamLimits

0x7ff8,	// (0x0000a683) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x0001252a) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x0001252a) popup_discreet_window_t

0x804a,	// (0x0000a6d5) popup_sk_window_g1

0x8054,	// (0x0000a6df) popup_sk_window_g2

0x0001,

0xfea6,	// (0x00012531) popup_sk_window_g

0x805e,	// (0x0000a6e9) popup_sk_window_t1

0x806e,	// (0x0000a6f9) popup_sk_window_t1_copy1

0x7bf0,	// (0x0000a27b) cell_ai5_widget_pane_g2_ParamLimits

0x7d49,	// (0x0000a3d4) cell_ai5_widget_pane_t9_ParamLimits

0x7d49,	// (0x0000a3d4) cell_ai5_widget_pane_t9

0xddc1,	// (0x0001044c) main_fep_fshwr2_pane

0xd90f,	// (0x0000ff9a) aid_fshwr2_btn_pane

0xd920,	// (0x0000ffab) aid_fshwr2_syb_pane

0xd931,	// (0x0000ffbc) aid_fshwr2_txt_pane

0xd93d,	// (0x0000ffc8) fshwr2_func_candi_pane

0xd95e,	// (0x0000ffe9) fshwr2_hwr_syb_pane

0xd97b,	// (0x00010006) fshwr2_icf_pane

0xddc1,	// (0x0001044c) fshwr2_icf_bg_pane

0x80f0,	// (0x0000a77b) fshwr2_icf_pane_t1_ParamLimits

0x80f0,	// (0x0000a77b) fshwr2_icf_pane_t1

0xeeba,	// (0x00011545) fshwr2_func_candi_pane_g1

0xd9a7,	// (0x00010032) fshwr2_func_candi_row_pane_ParamLimits

0xd9a7,	// (0x00010032) fshwr2_func_candi_row_pane

0xd9c3,	// (0x0001004e) cell_fshwr2_syb_pane_ParamLimits

0xd9c3,	// (0x0001004e) cell_fshwr2_syb_pane

0x4576,	// (0x00006c01) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4576,	// (0x00006c01) fshwr2_hwr_syb_pane_g1

0xddc1,	// (0x0001044c) bg_popup_call_pane_cp01

0xd9d9,	// (0x00010064) fshwr2_func_candi_cell_pane_ParamLimits

0xd9d9,	// (0x00010064) fshwr2_func_candi_cell_pane

0xda1f,	// (0x000100aa) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xda1f,	// (0x000100aa) fshwr2_func_candi_cell_bg_pane

0xda2b,	// (0x000100b6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xda2b,	// (0x000100b6) fshwr2_func_candi_cell_pane_g1

0xda62,	// (0x000100ed) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xda62,	// (0x000100ed) fshwr2_func_candi_cell_pane_t1

0xddc1,	// (0x0001044c) bg_button_pane_cp08

0x81b7,	// (0x0000a842) cell_fshwr2_syb_bg_pane

0xda7d,	// (0x00010108) cell_fshwr2_syb_bg_pane_g1

0xda85,	// (0x00010110) cell_fshwr2_syb_bg_pane_t1

0xe760,	// (0x00010deb) main_tmo_pane

0xb78c,	// (0x0000de17) uni_indicator_pane_g1_ParamLimits

0xb7a2,	// (0x0000de2d) uni_indicator_pane_g2_ParamLimits

0xb7b8,	// (0x0000de43) uni_indicator_pane_g3_ParamLimits

0xb7cd,	// (0x0000de58) uni_indicator_pane_g4_ParamLimits

0xb7cd,	// (0x0000de58) uni_indicator_pane_g4

0x264b,	// (0x00004cd6) uni_indicator_pane_g5_ParamLimits

0x264b,	// (0x00004cd6) uni_indicator_pane_g5

0x264b,	// (0x00004cd6) uni_indicator_pane_g6_ParamLimits

0x264b,	// (0x00004cd6) uni_indicator_pane_g6

0xf910,	// (0x00011f9b) uni_indicator_pane_g_ParamLimits

0xc51d,	// (0x0000eba8) popup_tmo_note_window_ParamLimits

0xc51d,	// (0x0000eba8) popup_tmo_note_window

0xe760,	// (0x00010deb) fshwr2_bg_pane

0xda53,	// (0x000100de) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xda53,	// (0x000100de) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x00012536) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x00012536) fshwr2_func_candi_cell_pane_g

0x40d1,	// (0x0000675c) bg_popup_window_pane_cp01

0x81d6,	// (0x0000a861) bg_popup_window_pane_g1_cp01

0x81df,	// (0x0000a86a) bg_popup_window_pane_cp22_ParamLimits

0x81df,	// (0x0000a86a) bg_popup_window_pane_cp22

0x81ed,	// (0x0000a878) listscroll_tmo_link_pane_ParamLimits

0x81ed,	// (0x0000a878) listscroll_tmo_link_pane

0x822d,	// (0x0000a8b8) popup_tmo_note_window_g1_ParamLimits

0x822d,	// (0x0000a8b8) popup_tmo_note_window_g1

0x823a,	// (0x0000a8c5) tmo_note_info_pane_ParamLimits

0x823a,	// (0x0000a8c5) tmo_note_info_pane

0xda94,	// (0x0001011f) list_tmo_note_info_pane_g1_ParamLimits

0xda94,	// (0x0001011f) list_tmo_note_info_pane_g1

0x826b,	// (0x0000a8f6) list_tmo_note_info_pane_g2_ParamLimits

0x826b,	// (0x0000a8f6) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x0001253b) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x0001253b) list_tmo_note_info_pane_g

0x8287,	// (0x0000a912) list_tmo_note_info_text_pane_ParamLimits

0x8287,	// (0x0000a912) list_tmo_note_info_text_pane

0x830c,	// (0x0000a997) list_tmo_link_pane

0x8319,	// (0x0000a9a4) scroll_pane_cp20

0x8326,	// (0x0000a9b1) list_single_tmo_link_pane_ParamLimits

0x8326,	// (0x0000a9b1) list_single_tmo_link_pane

0x8336,	// (0x0000a9c1) list_single_tmo_link_pane_t1

0x8344,	// (0x0000a9cf) list_tmo_note_info_text_pane_t1_ParamLimits

0x8344,	// (0x0000a9cf) list_tmo_note_info_text_pane_t1

0xa09e,	// (0x0000c729) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa09e,	// (0x0000c729) aid_size_touch_scroll_bar_cp01

0x9fcd,	// (0x0000c658) aid_size_touch_slider_marker

0x9699,	// (0x0000bd24) popup_settings_window_ParamLimits

0x9699,	// (0x0000bd24) popup_settings_window

0x0569,	// (0x00002bf4) popup_candi_list_indi_window

0x0bc2,	// (0x0000324d) aid_touch_navi_pane_ParamLimits

0x5f7e,	// (0x00008609) rs_clock_indi_pane

0x5f87,	// (0x00008612) sctrl_sk_bottom_pane_ParamLimits

0x5f98,	// (0x00008623) sctrl_sk_top_pane_ParamLimits

0x67dc,	// (0x00008e67) popup_fep_tooltip_window

0x7b6e,	// (0x0000a1f9) aid_size_cell_widget_grid_ParamLimits

0x7bdb,	// (0x0000a266) cell_ai5_widget_pane_g1_ParamLimits

0x7bdb,	// (0x0000a266) cell_ai5_widget_pane_g1

0xd838,	// (0x0000fec3) cell_ai5_widget_pane_g6_ParamLimits

0xd844,	// (0x0000fecf) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x000124b9) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x000124b9) cell_ai5_widget_pane_g

0x7d6d,	// (0x0000a3f8) cell_ai5_widget_pane_t10_ParamLimits

0x7d6d,	// (0x0000a3f8) cell_ai5_widget_pane_t10

0x7d8b,	// (0x0000a416) grid_ai5_widget_pane_ParamLimits

0x7e23,	// (0x0000a4ae) cell_contacts_ai5_widget_pane_ParamLimits

0x7e23,	// (0x0000a4ae) cell_contacts_ai5_widget_pane

0x800d,	// (0x0000a698) popup_discreet_window_t3_ParamLimits

0x800d,	// (0x0000a698) popup_discreet_window_t3

0xd993,	// (0x0001001e) popup_fshwr2_char_preview_window_ParamLimits

0xd993,	// (0x0001001e) popup_fshwr2_char_preview_window

0xdaab,	// (0x00010136) tmo_note_info_pane_t1

0xdac0,	// (0x0001014b) tmo_note_info_pane_t2

0xdad9,	// (0x00010164) tmo_note_info_pane_t3

0x82e8,	// (0x0000a973) tmo_note_info_pane_t4

0x82fa,	// (0x0000a985) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x00012540) tmo_note_info_pane_t

0x830c,	// (0x0000a997) list_tmo_link_pane_ParamLimits

0x8319,	// (0x0000a9a4) scroll_pane_cp20_ParamLimits

0xddc1,	// (0x0001044c) bg_popup_fep_char_preview_window_cp01

0x835d,	// (0x0000a9e8) popup_fshwr2_char_preview_window_t1

0x836b,	// (0x0000a9f6) popup_candi_list_indi_window_g1

0x8374,	// (0x0000a9ff) bg_cell_contacts_ai5_widget_pane

0x8380,	// (0x0000aa0b) cell_contacts_ai5_widget_pane_g1

0x8395,	// (0x0000aa20) cell_contacts_ai5_widget_pane_g2

0x83a1,	// (0x0000aa2c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x0001254b) cell_contacts_ai5_widget_pane_g

0x83ad,	// (0x0000aa38) cell_contacts_ai5_widget_pane_t1

0xe760,	// (0x00010deb) highlight_cell_shortcut_ai5_widget_pane_cp01

0xdb53,	// (0x000101de) settings_container_pane

0xf546,	// (0x00011bd1) listscroll_set_pane_copy1

0x3475,	// (0x00005b00) scroll_pane_cp121_copy1

0x8430,	// (0x0000aabb) set_content_pane_copy1

0xdb5f,	// (0x000101ea) aid_height_set_list_copy1_ParamLimits

0xdb5f,	// (0x000101ea) aid_height_set_list_copy1

0x294f,	// (0x00004fda) aid_size_parent_copy1_ParamLimits

0x294f,	// (0x00004fda) aid_size_parent_copy1

0xdb6b,	// (0x000101f6) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdb6b,	// (0x000101f6) button_value_adjust_pane_cp6_copy1

0x0541,	// (0x00002bcc) list_highlight_pane_cp2_copy1_ParamLimits

0x0541,	// (0x00002bcc) list_highlight_pane_cp2_copy1

0xdb7f,	// (0x0001020a) list_set_pane_copy1_ParamLimits

0xdb7f,	// (0x0001020a) list_set_pane_copy1

0xdaee,	// (0x00010179) main_pane_set_t1_copy1_ParamLimits

0xdaee,	// (0x00010179) main_pane_set_t1_copy1

0xdb28,	// (0x000101b3) main_pane_set_t2_copy1_ParamLimits

0xdb28,	// (0x000101b3) main_pane_set_t2_copy1

0xdc46,	// (0x000102d1) main_pane_set_t3_copy1

0xdc54,	// (0x000102df) main_pane_set_t4_copy1

0xdb47,	// (0x000101d2) set_content_pane_g1_copy1_ParamLimits

0xdb47,	// (0x000101d2) set_content_pane_g1_copy1

0xdc62,	// (0x000102ed) setting_code_pane_copy1

0x8543,	// (0x0000abce) setting_slider_graphic_pane_copy1

0x8543,	// (0x0000abce) setting_slider_pane_copy1

0x8543,	// (0x0000abce) setting_text_pane_copy1

0x8543,	// (0x0000abce) setting_volume_pane_copy1

0xdc62,	// (0x000102ed) settings_code_pane_cp2_copy1

0xdc6a,	// (0x000102f5) settings_code_pane_cp_copy1_ParamLimits

0xdc6a,	// (0x000102f5) settings_code_pane_cp_copy1

0xdc7e,	// (0x00010309) volume_set_pane_copy1

0xdc8a,	// (0x00010315) volume_set_pane_g10_copy1

0xdc96,	// (0x00010321) volume_set_pane_g1_copy1

0xdca0,	// (0x0001032b) volume_set_pane_g2_copy1

0xdcaa,	// (0x00010335) volume_set_pane_g3_copy1

0xdcb4,	// (0x0001033f) volume_set_pane_g4_copy1

0xdcbe,	// (0x00010349) volume_set_pane_g5_copy1

0xdcc8,	// (0x00010353) volume_set_pane_g6_copy1

0xdcd2,	// (0x0001035d) volume_set_pane_g7_copy1

0xdcdc,	// (0x00010367) volume_set_pane_g8_copy1

0xdce6,	// (0x00010371) volume_set_pane_g9_copy1

0xe00a,	// (0x00010695) bg_set_opt_pane_cp_copy1_ParamLimits

0xe00a,	// (0x00010695) bg_set_opt_pane_cp_copy1

0x85d1,	// (0x0000ac5c) setting_slider_pane_t1_copy1_ParamLimits

0x85d1,	// (0x0000ac5c) setting_slider_pane_t1_copy1

0xdcf0,	// (0x0001037b) setting_slider_pane_t2_copy1_ParamLimits

0xdcf0,	// (0x0001037b) setting_slider_pane_t2_copy1

0xdd0a,	// (0x00010395) setting_slider_pane_t3_copy1_ParamLimits

0xdd0a,	// (0x00010395) setting_slider_pane_t3_copy1

0xdd22,	// (0x000103ad) slider_set_pane_copy1_ParamLimits

0xdd22,	// (0x000103ad) slider_set_pane_copy1

0xe829,	// (0x00010eb4) set_opt_bg_pane_g1_copy2

0xe831,	// (0x00010ebc) set_opt_bg_pane_g2_copy2

0x8637,	// (0x0000acc2) set_opt_bg_pane_g3_copy2

0xe841,	// (0x00010ecc) set_opt_bg_pane_g4_copy2

0xe849,	// (0x00010ed4) set_opt_bg_pane_g5_copy2

0xe851,	// (0x00010edc) set_opt_bg_pane_g6_copy2

0xdd38,	// (0x000103c3) set_opt_bg_pane_g7_copy2

0x864b,	// (0x0000acd6) set_opt_bg_pane_g8_copy2

0x8655,	// (0x0000ace0) set_opt_bg_pane_g9_copy2

0x865f,	// (0x0000acea) aid_size_touch_slider_mark_copy1_ParamLimits

0x865f,	// (0x0000acea) aid_size_touch_slider_mark_copy1

0x8673,	// (0x0000acfe) slider_set_pane_g1_copy1

0x867c,	// (0x0000ad07) slider_set_pane_g2_copy1

0x28b6,	// (0x00004f41) slider_set_pane_g3_copy1_ParamLimits

0x28b6,	// (0x00004f41) slider_set_pane_g3_copy1

0x28ca,	// (0x00004f55) slider_set_pane_g4_copy1_ParamLimits

0x28ca,	// (0x00004f55) slider_set_pane_g4_copy1

0x28e2,	// (0x00004f6d) slider_set_pane_g5_copy1_ParamLimits

0x28e2,	// (0x00004f6d) slider_set_pane_g5_copy1

0x28b6,	// (0x00004f41) slider_set_pane_g6_copy1_ParamLimits

0x28b6,	// (0x00004f41) slider_set_pane_g6_copy1

0xdd42,	// (0x000103cd) slider_set_pane_g7_copy1_ParamLimits

0xdd42,	// (0x000103cd) slider_set_pane_g7_copy1

0xdf44,	// (0x000105cf) bg_set_opt_pane_cp2_copy1

0x869a,	// (0x0000ad25) setting_slider_graphic_pane_g1_copy1

0xdd58,	// (0x000103e3) setting_slider_graphic_pane_t1_copy1

0xdd68,	// (0x000103f3) setting_slider_graphic_pane_t2_copy1

0xdd78,	// (0x00010403) slider_set_pane_cp_copy1

0x86d3,	// (0x0000ad5e) input_focus_pane_cp1_copy1

0x86dc,	// (0x0000ad67) list_set_text_pane_copy1

0x86e4,	// (0x0000ad6f) setting_text_pane_g1_copy1

0xe0b8,	// (0x00010743) set_text_pane_t1_copy1

0x86d3,	// (0x0000ad5e) input_focus_pane_cp2_copy1

0x86e4,	// (0x0000ad6f) setting_code_pane_g1_copy1

0xdd80,	// (0x0001040b) setting_code_pane_t1_copy1

0xdd8e,	// (0x00010419) list_set_graphic_pane_copy1

0xdf44,	// (0x000105cf) bg_set_opt_pane_cp4_copy1

0xa3ec,	// (0x0000ca77) list_set_graphic_pane_g1_copy1_ParamLimits

0xa3ec,	// (0x0000ca77) list_set_graphic_pane_g1_copy1

0xdda0,	// (0x0001042b) list_set_graphic_pane_g2_copy1

0xa404,	// (0x0000ca8f) list_set_graphic_pane_t1_copy1_ParamLimits

0xa404,	// (0x0000ca8f) list_set_graphic_pane_t1_copy1

0x40d1,	// (0x0000675c) rs_clock_indi_pane_g1

0x872e,	// (0x0000adb9) rs_clock_indi_pane_t1

0x873c,	// (0x0000adc7) rs_indi_pane

0x8744,	// (0x0000adcf) rs_indi_pane_g1

0x874d,	// (0x0000add8) rs_indi_pane_g2

0x8756,	// (0x0000ade1) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x00012552) rs_indi_pane_g

0xf546,	// (0x00011bd1) bg_popup_preview_window_pane_cp03

0x875f,	// (0x0000adea) popup_fep_tooltip_window_t1

0x5344,	// (0x000079cf) popup_note2_window_g2_ParamLimits

0x5344,	// (0x000079cf) popup_note2_window_g2

0x0001,

0xfc60,	// (0x000122eb) popup_note2_window_g_ParamLimits

0xfc60,	// (0x000122eb) popup_note2_window_g

0x5953,	// (0x00007fde) bg_popup_sub_pane_cp11_ParamLimits

0x5960,	// (0x00007feb) cell_ai3_links_pane_g1_ParamLimits

0x5977,	// (0x00008002) cell_ai3_links_pane_t1

0xe0b8,	// (0x00010743) set_text_pane_t1_copy1_ParamLimits

0xa483,	// (0x0000cb0e) cell_graphic_popup_pane_cp2_ParamLimits

0xa483,	// (0x0000cb0e) cell_graphic_popup_pane_cp2

0xdda8,	// (0x00010433) cell_graphic_popup_pane_g1_cp2

0xe417,	// (0x00010aa2) cell_graphic_popup_pane_g2_cp2

0x8775,	// (0x0000ae00) cell_graphic_popup_pane_g3_cp2

0x877d,	// (0x0000ae08) cell_graphic_popup_pane_t2_cp2

0xe428,	// (0x00010ab3) grid_highlight_pane_cp3_cp2

0xeca9,	// (0x00011334) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe760,	// (0x00010deb) main_tmo_pane_ParamLimits

0xc511,	// (0x0000eb9c) popup_tmo_big_image_note_window

0x7bca,	// (0x0000a255) cell_ai5_widget_list_pane

0x7bd2,	// (0x0000a25d) cell_ai5_widget_lrg_icon_pane

0xdaab,	// (0x00010136) tmo_note_info_pane_t1_ParamLimits

0xdac0,	// (0x0001014b) tmo_note_info_pane_t2_ParamLimits

0xdad9,	// (0x00010164) tmo_note_info_pane_t3_ParamLimits

0x82e8,	// (0x0000a973) tmo_note_info_pane_t4_ParamLimits

0x82fa,	// (0x0000a985) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x00012540) tmo_note_info_pane_t_ParamLimits

0xdb53,	// (0x000101de) settings_container_pane_ParamLimits

0x86cb,	// (0x0000ad56) indicator_popup_pane_cp5

0x86cb,	// (0x0000ad56) indicator_popup_pane_cp6

0xdd8e,	// (0x00010419) list_set_graphic_pane_copy1_ParamLimits

0xddc1,	// (0x0001044c) bg_popup_window_pane_cp23

0x878b,	// (0x0000ae16) popup_tmo_big_image_note_window_g1

0x8797,	// (0x0000ae22) popup_tmo_big_image_note_window_t1

0x87a7,	// (0x0000ae32) popup_tmo_big_image_note_window_t2

0x87b7,	// (0x0000ae42) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x00012559) popup_tmo_big_image_note_window_t

0x40d1,	// (0x0000675c) cell_ai5_widget_lrg_icon_pane_g1

0x87c7,	// (0x0000ae52) cell_ai5_widget_lrg_icon_pane_t1

0x87d5,	// (0x0000ae60) cell_ai5_widget_list_row_pane_ParamLimits

0x87d5,	// (0x0000ae60) cell_ai5_widget_list_row_pane

0x87ed,	// (0x0000ae78) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x87ed,	// (0x0000ae78) cell_ai5_widget_list_row_pane_g1

0x87fa,	// (0x0000ae85) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x87fa,	// (0x0000ae85) cell_ai5_widget_list_row_pane_t1

0x8825,	// (0x0000aeb0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8825,	// (0x0000aeb0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x00012560) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x00012560) cell_ai5_widget_list_row_pane_t

0xddc1,	// (0x0001044c) main_fep_vtchi_ss_pane

0x8869,	// (0x0000aef4) popup_fep_char_pre_window

0x8871,	// (0x0000aefc) popup_fep_ituss_window

0x8892,	// (0x0000af1d) popup_fep_vkbss_window

0x88b3,	// (0x0000af3e) grid_vkbss_keypad_pane_ParamLimits

0x88b3,	// (0x0000af3e) grid_vkbss_keypad_pane

0x88c3,	// (0x0000af4e) ituss_keypad_pane

0x88de,	// (0x0000af69) aid_vkbss_key_offset_ParamLimits

0x88de,	// (0x0000af69) aid_vkbss_key_offset

0x88ea,	// (0x0000af75) cell_vkbss_key_pane_ParamLimits

0x88ea,	// (0x0000af75) cell_vkbss_key_pane

0x8900,	// (0x0000af8b) bg_cell_vkbss_key_g1_ParamLimits

0x8900,	// (0x0000af8b) bg_cell_vkbss_key_g1

0x890c,	// (0x0000af97) cell_vkbss_key_3p_pane_ParamLimits

0x890c,	// (0x0000af97) cell_vkbss_key_3p_pane

0x8926,	// (0x0000afb1) cell_vkbss_key_g1_ParamLimits

0x8926,	// (0x0000afb1) cell_vkbss_key_g1

0x8940,	// (0x0000afcb) cell_vkbss_key_t1_ParamLimits

0x8940,	// (0x0000afcb) cell_vkbss_key_t1

0x896b,	// (0x0000aff6) cell_ituss_key_pane_ParamLimits

0x896b,	// (0x0000aff6) cell_ituss_key_pane

0x897c,	// (0x0000b007) bg_cell_ituss_key_g1_ParamLimits

0x897c,	// (0x0000b007) bg_cell_ituss_key_g1

0x8988,	// (0x0000b013) cell_ituss_key_pane_g1_ParamLimits

0x8988,	// (0x0000b013) cell_ituss_key_pane_g1

0x899c,	// (0x0000b027) cell_ituss_key_pane_g2_ParamLimits

0x899c,	// (0x0000b027) cell_ituss_key_pane_g2

0x0002,

0xfedc,	// (0x00012567) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x00012567) cell_ituss_key_pane_g

0x89da,	// (0x0000b065) cell_ituss_key_t1_ParamLimits

0x89da,	// (0x0000b065) cell_ituss_key_t1

0x8a14,	// (0x0000b09f) cell_ituss_key_t2_ParamLimits

0x8a14,	// (0x0000b09f) cell_ituss_key_t2

0x8a45,	// (0x0000b0d0) cell_ituss_key_t3_ParamLimits

0x8a45,	// (0x0000b0d0) cell_ituss_key_t3

0x8a14,	// (0x0000b09f) cell_ituss_key_t4_ParamLimits

0x8a14,	// (0x0000b09f) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x0001256e) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x0001256e) cell_ituss_key_t

0x8a88,	// (0x0000b113) cell_vkbss_key_3p_pane_g1

0x8a90,	// (0x0000b11b) cell_vkbss_key_3p_pane_g2

0x8a98,	// (0x0000b123) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00012579) cell_vkbss_key_3p_pane_g

0xddc1,	// (0x0001044c) bg_popup_fep_char_preview_window_cp02

0x8aa0,	// (0x0000b12b) popup_fep_char_pre_window_t1

0xd82e,	// (0x0000feb9) main_ai5_sk_pane

0x8374,	// (0x0000a9ff) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8380,	// (0x0000aa0b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8395,	// (0x0000aa20) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x83a1,	// (0x0000aa2c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x0001254b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x83ad,	// (0x0000aa38) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe760,	// (0x00010deb) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xddb0,	// (0x0001043b) main_ai5_sk_pane_g1

0x179e,	// (0x00003e29) popup_query_code_window_g1

0x8887,	// (0x0000af12) popup_fep_vkb_icf_pane

0x889d,	// (0x0000af28) popup_fep_vtchi_icf_pane

0x8ab8,	// (0x0000b143) bg_icf_pane

0x8ac4,	// (0x0000b14f) list_vkb_icf_pane

0x8ad0,	// (0x0000b15b) bg_icf_pane_cp01

0x8ae3,	// (0x0000b16e) vtchi_icf_list_pane

0x8af4,	// (0x0000b17f) list_vkb_icf_pane_t1_ParamLimits

0x8af4,	// (0x0000b17f) list_vkb_icf_pane_t1

0x8b0a,	// (0x0000b195) vtchi_icf_list_pane_t1_ParamLimits

0x8b0a,	// (0x0000b195) vtchi_icf_list_pane_t1

0x8871,	// (0x0000aefc) popup_fep_ituss_window_ParamLimits

0x889d,	// (0x0000af28) popup_fep_vtchi_icf_pane_ParamLimits

0x88c3,	// (0x0000af4e) ituss_keypad_pane_ParamLimits

0x88d2,	// (0x0000af5d) ituss_sks_pane

0x8ab8,	// (0x0000b143) bg_icf_pane_ParamLimits

0x884d,	// (0x0000aed8) icf_edit_indi_pane_ParamLimits

0x884d,	// (0x0000aed8) icf_edit_indi_pane

0x8ac4,	// (0x0000b14f) list_vkb_icf_pane_ParamLimits

0x8ad0,	// (0x0000b15b) bg_icf_pane_cp01_ParamLimits

0x885c,	// (0x0000aee7) icf_edit_indi_pane_cp01_ParamLimits

0x885c,	// (0x0000aee7) icf_edit_indi_pane_cp01

0x8aeb,	// (0x0000b176) vtchi_query_pane

0x4576,	// (0x00006c01) icf_edit_indi_pane_g1_ParamLimits

0x4576,	// (0x00006c01) icf_edit_indi_pane_g1

0x8b8c,	// (0x0000b217) icf_edit_indi_pane_g2_ParamLimits

0x8b8c,	// (0x0000b217) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x00012591) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x00012591) icf_edit_indi_pane_g

0x8b9b,	// (0x0000b226) icf_edit_indi_pane_t1

0x8b22,	// (0x0000b1ad) bg_input_focus_pane_cp042

0xe5fb,	// (0x00010c86) vtchi_button_pane

0x8b2b,	// (0x0000b1b6) vtchi_query_pane_t1

0x8b39,	// (0x0000b1c4) vtchi_query_pane_t2

0x8b47,	// (0x0000b1d2) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x00012580) vtchi_query_pane_t

0xddc1,	// (0x0001044c) bg_button_pane_cp13

0x8b55,	// (0x0000b1e0) vtchi_button_pane_g1

0x8b5d,	// (0x0000b1e8) ituss_sks_pane_g1

0x8b68,	// (0x0000b1f3) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x00012587) ituss_sks_pane_g

0x8b70,	// (0x0000b1fb) ituss_sks_pane_t1

0x8b7e,	// (0x0000b209) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x0001258c) ituss_sks_pane_t

0x3ada,	// (0x00006165) indicator_nsta_pane_cp_g1

0x3ae3,	// (0x0000616e) indicator_nsta_pane_cp_g2

0x3aeb,	// (0x00006176) indicator_nsta_pane_cp_g3

0x3af3,	// (0x0000617e) indicator_nsta_pane_cp_g4

0x3afb,	// (0x00006186) indicator_nsta_pane_cp_g5

0x3b03,	// (0x0000618e) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x00012135) indicator_nsta_pane_cp_g

0xd2ed,	// (0x0000f978) cell_graphic2_pane_t2_ParamLimits

0xd2ed,	// (0x0000f978) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x00012442) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x00012442) cell_graphic2_pane_t

0xd323,	// (0x0000f9ae) cell_graphic2_control_pane_t1

0xa2e7,	// (0x0000c972) signal_pane_g3_ParamLimits

0xa2e7,	// (0x0000c972) signal_pane_g3

0xa2fb,	// (0x0000c986) signal_pane_g4_ParamLimits

0xa2fb,	// (0x0000c986) signal_pane_g4

0x8837,	// (0x0000aec2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8837,	// (0x0000aec2) cell_ai5_widget_list_row_pane_t3

0x89c8,	// (0x0000b053) cell_ituss_key_pane_t1_ParamLimits

0x89c8,	// (0x0000b053) cell_ituss_key_pane_t1

0x13ec,	// (0x00003a77) form_field_data_wide_pane_vc_t2_ParamLimits

0x13ec,	// (0x00003a77) form_field_data_wide_pane_vc_t2

0x1400,	// (0x00003a8b) form_field_data_wide_pane_vc_t3_ParamLimits

0x1400,	// (0x00003a8b) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f8,	// (0x00011e83) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f8,	// (0x00011e83) form_field_data_wide_pane_vc_t

0x378b,	// (0x00005e16) form_field_slider_wide_pane_vc_t3_ParamLimits

0x378b,	// (0x00005e16) form_field_slider_wide_pane_vc_t3

0x3861,	// (0x00005eec) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3861,	// (0x00005eec) form_field_popup_wide_pane_vc_t2

0x3878,	// (0x00005f03) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3878,	// (0x00005f03) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x00012124) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x00012124) form_field_popup_wide_pane_vc_t

0xd90f,	// (0x0000ff9a) aid_fshwr2_btn_pane_ParamLimits

0xd920,	// (0x0000ffab) aid_fshwr2_syb_pane_ParamLimits

0xd931,	// (0x0000ffbc) aid_fshwr2_txt_pane_ParamLimits

0xe760,	// (0x00010deb) fshwr2_bg_pane_ParamLimits

0xd93d,	// (0x0000ffc8) fshwr2_func_candi_pane_ParamLimits

0xd95e,	// (0x0000ffe9) fshwr2_hwr_syb_pane_ParamLimits

0xd97b,	// (0x00010006) fshwr2_icf_pane_ParamLimits

0x36ff,	// (0x00005d8a) list_double_graphic_pane_vc_g4_ParamLimits

0x36ff,	// (0x00005d8a) list_double_graphic_pane_vc_g4

0x89bc,	// (0x0000b047) cell_ituss_key_pane_g3_ParamLimits

0x89bc,	// (0x0000b047) cell_ituss_key_pane_g3

0x8a76,	// (0x0000b101) cell_ituss_key_t5_ParamLimits

0x8a76,	// (0x0000b101) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal

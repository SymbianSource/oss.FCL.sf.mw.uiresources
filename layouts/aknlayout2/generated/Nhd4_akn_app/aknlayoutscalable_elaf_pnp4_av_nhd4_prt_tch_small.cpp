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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000ec70 };

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
0x2068,	// (0x00010cd8) Screen

0x207c,	// (0x00010cec) application_window_ParamLimits

0x207c,	// (0x00010cec) application_window

0x2096,	// (0x00010d06) screen_g1

0xd4b8,	// (0x0001c128) area_bottom_pane_ParamLimits

0xd4b8,	// (0x0001c128) area_bottom_pane

0xd578,	// (0x0001c1e8) area_top_pane_ParamLimits

0xd578,	// (0x0001c1e8) area_top_pane

0xd60c,	// (0x0001c27c) main_pane_ParamLimits

0xd60c,	// (0x0001c27c) main_pane

0x20a0,	// (0x00010d10) misc_graphics

0x4770,	// (0x000133e0) battery_pane_ParamLimits

0x4770,	// (0x000133e0) battery_pane

0x5542,	// (0x000141b2) bg_status_flat_pane_g8

0x554a,	// (0x000141ba) bg_status_flat_pane_g9

0x4832,	// (0x000134a2) context_pane_ParamLimits

0x4832,	// (0x000134a2) context_pane

0x4948,	// (0x000135b8) navi_pane_ParamLimits

0x4948,	// (0x000135b8) navi_pane

0x49c6,	// (0x00013636) signal_pane_ParamLimits

0x49c6,	// (0x00013636) signal_pane

0x0008,

0xf879,	// (0x0001e4e9) bg_status_flat_pane_g

0x4a33,	// (0x000136a3) status_pane_g1_ParamLimits

0x4a33,	// (0x000136a3) status_pane_g1

0x4a47,	// (0x000136b7) status_pane_g2_ParamLimits

0x4a47,	// (0x000136b7) status_pane_g2

0x4a53,	// (0x000136c3) status_pane_g3_ParamLimits

0x4a53,	// (0x000136c3) status_pane_g3

0x0004,

0xf7b3,	// (0x0001e423) status_pane_g_ParamLimits

0xf7b3,	// (0x0001e423) status_pane_g

0x4a85,	// (0x000136f5) title_pane_ParamLimits

0x4a85,	// (0x000136f5) title_pane

0x4ac2,	// (0x00013732) uni_indicator_pane_ParamLimits

0x4ac2,	// (0x00013732) uni_indicator_pane

0x40e9,	// (0x00012d59) bg_list_pane_ParamLimits

0x40e9,	// (0x00012d59) bg_list_pane

0xde97,	// (0x0001cb07) find_pane

0x4111,	// (0x00012d81) listscroll_app_pane_ParamLimits

0x4111,	// (0x00012d81) listscroll_app_pane

0x411d,	// (0x00012d8d) listscroll_form_pane

0xde9f,	// (0x0001cb0f) listscroll_gen_pane_ParamLimits

0xde9f,	// (0x0001cb0f) listscroll_gen_pane

0x411d,	// (0x00012d8d) listscroll_set_pane

0x32c3,	// (0x00011f33) main_idle_act_pane

0x3dd1,	// (0x00012a41) main_idle_trad_pane

0x3dd1,	// (0x00012a41) main_list_empty_pane

0x414b,	// (0x00012dbb) main_midp_pane

0x4157,	// (0x00012dc7) main_pane_g1_ParamLimits

0x4157,	// (0x00012dc7) main_pane_g1

0x4165,	// (0x00012dd5) popup_ai_message_window_ParamLimits

0x4165,	// (0x00012dd5) popup_ai_message_window

0x420f,	// (0x00012e7f) popup_fep_china_uni_window_ParamLimits

0x420f,	// (0x00012e7f) popup_fep_china_uni_window

0x4269,	// (0x00012ed9) popup_fep_japan_candidate_window_ParamLimits

0x4269,	// (0x00012ed9) popup_fep_japan_candidate_window

0x4287,	// (0x00012ef7) popup_fep_japan_predictive_window_ParamLimits

0x4287,	// (0x00012ef7) popup_fep_japan_predictive_window

0x42b7,	// (0x00012f27) popup_find_window

0x42c4,	// (0x00012f34) popup_grid_graphic_window_ParamLimits

0x42c4,	// (0x00012f34) popup_grid_graphic_window

0x42ea,	// (0x00012f5a) popup_large_graphic_colour_window

0x4310,	// (0x00012f80) popup_menu_window_ParamLimits

0x4310,	// (0x00012f80) popup_menu_window

0x44ca,	// (0x0001313a) popup_note_image_window

0x44b6,	// (0x00013126) popup_note_wait_window_ParamLimits

0x44b6,	// (0x00013126) popup_note_wait_window

0x44b6,	// (0x00013126) popup_note_window_ParamLimits

0x44b6,	// (0x00013126) popup_note_window

0x4520,	// (0x00013190) popup_query_code_window_ParamLimits

0x4520,	// (0x00013190) popup_query_code_window

0x4534,	// (0x000131a4) popup_query_data_code_window_ParamLimits

0x4534,	// (0x000131a4) popup_query_data_code_window

0x454b,	// (0x000131bb) popup_query_data_window_ParamLimits

0x454b,	// (0x000131bb) popup_query_data_window

0x4563,	// (0x000131d3) popup_query_sat_info_window_ParamLimits

0x4563,	// (0x000131d3) popup_query_sat_info_window

0x459c,	// (0x0001320c) popup_snote_single_graphic_window_ParamLimits

0x459c,	// (0x0001320c) popup_snote_single_graphic_window

0x459c,	// (0x0001320c) popup_snote_single_text_window_ParamLimits

0x459c,	// (0x0001320c) popup_snote_single_text_window

0x45b1,	// (0x00013221) popup_sub_window_general

0x46df,	// (0x0001334f) popup_window_general_ParamLimits

0x46df,	// (0x0001334f) popup_window_general

0x46f4,	// (0x00013364) power_save_pane

0xdd53,	// (0x0001c9c3) control_pane_g1_ParamLimits

0xdd53,	// (0x0001c9c3) control_pane_g1

0xdd7a,	// (0x0001c9ea) control_pane_g2_ParamLimits

0xdd7a,	// (0x0001c9ea) control_pane_g2

0x408a,	// (0x00012cfa) control_pane_g3_ParamLimits

0x408a,	// (0x00012cfa) control_pane_g3

0x0007,

0xf79b,	// (0x0001e40b) control_pane_g_ParamLimits

0xf79b,	// (0x0001e40b) control_pane_g

0xddbe,	// (0x0001ca2e) control_pane_t1_ParamLimits

0xddbe,	// (0x0001ca2e) control_pane_t1

0xde0a,	// (0x0001ca7a) control_pane_t2_ParamLimits

0xde0a,	// (0x0001ca7a) control_pane_t2

0x0002,

0xf7ac,	// (0x0001e41c) control_pane_t_ParamLimits

0xf7ac,	// (0x0001e41c) control_pane_t

0x3fab,	// (0x00012c1b) navi_navi_volume_pane_cp1

0x3fb4,	// (0x00012c24) status_small_icon_pane

0x3fbc,	// (0x00012c2c) status_small_pane_g1_ParamLimits

0x3fbc,	// (0x00012c2c) status_small_pane_g1

0x3ff0,	// (0x00012c60) status_small_pane_g2_ParamLimits

0x3ff0,	// (0x00012c60) status_small_pane_g2

0x3ffc,	// (0x00012c6c) status_small_pane_g3_ParamLimits

0x3ffc,	// (0x00012c6c) status_small_pane_g3

0x4008,	// (0x00012c78) status_small_pane_g4_ParamLimits

0x4008,	// (0x00012c78) status_small_pane_g4

0x4014,	// (0x00012c84) status_small_pane_g5_ParamLimits

0x4014,	// (0x00012c84) status_small_pane_g5

0x4023,	// (0x00012c93) status_small_pane_g6_ParamLimits

0x4023,	// (0x00012c93) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001e3fa) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001e3fa) status_small_pane_g

0x4053,	// (0x00012cc3) status_small_pane_t1

0x4076,	// (0x00012ce6) status_small_wait_pane_ParamLimits

0x4076,	// (0x00012ce6) status_small_wait_pane

0x37b8,	// (0x00012428) aid_levels_signal_ParamLimits

0x37b8,	// (0x00012428) aid_levels_signal

0x37ca,	// (0x0001243a) signal_pane_g1_ParamLimits

0x37ca,	// (0x0001243a) signal_pane_g1

0x37df,	// (0x0001244f) signal_pane_g2_ParamLimits

0x37df,	// (0x0001244f) signal_pane_g2

0x0003,

0xf71b,	// (0x0001e38b) signal_pane_g_ParamLimits

0xf71b,	// (0x0001e38b) signal_pane_g

0x381a,	// (0x0001248a) context_pane_g1

0x20aa,	// (0x00010d1a) title_pane_g1

0x20e0,	// (0x00010d50) title_pane_t1

0x2148,	// (0x00010db8) title_pane_t2

0x216e,	// (0x00010dde) title_pane_t3

0x0002,

0xf56f,	// (0x0001e1df) title_pane_t

0x4ada,	// (0x0001374a) aid_levels_battery_ParamLimits

0x4ada,	// (0x0001374a) aid_levels_battery

0x4aee,	// (0x0001375e) battery_pane_g1_ParamLimits

0x4aee,	// (0x0001375e) battery_pane_g1

0x4b04,	// (0x00013774) battery_pane_g2_ParamLimits

0x4b04,	// (0x00013774) battery_pane_g2

0x0001,

0xf7be,	// (0x0001e42e) battery_pane_g_ParamLimits

0xf7be,	// (0x0001e42e) battery_pane_g

0x5e60,	// (0x00014ad0) uni_indicator_pane_g1

0x5e75,	// (0x00014ae5) uni_indicator_pane_g2

0x5e8b,	// (0x00014afb) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0001e591) uni_indicator_pane_g

0x3c41,	// (0x000128b1) navi_icon_pane_ParamLimits

0x3c41,	// (0x000128b1) navi_icon_pane

0x3b88,	// (0x000127f8) navi_midp_pane

0x3c5d,	// (0x000128cd) navi_navi_pane

0x3c67,	// (0x000128d7) navi_text_pane_ParamLimits

0x3c67,	// (0x000128d7) navi_text_pane

0x2096,	// (0x00010d06) status_small_wait_pane_g1

0x25ab,	// (0x0001121b) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0001e58c) status_small_wait_pane_g

0x5b83,	// (0x000147f3) navi_navi_icon_text_pane

0x5b9d,	// (0x0001480d) navi_navi_pane_g1_ParamLimits

0x5b9d,	// (0x0001480d) navi_navi_pane_g1

0x5b8b,	// (0x000147fb) navi_navi_pane_g2_ParamLimits

0x5b8b,	// (0x000147fb) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0001e55a) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0001e55a) navi_navi_pane_g

0x5baf,	// (0x0001481f) navi_navi_tabs_pane

0x5bb8,	// (0x00014828) navi_navi_text_pane

0x5b83,	// (0x000147f3) navi_navi_volume_pane

0x5b5f,	// (0x000147cf) navi_text_pane_t1

0x5b53,	// (0x000147c3) navi_icon_pane_g1

0x5ab2,	// (0x00014722) navi_navi_text_pane_t1

0xe13a,	// (0x0001cdaa) navi_navi_volume_pane_g1

0xe142,	// (0x0001cdb2) volume_small_pane

0x5a18,	// (0x00014688) navi_navi_icon_text_pane_g1

0x5a20,	// (0x00014690) navi_navi_icon_text_pane_t1

0x3c5d,	// (0x000128cd) navi_tabs_2_long_pane

0x3c5d,	// (0x000128cd) navi_tabs_2_pane

0x3c5d,	// (0x000128cd) navi_tabs_3_long_pane

0x3c5d,	// (0x000128cd) navi_tabs_3_pane

0x3c5d,	// (0x000128cd) navi_tabs_4_pane

0xe11a,	// (0x0001cd8a) tabs_2_active_pane_ParamLimits

0xe11a,	// (0x0001cd8a) tabs_2_active_pane

0xe12a,	// (0x0001cd9a) tabs_2_passive_pane_ParamLimits

0xe12a,	// (0x0001cd9a) tabs_2_passive_pane

0xe0e8,	// (0x0001cd58) tabs_3_active_pane_ParamLimits

0xe0e8,	// (0x0001cd58) tabs_3_active_pane

0xe0f8,	// (0x0001cd68) tabs_3_passive_pane_ParamLimits

0xe0f8,	// (0x0001cd68) tabs_3_passive_pane

0xe109,	// (0x0001cd79) tabs_3_passive_pane_cp_ParamLimits

0xe109,	// (0x0001cd79) tabs_3_passive_pane_cp

0xe0a4,	// (0x0001cd14) tabs_4_active_pane_ParamLimits

0xe0a4,	// (0x0001cd14) tabs_4_active_pane

0xe0b5,	// (0x0001cd25) tabs_4_passive_pane_ParamLimits

0xe0b5,	// (0x0001cd25) tabs_4_passive_pane

0xe0c6,	// (0x0001cd36) tabs_4_passive_pane_cp_ParamLimits

0xe0c6,	// (0x0001cd36) tabs_4_passive_pane_cp

0xe0d7,	// (0x0001cd47) tabs_4_passive_pane_cp2_ParamLimits

0xe0d7,	// (0x0001cd47) tabs_4_passive_pane_cp2

0xe080,	// (0x0001ccf0) tabs_2_long_active_pane_ParamLimits

0xe080,	// (0x0001ccf0) tabs_2_long_active_pane

0xe092,	// (0x0001cd02) tabs_2_long_passive_pane_ParamLimits

0xe092,	// (0x0001cd02) tabs_2_long_passive_pane

0xe03b,	// (0x0001ccab) tabs_3_long_active_pane_ParamLimits

0xe03b,	// (0x0001ccab) tabs_3_long_active_pane

0xe054,	// (0x0001ccc4) tabs_3_long_passive_pane_ParamLimits

0xe054,	// (0x0001ccc4) tabs_3_long_passive_pane

0xe067,	// (0x0001ccd7) tabs_3_long_passive_pane_cp_ParamLimits

0xe067,	// (0x0001ccd7) tabs_3_long_passive_pane_cp

0xdfe1,	// (0x0001cc51) volume_small_pane_g1

0xdfea,	// (0x0001cc5a) volume_small_pane_g2

0xdff3,	// (0x0001cc63) volume_small_pane_g3

0xdffc,	// (0x0001cc6c) volume_small_pane_g4

0xe005,	// (0x0001cc75) volume_small_pane_g5

0xe00e,	// (0x0001cc7e) volume_small_pane_g6

0xe017,	// (0x0001cc87) volume_small_pane_g7

0xe020,	// (0x0001cc90) volume_small_pane_g8

0xe029,	// (0x0001cc99) volume_small_pane_g9

0xe032,	// (0x0001cca2) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0001e526) volume_small_pane_g

0x2180,	// (0x00010df0) bg_active_tab_pane_cp2_ParamLimits

0x2180,	// (0x00010df0) bg_active_tab_pane_cp2

0x218e,	// (0x00010dfe) tabs_3_active_pane_g1

0x2196,	// (0x00010e06) tabs_3_active_pane_t1

0x2180,	// (0x00010df0) bg_passive_tab_pane_cp2_ParamLimits

0x2180,	// (0x00010df0) bg_passive_tab_pane_cp2

0x218e,	// (0x00010dfe) tabs_3_passive_pane_g1

0x2196,	// (0x00010e06) tabs_3_passive_pane_t1

0x2180,	// (0x00010df0) bg_active_tab_pane_cp3_ParamLimits

0x2180,	// (0x00010df0) bg_active_tab_pane_cp3

0x21a8,	// (0x00010e18) tabs_4_active_pane_g1

0x21b0,	// (0x00010e20) tabs_4_active_pane_t1

0x2180,	// (0x00010df0) bg_passive_tab_pane_cp3_ParamLimits

0x2180,	// (0x00010df0) bg_passive_tab_pane_cp3

0x21a8,	// (0x00010e18) tabs_4_1_passive_pane_g1

0x21b0,	// (0x00010e20) tabs_4_1_passive_pane_t1

0x414b,	// (0x00012dbb) list_highlight_pane_cp2

0x610c,	// (0x00014d7c) list_set_pane_ParamLimits

0x610c,	// (0x00014d7c) list_set_pane

0x61ae,	// (0x00014e1e) main_pane_set_t1_ParamLimits

0x61ae,	// (0x00014e1e) main_pane_set_t1

0x61ce,	// (0x00014e3e) main_pane_set_t2_ParamLimits

0x61ce,	// (0x00014e3e) main_pane_set_t2

0x61e2,	// (0x00014e52) main_pane_set_t3_ParamLimits

0x61e2,	// (0x00014e52) main_pane_set_t3

0x61f4,	// (0x00014e64) main_pane_set_t4_ParamLimits

0x61f4,	// (0x00014e64) main_pane_set_t4

0x0003,

0xf986,	// (0x0001e5f6) main_pane_set_t_ParamLimits

0xf986,	// (0x0001e5f6) main_pane_set_t

0x6206,	// (0x00014e76) setting_code_pane

0x6210,	// (0x00014e80) setting_slider_graphic_pane

0x6210,	// (0x00014e80) setting_slider_pane

0x6210,	// (0x00014e80) setting_text_pane

0x6210,	// (0x00014e80) setting_volume_pane

0xd83d,	// (0x0001c4ad) volume_set_pane

0x2180,	// (0x00010df0) bg_set_opt_pane_cp

0xd845,	// (0x0001c4b5) setting_slider_pane_t1

0xd85e,	// (0x0001c4ce) setting_slider_pane_t2

0xd877,	// (0x0001c4e7) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0001e1e6) setting_slider_pane_t

0xd88e,	// (0x0001c4fe) slider_set_pane

0x20a0,	// (0x00010d10) bg_set_opt_pane_cp2

0x21c2,	// (0x00010e32) setting_slider_graphic_pane_g1

0xd8a4,	// (0x0001c514) setting_slider_graphic_pane_t1

0xd8b3,	// (0x0001c523) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0001e1ed) setting_slider_graphic_pane_t

0xd8c2,	// (0x0001c532) slider_set_pane_cp

0x20a0,	// (0x00010d10) input_focus_pane_cp1

0x60cb,	// (0x00014d3b) list_set_text_pane

0x2096,	// (0x00010d06) setting_text_pane_g1

0x20a0,	// (0x00010d10) input_focus_pane_cp2

0x2096,	// (0x00010d06) setting_code_pane_g1

0x21cb,	// (0x00010e3b) setting_code_pane_t1

0xc528,	// (0x0001b198) set_text_pane_t1_ParamLimits

0xc528,	// (0x0001b198) set_text_pane_t1

0x3095,	// (0x00011d05) set_opt_bg_pane_g1

0x309d,	// (0x00011d0d) set_opt_bg_pane_g2

0x60ab,	// (0x00014d1b) set_opt_bg_pane_g3

0x30ad,	// (0x00011d1d) set_opt_bg_pane_g4

0x30b5,	// (0x00011d25) set_opt_bg_pane_g5

0x30bd,	// (0x00011d2d) set_opt_bg_pane_g6

0x60b3,	// (0x00014d23) set_opt_bg_pane_g7

0x60bb,	// (0x00014d2b) set_opt_bg_pane_g8

0x60c3,	// (0x00014d33) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0001e5e3) set_opt_bg_pane_g

0x609e,	// (0x00014d0e) slider_set_pane_g1

0xe1af,	// (0x0001ce1f) slider_set_pane_g2

0x0006,

0xf964,	// (0x0001e5d4) slider_set_pane_g

0xe14b,	// (0x0001cdbb) volume_set_pane_g1

0xe153,	// (0x0001cdc3) volume_set_pane_g2

0xe15b,	// (0x0001cdcb) volume_set_pane_g3

0xe163,	// (0x0001cdd3) volume_set_pane_g4

0xe16b,	// (0x0001cddb) volume_set_pane_g5

0xe173,	// (0x0001cde3) volume_set_pane_g6

0xe17b,	// (0x0001cdeb) volume_set_pane_g7

0xe183,	// (0x0001cdf3) volume_set_pane_g8

0xe18b,	// (0x0001cdfb) volume_set_pane_g9

0xe193,	// (0x0001ce03) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0001e5ac) volume_set_pane_g

0x21f3,	// (0x00010e63) indicator_pane_ParamLimits

0x21f3,	// (0x00010e63) indicator_pane

0x21ff,	// (0x00010e6f) main_idle_pane_g2_ParamLimits

0x21ff,	// (0x00010e6f) main_idle_pane_g2

0x2227,	// (0x00010e97) main_pane_idle_g1_ParamLimits

0x2227,	// (0x00010e97) main_pane_idle_g1

0x2234,	// (0x00010ea4) popup_clock_digital_analogue_window_ParamLimits

0x2234,	// (0x00010ea4) popup_clock_digital_analogue_window

0x224b,	// (0x00010ebb) soft_indicator_pane_ParamLimits

0x224b,	// (0x00010ebb) soft_indicator_pane

0x2257,	// (0x00010ec7) wallpaper_pane_ParamLimits

0x2257,	// (0x00010ec7) wallpaper_pane

0x2096,	// (0x00010d06) wallpaper_pane_g1

0x226b,	// (0x00010edb) indicator_pane_g1_ParamLimits

0x226b,	// (0x00010edb) indicator_pane_g1

0x659e,	// (0x0001520e) navi_navi_icon_text_pane_srt_g1

0x2286,	// (0x00010ef6) soft_indicator_pane_t1

0x22a0,	// (0x00010f10) aid_ps_area_pane

0x22b1,	// (0x00010f21) aid_ps_clock_pane

0x22bf,	// (0x00010f2f) aid_ps_indicator_pane

0x22cb,	// (0x00010f3b) indicator_ps_pane_ParamLimits

0x22cb,	// (0x00010f3b) indicator_ps_pane

0x22da,	// (0x00010f4a) power_save_pane_g1_ParamLimits

0x22da,	// (0x00010f4a) power_save_pane_g1

0x22e6,	// (0x00010f56) power_save_pane_g2_ParamLimits

0x22e6,	// (0x00010f56) power_save_pane_g2

0xd46c,	// (0x0001c0dc) aid_navinavi_width_pane

0x22a0,	// (0x00010f10) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0001e1f2) power_save_pane_g_ParamLimits

0xf582,	// (0x0001e1f2) power_save_pane_g

0x22f4,	// (0x00010f64) power_save_pane_t1_ParamLimits

0x22f4,	// (0x00010f64) power_save_pane_t1

0x22b1,	// (0x00010f21) aid_ps_clock_pane_ParamLimits

0x22bf,	// (0x00010f2f) aid_ps_indicator_pane_ParamLimits

0x2306,	// (0x00010f76) power_save_pane_t4_ParamLimits

0x2306,	// (0x00010f76) power_save_pane_t4

0x0001,

0xf587,	// (0x0001e1f7) power_save_pane_t_ParamLimits

0xf587,	// (0x0001e1f7) power_save_pane_t

0x2330,	// (0x00010fa0) power_save_t3_ParamLimits

0x2330,	// (0x00010fa0) power_save_t3

0x231b,	// (0x00010f8b) power_save_t2_ParamLimits

0x231b,	// (0x00010f8b) power_save_t2

0x2345,	// (0x00010fb5) indicator_ps_pane_g1

0x234e,	// (0x00010fbe) ai_gene_pane_ParamLimits

0x234e,	// (0x00010fbe) ai_gene_pane

0x235a,	// (0x00010fca) ai_links_pane_ParamLimits

0x235a,	// (0x00010fca) ai_links_pane

0x2366,	// (0x00010fd6) indicator_pane_cp1_ParamLimits

0x2366,	// (0x00010fd6) indicator_pane_cp1

0x2372,	// (0x00010fe2) main_pane_idle_g1_cp_ParamLimits

0x2372,	// (0x00010fe2) main_pane_idle_g1_cp

0x237e,	// (0x00010fee) popup_ai_links_title_window

0x2387,	// (0x00010ff7) soft_indicator_pane_cp1_ParamLimits

0x2387,	// (0x00010ff7) soft_indicator_pane_cp1

0x5e4e,	// (0x00014abe) ai_links_pane_g1

0x5e57,	// (0x00014ac7) grid_ai_links_pane

0x5e31,	// (0x00014aa1) ai_gene_pane_1

0x5e3c,	// (0x00014aac) ai_gene_pane_2

0x5e45,	// (0x00014ab5) list_highlight_pane_cp4

0x5e15,	// (0x00014a85) cell_ai_link_pane_ParamLimits

0x5e15,	// (0x00014a85) cell_ai_link_pane

0x5e0d,	// (0x00014a7d) cell_ai_link_pane_g1

0x25ab,	// (0x0001121b) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0001e587) cell_ai_link_pane_g

0x20a0,	// (0x00010d10) grid_highlight_cp2

0x20a0,	// (0x00010d10) bg_popup_sub_pane_cp1

0x23a1,	// (0x00011011) popup_ai_links_title_window_t1

0x5d5b,	// (0x000149cb) ai_gene_pane_1_g1_ParamLimits

0x5d5b,	// (0x000149cb) ai_gene_pane_1_g1

0x5d67,	// (0x000149d7) ai_gene_pane_1_g2_ParamLimits

0x5d67,	// (0x000149d7) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0001e57d) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0001e57d) ai_gene_pane_1_g

0x5d74,	// (0x000149e4) ai_gene_pane_1_t1_ParamLimits

0x5d74,	// (0x000149e4) ai_gene_pane_1_t1

0x5da8,	// (0x00014a18) grid_ai_soft_ind_pane

0x5d46,	// (0x000149b6) ai_gene_pane_2_t1_ParamLimits

0x5d46,	// (0x000149b6) ai_gene_pane_2_t1

0x23b0,	// (0x00011020) main_pane_empty_t1_ParamLimits

0x23b0,	// (0x00011020) main_pane_empty_t1

0x23c8,	// (0x00011038) main_pane_empty_t2_ParamLimits

0x23c8,	// (0x00011038) main_pane_empty_t2

0x23dd,	// (0x0001104d) main_pane_empty_t3_ParamLimits

0x23dd,	// (0x0001104d) main_pane_empty_t3

0x23ef,	// (0x0001105f) main_pane_empty_t4_ParamLimits

0x23ef,	// (0x0001105f) main_pane_empty_t4

0x2401,	// (0x00011071) main_pane_empty_t5_ParamLimits

0x2401,	// (0x00011071) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0001e1fc) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0001e1fc) main_pane_empty_t

0x318e,	// (0x00011dfe) bg_popup_window_pane_ParamLimits

0x318e,	// (0x00011dfe) bg_popup_window_pane

0x5ac0,	// (0x00014730) find_popup_pane_cp2_ParamLimits

0x5ac0,	// (0x00014730) find_popup_pane_cp2

0x5acc,	// (0x0001473c) heading_pane_ParamLimits

0x5acc,	// (0x0001473c) heading_pane

0x20a0,	// (0x00010d10) bg_popup_sub_pane

0x5a3a,	// (0x000146aa) bg_popup_window_pane_g1_ParamLimits

0x5a3a,	// (0x000146aa) bg_popup_window_pane_g1

0x5a46,	// (0x000146b6) bg_popup_window_pane_g2_ParamLimits

0x5a46,	// (0x000146b6) bg_popup_window_pane_g2

0x5a52,	// (0x000146c2) bg_popup_window_pane_g3_ParamLimits

0x5a52,	// (0x000146c2) bg_popup_window_pane_g3

0x5a5e,	// (0x000146ce) bg_popup_window_pane_g4_ParamLimits

0x5a5e,	// (0x000146ce) bg_popup_window_pane_g4

0x5a6a,	// (0x000146da) bg_popup_window_pane_g5_ParamLimits

0x5a6a,	// (0x000146da) bg_popup_window_pane_g5

0x5a76,	// (0x000146e6) bg_popup_window_pane_g6_ParamLimits

0x5a76,	// (0x000146e6) bg_popup_window_pane_g6

0x5a82,	// (0x000146f2) bg_popup_window_pane_g7_ParamLimits

0x5a82,	// (0x000146f2) bg_popup_window_pane_g7

0x5a8e,	// (0x000146fe) bg_popup_window_pane_g8_ParamLimits

0x5a8e,	// (0x000146fe) bg_popup_window_pane_g8

0x5a9a,	// (0x0001470a) bg_popup_window_pane_g9_ParamLimits

0x5a9a,	// (0x0001470a) bg_popup_window_pane_g9

0x5aa6,	// (0x00014716) bg_popup_window_pane_g10_ParamLimits

0x5aa6,	// (0x00014716) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0001e545) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0001e545) bg_popup_window_pane_g

0x59cf,	// (0x0001463f) bg_popup_heading_pane_ParamLimits

0x59cf,	// (0x0001463f) bg_popup_heading_pane

0xe237,	// (0x0001cea7) tabs_4_passive_pane_cp_srt_ParamLimits

0xe237,	// (0x0001cea7) tabs_4_passive_pane_cp_srt

0xe249,	// (0x0001ceb9) tabs_4_passive_pane_srt_ParamLimits

0x59e3,	// (0x00014653) heading_pane_g2

0xe249,	// (0x0001ceb9) tabs_4_passive_pane_srt

0x414b,	// (0x00012dbb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x414b,	// (0x00012dbb) bg_passive_tab_pane_cp3_srt

0x59eb,	// (0x0001465b) heading_pane_t1_ParamLimits

0x59eb,	// (0x0001465b) heading_pane_t1

0x5a02,	// (0x00014672) heading_pane_t2_ParamLimits

0x5a02,	// (0x00014672) heading_pane_t2

0x0001,

0xf8d0,	// (0x0001e540) heading_pane_t_ParamLimits

0xf8d0,	// (0x0001e540) heading_pane_t

0x550a,	// (0x0001417a) bg_popup_heading_pane_g1

0x55b9,	// (0x00014229) bg_popup_heading_pane_g2

0x55c3,	// (0x00014233) bg_popup_heading_pane_g3

0x55cd,	// (0x0001423d) bg_popup_heading_pane_g4

0x55d7,	// (0x00014247) bg_popup_heading_pane_g5

0x55e1,	// (0x00014251) bg_popup_heading_pane_g6

0x55e9,	// (0x00014259) bg_popup_heading_pane_g7

0x55f1,	// (0x00014261) bg_popup_heading_pane_g8

0x55fb,	// (0x0001426b) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0001e4fc) bg_popup_heading_pane_g

0x4c0a,	// (0x0001387a) bg_popup_sub_pane_g1

0x4c1a,	// (0x0001388a) bg_popup_sub_pane_g2

0x4c12,	// (0x00013882) bg_popup_sub_pane_g3

0x4c2a,	// (0x0001389a) bg_popup_sub_pane_g4

0x4c22,	// (0x00013892) bg_popup_sub_pane_g5

0x4c32,	// (0x000138a2) bg_popup_sub_pane_g6

0x4c3a,	// (0x000138aa) bg_popup_sub_pane_g7

0x4c4a,	// (0x000138ba) bg_popup_sub_pane_g8

0x4c42,	// (0x000138b2) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0001e4d6) bg_popup_sub_pane_g

0x2415,	// (0x00011085) bg_popup_window_pane_cp5_ParamLimits

0x2415,	// (0x00011085) bg_popup_window_pane_cp5

0x2431,	// (0x000110a1) popup_note_window_g1_ParamLimits

0x2431,	// (0x000110a1) popup_note_window_g1

0x243d,	// (0x000110ad) popup_note_window_t1_ParamLimits

0x243d,	// (0x000110ad) popup_note_window_t1

0x244f,	// (0x000110bf) popup_note_window_t2_ParamLimits

0x244f,	// (0x000110bf) popup_note_window_t2

0x2461,	// (0x000110d1) popup_note_window_t3_ParamLimits

0x2461,	// (0x000110d1) popup_note_window_t3

0x2473,	// (0x000110e3) popup_note_window_t4_ParamLimits

0x2473,	// (0x000110e3) popup_note_window_t4

0x249b,	// (0x0001110b) popup_note_window_t5_ParamLimits

0x249b,	// (0x0001110b) popup_note_window_t5

0x0004,

0xf597,	// (0x0001e207) popup_note_window_t_ParamLimits

0xf597,	// (0x0001e207) popup_note_window_t

0x24bf,	// (0x0001112f) bg_popup_window_pane_cp6_ParamLimits

0x24bf,	// (0x0001112f) bg_popup_window_pane_cp6

0x547e,	// (0x000140ee) popup_note_image_window_g1_ParamLimits

0x547e,	// (0x000140ee) popup_note_image_window_g1

0x548a,	// (0x000140fa) popup_note_image_window_g2_ParamLimits

0x548a,	// (0x000140fa) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0001e4ca) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0001e4ca) popup_note_image_window_g

0x54a3,	// (0x00014113) popup_note_image_window_t1_ParamLimits

0x54a3,	// (0x00014113) popup_note_image_window_t1

0x54bc,	// (0x0001412c) popup_note_image_window_t2_ParamLimits

0x54bc,	// (0x0001412c) popup_note_image_window_t2

0x54d5,	// (0x00014145) popup_note_image_window_t3_ParamLimits

0x54d5,	// (0x00014145) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0001e4cf) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0001e4cf) popup_note_image_window_t

0x533f,	// (0x00013faf) bg_popup_window_pane_cp7_ParamLimits

0x533f,	// (0x00013faf) bg_popup_window_pane_cp7

0x536f,	// (0x00013fdf) popup_note_wait_window_g1_ParamLimits

0x536f,	// (0x00013fdf) popup_note_wait_window_g1

0x537b,	// (0x00013feb) popup_note_wait_window_g2_ParamLimits

0x537b,	// (0x00013feb) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0001e4b8) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0001e4b8) popup_note_wait_window_g

0x5393,	// (0x00014003) popup_note_wait_window_t1_ParamLimits

0x5393,	// (0x00014003) popup_note_wait_window_t1

0x53ba,	// (0x0001402a) popup_note_wait_window_t2_ParamLimits

0x53ba,	// (0x0001402a) popup_note_wait_window_t2

0x53d7,	// (0x00014047) popup_note_wait_window_t3_ParamLimits

0x53d7,	// (0x00014047) popup_note_wait_window_t3

0x53ea,	// (0x0001405a) popup_note_wait_window_t4_ParamLimits

0x53ea,	// (0x0001405a) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0001e4bf) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0001e4bf) popup_note_wait_window_t

0x540f,	// (0x0001407f) wait_bar_pane_ParamLimits

0x540f,	// (0x0001407f) wait_bar_pane

0x20a0,	// (0x00010d10) wait_anim_pane

0x20a0,	// (0x00010d10) wait_border_pane

0x2096,	// (0x00010d06) wait_anim_pane_g1

0x2096,	// (0x00010d06) wait_anim_pane_g2

0x0001,

0xf716,	// (0x0001e386) wait_anim_pane_g

0x52e3,	// (0x00013f53) wait_border_pane_g1

0x52ee,	// (0x00013f5e) wait_border_pane_g2

0x52f7,	// (0x00013f67) wait_border_pane_g3

0x0002,

0xf841,	// (0x0001e4b1) wait_border_pane_g

0x5153,	// (0x00013dc3) bg_popup_window_pane_cp16_ParamLimits

0x5153,	// (0x00013dc3) bg_popup_window_pane_cp16

0x5253,	// (0x00013ec3) indicator_popup_pane_cp4_ParamLimits

0x5253,	// (0x00013ec3) indicator_popup_pane_cp4

0x5267,	// (0x00013ed7) popup_query_data_window_t1_ParamLimits

0x5267,	// (0x00013ed7) popup_query_data_window_t1

0x5279,	// (0x00013ee9) popup_query_data_window_t2_ParamLimits

0x5279,	// (0x00013ee9) popup_query_data_window_t2

0x5292,	// (0x00013f02) popup_query_data_window_t3_ParamLimits

0x5292,	// (0x00013f02) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0001e4aa) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0001e4aa) popup_query_data_window_t

0x52ac,	// (0x00013f1c) query_popup_data_pane_ParamLimits

0x52ac,	// (0x00013f1c) query_popup_data_pane

0x52c0,	// (0x00013f30) query_popup_data_pane_cp1_ParamLimits

0x52c0,	// (0x00013f30) query_popup_data_pane_cp1

0x5153,	// (0x00013dc3) bg_popup_window_pane_cp10_ParamLimits

0x5153,	// (0x00013dc3) bg_popup_window_pane_cp10

0x5185,	// (0x00013df5) indicator_popup_pane_ParamLimits

0x5185,	// (0x00013df5) indicator_popup_pane

0x51a7,	// (0x00013e17) popup_query_code_window_t1_ParamLimits

0x51a7,	// (0x00013e17) popup_query_code_window_t1

0x51c1,	// (0x00013e31) popup_query_code_window_t2_ParamLimits

0x51c1,	// (0x00013e31) popup_query_code_window_t2

0x520a,	// (0x00013e7a) popup_query_code_window_t3_ParamLimits

0x520a,	// (0x00013e7a) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0001e4a3) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0001e4a3) popup_query_code_window_t

0x5239,	// (0x00013ea9) query_popup_pane_ParamLimits

0x5239,	// (0x00013ea9) query_popup_pane

0x24bf,	// (0x0001112f) bg_popup_window_pane_cp15_ParamLimits

0x24bf,	// (0x0001112f) bg_popup_window_pane_cp15

0x24dd,	// (0x0001114d) indicator_popup_pane_cp1_ParamLimits

0x24dd,	// (0x0001114d) indicator_popup_pane_cp1

0x24f0,	// (0x00011160) indicator_popup_pane_cp2_ParamLimits

0x24f0,	// (0x00011160) indicator_popup_pane_cp2

0x2503,	// (0x00011173) popup_query_data_code_window_g1_ParamLimits

0x2503,	// (0x00011173) popup_query_data_code_window_g1

0x2516,	// (0x00011186) popup_query_data_code_window_t1_ParamLimits

0x2516,	// (0x00011186) popup_query_data_code_window_t1

0x2528,	// (0x00011198) popup_query_data_code_window_t2_ParamLimits

0x2528,	// (0x00011198) popup_query_data_code_window_t2

0x253a,	// (0x000111aa) popup_query_data_code_window_t3_ParamLimits

0x253a,	// (0x000111aa) popup_query_data_code_window_t3

0x2550,	// (0x000111c0) popup_query_data_code_window_t4_ParamLimits

0x2550,	// (0x000111c0) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0001e212) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0001e212) popup_query_data_code_window_t

0x3bfd,	// (0x0001286d) list_single_midp_graphic_pane_g3

0x2568,	// (0x000111d8) query_popup_data_pane_cp2_ParamLimits

0x257b,	// (0x000111eb) query_popup_pane_cp2_ParamLimits

0x257b,	// (0x000111eb) query_popup_pane_cp2

0x20a0,	// (0x00010d10) bg_popup_window_pane_cp11

0x514b,	// (0x00013dbb) heading_pane_cp5

0x2663,	// (0x000112d3) listscroll_popup_info_pane

0x20a0,	// (0x00010d10) input_focus_pane_cp3

0x258e,	// (0x000111fe) query_popup_pane_t1

0x259c,	// (0x0001120c) list_popup_info_pane_ParamLimits

0x259c,	// (0x0001120c) list_popup_info_pane

0x25ab,	// (0x0001121b) listscroll_popup_info_pane_g1

0x25b3,	// (0x00011223) scroll_pane_cp7

0x25bd,	// (0x0001122d) popup_info_list_pane_t1_ParamLimits

0x25bd,	// (0x0001122d) popup_info_list_pane_t1

0x25d7,	// (0x00011247) popup_info_list_pane_t2_ParamLimits

0x25d7,	// (0x00011247) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0001e21b) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0001e21b) popup_info_list_pane_t

0x20a0,	// (0x00010d10) bg_popup_window_pane_cp12

0x65b8,	// (0x00015228) find_popup_pane

0x2180,	// (0x00010df0) bg_popup_window_pane_cp3

0x25f1,	// (0x00011261) heading_pane_cp3

0x25fd,	// (0x0001126d) listscroll_popup_graphic_pane

0x20a0,	// (0x00010d10) bg_popup_window_pane_cp4

0x2659,	// (0x000112c9) heading_pane_cp4

0x2663,	// (0x000112d3) listscroll_popup_colour_pane

0x266b,	// (0x000112db) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x266b,	// (0x000112db) cell_large_graphic_colour_none_popup_pane

0x267f,	// (0x000112ef) grid_large_graphic_colour_popup_pane_ParamLimits

0x267f,	// (0x000112ef) grid_large_graphic_colour_popup_pane

0x26a3,	// (0x00011313) listscroll_popup_colour_pane_g1_ParamLimits

0x26a3,	// (0x00011313) listscroll_popup_colour_pane_g1

0x26ba,	// (0x0001132a) listscroll_popup_colour_pane_g2_ParamLimits

0x26ba,	// (0x0001132a) listscroll_popup_colour_pane_g2

0x26d1,	// (0x00011341) listscroll_popup_colour_pane_g3_ParamLimits

0x26d1,	// (0x00011341) listscroll_popup_colour_pane_g3

0x26e1,	// (0x00011351) listscroll_popup_colour_pane_g4_ParamLimits

0x26e1,	// (0x00011351) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0001e220) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0001e220) listscroll_popup_colour_pane_g

0x26f0,	// (0x00011360) scroll_pane_cp6_ParamLimits

0x26f0,	// (0x00011360) scroll_pane_cp6

0x2702,	// (0x00011372) cell_large_graphic_colour_popup_pane_ParamLimits

0x2702,	// (0x00011372) cell_large_graphic_colour_popup_pane

0x2721,	// (0x00011391) cell_large_graphic_colour_none_popup_pane_t1

0x20a0,	// (0x00010d10) grid_highlight_pane_cp5

0x2730,	// (0x000113a0) cell_large_graphic_colour_popup_pane_g1

0x2738,	// (0x000113a8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0001e229) cell_large_graphic_colour_popup_pane_g

0x2740,	// (0x000113b0) cell_large_graphic_colour_popup_pane_g2_copy1

0x2749,	// (0x000113b9) grid_highlight_pane_cp4

0x2751,	// (0x000113c1) bg_popup_window_pane_cp8_ParamLimits

0x2751,	// (0x000113c1) bg_popup_window_pane_cp8

0x276c,	// (0x000113dc) popup_snote_single_text_window_g1_ParamLimits

0x276c,	// (0x000113dc) popup_snote_single_text_window_g1

0x277e,	// (0x000113ee) popup_snote_single_text_window_t1_ParamLimits

0x277e,	// (0x000113ee) popup_snote_single_text_window_t1

0x2791,	// (0x00011401) popup_snote_single_text_window_t2_ParamLimits

0x2791,	// (0x00011401) popup_snote_single_text_window_t2

0x27a4,	// (0x00011414) popup_snote_single_text_window_t3_ParamLimits

0x27a4,	// (0x00011414) popup_snote_single_text_window_t3

0x27dd,	// (0x0001144d) popup_snote_single_text_window_t4_ParamLimits

0x27dd,	// (0x0001144d) popup_snote_single_text_window_t4

0x2811,	// (0x00011481) popup_snote_single_text_window_t5_ParamLimits

0x2811,	// (0x00011481) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0001e22e) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0001e22e) popup_snote_single_text_window_t

0x2840,	// (0x000114b0) bg_popup_window_pane_cp9_ParamLimits

0x2840,	// (0x000114b0) bg_popup_window_pane_cp9

0x276c,	// (0x000113dc) popup_snote_single_graphic_window_g1_ParamLimits

0x276c,	// (0x000113dc) popup_snote_single_graphic_window_g1

0x284e,	// (0x000114be) popup_snote_single_graphic_window_g2_ParamLimits

0x284e,	// (0x000114be) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0001e239) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0001e239) popup_snote_single_graphic_window_g

0x285a,	// (0x000114ca) popup_snote_single_graphic_window_t1_ParamLimits

0x285a,	// (0x000114ca) popup_snote_single_graphic_window_t1

0x286d,	// (0x000114dd) popup_snote_single_graphic_window_t2_ParamLimits

0x286d,	// (0x000114dd) popup_snote_single_graphic_window_t2

0x2880,	// (0x000114f0) popup_snote_single_graphic_window_t3_ParamLimits

0x2880,	// (0x000114f0) popup_snote_single_graphic_window_t3

0x28b9,	// (0x00011529) popup_snote_single_graphic_window_t4_ParamLimits

0x28b9,	// (0x00011529) popup_snote_single_graphic_window_t4

0x28ed,	// (0x0001155d) popup_snote_single_graphic_window_t5_ParamLimits

0x28ed,	// (0x0001155d) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0001e23e) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0001e23e) popup_snote_single_graphic_window_t

0x64f8,	// (0x00015168) grid_graphic_popup_pane_ParamLimits

0x64f8,	// (0x00015168) grid_graphic_popup_pane

0x6524,	// (0x00015194) listscroll_popup_graphic_pane_g1_ParamLimits

0x6524,	// (0x00015194) listscroll_popup_graphic_pane_g1

0x6538,	// (0x000151a8) listscroll_popup_graphic_pane_g2_ParamLimits

0x6538,	// (0x000151a8) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0001e620) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0001e620) listscroll_popup_graphic_pane_g

0x654c,	// (0x000151bc) scroll_pane_cp5

0x64a3,	// (0x00015113) cell_graphic_popup_pane_ParamLimits

0x64a3,	// (0x00015113) cell_graphic_popup_pane

0x6484,	// (0x000150f4) cell_graphic_popup_pane_g1

0x648c,	// (0x000150fc) cell_graphic_popup_pane_g2

0x2740,	// (0x000113b0) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0001e619) cell_graphic_popup_pane_g

0x6495,	// (0x00015105) cell_graphic_popup_pane_t2

0x2749,	// (0x000113b9) grid_highlight_pane_cp3

0x292e,	// (0x0001159e) list_gen_pane_ParamLimits

0x292e,	// (0x0001159e) list_gen_pane

0x2960,	// (0x000115d0) scroll_pane

0x63e6,	// (0x00015056) bg_list_pane_g1_ParamLimits

0x63e6,	// (0x00015056) bg_list_pane_g1

0x6401,	// (0x00015071) bg_list_pane_g2_ParamLimits

0x6401,	// (0x00015071) bg_list_pane_g2

0x6414,	// (0x00015084) bg_list_pane_g3_ParamLimits

0x6414,	// (0x00015084) bg_list_pane_g3

0x6426,	// (0x00015096) bg_list_pane_g4_ParamLimits

0x6426,	// (0x00015096) bg_list_pane_g4

0x6438,	// (0x000150a8) bg_list_pane_g5_ParamLimits

0x6438,	// (0x000150a8) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0001e60e) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0001e60e) bg_list_pane_g

0xcda5,	// (0x0001ba15) list_double2_graphic_large_graphic_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_double2_graphic_large_graphic_pane

0xcda5,	// (0x0001ba15) list_double2_graphic_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_double2_graphic_pane

0xcda5,	// (0x0001ba15) list_double2_large_graphic_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_double2_large_graphic_pane

0xcda5,	// (0x0001ba15) list_double2_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_double2_pane

0xcda5,	// (0x0001ba15) list_double_graphic_heading_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_double_graphic_heading_pane

0xcda5,	// (0x0001ba15) list_double_graphic_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_double_graphic_pane

0xcda5,	// (0x0001ba15) list_double_heading_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_double_heading_pane

0xcda5,	// (0x0001ba15) list_double_large_graphic_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_double_large_graphic_pane

0xcda5,	// (0x0001ba15) list_double_number_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_double_number_pane

0xcda5,	// (0x0001ba15) list_double_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_double_pane

0xcda5,	// (0x0001ba15) list_double_time_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_double_time_pane

0xcda5,	// (0x0001ba15) list_setting_number_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_setting_number_pane

0xcda5,	// (0x0001ba15) list_setting_pane_ParamLimits

0xcda5,	// (0x0001ba15) list_setting_pane

0xcded,	// (0x0001ba5d) list_single_2graphic_pane_ParamLimits

0xcded,	// (0x0001ba5d) list_single_2graphic_pane

0xcded,	// (0x0001ba5d) list_single_graphic_heading_pane_ParamLimits

0xcded,	// (0x0001ba5d) list_single_graphic_heading_pane

0xcded,	// (0x0001ba5d) list_single_graphic_pane_ParamLimits

0xcded,	// (0x0001ba5d) list_single_graphic_pane

0xcded,	// (0x0001ba5d) list_single_heading_pane_ParamLimits

0xcded,	// (0x0001ba5d) list_single_heading_pane

0xce5b,	// (0x0001bacb) list_single_large_graphic_pane_ParamLimits

0xce5b,	// (0x0001bacb) list_single_large_graphic_pane

0xcded,	// (0x0001ba5d) list_single_number_heading_pane_ParamLimits

0xcded,	// (0x0001ba5d) list_single_number_heading_pane

0xcded,	// (0x0001ba5d) list_single_number_pane_ParamLimits

0xcded,	// (0x0001ba5d) list_single_number_pane

0xcded,	// (0x0001ba5d) list_single_pane_ParamLimits

0xcded,	// (0x0001ba5d) list_single_pane

0x20a0,	// (0x00010d10) list_highlight_pane_cp1

0xc54e,	// (0x0001b1be) list_single_pane_g1_ParamLimits

0xc54e,	// (0x0001b1be) list_single_pane_g1

0xc55a,	// (0x0001b1ca) list_single_pane_g2_ParamLimits

0xc55a,	// (0x0001b1ca) list_single_pane_g2

0x0001,

0xf5e0,	// (0x0001e250) list_single_pane_g_ParamLimits

0xf5e0,	// (0x0001e250) list_single_pane_g

0xcd8f,	// (0x0001b9ff) list_single_pane_t1_ParamLimits

0xcd8f,	// (0x0001b9ff) list_single_pane_t1

0xc54e,	// (0x0001b1be) list_single_number_pane_g1_ParamLimits

0xc54e,	// (0x0001b1be) list_single_number_pane_g1

0xc55a,	// (0x0001b1ca) list_single_number_pane_g2_ParamLimits

0xc55a,	// (0x0001b1ca) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x0001e250) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x0001e250) list_single_number_pane_g

0xccc3,	// (0x0001b933) list_single_number_pane_t1_ParamLimits

0xccc3,	// (0x0001b933) list_single_number_pane_t1

0xcd4f,	// (0x0001b9bf) list_single_number_pane_t2_ParamLimits

0xcd4f,	// (0x0001b9bf) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0001e5cf) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0001e5cf) list_single_number_pane_t

0xc542,	// (0x0001b1b2) list_single_graphic_pane_g1_ParamLimits

0xc542,	// (0x0001b1b2) list_single_graphic_pane_g1

0xc54e,	// (0x0001b1be) list_single_graphic_pane_g2_ParamLimits

0xc54e,	// (0x0001b1be) list_single_graphic_pane_g2

0xc55a,	// (0x0001b1ca) list_single_graphic_pane_g3_ParamLimits

0xc55a,	// (0x0001b1ca) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0001e249) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0001e249) list_single_graphic_pane_g

0xc566,	// (0x0001b1d6) list_single_graphic_pane_t1_ParamLimits

0xc566,	// (0x0001b1d6) list_single_graphic_pane_t1

0xc54e,	// (0x0001b1be) list_single_heading_pane_g1_ParamLimits

0xc54e,	// (0x0001b1be) list_single_heading_pane_g1

0xc55a,	// (0x0001b1ca) list_single_heading_pane_g2_ParamLimits

0xc55a,	// (0x0001b1ca) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0001e250) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0001e250) list_single_heading_pane_g

0xc57c,	// (0x0001b1ec) list_single_heading_pane_t1_ParamLimits

0xc57c,	// (0x0001b1ec) list_single_heading_pane_t1

0xc592,	// (0x0001b202) list_single_heading_pane_t2_ParamLimits

0xc592,	// (0x0001b202) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0001e255) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0001e255) list_single_heading_pane_t

0xc54e,	// (0x0001b1be) list_single_number_heading_pane_g1_ParamLimits

0xc54e,	// (0x0001b1be) list_single_number_heading_pane_g1

0xc55a,	// (0x0001b1ca) list_single_number_heading_pane_g2_ParamLimits

0xc55a,	// (0x0001b1ca) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x0001e250) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x0001e250) list_single_number_heading_pane_g

0xc57c,	// (0x0001b1ec) list_single_number_heading_pane_t1_ParamLimits

0xc57c,	// (0x0001b1ec) list_single_number_heading_pane_t1

0xc5a4,	// (0x0001b214) list_single_number_heading_pane_t2_ParamLimits

0xc5a4,	// (0x0001b214) list_single_number_heading_pane_t2

0xc5b6,	// (0x0001b226) list_single_number_heading_pane_t3_ParamLimits

0xc5b6,	// (0x0001b226) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0001e25a) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0001e25a) list_single_number_heading_pane_t

0xc5c8,	// (0x0001b238) list_single_graphic_heading_pane_g1_ParamLimits

0xc5c8,	// (0x0001b238) list_single_graphic_heading_pane_g1

0xc5d4,	// (0x0001b244) list_single_graphic_heading_pane_g4_ParamLimits

0xc5d4,	// (0x0001b244) list_single_graphic_heading_pane_g4

0xc55a,	// (0x0001b1ca) list_single_graphic_heading_pane_g5_ParamLimits

0xc55a,	// (0x0001b1ca) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x0001e261) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x0001e261) list_single_graphic_heading_pane_g

0xc57c,	// (0x0001b1ec) list_single_graphic_heading_pane_t1_ParamLimits

0xc57c,	// (0x0001b1ec) list_single_graphic_heading_pane_t1

0xc5e5,	// (0x0001b255) list_single_graphic_heading_pane_t2_ParamLimits

0xc5e5,	// (0x0001b255) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x0001e268) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x0001e268) list_single_graphic_heading_pane_t

0xc5f7,	// (0x0001b267) list_single_large_graphic_pane_g1_ParamLimits

0xc5f7,	// (0x0001b267) list_single_large_graphic_pane_g1

0xc603,	// (0x0001b273) list_single_large_graphic_pane_g2_ParamLimits

0xc603,	// (0x0001b273) list_single_large_graphic_pane_g2

0xc60f,	// (0x0001b27f) list_single_large_graphic_pane_g3_ParamLimits

0xc60f,	// (0x0001b27f) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x0001e26d) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x0001e26d) list_single_large_graphic_pane_g

0x52ee,	// (0x00013f5e) wait_border_pane_g2_copy1

0xc61b,	// (0x0001b28b) list_single_large_graphic_pane_g4_cp2

0xc623,	// (0x0001b293) list_single_large_graphic_pane_t1_ParamLimits

0xc623,	// (0x0001b293) list_single_large_graphic_pane_t1

0xc639,	// (0x0001b2a9) list_double_pane_g1_ParamLimits

0xc639,	// (0x0001b2a9) list_double_pane_g1

0xc645,	// (0x0001b2b5) list_double_pane_g2_ParamLimits

0xc645,	// (0x0001b2b5) list_double_pane_g2

0x0001,

0xf604,	// (0x0001e274) list_double_pane_g_ParamLimits

0xf604,	// (0x0001e274) list_double_pane_g

0xc651,	// (0x0001b2c1) list_double_pane_t1_ParamLimits

0xc651,	// (0x0001b2c1) list_double_pane_t1

0xc667,	// (0x0001b2d7) list_double_pane_t2_ParamLimits

0xc667,	// (0x0001b2d7) list_double_pane_t2

0x0001,

0xf609,	// (0x0001e279) list_double_pane_t_ParamLimits

0xf609,	// (0x0001e279) list_double_pane_t

0xc679,	// (0x0001b2e9) list_double2_pane_g1_ParamLimits

0xc679,	// (0x0001b2e9) list_double2_pane_g1

0xc645,	// (0x0001b2b5) list_double2_pane_g2_ParamLimits

0xc645,	// (0x0001b2b5) list_double2_pane_g2

0x0001,

0xf60e,	// (0x0001e27e) list_double2_pane_g_ParamLimits

0xf60e,	// (0x0001e27e) list_double2_pane_g

0xc651,	// (0x0001b2c1) list_double2_pane_t1_ParamLimits

0xc651,	// (0x0001b2c1) list_double2_pane_t1

0xc68a,	// (0x0001b2fa) list_double2_pane_t2_ParamLimits

0xc68a,	// (0x0001b2fa) list_double2_pane_t2

0x0001,

0xf613,	// (0x0001e283) list_double2_pane_t_ParamLimits

0xf613,	// (0x0001e283) list_double2_pane_t

0xc639,	// (0x0001b2a9) list_double_number_pane_g1_ParamLimits

0xc639,	// (0x0001b2a9) list_double_number_pane_g1

0xc645,	// (0x0001b2b5) list_double_number_pane_g2_ParamLimits

0xc645,	// (0x0001b2b5) list_double_number_pane_g2

0x0001,

0xf604,	// (0x0001e274) list_double_number_pane_g_ParamLimits

0xf604,	// (0x0001e274) list_double_number_pane_g

0xc69c,	// (0x0001b30c) list_double_number_pane_t1_ParamLimits

0xc69c,	// (0x0001b30c) list_double_number_pane_t1

0xc6ae,	// (0x0001b31e) list_double_number_pane_t2_ParamLimits

0xc6ae,	// (0x0001b31e) list_double_number_pane_t2

0xc6c4,	// (0x0001b334) list_double_number_pane_t3_ParamLimits

0xc6c4,	// (0x0001b334) list_double_number_pane_t3

0x0002,

0xf618,	// (0x0001e288) list_double_number_pane_t_ParamLimits

0xf618,	// (0x0001e288) list_double_number_pane_t

0xc6d6,	// (0x0001b346) list_double_graphic_pane_g1_ParamLimits

0xc6d6,	// (0x0001b346) list_double_graphic_pane_g1

0xc6e2,	// (0x0001b352) list_double_graphic_pane_g2_ParamLimits

0xc6e2,	// (0x0001b352) list_double_graphic_pane_g2

0xc6f1,	// (0x0001b361) list_double_graphic_pane_g3_ParamLimits

0xc6f1,	// (0x0001b361) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x0001e28f) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x0001e28f) list_double_graphic_pane_g

0xc709,	// (0x0001b379) list_double_graphic_pane_t1_ParamLimits

0xc709,	// (0x0001b379) list_double_graphic_pane_t1

0xc71f,	// (0x0001b38f) list_double_graphic_pane_t2_ParamLimits

0xc71f,	// (0x0001b38f) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x0001e298) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x0001e298) list_double_graphic_pane_t

0xc6d6,	// (0x0001b346) list_double2_graphic_pane_g1_ParamLimits

0xc6d6,	// (0x0001b346) list_double2_graphic_pane_g1

0xc731,	// (0x0001b3a1) list_double2_graphic_pane_g2_ParamLimits

0xc731,	// (0x0001b3a1) list_double2_graphic_pane_g2

0xc73d,	// (0x0001b3ad) list_double2_graphic_pane_g3_ParamLimits

0xc73d,	// (0x0001b3ad) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x0001e29d) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x0001e29d) list_double2_graphic_pane_g

0xc6ae,	// (0x0001b31e) list_double2_graphic_pane_t1_ParamLimits

0xc6ae,	// (0x0001b31e) list_double2_graphic_pane_t1

0xc749,	// (0x0001b3b9) list_double2_graphic_pane_t2_ParamLimits

0xc749,	// (0x0001b3b9) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x0001e2a4) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x0001e2a4) list_double2_graphic_pane_t

0xc75b,	// (0x0001b3cb) list_double_large_graphic_pane_g1_ParamLimits

0xc75b,	// (0x0001b3cb) list_double_large_graphic_pane_g1

0xc679,	// (0x0001b2e9) list_double_large_graphic_pane_g2_ParamLimits

0xc679,	// (0x0001b2e9) list_double_large_graphic_pane_g2

0xc645,	// (0x0001b2b5) list_double_large_graphic_pane_g3_ParamLimits

0xc645,	// (0x0001b2b5) list_double_large_graphic_pane_g3

0xc786,	// (0x0001b3f6) list_double_large_graphic_pane_g4_ParamLimits

0xc786,	// (0x0001b3f6) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x0001e2a9) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x0001e2a9) list_double_large_graphic_pane_g

0xc7ae,	// (0x0001b41e) list_double_large_graphic_pane_t1_ParamLimits

0xc7ae,	// (0x0001b41e) list_double_large_graphic_pane_t1

0xc7c7,	// (0x0001b437) list_double_large_graphic_pane_t2_ParamLimits

0xc7c7,	// (0x0001b437) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x0001e2b4) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x0001e2b4) list_double_large_graphic_pane_t

0xc7d9,	// (0x0001b449) list_double2_large_graphic_pane_g1_ParamLimits

0xc7d9,	// (0x0001b449) list_double2_large_graphic_pane_g1

0xc679,	// (0x0001b2e9) list_double2_large_graphic_pane_g2_ParamLimits

0xc679,	// (0x0001b2e9) list_double2_large_graphic_pane_g2

0xc645,	// (0x0001b2b5) list_double2_large_graphic_pane_g3_ParamLimits

0xc645,	// (0x0001b2b5) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x0001e2b9) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x0001e2b9) list_double2_large_graphic_pane_g

0xc7e5,	// (0x0001b455) list_double2_large_graphic_pane_t1_ParamLimits

0xc7e5,	// (0x0001b455) list_double2_large_graphic_pane_t1

0xc7fb,	// (0x0001b46b) list_double2_large_graphic_pane_t2_ParamLimits

0xc7fb,	// (0x0001b46b) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x0001e2c0) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x0001e2c0) list_double2_large_graphic_pane_t

0xc80d,	// (0x0001b47d) list_double_heading_pane_g1_ParamLimits

0xc80d,	// (0x0001b47d) list_double_heading_pane_g1

0xc81e,	// (0x0001b48e) list_double_heading_pane_g2_ParamLimits

0xc81e,	// (0x0001b48e) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0001e2c5) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0001e2c5) list_double_heading_pane_g

0xc82a,	// (0x0001b49a) list_double_heading_pane_t1_ParamLimits

0xc82a,	// (0x0001b49a) list_double_heading_pane_t1

0xc68a,	// (0x0001b2fa) list_double_heading_pane_t2_ParamLimits

0xc68a,	// (0x0001b2fa) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x0001e2ca) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x0001e2ca) list_double_heading_pane_t

0xc6d6,	// (0x0001b346) list_double_graphic_heading_pane_g1_ParamLimits

0xc6d6,	// (0x0001b346) list_double_graphic_heading_pane_g1

0xc80d,	// (0x0001b47d) list_double_graphic_heading_pane_g2_ParamLimits

0xc80d,	// (0x0001b47d) list_double_graphic_heading_pane_g2

0xc81e,	// (0x0001b48e) list_double_graphic_heading_pane_g3_ParamLimits

0xc81e,	// (0x0001b48e) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x0001e2cf) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x0001e2cf) list_double_graphic_heading_pane_g

0xc840,	// (0x0001b4b0) list_double_graphic_heading_pane_t1_ParamLimits

0xc840,	// (0x0001b4b0) list_double_graphic_heading_pane_t1

0xc749,	// (0x0001b3b9) list_double_graphic_heading_pane_t2_ParamLimits

0xc749,	// (0x0001b3b9) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0001e2d6) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0001e2d6) list_double_graphic_heading_pane_t

0xc679,	// (0x0001b2e9) list_double_time_pane_g1_ParamLimits

0xc679,	// (0x0001b2e9) list_double_time_pane_g1

0xc645,	// (0x0001b2b5) list_double_time_pane_g2_ParamLimits

0xc645,	// (0x0001b2b5) list_double_time_pane_g2

0x0001,

0xf60e,	// (0x0001e27e) list_double_time_pane_g_ParamLimits

0xf60e,	// (0x0001e27e) list_double_time_pane_g

0xc7e5,	// (0x0001b455) list_double_time_pane_t1_ParamLimits

0xc7e5,	// (0x0001b455) list_double_time_pane_t1

0xc856,	// (0x0001b4c6) list_double_time_pane_t2_ParamLimits

0xc856,	// (0x0001b4c6) list_double_time_pane_t2

0xc868,	// (0x0001b4d8) list_double_time_pane_t3_ParamLimits

0xc868,	// (0x0001b4d8) list_double_time_pane_t3

0xc87a,	// (0x0001b4ea) list_double_time_pane_t4_ParamLimits

0xc87a,	// (0x0001b4ea) list_double_time_pane_t4

0x0003,

0xf66b,	// (0x0001e2db) list_double_time_pane_t_ParamLimits

0xf66b,	// (0x0001e2db) list_double_time_pane_t

0xc88c,	// (0x0001b4fc) list_setting_pane_g1_ParamLimits

0xc88c,	// (0x0001b4fc) list_setting_pane_g1

0xc898,	// (0x0001b508) list_setting_pane_g2_ParamLimits

0xc898,	// (0x0001b508) list_setting_pane_g2

0x0001,

0xf674,	// (0x0001e2e4) list_setting_pane_g_ParamLimits

0xf674,	// (0x0001e2e4) list_setting_pane_g

0xc8a4,	// (0x0001b514) list_setting_pane_t1_ParamLimits

0xc8a4,	// (0x0001b514) list_setting_pane_t1

0xc8bb,	// (0x0001b52b) list_setting_pane_t2_ParamLimits

0xc8bb,	// (0x0001b52b) list_setting_pane_t2

0x0002,

0xf679,	// (0x0001e2e9) list_setting_pane_t_ParamLimits

0xf679,	// (0x0001e2e9) list_setting_pane_t

0xc8f8,	// (0x0001b568) set_value_pane_cp_ParamLimits

0xc8f8,	// (0x0001b568) set_value_pane_cp

0xc904,	// (0x0001b574) list_setting_number_pane_g1_ParamLimits

0xc904,	// (0x0001b574) list_setting_number_pane_g1

0xc910,	// (0x0001b580) list_setting_number_pane_g2_ParamLimits

0xc910,	// (0x0001b580) list_setting_number_pane_g2

0x0001,

0xf680,	// (0x0001e2f0) list_setting_number_pane_g_ParamLimits

0xf680,	// (0x0001e2f0) list_setting_number_pane_g

0xc91c,	// (0x0001b58c) list_setting_number_pane_t1_ParamLimits

0xc91c,	// (0x0001b58c) list_setting_number_pane_t1

0xc930,	// (0x0001b5a0) list_setting_number_pane_t2_ParamLimits

0xc930,	// (0x0001b5a0) list_setting_number_pane_t2

0xc947,	// (0x0001b5b7) list_setting_number_pane_t3_ParamLimits

0xc947,	// (0x0001b5b7) list_setting_number_pane_t3

0x0003,

0xf685,	// (0x0001e2f5) list_setting_number_pane_t_ParamLimits

0xf685,	// (0x0001e2f5) list_setting_number_pane_t

0xc8f8,	// (0x0001b568) set_value_pane_ParamLimits

0xc8f8,	// (0x0001b568) set_value_pane

0x2e2e,	// (0x00011a9e) bg_set_opt_pane_ParamLimits

0x2e2e,	// (0x00011a9e) bg_set_opt_pane

0xc98a,	// (0x0001b5fa) set_value_pane_t1

0x2e5d,	// (0x00011acd) slider_set_pane_cp3

0x2e66,	// (0x00011ad6) volume_small_pane_cp

0x2e6f,	// (0x00011adf) list_form_gen_pane

0x2e78,	// (0x00011ae8) scroll_pane_cp8

0xc9a0,	// (0x0001b610) form_field_data_pane_ParamLimits

0xc9a0,	// (0x0001b610) form_field_data_pane

0xc9c0,	// (0x0001b630) form_field_data_wide_pane_ParamLimits

0xc9c0,	// (0x0001b630) form_field_data_wide_pane

0xc9e1,	// (0x0001b651) form_field_popup_pane_ParamLimits

0xc9e1,	// (0x0001b651) form_field_popup_pane

0xc9ff,	// (0x0001b66f) form_field_popup_wide_pane_ParamLimits

0xc9ff,	// (0x0001b66f) form_field_popup_wide_pane

0xca1a,	// (0x0001b68a) form_field_slider_pane_ParamLimits

0xca1a,	// (0x0001b68a) form_field_slider_pane

0xca2d,	// (0x0001b69d) form_field_slider_wide_pane_ParamLimits

0xca2d,	// (0x0001b69d) form_field_slider_wide_pane

0x2f29,	// (0x00011b99) data_form_pane

0xca4a,	// (0x0001b6ba) form_field_data_pane_t1

0x2f59,	// (0x00011bc9) input_focus_pane

0x2f67,	// (0x00011bd7) data_form_wide_pane

0xca70,	// (0x0001b6e0) form_field_data_wide_pane_t1

0x275e,	// (0x000113ce) input_focus_pane_cp6

0xca92,	// (0x0001b702) form_field_popup_pane_t1

0x2f59,	// (0x00011bc9) input_focus_pane_cp7

0x2fdb,	// (0x00011c4b) list_form_pane

0xcab4,	// (0x0001b724) form_field_popup_wide_pane_t1

0x2f59,	// (0x00011bc9) input_focus_pane_cp8

0x3004,	// (0x00011c74) list_form_wide_pane

0xcad1,	// (0x0001b741) form_field_slider_pane_t1_ParamLimits

0xcad1,	// (0x0001b741) form_field_slider_pane_t1

0xcae5,	// (0x0001b755) form_field_slider_pane_t2_ParamLimits

0xcae5,	// (0x0001b755) form_field_slider_pane_t2

0x0001,

0xf695,	// (0x0001e305) form_field_slider_pane_t_ParamLimits

0xf695,	// (0x0001e305) form_field_slider_pane_t

0x2415,	// (0x00011085) input_focus_pane_cp9_ParamLimits

0x2415,	// (0x00011085) input_focus_pane_cp9

0xcaf7,	// (0x0001b767) slider_cont_pane_ParamLimits

0xcaf7,	// (0x0001b767) slider_cont_pane

0x3055,	// (0x00011cc5) form_field_slider_wide_pane_t1_ParamLimits

0x3055,	// (0x00011cc5) form_field_slider_wide_pane_t1

0xcb0b,	// (0x0001b77b) form_field_slider_wide_pane_t2_ParamLimits

0xcb0b,	// (0x0001b77b) form_field_slider_wide_pane_t2

0x0001,

0xf69a,	// (0x0001e30a) form_field_slider_wide_pane_t_ParamLimits

0xf69a,	// (0x0001e30a) form_field_slider_wide_pane_t

0x2415,	// (0x00011085) input_focus_pane_cp10_ParamLimits

0x2415,	// (0x00011085) input_focus_pane_cp10

0xcb1d,	// (0x0001b78d) slider_cont_pane_cp1_ParamLimits

0xcb1d,	// (0x0001b78d) slider_cont_pane_cp1

0xcb31,	// (0x0001b7a1) slider_form_pane_cp

0x3095,	// (0x00011d05) input_focus_pane_g1

0x309d,	// (0x00011d0d) input_focus_pane_g2

0x30a5,	// (0x00011d15) input_focus_pane_g3

0x30ad,	// (0x00011d1d) input_focus_pane_g4

0x30b5,	// (0x00011d25) input_focus_pane_g5

0x30bd,	// (0x00011d2d) input_focus_pane_g6

0x30c5,	// (0x00011d35) input_focus_pane_g7

0x30cd,	// (0x00011d3d) input_focus_pane_g8

0x30d5,	// (0x00011d45) input_focus_pane_g9

0x2096,	// (0x00010d06) input_focus_pane_g10

0x0009,

0xf69f,	// (0x0001e30f) input_focus_pane_g

0x52f7,	// (0x00013f67) wait_border_pane_g3_copy1

0xcb39,	// (0x0001b7a9) data_form_pane_t1

0x2096,	// (0x00010d06) wait_anim_pane_g1_copy1

0xcd61,	// (0x0001b9d1) data_form_wide_pane_t1

0xcb54,	// (0x0001b7c4) list_form_graphic_pane_cp_ParamLimits

0xcb54,	// (0x0001b7c4) list_form_graphic_pane_cp

0x6238,	// (0x00014ea8) slider_form_pane_g1

0x6241,	// (0x00014eb1) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0001e5ff) slider_form_pane_g

0xcb6b,	// (0x0001b7db) list_form_graphic_pane_ParamLimits

0xcb6b,	// (0x0001b7db) list_form_graphic_pane

0xcb85,	// (0x0001b7f5) list_form_graphic_pane_g1

0xcb8d,	// (0x0001b7fd) list_form_graphic_pane_t1_ParamLimits

0xcb8d,	// (0x0001b7fd) list_form_graphic_pane_t1

0x2180,	// (0x00010df0) list_highlight_pane_cp5_ParamLimits

0x2180,	// (0x00010df0) list_highlight_pane_cp5

0xcba2,	// (0x0001b812) find_pane_g1

0x314f,	// (0x00011dbf) input_find_pane

0xcbab,	// (0x0001b81b) input_find_pane_g1_ParamLimits

0xcbab,	// (0x0001b81b) input_find_pane_g1

0xcbb7,	// (0x0001b827) input_find_pane_t1_ParamLimits

0xcbb7,	// (0x0001b827) input_find_pane_t1

0xcbcc,	// (0x0001b83c) input_find_pane_t2_ParamLimits

0xcbcc,	// (0x0001b83c) input_find_pane_t2

0x0001,

0xf6b4,	// (0x0001e324) input_find_pane_t_ParamLimits

0xf6b4,	// (0x0001e324) input_find_pane_t

0x318e,	// (0x00011dfe) input_focus_pane_cp5_ParamLimits

0x318e,	// (0x00011dfe) input_focus_pane_cp5

0x31a8,	// (0x00011e18) bg_popup_window_pane_cp2_ParamLimits

0x31a8,	// (0x00011e18) bg_popup_window_pane_cp2

0x31b5,	// (0x00011e25) listscroll_menu_pane_ParamLimits

0x31b5,	// (0x00011e25) listscroll_menu_pane

0x31c1,	// (0x00011e31) popup_submenu_window_ParamLimits

0x31c1,	// (0x00011e31) popup_submenu_window

0x31e9,	// (0x00011e59) find_popup_pane_g1

0x31f1,	// (0x00011e61) input_popup_find_pane_cp

0x318e,	// (0x00011dfe) input_focus_pane_cp4_ParamLimits

0x318e,	// (0x00011dfe) input_focus_pane_cp4

0x3209,	// (0x00011e79) input_popup_find_pane_t1_ParamLimits

0x3209,	// (0x00011e79) input_popup_find_pane_t1

0x20a0,	// (0x00010d10) bg_popup_sub_pane_cp

0x3237,	// (0x00011ea7) listscroll_popup_sub_pane

0x323f,	// (0x00011eaf) list_submenu_pane_ParamLimits

0x323f,	// (0x00011eaf) list_submenu_pane

0x3250,	// (0x00011ec0) scroll_pane_cp4

0x3258,	// (0x00011ec8) list_single_popup_submenu_pane_ParamLimits

0x3258,	// (0x00011ec8) list_single_popup_submenu_pane

0x326b,	// (0x00011edb) list_single_popup_submenu_pane_g1

0x3273,	// (0x00011ee3) list_single_popup_submenu_pane_t1_ParamLimits

0x3273,	// (0x00011ee3) list_single_popup_submenu_pane_t1

0x2180,	// (0x00010df0) bg_active_tab_pane_cp1_ParamLimits

0x2180,	// (0x00010df0) bg_active_tab_pane_cp1

0x3288,	// (0x00011ef8) tabs_2_active_pane_g1

0x3290,	// (0x00011f00) tabs_2_active_pane_t1

0x2180,	// (0x00010df0) bg_passive_tab_pane_cp1_ParamLimits

0x2180,	// (0x00010df0) bg_passive_tab_pane_cp1

0x3288,	// (0x00011ef8) tabs_2_passive_pane_g1

0x3290,	// (0x00011f00) tabs_2_passive_pane_t1

0x32a2,	// (0x00011f12) bg_active_tab_pane_cp4

0x32b0,	// (0x00011f20) tabs_2_long_active_pane_t1

0x32c3,	// (0x00011f33) bg_passive_tab_pane_cp4

0xdf08,	// (0x0001cb78) list_single_midp_graphic_pane_g4_ParamLimits

0x32a2,	// (0x00011f12) bg_active_tab_pane_cp5

0x32cf,	// (0x00011f3f) tabs_3_long_active_pane_t1

0x32c3,	// (0x00011f33) bg_passive_tab_pane_cp5

0xdf08,	// (0x0001cb78) list_single_midp_graphic_pane_g4

0x2180,	// (0x00010df0) bg_popup_window_pane_cp13_ParamLimits

0x2180,	// (0x00010df0) bg_popup_window_pane_cp13

0x32ea,	// (0x00011f5a) listscroll_popup_fast_pane_ParamLimits

0x32ea,	// (0x00011f5a) listscroll_popup_fast_pane

0x32f9,	// (0x00011f69) grid_popup_fast_pane_ParamLimits

0x32f9,	// (0x00011f69) grid_popup_fast_pane

0x330b,	// (0x00011f7b) scroll_pane_cp9_ParamLimits

0x330b,	// (0x00011f7b) scroll_pane_cp9

0x7ffb,	// (0x00016c6b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ffb,	// (0x00016c6b) list_single_graphic_hl_pane_t1_cp2

0x332f,	// (0x00011f9f) input_focus_pane_cp20_ParamLimits

0x332f,	// (0x00011f9f) input_focus_pane_cp20

0x333d,	// (0x00011fad) query_popup_data_pane_t1_ParamLimits

0x333d,	// (0x00011fad) query_popup_data_pane_t1

0x3350,	// (0x00011fc0) query_popup_data_pane_t2_ParamLimits

0x3350,	// (0x00011fc0) query_popup_data_pane_t2

0x3396,	// (0x00012006) query_popup_data_pane_t3_ParamLimits

0x3396,	// (0x00012006) query_popup_data_pane_t3

0x33d7,	// (0x00012047) query_popup_data_pane_t4_ParamLimits

0x33d7,	// (0x00012047) query_popup_data_pane_t4

0x3413,	// (0x00012083) query_popup_data_pane_t5_ParamLimits

0x3413,	// (0x00012083) query_popup_data_pane_t5

0x0004,

0xf6b9,	// (0x0001e329) query_popup_data_pane_t_ParamLimits

0xf6b9,	// (0x0001e329) query_popup_data_pane_t

0x3095,	// (0x00011d05) bg_set_opt_pane_g1

0x309d,	// (0x00011d0d) bg_set_opt_pane_g2

0x30a5,	// (0x00011d15) bg_set_opt_pane_g3

0x30ad,	// (0x00011d1d) bg_set_opt_pane_g4

0x30b5,	// (0x00011d25) bg_set_opt_pane_g5

0x30bd,	// (0x00011d2d) bg_set_opt_pane_g6

0x30c5,	// (0x00011d35) bg_set_opt_pane_g7

0x30cd,	// (0x00011d3d) bg_set_opt_pane_g8

0x30d5,	// (0x00011d45) bg_set_opt_pane_g9

0x0008,

0xf6c4,	// (0x0001e334) bg_set_opt_pane_g

0xdb69,	// (0x0001c7d9) control_top_pane_stacon_ParamLimits

0xdb69,	// (0x0001c7d9) control_top_pane_stacon

0xdbbc,	// (0x0001c82c) signal_pane_stacon_ParamLimits

0xdbbc,	// (0x0001c82c) signal_pane_stacon

0x3a65,	// (0x000126d5) stacon_top_pane_g1_ParamLimits

0x3a65,	// (0x000126d5) stacon_top_pane_g1

0xdbe1,	// (0x0001c851) title_pane_stacon_ParamLimits

0xdbe1,	// (0x0001c851) title_pane_stacon

0xdc0b,	// (0x0001c87b) uni_indicator_pane_stacon_ParamLimits

0xdc0b,	// (0x0001c87b) uni_indicator_pane_stacon

0xdc20,	// (0x0001c890) battery_pane_stacon_ParamLimits

0xdc20,	// (0x0001c890) battery_pane_stacon

0xdc64,	// (0x0001c8d4) control_bottom_pane_stacon_ParamLimits

0xdc64,	// (0x0001c8d4) control_bottom_pane_stacon

0xdc87,	// (0x0001c8f7) navi_pane_stacon_ParamLimits

0xdc87,	// (0x0001c8f7) navi_pane_stacon

0x3a87,	// (0x000126f7) stacon_bottom_pane_g1_ParamLimits

0x3a87,	// (0x000126f7) stacon_bottom_pane_g1

0xd8ca,	// (0x0001c53a) aid_levels_signal_lsc_ParamLimits

0xd8ca,	// (0x0001c53a) aid_levels_signal_lsc

0xd8e1,	// (0x0001c551) signal_pane_stacon_g1_ParamLimits

0xd8e1,	// (0x0001c551) signal_pane_stacon_g1

0xd8f5,	// (0x0001c565) signal_pane_stacon_g2_ParamLimits

0xd8f5,	// (0x0001c565) signal_pane_stacon_g2

0x0001,

0xf6d7,	// (0x0001e347) signal_pane_stacon_g_ParamLimits

0xf6d7,	// (0x0001e347) signal_pane_stacon_g

0xd92a,	// (0x0001c59a) title_pane_stacon_t1_ParamLimits

0xd92a,	// (0x0001c59a) title_pane_stacon_t1

0x346b,	// (0x000120db) uni_indicator_pane_stacon_g1

0x3475,	// (0x000120e5) uni_indicator_pane_stacon_g2

0x3457,	// (0x000120c7) uni_indicator_pane_stacon_g3

0x3461,	// (0x000120d1) uni_indicator_pane_stacon_g4

0x0003,

0xf6e3,	// (0x0001e353) uni_indicator_pane_stacon_g

0xd94f,	// (0x0001c5bf) control_top_pane_stacon_g1

0xd957,	// (0x0001c5c7) control_top_pane_stacon_t1_ParamLimits

0xd957,	// (0x0001c5c7) control_top_pane_stacon_t1

0xd98e,	// (0x0001c5fe) aid_levels_battery_lsc_ParamLimits

0xd98e,	// (0x0001c5fe) aid_levels_battery_lsc

0xd9a6,	// (0x0001c616) battery_pane_stacon_g1_ParamLimits

0xd9a6,	// (0x0001c616) battery_pane_stacon_g1

0xd9b9,	// (0x0001c629) battery_pane_stacon_g2_ParamLimits

0xd9b9,	// (0x0001c629) battery_pane_stacon_g2

0x0001,

0xf6ec,	// (0x0001e35c) battery_pane_stacon_g_ParamLimits

0xf6ec,	// (0x0001e35c) battery_pane_stacon_g

0xd9f7,	// (0x0001c667) navi_icon_pane_stacon

0xda0b,	// (0x0001c67b) navi_navi_pane_stacon

0xd9f7,	// (0x0001c667) navi_text_pane_stacon

0xd94f,	// (0x0001c5bf) control_bottom_pane_stacon_g1

0xda1f,	// (0x0001c68f) control_bottom_pane_stacon_t1_ParamLimits

0xda1f,	// (0x0001c68f) control_bottom_pane_stacon_t1

0x3499,	// (0x00012109) grid_app_pane_ParamLimits

0x3499,	// (0x00012109) grid_app_pane

0x34bb,	// (0x0001212b) scroll_pane_cp15_ParamLimits

0x34bb,	// (0x0001212b) scroll_pane_cp15

0x34d0,	// (0x00012140) cell_app_pane_ParamLimits

0x34d0,	// (0x00012140) cell_app_pane

0x34fa,	// (0x0001216a) cell_app_pane_g1_ParamLimits

0x34fa,	// (0x0001216a) cell_app_pane_g1

0x351a,	// (0x0001218a) cell_app_pane_g2_ParamLimits

0x351a,	// (0x0001218a) cell_app_pane_g2

0x0001,

0xf6f1,	// (0x0001e361) cell_app_pane_g_ParamLimits

0xf6f1,	// (0x0001e361) cell_app_pane_g

0x3526,	// (0x00012196) cell_app_pane_t1_ParamLimits

0x3526,	// (0x00012196) cell_app_pane_t1

0x353d,	// (0x000121ad) grid_highlight_pane_ParamLimits

0x353d,	// (0x000121ad) grid_highlight_pane

0x3095,	// (0x00011d05) cell_highlight_pane_g1

0x309d,	// (0x00011d0d) cell_highlight_pane_g2

0x30a5,	// (0x00011d15) cell_highlight_pane_g3

0x30ad,	// (0x00011d1d) cell_highlight_pane_g4

0x30b5,	// (0x00011d25) cell_highlight_pane_g5

0x30bd,	// (0x00011d2d) cell_highlight_pane_g6

0x30c5,	// (0x00011d35) cell_highlight_pane_g7

0x30cd,	// (0x00011d3d) cell_highlight_pane_g8

0x30d5,	// (0x00011d45) cell_highlight_pane_g9

0x2096,	// (0x00010d06) cell_highlight_pane_g10

0x0009,

0xf69f,	// (0x0001e30f) cell_highlight_pane_g

0x354e,	// (0x000121be) bg_scroll_pane

0xda69,	// (0x0001c6d9) scroll_handle_pane

0x3595,	// (0x00012205) scroll_bg_pane_g1

0x35aa,	// (0x0001221a) scroll_bg_pane_g2

0x35c2,	// (0x00012232) scroll_bg_pane_g3

0x0002,

0xf6f6,	// (0x0001e366) scroll_bg_pane_g

0x35d7,	// (0x00012247) scroll_handle_focus_pane_ParamLimits

0x35d7,	// (0x00012247) scroll_handle_focus_pane

0x3595,	// (0x00012205) scroll_handle_pane_g1

0x35e4,	// (0x00012254) scroll_handle_pane_g2

0x35c2,	// (0x00012232) scroll_handle_pane_g3

0x0002,

0xf6fd,	// (0x0001e36d) scroll_handle_pane_g

0x318e,	// (0x00011dfe) bg_popup_sub_pane_cp21_ParamLimits

0x318e,	// (0x00011dfe) bg_popup_sub_pane_cp21

0x35f8,	// (0x00012268) popup_fep_japan_predictive_window_t1_ParamLimits

0x35f8,	// (0x00012268) popup_fep_japan_predictive_window_t1

0x360f,	// (0x0001227f) popup_fep_japan_predictive_window_t2_ParamLimits

0x360f,	// (0x0001227f) popup_fep_japan_predictive_window_t2

0x3642,	// (0x000122b2) popup_fep_japan_predictive_window_t3_ParamLimits

0x3642,	// (0x000122b2) popup_fep_japan_predictive_window_t3

0x0002,

0xf704,	// (0x0001e374) popup_fep_japan_predictive_window_t_ParamLimits

0xf704,	// (0x0001e374) popup_fep_japan_predictive_window_t

0x20a0,	// (0x00010d10) bg_popup_sub_pane_cp23

0x3679,	// (0x000122e9) listscroll_japin_cand_pane

0x3681,	// (0x000122f1) popup_fep_japan_candidate_window_t1

0x368f,	// (0x000122ff) candidate_pane_ParamLimits

0x368f,	// (0x000122ff) candidate_pane

0x36a1,	// (0x00012311) scroll_pane_cp30

0x36a9,	// (0x00012319) list_single_popup_jap_candidate_pane_ParamLimits

0x36a9,	// (0x00012319) list_single_popup_jap_candidate_pane

0x20a0,	// (0x00010d10) list_highlight_pane_cp30

0x36bd,	// (0x0001232d) list_single_popup_jap_candidate_pane_t1

0x36cc,	// (0x0001233c) level_1_signal

0x36d9,	// (0x00012349) level_2_signal

0x36e6,	// (0x00012356) level_3_signal

0x36f3,	// (0x00012363) level_4_signal

0x3700,	// (0x00012370) level_5_signal

0x370d,	// (0x0001237d) level_6_signal

0x371a,	// (0x0001238a) level_7_signal

0x36cc,	// (0x0001233c) level_1_battery

0x36d9,	// (0x00012349) level_2_battery

0x36e6,	// (0x00012356) level_3_battery

0x36f3,	// (0x00012363) level_4_battery

0x3700,	// (0x00012370) level_5_battery

0x370d,	// (0x0001237d) level_6_battery

0x371a,	// (0x0001238a) level_7_battery

0x373f,	// (0x000123af) list_menu_pane_ParamLimits

0x373f,	// (0x000123af) list_menu_pane

0x3755,	// (0x000123c5) scroll_pane_cp25_ParamLimits

0x3755,	// (0x000123c5) scroll_pane_cp25

0x376e,	// (0x000123de) list_double2_graphic_pane_cp2_ParamLimits

0x376e,	// (0x000123de) list_double2_graphic_pane_cp2

0x376e,	// (0x000123de) list_double2_large_graphic_pane_cp2_ParamLimits

0x376e,	// (0x000123de) list_double2_large_graphic_pane_cp2

0x376e,	// (0x000123de) list_double2_pane_cp2_ParamLimits

0x376e,	// (0x000123de) list_double2_pane_cp2

0x376e,	// (0x000123de) list_double_graphic_pane_cp2_ParamLimits

0x376e,	// (0x000123de) list_double_graphic_pane_cp2

0x376e,	// (0x000123de) list_double_large_graphic_pane_cp2_ParamLimits

0x376e,	// (0x000123de) list_double_large_graphic_pane_cp2

0x376e,	// (0x000123de) list_double_number_pane_cp2_ParamLimits

0x376e,	// (0x000123de) list_double_number_pane_cp2

0x376e,	// (0x000123de) list_double_pane_cp2_ParamLimits

0x376e,	// (0x000123de) list_double_pane_cp2

0x3790,	// (0x00012400) list_single_2graphic_pane_cp2_ParamLimits

0x3790,	// (0x00012400) list_single_2graphic_pane_cp2

0x3790,	// (0x00012400) list_single_graphic_heading_pane_cp2_ParamLimits

0x3790,	// (0x00012400) list_single_graphic_heading_pane_cp2

0x3790,	// (0x00012400) list_single_graphic_pane_cp2_ParamLimits

0x3790,	// (0x00012400) list_single_graphic_pane_cp2

0x3790,	// (0x00012400) list_single_heading_pane_cp2_ParamLimits

0x3790,	// (0x00012400) list_single_heading_pane_cp2

0x37a7,	// (0x00012417) list_single_large_graphic_pane_cp2_ParamLimits

0x37a7,	// (0x00012417) list_single_large_graphic_pane_cp2

0x3790,	// (0x00012400) list_single_number_heading_pane_cp2_ParamLimits

0x3790,	// (0x00012400) list_single_number_heading_pane_cp2

0x3790,	// (0x00012400) list_single_number_pane_cp2_ParamLimits

0x3790,	// (0x00012400) list_single_number_pane_cp2

0x3790,	// (0x00012400) list_single_pane_cp2_ParamLimits

0x3790,	// (0x00012400) list_single_pane_cp2

0x3823,	// (0x00012493) bg_popup_sub_pane_cp22

0xdb1b,	// (0x0001c78b) popup_side_volume_key_window_g1

0xdb45,	// (0x0001c7b5) popup_side_volume_key_window_t1

0xdb61,	// (0x0001c7d1) volume_small_pane_cp1

0x2415,	// (0x00011085) bg_popup_sub_pane_cp24_ParamLimits

0x2415,	// (0x00011085) bg_popup_sub_pane_cp24

0x3839,	// (0x000124a9) fep_china_uni_candidate_pane_ParamLimits

0x3839,	// (0x000124a9) fep_china_uni_candidate_pane

0x384d,	// (0x000124bd) fep_china_uni_entry_pane

0x385d,	// (0x000124cd) popup_fep_china_uni_window_g1

0x3879,	// (0x000124e9) fep_china_uni_entry_pane_g1

0x3881,	// (0x000124f1) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001e3a5) fep_china_uni_entry_pane_g

0x3889,	// (0x000124f9) fep_entry_item_pane

0x3893,	// (0x00012503) fep_candidate_item_pane

0x389b,	// (0x0001250b) fep_china_uni_candidate_pane_g1

0x38a3,	// (0x00012513) fep_china_uni_candidate_pane_g2

0x38ab,	// (0x0001251b) fep_china_uni_candidate_pane_g3

0x38b3,	// (0x00012523) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001e3aa) fep_china_uni_candidate_pane_g

0x2096,	// (0x00010d06) fep_entry_item_pane_g1

0x38bb,	// (0x0001252b) fep_entry_item_pane_t1_ParamLimits

0x38bb,	// (0x0001252b) fep_entry_item_pane_t1

0x38d1,	// (0x00012541) fep_candidate_item_pane_t1_ParamLimits

0x38d1,	// (0x00012541) fep_candidate_item_pane_t1

0x38e6,	// (0x00012556) fep_candidate_item_pane_t2_ParamLimits

0x38e6,	// (0x00012556) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001e3b3) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001e3b3) fep_candidate_item_pane_t

0x2180,	// (0x00010df0) list_highlight_pane_cp31_ParamLimits

0x2180,	// (0x00010df0) list_highlight_pane_cp31

0x38f8,	// (0x00012568) level_1_signal_lsc

0x3901,	// (0x00012571) level_2_signal_lsc

0x390a,	// (0x0001257a) level_3_signal_lsc

0x3913,	// (0x00012583) level_4_signal_lsc

0x391c,	// (0x0001258c) level_5_signal_lsc

0x3925,	// (0x00012595) level_6_signal_lsc

0x392e,	// (0x0001259e) level_7_signal_lsc

0x392e,	// (0x0001259e) level_1_battery_lsc

0x3937,	// (0x000125a7) level_2_battery_lsc

0x3940,	// (0x000125b0) level_3_battery_lsc

0x3949,	// (0x000125b9) level_4_battery_lsc

0x3952,	// (0x000125c2) level_5_battery_lsc

0x395b,	// (0x000125cb) level_6_battery_lsc

0x38f8,	// (0x00012568) level_7_battery_lsc

0x3964,	// (0x000125d4) scroll_handle_focus_pane_g1

0x396d,	// (0x000125dd) scroll_handle_focus_pane_g2

0x3976,	// (0x000125e6) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001e3b8) scroll_handle_focus_pane_g

0xcbe1,	// (0x0001b851) list_single_2graphic_pane_g1_ParamLimits

0xcbe1,	// (0x0001b851) list_single_2graphic_pane_g1

0xc5d4,	// (0x0001b244) list_single_2graphic_pane_g2_ParamLimits

0xc5d4,	// (0x0001b244) list_single_2graphic_pane_g2

0xc55a,	// (0x0001b1ca) list_single_2graphic_pane_g3_ParamLimits

0xc55a,	// (0x0001b1ca) list_single_2graphic_pane_g3

0xcbed,	// (0x0001b85d) list_single_2graphic_pane_g4_ParamLimits

0xcbed,	// (0x0001b85d) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001e3bf) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001e3bf) list_single_2graphic_pane_g

0xcbf9,	// (0x0001b869) list_single_2graphic_pane_t1_ParamLimits

0xcbf9,	// (0x0001b869) list_single_2graphic_pane_t1

0xcc27,	// (0x0001b897) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xcc27,	// (0x0001b897) list_double2_graphic_large_graphic_pane_g1

0xc679,	// (0x0001b2e9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc679,	// (0x0001b2e9) list_double2_graphic_large_graphic_pane_g2

0xc645,	// (0x0001b2b5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc645,	// (0x0001b2b5) list_double2_graphic_large_graphic_pane_g3

0xcc39,	// (0x0001b8a9) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xcc39,	// (0x0001b8a9) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001e3c8) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001e3c8) list_double2_graphic_large_graphic_pane_g

0xcc45,	// (0x0001b8b5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xcc45,	// (0x0001b8b5) list_double2_graphic_large_graphic_pane_t1

0xcc5b,	// (0x0001b8cb) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xcc5b,	// (0x0001b8cb) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001e3d1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001e3d1) list_double2_graphic_large_graphic_pane_t

0x3b52,	// (0x000127c2) popup_fast_swap_window_ParamLimits

0x3b52,	// (0x000127c2) popup_fast_swap_window

0x3b6e,	// (0x000127de) popup_side_volume_key_window

0x3b88,	// (0x000127f8) stacon_top_pane

0x3b92,	// (0x00012802) status_pane_ParamLimits

0x3b92,	// (0x00012802) status_pane

0x3b88,	// (0x000127f8) status_small_pane

0x20a0,	// (0x00010d10) control_pane

0x20a0,	// (0x00010d10) stacon_bottom_pane

0x2e78,	// (0x00011ae8) scroll_pane_cp121

0x2e6f,	// (0x00011adf) set_content_pane

0x3a22,	// (0x00012692) bg_active_tab_pane_g1_cp1

0x3a19,	// (0x00012689) bg_active_tab_pane_g2_cp1

0x3a10,	// (0x00012680) bg_active_tab_pane_g3_cp1

0x3a22,	// (0x00012692) bg_passive_tab_pane_g1_cp1

0x3a19,	// (0x00012689) bg_passive_tab_pane_g2_cp1

0x3a10,	// (0x00012680) bg_passive_tab_pane_g3_cp1

0x3a34,	// (0x000126a4) bg_active_tab_pane_g1_cp2

0x3a19,	// (0x00012689) bg_active_tab_pane_g2_cp2

0x3a2b,	// (0x0001269b) bg_active_tab_pane_g3_cp2

0x3a34,	// (0x000126a4) bg_passive_tab_pane_g1_cp2

0x3a19,	// (0x00012689) bg_passive_tab_pane_g2_cp2

0x3a2b,	// (0x0001269b) bg_passive_tab_pane_g3_cp2

0x3a46,	// (0x000126b6) bg_active_tab_pane_g1_cp3

0x3a19,	// (0x00012689) bg_active_tab_pane_g2_cp3

0x3a3d,	// (0x000126ad) bg_active_tab_pane_g3_cp3

0x3a46,	// (0x000126b6) bg_passive_tab_pane_g1_cp3

0x3a19,	// (0x00012689) bg_passive_tab_pane_g2_cp3

0x3a3d,	// (0x000126ad) bg_passive_tab_pane_g3_cp3

0x3a5a,	// (0x000126ca) bg_active_tab_pane_g1_cp4

0x3a19,	// (0x00012689) bg_active_tab_pane_g2_cp4

0x3a4f,	// (0x000126bf) bg_active_tab_pane_g3_cp4

0x3a5a,	// (0x000126ca) bg_passive_tab_pane_g1_cp4

0x3a19,	// (0x00012689) bg_passive_tab_pane_g2_cp4

0x3a4f,	// (0x000126bf) bg_passive_tab_pane_g3_cp4

0x3aac,	// (0x0001271c) bg_active_tab_pane_g1_cp5

0x3a19,	// (0x00012689) bg_active_tab_pane_g2_cp5

0x3aa3,	// (0x00012713) bg_active_tab_pane_g3_cp5

0x3aac,	// (0x0001271c) bg_passive_tab_pane_g1_cp5

0x3a19,	// (0x00012689) bg_passive_tab_pane_g2_cp5

0x3aa3,	// (0x00012713) bg_passive_tab_pane_g3_cp5

0x3ab5,	// (0x00012725) list_set_graphic_pane_ParamLimits

0x3ab5,	// (0x00012725) list_set_graphic_pane

0x20a0,	// (0x00010d10) bg_set_opt_pane_cp4

0x3ad3,	// (0x00012743) list_set_graphic_pane_g1_ParamLimits

0x3ad3,	// (0x00012743) list_set_graphic_pane_g1

0x3adf,	// (0x0001274f) list_set_graphic_pane_g2_ParamLimits

0x3adf,	// (0x0001274f) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001e3d6) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001e3d6) list_set_graphic_pane_g

0x0009,

0xfad2,	// (0x0001e742) volume_small_pane_cp_g

0x3b03,	// (0x00012773) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3b03,	// (0x00012773) list_double2_large_graphic_pane_g1_cp2

0x3b11,	// (0x00012781) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3b11,	// (0x00012781) list_double2_large_graphic_pane_g2_cp2

0x3b22,	// (0x00012792) list_double2_large_graphic_pane_g3_cp2

0x3b2a,	// (0x0001279a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3b2a,	// (0x0001279a) list_double2_large_graphic_pane_t1_cp2

0x3b40,	// (0x000127b0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3b40,	// (0x000127b0) list_double2_large_graphic_pane_t2_cp2

0x5db8,	// (0x00014a28) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5db8,	// (0x00014a28) list_double_large_graphic_pane_g1_cp2

0x5dcb,	// (0x00014a3b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5dcb,	// (0x00014a3b) list_double_large_graphic_pane_g2_cp2

0x3cb0,	// (0x00012920) list_double_large_graphic_pane_g3_cp2

0x5ddc,	// (0x00014a4c) list_double_large_graphic_pane_g4_cp

0x5de4,	// (0x00014a54) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5de4,	// (0x00014a54) list_double_large_graphic_pane_t1_cp2

0x5dfb,	// (0x00014a6b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5dfb,	// (0x00014a6b) list_double_large_graphic_pane_t2_cp2

0x3ba0,	// (0x00012810) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3ba0,	// (0x00012810) list_double2_graphic_pane_g1_cp2

0x3bae,	// (0x0001281e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3bae,	// (0x0001281e) list_double2_graphic_pane_g2_cp2

0x3bbf,	// (0x0001282f) list_double2_graphic_pane_g3_cp2

0x3bc9,	// (0x00012839) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3bc9,	// (0x00012839) list_double2_graphic_pane_t1_cp2

0x3bdf,	// (0x0001284f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3bdf,	// (0x0001284f) list_double2_graphic_pane_t2_cp2

0x3bf1,	// (0x00012861) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3bf1,	// (0x00012861) list_single_number_heading_pane_g1_cp2

0x3bfd,	// (0x0001286d) list_single_number_heading_pane_g2_cp2

0x3c05,	// (0x00012875) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3c05,	// (0x00012875) list_single_number_heading_pane_t1_cp2

0x3c1b,	// (0x0001288b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3c1b,	// (0x0001288b) list_single_number_heading_pane_t2_cp2

0x3c2f,	// (0x0001289f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3c2f,	// (0x0001289f) list_single_number_heading_pane_t3_cp2

0x3bf1,	// (0x00012861) list_single_heading_pane_g1_cp2_ParamLimits

0x3bf1,	// (0x00012861) list_single_heading_pane_g1_cp2

0x3bfd,	// (0x0001286d) list_single_heading_pane_g2_cp2

0x3c05,	// (0x00012875) list_single_heading_pane_t1_cp2_ParamLimits

0x3c05,	// (0x00012875) list_single_heading_pane_t1_cp2

0x5bc0,	// (0x00014830) list_single_heading_pane_t2_cp2_ParamLimits

0x5bc0,	// (0x00014830) list_single_heading_pane_t2_cp2

0x4b80,	// (0x000137f0) list_double_graphic_pane_g1_cp2_ParamLimits

0x4b80,	// (0x000137f0) list_double_graphic_pane_g1_cp2

0x5b14,	// (0x00014784) list_double_graphic_pane_g2_cp2_ParamLimits

0x5b14,	// (0x00014784) list_double_graphic_pane_g2_cp2

0x5b23,	// (0x00014793) list_double_graphic_pane_g3_cp2

0x5b2b,	// (0x0001479b) list_double_graphic_pane_t1_cp2_ParamLimits

0x5b2b,	// (0x0001479b) list_double_graphic_pane_t1_cp2

0x5b41,	// (0x000147b1) list_double_graphic_pane_t2_cp2_ParamLimits

0x5b41,	// (0x000147b1) list_double_graphic_pane_t2_cp2

0x3ca4,	// (0x00012914) list_double_number_pane_g1_cp2_ParamLimits

0x3ca4,	// (0x00012914) list_double_number_pane_g1_cp2

0x3cb0,	// (0x00012920) list_double_number_pane_g2_cp2

0x5ad8,	// (0x00014748) list_double_number_pane_t1_cp2_ParamLimits

0x5ad8,	// (0x00014748) list_double_number_pane_t1_cp2

0x5aec,	// (0x0001475c) list_double_number_pane_t2_cp2_ParamLimits

0x5aec,	// (0x0001475c) list_double_number_pane_t2_cp2

0x5b02,	// (0x00014772) list_double_number_pane_t3_cp2_ParamLimits

0x5b02,	// (0x00014772) list_double_number_pane_t3_cp2

0x59c1,	// (0x00014631) list_single_graphic_pane_g1_cp2_ParamLimits

0x59c1,	// (0x00014631) list_single_graphic_pane_g1_cp2

0x3d08,	// (0x00012978) list_single_graphic_pane_g2_cp2_ParamLimits

0x3d08,	// (0x00012978) list_single_graphic_pane_g2_cp2

0x3d14,	// (0x00012984) list_single_graphic_pane_g3_cp2

0x5997,	// (0x00014607) list_single_graphic_pane_t1_cp2_ParamLimits

0x5997,	// (0x00014607) list_single_graphic_pane_t1_cp2

0x3d08,	// (0x00012978) list_single_number_pane_g1_cp2_ParamLimits

0x3d08,	// (0x00012978) list_single_number_pane_g1_cp2

0x3d14,	// (0x00012984) list_single_number_pane_g2_cp2

0x5997,	// (0x00014607) list_single_number_pane_t1_cp2_ParamLimits

0x5997,	// (0x00014607) list_single_number_pane_t1_cp2

0x59ad,	// (0x0001461d) list_single_number_pane_t2_cp2_ParamLimits

0x59ad,	// (0x0001461d) list_single_number_pane_t2_cp2

0x3b11,	// (0x00012781) list_double2_pane_g1_cp2_ParamLimits

0x3b11,	// (0x00012781) list_double2_pane_g1_cp2

0x3b22,	// (0x00012792) list_double2_pane_g2_cp2

0x3c7c,	// (0x000128ec) list_double2_pane_t1_cp2_ParamLimits

0x3c7c,	// (0x000128ec) list_double2_pane_t1_cp2

0x3c92,	// (0x00012902) list_double2_pane_t2_cp2_ParamLimits

0x3c92,	// (0x00012902) list_double2_pane_t2_cp2

0x3ca4,	// (0x00012914) list_double_pane_g1_cp2_ParamLimits

0x3ca4,	// (0x00012914) list_double_pane_g1_cp2

0x3cb0,	// (0x00012920) list_double_pane_g2_cp2

0x3cb8,	// (0x00012928) list_double_pane_t1_cp2_ParamLimits

0x3cb8,	// (0x00012928) list_double_pane_t1_cp2

0x3cce,	// (0x0001293e) list_double_pane_t2_cp2_ParamLimits

0x3cce,	// (0x0001293e) list_double_pane_t2_cp2

0x3cf8,	// (0x00012968) list_single_pane_cp2_g3

0x3d08,	// (0x00012978) list_single_pane_g1_cp2_ParamLimits

0x3d08,	// (0x00012978) list_single_pane_g1_cp2

0x3d14,	// (0x00012984) list_single_pane_g2_cp2

0x3d1c,	// (0x0001298c) list_single_pane_t1_cp2_ParamLimits

0x3d1c,	// (0x0001298c) list_single_pane_t1_cp2

0x3d34,	// (0x000129a4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3d34,	// (0x000129a4) list_single_large_graphic_pane_g1_cp2

0x3d42,	// (0x000129b2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3d42,	// (0x000129b2) list_single_large_graphic_pane_g2_cp2

0x3d4e,	// (0x000129be) list_single_large_graphic_pane_g3_cp2

0x3d56,	// (0x000129c6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3d56,	// (0x000129c6) list_single_large_graphic_pane_g4_cp1

0x3d70,	// (0x000129e0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3d70,	// (0x000129e0) list_single_large_graphic_pane_t1_cp2

0x5961,	// (0x000145d1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5961,	// (0x000145d1) list_single_graphic_heading_pane_g1_cp2

0x592e,	// (0x0001459e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x592e,	// (0x0001459e) list_single_graphic_heading_pane_g4_cp2

0x3d14,	// (0x00012984) list_single_graphic_heading_pane_g5_cp2

0x596d,	// (0x000145dd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x596d,	// (0x000145dd) list_single_graphic_heading_pane_t1_cp2

0x5983,	// (0x000145f3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5983,	// (0x000145f3) list_single_graphic_heading_pane_t2_cp2

0x5922,	// (0x00014592) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5922,	// (0x00014592) list_single_2graphic_pane_g1_cp2

0x592e,	// (0x0001459e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x592e,	// (0x0001459e) list_single_2graphic_pane_g2_cp2

0x3d14,	// (0x00012984) list_single_2graphic_pane_g3_cp2

0x593f,	// (0x000145af) list_single_2graphic_pane_g4_cp2_ParamLimits

0x593f,	// (0x000145af) list_single_2graphic_pane_g4_cp2

0x594b,	// (0x000145bb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x594b,	// (0x000145bb) list_single_2graphic_pane_t1_cp2

0x2096,	// (0x00010d06) list_highlight_pane_g10_cp1

0x550a,	// (0x0001417a) list_highlight_pane_g1_cp1

0x5512,	// (0x00014182) list_highlight_pane_g2_cp1

0x551a,	// (0x0001418a) list_highlight_pane_g3_cp1

0x5522,	// (0x00014192) list_highlight_pane_g4_cp1

0x552a,	// (0x0001419a) list_highlight_pane_g5_cp1

0x5532,	// (0x000141a2) list_highlight_pane_g6_cp1

0x553a,	// (0x000141aa) list_highlight_pane_g7_cp1

0x5542,	// (0x000141b2) list_highlight_pane_g8_cp1

0x554a,	// (0x000141ba) list_highlight_pane_g9_cp1

0x5422,	// (0x00014092) form_field_slider_pane_t3

0x5430,	// (0x000140a0) form_field_slider_pane_t4

0x543e,	// (0x000140ae) slider_form_pane_ParamLimits

0x543e,	// (0x000140ae) slider_form_pane

0x20a0,	// (0x00010d10) control_abbreviations

0x20a0,	// (0x00010d10) control_conventions

0x20a0,	// (0x00010d10) control_definitions

0x20a0,	// (0x00010d10) format_table_attribute

0x5c0c,	// (0x0001487c) bg_popup_preview_window_pane_g9

0x20a0,	// (0x00010d10) format_table_data2

0x20a0,	// (0x00010d10) format_table_data3

0x20a0,	// (0x00010d10) format_table_data_example

0x0008,

0x20a0,	// (0x00010d10) intro_purpose

0xf8ef,	// (0x0001e55f) bg_popup_preview_window_pane_g

0x20a0,	// (0x00010d10) texts_category

0x20a0,	// (0x00010d10) texts_graphics

0x3d86,	// (0x000129f6) text_digital

0x3d95,	// (0x00012a05) text_primary

0x3da4,	// (0x00012a14) text_primary_small

0x3db3,	// (0x00012a23) text_secondary

0x3dc2,	// (0x00012a32) text_title

0x6461,	// (0x000150d1) bg_passive_tab_pane_g1_cp3_srt

0x3a19,	// (0x00012689) bg_passive_tab_pane_g2_cp3_srt

0x6458,	// (0x000150c8) bg_passive_tab_pane_g3_cp3_srt

0x2180,	// (0x00010df0) bg_active_tab_pane_cp3_srt_ParamLimits

0x2180,	// (0x00010df0) bg_active_tab_pane_cp3_srt

0x646a,	// (0x000150da) tabs_4_active_pane_srt_g1

0x6472,	// (0x000150e2) tabs_4_active_pane_srt_t1_ParamLimits

0x6472,	// (0x000150e2) tabs_4_active_pane_srt_t1

0x6461,	// (0x000150d1) bg_active_tab_pane_g1_cp3_copy1

0x3a19,	// (0x00012689) bg_active_tab_pane_g2_cp3_copy1

0x6458,	// (0x000150c8) bg_active_tab_pane_g3_cp3_copy1

0x2180,	// (0x00010df0) tabs_2_long_active_pane_srt_ParamLimits

0x2180,	// (0x00010df0) tabs_2_long_active_pane_srt

0x2180,	// (0x00010df0) tabs_2_long_passive_pane_srt_ParamLimits

0x2180,	// (0x00010df0) tabs_2_long_passive_pane_srt

0x32c3,	// (0x00011f33) bg_passive_tab_pane_cp4_srt_ParamLimits

0x32c3,	// (0x00011f33) bg_passive_tab_pane_cp4_srt

0x6082,	// (0x00014cf2) bg_passive_tab_pane_g1_cp4_srt

0x3a19,	// (0x00012689) bg_passive_tab_pane_g2_cp4_srt

0x6079,	// (0x00014ce9) bg_passive_tab_pane_g3_cp4_srt

0x32a2,	// (0x00011f12) bg_active_tab_pane_cp4_srt_ParamLimits

0x32a2,	// (0x00011f12) bg_active_tab_pane_cp4_srt

0x608b,	// (0x00014cfb) tabs_2_long_active_pane_srt_t1_ParamLimits

0x608b,	// (0x00014cfb) tabs_2_long_active_pane_srt_t1

0x6082,	// (0x00014cf2) bg_active_tab_pane_g1_cp4_srt

0x3a19,	// (0x00012689) bg_active_tab_pane_g2_cp4_srt

0x6079,	// (0x00014ce9) bg_active_tab_pane_g3_cp4_srt

0x2415,	// (0x00011085) tabs_3_long_active_pane_srt_ParamLimits

0x2415,	// (0x00011085) tabs_3_long_active_pane_srt

0x2415,	// (0x00011085) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2415,	// (0x00011085) tabs_3_long_passive_pane_cp_srt

0x2415,	// (0x00011085) tabs_3_long_passive_pane_srt_ParamLimits

0x2415,	// (0x00011085) tabs_3_long_passive_pane_srt

0x32c3,	// (0x00011f33) bg_passive_tab_pane_cp5_srt_ParamLimits

0x32c3,	// (0x00011f33) bg_passive_tab_pane_cp5_srt

0x3aac,	// (0x0001271c) bg_passive_tab_pane_g1_cp5_srt

0x3a19,	// (0x00012689) bg_passive_tab_pane_g2_cp5_srt

0x3aa3,	// (0x00012713) bg_passive_tab_pane_g3_cp5_srt

0x32a2,	// (0x00011f12) bg_active_tab_pane_cp5_srt_ParamLimits

0x32a2,	// (0x00011f12) bg_active_tab_pane_cp5_srt

0x6067,	// (0x00014cd7) tabs_3_long_active_pane_srt_t1_ParamLimits

0x6067,	// (0x00014cd7) tabs_3_long_active_pane_srt_t1

0x3aac,	// (0x0001271c) bg_active_tab_pane_g1_cp5_srt

0x3a19,	// (0x00012689) bg_active_tab_pane_g2_cp5_srt

0x3aa3,	// (0x00012713) bg_active_tab_pane_g3_cp5_srt

0x6059,	// (0x00014cc9) navi_text_pane_srt_t1

0x6051,	// (0x00014cc1) navi_icon_pane_srt_g1

0x3f85,	// (0x00012bf5) midp_editing_number_pane_srt

0x3dd1,	// (0x00012a41) midp_ticker_pane_srt

0x3f8d,	// (0x00012bfd) midp_ticker_pane_srt_g1

0x3f95,	// (0x00012c05) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001e3f5) midp_ticker_pane_srt_g

0x3f9d,	// (0x00012c0d) midp_ticker_pane_srt_t1

0x6042,	// (0x00014cb2) midp_editing_number_pane_t1_copy1

0x32c3,	// (0x00011f33) listscroll_midp_pane

0x32c3,	// (0x00011f33) midp_form_pane

0x3e3d,	// (0x00012aad) midp_info_popup_window_ParamLimits

0x3e3d,	// (0x00012aad) midp_info_popup_window

0x318e,	// (0x00011dfe) bg_popup_sub_pane_cp50_ParamLimits

0x318e,	// (0x00011dfe) bg_popup_sub_pane_cp50

0x513f,	// (0x00013daf) listscroll_midp_info_pane_ParamLimits

0x513f,	// (0x00013daf) listscroll_midp_info_pane

0x5127,	// (0x00013d97) listscroll_form_midp_pane_ParamLimits

0x5127,	// (0x00013d97) listscroll_form_midp_pane

0x5133,	// (0x00013da3) scroll_bar_cp050

0x5107,	// (0x00013d77) list_midp_pane

0x7039,	// (0x00015ca9) signal_pane_g2_cp

0x5041,	// (0x00013cb1) listscroll_midp_info_pane_t1_ParamLimits

0x5041,	// (0x00013cb1) listscroll_midp_info_pane_t1

0x5059,	// (0x00013cc9) listscroll_midp_info_pane_t2_ParamLimits

0x5059,	// (0x00013cc9) listscroll_midp_info_pane_t2

0x5097,	// (0x00013d07) listscroll_midp_info_pane_t3_ParamLimits

0x5097,	// (0x00013d07) listscroll_midp_info_pane_t3

0x50d1,	// (0x00013d41) listscroll_midp_info_pane_t4_ParamLimits

0x50d1,	// (0x00013d41) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0001e49a) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0001e49a) listscroll_midp_info_pane_t

0x3250,	// (0x00011ec0) scroll_pane_cp21

0x4fe5,	// (0x00013c55) form_midp_field_choice_group_pane

0x4fee,	// (0x00013c5e) form_midp_field_text_pane

0x5027,	// (0x00013c97) form_midp_field_time_pane

0x502f,	// (0x00013c9f) form_midp_gauge_slider_pane

0x5038,	// (0x00013ca8) form_midp_gauge_wait_pane

0x20a0,	// (0x00010d10) form_midp_image_pane

0xcd12,	// (0x0001b982) list_single_midp_pane_ParamLimits

0xcd12,	// (0x0001b982) list_single_midp_pane

0x4f59,	// (0x00013bc9) form_midp_field_text_pane_t1

0x4d24,	// (0x00013994) input_focus_pane_cp050

0x4f98,	// (0x00013c08) list_midp_form_text_pane

0x4f28,	// (0x00013b98) form_midp_field_choice_group_pane_t1

0x4f36,	// (0x00013ba6) input_focus_pane_cp051

0x4f4a,	// (0x00013bba) list_midp_choice_pane

0x20a0,	// (0x00010d10) status_idle_pane

0x4f0c,	// (0x00013b7c) form_midp_field_time_pane_t1

0x2096,	// (0x00010d06) wait_anim_pane_g2_copy1

0x4f1a,	// (0x00013b8a) form_midp_field_time_pane_t2

0x0001,

0x3eed,	// (0x00012b5d) aid_navinavi_width_2_pane

0xf825,	// (0x0001e495) form_midp_field_time_pane_t

0x20a0,	// (0x00010d10) input_focus_pane_cp052

0x20a0,	// (0x00010d10) bg_input_focus_pane_cp040

0x4ecc,	// (0x00013b3c) form_midp_gauge_slider_pane_t1

0x4eda,	// (0x00013b4a) form_midp_gauge_slider_pane_t2

0x4ee8,	// (0x00013b58) form_midp_gauge_slider_pane_t3

0x4ef6,	// (0x00013b66) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0001e48c) form_midp_gauge_slider_pane_t

0x4f04,	// (0x00013b74) form_midp_slider_pane

0x2180,	// (0x00010df0) bg_input_focus_pane_cp041_ParamLimits

0x2180,	// (0x00010df0) bg_input_focus_pane_cp041

0x4e99,	// (0x00013b09) form_midp_gauge_wait_pane_t1_ParamLimits

0x4e99,	// (0x00013b09) form_midp_gauge_wait_pane_t1

0x4eab,	// (0x00013b1b) form_midp_gauge_wait_pane_t2_ParamLimits

0x4eab,	// (0x00013b1b) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0001e487) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0001e487) form_midp_gauge_wait_pane_t

0x4ebd,	// (0x00013b2d) form_midp_wait_pane_ParamLimits

0x4ebd,	// (0x00013b2d) form_midp_wait_pane

0x4e63,	// (0x00013ad3) form_midp_image_pane_g1

0x4e6c,	// (0x00013adc) form_midp_image_pane_t1

0x4e7b,	// (0x00013aeb) form_midp_image_pane_t2

0x4e8a,	// (0x00013afa) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0001e480) form_midp_image_pane_t

0x4e4b,	// (0x00013abb) list_single_midp_pane_g1

0xcd03,	// (0x0001b973) list_single_midp_pane_t1

0x4e1b,	// (0x00013a8b) list_midp_form_item_pane_ParamLimits

0x4e1b,	// (0x00013a8b) list_midp_form_item_pane

0x3e95,	// (0x00012b05) list_midp_form_item_pane_t1

0x3ea4,	// (0x00012b14) midp_ticker_pane_g1

0x3eb0,	// (0x00012b20) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001e3db) midp_ticker_pane_g

0x3ebc,	// (0x00012b2c) midp_ticker_pane_t1

0x62b8,	// (0x00014f28) midp_editing_number_pane_t1

0x6296,	// (0x00014f06) midp_editing_number_pane

0x62a5,	// (0x00014f15) midp_ticker_pane

0x600a,	// (0x00014c7a) ai_message_heading_pane

0x20a0,	// (0x00010d10) bg_popup_window_pane_cp14

0x6012,	// (0x00014c82) listscroll_ai_message_pane

0x5f94,	// (0x00014c04) ai_message_heading_pane_g1_ParamLimits

0x5f94,	// (0x00014c04) ai_message_heading_pane_g1

0x5fa0,	// (0x00014c10) ai_message_heading_pane_g2_ParamLimits

0x5fa0,	// (0x00014c10) ai_message_heading_pane_g2

0x5fac,	// (0x00014c1c) ai_message_heading_pane_g3_ParamLimits

0x5fac,	// (0x00014c1c) ai_message_heading_pane_g3

0x5fb8,	// (0x00014c28) ai_message_heading_pane_g4_ParamLimits

0x5fb8,	// (0x00014c28) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0001e5c1) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0001e5c1) ai_message_heading_pane_g

0x5fc4,	// (0x00014c34) ai_message_heading_pane_t1_ParamLimits

0x5fc4,	// (0x00014c34) ai_message_heading_pane_t1

0x5fde,	// (0x00014c4e) ai_message_heading_pane_t2_ParamLimits

0x5fde,	// (0x00014c4e) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0001e5ca) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0001e5ca) ai_message_heading_pane_t

0x5ff0,	// (0x00014c60) bg_popup_heading_pane_cp1_ParamLimits

0x5ff0,	// (0x00014c60) bg_popup_heading_pane_cp1

0x5f82,	// (0x00014bf2) list_ai_message_pane_ParamLimits

0x5f82,	// (0x00014bf2) list_ai_message_pane

0x3250,	// (0x00011ec0) scroll_pane_cp10

0x5f1e,	// (0x00014b8e) list_ai_message_pane_g1

0x5f26,	// (0x00014b96) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0001e59e) list_ai_message_pane_g

0x5f2e,	// (0x00014b9e) list_ai_message_pane_t1_ParamLimits

0x5f2e,	// (0x00014b9e) list_ai_message_pane_t1

0x5f43,	// (0x00014bb3) list_ai_message_pane_t2_ParamLimits

0x5f43,	// (0x00014bb3) list_ai_message_pane_t2

0x5f58,	// (0x00014bc8) list_ai_message_pane_t3_ParamLimits

0x5f58,	// (0x00014bc8) list_ai_message_pane_t3

0x5f6d,	// (0x00014bdd) list_ai_message_pane_t4_ParamLimits

0x5f6d,	// (0x00014bdd) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0001e5a3) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0001e5a3) list_ai_message_pane_t

0x5f08,	// (0x00014b78) cell_ai_soft_ind_pane_ParamLimits

0x5f08,	// (0x00014b78) cell_ai_soft_ind_pane

0x3ece,	// (0x00012b3e) cell_ai_soft_ind_pane_g1_ParamLimits

0x3ece,	// (0x00012b3e) cell_ai_soft_ind_pane_g1

0x20a0,	// (0x00010d10) grid_highlight_cp1

0x3edb,	// (0x00012b4b) text_secondary_cp56_ParamLimits

0x3edb,	// (0x00012b4b) text_secondary_cp56

0x5edd,	// (0x00014b4d) example_general_pane_ParamLimits

0x5edd,	// (0x00014b4d) example_general_pane

0x5ee9,	// (0x00014b59) example_parent_pane_g1_ParamLimits

0x5ee9,	// (0x00014b59) example_parent_pane_g1

0x5ef5,	// (0x00014b65) example_parent_pane_t1_ParamLimits

0x5ef5,	// (0x00014b65) example_parent_pane_t1

0x44d8,	// (0x00013148) popup_preview_text_window_ParamLimits

0x44d8,	// (0x00013148) popup_preview_text_window

0x3d00,	// (0x00012970) list_single_pane_cp2_g4

0x24bf,	// (0x0001112f) bg_popup_preview_window_pane_ParamLimits

0x24bf,	// (0x0001112f) bg_popup_preview_window_pane

0x5c14,	// (0x00014884) popup_preview_text_window_t1_ParamLimits

0x5c14,	// (0x00014884) popup_preview_text_window_t1

0x5c32,	// (0x000148a2) popup_preview_text_window_t2_ParamLimits

0x5c32,	// (0x000148a2) popup_preview_text_window_t2

0x5c7b,	// (0x000148eb) popup_preview_text_window_t3_ParamLimits

0x5c7b,	// (0x000148eb) popup_preview_text_window_t3

0x5cc0,	// (0x00014930) popup_preview_text_window_t4_ParamLimits

0x5cc0,	// (0x00014930) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0001e572) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0001e572) popup_preview_text_window_t

0x5d3e,	// (0x000149ae) scroll_pane_cp11

0x4c0a,	// (0x0001387a) bg_popup_preview_window_pane_g1

0x5bd4,	// (0x00014844) bg_popup_preview_window_pane_g2

0x5bdc,	// (0x0001484c) bg_popup_preview_window_pane_g3

0x5be4,	// (0x00014854) bg_popup_preview_window_pane_g4

0x5bec,	// (0x0001485c) bg_popup_preview_window_pane_g5

0x5bf4,	// (0x00014864) bg_popup_preview_window_pane_g6

0x5bfc,	// (0x0001486c) bg_popup_preview_window_pane_g7

0x5c04,	// (0x00014874) bg_popup_preview_window_pane_g8

0xd478,	// (0x0001c0e8) aid_popup_width_pane

0x44b6,	// (0x00013126) popup_midp_note_alarm_window_ParamLimits

0x44b6,	// (0x00013126) popup_midp_note_alarm_window

0x2f29,	// (0x00011b99) data_form_pane_ParamLimits

0xca40,	// (0x0001b6b0) form_field_data_pane_g1

0xca4a,	// (0x0001b6ba) form_field_data_pane_t1_ParamLimits

0x2f59,	// (0x00011bc9) input_focus_pane_ParamLimits

0x2f67,	// (0x00011bd7) data_form_wide_pane_ParamLimits

0xca64,	// (0x0001b6d4) form_field_data_wide_pane_g1

0xca70,	// (0x0001b6e0) form_field_data_wide_pane_t1_ParamLimits

0x275e,	// (0x000113ce) input_focus_pane_cp6_ParamLimits

0x31fb,	// (0x00011e6b) input_popup_find_pane_g1_ParamLimits

0x31fb,	// (0x00011e6b) input_popup_find_pane_g1

0xd9ca,	// (0x0001c63a) aid_navi_side_left_pane

0xd9df,	// (0x0001c64f) aid_navi_side_right_pane

0x5605,	// (0x00014275) bg_popup_window_pane_cp30_ParamLimits

0x5605,	// (0x00014275) bg_popup_window_pane_cp30

0x567f,	// (0x000142ef) popup_midp_note_alarm_window_g1_ParamLimits

0x567f,	// (0x000142ef) popup_midp_note_alarm_window_g1

0x56af,	// (0x0001431f) popup_midp_note_alarm_window_t1_ParamLimits

0x56af,	// (0x0001431f) popup_midp_note_alarm_window_t1

0x5750,	// (0x000143c0) popup_midp_note_alarm_window_t2_ParamLimits

0x5750,	// (0x000143c0) popup_midp_note_alarm_window_t2

0x57fe,	// (0x0001446e) popup_midp_note_alarm_window_t3_ParamLimits

0x57fe,	// (0x0001446e) popup_midp_note_alarm_window_t3

0x5826,	// (0x00014496) popup_midp_note_alarm_window_t4_ParamLimits

0x5826,	// (0x00014496) popup_midp_note_alarm_window_t4

0x5846,	// (0x000144b6) popup_midp_note_alarm_window_t5_ParamLimits

0x5846,	// (0x000144b6) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0001e50f) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0001e50f) popup_midp_note_alarm_window_t

0x58f2,	// (0x00014562) wait_bar_pane_cp1_ParamLimits

0x58f2,	// (0x00014562) wait_bar_pane_cp1

0x20a0,	// (0x00010d10) wait_anim_pane_copy1

0x20a0,	// (0x00010d10) wait_border_pane_copy1

0x52e3,	// (0x00013f53) wait_border_pane_g1_copy1

0xca8a,	// (0x0001b6fa) form_field_popup_pane_g1

0xca92,	// (0x0001b702) form_field_popup_pane_t1_ParamLimits

0x2f59,	// (0x00011bc9) input_focus_pane_cp7_ParamLimits

0x2fdb,	// (0x00011c4b) list_form_pane_ParamLimits

0xcaac,	// (0x0001b71c) form_field_popup_wide_pane_g1

0xcab4,	// (0x0001b724) form_field_popup_wide_pane_t1_ParamLimits

0x2f59,	// (0x00011bc9) input_focus_pane_cp8_ParamLimits

0x3004,	// (0x00011c74) list_form_wide_pane_ParamLimits

0x64e2,	// (0x00015152) aid_size_cell_graphic_pane

0xcb39,	// (0x0001b7a9) data_form_pane_t1_ParamLimits

0xcd61,	// (0x0001b9d1) data_form_wide_pane_t1_ParamLimits

0x47b1,	// (0x00013421) bg_status_flat_pane

0x20e0,	// (0x00010d50) title_pane_t1_ParamLimits

0x2148,	// (0x00010db8) title_pane_t2_ParamLimits

0x216e,	// (0x00010dde) title_pane_t3_ParamLimits

0xf56f,	// (0x0001e1df) title_pane_t_ParamLimits

0x36cc,	// (0x0001233c) level_1_signal_ParamLimits

0x36d9,	// (0x00012349) level_2_signal_ParamLimits

0x36e6,	// (0x00012356) level_3_signal_ParamLimits

0x36f3,	// (0x00012363) level_4_signal_ParamLimits

0x3700,	// (0x00012370) level_5_signal_ParamLimits

0x370d,	// (0x0001237d) level_6_signal_ParamLimits

0x371a,	// (0x0001238a) level_7_signal_ParamLimits

0x36cc,	// (0x0001233c) level_1_battery_ParamLimits

0x36d9,	// (0x00012349) level_2_battery_ParamLimits

0x36e6,	// (0x00012356) level_3_battery_ParamLimits

0x36f3,	// (0x00012363) level_4_battery_ParamLimits

0x3700,	// (0x00012370) level_5_battery_ParamLimits

0x370d,	// (0x0001237d) level_6_battery_ParamLimits

0x371a,	// (0x0001238a) level_7_battery_ParamLimits

0x550a,	// (0x0001417a) bg_status_flat_pane_g1

0x5512,	// (0x00014182) bg_status_flat_pane_g2

0x551a,	// (0x0001418a) bg_status_flat_pane_g3

0x5522,	// (0x00014192) bg_status_flat_pane_g4

0x552a,	// (0x0001419a) bg_status_flat_pane_g5

0x5532,	// (0x000141a2) bg_status_flat_pane_g6

0x553a,	// (0x000141aa) bg_status_flat_pane_g7

0x2196,	// (0x00010e06) tabs_3_active_pane_t1_ParamLimits

0x2196,	// (0x00010e06) tabs_3_passive_pane_t1_ParamLimits

0x21b0,	// (0x00010e20) tabs_4_active_pane_t1_ParamLimits

0x21b0,	// (0x00010e20) tabs_4_1_passive_pane_t1_ParamLimits

0x3290,	// (0x00011f00) tabs_2_active_pane_t1_ParamLimits

0x3290,	// (0x00011f00) tabs_2_passive_pane_t1_ParamLimits

0x32a2,	// (0x00011f12) bg_active_tab_pane_cp4_ParamLimits

0x32b0,	// (0x00011f20) tabs_2_long_active_pane_t1_ParamLimits

0x32c3,	// (0x00011f33) bg_passive_tab_pane_cp4_ParamLimits

0xdf2e,	// (0x0001cb9e) list_single_midp_graphic_pane_t1_ParamLimits

0x32a2,	// (0x00011f12) bg_active_tab_pane_cp5_ParamLimits

0x32cf,	// (0x00011f3f) tabs_3_long_active_pane_t1_ParamLimits

0x32c3,	// (0x00011f33) bg_passive_tab_pane_cp5_ParamLimits

0xdf2e,	// (0x0001cb9e) list_single_midp_graphic_pane_t1

0x47b1,	// (0x00013421) bg_status_flat_pane_ParamLimits

0x4874,	// (0x000134e4) indicator_pane_cp2_ParamLimits

0x4874,	// (0x000134e4) indicator_pane_cp2

0x4999,	// (0x00013609) navi_pane_srt_ParamLimits

0x4999,	// (0x00013609) navi_pane_srt

0x49bd,	// (0x0001362d) popup_clock_digital_analogue_window_cp1

0x2277,	// (0x00010ee7) indicator_pane_t1

0x3dd1,	// (0x00012a41) copy_highlight_pane

0x3dd1,	// (0x00012a41) cursor_graphics_pane

0x3dd1,	// (0x00012a41) graphic_within_text_pane

0x3dd1,	// (0x00012a41) link_highlight_pane

0x5d01,	// (0x00014971) popup_preview_text_window_t5_ParamLimits

0x5d01,	// (0x00014971) popup_preview_text_window_t5

0x3ef5,	// (0x00012b65) cursor_digital_pane

0x3ef5,	// (0x00012b65) cursor_primary_pane

0x3f06,	// (0x00012b76) cursor_primary_small_pane

0x3f0e,	// (0x00012b7e) cursor_secondary_pane

0x3f16,	// (0x00012b86) cursor_title_pane

0x3ef5,	// (0x00012b65) link_highlight_digital_pane

0x3efd,	// (0x00012b6d) link_highlight_primary_pane

0x3f06,	// (0x00012b76) link_highlight_primary_small_pane

0x3f0e,	// (0x00012b7e) link_highlight_secondary_pane

0x3f16,	// (0x00012b86) link_highlight_title_pane

0x3ef5,	// (0x00012b65) copy_highlight_digital_pane

0x3ef5,	// (0x00012b65) copy_highlight_primary_pane

0x3f06,	// (0x00012b76) copy_highlight_primary_small_pane

0x3f0e,	// (0x00012b7e) copy_highlight_secondary_pane

0x3f16,	// (0x00012b86) copy_highlight_title_pane

0x3f0e,	// (0x00012b7e) graphic_text_digital_pane

0x55a8,	// (0x00014218) graphic_text_primary_pane

0x55b1,	// (0x00014221) graphic_text_primary_small_pane

0x3f06,	// (0x00012b76) graphic_text_secondary_pane

0x3ef5,	// (0x00012b65) graphic_text_title_pane

0x3f1e,	// (0x00012b8e) cursor_primary_pane_g1

0x559a,	// (0x0001420a) cursor_text_primary_t1

0x5582,	// (0x000141f2) cursor_primary_small_pane_g1

0x558c,	// (0x000141fc) cursor_text_primary_small_t1

0x556a,	// (0x000141da) cursor_primary_small_pane_g1_copy1

0x5574,	// (0x000141e4) cursor_text_primary_small_t1_copy1

0x5552,	// (0x000141c2) cursor_text_title_t1

0x5560,	// (0x000141d0) cursor_title_pane_g1

0x3f1e,	// (0x00012b8e) cursor_digital_pane_g1

0x3f28,	// (0x00012b98) cursor_text_digital_t1

0x54f3,	// (0x00014163) link_highlight_primary_pane_g1

0x54fb,	// (0x0001416b) link_highlight_primary_pane_t1

0x3f36,	// (0x00012ba6) link_highlight_primary_small_pane_g1

0x3f3e,	// (0x00012bae) link_highlight_primary_small_pane_t1

0x3f36,	// (0x00012ba6) link_highlight_secondary_pane_g1

0x3f4d,	// (0x00012bbd) link_highlight_secondary_pane_t1

0x5467,	// (0x000140d7) link_highlight_title_pane_g1

0x546f,	// (0x000140df) link_highlight_title_pane_t1

0x5450,	// (0x000140c0) link_highlight_digital_pane_g1

0x5458,	// (0x000140c8) link_highlight_digital_pane_t1

0x5328,	// (0x00013f98) copy_highlight_primary_pane_g1

0x5330,	// (0x00013fa0) copy_highlight_primary_pane_t1

0x5302,	// (0x00013f72) copy_highlight_primary_small_pane_g1

0x5319,	// (0x00013f89) copy_highlight_primary_small_pane_t1

0x3f5c,	// (0x00012bcc) copy_highlight_secondary_pane_g1

0x3f64,	// (0x00012bd4) copy_highlight_secondary_pane_t1

0x5302,	// (0x00013f72) copy_highlight_title_pane_g1

0x530a,	// (0x00013f7a) copy_highlight_title_pane_t1

0x5328,	// (0x00013f98) copy_highlight_digital_pane_g1

0x66b0,	// (0x00015320) copy_highlight_digital_pane_t1

0x6604,	// (0x00015274) graphic_text_primary_pane_g1

0x6694,	// (0x00015304) graphic_text_primary_pane_t1

0x66a2,	// (0x00015312) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0001e63e) graphic_text_primary_pane_t

0x6670,	// (0x000152e0) graphic_text_primary_small_pane_g1

0x6678,	// (0x000152e8) graphic_text_primary_small_pane_t1

0x6686,	// (0x000152f6) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0001e639) graphic_text_primary_small_pane_t

0x664c,	// (0x000152bc) graphic_text_secondary_pane_g1

0x6654,	// (0x000152c4) graphic_text_secondary_pane_t1

0x6662,	// (0x000152d2) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0001e634) graphic_text_secondary_pane_t

0x6628,	// (0x00015298) graphic_text_title_pane_g1

0x6630,	// (0x000152a0) graphic_text_title_pane_t1

0x663e,	// (0x000152ae) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0001e62f) graphic_text_title_pane_t

0x6604,	// (0x00015274) graphic_text_digital_pane_g1

0x660c,	// (0x0001527c) graphic_text_digital_pane_t1

0x661a,	// (0x0001528a) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0001e62a) graphic_text_digital_pane_t

0x2180,	// (0x00010df0) navi_icon_pane_srt_ParamLimits

0x2180,	// (0x00010df0) navi_icon_pane_srt

0x20a0,	// (0x00010d10) navi_midp_pane_srt

0x20a0,	// (0x00010d10) navi_navi_pane_srt

0x2180,	// (0x00010df0) navi_text_pane_srt_ParamLimits

0x2180,	// (0x00010df0) navi_text_pane_srt

0x65cf,	// (0x0001523f) navi_navi_icon_text_pane_srt

0x65e9,	// (0x00015259) navi_navi_pane_srt_g1_ParamLimits

0x65e9,	// (0x00015259) navi_navi_pane_srt_g1

0x65d7,	// (0x00015247) navi_navi_pane_srt_g2_ParamLimits

0x65d7,	// (0x00015247) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0001e625) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0001e625) navi_navi_pane_srt_g

0x65fb,	// (0x0001526b) navi_navi_tabs_pane_srt

0x65cf,	// (0x0001523f) navi_navi_text_pane_srt

0x65cf,	// (0x0001523f) navi_navi_volume_pane_srt

0x65c0,	// (0x00015230) navi_navi_text_pane_srt_t1

0xe2ae,	// (0x0001cf1e) navi_navi_volume_pane_srt_g1

0xe2b6,	// (0x0001cf26) volume_small_pane_srt_ParamLimits

0xe2b6,	// (0x0001cf26) volume_small_pane_srt

0xdcaa,	// (0x0001c91a) volume_small_pane_srt_g1_ParamLimits

0xdcaa,	// (0x0001c91a) volume_small_pane_srt_g1

0xdcba,	// (0x0001c92a) volume_small_pane_srt_g2_ParamLimits

0xdcba,	// (0x0001c92a) volume_small_pane_srt_g2

0xdccb,	// (0x0001c93b) volume_small_pane_srt_g3_ParamLimits

0xdccb,	// (0x0001c93b) volume_small_pane_srt_g3

0xdcdc,	// (0x0001c94c) volume_small_pane_srt_g4_ParamLimits

0xdcdc,	// (0x0001c94c) volume_small_pane_srt_g4

0xdced,	// (0x0001c95d) volume_small_pane_srt_g5_ParamLimits

0xdced,	// (0x0001c95d) volume_small_pane_srt_g5

0xdcfe,	// (0x0001c96e) volume_small_pane_srt_g6_ParamLimits

0xdcfe,	// (0x0001c96e) volume_small_pane_srt_g6

0xdd0f,	// (0x0001c97f) volume_small_pane_srt_g7_ParamLimits

0xdd0f,	// (0x0001c97f) volume_small_pane_srt_g7

0xdd20,	// (0x0001c990) volume_small_pane_srt_g8_ParamLimits

0xdd20,	// (0x0001c990) volume_small_pane_srt_g8

0xdd31,	// (0x0001c9a1) volume_small_pane_srt_g9_ParamLimits

0xdd31,	// (0x0001c9a1) volume_small_pane_srt_g9

0xdd42,	// (0x0001c9b2) volume_small_pane_srt_g10_ParamLimits

0xdd42,	// (0x0001c9b2) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001e3e0) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001e3e0) volume_small_pane_srt_g

0x2568,	// (0x000111d8) query_popup_data_pane_cp2

0x65a6,	// (0x00015216) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x65a6,	// (0x00015216) navi_navi_icon_text_pane_srt_t1

0x55a8,	// (0x00014218) navi_tabs_2_long_pane_srt

0x55a8,	// (0x00014218) navi_tabs_2_pane_srt

0x55a8,	// (0x00014218) navi_tabs_3_long_pane_srt

0x55a8,	// (0x00014218) navi_tabs_3_pane_srt

0x55a8,	// (0x00014218) navi_tabs_4_pane_srt

0xe28e,	// (0x0001cefe) tabs_2_active_pane_srt_ParamLimits

0xe28e,	// (0x0001cefe) tabs_2_active_pane_srt

0xe29e,	// (0x0001cf0e) tabs_2_passive_pane_srt_ParamLimits

0xe29e,	// (0x0001cf0e) tabs_2_passive_pane_srt

0x414b,	// (0x00012dbb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x414b,	// (0x00012dbb) bg_passive_tab_pane_cp1_srt

0x657b,	// (0x000151eb) bg_passive_tab_pane_g1_cp1_srt

0x3a19,	// (0x00012689) bg_passive_tab_pane_g2_cp1_srt

0x6572,	// (0x000151e2) bg_passive_tab_pane_g3_cp1_srt

0x2180,	// (0x00010df0) bg_active_tab_pane_cp1_srt_ParamLimits

0x2180,	// (0x00010df0) bg_active_tab_pane_cp1_srt

0x6584,	// (0x000151f4) tabs_2_active_pane_srt_g1

0x658c,	// (0x000151fc) tabs_2_active_pane_srt_t1_ParamLimits

0x658c,	// (0x000151fc) tabs_2_active_pane_srt_t1

0x657b,	// (0x000151eb) bg_active_tab_pane_g1_cp1_srt

0x3a19,	// (0x00012689) bg_active_tab_pane_g2_cp1_srt

0x6572,	// (0x000151e2) bg_active_tab_pane_g3_cp1_srt

0xe25b,	// (0x0001cecb) tabs_3_active_pane_srt_ParamLimits

0xe25b,	// (0x0001cecb) tabs_3_active_pane_srt

0xe26c,	// (0x0001cedc) tabs_3_passive_pane_cp_srt_ParamLimits

0xe26c,	// (0x0001cedc) tabs_3_passive_pane_cp_srt

0xe27d,	// (0x0001ceed) tabs_3_passive_pane_srt_ParamLimits

0xe27d,	// (0x0001ceed) tabs_3_passive_pane_srt

0x414b,	// (0x00012dbb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x414b,	// (0x00012dbb) bg_passive_tab_pane_cp2_srt

0x3f7c,	// (0x00012bec) bg_passive_tab_pane_g1_cp2_srt

0x3a19,	// (0x00012689) bg_passive_tab_pane_g2_cp2_srt

0x3f73,	// (0x00012be3) bg_passive_tab_pane_g3_cp2_srt

0x2180,	// (0x00010df0) bg_active_tab_pane_cp2_srt_ParamLimits

0x2180,	// (0x00010df0) bg_active_tab_pane_cp2_srt

0x6558,	// (0x000151c8) tabs_3_active_pane_srt_g1

0x6560,	// (0x000151d0) tabs_3_active_pane_srt_t1_ParamLimits

0x6560,	// (0x000151d0) tabs_3_active_pane_srt_t1

0x3f7c,	// (0x00012bec) bg_active_tab_pane_g1_cp2_srt

0x3a19,	// (0x00012689) bg_active_tab_pane_g2_cp2_srt

0x3f73,	// (0x00012be3) bg_active_tab_pane_g3_cp2_srt

0xe213,	// (0x0001ce83) tabs_4_active_pane_srt_ParamLimits

0xe213,	// (0x0001ce83) tabs_4_active_pane_srt

0xe225,	// (0x0001ce95) tabs_4_passive_pane_cp2_srt_ParamLimits

0xe225,	// (0x0001ce95) tabs_4_passive_pane_cp2_srt

0x40d1,	// (0x00012d41) aid_size_cell_toolbar

0x32c3,	// (0x00011f33) main_idle_act_pane_ParamLimits

0x42ea,	// (0x00012f5a) popup_large_graphic_colour_window_ParamLimits

0x4649,	// (0x000132b9) popup_toolbar_window_ParamLimits

0x4649,	// (0x000132b9) popup_toolbar_window

0x62e6,	// (0x00014f56) list_single_graphic_2heading_pane_ParamLimits

0x62e6,	// (0x00014f56) list_single_graphic_2heading_pane

0x347f,	// (0x000120ef) aid_size_cell_apps_grid_lsc_pane

0x3491,	// (0x00012101) aid_size_cell_apps_grid_prt_pane

0x414b,	// (0x00012dbb) bg_wml_button_pane_cp1_ParamLimits

0x414b,	// (0x00012dbb) bg_wml_button_pane_cp1

0x4f59,	// (0x00013bc9) form_midp_field_text_pane_t1_ParamLimits

0x4d24,	// (0x00013994) input_focus_pane_cp050_ParamLimits

0x4f98,	// (0x00013c08) list_midp_form_text_pane_ParamLimits

0x4f36,	// (0x00013ba6) input_focus_pane_cp051_ParamLimits

0x4f4a,	// (0x00013bba) list_midp_choice_pane_ParamLimits

0x4db5,	// (0x00013a25) list_single_2graphic_pane_cp3_ParamLimits

0x4db5,	// (0x00013a25) list_single_2graphic_pane_cp3

0x4de1,	// (0x00013a51) list_single_midp_graphic_pane_ParamLimits

0x4de1,	// (0x00013a51) list_single_midp_graphic_pane

0xc5c8,	// (0x0001b238) list_single_graphic_2heading_pane_g1_ParamLimits

0xc5c8,	// (0x0001b238) list_single_graphic_2heading_pane_g1

0xc54e,	// (0x0001b1be) list_single_graphic_2heading_pane_g4_ParamLimits

0xc54e,	// (0x0001b1be) list_single_graphic_2heading_pane_g4

0xc55a,	// (0x0001b1ca) list_single_graphic_2heading_pane_g5_ParamLimits

0xc55a,	// (0x0001b1ca) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001e433) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001e433) list_single_graphic_2heading_pane_g

0xcc7d,	// (0x0001b8ed) list_single_graphic_2heading_pane_t1_ParamLimits

0xcc7d,	// (0x0001b8ed) list_single_graphic_2heading_pane_t1

0xcc91,	// (0x0001b901) list_single_graphic_2heading_pane_t2_ParamLimits

0xcc91,	// (0x0001b901) list_single_graphic_2heading_pane_t2

0xccab,	// (0x0001b91b) list_single_graphic_2heading_pane_t3_ParamLimits

0xccab,	// (0x0001b91b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001e43a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001e43a) list_single_graphic_2heading_pane_t

0x4b1a,	// (0x0001378a) bg_popup_sub_pane_cp2

0x4b44,	// (0x000137b4) grid_toobar_pane

0xdeb3,	// (0x0001cb23) cell_toolbar_pane_ParamLimits

0xdeb3,	// (0x0001cb23) cell_toolbar_pane

0x4bae,	// (0x0001381e) cell_toolbar_pane_g1_ParamLimits

0x4bae,	// (0x0001381e) cell_toolbar_pane_g1

0x4bc2,	// (0x00013832) cell_toolbar_pane_g2_ParamLimits

0x4bc2,	// (0x00013832) cell_toolbar_pane_g2

0x0001,

0xf7d1,	// (0x0001e441) cell_toolbar_pane_g_ParamLimits

0xf7d1,	// (0x0001e441) cell_toolbar_pane_g

0x4be4,	// (0x00013854) grid_highlight_pane_cp2_ParamLimits

0x4be4,	// (0x00013854) grid_highlight_pane_cp2

0x4bfe,	// (0x0001386e) toolbar_button_pane

0x4c0a,	// (0x0001387a) toolbar_button_pane_g1

0x4c1a,	// (0x0001388a) toolbar_button_pane_g2

0x4c12,	// (0x00013882) toolbar_button_pane_g3

0x4c2a,	// (0x0001389a) toolbar_button_pane_g4

0x4c22,	// (0x00013892) toolbar_button_pane_g5

0x4c32,	// (0x000138a2) toolbar_button_pane_g6

0x4c3a,	// (0x000138aa) toolbar_button_pane_g7

0x4c4a,	// (0x000138ba) toolbar_button_pane_g8

0x4c42,	// (0x000138b2) toolbar_button_pane_g9

0x0009,

0xf7d6,	// (0x0001e446) toolbar_button_pane_g

0xdeeb,	// (0x0001cb5b) list_single_2graphic_pane_g1_cp3_ParamLimits

0xdeeb,	// (0x0001cb5b) list_single_2graphic_pane_g1_cp3

0xdef7,	// (0x0001cb67) list_single_2graphic_pane_g2_cp3_ParamLimits

0xdef7,	// (0x0001cb67) list_single_2graphic_pane_g2_cp3

0x3bfd,	// (0x0001286d) list_single_2graphic_pane_g3_cp3

0xdf08,	// (0x0001cb78) list_single_2graphic_pane_g4_cp3_ParamLimits

0xdf08,	// (0x0001cb78) list_single_2graphic_pane_g4_cp3

0xdf14,	// (0x0001cb84) list_single_2graphic_pane_t1_cp3_ParamLimits

0xdf14,	// (0x0001cb84) list_single_2graphic_pane_t1_cp3

0x3bf1,	// (0x00012861) list_single_midp_graphic_pane_g2_ParamLimits

0x3bf1,	// (0x00012861) list_single_midp_graphic_pane_g2

0x40e1,	// (0x00012d51) aid_zoom_text_primary

0xcc6d,	// (0x0001b8dd) aid_zoom_text_secondary

0x4030,	// (0x00012ca0) status_small_pane_g7_ParamLimits

0x4030,	// (0x00012ca0) status_small_pane_g7

0x4053,	// (0x00012cc3) status_small_pane_t1_ParamLimits

0x20b7,	// (0x00010d27) title_pane_g2

0x0003,

0xf566,	// (0x0001e1d6) title_pane_g

0x2609,	// (0x00011279) aid_size_cell_colour_1_pane_ParamLimits

0x2609,	// (0x00011279) aid_size_cell_colour_1_pane

0x261d,	// (0x0001128d) aid_size_cell_colour_2_pane_ParamLimits

0x261d,	// (0x0001128d) aid_size_cell_colour_2_pane

0x2631,	// (0x000112a1) aid_size_cell_colour_3_pane_ParamLimits

0x2631,	// (0x000112a1) aid_size_cell_colour_3_pane

0x2645,	// (0x000112b5) aid_size_cell_colour_4_pane_ParamLimits

0x2645,	// (0x000112b5) aid_size_cell_colour_4_pane

0xd906,	// (0x0001c576) title_pane_stacon_g1_ParamLimits

0xd906,	// (0x0001c576) title_pane_stacon_g1

0x5387,	// (0x00013ff7) popup_note_wait_window_g3_ParamLimits

0x5387,	// (0x00013ff7) popup_note_wait_window_g3

0x53fd,	// (0x0001406d) popup_note_wait_window_t5_ParamLimits

0x53fd,	// (0x0001406d) popup_note_wait_window_t5

0x20a0,	// (0x00010d10) main_feb_china_hwr_fs_writing_pane

0x41d5,	// (0x00012e45) popup_feb_china_hwr_fs_window_ParamLimits

0x41d5,	// (0x00012e45) popup_feb_china_hwr_fs_window

0xdf44,	// (0x0001cbb4) aid_size_cell_hwr_fs_ParamLimits

0xdf44,	// (0x0001cbb4) aid_size_cell_hwr_fs

0x4d24,	// (0x00013994) bg_popup_sub_pane_cp3_ParamLimits

0x4d24,	// (0x00013994) bg_popup_sub_pane_cp3

0xdf59,	// (0x0001cbc9) grid_hwr_fs_pane_ParamLimits

0xdf59,	// (0x0001cbc9) grid_hwr_fs_pane

0xdf71,	// (0x0001cbe1) linegrid_hwr_fs_pane_ParamLimits

0xdf71,	// (0x0001cbe1) linegrid_hwr_fs_pane

0xdf81,	// (0x0001cbf1) cell_hwr_fs_pane_ParamLimits

0xdf81,	// (0x0001cbf1) cell_hwr_fs_pane

0x4d30,	// (0x000139a0) linegrid_hwr_fs_pane_g1_ParamLimits

0x4d30,	// (0x000139a0) linegrid_hwr_fs_pane_g1

0x4d3c,	// (0x000139ac) linegrid_hwr_fs_pane_g2_ParamLimits

0x4d3c,	// (0x000139ac) linegrid_hwr_fs_pane_g2

0x4d4e,	// (0x000139be) linegrid_hwr_fs_pane_g3_ParamLimits

0x4d4e,	// (0x000139be) linegrid_hwr_fs_pane_g3

0xdfa3,	// (0x0001cc13) linegrid_hwr_fs_pane_g4_ParamLimits

0xdfa3,	// (0x0001cc13) linegrid_hwr_fs_pane_g4

0xdfbd,	// (0x0001cc2d) linegrid_hwr_fs_pane_g5_ParamLimits

0xdfbd,	// (0x0001cc2d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fc,	// (0x0001e46c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0001e46c) linegrid_hwr_fs_pane_g

0x4d5a,	// (0x000139ca) cell_hwr_fs_pane_g1_ParamLimits

0x4d5a,	// (0x000139ca) cell_hwr_fs_pane_g1

0x4a53,	// (0x000136c3) cell_hwr_fs_pane_g2_ParamLimits

0x4a53,	// (0x000136c3) cell_hwr_fs_pane_g2

0x4d70,	// (0x000139e0) cell_hwr_fs_pane_g3_ParamLimits

0x4d70,	// (0x000139e0) cell_hwr_fs_pane_g3

0x4d7d,	// (0x000139ed) cell_hwr_fs_pane_g4_ParamLimits

0x4d7d,	// (0x000139ed) cell_hwr_fs_pane_g4

0x0003,

0xf807,	// (0x0001e477) cell_hwr_fs_pane_g_ParamLimits

0xf807,	// (0x0001e477) cell_hwr_fs_pane_g

0xdfd3,	// (0x0001cc43) cell_hwr_fs_pane_t1

0x20a0,	// (0x00010d10) grid_highlight_pane_cp6

0x20a0,	// (0x00010d10) main_idle_act2_pane

0x3237,	// (0x00011ea7) aid_inside_area_popup_secondary

0x5a2e,	// (0x0001469e) aid_inside_area_window_primary_ParamLimits

0x5a2e,	// (0x0001469e) aid_inside_area_window_primary

0x66bf,	// (0x0001532f) ai2_news_ticker_pane

0x66c7,	// (0x00015337) aid_size_cell_ai1_link_ParamLimits

0x66c7,	// (0x00015337) aid_size_cell_ai1_link

0x66e1,	// (0x00015351) popup_ai2_data_window_ParamLimits

0x66e1,	// (0x00015351) popup_ai2_data_window

0x66f5,	// (0x00015365) popup_ai2_link_window_ParamLimits

0x66f5,	// (0x00015365) popup_ai2_link_window

0x4d24,	// (0x00013994) bg_popup_sub_pane_cp4_ParamLimits

0x4d24,	// (0x00013994) bg_popup_sub_pane_cp4

0x6709,	// (0x00015379) grid_ai2_link_pane_ParamLimits

0x6709,	// (0x00015379) grid_ai2_link_pane

0x6720,	// (0x00015390) popup_ai2_link_window_g1_ParamLimits

0x6720,	// (0x00015390) popup_ai2_link_window_g1

0x672c,	// (0x0001539c) popup_ai2_link_window_g2_ParamLimits

0x672c,	// (0x0001539c) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0001e643) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0001e643) popup_ai2_link_window_g

0x673b,	// (0x000153ab) ai2_mp_button_pane

0x6743,	// (0x000153b3) ai2_mp_volume_pane

0x4f36,	// (0x00013ba6) bg_popup_sub_pane_cp5_ParamLimits

0x4f36,	// (0x00013ba6) bg_popup_sub_pane_cp5

0x674b,	// (0x000153bb) heading_ai2_gene_pane_ParamLimits

0x674b,	// (0x000153bb) heading_ai2_gene_pane

0x6757,	// (0x000153c7) list_ai2_gene_pane_ParamLimits

0x6757,	// (0x000153c7) list_ai2_gene_pane

0x679f,	// (0x0001540f) cell_ai2_link_pane_ParamLimits

0x679f,	// (0x0001540f) cell_ai2_link_pane

0x67b5,	// (0x00015425) cell_ai2_link_pane_g1

0x20a0,	// (0x00010d10) grid_highlight_pane_cp7

0xe2cb,	// (0x0001cf3b) ai2_mp_volume_pane_g1

0x688e,	// (0x000154fe) ai2_mp_volume_pane_g2

0x67fb,	// (0x0001546b) list_ai2_gene_pane_t1

0x6886,	// (0x000154f6) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0001e65c) ai2_mp_volume_pane_g

0xe2d3,	// (0x0001cf43) volume_small_pane_cp3

0x6896,	// (0x00015506) aid_size_cell_ai2_button

0x689e,	// (0x0001550e) grid_ai2_button_pane

0x68a7,	// (0x00015517) cell_ai2_button_pane_ParamLimits

0x68a7,	// (0x00015517) cell_ai2_button_pane

0x2096,	// (0x00010d06) cell_ai2_button_pane_g1

0x20a0,	// (0x00010d10) grid_highlight_pane_cp8

0x6846,	// (0x000154b6) ai2_gene_pane_t1_ParamLimits

0x6846,	// (0x000154b6) ai2_gene_pane_t1

0x40c7,	// (0x00012d37) aid_height_parent_landscape

0x60d3,	// (0x00014d43) aid_height_set_list

0x60e4,	// (0x00014d54) aid_size_parent

0x64e2,	// (0x00015152) aid_size_cell_graphic_pane_ParamLimits

0x6767,	// (0x000153d7) popup_ai2_data_window_g1_ParamLimits

0x6767,	// (0x000153d7) popup_ai2_data_window_g1

0x6773,	// (0x000153e3) ai2_news_ticker_pane_g1

0x677b,	// (0x000153eb) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0001e648) ai2_news_ticker_pane_g

0x6783,	// (0x000153f3) ai2_news_ticker_pane_t1

0x6791,	// (0x00015401) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0001e64d) ai2_news_ticker_pane_t

0x67be,	// (0x0001542e) heading_ai2_gene_pane_g1

0x67c6,	// (0x00015436) heading_ai2_gene_pane_t1_ParamLimits

0x67c6,	// (0x00015436) heading_ai2_gene_pane_t1

0x67db,	// (0x0001544b) list_highlight_pane_cp6

0x67e3,	// (0x00015453) ai2_gene_pane_ParamLimits

0x67e3,	// (0x00015453) ai2_gene_pane

0x6809,	// (0x00015479) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0001e652) list_ai2_gene_pane_t

0x6817,	// (0x00015487) list_highlight_pane_cp8_ParamLimits

0x6817,	// (0x00015487) list_highlight_pane_cp8

0x6828,	// (0x00015498) ai2_gene_pane_g1_ParamLimits

0x6828,	// (0x00015498) ai2_gene_pane_g1

0x683a,	// (0x000154aa) ai2_gene_pane_g2_ParamLimits

0x683a,	// (0x000154aa) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0001e657) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0001e657) ai2_gene_pane_g

0x2983,	// (0x000115f3) scroll_pane_cp12

0xde56,	// (0x0001cac6) control_pane_t3_ParamLimits

0xde56,	// (0x0001cac6) control_pane_t3

0x4044,	// (0x00012cb4) status_small_pane_g8_ParamLimits

0x4044,	// (0x00012cb4) status_small_pane_g8

0x42b7,	// (0x00012f27) popup_find_window_ParamLimits

0x44ca,	// (0x0001313a) popup_note_image_window_ParamLimits

0xc5c8,	// (0x0001b238) list_double2_graphic_pane_vc_g1_ParamLimits

0xc5c8,	// (0x0001b238) list_double2_graphic_pane_vc_g1

0xc54e,	// (0x0001b1be) list_double2_graphic_pane_vc_g2_ParamLimits

0xc54e,	// (0x0001b1be) list_double2_graphic_pane_vc_g2

0xc55a,	// (0x0001b1ca) list_double2_graphic_pane_vc_g3_ParamLimits

0xc55a,	// (0x0001b1ca) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0001e433) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0001e433) list_double2_graphic_pane_vc_g

0xccc3,	// (0x0001b933) list_double2_graphic_pane_vc_t1_ParamLimits

0xccc3,	// (0x0001b933) list_double2_graphic_pane_vc_t1

0xc54e,	// (0x0001b1be) list_single_heading_pane_vc_g1_ParamLimits

0xc54e,	// (0x0001b1be) list_single_heading_pane_vc_g1

0xc55a,	// (0x0001b1ca) list_single_heading_pane_vc_g2_ParamLimits

0xc55a,	// (0x0001b1ca) list_single_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001e250) list_single_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001e250) list_single_heading_pane_vc_g

0xccd9,	// (0x0001b949) list_single_heading_pane_vc_t1_ParamLimits

0xccd9,	// (0x0001b949) list_single_heading_pane_vc_t1

0xccef,	// (0x0001b95f) list_single_heading_pane_vc_t2_ParamLimits

0xccef,	// (0x0001b95f) list_single_heading_pane_vc_t2

0x0001,

0xf7eb,	// (0x0001e45b) list_single_heading_pane_vc_t_ParamLimits

0xf7eb,	// (0x0001e45b) list_single_heading_pane_vc_t

0x4c7c,	// (0x000138ec) list_setting_number_pane_vc_g1_ParamLimits

0x4c7c,	// (0x000138ec) list_setting_number_pane_vc_g1

0x4c88,	// (0x000138f8) list_setting_number_pane_vc_g2_ParamLimits

0x4c88,	// (0x000138f8) list_setting_number_pane_vc_g2

0x0001,

0xf7f0,	// (0x0001e460) list_setting_number_pane_vc_g_ParamLimits

0xf7f0,	// (0x0001e460) list_setting_number_pane_vc_g

0x4c94,	// (0x00013904) list_setting_number_pane_vc_t1_ParamLimits

0x4c94,	// (0x00013904) list_setting_number_pane_vc_t1

0x4ca8,	// (0x00013918) list_setting_number_pane_vc_t2_ParamLimits

0x4ca8,	// (0x00013918) list_setting_number_pane_vc_t2

0x4cc2,	// (0x00013932) list_setting_number_pane_vc_t3_ParamLimits

0x4cc2,	// (0x00013932) list_setting_number_pane_vc_t3

0x0002,

0xf7f5,	// (0x0001e465) list_setting_number_pane_vc_t_ParamLimits

0xf7f5,	// (0x0001e465) list_setting_number_pane_vc_t

0x4ce8,	// (0x00013958) set_value_pane_vc_ParamLimits

0x4ce8,	// (0x00013958) set_value_pane_vc

0x62e6,	// (0x00014f56) list_double2_graphic_pane_vc_ParamLimits

0x62e6,	// (0x00014f56) list_double2_graphic_pane_vc

0x62fa,	// (0x00014f6a) list_double2_large_graphic_pane_vc_ParamLimits

0x62fa,	// (0x00014f6a) list_double2_large_graphic_pane_vc

0x62e6,	// (0x00014f56) list_double2_pane_vc_ParamLimits

0x62e6,	// (0x00014f56) list_double2_pane_vc

0x62e6,	// (0x00014f56) list_double_graphic_heading_pane_vc_ParamLimits

0x62e6,	// (0x00014f56) list_double_graphic_heading_pane_vc

0x62e6,	// (0x00014f56) list_double_graphic_pane_vc_ParamLimits

0x62e6,	// (0x00014f56) list_double_graphic_pane_vc

0x62e6,	// (0x00014f56) list_double_heading_pane_vc_ParamLimits

0x62e6,	// (0x00014f56) list_double_heading_pane_vc

0x62fa,	// (0x00014f6a) list_double_large_graphic_pane_vc_ParamLimits

0x62fa,	// (0x00014f6a) list_double_large_graphic_pane_vc

0x62e6,	// (0x00014f56) list_double_number_pane_vc_ParamLimits

0x62e6,	// (0x00014f56) list_double_number_pane_vc

0x62e6,	// (0x00014f56) list_double_pane_vc_ParamLimits

0x62e6,	// (0x00014f56) list_double_pane_vc

0x62e6,	// (0x00014f56) list_double_time_pane_vc_ParamLimits

0x62e6,	// (0x00014f56) list_double_time_pane_vc

0x62e6,	// (0x00014f56) list_setting_number_pane_vc_ParamLimits

0x62e6,	// (0x00014f56) list_setting_number_pane_vc

0x62e6,	// (0x00014f56) list_setting_pane_vc_ParamLimits

0x62e6,	// (0x00014f56) list_setting_pane_vc

0x62e6,	// (0x00014f56) list_single_graphic_heading_pane_vc_ParamLimits

0x62e6,	// (0x00014f56) list_single_graphic_heading_pane_vc

0x62e6,	// (0x00014f56) list_single_heading_pane_vc_ParamLimits

0x62e6,	// (0x00014f56) list_single_heading_pane_vc

0xcdc7,	// (0x0001ba37) list_single_number_heading_pane_vc_ParamLimits

0xcdc7,	// (0x0001ba37) list_single_number_heading_pane_vc

0xc5c8,	// (0x0001b238) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc5c8,	// (0x0001b238) list_double_graphic_heading_pane_vc_g1

0xc54e,	// (0x0001b1be) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc54e,	// (0x0001b1be) list_double_graphic_heading_pane_vc_g2

0xc55a,	// (0x0001b1ca) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc55a,	// (0x0001b1ca) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0001e433) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0001e433) list_double_graphic_heading_pane_vc_g

0xce84,	// (0x0001baf4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xce84,	// (0x0001baf4) list_double_graphic_heading_pane_vc_t1

0xccd9,	// (0x0001b949) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xccd9,	// (0x0001b949) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0001e663) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0001e663) list_double_graphic_heading_pane_vc_t

0x4c7c,	// (0x000138ec) list_setting_pane_vc_g1_ParamLimits

0x4c7c,	// (0x000138ec) list_setting_pane_vc_g1

0x4c88,	// (0x000138f8) list_setting_pane_vc_g2_ParamLimits

0x4c88,	// (0x000138f8) list_setting_pane_vc_g2

0x0001,

0xf7f0,	// (0x0001e460) list_setting_pane_vc_g_ParamLimits

0xf7f0,	// (0x0001e460) list_setting_pane_vc_g

0x6aeb,	// (0x0001575b) list_setting_pane_vc_t1_ParamLimits

0x6aeb,	// (0x0001575b) list_setting_pane_vc_t1

0x6b05,	// (0x00015775) list_setting_pane_vc_t2_ParamLimits

0x6b05,	// (0x00015775) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x0001e6a6) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x0001e6a6) list_setting_pane_vc_t

0x4ce8,	// (0x00013958) set_value_pane_cp_vc_ParamLimits

0x4ce8,	// (0x00013958) set_value_pane_cp_vc

0xc54e,	// (0x0001b1be) list_single_number_heading_pane_vc_g1_ParamLimits

0xc54e,	// (0x0001b1be) list_single_number_heading_pane_vc_g1

0xc55a,	// (0x0001b1ca) list_single_number_heading_pane_vc_g2_ParamLimits

0xc55a,	// (0x0001b1ca) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001e250) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001e250) list_single_number_heading_pane_vc_g

0xccd9,	// (0x0001b949) list_single_number_heading_pane_vc_t1_ParamLimits

0xccd9,	// (0x0001b949) list_single_number_heading_pane_vc_t1

0xce98,	// (0x0001bb08) list_single_number_heading_pane_vc_t2_ParamLimits

0xce98,	// (0x0001bb08) list_single_number_heading_pane_vc_t2

0xc5b6,	// (0x0001b226) list_single_number_heading_pane_vc_t3_ParamLimits

0xc5b6,	// (0x0001b226) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x0001e6ab) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0001e6ab) list_single_number_heading_pane_vc_t

0xc5c8,	// (0x0001b238) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc5c8,	// (0x0001b238) list_single_graphic_heading_pane_vc_g1

0xc54e,	// (0x0001b1be) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc54e,	// (0x0001b1be) list_single_graphic_heading_pane_vc_g4

0xc55a,	// (0x0001b1ca) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc55a,	// (0x0001b1ca) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0001e433) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0001e433) list_single_graphic_heading_pane_vc_g

0xccd9,	// (0x0001b949) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xccd9,	// (0x0001b949) list_single_graphic_heading_pane_vc_t1

0xceac,	// (0x0001bb1c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xceac,	// (0x0001bb1c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0001e6b2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0001e6b2) list_single_graphic_heading_pane_vc_t

0xc54e,	// (0x0001b1be) list_double2_pane_vc_g1_ParamLimits

0xc54e,	// (0x0001b1be) list_double2_pane_vc_g1

0xc55a,	// (0x0001b1ca) list_double2_pane_vc_g2_ParamLimits

0xc55a,	// (0x0001b1ca) list_double2_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001e250) list_double2_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001e250) list_double2_pane_vc_g

0xcd8f,	// (0x0001b9ff) list_double2_pane_vc_t1_ParamLimits

0xcd8f,	// (0x0001b9ff) list_double2_pane_vc_t1

0xcec0,	// (0x0001bb30) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xcec0,	// (0x0001bb30) list_double2_large_graphic_pane_vc_g1

0xcecc,	// (0x0001bb3c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xcecc,	// (0x0001bb3c) list_double2_large_graphic_pane_vc_g2

0xced8,	// (0x0001bb48) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xced8,	// (0x0001bb48) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa47,	// (0x0001e6b7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0001e6b7) list_double2_large_graphic_pane_vc_g

0xcee4,	// (0x0001bb54) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xcee4,	// (0x0001bb54) list_double2_large_graphic_pane_vc_t1

0xcefa,	// (0x0001bb6a) list_double_time_pane_vc_g1_ParamLimits

0xcefa,	// (0x0001bb6a) list_double_time_pane_vc_g1

0xcf06,	// (0x0001bb76) list_double_time_pane_vc_g2_ParamLimits

0xcf06,	// (0x0001bb76) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0001e6be) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0001e6be) list_double_time_pane_vc_g

0xcf12,	// (0x0001bb82) list_double_time_pane_vc_t1_ParamLimits

0xcf12,	// (0x0001bb82) list_double_time_pane_vc_t1

0xcf2b,	// (0x0001bb9b) list_double_time_pane_vc_t2_ParamLimits

0xcf2b,	// (0x0001bb9b) list_double_time_pane_vc_t2

0xcf6b,	// (0x0001bbdb) list_double_time_pane_vc_t3_ParamLimits

0xcf6b,	// (0x0001bbdb) list_double_time_pane_vc_t3

0xcf83,	// (0x0001bbf3) list_double_time_pane_vc_t4_ParamLimits

0xcf83,	// (0x0001bbf3) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0001e6c3) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0001e6c3) list_double_time_pane_vc_t

0xc54e,	// (0x0001b1be) list_double_pane_vc_g1_ParamLimits

0xc54e,	// (0x0001b1be) list_double_pane_vc_g1

0xc55a,	// (0x0001b1ca) list_double_pane_vc_g2_ParamLimits

0xc55a,	// (0x0001b1ca) list_double_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001e250) list_double_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001e250) list_double_pane_vc_g

0xcf97,	// (0x0001bc07) list_double_pane_vc_t1_ParamLimits

0xcf97,	// (0x0001bc07) list_double_pane_vc_t1

0xcfa9,	// (0x0001bc19) list_double_pane_vc_t2_ParamLimits

0xcfa9,	// (0x0001bc19) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001e6cc) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001e6cc) list_double_pane_vc_t

0xc54e,	// (0x0001b1be) list_double_number_pane_vc_g1_ParamLimits

0xc54e,	// (0x0001b1be) list_double_number_pane_vc_g1

0xc55a,	// (0x0001b1ca) list_double_number_pane_vc_g2_ParamLimits

0xc55a,	// (0x0001b1ca) list_double_number_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001e250) list_double_number_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001e250) list_double_number_pane_vc_g

0xcfc1,	// (0x0001bc31) list_double_number_pane_vc_t1_ParamLimits

0xcfc1,	// (0x0001bc31) list_double_number_pane_vc_t1

0xcfd5,	// (0x0001bc45) list_double_number_pane_vc_t2_ParamLimits

0xcfd5,	// (0x0001bc45) list_double_number_pane_vc_t2

0xcfa9,	// (0x0001bc19) list_double_number_pane_vc_t3_ParamLimits

0xcfa9,	// (0x0001bc19) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0001e6d1) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0001e6d1) list_double_number_pane_vc_t

0xcfe7,	// (0x0001bc57) list_double_large_graphic_pane_vc_g1_ParamLimits

0xcfe7,	// (0x0001bc57) list_double_large_graphic_pane_vc_g1

0xcff3,	// (0x0001bc63) list_double_large_graphic_pane_vc_g2_ParamLimits

0xcff3,	// (0x0001bc63) list_double_large_graphic_pane_vc_g2

0xced8,	// (0x0001bb48) list_double_large_graphic_pane_vc_g3_ParamLimits

0xced8,	// (0x0001bb48) list_double_large_graphic_pane_vc_g3

0xd002,	// (0x0001bc72) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd002,	// (0x0001bc72) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0001e6d8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0001e6d8) list_double_large_graphic_pane_vc_g

0xd00e,	// (0x0001bc7e) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd00e,	// (0x0001bc7e) list_double_large_graphic_pane_vc_t1

0xd020,	// (0x0001bc90) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd020,	// (0x0001bc90) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0001e6e1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0001e6e1) list_double_large_graphic_pane_vc_t

0xc54e,	// (0x0001b1be) list_double_heading_pane_vc_g1_ParamLimits

0xc54e,	// (0x0001b1be) list_double_heading_pane_vc_g1

0xc55a,	// (0x0001b1ca) list_double_heading_pane_vc_g2_ParamLimits

0xc55a,	// (0x0001b1ca) list_double_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001e250) list_double_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001e250) list_double_heading_pane_vc_g

0xd039,	// (0x0001bca9) list_double_heading_pane_vc_t1_ParamLimits

0xd039,	// (0x0001bca9) list_double_heading_pane_vc_t1

0xccd9,	// (0x0001b949) list_double_heading_pane_vc_t2_ParamLimits

0xccd9,	// (0x0001b949) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0001e6e6) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0001e6e6) list_double_heading_pane_vc_t

0xd04d,	// (0x0001bcbd) list_double_graphic_pane_vc_g1_ParamLimits

0xd04d,	// (0x0001bcbd) list_double_graphic_pane_vc_g1

0xd05d,	// (0x0001bccd) list_double_graphic_pane_vc_g2_ParamLimits

0xd05d,	// (0x0001bccd) list_double_graphic_pane_vc_g2

0xd06c,	// (0x0001bcdc) list_double_graphic_pane_vc_g3_ParamLimits

0xd06c,	// (0x0001bcdc) list_double_graphic_pane_vc_g3

0x0002,

0xfa7b,	// (0x0001e6eb) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x0001e6eb) list_double_graphic_pane_vc_g

0xd078,	// (0x0001bce8) list_double_graphic_pane_vc_t1_ParamLimits

0xd078,	// (0x0001bce8) list_double_graphic_pane_vc_t1

0xcfa9,	// (0x0001bc19) list_double_graphic_pane_vc_t2_ParamLimits

0xcfa9,	// (0x0001bc19) list_double_graphic_pane_vc_t2

0x0001,

0xfa82,	// (0x0001e6f2) list_double_graphic_pane_vc_t_ParamLimits

0xfa82,	// (0x0001e6f2) list_double_graphic_pane_vc_t

0xd484,	// (0x0001c0f4) aid_size_cell_fastswap

0xd48c,	// (0x0001c0fc) aid_size_cell_touch_ParamLimits

0xd48c,	// (0x0001c0fc) aid_size_cell_touch

0xd6e7,	// (0x0001c357) popup_fast_swap_wide_window_ParamLimits

0xd6e7,	// (0x0001c357) popup_fast_swap_wide_window

0xd7dd,	// (0x0001c44d) touch_pane_ParamLimits

0xd7dd,	// (0x0001c44d) touch_pane

0x2e81,	// (0x00011af1) button_value_adjust_pane_cp2

0xc998,	// (0x0001b608) button_value_adjust_pane_cp4

0xc9b8,	// (0x0001b628) form_field_data_pane_cp2

0xc9d7,	// (0x0001b647) form_field_data_wide_pane_cp2

0x354e,	// (0x000121be) bg_scroll_pane_ParamLimits

0xda69,	// (0x0001c6d9) scroll_handle_pane_ParamLimits

0xda7d,	// (0x0001c6ed) scroll_sc2_down_pane_ParamLimits

0xda7d,	// (0x0001c6ed) scroll_sc2_down_pane

0x357f,	// (0x000121ef) scroll_sc2_up_pane_ParamLimits

0x357f,	// (0x000121ef) scroll_sc2_up_pane

0x7116,	// (0x00015d86) grid_wheel_folder_pane_g1_ParamLimits

0x7116,	// (0x00015d86) grid_wheel_folder_pane_g1

0xdc42,	// (0x0001c8b2) clock_nsta_pane_cp2_ParamLimits

0xdc42,	// (0x0001c8b2) clock_nsta_pane_cp2

0x32c3,	// (0x00011f33) listscroll_midp_pane_ParamLimits

0x3dd9,	// (0x00012a49) midp_canvas_pane

0x40bf,	// (0x00012d2f) nsta_clock_indic_pane

0x411d,	// (0x00012d8d) listscroll_form_pane_vc

0x4139,	// (0x00012da9) listscroll_set_pane_vc_ParamLimits

0x4139,	// (0x00012da9) listscroll_set_pane_vc

0x47cd,	// (0x0001343d) clock_nsta_pane

0x4842,	// (0x000134b2) indicator_nsta_pane

0x4b1a,	// (0x0001378a) bg_popup_sub_pane_cp2_ParamLimits

0x4b2e,	// (0x0001379e) find_pane_cp2_ParamLimits

0x4b2e,	// (0x0001379e) find_pane_cp2

0x4b44,	// (0x000137b4) grid_toobar_pane_ParamLimits

0x4cf8,	// (0x00013968) list_form_gen_pane_vc_ParamLimits

0x4cf8,	// (0x00013968) list_form_gen_pane_vc

0x4d0e,	// (0x0001397e) scroll_pane_cp8_vc_ParamLimits

0x4d0e,	// (0x0001397e) scroll_pane_cp8_vc

0x4d8a,	// (0x000139fa) data_form_wide_pane_vc_ParamLimits

0x4d8a,	// (0x000139fa) data_form_wide_pane_vc

0x4d96,	// (0x00013a06) form_field_data_wide_pane_vc_g1

0x4d9e,	// (0x00013a0e) form_field_data_wide_pane_vc_t1_ParamLimits

0x4d9e,	// (0x00013a0e) form_field_data_wide_pane_vc_t1

0x2f59,	// (0x00011bc9) input_focus_pane_cp6_vc_ParamLimits

0x2f59,	// (0x00011bc9) input_focus_pane_cp6_vc

0x5107,	// (0x00013d77) list_midp_pane_ParamLimits

0x5113,	// (0x00013d83) scroll_pane_cp16_ParamLimits

0x5113,	// (0x00013d83) scroll_pane_cp16

0x5161,	// (0x00013dd1) button_value_adjust_pane_ParamLimits

0x5161,	// (0x00013dd1) button_value_adjust_pane

0x60f6,	// (0x00014d66) button_value_adjust_pane_cp6_ParamLimits

0x60f6,	// (0x00014d66) button_value_adjust_pane_cp6

0x6218,	// (0x00014e88) settings_code_pane_cp_ParamLimits

0x6218,	// (0x00014e88) settings_code_pane_cp

0x2096,	// (0x00010d06) cell_touch_pane_g1

0x2096,	// (0x00010d06) cell_touch_pane_g2

0x0001,

0xf716,	// (0x0001e386) cell_touch_pane_g

0x68b9,	// (0x00015529) cell_touch_pane_cp_ParamLimits

0x68b9,	// (0x00015529) cell_touch_pane_cp

0x68c9,	// (0x00015539) cell_touch_pane_ParamLimits

0x68c9,	// (0x00015539) cell_touch_pane

0x2096,	// (0x00010d06) scroll_sc2_down_pane_g1

0x2096,	// (0x00010d06) scroll_sc2_up_pane_g1

0x20a0,	// (0x00010d10) bg_set_opt_pane_cp4_vc

0x6907,	// (0x00015577) list_set_graphic_pane_vc_g1_ParamLimits

0x6907,	// (0x00015577) list_set_graphic_pane_vc_g1

0x6913,	// (0x00015583) list_set_graphic_pane_vc_g2_ParamLimits

0x6913,	// (0x00015583) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0001e668) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0001e668) list_set_graphic_pane_vc_g

0x691f,	// (0x0001558f) text_primary_small_cp13_vc_ParamLimits

0x691f,	// (0x0001558f) text_primary_small_cp13_vc

0x6937,	// (0x000155a7) list_set_graphic_pane_vc_ParamLimits

0x6937,	// (0x000155a7) list_set_graphic_pane_vc

0x20a0,	// (0x00010d10) input_focus_pane_cp2_vc

0x2096,	// (0x00010d06) setting_code_pane_vc_g1

0x694b,	// (0x000155bb) setting_code_pane_vc_t1

0x6959,	// (0x000155c9) set_text_pane_vc_t1_ParamLimits

0x6959,	// (0x000155c9) set_text_pane_vc_t1

0x20a0,	// (0x00010d10) input_focus_pane_cp1_vc

0x6978,	// (0x000155e8) list_set_text_pane_vc

0x2096,	// (0x00010d06) setting_text_pane_vc_g1

0x20a0,	// (0x00010d10) bg_set_opt_pane_cp2_vc

0x6982,	// (0x000155f2) setting_slider_graphic_pane_vc_g1

0x698a,	// (0x000155fa) setting_slider_graphic_pane_vc_t1

0x6998,	// (0x00015608) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0001e66d) setting_slider_graphic_pane_vc_t

0x69a6,	// (0x00015616) slider_set_pane_cp_vc

0x69ae,	// (0x0001561e) slider_set_pane_vc_g1

0x69b7,	// (0x00015627) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0001e672) slider_set_pane_vc_g

0x3095,	// (0x00011d05) set_opt_bg_pane_g1_copy1

0x309d,	// (0x00011d0d) set_opt_bg_pane_g2_copy1

0x69e3,	// (0x00015653) set_opt_bg_pane_g3_copy1

0x30ad,	// (0x00011d1d) set_opt_bg_pane_g4_copy1

0x30b5,	// (0x00011d25) set_opt_bg_pane_g5_copy1

0x30bd,	// (0x00011d2d) set_opt_bg_pane_g6_copy1

0x69eb,	// (0x0001565b) set_opt_bg_pane_g7_copy1

0x69f5,	// (0x00015665) set_opt_bg_pane_g8_copy1

0x69fd,	// (0x0001566d) set_opt_bg_pane_g9_copy1

0x20a0,	// (0x00010d10) bg_set_opt_pane_cp_vc

0x6a05,	// (0x00015675) setting_slider_pane_vc_t1

0x698a,	// (0x000155fa) setting_slider_pane_vc_t2

0x6998,	// (0x00015608) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0001e681) setting_slider_pane_vc_t

0x69a6,	// (0x00015616) slider_set_pane_vc

0xdfe1,	// (0x0001cc51) volume_set_pane_vc_g1

0xe2dc,	// (0x0001cf4c) volume_set_pane_vc_g2

0xe2e5,	// (0x0001cf55) volume_set_pane_vc_g3

0xe2ee,	// (0x0001cf5e) volume_set_pane_vc_g4

0xe2f7,	// (0x0001cf67) volume_set_pane_vc_g5

0xe300,	// (0x0001cf70) volume_set_pane_vc_g6

0xe309,	// (0x0001cf79) volume_set_pane_vc_g7

0xe312,	// (0x0001cf82) volume_set_pane_vc_g8

0xe31b,	// (0x0001cf8b) volume_set_pane_vc_g9

0xe324,	// (0x0001cf94) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x0001e688) volume_set_pane_vc_g

0x6a14,	// (0x00015684) volume_set_pane_vc

0x6a1c,	// (0x0001568c) button_value_adjust_pane_cp1_vc

0x6a26,	// (0x00015696) list_highlight_pane_cp2_vc

0x6a2f,	// (0x0001569f) list_set_pane_vc_ParamLimits

0x6a2f,	// (0x0001569f) list_set_pane_vc

0x6a81,	// (0x000156f1) main_pane_set_vc_t1_ParamLimits

0x6a81,	// (0x000156f1) main_pane_set_vc_t1

0x6a96,	// (0x00015706) main_pane_set_vc_t2_ParamLimits

0x6a96,	// (0x00015706) main_pane_set_vc_t2

0x6aa8,	// (0x00015718) main_pane_set_vc_t3_ParamLimits

0x6aa8,	// (0x00015718) main_pane_set_vc_t3

0x6aba,	// (0x0001572a) main_pane_set_vc_t4_ParamLimits

0x6aba,	// (0x0001572a) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x0001e69d) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x0001e69d) main_pane_set_vc_t

0x6acc,	// (0x0001573c) setting_code_pane_vc_ParamLimits

0x6acc,	// (0x0001573c) setting_code_pane_vc

0x6adb,	// (0x0001574b) setting_slider_graphic_pane_vc

0x6adb,	// (0x0001574b) setting_slider_pane_vc

0x6adb,	// (0x0001574b) setting_text_pane_vc

0x6adb,	// (0x0001574b) setting_volume_pane_vc

0x6ae3,	// (0x00015753) scroll_pane_cp121_vc

0x2e6f,	// (0x00011adf) set_content_pane_vc

0x6cd9,	// (0x00015949) button_value_adjust_pane_g1

0x6ce2,	// (0x00015952) button_value_adjust_pane_g2

0x0001,

0xfa87,	// (0x0001e6f7) button_value_adjust_pane_g

0x6ceb,	// (0x0001595b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6ceb,	// (0x0001595b) form_field_slider_wide_pane_vc_t1

0x6cff,	// (0x0001596f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6cff,	// (0x0001596f) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8c,	// (0x0001e6fc) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8c,	// (0x0001e6fc) form_field_slider_wide_pane_vc_t

0x2415,	// (0x00011085) input_focus_pane_cp10_vc_ParamLimits

0x2415,	// (0x00011085) input_focus_pane_cp10_vc

0x6d11,	// (0x00015981) slider_cont_pane_cp1_vc_ParamLimits

0x6d11,	// (0x00015981) slider_cont_pane_cp1_vc

0x69ae,	// (0x0001561e) slider_form_pane_g1_cp2

0x69b7,	// (0x00015627) slider_form_pane_g2_cp2

0x6d2a,	// (0x0001599a) form_field_slider_pane_vc_t3

0x6d38,	// (0x000159a8) form_field_slider_pane_vc_t4

0x6d46,	// (0x000159b6) slider_form_pane_vc_ParamLimits

0x6d46,	// (0x000159b6) slider_form_pane_vc

0x6d53,	// (0x000159c3) form_field_slider_pane_vc_t1_ParamLimits

0x6d53,	// (0x000159c3) form_field_slider_pane_vc_t1

0x6cff,	// (0x0001596f) form_field_slider_pane_vc_t2_ParamLimits

0x6cff,	// (0x0001596f) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x0001e70c) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x0001e70c) form_field_slider_pane_vc_t

0x2415,	// (0x00011085) input_focus_pane_cp9_vc_ParamLimits

0x2415,	// (0x00011085) input_focus_pane_cp9_vc

0x6d6f,	// (0x000159df) slider_cont_pane_vc_ParamLimits

0x6d6f,	// (0x000159df) slider_cont_pane_vc

0x6d81,	// (0x000159f1) list_form_graphic_pane_cp_vc_ParamLimits

0x6d81,	// (0x000159f1) list_form_graphic_pane_cp_vc

0x4d96,	// (0x00013a06) form_field_popup_wide_pane_vc_g1

0x6d96,	// (0x00015a06) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6d96,	// (0x00015a06) form_field_popup_wide_pane_vc_t1

0x2f59,	// (0x00011bc9) input_focus_pane_cp8_vc_ParamLimits

0x2f59,	// (0x00011bc9) input_focus_pane_cp8_vc

0x6dad,	// (0x00015a1d) list_form_wide_pane_vc_ParamLimits

0x6dad,	// (0x00015a1d) list_form_wide_pane_vc

0x6db9,	// (0x00015a29) list_form_graphic_pane_vc_g1

0x6dc1,	// (0x00015a31) list_form_graphic_pane_vc_t1_ParamLimits

0x6dc1,	// (0x00015a31) list_form_graphic_pane_vc_t1

0x2180,	// (0x00010df0) list_highlight_pane_cp5_vc_ParamLimits

0x2180,	// (0x00010df0) list_highlight_pane_cp5_vc

0x6ddd,	// (0x00015a4d) list_form_graphic_pane_vc_ParamLimits

0x6ddd,	// (0x00015a4d) list_form_graphic_pane_vc

0x4d96,	// (0x00013a06) form_field_popup_pane_vc_g1

0x6df3,	// (0x00015a63) form_field_popup_pane_vc_t1_ParamLimits

0x6df3,	// (0x00015a63) form_field_popup_pane_vc_t1

0x2f59,	// (0x00011bc9) input_focus_pane_cp7_vc_ParamLimits

0x2f59,	// (0x00011bc9) input_focus_pane_cp7_vc

0x6e0a,	// (0x00015a7a) list_form_pane_vc_ParamLimits

0x6e0a,	// (0x00015a7a) list_form_pane_vc

0x6e16,	// (0x00015a86) data_form_pane_vc_t1_ParamLimits

0x6e16,	// (0x00015a86) data_form_pane_vc_t1

0x3095,	// (0x00011d05) input_focus_pane_vc_g1

0x309d,	// (0x00011d0d) input_focus_pane_vc_g2

0x30a5,	// (0x00011d15) input_focus_pane_vc_g3

0x30ad,	// (0x00011d1d) input_focus_pane_vc_g4

0x30b5,	// (0x00011d25) input_focus_pane_vc_g5

0x30bd,	// (0x00011d2d) input_focus_pane_vc_g6

0x30c5,	// (0x00011d35) input_focus_pane_vc_g7

0x30cd,	// (0x00011d3d) input_focus_pane_vc_g8

0x30d5,	// (0x00011d45) input_focus_pane_vc_g9

0x2096,	// (0x00010d06) input_focus_pane_vc_g10

0x0009,

0xf69f,	// (0x0001e30f) input_focus_pane_vc_g

0x4d8a,	// (0x000139fa) data_form_pane_vc_ParamLimits

0x4d8a,	// (0x000139fa) data_form_pane_vc

0x4d96,	// (0x00013a06) form_field_data_pane_vc_g1

0x6e31,	// (0x00015aa1) form_field_data_pane_vc_t1_ParamLimits

0x6e31,	// (0x00015aa1) form_field_data_pane_vc_t1

0x2f59,	// (0x00011bc9) input_focus_pane_vc_ParamLimits

0x2f59,	// (0x00011bc9) input_focus_pane_vc

0x6e4b,	// (0x00015abb) button_value_adjust_pane_cp3_vc

0x6e53,	// (0x00015ac3) button_value_adjust_pane_cp5_vc

0x6e5b,	// (0x00015acb) form_field_data_pane_vc_ParamLimits

0x6e5b,	// (0x00015acb) form_field_data_pane_vc

0x6e72,	// (0x00015ae2) form_field_data_pane_vc_cp2

0x6e7a,	// (0x00015aea) form_field_data_wide_pane_vc_ParamLimits

0x6e7a,	// (0x00015aea) form_field_data_wide_pane_vc

0x6e90,	// (0x00015b00) form_field_data_wide_pane_vc_cp2

0x6e98,	// (0x00015b08) form_field_popup_pane_vc_ParamLimits

0x6e98,	// (0x00015b08) form_field_popup_pane_vc

0x6eaf,	// (0x00015b1f) form_field_popup_wide_pane_vc_ParamLimits

0x6eaf,	// (0x00015b1f) form_field_popup_wide_pane_vc

0x6ec5,	// (0x00015b35) form_field_slider_pane_vc_ParamLimits

0x6ec5,	// (0x00015b35) form_field_slider_pane_vc

0x6ed8,	// (0x00015b48) form_field_slider_wide_pane_vc_ParamLimits

0x6ed8,	// (0x00015b48) form_field_slider_wide_pane_vc

0x6eeb,	// (0x00015b5b) grid_touch_1_pane_ParamLimits

0x6eeb,	// (0x00015b5b) grid_touch_1_pane

0x6ef7,	// (0x00015b67) grid_touch_2_pane_ParamLimits

0x6ef7,	// (0x00015b67) grid_touch_2_pane

0x408a,	// (0x00012cfa) touch_pane_g1_ParamLimits

0x408a,	// (0x00012cfa) touch_pane_g1

0x6f0f,	// (0x00015b7f) cell_app_pane_cp_wide_ParamLimits

0x6f0f,	// (0x00015b7f) cell_app_pane_cp_wide

0x6f20,	// (0x00015b90) grid_popup_fast_wide_pane_ParamLimits

0x6f20,	// (0x00015b90) grid_popup_fast_wide_pane

0x6f34,	// (0x00015ba4) scroll_pane_cp19_ParamLimits

0x6f34,	// (0x00015ba4) scroll_pane_cp19

0x20a0,	// (0x00010d10) bg_popup_window_pane_cp20

0x6f48,	// (0x00015bb8) listscroll_popup_fast_wide_pane

0x2180,	// (0x00010df0) grid_indicator_nsta_pane

0x6f50,	// (0x00015bc0) clock_nsta_pane_g1

0x6f59,	// (0x00015bc9) clock_nsta_pane_t1

0x6f75,	// (0x00015be5) cell_indicator_nsta_pane_ParamLimits

0x6f75,	// (0x00015be5) cell_indicator_nsta_pane

0x6fad,	// (0x00015c1d) cell_indicator_nsta_pane_g1

0x6fbb,	// (0x00015c2b) cell_indicator_nsta_pane_g2

0x0001,

0xfaa6,	// (0x0001e716) cell_indicator_nsta_pane_g

0x6fd1,	// (0x00015c41) clock_nsta_pane_cp

0x6fd9,	// (0x00015c49) indicator_nsta_pane_cp

0x6fe2,	// (0x00015c52) nsta_clock_indic_pane_g1

0x2263,	// (0x00010ed3) grid_indicator_pane

0x3671,	// (0x000122e1) scroll_pane_cp29

0xdb91,	// (0x0001c801) indicator_nsta_pane_cp2_ParamLimits

0xdb91,	// (0x0001c801) indicator_nsta_pane_cp2

0x2180,	// (0x00010df0) main_apps_wheel_pane

0x4fee,	// (0x00013c5e) form_midp_field_text_pane_ParamLimits

0x5133,	// (0x00013da3) scroll_bar_cp050_ParamLimits

0x704b,	// (0x00015cbb) cell_indicator_pane_ParamLimits

0x704b,	// (0x00015cbb) cell_indicator_pane

0x7068,	// (0x00015cd8) cell_indicator_pane_g1

0x7072,	// (0x00015ce2) grid_wheel_folder_pane_ParamLimits

0x7072,	// (0x00015ce2) grid_wheel_folder_pane

0x7088,	// (0x00015cf8) list_wheel_apps_pane_ParamLimits

0x7088,	// (0x00015cf8) list_wheel_apps_pane

0x7099,	// (0x00015d09) main_apps_wheel_pane_g1_ParamLimits

0x7099,	// (0x00015d09) main_apps_wheel_pane_g1

0x70ad,	// (0x00015d1d) main_apps_wheel_pane_g2_ParamLimits

0x70ad,	// (0x00015d1d) main_apps_wheel_pane_g2

0x0001,

0xfac2,	// (0x0001e732) main_apps_wheel_pane_g_ParamLimits

0xfac2,	// (0x0001e732) main_apps_wheel_pane_g

0x70c5,	// (0x00015d35) main_apps_wheel_pane_t1_ParamLimits

0x70c5,	// (0x00015d35) main_apps_wheel_pane_t1

0x70e8,	// (0x00015d58) list_wheel_apps_pane_g1

0x70f0,	// (0x00015d60) list_wheel_apps_pane_g2

0x70f8,	// (0x00015d68) list_wheel_apps_pane_g3

0x7102,	// (0x00015d72) list_wheel_apps_pane_g4

0x710c,	// (0x00015d7c) list_wheel_apps_pane_g5

0x0004,

0xfac7,	// (0x0001e737) list_wheel_apps_pane_g

0x3c4f,	// (0x000128bf) navi_icon_text_pane

0x46fc,	// (0x0001336c) aid_fill_nsta

0x712f,	// (0x00015d9f) navi_icon_text_pane_g1

0x713b,	// (0x00015dab) navi_icon_text_pane_t1

0x3aeb,	// (0x0001275b) list_set_graphic_pane_t1_ParamLimits

0x3aeb,	// (0x0001275b) list_set_graphic_pane_t1

0x5875,	// (0x000144e5) popup_midp_note_alarm_window_t6_ParamLimits

0x5875,	// (0x000144e5) popup_midp_note_alarm_window_t6

0x5887,	// (0x000144f7) popup_midp_note_alarm_window_t7_ParamLimits

0x5887,	// (0x000144f7) popup_midp_note_alarm_window_t7

0x5899,	// (0x00014509) popup_midp_note_alarm_window_t8_ParamLimits

0x5899,	// (0x00014509) popup_midp_note_alarm_window_t8

0x58ab,	// (0x0001451b) popup_midp_note_alarm_window_t9_ParamLimits

0x58ab,	// (0x0001451b) popup_midp_note_alarm_window_t9

0x58bd,	// (0x0001452d) popup_midp_note_alarm_window_t10_ParamLimits

0x58bd,	// (0x0001452d) popup_midp_note_alarm_window_t10

0x58cf,	// (0x0001453f) popup_midp_note_alarm_window_t11_ParamLimits

0x58cf,	// (0x0001453f) popup_midp_note_alarm_window_t11

0x58e1,	// (0x00014551) scroll_pane_cp17_ParamLimits

0x58e1,	// (0x00014551) scroll_pane_cp17

0xdfe1,	// (0x0001cc51) volume_small_pane_cp_g1

0xe32d,	// (0x0001cf9d) volume_small_pane_cp_g2

0xe336,	// (0x0001cfa6) volume_small_pane_cp_g3

0xe33f,	// (0x0001cfaf) volume_small_pane_cp_g4

0xe348,	// (0x0001cfb8) volume_small_pane_cp_g5

0xe351,	// (0x0001cfc1) volume_small_pane_cp_g6

0xe35a,	// (0x0001cfca) volume_small_pane_cp_g7

0xe363,	// (0x0001cfd3) volume_small_pane_cp_g8

0xe36c,	// (0x0001cfdc) volume_small_pane_cp_g9

0xe375,	// (0x0001cfe5) volume_small_pane_cp_g10

0x3ea4,	// (0x00012b14) midp_ticker_pane_g1_ParamLimits

0x3eb0,	// (0x00012b20) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001e3db) midp_ticker_pane_g_ParamLimits

0x3ebc,	// (0x00012b2c) midp_ticker_pane_t1_ParamLimits

0x4712,	// (0x00013382) aid_fill_nsta_2

0x511f,	// (0x00013d8f) list_form2_midp_pane

0x6296,	// (0x00014f06) midp_editing_number_pane_ParamLimits

0x62a5,	// (0x00014f15) midp_ticker_pane_ParamLimits

0x714d,	// (0x00015dbd) form2_midp_field_pane

0x7171,	// (0x00015de1) scroll_pane_cp51

0x7191,	// (0x00015e01) form2_midp_button_pane_ParamLimits

0x7191,	// (0x00015e01) form2_midp_button_pane

0x71a3,	// (0x00015e13) form2_midp_content_pane_ParamLimits

0x71a3,	// (0x00015e13) form2_midp_content_pane

0x71bd,	// (0x00015e2d) form2_midp_field_choice_group_pane

0x71c5,	// (0x00015e35) form2_midp_field_pane_g1

0x71cd,	// (0x00015e3d) form2_midp_field_pane_g2

0x71d5,	// (0x00015e45) form2_midp_field_pane_g3

0x71dd,	// (0x00015e4d) form2_midp_field_pane_g4

0x0003,

0xfaec,	// (0x0001e75c) form2_midp_field_pane_g

0x71e5,	// (0x00015e55) form2_midp_gauge_slider_pane

0x71ed,	// (0x00015e5d) form2_midp_gauge_wait_pane

0x71f5,	// (0x00015e65) form2_midp_image_pane_ParamLimits

0x71f5,	// (0x00015e65) form2_midp_image_pane

0x7210,	// (0x00015e80) form2_midp_label_pane_ParamLimits

0x7210,	// (0x00015e80) form2_midp_label_pane

0x7229,	// (0x00015e99) form2_midp_label_pane_cp_ParamLimits

0x7229,	// (0x00015e99) form2_midp_label_pane_cp

0x724a,	// (0x00015eba) form2_midp_string_pane_ParamLimits

0x724a,	// (0x00015eba) form2_midp_string_pane

0xd08a,	// (0x0001bcfa) form2_midp_text_pane_ParamLimits

0xd08a,	// (0x0001bcfa) form2_midp_text_pane

0x7275,	// (0x00015ee5) form2_midp_time_pane

0x7285,	// (0x00015ef5) input_focus_pane_cp51_ParamLimits

0x7285,	// (0x00015ef5) input_focus_pane_cp51

0x729d,	// (0x00015f0d) form2_midp_label_pane_t1_ParamLimits

0x729d,	// (0x00015f0d) form2_midp_label_pane_t1

0xd0a3,	// (0x0001bd13) form2_mdip_text_pane_t1_ParamLimits

0xd0a3,	// (0x0001bd13) form2_mdip_text_pane_t1

0xd0c0,	// (0x0001bd30) form2_midp_time_pane_t1

0x7314,	// (0x00015f84) form2_midp_gauge_slider_pane_t1

0x7326,	// (0x00015f96) form2_midp_gauge_slider_pane_t2

0x7338,	// (0x00015fa8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf5,	// (0x0001e765) form2_midp_gauge_slider_pane_t

0x734a,	// (0x00015fba) form2_midp_slider_pane

0x7356,	// (0x00015fc6) form2_midp_gauge_wait_pane_t1

0x7364,	// (0x00015fd4) form2_midp_wait_pane_ParamLimits

0x7364,	// (0x00015fd4) form2_midp_wait_pane

0x738f,	// (0x00015fff) list_single_2graphic_pane_cp4_ParamLimits

0x738f,	// (0x00015fff) list_single_2graphic_pane_cp4

0x4de1,	// (0x00013a51) list_single_midp_graphic_pane_cp_ParamLimits

0x4de1,	// (0x00013a51) list_single_midp_graphic_pane_cp

0x20a0,	// (0x00010d10) list_highlight_pane_cp20

0x73be,	// (0x0001602e) list_single_2graphic_pane_g1_cp4

0x67be,	// (0x0001542e) list_single_2graphic_pane_g2_cp4

0x73c6,	// (0x00016036) list_single_2graphic_pane_t1_cp4

0x2180,	// (0x00010df0) list_highlight_pane_cp21

0x73d5,	// (0x00016045) list_single_midp_graphic_pane_g4_cp

0x73e4,	// (0x00016054) list_single_midp_graphic_pane_t1_cp

0x73f9,	// (0x00016069) form2_mdip_string_pane_t1_ParamLimits

0x73f9,	// (0x00016069) form2_mdip_string_pane_t1

0x20a0,	// (0x00010d10) bg_wml_button_pane_cp2

0x2096,	// (0x00010d06) form2_midp_image_pane_g1

0xc799,	// (0x0001b409) list_double_large_graphic_pane_g5_ParamLimits

0xc799,	// (0x0001b409) list_double_large_graphic_pane_g5

0x32c3,	// (0x00011f33) midp_form_pane_ParamLimits

0x2180,	// (0x00010df0) main_apps_wheel_pane_ParamLimits

0x44f0,	// (0x00013160) popup_preview_window_ParamLimits

0x44f0,	// (0x00013160) popup_preview_window

0x46a1,	// (0x00013311) popup_touch_info_window_ParamLimits

0x46a1,	// (0x00013311) popup_touch_info_window

0x46bf,	// (0x0001332f) popup_touch_menu_window_ParamLimits

0x46bf,	// (0x0001332f) popup_touch_menu_window

0x208c,	// (0x00010cfc) bg_popup_sub_pane_cp6

0x7533,	// (0x000161a3) list_touch_menu_pane

0x753b,	// (0x000161ab) list_single_touch_menu_pane_ParamLimits

0x753b,	// (0x000161ab) list_single_touch_menu_pane

0x754f,	// (0x000161bf) list_single_touch_menu_pane_t1

0x2180,	// (0x00010df0) bg_popup_sub_pane_cp7_ParamLimits

0x2180,	// (0x00010df0) bg_popup_sub_pane_cp7

0x755d,	// (0x000161cd) heading_sub_pane

0x7565,	// (0x000161d5) list_touch_info_pane_ParamLimits

0x7565,	// (0x000161d5) list_touch_info_pane

0x7574,	// (0x000161e4) list_single_touch_info_pane_ParamLimits

0x7574,	// (0x000161e4) list_single_touch_info_pane

0x7586,	// (0x000161f6) list_single_touch_info_pane_t1

0x7594,	// (0x00016204) list_single_touch_info_pane_t2

0x0001,

0xfb03,	// (0x0001e773) list_single_touch_info_pane_t

0x3dd1,	// (0x00012a41) bg_popup_heading_pane_cp

0x75a2,	// (0x00016212) heading_sub_pane_t1

0x4d24,	// (0x00013994) bg_popup_preview_window_pane_cp_ParamLimits

0x4d24,	// (0x00013994) bg_popup_preview_window_pane_cp

0x755d,	// (0x000161cd) heading_preview_pane

0x7565,	// (0x000161d5) list_preview_pane_ParamLimits

0x7565,	// (0x000161d5) list_preview_pane

0x75b0,	// (0x00016220) popup_preview_window_g1

0x7574,	// (0x000161e4) list_single_preview_pane_ParamLimits

0x7574,	// (0x000161e4) list_single_preview_pane

0x75b8,	// (0x00016228) list_single_preview_pane_g1

0x75c0,	// (0x00016230) list_single_preview_pane_t1

0x7586,	// (0x000161f6) list_single_preview_pane_t2

0x0001,

0xfb08,	// (0x0001e778) list_single_preview_pane_t

0x75ce,	// (0x0001623e) bg_popup_heading_pane_cp2_ParamLimits

0x75ce,	// (0x0001623e) bg_popup_heading_pane_cp2

0x75e4,	// (0x00016254) heading_preview_pane_g1

0x75ec,	// (0x0001625c) heading_preview_pane_t1_ParamLimits

0x75ec,	// (0x0001625c) heading_preview_pane_t1

0x2286,	// (0x00010ef6) soft_indicator_pane_t1_ParamLimits

0x2960,	// (0x000115d0) scroll_pane_ParamLimits

0x3576,	// (0x000121e6) scroll_sc2_left_pane

0x356d,	// (0x000121dd) scroll_sc2_right_pane

0x3595,	// (0x00012205) scroll_bg_pane_g1_ParamLimits

0x35aa,	// (0x0001221a) scroll_bg_pane_g2_ParamLimits

0x35c2,	// (0x00012232) scroll_bg_pane_g3_ParamLimits

0xf6f6,	// (0x0001e366) scroll_bg_pane_g_ParamLimits

0x3595,	// (0x00012205) scroll_handle_pane_g1_ParamLimits

0x35e4,	// (0x00012254) scroll_handle_pane_g2_ParamLimits

0x35c2,	// (0x00012232) scroll_handle_pane_g3_ParamLimits

0xf6fd,	// (0x0001e36d) scroll_handle_pane_g_ParamLimits

0x417b,	// (0x00012deb) popup_choice_list_window_ParamLimits

0x417b,	// (0x00012deb) popup_choice_list_window

0x4b26,	// (0x00013796) choice_list_pane

0x4bd6,	// (0x00013846) cell_toolbar_pane_t1

0x4bfe,	// (0x0001386e) toolbar_button_pane_ParamLimits

0x5d93,	// (0x00014a03) ai_gene_pane_1_t2_ParamLimits

0x5d93,	// (0x00014a03) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0001e582) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0001e582) ai_gene_pane_1_t

0x7609,	// (0x00016279) scroll_sc2_left_pane_g1

0x7609,	// (0x00016279) scroll_sc2_right_pane_g1

0x414b,	// (0x00012dbb) bg_popup_sub_pane_cp10

0x7613,	// (0x00016283) list_choice_list_pane

0x762a,	// (0x0001629a) list_single_choice_list_pane_ParamLimits

0x762a,	// (0x0001629a) list_single_choice_list_pane

0x326b,	// (0x00011edb) list_single_choice_list_pane_g1

0x3273,	// (0x00011ee3) list_single_choice_list_pane_t1_ParamLimits

0x3273,	// (0x00011ee3) list_single_choice_list_pane_t1

0x763d,	// (0x000162ad) choice_list_pane_g1

0x7645,	// (0x000162b5) choice_list_pane_t1

0x208c,	// (0x00010cfc) input_focus_pane_cp11

0x344a,	// (0x000120ba) title_pane_stacon_g2_ParamLimits

0x344a,	// (0x000120ba) title_pane_stacon_g2

0x0002,

0xf6dc,	// (0x0001e34c) title_pane_stacon_g_ParamLimits

0xf6dc,	// (0x0001e34c) title_pane_stacon_g

0x3dd1,	// (0x00012a41) cursor_press_pane

0x4221,	// (0x00012e91) popup_fep_hwr_window_ParamLimits

0x4221,	// (0x00012e91) popup_fep_hwr_window

0x4299,	// (0x00012f09) popup_fep_vkb_window_ParamLimits

0x4299,	// (0x00012f09) popup_fep_vkb_window

0x7653,	// (0x000162c3) cursor_press_pane_g1

0x0002,

0xfb31,	// (0x0001e7a1) fep_vkb_side_pane_g_ParamLimits

0xe3a9,	// (0x0001d019) fep_hwr_candidate_pane_ParamLimits

0xe3a9,	// (0x0001d019) fep_hwr_candidate_pane

0xe3d3,	// (0x0001d043) fep_hwr_side_pane_ParamLimits

0xe3d3,	// (0x0001d043) fep_hwr_side_pane

0xe3f3,	// (0x0001d063) fep_hwr_top_pane_ParamLimits

0xe3f3,	// (0x0001d063) fep_hwr_top_pane

0xe40b,	// (0x0001d07b) fep_hwr_write_pane_ParamLimits

0xe40b,	// (0x0001d07b) fep_hwr_write_pane

0xfb31,	// (0x0001e7a1) fep_vkb_side_pane_g

0x766d,	// (0x000162dd) fep_hwr_top_pane_g1

0x765b,	// (0x000162cb) fep_hwr_top_pane_g2

0xe437,	// (0x0001d0a7) fep_hwr_top_pane_g3

0x0002,

0xfb0d,	// (0x0001e77d) fep_hwr_top_pane_g

0xe44c,	// (0x0001d0bc) fep_hwr_top_text_pane

0x3737,	// (0x000123a7) fep_hwr_top_text_pane_g1

0x76a3,	// (0x00016313) fep_hwr_top_text_pane_t1

0xe542,	// (0x0001d1b2) fep_hwr_candidate_pane_g1

0x78fd,	// (0x0001656d) fep_vkb_keypad_pane_g3_ParamLimits

0x78fd,	// (0x0001656d) fep_vkb_keypad_pane_g3

0x7925,	// (0x00016595) fep_vkb_keypad_pane_g4_ParamLimits

0x7925,	// (0x00016595) fep_vkb_keypad_pane_g4

0x7994,	// (0x00016604) fep_vkb_bottom_pane_g2_ParamLimits

0x7994,	// (0x00016604) fep_vkb_bottom_pane_g2

0x0001,

0xfb38,	// (0x0001e7a8) fep_vkb_bottom_pane_g_ParamLimits

0xfb38,	// (0x0001e7a8) fep_vkb_bottom_pane_g

0x7609,	// (0x00016279) cell_vkb_side_pane_g2

0x0001,

0xfb42,	// (0x0001e7b2) cell_vkb_side_pane_g

0x7a1f,	// (0x0001668f) cell_vkb_side_pane_t1

0x7a2d,	// (0x0001669d) cell_vkb_side_pane_t1_copy1

0x7609,	// (0x00016279) bg_fep_vkb_candidate_pane_g2

0x7b5f,	// (0x000167cf) cell_vkb_candidate_pane_ParamLimits

0x76b1,	// (0x00016321) aid_size_cell_vkb_ParamLimits

0x76b1,	// (0x00016321) aid_size_cell_vkb

0x7b5f,	// (0x000167cf) cell_vkb_candidate_pane

0xe55c,	// (0x0001d1cc) bg_popup_fep_shadow_pane_g1

0x773f,	// (0x000163af) fep_vkb_bottom_pane_ParamLimits

0x773f,	// (0x000163af) fep_vkb_bottom_pane

0x777c,	// (0x000163ec) fep_vkb_candidate_pane_ParamLimits

0x777c,	// (0x000163ec) fep_vkb_candidate_pane

0x7798,	// (0x00016408) fep_vkb_keypad_pane_ParamLimits

0x7798,	// (0x00016408) fep_vkb_keypad_pane

0x77de,	// (0x0001644e) fep_vkb_side_pane_ParamLimits

0x77de,	// (0x0001644e) fep_vkb_side_pane

0x781a,	// (0x0001648a) fep_vkb_top_pane_ParamLimits

0x781a,	// (0x0001648a) fep_vkb_top_pane

0x7856,	// (0x000164c6) fep_vkb_top_pane_g1_ParamLimits

0x7856,	// (0x000164c6) fep_vkb_top_pane_g1

0x7865,	// (0x000164d5) fep_vkb_top_pane_g2_ParamLimits

0x7865,	// (0x000164d5) fep_vkb_top_pane_g2

0x7874,	// (0x000164e4) fep_vkb_top_pane_g3_ParamLimits

0x7874,	// (0x000164e4) fep_vkb_top_pane_g3

0x0003,

0xfb28,	// (0x0001e798) fep_vkb_top_pane_g_ParamLimits

0xfb28,	// (0x0001e798) fep_vkb_top_pane_g

0x7892,	// (0x00016502) fep_vkb_top_text_pane_ParamLimits

0x7892,	// (0x00016502) fep_vkb_top_text_pane

0x78a3,	// (0x00016513) fep_vkb_side_pane_g1_ParamLimits

0x78a3,	// (0x00016513) fep_vkb_side_pane_g1

0x78ec,	// (0x0001655c) grid_vkb_side_pane_ParamLimits

0x78ec,	// (0x0001655c) grid_vkb_side_pane

0xe564,	// (0x0001d1d4) bg_popup_fep_shadow_pane_g2

0xe56d,	// (0x0001d1dd) bg_popup_fep_shadow_pane_g3

0xe575,	// (0x0001d1e5) bg_popup_fep_shadow_pane_g4

0xe57e,	// (0x0001d1ee) bg_popup_fep_shadow_pane_g5

0xe588,	// (0x0001d1f8) bg_popup_fep_shadow_pane_g6

0xe590,	// (0x0001d200) bg_popup_fep_shadow_pane_g7

0x30b5,	// (0x00011d25) bg_popup_fep_shadow_pane_g8

0x7943,	// (0x000165b3) grid_vkb_keypad_number_pane_ParamLimits

0x7943,	// (0x000165b3) grid_vkb_keypad_number_pane

0x7953,	// (0x000165c3) grid_vkb_keypad_pane_ParamLimits

0x7953,	// (0x000165c3) grid_vkb_keypad_pane

0x7979,	// (0x000165e9) fep_vkb_bottom_pane_g1_ParamLimits

0x7979,	// (0x000165e9) fep_vkb_bottom_pane_g1

0x79a2,	// (0x00016612) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x79a2,	// (0x00016612) grid_vkb_keypad_bottom_left_pane

0x79b7,	// (0x00016627) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x79b7,	// (0x00016627) grid_vkb_keypad_bottom_right_pane

0x79cc,	// (0x0001663c) fep_vkb_top_text_pane_g1

0x79e7,	// (0x00016657) fep_vkb_top_text_pane_t1

0x79fc,	// (0x0001666c) cell_vkb_side_pane_ParamLimits

0x79fc,	// (0x0001666c) cell_vkb_side_pane

0x7609,	// (0x00016279) cell_vkb_side_pane_g1

0x7a3b,	// (0x000166ab) cell_vkb_keypad_pane_ParamLimits

0x7a3b,	// (0x000166ab) cell_vkb_keypad_pane

0x7ab6,	// (0x00016726) cell_vkb_keypad_pane_g1

0x0008,

0xfb55,	// (0x0001e7c5) bg_popup_fep_shadow_pane_g

0x7609,	// (0x00016279) cell_hwr_side_pane_g1

0x7609,	// (0x00016279) cell_hwr_side_pane_g2

0x7ac0,	// (0x00016730) cell_vkb_keypad_pane_t1

0x7ace,	// (0x0001673e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x7ace,	// (0x0001673e) cell_vkb_keypad_bottom_left_pane

0x7aeb,	// (0x0001675b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x7aeb,	// (0x0001675b) cell_vkb_keypad_bottom_right_pane

0x7609,	// (0x00016279) cell_vkb_keypad_bottom_left_pane_g1

0x7609,	// (0x00016279) cell_vkb_keypad_bottom_right_pane_g1

0x7b24,	// (0x00016794) cell_vkb_keypad_number_pane_ParamLimits

0x7b24,	// (0x00016794) cell_vkb_keypad_number_pane

0x7b43,	// (0x000167b3) cell_vkb_keypad_number_pane_g1

0x7b4d,	// (0x000167bd) cell_vkb_keypad_number_pane_g2

0x7b56,	// (0x000167c6) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb47,	// (0x0001e7b7) cell_vkb_keypad_number_pane_g

0x7ac0,	// (0x00016730) cell_vkb_keypad_number_pane_t1

0x7b7c,	// (0x000167ec) fep_vkb_candidate_pane_g1

0x0001,

0xfb42,	// (0x0001e7b2) cell_hwr_side_pane_g

0x7b95,	// (0x00016805) cell_hwr_side_pane_t1

0xe5a2,	// (0x0001d212) cell_hwr_side_pane_t1_copy1

0x7884,	// (0x000164f4) cell_hwr_candidate_pane_g1

0xe5b0,	// (0x0001d220) cell_hwr_candidate_pane_t1

0x7609,	// (0x00016279) cell_vkb_candidate_pane_g2

0x7bd9,	// (0x00016849) cell_vkb_candidate_pane_t1

0xaaaf,	// (0x0001971f) bg_popup_fep_shadow_pane_ParamLimits

0xaaaf,	// (0x0001971f) bg_popup_fep_shadow_pane

0xaade,	// (0x0001974e) bg_fep_hwr_top_pane_g4

0x767f,	// (0x000162ef) bg_hwr_side_pane_g1_ParamLimits

0x767f,	// (0x000162ef) bg_hwr_side_pane_g1

0xe488,	// (0x0001d0f8) cell_hwr_side_pane_ParamLimits

0xe488,	// (0x0001d0f8) cell_hwr_side_pane

0xe4c3,	// (0x0001d133) fep_hwr_write_pane_g1_ParamLimits

0xe4c3,	// (0x0001d133) fep_hwr_write_pane_g1

0xe4d0,	// (0x0001d140) fep_hwr_write_pane_g2_ParamLimits

0xe4d0,	// (0x0001d140) fep_hwr_write_pane_g2

0xe4dd,	// (0x0001d14d) fep_hwr_write_pane_g3_ParamLimits

0xe4dd,	// (0x0001d14d) fep_hwr_write_pane_g3

0xe4eb,	// (0x0001d15b) fep_hwr_write_pane_g4_ParamLimits

0xe4eb,	// (0x0001d15b) fep_hwr_write_pane_g4

0x0005,

0xfb14,	// (0x0001e784) fep_hwr_write_pane_g_ParamLimits

0xfb14,	// (0x0001e784) fep_hwr_write_pane_g

0xaade,	// (0x0001974e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xaade,	// (0x0001974e) bg_fep_hwr_candidate_pane_g2

0xe500,	// (0x0001d170) cell_hwr_candidate_pane_ParamLimits

0xe500,	// (0x0001d170) cell_hwr_candidate_pane

0xe542,	// (0x0001d1b2) fep_hwr_candidate_pane_g1_ParamLimits

0x76df,	// (0x0001634f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x76df,	// (0x0001634f) bg_popup_fep_shadow_pane_cp2

0x7884,	// (0x000164f4) fep_vkb_top_pane_g4_ParamLimits

0x7884,	// (0x000164f4) fep_vkb_top_pane_g4

0x78ca,	// (0x0001653a) fep_vkb_side_pane_g2_ParamLimits

0x78ca,	// (0x0001653a) fep_vkb_side_pane_g2

0xc8cd,	// (0x0001b53d) list_setting_pane_t4_ParamLimits

0xc8cd,	// (0x0001b53d) list_setting_pane_t4

0xc95f,	// (0x0001b5cf) list_setting_number_pane_t5_ParamLimits

0xc95f,	// (0x0001b5cf) list_setting_number_pane_t5

0x377e,	// (0x000123ee) list_double_heading_pane_cp2_ParamLimits

0x377e,	// (0x000123ee) list_double_heading_pane_cp2

0x2f7f,	// (0x00011bef) list_double_heading_pane_g1_cp2_ParamLimits

0x2f7f,	// (0x00011bef) list_double_heading_pane_g1_cp2

0x2f8b,	// (0x00011bfb) list_double_heading_pane_g2_cp2_ParamLimits

0x2f8b,	// (0x00011bfb) list_double_heading_pane_g2_cp2

0x7be7,	// (0x00016857) list_double_heading_pane_t1_cp2_ParamLimits

0x7be7,	// (0x00016857) list_double_heading_pane_t1_cp2

0x7bfd,	// (0x0001686d) list_double_heading_pane_t2_cp2_ParamLimits

0x7bfd,	// (0x0001686d) list_double_heading_pane_t2_cp2

0x2074,	// (0x00010ce4) aid_value_unit2

0xd733,	// (0x0001c3a3) popup_preview_fixed_window

0x2423,	// (0x00011093) bg_popup_preview_window_pane_cp02

0x7c0f,	// (0x0001687f) list_preview_fixed_pane

0x7c55,	// (0x000168c5) list_empty_pane_fp_ParamLimits

0x7c55,	// (0x000168c5) list_empty_pane_fp

0x7c55,	// (0x000168c5) list_single_cale_day_pane_fp_ParamLimits

0x7c55,	// (0x000168c5) list_single_cale_day_pane_fp

0x7c55,	// (0x000168c5) list_single_graphic_heading_pane_fp_ParamLimits

0x7c55,	// (0x000168c5) list_single_graphic_heading_pane_fp

0x7c55,	// (0x000168c5) list_single_graphic_pane_fp_ParamLimits

0x7c55,	// (0x000168c5) list_single_graphic_pane_fp

0x7c55,	// (0x000168c5) list_single_heading_pane_fp_ParamLimits

0x7c55,	// (0x000168c5) list_single_heading_pane_fp

0x7c55,	// (0x000168c5) list_single_pane_fp_ParamLimits

0x7c55,	// (0x000168c5) list_single_pane_fp

0x7c6c,	// (0x000168dc) list_single_pane_fp_g1_ParamLimits

0x7c6c,	// (0x000168dc) list_single_pane_fp_g1

0xc731,	// (0x0001b3a1) list_single_pane_fp_g2_ParamLimits

0xc731,	// (0x0001b3a1) list_single_pane_fp_g2

0xd0d3,	// (0x0001bd43) list_single_pane_fp_g3_ParamLimits

0xd0d3,	// (0x0001bd43) list_single_pane_fp_g3

0x7c78,	// (0x000168e8) list_single_pane_fp_g4_ParamLimits

0x7c78,	// (0x000168e8) list_single_pane_fp_g4

0x0003,

0xfb76,	// (0x0001e7e6) list_single_pane_fp_g_ParamLimits

0xfb76,	// (0x0001e7e6) list_single_pane_fp_g

0xd0e7,	// (0x0001bd57) list_single_pane_fp_t1_ParamLimits

0xd0e7,	// (0x0001bd57) list_single_pane_fp_t1

0xd0fe,	// (0x0001bd6e) list_single_graphic_pane_fp_g1_ParamLimits

0xd0fe,	// (0x0001bd6e) list_single_graphic_pane_fp_g1

0x7c6c,	// (0x000168dc) list_single_graphic_pane_fp_g2_ParamLimits

0x7c6c,	// (0x000168dc) list_single_graphic_pane_fp_g2

0xc731,	// (0x0001b3a1) list_single_graphic_pane_fp_g3_ParamLimits

0xc731,	// (0x0001b3a1) list_single_graphic_pane_fp_g3

0xd0d3,	// (0x0001bd43) list_single_graphic_pane_fp_g4_ParamLimits

0xd0d3,	// (0x0001bd43) list_single_graphic_pane_fp_g4

0x7c78,	// (0x000168e8) list_single_graphic_pane_fp_g5_ParamLimits

0x7c78,	// (0x000168e8) list_single_graphic_pane_fp_g5

0x0004,

0xfb7f,	// (0x0001e7ef) list_single_graphic_pane_fp_g_ParamLimits

0xfb7f,	// (0x0001e7ef) list_single_graphic_pane_fp_g

0xd10a,	// (0x0001bd7a) list_single_graphic_pane_fp_t1_ParamLimits

0xd10a,	// (0x0001bd7a) list_single_graphic_pane_fp_t1

0xd0fe,	// (0x0001bd6e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd0fe,	// (0x0001bd6e) list_single_graphic_heading_pane_fp_g1

0x7c6c,	// (0x000168dc) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7c6c,	// (0x000168dc) list_single_graphic_heading_pane_fp_g2

0xc731,	// (0x0001b3a1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc731,	// (0x0001b3a1) list_single_graphic_heading_pane_fp_g3

0xd0d3,	// (0x0001bd43) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd0d3,	// (0x0001bd43) list_single_graphic_heading_pane_fp_g4

0x7c78,	// (0x000168e8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7c78,	// (0x000168e8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0001e7ef) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0001e7ef) list_single_graphic_heading_pane_fp_g

0xd120,	// (0x0001bd90) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd120,	// (0x0001bd90) list_single_graphic_heading_pane_fp_t1

0xd136,	// (0x0001bda6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd136,	// (0x0001bda6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0001e7fa) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0001e7fa) list_single_graphic_heading_pane_fp_t

0xd148,	// (0x0001bdb8) list_single_cale_day_pane_fp_g1_ParamLimits

0xd148,	// (0x0001bdb8) list_single_cale_day_pane_fp_g1

0x7d1d,	// (0x0001698d) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d1d,	// (0x0001698d) list_single_cale_day_pane_fp_g2

0xd180,	// (0x0001bdf0) list_single_cale_day_pane_fp_g3_ParamLimits

0xd180,	// (0x0001bdf0) list_single_cale_day_pane_fp_g3

0xd1a8,	// (0x0001be18) list_single_cale_day_pane_fp_g4_ParamLimits

0xd1a8,	// (0x0001be18) list_single_cale_day_pane_fp_g4

0xd1cc,	// (0x0001be3c) list_single_cale_day_pane_fp_g5_ParamLimits

0xd1cc,	// (0x0001be3c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8f,	// (0x0001e7ff) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8f,	// (0x0001e7ff) list_single_cale_day_pane_fp_g

0xd1f0,	// (0x0001be60) list_single_cale_day_pane_fp_t1_ParamLimits

0xd1f0,	// (0x0001be60) list_single_cale_day_pane_fp_t1

0xd216,	// (0x0001be86) list_single_cale_day_pane_fp_t2_ParamLimits

0xd216,	// (0x0001be86) list_single_cale_day_pane_fp_t2

0xd22f,	// (0x0001be9f) list_single_cale_day_pane_fp_t3_ParamLimits

0xd22f,	// (0x0001be9f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9a,	// (0x0001e80a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9a,	// (0x0001e80a) list_single_cale_day_pane_fp_t

0x7c6c,	// (0x000168dc) list_empty_pane_fp_g1_ParamLimits

0x7c6c,	// (0x000168dc) list_empty_pane_fp_g1

0xd248,	// (0x0001beb8) list_empty_pane_fp_t1

0xd256,	// (0x0001bec6) list_empty_pane_fp_t2

0x0001,

0xfba1,	// (0x0001e811) list_empty_pane_fp_t

0x7c6c,	// (0x000168dc) list_single_heading_pane_fp_g1_ParamLimits

0x7c6c,	// (0x000168dc) list_single_heading_pane_fp_g1

0xc731,	// (0x0001b3a1) list_single_heading_pane_fp_g2_ParamLimits

0xc731,	// (0x0001b3a1) list_single_heading_pane_fp_g2

0xd0d3,	// (0x0001bd43) list_single_heading_pane_fp_g3_ParamLimits

0xd0d3,	// (0x0001bd43) list_single_heading_pane_fp_g3

0x0002,

0xfba6,	// (0x0001e816) list_single_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0001e816) list_single_heading_pane_fp_g

0xd264,	// (0x0001bed4) list_single_heading_pane_fp_t1_ParamLimits

0xd264,	// (0x0001bed4) list_single_heading_pane_fp_t1

0xd276,	// (0x0001bee6) list_single_heading_pane_fp_t2_ParamLimits

0xd276,	// (0x0001bee6) list_single_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0001e81d) list_single_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0001e81d) list_single_heading_pane_fp_t

0x32e1,	// (0x00011f51) aid_size_cell_fast

0x2393,	// (0x00011003) soft_indicator_pane_cp1_t1

0x331e,	// (0x00011f8e) cell_app_pane_cp2_ParamLimits

0x331e,	// (0x00011f8e) cell_app_pane_cp2

0xe392,	// (0x0001d002) fep_hwr_candidate_drop_down_list_pane

0xab73,	// (0x000197e3) fep_hwr_candidate_pane_g3_ParamLimits

0xab73,	// (0x000197e3) fep_hwr_candidate_pane_g3

0xab80,	// (0x000197f0) fep_hwr_candidate_pane_g4_ParamLimits

0xab80,	// (0x000197f0) fep_hwr_candidate_pane_g4

0x0002,

0xfb21,	// (0x0001e791) fep_hwr_candidate_pane_g_ParamLimits

0xfb21,	// (0x0001e791) fep_hwr_candidate_pane_g

0x776b,	// (0x000163db) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x776b,	// (0x000163db) fep_vkb_candidate_drop_down_list_pane

0x7b84,	// (0x000167f4) fep_vkb_candidate_pane_g3

0x7b8c,	// (0x000167fc) fep_vkb_candidate_pane_g4

0x0002,

0xfb4e,	// (0x0001e7be) fep_vkb_candidate_pane_g

0x7884,	// (0x000164f4) cell_hwr_candidate_pane_g1_ParamLimits

0x7e8b,	// (0x00016afb) cell_hwr_candidate_pane_g3_ParamLimits

0x7e8b,	// (0x00016afb) cell_hwr_candidate_pane_g3

0x7eac,	// (0x00016b1c) cell_hwr_candidate_pane_g4_ParamLimits

0x7eac,	// (0x00016b1c) cell_hwr_candidate_pane_g4

0x0002,

0xfb68,	// (0x0001e7d8) cell_hwr_candidate_pane_g_ParamLimits

0xfb68,	// (0x0001e7d8) cell_hwr_candidate_pane_g

0x7ba3,	// (0x00016813) cell_vkb_candidate_pane_g3_ParamLimits

0x7ba3,	// (0x00016813) cell_vkb_candidate_pane_g3

0x7bbe,	// (0x0001682e) cell_vkb_candidate_pane_g4_ParamLimits

0x7bbe,	// (0x0001682e) cell_vkb_candidate_pane_g4

0x7e35,	// (0x00016aa5) cell_app_pane_cp2_g1_ParamLimits

0x7e35,	// (0x00016aa5) cell_app_pane_cp2_g1

0x7e53,	// (0x00016ac3) cell_app_pane_cp2_g2_ParamLimits

0x7e53,	// (0x00016ac3) cell_app_pane_cp2_g2

0x0001,

0xfbb2,	// (0x0001e822) cell_app_pane_cp2_g_ParamLimits

0xfbb2,	// (0x0001e822) cell_app_pane_cp2_g

0x7e5f,	// (0x00016acf) cell_app_pane_cp2_t1_ParamLimits

0x7e5f,	// (0x00016acf) cell_app_pane_cp2_t1

0x2f59,	// (0x00011bc9) grid_highlight_pane_cp1_ParamLimits

0x2f59,	// (0x00011bc9) grid_highlight_pane_cp1

0xe5ce,	// (0x0001d23e) cell_hwr_candidate_pane_cp1_ParamLimits

0xe5ce,	// (0x0001d23e) cell_hwr_candidate_pane_cp1

0x7884,	// (0x000164f4) fep_hwr_candidate_drop_down_list_pane_g1

0x7e71,	// (0x00016ae1) fep_hwr_candidate_drop_down_list_pane_g2

0x7e7e,	// (0x00016aee) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0001e827) fep_hwr_candidate_drop_down_list_pane_g

0xe5ed,	// (0x0001d25d) fep_hwr_candidate_drop_down_list_scroll_pane

0xe5f6,	// (0x0001d266) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe5f6,	// (0x0001d266) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe603,	// (0x0001d273) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe603,	// (0x0001d273) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe610,	// (0x0001d280) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe610,	// (0x0001d280) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7ba3,	// (0x00016813) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ba3,	// (0x00016813) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7bbe,	// (0x0001682e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7bbe,	// (0x0001682e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe61d,	// (0x0001d28d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe61d,	// (0x0001d28d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe638,	// (0x0001d2a8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe638,	// (0x0001d2a8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7ecd,	// (0x00016b3d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7ecd,	// (0x00016b3d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0001e82e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0001e82e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ee8,	// (0x00016b58) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ee8,	// (0x00016b58) cell_vkb_candidate_pane_cp1

0x7884,	// (0x000164f4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7884,	// (0x000164f4) fep_vkb_candidate_drop_down_list_pane_g1

0x7e71,	// (0x00016ae1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7e71,	// (0x00016ae1) fep_vkb_candidate_drop_down_list_pane_g2

0x7e7e,	// (0x00016aee) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7e7e,	// (0x00016aee) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0001e827) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb7,	// (0x0001e827) fep_vkb_candidate_drop_down_list_pane_g

0x7f08,	// (0x00016b78) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7f08,	// (0x00016b78) fep_vkb_candidate_drop_down_list_scroll_pane

0x7f15,	// (0x00016b85) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f15,	// (0x00016b85) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7f22,	// (0x00016b92) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f22,	// (0x00016b92) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7f2e,	// (0x00016b9e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f2e,	// (0x00016b9e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7e8b,	// (0x00016afb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7e8b,	// (0x00016afb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7eac,	// (0x00016b1c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7eac,	// (0x00016b1c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7f3a,	// (0x00016baa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f3a,	// (0x00016baa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7f5b,	// (0x00016bcb) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f5b,	// (0x00016bcb) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7ecd,	// (0x00016b3d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7ecd,	// (0x00016b3d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcf,	// (0x0001e83f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcf,	// (0x0001e83f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x20aa,	// (0x00010d1a) title_pane_g1_ParamLimits

0x20b7,	// (0x00010d27) title_pane_g2_ParamLimits

0xf566,	// (0x0001e1d6) title_pane_g_ParamLimits

0x372f,	// (0x0001239f) aid_call2_pane

0x3727,	// (0x00012397) aid_call_pane

0x3737,	// (0x000123a7) popup_clock_analogue_window_g1

0x3737,	// (0x000123a7) popup_clock_analogue_window_g2

0xda92,	// (0x0001c702) popup_clock_analogue_window_g3

0xda9b,	// (0x0001c70b) popup_clock_analogue_window_g4

0x2096,	// (0x00010d06) popup_clock_analogue_window_g5

0x0004,

0xf70b,	// (0x0001e37b) popup_clock_analogue_window_g

0xdaa3,	// (0x0001c713) popup_clock_analogue_window_t1

0xdab1,	// (0x0001c721) clock_digital_number_pane_ParamLimits

0xdab1,	// (0x0001c721) clock_digital_number_pane

0xdabd,	// (0x0001c72d) clock_digital_number_pane_cp02_ParamLimits

0xdabd,	// (0x0001c72d) clock_digital_number_pane_cp02

0xdac9,	// (0x0001c739) clock_digital_number_pane_cp03_ParamLimits

0xdac9,	// (0x0001c739) clock_digital_number_pane_cp03

0xdad5,	// (0x0001c745) clock_digital_number_pane_cp04_ParamLimits

0xdad5,	// (0x0001c745) clock_digital_number_pane_cp04

0xdae1,	// (0x0001c751) clock_digital_separator_pane_ParamLimits

0xdae1,	// (0x0001c751) clock_digital_separator_pane

0xdaed,	// (0x0001c75d) popup_clock_digital_window_t1_ParamLimits

0xdaed,	// (0x0001c75d) popup_clock_digital_window_t1

0x2096,	// (0x00010d06) clock_digital_number_pane_g1

0x2096,	// (0x00010d06) clock_digital_number_pane_g2

0x0001,

0xf716,	// (0x0001e386) clock_digital_number_pane_g

0x2096,	// (0x00010d06) clock_digital_separator_pane_g1

0x2096,	// (0x00010d06) clock_digital_separator_pane_g2

0x0001,

0xf716,	// (0x0001e386) clock_digital_separator_pane_g

0x46fc,	// (0x0001336c) aid_fill_nsta_ParamLimits

0x4842,	// (0x000134b2) indicator_nsta_pane_ParamLimits

0x49b5,	// (0x00013625) popup_clock_analogue_window

0x49b5,	// (0x00013625) popup_clock_digital_window

0x2180,	// (0x00010df0) grid_indicator_nsta_pane_ParamLimits

0x6f67,	// (0x00015bd7) clock_nsta_pane_t2

0x0001,

0xfaa1,	// (0x0001e711) clock_nsta_pane_t

0xda56,	// (0x0001c6c6) aid_size_max_handle

0xda60,	// (0x0001c6d0) aid_size_min_handle

0x3dd1,	// (0x00012a41) editor_scroll_pane

0x7f7c,	// (0x00016bec) ex_editor_pane

0x3250,	// (0x00011ec0) scroll_pane_cp13

0x298c,	// (0x000115fc) scroll_pane_cp14

0x3766,	// (0x000123d6) scroll_pane_cp36

0x3790,	// (0x00012400) list_single_graphic_hl_pane_cp2_ParamLimits

0x3790,	// (0x00012400) list_single_graphic_hl_pane_cp2

0x637e,	// (0x00014fee) list_single_graphic_hl_pane_ParamLimits

0x637e,	// (0x00014fee) list_single_graphic_hl_pane

0xd28c,	// (0x0001befc) aid_size_min_hl_cp1

0x7f8d,	// (0x00016bfd) list_highlight_pane_cp34_ParamLimits

0x7f8d,	// (0x00016bfd) list_highlight_pane_cp34

0x7f9e,	// (0x00016c0e) list_single_graphic_hl_pane_g1_ParamLimits

0x7f9e,	// (0x00016c0e) list_single_graphic_hl_pane_g1

0xd295,	// (0x0001bf05) list_single_graphic_hl_pane_g2_ParamLimits

0xd295,	// (0x0001bf05) list_single_graphic_hl_pane_g2

0xd295,	// (0x0001bf05) list_single_graphic_hl_pane_g3_ParamLimits

0xd295,	// (0x0001bf05) list_single_graphic_hl_pane_g3

0xd2a1,	// (0x0001bf11) list_single_graphic_hl_pane_g4_ParamLimits

0xd2a1,	// (0x0001bf11) list_single_graphic_hl_pane_g4

0xd2ad,	// (0x0001bf1d) list_single_graphic_hl_pane_g5_ParamLimits

0xd2ad,	// (0x0001bf1d) list_single_graphic_hl_pane_g5

0x0004,

0xfbe0,	// (0x0001e850) list_single_graphic_hl_pane_g_ParamLimits

0xfbe0,	// (0x0001e850) list_single_graphic_hl_pane_g

0xd2c1,	// (0x0001bf31) list_single_graphic_hl_pane_t1_ParamLimits

0xd2c1,	// (0x0001bf31) list_single_graphic_hl_pane_t1

0x7fcb,	// (0x00016c3b) aid_size_min_hl_cp2

0x7fd4,	// (0x00016c44) list_highlight_pane_cp34_cp2_ParamLimits

0x7fd4,	// (0x00016c44) list_highlight_pane_cp34_cp2

0x7f9e,	// (0x00016c0e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7f9e,	// (0x00016c0e) list_single_graphic_hl_pane_g1_cp2

0x7fe1,	// (0x00016c51) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7fe1,	// (0x00016c51) list_single_graphic_hl_pane_g2_cp2

0x7fed,	// (0x00016c5d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7fed,	// (0x00016c5d) list_single_graphic_hl_pane_g3_cp2

0x3d08,	// (0x00012978) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3d08,	// (0x00012978) list_single_graphic_hl_pane_g4_cp2

0x7fb7,	// (0x00016c27) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7fb7,	// (0x00016c27) list_single_graphic_hl_pane_g5_cp2

0xdd9d,	// (0x0001ca0d) control_pane_g4_ParamLimits

0xdd9d,	// (0x0001ca0d) control_pane_g4

0x414b,	// (0x00012dbb) bg_popup_sub_pane_cp10_ParamLimits

0x7613,	// (0x00016283) list_choice_list_pane_ParamLimits

0x7622,	// (0x00016292) scroll_pane_cp23

0x2423,	// (0x00011093) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c0f,	// (0x0001687f) list_preview_fixed_pane_ParamLimits

0x7c25,	// (0x00016895) list_preview_fixed_pane_cp_ParamLimits

0x7c25,	// (0x00016895) list_preview_fixed_pane_cp

0x7c31,	// (0x000168a1) popup_preview_fixed_window_g1_ParamLimits

0x7c31,	// (0x000168a1) popup_preview_fixed_window_g1

0x7c3d,	// (0x000168ad) popup_preview_fixed_window_g2_ParamLimits

0x7c3d,	// (0x000168ad) popup_preview_fixed_window_g2

0x0002,

0xfb6f,	// (0x0001e7df) popup_preview_fixed_window_g_ParamLimits

0xfb6f,	// (0x0001e7df) popup_preview_fixed_window_g

0xd9ca,	// (0x0001c63a) aid_navi_side_left_pane_ParamLimits

0xd9df,	// (0x0001c64f) aid_navi_side_right_pane_ParamLimits

0xd9f7,	// (0x0001c667) navi_icon_pane_stacon_ParamLimits

0xda0b,	// (0x0001c67b) navi_navi_pane_stacon_ParamLimits

0xd9f7,	// (0x0001c667) navi_text_pane_stacon_ParamLimits

0x208c,	// (0x00010cfc) main_text_info_pane

0x8011,	// (0x00016c81) listscroll_text_info_pane

0x8019,	// (0x00016c89) list_text_info_pane_ParamLimits

0x8019,	// (0x00016c89) list_text_info_pane

0x8028,	// (0x00016c98) scroll_pane_cp24_ParamLimits

0x8028,	// (0x00016c98) scroll_pane_cp24

0x8046,	// (0x00016cb6) list_text_info_pane_t1_ParamLimits

0x8046,	// (0x00016cb6) list_text_info_pane_t1

0x4195,	// (0x00012e05) popup_fast_swap2_window_ParamLimits

0x4195,	// (0x00012e05) popup_fast_swap2_window

0x807f,	// (0x00016cef) aid_size_cell_fast2

0x208c,	// (0x00010cfc) bg_popup_window_pane_cp17

0x514b,	// (0x00013dbb) heading_pane_cp2

0x2663,	// (0x000112d3) listscroll_fast2_pane

0x8089,	// (0x00016cf9) grid_fast2_pane

0x8093,	// (0x00016d03) listscroll_fast2_pane_g1

0x809b,	// (0x00016d0b) listscroll_fast2_pane_g2

0x0001,

0xfbeb,	// (0x0001e85b) listscroll_fast2_pane_g

0x3250,	// (0x00011ec0) scroll_pane_cp26

0x80a5,	// (0x00016d15) cell_fast2_pane_ParamLimits

0x80a5,	// (0x00016d15) cell_fast2_pane

0x80ba,	// (0x00016d2a) cell_fast2_pane_g1

0x80c3,	// (0x00016d33) cell_fast2_pane_g2

0x80cc,	// (0x00016d3c) cell_fast2_pane_g3

0x0002,

0xfbf0,	// (0x0001e860) cell_fast2_pane_g

0x2749,	// (0x000113b9) grid_highlight_pane_cp9

0x275e,	// (0x000113ce) main_eswt_pane_ParamLimits

0x275e,	// (0x000113ce) main_eswt_pane

0x803d,	// (0x00016cad) list_single_text_info_pane

0x80d4,	// (0x00016d44) eswt_ctrl_button_pane

0x80d4,	// (0x00016d44) eswt_ctrl_canvas_pane

0x80dc,	// (0x00016d4c) eswt_ctrl_combo_pane

0x80d4,	// (0x00016d44) eswt_ctrl_default_pane

0x80d4,	// (0x00016d44) eswt_ctrl_label_pane

0x80e4,	// (0x00016d54) eswt_ctrl_wait_pane

0x80ec,	// (0x00016d5c) eswt_shell_pane

0x208c,	// (0x00010cfc) listscroll_eswt_app_pane

0x810c,	// (0x00016d7c) popup_eswt_tasktip_window_ParamLimits

0x810c,	// (0x00016d7c) popup_eswt_tasktip_window

0x4d24,	// (0x00013994) bg_popup_window_pane_cp18

0x811d,	// (0x00016d8d) eswt_control_pane_g1_ParamLimits

0x811d,	// (0x00016d8d) eswt_control_pane_g1

0x812a,	// (0x00016d9a) eswt_control_pane_g2_ParamLimits

0x812a,	// (0x00016d9a) eswt_control_pane_g2

0x8137,	// (0x00016da7) eswt_control_pane_g3_ParamLimits

0x8137,	// (0x00016da7) eswt_control_pane_g3

0x8144,	// (0x00016db4) eswt_control_pane_g4_ParamLimits

0x8144,	// (0x00016db4) eswt_control_pane_g4

0x0003,

0xfbf7,	// (0x0001e867) eswt_control_pane_g_ParamLimits

0xfbf7,	// (0x0001e867) eswt_control_pane_g

0x2f59,	// (0x00011bc9) bg_button_pane_ParamLimits

0x2f59,	// (0x00011bc9) bg_button_pane

0x275e,	// (0x000113ce) common_borders_pane_copy2_ParamLimits

0x275e,	// (0x000113ce) common_borders_pane_copy2

0x8151,	// (0x00016dc1) control_button_pane_g1_ParamLimits

0x8151,	// (0x00016dc1) control_button_pane_g1

0x815d,	// (0x00016dcd) control_button_pane_g2_ParamLimits

0x815d,	// (0x00016dcd) control_button_pane_g2

0x8169,	// (0x00016dd9) control_button_pane_g3_ParamLimits

0x8169,	// (0x00016dd9) control_button_pane_g3

0x0002,

0xfc00,	// (0x0001e870) control_button_pane_g_ParamLimits

0xfc00,	// (0x0001e870) control_button_pane_g

0x817d,	// (0x00016ded) control_button_pane_t1

0x818b,	// (0x00016dfb) control_button_pane_t2

0x0001,

0xfc07,	// (0x0001e877) control_button_pane_t

0x4c0a,	// (0x0001387a) bg_button_pane_g1

0x4c1a,	// (0x0001388a) bg_button_pane_g2

0x4c12,	// (0x00013882) bg_button_pane_g3

0x4c2a,	// (0x0001389a) bg_button_pane_g4

0x4c22,	// (0x00013892) bg_button_pane_g5

0x4c32,	// (0x000138a2) bg_button_pane_g6

0x4c3a,	// (0x000138aa) bg_button_pane_g7

0x4c4a,	// (0x000138ba) bg_button_pane_g8

0x4c42,	// (0x000138b2) bg_button_pane_g9

0x0008,

0xf866,	// (0x0001e4d6) bg_button_pane_g

0x75ce,	// (0x0001623e) common_borders_pane_ParamLimits

0x75ce,	// (0x0001623e) common_borders_pane

0x811d,	// (0x00016d8d) eswt_control_pane_g1_copy1_ParamLimits

0x811d,	// (0x00016d8d) eswt_control_pane_g1_copy1

0x812a,	// (0x00016d9a) eswt_control_pane_g2_copy1_ParamLimits

0x812a,	// (0x00016d9a) eswt_control_pane_g2_copy1

0x8137,	// (0x00016da7) eswt_control_pane_g3_copy1_ParamLimits

0x8137,	// (0x00016da7) eswt_control_pane_g3_copy1

0x8144,	// (0x00016db4) eswt_control_pane_g4_copy1_ParamLimits

0x8144,	// (0x00016db4) eswt_control_pane_g4_copy1

0x7609,	// (0x00016279) bg_eswt_ctrl_canvas_pane_g1

0x75ce,	// (0x0001623e) common_borders_pane_cp2_ParamLimits

0x75ce,	// (0x0001623e) common_borders_pane_cp2

0x75ce,	// (0x0001623e) common_borders_pane_cp3_ParamLimits

0x75ce,	// (0x0001623e) common_borders_pane_cp3

0x8199,	// (0x00016e09) separator_horizontal_pane

0x81a1,	// (0x00016e11) separator_vertical_pane

0x811d,	// (0x00016d8d) eswt_control_pane_g1_copy2_ParamLimits

0x811d,	// (0x00016d8d) eswt_control_pane_g1_copy2

0x812a,	// (0x00016d9a) eswt_control_pane_g2_copy2_ParamLimits

0x812a,	// (0x00016d9a) eswt_control_pane_g2_copy2

0x8137,	// (0x00016da7) eswt_control_pane_g3_copy2_ParamLimits

0x8137,	// (0x00016da7) eswt_control_pane_g3_copy2

0x8144,	// (0x00016db4) eswt_control_pane_g4_copy2_ParamLimits

0x8144,	// (0x00016db4) eswt_control_pane_g4_copy2

0x208c,	// (0x00010cfc) common_borders_pane_cp4

0x81aa,	// (0x00016e1a) separator_horizontal_pane_g1

0x81b3,	// (0x00016e23) separator_horizontal_pane_g2

0x81bc,	// (0x00016e2c) separator_horizontal_pane_g3

0x0002,

0xfc0c,	// (0x0001e87c) separator_horizontal_pane_g

0x811d,	// (0x00016d8d) eswt_control_pane_g1_copy3_ParamLimits

0x811d,	// (0x00016d8d) eswt_control_pane_g1_copy3

0x812a,	// (0x00016d9a) eswt_control_pane_g2_copy3_ParamLimits

0x812a,	// (0x00016d9a) eswt_control_pane_g2_copy3

0x8137,	// (0x00016da7) eswt_control_pane_g3_copy3_ParamLimits

0x8137,	// (0x00016da7) eswt_control_pane_g3_copy3

0x8144,	// (0x00016db4) eswt_control_pane_g4_copy3_ParamLimits

0x8144,	// (0x00016db4) eswt_control_pane_g4_copy3

0x208c,	// (0x00010cfc) common_borders_pane_cp5

0x81c5,	// (0x00016e35) separator_vertical_pane_g1

0x81ce,	// (0x00016e3e) separator_vertical_pane_g2

0x81d7,	// (0x00016e47) separator_vertical_pane_g3

0x0002,

0xfc13,	// (0x0001e883) separator_vertical_pane_g

0x811d,	// (0x00016d8d) eswt_control_pane_g1_copy4_ParamLimits

0x811d,	// (0x00016d8d) eswt_control_pane_g1_copy4

0x812a,	// (0x00016d9a) eswt_control_pane_g2_copy4_ParamLimits

0x812a,	// (0x00016d9a) eswt_control_pane_g2_copy4

0x8137,	// (0x00016da7) eswt_control_pane_g3_copy4_ParamLimits

0x8137,	// (0x00016da7) eswt_control_pane_g3_copy4

0x8144,	// (0x00016db4) eswt_control_pane_g4_copy4_ParamLimits

0x8144,	// (0x00016db4) eswt_control_pane_g4_copy4

0x81e0,	// (0x00016e50) eswt_ctrl_combo_button_pane

0x81e8,	// (0x00016e58) eswt_ctrl_input_pane

0x81f0,	// (0x00016e60) popup_choice_list_window_cp70

0x81f8,	// (0x00016e68) eswt_ctrl_input_pane_t1

0x208c,	// (0x00010cfc) input_focus_pane_cp70

0x75ce,	// (0x0001623e) bg_button_pane_cp70_ParamLimits

0x75ce,	// (0x0001623e) bg_button_pane_cp70

0x8206,	// (0x00016e76) eswt_ctrl_combo_button_pane_g1

0x820e,	// (0x00016e7e) wait_bar_pane_cp70

0x4d24,	// (0x00013994) bg_popup_window_pane_cp70_ParamLimits

0x4d24,	// (0x00013994) bg_popup_window_pane_cp70

0x8216,	// (0x00016e86) popup_eswt_tasktip_window_t1

0x822c,	// (0x00016e9c) wait_bar_pane_cp71_ParamLimits

0x822c,	// (0x00016e9c) wait_bar_pane_cp71

0x8238,	// (0x00016ea8) grid_eswt_app_pane

0x356d,	// (0x000121dd) scroll_pane_cp70

0x8241,	// (0x00016eb1) cell_eswt_app_pane_ParamLimits

0x8241,	// (0x00016eb1) cell_eswt_app_pane

0x8275,	// (0x00016ee5) cell_eswt_app_pane_g1_ParamLimits

0x8275,	// (0x00016ee5) cell_eswt_app_pane_g1

0x82a4,	// (0x00016f14) cell_eswt_app_pane_g2_ParamLimits

0x82a4,	// (0x00016f14) cell_eswt_app_pane_g2

0x0001,

0xfc1a,	// (0x0001e88a) cell_eswt_app_pane_g_ParamLimits

0xfc1a,	// (0x0001e88a) cell_eswt_app_pane_g

0x82cd,	// (0x00016f3d) cell_eswt_app_pane_t1_ParamLimits

0x82cd,	// (0x00016f3d) cell_eswt_app_pane_t1

0x82ff,	// (0x00016f6f) grid_highlight_pane_cp70_ParamLimits

0x82ff,	// (0x00016f6f) grid_highlight_pane_cp70

0x3ca4,	// (0x00012914) set_content_pane_g1

0x406d,	// (0x00012cdd) status_small_volume_pane

0xe653,	// (0x0001d2c3) status_small_volume_pane_g1

0xe65b,	// (0x0001d2cb) volume_small2_pane

0xe664,	// (0x0001d2d4) volume_small2_pane_g1

0xe66d,	// (0x0001d2dd) volume_small2_pane_g2

0xe676,	// (0x0001d2e6) volume_small2_pane_g3

0xe67f,	// (0x0001d2ef) volume_small2_pane_g4

0xe688,	// (0x0001d2f8) volume_small2_pane_g5

0xe691,	// (0x0001d301) volume_small2_pane_g6

0xe69a,	// (0x0001d30a) volume_small2_pane_g7

0xe6a3,	// (0x0001d313) volume_small2_pane_g8

0xe6ac,	// (0x0001d31c) volume_small2_pane_g9

0xe6b5,	// (0x0001d325) volume_small2_pane_g10

0x0009,

0xfc1f,	// (0x0001e88f) volume_small2_pane_g

0x79cc,	// (0x0001663c) fep_vkb_top_text_pane_g1_ParamLimits

0x79e7,	// (0x00016657) fep_vkb_top_text_pane_t1_ParamLimits

0x7c49,	// (0x000168b9) popup_preview_fixed_window_g3_ParamLimits

0x7c49,	// (0x000168b9) popup_preview_fixed_window_g3

0x4634,	// (0x000132a4) popup_toolbar_trans_pane

0x60d3,	// (0x00014d43) aid_height_set_list_ParamLimits

0x60e4,	// (0x00014d54) aid_size_parent_ParamLimits

0x414b,	// (0x00012dbb) list_highlight_pane_cp2_ParamLimits

0x3ca4,	// (0x00012914) set_content_pane_g1_ParamLimits

0xce3b,	// (0x0001baab) list_single_image_pane_ParamLimits

0xce3b,	// (0x0001baab) list_single_image_pane

0x830b,	// (0x00016f7b) aid_size_cell_image_ParamLimits

0x830b,	// (0x00016f7b) aid_size_cell_image

0x8318,	// (0x00016f88) grid_single_image_pane_ParamLimits

0x8318,	// (0x00016f88) grid_single_image_pane

0x2f7f,	// (0x00011bef) list_single_image_pane_g1_ParamLimits

0x2f7f,	// (0x00011bef) list_single_image_pane_g1

0x2f8b,	// (0x00011bfb) list_single_image_pane_g2_ParamLimits

0x2f8b,	// (0x00011bfb) list_single_image_pane_g2

0x0001,

0xfc34,	// (0x0001e8a4) list_single_image_pane_g_ParamLimits

0xfc34,	// (0x0001e8a4) list_single_image_pane_g

0x8324,	// (0x00016f94) list_single_image_pane_t1_ParamLimits

0x8324,	// (0x00016f94) list_single_image_pane_t1

0x833a,	// (0x00016faa) cell_image_list_pane_ParamLimits

0x833a,	// (0x00016faa) cell_image_list_pane

0x834e,	// (0x00016fbe) cell_image_list_pane_g1

0x8357,	// (0x00016fc7) cell_image_list_pane_g2

0x0001,

0xfc39,	// (0x0001e8a9) cell_image_list_pane_g

0x8360,	// (0x00016fd0) aid_size_cell_tb_trans_pane

0x2f59,	// (0x00011bc9) bg_tb_trans_pane

0x8372,	// (0x00016fe2) grid_tb_trans_pane

0x4c0a,	// (0x0001387a) bg_tb_trans_pane_g1

0x4c1a,	// (0x0001388a) bg_tb_trans_pane_g2

0x4c12,	// (0x00013882) bg_tb_trans_pane_g3

0x4c2a,	// (0x0001389a) bg_tb_trans_pane_g4

0x4c22,	// (0x00013892) bg_tb_trans_pane_g5

0x4c4a,	// (0x000138ba) bg_tb_trans_pane_g6

0x4c42,	// (0x000138b2) bg_tb_trans_pane_g7

0x4c32,	// (0x000138a2) bg_tb_trans_pane_g8

0x4c3a,	// (0x000138aa) bg_tb_trans_pane_g9

0x0008,

0xfc3e,	// (0x0001e8ae) bg_tb_trans_pane_g

0x8386,	// (0x00016ff6) cell_toolbar_trans_pane_ParamLimits

0x8386,	// (0x00016ff6) cell_toolbar_trans_pane

0x7609,	// (0x00016279) cell_toolbar_trans_pane_g1

0x7155,	// (0x00015dc5) list_form2_midp_pane_t1

0x7163,	// (0x00015dd3) list_form2_midp_pane_t2

0x0001,

0xfae7,	// (0x0001e757) list_form2_midp_pane_t

0x7171,	// (0x00015de1) scroll_pane_cp51_ParamLimits

0x7374,	// (0x00015fe4) form2_midp_wait_pane_g1

0x737d,	// (0x00015fed) form2_midp_wait_pane_g2

0x7386,	// (0x00015ff6) form2_midp_wait_pane_g3

0x0002,

0xfafc,	// (0x0001e76c) form2_midp_wait_pane_g

0x2180,	// (0x00010df0) list_highlight_pane_cp21_ParamLimits

0x73d5,	// (0x00016045) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x73e4,	// (0x00016054) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xcdc7,	// (0x0001ba37) list_single_2graphic_im_pane_ParamLimits

0xcdc7,	// (0x0001ba37) list_single_2graphic_im_pane

0x83ac,	// (0x0001701c) list_single_2graphic_im_pane_g1_ParamLimits

0x83ac,	// (0x0001701c) list_single_2graphic_im_pane_g1

0x83bd,	// (0x0001702d) list_single_2graphic_im_pane_g2_ParamLimits

0x83bd,	// (0x0001702d) list_single_2graphic_im_pane_g2

0x83c9,	// (0x00017039) list_single_2graphic_im_pane_g3_ParamLimits

0x83c9,	// (0x00017039) list_single_2graphic_im_pane_g3

0x0003,

0xfc51,	// (0x0001e8c1) list_single_2graphic_im_pane_g_ParamLimits

0xfc51,	// (0x0001e8c1) list_single_2graphic_im_pane_g

0x83e9,	// (0x00017059) list_single_2graphic_im_pane_t1_ParamLimits

0x83e9,	// (0x00017059) list_single_2graphic_im_pane_t1

0x7c55,	// (0x000168c5) list_single_graphic_2heading_pane_fp_ParamLimits

0x7c55,	// (0x000168c5) list_single_graphic_2heading_pane_fp

0xd0fe,	// (0x0001bd6e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd0fe,	// (0x0001bd6e) list_single_graphic_2heading_pane_fp_g1

0x7c6c,	// (0x000168dc) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7c6c,	// (0x000168dc) list_single_graphic_2heading_pane_fp_g2

0xc731,	// (0x0001b3a1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc731,	// (0x0001b3a1) list_single_graphic_2heading_pane_fp_g3

0xd0d3,	// (0x0001bd43) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd0d3,	// (0x0001bd43) list_single_graphic_2heading_pane_fp_g4

0x7c78,	// (0x000168e8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7c78,	// (0x000168e8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0001e7ef) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0001e7ef) list_single_graphic_2heading_pane_fp_g

0xd2d7,	// (0x0001bf47) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd2d7,	// (0x0001bf47) list_single_graphic_2heading_pane_fp_t1

0xd136,	// (0x0001bda6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd136,	// (0x0001bda6) list_single_graphic_2heading_pane_fp_t2

0xd2ed,	// (0x0001bf5d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd2ed,	// (0x0001bf5d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5a,	// (0x0001e8ca) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5a,	// (0x0001e8ca) list_single_graphic_2heading_pane_fp_t

0x768b,	// (0x000162fb) fep_hwr_write_pane_g5_ParamLimits

0x768b,	// (0x000162fb) fep_hwr_write_pane_g5

0x7697,	// (0x00016307) fep_hwr_write_pane_g6_ParamLimits

0x7697,	// (0x00016307) fep_hwr_write_pane_g6

0x80ec,	// (0x00016d5c) eswt_shell_pane_ParamLimits

0x4d24,	// (0x00013994) bg_popup_window_pane_cp18_ParamLimits

0x600a,	// (0x00014c7a) heading_pane_cp70

0x8216,	// (0x00016e86) popup_eswt_tasktip_window_t1_ParamLimits

0x4751,	// (0x000133c1) aid_touch_tab_arrow_left

0x4760,	// (0x000133d0) aid_touch_tab_arrow_right

0x20c8,	// (0x00010d38) title_pane_g3_ParamLimits

0x20c8,	// (0x00010d38) title_pane_g3

0x2e46,	// (0x00011ab6) set_value_pane_g1

0x4634,	// (0x000132a4) popup_toolbar_trans_pane_ParamLimits

0x8360,	// (0x00016fd0) aid_size_cell_tb_trans_pane_ParamLimits

0x2f59,	// (0x00011bc9) bg_tb_trans_pane_ParamLimits

0x8372,	// (0x00016fe2) grid_tb_trans_pane_ParamLimits

0x2423,	// (0x00011093) cont_note_pane_ParamLimits

0x2423,	// (0x00011093) cont_note_pane

0x275e,	// (0x000113ce) cont_snote2_single_text_pane_ParamLimits

0x275e,	// (0x000113ce) cont_snote2_single_text_pane

0x275e,	// (0x000113ce) cont_snote2_single_graphic_pane_ParamLimits

0x275e,	// (0x000113ce) cont_snote2_single_graphic_pane

0x5361,	// (0x00013fd1) cont_note_wait_pane_ParamLimits

0x5361,	// (0x00013fd1) cont_note_wait_pane

0x5361,	// (0x00013fd1) cont_note_image_pane_ParamLimits

0x5361,	// (0x00013fd1) cont_note_image_pane

0x8446,	// (0x000170b6) popup_note2_window_g1_ParamLimits

0x8446,	// (0x000170b6) popup_note2_window_g1

0x8477,	// (0x000170e7) popup_note2_window_t1_ParamLimits

0x8477,	// (0x000170e7) popup_note2_window_t1

0x84bc,	// (0x0001712c) popup_note2_window_t2_ParamLimits

0x84bc,	// (0x0001712c) popup_note2_window_t2

0x8501,	// (0x00017171) popup_note2_window_t3_ParamLimits

0x8501,	// (0x00017171) popup_note2_window_t3

0x8546,	// (0x000171b6) popup_note2_window_t4_ParamLimits

0x8546,	// (0x000171b6) popup_note2_window_t4

0x249b,	// (0x0001110b) popup_note2_window_t5_ParamLimits

0x249b,	// (0x0001110b) popup_note2_window_t5

0x0004,

0xfc66,	// (0x0001e8d6) popup_note2_window_t_ParamLimits

0xfc66,	// (0x0001e8d6) popup_note2_window_t

0x8575,	// (0x000171e5) popup_note2_image_window_g1_ParamLimits

0x8575,	// (0x000171e5) popup_note2_image_window_g1

0x8581,	// (0x000171f1) popup_note2_image_window_g2_ParamLimits

0x8581,	// (0x000171f1) popup_note2_image_window_g2

0x0001,

0xfc71,	// (0x0001e8e1) popup_note2_image_window_g_ParamLimits

0xfc71,	// (0x0001e8e1) popup_note2_image_window_g

0x8593,	// (0x00017203) popup_note2_image_window_t1_ParamLimits

0x8593,	// (0x00017203) popup_note2_image_window_t1

0x85ab,	// (0x0001721b) popup_note2_image_window_t2_ParamLimits

0x85ab,	// (0x0001721b) popup_note2_image_window_t2

0x85c3,	// (0x00017233) popup_note2_image_window_t3_ParamLimits

0x85c3,	// (0x00017233) popup_note2_image_window_t3

0x0002,

0xfc76,	// (0x0001e8e6) popup_note2_image_window_t_ParamLimits

0xfc76,	// (0x0001e8e6) popup_note2_image_window_t

0x536f,	// (0x00013fdf) popup_note2_wait_window_g1_ParamLimits

0x536f,	// (0x00013fdf) popup_note2_wait_window_g1

0x537b,	// (0x00013feb) popup_note2_wait_window_g2_ParamLimits

0x537b,	// (0x00013feb) popup_note2_wait_window_g2

0x5387,	// (0x00013ff7) popup_note2_wait_window_g3_ParamLimits

0x5387,	// (0x00013ff7) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x0001e4b8) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x0001e4b8) popup_note2_wait_window_g

0x85df,	// (0x0001724f) popup_note2_wait_window_t1_ParamLimits

0x85df,	// (0x0001724f) popup_note2_wait_window_t1

0x85fd,	// (0x0001726d) popup_note2_wait_window_t2_ParamLimits

0x85fd,	// (0x0001726d) popup_note2_wait_window_t2

0x861b,	// (0x0001728b) popup_note2_wait_window_t3_ParamLimits

0x861b,	// (0x0001728b) popup_note2_wait_window_t3

0x862d,	// (0x0001729d) popup_note2_wait_window_t4_ParamLimits

0x862d,	// (0x0001729d) popup_note2_wait_window_t4

0x0003,

0xfc7d,	// (0x0001e8ed) popup_note2_wait_window_t_ParamLimits

0xfc7d,	// (0x0001e8ed) popup_note2_wait_window_t

0x863f,	// (0x000172af) wait_bar2_pane_ParamLimits

0x863f,	// (0x000172af) wait_bar2_pane

0x8657,	// (0x000172c7) popup_snote2_single_text_window_g1_ParamLimits

0x8657,	// (0x000172c7) popup_snote2_single_text_window_g1

0x867f,	// (0x000172ef) popup_snote2_single_text_window_t1_ParamLimits

0x867f,	// (0x000172ef) popup_snote2_single_text_window_t1

0x86cb,	// (0x0001733b) popup_snote2_single_text_window_t2_ParamLimits

0x86cb,	// (0x0001733b) popup_snote2_single_text_window_t2

0x8717,	// (0x00017387) popup_snote2_single_text_window_t3_ParamLimits

0x8717,	// (0x00017387) popup_snote2_single_text_window_t3

0x8758,	// (0x000173c8) popup_snote2_single_text_window_t4_ParamLimits

0x8758,	// (0x000173c8) popup_snote2_single_text_window_t4

0x878e,	// (0x000173fe) popup_snote2_single_text_window_t5_ParamLimits

0x878e,	// (0x000173fe) popup_snote2_single_text_window_t5

0x0004,

0xfc86,	// (0x0001e8f6) popup_snote2_single_text_window_t_ParamLimits

0xfc86,	// (0x0001e8f6) popup_snote2_single_text_window_t

0x87b9,	// (0x00017429) popup_snote2_single_graphic_window_g1_ParamLimits

0x87b9,	// (0x00017429) popup_snote2_single_graphic_window_g1

0x87e1,	// (0x00017451) popup_snote2_single_graphic_window_g2_ParamLimits

0x87e1,	// (0x00017451) popup_snote2_single_graphic_window_g2

0x0001,

0xfc91,	// (0x0001e901) popup_snote2_single_graphic_window_g_ParamLimits

0xfc91,	// (0x0001e901) popup_snote2_single_graphic_window_g

0x8809,	// (0x00017479) popup_snote2_single_graphic_window_t1_ParamLimits

0x8809,	// (0x00017479) popup_snote2_single_graphic_window_t1

0x8855,	// (0x000174c5) popup_snote2_single_graphic_window_t2_ParamLimits

0x8855,	// (0x000174c5) popup_snote2_single_graphic_window_t2

0x8717,	// (0x00017387) popup_snote2_single_graphic_window_t3_ParamLimits

0x8717,	// (0x00017387) popup_snote2_single_graphic_window_t3

0x8758,	// (0x000173c8) popup_snote2_single_graphic_window_t4_ParamLimits

0x8758,	// (0x000173c8) popup_snote2_single_graphic_window_t4

0x878e,	// (0x000173fe) popup_snote2_single_graphic_window_t5_ParamLimits

0x878e,	// (0x000173fe) popup_snote2_single_graphic_window_t5

0x0004,

0xfc96,	// (0x0001e906) popup_snote2_single_graphic_window_t_ParamLimits

0xfc96,	// (0x0001e906) popup_snote2_single_graphic_window_t

0x702a,	// (0x00015c9a) clock_nsta_pane_cp2_t1

0x702a,	// (0x00015c9a) clock_nsta_pane_cp2_t2

0x0001,

0xfabd,	// (0x0001e72d) clock_nsta_pane_cp2_t

0xca64,	// (0x0001b6d4) form_field_data_wide_pane_g1_ParamLimits

0x2f7f,	// (0x00011bef) form_field_data_wide_pane_g2_ParamLimits

0x2f7f,	// (0x00011bef) form_field_data_wide_pane_g2

0x2f8b,	// (0x00011bfb) form_field_data_wide_pane_g3_ParamLimits

0x2f8b,	// (0x00011bfb) form_field_data_wide_pane_g3

0x0002,

0xf68e,	// (0x0001e2fe) form_field_data_wide_pane_g_ParamLimits

0xf68e,	// (0x0001e2fe) form_field_data_wide_pane_g

0x6f03,	// (0x00015b73) grid_touch_3_pane_ParamLimits

0x6f03,	// (0x00015b73) grid_touch_3_pane

0x88a1,	// (0x00017511) cell_touch_3_pane_ParamLimits

0x88a1,	// (0x00017511) cell_touch_3_pane

0x7609,	// (0x00016279) cell_touch_3_pane_g1

0x7609,	// (0x00016279) cell_touch_3_pane_g2

0x0001,

0xfb42,	// (0x0001e7b2) cell_touch_3_pane_g

0x24cd,	// (0x0001113d) cont_query_data_pane

0x24d5,	// (0x00011145) cont_query_data_pane_cp1

0x88d0,	// (0x00017540) button_value_adjust_pane_cp7

0x88d8,	// (0x00017548) query_popup_pane_cp3

0x3823,	// (0x00012493) bg_popup_sub_pane_cp22_ParamLimits

0xdb0c,	// (0x0001c77c) navi_navi_volume_pane_cp2

0xdb27,	// (0x0001c797) popup_side_volume_key_window_g2

0xdb36,	// (0x0001c7a6) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001e394) popup_side_volume_key_window_g

0xdb53,	// (0x0001c7c3) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001e39b) popup_side_volume_key_window_t

0x3b6e,	// (0x000127de) popup_side_volume_key_window_ParamLimits

0xc6fd,	// (0x0001b36d) list_double_graphic_pane_g4_ParamLimits

0xc6fd,	// (0x0001b36d) list_double_graphic_pane_g4

0xce14,	// (0x0001ba84) list_single_2heading_msg_pane_ParamLimits

0xce14,	// (0x0001ba84) list_single_2heading_msg_pane

0xd30d,	// (0x0001bf7d) list_single_2heading_msg_pane_g1_ParamLimits

0xd30d,	// (0x0001bf7d) list_single_2heading_msg_pane_g1

0xc54e,	// (0x0001b1be) list_single_2heading_msg_pane_g2_ParamLimits

0xc54e,	// (0x0001b1be) list_single_2heading_msg_pane_g2

0xcefa,	// (0x0001bb6a) list_single_2heading_msg_pane_g3_ParamLimits

0xcefa,	// (0x0001bb6a) list_single_2heading_msg_pane_g3

0xd319,	// (0x0001bf89) list_single_2heading_msg_pane_g4_ParamLimits

0xd319,	// (0x0001bf89) list_single_2heading_msg_pane_g4

0x0003,

0xfca1,	// (0x0001e911) list_single_2heading_msg_pane_g_ParamLimits

0xfca1,	// (0x0001e911) list_single_2heading_msg_pane_g

0xd331,	// (0x0001bfa1) list_single_2heading_msg_pane_t1_ParamLimits

0xd331,	// (0x0001bfa1) list_single_2heading_msg_pane_t1

0xd359,	// (0x0001bfc9) list_single_2heading_msg_pane_t2_ParamLimits

0xd359,	// (0x0001bfc9) list_single_2heading_msg_pane_t2

0xd38d,	// (0x0001bffd) list_single_2heading_msg_pane_t3_ParamLimits

0xd38d,	// (0x0001bffd) list_single_2heading_msg_pane_t3

0xd3c6,	// (0x0001c036) list_single_2heading_msg_pane_t4_ParamLimits

0xd3c6,	// (0x0001c036) list_single_2heading_msg_pane_t4

0x0003,

0xfcaa,	// (0x0001e91a) list_single_2heading_msg_pane_t_ParamLimits

0xfcaa,	// (0x0001e91a) list_single_2heading_msg_pane_t

0x20d4,	// (0x00010d44) title_pane_g4_ParamLimits

0x20d4,	// (0x00010d44) title_pane_g4

0xd91a,	// (0x0001c58a) title_pane_stacon_g3_ParamLimits

0xd91a,	// (0x0001c58a) title_pane_stacon_g3

0x83dd,	// (0x0001704d) list_single_2graphic_im_pane_g4_ParamLimits

0x83dd,	// (0x0001704d) list_single_2graphic_im_pane_g4

0x5db0,	// (0x00014a20) popup_side_volume_key_window_cp

0x66d3,	// (0x00015343) main_idle_act2_pane_t1

0xdee3,	// (0x0001cb53) toolbar_button_pane_g10

0x2956,	// (0x000115c6) popup_toolbar_window_cp1

0x701b,	// (0x00015c8b) clock_nsta_pane_cp_t1

0x701b,	// (0x00015c8b) clock_nsta_pane_cp_t2

0x0001,

0xfab8,	// (0x0001e728) clock_nsta_pane_cp_t

0xdb0c,	// (0x0001c77c) navi_navi_volume_pane_cp2_ParamLimits

0xdb1b,	// (0x0001c78b) popup_side_volume_key_window_g1_ParamLimits

0xdb27,	// (0x0001c797) popup_side_volume_key_window_g2_ParamLimits

0xdb36,	// (0x0001c7a6) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001e394) popup_side_volume_key_window_g_ParamLimits

0xe37e,	// (0x0001cfee) fep_hwr_aid_pane

0xaade,	// (0x0001974e) bg_fep_hwr_top_pane_g4_ParamLimits

0x766d,	// (0x000162dd) fep_hwr_top_pane_g1_ParamLimits

0x765b,	// (0x000162cb) fep_hwr_top_pane_g2_ParamLimits

0xe437,	// (0x0001d0a7) fep_hwr_top_pane_g3_ParamLimits

0xfb0d,	// (0x0001e77d) fep_hwr_top_pane_g_ParamLimits

0xe44c,	// (0x0001d0bc) fep_hwr_top_text_pane_ParamLimits

0x5b7a,	// (0x000147ea) aid_touch_tab_arrow_arrow_2

0x5b71,	// (0x000147e1) aid_touch_tab_arrow_left_2

0xe392,	// (0x0001d002) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xe3c9,	// (0x0001d039) fep_hwr_prediction_pane

0x77d4,	// (0x00016444) fep_vkb_prediction_pane

0x78d8,	// (0x00016548) fep_vkb_side_pane_g3_ParamLimits

0x78d8,	// (0x00016548) fep_vkb_side_pane_g3

0x7884,	// (0x000164f4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7e71,	// (0x00016ae1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7e7e,	// (0x00016aee) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb7,	// (0x0001e827) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x89f1,	// (0x00017661) fep_hwr_prediction_pane_g1

0xe6be,	// (0x0001d32e) fep_hwr_prediction_pane_g2

0xe6c6,	// (0x0001d336) fep_hwr_prediction_pane_g3

0xe6ce,	// (0x0001d33e) fep_hwr_prediction_pane_g4

0x0003,

0xfcb3,	// (0x0001e923) fep_hwr_prediction_pane_g

0x89f1,	// (0x00017661) fep_vkb_prediction_pane_g1

0x89fb,	// (0x0001766b) fep_vkb_prediction_pane_g2

0x8a03,	// (0x00017673) fep_vkb_prediction_pane_g3

0x8a0b,	// (0x0001767b) fep_vkb_prediction_pane_g4

0x0003,

0xfcbc,	// (0x0001e92c) fep_vkb_prediction_pane_g

0xe1bb,	// (0x0001ce2b) slider_set_pane_g3

0xe1cf,	// (0x0001ce3f) slider_set_pane_g4

0xe1e7,	// (0x0001ce57) slider_set_pane_g5

0xe1bb,	// (0x0001ce2b) slider_set_pane_g6

0xe1fd,	// (0x0001ce6d) slider_set_pane_g7

0x6241,	// (0x00014eb1) slider_form_pane_g3

0x624a,	// (0x00014eba) slider_form_pane_g4

0x6252,	// (0x00014ec2) slider_form_pane_g5

0x6241,	// (0x00014eb1) slider_form_pane_g6

0x625a,	// (0x00014eca) slider_form_pane_g7

0x69bf,	// (0x0001562f) slider_set_pane_vc_g3

0x69c8,	// (0x00015638) slider_set_pane_vc_g4

0x69d1,	// (0x00015641) slider_set_pane_vc_g5

0x69bf,	// (0x0001562f) slider_set_pane_vc_g6

0x69da,	// (0x0001564a) slider_set_pane_vc_g7

0x69bf,	// (0x0001562f) slider_form_pane_vc_g1

0x69c8,	// (0x00015638) slider_form_pane_vc_g2

0x69d1,	// (0x00015641) slider_form_pane_vc_g3

0x69bf,	// (0x0001562f) slider_form_pane_vc_g4

0x6d21,	// (0x00015991) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x0001e701) slider_form_pane_vc_g

0x208c,	// (0x00010cfc) main_idle_act3_pane

0x8a13,	// (0x00017683) ai3_links_pane

0x8a1c,	// (0x0001768c) popup_ai3_data_window_ParamLimits

0x8a1c,	// (0x0001768c) popup_ai3_data_window

0x208c,	// (0x00010cfc) grid_ai3_links_pane

0x8a34,	// (0x000176a4) cell_ai3_links_pane_ParamLimits

0x8a34,	// (0x000176a4) cell_ai3_links_pane

0x8a4c,	// (0x000176bc) bg_popup_sub_pane_cp11

0x8a59,	// (0x000176c9) cell_ai3_links_pane_g1

0x208c,	// (0x00010cfc) bg_popup_sub_pane_cp12

0x8a7e,	// (0x000176ee) heading_ai3_data_pane

0x8a86,	// (0x000176f6) list_ai3_gene_pane

0x8a92,	// (0x00017702) popup_ai3_data_window_g1

0x8a9a,	// (0x0001770a) heading_ai3_data_pane_g1

0x8aa2,	// (0x00017712) heading_ai3_data_pane_t1

0x8ab0,	// (0x00017720) list_double_ai3_gene_pane_ParamLimits

0x8ab0,	// (0x00017720) list_double_ai3_gene_pane

0x8abd,	// (0x0001772d) list_single_ai3_gene_pane_ParamLimits

0x8abd,	// (0x0001772d) list_single_ai3_gene_pane

0x75ce,	// (0x0001623e) list_highlight_pane_cp7_ParamLimits

0x75ce,	// (0x0001623e) list_highlight_pane_cp7

0x8aca,	// (0x0001773a) list_single_a13_gene_pane_t1_ParamLimits

0x8aca,	// (0x0001773a) list_single_a13_gene_pane_t1

0x8ae1,	// (0x00017751) list_single_ai3_gene_pane_g1

0x8aea,	// (0x0001775a) list_single_ai3_gene_pane_g2

0x0001,

0xfcc5,	// (0x0001e935) list_single_ai3_gene_pane_g

0x8af2,	// (0x00017762) list_double_ai3_gene_pane_g1_ParamLimits

0x8af2,	// (0x00017762) list_double_ai3_gene_pane_g1

0x8afe,	// (0x0001776e) list_double_ai3_gene_pane_t1_ParamLimits

0x8afe,	// (0x0001776e) list_double_ai3_gene_pane_t1

0x8b1a,	// (0x0001778a) list_double_ai3_gene_pane_t2_ParamLimits

0x8b1a,	// (0x0001778a) list_double_ai3_gene_pane_t2

0x8b2f,	// (0x0001779f) list_double_ai3_gene_pane_t3_ParamLimits

0x8b2f,	// (0x0001779f) list_double_ai3_gene_pane_t3

0x0002,

0xfcca,	// (0x0001e93a) list_double_ai3_gene_pane_t_ParamLimits

0xfcca,	// (0x0001e93a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd303,	// (0x0001bf73) aid_size_min_col_2

0x88f3,	// (0x00017563) aid_size_min_msg_ParamLimits

0x88f3,	// (0x00017563) aid_size_min_msg

0x79d8,	// (0x00016648) fep_vkb_top_text_pane_g2_ParamLimits

0x79d8,	// (0x00016648) fep_vkb_top_text_pane_g2

0x0001,

0xfb3d,	// (0x0001e7ad) fep_vkb_top_text_pane_g_ParamLimits

0xfb3d,	// (0x0001e7ad) fep_vkb_top_text_pane_g

0x208c,	// (0x00010cfc) main_hc_apps_shell_pane

0x8b4c,	// (0x000177bc) grid_hc_apps_pane_ParamLimits

0x8b4c,	// (0x000177bc) grid_hc_apps_pane

0x8b5b,	// (0x000177cb) list_hc_apps_pane

0x8b63,	// (0x000177d3) scroll_pane_cp37_ParamLimits

0x8b63,	// (0x000177d3) scroll_pane_cp37

0x8b6f,	// (0x000177df) cell_hc_apps_pane_ParamLimits

0x8b6f,	// (0x000177df) cell_hc_apps_pane

0x8c1f,	// (0x0001788f) cell_hc_apps_pane_g1_ParamLimits

0x8c1f,	// (0x0001788f) cell_hc_apps_pane_g1

0x8c50,	// (0x000178c0) cell_hc_apps_pane_g2_ParamLimits

0x8c50,	// (0x000178c0) cell_hc_apps_pane_g2

0x8c6c,	// (0x000178dc) cell_hc_apps_pane_g3_ParamLimits

0x8c6c,	// (0x000178dc) cell_hc_apps_pane_g3

0x0002,

0xfcd1,	// (0x0001e941) cell_hc_apps_pane_g_ParamLimits

0xfcd1,	// (0x0001e941) cell_hc_apps_pane_g

0x8c8e,	// (0x000178fe) cell_hc_apps_pane_t1_ParamLimits

0x8c8e,	// (0x000178fe) cell_hc_apps_pane_t1

0x2423,	// (0x00011093) grid_highlight_pane_cp10_ParamLimits

0x2423,	// (0x00011093) grid_highlight_pane_cp10

0x8cce,	// (0x0001793e) list_single_hc_apps_pane_ParamLimits

0x8cce,	// (0x0001793e) list_single_hc_apps_pane

0x8d41,	// (0x000179b1) list_single_hc_apps_pane_g1

0xd3eb,	// (0x0001c05b) list_single_hc_apps_pane_g2

0x0001,

0xfcd8,	// (0x0001e948) list_single_hc_apps_pane_g

0xd404,	// (0x0001c074) list_single_hc_apps_pane_g2_copy1

0xd420,	// (0x0001c090) list_single_hc_apps_pane_t1

0x2180,	// (0x00010df0) bg_set_opt_pane_cp_ParamLimits

0xd845,	// (0x0001c4b5) setting_slider_pane_t1_ParamLimits

0xd85e,	// (0x0001c4ce) setting_slider_pane_t2_ParamLimits

0xd877,	// (0x0001c4e7) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0001e1e6) setting_slider_pane_t_ParamLimits

0xd88e,	// (0x0001c4fe) slider_set_pane_ParamLimits

0xddb1,	// (0x0001ca21) control_pane_g5_ParamLimits

0xddb1,	// (0x0001ca21) control_pane_g5

0x609e,	// (0x00014d0e) slider_set_pane_g1_ParamLimits

0xe1af,	// (0x0001ce1f) slider_set_pane_g2_ParamLimits

0xe1bb,	// (0x0001ce2b) slider_set_pane_g3_ParamLimits

0xe1cf,	// (0x0001ce3f) slider_set_pane_g4_ParamLimits

0xe1e7,	// (0x0001ce57) slider_set_pane_g5_ParamLimits

0xe1bb,	// (0x0001ce2b) slider_set_pane_g6_ParamLimits

0xe1fd,	// (0x0001ce6d) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0001e5d4) slider_set_pane_g_ParamLimits

0x3c4f,	// (0x000128bf) navi_icon_text_pane_ParamLimits

0x4712,	// (0x00013382) aid_fill_nsta_2_ParamLimits

0x4751,	// (0x000133c1) aid_touch_tab_arrow_left_ParamLimits

0x4760,	// (0x000133d0) aid_touch_tab_arrow_right_ParamLimits

0x47cd,	// (0x0001343d) clock_nsta_pane_ParamLimits

0x5b53,	// (0x000147c3) navi_icon_pane_g1_ParamLimits

0x5b5f,	// (0x000147cf) navi_text_pane_t1_ParamLimits

0x712f,	// (0x00015d9f) navi_icon_text_pane_g1_ParamLimits

0x713b,	// (0x00015dab) navi_icon_text_pane_t1_ParamLimits

0x8d41,	// (0x000179b1) list_single_hc_apps_pane_g1_ParamLimits

0xd3eb,	// (0x0001c05b) list_single_hc_apps_pane_g2_ParamLimits

0xfcd8,	// (0x0001e948) list_single_hc_apps_pane_g_ParamLimits

0xd404,	// (0x0001c074) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd420,	// (0x0001c090) list_single_hc_apps_pane_t1_ParamLimits

0xd75f,	// (0x0001c3cf) popup_toolbar2_fixed_window_ParamLimits

0xd75f,	// (0x0001c3cf) popup_toolbar2_fixed_window

0x462a,	// (0x0001329a) popup_toolbar2_float_window

0x208c,	// (0x00010cfc) bg_popup_sub_pane_cp27

0x8dbd,	// (0x00017a2d) grid_toolbar2_float_pane

0x208c,	// (0x00010cfc) bg_popup_sub_pane_cp26

0x8dbd,	// (0x00017a2d) grid_toolbar2_fixed_pane

0x8dc5,	// (0x00017a35) cell_toolbar2_fixed_pane_ParamLimits

0x8dc5,	// (0x00017a35) cell_toolbar2_fixed_pane

0x8dd6,	// (0x00017a46) cell_toolbar2_fixed_pane_g1

0x8ddf,	// (0x00017a4f) toolbar2_fixed_button_pane

0x4c0a,	// (0x0001387a) toolbar2_fixed_button_pane_g1

0x4c1a,	// (0x0001388a) toolbar2_fixed_button_pane_g2

0x4c12,	// (0x00013882) toolbar2_fixed_button_pane_g3

0x4c2a,	// (0x0001389a) toolbar2_fixed_button_pane_g4

0x4c22,	// (0x00013892) toolbar2_fixed_button_pane_g5

0x4c32,	// (0x000138a2) toolbar2_fixed_button_pane_g6

0x4c3a,	// (0x000138aa) toolbar2_fixed_button_pane_g7

0x4c4a,	// (0x000138ba) toolbar2_fixed_button_pane_g8

0x4c42,	// (0x000138b2) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0001e4d6) toolbar2_fixed_button_pane_g

0x8de7,	// (0x00017a57) cell_toolbar2_float_pane_ParamLimits

0x8de7,	// (0x00017a57) cell_toolbar2_float_pane

0x8df8,	// (0x00017a68) cell_toolbar2_float_pane_g1

0x8ddf,	// (0x00017a4f) toolbar2_fixed_button_pane_cp

0x772d,	// (0x0001639d) fep_vkb_accented_list_pane_ParamLimits

0x772d,	// (0x0001639d) fep_vkb_accented_list_pane

0xe59a,	// (0x0001d20a) bg_popup_fep_shadow_pane_g9

0x3dd1,	// (0x00012a41) bg_popup_fep_shadow_pane_cp3

0x3237,	// (0x00011ea7) list_accented_list_pane

0x8e01,	// (0x00017a71) list_single_accented_list_pane_ParamLimits

0x8e01,	// (0x00017a71) list_single_accented_list_pane

0x3dd1,	// (0x00012a41) list_highlight_pane_cp10

0x8e12,	// (0x00017a82) list_single_accented_list_pane_t1

0x457a,	// (0x000131ea) popup_slider_window_ParamLimits

0x457a,	// (0x000131ea) popup_slider_window

0x88e0,	// (0x00017550) aid_indentation_list_msg

0x8ecc,	// (0x00017b3c) bg_popup_window_pane_cp19

0x8f36,	// (0x00017ba6) popup_slider_window_g1

0x8f52,	// (0x00017bc2) popup_slider_window_g2

0x8f6e,	// (0x00017bde) popup_slider_window_g3

0x0005,

0xfcdd,	// (0x0001e94d) popup_slider_window_g

0x8fca,	// (0x00017c3a) popup_slider_window_t1

0x903e,	// (0x00017cae) small_volume_slider_vertical_pane

0x7609,	// (0x00016279) small_volume_slider_vertical_pane_g1

0x7609,	// (0x00016279) small_volume_slider_vertical_pane_g2

0x905a,	// (0x00017cca) small_volume_slider_vertical_pane_g3

0x0002,

0xfcef,	// (0x0001e95f) small_volume_slider_vertical_pane_g

0xd52f,	// (0x0001c19f) area_side_right_pane_ParamLimits

0xd52f,	// (0x0001c19f) area_side_right_pane

0xe6d6,	// (0x0001d346) aid_size_side_button_ParamLimits

0xe6d6,	// (0x0001d346) aid_size_side_button

0xe6ea,	// (0x0001d35a) grid_sctrl_middle_pane_ParamLimits

0xe6ea,	// (0x0001d35a) grid_sctrl_middle_pane

0xe70a,	// (0x0001d37a) sctrl_sk_bottom_pane

0xe71b,	// (0x0001d38b) sctrl_sk_top_pane

0xe72d,	// (0x0001d39d) aid_touch_sctrl_top

0x2423,	// (0x00011093) bg_sctrl_sk_pane_ParamLimits

0x2423,	// (0x00011093) bg_sctrl_sk_pane

0xe73a,	// (0x0001d3aa) sctrl_sk_top_pane_g1

0xe747,	// (0x0001d3b7) sctrl_sk_top_pane_t1

0xe72d,	// (0x0001d39d) aid_touch_sctrl_bottom

0x2423,	// (0x00011093) bg_sctrl_sk_pane_cp_ParamLimits

0x2423,	// (0x00011093) bg_sctrl_sk_pane_cp

0xe762,	// (0x0001d3d2) sctrl_sk_bottom_pane_g1

0xe747,	// (0x0001d3b7) sctrl_sk_bottom_pane_t1

0xe76b,	// (0x0001d3db) cell_sctrl_middle_pane_ParamLimits

0xe76b,	// (0x0001d3db) cell_sctrl_middle_pane

0xe786,	// (0x0001d3f6) aid_touch_sctrl_middle_ParamLimits

0xe786,	// (0x0001d3f6) aid_touch_sctrl_middle

0x2f59,	// (0x00011bc9) bg_sctrl_middle_pane_ParamLimits

0x2f59,	// (0x00011bc9) bg_sctrl_middle_pane

0x7884,	// (0x000164f4) cell_sctrl_middle_pane_g1_ParamLimits

0x7884,	// (0x000164f4) cell_sctrl_middle_pane_g1

0xe798,	// (0x0001d408) cell_sctrl_middle_pane_g2_ParamLimits

0xe798,	// (0x0001d408) cell_sctrl_middle_pane_g2

0x0001,

0xfcfb,	// (0x0001e96b) cell_sctrl_middle_pane_g_ParamLimits

0xfcfb,	// (0x0001e96b) cell_sctrl_middle_pane_g

0x4c0a,	// (0x0001387a) bg_sctrl_middle_pane_g1

0x4c1a,	// (0x0001388a) bg_sctrl_middle_pane_g2

0x4c12,	// (0x00013882) bg_sctrl_middle_pane_g3

0x4c2a,	// (0x0001389a) bg_sctrl_middle_pane_g4

0x4c22,	// (0x00013892) bg_sctrl_middle_pane_g5

0x4c32,	// (0x000138a2) bg_sctrl_middle_pane_g6

0x4c3a,	// (0x000138aa) bg_sctrl_middle_pane_g7

0x4c4a,	// (0x000138ba) bg_sctrl_middle_pane_g8

0x0007,

0xfd00,	// (0x0001e970) bg_sctrl_middle_pane_g

0x4c42,	// (0x000138b2) bg_sctrl_middle_pane_g8_copy1

0x4c0a,	// (0x0001387a) bg_sctrl_sk_pane_g1

0x4c1a,	// (0x0001388a) bg_sctrl_sk_pane_g2

0x4c12,	// (0x00013882) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0001e4d6) bg_sctrl_sk_pane_g

0x291c,	// (0x0001158c) aid_size_touch_scroll_bar

0x4c2a,	// (0x0001389a) bg_sctrl_sk_pane_g4

0x4c22,	// (0x00013892) bg_sctrl_sk_pane_g5

0x4c32,	// (0x000138a2) bg_sctrl_sk_pane_g6

0x4c3a,	// (0x000138aa) bg_sctrl_sk_pane_g7

0x4c4a,	// (0x000138ba) bg_sctrl_sk_pane_g8

0x4c42,	// (0x000138b2) bg_sctrl_sk_pane_g9

0x41f3,	// (0x00012e63) popup_fep_china_hwr2_fs_candidate_window

0x41fd,	// (0x00012e6d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x41fd,	// (0x00012e6d) popup_fep_china_hwr2_fs_control_window

0x7884,	// (0x000164f4) sctrl_sk_top_pane_g2

0x0001,

0xfcf6,	// (0x0001e966) sctrl_sk_top_pane_g

0x9063,	// (0x00017cd3) aid_fep_china_hwr2_fs_cell_ParamLimits

0x9063,	// (0x00017cd3) aid_fep_china_hwr2_fs_cell

0x9075,	// (0x00017ce5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x9075,	// (0x00017ce5) bg_popup_fep_shadow_pane_cp4

0x908c,	// (0x00017cfc) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x908c,	// (0x00017cfc) bg_popup_fep_shadow_pane_cp5

0x909e,	// (0x00017d0e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x909e,	// (0x00017d0e) popup_fep_china_hwr2_fs_control_bar_grid

0x90ae,	// (0x00017d1e) popup_fep_china_hwr2_fs_control_funtion_grid

0x90b6,	// (0x00017d26) aid_fep_china_hwr2_fs_candi_cell

0x208c,	// (0x00010cfc) bg_popup_fep_shadow_pane_cp6

0x90c0,	// (0x00017d30) popup_fep_china_hwr2_fs_candidate_grid

0x90ca,	// (0x00017d3a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x90ca,	// (0x00017d3a) cell_fep_china_hwr2_fs_funtion_grid

0x7609,	// (0x00016279) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x90e2,	// (0x00017d52) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x90e2,	// (0x00017d52) cell_fep_china_hwr2_fs_funtion_grid_g1

0x90f0,	// (0x00017d60) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x90f0,	// (0x00017d60) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd11,	// (0x0001e981) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd11,	// (0x0001e981) cell_fep_china_hwr2_fs_funtion_grid_g

0x9106,	// (0x00017d76) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x9106,	// (0x00017d76) cell_fep_china_hwr2_fs_funtion_grid_t1

0x911b,	// (0x00017d8b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x911b,	// (0x00017d8b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd16,	// (0x0001e986) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd16,	// (0x0001e986) cell_fep_china_hwr2_fs_funtion_grid_t

0x9137,	// (0x00017da7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x913f,	// (0x00017daf) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9147,	// (0x00017db7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1b,	// (0x0001e98b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x914f,	// (0x00017dbf) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x914f,	// (0x00017dbf) cell_fep_china_hwr2_fs_candidate_grid

0x9168,	// (0x00017dd8) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9170,	// (0x00017de0) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7609,	// (0x00016279) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7609,	// (0x00016279) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb42,	// (0x0001e7b2) cell_fep_china_hwr2_fs_candidate_grid_g

0x9178,	// (0x00017de8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x47da,	// (0x0001344a) clock_nsta_pane_cp_24_ParamLimits

0x47da,	// (0x0001344a) clock_nsta_pane_cp_24

0x4858,	// (0x000134c8) indicator_nsta_pane_cp_24_ParamLimits

0x4858,	// (0x000134c8) indicator_nsta_pane_cp_24

0x59db,	// (0x0001464b) heading_pane_g1

0x0001,

0xf8cb,	// (0x0001e53b) heading_pane_g

0x651a,	// (0x0001518a) grid_sct_catagory_button_pane

0x654c,	// (0x000151bc) scroll_pane_cp5_ParamLimits

0x717d,	// (0x00015ded) button_value_adjust_pane_cp5_ParamLimits

0x717d,	// (0x00015ded) button_value_adjust_pane_cp5

0x7275,	// (0x00015ee5) form2_midp_time_pane_ParamLimits

0x9186,	// (0x00017df6) cell_sct_catagory_button_pane_ParamLimits

0x9186,	// (0x00017df6) cell_sct_catagory_button_pane

0x75ce,	// (0x0001623e) bg_button_pane_cp01_ParamLimits

0x75ce,	// (0x0001623e) bg_button_pane_cp01

0x7609,	// (0x00016279) cell_sct_catagory_button_pane_g1

0x45b9,	// (0x00013229) popup_tb_extension_window

0x9198,	// (0x00017e08) aid_size_cell_ext_ParamLimits

0x9198,	// (0x00017e08) aid_size_cell_ext

0x2423,	// (0x00011093) bg_tb_trans_pane_cp1_ParamLimits

0x2423,	// (0x00011093) bg_tb_trans_pane_cp1

0x91b8,	// (0x00017e28) grid_tb_ext_pane_ParamLimits

0x91b8,	// (0x00017e28) grid_tb_ext_pane

0x91e8,	// (0x00017e58) cell_tb_ext_pane_ParamLimits

0x91e8,	// (0x00017e58) cell_tb_ext_pane

0x91ff,	// (0x00017e6f) cell_tb_ext_pane_g1_ParamLimits

0x91ff,	// (0x00017e6f) cell_tb_ext_pane_g1

0x921c,	// (0x00017e8c) cell_tb_ext_pane_t1

0x2423,	// (0x00011093) list_highlight_pane_cp11_ParamLimits

0x2423,	// (0x00011093) list_highlight_pane_cp11

0xd77e,	// (0x0001c3ee) popup_uni_indicator_window_ParamLimits

0xd77e,	// (0x0001c3ee) popup_uni_indicator_window

0x2f59,	// (0x00011bc9) bg_popup_sub_pane_cp14

0x9237,	// (0x00017ea7) list_uniindi_pane

0x9243,	// (0x00017eb3) uniindi_top_pane

0x2423,	// (0x00011093) bg_uniindi_top_pane

0x9262,	// (0x00017ed2) uniindi_top_pane_g1

0x9278,	// (0x00017ee8) uniindi_top_pane_g2

0x0003,

0xfd22,	// (0x0001e992) uniindi_top_pane_g

0x92a2,	// (0x00017f12) uniindi_top_pane_t1

0x92cc,	// (0x00017f3c) list_single_uniindi_pane_ParamLimits

0x92cc,	// (0x00017f3c) list_single_uniindi_pane

0x7609,	// (0x00016279) bg_uniindi_top_pane_g1

0x92de,	// (0x00017f4e) list_single_uniindi_pane_g1

0x92f1,	// (0x00017f61) list_single_uniindi_pane_t1

0x208c,	// (0x00010cfc) control_bg_pane

0x9316,	// (0x00017f86) bg_sctrl_sk_pane_cp1

0x931f,	// (0x00017f8f) bg_sctrl_sk_pane_cp2

0x9328,	// (0x00017f98) control_bg_pane_g1

0x9331,	// (0x00017fa1) control_bg_pane_g2

0x0001,

0xfd2b,	// (0x0001e99b) control_bg_pane_g

0x6fad,	// (0x00015c1d) cell_indicator_nsta_pane_g1_ParamLimits

0x6fbb,	// (0x00015c2b) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa6,	// (0x0001e716) cell_indicator_nsta_pane_g_ParamLimits

0xd0c0,	// (0x0001bd30) form2_midp_time_pane_t1_ParamLimits

0x275e,	// (0x000113ce) main_idle_act4_pane_ParamLimits

0x275e,	// (0x000113ce) main_idle_act4_pane

0x45b9,	// (0x00013229) popup_tb_extension_window_ParamLimits

0x91d8,	// (0x00017e48) tb_ext_find_pane_ParamLimits

0x91d8,	// (0x00017e48) tb_ext_find_pane

0x933a,	// (0x00017faa) ai_gene_pane_1_cp1

0x3f0e,	// (0x00012b7e) ai_gene_pane_2_cp1

0x9342,	// (0x00017fb2) list_single_idle_plugin_calendar_pane

0x934b,	// (0x00017fbb) list_single_idle_plugin_notification_pane

0x9354,	// (0x00017fc4) list_single_idle_plugin_player_pane

0x935d,	// (0x00017fcd) list_single_idle_plugin_shortcut_pane_ParamLimits

0x935d,	// (0x00017fcd) list_single_idle_plugin_shortcut_pane

0x937f,	// (0x00017fef) main_idle_act4_pane_t1

0x9391,	// (0x00018001) main_idle_act4_pane_t2

0x0001,

0xfd30,	// (0x0001e9a0) main_idle_act4_pane_t

0x93a3,	// (0x00018013) middle_sk_idle_act4_pane_ParamLimits

0x93a3,	// (0x00018013) middle_sk_idle_act4_pane

0x93b9,	// (0x00018029) popup_clock_digital_analogue_window_cp2

0x93d3,	// (0x00018043) shortcut_wheel_idle_act4_pane_ParamLimits

0x93d3,	// (0x00018043) shortcut_wheel_idle_act4_pane

0x7609,	// (0x00016279) shortcut_wheel_idle_act4_pane_g1

0x7609,	// (0x00016279) shortcut_wheel_idle_act4_pane_g2

0x7609,	// (0x00016279) shortcut_wheel_idle_act4_pane_g3

0x7609,	// (0x00016279) shortcut_wheel_idle_act4_pane_g4

0x7609,	// (0x00016279) shortcut_wheel_idle_act4_pane_g5

0x93e7,	// (0x00018057) shortcut_wheel_idle_act4_pane_g6

0x93ef,	// (0x0001805f) shortcut_wheel_idle_act4_pane_g7

0x93f7,	// (0x00018067) shortcut_wheel_idle_act4_pane_g8

0x93ff,	// (0x0001806f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd35,	// (0x0001e9a5) shortcut_wheel_idle_act4_pane_g

0x7884,	// (0x000164f4) middle_sk_idle_act4_pane_g1_ParamLimits

0x7884,	// (0x000164f4) middle_sk_idle_act4_pane_g1

0x9463,	// (0x000180d3) middle_sk_idle_act4_pane_g2_ParamLimits

0x9463,	// (0x000180d3) middle_sk_idle_act4_pane_g2

0x0001,

0xfd58,	// (0x0001e9c8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd58,	// (0x0001e9c8) middle_sk_idle_act4_pane_g

0x946f,	// (0x000180df) middle_sk_idle_act4_pane_t1_ParamLimits

0x946f,	// (0x000180df) middle_sk_idle_act4_pane_t1

0x948c,	// (0x000180fc) grid_ai_shortcut_pane_ParamLimits

0x948c,	// (0x000180fc) grid_ai_shortcut_pane

0x94a5,	// (0x00018115) list_highlight_pane_cp16_ParamLimits

0x94a5,	// (0x00018115) list_highlight_pane_cp16

0x94b2,	// (0x00018122) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x94b2,	// (0x00018122) list_single_idle_plugin_shortcut_pane_g1

0x94be,	// (0x0001812e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x94be,	// (0x0001812e) list_single_idle_plugin_shortcut_pane_g2

0x94d6,	// (0x00018146) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x94d6,	// (0x00018146) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5d,	// (0x0001e9cd) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5d,	// (0x0001e9cd) list_single_idle_plugin_shortcut_pane_g

0x94e9,	// (0x00018159) cell_ai_shortcut_pane_ParamLimits

0x94e9,	// (0x00018159) cell_ai_shortcut_pane

0x950a,	// (0x0001817a) cell_ai_shortcut_pane_g1_ParamLimits

0x950a,	// (0x0001817a) cell_ai_shortcut_pane_g1

0x933a,	// (0x00017faa) ai_gene_pane_1_cp2

0x952c,	// (0x0001819c) ai_gene_pane_2_cp2

0x9534,	// (0x000181a4) list_highlight_pane_cp15

0x953d,	// (0x000181ad) list_single_idle_plugin_calendar_pane_g1

0x9534,	// (0x000181a4) list_highlight_pane_cp17

0x9545,	// (0x000181b5) list_single_idle_plugin_calendar_pane_g1_copy1

0x954d,	// (0x000181bd) list_single_idle_plugin_player_pane_g1

0x6773,	// (0x000153e3) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd64,	// (0x0001e9d4) list_single_idle_plugin_player_pane_g

0x9555,	// (0x000181c5) list_single_idle_plugin_player_pane_t1

0x9563,	// (0x000181d3) list_single_idle_plugin_player_pane_t2

0x9571,	// (0x000181e1) list_single_idle_plugin_player_pane_t3

0x957f,	// (0x000181ef) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd69,	// (0x0001e9d9) list_single_idle_plugin_player_pane_t

0x958d,	// (0x000181fd) wait_bar_pane_cp15

0x9595,	// (0x00018205) grid_ai_notification_pane

0x6773,	// (0x000153e3) list_single_idle_plugin_notification_pane_g1

0x959e,	// (0x0001820e) cell_ai_notification_pane_ParamLimits

0x959e,	// (0x0001820e) cell_ai_notification_pane

0x95ab,	// (0x0001821b) cell_ai_notification_pane_g1

0x95b3,	// (0x00018223) cell_ai_notification_pane_t1

0x95c1,	// (0x00018231) tb_ext_find_button_pane

0x95c9,	// (0x00018239) tb_ext_find_pane_g1

0x95d1,	// (0x00018241) tb_ext_find_pane_t1

0x3737,	// (0x000123a7) tb_ext_find_button_pane_g1

0x95df,	// (0x0001824f) tb_ext_find_button_pane_g2

0x0001,

0xfd72,	// (0x0001e9e2) tb_ext_find_button_pane_g

0x937f,	// (0x00017fef) main_idle_act4_pane_t1_ParamLimits

0x9391,	// (0x00018001) main_idle_act4_pane_t2_ParamLimits

0xfd30,	// (0x0001e9a0) main_idle_act4_pane_t_ParamLimits

0x93b9,	// (0x00018029) popup_clock_digital_analogue_window_cp2_ParamLimits

0x93c7,	// (0x00018037) sat_plugin_idle_act4_pane_ParamLimits

0x93c7,	// (0x00018037) sat_plugin_idle_act4_pane

0x95e8,	// (0x00018258) sat_plugin_idle_act4_pane_t1_ParamLimits

0x95e8,	// (0x00018258) sat_plugin_idle_act4_pane_t1

0x95fb,	// (0x0001826b) sat_plugin_idle_act4_pane_t2_ParamLimits

0x95fb,	// (0x0001826b) sat_plugin_idle_act4_pane_t2

0x960e,	// (0x0001827e) sat_plugin_idle_act4_pane_t3_ParamLimits

0x960e,	// (0x0001827e) sat_plugin_idle_act4_pane_t3

0x9621,	// (0x00018291) sat_plugin_idle_act4_pane_t4_ParamLimits

0x9621,	// (0x00018291) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd77,	// (0x0001e9e7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd77,	// (0x0001e9e7) sat_plugin_idle_act4_pane_t

0xd6c7,	// (0x0001c337) popup_battery_window_ParamLimits

0xd6c7,	// (0x0001c337) popup_battery_window

0x2423,	// (0x00011093) bg_popup_sub_pane_cp25_ParamLimits

0x2423,	// (0x00011093) bg_popup_sub_pane_cp25

0x9634,	// (0x000182a4) popup_battery_window_g1_ParamLimits

0x9634,	// (0x000182a4) popup_battery_window_g1

0x9640,	// (0x000182b0) popup_battery_window_t1_ParamLimits

0x9640,	// (0x000182b0) popup_battery_window_t1

0x9652,	// (0x000182c2) popup_battery_window_t2_ParamLimits

0x9652,	// (0x000182c2) popup_battery_window_t2

0x0001,

0xfd80,	// (0x0001e9f0) popup_battery_window_t_ParamLimits

0xfd80,	// (0x0001e9f0) popup_battery_window_t

0x3dd9,	// (0x00012a49) midp_canvas_pane_ParamLimits

0x3e50,	// (0x00012ac0) midp_keypad_pane_ParamLimits

0x3e50,	// (0x00012ac0) midp_keypad_pane

0x414b,	// (0x00012dbb) main_midp_pane_ParamLimits

0x7039,	// (0x00015ca9) signal_pane_g2_cp_ParamLimits

0x966f,	// (0x000182df) aid_size_cell_midp_keypad_ParamLimits

0x966f,	// (0x000182df) aid_size_cell_midp_keypad

0x9689,	// (0x000182f9) midp_keyp_game_grid_pane_ParamLimits

0x9689,	// (0x000182f9) midp_keyp_game_grid_pane

0x96a9,	// (0x00018319) midp_keyp_rocker_pane_ParamLimits

0x96a9,	// (0x00018319) midp_keyp_rocker_pane

0x96d4,	// (0x00018344) midp_keyp_sk_left_pane_ParamLimits

0x96d4,	// (0x00018344) midp_keyp_sk_left_pane

0x972e,	// (0x0001839e) midp_keyp_sk_right_pane_ParamLimits

0x972e,	// (0x0001839e) midp_keyp_sk_right_pane

0x208c,	// (0x00010cfc) bg_button_pane_cp03

0x9788,	// (0x000183f8) midp_keyp_sk_left_pane_g1

0x208c,	// (0x00010cfc) bg_button_pane_cp04

0x9788,	// (0x000183f8) midp_keyp_sk_right_pane_g1

0x7609,	// (0x00016279) midp_keyp_rocker_pane_g1

0x9791,	// (0x00018401) keyp_game_cell_pane_ParamLimits

0x9791,	// (0x00018401) keyp_game_cell_pane

0x208c,	// (0x00010cfc) bg_button_pane_cp02

0x97a4,	// (0x00018414) keyp_game_cell_pane_g1

0xd6fd,	// (0x0001c36d) popup_fep_vkb2_window_ParamLimits

0xd6fd,	// (0x0001c36d) popup_fep_vkb2_window

0xe7b6,	// (0x0001d426) aid_size_cell_vkb2_ParamLimits

0xe7b6,	// (0x0001d426) aid_size_cell_vkb2

0xe80a,	// (0x0001d47a) popup_fep_vkb2_window_g1_ParamLimits

0xe80a,	// (0x0001d47a) popup_fep_vkb2_window_g1

0xe84a,	// (0x0001d4ba) vkb2_area_bottom_pane_ParamLimits

0xe84a,	// (0x0001d4ba) vkb2_area_bottom_pane

0xe896,	// (0x0001d506) vkb2_area_keypad_pane_ParamLimits

0xe896,	// (0x0001d506) vkb2_area_keypad_pane

0xe8d8,	// (0x0001d548) vkb2_area_top_pane_ParamLimits

0xe8d8,	// (0x0001d548) vkb2_area_top_pane

0xe952,	// (0x0001d5c2) vkb2_top_entry_pane_ParamLimits

0xe952,	// (0x0001d5c2) vkb2_top_entry_pane

0xe97c,	// (0x0001d5ec) vkb2_top_grid_left_pane_ParamLimits

0xe97c,	// (0x0001d5ec) vkb2_top_grid_left_pane

0xe99a,	// (0x0001d60a) vkb2_top_grid_right_pane_ParamLimits

0xe99a,	// (0x0001d60a) vkb2_top_grid_right_pane

0xe9b8,	// (0x0001d628) vkb2_cell_keypad_pane_ParamLimits

0xe9b8,	// (0x0001d628) vkb2_cell_keypad_pane

0xea89,	// (0x0001d6f9) vkb2_area_bottom_grid_pane_ParamLimits

0xea89,	// (0x0001d6f9) vkb2_area_bottom_grid_pane

0xeaaf,	// (0x0001d71f) vkb2_area_bottom_pane_g1_ParamLimits

0xeaaf,	// (0x0001d71f) vkb2_area_bottom_pane_g1

0xead3,	// (0x0001d743) vkb2_area_bottom_pane_g2_ParamLimits

0xead3,	// (0x0001d743) vkb2_area_bottom_pane_g2

0xeb01,	// (0x0001d771) vkb2_area_bottom_pane_g3_ParamLimits

0xeb01,	// (0x0001d771) vkb2_area_bottom_pane_g3

0x0002,

0xfd85,	// (0x0001e9f5) vkb2_area_bottom_pane_g_ParamLimits

0xfd85,	// (0x0001e9f5) vkb2_area_bottom_pane_g

0xeb62,	// (0x0001d7d2) vkb2_top_cell_left_pane_ParamLimits

0xeb62,	// (0x0001d7d2) vkb2_top_cell_left_pane

0xeb82,	// (0x0001d7f2) vkb2_top_entry_pane_g1_ParamLimits

0xeb82,	// (0x0001d7f2) vkb2_top_entry_pane_g1

0xeb90,	// (0x0001d800) vkb2_top_entry_pane_t1_ParamLimits

0xeb90,	// (0x0001d800) vkb2_top_entry_pane_t1

0xaaf4,	// (0x00019764) vkb2_top_entry_pane_t2_ParamLimits

0xaaf4,	// (0x00019764) vkb2_top_entry_pane_t2

0xab26,	// (0x00019796) vkb2_top_entry_pane_t3_ParamLimits

0xab26,	// (0x00019796) vkb2_top_entry_pane_t3

0x0002,

0xfd8c,	// (0x0001e9fc) vkb2_top_entry_pane_t_ParamLimits

0xfd8c,	// (0x0001e9fc) vkb2_top_entry_pane_t

0xebef,	// (0x0001d85f) vkb2_top_grid_right_pane_g1_ParamLimits

0xebef,	// (0x0001d85f) vkb2_top_grid_right_pane_g1

0xec05,	// (0x0001d875) vkb2_top_grid_right_pane_g2_ParamLimits

0xec05,	// (0x0001d875) vkb2_top_grid_right_pane_g2

0xec1d,	// (0x0001d88d) vkb2_top_grid_right_pane_g3_ParamLimits

0xec1d,	// (0x0001d88d) vkb2_top_grid_right_pane_g3

0xec35,	// (0x0001d8a5) vkb2_top_grid_right_pane_g4_ParamLimits

0xec35,	// (0x0001d8a5) vkb2_top_grid_right_pane_g4

0x0003,

0xfd93,	// (0x0001ea03) vkb2_top_grid_right_pane_g_ParamLimits

0xfd93,	// (0x0001ea03) vkb2_top_grid_right_pane_g

0xec4b,	// (0x0001d8bb) vkb2_top_cell_left_pane_g1

0xec62,	// (0x0001d8d2) vkb2_cell_keypad_pane_g1_ParamLimits

0xec62,	// (0x0001d8d2) vkb2_cell_keypad_pane_g1

0xab4a,	// (0x000197ba) vkb2_cell_keypad_pane_t1_ParamLimits

0xab4a,	// (0x000197ba) vkb2_cell_keypad_pane_t1

0xec70,	// (0x0001d8e0) vkb2_cell_bottom_grid_pane_ParamLimits

0xec70,	// (0x0001d8e0) vkb2_cell_bottom_grid_pane

0xeca9,	// (0x0001d919) vkb2_cell_bottom_grid_pane_g1

0x9407,	// (0x00018077) aid_call2_pane_cp02

0x940f,	// (0x0001807f) aid_call_pane_cp02

0x9417,	// (0x00018087) clock_digital_number_pane_cp10

0x941f,	// (0x0001808f) clock_digital_number_pane_cp11

0x9427,	// (0x00018097) clock_digital_number_pane_cp12

0x942f,	// (0x0001809f) clock_digital_number_pane_cp13

0x9437,	// (0x000180a7) clock_digital_separator_pane_cp10

0x3737,	// (0x000123a7) popup_clock_digital_analogue_window_cp2_g1

0x3737,	// (0x000123a7) popup_clock_digital_analogue_window_cp2_g2

0x943f,	// (0x000180af) popup_clock_digital_analogue_window_cp2_g3

0x3737,	// (0x000123a7) popup_clock_digital_analogue_window_cp2_g4

0x943f,	// (0x000180af) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd48,	// (0x0001e9b8) popup_clock_digital_analogue_window_cp2_g

0x9447,	// (0x000180b7) popup_clock_digital_analogue_window_cp2_t1

0x9455,	// (0x000180c5) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd53,	// (0x0001e9c3) popup_clock_digital_analogue_window_cp2_t

0x7609,	// (0x00016279) clock_digital_number_pane_cp10_g1

0x7609,	// (0x00016279) clock_digital_number_pane_cp10_g2

0x0001,

0xfb42,	// (0x0001e7b2) clock_digital_number_pane_cp10_g

0x7609,	// (0x00016279) clock_digital_separator_pane_cp10_g1

0x7609,	// (0x00016279) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb42,	// (0x0001e7b2) clock_digital_separator_pane_cp10_g

0x9284,	// (0x00017ef4) uniindi_top_pane_g3

0x9295,	// (0x00017f05) uniindi_top_pane_g4

0xea43,	// (0x0001d6b3) vkb2_row_keypad_pane_ParamLimits

0xea43,	// (0x0001d6b3) vkb2_row_keypad_pane

0xecc9,	// (0x0001d939) vkb2_cell_t_keypad_pane_ParamLimits

0xecc9,	// (0x0001d939) vkb2_cell_t_keypad_pane

0xecd9,	// (0x0001d949) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xecd9,	// (0x0001d949) vkb2_cell_t_keypad_pane_cp08

0xecec,	// (0x0001d95c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xecec,	// (0x0001d95c) vkb2_cell_t_keypad_pane_cp09

0xed00,	// (0x0001d970) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xed00,	// (0x0001d970) vkb2_cell_t_keypad_pane_cp01

0xed11,	// (0x0001d981) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xed11,	// (0x0001d981) vkb2_cell_t_keypad_pane_cp02

0xed22,	// (0x0001d992) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xed22,	// (0x0001d992) vkb2_cell_t_keypad_pane_cp03

0xed33,	// (0x0001d9a3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xed33,	// (0x0001d9a3) vkb2_cell_t_keypad_pane_cp04

0xed44,	// (0x0001d9b4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xed44,	// (0x0001d9b4) vkb2_cell_t_keypad_pane_cp05

0xed55,	// (0x0001d9c5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xed55,	// (0x0001d9c5) vkb2_cell_t_keypad_pane_cp06

0xed66,	// (0x0001d9d6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xed66,	// (0x0001d9d6) vkb2_cell_t_keypad_pane_cp07

0xed77,	// (0x0001d9e7) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xed77,	// (0x0001d9e7) vkb2_cell_t_keypad_pane_cp10

0x7884,	// (0x000164f4) vkb2_cell_t_keypad_pane_g1

0xab61,	// (0x000197d1) vkb2_cell_t_keypad_pane_t1

0x208c,	// (0x00010cfc) popup_grid_graphic2_window

0xed8c,	// (0x0001d9fc) aid_size_cell_graphic2_ParamLimits

0xed8c,	// (0x0001d9fc) aid_size_cell_graphic2

0xedc4,	// (0x0001da34) bg_popup_window_pane_cp21_ParamLimits

0xedc4,	// (0x0001da34) bg_popup_window_pane_cp21

0xedd2,	// (0x0001da42) graphic2_pages_pane_ParamLimits

0xedd2,	// (0x0001da42) graphic2_pages_pane

0xee18,	// (0x0001da88) grid_graphic2_control_pane_ParamLimits

0xee18,	// (0x0001da88) grid_graphic2_control_pane

0xee56,	// (0x0001dac6) grid_graphic2_pane_ParamLimits

0xee56,	// (0x0001dac6) grid_graphic2_pane

0xeeca,	// (0x0001db3a) cell_graphic2_pane

0x208c,	// (0x00010cfc) main_comp_mode_pane

0x8a86,	// (0x000176f6) list_ai3_gene_pane_ParamLimits

0x8ecc,	// (0x00017b3c) bg_popup_window_pane_cp19_ParamLimits

0x8ed8,	// (0x00017b48) bg_touch_area_indi_pane_ParamLimits

0x8ed8,	// (0x00017b48) bg_touch_area_indi_pane

0x8eee,	// (0x00017b5e) bg_touch_area_indi_pane_cp01_ParamLimits

0x8eee,	// (0x00017b5e) bg_touch_area_indi_pane_cp01

0x8f04,	// (0x00017b74) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f04,	// (0x00017b74) bg_touch_area_indi_pane_cp02

0x8f1c,	// (0x00017b8c) bg_touch_area_indi_pane_cp03_ParamLimits

0x8f1c,	// (0x00017b8c) bg_touch_area_indi_pane_cp03

0x8f36,	// (0x00017ba6) popup_slider_window_g1_ParamLimits

0x8f52,	// (0x00017bc2) popup_slider_window_g2_ParamLimits

0x8f6e,	// (0x00017bde) popup_slider_window_g3_ParamLimits

0xfcdd,	// (0x0001e94d) popup_slider_window_g_ParamLimits

0x8fca,	// (0x00017c3a) popup_slider_window_t1_ParamLimits

0x903e,	// (0x00017cae) small_volume_slider_vertical_pane_ParamLimits

0xeeca,	// (0x0001db3a) cell_graphic2_pane_ParamLimits

0xef18,	// (0x0001db88) bg_button_pane_cp10_ParamLimits

0xef18,	// (0x0001db88) bg_button_pane_cp10

0xef2b,	// (0x0001db9b) bg_button_pane_cp11_ParamLimits

0xef2b,	// (0x0001db9b) bg_button_pane_cp11

0xef3e,	// (0x0001dbae) graphic2_pages_pane_g1_ParamLimits

0xef3e,	// (0x0001dbae) graphic2_pages_pane_g1

0xef59,	// (0x0001dbc9) graphic2_pages_pane_g2_ParamLimits

0xef59,	// (0x0001dbc9) graphic2_pages_pane_g2

0x0001,

0xfda1,	// (0x0001ea11) graphic2_pages_pane_g_ParamLimits

0xfda1,	// (0x0001ea11) graphic2_pages_pane_g

0xef71,	// (0x0001dbe1) graphic2_pages_pane_t1_ParamLimits

0xef71,	// (0x0001dbe1) graphic2_pages_pane_t1

0xef87,	// (0x0001dbf7) cell_graphic2_control_pane_ParamLimits

0xef87,	// (0x0001dbf7) cell_graphic2_control_pane

0xefa8,	// (0x0001dc18) cell_graphic2_pane_g1_ParamLimits

0xefa8,	// (0x0001dc18) cell_graphic2_pane_g1

0xefb5,	// (0x0001dc25) cell_graphic2_pane_g2_ParamLimits

0xefb5,	// (0x0001dc25) cell_graphic2_pane_g2

0xefc2,	// (0x0001dc32) cell_graphic2_pane_g3_ParamLimits

0xefc2,	// (0x0001dc32) cell_graphic2_pane_g3

0xefcf,	// (0x0001dc3f) cell_graphic2_pane_g4_ParamLimits

0xefcf,	// (0x0001dc3f) cell_graphic2_pane_g4

0xefdc,	// (0x0001dc4c) cell_graphic2_pane_g5_ParamLimits

0xefdc,	// (0x0001dc4c) cell_graphic2_pane_g5

0x0004,

0xfda6,	// (0x0001ea16) cell_graphic2_pane_g_ParamLimits

0xfda6,	// (0x0001ea16) cell_graphic2_pane_g

0xeff7,	// (0x0001dc67) cell_graphic2_pane_t1_ParamLimits

0xeff7,	// (0x0001dc67) cell_graphic2_pane_t1

0x4d24,	// (0x00013994) grid_highlight_pane_cp11_ParamLimits

0x4d24,	// (0x00013994) grid_highlight_pane_cp11

0x2423,	// (0x00011093) bg_button_pane_cp05

0xf020,	// (0x0001dc90) cell_graphic2_control_pane_g1

0x7609,	// (0x00016279) bg_touch_area_indi_pane_g1

0xab8d,	// (0x000197fd) aid_cmod_rocker_key_size

0xab97,	// (0x00019807) aid_cmode_itu_key_size

0xaba1,	// (0x00019811) main_cmode_video_pane

0xabab,	// (0x0001981b) main_comp_mode_itu_pane

0xabb7,	// (0x00019827) main_comp_mode_rocker_pane

0xabc3,	// (0x00019833) cell_cmode_rocker_pane_ParamLimits

0xabc3,	// (0x00019833) cell_cmode_rocker_pane

0xabd5,	// (0x00019845) cell_cmode_itu_pane_ParamLimits

0xabd5,	// (0x00019845) cell_cmode_itu_pane

0x2f59,	// (0x00011bc9) bg_button_pane_cp06_ParamLimits

0x2f59,	// (0x00011bc9) bg_button_pane_cp06

0x7884,	// (0x000164f4) cell_cmode_rocker_pane_g1_ParamLimits

0x7884,	// (0x000164f4) cell_cmode_rocker_pane_g1

0x90e2,	// (0x00017d52) cell_cmode_rocker_pane_g2_ParamLimits

0x90e2,	// (0x00017d52) cell_cmode_rocker_pane_g2

0x0001,

0xfdb6,	// (0x0001ea26) cell_cmode_rocker_pane_g_ParamLimits

0xfdb6,	// (0x0001ea26) cell_cmode_rocker_pane_g

0x208c,	// (0x00010cfc) bg_button_pane_cp07

0xabea,	// (0x0001985a) cell_cmode_itu_pane_g1

0xabf3,	// (0x00019863) cell_cmode_itu_pane_t1

0xac01,	// (0x00019871) cell_cmode_itu_pane_t2

0x0001,

0xfdbb,	// (0x0001ea2b) cell_cmode_itu_pane_t

0x9306,	// (0x00017f76) aid_touch_ctrl_left

0x930e,	// (0x00017f7e) aid_touch_ctrl_right

0x208c,	// (0x00010cfc) compa_mode_pane

0xf048,	// (0x0001dcb8) aid_cmod_rocker_key_size_cp

0xf052,	// (0x0001dcc2) aid_cmode_itu_key_size_cp

0xac0f,	// (0x0001987f) compa_mode_pane_g1

0xac17,	// (0x00019887) compa_mode_pane_g2

0xac1f,	// (0x0001988f) compa_mode_pane_g3

0x0002,

0xfdc0,	// (0x0001ea30) compa_mode_pane_g

0xf05c,	// (0x0001dccc) main_comp_mode_itu_pane_cp

0xf064,	// (0x0001dcd4) main_comp_mode_rocker_pane_cp

0xf06c,	// (0x0001dcdc) cell_cmode_itu_pane_cp_ParamLimits

0xf06c,	// (0x0001dcdc) cell_cmode_itu_pane_cp

0xf081,	// (0x0001dcf1) cell_cmode_rocker_pane_cp_ParamLimits

0xf081,	// (0x0001dcf1) cell_cmode_rocker_pane_cp

0x2f59,	// (0x00011bc9) bg_button_pane_cp06_cp_ParamLimits

0x2f59,	// (0x00011bc9) bg_button_pane_cp06_cp

0x7884,	// (0x000164f4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7884,	// (0x000164f4) cell_cmode_rocker_pane_g1_cp

0x7609,	// (0x00016279) cell_cmode_rocker_pane_g2_cp

0x208c,	// (0x00010cfc) bg_button_pane_cp07_cp

0xf093,	// (0x0001dd03) cell_cmode_itu_pane_g1_cp

0xf09c,	// (0x0001dd0c) cell_cmode_itu_pane_t1_cp

0xf09c,	// (0x0001dd0c) cell_cmode_itu_pane_t2_cp

0x622e,	// (0x00014e9e) settings_code_pane_cp2

0x2180,	// (0x00010df0) bg_popup_window_pane_cp3_ParamLimits

0x25f1,	// (0x00011261) heading_pane_cp3_ParamLimits

0x25fd,	// (0x0001126d) listscroll_popup_graphic_pane_ParamLimits

0xe37e,	// (0x0001cfee) fep_hwr_aid_pane_ParamLimits

0xe72d,	// (0x0001d39d) aid_touch_sctrl_top_ParamLimits

0xe73a,	// (0x0001d3aa) sctrl_sk_top_pane_g1_ParamLimits

0x7884,	// (0x000164f4) sctrl_sk_top_pane_g2_ParamLimits

0xfcf6,	// (0x0001e966) sctrl_sk_top_pane_g_ParamLimits

0xe747,	// (0x0001d3b7) sctrl_sk_top_pane_t1_ParamLimits

0xe72d,	// (0x0001d39d) aid_touch_sctrl_bottom_ParamLimits

0xe747,	// (0x0001d3b7) sctrl_sk_bottom_pane_t1_ParamLimits

0x9250,	// (0x00017ec0) aid_area_touch_clock

0xe91a,	// (0x0001d58a) aid_vkb2_area_top_pane_cell_ParamLimits

0xe91a,	// (0x0001d58a) aid_vkb2_area_top_pane_cell

0xea65,	// (0x0001d6d5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xea65,	// (0x0001d6d5) aid_vkb2_area_bottom_pane_cell

0xaaec,	// (0x0001975c) popup_char_count_window

0xac27,	// (0x00019897) popup_char_count_window_g1

0xac30,	// (0x000198a0) popup_char_count_window_g2

0xac39,	// (0x000198a9) popup_char_count_window_g3

0x0002,

0xfdc7,	// (0x0001ea37) popup_char_count_window_g

0xac42,	// (0x000198b2) popup_char_count_window_t1

0xe7e8,	// (0x0001d458) popup_fep_char_preview_window_ParamLimits

0xe7e8,	// (0x0001d458) popup_fep_char_preview_window

0xe938,	// (0x0001d5a8) vkb2_top_candi_pane_ParamLimits

0xe938,	// (0x0001d5a8) vkb2_top_candi_pane

0xf0aa,	// (0x0001dd1a) cell_vkb2_top_candi_pane_ParamLimits

0xf0aa,	// (0x0001dd1a) cell_vkb2_top_candi_pane

0x5361,	// (0x00013fd1) bg_popup_fep_char_preview_window_ParamLimits

0x5361,	// (0x00013fd1) bg_popup_fep_char_preview_window

0xf0f7,	// (0x0001dd67) popup_fep_char_preview_window_t1_ParamLimits

0xf0f7,	// (0x0001dd67) popup_fep_char_preview_window_t1

0xac60,	// (0x000198d0) bg_popup_fep_char_preview_window_g1

0xac58,	// (0x000198c8) bg_popup_fep_char_preview_window_g2

0xac50,	// (0x000198c0) bg_popup_fep_char_preview_window_g3

0xac80,	// (0x000198f0) bg_popup_fep_char_preview_window_g4

0xac78,	// (0x000198e8) bg_popup_fep_char_preview_window_g5

0xf131,	// (0x0001dda1) bg_popup_fep_char_preview_window_g6

0xac70,	// (0x000198e0) bg_popup_fep_char_preview_window_g7

0xac68,	// (0x000198d8) bg_popup_fep_char_preview_window_g8

0xac88,	// (0x000198f8) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdce,	// (0x0001ea3e) bg_popup_fep_char_preview_window_g

0x7884,	// (0x000164f4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7884,	// (0x000164f4) cell_vkb2_top_candi_pane_g1

0x7e8b,	// (0x00016afb) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7e8b,	// (0x00016afb) cell_vkb2_top_candi_pane_g2

0x7eac,	// (0x00016b1c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7eac,	// (0x00016b1c) cell_vkb2_top_candi_pane_g3

0xf139,	// (0x0001dda9) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf139,	// (0x0001dda9) cell_vkb2_top_candi_pane_g4

0xaabd,	// (0x0001972d) cell_vkb2_top_candi_pane_g5_ParamLimits

0xaabd,	// (0x0001972d) cell_vkb2_top_candi_pane_g5

0x90e2,	// (0x00017d52) cell_vkb2_top_candi_pane_g6_ParamLimits

0x90e2,	// (0x00017d52) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde1,	// (0x0001ea51) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde1,	// (0x0001ea51) cell_vkb2_top_candi_pane_g

0xf15a,	// (0x0001ddca) cell_vkb2_top_candi_pane_t1

0xe19b,	// (0x0001ce0b) aid_size_touch_slider_mark_ParamLimits

0xe19b,	// (0x0001ce0b) aid_size_touch_slider_mark

0xee08,	// (0x0001da78) grid_graphic2_catg_pane_ParamLimits

0xee08,	// (0x0001da78) grid_graphic2_catg_pane

0xeea6,	// (0x0001db16) popup_grid_graphic2_window_t1_ParamLimits

0xeea6,	// (0x0001db16) popup_grid_graphic2_window_t1

0xeeb8,	// (0x0001db28) popup_grid_graphic2_window_t2_ParamLimits

0xeeb8,	// (0x0001db28) popup_grid_graphic2_window_t2

0x0001,

0xfd9c,	// (0x0001ea0c) popup_grid_graphic2_window_t_ParamLimits

0xfd9c,	// (0x0001ea0c) popup_grid_graphic2_window_t

0x2423,	// (0x00011093) bg_button_pane_cp05_ParamLimits

0xf020,	// (0x0001dc90) cell_graphic2_control_pane_g1_ParamLimits

0xf179,	// (0x0001dde9) cell_graphic2_catg_pane_ParamLimits

0xf179,	// (0x0001dde9) cell_graphic2_catg_pane

0x208c,	// (0x00010cfc) bg_button_pane_cp12

0xf18b,	// (0x0001ddfb) cell_graphic2_catg_pane_g1

0x921c,	// (0x00017e8c) cell_tb_ext_pane_t1_ParamLimits

0xebc2,	// (0x0001d832) vkb2_top_cell_right_narrow_pane_ParamLimits

0xebc2,	// (0x0001d832) vkb2_top_cell_right_narrow_pane

0xebda,	// (0x0001d84a) vkb2_top_cell_right_wide_pane_ParamLimits

0xebda,	// (0x0001d84a) vkb2_top_cell_right_wide_pane

0xaaaf,	// (0x0001971f) bg_vkb2_func_pane_ParamLimits

0xaaaf,	// (0x0001971f) bg_vkb2_func_pane

0xec4b,	// (0x0001d8bb) vkb2_top_cell_left_pane_g1_ParamLimits

0xaaaf,	// (0x0001971f) bg_vkb2_fuc_pane_cp03_ParamLimits

0xaaaf,	// (0x0001971f) bg_vkb2_fuc_pane_cp03

0xeca9,	// (0x0001d919) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4c1a,	// (0x0001388a) bg_vkb2_func_pane_g1

0x4c12,	// (0x00013882) bg_vkb2_func_pane_g2

0x4c22,	// (0x00013892) bg_vkb2_func_pane_g3

0x4c2a,	// (0x0001389a) bg_vkb2_func_pane_g4

0x4c32,	// (0x000138a2) bg_vkb2_func_pane_g5

0x4c3a,	// (0x000138aa) bg_vkb2_func_pane_g6

0x4c4a,	// (0x000138ba) bg_vkb2_func_pane_g7

0x4c42,	// (0x000138b2) bg_vkb2_func_pane_g8

0x4c0a,	// (0x0001387a) bg_vkb2_func_pane_g9

0x0008,

0xfdee,	// (0x0001ea5e) bg_vkb2_func_pane_g

0xaaaf,	// (0x0001971f) bg_vkb2_fuc_pane_cp01_ParamLimits

0xaaaf,	// (0x0001971f) bg_vkb2_fuc_pane_cp01

0xec4b,	// (0x0001d8bb) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xec4b,	// (0x0001d8bb) vkb2_top_cell_right_wide_pane_g1

0xaaaf,	// (0x0001971f) bg_vkb2_fuc_pane_cp02_ParamLimits

0xaaaf,	// (0x0001971f) bg_vkb2_fuc_pane_cp02

0xeca9,	// (0x0001d919) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xeca9,	// (0x0001d919) vkb2_top_cell_right_narrow_pane_g1

0x8e4a,	// (0x00017aba) aid_touch_area_decrease_ParamLimits

0x8e4a,	// (0x00017aba) aid_touch_area_decrease

0x8e6e,	// (0x00017ade) aid_touch_area_increase_ParamLimits

0x8e6e,	// (0x00017ade) aid_touch_area_increase

0x8e7a,	// (0x00017aea) aid_touch_area_mute_ParamLimits

0x8e7a,	// (0x00017aea) aid_touch_area_mute

0x8e9e,	// (0x00017b0e) aid_touch_area_slider_ParamLimits

0x8e9e,	// (0x00017b0e) aid_touch_area_slider

0x8f8a,	// (0x00017bfa) popup_slider_window_g4_ParamLimits

0x8f8a,	// (0x00017bfa) popup_slider_window_g4

0x8f96,	// (0x00017c06) popup_slider_window_g5_ParamLimits

0x8f96,	// (0x00017c06) popup_slider_window_g5

0x8fb8,	// (0x00017c28) popup_slider_window_g6_ParamLimits

0x8fb8,	// (0x00017c28) popup_slider_window_g6

0x8ff8,	// (0x00017c68) popup_slider_window_t2_ParamLimits

0x8ff8,	// (0x00017c68) popup_slider_window_t2

0x0001,

0xfcea,	// (0x0001e95a) popup_slider_window_t_ParamLimits

0xfcea,	// (0x0001e95a) popup_slider_window_t

0x9010,	// (0x00017c80) slider_pane_ParamLimits

0x9010,	// (0x00017c80) slider_pane

0xac90,	// (0x00019900) slider_pane_g1_ParamLimits

0xac90,	// (0x00019900) slider_pane_g1

0xaca4,	// (0x00019914) slider_pane_g2_ParamLimits

0xaca4,	// (0x00019914) slider_pane_g2

0xacba,	// (0x0001992a) slider_pane_g3_ParamLimits

0xacba,	// (0x0001992a) slider_pane_g3

0x0003,

0xfe01,	// (0x0001ea71) slider_pane_g_ParamLimits

0xfe01,	// (0x0001ea71) slider_pane_g

0x4615,	// (0x00013285) popup_tb_float_extension_window_ParamLimits

0x4615,	// (0x00013285) popup_tb_float_extension_window

0xace6,	// (0x00019956) aid_size_cell_tb_float_ext

0x208c,	// (0x00010cfc) bg_popup_sub_window_cp28

0xacf2,	// (0x00019962) grid_tb_float_ext_pane

0xacfc,	// (0x0001996c) cell_tb_float_ext_pane_ParamLimits

0xacfc,	// (0x0001996c) cell_tb_float_ext_pane

0xad16,	// (0x00019986) cell_tb_float_ext_pane_g1

0xad1f,	// (0x0001998f) grid_highlight_pane_cp12

0xe4b1,	// (0x0001d121) cell_last_hwr_side_pane_ParamLimits

0xe4b1,	// (0x0001d121) cell_last_hwr_side_pane

0x7609,	// (0x00016279) cell_last_hwr_side_pane_g1

0xad28,	// (0x00019998) cell_last_hwr_side_pane_g2

0x0001,

0xfe0a,	// (0x0001ea7a) cell_last_hwr_side_pane_g

0xeb31,	// (0x0001d7a1) vkb2_area_bottom_space_btn_pane_ParamLimits

0xeb31,	// (0x0001d7a1) vkb2_area_bottom_space_btn_pane

0x7884,	// (0x000164f4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xab61,	// (0x000197d1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf15a,	// (0x0001ddca) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf194,	// (0x0001de04) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf194,	// (0x0001de04) vkb2_area_bottom_space_btn_pane_g1

0xf1ce,	// (0x0001de3e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf1ce,	// (0x0001de3e) vkb2_area_bottom_space_btn_pane_g2

0xf204,	// (0x0001de74) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf204,	// (0x0001de74) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0f,	// (0x0001ea7f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0f,	// (0x0001ea7f) vkb2_area_bottom_space_btn_pane_g

0xe425,	// (0x0001d095) cel_fep_hwr_func_pane_ParamLimits

0xe425,	// (0x0001d095) cel_fep_hwr_func_pane

0xe461,	// (0x0001d0d1) cell_hwr_side_button_pane_ParamLimits

0xe461,	// (0x0001d0d1) cell_hwr_side_button_pane

0x9250,	// (0x00017ec0) aid_area_touch_clock_ParamLimits

0x2423,	// (0x00011093) bg_uniindi_top_pane_ParamLimits

0x9262,	// (0x00017ed2) uniindi_top_pane_g1_ParamLimits

0x9278,	// (0x00017ee8) uniindi_top_pane_g2_ParamLimits

0x9284,	// (0x00017ef4) uniindi_top_pane_g3_ParamLimits

0x9295,	// (0x00017f05) uniindi_top_pane_g4_ParamLimits

0xfd22,	// (0x0001e992) uniindi_top_pane_g_ParamLimits

0x92a2,	// (0x00017f12) uniindi_top_pane_t1_ParamLimits

0x2423,	// (0x00011093) bg_vkb2_func_pane_cp01_ParamLimits

0x2423,	// (0x00011093) bg_vkb2_func_pane_cp01

0xad31,	// (0x000199a1) cel_fep_hwr_func_pane_g1_ParamLimits

0xad31,	// (0x000199a1) cel_fep_hwr_func_pane_g1

0x2423,	// (0x00011093) bg_vkb2_func_pane_cp02_ParamLimits

0x2423,	// (0x00011093) bg_vkb2_func_pane_cp02

0xad31,	// (0x000199a1) cell_hwr_side_button_pane_g1_ParamLimits

0xad31,	// (0x000199a1) cell_hwr_side_button_pane_g1

0x4a5f,	// (0x000136cf) status_pane_g4_ParamLimits

0x4a5f,	// (0x000136cf) status_pane_g4

0x4a77,	// (0x000136e7) status_pane_t1

0x730c,	// (0x00015f7c) form2_midp_gauge_slider_cont_pane

0x7314,	// (0x00015f84) form2_midp_gauge_slider_pane_t1_ParamLimits

0x7326,	// (0x00015f96) form2_midp_gauge_slider_pane_t2_ParamLimits

0x7338,	// (0x00015fa8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf5,	// (0x0001e765) form2_midp_gauge_slider_pane_t_ParamLimits

0x734a,	// (0x00015fba) form2_midp_slider_pane_ParamLimits

0xe7a8,	// (0x0001d418) aid_size_cell_func_vkb2_ParamLimits

0xe7a8,	// (0x0001d418) aid_size_cell_func_vkb2

0xacd2,	// (0x00019942) slider_pane_g4_ParamLimits

0xacd2,	// (0x00019942) slider_pane_g4

0xf24e,	// (0x0001debe) form2_midp_gauge_slider_pane_t2_cp01

0xf25c,	// (0x0001decc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf25c,	// (0x0001decc) form2_midp_gauge_slider_pane_t3_cp01

0xf279,	// (0x0001dee9) form2_midp_slider_pane_cp01

0x208c,	// (0x00010cfc) navi_smil_pane

0xad61,	// (0x000199d1) navi_smil_pane_g1

0xad69,	// (0x000199d9) navi_smil_pane_t1

0xad3f,	// (0x000199af) form2_midp_slider_pane_g1

0xad48,	// (0x000199b8) form2_midp_slider_pane_g2

0xad50,	// (0x000199c0) form2_midp_slider_pane_g3

0xad3f,	// (0x000199af) form2_midp_slider_pane_g4

0xf282,	// (0x0001def2) form2_midp_slider_pane_g5

0x0004,

0xfe18,	// (0x0001ea88) form2_midp_slider_pane_g

0xf23e,	// (0x0001deae) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf23e,	// (0x0001deae) vkb2_area_bottom_space_btn_pane_g4

0x4894,	// (0x00013504) lc0_navi_pane_ParamLimits

0x4894,	// (0x00013504) lc0_navi_pane

0x490a,	// (0x0001357a) lc0_stat_indi_pane_ParamLimits

0x490a,	// (0x0001357a) lc0_stat_indi_pane

0x4921,	// (0x00013591) ls0_title_pane_ParamLimits

0x4921,	// (0x00013591) ls0_title_pane

0x2f59,	// (0x00011bc9) bg_popup_sub_pane_cp14_ParamLimits

0x9237,	// (0x00017ea7) list_uniindi_pane_ParamLimits

0x9243,	// (0x00017eb3) uniindi_top_pane_ParamLimits

0x92de,	// (0x00017f4e) list_single_uniindi_pane_g1_ParamLimits

0x92f1,	// (0x00017f61) list_single_uniindi_pane_t1_ParamLimits

0xf28b,	// (0x0001defb) lc0_stat_clock_pane_ParamLimits

0xf28b,	// (0x0001defb) lc0_stat_clock_pane

0xf298,	// (0x0001df08) lc0_stat_indi_pane_g1_ParamLimits

0xf298,	// (0x0001df08) lc0_stat_indi_pane_g1

0xf2a5,	// (0x0001df15) lc0_stat_indi_pane_g2_ParamLimits

0xf2a5,	// (0x0001df15) lc0_stat_indi_pane_g2

0x0001,

0xfe23,	// (0x0001ea93) lc0_stat_indi_pane_g_ParamLimits

0xfe23,	// (0x0001ea93) lc0_stat_indi_pane_g

0xf2b2,	// (0x0001df22) lc0_uni_indicator_pane_ParamLimits

0xf2b2,	// (0x0001df22) lc0_uni_indicator_pane

0xad77,	// (0x000199e7) ls0_title_pane_g1_ParamLimits

0xad77,	// (0x000199e7) ls0_title_pane_g1

0xf2bf,	// (0x0001df2f) ls0_title_pane_t1_ParamLimits

0xf2bf,	// (0x0001df2f) ls0_title_pane_t1

0xf2f5,	// (0x0001df65) lc0_uni_indicator_pane_g1_ParamLimits

0xf2f5,	// (0x0001df65) lc0_uni_indicator_pane_g1

0xad8b,	// (0x000199fb) lc0_stat_clock_pane_t1

0x208c,	// (0x00010cfc) main_ai5_pane

0xad99,	// (0x00019a09) ai5_sk_pane_ParamLimits

0xad99,	// (0x00019a09) ai5_sk_pane

0xf30b,	// (0x0001df7b) cell_ai5_widget_pane_ParamLimits

0xf30b,	// (0x0001df7b) cell_ai5_widget_pane

0xada6,	// (0x00019a16) aid_size_cell_widget_grid

0xadba,	// (0x00019a2a) bg_ai5_widget_pane_ParamLimits

0xadba,	// (0x00019a2a) bg_ai5_widget_pane

0xae04,	// (0x00019a74) cell_ai5_widget_pane_g2

0xae14,	// (0x00019a84) cell_ai5_widget_pane_g3

0xae33,	// (0x00019aa3) cell_ai5_widget_pane_g4

0xae3f,	// (0x00019aaf) cell_ai5_widget_pane_g5

0xae4b,	// (0x00019abb) cell_ai5_widget_pane_g6

0xae57,	// (0x00019ac7) cell_ai5_widget_pane_g7

0xae9f,	// (0x00019b0f) cell_ai5_widget_pane_t1_ParamLimits

0xae9f,	// (0x00019b0f) cell_ai5_widget_pane_t1

0xaebc,	// (0x00019b2c) cell_ai5_widget_pane_t2_ParamLimits

0xaebc,	// (0x00019b2c) cell_ai5_widget_pane_t2

0xaed4,	// (0x00019b44) cell_ai5_widget_pane_t3_ParamLimits

0xaed4,	// (0x00019b44) cell_ai5_widget_pane_t3

0xaeec,	// (0x00019b5c) cell_ai5_widget_pane_t4_ParamLimits

0xaeec,	// (0x00019b5c) cell_ai5_widget_pane_t4

0xaf06,	// (0x00019b76) cell_ai5_widget_pane_t5_ParamLimits

0xaf06,	// (0x00019b76) cell_ai5_widget_pane_t5

0xaf25,	// (0x00019b95) cell_ai5_widget_pane_t6_ParamLimits

0xaf25,	// (0x00019b95) cell_ai5_widget_pane_t6

0xaf37,	// (0x00019ba7) cell_ai5_widget_pane_t7_ParamLimits

0xaf37,	// (0x00019ba7) cell_ai5_widget_pane_t7

0xaf50,	// (0x00019bc0) cell_ai5_widget_pane_t8_ParamLimits

0xaf50,	// (0x00019bc0) cell_ai5_widget_pane_t8

0x0009,

0xfe3d,	// (0x0001eaad) cell_ai5_widget_pane_t_ParamLimits

0xfe3d,	// (0x0001eaad) cell_ai5_widget_pane_t

0xaf9c,	// (0x00019c0c) grid_ai5_widget_pane

0x2f59,	// (0x00011bc9) highlight_cell_ai5_widget_pane_ParamLimits

0x2f59,	// (0x00011bc9) highlight_cell_ai5_widget_pane

0xf3db,	// (0x0001e04b) ai5_sk_left_pane

0xf3e5,	// (0x0001e055) ai5_sk_middle_pane

0xf3ef,	// (0x0001e05f) ai5_sk_right_pane

0xafb0,	// (0x00019c20) bg_ai5_widget_pane_g1_ParamLimits

0xafb0,	// (0x00019c20) bg_ai5_widget_pane_g1

0xafbc,	// (0x00019c2c) bg_ai5_widget_pane_g2_ParamLimits

0xafbc,	// (0x00019c2c) bg_ai5_widget_pane_g2

0xafc8,	// (0x00019c38) bg_ai5_widget_pane_g3_ParamLimits

0xafc8,	// (0x00019c38) bg_ai5_widget_pane_g3

0xafd4,	// (0x00019c44) bg_ai5_widget_pane_g4_ParamLimits

0xafd4,	// (0x00019c44) bg_ai5_widget_pane_g4

0xafe0,	// (0x00019c50) bg_ai5_widget_pane_g5_ParamLimits

0xafe0,	// (0x00019c50) bg_ai5_widget_pane_g5

0xafec,	// (0x00019c5c) bg_ai5_widget_pane_g6_ParamLimits

0xafec,	// (0x00019c5c) bg_ai5_widget_pane_g6

0xaff8,	// (0x00019c68) bg_ai5_widget_pane_g7_ParamLimits

0xaff8,	// (0x00019c68) bg_ai5_widget_pane_g7

0xb004,	// (0x00019c74) bg_ai5_widget_pane_g8_ParamLimits

0xb004,	// (0x00019c74) bg_ai5_widget_pane_g8

0xb010,	// (0x00019c80) bg_ai5_widget_pane_g9_ParamLimits

0xb010,	// (0x00019c80) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x0001eac2) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x0001eac2) bg_ai5_widget_pane_g

0xb043,	// (0x00019cb3) cell_shortcut_ai5_widget_pane_ParamLimits

0xb043,	// (0x00019cb3) cell_shortcut_ai5_widget_pane

0x2263,	// (0x00010ed3) bg_cell_shortcut_ai5_widget_pane

0xb054,	// (0x00019cc4) cell_grid_ai5_widget_pane_g1

0xb05d,	// (0x00019ccd) highlight_cell_shortcut_ai5_widget_pane

0x4c12,	// (0x00013882) ai5_sk_left_pane_g1

0xb065,	// (0x00019cd5) ai5_sk_left_pane_g2

0xb06d,	// (0x00019cdd) ai5_sk_left_pane_g3

0xb075,	// (0x00019ce5) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x0001ead5) ai5_sk_left_pane_g

0xb07d,	// (0x00019ced) ai5_sk_left_pane_t1

0x4c1a,	// (0x0001388a) ai5_sk_right_pane_g1

0xb08b,	// (0x00019cfb) ai5_sk_right_pane_g2

0xb093,	// (0x00019d03) ai5_sk_right_pane_g3

0xb09b,	// (0x00019d0b) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x0001eade) ai5_sk_right_pane_g

0xb0a3,	// (0x00019d13) ai5_sk_right_pane_t1

0x4c1a,	// (0x0001388a) ai5_sk_middle_pane_g1

0x4c12,	// (0x00013882) ai5_sk_middle_pane_g2

0x4c32,	// (0x000138a2) ai5_sk_middle_pane_g3

0xb093,	// (0x00019d03) ai5_sk_middle_pane_g4

0xb06d,	// (0x00019cdd) ai5_sk_middle_pane_g5

0xb0b1,	// (0x00019d21) ai5_sk_middle_pane_g6

0xf3f9,	// (0x0001e069) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x0001eae7) ai5_sk_middle_pane_g

0x4720,	// (0x00013390) aid_touch_area_size_lc0_ParamLimits

0x4720,	// (0x00013390) aid_touch_area_size_lc0

0xe5b0,	// (0x0001d220) cell_hwr_candidate_pane_t1_ParamLimits

0x473c,	// (0x000133ac) aid_touch_navi_pane

0x4a09,	// (0x00013679) status_dt_navi_pane_ParamLimits

0x4a09,	// (0x00013679) status_dt_navi_pane

0x4a16,	// (0x00013686) status_dt_sta_pane_ParamLimits

0x4a16,	// (0x00013686) status_dt_sta_pane

0xf401,	// (0x0001e071) dt_sta_controll_pane

0xf40e,	// (0x0001e07e) dt_sta_indi_pane

0xf41b,	// (0x0001e08b) dt_sta_title_pane

0x2423,	// (0x00011093) bg_dt_sta_indi_pane_ParamLimits

0x2423,	// (0x00011093) bg_dt_sta_indi_pane

0xb0b9,	// (0x00019d29) dt_sta_battery_pane

0xb0c1,	// (0x00019d31) dt_sta_indi_pane_g1

0xb0ca,	// (0x00019d3a) dt_sta_indi_pane_g2

0xb0d3,	// (0x00019d43) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x0001eaf6) dt_sta_indi_pane_g

0xb0dc,	// (0x00019d4c) dt_sta_signal_pane

0x2f59,	// (0x00011bc9) bg_dt_sta_title_pane_ParamLimits

0x2f59,	// (0x00011bc9) bg_dt_sta_title_pane

0x5b23,	// (0x00014793) dt_sta_title_pane_g1

0xb0e5,	// (0x00019d55) dt_sta_title_pane_t1_ParamLimits

0xb0e5,	// (0x00019d55) dt_sta_title_pane_t1

0x208c,	// (0x00010cfc) bg_dt_sta_control_pane

0xb0fa,	// (0x00019d6a) dt_sta_controll_pane_g1

0xb103,	// (0x00019d73) bg_dt_sta_title_pane_g1

0xb10c,	// (0x00019d7c) bg_dt_sta_title_pane_g2

0xb115,	// (0x00019d85) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x0001eafd) bg_dt_sta_title_pane_g

0x7609,	// (0x00016279) bg_dt_sta_indi_pane_g1

0xb11e,	// (0x00019d8e) dt_sta_signal_pane_g1

0xb126,	// (0x00019d96) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x0001eb04) dt_sta_signal_pane_g

0xb12e,	// (0x00019d9e) dt_sta_battery_pane_g1

0xb137,	// (0x00019da7) dt_sta_battery_pane_t1

0x7609,	// (0x00016279) bg_dt_sta_control_pane_g1

0x3845,	// (0x000124b5) fep_china_uni_eep_pane

0x384d,	// (0x000124bd) fep_china_uni_entry_pane_ParamLimits

0x385d,	// (0x000124cd) popup_fep_china_uni_window_g1_ParamLimits

0x386d,	// (0x000124dd) popup_fep_china_uni_window_g2_ParamLimits

0x386d,	// (0x000124dd) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001e3a0) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001e3a0) popup_fep_china_uni_window_g

0xb146,	// (0x00019db6) fep_china_uni_eep_pane_g1

0xb14e,	// (0x00019dbe) fep_china_uni_eep_pane_t1

0xad58,	// (0x000199c8) aid_touch_area_size_smil_player

0x488c,	// (0x000134fc) lc0_clock_pane

0x4a6b,	// (0x000136db) status_pane_g5_ParamLimits

0x4a6b,	// (0x000136db) status_pane_g5

0x42e2,	// (0x00012f52) popup_keymap_window

0x4a2b,	// (0x0001369b) status_icon_pane

0xae14,	// (0x00019a84) cell_ai5_widget_pane_g3_ParamLimits

0xae33,	// (0x00019aa3) cell_ai5_widget_pane_g4_ParamLimits

0xae3f,	// (0x00019aaf) cell_ai5_widget_pane_g5_ParamLimits

0xae63,	// (0x00019ad3) cell_ai5_widget_pane_g8_ParamLimits

0xae63,	// (0x00019ad3) cell_ai5_widget_pane_g8

0xae77,	// (0x00019ae7) cell_ai5_widget_pane_g9_ParamLimits

0xae77,	// (0x00019ae7) cell_ai5_widget_pane_g9

0xae8b,	// (0x00019afb) cell_ai5_widget_pane_g10_ParamLimits

0xae8b,	// (0x00019afb) cell_ai5_widget_pane_g10

0xb15d,	// (0x00019dcd) status_icon_pane_g1

0x208c,	// (0x00010cfc) bg_popup_sub_pane_cp13

0xb165,	// (0x00019dd5) popup_keymap_window_t1

0x40b2,	// (0x00012d22) control_pane_g6_ParamLimits

0x40b2,	// (0x00012d22) control_pane_g6

0x40a5,	// (0x00012d15) control_pane_g7_ParamLimits

0x40a5,	// (0x00012d15) control_pane_g7

0x4098,	// (0x00012d08) control_pane_g8_ParamLimits

0x4098,	// (0x00012d08) control_pane_g8

0xf401,	// (0x0001e071) dt_sta_controll_pane_ParamLimits

0xf40e,	// (0x0001e07e) dt_sta_indi_pane_ParamLimits

0xf41b,	// (0x0001e08b) dt_sta_title_pane_ParamLimits

0x2925,	// (0x00011595) aid_size_touch_scroll_bar_cale

0xd6db,	// (0x0001c34b) popup_discreet_window_ParamLimits

0xd6db,	// (0x0001c34b) popup_discreet_window

0xd755,	// (0x0001c3c5) popup_sk_window

0x5361,	// (0x00013fd1) bg_popup_sub_pane_cp28_ParamLimits

0x5361,	// (0x00013fd1) bg_popup_sub_pane_cp28

0xb173,	// (0x00019de3) popup_discreet_window_g1_ParamLimits

0xb173,	// (0x00019de3) popup_discreet_window_g1

0xb193,	// (0x00019e03) popup_discreet_window_t1_ParamLimits

0xb193,	// (0x00019e03) popup_discreet_window_t1

0xb1b1,	// (0x00019e21) popup_discreet_window_t2_ParamLimits

0xb1b1,	// (0x00019e21) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x0001eb09) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x0001eb09) popup_discreet_window_t

0xf42c,	// (0x0001e09c) popup_sk_window_g1

0xf436,	// (0x0001e0a6) popup_sk_window_g2

0x0001,

0xfea0,	// (0x0001eb10) popup_sk_window_g

0xf440,	// (0x0001e0b0) popup_sk_window_t1

0xf44e,	// (0x0001e0be) popup_sk_window_t1_copy1

0xae04,	// (0x00019a74) cell_ai5_widget_pane_g2_ParamLimits

0xaf62,	// (0x00019bd2) cell_ai5_widget_pane_t9_ParamLimits

0xaf62,	// (0x00019bd2) cell_ai5_widget_pane_t9

0x208c,	// (0x00010cfc) main_fep_fshwr2_pane

0xf45c,	// (0x0001e0cc) aid_fshwr2_btn_pane

0xf464,	// (0x0001e0d4) aid_fshwr2_syb_pane

0xf46c,	// (0x0001e0dc) aid_fshwr2_txt_pane

0xf474,	// (0x0001e0e4) fshwr2_func_candi_pane

0xf480,	// (0x0001e0f0) fshwr2_hwr_syb_pane

0xf48c,	// (0x0001e0fc) fshwr2_icf_pane

0x208c,	// (0x00010cfc) fshwr2_icf_bg_pane

0xf496,	// (0x0001e106) fshwr2_icf_pane_t1_ParamLimits

0xf496,	// (0x0001e106) fshwr2_icf_pane_t1

0x7609,	// (0x00016279) fshwr2_func_candi_pane_g1

0xb217,	// (0x00019e87) fshwr2_func_candi_row_pane_ParamLimits

0xb217,	// (0x00019e87) fshwr2_func_candi_row_pane

0xf4ad,	// (0x0001e11d) cell_fshwr2_syb_pane_ParamLimits

0xf4ad,	// (0x0001e11d) cell_fshwr2_syb_pane

0x7884,	// (0x000164f4) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7884,	// (0x000164f4) fshwr2_hwr_syb_pane_g1

0x208c,	// (0x00010cfc) bg_popup_call_pane_cp01

0xb228,	// (0x00019e98) fshwr2_func_candi_cell_pane_ParamLimits

0xb228,	// (0x00019e98) fshwr2_func_candi_cell_pane

0xb259,	// (0x00019ec9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xb259,	// (0x00019ec9) fshwr2_func_candi_cell_bg_pane

0xb273,	// (0x00019ee3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb273,	// (0x00019ee3) fshwr2_func_candi_cell_pane_g1

0xb293,	// (0x00019f03) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb293,	// (0x00019f03) fshwr2_func_candi_cell_pane_t1

0x208c,	// (0x00010cfc) bg_button_pane_cp08

0x3dd1,	// (0x00012a41) cell_fshwr2_syb_bg_pane

0xf4c9,	// (0x0001e139) cell_fshwr2_syb_bg_pane_g1

0xb2a6,	// (0x00019f16) cell_fshwr2_syb_bg_pane_t1

0x2f59,	// (0x00011bc9) main_tmo_pane

0x5e60,	// (0x00014ad0) uni_indicator_pane_g1_ParamLimits

0x5e75,	// (0x00014ae5) uni_indicator_pane_g2_ParamLimits

0x5e8b,	// (0x00014afb) uni_indicator_pane_g3_ParamLimits

0x5ea1,	// (0x00014b11) uni_indicator_pane_g4_ParamLimits

0x5ea1,	// (0x00014b11) uni_indicator_pane_g4

0x5eb5,	// (0x00014b25) uni_indicator_pane_g5_ParamLimits

0x5eb5,	// (0x00014b25) uni_indicator_pane_g5

0x5ec9,	// (0x00014b39) uni_indicator_pane_g6_ParamLimits

0x5ec9,	// (0x00014b39) uni_indicator_pane_g6

0xf921,	// (0x0001e591) uni_indicator_pane_g_ParamLimits

0x8e2c,	// (0x00017a9c) popup_tmo_note_window_ParamLimits

0x8e2c,	// (0x00017a9c) popup_tmo_note_window

0x208c,	// (0x00010cfc) fshwr2_bg_pane

0xb284,	// (0x00019ef4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb284,	// (0x00019ef4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x0001eb15) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x0001eb15) fshwr2_func_candi_cell_pane_g

0x7609,	// (0x00016279) bg_popup_window_pane_cp01

0xb2b5,	// (0x00019f25) bg_popup_window_pane_g1_cp01

0xb2be,	// (0x00019f2e) bg_popup_window_pane_cp22_ParamLimits

0xb2be,	// (0x00019f2e) bg_popup_window_pane_cp22

0xb2cc,	// (0x00019f3c) listscroll_tmo_link_pane_ParamLimits

0xb2cc,	// (0x00019f3c) listscroll_tmo_link_pane

0xb30c,	// (0x00019f7c) popup_tmo_note_window_g1_ParamLimits

0xb30c,	// (0x00019f7c) popup_tmo_note_window_g1

0xb319,	// (0x00019f89) tmo_note_info_pane_ParamLimits

0xb319,	// (0x00019f89) tmo_note_info_pane

0xf4d1,	// (0x0001e141) list_tmo_note_info_pane_g1_ParamLimits

0xf4d1,	// (0x0001e141) list_tmo_note_info_pane_g1

0xb333,	// (0x00019fa3) list_tmo_note_info_pane_g2_ParamLimits

0xb333,	// (0x00019fa3) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x0001eb1a) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x0001eb1a) list_tmo_note_info_pane_g

0xb34f,	// (0x00019fbf) list_tmo_note_info_text_pane_ParamLimits

0xb34f,	// (0x00019fbf) list_tmo_note_info_text_pane

0xb391,	// (0x0001a001) list_tmo_link_pane

0xb39e,	// (0x0001a00e) scroll_pane_cp20

0xb3ab,	// (0x0001a01b) list_single_tmo_link_pane_ParamLimits

0xb3ab,	// (0x0001a01b) list_single_tmo_link_pane

0xb3bb,	// (0x0001a02b) list_single_tmo_link_pane_t1

0xb3c9,	// (0x0001a039) list_tmo_note_info_text_pane_t1_ParamLimits

0xb3c9,	// (0x0001a039) list_tmo_note_info_text_pane_t1

0x319c,	// (0x00011e0c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x319c,	// (0x00011e0c) aid_size_touch_scroll_bar_cp01

0xcac9,	// (0x0001b739) aid_size_touch_slider_marker

0xd73d,	// (0x0001c3ad) popup_settings_window_ParamLimits

0xd73d,	// (0x0001c3ad) popup_settings_window

0xcc75,	// (0x0001b8e5) popup_candi_list_indi_window

0x473c,	// (0x000133ac) aid_touch_navi_pane_ParamLimits

0xe701,	// (0x0001d371) rs_clock_indi_pane

0xe70a,	// (0x0001d37a) sctrl_sk_bottom_pane_ParamLimits

0xe71b,	// (0x0001d38b) sctrl_sk_top_pane_ParamLimits

0xe802,	// (0x0001d472) popup_fep_tooltip_window

0xada6,	// (0x00019a16) aid_size_cell_widget_grid_ParamLimits

0xadf8,	// (0x00019a68) cell_ai5_widget_pane_g1_ParamLimits

0xadf8,	// (0x00019a68) cell_ai5_widget_pane_g1

0xae4b,	// (0x00019abb) cell_ai5_widget_pane_g6_ParamLimits

0xae57,	// (0x00019ac7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe28,	// (0x0001ea98) cell_ai5_widget_pane_g_ParamLimits

0xfe28,	// (0x0001ea98) cell_ai5_widget_pane_g

0xaf86,	// (0x00019bf6) cell_ai5_widget_pane_t10_ParamLimits

0xaf86,	// (0x00019bf6) cell_ai5_widget_pane_t10

0xaf9c,	// (0x00019c0c) grid_ai5_widget_pane_ParamLimits

0xb01c,	// (0x00019c8c) cell_contacts_ai5_widget_pane_ParamLimits

0xb01c,	// (0x00019c8c) cell_contacts_ai5_widget_pane

0xb1c6,	// (0x00019e36) popup_discreet_window_t3_ParamLimits

0xb1c6,	// (0x00019e36) popup_discreet_window_t3

0xb203,	// (0x00019e73) popup_fshwr2_char_preview_window_ParamLimits

0xb203,	// (0x00019e73) popup_fshwr2_char_preview_window

0xf4e8,	// (0x0001e158) tmo_note_info_pane_t1

0xf4fd,	// (0x0001e16d) tmo_note_info_pane_t2

0xf516,	// (0x0001e186) tmo_note_info_pane_t3

0xb36d,	// (0x00019fdd) tmo_note_info_pane_t4

0xb37f,	// (0x00019fef) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x0001eb1f) tmo_note_info_pane_t

0xb391,	// (0x0001a001) list_tmo_link_pane_ParamLimits

0xb39e,	// (0x0001a00e) scroll_pane_cp20_ParamLimits

0x208c,	// (0x00010cfc) bg_popup_fep_char_preview_window_cp01

0xb3e2,	// (0x0001a052) popup_fshwr2_char_preview_window_t1

0xb3f0,	// (0x0001a060) popup_candi_list_indi_window_g1

0xb3f9,	// (0x0001a069) bg_cell_contacts_ai5_widget_pane

0xb405,	// (0x0001a075) cell_contacts_ai5_widget_pane_g1

0xb418,	// (0x0001a088) cell_contacts_ai5_widget_pane_g2

0xb424,	// (0x0001a094) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x0001eb2a) cell_contacts_ai5_widget_pane_g

0xb436,	// (0x0001a0a6) cell_contacts_ai5_widget_pane_t1

0x2f59,	// (0x00011bc9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb4c4,	// (0x0001a134) settings_container_pane

0x3dd1,	// (0x00012a41) listscroll_set_pane_copy1

0x6ae3,	// (0x00015753) scroll_pane_cp121_copy1

0xb4d0,	// (0x0001a140) set_content_pane_copy1

0xb4d8,	// (0x0001a148) aid_height_set_list_copy1_ParamLimits

0xb4d8,	// (0x0001a148) aid_height_set_list_copy1

0x60e4,	// (0x00014d54) aid_size_parent_copy1_ParamLimits

0x60e4,	// (0x00014d54) aid_size_parent_copy1

0xb4e4,	// (0x0001a154) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb4e4,	// (0x0001a154) button_value_adjust_pane_cp6_copy1

0x414b,	// (0x00012dbb) list_highlight_pane_cp2_copy1_ParamLimits

0x414b,	// (0x00012dbb) list_highlight_pane_cp2_copy1

0xb4f8,	// (0x0001a168) list_set_pane_copy1_ParamLimits

0xb4f8,	// (0x0001a168) list_set_pane_copy1

0xb45f,	// (0x0001a0cf) main_pane_set_t1_copy1_ParamLimits

0xb45f,	// (0x0001a0cf) main_pane_set_t1_copy1

0xb499,	// (0x0001a109) main_pane_set_t2_copy1_ParamLimits

0xb499,	// (0x0001a109) main_pane_set_t2_copy1

0xb5a5,	// (0x0001a215) main_pane_set_t3_copy1

0xb5b3,	// (0x0001a223) main_pane_set_t4_copy1

0xb4b8,	// (0x0001a128) set_content_pane_g1_copy1_ParamLimits

0xb4b8,	// (0x0001a128) set_content_pane_g1_copy1

0xb5c1,	// (0x0001a231) setting_code_pane_copy1

0xb5cb,	// (0x0001a23b) setting_slider_graphic_pane_copy1

0xb5cb,	// (0x0001a23b) setting_slider_pane_copy1

0xb5cb,	// (0x0001a23b) setting_text_pane_copy1

0xb5d5,	// (0x0001a245) setting_volume_pane_copy1

0xb5de,	// (0x0001a24e) settings_code_pane_cp2_copy1

0xb5e6,	// (0x0001a256) settings_code_pane_cp_copy1_ParamLimits

0xb5e6,	// (0x0001a256) settings_code_pane_cp_copy1

0xb5fa,	// (0x0001a26a) volume_set_pane_copy1

0xb602,	// (0x0001a272) volume_set_pane_g10_copy1

0xb60a,	// (0x0001a27a) volume_set_pane_g1_copy1

0xb612,	// (0x0001a282) volume_set_pane_g2_copy1

0xb61a,	// (0x0001a28a) volume_set_pane_g3_copy1

0xb622,	// (0x0001a292) volume_set_pane_g4_copy1

0xb62a,	// (0x0001a29a) volume_set_pane_g5_copy1

0xb632,	// (0x0001a2a2) volume_set_pane_g6_copy1

0xb63a,	// (0x0001a2aa) volume_set_pane_g7_copy1

0xb642,	// (0x0001a2b2) volume_set_pane_g8_copy1

0xb64a,	// (0x0001a2ba) volume_set_pane_g9_copy1

0x2180,	// (0x00010df0) bg_set_opt_pane_cp_copy1_ParamLimits

0x2180,	// (0x00010df0) bg_set_opt_pane_cp_copy1

0xb652,	// (0x0001a2c2) setting_slider_pane_t1_copy1_ParamLimits

0xb652,	// (0x0001a2c2) setting_slider_pane_t1_copy1

0xb670,	// (0x0001a2e0) setting_slider_pane_t2_copy1_ParamLimits

0xb670,	// (0x0001a2e0) setting_slider_pane_t2_copy1

0xb68a,	// (0x0001a2fa) setting_slider_pane_t3_copy1_ParamLimits

0xb68a,	// (0x0001a2fa) setting_slider_pane_t3_copy1

0xb6a2,	// (0x0001a312) slider_set_pane_copy1_ParamLimits

0xb6a2,	// (0x0001a312) slider_set_pane_copy1

0x3095,	// (0x00011d05) set_opt_bg_pane_g1_copy2

0x309d,	// (0x00011d0d) set_opt_bg_pane_g2_copy2

0xb6b8,	// (0x0001a328) set_opt_bg_pane_g3_copy2

0x30ad,	// (0x00011d1d) set_opt_bg_pane_g4_copy2

0x30b5,	// (0x00011d25) set_opt_bg_pane_g5_copy2

0x30bd,	// (0x00011d2d) set_opt_bg_pane_g6_copy2

0xb6c2,	// (0x0001a332) set_opt_bg_pane_g7_copy2

0xb6ca,	// (0x0001a33a) set_opt_bg_pane_g8_copy2

0xb6d4,	// (0x0001a344) set_opt_bg_pane_g9_copy2

0xf52b,	// (0x0001e19b) aid_size_touch_slider_mark_copy1_ParamLimits

0xf52b,	// (0x0001e19b) aid_size_touch_slider_mark_copy1

0xb6de,	// (0x0001a34e) slider_set_pane_g1_copy1

0xf53f,	// (0x0001e1af) slider_set_pane_g2_copy1

0xe1bb,	// (0x0001ce2b) slider_set_pane_g3_copy1_ParamLimits

0xe1bb,	// (0x0001ce2b) slider_set_pane_g3_copy1

0xe1cf,	// (0x0001ce3f) slider_set_pane_g4_copy1_ParamLimits

0xe1cf,	// (0x0001ce3f) slider_set_pane_g4_copy1

0xe1e7,	// (0x0001ce57) slider_set_pane_g5_copy1_ParamLimits

0xe1e7,	// (0x0001ce57) slider_set_pane_g5_copy1

0xe1bb,	// (0x0001ce2b) slider_set_pane_g6_copy1_ParamLimits

0xe1bb,	// (0x0001ce2b) slider_set_pane_g6_copy1

0xf547,	// (0x0001e1b7) slider_set_pane_g7_copy1_ParamLimits

0xf547,	// (0x0001e1b7) slider_set_pane_g7_copy1

0x20a0,	// (0x00010d10) bg_set_opt_pane_cp2_copy1

0xb6e7,	// (0x0001a357) setting_slider_graphic_pane_g1_copy1

0xb6f0,	// (0x0001a360) setting_slider_graphic_pane_t1_copy1

0xb700,	// (0x0001a370) setting_slider_graphic_pane_t2_copy1

0xb710,	// (0x0001a380) slider_set_pane_cp_copy1

0xb720,	// (0x0001a390) input_focus_pane_cp1_copy1

0xb729,	// (0x0001a399) list_set_text_pane_copy1

0xb731,	// (0x0001a3a1) setting_text_pane_g1_copy1

0xd44e,	// (0x0001c0be) set_text_pane_t1_copy1

0xb720,	// (0x0001a390) input_focus_pane_cp2_copy1

0xb731,	// (0x0001a3a1) setting_code_pane_g1_copy1

0xb757,	// (0x0001a3c7) setting_code_pane_t1_copy1

0xb44b,	// (0x0001a0bb) list_set_graphic_pane_copy1

0x20a0,	// (0x00010d10) bg_set_opt_pane_cp4_copy1

0x3ad3,	// (0x00012743) list_set_graphic_pane_g1_copy1_ParamLimits

0x3ad3,	// (0x00012743) list_set_graphic_pane_g1_copy1

0xb765,	// (0x0001a3d5) list_set_graphic_pane_g2_copy1

0x3aeb,	// (0x0001275b) list_set_graphic_pane_t1_copy1_ParamLimits

0x3aeb,	// (0x0001275b) list_set_graphic_pane_t1_copy1

0x7609,	// (0x00016279) rs_clock_indi_pane_g1

0xb76d,	// (0x0001a3dd) rs_clock_indi_pane_t1

0xb77b,	// (0x0001a3eb) rs_indi_pane

0xb783,	// (0x0001a3f3) rs_indi_pane_g1

0xb78c,	// (0x0001a3fc) rs_indi_pane_g2

0xb795,	// (0x0001a405) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x0001eb31) rs_indi_pane_g

0x3dd1,	// (0x00012a41) bg_popup_preview_window_pane_cp03

0xb79e,	// (0x0001a40e) popup_fep_tooltip_window_t1

0x846a,	// (0x000170da) popup_note2_window_g2_ParamLimits

0x846a,	// (0x000170da) popup_note2_window_g2

0x0001,

0xfc61,	// (0x0001e8d1) popup_note2_window_g_ParamLimits

0xfc61,	// (0x0001e8d1) popup_note2_window_g

0x8a4c,	// (0x000176bc) bg_popup_sub_pane_cp11_ParamLimits

0x8a59,	// (0x000176c9) cell_ai3_links_pane_g1_ParamLimits

0x8a70,	// (0x000176e0) cell_ai3_links_pane_t1

0xd44e,	// (0x0001c0be) set_text_pane_t1_copy1_ParamLimits

0x3ce0,	// (0x00012950) cell_graphic_popup_pane_cp2_ParamLimits

0x3ce0,	// (0x00012950) cell_graphic_popup_pane_cp2

0xb7ac,	// (0x0001a41c) cell_graphic_popup_pane_g1_cp2

0x2738,	// (0x000113a8) cell_graphic_popup_pane_g2_cp2

0xb7b4,	// (0x0001a424) cell_graphic_popup_pane_g3_cp2

0xb7bc,	// (0x0001a42c) cell_graphic_popup_pane_t2_cp2

0x2749,	// (0x000113b9) grid_highlight_pane_cp3_cp2

0x347f,	// (0x000120ef) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2f59,	// (0x00011bc9) main_tmo_pane_ParamLimits

0x8e20,	// (0x00017a90) popup_tmo_big_image_note_window

0xade8,	// (0x00019a58) cell_ai5_widget_list_pane

0xadf0,	// (0x00019a60) cell_ai5_widget_lrg_icon_pane

0xf4e8,	// (0x0001e158) tmo_note_info_pane_t1_ParamLimits

0xf4fd,	// (0x0001e16d) tmo_note_info_pane_t2_ParamLimits

0xf516,	// (0x0001e186) tmo_note_info_pane_t3_ParamLimits

0xb36d,	// (0x00019fdd) tmo_note_info_pane_t4_ParamLimits

0xb37f,	// (0x00019fef) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x0001eb1f) tmo_note_info_pane_t_ParamLimits

0xb4c4,	// (0x0001a134) settings_container_pane_ParamLimits

0xb718,	// (0x0001a388) indicator_popup_pane_cp5

0xb718,	// (0x0001a388) indicator_popup_pane_cp6

0xb44b,	// (0x0001a0bb) list_set_graphic_pane_copy1_ParamLimits

0x208c,	// (0x00010cfc) bg_popup_window_pane_cp23

0xb7ca,	// (0x0001a43a) popup_tmo_big_image_note_window_g1

0xb7d5,	// (0x0001a445) popup_tmo_big_image_note_window_t1

0xb7e5,	// (0x0001a455) popup_tmo_big_image_note_window_t2

0xb7f5,	// (0x0001a465) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x0001eb38) popup_tmo_big_image_note_window_t

0xb805,	// (0x0001a475) cell_ai5_widget_lrg_icon_pane_g1

0xb80d,	// (0x0001a47d) cell_ai5_widget_lrg_icon_pane_t1

0xb81b,	// (0x0001a48b) cell_ai5_widget_list_row_pane_ParamLimits

0xb81b,	// (0x0001a48b) cell_ai5_widget_list_row_pane

0xb834,	// (0x0001a4a4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xb834,	// (0x0001a4a4) cell_ai5_widget_list_row_pane_g1

0xb841,	// (0x0001a4b1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xb841,	// (0x0001a4b1) cell_ai5_widget_list_row_pane_t1

0xb859,	// (0x0001a4c9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xb859,	// (0x0001a4c9) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfecf,	// (0x0001eb3f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x0001eb3f) cell_ai5_widget_list_row_pane_t

0x208c,	// (0x00010cfc) main_fep_vtchi_ss_pane

0xb86b,	// (0x0001a4db) popup_fep_char_pre_window

0xb873,	// (0x0001a4e3) popup_fep_ituss_window

0xb88d,	// (0x0001a4fd) popup_fep_vkbss_window

0xb8ab,	// (0x0001a51b) grid_vkbss_keypad_pane_ParamLimits

0xb8ab,	// (0x0001a51b) grid_vkbss_keypad_pane

0xb8bb,	// (0x0001a52b) ituss_keypad_pane

0xb8d1,	// (0x0001a541) aid_vkbss_key_offset_ParamLimits

0xb8d1,	// (0x0001a541) aid_vkbss_key_offset

0xb8dd,	// (0x0001a54d) cell_vkbss_key_pane_ParamLimits

0xb8dd,	// (0x0001a54d) cell_vkbss_key_pane

0x4a47,	// (0x000136b7) bg_cell_vkbss_key_g1_ParamLimits

0x4a47,	// (0x000136b7) bg_cell_vkbss_key_g1

0xb8f3,	// (0x0001a563) cell_vkbss_key_3p_pane_ParamLimits

0xb8f3,	// (0x0001a563) cell_vkbss_key_3p_pane

0xb90d,	// (0x0001a57d) cell_vkbss_key_g1_ParamLimits

0xb90d,	// (0x0001a57d) cell_vkbss_key_g1

0xb927,	// (0x0001a597) cell_vkbss_key_t1_ParamLimits

0xb927,	// (0x0001a597) cell_vkbss_key_t1

0xb952,	// (0x0001a5c2) cell_ituss_key_pane_ParamLimits

0xb952,	// (0x0001a5c2) cell_ituss_key_pane

0xb962,	// (0x0001a5d2) bg_cell_ituss_key_g1_ParamLimits

0xb962,	// (0x0001a5d2) bg_cell_ituss_key_g1

0xb96e,	// (0x0001a5de) cell_ituss_key_pane_g1_ParamLimits

0xb96e,	// (0x0001a5de) cell_ituss_key_pane_g1

0xb97a,	// (0x0001a5ea) cell_ituss_key_pane_g2_ParamLimits

0xb97a,	// (0x0001a5ea) cell_ituss_key_pane_g2

0x0001,

0xfed4,	// (0x0001eb44) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x0001eb44) cell_ituss_key_pane_g

0xb993,	// (0x0001a603) cell_ituss_key_t1_ParamLimits

0xb993,	// (0x0001a603) cell_ituss_key_t1

0xb9c1,	// (0x0001a631) cell_ituss_key_t2_ParamLimits

0xb9c1,	// (0x0001a631) cell_ituss_key_t2

0xb9f2,	// (0x0001a662) cell_ituss_key_t3_ParamLimits

0xb9f2,	// (0x0001a662) cell_ituss_key_t3

0xba23,	// (0x0001a693) cell_ituss_key_t4_ParamLimits

0xba23,	// (0x0001a693) cell_ituss_key_t4

0x0003,

0xfed9,	// (0x0001eb49) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x0001eb49) cell_ituss_key_t

0xba54,	// (0x0001a6c4) cell_vkbss_key_3p_pane_g1

0xba5c,	// (0x0001a6cc) cell_vkbss_key_3p_pane_g2

0xba64,	// (0x0001a6d4) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x0001eb52) cell_vkbss_key_3p_pane_g

0x208c,	// (0x00010cfc) bg_popup_fep_char_preview_window_cp02

0xba6c,	// (0x0001a6dc) popup_fep_char_pre_window_t1

0xf3d1,	// (0x0001e041) main_ai5_sk_pane

0xb3f9,	// (0x0001a069) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xb405,	// (0x0001a075) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xb418,	// (0x0001a088) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xb424,	// (0x0001a094) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x0001eb2a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xb436,	// (0x0001a0a6) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2f59,	// (0x00011bc9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf55d,	// (0x0001e1cd) main_ai5_sk_pane_g1

0x519f,	// (0x00013e0f) popup_query_code_window_g1

0xb882,	// (0x0001a4f2) popup_fep_vkb_icf_pane

0xb896,	// (0x0001a506) popup_fep_vtchi_icf_pane

0x2f59,	// (0x00011bc9) bg_icf_pane

0xba8a,	// (0x0001a6fa) list_vkb_icf_pane

0x2f59,	// (0x00011bc9) bg_icf_pane_cp01

0xbaa2,	// (0x0001a712) vtchi_icf_list_pane

0xbab2,	// (0x0001a722) list_vkb_icf_pane_t1_ParamLimits

0xbab2,	// (0x0001a722) list_vkb_icf_pane_t1

0xbacc,	// (0x0001a73c) vtchi_icf_list_pane_t1_ParamLimits

0xbacc,	// (0x0001a73c) vtchi_icf_list_pane_t1

0xb873,	// (0x0001a4e3) popup_fep_ituss_window_ParamLimits

0xb896,	// (0x0001a506) popup_fep_vtchi_icf_pane_ParamLimits

0xb8bb,	// (0x0001a52b) ituss_keypad_pane_ParamLimits

0xb8c7,	// (0x0001a537) ituss_sks_pane

0x2f59,	// (0x00011bc9) bg_icf_pane_ParamLimits

0xba7b,	// (0x0001a6eb) icf_edit_indi_pane_ParamLimits

0xba7b,	// (0x0001a6eb) icf_edit_indi_pane

0xba8a,	// (0x0001a6fa) list_vkb_icf_pane_ParamLimits

0x2f59,	// (0x00011bc9) bg_icf_pane_cp01_ParamLimits

0xba96,	// (0x0001a706) icf_edit_indi_pane_cp01_ParamLimits

0xba96,	// (0x0001a706) icf_edit_indi_pane_cp01

0xbaaa,	// (0x0001a71a) vtchi_query_pane

0x7884,	// (0x000164f4) icf_edit_indi_pane_g1_ParamLimits

0x7884,	// (0x000164f4) icf_edit_indi_pane_g1

0xbaf3,	// (0x0001a763) icf_edit_indi_pane_g2_ParamLimits

0xbaf3,	// (0x0001a763) icf_edit_indi_pane_g2

0x0001,

0xfee9,	// (0x0001eb59) icf_edit_indi_pane_g_ParamLimits

0xfee9,	// (0x0001eb59) icf_edit_indi_pane_g

0xbaff,	// (0x0001a76f) icf_edit_indi_pane_t1

0xbb0d,	// (0x0001a77d) bg_input_focus_pane_cp042

0x291c,	// (0x0001158c) vtchi_button_pane

0xbb16,	// (0x0001a786) vtchi_query_pane_t1

0xbb24,	// (0x0001a794) vtchi_query_pane_t2

0xbb32,	// (0x0001a7a2) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0001eb5e) vtchi_query_pane_t

0x208c,	// (0x00010cfc) bg_button_pane_cp13

0xbb40,	// (0x0001a7b0) vtchi_button_pane_g1

0xbb48,	// (0x0001a7b8) ituss_sks_pane_g1

0xbb53,	// (0x0001a7c3) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0001eb65) ituss_sks_pane_g

0xbb5b,	// (0x0001a7cb) ituss_sks_pane_t1

0xbb69,	// (0x0001a7d9) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0001eb6a) ituss_sks_pane_t

0x6fea,	// (0x00015c5a) indicator_nsta_pane_cp_g1

0x6ff3,	// (0x00015c63) indicator_nsta_pane_cp_g2

0x6ffb,	// (0x00015c6b) indicator_nsta_pane_cp_g3

0x7003,	// (0x00015c73) indicator_nsta_pane_cp_g4

0x700b,	// (0x00015c7b) indicator_nsta_pane_cp_g5

0x7013,	// (0x00015c83) indicator_nsta_pane_cp_g6

0x0005,

0xfaab,	// (0x0001e71b) indicator_nsta_pane_cp_g

0xf00d,	// (0x0001dc7d) cell_graphic2_pane_t2_ParamLimits

0xf00d,	// (0x0001dc7d) cell_graphic2_pane_t2

0x0001,

0xfdb1,	// (0x0001ea21) cell_graphic2_pane_t_ParamLimits

0xfdb1,	// (0x0001ea21) cell_graphic2_pane_t

0xf03a,	// (0x0001dcaa) cell_graphic2_control_pane_t1

0x37f4,	// (0x00012464) signal_pane_g3_ParamLimits

0x37f4,	// (0x00012464) signal_pane_g3

0x3806,	// (0x00012476) signal_pane_g4_ParamLimits

0x3806,	// (0x00012476) signal_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small

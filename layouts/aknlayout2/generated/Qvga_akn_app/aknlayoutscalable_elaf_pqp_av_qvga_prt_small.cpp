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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000e920 };

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
0x225f,	// (0x00010b7f) Screen

0x2271,	// (0x00010b91) application_window_ParamLimits

0x2271,	// (0x00010b91) application_window

0x2289,	// (0x00010ba9) screen_g1

0x2293,	// (0x00010bb3) area_bottom_pane_ParamLimits

0x2293,	// (0x00010bb3) area_bottom_pane

0x22f8,	// (0x00010c18) area_top_pane_ParamLimits

0x22f8,	// (0x00010c18) area_top_pane

0xc874,	// (0x0001b194) main_pane_ParamLimits

0xc874,	// (0x0001b194) main_pane

0x2370,	// (0x00010c90) misc_graphics

0x42f6,	// (0x00012c16) battery_pane_ParamLimits

0x42f6,	// (0x00012c16) battery_pane

0x4fe9,	// (0x00013909) bg_status_flat_pane_g8

0x4ff1,	// (0x00013911) bg_status_flat_pane_g9

0x43ab,	// (0x00012ccb) context_pane_ParamLimits

0x43ab,	// (0x00012ccb) context_pane

0x44c2,	// (0x00012de2) navi_pane_ParamLimits

0x44c2,	// (0x00012de2) navi_pane

0x453f,	// (0x00012e5f) signal_pane_ParamLimits

0x453f,	// (0x00012e5f) signal_pane

0x0008,

0xf86d,	// (0x0001e18d) bg_status_flat_pane_g

0x45a8,	// (0x00012ec8) status_pane_g1_ParamLimits

0x45a8,	// (0x00012ec8) status_pane_g1

0x45b4,	// (0x00012ed4) status_pane_g2_ParamLimits

0x45b4,	// (0x00012ed4) status_pane_g2

0x45c0,	// (0x00012ee0) status_pane_g3_ParamLimits

0x45c0,	// (0x00012ee0) status_pane_g3

0x0004,

0xf79b,	// (0x0001e0bb) status_pane_g_ParamLimits

0xf79b,	// (0x0001e0bb) status_pane_g

0x45f2,	// (0x00012f12) title_pane_ParamLimits

0x45f2,	// (0x00012f12) title_pane

0x462f,	// (0x00012f4f) uni_indicator_pane_ParamLimits

0x462f,	// (0x00012f4f) uni_indicator_pane

0x420c,	// (0x00012b2c) bg_list_pane_ParamLimits

0x420c,	// (0x00012b2c) bg_list_pane

0xbf3e,	// (0x0001a85e) find_pane

0x4234,	// (0x00012b54) listscroll_app_pane_ParamLimits

0x4234,	// (0x00012b54) listscroll_app_pane

0x4240,	// (0x00012b60) listscroll_form_pane

0xbf46,	// (0x0001a866) listscroll_gen_pane_ParamLimits

0xbf46,	// (0x0001a866) listscroll_gen_pane

0xd06b,	// (0x0001b98b) listscroll_set_pane

0x3496,	// (0x00011db6) main_idle_act_pane

0x3f20,	// (0x00012840) main_idle_trad_pane

0x3f20,	// (0x00012840) main_list_empty_pane

0x426f,	// (0x00012b8f) main_midp_pane

0x427b,	// (0x00012b9b) main_pane_g1_ParamLimits

0x427b,	// (0x00012b9b) main_pane_g1

0xd073,	// (0x0001b993) popup_ai_message_window_ParamLimits

0xd073,	// (0x0001b993) popup_ai_message_window

0xd109,	// (0x0001ba29) popup_fep_china_uni_window_ParamLimits

0xd109,	// (0x0001ba29) popup_fep_china_uni_window

0xd147,	// (0x0001ba67) popup_fep_japan_candidate_window_ParamLimits

0xd147,	// (0x0001ba67) popup_fep_japan_candidate_window

0xd165,	// (0x0001ba85) popup_fep_japan_predictive_window_ParamLimits

0xd165,	// (0x0001ba85) popup_fep_japan_predictive_window

0xd191,	// (0x0001bab1) popup_find_window

0xd19e,	// (0x0001babe) popup_grid_graphic_window_ParamLimits

0xd19e,	// (0x0001babe) popup_grid_graphic_window

0xd1bc,	// (0x0001badc) popup_large_graphic_colour_window

0xd1db,	// (0x0001bafb) popup_menu_window_ParamLimits

0xd1db,	// (0x0001bafb) popup_menu_window

0xd313,	// (0x0001bc33) popup_note_image_window

0xd301,	// (0x0001bc21) popup_note_wait_window_ParamLimits

0xd301,	// (0x0001bc21) popup_note_wait_window

0xd301,	// (0x0001bc21) popup_note_window_ParamLimits

0xd301,	// (0x0001bc21) popup_note_window

0xd367,	// (0x0001bc87) popup_query_code_window_ParamLimits

0xd367,	// (0x0001bc87) popup_query_code_window

0xd379,	// (0x0001bc99) popup_query_data_code_window_ParamLimits

0xd379,	// (0x0001bc99) popup_query_data_code_window

0xd38e,	// (0x0001bcae) popup_query_data_window_ParamLimits

0xd38e,	// (0x0001bcae) popup_query_data_window

0xd3a4,	// (0x0001bcc4) popup_query_sat_info_window_ParamLimits

0xd3a4,	// (0x0001bcc4) popup_query_sat_info_window

0xd3d5,	// (0x0001bcf5) popup_snote_single_graphic_window_ParamLimits

0xd3d5,	// (0x0001bcf5) popup_snote_single_graphic_window

0xd3d5,	// (0x0001bcf5) popup_snote_single_text_window_ParamLimits

0xd3d5,	// (0x0001bcf5) popup_snote_single_text_window

0xd3e8,	// (0x0001bd08) popup_sub_window_general

0xd4ec,	// (0x0001be0c) popup_window_general_ParamLimits

0xd4ec,	// (0x0001be0c) popup_window_general

0x4291,	// (0x00012bb1) power_save_pane

0xcf07,	// (0x0001b827) control_pane_g1_ParamLimits

0xcf07,	// (0x0001b827) control_pane_g1

0xcf28,	// (0x0001b848) control_pane_g2_ParamLimits

0xcf28,	// (0x0001b848) control_pane_g2

0x41d7,	// (0x00012af7) control_pane_g3_ParamLimits

0x41d7,	// (0x00012af7) control_pane_g3

0x0007,

0xf783,	// (0x0001e0a3) control_pane_g_ParamLimits

0xf783,	// (0x0001e0a3) control_pane_g

0xcf6a,	// (0x0001b88a) control_pane_t1_ParamLimits

0xcf6a,	// (0x0001b88a) control_pane_t1

0xcfbc,	// (0x0001b8dc) control_pane_t2_ParamLimits

0xcfbc,	// (0x0001b8dc) control_pane_t2

0x0002,

0xf794,	// (0x0001e0b4) control_pane_t_ParamLimits

0xf794,	// (0x0001e0b4) control_pane_t

0x40fe,	// (0x00012a1e) navi_navi_volume_pane_cp1

0x4106,	// (0x00012a26) status_small_icon_pane

0x410e,	// (0x00012a2e) status_small_pane_g1_ParamLimits

0x410e,	// (0x00012a2e) status_small_pane_g1

0x4142,	// (0x00012a62) status_small_pane_g2_ParamLimits

0x4142,	// (0x00012a62) status_small_pane_g2

0x414e,	// (0x00012a6e) status_small_pane_g3_ParamLimits

0x414e,	// (0x00012a6e) status_small_pane_g3

0x415a,	// (0x00012a7a) status_small_pane_g4_ParamLimits

0x415a,	// (0x00012a7a) status_small_pane_g4

0x4166,	// (0x00012a86) status_small_pane_g5_ParamLimits

0x4166,	// (0x00012a86) status_small_pane_g5

0x4172,	// (0x00012a92) status_small_pane_g6_ParamLimits

0x4172,	// (0x00012a92) status_small_pane_g6

0x0007,

0xf772,	// (0x0001e092) status_small_pane_g_ParamLimits

0xf772,	// (0x0001e092) status_small_pane_g

0x41a1,	// (0x00012ac1) status_small_pane_t1

0x41c3,	// (0x00012ae3) status_small_wait_pane_ParamLimits

0x41c3,	// (0x00012ae3) status_small_wait_pane

0x3988,	// (0x000122a8) aid_levels_signal_ParamLimits

0x3988,	// (0x000122a8) aid_levels_signal

0x3999,	// (0x000122b9) signal_pane_g1_ParamLimits

0x3999,	// (0x000122b9) signal_pane_g1

0x39af,	// (0x000122cf) signal_pane_g2_ParamLimits

0x39af,	// (0x000122cf) signal_pane_g2

0x0003,

0xf703,	// (0x0001e023) signal_pane_g_ParamLimits

0xf703,	// (0x0001e023) signal_pane_g

0x39ea,	// (0x0001230a) context_pane_g1

0x237a,	// (0x00010c9a) title_pane_g1

0x23b0,	// (0x00010cd0) title_pane_t1

0x2418,	// (0x00010d38) title_pane_t2

0x243e,	// (0x00010d5e) title_pane_t3

0x0002,

0xf557,	// (0x0001de77) title_pane_t

0x4645,	// (0x00012f65) aid_levels_battery_ParamLimits

0x4645,	// (0x00012f65) aid_levels_battery

0x4658,	// (0x00012f78) battery_pane_g1_ParamLimits

0x4658,	// (0x00012f78) battery_pane_g1

0x466d,	// (0x00012f8d) battery_pane_g2_ParamLimits

0x466d,	// (0x00012f8d) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001e0c6) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001e0c6) battery_pane_g

0x58c6,	// (0x000141e6) uni_indicator_pane_g1

0x58dc,	// (0x000141fc) uni_indicator_pane_g2

0x58f2,	// (0x00014212) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0001e235) uni_indicator_pane_g

0x3375,	// (0x00011c95) navi_icon_pane_ParamLimits

0x3375,	// (0x00011c95) navi_icon_pane

0x2370,	// (0x00010c90) navi_midp_pane

0x2370,	// (0x00010c90) navi_navi_pane

0x3375,	// (0x00011c95) navi_text_pane_ParamLimits

0x3375,	// (0x00011c95) navi_text_pane

0x2289,	// (0x00010ba9) status_small_wait_pane_g1

0x28b1,	// (0x000111d1) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0001e230) status_small_wait_pane_g

0x55f9,	// (0x00013f19) navi_navi_icon_text_pane

0x5613,	// (0x00013f33) navi_navi_pane_g1_ParamLimits

0x5613,	// (0x00013f33) navi_navi_pane_g1

0x5601,	// (0x00013f21) navi_navi_pane_g2_ParamLimits

0x5601,	// (0x00013f21) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x0001e1fe) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x0001e1fe) navi_navi_pane_g

0x5625,	// (0x00013f45) navi_navi_tabs_pane

0x55f9,	// (0x00013f19) navi_navi_text_pane

0x55f9,	// (0x00013f19) navi_navi_volume_pane

0x55d5,	// (0x00013ef5) navi_text_pane_t1

0x55c9,	// (0x00013ee9) navi_icon_pane_g1

0x551d,	// (0x00013e3d) navi_navi_text_pane_t1

0xd753,	// (0x0001c073) navi_navi_volume_pane_g1

0xd75b,	// (0x0001c07b) volume_small_pane

0x5483,	// (0x00013da3) navi_navi_icon_text_pane_g1

0x548b,	// (0x00013dab) navi_navi_icon_text_pane_t1

0x5049,	// (0x00013969) navi_tabs_2_long_pane

0x5049,	// (0x00013969) navi_tabs_2_pane

0x5049,	// (0x00013969) navi_tabs_3_long_pane

0x5049,	// (0x00013969) navi_tabs_3_pane

0x5049,	// (0x00013969) navi_tabs_4_pane

0xd733,	// (0x0001c053) tabs_2_active_pane_ParamLimits

0xd733,	// (0x0001c053) tabs_2_active_pane

0xd743,	// (0x0001c063) tabs_2_passive_pane_ParamLimits

0xd743,	// (0x0001c063) tabs_2_passive_pane

0xd701,	// (0x0001c021) tabs_3_active_pane_ParamLimits

0xd701,	// (0x0001c021) tabs_3_active_pane

0xd711,	// (0x0001c031) tabs_3_passive_pane_ParamLimits

0xd711,	// (0x0001c031) tabs_3_passive_pane

0xd722,	// (0x0001c042) tabs_3_passive_pane_cp_ParamLimits

0xd722,	// (0x0001c042) tabs_3_passive_pane_cp

0xd6bd,	// (0x0001bfdd) tabs_4_active_pane_ParamLimits

0xd6bd,	// (0x0001bfdd) tabs_4_active_pane

0xd6ce,	// (0x0001bfee) tabs_4_passive_pane_ParamLimits

0xd6ce,	// (0x0001bfee) tabs_4_passive_pane

0xd6df,	// (0x0001bfff) tabs_4_passive_pane_cp_ParamLimits

0xd6df,	// (0x0001bfff) tabs_4_passive_pane_cp

0xd6f0,	// (0x0001c010) tabs_4_passive_pane_cp2_ParamLimits

0xd6f0,	// (0x0001c010) tabs_4_passive_pane_cp2

0xd69d,	// (0x0001bfbd) tabs_2_long_active_pane_ParamLimits

0xd69d,	// (0x0001bfbd) tabs_2_long_active_pane

0xd6ad,	// (0x0001bfcd) tabs_2_long_passive_pane_ParamLimits

0xd6ad,	// (0x0001bfcd) tabs_2_long_passive_pane

0xd668,	// (0x0001bf88) tabs_3_long_active_pane_ParamLimits

0xd668,	// (0x0001bf88) tabs_3_long_active_pane

0xd679,	// (0x0001bf99) tabs_3_long_passive_pane_ParamLimits

0xd679,	// (0x0001bf99) tabs_3_long_passive_pane

0xd68c,	// (0x0001bfac) tabs_3_long_passive_pane_cp_ParamLimits

0xd68c,	// (0x0001bfac) tabs_3_long_passive_pane_cp

0xd60e,	// (0x0001bf2e) volume_small_pane_g1

0xd617,	// (0x0001bf37) volume_small_pane_g2

0xd620,	// (0x0001bf40) volume_small_pane_g3

0xd629,	// (0x0001bf49) volume_small_pane_g4

0xd632,	// (0x0001bf52) volume_small_pane_g5

0xd63b,	// (0x0001bf5b) volume_small_pane_g6

0xd644,	// (0x0001bf64) volume_small_pane_g7

0xd64d,	// (0x0001bf6d) volume_small_pane_g8

0xd656,	// (0x0001bf76) volume_small_pane_g9

0xd65f,	// (0x0001bf7f) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0001e1ca) volume_small_pane_g

0x2450,	// (0x00010d70) bg_active_tab_pane_cp2_ParamLimits

0x2450,	// (0x00010d70) bg_active_tab_pane_cp2

0x245e,	// (0x00010d7e) tabs_3_active_pane_g1

0x2466,	// (0x00010d86) tabs_3_active_pane_t1

0x2450,	// (0x00010d70) bg_passive_tab_pane_cp2_ParamLimits

0x2450,	// (0x00010d70) bg_passive_tab_pane_cp2

0x245e,	// (0x00010d7e) tabs_3_passive_pane_g1

0x2466,	// (0x00010d86) tabs_3_passive_pane_t1

0x2450,	// (0x00010d70) bg_active_tab_pane_cp3_ParamLimits

0x2450,	// (0x00010d70) bg_active_tab_pane_cp3

0x2478,	// (0x00010d98) tabs_4_active_pane_g1

0x2480,	// (0x00010da0) tabs_4_active_pane_t1

0x2450,	// (0x00010d70) bg_passive_tab_pane_cp3_ParamLimits

0x2450,	// (0x00010d70) bg_passive_tab_pane_cp3

0x2478,	// (0x00010d98) tabs_4_1_passive_pane_g1

0x2480,	// (0x00010da0) tabs_4_1_passive_pane_t1

0x426f,	// (0x00012b8f) list_highlight_pane_cp2

0x5b18,	// (0x00014438) list_set_pane_ParamLimits

0x5b18,	// (0x00014438) list_set_pane

0x5ba6,	// (0x000144c6) main_pane_set_t1_ParamLimits

0x5ba6,	// (0x000144c6) main_pane_set_t1

0x5bc6,	// (0x000144e6) main_pane_set_t2_ParamLimits

0x5bc6,	// (0x000144e6) main_pane_set_t2

0x5bd8,	// (0x000144f8) main_pane_set_t3_ParamLimits

0x5bd8,	// (0x000144f8) main_pane_set_t3

0x5bea,	// (0x0001450a) main_pane_set_t4_ParamLimits

0x5bea,	// (0x0001450a) main_pane_set_t4

0x0003,

0xf97a,	// (0x0001e29a) main_pane_set_t_ParamLimits

0xf97a,	// (0x0001e29a) main_pane_set_t

0x5bfc,	// (0x0001451c) setting_code_pane

0x5c04,	// (0x00014524) setting_slider_graphic_pane

0x5c04,	// (0x00014524) setting_slider_pane

0x5c04,	// (0x00014524) setting_text_pane

0x5c04,	// (0x00014524) setting_volume_pane

0xca73,	// (0x0001b393) volume_set_pane

0x2450,	// (0x00010d70) bg_set_opt_pane_cp

0xca7b,	// (0x0001b39b) setting_slider_pane_t1

0xca91,	// (0x0001b3b1) setting_slider_pane_t2

0xcaaa,	// (0x0001b3ca) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001de7e) setting_slider_pane_t

0xcac1,	// (0x0001b3e1) slider_set_pane

0x2370,	// (0x00010c90) bg_set_opt_pane_cp2

0x2492,	// (0x00010db2) setting_slider_graphic_pane_g1

0xcad7,	// (0x0001b3f7) setting_slider_graphic_pane_t1

0xcae6,	// (0x0001b406) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001de85) setting_slider_graphic_pane_t

0xcaf5,	// (0x0001b415) slider_set_pane_cp

0x2370,	// (0x00010c90) input_focus_pane_cp1

0x5ade,	// (0x000143fe) list_set_text_pane

0x2289,	// (0x00010ba9) setting_text_pane_g1

0x2370,	// (0x00010c90) input_focus_pane_cp2

0x2289,	// (0x00010ba9) setting_code_pane_g1

0x249b,	// (0x00010dbb) setting_code_pane_t1

0xb81c,	// (0x0001a13c) set_text_pane_t1_ParamLimits

0xb81c,	// (0x0001a13c) set_text_pane_t1

0x3283,	// (0x00011ba3) set_opt_bg_pane_g1

0x328b,	// (0x00011bab) set_opt_bg_pane_g2

0x5abe,	// (0x000143de) set_opt_bg_pane_g3

0x329b,	// (0x00011bbb) set_opt_bg_pane_g4

0x32a3,	// (0x00011bc3) set_opt_bg_pane_g5

0x32ab,	// (0x00011bcb) set_opt_bg_pane_g6

0x5ac6,	// (0x000143e6) set_opt_bg_pane_g7

0x5ace,	// (0x000143ee) set_opt_bg_pane_g8

0x5ad6,	// (0x000143f6) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x0001e287) set_opt_bg_pane_g

0x5ab1,	// (0x000143d1) slider_set_pane_g1

0xd7c8,	// (0x0001c0e8) slider_set_pane_g2

0x0006,

0xf958,	// (0x0001e278) slider_set_pane_g

0xd764,	// (0x0001c084) volume_set_pane_g1

0xd76c,	// (0x0001c08c) volume_set_pane_g2

0xd774,	// (0x0001c094) volume_set_pane_g3

0xd77c,	// (0x0001c09c) volume_set_pane_g4

0xd784,	// (0x0001c0a4) volume_set_pane_g5

0xd78c,	// (0x0001c0ac) volume_set_pane_g6

0xd794,	// (0x0001c0b4) volume_set_pane_g7

0xd79c,	// (0x0001c0bc) volume_set_pane_g8

0xd7a4,	// (0x0001c0c4) volume_set_pane_g9

0xd7ac,	// (0x0001c0cc) volume_set_pane_g10

0x0009,

0xf930,	// (0x0001e250) volume_set_pane_g

0x24c4,	// (0x00010de4) indicator_pane_ParamLimits

0x24c4,	// (0x00010de4) indicator_pane

0x24d0,	// (0x00010df0) main_idle_pane_g2_ParamLimits

0x24d0,	// (0x00010df0) main_idle_pane_g2

0x24f4,	// (0x00010e14) main_pane_idle_g1_ParamLimits

0x24f4,	// (0x00010e14) main_pane_idle_g1

0x2501,	// (0x00010e21) popup_clock_digital_analogue_window_ParamLimits

0x2501,	// (0x00010e21) popup_clock_digital_analogue_window

0x2518,	// (0x00010e38) soft_indicator_pane_ParamLimits

0x2518,	// (0x00010e38) soft_indicator_pane

0x2524,	// (0x00010e44) wallpaper_pane_ParamLimits

0x2524,	// (0x00010e44) wallpaper_pane

0x2289,	// (0x00010ba9) wallpaper_pane_g1

0x2538,	// (0x00010e58) indicator_pane_g1_ParamLimits

0x2538,	// (0x00010e58) indicator_pane_g1

0x5ef0,	// (0x00014810) navi_navi_icon_text_pane_srt_g1

0x2553,	// (0x00010e73) soft_indicator_pane_t1

0x256d,	// (0x00010e8d) aid_ps_area_pane

0x257e,	// (0x00010e9e) aid_ps_clock_pane

0x258a,	// (0x00010eaa) aid_ps_indicator_pane

0x2596,	// (0x00010eb6) indicator_ps_pane_ParamLimits

0x2596,	// (0x00010eb6) indicator_ps_pane

0x25a5,	// (0x00010ec5) power_save_pane_g1_ParamLimits

0x25a5,	// (0x00010ec5) power_save_pane_g1

0x25b1,	// (0x00010ed1) power_save_pane_g2_ParamLimits

0x25b1,	// (0x00010ed1) power_save_pane_g2

0xc7f0,	// (0x0001b110) aid_navinavi_width_pane

0x256d,	// (0x00010e8d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001de8a) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001de8a) power_save_pane_g

0x25bf,	// (0x00010edf) power_save_pane_t1_ParamLimits

0x25bf,	// (0x00010edf) power_save_pane_t1

0x257e,	// (0x00010e9e) aid_ps_clock_pane_ParamLimits

0x258a,	// (0x00010eaa) aid_ps_indicator_pane_ParamLimits

0x25d1,	// (0x00010ef1) power_save_pane_t4_ParamLimits

0x25d1,	// (0x00010ef1) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001de8f) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001de8f) power_save_pane_t

0x25fb,	// (0x00010f1b) power_save_t3_ParamLimits

0x25fb,	// (0x00010f1b) power_save_t3

0x25e6,	// (0x00010f06) power_save_t2_ParamLimits

0x25e6,	// (0x00010f06) power_save_t2

0x2610,	// (0x00010f30) indicator_ps_pane_g1

0x2619,	// (0x00010f39) ai_gene_pane_ParamLimits

0x2619,	// (0x00010f39) ai_gene_pane

0x2625,	// (0x00010f45) ai_links_pane_ParamLimits

0x2625,	// (0x00010f45) ai_links_pane

0x2631,	// (0x00010f51) indicator_pane_cp1_ParamLimits

0x2631,	// (0x00010f51) indicator_pane_cp1

0x263d,	// (0x00010f5d) main_pane_idle_g1_cp_ParamLimits

0x263d,	// (0x00010f5d) main_pane_idle_g1_cp

0x2649,	// (0x00010f69) popup_ai_links_title_window

0x2652,	// (0x00010f72) soft_indicator_pane_cp1_ParamLimits

0x2652,	// (0x00010f72) soft_indicator_pane_cp1

0x58b4,	// (0x000141d4) ai_links_pane_g1

0x58bd,	// (0x000141dd) grid_ai_links_pane

0x5899,	// (0x000141b9) ai_gene_pane_1

0x58a2,	// (0x000141c2) ai_gene_pane_2

0x58ab,	// (0x000141cb) list_highlight_pane_cp4

0x587d,	// (0x0001419d) cell_ai_link_pane_ParamLimits

0x587d,	// (0x0001419d) cell_ai_link_pane

0x5875,	// (0x00014195) cell_ai_link_pane_g1

0x28b1,	// (0x000111d1) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x0001e22b) cell_ai_link_pane_g

0x2370,	// (0x00010c90) grid_highlight_cp2

0x2370,	// (0x00010c90) bg_popup_sub_pane_cp1

0x266c,	// (0x00010f8c) popup_ai_links_title_window_t1

0x57c7,	// (0x000140e7) ai_gene_pane_1_g1_ParamLimits

0x57c7,	// (0x000140e7) ai_gene_pane_1_g1

0x57d3,	// (0x000140f3) ai_gene_pane_1_g2_ParamLimits

0x57d3,	// (0x000140f3) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x0001e221) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x0001e221) ai_gene_pane_1_g

0x57e0,	// (0x00014100) ai_gene_pane_1_t1_ParamLimits

0x57e0,	// (0x00014100) ai_gene_pane_1_t1

0x5814,	// (0x00014134) grid_ai_soft_ind_pane

0x57b2,	// (0x000140d2) ai_gene_pane_2_t1_ParamLimits

0x57b2,	// (0x000140d2) ai_gene_pane_2_t1

0x267b,	// (0x00010f9b) main_pane_empty_t1_ParamLimits

0x267b,	// (0x00010f9b) main_pane_empty_t1

0x2698,	// (0x00010fb8) main_pane_empty_t2_ParamLimits

0x2698,	// (0x00010fb8) main_pane_empty_t2

0x26b0,	// (0x00010fd0) main_pane_empty_t3_ParamLimits

0x26b0,	// (0x00010fd0) main_pane_empty_t3

0x26c3,	// (0x00010fe3) main_pane_empty_t4_ParamLimits

0x26c3,	// (0x00010fe3) main_pane_empty_t4

0x26d6,	// (0x00010ff6) main_pane_empty_t5_ParamLimits

0x26d6,	// (0x00010ff6) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001de94) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001de94) main_pane_empty_t

0x3375,	// (0x00011c95) bg_popup_window_pane_ParamLimits

0x3375,	// (0x00011c95) bg_popup_window_pane

0x552c,	// (0x00013e4c) find_popup_pane_cp2_ParamLimits

0x552c,	// (0x00013e4c) find_popup_pane_cp2

0x5538,	// (0x00013e58) heading_pane_ParamLimits

0x5538,	// (0x00013e58) heading_pane

0x2370,	// (0x00010c90) bg_popup_sub_pane

0x54a5,	// (0x00013dc5) bg_popup_window_pane_g1_ParamLimits

0x54a5,	// (0x00013dc5) bg_popup_window_pane_g1

0x54b1,	// (0x00013dd1) bg_popup_window_pane_g2_ParamLimits

0x54b1,	// (0x00013dd1) bg_popup_window_pane_g2

0x54bd,	// (0x00013ddd) bg_popup_window_pane_g3_ParamLimits

0x54bd,	// (0x00013ddd) bg_popup_window_pane_g3

0x54c9,	// (0x00013de9) bg_popup_window_pane_g4_ParamLimits

0x54c9,	// (0x00013de9) bg_popup_window_pane_g4

0x54d5,	// (0x00013df5) bg_popup_window_pane_g5_ParamLimits

0x54d5,	// (0x00013df5) bg_popup_window_pane_g5

0x54e1,	// (0x00013e01) bg_popup_window_pane_g6_ParamLimits

0x54e1,	// (0x00013e01) bg_popup_window_pane_g6

0x54ed,	// (0x00013e0d) bg_popup_window_pane_g7_ParamLimits

0x54ed,	// (0x00013e0d) bg_popup_window_pane_g7

0x54f9,	// (0x00013e19) bg_popup_window_pane_g8_ParamLimits

0x54f9,	// (0x00013e19) bg_popup_window_pane_g8

0x5505,	// (0x00013e25) bg_popup_window_pane_g9_ParamLimits

0x5505,	// (0x00013e25) bg_popup_window_pane_g9

0x5511,	// (0x00013e31) bg_popup_window_pane_g10_ParamLimits

0x5511,	// (0x00013e31) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0001e1e9) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0001e1e9) bg_popup_window_pane_g

0x543a,	// (0x00013d5a) bg_popup_heading_pane_ParamLimits

0x543a,	// (0x00013d5a) bg_popup_heading_pane

0xd850,	// (0x0001c170) tabs_4_passive_pane_cp_srt_ParamLimits

0xd850,	// (0x0001c170) tabs_4_passive_pane_cp_srt

0xd862,	// (0x0001c182) tabs_4_passive_pane_srt_ParamLimits

0x544e,	// (0x00013d6e) heading_pane_g2

0xd862,	// (0x0001c182) tabs_4_passive_pane_srt

0x426f,	// (0x00012b8f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x426f,	// (0x00012b8f) bg_passive_tab_pane_cp3_srt

0x5456,	// (0x00013d76) heading_pane_t1_ParamLimits

0x5456,	// (0x00013d76) heading_pane_t1

0x546d,	// (0x00013d8d) heading_pane_t2_ParamLimits

0x546d,	// (0x00013d8d) heading_pane_t2

0x0001,

0xf8c4,	// (0x0001e1e4) heading_pane_t_ParamLimits

0xf8c4,	// (0x0001e1e4) heading_pane_t

0x4fb1,	// (0x000138d1) bg_popup_heading_pane_g1

0x505a,	// (0x0001397a) bg_popup_heading_pane_g2

0x5062,	// (0x00013982) bg_popup_heading_pane_g3

0x506a,	// (0x0001398a) bg_popup_heading_pane_g4

0x5072,	// (0x00013992) bg_popup_heading_pane_g5

0x507a,	// (0x0001399a) bg_popup_heading_pane_g6

0x5082,	// (0x000139a2) bg_popup_heading_pane_g7

0x508a,	// (0x000139aa) bg_popup_heading_pane_g8

0x5092,	// (0x000139b2) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0001e1a0) bg_popup_heading_pane_g

0x4738,	// (0x00013058) bg_popup_sub_pane_g1

0x4748,	// (0x00013068) bg_popup_sub_pane_g2

0x4740,	// (0x00013060) bg_popup_sub_pane_g3

0x4758,	// (0x00013078) bg_popup_sub_pane_g4

0x4750,	// (0x00013070) bg_popup_sub_pane_g5

0x4760,	// (0x00013080) bg_popup_sub_pane_g6

0x4768,	// (0x00013088) bg_popup_sub_pane_g7

0x4778,	// (0x00013098) bg_popup_sub_pane_g8

0x4770,	// (0x00013090) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x0001e17a) bg_popup_sub_pane_g

0x26e9,	// (0x00011009) bg_popup_window_pane_cp5_ParamLimits

0x26e9,	// (0x00011009) bg_popup_window_pane_cp5

0x2705,	// (0x00011025) popup_note_window_g1_ParamLimits

0x2705,	// (0x00011025) popup_note_window_g1

0x2711,	// (0x00011031) popup_note_window_t1_ParamLimits

0x2711,	// (0x00011031) popup_note_window_t1

0x2727,	// (0x00011047) popup_note_window_t2_ParamLimits

0x2727,	// (0x00011047) popup_note_window_t2

0x273d,	// (0x0001105d) popup_note_window_t3_ParamLimits

0x273d,	// (0x0001105d) popup_note_window_t3

0x2753,	// (0x00011073) popup_note_window_t4_ParamLimits

0x2753,	// (0x00011073) popup_note_window_t4

0x277b,	// (0x0001109b) popup_note_window_t5_ParamLimits

0x277b,	// (0x0001109b) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001de9f) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001de9f) popup_note_window_t

0x27c5,	// (0x000110e5) bg_popup_window_pane_cp6_ParamLimits

0x27c5,	// (0x000110e5) bg_popup_window_pane_cp6

0x4f2d,	// (0x0001384d) popup_note_image_window_g1_ParamLimits

0x4f2d,	// (0x0001384d) popup_note_image_window_g1

0x4f39,	// (0x00013859) popup_note_image_window_g2_ParamLimits

0x4f39,	// (0x00013859) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0001e16e) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0001e16e) popup_note_image_window_g

0x4f52,	// (0x00013872) popup_note_image_window_t1_ParamLimits

0x4f52,	// (0x00013872) popup_note_image_window_t1

0x4f6b,	// (0x0001388b) popup_note_image_window_t2_ParamLimits

0x4f6b,	// (0x0001388b) popup_note_image_window_t2

0x4f84,	// (0x000138a4) popup_note_image_window_t3_ParamLimits

0x4f84,	// (0x000138a4) popup_note_image_window_t3

0x0002,

0xf853,	// (0x0001e173) popup_note_image_window_t_ParamLimits

0xf853,	// (0x0001e173) popup_note_image_window_t

0x4dfc,	// (0x0001371c) bg_popup_window_pane_cp7_ParamLimits

0x4dfc,	// (0x0001371c) bg_popup_window_pane_cp7

0x4e2c,	// (0x0001374c) popup_note_wait_window_g1_ParamLimits

0x4e2c,	// (0x0001374c) popup_note_wait_window_g1

0x4e38,	// (0x00013758) popup_note_wait_window_g2_ParamLimits

0x4e38,	// (0x00013758) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0001e15c) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0001e15c) popup_note_wait_window_g

0x4e50,	// (0x00013770) popup_note_wait_window_t1_ParamLimits

0x4e50,	// (0x00013770) popup_note_wait_window_t1

0x4e77,	// (0x00013797) popup_note_wait_window_t2_ParamLimits

0x4e77,	// (0x00013797) popup_note_wait_window_t2

0x4e94,	// (0x000137b4) popup_note_wait_window_t3_ParamLimits

0x4e94,	// (0x000137b4) popup_note_wait_window_t3

0x4ea7,	// (0x000137c7) popup_note_wait_window_t4_ParamLimits

0x4ea7,	// (0x000137c7) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x0001e163) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x0001e163) popup_note_wait_window_t

0x4ecc,	// (0x000137ec) wait_bar_pane_ParamLimits

0x4ecc,	// (0x000137ec) wait_bar_pane

0x2370,	// (0x00010c90) wait_anim_pane

0x2370,	// (0x00010c90) wait_border_pane

0x2289,	// (0x00010ba9) wait_anim_pane_g1

0x2289,	// (0x00010ba9) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001e01e) wait_anim_pane_g

0x4dac,	// (0x000136cc) wait_border_pane_g1

0x4db5,	// (0x000136d5) wait_border_pane_g2

0x4dbe,	// (0x000136de) wait_border_pane_g3

0x0002,

0xf835,	// (0x0001e155) wait_border_pane_g

0x4c1c,	// (0x0001353c) bg_popup_window_pane_cp16_ParamLimits

0x4c1c,	// (0x0001353c) bg_popup_window_pane_cp16

0x4d1c,	// (0x0001363c) indicator_popup_pane_cp4_ParamLimits

0x4d1c,	// (0x0001363c) indicator_popup_pane_cp4

0x4d30,	// (0x00013650) popup_query_data_window_t1_ParamLimits

0x4d30,	// (0x00013650) popup_query_data_window_t1

0x4d42,	// (0x00013662) popup_query_data_window_t2_ParamLimits

0x4d42,	// (0x00013662) popup_query_data_window_t2

0x4d5b,	// (0x0001367b) popup_query_data_window_t3_ParamLimits

0x4d5b,	// (0x0001367b) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0001e14e) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0001e14e) popup_query_data_window_t

0x4d75,	// (0x00013695) query_popup_data_pane_ParamLimits

0x4d75,	// (0x00013695) query_popup_data_pane

0x4d89,	// (0x000136a9) query_popup_data_pane_cp1_ParamLimits

0x4d89,	// (0x000136a9) query_popup_data_pane_cp1

0x4c1c,	// (0x0001353c) bg_popup_window_pane_cp10_ParamLimits

0x4c1c,	// (0x0001353c) bg_popup_window_pane_cp10

0x4c4e,	// (0x0001356e) indicator_popup_pane_ParamLimits

0x4c4e,	// (0x0001356e) indicator_popup_pane

0x4c70,	// (0x00013590) popup_query_code_window_t1_ParamLimits

0x4c70,	// (0x00013590) popup_query_code_window_t1

0x4c8a,	// (0x000135aa) popup_query_code_window_t2_ParamLimits

0x4c8a,	// (0x000135aa) popup_query_code_window_t2

0x4cd3,	// (0x000135f3) popup_query_code_window_t3_ParamLimits

0x4cd3,	// (0x000135f3) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0001e147) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0001e147) popup_query_code_window_t

0x4d02,	// (0x00013622) query_popup_pane_ParamLimits

0x4d02,	// (0x00013622) query_popup_pane

0x27c5,	// (0x000110e5) bg_popup_window_pane_cp15_ParamLimits

0x27c5,	// (0x000110e5) bg_popup_window_pane_cp15

0x27e3,	// (0x00011103) indicator_popup_pane_cp1_ParamLimits

0x27e3,	// (0x00011103) indicator_popup_pane_cp1

0x27f6,	// (0x00011116) indicator_popup_pane_cp2_ParamLimits

0x27f6,	// (0x00011116) indicator_popup_pane_cp2

0x2809,	// (0x00011129) popup_query_data_code_window_g1_ParamLimits

0x2809,	// (0x00011129) popup_query_data_code_window_g1

0x281c,	// (0x0001113c) popup_query_data_code_window_t1_ParamLimits

0x281c,	// (0x0001113c) popup_query_data_code_window_t1

0x282e,	// (0x0001114e) popup_query_data_code_window_t2_ParamLimits

0x282e,	// (0x0001114e) popup_query_data_code_window_t2

0x2840,	// (0x00011160) popup_query_data_code_window_t3_ParamLimits

0x2840,	// (0x00011160) popup_query_data_code_window_t3

0x2856,	// (0x00011176) popup_query_data_code_window_t4_ParamLimits

0x2856,	// (0x00011176) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001deaa) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001deaa) popup_query_data_code_window_t

0x3da1,	// (0x000126c1) list_single_midp_graphic_pane_g3

0x286e,	// (0x0001118e) query_popup_data_pane_cp2_ParamLimits

0x2881,	// (0x000111a1) query_popup_pane_cp2_ParamLimits

0x2881,	// (0x000111a1) query_popup_pane_cp2

0x2370,	// (0x00010c90) bg_popup_window_pane_cp11

0x4c08,	// (0x00013528) heading_pane_cp5

0x2965,	// (0x00011285) listscroll_popup_info_pane

0x2370,	// (0x00010c90) input_focus_pane_cp3

0x2894,	// (0x000111b4) query_popup_pane_t1

0x28a2,	// (0x000111c2) list_popup_info_pane_ParamLimits

0x28a2,	// (0x000111c2) list_popup_info_pane

0x28b1,	// (0x000111d1) listscroll_popup_info_pane_g1

0x28b9,	// (0x000111d9) scroll_pane_cp7

0x28c1,	// (0x000111e1) popup_info_list_pane_t1_ParamLimits

0x28c1,	// (0x000111e1) popup_info_list_pane_t1

0x28db,	// (0x000111fb) popup_info_list_pane_t2_ParamLimits

0x28db,	// (0x000111fb) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001deb3) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001deb3) popup_info_list_pane_t

0x2370,	// (0x00010c90) bg_popup_window_pane_cp12

0x5f0a,	// (0x0001482a) find_popup_pane

0x2450,	// (0x00010d70) bg_popup_window_pane_cp3

0x28f5,	// (0x00011215) heading_pane_cp3

0x2901,	// (0x00011221) listscroll_popup_graphic_pane

0x2370,	// (0x00010c90) bg_popup_window_pane_cp4

0x295d,	// (0x0001127d) heading_pane_cp4

0x2965,	// (0x00011285) listscroll_popup_colour_pane

0x296d,	// (0x0001128d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x296d,	// (0x0001128d) cell_large_graphic_colour_none_popup_pane

0x297d,	// (0x0001129d) grid_large_graphic_colour_popup_pane_ParamLimits

0x297d,	// (0x0001129d) grid_large_graphic_colour_popup_pane

0x2999,	// (0x000112b9) listscroll_popup_colour_pane_g1_ParamLimits

0x2999,	// (0x000112b9) listscroll_popup_colour_pane_g1

0x29b0,	// (0x000112d0) listscroll_popup_colour_pane_g2_ParamLimits

0x29b0,	// (0x000112d0) listscroll_popup_colour_pane_g2

0x29c4,	// (0x000112e4) listscroll_popup_colour_pane_g3_ParamLimits

0x29c4,	// (0x000112e4) listscroll_popup_colour_pane_g3

0x29d4,	// (0x000112f4) listscroll_popup_colour_pane_g4_ParamLimits

0x29d4,	// (0x000112f4) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001deb8) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001deb8) listscroll_popup_colour_pane_g

0x29e3,	// (0x00011303) scroll_pane_cp6_ParamLimits

0x29e3,	// (0x00011303) scroll_pane_cp6

0x29f5,	// (0x00011315) cell_large_graphic_colour_popup_pane_ParamLimits

0x29f5,	// (0x00011315) cell_large_graphic_colour_popup_pane

0x2a14,	// (0x00011334) cell_large_graphic_colour_none_popup_pane_t1

0x2370,	// (0x00010c90) grid_highlight_pane_cp5

0x2a23,	// (0x00011343) cell_large_graphic_colour_popup_pane_g1

0x2a2b,	// (0x0001134b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001dec1) cell_large_graphic_colour_popup_pane_g

0x2a33,	// (0x00011353) cell_large_graphic_colour_popup_pane_g2_copy1

0x2a3c,	// (0x0001135c) grid_highlight_pane_cp4

0x2a44,	// (0x00011364) bg_popup_window_pane_cp8_ParamLimits

0x2a44,	// (0x00011364) bg_popup_window_pane_cp8

0x2a5f,	// (0x0001137f) popup_snote_single_text_window_g1_ParamLimits

0x2a5f,	// (0x0001137f) popup_snote_single_text_window_g1

0x2a71,	// (0x00011391) popup_snote_single_text_window_t1_ParamLimits

0x2a71,	// (0x00011391) popup_snote_single_text_window_t1

0x2a84,	// (0x000113a4) popup_snote_single_text_window_t2_ParamLimits

0x2a84,	// (0x000113a4) popup_snote_single_text_window_t2

0x2a97,	// (0x000113b7) popup_snote_single_text_window_t3_ParamLimits

0x2a97,	// (0x000113b7) popup_snote_single_text_window_t3

0x2ad0,	// (0x000113f0) popup_snote_single_text_window_t4_ParamLimits

0x2ad0,	// (0x000113f0) popup_snote_single_text_window_t4

0x2b04,	// (0x00011424) popup_snote_single_text_window_t5_ParamLimits

0x2b04,	// (0x00011424) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001dec6) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001dec6) popup_snote_single_text_window_t

0x2b33,	// (0x00011453) bg_popup_window_pane_cp9_ParamLimits

0x2b33,	// (0x00011453) bg_popup_window_pane_cp9

0x2a5f,	// (0x0001137f) popup_snote_single_graphic_window_g1_ParamLimits

0x2a5f,	// (0x0001137f) popup_snote_single_graphic_window_g1

0x2b41,	// (0x00011461) popup_snote_single_graphic_window_g2_ParamLimits

0x2b41,	// (0x00011461) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001ded1) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001ded1) popup_snote_single_graphic_window_g

0x2b4d,	// (0x0001146d) popup_snote_single_graphic_window_t1_ParamLimits

0x2b4d,	// (0x0001146d) popup_snote_single_graphic_window_t1

0x2b60,	// (0x00011480) popup_snote_single_graphic_window_t2_ParamLimits

0x2b60,	// (0x00011480) popup_snote_single_graphic_window_t2

0x2a97,	// (0x000113b7) popup_snote_single_graphic_window_t3_ParamLimits

0x2a97,	// (0x000113b7) popup_snote_single_graphic_window_t3

0x2ad0,	// (0x000113f0) popup_snote_single_graphic_window_t4_ParamLimits

0x2ad0,	// (0x000113f0) popup_snote_single_graphic_window_t4

0x2b04,	// (0x00011424) popup_snote_single_graphic_window_t5_ParamLimits

0x2b04,	// (0x00011424) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001ded6) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001ded6) popup_snote_single_graphic_window_t

0x5e77,	// (0x00014797) grid_graphic_popup_pane_ParamLimits

0x5e77,	// (0x00014797) grid_graphic_popup_pane

0x5e9a,	// (0x000147ba) listscroll_popup_graphic_pane_g1_ParamLimits

0x5e9a,	// (0x000147ba) listscroll_popup_graphic_pane_g1

0x5eae,	// (0x000147ce) listscroll_popup_graphic_pane_g2_ParamLimits

0x5eae,	// (0x000147ce) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0001e2c4) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0001e2c4) listscroll_popup_graphic_pane_g

0x5ec2,	// (0x000147e2) scroll_pane_cp5

0x5e1a,	// (0x0001473a) cell_graphic_popup_pane_ParamLimits

0x5e1a,	// (0x0001473a) cell_graphic_popup_pane

0x5dfb,	// (0x0001471b) cell_graphic_popup_pane_g1

0x5e03,	// (0x00014723) cell_graphic_popup_pane_g2

0x2a33,	// (0x00011353) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0001e2bd) cell_graphic_popup_pane_g

0x5e0c,	// (0x0001472c) cell_graphic_popup_pane_t2

0x2a3c,	// (0x0001135c) grid_highlight_pane_cp3

0x2b85,	// (0x000114a5) list_gen_pane_ParamLimits

0x2b85,	// (0x000114a5) list_gen_pane

0x2bb6,	// (0x000114d6) scroll_pane

0x5d7b,	// (0x0001469b) bg_list_pane_g1_ParamLimits

0x5d7b,	// (0x0001469b) bg_list_pane_g1

0x5d92,	// (0x000146b2) bg_list_pane_g2_ParamLimits

0x5d92,	// (0x000146b2) bg_list_pane_g2

0x5da5,	// (0x000146c5) bg_list_pane_g3_ParamLimits

0x5da5,	// (0x000146c5) bg_list_pane_g3

0x5db7,	// (0x000146d7) bg_list_pane_g4_ParamLimits

0x5db7,	// (0x000146d7) bg_list_pane_g4

0x5dc9,	// (0x000146e9) bg_list_pane_g5_ParamLimits

0x5dc9,	// (0x000146e9) bg_list_pane_g5

0x0004,

0xf992,	// (0x0001e2b2) bg_list_pane_g_ParamLimits

0xf992,	// (0x0001e2b2) bg_list_pane_g

0x5caa,	// (0x000145ca) list_double2_graphic_large_graphic_pane_ParamLimits

0x5caa,	// (0x000145ca) list_double2_graphic_large_graphic_pane

0x5caa,	// (0x000145ca) list_double2_graphic_pane_ParamLimits

0x5caa,	// (0x000145ca) list_double2_graphic_pane

0x5caa,	// (0x000145ca) list_double2_large_graphic_pane_ParamLimits

0x5caa,	// (0x000145ca) list_double2_large_graphic_pane

0x5caa,	// (0x000145ca) list_double2_pane_ParamLimits

0x5caa,	// (0x000145ca) list_double2_pane

0x5caa,	// (0x000145ca) list_double_graphic_heading_pane_ParamLimits

0x5caa,	// (0x000145ca) list_double_graphic_heading_pane

0x5caa,	// (0x000145ca) list_double_graphic_pane_ParamLimits

0x5caa,	// (0x000145ca) list_double_graphic_pane

0x5caa,	// (0x000145ca) list_double_heading_pane_ParamLimits

0x5caa,	// (0x000145ca) list_double_heading_pane

0x5caa,	// (0x000145ca) list_double_large_graphic_pane_ParamLimits

0x5caa,	// (0x000145ca) list_double_large_graphic_pane

0x5caa,	// (0x000145ca) list_double_number_pane_ParamLimits

0x5caa,	// (0x000145ca) list_double_number_pane

0x5caa,	// (0x000145ca) list_double_pane_ParamLimits

0x5caa,	// (0x000145ca) list_double_pane

0x5caa,	// (0x000145ca) list_double_time_pane_ParamLimits

0x5caa,	// (0x000145ca) list_double_time_pane

0x5caa,	// (0x000145ca) list_setting_number_pane_ParamLimits

0x5caa,	// (0x000145ca) list_setting_number_pane

0x5caa,	// (0x000145ca) list_setting_pane_ParamLimits

0x5caa,	// (0x000145ca) list_setting_pane

0xc120,	// (0x0001aa40) list_single_2graphic_pane_ParamLimits

0xc120,	// (0x0001aa40) list_single_2graphic_pane

0xc120,	// (0x0001aa40) list_single_graphic_heading_pane_ParamLimits

0xc120,	// (0x0001aa40) list_single_graphic_heading_pane

0xc120,	// (0x0001aa40) list_single_graphic_pane_ParamLimits

0xc120,	// (0x0001aa40) list_single_graphic_pane

0xc120,	// (0x0001aa40) list_single_heading_pane_ParamLimits

0xc120,	// (0x0001aa40) list_single_heading_pane

0xc137,	// (0x0001aa57) list_single_large_graphic_pane_ParamLimits

0xc137,	// (0x0001aa57) list_single_large_graphic_pane

0xc120,	// (0x0001aa40) list_single_number_heading_pane_ParamLimits

0xc120,	// (0x0001aa40) list_single_number_heading_pane

0xc120,	// (0x0001aa40) list_single_number_pane_ParamLimits

0xc120,	// (0x0001aa40) list_single_number_pane

0xc120,	// (0x0001aa40) list_single_pane_ParamLimits

0xc120,	// (0x0001aa40) list_single_pane

0x2370,	// (0x00010c90) list_highlight_pane_cp1

0xb844,	// (0x0001a164) list_single_pane_g1_ParamLimits

0xb844,	// (0x0001a164) list_single_pane_g1

0xb850,	// (0x0001a170) list_single_pane_g2_ParamLimits

0xb850,	// (0x0001a170) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001dee8) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001dee8) list_single_pane_g

0xc0cf,	// (0x0001a9ef) list_single_pane_t1_ParamLimits

0xc0cf,	// (0x0001a9ef) list_single_pane_t1

0xb844,	// (0x0001a164) list_single_number_pane_g1_ParamLimits

0xb844,	// (0x0001a164) list_single_number_pane_g1

0xb850,	// (0x0001a170) list_single_number_pane_g2_ParamLimits

0xb850,	// (0x0001a170) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001dee8) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001dee8) list_single_number_pane_g

0xb85c,	// (0x0001a17c) list_single_number_pane_t1_ParamLimits

0xb85c,	// (0x0001a17c) list_single_number_pane_t1

0xc090,	// (0x0001a9b0) list_single_number_pane_t2_ParamLimits

0xc090,	// (0x0001a9b0) list_single_number_pane_t2

0x0001,

0xf953,	// (0x0001e273) list_single_number_pane_t_ParamLimits

0xf953,	// (0x0001e273) list_single_number_pane_t

0xb838,	// (0x0001a158) list_single_graphic_pane_g1_ParamLimits

0xb838,	// (0x0001a158) list_single_graphic_pane_g1

0xb844,	// (0x0001a164) list_single_graphic_pane_g2_ParamLimits

0xb844,	// (0x0001a164) list_single_graphic_pane_g2

0xb850,	// (0x0001a170) list_single_graphic_pane_g3_ParamLimits

0xb850,	// (0x0001a170) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001dee1) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001dee1) list_single_graphic_pane_g

0xb85c,	// (0x0001a17c) list_single_graphic_pane_t1_ParamLimits

0xb85c,	// (0x0001a17c) list_single_graphic_pane_t1

0xb844,	// (0x0001a164) list_single_heading_pane_g1_ParamLimits

0xb844,	// (0x0001a164) list_single_heading_pane_g1

0xb850,	// (0x0001a170) list_single_heading_pane_g2_ParamLimits

0xb850,	// (0x0001a170) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001dee8) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001dee8) list_single_heading_pane_g

0xb872,	// (0x0001a192) list_single_heading_pane_t1_ParamLimits

0xb872,	// (0x0001a192) list_single_heading_pane_t1

0xb888,	// (0x0001a1a8) list_single_heading_pane_t2_ParamLimits

0xb888,	// (0x0001a1a8) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001deed) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001deed) list_single_heading_pane_t

0xb844,	// (0x0001a164) list_single_number_heading_pane_g1_ParamLimits

0xb844,	// (0x0001a164) list_single_number_heading_pane_g1

0xb850,	// (0x0001a170) list_single_number_heading_pane_g2_ParamLimits

0xb850,	// (0x0001a170) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001dee8) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001dee8) list_single_number_heading_pane_g

0xb872,	// (0x0001a192) list_single_number_heading_pane_t1_ParamLimits

0xb872,	// (0x0001a192) list_single_number_heading_pane_t1

0xb89a,	// (0x0001a1ba) list_single_number_heading_pane_t2_ParamLimits

0xb89a,	// (0x0001a1ba) list_single_number_heading_pane_t2

0xb8ac,	// (0x0001a1cc) list_single_number_heading_pane_t3_ParamLimits

0xb8ac,	// (0x0001a1cc) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001def2) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001def2) list_single_number_heading_pane_t

0xb838,	// (0x0001a158) list_single_graphic_heading_pane_g1_ParamLimits

0xb838,	// (0x0001a158) list_single_graphic_heading_pane_g1

0xb8be,	// (0x0001a1de) list_single_graphic_heading_pane_g4_ParamLimits

0xb8be,	// (0x0001a1de) list_single_graphic_heading_pane_g4

0xb850,	// (0x0001a170) list_single_graphic_heading_pane_g5_ParamLimits

0xb850,	// (0x0001a170) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001def9) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001def9) list_single_graphic_heading_pane_g

0xb872,	// (0x0001a192) list_single_graphic_heading_pane_t1_ParamLimits

0xb872,	// (0x0001a192) list_single_graphic_heading_pane_t1

0xb8cd,	// (0x0001a1ed) list_single_graphic_heading_pane_t2_ParamLimits

0xb8cd,	// (0x0001a1ed) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001df00) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001df00) list_single_graphic_heading_pane_t

0xb8df,	// (0x0001a1ff) list_single_large_graphic_pane_g1_ParamLimits

0xb8df,	// (0x0001a1ff) list_single_large_graphic_pane_g1

0xb8eb,	// (0x0001a20b) list_single_large_graphic_pane_g2_ParamLimits

0xb8eb,	// (0x0001a20b) list_single_large_graphic_pane_g2

0xb8f7,	// (0x0001a217) list_single_large_graphic_pane_g3_ParamLimits

0xb8f7,	// (0x0001a217) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001df05) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001df05) list_single_large_graphic_pane_g

0x4db5,	// (0x000136d5) wait_border_pane_g2_copy1

0xb903,	// (0x0001a223) list_single_large_graphic_pane_g4_cp2

0xb90b,	// (0x0001a22b) list_single_large_graphic_pane_t1_ParamLimits

0xb90b,	// (0x0001a22b) list_single_large_graphic_pane_t1

0xb921,	// (0x0001a241) list_double_pane_g1_ParamLimits

0xb921,	// (0x0001a241) list_double_pane_g1

0xb92d,	// (0x0001a24d) list_double_pane_g2_ParamLimits

0xb92d,	// (0x0001a24d) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001df0c) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001df0c) list_double_pane_g

0xb939,	// (0x0001a259) list_double_pane_t1_ParamLimits

0xb939,	// (0x0001a259) list_double_pane_t1

0xb94f,	// (0x0001a26f) list_double_pane_t2_ParamLimits

0xb94f,	// (0x0001a26f) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001df11) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001df11) list_double_pane_t

0xb961,	// (0x0001a281) list_double2_pane_g1_ParamLimits

0xb961,	// (0x0001a281) list_double2_pane_g1

0xb92d,	// (0x0001a24d) list_double2_pane_g2_ParamLimits

0xb92d,	// (0x0001a24d) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001df16) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001df16) list_double2_pane_g

0xb939,	// (0x0001a259) list_double2_pane_t1_ParamLimits

0xb939,	// (0x0001a259) list_double2_pane_t1

0xb970,	// (0x0001a290) list_double2_pane_t2_ParamLimits

0xb970,	// (0x0001a290) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001df1b) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001df1b) list_double2_pane_t

0xb921,	// (0x0001a241) list_double_number_pane_g1_ParamLimits

0xb921,	// (0x0001a241) list_double_number_pane_g1

0xb92d,	// (0x0001a24d) list_double_number_pane_g2_ParamLimits

0xb92d,	// (0x0001a24d) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001df0c) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001df0c) list_double_number_pane_g

0xb982,	// (0x0001a2a2) list_double_number_pane_t1_ParamLimits

0xb982,	// (0x0001a2a2) list_double_number_pane_t1

0xb994,	// (0x0001a2b4) list_double_number_pane_t2_ParamLimits

0xb994,	// (0x0001a2b4) list_double_number_pane_t2

0xb9aa,	// (0x0001a2ca) list_double_number_pane_t3_ParamLimits

0xb9aa,	// (0x0001a2ca) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001df20) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001df20) list_double_number_pane_t

0xb9bc,	// (0x0001a2dc) list_double_graphic_pane_g1_ParamLimits

0xb9bc,	// (0x0001a2dc) list_double_graphic_pane_g1

0xb9c8,	// (0x0001a2e8) list_double_graphic_pane_g2_ParamLimits

0xb9c8,	// (0x0001a2e8) list_double_graphic_pane_g2

0xb9d7,	// (0x0001a2f7) list_double_graphic_pane_g3_ParamLimits

0xb9d7,	// (0x0001a2f7) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001df27) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001df27) list_double_graphic_pane_g

0xb9ef,	// (0x0001a30f) list_double_graphic_pane_t1_ParamLimits

0xb9ef,	// (0x0001a30f) list_double_graphic_pane_t1

0xba05,	// (0x0001a325) list_double_graphic_pane_t2_ParamLimits

0xba05,	// (0x0001a325) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001df30) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001df30) list_double_graphic_pane_t

0xb9bc,	// (0x0001a2dc) list_double2_graphic_pane_g1_ParamLimits

0xb9bc,	// (0x0001a2dc) list_double2_graphic_pane_g1

0xba17,	// (0x0001a337) list_double2_graphic_pane_g2_ParamLimits

0xba17,	// (0x0001a337) list_double2_graphic_pane_g2

0xba23,	// (0x0001a343) list_double2_graphic_pane_g3_ParamLimits

0xba23,	// (0x0001a343) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001df35) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001df35) list_double2_graphic_pane_g

0xb994,	// (0x0001a2b4) list_double2_graphic_pane_t1_ParamLimits

0xb994,	// (0x0001a2b4) list_double2_graphic_pane_t1

0xba2f,	// (0x0001a34f) list_double2_graphic_pane_t2_ParamLimits

0xba2f,	// (0x0001a34f) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001df3c) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001df3c) list_double2_graphic_pane_t

0xba41,	// (0x0001a361) list_double_large_graphic_pane_g1_ParamLimits

0xba41,	// (0x0001a361) list_double_large_graphic_pane_g1

0xb961,	// (0x0001a281) list_double_large_graphic_pane_g2_ParamLimits

0xb961,	// (0x0001a281) list_double_large_graphic_pane_g2

0xb92d,	// (0x0001a24d) list_double_large_graphic_pane_g3_ParamLimits

0xb92d,	// (0x0001a24d) list_double_large_graphic_pane_g3

0xba6a,	// (0x0001a38a) list_double_large_graphic_pane_g4_ParamLimits

0xba6a,	// (0x0001a38a) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001df41) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001df41) list_double_large_graphic_pane_g

0xba90,	// (0x0001a3b0) list_double_large_graphic_pane_t1_ParamLimits

0xba90,	// (0x0001a3b0) list_double_large_graphic_pane_t1

0xbaa9,	// (0x0001a3c9) list_double_large_graphic_pane_t2_ParamLimits

0xbaa9,	// (0x0001a3c9) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001df4c) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001df4c) list_double_large_graphic_pane_t

0xbabb,	// (0x0001a3db) list_double2_large_graphic_pane_g1_ParamLimits

0xbabb,	// (0x0001a3db) list_double2_large_graphic_pane_g1

0xb961,	// (0x0001a281) list_double2_large_graphic_pane_g2_ParamLimits

0xb961,	// (0x0001a281) list_double2_large_graphic_pane_g2

0xb92d,	// (0x0001a24d) list_double2_large_graphic_pane_g3_ParamLimits

0xb92d,	// (0x0001a24d) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001df51) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001df51) list_double2_large_graphic_pane_g

0xbac7,	// (0x0001a3e7) list_double2_large_graphic_pane_t1_ParamLimits

0xbac7,	// (0x0001a3e7) list_double2_large_graphic_pane_t1

0xbadd,	// (0x0001a3fd) list_double2_large_graphic_pane_t2_ParamLimits

0xbadd,	// (0x0001a3fd) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001df58) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001df58) list_double2_large_graphic_pane_t

0xbaef,	// (0x0001a40f) list_double_heading_pane_g1_ParamLimits

0xbaef,	// (0x0001a40f) list_double_heading_pane_g1

0xbafe,	// (0x0001a41e) list_double_heading_pane_g2_ParamLimits

0xbafe,	// (0x0001a41e) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001df5d) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001df5d) list_double_heading_pane_g

0xbb0a,	// (0x0001a42a) list_double_heading_pane_t1_ParamLimits

0xbb0a,	// (0x0001a42a) list_double_heading_pane_t1

0xbb20,	// (0x0001a440) list_double_heading_pane_t2_ParamLimits

0xbb20,	// (0x0001a440) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001df62) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001df62) list_double_heading_pane_t

0xbb32,	// (0x0001a452) list_double_graphic_heading_pane_g1_ParamLimits

0xbb32,	// (0x0001a452) list_double_graphic_heading_pane_g1

0xbaef,	// (0x0001a40f) list_double_graphic_heading_pane_g2_ParamLimits

0xbaef,	// (0x0001a40f) list_double_graphic_heading_pane_g2

0xbafe,	// (0x0001a41e) list_double_graphic_heading_pane_g3_ParamLimits

0xbafe,	// (0x0001a41e) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001df67) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001df67) list_double_graphic_heading_pane_g

0xbb3e,	// (0x0001a45e) list_double_graphic_heading_pane_t1_ParamLimits

0xbb3e,	// (0x0001a45e) list_double_graphic_heading_pane_t1

0xbb54,	// (0x0001a474) list_double_graphic_heading_pane_t2_ParamLimits

0xbb54,	// (0x0001a474) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001df6e) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001df6e) list_double_graphic_heading_pane_t

0xb961,	// (0x0001a281) list_double_time_pane_g1_ParamLimits

0xb961,	// (0x0001a281) list_double_time_pane_g1

0xb92d,	// (0x0001a24d) list_double_time_pane_g2_ParamLimits

0xb92d,	// (0x0001a24d) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x0001df16) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x0001df16) list_double_time_pane_g

0xbac7,	// (0x0001a3e7) list_double_time_pane_t1_ParamLimits

0xbac7,	// (0x0001a3e7) list_double_time_pane_t1

0xbb66,	// (0x0001a486) list_double_time_pane_t2_ParamLimits

0xbb66,	// (0x0001a486) list_double_time_pane_t2

0xbb78,	// (0x0001a498) list_double_time_pane_t3_ParamLimits

0xbb78,	// (0x0001a498) list_double_time_pane_t3

0xbb8a,	// (0x0001a4aa) list_double_time_pane_t4_ParamLimits

0xbb8a,	// (0x0001a4aa) list_double_time_pane_t4

0x0003,

0xf653,	// (0x0001df73) list_double_time_pane_t_ParamLimits

0xf653,	// (0x0001df73) list_double_time_pane_t

0xbb9c,	// (0x0001a4bc) list_setting_pane_g1_ParamLimits

0xbb9c,	// (0x0001a4bc) list_setting_pane_g1

0xbba8,	// (0x0001a4c8) list_setting_pane_g2_ParamLimits

0xbba8,	// (0x0001a4c8) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0001df7c) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0001df7c) list_setting_pane_g

0xbbb4,	// (0x0001a4d4) list_setting_pane_t1_ParamLimits

0xbbb4,	// (0x0001a4d4) list_setting_pane_t1

0xbbcb,	// (0x0001a4eb) list_setting_pane_t2_ParamLimits

0xbbcb,	// (0x0001a4eb) list_setting_pane_t2

0x0002,

0xf661,	// (0x0001df81) list_setting_pane_t_ParamLimits

0xf661,	// (0x0001df81) list_setting_pane_t

0xbc08,	// (0x0001a528) set_value_pane_cp_ParamLimits

0xbc08,	// (0x0001a528) set_value_pane_cp

0xbc14,	// (0x0001a534) list_setting_number_pane_g1_ParamLimits

0xbc14,	// (0x0001a534) list_setting_number_pane_g1

0xbc20,	// (0x0001a540) list_setting_number_pane_g2_ParamLimits

0xbc20,	// (0x0001a540) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x0001df88) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x0001df88) list_setting_number_pane_g

0xbc2c,	// (0x0001a54c) list_setting_number_pane_t1_ParamLimits

0xbc2c,	// (0x0001a54c) list_setting_number_pane_t1

0xbc3e,	// (0x0001a55e) list_setting_number_pane_t2_ParamLimits

0xbc3e,	// (0x0001a55e) list_setting_number_pane_t2

0xbc55,	// (0x0001a575) list_setting_number_pane_t3_ParamLimits

0xbc55,	// (0x0001a575) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001df8d) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001df8d) list_setting_number_pane_t

0xbc08,	// (0x0001a528) set_value_pane_ParamLimits

0xbc08,	// (0x0001a528) set_value_pane

0x3046,	// (0x00011966) bg_set_opt_pane_ParamLimits

0x3046,	// (0x00011966) bg_set_opt_pane

0xbc96,	// (0x0001a5b6) set_value_pane_t1

0x3075,	// (0x00011995) slider_set_pane_cp3

0x307e,	// (0x0001199e) volume_small_pane_cp

0x3087,	// (0x000119a7) list_form_gen_pane

0x2bda,	// (0x000114fa) scroll_pane_cp8

0xbcac,	// (0x0001a5cc) form_field_data_pane_ParamLimits

0xbcac,	// (0x0001a5cc) form_field_data_pane

0xbccc,	// (0x0001a5ec) form_field_data_wide_pane_ParamLimits

0xbccc,	// (0x0001a5ec) form_field_data_wide_pane

0xbceb,	// (0x0001a60b) form_field_popup_pane_ParamLimits

0xbceb,	// (0x0001a60b) form_field_popup_pane

0xbd03,	// (0x0001a623) form_field_popup_wide_pane_ParamLimits

0xbd03,	// (0x0001a623) form_field_popup_wide_pane

0xbd1a,	// (0x0001a63a) form_field_slider_pane_ParamLimits

0xbd1a,	// (0x0001a63a) form_field_slider_pane

0xbd2d,	// (0x0001a64d) form_field_slider_wide_pane_ParamLimits

0xbd2d,	// (0x0001a64d) form_field_slider_wide_pane

0x3134,	// (0x00011a54) data_form_pane

0x31b9,	// (0x00011ad9) form_field_data_pane_t1

0x3160,	// (0x00011a80) input_focus_pane

0x316e,	// (0x00011a8e) data_form_wide_pane

0xbd54,	// (0x0001a674) form_field_data_wide_pane_t1

0x2a51,	// (0x00011371) input_focus_pane_cp6

0xbd76,	// (0x0001a696) form_field_popup_pane_t1

0x3160,	// (0x00011a80) input_focus_pane_cp7

0x3134,	// (0x00011a54) list_form_pane

0xbd96,	// (0x0001a6b6) form_field_popup_wide_pane_t1

0x3160,	// (0x00011a80) input_focus_pane_cp8

0x31ee,	// (0x00011b0e) list_form_wide_pane

0xbdb3,	// (0x0001a6d3) form_field_slider_pane_t1_ParamLimits

0xbdb3,	// (0x0001a6d3) form_field_slider_pane_t1

0xbdc5,	// (0x0001a6e5) form_field_slider_pane_t2_ParamLimits

0xbdc5,	// (0x0001a6e5) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001df9d) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001df9d) form_field_slider_pane_t

0x26e9,	// (0x00011009) input_focus_pane_cp9_ParamLimits

0x26e9,	// (0x00011009) input_focus_pane_cp9

0xbdd7,	// (0x0001a6f7) slider_cont_pane_ParamLimits

0xbdd7,	// (0x0001a6f7) slider_cont_pane

0x3241,	// (0x00011b61) form_field_slider_wide_pane_t1_ParamLimits

0x3241,	// (0x00011b61) form_field_slider_wide_pane_t1

0xbdeb,	// (0x0001a70b) form_field_slider_wide_pane_t2_ParamLimits

0xbdeb,	// (0x0001a70b) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001dfa2) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001dfa2) form_field_slider_wide_pane_t

0x26e9,	// (0x00011009) input_focus_pane_cp10_ParamLimits

0x26e9,	// (0x00011009) input_focus_pane_cp10

0xbdfd,	// (0x0001a71d) slider_cont_pane_cp1_ParamLimits

0xbdfd,	// (0x0001a71d) slider_cont_pane_cp1

0xbe13,	// (0x0001a733) slider_form_pane_cp

0x3283,	// (0x00011ba3) input_focus_pane_g1

0x328b,	// (0x00011bab) input_focus_pane_g2

0x3293,	// (0x00011bb3) input_focus_pane_g3

0x329b,	// (0x00011bbb) input_focus_pane_g4

0x32a3,	// (0x00011bc3) input_focus_pane_g5

0x32ab,	// (0x00011bcb) input_focus_pane_g6

0x32b3,	// (0x00011bd3) input_focus_pane_g7

0x32bb,	// (0x00011bdb) input_focus_pane_g8

0x32c3,	// (0x00011be3) input_focus_pane_g9

0x2289,	// (0x00010ba9) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001dfa7) input_focus_pane_g

0x4dbe,	// (0x000136de) wait_border_pane_g3_copy1

0xbe1b,	// (0x0001a73b) data_form_pane_t1

0x2289,	// (0x00010ba9) wait_anim_pane_g1_copy1

0xc0a2,	// (0x0001a9c2) data_form_wide_pane_t1

0xbe35,	// (0x0001a755) list_form_graphic_pane_cp_ParamLimits

0xbe35,	// (0x0001a755) list_form_graphic_pane_cp

0x5c28,	// (0x00014548) slider_form_pane_g1

0x5c31,	// (0x00014551) slider_form_pane_g2

0x0006,

0xf983,	// (0x0001e2a3) slider_form_pane_g

0xbe35,	// (0x0001a755) list_form_graphic_pane_ParamLimits

0xbe35,	// (0x0001a755) list_form_graphic_pane

0xbe4b,	// (0x0001a76b) list_form_graphic_pane_g1

0xbe53,	// (0x0001a773) list_form_graphic_pane_t1_ParamLimits

0xbe53,	// (0x0001a773) list_form_graphic_pane_t1

0x2450,	// (0x00010d70) list_highlight_pane_cp5_ParamLimits

0x2450,	// (0x00010d70) list_highlight_pane_cp5

0xbe68,	// (0x0001a788) find_pane_g1

0x3336,	// (0x00011c56) input_find_pane

0xbe71,	// (0x0001a791) input_find_pane_g1_ParamLimits

0xbe71,	// (0x0001a791) input_find_pane_g1

0xbe7d,	// (0x0001a79d) input_find_pane_t1_ParamLimits

0xbe7d,	// (0x0001a79d) input_find_pane_t1

0xbe92,	// (0x0001a7b2) input_find_pane_t2_ParamLimits

0xbe92,	// (0x0001a7b2) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001dfbc) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001dfbc) input_find_pane_t

0x3375,	// (0x00011c95) input_focus_pane_cp5_ParamLimits

0x3375,	// (0x00011c95) input_focus_pane_cp5

0x26e9,	// (0x00011009) bg_popup_window_pane_cp2_ParamLimits

0x26e9,	// (0x00011009) bg_popup_window_pane_cp2

0x338f,	// (0x00011caf) listscroll_menu_pane_ParamLimits

0x338f,	// (0x00011caf) listscroll_menu_pane

0x339b,	// (0x00011cbb) popup_submenu_window_ParamLimits

0x339b,	// (0x00011cbb) popup_submenu_window

0x33bf,	// (0x00011cdf) find_popup_pane_g1

0x33c7,	// (0x00011ce7) input_popup_find_pane_cp

0x3375,	// (0x00011c95) input_focus_pane_cp4_ParamLimits

0x3375,	// (0x00011c95) input_focus_pane_cp4

0x33dd,	// (0x00011cfd) input_popup_find_pane_t1_ParamLimits

0x33dd,	// (0x00011cfd) input_popup_find_pane_t1

0x2370,	// (0x00010c90) bg_popup_sub_pane_cp

0x340b,	// (0x00011d2b) listscroll_popup_sub_pane

0x3413,	// (0x00011d33) list_submenu_pane_ParamLimits

0x3413,	// (0x00011d33) list_submenu_pane

0x3424,	// (0x00011d44) scroll_pane_cp4

0x342c,	// (0x00011d4c) list_single_popup_submenu_pane_ParamLimits

0x342c,	// (0x00011d4c) list_single_popup_submenu_pane

0x343e,	// (0x00011d5e) list_single_popup_submenu_pane_g1

0x3446,	// (0x00011d66) list_single_popup_submenu_pane_t1_ParamLimits

0x3446,	// (0x00011d66) list_single_popup_submenu_pane_t1

0x2450,	// (0x00010d70) bg_active_tab_pane_cp1_ParamLimits

0x2450,	// (0x00010d70) bg_active_tab_pane_cp1

0x345b,	// (0x00011d7b) tabs_2_active_pane_g1

0x3463,	// (0x00011d83) tabs_2_active_pane_t1

0x2450,	// (0x00010d70) bg_passive_tab_pane_cp1_ParamLimits

0x2450,	// (0x00010d70) bg_passive_tab_pane_cp1

0x345b,	// (0x00011d7b) tabs_2_passive_pane_g1

0x3463,	// (0x00011d83) tabs_2_passive_pane_t1

0x3475,	// (0x00011d95) bg_active_tab_pane_cp4

0x3483,	// (0x00011da3) tabs_2_long_active_pane_t1

0x3496,	// (0x00011db6) bg_passive_tab_pane_cp4

0x4a40,	// (0x00013360) list_single_midp_graphic_pane_g4_ParamLimits

0x3475,	// (0x00011d95) bg_active_tab_pane_cp5

0x34a2,	// (0x00011dc2) tabs_3_long_active_pane_t1

0x3496,	// (0x00011db6) bg_passive_tab_pane_cp5

0x4a40,	// (0x00013360) list_single_midp_graphic_pane_g4

0x2450,	// (0x00010d70) bg_popup_window_pane_cp13_ParamLimits

0x2450,	// (0x00010d70) bg_popup_window_pane_cp13

0x34bd,	// (0x00011ddd) listscroll_popup_fast_pane_ParamLimits

0x34bd,	// (0x00011ddd) listscroll_popup_fast_pane

0x34cc,	// (0x00011dec) grid_popup_fast_pane_ParamLimits

0x34cc,	// (0x00011dec) grid_popup_fast_pane

0x34de,	// (0x00011dfe) scroll_pane_cp9_ParamLimits

0x34de,	// (0x00011dfe) scroll_pane_cp9

0x7853,	// (0x00016173) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7853,	// (0x00016173) list_single_graphic_hl_pane_t1_cp2

0x3502,	// (0x00011e22) input_focus_pane_cp20_ParamLimits

0x3502,	// (0x00011e22) input_focus_pane_cp20

0x3510,	// (0x00011e30) query_popup_data_pane_t1_ParamLimits

0x3510,	// (0x00011e30) query_popup_data_pane_t1

0x3523,	// (0x00011e43) query_popup_data_pane_t2_ParamLimits

0x3523,	// (0x00011e43) query_popup_data_pane_t2

0x3569,	// (0x00011e89) query_popup_data_pane_t3_ParamLimits

0x3569,	// (0x00011e89) query_popup_data_pane_t3

0x35aa,	// (0x00011eca) query_popup_data_pane_t4_ParamLimits

0x35aa,	// (0x00011eca) query_popup_data_pane_t4

0x35e6,	// (0x00011f06) query_popup_data_pane_t5_ParamLimits

0x35e6,	// (0x00011f06) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001dfc1) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001dfc1) query_popup_data_pane_t

0x3283,	// (0x00011ba3) bg_set_opt_pane_g1

0x328b,	// (0x00011bab) bg_set_opt_pane_g2

0x3293,	// (0x00011bb3) bg_set_opt_pane_g3

0x329b,	// (0x00011bbb) bg_set_opt_pane_g4

0x32a3,	// (0x00011bc3) bg_set_opt_pane_g5

0x32ab,	// (0x00011bcb) bg_set_opt_pane_g6

0x32b3,	// (0x00011bd3) bg_set_opt_pane_g7

0x32bb,	// (0x00011bdb) bg_set_opt_pane_g8

0x32c3,	// (0x00011be3) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001dfcc) bg_set_opt_pane_g

0xcd31,	// (0x0001b651) control_top_pane_stacon_ParamLimits

0xcd31,	// (0x0001b651) control_top_pane_stacon

0xcd84,	// (0x0001b6a4) signal_pane_stacon_ParamLimits

0xcd84,	// (0x0001b6a4) signal_pane_stacon

0x3c2a,	// (0x0001254a) stacon_top_pane_g1_ParamLimits

0x3c2a,	// (0x0001254a) stacon_top_pane_g1

0xcda9,	// (0x0001b6c9) title_pane_stacon_ParamLimits

0xcda9,	// (0x0001b6c9) title_pane_stacon

0xcdcb,	// (0x0001b6eb) uni_indicator_pane_stacon_ParamLimits

0xcdcb,	// (0x0001b6eb) uni_indicator_pane_stacon

0xcde0,	// (0x0001b700) battery_pane_stacon_ParamLimits

0xcde0,	// (0x0001b700) battery_pane_stacon

0xce20,	// (0x0001b740) control_bottom_pane_stacon_ParamLimits

0xce20,	// (0x0001b740) control_bottom_pane_stacon

0xce3f,	// (0x0001b75f) navi_pane_stacon_ParamLimits

0xce3f,	// (0x0001b75f) navi_pane_stacon

0x3c4c,	// (0x0001256c) stacon_bottom_pane_g1_ParamLimits

0x3c4c,	// (0x0001256c) stacon_bottom_pane_g1

0x361d,	// (0x00011f3d) aid_levels_signal_lsc_ParamLimits

0x361d,	// (0x00011f3d) aid_levels_signal_lsc

0xcafd,	// (0x0001b41d) signal_pane_stacon_g1_ParamLimits

0xcafd,	// (0x0001b41d) signal_pane_stacon_g1

0xcb09,	// (0x0001b429) signal_pane_stacon_g2_ParamLimits

0xcb09,	// (0x0001b429) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001dfdf) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001dfdf) signal_pane_stacon_g

0xcb3d,	// (0x0001b45d) title_pane_stacon_t1_ParamLimits

0xcb3d,	// (0x0001b45d) title_pane_stacon_t1

0x364b,	// (0x00011f6b) uni_indicator_pane_stacon_g1

0x3655,	// (0x00011f75) uni_indicator_pane_stacon_g2

0x3637,	// (0x00011f57) uni_indicator_pane_stacon_g3

0x3641,	// (0x00011f61) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001dfeb) uni_indicator_pane_stacon_g

0xcb62,	// (0x0001b482) control_top_pane_stacon_g1

0xcb6a,	// (0x0001b48a) control_top_pane_stacon_t1_ParamLimits

0xcb6a,	// (0x0001b48a) control_top_pane_stacon_t1

0x365f,	// (0x00011f7f) aid_levels_battery_lsc_ParamLimits

0x365f,	// (0x00011f7f) aid_levels_battery_lsc

0xcb9b,	// (0x0001b4bb) battery_pane_stacon_g1_ParamLimits

0xcb9b,	// (0x0001b4bb) battery_pane_stacon_g1

0xcba7,	// (0x0001b4c7) battery_pane_stacon_g2_ParamLimits

0xcba7,	// (0x0001b4c7) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001dff4) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001dff4) battery_pane_stacon_g

0xcbd6,	// (0x0001b4f6) navi_icon_pane_stacon

0xcbe6,	// (0x0001b506) navi_navi_pane_stacon

0xcbd6,	// (0x0001b4f6) navi_text_pane_stacon

0xcb62,	// (0x0001b482) control_bottom_pane_stacon_g1

0xcbf6,	// (0x0001b516) control_bottom_pane_stacon_t1_ParamLimits

0xcbf6,	// (0x0001b516) control_bottom_pane_stacon_t1

0x3687,	// (0x00011fa7) grid_app_pane_ParamLimits

0x3687,	// (0x00011fa7) grid_app_pane

0x36a3,	// (0x00011fc3) scroll_pane_cp15_ParamLimits

0x36a3,	// (0x00011fc3) scroll_pane_cp15

0x36b4,	// (0x00011fd4) cell_app_pane_ParamLimits

0x36b4,	// (0x00011fd4) cell_app_pane

0x36d8,	// (0x00011ff8) cell_app_pane_g1_ParamLimits

0x36d8,	// (0x00011ff8) cell_app_pane_g1

0x36fc,	// (0x0001201c) cell_app_pane_g2_ParamLimits

0x36fc,	// (0x0001201c) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001dff9) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001dff9) cell_app_pane_g

0x3708,	// (0x00012028) cell_app_pane_t1_ParamLimits

0x3708,	// (0x00012028) cell_app_pane_t1

0x371f,	// (0x0001203f) grid_highlight_pane_ParamLimits

0x371f,	// (0x0001203f) grid_highlight_pane

0x3283,	// (0x00011ba3) cell_highlight_pane_g1

0x328b,	// (0x00011bab) cell_highlight_pane_g2

0x3293,	// (0x00011bb3) cell_highlight_pane_g3

0x329b,	// (0x00011bbb) cell_highlight_pane_g4

0x32a3,	// (0x00011bc3) cell_highlight_pane_g5

0x32ab,	// (0x00011bcb) cell_highlight_pane_g6

0x32b3,	// (0x00011bd3) cell_highlight_pane_g7

0x32bb,	// (0x00011bdb) cell_highlight_pane_g8

0x32c3,	// (0x00011be3) cell_highlight_pane_g9

0x2289,	// (0x00010ba9) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001dfa7) cell_highlight_pane_g

0x3730,	// (0x00012050) bg_scroll_pane

0xcc3a,	// (0x0001b55a) scroll_handle_pane

0x3777,	// (0x00012097) scroll_bg_pane_g1

0x378c,	// (0x000120ac) scroll_bg_pane_g2

0x37a4,	// (0x000120c4) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001dffe) scroll_bg_pane_g

0x37b9,	// (0x000120d9) scroll_handle_focus_pane_ParamLimits

0x37b9,	// (0x000120d9) scroll_handle_focus_pane

0x3777,	// (0x00012097) scroll_handle_pane_g1

0x37c6,	// (0x000120e6) scroll_handle_pane_g2

0x37a4,	// (0x000120c4) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001e005) scroll_handle_pane_g

0x3375,	// (0x00011c95) bg_popup_sub_pane_cp21_ParamLimits

0x3375,	// (0x00011c95) bg_popup_sub_pane_cp21

0x37da,	// (0x000120fa) popup_fep_japan_predictive_window_t1_ParamLimits

0x37da,	// (0x000120fa) popup_fep_japan_predictive_window_t1

0x37f1,	// (0x00012111) popup_fep_japan_predictive_window_t2_ParamLimits

0x37f1,	// (0x00012111) popup_fep_japan_predictive_window_t2

0x3824,	// (0x00012144) popup_fep_japan_predictive_window_t3_ParamLimits

0x3824,	// (0x00012144) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001e00c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001e00c) popup_fep_japan_predictive_window_t

0x2370,	// (0x00010c90) bg_popup_sub_pane_cp23

0x385b,	// (0x0001217b) listscroll_japin_cand_pane

0x3863,	// (0x00012183) popup_fep_japan_candidate_window_t1

0x3871,	// (0x00012191) candidate_pane_ParamLimits

0x3871,	// (0x00012191) candidate_pane

0x3884,	// (0x000121a4) scroll_pane_cp30

0x388c,	// (0x000121ac) list_single_popup_jap_candidate_pane_ParamLimits

0x388c,	// (0x000121ac) list_single_popup_jap_candidate_pane

0x2370,	// (0x00010c90) list_highlight_pane_cp30

0x38a1,	// (0x000121c1) list_single_popup_jap_candidate_pane_t1

0x38b0,	// (0x000121d0) level_1_signal

0x38bd,	// (0x000121dd) level_2_signal

0x38ca,	// (0x000121ea) level_3_signal

0x38d7,	// (0x000121f7) level_4_signal

0x38e4,	// (0x00012204) level_5_signal

0x38f1,	// (0x00012211) level_6_signal

0x38fe,	// (0x0001221e) level_7_signal

0x38b0,	// (0x000121d0) level_1_battery

0x38bd,	// (0x000121dd) level_2_battery

0x38ca,	// (0x000121ea) level_3_battery

0x38d7,	// (0x000121f7) level_4_battery

0x38e4,	// (0x00012204) level_5_battery

0x38f1,	// (0x00012211) level_6_battery

0x38fe,	// (0x0001221e) level_7_battery

0x3923,	// (0x00012243) list_menu_pane_ParamLimits

0x3923,	// (0x00012243) list_menu_pane

0x3939,	// (0x00012259) scroll_pane_cp25_ParamLimits

0x3939,	// (0x00012259) scroll_pane_cp25

0x3952,	// (0x00012272) list_double2_graphic_pane_cp2_ParamLimits

0x3952,	// (0x00012272) list_double2_graphic_pane_cp2

0x3952,	// (0x00012272) list_double2_large_graphic_pane_cp2_ParamLimits

0x3952,	// (0x00012272) list_double2_large_graphic_pane_cp2

0x3952,	// (0x00012272) list_double2_pane_cp2_ParamLimits

0x3952,	// (0x00012272) list_double2_pane_cp2

0x3952,	// (0x00012272) list_double_graphic_pane_cp2_ParamLimits

0x3952,	// (0x00012272) list_double_graphic_pane_cp2

0x3952,	// (0x00012272) list_double_large_graphic_pane_cp2_ParamLimits

0x3952,	// (0x00012272) list_double_large_graphic_pane_cp2

0x3952,	// (0x00012272) list_double_number_pane_cp2_ParamLimits

0x3952,	// (0x00012272) list_double_number_pane_cp2

0x3952,	// (0x00012272) list_double_pane_cp2_ParamLimits

0x3952,	// (0x00012272) list_double_pane_cp2

0x3962,	// (0x00012282) list_single_2graphic_pane_cp2_ParamLimits

0x3962,	// (0x00012282) list_single_2graphic_pane_cp2

0x3962,	// (0x00012282) list_single_graphic_heading_pane_cp2_ParamLimits

0x3962,	// (0x00012282) list_single_graphic_heading_pane_cp2

0x3962,	// (0x00012282) list_single_graphic_pane_cp2_ParamLimits

0x3962,	// (0x00012282) list_single_graphic_pane_cp2

0x3962,	// (0x00012282) list_single_heading_pane_cp2_ParamLimits

0x3962,	// (0x00012282) list_single_heading_pane_cp2

0x3977,	// (0x00012297) list_single_large_graphic_pane_cp2_ParamLimits

0x3977,	// (0x00012297) list_single_large_graphic_pane_cp2

0x3962,	// (0x00012282) list_single_number_heading_pane_cp2_ParamLimits

0x3962,	// (0x00012282) list_single_number_heading_pane_cp2

0x3962,	// (0x00012282) list_single_number_pane_cp2_ParamLimits

0x3962,	// (0x00012282) list_single_number_pane_cp2

0x3962,	// (0x00012282) list_single_pane_cp2_ParamLimits

0x3962,	// (0x00012282) list_single_pane_cp2

0x39f3,	// (0x00012313) bg_popup_sub_pane_cp22

0xcce9,	// (0x0001b609) popup_side_volume_key_window_g1

0xcd0d,	// (0x0001b62d) popup_side_volume_key_window_t1

0xcd29,	// (0x0001b649) volume_small_pane_cp1

0x26e9,	// (0x00011009) bg_popup_sub_pane_cp24_ParamLimits

0x26e9,	// (0x00011009) bg_popup_sub_pane_cp24

0x3a09,	// (0x00012329) fep_china_uni_candidate_pane_ParamLimits

0x3a09,	// (0x00012329) fep_china_uni_candidate_pane

0x3a1d,	// (0x0001233d) fep_china_uni_entry_pane

0x3a2d,	// (0x0001234d) popup_fep_china_uni_window_g1

0x3a49,	// (0x00012369) fep_china_uni_entry_pane_g1

0x3a51,	// (0x00012371) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001e03d) fep_china_uni_entry_pane_g

0x3a59,	// (0x00012379) fep_entry_item_pane

0x3a63,	// (0x00012383) fep_candidate_item_pane

0x3a6b,	// (0x0001238b) fep_china_uni_candidate_pane_g1

0x3a73,	// (0x00012393) fep_china_uni_candidate_pane_g2

0x3a7b,	// (0x0001239b) fep_china_uni_candidate_pane_g3

0x3a83,	// (0x000123a3) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001e042) fep_china_uni_candidate_pane_g

0x2289,	// (0x00010ba9) fep_entry_item_pane_g1

0x3a8b,	// (0x000123ab) fep_entry_item_pane_t1_ParamLimits

0x3a8b,	// (0x000123ab) fep_entry_item_pane_t1

0x3aa1,	// (0x000123c1) fep_candidate_item_pane_t1_ParamLimits

0x3aa1,	// (0x000123c1) fep_candidate_item_pane_t1

0x3ab6,	// (0x000123d6) fep_candidate_item_pane_t2_ParamLimits

0x3ab6,	// (0x000123d6) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001e04b) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001e04b) fep_candidate_item_pane_t

0x2450,	// (0x00010d70) list_highlight_pane_cp31_ParamLimits

0x2450,	// (0x00010d70) list_highlight_pane_cp31

0x3ac8,	// (0x000123e8) level_1_signal_lsc

0x3ad1,	// (0x000123f1) level_2_signal_lsc

0x3ada,	// (0x000123fa) level_3_signal_lsc

0x3ae3,	// (0x00012403) level_4_signal_lsc

0x3aec,	// (0x0001240c) level_5_signal_lsc

0x3af5,	// (0x00012415) level_6_signal_lsc

0x3afe,	// (0x0001241e) level_7_signal_lsc

0x3afe,	// (0x0001241e) level_1_battery_lsc

0x3b07,	// (0x00012427) level_2_battery_lsc

0x3b10,	// (0x00012430) level_3_battery_lsc

0x3b19,	// (0x00012439) level_4_battery_lsc

0x3b22,	// (0x00012442) level_5_battery_lsc

0x3b2b,	// (0x0001244b) level_6_battery_lsc

0x3ac8,	// (0x000123e8) level_7_battery_lsc

0x3b34,	// (0x00012454) scroll_handle_focus_pane_g1

0x3b3d,	// (0x0001245d) scroll_handle_focus_pane_g2

0x3b46,	// (0x00012466) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001e050) scroll_handle_focus_pane_g

0xbea7,	// (0x0001a7c7) list_single_2graphic_pane_g1_ParamLimits

0xbea7,	// (0x0001a7c7) list_single_2graphic_pane_g1

0xb8be,	// (0x0001a1de) list_single_2graphic_pane_g2_ParamLimits

0xb8be,	// (0x0001a1de) list_single_2graphic_pane_g2

0xb850,	// (0x0001a170) list_single_2graphic_pane_g3_ParamLimits

0xb850,	// (0x0001a170) list_single_2graphic_pane_g3

0xbeb3,	// (0x0001a7d3) list_single_2graphic_pane_g4_ParamLimits

0xbeb3,	// (0x0001a7d3) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001e057) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001e057) list_single_2graphic_pane_g

0xbec4,	// (0x0001a7e4) list_single_2graphic_pane_t1_ParamLimits

0xbec4,	// (0x0001a7e4) list_single_2graphic_pane_t1

0xbef2,	// (0x0001a812) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbef2,	// (0x0001a812) list_double2_graphic_large_graphic_pane_g1

0xb961,	// (0x0001a281) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb961,	// (0x0001a281) list_double2_graphic_large_graphic_pane_g2

0xb92d,	// (0x0001a24d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb92d,	// (0x0001a24d) list_double2_graphic_large_graphic_pane_g3

0xbf02,	// (0x0001a822) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbf02,	// (0x0001a822) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001e060) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001e060) list_double2_graphic_large_graphic_pane_g

0xbf0e,	// (0x0001a82e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbf0e,	// (0x0001a82e) list_double2_graphic_large_graphic_pane_t1

0xbf24,	// (0x0001a844) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbf24,	// (0x0001a844) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001e069) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001e069) list_double2_graphic_large_graphic_pane_t

0x3cf3,	// (0x00012613) popup_fast_swap_window_ParamLimits

0x3cf3,	// (0x00012613) popup_fast_swap_window

0x3d0f,	// (0x0001262f) popup_side_volume_key_window

0x3d29,	// (0x00012649) stacon_top_pane

0x3d33,	// (0x00012653) status_pane_ParamLimits

0x3d33,	// (0x00012653) status_pane

0x3d41,	// (0x00012661) status_small_pane

0x2370,	// (0x00010c90) control_pane

0x2370,	// (0x00010c90) stacon_bottom_pane

0x2bda,	// (0x000114fa) scroll_pane_cp121

0x3087,	// (0x000119a7) set_content_pane

0x3beb,	// (0x0001250b) bg_active_tab_pane_g1_cp1

0x3be2,	// (0x00012502) bg_active_tab_pane_g2_cp1

0x3bd9,	// (0x000124f9) bg_active_tab_pane_g3_cp1

0x3beb,	// (0x0001250b) bg_passive_tab_pane_g1_cp1

0x3be2,	// (0x00012502) bg_passive_tab_pane_g2_cp1

0x3bd9,	// (0x000124f9) bg_passive_tab_pane_g3_cp1

0x3bfd,	// (0x0001251d) bg_active_tab_pane_g1_cp2

0x3be2,	// (0x00012502) bg_active_tab_pane_g2_cp2

0x3bf4,	// (0x00012514) bg_active_tab_pane_g3_cp2

0x3bfd,	// (0x0001251d) bg_passive_tab_pane_g1_cp2

0x3be2,	// (0x00012502) bg_passive_tab_pane_g2_cp2

0x3bf4,	// (0x00012514) bg_passive_tab_pane_g3_cp2

0x3c0f,	// (0x0001252f) bg_active_tab_pane_g1_cp3

0x3be2,	// (0x00012502) bg_active_tab_pane_g2_cp3

0x3c06,	// (0x00012526) bg_active_tab_pane_g3_cp3

0x3c0f,	// (0x0001252f) bg_passive_tab_pane_g1_cp3

0x3be2,	// (0x00012502) bg_passive_tab_pane_g2_cp3

0x3c06,	// (0x00012526) bg_passive_tab_pane_g3_cp3

0x3c21,	// (0x00012541) bg_active_tab_pane_g1_cp4

0x3be2,	// (0x00012502) bg_active_tab_pane_g2_cp4

0x3c18,	// (0x00012538) bg_active_tab_pane_g3_cp4

0x3c21,	// (0x00012541) bg_passive_tab_pane_g1_cp4

0x3be2,	// (0x00012502) bg_passive_tab_pane_g2_cp4

0x3c18,	// (0x00012538) bg_passive_tab_pane_g3_cp4

0x3c71,	// (0x00012591) bg_active_tab_pane_g1_cp5

0x3be2,	// (0x00012502) bg_active_tab_pane_g2_cp5

0x3c68,	// (0x00012588) bg_active_tab_pane_g3_cp5

0x3c71,	// (0x00012591) bg_passive_tab_pane_g1_cp5

0x3be2,	// (0x00012502) bg_passive_tab_pane_g2_cp5

0x3c68,	// (0x00012588) bg_passive_tab_pane_g3_cp5

0x32fa,	// (0x00011c1a) list_set_graphic_pane_ParamLimits

0x32fa,	// (0x00011c1a) list_set_graphic_pane

0x2370,	// (0x00010c90) bg_set_opt_pane_cp4

0x3c7a,	// (0x0001259a) list_set_graphic_pane_g1_ParamLimits

0x3c7a,	// (0x0001259a) list_set_graphic_pane_g1

0x3c86,	// (0x000125a6) list_set_graphic_pane_g2_ParamLimits

0x3c86,	// (0x000125a6) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001e06e) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001e06e) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0001e3f3) volume_small_pane_cp_g

0x3ca8,	// (0x000125c8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3ca8,	// (0x000125c8) list_double2_large_graphic_pane_g1_cp2

0x3cb4,	// (0x000125d4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3cb4,	// (0x000125d4) list_double2_large_graphic_pane_g2_cp2

0x3cc3,	// (0x000125e3) list_double2_large_graphic_pane_g3_cp2

0x3ccb,	// (0x000125eb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3ccb,	// (0x000125eb) list_double2_large_graphic_pane_t1_cp2

0x3ce1,	// (0x00012601) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3ce1,	// (0x00012601) list_double2_large_graphic_pane_t2_cp2

0x5824,	// (0x00014144) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5824,	// (0x00014144) list_double_large_graphic_pane_g1_cp2

0x5835,	// (0x00014155) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5835,	// (0x00014155) list_double_large_graphic_pane_g2_cp2

0x3e17,	// (0x00012737) list_double_large_graphic_pane_g3_cp2

0x5844,	// (0x00014164) list_double_large_graphic_pane_g4_cp

0x584c,	// (0x0001416c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x584c,	// (0x0001416c) list_double_large_graphic_pane_t1_cp2

0x5863,	// (0x00014183) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5863,	// (0x00014183) list_double_large_graphic_pane_t2_cp2

0x3d4a,	// (0x0001266a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3d4a,	// (0x0001266a) list_double2_graphic_pane_g1_cp2

0x3d56,	// (0x00012676) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3d56,	// (0x00012676) list_double2_graphic_pane_g2_cp2

0x3d65,	// (0x00012685) list_double2_graphic_pane_g3_cp2

0x3d6d,	// (0x0001268d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3d6d,	// (0x0001268d) list_double2_graphic_pane_t1_cp2

0x3d83,	// (0x000126a3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3d83,	// (0x000126a3) list_double2_graphic_pane_t2_cp2

0x3d95,	// (0x000126b5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3d95,	// (0x000126b5) list_single_number_heading_pane_g1_cp2

0x3da1,	// (0x000126c1) list_single_number_heading_pane_g2_cp2

0x3da9,	// (0x000126c9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3da9,	// (0x000126c9) list_single_number_heading_pane_t1_cp2

0x3dbf,	// (0x000126df) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3dbf,	// (0x000126df) list_single_number_heading_pane_t2_cp2

0x3dd1,	// (0x000126f1) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3dd1,	// (0x000126f1) list_single_number_heading_pane_t3_cp2

0x3d95,	// (0x000126b5) list_single_heading_pane_g1_cp2_ParamLimits

0x3d95,	// (0x000126b5) list_single_heading_pane_g1_cp2

0x3da1,	// (0x000126c1) list_single_heading_pane_g2_cp2

0x3da9,	// (0x000126c9) list_single_heading_pane_t1_cp2_ParamLimits

0x3da9,	// (0x000126c9) list_single_heading_pane_t1_cp2

0x562e,	// (0x00013f4e) list_single_heading_pane_t2_cp2_ParamLimits

0x562e,	// (0x00013f4e) list_single_heading_pane_t2_cp2

0x557e,	// (0x00013e9e) list_double_graphic_pane_g1_cp2_ParamLimits

0x557e,	// (0x00013e9e) list_double_graphic_pane_g1_cp2

0x558a,	// (0x00013eaa) list_double_graphic_pane_g2_cp2_ParamLimits

0x558a,	// (0x00013eaa) list_double_graphic_pane_g2_cp2

0x5599,	// (0x00013eb9) list_double_graphic_pane_g3_cp2

0x55a1,	// (0x00013ec1) list_double_graphic_pane_t1_cp2_ParamLimits

0x55a1,	// (0x00013ec1) list_double_graphic_pane_t1_cp2

0x55b7,	// (0x00013ed7) list_double_graphic_pane_t2_cp2_ParamLimits

0x55b7,	// (0x00013ed7) list_double_graphic_pane_t2_cp2

0x3e0b,	// (0x0001272b) list_double_number_pane_g1_cp2_ParamLimits

0x3e0b,	// (0x0001272b) list_double_number_pane_g1_cp2

0x3e17,	// (0x00012737) list_double_number_pane_g2_cp2

0x5544,	// (0x00013e64) list_double_number_pane_t1_cp2_ParamLimits

0x5544,	// (0x00013e64) list_double_number_pane_t1_cp2

0x5556,	// (0x00013e76) list_double_number_pane_t2_cp2_ParamLimits

0x5556,	// (0x00013e76) list_double_number_pane_t2_cp2

0x556c,	// (0x00013e8c) list_double_number_pane_t3_cp2_ParamLimits

0x556c,	// (0x00013e8c) list_double_number_pane_t3_cp2

0x542e,	// (0x00013d4e) list_single_graphic_pane_g1_cp2_ParamLimits

0x542e,	// (0x00013d4e) list_single_graphic_pane_g1_cp2

0x3d95,	// (0x000126b5) list_single_graphic_pane_g2_cp2_ParamLimits

0x3d95,	// (0x000126b5) list_single_graphic_pane_g2_cp2

0x3da1,	// (0x000126c1) list_single_graphic_pane_g3_cp2

0x5406,	// (0x00013d26) list_single_graphic_pane_t1_cp2_ParamLimits

0x5406,	// (0x00013d26) list_single_graphic_pane_t1_cp2

0x3d95,	// (0x000126b5) list_single_number_pane_g1_cp2_ParamLimits

0x3d95,	// (0x000126b5) list_single_number_pane_g1_cp2

0x3da1,	// (0x000126c1) list_single_number_pane_g2_cp2

0x5406,	// (0x00013d26) list_single_number_pane_t1_cp2_ParamLimits

0x5406,	// (0x00013d26) list_single_number_pane_t1_cp2

0x541c,	// (0x00013d3c) list_single_number_pane_t2_cp2_ParamLimits

0x541c,	// (0x00013d3c) list_single_number_pane_t2_cp2

0x3cb4,	// (0x000125d4) list_double2_pane_g1_cp2_ParamLimits

0x3cb4,	// (0x000125d4) list_double2_pane_g1_cp2

0x3cc3,	// (0x000125e3) list_double2_pane_g2_cp2

0x3de3,	// (0x00012703) list_double2_pane_t1_cp2_ParamLimits

0x3de3,	// (0x00012703) list_double2_pane_t1_cp2

0x3df9,	// (0x00012719) list_double2_pane_t2_cp2_ParamLimits

0x3df9,	// (0x00012719) list_double2_pane_t2_cp2

0x3e0b,	// (0x0001272b) list_double_pane_g1_cp2_ParamLimits

0x3e0b,	// (0x0001272b) list_double_pane_g1_cp2

0x3e17,	// (0x00012737) list_double_pane_g2_cp2

0x3e1f,	// (0x0001273f) list_double_pane_t1_cp2_ParamLimits

0x3e1f,	// (0x0001273f) list_double_pane_t1_cp2

0x3e35,	// (0x00012755) list_double_pane_t2_cp2_ParamLimits

0x3e35,	// (0x00012755) list_double_pane_t2_cp2

0x3e5d,	// (0x0001277d) list_single_pane_cp2_g3

0x3d95,	// (0x000126b5) list_single_pane_g1_cp2_ParamLimits

0x3d95,	// (0x000126b5) list_single_pane_g1_cp2

0x3da1,	// (0x000126c1) list_single_pane_g2_cp2

0x3e6d,	// (0x0001278d) list_single_pane_t1_cp2_ParamLimits

0x3e6d,	// (0x0001278d) list_single_pane_t1_cp2

0x3e85,	// (0x000127a5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3e85,	// (0x000127a5) list_single_large_graphic_pane_g1_cp2

0x3e91,	// (0x000127b1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3e91,	// (0x000127b1) list_single_large_graphic_pane_g2_cp2

0x3e9d,	// (0x000127bd) list_single_large_graphic_pane_g3_cp2

0x3ea5,	// (0x000127c5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3ea5,	// (0x000127c5) list_single_large_graphic_pane_g4_cp1

0x3ebf,	// (0x000127df) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3ebf,	// (0x000127df) list_single_large_graphic_pane_t1_cp2

0x53e8,	// (0x00013d08) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x53e8,	// (0x00013d08) list_single_graphic_heading_pane_g1_cp2

0x53c3,	// (0x00013ce3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x53c3,	// (0x00013ce3) list_single_graphic_heading_pane_g4_cp2

0x3da1,	// (0x000126c1) list_single_graphic_heading_pane_g5_cp2

0x3da9,	// (0x000126c9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3da9,	// (0x000126c9) list_single_graphic_heading_pane_t1_cp2

0x53f4,	// (0x00013d14) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x53f4,	// (0x00013d14) list_single_graphic_heading_pane_t2_cp2

0x53b7,	// (0x00013cd7) list_single_2graphic_pane_g1_cp2_ParamLimits

0x53b7,	// (0x00013cd7) list_single_2graphic_pane_g1_cp2

0x53c3,	// (0x00013ce3) list_single_2graphic_pane_g2_cp2_ParamLimits

0x53c3,	// (0x00013ce3) list_single_2graphic_pane_g2_cp2

0x3da1,	// (0x000126c1) list_single_2graphic_pane_g3_cp2

0x4a40,	// (0x00013360) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4a40,	// (0x00013360) list_single_2graphic_pane_g4_cp2

0x53d2,	// (0x00013cf2) list_single_2graphic_pane_t1_cp2_ParamLimits

0x53d2,	// (0x00013cf2) list_single_2graphic_pane_t1_cp2

0x2289,	// (0x00010ba9) list_highlight_pane_g10_cp1

0x4fb1,	// (0x000138d1) list_highlight_pane_g1_cp1

0x4fb9,	// (0x000138d9) list_highlight_pane_g2_cp1

0x4fc1,	// (0x000138e1) list_highlight_pane_g3_cp1

0x4fc9,	// (0x000138e9) list_highlight_pane_g4_cp1

0x4fd1,	// (0x000138f1) list_highlight_pane_g5_cp1

0x4fd9,	// (0x000138f9) list_highlight_pane_g6_cp1

0x4fe1,	// (0x00013901) list_highlight_pane_g7_cp1

0x4fe9,	// (0x00013909) list_highlight_pane_g8_cp1

0x4ff1,	// (0x00013911) list_highlight_pane_g9_cp1

0x4edf,	// (0x000137ff) form_field_slider_pane_t3

0x4eed,	// (0x0001380d) form_field_slider_pane_t4

0x4efb,	// (0x0001381b) slider_form_pane_ParamLimits

0x4efb,	// (0x0001381b) slider_form_pane

0x2370,	// (0x00010c90) control_abbreviations

0x2370,	// (0x00010c90) control_conventions

0x2370,	// (0x00010c90) control_definitions

0x2370,	// (0x00010c90) format_table_attribute

0x5678,	// (0x00013f98) bg_popup_preview_window_pane_g9

0x2370,	// (0x00010c90) format_table_data2

0x2370,	// (0x00010c90) format_table_data3

0x2370,	// (0x00010c90) format_table_data_example

0x0008,

0x2370,	// (0x00010c90) intro_purpose

0xf8e3,	// (0x0001e203) bg_popup_preview_window_pane_g

0x2370,	// (0x00010c90) texts_category

0x2370,	// (0x00010c90) texts_graphics

0x3ed5,	// (0x000127f5) text_digital

0x3ee4,	// (0x00012804) text_primary

0x3ef3,	// (0x00012813) text_primary_small

0x3f02,	// (0x00012822) text_secondary

0x3f11,	// (0x00012831) text_title

0x5dea,	// (0x0001470a) bg_passive_tab_pane_g1_cp3_srt

0x3be2,	// (0x00012502) bg_passive_tab_pane_g2_cp3_srt

0x5de1,	// (0x00014701) bg_passive_tab_pane_g3_cp3_srt

0x2450,	// (0x00010d70) bg_active_tab_pane_cp3_srt_ParamLimits

0x2450,	// (0x00010d70) bg_active_tab_pane_cp3_srt

0x5df3,	// (0x00014713) tabs_4_active_pane_srt_g1

0x2480,	// (0x00010da0) tabs_4_active_pane_srt_t1_ParamLimits

0x2480,	// (0x00010da0) tabs_4_active_pane_srt_t1

0x5dea,	// (0x0001470a) bg_active_tab_pane_g1_cp3_copy1

0x3be2,	// (0x00012502) bg_active_tab_pane_g2_cp3_copy1

0x5de1,	// (0x00014701) bg_active_tab_pane_g3_cp3_copy1

0x2450,	// (0x00010d70) tabs_2_long_active_pane_srt_ParamLimits

0x2450,	// (0x00010d70) tabs_2_long_active_pane_srt

0x2450,	// (0x00010d70) tabs_2_long_passive_pane_srt_ParamLimits

0x2450,	// (0x00010d70) tabs_2_long_passive_pane_srt

0x3496,	// (0x00011db6) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3496,	// (0x00011db6) bg_passive_tab_pane_cp4_srt

0x5aa8,	// (0x000143c8) bg_passive_tab_pane_g1_cp4_srt

0x3be2,	// (0x00012502) bg_passive_tab_pane_g2_cp4_srt

0x5a9f,	// (0x000143bf) bg_passive_tab_pane_g3_cp4_srt

0x3475,	// (0x00011d95) bg_active_tab_pane_cp4_srt_ParamLimits

0x3475,	// (0x00011d95) bg_active_tab_pane_cp4_srt

0x3483,	// (0x00011da3) tabs_2_long_active_pane_srt_t1_ParamLimits

0x3483,	// (0x00011da3) tabs_2_long_active_pane_srt_t1

0x5aa8,	// (0x000143c8) bg_active_tab_pane_g1_cp4_srt

0x3be2,	// (0x00012502) bg_active_tab_pane_g2_cp4_srt

0x5a9f,	// (0x000143bf) bg_active_tab_pane_g3_cp4_srt

0x26e9,	// (0x00011009) tabs_3_long_active_pane_srt_ParamLimits

0x26e9,	// (0x00011009) tabs_3_long_active_pane_srt

0x26e9,	// (0x00011009) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x26e9,	// (0x00011009) tabs_3_long_passive_pane_cp_srt

0x26e9,	// (0x00011009) tabs_3_long_passive_pane_srt_ParamLimits

0x26e9,	// (0x00011009) tabs_3_long_passive_pane_srt

0x3496,	// (0x00011db6) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3496,	// (0x00011db6) bg_passive_tab_pane_cp5_srt

0x3c71,	// (0x00012591) bg_passive_tab_pane_g1_cp5_srt

0x3be2,	// (0x00012502) bg_passive_tab_pane_g2_cp5_srt

0x3c68,	// (0x00012588) bg_passive_tab_pane_g3_cp5_srt

0x3475,	// (0x00011d95) bg_active_tab_pane_cp5_srt_ParamLimits

0x3475,	// (0x00011d95) bg_active_tab_pane_cp5_srt

0x34a2,	// (0x00011dc2) tabs_3_long_active_pane_srt_t1_ParamLimits

0x34a2,	// (0x00011dc2) tabs_3_long_active_pane_srt_t1

0x3c71,	// (0x00012591) bg_active_tab_pane_g1_cp5_srt

0x3be2,	// (0x00012502) bg_active_tab_pane_g2_cp5_srt

0x3c68,	// (0x00012588) bg_active_tab_pane_g3_cp5_srt

0x5a91,	// (0x000143b1) navi_text_pane_srt_t1

0x5a89,	// (0x000143a9) navi_icon_pane_srt_g1

0x40d8,	// (0x000129f8) midp_editing_number_pane_srt

0x3f20,	// (0x00012840) midp_ticker_pane_srt

0x40e0,	// (0x00012a00) midp_ticker_pane_srt_g1

0x40e8,	// (0x00012a08) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001e08d) midp_ticker_pane_srt_g

0x40f0,	// (0x00012a10) midp_ticker_pane_srt_t1

0x5a7a,	// (0x0001439a) midp_editing_number_pane_t1_copy1

0x3f28,	// (0x00012848) listscroll_midp_pane

0x3f28,	// (0x00012848) midp_form_pane

0x3f90,	// (0x000128b0) midp_info_popup_window_ParamLimits

0x3f90,	// (0x000128b0) midp_info_popup_window

0x3375,	// (0x00011c95) bg_popup_sub_pane_cp50_ParamLimits

0x3375,	// (0x00011c95) bg_popup_sub_pane_cp50

0x4bfc,	// (0x0001351c) listscroll_midp_info_pane_ParamLimits

0x4bfc,	// (0x0001351c) listscroll_midp_info_pane

0x4be4,	// (0x00013504) listscroll_form_midp_pane_ParamLimits

0x4be4,	// (0x00013504) listscroll_form_midp_pane

0x4bf0,	// (0x00013510) scroll_bar_cp050

0x4bc4,	// (0x000134e4) list_midp_pane

0x69de,	// (0x000152fe) signal_pane_g2_cp

0x4afe,	// (0x0001341e) listscroll_midp_info_pane_t1_ParamLimits

0x4afe,	// (0x0001341e) listscroll_midp_info_pane_t1

0x4b16,	// (0x00013436) listscroll_midp_info_pane_t2_ParamLimits

0x4b16,	// (0x00013436) listscroll_midp_info_pane_t2

0x4b54,	// (0x00013474) listscroll_midp_info_pane_t3_ParamLimits

0x4b54,	// (0x00013474) listscroll_midp_info_pane_t3

0x4b8e,	// (0x000134ae) listscroll_midp_info_pane_t4_ParamLimits

0x4b8e,	// (0x000134ae) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0001e13e) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0001e13e) listscroll_midp_info_pane_t

0x3424,	// (0x00011d44) scroll_pane_cp21

0x4aa2,	// (0x000133c2) form_midp_field_choice_group_pane

0x4aab,	// (0x000133cb) form_midp_field_text_pane

0x4ae4,	// (0x00013404) form_midp_field_time_pane

0x4aec,	// (0x0001340c) form_midp_gauge_slider_pane

0x4af5,	// (0x00013415) form_midp_gauge_wait_pane

0x2370,	// (0x00010c90) form_midp_image_pane

0xc07a,	// (0x0001a99a) list_single_midp_pane_ParamLimits

0xc07a,	// (0x0001a99a) list_single_midp_pane

0x4a5b,	// (0x0001337b) form_midp_field_text_pane_t1

0x484e,	// (0x0001316e) input_focus_pane_cp050

0x4a7c,	// (0x0001339c) list_midp_form_text_pane

0x4a1e,	// (0x0001333e) form_midp_field_choice_group_pane_t1

0x4a2c,	// (0x0001334c) input_focus_pane_cp051

0x4a4c,	// (0x0001336c) list_midp_choice_pane

0x2370,	// (0x00010c90) status_idle_pane

0x4a02,	// (0x00013322) form_midp_field_time_pane_t1

0x2289,	// (0x00010ba9) wait_anim_pane_g2_copy1

0x4a10,	// (0x00013330) form_midp_field_time_pane_t2

0x0001,

0x403a,	// (0x0001295a) aid_navinavi_width_2_pane

0xf819,	// (0x0001e139) form_midp_field_time_pane_t

0x2370,	// (0x00010c90) input_focus_pane_cp052

0x2370,	// (0x00010c90) bg_input_focus_pane_cp040

0x49c2,	// (0x000132e2) form_midp_gauge_slider_pane_t1

0x49d0,	// (0x000132f0) form_midp_gauge_slider_pane_t2

0x49de,	// (0x000132fe) form_midp_gauge_slider_pane_t3

0x49ec,	// (0x0001330c) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0001e130) form_midp_gauge_slider_pane_t

0x49fa,	// (0x0001331a) form_midp_slider_pane

0x2450,	// (0x00010d70) bg_input_focus_pane_cp041_ParamLimits

0x2450,	// (0x00010d70) bg_input_focus_pane_cp041

0x4992,	// (0x000132b2) form_midp_gauge_wait_pane_t1_ParamLimits

0x4992,	// (0x000132b2) form_midp_gauge_wait_pane_t1

0x49a4,	// (0x000132c4) form_midp_gauge_wait_pane_t2_ParamLimits

0x49a4,	// (0x000132c4) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x0001e12b) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x0001e12b) form_midp_gauge_wait_pane_t

0x49b6,	// (0x000132d6) form_midp_wait_pane_ParamLimits

0x49b6,	// (0x000132d6) form_midp_wait_pane

0x495c,	// (0x0001327c) form_midp_image_pane_g1

0x4965,	// (0x00013285) form_midp_image_pane_t1

0x4974,	// (0x00013294) form_midp_image_pane_t2

0x4983,	// (0x000132a3) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0001e124) form_midp_image_pane_t

0x4944,	// (0x00013264) list_single_midp_pane_g1

0xc06b,	// (0x0001a98b) list_single_midp_pane_t1

0x4930,	// (0x00013250) list_midp_form_item_pane_ParamLimits

0x4930,	// (0x00013250) list_midp_form_item_pane

0x3fe2,	// (0x00012902) list_midp_form_item_pane_t1

0x3ff1,	// (0x00012911) midp_ticker_pane_g1

0x3ffd,	// (0x0001291d) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001e073) midp_ticker_pane_g

0x4009,	// (0x00012929) midp_ticker_pane_t1

0x5a7a,	// (0x0001439a) midp_editing_number_pane_t1

0x5c8b,	// (0x000145ab) midp_editing_number_pane

0x5c97,	// (0x000145b7) midp_ticker_pane

0x5a58,	// (0x00014378) ai_message_heading_pane

0x2370,	// (0x00010c90) bg_popup_window_pane_cp14

0x5a60,	// (0x00014380) listscroll_ai_message_pane

0x59e2,	// (0x00014302) ai_message_heading_pane_g1_ParamLimits

0x59e2,	// (0x00014302) ai_message_heading_pane_g1

0x59ee,	// (0x0001430e) ai_message_heading_pane_g2_ParamLimits

0x59ee,	// (0x0001430e) ai_message_heading_pane_g2

0x59fa,	// (0x0001431a) ai_message_heading_pane_g3_ParamLimits

0x59fa,	// (0x0001431a) ai_message_heading_pane_g3

0x5a06,	// (0x00014326) ai_message_heading_pane_g4_ParamLimits

0x5a06,	// (0x00014326) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x0001e265) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x0001e265) ai_message_heading_pane_g

0x5a12,	// (0x00014332) ai_message_heading_pane_t1_ParamLimits

0x5a12,	// (0x00014332) ai_message_heading_pane_t1

0x5a2c,	// (0x0001434c) ai_message_heading_pane_t2_ParamLimits

0x5a2c,	// (0x0001434c) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0001e26e) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0001e26e) ai_message_heading_pane_t

0x5a3e,	// (0x0001435e) bg_popup_heading_pane_cp1_ParamLimits

0x5a3e,	// (0x0001435e) bg_popup_heading_pane_cp1

0x59d0,	// (0x000142f0) list_ai_message_pane_ParamLimits

0x59d0,	// (0x000142f0) list_ai_message_pane

0x3424,	// (0x00011d44) scroll_pane_cp10

0x596c,	// (0x0001428c) list_ai_message_pane_g1

0x5974,	// (0x00014294) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0001e242) list_ai_message_pane_g

0x597c,	// (0x0001429c) list_ai_message_pane_t1_ParamLimits

0x597c,	// (0x0001429c) list_ai_message_pane_t1

0x5991,	// (0x000142b1) list_ai_message_pane_t2_ParamLimits

0x5991,	// (0x000142b1) list_ai_message_pane_t2

0x59a6,	// (0x000142c6) list_ai_message_pane_t3_ParamLimits

0x59a6,	// (0x000142c6) list_ai_message_pane_t3

0x59bb,	// (0x000142db) list_ai_message_pane_t4_ParamLimits

0x59bb,	// (0x000142db) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0001e247) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0001e247) list_ai_message_pane_t

0x595a,	// (0x0001427a) cell_ai_soft_ind_pane_ParamLimits

0x595a,	// (0x0001427a) cell_ai_soft_ind_pane

0x401b,	// (0x0001293b) cell_ai_soft_ind_pane_g1_ParamLimits

0x401b,	// (0x0001293b) cell_ai_soft_ind_pane_g1

0x2370,	// (0x00010c90) grid_highlight_cp1

0x4028,	// (0x00012948) text_secondary_cp56_ParamLimits

0x4028,	// (0x00012948) text_secondary_cp56

0x592f,	// (0x0001424f) example_general_pane_ParamLimits

0x592f,	// (0x0001424f) example_general_pane

0x593b,	// (0x0001425b) example_parent_pane_g1_ParamLimits

0x593b,	// (0x0001425b) example_parent_pane_g1

0x5947,	// (0x00014267) example_parent_pane_t1_ParamLimits

0x5947,	// (0x00014267) example_parent_pane_t1

0xd31f,	// (0x0001bc3f) popup_preview_text_window_ParamLimits

0xd31f,	// (0x0001bc3f) popup_preview_text_window

0x3e65,	// (0x00012785) list_single_pane_cp2_g4

0x27c5,	// (0x000110e5) bg_popup_preview_window_pane_ParamLimits

0x27c5,	// (0x000110e5) bg_popup_preview_window_pane

0x5680,	// (0x00013fa0) popup_preview_text_window_t1_ParamLimits

0x5680,	// (0x00013fa0) popup_preview_text_window_t1

0x569e,	// (0x00013fbe) popup_preview_text_window_t2_ParamLimits

0x569e,	// (0x00013fbe) popup_preview_text_window_t2

0x56e7,	// (0x00014007) popup_preview_text_window_t3_ParamLimits

0x56e7,	// (0x00014007) popup_preview_text_window_t3

0x572c,	// (0x0001404c) popup_preview_text_window_t4_ParamLimits

0x572c,	// (0x0001404c) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0001e216) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0001e216) popup_preview_text_window_t

0x57aa,	// (0x000140ca) scroll_pane_cp11

0x4738,	// (0x00013058) bg_popup_preview_window_pane_g1

0x5640,	// (0x00013f60) bg_popup_preview_window_pane_g2

0x5648,	// (0x00013f68) bg_popup_preview_window_pane_g3

0x5650,	// (0x00013f70) bg_popup_preview_window_pane_g4

0x5658,	// (0x00013f78) bg_popup_preview_window_pane_g5

0x5660,	// (0x00013f80) bg_popup_preview_window_pane_g6

0x5668,	// (0x00013f88) bg_popup_preview_window_pane_g7

0x5670,	// (0x00013f90) bg_popup_preview_window_pane_g8

0xc7f8,	// (0x0001b118) aid_popup_width_pane

0xd301,	// (0x0001bc21) popup_midp_note_alarm_window_ParamLimits

0xd301,	// (0x0001bc21) popup_midp_note_alarm_window

0x3134,	// (0x00011a54) data_form_pane_ParamLimits

0xbd40,	// (0x0001a660) form_field_data_pane_g1

0x31b9,	// (0x00011ad9) form_field_data_pane_t1_ParamLimits

0x3160,	// (0x00011a80) input_focus_pane_ParamLimits

0x316e,	// (0x00011a8e) data_form_wide_pane_ParamLimits

0xbd48,	// (0x0001a668) form_field_data_wide_pane_g1

0xbd54,	// (0x0001a674) form_field_data_wide_pane_t1_ParamLimits

0x2a51,	// (0x00011371) input_focus_pane_cp6_ParamLimits

0x33d1,	// (0x00011cf1) input_popup_find_pane_g1_ParamLimits

0x33d1,	// (0x00011cf1) input_popup_find_pane_g1

0xcbb7,	// (0x0001b4d7) aid_navi_side_left_pane

0xcbc7,	// (0x0001b4e7) aid_navi_side_right_pane

0x509a,	// (0x000139ba) bg_popup_window_pane_cp30_ParamLimits

0x509a,	// (0x000139ba) bg_popup_window_pane_cp30

0x5114,	// (0x00013a34) popup_midp_note_alarm_window_g1_ParamLimits

0x5114,	// (0x00013a34) popup_midp_note_alarm_window_g1

0x5144,	// (0x00013a64) popup_midp_note_alarm_window_t1_ParamLimits

0x5144,	// (0x00013a64) popup_midp_note_alarm_window_t1

0x51e5,	// (0x00013b05) popup_midp_note_alarm_window_t2_ParamLimits

0x51e5,	// (0x00013b05) popup_midp_note_alarm_window_t2

0x5293,	// (0x00013bb3) popup_midp_note_alarm_window_t3_ParamLimits

0x5293,	// (0x00013bb3) popup_midp_note_alarm_window_t3

0x52bb,	// (0x00013bdb) popup_midp_note_alarm_window_t4_ParamLimits

0x52bb,	// (0x00013bdb) popup_midp_note_alarm_window_t4

0x52db,	// (0x00013bfb) popup_midp_note_alarm_window_t5_ParamLimits

0x52db,	// (0x00013bfb) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x0001e1b3) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x0001e1b3) popup_midp_note_alarm_window_t

0x5387,	// (0x00013ca7) wait_bar_pane_cp1_ParamLimits

0x5387,	// (0x00013ca7) wait_bar_pane_cp1

0x2370,	// (0x00010c90) wait_anim_pane_copy1

0x2370,	// (0x00010c90) wait_border_pane_copy1

0x4dac,	// (0x000136cc) wait_border_pane_g1_copy1

0xbd6e,	// (0x0001a68e) form_field_popup_pane_g1

0xbd76,	// (0x0001a696) form_field_popup_pane_t1_ParamLimits

0x3160,	// (0x00011a80) input_focus_pane_cp7_ParamLimits

0x3134,	// (0x00011a54) list_form_pane_ParamLimits

0xbd8e,	// (0x0001a6ae) form_field_popup_wide_pane_g1

0xbd96,	// (0x0001a6b6) form_field_popup_wide_pane_t1_ParamLimits

0x3160,	// (0x00011a80) input_focus_pane_cp8_ParamLimits

0x31ee,	// (0x00011b0e) list_form_wide_pane_ParamLimits

0x5e61,	// (0x00014781) aid_size_cell_graphic_pane

0xbe1b,	// (0x0001a73b) data_form_pane_t1_ParamLimits

0xc0a2,	// (0x0001a9c2) data_form_wide_pane_t1_ParamLimits

0x4335,	// (0x00012c55) bg_status_flat_pane

0x23b0,	// (0x00010cd0) title_pane_t1_ParamLimits

0x2418,	// (0x00010d38) title_pane_t2_ParamLimits

0x243e,	// (0x00010d5e) title_pane_t3_ParamLimits

0xf557,	// (0x0001de77) title_pane_t_ParamLimits

0x38b0,	// (0x000121d0) level_1_signal_ParamLimits

0x38bd,	// (0x000121dd) level_2_signal_ParamLimits

0x38ca,	// (0x000121ea) level_3_signal_ParamLimits

0x38d7,	// (0x000121f7) level_4_signal_ParamLimits

0x38e4,	// (0x00012204) level_5_signal_ParamLimits

0x38f1,	// (0x00012211) level_6_signal_ParamLimits

0x38fe,	// (0x0001221e) level_7_signal_ParamLimits

0x38b0,	// (0x000121d0) level_1_battery_ParamLimits

0x38bd,	// (0x000121dd) level_2_battery_ParamLimits

0x38ca,	// (0x000121ea) level_3_battery_ParamLimits

0x38d7,	// (0x000121f7) level_4_battery_ParamLimits

0x38e4,	// (0x00012204) level_5_battery_ParamLimits

0x38f1,	// (0x00012211) level_6_battery_ParamLimits

0x38fe,	// (0x0001221e) level_7_battery_ParamLimits

0x4fb1,	// (0x000138d1) bg_status_flat_pane_g1

0x4fb9,	// (0x000138d9) bg_status_flat_pane_g2

0x4fc1,	// (0x000138e1) bg_status_flat_pane_g3

0x4fc9,	// (0x000138e9) bg_status_flat_pane_g4

0x4fd1,	// (0x000138f1) bg_status_flat_pane_g5

0x4fd9,	// (0x000138f9) bg_status_flat_pane_g6

0x4fe1,	// (0x00013901) bg_status_flat_pane_g7

0x2466,	// (0x00010d86) tabs_3_active_pane_t1_ParamLimits

0x2466,	// (0x00010d86) tabs_3_passive_pane_t1_ParamLimits

0x2480,	// (0x00010da0) tabs_4_active_pane_t1_ParamLimits

0x2480,	// (0x00010da0) tabs_4_1_passive_pane_t1_ParamLimits

0x3463,	// (0x00011d83) tabs_2_active_pane_t1_ParamLimits

0x3463,	// (0x00011d83) tabs_2_passive_pane_t1_ParamLimits

0x3475,	// (0x00011d95) bg_active_tab_pane_cp4_ParamLimits

0x3483,	// (0x00011da3) tabs_2_long_active_pane_t1_ParamLimits

0x3496,	// (0x00011db6) bg_passive_tab_pane_cp4_ParamLimits

0xd563,	// (0x0001be83) list_single_midp_graphic_pane_t1_ParamLimits

0x3475,	// (0x00011d95) bg_active_tab_pane_cp5_ParamLimits

0x34a2,	// (0x00011dc2) tabs_3_long_active_pane_t1_ParamLimits

0x3496,	// (0x00011db6) bg_passive_tab_pane_cp5_ParamLimits

0xd563,	// (0x0001be83) list_single_midp_graphic_pane_t1

0x4335,	// (0x00012c55) bg_status_flat_pane_ParamLimits

0x43ee,	// (0x00012d0e) indicator_pane_cp2_ParamLimits

0x43ee,	// (0x00012d0e) indicator_pane_cp2

0x4512,	// (0x00012e32) navi_pane_srt_ParamLimits

0x4512,	// (0x00012e32) navi_pane_srt

0x4536,	// (0x00012e56) popup_clock_digital_analogue_window_cp1

0x2544,	// (0x00010e64) indicator_pane_t1

0x3f20,	// (0x00012840) copy_highlight_pane

0x3f20,	// (0x00012840) cursor_graphics_pane

0x3f20,	// (0x00012840) graphic_within_text_pane

0x3f20,	// (0x00012840) link_highlight_pane

0x576d,	// (0x0001408d) popup_preview_text_window_t5_ParamLimits

0x576d,	// (0x0001408d) popup_preview_text_window_t5

0x4042,	// (0x00012962) cursor_digital_pane

0x4042,	// (0x00012962) cursor_primary_pane

0x4053,	// (0x00012973) cursor_primary_small_pane

0x405b,	// (0x0001297b) cursor_secondary_pane

0x4063,	// (0x00012983) cursor_title_pane

0x4042,	// (0x00012962) link_highlight_digital_pane

0x404a,	// (0x0001296a) link_highlight_primary_pane

0x4053,	// (0x00012973) link_highlight_primary_small_pane

0x405b,	// (0x0001297b) link_highlight_secondary_pane

0x4063,	// (0x00012983) link_highlight_title_pane

0x4042,	// (0x00012962) copy_highlight_digital_pane

0x4042,	// (0x00012962) copy_highlight_primary_pane

0x4053,	// (0x00012973) copy_highlight_primary_small_pane

0x405b,	// (0x0001297b) copy_highlight_secondary_pane

0x4063,	// (0x00012983) copy_highlight_title_pane

0x405b,	// (0x0001297b) graphic_text_digital_pane

0x5049,	// (0x00013969) graphic_text_primary_pane

0x5052,	// (0x00013972) graphic_text_primary_small_pane

0x4053,	// (0x00012973) graphic_text_secondary_pane

0x4042,	// (0x00012962) graphic_text_title_pane

0x406b,	// (0x0001298b) cursor_primary_pane_g1

0x503b,	// (0x0001395b) cursor_text_primary_t1

0x5025,	// (0x00013945) cursor_primary_small_pane_g1

0x502d,	// (0x0001394d) cursor_text_primary_small_t1

0x500f,	// (0x0001392f) cursor_primary_small_pane_g1_copy1

0x5017,	// (0x00013937) cursor_text_primary_small_t1_copy1

0x4ff9,	// (0x00013919) cursor_text_title_t1

0x5007,	// (0x00013927) cursor_title_pane_g1

0x406b,	// (0x0001298b) cursor_digital_pane_g1

0x4073,	// (0x00012993) cursor_text_digital_t1

0x4081,	// (0x000129a1) link_highlight_primary_pane_g1

0x4fa2,	// (0x000138c2) link_highlight_primary_pane_t1

0x4081,	// (0x000129a1) link_highlight_primary_small_pane_g1

0x4089,	// (0x000129a9) link_highlight_primary_small_pane_t1

0x4098,	// (0x000129b8) link_highlight_secondary_pane_g1

0x40a0,	// (0x000129c0) link_highlight_secondary_pane_t1

0x4f07,	// (0x00013827) link_highlight_title_pane_g1

0x4f1e,	// (0x0001383e) link_highlight_title_pane_t1

0x4f07,	// (0x00013827) link_highlight_digital_pane_g1

0x4f0f,	// (0x0001382f) link_highlight_digital_pane_t1

0x4dc7,	// (0x000136e7) copy_highlight_primary_pane_g1

0x4ded,	// (0x0001370d) copy_highlight_primary_pane_t1

0x4dc7,	// (0x000136e7) copy_highlight_primary_small_pane_g1

0x4dde,	// (0x000136fe) copy_highlight_primary_small_pane_t1

0x40af,	// (0x000129cf) copy_highlight_secondary_pane_g1

0x40b7,	// (0x000129d7) copy_highlight_secondary_pane_t1

0x4dc7,	// (0x000136e7) copy_highlight_title_pane_g1

0x4dcf,	// (0x000136ef) copy_highlight_title_pane_t1

0x4dc7,	// (0x000136e7) copy_highlight_digital_pane_g1

0x5fcd,	// (0x000148ed) copy_highlight_digital_pane_t1

0x5f21,	// (0x00014841) graphic_text_primary_pane_g1

0x5fb1,	// (0x000148d1) graphic_text_primary_pane_t1

0x5fbf,	// (0x000148df) graphic_text_primary_pane_t2

0x0001,

0xf9bd,	// (0x0001e2dd) graphic_text_primary_pane_t

0x5f8d,	// (0x000148ad) graphic_text_primary_small_pane_g1

0x5f95,	// (0x000148b5) graphic_text_primary_small_pane_t1

0x5fa3,	// (0x000148c3) graphic_text_primary_small_pane_t2

0x0001,

0xf9b8,	// (0x0001e2d8) graphic_text_primary_small_pane_t

0x5f69,	// (0x00014889) graphic_text_secondary_pane_g1

0x5f71,	// (0x00014891) graphic_text_secondary_pane_t1

0x5f7f,	// (0x0001489f) graphic_text_secondary_pane_t2

0x0001,

0xf9b3,	// (0x0001e2d3) graphic_text_secondary_pane_t

0x5f45,	// (0x00014865) graphic_text_title_pane_g1

0x5f4d,	// (0x0001486d) graphic_text_title_pane_t1

0x5f5b,	// (0x0001487b) graphic_text_title_pane_t2

0x0001,

0xf9ae,	// (0x0001e2ce) graphic_text_title_pane_t

0x5f21,	// (0x00014841) graphic_text_digital_pane_g1

0x5f29,	// (0x00014849) graphic_text_digital_pane_t1

0x5f37,	// (0x00014857) graphic_text_digital_pane_t2

0x0001,

0xf9a9,	// (0x0001e2c9) graphic_text_digital_pane_t

0x2450,	// (0x00010d70) navi_icon_pane_srt_ParamLimits

0x2450,	// (0x00010d70) navi_icon_pane_srt

0x2370,	// (0x00010c90) navi_midp_pane_srt

0x2370,	// (0x00010c90) navi_navi_pane_srt

0x2450,	// (0x00010d70) navi_text_pane_srt_ParamLimits

0x2450,	// (0x00010d70) navi_text_pane_srt

0x55f9,	// (0x00013f19) navi_navi_icon_text_pane_srt

0x5613,	// (0x00013f33) navi_navi_pane_srt_g1_ParamLimits

0x5613,	// (0x00013f33) navi_navi_pane_srt_g1

0x5601,	// (0x00013f21) navi_navi_pane_srt_g2_ParamLimits

0x5601,	// (0x00013f21) navi_navi_pane_srt_g2

0x0001,

0xf8de,	// (0x0001e1fe) navi_navi_pane_srt_g_ParamLimits

0xf8de,	// (0x0001e1fe) navi_navi_pane_srt_g

0x5625,	// (0x00013f45) navi_navi_tabs_pane_srt

0x55f9,	// (0x00013f19) navi_navi_text_pane_srt

0x55f9,	// (0x00013f19) navi_navi_volume_pane_srt

0x5f12,	// (0x00014832) navi_navi_text_pane_srt_t1

0xd8c7,	// (0x0001c1e7) navi_navi_volume_pane_srt_g1

0xd8cf,	// (0x0001c1ef) volume_small_pane_srt_ParamLimits

0xd8cf,	// (0x0001c1ef) volume_small_pane_srt

0xce5e,	// (0x0001b77e) volume_small_pane_srt_g1_ParamLimits

0xce5e,	// (0x0001b77e) volume_small_pane_srt_g1

0xce6e,	// (0x0001b78e) volume_small_pane_srt_g2_ParamLimits

0xce6e,	// (0x0001b78e) volume_small_pane_srt_g2

0xce7f,	// (0x0001b79f) volume_small_pane_srt_g3_ParamLimits

0xce7f,	// (0x0001b79f) volume_small_pane_srt_g3

0xce90,	// (0x0001b7b0) volume_small_pane_srt_g4_ParamLimits

0xce90,	// (0x0001b7b0) volume_small_pane_srt_g4

0xcea1,	// (0x0001b7c1) volume_small_pane_srt_g5_ParamLimits

0xcea1,	// (0x0001b7c1) volume_small_pane_srt_g5

0xceb2,	// (0x0001b7d2) volume_small_pane_srt_g6_ParamLimits

0xceb2,	// (0x0001b7d2) volume_small_pane_srt_g6

0xcec3,	// (0x0001b7e3) volume_small_pane_srt_g7_ParamLimits

0xcec3,	// (0x0001b7e3) volume_small_pane_srt_g7

0xced4,	// (0x0001b7f4) volume_small_pane_srt_g8_ParamLimits

0xced4,	// (0x0001b7f4) volume_small_pane_srt_g8

0xcee5,	// (0x0001b805) volume_small_pane_srt_g9_ParamLimits

0xcee5,	// (0x0001b805) volume_small_pane_srt_g9

0xcef6,	// (0x0001b816) volume_small_pane_srt_g10_ParamLimits

0xcef6,	// (0x0001b816) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001e078) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001e078) volume_small_pane_srt_g

0x286e,	// (0x0001118e) query_popup_data_pane_cp2

0x5ef8,	// (0x00014818) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5ef8,	// (0x00014818) navi_navi_icon_text_pane_srt_t1

0x5049,	// (0x00013969) navi_tabs_2_long_pane_srt

0x5049,	// (0x00013969) navi_tabs_2_pane_srt

0x5049,	// (0x00013969) navi_tabs_3_long_pane_srt

0x5049,	// (0x00013969) navi_tabs_3_pane_srt

0x5049,	// (0x00013969) navi_tabs_4_pane_srt

0xd8a7,	// (0x0001c1c7) tabs_2_active_pane_srt_ParamLimits

0xd8a7,	// (0x0001c1c7) tabs_2_active_pane_srt

0xd8b7,	// (0x0001c1d7) tabs_2_passive_pane_srt_ParamLimits

0xd8b7,	// (0x0001c1d7) tabs_2_passive_pane_srt

0x426f,	// (0x00012b8f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x426f,	// (0x00012b8f) bg_passive_tab_pane_cp1_srt

0x5edf,	// (0x000147ff) bg_passive_tab_pane_g1_cp1_srt

0x3be2,	// (0x00012502) bg_passive_tab_pane_g2_cp1_srt

0x5ed6,	// (0x000147f6) bg_passive_tab_pane_g3_cp1_srt

0x2450,	// (0x00010d70) bg_active_tab_pane_cp1_srt_ParamLimits

0x2450,	// (0x00010d70) bg_active_tab_pane_cp1_srt

0x5ee8,	// (0x00014808) tabs_2_active_pane_srt_g1

0x3463,	// (0x00011d83) tabs_2_active_pane_srt_t1_ParamLimits

0x3463,	// (0x00011d83) tabs_2_active_pane_srt_t1

0x5edf,	// (0x000147ff) bg_active_tab_pane_g1_cp1_srt

0x3be2,	// (0x00012502) bg_active_tab_pane_g2_cp1_srt

0x5ed6,	// (0x000147f6) bg_active_tab_pane_g3_cp1_srt

0xd874,	// (0x0001c194) tabs_3_active_pane_srt_ParamLimits

0xd874,	// (0x0001c194) tabs_3_active_pane_srt

0xd885,	// (0x0001c1a5) tabs_3_passive_pane_cp_srt_ParamLimits

0xd885,	// (0x0001c1a5) tabs_3_passive_pane_cp_srt

0xd896,	// (0x0001c1b6) tabs_3_passive_pane_srt_ParamLimits

0xd896,	// (0x0001c1b6) tabs_3_passive_pane_srt

0x426f,	// (0x00012b8f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x426f,	// (0x00012b8f) bg_passive_tab_pane_cp2_srt

0x40cf,	// (0x000129ef) bg_passive_tab_pane_g1_cp2_srt

0x3be2,	// (0x00012502) bg_passive_tab_pane_g2_cp2_srt

0x40c6,	// (0x000129e6) bg_passive_tab_pane_g3_cp2_srt

0x2450,	// (0x00010d70) bg_active_tab_pane_cp2_srt_ParamLimits

0x2450,	// (0x00010d70) bg_active_tab_pane_cp2_srt

0x5ece,	// (0x000147ee) tabs_3_active_pane_srt_g1

0x2466,	// (0x00010d86) tabs_3_active_pane_srt_t1_ParamLimits

0x2466,	// (0x00010d86) tabs_3_active_pane_srt_t1

0x40cf,	// (0x000129ef) bg_active_tab_pane_g1_cp2_srt

0x3be2,	// (0x00012502) bg_active_tab_pane_g2_cp2_srt

0x40c6,	// (0x000129e6) bg_active_tab_pane_g3_cp2_srt

0xd82c,	// (0x0001c14c) tabs_4_active_pane_srt_ParamLimits

0xd82c,	// (0x0001c14c) tabs_4_active_pane_srt

0xd83e,	// (0x0001c15e) tabs_4_passive_pane_cp2_srt_ParamLimits

0xd83e,	// (0x0001c15e) tabs_4_passive_pane_cp2_srt

0xd05b,	// (0x0001b97b) aid_size_cell_toolbar

0x3496,	// (0x00011db6) main_idle_act_pane_ParamLimits

0xd1bc,	// (0x0001badc) popup_large_graphic_colour_window_ParamLimits

0xd470,	// (0x0001bd90) popup_toolbar_window_ParamLimits

0xd470,	// (0x0001bd90) popup_toolbar_window

0xc0e5,	// (0x0001aa05) list_single_graphic_2heading_pane_ParamLimits

0xc0e5,	// (0x0001aa05) list_single_graphic_2heading_pane

0x366d,	// (0x00011f8d) aid_size_cell_apps_grid_lsc_pane

0x367f,	// (0x00011f9f) aid_size_cell_apps_grid_prt_pane

0x426f,	// (0x00012b8f) bg_wml_button_pane_cp1_ParamLimits

0x426f,	// (0x00012b8f) bg_wml_button_pane_cp1

0x4a5b,	// (0x0001337b) form_midp_field_text_pane_t1_ParamLimits

0x484e,	// (0x0001316e) input_focus_pane_cp050_ParamLimits

0x4a7c,	// (0x0001339c) list_midp_form_text_pane_ParamLimits

0x4a2c,	// (0x0001334c) input_focus_pane_cp051_ParamLimits

0x4a4c,	// (0x0001336c) list_midp_choice_pane_ParamLimits

0x48fe,	// (0x0001321e) list_single_2graphic_pane_cp3_ParamLimits

0x48fe,	// (0x0001321e) list_single_2graphic_pane_cp3

0x4911,	// (0x00013231) list_single_midp_graphic_pane_ParamLimits

0x4911,	// (0x00013231) list_single_midp_graphic_pane

0xb838,	// (0x0001a158) list_single_graphic_2heading_pane_g1_ParamLimits

0xb838,	// (0x0001a158) list_single_graphic_2heading_pane_g1

0xbf63,	// (0x0001a883) list_single_graphic_2heading_pane_g4_ParamLimits

0xbf63,	// (0x0001a883) list_single_graphic_2heading_pane_g4

0xbf6f,	// (0x0001a88f) list_single_graphic_2heading_pane_g5_ParamLimits

0xbf6f,	// (0x0001a88f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001e0cb) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001e0cb) list_single_graphic_2heading_pane_g

0xbf7b,	// (0x0001a89b) list_single_graphic_2heading_pane_t1_ParamLimits

0xbf7b,	// (0x0001a89b) list_single_graphic_2heading_pane_t1

0xbf8f,	// (0x0001a8af) list_single_graphic_2heading_pane_t2_ParamLimits

0xbf8f,	// (0x0001a8af) list_single_graphic_2heading_pane_t2

0xbfa9,	// (0x0001a8c9) list_single_graphic_2heading_pane_t3_ParamLimits

0xbfa9,	// (0x0001a8c9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001e0d2) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001e0d2) list_single_graphic_2heading_pane_t

0x4682,	// (0x00012fa2) bg_popup_sub_pane_cp2

0x46a8,	// (0x00012fc8) grid_toobar_pane

0xd4ff,	// (0x0001be1f) cell_toolbar_pane_ParamLimits

0xd4ff,	// (0x0001be1f) cell_toolbar_pane

0x46de,	// (0x00012ffe) cell_toolbar_pane_g1_ParamLimits

0x46de,	// (0x00012ffe) cell_toolbar_pane_g1

0x46f0,	// (0x00013010) cell_toolbar_pane_g2_ParamLimits

0x46f0,	// (0x00013010) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x0001e0d9) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x0001e0d9) cell_toolbar_pane_g

0x4712,	// (0x00013032) grid_highlight_pane_cp2_ParamLimits

0x4712,	// (0x00013032) grid_highlight_pane_cp2

0x472c,	// (0x0001304c) toolbar_button_pane

0x4738,	// (0x00013058) toolbar_button_pane_g1

0x4748,	// (0x00013068) toolbar_button_pane_g2

0x4740,	// (0x00013060) toolbar_button_pane_g3

0x4758,	// (0x00013078) toolbar_button_pane_g4

0x4750,	// (0x00013070) toolbar_button_pane_g5

0x4760,	// (0x00013080) toolbar_button_pane_g6

0x4768,	// (0x00013088) toolbar_button_pane_g7

0x4778,	// (0x00013098) toolbar_button_pane_g8

0x4770,	// (0x00013090) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x0001e0de) toolbar_button_pane_g

0xd52e,	// (0x0001be4e) list_single_2graphic_pane_g1_cp3_ParamLimits

0xd52e,	// (0x0001be4e) list_single_2graphic_pane_g1_cp3

0xd53a,	// (0x0001be5a) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd53a,	// (0x0001be5a) list_single_2graphic_pane_g2_cp3

0x3da1,	// (0x000126c1) list_single_2graphic_pane_g3_cp3

0x4a40,	// (0x00013360) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4a40,	// (0x00013360) list_single_2graphic_pane_g4_cp3

0xd549,	// (0x0001be69) list_single_2graphic_pane_t1_cp3_ParamLimits

0xd549,	// (0x0001be69) list_single_2graphic_pane_t1_cp3

0x3d95,	// (0x000126b5) list_single_midp_graphic_pane_g2_ParamLimits

0x3d95,	// (0x000126b5) list_single_midp_graphic_pane_g2

0xd063,	// (0x0001b983) aid_zoom_text_primary

0xbf36,	// (0x0001a856) aid_zoom_text_secondary

0x417e,	// (0x00012a9e) status_small_pane_g7_ParamLimits

0x417e,	// (0x00012a9e) status_small_pane_g7

0x41a1,	// (0x00012ac1) status_small_pane_t1_ParamLimits

0x2387,	// (0x00010ca7) title_pane_g2

0x0003,

0xf54e,	// (0x0001de6e) title_pane_g

0x290d,	// (0x0001122d) aid_size_cell_colour_1_pane_ParamLimits

0x290d,	// (0x0001122d) aid_size_cell_colour_1_pane

0x2921,	// (0x00011241) aid_size_cell_colour_2_pane_ParamLimits

0x2921,	// (0x00011241) aid_size_cell_colour_2_pane

0x2935,	// (0x00011255) aid_size_cell_colour_3_pane_ParamLimits

0x2935,	// (0x00011255) aid_size_cell_colour_3_pane

0x2949,	// (0x00011269) aid_size_cell_colour_4_pane_ParamLimits

0x2949,	// (0x00011269) aid_size_cell_colour_4_pane

0xcb19,	// (0x0001b439) title_pane_stacon_g1_ParamLimits

0xcb19,	// (0x0001b439) title_pane_stacon_g1

0x4e44,	// (0x00013764) popup_note_wait_window_g3_ParamLimits

0x4e44,	// (0x00013764) popup_note_wait_window_g3

0x4eba,	// (0x000137da) popup_note_wait_window_t5_ParamLimits

0x4eba,	// (0x000137da) popup_note_wait_window_t5

0x2370,	// (0x00010c90) main_feb_china_hwr_fs_writing_pane

0xd0d1,	// (0x0001b9f1) popup_feb_china_hwr_fs_window_ParamLimits

0xd0d1,	// (0x0001b9f1) popup_feb_china_hwr_fs_window

0xd579,	// (0x0001be99) aid_size_cell_hwr_fs_ParamLimits

0xd579,	// (0x0001be99) aid_size_cell_hwr_fs

0x484e,	// (0x0001316e) bg_popup_sub_pane_cp3_ParamLimits

0x484e,	// (0x0001316e) bg_popup_sub_pane_cp3

0xd58e,	// (0x0001beae) grid_hwr_fs_pane_ParamLimits

0xd58e,	// (0x0001beae) grid_hwr_fs_pane

0xd5a2,	// (0x0001bec2) linegrid_hwr_fs_pane_ParamLimits

0xd5a2,	// (0x0001bec2) linegrid_hwr_fs_pane

0xd5b2,	// (0x0001bed2) cell_hwr_fs_pane_ParamLimits

0xd5b2,	// (0x0001bed2) cell_hwr_fs_pane

0x485a,	// (0x0001317a) linegrid_hwr_fs_pane_g1_ParamLimits

0x485a,	// (0x0001317a) linegrid_hwr_fs_pane_g1

0x4866,	// (0x00013186) linegrid_hwr_fs_pane_g2_ParamLimits

0x4866,	// (0x00013186) linegrid_hwr_fs_pane_g2

0x4878,	// (0x00013198) linegrid_hwr_fs_pane_g3_ParamLimits

0x4878,	// (0x00013198) linegrid_hwr_fs_pane_g3

0xd5d0,	// (0x0001bef0) linegrid_hwr_fs_pane_g4_ParamLimits

0xd5d0,	// (0x0001bef0) linegrid_hwr_fs_pane_g4

0xd5ea,	// (0x0001bf0a) linegrid_hwr_fs_pane_g5_ParamLimits

0xd5ea,	// (0x0001bf0a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0001e109) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0001e109) linegrid_hwr_fs_pane_g

0x4884,	// (0x000131a4) cell_hwr_fs_pane_g1_ParamLimits

0x4884,	// (0x000131a4) cell_hwr_fs_pane_g1

0x45c0,	// (0x00012ee0) cell_hwr_fs_pane_g2_ParamLimits

0x45c0,	// (0x00012ee0) cell_hwr_fs_pane_g2

0x489a,	// (0x000131ba) cell_hwr_fs_pane_g3_ParamLimits

0x489a,	// (0x000131ba) cell_hwr_fs_pane_g3

0x48a7,	// (0x000131c7) cell_hwr_fs_pane_g4_ParamLimits

0x48a7,	// (0x000131c7) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0001e114) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0001e114) cell_hwr_fs_pane_g

0xd600,	// (0x0001bf20) cell_hwr_fs_pane_t1

0x2370,	// (0x00010c90) grid_highlight_pane_cp6

0x2370,	// (0x00010c90) main_idle_act2_pane

0x340b,	// (0x00011d2b) aid_inside_area_popup_secondary

0x5499,	// (0x00013db9) aid_inside_area_window_primary_ParamLimits

0x5499,	// (0x00013db9) aid_inside_area_window_primary

0x5fdc,	// (0x000148fc) ai2_news_ticker_pane

0x5fe4,	// (0x00014904) aid_size_cell_ai1_link_ParamLimits

0x5fe4,	// (0x00014904) aid_size_cell_ai1_link

0x5ffe,	// (0x0001491e) popup_ai2_data_window_ParamLimits

0x5ffe,	// (0x0001491e) popup_ai2_data_window

0x6012,	// (0x00014932) popup_ai2_link_window_ParamLimits

0x6012,	// (0x00014932) popup_ai2_link_window

0x484e,	// (0x0001316e) bg_popup_sub_pane_cp4_ParamLimits

0x484e,	// (0x0001316e) bg_popup_sub_pane_cp4

0x6026,	// (0x00014946) grid_ai2_link_pane_ParamLimits

0x6026,	// (0x00014946) grid_ai2_link_pane

0x603d,	// (0x0001495d) popup_ai2_link_window_g1_ParamLimits

0x603d,	// (0x0001495d) popup_ai2_link_window_g1

0x6049,	// (0x00014969) popup_ai2_link_window_g2_ParamLimits

0x6049,	// (0x00014969) popup_ai2_link_window_g2

0x0001,

0xf9c2,	// (0x0001e2e2) popup_ai2_link_window_g_ParamLimits

0xf9c2,	// (0x0001e2e2) popup_ai2_link_window_g

0x6058,	// (0x00014978) ai2_mp_button_pane

0x6060,	// (0x00014980) ai2_mp_volume_pane

0x4a2c,	// (0x0001334c) bg_popup_sub_pane_cp5_ParamLimits

0x4a2c,	// (0x0001334c) bg_popup_sub_pane_cp5

0x6068,	// (0x00014988) heading_ai2_gene_pane_ParamLimits

0x6068,	// (0x00014988) heading_ai2_gene_pane

0x6074,	// (0x00014994) list_ai2_gene_pane_ParamLimits

0x6074,	// (0x00014994) list_ai2_gene_pane

0x60bc,	// (0x000149dc) cell_ai2_link_pane_ParamLimits

0x60bc,	// (0x000149dc) cell_ai2_link_pane

0x60d2,	// (0x000149f2) cell_ai2_link_pane_g1

0x2370,	// (0x00010c90) grid_highlight_pane_cp7

0xd8e4,	// (0x0001c204) ai2_mp_volume_pane_g1

0x61a2,	// (0x00014ac2) ai2_mp_volume_pane_g2

0x610f,	// (0x00014a2f) list_ai2_gene_pane_t1

0x619a,	// (0x00014aba) ai2_mp_volume_pane_g3

0x0002,

0xf9db,	// (0x0001e2fb) ai2_mp_volume_pane_g

0xd8ec,	// (0x0001c20c) volume_small_pane_cp3

0x61aa,	// (0x00014aca) aid_size_cell_ai2_button

0x61b2,	// (0x00014ad2) grid_ai2_button_pane

0x61bb,	// (0x00014adb) cell_ai2_button_pane_ParamLimits

0x61bb,	// (0x00014adb) cell_ai2_button_pane

0x2289,	// (0x00010ba9) cell_ai2_button_pane_g1

0x2370,	// (0x00010c90) grid_highlight_pane_cp8

0x615a,	// (0x00014a7a) ai2_gene_pane_t1_ParamLimits

0x615a,	// (0x00014a7a) ai2_gene_pane_t1

0xd051,	// (0x0001b971) aid_height_parent_landscape

0x5ae6,	// (0x00014406) aid_height_set_list

0x5af2,	// (0x00014412) aid_size_parent

0x5e61,	// (0x00014781) aid_size_cell_graphic_pane_ParamLimits

0x6084,	// (0x000149a4) popup_ai2_data_window_g1_ParamLimits

0x6084,	// (0x000149a4) popup_ai2_data_window_g1

0x6090,	// (0x000149b0) ai2_news_ticker_pane_g1

0x6098,	// (0x000149b8) ai2_news_ticker_pane_g2

0x0001,

0xf9c7,	// (0x0001e2e7) ai2_news_ticker_pane_g

0x60a0,	// (0x000149c0) ai2_news_ticker_pane_t1

0x60ae,	// (0x000149ce) ai2_news_ticker_pane_t2

0x0001,

0xf9cc,	// (0x0001e2ec) ai2_news_ticker_pane_t

0x5dfb,	// (0x0001471b) heading_ai2_gene_pane_g1

0x60db,	// (0x000149fb) heading_ai2_gene_pane_t1_ParamLimits

0x60db,	// (0x000149fb) heading_ai2_gene_pane_t1

0x60f0,	// (0x00014a10) list_highlight_pane_cp6

0x60f8,	// (0x00014a18) ai2_gene_pane_ParamLimits

0x60f8,	// (0x00014a18) ai2_gene_pane

0x611d,	// (0x00014a3d) list_ai2_gene_pane_t2

0x0001,

0xf9d1,	// (0x0001e2f1) list_ai2_gene_pane_t

0x612b,	// (0x00014a4b) list_highlight_pane_cp8_ParamLimits

0x612b,	// (0x00014a4b) list_highlight_pane_cp8

0x613c,	// (0x00014a5c) ai2_gene_pane_g1_ParamLimits

0x613c,	// (0x00014a5c) ai2_gene_pane_g1

0x614e,	// (0x00014a6e) ai2_gene_pane_g2_ParamLimits

0x614e,	// (0x00014a6e) ai2_gene_pane_g2

0x0001,

0xf9d6,	// (0x0001e2f6) ai2_gene_pane_g_ParamLimits

0xf9d6,	// (0x0001e2f6) ai2_gene_pane_g

0x2bda,	// (0x000114fa) scroll_pane_cp12

0xd008,	// (0x0001b928) control_pane_t3_ParamLimits

0xd008,	// (0x0001b928) control_pane_t3

0x4192,	// (0x00012ab2) status_small_pane_g8_ParamLimits

0x4192,	// (0x00012ab2) status_small_pane_g8

0xd191,	// (0x0001bab1) popup_find_window_ParamLimits

0xd313,	// (0x0001bc33) popup_note_image_window_ParamLimits

0xb838,	// (0x0001a158) list_double2_graphic_pane_vc_g1_ParamLimits

0xb838,	// (0x0001a158) list_double2_graphic_pane_vc_g1

0xbf63,	// (0x0001a883) list_double2_graphic_pane_vc_g2_ParamLimits

0xbf63,	// (0x0001a883) list_double2_graphic_pane_vc_g2

0xbf6f,	// (0x0001a88f) list_double2_graphic_pane_vc_g3_ParamLimits

0xbf6f,	// (0x0001a88f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7ab,	// (0x0001e0cb) list_double2_graphic_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001e0cb) list_double2_graphic_pane_vc_g

0xbfc1,	// (0x0001a8e1) list_double2_graphic_pane_vc_t1_ParamLimits

0xbfc1,	// (0x0001a8e1) list_double2_graphic_pane_vc_t1

0xbf63,	// (0x0001a883) list_single_heading_pane_vc_g1_ParamLimits

0xbf63,	// (0x0001a883) list_single_heading_pane_vc_g1

0xbf6f,	// (0x0001a88f) list_single_heading_pane_vc_g2_ParamLimits

0xbf6f,	// (0x0001a88f) list_single_heading_pane_vc_g2

0x0001,

0xf7d3,	// (0x0001e0f3) list_single_heading_pane_vc_g_ParamLimits

0xf7d3,	// (0x0001e0f3) list_single_heading_pane_vc_g

0xbfd7,	// (0x0001a8f7) list_single_heading_pane_vc_t1_ParamLimits

0xbfd7,	// (0x0001a8f7) list_single_heading_pane_vc_t1

0xbfed,	// (0x0001a90d) list_single_heading_pane_vc_t2_ParamLimits

0xbfed,	// (0x0001a90d) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0001e0f8) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0001e0f8) list_single_heading_pane_vc_t

0xbfff,	// (0x0001a91f) list_setting_number_pane_vc_g1_ParamLimits

0xbfff,	// (0x0001a91f) list_setting_number_pane_vc_g1

0xc00b,	// (0x0001a92b) list_setting_number_pane_vc_g2_ParamLimits

0xc00b,	// (0x0001a92b) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x0001e0fd) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x0001e0fd) list_setting_number_pane_vc_g

0xc017,	// (0x0001a937) list_setting_number_pane_vc_t1_ParamLimits

0xc017,	// (0x0001a937) list_setting_number_pane_vc_t1

0xc02b,	// (0x0001a94b) list_setting_number_pane_vc_t2_ParamLimits

0xc02b,	// (0x0001a94b) list_setting_number_pane_vc_t2

0xc047,	// (0x0001a967) list_setting_number_pane_vc_t3_ParamLimits

0xc047,	// (0x0001a967) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0001e102) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0001e102) list_setting_number_pane_vc_t

0xc05f,	// (0x0001a97f) set_value_pane_vc_ParamLimits

0xc05f,	// (0x0001a97f) set_value_pane_vc

0xc0e5,	// (0x0001aa05) list_double2_graphic_pane_vc_ParamLimits

0xc0e5,	// (0x0001aa05) list_double2_graphic_pane_vc

0x5ccf,	// (0x000145ef) list_double2_large_graphic_pane_vc_ParamLimits

0x5ccf,	// (0x000145ef) list_double2_large_graphic_pane_vc

0xc0e5,	// (0x0001aa05) list_double2_pane_vc_ParamLimits

0xc0e5,	// (0x0001aa05) list_double2_pane_vc

0xc0e5,	// (0x0001aa05) list_double_graphic_heading_pane_vc_ParamLimits

0xc0e5,	// (0x0001aa05) list_double_graphic_heading_pane_vc

0xc0e5,	// (0x0001aa05) list_double_graphic_pane_vc_ParamLimits

0xc0e5,	// (0x0001aa05) list_double_graphic_pane_vc

0xc0e5,	// (0x0001aa05) list_double_heading_pane_vc_ParamLimits

0xc0e5,	// (0x0001aa05) list_double_heading_pane_vc

0xc0f9,	// (0x0001aa19) list_double_large_graphic_pane_vc_ParamLimits

0xc0f9,	// (0x0001aa19) list_double_large_graphic_pane_vc

0xc0e5,	// (0x0001aa05) list_double_number_pane_vc_ParamLimits

0xc0e5,	// (0x0001aa05) list_double_number_pane_vc

0xc0e5,	// (0x0001aa05) list_double_pane_vc_ParamLimits

0xc0e5,	// (0x0001aa05) list_double_pane_vc

0xc0e5,	// (0x0001aa05) list_double_time_pane_vc_ParamLimits

0xc0e5,	// (0x0001aa05) list_double_time_pane_vc

0xc0e5,	// (0x0001aa05) list_setting_number_pane_vc_ParamLimits

0xc0e5,	// (0x0001aa05) list_setting_number_pane_vc

0xc0e5,	// (0x0001aa05) list_setting_pane_vc_ParamLimits

0xc0e5,	// (0x0001aa05) list_setting_pane_vc

0xc0e5,	// (0x0001aa05) list_single_graphic_heading_pane_vc_ParamLimits

0xc0e5,	// (0x0001aa05) list_single_graphic_heading_pane_vc

0xc0e5,	// (0x0001aa05) list_single_heading_pane_vc_ParamLimits

0xc0e5,	// (0x0001aa05) list_single_heading_pane_vc

0xc10a,	// (0x0001aa2a) list_single_number_heading_pane_vc_ParamLimits

0xc10a,	// (0x0001aa2a) list_single_number_heading_pane_vc

0xc14e,	// (0x0001aa6e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc14e,	// (0x0001aa6e) list_double_graphic_heading_pane_vc_g1

0xbf63,	// (0x0001a883) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xbf63,	// (0x0001a883) list_double_graphic_heading_pane_vc_g2

0xbf6f,	// (0x0001a88f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xbf6f,	// (0x0001a88f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e2,	// (0x0001e302) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e2,	// (0x0001e302) list_double_graphic_heading_pane_vc_g

0xc15a,	// (0x0001aa7a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc15a,	// (0x0001aa7a) list_double_graphic_heading_pane_vc_t1

0xc170,	// (0x0001aa90) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xc170,	// (0x0001aa90) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x0001e309) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x0001e309) list_double_graphic_heading_pane_vc_t

0xbfff,	// (0x0001a91f) list_setting_pane_vc_g1_ParamLimits

0xbfff,	// (0x0001a91f) list_setting_pane_vc_g1

0xc00b,	// (0x0001a92b) list_setting_pane_vc_g2_ParamLimits

0xc00b,	// (0x0001a92b) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x0001e0fd) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x0001e0fd) list_setting_pane_vc_g

0xc188,	// (0x0001aaa8) list_setting_pane_vc_t1_ParamLimits

0xc188,	// (0x0001aaa8) list_setting_pane_vc_t1

0xc19c,	// (0x0001aabc) list_setting_pane_vc_t2_ParamLimits

0xc19c,	// (0x0001aabc) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x0001e34c) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x0001e34c) list_setting_pane_vc_t

0xc05f,	// (0x0001a97f) set_value_pane_cp_vc_ParamLimits

0xc05f,	// (0x0001a97f) set_value_pane_cp_vc

0xbf63,	// (0x0001a883) list_single_number_heading_pane_vc_g1_ParamLimits

0xbf63,	// (0x0001a883) list_single_number_heading_pane_vc_g1

0xbf6f,	// (0x0001a88f) list_single_number_heading_pane_vc_g2_ParamLimits

0xbf6f,	// (0x0001a88f) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d3,	// (0x0001e0f3) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d3,	// (0x0001e0f3) list_single_number_heading_pane_vc_g

0xbfd7,	// (0x0001a8f7) list_single_number_heading_pane_vc_t1_ParamLimits

0xbfd7,	// (0x0001a8f7) list_single_number_heading_pane_vc_t1

0xc1b0,	// (0x0001aad0) list_single_number_heading_pane_vc_t2_ParamLimits

0xc1b0,	// (0x0001aad0) list_single_number_heading_pane_vc_t2

0xc1c2,	// (0x0001aae2) list_single_number_heading_pane_vc_t3_ParamLimits

0xc1c2,	// (0x0001aae2) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x0001e351) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0001e351) list_single_number_heading_pane_vc_t

0xb838,	// (0x0001a158) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb838,	// (0x0001a158) list_single_graphic_heading_pane_vc_g1

0xbf63,	// (0x0001a883) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbf63,	// (0x0001a883) list_single_graphic_heading_pane_vc_g4

0xbf6f,	// (0x0001a88f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xbf6f,	// (0x0001a88f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7ab,	// (0x0001e0cb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001e0cb) list_single_graphic_heading_pane_vc_g

0xbfd7,	// (0x0001a8f7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xbfd7,	// (0x0001a8f7) list_single_graphic_heading_pane_vc_t1

0xc1d4,	// (0x0001aaf4) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc1d4,	// (0x0001aaf4) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x0001e358) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0001e358) list_single_graphic_heading_pane_vc_t

0xbf63,	// (0x0001a883) list_double2_pane_vc_g1_ParamLimits

0xbf63,	// (0x0001a883) list_double2_pane_vc_g1

0xbf6f,	// (0x0001a88f) list_double2_pane_vc_g2_ParamLimits

0xbf6f,	// (0x0001a88f) list_double2_pane_vc_g2

0x0001,

0xf7d3,	// (0x0001e0f3) list_double2_pane_vc_g_ParamLimits

0xf7d3,	// (0x0001e0f3) list_double2_pane_vc_g

0xc1e6,	// (0x0001ab06) list_double2_pane_vc_t1_ParamLimits

0xc1e6,	// (0x0001ab06) list_double2_pane_vc_t1

0xc1fc,	// (0x0001ab1c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc1fc,	// (0x0001ab1c) list_double2_large_graphic_pane_vc_g1

0xc208,	// (0x0001ab28) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc208,	// (0x0001ab28) list_double2_large_graphic_pane_vc_g2

0xc214,	// (0x0001ab34) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc214,	// (0x0001ab34) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3d,	// (0x0001e35d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0001e35d) list_double2_large_graphic_pane_vc_g

0xc220,	// (0x0001ab40) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc220,	// (0x0001ab40) list_double2_large_graphic_pane_vc_t1

0xc236,	// (0x0001ab56) list_double_time_pane_vc_g1_ParamLimits

0xc236,	// (0x0001ab56) list_double_time_pane_vc_g1

0xc242,	// (0x0001ab62) list_double_time_pane_vc_g2_ParamLimits

0xc242,	// (0x0001ab62) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x0001e364) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x0001e364) list_double_time_pane_vc_g

0xc24e,	// (0x0001ab6e) list_double_time_pane_vc_t1_ParamLimits

0xc24e,	// (0x0001ab6e) list_double_time_pane_vc_t1

0xc26c,	// (0x0001ab8c) list_double_time_pane_vc_t2_ParamLimits

0xc26c,	// (0x0001ab8c) list_double_time_pane_vc_t2

0xc2b0,	// (0x0001abd0) list_double_time_pane_vc_t3_ParamLimits

0xc2b0,	// (0x0001abd0) list_double_time_pane_vc_t3

0xc2c2,	// (0x0001abe2) list_double_time_pane_vc_t4_ParamLimits

0xc2c2,	// (0x0001abe2) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x0001e369) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x0001e369) list_double_time_pane_vc_t

0xbf63,	// (0x0001a883) list_double_pane_vc_g1_ParamLimits

0xbf63,	// (0x0001a883) list_double_pane_vc_g1

0xbf6f,	// (0x0001a88f) list_double_pane_vc_g2_ParamLimits

0xbf6f,	// (0x0001a88f) list_double_pane_vc_g2

0x0001,

0xf7d3,	// (0x0001e0f3) list_double_pane_vc_g_ParamLimits

0xf7d3,	// (0x0001e0f3) list_double_pane_vc_g

0xc2d4,	// (0x0001abf4) list_double_pane_vc_t1_ParamLimits

0xc2d4,	// (0x0001abf4) list_double_pane_vc_t1

0xc2e6,	// (0x0001ac06) list_double_pane_vc_t2_ParamLimits

0xc2e6,	// (0x0001ac06) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0001e372) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0001e372) list_double_pane_vc_t

0xbf63,	// (0x0001a883) list_double_number_pane_vc_g1_ParamLimits

0xbf63,	// (0x0001a883) list_double_number_pane_vc_g1

0xbf6f,	// (0x0001a88f) list_double_number_pane_vc_g2_ParamLimits

0xbf6f,	// (0x0001a88f) list_double_number_pane_vc_g2

0x0001,

0xf7d3,	// (0x0001e0f3) list_double_number_pane_vc_g_ParamLimits

0xf7d3,	// (0x0001e0f3) list_double_number_pane_vc_g

0xc2fc,	// (0x0001ac1c) list_double_number_pane_vc_t1_ParamLimits

0xc2fc,	// (0x0001ac1c) list_double_number_pane_vc_t1

0xc310,	// (0x0001ac30) list_double_number_pane_vc_t2_ParamLimits

0xc310,	// (0x0001ac30) list_double_number_pane_vc_t2

0xc322,	// (0x0001ac42) list_double_number_pane_vc_t3_ParamLimits

0xc322,	// (0x0001ac42) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x0001e377) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x0001e377) list_double_number_pane_vc_t

0xc338,	// (0x0001ac58) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc338,	// (0x0001ac58) list_double_large_graphic_pane_vc_g1

0xc344,	// (0x0001ac64) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc344,	// (0x0001ac64) list_double_large_graphic_pane_vc_g2

0xc355,	// (0x0001ac75) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc355,	// (0x0001ac75) list_double_large_graphic_pane_vc_g3

0xc361,	// (0x0001ac81) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc361,	// (0x0001ac81) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0001e37e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0001e37e) list_double_large_graphic_pane_vc_g

0xc36d,	// (0x0001ac8d) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc36d,	// (0x0001ac8d) list_double_large_graphic_pane_vc_t1

0xc37f,	// (0x0001ac9f) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc37f,	// (0x0001ac9f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x0001e387) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x0001e387) list_double_large_graphic_pane_vc_t

0xbf63,	// (0x0001a883) list_double_heading_pane_vc_g1_ParamLimits

0xbf63,	// (0x0001a883) list_double_heading_pane_vc_g1

0xbf6f,	// (0x0001a88f) list_double_heading_pane_vc_g2_ParamLimits

0xbf6f,	// (0x0001a88f) list_double_heading_pane_vc_g2

0x0001,

0xf7d3,	// (0x0001e0f3) list_double_heading_pane_vc_g_ParamLimits

0xf7d3,	// (0x0001e0f3) list_double_heading_pane_vc_g

0xc399,	// (0x0001acb9) list_double_heading_pane_vc_t1_ParamLimits

0xc399,	// (0x0001acb9) list_double_heading_pane_vc_t1

0xbfd7,	// (0x0001a8f7) list_double_heading_pane_vc_t2_ParamLimits

0xbfd7,	// (0x0001a8f7) list_double_heading_pane_vc_t2

0x0001,

0xfa6c,	// (0x0001e38c) list_double_heading_pane_vc_t_ParamLimits

0xfa6c,	// (0x0001e38c) list_double_heading_pane_vc_t

0xc3ab,	// (0x0001accb) list_double_graphic_pane_vc_g1_ParamLimits

0xc3ab,	// (0x0001accb) list_double_graphic_pane_vc_g1

0xc3be,	// (0x0001acde) list_double_graphic_pane_vc_g2_ParamLimits

0xc3be,	// (0x0001acde) list_double_graphic_pane_vc_g2

0xbf63,	// (0x0001a883) list_double_graphic_pane_vc_g3_ParamLimits

0xbf63,	// (0x0001a883) list_double_graphic_pane_vc_g3

0x0003,

0xfa71,	// (0x0001e391) list_double_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x0001e391) list_double_graphic_pane_vc_g

0xc3db,	// (0x0001acfb) list_double_graphic_pane_vc_t1_ParamLimits

0xc3db,	// (0x0001acfb) list_double_graphic_pane_vc_t1

0xc3f9,	// (0x0001ad19) list_double_graphic_pane_vc_t2_ParamLimits

0xc3f9,	// (0x0001ad19) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0001e39a) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0001e39a) list_double_graphic_pane_vc_t

0xc800,	// (0x0001b120) aid_size_cell_fastswap

0xc808,	// (0x0001b128) aid_size_cell_touch_ParamLimits

0xc808,	// (0x0001b128) aid_size_cell_touch

0xc94d,	// (0x0001b26d) popup_fast_swap_wide_window_ParamLimits

0xc94d,	// (0x0001b26d) popup_fast_swap_wide_window

0xca13,	// (0x0001b333) touch_pane_ParamLimits

0xca13,	// (0x0001b333) touch_pane

0xbca4,	// (0x0001a5c4) button_value_adjust_pane_cp2

0x6811,	// (0x00015131) button_value_adjust_pane_cp4

0xbcc4,	// (0x0001a5e4) form_field_data_pane_cp2

0xbce3,	// (0x0001a603) form_field_data_wide_pane_cp2

0x3730,	// (0x00012050) bg_scroll_pane_ParamLimits

0xcc3a,	// (0x0001b55a) scroll_handle_pane_ParamLimits

0xcc4e,	// (0x0001b56e) scroll_sc2_down_pane_ParamLimits

0xcc4e,	// (0x0001b56e) scroll_sc2_down_pane

0x3761,	// (0x00012081) scroll_sc2_up_pane_ParamLimits

0x3761,	// (0x00012081) scroll_sc2_up_pane

0x6aa0,	// (0x000153c0) grid_wheel_folder_pane_g1_ParamLimits

0x6aa0,	// (0x000153c0) grid_wheel_folder_pane_g1

0xce02,	// (0x0001b722) clock_nsta_pane_cp2_ParamLimits

0xce02,	// (0x0001b722) clock_nsta_pane_cp2

0x3f28,	// (0x00012848) listscroll_midp_pane_ParamLimits

0x3f34,	// (0x00012854) midp_canvas_pane

0xd049,	// (0x0001b969) nsta_clock_indic_pane

0x4240,	// (0x00012b60) listscroll_form_pane_vc

0x425d,	// (0x00012b7d) listscroll_set_pane_vc_ParamLimits

0x425d,	// (0x00012b7d) listscroll_set_pane_vc

0x4351,	// (0x00012c71) clock_nsta_pane

0x43bb,	// (0x00012cdb) indicator_nsta_pane

0x4682,	// (0x00012fa2) bg_popup_sub_pane_cp2_ParamLimits

0x4696,	// (0x00012fb6) find_pane_cp2_ParamLimits

0x4696,	// (0x00012fb6) find_pane_cp2

0x46a8,	// (0x00012fc8) grid_toobar_pane_ParamLimits

0x4822,	// (0x00013142) list_form_gen_pane_vc_ParamLimits

0x4822,	// (0x00013142) list_form_gen_pane_vc

0x4838,	// (0x00013158) scroll_pane_cp8_vc_ParamLimits

0x4838,	// (0x00013158) scroll_pane_cp8_vc

0x48b4,	// (0x000131d4) data_form_wide_pane_vc_ParamLimits

0x48b4,	// (0x000131d4) data_form_wide_pane_vc

0x48c0,	// (0x000131e0) form_field_data_wide_pane_vc_g1

0x48c8,	// (0x000131e8) form_field_data_wide_pane_vc_t1_ParamLimits

0x48c8,	// (0x000131e8) form_field_data_wide_pane_vc_t1

0x3160,	// (0x00011a80) input_focus_pane_cp6_vc_ParamLimits

0x3160,	// (0x00011a80) input_focus_pane_cp6_vc

0x4bc4,	// (0x000134e4) list_midp_pane_ParamLimits

0x4bd0,	// (0x000134f0) scroll_pane_cp16_ParamLimits

0x4bd0,	// (0x000134f0) scroll_pane_cp16

0x4c2a,	// (0x0001354a) button_value_adjust_pane_ParamLimits

0x4c2a,	// (0x0001354a) button_value_adjust_pane

0x5b04,	// (0x00014424) button_value_adjust_pane_cp6_ParamLimits

0x5b04,	// (0x00014424) button_value_adjust_pane_cp6

0x5c0c,	// (0x0001452c) settings_code_pane_cp_ParamLimits

0x5c0c,	// (0x0001452c) settings_code_pane_cp

0x2289,	// (0x00010ba9) cell_touch_pane_g1

0x2289,	// (0x00010ba9) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001e01e) cell_touch_pane_g

0x61cd,	// (0x00014aed) cell_touch_pane_cp_ParamLimits

0x61cd,	// (0x00014aed) cell_touch_pane_cp

0x61dd,	// (0x00014afd) cell_touch_pane_ParamLimits

0x61dd,	// (0x00014afd) cell_touch_pane

0x2289,	// (0x00010ba9) scroll_sc2_down_pane_g1

0x2289,	// (0x00010ba9) scroll_sc2_up_pane_g1

0x2370,	// (0x00010c90) bg_set_opt_pane_cp4_vc

0x621d,	// (0x00014b3d) list_set_graphic_pane_vc_g1_ParamLimits

0x621d,	// (0x00014b3d) list_set_graphic_pane_vc_g1

0x6229,	// (0x00014b49) list_set_graphic_pane_vc_g2_ParamLimits

0x6229,	// (0x00014b49) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x0001e30e) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001e30e) list_set_graphic_pane_vc_g

0x6235,	// (0x00014b55) text_primary_small_cp13_vc_ParamLimits

0x6235,	// (0x00014b55) text_primary_small_cp13_vc

0x624d,	// (0x00014b6d) list_set_graphic_pane_vc_ParamLimits

0x624d,	// (0x00014b6d) list_set_graphic_pane_vc

0x2370,	// (0x00010c90) input_focus_pane_cp2_vc

0x2289,	// (0x00010ba9) setting_code_pane_vc_g1

0x6260,	// (0x00014b80) setting_code_pane_vc_t1

0x626e,	// (0x00014b8e) set_text_pane_vc_t1_ParamLimits

0x626e,	// (0x00014b8e) set_text_pane_vc_t1

0x2370,	// (0x00010c90) input_focus_pane_cp1_vc

0x6289,	// (0x00014ba9) list_set_text_pane_vc

0x2289,	// (0x00010ba9) setting_text_pane_vc_g1

0x2370,	// (0x00010c90) bg_set_opt_pane_cp2_vc

0x6293,	// (0x00014bb3) setting_slider_graphic_pane_vc_g1

0x629b,	// (0x00014bbb) setting_slider_graphic_pane_vc_t1

0x62a9,	// (0x00014bc9) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x0001e313) setting_slider_graphic_pane_vc_t

0x62b7,	// (0x00014bd7) slider_set_pane_cp_vc

0x62bf,	// (0x00014bdf) slider_set_pane_vc_g1

0x62c8,	// (0x00014be8) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x0001e318) slider_set_pane_vc_g

0x3283,	// (0x00011ba3) set_opt_bg_pane_g1_copy1

0x328b,	// (0x00011bab) set_opt_bg_pane_g2_copy1

0x62f4,	// (0x00014c14) set_opt_bg_pane_g3_copy1

0x329b,	// (0x00011bbb) set_opt_bg_pane_g4_copy1

0x32a3,	// (0x00011bc3) set_opt_bg_pane_g5_copy1

0x32ab,	// (0x00011bcb) set_opt_bg_pane_g6_copy1

0x62fc,	// (0x00014c1c) set_opt_bg_pane_g7_copy1

0x6304,	// (0x00014c24) set_opt_bg_pane_g8_copy1

0x630c,	// (0x00014c2c) set_opt_bg_pane_g9_copy1

0x2370,	// (0x00010c90) bg_set_opt_pane_cp_vc

0x6314,	// (0x00014c34) setting_slider_pane_vc_t1

0x629b,	// (0x00014bbb) setting_slider_pane_vc_t2

0x62a9,	// (0x00014bc9) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x0001e327) setting_slider_pane_vc_t

0x62b7,	// (0x00014bd7) slider_set_pane_vc

0xd60e,	// (0x0001bf2e) volume_set_pane_vc_g1

0xd8f5,	// (0x0001c215) volume_set_pane_vc_g2

0xd8fe,	// (0x0001c21e) volume_set_pane_vc_g3

0xd907,	// (0x0001c227) volume_set_pane_vc_g4

0xd910,	// (0x0001c230) volume_set_pane_vc_g5

0xd919,	// (0x0001c239) volume_set_pane_vc_g6

0xd922,	// (0x0001c242) volume_set_pane_vc_g7

0xd92b,	// (0x0001c24b) volume_set_pane_vc_g8

0xd934,	// (0x0001c254) volume_set_pane_vc_g9

0xd93d,	// (0x0001c25d) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x0001e32e) volume_set_pane_vc_g

0x6323,	// (0x00014c43) volume_set_pane_vc

0x632b,	// (0x00014c4b) button_value_adjust_pane_cp1_vc

0x6335,	// (0x00014c55) list_highlight_pane_cp2_vc

0x633e,	// (0x00014c5e) list_set_pane_vc_ParamLimits

0x633e,	// (0x00014c5e) list_set_pane_vc

0x6390,	// (0x00014cb0) main_pane_set_vc_t1_ParamLimits

0x6390,	// (0x00014cb0) main_pane_set_vc_t1

0x63a5,	// (0x00014cc5) main_pane_set_vc_t2_ParamLimits

0x63a5,	// (0x00014cc5) main_pane_set_vc_t2

0x63b7,	// (0x00014cd7) main_pane_set_vc_t3_ParamLimits

0x63b7,	// (0x00014cd7) main_pane_set_vc_t3

0x63c9,	// (0x00014ce9) main_pane_set_vc_t4_ParamLimits

0x63c9,	// (0x00014ce9) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x0001e343) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x0001e343) main_pane_set_vc_t

0x63db,	// (0x00014cfb) setting_code_pane_vc_ParamLimits

0x63db,	// (0x00014cfb) setting_code_pane_vc

0x63ea,	// (0x00014d0a) setting_slider_graphic_pane_vc

0x63ea,	// (0x00014d0a) setting_slider_pane_vc

0x63ea,	// (0x00014d0a) setting_text_pane_vc

0x63ea,	// (0x00014d0a) setting_volume_pane_vc

0x63f2,	// (0x00014d12) scroll_pane_cp121_vc

0x3087,	// (0x000119a7) set_content_pane_vc

0x6654,	// (0x00014f74) button_value_adjust_pane_g1

0x665d,	// (0x00014f7d) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0001e39f) button_value_adjust_pane_g

0x6666,	// (0x00014f86) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6666,	// (0x00014f86) form_field_slider_wide_pane_vc_t1

0x667c,	// (0x00014f9c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x667c,	// (0x00014f9c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0001e3a4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0001e3a4) form_field_slider_wide_pane_vc_t

0x26e9,	// (0x00011009) input_focus_pane_cp10_vc_ParamLimits

0x26e9,	// (0x00011009) input_focus_pane_cp10_vc

0x66a7,	// (0x00014fc7) slider_cont_pane_cp1_vc_ParamLimits

0x66a7,	// (0x00014fc7) slider_cont_pane_cp1_vc

0x62bf,	// (0x00014bdf) slider_form_pane_g1_cp2

0x62c8,	// (0x00014be8) slider_form_pane_g2_cp2

0x66c2,	// (0x00014fe2) form_field_slider_pane_vc_t3

0x66d0,	// (0x00014ff0) form_field_slider_pane_vc_t4

0x66de,	// (0x00014ffe) slider_form_pane_vc_ParamLimits

0x66de,	// (0x00014ffe) slider_form_pane_vc

0x66eb,	// (0x0001500b) form_field_slider_pane_vc_t1_ParamLimits

0x66eb,	// (0x0001500b) form_field_slider_pane_vc_t1

0x6701,	// (0x00015021) form_field_slider_pane_vc_t2_ParamLimits

0x6701,	// (0x00015021) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0001e3b6) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0001e3b6) form_field_slider_pane_vc_t

0x26e9,	// (0x00011009) input_focus_pane_cp9_vc_ParamLimits

0x26e9,	// (0x00011009) input_focus_pane_cp9_vc

0x6713,	// (0x00015033) slider_cont_pane_vc_ParamLimits

0x6713,	// (0x00015033) slider_cont_pane_vc

0x6725,	// (0x00015045) list_form_graphic_pane_cp_vc_ParamLimits

0x6725,	// (0x00015045) list_form_graphic_pane_cp_vc

0x48c0,	// (0x000131e0) form_field_popup_wide_pane_vc_g1

0x673a,	// (0x0001505a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x673a,	// (0x0001505a) form_field_popup_wide_pane_vc_t1

0x3160,	// (0x00011a80) input_focus_pane_cp8_vc_ParamLimits

0x3160,	// (0x00011a80) input_focus_pane_cp8_vc

0x6779,	// (0x00015099) list_form_wide_pane_vc_ParamLimits

0x6779,	// (0x00015099) list_form_wide_pane_vc

0x6785,	// (0x000150a5) list_form_graphic_pane_vc_g1

0x678d,	// (0x000150ad) list_form_graphic_pane_vc_t1_ParamLimits

0x678d,	// (0x000150ad) list_form_graphic_pane_vc_t1

0x2450,	// (0x00010d70) list_highlight_pane_cp5_vc_ParamLimits

0x2450,	// (0x00010d70) list_highlight_pane_cp5_vc

0x67a9,	// (0x000150c9) list_form_graphic_pane_vc_ParamLimits

0x67a9,	// (0x000150c9) list_form_graphic_pane_vc

0x48c0,	// (0x000131e0) form_field_popup_pane_vc_g1

0x67bf,	// (0x000150df) form_field_popup_pane_vc_t1_ParamLimits

0x67bf,	// (0x000150df) form_field_popup_pane_vc_t1

0x3160,	// (0x00011a80) input_focus_pane_cp7_vc_ParamLimits

0x3160,	// (0x00011a80) input_focus_pane_cp7_vc

0x67d4,	// (0x000150f4) list_form_pane_vc_ParamLimits

0x67d4,	// (0x000150f4) list_form_pane_vc

0x67e0,	// (0x00015100) data_form_pane_vc_t1_ParamLimits

0x67e0,	// (0x00015100) data_form_pane_vc_t1

0x3283,	// (0x00011ba3) input_focus_pane_vc_g1

0x328b,	// (0x00011bab) input_focus_pane_vc_g2

0x3293,	// (0x00011bb3) input_focus_pane_vc_g3

0x329b,	// (0x00011bbb) input_focus_pane_vc_g4

0x32a3,	// (0x00011bc3) input_focus_pane_vc_g5

0x32ab,	// (0x00011bcb) input_focus_pane_vc_g6

0x32b3,	// (0x00011bd3) input_focus_pane_vc_g7

0x32bb,	// (0x00011bdb) input_focus_pane_vc_g8

0x32c3,	// (0x00011be3) input_focus_pane_vc_g9

0x2289,	// (0x00010ba9) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001dfa7) input_focus_pane_vc_g

0x48b4,	// (0x000131d4) data_form_pane_vc_ParamLimits

0x48b4,	// (0x000131d4) data_form_pane_vc

0x48c0,	// (0x000131e0) form_field_data_pane_vc_g1

0x67fb,	// (0x0001511b) form_field_data_pane_vc_t1_ParamLimits

0x67fb,	// (0x0001511b) form_field_data_pane_vc_t1

0x3160,	// (0x00011a80) input_focus_pane_vc_ParamLimits

0x3160,	// (0x00011a80) input_focus_pane_vc

0x3090,	// (0x000119b0) button_value_adjust_pane_cp3_vc

0x6811,	// (0x00015131) button_value_adjust_pane_cp5_vc

0x6819,	// (0x00015139) form_field_data_pane_vc_ParamLimits

0x6819,	// (0x00015139) form_field_data_pane_vc

0x30b8,	// (0x000119d8) form_field_data_pane_vc_cp2

0x6830,	// (0x00015150) form_field_data_wide_pane_vc_ParamLimits

0x6830,	// (0x00015150) form_field_data_wide_pane_vc

0x6846,	// (0x00015166) form_field_data_wide_pane_vc_cp2

0x684e,	// (0x0001516e) form_field_popup_pane_vc_ParamLimits

0x684e,	// (0x0001516e) form_field_popup_pane_vc

0x6865,	// (0x00015185) form_field_popup_wide_pane_vc_ParamLimits

0x6865,	// (0x00015185) form_field_popup_wide_pane_vc

0x687b,	// (0x0001519b) form_field_slider_pane_vc_ParamLimits

0x687b,	// (0x0001519b) form_field_slider_pane_vc

0x688e,	// (0x000151ae) form_field_slider_wide_pane_vc_ParamLimits

0x688e,	// (0x000151ae) form_field_slider_wide_pane_vc

0x68a1,	// (0x000151c1) grid_touch_1_pane_ParamLimits

0x68a1,	// (0x000151c1) grid_touch_1_pane

0x68ad,	// (0x000151cd) grid_touch_2_pane_ParamLimits

0x68ad,	// (0x000151cd) grid_touch_2_pane

0x41d7,	// (0x00012af7) touch_pane_g1_ParamLimits

0x41d7,	// (0x00012af7) touch_pane_g1

0x68c5,	// (0x000151e5) cell_app_pane_cp_wide_ParamLimits

0x68c5,	// (0x000151e5) cell_app_pane_cp_wide

0x68d5,	// (0x000151f5) grid_popup_fast_wide_pane_ParamLimits

0x68d5,	// (0x000151f5) grid_popup_fast_wide_pane

0x68e9,	// (0x00015209) scroll_pane_cp19_ParamLimits

0x68e9,	// (0x00015209) scroll_pane_cp19

0x2370,	// (0x00010c90) bg_popup_window_pane_cp20

0x68fd,	// (0x0001521d) listscroll_popup_fast_wide_pane

0x2450,	// (0x00010d70) grid_indicator_nsta_pane

0x6905,	// (0x00015225) clock_nsta_pane_g1

0x690e,	// (0x0001522e) clock_nsta_pane_t1

0x692a,	// (0x0001524a) cell_indicator_nsta_pane_ParamLimits

0x692a,	// (0x0001524a) cell_indicator_nsta_pane

0x695b,	// (0x0001527b) cell_indicator_nsta_pane_g1

0x6969,	// (0x00015289) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0001e3c7) cell_indicator_nsta_pane_g

0x6976,	// (0x00015296) clock_nsta_pane_cp

0x697e,	// (0x0001529e) indicator_nsta_pane_cp

0x6987,	// (0x000152a7) nsta_clock_indic_pane_g1

0x2530,	// (0x00010e50) grid_indicator_pane

0x3853,	// (0x00012173) scroll_pane_cp29

0xcd59,	// (0x0001b679) indicator_nsta_pane_cp2_ParamLimits

0xcd59,	// (0x0001b679) indicator_nsta_pane_cp2

0x2450,	// (0x00010d70) main_apps_wheel_pane

0x4aab,	// (0x000133cb) form_midp_field_text_pane_ParamLimits

0x4bf0,	// (0x00013510) scroll_bar_cp050_ParamLimits

0x69f0,	// (0x00015310) cell_indicator_pane_ParamLimits

0x69f0,	// (0x00015310) cell_indicator_pane

0x6a06,	// (0x00015326) cell_indicator_pane_g1

0x6a10,	// (0x00015330) grid_wheel_folder_pane_ParamLimits

0x6a10,	// (0x00015330) grid_wheel_folder_pane

0x6a22,	// (0x00015342) list_wheel_apps_pane_ParamLimits

0x6a22,	// (0x00015342) list_wheel_apps_pane

0x6a31,	// (0x00015351) main_apps_wheel_pane_g1_ParamLimits

0x6a31,	// (0x00015351) main_apps_wheel_pane_g1

0x6a45,	// (0x00015365) main_apps_wheel_pane_g2_ParamLimits

0x6a45,	// (0x00015365) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0001e3e3) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0001e3e3) main_apps_wheel_pane_g

0x6a59,	// (0x00015379) main_apps_wheel_pane_t1_ParamLimits

0x6a59,	// (0x00015379) main_apps_wheel_pane_t1

0x6a78,	// (0x00015398) list_wheel_apps_pane_g1

0x6a80,	// (0x000153a0) list_wheel_apps_pane_g2

0x6a88,	// (0x000153a8) list_wheel_apps_pane_g3

0x6a90,	// (0x000153b0) list_wheel_apps_pane_g4

0x6a98,	// (0x000153b8) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0001e3e8) list_wheel_apps_pane_g

0x2450,	// (0x00010d70) navi_icon_text_pane

0x4299,	// (0x00012bb9) aid_fill_nsta

0x6ab7,	// (0x000153d7) navi_icon_text_pane_g1

0x6ac3,	// (0x000153e3) navi_icon_text_pane_t1

0x3c92,	// (0x000125b2) list_set_graphic_pane_t1_ParamLimits

0x3c92,	// (0x000125b2) list_set_graphic_pane_t1

0x530a,	// (0x00013c2a) popup_midp_note_alarm_window_t6_ParamLimits

0x530a,	// (0x00013c2a) popup_midp_note_alarm_window_t6

0x531c,	// (0x00013c3c) popup_midp_note_alarm_window_t7_ParamLimits

0x531c,	// (0x00013c3c) popup_midp_note_alarm_window_t7

0x532e,	// (0x00013c4e) popup_midp_note_alarm_window_t8_ParamLimits

0x532e,	// (0x00013c4e) popup_midp_note_alarm_window_t8

0x5340,	// (0x00013c60) popup_midp_note_alarm_window_t9_ParamLimits

0x5340,	// (0x00013c60) popup_midp_note_alarm_window_t9

0x5352,	// (0x00013c72) popup_midp_note_alarm_window_t10_ParamLimits

0x5352,	// (0x00013c72) popup_midp_note_alarm_window_t10

0x5364,	// (0x00013c84) popup_midp_note_alarm_window_t11_ParamLimits

0x5364,	// (0x00013c84) popup_midp_note_alarm_window_t11

0x5376,	// (0x00013c96) scroll_pane_cp17_ParamLimits

0x5376,	// (0x00013c96) scroll_pane_cp17

0xd60e,	// (0x0001bf2e) volume_small_pane_cp_g1

0xd946,	// (0x0001c266) volume_small_pane_cp_g2

0xd94f,	// (0x0001c26f) volume_small_pane_cp_g3

0xd958,	// (0x0001c278) volume_small_pane_cp_g4

0xd63b,	// (0x0001bf5b) volume_small_pane_cp_g5

0xd961,	// (0x0001c281) volume_small_pane_cp_g6

0xd96a,	// (0x0001c28a) volume_small_pane_cp_g7

0xd973,	// (0x0001c293) volume_small_pane_cp_g8

0xd97c,	// (0x0001c29c) volume_small_pane_cp_g9

0xd985,	// (0x0001c2a5) volume_small_pane_cp_g10

0x3ff1,	// (0x00012911) midp_ticker_pane_g1_ParamLimits

0x3ffd,	// (0x0001291d) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001e073) midp_ticker_pane_g_ParamLimits

0x4009,	// (0x00012929) midp_ticker_pane_t1_ParamLimits

0x42a9,	// (0x00012bc9) aid_fill_nsta_2

0x4bdc,	// (0x000134fc) list_form2_midp_pane

0x5c8b,	// (0x000145ab) midp_editing_number_pane_ParamLimits

0x5c97,	// (0x000145b7) midp_ticker_pane_ParamLimits

0x6ad5,	// (0x000153f5) form2_midp_field_pane

0x6af9,	// (0x00015419) scroll_pane_cp51

0x6b19,	// (0x00015439) form2_midp_button_pane_ParamLimits

0x6b19,	// (0x00015439) form2_midp_button_pane

0x6b2b,	// (0x0001544b) form2_midp_content_pane_ParamLimits

0x6b2b,	// (0x0001544b) form2_midp_content_pane

0x6b45,	// (0x00015465) form2_midp_field_choice_group_pane

0x6b4d,	// (0x0001546d) form2_midp_field_pane_g1

0x6b55,	// (0x00015475) form2_midp_field_pane_g2

0x6b5d,	// (0x0001547d) form2_midp_field_pane_g3

0x6b65,	// (0x00015485) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0001e40d) form2_midp_field_pane_g

0x6b6d,	// (0x0001548d) form2_midp_gauge_slider_pane

0x6b75,	// (0x00015495) form2_midp_gauge_wait_pane

0x6b7d,	// (0x0001549d) form2_midp_image_pane_ParamLimits

0x6b7d,	// (0x0001549d) form2_midp_image_pane

0x6b98,	// (0x000154b8) form2_midp_label_pane_ParamLimits

0x6b98,	// (0x000154b8) form2_midp_label_pane

0x6bb1,	// (0x000154d1) form2_midp_label_pane_cp_ParamLimits

0x6bb1,	// (0x000154d1) form2_midp_label_pane_cp

0x6bd0,	// (0x000154f0) form2_midp_string_pane_ParamLimits

0x6bd0,	// (0x000154f0) form2_midp_string_pane

0xc417,	// (0x0001ad37) form2_midp_text_pane_ParamLimits

0xc417,	// (0x0001ad37) form2_midp_text_pane

0x6bfb,	// (0x0001551b) form2_midp_time_pane

0x6c0b,	// (0x0001552b) input_focus_pane_cp51_ParamLimits

0x6c0b,	// (0x0001552b) input_focus_pane_cp51

0x6c23,	// (0x00015543) form2_midp_label_pane_t1_ParamLimits

0x6c23,	// (0x00015543) form2_midp_label_pane_t1

0xc430,	// (0x0001ad50) form2_mdip_text_pane_t1_ParamLimits

0xc430,	// (0x0001ad50) form2_mdip_text_pane_t1

0xc44b,	// (0x0001ad6b) form2_midp_time_pane_t1

0x6c7e,	// (0x0001559e) form2_midp_gauge_slider_pane_t1

0x6c90,	// (0x000155b0) form2_midp_gauge_slider_pane_t2

0x6ca2,	// (0x000155c2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0001e416) form2_midp_gauge_slider_pane_t

0x6cb4,	// (0x000155d4) form2_midp_slider_pane

0x6cc0,	// (0x000155e0) form2_midp_gauge_wait_pane_t1

0x6cce,	// (0x000155ee) form2_midp_wait_pane_ParamLimits

0x6cce,	// (0x000155ee) form2_midp_wait_pane

0x48fe,	// (0x0001321e) list_single_2graphic_pane_cp4_ParamLimits

0x48fe,	// (0x0001321e) list_single_2graphic_pane_cp4

0x6cf9,	// (0x00015619) list_single_midp_graphic_pane_cp_ParamLimits

0x6cf9,	// (0x00015619) list_single_midp_graphic_pane_cp

0x2370,	// (0x00010c90) list_highlight_pane_cp20

0x6d17,	// (0x00015637) list_single_2graphic_pane_g1_cp4

0x5dfb,	// (0x0001471b) list_single_2graphic_pane_g2_cp4

0x6d1f,	// (0x0001563f) list_single_2graphic_pane_t1_cp4

0x2450,	// (0x00010d70) list_highlight_pane_cp21

0x6d2e,	// (0x0001564e) list_single_midp_graphic_pane_g4_cp

0x6d3d,	// (0x0001565d) list_single_midp_graphic_pane_t1_cp

0x6d52,	// (0x00015672) form2_mdip_string_pane_t1_ParamLimits

0x6d52,	// (0x00015672) form2_mdip_string_pane_t1

0x2370,	// (0x00010c90) bg_wml_button_pane_cp2

0x2289,	// (0x00010ba9) form2_midp_image_pane_g1

0xba7b,	// (0x0001a39b) list_double_large_graphic_pane_g5_ParamLimits

0xba7b,	// (0x0001a39b) list_double_large_graphic_pane_g5

0x3f28,	// (0x00012848) midp_form_pane_ParamLimits

0x2450,	// (0x00010d70) main_apps_wheel_pane_ParamLimits

0xd337,	// (0x0001bc57) popup_preview_window_ParamLimits

0xd337,	// (0x0001bc57) popup_preview_window

0xd4b2,	// (0x0001bdd2) popup_touch_info_window_ParamLimits

0xd4b2,	// (0x0001bdd2) popup_touch_info_window

0xd4d0,	// (0x0001bdf0) popup_touch_menu_window_ParamLimits

0xd4d0,	// (0x0001bdf0) popup_touch_menu_window

0x227f,	// (0x00010b9f) bg_popup_sub_pane_cp6

0x6dbc,	// (0x000156dc) list_touch_menu_pane

0x6dc4,	// (0x000156e4) list_single_touch_menu_pane_ParamLimits

0x6dc4,	// (0x000156e4) list_single_touch_menu_pane

0x6ddb,	// (0x000156fb) list_single_touch_menu_pane_t1

0x2450,	// (0x00010d70) bg_popup_sub_pane_cp7_ParamLimits

0x2450,	// (0x00010d70) bg_popup_sub_pane_cp7

0x6de9,	// (0x00015709) heading_sub_pane

0x6df1,	// (0x00015711) list_touch_info_pane_ParamLimits

0x6df1,	// (0x00015711) list_touch_info_pane

0x6e00,	// (0x00015720) list_single_touch_info_pane_ParamLimits

0x6e00,	// (0x00015720) list_single_touch_info_pane

0x6e11,	// (0x00015731) list_single_touch_info_pane_t1

0x6e1f,	// (0x0001573f) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0001e424) list_single_touch_info_pane_t

0x3f20,	// (0x00012840) bg_popup_heading_pane_cp

0x6e2d,	// (0x0001574d) heading_sub_pane_t1

0x484e,	// (0x0001316e) bg_popup_preview_window_pane_cp_ParamLimits

0x484e,	// (0x0001316e) bg_popup_preview_window_pane_cp

0x6de9,	// (0x00015709) heading_preview_pane

0x6df1,	// (0x00015711) list_preview_pane_ParamLimits

0x6df1,	// (0x00015711) list_preview_pane

0x6e3b,	// (0x0001575b) popup_preview_window_g1

0x6e00,	// (0x00015720) list_single_preview_pane_ParamLimits

0x6e00,	// (0x00015720) list_single_preview_pane

0x6e43,	// (0x00015763) list_single_preview_pane_g1

0x6e4b,	// (0x0001576b) list_single_preview_pane_t1

0x6e11,	// (0x00015731) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0001e429) list_single_preview_pane_t

0x6e59,	// (0x00015779) bg_popup_heading_pane_cp2_ParamLimits

0x6e59,	// (0x00015779) bg_popup_heading_pane_cp2

0x6e6f,	// (0x0001578f) heading_preview_pane_g1

0x6e77,	// (0x00015797) heading_preview_pane_t1_ParamLimits

0x6e77,	// (0x00015797) heading_preview_pane_t1

0x2553,	// (0x00010e73) soft_indicator_pane_t1_ParamLimits

0x2bb6,	// (0x000114d6) scroll_pane_ParamLimits

0x3758,	// (0x00012078) scroll_sc2_left_pane

0x374f,	// (0x0001206f) scroll_sc2_right_pane

0x3777,	// (0x00012097) scroll_bg_pane_g1_ParamLimits

0x378c,	// (0x000120ac) scroll_bg_pane_g2_ParamLimits

0x37a4,	// (0x000120c4) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001dffe) scroll_bg_pane_g_ParamLimits

0x3777,	// (0x00012097) scroll_handle_pane_g1_ParamLimits

0x37c6,	// (0x000120e6) scroll_handle_pane_g2_ParamLimits

0x37a4,	// (0x000120c4) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001e005) scroll_handle_pane_g_ParamLimits

0xd07f,	// (0x0001b99f) popup_choice_list_window_ParamLimits

0xd07f,	// (0x0001b99f) popup_choice_list_window

0x468e,	// (0x00012fae) choice_list_pane

0x4704,	// (0x00013024) cell_toolbar_pane_t1

0x472c,	// (0x0001304c) toolbar_button_pane_ParamLimits

0x57ff,	// (0x0001411f) ai_gene_pane_1_t2_ParamLimits

0x57ff,	// (0x0001411f) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0001e226) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0001e226) ai_gene_pane_1_t

0x6e94,	// (0x000157b4) scroll_sc2_left_pane_g1

0x6e94,	// (0x000157b4) scroll_sc2_right_pane_g1

0x426f,	// (0x00012b8f) bg_popup_sub_pane_cp10

0x6e9e,	// (0x000157be) list_choice_list_pane

0x6eb5,	// (0x000157d5) list_single_choice_list_pane_ParamLimits

0x6eb5,	// (0x000157d5) list_single_choice_list_pane

0x6ec7,	// (0x000157e7) list_single_choice_list_pane_g1

0x3446,	// (0x00011d66) list_single_choice_list_pane_t1_ParamLimits

0x3446,	// (0x00011d66) list_single_choice_list_pane_t1

0x6ecf,	// (0x000157ef) choice_list_pane_g1

0x6ed7,	// (0x000157f7) choice_list_pane_t1

0x227f,	// (0x00010b9f) input_focus_pane_cp11

0x362a,	// (0x00011f4a) title_pane_stacon_g2_ParamLimits

0x362a,	// (0x00011f4a) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001dfe4) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001dfe4) title_pane_stacon_g

0x3f20,	// (0x00012840) cursor_press_pane

0xd11b,	// (0x0001ba3b) popup_fep_hwr_window_ParamLimits

0xd11b,	// (0x0001ba3b) popup_fep_hwr_window

0xd177,	// (0x0001ba97) popup_fep_vkb_window_ParamLimits

0xd177,	// (0x0001ba97) popup_fep_vkb_window

0x6ee5,	// (0x00015805) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0001e452) fep_vkb_side_pane_g_ParamLimits

0xd9c3,	// (0x0001c2e3) fep_hwr_candidate_pane_ParamLimits

0xd9c3,	// (0x0001c2e3) fep_hwr_candidate_pane

0xd9eb,	// (0x0001c30b) fep_hwr_side_pane_ParamLimits

0xd9eb,	// (0x0001c30b) fep_hwr_side_pane

0xda0b,	// (0x0001c32b) fep_hwr_top_pane_ParamLimits

0xda0b,	// (0x0001c32b) fep_hwr_top_pane

0xda23,	// (0x0001c343) fep_hwr_write_pane_ParamLimits

0xda23,	// (0x0001c343) fep_hwr_write_pane

0xfb32,	// (0x0001e452) fep_vkb_side_pane_g

0x6eff,	// (0x0001581f) fep_hwr_top_pane_g1

0x6eed,	// (0x0001580d) fep_hwr_top_pane_g2

0xda4f,	// (0x0001c36f) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0001e42e) fep_hwr_top_pane_g

0xda64,	// (0x0001c384) fep_hwr_top_text_pane

0x391b,	// (0x0001223b) fep_hwr_top_text_pane_g1

0x6f35,	// (0x00015855) fep_hwr_top_text_pane_t1

0xdb52,	// (0x0001c472) fep_hwr_candidate_pane_g1

0x7145,	// (0x00015a65) fep_vkb_keypad_pane_g3_ParamLimits

0x7145,	// (0x00015a65) fep_vkb_keypad_pane_g3

0x7167,	// (0x00015a87) fep_vkb_keypad_pane_g4_ParamLimits

0x7167,	// (0x00015a87) fep_vkb_keypad_pane_g4

0x71d6,	// (0x00015af6) fep_vkb_bottom_pane_g2_ParamLimits

0x71d6,	// (0x00015af6) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0001e459) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0001e459) fep_vkb_bottom_pane_g

0x6e94,	// (0x000157b4) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0001e463) cell_vkb_side_pane_g

0x7261,	// (0x00015b81) cell_vkb_side_pane_t1

0x726f,	// (0x00015b8f) cell_vkb_side_pane_t1_copy1

0x6e94,	// (0x000157b4) bg_fep_vkb_candidate_pane_g2

0x7393,	// (0x00015cb3) cell_vkb_candidate_pane_ParamLimits

0x6f43,	// (0x00015863) aid_size_cell_vkb_ParamLimits

0x6f43,	// (0x00015863) aid_size_cell_vkb

0x7393,	// (0x00015cb3) cell_vkb_candidate_pane

0xdb6c,	// (0x0001c48c) bg_popup_fep_shadow_pane_g1

0x6fb9,	// (0x000158d9) fep_vkb_bottom_pane_ParamLimits

0x6fb9,	// (0x000158d9) fep_vkb_bottom_pane

0x6ff6,	// (0x00015916) fep_vkb_candidate_pane_ParamLimits

0x6ff6,	// (0x00015916) fep_vkb_candidate_pane

0x7012,	// (0x00015932) fep_vkb_keypad_pane_ParamLimits

0x7012,	// (0x00015932) fep_vkb_keypad_pane

0x7046,	// (0x00015966) fep_vkb_side_pane_ParamLimits

0x7046,	// (0x00015966) fep_vkb_side_pane

0x7072,	// (0x00015992) fep_vkb_top_pane_ParamLimits

0x7072,	// (0x00015992) fep_vkb_top_pane

0x709e,	// (0x000159be) fep_vkb_top_pane_g1_ParamLimits

0x709e,	// (0x000159be) fep_vkb_top_pane_g1

0x70ad,	// (0x000159cd) fep_vkb_top_pane_g2_ParamLimits

0x70ad,	// (0x000159cd) fep_vkb_top_pane_g2

0x70bc,	// (0x000159dc) fep_vkb_top_pane_g3_ParamLimits

0x70bc,	// (0x000159dc) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0001e449) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0001e449) fep_vkb_top_pane_g

0x70da,	// (0x000159fa) fep_vkb_top_text_pane_ParamLimits

0x70da,	// (0x000159fa) fep_vkb_top_text_pane

0x70eb,	// (0x00015a0b) fep_vkb_side_pane_g1_ParamLimits

0x70eb,	// (0x00015a0b) fep_vkb_side_pane_g1

0x7134,	// (0x00015a54) grid_vkb_side_pane_ParamLimits

0x7134,	// (0x00015a54) grid_vkb_side_pane

0xdb74,	// (0x0001c494) bg_popup_fep_shadow_pane_g2

0xdb7d,	// (0x0001c49d) bg_popup_fep_shadow_pane_g3

0xdb85,	// (0x0001c4a5) bg_popup_fep_shadow_pane_g4

0xdb8e,	// (0x0001c4ae) bg_popup_fep_shadow_pane_g5

0xdb96,	// (0x0001c4b6) bg_popup_fep_shadow_pane_g6

0xdb9e,	// (0x0001c4be) bg_popup_fep_shadow_pane_g7

0x32a3,	// (0x00011bc3) bg_popup_fep_shadow_pane_g8

0x7185,	// (0x00015aa5) grid_vkb_keypad_number_pane_ParamLimits

0x7185,	// (0x00015aa5) grid_vkb_keypad_number_pane

0x7195,	// (0x00015ab5) grid_vkb_keypad_pane_ParamLimits

0x7195,	// (0x00015ab5) grid_vkb_keypad_pane

0x71bb,	// (0x00015adb) fep_vkb_bottom_pane_g1_ParamLimits

0x71bb,	// (0x00015adb) fep_vkb_bottom_pane_g1

0x71e4,	// (0x00015b04) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x71e4,	// (0x00015b04) grid_vkb_keypad_bottom_left_pane

0x71f9,	// (0x00015b19) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x71f9,	// (0x00015b19) grid_vkb_keypad_bottom_right_pane

0x720e,	// (0x00015b2e) fep_vkb_top_text_pane_g1

0x7229,	// (0x00015b49) fep_vkb_top_text_pane_t1

0x723e,	// (0x00015b5e) cell_vkb_side_pane_ParamLimits

0x723e,	// (0x00015b5e) cell_vkb_side_pane

0x6e94,	// (0x000157b4) cell_vkb_side_pane_g1

0x727d,	// (0x00015b9d) cell_vkb_keypad_pane_ParamLimits

0x727d,	// (0x00015b9d) cell_vkb_keypad_pane

0x72ea,	// (0x00015c0a) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0001e476) bg_popup_fep_shadow_pane_g

0x6e94,	// (0x000157b4) cell_hwr_side_pane_g1

0x6e94,	// (0x000157b4) cell_hwr_side_pane_g2

0x72f4,	// (0x00015c14) cell_vkb_keypad_pane_t1

0x7302,	// (0x00015c22) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x7302,	// (0x00015c22) cell_vkb_keypad_bottom_left_pane

0x731f,	// (0x00015c3f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x731f,	// (0x00015c3f) cell_vkb_keypad_bottom_right_pane

0x6e94,	// (0x000157b4) cell_vkb_keypad_bottom_left_pane_g1

0x6e94,	// (0x000157b4) cell_vkb_keypad_bottom_right_pane_g1

0x7358,	// (0x00015c78) cell_vkb_keypad_number_pane_ParamLimits

0x7358,	// (0x00015c78) cell_vkb_keypad_number_pane

0x7377,	// (0x00015c97) cell_vkb_keypad_number_pane_g1

0x7381,	// (0x00015ca1) cell_vkb_keypad_number_pane_g2

0x738a,	// (0x00015caa) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0001e468) cell_vkb_keypad_number_pane_g

0x72f4,	// (0x00015c14) cell_vkb_keypad_number_pane_t1

0x73ac,	// (0x00015ccc) fep_vkb_candidate_pane_g1

0x0001,

0xfb43,	// (0x0001e463) cell_hwr_side_pane_g

0x73c5,	// (0x00015ce5) cell_hwr_side_pane_t1

0xdbae,	// (0x0001c4ce) cell_hwr_side_pane_t1_copy1

0x70cc,	// (0x000159ec) cell_hwr_candidate_pane_g1

0xdbbc,	// (0x0001c4dc) cell_hwr_candidate_pane_t1

0x6e94,	// (0x000157b4) cell_vkb_candidate_pane_g2

0x7409,	// (0x00015d29) cell_vkb_candidate_pane_t1

0xd98e,	// (0x0001c2ae) bg_popup_fep_shadow_pane_ParamLimits

0xd98e,	// (0x0001c2ae) bg_popup_fep_shadow_pane

0xa3bd,	// (0x00018cdd) bg_fep_hwr_top_pane_g4

0x6f11,	// (0x00015831) bg_hwr_side_pane_g1_ParamLimits

0x6f11,	// (0x00015831) bg_hwr_side_pane_g1

0xdaa0,	// (0x0001c3c0) cell_hwr_side_pane_ParamLimits

0xdaa0,	// (0x0001c3c0) cell_hwr_side_pane

0xdadb,	// (0x0001c3fb) fep_hwr_write_pane_g1_ParamLimits

0xdadb,	// (0x0001c3fb) fep_hwr_write_pane_g1

0xdae8,	// (0x0001c408) fep_hwr_write_pane_g2_ParamLimits

0xdae8,	// (0x0001c408) fep_hwr_write_pane_g2

0xdaf5,	// (0x0001c415) fep_hwr_write_pane_g3_ParamLimits

0xdaf5,	// (0x0001c415) fep_hwr_write_pane_g3

0xdb03,	// (0x0001c423) fep_hwr_write_pane_g4_ParamLimits

0xdb03,	// (0x0001c423) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0001e435) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0001e435) fep_hwr_write_pane_g

0xa3bd,	// (0x00018cdd) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa3bd,	// (0x00018cdd) bg_fep_hwr_candidate_pane_g2

0xdb18,	// (0x0001c438) cell_hwr_candidate_pane_ParamLimits

0xdb18,	// (0x0001c438) cell_hwr_candidate_pane

0xdb52,	// (0x0001c472) fep_hwr_candidate_pane_g1_ParamLimits

0x6f71,	// (0x00015891) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6f71,	// (0x00015891) bg_popup_fep_shadow_pane_cp2

0x70cc,	// (0x000159ec) fep_vkb_top_pane_g4_ParamLimits

0x70cc,	// (0x000159ec) fep_vkb_top_pane_g4

0x7112,	// (0x00015a32) fep_vkb_side_pane_g2_ParamLimits

0x7112,	// (0x00015a32) fep_vkb_side_pane_g2

0xbbdd,	// (0x0001a4fd) list_setting_pane_t4_ParamLimits

0xbbdd,	// (0x0001a4fd) list_setting_pane_t4

0xbc6b,	// (0x0001a58b) list_setting_number_pane_t5_ParamLimits

0xbc6b,	// (0x0001a58b) list_setting_number_pane_t5

0x3952,	// (0x00012272) list_double_heading_pane_cp2_ParamLimits

0x3952,	// (0x00012272) list_double_heading_pane_cp2

0x3d95,	// (0x000126b5) list_double_heading_pane_g1_cp2_ParamLimits

0x3d95,	// (0x000126b5) list_double_heading_pane_g1_cp2

0x7417,	// (0x00015d37) list_double_heading_pane_g2_cp2_ParamLimits

0x7417,	// (0x00015d37) list_double_heading_pane_g2_cp2

0x742b,	// (0x00015d4b) list_double_heading_pane_t1_cp2_ParamLimits

0x742b,	// (0x00015d4b) list_double_heading_pane_t1_cp2

0x7441,	// (0x00015d61) list_double_heading_pane_t2_cp2_ParamLimits

0x7441,	// (0x00015d61) list_double_heading_pane_t2_cp2

0x2269,	// (0x00010b89) aid_value_unit2

0xc989,	// (0x0001b2a9) popup_preview_fixed_window

0x26f7,	// (0x00011017) bg_popup_preview_window_pane_cp02

0x7453,	// (0x00015d73) list_preview_fixed_pane

0x7499,	// (0x00015db9) list_empty_pane_fp_ParamLimits

0x7499,	// (0x00015db9) list_empty_pane_fp

0x7499,	// (0x00015db9) list_single_cale_day_pane_fp_ParamLimits

0x7499,	// (0x00015db9) list_single_cale_day_pane_fp

0x7499,	// (0x00015db9) list_single_graphic_heading_pane_fp_ParamLimits

0x7499,	// (0x00015db9) list_single_graphic_heading_pane_fp

0x7499,	// (0x00015db9) list_single_graphic_pane_fp_ParamLimits

0x7499,	// (0x00015db9) list_single_graphic_pane_fp

0x7499,	// (0x00015db9) list_single_heading_pane_fp_ParamLimits

0x7499,	// (0x00015db9) list_single_heading_pane_fp

0x7499,	// (0x00015db9) list_single_pane_fp_ParamLimits

0x7499,	// (0x00015db9) list_single_pane_fp

0x74ad,	// (0x00015dcd) list_single_pane_fp_g1_ParamLimits

0x74ad,	// (0x00015dcd) list_single_pane_fp_g1

0xbb9c,	// (0x0001a4bc) list_single_pane_fp_g2_ParamLimits

0xbb9c,	// (0x0001a4bc) list_single_pane_fp_g2

0xc45e,	// (0x0001ad7e) list_single_pane_fp_g3_ParamLimits

0xc45e,	// (0x0001ad7e) list_single_pane_fp_g3

0x74cd,	// (0x00015ded) list_single_pane_fp_g4_ParamLimits

0x74cd,	// (0x00015ded) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x0001e497) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x0001e497) list_single_pane_fp_g

0xc472,	// (0x0001ad92) list_single_pane_fp_t1_ParamLimits

0xc472,	// (0x0001ad92) list_single_pane_fp_t1

0xc489,	// (0x0001ada9) list_single_graphic_pane_fp_g1_ParamLimits

0xc489,	// (0x0001ada9) list_single_graphic_pane_fp_g1

0x74ad,	// (0x00015dcd) list_single_graphic_pane_fp_g2_ParamLimits

0x74ad,	// (0x00015dcd) list_single_graphic_pane_fp_g2

0xbb9c,	// (0x0001a4bc) list_single_graphic_pane_fp_g3_ParamLimits

0xbb9c,	// (0x0001a4bc) list_single_graphic_pane_fp_g3

0xc45e,	// (0x0001ad7e) list_single_graphic_pane_fp_g4_ParamLimits

0xc45e,	// (0x0001ad7e) list_single_graphic_pane_fp_g4

0x74cd,	// (0x00015ded) list_single_graphic_pane_fp_g5_ParamLimits

0x74cd,	// (0x00015ded) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x0001e4a0) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x0001e4a0) list_single_graphic_pane_fp_g

0xc495,	// (0x0001adb5) list_single_graphic_pane_fp_t1_ParamLimits

0xc495,	// (0x0001adb5) list_single_graphic_pane_fp_t1

0xc489,	// (0x0001ada9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc489,	// (0x0001ada9) list_single_graphic_heading_pane_fp_g1

0x74ad,	// (0x00015dcd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x74ad,	// (0x00015dcd) list_single_graphic_heading_pane_fp_g2

0xbb9c,	// (0x0001a4bc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbb9c,	// (0x0001a4bc) list_single_graphic_heading_pane_fp_g3

0xc45e,	// (0x0001ad7e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc45e,	// (0x0001ad7e) list_single_graphic_heading_pane_fp_g4

0x74cd,	// (0x00015ded) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x74cd,	// (0x00015ded) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0001e4a0) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0001e4a0) list_single_graphic_heading_pane_fp_g

0xc4ab,	// (0x0001adcb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc4ab,	// (0x0001adcb) list_single_graphic_heading_pane_fp_t1

0xc4c1,	// (0x0001ade1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc4c1,	// (0x0001ade1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0001e4ab) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0001e4ab) list_single_graphic_heading_pane_fp_t

0xc4d3,	// (0x0001adf3) list_single_cale_day_pane_fp_g1_ParamLimits

0xc4d3,	// (0x0001adf3) list_single_cale_day_pane_fp_g1

0x75b4,	// (0x00015ed4) list_single_cale_day_pane_fp_g2_ParamLimits

0x75b4,	// (0x00015ed4) list_single_cale_day_pane_fp_g2

0xc50b,	// (0x0001ae2b) list_single_cale_day_pane_fp_g3_ParamLimits

0xc50b,	// (0x0001ae2b) list_single_cale_day_pane_fp_g3

0xc533,	// (0x0001ae53) list_single_cale_day_pane_fp_g4_ParamLimits

0xc533,	// (0x0001ae53) list_single_cale_day_pane_fp_g4

0xc557,	// (0x0001ae77) list_single_cale_day_pane_fp_g5_ParamLimits

0xc557,	// (0x0001ae77) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x0001e4b0) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x0001e4b0) list_single_cale_day_pane_fp_g

0xc57b,	// (0x0001ae9b) list_single_cale_day_pane_fp_t1_ParamLimits

0xc57b,	// (0x0001ae9b) list_single_cale_day_pane_fp_t1

0xc5a1,	// (0x0001aec1) list_single_cale_day_pane_fp_t2_ParamLimits

0xc5a1,	// (0x0001aec1) list_single_cale_day_pane_fp_t2

0xc5ba,	// (0x0001aeda) list_single_cale_day_pane_fp_t3_ParamLimits

0xc5ba,	// (0x0001aeda) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x0001e4bb) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x0001e4bb) list_single_cale_day_pane_fp_t

0x74ad,	// (0x00015dcd) list_empty_pane_fp_g1_ParamLimits

0x74ad,	// (0x00015dcd) list_empty_pane_fp_g1

0xc5d3,	// (0x0001aef3) list_empty_pane_fp_t1

0xc5e1,	// (0x0001af01) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x0001e4c2) list_empty_pane_fp_t

0x74ad,	// (0x00015dcd) list_single_heading_pane_fp_g1_ParamLimits

0x74ad,	// (0x00015dcd) list_single_heading_pane_fp_g1

0xbb9c,	// (0x0001a4bc) list_single_heading_pane_fp_g2_ParamLimits

0xbb9c,	// (0x0001a4bc) list_single_heading_pane_fp_g2

0xc45e,	// (0x0001ad7e) list_single_heading_pane_fp_g3_ParamLimits

0xc45e,	// (0x0001ad7e) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x0001e4c7) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0001e4c7) list_single_heading_pane_fp_g

0xc5ef,	// (0x0001af0f) list_single_heading_pane_fp_t1_ParamLimits

0xc5ef,	// (0x0001af0f) list_single_heading_pane_fp_t1

0xc601,	// (0x0001af21) list_single_heading_pane_fp_t2_ParamLimits

0xc601,	// (0x0001af21) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x0001e4ce) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x0001e4ce) list_single_heading_pane_fp_t

0x34b4,	// (0x00011dd4) aid_size_cell_fast

0x265e,	// (0x00010f7e) soft_indicator_pane_cp1_t1

0x34f1,	// (0x00011e11) cell_app_pane_cp2_ParamLimits

0x34f1,	// (0x00011e11) cell_app_pane_cp2

0xd9b0,	// (0x0001c2d0) fep_hwr_candidate_drop_down_list_pane

0xa510,	// (0x00018e30) fep_hwr_candidate_pane_g3_ParamLimits

0xa510,	// (0x00018e30) fep_hwr_candidate_pane_g3

0xa51d,	// (0x00018e3d) fep_hwr_candidate_pane_g4_ParamLimits

0xa51d,	// (0x00018e3d) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0001e442) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0001e442) fep_hwr_candidate_pane_g

0x6fe5,	// (0x00015905) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6fe5,	// (0x00015905) fep_vkb_candidate_drop_down_list_pane

0x73b4,	// (0x00015cd4) fep_vkb_candidate_pane_g3

0x73bc,	// (0x00015cdc) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0001e46f) fep_vkb_candidate_pane_g

0x70cc,	// (0x000159ec) cell_hwr_candidate_pane_g1_ParamLimits

0x753a,	// (0x00015e5a) cell_hwr_candidate_pane_g3_ParamLimits

0x753a,	// (0x00015e5a) cell_hwr_candidate_pane_g3

0x755b,	// (0x00015e7b) cell_hwr_candidate_pane_g4_ParamLimits

0x755b,	// (0x00015e7b) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x0001e489) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x0001e489) cell_hwr_candidate_pane_g

0x73d3,	// (0x00015cf3) cell_vkb_candidate_pane_g3_ParamLimits

0x73d3,	// (0x00015cf3) cell_vkb_candidate_pane_g3

0x73ee,	// (0x00015d0e) cell_vkb_candidate_pane_g4_ParamLimits

0x73ee,	// (0x00015d0e) cell_vkb_candidate_pane_g4

0x76cc,	// (0x00015fec) cell_app_pane_cp2_g1_ParamLimits

0x76cc,	// (0x00015fec) cell_app_pane_cp2_g1

0x76ea,	// (0x0001600a) cell_app_pane_cp2_g2_ParamLimits

0x76ea,	// (0x0001600a) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x0001e4d3) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x0001e4d3) cell_app_pane_cp2_g

0x76f6,	// (0x00016016) cell_app_pane_cp2_t1_ParamLimits

0x76f6,	// (0x00016016) cell_app_pane_cp2_t1

0x3160,	// (0x00011a80) grid_highlight_pane_cp1_ParamLimits

0x3160,	// (0x00011a80) grid_highlight_pane_cp1

0xdbd9,	// (0x0001c4f9) cell_hwr_candidate_pane_cp1_ParamLimits

0xdbd9,	// (0x0001c4f9) cell_hwr_candidate_pane_cp1

0x70cc,	// (0x000159ec) fep_hwr_candidate_drop_down_list_pane_g1

0x7708,	// (0x00016028) fep_hwr_candidate_drop_down_list_pane_g2

0x7715,	// (0x00016035) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0001e4d8) fep_hwr_candidate_drop_down_list_pane_g

0xdbf7,	// (0x0001c517) fep_hwr_candidate_drop_down_list_scroll_pane

0xdc00,	// (0x0001c520) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xdc00,	// (0x0001c520) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xdc0d,	// (0x0001c52d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xdc0d,	// (0x0001c52d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xdc1a,	// (0x0001c53a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xdc1a,	// (0x0001c53a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x73d3,	// (0x00015cf3) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x73d3,	// (0x00015cf3) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x73ee,	// (0x00015d0e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x73ee,	// (0x00015d0e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xdc27,	// (0x0001c547) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xdc27,	// (0x0001c547) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xdc42,	// (0x0001c562) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xdc42,	// (0x0001c562) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xdc5d,	// (0x0001c57d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xdc5d,	// (0x0001c57d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0001e4df) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0001e4df) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7722,	// (0x00016042) cell_vkb_candidate_pane_cp1_ParamLimits

0x7722,	// (0x00016042) cell_vkb_candidate_pane_cp1

0x70cc,	// (0x000159ec) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x70cc,	// (0x000159ec) fep_vkb_candidate_drop_down_list_pane_g1

0x7708,	// (0x00016028) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7708,	// (0x00016028) fep_vkb_candidate_drop_down_list_pane_g2

0x7715,	// (0x00016035) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7715,	// (0x00016035) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0001e4d8) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb8,	// (0x0001e4d8) fep_vkb_candidate_drop_down_list_pane_g

0x7745,	// (0x00016065) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7745,	// (0x00016065) fep_vkb_candidate_drop_down_list_scroll_pane

0x7752,	// (0x00016072) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7752,	// (0x00016072) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x775f,	// (0x0001607f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x775f,	// (0x0001607f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x776b,	// (0x0001608b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x776b,	// (0x0001608b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x753a,	// (0x00015e5a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x753a,	// (0x00015e5a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x755b,	// (0x00015e7b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x755b,	// (0x00015e7b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7777,	// (0x00016097) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7777,	// (0x00016097) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7798,	// (0x000160b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7798,	// (0x000160b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x77b9,	// (0x000160d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x77b9,	// (0x000160d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0001e4f0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0001e4f0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x237a,	// (0x00010c9a) title_pane_g1_ParamLimits

0x2387,	// (0x00010ca7) title_pane_g2_ParamLimits

0xf54e,	// (0x0001de6e) title_pane_g_ParamLimits

0x3913,	// (0x00012233) aid_call2_pane

0x390b,	// (0x0001222b) aid_call_pane

0x391b,	// (0x0001223b) popup_clock_analogue_window_g1

0x391b,	// (0x0001223b) popup_clock_analogue_window_g2

0xcc63,	// (0x0001b583) popup_clock_analogue_window_g3

0xcc6c,	// (0x0001b58c) popup_clock_analogue_window_g4

0x2289,	// (0x00010ba9) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001e013) popup_clock_analogue_window_g

0xcc74,	// (0x0001b594) popup_clock_analogue_window_t1

0xcc82,	// (0x0001b5a2) clock_digital_number_pane_ParamLimits

0xcc82,	// (0x0001b5a2) clock_digital_number_pane

0xcc8e,	// (0x0001b5ae) clock_digital_number_pane_cp02_ParamLimits

0xcc8e,	// (0x0001b5ae) clock_digital_number_pane_cp02

0xcc9a,	// (0x0001b5ba) clock_digital_number_pane_cp03_ParamLimits

0xcc9a,	// (0x0001b5ba) clock_digital_number_pane_cp03

0xcca6,	// (0x0001b5c6) clock_digital_number_pane_cp04_ParamLimits

0xcca6,	// (0x0001b5c6) clock_digital_number_pane_cp04

0xccb2,	// (0x0001b5d2) clock_digital_separator_pane_ParamLimits

0xccb2,	// (0x0001b5d2) clock_digital_separator_pane

0xccbe,	// (0x0001b5de) popup_clock_digital_window_t1_ParamLimits

0xccbe,	// (0x0001b5de) popup_clock_digital_window_t1

0x2289,	// (0x00010ba9) clock_digital_number_pane_g1

0x2289,	// (0x00010ba9) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001e01e) clock_digital_number_pane_g

0x2289,	// (0x00010ba9) clock_digital_separator_pane_g1

0x2289,	// (0x00010ba9) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001e01e) clock_digital_separator_pane_g

0x4299,	// (0x00012bb9) aid_fill_nsta_ParamLimits

0x43bb,	// (0x00012cdb) indicator_nsta_pane_ParamLimits

0x452e,	// (0x00012e4e) popup_clock_analogue_window

0x452e,	// (0x00012e4e) popup_clock_digital_window

0x2450,	// (0x00010d70) grid_indicator_nsta_pane_ParamLimits

0x691c,	// (0x0001523c) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0001e3c2) clock_nsta_pane_t

0xcc27,	// (0x0001b547) aid_size_max_handle

0xcc31,	// (0x0001b551) aid_size_min_handle

0x3f20,	// (0x00012840) editor_scroll_pane

0x77d4,	// (0x000160f4) ex_editor_pane

0x3424,	// (0x00011d44) scroll_pane_cp13

0x2be3,	// (0x00011503) scroll_pane_cp14

0x394a,	// (0x0001226a) scroll_pane_cp36

0x3962,	// (0x00012282) list_single_graphic_hl_pane_cp2_ParamLimits

0x3962,	// (0x00012282) list_single_graphic_hl_pane_cp2

0x5d3e,	// (0x0001465e) list_single_graphic_hl_pane_ParamLimits

0x5d3e,	// (0x0001465e) list_single_graphic_hl_pane

0xc617,	// (0x0001af37) aid_size_min_hl_cp1

0x77e5,	// (0x00016105) list_highlight_pane_cp34_ParamLimits

0x77e5,	// (0x00016105) list_highlight_pane_cp34

0x77f6,	// (0x00016116) list_single_graphic_hl_pane_g1_ParamLimits

0x77f6,	// (0x00016116) list_single_graphic_hl_pane_g1

0xc620,	// (0x0001af40) list_single_graphic_hl_pane_g2_ParamLimits

0xc620,	// (0x0001af40) list_single_graphic_hl_pane_g2

0xc620,	// (0x0001af40) list_single_graphic_hl_pane_g3_ParamLimits

0xc620,	// (0x0001af40) list_single_graphic_hl_pane_g3

0xbf63,	// (0x0001a883) list_single_graphic_hl_pane_g4_ParamLimits

0xbf63,	// (0x0001a883) list_single_graphic_hl_pane_g4

0xc62c,	// (0x0001af4c) list_single_graphic_hl_pane_g5_ParamLimits

0xc62c,	// (0x0001af4c) list_single_graphic_hl_pane_g5

0x0004,

0xfbe1,	// (0x0001e501) list_single_graphic_hl_pane_g_ParamLimits

0xfbe1,	// (0x0001e501) list_single_graphic_hl_pane_g

0xc640,	// (0x0001af60) list_single_graphic_hl_pane_t1_ParamLimits

0xc640,	// (0x0001af60) list_single_graphic_hl_pane_t1

0x7825,	// (0x00016145) aid_size_min_hl_cp2

0x782e,	// (0x0001614e) list_highlight_pane_cp34_cp2_ParamLimits

0x782e,	// (0x0001614e) list_highlight_pane_cp34_cp2

0x77f6,	// (0x00016116) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x77f6,	// (0x00016116) list_single_graphic_hl_pane_g1_cp2

0x783b,	// (0x0001615b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x783b,	// (0x0001615b) list_single_graphic_hl_pane_g2_cp2

0x7847,	// (0x00016167) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7847,	// (0x00016167) list_single_graphic_hl_pane_g3_cp2

0x3d95,	// (0x000126b5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3d95,	// (0x000126b5) list_single_graphic_hl_pane_g4_cp2

0x7417,	// (0x00015d37) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7417,	// (0x00015d37) list_single_graphic_hl_pane_g5_cp2

0xcf49,	// (0x0001b869) control_pane_g4_ParamLimits

0xcf49,	// (0x0001b869) control_pane_g4

0x426f,	// (0x00012b8f) bg_popup_sub_pane_cp10_ParamLimits

0x6e9e,	// (0x000157be) list_choice_list_pane_ParamLimits

0x6ead,	// (0x000157cd) scroll_pane_cp23

0x26f7,	// (0x00011017) bg_popup_preview_window_pane_cp02_ParamLimits

0x7453,	// (0x00015d73) list_preview_fixed_pane_ParamLimits

0x7469,	// (0x00015d89) list_preview_fixed_pane_cp_ParamLimits

0x7469,	// (0x00015d89) list_preview_fixed_pane_cp

0x7475,	// (0x00015d95) popup_preview_fixed_window_g1_ParamLimits

0x7475,	// (0x00015d95) popup_preview_fixed_window_g1

0x7481,	// (0x00015da1) popup_preview_fixed_window_g2_ParamLimits

0x7481,	// (0x00015da1) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x0001e490) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x0001e490) popup_preview_fixed_window_g

0xcbb7,	// (0x0001b4d7) aid_navi_side_left_pane_ParamLimits

0xcbc7,	// (0x0001b4e7) aid_navi_side_right_pane_ParamLimits

0xcbd6,	// (0x0001b4f6) navi_icon_pane_stacon_ParamLimits

0xcbe6,	// (0x0001b506) navi_navi_pane_stacon_ParamLimits

0xcbd6,	// (0x0001b4f6) navi_text_pane_stacon_ParamLimits

0x227f,	// (0x00010b9f) main_text_info_pane

0x7869,	// (0x00016189) listscroll_text_info_pane

0x7871,	// (0x00016191) list_text_info_pane_ParamLimits

0x7871,	// (0x00016191) list_text_info_pane

0x7880,	// (0x000161a0) scroll_pane_cp24_ParamLimits

0x7880,	// (0x000161a0) scroll_pane_cp24

0x789e,	// (0x000161be) list_text_info_pane_t1_ParamLimits

0x789e,	// (0x000161be) list_text_info_pane_t1

0xd099,	// (0x0001b9b9) popup_fast_swap2_window_ParamLimits

0xd099,	// (0x0001b9b9) popup_fast_swap2_window

0x78bb,	// (0x000161db) aid_size_cell_fast2

0x227f,	// (0x00010b9f) bg_popup_window_pane_cp17

0x4c08,	// (0x00013528) heading_pane_cp2

0x2965,	// (0x00011285) listscroll_fast2_pane

0x78c5,	// (0x000161e5) grid_fast2_pane

0x78cd,	// (0x000161ed) listscroll_fast2_pane_g1

0x78d5,	// (0x000161f5) listscroll_fast2_pane_g2

0x0001,

0xfbec,	// (0x0001e50c) listscroll_fast2_pane_g

0x3424,	// (0x00011d44) scroll_pane_cp26

0x78dd,	// (0x000161fd) cell_fast2_pane_ParamLimits

0x78dd,	// (0x000161fd) cell_fast2_pane

0x78f3,	// (0x00016213) cell_fast2_pane_g1

0x78fc,	// (0x0001621c) cell_fast2_pane_g2

0x7905,	// (0x00016225) cell_fast2_pane_g3

0x0002,

0xfbf1,	// (0x0001e511) cell_fast2_pane_g

0x2a3c,	// (0x0001135c) grid_highlight_pane_cp9

0x2a51,	// (0x00011371) main_eswt_pane_ParamLimits

0x2a51,	// (0x00011371) main_eswt_pane

0x7895,	// (0x000161b5) list_single_text_info_pane

0x790d,	// (0x0001622d) eswt_ctrl_button_pane

0x790d,	// (0x0001622d) eswt_ctrl_canvas_pane

0x7915,	// (0x00016235) eswt_ctrl_combo_pane

0x790d,	// (0x0001622d) eswt_ctrl_default_pane

0x790d,	// (0x0001622d) eswt_ctrl_label_pane

0x791d,	// (0x0001623d) eswt_ctrl_wait_pane

0x7925,	// (0x00016245) eswt_shell_pane

0x227f,	// (0x00010b9f) listscroll_eswt_app_pane

0x7941,	// (0x00016261) popup_eswt_tasktip_window_ParamLimits

0x7941,	// (0x00016261) popup_eswt_tasktip_window

0x484e,	// (0x0001316e) bg_popup_window_pane_cp18

0x7952,	// (0x00016272) eswt_control_pane_g1_ParamLimits

0x7952,	// (0x00016272) eswt_control_pane_g1

0x795f,	// (0x0001627f) eswt_control_pane_g2_ParamLimits

0x795f,	// (0x0001627f) eswt_control_pane_g2

0x796c,	// (0x0001628c) eswt_control_pane_g3_ParamLimits

0x796c,	// (0x0001628c) eswt_control_pane_g3

0x7979,	// (0x00016299) eswt_control_pane_g4_ParamLimits

0x7979,	// (0x00016299) eswt_control_pane_g4

0x0003,

0xfbf8,	// (0x0001e518) eswt_control_pane_g_ParamLimits

0xfbf8,	// (0x0001e518) eswt_control_pane_g

0x3160,	// (0x00011a80) bg_button_pane_ParamLimits

0x3160,	// (0x00011a80) bg_button_pane

0x2a51,	// (0x00011371) common_borders_pane_copy2_ParamLimits

0x2a51,	// (0x00011371) common_borders_pane_copy2

0x7986,	// (0x000162a6) control_button_pane_g1_ParamLimits

0x7986,	// (0x000162a6) control_button_pane_g1

0x7992,	// (0x000162b2) control_button_pane_g2_ParamLimits

0x7992,	// (0x000162b2) control_button_pane_g2

0x799e,	// (0x000162be) control_button_pane_g3_ParamLimits

0x799e,	// (0x000162be) control_button_pane_g3

0x0002,

0xfc01,	// (0x0001e521) control_button_pane_g_ParamLimits

0xfc01,	// (0x0001e521) control_button_pane_g

0x79b2,	// (0x000162d2) control_button_pane_t1

0x79c0,	// (0x000162e0) control_button_pane_t2

0x0001,

0xfc08,	// (0x0001e528) control_button_pane_t

0x4738,	// (0x00013058) bg_button_pane_g1

0x4748,	// (0x00013068) bg_button_pane_g2

0x4740,	// (0x00013060) bg_button_pane_g3

0x4758,	// (0x00013078) bg_button_pane_g4

0x4750,	// (0x00013070) bg_button_pane_g5

0x4760,	// (0x00013080) bg_button_pane_g6

0x4768,	// (0x00013088) bg_button_pane_g7

0x4778,	// (0x00013098) bg_button_pane_g8

0x4770,	// (0x00013090) bg_button_pane_g9

0x0008,

0xf85a,	// (0x0001e17a) bg_button_pane_g

0x6e59,	// (0x00015779) common_borders_pane_ParamLimits

0x6e59,	// (0x00015779) common_borders_pane

0x7952,	// (0x00016272) eswt_control_pane_g1_copy1_ParamLimits

0x7952,	// (0x00016272) eswt_control_pane_g1_copy1

0x795f,	// (0x0001627f) eswt_control_pane_g2_copy1_ParamLimits

0x795f,	// (0x0001627f) eswt_control_pane_g2_copy1

0x796c,	// (0x0001628c) eswt_control_pane_g3_copy1_ParamLimits

0x796c,	// (0x0001628c) eswt_control_pane_g3_copy1

0x7979,	// (0x00016299) eswt_control_pane_g4_copy1_ParamLimits

0x7979,	// (0x00016299) eswt_control_pane_g4_copy1

0x6e94,	// (0x000157b4) bg_eswt_ctrl_canvas_pane_g1

0x6e59,	// (0x00015779) common_borders_pane_cp2_ParamLimits

0x6e59,	// (0x00015779) common_borders_pane_cp2

0x6e59,	// (0x00015779) common_borders_pane_cp3_ParamLimits

0x6e59,	// (0x00015779) common_borders_pane_cp3

0x79ce,	// (0x000162ee) separator_horizontal_pane

0x3758,	// (0x00012078) separator_vertical_pane

0x7952,	// (0x00016272) eswt_control_pane_g1_copy2_ParamLimits

0x7952,	// (0x00016272) eswt_control_pane_g1_copy2

0x795f,	// (0x0001627f) eswt_control_pane_g2_copy2_ParamLimits

0x795f,	// (0x0001627f) eswt_control_pane_g2_copy2

0x796c,	// (0x0001628c) eswt_control_pane_g3_copy2_ParamLimits

0x796c,	// (0x0001628c) eswt_control_pane_g3_copy2

0x7979,	// (0x00016299) eswt_control_pane_g4_copy2_ParamLimits

0x7979,	// (0x00016299) eswt_control_pane_g4_copy2

0x227f,	// (0x00010b9f) common_borders_pane_cp4

0x79d6,	// (0x000162f6) separator_horizontal_pane_g1

0x79df,	// (0x000162ff) separator_horizontal_pane_g2

0x79e8,	// (0x00016308) separator_horizontal_pane_g3

0x0002,

0xfc0d,	// (0x0001e52d) separator_horizontal_pane_g

0x7952,	// (0x00016272) eswt_control_pane_g1_copy3_ParamLimits

0x7952,	// (0x00016272) eswt_control_pane_g1_copy3

0x795f,	// (0x0001627f) eswt_control_pane_g2_copy3_ParamLimits

0x795f,	// (0x0001627f) eswt_control_pane_g2_copy3

0x796c,	// (0x0001628c) eswt_control_pane_g3_copy3_ParamLimits

0x796c,	// (0x0001628c) eswt_control_pane_g3_copy3

0x7979,	// (0x00016299) eswt_control_pane_g4_copy3_ParamLimits

0x7979,	// (0x00016299) eswt_control_pane_g4_copy3

0x227f,	// (0x00010b9f) common_borders_pane_cp5

0x79f1,	// (0x00016311) separator_vertical_pane_g1

0x79fa,	// (0x0001631a) separator_vertical_pane_g2

0x7a03,	// (0x00016323) separator_vertical_pane_g3

0x0002,

0xfc14,	// (0x0001e534) separator_vertical_pane_g

0x7952,	// (0x00016272) eswt_control_pane_g1_copy4_ParamLimits

0x7952,	// (0x00016272) eswt_control_pane_g1_copy4

0x795f,	// (0x0001627f) eswt_control_pane_g2_copy4_ParamLimits

0x795f,	// (0x0001627f) eswt_control_pane_g2_copy4

0x796c,	// (0x0001628c) eswt_control_pane_g3_copy4_ParamLimits

0x796c,	// (0x0001628c) eswt_control_pane_g3_copy4

0x7979,	// (0x00016299) eswt_control_pane_g4_copy4_ParamLimits

0x7979,	// (0x00016299) eswt_control_pane_g4_copy4

0x7a0c,	// (0x0001632c) eswt_ctrl_combo_button_pane

0x7a14,	// (0x00016334) eswt_ctrl_input_pane

0x7a1c,	// (0x0001633c) popup_choice_list_window_cp70

0x7a24,	// (0x00016344) eswt_ctrl_input_pane_t1

0x227f,	// (0x00010b9f) input_focus_pane_cp70

0x6e59,	// (0x00015779) bg_button_pane_cp70_ParamLimits

0x6e59,	// (0x00015779) bg_button_pane_cp70

0x7a32,	// (0x00016352) eswt_ctrl_combo_button_pane_g1

0x7a3a,	// (0x0001635a) wait_bar_pane_cp70

0x484e,	// (0x0001316e) bg_popup_window_pane_cp70_ParamLimits

0x484e,	// (0x0001316e) bg_popup_window_pane_cp70

0x7a42,	// (0x00016362) popup_eswt_tasktip_window_t1

0x7a58,	// (0x00016378) wait_bar_pane_cp71_ParamLimits

0x7a58,	// (0x00016378) wait_bar_pane_cp71

0x7a64,	// (0x00016384) grid_eswt_app_pane

0x374f,	// (0x0001206f) scroll_pane_cp70

0x7a6d,	// (0x0001638d) cell_eswt_app_pane_ParamLimits

0x7a6d,	// (0x0001638d) cell_eswt_app_pane

0x7a95,	// (0x000163b5) cell_eswt_app_pane_g1_ParamLimits

0x7a95,	// (0x000163b5) cell_eswt_app_pane_g1

0x7ac4,	// (0x000163e4) cell_eswt_app_pane_g2_ParamLimits

0x7ac4,	// (0x000163e4) cell_eswt_app_pane_g2

0x0001,

0xfc1b,	// (0x0001e53b) cell_eswt_app_pane_g_ParamLimits

0xfc1b,	// (0x0001e53b) cell_eswt_app_pane_g

0x7aed,	// (0x0001640d) cell_eswt_app_pane_t1_ParamLimits

0x7aed,	// (0x0001640d) cell_eswt_app_pane_t1

0x7b1f,	// (0x0001643f) grid_highlight_pane_cp70_ParamLimits

0x7b1f,	// (0x0001643f) grid_highlight_pane_cp70

0x2bf7,	// (0x00011517) set_content_pane_g1

0x41bb,	// (0x00012adb) status_small_volume_pane

0xdc78,	// (0x0001c598) status_small_volume_pane_g1

0xdc80,	// (0x0001c5a0) volume_small2_pane

0xdc89,	// (0x0001c5a9) volume_small2_pane_g1

0xdc92,	// (0x0001c5b2) volume_small2_pane_g2

0xdc9b,	// (0x0001c5bb) volume_small2_pane_g3

0xdca4,	// (0x0001c5c4) volume_small2_pane_g4

0xdcad,	// (0x0001c5cd) volume_small2_pane_g5

0xdcb6,	// (0x0001c5d6) volume_small2_pane_g6

0xdcbf,	// (0x0001c5df) volume_small2_pane_g7

0xdcc8,	// (0x0001c5e8) volume_small2_pane_g8

0xdcd1,	// (0x0001c5f1) volume_small2_pane_g9

0xdcda,	// (0x0001c5fa) volume_small2_pane_g10

0x0009,

0xfc20,	// (0x0001e540) volume_small2_pane_g

0x720e,	// (0x00015b2e) fep_vkb_top_text_pane_g1_ParamLimits

0x7229,	// (0x00015b49) fep_vkb_top_text_pane_t1_ParamLimits

0x748d,	// (0x00015dad) popup_preview_fixed_window_g3_ParamLimits

0x748d,	// (0x00015dad) popup_preview_fixed_window_g3

0xd45b,	// (0x0001bd7b) popup_toolbar_trans_pane

0x5ae6,	// (0x00014406) aid_height_set_list_ParamLimits

0x5af2,	// (0x00014412) aid_size_parent_ParamLimits

0x426f,	// (0x00012b8f) list_highlight_pane_cp2_ParamLimits

0x2bf7,	// (0x00011517) set_content_pane_g1_ParamLimits

0x5d53,	// (0x00014673) list_single_image_pane_ParamLimits

0x5d53,	// (0x00014673) list_single_image_pane

0x7b2b,	// (0x0001644b) aid_size_cell_image_ParamLimits

0x7b2b,	// (0x0001644b) aid_size_cell_image

0x7b38,	// (0x00016458) grid_single_image_pane_ParamLimits

0x7b38,	// (0x00016458) grid_single_image_pane

0x2bf7,	// (0x00011517) list_single_image_pane_g1_ParamLimits

0x2bf7,	// (0x00011517) list_single_image_pane_g1

0x3186,	// (0x00011aa6) list_single_image_pane_g2_ParamLimits

0x3186,	// (0x00011aa6) list_single_image_pane_g2

0x0001,

0xfc35,	// (0x0001e555) list_single_image_pane_g_ParamLimits

0xfc35,	// (0x0001e555) list_single_image_pane_g

0x5c75,	// (0x00014595) list_single_image_pane_t1_ParamLimits

0x5c75,	// (0x00014595) list_single_image_pane_t1

0x7b44,	// (0x00016464) cell_image_list_pane_ParamLimits

0x7b44,	// (0x00016464) cell_image_list_pane

0x7b57,	// (0x00016477) cell_image_list_pane_g1

0x7b60,	// (0x00016480) cell_image_list_pane_g2

0x0001,

0xfc3a,	// (0x0001e55a) cell_image_list_pane_g

0x7b69,	// (0x00016489) aid_size_cell_tb_trans_pane

0x3160,	// (0x00011a80) bg_tb_trans_pane

0x7b7b,	// (0x0001649b) grid_tb_trans_pane

0x4738,	// (0x00013058) bg_tb_trans_pane_g1

0x4748,	// (0x00013068) bg_tb_trans_pane_g2

0x4740,	// (0x00013060) bg_tb_trans_pane_g3

0x4758,	// (0x00013078) bg_tb_trans_pane_g4

0x4750,	// (0x00013070) bg_tb_trans_pane_g5

0x4778,	// (0x00013098) bg_tb_trans_pane_g6

0x4770,	// (0x00013090) bg_tb_trans_pane_g7

0x4760,	// (0x00013080) bg_tb_trans_pane_g8

0x4768,	// (0x00013088) bg_tb_trans_pane_g9

0x0008,

0xfc3f,	// (0x0001e55f) bg_tb_trans_pane_g

0x7b8f,	// (0x000164af) cell_toolbar_trans_pane_ParamLimits

0x7b8f,	// (0x000164af) cell_toolbar_trans_pane

0x6e94,	// (0x000157b4) cell_toolbar_trans_pane_g1

0x6add,	// (0x000153fd) list_form2_midp_pane_t1

0x6aeb,	// (0x0001540b) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0001e408) list_form2_midp_pane_t

0x6af9,	// (0x00015419) scroll_pane_cp51_ParamLimits

0x6cde,	// (0x000155fe) form2_midp_wait_pane_g1

0x6ce7,	// (0x00015607) form2_midp_wait_pane_g2

0x6cf0,	// (0x00015610) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0001e41d) form2_midp_wait_pane_g

0x2450,	// (0x00010d70) list_highlight_pane_cp21_ParamLimits

0x6d2e,	// (0x0001564e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6d3d,	// (0x0001565d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc10a,	// (0x0001aa2a) list_single_2graphic_im_pane_ParamLimits

0xc10a,	// (0x0001aa2a) list_single_2graphic_im_pane

0x7bb5,	// (0x000164d5) list_single_2graphic_im_pane_g1_ParamLimits

0x7bb5,	// (0x000164d5) list_single_2graphic_im_pane_g1

0x7bc6,	// (0x000164e6) list_single_2graphic_im_pane_g2_ParamLimits

0x7bc6,	// (0x000164e6) list_single_2graphic_im_pane_g2

0x7bd2,	// (0x000164f2) list_single_2graphic_im_pane_g3_ParamLimits

0x7bd2,	// (0x000164f2) list_single_2graphic_im_pane_g3

0x0003,

0xfc52,	// (0x0001e572) list_single_2graphic_im_pane_g_ParamLimits

0xfc52,	// (0x0001e572) list_single_2graphic_im_pane_g

0x7bf2,	// (0x00016512) list_single_2graphic_im_pane_t1_ParamLimits

0x7bf2,	// (0x00016512) list_single_2graphic_im_pane_t1

0x7499,	// (0x00015db9) list_single_graphic_2heading_pane_fp_ParamLimits

0x7499,	// (0x00015db9) list_single_graphic_2heading_pane_fp

0xc489,	// (0x0001ada9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc489,	// (0x0001ada9) list_single_graphic_2heading_pane_fp_g1

0x74ad,	// (0x00015dcd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x74ad,	// (0x00015dcd) list_single_graphic_2heading_pane_fp_g2

0xbb9c,	// (0x0001a4bc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbb9c,	// (0x0001a4bc) list_single_graphic_2heading_pane_fp_g3

0xc45e,	// (0x0001ad7e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc45e,	// (0x0001ad7e) list_single_graphic_2heading_pane_fp_g4

0x74cd,	// (0x00015ded) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x74cd,	// (0x00015ded) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0001e4a0) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0001e4a0) list_single_graphic_2heading_pane_fp_g

0xc656,	// (0x0001af76) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc656,	// (0x0001af76) list_single_graphic_2heading_pane_fp_t1

0xc4c1,	// (0x0001ade1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc4c1,	// (0x0001ade1) list_single_graphic_2heading_pane_fp_t2

0xc66c,	// (0x0001af8c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc66c,	// (0x0001af8c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5b,	// (0x0001e57b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5b,	// (0x0001e57b) list_single_graphic_2heading_pane_fp_t

0x6f1d,	// (0x0001583d) fep_hwr_write_pane_g5_ParamLimits

0x6f1d,	// (0x0001583d) fep_hwr_write_pane_g5

0x6f29,	// (0x00015849) fep_hwr_write_pane_g6_ParamLimits

0x6f29,	// (0x00015849) fep_hwr_write_pane_g6

0x7925,	// (0x00016245) eswt_shell_pane_ParamLimits

0x484e,	// (0x0001316e) bg_popup_window_pane_cp18_ParamLimits

0x5a58,	// (0x00014378) heading_pane_cp70

0x7a42,	// (0x00016362) popup_eswt_tasktip_window_t1_ParamLimits

0x42db,	// (0x00012bfb) aid_touch_tab_arrow_left

0x42e7,	// (0x00012c07) aid_touch_tab_arrow_right

0x2398,	// (0x00010cb8) title_pane_g3_ParamLimits

0x2398,	// (0x00010cb8) title_pane_g3

0x305e,	// (0x0001197e) set_value_pane_g1

0xd45b,	// (0x0001bd7b) popup_toolbar_trans_pane_ParamLimits

0x7b69,	// (0x00016489) aid_size_cell_tb_trans_pane_ParamLimits

0x3160,	// (0x00011a80) bg_tb_trans_pane_ParamLimits

0x7b7b,	// (0x0001649b) grid_tb_trans_pane_ParamLimits

0x26f7,	// (0x00011017) cont_note_pane_ParamLimits

0x26f7,	// (0x00011017) cont_note_pane

0x2a51,	// (0x00011371) cont_snote2_single_text_pane_ParamLimits

0x2a51,	// (0x00011371) cont_snote2_single_text_pane

0x2a51,	// (0x00011371) cont_snote2_single_graphic_pane_ParamLimits

0x2a51,	// (0x00011371) cont_snote2_single_graphic_pane

0x4e1e,	// (0x0001373e) cont_note_wait_pane_ParamLimits

0x4e1e,	// (0x0001373e) cont_note_wait_pane

0x4e1e,	// (0x0001373e) cont_note_image_pane_ParamLimits

0x4e1e,	// (0x0001373e) cont_note_image_pane

0x7c4f,	// (0x0001656f) popup_note2_window_g1_ParamLimits

0x7c4f,	// (0x0001656f) popup_note2_window_g1

0x7c80,	// (0x000165a0) popup_note2_window_t1_ParamLimits

0x7c80,	// (0x000165a0) popup_note2_window_t1

0x7cc5,	// (0x000165e5) popup_note2_window_t2_ParamLimits

0x7cc5,	// (0x000165e5) popup_note2_window_t2

0x7d0a,	// (0x0001662a) popup_note2_window_t3_ParamLimits

0x7d0a,	// (0x0001662a) popup_note2_window_t3

0x7d4f,	// (0x0001666f) popup_note2_window_t4_ParamLimits

0x7d4f,	// (0x0001666f) popup_note2_window_t4

0x277b,	// (0x0001109b) popup_note2_window_t5_ParamLimits

0x277b,	// (0x0001109b) popup_note2_window_t5

0x0004,

0xfc67,	// (0x0001e587) popup_note2_window_t_ParamLimits

0xfc67,	// (0x0001e587) popup_note2_window_t

0x7d7e,	// (0x0001669e) popup_note2_image_window_g1_ParamLimits

0x7d7e,	// (0x0001669e) popup_note2_image_window_g1

0x7d8a,	// (0x000166aa) popup_note2_image_window_g2_ParamLimits

0x7d8a,	// (0x000166aa) popup_note2_image_window_g2

0x0001,

0xfc72,	// (0x0001e592) popup_note2_image_window_g_ParamLimits

0xfc72,	// (0x0001e592) popup_note2_image_window_g

0x7d9c,	// (0x000166bc) popup_note2_image_window_t1_ParamLimits

0x7d9c,	// (0x000166bc) popup_note2_image_window_t1

0x7db4,	// (0x000166d4) popup_note2_image_window_t2_ParamLimits

0x7db4,	// (0x000166d4) popup_note2_image_window_t2

0x7dcc,	// (0x000166ec) popup_note2_image_window_t3_ParamLimits

0x7dcc,	// (0x000166ec) popup_note2_image_window_t3

0x0002,

0xfc77,	// (0x0001e597) popup_note2_image_window_t_ParamLimits

0xfc77,	// (0x0001e597) popup_note2_image_window_t

0x4e2c,	// (0x0001374c) popup_note2_wait_window_g1_ParamLimits

0x4e2c,	// (0x0001374c) popup_note2_wait_window_g1

0x4e38,	// (0x00013758) popup_note2_wait_window_g2_ParamLimits

0x4e38,	// (0x00013758) popup_note2_wait_window_g2

0x4e44,	// (0x00013764) popup_note2_wait_window_g3_ParamLimits

0x4e44,	// (0x00013764) popup_note2_wait_window_g3

0x0002,

0xf83c,	// (0x0001e15c) popup_note2_wait_window_g_ParamLimits

0xf83c,	// (0x0001e15c) popup_note2_wait_window_g

0x7de8,	// (0x00016708) popup_note2_wait_window_t1_ParamLimits

0x7de8,	// (0x00016708) popup_note2_wait_window_t1

0x7e06,	// (0x00016726) popup_note2_wait_window_t2_ParamLimits

0x7e06,	// (0x00016726) popup_note2_wait_window_t2

0x7e24,	// (0x00016744) popup_note2_wait_window_t3_ParamLimits

0x7e24,	// (0x00016744) popup_note2_wait_window_t3

0x7e36,	// (0x00016756) popup_note2_wait_window_t4_ParamLimits

0x7e36,	// (0x00016756) popup_note2_wait_window_t4

0x0003,

0xfc7e,	// (0x0001e59e) popup_note2_wait_window_t_ParamLimits

0xfc7e,	// (0x0001e59e) popup_note2_wait_window_t

0x7e48,	// (0x00016768) wait_bar2_pane_ParamLimits

0x7e48,	// (0x00016768) wait_bar2_pane

0x7e60,	// (0x00016780) popup_snote2_single_text_window_g1_ParamLimits

0x7e60,	// (0x00016780) popup_snote2_single_text_window_g1

0x7e88,	// (0x000167a8) popup_snote2_single_text_window_t1_ParamLimits

0x7e88,	// (0x000167a8) popup_snote2_single_text_window_t1

0x7ed4,	// (0x000167f4) popup_snote2_single_text_window_t2_ParamLimits

0x7ed4,	// (0x000167f4) popup_snote2_single_text_window_t2

0x7f20,	// (0x00016840) popup_snote2_single_text_window_t3_ParamLimits

0x7f20,	// (0x00016840) popup_snote2_single_text_window_t3

0x7f61,	// (0x00016881) popup_snote2_single_text_window_t4_ParamLimits

0x7f61,	// (0x00016881) popup_snote2_single_text_window_t4

0x7f97,	// (0x000168b7) popup_snote2_single_text_window_t5_ParamLimits

0x7f97,	// (0x000168b7) popup_snote2_single_text_window_t5

0x0004,

0xfc87,	// (0x0001e5a7) popup_snote2_single_text_window_t_ParamLimits

0xfc87,	// (0x0001e5a7) popup_snote2_single_text_window_t

0x7fc2,	// (0x000168e2) popup_snote2_single_graphic_window_g1_ParamLimits

0x7fc2,	// (0x000168e2) popup_snote2_single_graphic_window_g1

0x7fea,	// (0x0001690a) popup_snote2_single_graphic_window_g2_ParamLimits

0x7fea,	// (0x0001690a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc92,	// (0x0001e5b2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc92,	// (0x0001e5b2) popup_snote2_single_graphic_window_g

0x8012,	// (0x00016932) popup_snote2_single_graphic_window_t1_ParamLimits

0x8012,	// (0x00016932) popup_snote2_single_graphic_window_t1

0x805e,	// (0x0001697e) popup_snote2_single_graphic_window_t2_ParamLimits

0x805e,	// (0x0001697e) popup_snote2_single_graphic_window_t2

0x7f20,	// (0x00016840) popup_snote2_single_graphic_window_t3_ParamLimits

0x7f20,	// (0x00016840) popup_snote2_single_graphic_window_t3

0x7f61,	// (0x00016881) popup_snote2_single_graphic_window_t4_ParamLimits

0x7f61,	// (0x00016881) popup_snote2_single_graphic_window_t4

0x7f97,	// (0x000168b7) popup_snote2_single_graphic_window_t5_ParamLimits

0x7f97,	// (0x000168b7) popup_snote2_single_graphic_window_t5

0x0004,

0xfc97,	// (0x0001e5b7) popup_snote2_single_graphic_window_t_ParamLimits

0xfc97,	// (0x0001e5b7) popup_snote2_single_graphic_window_t

0x69cf,	// (0x000152ef) clock_nsta_pane_cp2_t1

0x69cf,	// (0x000152ef) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0001e3de) clock_nsta_pane_cp2_t

0xbd48,	// (0x0001a668) form_field_data_wide_pane_g1_ParamLimits

0x2bf7,	// (0x00011517) form_field_data_wide_pane_g2_ParamLimits

0x2bf7,	// (0x00011517) form_field_data_wide_pane_g2

0x3186,	// (0x00011aa6) form_field_data_wide_pane_g3_ParamLimits

0x3186,	// (0x00011aa6) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001df96) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001df96) form_field_data_wide_pane_g

0x68b9,	// (0x000151d9) grid_touch_3_pane_ParamLimits

0x68b9,	// (0x000151d9) grid_touch_3_pane

0x80aa,	// (0x000169ca) cell_touch_3_pane_ParamLimits

0x80aa,	// (0x000169ca) cell_touch_3_pane

0x6e94,	// (0x000157b4) cell_touch_3_pane_g1

0x6e94,	// (0x000157b4) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0001e463) cell_touch_3_pane_g

0x27d3,	// (0x000110f3) cont_query_data_pane

0x27db,	// (0x000110fb) cont_query_data_pane_cp1

0x80d7,	// (0x000169f7) button_value_adjust_pane_cp7

0x80df,	// (0x000169ff) query_popup_pane_cp3

0x39f3,	// (0x00012313) bg_popup_sub_pane_cp22_ParamLimits

0xccdd,	// (0x0001b5fd) navi_navi_volume_pane_cp2

0xccf5,	// (0x0001b615) popup_side_volume_key_window_g2

0xcd01,	// (0x0001b621) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001e02c) popup_side_volume_key_window_g

0xcd1b,	// (0x0001b63b) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001e033) popup_side_volume_key_window_t

0x3d0f,	// (0x0001262f) popup_side_volume_key_window_ParamLimits

0xb9e3,	// (0x0001a303) list_double_graphic_pane_g4_ParamLimits

0xb9e3,	// (0x0001a303) list_double_graphic_pane_g4

0x5d27,	// (0x00014647) list_single_2heading_msg_pane_ParamLimits

0x5d27,	// (0x00014647) list_single_2heading_msg_pane

0xc68a,	// (0x0001afaa) list_single_2heading_msg_pane_g1_ParamLimits

0xc68a,	// (0x0001afaa) list_single_2heading_msg_pane_g1

0xb844,	// (0x0001a164) list_single_2heading_msg_pane_g2_ParamLimits

0xb844,	// (0x0001a164) list_single_2heading_msg_pane_g2

0xc696,	// (0x0001afb6) list_single_2heading_msg_pane_g3_ParamLimits

0xc696,	// (0x0001afb6) list_single_2heading_msg_pane_g3

0xc6a2,	// (0x0001afc2) list_single_2heading_msg_pane_g4_ParamLimits

0xc6a2,	// (0x0001afc2) list_single_2heading_msg_pane_g4

0x0003,

0xfca2,	// (0x0001e5c2) list_single_2heading_msg_pane_g_ParamLimits

0xfca2,	// (0x0001e5c2) list_single_2heading_msg_pane_g

0xc6ba,	// (0x0001afda) list_single_2heading_msg_pane_t1_ParamLimits

0xc6ba,	// (0x0001afda) list_single_2heading_msg_pane_t1

0xc6e2,	// (0x0001b002) list_single_2heading_msg_pane_t2_ParamLimits

0xc6e2,	// (0x0001b002) list_single_2heading_msg_pane_t2

0xc716,	// (0x0001b036) list_single_2heading_msg_pane_t3_ParamLimits

0xc716,	// (0x0001b036) list_single_2heading_msg_pane_t3

0xc74f,	// (0x0001b06f) list_single_2heading_msg_pane_t4_ParamLimits

0xc74f,	// (0x0001b06f) list_single_2heading_msg_pane_t4

0x0003,

0xfcab,	// (0x0001e5cb) list_single_2heading_msg_pane_t_ParamLimits

0xfcab,	// (0x0001e5cb) list_single_2heading_msg_pane_t

0x23a4,	// (0x00010cc4) title_pane_g4_ParamLimits

0x23a4,	// (0x00010cc4) title_pane_g4

0xcb2d,	// (0x0001b44d) title_pane_stacon_g3_ParamLimits

0xcb2d,	// (0x0001b44d) title_pane_stacon_g3

0x7be6,	// (0x00016506) list_single_2graphic_im_pane_g4_ParamLimits

0x7be6,	// (0x00016506) list_single_2graphic_im_pane_g4

0x581c,	// (0x0001413c) popup_side_volume_key_window_cp

0x5ff0,	// (0x00014910) main_idle_act2_pane_t1

0xd526,	// (0x0001be46) toolbar_button_pane_g10

0x2bae,	// (0x000114ce) popup_toolbar_window_cp1

0x69c0,	// (0x000152e0) clock_nsta_pane_cp_t1

0x69c0,	// (0x000152e0) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0001e3d9) clock_nsta_pane_cp_t

0xccdd,	// (0x0001b5fd) navi_navi_volume_pane_cp2_ParamLimits

0xcce9,	// (0x0001b609) popup_side_volume_key_window_g1_ParamLimits

0xccf5,	// (0x0001b615) popup_side_volume_key_window_g2_ParamLimits

0xcd01,	// (0x0001b621) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001e02c) popup_side_volume_key_window_g_ParamLimits

0xd99c,	// (0x0001c2bc) fep_hwr_aid_pane

0xa3bd,	// (0x00018cdd) bg_fep_hwr_top_pane_g4_ParamLimits

0x6eff,	// (0x0001581f) fep_hwr_top_pane_g1_ParamLimits

0x6eed,	// (0x0001580d) fep_hwr_top_pane_g2_ParamLimits

0xda4f,	// (0x0001c36f) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0001e42e) fep_hwr_top_pane_g_ParamLimits

0xda64,	// (0x0001c384) fep_hwr_top_text_pane_ParamLimits

0x55f0,	// (0x00013f10) aid_touch_tab_arrow_arrow_2

0x55e7,	// (0x00013f07) aid_touch_tab_arrow_left_2

0xd9b0,	// (0x0001c2d0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xd9e3,	// (0x0001c303) fep_hwr_prediction_pane

0x703e,	// (0x0001595e) fep_vkb_prediction_pane

0x7120,	// (0x00015a40) fep_vkb_side_pane_g3_ParamLimits

0x7120,	// (0x00015a40) fep_vkb_side_pane_g3

0x70cc,	// (0x000159ec) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7708,	// (0x00016028) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7715,	// (0x00016035) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0001e4d8) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x81fd,	// (0x00016b1d) fep_hwr_prediction_pane_g1

0xdce3,	// (0x0001c603) fep_hwr_prediction_pane_g2

0xdceb,	// (0x0001c60b) fep_hwr_prediction_pane_g3

0xdcf3,	// (0x0001c613) fep_hwr_prediction_pane_g4

0x0003,

0xfcb4,	// (0x0001e5d4) fep_hwr_prediction_pane_g

0x81fd,	// (0x00016b1d) fep_vkb_prediction_pane_g1

0x8207,	// (0x00016b27) fep_vkb_prediction_pane_g2

0x820f,	// (0x00016b2f) fep_vkb_prediction_pane_g3

0x8217,	// (0x00016b37) fep_vkb_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0001e5dd) fep_vkb_prediction_pane_g

0xd7d4,	// (0x0001c0f4) slider_set_pane_g3

0xd7e8,	// (0x0001c108) slider_set_pane_g4

0xd800,	// (0x0001c120) slider_set_pane_g5

0xd7d4,	// (0x0001c0f4) slider_set_pane_g6

0xd816,	// (0x0001c136) slider_set_pane_g7

0x5c39,	// (0x00014559) slider_form_pane_g3

0x5c42,	// (0x00014562) slider_form_pane_g4

0x5c4a,	// (0x0001456a) slider_form_pane_g5

0x5c39,	// (0x00014559) slider_form_pane_g6

0x5c52,	// (0x00014572) slider_form_pane_g7

0x62d0,	// (0x00014bf0) slider_set_pane_vc_g3

0x62d9,	// (0x00014bf9) slider_set_pane_vc_g4

0x62e2,	// (0x00014c02) slider_set_pane_vc_g5

0x62d0,	// (0x00014bf0) slider_set_pane_vc_g6

0x62eb,	// (0x00014c0b) slider_set_pane_vc_g7

0x62d0,	// (0x00014bf0) slider_form_pane_vc_g1

0x62d9,	// (0x00014bf9) slider_form_pane_vc_g2

0x62e2,	// (0x00014c02) slider_form_pane_vc_g3

0x62d0,	// (0x00014bf0) slider_form_pane_vc_g4

0x66b9,	// (0x00014fd9) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0001e3ab) slider_form_pane_vc_g

0x227f,	// (0x00010b9f) main_idle_act3_pane

0x821f,	// (0x00016b3f) ai3_links_pane

0x8228,	// (0x00016b48) popup_ai3_data_window_ParamLimits

0x8228,	// (0x00016b48) popup_ai3_data_window

0x227f,	// (0x00010b9f) grid_ai3_links_pane

0x8240,	// (0x00016b60) cell_ai3_links_pane_ParamLimits

0x8240,	// (0x00016b60) cell_ai3_links_pane

0x8254,	// (0x00016b74) bg_popup_sub_pane_cp11

0x8261,	// (0x00016b81) cell_ai3_links_pane_g1

0x227f,	// (0x00010b9f) bg_popup_sub_pane_cp12

0x8286,	// (0x00016ba6) heading_ai3_data_pane

0x828e,	// (0x00016bae) list_ai3_gene_pane

0x829a,	// (0x00016bba) popup_ai3_data_window_g1

0x82a2,	// (0x00016bc2) heading_ai3_data_pane_g1

0x82aa,	// (0x00016bca) heading_ai3_data_pane_t1

0x82b8,	// (0x00016bd8) list_double_ai3_gene_pane_ParamLimits

0x82b8,	// (0x00016bd8) list_double_ai3_gene_pane

0x82c5,	// (0x00016be5) list_single_ai3_gene_pane_ParamLimits

0x82c5,	// (0x00016be5) list_single_ai3_gene_pane

0x6e59,	// (0x00015779) list_highlight_pane_cp7_ParamLimits

0x6e59,	// (0x00015779) list_highlight_pane_cp7

0x82d2,	// (0x00016bf2) list_single_a13_gene_pane_t1_ParamLimits

0x82d2,	// (0x00016bf2) list_single_a13_gene_pane_t1

0x82e9,	// (0x00016c09) list_single_ai3_gene_pane_g1

0x82f2,	// (0x00016c12) list_single_ai3_gene_pane_g2

0x0001,

0xfcc6,	// (0x0001e5e6) list_single_ai3_gene_pane_g

0x82fa,	// (0x00016c1a) list_double_ai3_gene_pane_g1_ParamLimits

0x82fa,	// (0x00016c1a) list_double_ai3_gene_pane_g1

0x8306,	// (0x00016c26) list_double_ai3_gene_pane_t1_ParamLimits

0x8306,	// (0x00016c26) list_double_ai3_gene_pane_t1

0x8322,	// (0x00016c42) list_double_ai3_gene_pane_t2_ParamLimits

0x8322,	// (0x00016c42) list_double_ai3_gene_pane_t2

0x8337,	// (0x00016c57) list_double_ai3_gene_pane_t3_ParamLimits

0x8337,	// (0x00016c57) list_double_ai3_gene_pane_t3

0x0002,

0xfccb,	// (0x0001e5eb) list_double_ai3_gene_pane_t_ParamLimits

0xfccb,	// (0x0001e5eb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc682,	// (0x0001afa2) aid_size_min_col_2

0x80f8,	// (0x00016a18) aid_size_min_msg_ParamLimits

0x80f8,	// (0x00016a18) aid_size_min_msg

0x721a,	// (0x00015b3a) fep_vkb_top_text_pane_g2_ParamLimits

0x721a,	// (0x00015b3a) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0001e45e) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0001e45e) fep_vkb_top_text_pane_g

0x227f,	// (0x00010b9f) main_hc_apps_shell_pane

0x8354,	// (0x00016c74) grid_hc_apps_pane_ParamLimits

0x8354,	// (0x00016c74) grid_hc_apps_pane

0x8363,	// (0x00016c83) list_hc_apps_pane

0x836b,	// (0x00016c8b) scroll_pane_cp37_ParamLimits

0x836b,	// (0x00016c8b) scroll_pane_cp37

0x8377,	// (0x00016c97) cell_hc_apps_pane_ParamLimits

0x8377,	// (0x00016c97) cell_hc_apps_pane

0x8405,	// (0x00016d25) cell_hc_apps_pane_g1_ParamLimits

0x8405,	// (0x00016d25) cell_hc_apps_pane_g1

0x8432,	// (0x00016d52) cell_hc_apps_pane_g2_ParamLimits

0x8432,	// (0x00016d52) cell_hc_apps_pane_g2

0x844e,	// (0x00016d6e) cell_hc_apps_pane_g3_ParamLimits

0x844e,	// (0x00016d6e) cell_hc_apps_pane_g3

0x0002,

0xfcd2,	// (0x0001e5f2) cell_hc_apps_pane_g_ParamLimits

0xfcd2,	// (0x0001e5f2) cell_hc_apps_pane_g

0x8470,	// (0x00016d90) cell_hc_apps_pane_t1_ParamLimits

0x8470,	// (0x00016d90) cell_hc_apps_pane_t1

0x26f7,	// (0x00011017) grid_highlight_pane_cp10_ParamLimits

0x26f7,	// (0x00011017) grid_highlight_pane_cp10

0x84ae,	// (0x00016dce) list_single_hc_apps_pane_ParamLimits

0x84ae,	// (0x00016dce) list_single_hc_apps_pane

0x84de,	// (0x00016dfe) list_single_hc_apps_pane_g1

0xc774,	// (0x0001b094) list_single_hc_apps_pane_g2

0x0001,

0xfcd9,	// (0x0001e5f9) list_single_hc_apps_pane_g

0xc78d,	// (0x0001b0ad) list_single_hc_apps_pane_g2_copy1

0xc7a9,	// (0x0001b0c9) list_single_hc_apps_pane_t1

0x2450,	// (0x00010d70) bg_set_opt_pane_cp_ParamLimits

0xca7b,	// (0x0001b39b) setting_slider_pane_t1_ParamLimits

0xca91,	// (0x0001b3b1) setting_slider_pane_t2_ParamLimits

0xcaaa,	// (0x0001b3ca) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001de7e) setting_slider_pane_t_ParamLimits

0xcac1,	// (0x0001b3e1) slider_set_pane_ParamLimits

0xcf5d,	// (0x0001b87d) control_pane_g5_ParamLimits

0xcf5d,	// (0x0001b87d) control_pane_g5

0x5ab1,	// (0x000143d1) slider_set_pane_g1_ParamLimits

0xd7c8,	// (0x0001c0e8) slider_set_pane_g2_ParamLimits

0xd7d4,	// (0x0001c0f4) slider_set_pane_g3_ParamLimits

0xd7e8,	// (0x0001c108) slider_set_pane_g4_ParamLimits

0xd800,	// (0x0001c120) slider_set_pane_g5_ParamLimits

0xd7d4,	// (0x0001c0f4) slider_set_pane_g6_ParamLimits

0xd816,	// (0x0001c136) slider_set_pane_g7_ParamLimits

0xf958,	// (0x0001e278) slider_set_pane_g_ParamLimits

0x2450,	// (0x00010d70) navi_icon_text_pane_ParamLimits

0x42a9,	// (0x00012bc9) aid_fill_nsta_2_ParamLimits

0x42db,	// (0x00012bfb) aid_touch_tab_arrow_left_ParamLimits

0x42e7,	// (0x00012c07) aid_touch_tab_arrow_right_ParamLimits

0x4351,	// (0x00012c71) clock_nsta_pane_ParamLimits

0x55c9,	// (0x00013ee9) navi_icon_pane_g1_ParamLimits

0x55d5,	// (0x00013ef5) navi_text_pane_t1_ParamLimits

0x6ab7,	// (0x000153d7) navi_icon_text_pane_g1_ParamLimits

0x6ac3,	// (0x000153e3) navi_icon_text_pane_t1_ParamLimits

0x84de,	// (0x00016dfe) list_single_hc_apps_pane_g1_ParamLimits

0xc774,	// (0x0001b094) list_single_hc_apps_pane_g2_ParamLimits

0xfcd9,	// (0x0001e5f9) list_single_hc_apps_pane_g_ParamLimits

0xc78d,	// (0x0001b0ad) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc7a9,	// (0x0001b0c9) list_single_hc_apps_pane_t1_ParamLimits

0xc9ad,	// (0x0001b2cd) popup_toolbar2_fixed_window_ParamLimits

0xc9ad,	// (0x0001b2cd) popup_toolbar2_fixed_window

0xd453,	// (0x0001bd73) popup_toolbar2_float_window

0x227f,	// (0x00010b9f) bg_popup_sub_pane_cp27

0x855a,	// (0x00016e7a) grid_toolbar2_float_pane

0x227f,	// (0x00010b9f) bg_popup_sub_pane_cp26

0x855a,	// (0x00016e7a) grid_toolbar2_fixed_pane

0x8562,	// (0x00016e82) cell_toolbar2_fixed_pane_ParamLimits

0x8562,	// (0x00016e82) cell_toolbar2_fixed_pane

0x8573,	// (0x00016e93) cell_toolbar2_fixed_pane_g1

0x857c,	// (0x00016e9c) toolbar2_fixed_button_pane

0x4738,	// (0x00013058) toolbar2_fixed_button_pane_g1

0x4748,	// (0x00013068) toolbar2_fixed_button_pane_g2

0x4740,	// (0x00013060) toolbar2_fixed_button_pane_g3

0x4758,	// (0x00013078) toolbar2_fixed_button_pane_g4

0x4750,	// (0x00013070) toolbar2_fixed_button_pane_g5

0x4760,	// (0x00013080) toolbar2_fixed_button_pane_g6

0x4768,	// (0x00013088) toolbar2_fixed_button_pane_g7

0x4778,	// (0x00013098) toolbar2_fixed_button_pane_g8

0x4770,	// (0x00013090) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x0001e17a) toolbar2_fixed_button_pane_g

0x8584,	// (0x00016ea4) cell_toolbar2_float_pane_ParamLimits

0x8584,	// (0x00016ea4) cell_toolbar2_float_pane

0x8595,	// (0x00016eb5) cell_toolbar2_float_pane_g1

0x857c,	// (0x00016e9c) toolbar2_fixed_button_pane_cp

0x6fad,	// (0x000158cd) fep_vkb_accented_list_pane_ParamLimits

0x6fad,	// (0x000158cd) fep_vkb_accented_list_pane

0xdba6,	// (0x0001c4c6) bg_popup_fep_shadow_pane_g9

0x3f20,	// (0x00012840) bg_popup_fep_shadow_pane_cp3

0x340b,	// (0x00011d2b) list_accented_list_pane

0x859e,	// (0x00016ebe) list_single_accented_list_pane_ParamLimits

0x859e,	// (0x00016ebe) list_single_accented_list_pane

0x3f20,	// (0x00012840) list_highlight_pane_cp10

0x85af,	// (0x00016ecf) list_single_accented_list_pane_t1

0xd3b9,	// (0x0001bcd9) popup_slider_window_ParamLimits

0xd3b9,	// (0x0001bcd9) popup_slider_window

0x80e7,	// (0x00016a07) aid_indentation_list_msg

0x864f,	// (0x00016f6f) bg_popup_window_pane_cp19

0x86b3,	// (0x00016fd3) popup_slider_window_g1

0x86cf,	// (0x00016fef) popup_slider_window_g2

0x86eb,	// (0x0001700b) popup_slider_window_g3

0x0005,

0xfcde,	// (0x0001e5fe) popup_slider_window_g

0x8747,	// (0x00017067) popup_slider_window_t1

0x87b9,	// (0x000170d9) small_volume_slider_vertical_pane

0x6e94,	// (0x000157b4) small_volume_slider_vertical_pane_g1

0x6e94,	// (0x000157b4) small_volume_slider_vertical_pane_g2

0x87d5,	// (0x000170f5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf0,	// (0x0001e610) small_volume_slider_vertical_pane_g

0xc82b,	// (0x0001b14b) area_side_right_pane_ParamLimits

0xc82b,	// (0x0001b14b) area_side_right_pane

0xdcfb,	// (0x0001c61b) aid_size_side_button_ParamLimits

0xdcfb,	// (0x0001c61b) aid_size_side_button

0xdd0f,	// (0x0001c62f) grid_sctrl_middle_pane_ParamLimits

0xdd0f,	// (0x0001c62f) grid_sctrl_middle_pane

0xdd2b,	// (0x0001c64b) sctrl_sk_bottom_pane

0xdd3c,	// (0x0001c65c) sctrl_sk_top_pane

0xdd4e,	// (0x0001c66e) aid_touch_sctrl_top

0x26f7,	// (0x00011017) bg_sctrl_sk_pane_ParamLimits

0x26f7,	// (0x00011017) bg_sctrl_sk_pane

0xdd5b,	// (0x0001c67b) sctrl_sk_top_pane_g1

0xdd68,	// (0x0001c688) sctrl_sk_top_pane_t1

0xdd4e,	// (0x0001c66e) aid_touch_sctrl_bottom

0x26f7,	// (0x00011017) bg_sctrl_sk_pane_cp_ParamLimits

0x26f7,	// (0x00011017) bg_sctrl_sk_pane_cp

0xdd83,	// (0x0001c6a3) sctrl_sk_bottom_pane_g1

0xdd68,	// (0x0001c688) sctrl_sk_bottom_pane_t1

0xdd8c,	// (0x0001c6ac) cell_sctrl_middle_pane_ParamLimits

0xdd8c,	// (0x0001c6ac) cell_sctrl_middle_pane

0xdda7,	// (0x0001c6c7) aid_touch_sctrl_middle_ParamLimits

0xdda7,	// (0x0001c6c7) aid_touch_sctrl_middle

0x3160,	// (0x00011a80) bg_sctrl_middle_pane_ParamLimits

0x3160,	// (0x00011a80) bg_sctrl_middle_pane

0x70cc,	// (0x000159ec) cell_sctrl_middle_pane_g1_ParamLimits

0x70cc,	// (0x000159ec) cell_sctrl_middle_pane_g1

0xddb8,	// (0x0001c6d8) cell_sctrl_middle_pane_g2_ParamLimits

0xddb8,	// (0x0001c6d8) cell_sctrl_middle_pane_g2

0x0001,

0xfcfc,	// (0x0001e61c) cell_sctrl_middle_pane_g_ParamLimits

0xfcfc,	// (0x0001e61c) cell_sctrl_middle_pane_g

0x4738,	// (0x00013058) bg_sctrl_middle_pane_g1

0x4748,	// (0x00013068) bg_sctrl_middle_pane_g2

0x4740,	// (0x00013060) bg_sctrl_middle_pane_g3

0x4758,	// (0x00013078) bg_sctrl_middle_pane_g4

0x4750,	// (0x00013070) bg_sctrl_middle_pane_g5

0x4760,	// (0x00013080) bg_sctrl_middle_pane_g6

0x4768,	// (0x00013088) bg_sctrl_middle_pane_g7

0x4778,	// (0x00013098) bg_sctrl_middle_pane_g8

0x0007,

0xfd01,	// (0x0001e621) bg_sctrl_middle_pane_g

0x4770,	// (0x00013090) bg_sctrl_middle_pane_g8_copy1

0x4738,	// (0x00013058) bg_sctrl_sk_pane_g1

0x4748,	// (0x00013068) bg_sctrl_sk_pane_g2

0x4740,	// (0x00013060) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x0001e17a) bg_sctrl_sk_pane_g

0x2b73,	// (0x00011493) aid_size_touch_scroll_bar

0x4758,	// (0x00013078) bg_sctrl_sk_pane_g4

0x4750,	// (0x00013070) bg_sctrl_sk_pane_g5

0x4760,	// (0x00013080) bg_sctrl_sk_pane_g6

0x4768,	// (0x00013088) bg_sctrl_sk_pane_g7

0x4778,	// (0x00013098) bg_sctrl_sk_pane_g8

0x4770,	// (0x00013090) bg_sctrl_sk_pane_g9

0xd0ef,	// (0x0001ba0f) popup_fep_china_hwr2_fs_candidate_window

0xd0f7,	// (0x0001ba17) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xd0f7,	// (0x0001ba17) popup_fep_china_hwr2_fs_control_window

0x70cc,	// (0x000159ec) sctrl_sk_top_pane_g2

0x0001,

0xfcf7,	// (0x0001e617) sctrl_sk_top_pane_g

0xddce,	// (0x0001c6ee) aid_fep_china_hwr2_fs_cell_ParamLimits

0xddce,	// (0x0001c6ee) aid_fep_china_hwr2_fs_cell

0xdddf,	// (0x0001c6ff) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdddf,	// (0x0001c6ff) bg_popup_fep_shadow_pane_cp4

0xddf6,	// (0x0001c716) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xddf6,	// (0x0001c716) bg_popup_fep_shadow_pane_cp5

0xde08,	// (0x0001c728) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xde08,	// (0x0001c728) popup_fep_china_hwr2_fs_control_bar_grid

0xde18,	// (0x0001c738) popup_fep_china_hwr2_fs_control_funtion_grid

0xa1c5,	// (0x00018ae5) aid_fep_china_hwr2_fs_candi_cell

0x227f,	// (0x00010b9f) bg_popup_fep_shadow_pane_cp6

0xa1cf,	// (0x00018aef) popup_fep_china_hwr2_fs_candidate_grid

0xde20,	// (0x0001c740) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xde20,	// (0x0001c740) cell_fep_china_hwr2_fs_funtion_grid

0x6e94,	// (0x000157b4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xa1d7,	// (0x00018af7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xa1d7,	// (0x00018af7) cell_fep_china_hwr2_fs_funtion_grid_g1

0xa1e5,	// (0x00018b05) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xa1e5,	// (0x00018b05) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd12,	// (0x0001e632) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd12,	// (0x0001e632) cell_fep_china_hwr2_fs_funtion_grid_g

0xde38,	// (0x0001c758) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xde38,	// (0x0001c758) cell_fep_china_hwr2_fs_funtion_grid_t1

0xde4d,	// (0x0001c76d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xde4d,	// (0x0001c76d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd17,	// (0x0001e637) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd17,	// (0x0001e637) cell_fep_china_hwr2_fs_funtion_grid_t

0xa1fb,	// (0x00018b1b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xa203,	// (0x00018b23) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xa20b,	// (0x00018b2b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1c,	// (0x0001e63c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xa213,	// (0x00018b33) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xa213,	// (0x00018b33) cell_fep_china_hwr2_fs_candidate_grid

0xa22c,	// (0x00018b4c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xa234,	// (0x00018b54) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6e94,	// (0x000157b4) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6e94,	// (0x000157b4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0001e463) cell_fep_china_hwr2_fs_candidate_grid_g

0xa23c,	// (0x00018b5c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x435e,	// (0x00012c7e) clock_nsta_pane_cp_24_ParamLimits

0x435e,	// (0x00012c7e) clock_nsta_pane_cp_24

0x43d1,	// (0x00012cf1) indicator_nsta_pane_cp_24_ParamLimits

0x43d1,	// (0x00012cf1) indicator_nsta_pane_cp_24

0x5446,	// (0x00013d66) heading_pane_g1

0x0001,

0xf8bf,	// (0x0001e1df) heading_pane_g

0x5e92,	// (0x000147b2) grid_sct_catagory_button_pane

0x5ec2,	// (0x000147e2) scroll_pane_cp5_ParamLimits

0x6b05,	// (0x00015425) button_value_adjust_pane_cp5_ParamLimits

0x6b05,	// (0x00015425) button_value_adjust_pane_cp5

0x6bfb,	// (0x0001551b) form2_midp_time_pane_ParamLimits

0xa24a,	// (0x00018b6a) cell_sct_catagory_button_pane_ParamLimits

0xa24a,	// (0x00018b6a) cell_sct_catagory_button_pane

0x6e59,	// (0x00015779) bg_button_pane_cp01_ParamLimits

0x6e59,	// (0x00015779) bg_button_pane_cp01

0x6e94,	// (0x000157b4) cell_sct_catagory_button_pane_g1

0xd3f0,	// (0x0001bd10) popup_tb_extension_window

0xde69,	// (0x0001c789) aid_size_cell_ext_ParamLimits

0xde69,	// (0x0001c789) aid_size_cell_ext

0x26f7,	// (0x00011017) bg_tb_trans_pane_cp1_ParamLimits

0x26f7,	// (0x00011017) bg_tb_trans_pane_cp1

0xde89,	// (0x0001c7a9) grid_tb_ext_pane_ParamLimits

0xde89,	// (0x0001c7a9) grid_tb_ext_pane

0xdeaf,	// (0x0001c7cf) cell_tb_ext_pane_ParamLimits

0xdeaf,	// (0x0001c7cf) cell_tb_ext_pane

0xdec4,	// (0x0001c7e4) cell_tb_ext_pane_g1_ParamLimits

0xdec4,	// (0x0001c7e4) cell_tb_ext_pane_g1

0xa25c,	// (0x00018b7c) cell_tb_ext_pane_t1

0x26f7,	// (0x00011017) list_highlight_pane_cp11_ParamLimits

0x26f7,	// (0x00011017) list_highlight_pane_cp11

0xc9cc,	// (0x0001b2ec) popup_uni_indicator_window_ParamLimits

0xc9cc,	// (0x0001b2ec) popup_uni_indicator_window

0x3160,	// (0x00011a80) bg_popup_sub_pane_cp14

0xa277,	// (0x00018b97) list_uniindi_pane

0xa283,	// (0x00018ba3) uniindi_top_pane

0x26f7,	// (0x00011017) bg_uniindi_top_pane

0xa2a2,	// (0x00018bc2) uniindi_top_pane_g1

0xa2b8,	// (0x00018bd8) uniindi_top_pane_g2

0x0003,

0xfd23,	// (0x0001e643) uniindi_top_pane_g

0xa2e2,	// (0x00018c02) uniindi_top_pane_t1

0xa30c,	// (0x00018c2c) list_single_uniindi_pane_ParamLimits

0xa30c,	// (0x00018c2c) list_single_uniindi_pane

0x6e94,	// (0x000157b4) bg_uniindi_top_pane_g1

0xa31e,	// (0x00018c3e) list_single_uniindi_pane_g1

0xa331,	// (0x00018c51) list_single_uniindi_pane_t1

0x227f,	// (0x00010b9f) control_bg_pane

0xa356,	// (0x00018c76) bg_sctrl_sk_pane_cp1

0xa35f,	// (0x00018c7f) bg_sctrl_sk_pane_cp2

0xa368,	// (0x00018c88) control_bg_pane_g1

0xa371,	// (0x00018c91) control_bg_pane_g2

0x0001,

0xfd2c,	// (0x0001e64c) control_bg_pane_g

0x695b,	// (0x0001527b) cell_indicator_nsta_pane_g1_ParamLimits

0x6969,	// (0x00015289) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0001e3c7) cell_indicator_nsta_pane_g_ParamLimits

0xc44b,	// (0x0001ad6b) form2_midp_time_pane_t1_ParamLimits

0x2a51,	// (0x00011371) main_idle_act4_pane_ParamLimits

0x2a51,	// (0x00011371) main_idle_act4_pane

0xd3f0,	// (0x0001bd10) popup_tb_extension_window_ParamLimits

0xdea3,	// (0x0001c7c3) tb_ext_find_pane_ParamLimits

0xdea3,	// (0x0001c7c3) tb_ext_find_pane

0xa37a,	// (0x00018c9a) ai_gene_pane_1_cp1

0x405b,	// (0x0001297b) ai_gene_pane_2_cp1

0xa382,	// (0x00018ca2) list_single_idle_plugin_calendar_pane

0xa38b,	// (0x00018cab) list_single_idle_plugin_notification_pane

0xa394,	// (0x00018cb4) list_single_idle_plugin_player_pane

0xdee1,	// (0x0001c801) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdee1,	// (0x0001c801) list_single_idle_plugin_shortcut_pane

0xdf03,	// (0x0001c823) main_idle_act4_pane_t1

0xdf15,	// (0x0001c835) main_idle_act4_pane_t2

0x0001,

0xfd31,	// (0x0001e651) main_idle_act4_pane_t

0xdf27,	// (0x0001c847) middle_sk_idle_act4_pane_ParamLimits

0xdf27,	// (0x0001c847) middle_sk_idle_act4_pane

0xdf3d,	// (0x0001c85d) popup_clock_digital_analogue_window_cp2

0xdf57,	// (0x0001c877) shortcut_wheel_idle_act4_pane_ParamLimits

0xdf57,	// (0x0001c877) shortcut_wheel_idle_act4_pane

0x6e94,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g1

0x6e94,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g2

0x6e94,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g3

0x6e94,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g4

0x6e94,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g5

0xa39d,	// (0x00018cbd) shortcut_wheel_idle_act4_pane_g6

0xa3a5,	// (0x00018cc5) shortcut_wheel_idle_act4_pane_g7

0xa3ad,	// (0x00018ccd) shortcut_wheel_idle_act4_pane_g8

0xa3b5,	// (0x00018cd5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd36,	// (0x0001e656) shortcut_wheel_idle_act4_pane_g

0x70cc,	// (0x000159ec) middle_sk_idle_act4_pane_g1_ParamLimits

0x70cc,	// (0x000159ec) middle_sk_idle_act4_pane_g1

0xdfc7,	// (0x0001c8e7) middle_sk_idle_act4_pane_g2_ParamLimits

0xdfc7,	// (0x0001c8e7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd59,	// (0x0001e679) middle_sk_idle_act4_pane_g_ParamLimits

0xfd59,	// (0x0001e679) middle_sk_idle_act4_pane_g

0xdfd3,	// (0x0001c8f3) middle_sk_idle_act4_pane_t1_ParamLimits

0xdfd3,	// (0x0001c8f3) middle_sk_idle_act4_pane_t1

0xdff0,	// (0x0001c910) grid_ai_shortcut_pane_ParamLimits

0xdff0,	// (0x0001c910) grid_ai_shortcut_pane

0xe009,	// (0x0001c929) list_highlight_pane_cp16_ParamLimits

0xe009,	// (0x0001c929) list_highlight_pane_cp16

0xe016,	// (0x0001c936) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe016,	// (0x0001c936) list_single_idle_plugin_shortcut_pane_g1

0xe022,	// (0x0001c942) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe022,	// (0x0001c942) list_single_idle_plugin_shortcut_pane_g2

0xe03a,	// (0x0001c95a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe03a,	// (0x0001c95a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5e,	// (0x0001e67e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5e,	// (0x0001e67e) list_single_idle_plugin_shortcut_pane_g

0xe04d,	// (0x0001c96d) cell_ai_shortcut_pane_ParamLimits

0xe04d,	// (0x0001c96d) cell_ai_shortcut_pane

0xe06e,	// (0x0001c98e) cell_ai_shortcut_pane_g1_ParamLimits

0xe06e,	// (0x0001c98e) cell_ai_shortcut_pane_g1

0xa37a,	// (0x00018c9a) ai_gene_pane_1_cp2

0xa3cb,	// (0x00018ceb) ai_gene_pane_2_cp2

0xa3d3,	// (0x00018cf3) list_highlight_pane_cp15

0xa3dc,	// (0x00018cfc) list_single_idle_plugin_calendar_pane_g1

0xa3d3,	// (0x00018cf3) list_highlight_pane_cp17

0xa3e4,	// (0x00018d04) list_single_idle_plugin_calendar_pane_g1_copy1

0xa3ec,	// (0x00018d0c) list_single_idle_plugin_player_pane_g1

0x6090,	// (0x000149b0) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd65,	// (0x0001e685) list_single_idle_plugin_player_pane_g

0xa3f4,	// (0x00018d14) list_single_idle_plugin_player_pane_t1

0xa402,	// (0x00018d22) list_single_idle_plugin_player_pane_t2

0xa410,	// (0x00018d30) list_single_idle_plugin_player_pane_t3

0xa41e,	// (0x00018d3e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6a,	// (0x0001e68a) list_single_idle_plugin_player_pane_t

0xa42c,	// (0x00018d4c) wait_bar_pane_cp15

0xa434,	// (0x00018d54) grid_ai_notification_pane

0x6090,	// (0x000149b0) list_single_idle_plugin_notification_pane_g1

0xe090,	// (0x0001c9b0) cell_ai_notification_pane_ParamLimits

0xe090,	// (0x0001c9b0) cell_ai_notification_pane

0xa43d,	// (0x00018d5d) cell_ai_notification_pane_g1

0xa445,	// (0x00018d65) cell_ai_notification_pane_t1

0xe09d,	// (0x0001c9bd) tb_ext_find_button_pane

0xe0a5,	// (0x0001c9c5) tb_ext_find_pane_g1

0xe0ad,	// (0x0001c9cd) tb_ext_find_pane_t1

0x391b,	// (0x0001223b) tb_ext_find_button_pane_g1

0xa453,	// (0x00018d73) tb_ext_find_button_pane_g2

0x0001,

0xfd73,	// (0x0001e693) tb_ext_find_button_pane_g

0xdf03,	// (0x0001c823) main_idle_act4_pane_t1_ParamLimits

0xdf15,	// (0x0001c835) main_idle_act4_pane_t2_ParamLimits

0xfd31,	// (0x0001e651) main_idle_act4_pane_t_ParamLimits

0xdf3d,	// (0x0001c85d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdf4b,	// (0x0001c86b) sat_plugin_idle_act4_pane_ParamLimits

0xdf4b,	// (0x0001c86b) sat_plugin_idle_act4_pane

0xe0bb,	// (0x0001c9db) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe0bb,	// (0x0001c9db) sat_plugin_idle_act4_pane_t1

0xe0ce,	// (0x0001c9ee) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe0ce,	// (0x0001c9ee) sat_plugin_idle_act4_pane_t2

0xe0e1,	// (0x0001ca01) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe0e1,	// (0x0001ca01) sat_plugin_idle_act4_pane_t3

0xe0f4,	// (0x0001ca14) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe0f4,	// (0x0001ca14) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd78,	// (0x0001e698) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd78,	// (0x0001e698) sat_plugin_idle_act4_pane_t

0xc92d,	// (0x0001b24d) popup_battery_window_ParamLimits

0xc92d,	// (0x0001b24d) popup_battery_window

0x26f7,	// (0x00011017) bg_popup_sub_pane_cp25_ParamLimits

0x26f7,	// (0x00011017) bg_popup_sub_pane_cp25

0xa45c,	// (0x00018d7c) popup_battery_window_g1_ParamLimits

0xa45c,	// (0x00018d7c) popup_battery_window_g1

0xa468,	// (0x00018d88) popup_battery_window_t1_ParamLimits

0xa468,	// (0x00018d88) popup_battery_window_t1

0xa47a,	// (0x00018d9a) popup_battery_window_t2_ParamLimits

0xa47a,	// (0x00018d9a) popup_battery_window_t2

0x0001,

0xfd81,	// (0x0001e6a1) popup_battery_window_t_ParamLimits

0xfd81,	// (0x0001e6a1) popup_battery_window_t

0x3f34,	// (0x00012854) midp_canvas_pane_ParamLimits

0x3fa3,	// (0x000128c3) midp_keypad_pane_ParamLimits

0x3fa3,	// (0x000128c3) midp_keypad_pane

0x426f,	// (0x00012b8f) main_midp_pane_ParamLimits

0x69de,	// (0x000152fe) signal_pane_g2_cp_ParamLimits

0xe107,	// (0x0001ca27) aid_size_cell_midp_keypad_ParamLimits

0xe107,	// (0x0001ca27) aid_size_cell_midp_keypad

0xe121,	// (0x0001ca41) midp_keyp_game_grid_pane_ParamLimits

0xe121,	// (0x0001ca41) midp_keyp_game_grid_pane

0xe13b,	// (0x0001ca5b) midp_keyp_rocker_pane_ParamLimits

0xe13b,	// (0x0001ca5b) midp_keyp_rocker_pane

0xe168,	// (0x0001ca88) midp_keyp_sk_left_pane_ParamLimits

0xe168,	// (0x0001ca88) midp_keyp_sk_left_pane

0xe1c0,	// (0x0001cae0) midp_keyp_sk_right_pane_ParamLimits

0xe1c0,	// (0x0001cae0) midp_keyp_sk_right_pane

0x227f,	// (0x00010b9f) bg_button_pane_cp03

0xe212,	// (0x0001cb32) midp_keyp_sk_left_pane_g1

0x227f,	// (0x00010b9f) bg_button_pane_cp04

0xe212,	// (0x0001cb32) midp_keyp_sk_right_pane_g1

0x6e94,	// (0x000157b4) midp_keyp_rocker_pane_g1

0xe21b,	// (0x0001cb3b) keyp_game_cell_pane_ParamLimits

0xe21b,	// (0x0001cb3b) keyp_game_cell_pane

0x227f,	// (0x00010b9f) bg_button_pane_cp02

0xe22c,	// (0x0001cb4c) keyp_game_cell_pane_g1

0xc963,	// (0x0001b283) popup_fep_vkb2_window_ParamLimits

0xc963,	// (0x0001b283) popup_fep_vkb2_window

0xe243,	// (0x0001cb63) aid_size_cell_vkb2_ParamLimits

0xe243,	// (0x0001cb63) aid_size_cell_vkb2

0xe297,	// (0x0001cbb7) popup_fep_vkb2_window_g1_ParamLimits

0xe297,	// (0x0001cbb7) popup_fep_vkb2_window_g1

0xe2df,	// (0x0001cbff) vkb2_area_bottom_pane_ParamLimits

0xe2df,	// (0x0001cbff) vkb2_area_bottom_pane

0xe317,	// (0x0001cc37) vkb2_area_keypad_pane_ParamLimits

0xe317,	// (0x0001cc37) vkb2_area_keypad_pane

0xe34f,	// (0x0001cc6f) vkb2_area_top_pane_ParamLimits

0xe34f,	// (0x0001cc6f) vkb2_area_top_pane

0xe3bf,	// (0x0001ccdf) vkb2_top_entry_pane_ParamLimits

0xe3bf,	// (0x0001ccdf) vkb2_top_entry_pane

0xe3e9,	// (0x0001cd09) vkb2_top_grid_left_pane_ParamLimits

0xe3e9,	// (0x0001cd09) vkb2_top_grid_left_pane

0xe407,	// (0x0001cd27) vkb2_top_grid_right_pane_ParamLimits

0xe407,	// (0x0001cd27) vkb2_top_grid_right_pane

0xe425,	// (0x0001cd45) vkb2_cell_keypad_pane_ParamLimits

0xe425,	// (0x0001cd45) vkb2_cell_keypad_pane

0xe4d6,	// (0x0001cdf6) vkb2_area_bottom_grid_pane_ParamLimits

0xe4d6,	// (0x0001cdf6) vkb2_area_bottom_grid_pane

0xe4fa,	// (0x0001ce1a) vkb2_area_bottom_pane_g1_ParamLimits

0xe4fa,	// (0x0001ce1a) vkb2_area_bottom_pane_g1

0xe51e,	// (0x0001ce3e) vkb2_area_bottom_pane_g2_ParamLimits

0xe51e,	// (0x0001ce3e) vkb2_area_bottom_pane_g2

0xe54c,	// (0x0001ce6c) vkb2_area_bottom_pane_g3_ParamLimits

0xe54c,	// (0x0001ce6c) vkb2_area_bottom_pane_g3

0x0002,

0xfd86,	// (0x0001e6a6) vkb2_area_bottom_pane_g_ParamLimits

0xfd86,	// (0x0001e6a6) vkb2_area_bottom_pane_g

0xe59d,	// (0x0001cebd) vkb2_top_cell_left_pane_ParamLimits

0xe59d,	// (0x0001cebd) vkb2_top_cell_left_pane

0xe5bd,	// (0x0001cedd) vkb2_top_entry_pane_g1_ParamLimits

0xe5bd,	// (0x0001cedd) vkb2_top_entry_pane_g1

0xe5cb,	// (0x0001ceeb) vkb2_top_entry_pane_t1_ParamLimits

0xe5cb,	// (0x0001ceeb) vkb2_top_entry_pane_t1

0xa49f,	// (0x00018dbf) vkb2_top_entry_pane_t2_ParamLimits

0xa49f,	// (0x00018dbf) vkb2_top_entry_pane_t2

0xa4d1,	// (0x00018df1) vkb2_top_entry_pane_t3_ParamLimits

0xa4d1,	// (0x00018df1) vkb2_top_entry_pane_t3

0x0002,

0xfd8d,	// (0x0001e6ad) vkb2_top_entry_pane_t_ParamLimits

0xfd8d,	// (0x0001e6ad) vkb2_top_entry_pane_t

0xe62a,	// (0x0001cf4a) vkb2_top_grid_right_pane_g1_ParamLimits

0xe62a,	// (0x0001cf4a) vkb2_top_grid_right_pane_g1

0xe640,	// (0x0001cf60) vkb2_top_grid_right_pane_g2_ParamLimits

0xe640,	// (0x0001cf60) vkb2_top_grid_right_pane_g2

0xe658,	// (0x0001cf78) vkb2_top_grid_right_pane_g3_ParamLimits

0xe658,	// (0x0001cf78) vkb2_top_grid_right_pane_g3

0xe670,	// (0x0001cf90) vkb2_top_grid_right_pane_g4_ParamLimits

0xe670,	// (0x0001cf90) vkb2_top_grid_right_pane_g4

0x0003,

0xfd94,	// (0x0001e6b4) vkb2_top_grid_right_pane_g_ParamLimits

0xfd94,	// (0x0001e6b4) vkb2_top_grid_right_pane_g

0xe686,	// (0x0001cfa6) vkb2_top_cell_left_pane_g1

0xe69d,	// (0x0001cfbd) vkb2_cell_keypad_pane_g1_ParamLimits

0xe69d,	// (0x0001cfbd) vkb2_cell_keypad_pane_g1

0xa4e7,	// (0x00018e07) vkb2_cell_keypad_pane_t1_ParamLimits

0xa4e7,	// (0x00018e07) vkb2_cell_keypad_pane_t1

0xe6ab,	// (0x0001cfcb) vkb2_cell_bottom_grid_pane_ParamLimits

0xe6ab,	// (0x0001cfcb) vkb2_cell_bottom_grid_pane

0xe6e4,	// (0x0001d004) vkb2_cell_bottom_grid_pane_g1

0xdf6b,	// (0x0001c88b) aid_call2_pane_cp02

0xdf73,	// (0x0001c893) aid_call_pane_cp02

0xdf7b,	// (0x0001c89b) clock_digital_number_pane_cp10

0xdf83,	// (0x0001c8a3) clock_digital_number_pane_cp11

0xdf8b,	// (0x0001c8ab) clock_digital_number_pane_cp12

0xdf93,	// (0x0001c8b3) clock_digital_number_pane_cp13

0xdf9b,	// (0x0001c8bb) clock_digital_separator_pane_cp10

0x391b,	// (0x0001223b) popup_clock_digital_analogue_window_cp2_g1

0x391b,	// (0x0001223b) popup_clock_digital_analogue_window_cp2_g2

0xdfa3,	// (0x0001c8c3) popup_clock_digital_analogue_window_cp2_g3

0x391b,	// (0x0001223b) popup_clock_digital_analogue_window_cp2_g4

0xdfa3,	// (0x0001c8c3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd49,	// (0x0001e669) popup_clock_digital_analogue_window_cp2_g

0xdfab,	// (0x0001c8cb) popup_clock_digital_analogue_window_cp2_t1

0xdfb9,	// (0x0001c8d9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd54,	// (0x0001e674) popup_clock_digital_analogue_window_cp2_t

0x6e94,	// (0x000157b4) clock_digital_number_pane_cp10_g1

0x6e94,	// (0x000157b4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001e463) clock_digital_number_pane_cp10_g

0x6e94,	// (0x000157b4) clock_digital_separator_pane_cp10_g1

0x6e94,	// (0x000157b4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001e463) clock_digital_separator_pane_cp10_g

0xa2c4,	// (0x00018be4) uniindi_top_pane_g3

0xa2d5,	// (0x00018bf5) uniindi_top_pane_g4

0xe490,	// (0x0001cdb0) vkb2_row_keypad_pane_ParamLimits

0xe490,	// (0x0001cdb0) vkb2_row_keypad_pane

0xe700,	// (0x0001d020) vkb2_cell_t_keypad_pane_ParamLimits

0xe700,	// (0x0001d020) vkb2_cell_t_keypad_pane

0xe70d,	// (0x0001d02d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xe70d,	// (0x0001d02d) vkb2_cell_t_keypad_pane_cp08

0xe71d,	// (0x0001d03d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xe71d,	// (0x0001d03d) vkb2_cell_t_keypad_pane_cp09

0xe72e,	// (0x0001d04e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xe72e,	// (0x0001d04e) vkb2_cell_t_keypad_pane_cp01

0xe73e,	// (0x0001d05e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xe73e,	// (0x0001d05e) vkb2_cell_t_keypad_pane_cp02

0xe74e,	// (0x0001d06e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xe74e,	// (0x0001d06e) vkb2_cell_t_keypad_pane_cp03

0xe75e,	// (0x0001d07e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xe75e,	// (0x0001d07e) vkb2_cell_t_keypad_pane_cp04

0xe76e,	// (0x0001d08e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xe76e,	// (0x0001d08e) vkb2_cell_t_keypad_pane_cp05

0xe77e,	// (0x0001d09e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xe77e,	// (0x0001d09e) vkb2_cell_t_keypad_pane_cp06

0xe78e,	// (0x0001d0ae) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xe78e,	// (0x0001d0ae) vkb2_cell_t_keypad_pane_cp07

0xe79e,	// (0x0001d0be) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xe79e,	// (0x0001d0be) vkb2_cell_t_keypad_pane_cp10

0x70cc,	// (0x000159ec) vkb2_cell_t_keypad_pane_g1

0xa4fe,	// (0x00018e1e) vkb2_cell_t_keypad_pane_t1

0x227f,	// (0x00010b9f) popup_grid_graphic2_window

0xe7b3,	// (0x0001d0d3) aid_size_cell_graphic2_ParamLimits

0xe7b3,	// (0x0001d0d3) aid_size_cell_graphic2

0xe7eb,	// (0x0001d10b) bg_popup_window_pane_cp21_ParamLimits

0xe7eb,	// (0x0001d10b) bg_popup_window_pane_cp21

0xe7f9,	// (0x0001d119) graphic2_pages_pane_ParamLimits

0xe7f9,	// (0x0001d119) graphic2_pages_pane

0xe833,	// (0x0001d153) grid_graphic2_control_pane_ParamLimits

0xe833,	// (0x0001d153) grid_graphic2_control_pane

0xe869,	// (0x0001d189) grid_graphic2_pane_ParamLimits

0xe869,	// (0x0001d189) grid_graphic2_pane

0xe8c9,	// (0x0001d1e9) cell_graphic2_pane

0x227f,	// (0x00010b9f) main_comp_mode_pane

0x828e,	// (0x00016bae) list_ai3_gene_pane_ParamLimits

0x864f,	// (0x00016f6f) bg_popup_window_pane_cp19_ParamLimits

0x865b,	// (0x00016f7b) bg_touch_area_indi_pane_ParamLimits

0x865b,	// (0x00016f7b) bg_touch_area_indi_pane

0x8671,	// (0x00016f91) bg_touch_area_indi_pane_cp01_ParamLimits

0x8671,	// (0x00016f91) bg_touch_area_indi_pane_cp01

0x8687,	// (0x00016fa7) bg_touch_area_indi_pane_cp02_ParamLimits

0x8687,	// (0x00016fa7) bg_touch_area_indi_pane_cp02

0x869d,	// (0x00016fbd) bg_touch_area_indi_pane_cp03_ParamLimits

0x869d,	// (0x00016fbd) bg_touch_area_indi_pane_cp03

0x86b3,	// (0x00016fd3) popup_slider_window_g1_ParamLimits

0x86cf,	// (0x00016fef) popup_slider_window_g2_ParamLimits

0x86eb,	// (0x0001700b) popup_slider_window_g3_ParamLimits

0xfcde,	// (0x0001e5fe) popup_slider_window_g_ParamLimits

0x8747,	// (0x00017067) popup_slider_window_t1_ParamLimits

0x87b9,	// (0x000170d9) small_volume_slider_vertical_pane_ParamLimits

0xe8c9,	// (0x0001d1e9) cell_graphic2_pane_ParamLimits

0xe905,	// (0x0001d225) bg_button_pane_cp10_ParamLimits

0xe905,	// (0x0001d225) bg_button_pane_cp10

0xe916,	// (0x0001d236) bg_button_pane_cp11_ParamLimits

0xe916,	// (0x0001d236) bg_button_pane_cp11

0xe927,	// (0x0001d247) graphic2_pages_pane_g1_ParamLimits

0xe927,	// (0x0001d247) graphic2_pages_pane_g1

0xe93a,	// (0x0001d25a) graphic2_pages_pane_g2_ParamLimits

0xe93a,	// (0x0001d25a) graphic2_pages_pane_g2

0x0001,

0xfda2,	// (0x0001e6c2) graphic2_pages_pane_g_ParamLimits

0xfda2,	// (0x0001e6c2) graphic2_pages_pane_g

0xe950,	// (0x0001d270) graphic2_pages_pane_t1_ParamLimits

0xe950,	// (0x0001d270) graphic2_pages_pane_t1

0xe966,	// (0x0001d286) cell_graphic2_control_pane_ParamLimits

0xe966,	// (0x0001d286) cell_graphic2_control_pane

0xe985,	// (0x0001d2a5) cell_graphic2_pane_g1_ParamLimits

0xe985,	// (0x0001d2a5) cell_graphic2_pane_g1

0xe992,	// (0x0001d2b2) cell_graphic2_pane_g2_ParamLimits

0xe992,	// (0x0001d2b2) cell_graphic2_pane_g2

0xe99f,	// (0x0001d2bf) cell_graphic2_pane_g3_ParamLimits

0xe99f,	// (0x0001d2bf) cell_graphic2_pane_g3

0xe9ac,	// (0x0001d2cc) cell_graphic2_pane_g4_ParamLimits

0xe9ac,	// (0x0001d2cc) cell_graphic2_pane_g4

0xe9b9,	// (0x0001d2d9) cell_graphic2_pane_g5_ParamLimits

0xe9b9,	// (0x0001d2d9) cell_graphic2_pane_g5

0x0004,

0xfda7,	// (0x0001e6c7) cell_graphic2_pane_g_ParamLimits

0xfda7,	// (0x0001e6c7) cell_graphic2_pane_g

0xe9d4,	// (0x0001d2f4) cell_graphic2_pane_t1_ParamLimits

0xe9d4,	// (0x0001d2f4) cell_graphic2_pane_t1

0x484e,	// (0x0001316e) grid_highlight_pane_cp11_ParamLimits

0x484e,	// (0x0001316e) grid_highlight_pane_cp11

0x26f7,	// (0x00011017) bg_button_pane_cp05

0xe9fd,	// (0x0001d31d) cell_graphic2_control_pane_g1

0x6e94,	// (0x000157b4) bg_touch_area_indi_pane_g1

0xa52a,	// (0x00018e4a) aid_cmod_rocker_key_size

0xa534,	// (0x00018e54) aid_cmode_itu_key_size

0xa53e,	// (0x00018e5e) main_cmode_video_pane

0xa546,	// (0x00018e66) main_comp_mode_itu_pane

0xa550,	// (0x00018e70) main_comp_mode_rocker_pane

0xa558,	// (0x00018e78) cell_cmode_rocker_pane_ParamLimits

0xa558,	// (0x00018e78) cell_cmode_rocker_pane

0xa56a,	// (0x00018e8a) cell_cmode_itu_pane_ParamLimits

0xa56a,	// (0x00018e8a) cell_cmode_itu_pane

0x3160,	// (0x00011a80) bg_button_pane_cp06_ParamLimits

0x3160,	// (0x00011a80) bg_button_pane_cp06

0x70cc,	// (0x000159ec) cell_cmode_rocker_pane_g1_ParamLimits

0x70cc,	// (0x000159ec) cell_cmode_rocker_pane_g1

0xa1d7,	// (0x00018af7) cell_cmode_rocker_pane_g2_ParamLimits

0xa1d7,	// (0x00018af7) cell_cmode_rocker_pane_g2

0x0001,

0xfdb7,	// (0x0001e6d7) cell_cmode_rocker_pane_g_ParamLimits

0xfdb7,	// (0x0001e6d7) cell_cmode_rocker_pane_g

0x227f,	// (0x00010b9f) bg_button_pane_cp07

0xa57f,	// (0x00018e9f) cell_cmode_itu_pane_g1

0xa588,	// (0x00018ea8) cell_cmode_itu_pane_t1

0xa596,	// (0x00018eb6) cell_cmode_itu_pane_t2

0x0001,

0xfdbc,	// (0x0001e6dc) cell_cmode_itu_pane_t

0xa346,	// (0x00018c66) aid_touch_ctrl_left

0xa34e,	// (0x00018c6e) aid_touch_ctrl_right

0x227f,	// (0x00010b9f) compa_mode_pane

0xea25,	// (0x0001d345) aid_cmod_rocker_key_size_cp

0xea2f,	// (0x0001d34f) aid_cmode_itu_key_size_cp

0xa5a4,	// (0x00018ec4) compa_mode_pane_g1

0xa5ac,	// (0x00018ecc) compa_mode_pane_g2

0xa5b4,	// (0x00018ed4) compa_mode_pane_g3

0x0002,

0xfdc1,	// (0x0001e6e1) compa_mode_pane_g

0xea39,	// (0x0001d359) main_comp_mode_itu_pane_cp

0xea41,	// (0x0001d361) main_comp_mode_rocker_pane_cp

0xea49,	// (0x0001d369) cell_cmode_itu_pane_cp_ParamLimits

0xea49,	// (0x0001d369) cell_cmode_itu_pane_cp

0xea5e,	// (0x0001d37e) cell_cmode_rocker_pane_cp_ParamLimits

0xea5e,	// (0x0001d37e) cell_cmode_rocker_pane_cp

0x3160,	// (0x00011a80) bg_button_pane_cp06_cp_ParamLimits

0x3160,	// (0x00011a80) bg_button_pane_cp06_cp

0x70cc,	// (0x000159ec) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x70cc,	// (0x000159ec) cell_cmode_rocker_pane_g1_cp

0x6e94,	// (0x000157b4) cell_cmode_rocker_pane_g2_cp

0x227f,	// (0x00010b9f) bg_button_pane_cp07_cp

0xea70,	// (0x0001d390) cell_cmode_itu_pane_g1_cp

0xea79,	// (0x0001d399) cell_cmode_itu_pane_t1_cp

0xea87,	// (0x0001d3a7) cell_cmode_itu_pane_t2_cp

0x5c20,	// (0x00014540) settings_code_pane_cp2

0x2450,	// (0x00010d70) bg_popup_window_pane_cp3_ParamLimits

0x28f5,	// (0x00011215) heading_pane_cp3_ParamLimits

0x2901,	// (0x00011221) listscroll_popup_graphic_pane_ParamLimits

0xd99c,	// (0x0001c2bc) fep_hwr_aid_pane_ParamLimits

0xdd4e,	// (0x0001c66e) aid_touch_sctrl_top_ParamLimits

0xdd5b,	// (0x0001c67b) sctrl_sk_top_pane_g1_ParamLimits

0x70cc,	// (0x000159ec) sctrl_sk_top_pane_g2_ParamLimits

0xfcf7,	// (0x0001e617) sctrl_sk_top_pane_g_ParamLimits

0xdd68,	// (0x0001c688) sctrl_sk_top_pane_t1_ParamLimits

0xdd4e,	// (0x0001c66e) aid_touch_sctrl_bottom_ParamLimits

0xdd68,	// (0x0001c688) sctrl_sk_bottom_pane_t1_ParamLimits

0xa290,	// (0x00018bb0) aid_area_touch_clock

0xe387,	// (0x0001cca7) aid_vkb2_area_top_pane_cell_ParamLimits

0xe387,	// (0x0001cca7) aid_vkb2_area_top_pane_cell

0xe4b2,	// (0x0001cdd2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe4b2,	// (0x0001cdd2) aid_vkb2_area_bottom_pane_cell

0xa497,	// (0x00018db7) popup_char_count_window

0xa5bc,	// (0x00018edc) popup_char_count_window_g1

0xa5c5,	// (0x00018ee5) popup_char_count_window_g2

0xa5ce,	// (0x00018eee) popup_char_count_window_g3

0x0002,

0xfdc8,	// (0x0001e6e8) popup_char_count_window_g

0xa5d7,	// (0x00018ef7) popup_char_count_window_t1

0xe275,	// (0x0001cb95) popup_fep_char_preview_window_ParamLimits

0xe275,	// (0x0001cb95) popup_fep_char_preview_window

0xe3a5,	// (0x0001ccc5) vkb2_top_candi_pane_ParamLimits

0xe3a5,	// (0x0001ccc5) vkb2_top_candi_pane

0xea95,	// (0x0001d3b5) cell_vkb2_top_candi_pane_ParamLimits

0xea95,	// (0x0001d3b5) cell_vkb2_top_candi_pane

0x4e1e,	// (0x0001373e) bg_popup_fep_char_preview_window_ParamLimits

0x4e1e,	// (0x0001373e) bg_popup_fep_char_preview_window

0xeace,	// (0x0001d3ee) popup_fep_char_preview_window_t1_ParamLimits

0xeace,	// (0x0001d3ee) popup_fep_char_preview_window_t1

0xa5f5,	// (0x00018f15) bg_popup_fep_char_preview_window_g1

0xa5ed,	// (0x00018f0d) bg_popup_fep_char_preview_window_g2

0xa5e5,	// (0x00018f05) bg_popup_fep_char_preview_window_g3

0xa615,	// (0x00018f35) bg_popup_fep_char_preview_window_g4

0xa60d,	// (0x00018f2d) bg_popup_fep_char_preview_window_g5

0xeb08,	// (0x0001d428) bg_popup_fep_char_preview_window_g6

0xa605,	// (0x00018f25) bg_popup_fep_char_preview_window_g7

0xa5fd,	// (0x00018f1d) bg_popup_fep_char_preview_window_g8

0xa61d,	// (0x00018f3d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcf,	// (0x0001e6ef) bg_popup_fep_char_preview_window_g

0x70cc,	// (0x000159ec) cell_vkb2_top_candi_pane_g1_ParamLimits

0x70cc,	// (0x000159ec) cell_vkb2_top_candi_pane_g1

0x753a,	// (0x00015e5a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x753a,	// (0x00015e5a) cell_vkb2_top_candi_pane_g2

0x755b,	// (0x00015e7b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x755b,	// (0x00015e7b) cell_vkb2_top_candi_pane_g3

0xeb10,	// (0x0001d430) cell_vkb2_top_candi_pane_g4_ParamLimits

0xeb10,	// (0x0001d430) cell_vkb2_top_candi_pane_g4

0xa1a4,	// (0x00018ac4) cell_vkb2_top_candi_pane_g5_ParamLimits

0xa1a4,	// (0x00018ac4) cell_vkb2_top_candi_pane_g5

0xa1d7,	// (0x00018af7) cell_vkb2_top_candi_pane_g6_ParamLimits

0xa1d7,	// (0x00018af7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde2,	// (0x0001e702) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde2,	// (0x0001e702) cell_vkb2_top_candi_pane_g

0xeb31,	// (0x0001d451) cell_vkb2_top_candi_pane_t1

0xd7b4,	// (0x0001c0d4) aid_size_touch_slider_mark_ParamLimits

0xd7b4,	// (0x0001c0d4) aid_size_touch_slider_mark

0xe827,	// (0x0001d147) grid_graphic2_catg_pane_ParamLimits

0xe827,	// (0x0001d147) grid_graphic2_catg_pane

0xe8a5,	// (0x0001d1c5) popup_grid_graphic2_window_t1_ParamLimits

0xe8a5,	// (0x0001d1c5) popup_grid_graphic2_window_t1

0xe8b7,	// (0x0001d1d7) popup_grid_graphic2_window_t2_ParamLimits

0xe8b7,	// (0x0001d1d7) popup_grid_graphic2_window_t2

0x0001,

0xfd9d,	// (0x0001e6bd) popup_grid_graphic2_window_t_ParamLimits

0xfd9d,	// (0x0001e6bd) popup_grid_graphic2_window_t

0x26f7,	// (0x00011017) bg_button_pane_cp05_ParamLimits

0xe9fd,	// (0x0001d31d) cell_graphic2_control_pane_g1_ParamLimits

0xeb47,	// (0x0001d467) cell_graphic2_catg_pane_ParamLimits

0xeb47,	// (0x0001d467) cell_graphic2_catg_pane

0x227f,	// (0x00010b9f) bg_button_pane_cp12

0xeb59,	// (0x0001d479) cell_graphic2_catg_pane_g1

0xa25c,	// (0x00018b7c) cell_tb_ext_pane_t1_ParamLimits

0xe5fd,	// (0x0001cf1d) vkb2_top_cell_right_narrow_pane_ParamLimits

0xe5fd,	// (0x0001cf1d) vkb2_top_cell_right_narrow_pane

0xe615,	// (0x0001cf35) vkb2_top_cell_right_wide_pane_ParamLimits

0xe615,	// (0x0001cf35) vkb2_top_cell_right_wide_pane

0xd98e,	// (0x0001c2ae) bg_vkb2_func_pane_ParamLimits

0xd98e,	// (0x0001c2ae) bg_vkb2_func_pane

0xe686,	// (0x0001cfa6) vkb2_top_cell_left_pane_g1_ParamLimits

0xd98e,	// (0x0001c2ae) bg_vkb2_fuc_pane_cp03_ParamLimits

0xd98e,	// (0x0001c2ae) bg_vkb2_fuc_pane_cp03

0xe6e4,	// (0x0001d004) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4748,	// (0x00013068) bg_vkb2_func_pane_g1

0x4740,	// (0x00013060) bg_vkb2_func_pane_g2

0x4750,	// (0x00013070) bg_vkb2_func_pane_g3

0x4758,	// (0x00013078) bg_vkb2_func_pane_g4

0x4760,	// (0x00013080) bg_vkb2_func_pane_g5

0x4768,	// (0x00013088) bg_vkb2_func_pane_g6

0x4778,	// (0x00013098) bg_vkb2_func_pane_g7

0x4770,	// (0x00013090) bg_vkb2_func_pane_g8

0x4738,	// (0x00013058) bg_vkb2_func_pane_g9

0x0008,

0xfdef,	// (0x0001e70f) bg_vkb2_func_pane_g

0xd98e,	// (0x0001c2ae) bg_vkb2_fuc_pane_cp01_ParamLimits

0xd98e,	// (0x0001c2ae) bg_vkb2_fuc_pane_cp01

0xe686,	// (0x0001cfa6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xe686,	// (0x0001cfa6) vkb2_top_cell_right_wide_pane_g1

0xd98e,	// (0x0001c2ae) bg_vkb2_fuc_pane_cp02_ParamLimits

0xd98e,	// (0x0001c2ae) bg_vkb2_fuc_pane_cp02

0xe6e4,	// (0x0001d004) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xe6e4,	// (0x0001d004) vkb2_top_cell_right_narrow_pane_g1

0x85e1,	// (0x00016f01) aid_touch_area_decrease_ParamLimits

0x85e1,	// (0x00016f01) aid_touch_area_decrease

0x85f9,	// (0x00016f19) aid_touch_area_increase_ParamLimits

0x85f9,	// (0x00016f19) aid_touch_area_increase

0x8605,	// (0x00016f25) aid_touch_area_mute_ParamLimits

0x8605,	// (0x00016f25) aid_touch_area_mute

0x8621,	// (0x00016f41) aid_touch_area_slider_ParamLimits

0x8621,	// (0x00016f41) aid_touch_area_slider

0x8707,	// (0x00017027) popup_slider_window_g4_ParamLimits

0x8707,	// (0x00017027) popup_slider_window_g4

0x8713,	// (0x00017033) popup_slider_window_g5_ParamLimits

0x8713,	// (0x00017033) popup_slider_window_g5

0x8735,	// (0x00017055) popup_slider_window_g6_ParamLimits

0x8735,	// (0x00017055) popup_slider_window_g6

0x8773,	// (0x00017093) popup_slider_window_t2_ParamLimits

0x8773,	// (0x00017093) popup_slider_window_t2

0x0001,

0xfceb,	// (0x0001e60b) popup_slider_window_t_ParamLimits

0xfceb,	// (0x0001e60b) popup_slider_window_t

0x878b,	// (0x000170ab) slider_pane_ParamLimits

0x878b,	// (0x000170ab) slider_pane

0xa625,	// (0x00018f45) slider_pane_g1_ParamLimits

0xa625,	// (0x00018f45) slider_pane_g1

0xa639,	// (0x00018f59) slider_pane_g2_ParamLimits

0xa639,	// (0x00018f59) slider_pane_g2

0xa64f,	// (0x00018f6f) slider_pane_g3_ParamLimits

0xa64f,	// (0x00018f6f) slider_pane_g3

0x0003,

0xfe02,	// (0x0001e722) slider_pane_g_ParamLimits

0xfe02,	// (0x0001e722) slider_pane_g

0xd440,	// (0x0001bd60) popup_tb_float_extension_window_ParamLimits

0xd440,	// (0x0001bd60) popup_tb_float_extension_window

0xa67b,	// (0x00018f9b) aid_size_cell_tb_float_ext

0x227f,	// (0x00010b9f) bg_popup_sub_window_cp28

0xa686,	// (0x00018fa6) grid_tb_float_ext_pane

0xa68e,	// (0x00018fae) cell_tb_float_ext_pane_ParamLimits

0xa68e,	// (0x00018fae) cell_tb_float_ext_pane

0xa6a6,	// (0x00018fc6) cell_tb_float_ext_pane_g1

0xa6af,	// (0x00018fcf) grid_highlight_pane_cp12

0xdac9,	// (0x0001c3e9) cell_last_hwr_side_pane_ParamLimits

0xdac9,	// (0x0001c3e9) cell_last_hwr_side_pane

0x6e94,	// (0x000157b4) cell_last_hwr_side_pane_g1

0xa6b8,	// (0x00018fd8) cell_last_hwr_side_pane_g2

0x0001,

0xfe0b,	// (0x0001e72b) cell_last_hwr_side_pane_g

0xe57a,	// (0x0001ce9a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe57a,	// (0x0001ce9a) vkb2_area_bottom_space_btn_pane

0x70cc,	// (0x000159ec) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xa4fe,	// (0x00018e1e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xeb31,	// (0x0001d451) cell_vkb2_top_candi_pane_t1_ParamLimits

0xeb62,	// (0x0001d482) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xeb62,	// (0x0001d482) vkb2_area_bottom_space_btn_pane_g1

0xeb98,	// (0x0001d4b8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xeb98,	// (0x0001d4b8) vkb2_area_bottom_space_btn_pane_g2

0xebce,	// (0x0001d4ee) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xebce,	// (0x0001d4ee) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe10,	// (0x0001e730) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe10,	// (0x0001e730) vkb2_area_bottom_space_btn_pane_g

0xda3d,	// (0x0001c35d) cel_fep_hwr_func_pane_ParamLimits

0xda3d,	// (0x0001c35d) cel_fep_hwr_func_pane

0xda79,	// (0x0001c399) cell_hwr_side_button_pane_ParamLimits

0xda79,	// (0x0001c399) cell_hwr_side_button_pane

0xa290,	// (0x00018bb0) aid_area_touch_clock_ParamLimits

0x26f7,	// (0x00011017) bg_uniindi_top_pane_ParamLimits

0xa2a2,	// (0x00018bc2) uniindi_top_pane_g1_ParamLimits

0xa2b8,	// (0x00018bd8) uniindi_top_pane_g2_ParamLimits

0xa2c4,	// (0x00018be4) uniindi_top_pane_g3_ParamLimits

0xa2d5,	// (0x00018bf5) uniindi_top_pane_g4_ParamLimits

0xfd23,	// (0x0001e643) uniindi_top_pane_g_ParamLimits

0xa2e2,	// (0x00018c02) uniindi_top_pane_t1_ParamLimits

0x26f7,	// (0x00011017) bg_vkb2_func_pane_cp01_ParamLimits

0x26f7,	// (0x00011017) bg_vkb2_func_pane_cp01

0xa6c1,	// (0x00018fe1) cel_fep_hwr_func_pane_g1_ParamLimits

0xa6c1,	// (0x00018fe1) cel_fep_hwr_func_pane_g1

0x26f7,	// (0x00011017) bg_vkb2_func_pane_cp02_ParamLimits

0x26f7,	// (0x00011017) bg_vkb2_func_pane_cp02

0xa6c1,	// (0x00018fe1) cell_hwr_side_button_pane_g1_ParamLimits

0xa6c1,	// (0x00018fe1) cell_hwr_side_button_pane_g1

0x45cc,	// (0x00012eec) status_pane_g4_ParamLimits

0x45cc,	// (0x00012eec) status_pane_g4

0x45e4,	// (0x00012f04) status_pane_t1

0x6c76,	// (0x00015596) form2_midp_gauge_slider_cont_pane

0x6c7e,	// (0x0001559e) form2_midp_gauge_slider_pane_t1_ParamLimits

0x6c90,	// (0x000155b0) form2_midp_gauge_slider_pane_t2_ParamLimits

0x6ca2,	// (0x000155c2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0001e416) form2_midp_gauge_slider_pane_t_ParamLimits

0x6cb4,	// (0x000155d4) form2_midp_slider_pane_ParamLimits

0xe235,	// (0x0001cb55) aid_size_cell_func_vkb2_ParamLimits

0xe235,	// (0x0001cb55) aid_size_cell_func_vkb2

0xa667,	// (0x00018f87) slider_pane_g4_ParamLimits

0xa667,	// (0x00018f87) slider_pane_g4

0xec14,	// (0x0001d534) form2_midp_gauge_slider_pane_t2_cp01

0xec22,	// (0x0001d542) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xec22,	// (0x0001d542) form2_midp_gauge_slider_pane_t3_cp01

0xec3f,	// (0x0001d55f) form2_midp_slider_pane_cp01

0x227f,	// (0x00010b9f) navi_smil_pane

0xa6f1,	// (0x00019011) navi_smil_pane_g1

0xa6f9,	// (0x00019019) navi_smil_pane_t1

0xa6cf,	// (0x00018fef) form2_midp_slider_pane_g1

0xa6d8,	// (0x00018ff8) form2_midp_slider_pane_g2

0xa6e0,	// (0x00019000) form2_midp_slider_pane_g3

0xa6cf,	// (0x00018fef) form2_midp_slider_pane_g4

0xec48,	// (0x0001d568) form2_midp_slider_pane_g5

0x0004,

0xfe19,	// (0x0001e739) form2_midp_slider_pane_g

0xec04,	// (0x0001d524) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xec04,	// (0x0001d524) vkb2_area_bottom_space_btn_pane_g4

0x440e,	// (0x00012d2e) lc0_navi_pane_ParamLimits

0x440e,	// (0x00012d2e) lc0_navi_pane

0x4484,	// (0x00012da4) lc0_stat_indi_pane_ParamLimits

0x4484,	// (0x00012da4) lc0_stat_indi_pane

0x449b,	// (0x00012dbb) ls0_title_pane_ParamLimits

0x449b,	// (0x00012dbb) ls0_title_pane

0x3160,	// (0x00011a80) bg_popup_sub_pane_cp14_ParamLimits

0xa277,	// (0x00018b97) list_uniindi_pane_ParamLimits

0xa283,	// (0x00018ba3) uniindi_top_pane_ParamLimits

0xa31e,	// (0x00018c3e) list_single_uniindi_pane_g1_ParamLimits

0xa331,	// (0x00018c51) list_single_uniindi_pane_t1_ParamLimits

0xec51,	// (0x0001d571) lc0_stat_clock_pane_ParamLimits

0xec51,	// (0x0001d571) lc0_stat_clock_pane

0xec5e,	// (0x0001d57e) lc0_stat_indi_pane_g1_ParamLimits

0xec5e,	// (0x0001d57e) lc0_stat_indi_pane_g1

0xec6b,	// (0x0001d58b) lc0_stat_indi_pane_g2_ParamLimits

0xec6b,	// (0x0001d58b) lc0_stat_indi_pane_g2

0x0001,

0xfe24,	// (0x0001e744) lc0_stat_indi_pane_g_ParamLimits

0xfe24,	// (0x0001e744) lc0_stat_indi_pane_g

0xec78,	// (0x0001d598) lc0_uni_indicator_pane_ParamLimits

0xec78,	// (0x0001d598) lc0_uni_indicator_pane

0xa707,	// (0x00019027) ls0_title_pane_g1_ParamLimits

0xa707,	// (0x00019027) ls0_title_pane_g1

0xec85,	// (0x0001d5a5) ls0_title_pane_t1_ParamLimits

0xec85,	// (0x0001d5a5) ls0_title_pane_t1

0xecbb,	// (0x0001d5db) lc0_uni_indicator_pane_g1_ParamLimits

0xecbb,	// (0x0001d5db) lc0_uni_indicator_pane_g1

0xa71b,	// (0x0001903b) lc0_stat_clock_pane_t1

0x227f,	// (0x00010b9f) main_ai5_pane

0xa729,	// (0x00019049) ai5_sk_pane_ParamLimits

0xa729,	// (0x00019049) ai5_sk_pane

0xeccd,	// (0x0001d5ed) cell_ai5_widget_pane_ParamLimits

0xeccd,	// (0x0001d5ed) cell_ai5_widget_pane

0xa736,	// (0x00019056) aid_size_cell_widget_grid

0xa743,	// (0x00019063) bg_ai5_widget_pane_ParamLimits

0xa743,	// (0x00019063) bg_ai5_widget_pane

0xed60,	// (0x0001d680) cell_ai5_widget_pane_g2

0xed74,	// (0x0001d694) cell_ai5_widget_pane_g3

0xed8e,	// (0x0001d6ae) cell_ai5_widget_pane_g4

0xed9e,	// (0x0001d6be) cell_ai5_widget_pane_g5

0xedae,	// (0x0001d6ce) cell_ai5_widget_pane_g6

0xedba,	// (0x0001d6da) cell_ai5_widget_pane_g7

0xee02,	// (0x0001d722) cell_ai5_widget_pane_t1_ParamLimits

0xee02,	// (0x0001d722) cell_ai5_widget_pane_t1

0xee1f,	// (0x0001d73f) cell_ai5_widget_pane_t2_ParamLimits

0xee1f,	// (0x0001d73f) cell_ai5_widget_pane_t2

0xee37,	// (0x0001d757) cell_ai5_widget_pane_t3_ParamLimits

0xee37,	// (0x0001d757) cell_ai5_widget_pane_t3

0xee4f,	// (0x0001d76f) cell_ai5_widget_pane_t4_ParamLimits

0xee4f,	// (0x0001d76f) cell_ai5_widget_pane_t4

0xee75,	// (0x0001d795) cell_ai5_widget_pane_t5_ParamLimits

0xee75,	// (0x0001d795) cell_ai5_widget_pane_t5

0xa77b,	// (0x0001909b) cell_ai5_widget_pane_t6_ParamLimits

0xa77b,	// (0x0001909b) cell_ai5_widget_pane_t6

0xa78d,	// (0x000190ad) cell_ai5_widget_pane_t7_ParamLimits

0xa78d,	// (0x000190ad) cell_ai5_widget_pane_t7

0xee94,	// (0x0001d7b4) cell_ai5_widget_pane_t8_ParamLimits

0xee94,	// (0x0001d7b4) cell_ai5_widget_pane_t8

0x0009,

0xfe3e,	// (0x0001e75e) cell_ai5_widget_pane_t_ParamLimits

0xfe3e,	// (0x0001e75e) cell_ai5_widget_pane_t

0xeef3,	// (0x0001d813) grid_ai5_widget_pane

0x3160,	// (0x00011a80) highlight_cell_ai5_widget_pane_ParamLimits

0x3160,	// (0x00011a80) highlight_cell_ai5_widget_pane

0xeeff,	// (0x0001d81f) ai5_sk_left_pane

0xef09,	// (0x0001d829) ai5_sk_middle_pane

0xef13,	// (0x0001d833) ai5_sk_right_pane

0xa7a6,	// (0x000190c6) bg_ai5_widget_pane_g1_ParamLimits

0xa7a6,	// (0x000190c6) bg_ai5_widget_pane_g1

0xa7b2,	// (0x000190d2) bg_ai5_widget_pane_g2_ParamLimits

0xa7b2,	// (0x000190d2) bg_ai5_widget_pane_g2

0xa7be,	// (0x000190de) bg_ai5_widget_pane_g3_ParamLimits

0xa7be,	// (0x000190de) bg_ai5_widget_pane_g3

0xa7ca,	// (0x000190ea) bg_ai5_widget_pane_g4_ParamLimits

0xa7ca,	// (0x000190ea) bg_ai5_widget_pane_g4

0xa7d6,	// (0x000190f6) bg_ai5_widget_pane_g5_ParamLimits

0xa7d6,	// (0x000190f6) bg_ai5_widget_pane_g5

0xa7e2,	// (0x00019102) bg_ai5_widget_pane_g6_ParamLimits

0xa7e2,	// (0x00019102) bg_ai5_widget_pane_g6

0xa7ee,	// (0x0001910e) bg_ai5_widget_pane_g7_ParamLimits

0xa7ee,	// (0x0001910e) bg_ai5_widget_pane_g7

0xa7fa,	// (0x0001911a) bg_ai5_widget_pane_g8_ParamLimits

0xa7fa,	// (0x0001911a) bg_ai5_widget_pane_g8

0xa806,	// (0x00019126) bg_ai5_widget_pane_g9_ParamLimits

0xa806,	// (0x00019126) bg_ai5_widget_pane_g9

0x0008,

0xfe53,	// (0x0001e773) bg_ai5_widget_pane_g_ParamLimits

0xfe53,	// (0x0001e773) bg_ai5_widget_pane_g

0xa836,	// (0x00019156) cell_shortcut_ai5_widget_pane_ParamLimits

0xa836,	// (0x00019156) cell_shortcut_ai5_widget_pane

0xa847,	// (0x00019167) bg_cell_shortcut_ai5_widget_pane

0x28b1,	// (0x000111d1) cell_grid_ai5_widget_pane_g1

0x3f20,	// (0x00012840) highlight_cell_shortcut_ai5_widget_pane

0x4740,	// (0x00013060) ai5_sk_left_pane_g1

0xa84f,	// (0x0001916f) ai5_sk_left_pane_g2

0xa857,	// (0x00019177) ai5_sk_left_pane_g3

0xa85f,	// (0x0001917f) ai5_sk_left_pane_g4

0x0003,

0xfe66,	// (0x0001e786) ai5_sk_left_pane_g

0xa867,	// (0x00019187) ai5_sk_left_pane_t1

0x4748,	// (0x00013068) ai5_sk_right_pane_g1

0xa875,	// (0x00019195) ai5_sk_right_pane_g2

0xa87d,	// (0x0001919d) ai5_sk_right_pane_g3

0xa885,	// (0x000191a5) ai5_sk_right_pane_g4

0x0003,

0xfe6f,	// (0x0001e78f) ai5_sk_right_pane_g

0xa88d,	// (0x000191ad) ai5_sk_right_pane_t1

0x4748,	// (0x00013068) ai5_sk_middle_pane_g1

0x4740,	// (0x00013060) ai5_sk_middle_pane_g2

0x4760,	// (0x00013080) ai5_sk_middle_pane_g3

0xa87d,	// (0x0001919d) ai5_sk_middle_pane_g4

0xa857,	// (0x00019177) ai5_sk_middle_pane_g5

0xa89b,	// (0x000191bb) ai5_sk_middle_pane_g6

0xef1d,	// (0x0001d83d) ai5_sk_middle_pane_g7

0x0006,

0xfe78,	// (0x0001e798) ai5_sk_middle_pane_g

0x42b5,	// (0x00012bd5) aid_touch_area_size_lc0_ParamLimits

0x42b5,	// (0x00012bd5) aid_touch_area_size_lc0

0xdbbc,	// (0x0001c4dc) cell_hwr_candidate_pane_t1_ParamLimits

0x42cf,	// (0x00012bef) aid_touch_navi_pane

0x457e,	// (0x00012e9e) status_dt_navi_pane_ParamLimits

0x457e,	// (0x00012e9e) status_dt_navi_pane

0x458b,	// (0x00012eab) status_dt_sta_pane_ParamLimits

0x458b,	// (0x00012eab) status_dt_sta_pane

0xef25,	// (0x0001d845) dt_sta_controll_pane

0xef32,	// (0x0001d852) dt_sta_indi_pane

0xef43,	// (0x0001d863) dt_sta_title_pane

0x26f7,	// (0x00011017) bg_dt_sta_indi_pane_ParamLimits

0x26f7,	// (0x00011017) bg_dt_sta_indi_pane

0xef56,	// (0x0001d876) dt_sta_battery_pane

0xef5e,	// (0x0001d87e) dt_sta_indi_pane_g1

0xef67,	// (0x0001d887) dt_sta_indi_pane_g2

0xef70,	// (0x0001d890) dt_sta_indi_pane_g3

0x0002,

0xfe87,	// (0x0001e7a7) dt_sta_indi_pane_g

0xef79,	// (0x0001d899) dt_sta_signal_pane

0x3160,	// (0x00011a80) bg_dt_sta_title_pane_ParamLimits

0x3160,	// (0x00011a80) bg_dt_sta_title_pane

0xef82,	// (0x0001d8a2) dt_sta_title_pane_g1

0xef8a,	// (0x0001d8aa) dt_sta_title_pane_t1_ParamLimits

0xef8a,	// (0x0001d8aa) dt_sta_title_pane_t1

0x227f,	// (0x00010b9f) bg_dt_sta_control_pane

0xef9f,	// (0x0001d8bf) dt_sta_controll_pane_g1

0xefa8,	// (0x0001d8c8) bg_dt_sta_title_pane_g1

0xefb1,	// (0x0001d8d1) bg_dt_sta_title_pane_g2

0xefba,	// (0x0001d8da) bg_dt_sta_title_pane_g3

0x0002,

0xfe8e,	// (0x0001e7ae) bg_dt_sta_title_pane_g

0x6e94,	// (0x000157b4) bg_dt_sta_indi_pane_g1

0xefc3,	// (0x0001d8e3) dt_sta_signal_pane_g1

0xefcb,	// (0x0001d8eb) dt_sta_signal_pane_g2

0x0001,

0xfe95,	// (0x0001e7b5) dt_sta_signal_pane_g

0xa8a3,	// (0x000191c3) dt_sta_battery_pane_g1

0xa8ac,	// (0x000191cc) dt_sta_battery_pane_t1

0x6e94,	// (0x000157b4) bg_dt_sta_control_pane_g1

0x3a15,	// (0x00012335) fep_china_uni_eep_pane

0x3a1d,	// (0x0001233d) fep_china_uni_entry_pane_ParamLimits

0x3a2d,	// (0x0001234d) popup_fep_china_uni_window_g1_ParamLimits

0x3a3d,	// (0x0001235d) popup_fep_china_uni_window_g2_ParamLimits

0x3a3d,	// (0x0001235d) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001e038) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001e038) popup_fep_china_uni_window_g

0xa8bb,	// (0x000191db) fep_china_uni_eep_pane_g1

0xa8c3,	// (0x000191e3) fep_china_uni_eep_pane_t1

0xa6e8,	// (0x00019008) aid_touch_area_size_smil_player

0x4406,	// (0x00012d26) lc0_clock_pane

0x45d8,	// (0x00012ef8) status_pane_g5_ParamLimits

0x45d8,	// (0x00012ef8) status_pane_g5

0xd1b4,	// (0x0001bad4) popup_keymap_window

0x45a0,	// (0x00012ec0) status_icon_pane

0xed74,	// (0x0001d694) cell_ai5_widget_pane_g3_ParamLimits

0xed8e,	// (0x0001d6ae) cell_ai5_widget_pane_g4_ParamLimits

0xed9e,	// (0x0001d6be) cell_ai5_widget_pane_g5_ParamLimits

0xedc6,	// (0x0001d6e6) cell_ai5_widget_pane_g8_ParamLimits

0xedc6,	// (0x0001d6e6) cell_ai5_widget_pane_g8

0xedda,	// (0x0001d6fa) cell_ai5_widget_pane_g9_ParamLimits

0xedda,	// (0x0001d6fa) cell_ai5_widget_pane_g9

0xedee,	// (0x0001d70e) cell_ai5_widget_pane_g10_ParamLimits

0xedee,	// (0x0001d70e) cell_ai5_widget_pane_g10

0xa8d2,	// (0x000191f2) status_icon_pane_g1

0x227f,	// (0x00010b9f) bg_popup_sub_pane_cp13

0xa8da,	// (0x000191fa) popup_keymap_window_t1

0x41ff,	// (0x00012b1f) control_pane_g6_ParamLimits

0x41ff,	// (0x00012b1f) control_pane_g6

0x41f2,	// (0x00012b12) control_pane_g7_ParamLimits

0x41f2,	// (0x00012b12) control_pane_g7

0x41e5,	// (0x00012b05) control_pane_g8_ParamLimits

0x41e5,	// (0x00012b05) control_pane_g8

0xef25,	// (0x0001d845) dt_sta_controll_pane_ParamLimits

0xef32,	// (0x0001d852) dt_sta_indi_pane_ParamLimits

0xef43,	// (0x0001d863) dt_sta_title_pane_ParamLimits

0x2b7c,	// (0x0001149c) aid_size_touch_scroll_bar_cale

0xc941,	// (0x0001b261) popup_discreet_window_ParamLimits

0xc941,	// (0x0001b261) popup_discreet_window

0xc9a5,	// (0x0001b2c5) popup_sk_window

0x4e1e,	// (0x0001373e) bg_popup_sub_pane_cp28_ParamLimits

0x4e1e,	// (0x0001373e) bg_popup_sub_pane_cp28

0xa8e8,	// (0x00019208) popup_discreet_window_g1_ParamLimits

0xa8e8,	// (0x00019208) popup_discreet_window_g1

0xa908,	// (0x00019228) popup_discreet_window_t1_ParamLimits

0xa908,	// (0x00019228) popup_discreet_window_t1

0xa926,	// (0x00019246) popup_discreet_window_t2_ParamLimits

0xa926,	// (0x00019246) popup_discreet_window_t2

0x0002,

0xfe9a,	// (0x0001e7ba) popup_discreet_window_t_ParamLimits

0xfe9a,	// (0x0001e7ba) popup_discreet_window_t

0xefd3,	// (0x0001d8f3) popup_sk_window_g1

0xefdc,	// (0x0001d8fc) popup_sk_window_g2

0x0001,

0xfea1,	// (0x0001e7c1) popup_sk_window_g

0xefe5,	// (0x0001d905) popup_sk_window_t1

0xeff3,	// (0x0001d913) popup_sk_window_t1_copy1

0xed60,	// (0x0001d680) cell_ai5_widget_pane_g2_ParamLimits

0xeea6,	// (0x0001d7c6) cell_ai5_widget_pane_t9_ParamLimits

0xeea6,	// (0x0001d7c6) cell_ai5_widget_pane_t9

0x227f,	// (0x00010b9f) main_fep_fshwr2_pane

0xf001,	// (0x0001d921) aid_fshwr2_btn_pane

0xf00d,	// (0x0001d92d) aid_fshwr2_syb_pane

0xf019,	// (0x0001d939) aid_fshwr2_txt_pane

0xf025,	// (0x0001d945) fshwr2_func_candi_pane

0xf036,	// (0x0001d956) fshwr2_hwr_syb_pane

0xf042,	// (0x0001d962) fshwr2_icf_pane

0x227f,	// (0x00010b9f) fshwr2_icf_bg_pane

0xf067,	// (0x0001d987) fshwr2_icf_pane_t1_ParamLimits

0xf067,	// (0x0001d987) fshwr2_icf_pane_t1

0x391b,	// (0x0001223b) fshwr2_func_candi_pane_g1

0xf07f,	// (0x0001d99f) fshwr2_func_candi_row_pane_ParamLimits

0xf07f,	// (0x0001d99f) fshwr2_func_candi_row_pane

0xf08f,	// (0x0001d9af) cell_fshwr2_syb_pane_ParamLimits

0xf08f,	// (0x0001d9af) cell_fshwr2_syb_pane

0x70cc,	// (0x000159ec) fshwr2_hwr_syb_pane_g1_ParamLimits

0x70cc,	// (0x000159ec) fshwr2_hwr_syb_pane_g1

0x227f,	// (0x00010b9f) bg_popup_call_pane_cp01

0xf0a3,	// (0x0001d9c3) fshwr2_func_candi_cell_pane_ParamLimits

0xf0a3,	// (0x0001d9c3) fshwr2_func_candi_cell_pane

0x543a,	// (0x00013d5a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x543a,	// (0x00013d5a) fshwr2_func_candi_cell_bg_pane

0xf0e2,	// (0x0001da02) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf0e2,	// (0x0001da02) fshwr2_func_candi_cell_pane_g1

0xf102,	// (0x0001da22) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf102,	// (0x0001da22) fshwr2_func_candi_cell_pane_t1

0x227f,	// (0x00010b9f) bg_button_pane_cp08

0x3f20,	// (0x00012840) cell_fshwr2_syb_bg_pane

0xf115,	// (0x0001da35) cell_fshwr2_syb_bg_pane_g1

0xf11d,	// (0x0001da3d) cell_fshwr2_syb_bg_pane_t1

0x3160,	// (0x00011a80) main_tmo_pane

0x58c6,	// (0x000141e6) uni_indicator_pane_g1_ParamLimits

0x58dc,	// (0x000141fc) uni_indicator_pane_g2_ParamLimits

0x58f2,	// (0x00014212) uni_indicator_pane_g3_ParamLimits

0x5907,	// (0x00014227) uni_indicator_pane_g4_ParamLimits

0x5907,	// (0x00014227) uni_indicator_pane_g4

0x591b,	// (0x0001423b) uni_indicator_pane_g5_ParamLimits

0x591b,	// (0x0001423b) uni_indicator_pane_g5

0x591b,	// (0x0001423b) uni_indicator_pane_g6_ParamLimits

0x591b,	// (0x0001423b) uni_indicator_pane_g6

0xf915,	// (0x0001e235) uni_indicator_pane_g_ParamLimits

0x85c5,	// (0x00016ee5) popup_tmo_note_window_ParamLimits

0x85c5,	// (0x00016ee5) popup_tmo_note_window

0x3160,	// (0x00011a80) fshwr2_bg_pane

0xf0f3,	// (0x0001da13) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf0f3,	// (0x0001da13) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea6,	// (0x0001e7c6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea6,	// (0x0001e7c6) fshwr2_func_candi_cell_pane_g

0x6e94,	// (0x000157b4) bg_popup_window_pane_cp01

0xf12c,	// (0x0001da4c) bg_popup_window_pane_g1_cp01

0xa991,	// (0x000192b1) bg_popup_window_pane_cp22_ParamLimits

0xa991,	// (0x000192b1) bg_popup_window_pane_cp22

0xa99f,	// (0x000192bf) listscroll_tmo_link_pane_ParamLimits

0xa99f,	// (0x000192bf) listscroll_tmo_link_pane

0xa9df,	// (0x000192ff) popup_tmo_note_window_g1_ParamLimits

0xa9df,	// (0x000192ff) popup_tmo_note_window_g1

0xa9ec,	// (0x0001930c) tmo_note_info_pane_ParamLimits

0xa9ec,	// (0x0001930c) tmo_note_info_pane

0xf135,	// (0x0001da55) list_tmo_note_info_pane_g1_ParamLimits

0xf135,	// (0x0001da55) list_tmo_note_info_pane_g1

0xaa06,	// (0x00019326) list_tmo_note_info_pane_g2_ParamLimits

0xaa06,	// (0x00019326) list_tmo_note_info_pane_g2

0x0001,

0xfeab,	// (0x0001e7cb) list_tmo_note_info_pane_g_ParamLimits

0xfeab,	// (0x0001e7cb) list_tmo_note_info_pane_g

0xaa22,	// (0x00019342) list_tmo_note_info_text_pane_ParamLimits

0xaa22,	// (0x00019342) list_tmo_note_info_text_pane

0xaa64,	// (0x00019384) list_tmo_link_pane

0xaa71,	// (0x00019391) scroll_pane_cp20

0xaa7e,	// (0x0001939e) list_single_tmo_link_pane_ParamLimits

0xaa7e,	// (0x0001939e) list_single_tmo_link_pane

0xaa8e,	// (0x000193ae) list_single_tmo_link_pane_t1

0xaa9c,	// (0x000193bc) list_tmo_note_info_text_pane_t1_ParamLimits

0xaa9c,	// (0x000193bc) list_tmo_note_info_text_pane_t1

0x3383,	// (0x00011ca3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x3383,	// (0x00011ca3) aid_size_touch_scroll_bar_cp01

0xbdab,	// (0x0001a6cb) aid_size_touch_slider_marker

0xc991,	// (0x0001b2b1) popup_settings_window_ParamLimits

0xc991,	// (0x0001b2b1) popup_settings_window

0xbf5b,	// (0x0001a87b) popup_candi_list_indi_window

0x42cf,	// (0x00012bef) aid_touch_navi_pane_ParamLimits

0xdd22,	// (0x0001c642) rs_clock_indi_pane

0xdd2b,	// (0x0001c64b) sctrl_sk_bottom_pane_ParamLimits

0xdd3c,	// (0x0001c65c) sctrl_sk_top_pane_ParamLimits

0xe28f,	// (0x0001cbaf) popup_fep_tooltip_window

0xa736,	// (0x00019056) aid_size_cell_widget_grid_ParamLimits

0xed4c,	// (0x0001d66c) cell_ai5_widget_pane_g1_ParamLimits

0xed4c,	// (0x0001d66c) cell_ai5_widget_pane_g1

0xedae,	// (0x0001d6ce) cell_ai5_widget_pane_g6_ParamLimits

0xedba,	// (0x0001d6da) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe29,	// (0x0001e749) cell_ai5_widget_pane_g_ParamLimits

0xfe29,	// (0x0001e749) cell_ai5_widget_pane_g

0xeed5,	// (0x0001d7f5) cell_ai5_widget_pane_t10_ParamLimits

0xeed5,	// (0x0001d7f5) cell_ai5_widget_pane_t10

0xeef3,	// (0x0001d813) grid_ai5_widget_pane_ParamLimits

0xa812,	// (0x00019132) cell_contacts_ai5_widget_pane_ParamLimits

0xa812,	// (0x00019132) cell_contacts_ai5_widget_pane

0xa93b,	// (0x0001925b) popup_discreet_window_t3_ParamLimits

0xa93b,	// (0x0001925b) popup_discreet_window_t3

0xf055,	// (0x0001d975) popup_fshwr2_char_preview_window_ParamLimits

0xf055,	// (0x0001d975) popup_fshwr2_char_preview_window

0xf14c,	// (0x0001da6c) tmo_note_info_pane_t1

0xf161,	// (0x0001da81) tmo_note_info_pane_t2

0xf176,	// (0x0001da96) tmo_note_info_pane_t3

0xaa40,	// (0x00019360) tmo_note_info_pane_t4

0xaa52,	// (0x00019372) tmo_note_info_pane_t5

0x0004,

0xfeb0,	// (0x0001e7d0) tmo_note_info_pane_t

0xaa64,	// (0x00019384) list_tmo_link_pane_ParamLimits

0xaa71,	// (0x00019391) scroll_pane_cp20_ParamLimits

0x227f,	// (0x00010b9f) bg_popup_fep_char_preview_window_cp01

0xaab5,	// (0x000193d5) popup_fshwr2_char_preview_window_t1

0xaac3,	// (0x000193e3) popup_candi_list_indi_window_g1

0xaacc,	// (0x000193ec) bg_cell_contacts_ai5_widget_pane

0xaad8,	// (0x000193f8) cell_contacts_ai5_widget_pane_g1

0xaaed,	// (0x0001940d) cell_contacts_ai5_widget_pane_g2

0xaaf9,	// (0x00019419) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebb,	// (0x0001e7db) cell_contacts_ai5_widget_pane_g

0xab05,	// (0x00019425) cell_contacts_ai5_widget_pane_t1

0x3160,	// (0x00011a80) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf1ee,	// (0x0001db0e) settings_container_pane

0x3f20,	// (0x00012840) listscroll_set_pane_copy1

0x63f2,	// (0x00014d12) scroll_pane_cp121_copy1

0xab17,	// (0x00019437) set_content_pane_copy1

0xab1f,	// (0x0001943f) aid_height_set_list_copy1_ParamLimits

0xab1f,	// (0x0001943f) aid_height_set_list_copy1

0x5af2,	// (0x00014412) aid_size_parent_copy1_ParamLimits

0x5af2,	// (0x00014412) aid_size_parent_copy1

0xab2b,	// (0x0001944b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xab2b,	// (0x0001944b) button_value_adjust_pane_cp6_copy1

0x426f,	// (0x00012b8f) list_highlight_pane_cp2_copy1_ParamLimits

0x426f,	// (0x00012b8f) list_highlight_pane_cp2_copy1

0xf1fa,	// (0x0001db1a) list_set_pane_copy1_ParamLimits

0xf1fa,	// (0x0001db1a) list_set_pane_copy1

0xf18b,	// (0x0001daab) main_pane_set_t1_copy1_ParamLimits

0xf18b,	// (0x0001daab) main_pane_set_t1_copy1

0xf1c5,	// (0x0001dae5) main_pane_set_t2_copy1_ParamLimits

0xf1c5,	// (0x0001dae5) main_pane_set_t2_copy1

0xab3f,	// (0x0001945f) main_pane_set_t3_copy1

0xab4d,	// (0x0001946d) main_pane_set_t4_copy1

0xf1e2,	// (0x0001db02) set_content_pane_g1_copy1_ParamLimits

0xf1e2,	// (0x0001db02) set_content_pane_g1_copy1

0xab5b,	// (0x0001947b) setting_code_pane_copy1

0xab63,	// (0x00019483) setting_slider_graphic_pane_copy1

0xab63,	// (0x00019483) setting_slider_pane_copy1

0xab63,	// (0x00019483) setting_text_pane_copy1

0xab63,	// (0x00019483) setting_volume_pane_copy1

0xab6b,	// (0x0001948b) settings_code_pane_cp2_copy1

0xab73,	// (0x00019493) settings_code_pane_cp_copy1_ParamLimits

0xab73,	// (0x00019493) settings_code_pane_cp_copy1

0xf288,	// (0x0001dba8) volume_set_pane_copy1

0xf290,	// (0x0001dbb0) volume_set_pane_g10_copy1

0xf298,	// (0x0001dbb8) volume_set_pane_g1_copy1

0xf2a0,	// (0x0001dbc0) volume_set_pane_g2_copy1

0xf2a8,	// (0x0001dbc8) volume_set_pane_g3_copy1

0xf2b0,	// (0x0001dbd0) volume_set_pane_g4_copy1

0xf2b8,	// (0x0001dbd8) volume_set_pane_g5_copy1

0xf2c0,	// (0x0001dbe0) volume_set_pane_g6_copy1

0xf2c8,	// (0x0001dbe8) volume_set_pane_g7_copy1

0xf2d0,	// (0x0001dbf0) volume_set_pane_g8_copy1

0xf2d8,	// (0x0001dbf8) volume_set_pane_g9_copy1

0x2450,	// (0x00010d70) bg_set_opt_pane_cp_copy1_ParamLimits

0x2450,	// (0x00010d70) bg_set_opt_pane_cp_copy1

0xca7b,	// (0x0001b39b) setting_slider_pane_t1_copy1_ParamLimits

0xca7b,	// (0x0001b39b) setting_slider_pane_t1_copy1

0xf2e0,	// (0x0001dc00) setting_slider_pane_t2_copy1_ParamLimits

0xf2e0,	// (0x0001dc00) setting_slider_pane_t2_copy1

0xf2f9,	// (0x0001dc19) setting_slider_pane_t3_copy1_ParamLimits

0xf2f9,	// (0x0001dc19) setting_slider_pane_t3_copy1

0xcac1,	// (0x0001b3e1) slider_set_pane_copy1_ParamLimits

0xcac1,	// (0x0001b3e1) slider_set_pane_copy1

0x3283,	// (0x00011ba3) set_opt_bg_pane_g1_copy2

0x328b,	// (0x00011bab) set_opt_bg_pane_g2_copy2

0xab87,	// (0x000194a7) set_opt_bg_pane_g3_copy2

0x329b,	// (0x00011bbb) set_opt_bg_pane_g4_copy2

0x32a3,	// (0x00011bc3) set_opt_bg_pane_g5_copy2

0x32ab,	// (0x00011bcb) set_opt_bg_pane_g6_copy2

0xf310,	// (0x0001dc30) set_opt_bg_pane_g7_copy2

0xab8f,	// (0x000194af) set_opt_bg_pane_g8_copy2

0xab97,	// (0x000194b7) set_opt_bg_pane_g9_copy2

0xd7b4,	// (0x0001c0d4) aid_size_touch_slider_mark_copy1_ParamLimits

0xd7b4,	// (0x0001c0d4) aid_size_touch_slider_mark_copy1

0x5c28,	// (0x00014548) slider_set_pane_g1_copy1

0x5c31,	// (0x00014551) slider_set_pane_g2_copy1

0xd7d4,	// (0x0001c0f4) slider_set_pane_g3_copy1_ParamLimits

0xd7d4,	// (0x0001c0f4) slider_set_pane_g3_copy1

0xd7e8,	// (0x0001c108) slider_set_pane_g4_copy1_ParamLimits

0xd7e8,	// (0x0001c108) slider_set_pane_g4_copy1

0xd800,	// (0x0001c120) slider_set_pane_g5_copy1_ParamLimits

0xd800,	// (0x0001c120) slider_set_pane_g5_copy1

0xd7d4,	// (0x0001c0f4) slider_set_pane_g6_copy1_ParamLimits

0xd7d4,	// (0x0001c0f4) slider_set_pane_g6_copy1

0xf318,	// (0x0001dc38) slider_set_pane_g7_copy1_ParamLimits

0xf318,	// (0x0001dc38) slider_set_pane_g7_copy1

0x2370,	// (0x00010c90) bg_set_opt_pane_cp2_copy1

0x2492,	// (0x00010db2) setting_slider_graphic_pane_g1_copy1

0xf32e,	// (0x0001dc4e) setting_slider_graphic_pane_t1_copy1

0xf33d,	// (0x0001dc5d) setting_slider_graphic_pane_t2_copy1

0xf34c,	// (0x0001dc6c) slider_set_pane_cp_copy1

0xaba7,	// (0x000194c7) input_focus_pane_cp1_copy1

0xabb0,	// (0x000194d0) list_set_text_pane_copy1

0xabb8,	// (0x000194d8) setting_text_pane_g1_copy1

0xc7d7,	// (0x0001b0f7) set_text_pane_t1_copy1

0xaba7,	// (0x000194c7) input_focus_pane_cp2_copy1

0xabb8,	// (0x000194d8) setting_code_pane_g1_copy1

0xabc1,	// (0x000194e1) setting_code_pane_t1_copy1

0xf354,	// (0x0001dc74) list_set_graphic_pane_copy1

0x2370,	// (0x00010c90) bg_set_opt_pane_cp4_copy1

0xabcf,	// (0x000194ef) list_set_graphic_pane_g1_copy1_ParamLimits

0xabcf,	// (0x000194ef) list_set_graphic_pane_g1_copy1

0xabdb,	// (0x000194fb) list_set_graphic_pane_g2_copy1

0x3c92,	// (0x000125b2) list_set_graphic_pane_t1_copy1_ParamLimits

0x3c92,	// (0x000125b2) list_set_graphic_pane_t1_copy1

0x6e94,	// (0x000157b4) rs_clock_indi_pane_g1

0xabe3,	// (0x00019503) rs_clock_indi_pane_t1

0xabf1,	// (0x00019511) rs_indi_pane

0xabf9,	// (0x00019519) rs_indi_pane_g1

0xac02,	// (0x00019522) rs_indi_pane_g2

0xaac3,	// (0x000193e3) rs_indi_pane_g3

0x0002,

0xfec2,	// (0x0001e7e2) rs_indi_pane_g

0x3f20,	// (0x00012840) bg_popup_preview_window_pane_cp03

0xac0b,	// (0x0001952b) popup_fep_tooltip_window_t1

0x7c73,	// (0x00016593) popup_note2_window_g2_ParamLimits

0x7c73,	// (0x00016593) popup_note2_window_g2

0x0001,

0xfc62,	// (0x0001e582) popup_note2_window_g_ParamLimits

0xfc62,	// (0x0001e582) popup_note2_window_g

0x8254,	// (0x00016b74) bg_popup_sub_pane_cp11_ParamLimits

0x8261,	// (0x00016b81) cell_ai3_links_pane_g1_ParamLimits

0x8278,	// (0x00016b98) cell_ai3_links_pane_t1

0xc7d7,	// (0x0001b0f7) set_text_pane_t1_copy1_ParamLimits

0x3e47,	// (0x00012767) cell_graphic_popup_pane_cp2_ParamLimits

0x3e47,	// (0x00012767) cell_graphic_popup_pane_cp2

0xac19,	// (0x00019539) cell_graphic_popup_pane_g1_cp2

0x2a2b,	// (0x0001134b) cell_graphic_popup_pane_g2_cp2

0xac21,	// (0x00019541) cell_graphic_popup_pane_g3_cp2

0xac29,	// (0x00019549) cell_graphic_popup_pane_t2_cp2

0x2a3c,	// (0x0001135c) grid_highlight_pane_cp3_cp2

0x366d,	// (0x00011f8d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3160,	// (0x00011a80) main_tmo_pane_ParamLimits

0x85bd,	// (0x00016edd) popup_tmo_big_image_note_window

0xa773,	// (0x00019093) cell_ai5_widget_list_pane

0xed43,	// (0x0001d663) cell_ai5_widget_lrg_icon_pane

0xf14c,	// (0x0001da6c) tmo_note_info_pane_t1_ParamLimits

0xf161,	// (0x0001da81) tmo_note_info_pane_t2_ParamLimits

0xf176,	// (0x0001da96) tmo_note_info_pane_t3_ParamLimits

0xaa40,	// (0x00019360) tmo_note_info_pane_t4_ParamLimits

0xaa52,	// (0x00019372) tmo_note_info_pane_t5_ParamLimits

0xfeb0,	// (0x0001e7d0) tmo_note_info_pane_t_ParamLimits

0xf1ee,	// (0x0001db0e) settings_container_pane_ParamLimits

0xab9f,	// (0x000194bf) indicator_popup_pane_cp5

0xab9f,	// (0x000194bf) indicator_popup_pane_cp6

0xf354,	// (0x0001dc74) list_set_graphic_pane_copy1_ParamLimits

0x227f,	// (0x00010b9f) bg_popup_window_pane_cp23

0xac37,	// (0x00019557) popup_tmo_big_image_note_window_g1

0xac40,	// (0x00019560) popup_tmo_big_image_note_window_t1

0xac4e,	// (0x0001956e) popup_tmo_big_image_note_window_t2

0xac5c,	// (0x0001957c) popup_tmo_big_image_note_window_t3

0x0002,

0xfec9,	// (0x0001e7e9) popup_tmo_big_image_note_window_t

0x6e94,	// (0x000157b4) cell_ai5_widget_lrg_icon_pane_g1

0xac6a,	// (0x0001958a) cell_ai5_widget_lrg_icon_pane_t1

0xf368,	// (0x0001dc88) cell_ai5_widget_list_row_pane_ParamLimits

0xf368,	// (0x0001dc88) cell_ai5_widget_list_row_pane

0xf37f,	// (0x0001dc9f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf37f,	// (0x0001dc9f) cell_ai5_widget_list_row_pane_g1

0xf38c,	// (0x0001dcac) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf38c,	// (0x0001dcac) cell_ai5_widget_list_row_pane_t1

0xf3ba,	// (0x0001dcda) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3ba,	// (0x0001dcda) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed0,	// (0x0001e7f0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed0,	// (0x0001e7f0) cell_ai5_widget_list_row_pane_t

0x227f,	// (0x00010b9f) main_fep_vtchi_ss_pane

0xac98,	// (0x000195b8) popup_fep_char_pre_window

0xaca0,	// (0x000195c0) popup_fep_ituss_window

0xf3e2,	// (0x0001dd02) popup_fep_vkbss_window

0xacd3,	// (0x000195f3) grid_vkbss_keypad_pane_ParamLimits

0xacd3,	// (0x000195f3) grid_vkbss_keypad_pane

0xace3,	// (0x00019603) ituss_keypad_pane

0xf3fe,	// (0x0001dd1e) aid_vkbss_key_offset_ParamLimits

0xf3fe,	// (0x0001dd1e) aid_vkbss_key_offset

0xf40a,	// (0x0001dd2a) cell_vkbss_key_pane_ParamLimits

0xf40a,	// (0x0001dd2a) cell_vkbss_key_pane

0x45b4,	// (0x00012ed4) bg_cell_vkbss_key_g1_ParamLimits

0x45b4,	// (0x00012ed4) bg_cell_vkbss_key_g1

0xacf2,	// (0x00019612) cell_vkbss_key_3p_pane_ParamLimits

0xacf2,	// (0x00019612) cell_vkbss_key_3p_pane

0xad0c,	// (0x0001962c) cell_vkbss_key_g1_ParamLimits

0xad0c,	// (0x0001962c) cell_vkbss_key_g1

0xad26,	// (0x00019646) cell_vkbss_key_t1_ParamLimits

0xad26,	// (0x00019646) cell_vkbss_key_t1

0xf420,	// (0x0001dd40) cell_ituss_key_pane_ParamLimits

0xf420,	// (0x0001dd40) cell_ituss_key_pane

0xad51,	// (0x00019671) bg_cell_ituss_key_g1_ParamLimits

0xad51,	// (0x00019671) bg_cell_ituss_key_g1

0xad5d,	// (0x0001967d) cell_ituss_key_pane_g1_ParamLimits

0xad5d,	// (0x0001967d) cell_ituss_key_pane_g1

0xf431,	// (0x0001dd51) cell_ituss_key_pane_g2_ParamLimits

0xf431,	// (0x0001dd51) cell_ituss_key_pane_g2

0x0002,

0xfed7,	// (0x0001e7f7) cell_ituss_key_pane_g_ParamLimits

0xfed7,	// (0x0001e7f7) cell_ituss_key_pane_g

0xf459,	// (0x0001dd79) cell_ituss_key_t1_ParamLimits

0xf459,	// (0x0001dd79) cell_ituss_key_t1

0xf493,	// (0x0001ddb3) cell_ituss_key_t2_ParamLimits

0xf493,	// (0x0001ddb3) cell_ituss_key_t2

0xf4c4,	// (0x0001dde4) cell_ituss_key_t3_ParamLimits

0xf4c4,	// (0x0001dde4) cell_ituss_key_t3

0xf493,	// (0x0001ddb3) cell_ituss_key_t4_ParamLimits

0xf493,	// (0x0001ddb3) cell_ituss_key_t4

0x0004,

0xfede,	// (0x0001e7fe) cell_ituss_key_t_ParamLimits

0xfede,	// (0x0001e7fe) cell_ituss_key_t

0xad93,	// (0x000196b3) cell_vkbss_key_3p_pane_g1

0xad8b,	// (0x000196ab) cell_vkbss_key_3p_pane_g2

0xad83,	// (0x000196a3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x0001e809) cell_vkbss_key_3p_pane_g

0x3f20,	// (0x00012840) bg_popup_fep_char_preview_window_cp02

0xad9b,	// (0x000196bb) popup_fep_char_pre_window_t1

0xed30,	// (0x0001d650) main_ai5_sk_pane

0xaacc,	// (0x000193ec) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xaad8,	// (0x000193f8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xaaed,	// (0x0001940d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xaaf9,	// (0x00019419) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebb,	// (0x0001e7db) cell_contacts_ai5_widget_pane_g_ParamLimits

0xab05,	// (0x00019425) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3160,	// (0x00011a80) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf507,	// (0x0001de27) main_ai5_sk_pane_g1

0x4c68,	// (0x00013588) popup_query_code_window_g1

0xacb2,	// (0x000195d2) popup_fep_vkb_icf_pane

0xacbd,	// (0x000195dd) popup_fep_vtchi_icf_pane

0xada9,	// (0x000196c9) bg_icf_pane

0xadb5,	// (0x000196d5) list_vkb_icf_pane

0xadc1,	// (0x000196e1) bg_icf_pane_cp01

0xadd4,	// (0x000196f4) vtchi_icf_list_pane

0xade4,	// (0x00019704) list_vkb_icf_pane_t1_ParamLimits

0xade4,	// (0x00019704) list_vkb_icf_pane_t1

0xadf9,	// (0x00019719) vtchi_icf_list_pane_t1_ParamLimits

0xadf9,	// (0x00019719) vtchi_icf_list_pane_t1

0xaca0,	// (0x000195c0) popup_fep_ituss_window_ParamLimits

0xacbd,	// (0x000195dd) popup_fep_vtchi_icf_pane_ParamLimits

0xace3,	// (0x00019603) ituss_keypad_pane_ParamLimits

0xf3f4,	// (0x0001dd14) ituss_sks_pane

0xada9,	// (0x000196c9) bg_icf_pane_ParamLimits

0xac78,	// (0x00019598) icf_edit_indi_pane_ParamLimits

0xac78,	// (0x00019598) icf_edit_indi_pane

0xadb5,	// (0x000196d5) list_vkb_icf_pane_ParamLimits

0xadc1,	// (0x000196e1) bg_icf_pane_cp01_ParamLimits

0xac8b,	// (0x000195ab) icf_edit_indi_pane_cp01_ParamLimits

0xac8b,	// (0x000195ab) icf_edit_indi_pane_cp01

0xaddc,	// (0x000196fc) vtchi_query_pane

0xa6c1,	// (0x00018fe1) icf_edit_indi_pane_g1_ParamLimits

0xa6c1,	// (0x00018fe1) icf_edit_indi_pane_g1

0xf522,	// (0x0001de42) icf_edit_indi_pane_g2_ParamLimits

0xf522,	// (0x0001de42) icf_edit_indi_pane_g2

0x0001,

0xff01,	// (0x0001e821) icf_edit_indi_pane_g_ParamLimits

0xff01,	// (0x0001e821) icf_edit_indi_pane_g

0xf532,	// (0x0001de52) icf_edit_indi_pane_t1

0xae10,	// (0x00019730) bg_input_focus_pane_cp042

0xae19,	// (0x00019739) vtchi_button_pane

0xae22,	// (0x00019742) vtchi_query_pane_t1

0xae30,	// (0x00019750) vtchi_query_pane_t2

0xae3e,	// (0x0001975e) vtchi_query_pane_t3

0x0002,

0xfef0,	// (0x0001e810) vtchi_query_pane_t

0x227f,	// (0x00010b9f) bg_button_pane_cp13

0xae4c,	// (0x0001976c) vtchi_button_pane_g1

0xf510,	// (0x0001de30) ituss_sks_pane_g1

0xf519,	// (0x0001de39) ituss_sks_pane_g2

0x0001,

0xfef7,	// (0x0001e817) ituss_sks_pane_g

0xae62,	// (0x00019782) ituss_sks_pane_t1

0xae54,	// (0x00019774) ituss_sks_pane_t2

0x0001,

0xfefc,	// (0x0001e81c) ituss_sks_pane_t

0x698f,	// (0x000152af) indicator_nsta_pane_cp_g1

0x6998,	// (0x000152b8) indicator_nsta_pane_cp_g2

0x69a0,	// (0x000152c0) indicator_nsta_pane_cp_g3

0x69a8,	// (0x000152c8) indicator_nsta_pane_cp_g4

0x69b0,	// (0x000152d0) indicator_nsta_pane_cp_g5

0x69b8,	// (0x000152d8) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0001e3cc) indicator_nsta_pane_cp_g

0xe9ea,	// (0x0001d30a) cell_graphic2_pane_t2_ParamLimits

0xe9ea,	// (0x0001d30a) cell_graphic2_pane_t2

0x0001,

0xfdb2,	// (0x0001e6d2) cell_graphic2_pane_t_ParamLimits

0xfdb2,	// (0x0001e6d2) cell_graphic2_pane_t

0xea17,	// (0x0001d337) cell_graphic2_control_pane_t1

0x39c5,	// (0x000122e5) signal_pane_g3_ParamLimits

0x39c5,	// (0x000122e5) signal_pane_g3

0x39d6,	// (0x000122f6) signal_pane_g4_ParamLimits

0x39d6,	// (0x000122f6) signal_pane_g4

0xf3cc,	// (0x0001dcec) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf3cc,	// (0x0001dcec) cell_ai5_widget_list_row_pane_t3

0xad71,	// (0x00019691) cell_ituss_key_pane_t1_ParamLimits

0xad71,	// (0x00019691) cell_ituss_key_pane_t1

0x48da,	// (0x000131fa) form_field_data_wide_pane_vc_t2_ParamLimits

0x48da,	// (0x000131fa) form_field_data_wide_pane_vc_t2

0x48ec,	// (0x0001320c) form_field_data_wide_pane_vc_t3_ParamLimits

0x48ec,	// (0x0001320c) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x0001e11d) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x0001e11d) form_field_data_wide_pane_vc_t

0x6691,	// (0x00014fb1) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6691,	// (0x00014fb1) form_field_slider_wide_pane_vc_t3

0x674f,	// (0x0001506f) form_field_popup_wide_pane_vc_t2_ParamLimits

0x674f,	// (0x0001506f) form_field_popup_wide_pane_vc_t2

0x6764,	// (0x00015084) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6764,	// (0x00015084) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0001e3bb) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0001e3bb) form_field_popup_wide_pane_vc_t

0xf001,	// (0x0001d921) aid_fshwr2_btn_pane_ParamLimits

0xf00d,	// (0x0001d92d) aid_fshwr2_syb_pane_ParamLimits

0xf019,	// (0x0001d939) aid_fshwr2_txt_pane_ParamLimits

0x3160,	// (0x00011a80) fshwr2_bg_pane_ParamLimits

0xf025,	// (0x0001d945) fshwr2_func_candi_pane_ParamLimits

0xf036,	// (0x0001d956) fshwr2_hwr_syb_pane_ParamLimits

0xf042,	// (0x0001d962) fshwr2_icf_pane_ParamLimits

0xc3cf,	// (0x0001acef) list_double_graphic_pane_vc_g4_ParamLimits

0xc3cf,	// (0x0001acef) list_double_graphic_pane_vc_g4

0xf44d,	// (0x0001dd6d) cell_ituss_key_pane_g3_ParamLimits

0xf44d,	// (0x0001dd6d) cell_ituss_key_pane_g3

0xf4f5,	// (0x0001de15) cell_ituss_key_t5_ParamLimits

0xf4f5,	// (0x0001de15) cell_ituss_key_t5

0xf3e2,	// (0x0001dd02) popup_fep_vkbss_window_ParamLimits

0xed3a,	// (0x0001d65a) aid_cell_ai5_quarter

0xf532,	// (0x0001de52) icf_edit_indi_pane_t1_ParamLimits

0x279f,	// (0x000110bf) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x279f,	// (0x000110bf) aid_tch_indicator_popup_pane_cp2

0x27b2,	// (0x000110d2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x27b2,	// (0x000110d2) aid_tch_query_popup_data_pane_cp2

0x4c10,	// (0x00013530) aid_tch_query_popup_pane_ParamLimits

0x4c10,	// (0x00013530) aid_tch_query_popup_pane

0x4c10,	// (0x00013530) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x4c10,	// (0x00013530) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small

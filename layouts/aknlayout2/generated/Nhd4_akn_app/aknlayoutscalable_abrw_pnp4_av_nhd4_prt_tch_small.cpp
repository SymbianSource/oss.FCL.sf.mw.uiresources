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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00031ab8 };

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
0x5d01,	// (0x000377b9) Screen

0x5d0d,	// (0x000377c5) application_window_ParamLimits

0x5d0d,	// (0x000377c5) application_window

0x1ff6,	// (0x00033aae) screen_g1

0x5d69,	// (0x00037821) area_bottom_pane_ParamLimits

0x5d69,	// (0x00037821) area_bottom_pane

0x5e29,	// (0x000378e1) area_top_pane_ParamLimits

0x5e29,	// (0x000378e1) area_top_pane

0x5ec7,	// (0x0003797f) main_pane_ParamLimits

0x5ec7,	// (0x0003797f) main_pane

0x2000,	// (0x00033ab8) misc_graphics

0x7d63,	// (0x0003981b) battery_pane_ParamLimits

0x7d63,	// (0x0003981b) battery_pane

0xa269,	// (0x0003bd21) bg_status_flat_pane_g8

0xa271,	// (0x0003bd29) bg_status_flat_pane_g9

0x7e2b,	// (0x000398e3) context_pane_ParamLimits

0x7e2b,	// (0x000398e3) context_pane

0x7f41,	// (0x000399f9) navi_pane_ParamLimits

0x7f41,	// (0x000399f9) navi_pane

0x7fc5,	// (0x00039a7d) signal_pane_ParamLimits

0x7fc5,	// (0x00039a7d) signal_pane

0x0008,

0xf840,	// (0x000412f8) bg_status_flat_pane_g

0x984a,	// (0x0003b302) status_pane_g1_ParamLimits

0x984a,	// (0x0003b302) status_pane_g1

0x985e,	// (0x0003b316) status_pane_g2_ParamLimits

0x985e,	// (0x0003b316) status_pane_g2

0x986a,	// (0x0003b322) status_pane_g3_ParamLimits

0x986a,	// (0x0003b322) status_pane_g3

0x0004,

0xf76c,	// (0x00041224) status_pane_g_ParamLimits

0xf76c,	// (0x00041224) status_pane_g

0x989e,	// (0x0003b356) title_pane_ParamLimits

0x989e,	// (0x0003b356) title_pane

0x98db,	// (0x0003b393) uni_indicator_pane_ParamLimits

0x98db,	// (0x0003b393) uni_indicator_pane

0x2e3a,	// (0x000348f2) bg_list_pane_ParamLimits

0x2e3a,	// (0x000348f2) bg_list_pane

0x772e,	// (0x000391e6) find_pane

0x2554,	// (0x0003400c) listscroll_app_pane_ParamLimits

0x2554,	// (0x0003400c) listscroll_app_pane

0x2e5a,	// (0x00034912) listscroll_form_pane

0x5c83,	// (0x0003773b) listscroll_gen_pane_ParamLimits

0x5c83,	// (0x0003773b) listscroll_gen_pane

0x7736,	// (0x000391ee) listscroll_set_pane

0x6c3b,	// (0x000386f3) main_idle_act_pane

0x2cce,	// (0x00034786) main_idle_trad_pane

0x2cce,	// (0x00034786) main_list_empty_pane

0x2554,	// (0x0003400c) main_midp_pane

0x2e74,	// (0x0003492c) main_pane_g1_ParamLimits

0x2e74,	// (0x0003492c) main_pane_g1

0x774c,	// (0x00039204) popup_ai_message_window_ParamLimits

0x774c,	// (0x00039204) popup_ai_message_window

0x77f0,	// (0x000392a8) popup_fep_china_uni_window_ParamLimits

0x77f0,	// (0x000392a8) popup_fep_china_uni_window

0x784a,	// (0x00039302) popup_fep_japan_candidate_window_ParamLimits

0x784a,	// (0x00039302) popup_fep_japan_candidate_window

0x7868,	// (0x00039320) popup_fep_japan_predictive_window_ParamLimits

0x7868,	// (0x00039320) popup_fep_japan_predictive_window

0x7898,	// (0x00039350) popup_find_window

0x78a5,	// (0x0003935d) popup_grid_graphic_window_ParamLimits

0x78a5,	// (0x0003935d) popup_grid_graphic_window

0x78cf,	// (0x00039387) popup_large_graphic_colour_window

0x78f5,	// (0x000393ad) popup_menu_window_ParamLimits

0x78f5,	// (0x000393ad) popup_menu_window

0x7ab1,	// (0x00039569) popup_note_image_window

0x7a9d,	// (0x00039555) popup_note_wait_window_ParamLimits

0x7a9d,	// (0x00039555) popup_note_wait_window

0x7a9d,	// (0x00039555) popup_note_window_ParamLimits

0x7a9d,	// (0x00039555) popup_note_window

0x7b07,	// (0x000395bf) popup_query_code_window_ParamLimits

0x7b07,	// (0x000395bf) popup_query_code_window

0x7b1b,	// (0x000395d3) popup_query_data_code_window_ParamLimits

0x7b1b,	// (0x000395d3) popup_query_data_code_window

0x7b38,	// (0x000395f0) popup_query_data_window_ParamLimits

0x7b38,	// (0x000395f0) popup_query_data_window

0x7b54,	// (0x0003960c) popup_query_sat_info_window_ParamLimits

0x7b54,	// (0x0003960c) popup_query_sat_info_window

0x7b8d,	// (0x00039645) popup_snote_single_graphic_window_ParamLimits

0x7b8d,	// (0x00039645) popup_snote_single_graphic_window

0x7b8d,	// (0x00039645) popup_snote_single_text_window_ParamLimits

0x7b8d,	// (0x00039645) popup_snote_single_text_window

0x7ba2,	// (0x0003965a) popup_sub_window_general

0x7cd2,	// (0x0003978a) popup_window_general_ParamLimits

0x7cd2,	// (0x0003978a) popup_window_general

0x7ce7,	// (0x0003979f) power_save_pane

0x7595,	// (0x0003904d) control_pane_g1_ParamLimits

0x7595,	// (0x0003904d) control_pane_g1

0x75bc,	// (0x00039074) control_pane_g2_ParamLimits

0x75bc,	// (0x00039074) control_pane_g2

0x2e24,	// (0x000348dc) control_pane_g3_ParamLimits

0x2e24,	// (0x000348dc) control_pane_g3

0x0007,

0xf754,	// (0x0004120c) control_pane_g_ParamLimits

0xf754,	// (0x0004120c) control_pane_g

0x762d,	// (0x000390e5) control_pane_t1_ParamLimits

0x762d,	// (0x000390e5) control_pane_t1

0x7683,	// (0x0003913b) control_pane_t2_ParamLimits

0x7683,	// (0x0003913b) control_pane_t2

0x0002,

0xf765,	// (0x0004121d) control_pane_t_ParamLimits

0xf765,	// (0x0004121d) control_pane_t

0x750e,	// (0x00038fc6) navi_navi_volume_pane_cp1

0x7516,	// (0x00038fce) status_small_icon_pane

0x2dd0,	// (0x00034888) status_small_pane_g1_ParamLimits

0x2dd0,	// (0x00034888) status_small_pane_g1

0x751e,	// (0x00038fd6) status_small_pane_g2_ParamLimits

0x751e,	// (0x00038fd6) status_small_pane_g2

0x2e04,	// (0x000348bc) status_small_pane_g3_ParamLimits

0x2e04,	// (0x000348bc) status_small_pane_g3

0x752a,	// (0x00038fe2) status_small_pane_g4_ParamLimits

0x752a,	// (0x00038fe2) status_small_pane_g4

0x7536,	// (0x00038fee) status_small_pane_g5_ParamLimits

0x7536,	// (0x00038fee) status_small_pane_g5

0x7544,	// (0x00038ffc) status_small_pane_g6_ParamLimits

0x7544,	// (0x00038ffc) status_small_pane_g6

0x0007,

0xf743,	// (0x000411fb) status_small_pane_g_ParamLimits

0xf743,	// (0x000411fb) status_small_pane_g

0x755f,	// (0x00039017) status_small_pane_t1

0x7581,	// (0x00039039) status_small_wait_pane_ParamLimits

0x7581,	// (0x00039039) status_small_wait_pane

0x7024,	// (0x00038adc) aid_levels_signal_ParamLimits

0x7024,	// (0x00038adc) aid_levels_signal

0x7036,	// (0x00038aee) signal_pane_g1_ParamLimits

0x7036,	// (0x00038aee) signal_pane_g1

0x704b,	// (0x00038b03) signal_pane_g2_ParamLimits

0x704b,	// (0x00038b03) signal_pane_g2

0x0003,

0xf6d4,	// (0x0004118c) signal_pane_g_ParamLimits

0xf6d4,	// (0x0004118c) signal_pane_g

0x28bc,	// (0x00034374) context_pane_g1

0x6108,	// (0x00037bc0) title_pane_g1

0x6132,	// (0x00037bea) title_pane_t1

0x2016,	// (0x00033ace) title_pane_t2

0x203c,	// (0x00033af4) title_pane_t3

0x0002,

0xf532,	// (0x00040fea) title_pane_t

0x98f3,	// (0x0003b3ab) aid_levels_battery_ParamLimits

0x98f3,	// (0x0003b3ab) aid_levels_battery

0x9907,	// (0x0003b3bf) battery_pane_g1_ParamLimits

0x9907,	// (0x0003b3bf) battery_pane_g1

0x991d,	// (0x0003b3d5) battery_pane_g2_ParamLimits

0x991d,	// (0x0003b3d5) battery_pane_g2

0x0001,

0xf777,	// (0x0004122f) battery_pane_g_ParamLimits

0xf777,	// (0x0004122f) battery_pane_g

0xab8d,	// (0x0003c645) uni_indicator_pane_g1

0xaba0,	// (0x0003c658) uni_indicator_pane_g2

0xabb2,	// (0x0003c66a) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x000413a0) uni_indicator_pane_g

0x2b65,	// (0x0003461d) navi_icon_pane_ParamLimits

0x2b65,	// (0x0003461d) navi_icon_pane

0x2aae,	// (0x00034566) navi_midp_pane

0x2b81,	// (0x00034639) navi_navi_pane

0x2b8b,	// (0x00034643) navi_text_pane_ParamLimits

0x2b8b,	// (0x00034643) navi_text_pane

0x1ff6,	// (0x00033aae) status_small_wait_pane_g1

0x228d,	// (0x00033d45) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x0004139b) status_small_wait_pane_g

0xa8b4,	// (0x0003c36c) navi_navi_icon_text_pane

0xa8bc,	// (0x0003c374) navi_navi_pane_g1_ParamLimits

0xa8bc,	// (0x0003c374) navi_navi_pane_g1

0xa8ce,	// (0x0003c386) navi_navi_pane_g2_ParamLimits

0xa8ce,	// (0x0003c386) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x00041369) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x00041369) navi_navi_pane_g

0xa8e0,	// (0x0003c398) navi_navi_tabs_pane

0xa8e9,	// (0x0003c3a1) navi_navi_text_pane

0xa8b4,	// (0x0003c36c) navi_navi_volume_pane

0xa890,	// (0x0003c348) navi_text_pane_t1

0xa884,	// (0x0003c33c) navi_icon_pane_g1

0xa7d7,	// (0x0003c28f) navi_navi_text_pane_t1

0x82d8,	// (0x00039d90) navi_navi_volume_pane_g1

0x82e0,	// (0x00039d98) volume_small_pane

0xa73d,	// (0x0003c1f5) navi_navi_icon_text_pane_g1

0xa745,	// (0x0003c1fd) navi_navi_icon_text_pane_t1

0x2b81,	// (0x00034639) navi_tabs_2_long_pane

0x2b81,	// (0x00034639) navi_tabs_2_pane

0x2b81,	// (0x00034639) navi_tabs_3_long_pane

0x2b81,	// (0x00034639) navi_tabs_3_pane

0x2b81,	// (0x00034639) navi_tabs_4_pane

0x82b8,	// (0x00039d70) tabs_2_active_pane_ParamLimits

0x82b8,	// (0x00039d70) tabs_2_active_pane

0x82c8,	// (0x00039d80) tabs_2_passive_pane_ParamLimits

0x82c8,	// (0x00039d80) tabs_2_passive_pane

0x8286,	// (0x00039d3e) tabs_3_active_pane_ParamLimits

0x8286,	// (0x00039d3e) tabs_3_active_pane

0x8296,	// (0x00039d4e) tabs_3_passive_pane_ParamLimits

0x8296,	// (0x00039d4e) tabs_3_passive_pane

0x82a7,	// (0x00039d5f) tabs_3_passive_pane_cp_ParamLimits

0x82a7,	// (0x00039d5f) tabs_3_passive_pane_cp

0x8242,	// (0x00039cfa) tabs_4_active_pane_ParamLimits

0x8242,	// (0x00039cfa) tabs_4_active_pane

0x8253,	// (0x00039d0b) tabs_4_passive_pane_ParamLimits

0x8253,	// (0x00039d0b) tabs_4_passive_pane

0x8264,	// (0x00039d1c) tabs_4_passive_pane_cp_ParamLimits

0x8264,	// (0x00039d1c) tabs_4_passive_pane_cp

0x8275,	// (0x00039d2d) tabs_4_passive_pane_cp2_ParamLimits

0x8275,	// (0x00039d2d) tabs_4_passive_pane_cp2

0x821e,	// (0x00039cd6) tabs_2_long_active_pane_ParamLimits

0x821e,	// (0x00039cd6) tabs_2_long_active_pane

0x8230,	// (0x00039ce8) tabs_2_long_passive_pane_ParamLimits

0x8230,	// (0x00039ce8) tabs_2_long_passive_pane

0x81d9,	// (0x00039c91) tabs_3_long_active_pane_ParamLimits

0x81d9,	// (0x00039c91) tabs_3_long_active_pane

0x81f2,	// (0x00039caa) tabs_3_long_passive_pane_ParamLimits

0x81f2,	// (0x00039caa) tabs_3_long_passive_pane

0x8205,	// (0x00039cbd) tabs_3_long_passive_pane_cp_ParamLimits

0x8205,	// (0x00039cbd) tabs_3_long_passive_pane_cp

0x817f,	// (0x00039c37) volume_small_pane_g1

0x8188,	// (0x00039c40) volume_small_pane_g2

0x8191,	// (0x00039c49) volume_small_pane_g3

0x819a,	// (0x00039c52) volume_small_pane_g4

0x81a3,	// (0x00039c5b) volume_small_pane_g5

0x81ac,	// (0x00039c64) volume_small_pane_g6

0x81b5,	// (0x00039c6d) volume_small_pane_g7

0x81be,	// (0x00039c76) volume_small_pane_g8

0x81c7,	// (0x00039c7f) volume_small_pane_g9

0x81d0,	// (0x00039c88) volume_small_pane_g10

0x0009,

0xf87d,	// (0x00041335) volume_small_pane_g

0x205c,	// (0x00033b14) bg_active_tab_pane_cp2_ParamLimits

0x205c,	// (0x00033b14) bg_active_tab_pane_cp2

0x619a,	// (0x00037c52) tabs_3_active_pane_g1

0x61a2,	// (0x00037c5a) tabs_3_active_pane_t1

0x205c,	// (0x00033b14) bg_passive_tab_pane_cp2_ParamLimits

0x205c,	// (0x00033b14) bg_passive_tab_pane_cp2

0x619a,	// (0x00037c52) tabs_3_passive_pane_g1

0x61a2,	// (0x00037c5a) tabs_3_passive_pane_t1

0x205c,	// (0x00033b14) bg_active_tab_pane_cp3_ParamLimits

0x205c,	// (0x00033b14) bg_active_tab_pane_cp3

0x61b4,	// (0x00037c6c) tabs_4_active_pane_g1

0x61bc,	// (0x00037c74) tabs_4_active_pane_t1

0x205c,	// (0x00033b14) bg_passive_tab_pane_cp3_ParamLimits

0x205c,	// (0x00033b14) bg_passive_tab_pane_cp3

0x61b4,	// (0x00037c6c) tabs_4_1_passive_pane_g1

0x61bc,	// (0x00037c74) tabs_4_1_passive_pane_t1

0x2554,	// (0x0003400c) list_highlight_pane_cp2

0xadf5,	// (0x0003c8ad) list_set_pane_ParamLimits

0xadf5,	// (0x0003c8ad) list_set_pane

0xae97,	// (0x0003c94f) main_pane_set_t1_ParamLimits

0xae97,	// (0x0003c94f) main_pane_set_t1

0xaeb7,	// (0x0003c96f) main_pane_set_t2_ParamLimits

0xaeb7,	// (0x0003c96f) main_pane_set_t2

0xaecb,	// (0x0003c983) main_pane_set_t3_ParamLimits

0xaecb,	// (0x0003c983) main_pane_set_t3

0xaedd,	// (0x0003c995) main_pane_set_t4_ParamLimits

0xaedd,	// (0x0003c995) main_pane_set_t4

0x0003,

0xf94d,	// (0x00041405) main_pane_set_t_ParamLimits

0xf94d,	// (0x00041405) main_pane_set_t

0xaeef,	// (0x0003c9a7) setting_code_pane

0xaefb,	// (0x0003c9b3) setting_slider_graphic_pane

0xaefb,	// (0x0003c9b3) setting_slider_pane

0xaefb,	// (0x0003c9b3) setting_text_pane

0xaefb,	// (0x0003c9b3) setting_volume_pane

0x61ce,	// (0x00037c86) volume_set_pane

0x205c,	// (0x00033b14) bg_set_opt_pane_cp

0x61d6,	// (0x00037c8e) setting_slider_pane_t1

0x61ef,	// (0x00037ca7) setting_slider_pane_t2

0x6209,	// (0x00037cc1) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00040ff1) setting_slider_pane_t

0x6221,	// (0x00037cd9) slider_set_pane

0x2000,	// (0x00033ab8) bg_set_opt_pane_cp2

0x206a,	// (0x00033b22) setting_slider_graphic_pane_g1

0x6237,	// (0x00037cef) setting_slider_graphic_pane_t1

0x6247,	// (0x00037cff) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00040ff8) setting_slider_graphic_pane_t

0x6257,	// (0x00037d0f) slider_set_pane_cp

0x2000,	// (0x00033ab8) input_focus_pane_cp1

0xadb4,	// (0x0003c86c) list_set_text_pane

0x1ff6,	// (0x00033aae) setting_text_pane_g1

0x2000,	// (0x00033ab8) input_focus_pane_cp2

0x1ff6,	// (0x00033aae) setting_code_pane_g1

0x2073,	// (0x00033b2b) setting_code_pane_t1

0x457a,	// (0x00036032) set_text_pane_t1_ParamLimits

0x457a,	// (0x00036032) set_text_pane_t1

0x246a,	// (0x00033f22) set_opt_bg_pane_g1

0x2472,	// (0x00033f2a) set_opt_bg_pane_g2

0xad8e,	// (0x0003c846) set_opt_bg_pane_g3

0x2482,	// (0x00033f3a) set_opt_bg_pane_g4

0x248a,	// (0x00033f42) set_opt_bg_pane_g5

0x2492,	// (0x00033f4a) set_opt_bg_pane_g6

0xad98,	// (0x0003c850) set_opt_bg_pane_g7

0xada0,	// (0x0003c858) set_opt_bg_pane_g8

0xadaa,	// (0x0003c862) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x000413f2) set_opt_bg_pane_g

0xad81,	// (0x0003c839) slider_set_pane_g1

0x835f,	// (0x00039e17) slider_set_pane_g2

0x0006,

0xf92b,	// (0x000413e3) slider_set_pane_g

0x82e9,	// (0x00039da1) volume_set_pane_g1

0x82f1,	// (0x00039da9) volume_set_pane_g2

0x82f9,	// (0x00039db1) volume_set_pane_g3

0x8301,	// (0x00039db9) volume_set_pane_g4

0x8309,	// (0x00039dc1) volume_set_pane_g5

0x8311,	// (0x00039dc9) volume_set_pane_g6

0x8319,	// (0x00039dd1) volume_set_pane_g7

0x8321,	// (0x00039dd9) volume_set_pane_g8

0x8329,	// (0x00039de1) volume_set_pane_g9

0x8331,	// (0x00039de9) volume_set_pane_g10

0x0009,

0xf903,	// (0x000413bb) volume_set_pane_g

0x625f,	// (0x00037d17) indicator_pane_ParamLimits

0x625f,	// (0x00037d17) indicator_pane

0x626b,	// (0x00037d23) main_idle_pane_g2_ParamLimits

0x626b,	// (0x00037d23) main_idle_pane_g2

0x6293,	// (0x00037d4b) main_pane_idle_g1_ParamLimits

0x6293,	// (0x00037d4b) main_pane_idle_g1

0x2081,	// (0x00033b39) popup_clock_digital_analogue_window_ParamLimits

0x2081,	// (0x00033b39) popup_clock_digital_analogue_window

0x62a0,	// (0x00037d58) soft_indicator_pane_ParamLimits

0x62a0,	// (0x00037d58) soft_indicator_pane

0x62ac,	// (0x00037d64) wallpaper_pane_ParamLimits

0x62ac,	// (0x00037d64) wallpaper_pane

0x1ff6,	// (0x00033aae) wallpaper_pane_g1

0x62b8,	// (0x00037d70) indicator_pane_g1_ParamLimits

0x62b8,	// (0x00037d70) indicator_pane_g1

0xb1c7,	// (0x0003cc7f) navi_navi_icon_text_pane_srt_g1

0x20af,	// (0x00033b67) soft_indicator_pane_t1

0x20c9,	// (0x00033b81) aid_ps_area_pane

0x62c4,	// (0x00037d7c) aid_ps_clock_pane

0x20da,	// (0x00033b92) aid_ps_indicator_pane

0x20e6,	// (0x00033b9e) indicator_ps_pane_ParamLimits

0x20e6,	// (0x00033b9e) indicator_ps_pane

0x20f5,	// (0x00033bad) power_save_pane_g1_ParamLimits

0x20f5,	// (0x00033bad) power_save_pane_g1

0x2101,	// (0x00033bb9) power_save_pane_g2_ParamLimits

0x2101,	// (0x00033bb9) power_save_pane_g2

0x5d1d,	// (0x000377d5) aid_navinavi_width_pane

0x20c9,	// (0x00033b81) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00040ffd) power_save_pane_g_ParamLimits

0xf545,	// (0x00040ffd) power_save_pane_g

0x210f,	// (0x00033bc7) power_save_pane_t1_ParamLimits

0x210f,	// (0x00033bc7) power_save_pane_t1

0x62c4,	// (0x00037d7c) aid_ps_clock_pane_ParamLimits

0x20da,	// (0x00033b92) aid_ps_indicator_pane_ParamLimits

0x2121,	// (0x00033bd9) power_save_pane_t4_ParamLimits

0x2121,	// (0x00033bd9) power_save_pane_t4

0x0001,

0xf54a,	// (0x00041002) power_save_pane_t_ParamLimits

0xf54a,	// (0x00041002) power_save_pane_t

0x214b,	// (0x00033c03) power_save_t3_ParamLimits

0x214b,	// (0x00033c03) power_save_t3

0x2136,	// (0x00033bee) power_save_t2_ParamLimits

0x2136,	// (0x00033bee) power_save_t2

0x2160,	// (0x00033c18) indicator_ps_pane_g1

0x62d2,	// (0x00037d8a) ai_gene_pane_ParamLimits

0x62d2,	// (0x00037d8a) ai_gene_pane

0x62de,	// (0x00037d96) ai_links_pane_ParamLimits

0x62de,	// (0x00037d96) ai_links_pane

0x62ea,	// (0x00037da2) indicator_pane_cp1_ParamLimits

0x62ea,	// (0x00037da2) indicator_pane_cp1

0x62f6,	// (0x00037dae) main_pane_idle_g1_cp_ParamLimits

0x62f6,	// (0x00037dae) main_pane_idle_g1_cp

0x6302,	// (0x00037dba) popup_ai_links_title_window

0x630b,	// (0x00037dc3) soft_indicator_pane_cp1_ParamLimits

0x630b,	// (0x00037dc3) soft_indicator_pane_cp1

0xab7b,	// (0x0003c633) ai_links_pane_g1

0xab84,	// (0x0003c63c) grid_ai_links_pane

0xab5e,	// (0x0003c616) ai_gene_pane_1

0xab69,	// (0x0003c621) ai_gene_pane_2

0xab72,	// (0x0003c62a) list_highlight_pane_cp4

0xab42,	// (0x0003c5fa) cell_ai_link_pane_ParamLimits

0xab42,	// (0x0003c5fa) cell_ai_link_pane

0xab3a,	// (0x0003c5f2) cell_ai_link_pane_g1

0x228d,	// (0x00033d45) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x00041396) cell_ai_link_pane_g

0x2000,	// (0x00033ab8) grid_highlight_cp2

0x2000,	// (0x00033ab8) bg_popup_sub_pane_cp1

0x2177,	// (0x00033c2f) popup_ai_links_title_window_t1

0xaa8a,	// (0x0003c542) ai_gene_pane_1_g1_ParamLimits

0xaa8a,	// (0x0003c542) ai_gene_pane_1_g1

0xaa96,	// (0x0003c54e) ai_gene_pane_1_g2_ParamLimits

0xaa96,	// (0x0003c54e) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x0004138c) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x0004138c) ai_gene_pane_1_g

0xaaa3,	// (0x0003c55b) ai_gene_pane_1_t1_ParamLimits

0xaaa3,	// (0x0003c55b) ai_gene_pane_1_t1

0xaad7,	// (0x0003c58f) grid_ai_soft_ind_pane

0xaa75,	// (0x0003c52d) ai_gene_pane_2_t1_ParamLimits

0xaa75,	// (0x0003c52d) ai_gene_pane_2_t1

0x6317,	// (0x00037dcf) main_pane_empty_t1_ParamLimits

0x6317,	// (0x00037dcf) main_pane_empty_t1

0x632f,	// (0x00037de7) main_pane_empty_t2_ParamLimits

0x632f,	// (0x00037de7) main_pane_empty_t2

0x6344,	// (0x00037dfc) main_pane_empty_t3_ParamLimits

0x6344,	// (0x00037dfc) main_pane_empty_t3

0x6356,	// (0x00037e0e) main_pane_empty_t4_ParamLimits

0x6356,	// (0x00037e0e) main_pane_empty_t4

0x6368,	// (0x00037e20) main_pane_empty_t5_ParamLimits

0x6368,	// (0x00037e20) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00041007) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00041007) main_pane_empty_t

0x24ef,	// (0x00033fa7) bg_popup_window_pane_ParamLimits

0x24ef,	// (0x00033fa7) bg_popup_window_pane

0xa7e5,	// (0x0003c29d) find_popup_pane_cp2_ParamLimits

0xa7e5,	// (0x0003c29d) find_popup_pane_cp2

0xa7f1,	// (0x0003c2a9) heading_pane_ParamLimits

0xa7f1,	// (0x0003c2a9) heading_pane

0x2000,	// (0x00033ab8) bg_popup_sub_pane

0xa75f,	// (0x0003c217) bg_popup_window_pane_g1_ParamLimits

0xa75f,	// (0x0003c217) bg_popup_window_pane_g1

0xa76b,	// (0x0003c223) bg_popup_window_pane_g2_ParamLimits

0xa76b,	// (0x0003c223) bg_popup_window_pane_g2

0xa777,	// (0x0003c22f) bg_popup_window_pane_g3_ParamLimits

0xa777,	// (0x0003c22f) bg_popup_window_pane_g3

0xa783,	// (0x0003c23b) bg_popup_window_pane_g4_ParamLimits

0xa783,	// (0x0003c23b) bg_popup_window_pane_g4

0xa78f,	// (0x0003c247) bg_popup_window_pane_g5_ParamLimits

0xa78f,	// (0x0003c247) bg_popup_window_pane_g5

0xa79b,	// (0x0003c253) bg_popup_window_pane_g6_ParamLimits

0xa79b,	// (0x0003c253) bg_popup_window_pane_g6

0xa7a7,	// (0x0003c25f) bg_popup_window_pane_g7_ParamLimits

0xa7a7,	// (0x0003c25f) bg_popup_window_pane_g7

0xa7b3,	// (0x0003c26b) bg_popup_window_pane_g8_ParamLimits

0xa7b3,	// (0x0003c26b) bg_popup_window_pane_g8

0xa7bf,	// (0x0003c277) bg_popup_window_pane_g9_ParamLimits

0xa7bf,	// (0x0003c277) bg_popup_window_pane_g9

0xa7cb,	// (0x0003c283) bg_popup_window_pane_g10_ParamLimits

0xa7cb,	// (0x0003c283) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x00041354) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x00041354) bg_popup_window_pane_g

0xa6f4,	// (0x0003c1ac) bg_popup_heading_pane_ParamLimits

0xa6f4,	// (0x0003c1ac) bg_popup_heading_pane

0x84b0,	// (0x00039f68) tabs_4_passive_pane_cp_srt_ParamLimits

0x84b0,	// (0x00039f68) tabs_4_passive_pane_cp_srt

0x84c2,	// (0x00039f7a) tabs_4_passive_pane_srt_ParamLimits

0xa708,	// (0x0003c1c0) heading_pane_g2

0x84c2,	// (0x00039f7a) tabs_4_passive_pane_srt

0x2554,	// (0x0003400c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2554,	// (0x0003400c) bg_passive_tab_pane_cp3_srt

0xa710,	// (0x0003c1c8) heading_pane_t1_ParamLimits

0xa710,	// (0x0003c1c8) heading_pane_t1

0xa727,	// (0x0003c1df) heading_pane_t2_ParamLimits

0xa727,	// (0x0003c1df) heading_pane_t2

0x0001,

0xf897,	// (0x0004134f) heading_pane_t_ParamLimits

0xf897,	// (0x0004134f) heading_pane_t

0xa231,	// (0x0003bce9) bg_popup_heading_pane_g1

0xa2e0,	// (0x0003bd98) bg_popup_heading_pane_g2

0xa2ea,	// (0x0003bda2) bg_popup_heading_pane_g3

0xa2f4,	// (0x0003bdac) bg_popup_heading_pane_g4

0xa2fe,	// (0x0003bdb6) bg_popup_heading_pane_g5

0xa308,	// (0x0003bdc0) bg_popup_heading_pane_g6

0xa310,	// (0x0003bdc8) bg_popup_heading_pane_g7

0xa318,	// (0x0003bdd0) bg_popup_heading_pane_g8

0xa322,	// (0x0003bdda) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x0004130b) bg_popup_heading_pane_g

0x99f2,	// (0x0003b4aa) bg_popup_sub_pane_g1

0x9a02,	// (0x0003b4ba) bg_popup_sub_pane_g2

0x99fa,	// (0x0003b4b2) bg_popup_sub_pane_g3

0x9a12,	// (0x0003b4ca) bg_popup_sub_pane_g4

0x9a0a,	// (0x0003b4c2) bg_popup_sub_pane_g5

0x9a1a,	// (0x0003b4d2) bg_popup_sub_pane_g6

0x9a22,	// (0x0003b4da) bg_popup_sub_pane_g7

0x9a32,	// (0x0003b4ea) bg_popup_sub_pane_g8

0x9a2a,	// (0x0003b4e2) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x000412e5) bg_popup_sub_pane_g

0x204e,	// (0x00033b06) bg_popup_window_pane_cp5_ParamLimits

0x204e,	// (0x00033b06) bg_popup_window_pane_cp5

0x2194,	// (0x00033c4c) popup_note_window_g1_ParamLimits

0x2194,	// (0x00033c4c) popup_note_window_g1

0x21a0,	// (0x00033c58) popup_note_window_t1_ParamLimits

0x21a0,	// (0x00033c58) popup_note_window_t1

0x21b6,	// (0x00033c6e) popup_note_window_t2_ParamLimits

0x21b6,	// (0x00033c6e) popup_note_window_t2

0x21cc,	// (0x00033c84) popup_note_window_t3_ParamLimits

0x21cc,	// (0x00033c84) popup_note_window_t3

0x21e2,	// (0x00033c9a) popup_note_window_t4_ParamLimits

0x21e2,	// (0x00033c9a) popup_note_window_t4

0x220a,	// (0x00033cc2) popup_note_window_t5_ParamLimits

0x220a,	// (0x00033cc2) popup_note_window_t5

0x0004,

0xf55a,	// (0x00041012) popup_note_window_t_ParamLimits

0xf55a,	// (0x00041012) popup_note_window_t

0x222e,	// (0x00033ce6) bg_popup_window_pane_cp6_ParamLimits

0x222e,	// (0x00033ce6) bg_popup_window_pane_cp6

0xa1ad,	// (0x0003bc65) popup_note_image_window_g1_ParamLimits

0xa1ad,	// (0x0003bc65) popup_note_image_window_g1

0xa1b9,	// (0x0003bc71) popup_note_image_window_g2_ParamLimits

0xa1b9,	// (0x0003bc71) popup_note_image_window_g2

0x0001,

0xf821,	// (0x000412d9) popup_note_image_window_g_ParamLimits

0xf821,	// (0x000412d9) popup_note_image_window_g

0xa1d2,	// (0x0003bc8a) popup_note_image_window_t1_ParamLimits

0xa1d2,	// (0x0003bc8a) popup_note_image_window_t1

0xa1eb,	// (0x0003bca3) popup_note_image_window_t2_ParamLimits

0xa1eb,	// (0x0003bca3) popup_note_image_window_t2

0xa204,	// (0x0003bcbc) popup_note_image_window_t3_ParamLimits

0xa204,	// (0x0003bcbc) popup_note_image_window_t3

0x0002,

0xf826,	// (0x000412de) popup_note_image_window_t_ParamLimits

0xf826,	// (0x000412de) popup_note_image_window_t

0xa076,	// (0x0003bb2e) bg_popup_window_pane_cp7_ParamLimits

0xa076,	// (0x0003bb2e) bg_popup_window_pane_cp7

0xa0a6,	// (0x0003bb5e) popup_note_wait_window_g1_ParamLimits

0xa0a6,	// (0x0003bb5e) popup_note_wait_window_g1

0xa0b2,	// (0x0003bb6a) popup_note_wait_window_g2_ParamLimits

0xa0b2,	// (0x0003bb6a) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x000412c7) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x000412c7) popup_note_wait_window_g

0xa0ca,	// (0x0003bb82) popup_note_wait_window_t1_ParamLimits

0xa0ca,	// (0x0003bb82) popup_note_wait_window_t1

0xa0f1,	// (0x0003bba9) popup_note_wait_window_t2_ParamLimits

0xa0f1,	// (0x0003bba9) popup_note_wait_window_t2

0xa10e,	// (0x0003bbc6) popup_note_wait_window_t3_ParamLimits

0xa10e,	// (0x0003bbc6) popup_note_wait_window_t3

0xa121,	// (0x0003bbd9) popup_note_wait_window_t4_ParamLimits

0xa121,	// (0x0003bbd9) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x000412ce) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x000412ce) popup_note_wait_window_t

0xa146,	// (0x0003bbfe) wait_bar_pane_ParamLimits

0xa146,	// (0x0003bbfe) wait_bar_pane

0x2000,	// (0x00033ab8) wait_anim_pane

0x2000,	// (0x00033ab8) wait_border_pane

0x1ff6,	// (0x00033aae) wait_anim_pane_g1

0x1ff6,	// (0x00033aae) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x00041187) wait_anim_pane_g

0xa022,	// (0x0003bada) wait_border_pane_g1

0xa02d,	// (0x0003bae5) wait_border_pane_g2

0xa036,	// (0x0003baee) wait_border_pane_g3

0x0002,

0xf808,	// (0x000412c0) wait_border_pane_g

0x9e8d,	// (0x0003b945) bg_popup_window_pane_cp16_ParamLimits

0x9e8d,	// (0x0003b945) bg_popup_window_pane_cp16

0x9f8d,	// (0x0003ba45) indicator_popup_pane_cp4_ParamLimits

0x9f8d,	// (0x0003ba45) indicator_popup_pane_cp4

0x9fa1,	// (0x0003ba59) popup_query_data_window_t1_ParamLimits

0x9fa1,	// (0x0003ba59) popup_query_data_window_t1

0x9fb3,	// (0x0003ba6b) popup_query_data_window_t2_ParamLimits

0x9fb3,	// (0x0003ba6b) popup_query_data_window_t2

0x9fcc,	// (0x0003ba84) popup_query_data_window_t3_ParamLimits

0x9fcc,	// (0x0003ba84) popup_query_data_window_t3

0x0002,

0xf801,	// (0x000412b9) popup_query_data_window_t_ParamLimits

0xf801,	// (0x000412b9) popup_query_data_window_t

0x9fe6,	// (0x0003ba9e) query_popup_data_pane_ParamLimits

0x9fe6,	// (0x0003ba9e) query_popup_data_pane

0x9ffa,	// (0x0003bab2) query_popup_data_pane_cp1_ParamLimits

0x9ffa,	// (0x0003bab2) query_popup_data_pane_cp1

0x9e8d,	// (0x0003b945) bg_popup_window_pane_cp10_ParamLimits

0x9e8d,	// (0x0003b945) bg_popup_window_pane_cp10

0x9ebf,	// (0x0003b977) indicator_popup_pane_ParamLimits

0x9ebf,	// (0x0003b977) indicator_popup_pane

0x9ee1,	// (0x0003b999) popup_query_code_window_t1_ParamLimits

0x9ee1,	// (0x0003b999) popup_query_code_window_t1

0x9efb,	// (0x0003b9b3) popup_query_code_window_t2_ParamLimits

0x9efb,	// (0x0003b9b3) popup_query_code_window_t2

0x9f44,	// (0x0003b9fc) popup_query_code_window_t3_ParamLimits

0x9f44,	// (0x0003b9fc) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x000412b2) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x000412b2) popup_query_code_window_t

0x9f73,	// (0x0003ba2b) query_popup_pane_ParamLimits

0x9f73,	// (0x0003ba2b) query_popup_pane

0x222e,	// (0x00033ce6) bg_popup_window_pane_cp15_ParamLimits

0x222e,	// (0x00033ce6) bg_popup_window_pane_cp15

0x63a2,	// (0x00037e5a) indicator_popup_pane_cp1_ParamLimits

0x63a2,	// (0x00037e5a) indicator_popup_pane_cp1

0x63b5,	// (0x00037e6d) indicator_popup_pane_cp2_ParamLimits

0x63b5,	// (0x00037e6d) indicator_popup_pane_cp2

0x63c8,	// (0x00037e80) popup_query_data_code_window_g1_ParamLimits

0x63c8,	// (0x00037e80) popup_query_data_code_window_g1

0x224c,	// (0x00033d04) popup_query_data_code_window_t1_ParamLimits

0x224c,	// (0x00033d04) popup_query_data_code_window_t1

0x225e,	// (0x00033d16) popup_query_data_code_window_t2_ParamLimits

0x225e,	// (0x00033d16) popup_query_data_code_window_t2

0x63db,	// (0x00037e93) popup_query_data_code_window_t3_ParamLimits

0x63db,	// (0x00037e93) popup_query_data_code_window_t3

0x63f1,	// (0x00037ea9) popup_query_data_code_window_t4_ParamLimits

0x63f1,	// (0x00037ea9) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0004101d) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0004101d) popup_query_data_code_window_t

0x805d,	// (0x00039b15) list_single_midp_graphic_pane_g3

0x6409,	// (0x00037ec1) query_popup_data_pane_cp2_ParamLimits

0x641c,	// (0x00037ed4) query_popup_pane_cp2_ParamLimits

0x641c,	// (0x00037ed4) query_popup_pane_cp2

0x2000,	// (0x00033ab8) bg_popup_window_pane_cp11

0x9e71,	// (0x0003b929) heading_pane_cp5

0x9e79,	// (0x0003b931) listscroll_popup_info_pane

0x2000,	// (0x00033ab8) input_focus_pane_cp3

0x2270,	// (0x00033d28) query_popup_pane_t1

0x227e,	// (0x00033d36) list_popup_info_pane_ParamLimits

0x227e,	// (0x00033d36) list_popup_info_pane

0x228d,	// (0x00033d45) listscroll_popup_info_pane_g1

0x2295,	// (0x00033d4d) scroll_pane_cp7

0x642f,	// (0x00037ee7) popup_info_list_pane_t1_ParamLimits

0x642f,	// (0x00037ee7) popup_info_list_pane_t1

0x6449,	// (0x00037f01) popup_info_list_pane_t2_ParamLimits

0x6449,	// (0x00037f01) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00041026) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00041026) popup_info_list_pane_t

0x2000,	// (0x00033ab8) bg_popup_window_pane_cp12

0xb1e1,	// (0x0003cc99) find_popup_pane

0x205c,	// (0x00033b14) bg_popup_window_pane_cp3

0x229f,	// (0x00033d57) heading_pane_cp3

0x22ae,	// (0x00033d66) listscroll_popup_graphic_pane

0x2000,	// (0x00033ab8) bg_popup_window_pane_cp4

0x64b3,	// (0x00037f6b) heading_pane_cp4

0x22be,	// (0x00033d76) listscroll_popup_colour_pane

0x64bd,	// (0x00037f75) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x64bd,	// (0x00037f75) cell_large_graphic_colour_none_popup_pane

0x64d1,	// (0x00037f89) grid_large_graphic_colour_popup_pane_ParamLimits

0x64d1,	// (0x00037f89) grid_large_graphic_colour_popup_pane

0x64f5,	// (0x00037fad) listscroll_popup_colour_pane_g1_ParamLimits

0x64f5,	// (0x00037fad) listscroll_popup_colour_pane_g1

0x650c,	// (0x00037fc4) listscroll_popup_colour_pane_g2_ParamLimits

0x650c,	// (0x00037fc4) listscroll_popup_colour_pane_g2

0x6523,	// (0x00037fdb) listscroll_popup_colour_pane_g3_ParamLimits

0x6523,	// (0x00037fdb) listscroll_popup_colour_pane_g3

0x6533,	// (0x00037feb) listscroll_popup_colour_pane_g4_ParamLimits

0x6533,	// (0x00037feb) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0004102b) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0004102b) listscroll_popup_colour_pane_g

0x22c6,	// (0x00033d7e) scroll_pane_cp6_ParamLimits

0x22c6,	// (0x00033d7e) scroll_pane_cp6

0x6543,	// (0x00037ffb) cell_large_graphic_colour_popup_pane_ParamLimits

0x6543,	// (0x00037ffb) cell_large_graphic_colour_popup_pane

0x6562,	// (0x0003801a) cell_large_graphic_colour_none_popup_pane_t1

0x2000,	// (0x00033ab8) grid_highlight_pane_cp5

0x22d8,	// (0x00033d90) cell_large_graphic_colour_popup_pane_g1

0x22e0,	// (0x00033d98) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00041034) cell_large_graphic_colour_popup_pane_g

0x22e8,	// (0x00033da0) cell_large_graphic_colour_popup_pane_g2_copy1

0x22f1,	// (0x00033da9) grid_highlight_pane_cp4

0x22f9,	// (0x00033db1) bg_popup_window_pane_cp8_ParamLimits

0x22f9,	// (0x00033db1) bg_popup_window_pane_cp8

0x6571,	// (0x00038029) popup_snote_single_text_window_g1_ParamLimits

0x6571,	// (0x00038029) popup_snote_single_text_window_g1

0x6583,	// (0x0003803b) popup_snote_single_text_window_t1_ParamLimits

0x6583,	// (0x0003803b) popup_snote_single_text_window_t1

0x6596,	// (0x0003804e) popup_snote_single_text_window_t2_ParamLimits

0x6596,	// (0x0003804e) popup_snote_single_text_window_t2

0x65a9,	// (0x00038061) popup_snote_single_text_window_t3_ParamLimits

0x65a9,	// (0x00038061) popup_snote_single_text_window_t3

0x65e2,	// (0x0003809a) popup_snote_single_text_window_t4_ParamLimits

0x65e2,	// (0x0003809a) popup_snote_single_text_window_t4

0x6616,	// (0x000380ce) popup_snote_single_text_window_t5_ParamLimits

0x6616,	// (0x000380ce) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00041039) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00041039) popup_snote_single_text_window_t

0x2314,	// (0x00033dcc) bg_popup_window_pane_cp9_ParamLimits

0x2314,	// (0x00033dcc) bg_popup_window_pane_cp9

0x6571,	// (0x00038029) popup_snote_single_graphic_window_g1_ParamLimits

0x6571,	// (0x00038029) popup_snote_single_graphic_window_g1

0x2322,	// (0x00033dda) popup_snote_single_graphic_window_g2_ParamLimits

0x2322,	// (0x00033dda) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00041044) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00041044) popup_snote_single_graphic_window_g

0x232e,	// (0x00033de6) popup_snote_single_graphic_window_t1_ParamLimits

0x232e,	// (0x00033de6) popup_snote_single_graphic_window_t1

0x2341,	// (0x00033df9) popup_snote_single_graphic_window_t2_ParamLimits

0x2341,	// (0x00033df9) popup_snote_single_graphic_window_t2

0x6645,	// (0x000380fd) popup_snote_single_graphic_window_t3_ParamLimits

0x6645,	// (0x000380fd) popup_snote_single_graphic_window_t3

0x667e,	// (0x00038136) popup_snote_single_graphic_window_t4_ParamLimits

0x667e,	// (0x00038136) popup_snote_single_graphic_window_t4

0x66b2,	// (0x0003816a) popup_snote_single_graphic_window_t5_ParamLimits

0x66b2,	// (0x0003816a) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00041049) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00041049) popup_snote_single_graphic_window_t

0xb123,	// (0x0003cbdb) grid_graphic_popup_pane_ParamLimits

0xb123,	// (0x0003cbdb) grid_graphic_popup_pane

0xb14d,	// (0x0003cc05) listscroll_popup_graphic_pane_g1_ParamLimits

0xb14d,	// (0x0003cc05) listscroll_popup_graphic_pane_g1

0xb161,	// (0x0003cc19) listscroll_popup_graphic_pane_g2_ParamLimits

0xb161,	// (0x0003cc19) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x0004142f) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x0004142f) listscroll_popup_graphic_pane_g

0xb175,	// (0x0003cc2d) scroll_pane_cp5

0xb0b9,	// (0x0003cb71) cell_graphic_popup_pane_ParamLimits

0xb0b9,	// (0x0003cb71) cell_graphic_popup_pane

0xb09a,	// (0x0003cb52) cell_graphic_popup_pane_g1

0xb0a2,	// (0x0003cb5a) cell_graphic_popup_pane_g2

0x22e8,	// (0x00033da0) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x00041428) cell_graphic_popup_pane_g

0xb0ab,	// (0x0003cb63) cell_graphic_popup_pane_t2

0x22f1,	// (0x00033da9) grid_highlight_pane_cp3

0x2366,	// (0x00033e1e) list_gen_pane_ParamLimits

0x2366,	// (0x00033e1e) list_gen_pane

0x238e,	// (0x00033e46) scroll_pane

0xaff2,	// (0x0003caaa) bg_list_pane_g1_ParamLimits

0xaff2,	// (0x0003caaa) bg_list_pane_g1

0xb00f,	// (0x0003cac7) bg_list_pane_g2_ParamLimits

0xb00f,	// (0x0003cac7) bg_list_pane_g2

0xb024,	// (0x0003cadc) bg_list_pane_g3_ParamLimits

0xb024,	// (0x0003cadc) bg_list_pane_g3

0xb038,	// (0x0003caf0) bg_list_pane_g4_ParamLimits

0xb038,	// (0x0003caf0) bg_list_pane_g4

0xb04c,	// (0x0003cb04) bg_list_pane_g5_ParamLimits

0xb04c,	// (0x0003cb04) bg_list_pane_g5

0x0004,

0xf965,	// (0x0004141d) bg_list_pane_g_ParamLimits

0xf965,	// (0x0004141d) bg_list_pane_g

0x8405,	// (0x00039ebd) list_double2_graphic_large_graphic_pane_ParamLimits

0x8405,	// (0x00039ebd) list_double2_graphic_large_graphic_pane

0x8405,	// (0x00039ebd) list_double2_graphic_pane_ParamLimits

0x8405,	// (0x00039ebd) list_double2_graphic_pane

0x8405,	// (0x00039ebd) list_double2_large_graphic_pane_ParamLimits

0x8405,	// (0x00039ebd) list_double2_large_graphic_pane

0x8405,	// (0x00039ebd) list_double2_pane_ParamLimits

0x8405,	// (0x00039ebd) list_double2_pane

0x8405,	// (0x00039ebd) list_double_graphic_heading_pane_ParamLimits

0x8405,	// (0x00039ebd) list_double_graphic_heading_pane

0x8405,	// (0x00039ebd) list_double_graphic_pane_ParamLimits

0x8405,	// (0x00039ebd) list_double_graphic_pane

0x8405,	// (0x00039ebd) list_double_heading_pane_ParamLimits

0x8405,	// (0x00039ebd) list_double_heading_pane

0x8405,	// (0x00039ebd) list_double_large_graphic_pane_ParamLimits

0x8405,	// (0x00039ebd) list_double_large_graphic_pane

0x8405,	// (0x00039ebd) list_double_number_pane_ParamLimits

0x8405,	// (0x00039ebd) list_double_number_pane

0x8405,	// (0x00039ebd) list_double_pane_ParamLimits

0x8405,	// (0x00039ebd) list_double_pane

0x8405,	// (0x00039ebd) list_double_time_pane_ParamLimits

0x8405,	// (0x00039ebd) list_double_time_pane

0x8405,	// (0x00039ebd) list_setting_number_pane_ParamLimits

0x8405,	// (0x00039ebd) list_setting_number_pane

0x8405,	// (0x00039ebd) list_setting_pane_ParamLimits

0x8405,	// (0x00039ebd) list_setting_pane

0x8446,	// (0x00039efe) list_single_2graphic_pane_ParamLimits

0x8446,	// (0x00039efe) list_single_2graphic_pane

0x8446,	// (0x00039efe) list_single_graphic_heading_pane_ParamLimits

0x8446,	// (0x00039efe) list_single_graphic_heading_pane

0x8446,	// (0x00039efe) list_single_graphic_pane_ParamLimits

0x8446,	// (0x00039efe) list_single_graphic_pane

0x8446,	// (0x00039efe) list_single_heading_pane_ParamLimits

0x8446,	// (0x00039efe) list_single_heading_pane

0xafcf,	// (0x0003ca87) list_single_large_graphic_pane_ParamLimits

0xafcf,	// (0x0003ca87) list_single_large_graphic_pane

0x8446,	// (0x00039efe) list_single_number_heading_pane_ParamLimits

0x8446,	// (0x00039efe) list_single_number_heading_pane

0x8446,	// (0x00039efe) list_single_number_pane_ParamLimits

0x8446,	// (0x00039efe) list_single_number_pane

0x8446,	// (0x00039efe) list_single_pane_ParamLimits

0x8446,	// (0x00039efe) list_single_pane

0x2000,	// (0x00033ab8) list_highlight_pane_cp1

0x45a1,	// (0x00036059) list_single_pane_g1_ParamLimits

0x45a1,	// (0x00036059) list_single_pane_g1

0x45ad,	// (0x00036065) list_single_pane_g2_ParamLimits

0x45ad,	// (0x00036065) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0004105b) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0004105b) list_single_pane_g

0x83ef,	// (0x00039ea7) list_single_pane_t1_ParamLimits

0x83ef,	// (0x00039ea7) list_single_pane_t1

0x45a1,	// (0x00036059) list_single_number_pane_g1_ParamLimits

0x45a1,	// (0x00036059) list_single_number_pane_g1

0x45ad,	// (0x00036065) list_single_number_pane_g2_ParamLimits

0x45ad,	// (0x00036065) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0004105b) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0004105b) list_single_number_pane_g

0x66f7,	// (0x000381af) list_single_number_pane_t1_ParamLimits

0x66f7,	// (0x000381af) list_single_number_pane_t1

0x8339,	// (0x00039df1) list_single_number_pane_t2_ParamLimits

0x8339,	// (0x00039df1) list_single_number_pane_t2

0x0001,

0xf926,	// (0x000413de) list_single_number_pane_t_ParamLimits

0xf926,	// (0x000413de) list_single_number_pane_t

0x66eb,	// (0x000381a3) list_single_graphic_pane_g1_ParamLimits

0x66eb,	// (0x000381a3) list_single_graphic_pane_g1

0x45a1,	// (0x00036059) list_single_graphic_pane_g2_ParamLimits

0x45a1,	// (0x00036059) list_single_graphic_pane_g2

0x45ad,	// (0x00036065) list_single_graphic_pane_g3_ParamLimits

0x45ad,	// (0x00036065) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00041054) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00041054) list_single_graphic_pane_g

0x66f7,	// (0x000381af) list_single_graphic_pane_t1_ParamLimits

0x66f7,	// (0x000381af) list_single_graphic_pane_t1

0x45a1,	// (0x00036059) list_single_heading_pane_g1_ParamLimits

0x45a1,	// (0x00036059) list_single_heading_pane_g1

0x45ad,	// (0x00036065) list_single_heading_pane_g2_ParamLimits

0x45ad,	// (0x00036065) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0004105b) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0004105b) list_single_heading_pane_g

0x45cf,	// (0x00036087) list_single_heading_pane_t1_ParamLimits

0x45cf,	// (0x00036087) list_single_heading_pane_t1

0x45e5,	// (0x0003609d) list_single_heading_pane_t2_ParamLimits

0x45e5,	// (0x0003609d) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00041060) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00041060) list_single_heading_pane_t

0x45a1,	// (0x00036059) list_single_number_heading_pane_g1_ParamLimits

0x45a1,	// (0x00036059) list_single_number_heading_pane_g1

0x45ad,	// (0x00036065) list_single_number_heading_pane_g2_ParamLimits

0x45ad,	// (0x00036065) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0004105b) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0004105b) list_single_number_heading_pane_g

0x45cf,	// (0x00036087) list_single_number_heading_pane_t1_ParamLimits

0x45cf,	// (0x00036087) list_single_number_heading_pane_t1

0x45f7,	// (0x000360af) list_single_number_heading_pane_t2_ParamLimits

0x45f7,	// (0x000360af) list_single_number_heading_pane_t2

0x4609,	// (0x000360c1) list_single_number_heading_pane_t3_ParamLimits

0x4609,	// (0x000360c1) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00041065) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00041065) list_single_number_heading_pane_t

0x670d,	// (0x000381c5) list_single_graphic_heading_pane_g1_ParamLimits

0x670d,	// (0x000381c5) list_single_graphic_heading_pane_g1

0x6719,	// (0x000381d1) list_single_graphic_heading_pane_g4_ParamLimits

0x6719,	// (0x000381d1) list_single_graphic_heading_pane_g4

0x45ad,	// (0x00036065) list_single_graphic_heading_pane_g5_ParamLimits

0x45ad,	// (0x00036065) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0004106c) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0004106c) list_single_graphic_heading_pane_g

0x45cf,	// (0x00036087) list_single_graphic_heading_pane_t1_ParamLimits

0x45cf,	// (0x00036087) list_single_graphic_heading_pane_t1

0x672a,	// (0x000381e2) list_single_graphic_heading_pane_t2_ParamLimits

0x672a,	// (0x000381e2) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00041073) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00041073) list_single_graphic_heading_pane_t

0x673c,	// (0x000381f4) list_single_large_graphic_pane_g1_ParamLimits

0x673c,	// (0x000381f4) list_single_large_graphic_pane_g1

0x6748,	// (0x00038200) list_single_large_graphic_pane_g2_ParamLimits

0x6748,	// (0x00038200) list_single_large_graphic_pane_g2

0x6754,	// (0x0003820c) list_single_large_graphic_pane_g3_ParamLimits

0x6754,	// (0x0003820c) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00041078) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00041078) list_single_large_graphic_pane_g

0xa02d,	// (0x0003bae5) wait_border_pane_g2_copy1

0x6760,	// (0x00038218) list_single_large_graphic_pane_g4_cp2

0x6768,	// (0x00038220) list_single_large_graphic_pane_t1_ParamLimits

0x6768,	// (0x00038220) list_single_large_graphic_pane_t1

0x4633,	// (0x000360eb) list_double_pane_g1_ParamLimits

0x4633,	// (0x000360eb) list_double_pane_g1

0x463f,	// (0x000360f7) list_double_pane_g2_ParamLimits

0x463f,	// (0x000360f7) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0004107f) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0004107f) list_double_pane_g

0x677e,	// (0x00038236) list_double_pane_t1_ParamLimits

0x677e,	// (0x00038236) list_double_pane_t1

0x6794,	// (0x0003824c) list_double_pane_t2_ParamLimits

0x6794,	// (0x0003824c) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00041084) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00041084) list_double_pane_t

0x67a6,	// (0x0003825e) list_double2_pane_g1_ParamLimits

0x67a6,	// (0x0003825e) list_double2_pane_g1

0x463f,	// (0x000360f7) list_double2_pane_g2_ParamLimits

0x463f,	// (0x000360f7) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00041089) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00041089) list_double2_pane_g

0x677e,	// (0x00038236) list_double2_pane_t1_ParamLimits

0x677e,	// (0x00038236) list_double2_pane_t1

0x67b7,	// (0x0003826f) list_double2_pane_t2_ParamLimits

0x67b7,	// (0x0003826f) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0004108e) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0004108e) list_double2_pane_t

0x4633,	// (0x000360eb) list_double_number_pane_g1_ParamLimits

0x4633,	// (0x000360eb) list_double_number_pane_g1

0x463f,	// (0x000360f7) list_double_number_pane_g2_ParamLimits

0x463f,	// (0x000360f7) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0004107f) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0004107f) list_double_number_pane_g

0x67c9,	// (0x00038281) list_double_number_pane_t1_ParamLimits

0x67c9,	// (0x00038281) list_double_number_pane_t1

0x67db,	// (0x00038293) list_double_number_pane_t2_ParamLimits

0x67db,	// (0x00038293) list_double_number_pane_t2

0x67f1,	// (0x000382a9) list_double_number_pane_t3_ParamLimits

0x67f1,	// (0x000382a9) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00041093) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00041093) list_double_number_pane_t

0x6803,	// (0x000382bb) list_double_graphic_pane_g1_ParamLimits

0x6803,	// (0x000382bb) list_double_graphic_pane_g1

0x464b,	// (0x00036103) list_double_graphic_pane_g2_ParamLimits

0x464b,	// (0x00036103) list_double_graphic_pane_g2

0x465a,	// (0x00036112) list_double_graphic_pane_g3_ParamLimits

0x465a,	// (0x00036112) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0004109a) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0004109a) list_double_graphic_pane_g

0x67db,	// (0x00038293) list_double_graphic_pane_t1_ParamLimits

0x67db,	// (0x00038293) list_double_graphic_pane_t1

0x67f1,	// (0x000382a9) list_double_graphic_pane_t2_ParamLimits

0x67f1,	// (0x000382a9) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x000410a3) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x000410a3) list_double_graphic_pane_t

0x6803,	// (0x000382bb) list_double2_graphic_pane_g1_ParamLimits

0x6803,	// (0x000382bb) list_double2_graphic_pane_g1

0x4666,	// (0x0003611e) list_double2_graphic_pane_g2_ParamLimits

0x4666,	// (0x0003611e) list_double2_graphic_pane_g2

0x4672,	// (0x0003612a) list_double2_graphic_pane_g3_ParamLimits

0x4672,	// (0x0003612a) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000410a8) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000410a8) list_double2_graphic_pane_g

0x67db,	// (0x00038293) list_double2_graphic_pane_t1_ParamLimits

0x67db,	// (0x00038293) list_double2_graphic_pane_t1

0x681b,	// (0x000382d3) list_double2_graphic_pane_t2_ParamLimits

0x681b,	// (0x000382d3) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000410af) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000410af) list_double2_graphic_pane_t

0x682d,	// (0x000382e5) list_double_large_graphic_pane_g1_ParamLimits

0x682d,	// (0x000382e5) list_double_large_graphic_pane_g1

0x67a6,	// (0x0003825e) list_double_large_graphic_pane_g2_ParamLimits

0x67a6,	// (0x0003825e) list_double_large_graphic_pane_g2

0x463f,	// (0x000360f7) list_double_large_graphic_pane_g3_ParamLimits

0x463f,	// (0x000360f7) list_double_large_graphic_pane_g3

0x6840,	// (0x000382f8) list_double_large_graphic_pane_g4_ParamLimits

0x6840,	// (0x000382f8) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x000410b4) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x000410b4) list_double_large_graphic_pane_g

0x6852,	// (0x0003830a) list_double_large_graphic_pane_t1_ParamLimits

0x6852,	// (0x0003830a) list_double_large_graphic_pane_t1

0x686b,	// (0x00038323) list_double_large_graphic_pane_t2_ParamLimits

0x686b,	// (0x00038323) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x000410bf) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x000410bf) list_double_large_graphic_pane_t

0x687d,	// (0x00038335) list_double2_large_graphic_pane_g1_ParamLimits

0x687d,	// (0x00038335) list_double2_large_graphic_pane_g1

0x67a6,	// (0x0003825e) list_double2_large_graphic_pane_g2_ParamLimits

0x67a6,	// (0x0003825e) list_double2_large_graphic_pane_g2

0x463f,	// (0x000360f7) list_double2_large_graphic_pane_g3_ParamLimits

0x463f,	// (0x000360f7) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x000410c4) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x000410c4) list_double2_large_graphic_pane_g

0x67db,	// (0x00038293) list_double2_large_graphic_pane_t1_ParamLimits

0x67db,	// (0x00038293) list_double2_large_graphic_pane_t1

0x681b,	// (0x000382d3) list_double2_large_graphic_pane_t2_ParamLimits

0x681b,	// (0x000382d3) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000410af) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000410af) list_double2_large_graphic_pane_t

0x6889,	// (0x00038341) list_double_heading_pane_g1_ParamLimits

0x6889,	// (0x00038341) list_double_heading_pane_g1

0x4693,	// (0x0003614b) list_double_heading_pane_g2_ParamLimits

0x4693,	// (0x0003614b) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x000410cb) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x000410cb) list_double_heading_pane_g

0x689a,	// (0x00038352) list_double_heading_pane_t1_ParamLimits

0x689a,	// (0x00038352) list_double_heading_pane_t1

0x681b,	// (0x000382d3) list_double_heading_pane_t2_ParamLimits

0x681b,	// (0x000382d3) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x000410d0) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x000410d0) list_double_heading_pane_t

0x68b0,	// (0x00038368) list_double_graphic_heading_pane_g1_ParamLimits

0x68b0,	// (0x00038368) list_double_graphic_heading_pane_g1

0x6889,	// (0x00038341) list_double_graphic_heading_pane_g2_ParamLimits

0x6889,	// (0x00038341) list_double_graphic_heading_pane_g2

0x4693,	// (0x0003614b) list_double_graphic_heading_pane_g3_ParamLimits

0x4693,	// (0x0003614b) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x000410d5) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x000410d5) list_double_graphic_heading_pane_g

0x689a,	// (0x00038352) list_double_graphic_heading_pane_t1_ParamLimits

0x689a,	// (0x00038352) list_double_graphic_heading_pane_t1

0x681b,	// (0x000382d3) list_double_graphic_heading_pane_t2_ParamLimits

0x681b,	// (0x000382d3) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x000410d0) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x000410d0) list_double_graphic_heading_pane_t

0x67a6,	// (0x0003825e) list_double_time_pane_g1_ParamLimits

0x67a6,	// (0x0003825e) list_double_time_pane_g1

0x463f,	// (0x000360f7) list_double_time_pane_g2_ParamLimits

0x463f,	// (0x000360f7) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x00041089) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x00041089) list_double_time_pane_g

0x469f,	// (0x00036157) list_double_time_pane_t1_ParamLimits

0x469f,	// (0x00036157) list_double_time_pane_t1

0x46b5,	// (0x0003616d) list_double_time_pane_t2_ParamLimits

0x46b5,	// (0x0003616d) list_double_time_pane_t2

0x46c7,	// (0x0003617f) list_double_time_pane_t3_ParamLimits

0x46c7,	// (0x0003617f) list_double_time_pane_t3

0x46d9,	// (0x00036191) list_double_time_pane_t4_ParamLimits

0x46d9,	// (0x00036191) list_double_time_pane_t4

0x0003,

0xf624,	// (0x000410dc) list_double_time_pane_t_ParamLimits

0xf624,	// (0x000410dc) list_double_time_pane_t

0x46eb,	// (0x000361a3) list_setting_pane_g1_ParamLimits

0x46eb,	// (0x000361a3) list_setting_pane_g1

0x46f7,	// (0x000361af) list_setting_pane_g2_ParamLimits

0x46f7,	// (0x000361af) list_setting_pane_g2

0x0001,

0xf62d,	// (0x000410e5) list_setting_pane_g_ParamLimits

0xf62d,	// (0x000410e5) list_setting_pane_g

0x68bc,	// (0x00038374) list_setting_pane_t1_ParamLimits

0x68bc,	// (0x00038374) list_setting_pane_t1

0x68d3,	// (0x0003838b) list_setting_pane_t2_ParamLimits

0x68d3,	// (0x0003838b) list_setting_pane_t2

0x0002,

0xf632,	// (0x000410ea) list_setting_pane_t_ParamLimits

0xf632,	// (0x000410ea) list_setting_pane_t

0x6910,	// (0x000383c8) set_value_pane_cp_ParamLimits

0x6910,	// (0x000383c8) set_value_pane_cp

0x4703,	// (0x000361bb) list_setting_number_pane_g1_ParamLimits

0x4703,	// (0x000361bb) list_setting_number_pane_g1

0x470f,	// (0x000361c7) list_setting_number_pane_g2_ParamLimits

0x470f,	// (0x000361c7) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x000410f1) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x000410f1) list_setting_number_pane_g

0x691c,	// (0x000383d4) list_setting_number_pane_t1_ParamLimits

0x691c,	// (0x000383d4) list_setting_number_pane_t1

0x471b,	// (0x000361d3) list_setting_number_pane_t2_ParamLimits

0x471b,	// (0x000361d3) list_setting_number_pane_t2

0x6930,	// (0x000383e8) list_setting_number_pane_t3_ParamLimits

0x6930,	// (0x000383e8) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x000410f6) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x000410f6) list_setting_number_pane_t

0x6910,	// (0x000383c8) set_value_pane_ParamLimits

0x6910,	// (0x000383c8) set_value_pane

0x23c2,	// (0x00033e7a) bg_set_opt_pane_ParamLimits

0x23c2,	// (0x00033e7a) bg_set_opt_pane

0x6948,	// (0x00038400) set_value_pane_t1

0x23e3,	// (0x00033e9b) slider_set_pane_cp3

0x6956,	// (0x0003840e) volume_small_pane_cp

0x23ec,	// (0x00033ea4) list_form_gen_pane

0x23f5,	// (0x00033ead) scroll_pane_cp8

0x695f,	// (0x00038417) form_field_data_pane_ParamLimits

0x695f,	// (0x00038417) form_field_data_pane

0x6977,	// (0x0003842f) form_field_data_wide_pane_ParamLimits

0x6977,	// (0x0003842f) form_field_data_wide_pane

0x6998,	// (0x00038450) form_field_popup_pane_ParamLimits

0x6998,	// (0x00038450) form_field_popup_pane

0x69b6,	// (0x0003846e) form_field_popup_wide_pane_ParamLimits

0x69b6,	// (0x0003846e) form_field_popup_wide_pane

0x476d,	// (0x00036225) form_field_slider_pane_ParamLimits

0x476d,	// (0x00036225) form_field_slider_pane

0x69d3,	// (0x0003848b) form_field_slider_wide_pane_ParamLimits

0x69d3,	// (0x0003848b) form_field_slider_wide_pane

0x2406,	// (0x00033ebe) data_form_pane

0x69f0,	// (0x000384a8) form_field_data_pane_t1

0x2412,	// (0x00033eca) input_focus_pane

0x6a08,	// (0x000384c0) data_form_wide_pane

0x6a25,	// (0x000384dd) form_field_data_wide_pane_t1

0x2306,	// (0x00033dbe) input_focus_pane_cp6

0x6a47,	// (0x000384ff) form_field_popup_pane_t1

0x2412,	// (0x00033eca) input_focus_pane_cp7

0x2440,	// (0x00033ef8) list_form_pane

0x6a67,	// (0x0003851f) form_field_popup_wide_pane_t1

0x2412,	// (0x00033eca) input_focus_pane_cp8

0x244c,	// (0x00033f04) list_form_wide_pane

0x6a84,	// (0x0003853c) form_field_slider_pane_t1_ParamLimits

0x6a84,	// (0x0003853c) form_field_slider_pane_t1

0x6a9a,	// (0x00038552) form_field_slider_pane_t2_ParamLimits

0x6a9a,	// (0x00038552) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x00041106) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x00041106) form_field_slider_pane_t

0x204e,	// (0x00033b06) input_focus_pane_cp9_ParamLimits

0x204e,	// (0x00033b06) input_focus_pane_cp9

0x6aaf,	// (0x00038567) slider_cont_pane_ParamLimits

0x6aaf,	// (0x00038567) slider_cont_pane

0x2458,	// (0x00033f10) form_field_slider_wide_pane_t1_ParamLimits

0x2458,	// (0x00033f10) form_field_slider_wide_pane_t1

0x6ac3,	// (0x0003857b) form_field_slider_wide_pane_t2_ParamLimits

0x6ac3,	// (0x0003857b) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x0004110b) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x0004110b) form_field_slider_wide_pane_t

0x204e,	// (0x00033b06) input_focus_pane_cp10_ParamLimits

0x204e,	// (0x00033b06) input_focus_pane_cp10

0x6ad5,	// (0x0003858d) slider_cont_pane_cp1_ParamLimits

0x6ad5,	// (0x0003858d) slider_cont_pane_cp1

0x6ae9,	// (0x000385a1) slider_form_pane_cp

0x246a,	// (0x00033f22) input_focus_pane_g1

0x2472,	// (0x00033f2a) input_focus_pane_g2

0x247a,	// (0x00033f32) input_focus_pane_g3

0x2482,	// (0x00033f3a) input_focus_pane_g4

0x248a,	// (0x00033f42) input_focus_pane_g5

0x2492,	// (0x00033f4a) input_focus_pane_g6

0x249a,	// (0x00033f52) input_focus_pane_g7

0x24a2,	// (0x00033f5a) input_focus_pane_g8

0x24aa,	// (0x00033f62) input_focus_pane_g9

0x1ff6,	// (0x00033aae) input_focus_pane_g10

0x0009,

0xf658,	// (0x00041110) input_focus_pane_g

0xa036,	// (0x0003baee) wait_border_pane_g3_copy1

0x6af1,	// (0x000385a9) data_form_pane_t1

0x1ff6,	// (0x00033aae) wait_anim_pane_g1_copy1

0x83c3,	// (0x00039e7b) data_form_wide_pane_t1

0x6b0c,	// (0x000385c4) list_form_graphic_pane_cp_ParamLimits

0x6b0c,	// (0x000385c4) list_form_graphic_pane_cp

0xaf25,	// (0x0003c9dd) slider_form_pane_g1

0xaf2e,	// (0x0003c9e6) slider_form_pane_g2

0x0006,

0xf956,	// (0x0004140e) slider_form_pane_g

0x6b20,	// (0x000385d8) list_form_graphic_pane_ParamLimits

0x6b20,	// (0x000385d8) list_form_graphic_pane

0x6b37,	// (0x000385ef) list_form_graphic_pane_g1

0x6b3f,	// (0x000385f7) list_form_graphic_pane_t1_ParamLimits

0x6b3f,	// (0x000385f7) list_form_graphic_pane_t1

0x205c,	// (0x00033b14) list_highlight_pane_cp5_ParamLimits

0x205c,	// (0x00033b14) list_highlight_pane_cp5

0x6b54,	// (0x0003860c) find_pane_g1

0x24b2,	// (0x00033f6a) input_find_pane

0x6b5d,	// (0x00038615) input_find_pane_g1_ParamLimits

0x6b5d,	// (0x00038615) input_find_pane_g1

0x6b69,	// (0x00038621) input_find_pane_t1_ParamLimits

0x6b69,	// (0x00038621) input_find_pane_t1

0x6b7e,	// (0x00038636) input_find_pane_t2_ParamLimits

0x6b7e,	// (0x00038636) input_find_pane_t2

0x0001,

0xf66d,	// (0x00041125) input_find_pane_t_ParamLimits

0xf66d,	// (0x00041125) input_find_pane_t

0x24bb,	// (0x00033f73) input_focus_pane_cp5_ParamLimits

0x24bb,	// (0x00033f73) input_focus_pane_cp5

0x24ce,	// (0x00033f86) bg_popup_window_pane_cp2_ParamLimits

0x24ce,	// (0x00033f86) bg_popup_window_pane_cp2

0x24db,	// (0x00033f93) listscroll_menu_pane_ParamLimits

0x24db,	// (0x00033f93) listscroll_menu_pane

0x6b9f,	// (0x00038657) popup_submenu_window_ParamLimits

0x6b9f,	// (0x00038657) popup_submenu_window

0x24e7,	// (0x00033f9f) find_popup_pane_g1

0x6bc7,	// (0x0003867f) input_popup_find_pane_cp

0x24ef,	// (0x00033fa7) input_focus_pane_cp4_ParamLimits

0x24ef,	// (0x00033fa7) input_focus_pane_cp4

0x24fd,	// (0x00033fb5) input_popup_find_pane_t1_ParamLimits

0x24fd,	// (0x00033fb5) input_popup_find_pane_t1

0x2000,	// (0x00033ab8) bg_popup_sub_pane_cp

0x252b,	// (0x00033fe3) listscroll_popup_sub_pane

0x2533,	// (0x00033feb) list_submenu_pane_ParamLimits

0x2533,	// (0x00033feb) list_submenu_pane

0x2544,	// (0x00033ffc) scroll_pane_cp4

0x6bdf,	// (0x00038697) list_single_popup_submenu_pane_ParamLimits

0x6bdf,	// (0x00038697) list_single_popup_submenu_pane

0x2e82,	// (0x0003493a) list_single_popup_submenu_pane_g1

0x6bf3,	// (0x000386ab) list_single_popup_submenu_pane_t1_ParamLimits

0x6bf3,	// (0x000386ab) list_single_popup_submenu_pane_t1

0x205c,	// (0x00033b14) bg_active_tab_pane_cp1_ParamLimits

0x205c,	// (0x00033b14) bg_active_tab_pane_cp1

0x254c,	// (0x00034004) tabs_2_active_pane_g1

0x6c08,	// (0x000386c0) tabs_2_active_pane_t1

0x205c,	// (0x00033b14) bg_passive_tab_pane_cp1_ParamLimits

0x205c,	// (0x00033b14) bg_passive_tab_pane_cp1

0x254c,	// (0x00034004) tabs_2_passive_pane_g1

0x6c08,	// (0x000386c0) tabs_2_passive_pane_t1

0x6c1a,	// (0x000386d2) bg_active_tab_pane_cp4

0x6c28,	// (0x000386e0) tabs_2_long_active_pane_t1

0x6c3b,	// (0x000386f3) bg_passive_tab_pane_cp4

0x8065,	// (0x00039b1d) list_single_midp_graphic_pane_g4_ParamLimits

0x6c1a,	// (0x000386d2) bg_active_tab_pane_cp5

0x6c47,	// (0x000386ff) tabs_3_long_active_pane_t1

0x6c3b,	// (0x000386f3) bg_passive_tab_pane_cp5

0x8065,	// (0x00039b1d) list_single_midp_graphic_pane_g4

0x205c,	// (0x00033b14) bg_popup_window_pane_cp13_ParamLimits

0x205c,	// (0x00033b14) bg_popup_window_pane_cp13

0x2560,	// (0x00034018) listscroll_popup_fast_pane_ParamLimits

0x2560,	// (0x00034018) listscroll_popup_fast_pane

0x256c,	// (0x00034024) grid_popup_fast_pane_ParamLimits

0x256c,	// (0x00034024) grid_popup_fast_pane

0x257e,	// (0x00034036) scroll_pane_cp9_ParamLimits

0x257e,	// (0x00034036) scroll_pane_cp9

0xc888,	// (0x0003e340) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc888,	// (0x0003e340) list_single_graphic_hl_pane_t1_cp2

0x2591,	// (0x00034049) input_focus_pane_cp20_ParamLimits

0x2591,	// (0x00034049) input_focus_pane_cp20

0x259f,	// (0x00034057) query_popup_data_pane_t1_ParamLimits

0x259f,	// (0x00034057) query_popup_data_pane_t1

0x25b2,	// (0x0003406a) query_popup_data_pane_t2_ParamLimits

0x25b2,	// (0x0003406a) query_popup_data_pane_t2

0x25f8,	// (0x000340b0) query_popup_data_pane_t3_ParamLimits

0x25f8,	// (0x000340b0) query_popup_data_pane_t3

0x2639,	// (0x000340f1) query_popup_data_pane_t4_ParamLimits

0x2639,	// (0x000340f1) query_popup_data_pane_t4

0x2675,	// (0x0003412d) query_popup_data_pane_t5_ParamLimits

0x2675,	// (0x0003412d) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x0004112a) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x0004112a) query_popup_data_pane_t

0x246a,	// (0x00033f22) bg_set_opt_pane_g1

0x2472,	// (0x00033f2a) bg_set_opt_pane_g2

0x247a,	// (0x00033f32) bg_set_opt_pane_g3

0x2482,	// (0x00033f3a) bg_set_opt_pane_g4

0x248a,	// (0x00033f42) bg_set_opt_pane_g5

0x2492,	// (0x00033f4a) bg_set_opt_pane_g6

0x249a,	// (0x00033f52) bg_set_opt_pane_g7

0x24a2,	// (0x00033f5a) bg_set_opt_pane_g8

0x24aa,	// (0x00033f62) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x00041135) bg_set_opt_pane_g

0x719e,	// (0x00038c56) control_top_pane_stacon_ParamLimits

0x719e,	// (0x00038c56) control_top_pane_stacon

0x71f1,	// (0x00038ca9) signal_pane_stacon_ParamLimits

0x71f1,	// (0x00038ca9) signal_pane_stacon

0x2a01,	// (0x000344b9) stacon_top_pane_g1_ParamLimits

0x2a01,	// (0x000344b9) stacon_top_pane_g1

0x7216,	// (0x00038cce) title_pane_stacon_ParamLimits

0x7216,	// (0x00038cce) title_pane_stacon

0x7240,	// (0x00038cf8) uni_indicator_pane_stacon_ParamLimits

0x7240,	// (0x00038cf8) uni_indicator_pane_stacon

0x7255,	// (0x00038d0d) battery_pane_stacon_ParamLimits

0x7255,	// (0x00038d0d) battery_pane_stacon

0x7299,	// (0x00038d51) control_bottom_pane_stacon_ParamLimits

0x7299,	// (0x00038d51) control_bottom_pane_stacon

0x72bc,	// (0x00038d74) navi_pane_stacon_ParamLimits

0x72bc,	// (0x00038d74) navi_pane_stacon

0x2a23,	// (0x000344db) stacon_bottom_pane_g1_ParamLimits

0x2a23,	// (0x000344db) stacon_bottom_pane_g1

0x6c73,	// (0x0003872b) aid_levels_signal_lsc_ParamLimits

0x6c73,	// (0x0003872b) aid_levels_signal_lsc

0x6c89,	// (0x00038741) signal_pane_stacon_g1_ParamLimits

0x6c89,	// (0x00038741) signal_pane_stacon_g1

0x6c9d,	// (0x00038755) signal_pane_stacon_g2_ParamLimits

0x6c9d,	// (0x00038755) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x00041148) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x00041148) signal_pane_stacon_g

0x6cd2,	// (0x0003878a) title_pane_stacon_t1_ParamLimits

0x6cd2,	// (0x0003878a) title_pane_stacon_t1

0x26cd,	// (0x00034185) uni_indicator_pane_stacon_g1

0x26d7,	// (0x0003418f) uni_indicator_pane_stacon_g2

0x26b9,	// (0x00034171) uni_indicator_pane_stacon_g3

0x26c3,	// (0x0003417b) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x00041154) uni_indicator_pane_stacon_g

0x6cf7,	// (0x000387af) control_top_pane_stacon_g1

0x6cff,	// (0x000387b7) control_top_pane_stacon_t1_ParamLimits

0x6cff,	// (0x000387b7) control_top_pane_stacon_t1

0x6d36,	// (0x000387ee) aid_levels_battery_lsc_ParamLimits

0x6d36,	// (0x000387ee) aid_levels_battery_lsc

0x6d4d,	// (0x00038805) battery_pane_stacon_g1_ParamLimits

0x6d4d,	// (0x00038805) battery_pane_stacon_g1

0x6d60,	// (0x00038818) battery_pane_stacon_g2_ParamLimits

0x6d60,	// (0x00038818) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x0004115d) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x0004115d) battery_pane_stacon_g

0x6d9e,	// (0x00038856) navi_icon_pane_stacon

0x6db2,	// (0x0003886a) navi_navi_pane_stacon

0x6d9e,	// (0x00038856) navi_text_pane_stacon

0x6cf7,	// (0x000387af) control_bottom_pane_stacon_g1

0x6dc6,	// (0x0003887e) control_bottom_pane_stacon_t1_ParamLimits

0x6dc6,	// (0x0003887e) control_bottom_pane_stacon_t1

0x6dfd,	// (0x000388b5) grid_app_pane_ParamLimits

0x6dfd,	// (0x000388b5) grid_app_pane

0x6e1f,	// (0x000388d7) scroll_pane_cp15_ParamLimits

0x6e1f,	// (0x000388d7) scroll_pane_cp15

0x6e32,	// (0x000388ea) cell_app_pane_ParamLimits

0x6e32,	// (0x000388ea) cell_app_pane

0x6e5a,	// (0x00038912) cell_app_pane_g1_ParamLimits

0x6e5a,	// (0x00038912) cell_app_pane_g1

0x26fb,	// (0x000341b3) cell_app_pane_g2_ParamLimits

0x26fb,	// (0x000341b3) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x00041162) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x00041162) cell_app_pane_g

0x6e7e,	// (0x00038936) cell_app_pane_t1_ParamLimits

0x6e7e,	// (0x00038936) cell_app_pane_t1

0x2707,	// (0x000341bf) grid_highlight_pane_ParamLimits

0x2707,	// (0x000341bf) grid_highlight_pane

0x246a,	// (0x00033f22) cell_highlight_pane_g1

0x2472,	// (0x00033f2a) cell_highlight_pane_g2

0x247a,	// (0x00033f32) cell_highlight_pane_g3

0x2482,	// (0x00033f3a) cell_highlight_pane_g4

0x248a,	// (0x00033f42) cell_highlight_pane_g5

0x2492,	// (0x00033f4a) cell_highlight_pane_g6

0x249a,	// (0x00033f52) cell_highlight_pane_g7

0x24a2,	// (0x00033f5a) cell_highlight_pane_g8

0x24aa,	// (0x00033f62) cell_highlight_pane_g9

0x1ff6,	// (0x00033aae) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x00041110) cell_highlight_pane_g

0x2718,	// (0x000341d0) bg_scroll_pane

0x6ea8,	// (0x00038960) scroll_handle_pane

0x275f,	// (0x00034217) scroll_bg_pane_g1

0x2774,	// (0x0003422c) scroll_bg_pane_g2

0x278c,	// (0x00034244) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x00041167) scroll_bg_pane_g

0x6ed1,	// (0x00038989) scroll_handle_focus_pane_ParamLimits

0x6ed1,	// (0x00038989) scroll_handle_focus_pane

0x275f,	// (0x00034217) scroll_handle_pane_g1

0x27a1,	// (0x00034259) scroll_handle_pane_g2

0x278c,	// (0x00034244) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x0004116e) scroll_handle_pane_g

0x24ef,	// (0x00033fa7) bg_popup_sub_pane_cp21_ParamLimits

0x24ef,	// (0x00033fa7) bg_popup_sub_pane_cp21

0x6ede,	// (0x00038996) popup_fep_japan_predictive_window_t1_ParamLimits

0x6ede,	// (0x00038996) popup_fep_japan_predictive_window_t1

0x6ef8,	// (0x000389b0) popup_fep_japan_predictive_window_t2_ParamLimits

0x6ef8,	// (0x000389b0) popup_fep_japan_predictive_window_t2

0x6f2b,	// (0x000389e3) popup_fep_japan_predictive_window_t3_ParamLimits

0x6f2b,	// (0x000389e3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x00041175) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x00041175) popup_fep_japan_predictive_window_t

0x2000,	// (0x00033ab8) bg_popup_sub_pane_cp23

0x3506,	// (0x00034fbe) listscroll_japin_cand_pane

0x27b5,	// (0x0003426d) popup_fep_japan_candidate_window_t1

0x27c3,	// (0x0003427b) candidate_pane_ParamLimits

0x27c3,	// (0x0003427b) candidate_pane

0x6f62,	// (0x00038a1a) scroll_pane_cp30

0x27d5,	// (0x0003428d) list_single_popup_jap_candidate_pane_ParamLimits

0x27d5,	// (0x0003428d) list_single_popup_jap_candidate_pane

0x2000,	// (0x00033ab8) list_highlight_pane_cp30

0x27ea,	// (0x000342a2) list_single_popup_jap_candidate_pane_t1

0x27f9,	// (0x000342b1) level_1_signal

0x2806,	// (0x000342be) level_2_signal

0x2813,	// (0x000342cb) level_3_signal

0x2820,	// (0x000342d8) level_4_signal

0x282d,	// (0x000342e5) level_5_signal

0x283a,	// (0x000342f2) level_6_signal

0x2847,	// (0x000342ff) level_7_signal

0x27f9,	// (0x000342b1) level_1_battery

0x2806,	// (0x000342be) level_2_battery

0x2813,	// (0x000342cb) level_3_battery

0x2820,	// (0x000342d8) level_4_battery

0x282d,	// (0x000342e5) level_5_battery

0x283a,	// (0x000342f2) level_6_battery

0x2847,	// (0x000342ff) level_7_battery

0x286c,	// (0x00034324) list_menu_pane_ParamLimits

0x286c,	// (0x00034324) list_menu_pane

0x2882,	// (0x0003433a) scroll_pane_cp25_ParamLimits

0x2882,	// (0x0003433a) scroll_pane_cp25

0x289b,	// (0x00034353) list_double2_graphic_pane_cp2_ParamLimits

0x289b,	// (0x00034353) list_double2_graphic_pane_cp2

0x289b,	// (0x00034353) list_double2_large_graphic_pane_cp2_ParamLimits

0x289b,	// (0x00034353) list_double2_large_graphic_pane_cp2

0x289b,	// (0x00034353) list_double2_pane_cp2_ParamLimits

0x289b,	// (0x00034353) list_double2_pane_cp2

0x289b,	// (0x00034353) list_double_graphic_pane_cp2_ParamLimits

0x289b,	// (0x00034353) list_double_graphic_pane_cp2

0x289b,	// (0x00034353) list_double_large_graphic_pane_cp2_ParamLimits

0x289b,	// (0x00034353) list_double_large_graphic_pane_cp2

0x289b,	// (0x00034353) list_double_number_pane_cp2_ParamLimits

0x289b,	// (0x00034353) list_double_number_pane_cp2

0x289b,	// (0x00034353) list_double_pane_cp2_ParamLimits

0x289b,	// (0x00034353) list_double_pane_cp2

0x6f9d,	// (0x00038a55) list_single_2graphic_pane_cp2_ParamLimits

0x6f9d,	// (0x00038a55) list_single_2graphic_pane_cp2

0x6f9d,	// (0x00038a55) list_single_graphic_heading_pane_cp2_ParamLimits

0x6f9d,	// (0x00038a55) list_single_graphic_heading_pane_cp2

0x6f9d,	// (0x00038a55) list_single_graphic_pane_cp2_ParamLimits

0x6f9d,	// (0x00038a55) list_single_graphic_pane_cp2

0x6f9d,	// (0x00038a55) list_single_heading_pane_cp2_ParamLimits

0x6f9d,	// (0x00038a55) list_single_heading_pane_cp2

0x28ab,	// (0x00034363) list_single_large_graphic_pane_cp2_ParamLimits

0x28ab,	// (0x00034363) list_single_large_graphic_pane_cp2

0x6f9d,	// (0x00038a55) list_single_number_heading_pane_cp2_ParamLimits

0x6f9d,	// (0x00038a55) list_single_number_heading_pane_cp2

0x6f9d,	// (0x00038a55) list_single_number_pane_cp2_ParamLimits

0x6f9d,	// (0x00038a55) list_single_number_pane_cp2

0x6fb3,	// (0x00038a6b) list_single_pane_cp2_ParamLimits

0x6fb3,	// (0x00038a6b) list_single_pane_cp2

0x28c5,	// (0x0003437d) bg_popup_sub_pane_cp22

0x708b,	// (0x00038b43) popup_side_volume_key_window_g1

0x70af,	// (0x00038b67) popup_side_volume_key_window_t1

0x70cb,	// (0x00038b83) volume_small_pane_cp1

0x204e,	// (0x00033b06) bg_popup_sub_pane_cp24_ParamLimits

0x204e,	// (0x00033b06) bg_popup_sub_pane_cp24

0x28db,	// (0x00034393) fep_china_uni_candidate_pane_ParamLimits

0x28db,	// (0x00034393) fep_china_uni_candidate_pane

0x28ef,	// (0x000343a7) fep_china_uni_entry_pane

0x28ff,	// (0x000343b7) popup_fep_china_uni_window_g1

0x70d3,	// (0x00038b8b) fep_china_uni_entry_pane_g1

0x70db,	// (0x00038b93) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x000411a6) fep_china_uni_entry_pane_g

0x291b,	// (0x000343d3) fep_entry_item_pane

0x2925,	// (0x000343dd) fep_candidate_item_pane

0x70e3,	// (0x00038b9b) fep_china_uni_candidate_pane_g1

0x292d,	// (0x000343e5) fep_china_uni_candidate_pane_g2

0x2935,	// (0x000343ed) fep_china_uni_candidate_pane_g3

0x70eb,	// (0x00038ba3) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x000411ab) fep_china_uni_candidate_pane_g

0x1ff6,	// (0x00033aae) fep_entry_item_pane_g1

0x293d,	// (0x000343f5) fep_entry_item_pane_t1_ParamLimits

0x293d,	// (0x000343f5) fep_entry_item_pane_t1

0x2953,	// (0x0003440b) fep_candidate_item_pane_t1_ParamLimits

0x2953,	// (0x0003440b) fep_candidate_item_pane_t1

0x2968,	// (0x00034420) fep_candidate_item_pane_t2_ParamLimits

0x2968,	// (0x00034420) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x000411b4) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x000411b4) fep_candidate_item_pane_t

0x205c,	// (0x00033b14) list_highlight_pane_cp31_ParamLimits

0x205c,	// (0x00033b14) list_highlight_pane_cp31

0x297a,	// (0x00034432) level_1_signal_lsc

0x2983,	// (0x0003443b) level_2_signal_lsc

0x298c,	// (0x00034444) level_3_signal_lsc

0x2995,	// (0x0003444d) level_4_signal_lsc

0x299e,	// (0x00034456) level_5_signal_lsc

0x29a7,	// (0x0003445f) level_6_signal_lsc

0x29b0,	// (0x00034468) level_7_signal_lsc

0x29b0,	// (0x00034468) level_1_battery_lsc

0x29b9,	// (0x00034471) level_2_battery_lsc

0x29c2,	// (0x0003447a) level_3_battery_lsc

0x29cb,	// (0x00034483) level_4_battery_lsc

0x29d4,	// (0x0003448c) level_5_battery_lsc

0x29dd,	// (0x00034495) level_6_battery_lsc

0x297a,	// (0x00034432) level_7_battery_lsc

0x29e6,	// (0x0003449e) scroll_handle_focus_pane_g1

0x29ef,	// (0x000344a7) scroll_handle_focus_pane_g2

0x29f8,	// (0x000344b0) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x000411b9) scroll_handle_focus_pane_g

0x70f3,	// (0x00038bab) list_single_2graphic_pane_g1_ParamLimits

0x70f3,	// (0x00038bab) list_single_2graphic_pane_g1

0x6719,	// (0x000381d1) list_single_2graphic_pane_g2_ParamLimits

0x6719,	// (0x000381d1) list_single_2graphic_pane_g2

0x45ad,	// (0x00036065) list_single_2graphic_pane_g3_ParamLimits

0x45ad,	// (0x00036065) list_single_2graphic_pane_g3

0x70ff,	// (0x00038bb7) list_single_2graphic_pane_g4_ParamLimits

0x70ff,	// (0x00038bb7) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x000411c0) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x000411c0) list_single_2graphic_pane_g

0x710b,	// (0x00038bc3) list_single_2graphic_pane_t1_ParamLimits

0x710b,	// (0x00038bc3) list_single_2graphic_pane_t1

0x7139,	// (0x00038bf1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7139,	// (0x00038bf1) list_double2_graphic_large_graphic_pane_g1

0x67a6,	// (0x0003825e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x67a6,	// (0x0003825e) list_double2_graphic_large_graphic_pane_g2

0x463f,	// (0x000360f7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x463f,	// (0x000360f7) list_double2_graphic_large_graphic_pane_g3

0x4780,	// (0x00036238) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x4780,	// (0x00036238) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x000411c9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x000411c9) list_double2_graphic_large_graphic_pane_g

0x478c,	// (0x00036244) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x478c,	// (0x00036244) list_double2_graphic_large_graphic_pane_t1

0x47a2,	// (0x0003625a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x47a2,	// (0x0003625a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x000411d2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x000411d2) list_double2_graphic_large_graphic_pane_t

0x731b,	// (0x00038dd3) popup_fast_swap_window_ParamLimits

0x731b,	// (0x00038dd3) popup_fast_swap_window

0x7337,	// (0x00038def) popup_side_volume_key_window

0x2aae,	// (0x00034566) stacon_top_pane

0x2ab8,	// (0x00034570) status_pane_ParamLimits

0x2ab8,	// (0x00034570) status_pane

0x1fec,	// (0x00033aa4) status_small_pane

0x2000,	// (0x00033ab8) control_pane

0x2000,	// (0x00033ab8) stacon_bottom_pane

0x23f5,	// (0x00033ead) scroll_pane_cp121

0x23ec,	// (0x00033ea4) set_content_pane

0x7149,	// (0x00038c01) bg_active_tab_pane_g1_cp1

0x7152,	// (0x00038c0a) bg_active_tab_pane_g2_cp1

0x715b,	// (0x00038c13) bg_active_tab_pane_g3_cp1

0x7149,	// (0x00038c01) bg_passive_tab_pane_g1_cp1

0x7152,	// (0x00038c0a) bg_passive_tab_pane_g2_cp1

0x715b,	// (0x00038c13) bg_passive_tab_pane_g3_cp1

0x7164,	// (0x00038c1c) bg_active_tab_pane_g1_cp2

0x7152,	// (0x00038c0a) bg_active_tab_pane_g2_cp2

0x716d,	// (0x00038c25) bg_active_tab_pane_g3_cp2

0x7164,	// (0x00038c1c) bg_passive_tab_pane_g1_cp2

0x7152,	// (0x00038c0a) bg_passive_tab_pane_g2_cp2

0x716d,	// (0x00038c25) bg_passive_tab_pane_g3_cp2

0x7176,	// (0x00038c2e) bg_active_tab_pane_g1_cp3

0x7152,	// (0x00038c0a) bg_active_tab_pane_g2_cp3

0x717f,	// (0x00038c37) bg_active_tab_pane_g3_cp3

0x7176,	// (0x00038c2e) bg_passive_tab_pane_g1_cp3

0x7152,	// (0x00038c0a) bg_passive_tab_pane_g2_cp3

0x717f,	// (0x00038c37) bg_passive_tab_pane_g3_cp3

0x7188,	// (0x00038c40) bg_active_tab_pane_g1_cp4

0x7152,	// (0x00038c0a) bg_active_tab_pane_g2_cp4

0x7193,	// (0x00038c4b) bg_active_tab_pane_g3_cp4

0x7188,	// (0x00038c40) bg_passive_tab_pane_g1_cp4

0x7152,	// (0x00038c0a) bg_passive_tab_pane_g2_cp4

0x7193,	// (0x00038c4b) bg_passive_tab_pane_g3_cp4

0x72df,	// (0x00038d97) bg_active_tab_pane_g1_cp5

0x7152,	// (0x00038c0a) bg_active_tab_pane_g2_cp5

0x72e8,	// (0x00038da0) bg_active_tab_pane_g3_cp5

0x72df,	// (0x00038d97) bg_passive_tab_pane_g1_cp5

0x7152,	// (0x00038c0a) bg_passive_tab_pane_g2_cp5

0x72e8,	// (0x00038da0) bg_passive_tab_pane_g3_cp5

0x72f1,	// (0x00038da9) list_set_graphic_pane_ParamLimits

0x72f1,	// (0x00038da9) list_set_graphic_pane

0x2000,	// (0x00033ab8) bg_set_opt_pane_cp4

0x2a3f,	// (0x000344f7) list_set_graphic_pane_g1_ParamLimits

0x2a3f,	// (0x000344f7) list_set_graphic_pane_g1

0x2a4b,	// (0x00034503) list_set_graphic_pane_g2_ParamLimits

0x2a4b,	// (0x00034503) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x000411d7) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x000411d7) list_set_graphic_pane_g

0x0009,

0xfab7,	// (0x0004156f) volume_small_pane_cp_g

0x730f,	// (0x00038dc7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x730f,	// (0x00038dc7) list_double2_large_graphic_pane_g1_cp2

0x2a6d,	// (0x00034525) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2a6d,	// (0x00034525) list_double2_large_graphic_pane_g2_cp2

0x2a7e,	// (0x00034536) list_double2_large_graphic_pane_g3_cp2

0x2a86,	// (0x0003453e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2a86,	// (0x0003453e) list_double2_large_graphic_pane_t1_cp2

0x2a9c,	// (0x00034554) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2a9c,	// (0x00034554) list_double2_large_graphic_pane_t2_cp2

0xaae7,	// (0x0003c59f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaae7,	// (0x0003c59f) list_double_large_graphic_pane_g1_cp2

0xaaf8,	// (0x0003c5b0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaaf8,	// (0x0003c5b0) list_double_large_graphic_pane_g2_cp2

0x2bd4,	// (0x0003468c) list_double_large_graphic_pane_g3_cp2

0xab09,	// (0x0003c5c1) list_double_large_graphic_pane_g4_cp

0xab11,	// (0x0003c5c9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab11,	// (0x0003c5c9) list_double_large_graphic_pane_t1_cp2

0xab28,	// (0x0003c5e0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab28,	// (0x0003c5e0) list_double_large_graphic_pane_t2_cp2

0x2ac6,	// (0x0003457e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2ac6,	// (0x0003457e) list_double2_graphic_pane_g1_cp2

0x2ad4,	// (0x0003458c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2ad4,	// (0x0003458c) list_double2_graphic_pane_g2_cp2

0x2ae5,	// (0x0003459d) list_double2_graphic_pane_g3_cp2

0x2aef,	// (0x000345a7) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2aef,	// (0x000345a7) list_double2_graphic_pane_t1_cp2

0x2b05,	// (0x000345bd) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2b05,	// (0x000345bd) list_double2_graphic_pane_t2_cp2

0x2b17,	// (0x000345cf) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2b17,	// (0x000345cf) list_single_number_heading_pane_g1_cp2

0x2b23,	// (0x000345db) list_single_number_heading_pane_g2_cp2

0x2b2b,	// (0x000345e3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2b2b,	// (0x000345e3) list_single_number_heading_pane_t1_cp2

0x2b41,	// (0x000345f9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2b41,	// (0x000345f9) list_single_number_heading_pane_t2_cp2

0x2b53,	// (0x0003460b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2b53,	// (0x0003460b) list_single_number_heading_pane_t3_cp2

0x2b17,	// (0x000345cf) list_single_heading_pane_g1_cp2_ParamLimits

0x2b17,	// (0x000345cf) list_single_heading_pane_g1_cp2

0x2b23,	// (0x000345db) list_single_heading_pane_g2_cp2

0x2b2b,	// (0x000345e3) list_single_heading_pane_t1_cp2_ParamLimits

0x2b2b,	// (0x000345e3) list_single_heading_pane_t1_cp2

0xa8f1,	// (0x0003c3a9) list_single_heading_pane_t2_cp2_ParamLimits

0xa8f1,	// (0x0003c3a9) list_single_heading_pane_t2_cp2

0xa839,	// (0x0003c2f1) list_double_graphic_pane_g1_cp2_ParamLimits

0xa839,	// (0x0003c2f1) list_double_graphic_pane_g1_cp2

0xa845,	// (0x0003c2fd) list_double_graphic_pane_g2_cp2_ParamLimits

0xa845,	// (0x0003c2fd) list_double_graphic_pane_g2_cp2

0xa854,	// (0x0003c30c) list_double_graphic_pane_g3_cp2

0xa85c,	// (0x0003c314) list_double_graphic_pane_t1_cp2_ParamLimits

0xa85c,	// (0x0003c314) list_double_graphic_pane_t1_cp2

0xa872,	// (0x0003c32a) list_double_graphic_pane_t2_cp2_ParamLimits

0xa872,	// (0x0003c32a) list_double_graphic_pane_t2_cp2

0x2bc8,	// (0x00034680) list_double_number_pane_g1_cp2_ParamLimits

0x2bc8,	// (0x00034680) list_double_number_pane_g1_cp2

0x2bd4,	// (0x0003468c) list_double_number_pane_g2_cp2

0xa7fd,	// (0x0003c2b5) list_double_number_pane_t1_cp2_ParamLimits

0xa7fd,	// (0x0003c2b5) list_double_number_pane_t1_cp2

0xa811,	// (0x0003c2c9) list_double_number_pane_t2_cp2_ParamLimits

0xa811,	// (0x0003c2c9) list_double_number_pane_t2_cp2

0xa827,	// (0x0003c2df) list_double_number_pane_t3_cp2_ParamLimits

0xa827,	// (0x0003c2df) list_double_number_pane_t3_cp2

0xa6e6,	// (0x0003c19e) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6e6,	// (0x0003c19e) list_single_graphic_pane_g1_cp2

0x2c2d,	// (0x000346e5) list_single_graphic_pane_g2_cp2_ParamLimits

0x2c2d,	// (0x000346e5) list_single_graphic_pane_g2_cp2

0x2c39,	// (0x000346f1) list_single_graphic_pane_g3_cp2

0xa6bc,	// (0x0003c174) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0003c174) list_single_graphic_pane_t1_cp2

0x2c2d,	// (0x000346e5) list_single_number_pane_g1_cp2_ParamLimits

0x2c2d,	// (0x000346e5) list_single_number_pane_g1_cp2

0x2c39,	// (0x000346f1) list_single_number_pane_g2_cp2

0xa6bc,	// (0x0003c174) list_single_number_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0003c174) list_single_number_pane_t1_cp2

0xa6d2,	// (0x0003c18a) list_single_number_pane_t2_cp2_ParamLimits

0xa6d2,	// (0x0003c18a) list_single_number_pane_t2_cp2

0x2a6d,	// (0x00034525) list_double2_pane_g1_cp2_ParamLimits

0x2a6d,	// (0x00034525) list_double2_pane_g1_cp2

0x2a7e,	// (0x00034536) list_double2_pane_g2_cp2

0x2ba0,	// (0x00034658) list_double2_pane_t1_cp2_ParamLimits

0x2ba0,	// (0x00034658) list_double2_pane_t1_cp2

0x2bb6,	// (0x0003466e) list_double2_pane_t2_cp2_ParamLimits

0x2bb6,	// (0x0003466e) list_double2_pane_t2_cp2

0x2bc8,	// (0x00034680) list_double_pane_g1_cp2_ParamLimits

0x2bc8,	// (0x00034680) list_double_pane_g1_cp2

0x2bd4,	// (0x0003468c) list_double_pane_g2_cp2

0x2bdc,	// (0x00034694) list_double_pane_t1_cp2_ParamLimits

0x2bdc,	// (0x00034694) list_double_pane_t1_cp2

0x2bf2,	// (0x000346aa) list_double_pane_t2_cp2_ParamLimits

0x2bf2,	// (0x000346aa) list_double_pane_t2_cp2

0x7351,	// (0x00038e09) list_single_pane_cp2_g3

0x2c2d,	// (0x000346e5) list_single_pane_g1_cp2_ParamLimits

0x2c2d,	// (0x000346e5) list_single_pane_g1_cp2

0x2c39,	// (0x000346f1) list_single_pane_g2_cp2

0x2c41,	// (0x000346f9) list_single_pane_t1_cp2_ParamLimits

0x2c41,	// (0x000346f9) list_single_pane_t1_cp2

0x7359,	// (0x00038e11) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7359,	// (0x00038e11) list_single_large_graphic_pane_g1_cp2

0x2c59,	// (0x00034711) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2c59,	// (0x00034711) list_single_large_graphic_pane_g2_cp2

0x2c65,	// (0x0003471d) list_single_large_graphic_pane_g3_cp2

0x7365,	// (0x00038e1d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7365,	// (0x00038e1d) list_single_large_graphic_pane_g4_cp1

0x2c6d,	// (0x00034725) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2c6d,	// (0x00034725) list_single_large_graphic_pane_t1_cp2

0xa688,	// (0x0003c140) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa688,	// (0x0003c140) list_single_graphic_heading_pane_g1_cp2

0xa655,	// (0x0003c10d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa655,	// (0x0003c10d) list_single_graphic_heading_pane_g4_cp2

0x2c39,	// (0x000346f1) list_single_graphic_heading_pane_g5_cp2

0xa694,	// (0x0003c14c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa694,	// (0x0003c14c) list_single_graphic_heading_pane_t1_cp2

0xa6aa,	// (0x0003c162) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6aa,	// (0x0003c162) list_single_graphic_heading_pane_t2_cp2

0xa649,	// (0x0003c101) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa649,	// (0x0003c101) list_single_2graphic_pane_g1_cp2

0xa655,	// (0x0003c10d) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa655,	// (0x0003c10d) list_single_2graphic_pane_g2_cp2

0x2c39,	// (0x000346f1) list_single_2graphic_pane_g3_cp2

0xa666,	// (0x0003c11e) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa666,	// (0x0003c11e) list_single_2graphic_pane_g4_cp2

0xa672,	// (0x0003c12a) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa672,	// (0x0003c12a) list_single_2graphic_pane_t1_cp2

0x1ff6,	// (0x00033aae) list_highlight_pane_g10_cp1

0xa231,	// (0x0003bce9) list_highlight_pane_g1_cp1

0xa239,	// (0x0003bcf1) list_highlight_pane_g2_cp1

0xa241,	// (0x0003bcf9) list_highlight_pane_g3_cp1

0xa249,	// (0x0003bd01) list_highlight_pane_g4_cp1

0xa251,	// (0x0003bd09) list_highlight_pane_g5_cp1

0xa259,	// (0x0003bd11) list_highlight_pane_g6_cp1

0xa261,	// (0x0003bd19) list_highlight_pane_g7_cp1

0xa269,	// (0x0003bd21) list_highlight_pane_g8_cp1

0xa271,	// (0x0003bd29) list_highlight_pane_g9_cp1

0xa159,	// (0x0003bc11) form_field_slider_pane_t3

0xa167,	// (0x0003bc1f) form_field_slider_pane_t4

0xa175,	// (0x0003bc2d) slider_form_pane_ParamLimits

0xa175,	// (0x0003bc2d) slider_form_pane

0x2000,	// (0x00033ab8) control_abbreviations

0x2000,	// (0x00033ab8) control_conventions

0x2000,	// (0x00033ab8) control_definitions

0x2000,	// (0x00033ab8) format_table_attribute

0xa93b,	// (0x0003c3f3) bg_popup_preview_window_pane_g9

0x2000,	// (0x00033ab8) format_table_data2

0x2000,	// (0x00033ab8) format_table_data3

0x2000,	// (0x00033ab8) format_table_data_example

0x0008,

0x2000,	// (0x00033ab8) intro_purpose

0xf8b6,	// (0x0004136e) bg_popup_preview_window_pane_g

0x2000,	// (0x00033ab8) texts_category

0x2000,	// (0x00033ab8) texts_graphics

0x2c83,	// (0x0003473b) text_digital

0x2c92,	// (0x0003474a) text_primary

0x2ca1,	// (0x00034759) text_primary_small

0x2cb0,	// (0x00034768) text_secondary

0x2cbf,	// (0x00034777) text_title

0xb06e,	// (0x0003cb26) bg_passive_tab_pane_g1_cp3_srt

0x7152,	// (0x00038c0a) bg_passive_tab_pane_g2_cp3_srt

0xb077,	// (0x0003cb2f) bg_passive_tab_pane_g3_cp3_srt

0x205c,	// (0x00033b14) bg_active_tab_pane_cp3_srt_ParamLimits

0x205c,	// (0x00033b14) bg_active_tab_pane_cp3_srt

0xb080,	// (0x0003cb38) tabs_4_active_pane_srt_g1

0xb088,	// (0x0003cb40) tabs_4_active_pane_srt_t1_ParamLimits

0xb088,	// (0x0003cb40) tabs_4_active_pane_srt_t1

0xb06e,	// (0x0003cb26) bg_active_tab_pane_g1_cp3_copy1

0x7152,	// (0x00038c0a) bg_active_tab_pane_g2_cp3_copy1

0xb077,	// (0x0003cb2f) bg_active_tab_pane_g3_cp3_copy1

0x205c,	// (0x00033b14) tabs_2_long_active_pane_srt_ParamLimits

0x205c,	// (0x00033b14) tabs_2_long_active_pane_srt

0x205c,	// (0x00033b14) tabs_2_long_passive_pane_srt_ParamLimits

0x205c,	// (0x00033b14) tabs_2_long_passive_pane_srt

0x6c3b,	// (0x000386f3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6c3b,	// (0x000386f3) bg_passive_tab_pane_cp4_srt

0xad5c,	// (0x0003c814) bg_passive_tab_pane_g1_cp4_srt

0x7152,	// (0x00038c0a) bg_passive_tab_pane_g2_cp4_srt

0xad65,	// (0x0003c81d) bg_passive_tab_pane_g3_cp4_srt

0x6c1a,	// (0x000386d2) bg_active_tab_pane_cp4_srt_ParamLimits

0x6c1a,	// (0x000386d2) bg_active_tab_pane_cp4_srt

0xad6e,	// (0x0003c826) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad6e,	// (0x0003c826) tabs_2_long_active_pane_srt_t1

0xad5c,	// (0x0003c814) bg_active_tab_pane_g1_cp4_srt

0x7152,	// (0x00038c0a) bg_active_tab_pane_g2_cp4_srt

0xad65,	// (0x0003c81d) bg_active_tab_pane_g3_cp4_srt

0x204e,	// (0x00033b06) tabs_3_long_active_pane_srt_ParamLimits

0x204e,	// (0x00033b06) tabs_3_long_active_pane_srt

0x204e,	// (0x00033b06) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x204e,	// (0x00033b06) tabs_3_long_passive_pane_cp_srt

0x204e,	// (0x00033b06) tabs_3_long_passive_pane_srt_ParamLimits

0x204e,	// (0x00033b06) tabs_3_long_passive_pane_srt

0x6c3b,	// (0x000386f3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6c3b,	// (0x000386f3) bg_passive_tab_pane_cp5_srt

0x72df,	// (0x00038d97) bg_passive_tab_pane_g1_cp5_srt

0x7152,	// (0x00038c0a) bg_passive_tab_pane_g2_cp5_srt

0x72e8,	// (0x00038da0) bg_passive_tab_pane_g3_cp5_srt

0x6c1a,	// (0x000386d2) bg_active_tab_pane_cp5_srt_ParamLimits

0x6c1a,	// (0x000386d2) bg_active_tab_pane_cp5_srt

0xad4a,	// (0x0003c802) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad4a,	// (0x0003c802) tabs_3_long_active_pane_srt_t1

0x72df,	// (0x00038d97) bg_active_tab_pane_g1_cp5_srt

0x7152,	// (0x00038c0a) bg_active_tab_pane_g2_cp5_srt

0x72e8,	// (0x00038da0) bg_active_tab_pane_g3_cp5_srt

0xad3c,	// (0x0003c7f4) navi_text_pane_srt_t1

0xad34,	// (0x0003c7ec) navi_icon_pane_srt_g1

0x2daa,	// (0x00034862) midp_editing_number_pane_srt

0x2cce,	// (0x00034786) midp_ticker_pane_srt

0x2db2,	// (0x0003486a) midp_ticker_pane_srt_g1

0x2dba,	// (0x00034872) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x000411f6) midp_ticker_pane_srt_g

0x2dc2,	// (0x0003487a) midp_ticker_pane_srt_t1

0xad25,	// (0x0003c7dd) midp_editing_number_pane_t1_copy1

0x737f,	// (0x00038e37) listscroll_midp_pane

0x737f,	// (0x00038e37) midp_form_pane

0x73f1,	// (0x00038ea9) midp_info_popup_window_ParamLimits

0x73f1,	// (0x00038ea9) midp_info_popup_window

0x24ef,	// (0x00033fa7) bg_popup_sub_pane_cp50_ParamLimits

0x24ef,	// (0x00033fa7) bg_popup_sub_pane_cp50

0x9e65,	// (0x0003b91d) listscroll_midp_info_pane_ParamLimits

0x9e65,	// (0x0003b91d) listscroll_midp_info_pane

0x9e45,	// (0x0003b8fd) listscroll_form_midp_pane_ParamLimits

0x9e45,	// (0x0003b8fd) listscroll_form_midp_pane

0x9e51,	// (0x0003b909) scroll_bar_cp050

0x9e25,	// (0x0003b8dd) list_midp_pane

0xbad9,	// (0x0003d591) signal_pane_g2_cp

0x9d5f,	// (0x0003b817) listscroll_midp_info_pane_t1_ParamLimits

0x9d5f,	// (0x0003b817) listscroll_midp_info_pane_t1

0x9d77,	// (0x0003b82f) listscroll_midp_info_pane_t2_ParamLimits

0x9d77,	// (0x0003b82f) listscroll_midp_info_pane_t2

0x9db5,	// (0x0003b86d) listscroll_midp_info_pane_t3_ParamLimits

0x9db5,	// (0x0003b86d) listscroll_midp_info_pane_t3

0x9def,	// (0x0003b8a7) listscroll_midp_info_pane_t4_ParamLimits

0x9def,	// (0x0003b8a7) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x000412a9) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x000412a9) listscroll_midp_info_pane_t

0x2544,	// (0x00033ffc) scroll_pane_cp21

0x9cff,	// (0x0003b7b7) form_midp_field_choice_group_pane

0x9d08,	// (0x0003b7c0) form_midp_field_text_pane

0x9d45,	// (0x0003b7fd) form_midp_field_time_pane

0x9d4d,	// (0x0003b805) form_midp_gauge_slider_pane

0x9d56,	// (0x0003b80e) form_midp_gauge_wait_pane

0x2000,	// (0x00033ab8) form_midp_image_pane

0x814c,	// (0x00039c04) list_single_midp_pane_ParamLimits

0x814c,	// (0x00039c04) list_single_midp_pane

0x9cb4,	// (0x0003b76c) form_midp_field_text_pane_t1

0x9a7e,	// (0x0003b536) input_focus_pane_cp050

0x9cee,	// (0x0003b7a6) list_midp_form_text_pane

0x9c83,	// (0x0003b73b) form_midp_field_choice_group_pane_t1

0x9c91,	// (0x0003b749) input_focus_pane_cp051

0x9ca5,	// (0x0003b75d) list_midp_choice_pane

0x2000,	// (0x00033ab8) status_idle_pane

0x9c67,	// (0x0003b71f) form_midp_field_time_pane_t1

0x1ff6,	// (0x00033aae) wait_anim_pane_g2_copy1

0x9c75,	// (0x0003b72d) form_midp_field_time_pane_t2

0x0001,

0x2d2e,	// (0x000347e6) aid_navinavi_width_2_pane

0xf7ec,	// (0x000412a4) form_midp_field_time_pane_t

0x2000,	// (0x00033ab8) input_focus_pane_cp052

0x2000,	// (0x00033ab8) bg_input_focus_pane_cp040

0x9c27,	// (0x0003b6df) form_midp_gauge_slider_pane_t1

0x9c35,	// (0x0003b6ed) form_midp_gauge_slider_pane_t2

0x9c43,	// (0x0003b6fb) form_midp_gauge_slider_pane_t3

0x9c51,	// (0x0003b709) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x0004129b) form_midp_gauge_slider_pane_t

0x9c5f,	// (0x0003b717) form_midp_slider_pane

0x205c,	// (0x00033b14) bg_input_focus_pane_cp041_ParamLimits

0x205c,	// (0x00033b14) bg_input_focus_pane_cp041

0x9bf4,	// (0x0003b6ac) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bf4,	// (0x0003b6ac) form_midp_gauge_wait_pane_t1

0x9c06,	// (0x0003b6be) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c06,	// (0x0003b6be) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x00041296) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x00041296) form_midp_gauge_wait_pane_t

0x9c18,	// (0x0003b6d0) form_midp_wait_pane_ParamLimits

0x9c18,	// (0x0003b6d0) form_midp_wait_pane

0x9bbe,	// (0x0003b676) form_midp_image_pane_g1

0x9bc7,	// (0x0003b67f) form_midp_image_pane_t1

0x9bd6,	// (0x0003b68e) form_midp_image_pane_t2

0x9be5,	// (0x0003b69d) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x0004128f) form_midp_image_pane_t

0x9bb5,	// (0x0003b66d) list_single_midp_pane_g1

0x48c0,	// (0x00036378) list_single_midp_pane_t1

0x9b8c,	// (0x0003b644) list_midp_form_item_pane_ParamLimits

0x9b8c,	// (0x0003b644) list_midp_form_item_pane

0x2cd6,	// (0x0003478e) list_midp_form_item_pane_t1

0x2ce5,	// (0x0003479d) midp_ticker_pane_g1

0x2cf1,	// (0x000347a9) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x000411dc) midp_ticker_pane_g

0x2cfd,	// (0x000347b5) midp_ticker_pane_t1

0xaf72,	// (0x0003ca2a) midp_editing_number_pane_t1

0xaf50,	// (0x0003ca08) midp_editing_number_pane

0xaf5f,	// (0x0003ca17) midp_ticker_pane

0xad15,	// (0x0003c7cd) ai_message_heading_pane

0x2000,	// (0x00033ab8) bg_popup_window_pane_cp14

0xad1d,	// (0x0003c7d5) listscroll_ai_message_pane

0xac9f,	// (0x0003c757) ai_message_heading_pane_g1_ParamLimits

0xac9f,	// (0x0003c757) ai_message_heading_pane_g1

0xacab,	// (0x0003c763) ai_message_heading_pane_g2_ParamLimits

0xacab,	// (0x0003c763) ai_message_heading_pane_g2

0xacb7,	// (0x0003c76f) ai_message_heading_pane_g3_ParamLimits

0xacb7,	// (0x0003c76f) ai_message_heading_pane_g3

0xacc3,	// (0x0003c77b) ai_message_heading_pane_g4_ParamLimits

0xacc3,	// (0x0003c77b) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x000413d0) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x000413d0) ai_message_heading_pane_g

0xaccf,	// (0x0003c787) ai_message_heading_pane_t1_ParamLimits

0xaccf,	// (0x0003c787) ai_message_heading_pane_t1

0xace9,	// (0x0003c7a1) ai_message_heading_pane_t2_ParamLimits

0xace9,	// (0x0003c7a1) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x000413d9) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x000413d9) ai_message_heading_pane_t

0xacfb,	// (0x0003c7b3) bg_popup_heading_pane_cp1_ParamLimits

0xacfb,	// (0x0003c7b3) bg_popup_heading_pane_cp1

0xac8d,	// (0x0003c745) list_ai_message_pane_ParamLimits

0xac8d,	// (0x0003c745) list_ai_message_pane

0x2544,	// (0x00033ffc) scroll_pane_cp10

0xac29,	// (0x0003c6e1) list_ai_message_pane_g1

0xac31,	// (0x0003c6e9) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x000413ad) list_ai_message_pane_g

0xac39,	// (0x0003c6f1) list_ai_message_pane_t1_ParamLimits

0xac39,	// (0x0003c6f1) list_ai_message_pane_t1

0xac4e,	// (0x0003c706) list_ai_message_pane_t2_ParamLimits

0xac4e,	// (0x0003c706) list_ai_message_pane_t2

0xac63,	// (0x0003c71b) list_ai_message_pane_t3_ParamLimits

0xac63,	// (0x0003c71b) list_ai_message_pane_t3

0xac78,	// (0x0003c730) list_ai_message_pane_t4_ParamLimits

0xac78,	// (0x0003c730) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x000413b2) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x000413b2) list_ai_message_pane_t

0xac14,	// (0x0003c6cc) cell_ai_soft_ind_pane_ParamLimits

0xac14,	// (0x0003c6cc) cell_ai_soft_ind_pane

0x2d0f,	// (0x000347c7) cell_ai_soft_ind_pane_g1_ParamLimits

0x2d0f,	// (0x000347c7) cell_ai_soft_ind_pane_g1

0x2000,	// (0x00033ab8) grid_highlight_cp1

0x2d1c,	// (0x000347d4) text_secondary_cp56_ParamLimits

0x2d1c,	// (0x000347d4) text_secondary_cp56

0xabe9,	// (0x0003c6a1) example_general_pane_ParamLimits

0xabe9,	// (0x0003c6a1) example_general_pane

0xabf5,	// (0x0003c6ad) example_parent_pane_g1_ParamLimits

0xabf5,	// (0x0003c6ad) example_parent_pane_g1

0xac01,	// (0x0003c6b9) example_parent_pane_t1_ParamLimits

0xac01,	// (0x0003c6b9) example_parent_pane_t1

0x7abf,	// (0x00039577) popup_preview_text_window_ParamLimits

0x7abf,	// (0x00039577) popup_preview_text_window

0x2c25,	// (0x000346dd) list_single_pane_cp2_g4

0x222e,	// (0x00033ce6) bg_popup_preview_window_pane_ParamLimits

0x222e,	// (0x00033ce6) bg_popup_preview_window_pane

0xa943,	// (0x0003c3fb) popup_preview_text_window_t1_ParamLimits

0xa943,	// (0x0003c3fb) popup_preview_text_window_t1

0xa961,	// (0x0003c419) popup_preview_text_window_t2_ParamLimits

0xa961,	// (0x0003c419) popup_preview_text_window_t2

0xa9aa,	// (0x0003c462) popup_preview_text_window_t3_ParamLimits

0xa9aa,	// (0x0003c462) popup_preview_text_window_t3

0xa9ef,	// (0x0003c4a7) popup_preview_text_window_t4_ParamLimits

0xa9ef,	// (0x0003c4a7) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x00041381) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x00041381) popup_preview_text_window_t

0xaa6d,	// (0x0003c525) scroll_pane_cp11

0x99f2,	// (0x0003b4aa) bg_popup_preview_window_pane_g1

0xa903,	// (0x0003c3bb) bg_popup_preview_window_pane_g2

0xa90b,	// (0x0003c3c3) bg_popup_preview_window_pane_g3

0xa913,	// (0x0003c3cb) bg_popup_preview_window_pane_g4

0xa91b,	// (0x0003c3d3) bg_popup_preview_window_pane_g5

0xa923,	// (0x0003c3db) bg_popup_preview_window_pane_g6

0xa92b,	// (0x0003c3e3) bg_popup_preview_window_pane_g7

0xa933,	// (0x0003c3eb) bg_popup_preview_window_pane_g8

0x5d29,	// (0x000377e1) aid_popup_width_pane

0x7a9d,	// (0x00039555) popup_midp_note_alarm_window_ParamLimits

0x7a9d,	// (0x00039555) popup_midp_note_alarm_window

0x2406,	// (0x00033ebe) data_form_pane_ParamLimits

0x69e6,	// (0x0003849e) form_field_data_pane_g1

0x69f0,	// (0x000384a8) form_field_data_pane_t1_ParamLimits

0x2412,	// (0x00033eca) input_focus_pane_ParamLimits

0x6a08,	// (0x000384c0) data_form_wide_pane_ParamLimits

0x6a19,	// (0x000384d1) form_field_data_wide_pane_g1

0x6a25,	// (0x000384dd) form_field_data_wide_pane_t1_ParamLimits

0x2306,	// (0x00033dbe) input_focus_pane_cp6_ParamLimits

0x6bd1,	// (0x00038689) input_popup_find_pane_g1_ParamLimits

0x6bd1,	// (0x00038689) input_popup_find_pane_g1

0x6d71,	// (0x00038829) aid_navi_side_left_pane

0x6d86,	// (0x0003883e) aid_navi_side_right_pane

0xa32c,	// (0x0003bde4) bg_popup_window_pane_cp30_ParamLimits

0xa32c,	// (0x0003bde4) bg_popup_window_pane_cp30

0xa3a6,	// (0x0003be5e) popup_midp_note_alarm_window_g1_ParamLimits

0xa3a6,	// (0x0003be5e) popup_midp_note_alarm_window_g1

0xa3d6,	// (0x0003be8e) popup_midp_note_alarm_window_t1_ParamLimits

0xa3d6,	// (0x0003be8e) popup_midp_note_alarm_window_t1

0xa477,	// (0x0003bf2f) popup_midp_note_alarm_window_t2_ParamLimits

0xa477,	// (0x0003bf2f) popup_midp_note_alarm_window_t2

0xa525,	// (0x0003bfdd) popup_midp_note_alarm_window_t3_ParamLimits

0xa525,	// (0x0003bfdd) popup_midp_note_alarm_window_t3

0xa54d,	// (0x0003c005) popup_midp_note_alarm_window_t4_ParamLimits

0xa54d,	// (0x0003c005) popup_midp_note_alarm_window_t4

0xa56d,	// (0x0003c025) popup_midp_note_alarm_window_t5_ParamLimits

0xa56d,	// (0x0003c025) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x0004131e) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x0004131e) popup_midp_note_alarm_window_t

0xa619,	// (0x0003c0d1) wait_bar_pane_cp1_ParamLimits

0xa619,	// (0x0003c0d1) wait_bar_pane_cp1

0x2000,	// (0x00033ab8) wait_anim_pane_copy1

0x2000,	// (0x00033ab8) wait_border_pane_copy1

0xa022,	// (0x0003bada) wait_border_pane_g1_copy1

0x6a3f,	// (0x000384f7) form_field_popup_pane_g1

0x6a47,	// (0x000384ff) form_field_popup_pane_t1_ParamLimits

0x2412,	// (0x00033eca) input_focus_pane_cp7_ParamLimits

0x2440,	// (0x00033ef8) list_form_pane_ParamLimits

0x6a5f,	// (0x00038517) form_field_popup_wide_pane_g1

0x6a67,	// (0x0003851f) form_field_popup_wide_pane_t1_ParamLimits

0x2412,	// (0x00033eca) input_focus_pane_cp8_ParamLimits

0x244c,	// (0x00033f04) list_form_wide_pane_ParamLimits

0xb10b,	// (0x0003cbc3) aid_size_cell_graphic_pane

0x6af1,	// (0x000385a9) data_form_pane_t1_ParamLimits

0x83c3,	// (0x00039e7b) data_form_wide_pane_t1_ParamLimits

0x7da4,	// (0x0003985c) bg_status_flat_pane

0x6132,	// (0x00037bea) title_pane_t1_ParamLimits

0x2016,	// (0x00033ace) title_pane_t2_ParamLimits

0x203c,	// (0x00033af4) title_pane_t3_ParamLimits

0xf532,	// (0x00040fea) title_pane_t_ParamLimits

0x27f9,	// (0x000342b1) level_1_signal_ParamLimits

0x2806,	// (0x000342be) level_2_signal_ParamLimits

0x2813,	// (0x000342cb) level_3_signal_ParamLimits

0x2820,	// (0x000342d8) level_4_signal_ParamLimits

0x282d,	// (0x000342e5) level_5_signal_ParamLimits

0x283a,	// (0x000342f2) level_6_signal_ParamLimits

0x2847,	// (0x000342ff) level_7_signal_ParamLimits

0x27f9,	// (0x000342b1) level_1_battery_ParamLimits

0x2806,	// (0x000342be) level_2_battery_ParamLimits

0x2813,	// (0x000342cb) level_3_battery_ParamLimits

0x2820,	// (0x000342d8) level_4_battery_ParamLimits

0x282d,	// (0x000342e5) level_5_battery_ParamLimits

0x283a,	// (0x000342f2) level_6_battery_ParamLimits

0x2847,	// (0x000342ff) level_7_battery_ParamLimits

0xa231,	// (0x0003bce9) bg_status_flat_pane_g1

0xa239,	// (0x0003bcf1) bg_status_flat_pane_g2

0xa241,	// (0x0003bcf9) bg_status_flat_pane_g3

0xa249,	// (0x0003bd01) bg_status_flat_pane_g4

0xa251,	// (0x0003bd09) bg_status_flat_pane_g5

0xa259,	// (0x0003bd11) bg_status_flat_pane_g6

0xa261,	// (0x0003bd19) bg_status_flat_pane_g7

0x61a2,	// (0x00037c5a) tabs_3_active_pane_t1_ParamLimits

0x61a2,	// (0x00037c5a) tabs_3_passive_pane_t1_ParamLimits

0x61bc,	// (0x00037c74) tabs_4_active_pane_t1_ParamLimits

0x61bc,	// (0x00037c74) tabs_4_1_passive_pane_t1_ParamLimits

0x6c08,	// (0x000386c0) tabs_2_active_pane_t1_ParamLimits

0x6c08,	// (0x000386c0) tabs_2_passive_pane_t1_ParamLimits

0x6c1a,	// (0x000386d2) bg_active_tab_pane_cp4_ParamLimits

0x6c28,	// (0x000386e0) tabs_2_long_active_pane_t1_ParamLimits

0x6c3b,	// (0x000386f3) bg_passive_tab_pane_cp4_ParamLimits

0x8099,	// (0x00039b51) list_single_midp_graphic_pane_t1_ParamLimits

0x6c1a,	// (0x000386d2) bg_active_tab_pane_cp5_ParamLimits

0x6c47,	// (0x000386ff) tabs_3_long_active_pane_t1_ParamLimits

0x6c3b,	// (0x000386f3) bg_passive_tab_pane_cp5_ParamLimits

0x8099,	// (0x00039b51) list_single_midp_graphic_pane_t1

0x7da4,	// (0x0003985c) bg_status_flat_pane_ParamLimits

0x7e6d,	// (0x00039925) indicator_pane_cp2_ParamLimits

0x7e6d,	// (0x00039925) indicator_pane_cp2

0x7f98,	// (0x00039a50) navi_pane_srt_ParamLimits

0x7f98,	// (0x00039a50) navi_pane_srt

0x7fbc,	// (0x00039a74) popup_clock_digital_analogue_window_cp1

0x20a0,	// (0x00033b58) indicator_pane_t1

0x2cce,	// (0x00034786) copy_highlight_pane

0x2cce,	// (0x00034786) cursor_graphics_pane

0x2cce,	// (0x00034786) graphic_within_text_pane

0x2cce,	// (0x00034786) link_highlight_pane

0xaa30,	// (0x0003c4e8) popup_preview_text_window_t5_ParamLimits

0xaa30,	// (0x0003c4e8) popup_preview_text_window_t5

0x2d36,	// (0x000347ee) cursor_digital_pane

0x2d36,	// (0x000347ee) cursor_primary_pane

0x2d47,	// (0x000347ff) cursor_primary_small_pane

0x2d4f,	// (0x00034807) cursor_secondary_pane

0x2d57,	// (0x0003480f) cursor_title_pane

0x2d36,	// (0x000347ee) link_highlight_digital_pane

0x2d3e,	// (0x000347f6) link_highlight_primary_pane

0x2d47,	// (0x000347ff) link_highlight_primary_small_pane

0x2d4f,	// (0x00034807) link_highlight_secondary_pane

0x2d57,	// (0x0003480f) link_highlight_title_pane

0x2d36,	// (0x000347ee) copy_highlight_digital_pane

0x2d36,	// (0x000347ee) copy_highlight_primary_pane

0x2d47,	// (0x000347ff) copy_highlight_primary_small_pane

0x2d4f,	// (0x00034807) copy_highlight_secondary_pane

0x2d57,	// (0x0003480f) copy_highlight_title_pane

0x2d4f,	// (0x00034807) graphic_text_digital_pane

0xa2cf,	// (0x0003bd87) graphic_text_primary_pane

0xa2d8,	// (0x0003bd90) graphic_text_primary_small_pane

0x2d47,	// (0x000347ff) graphic_text_secondary_pane

0x2d36,	// (0x000347ee) graphic_text_title_pane

0x7449,	// (0x00038f01) cursor_primary_pane_g1

0xa2c1,	// (0x0003bd79) cursor_text_primary_t1

0xa2a9,	// (0x0003bd61) cursor_primary_small_pane_g1

0xa2b3,	// (0x0003bd6b) cursor_text_primary_small_t1

0xa291,	// (0x0003bd49) cursor_primary_small_pane_g1_copy1

0xa29b,	// (0x0003bd53) cursor_text_primary_small_t1_copy1

0xa279,	// (0x0003bd31) cursor_text_title_t1

0xa287,	// (0x0003bd3f) cursor_title_pane_g1

0x7449,	// (0x00038f01) cursor_digital_pane_g1

0x2d5f,	// (0x00034817) cursor_text_digital_t1

0x2d6d,	// (0x00034825) link_highlight_primary_pane_g1

0xa222,	// (0x0003bcda) link_highlight_primary_pane_t1

0x2d6d,	// (0x00034825) link_highlight_primary_small_pane_g1

0x2d75,	// (0x0003482d) link_highlight_primary_small_pane_t1

0x2d6d,	// (0x00034825) link_highlight_secondary_pane_g1

0x2d84,	// (0x0003483c) link_highlight_secondary_pane_t1

0xa187,	// (0x0003bc3f) link_highlight_title_pane_g1

0xa19e,	// (0x0003bc56) link_highlight_title_pane_t1

0xa187,	// (0x0003bc3f) link_highlight_digital_pane_g1

0xa18f,	// (0x0003bc47) link_highlight_digital_pane_t1

0xa041,	// (0x0003baf9) copy_highlight_primary_pane_g1

0xa067,	// (0x0003bb1f) copy_highlight_primary_pane_t1

0xa041,	// (0x0003baf9) copy_highlight_primary_small_pane_g1

0xa058,	// (0x0003bb10) copy_highlight_primary_small_pane_t1

0x2d93,	// (0x0003484b) copy_highlight_secondary_pane_g1

0x2d9b,	// (0x00034853) copy_highlight_secondary_pane_t1

0xa041,	// (0x0003baf9) copy_highlight_title_pane_g1

0xa049,	// (0x0003bb01) copy_highlight_title_pane_t1

0xa041,	// (0x0003baf9) copy_highlight_digital_pane_g1

0xb2d9,	// (0x0003cd91) copy_highlight_digital_pane_t1

0xb22d,	// (0x0003cce5) graphic_text_primary_pane_g1

0xb2bd,	// (0x0003cd75) graphic_text_primary_pane_t1

0xb2cb,	// (0x0003cd83) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x0004144d) graphic_text_primary_pane_t

0xb299,	// (0x0003cd51) graphic_text_primary_small_pane_g1

0xb2a1,	// (0x0003cd59) graphic_text_primary_small_pane_t1

0xb2af,	// (0x0003cd67) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x00041448) graphic_text_primary_small_pane_t

0xb275,	// (0x0003cd2d) graphic_text_secondary_pane_g1

0xb27d,	// (0x0003cd35) graphic_text_secondary_pane_t1

0xb28b,	// (0x0003cd43) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x00041443) graphic_text_secondary_pane_t

0xb251,	// (0x0003cd09) graphic_text_title_pane_g1

0xb259,	// (0x0003cd11) graphic_text_title_pane_t1

0xb267,	// (0x0003cd1f) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x0004143e) graphic_text_title_pane_t

0xb22d,	// (0x0003cce5) graphic_text_digital_pane_g1

0xb235,	// (0x0003cced) graphic_text_digital_pane_t1

0xb243,	// (0x0003ccfb) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x00041439) graphic_text_digital_pane_t

0x205c,	// (0x00033b14) navi_icon_pane_srt_ParamLimits

0x205c,	// (0x00033b14) navi_icon_pane_srt

0x2000,	// (0x00033ab8) navi_midp_pane_srt

0x2000,	// (0x00033ab8) navi_navi_pane_srt

0x205c,	// (0x00033b14) navi_text_pane_srt_ParamLimits

0x205c,	// (0x00033b14) navi_text_pane_srt

0xb1f8,	// (0x0003ccb0) navi_navi_icon_text_pane_srt

0xb200,	// (0x0003ccb8) navi_navi_pane_srt_g1_ParamLimits

0xb200,	// (0x0003ccb8) navi_navi_pane_srt_g1

0xb212,	// (0x0003ccca) navi_navi_pane_srt_g2_ParamLimits

0xb212,	// (0x0003ccca) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x00041434) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x00041434) navi_navi_pane_srt_g

0xb224,	// (0x0003ccdc) navi_navi_tabs_pane_srt

0xb1f8,	// (0x0003ccb0) navi_navi_text_pane_srt

0xb1f8,	// (0x0003ccb0) navi_navi_volume_pane_srt

0xb1e9,	// (0x0003cca1) navi_navi_text_pane_srt_t1

0x8527,	// (0x00039fdf) navi_navi_volume_pane_srt_g1

0x852f,	// (0x00039fe7) volume_small_pane_srt_ParamLimits

0x852f,	// (0x00039fe7) volume_small_pane_srt

0x7453,	// (0x00038f0b) volume_small_pane_srt_g1_ParamLimits

0x7453,	// (0x00038f0b) volume_small_pane_srt_g1

0x7463,	// (0x00038f1b) volume_small_pane_srt_g2_ParamLimits

0x7463,	// (0x00038f1b) volume_small_pane_srt_g2

0x7474,	// (0x00038f2c) volume_small_pane_srt_g3_ParamLimits

0x7474,	// (0x00038f2c) volume_small_pane_srt_g3

0x7485,	// (0x00038f3d) volume_small_pane_srt_g4_ParamLimits

0x7485,	// (0x00038f3d) volume_small_pane_srt_g4

0x7496,	// (0x00038f4e) volume_small_pane_srt_g5_ParamLimits

0x7496,	// (0x00038f4e) volume_small_pane_srt_g5

0x74a7,	// (0x00038f5f) volume_small_pane_srt_g6_ParamLimits

0x74a7,	// (0x00038f5f) volume_small_pane_srt_g6

0x74b8,	// (0x00038f70) volume_small_pane_srt_g7_ParamLimits

0x74b8,	// (0x00038f70) volume_small_pane_srt_g7

0x74c9,	// (0x00038f81) volume_small_pane_srt_g8_ParamLimits

0x74c9,	// (0x00038f81) volume_small_pane_srt_g8

0x74da,	// (0x00038f92) volume_small_pane_srt_g9_ParamLimits

0x74da,	// (0x00038f92) volume_small_pane_srt_g9

0x74eb,	// (0x00038fa3) volume_small_pane_srt_g10_ParamLimits

0x74eb,	// (0x00038fa3) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x000411e1) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x000411e1) volume_small_pane_srt_g

0x6409,	// (0x00037ec1) query_popup_data_pane_cp2

0xb1cf,	// (0x0003cc87) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1cf,	// (0x0003cc87) navi_navi_icon_text_pane_srt_t1

0xa2cf,	// (0x0003bd87) navi_tabs_2_long_pane_srt

0xa2cf,	// (0x0003bd87) navi_tabs_2_pane_srt

0xa2cf,	// (0x0003bd87) navi_tabs_3_long_pane_srt

0xa2cf,	// (0x0003bd87) navi_tabs_3_pane_srt

0xa2cf,	// (0x0003bd87) navi_tabs_4_pane_srt

0x8507,	// (0x00039fbf) tabs_2_active_pane_srt_ParamLimits

0x8507,	// (0x00039fbf) tabs_2_active_pane_srt

0x8517,	// (0x00039fcf) tabs_2_passive_pane_srt_ParamLimits

0x8517,	// (0x00039fcf) tabs_2_passive_pane_srt

0x2554,	// (0x0003400c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2554,	// (0x0003400c) bg_passive_tab_pane_cp1_srt

0xb19b,	// (0x0003cc53) bg_passive_tab_pane_g1_cp1_srt

0x7152,	// (0x00038c0a) bg_passive_tab_pane_g2_cp1_srt

0xb1a4,	// (0x0003cc5c) bg_passive_tab_pane_g3_cp1_srt

0x205c,	// (0x00033b14) bg_active_tab_pane_cp1_srt_ParamLimits

0x205c,	// (0x00033b14) bg_active_tab_pane_cp1_srt

0xb1ad,	// (0x0003cc65) tabs_2_active_pane_srt_g1

0xb1b5,	// (0x0003cc6d) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b5,	// (0x0003cc6d) tabs_2_active_pane_srt_t1

0xb19b,	// (0x0003cc53) bg_active_tab_pane_g1_cp1_srt

0x7152,	// (0x00038c0a) bg_active_tab_pane_g2_cp1_srt

0xb1a4,	// (0x0003cc5c) bg_active_tab_pane_g3_cp1_srt

0x84d4,	// (0x00039f8c) tabs_3_active_pane_srt_ParamLimits

0x84d4,	// (0x00039f8c) tabs_3_active_pane_srt

0x84e5,	// (0x00039f9d) tabs_3_passive_pane_cp_srt_ParamLimits

0x84e5,	// (0x00039f9d) tabs_3_passive_pane_cp_srt

0x84f6,	// (0x00039fae) tabs_3_passive_pane_srt_ParamLimits

0x84f6,	// (0x00039fae) tabs_3_passive_pane_srt

0x2554,	// (0x0003400c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2554,	// (0x0003400c) bg_passive_tab_pane_cp2_srt

0x74fc,	// (0x00038fb4) bg_passive_tab_pane_g1_cp2_srt

0x7152,	// (0x00038c0a) bg_passive_tab_pane_g2_cp2_srt

0x7505,	// (0x00038fbd) bg_passive_tab_pane_g3_cp2_srt

0x205c,	// (0x00033b14) bg_active_tab_pane_cp2_srt_ParamLimits

0x205c,	// (0x00033b14) bg_active_tab_pane_cp2_srt

0xb181,	// (0x0003cc39) tabs_3_active_pane_srt_g1

0xb189,	// (0x0003cc41) tabs_3_active_pane_srt_t1_ParamLimits

0xb189,	// (0x0003cc41) tabs_3_active_pane_srt_t1

0x74fc,	// (0x00038fb4) bg_active_tab_pane_g1_cp2_srt

0x7152,	// (0x00038c0a) bg_active_tab_pane_g2_cp2_srt

0x7505,	// (0x00038fbd) bg_active_tab_pane_g3_cp2_srt

0x848c,	// (0x00039f44) tabs_4_active_pane_srt_ParamLimits

0x848c,	// (0x00039f44) tabs_4_active_pane_srt

0x849e,	// (0x00039f56) tabs_4_passive_pane_cp2_srt_ParamLimits

0x849e,	// (0x00039f56) tabs_4_passive_pane_cp2_srt

0x771e,	// (0x000391d6) aid_size_cell_toolbar

0x6c3b,	// (0x000386f3) main_idle_act_pane_ParamLimits

0x78cf,	// (0x00039387) popup_large_graphic_colour_window_ParamLimits

0x7c3a,	// (0x000396f2) popup_toolbar_window_ParamLimits

0x7c3a,	// (0x000396f2) popup_toolbar_window

0xaf81,	// (0x0003ca39) list_single_graphic_2heading_pane_ParamLimits

0xaf81,	// (0x0003ca39) list_single_graphic_2heading_pane

0x26e1,	// (0x00034199) aid_size_cell_apps_grid_lsc_pane

0x26f3,	// (0x000341ab) aid_size_cell_apps_grid_prt_pane

0x2554,	// (0x0003400c) bg_wml_button_pane_cp1_ParamLimits

0x2554,	// (0x0003400c) bg_wml_button_pane_cp1

0x9cb4,	// (0x0003b76c) form_midp_field_text_pane_t1_ParamLimits

0x9a7e,	// (0x0003b536) input_focus_pane_cp050_ParamLimits

0x9cee,	// (0x0003b7a6) list_midp_form_text_pane_ParamLimits

0x9c91,	// (0x0003b749) input_focus_pane_cp051_ParamLimits

0x9ca5,	// (0x0003b75d) list_midp_choice_pane_ParamLimits

0x9b34,	// (0x0003b5ec) list_single_2graphic_pane_cp3_ParamLimits

0x9b34,	// (0x0003b5ec) list_single_2graphic_pane_cp3

0x9b59,	// (0x0003b611) list_single_midp_graphic_pane_ParamLimits

0x9b59,	// (0x0003b611) list_single_midp_graphic_pane

0x5c97,	// (0x0003774f) list_single_graphic_2heading_pane_g1_ParamLimits

0x5c97,	// (0x0003774f) list_single_graphic_2heading_pane_g1

0x5ca3,	// (0x0003775b) list_single_graphic_2heading_pane_g4_ParamLimits

0x5ca3,	// (0x0003775b) list_single_graphic_2heading_pane_g4

0x5caf,	// (0x00037767) list_single_graphic_2heading_pane_g5_ParamLimits

0x5caf,	// (0x00037767) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x00041234) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x00041234) list_single_graphic_2heading_pane_g

0x5cbb,	// (0x00037773) list_single_graphic_2heading_pane_t1_ParamLimits

0x5cbb,	// (0x00037773) list_single_graphic_2heading_pane_t1

0x5ccf,	// (0x00037787) list_single_graphic_2heading_pane_t2_ParamLimits

0x5ccf,	// (0x00037787) list_single_graphic_2heading_pane_t2

0x5ce9,	// (0x000377a1) list_single_graphic_2heading_pane_t3_ParamLimits

0x5ce9,	// (0x000377a1) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x0004123b) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x0004123b) list_single_graphic_2heading_pane_t

0x9930,	// (0x0003b3e8) bg_popup_sub_pane_cp2

0x995a,	// (0x0003b412) grid_toobar_pane

0x8008,	// (0x00039ac0) cell_toolbar_pane_ParamLimits

0x8008,	// (0x00039ac0) cell_toolbar_pane

0x9996,	// (0x0003b44e) cell_toolbar_pane_g1_ParamLimits

0x9996,	// (0x0003b44e) cell_toolbar_pane_g1

0x99aa,	// (0x0003b462) cell_toolbar_pane_g2_ParamLimits

0x99aa,	// (0x0003b462) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x00041249) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x00041249) cell_toolbar_pane_g

0x99cc,	// (0x0003b484) grid_highlight_pane_cp2_ParamLimits

0x99cc,	// (0x0003b484) grid_highlight_pane_cp2

0x99e6,	// (0x0003b49e) toolbar_button_pane

0x99f2,	// (0x0003b4aa) toolbar_button_pane_g1

0x99fa,	// (0x0003b4b2) toolbar_button_pane_g2

0x9a02,	// (0x0003b4ba) toolbar_button_pane_g3

0x9a0a,	// (0x0003b4c2) toolbar_button_pane_g4

0x9a12,	// (0x0003b4ca) toolbar_button_pane_g5

0x9a1a,	// (0x0003b4d2) toolbar_button_pane_g6

0x9a22,	// (0x0003b4da) toolbar_button_pane_g7

0x9a2a,	// (0x0003b4e2) toolbar_button_pane_g8

0x9a32,	// (0x0003b4ea) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x0004124e) toolbar_button_pane_g

0x8040,	// (0x00039af8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8040,	// (0x00039af8) list_single_2graphic_pane_g1_cp3

0x804c,	// (0x00039b04) list_single_2graphic_pane_g2_cp3_ParamLimits

0x804c,	// (0x00039b04) list_single_2graphic_pane_g2_cp3

0x805d,	// (0x00039b15) list_single_2graphic_pane_g3_cp3

0x8065,	// (0x00039b1d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8065,	// (0x00039b1d) list_single_2graphic_pane_g4_cp3

0x8071,	// (0x00039b29) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8071,	// (0x00039b29) list_single_2graphic_pane_t1_cp3

0x808d,	// (0x00039b45) list_single_midp_graphic_pane_g2_ParamLimits

0x808d,	// (0x00039b45) list_single_midp_graphic_pane_g2

0x7726,	// (0x000391de) aid_zoom_text_primary

0x5c7b,	// (0x00037733) aid_zoom_text_secondary

0x2e10,	// (0x000348c8) status_small_pane_g7_ParamLimits

0x2e10,	// (0x000348c8) status_small_pane_g7

0x755f,	// (0x00039017) status_small_pane_t1_ParamLimits

0x6115,	// (0x00037bcd) title_pane_g2

0x0003,

0xf529,	// (0x00040fe1) title_pane_g

0x6463,	// (0x00037f1b) aid_size_cell_colour_1_pane_ParamLimits

0x6463,	// (0x00037f1b) aid_size_cell_colour_1_pane

0x6477,	// (0x00037f2f) aid_size_cell_colour_2_pane_ParamLimits

0x6477,	// (0x00037f2f) aid_size_cell_colour_2_pane

0x648b,	// (0x00037f43) aid_size_cell_colour_3_pane_ParamLimits

0x648b,	// (0x00037f43) aid_size_cell_colour_3_pane

0x649f,	// (0x00037f57) aid_size_cell_colour_4_pane_ParamLimits

0x649f,	// (0x00037f57) aid_size_cell_colour_4_pane

0x6cae,	// (0x00038766) title_pane_stacon_g1_ParamLimits

0x6cae,	// (0x00038766) title_pane_stacon_g1

0xa0be,	// (0x0003bb76) popup_note_wait_window_g3_ParamLimits

0xa0be,	// (0x0003bb76) popup_note_wait_window_g3

0xa134,	// (0x0003bbec) popup_note_wait_window_t5_ParamLimits

0xa134,	// (0x0003bbec) popup_note_wait_window_t5

0x2000,	// (0x00033ab8) main_feb_china_hwr_fs_writing_pane

0x77b6,	// (0x0003926e) popup_feb_china_hwr_fs_window_ParamLimits

0x77b6,	// (0x0003926e) popup_feb_china_hwr_fs_window

0x80af,	// (0x00039b67) aid_size_cell_hwr_fs_ParamLimits

0x80af,	// (0x00039b67) aid_size_cell_hwr_fs

0x9a7e,	// (0x0003b536) bg_popup_sub_pane_cp3_ParamLimits

0x9a7e,	// (0x0003b536) bg_popup_sub_pane_cp3

0x80c4,	// (0x00039b7c) grid_hwr_fs_pane_ParamLimits

0x80c4,	// (0x00039b7c) grid_hwr_fs_pane

0x80dc,	// (0x00039b94) linegrid_hwr_fs_pane_ParamLimits

0x80dc,	// (0x00039b94) linegrid_hwr_fs_pane

0x80ec,	// (0x00039ba4) cell_hwr_fs_pane_ParamLimits

0x80ec,	// (0x00039ba4) cell_hwr_fs_pane

0x9a8a,	// (0x0003b542) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a8a,	// (0x0003b542) linegrid_hwr_fs_pane_g1

0x9a96,	// (0x0003b54e) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a96,	// (0x0003b54e) linegrid_hwr_fs_pane_g2

0x9aa8,	// (0x0003b560) linegrid_hwr_fs_pane_g3_ParamLimits

0x9aa8,	// (0x0003b560) linegrid_hwr_fs_pane_g3

0x810e,	// (0x00039bc6) linegrid_hwr_fs_pane_g4_ParamLimits

0x810e,	// (0x00039bc6) linegrid_hwr_fs_pane_g4

0x8128,	// (0x00039be0) linegrid_hwr_fs_pane_g5_ParamLimits

0x8128,	// (0x00039be0) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x00041274) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x00041274) linegrid_hwr_fs_pane_g

0x9ab4,	// (0x0003b56c) cell_hwr_fs_pane_g1_ParamLimits

0x9ab4,	// (0x0003b56c) cell_hwr_fs_pane_g1

0x986a,	// (0x0003b322) cell_hwr_fs_pane_g2_ParamLimits

0x986a,	// (0x0003b322) cell_hwr_fs_pane_g2

0x9aca,	// (0x0003b582) cell_hwr_fs_pane_g3_ParamLimits

0x9aca,	// (0x0003b582) cell_hwr_fs_pane_g3

0x9ad7,	// (0x0003b58f) cell_hwr_fs_pane_g4_ParamLimits

0x9ad7,	// (0x0003b58f) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x0004127f) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x0004127f) cell_hwr_fs_pane_g

0x813e,	// (0x00039bf6) cell_hwr_fs_pane_t1

0x2000,	// (0x00033ab8) grid_highlight_pane_cp6

0x2000,	// (0x00033ab8) main_idle_act2_pane

0x252b,	// (0x00033fe3) aid_inside_area_popup_secondary

0xa753,	// (0x0003c20b) aid_inside_area_window_primary_ParamLimits

0xa753,	// (0x0003c20b) aid_inside_area_window_primary

0xb2e8,	// (0x0003cda0) ai2_news_ticker_pane

0xb2f0,	// (0x0003cda8) aid_size_cell_ai1_link_ParamLimits

0xb2f0,	// (0x0003cda8) aid_size_cell_ai1_link

0xb30a,	// (0x0003cdc2) popup_ai2_data_window_ParamLimits

0xb30a,	// (0x0003cdc2) popup_ai2_data_window

0xb320,	// (0x0003cdd8) popup_ai2_link_window_ParamLimits

0xb320,	// (0x0003cdd8) popup_ai2_link_window

0x9a7e,	// (0x0003b536) bg_popup_sub_pane_cp4_ParamLimits

0x9a7e,	// (0x0003b536) bg_popup_sub_pane_cp4

0xb334,	// (0x0003cdec) grid_ai2_link_pane_ParamLimits

0xb334,	// (0x0003cdec) grid_ai2_link_pane

0xb34b,	// (0x0003ce03) popup_ai2_link_window_g1_ParamLimits

0xb34b,	// (0x0003ce03) popup_ai2_link_window_g1

0xb357,	// (0x0003ce0f) popup_ai2_link_window_g2_ParamLimits

0xb357,	// (0x0003ce0f) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x00041452) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x00041452) popup_ai2_link_window_g

0xb366,	// (0x0003ce1e) ai2_mp_button_pane

0xb36e,	// (0x0003ce26) ai2_mp_volume_pane

0x9c91,	// (0x0003b749) bg_popup_sub_pane_cp5_ParamLimits

0x9c91,	// (0x0003b749) bg_popup_sub_pane_cp5

0xb376,	// (0x0003ce2e) heading_ai2_gene_pane_ParamLimits

0xb376,	// (0x0003ce2e) heading_ai2_gene_pane

0xb382,	// (0x0003ce3a) list_ai2_gene_pane_ParamLimits

0xb382,	// (0x0003ce3a) list_ai2_gene_pane

0xb3ca,	// (0x0003ce82) cell_ai2_link_pane_ParamLimits

0xb3ca,	// (0x0003ce82) cell_ai2_link_pane

0xb3e0,	// (0x0003ce98) cell_ai2_link_pane_g1

0x2000,	// (0x00033ab8) grid_highlight_pane_cp7

0x8544,	// (0x00039ffc) ai2_mp_volume_pane_g1

0xb4b0,	// (0x0003cf68) ai2_mp_volume_pane_g2

0xb425,	// (0x0003cedd) list_ai2_gene_pane_t1

0xb4b8,	// (0x0003cf70) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x0004146b) ai2_mp_volume_pane_g

0x854c,	// (0x0003a004) volume_small_pane_cp3

0xb4c0,	// (0x0003cf78) aid_size_cell_ai2_button

0xb4c8,	// (0x0003cf80) grid_ai2_button_pane

0xb4d1,	// (0x0003cf89) cell_ai2_button_pane_ParamLimits

0xb4d1,	// (0x0003cf89) cell_ai2_button_pane

0x1ff6,	// (0x00033aae) cell_ai2_button_pane_g1

0x2000,	// (0x00033ab8) grid_highlight_pane_cp8

0xb470,	// (0x0003cf28) ai2_gene_pane_t1_ParamLimits

0xb470,	// (0x0003cf28) ai2_gene_pane_t1

0x7714,	// (0x000391cc) aid_height_parent_landscape

0xadbc,	// (0x0003c874) aid_height_set_list

0xadcd,	// (0x0003c885) aid_size_parent

0xb10b,	// (0x0003cbc3) aid_size_cell_graphic_pane_ParamLimits

0xb392,	// (0x0003ce4a) popup_ai2_data_window_g1_ParamLimits

0xb392,	// (0x0003ce4a) popup_ai2_data_window_g1

0xb39e,	// (0x0003ce56) ai2_news_ticker_pane_g1

0xb3a6,	// (0x0003ce5e) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x00041457) ai2_news_ticker_pane_g

0xb3ae,	// (0x0003ce66) ai2_news_ticker_pane_t1

0xb3bc,	// (0x0003ce74) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x0004145c) ai2_news_ticker_pane_t

0xb3e9,	// (0x0003cea1) heading_ai2_gene_pane_g1

0xb3f1,	// (0x0003cea9) heading_ai2_gene_pane_t1_ParamLimits

0xb3f1,	// (0x0003cea9) heading_ai2_gene_pane_t1

0xb406,	// (0x0003cebe) list_highlight_pane_cp6

0xb40e,	// (0x0003cec6) ai2_gene_pane_ParamLimits

0xb40e,	// (0x0003cec6) ai2_gene_pane

0xb433,	// (0x0003ceeb) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x00041461) list_ai2_gene_pane_t

0xb441,	// (0x0003cef9) list_highlight_pane_cp8_ParamLimits

0xb441,	// (0x0003cef9) list_highlight_pane_cp8

0xb452,	// (0x0003cf0a) ai2_gene_pane_g1_ParamLimits

0xb452,	// (0x0003cf0a) ai2_gene_pane_g1

0xb464,	// (0x0003cf1c) ai2_gene_pane_g2_ParamLimits

0xb464,	// (0x0003cf1c) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x00041466) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x00041466) ai2_gene_pane_g

0x23b1,	// (0x00033e69) scroll_pane_cp12

0x76d1,	// (0x00039189) control_pane_t3_ParamLimits

0x76d1,	// (0x00039189) control_pane_t3

0x7550,	// (0x00039008) status_small_pane_g8_ParamLimits

0x7550,	// (0x00039008) status_small_pane_g8

0x7898,	// (0x00039350) popup_find_window_ParamLimits

0x7ab1,	// (0x00039569) popup_note_image_window_ParamLimits

0x4595,	// (0x0003604d) list_double2_graphic_pane_vc_g1_ParamLimits

0x4595,	// (0x0003604d) list_double2_graphic_pane_vc_g1

0x4816,	// (0x000362ce) list_double2_graphic_pane_vc_g2_ParamLimits

0x4816,	// (0x000362ce) list_double2_graphic_pane_vc_g2

0x4822,	// (0x000362da) list_double2_graphic_pane_vc_g3_ParamLimits

0x4822,	// (0x000362da) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x00041242) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x00041242) list_double2_graphic_pane_vc_g

0x45b9,	// (0x00036071) list_double2_graphic_pane_vc_t1_ParamLimits

0x45b9,	// (0x00036071) list_double2_graphic_pane_vc_t1

0x45a1,	// (0x00036059) list_single_heading_pane_vc_g1_ParamLimits

0x45a1,	// (0x00036059) list_single_heading_pane_vc_g1

0x45ad,	// (0x00036065) list_single_heading_pane_vc_g2_ParamLimits

0x45ad,	// (0x00036065) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0004105b) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0004105b) list_single_heading_pane_vc_g

0x482e,	// (0x000362e6) list_single_heading_pane_vc_t1_ParamLimits

0x482e,	// (0x000362e6) list_single_heading_pane_vc_t1

0x4844,	// (0x000362fc) list_single_heading_pane_vc_t2_ParamLimits

0x4844,	// (0x000362fc) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x00041263) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x00041263) list_single_heading_pane_vc_t

0x9a3a,	// (0x0003b4f2) list_setting_number_pane_vc_g1_ParamLimits

0x9a3a,	// (0x0003b4f2) list_setting_number_pane_vc_g1

0x9a46,	// (0x0003b4fe) list_setting_number_pane_vc_g2_ParamLimits

0x9a46,	// (0x0003b4fe) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x00041268) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x00041268) list_setting_number_pane_vc_g

0x4856,	// (0x0003630e) list_setting_number_pane_vc_t1_ParamLimits

0x4856,	// (0x0003630e) list_setting_number_pane_vc_t1

0x486a,	// (0x00036322) list_setting_number_pane_vc_t2_ParamLimits

0x486a,	// (0x00036322) list_setting_number_pane_vc_t2

0x4886,	// (0x0003633e) list_setting_number_pane_vc_t3_ParamLimits

0x4886,	// (0x0003633e) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x0004126d) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x0004126d) list_setting_number_pane_vc_t

0x48b0,	// (0x00036368) set_value_pane_vc_ParamLimits

0x48b0,	// (0x00036368) set_value_pane_vc

0xaf81,	// (0x0003ca39) list_double2_graphic_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_double2_graphic_pane_vc

0xaf81,	// (0x0003ca39) list_double2_large_graphic_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_double2_large_graphic_pane_vc

0xaf81,	// (0x0003ca39) list_double2_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_double2_pane_vc

0xaf81,	// (0x0003ca39) list_double_graphic_heading_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_double_graphic_heading_pane_vc

0xaf81,	// (0x0003ca39) list_double_graphic_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_double_graphic_pane_vc

0xaf81,	// (0x0003ca39) list_double_heading_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_double_heading_pane_vc

0x48cf,	// (0x00036387) list_double_large_graphic_pane_vc_ParamLimits

0x48cf,	// (0x00036387) list_double_large_graphic_pane_vc

0xaf81,	// (0x0003ca39) list_double_number_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_double_number_pane_vc

0xaf81,	// (0x0003ca39) list_double_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_double_pane_vc

0xaf81,	// (0x0003ca39) list_double_time_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_double_time_pane_vc

0xaf81,	// (0x0003ca39) list_setting_number_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_setting_number_pane_vc

0xaf81,	// (0x0003ca39) list_setting_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_setting_pane_vc

0xaf81,	// (0x0003ca39) list_single_graphic_heading_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_single_graphic_heading_pane_vc

0xaf81,	// (0x0003ca39) list_single_heading_pane_vc_ParamLimits

0xaf81,	// (0x0003ca39) list_single_heading_pane_vc

0x8424,	// (0x00039edc) list_single_number_heading_pane_vc_ParamLimits

0x8424,	// (0x00039edc) list_single_number_heading_pane_vc

0x461b,	// (0x000360d3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x461b,	// (0x000360d3) list_double_graphic_heading_pane_vc_g1

0x4816,	// (0x000362ce) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4816,	// (0x000362ce) list_double_graphic_heading_pane_vc_g2

0x4822,	// (0x000362da) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4822,	// (0x000362da) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x00041472) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x00041472) list_double_graphic_heading_pane_vc_g

0x48ee,	// (0x000363a6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x48ee,	// (0x000363a6) list_double_graphic_heading_pane_vc_t1

0x4902,	// (0x000363ba) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4902,	// (0x000363ba) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x00041479) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x00041479) list_double_graphic_heading_pane_vc_t

0x9a3a,	// (0x0003b4f2) list_setting_pane_vc_g1_ParamLimits

0x9a3a,	// (0x0003b4f2) list_setting_pane_vc_g1

0x9a46,	// (0x0003b4fe) list_setting_pane_vc_g2_ParamLimits

0x9a46,	// (0x0003b4fe) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x00041268) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x00041268) list_setting_pane_vc_g

0x491a,	// (0x000363d2) list_setting_pane_vc_t1_ParamLimits

0x491a,	// (0x000363d2) list_setting_pane_vc_t1

0x4936,	// (0x000363ee) list_setting_pane_vc_t2_ParamLimits

0x4936,	// (0x000363ee) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x000414bc) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x000414bc) list_setting_pane_vc_t

0x48b0,	// (0x00036368) set_value_pane_cp_vc_ParamLimits

0x48b0,	// (0x00036368) set_value_pane_cp_vc

0x45a1,	// (0x00036059) list_single_number_heading_pane_vc_g1_ParamLimits

0x45a1,	// (0x00036059) list_single_number_heading_pane_vc_g1

0x45ad,	// (0x00036065) list_single_number_heading_pane_vc_g2_ParamLimits

0x45ad,	// (0x00036065) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0004105b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0004105b) list_single_number_heading_pane_vc_g

0x45cf,	// (0x00036087) list_single_number_heading_pane_vc_t1_ParamLimits

0x45cf,	// (0x00036087) list_single_number_heading_pane_vc_t1

0x4950,	// (0x00036408) list_single_number_heading_pane_vc_t2_ParamLimits

0x4950,	// (0x00036408) list_single_number_heading_pane_vc_t2

0x4966,	// (0x0003641e) list_single_number_heading_pane_vc_t3_ParamLimits

0x4966,	// (0x0003641e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x000414c1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x000414c1) list_single_number_heading_pane_vc_t

0x4978,	// (0x00036430) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4978,	// (0x00036430) list_single_graphic_heading_pane_vc_g1

0x45a1,	// (0x00036059) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x45a1,	// (0x00036059) list_single_graphic_heading_pane_vc_g4

0x45ad,	// (0x00036065) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x45ad,	// (0x00036065) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x000414c8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x000414c8) list_single_graphic_heading_pane_vc_g

0x45cf,	// (0x00036087) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x45cf,	// (0x00036087) list_single_graphic_heading_pane_vc_t1

0x4984,	// (0x0003643c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4984,	// (0x0003643c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x000414cf) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x000414cf) list_single_graphic_heading_pane_vc_t

0x45a1,	// (0x00036059) list_double2_pane_vc_g1_ParamLimits

0x45a1,	// (0x00036059) list_double2_pane_vc_g1

0x45ad,	// (0x00036065) list_double2_pane_vc_g2_ParamLimits

0x45ad,	// (0x00036065) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0004105b) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0004105b) list_double2_pane_vc_g

0x4996,	// (0x0003644e) list_double2_pane_vc_t1_ParamLimits

0x4996,	// (0x0003644e) list_double2_pane_vc_t1

0x4627,	// (0x000360df) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4627,	// (0x000360df) list_double2_large_graphic_pane_vc_g1

0x45a1,	// (0x00036059) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x45a1,	// (0x00036059) list_double2_large_graphic_pane_vc_g2

0x45ad,	// (0x00036065) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x45ad,	// (0x00036065) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1c,	// (0x000414d4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1c,	// (0x000414d4) list_double2_large_graphic_pane_vc_g

0x45b9,	// (0x00036071) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x45b9,	// (0x00036071) list_double2_large_graphic_pane_vc_t1

0x49ae,	// (0x00036466) list_double_time_pane_vc_g1_ParamLimits

0x49ae,	// (0x00036466) list_double_time_pane_vc_g1

0x49ba,	// (0x00036472) list_double_time_pane_vc_g2_ParamLimits

0x49ba,	// (0x00036472) list_double_time_pane_vc_g2

0x0001,

0xfa23,	// (0x000414db) list_double_time_pane_vc_g_ParamLimits

0xfa23,	// (0x000414db) list_double_time_pane_vc_g

0x49c6,	// (0x0003647e) list_double_time_pane_vc_t1_ParamLimits

0x49c6,	// (0x0003647e) list_double_time_pane_vc_t1

0x49ea,	// (0x000364a2) list_double_time_pane_vc_t2_ParamLimits

0x49ea,	// (0x000364a2) list_double_time_pane_vc_t2

0x4a39,	// (0x000364f1) list_double_time_pane_vc_t3_ParamLimits

0x4a39,	// (0x000364f1) list_double_time_pane_vc_t3

0x4a4b,	// (0x00036503) list_double_time_pane_vc_t4_ParamLimits

0x4a4b,	// (0x00036503) list_double_time_pane_vc_t4

0x0003,

0xfa28,	// (0x000414e0) list_double_time_pane_vc_t_ParamLimits

0xfa28,	// (0x000414e0) list_double_time_pane_vc_t

0x45a1,	// (0x00036059) list_double_pane_vc_g1_ParamLimits

0x45a1,	// (0x00036059) list_double_pane_vc_g1

0x45ad,	// (0x00036065) list_double_pane_vc_g2_ParamLimits

0x45ad,	// (0x00036065) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0004105b) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0004105b) list_double_pane_vc_g

0x4a5f,	// (0x00036517) list_double_pane_vc_t1_ParamLimits

0x4a5f,	// (0x00036517) list_double_pane_vc_t1

0x4a73,	// (0x0003652b) list_double_pane_vc_t2_ParamLimits

0x4a73,	// (0x0003652b) list_double_pane_vc_t2

0x0001,

0xfa31,	// (0x000414e9) list_double_pane_vc_t_ParamLimits

0xfa31,	// (0x000414e9) list_double_pane_vc_t

0x45a1,	// (0x00036059) list_double_number_pane_vc_g1_ParamLimits

0x45a1,	// (0x00036059) list_double_number_pane_vc_g1

0x45ad,	// (0x00036065) list_double_number_pane_vc_g2_ParamLimits

0x45ad,	// (0x00036065) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0004105b) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0004105b) list_double_number_pane_vc_g

0x4a8b,	// (0x00036543) list_double_number_pane_vc_t1_ParamLimits

0x4a8b,	// (0x00036543) list_double_number_pane_vc_t1

0x4a5f,	// (0x00036517) list_double_number_pane_vc_t2_ParamLimits

0x4a5f,	// (0x00036517) list_double_number_pane_vc_t2

0x4a9d,	// (0x00036555) list_double_number_pane_vc_t3_ParamLimits

0x4a9d,	// (0x00036555) list_double_number_pane_vc_t3

0x0002,

0xfa36,	// (0x000414ee) list_double_number_pane_vc_t_ParamLimits

0xfa36,	// (0x000414ee) list_double_number_pane_vc_t

0x4ab5,	// (0x0003656d) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4ab5,	// (0x0003656d) list_double_large_graphic_pane_vc_g1

0x4ad1,	// (0x00036589) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4ad1,	// (0x00036589) list_double_large_graphic_pane_vc_g2

0x4ae5,	// (0x0003659d) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4ae5,	// (0x0003659d) list_double_large_graphic_pane_vc_g3

0x4af4,	// (0x000365ac) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4af4,	// (0x000365ac) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3d,	// (0x000414f5) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x000414f5) list_double_large_graphic_pane_vc_g

0x4b00,	// (0x000365b8) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4b00,	// (0x000365b8) list_double_large_graphic_pane_vc_t1

0x4b1c,	// (0x000365d4) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4b1c,	// (0x000365d4) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x000414fe) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x000414fe) list_double_large_graphic_pane_vc_t

0x4816,	// (0x000362ce) list_double_heading_pane_vc_g1_ParamLimits

0x4816,	// (0x000362ce) list_double_heading_pane_vc_g1

0x4822,	// (0x000362da) list_double_heading_pane_vc_g2_ParamLimits

0x4822,	// (0x000362da) list_double_heading_pane_vc_g2

0x0001,

0xfa4b,	// (0x00041503) list_double_heading_pane_vc_g_ParamLimits

0xfa4b,	// (0x00041503) list_double_heading_pane_vc_g

0x4b3e,	// (0x000365f6) list_double_heading_pane_vc_t1_ParamLimits

0x4b3e,	// (0x000365f6) list_double_heading_pane_vc_t1

0x4b52,	// (0x0003660a) list_double_heading_pane_vc_t2_ParamLimits

0x4b52,	// (0x0003660a) list_double_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x00041508) list_double_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x00041508) list_double_heading_pane_vc_t

0x4b6a,	// (0x00036622) list_double_graphic_pane_vc_g1_ParamLimits

0x4b6a,	// (0x00036622) list_double_graphic_pane_vc_g1

0x4b7d,	// (0x00036635) list_double_graphic_pane_vc_g2_ParamLimits

0x4b7d,	// (0x00036635) list_double_graphic_pane_vc_g2

0x45a1,	// (0x00036059) list_double_graphic_pane_vc_g3_ParamLimits

0x45a1,	// (0x00036059) list_double_graphic_pane_vc_g3

0x0003,

0xfa55,	// (0x0004150d) list_double_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0004150d) list_double_graphic_pane_vc_g

0x4b9a,	// (0x00036652) list_double_graphic_pane_vc_t1_ParamLimits

0x4b9a,	// (0x00036652) list_double_graphic_pane_vc_t1

0x4bb9,	// (0x00036671) list_double_graphic_pane_vc_t2_ParamLimits

0x4bb9,	// (0x00036671) list_double_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x00041516) list_double_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x00041516) list_double_graphic_pane_vc_t

0x5d35,	// (0x000377ed) aid_size_cell_fastswap

0x5d3d,	// (0x000377f5) aid_size_cell_touch_ParamLimits

0x5d3d,	// (0x000377f5) aid_size_cell_touch

0x5fa2,	// (0x00037a5a) popup_fast_swap_wide_window_ParamLimits

0x5fa2,	// (0x00037a5a) popup_fast_swap_wide_window

0x60a8,	// (0x00037b60) touch_pane_ParamLimits

0x60a8,	// (0x00037b60) touch_pane

0x23fe,	// (0x00033eb6) button_value_adjust_pane_cp2

0x475d,	// (0x00036215) button_value_adjust_pane_cp4

0x4765,	// (0x0003621d) form_field_data_pane_cp2

0x698e,	// (0x00038446) form_field_data_wide_pane_cp2

0x2718,	// (0x000341d0) bg_scroll_pane_ParamLimits

0x6ea8,	// (0x00038960) scroll_handle_pane_ParamLimits

0x6ebc,	// (0x00038974) scroll_sc2_down_pane_ParamLimits

0x6ebc,	// (0x00038974) scroll_sc2_down_pane

0x2749,	// (0x00034201) scroll_sc2_up_pane_ParamLimits

0x2749,	// (0x00034201) scroll_sc2_up_pane

0xbbb2,	// (0x0003d66a) grid_wheel_folder_pane_g1_ParamLimits

0xbbb2,	// (0x0003d66a) grid_wheel_folder_pane_g1

0x7277,	// (0x00038d2f) clock_nsta_pane_cp2_ParamLimits

0x7277,	// (0x00038d2f) clock_nsta_pane_cp2

0x737f,	// (0x00038e37) listscroll_midp_pane_ParamLimits

0x738b,	// (0x00038e43) midp_canvas_pane

0x2e32,	// (0x000348ea) nsta_clock_indic_pane

0x2e5a,	// (0x00034912) listscroll_form_pane_vc

0x2e62,	// (0x0003491a) listscroll_set_pane_vc_ParamLimits

0x2e62,	// (0x0003491a) listscroll_set_pane_vc

0x7dc0,	// (0x00039878) clock_nsta_pane

0x7e3b,	// (0x000398f3) indicator_nsta_pane

0x9930,	// (0x0003b3e8) bg_popup_sub_pane_cp2_ParamLimits

0x9944,	// (0x0003b3fc) find_pane_cp2_ParamLimits

0x9944,	// (0x0003b3fc) find_pane_cp2

0x995a,	// (0x0003b412) grid_toobar_pane_ParamLimits

0x9a52,	// (0x0003b50a) list_form_gen_pane_vc_ParamLimits

0x9a52,	// (0x0003b50a) list_form_gen_pane_vc

0x9a68,	// (0x0003b520) scroll_pane_cp8_vc_ParamLimits

0x9a68,	// (0x0003b520) scroll_pane_cp8_vc

0x9ae4,	// (0x0003b59c) data_form_wide_pane_vc_ParamLimits

0x9ae4,	// (0x0003b59c) data_form_wide_pane_vc

0x9af0,	// (0x0003b5a8) form_field_data_wide_pane_vc_g1

0x9af8,	// (0x0003b5b0) form_field_data_wide_pane_vc_t1_ParamLimits

0x9af8,	// (0x0003b5b0) form_field_data_wide_pane_vc_t1

0x2412,	// (0x00033eca) input_focus_pane_cp6_vc_ParamLimits

0x2412,	// (0x00033eca) input_focus_pane_cp6_vc

0x9e25,	// (0x0003b8dd) list_midp_pane_ParamLimits

0x9e31,	// (0x0003b8e9) scroll_pane_cp16_ParamLimits

0x9e31,	// (0x0003b8e9) scroll_pane_cp16

0x9e9b,	// (0x0003b953) button_value_adjust_pane_ParamLimits

0x9e9b,	// (0x0003b953) button_value_adjust_pane

0xaddf,	// (0x0003c897) button_value_adjust_pane_cp6_ParamLimits

0xaddf,	// (0x0003c897) button_value_adjust_pane_cp6

0xaf05,	// (0x0003c9bd) settings_code_pane_cp_ParamLimits

0xaf05,	// (0x0003c9bd) settings_code_pane_cp

0x1ff6,	// (0x00033aae) cell_touch_pane_g1

0x1ff6,	// (0x00033aae) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x00041187) cell_touch_pane_g

0xb4e3,	// (0x0003cf9b) cell_touch_pane_cp_ParamLimits

0xb4e3,	// (0x0003cf9b) cell_touch_pane_cp

0xb4f3,	// (0x0003cfab) cell_touch_pane_ParamLimits

0xb4f3,	// (0x0003cfab) cell_touch_pane

0x1ff6,	// (0x00033aae) scroll_sc2_down_pane_g1

0x1ff6,	// (0x00033aae) scroll_sc2_up_pane_g1

0x2000,	// (0x00033ab8) bg_set_opt_pane_cp4_vc

0xb505,	// (0x0003cfbd) list_set_graphic_pane_vc_g1_ParamLimits

0xb505,	// (0x0003cfbd) list_set_graphic_pane_vc_g1

0xb511,	// (0x0003cfc9) list_set_graphic_pane_vc_g2_ParamLimits

0xb511,	// (0x0003cfc9) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x0004147e) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x0004147e) list_set_graphic_pane_vc_g

0xb51d,	// (0x0003cfd5) text_primary_small_cp13_vc_ParamLimits

0xb51d,	// (0x0003cfd5) text_primary_small_cp13_vc

0xb535,	// (0x0003cfed) list_set_graphic_pane_vc_ParamLimits

0xb535,	// (0x0003cfed) list_set_graphic_pane_vc

0x2000,	// (0x00033ab8) input_focus_pane_cp2_vc

0x1ff6,	// (0x00033aae) setting_code_pane_vc_g1

0x2073,	// (0x00033b2b) setting_code_pane_vc_t1

0xb548,	// (0x0003d000) set_text_pane_vc_t1_ParamLimits

0xb548,	// (0x0003d000) set_text_pane_vc_t1

0x2000,	// (0x00033ab8) input_focus_pane_cp1_vc

0xb565,	// (0x0003d01d) list_set_text_pane_vc

0x1ff6,	// (0x00033aae) setting_text_pane_vc_g1

0x2000,	// (0x00033ab8) bg_set_opt_pane_cp2_vc

0x206a,	// (0x00033b22) setting_slider_graphic_pane_vc_g1

0xb56f,	// (0x0003d027) setting_slider_graphic_pane_vc_t1

0xb57f,	// (0x0003d037) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x00041483) setting_slider_graphic_pane_vc_t

0xb58f,	// (0x0003d047) slider_set_pane_cp_vc

0xb597,	// (0x0003d04f) slider_set_pane_vc_g1

0xb5a0,	// (0x0003d058) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x00041488) slider_set_pane_vc_g

0x246a,	// (0x00033f22) set_opt_bg_pane_g1_copy1

0x2472,	// (0x00033f2a) set_opt_bg_pane_g2_copy1

0xb5cc,	// (0x0003d084) set_opt_bg_pane_g3_copy1

0x2482,	// (0x00033f3a) set_opt_bg_pane_g4_copy1

0x248a,	// (0x00033f42) set_opt_bg_pane_g5_copy1

0x2492,	// (0x00033f4a) set_opt_bg_pane_g6_copy1

0xb5d4,	// (0x0003d08c) set_opt_bg_pane_g7_copy1

0xb5de,	// (0x0003d096) set_opt_bg_pane_g8_copy1

0xb5e6,	// (0x0003d09e) set_opt_bg_pane_g9_copy1

0x2000,	// (0x00033ab8) bg_set_opt_pane_cp_vc

0xb5ee,	// (0x0003d0a6) setting_slider_pane_vc_t1

0xb5fd,	// (0x0003d0b5) setting_slider_pane_vc_t2

0xb60d,	// (0x0003d0c5) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x00041497) setting_slider_pane_vc_t

0xb61d,	// (0x0003d0d5) slider_set_pane_vc

0x817f,	// (0x00039c37) volume_set_pane_vc_g1

0x8555,	// (0x0003a00d) volume_set_pane_vc_g2

0x855e,	// (0x0003a016) volume_set_pane_vc_g3

0x8567,	// (0x0003a01f) volume_set_pane_vc_g4

0x8570,	// (0x0003a028) volume_set_pane_vc_g5

0x8579,	// (0x0003a031) volume_set_pane_vc_g6

0x8582,	// (0x0003a03a) volume_set_pane_vc_g7

0x858b,	// (0x0003a043) volume_set_pane_vc_g8

0x8594,	// (0x0003a04c) volume_set_pane_vc_g9

0x859d,	// (0x0003a055) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x0004149e) volume_set_pane_vc_g

0xb625,	// (0x0003d0dd) volume_set_pane_vc

0xb62f,	// (0x0003d0e7) button_value_adjust_pane_cp1_vc

0xb639,	// (0x0003d0f1) list_highlight_pane_cp2_vc

0xb642,	// (0x0003d0fa) list_set_pane_vc_ParamLimits

0xb642,	// (0x0003d0fa) list_set_pane_vc

0xb6a0,	// (0x0003d158) main_pane_set_vc_t1_ParamLimits

0xb6a0,	// (0x0003d158) main_pane_set_vc_t1

0xb6b5,	// (0x0003d16d) main_pane_set_vc_t2_ParamLimits

0xb6b5,	// (0x0003d16d) main_pane_set_vc_t2

0xb6c7,	// (0x0003d17f) main_pane_set_vc_t3_ParamLimits

0xb6c7,	// (0x0003d17f) main_pane_set_vc_t3

0xb6d9,	// (0x0003d191) main_pane_set_vc_t4_ParamLimits

0xb6d9,	// (0x0003d191) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x000414b3) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x000414b3) main_pane_set_vc_t

0xb6eb,	// (0x0003d1a3) setting_code_pane_vc_ParamLimits

0xb6eb,	// (0x0003d1a3) setting_code_pane_vc

0xb6fa,	// (0x0003d1b2) setting_slider_graphic_pane_vc

0xb6fa,	// (0x0003d1b2) setting_slider_pane_vc

0xb6fa,	// (0x0003d1b2) setting_text_pane_vc

0xb6fa,	// (0x0003d1b2) setting_volume_pane_vc

0xb702,	// (0x0003d1ba) scroll_pane_cp121_vc

0x23ec,	// (0x00033ea4) set_content_pane_vc

0xb70a,	// (0x0003d1c2) button_value_adjust_pane_g1

0xb713,	// (0x0003d1cb) button_value_adjust_pane_g2

0x0001,

0xfa63,	// (0x0004151b) button_value_adjust_pane_g

0xb71c,	// (0x0003d1d4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb71c,	// (0x0003d1d4) form_field_slider_wide_pane_vc_t1

0xb730,	// (0x0003d1e8) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb730,	// (0x0003d1e8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa68,	// (0x00041520) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x00041520) form_field_slider_wide_pane_vc_t

0x204e,	// (0x00033b06) input_focus_pane_cp10_vc_ParamLimits

0x204e,	// (0x00033b06) input_focus_pane_cp10_vc

0xb75e,	// (0x0003d216) slider_cont_pane_cp1_vc_ParamLimits

0xb75e,	// (0x0003d216) slider_cont_pane_cp1_vc

0xb770,	// (0x0003d228) slider_form_pane_g1_cp2

0xb5a0,	// (0x0003d058) slider_form_pane_g2_cp2

0xb79d,	// (0x0003d255) form_field_slider_pane_vc_t3

0xb7ab,	// (0x0003d263) form_field_slider_pane_vc_t4

0xb7b9,	// (0x0003d271) slider_form_pane_vc_ParamLimits

0xb7b9,	// (0x0003d271) slider_form_pane_vc

0xb7c6,	// (0x0003d27e) form_field_slider_pane_vc_t1_ParamLimits

0xb7c6,	// (0x0003d27e) form_field_slider_pane_vc_t1

0xb730,	// (0x0003d1e8) form_field_slider_pane_vc_t2_ParamLimits

0xb730,	// (0x0003d1e8) form_field_slider_pane_vc_t2

0x0001,

0xfa7a,	// (0x00041532) form_field_slider_pane_vc_t_ParamLimits

0xfa7a,	// (0x00041532) form_field_slider_pane_vc_t

0x204e,	// (0x00033b06) input_focus_pane_cp9_vc_ParamLimits

0x204e,	// (0x00033b06) input_focus_pane_cp9_vc

0xb7e2,	// (0x0003d29a) slider_cont_pane_vc_ParamLimits

0xb7e2,	// (0x0003d29a) slider_cont_pane_vc

0xb7f6,	// (0x0003d2ae) list_form_graphic_pane_cp_vc_ParamLimits

0xb7f6,	// (0x0003d2ae) list_form_graphic_pane_cp_vc

0x9af0,	// (0x0003b5a8) form_field_popup_wide_pane_vc_g1

0xb80b,	// (0x0003d2c3) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb80b,	// (0x0003d2c3) form_field_popup_wide_pane_vc_t1

0x2412,	// (0x00033eca) input_focus_pane_cp8_vc_ParamLimits

0x2412,	// (0x00033eca) input_focus_pane_cp8_vc

0xb850,	// (0x0003d308) list_form_wide_pane_vc_ParamLimits

0xb850,	// (0x0003d308) list_form_wide_pane_vc

0xb85c,	// (0x0003d314) list_form_graphic_pane_vc_g1

0xb864,	// (0x0003d31c) list_form_graphic_pane_vc_t1_ParamLimits

0xb864,	// (0x0003d31c) list_form_graphic_pane_vc_t1

0x205c,	// (0x00033b14) list_highlight_pane_cp5_vc_ParamLimits

0x205c,	// (0x00033b14) list_highlight_pane_cp5_vc

0xb880,	// (0x0003d338) list_form_graphic_pane_vc_ParamLimits

0xb880,	// (0x0003d338) list_form_graphic_pane_vc

0x9af0,	// (0x0003b5a8) form_field_popup_pane_vc_g1

0xb896,	// (0x0003d34e) form_field_popup_pane_vc_t1_ParamLimits

0xb896,	// (0x0003d34e) form_field_popup_pane_vc_t1

0x2412,	// (0x00033eca) input_focus_pane_cp7_vc_ParamLimits

0x2412,	// (0x00033eca) input_focus_pane_cp7_vc

0xb8ad,	// (0x0003d365) list_form_pane_vc_ParamLimits

0xb8ad,	// (0x0003d365) list_form_pane_vc

0xb8b9,	// (0x0003d371) data_form_pane_vc_t1_ParamLimits

0xb8b9,	// (0x0003d371) data_form_pane_vc_t1

0x246a,	// (0x00033f22) input_focus_pane_vc_g1

0x2472,	// (0x00033f2a) input_focus_pane_vc_g2

0x247a,	// (0x00033f32) input_focus_pane_vc_g3

0x2482,	// (0x00033f3a) input_focus_pane_vc_g4

0x248a,	// (0x00033f42) input_focus_pane_vc_g5

0x2492,	// (0x00033f4a) input_focus_pane_vc_g6

0x249a,	// (0x00033f52) input_focus_pane_vc_g7

0x24a2,	// (0x00033f5a) input_focus_pane_vc_g8

0x24aa,	// (0x00033f62) input_focus_pane_vc_g9

0x1ff6,	// (0x00033aae) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x00041110) input_focus_pane_vc_g

0x9ae4,	// (0x0003b59c) data_form_pane_vc_ParamLimits

0x9ae4,	// (0x0003b59c) data_form_pane_vc

0x9af0,	// (0x0003b5a8) form_field_data_pane_vc_g1

0xb8d4,	// (0x0003d38c) form_field_data_pane_vc_t1_ParamLimits

0xb8d4,	// (0x0003d38c) form_field_data_pane_vc_t1

0x2412,	// (0x00033eca) input_focus_pane_vc_ParamLimits

0x2412,	// (0x00033eca) input_focus_pane_vc

0xb8ee,	// (0x0003d3a6) button_value_adjust_pane_cp3_vc

0xb8f6,	// (0x0003d3ae) button_value_adjust_pane_cp5_vc

0xb8fe,	// (0x0003d3b6) form_field_data_pane_vc_ParamLimits

0xb8fe,	// (0x0003d3b6) form_field_data_pane_vc

0xb915,	// (0x0003d3cd) form_field_data_pane_vc_cp2

0xb91d,	// (0x0003d3d5) form_field_data_wide_pane_vc_ParamLimits

0xb91d,	// (0x0003d3d5) form_field_data_wide_pane_vc

0xb933,	// (0x0003d3eb) form_field_data_wide_pane_vc_cp2

0xb93b,	// (0x0003d3f3) form_field_popup_pane_vc_ParamLimits

0xb93b,	// (0x0003d3f3) form_field_popup_pane_vc

0xb952,	// (0x0003d40a) form_field_popup_wide_pane_vc_ParamLimits

0xb952,	// (0x0003d40a) form_field_popup_wide_pane_vc

0xb968,	// (0x0003d420) form_field_slider_pane_vc_ParamLimits

0xb968,	// (0x0003d420) form_field_slider_pane_vc

0xb97b,	// (0x0003d433) form_field_slider_wide_pane_vc_ParamLimits

0xb97b,	// (0x0003d433) form_field_slider_wide_pane_vc

0xb98e,	// (0x0003d446) grid_touch_1_pane_ParamLimits

0xb98e,	// (0x0003d446) grid_touch_1_pane

0xb99a,	// (0x0003d452) grid_touch_2_pane_ParamLimits

0xb99a,	// (0x0003d452) grid_touch_2_pane

0x2e24,	// (0x000348dc) touch_pane_g1_ParamLimits

0x2e24,	// (0x000348dc) touch_pane_g1

0xb9b2,	// (0x0003d46a) cell_app_pane_cp_wide_ParamLimits

0xb9b2,	// (0x0003d46a) cell_app_pane_cp_wide

0xb9c3,	// (0x0003d47b) grid_popup_fast_wide_pane_ParamLimits

0xb9c3,	// (0x0003d47b) grid_popup_fast_wide_pane

0xb9d7,	// (0x0003d48f) scroll_pane_cp19_ParamLimits

0xb9d7,	// (0x0003d48f) scroll_pane_cp19

0x2000,	// (0x00033ab8) bg_popup_window_pane_cp20

0xb9eb,	// (0x0003d4a3) listscroll_popup_fast_wide_pane

0xb9f3,	// (0x0003d4ab) grid_indicator_nsta_pane

0xba05,	// (0x0003d4bd) clock_nsta_pane_g1

0xba0e,	// (0x0003d4c6) clock_nsta_pane_t1

0xba2a,	// (0x0003d4e2) cell_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x0003d4e2) cell_indicator_nsta_pane

0xba5f,	// (0x0003d517) cell_indicator_nsta_pane_g1

0xba6d,	// (0x0003d525) cell_indicator_nsta_pane_g2

0x0001,

0xfa8b,	// (0x00041543) cell_indicator_nsta_pane_g

0xba7f,	// (0x0003d537) clock_nsta_pane_cp

0xba88,	// (0x0003d540) indicator_nsta_pane_cp

0xba92,	// (0x0003d54a) nsta_clock_indic_pane_g1

0x2098,	// (0x00033b50) grid_indicator_pane

0x6f5a,	// (0x00038a12) scroll_pane_cp29

0x71c6,	// (0x00038c7e) indicator_nsta_pane_cp2_ParamLimits

0x71c6,	// (0x00038c7e) indicator_nsta_pane_cp2

0x205c,	// (0x00033b14) main_apps_wheel_pane

0x9d08,	// (0x0003b7c0) form_midp_field_text_pane_ParamLimits

0x9e51,	// (0x0003b909) scroll_bar_cp050_ParamLimits

0xbaeb,	// (0x0003d5a3) cell_indicator_pane_ParamLimits

0xbaeb,	// (0x0003d5a3) cell_indicator_pane

0xbb04,	// (0x0003d5bc) cell_indicator_pane_g1

0xbb0e,	// (0x0003d5c6) grid_wheel_folder_pane_ParamLimits

0xbb0e,	// (0x0003d5c6) grid_wheel_folder_pane

0xbb24,	// (0x0003d5dc) list_wheel_apps_pane_ParamLimits

0xbb24,	// (0x0003d5dc) list_wheel_apps_pane

0xbb35,	// (0x0003d5ed) main_apps_wheel_pane_g1_ParamLimits

0xbb35,	// (0x0003d5ed) main_apps_wheel_pane_g1

0xbb49,	// (0x0003d601) main_apps_wheel_pane_g2_ParamLimits

0xbb49,	// (0x0003d601) main_apps_wheel_pane_g2

0x0001,

0xfaa7,	// (0x0004155f) main_apps_wheel_pane_g_ParamLimits

0xfaa7,	// (0x0004155f) main_apps_wheel_pane_g

0xbb61,	// (0x0003d619) main_apps_wheel_pane_t1_ParamLimits

0xbb61,	// (0x0003d619) main_apps_wheel_pane_t1

0xbb84,	// (0x0003d63c) list_wheel_apps_pane_g1

0xbb8c,	// (0x0003d644) list_wheel_apps_pane_g2

0xbb94,	// (0x0003d64c) list_wheel_apps_pane_g3

0xbb9e,	// (0x0003d656) list_wheel_apps_pane_g4

0xbba8,	// (0x0003d660) list_wheel_apps_pane_g5

0x0004,

0xfaac,	// (0x00041564) list_wheel_apps_pane_g

0x2b73,	// (0x0003462b) navi_icon_text_pane

0x7cef,	// (0x000397a7) aid_fill_nsta

0xbbcb,	// (0x0003d683) navi_icon_text_pane_g1

0xbbd7,	// (0x0003d68f) navi_icon_text_pane_t1

0x2a57,	// (0x0003450f) list_set_graphic_pane_t1_ParamLimits

0x2a57,	// (0x0003450f) list_set_graphic_pane_t1

0xa59c,	// (0x0003c054) popup_midp_note_alarm_window_t6_ParamLimits

0xa59c,	// (0x0003c054) popup_midp_note_alarm_window_t6

0xa5ae,	// (0x0003c066) popup_midp_note_alarm_window_t7_ParamLimits

0xa5ae,	// (0x0003c066) popup_midp_note_alarm_window_t7

0xa5c0,	// (0x0003c078) popup_midp_note_alarm_window_t8_ParamLimits

0xa5c0,	// (0x0003c078) popup_midp_note_alarm_window_t8

0xa5d2,	// (0x0003c08a) popup_midp_note_alarm_window_t9_ParamLimits

0xa5d2,	// (0x0003c08a) popup_midp_note_alarm_window_t9

0xa5e4,	// (0x0003c09c) popup_midp_note_alarm_window_t10_ParamLimits

0xa5e4,	// (0x0003c09c) popup_midp_note_alarm_window_t10

0xa5f6,	// (0x0003c0ae) popup_midp_note_alarm_window_t11_ParamLimits

0xa5f6,	// (0x0003c0ae) popup_midp_note_alarm_window_t11

0xa608,	// (0x0003c0c0) scroll_pane_cp17_ParamLimits

0xa608,	// (0x0003c0c0) scroll_pane_cp17

0x817f,	// (0x00039c37) volume_small_pane_cp_g1

0x85a6,	// (0x0003a05e) volume_small_pane_cp_g2

0x85af,	// (0x0003a067) volume_small_pane_cp_g3

0x85b8,	// (0x0003a070) volume_small_pane_cp_g4

0x85c1,	// (0x0003a079) volume_small_pane_cp_g5

0x8570,	// (0x0003a028) volume_small_pane_cp_g6

0x85ca,	// (0x0003a082) volume_small_pane_cp_g7

0x85d3,	// (0x0003a08b) volume_small_pane_cp_g8

0x85dc,	// (0x0003a094) volume_small_pane_cp_g9

0x85e5,	// (0x0003a09d) volume_small_pane_cp_g10

0x2ce5,	// (0x0003479d) midp_ticker_pane_g1_ParamLimits

0x2cf1,	// (0x000347a9) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x000411dc) midp_ticker_pane_g_ParamLimits

0x2cfd,	// (0x000347b5) midp_ticker_pane_t1_ParamLimits

0x7d05,	// (0x000397bd) aid_fill_nsta_2

0x9e3d,	// (0x0003b8f5) list_form2_midp_pane

0xaf50,	// (0x0003ca08) midp_editing_number_pane_ParamLimits

0xaf5f,	// (0x0003ca17) midp_ticker_pane_ParamLimits

0xbbe9,	// (0x0003d6a1) form2_midp_field_pane

0xbc0d,	// (0x0003d6c5) scroll_pane_cp51

0xbc2d,	// (0x0003d6e5) form2_midp_button_pane_ParamLimits

0xbc2d,	// (0x0003d6e5) form2_midp_button_pane

0xbc3f,	// (0x0003d6f7) form2_midp_content_pane_ParamLimits

0xbc3f,	// (0x0003d6f7) form2_midp_content_pane

0xbc59,	// (0x0003d711) form2_midp_field_choice_group_pane

0xbc61,	// (0x0003d719) form2_midp_field_pane_g1

0xbc69,	// (0x0003d721) form2_midp_field_pane_g2

0xbc71,	// (0x0003d729) form2_midp_field_pane_g3

0xbc79,	// (0x0003d731) form2_midp_field_pane_g4

0x0003,

0xfad1,	// (0x00041589) form2_midp_field_pane_g

0xbc81,	// (0x0003d739) form2_midp_gauge_slider_pane

0xbc89,	// (0x0003d741) form2_midp_gauge_wait_pane

0xbc91,	// (0x0003d749) form2_midp_image_pane_ParamLimits

0xbc91,	// (0x0003d749) form2_midp_image_pane

0xbcac,	// (0x0003d764) form2_midp_label_pane_ParamLimits

0xbcac,	// (0x0003d764) form2_midp_label_pane

0xbcc5,	// (0x0003d77d) form2_midp_label_pane_cp_ParamLimits

0xbcc5,	// (0x0003d77d) form2_midp_label_pane_cp

0xbce6,	// (0x0003d79e) form2_midp_string_pane_ParamLimits

0xbce6,	// (0x0003d79e) form2_midp_string_pane

0x4be3,	// (0x0003669b) form2_midp_text_pane_ParamLimits

0x4be3,	// (0x0003669b) form2_midp_text_pane

0xbcf8,	// (0x0003d7b0) form2_midp_time_pane

0xbd08,	// (0x0003d7c0) input_focus_pane_cp51_ParamLimits

0xbd08,	// (0x0003d7c0) input_focus_pane_cp51

0xbd20,	// (0x0003d7d8) form2_midp_label_pane_t1_ParamLimits

0xbd20,	// (0x0003d7d8) form2_midp_label_pane_t1

0x4bfc,	// (0x000366b4) form2_mdip_text_pane_t1_ParamLimits

0x4bfc,	// (0x000366b4) form2_mdip_text_pane_t1

0x4c1a,	// (0x000366d2) form2_midp_time_pane_t1

0xbd69,	// (0x0003d821) form2_midp_gauge_slider_pane_t1

0xbd7b,	// (0x0003d833) form2_midp_gauge_slider_pane_t2

0xbd8d,	// (0x0003d845) form2_midp_gauge_slider_pane_t3

0x0002,

0xfada,	// (0x00041592) form2_midp_gauge_slider_pane_t

0xbd9f,	// (0x0003d857) form2_midp_slider_pane

0xbdab,	// (0x0003d863) form2_midp_gauge_wait_pane_t1

0xbdb9,	// (0x0003d871) form2_midp_wait_pane_ParamLimits

0xbdb9,	// (0x0003d871) form2_midp_wait_pane

0xbde4,	// (0x0003d89c) list_single_2graphic_pane_cp4_ParamLimits

0xbde4,	// (0x0003d89c) list_single_2graphic_pane_cp4

0x9b59,	// (0x0003b611) list_single_midp_graphic_pane_cp_ParamLimits

0x9b59,	// (0x0003b611) list_single_midp_graphic_pane_cp

0x2000,	// (0x00033ab8) list_highlight_pane_cp20

0xbe0c,	// (0x0003d8c4) list_single_2graphic_pane_g1_cp4

0xb3e9,	// (0x0003cea1) list_single_2graphic_pane_g2_cp4

0xbe14,	// (0x0003d8cc) list_single_2graphic_pane_t1_cp4

0x205c,	// (0x00033b14) list_highlight_pane_cp21

0xbe23,	// (0x0003d8db) list_single_midp_graphic_pane_g4_cp

0xbe32,	// (0x0003d8ea) list_single_midp_graphic_pane_t1_cp

0xbe47,	// (0x0003d8ff) form2_mdip_string_pane_t1_ParamLimits

0xbe47,	// (0x0003d8ff) form2_mdip_string_pane_t1

0x2000,	// (0x00033ab8) bg_wml_button_pane_cp2

0x1ff6,	// (0x00033aae) form2_midp_image_pane_g1

0x467e,	// (0x00036136) list_double_large_graphic_pane_g5_ParamLimits

0x467e,	// (0x00036136) list_double_large_graphic_pane_g5

0x737f,	// (0x00038e37) midp_form_pane_ParamLimits

0x205c,	// (0x00033b14) main_apps_wheel_pane_ParamLimits

0x7ad7,	// (0x0003958f) popup_preview_window_ParamLimits

0x7ad7,	// (0x0003958f) popup_preview_window

0x7c92,	// (0x0003974a) popup_touch_info_window_ParamLimits

0x7c92,	// (0x0003974a) popup_touch_info_window

0x7cb0,	// (0x00039768) popup_touch_menu_window_ParamLimits

0x7cb0,	// (0x00039768) popup_touch_menu_window

0x1fec,	// (0x00033aa4) bg_popup_sub_pane_cp6

0xbf4e,	// (0x0003da06) list_touch_menu_pane

0xbf56,	// (0x0003da0e) list_single_touch_menu_pane_ParamLimits

0xbf56,	// (0x0003da0e) list_single_touch_menu_pane

0xbf6c,	// (0x0003da24) list_single_touch_menu_pane_t1

0x205c,	// (0x00033b14) bg_popup_sub_pane_cp7_ParamLimits

0x205c,	// (0x00033b14) bg_popup_sub_pane_cp7

0xbf7a,	// (0x0003da32) heading_sub_pane

0xbf82,	// (0x0003da3a) list_touch_info_pane_ParamLimits

0xbf82,	// (0x0003da3a) list_touch_info_pane

0xbf91,	// (0x0003da49) list_single_touch_info_pane_ParamLimits

0xbf91,	// (0x0003da49) list_single_touch_info_pane

0xbfa3,	// (0x0003da5b) list_single_touch_info_pane_t1

0xbfb1,	// (0x0003da69) list_single_touch_info_pane_t2

0x0001,

0xfae8,	// (0x000415a0) list_single_touch_info_pane_t

0x2cce,	// (0x00034786) bg_popup_heading_pane_cp

0xbfbf,	// (0x0003da77) heading_sub_pane_t1

0x9a7e,	// (0x0003b536) bg_popup_preview_window_pane_cp_ParamLimits

0x9a7e,	// (0x0003b536) bg_popup_preview_window_pane_cp

0xbf7a,	// (0x0003da32) heading_preview_pane

0xbf82,	// (0x0003da3a) list_preview_pane_ParamLimits

0xbf82,	// (0x0003da3a) list_preview_pane

0xbfcd,	// (0x0003da85) popup_preview_window_g1

0xbf91,	// (0x0003da49) list_single_preview_pane_ParamLimits

0xbf91,	// (0x0003da49) list_single_preview_pane

0xbfd5,	// (0x0003da8d) list_single_preview_pane_g1

0xbfdd,	// (0x0003da95) list_single_preview_pane_t1

0xbfa3,	// (0x0003da5b) list_single_preview_pane_t2

0x0001,

0xfaed,	// (0x000415a5) list_single_preview_pane_t

0xbfeb,	// (0x0003daa3) bg_popup_heading_pane_cp2_ParamLimits

0xbfeb,	// (0x0003daa3) bg_popup_heading_pane_cp2

0xc001,	// (0x0003dab9) heading_preview_pane_g1

0xc009,	// (0x0003dac1) heading_preview_pane_t1_ParamLimits

0xc009,	// (0x0003dac1) heading_preview_pane_t1

0x20af,	// (0x00033b67) soft_indicator_pane_t1_ParamLimits

0x238e,	// (0x00033e46) scroll_pane_ParamLimits

0x2740,	// (0x000341f8) scroll_sc2_left_pane

0x2737,	// (0x000341ef) scroll_sc2_right_pane

0x275f,	// (0x00034217) scroll_bg_pane_g1_ParamLimits

0x2774,	// (0x0003422c) scroll_bg_pane_g2_ParamLimits

0x278c,	// (0x00034244) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x00041167) scroll_bg_pane_g_ParamLimits

0x275f,	// (0x00034217) scroll_handle_pane_g1_ParamLimits

0x27a1,	// (0x00034259) scroll_handle_pane_g2_ParamLimits

0x278c,	// (0x00034244) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x0004116e) scroll_handle_pane_g_ParamLimits

0x775a,	// (0x00039212) popup_choice_list_window_ParamLimits

0x775a,	// (0x00039212) popup_choice_list_window

0x993c,	// (0x0003b3f4) choice_list_pane

0x99be,	// (0x0003b476) cell_toolbar_pane_t1

0x99e6,	// (0x0003b49e) toolbar_button_pane_ParamLimits

0xaac2,	// (0x0003c57a) ai_gene_pane_1_t2_ParamLimits

0xaac2,	// (0x0003c57a) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x00041391) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x00041391) ai_gene_pane_1_t

0xc026,	// (0x0003dade) scroll_sc2_left_pane_g1

0xc026,	// (0x0003dade) scroll_sc2_right_pane_g1

0x2554,	// (0x0003400c) bg_popup_sub_pane_cp10

0xc030,	// (0x0003dae8) list_choice_list_pane

0xc049,	// (0x0003db01) list_single_choice_list_pane_ParamLimits

0xc049,	// (0x0003db01) list_single_choice_list_pane

0xc05c,	// (0x0003db14) list_single_choice_list_pane_g1

0x6bf3,	// (0x000386ab) list_single_choice_list_pane_t1_ParamLimits

0x6bf3,	// (0x000386ab) list_single_choice_list_pane_t1

0xc064,	// (0x0003db1c) choice_list_pane_g1

0xc06c,	// (0x0003db24) choice_list_pane_t1

0x1fec,	// (0x00033aa4) input_focus_pane_cp11

0x26ac,	// (0x00034164) title_pane_stacon_g2_ParamLimits

0x26ac,	// (0x00034164) title_pane_stacon_g2

0x0002,

0xf695,	// (0x0004114d) title_pane_stacon_g_ParamLimits

0xf695,	// (0x0004114d) title_pane_stacon_g

0x2cce,	// (0x00034786) cursor_press_pane

0x7802,	// (0x000392ba) popup_fep_hwr_window_ParamLimits

0x7802,	// (0x000392ba) popup_fep_hwr_window

0x787a,	// (0x00039332) popup_fep_vkb_window_ParamLimits

0x787a,	// (0x00039332) popup_fep_vkb_window

0xc07a,	// (0x0003db32) cursor_press_pane_g1

0x0002,

0xfb16,	// (0x000415ce) fep_vkb_side_pane_g_ParamLimits

0x8627,	// (0x0003a0df) fep_hwr_candidate_pane_ParamLimits

0x8627,	// (0x0003a0df) fep_hwr_candidate_pane

0x8651,	// (0x0003a109) fep_hwr_side_pane_ParamLimits

0x8651,	// (0x0003a109) fep_hwr_side_pane

0x8671,	// (0x0003a129) fep_hwr_top_pane_ParamLimits

0x8671,	// (0x0003a129) fep_hwr_top_pane

0x8689,	// (0x0003a141) fep_hwr_write_pane_ParamLimits

0x8689,	// (0x0003a141) fep_hwr_write_pane

0xfb16,	// (0x000415ce) fep_vkb_side_pane_g

0xc082,	// (0x0003db3a) fep_hwr_top_pane_g1

0xc094,	// (0x0003db4c) fep_hwr_top_pane_g2

0x86c3,	// (0x0003a17b) fep_hwr_top_pane_g3

0x0002,

0xfaf2,	// (0x000415aa) fep_hwr_top_pane_g

0x86d8,	// (0x0003a190) fep_hwr_top_text_pane

0x2864,	// (0x0003431c) fep_hwr_top_text_pane_g1

0xc0ca,	// (0x0003db82) fep_hwr_top_text_pane_t1

0x87ce,	// (0x0003a286) fep_hwr_candidate_pane_g1

0xc30f,	// (0x0003ddc7) fep_vkb_keypad_pane_g3_ParamLimits

0xc30f,	// (0x0003ddc7) fep_vkb_keypad_pane_g3

0xc337,	// (0x0003ddef) fep_vkb_keypad_pane_g4_ParamLimits

0xc337,	// (0x0003ddef) fep_vkb_keypad_pane_g4

0xc3a6,	// (0x0003de5e) fep_vkb_bottom_pane_g2_ParamLimits

0xc3a6,	// (0x0003de5e) fep_vkb_bottom_pane_g2

0x0001,

0xfb1d,	// (0x000415d5) fep_vkb_bottom_pane_g_ParamLimits

0xfb1d,	// (0x000415d5) fep_vkb_bottom_pane_g

0xc026,	// (0x0003dade) cell_vkb_side_pane_g2

0x0001,

0xfb27,	// (0x000415df) cell_vkb_side_pane_g

0xc431,	// (0x0003dee9) cell_vkb_side_pane_t1

0xc43f,	// (0x0003def7) cell_vkb_side_pane_t1_copy1

0xc026,	// (0x0003dade) bg_fep_vkb_candidate_pane_g2

0xc56b,	// (0x0003e023) cell_vkb_candidate_pane_ParamLimits

0xc0d8,	// (0x0003db90) aid_size_cell_vkb_ParamLimits

0xc0d8,	// (0x0003db90) aid_size_cell_vkb

0xc56b,	// (0x0003e023) cell_vkb_candidate_pane

0x87f5,	// (0x0003a2ad) bg_popup_fep_shadow_pane_g1

0xc166,	// (0x0003dc1e) fep_vkb_bottom_pane_ParamLimits

0xc166,	// (0x0003dc1e) fep_vkb_bottom_pane

0xc19c,	// (0x0003dc54) fep_vkb_candidate_pane_ParamLimits

0xc19c,	// (0x0003dc54) fep_vkb_candidate_pane

0xc1b8,	// (0x0003dc70) fep_vkb_keypad_pane_ParamLimits

0xc1b8,	// (0x0003dc70) fep_vkb_keypad_pane

0xc1f7,	// (0x0003dcaf) fep_vkb_side_pane_ParamLimits

0xc1f7,	// (0x0003dcaf) fep_vkb_side_pane

0xc233,	// (0x0003dceb) fep_vkb_top_pane_ParamLimits

0xc233,	// (0x0003dceb) fep_vkb_top_pane

0xc268,	// (0x0003dd20) fep_vkb_top_pane_g1_ParamLimits

0xc268,	// (0x0003dd20) fep_vkb_top_pane_g1

0xc277,	// (0x0003dd2f) fep_vkb_top_pane_g2_ParamLimits

0xc277,	// (0x0003dd2f) fep_vkb_top_pane_g2

0xc286,	// (0x0003dd3e) fep_vkb_top_pane_g3_ParamLimits

0xc286,	// (0x0003dd3e) fep_vkb_top_pane_g3

0x0003,

0xfb0d,	// (0x000415c5) fep_vkb_top_pane_g_ParamLimits

0xfb0d,	// (0x000415c5) fep_vkb_top_pane_g

0xc2a4,	// (0x0003dd5c) fep_vkb_top_text_pane_ParamLimits

0xc2a4,	// (0x0003dd5c) fep_vkb_top_text_pane

0xc2b5,	// (0x0003dd6d) fep_vkb_side_pane_g1_ParamLimits

0xc2b5,	// (0x0003dd6d) fep_vkb_side_pane_g1

0xc2fe,	// (0x0003ddb6) grid_vkb_side_pane_ParamLimits

0xc2fe,	// (0x0003ddb6) grid_vkb_side_pane

0x87fd,	// (0x0003a2b5) bg_popup_fep_shadow_pane_g2

0x8806,	// (0x0003a2be) bg_popup_fep_shadow_pane_g3

0x880e,	// (0x0003a2c6) bg_popup_fep_shadow_pane_g4

0x8817,	// (0x0003a2cf) bg_popup_fep_shadow_pane_g5

0x8821,	// (0x0003a2d9) bg_popup_fep_shadow_pane_g6

0x8829,	// (0x0003a2e1) bg_popup_fep_shadow_pane_g7

0x2482,	// (0x00033f3a) bg_popup_fep_shadow_pane_g8

0xc355,	// (0x0003de0d) grid_vkb_keypad_number_pane_ParamLimits

0xc355,	// (0x0003de0d) grid_vkb_keypad_number_pane

0xc365,	// (0x0003de1d) grid_vkb_keypad_pane_ParamLimits

0xc365,	// (0x0003de1d) grid_vkb_keypad_pane

0xc38b,	// (0x0003de43) fep_vkb_bottom_pane_g1_ParamLimits

0xc38b,	// (0x0003de43) fep_vkb_bottom_pane_g1

0xc3b4,	// (0x0003de6c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3b4,	// (0x0003de6c) grid_vkb_keypad_bottom_left_pane

0xc3c9,	// (0x0003de81) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3c9,	// (0x0003de81) grid_vkb_keypad_bottom_right_pane

0xc3de,	// (0x0003de96) fep_vkb_top_text_pane_g1

0xc3f9,	// (0x0003deb1) fep_vkb_top_text_pane_t1

0xc40e,	// (0x0003dec6) cell_vkb_side_pane_ParamLimits

0xc40e,	// (0x0003dec6) cell_vkb_side_pane

0xc026,	// (0x0003dade) cell_vkb_side_pane_g1

0xc44d,	// (0x0003df05) cell_vkb_keypad_pane_ParamLimits

0xc44d,	// (0x0003df05) cell_vkb_keypad_pane

0xc4c2,	// (0x0003df7a) cell_vkb_keypad_pane_g1

0x0008,

0xfb3a,	// (0x000415f2) bg_popup_fep_shadow_pane_g

0x883b,	// (0x0003a2f3) cell_hwr_side_pane_g1

0x883b,	// (0x0003a2f3) cell_hwr_side_pane_g2

0xc4cc,	// (0x0003df84) cell_vkb_keypad_pane_t1

0xc4da,	// (0x0003df92) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4da,	// (0x0003df92) cell_vkb_keypad_bottom_left_pane

0xc4f7,	// (0x0003dfaf) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4f7,	// (0x0003dfaf) cell_vkb_keypad_bottom_right_pane

0xc026,	// (0x0003dade) cell_vkb_keypad_bottom_left_pane_g1

0xc026,	// (0x0003dade) cell_vkb_keypad_bottom_right_pane_g1

0xc530,	// (0x0003dfe8) cell_vkb_keypad_number_pane_ParamLimits

0xc530,	// (0x0003dfe8) cell_vkb_keypad_number_pane

0xc54f,	// (0x0003e007) cell_vkb_keypad_number_pane_g1

0xc559,	// (0x0003e011) cell_vkb_keypad_number_pane_g2

0xc562,	// (0x0003e01a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2c,	// (0x000415e4) cell_vkb_keypad_number_pane_g

0xc4cc,	// (0x0003df84) cell_vkb_keypad_number_pane_t1

0xc586,	// (0x0003e03e) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x00041605) cell_hwr_side_pane_g

0xc59f,	// (0x0003e057) cell_hwr_side_pane_t1

0x8845,	// (0x0003a2fd) cell_hwr_side_pane_t1_copy1

0x8853,	// (0x0003a30b) cell_hwr_candidate_pane_g1

0x8882,	// (0x0003a33a) cell_hwr_candidate_pane_t1

0xc026,	// (0x0003dade) cell_vkb_candidate_pane_g2

0xc604,	// (0x0003e0bc) cell_vkb_candidate_pane_t1

0x85ee,	// (0x0003a0a6) bg_popup_fep_shadow_pane_ParamLimits

0x85ee,	// (0x0003a0a6) bg_popup_fep_shadow_pane

0x86a3,	// (0x0003a15b) bg_fep_hwr_top_pane_g4

0xc0a6,	// (0x0003db5e) bg_hwr_side_pane_g1_ParamLimits

0xc0a6,	// (0x0003db5e) bg_hwr_side_pane_g1

0x8714,	// (0x0003a1cc) cell_hwr_side_pane_ParamLimits

0x8714,	// (0x0003a1cc) cell_hwr_side_pane

0x874f,	// (0x0003a207) fep_hwr_write_pane_g1_ParamLimits

0x874f,	// (0x0003a207) fep_hwr_write_pane_g1

0x875c,	// (0x0003a214) fep_hwr_write_pane_g2_ParamLimits

0x875c,	// (0x0003a214) fep_hwr_write_pane_g2

0x8769,	// (0x0003a221) fep_hwr_write_pane_g3_ParamLimits

0x8769,	// (0x0003a221) fep_hwr_write_pane_g3

0x8777,	// (0x0003a22f) fep_hwr_write_pane_g4_ParamLimits

0x8777,	// (0x0003a22f) fep_hwr_write_pane_g4

0x0005,

0xfaf9,	// (0x000415b1) fep_hwr_write_pane_g_ParamLimits

0xfaf9,	// (0x000415b1) fep_hwr_write_pane_g

0x86a3,	// (0x0003a15b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x86a3,	// (0x0003a15b) bg_fep_hwr_candidate_pane_g2

0x878c,	// (0x0003a244) cell_hwr_candidate_pane_ParamLimits

0x878c,	// (0x0003a244) cell_hwr_candidate_pane

0x87ce,	// (0x0003a286) fep_hwr_candidate_pane_g1_ParamLimits

0xc106,	// (0x0003dbbe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc106,	// (0x0003dbbe) bg_popup_fep_shadow_pane_cp2

0xc296,	// (0x0003dd4e) fep_vkb_top_pane_g4_ParamLimits

0xc296,	// (0x0003dd4e) fep_vkb_top_pane_g4

0xc2dc,	// (0x0003dd94) fep_vkb_side_pane_g2_ParamLimits

0xc2dc,	// (0x0003dd94) fep_vkb_side_pane_g2

0x68e5,	// (0x0003839d) list_setting_pane_t4_ParamLimits

0x68e5,	// (0x0003839d) list_setting_pane_t4

0x4732,	// (0x000361ea) list_setting_number_pane_t5_ParamLimits

0x4732,	// (0x000361ea) list_setting_number_pane_t5

0x6f89,	// (0x00038a41) list_double_heading_pane_cp2_ParamLimits

0x6f89,	// (0x00038a41) list_double_heading_pane_cp2

0x2eb2,	// (0x0003496a) list_double_heading_pane_g1_cp2_ParamLimits

0x2eb2,	// (0x0003496a) list_double_heading_pane_g1_cp2

0xc612,	// (0x0003e0ca) list_double_heading_pane_g2_cp2_ParamLimits

0xc612,	// (0x0003e0ca) list_double_heading_pane_g2_cp2

0xc626,	// (0x0003e0de) list_double_heading_pane_t1_cp2_ParamLimits

0xc626,	// (0x0003e0de) list_double_heading_pane_t1_cp2

0xc63c,	// (0x0003e0f4) list_double_heading_pane_t2_cp2_ParamLimits

0xc63c,	// (0x0003e0f4) list_double_heading_pane_t2_cp2

0x1fe4,	// (0x00033a9c) aid_value_unit2

0x5fee,	// (0x00037aa6) popup_preview_fixed_window

0x2186,	// (0x00033c3e) bg_popup_preview_window_pane_cp02

0xc64e,	// (0x0003e106) list_preview_fixed_pane

0xc694,	// (0x0003e14c) list_empty_pane_fp_ParamLimits

0xc694,	// (0x0003e14c) list_empty_pane_fp

0xc694,	// (0x0003e14c) list_single_cale_day_pane_fp_ParamLimits

0xc694,	// (0x0003e14c) list_single_cale_day_pane_fp

0xc694,	// (0x0003e14c) list_single_graphic_heading_pane_fp_ParamLimits

0xc694,	// (0x0003e14c) list_single_graphic_heading_pane_fp

0xc694,	// (0x0003e14c) list_single_graphic_pane_fp_ParamLimits

0xc694,	// (0x0003e14c) list_single_graphic_pane_fp

0xc694,	// (0x0003e14c) list_single_heading_pane_fp_ParamLimits

0xc694,	// (0x0003e14c) list_single_heading_pane_fp

0xc694,	// (0x0003e14c) list_single_pane_fp_ParamLimits

0xc694,	// (0x0003e14c) list_single_pane_fp

0xc6aa,	// (0x0003e162) list_single_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0003e162) list_single_pane_fp_g1

0x4666,	// (0x0003611e) list_single_pane_fp_g2_ParamLimits

0x4666,	// (0x0003611e) list_single_pane_fp_g2

0x4c2d,	// (0x000366e5) list_single_pane_fp_g3_ParamLimits

0x4c2d,	// (0x000366e5) list_single_pane_fp_g3

0xc6b6,	// (0x0003e16e) list_single_pane_fp_g4_ParamLimits

0xc6b6,	// (0x0003e16e) list_single_pane_fp_g4

0x0003,

0xfb60,	// (0x00041618) list_single_pane_fp_g_ParamLimits

0xfb60,	// (0x00041618) list_single_pane_fp_g

0x4c41,	// (0x000366f9) list_single_pane_fp_t1_ParamLimits

0x4c41,	// (0x000366f9) list_single_pane_fp_t1

0x4c58,	// (0x00036710) list_single_graphic_pane_fp_g1_ParamLimits

0x4c58,	// (0x00036710) list_single_graphic_pane_fp_g1

0xc6aa,	// (0x0003e162) list_single_graphic_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0003e162) list_single_graphic_pane_fp_g2

0x4666,	// (0x0003611e) list_single_graphic_pane_fp_g3_ParamLimits

0x4666,	// (0x0003611e) list_single_graphic_pane_fp_g3

0x4c2d,	// (0x000366e5) list_single_graphic_pane_fp_g4_ParamLimits

0x4c2d,	// (0x000366e5) list_single_graphic_pane_fp_g4

0xc6b6,	// (0x0003e16e) list_single_graphic_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0003e16e) list_single_graphic_pane_fp_g5

0x0004,

0xfb69,	// (0x00041621) list_single_graphic_pane_fp_g_ParamLimits

0xfb69,	// (0x00041621) list_single_graphic_pane_fp_g

0x4c64,	// (0x0003671c) list_single_graphic_pane_fp_t1_ParamLimits

0x4c64,	// (0x0003671c) list_single_graphic_pane_fp_t1

0x4c58,	// (0x00036710) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4c58,	// (0x00036710) list_single_graphic_heading_pane_fp_g1

0xc6aa,	// (0x0003e162) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0003e162) list_single_graphic_heading_pane_fp_g2

0x4666,	// (0x0003611e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4666,	// (0x0003611e) list_single_graphic_heading_pane_fp_g3

0x4c2d,	// (0x000366e5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4c2d,	// (0x000366e5) list_single_graphic_heading_pane_fp_g4

0xc6b6,	// (0x0003e16e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0003e16e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb69,	// (0x00041621) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb69,	// (0x00041621) list_single_graphic_heading_pane_fp_g

0x4c7a,	// (0x00036732) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4c7a,	// (0x00036732) list_single_graphic_heading_pane_fp_t1

0x4c90,	// (0x00036748) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4c90,	// (0x00036748) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb74,	// (0x0004162c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb74,	// (0x0004162c) list_single_graphic_heading_pane_fp_t

0x4ca2,	// (0x0003675a) list_single_cale_day_pane_fp_g1_ParamLimits

0x4ca2,	// (0x0003675a) list_single_cale_day_pane_fp_g1

0xc6c2,	// (0x0003e17a) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6c2,	// (0x0003e17a) list_single_cale_day_pane_fp_g2

0x4cda,	// (0x00036792) list_single_cale_day_pane_fp_g3_ParamLimits

0x4cda,	// (0x00036792) list_single_cale_day_pane_fp_g3

0x4d02,	// (0x000367ba) list_single_cale_day_pane_fp_g4_ParamLimits

0x4d02,	// (0x000367ba) list_single_cale_day_pane_fp_g4

0x4d26,	// (0x000367de) list_single_cale_day_pane_fp_g5_ParamLimits

0x4d26,	// (0x000367de) list_single_cale_day_pane_fp_g5

0x0004,

0xfb79,	// (0x00041631) list_single_cale_day_pane_fp_g_ParamLimits

0xfb79,	// (0x00041631) list_single_cale_day_pane_fp_g

0x4d4a,	// (0x00036802) list_single_cale_day_pane_fp_t1_ParamLimits

0x4d4a,	// (0x00036802) list_single_cale_day_pane_fp_t1

0x4d70,	// (0x00036828) list_single_cale_day_pane_fp_t2_ParamLimits

0x4d70,	// (0x00036828) list_single_cale_day_pane_fp_t2

0x4d89,	// (0x00036841) list_single_cale_day_pane_fp_t3_ParamLimits

0x4d89,	// (0x00036841) list_single_cale_day_pane_fp_t3

0x0002,

0xfb84,	// (0x0004163c) list_single_cale_day_pane_fp_t_ParamLimits

0xfb84,	// (0x0004163c) list_single_cale_day_pane_fp_t

0xc6aa,	// (0x0003e162) list_empty_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0003e162) list_empty_pane_fp_g1

0x4da2,	// (0x0003685a) list_empty_pane_fp_t1

0x4db0,	// (0x00036868) list_empty_pane_fp_t2

0x0001,

0xfb8b,	// (0x00041643) list_empty_pane_fp_t

0xc6aa,	// (0x0003e162) list_single_heading_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0003e162) list_single_heading_pane_fp_g1

0x4666,	// (0x0003611e) list_single_heading_pane_fp_g2_ParamLimits

0x4666,	// (0x0003611e) list_single_heading_pane_fp_g2

0x4c2d,	// (0x000366e5) list_single_heading_pane_fp_g3_ParamLimits

0x4c2d,	// (0x000366e5) list_single_heading_pane_fp_g3

0x0002,

0xfb90,	// (0x00041648) list_single_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00041648) list_single_heading_pane_fp_g

0x4dbe,	// (0x00036876) list_single_heading_pane_fp_t1_ParamLimits

0x4dbe,	// (0x00036876) list_single_heading_pane_fp_t1

0x4dd0,	// (0x00036888) list_single_heading_pane_fp_t2_ParamLimits

0x4dd0,	// (0x00036888) list_single_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0004164f) list_single_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0004164f) list_single_heading_pane_fp_t

0x6c59,	// (0x00038711) aid_size_cell_fast

0x2169,	// (0x00033c21) soft_indicator_pane_cp1_t1

0x6c62,	// (0x0003871a) cell_app_pane_cp2_ParamLimits

0x6c62,	// (0x0003871a) cell_app_pane_cp2

0x8610,	// (0x0003a0c8) fep_hwr_candidate_drop_down_list_pane

0x87e8,	// (0x0003a2a0) fep_hwr_candidate_pane_g3_ParamLimits

0x87e8,	// (0x0003a2a0) fep_hwr_candidate_pane_g3

0x3d66,	// (0x0003581e) fep_hwr_candidate_pane_g4_ParamLimits

0x3d66,	// (0x0003581e) fep_hwr_candidate_pane_g4

0x0002,

0xfb06,	// (0x000415be) fep_hwr_candidate_pane_g_ParamLimits

0xfb06,	// (0x000415be) fep_hwr_candidate_pane_g

0xc18b,	// (0x0003dc43) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc18b,	// (0x0003dc43) fep_vkb_candidate_drop_down_list_pane

0xc58e,	// (0x0003e046) fep_vkb_candidate_pane_g3

0xc596,	// (0x0003e04e) fep_vkb_candidate_pane_g4

0x0002,

0xfb33,	// (0x000415eb) fep_vkb_candidate_pane_g

0x8853,	// (0x0003a30b) cell_hwr_candidate_pane_g1_ParamLimits

0x8861,	// (0x0003a319) cell_hwr_candidate_pane_g3_ParamLimits

0x8861,	// (0x0003a319) cell_hwr_candidate_pane_g3

0xc5ad,	// (0x0003e065) cell_hwr_candidate_pane_g4_ParamLimits

0xc5ad,	// (0x0003e065) cell_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x0004160a) cell_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x0004160a) cell_hwr_candidate_pane_g

0xc5ce,	// (0x0003e086) cell_vkb_candidate_pane_g3_ParamLimits

0xc5ce,	// (0x0003e086) cell_vkb_candidate_pane_g3

0xc5e9,	// (0x0003e0a1) cell_vkb_candidate_pane_g4_ParamLimits

0xc5e9,	// (0x0003e0a1) cell_vkb_candidate_pane_g4

0xc6ce,	// (0x0003e186) cell_app_pane_cp2_g1_ParamLimits

0xc6ce,	// (0x0003e186) cell_app_pane_cp2_g1

0xc6ec,	// (0x0003e1a4) cell_app_pane_cp2_g2_ParamLimits

0xc6ec,	// (0x0003e1a4) cell_app_pane_cp2_g2

0x0001,

0xfb9c,	// (0x00041654) cell_app_pane_cp2_g_ParamLimits

0xfb9c,	// (0x00041654) cell_app_pane_cp2_g

0xc6f8,	// (0x0003e1b0) cell_app_pane_cp2_t1_ParamLimits

0xc6f8,	// (0x0003e1b0) cell_app_pane_cp2_t1

0x2412,	// (0x00033eca) grid_highlight_pane_cp1_ParamLimits

0x2412,	// (0x00033eca) grid_highlight_pane_cp1

0x88a0,	// (0x0003a358) cell_hwr_candidate_pane_cp1_ParamLimits

0x88a0,	// (0x0003a358) cell_hwr_candidate_pane_cp1

0x8853,	// (0x0003a30b) fep_hwr_candidate_drop_down_list_pane_g1

0x88bf,	// (0x0003a377) fep_hwr_candidate_drop_down_list_pane_g2

0x88cc,	// (0x0003a384) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x00041659) fep_hwr_candidate_drop_down_list_pane_g

0x88d9,	// (0x0003a391) fep_hwr_candidate_drop_down_list_scroll_pane

0x88e2,	// (0x0003a39a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x88e2,	// (0x0003a39a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x88ef,	// (0x0003a3a7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x88ef,	// (0x0003a3a7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x88fc,	// (0x0003a3b4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x88fc,	// (0x0003a3b4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8909,	// (0x0003a3c1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8909,	// (0x0003a3c1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8924,	// (0x0003a3dc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8924,	// (0x0003a3dc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x893f,	// (0x0003a3f7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x893f,	// (0x0003a3f7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x895a,	// (0x0003a412) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x895a,	// (0x0003a412) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8975,	// (0x0003a42d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8975,	// (0x0003a42d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x00041660) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x00041660) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc70a,	// (0x0003e1c2) cell_vkb_candidate_pane_cp1_ParamLimits

0xc70a,	// (0x0003e1c2) cell_vkb_candidate_pane_cp1

0xc296,	// (0x0003dd4e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc296,	// (0x0003dd4e) fep_vkb_candidate_drop_down_list_pane_g1

0xc72a,	// (0x0003e1e2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc72a,	// (0x0003e1e2) fep_vkb_candidate_drop_down_list_pane_g2

0xc737,	// (0x0003e1ef) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc737,	// (0x0003e1ef) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x00041671) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb9,	// (0x00041671) fep_vkb_candidate_drop_down_list_pane_g

0xc744,	// (0x0003e1fc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc744,	// (0x0003e1fc) fep_vkb_candidate_drop_down_list_scroll_pane

0xc751,	// (0x0003e209) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc751,	// (0x0003e209) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc75e,	// (0x0003e216) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc75e,	// (0x0003e216) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc76a,	// (0x0003e222) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc76a,	// (0x0003e222) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc776,	// (0x0003e22e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc776,	// (0x0003e22e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc797,	// (0x0003e24f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc797,	// (0x0003e24f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7b8,	// (0x0003e270) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7b8,	// (0x0003e270) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7d9,	// (0x0003e291) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7d9,	// (0x0003e291) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7fa,	// (0x0003e2b2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7fa,	// (0x0003e2b2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x00041678) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x00041678) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6108,	// (0x00037bc0) title_pane_g1_ParamLimits

0x6115,	// (0x00037bcd) title_pane_g2_ParamLimits

0xf529,	// (0x00040fe1) title_pane_g_ParamLimits

0x285c,	// (0x00034314) aid_call2_pane

0x2854,	// (0x0003430c) aid_call_pane

0x2864,	// (0x0003431c) popup_clock_analogue_window_g1

0x2864,	// (0x0003431c) popup_clock_analogue_window_g2

0x6f6a,	// (0x00038a22) popup_clock_analogue_window_g3

0x6f73,	// (0x00038a2b) popup_clock_analogue_window_g4

0x1ff6,	// (0x00033aae) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x0004117c) popup_clock_analogue_window_g

0x6f7b,	// (0x00038a33) popup_clock_analogue_window_t1

0x6fc9,	// (0x00038a81) clock_digital_number_pane_ParamLimits

0x6fc9,	// (0x00038a81) clock_digital_number_pane

0x6fd5,	// (0x00038a8d) clock_digital_number_pane_cp02_ParamLimits

0x6fd5,	// (0x00038a8d) clock_digital_number_pane_cp02

0x6fe1,	// (0x00038a99) clock_digital_number_pane_cp03_ParamLimits

0x6fe1,	// (0x00038a99) clock_digital_number_pane_cp03

0x6fed,	// (0x00038aa5) clock_digital_number_pane_cp04_ParamLimits

0x6fed,	// (0x00038aa5) clock_digital_number_pane_cp04

0x6ff9,	// (0x00038ab1) clock_digital_separator_pane_ParamLimits

0x6ff9,	// (0x00038ab1) clock_digital_separator_pane

0x7005,	// (0x00038abd) popup_clock_digital_window_t1_ParamLimits

0x7005,	// (0x00038abd) popup_clock_digital_window_t1

0x1ff6,	// (0x00033aae) clock_digital_number_pane_g1

0x1ff6,	// (0x00033aae) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x00041187) clock_digital_number_pane_g

0x1ff6,	// (0x00033aae) clock_digital_separator_pane_g1

0x1ff6,	// (0x00033aae) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x00041187) clock_digital_separator_pane_g

0x7cef,	// (0x000397a7) aid_fill_nsta_ParamLimits

0x7e3b,	// (0x000398f3) indicator_nsta_pane_ParamLimits

0x7fb4,	// (0x00039a6c) popup_clock_analogue_window

0x7fb4,	// (0x00039a6c) popup_clock_digital_window

0xb9f3,	// (0x0003d4ab) grid_indicator_nsta_pane_ParamLimits

0xba1c,	// (0x0003d4d4) clock_nsta_pane_t2

0x0001,

0xfa86,	// (0x0004153e) clock_nsta_pane_t

0x6e95,	// (0x0003894d) aid_size_max_handle

0x6e9f,	// (0x00038957) aid_size_min_handle

0x2cce,	// (0x00034786) editor_scroll_pane

0xc815,	// (0x0003e2cd) ex_editor_pane

0x2544,	// (0x00033ffc) scroll_pane_cp13

0x23ba,	// (0x00033e72) scroll_pane_cp14

0x2893,	// (0x0003434b) scroll_pane_cp36

0x6f9d,	// (0x00038a55) list_single_graphic_hl_pane_cp2_ParamLimits

0x6f9d,	// (0x00038a55) list_single_graphic_hl_pane_cp2

0xaf94,	// (0x0003ca4c) list_single_graphic_hl_pane_ParamLimits

0xaf94,	// (0x0003ca4c) list_single_graphic_hl_pane

0xc81d,	// (0x0003e2d5) aid_size_min_hl_cp1

0xc826,	// (0x0003e2de) list_highlight_pane_cp34_ParamLimits

0xc826,	// (0x0003e2de) list_highlight_pane_cp34

0xc837,	// (0x0003e2ef) list_single_graphic_hl_pane_g1_ParamLimits

0xc837,	// (0x0003e2ef) list_single_graphic_hl_pane_g1

0x8990,	// (0x0003a448) list_single_graphic_hl_pane_g2_ParamLimits

0x8990,	// (0x0003a448) list_single_graphic_hl_pane_g2

0x8990,	// (0x0003a448) list_single_graphic_hl_pane_g3_ParamLimits

0x8990,	// (0x0003a448) list_single_graphic_hl_pane_g3

0x4816,	// (0x000362ce) list_single_graphic_hl_pane_g4_ParamLimits

0x4816,	// (0x000362ce) list_single_graphic_hl_pane_g4

0x899c,	// (0x0003a454) list_single_graphic_hl_pane_g5_ParamLimits

0x899c,	// (0x0003a454) list_single_graphic_hl_pane_g5

0x0004,

0xfbd1,	// (0x00041689) list_single_graphic_hl_pane_g_ParamLimits

0xfbd1,	// (0x00041689) list_single_graphic_hl_pane_g

0x89b0,	// (0x0003a468) list_single_graphic_hl_pane_t1_ParamLimits

0x89b0,	// (0x0003a468) list_single_graphic_hl_pane_t1

0xc844,	// (0x0003e2fc) aid_size_min_hl_cp2

0xc84d,	// (0x0003e305) list_highlight_pane_cp34_cp2_ParamLimits

0xc84d,	// (0x0003e305) list_highlight_pane_cp34_cp2

0xc837,	// (0x0003e2ef) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc837,	// (0x0003e2ef) list_single_graphic_hl_pane_g1_cp2

0xc85a,	// (0x0003e312) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc85a,	// (0x0003e312) list_single_graphic_hl_pane_g2_cp2

0xc866,	// (0x0003e31e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc866,	// (0x0003e31e) list_single_graphic_hl_pane_g3_cp2

0x2c2d,	// (0x000346e5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2c2d,	// (0x000346e5) list_single_graphic_hl_pane_g4_cp2

0xc874,	// (0x0003e32c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc874,	// (0x0003e32c) list_single_graphic_hl_pane_g5_cp2

0x75e3,	// (0x0003909b) control_pane_g4_ParamLimits

0x75e3,	// (0x0003909b) control_pane_g4

0x2554,	// (0x0003400c) bg_popup_sub_pane_cp10_ParamLimits

0xc030,	// (0x0003dae8) list_choice_list_pane_ParamLimits

0xc03f,	// (0x0003daf7) scroll_pane_cp23

0x2186,	// (0x00033c3e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc64e,	// (0x0003e106) list_preview_fixed_pane_ParamLimits

0xc664,	// (0x0003e11c) list_preview_fixed_pane_cp_ParamLimits

0xc664,	// (0x0003e11c) list_preview_fixed_pane_cp

0xc670,	// (0x0003e128) popup_preview_fixed_window_g1_ParamLimits

0xc670,	// (0x0003e128) popup_preview_fixed_window_g1

0xc67c,	// (0x0003e134) popup_preview_fixed_window_g2_ParamLimits

0xc67c,	// (0x0003e134) popup_preview_fixed_window_g2

0x0002,

0xfb59,	// (0x00041611) popup_preview_fixed_window_g_ParamLimits

0xfb59,	// (0x00041611) popup_preview_fixed_window_g

0x6d71,	// (0x00038829) aid_navi_side_left_pane_ParamLimits

0x6d86,	// (0x0003883e) aid_navi_side_right_pane_ParamLimits

0x6d9e,	// (0x00038856) navi_icon_pane_stacon_ParamLimits

0x6db2,	// (0x0003886a) navi_navi_pane_stacon_ParamLimits

0x6d9e,	// (0x00038856) navi_text_pane_stacon_ParamLimits

0x5ebd,	// (0x00037975) main_text_info_pane

0xc89e,	// (0x0003e356) listscroll_text_info_pane

0xc8a6,	// (0x0003e35e) list_text_info_pane_ParamLimits

0xc8a6,	// (0x0003e35e) list_text_info_pane

0xc8b5,	// (0x0003e36d) scroll_pane_cp24_ParamLimits

0xc8b5,	// (0x0003e36d) scroll_pane_cp24

0xc8d3,	// (0x0003e38b) list_text_info_pane_t1_ParamLimits

0xc8d3,	// (0x0003e38b) list_text_info_pane_t1

0x7776,	// (0x0003922e) popup_fast_swap2_window_ParamLimits

0x7776,	// (0x0003922e) popup_fast_swap2_window

0xc907,	// (0x0003e3bf) aid_size_cell_fast2

0x1fec,	// (0x00033aa4) bg_popup_window_pane_cp17

0xc911,	// (0x0003e3c9) heading_pane_cp2

0xc919,	// (0x0003e3d1) listscroll_fast2_pane

0xc921,	// (0x0003e3d9) grid_fast2_pane

0xc92b,	// (0x0003e3e3) listscroll_fast2_pane_g1

0xc933,	// (0x0003e3eb) listscroll_fast2_pane_g2

0x0001,

0xfbdc,	// (0x00041694) listscroll_fast2_pane_g

0x2544,	// (0x00033ffc) scroll_pane_cp26

0xc93d,	// (0x0003e3f5) cell_fast2_pane_ParamLimits

0xc93d,	// (0x0003e3f5) cell_fast2_pane

0xc952,	// (0x0003e40a) cell_fast2_pane_g1

0xc95b,	// (0x0003e413) cell_fast2_pane_g2

0xc964,	// (0x0003e41c) cell_fast2_pane_g3

0x0002,

0xfbe1,	// (0x00041699) cell_fast2_pane_g

0x22f1,	// (0x00033da9) grid_highlight_pane_cp9

0x773e,	// (0x000391f6) main_eswt_pane_ParamLimits

0x773e,	// (0x000391f6) main_eswt_pane

0xc8ca,	// (0x0003e382) list_single_text_info_pane

0xc96c,	// (0x0003e424) eswt_ctrl_button_pane

0xc96c,	// (0x0003e424) eswt_ctrl_canvas_pane

0xc974,	// (0x0003e42c) eswt_ctrl_combo_pane

0xc96c,	// (0x0003e424) eswt_ctrl_default_pane

0xc96c,	// (0x0003e424) eswt_ctrl_label_pane

0xc97c,	// (0x0003e434) eswt_ctrl_wait_pane

0xc984,	// (0x0003e43c) eswt_shell_pane

0x1fec,	// (0x00033aa4) listscroll_eswt_app_pane

0xc9a4,	// (0x0003e45c) popup_eswt_tasktip_window_ParamLimits

0xc9a4,	// (0x0003e45c) popup_eswt_tasktip_window

0x9a7e,	// (0x0003b536) bg_popup_window_pane_cp18

0xc9bd,	// (0x0003e475) eswt_control_pane_g1_ParamLimits

0xc9bd,	// (0x0003e475) eswt_control_pane_g1

0xc9ca,	// (0x0003e482) eswt_control_pane_g2_ParamLimits

0xc9ca,	// (0x0003e482) eswt_control_pane_g2

0xc9d7,	// (0x0003e48f) eswt_control_pane_g3_ParamLimits

0xc9d7,	// (0x0003e48f) eswt_control_pane_g3

0xc9e4,	// (0x0003e49c) eswt_control_pane_g4_ParamLimits

0xc9e4,	// (0x0003e49c) eswt_control_pane_g4

0x0003,

0xfbe8,	// (0x000416a0) eswt_control_pane_g_ParamLimits

0xfbe8,	// (0x000416a0) eswt_control_pane_g

0x2412,	// (0x00033eca) bg_button_pane_ParamLimits

0x2412,	// (0x00033eca) bg_button_pane

0x2306,	// (0x00033dbe) common_borders_pane_copy2_ParamLimits

0x2306,	// (0x00033dbe) common_borders_pane_copy2

0xc9f1,	// (0x0003e4a9) control_button_pane_g1_ParamLimits

0xc9f1,	// (0x0003e4a9) control_button_pane_g1

0xc9fd,	// (0x0003e4b5) control_button_pane_g2_ParamLimits

0xc9fd,	// (0x0003e4b5) control_button_pane_g2

0xca09,	// (0x0003e4c1) control_button_pane_g3_ParamLimits

0xca09,	// (0x0003e4c1) control_button_pane_g3

0x0002,

0xfbf1,	// (0x000416a9) control_button_pane_g_ParamLimits

0xfbf1,	// (0x000416a9) control_button_pane_g

0xca1d,	// (0x0003e4d5) control_button_pane_t1

0xca2b,	// (0x0003e4e3) control_button_pane_t2

0x0001,

0xfbf8,	// (0x000416b0) control_button_pane_t

0x99f2,	// (0x0003b4aa) bg_button_pane_g1

0x9a02,	// (0x0003b4ba) bg_button_pane_g2

0x99fa,	// (0x0003b4b2) bg_button_pane_g3

0x9a12,	// (0x0003b4ca) bg_button_pane_g4

0x9a0a,	// (0x0003b4c2) bg_button_pane_g5

0x9a1a,	// (0x0003b4d2) bg_button_pane_g6

0x9a22,	// (0x0003b4da) bg_button_pane_g7

0x9a32,	// (0x0003b4ea) bg_button_pane_g8

0x9a2a,	// (0x0003b4e2) bg_button_pane_g9

0x0008,

0xf82d,	// (0x000412e5) bg_button_pane_g

0xbfeb,	// (0x0003daa3) common_borders_pane_ParamLimits

0xbfeb,	// (0x0003daa3) common_borders_pane

0xc9bd,	// (0x0003e475) eswt_control_pane_g1_copy1_ParamLimits

0xc9bd,	// (0x0003e475) eswt_control_pane_g1_copy1

0xc9ca,	// (0x0003e482) eswt_control_pane_g2_copy1_ParamLimits

0xc9ca,	// (0x0003e482) eswt_control_pane_g2_copy1

0xc9d7,	// (0x0003e48f) eswt_control_pane_g3_copy1_ParamLimits

0xc9d7,	// (0x0003e48f) eswt_control_pane_g3_copy1

0xc9e4,	// (0x0003e49c) eswt_control_pane_g4_copy1_ParamLimits

0xc9e4,	// (0x0003e49c) eswt_control_pane_g4_copy1

0xc026,	// (0x0003dade) bg_eswt_ctrl_canvas_pane_g1

0xbfeb,	// (0x0003daa3) common_borders_pane_cp2_ParamLimits

0xbfeb,	// (0x0003daa3) common_borders_pane_cp2

0xbfeb,	// (0x0003daa3) common_borders_pane_cp3_ParamLimits

0xbfeb,	// (0x0003daa3) common_borders_pane_cp3

0xca39,	// (0x0003e4f1) separator_horizontal_pane

0xca41,	// (0x0003e4f9) separator_vertical_pane

0xc9bd,	// (0x0003e475) eswt_control_pane_g1_copy2_ParamLimits

0xc9bd,	// (0x0003e475) eswt_control_pane_g1_copy2

0xc9ca,	// (0x0003e482) eswt_control_pane_g2_copy2_ParamLimits

0xc9ca,	// (0x0003e482) eswt_control_pane_g2_copy2

0xc9d7,	// (0x0003e48f) eswt_control_pane_g3_copy2_ParamLimits

0xc9d7,	// (0x0003e48f) eswt_control_pane_g3_copy2

0xc9e4,	// (0x0003e49c) eswt_control_pane_g4_copy2_ParamLimits

0xc9e4,	// (0x0003e49c) eswt_control_pane_g4_copy2

0x1fec,	// (0x00033aa4) common_borders_pane_cp4

0xca4a,	// (0x0003e502) separator_horizontal_pane_g1

0xca53,	// (0x0003e50b) separator_horizontal_pane_g2

0xca5c,	// (0x0003e514) separator_horizontal_pane_g3

0x0002,

0xfbfd,	// (0x000416b5) separator_horizontal_pane_g

0xc9bd,	// (0x0003e475) eswt_control_pane_g1_copy3_ParamLimits

0xc9bd,	// (0x0003e475) eswt_control_pane_g1_copy3

0xc9ca,	// (0x0003e482) eswt_control_pane_g2_copy3_ParamLimits

0xc9ca,	// (0x0003e482) eswt_control_pane_g2_copy3

0xc9d7,	// (0x0003e48f) eswt_control_pane_g3_copy3_ParamLimits

0xc9d7,	// (0x0003e48f) eswt_control_pane_g3_copy3

0xc9e4,	// (0x0003e49c) eswt_control_pane_g4_copy3_ParamLimits

0xc9e4,	// (0x0003e49c) eswt_control_pane_g4_copy3

0x1fec,	// (0x00033aa4) common_borders_pane_cp5

0xca65,	// (0x0003e51d) separator_vertical_pane_g1

0xca6e,	// (0x0003e526) separator_vertical_pane_g2

0xca77,	// (0x0003e52f) separator_vertical_pane_g3

0x0002,

0xfc04,	// (0x000416bc) separator_vertical_pane_g

0xc9bd,	// (0x0003e475) eswt_control_pane_g1_copy4_ParamLimits

0xc9bd,	// (0x0003e475) eswt_control_pane_g1_copy4

0xc9ca,	// (0x0003e482) eswt_control_pane_g2_copy4_ParamLimits

0xc9ca,	// (0x0003e482) eswt_control_pane_g2_copy4

0xc9d7,	// (0x0003e48f) eswt_control_pane_g3_copy4_ParamLimits

0xc9d7,	// (0x0003e48f) eswt_control_pane_g3_copy4

0xc9e4,	// (0x0003e49c) eswt_control_pane_g4_copy4_ParamLimits

0xc9e4,	// (0x0003e49c) eswt_control_pane_g4_copy4

0xca80,	// (0x0003e538) eswt_ctrl_combo_button_pane

0xca88,	// (0x0003e540) eswt_ctrl_input_pane

0xca90,	// (0x0003e548) popup_choice_list_window_cp70

0xca98,	// (0x0003e550) eswt_ctrl_input_pane_t1

0x1fec,	// (0x00033aa4) input_focus_pane_cp70

0xbfeb,	// (0x0003daa3) bg_button_pane_cp70_ParamLimits

0xbfeb,	// (0x0003daa3) bg_button_pane_cp70

0xcaa6,	// (0x0003e55e) eswt_ctrl_combo_button_pane_g1

0xcaae,	// (0x0003e566) wait_bar_pane_cp70

0x9a7e,	// (0x0003b536) bg_popup_window_pane_cp70_ParamLimits

0x9a7e,	// (0x0003b536) bg_popup_window_pane_cp70

0xcab6,	// (0x0003e56e) popup_eswt_tasktip_window_t1

0xcacc,	// (0x0003e584) wait_bar_pane_cp71_ParamLimits

0xcacc,	// (0x0003e584) wait_bar_pane_cp71

0xcad8,	// (0x0003e590) grid_eswt_app_pane

0x2740,	// (0x000341f8) scroll_pane_cp70

0xcae1,	// (0x0003e599) cell_eswt_app_pane_ParamLimits

0xcae1,	// (0x0003e599) cell_eswt_app_pane

0xcb11,	// (0x0003e5c9) cell_eswt_app_pane_g1_ParamLimits

0xcb11,	// (0x0003e5c9) cell_eswt_app_pane_g1

0xcb40,	// (0x0003e5f8) cell_eswt_app_pane_g2_ParamLimits

0xcb40,	// (0x0003e5f8) cell_eswt_app_pane_g2

0x0001,

0xfc0b,	// (0x000416c3) cell_eswt_app_pane_g_ParamLimits

0xfc0b,	// (0x000416c3) cell_eswt_app_pane_g

0xcb64,	// (0x0003e61c) cell_eswt_app_pane_t1_ParamLimits

0xcb64,	// (0x0003e61c) cell_eswt_app_pane_t1

0xcb96,	// (0x0003e64e) grid_highlight_pane_cp70_ParamLimits

0xcb96,	// (0x0003e64e) grid_highlight_pane_cp70

0x2bc8,	// (0x00034680) set_content_pane_g1

0x7579,	// (0x00039031) status_small_volume_pane

0x89c6,	// (0x0003a47e) status_small_volume_pane_g1

0x89ce,	// (0x0003a486) volume_small2_pane

0x89d7,	// (0x0003a48f) volume_small2_pane_g1

0x89e0,	// (0x0003a498) volume_small2_pane_g2

0x89e9,	// (0x0003a4a1) volume_small2_pane_g3

0x89f2,	// (0x0003a4aa) volume_small2_pane_g4

0x89fb,	// (0x0003a4b3) volume_small2_pane_g5

0x8a04,	// (0x0003a4bc) volume_small2_pane_g6

0x8a0d,	// (0x0003a4c5) volume_small2_pane_g7

0x8a16,	// (0x0003a4ce) volume_small2_pane_g8

0x8a1f,	// (0x0003a4d7) volume_small2_pane_g9

0x8a28,	// (0x0003a4e0) volume_small2_pane_g10

0x0009,

0xfc10,	// (0x000416c8) volume_small2_pane_g

0xc3de,	// (0x0003de96) fep_vkb_top_text_pane_g1_ParamLimits

0xc3f9,	// (0x0003deb1) fep_vkb_top_text_pane_t1_ParamLimits

0xc688,	// (0x0003e140) popup_preview_fixed_window_g3_ParamLimits

0xc688,	// (0x0003e140) popup_preview_fixed_window_g3

0x7c25,	// (0x000396dd) popup_toolbar_trans_pane

0xadbc,	// (0x0003c874) aid_height_set_list_ParamLimits

0xadcd,	// (0x0003c885) aid_size_parent_ParamLimits

0x2554,	// (0x0003400c) list_highlight_pane_cp2_ParamLimits

0x2bc8,	// (0x00034680) set_content_pane_g1_ParamLimits

0xafb3,	// (0x0003ca6b) list_single_image_pane_ParamLimits

0xafb3,	// (0x0003ca6b) list_single_image_pane

0xcba2,	// (0x0003e65a) aid_size_cell_image_ParamLimits

0xcba2,	// (0x0003e65a) aid_size_cell_image

0xcbaf,	// (0x0003e667) grid_single_image_pane_ParamLimits

0xcbaf,	// (0x0003e667) grid_single_image_pane

0x2f09,	// (0x000349c1) list_single_image_pane_g1_ParamLimits

0x2f09,	// (0x000349c1) list_single_image_pane_g1

0xcbbb,	// (0x0003e673) list_single_image_pane_g2_ParamLimits

0xcbbb,	// (0x0003e673) list_single_image_pane_g2

0x0001,

0xfc25,	// (0x000416dd) list_single_image_pane_g_ParamLimits

0xfc25,	// (0x000416dd) list_single_image_pane_g

0xcbcf,	// (0x0003e687) list_single_image_pane_t1_ParamLimits

0xcbcf,	// (0x0003e687) list_single_image_pane_t1

0xcbe5,	// (0x0003e69d) cell_image_list_pane_ParamLimits

0xcbe5,	// (0x0003e69d) cell_image_list_pane

0xcbf9,	// (0x0003e6b1) cell_image_list_pane_g1

0xcc02,	// (0x0003e6ba) cell_image_list_pane_g2

0x0001,

0xfc2a,	// (0x000416e2) cell_image_list_pane_g

0xcc0b,	// (0x0003e6c3) aid_size_cell_tb_trans_pane

0x2412,	// (0x00033eca) bg_tb_trans_pane

0xcc1d,	// (0x0003e6d5) grid_tb_trans_pane

0x99f2,	// (0x0003b4aa) bg_tb_trans_pane_g1

0x9a02,	// (0x0003b4ba) bg_tb_trans_pane_g2

0x99fa,	// (0x0003b4b2) bg_tb_trans_pane_g3

0x9a12,	// (0x0003b4ca) bg_tb_trans_pane_g4

0x9a0a,	// (0x0003b4c2) bg_tb_trans_pane_g5

0x9a32,	// (0x0003b4ea) bg_tb_trans_pane_g6

0x9a2a,	// (0x0003b4e2) bg_tb_trans_pane_g7

0x9a1a,	// (0x0003b4d2) bg_tb_trans_pane_g8

0x9a22,	// (0x0003b4da) bg_tb_trans_pane_g9

0x0008,

0xfc2f,	// (0x000416e7) bg_tb_trans_pane_g

0xcc31,	// (0x0003e6e9) cell_toolbar_trans_pane_ParamLimits

0xcc31,	// (0x0003e6e9) cell_toolbar_trans_pane

0xc026,	// (0x0003dade) cell_toolbar_trans_pane_g1

0xbbf1,	// (0x0003d6a9) list_form2_midp_pane_t1

0xbbff,	// (0x0003d6b7) list_form2_midp_pane_t2

0x0001,

0xfacc,	// (0x00041584) list_form2_midp_pane_t

0xbc0d,	// (0x0003d6c5) scroll_pane_cp51_ParamLimits

0xbdc9,	// (0x0003d881) form2_midp_wait_pane_g1

0xbdd2,	// (0x0003d88a) form2_midp_wait_pane_g2

0xbddb,	// (0x0003d893) form2_midp_wait_pane_g3

0x0002,

0xfae1,	// (0x00041599) form2_midp_wait_pane_g

0x205c,	// (0x00033b14) list_highlight_pane_cp21_ParamLimits

0xbe23,	// (0x0003d8db) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe32,	// (0x0003d8ea) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x8424,	// (0x00039edc) list_single_2graphic_im_pane_ParamLimits

0x8424,	// (0x00039edc) list_single_2graphic_im_pane

0xcc57,	// (0x0003e70f) list_single_2graphic_im_pane_g1_ParamLimits

0xcc57,	// (0x0003e70f) list_single_2graphic_im_pane_g1

0xcc68,	// (0x0003e720) list_single_2graphic_im_pane_g2_ParamLimits

0xcc68,	// (0x0003e720) list_single_2graphic_im_pane_g2

0xcc74,	// (0x0003e72c) list_single_2graphic_im_pane_g3_ParamLimits

0xcc74,	// (0x0003e72c) list_single_2graphic_im_pane_g3

0x0003,

0xfc42,	// (0x000416fa) list_single_2graphic_im_pane_g_ParamLimits

0xfc42,	// (0x000416fa) list_single_2graphic_im_pane_g

0xcc94,	// (0x0003e74c) list_single_2graphic_im_pane_t1_ParamLimits

0xcc94,	// (0x0003e74c) list_single_2graphic_im_pane_t1

0xc694,	// (0x0003e14c) list_single_graphic_2heading_pane_fp_ParamLimits

0xc694,	// (0x0003e14c) list_single_graphic_2heading_pane_fp

0x4c58,	// (0x00036710) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4c58,	// (0x00036710) list_single_graphic_2heading_pane_fp_g1

0xc6aa,	// (0x0003e162) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0003e162) list_single_graphic_2heading_pane_fp_g2

0x4666,	// (0x0003611e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4666,	// (0x0003611e) list_single_graphic_2heading_pane_fp_g3

0x4c2d,	// (0x000366e5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4c2d,	// (0x000366e5) list_single_graphic_2heading_pane_fp_g4

0xc6b6,	// (0x0003e16e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0003e16e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb69,	// (0x00041621) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb69,	// (0x00041621) list_single_graphic_2heading_pane_fp_g

0x4de6,	// (0x0003689e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4de6,	// (0x0003689e) list_single_graphic_2heading_pane_fp_t1

0x4c90,	// (0x00036748) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4c90,	// (0x00036748) list_single_graphic_2heading_pane_fp_t2

0x4dfc,	// (0x000368b4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4dfc,	// (0x000368b4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4b,	// (0x00041703) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4b,	// (0x00041703) list_single_graphic_2heading_pane_fp_t

0xc0b2,	// (0x0003db6a) fep_hwr_write_pane_g5_ParamLimits

0xc0b2,	// (0x0003db6a) fep_hwr_write_pane_g5

0xc0be,	// (0x0003db76) fep_hwr_write_pane_g6_ParamLimits

0xc0be,	// (0x0003db76) fep_hwr_write_pane_g6

0xc984,	// (0x0003e43c) eswt_shell_pane_ParamLimits

0x9a7e,	// (0x0003b536) bg_popup_window_pane_cp18_ParamLimits

0xc9b5,	// (0x0003e46d) heading_pane_cp70

0xcab6,	// (0x0003e56e) popup_eswt_tasktip_window_t1_ParamLimits

0x7d44,	// (0x000397fc) aid_touch_tab_arrow_left

0x7d53,	// (0x0003980b) aid_touch_tab_arrow_right

0x6126,	// (0x00037bde) title_pane_g3_ParamLimits

0x6126,	// (0x00037bde) title_pane_g3

0x23da,	// (0x00033e92) set_value_pane_g1

0x7c25,	// (0x000396dd) popup_toolbar_trans_pane_ParamLimits

0xcc0b,	// (0x0003e6c3) aid_size_cell_tb_trans_pane_ParamLimits

0x2412,	// (0x00033eca) bg_tb_trans_pane_ParamLimits

0xcc1d,	// (0x0003e6d5) grid_tb_trans_pane_ParamLimits

0x2186,	// (0x00033c3e) cont_note_pane_ParamLimits

0x2186,	// (0x00033c3e) cont_note_pane

0x2306,	// (0x00033dbe) cont_snote2_single_text_pane_ParamLimits

0x2306,	// (0x00033dbe) cont_snote2_single_text_pane

0x2306,	// (0x00033dbe) cont_snote2_single_graphic_pane_ParamLimits

0x2306,	// (0x00033dbe) cont_snote2_single_graphic_pane

0xa098,	// (0x0003bb50) cont_note_wait_pane_ParamLimits

0xa098,	// (0x0003bb50) cont_note_wait_pane

0xa098,	// (0x0003bb50) cont_note_image_pane_ParamLimits

0xa098,	// (0x0003bb50) cont_note_image_pane

0xccc5,	// (0x0003e77d) popup_note2_window_g1_ParamLimits

0xccc5,	// (0x0003e77d) popup_note2_window_g1

0xccf6,	// (0x0003e7ae) popup_note2_window_t1_ParamLimits

0xccf6,	// (0x0003e7ae) popup_note2_window_t1

0xcd3b,	// (0x0003e7f3) popup_note2_window_t2_ParamLimits

0xcd3b,	// (0x0003e7f3) popup_note2_window_t2

0xcd80,	// (0x0003e838) popup_note2_window_t3_ParamLimits

0xcd80,	// (0x0003e838) popup_note2_window_t3

0xcdc5,	// (0x0003e87d) popup_note2_window_t4_ParamLimits

0xcdc5,	// (0x0003e87d) popup_note2_window_t4

0x220a,	// (0x00033cc2) popup_note2_window_t5_ParamLimits

0x220a,	// (0x00033cc2) popup_note2_window_t5

0x0004,

0xfc57,	// (0x0004170f) popup_note2_window_t_ParamLimits

0xfc57,	// (0x0004170f) popup_note2_window_t

0xcdf4,	// (0x0003e8ac) popup_note2_image_window_g1_ParamLimits

0xcdf4,	// (0x0003e8ac) popup_note2_image_window_g1

0xce00,	// (0x0003e8b8) popup_note2_image_window_g2_ParamLimits

0xce00,	// (0x0003e8b8) popup_note2_image_window_g2

0x0001,

0xfc62,	// (0x0004171a) popup_note2_image_window_g_ParamLimits

0xfc62,	// (0x0004171a) popup_note2_image_window_g

0xce12,	// (0x0003e8ca) popup_note2_image_window_t1_ParamLimits

0xce12,	// (0x0003e8ca) popup_note2_image_window_t1

0xce2a,	// (0x0003e8e2) popup_note2_image_window_t2_ParamLimits

0xce2a,	// (0x0003e8e2) popup_note2_image_window_t2

0xce42,	// (0x0003e8fa) popup_note2_image_window_t3_ParamLimits

0xce42,	// (0x0003e8fa) popup_note2_image_window_t3

0x0002,

0xfc67,	// (0x0004171f) popup_note2_image_window_t_ParamLimits

0xfc67,	// (0x0004171f) popup_note2_image_window_t

0xa0a6,	// (0x0003bb5e) popup_note2_wait_window_g1_ParamLimits

0xa0a6,	// (0x0003bb5e) popup_note2_wait_window_g1

0xa0b2,	// (0x0003bb6a) popup_note2_wait_window_g2_ParamLimits

0xa0b2,	// (0x0003bb6a) popup_note2_wait_window_g2

0xa0be,	// (0x0003bb76) popup_note2_wait_window_g3_ParamLimits

0xa0be,	// (0x0003bb76) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x000412c7) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x000412c7) popup_note2_wait_window_g

0xce5e,	// (0x0003e916) popup_note2_wait_window_t1_ParamLimits

0xce5e,	// (0x0003e916) popup_note2_wait_window_t1

0xce7c,	// (0x0003e934) popup_note2_wait_window_t2_ParamLimits

0xce7c,	// (0x0003e934) popup_note2_wait_window_t2

0xce9a,	// (0x0003e952) popup_note2_wait_window_t3_ParamLimits

0xce9a,	// (0x0003e952) popup_note2_wait_window_t3

0xceac,	// (0x0003e964) popup_note2_wait_window_t4_ParamLimits

0xceac,	// (0x0003e964) popup_note2_wait_window_t4

0x0003,

0xfc6e,	// (0x00041726) popup_note2_wait_window_t_ParamLimits

0xfc6e,	// (0x00041726) popup_note2_wait_window_t

0xcebe,	// (0x0003e976) wait_bar2_pane_ParamLimits

0xcebe,	// (0x0003e976) wait_bar2_pane

0xced6,	// (0x0003e98e) popup_snote2_single_text_window_g1_ParamLimits

0xced6,	// (0x0003e98e) popup_snote2_single_text_window_g1

0xcefe,	// (0x0003e9b6) popup_snote2_single_text_window_t1_ParamLimits

0xcefe,	// (0x0003e9b6) popup_snote2_single_text_window_t1

0xcf4a,	// (0x0003ea02) popup_snote2_single_text_window_t2_ParamLimits

0xcf4a,	// (0x0003ea02) popup_snote2_single_text_window_t2

0xcf96,	// (0x0003ea4e) popup_snote2_single_text_window_t3_ParamLimits

0xcf96,	// (0x0003ea4e) popup_snote2_single_text_window_t3

0xcfd7,	// (0x0003ea8f) popup_snote2_single_text_window_t4_ParamLimits

0xcfd7,	// (0x0003ea8f) popup_snote2_single_text_window_t4

0xd00d,	// (0x0003eac5) popup_snote2_single_text_window_t5_ParamLimits

0xd00d,	// (0x0003eac5) popup_snote2_single_text_window_t5

0x0004,

0xfc77,	// (0x0004172f) popup_snote2_single_text_window_t_ParamLimits

0xfc77,	// (0x0004172f) popup_snote2_single_text_window_t

0xd038,	// (0x0003eaf0) popup_snote2_single_graphic_window_g1_ParamLimits

0xd038,	// (0x0003eaf0) popup_snote2_single_graphic_window_g1

0xd060,	// (0x0003eb18) popup_snote2_single_graphic_window_g2_ParamLimits

0xd060,	// (0x0003eb18) popup_snote2_single_graphic_window_g2

0x0001,

0xfc82,	// (0x0004173a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc82,	// (0x0004173a) popup_snote2_single_graphic_window_g

0xd088,	// (0x0003eb40) popup_snote2_single_graphic_window_t1_ParamLimits

0xd088,	// (0x0003eb40) popup_snote2_single_graphic_window_t1

0xd0d4,	// (0x0003eb8c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0d4,	// (0x0003eb8c) popup_snote2_single_graphic_window_t2

0xcf96,	// (0x0003ea4e) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf96,	// (0x0003ea4e) popup_snote2_single_graphic_window_t3

0xcfd7,	// (0x0003ea8f) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfd7,	// (0x0003ea8f) popup_snote2_single_graphic_window_t4

0xd00d,	// (0x0003eac5) popup_snote2_single_graphic_window_t5_ParamLimits

0xd00d,	// (0x0003eac5) popup_snote2_single_graphic_window_t5

0x0004,

0xfc87,	// (0x0004173f) popup_snote2_single_graphic_window_t_ParamLimits

0xfc87,	// (0x0004173f) popup_snote2_single_graphic_window_t

0xbaca,	// (0x0003d582) clock_nsta_pane_cp2_t1

0xbaca,	// (0x0003d582) clock_nsta_pane_cp2_t2

0x0001,

0xfaa2,	// (0x0004155a) clock_nsta_pane_cp2_t

0x6a19,	// (0x000384d1) form_field_data_wide_pane_g1_ParamLimits

0x2420,	// (0x00033ed8) form_field_data_wide_pane_g2_ParamLimits

0x2420,	// (0x00033ed8) form_field_data_wide_pane_g2

0x242c,	// (0x00033ee4) form_field_data_wide_pane_g3_ParamLimits

0x242c,	// (0x00033ee4) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x000410ff) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x000410ff) form_field_data_wide_pane_g

0xb9a6,	// (0x0003d45e) grid_touch_3_pane_ParamLimits

0xb9a6,	// (0x0003d45e) grid_touch_3_pane

0xd120,	// (0x0003ebd8) cell_touch_3_pane_ParamLimits

0xd120,	// (0x0003ebd8) cell_touch_3_pane

0xc026,	// (0x0003dade) cell_touch_3_pane_g1

0xc026,	// (0x0003dade) cell_touch_3_pane_g2

0x0001,

0xfb27,	// (0x000415df) cell_touch_3_pane_g

0x223c,	// (0x00033cf4) cont_query_data_pane

0x2244,	// (0x00033cfc) cont_query_data_pane_cp1

0xd14e,	// (0x0003ec06) button_value_adjust_pane_cp7

0xd156,	// (0x0003ec0e) query_popup_pane_cp3

0x28c5,	// (0x0003437d) bg_popup_sub_pane_cp22_ParamLimits

0x707f,	// (0x00038b37) navi_navi_volume_pane_cp2

0x7097,	// (0x00038b4f) popup_side_volume_key_window_g2

0x70a3,	// (0x00038b5b) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x00041195) popup_side_volume_key_window_g

0x70bd,	// (0x00038b75) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x0004119c) popup_side_volume_key_window_t

0x7337,	// (0x00038def) popup_side_volume_key_window_ParamLimits

0x680f,	// (0x000382c7) list_double_graphic_pane_g4_ParamLimits

0x680f,	// (0x000382c7) list_double_graphic_pane_g4

0x8469,	// (0x00039f21) list_single_2heading_msg_pane_ParamLimits

0x8469,	// (0x00039f21) list_single_2heading_msg_pane

0x8a31,	// (0x0003a4e9) list_single_2heading_msg_pane_g1_ParamLimits

0x8a31,	// (0x0003a4e9) list_single_2heading_msg_pane_g1

0x45a1,	// (0x00036059) list_single_2heading_msg_pane_g2_ParamLimits

0x45a1,	// (0x00036059) list_single_2heading_msg_pane_g2

0x49ae,	// (0x00036466) list_single_2heading_msg_pane_g3_ParamLimits

0x49ae,	// (0x00036466) list_single_2heading_msg_pane_g3

0x4e1c,	// (0x000368d4) list_single_2heading_msg_pane_g4_ParamLimits

0x4e1c,	// (0x000368d4) list_single_2heading_msg_pane_g4

0x0003,

0xfc92,	// (0x0004174a) list_single_2heading_msg_pane_g_ParamLimits

0xfc92,	// (0x0004174a) list_single_2heading_msg_pane_g

0x8a3d,	// (0x0003a4f5) list_single_2heading_msg_pane_t1_ParamLimits

0x8a3d,	// (0x0003a4f5) list_single_2heading_msg_pane_t1

0x8a65,	// (0x0003a51d) list_single_2heading_msg_pane_t2_ParamLimits

0x8a65,	// (0x0003a51d) list_single_2heading_msg_pane_t2

0x8a99,	// (0x0003a551) list_single_2heading_msg_pane_t3_ParamLimits

0x8a99,	// (0x0003a551) list_single_2heading_msg_pane_t3

0x4e34,	// (0x000368ec) list_single_2heading_msg_pane_t4_ParamLimits

0x4e34,	// (0x000368ec) list_single_2heading_msg_pane_t4

0x0003,

0xfc9b,	// (0x00041753) list_single_2heading_msg_pane_t_ParamLimits

0xfc9b,	// (0x00041753) list_single_2heading_msg_pane_t

0x200a,	// (0x00033ac2) title_pane_g4_ParamLimits

0x200a,	// (0x00033ac2) title_pane_g4

0x6cc2,	// (0x0003877a) title_pane_stacon_g3_ParamLimits

0x6cc2,	// (0x0003877a) title_pane_stacon_g3

0xcc88,	// (0x0003e740) list_single_2graphic_im_pane_g4_ParamLimits

0xcc88,	// (0x0003e740) list_single_2graphic_im_pane_g4

0xaadf,	// (0x0003c597) popup_side_volume_key_window_cp

0xb2fc,	// (0x0003cdb4) main_idle_act2_pane_t1

0x8038,	// (0x00039af0) toolbar_button_pane_g10

0x66e1,	// (0x00038199) popup_toolbar_window_cp1

0xbabb,	// (0x0003d573) clock_nsta_pane_cp_t1

0xbabb,	// (0x0003d573) clock_nsta_pane_cp_t2

0x0001,

0xfa9d,	// (0x00041555) clock_nsta_pane_cp_t

0x707f,	// (0x00038b37) navi_navi_volume_pane_cp2_ParamLimits

0x708b,	// (0x00038b43) popup_side_volume_key_window_g1_ParamLimits

0x7097,	// (0x00038b4f) popup_side_volume_key_window_g2_ParamLimits

0x70a3,	// (0x00038b5b) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x00041195) popup_side_volume_key_window_g_ParamLimits

0x85fc,	// (0x0003a0b4) fep_hwr_aid_pane

0x86a3,	// (0x0003a15b) bg_fep_hwr_top_pane_g4_ParamLimits

0xc082,	// (0x0003db3a) fep_hwr_top_pane_g1_ParamLimits

0xc094,	// (0x0003db4c) fep_hwr_top_pane_g2_ParamLimits

0x86c3,	// (0x0003a17b) fep_hwr_top_pane_g3_ParamLimits

0xfaf2,	// (0x000415aa) fep_hwr_top_pane_g_ParamLimits

0x86d8,	// (0x0003a190) fep_hwr_top_text_pane_ParamLimits

0xa8a2,	// (0x0003c35a) aid_touch_tab_arrow_arrow_2

0xa8ab,	// (0x0003c363) aid_touch_tab_arrow_left_2

0x8610,	// (0x0003a0c8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8647,	// (0x0003a0ff) fep_hwr_prediction_pane

0xc1ed,	// (0x0003dca5) fep_vkb_prediction_pane

0xc2ea,	// (0x0003dda2) fep_vkb_side_pane_g3_ParamLimits

0xc2ea,	// (0x0003dda2) fep_vkb_side_pane_g3

0x8853,	// (0x0003a30b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x88bf,	// (0x0003a377) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x88cc,	// (0x0003a384) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba1,	// (0x00041659) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8ad2,	// (0x0003a58a) fep_hwr_prediction_pane_g1

0x8adc,	// (0x0003a594) fep_hwr_prediction_pane_g2

0x8ae4,	// (0x0003a59c) fep_hwr_prediction_pane_g3

0x8aec,	// (0x0003a5a4) fep_hwr_prediction_pane_g4

0x0003,

0xfca4,	// (0x0004175c) fep_hwr_prediction_pane_g

0xd17b,	// (0x0003ec33) fep_vkb_prediction_pane_g1

0xd185,	// (0x0003ec3d) fep_vkb_prediction_pane_g2

0xd18d,	// (0x0003ec45) fep_vkb_prediction_pane_g3

0xd195,	// (0x0003ec4d) fep_vkb_prediction_pane_g4

0x0003,

0xfcad,	// (0x00041765) fep_vkb_prediction_pane_g

0x836b,	// (0x00039e23) slider_set_pane_g3

0x837f,	// (0x00039e37) slider_set_pane_g4

0x8397,	// (0x00039e4f) slider_set_pane_g5

0x836b,	// (0x00039e23) slider_set_pane_g6

0x83ad,	// (0x00039e65) slider_set_pane_g7

0xaf2e,	// (0x0003c9e6) slider_form_pane_g3

0xaf37,	// (0x0003c9ef) slider_form_pane_g4

0xaf3f,	// (0x0003c9f7) slider_form_pane_g5

0xaf2e,	// (0x0003c9e6) slider_form_pane_g6

0xaf47,	// (0x0003c9ff) slider_form_pane_g7

0xb5a8,	// (0x0003d060) slider_set_pane_vc_g3

0xb5b1,	// (0x0003d069) slider_set_pane_vc_g4

0xb5ba,	// (0x0003d072) slider_set_pane_vc_g5

0xb5a8,	// (0x0003d060) slider_set_pane_vc_g6

0xb5c3,	// (0x0003d07b) slider_set_pane_vc_g7

0xb779,	// (0x0003d231) slider_form_pane_vc_g1

0xb782,	// (0x0003d23a) slider_form_pane_vc_g2

0xb78b,	// (0x0003d243) slider_form_pane_vc_g3

0xb779,	// (0x0003d231) slider_form_pane_vc_g4

0xb794,	// (0x0003d24c) slider_form_pane_vc_g5

0x0004,

0xfa6f,	// (0x00041527) slider_form_pane_vc_g

0x5ebd,	// (0x00037975) main_idle_act3_pane

0xd19d,	// (0x0003ec55) ai3_links_pane

0xd1a6,	// (0x0003ec5e) popup_ai3_data_window_ParamLimits

0xd1a6,	// (0x0003ec5e) popup_ai3_data_window

0x1fec,	// (0x00033aa4) grid_ai3_links_pane

0xd1be,	// (0x0003ec76) cell_ai3_links_pane_ParamLimits

0xd1be,	// (0x0003ec76) cell_ai3_links_pane

0xd1d6,	// (0x0003ec8e) bg_popup_sub_pane_cp11

0xd1e3,	// (0x0003ec9b) cell_ai3_links_pane_g1

0x1fec,	// (0x00033aa4) bg_popup_sub_pane_cp12

0xd208,	// (0x0003ecc0) heading_ai3_data_pane

0xd210,	// (0x0003ecc8) list_ai3_gene_pane

0xd21c,	// (0x0003ecd4) popup_ai3_data_window_g1

0xd224,	// (0x0003ecdc) heading_ai3_data_pane_g1

0xd22c,	// (0x0003ece4) heading_ai3_data_pane_t1

0xd23a,	// (0x0003ecf2) list_double_ai3_gene_pane_ParamLimits

0xd23a,	// (0x0003ecf2) list_double_ai3_gene_pane

0xd247,	// (0x0003ecff) list_single_ai3_gene_pane_ParamLimits

0xd247,	// (0x0003ecff) list_single_ai3_gene_pane

0xbfeb,	// (0x0003daa3) list_highlight_pane_cp7_ParamLimits

0xbfeb,	// (0x0003daa3) list_highlight_pane_cp7

0xd254,	// (0x0003ed0c) list_single_a13_gene_pane_t1_ParamLimits

0xd254,	// (0x0003ed0c) list_single_a13_gene_pane_t1

0xd26b,	// (0x0003ed23) list_single_ai3_gene_pane_g1

0xd274,	// (0x0003ed2c) list_single_ai3_gene_pane_g2

0x0001,

0xfcb6,	// (0x0004176e) list_single_ai3_gene_pane_g

0xd27c,	// (0x0003ed34) list_double_ai3_gene_pane_g1_ParamLimits

0xd27c,	// (0x0003ed34) list_double_ai3_gene_pane_g1

0xd288,	// (0x0003ed40) list_double_ai3_gene_pane_t1_ParamLimits

0xd288,	// (0x0003ed40) list_double_ai3_gene_pane_t1

0xd2a4,	// (0x0003ed5c) list_double_ai3_gene_pane_t2_ParamLimits

0xd2a4,	// (0x0003ed5c) list_double_ai3_gene_pane_t2

0xd2b9,	// (0x0003ed71) list_double_ai3_gene_pane_t3_ParamLimits

0xd2b9,	// (0x0003ed71) list_double_ai3_gene_pane_t3

0x0002,

0xfcbb,	// (0x00041773) list_double_ai3_gene_pane_t_ParamLimits

0xfcbb,	// (0x00041773) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4e12,	// (0x000368ca) aid_size_min_col_2

0xd167,	// (0x0003ec1f) aid_size_min_msg_ParamLimits

0xd167,	// (0x0003ec1f) aid_size_min_msg

0xc3ea,	// (0x0003dea2) fep_vkb_top_text_pane_g2_ParamLimits

0xc3ea,	// (0x0003dea2) fep_vkb_top_text_pane_g2

0x0001,

0xfb22,	// (0x000415da) fep_vkb_top_text_pane_g_ParamLimits

0xfb22,	// (0x000415da) fep_vkb_top_text_pane_g

0x5ebd,	// (0x00037975) main_hc_apps_shell_pane

0xd2d6,	// (0x0003ed8e) grid_hc_apps_pane_ParamLimits

0xd2d6,	// (0x0003ed8e) grid_hc_apps_pane

0xd2e8,	// (0x0003eda0) list_hc_apps_pane

0xd2f0,	// (0x0003eda8) scroll_pane_cp37_ParamLimits

0xd2f0,	// (0x0003eda8) scroll_pane_cp37

0xd2fc,	// (0x0003edb4) cell_hc_apps_pane_ParamLimits

0xd2fc,	// (0x0003edb4) cell_hc_apps_pane

0xd3aa,	// (0x0003ee62) cell_hc_apps_pane_g1_ParamLimits

0xd3aa,	// (0x0003ee62) cell_hc_apps_pane_g1

0xd3da,	// (0x0003ee92) cell_hc_apps_pane_g2_ParamLimits

0xd3da,	// (0x0003ee92) cell_hc_apps_pane_g2

0xd3f6,	// (0x0003eeae) cell_hc_apps_pane_g3_ParamLimits

0xd3f6,	// (0x0003eeae) cell_hc_apps_pane_g3

0x0002,

0xfcc2,	// (0x0004177a) cell_hc_apps_pane_g_ParamLimits

0xfcc2,	// (0x0004177a) cell_hc_apps_pane_g

0xd418,	// (0x0003eed0) cell_hc_apps_pane_t1_ParamLimits

0xd418,	// (0x0003eed0) cell_hc_apps_pane_t1

0x2186,	// (0x00033c3e) grid_highlight_pane_cp10_ParamLimits

0x2186,	// (0x00033c3e) grid_highlight_pane_cp10

0xd458,	// (0x0003ef10) list_single_hc_apps_pane_ParamLimits

0xd458,	// (0x0003ef10) list_single_hc_apps_pane

0xd4bb,	// (0x0003ef73) list_single_hc_apps_pane_g1

0x8af4,	// (0x0003a5ac) list_single_hc_apps_pane_g2

0x0001,

0xfcc9,	// (0x00041781) list_single_hc_apps_pane_g

0x8b0d,	// (0x0003a5c5) list_single_hc_apps_pane_g2_copy1

0x8b29,	// (0x0003a5e1) list_single_hc_apps_pane_t1

0x205c,	// (0x00033b14) bg_set_opt_pane_cp_ParamLimits

0x61d6,	// (0x00037c8e) setting_slider_pane_t1_ParamLimits

0x61ef,	// (0x00037ca7) setting_slider_pane_t2_ParamLimits

0x6209,	// (0x00037cc1) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00040ff1) setting_slider_pane_t_ParamLimits

0x6221,	// (0x00037cd9) slider_set_pane_ParamLimits

0x75f7,	// (0x000390af) control_pane_g5_ParamLimits

0x75f7,	// (0x000390af) control_pane_g5

0xad81,	// (0x0003c839) slider_set_pane_g1_ParamLimits

0x835f,	// (0x00039e17) slider_set_pane_g2_ParamLimits

0x836b,	// (0x00039e23) slider_set_pane_g3_ParamLimits

0x837f,	// (0x00039e37) slider_set_pane_g4_ParamLimits

0x8397,	// (0x00039e4f) slider_set_pane_g5_ParamLimits

0x836b,	// (0x00039e23) slider_set_pane_g6_ParamLimits

0x83ad,	// (0x00039e65) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x000413e3) slider_set_pane_g_ParamLimits

0x2b73,	// (0x0003462b) navi_icon_text_pane_ParamLimits

0x7d05,	// (0x000397bd) aid_fill_nsta_2_ParamLimits

0x7d44,	// (0x000397fc) aid_touch_tab_arrow_left_ParamLimits

0x7d53,	// (0x0003980b) aid_touch_tab_arrow_right_ParamLimits

0x7dc0,	// (0x00039878) clock_nsta_pane_ParamLimits

0xa884,	// (0x0003c33c) navi_icon_pane_g1_ParamLimits

0xa890,	// (0x0003c348) navi_text_pane_t1_ParamLimits

0xbbcb,	// (0x0003d683) navi_icon_text_pane_g1_ParamLimits

0xbbd7,	// (0x0003d68f) navi_icon_text_pane_t1_ParamLimits

0xd4bb,	// (0x0003ef73) list_single_hc_apps_pane_g1_ParamLimits

0x8af4,	// (0x0003a5ac) list_single_hc_apps_pane_g2_ParamLimits

0xfcc9,	// (0x00041781) list_single_hc_apps_pane_g_ParamLimits

0x8b0d,	// (0x0003a5c5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8b29,	// (0x0003a5e1) list_single_hc_apps_pane_t1_ParamLimits

0x601a,	// (0x00037ad2) popup_toolbar2_fixed_window_ParamLimits

0x601a,	// (0x00037ad2) popup_toolbar2_fixed_window

0x7c1b,	// (0x000396d3) popup_toolbar2_float_window

0x1fec,	// (0x00033aa4) bg_popup_sub_pane_cp27

0xd4d4,	// (0x0003ef8c) grid_toolbar2_float_pane

0x1fec,	// (0x00033aa4) bg_popup_sub_pane_cp26

0xd4d4,	// (0x0003ef8c) grid_toolbar2_fixed_pane

0xd4dc,	// (0x0003ef94) cell_toolbar2_fixed_pane_ParamLimits

0xd4dc,	// (0x0003ef94) cell_toolbar2_fixed_pane

0xd4ec,	// (0x0003efa4) cell_toolbar2_fixed_pane_g1

0x7aed,	// (0x000395a5) toolbar2_fixed_button_pane

0x99f2,	// (0x0003b4aa) toolbar2_fixed_button_pane_g1

0x9a02,	// (0x0003b4ba) toolbar2_fixed_button_pane_g2

0x99fa,	// (0x0003b4b2) toolbar2_fixed_button_pane_g3

0x9a12,	// (0x0003b4ca) toolbar2_fixed_button_pane_g4

0x9a0a,	// (0x0003b4c2) toolbar2_fixed_button_pane_g5

0x9a1a,	// (0x0003b4d2) toolbar2_fixed_button_pane_g6

0x9a22,	// (0x0003b4da) toolbar2_fixed_button_pane_g7

0x9a32,	// (0x0003b4ea) toolbar2_fixed_button_pane_g8

0x9a2a,	// (0x0003b4e2) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x000412e5) toolbar2_fixed_button_pane_g

0xd4f5,	// (0x0003efad) cell_toolbar2_float_pane_ParamLimits

0xd4f5,	// (0x0003efad) cell_toolbar2_float_pane

0xd506,	// (0x0003efbe) cell_toolbar2_float_pane_g1

0x7aed,	// (0x000395a5) toolbar2_fixed_button_pane_cp

0xc154,	// (0x0003dc0c) fep_vkb_accented_list_pane_ParamLimits

0xc154,	// (0x0003dc0c) fep_vkb_accented_list_pane

0x8833,	// (0x0003a2eb) bg_popup_fep_shadow_pane_g9

0x2cce,	// (0x00034786) bg_popup_fep_shadow_pane_cp3

0x252b,	// (0x00033fe3) list_accented_list_pane

0xd50f,	// (0x0003efc7) list_single_accented_list_pane_ParamLimits

0xd50f,	// (0x0003efc7) list_single_accented_list_pane

0x2cce,	// (0x00034786) list_highlight_pane_cp10

0xd520,	// (0x0003efd8) list_single_accented_list_pane_t1

0x7b6b,	// (0x00039623) popup_slider_window_ParamLimits

0x7b6b,	// (0x00039623) popup_slider_window

0xd15e,	// (0x0003ec16) aid_indentation_list_msg

0xd5de,	// (0x0003f096) bg_popup_window_pane_cp19

0xd646,	// (0x0003f0fe) popup_slider_window_g1

0xd662,	// (0x0003f11a) popup_slider_window_g2

0xd67e,	// (0x0003f136) popup_slider_window_g3

0x0005,

0xfcce,	// (0x00041786) popup_slider_window_g

0xd6e4,	// (0x0003f19c) popup_slider_window_t1

0xd758,	// (0x0003f210) small_volume_slider_vertical_pane

0xc026,	// (0x0003dade) small_volume_slider_vertical_pane_g1

0xc026,	// (0x0003dade) small_volume_slider_vertical_pane_g2

0xd774,	// (0x0003f22c) small_volume_slider_vertical_pane_g3

0x0002,

0xfce0,	// (0x00041798) small_volume_slider_vertical_pane_g

0x5de0,	// (0x00037898) area_side_right_pane_ParamLimits

0x5de0,	// (0x00037898) area_side_right_pane

0x8b57,	// (0x0003a60f) aid_size_side_button_ParamLimits

0x8b57,	// (0x0003a60f) aid_size_side_button

0x8b6b,	// (0x0003a623) grid_sctrl_middle_pane_ParamLimits

0x8b6b,	// (0x0003a623) grid_sctrl_middle_pane

0x8b8a,	// (0x0003a642) sctrl_sk_bottom_pane

0x8b9b,	// (0x0003a653) sctrl_sk_top_pane

0x8bad,	// (0x0003a665) aid_touch_sctrl_top

0x8bba,	// (0x0003a672) bg_sctrl_sk_pane_ParamLimits

0x8bba,	// (0x0003a672) bg_sctrl_sk_pane

0x8bc8,	// (0x0003a680) sctrl_sk_top_pane_g1

0x8bd5,	// (0x0003a68d) sctrl_sk_top_pane_t1

0x8bad,	// (0x0003a665) aid_touch_sctrl_bottom

0x8bba,	// (0x0003a672) bg_sctrl_sk_pane_cp_ParamLimits

0x8bba,	// (0x0003a672) bg_sctrl_sk_pane_cp

0x8bf0,	// (0x0003a6a8) sctrl_sk_bottom_pane_g1

0x8bd5,	// (0x0003a68d) sctrl_sk_bottom_pane_t1

0x8bf9,	// (0x0003a6b1) cell_sctrl_middle_pane_ParamLimits

0x8bf9,	// (0x0003a6b1) cell_sctrl_middle_pane

0x8c14,	// (0x0003a6cc) aid_touch_sctrl_middle_ParamLimits

0x8c14,	// (0x0003a6cc) aid_touch_sctrl_middle

0x8c26,	// (0x0003a6de) bg_sctrl_middle_pane_ParamLimits

0x8c26,	// (0x0003a6de) bg_sctrl_middle_pane

0x8853,	// (0x0003a30b) cell_sctrl_middle_pane_g1_ParamLimits

0x8853,	// (0x0003a30b) cell_sctrl_middle_pane_g1

0x8c34,	// (0x0003a6ec) cell_sctrl_middle_pane_g2_ParamLimits

0x8c34,	// (0x0003a6ec) cell_sctrl_middle_pane_g2

0x0001,

0xfcec,	// (0x000417a4) cell_sctrl_middle_pane_g_ParamLimits

0xfcec,	// (0x000417a4) cell_sctrl_middle_pane_g

0x99f2,	// (0x0003b4aa) bg_sctrl_middle_pane_g1

0x99fa,	// (0x0003b4b2) bg_sctrl_middle_pane_g2

0x9a02,	// (0x0003b4ba) bg_sctrl_middle_pane_g3

0x9a0a,	// (0x0003b4c2) bg_sctrl_middle_pane_g4

0x9a12,	// (0x0003b4ca) bg_sctrl_middle_pane_g5

0x9a1a,	// (0x0003b4d2) bg_sctrl_middle_pane_g6

0x9a22,	// (0x0003b4da) bg_sctrl_middle_pane_g7

0x9a2a,	// (0x0003b4e2) bg_sctrl_middle_pane_g8

0x0007,

0xfcf1,	// (0x000417a9) bg_sctrl_middle_pane_g

0x9a32,	// (0x0003b4ea) bg_sctrl_middle_pane_g8_copy1

0x99f2,	// (0x0003b4aa) bg_sctrl_sk_pane_g1

0x9a02,	// (0x0003b4ba) bg_sctrl_sk_pane_g2

0x99fa,	// (0x0003b4b2) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x000412e5) bg_sctrl_sk_pane_g

0x2354,	// (0x00033e0c) aid_size_touch_scroll_bar

0x9a12,	// (0x0003b4ca) bg_sctrl_sk_pane_g4

0x9a0a,	// (0x0003b4c2) bg_sctrl_sk_pane_g5

0x9a1a,	// (0x0003b4d2) bg_sctrl_sk_pane_g6

0x9a22,	// (0x0003b4da) bg_sctrl_sk_pane_g7

0x9a32,	// (0x0003b4ea) bg_sctrl_sk_pane_g8

0x9a2a,	// (0x0003b4e2) bg_sctrl_sk_pane_g9

0x77d4,	// (0x0003928c) popup_fep_china_hwr2_fs_candidate_window

0x77de,	// (0x00039296) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x77de,	// (0x00039296) popup_fep_china_hwr2_fs_control_window

0x8853,	// (0x0003a30b) sctrl_sk_top_pane_g2

0x0001,

0xfce7,	// (0x0004179f) sctrl_sk_top_pane_g

0xd77d,	// (0x0003f235) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd77d,	// (0x0003f235) aid_fep_china_hwr2_fs_cell

0xd78f,	// (0x0003f247) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd78f,	// (0x0003f247) bg_popup_fep_shadow_pane_cp4

0xd7a6,	// (0x0003f25e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7a6,	// (0x0003f25e) bg_popup_fep_shadow_pane_cp5

0xd7b8,	// (0x0003f270) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7b8,	// (0x0003f270) popup_fep_china_hwr2_fs_control_bar_grid

0xd7c8,	// (0x0003f280) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7d0,	// (0x0003f288) aid_fep_china_hwr2_fs_candi_cell

0x1fec,	// (0x00033aa4) bg_popup_fep_shadow_pane_cp6

0xd7da,	// (0x0003f292) popup_fep_china_hwr2_fs_candidate_grid

0xd7e4,	// (0x0003f29c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7e4,	// (0x0003f29c) cell_fep_china_hwr2_fs_funtion_grid

0xc026,	// (0x0003dade) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7fc,	// (0x0003f2b4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7fc,	// (0x0003f2b4) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd80a,	// (0x0003f2c2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd80a,	// (0x0003f2c2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd02,	// (0x000417ba) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd02,	// (0x000417ba) cell_fep_china_hwr2_fs_funtion_grid_g

0xd820,	// (0x0003f2d8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd820,	// (0x0003f2d8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd835,	// (0x0003f2ed) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd835,	// (0x0003f2ed) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd07,	// (0x000417bf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd07,	// (0x000417bf) cell_fep_china_hwr2_fs_funtion_grid_t

0xd851,	// (0x0003f309) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd859,	// (0x0003f311) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd861,	// (0x0003f319) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0c,	// (0x000417c4) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd869,	// (0x0003f321) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd869,	// (0x0003f321) cell_fep_china_hwr2_fs_candidate_grid

0xd882,	// (0x0003f33a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd88a,	// (0x0003f342) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc026,	// (0x0003dade) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc026,	// (0x0003dade) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb27,	// (0x000415df) cell_fep_china_hwr2_fs_candidate_grid_g

0xd892,	// (0x0003f34a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7dd3,	// (0x0003988b) clock_nsta_pane_cp_24_ParamLimits

0x7dd3,	// (0x0003988b) clock_nsta_pane_cp_24

0x7e51,	// (0x00039909) indicator_nsta_pane_cp_24_ParamLimits

0x7e51,	// (0x00039909) indicator_nsta_pane_cp_24

0xa700,	// (0x0003c1b8) heading_pane_g1

0x0001,

0xf892,	// (0x0004134a) heading_pane_g

0xb145,	// (0x0003cbfd) grid_sct_catagory_button_pane

0xb175,	// (0x0003cc2d) scroll_pane_cp5_ParamLimits

0xbc19,	// (0x0003d6d1) button_value_adjust_pane_cp5_ParamLimits

0xbc19,	// (0x0003d6d1) button_value_adjust_pane_cp5

0xbcf8,	// (0x0003d7b0) form2_midp_time_pane_ParamLimits

0xd8a0,	// (0x0003f358) cell_sct_catagory_button_pane_ParamLimits

0xd8a0,	// (0x0003f358) cell_sct_catagory_button_pane

0xbfeb,	// (0x0003daa3) bg_button_pane_cp01_ParamLimits

0xbfeb,	// (0x0003daa3) bg_button_pane_cp01

0xc026,	// (0x0003dade) cell_sct_catagory_button_pane_g1

0x7baa,	// (0x00039662) popup_tb_extension_window

0xd8b2,	// (0x0003f36a) aid_size_cell_ext_ParamLimits

0xd8b2,	// (0x0003f36a) aid_size_cell_ext

0x2186,	// (0x00033c3e) bg_tb_trans_pane_cp1_ParamLimits

0x2186,	// (0x00033c3e) bg_tb_trans_pane_cp1

0xd8d2,	// (0x0003f38a) grid_tb_ext_pane_ParamLimits

0xd8d2,	// (0x0003f38a) grid_tb_ext_pane

0xd902,	// (0x0003f3ba) cell_tb_ext_pane_ParamLimits

0xd902,	// (0x0003f3ba) cell_tb_ext_pane

0xd919,	// (0x0003f3d1) cell_tb_ext_pane_g1_ParamLimits

0xd919,	// (0x0003f3d1) cell_tb_ext_pane_g1

0xd936,	// (0x0003f3ee) cell_tb_ext_pane_t1

0x2186,	// (0x00033c3e) list_highlight_pane_cp11_ParamLimits

0x2186,	// (0x00033c3e) list_highlight_pane_cp11

0x6039,	// (0x00037af1) popup_uni_indicator_window_ParamLimits

0x6039,	// (0x00037af1) popup_uni_indicator_window

0x2412,	// (0x00033eca) bg_popup_sub_pane_cp14

0xd952,	// (0x0003f40a) list_uniindi_pane

0xd95e,	// (0x0003f416) uniindi_top_pane

0x2186,	// (0x00033c3e) bg_uniindi_top_pane

0xd97d,	// (0x0003f435) uniindi_top_pane_g1

0xd993,	// (0x0003f44b) uniindi_top_pane_g2

0x0003,

0xfd13,	// (0x000417cb) uniindi_top_pane_g

0xd9bd,	// (0x0003f475) uniindi_top_pane_t1

0xd9e7,	// (0x0003f49f) list_single_uniindi_pane_ParamLimits

0xd9e7,	// (0x0003f49f) list_single_uniindi_pane

0xc026,	// (0x0003dade) bg_uniindi_top_pane_g1

0xd9fa,	// (0x0003f4b2) list_single_uniindi_pane_g1

0xda0d,	// (0x0003f4c5) list_single_uniindi_pane_t1

0x5ebd,	// (0x00037975) control_bg_pane

0xda32,	// (0x0003f4ea) bg_sctrl_sk_pane_cp1

0xda3b,	// (0x0003f4f3) bg_sctrl_sk_pane_cp2

0xda44,	// (0x0003f4fc) control_bg_pane_g1

0xda4d,	// (0x0003f505) control_bg_pane_g2

0x0001,

0xfd1c,	// (0x000417d4) control_bg_pane_g

0xba5f,	// (0x0003d517) cell_indicator_nsta_pane_g1_ParamLimits

0xba6d,	// (0x0003d525) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8b,	// (0x00041543) cell_indicator_nsta_pane_g_ParamLimits

0x4c1a,	// (0x000366d2) form2_midp_time_pane_t1_ParamLimits

0x773e,	// (0x000391f6) main_idle_act4_pane_ParamLimits

0x773e,	// (0x000391f6) main_idle_act4_pane

0x7baa,	// (0x00039662) popup_tb_extension_window_ParamLimits

0xd8f2,	// (0x0003f3aa) tb_ext_find_pane_ParamLimits

0xd8f2,	// (0x0003f3aa) tb_ext_find_pane

0xda56,	// (0x0003f50e) ai_gene_pane_1_cp1

0x2d4f,	// (0x00034807) ai_gene_pane_2_cp1

0xda5e,	// (0x0003f516) list_single_idle_plugin_calendar_pane

0xda67,	// (0x0003f51f) list_single_idle_plugin_notification_pane

0xda70,	// (0x0003f528) list_single_idle_plugin_player_pane

0xda79,	// (0x0003f531) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda79,	// (0x0003f531) list_single_idle_plugin_shortcut_pane

0xda9b,	// (0x0003f553) main_idle_act4_pane_t1

0xdaad,	// (0x0003f565) main_idle_act4_pane_t2

0x0001,

0xfd21,	// (0x000417d9) main_idle_act4_pane_t

0xdabf,	// (0x0003f577) middle_sk_idle_act4_pane_ParamLimits

0xdabf,	// (0x0003f577) middle_sk_idle_act4_pane

0xdad5,	// (0x0003f58d) popup_clock_digital_analogue_window_cp2

0xdaef,	// (0x0003f5a7) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaef,	// (0x0003f5a7) shortcut_wheel_idle_act4_pane

0xc026,	// (0x0003dade) shortcut_wheel_idle_act4_pane_g1

0xc026,	// (0x0003dade) shortcut_wheel_idle_act4_pane_g2

0xc026,	// (0x0003dade) shortcut_wheel_idle_act4_pane_g3

0xc026,	// (0x0003dade) shortcut_wheel_idle_act4_pane_g4

0xc026,	// (0x0003dade) shortcut_wheel_idle_act4_pane_g5

0xdb03,	// (0x0003f5bb) shortcut_wheel_idle_act4_pane_g6

0xdb0b,	// (0x0003f5c3) shortcut_wheel_idle_act4_pane_g7

0xdb13,	// (0x0003f5cb) shortcut_wheel_idle_act4_pane_g8

0xdb1b,	// (0x0003f5d3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd26,	// (0x000417de) shortcut_wheel_idle_act4_pane_g

0xc296,	// (0x0003dd4e) middle_sk_idle_act4_pane_g1_ParamLimits

0xc296,	// (0x0003dd4e) middle_sk_idle_act4_pane_g1

0xdb7f,	// (0x0003f637) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb7f,	// (0x0003f637) middle_sk_idle_act4_pane_g2

0x0001,

0xfd49,	// (0x00041801) middle_sk_idle_act4_pane_g_ParamLimits

0xfd49,	// (0x00041801) middle_sk_idle_act4_pane_g

0xdb8b,	// (0x0003f643) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb8b,	// (0x0003f643) middle_sk_idle_act4_pane_t1

0xdba8,	// (0x0003f660) grid_ai_shortcut_pane_ParamLimits

0xdba8,	// (0x0003f660) grid_ai_shortcut_pane

0xdbc1,	// (0x0003f679) list_highlight_pane_cp16_ParamLimits

0xdbc1,	// (0x0003f679) list_highlight_pane_cp16

0xdbce,	// (0x0003f686) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbce,	// (0x0003f686) list_single_idle_plugin_shortcut_pane_g1

0xdbda,	// (0x0003f692) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbda,	// (0x0003f692) list_single_idle_plugin_shortcut_pane_g2

0xdbf2,	// (0x0003f6aa) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbf2,	// (0x0003f6aa) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4e,	// (0x00041806) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4e,	// (0x00041806) list_single_idle_plugin_shortcut_pane_g

0xdc05,	// (0x0003f6bd) cell_ai_shortcut_pane_ParamLimits

0xdc05,	// (0x0003f6bd) cell_ai_shortcut_pane

0xdc29,	// (0x0003f6e1) cell_ai_shortcut_pane_g1_ParamLimits

0xdc29,	// (0x0003f6e1) cell_ai_shortcut_pane_g1

0xda56,	// (0x0003f50e) ai_gene_pane_1_cp2

0xdc4b,	// (0x0003f703) ai_gene_pane_2_cp2

0xdc53,	// (0x0003f70b) list_highlight_pane_cp15

0xdc5c,	// (0x0003f714) list_single_idle_plugin_calendar_pane_g1

0xdc53,	// (0x0003f70b) list_highlight_pane_cp17

0xdc64,	// (0x0003f71c) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc6c,	// (0x0003f724) list_single_idle_plugin_player_pane_g1

0xb39e,	// (0x0003ce56) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd55,	// (0x0004180d) list_single_idle_plugin_player_pane_g

0xdc74,	// (0x0003f72c) list_single_idle_plugin_player_pane_t1

0xdc82,	// (0x0003f73a) list_single_idle_plugin_player_pane_t2

0xdc90,	// (0x0003f748) list_single_idle_plugin_player_pane_t3

0xdc9e,	// (0x0003f756) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5a,	// (0x00041812) list_single_idle_plugin_player_pane_t

0xdcac,	// (0x0003f764) wait_bar_pane_cp15

0xdcb4,	// (0x0003f76c) grid_ai_notification_pane

0xb39e,	// (0x0003ce56) list_single_idle_plugin_notification_pane_g1

0xdcbd,	// (0x0003f775) cell_ai_notification_pane_ParamLimits

0xdcbd,	// (0x0003f775) cell_ai_notification_pane

0xdcca,	// (0x0003f782) cell_ai_notification_pane_g1

0xdcd2,	// (0x0003f78a) cell_ai_notification_pane_t1

0xdce0,	// (0x0003f798) tb_ext_find_button_pane

0xdce8,	// (0x0003f7a0) tb_ext_find_pane_g1

0xdcf0,	// (0x0003f7a8) tb_ext_find_pane_t1

0x2864,	// (0x0003431c) tb_ext_find_button_pane_g1

0xdcfe,	// (0x0003f7b6) tb_ext_find_button_pane_g2

0x0001,

0xfd63,	// (0x0004181b) tb_ext_find_button_pane_g

0xda9b,	// (0x0003f553) main_idle_act4_pane_t1_ParamLimits

0xdaad,	// (0x0003f565) main_idle_act4_pane_t2_ParamLimits

0xfd21,	// (0x000417d9) main_idle_act4_pane_t_ParamLimits

0xdad5,	// (0x0003f58d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdae3,	// (0x0003f59b) sat_plugin_idle_act4_pane_ParamLimits

0xdae3,	// (0x0003f59b) sat_plugin_idle_act4_pane

0xdd07,	// (0x0003f7bf) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd07,	// (0x0003f7bf) sat_plugin_idle_act4_pane_t1

0xdd1a,	// (0x0003f7d2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd1a,	// (0x0003f7d2) sat_plugin_idle_act4_pane_t2

0xdd2d,	// (0x0003f7e5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd2d,	// (0x0003f7e5) sat_plugin_idle_act4_pane_t3

0xdd40,	// (0x0003f7f8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd40,	// (0x0003f7f8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd68,	// (0x00041820) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd68,	// (0x00041820) sat_plugin_idle_act4_pane_t

0x5f82,	// (0x00037a3a) popup_battery_window_ParamLimits

0x5f82,	// (0x00037a3a) popup_battery_window

0x2186,	// (0x00033c3e) bg_popup_sub_pane_cp25_ParamLimits

0x2186,	// (0x00033c3e) bg_popup_sub_pane_cp25

0xdd53,	// (0x0003f80b) popup_battery_window_g1_ParamLimits

0xdd53,	// (0x0003f80b) popup_battery_window_g1

0xdd5f,	// (0x0003f817) popup_battery_window_t1_ParamLimits

0xdd5f,	// (0x0003f817) popup_battery_window_t1

0xdd71,	// (0x0003f829) popup_battery_window_t2_ParamLimits

0xdd71,	// (0x0003f829) popup_battery_window_t2

0x0001,

0xfd71,	// (0x00041829) popup_battery_window_t_ParamLimits

0xfd71,	// (0x00041829) popup_battery_window_t

0x738b,	// (0x00038e43) midp_canvas_pane_ParamLimits

0x7404,	// (0x00038ebc) midp_keypad_pane_ParamLimits

0x7404,	// (0x00038ebc) midp_keypad_pane

0x2554,	// (0x0003400c) main_midp_pane_ParamLimits

0xbad9,	// (0x0003d591) signal_pane_g2_cp_ParamLimits

0xdd8e,	// (0x0003f846) aid_size_cell_midp_keypad_ParamLimits

0xdd8e,	// (0x0003f846) aid_size_cell_midp_keypad

0xdda8,	// (0x0003f860) midp_keyp_game_grid_pane_ParamLimits

0xdda8,	// (0x0003f860) midp_keyp_game_grid_pane

0xddc8,	// (0x0003f880) midp_keyp_rocker_pane_ParamLimits

0xddc8,	// (0x0003f880) midp_keyp_rocker_pane

0xde01,	// (0x0003f8b9) midp_keyp_sk_left_pane_ParamLimits

0xde01,	// (0x0003f8b9) midp_keyp_sk_left_pane

0xde5b,	// (0x0003f913) midp_keyp_sk_right_pane_ParamLimits

0xde5b,	// (0x0003f913) midp_keyp_sk_right_pane

0x1fec,	// (0x00033aa4) bg_button_pane_cp03

0xdeb5,	// (0x0003f96d) midp_keyp_sk_left_pane_g1

0x1fec,	// (0x00033aa4) bg_button_pane_cp04

0xdeb5,	// (0x0003f96d) midp_keyp_sk_right_pane_g1

0xc026,	// (0x0003dade) midp_keyp_rocker_pane_g1

0xdebe,	// (0x0003f976) keyp_game_cell_pane_ParamLimits

0xdebe,	// (0x0003f976) keyp_game_cell_pane

0x1fec,	// (0x00033aa4) bg_button_pane_cp02

0xded1,	// (0x0003f989) keyp_game_cell_pane_g1

0x5fb8,	// (0x00037a70) popup_fep_vkb2_window_ParamLimits

0x5fb8,	// (0x00037a70) popup_fep_vkb2_window

0x8c52,	// (0x0003a70a) aid_size_cell_vkb2_ParamLimits

0x8c52,	// (0x0003a70a) aid_size_cell_vkb2

0x8c9e,	// (0x0003a756) popup_fep_vkb2_window_g1_ParamLimits

0x8c9e,	// (0x0003a756) popup_fep_vkb2_window_g1

0x8ce6,	// (0x0003a79e) vkb2_area_bottom_pane_ParamLimits

0x8ce6,	// (0x0003a79e) vkb2_area_bottom_pane

0x8d32,	// (0x0003a7ea) vkb2_area_keypad_pane_ParamLimits

0x8d32,	// (0x0003a7ea) vkb2_area_keypad_pane

0x8d74,	// (0x0003a82c) vkb2_area_top_pane_ParamLimits

0x8d74,	// (0x0003a82c) vkb2_area_top_pane

0x8df3,	// (0x0003a8ab) vkb2_top_entry_pane_ParamLimits

0x8df3,	// (0x0003a8ab) vkb2_top_entry_pane

0x8e1d,	// (0x0003a8d5) vkb2_top_grid_left_pane_ParamLimits

0x8e1d,	// (0x0003a8d5) vkb2_top_grid_left_pane

0x8e3c,	// (0x0003a8f4) vkb2_top_grid_right_pane_ParamLimits

0x8e3c,	// (0x0003a8f4) vkb2_top_grid_right_pane

0x8e5b,	// (0x0003a913) vkb2_cell_keypad_pane_ParamLimits

0x8e5b,	// (0x0003a913) vkb2_cell_keypad_pane

0x8f2c,	// (0x0003a9e4) vkb2_area_bottom_grid_pane_ParamLimits

0x8f2c,	// (0x0003a9e4) vkb2_area_bottom_grid_pane

0x8f52,	// (0x0003aa0a) vkb2_area_bottom_pane_g1_ParamLimits

0x8f52,	// (0x0003aa0a) vkb2_area_bottom_pane_g1

0x8f76,	// (0x0003aa2e) vkb2_area_bottom_pane_g2_ParamLimits

0x8f76,	// (0x0003aa2e) vkb2_area_bottom_pane_g2

0x8fa4,	// (0x0003aa5c) vkb2_area_bottom_pane_g3_ParamLimits

0x8fa4,	// (0x0003aa5c) vkb2_area_bottom_pane_g3

0x0002,

0xfd76,	// (0x0004182e) vkb2_area_bottom_pane_g_ParamLimits

0xfd76,	// (0x0004182e) vkb2_area_bottom_pane_g

0x9005,	// (0x0003aabd) vkb2_top_cell_left_pane_ParamLimits

0x9005,	// (0x0003aabd) vkb2_top_cell_left_pane

0xdee2,	// (0x0003f99a) vkb2_top_entry_pane_g1_ParamLimits

0xdee2,	// (0x0003f99a) vkb2_top_entry_pane_g1

0xdef0,	// (0x0003f9a8) vkb2_top_entry_pane_t1_ParamLimits

0xdef0,	// (0x0003f9a8) vkb2_top_entry_pane_t1

0xdf22,	// (0x0003f9da) vkb2_top_entry_pane_t2_ParamLimits

0xdf22,	// (0x0003f9da) vkb2_top_entry_pane_t2

0xdf54,	// (0x0003fa0c) vkb2_top_entry_pane_t3_ParamLimits

0xdf54,	// (0x0003fa0c) vkb2_top_entry_pane_t3

0x0002,

0xfd7d,	// (0x00041835) vkb2_top_entry_pane_t_ParamLimits

0xfd7d,	// (0x00041835) vkb2_top_entry_pane_t

0x9052,	// (0x0003ab0a) vkb2_top_grid_right_pane_g1_ParamLimits

0x9052,	// (0x0003ab0a) vkb2_top_grid_right_pane_g1

0x9068,	// (0x0003ab20) vkb2_top_grid_right_pane_g2_ParamLimits

0x9068,	// (0x0003ab20) vkb2_top_grid_right_pane_g2

0x9080,	// (0x0003ab38) vkb2_top_grid_right_pane_g3_ParamLimits

0x9080,	// (0x0003ab38) vkb2_top_grid_right_pane_g3

0x9098,	// (0x0003ab50) vkb2_top_grid_right_pane_g4_ParamLimits

0x9098,	// (0x0003ab50) vkb2_top_grid_right_pane_g4

0x0003,

0xfd84,	// (0x0004183c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd84,	// (0x0004183c) vkb2_top_grid_right_pane_g

0x90ae,	// (0x0003ab66) vkb2_top_cell_left_pane_g1

0x90c5,	// (0x0003ab7d) vkb2_cell_keypad_pane_g1_ParamLimits

0x90c5,	// (0x0003ab7d) vkb2_cell_keypad_pane_g1

0xdf78,	// (0x0003fa30) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf78,	// (0x0003fa30) vkb2_cell_keypad_pane_t1

0x90d3,	// (0x0003ab8b) vkb2_cell_bottom_grid_pane_ParamLimits

0x90d3,	// (0x0003ab8b) vkb2_cell_bottom_grid_pane

0x910c,	// (0x0003abc4) vkb2_cell_bottom_grid_pane_g1

0xdb23,	// (0x0003f5db) aid_call2_pane_cp02

0xdb2b,	// (0x0003f5e3) aid_call_pane_cp02

0xdb33,	// (0x0003f5eb) clock_digital_number_pane_cp10

0xdb3b,	// (0x0003f5f3) clock_digital_number_pane_cp11

0xdb43,	// (0x0003f5fb) clock_digital_number_pane_cp12

0xdb4b,	// (0x0003f603) clock_digital_number_pane_cp13

0xdb53,	// (0x0003f60b) clock_digital_separator_pane_cp10

0x2864,	// (0x0003431c) popup_clock_digital_analogue_window_cp2_g1

0x2864,	// (0x0003431c) popup_clock_digital_analogue_window_cp2_g2

0xdb5b,	// (0x0003f613) popup_clock_digital_analogue_window_cp2_g3

0x2864,	// (0x0003431c) popup_clock_digital_analogue_window_cp2_g4

0xdb5b,	// (0x0003f613) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd39,	// (0x000417f1) popup_clock_digital_analogue_window_cp2_g

0xdb63,	// (0x0003f61b) popup_clock_digital_analogue_window_cp2_t1

0xdb71,	// (0x0003f629) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd44,	// (0x000417fc) popup_clock_digital_analogue_window_cp2_t

0xc026,	// (0x0003dade) clock_digital_number_pane_cp10_g1

0xc026,	// (0x0003dade) clock_digital_number_pane_cp10_g2

0x0001,

0xfb27,	// (0x000415df) clock_digital_number_pane_cp10_g

0xc026,	// (0x0003dade) clock_digital_separator_pane_cp10_g1

0xc026,	// (0x0003dade) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb27,	// (0x000415df) clock_digital_separator_pane_cp10_g

0xd99f,	// (0x0003f457) uniindi_top_pane_g3

0xd9b0,	// (0x0003f468) uniindi_top_pane_g4

0x8ee6,	// (0x0003a99e) vkb2_row_keypad_pane_ParamLimits

0x8ee6,	// (0x0003a99e) vkb2_row_keypad_pane

0x912c,	// (0x0003abe4) vkb2_cell_t_keypad_pane_ParamLimits

0x912c,	// (0x0003abe4) vkb2_cell_t_keypad_pane

0x913c,	// (0x0003abf4) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x913c,	// (0x0003abf4) vkb2_cell_t_keypad_pane_cp08

0x914f,	// (0x0003ac07) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x914f,	// (0x0003ac07) vkb2_cell_t_keypad_pane_cp09

0x9163,	// (0x0003ac1b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9163,	// (0x0003ac1b) vkb2_cell_t_keypad_pane_cp01

0x9174,	// (0x0003ac2c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9174,	// (0x0003ac2c) vkb2_cell_t_keypad_pane_cp02

0x9185,	// (0x0003ac3d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9185,	// (0x0003ac3d) vkb2_cell_t_keypad_pane_cp03

0x9196,	// (0x0003ac4e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9196,	// (0x0003ac4e) vkb2_cell_t_keypad_pane_cp04

0x91a7,	// (0x0003ac5f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91a7,	// (0x0003ac5f) vkb2_cell_t_keypad_pane_cp05

0x91b8,	// (0x0003ac70) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x91b8,	// (0x0003ac70) vkb2_cell_t_keypad_pane_cp06

0x91c9,	// (0x0003ac81) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x91c9,	// (0x0003ac81) vkb2_cell_t_keypad_pane_cp07

0x91da,	// (0x0003ac92) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x91da,	// (0x0003ac92) vkb2_cell_t_keypad_pane_cp10

0x8853,	// (0x0003a30b) vkb2_cell_t_keypad_pane_g1

0xdf8f,	// (0x0003fa47) vkb2_cell_t_keypad_pane_t1

0x5ebd,	// (0x00037975) popup_grid_graphic2_window

0xdfa1,	// (0x0003fa59) aid_size_cell_graphic2_ParamLimits

0xdfa1,	// (0x0003fa59) aid_size_cell_graphic2

0xdfd9,	// (0x0003fa91) bg_popup_window_pane_cp21_ParamLimits

0xdfd9,	// (0x0003fa91) bg_popup_window_pane_cp21

0xdfe7,	// (0x0003fa9f) graphic2_pages_pane_ParamLimits

0xdfe7,	// (0x0003fa9f) graphic2_pages_pane

0xe02d,	// (0x0003fae5) grid_graphic2_control_pane_ParamLimits

0xe02d,	// (0x0003fae5) grid_graphic2_control_pane

0xe06b,	// (0x0003fb23) grid_graphic2_pane_ParamLimits

0xe06b,	// (0x0003fb23) grid_graphic2_pane

0xe0df,	// (0x0003fb97) cell_graphic2_pane

0x5ebd,	// (0x00037975) main_comp_mode_pane

0xd210,	// (0x0003ecc8) list_ai3_gene_pane_ParamLimits

0xd5de,	// (0x0003f096) bg_popup_window_pane_cp19_ParamLimits

0xd5ea,	// (0x0003f0a2) bg_touch_area_indi_pane_ParamLimits

0xd5ea,	// (0x0003f0a2) bg_touch_area_indi_pane

0xd600,	// (0x0003f0b8) bg_touch_area_indi_pane_cp01_ParamLimits

0xd600,	// (0x0003f0b8) bg_touch_area_indi_pane_cp01

0xd616,	// (0x0003f0ce) bg_touch_area_indi_pane_cp02_ParamLimits

0xd616,	// (0x0003f0ce) bg_touch_area_indi_pane_cp02

0xd62c,	// (0x0003f0e4) bg_touch_area_indi_pane_cp03_ParamLimits

0xd62c,	// (0x0003f0e4) bg_touch_area_indi_pane_cp03

0xd646,	// (0x0003f0fe) popup_slider_window_g1_ParamLimits

0xd662,	// (0x0003f11a) popup_slider_window_g2_ParamLimits

0xd67e,	// (0x0003f136) popup_slider_window_g3_ParamLimits

0xfcce,	// (0x00041786) popup_slider_window_g_ParamLimits

0xd6e4,	// (0x0003f19c) popup_slider_window_t1_ParamLimits

0xd758,	// (0x0003f210) small_volume_slider_vertical_pane_ParamLimits

0xe0df,	// (0x0003fb97) cell_graphic2_pane_ParamLimits

0xe12e,	// (0x0003fbe6) bg_button_pane_cp10_ParamLimits

0xe12e,	// (0x0003fbe6) bg_button_pane_cp10

0xe141,	// (0x0003fbf9) bg_button_pane_cp11_ParamLimits

0xe141,	// (0x0003fbf9) bg_button_pane_cp11

0xe154,	// (0x0003fc0c) graphic2_pages_pane_g1_ParamLimits

0xe154,	// (0x0003fc0c) graphic2_pages_pane_g1

0xe16f,	// (0x0003fc27) graphic2_pages_pane_g2_ParamLimits

0xe16f,	// (0x0003fc27) graphic2_pages_pane_g2

0x0001,

0xfd92,	// (0x0004184a) graphic2_pages_pane_g_ParamLimits

0xfd92,	// (0x0004184a) graphic2_pages_pane_g

0xe187,	// (0x0003fc3f) graphic2_pages_pane_t1_ParamLimits

0xe187,	// (0x0003fc3f) graphic2_pages_pane_t1

0xe19f,	// (0x0003fc57) cell_graphic2_control_pane_ParamLimits

0xe19f,	// (0x0003fc57) cell_graphic2_control_pane

0xe1bd,	// (0x0003fc75) cell_graphic2_pane_g1_ParamLimits

0xe1bd,	// (0x0003fc75) cell_graphic2_pane_g1

0xe1ca,	// (0x0003fc82) cell_graphic2_pane_g2_ParamLimits

0xe1ca,	// (0x0003fc82) cell_graphic2_pane_g2

0xe1d7,	// (0x0003fc8f) cell_graphic2_pane_g3_ParamLimits

0xe1d7,	// (0x0003fc8f) cell_graphic2_pane_g3

0xe1e4,	// (0x0003fc9c) cell_graphic2_pane_g4_ParamLimits

0xe1e4,	// (0x0003fc9c) cell_graphic2_pane_g4

0xe1f1,	// (0x0003fca9) cell_graphic2_pane_g5_ParamLimits

0xe1f1,	// (0x0003fca9) cell_graphic2_pane_g5

0x0004,

0xfd97,	// (0x0004184f) cell_graphic2_pane_g_ParamLimits

0xfd97,	// (0x0004184f) cell_graphic2_pane_g

0xe20a,	// (0x0003fcc2) cell_graphic2_pane_t1_ParamLimits

0xe20a,	// (0x0003fcc2) cell_graphic2_pane_t1

0x9a7e,	// (0x0003b536) grid_highlight_pane_cp11_ParamLimits

0x9a7e,	// (0x0003b536) grid_highlight_pane_cp11

0x2186,	// (0x00033c3e) bg_button_pane_cp05

0xe240,	// (0x0003fcf8) cell_graphic2_control_pane_g1

0xc026,	// (0x0003dade) bg_touch_area_indi_pane_g1

0xe268,	// (0x0003fd20) aid_cmod_rocker_key_size

0xe272,	// (0x0003fd2a) aid_cmode_itu_key_size

0xe27c,	// (0x0003fd34) main_cmode_video_pane

0xe286,	// (0x0003fd3e) main_comp_mode_itu_pane

0xe292,	// (0x0003fd4a) main_comp_mode_rocker_pane

0xe29e,	// (0x0003fd56) cell_cmode_rocker_pane_ParamLimits

0xe29e,	// (0x0003fd56) cell_cmode_rocker_pane

0xe2b0,	// (0x0003fd68) cell_cmode_itu_pane_ParamLimits

0xe2b0,	// (0x0003fd68) cell_cmode_itu_pane

0x2412,	// (0x00033eca) bg_button_pane_cp06_ParamLimits

0x2412,	// (0x00033eca) bg_button_pane_cp06

0xc296,	// (0x0003dd4e) cell_cmode_rocker_pane_g1_ParamLimits

0xc296,	// (0x0003dd4e) cell_cmode_rocker_pane_g1

0xd7fc,	// (0x0003f2b4) cell_cmode_rocker_pane_g2_ParamLimits

0xd7fc,	// (0x0003f2b4) cell_cmode_rocker_pane_g2

0x0001,

0xfda7,	// (0x0004185f) cell_cmode_rocker_pane_g_ParamLimits

0xfda7,	// (0x0004185f) cell_cmode_rocker_pane_g

0x1fec,	// (0x00033aa4) bg_button_pane_cp07

0xe2c5,	// (0x0003fd7d) cell_cmode_itu_pane_g1

0xe2ce,	// (0x0003fd86) cell_cmode_itu_pane_t1

0xe2dc,	// (0x0003fd94) cell_cmode_itu_pane_t2

0x0001,

0xfdac,	// (0x00041864) cell_cmode_itu_pane_t

0xda22,	// (0x0003f4da) aid_touch_ctrl_left

0xda2a,	// (0x0003f4e2) aid_touch_ctrl_right

0x1fec,	// (0x00033aa4) compa_mode_pane

0xe2ea,	// (0x0003fda2) aid_cmod_rocker_key_size_cp

0xe2f4,	// (0x0003fdac) aid_cmode_itu_key_size_cp

0xe2fe,	// (0x0003fdb6) compa_mode_pane_g1

0xe306,	// (0x0003fdbe) compa_mode_pane_g2

0xe30e,	// (0x0003fdc6) compa_mode_pane_g3

0x0002,

0xfdb1,	// (0x00041869) compa_mode_pane_g

0xe316,	// (0x0003fdce) main_comp_mode_itu_pane_cp

0xe31e,	// (0x0003fdd6) main_comp_mode_rocker_pane_cp

0xe326,	// (0x0003fdde) cell_cmode_itu_pane_cp_ParamLimits

0xe326,	// (0x0003fdde) cell_cmode_itu_pane_cp

0xe33b,	// (0x0003fdf3) cell_cmode_rocker_pane_cp_ParamLimits

0xe33b,	// (0x0003fdf3) cell_cmode_rocker_pane_cp

0x2412,	// (0x00033eca) bg_button_pane_cp06_cp_ParamLimits

0x2412,	// (0x00033eca) bg_button_pane_cp06_cp

0xc296,	// (0x0003dd4e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc296,	// (0x0003dd4e) cell_cmode_rocker_pane_g1_cp

0xc026,	// (0x0003dade) cell_cmode_rocker_pane_g2_cp

0x1fec,	// (0x00033aa4) bg_button_pane_cp07_cp

0xe34d,	// (0x0003fe05) cell_cmode_itu_pane_g1_cp

0xe356,	// (0x0003fe0e) cell_cmode_itu_pane_t1_cp

0xe356,	// (0x0003fe0e) cell_cmode_itu_pane_t2_cp

0xaf1b,	// (0x0003c9d3) settings_code_pane_cp2

0x205c,	// (0x00033b14) bg_popup_window_pane_cp3_ParamLimits

0x229f,	// (0x00033d57) heading_pane_cp3_ParamLimits

0x22ae,	// (0x00033d66) listscroll_popup_graphic_pane_ParamLimits

0x85fc,	// (0x0003a0b4) fep_hwr_aid_pane_ParamLimits

0x8bad,	// (0x0003a665) aid_touch_sctrl_top_ParamLimits

0x8bc8,	// (0x0003a680) sctrl_sk_top_pane_g1_ParamLimits

0x8853,	// (0x0003a30b) sctrl_sk_top_pane_g2_ParamLimits

0xfce7,	// (0x0004179f) sctrl_sk_top_pane_g_ParamLimits

0x8bd5,	// (0x0003a68d) sctrl_sk_top_pane_t1_ParamLimits

0x8bad,	// (0x0003a665) aid_touch_sctrl_bottom_ParamLimits

0x8bd5,	// (0x0003a68d) sctrl_sk_bottom_pane_t1_ParamLimits

0xd96b,	// (0x0003f423) aid_area_touch_clock

0x8dba,	// (0x0003a872) aid_vkb2_area_top_pane_cell_ParamLimits

0x8dba,	// (0x0003a872) aid_vkb2_area_top_pane_cell

0x8f08,	// (0x0003a9c0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8f08,	// (0x0003a9c0) aid_vkb2_area_bottom_pane_cell

0xdeda,	// (0x0003f992) popup_char_count_window

0xe364,	// (0x0003fe1c) popup_char_count_window_g1

0xe36d,	// (0x0003fe25) popup_char_count_window_g2

0xe376,	// (0x0003fe2e) popup_char_count_window_g3

0x0002,

0xfdb8,	// (0x00041870) popup_char_count_window_g

0xe37f,	// (0x0003fe37) popup_char_count_window_t1

0x8c7c,	// (0x0003a734) popup_fep_char_preview_window_ParamLimits

0x8c7c,	// (0x0003a734) popup_fep_char_preview_window

0x8dd8,	// (0x0003a890) vkb2_top_candi_pane_ParamLimits

0x8dd8,	// (0x0003a890) vkb2_top_candi_pane

0xe38d,	// (0x0003fe45) cell_vkb2_top_candi_pane_ParamLimits

0xe38d,	// (0x0003fe45) cell_vkb2_top_candi_pane

0x91ef,	// (0x0003aca7) bg_popup_fep_char_preview_window_ParamLimits

0x91ef,	// (0x0003aca7) bg_popup_fep_char_preview_window

0x91fd,	// (0x0003acb5) popup_fep_char_preview_window_t1_ParamLimits

0x91fd,	// (0x0003acb5) popup_fep_char_preview_window_t1

0xe3d7,	// (0x0003fe8f) bg_popup_fep_char_preview_window_g1

0xe3df,	// (0x0003fe97) bg_popup_fep_char_preview_window_g2

0xe3e7,	// (0x0003fe9f) bg_popup_fep_char_preview_window_g3

0xe3ef,	// (0x0003fea7) bg_popup_fep_char_preview_window_g4

0xe3f7,	// (0x0003feaf) bg_popup_fep_char_preview_window_g5

0xe3ff,	// (0x0003feb7) bg_popup_fep_char_preview_window_g6

0xe407,	// (0x0003febf) bg_popup_fep_char_preview_window_g7

0xe40f,	// (0x0003fec7) bg_popup_fep_char_preview_window_g8

0xe417,	// (0x0003fecf) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbf,	// (0x00041877) bg_popup_fep_char_preview_window_g

0x8853,	// (0x0003a30b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8853,	// (0x0003a30b) cell_vkb2_top_candi_pane_g1

0x8861,	// (0x0003a319) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8861,	// (0x0003a319) cell_vkb2_top_candi_pane_g2

0xc5ad,	// (0x0003e065) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5ad,	// (0x0003e065) cell_vkb2_top_candi_pane_g3

0x923f,	// (0x0003acf7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x923f,	// (0x0003acf7) cell_vkb2_top_candi_pane_g4

0xc797,	// (0x0003e24f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc797,	// (0x0003e24f) cell_vkb2_top_candi_pane_g5

0x9260,	// (0x0003ad18) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9260,	// (0x0003ad18) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd4,	// (0x0004188c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd4,	// (0x0004188c) cell_vkb2_top_candi_pane_g

0x926e,	// (0x0003ad26) cell_vkb2_top_candi_pane_t1

0x834b,	// (0x00039e03) aid_size_touch_slider_mark_ParamLimits

0x834b,	// (0x00039e03) aid_size_touch_slider_mark

0xe01d,	// (0x0003fad5) grid_graphic2_catg_pane_ParamLimits

0xe01d,	// (0x0003fad5) grid_graphic2_catg_pane

0xe0bb,	// (0x0003fb73) popup_grid_graphic2_window_t1_ParamLimits

0xe0bb,	// (0x0003fb73) popup_grid_graphic2_window_t1

0xe0cd,	// (0x0003fb85) popup_grid_graphic2_window_t2_ParamLimits

0xe0cd,	// (0x0003fb85) popup_grid_graphic2_window_t2

0x0001,

0xfd8d,	// (0x00041845) popup_grid_graphic2_window_t_ParamLimits

0xfd8d,	// (0x00041845) popup_grid_graphic2_window_t

0x2186,	// (0x00033c3e) bg_button_pane_cp05_ParamLimits

0xe240,	// (0x0003fcf8) cell_graphic2_control_pane_g1_ParamLimits

0xe41f,	// (0x0003fed7) cell_graphic2_catg_pane_ParamLimits

0xe41f,	// (0x0003fed7) cell_graphic2_catg_pane

0x1fec,	// (0x00033aa4) bg_button_pane_cp12

0xe431,	// (0x0003fee9) cell_graphic2_catg_pane_g1

0xd936,	// (0x0003f3ee) cell_tb_ext_pane_t1_ParamLimits

0x9025,	// (0x0003aadd) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9025,	// (0x0003aadd) vkb2_top_cell_right_narrow_pane

0x903d,	// (0x0003aaf5) vkb2_top_cell_right_wide_pane_ParamLimits

0x903d,	// (0x0003aaf5) vkb2_top_cell_right_wide_pane

0x85ee,	// (0x0003a0a6) bg_vkb2_func_pane_ParamLimits

0x85ee,	// (0x0003a0a6) bg_vkb2_func_pane

0x90ae,	// (0x0003ab66) vkb2_top_cell_left_pane_g1_ParamLimits

0x85ee,	// (0x0003a0a6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x85ee,	// (0x0003a0a6) bg_vkb2_fuc_pane_cp03

0x910c,	// (0x0003abc4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99fa,	// (0x0003b4b2) bg_vkb2_func_pane_g1

0x9a02,	// (0x0003b4ba) bg_vkb2_func_pane_g2

0x9a12,	// (0x0003b4ca) bg_vkb2_func_pane_g3

0x9a0a,	// (0x0003b4c2) bg_vkb2_func_pane_g4

0x9a1a,	// (0x0003b4d2) bg_vkb2_func_pane_g5

0x9a22,	// (0x0003b4da) bg_vkb2_func_pane_g6

0x9a2a,	// (0x0003b4e2) bg_vkb2_func_pane_g7

0x9a32,	// (0x0003b4ea) bg_vkb2_func_pane_g8

0x99f2,	// (0x0003b4aa) bg_vkb2_func_pane_g9

0x0008,

0xfde1,	// (0x00041899) bg_vkb2_func_pane_g

0x85ee,	// (0x0003a0a6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x85ee,	// (0x0003a0a6) bg_vkb2_fuc_pane_cp01

0x90ae,	// (0x0003ab66) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x90ae,	// (0x0003ab66) vkb2_top_cell_right_wide_pane_g1

0x85ee,	// (0x0003a0a6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x85ee,	// (0x0003a0a6) bg_vkb2_fuc_pane_cp02

0x928d,	// (0x0003ad45) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x928d,	// (0x0003ad45) vkb2_top_cell_right_narrow_pane_g1

0xd558,	// (0x0003f010) aid_touch_area_decrease_ParamLimits

0xd558,	// (0x0003f010) aid_touch_area_decrease

0xd57c,	// (0x0003f034) aid_touch_area_increase_ParamLimits

0xd57c,	// (0x0003f034) aid_touch_area_increase

0xd594,	// (0x0003f04c) aid_touch_area_mute_ParamLimits

0xd594,	// (0x0003f04c) aid_touch_area_mute

0xd5b0,	// (0x0003f068) aid_touch_area_slider_ParamLimits

0xd5b0,	// (0x0003f068) aid_touch_area_slider

0xd69a,	// (0x0003f152) popup_slider_window_g4_ParamLimits

0xd69a,	// (0x0003f152) popup_slider_window_g4

0xd6b2,	// (0x0003f16a) popup_slider_window_g5_ParamLimits

0xd6b2,	// (0x0003f16a) popup_slider_window_g5

0xd6d4,	// (0x0003f18c) popup_slider_window_g6_ParamLimits

0xd6d4,	// (0x0003f18c) popup_slider_window_g6

0xd712,	// (0x0003f1ca) popup_slider_window_t2_ParamLimits

0xd712,	// (0x0003f1ca) popup_slider_window_t2

0x0001,

0xfcdb,	// (0x00041793) popup_slider_window_t_ParamLimits

0xfcdb,	// (0x00041793) popup_slider_window_t

0xd72a,	// (0x0003f1e2) slider_pane_ParamLimits

0xd72a,	// (0x0003f1e2) slider_pane

0xe43a,	// (0x0003fef2) slider_pane_g1_ParamLimits

0xe43a,	// (0x0003fef2) slider_pane_g1

0xe44e,	// (0x0003ff06) slider_pane_g2_ParamLimits

0xe44e,	// (0x0003ff06) slider_pane_g2

0xe464,	// (0x0003ff1c) slider_pane_g3_ParamLimits

0xe464,	// (0x0003ff1c) slider_pane_g3

0x0003,

0xfdf4,	// (0x000418ac) slider_pane_g_ParamLimits

0xfdf4,	// (0x000418ac) slider_pane_g

0x7c06,	// (0x000396be) popup_tb_float_extension_window_ParamLimits

0x7c06,	// (0x000396be) popup_tb_float_extension_window

0xe490,	// (0x0003ff48) aid_size_cell_tb_float_ext

0x1fec,	// (0x00033aa4) bg_popup_sub_window_cp28

0xe49c,	// (0x0003ff54) grid_tb_float_ext_pane

0xe4a6,	// (0x0003ff5e) cell_tb_float_ext_pane_ParamLimits

0xe4a6,	// (0x0003ff5e) cell_tb_float_ext_pane

0xe4c0,	// (0x0003ff78) cell_tb_float_ext_pane_g1

0xe4c9,	// (0x0003ff81) grid_highlight_pane_cp12

0x873d,	// (0x0003a1f5) cell_last_hwr_side_pane_ParamLimits

0x873d,	// (0x0003a1f5) cell_last_hwr_side_pane

0xc026,	// (0x0003dade) cell_last_hwr_side_pane_g1

0xe4d2,	// (0x0003ff8a) cell_last_hwr_side_pane_g2

0x0001,

0xfdfd,	// (0x000418b5) cell_last_hwr_side_pane_g

0x8fd4,	// (0x0003aa8c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8fd4,	// (0x0003aa8c) vkb2_area_bottom_space_btn_pane

0x8853,	// (0x0003a30b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf8f,	// (0x0003fa47) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x926e,	// (0x0003ad26) cell_vkb2_top_candi_pane_t1_ParamLimits

0x92ad,	// (0x0003ad65) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x92ad,	// (0x0003ad65) vkb2_area_bottom_space_btn_pane_g1

0x92e7,	// (0x0003ad9f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x92e7,	// (0x0003ad9f) vkb2_area_bottom_space_btn_pane_g2

0x931d,	// (0x0003add5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x931d,	// (0x0003add5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe02,	// (0x000418ba) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe02,	// (0x000418ba) vkb2_area_bottom_space_btn_pane_g

0x86b1,	// (0x0003a169) cel_fep_hwr_func_pane_ParamLimits

0x86b1,	// (0x0003a169) cel_fep_hwr_func_pane

0x86ed,	// (0x0003a1a5) cell_hwr_side_button_pane_ParamLimits

0x86ed,	// (0x0003a1a5) cell_hwr_side_button_pane

0xd96b,	// (0x0003f423) aid_area_touch_clock_ParamLimits

0x2186,	// (0x00033c3e) bg_uniindi_top_pane_ParamLimits

0xd97d,	// (0x0003f435) uniindi_top_pane_g1_ParamLimits

0xd993,	// (0x0003f44b) uniindi_top_pane_g2_ParamLimits

0xd99f,	// (0x0003f457) uniindi_top_pane_g3_ParamLimits

0xd9b0,	// (0x0003f468) uniindi_top_pane_g4_ParamLimits

0xfd13,	// (0x000417cb) uniindi_top_pane_g_ParamLimits

0xd9bd,	// (0x0003f475) uniindi_top_pane_t1_ParamLimits

0x2186,	// (0x00033c3e) bg_vkb2_func_pane_cp01_ParamLimits

0x2186,	// (0x00033c3e) bg_vkb2_func_pane_cp01

0xe4db,	// (0x0003ff93) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4db,	// (0x0003ff93) cel_fep_hwr_func_pane_g1

0x2186,	// (0x00033c3e) bg_vkb2_func_pane_cp02_ParamLimits

0x2186,	// (0x00033c3e) bg_vkb2_func_pane_cp02

0xe4db,	// (0x0003ff93) cell_hwr_side_button_pane_g1_ParamLimits

0xe4db,	// (0x0003ff93) cell_hwr_side_button_pane_g1

0x9876,	// (0x0003b32e) status_pane_g4_ParamLimits

0x9876,	// (0x0003b32e) status_pane_g4

0x9890,	// (0x0003b348) status_pane_t1

0xbd61,	// (0x0003d819) form2_midp_gauge_slider_cont_pane

0xbd69,	// (0x0003d821) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd7b,	// (0x0003d833) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd8d,	// (0x0003d845) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfada,	// (0x00041592) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd9f,	// (0x0003d857) form2_midp_slider_pane_ParamLimits

0x8c44,	// (0x0003a6fc) aid_size_cell_func_vkb2_ParamLimits

0x8c44,	// (0x0003a6fc) aid_size_cell_func_vkb2

0xe47c,	// (0x0003ff34) slider_pane_g4_ParamLimits

0xe47c,	// (0x0003ff34) slider_pane_g4

0x9367,	// (0x0003ae1f) form2_midp_gauge_slider_pane_t2_cp01

0x9375,	// (0x0003ae2d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9375,	// (0x0003ae2d) form2_midp_gauge_slider_pane_t3_cp01

0x9392,	// (0x0003ae4a) form2_midp_slider_pane_cp01

0x1fec,	// (0x00033aa4) navi_smil_pane

0xe514,	// (0x0003ffcc) navi_smil_pane_g1

0xe51c,	// (0x0003ffd4) navi_smil_pane_t1

0xe4e9,	// (0x0003ffa1) form2_midp_slider_pane_g1

0xe4f2,	// (0x0003ffaa) form2_midp_slider_pane_g2

0xe4fa,	// (0x0003ffb2) form2_midp_slider_pane_g3

0xe4e9,	// (0x0003ffa1) form2_midp_slider_pane_g4

0xe502,	// (0x0003ffba) form2_midp_slider_pane_g5

0x0004,

0xfe0b,	// (0x000418c3) form2_midp_slider_pane_g

0x9357,	// (0x0003ae0f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9357,	// (0x0003ae0f) vkb2_area_bottom_space_btn_pane_g4

0x7e8d,	// (0x00039945) lc0_navi_pane_ParamLimits

0x7e8d,	// (0x00039945) lc0_navi_pane

0x7f03,	// (0x000399bb) lc0_stat_indi_pane_ParamLimits

0x7f03,	// (0x000399bb) lc0_stat_indi_pane

0x7f1a,	// (0x000399d2) ls0_title_pane_ParamLimits

0x7f1a,	// (0x000399d2) ls0_title_pane

0x2412,	// (0x00033eca) bg_popup_sub_pane_cp14_ParamLimits

0xd952,	// (0x0003f40a) list_uniindi_pane_ParamLimits

0xd95e,	// (0x0003f416) uniindi_top_pane_ParamLimits

0xd9fa,	// (0x0003f4b2) list_single_uniindi_pane_g1_ParamLimits

0xda0d,	// (0x0003f4c5) list_single_uniindi_pane_t1_ParamLimits

0x939b,	// (0x0003ae53) lc0_stat_clock_pane_ParamLimits

0x939b,	// (0x0003ae53) lc0_stat_clock_pane

0xe52a,	// (0x0003ffe2) lc0_stat_indi_pane_g1_ParamLimits

0xe52a,	// (0x0003ffe2) lc0_stat_indi_pane_g1

0xe537,	// (0x0003ffef) lc0_stat_indi_pane_g2_ParamLimits

0xe537,	// (0x0003ffef) lc0_stat_indi_pane_g2

0x0001,

0xfe16,	// (0x000418ce) lc0_stat_indi_pane_g_ParamLimits

0xfe16,	// (0x000418ce) lc0_stat_indi_pane_g

0x93a8,	// (0x0003ae60) lc0_uni_indicator_pane_ParamLimits

0x93a8,	// (0x0003ae60) lc0_uni_indicator_pane

0xe544,	// (0x0003fffc) ls0_title_pane_g1_ParamLimits

0xe544,	// (0x0003fffc) ls0_title_pane_g1

0xe558,	// (0x00040010) ls0_title_pane_t1_ParamLimits

0xe558,	// (0x00040010) ls0_title_pane_t1

0x93b5,	// (0x0003ae6d) lc0_uni_indicator_pane_g1_ParamLimits

0x93b5,	// (0x0003ae6d) lc0_uni_indicator_pane_g1

0xe58e,	// (0x00040046) lc0_stat_clock_pane_t1

0x5ebd,	// (0x00037975) main_ai5_pane

0xe59c,	// (0x00040054) ai5_sk_pane_ParamLimits

0xe59c,	// (0x00040054) ai5_sk_pane

0xe5a9,	// (0x00040061) cell_ai5_widget_pane_ParamLimits

0xe5a9,	// (0x00040061) cell_ai5_widget_pane

0xe669,	// (0x00040121) aid_size_cell_widget_grid

0xe677,	// (0x0004012f) bg_ai5_widget_pane_ParamLimits

0xe677,	// (0x0004012f) bg_ai5_widget_pane

0xe6f3,	// (0x000401ab) cell_ai5_widget_pane_g2

0xe707,	// (0x000401bf) cell_ai5_widget_pane_g3

0xe721,	// (0x000401d9) cell_ai5_widget_pane_g4

0xe731,	// (0x000401e9) cell_ai5_widget_pane_g5

0xe741,	// (0x000401f9) cell_ai5_widget_pane_g6

0xe74d,	// (0x00040205) cell_ai5_widget_pane_g7

0xe7b9,	// (0x00040271) cell_ai5_widget_pane_t1_ParamLimits

0xe7b9,	// (0x00040271) cell_ai5_widget_pane_t1

0xe7d6,	// (0x0004028e) cell_ai5_widget_pane_t2_ParamLimits

0xe7d6,	// (0x0004028e) cell_ai5_widget_pane_t2

0xe7ee,	// (0x000402a6) cell_ai5_widget_pane_t3_ParamLimits

0xe7ee,	// (0x000402a6) cell_ai5_widget_pane_t3

0xe806,	// (0x000402be) cell_ai5_widget_pane_t4_ParamLimits

0xe806,	// (0x000402be) cell_ai5_widget_pane_t4

0xe82c,	// (0x000402e4) cell_ai5_widget_pane_t5_ParamLimits

0xe82c,	// (0x000402e4) cell_ai5_widget_pane_t5

0xe84b,	// (0x00040303) cell_ai5_widget_pane_t6_ParamLimits

0xe84b,	// (0x00040303) cell_ai5_widget_pane_t6

0xe85d,	// (0x00040315) cell_ai5_widget_pane_t7_ParamLimits

0xe85d,	// (0x00040315) cell_ai5_widget_pane_t7

0xe87c,	// (0x00040334) cell_ai5_widget_pane_t8_ParamLimits

0xe87c,	// (0x00040334) cell_ai5_widget_pane_t8

0x000b,

0xfe36,	// (0x000418ee) cell_ai5_widget_pane_t_ParamLimits

0xfe36,	// (0x000418ee) cell_ai5_widget_pane_t

0xe900,	// (0x000403b8) grid_ai5_widget_pane

0x2412,	// (0x00033eca) highlight_cell_ai5_widget_pane_ParamLimits

0x2412,	// (0x00033eca) highlight_cell_ai5_widget_pane

0xe90e,	// (0x000403c6) ai5_sk_left_pane

0xe918,	// (0x000403d0) ai5_sk_middle_pane

0xe922,	// (0x000403da) ai5_sk_right_pane

0xe92c,	// (0x000403e4) bg_ai5_widget_pane_g1_ParamLimits

0xe92c,	// (0x000403e4) bg_ai5_widget_pane_g1

0xe938,	// (0x000403f0) bg_ai5_widget_pane_g2_ParamLimits

0xe938,	// (0x000403f0) bg_ai5_widget_pane_g2

0xe944,	// (0x000403fc) bg_ai5_widget_pane_g3_ParamLimits

0xe944,	// (0x000403fc) bg_ai5_widget_pane_g3

0xe950,	// (0x00040408) bg_ai5_widget_pane_g4_ParamLimits

0xe950,	// (0x00040408) bg_ai5_widget_pane_g4

0xe95c,	// (0x00040414) bg_ai5_widget_pane_g5_ParamLimits

0xe95c,	// (0x00040414) bg_ai5_widget_pane_g5

0xe968,	// (0x00040420) bg_ai5_widget_pane_g6_ParamLimits

0xe968,	// (0x00040420) bg_ai5_widget_pane_g6

0xe974,	// (0x0004042c) bg_ai5_widget_pane_g7_ParamLimits

0xe974,	// (0x0004042c) bg_ai5_widget_pane_g7

0xe980,	// (0x00040438) bg_ai5_widget_pane_g8_ParamLimits

0xe980,	// (0x00040438) bg_ai5_widget_pane_g8

0xe98c,	// (0x00040444) bg_ai5_widget_pane_g9_ParamLimits

0xe98c,	// (0x00040444) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x00041907) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x00041907) bg_ai5_widget_pane_g

0xe9be,	// (0x00040476) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9be,	// (0x00040476) cell_shortcut_ai5_widget_pane

0x2cce,	// (0x00034786) bg_cell_shortcut_ai5_widget_pane

0xe9cf,	// (0x00040487) cell_grid_ai5_widget_pane_g1

0x2cce,	// (0x00034786) highlight_cell_shortcut_ai5_widget_pane

0x99fa,	// (0x0003b4b2) ai5_sk_left_pane_g1

0xe9d8,	// (0x00040490) ai5_sk_left_pane_g2

0xe9e0,	// (0x00040498) ai5_sk_left_pane_g3

0xe9e8,	// (0x000404a0) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0004191a) ai5_sk_left_pane_g

0xe9f0,	// (0x000404a8) ai5_sk_left_pane_t1

0x9a02,	// (0x0003b4ba) ai5_sk_right_pane_g1

0xe9fe,	// (0x000404b6) ai5_sk_right_pane_g2

0xea06,	// (0x000404be) ai5_sk_right_pane_g3

0xea0e,	// (0x000404c6) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x00041923) ai5_sk_right_pane_g

0xea16,	// (0x000404ce) ai5_sk_right_pane_t1

0x9a02,	// (0x0003b4ba) ai5_sk_middle_pane_g1

0x99fa,	// (0x0003b4b2) ai5_sk_middle_pane_g2

0x9a1a,	// (0x0003b4d2) ai5_sk_middle_pane_g3

0xea06,	// (0x000404be) ai5_sk_middle_pane_g4

0xe9e0,	// (0x00040498) ai5_sk_middle_pane_g5

0xea24,	// (0x000404dc) ai5_sk_middle_pane_g6

0xea2c,	// (0x000404e4) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0004192c) ai5_sk_middle_pane_g

0x7d13,	// (0x000397cb) aid_touch_area_size_lc0_ParamLimits

0x7d13,	// (0x000397cb) aid_touch_area_size_lc0

0x8882,	// (0x0003a33a) cell_hwr_candidate_pane_t1_ParamLimits

0x7d2f,	// (0x000397e7) aid_touch_navi_pane

0x9820,	// (0x0003b2d8) status_dt_navi_pane_ParamLimits

0x9820,	// (0x0003b2d8) status_dt_navi_pane

0x982d,	// (0x0003b2e5) status_dt_sta_pane_ParamLimits

0x982d,	// (0x0003b2e5) status_dt_sta_pane

0xea34,	// (0x000404ec) dt_sta_controll_pane

0xea41,	// (0x000404f9) dt_sta_indi_pane

0xea52,	// (0x0004050a) dt_sta_title_pane

0x2186,	// (0x00033c3e) bg_dt_sta_indi_pane_ParamLimits

0x2186,	// (0x00033c3e) bg_dt_sta_indi_pane

0xea65,	// (0x0004051d) dt_sta_battery_pane

0xea6d,	// (0x00040525) dt_sta_indi_pane_g1

0xea76,	// (0x0004052e) dt_sta_indi_pane_g2

0xea7f,	// (0x00040537) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0004193b) dt_sta_indi_pane_g

0xea88,	// (0x00040540) dt_sta_signal_pane

0x2412,	// (0x00033eca) bg_dt_sta_title_pane_ParamLimits

0x2412,	// (0x00033eca) bg_dt_sta_title_pane

0xa854,	// (0x0003c30c) dt_sta_title_pane_g1

0xea91,	// (0x00040549) dt_sta_title_pane_t1_ParamLimits

0xea91,	// (0x00040549) dt_sta_title_pane_t1

0x1fec,	// (0x00033aa4) bg_dt_sta_control_pane

0xeaa6,	// (0x0004055e) dt_sta_controll_pane_g1

0xeaaf,	// (0x00040567) bg_dt_sta_title_pane_g1

0xeab8,	// (0x00040570) bg_dt_sta_title_pane_g2

0xeac1,	// (0x00040579) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x00041942) bg_dt_sta_title_pane_g

0xc026,	// (0x0003dade) bg_dt_sta_indi_pane_g1

0xeaca,	// (0x00040582) dt_sta_signal_pane_g1

0xead2,	// (0x0004058a) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x00041949) dt_sta_signal_pane_g

0xeada,	// (0x00040592) dt_sta_battery_pane_g1

0xeae3,	// (0x0004059b) dt_sta_battery_pane_t1

0xc026,	// (0x0003dade) bg_dt_sta_control_pane_g1

0x28e7,	// (0x0003439f) fep_china_uni_eep_pane

0x28ef,	// (0x000343a7) fep_china_uni_entry_pane_ParamLimits

0x28ff,	// (0x000343b7) popup_fep_china_uni_window_g1_ParamLimits

0x290f,	// (0x000343c7) popup_fep_china_uni_window_g2_ParamLimits

0x290f,	// (0x000343c7) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x000411a1) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x000411a1) popup_fep_china_uni_window_g

0xeaf2,	// (0x000405aa) fep_china_uni_eep_pane_g1

0xeafa,	// (0x000405b2) fep_china_uni_eep_pane_t1

0xe50b,	// (0x0003ffc3) aid_touch_area_size_smil_player

0x7e85,	// (0x0003993d) lc0_clock_pane

0x9884,	// (0x0003b33c) status_pane_g5_ParamLimits

0x9884,	// (0x0003b33c) status_pane_g5

0x78c7,	// (0x0003937f) popup_keymap_window

0x9842,	// (0x0003b2fa) status_icon_pane

0xe707,	// (0x000401bf) cell_ai5_widget_pane_g3_ParamLimits

0xe721,	// (0x000401d9) cell_ai5_widget_pane_g4_ParamLimits

0xe731,	// (0x000401e9) cell_ai5_widget_pane_g5_ParamLimits

0xe759,	// (0x00040211) cell_ai5_widget_pane_g8_ParamLimits

0xe759,	// (0x00040211) cell_ai5_widget_pane_g8

0xe76d,	// (0x00040225) cell_ai5_widget_pane_g9_ParamLimits

0xe76d,	// (0x00040225) cell_ai5_widget_pane_g9

0xe781,	// (0x00040239) cell_ai5_widget_pane_g10_ParamLimits

0xe781,	// (0x00040239) cell_ai5_widget_pane_g10

0xeb09,	// (0x000405c1) status_icon_pane_g1

0x1fec,	// (0x00033aa4) bg_popup_sub_pane_cp13

0xeb11,	// (0x000405c9) popup_keymap_window_t1

0x7606,	// (0x000390be) control_pane_g6_ParamLimits

0x7606,	// (0x000390be) control_pane_g6

0x7613,	// (0x000390cb) control_pane_g7_ParamLimits

0x7613,	// (0x000390cb) control_pane_g7

0x7620,	// (0x000390d8) control_pane_g8_ParamLimits

0x7620,	// (0x000390d8) control_pane_g8

0xea34,	// (0x000404ec) dt_sta_controll_pane_ParamLimits

0xea41,	// (0x000404f9) dt_sta_indi_pane_ParamLimits

0xea52,	// (0x0004050a) dt_sta_title_pane_ParamLimits

0x235d,	// (0x00033e15) aid_size_touch_scroll_bar_cale

0x5f96,	// (0x00037a4e) popup_discreet_window_ParamLimits

0x5f96,	// (0x00037a4e) popup_discreet_window

0x6010,	// (0x00037ac8) popup_sk_window

0xa098,	// (0x0003bb50) bg_popup_sub_pane_cp28_ParamLimits

0xa098,	// (0x0003bb50) bg_popup_sub_pane_cp28

0xeb1f,	// (0x000405d7) popup_discreet_window_g1_ParamLimits

0xeb1f,	// (0x000405d7) popup_discreet_window_g1

0xeb3f,	// (0x000405f7) popup_discreet_window_t1_ParamLimits

0xeb3f,	// (0x000405f7) popup_discreet_window_t1

0xeb5d,	// (0x00040615) popup_discreet_window_t2_ParamLimits

0xeb5d,	// (0x00040615) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0004194e) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0004194e) popup_discreet_window_t

0x93c9,	// (0x0003ae81) popup_sk_window_g1

0x93d3,	// (0x0003ae8b) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x00041955) popup_sk_window_g

0x93db,	// (0x0003ae93) popup_sk_window_t1

0x93e9,	// (0x0003aea1) popup_sk_window_t1_copy1

0xe6f3,	// (0x000401ab) cell_ai5_widget_pane_g2_ParamLimits

0xe88e,	// (0x00040346) cell_ai5_widget_pane_t9_ParamLimits

0xe88e,	// (0x00040346) cell_ai5_widget_pane_t9

0x1fec,	// (0x00033aa4) main_fep_fshwr2_pane

0x93f7,	// (0x0003aeaf) aid_fshwr2_btn_pane

0x940b,	// (0x0003aec3) aid_fshwr2_syb_pane

0x941f,	// (0x0003aed7) aid_fshwr2_txt_pane

0x942f,	// (0x0003aee7) fshwr2_func_candi_pane

0x9453,	// (0x0003af0b) fshwr2_hwr_syb_pane

0x946d,	// (0x0003af25) fshwr2_icf_pane

0x5ebd,	// (0x00037975) fshwr2_icf_bg_pane

0x949b,	// (0x0003af53) fshwr2_icf_pane_t1_ParamLimits

0x949b,	// (0x0003af53) fshwr2_icf_pane_t1

0x2864,	// (0x0003431c) fshwr2_func_candi_pane_g1

0xebaf,	// (0x00040667) fshwr2_func_candi_row_pane_ParamLimits

0xebaf,	// (0x00040667) fshwr2_func_candi_row_pane

0x94b4,	// (0x0003af6c) cell_fshwr2_syb_pane_ParamLimits

0x94b4,	// (0x0003af6c) cell_fshwr2_syb_pane

0x94d7,	// (0x0003af8f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x94d7,	// (0x0003af8f) fshwr2_hwr_syb_pane_g1

0x5ebd,	// (0x00037975) bg_popup_call_pane_cp01

0x94e5,	// (0x0003af9d) fshwr2_func_candi_cell_pane_ParamLimits

0x94e5,	// (0x0003af9d) fshwr2_func_candi_cell_pane

0xa6f4,	// (0x0003c1ac) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6f4,	// (0x0003c1ac) fshwr2_func_candi_cell_bg_pane

0x9530,	// (0x0003afe8) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9530,	// (0x0003afe8) fshwr2_func_candi_cell_pane_g1

0x9550,	// (0x0003b008) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9550,	// (0x0003b008) fshwr2_func_candi_cell_pane_t1

0x5ebd,	// (0x00037975) bg_button_pane_cp08

0x2554,	// (0x0003400c) cell_fshwr2_syb_bg_pane

0x9563,	// (0x0003b01b) cell_fshwr2_syb_bg_pane_g1

0x9577,	// (0x0003b02f) cell_fshwr2_syb_bg_pane_t1

0x2412,	// (0x00033eca) main_tmo_pane

0xab8d,	// (0x0003c645) uni_indicator_pane_g1_ParamLimits

0xaba0,	// (0x0003c658) uni_indicator_pane_g2_ParamLimits

0xabb2,	// (0x0003c66a) uni_indicator_pane_g3_ParamLimits

0xabc1,	// (0x0003c679) uni_indicator_pane_g4_ParamLimits

0xabc1,	// (0x0003c679) uni_indicator_pane_g4

0xabd5,	// (0x0003c68d) uni_indicator_pane_g5_ParamLimits

0xabd5,	// (0x0003c68d) uni_indicator_pane_g5

0xabd5,	// (0x0003c68d) uni_indicator_pane_g6_ParamLimits

0xabd5,	// (0x0003c68d) uni_indicator_pane_g6

0xf8e8,	// (0x000413a0) uni_indicator_pane_g_ParamLimits

0xd53a,	// (0x0003eff2) popup_tmo_note_window_ParamLimits

0xd53a,	// (0x0003eff2) popup_tmo_note_window

0x8c26,	// (0x0003a6de) fshwr2_bg_pane

0x9541,	// (0x0003aff9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9541,	// (0x0003aff9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0004195a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0004195a) fshwr2_func_candi_cell_pane_g

0x883b,	// (0x0003a2f3) bg_popup_window_pane_cp01

0x958d,	// (0x0003b045) bg_popup_window_pane_g1_cp01

0xebd6,	// (0x0004068e) bg_popup_window_pane_cp22_ParamLimits

0xebd6,	// (0x0004068e) bg_popup_window_pane_cp22

0xebe4,	// (0x0004069c) listscroll_tmo_link_pane_ParamLimits

0xebe4,	// (0x0004069c) listscroll_tmo_link_pane

0xec24,	// (0x000406dc) popup_tmo_note_window_g1_ParamLimits

0xec24,	// (0x000406dc) popup_tmo_note_window_g1

0xec31,	// (0x000406e9) tmo_note_info_pane_ParamLimits

0xec31,	// (0x000406e9) tmo_note_info_pane

0xec4b,	// (0x00040703) list_tmo_note_info_pane_g1_ParamLimits

0xec4b,	// (0x00040703) list_tmo_note_info_pane_g1

0xec62,	// (0x0004071a) list_tmo_note_info_pane_g2_ParamLimits

0xec62,	// (0x0004071a) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0004195f) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0004195f) list_tmo_note_info_pane_g

0xec7e,	// (0x00040736) list_tmo_note_info_text_pane_ParamLimits

0xec7e,	// (0x00040736) list_tmo_note_info_text_pane

0xecff,	// (0x000407b7) list_tmo_link_pane

0xed0c,	// (0x000407c4) scroll_pane_cp20

0xed19,	// (0x000407d1) list_single_tmo_link_pane_ParamLimits

0xed19,	// (0x000407d1) list_single_tmo_link_pane

0xed29,	// (0x000407e1) list_single_tmo_link_pane_t1

0xed37,	// (0x000407ef) list_tmo_note_info_text_pane_t1_ParamLimits

0xed37,	// (0x000407ef) list_tmo_note_info_text_pane_t1

0x6b93,	// (0x0003864b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6b93,	// (0x0003864b) aid_size_touch_scroll_bar_cp01

0x6a7c,	// (0x00038534) aid_size_touch_slider_marker

0x5ff8,	// (0x00037ab0) popup_settings_window_ParamLimits

0x5ff8,	// (0x00037ab0) popup_settings_window

0x47bc,	// (0x00036274) popup_candi_list_indi_window

0x7d2f,	// (0x000397e7) aid_touch_navi_pane_ParamLimits

0x8b81,	// (0x0003a639) rs_clock_indi_pane

0x8b8a,	// (0x0003a642) sctrl_sk_bottom_pane_ParamLimits

0x8b9b,	// (0x0003a653) sctrl_sk_top_pane_ParamLimits

0x8c96,	// (0x0003a74e) popup_fep_tooltip_window

0xe669,	// (0x00040121) aid_size_cell_widget_grid_ParamLimits

0xe6de,	// (0x00040196) cell_ai5_widget_pane_g1_ParamLimits

0xe6de,	// (0x00040196) cell_ai5_widget_pane_g1

0xe741,	// (0x000401f9) cell_ai5_widget_pane_g6_ParamLimits

0xe74d,	// (0x00040205) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1b,	// (0x000418d3) cell_ai5_widget_pane_g_ParamLimits

0xfe1b,	// (0x000418d3) cell_ai5_widget_pane_g

0xe8bd,	// (0x00040375) cell_ai5_widget_pane_t10_ParamLimits

0xe8bd,	// (0x00040375) cell_ai5_widget_pane_t10

0xe900,	// (0x000403b8) grid_ai5_widget_pane_ParamLimits

0xe998,	// (0x00040450) cell_contacts_ai5_widget_pane_ParamLimits

0xe998,	// (0x00040450) cell_contacts_ai5_widget_pane

0xeb72,	// (0x0004062a) popup_discreet_window_t3_ParamLimits

0xeb72,	// (0x0004062a) popup_discreet_window_t3

0x9485,	// (0x0003af3d) popup_fshwr2_char_preview_window_ParamLimits

0x9485,	// (0x0003af3d) popup_fshwr2_char_preview_window

0xec9c,	// (0x00040754) tmo_note_info_pane_t1

0xecb1,	// (0x00040769) tmo_note_info_pane_t2

0xecc6,	// (0x0004077e) tmo_note_info_pane_t3

0xecdb,	// (0x00040793) tmo_note_info_pane_t4

0xeced,	// (0x000407a5) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x00041964) tmo_note_info_pane_t

0xecff,	// (0x000407b7) list_tmo_link_pane_ParamLimits

0xed0c,	// (0x000407c4) scroll_pane_cp20_ParamLimits

0x5ebd,	// (0x00037975) bg_popup_fep_char_preview_window_cp01

0xed50,	// (0x00040808) popup_fshwr2_char_preview_window_t1

0xed5e,	// (0x00040816) popup_candi_list_indi_window_g1

0xed67,	// (0x0004081f) bg_cell_contacts_ai5_widget_pane

0xed73,	// (0x0004082b) cell_contacts_ai5_widget_pane_g1

0xc6ec,	// (0x0003e1a4) cell_contacts_ai5_widget_pane_g2

0xed88,	// (0x00040840) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0004196f) cell_contacts_ai5_widget_pane_g

0xed94,	// (0x0004084c) cell_contacts_ai5_widget_pane_t1

0x2412,	// (0x00033eca) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0b,	// (0x000408c3) settings_container_pane

0x2cce,	// (0x00034786) listscroll_set_pane_copy1

0xb702,	// (0x0003d1ba) scroll_pane_cp121_copy1

0x9e3d,	// (0x0003b8f5) set_content_pane_copy1

0xee17,	// (0x000408cf) aid_height_set_list_copy1_ParamLimits

0xee17,	// (0x000408cf) aid_height_set_list_copy1

0xadcd,	// (0x0003c885) aid_size_parent_copy1_ParamLimits

0xadcd,	// (0x0003c885) aid_size_parent_copy1

0xee23,	// (0x000408db) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee23,	// (0x000408db) button_value_adjust_pane_cp6_copy1

0x2554,	// (0x0003400c) list_highlight_pane_cp2_copy1_ParamLimits

0x2554,	// (0x0003400c) list_highlight_pane_cp2_copy1

0xee37,	// (0x000408ef) list_set_pane_copy1_ParamLimits

0xee37,	// (0x000408ef) list_set_pane_copy1

0xeda6,	// (0x0004085e) main_pane_set_t1_copy1_ParamLimits

0xeda6,	// (0x0004085e) main_pane_set_t1_copy1

0xede0,	// (0x00040898) main_pane_set_t2_copy1_ParamLimits

0xede0,	// (0x00040898) main_pane_set_t2_copy1

0xeee4,	// (0x0004099c) main_pane_set_t3_copy1

0xeef2,	// (0x000409aa) main_pane_set_t4_copy1

0xedff,	// (0x000408b7) set_content_pane_g1_copy1_ParamLimits

0xedff,	// (0x000408b7) set_content_pane_g1_copy1

0xef00,	// (0x000409b8) setting_code_pane_copy1

0xef08,	// (0x000409c0) setting_slider_graphic_pane_copy1

0xef08,	// (0x000409c0) setting_slider_pane_copy1

0xef10,	// (0x000409c8) setting_text_pane_copy1

0xef10,	// (0x000409c8) setting_volume_pane_copy1

0xef00,	// (0x000409b8) settings_code_pane_cp2_copy1

0xef18,	// (0x000409d0) settings_code_pane_cp_copy1_ParamLimits

0xef18,	// (0x000409d0) settings_code_pane_cp_copy1

0x9596,	// (0x0003b04e) volume_set_pane_copy1

0xef2c,	// (0x000409e4) volume_set_pane_g10_copy1

0xef34,	// (0x000409ec) volume_set_pane_g1_copy1

0xef3c,	// (0x000409f4) volume_set_pane_g2_copy1

0xef44,	// (0x000409fc) volume_set_pane_g3_copy1

0xef4c,	// (0x00040a04) volume_set_pane_g4_copy1

0xef54,	// (0x00040a0c) volume_set_pane_g5_copy1

0xef5c,	// (0x00040a14) volume_set_pane_g6_copy1

0xef64,	// (0x00040a1c) volume_set_pane_g7_copy1

0xef6c,	// (0x00040a24) volume_set_pane_g8_copy1

0xef74,	// (0x00040a2c) volume_set_pane_g9_copy1

0x205c,	// (0x00033b14) bg_set_opt_pane_cp_copy1_ParamLimits

0x205c,	// (0x00033b14) bg_set_opt_pane_cp_copy1

0x959e,	// (0x0003b056) setting_slider_pane_t1_copy1_ParamLimits

0x959e,	// (0x0003b056) setting_slider_pane_t1_copy1

0x95bd,	// (0x0003b075) setting_slider_pane_t2_copy1_ParamLimits

0x95bd,	// (0x0003b075) setting_slider_pane_t2_copy1

0x95d7,	// (0x0003b08f) setting_slider_pane_t3_copy1_ParamLimits

0x95d7,	// (0x0003b08f) setting_slider_pane_t3_copy1

0x95ef,	// (0x0003b0a7) slider_set_pane_copy1_ParamLimits

0x95ef,	// (0x0003b0a7) slider_set_pane_copy1

0x246a,	// (0x00033f22) set_opt_bg_pane_g1_copy2

0x2472,	// (0x00033f2a) set_opt_bg_pane_g2_copy2

0xef7c,	// (0x00040a34) set_opt_bg_pane_g3_copy2

0x2482,	// (0x00033f3a) set_opt_bg_pane_g4_copy2

0x248a,	// (0x00033f42) set_opt_bg_pane_g5_copy2

0x2492,	// (0x00033f4a) set_opt_bg_pane_g6_copy2

0xef86,	// (0x00040a3e) set_opt_bg_pane_g7_copy2

0xef8e,	// (0x00040a46) set_opt_bg_pane_g8_copy2

0xef98,	// (0x00040a50) set_opt_bg_pane_g9_copy2

0x9605,	// (0x0003b0bd) aid_size_touch_slider_mark_copy1_ParamLimits

0x9605,	// (0x0003b0bd) aid_size_touch_slider_mark_copy1

0xefa2,	// (0x00040a5a) slider_set_pane_g1_copy1

0x9619,	// (0x0003b0d1) slider_set_pane_g2_copy1

0x836b,	// (0x00039e23) slider_set_pane_g3_copy1_ParamLimits

0x836b,	// (0x00039e23) slider_set_pane_g3_copy1

0x837f,	// (0x00039e37) slider_set_pane_g4_copy1_ParamLimits

0x837f,	// (0x00039e37) slider_set_pane_g4_copy1

0x8397,	// (0x00039e4f) slider_set_pane_g5_copy1_ParamLimits

0x8397,	// (0x00039e4f) slider_set_pane_g5_copy1

0x836b,	// (0x00039e23) slider_set_pane_g6_copy1_ParamLimits

0x836b,	// (0x00039e23) slider_set_pane_g6_copy1

0x9621,	// (0x0003b0d9) slider_set_pane_g7_copy1_ParamLimits

0x9621,	// (0x0003b0d9) slider_set_pane_g7_copy1

0x2000,	// (0x00033ab8) bg_set_opt_pane_cp2_copy1

0xefab,	// (0x00040a63) setting_slider_graphic_pane_g1_copy1

0xefb4,	// (0x00040a6c) setting_slider_graphic_pane_t1_copy1

0xefc4,	// (0x00040a7c) setting_slider_graphic_pane_t2_copy1

0xefd4,	// (0x00040a8c) slider_set_pane_cp_copy1

0xefe4,	// (0x00040a9c) input_focus_pane_cp1_copy1

0xefed,	// (0x00040aa5) list_set_text_pane_copy1

0xeff5,	// (0x00040aad) setting_text_pane_g1_copy1

0x4e59,	// (0x00036911) set_text_pane_t1_copy1

0xefe4,	// (0x00040a9c) input_focus_pane_cp2_copy1

0xeff5,	// (0x00040aad) setting_code_pane_g1_copy1

0xeffe,	// (0x00040ab6) setting_code_pane_t1_copy1

0xf00c,	// (0x00040ac4) list_set_graphic_pane_copy1

0x2000,	// (0x00033ab8) bg_set_opt_pane_cp4_copy1

0x2a3f,	// (0x000344f7) list_set_graphic_pane_g1_copy1_ParamLimits

0x2a3f,	// (0x000344f7) list_set_graphic_pane_g1_copy1

0xf020,	// (0x00040ad8) list_set_graphic_pane_g2_copy1

0x2a57,	// (0x0003450f) list_set_graphic_pane_t1_copy1_ParamLimits

0x2a57,	// (0x0003450f) list_set_graphic_pane_t1_copy1

0xc026,	// (0x0003dade) rs_clock_indi_pane_g1

0xf028,	// (0x00040ae0) rs_clock_indi_pane_t1

0xf036,	// (0x00040aee) rs_indi_pane

0xf03e,	// (0x00040af6) rs_indi_pane_g1

0xf047,	// (0x00040aff) rs_indi_pane_g2

0xed5e,	// (0x00040816) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x00041976) rs_indi_pane_g

0x2cce,	// (0x00034786) bg_popup_preview_window_pane_cp03

0xf050,	// (0x00040b08) popup_fep_tooltip_window_t1

0xcce9,	// (0x0003e7a1) popup_note2_window_g2_ParamLimits

0xcce9,	// (0x0003e7a1) popup_note2_window_g2

0x0001,

0xfc52,	// (0x0004170a) popup_note2_window_g_ParamLimits

0xfc52,	// (0x0004170a) popup_note2_window_g

0xd1d6,	// (0x0003ec8e) bg_popup_sub_pane_cp11_ParamLimits

0xd1e3,	// (0x0003ec9b) cell_ai3_links_pane_g1_ParamLimits

0xd1fa,	// (0x0003ecb2) cell_ai3_links_pane_t1

0x4e59,	// (0x00036911) set_text_pane_t1_copy1_ParamLimits

0x2c04,	// (0x000346bc) cell_graphic_popup_pane_cp2_ParamLimits

0x2c04,	// (0x000346bc) cell_graphic_popup_pane_cp2

0xf05e,	// (0x00040b16) cell_graphic_popup_pane_g1_cp2

0x22e0,	// (0x00033d98) cell_graphic_popup_pane_g2_cp2

0xf066,	// (0x00040b1e) cell_graphic_popup_pane_g3_cp2

0xf06e,	// (0x00040b26) cell_graphic_popup_pane_t2_cp2

0x22f1,	// (0x00033da9) grid_highlight_pane_cp3_cp2

0x26e1,	// (0x00034199) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2412,	// (0x00033eca) main_tmo_pane_ParamLimits

0xd52e,	// (0x0003efe6) popup_tmo_big_image_note_window

0xe6cd,	// (0x00040185) cell_ai5_widget_list_pane

0xe6d5,	// (0x0004018d) cell_ai5_widget_lrg_icon_pane

0xec9c,	// (0x00040754) tmo_note_info_pane_t1_ParamLimits

0xecb1,	// (0x00040769) tmo_note_info_pane_t2_ParamLimits

0xecc6,	// (0x0004077e) tmo_note_info_pane_t3_ParamLimits

0xecdb,	// (0x00040793) tmo_note_info_pane_t4_ParamLimits

0xeced,	// (0x000407a5) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x00041964) tmo_note_info_pane_t_ParamLimits

0xee0b,	// (0x000408c3) settings_container_pane_ParamLimits

0xefdc,	// (0x00040a94) indicator_popup_pane_cp5

0xefdc,	// (0x00040a94) indicator_popup_pane_cp6

0xf00c,	// (0x00040ac4) list_set_graphic_pane_copy1_ParamLimits

0x1fec,	// (0x00033aa4) bg_popup_window_pane_cp23

0xf07c,	// (0x00040b34) popup_tmo_big_image_note_window_g1

0xf085,	// (0x00040b3d) popup_tmo_big_image_note_window_t1

0xf095,	// (0x00040b4d) popup_tmo_big_image_note_window_t2

0xf0a5,	// (0x00040b5d) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0004197d) popup_tmo_big_image_note_window_t

0xc026,	// (0x0003dade) cell_ai5_widget_lrg_icon_pane_g1

0xf0b5,	// (0x00040b6d) cell_ai5_widget_lrg_icon_pane_t1

0xf0c3,	// (0x00040b7b) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c3,	// (0x00040b7b) cell_ai5_widget_list_row_pane

0xf0da,	// (0x00040b92) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0da,	// (0x00040b92) cell_ai5_widget_list_row_pane_g1

0xf0e7,	// (0x00040b9f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0e7,	// (0x00040b9f) cell_ai5_widget_list_row_pane_t1

0xf112,	// (0x00040bca) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf112,	// (0x00040bca) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x00041984) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x00041984) cell_ai5_widget_list_row_pane_t

0x5ebd,	// (0x00037975) main_fep_vtchi_ss_pane

0xf162,	// (0x00040c1a) popup_fep_char_pre_window

0xf16a,	// (0x00040c22) popup_fep_ituss_window

0xf196,	// (0x00040c4e) popup_fep_vkbss_window

0x2554,	// (0x0003400c) grid_vkbss_keypad_pane_ParamLimits

0x2554,	// (0x0003400c) grid_vkbss_keypad_pane

0xf1d6,	// (0x00040c8e) ituss_keypad_pane

0x9641,	// (0x0003b0f9) aid_vkbss_key_offset_ParamLimits

0x9641,	// (0x0003b0f9) aid_vkbss_key_offset

0x964d,	// (0x0003b105) cell_vkbss_key_pane_ParamLimits

0x964d,	// (0x0003b105) cell_vkbss_key_pane

0xf1e6,	// (0x00040c9e) bg_cell_vkbss_key_g1_ParamLimits

0xf1e6,	// (0x00040c9e) bg_cell_vkbss_key_g1

0xf1f2,	// (0x00040caa) cell_vkbss_key_3p_pane_ParamLimits

0xf1f2,	// (0x00040caa) cell_vkbss_key_3p_pane

0xf228,	// (0x00040ce0) cell_vkbss_key_g1_ParamLimits

0xf228,	// (0x00040ce0) cell_vkbss_key_g1

0xf25e,	// (0x00040d16) cell_vkbss_key_t1_ParamLimits

0xf25e,	// (0x00040d16) cell_vkbss_key_t1

0x9698,	// (0x0003b150) cell_ituss_key_pane_ParamLimits

0x9698,	// (0x0003b150) cell_ituss_key_pane

0xf2ba,	// (0x00040d72) bg_cell_ituss_key_g1_ParamLimits

0xf2ba,	// (0x00040d72) bg_cell_ituss_key_g1

0xf2c6,	// (0x00040d7e) cell_ituss_key_pane_g1_ParamLimits

0xf2c6,	// (0x00040d7e) cell_ituss_key_pane_g1

0x96a9,	// (0x0003b161) cell_ituss_key_pane_g2_ParamLimits

0x96a9,	// (0x0003b161) cell_ituss_key_pane_g2

0x0005,

0xfed3,	// (0x0004198b) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0004198b) cell_ituss_key_pane_g

0x972d,	// (0x0003b1e5) cell_ituss_key_t1_ParamLimits

0x972d,	// (0x0003b1e5) cell_ituss_key_t1

0x9767,	// (0x0003b21f) cell_ituss_key_t2_ParamLimits

0x9767,	// (0x0003b21f) cell_ituss_key_t2

0x9799,	// (0x0003b251) cell_ituss_key_t3_ParamLimits

0x9799,	// (0x0003b251) cell_ituss_key_t3

0x97ca,	// (0x0003b282) cell_ituss_key_t4_ParamLimits

0x97ca,	// (0x0003b282) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x00041998) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x00041998) cell_ituss_key_t

0xf2ec,	// (0x00040da4) cell_vkbss_key_3p_pane_g1

0xf2f4,	// (0x00040dac) cell_vkbss_key_3p_pane_g2

0xf2fc,	// (0x00040db4) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x000419a3) cell_vkbss_key_3p_pane_g

0x2cce,	// (0x00034786) bg_popup_fep_char_preview_window_cp02

0xf304,	// (0x00040dbc) popup_fep_char_pre_window_t1

0xe65f,	// (0x00040117) main_ai5_sk_pane

0xed67,	// (0x0004081f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed73,	// (0x0004082b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6ec,	// (0x0003e1a4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed88,	// (0x00040840) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0004196f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed94,	// (0x0004084c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2412,	// (0x00033eca) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf312,	// (0x00040dca) main_ai5_sk_pane_g1

0x9ed9,	// (0x0003b991) popup_query_code_window_g1

0xf180,	// (0x00040c38) popup_fep_vkb_icf_pane

0xf1ad,	// (0x00040c65) popup_fep_vtchi_icf_pane

0xf31b,	// (0x00040dd3) bg_icf_pane

0xf31b,	// (0x00040dd3) list_vkb_icf_pane

0xf327,	// (0x00040ddf) bg_icf_pane_cp01

0xf33a,	// (0x00040df2) vtchi_icf_list_pane

0xf39a,	// (0x00040e52) list_vkb_icf_pane_t1_ParamLimits

0xf39a,	// (0x00040e52) list_vkb_icf_pane_t1

0xf3bf,	// (0x00040e77) vtchi_icf_list_pane_t1_ParamLimits

0xf3bf,	// (0x00040e77) vtchi_icf_list_pane_t1

0xf16a,	// (0x00040c22) popup_fep_ituss_window_ParamLimits

0xf1ad,	// (0x00040c65) popup_fep_vtchi_icf_pane_ParamLimits

0xf1d6,	// (0x00040c8e) ituss_keypad_pane_ParamLimits

0x9637,	// (0x0003b0ef) ituss_sks_pane

0xf31b,	// (0x00040dd3) bg_icf_pane_ParamLimits

0xf13a,	// (0x00040bf2) icf_edit_indi_pane_ParamLimits

0xf13a,	// (0x00040bf2) icf_edit_indi_pane

0xf31b,	// (0x00040dd3) list_vkb_icf_pane_ParamLimits

0xf327,	// (0x00040ddf) bg_icf_pane_cp01_ParamLimits

0xf155,	// (0x00040c0d) icf_edit_indi_pane_cp01_ParamLimits

0xf155,	// (0x00040c0d) icf_edit_indi_pane_cp01

0xf33a,	// (0x00040df2) vtchi_query_pane

0xe4db,	// (0x0003ff93) icf_edit_indi_pane_g1_ParamLimits

0xe4db,	// (0x0003ff93) icf_edit_indi_pane_g1

0xf43a,	// (0x00040ef2) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x00040ef2) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x000419ce) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x000419ce) icf_edit_indi_pane_g

0xf44e,	// (0x00040f06) icf_edit_indi_pane_t1

0xf3e3,	// (0x00040e9b) bg_input_focus_pane_cp042

0x2354,	// (0x00033e0c) vtchi_button_pane

0xf3ec,	// (0x00040ea4) vtchi_query_pane_t1

0xf3fa,	// (0x00040eb2) vtchi_query_pane_t2

0xf408,	// (0x00040ec0) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x000419bd) vtchi_query_pane_t

0x5ebd,	// (0x00037975) bg_button_pane_cp13

0xf416,	// (0x00040ece) vtchi_button_pane_g1

0x980d,	// (0x0003b2c5) ituss_sks_pane_g1

0x9818,	// (0x0003b2d0) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x000419c4) ituss_sks_pane_g

0xf41e,	// (0x00040ed6) ituss_sks_pane_t1

0xf42c,	// (0x00040ee4) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x000419c9) ituss_sks_pane_t

0xba9a,	// (0x0003d552) indicator_nsta_pane_cp_g1

0xbaa3,	// (0x0003d55b) indicator_nsta_pane_cp_g2

0xbaab,	// (0x0003d563) indicator_nsta_pane_cp_g3

0xbab3,	// (0x0003d56b) indicator_nsta_pane_cp_g4

0xbaa3,	// (0x0003d55b) indicator_nsta_pane_cp_g5

0xbaab,	// (0x0003d563) indicator_nsta_pane_cp_g6

0x0005,

0xfa90,	// (0x00041548) indicator_nsta_pane_cp_g

0xe22e,	// (0x0003fce6) cell_graphic2_pane_t2_ParamLimits

0xe22e,	// (0x0003fce6) cell_graphic2_pane_t2

0x0001,

0xfda2,	// (0x0004185a) cell_graphic2_pane_t_ParamLimits

0xfda2,	// (0x0004185a) cell_graphic2_pane_t

0xe25a,	// (0x0003fd12) cell_graphic2_control_pane_t1

0x705d,	// (0x00038b15) signal_pane_g3_ParamLimits

0x705d,	// (0x00038b15) signal_pane_g3

0x706f,	// (0x00038b27) signal_pane_g4_ParamLimits

0x706f,	// (0x00038b27) signal_pane_g4

0xf124,	// (0x00040bdc) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf124,	// (0x00040bdc) cell_ai5_widget_list_row_pane_t3

0xf2da,	// (0x00040d92) cell_ituss_key_pane_t1_ParamLimits

0xf2da,	// (0x00040d92) cell_ituss_key_pane_t1

0x9b0c,	// (0x0003b5c4) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b0c,	// (0x0003b5c4) form_field_data_wide_pane_vc_t2

0x9b20,	// (0x0003b5d8) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b20,	// (0x0003b5d8) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x00041288) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x00041288) form_field_data_wide_pane_vc_t

0xb744,	// (0x0003d1fc) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb744,	// (0x0003d1fc) form_field_slider_wide_pane_vc_t3

0xb822,	// (0x0003d2da) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb822,	// (0x0003d2da) form_field_popup_wide_pane_vc_t2

0xb839,	// (0x0003d2f1) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb839,	// (0x0003d2f1) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7f,	// (0x00041537) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x00041537) form_field_popup_wide_pane_vc_t

0x93f7,	// (0x0003aeaf) aid_fshwr2_btn_pane_ParamLimits

0x940b,	// (0x0003aec3) aid_fshwr2_syb_pane_ParamLimits

0x941f,	// (0x0003aed7) aid_fshwr2_txt_pane_ParamLimits

0x8c26,	// (0x0003a6de) fshwr2_bg_pane_ParamLimits

0x942f,	// (0x0003aee7) fshwr2_func_candi_pane_ParamLimits

0x9453,	// (0x0003af0b) fshwr2_hwr_syb_pane_ParamLimits

0x946d,	// (0x0003af25) fshwr2_icf_pane_ParamLimits

0x4b8e,	// (0x00036646) list_double_graphic_pane_vc_g4_ParamLimits

0x4b8e,	// (0x00036646) list_double_graphic_pane_vc_g4

0x96c9,	// (0x0003b181) cell_ituss_key_pane_g3_ParamLimits

0x96c9,	// (0x0003b181) cell_ituss_key_pane_g3

0x97fb,	// (0x0003b2b3) cell_ituss_key_t5_ParamLimits

0x97fb,	// (0x0003b2b3) cell_ituss_key_t5

0xf196,	// (0x00040c4e) popup_fep_vkbss_window_ParamLimits

0xc81d,	// (0x0003e2d5) aid_cell_ai5_quarter

0xf44e,	// (0x00040f06) icf_edit_indi_pane_t1_ParamLimits

0x637c,	// (0x00037e34) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x637c,	// (0x00037e34) aid_tch_indicator_popup_pane_cp2

0x638f,	// (0x00037e47) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x638f,	// (0x00037e47) aid_tch_query_popup_data_pane_cp2

0x9e81,	// (0x0003b939) aid_tch_query_popup_pane_ParamLimits

0x9e81,	// (0x0003b939) aid_tch_query_popup_pane

0x9e81,	// (0x0003b939) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e81,	// (0x0003b939) aid_tch_query_popup_data_pane_cp1

0x2554,	// (0x0003400c) cell_fshwr2_syb_bg_pane_ParamLimits

0x9563,	// (0x0003b01b) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9577,	// (0x0003b02f) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf180,	// (0x00040c38) popup_fep_vkb_icf_pane_ParamLimits

0x9237,	// (0x0003acef) bg_popup_fep_char_preview_window_g10

0xe795,	// (0x0004024d) cell_ai5_widget_pane_g11_ParamLimits

0xe795,	// (0x0004024d) cell_ai5_widget_pane_g11

0xe7a1,	// (0x00040259) cell_ai5_widget_pane_g12_ParamLimits

0xe7a1,	// (0x00040259) cell_ai5_widget_pane_g12

0xe7ad,	// (0x00040265) cell_ai5_widget_pane_g13_ParamLimits

0xe7ad,	// (0x00040265) cell_ai5_widget_pane_g13

0xe8dc,	// (0x00040394) cell_ai5_widget_pane_t11_ParamLimits

0xe8dc,	// (0x00040394) cell_ai5_widget_pane_t11

0xe8ee,	// (0x000403a6) cell_ai5_widget_pane_t12_ParamLimits

0xe8ee,	// (0x000403a6) cell_ai5_widget_pane_t12

0x96d5,	// (0x0003b18d) cell_ituss_key_pane_g4_ParamLimits

0x96d5,	// (0x0003b18d) cell_ituss_key_pane_g4

0x96f1,	// (0x0003b1a9) cell_ituss_key_pane_g5_ParamLimits

0x96f1,	// (0x0003b1a9) cell_ituss_key_pane_g5

0x970d,	// (0x0003b1c5) cell_ituss_key_pane_g6_ParamLimits

0x970d,	// (0x0003b1c5) cell_ituss_key_pane_g6

0x99f2,	// (0x0003b4aa) bg_icf_pane_g1

0xf342,	// (0x00040dfa) bg_icf_pane_g2

0xf34e,	// (0x00040e06) bg_icf_pane_g3

0xf358,	// (0x00040e10) bg_icf_pane_g4

0xf364,	// (0x00040e1c) bg_icf_pane_g5

0xf36e,	// (0x00040e26) bg_icf_pane_g6

0xf37a,	// (0x00040e32) bg_icf_pane_g7

0xf384,	// (0x00040e3c) bg_icf_pane_g8

0xf390,	// (0x00040e48) bg_icf_pane_g9

0x0008,

0xfef2,	// (0x000419aa) bg_icf_pane_g

0xf1c3,	// (0x00040c7b) popup_hyb_candi_window_ParamLimits

0xf1c3,	// (0x00040c7b) popup_hyb_candi_window

0x9a7e,	// (0x0003b536) bg_popup_sub_pane_cp01_ParamLimits

0x9a7e,	// (0x0003b536) bg_popup_sub_pane_cp01

0xf467,	// (0x00040f1f) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x00040f1f) entry_hyb_candi_pane

0xf476,	// (0x00040f2e) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x00040f2e) grid_hyb_candi_pane

0xf48b,	// (0x00040f43) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x00040f43) grid_hyb_phrase_pane

0xf49a,	// (0x00040f52) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x00040f52) cell_hyb_candi_pane

0xf4bd,	// (0x00040f75) cell_hyb_candi_scroll_pane

0x2864,	// (0x0003431c) cell_hyb_candi_pane_g1

0xf4c6,	// (0x00040f7e) cell_hyb_candi_pane_t1

0xf4d4,	// (0x00040f8c) cell_hyb_phrase_pane

0x2864,	// (0x0003431c) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x00040f95) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x00040fa3) entry_hyb_candi_pane_t1

0x2cce,	// (0x00034786) input_focus_pane_cp06

0xf4f9,	// (0x00040fb1) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x00040fb9) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x00040fc1) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x00040fc9) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x00040fd1) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x00040fd9) cell_hyb_candi_scroll_pane_g4
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00031aef };

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
0x5cf6,	// (0x000377e5) Screen

0x5d02,	// (0x000377f1) application_window_ParamLimits

0x5d02,	// (0x000377f1) application_window

0x1feb,	// (0x00033ada) screen_g1

0x5d5e,	// (0x0003784d) area_bottom_pane_ParamLimits

0x5d5e,	// (0x0003784d) area_bottom_pane

0x5e1e,	// (0x0003790d) area_top_pane_ParamLimits

0x5e1e,	// (0x0003790d) area_top_pane

0x5ebc,	// (0x000379ab) main_pane_ParamLimits

0x5ebc,	// (0x000379ab) main_pane

0x1ff5,	// (0x00033ae4) misc_graphics

0x7d58,	// (0x00039847) battery_pane_ParamLimits

0x7d58,	// (0x00039847) battery_pane

0xa269,	// (0x0003bd58) bg_status_flat_pane_g8

0xa271,	// (0x0003bd60) bg_status_flat_pane_g9

0x7e20,	// (0x0003990f) context_pane_ParamLimits

0x7e20,	// (0x0003990f) context_pane

0x7f36,	// (0x00039a25) navi_pane_ParamLimits

0x7f36,	// (0x00039a25) navi_pane

0x7fba,	// (0x00039aa9) signal_pane_ParamLimits

0x7fba,	// (0x00039aa9) signal_pane

0x0008,

0xf840,	// (0x0004132f) bg_status_flat_pane_g

0x984a,	// (0x0003b339) status_pane_g1_ParamLimits

0x984a,	// (0x0003b339) status_pane_g1

0x985e,	// (0x0003b34d) status_pane_g2_ParamLimits

0x985e,	// (0x0003b34d) status_pane_g2

0x986a,	// (0x0003b359) status_pane_g3_ParamLimits

0x986a,	// (0x0003b359) status_pane_g3

0x0004,

0xf76c,	// (0x0004125b) status_pane_g_ParamLimits

0xf76c,	// (0x0004125b) status_pane_g

0x989e,	// (0x0003b38d) title_pane_ParamLimits

0x989e,	// (0x0003b38d) title_pane

0x98db,	// (0x0003b3ca) uni_indicator_pane_ParamLimits

0x98db,	// (0x0003b3ca) uni_indicator_pane

0x2e2f,	// (0x0003491e) bg_list_pane_ParamLimits

0x2e2f,	// (0x0003491e) bg_list_pane

0x7723,	// (0x00039212) find_pane

0x2549,	// (0x00034038) listscroll_app_pane_ParamLimits

0x2549,	// (0x00034038) listscroll_app_pane

0x2e4f,	// (0x0003493e) listscroll_form_pane

0x5c78,	// (0x00037767) listscroll_gen_pane_ParamLimits

0x5c78,	// (0x00037767) listscroll_gen_pane

0x772b,	// (0x0003921a) listscroll_set_pane

0x6c30,	// (0x0003871f) main_idle_act_pane

0x2cc3,	// (0x000347b2) main_idle_trad_pane

0x2cc3,	// (0x000347b2) main_list_empty_pane

0x2549,	// (0x00034038) main_midp_pane

0x2e69,	// (0x00034958) main_pane_g1_ParamLimits

0x2e69,	// (0x00034958) main_pane_g1

0x7741,	// (0x00039230) popup_ai_message_window_ParamLimits

0x7741,	// (0x00039230) popup_ai_message_window

0x77e5,	// (0x000392d4) popup_fep_china_uni_window_ParamLimits

0x77e5,	// (0x000392d4) popup_fep_china_uni_window

0x783f,	// (0x0003932e) popup_fep_japan_candidate_window_ParamLimits

0x783f,	// (0x0003932e) popup_fep_japan_candidate_window

0x785d,	// (0x0003934c) popup_fep_japan_predictive_window_ParamLimits

0x785d,	// (0x0003934c) popup_fep_japan_predictive_window

0x788d,	// (0x0003937c) popup_find_window

0x789a,	// (0x00039389) popup_grid_graphic_window_ParamLimits

0x789a,	// (0x00039389) popup_grid_graphic_window

0x78c4,	// (0x000393b3) popup_large_graphic_colour_window

0x78ea,	// (0x000393d9) popup_menu_window_ParamLimits

0x78ea,	// (0x000393d9) popup_menu_window

0x7aa6,	// (0x00039595) popup_note_image_window

0x7a92,	// (0x00039581) popup_note_wait_window_ParamLimits

0x7a92,	// (0x00039581) popup_note_wait_window

0x7a92,	// (0x00039581) popup_note_window_ParamLimits

0x7a92,	// (0x00039581) popup_note_window

0x7afc,	// (0x000395eb) popup_query_code_window_ParamLimits

0x7afc,	// (0x000395eb) popup_query_code_window

0x7b10,	// (0x000395ff) popup_query_data_code_window_ParamLimits

0x7b10,	// (0x000395ff) popup_query_data_code_window

0x7b2d,	// (0x0003961c) popup_query_data_window_ParamLimits

0x7b2d,	// (0x0003961c) popup_query_data_window

0x7b49,	// (0x00039638) popup_query_sat_info_window_ParamLimits

0x7b49,	// (0x00039638) popup_query_sat_info_window

0x7b82,	// (0x00039671) popup_snote_single_graphic_window_ParamLimits

0x7b82,	// (0x00039671) popup_snote_single_graphic_window

0x7b82,	// (0x00039671) popup_snote_single_text_window_ParamLimits

0x7b82,	// (0x00039671) popup_snote_single_text_window

0x7b97,	// (0x00039686) popup_sub_window_general

0x7cc7,	// (0x000397b6) popup_window_general_ParamLimits

0x7cc7,	// (0x000397b6) popup_window_general

0x7cdc,	// (0x000397cb) power_save_pane

0x758a,	// (0x00039079) control_pane_g1_ParamLimits

0x758a,	// (0x00039079) control_pane_g1

0x75b1,	// (0x000390a0) control_pane_g2_ParamLimits

0x75b1,	// (0x000390a0) control_pane_g2

0x2e19,	// (0x00034908) control_pane_g3_ParamLimits

0x2e19,	// (0x00034908) control_pane_g3

0x0007,

0xf754,	// (0x00041243) control_pane_g_ParamLimits

0xf754,	// (0x00041243) control_pane_g

0x7622,	// (0x00039111) control_pane_t1_ParamLimits

0x7622,	// (0x00039111) control_pane_t1

0x7678,	// (0x00039167) control_pane_t2_ParamLimits

0x7678,	// (0x00039167) control_pane_t2

0x0002,

0xf765,	// (0x00041254) control_pane_t_ParamLimits

0xf765,	// (0x00041254) control_pane_t

0x7503,	// (0x00038ff2) navi_navi_volume_pane_cp1

0x750b,	// (0x00038ffa) status_small_icon_pane

0x2dc5,	// (0x000348b4) status_small_pane_g1_ParamLimits

0x2dc5,	// (0x000348b4) status_small_pane_g1

0x7513,	// (0x00039002) status_small_pane_g2_ParamLimits

0x7513,	// (0x00039002) status_small_pane_g2

0x2df9,	// (0x000348e8) status_small_pane_g3_ParamLimits

0x2df9,	// (0x000348e8) status_small_pane_g3

0x751f,	// (0x0003900e) status_small_pane_g4_ParamLimits

0x751f,	// (0x0003900e) status_small_pane_g4

0x752b,	// (0x0003901a) status_small_pane_g5_ParamLimits

0x752b,	// (0x0003901a) status_small_pane_g5

0x7539,	// (0x00039028) status_small_pane_g6_ParamLimits

0x7539,	// (0x00039028) status_small_pane_g6

0x0007,

0xf743,	// (0x00041232) status_small_pane_g_ParamLimits

0xf743,	// (0x00041232) status_small_pane_g

0x7554,	// (0x00039043) status_small_pane_t1

0x7576,	// (0x00039065) status_small_wait_pane_ParamLimits

0x7576,	// (0x00039065) status_small_wait_pane

0x7019,	// (0x00038b08) aid_levels_signal_ParamLimits

0x7019,	// (0x00038b08) aid_levels_signal

0x702b,	// (0x00038b1a) signal_pane_g1_ParamLimits

0x702b,	// (0x00038b1a) signal_pane_g1

0x7040,	// (0x00038b2f) signal_pane_g2_ParamLimits

0x7040,	// (0x00038b2f) signal_pane_g2

0x0003,

0xf6d4,	// (0x000411c3) signal_pane_g_ParamLimits

0xf6d4,	// (0x000411c3) signal_pane_g

0x28b1,	// (0x000343a0) context_pane_g1

0x60fd,	// (0x00037bec) title_pane_g1

0x6127,	// (0x00037c16) title_pane_t1

0x200b,	// (0x00033afa) title_pane_t2

0x2031,	// (0x00033b20) title_pane_t3

0x0002,

0xf532,	// (0x00041021) title_pane_t

0x98f3,	// (0x0003b3e2) aid_levels_battery_ParamLimits

0x98f3,	// (0x0003b3e2) aid_levels_battery

0x9907,	// (0x0003b3f6) battery_pane_g1_ParamLimits

0x9907,	// (0x0003b3f6) battery_pane_g1

0x991d,	// (0x0003b40c) battery_pane_g2_ParamLimits

0x991d,	// (0x0003b40c) battery_pane_g2

0x0001,

0xf777,	// (0x00041266) battery_pane_g_ParamLimits

0xf777,	// (0x00041266) battery_pane_g

0xab8d,	// (0x0003c67c) uni_indicator_pane_g1

0xaba0,	// (0x0003c68f) uni_indicator_pane_g2

0xabb2,	// (0x0003c6a1) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x000413d7) uni_indicator_pane_g

0x2b5a,	// (0x00034649) navi_icon_pane_ParamLimits

0x2b5a,	// (0x00034649) navi_icon_pane

0x2aa3,	// (0x00034592) navi_midp_pane

0x2b76,	// (0x00034665) navi_navi_pane

0x2b80,	// (0x0003466f) navi_text_pane_ParamLimits

0x2b80,	// (0x0003466f) navi_text_pane

0x1feb,	// (0x00033ada) status_small_wait_pane_g1

0x2282,	// (0x00033d71) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x000413d2) status_small_wait_pane_g

0xa8b4,	// (0x0003c3a3) navi_navi_icon_text_pane

0xa8bc,	// (0x0003c3ab) navi_navi_pane_g1_ParamLimits

0xa8bc,	// (0x0003c3ab) navi_navi_pane_g1

0xa8ce,	// (0x0003c3bd) navi_navi_pane_g2_ParamLimits

0xa8ce,	// (0x0003c3bd) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x000413a0) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x000413a0) navi_navi_pane_g

0xa8e0,	// (0x0003c3cf) navi_navi_tabs_pane

0xa8e9,	// (0x0003c3d8) navi_navi_text_pane

0xa8b4,	// (0x0003c3a3) navi_navi_volume_pane

0xa890,	// (0x0003c37f) navi_text_pane_t1

0xa884,	// (0x0003c373) navi_icon_pane_g1

0xa7d7,	// (0x0003c2c6) navi_navi_text_pane_t1

0x82cd,	// (0x00039dbc) navi_navi_volume_pane_g1

0x82d5,	// (0x00039dc4) volume_small_pane

0xa73d,	// (0x0003c22c) navi_navi_icon_text_pane_g1

0xa745,	// (0x0003c234) navi_navi_icon_text_pane_t1

0x2b76,	// (0x00034665) navi_tabs_2_long_pane

0x2b76,	// (0x00034665) navi_tabs_2_pane

0x2b76,	// (0x00034665) navi_tabs_3_long_pane

0x2b76,	// (0x00034665) navi_tabs_3_pane

0x2b76,	// (0x00034665) navi_tabs_4_pane

0x82ad,	// (0x00039d9c) tabs_2_active_pane_ParamLimits

0x82ad,	// (0x00039d9c) tabs_2_active_pane

0x82bd,	// (0x00039dac) tabs_2_passive_pane_ParamLimits

0x82bd,	// (0x00039dac) tabs_2_passive_pane

0x827b,	// (0x00039d6a) tabs_3_active_pane_ParamLimits

0x827b,	// (0x00039d6a) tabs_3_active_pane

0x828b,	// (0x00039d7a) tabs_3_passive_pane_ParamLimits

0x828b,	// (0x00039d7a) tabs_3_passive_pane

0x829c,	// (0x00039d8b) tabs_3_passive_pane_cp_ParamLimits

0x829c,	// (0x00039d8b) tabs_3_passive_pane_cp

0x8237,	// (0x00039d26) tabs_4_active_pane_ParamLimits

0x8237,	// (0x00039d26) tabs_4_active_pane

0x8248,	// (0x00039d37) tabs_4_passive_pane_ParamLimits

0x8248,	// (0x00039d37) tabs_4_passive_pane

0x8259,	// (0x00039d48) tabs_4_passive_pane_cp_ParamLimits

0x8259,	// (0x00039d48) tabs_4_passive_pane_cp

0x826a,	// (0x00039d59) tabs_4_passive_pane_cp2_ParamLimits

0x826a,	// (0x00039d59) tabs_4_passive_pane_cp2

0x8213,	// (0x00039d02) tabs_2_long_active_pane_ParamLimits

0x8213,	// (0x00039d02) tabs_2_long_active_pane

0x8225,	// (0x00039d14) tabs_2_long_passive_pane_ParamLimits

0x8225,	// (0x00039d14) tabs_2_long_passive_pane

0x81ce,	// (0x00039cbd) tabs_3_long_active_pane_ParamLimits

0x81ce,	// (0x00039cbd) tabs_3_long_active_pane

0x81e7,	// (0x00039cd6) tabs_3_long_passive_pane_ParamLimits

0x81e7,	// (0x00039cd6) tabs_3_long_passive_pane

0x81fa,	// (0x00039ce9) tabs_3_long_passive_pane_cp_ParamLimits

0x81fa,	// (0x00039ce9) tabs_3_long_passive_pane_cp

0x8174,	// (0x00039c63) volume_small_pane_g1

0x817d,	// (0x00039c6c) volume_small_pane_g2

0x8186,	// (0x00039c75) volume_small_pane_g3

0x818f,	// (0x00039c7e) volume_small_pane_g4

0x8198,	// (0x00039c87) volume_small_pane_g5

0x81a1,	// (0x00039c90) volume_small_pane_g6

0x81aa,	// (0x00039c99) volume_small_pane_g7

0x81b3,	// (0x00039ca2) volume_small_pane_g8

0x81bc,	// (0x00039cab) volume_small_pane_g9

0x81c5,	// (0x00039cb4) volume_small_pane_g10

0x0009,

0xf87d,	// (0x0004136c) volume_small_pane_g

0x2051,	// (0x00033b40) bg_active_tab_pane_cp2_ParamLimits

0x2051,	// (0x00033b40) bg_active_tab_pane_cp2

0x618f,	// (0x00037c7e) tabs_3_active_pane_g1

0x6197,	// (0x00037c86) tabs_3_active_pane_t1

0x2051,	// (0x00033b40) bg_passive_tab_pane_cp2_ParamLimits

0x2051,	// (0x00033b40) bg_passive_tab_pane_cp2

0x618f,	// (0x00037c7e) tabs_3_passive_pane_g1

0x6197,	// (0x00037c86) tabs_3_passive_pane_t1

0x2051,	// (0x00033b40) bg_active_tab_pane_cp3_ParamLimits

0x2051,	// (0x00033b40) bg_active_tab_pane_cp3

0x61a9,	// (0x00037c98) tabs_4_active_pane_g1

0x61b1,	// (0x00037ca0) tabs_4_active_pane_t1

0x2051,	// (0x00033b40) bg_passive_tab_pane_cp3_ParamLimits

0x2051,	// (0x00033b40) bg_passive_tab_pane_cp3

0x61a9,	// (0x00037c98) tabs_4_1_passive_pane_g1

0x61b1,	// (0x00037ca0) tabs_4_1_passive_pane_t1

0x2549,	// (0x00034038) list_highlight_pane_cp2

0xadf5,	// (0x0003c8e4) list_set_pane_ParamLimits

0xadf5,	// (0x0003c8e4) list_set_pane

0xae97,	// (0x0003c986) main_pane_set_t1_ParamLimits

0xae97,	// (0x0003c986) main_pane_set_t1

0xaeb7,	// (0x0003c9a6) main_pane_set_t2_ParamLimits

0xaeb7,	// (0x0003c9a6) main_pane_set_t2

0xaecb,	// (0x0003c9ba) main_pane_set_t3_ParamLimits

0xaecb,	// (0x0003c9ba) main_pane_set_t3

0xaedd,	// (0x0003c9cc) main_pane_set_t4_ParamLimits

0xaedd,	// (0x0003c9cc) main_pane_set_t4

0x0003,

0xf94d,	// (0x0004143c) main_pane_set_t_ParamLimits

0xf94d,	// (0x0004143c) main_pane_set_t

0xaeef,	// (0x0003c9de) setting_code_pane

0xaefb,	// (0x0003c9ea) setting_slider_graphic_pane

0xaefb,	// (0x0003c9ea) setting_slider_pane

0xaefb,	// (0x0003c9ea) setting_text_pane

0xaefb,	// (0x0003c9ea) setting_volume_pane

0x61c3,	// (0x00037cb2) volume_set_pane

0x2051,	// (0x00033b40) bg_set_opt_pane_cp

0x61cb,	// (0x00037cba) setting_slider_pane_t1

0x61e4,	// (0x00037cd3) setting_slider_pane_t2

0x61fe,	// (0x00037ced) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00041028) setting_slider_pane_t

0x6216,	// (0x00037d05) slider_set_pane

0x1ff5,	// (0x00033ae4) bg_set_opt_pane_cp2

0x205f,	// (0x00033b4e) setting_slider_graphic_pane_g1

0x622c,	// (0x00037d1b) setting_slider_graphic_pane_t1

0x623c,	// (0x00037d2b) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0004102f) setting_slider_graphic_pane_t

0x624c,	// (0x00037d3b) slider_set_pane_cp

0x1ff5,	// (0x00033ae4) input_focus_pane_cp1

0xadb4,	// (0x0003c8a3) list_set_text_pane

0x1feb,	// (0x00033ada) setting_text_pane_g1

0x1ff5,	// (0x00033ae4) input_focus_pane_cp2

0x1feb,	// (0x00033ada) setting_code_pane_g1

0x2068,	// (0x00033b57) setting_code_pane_t1

0x456f,	// (0x0003605e) set_text_pane_t1_ParamLimits

0x456f,	// (0x0003605e) set_text_pane_t1

0x245f,	// (0x00033f4e) set_opt_bg_pane_g1

0x2467,	// (0x00033f56) set_opt_bg_pane_g2

0xad8e,	// (0x0003c87d) set_opt_bg_pane_g3

0x2477,	// (0x00033f66) set_opt_bg_pane_g4

0x247f,	// (0x00033f6e) set_opt_bg_pane_g5

0x2487,	// (0x00033f76) set_opt_bg_pane_g6

0xad98,	// (0x0003c887) set_opt_bg_pane_g7

0xada0,	// (0x0003c88f) set_opt_bg_pane_g8

0xadaa,	// (0x0003c899) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x00041429) set_opt_bg_pane_g

0xad81,	// (0x0003c870) slider_set_pane_g1

0x8354,	// (0x00039e43) slider_set_pane_g2

0x0006,

0xf92b,	// (0x0004141a) slider_set_pane_g

0x82de,	// (0x00039dcd) volume_set_pane_g1

0x82e6,	// (0x00039dd5) volume_set_pane_g2

0x82ee,	// (0x00039ddd) volume_set_pane_g3

0x82f6,	// (0x00039de5) volume_set_pane_g4

0x82fe,	// (0x00039ded) volume_set_pane_g5

0x8306,	// (0x00039df5) volume_set_pane_g6

0x830e,	// (0x00039dfd) volume_set_pane_g7

0x8316,	// (0x00039e05) volume_set_pane_g8

0x831e,	// (0x00039e0d) volume_set_pane_g9

0x8326,	// (0x00039e15) volume_set_pane_g10

0x0009,

0xf903,	// (0x000413f2) volume_set_pane_g

0x6254,	// (0x00037d43) indicator_pane_ParamLimits

0x6254,	// (0x00037d43) indicator_pane

0x6260,	// (0x00037d4f) main_idle_pane_g2_ParamLimits

0x6260,	// (0x00037d4f) main_idle_pane_g2

0x6288,	// (0x00037d77) main_pane_idle_g1_ParamLimits

0x6288,	// (0x00037d77) main_pane_idle_g1

0x2076,	// (0x00033b65) popup_clock_digital_analogue_window_ParamLimits

0x2076,	// (0x00033b65) popup_clock_digital_analogue_window

0x6295,	// (0x00037d84) soft_indicator_pane_ParamLimits

0x6295,	// (0x00037d84) soft_indicator_pane

0x62a1,	// (0x00037d90) wallpaper_pane_ParamLimits

0x62a1,	// (0x00037d90) wallpaper_pane

0x1feb,	// (0x00033ada) wallpaper_pane_g1

0x62ad,	// (0x00037d9c) indicator_pane_g1_ParamLimits

0x62ad,	// (0x00037d9c) indicator_pane_g1

0xb1c7,	// (0x0003ccb6) navi_navi_icon_text_pane_srt_g1

0x20a4,	// (0x00033b93) soft_indicator_pane_t1

0x20be,	// (0x00033bad) aid_ps_area_pane

0x62b9,	// (0x00037da8) aid_ps_clock_pane

0x20cf,	// (0x00033bbe) aid_ps_indicator_pane

0x20db,	// (0x00033bca) indicator_ps_pane_ParamLimits

0x20db,	// (0x00033bca) indicator_ps_pane

0x20ea,	// (0x00033bd9) power_save_pane_g1_ParamLimits

0x20ea,	// (0x00033bd9) power_save_pane_g1

0x20f6,	// (0x00033be5) power_save_pane_g2_ParamLimits

0x20f6,	// (0x00033be5) power_save_pane_g2

0x5d12,	// (0x00037801) aid_navinavi_width_pane

0x20be,	// (0x00033bad) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00041034) power_save_pane_g_ParamLimits

0xf545,	// (0x00041034) power_save_pane_g

0x2104,	// (0x00033bf3) power_save_pane_t1_ParamLimits

0x2104,	// (0x00033bf3) power_save_pane_t1

0x62b9,	// (0x00037da8) aid_ps_clock_pane_ParamLimits

0x20cf,	// (0x00033bbe) aid_ps_indicator_pane_ParamLimits

0x2116,	// (0x00033c05) power_save_pane_t4_ParamLimits

0x2116,	// (0x00033c05) power_save_pane_t4

0x0001,

0xf54a,	// (0x00041039) power_save_pane_t_ParamLimits

0xf54a,	// (0x00041039) power_save_pane_t

0x2140,	// (0x00033c2f) power_save_t3_ParamLimits

0x2140,	// (0x00033c2f) power_save_t3

0x212b,	// (0x00033c1a) power_save_t2_ParamLimits

0x212b,	// (0x00033c1a) power_save_t2

0x2155,	// (0x00033c44) indicator_ps_pane_g1

0x62c7,	// (0x00037db6) ai_gene_pane_ParamLimits

0x62c7,	// (0x00037db6) ai_gene_pane

0x62d3,	// (0x00037dc2) ai_links_pane_ParamLimits

0x62d3,	// (0x00037dc2) ai_links_pane

0x62df,	// (0x00037dce) indicator_pane_cp1_ParamLimits

0x62df,	// (0x00037dce) indicator_pane_cp1

0x62eb,	// (0x00037dda) main_pane_idle_g1_cp_ParamLimits

0x62eb,	// (0x00037dda) main_pane_idle_g1_cp

0x62f7,	// (0x00037de6) popup_ai_links_title_window

0x6300,	// (0x00037def) soft_indicator_pane_cp1_ParamLimits

0x6300,	// (0x00037def) soft_indicator_pane_cp1

0xab7b,	// (0x0003c66a) ai_links_pane_g1

0xab84,	// (0x0003c673) grid_ai_links_pane

0xab5e,	// (0x0003c64d) ai_gene_pane_1

0xab69,	// (0x0003c658) ai_gene_pane_2

0xab72,	// (0x0003c661) list_highlight_pane_cp4

0xab42,	// (0x0003c631) cell_ai_link_pane_ParamLimits

0xab42,	// (0x0003c631) cell_ai_link_pane

0xab3a,	// (0x0003c629) cell_ai_link_pane_g1

0x2282,	// (0x00033d71) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x000413cd) cell_ai_link_pane_g

0x1ff5,	// (0x00033ae4) grid_highlight_cp2

0x1ff5,	// (0x00033ae4) bg_popup_sub_pane_cp1

0x216c,	// (0x00033c5b) popup_ai_links_title_window_t1

0xaa8a,	// (0x0003c579) ai_gene_pane_1_g1_ParamLimits

0xaa8a,	// (0x0003c579) ai_gene_pane_1_g1

0xaa96,	// (0x0003c585) ai_gene_pane_1_g2_ParamLimits

0xaa96,	// (0x0003c585) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x000413c3) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x000413c3) ai_gene_pane_1_g

0xaaa3,	// (0x0003c592) ai_gene_pane_1_t1_ParamLimits

0xaaa3,	// (0x0003c592) ai_gene_pane_1_t1

0xaad7,	// (0x0003c5c6) grid_ai_soft_ind_pane

0xaa75,	// (0x0003c564) ai_gene_pane_2_t1_ParamLimits

0xaa75,	// (0x0003c564) ai_gene_pane_2_t1

0x630c,	// (0x00037dfb) main_pane_empty_t1_ParamLimits

0x630c,	// (0x00037dfb) main_pane_empty_t1

0x6324,	// (0x00037e13) main_pane_empty_t2_ParamLimits

0x6324,	// (0x00037e13) main_pane_empty_t2

0x6339,	// (0x00037e28) main_pane_empty_t3_ParamLimits

0x6339,	// (0x00037e28) main_pane_empty_t3

0x634b,	// (0x00037e3a) main_pane_empty_t4_ParamLimits

0x634b,	// (0x00037e3a) main_pane_empty_t4

0x635d,	// (0x00037e4c) main_pane_empty_t5_ParamLimits

0x635d,	// (0x00037e4c) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0004103e) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0004103e) main_pane_empty_t

0x24e4,	// (0x00033fd3) bg_popup_window_pane_ParamLimits

0x24e4,	// (0x00033fd3) bg_popup_window_pane

0xa7e5,	// (0x0003c2d4) find_popup_pane_cp2_ParamLimits

0xa7e5,	// (0x0003c2d4) find_popup_pane_cp2

0xa7f1,	// (0x0003c2e0) heading_pane_ParamLimits

0xa7f1,	// (0x0003c2e0) heading_pane

0x1ff5,	// (0x00033ae4) bg_popup_sub_pane

0xa75f,	// (0x0003c24e) bg_popup_window_pane_g1_ParamLimits

0xa75f,	// (0x0003c24e) bg_popup_window_pane_g1

0xa76b,	// (0x0003c25a) bg_popup_window_pane_g2_ParamLimits

0xa76b,	// (0x0003c25a) bg_popup_window_pane_g2

0xa777,	// (0x0003c266) bg_popup_window_pane_g3_ParamLimits

0xa777,	// (0x0003c266) bg_popup_window_pane_g3

0xa783,	// (0x0003c272) bg_popup_window_pane_g4_ParamLimits

0xa783,	// (0x0003c272) bg_popup_window_pane_g4

0xa78f,	// (0x0003c27e) bg_popup_window_pane_g5_ParamLimits

0xa78f,	// (0x0003c27e) bg_popup_window_pane_g5

0xa79b,	// (0x0003c28a) bg_popup_window_pane_g6_ParamLimits

0xa79b,	// (0x0003c28a) bg_popup_window_pane_g6

0xa7a7,	// (0x0003c296) bg_popup_window_pane_g7_ParamLimits

0xa7a7,	// (0x0003c296) bg_popup_window_pane_g7

0xa7b3,	// (0x0003c2a2) bg_popup_window_pane_g8_ParamLimits

0xa7b3,	// (0x0003c2a2) bg_popup_window_pane_g8

0xa7bf,	// (0x0003c2ae) bg_popup_window_pane_g9_ParamLimits

0xa7bf,	// (0x0003c2ae) bg_popup_window_pane_g9

0xa7cb,	// (0x0003c2ba) bg_popup_window_pane_g10_ParamLimits

0xa7cb,	// (0x0003c2ba) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x0004138b) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x0004138b) bg_popup_window_pane_g

0xa6f4,	// (0x0003c1e3) bg_popup_heading_pane_ParamLimits

0xa6f4,	// (0x0003c1e3) bg_popup_heading_pane

0x84a5,	// (0x00039f94) tabs_4_passive_pane_cp_srt_ParamLimits

0x84a5,	// (0x00039f94) tabs_4_passive_pane_cp_srt

0x84b7,	// (0x00039fa6) tabs_4_passive_pane_srt_ParamLimits

0xa708,	// (0x0003c1f7) heading_pane_g2

0x84b7,	// (0x00039fa6) tabs_4_passive_pane_srt

0x2549,	// (0x00034038) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2549,	// (0x00034038) bg_passive_tab_pane_cp3_srt

0xa710,	// (0x0003c1ff) heading_pane_t1_ParamLimits

0xa710,	// (0x0003c1ff) heading_pane_t1

0xa727,	// (0x0003c216) heading_pane_t2_ParamLimits

0xa727,	// (0x0003c216) heading_pane_t2

0x0001,

0xf897,	// (0x00041386) heading_pane_t_ParamLimits

0xf897,	// (0x00041386) heading_pane_t

0xa231,	// (0x0003bd20) bg_popup_heading_pane_g1

0xa2e0,	// (0x0003bdcf) bg_popup_heading_pane_g2

0xa2ea,	// (0x0003bdd9) bg_popup_heading_pane_g3

0xa2f4,	// (0x0003bde3) bg_popup_heading_pane_g4

0xa2fe,	// (0x0003bded) bg_popup_heading_pane_g5

0xa308,	// (0x0003bdf7) bg_popup_heading_pane_g6

0xa310,	// (0x0003bdff) bg_popup_heading_pane_g7

0xa318,	// (0x0003be07) bg_popup_heading_pane_g8

0xa322,	// (0x0003be11) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x00041342) bg_popup_heading_pane_g

0x99f2,	// (0x0003b4e1) bg_popup_sub_pane_g1

0x9a02,	// (0x0003b4f1) bg_popup_sub_pane_g2

0x99fa,	// (0x0003b4e9) bg_popup_sub_pane_g3

0x9a12,	// (0x0003b501) bg_popup_sub_pane_g4

0x9a0a,	// (0x0003b4f9) bg_popup_sub_pane_g5

0x9a1a,	// (0x0003b509) bg_popup_sub_pane_g6

0x9a22,	// (0x0003b511) bg_popup_sub_pane_g7

0x9a32,	// (0x0003b521) bg_popup_sub_pane_g8

0x9a2a,	// (0x0003b519) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x0004131c) bg_popup_sub_pane_g

0x2043,	// (0x00033b32) bg_popup_window_pane_cp5_ParamLimits

0x2043,	// (0x00033b32) bg_popup_window_pane_cp5

0x2189,	// (0x00033c78) popup_note_window_g1_ParamLimits

0x2189,	// (0x00033c78) popup_note_window_g1

0x2195,	// (0x00033c84) popup_note_window_t1_ParamLimits

0x2195,	// (0x00033c84) popup_note_window_t1

0x21ab,	// (0x00033c9a) popup_note_window_t2_ParamLimits

0x21ab,	// (0x00033c9a) popup_note_window_t2

0x21c1,	// (0x00033cb0) popup_note_window_t3_ParamLimits

0x21c1,	// (0x00033cb0) popup_note_window_t3

0x21d7,	// (0x00033cc6) popup_note_window_t4_ParamLimits

0x21d7,	// (0x00033cc6) popup_note_window_t4

0x21ff,	// (0x00033cee) popup_note_window_t5_ParamLimits

0x21ff,	// (0x00033cee) popup_note_window_t5

0x0004,

0xf55a,	// (0x00041049) popup_note_window_t_ParamLimits

0xf55a,	// (0x00041049) popup_note_window_t

0x2223,	// (0x00033d12) bg_popup_window_pane_cp6_ParamLimits

0x2223,	// (0x00033d12) bg_popup_window_pane_cp6

0xa1ad,	// (0x0003bc9c) popup_note_image_window_g1_ParamLimits

0xa1ad,	// (0x0003bc9c) popup_note_image_window_g1

0xa1b9,	// (0x0003bca8) popup_note_image_window_g2_ParamLimits

0xa1b9,	// (0x0003bca8) popup_note_image_window_g2

0x0001,

0xf821,	// (0x00041310) popup_note_image_window_g_ParamLimits

0xf821,	// (0x00041310) popup_note_image_window_g

0xa1d2,	// (0x0003bcc1) popup_note_image_window_t1_ParamLimits

0xa1d2,	// (0x0003bcc1) popup_note_image_window_t1

0xa1eb,	// (0x0003bcda) popup_note_image_window_t2_ParamLimits

0xa1eb,	// (0x0003bcda) popup_note_image_window_t2

0xa204,	// (0x0003bcf3) popup_note_image_window_t3_ParamLimits

0xa204,	// (0x0003bcf3) popup_note_image_window_t3

0x0002,

0xf826,	// (0x00041315) popup_note_image_window_t_ParamLimits

0xf826,	// (0x00041315) popup_note_image_window_t

0xa076,	// (0x0003bb65) bg_popup_window_pane_cp7_ParamLimits

0xa076,	// (0x0003bb65) bg_popup_window_pane_cp7

0xa0a6,	// (0x0003bb95) popup_note_wait_window_g1_ParamLimits

0xa0a6,	// (0x0003bb95) popup_note_wait_window_g1

0xa0b2,	// (0x0003bba1) popup_note_wait_window_g2_ParamLimits

0xa0b2,	// (0x0003bba1) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x000412fe) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x000412fe) popup_note_wait_window_g

0xa0ca,	// (0x0003bbb9) popup_note_wait_window_t1_ParamLimits

0xa0ca,	// (0x0003bbb9) popup_note_wait_window_t1

0xa0f1,	// (0x0003bbe0) popup_note_wait_window_t2_ParamLimits

0xa0f1,	// (0x0003bbe0) popup_note_wait_window_t2

0xa10e,	// (0x0003bbfd) popup_note_wait_window_t3_ParamLimits

0xa10e,	// (0x0003bbfd) popup_note_wait_window_t3

0xa121,	// (0x0003bc10) popup_note_wait_window_t4_ParamLimits

0xa121,	// (0x0003bc10) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x00041305) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x00041305) popup_note_wait_window_t

0xa146,	// (0x0003bc35) wait_bar_pane_ParamLimits

0xa146,	// (0x0003bc35) wait_bar_pane

0x1ff5,	// (0x00033ae4) wait_anim_pane

0x1ff5,	// (0x00033ae4) wait_border_pane

0x1feb,	// (0x00033ada) wait_anim_pane_g1

0x1feb,	// (0x00033ada) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x000411be) wait_anim_pane_g

0xa022,	// (0x0003bb11) wait_border_pane_g1

0xa02d,	// (0x0003bb1c) wait_border_pane_g2

0xa036,	// (0x0003bb25) wait_border_pane_g3

0x0002,

0xf808,	// (0x000412f7) wait_border_pane_g

0x9e8d,	// (0x0003b97c) bg_popup_window_pane_cp16_ParamLimits

0x9e8d,	// (0x0003b97c) bg_popup_window_pane_cp16

0x9f8d,	// (0x0003ba7c) indicator_popup_pane_cp4_ParamLimits

0x9f8d,	// (0x0003ba7c) indicator_popup_pane_cp4

0x9fa1,	// (0x0003ba90) popup_query_data_window_t1_ParamLimits

0x9fa1,	// (0x0003ba90) popup_query_data_window_t1

0x9fb3,	// (0x0003baa2) popup_query_data_window_t2_ParamLimits

0x9fb3,	// (0x0003baa2) popup_query_data_window_t2

0x9fcc,	// (0x0003babb) popup_query_data_window_t3_ParamLimits

0x9fcc,	// (0x0003babb) popup_query_data_window_t3

0x0002,

0xf801,	// (0x000412f0) popup_query_data_window_t_ParamLimits

0xf801,	// (0x000412f0) popup_query_data_window_t

0x9fe6,	// (0x0003bad5) query_popup_data_pane_ParamLimits

0x9fe6,	// (0x0003bad5) query_popup_data_pane

0x9ffa,	// (0x0003bae9) query_popup_data_pane_cp1_ParamLimits

0x9ffa,	// (0x0003bae9) query_popup_data_pane_cp1

0x9e8d,	// (0x0003b97c) bg_popup_window_pane_cp10_ParamLimits

0x9e8d,	// (0x0003b97c) bg_popup_window_pane_cp10

0x9ebf,	// (0x0003b9ae) indicator_popup_pane_ParamLimits

0x9ebf,	// (0x0003b9ae) indicator_popup_pane

0x9ee1,	// (0x0003b9d0) popup_query_code_window_t1_ParamLimits

0x9ee1,	// (0x0003b9d0) popup_query_code_window_t1

0x9efb,	// (0x0003b9ea) popup_query_code_window_t2_ParamLimits

0x9efb,	// (0x0003b9ea) popup_query_code_window_t2

0x9f44,	// (0x0003ba33) popup_query_code_window_t3_ParamLimits

0x9f44,	// (0x0003ba33) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x000412e9) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x000412e9) popup_query_code_window_t

0x9f73,	// (0x0003ba62) query_popup_pane_ParamLimits

0x9f73,	// (0x0003ba62) query_popup_pane

0x2223,	// (0x00033d12) bg_popup_window_pane_cp15_ParamLimits

0x2223,	// (0x00033d12) bg_popup_window_pane_cp15

0x6397,	// (0x00037e86) indicator_popup_pane_cp1_ParamLimits

0x6397,	// (0x00037e86) indicator_popup_pane_cp1

0x63aa,	// (0x00037e99) indicator_popup_pane_cp2_ParamLimits

0x63aa,	// (0x00037e99) indicator_popup_pane_cp2

0x63bd,	// (0x00037eac) popup_query_data_code_window_g1_ParamLimits

0x63bd,	// (0x00037eac) popup_query_data_code_window_g1

0x2241,	// (0x00033d30) popup_query_data_code_window_t1_ParamLimits

0x2241,	// (0x00033d30) popup_query_data_code_window_t1

0x2253,	// (0x00033d42) popup_query_data_code_window_t2_ParamLimits

0x2253,	// (0x00033d42) popup_query_data_code_window_t2

0x63d0,	// (0x00037ebf) popup_query_data_code_window_t3_ParamLimits

0x63d0,	// (0x00037ebf) popup_query_data_code_window_t3

0x63e6,	// (0x00037ed5) popup_query_data_code_window_t4_ParamLimits

0x63e6,	// (0x00037ed5) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00041054) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00041054) popup_query_data_code_window_t

0x8052,	// (0x00039b41) list_single_midp_graphic_pane_g3

0x63fe,	// (0x00037eed) query_popup_data_pane_cp2_ParamLimits

0x6411,	// (0x00037f00) query_popup_pane_cp2_ParamLimits

0x6411,	// (0x00037f00) query_popup_pane_cp2

0x1ff5,	// (0x00033ae4) bg_popup_window_pane_cp11

0x9e71,	// (0x0003b960) heading_pane_cp5

0x9e79,	// (0x0003b968) listscroll_popup_info_pane

0x1ff5,	// (0x00033ae4) input_focus_pane_cp3

0x2265,	// (0x00033d54) query_popup_pane_t1

0x2273,	// (0x00033d62) list_popup_info_pane_ParamLimits

0x2273,	// (0x00033d62) list_popup_info_pane

0x2282,	// (0x00033d71) listscroll_popup_info_pane_g1

0x228a,	// (0x00033d79) scroll_pane_cp7

0x6424,	// (0x00037f13) popup_info_list_pane_t1_ParamLimits

0x6424,	// (0x00037f13) popup_info_list_pane_t1

0x643e,	// (0x00037f2d) popup_info_list_pane_t2_ParamLimits

0x643e,	// (0x00037f2d) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0004105d) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0004105d) popup_info_list_pane_t

0x1ff5,	// (0x00033ae4) bg_popup_window_pane_cp12

0xb1e1,	// (0x0003ccd0) find_popup_pane

0x2051,	// (0x00033b40) bg_popup_window_pane_cp3

0x2294,	// (0x00033d83) heading_pane_cp3

0x22a3,	// (0x00033d92) listscroll_popup_graphic_pane

0x1ff5,	// (0x00033ae4) bg_popup_window_pane_cp4

0x64a8,	// (0x00037f97) heading_pane_cp4

0x22b3,	// (0x00033da2) listscroll_popup_colour_pane

0x64b2,	// (0x00037fa1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x64b2,	// (0x00037fa1) cell_large_graphic_colour_none_popup_pane

0x64c6,	// (0x00037fb5) grid_large_graphic_colour_popup_pane_ParamLimits

0x64c6,	// (0x00037fb5) grid_large_graphic_colour_popup_pane

0x64ea,	// (0x00037fd9) listscroll_popup_colour_pane_g1_ParamLimits

0x64ea,	// (0x00037fd9) listscroll_popup_colour_pane_g1

0x6501,	// (0x00037ff0) listscroll_popup_colour_pane_g2_ParamLimits

0x6501,	// (0x00037ff0) listscroll_popup_colour_pane_g2

0x6518,	// (0x00038007) listscroll_popup_colour_pane_g3_ParamLimits

0x6518,	// (0x00038007) listscroll_popup_colour_pane_g3

0x6528,	// (0x00038017) listscroll_popup_colour_pane_g4_ParamLimits

0x6528,	// (0x00038017) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00041062) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00041062) listscroll_popup_colour_pane_g

0x22bb,	// (0x00033daa) scroll_pane_cp6_ParamLimits

0x22bb,	// (0x00033daa) scroll_pane_cp6

0x6538,	// (0x00038027) cell_large_graphic_colour_popup_pane_ParamLimits

0x6538,	// (0x00038027) cell_large_graphic_colour_popup_pane

0x6557,	// (0x00038046) cell_large_graphic_colour_none_popup_pane_t1

0x1ff5,	// (0x00033ae4) grid_highlight_pane_cp5

0x22cd,	// (0x00033dbc) cell_large_graphic_colour_popup_pane_g1

0x22d5,	// (0x00033dc4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0004106b) cell_large_graphic_colour_popup_pane_g

0x22dd,	// (0x00033dcc) cell_large_graphic_colour_popup_pane_g2_copy1

0x22e6,	// (0x00033dd5) grid_highlight_pane_cp4

0x22ee,	// (0x00033ddd) bg_popup_window_pane_cp8_ParamLimits

0x22ee,	// (0x00033ddd) bg_popup_window_pane_cp8

0x6566,	// (0x00038055) popup_snote_single_text_window_g1_ParamLimits

0x6566,	// (0x00038055) popup_snote_single_text_window_g1

0x6578,	// (0x00038067) popup_snote_single_text_window_t1_ParamLimits

0x6578,	// (0x00038067) popup_snote_single_text_window_t1

0x658b,	// (0x0003807a) popup_snote_single_text_window_t2_ParamLimits

0x658b,	// (0x0003807a) popup_snote_single_text_window_t2

0x659e,	// (0x0003808d) popup_snote_single_text_window_t3_ParamLimits

0x659e,	// (0x0003808d) popup_snote_single_text_window_t3

0x65d7,	// (0x000380c6) popup_snote_single_text_window_t4_ParamLimits

0x65d7,	// (0x000380c6) popup_snote_single_text_window_t4

0x660b,	// (0x000380fa) popup_snote_single_text_window_t5_ParamLimits

0x660b,	// (0x000380fa) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00041070) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00041070) popup_snote_single_text_window_t

0x2309,	// (0x00033df8) bg_popup_window_pane_cp9_ParamLimits

0x2309,	// (0x00033df8) bg_popup_window_pane_cp9

0x6566,	// (0x00038055) popup_snote_single_graphic_window_g1_ParamLimits

0x6566,	// (0x00038055) popup_snote_single_graphic_window_g1

0x2317,	// (0x00033e06) popup_snote_single_graphic_window_g2_ParamLimits

0x2317,	// (0x00033e06) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0004107b) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0004107b) popup_snote_single_graphic_window_g

0x2323,	// (0x00033e12) popup_snote_single_graphic_window_t1_ParamLimits

0x2323,	// (0x00033e12) popup_snote_single_graphic_window_t1

0x2336,	// (0x00033e25) popup_snote_single_graphic_window_t2_ParamLimits

0x2336,	// (0x00033e25) popup_snote_single_graphic_window_t2

0x663a,	// (0x00038129) popup_snote_single_graphic_window_t3_ParamLimits

0x663a,	// (0x00038129) popup_snote_single_graphic_window_t3

0x6673,	// (0x00038162) popup_snote_single_graphic_window_t4_ParamLimits

0x6673,	// (0x00038162) popup_snote_single_graphic_window_t4

0x66a7,	// (0x00038196) popup_snote_single_graphic_window_t5_ParamLimits

0x66a7,	// (0x00038196) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00041080) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00041080) popup_snote_single_graphic_window_t

0xb123,	// (0x0003cc12) grid_graphic_popup_pane_ParamLimits

0xb123,	// (0x0003cc12) grid_graphic_popup_pane

0xb14d,	// (0x0003cc3c) listscroll_popup_graphic_pane_g1_ParamLimits

0xb14d,	// (0x0003cc3c) listscroll_popup_graphic_pane_g1

0xb161,	// (0x0003cc50) listscroll_popup_graphic_pane_g2_ParamLimits

0xb161,	// (0x0003cc50) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x00041466) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x00041466) listscroll_popup_graphic_pane_g

0xb175,	// (0x0003cc64) scroll_pane_cp5

0xb0b9,	// (0x0003cba8) cell_graphic_popup_pane_ParamLimits

0xb0b9,	// (0x0003cba8) cell_graphic_popup_pane

0xb09a,	// (0x0003cb89) cell_graphic_popup_pane_g1

0xb0a2,	// (0x0003cb91) cell_graphic_popup_pane_g2

0x22dd,	// (0x00033dcc) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x0004145f) cell_graphic_popup_pane_g

0xb0ab,	// (0x0003cb9a) cell_graphic_popup_pane_t2

0x22e6,	// (0x00033dd5) grid_highlight_pane_cp3

0x235b,	// (0x00033e4a) list_gen_pane_ParamLimits

0x235b,	// (0x00033e4a) list_gen_pane

0x2383,	// (0x00033e72) scroll_pane

0xaff2,	// (0x0003cae1) bg_list_pane_g1_ParamLimits

0xaff2,	// (0x0003cae1) bg_list_pane_g1

0xb00f,	// (0x0003cafe) bg_list_pane_g2_ParamLimits

0xb00f,	// (0x0003cafe) bg_list_pane_g2

0xb024,	// (0x0003cb13) bg_list_pane_g3_ParamLimits

0xb024,	// (0x0003cb13) bg_list_pane_g3

0xb038,	// (0x0003cb27) bg_list_pane_g4_ParamLimits

0xb038,	// (0x0003cb27) bg_list_pane_g4

0xb04c,	// (0x0003cb3b) bg_list_pane_g5_ParamLimits

0xb04c,	// (0x0003cb3b) bg_list_pane_g5

0x0004,

0xf965,	// (0x00041454) bg_list_pane_g_ParamLimits

0xf965,	// (0x00041454) bg_list_pane_g

0x83fa,	// (0x00039ee9) list_double2_graphic_large_graphic_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_double2_graphic_large_graphic_pane

0x83fa,	// (0x00039ee9) list_double2_graphic_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_double2_graphic_pane

0x83fa,	// (0x00039ee9) list_double2_large_graphic_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_double2_large_graphic_pane

0x83fa,	// (0x00039ee9) list_double2_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_double2_pane

0x83fa,	// (0x00039ee9) list_double_graphic_heading_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_double_graphic_heading_pane

0x83fa,	// (0x00039ee9) list_double_graphic_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_double_graphic_pane

0x83fa,	// (0x00039ee9) list_double_heading_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_double_heading_pane

0x83fa,	// (0x00039ee9) list_double_large_graphic_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_double_large_graphic_pane

0x83fa,	// (0x00039ee9) list_double_number_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_double_number_pane

0x83fa,	// (0x00039ee9) list_double_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_double_pane

0x83fa,	// (0x00039ee9) list_double_time_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_double_time_pane

0x83fa,	// (0x00039ee9) list_setting_number_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_setting_number_pane

0x83fa,	// (0x00039ee9) list_setting_pane_ParamLimits

0x83fa,	// (0x00039ee9) list_setting_pane

0x843b,	// (0x00039f2a) list_single_2graphic_pane_ParamLimits

0x843b,	// (0x00039f2a) list_single_2graphic_pane

0x843b,	// (0x00039f2a) list_single_graphic_heading_pane_ParamLimits

0x843b,	// (0x00039f2a) list_single_graphic_heading_pane

0x843b,	// (0x00039f2a) list_single_graphic_pane_ParamLimits

0x843b,	// (0x00039f2a) list_single_graphic_pane

0x843b,	// (0x00039f2a) list_single_heading_pane_ParamLimits

0x843b,	// (0x00039f2a) list_single_heading_pane

0xafcf,	// (0x0003cabe) list_single_large_graphic_pane_ParamLimits

0xafcf,	// (0x0003cabe) list_single_large_graphic_pane

0x843b,	// (0x00039f2a) list_single_number_heading_pane_ParamLimits

0x843b,	// (0x00039f2a) list_single_number_heading_pane

0x843b,	// (0x00039f2a) list_single_number_pane_ParamLimits

0x843b,	// (0x00039f2a) list_single_number_pane

0x843b,	// (0x00039f2a) list_single_pane_ParamLimits

0x843b,	// (0x00039f2a) list_single_pane

0x1ff5,	// (0x00033ae4) list_highlight_pane_cp1

0x4596,	// (0x00036085) list_single_pane_g1_ParamLimits

0x4596,	// (0x00036085) list_single_pane_g1

0x45a2,	// (0x00036091) list_single_pane_g2_ParamLimits

0x45a2,	// (0x00036091) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00041092) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00041092) list_single_pane_g

0x83e4,	// (0x00039ed3) list_single_pane_t1_ParamLimits

0x83e4,	// (0x00039ed3) list_single_pane_t1

0x4596,	// (0x00036085) list_single_number_pane_g1_ParamLimits

0x4596,	// (0x00036085) list_single_number_pane_g1

0x45a2,	// (0x00036091) list_single_number_pane_g2_ParamLimits

0x45a2,	// (0x00036091) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00041092) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00041092) list_single_number_pane_g

0x66ec,	// (0x000381db) list_single_number_pane_t1_ParamLimits

0x66ec,	// (0x000381db) list_single_number_pane_t1

0x832e,	// (0x00039e1d) list_single_number_pane_t2_ParamLimits

0x832e,	// (0x00039e1d) list_single_number_pane_t2

0x0001,

0xf926,	// (0x00041415) list_single_number_pane_t_ParamLimits

0xf926,	// (0x00041415) list_single_number_pane_t

0x66e0,	// (0x000381cf) list_single_graphic_pane_g1_ParamLimits

0x66e0,	// (0x000381cf) list_single_graphic_pane_g1

0x4596,	// (0x00036085) list_single_graphic_pane_g2_ParamLimits

0x4596,	// (0x00036085) list_single_graphic_pane_g2

0x45a2,	// (0x00036091) list_single_graphic_pane_g3_ParamLimits

0x45a2,	// (0x00036091) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0004108b) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0004108b) list_single_graphic_pane_g

0x66ec,	// (0x000381db) list_single_graphic_pane_t1_ParamLimits

0x66ec,	// (0x000381db) list_single_graphic_pane_t1

0x4596,	// (0x00036085) list_single_heading_pane_g1_ParamLimits

0x4596,	// (0x00036085) list_single_heading_pane_g1

0x45a2,	// (0x00036091) list_single_heading_pane_g2_ParamLimits

0x45a2,	// (0x00036091) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00041092) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00041092) list_single_heading_pane_g

0x45c4,	// (0x000360b3) list_single_heading_pane_t1_ParamLimits

0x45c4,	// (0x000360b3) list_single_heading_pane_t1

0x45da,	// (0x000360c9) list_single_heading_pane_t2_ParamLimits

0x45da,	// (0x000360c9) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00041097) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00041097) list_single_heading_pane_t

0x4596,	// (0x00036085) list_single_number_heading_pane_g1_ParamLimits

0x4596,	// (0x00036085) list_single_number_heading_pane_g1

0x45a2,	// (0x00036091) list_single_number_heading_pane_g2_ParamLimits

0x45a2,	// (0x00036091) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00041092) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00041092) list_single_number_heading_pane_g

0x45c4,	// (0x000360b3) list_single_number_heading_pane_t1_ParamLimits

0x45c4,	// (0x000360b3) list_single_number_heading_pane_t1

0x45ec,	// (0x000360db) list_single_number_heading_pane_t2_ParamLimits

0x45ec,	// (0x000360db) list_single_number_heading_pane_t2

0x45fe,	// (0x000360ed) list_single_number_heading_pane_t3_ParamLimits

0x45fe,	// (0x000360ed) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0004109c) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0004109c) list_single_number_heading_pane_t

0x6702,	// (0x000381f1) list_single_graphic_heading_pane_g1_ParamLimits

0x6702,	// (0x000381f1) list_single_graphic_heading_pane_g1

0x670e,	// (0x000381fd) list_single_graphic_heading_pane_g4_ParamLimits

0x670e,	// (0x000381fd) list_single_graphic_heading_pane_g4

0x45a2,	// (0x00036091) list_single_graphic_heading_pane_g5_ParamLimits

0x45a2,	// (0x00036091) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x000410a3) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x000410a3) list_single_graphic_heading_pane_g

0x45c4,	// (0x000360b3) list_single_graphic_heading_pane_t1_ParamLimits

0x45c4,	// (0x000360b3) list_single_graphic_heading_pane_t1

0x671f,	// (0x0003820e) list_single_graphic_heading_pane_t2_ParamLimits

0x671f,	// (0x0003820e) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x000410aa) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x000410aa) list_single_graphic_heading_pane_t

0x6731,	// (0x00038220) list_single_large_graphic_pane_g1_ParamLimits

0x6731,	// (0x00038220) list_single_large_graphic_pane_g1

0x673d,	// (0x0003822c) list_single_large_graphic_pane_g2_ParamLimits

0x673d,	// (0x0003822c) list_single_large_graphic_pane_g2

0x6749,	// (0x00038238) list_single_large_graphic_pane_g3_ParamLimits

0x6749,	// (0x00038238) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x000410af) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x000410af) list_single_large_graphic_pane_g

0xa02d,	// (0x0003bb1c) wait_border_pane_g2_copy1

0x6755,	// (0x00038244) list_single_large_graphic_pane_g4_cp2

0x675d,	// (0x0003824c) list_single_large_graphic_pane_t1_ParamLimits

0x675d,	// (0x0003824c) list_single_large_graphic_pane_t1

0x4628,	// (0x00036117) list_double_pane_g1_ParamLimits

0x4628,	// (0x00036117) list_double_pane_g1

0x4634,	// (0x00036123) list_double_pane_g2_ParamLimits

0x4634,	// (0x00036123) list_double_pane_g2

0x0001,

0xf5c7,	// (0x000410b6) list_double_pane_g_ParamLimits

0xf5c7,	// (0x000410b6) list_double_pane_g

0x6773,	// (0x00038262) list_double_pane_t1_ParamLimits

0x6773,	// (0x00038262) list_double_pane_t1

0x6789,	// (0x00038278) list_double_pane_t2_ParamLimits

0x6789,	// (0x00038278) list_double_pane_t2

0x0001,

0xf5cc,	// (0x000410bb) list_double_pane_t_ParamLimits

0xf5cc,	// (0x000410bb) list_double_pane_t

0x679b,	// (0x0003828a) list_double2_pane_g1_ParamLimits

0x679b,	// (0x0003828a) list_double2_pane_g1

0x4634,	// (0x00036123) list_double2_pane_g2_ParamLimits

0x4634,	// (0x00036123) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000410c0) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000410c0) list_double2_pane_g

0x6773,	// (0x00038262) list_double2_pane_t1_ParamLimits

0x6773,	// (0x00038262) list_double2_pane_t1

0x67ac,	// (0x0003829b) list_double2_pane_t2_ParamLimits

0x67ac,	// (0x0003829b) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x000410c5) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x000410c5) list_double2_pane_t

0x4628,	// (0x00036117) list_double_number_pane_g1_ParamLimits

0x4628,	// (0x00036117) list_double_number_pane_g1

0x4634,	// (0x00036123) list_double_number_pane_g2_ParamLimits

0x4634,	// (0x00036123) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x000410b6) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x000410b6) list_double_number_pane_g

0x67be,	// (0x000382ad) list_double_number_pane_t1_ParamLimits

0x67be,	// (0x000382ad) list_double_number_pane_t1

0x67d0,	// (0x000382bf) list_double_number_pane_t2_ParamLimits

0x67d0,	// (0x000382bf) list_double_number_pane_t2

0x67e6,	// (0x000382d5) list_double_number_pane_t3_ParamLimits

0x67e6,	// (0x000382d5) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000410ca) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000410ca) list_double_number_pane_t

0x67f8,	// (0x000382e7) list_double_graphic_pane_g1_ParamLimits

0x67f8,	// (0x000382e7) list_double_graphic_pane_g1

0x4640,	// (0x0003612f) list_double_graphic_pane_g2_ParamLimits

0x4640,	// (0x0003612f) list_double_graphic_pane_g2

0x464f,	// (0x0003613e) list_double_graphic_pane_g3_ParamLimits

0x464f,	// (0x0003613e) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000410d1) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000410d1) list_double_graphic_pane_g

0x67d0,	// (0x000382bf) list_double_graphic_pane_t1_ParamLimits

0x67d0,	// (0x000382bf) list_double_graphic_pane_t1

0x67e6,	// (0x000382d5) list_double_graphic_pane_t2_ParamLimits

0x67e6,	// (0x000382d5) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x000410da) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x000410da) list_double_graphic_pane_t

0x67f8,	// (0x000382e7) list_double2_graphic_pane_g1_ParamLimits

0x67f8,	// (0x000382e7) list_double2_graphic_pane_g1

0x465b,	// (0x0003614a) list_double2_graphic_pane_g2_ParamLimits

0x465b,	// (0x0003614a) list_double2_graphic_pane_g2

0x4667,	// (0x00036156) list_double2_graphic_pane_g3_ParamLimits

0x4667,	// (0x00036156) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000410df) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000410df) list_double2_graphic_pane_g

0x67d0,	// (0x000382bf) list_double2_graphic_pane_t1_ParamLimits

0x67d0,	// (0x000382bf) list_double2_graphic_pane_t1

0x6810,	// (0x000382ff) list_double2_graphic_pane_t2_ParamLimits

0x6810,	// (0x000382ff) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000410e6) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000410e6) list_double2_graphic_pane_t

0x6822,	// (0x00038311) list_double_large_graphic_pane_g1_ParamLimits

0x6822,	// (0x00038311) list_double_large_graphic_pane_g1

0x679b,	// (0x0003828a) list_double_large_graphic_pane_g2_ParamLimits

0x679b,	// (0x0003828a) list_double_large_graphic_pane_g2

0x4634,	// (0x00036123) list_double_large_graphic_pane_g3_ParamLimits

0x4634,	// (0x00036123) list_double_large_graphic_pane_g3

0x6835,	// (0x00038324) list_double_large_graphic_pane_g4_ParamLimits

0x6835,	// (0x00038324) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x000410eb) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x000410eb) list_double_large_graphic_pane_g

0x6847,	// (0x00038336) list_double_large_graphic_pane_t1_ParamLimits

0x6847,	// (0x00038336) list_double_large_graphic_pane_t1

0x6860,	// (0x0003834f) list_double_large_graphic_pane_t2_ParamLimits

0x6860,	// (0x0003834f) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x000410f6) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x000410f6) list_double_large_graphic_pane_t

0x6872,	// (0x00038361) list_double2_large_graphic_pane_g1_ParamLimits

0x6872,	// (0x00038361) list_double2_large_graphic_pane_g1

0x679b,	// (0x0003828a) list_double2_large_graphic_pane_g2_ParamLimits

0x679b,	// (0x0003828a) list_double2_large_graphic_pane_g2

0x4634,	// (0x00036123) list_double2_large_graphic_pane_g3_ParamLimits

0x4634,	// (0x00036123) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x000410fb) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x000410fb) list_double2_large_graphic_pane_g

0x67d0,	// (0x000382bf) list_double2_large_graphic_pane_t1_ParamLimits

0x67d0,	// (0x000382bf) list_double2_large_graphic_pane_t1

0x6810,	// (0x000382ff) list_double2_large_graphic_pane_t2_ParamLimits

0x6810,	// (0x000382ff) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000410e6) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000410e6) list_double2_large_graphic_pane_t

0x687e,	// (0x0003836d) list_double_heading_pane_g1_ParamLimits

0x687e,	// (0x0003836d) list_double_heading_pane_g1

0x4688,	// (0x00036177) list_double_heading_pane_g2_ParamLimits

0x4688,	// (0x00036177) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x00041102) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x00041102) list_double_heading_pane_g

0x688f,	// (0x0003837e) list_double_heading_pane_t1_ParamLimits

0x688f,	// (0x0003837e) list_double_heading_pane_t1

0x6810,	// (0x000382ff) list_double_heading_pane_t2_ParamLimits

0x6810,	// (0x000382ff) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x00041107) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x00041107) list_double_heading_pane_t

0x68a5,	// (0x00038394) list_double_graphic_heading_pane_g1_ParamLimits

0x68a5,	// (0x00038394) list_double_graphic_heading_pane_g1

0x687e,	// (0x0003836d) list_double_graphic_heading_pane_g2_ParamLimits

0x687e,	// (0x0003836d) list_double_graphic_heading_pane_g2

0x4688,	// (0x00036177) list_double_graphic_heading_pane_g3_ParamLimits

0x4688,	// (0x00036177) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0004110c) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0004110c) list_double_graphic_heading_pane_g

0x688f,	// (0x0003837e) list_double_graphic_heading_pane_t1_ParamLimits

0x688f,	// (0x0003837e) list_double_graphic_heading_pane_t1

0x6810,	// (0x000382ff) list_double_graphic_heading_pane_t2_ParamLimits

0x6810,	// (0x000382ff) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x00041107) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x00041107) list_double_graphic_heading_pane_t

0x679b,	// (0x0003828a) list_double_time_pane_g1_ParamLimits

0x679b,	// (0x0003828a) list_double_time_pane_g1

0x4634,	// (0x00036123) list_double_time_pane_g2_ParamLimits

0x4634,	// (0x00036123) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x000410c0) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x000410c0) list_double_time_pane_g

0x4694,	// (0x00036183) list_double_time_pane_t1_ParamLimits

0x4694,	// (0x00036183) list_double_time_pane_t1

0x46aa,	// (0x00036199) list_double_time_pane_t2_ParamLimits

0x46aa,	// (0x00036199) list_double_time_pane_t2

0x46bc,	// (0x000361ab) list_double_time_pane_t3_ParamLimits

0x46bc,	// (0x000361ab) list_double_time_pane_t3

0x46ce,	// (0x000361bd) list_double_time_pane_t4_ParamLimits

0x46ce,	// (0x000361bd) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00041113) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00041113) list_double_time_pane_t

0x46e0,	// (0x000361cf) list_setting_pane_g1_ParamLimits

0x46e0,	// (0x000361cf) list_setting_pane_g1

0x46ec,	// (0x000361db) list_setting_pane_g2_ParamLimits

0x46ec,	// (0x000361db) list_setting_pane_g2

0x0001,

0xf62d,	// (0x0004111c) list_setting_pane_g_ParamLimits

0xf62d,	// (0x0004111c) list_setting_pane_g

0x68b1,	// (0x000383a0) list_setting_pane_t1_ParamLimits

0x68b1,	// (0x000383a0) list_setting_pane_t1

0x68c8,	// (0x000383b7) list_setting_pane_t2_ParamLimits

0x68c8,	// (0x000383b7) list_setting_pane_t2

0x0002,

0xf632,	// (0x00041121) list_setting_pane_t_ParamLimits

0xf632,	// (0x00041121) list_setting_pane_t

0x6905,	// (0x000383f4) set_value_pane_cp_ParamLimits

0x6905,	// (0x000383f4) set_value_pane_cp

0x46f8,	// (0x000361e7) list_setting_number_pane_g1_ParamLimits

0x46f8,	// (0x000361e7) list_setting_number_pane_g1

0x4704,	// (0x000361f3) list_setting_number_pane_g2_ParamLimits

0x4704,	// (0x000361f3) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x00041128) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x00041128) list_setting_number_pane_g

0x6911,	// (0x00038400) list_setting_number_pane_t1_ParamLimits

0x6911,	// (0x00038400) list_setting_number_pane_t1

0x4710,	// (0x000361ff) list_setting_number_pane_t2_ParamLimits

0x4710,	// (0x000361ff) list_setting_number_pane_t2

0x6925,	// (0x00038414) list_setting_number_pane_t3_ParamLimits

0x6925,	// (0x00038414) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x0004112d) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x0004112d) list_setting_number_pane_t

0x6905,	// (0x000383f4) set_value_pane_ParamLimits

0x6905,	// (0x000383f4) set_value_pane

0x23b7,	// (0x00033ea6) bg_set_opt_pane_ParamLimits

0x23b7,	// (0x00033ea6) bg_set_opt_pane

0x693d,	// (0x0003842c) set_value_pane_t1

0x23d8,	// (0x00033ec7) slider_set_pane_cp3

0x694b,	// (0x0003843a) volume_small_pane_cp

0x23e1,	// (0x00033ed0) list_form_gen_pane

0x23ea,	// (0x00033ed9) scroll_pane_cp8

0x6954,	// (0x00038443) form_field_data_pane_ParamLimits

0x6954,	// (0x00038443) form_field_data_pane

0x696c,	// (0x0003845b) form_field_data_wide_pane_ParamLimits

0x696c,	// (0x0003845b) form_field_data_wide_pane

0x698d,	// (0x0003847c) form_field_popup_pane_ParamLimits

0x698d,	// (0x0003847c) form_field_popup_pane

0x69ab,	// (0x0003849a) form_field_popup_wide_pane_ParamLimits

0x69ab,	// (0x0003849a) form_field_popup_wide_pane

0x4762,	// (0x00036251) form_field_slider_pane_ParamLimits

0x4762,	// (0x00036251) form_field_slider_pane

0x69c8,	// (0x000384b7) form_field_slider_wide_pane_ParamLimits

0x69c8,	// (0x000384b7) form_field_slider_wide_pane

0x23fb,	// (0x00033eea) data_form_pane

0x69e5,	// (0x000384d4) form_field_data_pane_t1

0x2407,	// (0x00033ef6) input_focus_pane

0x69fd,	// (0x000384ec) data_form_wide_pane

0x6a1a,	// (0x00038509) form_field_data_wide_pane_t1

0x22fb,	// (0x00033dea) input_focus_pane_cp6

0x6a3c,	// (0x0003852b) form_field_popup_pane_t1

0x2407,	// (0x00033ef6) input_focus_pane_cp7

0x2435,	// (0x00033f24) list_form_pane

0x6a5c,	// (0x0003854b) form_field_popup_wide_pane_t1

0x2407,	// (0x00033ef6) input_focus_pane_cp8

0x2441,	// (0x00033f30) list_form_wide_pane

0x6a79,	// (0x00038568) form_field_slider_pane_t1_ParamLimits

0x6a79,	// (0x00038568) form_field_slider_pane_t1

0x6a8f,	// (0x0003857e) form_field_slider_pane_t2_ParamLimits

0x6a8f,	// (0x0003857e) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x0004113d) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x0004113d) form_field_slider_pane_t

0x2043,	// (0x00033b32) input_focus_pane_cp9_ParamLimits

0x2043,	// (0x00033b32) input_focus_pane_cp9

0x6aa4,	// (0x00038593) slider_cont_pane_ParamLimits

0x6aa4,	// (0x00038593) slider_cont_pane

0x244d,	// (0x00033f3c) form_field_slider_wide_pane_t1_ParamLimits

0x244d,	// (0x00033f3c) form_field_slider_wide_pane_t1

0x6ab8,	// (0x000385a7) form_field_slider_wide_pane_t2_ParamLimits

0x6ab8,	// (0x000385a7) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x00041142) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x00041142) form_field_slider_wide_pane_t

0x2043,	// (0x00033b32) input_focus_pane_cp10_ParamLimits

0x2043,	// (0x00033b32) input_focus_pane_cp10

0x6aca,	// (0x000385b9) slider_cont_pane_cp1_ParamLimits

0x6aca,	// (0x000385b9) slider_cont_pane_cp1

0x6ade,	// (0x000385cd) slider_form_pane_cp

0x245f,	// (0x00033f4e) input_focus_pane_g1

0x2467,	// (0x00033f56) input_focus_pane_g2

0x246f,	// (0x00033f5e) input_focus_pane_g3

0x2477,	// (0x00033f66) input_focus_pane_g4

0x247f,	// (0x00033f6e) input_focus_pane_g5

0x2487,	// (0x00033f76) input_focus_pane_g6

0x248f,	// (0x00033f7e) input_focus_pane_g7

0x2497,	// (0x00033f86) input_focus_pane_g8

0x249f,	// (0x00033f8e) input_focus_pane_g9

0x1feb,	// (0x00033ada) input_focus_pane_g10

0x0009,

0xf658,	// (0x00041147) input_focus_pane_g

0xa036,	// (0x0003bb25) wait_border_pane_g3_copy1

0x6ae6,	// (0x000385d5) data_form_pane_t1

0x1feb,	// (0x00033ada) wait_anim_pane_g1_copy1

0x83b8,	// (0x00039ea7) data_form_wide_pane_t1

0x6b01,	// (0x000385f0) list_form_graphic_pane_cp_ParamLimits

0x6b01,	// (0x000385f0) list_form_graphic_pane_cp

0xaf25,	// (0x0003ca14) slider_form_pane_g1

0xaf2e,	// (0x0003ca1d) slider_form_pane_g2

0x0006,

0xf956,	// (0x00041445) slider_form_pane_g

0x6b15,	// (0x00038604) list_form_graphic_pane_ParamLimits

0x6b15,	// (0x00038604) list_form_graphic_pane

0x6b2c,	// (0x0003861b) list_form_graphic_pane_g1

0x6b34,	// (0x00038623) list_form_graphic_pane_t1_ParamLimits

0x6b34,	// (0x00038623) list_form_graphic_pane_t1

0x2051,	// (0x00033b40) list_highlight_pane_cp5_ParamLimits

0x2051,	// (0x00033b40) list_highlight_pane_cp5

0x6b49,	// (0x00038638) find_pane_g1

0x24a7,	// (0x00033f96) input_find_pane

0x6b52,	// (0x00038641) input_find_pane_g1_ParamLimits

0x6b52,	// (0x00038641) input_find_pane_g1

0x6b5e,	// (0x0003864d) input_find_pane_t1_ParamLimits

0x6b5e,	// (0x0003864d) input_find_pane_t1

0x6b73,	// (0x00038662) input_find_pane_t2_ParamLimits

0x6b73,	// (0x00038662) input_find_pane_t2

0x0001,

0xf66d,	// (0x0004115c) input_find_pane_t_ParamLimits

0xf66d,	// (0x0004115c) input_find_pane_t

0x24b0,	// (0x00033f9f) input_focus_pane_cp5_ParamLimits

0x24b0,	// (0x00033f9f) input_focus_pane_cp5

0x24c3,	// (0x00033fb2) bg_popup_window_pane_cp2_ParamLimits

0x24c3,	// (0x00033fb2) bg_popup_window_pane_cp2

0x24d0,	// (0x00033fbf) listscroll_menu_pane_ParamLimits

0x24d0,	// (0x00033fbf) listscroll_menu_pane

0x6b94,	// (0x00038683) popup_submenu_window_ParamLimits

0x6b94,	// (0x00038683) popup_submenu_window

0x24dc,	// (0x00033fcb) find_popup_pane_g1

0x6bbc,	// (0x000386ab) input_popup_find_pane_cp

0x24e4,	// (0x00033fd3) input_focus_pane_cp4_ParamLimits

0x24e4,	// (0x00033fd3) input_focus_pane_cp4

0x24f2,	// (0x00033fe1) input_popup_find_pane_t1_ParamLimits

0x24f2,	// (0x00033fe1) input_popup_find_pane_t1

0x1ff5,	// (0x00033ae4) bg_popup_sub_pane_cp

0x2520,	// (0x0003400f) listscroll_popup_sub_pane

0x2528,	// (0x00034017) list_submenu_pane_ParamLimits

0x2528,	// (0x00034017) list_submenu_pane

0x2539,	// (0x00034028) scroll_pane_cp4

0x6bd4,	// (0x000386c3) list_single_popup_submenu_pane_ParamLimits

0x6bd4,	// (0x000386c3) list_single_popup_submenu_pane

0x2e77,	// (0x00034966) list_single_popup_submenu_pane_g1

0x6be8,	// (0x000386d7) list_single_popup_submenu_pane_t1_ParamLimits

0x6be8,	// (0x000386d7) list_single_popup_submenu_pane_t1

0x2051,	// (0x00033b40) bg_active_tab_pane_cp1_ParamLimits

0x2051,	// (0x00033b40) bg_active_tab_pane_cp1

0x2541,	// (0x00034030) tabs_2_active_pane_g1

0x6bfd,	// (0x000386ec) tabs_2_active_pane_t1

0x2051,	// (0x00033b40) bg_passive_tab_pane_cp1_ParamLimits

0x2051,	// (0x00033b40) bg_passive_tab_pane_cp1

0x2541,	// (0x00034030) tabs_2_passive_pane_g1

0x6bfd,	// (0x000386ec) tabs_2_passive_pane_t1

0x6c0f,	// (0x000386fe) bg_active_tab_pane_cp4

0x6c1d,	// (0x0003870c) tabs_2_long_active_pane_t1

0x6c30,	// (0x0003871f) bg_passive_tab_pane_cp4

0x805a,	// (0x00039b49) list_single_midp_graphic_pane_g4_ParamLimits

0x6c0f,	// (0x000386fe) bg_active_tab_pane_cp5

0x6c3c,	// (0x0003872b) tabs_3_long_active_pane_t1

0x6c30,	// (0x0003871f) bg_passive_tab_pane_cp5

0x805a,	// (0x00039b49) list_single_midp_graphic_pane_g4

0x2051,	// (0x00033b40) bg_popup_window_pane_cp13_ParamLimits

0x2051,	// (0x00033b40) bg_popup_window_pane_cp13

0x2555,	// (0x00034044) listscroll_popup_fast_pane_ParamLimits

0x2555,	// (0x00034044) listscroll_popup_fast_pane

0x2561,	// (0x00034050) grid_popup_fast_pane_ParamLimits

0x2561,	// (0x00034050) grid_popup_fast_pane

0x2573,	// (0x00034062) scroll_pane_cp9_ParamLimits

0x2573,	// (0x00034062) scroll_pane_cp9

0xc888,	// (0x0003e377) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc888,	// (0x0003e377) list_single_graphic_hl_pane_t1_cp2

0x2586,	// (0x00034075) input_focus_pane_cp20_ParamLimits

0x2586,	// (0x00034075) input_focus_pane_cp20

0x2594,	// (0x00034083) query_popup_data_pane_t1_ParamLimits

0x2594,	// (0x00034083) query_popup_data_pane_t1

0x25a7,	// (0x00034096) query_popup_data_pane_t2_ParamLimits

0x25a7,	// (0x00034096) query_popup_data_pane_t2

0x25ed,	// (0x000340dc) query_popup_data_pane_t3_ParamLimits

0x25ed,	// (0x000340dc) query_popup_data_pane_t3

0x262e,	// (0x0003411d) query_popup_data_pane_t4_ParamLimits

0x262e,	// (0x0003411d) query_popup_data_pane_t4

0x266a,	// (0x00034159) query_popup_data_pane_t5_ParamLimits

0x266a,	// (0x00034159) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x00041161) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x00041161) query_popup_data_pane_t

0x245f,	// (0x00033f4e) bg_set_opt_pane_g1

0x2467,	// (0x00033f56) bg_set_opt_pane_g2

0x246f,	// (0x00033f5e) bg_set_opt_pane_g3

0x2477,	// (0x00033f66) bg_set_opt_pane_g4

0x247f,	// (0x00033f6e) bg_set_opt_pane_g5

0x2487,	// (0x00033f76) bg_set_opt_pane_g6

0x248f,	// (0x00033f7e) bg_set_opt_pane_g7

0x2497,	// (0x00033f86) bg_set_opt_pane_g8

0x249f,	// (0x00033f8e) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x0004116c) bg_set_opt_pane_g

0x7193,	// (0x00038c82) control_top_pane_stacon_ParamLimits

0x7193,	// (0x00038c82) control_top_pane_stacon

0x71e6,	// (0x00038cd5) signal_pane_stacon_ParamLimits

0x71e6,	// (0x00038cd5) signal_pane_stacon

0x29f6,	// (0x000344e5) stacon_top_pane_g1_ParamLimits

0x29f6,	// (0x000344e5) stacon_top_pane_g1

0x720b,	// (0x00038cfa) title_pane_stacon_ParamLimits

0x720b,	// (0x00038cfa) title_pane_stacon

0x7235,	// (0x00038d24) uni_indicator_pane_stacon_ParamLimits

0x7235,	// (0x00038d24) uni_indicator_pane_stacon

0x724a,	// (0x00038d39) battery_pane_stacon_ParamLimits

0x724a,	// (0x00038d39) battery_pane_stacon

0x728e,	// (0x00038d7d) control_bottom_pane_stacon_ParamLimits

0x728e,	// (0x00038d7d) control_bottom_pane_stacon

0x72b1,	// (0x00038da0) navi_pane_stacon_ParamLimits

0x72b1,	// (0x00038da0) navi_pane_stacon

0x2a18,	// (0x00034507) stacon_bottom_pane_g1_ParamLimits

0x2a18,	// (0x00034507) stacon_bottom_pane_g1

0x6c68,	// (0x00038757) aid_levels_signal_lsc_ParamLimits

0x6c68,	// (0x00038757) aid_levels_signal_lsc

0x6c7e,	// (0x0003876d) signal_pane_stacon_g1_ParamLimits

0x6c7e,	// (0x0003876d) signal_pane_stacon_g1

0x6c92,	// (0x00038781) signal_pane_stacon_g2_ParamLimits

0x6c92,	// (0x00038781) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x0004117f) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x0004117f) signal_pane_stacon_g

0x6cc7,	// (0x000387b6) title_pane_stacon_t1_ParamLimits

0x6cc7,	// (0x000387b6) title_pane_stacon_t1

0x26c2,	// (0x000341b1) uni_indicator_pane_stacon_g1

0x26cc,	// (0x000341bb) uni_indicator_pane_stacon_g2

0x26ae,	// (0x0003419d) uni_indicator_pane_stacon_g3

0x26b8,	// (0x000341a7) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x0004118b) uni_indicator_pane_stacon_g

0x6cec,	// (0x000387db) control_top_pane_stacon_g1

0x6cf4,	// (0x000387e3) control_top_pane_stacon_t1_ParamLimits

0x6cf4,	// (0x000387e3) control_top_pane_stacon_t1

0x6d2b,	// (0x0003881a) aid_levels_battery_lsc_ParamLimits

0x6d2b,	// (0x0003881a) aid_levels_battery_lsc

0x6d42,	// (0x00038831) battery_pane_stacon_g1_ParamLimits

0x6d42,	// (0x00038831) battery_pane_stacon_g1

0x6d55,	// (0x00038844) battery_pane_stacon_g2_ParamLimits

0x6d55,	// (0x00038844) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x00041194) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x00041194) battery_pane_stacon_g

0x6d93,	// (0x00038882) navi_icon_pane_stacon

0x6da7,	// (0x00038896) navi_navi_pane_stacon

0x6d93,	// (0x00038882) navi_text_pane_stacon

0x6cec,	// (0x000387db) control_bottom_pane_stacon_g1

0x6dbb,	// (0x000388aa) control_bottom_pane_stacon_t1_ParamLimits

0x6dbb,	// (0x000388aa) control_bottom_pane_stacon_t1

0x6df2,	// (0x000388e1) grid_app_pane_ParamLimits

0x6df2,	// (0x000388e1) grid_app_pane

0x6e14,	// (0x00038903) scroll_pane_cp15_ParamLimits

0x6e14,	// (0x00038903) scroll_pane_cp15

0x6e27,	// (0x00038916) cell_app_pane_ParamLimits

0x6e27,	// (0x00038916) cell_app_pane

0x6e4f,	// (0x0003893e) cell_app_pane_g1_ParamLimits

0x6e4f,	// (0x0003893e) cell_app_pane_g1

0x26f0,	// (0x000341df) cell_app_pane_g2_ParamLimits

0x26f0,	// (0x000341df) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x00041199) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x00041199) cell_app_pane_g

0x6e73,	// (0x00038962) cell_app_pane_t1_ParamLimits

0x6e73,	// (0x00038962) cell_app_pane_t1

0x26fc,	// (0x000341eb) grid_highlight_pane_ParamLimits

0x26fc,	// (0x000341eb) grid_highlight_pane

0x245f,	// (0x00033f4e) cell_highlight_pane_g1

0x2467,	// (0x00033f56) cell_highlight_pane_g2

0x246f,	// (0x00033f5e) cell_highlight_pane_g3

0x2477,	// (0x00033f66) cell_highlight_pane_g4

0x247f,	// (0x00033f6e) cell_highlight_pane_g5

0x2487,	// (0x00033f76) cell_highlight_pane_g6

0x248f,	// (0x00033f7e) cell_highlight_pane_g7

0x2497,	// (0x00033f86) cell_highlight_pane_g8

0x249f,	// (0x00033f8e) cell_highlight_pane_g9

0x1feb,	// (0x00033ada) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x00041147) cell_highlight_pane_g

0x270d,	// (0x000341fc) bg_scroll_pane

0x6e9d,	// (0x0003898c) scroll_handle_pane

0x2754,	// (0x00034243) scroll_bg_pane_g1

0x2769,	// (0x00034258) scroll_bg_pane_g2

0x2781,	// (0x00034270) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x0004119e) scroll_bg_pane_g

0x6ec6,	// (0x000389b5) scroll_handle_focus_pane_ParamLimits

0x6ec6,	// (0x000389b5) scroll_handle_focus_pane

0x2754,	// (0x00034243) scroll_handle_pane_g1

0x2796,	// (0x00034285) scroll_handle_pane_g2

0x2781,	// (0x00034270) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x000411a5) scroll_handle_pane_g

0x24e4,	// (0x00033fd3) bg_popup_sub_pane_cp21_ParamLimits

0x24e4,	// (0x00033fd3) bg_popup_sub_pane_cp21

0x6ed3,	// (0x000389c2) popup_fep_japan_predictive_window_t1_ParamLimits

0x6ed3,	// (0x000389c2) popup_fep_japan_predictive_window_t1

0x6eed,	// (0x000389dc) popup_fep_japan_predictive_window_t2_ParamLimits

0x6eed,	// (0x000389dc) popup_fep_japan_predictive_window_t2

0x6f20,	// (0x00038a0f) popup_fep_japan_predictive_window_t3_ParamLimits

0x6f20,	// (0x00038a0f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x000411ac) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x000411ac) popup_fep_japan_predictive_window_t

0x1ff5,	// (0x00033ae4) bg_popup_sub_pane_cp23

0x34fb,	// (0x00034fea) listscroll_japin_cand_pane

0x27aa,	// (0x00034299) popup_fep_japan_candidate_window_t1

0x27b8,	// (0x000342a7) candidate_pane_ParamLimits

0x27b8,	// (0x000342a7) candidate_pane

0x6f57,	// (0x00038a46) scroll_pane_cp30

0x27ca,	// (0x000342b9) list_single_popup_jap_candidate_pane_ParamLimits

0x27ca,	// (0x000342b9) list_single_popup_jap_candidate_pane

0x1ff5,	// (0x00033ae4) list_highlight_pane_cp30

0x27df,	// (0x000342ce) list_single_popup_jap_candidate_pane_t1

0x27ee,	// (0x000342dd) level_1_signal

0x27fb,	// (0x000342ea) level_2_signal

0x2808,	// (0x000342f7) level_3_signal

0x2815,	// (0x00034304) level_4_signal

0x2822,	// (0x00034311) level_5_signal

0x282f,	// (0x0003431e) level_6_signal

0x283c,	// (0x0003432b) level_7_signal

0x27ee,	// (0x000342dd) level_1_battery

0x27fb,	// (0x000342ea) level_2_battery

0x2808,	// (0x000342f7) level_3_battery

0x2815,	// (0x00034304) level_4_battery

0x2822,	// (0x00034311) level_5_battery

0x282f,	// (0x0003431e) level_6_battery

0x283c,	// (0x0003432b) level_7_battery

0x2861,	// (0x00034350) list_menu_pane_ParamLimits

0x2861,	// (0x00034350) list_menu_pane

0x2877,	// (0x00034366) scroll_pane_cp25_ParamLimits

0x2877,	// (0x00034366) scroll_pane_cp25

0x2890,	// (0x0003437f) list_double2_graphic_pane_cp2_ParamLimits

0x2890,	// (0x0003437f) list_double2_graphic_pane_cp2

0x2890,	// (0x0003437f) list_double2_large_graphic_pane_cp2_ParamLimits

0x2890,	// (0x0003437f) list_double2_large_graphic_pane_cp2

0x2890,	// (0x0003437f) list_double2_pane_cp2_ParamLimits

0x2890,	// (0x0003437f) list_double2_pane_cp2

0x2890,	// (0x0003437f) list_double_graphic_pane_cp2_ParamLimits

0x2890,	// (0x0003437f) list_double_graphic_pane_cp2

0x2890,	// (0x0003437f) list_double_large_graphic_pane_cp2_ParamLimits

0x2890,	// (0x0003437f) list_double_large_graphic_pane_cp2

0x2890,	// (0x0003437f) list_double_number_pane_cp2_ParamLimits

0x2890,	// (0x0003437f) list_double_number_pane_cp2

0x2890,	// (0x0003437f) list_double_pane_cp2_ParamLimits

0x2890,	// (0x0003437f) list_double_pane_cp2

0x6f92,	// (0x00038a81) list_single_2graphic_pane_cp2_ParamLimits

0x6f92,	// (0x00038a81) list_single_2graphic_pane_cp2

0x6f92,	// (0x00038a81) list_single_graphic_heading_pane_cp2_ParamLimits

0x6f92,	// (0x00038a81) list_single_graphic_heading_pane_cp2

0x6f92,	// (0x00038a81) list_single_graphic_pane_cp2_ParamLimits

0x6f92,	// (0x00038a81) list_single_graphic_pane_cp2

0x6f92,	// (0x00038a81) list_single_heading_pane_cp2_ParamLimits

0x6f92,	// (0x00038a81) list_single_heading_pane_cp2

0x28a0,	// (0x0003438f) list_single_large_graphic_pane_cp2_ParamLimits

0x28a0,	// (0x0003438f) list_single_large_graphic_pane_cp2

0x6f92,	// (0x00038a81) list_single_number_heading_pane_cp2_ParamLimits

0x6f92,	// (0x00038a81) list_single_number_heading_pane_cp2

0x6f92,	// (0x00038a81) list_single_number_pane_cp2_ParamLimits

0x6f92,	// (0x00038a81) list_single_number_pane_cp2

0x6fa8,	// (0x00038a97) list_single_pane_cp2_ParamLimits

0x6fa8,	// (0x00038a97) list_single_pane_cp2

0x28ba,	// (0x000343a9) bg_popup_sub_pane_cp22

0x7080,	// (0x00038b6f) popup_side_volume_key_window_g1

0x70a4,	// (0x00038b93) popup_side_volume_key_window_t1

0x70c0,	// (0x00038baf) volume_small_pane_cp1

0x2043,	// (0x00033b32) bg_popup_sub_pane_cp24_ParamLimits

0x2043,	// (0x00033b32) bg_popup_sub_pane_cp24

0x28d0,	// (0x000343bf) fep_china_uni_candidate_pane_ParamLimits

0x28d0,	// (0x000343bf) fep_china_uni_candidate_pane

0x28e4,	// (0x000343d3) fep_china_uni_entry_pane

0x28f4,	// (0x000343e3) popup_fep_china_uni_window_g1

0x70c8,	// (0x00038bb7) fep_china_uni_entry_pane_g1

0x70d0,	// (0x00038bbf) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x000411dd) fep_china_uni_entry_pane_g

0x2910,	// (0x000343ff) fep_entry_item_pane

0x291a,	// (0x00034409) fep_candidate_item_pane

0x70d8,	// (0x00038bc7) fep_china_uni_candidate_pane_g1

0x2922,	// (0x00034411) fep_china_uni_candidate_pane_g2

0x292a,	// (0x00034419) fep_china_uni_candidate_pane_g3

0x70e0,	// (0x00038bcf) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x000411e2) fep_china_uni_candidate_pane_g

0x1feb,	// (0x00033ada) fep_entry_item_pane_g1

0x2932,	// (0x00034421) fep_entry_item_pane_t1_ParamLimits

0x2932,	// (0x00034421) fep_entry_item_pane_t1

0x2948,	// (0x00034437) fep_candidate_item_pane_t1_ParamLimits

0x2948,	// (0x00034437) fep_candidate_item_pane_t1

0x295d,	// (0x0003444c) fep_candidate_item_pane_t2_ParamLimits

0x295d,	// (0x0003444c) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x000411eb) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x000411eb) fep_candidate_item_pane_t

0x2051,	// (0x00033b40) list_highlight_pane_cp31_ParamLimits

0x2051,	// (0x00033b40) list_highlight_pane_cp31

0x296f,	// (0x0003445e) level_1_signal_lsc

0x2978,	// (0x00034467) level_2_signal_lsc

0x2981,	// (0x00034470) level_3_signal_lsc

0x298a,	// (0x00034479) level_4_signal_lsc

0x2993,	// (0x00034482) level_5_signal_lsc

0x299c,	// (0x0003448b) level_6_signal_lsc

0x29a5,	// (0x00034494) level_7_signal_lsc

0x29a5,	// (0x00034494) level_1_battery_lsc

0x29ae,	// (0x0003449d) level_2_battery_lsc

0x29b7,	// (0x000344a6) level_3_battery_lsc

0x29c0,	// (0x000344af) level_4_battery_lsc

0x29c9,	// (0x000344b8) level_5_battery_lsc

0x29d2,	// (0x000344c1) level_6_battery_lsc

0x296f,	// (0x0003445e) level_7_battery_lsc

0x29db,	// (0x000344ca) scroll_handle_focus_pane_g1

0x29e4,	// (0x000344d3) scroll_handle_focus_pane_g2

0x29ed,	// (0x000344dc) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x000411f0) scroll_handle_focus_pane_g

0x70e8,	// (0x00038bd7) list_single_2graphic_pane_g1_ParamLimits

0x70e8,	// (0x00038bd7) list_single_2graphic_pane_g1

0x670e,	// (0x000381fd) list_single_2graphic_pane_g2_ParamLimits

0x670e,	// (0x000381fd) list_single_2graphic_pane_g2

0x45a2,	// (0x00036091) list_single_2graphic_pane_g3_ParamLimits

0x45a2,	// (0x00036091) list_single_2graphic_pane_g3

0x70f4,	// (0x00038be3) list_single_2graphic_pane_g4_ParamLimits

0x70f4,	// (0x00038be3) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x000411f7) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x000411f7) list_single_2graphic_pane_g

0x7100,	// (0x00038bef) list_single_2graphic_pane_t1_ParamLimits

0x7100,	// (0x00038bef) list_single_2graphic_pane_t1

0x712e,	// (0x00038c1d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x712e,	// (0x00038c1d) list_double2_graphic_large_graphic_pane_g1

0x679b,	// (0x0003828a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x679b,	// (0x0003828a) list_double2_graphic_large_graphic_pane_g2

0x4634,	// (0x00036123) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4634,	// (0x00036123) list_double2_graphic_large_graphic_pane_g3

0x4775,	// (0x00036264) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x4775,	// (0x00036264) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x00041200) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x00041200) list_double2_graphic_large_graphic_pane_g

0x4781,	// (0x00036270) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4781,	// (0x00036270) list_double2_graphic_large_graphic_pane_t1

0x4797,	// (0x00036286) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4797,	// (0x00036286) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x00041209) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x00041209) list_double2_graphic_large_graphic_pane_t

0x7310,	// (0x00038dff) popup_fast_swap_window_ParamLimits

0x7310,	// (0x00038dff) popup_fast_swap_window

0x732c,	// (0x00038e1b) popup_side_volume_key_window

0x2aa3,	// (0x00034592) stacon_top_pane

0x2aad,	// (0x0003459c) status_pane_ParamLimits

0x2aad,	// (0x0003459c) status_pane

0x1fe1,	// (0x00033ad0) status_small_pane

0x1ff5,	// (0x00033ae4) control_pane

0x1ff5,	// (0x00033ae4) stacon_bottom_pane

0x23ea,	// (0x00033ed9) scroll_pane_cp121

0x23e1,	// (0x00033ed0) set_content_pane

0x713e,	// (0x00038c2d) bg_active_tab_pane_g1_cp1

0x7147,	// (0x00038c36) bg_active_tab_pane_g2_cp1

0x7150,	// (0x00038c3f) bg_active_tab_pane_g3_cp1

0x713e,	// (0x00038c2d) bg_passive_tab_pane_g1_cp1

0x7147,	// (0x00038c36) bg_passive_tab_pane_g2_cp1

0x7150,	// (0x00038c3f) bg_passive_tab_pane_g3_cp1

0x7159,	// (0x00038c48) bg_active_tab_pane_g1_cp2

0x7147,	// (0x00038c36) bg_active_tab_pane_g2_cp2

0x7162,	// (0x00038c51) bg_active_tab_pane_g3_cp2

0x7159,	// (0x00038c48) bg_passive_tab_pane_g1_cp2

0x7147,	// (0x00038c36) bg_passive_tab_pane_g2_cp2

0x7162,	// (0x00038c51) bg_passive_tab_pane_g3_cp2

0x716b,	// (0x00038c5a) bg_active_tab_pane_g1_cp3

0x7147,	// (0x00038c36) bg_active_tab_pane_g2_cp3

0x7174,	// (0x00038c63) bg_active_tab_pane_g3_cp3

0x716b,	// (0x00038c5a) bg_passive_tab_pane_g1_cp3

0x7147,	// (0x00038c36) bg_passive_tab_pane_g2_cp3

0x7174,	// (0x00038c63) bg_passive_tab_pane_g3_cp3

0x717d,	// (0x00038c6c) bg_active_tab_pane_g1_cp4

0x7147,	// (0x00038c36) bg_active_tab_pane_g2_cp4

0x7188,	// (0x00038c77) bg_active_tab_pane_g3_cp4

0x717d,	// (0x00038c6c) bg_passive_tab_pane_g1_cp4

0x7147,	// (0x00038c36) bg_passive_tab_pane_g2_cp4

0x7188,	// (0x00038c77) bg_passive_tab_pane_g3_cp4

0x72d4,	// (0x00038dc3) bg_active_tab_pane_g1_cp5

0x7147,	// (0x00038c36) bg_active_tab_pane_g2_cp5

0x72dd,	// (0x00038dcc) bg_active_tab_pane_g3_cp5

0x72d4,	// (0x00038dc3) bg_passive_tab_pane_g1_cp5

0x7147,	// (0x00038c36) bg_passive_tab_pane_g2_cp5

0x72dd,	// (0x00038dcc) bg_passive_tab_pane_g3_cp5

0x72e6,	// (0x00038dd5) list_set_graphic_pane_ParamLimits

0x72e6,	// (0x00038dd5) list_set_graphic_pane

0x1ff5,	// (0x00033ae4) bg_set_opt_pane_cp4

0x2a34,	// (0x00034523) list_set_graphic_pane_g1_ParamLimits

0x2a34,	// (0x00034523) list_set_graphic_pane_g1

0x2a40,	// (0x0003452f) list_set_graphic_pane_g2_ParamLimits

0x2a40,	// (0x0003452f) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x0004120e) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x0004120e) list_set_graphic_pane_g

0x0009,

0xfab7,	// (0x000415a6) volume_small_pane_cp_g

0x7304,	// (0x00038df3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7304,	// (0x00038df3) list_double2_large_graphic_pane_g1_cp2

0x2a62,	// (0x00034551) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2a62,	// (0x00034551) list_double2_large_graphic_pane_g2_cp2

0x2a73,	// (0x00034562) list_double2_large_graphic_pane_g3_cp2

0x2a7b,	// (0x0003456a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2a7b,	// (0x0003456a) list_double2_large_graphic_pane_t1_cp2

0x2a91,	// (0x00034580) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2a91,	// (0x00034580) list_double2_large_graphic_pane_t2_cp2

0xaae7,	// (0x0003c5d6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaae7,	// (0x0003c5d6) list_double_large_graphic_pane_g1_cp2

0xaaf8,	// (0x0003c5e7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaaf8,	// (0x0003c5e7) list_double_large_graphic_pane_g2_cp2

0x2bc9,	// (0x000346b8) list_double_large_graphic_pane_g3_cp2

0xab09,	// (0x0003c5f8) list_double_large_graphic_pane_g4_cp

0xab11,	// (0x0003c600) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab11,	// (0x0003c600) list_double_large_graphic_pane_t1_cp2

0xab28,	// (0x0003c617) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab28,	// (0x0003c617) list_double_large_graphic_pane_t2_cp2

0x2abb,	// (0x000345aa) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2abb,	// (0x000345aa) list_double2_graphic_pane_g1_cp2

0x2ac9,	// (0x000345b8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2ac9,	// (0x000345b8) list_double2_graphic_pane_g2_cp2

0x2ada,	// (0x000345c9) list_double2_graphic_pane_g3_cp2

0x2ae4,	// (0x000345d3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2ae4,	// (0x000345d3) list_double2_graphic_pane_t1_cp2

0x2afa,	// (0x000345e9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2afa,	// (0x000345e9) list_double2_graphic_pane_t2_cp2

0x2b0c,	// (0x000345fb) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2b0c,	// (0x000345fb) list_single_number_heading_pane_g1_cp2

0x2b18,	// (0x00034607) list_single_number_heading_pane_g2_cp2

0x2b20,	// (0x0003460f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2b20,	// (0x0003460f) list_single_number_heading_pane_t1_cp2

0x2b36,	// (0x00034625) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2b36,	// (0x00034625) list_single_number_heading_pane_t2_cp2

0x2b48,	// (0x00034637) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2b48,	// (0x00034637) list_single_number_heading_pane_t3_cp2

0x2b0c,	// (0x000345fb) list_single_heading_pane_g1_cp2_ParamLimits

0x2b0c,	// (0x000345fb) list_single_heading_pane_g1_cp2

0x2b18,	// (0x00034607) list_single_heading_pane_g2_cp2

0x2b20,	// (0x0003460f) list_single_heading_pane_t1_cp2_ParamLimits

0x2b20,	// (0x0003460f) list_single_heading_pane_t1_cp2

0xa8f1,	// (0x0003c3e0) list_single_heading_pane_t2_cp2_ParamLimits

0xa8f1,	// (0x0003c3e0) list_single_heading_pane_t2_cp2

0xa839,	// (0x0003c328) list_double_graphic_pane_g1_cp2_ParamLimits

0xa839,	// (0x0003c328) list_double_graphic_pane_g1_cp2

0xa845,	// (0x0003c334) list_double_graphic_pane_g2_cp2_ParamLimits

0xa845,	// (0x0003c334) list_double_graphic_pane_g2_cp2

0xa854,	// (0x0003c343) list_double_graphic_pane_g3_cp2

0xa85c,	// (0x0003c34b) list_double_graphic_pane_t1_cp2_ParamLimits

0xa85c,	// (0x0003c34b) list_double_graphic_pane_t1_cp2

0xa872,	// (0x0003c361) list_double_graphic_pane_t2_cp2_ParamLimits

0xa872,	// (0x0003c361) list_double_graphic_pane_t2_cp2

0x2bbd,	// (0x000346ac) list_double_number_pane_g1_cp2_ParamLimits

0x2bbd,	// (0x000346ac) list_double_number_pane_g1_cp2

0x2bc9,	// (0x000346b8) list_double_number_pane_g2_cp2

0xa7fd,	// (0x0003c2ec) list_double_number_pane_t1_cp2_ParamLimits

0xa7fd,	// (0x0003c2ec) list_double_number_pane_t1_cp2

0xa811,	// (0x0003c300) list_double_number_pane_t2_cp2_ParamLimits

0xa811,	// (0x0003c300) list_double_number_pane_t2_cp2

0xa827,	// (0x0003c316) list_double_number_pane_t3_cp2_ParamLimits

0xa827,	// (0x0003c316) list_double_number_pane_t3_cp2

0xa6e6,	// (0x0003c1d5) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6e6,	// (0x0003c1d5) list_single_graphic_pane_g1_cp2

0x2c22,	// (0x00034711) list_single_graphic_pane_g2_cp2_ParamLimits

0x2c22,	// (0x00034711) list_single_graphic_pane_g2_cp2

0x2c2e,	// (0x0003471d) list_single_graphic_pane_g3_cp2

0xa6bc,	// (0x0003c1ab) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0003c1ab) list_single_graphic_pane_t1_cp2

0x2c22,	// (0x00034711) list_single_number_pane_g1_cp2_ParamLimits

0x2c22,	// (0x00034711) list_single_number_pane_g1_cp2

0x2c2e,	// (0x0003471d) list_single_number_pane_g2_cp2

0xa6bc,	// (0x0003c1ab) list_single_number_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0003c1ab) list_single_number_pane_t1_cp2

0xa6d2,	// (0x0003c1c1) list_single_number_pane_t2_cp2_ParamLimits

0xa6d2,	// (0x0003c1c1) list_single_number_pane_t2_cp2

0x2a62,	// (0x00034551) list_double2_pane_g1_cp2_ParamLimits

0x2a62,	// (0x00034551) list_double2_pane_g1_cp2

0x2a73,	// (0x00034562) list_double2_pane_g2_cp2

0x2b95,	// (0x00034684) list_double2_pane_t1_cp2_ParamLimits

0x2b95,	// (0x00034684) list_double2_pane_t1_cp2

0x2bab,	// (0x0003469a) list_double2_pane_t2_cp2_ParamLimits

0x2bab,	// (0x0003469a) list_double2_pane_t2_cp2

0x2bbd,	// (0x000346ac) list_double_pane_g1_cp2_ParamLimits

0x2bbd,	// (0x000346ac) list_double_pane_g1_cp2

0x2bc9,	// (0x000346b8) list_double_pane_g2_cp2

0x2bd1,	// (0x000346c0) list_double_pane_t1_cp2_ParamLimits

0x2bd1,	// (0x000346c0) list_double_pane_t1_cp2

0x2be7,	// (0x000346d6) list_double_pane_t2_cp2_ParamLimits

0x2be7,	// (0x000346d6) list_double_pane_t2_cp2

0x7346,	// (0x00038e35) list_single_pane_cp2_g3

0x2c22,	// (0x00034711) list_single_pane_g1_cp2_ParamLimits

0x2c22,	// (0x00034711) list_single_pane_g1_cp2

0x2c2e,	// (0x0003471d) list_single_pane_g2_cp2

0x2c36,	// (0x00034725) list_single_pane_t1_cp2_ParamLimits

0x2c36,	// (0x00034725) list_single_pane_t1_cp2

0x734e,	// (0x00038e3d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x734e,	// (0x00038e3d) list_single_large_graphic_pane_g1_cp2

0x2c4e,	// (0x0003473d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2c4e,	// (0x0003473d) list_single_large_graphic_pane_g2_cp2

0x2c5a,	// (0x00034749) list_single_large_graphic_pane_g3_cp2

0x735a,	// (0x00038e49) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x735a,	// (0x00038e49) list_single_large_graphic_pane_g4_cp1

0x2c62,	// (0x00034751) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2c62,	// (0x00034751) list_single_large_graphic_pane_t1_cp2

0xa688,	// (0x0003c177) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa688,	// (0x0003c177) list_single_graphic_heading_pane_g1_cp2

0xa655,	// (0x0003c144) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa655,	// (0x0003c144) list_single_graphic_heading_pane_g4_cp2

0x2c2e,	// (0x0003471d) list_single_graphic_heading_pane_g5_cp2

0xa694,	// (0x0003c183) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa694,	// (0x0003c183) list_single_graphic_heading_pane_t1_cp2

0xa6aa,	// (0x0003c199) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6aa,	// (0x0003c199) list_single_graphic_heading_pane_t2_cp2

0xa649,	// (0x0003c138) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa649,	// (0x0003c138) list_single_2graphic_pane_g1_cp2

0xa655,	// (0x0003c144) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa655,	// (0x0003c144) list_single_2graphic_pane_g2_cp2

0x2c2e,	// (0x0003471d) list_single_2graphic_pane_g3_cp2

0xa666,	// (0x0003c155) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa666,	// (0x0003c155) list_single_2graphic_pane_g4_cp2

0xa672,	// (0x0003c161) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa672,	// (0x0003c161) list_single_2graphic_pane_t1_cp2

0x1feb,	// (0x00033ada) list_highlight_pane_g10_cp1

0xa231,	// (0x0003bd20) list_highlight_pane_g1_cp1

0xa239,	// (0x0003bd28) list_highlight_pane_g2_cp1

0xa241,	// (0x0003bd30) list_highlight_pane_g3_cp1

0xa249,	// (0x0003bd38) list_highlight_pane_g4_cp1

0xa251,	// (0x0003bd40) list_highlight_pane_g5_cp1

0xa259,	// (0x0003bd48) list_highlight_pane_g6_cp1

0xa261,	// (0x0003bd50) list_highlight_pane_g7_cp1

0xa269,	// (0x0003bd58) list_highlight_pane_g8_cp1

0xa271,	// (0x0003bd60) list_highlight_pane_g9_cp1

0xa159,	// (0x0003bc48) form_field_slider_pane_t3

0xa167,	// (0x0003bc56) form_field_slider_pane_t4

0xa175,	// (0x0003bc64) slider_form_pane_ParamLimits

0xa175,	// (0x0003bc64) slider_form_pane

0x1ff5,	// (0x00033ae4) control_abbreviations

0x1ff5,	// (0x00033ae4) control_conventions

0x1ff5,	// (0x00033ae4) control_definitions

0x1ff5,	// (0x00033ae4) format_table_attribute

0xa93b,	// (0x0003c42a) bg_popup_preview_window_pane_g9

0x1ff5,	// (0x00033ae4) format_table_data2

0x1ff5,	// (0x00033ae4) format_table_data3

0x1ff5,	// (0x00033ae4) format_table_data_example

0x0008,

0x1ff5,	// (0x00033ae4) intro_purpose

0xf8b6,	// (0x000413a5) bg_popup_preview_window_pane_g

0x1ff5,	// (0x00033ae4) texts_category

0x1ff5,	// (0x00033ae4) texts_graphics

0x2c78,	// (0x00034767) text_digital

0x2c87,	// (0x00034776) text_primary

0x2c96,	// (0x00034785) text_primary_small

0x2ca5,	// (0x00034794) text_secondary

0x2cb4,	// (0x000347a3) text_title

0xb06e,	// (0x0003cb5d) bg_passive_tab_pane_g1_cp3_srt

0x7147,	// (0x00038c36) bg_passive_tab_pane_g2_cp3_srt

0xb077,	// (0x0003cb66) bg_passive_tab_pane_g3_cp3_srt

0x2051,	// (0x00033b40) bg_active_tab_pane_cp3_srt_ParamLimits

0x2051,	// (0x00033b40) bg_active_tab_pane_cp3_srt

0xb080,	// (0x0003cb6f) tabs_4_active_pane_srt_g1

0xb088,	// (0x0003cb77) tabs_4_active_pane_srt_t1_ParamLimits

0xb088,	// (0x0003cb77) tabs_4_active_pane_srt_t1

0xb06e,	// (0x0003cb5d) bg_active_tab_pane_g1_cp3_copy1

0x7147,	// (0x00038c36) bg_active_tab_pane_g2_cp3_copy1

0xb077,	// (0x0003cb66) bg_active_tab_pane_g3_cp3_copy1

0x2051,	// (0x00033b40) tabs_2_long_active_pane_srt_ParamLimits

0x2051,	// (0x00033b40) tabs_2_long_active_pane_srt

0x2051,	// (0x00033b40) tabs_2_long_passive_pane_srt_ParamLimits

0x2051,	// (0x00033b40) tabs_2_long_passive_pane_srt

0x6c30,	// (0x0003871f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6c30,	// (0x0003871f) bg_passive_tab_pane_cp4_srt

0xad5c,	// (0x0003c84b) bg_passive_tab_pane_g1_cp4_srt

0x7147,	// (0x00038c36) bg_passive_tab_pane_g2_cp4_srt

0xad65,	// (0x0003c854) bg_passive_tab_pane_g3_cp4_srt

0x6c0f,	// (0x000386fe) bg_active_tab_pane_cp4_srt_ParamLimits

0x6c0f,	// (0x000386fe) bg_active_tab_pane_cp4_srt

0xad6e,	// (0x0003c85d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad6e,	// (0x0003c85d) tabs_2_long_active_pane_srt_t1

0xad5c,	// (0x0003c84b) bg_active_tab_pane_g1_cp4_srt

0x7147,	// (0x00038c36) bg_active_tab_pane_g2_cp4_srt

0xad65,	// (0x0003c854) bg_active_tab_pane_g3_cp4_srt

0x2043,	// (0x00033b32) tabs_3_long_active_pane_srt_ParamLimits

0x2043,	// (0x00033b32) tabs_3_long_active_pane_srt

0x2043,	// (0x00033b32) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2043,	// (0x00033b32) tabs_3_long_passive_pane_cp_srt

0x2043,	// (0x00033b32) tabs_3_long_passive_pane_srt_ParamLimits

0x2043,	// (0x00033b32) tabs_3_long_passive_pane_srt

0x6c30,	// (0x0003871f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6c30,	// (0x0003871f) bg_passive_tab_pane_cp5_srt

0x72d4,	// (0x00038dc3) bg_passive_tab_pane_g1_cp5_srt

0x7147,	// (0x00038c36) bg_passive_tab_pane_g2_cp5_srt

0x72dd,	// (0x00038dcc) bg_passive_tab_pane_g3_cp5_srt

0x6c0f,	// (0x000386fe) bg_active_tab_pane_cp5_srt_ParamLimits

0x6c0f,	// (0x000386fe) bg_active_tab_pane_cp5_srt

0xad4a,	// (0x0003c839) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad4a,	// (0x0003c839) tabs_3_long_active_pane_srt_t1

0x72d4,	// (0x00038dc3) bg_active_tab_pane_g1_cp5_srt

0x7147,	// (0x00038c36) bg_active_tab_pane_g2_cp5_srt

0x72dd,	// (0x00038dcc) bg_active_tab_pane_g3_cp5_srt

0xad3c,	// (0x0003c82b) navi_text_pane_srt_t1

0xad34,	// (0x0003c823) navi_icon_pane_srt_g1

0x2d9f,	// (0x0003488e) midp_editing_number_pane_srt

0x2cc3,	// (0x000347b2) midp_ticker_pane_srt

0x2da7,	// (0x00034896) midp_ticker_pane_srt_g1

0x2daf,	// (0x0003489e) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x0004122d) midp_ticker_pane_srt_g

0x2db7,	// (0x000348a6) midp_ticker_pane_srt_t1

0xad25,	// (0x0003c814) midp_editing_number_pane_t1_copy1

0x7374,	// (0x00038e63) listscroll_midp_pane

0x7374,	// (0x00038e63) midp_form_pane

0x73e6,	// (0x00038ed5) midp_info_popup_window_ParamLimits

0x73e6,	// (0x00038ed5) midp_info_popup_window

0x24e4,	// (0x00033fd3) bg_popup_sub_pane_cp50_ParamLimits

0x24e4,	// (0x00033fd3) bg_popup_sub_pane_cp50

0x9e65,	// (0x0003b954) listscroll_midp_info_pane_ParamLimits

0x9e65,	// (0x0003b954) listscroll_midp_info_pane

0x9e45,	// (0x0003b934) listscroll_form_midp_pane_ParamLimits

0x9e45,	// (0x0003b934) listscroll_form_midp_pane

0x9e51,	// (0x0003b940) scroll_bar_cp050

0x9e25,	// (0x0003b914) list_midp_pane

0xbad9,	// (0x0003d5c8) signal_pane_g2_cp

0x9d5f,	// (0x0003b84e) listscroll_midp_info_pane_t1_ParamLimits

0x9d5f,	// (0x0003b84e) listscroll_midp_info_pane_t1

0x9d77,	// (0x0003b866) listscroll_midp_info_pane_t2_ParamLimits

0x9d77,	// (0x0003b866) listscroll_midp_info_pane_t2

0x9db5,	// (0x0003b8a4) listscroll_midp_info_pane_t3_ParamLimits

0x9db5,	// (0x0003b8a4) listscroll_midp_info_pane_t3

0x9def,	// (0x0003b8de) listscroll_midp_info_pane_t4_ParamLimits

0x9def,	// (0x0003b8de) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x000412e0) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x000412e0) listscroll_midp_info_pane_t

0x2539,	// (0x00034028) scroll_pane_cp21

0x9cff,	// (0x0003b7ee) form_midp_field_choice_group_pane

0x9d08,	// (0x0003b7f7) form_midp_field_text_pane

0x9d45,	// (0x0003b834) form_midp_field_time_pane

0x9d4d,	// (0x0003b83c) form_midp_gauge_slider_pane

0x9d56,	// (0x0003b845) form_midp_gauge_wait_pane

0x1ff5,	// (0x00033ae4) form_midp_image_pane

0x8141,	// (0x00039c30) list_single_midp_pane_ParamLimits

0x8141,	// (0x00039c30) list_single_midp_pane

0x9cb4,	// (0x0003b7a3) form_midp_field_text_pane_t1

0x9a7e,	// (0x0003b56d) input_focus_pane_cp050

0x9cee,	// (0x0003b7dd) list_midp_form_text_pane

0x9c83,	// (0x0003b772) form_midp_field_choice_group_pane_t1

0x9c91,	// (0x0003b780) input_focus_pane_cp051

0x9ca5,	// (0x0003b794) list_midp_choice_pane

0x1ff5,	// (0x00033ae4) status_idle_pane

0x9c67,	// (0x0003b756) form_midp_field_time_pane_t1

0x1feb,	// (0x00033ada) wait_anim_pane_g2_copy1

0x9c75,	// (0x0003b764) form_midp_field_time_pane_t2

0x0001,

0x2d23,	// (0x00034812) aid_navinavi_width_2_pane

0xf7ec,	// (0x000412db) form_midp_field_time_pane_t

0x1ff5,	// (0x00033ae4) input_focus_pane_cp052

0x1ff5,	// (0x00033ae4) bg_input_focus_pane_cp040

0x9c27,	// (0x0003b716) form_midp_gauge_slider_pane_t1

0x9c35,	// (0x0003b724) form_midp_gauge_slider_pane_t2

0x9c43,	// (0x0003b732) form_midp_gauge_slider_pane_t3

0x9c51,	// (0x0003b740) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x000412d2) form_midp_gauge_slider_pane_t

0x9c5f,	// (0x0003b74e) form_midp_slider_pane

0x2051,	// (0x00033b40) bg_input_focus_pane_cp041_ParamLimits

0x2051,	// (0x00033b40) bg_input_focus_pane_cp041

0x9bf4,	// (0x0003b6e3) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bf4,	// (0x0003b6e3) form_midp_gauge_wait_pane_t1

0x9c06,	// (0x0003b6f5) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c06,	// (0x0003b6f5) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x000412cd) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x000412cd) form_midp_gauge_wait_pane_t

0x9c18,	// (0x0003b707) form_midp_wait_pane_ParamLimits

0x9c18,	// (0x0003b707) form_midp_wait_pane

0x9bbe,	// (0x0003b6ad) form_midp_image_pane_g1

0x9bc7,	// (0x0003b6b6) form_midp_image_pane_t1

0x9bd6,	// (0x0003b6c5) form_midp_image_pane_t2

0x9be5,	// (0x0003b6d4) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x000412c6) form_midp_image_pane_t

0x9bb5,	// (0x0003b6a4) list_single_midp_pane_g1

0x48b5,	// (0x000363a4) list_single_midp_pane_t1

0x9b8c,	// (0x0003b67b) list_midp_form_item_pane_ParamLimits

0x9b8c,	// (0x0003b67b) list_midp_form_item_pane

0x2ccb,	// (0x000347ba) list_midp_form_item_pane_t1

0x2cda,	// (0x000347c9) midp_ticker_pane_g1

0x2ce6,	// (0x000347d5) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x00041213) midp_ticker_pane_g

0x2cf2,	// (0x000347e1) midp_ticker_pane_t1

0xaf72,	// (0x0003ca61) midp_editing_number_pane_t1

0xaf50,	// (0x0003ca3f) midp_editing_number_pane

0xaf5f,	// (0x0003ca4e) midp_ticker_pane

0xad15,	// (0x0003c804) ai_message_heading_pane

0x1ff5,	// (0x00033ae4) bg_popup_window_pane_cp14

0xad1d,	// (0x0003c80c) listscroll_ai_message_pane

0xac9f,	// (0x0003c78e) ai_message_heading_pane_g1_ParamLimits

0xac9f,	// (0x0003c78e) ai_message_heading_pane_g1

0xacab,	// (0x0003c79a) ai_message_heading_pane_g2_ParamLimits

0xacab,	// (0x0003c79a) ai_message_heading_pane_g2

0xacb7,	// (0x0003c7a6) ai_message_heading_pane_g3_ParamLimits

0xacb7,	// (0x0003c7a6) ai_message_heading_pane_g3

0xacc3,	// (0x0003c7b2) ai_message_heading_pane_g4_ParamLimits

0xacc3,	// (0x0003c7b2) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x00041407) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x00041407) ai_message_heading_pane_g

0xaccf,	// (0x0003c7be) ai_message_heading_pane_t1_ParamLimits

0xaccf,	// (0x0003c7be) ai_message_heading_pane_t1

0xace9,	// (0x0003c7d8) ai_message_heading_pane_t2_ParamLimits

0xace9,	// (0x0003c7d8) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x00041410) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x00041410) ai_message_heading_pane_t

0xacfb,	// (0x0003c7ea) bg_popup_heading_pane_cp1_ParamLimits

0xacfb,	// (0x0003c7ea) bg_popup_heading_pane_cp1

0xac8d,	// (0x0003c77c) list_ai_message_pane_ParamLimits

0xac8d,	// (0x0003c77c) list_ai_message_pane

0x2539,	// (0x00034028) scroll_pane_cp10

0xac29,	// (0x0003c718) list_ai_message_pane_g1

0xac31,	// (0x0003c720) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x000413e4) list_ai_message_pane_g

0xac39,	// (0x0003c728) list_ai_message_pane_t1_ParamLimits

0xac39,	// (0x0003c728) list_ai_message_pane_t1

0xac4e,	// (0x0003c73d) list_ai_message_pane_t2_ParamLimits

0xac4e,	// (0x0003c73d) list_ai_message_pane_t2

0xac63,	// (0x0003c752) list_ai_message_pane_t3_ParamLimits

0xac63,	// (0x0003c752) list_ai_message_pane_t3

0xac78,	// (0x0003c767) list_ai_message_pane_t4_ParamLimits

0xac78,	// (0x0003c767) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x000413e9) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x000413e9) list_ai_message_pane_t

0xac14,	// (0x0003c703) cell_ai_soft_ind_pane_ParamLimits

0xac14,	// (0x0003c703) cell_ai_soft_ind_pane

0x2d04,	// (0x000347f3) cell_ai_soft_ind_pane_g1_ParamLimits

0x2d04,	// (0x000347f3) cell_ai_soft_ind_pane_g1

0x1ff5,	// (0x00033ae4) grid_highlight_cp1

0x2d11,	// (0x00034800) text_secondary_cp56_ParamLimits

0x2d11,	// (0x00034800) text_secondary_cp56

0xabe9,	// (0x0003c6d8) example_general_pane_ParamLimits

0xabe9,	// (0x0003c6d8) example_general_pane

0xabf5,	// (0x0003c6e4) example_parent_pane_g1_ParamLimits

0xabf5,	// (0x0003c6e4) example_parent_pane_g1

0xac01,	// (0x0003c6f0) example_parent_pane_t1_ParamLimits

0xac01,	// (0x0003c6f0) example_parent_pane_t1

0x7ab4,	// (0x000395a3) popup_preview_text_window_ParamLimits

0x7ab4,	// (0x000395a3) popup_preview_text_window

0x2c1a,	// (0x00034709) list_single_pane_cp2_g4

0x2223,	// (0x00033d12) bg_popup_preview_window_pane_ParamLimits

0x2223,	// (0x00033d12) bg_popup_preview_window_pane

0xa943,	// (0x0003c432) popup_preview_text_window_t1_ParamLimits

0xa943,	// (0x0003c432) popup_preview_text_window_t1

0xa961,	// (0x0003c450) popup_preview_text_window_t2_ParamLimits

0xa961,	// (0x0003c450) popup_preview_text_window_t2

0xa9aa,	// (0x0003c499) popup_preview_text_window_t3_ParamLimits

0xa9aa,	// (0x0003c499) popup_preview_text_window_t3

0xa9ef,	// (0x0003c4de) popup_preview_text_window_t4_ParamLimits

0xa9ef,	// (0x0003c4de) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x000413b8) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x000413b8) popup_preview_text_window_t

0xaa6d,	// (0x0003c55c) scroll_pane_cp11

0x99f2,	// (0x0003b4e1) bg_popup_preview_window_pane_g1

0xa903,	// (0x0003c3f2) bg_popup_preview_window_pane_g2

0xa90b,	// (0x0003c3fa) bg_popup_preview_window_pane_g3

0xa913,	// (0x0003c402) bg_popup_preview_window_pane_g4

0xa91b,	// (0x0003c40a) bg_popup_preview_window_pane_g5

0xa923,	// (0x0003c412) bg_popup_preview_window_pane_g6

0xa92b,	// (0x0003c41a) bg_popup_preview_window_pane_g7

0xa933,	// (0x0003c422) bg_popup_preview_window_pane_g8

0x5d1e,	// (0x0003780d) aid_popup_width_pane

0x7a92,	// (0x00039581) popup_midp_note_alarm_window_ParamLimits

0x7a92,	// (0x00039581) popup_midp_note_alarm_window

0x23fb,	// (0x00033eea) data_form_pane_ParamLimits

0x69db,	// (0x000384ca) form_field_data_pane_g1

0x69e5,	// (0x000384d4) form_field_data_pane_t1_ParamLimits

0x2407,	// (0x00033ef6) input_focus_pane_ParamLimits

0x69fd,	// (0x000384ec) data_form_wide_pane_ParamLimits

0x6a0e,	// (0x000384fd) form_field_data_wide_pane_g1

0x6a1a,	// (0x00038509) form_field_data_wide_pane_t1_ParamLimits

0x22fb,	// (0x00033dea) input_focus_pane_cp6_ParamLimits

0x6bc6,	// (0x000386b5) input_popup_find_pane_g1_ParamLimits

0x6bc6,	// (0x000386b5) input_popup_find_pane_g1

0x6d66,	// (0x00038855) aid_navi_side_left_pane

0x6d7b,	// (0x0003886a) aid_navi_side_right_pane

0xa32c,	// (0x0003be1b) bg_popup_window_pane_cp30_ParamLimits

0xa32c,	// (0x0003be1b) bg_popup_window_pane_cp30

0xa3a6,	// (0x0003be95) popup_midp_note_alarm_window_g1_ParamLimits

0xa3a6,	// (0x0003be95) popup_midp_note_alarm_window_g1

0xa3d6,	// (0x0003bec5) popup_midp_note_alarm_window_t1_ParamLimits

0xa3d6,	// (0x0003bec5) popup_midp_note_alarm_window_t1

0xa477,	// (0x0003bf66) popup_midp_note_alarm_window_t2_ParamLimits

0xa477,	// (0x0003bf66) popup_midp_note_alarm_window_t2

0xa525,	// (0x0003c014) popup_midp_note_alarm_window_t3_ParamLimits

0xa525,	// (0x0003c014) popup_midp_note_alarm_window_t3

0xa54d,	// (0x0003c03c) popup_midp_note_alarm_window_t4_ParamLimits

0xa54d,	// (0x0003c03c) popup_midp_note_alarm_window_t4

0xa56d,	// (0x0003c05c) popup_midp_note_alarm_window_t5_ParamLimits

0xa56d,	// (0x0003c05c) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x00041355) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x00041355) popup_midp_note_alarm_window_t

0xa619,	// (0x0003c108) wait_bar_pane_cp1_ParamLimits

0xa619,	// (0x0003c108) wait_bar_pane_cp1

0x1ff5,	// (0x00033ae4) wait_anim_pane_copy1

0x1ff5,	// (0x00033ae4) wait_border_pane_copy1

0xa022,	// (0x0003bb11) wait_border_pane_g1_copy1

0x6a34,	// (0x00038523) form_field_popup_pane_g1

0x6a3c,	// (0x0003852b) form_field_popup_pane_t1_ParamLimits

0x2407,	// (0x00033ef6) input_focus_pane_cp7_ParamLimits

0x2435,	// (0x00033f24) list_form_pane_ParamLimits

0x6a54,	// (0x00038543) form_field_popup_wide_pane_g1

0x6a5c,	// (0x0003854b) form_field_popup_wide_pane_t1_ParamLimits

0x2407,	// (0x00033ef6) input_focus_pane_cp8_ParamLimits

0x2441,	// (0x00033f30) list_form_wide_pane_ParamLimits

0xb10b,	// (0x0003cbfa) aid_size_cell_graphic_pane

0x6ae6,	// (0x000385d5) data_form_pane_t1_ParamLimits

0x83b8,	// (0x00039ea7) data_form_wide_pane_t1_ParamLimits

0x7d99,	// (0x00039888) bg_status_flat_pane

0x6127,	// (0x00037c16) title_pane_t1_ParamLimits

0x200b,	// (0x00033afa) title_pane_t2_ParamLimits

0x2031,	// (0x00033b20) title_pane_t3_ParamLimits

0xf532,	// (0x00041021) title_pane_t_ParamLimits

0x27ee,	// (0x000342dd) level_1_signal_ParamLimits

0x27fb,	// (0x000342ea) level_2_signal_ParamLimits

0x2808,	// (0x000342f7) level_3_signal_ParamLimits

0x2815,	// (0x00034304) level_4_signal_ParamLimits

0x2822,	// (0x00034311) level_5_signal_ParamLimits

0x282f,	// (0x0003431e) level_6_signal_ParamLimits

0x283c,	// (0x0003432b) level_7_signal_ParamLimits

0x27ee,	// (0x000342dd) level_1_battery_ParamLimits

0x27fb,	// (0x000342ea) level_2_battery_ParamLimits

0x2808,	// (0x000342f7) level_3_battery_ParamLimits

0x2815,	// (0x00034304) level_4_battery_ParamLimits

0x2822,	// (0x00034311) level_5_battery_ParamLimits

0x282f,	// (0x0003431e) level_6_battery_ParamLimits

0x283c,	// (0x0003432b) level_7_battery_ParamLimits

0xa231,	// (0x0003bd20) bg_status_flat_pane_g1

0xa239,	// (0x0003bd28) bg_status_flat_pane_g2

0xa241,	// (0x0003bd30) bg_status_flat_pane_g3

0xa249,	// (0x0003bd38) bg_status_flat_pane_g4

0xa251,	// (0x0003bd40) bg_status_flat_pane_g5

0xa259,	// (0x0003bd48) bg_status_flat_pane_g6

0xa261,	// (0x0003bd50) bg_status_flat_pane_g7

0x6197,	// (0x00037c86) tabs_3_active_pane_t1_ParamLimits

0x6197,	// (0x00037c86) tabs_3_passive_pane_t1_ParamLimits

0x61b1,	// (0x00037ca0) tabs_4_active_pane_t1_ParamLimits

0x61b1,	// (0x00037ca0) tabs_4_1_passive_pane_t1_ParamLimits

0x6bfd,	// (0x000386ec) tabs_2_active_pane_t1_ParamLimits

0x6bfd,	// (0x000386ec) tabs_2_passive_pane_t1_ParamLimits

0x6c0f,	// (0x000386fe) bg_active_tab_pane_cp4_ParamLimits

0x6c1d,	// (0x0003870c) tabs_2_long_active_pane_t1_ParamLimits

0x6c30,	// (0x0003871f) bg_passive_tab_pane_cp4_ParamLimits

0x808e,	// (0x00039b7d) list_single_midp_graphic_pane_t1_ParamLimits

0x6c0f,	// (0x000386fe) bg_active_tab_pane_cp5_ParamLimits

0x6c3c,	// (0x0003872b) tabs_3_long_active_pane_t1_ParamLimits

0x6c30,	// (0x0003871f) bg_passive_tab_pane_cp5_ParamLimits

0x808e,	// (0x00039b7d) list_single_midp_graphic_pane_t1

0x7d99,	// (0x00039888) bg_status_flat_pane_ParamLimits

0x7e62,	// (0x00039951) indicator_pane_cp2_ParamLimits

0x7e62,	// (0x00039951) indicator_pane_cp2

0x7f8d,	// (0x00039a7c) navi_pane_srt_ParamLimits

0x7f8d,	// (0x00039a7c) navi_pane_srt

0x7fb1,	// (0x00039aa0) popup_clock_digital_analogue_window_cp1

0x2095,	// (0x00033b84) indicator_pane_t1

0x2cc3,	// (0x000347b2) copy_highlight_pane

0x2cc3,	// (0x000347b2) cursor_graphics_pane

0x2cc3,	// (0x000347b2) graphic_within_text_pane

0x2cc3,	// (0x000347b2) link_highlight_pane

0xaa30,	// (0x0003c51f) popup_preview_text_window_t5_ParamLimits

0xaa30,	// (0x0003c51f) popup_preview_text_window_t5

0x2d2b,	// (0x0003481a) cursor_digital_pane

0x2d2b,	// (0x0003481a) cursor_primary_pane

0x2d3c,	// (0x0003482b) cursor_primary_small_pane

0x2d44,	// (0x00034833) cursor_secondary_pane

0x2d4c,	// (0x0003483b) cursor_title_pane

0x2d2b,	// (0x0003481a) link_highlight_digital_pane

0x2d33,	// (0x00034822) link_highlight_primary_pane

0x2d3c,	// (0x0003482b) link_highlight_primary_small_pane

0x2d44,	// (0x00034833) link_highlight_secondary_pane

0x2d4c,	// (0x0003483b) link_highlight_title_pane

0x2d2b,	// (0x0003481a) copy_highlight_digital_pane

0x2d2b,	// (0x0003481a) copy_highlight_primary_pane

0x2d3c,	// (0x0003482b) copy_highlight_primary_small_pane

0x2d44,	// (0x00034833) copy_highlight_secondary_pane

0x2d4c,	// (0x0003483b) copy_highlight_title_pane

0x2d44,	// (0x00034833) graphic_text_digital_pane

0xa2cf,	// (0x0003bdbe) graphic_text_primary_pane

0xa2d8,	// (0x0003bdc7) graphic_text_primary_small_pane

0x2d3c,	// (0x0003482b) graphic_text_secondary_pane

0x2d2b,	// (0x0003481a) graphic_text_title_pane

0x743e,	// (0x00038f2d) cursor_primary_pane_g1

0xa2c1,	// (0x0003bdb0) cursor_text_primary_t1

0xa2a9,	// (0x0003bd98) cursor_primary_small_pane_g1

0xa2b3,	// (0x0003bda2) cursor_text_primary_small_t1

0xa291,	// (0x0003bd80) cursor_primary_small_pane_g1_copy1

0xa29b,	// (0x0003bd8a) cursor_text_primary_small_t1_copy1

0xa279,	// (0x0003bd68) cursor_text_title_t1

0xa287,	// (0x0003bd76) cursor_title_pane_g1

0x743e,	// (0x00038f2d) cursor_digital_pane_g1

0x2d54,	// (0x00034843) cursor_text_digital_t1

0x2d62,	// (0x00034851) link_highlight_primary_pane_g1

0xa222,	// (0x0003bd11) link_highlight_primary_pane_t1

0x2d62,	// (0x00034851) link_highlight_primary_small_pane_g1

0x2d6a,	// (0x00034859) link_highlight_primary_small_pane_t1

0x2d62,	// (0x00034851) link_highlight_secondary_pane_g1

0x2d79,	// (0x00034868) link_highlight_secondary_pane_t1

0xa187,	// (0x0003bc76) link_highlight_title_pane_g1

0xa19e,	// (0x0003bc8d) link_highlight_title_pane_t1

0xa187,	// (0x0003bc76) link_highlight_digital_pane_g1

0xa18f,	// (0x0003bc7e) link_highlight_digital_pane_t1

0xa041,	// (0x0003bb30) copy_highlight_primary_pane_g1

0xa067,	// (0x0003bb56) copy_highlight_primary_pane_t1

0xa041,	// (0x0003bb30) copy_highlight_primary_small_pane_g1

0xa058,	// (0x0003bb47) copy_highlight_primary_small_pane_t1

0x2d88,	// (0x00034877) copy_highlight_secondary_pane_g1

0x2d90,	// (0x0003487f) copy_highlight_secondary_pane_t1

0xa041,	// (0x0003bb30) copy_highlight_title_pane_g1

0xa049,	// (0x0003bb38) copy_highlight_title_pane_t1

0xa041,	// (0x0003bb30) copy_highlight_digital_pane_g1

0xb2d9,	// (0x0003cdc8) copy_highlight_digital_pane_t1

0xb22d,	// (0x0003cd1c) graphic_text_primary_pane_g1

0xb2bd,	// (0x0003cdac) graphic_text_primary_pane_t1

0xb2cb,	// (0x0003cdba) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x00041484) graphic_text_primary_pane_t

0xb299,	// (0x0003cd88) graphic_text_primary_small_pane_g1

0xb2a1,	// (0x0003cd90) graphic_text_primary_small_pane_t1

0xb2af,	// (0x0003cd9e) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x0004147f) graphic_text_primary_small_pane_t

0xb275,	// (0x0003cd64) graphic_text_secondary_pane_g1

0xb27d,	// (0x0003cd6c) graphic_text_secondary_pane_t1

0xb28b,	// (0x0003cd7a) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x0004147a) graphic_text_secondary_pane_t

0xb251,	// (0x0003cd40) graphic_text_title_pane_g1

0xb259,	// (0x0003cd48) graphic_text_title_pane_t1

0xb267,	// (0x0003cd56) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x00041475) graphic_text_title_pane_t

0xb22d,	// (0x0003cd1c) graphic_text_digital_pane_g1

0xb235,	// (0x0003cd24) graphic_text_digital_pane_t1

0xb243,	// (0x0003cd32) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x00041470) graphic_text_digital_pane_t

0x2051,	// (0x00033b40) navi_icon_pane_srt_ParamLimits

0x2051,	// (0x00033b40) navi_icon_pane_srt

0x1ff5,	// (0x00033ae4) navi_midp_pane_srt

0x1ff5,	// (0x00033ae4) navi_navi_pane_srt

0x2051,	// (0x00033b40) navi_text_pane_srt_ParamLimits

0x2051,	// (0x00033b40) navi_text_pane_srt

0xb1f8,	// (0x0003cce7) navi_navi_icon_text_pane_srt

0xb200,	// (0x0003ccef) navi_navi_pane_srt_g1_ParamLimits

0xb200,	// (0x0003ccef) navi_navi_pane_srt_g1

0xb212,	// (0x0003cd01) navi_navi_pane_srt_g2_ParamLimits

0xb212,	// (0x0003cd01) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x0004146b) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x0004146b) navi_navi_pane_srt_g

0xb224,	// (0x0003cd13) navi_navi_tabs_pane_srt

0xb1f8,	// (0x0003cce7) navi_navi_text_pane_srt

0xb1f8,	// (0x0003cce7) navi_navi_volume_pane_srt

0xb1e9,	// (0x0003ccd8) navi_navi_text_pane_srt_t1

0x851c,	// (0x0003a00b) navi_navi_volume_pane_srt_g1

0x8524,	// (0x0003a013) volume_small_pane_srt_ParamLimits

0x8524,	// (0x0003a013) volume_small_pane_srt

0x7448,	// (0x00038f37) volume_small_pane_srt_g1_ParamLimits

0x7448,	// (0x00038f37) volume_small_pane_srt_g1

0x7458,	// (0x00038f47) volume_small_pane_srt_g2_ParamLimits

0x7458,	// (0x00038f47) volume_small_pane_srt_g2

0x7469,	// (0x00038f58) volume_small_pane_srt_g3_ParamLimits

0x7469,	// (0x00038f58) volume_small_pane_srt_g3

0x747a,	// (0x00038f69) volume_small_pane_srt_g4_ParamLimits

0x747a,	// (0x00038f69) volume_small_pane_srt_g4

0x748b,	// (0x00038f7a) volume_small_pane_srt_g5_ParamLimits

0x748b,	// (0x00038f7a) volume_small_pane_srt_g5

0x749c,	// (0x00038f8b) volume_small_pane_srt_g6_ParamLimits

0x749c,	// (0x00038f8b) volume_small_pane_srt_g6

0x74ad,	// (0x00038f9c) volume_small_pane_srt_g7_ParamLimits

0x74ad,	// (0x00038f9c) volume_small_pane_srt_g7

0x74be,	// (0x00038fad) volume_small_pane_srt_g8_ParamLimits

0x74be,	// (0x00038fad) volume_small_pane_srt_g8

0x74cf,	// (0x00038fbe) volume_small_pane_srt_g9_ParamLimits

0x74cf,	// (0x00038fbe) volume_small_pane_srt_g9

0x74e0,	// (0x00038fcf) volume_small_pane_srt_g10_ParamLimits

0x74e0,	// (0x00038fcf) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x00041218) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x00041218) volume_small_pane_srt_g

0x63fe,	// (0x00037eed) query_popup_data_pane_cp2

0xb1cf,	// (0x0003ccbe) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1cf,	// (0x0003ccbe) navi_navi_icon_text_pane_srt_t1

0xa2cf,	// (0x0003bdbe) navi_tabs_2_long_pane_srt

0xa2cf,	// (0x0003bdbe) navi_tabs_2_pane_srt

0xa2cf,	// (0x0003bdbe) navi_tabs_3_long_pane_srt

0xa2cf,	// (0x0003bdbe) navi_tabs_3_pane_srt

0xa2cf,	// (0x0003bdbe) navi_tabs_4_pane_srt

0x84fc,	// (0x00039feb) tabs_2_active_pane_srt_ParamLimits

0x84fc,	// (0x00039feb) tabs_2_active_pane_srt

0x850c,	// (0x00039ffb) tabs_2_passive_pane_srt_ParamLimits

0x850c,	// (0x00039ffb) tabs_2_passive_pane_srt

0x2549,	// (0x00034038) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2549,	// (0x00034038) bg_passive_tab_pane_cp1_srt

0xb19b,	// (0x0003cc8a) bg_passive_tab_pane_g1_cp1_srt

0x7147,	// (0x00038c36) bg_passive_tab_pane_g2_cp1_srt

0xb1a4,	// (0x0003cc93) bg_passive_tab_pane_g3_cp1_srt

0x2051,	// (0x00033b40) bg_active_tab_pane_cp1_srt_ParamLimits

0x2051,	// (0x00033b40) bg_active_tab_pane_cp1_srt

0xb1ad,	// (0x0003cc9c) tabs_2_active_pane_srt_g1

0xb1b5,	// (0x0003cca4) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b5,	// (0x0003cca4) tabs_2_active_pane_srt_t1

0xb19b,	// (0x0003cc8a) bg_active_tab_pane_g1_cp1_srt

0x7147,	// (0x00038c36) bg_active_tab_pane_g2_cp1_srt

0xb1a4,	// (0x0003cc93) bg_active_tab_pane_g3_cp1_srt

0x84c9,	// (0x00039fb8) tabs_3_active_pane_srt_ParamLimits

0x84c9,	// (0x00039fb8) tabs_3_active_pane_srt

0x84da,	// (0x00039fc9) tabs_3_passive_pane_cp_srt_ParamLimits

0x84da,	// (0x00039fc9) tabs_3_passive_pane_cp_srt

0x84eb,	// (0x00039fda) tabs_3_passive_pane_srt_ParamLimits

0x84eb,	// (0x00039fda) tabs_3_passive_pane_srt

0x2549,	// (0x00034038) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2549,	// (0x00034038) bg_passive_tab_pane_cp2_srt

0x74f1,	// (0x00038fe0) bg_passive_tab_pane_g1_cp2_srt

0x7147,	// (0x00038c36) bg_passive_tab_pane_g2_cp2_srt

0x74fa,	// (0x00038fe9) bg_passive_tab_pane_g3_cp2_srt

0x2051,	// (0x00033b40) bg_active_tab_pane_cp2_srt_ParamLimits

0x2051,	// (0x00033b40) bg_active_tab_pane_cp2_srt

0xb181,	// (0x0003cc70) tabs_3_active_pane_srt_g1

0xb189,	// (0x0003cc78) tabs_3_active_pane_srt_t1_ParamLimits

0xb189,	// (0x0003cc78) tabs_3_active_pane_srt_t1

0x74f1,	// (0x00038fe0) bg_active_tab_pane_g1_cp2_srt

0x7147,	// (0x00038c36) bg_active_tab_pane_g2_cp2_srt

0x74fa,	// (0x00038fe9) bg_active_tab_pane_g3_cp2_srt

0x8481,	// (0x00039f70) tabs_4_active_pane_srt_ParamLimits

0x8481,	// (0x00039f70) tabs_4_active_pane_srt

0x8493,	// (0x00039f82) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8493,	// (0x00039f82) tabs_4_passive_pane_cp2_srt

0x7713,	// (0x00039202) aid_size_cell_toolbar

0x6c30,	// (0x0003871f) main_idle_act_pane_ParamLimits

0x78c4,	// (0x000393b3) popup_large_graphic_colour_window_ParamLimits

0x7c2f,	// (0x0003971e) popup_toolbar_window_ParamLimits

0x7c2f,	// (0x0003971e) popup_toolbar_window

0xaf81,	// (0x0003ca70) list_single_graphic_2heading_pane_ParamLimits

0xaf81,	// (0x0003ca70) list_single_graphic_2heading_pane

0x26d6,	// (0x000341c5) aid_size_cell_apps_grid_lsc_pane

0x26e8,	// (0x000341d7) aid_size_cell_apps_grid_prt_pane

0x2549,	// (0x00034038) bg_wml_button_pane_cp1_ParamLimits

0x2549,	// (0x00034038) bg_wml_button_pane_cp1

0x9cb4,	// (0x0003b7a3) form_midp_field_text_pane_t1_ParamLimits

0x9a7e,	// (0x0003b56d) input_focus_pane_cp050_ParamLimits

0x9cee,	// (0x0003b7dd) list_midp_form_text_pane_ParamLimits

0x9c91,	// (0x0003b780) input_focus_pane_cp051_ParamLimits

0x9ca5,	// (0x0003b794) list_midp_choice_pane_ParamLimits

0x9b34,	// (0x0003b623) list_single_2graphic_pane_cp3_ParamLimits

0x9b34,	// (0x0003b623) list_single_2graphic_pane_cp3

0x9b59,	// (0x0003b648) list_single_midp_graphic_pane_ParamLimits

0x9b59,	// (0x0003b648) list_single_midp_graphic_pane

0x5c8c,	// (0x0003777b) list_single_graphic_2heading_pane_g1_ParamLimits

0x5c8c,	// (0x0003777b) list_single_graphic_2heading_pane_g1

0x5c98,	// (0x00037787) list_single_graphic_2heading_pane_g4_ParamLimits

0x5c98,	// (0x00037787) list_single_graphic_2heading_pane_g4

0x5ca4,	// (0x00037793) list_single_graphic_2heading_pane_g5_ParamLimits

0x5ca4,	// (0x00037793) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x0004126b) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x0004126b) list_single_graphic_2heading_pane_g

0x5cb0,	// (0x0003779f) list_single_graphic_2heading_pane_t1_ParamLimits

0x5cb0,	// (0x0003779f) list_single_graphic_2heading_pane_t1

0x5cc4,	// (0x000377b3) list_single_graphic_2heading_pane_t2_ParamLimits

0x5cc4,	// (0x000377b3) list_single_graphic_2heading_pane_t2

0x5cde,	// (0x000377cd) list_single_graphic_2heading_pane_t3_ParamLimits

0x5cde,	// (0x000377cd) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x00041272) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x00041272) list_single_graphic_2heading_pane_t

0x9930,	// (0x0003b41f) bg_popup_sub_pane_cp2

0x995a,	// (0x0003b449) grid_toobar_pane

0x7ffd,	// (0x00039aec) cell_toolbar_pane_ParamLimits

0x7ffd,	// (0x00039aec) cell_toolbar_pane

0x9996,	// (0x0003b485) cell_toolbar_pane_g1_ParamLimits

0x9996,	// (0x0003b485) cell_toolbar_pane_g1

0x99aa,	// (0x0003b499) cell_toolbar_pane_g2_ParamLimits

0x99aa,	// (0x0003b499) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x00041280) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x00041280) cell_toolbar_pane_g

0x99cc,	// (0x0003b4bb) grid_highlight_pane_cp2_ParamLimits

0x99cc,	// (0x0003b4bb) grid_highlight_pane_cp2

0x99e6,	// (0x0003b4d5) toolbar_button_pane

0x99f2,	// (0x0003b4e1) toolbar_button_pane_g1

0x99fa,	// (0x0003b4e9) toolbar_button_pane_g2

0x9a02,	// (0x0003b4f1) toolbar_button_pane_g3

0x9a0a,	// (0x0003b4f9) toolbar_button_pane_g4

0x9a12,	// (0x0003b501) toolbar_button_pane_g5

0x9a1a,	// (0x0003b509) toolbar_button_pane_g6

0x9a22,	// (0x0003b511) toolbar_button_pane_g7

0x9a2a,	// (0x0003b519) toolbar_button_pane_g8

0x9a32,	// (0x0003b521) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x00041285) toolbar_button_pane_g

0x8035,	// (0x00039b24) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8035,	// (0x00039b24) list_single_2graphic_pane_g1_cp3

0x8041,	// (0x00039b30) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8041,	// (0x00039b30) list_single_2graphic_pane_g2_cp3

0x8052,	// (0x00039b41) list_single_2graphic_pane_g3_cp3

0x805a,	// (0x00039b49) list_single_2graphic_pane_g4_cp3_ParamLimits

0x805a,	// (0x00039b49) list_single_2graphic_pane_g4_cp3

0x8066,	// (0x00039b55) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8066,	// (0x00039b55) list_single_2graphic_pane_t1_cp3

0x8082,	// (0x00039b71) list_single_midp_graphic_pane_g2_ParamLimits

0x8082,	// (0x00039b71) list_single_midp_graphic_pane_g2

0x771b,	// (0x0003920a) aid_zoom_text_primary

0x5c70,	// (0x0003775f) aid_zoom_text_secondary

0x2e05,	// (0x000348f4) status_small_pane_g7_ParamLimits

0x2e05,	// (0x000348f4) status_small_pane_g7

0x7554,	// (0x00039043) status_small_pane_t1_ParamLimits

0x610a,	// (0x00037bf9) title_pane_g2

0x0003,

0xf529,	// (0x00041018) title_pane_g

0x6458,	// (0x00037f47) aid_size_cell_colour_1_pane_ParamLimits

0x6458,	// (0x00037f47) aid_size_cell_colour_1_pane

0x646c,	// (0x00037f5b) aid_size_cell_colour_2_pane_ParamLimits

0x646c,	// (0x00037f5b) aid_size_cell_colour_2_pane

0x6480,	// (0x00037f6f) aid_size_cell_colour_3_pane_ParamLimits

0x6480,	// (0x00037f6f) aid_size_cell_colour_3_pane

0x6494,	// (0x00037f83) aid_size_cell_colour_4_pane_ParamLimits

0x6494,	// (0x00037f83) aid_size_cell_colour_4_pane

0x6ca3,	// (0x00038792) title_pane_stacon_g1_ParamLimits

0x6ca3,	// (0x00038792) title_pane_stacon_g1

0xa0be,	// (0x0003bbad) popup_note_wait_window_g3_ParamLimits

0xa0be,	// (0x0003bbad) popup_note_wait_window_g3

0xa134,	// (0x0003bc23) popup_note_wait_window_t5_ParamLimits

0xa134,	// (0x0003bc23) popup_note_wait_window_t5

0x1ff5,	// (0x00033ae4) main_feb_china_hwr_fs_writing_pane

0x77ab,	// (0x0003929a) popup_feb_china_hwr_fs_window_ParamLimits

0x77ab,	// (0x0003929a) popup_feb_china_hwr_fs_window

0x80a4,	// (0x00039b93) aid_size_cell_hwr_fs_ParamLimits

0x80a4,	// (0x00039b93) aid_size_cell_hwr_fs

0x9a7e,	// (0x0003b56d) bg_popup_sub_pane_cp3_ParamLimits

0x9a7e,	// (0x0003b56d) bg_popup_sub_pane_cp3

0x80b9,	// (0x00039ba8) grid_hwr_fs_pane_ParamLimits

0x80b9,	// (0x00039ba8) grid_hwr_fs_pane

0x80d1,	// (0x00039bc0) linegrid_hwr_fs_pane_ParamLimits

0x80d1,	// (0x00039bc0) linegrid_hwr_fs_pane

0x80e1,	// (0x00039bd0) cell_hwr_fs_pane_ParamLimits

0x80e1,	// (0x00039bd0) cell_hwr_fs_pane

0x9a8a,	// (0x0003b579) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a8a,	// (0x0003b579) linegrid_hwr_fs_pane_g1

0x9a96,	// (0x0003b585) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a96,	// (0x0003b585) linegrid_hwr_fs_pane_g2

0x9aa8,	// (0x0003b597) linegrid_hwr_fs_pane_g3_ParamLimits

0x9aa8,	// (0x0003b597) linegrid_hwr_fs_pane_g3

0x8103,	// (0x00039bf2) linegrid_hwr_fs_pane_g4_ParamLimits

0x8103,	// (0x00039bf2) linegrid_hwr_fs_pane_g4

0x811d,	// (0x00039c0c) linegrid_hwr_fs_pane_g5_ParamLimits

0x811d,	// (0x00039c0c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x000412ab) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x000412ab) linegrid_hwr_fs_pane_g

0x9ab4,	// (0x0003b5a3) cell_hwr_fs_pane_g1_ParamLimits

0x9ab4,	// (0x0003b5a3) cell_hwr_fs_pane_g1

0x986a,	// (0x0003b359) cell_hwr_fs_pane_g2_ParamLimits

0x986a,	// (0x0003b359) cell_hwr_fs_pane_g2

0x9aca,	// (0x0003b5b9) cell_hwr_fs_pane_g3_ParamLimits

0x9aca,	// (0x0003b5b9) cell_hwr_fs_pane_g3

0x9ad7,	// (0x0003b5c6) cell_hwr_fs_pane_g4_ParamLimits

0x9ad7,	// (0x0003b5c6) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x000412b6) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x000412b6) cell_hwr_fs_pane_g

0x8133,	// (0x00039c22) cell_hwr_fs_pane_t1

0x1ff5,	// (0x00033ae4) grid_highlight_pane_cp6

0x1ff5,	// (0x00033ae4) main_idle_act2_pane

0x2520,	// (0x0003400f) aid_inside_area_popup_secondary

0xa753,	// (0x0003c242) aid_inside_area_window_primary_ParamLimits

0xa753,	// (0x0003c242) aid_inside_area_window_primary

0xb2e8,	// (0x0003cdd7) ai2_news_ticker_pane

0xb2f0,	// (0x0003cddf) aid_size_cell_ai1_link_ParamLimits

0xb2f0,	// (0x0003cddf) aid_size_cell_ai1_link

0xb30a,	// (0x0003cdf9) popup_ai2_data_window_ParamLimits

0xb30a,	// (0x0003cdf9) popup_ai2_data_window

0xb320,	// (0x0003ce0f) popup_ai2_link_window_ParamLimits

0xb320,	// (0x0003ce0f) popup_ai2_link_window

0x9a7e,	// (0x0003b56d) bg_popup_sub_pane_cp4_ParamLimits

0x9a7e,	// (0x0003b56d) bg_popup_sub_pane_cp4

0xb334,	// (0x0003ce23) grid_ai2_link_pane_ParamLimits

0xb334,	// (0x0003ce23) grid_ai2_link_pane

0xb34b,	// (0x0003ce3a) popup_ai2_link_window_g1_ParamLimits

0xb34b,	// (0x0003ce3a) popup_ai2_link_window_g1

0xb357,	// (0x0003ce46) popup_ai2_link_window_g2_ParamLimits

0xb357,	// (0x0003ce46) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x00041489) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x00041489) popup_ai2_link_window_g

0xb366,	// (0x0003ce55) ai2_mp_button_pane

0xb36e,	// (0x0003ce5d) ai2_mp_volume_pane

0x9c91,	// (0x0003b780) bg_popup_sub_pane_cp5_ParamLimits

0x9c91,	// (0x0003b780) bg_popup_sub_pane_cp5

0xb376,	// (0x0003ce65) heading_ai2_gene_pane_ParamLimits

0xb376,	// (0x0003ce65) heading_ai2_gene_pane

0xb382,	// (0x0003ce71) list_ai2_gene_pane_ParamLimits

0xb382,	// (0x0003ce71) list_ai2_gene_pane

0xb3ca,	// (0x0003ceb9) cell_ai2_link_pane_ParamLimits

0xb3ca,	// (0x0003ceb9) cell_ai2_link_pane

0xb3e0,	// (0x0003cecf) cell_ai2_link_pane_g1

0x1ff5,	// (0x00033ae4) grid_highlight_pane_cp7

0x8539,	// (0x0003a028) ai2_mp_volume_pane_g1

0xb4b0,	// (0x0003cf9f) ai2_mp_volume_pane_g2

0xb425,	// (0x0003cf14) list_ai2_gene_pane_t1

0xb4b8,	// (0x0003cfa7) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x000414a2) ai2_mp_volume_pane_g

0x8541,	// (0x0003a030) volume_small_pane_cp3

0xb4c0,	// (0x0003cfaf) aid_size_cell_ai2_button

0xb4c8,	// (0x0003cfb7) grid_ai2_button_pane

0xb4d1,	// (0x0003cfc0) cell_ai2_button_pane_ParamLimits

0xb4d1,	// (0x0003cfc0) cell_ai2_button_pane

0x1feb,	// (0x00033ada) cell_ai2_button_pane_g1

0x1ff5,	// (0x00033ae4) grid_highlight_pane_cp8

0xb470,	// (0x0003cf5f) ai2_gene_pane_t1_ParamLimits

0xb470,	// (0x0003cf5f) ai2_gene_pane_t1

0x7709,	// (0x000391f8) aid_height_parent_landscape

0xadbc,	// (0x0003c8ab) aid_height_set_list

0xadcd,	// (0x0003c8bc) aid_size_parent

0xb10b,	// (0x0003cbfa) aid_size_cell_graphic_pane_ParamLimits

0xb392,	// (0x0003ce81) popup_ai2_data_window_g1_ParamLimits

0xb392,	// (0x0003ce81) popup_ai2_data_window_g1

0xb39e,	// (0x0003ce8d) ai2_news_ticker_pane_g1

0xb3a6,	// (0x0003ce95) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x0004148e) ai2_news_ticker_pane_g

0xb3ae,	// (0x0003ce9d) ai2_news_ticker_pane_t1

0xb3bc,	// (0x0003ceab) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x00041493) ai2_news_ticker_pane_t

0xb3e9,	// (0x0003ced8) heading_ai2_gene_pane_g1

0xb3f1,	// (0x0003cee0) heading_ai2_gene_pane_t1_ParamLimits

0xb3f1,	// (0x0003cee0) heading_ai2_gene_pane_t1

0xb406,	// (0x0003cef5) list_highlight_pane_cp6

0xb40e,	// (0x0003cefd) ai2_gene_pane_ParamLimits

0xb40e,	// (0x0003cefd) ai2_gene_pane

0xb433,	// (0x0003cf22) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x00041498) list_ai2_gene_pane_t

0xb441,	// (0x0003cf30) list_highlight_pane_cp8_ParamLimits

0xb441,	// (0x0003cf30) list_highlight_pane_cp8

0xb452,	// (0x0003cf41) ai2_gene_pane_g1_ParamLimits

0xb452,	// (0x0003cf41) ai2_gene_pane_g1

0xb464,	// (0x0003cf53) ai2_gene_pane_g2_ParamLimits

0xb464,	// (0x0003cf53) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x0004149d) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x0004149d) ai2_gene_pane_g

0x23a6,	// (0x00033e95) scroll_pane_cp12

0x76c6,	// (0x000391b5) control_pane_t3_ParamLimits

0x76c6,	// (0x000391b5) control_pane_t3

0x7545,	// (0x00039034) status_small_pane_g8_ParamLimits

0x7545,	// (0x00039034) status_small_pane_g8

0x788d,	// (0x0003937c) popup_find_window_ParamLimits

0x7aa6,	// (0x00039595) popup_note_image_window_ParamLimits

0x458a,	// (0x00036079) list_double2_graphic_pane_vc_g1_ParamLimits

0x458a,	// (0x00036079) list_double2_graphic_pane_vc_g1

0x480b,	// (0x000362fa) list_double2_graphic_pane_vc_g2_ParamLimits

0x480b,	// (0x000362fa) list_double2_graphic_pane_vc_g2

0x4817,	// (0x00036306) list_double2_graphic_pane_vc_g3_ParamLimits

0x4817,	// (0x00036306) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x00041279) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x00041279) list_double2_graphic_pane_vc_g

0x45ae,	// (0x0003609d) list_double2_graphic_pane_vc_t1_ParamLimits

0x45ae,	// (0x0003609d) list_double2_graphic_pane_vc_t1

0x4596,	// (0x00036085) list_single_heading_pane_vc_g1_ParamLimits

0x4596,	// (0x00036085) list_single_heading_pane_vc_g1

0x45a2,	// (0x00036091) list_single_heading_pane_vc_g2_ParamLimits

0x45a2,	// (0x00036091) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00041092) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00041092) list_single_heading_pane_vc_g

0x4823,	// (0x00036312) list_single_heading_pane_vc_t1_ParamLimits

0x4823,	// (0x00036312) list_single_heading_pane_vc_t1

0x4839,	// (0x00036328) list_single_heading_pane_vc_t2_ParamLimits

0x4839,	// (0x00036328) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x0004129a) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x0004129a) list_single_heading_pane_vc_t

0x9a3a,	// (0x0003b529) list_setting_number_pane_vc_g1_ParamLimits

0x9a3a,	// (0x0003b529) list_setting_number_pane_vc_g1

0x9a46,	// (0x0003b535) list_setting_number_pane_vc_g2_ParamLimits

0x9a46,	// (0x0003b535) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x0004129f) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x0004129f) list_setting_number_pane_vc_g

0x484b,	// (0x0003633a) list_setting_number_pane_vc_t1_ParamLimits

0x484b,	// (0x0003633a) list_setting_number_pane_vc_t1

0x485f,	// (0x0003634e) list_setting_number_pane_vc_t2_ParamLimits

0x485f,	// (0x0003634e) list_setting_number_pane_vc_t2

0x487b,	// (0x0003636a) list_setting_number_pane_vc_t3_ParamLimits

0x487b,	// (0x0003636a) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x000412a4) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x000412a4) list_setting_number_pane_vc_t

0x48a5,	// (0x00036394) set_value_pane_vc_ParamLimits

0x48a5,	// (0x00036394) set_value_pane_vc

0xaf81,	// (0x0003ca70) list_double2_graphic_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_double2_graphic_pane_vc

0xaf81,	// (0x0003ca70) list_double2_large_graphic_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_double2_large_graphic_pane_vc

0xaf81,	// (0x0003ca70) list_double2_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_double2_pane_vc

0xaf81,	// (0x0003ca70) list_double_graphic_heading_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_double_graphic_heading_pane_vc

0xaf81,	// (0x0003ca70) list_double_graphic_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_double_graphic_pane_vc

0xaf81,	// (0x0003ca70) list_double_heading_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_double_heading_pane_vc

0x48c4,	// (0x000363b3) list_double_large_graphic_pane_vc_ParamLimits

0x48c4,	// (0x000363b3) list_double_large_graphic_pane_vc

0xaf81,	// (0x0003ca70) list_double_number_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_double_number_pane_vc

0xaf81,	// (0x0003ca70) list_double_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_double_pane_vc

0xaf81,	// (0x0003ca70) list_double_time_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_double_time_pane_vc

0xaf81,	// (0x0003ca70) list_setting_number_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_setting_number_pane_vc

0xaf81,	// (0x0003ca70) list_setting_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_setting_pane_vc

0xaf81,	// (0x0003ca70) list_single_graphic_heading_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_single_graphic_heading_pane_vc

0xaf81,	// (0x0003ca70) list_single_heading_pane_vc_ParamLimits

0xaf81,	// (0x0003ca70) list_single_heading_pane_vc

0x8419,	// (0x00039f08) list_single_number_heading_pane_vc_ParamLimits

0x8419,	// (0x00039f08) list_single_number_heading_pane_vc

0x4610,	// (0x000360ff) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4610,	// (0x000360ff) list_double_graphic_heading_pane_vc_g1

0x480b,	// (0x000362fa) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x480b,	// (0x000362fa) list_double_graphic_heading_pane_vc_g2

0x4817,	// (0x00036306) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4817,	// (0x00036306) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x000414a9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x000414a9) list_double_graphic_heading_pane_vc_g

0x48e3,	// (0x000363d2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x48e3,	// (0x000363d2) list_double_graphic_heading_pane_vc_t1

0x48f7,	// (0x000363e6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x48f7,	// (0x000363e6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x000414b0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x000414b0) list_double_graphic_heading_pane_vc_t

0x9a3a,	// (0x0003b529) list_setting_pane_vc_g1_ParamLimits

0x9a3a,	// (0x0003b529) list_setting_pane_vc_g1

0x9a46,	// (0x0003b535) list_setting_pane_vc_g2_ParamLimits

0x9a46,	// (0x0003b535) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x0004129f) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x0004129f) list_setting_pane_vc_g

0x490f,	// (0x000363fe) list_setting_pane_vc_t1_ParamLimits

0x490f,	// (0x000363fe) list_setting_pane_vc_t1

0x492b,	// (0x0003641a) list_setting_pane_vc_t2_ParamLimits

0x492b,	// (0x0003641a) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x000414f3) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x000414f3) list_setting_pane_vc_t

0x48a5,	// (0x00036394) set_value_pane_cp_vc_ParamLimits

0x48a5,	// (0x00036394) set_value_pane_cp_vc

0x4596,	// (0x00036085) list_single_number_heading_pane_vc_g1_ParamLimits

0x4596,	// (0x00036085) list_single_number_heading_pane_vc_g1

0x45a2,	// (0x00036091) list_single_number_heading_pane_vc_g2_ParamLimits

0x45a2,	// (0x00036091) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00041092) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00041092) list_single_number_heading_pane_vc_g

0x45c4,	// (0x000360b3) list_single_number_heading_pane_vc_t1_ParamLimits

0x45c4,	// (0x000360b3) list_single_number_heading_pane_vc_t1

0x4945,	// (0x00036434) list_single_number_heading_pane_vc_t2_ParamLimits

0x4945,	// (0x00036434) list_single_number_heading_pane_vc_t2

0x495b,	// (0x0003644a) list_single_number_heading_pane_vc_t3_ParamLimits

0x495b,	// (0x0003644a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x000414f8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x000414f8) list_single_number_heading_pane_vc_t

0x496d,	// (0x0003645c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x496d,	// (0x0003645c) list_single_graphic_heading_pane_vc_g1

0x4596,	// (0x00036085) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4596,	// (0x00036085) list_single_graphic_heading_pane_vc_g4

0x45a2,	// (0x00036091) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x45a2,	// (0x00036091) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x000414ff) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x000414ff) list_single_graphic_heading_pane_vc_g

0x45c4,	// (0x000360b3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x45c4,	// (0x000360b3) list_single_graphic_heading_pane_vc_t1

0x4979,	// (0x00036468) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4979,	// (0x00036468) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x00041506) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x00041506) list_single_graphic_heading_pane_vc_t

0x4596,	// (0x00036085) list_double2_pane_vc_g1_ParamLimits

0x4596,	// (0x00036085) list_double2_pane_vc_g1

0x45a2,	// (0x00036091) list_double2_pane_vc_g2_ParamLimits

0x45a2,	// (0x00036091) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00041092) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00041092) list_double2_pane_vc_g

0x498b,	// (0x0003647a) list_double2_pane_vc_t1_ParamLimits

0x498b,	// (0x0003647a) list_double2_pane_vc_t1

0x461c,	// (0x0003610b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x461c,	// (0x0003610b) list_double2_large_graphic_pane_vc_g1

0x4596,	// (0x00036085) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4596,	// (0x00036085) list_double2_large_graphic_pane_vc_g2

0x45a2,	// (0x00036091) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x45a2,	// (0x00036091) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1c,	// (0x0004150b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1c,	// (0x0004150b) list_double2_large_graphic_pane_vc_g

0x45ae,	// (0x0003609d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x45ae,	// (0x0003609d) list_double2_large_graphic_pane_vc_t1

0x49a3,	// (0x00036492) list_double_time_pane_vc_g1_ParamLimits

0x49a3,	// (0x00036492) list_double_time_pane_vc_g1

0x49af,	// (0x0003649e) list_double_time_pane_vc_g2_ParamLimits

0x49af,	// (0x0003649e) list_double_time_pane_vc_g2

0x0001,

0xfa23,	// (0x00041512) list_double_time_pane_vc_g_ParamLimits

0xfa23,	// (0x00041512) list_double_time_pane_vc_g

0x49bb,	// (0x000364aa) list_double_time_pane_vc_t1_ParamLimits

0x49bb,	// (0x000364aa) list_double_time_pane_vc_t1

0x49df,	// (0x000364ce) list_double_time_pane_vc_t2_ParamLimits

0x49df,	// (0x000364ce) list_double_time_pane_vc_t2

0x4a2e,	// (0x0003651d) list_double_time_pane_vc_t3_ParamLimits

0x4a2e,	// (0x0003651d) list_double_time_pane_vc_t3

0x4a40,	// (0x0003652f) list_double_time_pane_vc_t4_ParamLimits

0x4a40,	// (0x0003652f) list_double_time_pane_vc_t4

0x0003,

0xfa28,	// (0x00041517) list_double_time_pane_vc_t_ParamLimits

0xfa28,	// (0x00041517) list_double_time_pane_vc_t

0x4596,	// (0x00036085) list_double_pane_vc_g1_ParamLimits

0x4596,	// (0x00036085) list_double_pane_vc_g1

0x45a2,	// (0x00036091) list_double_pane_vc_g2_ParamLimits

0x45a2,	// (0x00036091) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00041092) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00041092) list_double_pane_vc_g

0x4a54,	// (0x00036543) list_double_pane_vc_t1_ParamLimits

0x4a54,	// (0x00036543) list_double_pane_vc_t1

0x4a68,	// (0x00036557) list_double_pane_vc_t2_ParamLimits

0x4a68,	// (0x00036557) list_double_pane_vc_t2

0x0001,

0xfa31,	// (0x00041520) list_double_pane_vc_t_ParamLimits

0xfa31,	// (0x00041520) list_double_pane_vc_t

0x4596,	// (0x00036085) list_double_number_pane_vc_g1_ParamLimits

0x4596,	// (0x00036085) list_double_number_pane_vc_g1

0x45a2,	// (0x00036091) list_double_number_pane_vc_g2_ParamLimits

0x45a2,	// (0x00036091) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00041092) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00041092) list_double_number_pane_vc_g

0x4a80,	// (0x0003656f) list_double_number_pane_vc_t1_ParamLimits

0x4a80,	// (0x0003656f) list_double_number_pane_vc_t1

0x4a54,	// (0x00036543) list_double_number_pane_vc_t2_ParamLimits

0x4a54,	// (0x00036543) list_double_number_pane_vc_t2

0x4a92,	// (0x00036581) list_double_number_pane_vc_t3_ParamLimits

0x4a92,	// (0x00036581) list_double_number_pane_vc_t3

0x0002,

0xfa36,	// (0x00041525) list_double_number_pane_vc_t_ParamLimits

0xfa36,	// (0x00041525) list_double_number_pane_vc_t

0x4aaa,	// (0x00036599) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4aaa,	// (0x00036599) list_double_large_graphic_pane_vc_g1

0x4ac6,	// (0x000365b5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4ac6,	// (0x000365b5) list_double_large_graphic_pane_vc_g2

0x4ada,	// (0x000365c9) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4ada,	// (0x000365c9) list_double_large_graphic_pane_vc_g3

0x4ae9,	// (0x000365d8) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4ae9,	// (0x000365d8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3d,	// (0x0004152c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0004152c) list_double_large_graphic_pane_vc_g

0x4af5,	// (0x000365e4) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4af5,	// (0x000365e4) list_double_large_graphic_pane_vc_t1

0x4b11,	// (0x00036600) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4b11,	// (0x00036600) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x00041535) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x00041535) list_double_large_graphic_pane_vc_t

0x480b,	// (0x000362fa) list_double_heading_pane_vc_g1_ParamLimits

0x480b,	// (0x000362fa) list_double_heading_pane_vc_g1

0x4817,	// (0x00036306) list_double_heading_pane_vc_g2_ParamLimits

0x4817,	// (0x00036306) list_double_heading_pane_vc_g2

0x0001,

0xfa4b,	// (0x0004153a) list_double_heading_pane_vc_g_ParamLimits

0xfa4b,	// (0x0004153a) list_double_heading_pane_vc_g

0x4b33,	// (0x00036622) list_double_heading_pane_vc_t1_ParamLimits

0x4b33,	// (0x00036622) list_double_heading_pane_vc_t1

0x4b47,	// (0x00036636) list_double_heading_pane_vc_t2_ParamLimits

0x4b47,	// (0x00036636) list_double_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0004153f) list_double_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0004153f) list_double_heading_pane_vc_t

0x4b5f,	// (0x0003664e) list_double_graphic_pane_vc_g1_ParamLimits

0x4b5f,	// (0x0003664e) list_double_graphic_pane_vc_g1

0x4b72,	// (0x00036661) list_double_graphic_pane_vc_g2_ParamLimits

0x4b72,	// (0x00036661) list_double_graphic_pane_vc_g2

0x4596,	// (0x00036085) list_double_graphic_pane_vc_g3_ParamLimits

0x4596,	// (0x00036085) list_double_graphic_pane_vc_g3

0x0003,

0xfa55,	// (0x00041544) list_double_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x00041544) list_double_graphic_pane_vc_g

0x4b8f,	// (0x0003667e) list_double_graphic_pane_vc_t1_ParamLimits

0x4b8f,	// (0x0003667e) list_double_graphic_pane_vc_t1

0x4bae,	// (0x0003669d) list_double_graphic_pane_vc_t2_ParamLimits

0x4bae,	// (0x0003669d) list_double_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0004154d) list_double_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0004154d) list_double_graphic_pane_vc_t

0x5d2a,	// (0x00037819) aid_size_cell_fastswap

0x5d32,	// (0x00037821) aid_size_cell_touch_ParamLimits

0x5d32,	// (0x00037821) aid_size_cell_touch

0x5f97,	// (0x00037a86) popup_fast_swap_wide_window_ParamLimits

0x5f97,	// (0x00037a86) popup_fast_swap_wide_window

0x609d,	// (0x00037b8c) touch_pane_ParamLimits

0x609d,	// (0x00037b8c) touch_pane

0x23f3,	// (0x00033ee2) button_value_adjust_pane_cp2

0x4752,	// (0x00036241) button_value_adjust_pane_cp4

0x475a,	// (0x00036249) form_field_data_pane_cp2

0x6983,	// (0x00038472) form_field_data_wide_pane_cp2

0x270d,	// (0x000341fc) bg_scroll_pane_ParamLimits

0x6e9d,	// (0x0003898c) scroll_handle_pane_ParamLimits

0x6eb1,	// (0x000389a0) scroll_sc2_down_pane_ParamLimits

0x6eb1,	// (0x000389a0) scroll_sc2_down_pane

0x273e,	// (0x0003422d) scroll_sc2_up_pane_ParamLimits

0x273e,	// (0x0003422d) scroll_sc2_up_pane

0xbbb2,	// (0x0003d6a1) grid_wheel_folder_pane_g1_ParamLimits

0xbbb2,	// (0x0003d6a1) grid_wheel_folder_pane_g1

0x726c,	// (0x00038d5b) clock_nsta_pane_cp2_ParamLimits

0x726c,	// (0x00038d5b) clock_nsta_pane_cp2

0x7374,	// (0x00038e63) listscroll_midp_pane_ParamLimits

0x7380,	// (0x00038e6f) midp_canvas_pane

0x2e27,	// (0x00034916) nsta_clock_indic_pane

0x2e4f,	// (0x0003493e) listscroll_form_pane_vc

0x2e57,	// (0x00034946) listscroll_set_pane_vc_ParamLimits

0x2e57,	// (0x00034946) listscroll_set_pane_vc

0x7db5,	// (0x000398a4) clock_nsta_pane

0x7e30,	// (0x0003991f) indicator_nsta_pane

0x9930,	// (0x0003b41f) bg_popup_sub_pane_cp2_ParamLimits

0x9944,	// (0x0003b433) find_pane_cp2_ParamLimits

0x9944,	// (0x0003b433) find_pane_cp2

0x995a,	// (0x0003b449) grid_toobar_pane_ParamLimits

0x9a52,	// (0x0003b541) list_form_gen_pane_vc_ParamLimits

0x9a52,	// (0x0003b541) list_form_gen_pane_vc

0x9a68,	// (0x0003b557) scroll_pane_cp8_vc_ParamLimits

0x9a68,	// (0x0003b557) scroll_pane_cp8_vc

0x9ae4,	// (0x0003b5d3) data_form_wide_pane_vc_ParamLimits

0x9ae4,	// (0x0003b5d3) data_form_wide_pane_vc

0x9af0,	// (0x0003b5df) form_field_data_wide_pane_vc_g1

0x9af8,	// (0x0003b5e7) form_field_data_wide_pane_vc_t1_ParamLimits

0x9af8,	// (0x0003b5e7) form_field_data_wide_pane_vc_t1

0x2407,	// (0x00033ef6) input_focus_pane_cp6_vc_ParamLimits

0x2407,	// (0x00033ef6) input_focus_pane_cp6_vc

0x9e25,	// (0x0003b914) list_midp_pane_ParamLimits

0x9e31,	// (0x0003b920) scroll_pane_cp16_ParamLimits

0x9e31,	// (0x0003b920) scroll_pane_cp16

0x9e9b,	// (0x0003b98a) button_value_adjust_pane_ParamLimits

0x9e9b,	// (0x0003b98a) button_value_adjust_pane

0xaddf,	// (0x0003c8ce) button_value_adjust_pane_cp6_ParamLimits

0xaddf,	// (0x0003c8ce) button_value_adjust_pane_cp6

0xaf05,	// (0x0003c9f4) settings_code_pane_cp_ParamLimits

0xaf05,	// (0x0003c9f4) settings_code_pane_cp

0x1feb,	// (0x00033ada) cell_touch_pane_g1

0x1feb,	// (0x00033ada) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x000411be) cell_touch_pane_g

0xb4e3,	// (0x0003cfd2) cell_touch_pane_cp_ParamLimits

0xb4e3,	// (0x0003cfd2) cell_touch_pane_cp

0xb4f3,	// (0x0003cfe2) cell_touch_pane_ParamLimits

0xb4f3,	// (0x0003cfe2) cell_touch_pane

0x1feb,	// (0x00033ada) scroll_sc2_down_pane_g1

0x1feb,	// (0x00033ada) scroll_sc2_up_pane_g1

0x1ff5,	// (0x00033ae4) bg_set_opt_pane_cp4_vc

0xb505,	// (0x0003cff4) list_set_graphic_pane_vc_g1_ParamLimits

0xb505,	// (0x0003cff4) list_set_graphic_pane_vc_g1

0xb511,	// (0x0003d000) list_set_graphic_pane_vc_g2_ParamLimits

0xb511,	// (0x0003d000) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x000414b5) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x000414b5) list_set_graphic_pane_vc_g

0xb51d,	// (0x0003d00c) text_primary_small_cp13_vc_ParamLimits

0xb51d,	// (0x0003d00c) text_primary_small_cp13_vc

0xb535,	// (0x0003d024) list_set_graphic_pane_vc_ParamLimits

0xb535,	// (0x0003d024) list_set_graphic_pane_vc

0x1ff5,	// (0x00033ae4) input_focus_pane_cp2_vc

0x1feb,	// (0x00033ada) setting_code_pane_vc_g1

0x2068,	// (0x00033b57) setting_code_pane_vc_t1

0xb548,	// (0x0003d037) set_text_pane_vc_t1_ParamLimits

0xb548,	// (0x0003d037) set_text_pane_vc_t1

0x1ff5,	// (0x00033ae4) input_focus_pane_cp1_vc

0xb565,	// (0x0003d054) list_set_text_pane_vc

0x1feb,	// (0x00033ada) setting_text_pane_vc_g1

0x1ff5,	// (0x00033ae4) bg_set_opt_pane_cp2_vc

0x205f,	// (0x00033b4e) setting_slider_graphic_pane_vc_g1

0xb56f,	// (0x0003d05e) setting_slider_graphic_pane_vc_t1

0xb57f,	// (0x0003d06e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x000414ba) setting_slider_graphic_pane_vc_t

0xb58f,	// (0x0003d07e) slider_set_pane_cp_vc

0xb597,	// (0x0003d086) slider_set_pane_vc_g1

0xb5a0,	// (0x0003d08f) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x000414bf) slider_set_pane_vc_g

0x245f,	// (0x00033f4e) set_opt_bg_pane_g1_copy1

0x2467,	// (0x00033f56) set_opt_bg_pane_g2_copy1

0xb5cc,	// (0x0003d0bb) set_opt_bg_pane_g3_copy1

0x2477,	// (0x00033f66) set_opt_bg_pane_g4_copy1

0x247f,	// (0x00033f6e) set_opt_bg_pane_g5_copy1

0x2487,	// (0x00033f76) set_opt_bg_pane_g6_copy1

0xb5d4,	// (0x0003d0c3) set_opt_bg_pane_g7_copy1

0xb5de,	// (0x0003d0cd) set_opt_bg_pane_g8_copy1

0xb5e6,	// (0x0003d0d5) set_opt_bg_pane_g9_copy1

0x1ff5,	// (0x00033ae4) bg_set_opt_pane_cp_vc

0xb5ee,	// (0x0003d0dd) setting_slider_pane_vc_t1

0xb5fd,	// (0x0003d0ec) setting_slider_pane_vc_t2

0xb60d,	// (0x0003d0fc) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x000414ce) setting_slider_pane_vc_t

0xb61d,	// (0x0003d10c) slider_set_pane_vc

0x8174,	// (0x00039c63) volume_set_pane_vc_g1

0x854a,	// (0x0003a039) volume_set_pane_vc_g2

0x8553,	// (0x0003a042) volume_set_pane_vc_g3

0x855c,	// (0x0003a04b) volume_set_pane_vc_g4

0x8565,	// (0x0003a054) volume_set_pane_vc_g5

0x856e,	// (0x0003a05d) volume_set_pane_vc_g6

0x8577,	// (0x0003a066) volume_set_pane_vc_g7

0x8580,	// (0x0003a06f) volume_set_pane_vc_g8

0x8589,	// (0x0003a078) volume_set_pane_vc_g9

0x8592,	// (0x0003a081) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x000414d5) volume_set_pane_vc_g

0xb625,	// (0x0003d114) volume_set_pane_vc

0xb62f,	// (0x0003d11e) button_value_adjust_pane_cp1_vc

0xb639,	// (0x0003d128) list_highlight_pane_cp2_vc

0xb642,	// (0x0003d131) list_set_pane_vc_ParamLimits

0xb642,	// (0x0003d131) list_set_pane_vc

0xb6a0,	// (0x0003d18f) main_pane_set_vc_t1_ParamLimits

0xb6a0,	// (0x0003d18f) main_pane_set_vc_t1

0xb6b5,	// (0x0003d1a4) main_pane_set_vc_t2_ParamLimits

0xb6b5,	// (0x0003d1a4) main_pane_set_vc_t2

0xb6c7,	// (0x0003d1b6) main_pane_set_vc_t3_ParamLimits

0xb6c7,	// (0x0003d1b6) main_pane_set_vc_t3

0xb6d9,	// (0x0003d1c8) main_pane_set_vc_t4_ParamLimits

0xb6d9,	// (0x0003d1c8) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x000414ea) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x000414ea) main_pane_set_vc_t

0xb6eb,	// (0x0003d1da) setting_code_pane_vc_ParamLimits

0xb6eb,	// (0x0003d1da) setting_code_pane_vc

0xb6fa,	// (0x0003d1e9) setting_slider_graphic_pane_vc

0xb6fa,	// (0x0003d1e9) setting_slider_pane_vc

0xb6fa,	// (0x0003d1e9) setting_text_pane_vc

0xb6fa,	// (0x0003d1e9) setting_volume_pane_vc

0xb702,	// (0x0003d1f1) scroll_pane_cp121_vc

0x23e1,	// (0x00033ed0) set_content_pane_vc

0xb70a,	// (0x0003d1f9) button_value_adjust_pane_g1

0xb713,	// (0x0003d202) button_value_adjust_pane_g2

0x0001,

0xfa63,	// (0x00041552) button_value_adjust_pane_g

0xb71c,	// (0x0003d20b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb71c,	// (0x0003d20b) form_field_slider_wide_pane_vc_t1

0xb730,	// (0x0003d21f) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb730,	// (0x0003d21f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa68,	// (0x00041557) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x00041557) form_field_slider_wide_pane_vc_t

0x2043,	// (0x00033b32) input_focus_pane_cp10_vc_ParamLimits

0x2043,	// (0x00033b32) input_focus_pane_cp10_vc

0xb75e,	// (0x0003d24d) slider_cont_pane_cp1_vc_ParamLimits

0xb75e,	// (0x0003d24d) slider_cont_pane_cp1_vc

0xb770,	// (0x0003d25f) slider_form_pane_g1_cp2

0xb5a0,	// (0x0003d08f) slider_form_pane_g2_cp2

0xb79d,	// (0x0003d28c) form_field_slider_pane_vc_t3

0xb7ab,	// (0x0003d29a) form_field_slider_pane_vc_t4

0xb7b9,	// (0x0003d2a8) slider_form_pane_vc_ParamLimits

0xb7b9,	// (0x0003d2a8) slider_form_pane_vc

0xb7c6,	// (0x0003d2b5) form_field_slider_pane_vc_t1_ParamLimits

0xb7c6,	// (0x0003d2b5) form_field_slider_pane_vc_t1

0xb730,	// (0x0003d21f) form_field_slider_pane_vc_t2_ParamLimits

0xb730,	// (0x0003d21f) form_field_slider_pane_vc_t2

0x0001,

0xfa7a,	// (0x00041569) form_field_slider_pane_vc_t_ParamLimits

0xfa7a,	// (0x00041569) form_field_slider_pane_vc_t

0x2043,	// (0x00033b32) input_focus_pane_cp9_vc_ParamLimits

0x2043,	// (0x00033b32) input_focus_pane_cp9_vc

0xb7e2,	// (0x0003d2d1) slider_cont_pane_vc_ParamLimits

0xb7e2,	// (0x0003d2d1) slider_cont_pane_vc

0xb7f6,	// (0x0003d2e5) list_form_graphic_pane_cp_vc_ParamLimits

0xb7f6,	// (0x0003d2e5) list_form_graphic_pane_cp_vc

0x9af0,	// (0x0003b5df) form_field_popup_wide_pane_vc_g1

0xb80b,	// (0x0003d2fa) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb80b,	// (0x0003d2fa) form_field_popup_wide_pane_vc_t1

0x2407,	// (0x00033ef6) input_focus_pane_cp8_vc_ParamLimits

0x2407,	// (0x00033ef6) input_focus_pane_cp8_vc

0xb850,	// (0x0003d33f) list_form_wide_pane_vc_ParamLimits

0xb850,	// (0x0003d33f) list_form_wide_pane_vc

0xb85c,	// (0x0003d34b) list_form_graphic_pane_vc_g1

0xb864,	// (0x0003d353) list_form_graphic_pane_vc_t1_ParamLimits

0xb864,	// (0x0003d353) list_form_graphic_pane_vc_t1

0x2051,	// (0x00033b40) list_highlight_pane_cp5_vc_ParamLimits

0x2051,	// (0x00033b40) list_highlight_pane_cp5_vc

0xb880,	// (0x0003d36f) list_form_graphic_pane_vc_ParamLimits

0xb880,	// (0x0003d36f) list_form_graphic_pane_vc

0x9af0,	// (0x0003b5df) form_field_popup_pane_vc_g1

0xb896,	// (0x0003d385) form_field_popup_pane_vc_t1_ParamLimits

0xb896,	// (0x0003d385) form_field_popup_pane_vc_t1

0x2407,	// (0x00033ef6) input_focus_pane_cp7_vc_ParamLimits

0x2407,	// (0x00033ef6) input_focus_pane_cp7_vc

0xb8ad,	// (0x0003d39c) list_form_pane_vc_ParamLimits

0xb8ad,	// (0x0003d39c) list_form_pane_vc

0xb8b9,	// (0x0003d3a8) data_form_pane_vc_t1_ParamLimits

0xb8b9,	// (0x0003d3a8) data_form_pane_vc_t1

0x245f,	// (0x00033f4e) input_focus_pane_vc_g1

0x2467,	// (0x00033f56) input_focus_pane_vc_g2

0x246f,	// (0x00033f5e) input_focus_pane_vc_g3

0x2477,	// (0x00033f66) input_focus_pane_vc_g4

0x247f,	// (0x00033f6e) input_focus_pane_vc_g5

0x2487,	// (0x00033f76) input_focus_pane_vc_g6

0x248f,	// (0x00033f7e) input_focus_pane_vc_g7

0x2497,	// (0x00033f86) input_focus_pane_vc_g8

0x249f,	// (0x00033f8e) input_focus_pane_vc_g9

0x1feb,	// (0x00033ada) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x00041147) input_focus_pane_vc_g

0x9ae4,	// (0x0003b5d3) data_form_pane_vc_ParamLimits

0x9ae4,	// (0x0003b5d3) data_form_pane_vc

0x9af0,	// (0x0003b5df) form_field_data_pane_vc_g1

0xb8d4,	// (0x0003d3c3) form_field_data_pane_vc_t1_ParamLimits

0xb8d4,	// (0x0003d3c3) form_field_data_pane_vc_t1

0x2407,	// (0x00033ef6) input_focus_pane_vc_ParamLimits

0x2407,	// (0x00033ef6) input_focus_pane_vc

0xb8ee,	// (0x0003d3dd) button_value_adjust_pane_cp3_vc

0xb8f6,	// (0x0003d3e5) button_value_adjust_pane_cp5_vc

0xb8fe,	// (0x0003d3ed) form_field_data_pane_vc_ParamLimits

0xb8fe,	// (0x0003d3ed) form_field_data_pane_vc

0xb915,	// (0x0003d404) form_field_data_pane_vc_cp2

0xb91d,	// (0x0003d40c) form_field_data_wide_pane_vc_ParamLimits

0xb91d,	// (0x0003d40c) form_field_data_wide_pane_vc

0xb933,	// (0x0003d422) form_field_data_wide_pane_vc_cp2

0xb93b,	// (0x0003d42a) form_field_popup_pane_vc_ParamLimits

0xb93b,	// (0x0003d42a) form_field_popup_pane_vc

0xb952,	// (0x0003d441) form_field_popup_wide_pane_vc_ParamLimits

0xb952,	// (0x0003d441) form_field_popup_wide_pane_vc

0xb968,	// (0x0003d457) form_field_slider_pane_vc_ParamLimits

0xb968,	// (0x0003d457) form_field_slider_pane_vc

0xb97b,	// (0x0003d46a) form_field_slider_wide_pane_vc_ParamLimits

0xb97b,	// (0x0003d46a) form_field_slider_wide_pane_vc

0xb98e,	// (0x0003d47d) grid_touch_1_pane_ParamLimits

0xb98e,	// (0x0003d47d) grid_touch_1_pane

0xb99a,	// (0x0003d489) grid_touch_2_pane_ParamLimits

0xb99a,	// (0x0003d489) grid_touch_2_pane

0x2e19,	// (0x00034908) touch_pane_g1_ParamLimits

0x2e19,	// (0x00034908) touch_pane_g1

0xb9b2,	// (0x0003d4a1) cell_app_pane_cp_wide_ParamLimits

0xb9b2,	// (0x0003d4a1) cell_app_pane_cp_wide

0xb9c3,	// (0x0003d4b2) grid_popup_fast_wide_pane_ParamLimits

0xb9c3,	// (0x0003d4b2) grid_popup_fast_wide_pane

0xb9d7,	// (0x0003d4c6) scroll_pane_cp19_ParamLimits

0xb9d7,	// (0x0003d4c6) scroll_pane_cp19

0x1ff5,	// (0x00033ae4) bg_popup_window_pane_cp20

0xb9eb,	// (0x0003d4da) listscroll_popup_fast_wide_pane

0xb9f3,	// (0x0003d4e2) grid_indicator_nsta_pane

0xba05,	// (0x0003d4f4) clock_nsta_pane_g1

0xba0e,	// (0x0003d4fd) clock_nsta_pane_t1

0xba2a,	// (0x0003d519) cell_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x0003d519) cell_indicator_nsta_pane

0xba5f,	// (0x0003d54e) cell_indicator_nsta_pane_g1

0xba6d,	// (0x0003d55c) cell_indicator_nsta_pane_g2

0x0001,

0xfa8b,	// (0x0004157a) cell_indicator_nsta_pane_g

0xba7f,	// (0x0003d56e) clock_nsta_pane_cp

0xba88,	// (0x0003d577) indicator_nsta_pane_cp

0xba92,	// (0x0003d581) nsta_clock_indic_pane_g1

0x208d,	// (0x00033b7c) grid_indicator_pane

0x6f4f,	// (0x00038a3e) scroll_pane_cp29

0x71bb,	// (0x00038caa) indicator_nsta_pane_cp2_ParamLimits

0x71bb,	// (0x00038caa) indicator_nsta_pane_cp2

0x2051,	// (0x00033b40) main_apps_wheel_pane

0x9d08,	// (0x0003b7f7) form_midp_field_text_pane_ParamLimits

0x9e51,	// (0x0003b940) scroll_bar_cp050_ParamLimits

0xbaeb,	// (0x0003d5da) cell_indicator_pane_ParamLimits

0xbaeb,	// (0x0003d5da) cell_indicator_pane

0xbb04,	// (0x0003d5f3) cell_indicator_pane_g1

0xbb0e,	// (0x0003d5fd) grid_wheel_folder_pane_ParamLimits

0xbb0e,	// (0x0003d5fd) grid_wheel_folder_pane

0xbb24,	// (0x0003d613) list_wheel_apps_pane_ParamLimits

0xbb24,	// (0x0003d613) list_wheel_apps_pane

0xbb35,	// (0x0003d624) main_apps_wheel_pane_g1_ParamLimits

0xbb35,	// (0x0003d624) main_apps_wheel_pane_g1

0xbb49,	// (0x0003d638) main_apps_wheel_pane_g2_ParamLimits

0xbb49,	// (0x0003d638) main_apps_wheel_pane_g2

0x0001,

0xfaa7,	// (0x00041596) main_apps_wheel_pane_g_ParamLimits

0xfaa7,	// (0x00041596) main_apps_wheel_pane_g

0xbb61,	// (0x0003d650) main_apps_wheel_pane_t1_ParamLimits

0xbb61,	// (0x0003d650) main_apps_wheel_pane_t1

0xbb84,	// (0x0003d673) list_wheel_apps_pane_g1

0xbb8c,	// (0x0003d67b) list_wheel_apps_pane_g2

0xbb94,	// (0x0003d683) list_wheel_apps_pane_g3

0xbb9e,	// (0x0003d68d) list_wheel_apps_pane_g4

0xbba8,	// (0x0003d697) list_wheel_apps_pane_g5

0x0004,

0xfaac,	// (0x0004159b) list_wheel_apps_pane_g

0x2b68,	// (0x00034657) navi_icon_text_pane

0x7ce4,	// (0x000397d3) aid_fill_nsta

0xbbcb,	// (0x0003d6ba) navi_icon_text_pane_g1

0xbbd7,	// (0x0003d6c6) navi_icon_text_pane_t1

0x2a4c,	// (0x0003453b) list_set_graphic_pane_t1_ParamLimits

0x2a4c,	// (0x0003453b) list_set_graphic_pane_t1

0xa59c,	// (0x0003c08b) popup_midp_note_alarm_window_t6_ParamLimits

0xa59c,	// (0x0003c08b) popup_midp_note_alarm_window_t6

0xa5ae,	// (0x0003c09d) popup_midp_note_alarm_window_t7_ParamLimits

0xa5ae,	// (0x0003c09d) popup_midp_note_alarm_window_t7

0xa5c0,	// (0x0003c0af) popup_midp_note_alarm_window_t8_ParamLimits

0xa5c0,	// (0x0003c0af) popup_midp_note_alarm_window_t8

0xa5d2,	// (0x0003c0c1) popup_midp_note_alarm_window_t9_ParamLimits

0xa5d2,	// (0x0003c0c1) popup_midp_note_alarm_window_t9

0xa5e4,	// (0x0003c0d3) popup_midp_note_alarm_window_t10_ParamLimits

0xa5e4,	// (0x0003c0d3) popup_midp_note_alarm_window_t10

0xa5f6,	// (0x0003c0e5) popup_midp_note_alarm_window_t11_ParamLimits

0xa5f6,	// (0x0003c0e5) popup_midp_note_alarm_window_t11

0xa608,	// (0x0003c0f7) scroll_pane_cp17_ParamLimits

0xa608,	// (0x0003c0f7) scroll_pane_cp17

0x8174,	// (0x00039c63) volume_small_pane_cp_g1

0x859b,	// (0x0003a08a) volume_small_pane_cp_g2

0x85a4,	// (0x0003a093) volume_small_pane_cp_g3

0x85ad,	// (0x0003a09c) volume_small_pane_cp_g4

0x85b6,	// (0x0003a0a5) volume_small_pane_cp_g5

0x8565,	// (0x0003a054) volume_small_pane_cp_g6

0x85bf,	// (0x0003a0ae) volume_small_pane_cp_g7

0x85c8,	// (0x0003a0b7) volume_small_pane_cp_g8

0x85d1,	// (0x0003a0c0) volume_small_pane_cp_g9

0x85da,	// (0x0003a0c9) volume_small_pane_cp_g10

0x2cda,	// (0x000347c9) midp_ticker_pane_g1_ParamLimits

0x2ce6,	// (0x000347d5) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x00041213) midp_ticker_pane_g_ParamLimits

0x2cf2,	// (0x000347e1) midp_ticker_pane_t1_ParamLimits

0x7cfa,	// (0x000397e9) aid_fill_nsta_2

0x9e3d,	// (0x0003b92c) list_form2_midp_pane

0xaf50,	// (0x0003ca3f) midp_editing_number_pane_ParamLimits

0xaf5f,	// (0x0003ca4e) midp_ticker_pane_ParamLimits

0xbbe9,	// (0x0003d6d8) form2_midp_field_pane

0xbc0d,	// (0x0003d6fc) scroll_pane_cp51

0xbc2d,	// (0x0003d71c) form2_midp_button_pane_ParamLimits

0xbc2d,	// (0x0003d71c) form2_midp_button_pane

0xbc3f,	// (0x0003d72e) form2_midp_content_pane_ParamLimits

0xbc3f,	// (0x0003d72e) form2_midp_content_pane

0xbc59,	// (0x0003d748) form2_midp_field_choice_group_pane

0xbc61,	// (0x0003d750) form2_midp_field_pane_g1

0xbc69,	// (0x0003d758) form2_midp_field_pane_g2

0xbc71,	// (0x0003d760) form2_midp_field_pane_g3

0xbc79,	// (0x0003d768) form2_midp_field_pane_g4

0x0003,

0xfad1,	// (0x000415c0) form2_midp_field_pane_g

0xbc81,	// (0x0003d770) form2_midp_gauge_slider_pane

0xbc89,	// (0x0003d778) form2_midp_gauge_wait_pane

0xbc91,	// (0x0003d780) form2_midp_image_pane_ParamLimits

0xbc91,	// (0x0003d780) form2_midp_image_pane

0xbcac,	// (0x0003d79b) form2_midp_label_pane_ParamLimits

0xbcac,	// (0x0003d79b) form2_midp_label_pane

0xbcc5,	// (0x0003d7b4) form2_midp_label_pane_cp_ParamLimits

0xbcc5,	// (0x0003d7b4) form2_midp_label_pane_cp

0xbce6,	// (0x0003d7d5) form2_midp_string_pane_ParamLimits

0xbce6,	// (0x0003d7d5) form2_midp_string_pane

0x4bd8,	// (0x000366c7) form2_midp_text_pane_ParamLimits

0x4bd8,	// (0x000366c7) form2_midp_text_pane

0xbcf8,	// (0x0003d7e7) form2_midp_time_pane

0xbd08,	// (0x0003d7f7) input_focus_pane_cp51_ParamLimits

0xbd08,	// (0x0003d7f7) input_focus_pane_cp51

0xbd20,	// (0x0003d80f) form2_midp_label_pane_t1_ParamLimits

0xbd20,	// (0x0003d80f) form2_midp_label_pane_t1

0x4bf1,	// (0x000366e0) form2_mdip_text_pane_t1_ParamLimits

0x4bf1,	// (0x000366e0) form2_mdip_text_pane_t1

0x4c0f,	// (0x000366fe) form2_midp_time_pane_t1

0xbd69,	// (0x0003d858) form2_midp_gauge_slider_pane_t1

0xbd7b,	// (0x0003d86a) form2_midp_gauge_slider_pane_t2

0xbd8d,	// (0x0003d87c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfada,	// (0x000415c9) form2_midp_gauge_slider_pane_t

0xbd9f,	// (0x0003d88e) form2_midp_slider_pane

0xbdab,	// (0x0003d89a) form2_midp_gauge_wait_pane_t1

0xbdb9,	// (0x0003d8a8) form2_midp_wait_pane_ParamLimits

0xbdb9,	// (0x0003d8a8) form2_midp_wait_pane

0xbde4,	// (0x0003d8d3) list_single_2graphic_pane_cp4_ParamLimits

0xbde4,	// (0x0003d8d3) list_single_2graphic_pane_cp4

0x9b59,	// (0x0003b648) list_single_midp_graphic_pane_cp_ParamLimits

0x9b59,	// (0x0003b648) list_single_midp_graphic_pane_cp

0x1ff5,	// (0x00033ae4) list_highlight_pane_cp20

0xbe0c,	// (0x0003d8fb) list_single_2graphic_pane_g1_cp4

0xb3e9,	// (0x0003ced8) list_single_2graphic_pane_g2_cp4

0xbe14,	// (0x0003d903) list_single_2graphic_pane_t1_cp4

0x2051,	// (0x00033b40) list_highlight_pane_cp21

0xbe23,	// (0x0003d912) list_single_midp_graphic_pane_g4_cp

0xbe32,	// (0x0003d921) list_single_midp_graphic_pane_t1_cp

0xbe47,	// (0x0003d936) form2_mdip_string_pane_t1_ParamLimits

0xbe47,	// (0x0003d936) form2_mdip_string_pane_t1

0x1ff5,	// (0x00033ae4) bg_wml_button_pane_cp2

0x1feb,	// (0x00033ada) form2_midp_image_pane_g1

0x4673,	// (0x00036162) list_double_large_graphic_pane_g5_ParamLimits

0x4673,	// (0x00036162) list_double_large_graphic_pane_g5

0x7374,	// (0x00038e63) midp_form_pane_ParamLimits

0x2051,	// (0x00033b40) main_apps_wheel_pane_ParamLimits

0x7acc,	// (0x000395bb) popup_preview_window_ParamLimits

0x7acc,	// (0x000395bb) popup_preview_window

0x7c87,	// (0x00039776) popup_touch_info_window_ParamLimits

0x7c87,	// (0x00039776) popup_touch_info_window

0x7ca5,	// (0x00039794) popup_touch_menu_window_ParamLimits

0x7ca5,	// (0x00039794) popup_touch_menu_window

0x1fe1,	// (0x00033ad0) bg_popup_sub_pane_cp6

0xbf4e,	// (0x0003da3d) list_touch_menu_pane

0xbf56,	// (0x0003da45) list_single_touch_menu_pane_ParamLimits

0xbf56,	// (0x0003da45) list_single_touch_menu_pane

0xbf6c,	// (0x0003da5b) list_single_touch_menu_pane_t1

0x2051,	// (0x00033b40) bg_popup_sub_pane_cp7_ParamLimits

0x2051,	// (0x00033b40) bg_popup_sub_pane_cp7

0xbf7a,	// (0x0003da69) heading_sub_pane

0xbf82,	// (0x0003da71) list_touch_info_pane_ParamLimits

0xbf82,	// (0x0003da71) list_touch_info_pane

0xbf91,	// (0x0003da80) list_single_touch_info_pane_ParamLimits

0xbf91,	// (0x0003da80) list_single_touch_info_pane

0xbfa3,	// (0x0003da92) list_single_touch_info_pane_t1

0xbfb1,	// (0x0003daa0) list_single_touch_info_pane_t2

0x0001,

0xfae8,	// (0x000415d7) list_single_touch_info_pane_t

0x2cc3,	// (0x000347b2) bg_popup_heading_pane_cp

0xbfbf,	// (0x0003daae) heading_sub_pane_t1

0x9a7e,	// (0x0003b56d) bg_popup_preview_window_pane_cp_ParamLimits

0x9a7e,	// (0x0003b56d) bg_popup_preview_window_pane_cp

0xbf7a,	// (0x0003da69) heading_preview_pane

0xbf82,	// (0x0003da71) list_preview_pane_ParamLimits

0xbf82,	// (0x0003da71) list_preview_pane

0xbfcd,	// (0x0003dabc) popup_preview_window_g1

0xbf91,	// (0x0003da80) list_single_preview_pane_ParamLimits

0xbf91,	// (0x0003da80) list_single_preview_pane

0xbfd5,	// (0x0003dac4) list_single_preview_pane_g1

0xbfdd,	// (0x0003dacc) list_single_preview_pane_t1

0xbfa3,	// (0x0003da92) list_single_preview_pane_t2

0x0001,

0xfaed,	// (0x000415dc) list_single_preview_pane_t

0xbfeb,	// (0x0003dada) bg_popup_heading_pane_cp2_ParamLimits

0xbfeb,	// (0x0003dada) bg_popup_heading_pane_cp2

0xc001,	// (0x0003daf0) heading_preview_pane_g1

0xc009,	// (0x0003daf8) heading_preview_pane_t1_ParamLimits

0xc009,	// (0x0003daf8) heading_preview_pane_t1

0x20a4,	// (0x00033b93) soft_indicator_pane_t1_ParamLimits

0x2383,	// (0x00033e72) scroll_pane_ParamLimits

0x2735,	// (0x00034224) scroll_sc2_left_pane

0x272c,	// (0x0003421b) scroll_sc2_right_pane

0x2754,	// (0x00034243) scroll_bg_pane_g1_ParamLimits

0x2769,	// (0x00034258) scroll_bg_pane_g2_ParamLimits

0x2781,	// (0x00034270) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x0004119e) scroll_bg_pane_g_ParamLimits

0x2754,	// (0x00034243) scroll_handle_pane_g1_ParamLimits

0x2796,	// (0x00034285) scroll_handle_pane_g2_ParamLimits

0x2781,	// (0x00034270) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x000411a5) scroll_handle_pane_g_ParamLimits

0x774f,	// (0x0003923e) popup_choice_list_window_ParamLimits

0x774f,	// (0x0003923e) popup_choice_list_window

0x993c,	// (0x0003b42b) choice_list_pane

0x99be,	// (0x0003b4ad) cell_toolbar_pane_t1

0x99e6,	// (0x0003b4d5) toolbar_button_pane_ParamLimits

0xaac2,	// (0x0003c5b1) ai_gene_pane_1_t2_ParamLimits

0xaac2,	// (0x0003c5b1) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x000413c8) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x000413c8) ai_gene_pane_1_t

0xc026,	// (0x0003db15) scroll_sc2_left_pane_g1

0xc026,	// (0x0003db15) scroll_sc2_right_pane_g1

0x2549,	// (0x00034038) bg_popup_sub_pane_cp10

0xc030,	// (0x0003db1f) list_choice_list_pane

0xc049,	// (0x0003db38) list_single_choice_list_pane_ParamLimits

0xc049,	// (0x0003db38) list_single_choice_list_pane

0xc05c,	// (0x0003db4b) list_single_choice_list_pane_g1

0x6be8,	// (0x000386d7) list_single_choice_list_pane_t1_ParamLimits

0x6be8,	// (0x000386d7) list_single_choice_list_pane_t1

0xc064,	// (0x0003db53) choice_list_pane_g1

0xc06c,	// (0x0003db5b) choice_list_pane_t1

0x1fe1,	// (0x00033ad0) input_focus_pane_cp11

0x26a1,	// (0x00034190) title_pane_stacon_g2_ParamLimits

0x26a1,	// (0x00034190) title_pane_stacon_g2

0x0002,

0xf695,	// (0x00041184) title_pane_stacon_g_ParamLimits

0xf695,	// (0x00041184) title_pane_stacon_g

0x2cc3,	// (0x000347b2) cursor_press_pane

0x77f7,	// (0x000392e6) popup_fep_hwr_window_ParamLimits

0x77f7,	// (0x000392e6) popup_fep_hwr_window

0x786f,	// (0x0003935e) popup_fep_vkb_window_ParamLimits

0x786f,	// (0x0003935e) popup_fep_vkb_window

0xc07a,	// (0x0003db69) cursor_press_pane_g1

0x0002,

0xfb16,	// (0x00041605) fep_vkb_side_pane_g_ParamLimits

0x861c,	// (0x0003a10b) fep_hwr_candidate_pane_ParamLimits

0x861c,	// (0x0003a10b) fep_hwr_candidate_pane

0x8646,	// (0x0003a135) fep_hwr_side_pane_ParamLimits

0x8646,	// (0x0003a135) fep_hwr_side_pane

0x8666,	// (0x0003a155) fep_hwr_top_pane_ParamLimits

0x8666,	// (0x0003a155) fep_hwr_top_pane

0x867e,	// (0x0003a16d) fep_hwr_write_pane_ParamLimits

0x867e,	// (0x0003a16d) fep_hwr_write_pane

0xfb16,	// (0x00041605) fep_vkb_side_pane_g

0xc082,	// (0x0003db71) fep_hwr_top_pane_g1

0xc094,	// (0x0003db83) fep_hwr_top_pane_g2

0x86b8,	// (0x0003a1a7) fep_hwr_top_pane_g3

0x0002,

0xfaf2,	// (0x000415e1) fep_hwr_top_pane_g

0x86cd,	// (0x0003a1bc) fep_hwr_top_text_pane

0x2859,	// (0x00034348) fep_hwr_top_text_pane_g1

0xc0ca,	// (0x0003dbb9) fep_hwr_top_text_pane_t1

0x87c3,	// (0x0003a2b2) fep_hwr_candidate_pane_g1

0xc30f,	// (0x0003ddfe) fep_vkb_keypad_pane_g3_ParamLimits

0xc30f,	// (0x0003ddfe) fep_vkb_keypad_pane_g3

0xc337,	// (0x0003de26) fep_vkb_keypad_pane_g4_ParamLimits

0xc337,	// (0x0003de26) fep_vkb_keypad_pane_g4

0xc3a6,	// (0x0003de95) fep_vkb_bottom_pane_g2_ParamLimits

0xc3a6,	// (0x0003de95) fep_vkb_bottom_pane_g2

0x0001,

0xfb1d,	// (0x0004160c) fep_vkb_bottom_pane_g_ParamLimits

0xfb1d,	// (0x0004160c) fep_vkb_bottom_pane_g

0xc026,	// (0x0003db15) cell_vkb_side_pane_g2

0x0001,

0xfb27,	// (0x00041616) cell_vkb_side_pane_g

0xc431,	// (0x0003df20) cell_vkb_side_pane_t1

0xc43f,	// (0x0003df2e) cell_vkb_side_pane_t1_copy1

0xc026,	// (0x0003db15) bg_fep_vkb_candidate_pane_g2

0xc56b,	// (0x0003e05a) cell_vkb_candidate_pane_ParamLimits

0xc0d8,	// (0x0003dbc7) aid_size_cell_vkb_ParamLimits

0xc0d8,	// (0x0003dbc7) aid_size_cell_vkb

0xc56b,	// (0x0003e05a) cell_vkb_candidate_pane

0x87ea,	// (0x0003a2d9) bg_popup_fep_shadow_pane_g1

0xc166,	// (0x0003dc55) fep_vkb_bottom_pane_ParamLimits

0xc166,	// (0x0003dc55) fep_vkb_bottom_pane

0xc19c,	// (0x0003dc8b) fep_vkb_candidate_pane_ParamLimits

0xc19c,	// (0x0003dc8b) fep_vkb_candidate_pane

0xc1b8,	// (0x0003dca7) fep_vkb_keypad_pane_ParamLimits

0xc1b8,	// (0x0003dca7) fep_vkb_keypad_pane

0xc1f7,	// (0x0003dce6) fep_vkb_side_pane_ParamLimits

0xc1f7,	// (0x0003dce6) fep_vkb_side_pane

0xc233,	// (0x0003dd22) fep_vkb_top_pane_ParamLimits

0xc233,	// (0x0003dd22) fep_vkb_top_pane

0xc268,	// (0x0003dd57) fep_vkb_top_pane_g1_ParamLimits

0xc268,	// (0x0003dd57) fep_vkb_top_pane_g1

0xc277,	// (0x0003dd66) fep_vkb_top_pane_g2_ParamLimits

0xc277,	// (0x0003dd66) fep_vkb_top_pane_g2

0xc286,	// (0x0003dd75) fep_vkb_top_pane_g3_ParamLimits

0xc286,	// (0x0003dd75) fep_vkb_top_pane_g3

0x0003,

0xfb0d,	// (0x000415fc) fep_vkb_top_pane_g_ParamLimits

0xfb0d,	// (0x000415fc) fep_vkb_top_pane_g

0xc2a4,	// (0x0003dd93) fep_vkb_top_text_pane_ParamLimits

0xc2a4,	// (0x0003dd93) fep_vkb_top_text_pane

0xc2b5,	// (0x0003dda4) fep_vkb_side_pane_g1_ParamLimits

0xc2b5,	// (0x0003dda4) fep_vkb_side_pane_g1

0xc2fe,	// (0x0003dded) grid_vkb_side_pane_ParamLimits

0xc2fe,	// (0x0003dded) grid_vkb_side_pane

0x87f2,	// (0x0003a2e1) bg_popup_fep_shadow_pane_g2

0x87fb,	// (0x0003a2ea) bg_popup_fep_shadow_pane_g3

0x8803,	// (0x0003a2f2) bg_popup_fep_shadow_pane_g4

0x880c,	// (0x0003a2fb) bg_popup_fep_shadow_pane_g5

0x8816,	// (0x0003a305) bg_popup_fep_shadow_pane_g6

0x881e,	// (0x0003a30d) bg_popup_fep_shadow_pane_g7

0x2477,	// (0x00033f66) bg_popup_fep_shadow_pane_g8

0xc355,	// (0x0003de44) grid_vkb_keypad_number_pane_ParamLimits

0xc355,	// (0x0003de44) grid_vkb_keypad_number_pane

0xc365,	// (0x0003de54) grid_vkb_keypad_pane_ParamLimits

0xc365,	// (0x0003de54) grid_vkb_keypad_pane

0xc38b,	// (0x0003de7a) fep_vkb_bottom_pane_g1_ParamLimits

0xc38b,	// (0x0003de7a) fep_vkb_bottom_pane_g1

0xc3b4,	// (0x0003dea3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3b4,	// (0x0003dea3) grid_vkb_keypad_bottom_left_pane

0xc3c9,	// (0x0003deb8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3c9,	// (0x0003deb8) grid_vkb_keypad_bottom_right_pane

0xc3de,	// (0x0003decd) fep_vkb_top_text_pane_g1

0xc3f9,	// (0x0003dee8) fep_vkb_top_text_pane_t1

0xc40e,	// (0x0003defd) cell_vkb_side_pane_ParamLimits

0xc40e,	// (0x0003defd) cell_vkb_side_pane

0xc026,	// (0x0003db15) cell_vkb_side_pane_g1

0xc44d,	// (0x0003df3c) cell_vkb_keypad_pane_ParamLimits

0xc44d,	// (0x0003df3c) cell_vkb_keypad_pane

0xc4c2,	// (0x0003dfb1) cell_vkb_keypad_pane_g1

0x0008,

0xfb3a,	// (0x00041629) bg_popup_fep_shadow_pane_g

0x8830,	// (0x0003a31f) cell_hwr_side_pane_g1

0x8830,	// (0x0003a31f) cell_hwr_side_pane_g2

0xc4cc,	// (0x0003dfbb) cell_vkb_keypad_pane_t1

0xc4da,	// (0x0003dfc9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4da,	// (0x0003dfc9) cell_vkb_keypad_bottom_left_pane

0xc4f7,	// (0x0003dfe6) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4f7,	// (0x0003dfe6) cell_vkb_keypad_bottom_right_pane

0xc026,	// (0x0003db15) cell_vkb_keypad_bottom_left_pane_g1

0xc026,	// (0x0003db15) cell_vkb_keypad_bottom_right_pane_g1

0xc530,	// (0x0003e01f) cell_vkb_keypad_number_pane_ParamLimits

0xc530,	// (0x0003e01f) cell_vkb_keypad_number_pane

0xc54f,	// (0x0003e03e) cell_vkb_keypad_number_pane_g1

0xc559,	// (0x0003e048) cell_vkb_keypad_number_pane_g2

0xc562,	// (0x0003e051) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2c,	// (0x0004161b) cell_vkb_keypad_number_pane_g

0xc4cc,	// (0x0003dfbb) cell_vkb_keypad_number_pane_t1

0xc586,	// (0x0003e075) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x0004163c) cell_hwr_side_pane_g

0xc59f,	// (0x0003e08e) cell_hwr_side_pane_t1

0x883a,	// (0x0003a329) cell_hwr_side_pane_t1_copy1

0x8848,	// (0x0003a337) cell_hwr_candidate_pane_g1

0x8877,	// (0x0003a366) cell_hwr_candidate_pane_t1

0xc026,	// (0x0003db15) cell_vkb_candidate_pane_g2

0xc604,	// (0x0003e0f3) cell_vkb_candidate_pane_t1

0x85e3,	// (0x0003a0d2) bg_popup_fep_shadow_pane_ParamLimits

0x85e3,	// (0x0003a0d2) bg_popup_fep_shadow_pane

0x8698,	// (0x0003a187) bg_fep_hwr_top_pane_g4

0xc0a6,	// (0x0003db95) bg_hwr_side_pane_g1_ParamLimits

0xc0a6,	// (0x0003db95) bg_hwr_side_pane_g1

0x8709,	// (0x0003a1f8) cell_hwr_side_pane_ParamLimits

0x8709,	// (0x0003a1f8) cell_hwr_side_pane

0x8744,	// (0x0003a233) fep_hwr_write_pane_g1_ParamLimits

0x8744,	// (0x0003a233) fep_hwr_write_pane_g1

0x8751,	// (0x0003a240) fep_hwr_write_pane_g2_ParamLimits

0x8751,	// (0x0003a240) fep_hwr_write_pane_g2

0x875e,	// (0x0003a24d) fep_hwr_write_pane_g3_ParamLimits

0x875e,	// (0x0003a24d) fep_hwr_write_pane_g3

0x876c,	// (0x0003a25b) fep_hwr_write_pane_g4_ParamLimits

0x876c,	// (0x0003a25b) fep_hwr_write_pane_g4

0x0005,

0xfaf9,	// (0x000415e8) fep_hwr_write_pane_g_ParamLimits

0xfaf9,	// (0x000415e8) fep_hwr_write_pane_g

0x8698,	// (0x0003a187) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x8698,	// (0x0003a187) bg_fep_hwr_candidate_pane_g2

0x8781,	// (0x0003a270) cell_hwr_candidate_pane_ParamLimits

0x8781,	// (0x0003a270) cell_hwr_candidate_pane

0x87c3,	// (0x0003a2b2) fep_hwr_candidate_pane_g1_ParamLimits

0xc106,	// (0x0003dbf5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc106,	// (0x0003dbf5) bg_popup_fep_shadow_pane_cp2

0xc296,	// (0x0003dd85) fep_vkb_top_pane_g4_ParamLimits

0xc296,	// (0x0003dd85) fep_vkb_top_pane_g4

0xc2dc,	// (0x0003ddcb) fep_vkb_side_pane_g2_ParamLimits

0xc2dc,	// (0x0003ddcb) fep_vkb_side_pane_g2

0x68da,	// (0x000383c9) list_setting_pane_t4_ParamLimits

0x68da,	// (0x000383c9) list_setting_pane_t4

0x4727,	// (0x00036216) list_setting_number_pane_t5_ParamLimits

0x4727,	// (0x00036216) list_setting_number_pane_t5

0x6f7e,	// (0x00038a6d) list_double_heading_pane_cp2_ParamLimits

0x6f7e,	// (0x00038a6d) list_double_heading_pane_cp2

0x2ea7,	// (0x00034996) list_double_heading_pane_g1_cp2_ParamLimits

0x2ea7,	// (0x00034996) list_double_heading_pane_g1_cp2

0xc612,	// (0x0003e101) list_double_heading_pane_g2_cp2_ParamLimits

0xc612,	// (0x0003e101) list_double_heading_pane_g2_cp2

0xc626,	// (0x0003e115) list_double_heading_pane_t1_cp2_ParamLimits

0xc626,	// (0x0003e115) list_double_heading_pane_t1_cp2

0xc63c,	// (0x0003e12b) list_double_heading_pane_t2_cp2_ParamLimits

0xc63c,	// (0x0003e12b) list_double_heading_pane_t2_cp2

0x1fd9,	// (0x00033ac8) aid_value_unit2

0x5fe3,	// (0x00037ad2) popup_preview_fixed_window

0x217b,	// (0x00033c6a) bg_popup_preview_window_pane_cp02

0xc64e,	// (0x0003e13d) list_preview_fixed_pane

0xc694,	// (0x0003e183) list_empty_pane_fp_ParamLimits

0xc694,	// (0x0003e183) list_empty_pane_fp

0xc694,	// (0x0003e183) list_single_cale_day_pane_fp_ParamLimits

0xc694,	// (0x0003e183) list_single_cale_day_pane_fp

0xc694,	// (0x0003e183) list_single_graphic_heading_pane_fp_ParamLimits

0xc694,	// (0x0003e183) list_single_graphic_heading_pane_fp

0xc694,	// (0x0003e183) list_single_graphic_pane_fp_ParamLimits

0xc694,	// (0x0003e183) list_single_graphic_pane_fp

0xc694,	// (0x0003e183) list_single_heading_pane_fp_ParamLimits

0xc694,	// (0x0003e183) list_single_heading_pane_fp

0xc694,	// (0x0003e183) list_single_pane_fp_ParamLimits

0xc694,	// (0x0003e183) list_single_pane_fp

0xc6aa,	// (0x0003e199) list_single_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0003e199) list_single_pane_fp_g1

0x465b,	// (0x0003614a) list_single_pane_fp_g2_ParamLimits

0x465b,	// (0x0003614a) list_single_pane_fp_g2

0x4c22,	// (0x00036711) list_single_pane_fp_g3_ParamLimits

0x4c22,	// (0x00036711) list_single_pane_fp_g3

0xc6b6,	// (0x0003e1a5) list_single_pane_fp_g4_ParamLimits

0xc6b6,	// (0x0003e1a5) list_single_pane_fp_g4

0x0003,

0xfb60,	// (0x0004164f) list_single_pane_fp_g_ParamLimits

0xfb60,	// (0x0004164f) list_single_pane_fp_g

0x4c36,	// (0x00036725) list_single_pane_fp_t1_ParamLimits

0x4c36,	// (0x00036725) list_single_pane_fp_t1

0x4c4d,	// (0x0003673c) list_single_graphic_pane_fp_g1_ParamLimits

0x4c4d,	// (0x0003673c) list_single_graphic_pane_fp_g1

0xc6aa,	// (0x0003e199) list_single_graphic_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0003e199) list_single_graphic_pane_fp_g2

0x465b,	// (0x0003614a) list_single_graphic_pane_fp_g3_ParamLimits

0x465b,	// (0x0003614a) list_single_graphic_pane_fp_g3

0x4c22,	// (0x00036711) list_single_graphic_pane_fp_g4_ParamLimits

0x4c22,	// (0x00036711) list_single_graphic_pane_fp_g4

0xc6b6,	// (0x0003e1a5) list_single_graphic_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0003e1a5) list_single_graphic_pane_fp_g5

0x0004,

0xfb69,	// (0x00041658) list_single_graphic_pane_fp_g_ParamLimits

0xfb69,	// (0x00041658) list_single_graphic_pane_fp_g

0x4c59,	// (0x00036748) list_single_graphic_pane_fp_t1_ParamLimits

0x4c59,	// (0x00036748) list_single_graphic_pane_fp_t1

0x4c4d,	// (0x0003673c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4c4d,	// (0x0003673c) list_single_graphic_heading_pane_fp_g1

0xc6aa,	// (0x0003e199) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0003e199) list_single_graphic_heading_pane_fp_g2

0x465b,	// (0x0003614a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x465b,	// (0x0003614a) list_single_graphic_heading_pane_fp_g3

0x4c22,	// (0x00036711) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4c22,	// (0x00036711) list_single_graphic_heading_pane_fp_g4

0xc6b6,	// (0x0003e1a5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0003e1a5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb69,	// (0x00041658) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb69,	// (0x00041658) list_single_graphic_heading_pane_fp_g

0x4c6f,	// (0x0003675e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4c6f,	// (0x0003675e) list_single_graphic_heading_pane_fp_t1

0x4c85,	// (0x00036774) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4c85,	// (0x00036774) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb74,	// (0x00041663) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb74,	// (0x00041663) list_single_graphic_heading_pane_fp_t

0x4c97,	// (0x00036786) list_single_cale_day_pane_fp_g1_ParamLimits

0x4c97,	// (0x00036786) list_single_cale_day_pane_fp_g1

0xc6c2,	// (0x0003e1b1) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6c2,	// (0x0003e1b1) list_single_cale_day_pane_fp_g2

0x4ccf,	// (0x000367be) list_single_cale_day_pane_fp_g3_ParamLimits

0x4ccf,	// (0x000367be) list_single_cale_day_pane_fp_g3

0x4cf7,	// (0x000367e6) list_single_cale_day_pane_fp_g4_ParamLimits

0x4cf7,	// (0x000367e6) list_single_cale_day_pane_fp_g4

0x4d1b,	// (0x0003680a) list_single_cale_day_pane_fp_g5_ParamLimits

0x4d1b,	// (0x0003680a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb79,	// (0x00041668) list_single_cale_day_pane_fp_g_ParamLimits

0xfb79,	// (0x00041668) list_single_cale_day_pane_fp_g

0x4d3f,	// (0x0003682e) list_single_cale_day_pane_fp_t1_ParamLimits

0x4d3f,	// (0x0003682e) list_single_cale_day_pane_fp_t1

0x4d65,	// (0x00036854) list_single_cale_day_pane_fp_t2_ParamLimits

0x4d65,	// (0x00036854) list_single_cale_day_pane_fp_t2

0x4d7e,	// (0x0003686d) list_single_cale_day_pane_fp_t3_ParamLimits

0x4d7e,	// (0x0003686d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb84,	// (0x00041673) list_single_cale_day_pane_fp_t_ParamLimits

0xfb84,	// (0x00041673) list_single_cale_day_pane_fp_t

0xc6aa,	// (0x0003e199) list_empty_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0003e199) list_empty_pane_fp_g1

0x4d97,	// (0x00036886) list_empty_pane_fp_t1

0x4da5,	// (0x00036894) list_empty_pane_fp_t2

0x0001,

0xfb8b,	// (0x0004167a) list_empty_pane_fp_t

0xc6aa,	// (0x0003e199) list_single_heading_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0003e199) list_single_heading_pane_fp_g1

0x465b,	// (0x0003614a) list_single_heading_pane_fp_g2_ParamLimits

0x465b,	// (0x0003614a) list_single_heading_pane_fp_g2

0x4c22,	// (0x00036711) list_single_heading_pane_fp_g3_ParamLimits

0x4c22,	// (0x00036711) list_single_heading_pane_fp_g3

0x0002,

0xfb90,	// (0x0004167f) list_single_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x0004167f) list_single_heading_pane_fp_g

0x4db3,	// (0x000368a2) list_single_heading_pane_fp_t1_ParamLimits

0x4db3,	// (0x000368a2) list_single_heading_pane_fp_t1

0x4dc5,	// (0x000368b4) list_single_heading_pane_fp_t2_ParamLimits

0x4dc5,	// (0x000368b4) list_single_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x00041686) list_single_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x00041686) list_single_heading_pane_fp_t

0x6c4e,	// (0x0003873d) aid_size_cell_fast

0x215e,	// (0x00033c4d) soft_indicator_pane_cp1_t1

0x6c57,	// (0x00038746) cell_app_pane_cp2_ParamLimits

0x6c57,	// (0x00038746) cell_app_pane_cp2

0x8605,	// (0x0003a0f4) fep_hwr_candidate_drop_down_list_pane

0x87dd,	// (0x0003a2cc) fep_hwr_candidate_pane_g3_ParamLimits

0x87dd,	// (0x0003a2cc) fep_hwr_candidate_pane_g3

0x3d5b,	// (0x0003584a) fep_hwr_candidate_pane_g4_ParamLimits

0x3d5b,	// (0x0003584a) fep_hwr_candidate_pane_g4

0x0002,

0xfb06,	// (0x000415f5) fep_hwr_candidate_pane_g_ParamLimits

0xfb06,	// (0x000415f5) fep_hwr_candidate_pane_g

0xc18b,	// (0x0003dc7a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc18b,	// (0x0003dc7a) fep_vkb_candidate_drop_down_list_pane

0xc58e,	// (0x0003e07d) fep_vkb_candidate_pane_g3

0xc596,	// (0x0003e085) fep_vkb_candidate_pane_g4

0x0002,

0xfb33,	// (0x00041622) fep_vkb_candidate_pane_g

0x8848,	// (0x0003a337) cell_hwr_candidate_pane_g1_ParamLimits

0x8856,	// (0x0003a345) cell_hwr_candidate_pane_g3_ParamLimits

0x8856,	// (0x0003a345) cell_hwr_candidate_pane_g3

0xc5ad,	// (0x0003e09c) cell_hwr_candidate_pane_g4_ParamLimits

0xc5ad,	// (0x0003e09c) cell_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x00041641) cell_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x00041641) cell_hwr_candidate_pane_g

0xc5ce,	// (0x0003e0bd) cell_vkb_candidate_pane_g3_ParamLimits

0xc5ce,	// (0x0003e0bd) cell_vkb_candidate_pane_g3

0xc5e9,	// (0x0003e0d8) cell_vkb_candidate_pane_g4_ParamLimits

0xc5e9,	// (0x0003e0d8) cell_vkb_candidate_pane_g4

0xc6ce,	// (0x0003e1bd) cell_app_pane_cp2_g1_ParamLimits

0xc6ce,	// (0x0003e1bd) cell_app_pane_cp2_g1

0xc6ec,	// (0x0003e1db) cell_app_pane_cp2_g2_ParamLimits

0xc6ec,	// (0x0003e1db) cell_app_pane_cp2_g2

0x0001,

0xfb9c,	// (0x0004168b) cell_app_pane_cp2_g_ParamLimits

0xfb9c,	// (0x0004168b) cell_app_pane_cp2_g

0xc6f8,	// (0x0003e1e7) cell_app_pane_cp2_t1_ParamLimits

0xc6f8,	// (0x0003e1e7) cell_app_pane_cp2_t1

0x2407,	// (0x00033ef6) grid_highlight_pane_cp1_ParamLimits

0x2407,	// (0x00033ef6) grid_highlight_pane_cp1

0x8895,	// (0x0003a384) cell_hwr_candidate_pane_cp1_ParamLimits

0x8895,	// (0x0003a384) cell_hwr_candidate_pane_cp1

0x8848,	// (0x0003a337) fep_hwr_candidate_drop_down_list_pane_g1

0x88b4,	// (0x0003a3a3) fep_hwr_candidate_drop_down_list_pane_g2

0x88c1,	// (0x0003a3b0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x00041690) fep_hwr_candidate_drop_down_list_pane_g

0x88ce,	// (0x0003a3bd) fep_hwr_candidate_drop_down_list_scroll_pane

0x88d7,	// (0x0003a3c6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x88d7,	// (0x0003a3c6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x88e4,	// (0x0003a3d3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x88e4,	// (0x0003a3d3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x88f1,	// (0x0003a3e0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x88f1,	// (0x0003a3e0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x88fe,	// (0x0003a3ed) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x88fe,	// (0x0003a3ed) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8919,	// (0x0003a408) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8919,	// (0x0003a408) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8934,	// (0x0003a423) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8934,	// (0x0003a423) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x894f,	// (0x0003a43e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x894f,	// (0x0003a43e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x896a,	// (0x0003a459) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x896a,	// (0x0003a459) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x00041697) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x00041697) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc70a,	// (0x0003e1f9) cell_vkb_candidate_pane_cp1_ParamLimits

0xc70a,	// (0x0003e1f9) cell_vkb_candidate_pane_cp1

0xc296,	// (0x0003dd85) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc296,	// (0x0003dd85) fep_vkb_candidate_drop_down_list_pane_g1

0xc72a,	// (0x0003e219) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc72a,	// (0x0003e219) fep_vkb_candidate_drop_down_list_pane_g2

0xc737,	// (0x0003e226) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc737,	// (0x0003e226) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x000416a8) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb9,	// (0x000416a8) fep_vkb_candidate_drop_down_list_pane_g

0xc744,	// (0x0003e233) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc744,	// (0x0003e233) fep_vkb_candidate_drop_down_list_scroll_pane

0xc751,	// (0x0003e240) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc751,	// (0x0003e240) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc75e,	// (0x0003e24d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc75e,	// (0x0003e24d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc76a,	// (0x0003e259) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc76a,	// (0x0003e259) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc776,	// (0x0003e265) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc776,	// (0x0003e265) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc797,	// (0x0003e286) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc797,	// (0x0003e286) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7b8,	// (0x0003e2a7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7b8,	// (0x0003e2a7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7d9,	// (0x0003e2c8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7d9,	// (0x0003e2c8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7fa,	// (0x0003e2e9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7fa,	// (0x0003e2e9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x000416af) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x000416af) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x60fd,	// (0x00037bec) title_pane_g1_ParamLimits

0x610a,	// (0x00037bf9) title_pane_g2_ParamLimits

0xf529,	// (0x00041018) title_pane_g_ParamLimits

0x2851,	// (0x00034340) aid_call2_pane

0x2849,	// (0x00034338) aid_call_pane

0x2859,	// (0x00034348) popup_clock_analogue_window_g1

0x2859,	// (0x00034348) popup_clock_analogue_window_g2

0x6f5f,	// (0x00038a4e) popup_clock_analogue_window_g3

0x6f68,	// (0x00038a57) popup_clock_analogue_window_g4

0x1feb,	// (0x00033ada) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x000411b3) popup_clock_analogue_window_g

0x6f70,	// (0x00038a5f) popup_clock_analogue_window_t1

0x6fbe,	// (0x00038aad) clock_digital_number_pane_ParamLimits

0x6fbe,	// (0x00038aad) clock_digital_number_pane

0x6fca,	// (0x00038ab9) clock_digital_number_pane_cp02_ParamLimits

0x6fca,	// (0x00038ab9) clock_digital_number_pane_cp02

0x6fd6,	// (0x00038ac5) clock_digital_number_pane_cp03_ParamLimits

0x6fd6,	// (0x00038ac5) clock_digital_number_pane_cp03

0x6fe2,	// (0x00038ad1) clock_digital_number_pane_cp04_ParamLimits

0x6fe2,	// (0x00038ad1) clock_digital_number_pane_cp04

0x6fee,	// (0x00038add) clock_digital_separator_pane_ParamLimits

0x6fee,	// (0x00038add) clock_digital_separator_pane

0x6ffa,	// (0x00038ae9) popup_clock_digital_window_t1_ParamLimits

0x6ffa,	// (0x00038ae9) popup_clock_digital_window_t1

0x1feb,	// (0x00033ada) clock_digital_number_pane_g1

0x1feb,	// (0x00033ada) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x000411be) clock_digital_number_pane_g

0x1feb,	// (0x00033ada) clock_digital_separator_pane_g1

0x1feb,	// (0x00033ada) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x000411be) clock_digital_separator_pane_g

0x7ce4,	// (0x000397d3) aid_fill_nsta_ParamLimits

0x7e30,	// (0x0003991f) indicator_nsta_pane_ParamLimits

0x7fa9,	// (0x00039a98) popup_clock_analogue_window

0x7fa9,	// (0x00039a98) popup_clock_digital_window

0xb9f3,	// (0x0003d4e2) grid_indicator_nsta_pane_ParamLimits

0xba1c,	// (0x0003d50b) clock_nsta_pane_t2

0x0001,

0xfa86,	// (0x00041575) clock_nsta_pane_t

0x6e8a,	// (0x00038979) aid_size_max_handle

0x6e94,	// (0x00038983) aid_size_min_handle

0x2cc3,	// (0x000347b2) editor_scroll_pane

0xc815,	// (0x0003e304) ex_editor_pane

0x2539,	// (0x00034028) scroll_pane_cp13

0x23af,	// (0x00033e9e) scroll_pane_cp14

0x2888,	// (0x00034377) scroll_pane_cp36

0x6f92,	// (0x00038a81) list_single_graphic_hl_pane_cp2_ParamLimits

0x6f92,	// (0x00038a81) list_single_graphic_hl_pane_cp2

0xaf94,	// (0x0003ca83) list_single_graphic_hl_pane_ParamLimits

0xaf94,	// (0x0003ca83) list_single_graphic_hl_pane

0xc81d,	// (0x0003e30c) aid_size_min_hl_cp1

0xc826,	// (0x0003e315) list_highlight_pane_cp34_ParamLimits

0xc826,	// (0x0003e315) list_highlight_pane_cp34

0xc837,	// (0x0003e326) list_single_graphic_hl_pane_g1_ParamLimits

0xc837,	// (0x0003e326) list_single_graphic_hl_pane_g1

0x8985,	// (0x0003a474) list_single_graphic_hl_pane_g2_ParamLimits

0x8985,	// (0x0003a474) list_single_graphic_hl_pane_g2

0x8985,	// (0x0003a474) list_single_graphic_hl_pane_g3_ParamLimits

0x8985,	// (0x0003a474) list_single_graphic_hl_pane_g3

0x480b,	// (0x000362fa) list_single_graphic_hl_pane_g4_ParamLimits

0x480b,	// (0x000362fa) list_single_graphic_hl_pane_g4

0x8991,	// (0x0003a480) list_single_graphic_hl_pane_g5_ParamLimits

0x8991,	// (0x0003a480) list_single_graphic_hl_pane_g5

0x0004,

0xfbd1,	// (0x000416c0) list_single_graphic_hl_pane_g_ParamLimits

0xfbd1,	// (0x000416c0) list_single_graphic_hl_pane_g

0x89a5,	// (0x0003a494) list_single_graphic_hl_pane_t1_ParamLimits

0x89a5,	// (0x0003a494) list_single_graphic_hl_pane_t1

0xc844,	// (0x0003e333) aid_size_min_hl_cp2

0xc84d,	// (0x0003e33c) list_highlight_pane_cp34_cp2_ParamLimits

0xc84d,	// (0x0003e33c) list_highlight_pane_cp34_cp2

0xc837,	// (0x0003e326) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc837,	// (0x0003e326) list_single_graphic_hl_pane_g1_cp2

0xc85a,	// (0x0003e349) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc85a,	// (0x0003e349) list_single_graphic_hl_pane_g2_cp2

0xc866,	// (0x0003e355) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc866,	// (0x0003e355) list_single_graphic_hl_pane_g3_cp2

0x2c22,	// (0x00034711) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2c22,	// (0x00034711) list_single_graphic_hl_pane_g4_cp2

0xc874,	// (0x0003e363) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc874,	// (0x0003e363) list_single_graphic_hl_pane_g5_cp2

0x75d8,	// (0x000390c7) control_pane_g4_ParamLimits

0x75d8,	// (0x000390c7) control_pane_g4

0x2549,	// (0x00034038) bg_popup_sub_pane_cp10_ParamLimits

0xc030,	// (0x0003db1f) list_choice_list_pane_ParamLimits

0xc03f,	// (0x0003db2e) scroll_pane_cp23

0x217b,	// (0x00033c6a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc64e,	// (0x0003e13d) list_preview_fixed_pane_ParamLimits

0xc664,	// (0x0003e153) list_preview_fixed_pane_cp_ParamLimits

0xc664,	// (0x0003e153) list_preview_fixed_pane_cp

0xc670,	// (0x0003e15f) popup_preview_fixed_window_g1_ParamLimits

0xc670,	// (0x0003e15f) popup_preview_fixed_window_g1

0xc67c,	// (0x0003e16b) popup_preview_fixed_window_g2_ParamLimits

0xc67c,	// (0x0003e16b) popup_preview_fixed_window_g2

0x0002,

0xfb59,	// (0x00041648) popup_preview_fixed_window_g_ParamLimits

0xfb59,	// (0x00041648) popup_preview_fixed_window_g

0x6d66,	// (0x00038855) aid_navi_side_left_pane_ParamLimits

0x6d7b,	// (0x0003886a) aid_navi_side_right_pane_ParamLimits

0x6d93,	// (0x00038882) navi_icon_pane_stacon_ParamLimits

0x6da7,	// (0x00038896) navi_navi_pane_stacon_ParamLimits

0x6d93,	// (0x00038882) navi_text_pane_stacon_ParamLimits

0x5eb2,	// (0x000379a1) main_text_info_pane

0xc89e,	// (0x0003e38d) listscroll_text_info_pane

0xc8a6,	// (0x0003e395) list_text_info_pane_ParamLimits

0xc8a6,	// (0x0003e395) list_text_info_pane

0xc8b5,	// (0x0003e3a4) scroll_pane_cp24_ParamLimits

0xc8b5,	// (0x0003e3a4) scroll_pane_cp24

0xc8d3,	// (0x0003e3c2) list_text_info_pane_t1_ParamLimits

0xc8d3,	// (0x0003e3c2) list_text_info_pane_t1

0x776b,	// (0x0003925a) popup_fast_swap2_window_ParamLimits

0x776b,	// (0x0003925a) popup_fast_swap2_window

0xc907,	// (0x0003e3f6) aid_size_cell_fast2

0x1fe1,	// (0x00033ad0) bg_popup_window_pane_cp17

0xc911,	// (0x0003e400) heading_pane_cp2

0xc919,	// (0x0003e408) listscroll_fast2_pane

0xc921,	// (0x0003e410) grid_fast2_pane

0xc92b,	// (0x0003e41a) listscroll_fast2_pane_g1

0xc933,	// (0x0003e422) listscroll_fast2_pane_g2

0x0001,

0xfbdc,	// (0x000416cb) listscroll_fast2_pane_g

0x2539,	// (0x00034028) scroll_pane_cp26

0xc93d,	// (0x0003e42c) cell_fast2_pane_ParamLimits

0xc93d,	// (0x0003e42c) cell_fast2_pane

0xc952,	// (0x0003e441) cell_fast2_pane_g1

0xc95b,	// (0x0003e44a) cell_fast2_pane_g2

0xc964,	// (0x0003e453) cell_fast2_pane_g3

0x0002,

0xfbe1,	// (0x000416d0) cell_fast2_pane_g

0x22e6,	// (0x00033dd5) grid_highlight_pane_cp9

0x7733,	// (0x00039222) main_eswt_pane_ParamLimits

0x7733,	// (0x00039222) main_eswt_pane

0xc8ca,	// (0x0003e3b9) list_single_text_info_pane

0xc96c,	// (0x0003e45b) eswt_ctrl_button_pane

0xc96c,	// (0x0003e45b) eswt_ctrl_canvas_pane

0xc974,	// (0x0003e463) eswt_ctrl_combo_pane

0xc96c,	// (0x0003e45b) eswt_ctrl_default_pane

0xc96c,	// (0x0003e45b) eswt_ctrl_label_pane

0xc97c,	// (0x0003e46b) eswt_ctrl_wait_pane

0xc984,	// (0x0003e473) eswt_shell_pane

0x1fe1,	// (0x00033ad0) listscroll_eswt_app_pane

0xc9a4,	// (0x0003e493) popup_eswt_tasktip_window_ParamLimits

0xc9a4,	// (0x0003e493) popup_eswt_tasktip_window

0x9a7e,	// (0x0003b56d) bg_popup_window_pane_cp18

0xc9bd,	// (0x0003e4ac) eswt_control_pane_g1_ParamLimits

0xc9bd,	// (0x0003e4ac) eswt_control_pane_g1

0xc9ca,	// (0x0003e4b9) eswt_control_pane_g2_ParamLimits

0xc9ca,	// (0x0003e4b9) eswt_control_pane_g2

0xc9d7,	// (0x0003e4c6) eswt_control_pane_g3_ParamLimits

0xc9d7,	// (0x0003e4c6) eswt_control_pane_g3

0xc9e4,	// (0x0003e4d3) eswt_control_pane_g4_ParamLimits

0xc9e4,	// (0x0003e4d3) eswt_control_pane_g4

0x0003,

0xfbe8,	// (0x000416d7) eswt_control_pane_g_ParamLimits

0xfbe8,	// (0x000416d7) eswt_control_pane_g

0x2407,	// (0x00033ef6) bg_button_pane_ParamLimits

0x2407,	// (0x00033ef6) bg_button_pane

0x22fb,	// (0x00033dea) common_borders_pane_copy2_ParamLimits

0x22fb,	// (0x00033dea) common_borders_pane_copy2

0xc9f1,	// (0x0003e4e0) control_button_pane_g1_ParamLimits

0xc9f1,	// (0x0003e4e0) control_button_pane_g1

0xc9fd,	// (0x0003e4ec) control_button_pane_g2_ParamLimits

0xc9fd,	// (0x0003e4ec) control_button_pane_g2

0xca09,	// (0x0003e4f8) control_button_pane_g3_ParamLimits

0xca09,	// (0x0003e4f8) control_button_pane_g3

0x0002,

0xfbf1,	// (0x000416e0) control_button_pane_g_ParamLimits

0xfbf1,	// (0x000416e0) control_button_pane_g

0xca1d,	// (0x0003e50c) control_button_pane_t1

0xca2b,	// (0x0003e51a) control_button_pane_t2

0x0001,

0xfbf8,	// (0x000416e7) control_button_pane_t

0x99f2,	// (0x0003b4e1) bg_button_pane_g1

0x9a02,	// (0x0003b4f1) bg_button_pane_g2

0x99fa,	// (0x0003b4e9) bg_button_pane_g3

0x9a12,	// (0x0003b501) bg_button_pane_g4

0x9a0a,	// (0x0003b4f9) bg_button_pane_g5

0x9a1a,	// (0x0003b509) bg_button_pane_g6

0x9a22,	// (0x0003b511) bg_button_pane_g7

0x9a32,	// (0x0003b521) bg_button_pane_g8

0x9a2a,	// (0x0003b519) bg_button_pane_g9

0x0008,

0xf82d,	// (0x0004131c) bg_button_pane_g

0xbfeb,	// (0x0003dada) common_borders_pane_ParamLimits

0xbfeb,	// (0x0003dada) common_borders_pane

0xc9bd,	// (0x0003e4ac) eswt_control_pane_g1_copy1_ParamLimits

0xc9bd,	// (0x0003e4ac) eswt_control_pane_g1_copy1

0xc9ca,	// (0x0003e4b9) eswt_control_pane_g2_copy1_ParamLimits

0xc9ca,	// (0x0003e4b9) eswt_control_pane_g2_copy1

0xc9d7,	// (0x0003e4c6) eswt_control_pane_g3_copy1_ParamLimits

0xc9d7,	// (0x0003e4c6) eswt_control_pane_g3_copy1

0xc9e4,	// (0x0003e4d3) eswt_control_pane_g4_copy1_ParamLimits

0xc9e4,	// (0x0003e4d3) eswt_control_pane_g4_copy1

0xc026,	// (0x0003db15) bg_eswt_ctrl_canvas_pane_g1

0xbfeb,	// (0x0003dada) common_borders_pane_cp2_ParamLimits

0xbfeb,	// (0x0003dada) common_borders_pane_cp2

0xbfeb,	// (0x0003dada) common_borders_pane_cp3_ParamLimits

0xbfeb,	// (0x0003dada) common_borders_pane_cp3

0xca39,	// (0x0003e528) separator_horizontal_pane

0xca41,	// (0x0003e530) separator_vertical_pane

0xc9bd,	// (0x0003e4ac) eswt_control_pane_g1_copy2_ParamLimits

0xc9bd,	// (0x0003e4ac) eswt_control_pane_g1_copy2

0xc9ca,	// (0x0003e4b9) eswt_control_pane_g2_copy2_ParamLimits

0xc9ca,	// (0x0003e4b9) eswt_control_pane_g2_copy2

0xc9d7,	// (0x0003e4c6) eswt_control_pane_g3_copy2_ParamLimits

0xc9d7,	// (0x0003e4c6) eswt_control_pane_g3_copy2

0xc9e4,	// (0x0003e4d3) eswt_control_pane_g4_copy2_ParamLimits

0xc9e4,	// (0x0003e4d3) eswt_control_pane_g4_copy2

0x1fe1,	// (0x00033ad0) common_borders_pane_cp4

0xca4a,	// (0x0003e539) separator_horizontal_pane_g1

0xca53,	// (0x0003e542) separator_horizontal_pane_g2

0xca5c,	// (0x0003e54b) separator_horizontal_pane_g3

0x0002,

0xfbfd,	// (0x000416ec) separator_horizontal_pane_g

0xc9bd,	// (0x0003e4ac) eswt_control_pane_g1_copy3_ParamLimits

0xc9bd,	// (0x0003e4ac) eswt_control_pane_g1_copy3

0xc9ca,	// (0x0003e4b9) eswt_control_pane_g2_copy3_ParamLimits

0xc9ca,	// (0x0003e4b9) eswt_control_pane_g2_copy3

0xc9d7,	// (0x0003e4c6) eswt_control_pane_g3_copy3_ParamLimits

0xc9d7,	// (0x0003e4c6) eswt_control_pane_g3_copy3

0xc9e4,	// (0x0003e4d3) eswt_control_pane_g4_copy3_ParamLimits

0xc9e4,	// (0x0003e4d3) eswt_control_pane_g4_copy3

0x1fe1,	// (0x00033ad0) common_borders_pane_cp5

0xca65,	// (0x0003e554) separator_vertical_pane_g1

0xca6e,	// (0x0003e55d) separator_vertical_pane_g2

0xca77,	// (0x0003e566) separator_vertical_pane_g3

0x0002,

0xfc04,	// (0x000416f3) separator_vertical_pane_g

0xc9bd,	// (0x0003e4ac) eswt_control_pane_g1_copy4_ParamLimits

0xc9bd,	// (0x0003e4ac) eswt_control_pane_g1_copy4

0xc9ca,	// (0x0003e4b9) eswt_control_pane_g2_copy4_ParamLimits

0xc9ca,	// (0x0003e4b9) eswt_control_pane_g2_copy4

0xc9d7,	// (0x0003e4c6) eswt_control_pane_g3_copy4_ParamLimits

0xc9d7,	// (0x0003e4c6) eswt_control_pane_g3_copy4

0xc9e4,	// (0x0003e4d3) eswt_control_pane_g4_copy4_ParamLimits

0xc9e4,	// (0x0003e4d3) eswt_control_pane_g4_copy4

0xca80,	// (0x0003e56f) eswt_ctrl_combo_button_pane

0xca88,	// (0x0003e577) eswt_ctrl_input_pane

0xca90,	// (0x0003e57f) popup_choice_list_window_cp70

0xca98,	// (0x0003e587) eswt_ctrl_input_pane_t1

0x1fe1,	// (0x00033ad0) input_focus_pane_cp70

0xbfeb,	// (0x0003dada) bg_button_pane_cp70_ParamLimits

0xbfeb,	// (0x0003dada) bg_button_pane_cp70

0xcaa6,	// (0x0003e595) eswt_ctrl_combo_button_pane_g1

0xcaae,	// (0x0003e59d) wait_bar_pane_cp70

0x9a7e,	// (0x0003b56d) bg_popup_window_pane_cp70_ParamLimits

0x9a7e,	// (0x0003b56d) bg_popup_window_pane_cp70

0xcab6,	// (0x0003e5a5) popup_eswt_tasktip_window_t1

0xcacc,	// (0x0003e5bb) wait_bar_pane_cp71_ParamLimits

0xcacc,	// (0x0003e5bb) wait_bar_pane_cp71

0xcad8,	// (0x0003e5c7) grid_eswt_app_pane

0x2735,	// (0x00034224) scroll_pane_cp70

0xcae1,	// (0x0003e5d0) cell_eswt_app_pane_ParamLimits

0xcae1,	// (0x0003e5d0) cell_eswt_app_pane

0xcb11,	// (0x0003e600) cell_eswt_app_pane_g1_ParamLimits

0xcb11,	// (0x0003e600) cell_eswt_app_pane_g1

0xcb40,	// (0x0003e62f) cell_eswt_app_pane_g2_ParamLimits

0xcb40,	// (0x0003e62f) cell_eswt_app_pane_g2

0x0001,

0xfc0b,	// (0x000416fa) cell_eswt_app_pane_g_ParamLimits

0xfc0b,	// (0x000416fa) cell_eswt_app_pane_g

0xcb64,	// (0x0003e653) cell_eswt_app_pane_t1_ParamLimits

0xcb64,	// (0x0003e653) cell_eswt_app_pane_t1

0xcb96,	// (0x0003e685) grid_highlight_pane_cp70_ParamLimits

0xcb96,	// (0x0003e685) grid_highlight_pane_cp70

0x2bbd,	// (0x000346ac) set_content_pane_g1

0x756e,	// (0x0003905d) status_small_volume_pane

0x89bb,	// (0x0003a4aa) status_small_volume_pane_g1

0x89c3,	// (0x0003a4b2) volume_small2_pane

0x89cc,	// (0x0003a4bb) volume_small2_pane_g1

0x89d5,	// (0x0003a4c4) volume_small2_pane_g2

0x89de,	// (0x0003a4cd) volume_small2_pane_g3

0x89e7,	// (0x0003a4d6) volume_small2_pane_g4

0x89f0,	// (0x0003a4df) volume_small2_pane_g5

0x89f9,	// (0x0003a4e8) volume_small2_pane_g6

0x8a02,	// (0x0003a4f1) volume_small2_pane_g7

0x8a0b,	// (0x0003a4fa) volume_small2_pane_g8

0x8a14,	// (0x0003a503) volume_small2_pane_g9

0x8a1d,	// (0x0003a50c) volume_small2_pane_g10

0x0009,

0xfc10,	// (0x000416ff) volume_small2_pane_g

0xc3de,	// (0x0003decd) fep_vkb_top_text_pane_g1_ParamLimits

0xc3f9,	// (0x0003dee8) fep_vkb_top_text_pane_t1_ParamLimits

0xc688,	// (0x0003e177) popup_preview_fixed_window_g3_ParamLimits

0xc688,	// (0x0003e177) popup_preview_fixed_window_g3

0x7c1a,	// (0x00039709) popup_toolbar_trans_pane

0xadbc,	// (0x0003c8ab) aid_height_set_list_ParamLimits

0xadcd,	// (0x0003c8bc) aid_size_parent_ParamLimits

0x2549,	// (0x00034038) list_highlight_pane_cp2_ParamLimits

0x2bbd,	// (0x000346ac) set_content_pane_g1_ParamLimits

0xafb3,	// (0x0003caa2) list_single_image_pane_ParamLimits

0xafb3,	// (0x0003caa2) list_single_image_pane

0xcba2,	// (0x0003e691) aid_size_cell_image_ParamLimits

0xcba2,	// (0x0003e691) aid_size_cell_image

0xcbaf,	// (0x0003e69e) grid_single_image_pane_ParamLimits

0xcbaf,	// (0x0003e69e) grid_single_image_pane

0x2efe,	// (0x000349ed) list_single_image_pane_g1_ParamLimits

0x2efe,	// (0x000349ed) list_single_image_pane_g1

0xcbbb,	// (0x0003e6aa) list_single_image_pane_g2_ParamLimits

0xcbbb,	// (0x0003e6aa) list_single_image_pane_g2

0x0001,

0xfc25,	// (0x00041714) list_single_image_pane_g_ParamLimits

0xfc25,	// (0x00041714) list_single_image_pane_g

0xcbcf,	// (0x0003e6be) list_single_image_pane_t1_ParamLimits

0xcbcf,	// (0x0003e6be) list_single_image_pane_t1

0xcbe5,	// (0x0003e6d4) cell_image_list_pane_ParamLimits

0xcbe5,	// (0x0003e6d4) cell_image_list_pane

0xcbf9,	// (0x0003e6e8) cell_image_list_pane_g1

0xcc02,	// (0x0003e6f1) cell_image_list_pane_g2

0x0001,

0xfc2a,	// (0x00041719) cell_image_list_pane_g

0xcc0b,	// (0x0003e6fa) aid_size_cell_tb_trans_pane

0x2407,	// (0x00033ef6) bg_tb_trans_pane

0xcc1d,	// (0x0003e70c) grid_tb_trans_pane

0x99f2,	// (0x0003b4e1) bg_tb_trans_pane_g1

0x9a02,	// (0x0003b4f1) bg_tb_trans_pane_g2

0x99fa,	// (0x0003b4e9) bg_tb_trans_pane_g3

0x9a12,	// (0x0003b501) bg_tb_trans_pane_g4

0x9a0a,	// (0x0003b4f9) bg_tb_trans_pane_g5

0x9a32,	// (0x0003b521) bg_tb_trans_pane_g6

0x9a2a,	// (0x0003b519) bg_tb_trans_pane_g7

0x9a1a,	// (0x0003b509) bg_tb_trans_pane_g8

0x9a22,	// (0x0003b511) bg_tb_trans_pane_g9

0x0008,

0xfc2f,	// (0x0004171e) bg_tb_trans_pane_g

0xcc31,	// (0x0003e720) cell_toolbar_trans_pane_ParamLimits

0xcc31,	// (0x0003e720) cell_toolbar_trans_pane

0xc026,	// (0x0003db15) cell_toolbar_trans_pane_g1

0xbbf1,	// (0x0003d6e0) list_form2_midp_pane_t1

0xbbff,	// (0x0003d6ee) list_form2_midp_pane_t2

0x0001,

0xfacc,	// (0x000415bb) list_form2_midp_pane_t

0xbc0d,	// (0x0003d6fc) scroll_pane_cp51_ParamLimits

0xbdc9,	// (0x0003d8b8) form2_midp_wait_pane_g1

0xbdd2,	// (0x0003d8c1) form2_midp_wait_pane_g2

0xbddb,	// (0x0003d8ca) form2_midp_wait_pane_g3

0x0002,

0xfae1,	// (0x000415d0) form2_midp_wait_pane_g

0x2051,	// (0x00033b40) list_highlight_pane_cp21_ParamLimits

0xbe23,	// (0x0003d912) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe32,	// (0x0003d921) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x8419,	// (0x00039f08) list_single_2graphic_im_pane_ParamLimits

0x8419,	// (0x00039f08) list_single_2graphic_im_pane

0xcc57,	// (0x0003e746) list_single_2graphic_im_pane_g1_ParamLimits

0xcc57,	// (0x0003e746) list_single_2graphic_im_pane_g1

0xcc68,	// (0x0003e757) list_single_2graphic_im_pane_g2_ParamLimits

0xcc68,	// (0x0003e757) list_single_2graphic_im_pane_g2

0xcc74,	// (0x0003e763) list_single_2graphic_im_pane_g3_ParamLimits

0xcc74,	// (0x0003e763) list_single_2graphic_im_pane_g3

0x0003,

0xfc42,	// (0x00041731) list_single_2graphic_im_pane_g_ParamLimits

0xfc42,	// (0x00041731) list_single_2graphic_im_pane_g

0xcc94,	// (0x0003e783) list_single_2graphic_im_pane_t1_ParamLimits

0xcc94,	// (0x0003e783) list_single_2graphic_im_pane_t1

0xc694,	// (0x0003e183) list_single_graphic_2heading_pane_fp_ParamLimits

0xc694,	// (0x0003e183) list_single_graphic_2heading_pane_fp

0x4c4d,	// (0x0003673c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4c4d,	// (0x0003673c) list_single_graphic_2heading_pane_fp_g1

0xc6aa,	// (0x0003e199) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0003e199) list_single_graphic_2heading_pane_fp_g2

0x465b,	// (0x0003614a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x465b,	// (0x0003614a) list_single_graphic_2heading_pane_fp_g3

0x4c22,	// (0x00036711) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4c22,	// (0x00036711) list_single_graphic_2heading_pane_fp_g4

0xc6b6,	// (0x0003e1a5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0003e1a5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb69,	// (0x00041658) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb69,	// (0x00041658) list_single_graphic_2heading_pane_fp_g

0x4ddb,	// (0x000368ca) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4ddb,	// (0x000368ca) list_single_graphic_2heading_pane_fp_t1

0x4c85,	// (0x00036774) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4c85,	// (0x00036774) list_single_graphic_2heading_pane_fp_t2

0x4df1,	// (0x000368e0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4df1,	// (0x000368e0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4b,	// (0x0004173a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4b,	// (0x0004173a) list_single_graphic_2heading_pane_fp_t

0xc0b2,	// (0x0003dba1) fep_hwr_write_pane_g5_ParamLimits

0xc0b2,	// (0x0003dba1) fep_hwr_write_pane_g5

0xc0be,	// (0x0003dbad) fep_hwr_write_pane_g6_ParamLimits

0xc0be,	// (0x0003dbad) fep_hwr_write_pane_g6

0xc984,	// (0x0003e473) eswt_shell_pane_ParamLimits

0x9a7e,	// (0x0003b56d) bg_popup_window_pane_cp18_ParamLimits

0xc9b5,	// (0x0003e4a4) heading_pane_cp70

0xcab6,	// (0x0003e5a5) popup_eswt_tasktip_window_t1_ParamLimits

0x7d39,	// (0x00039828) aid_touch_tab_arrow_left

0x7d48,	// (0x00039837) aid_touch_tab_arrow_right

0x611b,	// (0x00037c0a) title_pane_g3_ParamLimits

0x611b,	// (0x00037c0a) title_pane_g3

0x23cf,	// (0x00033ebe) set_value_pane_g1

0x7c1a,	// (0x00039709) popup_toolbar_trans_pane_ParamLimits

0xcc0b,	// (0x0003e6fa) aid_size_cell_tb_trans_pane_ParamLimits

0x2407,	// (0x00033ef6) bg_tb_trans_pane_ParamLimits

0xcc1d,	// (0x0003e70c) grid_tb_trans_pane_ParamLimits

0x217b,	// (0x00033c6a) cont_note_pane_ParamLimits

0x217b,	// (0x00033c6a) cont_note_pane

0x22fb,	// (0x00033dea) cont_snote2_single_text_pane_ParamLimits

0x22fb,	// (0x00033dea) cont_snote2_single_text_pane

0x22fb,	// (0x00033dea) cont_snote2_single_graphic_pane_ParamLimits

0x22fb,	// (0x00033dea) cont_snote2_single_graphic_pane

0xa098,	// (0x0003bb87) cont_note_wait_pane_ParamLimits

0xa098,	// (0x0003bb87) cont_note_wait_pane

0xa098,	// (0x0003bb87) cont_note_image_pane_ParamLimits

0xa098,	// (0x0003bb87) cont_note_image_pane

0xccc5,	// (0x0003e7b4) popup_note2_window_g1_ParamLimits

0xccc5,	// (0x0003e7b4) popup_note2_window_g1

0xccf6,	// (0x0003e7e5) popup_note2_window_t1_ParamLimits

0xccf6,	// (0x0003e7e5) popup_note2_window_t1

0xcd3b,	// (0x0003e82a) popup_note2_window_t2_ParamLimits

0xcd3b,	// (0x0003e82a) popup_note2_window_t2

0xcd80,	// (0x0003e86f) popup_note2_window_t3_ParamLimits

0xcd80,	// (0x0003e86f) popup_note2_window_t3

0xcdc5,	// (0x0003e8b4) popup_note2_window_t4_ParamLimits

0xcdc5,	// (0x0003e8b4) popup_note2_window_t4

0x21ff,	// (0x00033cee) popup_note2_window_t5_ParamLimits

0x21ff,	// (0x00033cee) popup_note2_window_t5

0x0004,

0xfc57,	// (0x00041746) popup_note2_window_t_ParamLimits

0xfc57,	// (0x00041746) popup_note2_window_t

0xcdf4,	// (0x0003e8e3) popup_note2_image_window_g1_ParamLimits

0xcdf4,	// (0x0003e8e3) popup_note2_image_window_g1

0xce00,	// (0x0003e8ef) popup_note2_image_window_g2_ParamLimits

0xce00,	// (0x0003e8ef) popup_note2_image_window_g2

0x0001,

0xfc62,	// (0x00041751) popup_note2_image_window_g_ParamLimits

0xfc62,	// (0x00041751) popup_note2_image_window_g

0xce12,	// (0x0003e901) popup_note2_image_window_t1_ParamLimits

0xce12,	// (0x0003e901) popup_note2_image_window_t1

0xce2a,	// (0x0003e919) popup_note2_image_window_t2_ParamLimits

0xce2a,	// (0x0003e919) popup_note2_image_window_t2

0xce42,	// (0x0003e931) popup_note2_image_window_t3_ParamLimits

0xce42,	// (0x0003e931) popup_note2_image_window_t3

0x0002,

0xfc67,	// (0x00041756) popup_note2_image_window_t_ParamLimits

0xfc67,	// (0x00041756) popup_note2_image_window_t

0xa0a6,	// (0x0003bb95) popup_note2_wait_window_g1_ParamLimits

0xa0a6,	// (0x0003bb95) popup_note2_wait_window_g1

0xa0b2,	// (0x0003bba1) popup_note2_wait_window_g2_ParamLimits

0xa0b2,	// (0x0003bba1) popup_note2_wait_window_g2

0xa0be,	// (0x0003bbad) popup_note2_wait_window_g3_ParamLimits

0xa0be,	// (0x0003bbad) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x000412fe) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x000412fe) popup_note2_wait_window_g

0xce5e,	// (0x0003e94d) popup_note2_wait_window_t1_ParamLimits

0xce5e,	// (0x0003e94d) popup_note2_wait_window_t1

0xce7c,	// (0x0003e96b) popup_note2_wait_window_t2_ParamLimits

0xce7c,	// (0x0003e96b) popup_note2_wait_window_t2

0xce9a,	// (0x0003e989) popup_note2_wait_window_t3_ParamLimits

0xce9a,	// (0x0003e989) popup_note2_wait_window_t3

0xceac,	// (0x0003e99b) popup_note2_wait_window_t4_ParamLimits

0xceac,	// (0x0003e99b) popup_note2_wait_window_t4

0x0003,

0xfc6e,	// (0x0004175d) popup_note2_wait_window_t_ParamLimits

0xfc6e,	// (0x0004175d) popup_note2_wait_window_t

0xcebe,	// (0x0003e9ad) wait_bar2_pane_ParamLimits

0xcebe,	// (0x0003e9ad) wait_bar2_pane

0xced6,	// (0x0003e9c5) popup_snote2_single_text_window_g1_ParamLimits

0xced6,	// (0x0003e9c5) popup_snote2_single_text_window_g1

0xcefe,	// (0x0003e9ed) popup_snote2_single_text_window_t1_ParamLimits

0xcefe,	// (0x0003e9ed) popup_snote2_single_text_window_t1

0xcf4a,	// (0x0003ea39) popup_snote2_single_text_window_t2_ParamLimits

0xcf4a,	// (0x0003ea39) popup_snote2_single_text_window_t2

0xcf96,	// (0x0003ea85) popup_snote2_single_text_window_t3_ParamLimits

0xcf96,	// (0x0003ea85) popup_snote2_single_text_window_t3

0xcfd7,	// (0x0003eac6) popup_snote2_single_text_window_t4_ParamLimits

0xcfd7,	// (0x0003eac6) popup_snote2_single_text_window_t4

0xd00d,	// (0x0003eafc) popup_snote2_single_text_window_t5_ParamLimits

0xd00d,	// (0x0003eafc) popup_snote2_single_text_window_t5

0x0004,

0xfc77,	// (0x00041766) popup_snote2_single_text_window_t_ParamLimits

0xfc77,	// (0x00041766) popup_snote2_single_text_window_t

0xd038,	// (0x0003eb27) popup_snote2_single_graphic_window_g1_ParamLimits

0xd038,	// (0x0003eb27) popup_snote2_single_graphic_window_g1

0xd060,	// (0x0003eb4f) popup_snote2_single_graphic_window_g2_ParamLimits

0xd060,	// (0x0003eb4f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc82,	// (0x00041771) popup_snote2_single_graphic_window_g_ParamLimits

0xfc82,	// (0x00041771) popup_snote2_single_graphic_window_g

0xd088,	// (0x0003eb77) popup_snote2_single_graphic_window_t1_ParamLimits

0xd088,	// (0x0003eb77) popup_snote2_single_graphic_window_t1

0xd0d4,	// (0x0003ebc3) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0d4,	// (0x0003ebc3) popup_snote2_single_graphic_window_t2

0xcf96,	// (0x0003ea85) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf96,	// (0x0003ea85) popup_snote2_single_graphic_window_t3

0xcfd7,	// (0x0003eac6) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfd7,	// (0x0003eac6) popup_snote2_single_graphic_window_t4

0xd00d,	// (0x0003eafc) popup_snote2_single_graphic_window_t5_ParamLimits

0xd00d,	// (0x0003eafc) popup_snote2_single_graphic_window_t5

0x0004,

0xfc87,	// (0x00041776) popup_snote2_single_graphic_window_t_ParamLimits

0xfc87,	// (0x00041776) popup_snote2_single_graphic_window_t

0xbaca,	// (0x0003d5b9) clock_nsta_pane_cp2_t1

0xbaca,	// (0x0003d5b9) clock_nsta_pane_cp2_t2

0x0001,

0xfaa2,	// (0x00041591) clock_nsta_pane_cp2_t

0x6a0e,	// (0x000384fd) form_field_data_wide_pane_g1_ParamLimits

0x2415,	// (0x00033f04) form_field_data_wide_pane_g2_ParamLimits

0x2415,	// (0x00033f04) form_field_data_wide_pane_g2

0x2421,	// (0x00033f10) form_field_data_wide_pane_g3_ParamLimits

0x2421,	// (0x00033f10) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x00041136) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x00041136) form_field_data_wide_pane_g

0xb9a6,	// (0x0003d495) grid_touch_3_pane_ParamLimits

0xb9a6,	// (0x0003d495) grid_touch_3_pane

0xd120,	// (0x0003ec0f) cell_touch_3_pane_ParamLimits

0xd120,	// (0x0003ec0f) cell_touch_3_pane

0xc026,	// (0x0003db15) cell_touch_3_pane_g1

0xc026,	// (0x0003db15) cell_touch_3_pane_g2

0x0001,

0xfb27,	// (0x00041616) cell_touch_3_pane_g

0x2231,	// (0x00033d20) cont_query_data_pane

0x2239,	// (0x00033d28) cont_query_data_pane_cp1

0xd14e,	// (0x0003ec3d) button_value_adjust_pane_cp7

0xd156,	// (0x0003ec45) query_popup_pane_cp3

0x28ba,	// (0x000343a9) bg_popup_sub_pane_cp22_ParamLimits

0x7074,	// (0x00038b63) navi_navi_volume_pane_cp2

0x708c,	// (0x00038b7b) popup_side_volume_key_window_g2

0x7098,	// (0x00038b87) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x000411cc) popup_side_volume_key_window_g

0x70b2,	// (0x00038ba1) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x000411d3) popup_side_volume_key_window_t

0x732c,	// (0x00038e1b) popup_side_volume_key_window_ParamLimits

0x6804,	// (0x000382f3) list_double_graphic_pane_g4_ParamLimits

0x6804,	// (0x000382f3) list_double_graphic_pane_g4

0x845e,	// (0x00039f4d) list_single_2heading_msg_pane_ParamLimits

0x845e,	// (0x00039f4d) list_single_2heading_msg_pane

0x8a26,	// (0x0003a515) list_single_2heading_msg_pane_g1_ParamLimits

0x8a26,	// (0x0003a515) list_single_2heading_msg_pane_g1

0x4596,	// (0x00036085) list_single_2heading_msg_pane_g2_ParamLimits

0x4596,	// (0x00036085) list_single_2heading_msg_pane_g2

0x49a3,	// (0x00036492) list_single_2heading_msg_pane_g3_ParamLimits

0x49a3,	// (0x00036492) list_single_2heading_msg_pane_g3

0x4e11,	// (0x00036900) list_single_2heading_msg_pane_g4_ParamLimits

0x4e11,	// (0x00036900) list_single_2heading_msg_pane_g4

0x0003,

0xfc92,	// (0x00041781) list_single_2heading_msg_pane_g_ParamLimits

0xfc92,	// (0x00041781) list_single_2heading_msg_pane_g

0x8a32,	// (0x0003a521) list_single_2heading_msg_pane_t1_ParamLimits

0x8a32,	// (0x0003a521) list_single_2heading_msg_pane_t1

0x8a5a,	// (0x0003a549) list_single_2heading_msg_pane_t2_ParamLimits

0x8a5a,	// (0x0003a549) list_single_2heading_msg_pane_t2

0x8a8e,	// (0x0003a57d) list_single_2heading_msg_pane_t3_ParamLimits

0x8a8e,	// (0x0003a57d) list_single_2heading_msg_pane_t3

0x4e29,	// (0x00036918) list_single_2heading_msg_pane_t4_ParamLimits

0x4e29,	// (0x00036918) list_single_2heading_msg_pane_t4

0x0003,

0xfc9b,	// (0x0004178a) list_single_2heading_msg_pane_t_ParamLimits

0xfc9b,	// (0x0004178a) list_single_2heading_msg_pane_t

0x1fff,	// (0x00033aee) title_pane_g4_ParamLimits

0x1fff,	// (0x00033aee) title_pane_g4

0x6cb7,	// (0x000387a6) title_pane_stacon_g3_ParamLimits

0x6cb7,	// (0x000387a6) title_pane_stacon_g3

0xcc88,	// (0x0003e777) list_single_2graphic_im_pane_g4_ParamLimits

0xcc88,	// (0x0003e777) list_single_2graphic_im_pane_g4

0xaadf,	// (0x0003c5ce) popup_side_volume_key_window_cp

0xb2fc,	// (0x0003cdeb) main_idle_act2_pane_t1

0x802d,	// (0x00039b1c) toolbar_button_pane_g10

0x66d6,	// (0x000381c5) popup_toolbar_window_cp1

0xbabb,	// (0x0003d5aa) clock_nsta_pane_cp_t1

0xbabb,	// (0x0003d5aa) clock_nsta_pane_cp_t2

0x0001,

0xfa9d,	// (0x0004158c) clock_nsta_pane_cp_t

0x7074,	// (0x00038b63) navi_navi_volume_pane_cp2_ParamLimits

0x7080,	// (0x00038b6f) popup_side_volume_key_window_g1_ParamLimits

0x708c,	// (0x00038b7b) popup_side_volume_key_window_g2_ParamLimits

0x7098,	// (0x00038b87) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x000411cc) popup_side_volume_key_window_g_ParamLimits

0x85f1,	// (0x0003a0e0) fep_hwr_aid_pane

0x8698,	// (0x0003a187) bg_fep_hwr_top_pane_g4_ParamLimits

0xc082,	// (0x0003db71) fep_hwr_top_pane_g1_ParamLimits

0xc094,	// (0x0003db83) fep_hwr_top_pane_g2_ParamLimits

0x86b8,	// (0x0003a1a7) fep_hwr_top_pane_g3_ParamLimits

0xfaf2,	// (0x000415e1) fep_hwr_top_pane_g_ParamLimits

0x86cd,	// (0x0003a1bc) fep_hwr_top_text_pane_ParamLimits

0xa8a2,	// (0x0003c391) aid_touch_tab_arrow_arrow_2

0xa8ab,	// (0x0003c39a) aid_touch_tab_arrow_left_2

0x8605,	// (0x0003a0f4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x863c,	// (0x0003a12b) fep_hwr_prediction_pane

0xc1ed,	// (0x0003dcdc) fep_vkb_prediction_pane

0xc2ea,	// (0x0003ddd9) fep_vkb_side_pane_g3_ParamLimits

0xc2ea,	// (0x0003ddd9) fep_vkb_side_pane_g3

0x8848,	// (0x0003a337) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x88b4,	// (0x0003a3a3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x88c1,	// (0x0003a3b0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba1,	// (0x00041690) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8ac7,	// (0x0003a5b6) fep_hwr_prediction_pane_g1

0x8ad1,	// (0x0003a5c0) fep_hwr_prediction_pane_g2

0x8ad9,	// (0x0003a5c8) fep_hwr_prediction_pane_g3

0x8ae1,	// (0x0003a5d0) fep_hwr_prediction_pane_g4

0x0003,

0xfca4,	// (0x00041793) fep_hwr_prediction_pane_g

0xd17b,	// (0x0003ec6a) fep_vkb_prediction_pane_g1

0xd185,	// (0x0003ec74) fep_vkb_prediction_pane_g2

0xd18d,	// (0x0003ec7c) fep_vkb_prediction_pane_g3

0xd195,	// (0x0003ec84) fep_vkb_prediction_pane_g4

0x0003,

0xfcad,	// (0x0004179c) fep_vkb_prediction_pane_g

0x8360,	// (0x00039e4f) slider_set_pane_g3

0x8374,	// (0x00039e63) slider_set_pane_g4

0x838c,	// (0x00039e7b) slider_set_pane_g5

0x8360,	// (0x00039e4f) slider_set_pane_g6

0x83a2,	// (0x00039e91) slider_set_pane_g7

0xaf2e,	// (0x0003ca1d) slider_form_pane_g3

0xaf37,	// (0x0003ca26) slider_form_pane_g4

0xaf3f,	// (0x0003ca2e) slider_form_pane_g5

0xaf2e,	// (0x0003ca1d) slider_form_pane_g6

0xaf47,	// (0x0003ca36) slider_form_pane_g7

0xb5a8,	// (0x0003d097) slider_set_pane_vc_g3

0xb5b1,	// (0x0003d0a0) slider_set_pane_vc_g4

0xb5ba,	// (0x0003d0a9) slider_set_pane_vc_g5

0xb5a8,	// (0x0003d097) slider_set_pane_vc_g6

0xb5c3,	// (0x0003d0b2) slider_set_pane_vc_g7

0xb779,	// (0x0003d268) slider_form_pane_vc_g1

0xb782,	// (0x0003d271) slider_form_pane_vc_g2

0xb78b,	// (0x0003d27a) slider_form_pane_vc_g3

0xb779,	// (0x0003d268) slider_form_pane_vc_g4

0xb794,	// (0x0003d283) slider_form_pane_vc_g5

0x0004,

0xfa6f,	// (0x0004155e) slider_form_pane_vc_g

0x5eb2,	// (0x000379a1) main_idle_act3_pane

0xd19d,	// (0x0003ec8c) ai3_links_pane

0xd1a6,	// (0x0003ec95) popup_ai3_data_window_ParamLimits

0xd1a6,	// (0x0003ec95) popup_ai3_data_window

0x1fe1,	// (0x00033ad0) grid_ai3_links_pane

0xd1be,	// (0x0003ecad) cell_ai3_links_pane_ParamLimits

0xd1be,	// (0x0003ecad) cell_ai3_links_pane

0xd1d6,	// (0x0003ecc5) bg_popup_sub_pane_cp11

0xd1e3,	// (0x0003ecd2) cell_ai3_links_pane_g1

0x1fe1,	// (0x00033ad0) bg_popup_sub_pane_cp12

0xd208,	// (0x0003ecf7) heading_ai3_data_pane

0xd210,	// (0x0003ecff) list_ai3_gene_pane

0xd21c,	// (0x0003ed0b) popup_ai3_data_window_g1

0xd224,	// (0x0003ed13) heading_ai3_data_pane_g1

0xd22c,	// (0x0003ed1b) heading_ai3_data_pane_t1

0xd23a,	// (0x0003ed29) list_double_ai3_gene_pane_ParamLimits

0xd23a,	// (0x0003ed29) list_double_ai3_gene_pane

0xd247,	// (0x0003ed36) list_single_ai3_gene_pane_ParamLimits

0xd247,	// (0x0003ed36) list_single_ai3_gene_pane

0xbfeb,	// (0x0003dada) list_highlight_pane_cp7_ParamLimits

0xbfeb,	// (0x0003dada) list_highlight_pane_cp7

0xd254,	// (0x0003ed43) list_single_a13_gene_pane_t1_ParamLimits

0xd254,	// (0x0003ed43) list_single_a13_gene_pane_t1

0xd26b,	// (0x0003ed5a) list_single_ai3_gene_pane_g1

0xd274,	// (0x0003ed63) list_single_ai3_gene_pane_g2

0x0001,

0xfcb6,	// (0x000417a5) list_single_ai3_gene_pane_g

0xd27c,	// (0x0003ed6b) list_double_ai3_gene_pane_g1_ParamLimits

0xd27c,	// (0x0003ed6b) list_double_ai3_gene_pane_g1

0xd288,	// (0x0003ed77) list_double_ai3_gene_pane_t1_ParamLimits

0xd288,	// (0x0003ed77) list_double_ai3_gene_pane_t1

0xd2a4,	// (0x0003ed93) list_double_ai3_gene_pane_t2_ParamLimits

0xd2a4,	// (0x0003ed93) list_double_ai3_gene_pane_t2

0xd2b9,	// (0x0003eda8) list_double_ai3_gene_pane_t3_ParamLimits

0xd2b9,	// (0x0003eda8) list_double_ai3_gene_pane_t3

0x0002,

0xfcbb,	// (0x000417aa) list_double_ai3_gene_pane_t_ParamLimits

0xfcbb,	// (0x000417aa) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4e07,	// (0x000368f6) aid_size_min_col_2

0xd167,	// (0x0003ec56) aid_size_min_msg_ParamLimits

0xd167,	// (0x0003ec56) aid_size_min_msg

0xc3ea,	// (0x0003ded9) fep_vkb_top_text_pane_g2_ParamLimits

0xc3ea,	// (0x0003ded9) fep_vkb_top_text_pane_g2

0x0001,

0xfb22,	// (0x00041611) fep_vkb_top_text_pane_g_ParamLimits

0xfb22,	// (0x00041611) fep_vkb_top_text_pane_g

0x5eb2,	// (0x000379a1) main_hc_apps_shell_pane

0xd2d6,	// (0x0003edc5) grid_hc_apps_pane_ParamLimits

0xd2d6,	// (0x0003edc5) grid_hc_apps_pane

0xd2e8,	// (0x0003edd7) list_hc_apps_pane

0xd2f0,	// (0x0003eddf) scroll_pane_cp37_ParamLimits

0xd2f0,	// (0x0003eddf) scroll_pane_cp37

0xd2fc,	// (0x0003edeb) cell_hc_apps_pane_ParamLimits

0xd2fc,	// (0x0003edeb) cell_hc_apps_pane

0xd3aa,	// (0x0003ee99) cell_hc_apps_pane_g1_ParamLimits

0xd3aa,	// (0x0003ee99) cell_hc_apps_pane_g1

0xd3da,	// (0x0003eec9) cell_hc_apps_pane_g2_ParamLimits

0xd3da,	// (0x0003eec9) cell_hc_apps_pane_g2

0xd3f6,	// (0x0003eee5) cell_hc_apps_pane_g3_ParamLimits

0xd3f6,	// (0x0003eee5) cell_hc_apps_pane_g3

0x0002,

0xfcc2,	// (0x000417b1) cell_hc_apps_pane_g_ParamLimits

0xfcc2,	// (0x000417b1) cell_hc_apps_pane_g

0xd418,	// (0x0003ef07) cell_hc_apps_pane_t1_ParamLimits

0xd418,	// (0x0003ef07) cell_hc_apps_pane_t1

0x217b,	// (0x00033c6a) grid_highlight_pane_cp10_ParamLimits

0x217b,	// (0x00033c6a) grid_highlight_pane_cp10

0xd458,	// (0x0003ef47) list_single_hc_apps_pane_ParamLimits

0xd458,	// (0x0003ef47) list_single_hc_apps_pane

0xd4bb,	// (0x0003efaa) list_single_hc_apps_pane_g1

0x8ae9,	// (0x0003a5d8) list_single_hc_apps_pane_g2

0x0001,

0xfcc9,	// (0x000417b8) list_single_hc_apps_pane_g

0x8b02,	// (0x0003a5f1) list_single_hc_apps_pane_g2_copy1

0x8b1e,	// (0x0003a60d) list_single_hc_apps_pane_t1

0x2051,	// (0x00033b40) bg_set_opt_pane_cp_ParamLimits

0x61cb,	// (0x00037cba) setting_slider_pane_t1_ParamLimits

0x61e4,	// (0x00037cd3) setting_slider_pane_t2_ParamLimits

0x61fe,	// (0x00037ced) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00041028) setting_slider_pane_t_ParamLimits

0x6216,	// (0x00037d05) slider_set_pane_ParamLimits

0x75ec,	// (0x000390db) control_pane_g5_ParamLimits

0x75ec,	// (0x000390db) control_pane_g5

0xad81,	// (0x0003c870) slider_set_pane_g1_ParamLimits

0x8354,	// (0x00039e43) slider_set_pane_g2_ParamLimits

0x8360,	// (0x00039e4f) slider_set_pane_g3_ParamLimits

0x8374,	// (0x00039e63) slider_set_pane_g4_ParamLimits

0x838c,	// (0x00039e7b) slider_set_pane_g5_ParamLimits

0x8360,	// (0x00039e4f) slider_set_pane_g6_ParamLimits

0x83a2,	// (0x00039e91) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x0004141a) slider_set_pane_g_ParamLimits

0x2b68,	// (0x00034657) navi_icon_text_pane_ParamLimits

0x7cfa,	// (0x000397e9) aid_fill_nsta_2_ParamLimits

0x7d39,	// (0x00039828) aid_touch_tab_arrow_left_ParamLimits

0x7d48,	// (0x00039837) aid_touch_tab_arrow_right_ParamLimits

0x7db5,	// (0x000398a4) clock_nsta_pane_ParamLimits

0xa884,	// (0x0003c373) navi_icon_pane_g1_ParamLimits

0xa890,	// (0x0003c37f) navi_text_pane_t1_ParamLimits

0xbbcb,	// (0x0003d6ba) navi_icon_text_pane_g1_ParamLimits

0xbbd7,	// (0x0003d6c6) navi_icon_text_pane_t1_ParamLimits

0xd4bb,	// (0x0003efaa) list_single_hc_apps_pane_g1_ParamLimits

0x8ae9,	// (0x0003a5d8) list_single_hc_apps_pane_g2_ParamLimits

0xfcc9,	// (0x000417b8) list_single_hc_apps_pane_g_ParamLimits

0x8b02,	// (0x0003a5f1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8b1e,	// (0x0003a60d) list_single_hc_apps_pane_t1_ParamLimits

0x600f,	// (0x00037afe) popup_toolbar2_fixed_window_ParamLimits

0x600f,	// (0x00037afe) popup_toolbar2_fixed_window

0x7c10,	// (0x000396ff) popup_toolbar2_float_window

0x1fe1,	// (0x00033ad0) bg_popup_sub_pane_cp27

0xd4d4,	// (0x0003efc3) grid_toolbar2_float_pane

0x1fe1,	// (0x00033ad0) bg_popup_sub_pane_cp26

0xd4d4,	// (0x0003efc3) grid_toolbar2_fixed_pane

0xd4dc,	// (0x0003efcb) cell_toolbar2_fixed_pane_ParamLimits

0xd4dc,	// (0x0003efcb) cell_toolbar2_fixed_pane

0xd4ec,	// (0x0003efdb) cell_toolbar2_fixed_pane_g1

0x7ae2,	// (0x000395d1) toolbar2_fixed_button_pane

0x99f2,	// (0x0003b4e1) toolbar2_fixed_button_pane_g1

0x9a02,	// (0x0003b4f1) toolbar2_fixed_button_pane_g2

0x99fa,	// (0x0003b4e9) toolbar2_fixed_button_pane_g3

0x9a12,	// (0x0003b501) toolbar2_fixed_button_pane_g4

0x9a0a,	// (0x0003b4f9) toolbar2_fixed_button_pane_g5

0x9a1a,	// (0x0003b509) toolbar2_fixed_button_pane_g6

0x9a22,	// (0x0003b511) toolbar2_fixed_button_pane_g7

0x9a32,	// (0x0003b521) toolbar2_fixed_button_pane_g8

0x9a2a,	// (0x0003b519) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x0004131c) toolbar2_fixed_button_pane_g

0xd4f5,	// (0x0003efe4) cell_toolbar2_float_pane_ParamLimits

0xd4f5,	// (0x0003efe4) cell_toolbar2_float_pane

0xd506,	// (0x0003eff5) cell_toolbar2_float_pane_g1

0x7ae2,	// (0x000395d1) toolbar2_fixed_button_pane_cp

0xc154,	// (0x0003dc43) fep_vkb_accented_list_pane_ParamLimits

0xc154,	// (0x0003dc43) fep_vkb_accented_list_pane

0x8828,	// (0x0003a317) bg_popup_fep_shadow_pane_g9

0x2cc3,	// (0x000347b2) bg_popup_fep_shadow_pane_cp3

0x2520,	// (0x0003400f) list_accented_list_pane

0xd50f,	// (0x0003effe) list_single_accented_list_pane_ParamLimits

0xd50f,	// (0x0003effe) list_single_accented_list_pane

0x2cc3,	// (0x000347b2) list_highlight_pane_cp10

0xd520,	// (0x0003f00f) list_single_accented_list_pane_t1

0x7b60,	// (0x0003964f) popup_slider_window_ParamLimits

0x7b60,	// (0x0003964f) popup_slider_window

0xd15e,	// (0x0003ec4d) aid_indentation_list_msg

0xd5de,	// (0x0003f0cd) bg_popup_window_pane_cp19

0xd646,	// (0x0003f135) popup_slider_window_g1

0xd662,	// (0x0003f151) popup_slider_window_g2

0xd67e,	// (0x0003f16d) popup_slider_window_g3

0x0005,

0xfcce,	// (0x000417bd) popup_slider_window_g

0xd6e4,	// (0x0003f1d3) popup_slider_window_t1

0xd758,	// (0x0003f247) small_volume_slider_vertical_pane

0xc026,	// (0x0003db15) small_volume_slider_vertical_pane_g1

0xc026,	// (0x0003db15) small_volume_slider_vertical_pane_g2

0xd774,	// (0x0003f263) small_volume_slider_vertical_pane_g3

0x0002,

0xfce0,	// (0x000417cf) small_volume_slider_vertical_pane_g

0x5dd5,	// (0x000378c4) area_side_right_pane_ParamLimits

0x5dd5,	// (0x000378c4) area_side_right_pane

0x8b4c,	// (0x0003a63b) aid_size_side_button_ParamLimits

0x8b4c,	// (0x0003a63b) aid_size_side_button

0x8b60,	// (0x0003a64f) grid_sctrl_middle_pane_ParamLimits

0x8b60,	// (0x0003a64f) grid_sctrl_middle_pane

0x8b7f,	// (0x0003a66e) sctrl_sk_bottom_pane

0x8b90,	// (0x0003a67f) sctrl_sk_top_pane

0x8ba2,	// (0x0003a691) aid_touch_sctrl_top

0x8baf,	// (0x0003a69e) bg_sctrl_sk_pane_ParamLimits

0x8baf,	// (0x0003a69e) bg_sctrl_sk_pane

0x8bbd,	// (0x0003a6ac) sctrl_sk_top_pane_g1

0x8bca,	// (0x0003a6b9) sctrl_sk_top_pane_t1

0x8ba2,	// (0x0003a691) aid_touch_sctrl_bottom

0x8baf,	// (0x0003a69e) bg_sctrl_sk_pane_cp_ParamLimits

0x8baf,	// (0x0003a69e) bg_sctrl_sk_pane_cp

0x8be5,	// (0x0003a6d4) sctrl_sk_bottom_pane_g1

0x8bca,	// (0x0003a6b9) sctrl_sk_bottom_pane_t1

0x8bee,	// (0x0003a6dd) cell_sctrl_middle_pane_ParamLimits

0x8bee,	// (0x0003a6dd) cell_sctrl_middle_pane

0x8c09,	// (0x0003a6f8) aid_touch_sctrl_middle_ParamLimits

0x8c09,	// (0x0003a6f8) aid_touch_sctrl_middle

0x8c1b,	// (0x0003a70a) bg_sctrl_middle_pane_ParamLimits

0x8c1b,	// (0x0003a70a) bg_sctrl_middle_pane

0x8848,	// (0x0003a337) cell_sctrl_middle_pane_g1_ParamLimits

0x8848,	// (0x0003a337) cell_sctrl_middle_pane_g1

0x8c29,	// (0x0003a718) cell_sctrl_middle_pane_g2_ParamLimits

0x8c29,	// (0x0003a718) cell_sctrl_middle_pane_g2

0x0001,

0xfcec,	// (0x000417db) cell_sctrl_middle_pane_g_ParamLimits

0xfcec,	// (0x000417db) cell_sctrl_middle_pane_g

0x99f2,	// (0x0003b4e1) bg_sctrl_middle_pane_g1

0x99fa,	// (0x0003b4e9) bg_sctrl_middle_pane_g2

0x9a02,	// (0x0003b4f1) bg_sctrl_middle_pane_g3

0x9a0a,	// (0x0003b4f9) bg_sctrl_middle_pane_g4

0x9a12,	// (0x0003b501) bg_sctrl_middle_pane_g5

0x9a1a,	// (0x0003b509) bg_sctrl_middle_pane_g6

0x9a22,	// (0x0003b511) bg_sctrl_middle_pane_g7

0x9a2a,	// (0x0003b519) bg_sctrl_middle_pane_g8

0x0007,

0xfcf1,	// (0x000417e0) bg_sctrl_middle_pane_g

0x9a32,	// (0x0003b521) bg_sctrl_middle_pane_g8_copy1

0x99f2,	// (0x0003b4e1) bg_sctrl_sk_pane_g1

0x9a02,	// (0x0003b4f1) bg_sctrl_sk_pane_g2

0x99fa,	// (0x0003b4e9) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x0004131c) bg_sctrl_sk_pane_g

0x2349,	// (0x00033e38) aid_size_touch_scroll_bar

0x9a12,	// (0x0003b501) bg_sctrl_sk_pane_g4

0x9a0a,	// (0x0003b4f9) bg_sctrl_sk_pane_g5

0x9a1a,	// (0x0003b509) bg_sctrl_sk_pane_g6

0x9a22,	// (0x0003b511) bg_sctrl_sk_pane_g7

0x9a32,	// (0x0003b521) bg_sctrl_sk_pane_g8

0x9a2a,	// (0x0003b519) bg_sctrl_sk_pane_g9

0x77c9,	// (0x000392b8) popup_fep_china_hwr2_fs_candidate_window

0x77d3,	// (0x000392c2) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x77d3,	// (0x000392c2) popup_fep_china_hwr2_fs_control_window

0x8848,	// (0x0003a337) sctrl_sk_top_pane_g2

0x0001,

0xfce7,	// (0x000417d6) sctrl_sk_top_pane_g

0xd77d,	// (0x0003f26c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd77d,	// (0x0003f26c) aid_fep_china_hwr2_fs_cell

0xd78f,	// (0x0003f27e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd78f,	// (0x0003f27e) bg_popup_fep_shadow_pane_cp4

0xd7a6,	// (0x0003f295) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7a6,	// (0x0003f295) bg_popup_fep_shadow_pane_cp5

0xd7b8,	// (0x0003f2a7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7b8,	// (0x0003f2a7) popup_fep_china_hwr2_fs_control_bar_grid

0xd7c8,	// (0x0003f2b7) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7d0,	// (0x0003f2bf) aid_fep_china_hwr2_fs_candi_cell

0x1fe1,	// (0x00033ad0) bg_popup_fep_shadow_pane_cp6

0xd7da,	// (0x0003f2c9) popup_fep_china_hwr2_fs_candidate_grid

0xd7e4,	// (0x0003f2d3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7e4,	// (0x0003f2d3) cell_fep_china_hwr2_fs_funtion_grid

0xc026,	// (0x0003db15) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7fc,	// (0x0003f2eb) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7fc,	// (0x0003f2eb) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd80a,	// (0x0003f2f9) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd80a,	// (0x0003f2f9) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd02,	// (0x000417f1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd02,	// (0x000417f1) cell_fep_china_hwr2_fs_funtion_grid_g

0xd820,	// (0x0003f30f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd820,	// (0x0003f30f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd835,	// (0x0003f324) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd835,	// (0x0003f324) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd07,	// (0x000417f6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd07,	// (0x000417f6) cell_fep_china_hwr2_fs_funtion_grid_t

0xd851,	// (0x0003f340) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd859,	// (0x0003f348) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd861,	// (0x0003f350) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0c,	// (0x000417fb) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd869,	// (0x0003f358) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd869,	// (0x0003f358) cell_fep_china_hwr2_fs_candidate_grid

0xd882,	// (0x0003f371) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd88a,	// (0x0003f379) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc026,	// (0x0003db15) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc026,	// (0x0003db15) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb27,	// (0x00041616) cell_fep_china_hwr2_fs_candidate_grid_g

0xd892,	// (0x0003f381) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7dc8,	// (0x000398b7) clock_nsta_pane_cp_24_ParamLimits

0x7dc8,	// (0x000398b7) clock_nsta_pane_cp_24

0x7e46,	// (0x00039935) indicator_nsta_pane_cp_24_ParamLimits

0x7e46,	// (0x00039935) indicator_nsta_pane_cp_24

0xa700,	// (0x0003c1ef) heading_pane_g1

0x0001,

0xf892,	// (0x00041381) heading_pane_g

0xb145,	// (0x0003cc34) grid_sct_catagory_button_pane

0xb175,	// (0x0003cc64) scroll_pane_cp5_ParamLimits

0xbc19,	// (0x0003d708) button_value_adjust_pane_cp5_ParamLimits

0xbc19,	// (0x0003d708) button_value_adjust_pane_cp5

0xbcf8,	// (0x0003d7e7) form2_midp_time_pane_ParamLimits

0xd8a0,	// (0x0003f38f) cell_sct_catagory_button_pane_ParamLimits

0xd8a0,	// (0x0003f38f) cell_sct_catagory_button_pane

0xbfeb,	// (0x0003dada) bg_button_pane_cp01_ParamLimits

0xbfeb,	// (0x0003dada) bg_button_pane_cp01

0xc026,	// (0x0003db15) cell_sct_catagory_button_pane_g1

0x7b9f,	// (0x0003968e) popup_tb_extension_window

0xd8b2,	// (0x0003f3a1) aid_size_cell_ext_ParamLimits

0xd8b2,	// (0x0003f3a1) aid_size_cell_ext

0x217b,	// (0x00033c6a) bg_tb_trans_pane_cp1_ParamLimits

0x217b,	// (0x00033c6a) bg_tb_trans_pane_cp1

0xd8d2,	// (0x0003f3c1) grid_tb_ext_pane_ParamLimits

0xd8d2,	// (0x0003f3c1) grid_tb_ext_pane

0xd902,	// (0x0003f3f1) cell_tb_ext_pane_ParamLimits

0xd902,	// (0x0003f3f1) cell_tb_ext_pane

0xd919,	// (0x0003f408) cell_tb_ext_pane_g1_ParamLimits

0xd919,	// (0x0003f408) cell_tb_ext_pane_g1

0xd936,	// (0x0003f425) cell_tb_ext_pane_t1

0x217b,	// (0x00033c6a) list_highlight_pane_cp11_ParamLimits

0x217b,	// (0x00033c6a) list_highlight_pane_cp11

0x602e,	// (0x00037b1d) popup_uni_indicator_window_ParamLimits

0x602e,	// (0x00037b1d) popup_uni_indicator_window

0x2407,	// (0x00033ef6) bg_popup_sub_pane_cp14

0xd952,	// (0x0003f441) list_uniindi_pane

0xd95e,	// (0x0003f44d) uniindi_top_pane

0x217b,	// (0x00033c6a) bg_uniindi_top_pane

0xd97d,	// (0x0003f46c) uniindi_top_pane_g1

0xd993,	// (0x0003f482) uniindi_top_pane_g2

0x0003,

0xfd13,	// (0x00041802) uniindi_top_pane_g

0xd9bd,	// (0x0003f4ac) uniindi_top_pane_t1

0xd9e7,	// (0x0003f4d6) list_single_uniindi_pane_ParamLimits

0xd9e7,	// (0x0003f4d6) list_single_uniindi_pane

0xc026,	// (0x0003db15) bg_uniindi_top_pane_g1

0xd9fa,	// (0x0003f4e9) list_single_uniindi_pane_g1

0xda0d,	// (0x0003f4fc) list_single_uniindi_pane_t1

0x5eb2,	// (0x000379a1) control_bg_pane

0xda32,	// (0x0003f521) bg_sctrl_sk_pane_cp1

0xda3b,	// (0x0003f52a) bg_sctrl_sk_pane_cp2

0xda44,	// (0x0003f533) control_bg_pane_g1

0xda4d,	// (0x0003f53c) control_bg_pane_g2

0x0001,

0xfd1c,	// (0x0004180b) control_bg_pane_g

0xba5f,	// (0x0003d54e) cell_indicator_nsta_pane_g1_ParamLimits

0xba6d,	// (0x0003d55c) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8b,	// (0x0004157a) cell_indicator_nsta_pane_g_ParamLimits

0x4c0f,	// (0x000366fe) form2_midp_time_pane_t1_ParamLimits

0x7733,	// (0x00039222) main_idle_act4_pane_ParamLimits

0x7733,	// (0x00039222) main_idle_act4_pane

0x7b9f,	// (0x0003968e) popup_tb_extension_window_ParamLimits

0xd8f2,	// (0x0003f3e1) tb_ext_find_pane_ParamLimits

0xd8f2,	// (0x0003f3e1) tb_ext_find_pane

0xda56,	// (0x0003f545) ai_gene_pane_1_cp1

0x2d44,	// (0x00034833) ai_gene_pane_2_cp1

0xda5e,	// (0x0003f54d) list_single_idle_plugin_calendar_pane

0xda67,	// (0x0003f556) list_single_idle_plugin_notification_pane

0xda70,	// (0x0003f55f) list_single_idle_plugin_player_pane

0xda79,	// (0x0003f568) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda79,	// (0x0003f568) list_single_idle_plugin_shortcut_pane

0xda9b,	// (0x0003f58a) main_idle_act4_pane_t1

0xdaad,	// (0x0003f59c) main_idle_act4_pane_t2

0x0001,

0xfd21,	// (0x00041810) main_idle_act4_pane_t

0xdabf,	// (0x0003f5ae) middle_sk_idle_act4_pane_ParamLimits

0xdabf,	// (0x0003f5ae) middle_sk_idle_act4_pane

0xdad5,	// (0x0003f5c4) popup_clock_digital_analogue_window_cp2

0xdaef,	// (0x0003f5de) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaef,	// (0x0003f5de) shortcut_wheel_idle_act4_pane

0xc026,	// (0x0003db15) shortcut_wheel_idle_act4_pane_g1

0xc026,	// (0x0003db15) shortcut_wheel_idle_act4_pane_g2

0xc026,	// (0x0003db15) shortcut_wheel_idle_act4_pane_g3

0xc026,	// (0x0003db15) shortcut_wheel_idle_act4_pane_g4

0xc026,	// (0x0003db15) shortcut_wheel_idle_act4_pane_g5

0xdb03,	// (0x0003f5f2) shortcut_wheel_idle_act4_pane_g6

0xdb0b,	// (0x0003f5fa) shortcut_wheel_idle_act4_pane_g7

0xdb13,	// (0x0003f602) shortcut_wheel_idle_act4_pane_g8

0xdb1b,	// (0x0003f60a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd26,	// (0x00041815) shortcut_wheel_idle_act4_pane_g

0xc296,	// (0x0003dd85) middle_sk_idle_act4_pane_g1_ParamLimits

0xc296,	// (0x0003dd85) middle_sk_idle_act4_pane_g1

0xdb7f,	// (0x0003f66e) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb7f,	// (0x0003f66e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd49,	// (0x00041838) middle_sk_idle_act4_pane_g_ParamLimits

0xfd49,	// (0x00041838) middle_sk_idle_act4_pane_g

0xdb8b,	// (0x0003f67a) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb8b,	// (0x0003f67a) middle_sk_idle_act4_pane_t1

0xdba8,	// (0x0003f697) grid_ai_shortcut_pane_ParamLimits

0xdba8,	// (0x0003f697) grid_ai_shortcut_pane

0xdbc1,	// (0x0003f6b0) list_highlight_pane_cp16_ParamLimits

0xdbc1,	// (0x0003f6b0) list_highlight_pane_cp16

0xdbce,	// (0x0003f6bd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbce,	// (0x0003f6bd) list_single_idle_plugin_shortcut_pane_g1

0xdbda,	// (0x0003f6c9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbda,	// (0x0003f6c9) list_single_idle_plugin_shortcut_pane_g2

0xdbf2,	// (0x0003f6e1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbf2,	// (0x0003f6e1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4e,	// (0x0004183d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4e,	// (0x0004183d) list_single_idle_plugin_shortcut_pane_g

0xdc05,	// (0x0003f6f4) cell_ai_shortcut_pane_ParamLimits

0xdc05,	// (0x0003f6f4) cell_ai_shortcut_pane

0xdc29,	// (0x0003f718) cell_ai_shortcut_pane_g1_ParamLimits

0xdc29,	// (0x0003f718) cell_ai_shortcut_pane_g1

0xda56,	// (0x0003f545) ai_gene_pane_1_cp2

0xdc4b,	// (0x0003f73a) ai_gene_pane_2_cp2

0xdc53,	// (0x0003f742) list_highlight_pane_cp15

0xdc5c,	// (0x0003f74b) list_single_idle_plugin_calendar_pane_g1

0xdc53,	// (0x0003f742) list_highlight_pane_cp17

0xdc64,	// (0x0003f753) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc6c,	// (0x0003f75b) list_single_idle_plugin_player_pane_g1

0xb39e,	// (0x0003ce8d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd55,	// (0x00041844) list_single_idle_plugin_player_pane_g

0xdc74,	// (0x0003f763) list_single_idle_plugin_player_pane_t1

0xdc82,	// (0x0003f771) list_single_idle_plugin_player_pane_t2

0xdc90,	// (0x0003f77f) list_single_idle_plugin_player_pane_t3

0xdc9e,	// (0x0003f78d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5a,	// (0x00041849) list_single_idle_plugin_player_pane_t

0xdcac,	// (0x0003f79b) wait_bar_pane_cp15

0xdcb4,	// (0x0003f7a3) grid_ai_notification_pane

0xb39e,	// (0x0003ce8d) list_single_idle_plugin_notification_pane_g1

0xdcbd,	// (0x0003f7ac) cell_ai_notification_pane_ParamLimits

0xdcbd,	// (0x0003f7ac) cell_ai_notification_pane

0xdcca,	// (0x0003f7b9) cell_ai_notification_pane_g1

0xdcd2,	// (0x0003f7c1) cell_ai_notification_pane_t1

0xdce0,	// (0x0003f7cf) tb_ext_find_button_pane

0xdce8,	// (0x0003f7d7) tb_ext_find_pane_g1

0xdcf0,	// (0x0003f7df) tb_ext_find_pane_t1

0x2859,	// (0x00034348) tb_ext_find_button_pane_g1

0xdcfe,	// (0x0003f7ed) tb_ext_find_button_pane_g2

0x0001,

0xfd63,	// (0x00041852) tb_ext_find_button_pane_g

0xda9b,	// (0x0003f58a) main_idle_act4_pane_t1_ParamLimits

0xdaad,	// (0x0003f59c) main_idle_act4_pane_t2_ParamLimits

0xfd21,	// (0x00041810) main_idle_act4_pane_t_ParamLimits

0xdad5,	// (0x0003f5c4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdae3,	// (0x0003f5d2) sat_plugin_idle_act4_pane_ParamLimits

0xdae3,	// (0x0003f5d2) sat_plugin_idle_act4_pane

0xdd07,	// (0x0003f7f6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd07,	// (0x0003f7f6) sat_plugin_idle_act4_pane_t1

0xdd1a,	// (0x0003f809) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd1a,	// (0x0003f809) sat_plugin_idle_act4_pane_t2

0xdd2d,	// (0x0003f81c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd2d,	// (0x0003f81c) sat_plugin_idle_act4_pane_t3

0xdd40,	// (0x0003f82f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd40,	// (0x0003f82f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd68,	// (0x00041857) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd68,	// (0x00041857) sat_plugin_idle_act4_pane_t

0x5f77,	// (0x00037a66) popup_battery_window_ParamLimits

0x5f77,	// (0x00037a66) popup_battery_window

0x217b,	// (0x00033c6a) bg_popup_sub_pane_cp25_ParamLimits

0x217b,	// (0x00033c6a) bg_popup_sub_pane_cp25

0xdd53,	// (0x0003f842) popup_battery_window_g1_ParamLimits

0xdd53,	// (0x0003f842) popup_battery_window_g1

0xdd5f,	// (0x0003f84e) popup_battery_window_t1_ParamLimits

0xdd5f,	// (0x0003f84e) popup_battery_window_t1

0xdd71,	// (0x0003f860) popup_battery_window_t2_ParamLimits

0xdd71,	// (0x0003f860) popup_battery_window_t2

0x0001,

0xfd71,	// (0x00041860) popup_battery_window_t_ParamLimits

0xfd71,	// (0x00041860) popup_battery_window_t

0x7380,	// (0x00038e6f) midp_canvas_pane_ParamLimits

0x73f9,	// (0x00038ee8) midp_keypad_pane_ParamLimits

0x73f9,	// (0x00038ee8) midp_keypad_pane

0x2549,	// (0x00034038) main_midp_pane_ParamLimits

0xbad9,	// (0x0003d5c8) signal_pane_g2_cp_ParamLimits

0xdd8e,	// (0x0003f87d) aid_size_cell_midp_keypad_ParamLimits

0xdd8e,	// (0x0003f87d) aid_size_cell_midp_keypad

0xdda8,	// (0x0003f897) midp_keyp_game_grid_pane_ParamLimits

0xdda8,	// (0x0003f897) midp_keyp_game_grid_pane

0xddc8,	// (0x0003f8b7) midp_keyp_rocker_pane_ParamLimits

0xddc8,	// (0x0003f8b7) midp_keyp_rocker_pane

0xde01,	// (0x0003f8f0) midp_keyp_sk_left_pane_ParamLimits

0xde01,	// (0x0003f8f0) midp_keyp_sk_left_pane

0xde5b,	// (0x0003f94a) midp_keyp_sk_right_pane_ParamLimits

0xde5b,	// (0x0003f94a) midp_keyp_sk_right_pane

0x1fe1,	// (0x00033ad0) bg_button_pane_cp03

0xdeb5,	// (0x0003f9a4) midp_keyp_sk_left_pane_g1

0x1fe1,	// (0x00033ad0) bg_button_pane_cp04

0xdeb5,	// (0x0003f9a4) midp_keyp_sk_right_pane_g1

0xc026,	// (0x0003db15) midp_keyp_rocker_pane_g1

0xdebe,	// (0x0003f9ad) keyp_game_cell_pane_ParamLimits

0xdebe,	// (0x0003f9ad) keyp_game_cell_pane

0x1fe1,	// (0x00033ad0) bg_button_pane_cp02

0xded1,	// (0x0003f9c0) keyp_game_cell_pane_g1

0x5fad,	// (0x00037a9c) popup_fep_vkb2_window_ParamLimits

0x5fad,	// (0x00037a9c) popup_fep_vkb2_window

0x8c47,	// (0x0003a736) aid_size_cell_vkb2_ParamLimits

0x8c47,	// (0x0003a736) aid_size_cell_vkb2

0x8c93,	// (0x0003a782) popup_fep_vkb2_window_g1_ParamLimits

0x8c93,	// (0x0003a782) popup_fep_vkb2_window_g1

0x8cdb,	// (0x0003a7ca) vkb2_area_bottom_pane_ParamLimits

0x8cdb,	// (0x0003a7ca) vkb2_area_bottom_pane

0x8d27,	// (0x0003a816) vkb2_area_keypad_pane_ParamLimits

0x8d27,	// (0x0003a816) vkb2_area_keypad_pane

0x8d69,	// (0x0003a858) vkb2_area_top_pane_ParamLimits

0x8d69,	// (0x0003a858) vkb2_area_top_pane

0x8de8,	// (0x0003a8d7) vkb2_top_entry_pane_ParamLimits

0x8de8,	// (0x0003a8d7) vkb2_top_entry_pane

0x8e12,	// (0x0003a901) vkb2_top_grid_left_pane_ParamLimits

0x8e12,	// (0x0003a901) vkb2_top_grid_left_pane

0x8e31,	// (0x0003a920) vkb2_top_grid_right_pane_ParamLimits

0x8e31,	// (0x0003a920) vkb2_top_grid_right_pane

0x8e50,	// (0x0003a93f) vkb2_cell_keypad_pane_ParamLimits

0x8e50,	// (0x0003a93f) vkb2_cell_keypad_pane

0x8f21,	// (0x0003aa10) vkb2_area_bottom_grid_pane_ParamLimits

0x8f21,	// (0x0003aa10) vkb2_area_bottom_grid_pane

0x8f47,	// (0x0003aa36) vkb2_area_bottom_pane_g1_ParamLimits

0x8f47,	// (0x0003aa36) vkb2_area_bottom_pane_g1

0x8f6b,	// (0x0003aa5a) vkb2_area_bottom_pane_g2_ParamLimits

0x8f6b,	// (0x0003aa5a) vkb2_area_bottom_pane_g2

0x8f99,	// (0x0003aa88) vkb2_area_bottom_pane_g3_ParamLimits

0x8f99,	// (0x0003aa88) vkb2_area_bottom_pane_g3

0x0002,

0xfd76,	// (0x00041865) vkb2_area_bottom_pane_g_ParamLimits

0xfd76,	// (0x00041865) vkb2_area_bottom_pane_g

0x8ffa,	// (0x0003aae9) vkb2_top_cell_left_pane_ParamLimits

0x8ffa,	// (0x0003aae9) vkb2_top_cell_left_pane

0xdee2,	// (0x0003f9d1) vkb2_top_entry_pane_g1_ParamLimits

0xdee2,	// (0x0003f9d1) vkb2_top_entry_pane_g1

0xdef0,	// (0x0003f9df) vkb2_top_entry_pane_t1_ParamLimits

0xdef0,	// (0x0003f9df) vkb2_top_entry_pane_t1

0xdf22,	// (0x0003fa11) vkb2_top_entry_pane_t2_ParamLimits

0xdf22,	// (0x0003fa11) vkb2_top_entry_pane_t2

0xdf54,	// (0x0003fa43) vkb2_top_entry_pane_t3_ParamLimits

0xdf54,	// (0x0003fa43) vkb2_top_entry_pane_t3

0x0002,

0xfd7d,	// (0x0004186c) vkb2_top_entry_pane_t_ParamLimits

0xfd7d,	// (0x0004186c) vkb2_top_entry_pane_t

0x9047,	// (0x0003ab36) vkb2_top_grid_right_pane_g1_ParamLimits

0x9047,	// (0x0003ab36) vkb2_top_grid_right_pane_g1

0x905d,	// (0x0003ab4c) vkb2_top_grid_right_pane_g2_ParamLimits

0x905d,	// (0x0003ab4c) vkb2_top_grid_right_pane_g2

0x9075,	// (0x0003ab64) vkb2_top_grid_right_pane_g3_ParamLimits

0x9075,	// (0x0003ab64) vkb2_top_grid_right_pane_g3

0x908d,	// (0x0003ab7c) vkb2_top_grid_right_pane_g4_ParamLimits

0x908d,	// (0x0003ab7c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd84,	// (0x00041873) vkb2_top_grid_right_pane_g_ParamLimits

0xfd84,	// (0x00041873) vkb2_top_grid_right_pane_g

0x90a3,	// (0x0003ab92) vkb2_top_cell_left_pane_g1

0x90c5,	// (0x0003abb4) vkb2_cell_keypad_pane_g1_ParamLimits

0x90c5,	// (0x0003abb4) vkb2_cell_keypad_pane_g1

0xdf78,	// (0x0003fa67) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf78,	// (0x0003fa67) vkb2_cell_keypad_pane_t1

0x90d3,	// (0x0003abc2) vkb2_cell_bottom_grid_pane_ParamLimits

0x90d3,	// (0x0003abc2) vkb2_cell_bottom_grid_pane

0x910c,	// (0x0003abfb) vkb2_cell_bottom_grid_pane_g1

0xdb23,	// (0x0003f612) aid_call2_pane_cp02

0xdb2b,	// (0x0003f61a) aid_call_pane_cp02

0xdb33,	// (0x0003f622) clock_digital_number_pane_cp10

0xdb3b,	// (0x0003f62a) clock_digital_number_pane_cp11

0xdb43,	// (0x0003f632) clock_digital_number_pane_cp12

0xdb4b,	// (0x0003f63a) clock_digital_number_pane_cp13

0xdb53,	// (0x0003f642) clock_digital_separator_pane_cp10

0x2859,	// (0x00034348) popup_clock_digital_analogue_window_cp2_g1

0x2859,	// (0x00034348) popup_clock_digital_analogue_window_cp2_g2

0xdb5b,	// (0x0003f64a) popup_clock_digital_analogue_window_cp2_g3

0x2859,	// (0x00034348) popup_clock_digital_analogue_window_cp2_g4

0xdb5b,	// (0x0003f64a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd39,	// (0x00041828) popup_clock_digital_analogue_window_cp2_g

0xdb63,	// (0x0003f652) popup_clock_digital_analogue_window_cp2_t1

0xdb71,	// (0x0003f660) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd44,	// (0x00041833) popup_clock_digital_analogue_window_cp2_t

0xc026,	// (0x0003db15) clock_digital_number_pane_cp10_g1

0xc026,	// (0x0003db15) clock_digital_number_pane_cp10_g2

0x0001,

0xfb27,	// (0x00041616) clock_digital_number_pane_cp10_g

0xc026,	// (0x0003db15) clock_digital_separator_pane_cp10_g1

0xc026,	// (0x0003db15) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb27,	// (0x00041616) clock_digital_separator_pane_cp10_g

0xd99f,	// (0x0003f48e) uniindi_top_pane_g3

0xd9b0,	// (0x0003f49f) uniindi_top_pane_g4

0x8edb,	// (0x0003a9ca) vkb2_row_keypad_pane_ParamLimits

0x8edb,	// (0x0003a9ca) vkb2_row_keypad_pane

0x912c,	// (0x0003ac1b) vkb2_cell_t_keypad_pane_ParamLimits

0x912c,	// (0x0003ac1b) vkb2_cell_t_keypad_pane

0x913c,	// (0x0003ac2b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x913c,	// (0x0003ac2b) vkb2_cell_t_keypad_pane_cp08

0x914f,	// (0x0003ac3e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x914f,	// (0x0003ac3e) vkb2_cell_t_keypad_pane_cp09

0x9163,	// (0x0003ac52) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9163,	// (0x0003ac52) vkb2_cell_t_keypad_pane_cp01

0x9174,	// (0x0003ac63) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9174,	// (0x0003ac63) vkb2_cell_t_keypad_pane_cp02

0x9185,	// (0x0003ac74) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9185,	// (0x0003ac74) vkb2_cell_t_keypad_pane_cp03

0x9196,	// (0x0003ac85) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9196,	// (0x0003ac85) vkb2_cell_t_keypad_pane_cp04

0x91a7,	// (0x0003ac96) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91a7,	// (0x0003ac96) vkb2_cell_t_keypad_pane_cp05

0x91b8,	// (0x0003aca7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x91b8,	// (0x0003aca7) vkb2_cell_t_keypad_pane_cp06

0x91c9,	// (0x0003acb8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x91c9,	// (0x0003acb8) vkb2_cell_t_keypad_pane_cp07

0x91da,	// (0x0003acc9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x91da,	// (0x0003acc9) vkb2_cell_t_keypad_pane_cp10

0x8848,	// (0x0003a337) vkb2_cell_t_keypad_pane_g1

0xdf8f,	// (0x0003fa7e) vkb2_cell_t_keypad_pane_t1

0x5eb2,	// (0x000379a1) popup_grid_graphic2_window

0xdfa1,	// (0x0003fa90) aid_size_cell_graphic2_ParamLimits

0xdfa1,	// (0x0003fa90) aid_size_cell_graphic2

0xdfd9,	// (0x0003fac8) bg_popup_window_pane_cp21_ParamLimits

0xdfd9,	// (0x0003fac8) bg_popup_window_pane_cp21

0xdfe7,	// (0x0003fad6) graphic2_pages_pane_ParamLimits

0xdfe7,	// (0x0003fad6) graphic2_pages_pane

0xe02d,	// (0x0003fb1c) grid_graphic2_control_pane_ParamLimits

0xe02d,	// (0x0003fb1c) grid_graphic2_control_pane

0xe06b,	// (0x0003fb5a) grid_graphic2_pane_ParamLimits

0xe06b,	// (0x0003fb5a) grid_graphic2_pane

0xe0df,	// (0x0003fbce) cell_graphic2_pane

0x5eb2,	// (0x000379a1) main_comp_mode_pane

0xd210,	// (0x0003ecff) list_ai3_gene_pane_ParamLimits

0xd5de,	// (0x0003f0cd) bg_popup_window_pane_cp19_ParamLimits

0xd5ea,	// (0x0003f0d9) bg_touch_area_indi_pane_ParamLimits

0xd5ea,	// (0x0003f0d9) bg_touch_area_indi_pane

0xd600,	// (0x0003f0ef) bg_touch_area_indi_pane_cp01_ParamLimits

0xd600,	// (0x0003f0ef) bg_touch_area_indi_pane_cp01

0xd616,	// (0x0003f105) bg_touch_area_indi_pane_cp02_ParamLimits

0xd616,	// (0x0003f105) bg_touch_area_indi_pane_cp02

0xd62c,	// (0x0003f11b) bg_touch_area_indi_pane_cp03_ParamLimits

0xd62c,	// (0x0003f11b) bg_touch_area_indi_pane_cp03

0xd646,	// (0x0003f135) popup_slider_window_g1_ParamLimits

0xd662,	// (0x0003f151) popup_slider_window_g2_ParamLimits

0xd67e,	// (0x0003f16d) popup_slider_window_g3_ParamLimits

0xfcce,	// (0x000417bd) popup_slider_window_g_ParamLimits

0xd6e4,	// (0x0003f1d3) popup_slider_window_t1_ParamLimits

0xd758,	// (0x0003f247) small_volume_slider_vertical_pane_ParamLimits

0xe0df,	// (0x0003fbce) cell_graphic2_pane_ParamLimits

0xe12e,	// (0x0003fc1d) bg_button_pane_cp10_ParamLimits

0xe12e,	// (0x0003fc1d) bg_button_pane_cp10

0xe141,	// (0x0003fc30) bg_button_pane_cp11_ParamLimits

0xe141,	// (0x0003fc30) bg_button_pane_cp11

0xe154,	// (0x0003fc43) graphic2_pages_pane_g1_ParamLimits

0xe154,	// (0x0003fc43) graphic2_pages_pane_g1

0xe16f,	// (0x0003fc5e) graphic2_pages_pane_g2_ParamLimits

0xe16f,	// (0x0003fc5e) graphic2_pages_pane_g2

0x0001,

0xfd92,	// (0x00041881) graphic2_pages_pane_g_ParamLimits

0xfd92,	// (0x00041881) graphic2_pages_pane_g

0xe187,	// (0x0003fc76) graphic2_pages_pane_t1_ParamLimits

0xe187,	// (0x0003fc76) graphic2_pages_pane_t1

0xe19f,	// (0x0003fc8e) cell_graphic2_control_pane_ParamLimits

0xe19f,	// (0x0003fc8e) cell_graphic2_control_pane

0xe1bd,	// (0x0003fcac) cell_graphic2_pane_g1_ParamLimits

0xe1bd,	// (0x0003fcac) cell_graphic2_pane_g1

0xe1ca,	// (0x0003fcb9) cell_graphic2_pane_g2_ParamLimits

0xe1ca,	// (0x0003fcb9) cell_graphic2_pane_g2

0xe1d7,	// (0x0003fcc6) cell_graphic2_pane_g3_ParamLimits

0xe1d7,	// (0x0003fcc6) cell_graphic2_pane_g3

0xe1e4,	// (0x0003fcd3) cell_graphic2_pane_g4_ParamLimits

0xe1e4,	// (0x0003fcd3) cell_graphic2_pane_g4

0xe1f1,	// (0x0003fce0) cell_graphic2_pane_g5_ParamLimits

0xe1f1,	// (0x0003fce0) cell_graphic2_pane_g5

0x0004,

0xfd97,	// (0x00041886) cell_graphic2_pane_g_ParamLimits

0xfd97,	// (0x00041886) cell_graphic2_pane_g

0xe20a,	// (0x0003fcf9) cell_graphic2_pane_t1_ParamLimits

0xe20a,	// (0x0003fcf9) cell_graphic2_pane_t1

0x9a7e,	// (0x0003b56d) grid_highlight_pane_cp11_ParamLimits

0x9a7e,	// (0x0003b56d) grid_highlight_pane_cp11

0x217b,	// (0x00033c6a) bg_button_pane_cp05

0xe240,	// (0x0003fd2f) cell_graphic2_control_pane_g1

0xc026,	// (0x0003db15) bg_touch_area_indi_pane_g1

0xe268,	// (0x0003fd57) aid_cmod_rocker_key_size

0xe272,	// (0x0003fd61) aid_cmode_itu_key_size

0xe27c,	// (0x0003fd6b) main_cmode_video_pane

0xe286,	// (0x0003fd75) main_comp_mode_itu_pane

0xe292,	// (0x0003fd81) main_comp_mode_rocker_pane

0xe29e,	// (0x0003fd8d) cell_cmode_rocker_pane_ParamLimits

0xe29e,	// (0x0003fd8d) cell_cmode_rocker_pane

0xe2b0,	// (0x0003fd9f) cell_cmode_itu_pane_ParamLimits

0xe2b0,	// (0x0003fd9f) cell_cmode_itu_pane

0x2407,	// (0x00033ef6) bg_button_pane_cp06_ParamLimits

0x2407,	// (0x00033ef6) bg_button_pane_cp06

0xc296,	// (0x0003dd85) cell_cmode_rocker_pane_g1_ParamLimits

0xc296,	// (0x0003dd85) cell_cmode_rocker_pane_g1

0xd7fc,	// (0x0003f2eb) cell_cmode_rocker_pane_g2_ParamLimits

0xd7fc,	// (0x0003f2eb) cell_cmode_rocker_pane_g2

0x0001,

0xfda7,	// (0x00041896) cell_cmode_rocker_pane_g_ParamLimits

0xfda7,	// (0x00041896) cell_cmode_rocker_pane_g

0x1fe1,	// (0x00033ad0) bg_button_pane_cp07

0xe2c5,	// (0x0003fdb4) cell_cmode_itu_pane_g1

0xe2ce,	// (0x0003fdbd) cell_cmode_itu_pane_t1

0xe2dc,	// (0x0003fdcb) cell_cmode_itu_pane_t2

0x0001,

0xfdac,	// (0x0004189b) cell_cmode_itu_pane_t

0xda22,	// (0x0003f511) aid_touch_ctrl_left

0xda2a,	// (0x0003f519) aid_touch_ctrl_right

0x1fe1,	// (0x00033ad0) compa_mode_pane

0xe2ea,	// (0x0003fdd9) aid_cmod_rocker_key_size_cp

0xe2f4,	// (0x0003fde3) aid_cmode_itu_key_size_cp

0xe2fe,	// (0x0003fded) compa_mode_pane_g1

0xe306,	// (0x0003fdf5) compa_mode_pane_g2

0xe30e,	// (0x0003fdfd) compa_mode_pane_g3

0x0002,

0xfdb1,	// (0x000418a0) compa_mode_pane_g

0xe316,	// (0x0003fe05) main_comp_mode_itu_pane_cp

0xe31e,	// (0x0003fe0d) main_comp_mode_rocker_pane_cp

0xe326,	// (0x0003fe15) cell_cmode_itu_pane_cp_ParamLimits

0xe326,	// (0x0003fe15) cell_cmode_itu_pane_cp

0xe33b,	// (0x0003fe2a) cell_cmode_rocker_pane_cp_ParamLimits

0xe33b,	// (0x0003fe2a) cell_cmode_rocker_pane_cp

0x2407,	// (0x00033ef6) bg_button_pane_cp06_cp_ParamLimits

0x2407,	// (0x00033ef6) bg_button_pane_cp06_cp

0xc296,	// (0x0003dd85) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc296,	// (0x0003dd85) cell_cmode_rocker_pane_g1_cp

0xc026,	// (0x0003db15) cell_cmode_rocker_pane_g2_cp

0x1fe1,	// (0x00033ad0) bg_button_pane_cp07_cp

0xe34d,	// (0x0003fe3c) cell_cmode_itu_pane_g1_cp

0xe356,	// (0x0003fe45) cell_cmode_itu_pane_t1_cp

0xe356,	// (0x0003fe45) cell_cmode_itu_pane_t2_cp

0xaf1b,	// (0x0003ca0a) settings_code_pane_cp2

0x2051,	// (0x00033b40) bg_popup_window_pane_cp3_ParamLimits

0x2294,	// (0x00033d83) heading_pane_cp3_ParamLimits

0x22a3,	// (0x00033d92) listscroll_popup_graphic_pane_ParamLimits

0x85f1,	// (0x0003a0e0) fep_hwr_aid_pane_ParamLimits

0x8ba2,	// (0x0003a691) aid_touch_sctrl_top_ParamLimits

0x8bbd,	// (0x0003a6ac) sctrl_sk_top_pane_g1_ParamLimits

0x8848,	// (0x0003a337) sctrl_sk_top_pane_g2_ParamLimits

0xfce7,	// (0x000417d6) sctrl_sk_top_pane_g_ParamLimits

0x8bca,	// (0x0003a6b9) sctrl_sk_top_pane_t1_ParamLimits

0x8ba2,	// (0x0003a691) aid_touch_sctrl_bottom_ParamLimits

0x8bca,	// (0x0003a6b9) sctrl_sk_bottom_pane_t1_ParamLimits

0xd96b,	// (0x0003f45a) aid_area_touch_clock

0x8daf,	// (0x0003a89e) aid_vkb2_area_top_pane_cell_ParamLimits

0x8daf,	// (0x0003a89e) aid_vkb2_area_top_pane_cell

0x8efd,	// (0x0003a9ec) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8efd,	// (0x0003a9ec) aid_vkb2_area_bottom_pane_cell

0xdeda,	// (0x0003f9c9) popup_char_count_window

0xe364,	// (0x0003fe53) popup_char_count_window_g1

0xe36d,	// (0x0003fe5c) popup_char_count_window_g2

0xe376,	// (0x0003fe65) popup_char_count_window_g3

0x0002,

0xfdb8,	// (0x000418a7) popup_char_count_window_g

0xe37f,	// (0x0003fe6e) popup_char_count_window_t1

0x8c71,	// (0x0003a760) popup_fep_char_preview_window_ParamLimits

0x8c71,	// (0x0003a760) popup_fep_char_preview_window

0x8dcd,	// (0x0003a8bc) vkb2_top_candi_pane_ParamLimits

0x8dcd,	// (0x0003a8bc) vkb2_top_candi_pane

0xe38d,	// (0x0003fe7c) cell_vkb2_top_candi_pane_ParamLimits

0xe38d,	// (0x0003fe7c) cell_vkb2_top_candi_pane

0x91ef,	// (0x0003acde) bg_popup_fep_char_preview_window_ParamLimits

0x91ef,	// (0x0003acde) bg_popup_fep_char_preview_window

0x91fd,	// (0x0003acec) popup_fep_char_preview_window_t1_ParamLimits

0x91fd,	// (0x0003acec) popup_fep_char_preview_window_t1

0xe3d7,	// (0x0003fec6) bg_popup_fep_char_preview_window_g1

0xe3df,	// (0x0003fece) bg_popup_fep_char_preview_window_g2

0xe3e7,	// (0x0003fed6) bg_popup_fep_char_preview_window_g3

0xe3ef,	// (0x0003fede) bg_popup_fep_char_preview_window_g4

0xe3f7,	// (0x0003fee6) bg_popup_fep_char_preview_window_g5

0xe3ff,	// (0x0003feee) bg_popup_fep_char_preview_window_g6

0xe407,	// (0x0003fef6) bg_popup_fep_char_preview_window_g7

0xe40f,	// (0x0003fefe) bg_popup_fep_char_preview_window_g8

0xe417,	// (0x0003ff06) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbf,	// (0x000418ae) bg_popup_fep_char_preview_window_g

0x8848,	// (0x0003a337) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8848,	// (0x0003a337) cell_vkb2_top_candi_pane_g1

0x8856,	// (0x0003a345) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8856,	// (0x0003a345) cell_vkb2_top_candi_pane_g2

0xc5ad,	// (0x0003e09c) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5ad,	// (0x0003e09c) cell_vkb2_top_candi_pane_g3

0x923f,	// (0x0003ad2e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x923f,	// (0x0003ad2e) cell_vkb2_top_candi_pane_g4

0xc797,	// (0x0003e286) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc797,	// (0x0003e286) cell_vkb2_top_candi_pane_g5

0x9260,	// (0x0003ad4f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9260,	// (0x0003ad4f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd4,	// (0x000418c3) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd4,	// (0x000418c3) cell_vkb2_top_candi_pane_g

0x926e,	// (0x0003ad5d) cell_vkb2_top_candi_pane_t1

0x8340,	// (0x00039e2f) aid_size_touch_slider_mark_ParamLimits

0x8340,	// (0x00039e2f) aid_size_touch_slider_mark

0xe01d,	// (0x0003fb0c) grid_graphic2_catg_pane_ParamLimits

0xe01d,	// (0x0003fb0c) grid_graphic2_catg_pane

0xe0bb,	// (0x0003fbaa) popup_grid_graphic2_window_t1_ParamLimits

0xe0bb,	// (0x0003fbaa) popup_grid_graphic2_window_t1

0xe0cd,	// (0x0003fbbc) popup_grid_graphic2_window_t2_ParamLimits

0xe0cd,	// (0x0003fbbc) popup_grid_graphic2_window_t2

0x0001,

0xfd8d,	// (0x0004187c) popup_grid_graphic2_window_t_ParamLimits

0xfd8d,	// (0x0004187c) popup_grid_graphic2_window_t

0x217b,	// (0x00033c6a) bg_button_pane_cp05_ParamLimits

0xe240,	// (0x0003fd2f) cell_graphic2_control_pane_g1_ParamLimits

0xe41f,	// (0x0003ff0e) cell_graphic2_catg_pane_ParamLimits

0xe41f,	// (0x0003ff0e) cell_graphic2_catg_pane

0x1fe1,	// (0x00033ad0) bg_button_pane_cp12

0xe431,	// (0x0003ff20) cell_graphic2_catg_pane_g1

0xd936,	// (0x0003f425) cell_tb_ext_pane_t1_ParamLimits

0x901a,	// (0x0003ab09) vkb2_top_cell_right_narrow_pane_ParamLimits

0x901a,	// (0x0003ab09) vkb2_top_cell_right_narrow_pane

0x9032,	// (0x0003ab21) vkb2_top_cell_right_wide_pane_ParamLimits

0x9032,	// (0x0003ab21) vkb2_top_cell_right_wide_pane

0x85e3,	// (0x0003a0d2) bg_vkb2_func_pane_ParamLimits

0x85e3,	// (0x0003a0d2) bg_vkb2_func_pane

0x90a3,	// (0x0003ab92) vkb2_top_cell_left_pane_g1_ParamLimits

0x85e3,	// (0x0003a0d2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x85e3,	// (0x0003a0d2) bg_vkb2_fuc_pane_cp03

0x910c,	// (0x0003abfb) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99fa,	// (0x0003b4e9) bg_vkb2_func_pane_g1

0x9a02,	// (0x0003b4f1) bg_vkb2_func_pane_g2

0x9a12,	// (0x0003b501) bg_vkb2_func_pane_g3

0x9a0a,	// (0x0003b4f9) bg_vkb2_func_pane_g4

0x9a1a,	// (0x0003b509) bg_vkb2_func_pane_g5

0x9a22,	// (0x0003b511) bg_vkb2_func_pane_g6

0x9a2a,	// (0x0003b519) bg_vkb2_func_pane_g7

0x9a32,	// (0x0003b521) bg_vkb2_func_pane_g8

0x99f2,	// (0x0003b4e1) bg_vkb2_func_pane_g9

0x0008,

0xfde1,	// (0x000418d0) bg_vkb2_func_pane_g

0x85e3,	// (0x0003a0d2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x85e3,	// (0x0003a0d2) bg_vkb2_fuc_pane_cp01

0x90a3,	// (0x0003ab92) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x90a3,	// (0x0003ab92) vkb2_top_cell_right_wide_pane_g1

0x85e3,	// (0x0003a0d2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x85e3,	// (0x0003a0d2) bg_vkb2_fuc_pane_cp02

0x928d,	// (0x0003ad7c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x928d,	// (0x0003ad7c) vkb2_top_cell_right_narrow_pane_g1

0xd558,	// (0x0003f047) aid_touch_area_decrease_ParamLimits

0xd558,	// (0x0003f047) aid_touch_area_decrease

0xd57c,	// (0x0003f06b) aid_touch_area_increase_ParamLimits

0xd57c,	// (0x0003f06b) aid_touch_area_increase

0xd594,	// (0x0003f083) aid_touch_area_mute_ParamLimits

0xd594,	// (0x0003f083) aid_touch_area_mute

0xd5b0,	// (0x0003f09f) aid_touch_area_slider_ParamLimits

0xd5b0,	// (0x0003f09f) aid_touch_area_slider

0xd69a,	// (0x0003f189) popup_slider_window_g4_ParamLimits

0xd69a,	// (0x0003f189) popup_slider_window_g4

0xd6b2,	// (0x0003f1a1) popup_slider_window_g5_ParamLimits

0xd6b2,	// (0x0003f1a1) popup_slider_window_g5

0xd6d4,	// (0x0003f1c3) popup_slider_window_g6_ParamLimits

0xd6d4,	// (0x0003f1c3) popup_slider_window_g6

0xd712,	// (0x0003f201) popup_slider_window_t2_ParamLimits

0xd712,	// (0x0003f201) popup_slider_window_t2

0x0001,

0xfcdb,	// (0x000417ca) popup_slider_window_t_ParamLimits

0xfcdb,	// (0x000417ca) popup_slider_window_t

0xd72a,	// (0x0003f219) slider_pane_ParamLimits

0xd72a,	// (0x0003f219) slider_pane

0xe43a,	// (0x0003ff29) slider_pane_g1_ParamLimits

0xe43a,	// (0x0003ff29) slider_pane_g1

0xe44e,	// (0x0003ff3d) slider_pane_g2_ParamLimits

0xe44e,	// (0x0003ff3d) slider_pane_g2

0xe464,	// (0x0003ff53) slider_pane_g3_ParamLimits

0xe464,	// (0x0003ff53) slider_pane_g3

0x0003,

0xfdf4,	// (0x000418e3) slider_pane_g_ParamLimits

0xfdf4,	// (0x000418e3) slider_pane_g

0x7bfb,	// (0x000396ea) popup_tb_float_extension_window_ParamLimits

0x7bfb,	// (0x000396ea) popup_tb_float_extension_window

0xe490,	// (0x0003ff7f) aid_size_cell_tb_float_ext

0x1fe1,	// (0x00033ad0) bg_popup_sub_window_cp28

0xe49c,	// (0x0003ff8b) grid_tb_float_ext_pane

0xe4a6,	// (0x0003ff95) cell_tb_float_ext_pane_ParamLimits

0xe4a6,	// (0x0003ff95) cell_tb_float_ext_pane

0xe4c0,	// (0x0003ffaf) cell_tb_float_ext_pane_g1

0xe4c9,	// (0x0003ffb8) grid_highlight_pane_cp12

0x8732,	// (0x0003a221) cell_last_hwr_side_pane_ParamLimits

0x8732,	// (0x0003a221) cell_last_hwr_side_pane

0xc026,	// (0x0003db15) cell_last_hwr_side_pane_g1

0xe4d2,	// (0x0003ffc1) cell_last_hwr_side_pane_g2

0x0001,

0xfdfd,	// (0x000418ec) cell_last_hwr_side_pane_g

0x8fc9,	// (0x0003aab8) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8fc9,	// (0x0003aab8) vkb2_area_bottom_space_btn_pane

0x8848,	// (0x0003a337) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf8f,	// (0x0003fa7e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x926e,	// (0x0003ad5d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x92ad,	// (0x0003ad9c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x92ad,	// (0x0003ad9c) vkb2_area_bottom_space_btn_pane_g1

0x92e7,	// (0x0003add6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x92e7,	// (0x0003add6) vkb2_area_bottom_space_btn_pane_g2

0x931d,	// (0x0003ae0c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x931d,	// (0x0003ae0c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe02,	// (0x000418f1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe02,	// (0x000418f1) vkb2_area_bottom_space_btn_pane_g

0x86a6,	// (0x0003a195) cel_fep_hwr_func_pane_ParamLimits

0x86a6,	// (0x0003a195) cel_fep_hwr_func_pane

0x86e2,	// (0x0003a1d1) cell_hwr_side_button_pane_ParamLimits

0x86e2,	// (0x0003a1d1) cell_hwr_side_button_pane

0xd96b,	// (0x0003f45a) aid_area_touch_clock_ParamLimits

0x217b,	// (0x00033c6a) bg_uniindi_top_pane_ParamLimits

0xd97d,	// (0x0003f46c) uniindi_top_pane_g1_ParamLimits

0xd993,	// (0x0003f482) uniindi_top_pane_g2_ParamLimits

0xd99f,	// (0x0003f48e) uniindi_top_pane_g3_ParamLimits

0xd9b0,	// (0x0003f49f) uniindi_top_pane_g4_ParamLimits

0xfd13,	// (0x00041802) uniindi_top_pane_g_ParamLimits

0xd9bd,	// (0x0003f4ac) uniindi_top_pane_t1_ParamLimits

0x217b,	// (0x00033c6a) bg_vkb2_func_pane_cp01_ParamLimits

0x217b,	// (0x00033c6a) bg_vkb2_func_pane_cp01

0xe4db,	// (0x0003ffca) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4db,	// (0x0003ffca) cel_fep_hwr_func_pane_g1

0x217b,	// (0x00033c6a) bg_vkb2_func_pane_cp02_ParamLimits

0x217b,	// (0x00033c6a) bg_vkb2_func_pane_cp02

0xe4db,	// (0x0003ffca) cell_hwr_side_button_pane_g1_ParamLimits

0xe4db,	// (0x0003ffca) cell_hwr_side_button_pane_g1

0x9876,	// (0x0003b365) status_pane_g4_ParamLimits

0x9876,	// (0x0003b365) status_pane_g4

0x9890,	// (0x0003b37f) status_pane_t1

0xbd61,	// (0x0003d850) form2_midp_gauge_slider_cont_pane

0xbd69,	// (0x0003d858) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd7b,	// (0x0003d86a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd8d,	// (0x0003d87c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfada,	// (0x000415c9) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd9f,	// (0x0003d88e) form2_midp_slider_pane_ParamLimits

0x8c39,	// (0x0003a728) aid_size_cell_func_vkb2_ParamLimits

0x8c39,	// (0x0003a728) aid_size_cell_func_vkb2

0xe47c,	// (0x0003ff6b) slider_pane_g4_ParamLimits

0xe47c,	// (0x0003ff6b) slider_pane_g4

0x9367,	// (0x0003ae56) form2_midp_gauge_slider_pane_t2_cp01

0x9375,	// (0x0003ae64) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9375,	// (0x0003ae64) form2_midp_gauge_slider_pane_t3_cp01

0x9392,	// (0x0003ae81) form2_midp_slider_pane_cp01

0x1fe1,	// (0x00033ad0) navi_smil_pane

0xe514,	// (0x00040003) navi_smil_pane_g1

0xe51c,	// (0x0004000b) navi_smil_pane_t1

0xe4e9,	// (0x0003ffd8) form2_midp_slider_pane_g1

0xe4f2,	// (0x0003ffe1) form2_midp_slider_pane_g2

0xe4fa,	// (0x0003ffe9) form2_midp_slider_pane_g3

0xe4e9,	// (0x0003ffd8) form2_midp_slider_pane_g4

0xe502,	// (0x0003fff1) form2_midp_slider_pane_g5

0x0004,

0xfe0b,	// (0x000418fa) form2_midp_slider_pane_g

0x9357,	// (0x0003ae46) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9357,	// (0x0003ae46) vkb2_area_bottom_space_btn_pane_g4

0x7e82,	// (0x00039971) lc0_navi_pane_ParamLimits

0x7e82,	// (0x00039971) lc0_navi_pane

0x7ef8,	// (0x000399e7) lc0_stat_indi_pane_ParamLimits

0x7ef8,	// (0x000399e7) lc0_stat_indi_pane

0x7f0f,	// (0x000399fe) ls0_title_pane_ParamLimits

0x7f0f,	// (0x000399fe) ls0_title_pane

0x2407,	// (0x00033ef6) bg_popup_sub_pane_cp14_ParamLimits

0xd952,	// (0x0003f441) list_uniindi_pane_ParamLimits

0xd95e,	// (0x0003f44d) uniindi_top_pane_ParamLimits

0xd9fa,	// (0x0003f4e9) list_single_uniindi_pane_g1_ParamLimits

0xda0d,	// (0x0003f4fc) list_single_uniindi_pane_t1_ParamLimits

0x939b,	// (0x0003ae8a) lc0_stat_clock_pane_ParamLimits

0x939b,	// (0x0003ae8a) lc0_stat_clock_pane

0xe52a,	// (0x00040019) lc0_stat_indi_pane_g1_ParamLimits

0xe52a,	// (0x00040019) lc0_stat_indi_pane_g1

0xe537,	// (0x00040026) lc0_stat_indi_pane_g2_ParamLimits

0xe537,	// (0x00040026) lc0_stat_indi_pane_g2

0x0001,

0xfe16,	// (0x00041905) lc0_stat_indi_pane_g_ParamLimits

0xfe16,	// (0x00041905) lc0_stat_indi_pane_g

0x93a8,	// (0x0003ae97) lc0_uni_indicator_pane_ParamLimits

0x93a8,	// (0x0003ae97) lc0_uni_indicator_pane

0xe544,	// (0x00040033) ls0_title_pane_g1_ParamLimits

0xe544,	// (0x00040033) ls0_title_pane_g1

0xe558,	// (0x00040047) ls0_title_pane_t1_ParamLimits

0xe558,	// (0x00040047) ls0_title_pane_t1

0x93b5,	// (0x0003aea4) lc0_uni_indicator_pane_g1_ParamLimits

0x93b5,	// (0x0003aea4) lc0_uni_indicator_pane_g1

0xe58e,	// (0x0004007d) lc0_stat_clock_pane_t1

0x5eb2,	// (0x000379a1) main_ai5_pane

0xe59c,	// (0x0004008b) ai5_sk_pane_ParamLimits

0xe59c,	// (0x0004008b) ai5_sk_pane

0xe5a9,	// (0x00040098) cell_ai5_widget_pane_ParamLimits

0xe5a9,	// (0x00040098) cell_ai5_widget_pane

0xe669,	// (0x00040158) aid_size_cell_widget_grid

0xe677,	// (0x00040166) bg_ai5_widget_pane_ParamLimits

0xe677,	// (0x00040166) bg_ai5_widget_pane

0xe6f3,	// (0x000401e2) cell_ai5_widget_pane_g2

0xe707,	// (0x000401f6) cell_ai5_widget_pane_g3

0xe721,	// (0x00040210) cell_ai5_widget_pane_g4

0xe731,	// (0x00040220) cell_ai5_widget_pane_g5

0xe741,	// (0x00040230) cell_ai5_widget_pane_g6

0xe74d,	// (0x0004023c) cell_ai5_widget_pane_g7

0xe7b9,	// (0x000402a8) cell_ai5_widget_pane_t1_ParamLimits

0xe7b9,	// (0x000402a8) cell_ai5_widget_pane_t1

0xe7d6,	// (0x000402c5) cell_ai5_widget_pane_t2_ParamLimits

0xe7d6,	// (0x000402c5) cell_ai5_widget_pane_t2

0xe7ee,	// (0x000402dd) cell_ai5_widget_pane_t3_ParamLimits

0xe7ee,	// (0x000402dd) cell_ai5_widget_pane_t3

0xe806,	// (0x000402f5) cell_ai5_widget_pane_t4_ParamLimits

0xe806,	// (0x000402f5) cell_ai5_widget_pane_t4

0xe82c,	// (0x0004031b) cell_ai5_widget_pane_t5_ParamLimits

0xe82c,	// (0x0004031b) cell_ai5_widget_pane_t5

0xe84b,	// (0x0004033a) cell_ai5_widget_pane_t6_ParamLimits

0xe84b,	// (0x0004033a) cell_ai5_widget_pane_t6

0xe85d,	// (0x0004034c) cell_ai5_widget_pane_t7_ParamLimits

0xe85d,	// (0x0004034c) cell_ai5_widget_pane_t7

0xe87c,	// (0x0004036b) cell_ai5_widget_pane_t8_ParamLimits

0xe87c,	// (0x0004036b) cell_ai5_widget_pane_t8

0x000b,

0xfe36,	// (0x00041925) cell_ai5_widget_pane_t_ParamLimits

0xfe36,	// (0x00041925) cell_ai5_widget_pane_t

0xe900,	// (0x000403ef) grid_ai5_widget_pane

0x2407,	// (0x00033ef6) highlight_cell_ai5_widget_pane_ParamLimits

0x2407,	// (0x00033ef6) highlight_cell_ai5_widget_pane

0xe90e,	// (0x000403fd) ai5_sk_left_pane

0xe918,	// (0x00040407) ai5_sk_middle_pane

0xe922,	// (0x00040411) ai5_sk_right_pane

0xe92c,	// (0x0004041b) bg_ai5_widget_pane_g1_ParamLimits

0xe92c,	// (0x0004041b) bg_ai5_widget_pane_g1

0xe938,	// (0x00040427) bg_ai5_widget_pane_g2_ParamLimits

0xe938,	// (0x00040427) bg_ai5_widget_pane_g2

0xe944,	// (0x00040433) bg_ai5_widget_pane_g3_ParamLimits

0xe944,	// (0x00040433) bg_ai5_widget_pane_g3

0xe950,	// (0x0004043f) bg_ai5_widget_pane_g4_ParamLimits

0xe950,	// (0x0004043f) bg_ai5_widget_pane_g4

0xe95c,	// (0x0004044b) bg_ai5_widget_pane_g5_ParamLimits

0xe95c,	// (0x0004044b) bg_ai5_widget_pane_g5

0xe968,	// (0x00040457) bg_ai5_widget_pane_g6_ParamLimits

0xe968,	// (0x00040457) bg_ai5_widget_pane_g6

0xe974,	// (0x00040463) bg_ai5_widget_pane_g7_ParamLimits

0xe974,	// (0x00040463) bg_ai5_widget_pane_g7

0xe980,	// (0x0004046f) bg_ai5_widget_pane_g8_ParamLimits

0xe980,	// (0x0004046f) bg_ai5_widget_pane_g8

0xe98c,	// (0x0004047b) bg_ai5_widget_pane_g9_ParamLimits

0xe98c,	// (0x0004047b) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0004193e) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0004193e) bg_ai5_widget_pane_g

0xe9be,	// (0x000404ad) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9be,	// (0x000404ad) cell_shortcut_ai5_widget_pane

0x2cc3,	// (0x000347b2) bg_cell_shortcut_ai5_widget_pane

0xe9cf,	// (0x000404be) cell_grid_ai5_widget_pane_g1

0x2cc3,	// (0x000347b2) highlight_cell_shortcut_ai5_widget_pane

0x99fa,	// (0x0003b4e9) ai5_sk_left_pane_g1

0xe9d8,	// (0x000404c7) ai5_sk_left_pane_g2

0xe9e0,	// (0x000404cf) ai5_sk_left_pane_g3

0xe9e8,	// (0x000404d7) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x00041951) ai5_sk_left_pane_g

0xe9f0,	// (0x000404df) ai5_sk_left_pane_t1

0x9a02,	// (0x0003b4f1) ai5_sk_right_pane_g1

0xe9fe,	// (0x000404ed) ai5_sk_right_pane_g2

0xea06,	// (0x000404f5) ai5_sk_right_pane_g3

0xea0e,	// (0x000404fd) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0004195a) ai5_sk_right_pane_g

0xea16,	// (0x00040505) ai5_sk_right_pane_t1

0x9a02,	// (0x0003b4f1) ai5_sk_middle_pane_g1

0x99fa,	// (0x0003b4e9) ai5_sk_middle_pane_g2

0x9a1a,	// (0x0003b509) ai5_sk_middle_pane_g3

0xea06,	// (0x000404f5) ai5_sk_middle_pane_g4

0xe9e0,	// (0x000404cf) ai5_sk_middle_pane_g5

0xea24,	// (0x00040513) ai5_sk_middle_pane_g6

0xea2c,	// (0x0004051b) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x00041963) ai5_sk_middle_pane_g

0x7d08,	// (0x000397f7) aid_touch_area_size_lc0_ParamLimits

0x7d08,	// (0x000397f7) aid_touch_area_size_lc0

0x8877,	// (0x0003a366) cell_hwr_candidate_pane_t1_ParamLimits

0x7d24,	// (0x00039813) aid_touch_navi_pane

0x9820,	// (0x0003b30f) status_dt_navi_pane_ParamLimits

0x9820,	// (0x0003b30f) status_dt_navi_pane

0x982d,	// (0x0003b31c) status_dt_sta_pane_ParamLimits

0x982d,	// (0x0003b31c) status_dt_sta_pane

0xea34,	// (0x00040523) dt_sta_controll_pane

0xea41,	// (0x00040530) dt_sta_indi_pane

0xea52,	// (0x00040541) dt_sta_title_pane

0x217b,	// (0x00033c6a) bg_dt_sta_indi_pane_ParamLimits

0x217b,	// (0x00033c6a) bg_dt_sta_indi_pane

0xea65,	// (0x00040554) dt_sta_battery_pane

0xea6d,	// (0x0004055c) dt_sta_indi_pane_g1

0xea76,	// (0x00040565) dt_sta_indi_pane_g2

0xea7f,	// (0x0004056e) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x00041972) dt_sta_indi_pane_g

0xea88,	// (0x00040577) dt_sta_signal_pane

0x2407,	// (0x00033ef6) bg_dt_sta_title_pane_ParamLimits

0x2407,	// (0x00033ef6) bg_dt_sta_title_pane

0xa854,	// (0x0003c343) dt_sta_title_pane_g1

0xea91,	// (0x00040580) dt_sta_title_pane_t1_ParamLimits

0xea91,	// (0x00040580) dt_sta_title_pane_t1

0x1fe1,	// (0x00033ad0) bg_dt_sta_control_pane

0xeaa6,	// (0x00040595) dt_sta_controll_pane_g1

0xeaaf,	// (0x0004059e) bg_dt_sta_title_pane_g1

0xeab8,	// (0x000405a7) bg_dt_sta_title_pane_g2

0xeac1,	// (0x000405b0) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x00041979) bg_dt_sta_title_pane_g

0xc026,	// (0x0003db15) bg_dt_sta_indi_pane_g1

0xeaca,	// (0x000405b9) dt_sta_signal_pane_g1

0xead2,	// (0x000405c1) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x00041980) dt_sta_signal_pane_g

0xeada,	// (0x000405c9) dt_sta_battery_pane_g1

0xeae3,	// (0x000405d2) dt_sta_battery_pane_t1

0xc026,	// (0x0003db15) bg_dt_sta_control_pane_g1

0x28dc,	// (0x000343cb) fep_china_uni_eep_pane

0x28e4,	// (0x000343d3) fep_china_uni_entry_pane_ParamLimits

0x28f4,	// (0x000343e3) popup_fep_china_uni_window_g1_ParamLimits

0x2904,	// (0x000343f3) popup_fep_china_uni_window_g2_ParamLimits

0x2904,	// (0x000343f3) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x000411d8) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x000411d8) popup_fep_china_uni_window_g

0xeaf2,	// (0x000405e1) fep_china_uni_eep_pane_g1

0xeafa,	// (0x000405e9) fep_china_uni_eep_pane_t1

0xe50b,	// (0x0003fffa) aid_touch_area_size_smil_player

0x7e7a,	// (0x00039969) lc0_clock_pane

0x9884,	// (0x0003b373) status_pane_g5_ParamLimits

0x9884,	// (0x0003b373) status_pane_g5

0x78bc,	// (0x000393ab) popup_keymap_window

0x9842,	// (0x0003b331) status_icon_pane

0xe707,	// (0x000401f6) cell_ai5_widget_pane_g3_ParamLimits

0xe721,	// (0x00040210) cell_ai5_widget_pane_g4_ParamLimits

0xe731,	// (0x00040220) cell_ai5_widget_pane_g5_ParamLimits

0xe759,	// (0x00040248) cell_ai5_widget_pane_g8_ParamLimits

0xe759,	// (0x00040248) cell_ai5_widget_pane_g8

0xe76d,	// (0x0004025c) cell_ai5_widget_pane_g9_ParamLimits

0xe76d,	// (0x0004025c) cell_ai5_widget_pane_g9

0xe781,	// (0x00040270) cell_ai5_widget_pane_g10_ParamLimits

0xe781,	// (0x00040270) cell_ai5_widget_pane_g10

0xeb09,	// (0x000405f8) status_icon_pane_g1

0x1fe1,	// (0x00033ad0) bg_popup_sub_pane_cp13

0xeb11,	// (0x00040600) popup_keymap_window_t1

0x75fb,	// (0x000390ea) control_pane_g6_ParamLimits

0x75fb,	// (0x000390ea) control_pane_g6

0x7608,	// (0x000390f7) control_pane_g7_ParamLimits

0x7608,	// (0x000390f7) control_pane_g7

0x7615,	// (0x00039104) control_pane_g8_ParamLimits

0x7615,	// (0x00039104) control_pane_g8

0xea34,	// (0x00040523) dt_sta_controll_pane_ParamLimits

0xea41,	// (0x00040530) dt_sta_indi_pane_ParamLimits

0xea52,	// (0x00040541) dt_sta_title_pane_ParamLimits

0x2352,	// (0x00033e41) aid_size_touch_scroll_bar_cale

0x5f8b,	// (0x00037a7a) popup_discreet_window_ParamLimits

0x5f8b,	// (0x00037a7a) popup_discreet_window

0x6005,	// (0x00037af4) popup_sk_window

0xa098,	// (0x0003bb87) bg_popup_sub_pane_cp28_ParamLimits

0xa098,	// (0x0003bb87) bg_popup_sub_pane_cp28

0xeb1f,	// (0x0004060e) popup_discreet_window_g1_ParamLimits

0xeb1f,	// (0x0004060e) popup_discreet_window_g1

0xeb3f,	// (0x0004062e) popup_discreet_window_t1_ParamLimits

0xeb3f,	// (0x0004062e) popup_discreet_window_t1

0xeb5d,	// (0x0004064c) popup_discreet_window_t2_ParamLimits

0xeb5d,	// (0x0004064c) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x00041985) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x00041985) popup_discreet_window_t

0x93c9,	// (0x0003aeb8) popup_sk_window_g1

0x93d3,	// (0x0003aec2) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0004198c) popup_sk_window_g

0x93db,	// (0x0003aeca) popup_sk_window_t1

0x93e9,	// (0x0003aed8) popup_sk_window_t1_copy1

0xe6f3,	// (0x000401e2) cell_ai5_widget_pane_g2_ParamLimits

0xe88e,	// (0x0004037d) cell_ai5_widget_pane_t9_ParamLimits

0xe88e,	// (0x0004037d) cell_ai5_widget_pane_t9

0x1fe1,	// (0x00033ad0) main_fep_fshwr2_pane

0x93f7,	// (0x0003aee6) aid_fshwr2_btn_pane

0x940b,	// (0x0003aefa) aid_fshwr2_syb_pane

0x941f,	// (0x0003af0e) aid_fshwr2_txt_pane

0x942f,	// (0x0003af1e) fshwr2_func_candi_pane

0x9453,	// (0x0003af42) fshwr2_hwr_syb_pane

0x946d,	// (0x0003af5c) fshwr2_icf_pane

0x5eb2,	// (0x000379a1) fshwr2_icf_bg_pane

0x949b,	// (0x0003af8a) fshwr2_icf_pane_t1_ParamLimits

0x949b,	// (0x0003af8a) fshwr2_icf_pane_t1

0x2859,	// (0x00034348) fshwr2_func_candi_pane_g1

0xebaf,	// (0x0004069e) fshwr2_func_candi_row_pane_ParamLimits

0xebaf,	// (0x0004069e) fshwr2_func_candi_row_pane

0x94b4,	// (0x0003afa3) cell_fshwr2_syb_pane_ParamLimits

0x94b4,	// (0x0003afa3) cell_fshwr2_syb_pane

0x94d7,	// (0x0003afc6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x94d7,	// (0x0003afc6) fshwr2_hwr_syb_pane_g1

0x5eb2,	// (0x000379a1) bg_popup_call_pane_cp01

0x94e5,	// (0x0003afd4) fshwr2_func_candi_cell_pane_ParamLimits

0x94e5,	// (0x0003afd4) fshwr2_func_candi_cell_pane

0xa6f4,	// (0x0003c1e3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6f4,	// (0x0003c1e3) fshwr2_func_candi_cell_bg_pane

0x9530,	// (0x0003b01f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9530,	// (0x0003b01f) fshwr2_func_candi_cell_pane_g1

0x9550,	// (0x0003b03f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9550,	// (0x0003b03f) fshwr2_func_candi_cell_pane_t1

0x5eb2,	// (0x000379a1) bg_button_pane_cp08

0x2549,	// (0x00034038) cell_fshwr2_syb_bg_pane

0x9563,	// (0x0003b052) cell_fshwr2_syb_bg_pane_g1

0x9577,	// (0x0003b066) cell_fshwr2_syb_bg_pane_t1

0x2407,	// (0x00033ef6) main_tmo_pane

0xab8d,	// (0x0003c67c) uni_indicator_pane_g1_ParamLimits

0xaba0,	// (0x0003c68f) uni_indicator_pane_g2_ParamLimits

0xabb2,	// (0x0003c6a1) uni_indicator_pane_g3_ParamLimits

0xabc1,	// (0x0003c6b0) uni_indicator_pane_g4_ParamLimits

0xabc1,	// (0x0003c6b0) uni_indicator_pane_g4

0xabd5,	// (0x0003c6c4) uni_indicator_pane_g5_ParamLimits

0xabd5,	// (0x0003c6c4) uni_indicator_pane_g5

0xabd5,	// (0x0003c6c4) uni_indicator_pane_g6_ParamLimits

0xabd5,	// (0x0003c6c4) uni_indicator_pane_g6

0xf8e8,	// (0x000413d7) uni_indicator_pane_g_ParamLimits

0xd53a,	// (0x0003f029) popup_tmo_note_window_ParamLimits

0xd53a,	// (0x0003f029) popup_tmo_note_window

0x8c1b,	// (0x0003a70a) fshwr2_bg_pane

0x9541,	// (0x0003b030) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9541,	// (0x0003b030) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x00041991) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x00041991) fshwr2_func_candi_cell_pane_g

0x8830,	// (0x0003a31f) bg_popup_window_pane_cp01

0x958d,	// (0x0003b07c) bg_popup_window_pane_g1_cp01

0xebd6,	// (0x000406c5) bg_popup_window_pane_cp22_ParamLimits

0xebd6,	// (0x000406c5) bg_popup_window_pane_cp22

0xebe4,	// (0x000406d3) listscroll_tmo_link_pane_ParamLimits

0xebe4,	// (0x000406d3) listscroll_tmo_link_pane

0xec24,	// (0x00040713) popup_tmo_note_window_g1_ParamLimits

0xec24,	// (0x00040713) popup_tmo_note_window_g1

0xec31,	// (0x00040720) tmo_note_info_pane_ParamLimits

0xec31,	// (0x00040720) tmo_note_info_pane

0xec4b,	// (0x0004073a) list_tmo_note_info_pane_g1_ParamLimits

0xec4b,	// (0x0004073a) list_tmo_note_info_pane_g1

0xec62,	// (0x00040751) list_tmo_note_info_pane_g2_ParamLimits

0xec62,	// (0x00040751) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x00041996) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x00041996) list_tmo_note_info_pane_g

0xec7e,	// (0x0004076d) list_tmo_note_info_text_pane_ParamLimits

0xec7e,	// (0x0004076d) list_tmo_note_info_text_pane

0xecff,	// (0x000407ee) list_tmo_link_pane

0xed0c,	// (0x000407fb) scroll_pane_cp20

0xed19,	// (0x00040808) list_single_tmo_link_pane_ParamLimits

0xed19,	// (0x00040808) list_single_tmo_link_pane

0xed29,	// (0x00040818) list_single_tmo_link_pane_t1

0xed37,	// (0x00040826) list_tmo_note_info_text_pane_t1_ParamLimits

0xed37,	// (0x00040826) list_tmo_note_info_text_pane_t1

0x6b88,	// (0x00038677) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6b88,	// (0x00038677) aid_size_touch_scroll_bar_cp01

0x6a71,	// (0x00038560) aid_size_touch_slider_marker

0x5fed,	// (0x00037adc) popup_settings_window_ParamLimits

0x5fed,	// (0x00037adc) popup_settings_window

0x47b1,	// (0x000362a0) popup_candi_list_indi_window

0x7d24,	// (0x00039813) aid_touch_navi_pane_ParamLimits

0x8b76,	// (0x0003a665) rs_clock_indi_pane

0x8b7f,	// (0x0003a66e) sctrl_sk_bottom_pane_ParamLimits

0x8b90,	// (0x0003a67f) sctrl_sk_top_pane_ParamLimits

0x8c8b,	// (0x0003a77a) popup_fep_tooltip_window

0xe669,	// (0x00040158) aid_size_cell_widget_grid_ParamLimits

0xe6de,	// (0x000401cd) cell_ai5_widget_pane_g1_ParamLimits

0xe6de,	// (0x000401cd) cell_ai5_widget_pane_g1

0xe741,	// (0x00040230) cell_ai5_widget_pane_g6_ParamLimits

0xe74d,	// (0x0004023c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1b,	// (0x0004190a) cell_ai5_widget_pane_g_ParamLimits

0xfe1b,	// (0x0004190a) cell_ai5_widget_pane_g

0xe8bd,	// (0x000403ac) cell_ai5_widget_pane_t10_ParamLimits

0xe8bd,	// (0x000403ac) cell_ai5_widget_pane_t10

0xe900,	// (0x000403ef) grid_ai5_widget_pane_ParamLimits

0xe998,	// (0x00040487) cell_contacts_ai5_widget_pane_ParamLimits

0xe998,	// (0x00040487) cell_contacts_ai5_widget_pane

0xeb72,	// (0x00040661) popup_discreet_window_t3_ParamLimits

0xeb72,	// (0x00040661) popup_discreet_window_t3

0x9485,	// (0x0003af74) popup_fshwr2_char_preview_window_ParamLimits

0x9485,	// (0x0003af74) popup_fshwr2_char_preview_window

0xec9c,	// (0x0004078b) tmo_note_info_pane_t1

0xecb1,	// (0x000407a0) tmo_note_info_pane_t2

0xecc6,	// (0x000407b5) tmo_note_info_pane_t3

0xecdb,	// (0x000407ca) tmo_note_info_pane_t4

0xeced,	// (0x000407dc) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0004199b) tmo_note_info_pane_t

0xecff,	// (0x000407ee) list_tmo_link_pane_ParamLimits

0xed0c,	// (0x000407fb) scroll_pane_cp20_ParamLimits

0x5eb2,	// (0x000379a1) bg_popup_fep_char_preview_window_cp01

0xed50,	// (0x0004083f) popup_fshwr2_char_preview_window_t1

0xed5e,	// (0x0004084d) popup_candi_list_indi_window_g1

0xed67,	// (0x00040856) bg_cell_contacts_ai5_widget_pane

0xed73,	// (0x00040862) cell_contacts_ai5_widget_pane_g1

0xc6ec,	// (0x0003e1db) cell_contacts_ai5_widget_pane_g2

0xed88,	// (0x00040877) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x000419a6) cell_contacts_ai5_widget_pane_g

0xed94,	// (0x00040883) cell_contacts_ai5_widget_pane_t1

0x2407,	// (0x00033ef6) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0b,	// (0x000408fa) settings_container_pane

0x2cc3,	// (0x000347b2) listscroll_set_pane_copy1

0xb702,	// (0x0003d1f1) scroll_pane_cp121_copy1

0x9e3d,	// (0x0003b92c) set_content_pane_copy1

0xee17,	// (0x00040906) aid_height_set_list_copy1_ParamLimits

0xee17,	// (0x00040906) aid_height_set_list_copy1

0xadcd,	// (0x0003c8bc) aid_size_parent_copy1_ParamLimits

0xadcd,	// (0x0003c8bc) aid_size_parent_copy1

0xee23,	// (0x00040912) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee23,	// (0x00040912) button_value_adjust_pane_cp6_copy1

0x2549,	// (0x00034038) list_highlight_pane_cp2_copy1_ParamLimits

0x2549,	// (0x00034038) list_highlight_pane_cp2_copy1

0xee37,	// (0x00040926) list_set_pane_copy1_ParamLimits

0xee37,	// (0x00040926) list_set_pane_copy1

0xeda6,	// (0x00040895) main_pane_set_t1_copy1_ParamLimits

0xeda6,	// (0x00040895) main_pane_set_t1_copy1

0xede0,	// (0x000408cf) main_pane_set_t2_copy1_ParamLimits

0xede0,	// (0x000408cf) main_pane_set_t2_copy1

0xeee4,	// (0x000409d3) main_pane_set_t3_copy1

0xeef2,	// (0x000409e1) main_pane_set_t4_copy1

0xedff,	// (0x000408ee) set_content_pane_g1_copy1_ParamLimits

0xedff,	// (0x000408ee) set_content_pane_g1_copy1

0xef00,	// (0x000409ef) setting_code_pane_copy1

0xef08,	// (0x000409f7) setting_slider_graphic_pane_copy1

0xef08,	// (0x000409f7) setting_slider_pane_copy1

0xef10,	// (0x000409ff) setting_text_pane_copy1

0xef10,	// (0x000409ff) setting_volume_pane_copy1

0xef00,	// (0x000409ef) settings_code_pane_cp2_copy1

0xef18,	// (0x00040a07) settings_code_pane_cp_copy1_ParamLimits

0xef18,	// (0x00040a07) settings_code_pane_cp_copy1

0x9596,	// (0x0003b085) volume_set_pane_copy1

0xef2c,	// (0x00040a1b) volume_set_pane_g10_copy1

0xef34,	// (0x00040a23) volume_set_pane_g1_copy1

0xef3c,	// (0x00040a2b) volume_set_pane_g2_copy1

0xef44,	// (0x00040a33) volume_set_pane_g3_copy1

0xef4c,	// (0x00040a3b) volume_set_pane_g4_copy1

0xef54,	// (0x00040a43) volume_set_pane_g5_copy1

0xef5c,	// (0x00040a4b) volume_set_pane_g6_copy1

0xef64,	// (0x00040a53) volume_set_pane_g7_copy1

0xef6c,	// (0x00040a5b) volume_set_pane_g8_copy1

0xef74,	// (0x00040a63) volume_set_pane_g9_copy1

0x2051,	// (0x00033b40) bg_set_opt_pane_cp_copy1_ParamLimits

0x2051,	// (0x00033b40) bg_set_opt_pane_cp_copy1

0x959e,	// (0x0003b08d) setting_slider_pane_t1_copy1_ParamLimits

0x959e,	// (0x0003b08d) setting_slider_pane_t1_copy1

0x95bd,	// (0x0003b0ac) setting_slider_pane_t2_copy1_ParamLimits

0x95bd,	// (0x0003b0ac) setting_slider_pane_t2_copy1

0x95d7,	// (0x0003b0c6) setting_slider_pane_t3_copy1_ParamLimits

0x95d7,	// (0x0003b0c6) setting_slider_pane_t3_copy1

0x95ef,	// (0x0003b0de) slider_set_pane_copy1_ParamLimits

0x95ef,	// (0x0003b0de) slider_set_pane_copy1

0x245f,	// (0x00033f4e) set_opt_bg_pane_g1_copy2

0x2467,	// (0x00033f56) set_opt_bg_pane_g2_copy2

0xef7c,	// (0x00040a6b) set_opt_bg_pane_g3_copy2

0x2477,	// (0x00033f66) set_opt_bg_pane_g4_copy2

0x247f,	// (0x00033f6e) set_opt_bg_pane_g5_copy2

0x2487,	// (0x00033f76) set_opt_bg_pane_g6_copy2

0xef86,	// (0x00040a75) set_opt_bg_pane_g7_copy2

0xef8e,	// (0x00040a7d) set_opt_bg_pane_g8_copy2

0xef98,	// (0x00040a87) set_opt_bg_pane_g9_copy2

0x9605,	// (0x0003b0f4) aid_size_touch_slider_mark_copy1_ParamLimits

0x9605,	// (0x0003b0f4) aid_size_touch_slider_mark_copy1

0xefa2,	// (0x00040a91) slider_set_pane_g1_copy1

0x9619,	// (0x0003b108) slider_set_pane_g2_copy1

0x8360,	// (0x00039e4f) slider_set_pane_g3_copy1_ParamLimits

0x8360,	// (0x00039e4f) slider_set_pane_g3_copy1

0x8374,	// (0x00039e63) slider_set_pane_g4_copy1_ParamLimits

0x8374,	// (0x00039e63) slider_set_pane_g4_copy1

0x838c,	// (0x00039e7b) slider_set_pane_g5_copy1_ParamLimits

0x838c,	// (0x00039e7b) slider_set_pane_g5_copy1

0x8360,	// (0x00039e4f) slider_set_pane_g6_copy1_ParamLimits

0x8360,	// (0x00039e4f) slider_set_pane_g6_copy1

0x9621,	// (0x0003b110) slider_set_pane_g7_copy1_ParamLimits

0x9621,	// (0x0003b110) slider_set_pane_g7_copy1

0x1ff5,	// (0x00033ae4) bg_set_opt_pane_cp2_copy1

0xefab,	// (0x00040a9a) setting_slider_graphic_pane_g1_copy1

0xefb4,	// (0x00040aa3) setting_slider_graphic_pane_t1_copy1

0xefc4,	// (0x00040ab3) setting_slider_graphic_pane_t2_copy1

0xefd4,	// (0x00040ac3) slider_set_pane_cp_copy1

0xefe4,	// (0x00040ad3) input_focus_pane_cp1_copy1

0xefed,	// (0x00040adc) list_set_text_pane_copy1

0xeff5,	// (0x00040ae4) setting_text_pane_g1_copy1

0x4e4e,	// (0x0003693d) set_text_pane_t1_copy1

0xefe4,	// (0x00040ad3) input_focus_pane_cp2_copy1

0xeff5,	// (0x00040ae4) setting_code_pane_g1_copy1

0xeffe,	// (0x00040aed) setting_code_pane_t1_copy1

0xf00c,	// (0x00040afb) list_set_graphic_pane_copy1

0x1ff5,	// (0x00033ae4) bg_set_opt_pane_cp4_copy1

0x2a34,	// (0x00034523) list_set_graphic_pane_g1_copy1_ParamLimits

0x2a34,	// (0x00034523) list_set_graphic_pane_g1_copy1

0xf020,	// (0x00040b0f) list_set_graphic_pane_g2_copy1

0x2a4c,	// (0x0003453b) list_set_graphic_pane_t1_copy1_ParamLimits

0x2a4c,	// (0x0003453b) list_set_graphic_pane_t1_copy1

0xc026,	// (0x0003db15) rs_clock_indi_pane_g1

0xf028,	// (0x00040b17) rs_clock_indi_pane_t1

0xf036,	// (0x00040b25) rs_indi_pane

0xf03e,	// (0x00040b2d) rs_indi_pane_g1

0xf047,	// (0x00040b36) rs_indi_pane_g2

0xed5e,	// (0x0004084d) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x000419ad) rs_indi_pane_g

0x2cc3,	// (0x000347b2) bg_popup_preview_window_pane_cp03

0xf050,	// (0x00040b3f) popup_fep_tooltip_window_t1

0xcce9,	// (0x0003e7d8) popup_note2_window_g2_ParamLimits

0xcce9,	// (0x0003e7d8) popup_note2_window_g2

0x0001,

0xfc52,	// (0x00041741) popup_note2_window_g_ParamLimits

0xfc52,	// (0x00041741) popup_note2_window_g

0xd1d6,	// (0x0003ecc5) bg_popup_sub_pane_cp11_ParamLimits

0xd1e3,	// (0x0003ecd2) cell_ai3_links_pane_g1_ParamLimits

0xd1fa,	// (0x0003ece9) cell_ai3_links_pane_t1

0x4e4e,	// (0x0003693d) set_text_pane_t1_copy1_ParamLimits

0x2bf9,	// (0x000346e8) cell_graphic_popup_pane_cp2_ParamLimits

0x2bf9,	// (0x000346e8) cell_graphic_popup_pane_cp2

0xf05e,	// (0x00040b4d) cell_graphic_popup_pane_g1_cp2

0x22d5,	// (0x00033dc4) cell_graphic_popup_pane_g2_cp2

0xf066,	// (0x00040b55) cell_graphic_popup_pane_g3_cp2

0xf06e,	// (0x00040b5d) cell_graphic_popup_pane_t2_cp2

0x22e6,	// (0x00033dd5) grid_highlight_pane_cp3_cp2

0x26d6,	// (0x000341c5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2407,	// (0x00033ef6) main_tmo_pane_ParamLimits

0xd52e,	// (0x0003f01d) popup_tmo_big_image_note_window

0xe6cd,	// (0x000401bc) cell_ai5_widget_list_pane

0xe6d5,	// (0x000401c4) cell_ai5_widget_lrg_icon_pane

0xec9c,	// (0x0004078b) tmo_note_info_pane_t1_ParamLimits

0xecb1,	// (0x000407a0) tmo_note_info_pane_t2_ParamLimits

0xecc6,	// (0x000407b5) tmo_note_info_pane_t3_ParamLimits

0xecdb,	// (0x000407ca) tmo_note_info_pane_t4_ParamLimits

0xeced,	// (0x000407dc) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0004199b) tmo_note_info_pane_t_ParamLimits

0xee0b,	// (0x000408fa) settings_container_pane_ParamLimits

0xefdc,	// (0x00040acb) indicator_popup_pane_cp5

0xefdc,	// (0x00040acb) indicator_popup_pane_cp6

0xf00c,	// (0x00040afb) list_set_graphic_pane_copy1_ParamLimits

0x1fe1,	// (0x00033ad0) bg_popup_window_pane_cp23

0xf07c,	// (0x00040b6b) popup_tmo_big_image_note_window_g1

0xf085,	// (0x00040b74) popup_tmo_big_image_note_window_t1

0xf095,	// (0x00040b84) popup_tmo_big_image_note_window_t2

0xf0a5,	// (0x00040b94) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x000419b4) popup_tmo_big_image_note_window_t

0xc026,	// (0x0003db15) cell_ai5_widget_lrg_icon_pane_g1

0xf0b5,	// (0x00040ba4) cell_ai5_widget_lrg_icon_pane_t1

0xf0c3,	// (0x00040bb2) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c3,	// (0x00040bb2) cell_ai5_widget_list_row_pane

0xf0da,	// (0x00040bc9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0da,	// (0x00040bc9) cell_ai5_widget_list_row_pane_g1

0xf0e7,	// (0x00040bd6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0e7,	// (0x00040bd6) cell_ai5_widget_list_row_pane_t1

0xf112,	// (0x00040c01) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf112,	// (0x00040c01) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x000419bb) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x000419bb) cell_ai5_widget_list_row_pane_t

0x5eb2,	// (0x000379a1) main_fep_vtchi_ss_pane

0xf162,	// (0x00040c51) popup_fep_char_pre_window

0xf16a,	// (0x00040c59) popup_fep_ituss_window

0xf196,	// (0x00040c85) popup_fep_vkbss_window

0x2549,	// (0x00034038) grid_vkbss_keypad_pane_ParamLimits

0x2549,	// (0x00034038) grid_vkbss_keypad_pane

0xf1d6,	// (0x00040cc5) ituss_keypad_pane

0x9641,	// (0x0003b130) aid_vkbss_key_offset_ParamLimits

0x9641,	// (0x0003b130) aid_vkbss_key_offset

0x964d,	// (0x0003b13c) cell_vkbss_key_pane_ParamLimits

0x964d,	// (0x0003b13c) cell_vkbss_key_pane

0xf1e6,	// (0x00040cd5) bg_cell_vkbss_key_g1_ParamLimits

0xf1e6,	// (0x00040cd5) bg_cell_vkbss_key_g1

0xf1f2,	// (0x00040ce1) cell_vkbss_key_3p_pane_ParamLimits

0xf1f2,	// (0x00040ce1) cell_vkbss_key_3p_pane

0xf228,	// (0x00040d17) cell_vkbss_key_g1_ParamLimits

0xf228,	// (0x00040d17) cell_vkbss_key_g1

0xf25e,	// (0x00040d4d) cell_vkbss_key_t1_ParamLimits

0xf25e,	// (0x00040d4d) cell_vkbss_key_t1

0x9698,	// (0x0003b187) cell_ituss_key_pane_ParamLimits

0x9698,	// (0x0003b187) cell_ituss_key_pane

0xf2ba,	// (0x00040da9) bg_cell_ituss_key_g1_ParamLimits

0xf2ba,	// (0x00040da9) bg_cell_ituss_key_g1

0xf2c6,	// (0x00040db5) cell_ituss_key_pane_g1_ParamLimits

0xf2c6,	// (0x00040db5) cell_ituss_key_pane_g1

0x96a9,	// (0x0003b198) cell_ituss_key_pane_g2_ParamLimits

0x96a9,	// (0x0003b198) cell_ituss_key_pane_g2

0x0005,

0xfed3,	// (0x000419c2) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x000419c2) cell_ituss_key_pane_g

0x972d,	// (0x0003b21c) cell_ituss_key_t1_ParamLimits

0x972d,	// (0x0003b21c) cell_ituss_key_t1

0x9767,	// (0x0003b256) cell_ituss_key_t2_ParamLimits

0x9767,	// (0x0003b256) cell_ituss_key_t2

0x9799,	// (0x0003b288) cell_ituss_key_t3_ParamLimits

0x9799,	// (0x0003b288) cell_ituss_key_t3

0x97ca,	// (0x0003b2b9) cell_ituss_key_t4_ParamLimits

0x97ca,	// (0x0003b2b9) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x000419cf) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x000419cf) cell_ituss_key_t

0xf2ec,	// (0x00040ddb) cell_vkbss_key_3p_pane_g1

0xf2f4,	// (0x00040de3) cell_vkbss_key_3p_pane_g2

0xf2fc,	// (0x00040deb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x000419da) cell_vkbss_key_3p_pane_g

0x2cc3,	// (0x000347b2) bg_popup_fep_char_preview_window_cp02

0xf304,	// (0x00040df3) popup_fep_char_pre_window_t1

0xe65f,	// (0x0004014e) main_ai5_sk_pane

0xed67,	// (0x00040856) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed73,	// (0x00040862) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6ec,	// (0x0003e1db) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed88,	// (0x00040877) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x000419a6) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed94,	// (0x00040883) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2407,	// (0x00033ef6) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf312,	// (0x00040e01) main_ai5_sk_pane_g1

0x9ed9,	// (0x0003b9c8) popup_query_code_window_g1

0xf180,	// (0x00040c6f) popup_fep_vkb_icf_pane

0xf1ad,	// (0x00040c9c) popup_fep_vtchi_icf_pane

0xf31b,	// (0x00040e0a) bg_icf_pane

0xf31b,	// (0x00040e0a) list_vkb_icf_pane

0xf327,	// (0x00040e16) bg_icf_pane_cp01

0xf33a,	// (0x00040e29) vtchi_icf_list_pane

0xf39a,	// (0x00040e89) list_vkb_icf_pane_t1_ParamLimits

0xf39a,	// (0x00040e89) list_vkb_icf_pane_t1

0xf3bf,	// (0x00040eae) vtchi_icf_list_pane_t1_ParamLimits

0xf3bf,	// (0x00040eae) vtchi_icf_list_pane_t1

0xf16a,	// (0x00040c59) popup_fep_ituss_window_ParamLimits

0xf1ad,	// (0x00040c9c) popup_fep_vtchi_icf_pane_ParamLimits

0xf1d6,	// (0x00040cc5) ituss_keypad_pane_ParamLimits

0x9637,	// (0x0003b126) ituss_sks_pane

0xf31b,	// (0x00040e0a) bg_icf_pane_ParamLimits

0xf13a,	// (0x00040c29) icf_edit_indi_pane_ParamLimits

0xf13a,	// (0x00040c29) icf_edit_indi_pane

0xf31b,	// (0x00040e0a) list_vkb_icf_pane_ParamLimits

0xf327,	// (0x00040e16) bg_icf_pane_cp01_ParamLimits

0xf155,	// (0x00040c44) icf_edit_indi_pane_cp01_ParamLimits

0xf155,	// (0x00040c44) icf_edit_indi_pane_cp01

0xf33a,	// (0x00040e29) vtchi_query_pane

0xe4db,	// (0x0003ffca) icf_edit_indi_pane_g1_ParamLimits

0xe4db,	// (0x0003ffca) icf_edit_indi_pane_g1

0xf43a,	// (0x00040f29) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x00040f29) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x00041a05) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x00041a05) icf_edit_indi_pane_g

0xf44e,	// (0x00040f3d) icf_edit_indi_pane_t1

0xf3e3,	// (0x00040ed2) bg_input_focus_pane_cp042

0x2349,	// (0x00033e38) vtchi_button_pane

0xf3ec,	// (0x00040edb) vtchi_query_pane_t1

0xf3fa,	// (0x00040ee9) vtchi_query_pane_t2

0xf408,	// (0x00040ef7) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x000419f4) vtchi_query_pane_t

0x5eb2,	// (0x000379a1) bg_button_pane_cp13

0xf416,	// (0x00040f05) vtchi_button_pane_g1

0x980d,	// (0x0003b2fc) ituss_sks_pane_g1

0x9818,	// (0x0003b307) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x000419fb) ituss_sks_pane_g

0xf41e,	// (0x00040f0d) ituss_sks_pane_t1

0xf42c,	// (0x00040f1b) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x00041a00) ituss_sks_pane_t

0xba9a,	// (0x0003d589) indicator_nsta_pane_cp_g1

0xbaa3,	// (0x0003d592) indicator_nsta_pane_cp_g2

0xbaab,	// (0x0003d59a) indicator_nsta_pane_cp_g3

0xbab3,	// (0x0003d5a2) indicator_nsta_pane_cp_g4

0xbaa3,	// (0x0003d592) indicator_nsta_pane_cp_g5

0xbaab,	// (0x0003d59a) indicator_nsta_pane_cp_g6

0x0005,

0xfa90,	// (0x0004157f) indicator_nsta_pane_cp_g

0xe22e,	// (0x0003fd1d) cell_graphic2_pane_t2_ParamLimits

0xe22e,	// (0x0003fd1d) cell_graphic2_pane_t2

0x0001,

0xfda2,	// (0x00041891) cell_graphic2_pane_t_ParamLimits

0xfda2,	// (0x00041891) cell_graphic2_pane_t

0xe25a,	// (0x0003fd49) cell_graphic2_control_pane_t1

0x7052,	// (0x00038b41) signal_pane_g3_ParamLimits

0x7052,	// (0x00038b41) signal_pane_g3

0x7064,	// (0x00038b53) signal_pane_g4_ParamLimits

0x7064,	// (0x00038b53) signal_pane_g4

0xf124,	// (0x00040c13) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf124,	// (0x00040c13) cell_ai5_widget_list_row_pane_t3

0xf2da,	// (0x00040dc9) cell_ituss_key_pane_t1_ParamLimits

0xf2da,	// (0x00040dc9) cell_ituss_key_pane_t1

0x9b0c,	// (0x0003b5fb) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b0c,	// (0x0003b5fb) form_field_data_wide_pane_vc_t2

0x9b20,	// (0x0003b60f) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b20,	// (0x0003b60f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x000412bf) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x000412bf) form_field_data_wide_pane_vc_t

0xb744,	// (0x0003d233) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb744,	// (0x0003d233) form_field_slider_wide_pane_vc_t3

0xb822,	// (0x0003d311) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb822,	// (0x0003d311) form_field_popup_wide_pane_vc_t2

0xb839,	// (0x0003d328) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb839,	// (0x0003d328) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7f,	// (0x0004156e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0004156e) form_field_popup_wide_pane_vc_t

0x93f7,	// (0x0003aee6) aid_fshwr2_btn_pane_ParamLimits

0x940b,	// (0x0003aefa) aid_fshwr2_syb_pane_ParamLimits

0x941f,	// (0x0003af0e) aid_fshwr2_txt_pane_ParamLimits

0x8c1b,	// (0x0003a70a) fshwr2_bg_pane_ParamLimits

0x942f,	// (0x0003af1e) fshwr2_func_candi_pane_ParamLimits

0x9453,	// (0x0003af42) fshwr2_hwr_syb_pane_ParamLimits

0x946d,	// (0x0003af5c) fshwr2_icf_pane_ParamLimits

0x4b83,	// (0x00036672) list_double_graphic_pane_vc_g4_ParamLimits

0x4b83,	// (0x00036672) list_double_graphic_pane_vc_g4

0x96c9,	// (0x0003b1b8) cell_ituss_key_pane_g3_ParamLimits

0x96c9,	// (0x0003b1b8) cell_ituss_key_pane_g3

0x97fb,	// (0x0003b2ea) cell_ituss_key_t5_ParamLimits

0x97fb,	// (0x0003b2ea) cell_ituss_key_t5

0xf196,	// (0x00040c85) popup_fep_vkbss_window_ParamLimits

0xc81d,	// (0x0003e30c) aid_cell_ai5_quarter

0xf44e,	// (0x00040f3d) icf_edit_indi_pane_t1_ParamLimits

0x6371,	// (0x00037e60) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6371,	// (0x00037e60) aid_tch_indicator_popup_pane_cp2

0x6384,	// (0x00037e73) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6384,	// (0x00037e73) aid_tch_query_popup_data_pane_cp2

0x9e81,	// (0x0003b970) aid_tch_query_popup_pane_ParamLimits

0x9e81,	// (0x0003b970) aid_tch_query_popup_pane

0x9e81,	// (0x0003b970) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e81,	// (0x0003b970) aid_tch_query_popup_data_pane_cp1

0x2549,	// (0x00034038) cell_fshwr2_syb_bg_pane_ParamLimits

0x9563,	// (0x0003b052) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9577,	// (0x0003b066) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf180,	// (0x00040c6f) popup_fep_vkb_icf_pane_ParamLimits

0x9237,	// (0x0003ad26) bg_popup_fep_char_preview_window_g10

0xe795,	// (0x00040284) cell_ai5_widget_pane_g11_ParamLimits

0xe795,	// (0x00040284) cell_ai5_widget_pane_g11

0xe7a1,	// (0x00040290) cell_ai5_widget_pane_g12_ParamLimits

0xe7a1,	// (0x00040290) cell_ai5_widget_pane_g12

0xe7ad,	// (0x0004029c) cell_ai5_widget_pane_g13_ParamLimits

0xe7ad,	// (0x0004029c) cell_ai5_widget_pane_g13

0xe8dc,	// (0x000403cb) cell_ai5_widget_pane_t11_ParamLimits

0xe8dc,	// (0x000403cb) cell_ai5_widget_pane_t11

0xe8ee,	// (0x000403dd) cell_ai5_widget_pane_t12_ParamLimits

0xe8ee,	// (0x000403dd) cell_ai5_widget_pane_t12

0x96d5,	// (0x0003b1c4) cell_ituss_key_pane_g4_ParamLimits

0x96d5,	// (0x0003b1c4) cell_ituss_key_pane_g4

0x96f1,	// (0x0003b1e0) cell_ituss_key_pane_g5_ParamLimits

0x96f1,	// (0x0003b1e0) cell_ituss_key_pane_g5

0x970d,	// (0x0003b1fc) cell_ituss_key_pane_g6_ParamLimits

0x970d,	// (0x0003b1fc) cell_ituss_key_pane_g6

0x99f2,	// (0x0003b4e1) bg_icf_pane_g1

0xf342,	// (0x00040e31) bg_icf_pane_g2

0xf34e,	// (0x00040e3d) bg_icf_pane_g3

0xf358,	// (0x00040e47) bg_icf_pane_g4

0xf364,	// (0x00040e53) bg_icf_pane_g5

0xf36e,	// (0x00040e5d) bg_icf_pane_g6

0xf37a,	// (0x00040e69) bg_icf_pane_g7

0xf384,	// (0x00040e73) bg_icf_pane_g8

0xf390,	// (0x00040e7f) bg_icf_pane_g9

0x0008,

0xfef2,	// (0x000419e1) bg_icf_pane_g

0xf1c3,	// (0x00040cb2) popup_hyb_candi_window_ParamLimits

0xf1c3,	// (0x00040cb2) popup_hyb_candi_window

0x9a7e,	// (0x0003b56d) bg_popup_sub_pane_cp01_ParamLimits

0x9a7e,	// (0x0003b56d) bg_popup_sub_pane_cp01

0xf467,	// (0x00040f56) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x00040f56) entry_hyb_candi_pane

0xf476,	// (0x00040f65) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x00040f65) grid_hyb_candi_pane

0xf48b,	// (0x00040f7a) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x00040f7a) grid_hyb_phrase_pane

0xf49a,	// (0x00040f89) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x00040f89) cell_hyb_candi_pane

0xf4bd,	// (0x00040fac) cell_hyb_candi_scroll_pane

0x2859,	// (0x00034348) cell_hyb_candi_pane_g1

0xf4c6,	// (0x00040fb5) cell_hyb_candi_pane_t1

0xf4d4,	// (0x00040fc3) cell_hyb_phrase_pane

0x2859,	// (0x00034348) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x00040fcc) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x00040fda) entry_hyb_candi_pane_t1

0x2cc3,	// (0x000347b2) input_focus_pane_cp06

0xf4f9,	// (0x00040fe8) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x00040ff0) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x00040ff8) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x00041000) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x00041008) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x00041010) cell_hyb_candi_scroll_pane_g4
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

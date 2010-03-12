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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00037227 };

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
0x9602,	// (0x00040829) Screen

0x960e,	// (0x00040835) application_window_ParamLimits

0x960e,	// (0x00040835) application_window

0xb41c,	// (0x00042643) screen_g1

0x7f39,	// (0x0003f160) area_bottom_pane_ParamLimits

0x7f39,	// (0x0003f160) area_bottom_pane

0x1337,	// (0x0003855e) area_top_pane_ParamLimits

0x1337,	// (0x0003855e) area_top_pane

0x13cb,	// (0x000385f2) main_pane_ParamLimits

0x13cb,	// (0x000385f2) main_pane

0xb426,	// (0x0004264d) misc_graphics

0x9db2,	// (0x00040fd9) battery_pane_ParamLimits

0x9db2,	// (0x00040fd9) battery_pane

0xd052,	// (0x00044279) bg_status_flat_pane_g8

0xd05a,	// (0x00044281) bg_status_flat_pane_g9

0xc745,	// (0x0004396c) context_pane_ParamLimits

0xc745,	// (0x0004396c) context_pane

0x9f1d,	// (0x00041144) navi_pane_ParamLimits

0x9f1d,	// (0x00041144) navi_pane

0x9f95,	// (0x000411bc) signal_pane_ParamLimits

0x9f95,	// (0x000411bc) signal_pane

0x0008,

0xf87f,	// (0x00046aa6) bg_status_flat_pane_g

0xa025,	// (0x0004124c) status_pane_g1_ParamLimits

0xa025,	// (0x0004124c) status_pane_g1

0xa03b,	// (0x00041262) status_pane_g2_ParamLimits

0xa03b,	// (0x00041262) status_pane_g2

0xc7aa,	// (0x000439d1) status_pane_g3_ParamLimits

0xc7aa,	// (0x000439d1) status_pane_g3

0x0004,

0xf7ab,	// (0x000469d2) status_pane_g_ParamLimits

0xf7ab,	// (0x000469d2) status_pane_g

0xa047,	// (0x0004126e) title_pane_ParamLimits

0xa047,	// (0x0004126e) title_pane

0xa0aa,	// (0x000412d1) uni_indicator_pane_ParamLimits

0xa0aa,	// (0x000412d1) uni_indicator_pane

0xc688,	// (0x000438af) bg_list_pane_ParamLimits

0xc688,	// (0x000438af) bg_list_pane

0x7ce3,	// (0x0003ef0a) find_pane

0x9d21,	// (0x00040f48) listscroll_app_pane_ParamLimits

0x9d21,	// (0x00040f48) listscroll_app_pane

0xc6a8,	// (0x000438cf) listscroll_form_pane

0x7ceb,	// (0x0003ef12) listscroll_gen_pane_ParamLimits

0x7ceb,	// (0x0003ef12) listscroll_gen_pane

0xc6a8,	// (0x000438cf) listscroll_set_pane

0xd38d,	// (0x000445b4) main_idle_act_pane

0xc46c,	// (0x00043693) main_idle_trad_pane

0xc46c,	// (0x00043693) main_list_empty_pane

0xbbe7,	// (0x00042e0e) main_midp_pane

0xc6c2,	// (0x000438e9) main_pane_g1_ParamLimits

0xc6c2,	// (0x000438e9) main_pane_g1

0x829e,	// (0x0003f4c5) popup_ai_message_window_ParamLimits

0x829e,	// (0x0003f4c5) popup_ai_message_window

0x832f,	// (0x0003f556) popup_fep_china_uni_window_ParamLimits

0x832f,	// (0x0003f556) popup_fep_china_uni_window

0x24a0,	// (0x000396c7) popup_fep_japan_candidate_window_ParamLimits

0x24a0,	// (0x000396c7) popup_fep_japan_candidate_window

0x24be,	// (0x000396e5) popup_fep_japan_predictive_window_ParamLimits

0x24be,	// (0x000396e5) popup_fep_japan_predictive_window

0x8389,	// (0x0003f5b0) popup_find_window

0x83a6,	// (0x0003f5cd) popup_grid_graphic_window_ParamLimits

0x83a6,	// (0x0003f5cd) popup_grid_graphic_window

0x2521,	// (0x00039748) popup_large_graphic_colour_window

0x8438,	// (0x0003f65f) popup_menu_window_ParamLimits

0x8438,	// (0x0003f65f) popup_menu_window

0x8604,	// (0x0003f82b) popup_note_image_window

0x85ca,	// (0x0003f7f1) popup_note_wait_window_ParamLimits

0x85ca,	// (0x0003f7f1) popup_note_wait_window

0x861c,	// (0x0003f843) popup_note_window_ParamLimits

0x861c,	// (0x0003f843) popup_note_window

0x86c2,	// (0x0003f8e9) popup_query_code_window_ParamLimits

0x86c2,	// (0x0003f8e9) popup_query_code_window

0x276b,	// (0x00039992) popup_query_data_code_window_ParamLimits

0x276b,	// (0x00039992) popup_query_data_code_window

0x86fc,	// (0x0003f923) popup_query_data_window_ParamLimits

0x86fc,	// (0x0003f923) popup_query_data_window

0x8772,	// (0x0003f999) popup_query_sat_info_window_ParamLimits

0x8772,	// (0x0003f999) popup_query_sat_info_window

0x8809,	// (0x0003fa30) popup_snote_single_graphic_window_ParamLimits

0x8809,	// (0x0003fa30) popup_snote_single_graphic_window

0x8809,	// (0x0003fa30) popup_snote_single_text_window_ParamLimits

0x8809,	// (0x0003fa30) popup_snote_single_text_window

0x27e8,	// (0x00039a0f) popup_sub_window_general

0x2916,	// (0x00039b3d) popup_window_general_ParamLimits

0x2916,	// (0x00039b3d) popup_window_general

0xc6d0,	// (0x000438f7) power_save_pane

0x8131,	// (0x0003f358) control_pane_g1_ParamLimits

0x8131,	// (0x0003f358) control_pane_g1

0x815a,	// (0x0003f381) control_pane_g2_ParamLimits

0x815a,	// (0x0003f381) control_pane_g2

0xc672,	// (0x00043899) control_pane_g3_ParamLimits

0xc672,	// (0x00043899) control_pane_g3

0x0007,

0xf793,	// (0x000469ba) control_pane_g_ParamLimits

0xf793,	// (0x000469ba) control_pane_g

0x8197,	// (0x0003f3be) control_pane_t1_ParamLimits

0x8197,	// (0x0003f3be) control_pane_t1

0x81f5,	// (0x0003f41c) control_pane_t2_ParamLimits

0x81f5,	// (0x0003f41c) control_pane_t2

0x0002,

0xf7a4,	// (0x000469cb) control_pane_t_ParamLimits

0xf7a4,	// (0x000469cb) control_pane_t

0xc593,	// (0x000437ba) navi_navi_volume_pane_cp1

0xc59c,	// (0x000437c3) status_small_icon_pane

0xc5a4,	// (0x000437cb) status_small_pane_g1_ParamLimits

0xc5a4,	// (0x000437cb) status_small_pane_g1

0xc5d8,	// (0x000437ff) status_small_pane_g2_ParamLimits

0xc5d8,	// (0x000437ff) status_small_pane_g2

0xc5e4,	// (0x0004380b) status_small_pane_g3_ParamLimits

0xc5e4,	// (0x0004380b) status_small_pane_g3

0xc5f0,	// (0x00043817) status_small_pane_g4_ParamLimits

0xc5f0,	// (0x00043817) status_small_pane_g4

0xc5fc,	// (0x00043823) status_small_pane_g5_ParamLimits

0xc5fc,	// (0x00043823) status_small_pane_g5

0xc60b,	// (0x00043832) status_small_pane_g6_ParamLimits

0xc60b,	// (0x00043832) status_small_pane_g6

0x0007,

0xf782,	// (0x000469a9) status_small_pane_g_ParamLimits

0xf782,	// (0x000469a9) status_small_pane_g

0xc63b,	// (0x00043862) status_small_pane_t1

0xc65e,	// (0x00043885) status_small_wait_pane_ParamLimits

0xc65e,	// (0x00043885) status_small_wait_pane

0x9b10,	// (0x00040d37) aid_levels_signal_ParamLimits

0x9b10,	// (0x00040d37) aid_levels_signal

0x9b28,	// (0x00040d4f) signal_pane_g1_ParamLimits

0x9b28,	// (0x00040d4f) signal_pane_g1

0x9b43,	// (0x00040d6a) signal_pane_g2_ParamLimits

0x9b43,	// (0x00040d6a) signal_pane_g2

0x0003,

0xf713,	// (0x0004693a) signal_pane_g_ParamLimits

0xf713,	// (0x0004693a) signal_pane_g

0xc032,	// (0x00043259) context_pane_g1

0x961e,	// (0x00040845) title_pane_g1

0x9655,	// (0x0004087c) title_pane_t1

0xb43c,	// (0x00042663) title_pane_t2

0xb462,	// (0x00042689) title_pane_t3

0x0002,

0xf55d,	// (0x00046784) title_pane_t

0xa0d2,	// (0x000412f9) aid_levels_battery_ParamLimits

0xa0d2,	// (0x000412f9) aid_levels_battery

0xa0ee,	// (0x00041315) battery_pane_g1_ParamLimits

0xa0ee,	// (0x00041315) battery_pane_g1

0xa10b,	// (0x00041332) battery_pane_g2_ParamLimits

0xa10b,	// (0x00041332) battery_pane_g2

0x0001,

0xf7b6,	// (0x000469dd) battery_pane_g_ParamLimits

0xf7b6,	// (0x000469dd) battery_pane_g

0xa395,	// (0x000415bc) uni_indicator_pane_g1

0xa3aa,	// (0x000415d1) uni_indicator_pane_g2

0xd848,	// (0x00044a6f) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x00046b4e) uni_indicator_pane_g

0xc302,	// (0x00043529) navi_icon_pane_ParamLimits

0xc302,	// (0x00043529) navi_icon_pane

0xc286,	// (0x000434ad) navi_midp_pane

0xc31e,	// (0x00043545) navi_navi_pane

0xc328,	// (0x0004354f) navi_text_pane_ParamLimits

0xc328,	// (0x0004354f) navi_text_pane

0xb41c,	// (0x00042643) status_small_wait_pane_g1

0xb73d,	// (0x00042964) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x00046b49) status_small_wait_pane_g

0xd5ca,	// (0x000447f1) navi_navi_icon_text_pane

0xd5d2,	// (0x000447f9) navi_navi_pane_g1_ParamLimits

0xd5d2,	// (0x000447f9) navi_navi_pane_g1

0xd5e4,	// (0x0004480b) navi_navi_pane_g2_ParamLimits

0xd5e4,	// (0x0004480b) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x00046b17) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x00046b17) navi_navi_pane_g

0xd5f6,	// (0x0004481d) navi_navi_tabs_pane

0xd5ff,	// (0x00044826) navi_navi_text_pane

0xd5ca,	// (0x000447f1) navi_navi_volume_pane

0xd5a6,	// (0x000447cd) navi_text_pane_t1

0xd59a,	// (0x000447c1) navi_icon_pane_g1

0xd501,	// (0x00044728) navi_navi_text_pane_t1

0x8ad4,	// (0x0003fcfb) navi_navi_volume_pane_g1

0x8adc,	// (0x0003fd03) volume_small_pane

0xa278,	// (0x0004149f) navi_navi_icon_text_pane_g1

0xa280,	// (0x000414a7) navi_navi_icon_text_pane_t1

0xc31e,	// (0x00043545) navi_tabs_2_long_pane

0xc31e,	// (0x00043545) navi_tabs_2_pane

0xc31e,	// (0x00043545) navi_tabs_3_long_pane

0xc31e,	// (0x00043545) navi_tabs_3_pane

0xc31e,	// (0x00043545) navi_tabs_4_pane

0x8ab4,	// (0x0003fcdb) tabs_2_active_pane_ParamLimits

0x8ab4,	// (0x0003fcdb) tabs_2_active_pane

0x8ac4,	// (0x0003fceb) tabs_2_passive_pane_ParamLimits

0x8ac4,	// (0x0003fceb) tabs_2_passive_pane

0x8a82,	// (0x0003fca9) tabs_3_active_pane_ParamLimits

0x8a82,	// (0x0003fca9) tabs_3_active_pane

0x8a92,	// (0x0003fcb9) tabs_3_passive_pane_ParamLimits

0x8a92,	// (0x0003fcb9) tabs_3_passive_pane

0x8aa3,	// (0x0003fcca) tabs_3_passive_pane_cp_ParamLimits

0x8aa3,	// (0x0003fcca) tabs_3_passive_pane_cp

0x8a3e,	// (0x0003fc65) tabs_4_active_pane_ParamLimits

0x8a3e,	// (0x0003fc65) tabs_4_active_pane

0x8a4f,	// (0x0003fc76) tabs_4_passive_pane_ParamLimits

0x8a4f,	// (0x0003fc76) tabs_4_passive_pane

0x8a60,	// (0x0003fc87) tabs_4_passive_pane_cp_ParamLimits

0x8a60,	// (0x0003fc87) tabs_4_passive_pane_cp

0x8a71,	// (0x0003fc98) tabs_4_passive_pane_cp2_ParamLimits

0x8a71,	// (0x0003fc98) tabs_4_passive_pane_cp2

0x8a1e,	// (0x0003fc45) tabs_2_long_active_pane_ParamLimits

0x8a1e,	// (0x0003fc45) tabs_2_long_active_pane

0x8a2e,	// (0x0003fc55) tabs_2_long_passive_pane_ParamLimits

0x8a2e,	// (0x0003fc55) tabs_2_long_passive_pane

0x89e9,	// (0x0003fc10) tabs_3_long_active_pane_ParamLimits

0x89e9,	// (0x0003fc10) tabs_3_long_active_pane

0x89fa,	// (0x0003fc21) tabs_3_long_passive_pane_ParamLimits

0x89fa,	// (0x0003fc21) tabs_3_long_passive_pane

0x8a0d,	// (0x0003fc34) tabs_3_long_passive_pane_cp_ParamLimits

0x8a0d,	// (0x0003fc34) tabs_3_long_passive_pane_cp

0x2efb,	// (0x0003a122) volume_small_pane_g1

0x8998,	// (0x0003fbbf) volume_small_pane_g2

0x89a1,	// (0x0003fbc8) volume_small_pane_g3

0x89aa,	// (0x0003fbd1) volume_small_pane_g4

0x89b3,	// (0x0003fbda) volume_small_pane_g5

0x89bc,	// (0x0003fbe3) volume_small_pane_g6

0x89c5,	// (0x0003fbec) volume_small_pane_g7

0x89ce,	// (0x0003fbf5) volume_small_pane_g8

0x89d7,	// (0x0003fbfe) volume_small_pane_g9

0x89e0,	// (0x0003fc07) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x00046ae3) volume_small_pane_g

0xb474,	// (0x0004269b) bg_active_tab_pane_cp2_ParamLimits

0xb474,	// (0x0004269b) bg_active_tab_pane_cp2

0x96e1,	// (0x00040908) tabs_3_active_pane_g1

0x96e9,	// (0x00040910) tabs_3_active_pane_t1

0xb474,	// (0x0004269b) bg_passive_tab_pane_cp2_ParamLimits

0xb474,	// (0x0004269b) bg_passive_tab_pane_cp2

0x96e1,	// (0x00040908) tabs_3_passive_pane_g1

0x96e9,	// (0x00040910) tabs_3_passive_pane_t1

0xb474,	// (0x0004269b) bg_active_tab_pane_cp3_ParamLimits

0xb474,	// (0x0004269b) bg_active_tab_pane_cp3

0x96fb,	// (0x00040922) tabs_4_active_pane_g1

0x9703,	// (0x0004092a) tabs_4_active_pane_t1

0xb474,	// (0x0004269b) bg_passive_tab_pane_cp3_ParamLimits

0xb474,	// (0x0004269b) bg_passive_tab_pane_cp3

0x96fb,	// (0x00040922) tabs_4_1_passive_pane_g1

0x9703,	// (0x0004092a) tabs_4_1_passive_pane_t1

0xbbe7,	// (0x00042e0e) list_highlight_pane_cp2

0xa437,	// (0x0004165e) list_set_pane_ParamLimits

0xa437,	// (0x0004165e) list_set_pane

0xa4d1,	// (0x000416f8) main_pane_set_t1_ParamLimits

0xa4d1,	// (0x000416f8) main_pane_set_t1

0xa4f1,	// (0x00041718) main_pane_set_t2_ParamLimits

0xa4f1,	// (0x00041718) main_pane_set_t2

0xa505,	// (0x0004172c) main_pane_set_t3_ParamLimits

0xa505,	// (0x0004172c) main_pane_set_t3

0xa517,	// (0x0004173e) main_pane_set_t4_ParamLimits

0xa517,	// (0x0004173e) main_pane_set_t4

0x0003,

0xf98c,	// (0x00046bb3) main_pane_set_t_ParamLimits

0xf98c,	// (0x00046bb3) main_pane_set_t

0xa529,	// (0x00041750) setting_code_pane

0xa531,	// (0x00041758) setting_slider_graphic_pane

0xa531,	// (0x00041758) setting_slider_pane

0xa531,	// (0x00041758) setting_text_pane

0xa531,	// (0x00041758) setting_volume_pane

0x16c2,	// (0x000388e9) volume_set_pane

0xb482,	// (0x000426a9) bg_set_opt_pane_cp

0x16ca,	// (0x000388f1) setting_slider_pane_t1

0x16e3,	// (0x0003890a) setting_slider_pane_t2

0x16fc,	// (0x00038923) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0004678b) setting_slider_pane_t

0x1713,	// (0x0003893a) slider_set_pane

0xb426,	// (0x0004264d) bg_set_opt_pane_cp2

0xb490,	// (0x000426b7) setting_slider_graphic_pane_g1

0x1729,	// (0x00038950) setting_slider_graphic_pane_t1

0x1738,	// (0x0003895f) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00046792) setting_slider_graphic_pane_t

0x1747,	// (0x0003896e) slider_set_pane_cp

0xb426,	// (0x0004264d) input_focus_pane_cp1

0xda25,	// (0x00044c4c) list_set_text_pane

0xb41c,	// (0x00042643) setting_text_pane_g1

0xb426,	// (0x0004264d) input_focus_pane_cp2

0xb41c,	// (0x00042643) setting_code_pane_g1

0xb499,	// (0x000426c0) setting_code_pane_t1

0x0391,	// (0x000375b8) set_text_pane_t1_ParamLimits

0x0391,	// (0x000375b8) set_text_pane_t1

0xbade,	// (0x00042d05) set_opt_bg_pane_g1

0xbae6,	// (0x00042d0d) set_opt_bg_pane_g2

0xda05,	// (0x00044c2c) set_opt_bg_pane_g3

0xbaf6,	// (0x00042d1d) set_opt_bg_pane_g4

0xbafe,	// (0x00042d25) set_opt_bg_pane_g5

0xbb06,	// (0x00042d2d) set_opt_bg_pane_g6

0xda0d,	// (0x00044c34) set_opt_bg_pane_g7

0xda15,	// (0x00044c3c) set_opt_bg_pane_g8

0xda1d,	// (0x00044c44) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x00046ba0) set_opt_bg_pane_g

0xd9f8,	// (0x00044c1f) slider_set_pane_g1

0x3252,	// (0x0003a479) slider_set_pane_g2

0x0006,

0xf96a,	// (0x00046b91) slider_set_pane_g

0x31c9,	// (0x0003a3f0) volume_set_pane_g1

0x31d1,	// (0x0003a3f8) volume_set_pane_g2

0x31d9,	// (0x0003a400) volume_set_pane_g3

0x31e1,	// (0x0003a408) volume_set_pane_g4

0x31e9,	// (0x0003a410) volume_set_pane_g5

0x31f1,	// (0x0003a418) volume_set_pane_g6

0x31f9,	// (0x0003a420) volume_set_pane_g7

0x3201,	// (0x0003a428) volume_set_pane_g8

0x3209,	// (0x0003a430) volume_set_pane_g9

0x3211,	// (0x0003a438) volume_set_pane_g10

0x0009,

0xf942,	// (0x00046b69) volume_set_pane_g

0x9715,	// (0x0004093c) indicator_pane_ParamLimits

0x9715,	// (0x0004093c) indicator_pane

0x973d,	// (0x00040964) main_idle_pane_g2_ParamLimits

0x973d,	// (0x00040964) main_idle_pane_g2

0x9775,	// (0x0004099c) main_pane_idle_g1_ParamLimits

0x9775,	// (0x0004099c) main_pane_idle_g1

0xb4a7,	// (0x000426ce) popup_clock_digital_analogue_window_ParamLimits

0xb4a7,	// (0x000426ce) popup_clock_digital_analogue_window

0x979c,	// (0x000409c3) soft_indicator_pane_ParamLimits

0x979c,	// (0x000409c3) soft_indicator_pane

0x97b6,	// (0x000409dd) wallpaper_pane_ParamLimits

0x97b6,	// (0x000409dd) wallpaper_pane

0xb41c,	// (0x00042643) wallpaper_pane_g1

0x97c8,	// (0x000409ef) indicator_pane_g1_ParamLimits

0x97c8,	// (0x000409ef) indicator_pane_g1

0xdb7b,	// (0x00044da2) navi_navi_icon_text_pane_srt_g1

0xb4d5,	// (0x000426fc) soft_indicator_pane_t1

0xb4ef,	// (0x00042716) aid_ps_area_pane

0x97e1,	// (0x00040a08) aid_ps_clock_pane

0xb500,	// (0x00042727) aid_ps_indicator_pane

0xb50c,	// (0x00042733) indicator_ps_pane_ParamLimits

0xb50c,	// (0x00042733) indicator_ps_pane

0xb51b,	// (0x00042742) power_save_pane_g1_ParamLimits

0xb51b,	// (0x00042742) power_save_pane_g1

0xb527,	// (0x0004274e) power_save_pane_g2_ParamLimits

0xb527,	// (0x0004274e) power_save_pane_g2

0x122b,	// (0x00038452) aid_navinavi_width_pane

0xb4ef,	// (0x00042716) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00046797) power_save_pane_g_ParamLimits

0xf570,	// (0x00046797) power_save_pane_g

0xb535,	// (0x0004275c) power_save_pane_t1_ParamLimits

0xb535,	// (0x0004275c) power_save_pane_t1

0x97e1,	// (0x00040a08) aid_ps_clock_pane_ParamLimits

0xb500,	// (0x00042727) aid_ps_indicator_pane_ParamLimits

0xb547,	// (0x0004276e) power_save_pane_t4_ParamLimits

0xb547,	// (0x0004276e) power_save_pane_t4

0x0001,

0xf575,	// (0x0004679c) power_save_pane_t_ParamLimits

0xf575,	// (0x0004679c) power_save_pane_t

0xb571,	// (0x00042798) power_save_t3_ParamLimits

0xb571,	// (0x00042798) power_save_t3

0xb55c,	// (0x00042783) power_save_t2_ParamLimits

0xb55c,	// (0x00042783) power_save_t2

0xb586,	// (0x000427ad) indicator_ps_pane_g1

0x97ef,	// (0x00040a16) ai_gene_pane_ParamLimits

0x97ef,	// (0x00040a16) ai_gene_pane

0x9806,	// (0x00040a2d) ai_links_pane_ParamLimits

0x9806,	// (0x00040a2d) ai_links_pane

0x981e,	// (0x00040a45) indicator_pane_cp1_ParamLimits

0x981e,	// (0x00040a45) indicator_pane_cp1

0x982d,	// (0x00040a54) main_pane_idle_g1_cp_ParamLimits

0x982d,	// (0x00040a54) main_pane_idle_g1_cp

0xb58f,	// (0x000427b6) popup_ai_links_title_window

0x9845,	// (0x00040a6c) soft_indicator_pane_cp1_ParamLimits

0x9845,	// (0x00040a6c) soft_indicator_pane_cp1

0xd836,	// (0x00044a5d) ai_links_pane_g1

0xd83f,	// (0x00044a66) grid_ai_links_pane

0xa38c,	// (0x000415b3) ai_gene_pane_1

0xd824,	// (0x00044a4b) ai_gene_pane_2

0xd82d,	// (0x00044a54) list_highlight_pane_cp4

0xa368,	// (0x0004158f) cell_ai_link_pane_ParamLimits

0xa368,	// (0x0004158f) cell_ai_link_pane

0xd81c,	// (0x00044a43) cell_ai_link_pane_g1

0xb73d,	// (0x00042964) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x00046b44) cell_ai_link_pane_g

0xb426,	// (0x0004264d) grid_highlight_cp2

0xb426,	// (0x0004264d) bg_popup_sub_pane_cp1

0xb5a6,	// (0x000427cd) popup_ai_links_title_window_t1

0xd78e,	// (0x000449b5) ai_gene_pane_1_g1_ParamLimits

0xd78e,	// (0x000449b5) ai_gene_pane_1_g1

0xd79a,	// (0x000449c1) ai_gene_pane_1_g2_ParamLimits

0xd79a,	// (0x000449c1) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x00046b3a) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x00046b3a) ai_gene_pane_1_g

0xd7a7,	// (0x000449ce) ai_gene_pane_1_t1_ParamLimits

0xd7a7,	// (0x000449ce) ai_gene_pane_1_t1

0xd7db,	// (0x00044a02) grid_ai_soft_ind_pane

0xd779,	// (0x000449a0) ai_gene_pane_2_t1_ParamLimits

0xd779,	// (0x000449a0) ai_gene_pane_2_t1

0x9859,	// (0x00040a80) main_pane_empty_t1_ParamLimits

0x9859,	// (0x00040a80) main_pane_empty_t1

0x9871,	// (0x00040a98) main_pane_empty_t2_ParamLimits

0x9871,	// (0x00040a98) main_pane_empty_t2

0x9886,	// (0x00040aad) main_pane_empty_t3_ParamLimits

0x9886,	// (0x00040aad) main_pane_empty_t3

0x9898,	// (0x00040abf) main_pane_empty_t4_ParamLimits

0x9898,	// (0x00040abf) main_pane_empty_t4

0x98aa,	// (0x00040ad1) main_pane_empty_t5_ParamLimits

0x98aa,	// (0x00040ad1) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000467a1) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000467a1) main_pane_empty_t

0xbb2f,	// (0x00042d56) bg_popup_window_pane_ParamLimits

0xbb2f,	// (0x00042d56) bg_popup_window_pane

0xd50f,	// (0x00044736) find_popup_pane_cp2_ParamLimits

0xd50f,	// (0x00044736) find_popup_pane_cp2

0xd51b,	// (0x00044742) heading_pane_ParamLimits

0xd51b,	// (0x00044742) heading_pane

0xb426,	// (0x0004264d) bg_popup_sub_pane

0xa29d,	// (0x000414c4) bg_popup_window_pane_g1_ParamLimits

0xa29d,	// (0x000414c4) bg_popup_window_pane_g1

0xa2ac,	// (0x000414d3) bg_popup_window_pane_g2_ParamLimits

0xa2ac,	// (0x000414d3) bg_popup_window_pane_g2

0xa2b8,	// (0x000414df) bg_popup_window_pane_g3_ParamLimits

0xa2b8,	// (0x000414df) bg_popup_window_pane_g3

0xa2c4,	// (0x000414eb) bg_popup_window_pane_g4_ParamLimits

0xa2c4,	// (0x000414eb) bg_popup_window_pane_g4

0xa2d3,	// (0x000414fa) bg_popup_window_pane_g5_ParamLimits

0xa2d3,	// (0x000414fa) bg_popup_window_pane_g5

0xa2e3,	// (0x0004150a) bg_popup_window_pane_g6_ParamLimits

0xa2e3,	// (0x0004150a) bg_popup_window_pane_g6

0xa2ef,	// (0x00041516) bg_popup_window_pane_g7_ParamLimits

0xa2ef,	// (0x00041516) bg_popup_window_pane_g7

0xa2fe,	// (0x00041525) bg_popup_window_pane_g8_ParamLimits

0xa2fe,	// (0x00041525) bg_popup_window_pane_g8

0xa30d,	// (0x00041534) bg_popup_window_pane_g9_ParamLimits

0xa30d,	// (0x00041534) bg_popup_window_pane_g9

0xd4f5,	// (0x0004471c) bg_popup_window_pane_g10_ParamLimits

0xd4f5,	// (0x0004471c) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x00046b02) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x00046b02) bg_popup_window_pane_g

0xd4ac,	// (0x000446d3) bg_popup_heading_pane_ParamLimits

0xd4ac,	// (0x000446d3) bg_popup_heading_pane

0x354a,	// (0x0003a771) tabs_4_passive_pane_cp_srt_ParamLimits

0x354a,	// (0x0003a771) tabs_4_passive_pane_cp_srt

0x355c,	// (0x0003a783) tabs_4_passive_pane_srt_ParamLimits

0xd4c0,	// (0x000446e7) heading_pane_g2

0x355c,	// (0x0003a783) tabs_4_passive_pane_srt

0xc98e,	// (0x00043bb5) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc98e,	// (0x00043bb5) bg_passive_tab_pane_cp3_srt

0xd4c8,	// (0x000446ef) heading_pane_t1_ParamLimits

0xd4c8,	// (0x000446ef) heading_pane_t1

0xd4df,	// (0x00044706) heading_pane_t2_ParamLimits

0xd4df,	// (0x00044706) heading_pane_t2

0x0001,

0xf8d6,	// (0x00046afd) heading_pane_t_ParamLimits

0xf8d6,	// (0x00046afd) heading_pane_t

0xd01a,	// (0x00044241) bg_popup_heading_pane_g1

0xd0ab,	// (0x000442d2) bg_popup_heading_pane_g2

0xd0b5,	// (0x000442dc) bg_popup_heading_pane_g3

0xd0bf,	// (0x000442e6) bg_popup_heading_pane_g4

0xd0c9,	// (0x000442f0) bg_popup_heading_pane_g5

0xd0d3,	// (0x000442fa) bg_popup_heading_pane_g6

0xd0db,	// (0x00044302) bg_popup_heading_pane_g7

0xd0e3,	// (0x0004430a) bg_popup_heading_pane_g8

0xd0ed,	// (0x00044314) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x00046ab9) bg_popup_heading_pane_g

0xc89e,	// (0x00043ac5) bg_popup_sub_pane_g1

0xc8a6,	// (0x00043acd) bg_popup_sub_pane_g2

0xc8ae,	// (0x00043ad5) bg_popup_sub_pane_g3

0xc8b6,	// (0x00043add) bg_popup_sub_pane_g4

0xc8be,	// (0x00043ae5) bg_popup_sub_pane_g5

0xc8c6,	// (0x00043aed) bg_popup_sub_pane_g6

0xc8ce,	// (0x00043af5) bg_popup_sub_pane_g7

0xc8d6,	// (0x00043afd) bg_popup_sub_pane_g8

0xc8de,	// (0x00043b05) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x00046a93) bg_popup_sub_pane_g

0xb474,	// (0x0004269b) bg_popup_window_pane_cp5_ParamLimits

0xb474,	// (0x0004269b) bg_popup_window_pane_cp5

0xb5c3,	// (0x000427ea) popup_note_window_g1_ParamLimits

0xb5c3,	// (0x000427ea) popup_note_window_g1

0xb5cf,	// (0x000427f6) popup_note_window_t1_ParamLimits

0xb5cf,	// (0x000427f6) popup_note_window_t1

0xb5e1,	// (0x00042808) popup_note_window_t2_ParamLimits

0xb5e1,	// (0x00042808) popup_note_window_t2

0xb5f3,	// (0x0004281a) popup_note_window_t3_ParamLimits

0xb5f3,	// (0x0004281a) popup_note_window_t3

0xb605,	// (0x0004282c) popup_note_window_t4_ParamLimits

0xb605,	// (0x0004282c) popup_note_window_t4

0xb62d,	// (0x00042854) popup_note_window_t5_ParamLimits

0xb62d,	// (0x00042854) popup_note_window_t5

0x0004,

0xf585,	// (0x000467ac) popup_note_window_t_ParamLimits

0xf585,	// (0x000467ac) popup_note_window_t

0xb651,	// (0x00042878) bg_popup_window_pane_cp6_ParamLimits

0xb651,	// (0x00042878) bg_popup_window_pane_cp6

0xcf8e,	// (0x000441b5) popup_note_image_window_g1_ParamLimits

0xcf8e,	// (0x000441b5) popup_note_image_window_g1

0xcf9a,	// (0x000441c1) popup_note_image_window_g2_ParamLimits

0xcf9a,	// (0x000441c1) popup_note_image_window_g2

0x0001,

0xf860,	// (0x00046a87) popup_note_image_window_g_ParamLimits

0xf860,	// (0x00046a87) popup_note_image_window_g

0xcfb3,	// (0x000441da) popup_note_image_window_t1_ParamLimits

0xcfb3,	// (0x000441da) popup_note_image_window_t1

0xcfcc,	// (0x000441f3) popup_note_image_window_t2_ParamLimits

0xcfcc,	// (0x000441f3) popup_note_image_window_t2

0xcfe5,	// (0x0004420c) popup_note_image_window_t3_ParamLimits

0xcfe5,	// (0x0004420c) popup_note_image_window_t3

0x0002,

0xf865,	// (0x00046a8c) popup_note_image_window_t_ParamLimits

0xf865,	// (0x00046a8c) popup_note_image_window_t

0xce6b,	// (0x00044092) bg_popup_window_pane_cp7_ParamLimits

0xce6b,	// (0x00044092) bg_popup_window_pane_cp7

0xce9b,	// (0x000440c2) popup_note_wait_window_g1_ParamLimits

0xce9b,	// (0x000440c2) popup_note_wait_window_g1

0xcea7,	// (0x000440ce) popup_note_wait_window_g2_ParamLimits

0xcea7,	// (0x000440ce) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x00046a75) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x00046a75) popup_note_wait_window_g

0xcebf,	// (0x000440e6) popup_note_wait_window_t1_ParamLimits

0xcebf,	// (0x000440e6) popup_note_wait_window_t1

0xcee6,	// (0x0004410d) popup_note_wait_window_t2_ParamLimits

0xcee6,	// (0x0004410d) popup_note_wait_window_t2

0xcf03,	// (0x0004412a) popup_note_wait_window_t3_ParamLimits

0xcf03,	// (0x0004412a) popup_note_wait_window_t3

0xcf16,	// (0x0004413d) popup_note_wait_window_t4_ParamLimits

0xcf16,	// (0x0004413d) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x00046a7c) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x00046a7c) popup_note_wait_window_t

0xcf3b,	// (0x00044162) wait_bar_pane_ParamLimits

0xcf3b,	// (0x00044162) wait_bar_pane

0xb426,	// (0x0004264d) wait_anim_pane

0xb426,	// (0x0004264d) wait_border_pane

0xb41c,	// (0x00042643) wait_anim_pane_g1

0xb41c,	// (0x00042643) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x00046935) wait_anim_pane_g

0xce0f,	// (0x00044036) wait_border_pane_g1

0xce1a,	// (0x00044041) wait_border_pane_g2

0xce23,	// (0x0004404a) wait_border_pane_g3

0x0002,

0xf847,	// (0x00046a6e) wait_border_pane_g

0xcc65,	// (0x00043e8c) bg_popup_window_pane_cp16_ParamLimits

0xcc65,	// (0x00043e8c) bg_popup_window_pane_cp16

0xcd7f,	// (0x00043fa6) indicator_popup_pane_cp4_ParamLimits

0xcd7f,	// (0x00043fa6) indicator_popup_pane_cp4

0xcd93,	// (0x00043fba) popup_query_data_window_t1_ParamLimits

0xcd93,	// (0x00043fba) popup_query_data_window_t1

0xcda5,	// (0x00043fcc) popup_query_data_window_t2_ParamLimits

0xcda5,	// (0x00043fcc) popup_query_data_window_t2

0xcdbe,	// (0x00043fe5) popup_query_data_window_t3_ParamLimits

0xcdbe,	// (0x00043fe5) popup_query_data_window_t3

0x0002,

0xf840,	// (0x00046a67) popup_query_data_window_t_ParamLimits

0xf840,	// (0x00046a67) popup_query_data_window_t

0xcdd8,	// (0x00043fff) query_popup_data_pane_ParamLimits

0xcdd8,	// (0x00043fff) query_popup_data_pane

0xcdec,	// (0x00044013) query_popup_data_pane_cp1_ParamLimits

0xcdec,	// (0x00044013) query_popup_data_pane_cp1

0xcc65,	// (0x00043e8c) bg_popup_window_pane_cp10_ParamLimits

0xcc65,	// (0x00043e8c) bg_popup_window_pane_cp10

0xcc97,	// (0x00043ebe) indicator_popup_pane_ParamLimits

0xcc97,	// (0x00043ebe) indicator_popup_pane

0xccb9,	// (0x00043ee0) popup_query_code_window_t1_ParamLimits

0xccb9,	// (0x00043ee0) popup_query_code_window_t1

0xccd3,	// (0x00043efa) popup_query_code_window_t2_ParamLimits

0xccd3,	// (0x00043efa) popup_query_code_window_t2

0xcd36,	// (0x00043f5d) popup_query_code_window_t3_ParamLimits

0xcd36,	// (0x00043f5d) popup_query_code_window_t3

0x0002,

0xf839,	// (0x00046a60) popup_query_code_window_t_ParamLimits

0xf839,	// (0x00046a60) popup_query_code_window_t

0xcd65,	// (0x00043f8c) query_popup_pane_ParamLimits

0xcd65,	// (0x00043f8c) query_popup_pane

0xb651,	// (0x00042878) bg_popup_window_pane_cp15_ParamLimits

0xb651,	// (0x00042878) bg_popup_window_pane_cp15

0xb66f,	// (0x00042896) indicator_popup_pane_cp1_ParamLimits

0xb66f,	// (0x00042896) indicator_popup_pane_cp1

0xb682,	// (0x000428a9) indicator_popup_pane_cp2_ParamLimits

0xb682,	// (0x000428a9) indicator_popup_pane_cp2

0xb695,	// (0x000428bc) popup_query_data_code_window_g1_ParamLimits

0xb695,	// (0x000428bc) popup_query_data_code_window_g1

0xb6a8,	// (0x000428cf) popup_query_data_code_window_t1_ParamLimits

0xb6a8,	// (0x000428cf) popup_query_data_code_window_t1

0xb6ba,	// (0x000428e1) popup_query_data_code_window_t2_ParamLimits

0xb6ba,	// (0x000428e1) popup_query_data_code_window_t2

0xb6cc,	// (0x000428f3) popup_query_data_code_window_t3_ParamLimits

0xb6cc,	// (0x000428f3) popup_query_data_code_window_t3

0xb6e2,	// (0x00042909) popup_query_data_code_window_t4_ParamLimits

0xb6e2,	// (0x00042909) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000467b7) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000467b7) popup_query_data_code_window_t

0xc2d2,	// (0x000434f9) list_single_midp_graphic_pane_g3

0xb6fa,	// (0x00042921) query_popup_data_pane_cp2_ParamLimits

0xb70d,	// (0x00042934) query_popup_pane_cp2_ParamLimits

0xb70d,	// (0x00042934) query_popup_pane_cp2

0xb426,	// (0x0004264d) bg_popup_window_pane_cp11

0xcc5d,	// (0x00043e84) heading_pane_cp5

0xb79b,	// (0x000429c2) listscroll_popup_info_pane

0xb426,	// (0x0004264d) input_focus_pane_cp3

0xb720,	// (0x00042947) query_popup_pane_t1

0xb72e,	// (0x00042955) list_popup_info_pane_ParamLimits

0xb72e,	// (0x00042955) list_popup_info_pane

0xb73d,	// (0x00042964) listscroll_popup_info_pane_g1

0xb745,	// (0x0004296c) scroll_pane_cp7

0xb74f,	// (0x00042976) popup_info_list_pane_t1_ParamLimits

0xb74f,	// (0x00042976) popup_info_list_pane_t1

0xb769,	// (0x00042990) popup_info_list_pane_t2_ParamLimits

0xb769,	// (0x00042990) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000467c0) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000467c0) popup_info_list_pane_t

0xb426,	// (0x0004264d) bg_popup_window_pane_cp12

0xdb95,	// (0x00044dbc) find_popup_pane

0xb482,	// (0x000426a9) bg_popup_window_pane_cp3

0xb783,	// (0x000429aa) heading_pane_cp3

0xb78f,	// (0x000429b6) listscroll_popup_graphic_pane

0xb426,	// (0x0004264d) bg_popup_window_pane_cp4

0x990c,	// (0x00040b33) heading_pane_cp4

0xb79b,	// (0x000429c2) listscroll_popup_colour_pane

0x9914,	// (0x00040b3b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9914,	// (0x00040b3b) cell_large_graphic_colour_none_popup_pane

0x9928,	// (0x00040b4f) grid_large_graphic_colour_popup_pane_ParamLimits

0x9928,	// (0x00040b4f) grid_large_graphic_colour_popup_pane

0x994c,	// (0x00040b73) listscroll_popup_colour_pane_g1_ParamLimits

0x994c,	// (0x00040b73) listscroll_popup_colour_pane_g1

0x9963,	// (0x00040b8a) listscroll_popup_colour_pane_g2_ParamLimits

0x9963,	// (0x00040b8a) listscroll_popup_colour_pane_g2

0x997a,	// (0x00040ba1) listscroll_popup_colour_pane_g3_ParamLimits

0x997a,	// (0x00040ba1) listscroll_popup_colour_pane_g3

0x998a,	// (0x00040bb1) listscroll_popup_colour_pane_g4_ParamLimits

0x998a,	// (0x00040bb1) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000467c5) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000467c5) listscroll_popup_colour_pane_g

0xb7a3,	// (0x000429ca) scroll_pane_cp6_ParamLimits

0xb7a3,	// (0x000429ca) scroll_pane_cp6

0x9999,	// (0x00040bc0) cell_large_graphic_colour_popup_pane_ParamLimits

0x9999,	// (0x00040bc0) cell_large_graphic_colour_popup_pane

0xb7b5,	// (0x000429dc) cell_large_graphic_colour_none_popup_pane_t1

0xb426,	// (0x0004264d) grid_highlight_pane_cp5

0xb7c4,	// (0x000429eb) cell_large_graphic_colour_popup_pane_g1

0xb7cc,	// (0x000429f3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000467ce) cell_large_graphic_colour_popup_pane_g

0xb7d4,	// (0x000429fb) cell_large_graphic_colour_popup_pane_g2_copy1

0xb7dd,	// (0x00042a04) grid_highlight_pane_cp4

0xb7e5,	// (0x00042a0c) bg_popup_window_pane_cp8_ParamLimits

0xb7e5,	// (0x00042a0c) bg_popup_window_pane_cp8

0xb800,	// (0x00042a27) popup_snote_single_text_window_g1_ParamLimits

0xb800,	// (0x00042a27) popup_snote_single_text_window_g1

0xb812,	// (0x00042a39) popup_snote_single_text_window_t1_ParamLimits

0xb812,	// (0x00042a39) popup_snote_single_text_window_t1

0xb825,	// (0x00042a4c) popup_snote_single_text_window_t2_ParamLimits

0xb825,	// (0x00042a4c) popup_snote_single_text_window_t2

0xb838,	// (0x00042a5f) popup_snote_single_text_window_t3_ParamLimits

0xb838,	// (0x00042a5f) popup_snote_single_text_window_t3

0xb871,	// (0x00042a98) popup_snote_single_text_window_t4_ParamLimits

0xb871,	// (0x00042a98) popup_snote_single_text_window_t4

0xb8a5,	// (0x00042acc) popup_snote_single_text_window_t5_ParamLimits

0xb8a5,	// (0x00042acc) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000467d3) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000467d3) popup_snote_single_text_window_t

0xb8d4,	// (0x00042afb) bg_popup_window_pane_cp9_ParamLimits

0xb8d4,	// (0x00042afb) bg_popup_window_pane_cp9

0xb800,	// (0x00042a27) popup_snote_single_graphic_window_g1_ParamLimits

0xb800,	// (0x00042a27) popup_snote_single_graphic_window_g1

0xb8e2,	// (0x00042b09) popup_snote_single_graphic_window_g2_ParamLimits

0xb8e2,	// (0x00042b09) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000467de) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000467de) popup_snote_single_graphic_window_g

0xb8ee,	// (0x00042b15) popup_snote_single_graphic_window_t1_ParamLimits

0xb8ee,	// (0x00042b15) popup_snote_single_graphic_window_t1

0xb901,	// (0x00042b28) popup_snote_single_graphic_window_t2_ParamLimits

0xb901,	// (0x00042b28) popup_snote_single_graphic_window_t2

0xb914,	// (0x00042b3b) popup_snote_single_graphic_window_t3_ParamLimits

0xb914,	// (0x00042b3b) popup_snote_single_graphic_window_t3

0xb94d,	// (0x00042b74) popup_snote_single_graphic_window_t4_ParamLimits

0xb94d,	// (0x00042b74) popup_snote_single_graphic_window_t4

0xb981,	// (0x00042ba8) popup_snote_single_graphic_window_t5_ParamLimits

0xb981,	// (0x00042ba8) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000467e3) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000467e3) popup_snote_single_graphic_window_t

0xdb19,	// (0x00044d40) grid_graphic_popup_pane_ParamLimits

0xdb19,	// (0x00044d40) grid_graphic_popup_pane

0xdb45,	// (0x00044d6c) listscroll_popup_graphic_pane_g1_ParamLimits

0xdb45,	// (0x00044d6c) listscroll_popup_graphic_pane_g1

0xa61f,	// (0x00041846) listscroll_popup_graphic_pane_g2_ParamLimits

0xa61f,	// (0x00041846) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x00046bdd) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x00046bdd) listscroll_popup_graphic_pane_g

0xd39f,	// (0x000445c6) scroll_pane_cp5

0xa5e3,	// (0x0004180a) cell_graphic_popup_pane_ParamLimits

0xa5e3,	// (0x0004180a) cell_graphic_popup_pane

0xdae4,	// (0x00044d0b) cell_graphic_popup_pane_g1

0xdaec,	// (0x00044d13) cell_graphic_popup_pane_g2

0xb7d4,	// (0x000429fb) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x00046bd6) cell_graphic_popup_pane_g

0xdaf5,	// (0x00044d1c) cell_graphic_popup_pane_t2

0xb7dd,	// (0x00042a04) grid_highlight_pane_cp3

0xb9c2,	// (0x00042be9) list_gen_pane_ParamLimits

0xb9c2,	// (0x00042be9) list_gen_pane

0xb9ea,	// (0x00042c11) scroll_pane

0xa59e,	// (0x000417c5) bg_list_pane_g1_ParamLimits

0xa59e,	// (0x000417c5) bg_list_pane_g1

0xda93,	// (0x00044cba) bg_list_pane_g2_ParamLimits

0xda93,	// (0x00044cba) bg_list_pane_g2

0xdaa6,	// (0x00044ccd) bg_list_pane_g3_ParamLimits

0xdaa6,	// (0x00044ccd) bg_list_pane_g3

0xdab8,	// (0x00044cdf) bg_list_pane_g4_ParamLimits

0xdab8,	// (0x00044cdf) bg_list_pane_g4

0xa5b9,	// (0x000417e0) bg_list_pane_g5_ParamLimits

0xa5b9,	// (0x000417e0) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x00046bcb) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x00046bcb) bg_list_pane_g

0xa564,	// (0x0004178b) list_double2_graphic_large_graphic_pane_ParamLimits

0xa564,	// (0x0004178b) list_double2_graphic_large_graphic_pane

0xa564,	// (0x0004178b) list_double2_graphic_pane_ParamLimits

0xa564,	// (0x0004178b) list_double2_graphic_pane

0xa564,	// (0x0004178b) list_double2_large_graphic_pane_ParamLimits

0xa564,	// (0x0004178b) list_double2_large_graphic_pane

0xa564,	// (0x0004178b) list_double2_pane_ParamLimits

0xa564,	// (0x0004178b) list_double2_pane

0xa564,	// (0x0004178b) list_double_graphic_heading_pane_ParamLimits

0xa564,	// (0x0004178b) list_double_graphic_heading_pane

0xa564,	// (0x0004178b) list_double_graphic_pane_ParamLimits

0xa564,	// (0x0004178b) list_double_graphic_pane

0xa564,	// (0x0004178b) list_double_heading_pane_ParamLimits

0xa564,	// (0x0004178b) list_double_heading_pane

0xa564,	// (0x0004178b) list_double_large_graphic_pane_ParamLimits

0xa564,	// (0x0004178b) list_double_large_graphic_pane

0xa564,	// (0x0004178b) list_double_number_pane_ParamLimits

0xa564,	// (0x0004178b) list_double_number_pane

0xa564,	// (0x0004178b) list_double_pane_ParamLimits

0xa564,	// (0x0004178b) list_double_pane

0xa564,	// (0x0004178b) list_double_time_pane_ParamLimits

0xa564,	// (0x0004178b) list_double_time_pane

0xa564,	// (0x0004178b) list_setting_number_pane_ParamLimits

0xa564,	// (0x0004178b) list_setting_number_pane

0xa564,	// (0x0004178b) list_setting_pane_ParamLimits

0xa564,	// (0x0004178b) list_setting_pane

0xa577,	// (0x0004179e) list_single_2graphic_pane_ParamLimits

0xa577,	// (0x0004179e) list_single_2graphic_pane

0xa577,	// (0x0004179e) list_single_graphic_heading_pane_ParamLimits

0xa577,	// (0x0004179e) list_single_graphic_heading_pane

0xa577,	// (0x0004179e) list_single_graphic_pane_ParamLimits

0xa577,	// (0x0004179e) list_single_graphic_pane

0xa577,	// (0x0004179e) list_single_heading_pane_ParamLimits

0xa577,	// (0x0004179e) list_single_heading_pane

0xa577,	// (0x0004179e) list_single_large_graphic_pane_ParamLimits

0xa577,	// (0x0004179e) list_single_large_graphic_pane

0xa577,	// (0x0004179e) list_single_number_heading_pane_ParamLimits

0xa577,	// (0x0004179e) list_single_number_heading_pane

0xa577,	// (0x0004179e) list_single_number_pane_ParamLimits

0xa577,	// (0x0004179e) list_single_number_pane

0xa577,	// (0x0004179e) list_single_pane_ParamLimits

0xa577,	// (0x0004179e) list_single_pane

0xb426,	// (0x0004264d) list_highlight_pane_cp1

0x1989,	// (0x00038bb0) list_single_pane_g1_ParamLimits

0x1989,	// (0x00038bb0) list_single_pane_g1

0x1995,	// (0x00038bbc) list_single_pane_g2_ParamLimits

0x1995,	// (0x00038bbc) list_single_pane_g2

0x0001,

0xf5d8,	// (0x000467ff) list_single_pane_g_ParamLimits

0xf5d8,	// (0x000467ff) list_single_pane_g

0x0cef,	// (0x00037f16) list_single_pane_t1_ParamLimits

0x0cef,	// (0x00037f16) list_single_pane_t1

0x1989,	// (0x00038bb0) list_single_number_pane_g1_ParamLimits

0x1989,	// (0x00038bb0) list_single_number_pane_g1

0x1995,	// (0x00038bbc) list_single_number_pane_g2_ParamLimits

0x1995,	// (0x00038bbc) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x000467ff) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x000467ff) list_single_number_pane_g

0x0b6e,	// (0x00037d95) list_single_number_pane_t1_ParamLimits

0x0b6e,	// (0x00037d95) list_single_number_pane_t1

0x7d19,	// (0x0003ef40) list_single_number_pane_t2_ParamLimits

0x7d19,	// (0x0003ef40) list_single_number_pane_t2

0x0001,

0xf965,	// (0x00046b8c) list_single_number_pane_t_ParamLimits

0xf965,	// (0x00046b8c) list_single_number_pane_t

0x7753,	// (0x0003e97a) list_single_graphic_pane_g1_ParamLimits

0x7753,	// (0x0003e97a) list_single_graphic_pane_g1

0x1989,	// (0x00038bb0) list_single_graphic_pane_g2_ParamLimits

0x1989,	// (0x00038bb0) list_single_graphic_pane_g2

0x1995,	// (0x00038bbc) list_single_graphic_pane_g3_ParamLimits

0x1995,	// (0x00038bbc) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000467ee) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000467ee) list_single_graphic_pane_g

0x775f,	// (0x0003e986) list_single_graphic_pane_t1_ParamLimits

0x775f,	// (0x0003e986) list_single_graphic_pane_t1

0x7775,	// (0x0003e99c) list_single_heading_pane_g1_ParamLimits

0x7775,	// (0x0003e99c) list_single_heading_pane_g1

0x1995,	// (0x00038bbc) list_single_heading_pane_g2_ParamLimits

0x1995,	// (0x00038bbc) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000467f5) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000467f5) list_single_heading_pane_g

0x7788,	// (0x0003e9af) list_single_heading_pane_t1_ParamLimits

0x7788,	// (0x0003e9af) list_single_heading_pane_t1

0x779e,	// (0x0003e9c5) list_single_heading_pane_t2_ParamLimits

0x779e,	// (0x0003e9c5) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000467fa) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000467fa) list_single_heading_pane_t

0x1989,	// (0x00038bb0) list_single_number_heading_pane_g1_ParamLimits

0x1989,	// (0x00038bb0) list_single_number_heading_pane_g1

0x1995,	// (0x00038bbc) list_single_number_heading_pane_g2_ParamLimits

0x1995,	// (0x00038bbc) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x000467ff) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x000467ff) list_single_number_heading_pane_g

0x0d05,	// (0x00037f2c) list_single_number_heading_pane_t1_ParamLimits

0x0d05,	// (0x00037f2c) list_single_number_heading_pane_t1

0x77b0,	// (0x0003e9d7) list_single_number_heading_pane_t2_ParamLimits

0x77b0,	// (0x0003e9d7) list_single_number_heading_pane_t2

0x0cc9,	// (0x00037ef0) list_single_number_heading_pane_t3_ParamLimits

0x0cc9,	// (0x00037ef0) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x00046804) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x00046804) list_single_number_heading_pane_t

0x77c2,	// (0x0003e9e9) list_single_graphic_heading_pane_g1_ParamLimits

0x77c2,	// (0x0003e9e9) list_single_graphic_heading_pane_g1

0x77d6,	// (0x0003e9fd) list_single_graphic_heading_pane_g4_ParamLimits

0x77d6,	// (0x0003e9fd) list_single_graphic_heading_pane_g4

0x1995,	// (0x00038bbc) list_single_graphic_heading_pane_g5_ParamLimits

0x1995,	// (0x00038bbc) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0004680b) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004680b) list_single_graphic_heading_pane_g

0x0d05,	// (0x00037f2c) list_single_graphic_heading_pane_t1_ParamLimits

0x0d05,	// (0x00037f2c) list_single_graphic_heading_pane_t1

0x77e7,	// (0x0003ea0e) list_single_graphic_heading_pane_t2_ParamLimits

0x77e7,	// (0x0003ea0e) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x00046812) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x00046812) list_single_graphic_heading_pane_t

0x3686,	// (0x0003a8ad) list_single_large_graphic_pane_g1_ParamLimits

0x3686,	// (0x0003a8ad) list_single_large_graphic_pane_g1

0x1989,	// (0x00038bb0) list_single_large_graphic_pane_g2_ParamLimits

0x1989,	// (0x00038bb0) list_single_large_graphic_pane_g2

0x1995,	// (0x00038bbc) list_single_large_graphic_pane_g3_ParamLimits

0x1995,	// (0x00038bbc) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00046817) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00046817) list_single_large_graphic_pane_g

0xce1a,	// (0x00044041) wait_border_pane_g2_copy1

0x80b2,	// (0x0003f2d9) list_single_large_graphic_pane_g4_cp2

0x0d05,	// (0x00037f2c) list_single_large_graphic_pane_t1_ParamLimits

0x0d05,	// (0x00037f2c) list_single_large_graphic_pane_t1

0x19dc,	// (0x00038c03) list_double_pane_g1_ParamLimits

0x19dc,	// (0x00038c03) list_double_pane_g1

0x19e8,	// (0x00038c0f) list_double_pane_g2_ParamLimits

0x19e8,	// (0x00038c0f) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0004681e) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0004681e) list_double_pane_g

0x77ff,	// (0x0003ea26) list_double_pane_t1_ParamLimits

0x77ff,	// (0x0003ea26) list_double_pane_t1

0x7815,	// (0x0003ea3c) list_double_pane_t2_ParamLimits

0x7815,	// (0x0003ea3c) list_double_pane_t2

0x0001,

0xf5fc,	// (0x00046823) list_double_pane_t_ParamLimits

0xf5fc,	// (0x00046823) list_double_pane_t

0x7827,	// (0x0003ea4e) list_double2_pane_g1_ParamLimits

0x7827,	// (0x0003ea4e) list_double2_pane_g1

0x0710,	// (0x00037937) list_double2_pane_g2_ParamLimits

0x0710,	// (0x00037937) list_double2_pane_g2

0x0001,

0xf601,	// (0x00046828) list_double2_pane_g_ParamLimits

0xf601,	// (0x00046828) list_double2_pane_g

0x7838,	// (0x0003ea5f) list_double2_pane_t1_ParamLimits

0x7838,	// (0x0003ea5f) list_double2_pane_t1

0x784e,	// (0x0003ea75) list_double2_pane_t2_ParamLimits

0x784e,	// (0x0003ea75) list_double2_pane_t2

0x0001,

0xf606,	// (0x0004682d) list_double2_pane_t_ParamLimits

0xf606,	// (0x0004682d) list_double2_pane_t

0x19dc,	// (0x00038c03) list_double_number_pane_g1_ParamLimits

0x19dc,	// (0x00038c03) list_double_number_pane_g1

0x19e8,	// (0x00038c0f) list_double_number_pane_g2_ParamLimits

0x19e8,	// (0x00038c0f) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0004681e) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0004681e) list_double_number_pane_g

0x7860,	// (0x0003ea87) list_double_number_pane_t1_ParamLimits

0x7860,	// (0x0003ea87) list_double_number_pane_t1

0x0583,	// (0x000377aa) list_double_number_pane_t2_ParamLimits

0x0583,	// (0x000377aa) list_double_number_pane_t2

0x7872,	// (0x0003ea99) list_double_number_pane_t3_ParamLimits

0x7872,	// (0x0003ea99) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00046832) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00046832) list_double_number_pane_t

0x0577,	// (0x0003779e) list_double_graphic_pane_g1_ParamLimits

0x0577,	// (0x0003779e) list_double_graphic_pane_g1

0x80ba,	// (0x0003f2e1) list_double_graphic_pane_g2_ParamLimits

0x80ba,	// (0x0003f2e1) list_double_graphic_pane_g2

0x80c9,	// (0x0003f2f0) list_double_graphic_pane_g3_ParamLimits

0x80c9,	// (0x0003f2f0) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00046839) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00046839) list_double_graphic_pane_g

0x7884,	// (0x0003eaab) list_double_graphic_pane_t1_ParamLimits

0x7884,	// (0x0003eaab) list_double_graphic_pane_t1

0x789a,	// (0x0003eac1) list_double_graphic_pane_t2_ParamLimits

0x789a,	// (0x0003eac1) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00046842) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00046842) list_double_graphic_pane_t

0x78ac,	// (0x0003ead3) list_double2_graphic_pane_g1_ParamLimits

0x78ac,	// (0x0003ead3) list_double2_graphic_pane_g1

0xba51,	// (0x00042c78) list_double2_graphic_pane_g2_ParamLimits

0xba51,	// (0x00042c78) list_double2_graphic_pane_g2

0x80e1,	// (0x0003f308) list_double2_graphic_pane_g3_ParamLimits

0x80e1,	// (0x0003f308) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x00046847) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x00046847) list_double2_graphic_pane_g

0x78b8,	// (0x0003eadf) list_double2_graphic_pane_t1_ParamLimits

0x78b8,	// (0x0003eadf) list_double2_graphic_pane_t1

0x78ce,	// (0x0003eaf5) list_double2_graphic_pane_t2_ParamLimits

0x78ce,	// (0x0003eaf5) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0004684e) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0004684e) list_double2_graphic_pane_t

0x78e0,	// (0x0003eb07) list_double_large_graphic_pane_g1_ParamLimits

0x78e0,	// (0x0003eb07) list_double_large_graphic_pane_g1

0x78ff,	// (0x0003eb26) list_double_large_graphic_pane_g2_ParamLimits

0x78ff,	// (0x0003eb26) list_double_large_graphic_pane_g2

0x19e8,	// (0x00038c0f) list_double_large_graphic_pane_g3_ParamLimits

0x19e8,	// (0x00038c0f) list_double_large_graphic_pane_g3

0x7915,	// (0x0003eb3c) list_double_large_graphic_pane_g4_ParamLimits

0x7915,	// (0x0003eb3c) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00046853) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00046853) list_double_large_graphic_pane_g

0x7928,	// (0x0003eb4f) list_double_large_graphic_pane_t1_ParamLimits

0x7928,	// (0x0003eb4f) list_double_large_graphic_pane_t1

0x7941,	// (0x0003eb68) list_double_large_graphic_pane_t2_ParamLimits

0x7941,	// (0x0003eb68) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0004685e) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0004685e) list_double_large_graphic_pane_t

0x80ed,	// (0x0003f314) list_double2_large_graphic_pane_g1_ParamLimits

0x80ed,	// (0x0003f314) list_double2_large_graphic_pane_g1

0x80f9,	// (0x0003f320) list_double2_large_graphic_pane_g2_ParamLimits

0x80f9,	// (0x0003f320) list_double2_large_graphic_pane_g2

0x80e1,	// (0x0003f308) list_double2_large_graphic_pane_g3_ParamLimits

0x80e1,	// (0x0003f308) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00046863) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00046863) list_double2_large_graphic_pane_g

0x7953,	// (0x0003eb7a) list_double2_large_graphic_pane_t1_ParamLimits

0x7953,	// (0x0003eb7a) list_double2_large_graphic_pane_t1

0x7969,	// (0x0003eb90) list_double2_large_graphic_pane_t2_ParamLimits

0x7969,	// (0x0003eb90) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0004686a) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0004686a) list_double2_large_graphic_pane_t

0x797b,	// (0x0003eba2) list_double_heading_pane_g1_ParamLimits

0x797b,	// (0x0003eba2) list_double_heading_pane_g1

0x798c,	// (0x0003ebb3) list_double_heading_pane_g2_ParamLimits

0x798c,	// (0x0003ebb3) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0004686f) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0004686f) list_double_heading_pane_g

0x7998,	// (0x0003ebbf) list_double_heading_pane_t1_ParamLimits

0x7998,	// (0x0003ebbf) list_double_heading_pane_t1

0x784e,	// (0x0003ea75) list_double_heading_pane_t2_ParamLimits

0x784e,	// (0x0003ea75) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x00046874) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x00046874) list_double_heading_pane_t

0x0537,	// (0x0003775e) list_double_graphic_heading_pane_g1_ParamLimits

0x0537,	// (0x0003775e) list_double_graphic_heading_pane_g1

0x797b,	// (0x0003eba2) list_double_graphic_heading_pane_g2_ParamLimits

0x797b,	// (0x0003eba2) list_double_graphic_heading_pane_g2

0x798c,	// (0x0003ebb3) list_double_graphic_heading_pane_g3_ParamLimits

0x798c,	// (0x0003ebb3) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x00046879) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x00046879) list_double_graphic_heading_pane_g

0x79ae,	// (0x0003ebd5) list_double_graphic_heading_pane_t1_ParamLimits

0x79ae,	// (0x0003ebd5) list_double_graphic_heading_pane_t1

0x78ce,	// (0x0003eaf5) list_double_graphic_heading_pane_t2_ParamLimits

0x78ce,	// (0x0003eaf5) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x00046880) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x00046880) list_double_graphic_heading_pane_t

0x79c4,	// (0x0003ebeb) list_double_time_pane_g1_ParamLimits

0x79c4,	// (0x0003ebeb) list_double_time_pane_g1

0x04c9,	// (0x000376f0) list_double_time_pane_g2_ParamLimits

0x04c9,	// (0x000376f0) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x00046885) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x00046885) list_double_time_pane_g

0x79d5,	// (0x0003ebfc) list_double_time_pane_t1_ParamLimits

0x79d5,	// (0x0003ebfc) list_double_time_pane_t1

0x79eb,	// (0x0003ec12) list_double_time_pane_t2_ParamLimits

0x79eb,	// (0x0003ec12) list_double_time_pane_t2

0x79fd,	// (0x0003ec24) list_double_time_pane_t3_ParamLimits

0x79fd,	// (0x0003ec24) list_double_time_pane_t3

0x7a0f,	// (0x0003ec36) list_double_time_pane_t4_ParamLimits

0x7a0f,	// (0x0003ec36) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0004688a) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0004688a) list_double_time_pane_t

0x0704,	// (0x0003792b) list_setting_pane_g1_ParamLimits

0x0704,	// (0x0003792b) list_setting_pane_g1

0x0710,	// (0x00037937) list_setting_pane_g2_ParamLimits

0x0710,	// (0x00037937) list_setting_pane_g2

0x0001,

0xf66c,	// (0x00046893) list_setting_pane_g_ParamLimits

0xf66c,	// (0x00046893) list_setting_pane_g

0x7a21,	// (0x0003ec48) list_setting_pane_t1_ParamLimits

0x7a21,	// (0x0003ec48) list_setting_pane_t1

0x7a3b,	// (0x0003ec62) list_setting_pane_t2_ParamLimits

0x7a3b,	// (0x0003ec62) list_setting_pane_t2

0x0002,

0xf671,	// (0x00046898) list_setting_pane_t_ParamLimits

0xf671,	// (0x00046898) list_setting_pane_t

0x7a78,	// (0x0003ec9f) set_value_pane_cp_ParamLimits

0x7a78,	// (0x0003ec9f) set_value_pane_cp

0x077f,	// (0x000379a6) list_setting_number_pane_g1_ParamLimits

0x077f,	// (0x000379a6) list_setting_number_pane_g1

0x078b,	// (0x000379b2) list_setting_number_pane_g2_ParamLimits

0x078b,	// (0x000379b2) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0004689f) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0004689f) list_setting_number_pane_g

0x7a84,	// (0x0003ecab) list_setting_number_pane_t1_ParamLimits

0x7a84,	// (0x0003ecab) list_setting_number_pane_t1

0x7a9d,	// (0x0003ecc4) list_setting_number_pane_t2_ParamLimits

0x7a9d,	// (0x0003ecc4) list_setting_number_pane_t2

0x7ab7,	// (0x0003ecde) list_setting_number_pane_t3_ParamLimits

0x7ab7,	// (0x0003ecde) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x000468a4) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x000468a4) list_setting_number_pane_t

0x7a78,	// (0x0003ec9f) set_value_pane_ParamLimits

0x7a78,	// (0x0003ec9f) set_value_pane

0xba1e,	// (0x00042c45) bg_set_opt_pane_ParamLimits

0xba1e,	// (0x00042c45) bg_set_opt_pane

0x080d,	// (0x00037a34) set_value_pane_t1

0xba3f,	// (0x00042c66) slider_set_pane_cp3

0xba48,	// (0x00042c6f) volume_small_pane_cp

0xba5d,	// (0x00042c84) list_form_gen_pane

0xba66,	// (0x00042c8d) scroll_pane_cp8

0x7afa,	// (0x0003ed21) form_field_data_pane_ParamLimits

0x7afa,	// (0x0003ed21) form_field_data_pane

0x7b11,	// (0x0003ed38) form_field_data_wide_pane_ParamLimits

0x7b11,	// (0x0003ed38) form_field_data_wide_pane

0x7b31,	// (0x0003ed58) form_field_popup_pane_ParamLimits

0x7b31,	// (0x0003ed58) form_field_popup_pane

0x7b49,	// (0x0003ed70) form_field_popup_wide_pane_ParamLimits

0x7b49,	// (0x0003ed70) form_field_popup_wide_pane

0x089f,	// (0x00037ac6) form_field_slider_pane_ParamLimits

0x089f,	// (0x00037ac6) form_field_slider_pane

0x08b2,	// (0x00037ad9) form_field_slider_wide_pane_ParamLimits

0x08b2,	// (0x00037ad9) form_field_slider_wide_pane

0xba77,	// (0x00042c9e) data_form_pane

0x7b70,	// (0x0003ed97) form_field_data_pane_t1

0xba83,	// (0x00042caa) input_focus_pane

0xba91,	// (0x00042cb8) data_form_wide_pane

0x08f5,	// (0x00037b1c) form_field_data_wide_pane_t1

0xb7f2,	// (0x00042a19) input_focus_pane_cp6

0x7b8a,	// (0x0003edb1) form_field_popup_pane_t1

0xba83,	// (0x00042caa) input_focus_pane_cp7

0xbab1,	// (0x00042cd8) list_form_pane

0x0939,	// (0x00037b60) form_field_popup_wide_pane_t1

0xba83,	// (0x00042caa) input_focus_pane_cp8

0xbabd,	// (0x00042ce4) list_form_wide_pane

0x7bac,	// (0x0003edd3) form_field_slider_pane_t1_ParamLimits

0x7bac,	// (0x0003edd3) form_field_slider_pane_t1

0x7bc4,	// (0x0003edeb) form_field_slider_pane_t2_ParamLimits

0x7bc4,	// (0x0003edeb) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x000468b4) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x000468b4) form_field_slider_pane_t

0xb474,	// (0x0004269b) input_focus_pane_cp9_ParamLimits

0xb474,	// (0x0004269b) input_focus_pane_cp9

0x7bd9,	// (0x0003ee00) slider_cont_pane_ParamLimits

0x7bd9,	// (0x0003ee00) slider_cont_pane

0xbacc,	// (0x00042cf3) form_field_slider_wide_pane_t1_ParamLimits

0xbacc,	// (0x00042cf3) form_field_slider_wide_pane_t1

0x0997,	// (0x00037bbe) form_field_slider_wide_pane_t2_ParamLimits

0x0997,	// (0x00037bbe) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x000468b9) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x000468b9) form_field_slider_wide_pane_t

0xb474,	// (0x0004269b) input_focus_pane_cp10_ParamLimits

0xb474,	// (0x0004269b) input_focus_pane_cp10

0x7bed,	// (0x0003ee14) slider_cont_pane_cp1_ParamLimits

0x7bed,	// (0x0003ee14) slider_cont_pane_cp1

0x7c01,	// (0x0003ee28) slider_form_pane_cp

0xbade,	// (0x00042d05) input_focus_pane_g1

0xbae6,	// (0x00042d0d) input_focus_pane_g2

0xbaee,	// (0x00042d15) input_focus_pane_g3

0xbaf6,	// (0x00042d1d) input_focus_pane_g4

0xbafe,	// (0x00042d25) input_focus_pane_g5

0xbb06,	// (0x00042d2d) input_focus_pane_g6

0xbb0e,	// (0x00042d35) input_focus_pane_g7

0xbb16,	// (0x00042d3d) input_focus_pane_g8

0xbb1e,	// (0x00042d45) input_focus_pane_g9

0xb41c,	// (0x00042643) input_focus_pane_g10

0x0009,

0xf697,	// (0x000468be) input_focus_pane_g

0xce23,	// (0x0004404a) wait_border_pane_g3_copy1

0x7c09,	// (0x0003ee30) data_form_pane_t1

0xb41c,	// (0x00042643) wait_anim_pane_g1_copy1

0x7d2b,	// (0x0003ef52) data_form_wide_pane_t1

0x7c23,	// (0x0003ee4a) list_form_graphic_pane_cp_ParamLimits

0x7c23,	// (0x0003ee4a) list_form_graphic_pane_cp

0xda2d,	// (0x00044c54) slider_form_pane_g1

0xda36,	// (0x00044c5d) slider_form_pane_g2

0x0006,

0xf995,	// (0x00046bbc) slider_form_pane_g

0x7c23,	// (0x0003ee4a) list_form_graphic_pane_ParamLimits

0x7c23,	// (0x0003ee4a) list_form_graphic_pane

0x0a11,	// (0x00037c38) list_form_graphic_pane_g1

0x0a19,	// (0x00037c40) list_form_graphic_pane_t1_ParamLimits

0x0a19,	// (0x00037c40) list_form_graphic_pane_t1

0xb482,	// (0x000426a9) list_highlight_pane_cp5_ParamLimits

0xb482,	// (0x000426a9) list_highlight_pane_cp5

0x7c36,	// (0x0003ee5d) find_pane_g1

0xbb26,	// (0x00042d4d) input_find_pane

0x7c3f,	// (0x0003ee66) input_find_pane_g1_ParamLimits

0x7c3f,	// (0x0003ee66) input_find_pane_g1

0x7c4b,	// (0x0003ee72) input_find_pane_t1_ParamLimits

0x7c4b,	// (0x0003ee72) input_find_pane_t1

0x7c60,	// (0x0003ee87) input_find_pane_t2_ParamLimits

0x7c60,	// (0x0003ee87) input_find_pane_t2

0x0001,

0xf6ac,	// (0x000468d3) input_find_pane_t_ParamLimits

0xf6ac,	// (0x000468d3) input_find_pane_t

0xbb2f,	// (0x00042d56) input_focus_pane_cp5_ParamLimits

0xbb2f,	// (0x00042d56) input_focus_pane_cp5

0xbb3d,	// (0x00042d64) bg_popup_window_pane_cp2_ParamLimits

0xbb3d,	// (0x00042d64) bg_popup_window_pane_cp2

0xbb4a,	// (0x00042d71) listscroll_menu_pane_ParamLimits

0xbb4a,	// (0x00042d71) listscroll_menu_pane

0x99ce,	// (0x00040bf5) popup_submenu_window_ParamLimits

0x99ce,	// (0x00040bf5) popup_submenu_window

0xbb56,	// (0x00042d7d) find_popup_pane_g1

0xbb5e,	// (0x00042d85) input_popup_find_pane_cp

0xbb2f,	// (0x00042d56) input_focus_pane_cp4_ParamLimits

0xbb2f,	// (0x00042d56) input_focus_pane_cp4

0xbb68,	// (0x00042d8f) input_popup_find_pane_t1_ParamLimits

0xbb68,	// (0x00042d8f) input_popup_find_pane_t1

0xb426,	// (0x0004264d) bg_popup_sub_pane_cp

0xbb96,	// (0x00042dbd) listscroll_popup_sub_pane

0xbb9e,	// (0x00042dc5) list_submenu_pane_ParamLimits

0xbb9e,	// (0x00042dc5) list_submenu_pane

0xbbaf,	// (0x00042dd6) scroll_pane_cp4

0xbbb7,	// (0x00042dde) list_single_popup_submenu_pane_ParamLimits

0xbbb7,	// (0x00042dde) list_single_popup_submenu_pane

0xbbca,	// (0x00042df1) list_single_popup_submenu_pane_g1

0xbbd2,	// (0x00042df9) list_single_popup_submenu_pane_t1_ParamLimits

0xbbd2,	// (0x00042df9) list_single_popup_submenu_pane_t1

0xb474,	// (0x0004269b) bg_active_tab_pane_cp1_ParamLimits

0xb474,	// (0x0004269b) bg_active_tab_pane_cp1

0x9a04,	// (0x00040c2b) tabs_2_active_pane_g1

0x9a0c,	// (0x00040c33) tabs_2_active_pane_t1

0xb474,	// (0x0004269b) bg_passive_tab_pane_cp1_ParamLimits

0xb474,	// (0x0004269b) bg_passive_tab_pane_cp1

0x9a04,	// (0x00040c2b) tabs_2_passive_pane_g1

0x9a0c,	// (0x00040c33) tabs_2_passive_pane_t1

0xb482,	// (0x000426a9) bg_active_tab_pane_cp4

0x9a1e,	// (0x00040c45) tabs_2_long_active_pane_t1

0xbbe7,	// (0x00042e0e) bg_passive_tab_pane_cp4

0x2c8e,	// (0x00039eb5) list_single_midp_graphic_pane_g4_ParamLimits

0xb482,	// (0x000426a9) bg_active_tab_pane_cp5

0x9a31,	// (0x00040c58) tabs_3_long_active_pane_t1

0xbbe7,	// (0x00042e0e) bg_passive_tab_pane_cp5

0x2c8e,	// (0x00039eb5) list_single_midp_graphic_pane_g4

0xb482,	// (0x000426a9) bg_popup_window_pane_cp13_ParamLimits

0xb482,	// (0x000426a9) bg_popup_window_pane_cp13

0xbbfc,	// (0x00042e23) listscroll_popup_fast_pane_ParamLimits

0xbbfc,	// (0x00042e23) listscroll_popup_fast_pane

0xbc0b,	// (0x00042e32) grid_popup_fast_pane_ParamLimits

0xbc0b,	// (0x00042e32) grid_popup_fast_pane

0xbc1d,	// (0x00042e44) scroll_pane_cp9_ParamLimits

0xbc1d,	// (0x00042e44) scroll_pane_cp9

0xee87,	// (0x000460ae) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xee87,	// (0x000460ae) list_single_graphic_hl_pane_t1_cp2

0xbc41,	// (0x00042e68) input_focus_pane_cp20_ParamLimits

0xbc41,	// (0x00042e68) input_focus_pane_cp20

0xbc4f,	// (0x00042e76) query_popup_data_pane_t1_ParamLimits

0xbc4f,	// (0x00042e76) query_popup_data_pane_t1

0xbc62,	// (0x00042e89) query_popup_data_pane_t2_ParamLimits

0xbc62,	// (0x00042e89) query_popup_data_pane_t2

0xbca8,	// (0x00042ecf) query_popup_data_pane_t3_ParamLimits

0xbca8,	// (0x00042ecf) query_popup_data_pane_t3

0xbce9,	// (0x00042f10) query_popup_data_pane_t4_ParamLimits

0xbce9,	// (0x00042f10) query_popup_data_pane_t4

0xbd25,	// (0x00042f4c) query_popup_data_pane_t5_ParamLimits

0xbd25,	// (0x00042f4c) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x000468d8) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x000468d8) query_popup_data_pane_t

0xbade,	// (0x00042d05) bg_set_opt_pane_g1

0xbae6,	// (0x00042d0d) bg_set_opt_pane_g2

0xbaee,	// (0x00042d15) bg_set_opt_pane_g3

0xbaf6,	// (0x00042d1d) bg_set_opt_pane_g4

0xbafe,	// (0x00042d25) bg_set_opt_pane_g5

0xbb06,	// (0x00042d2d) bg_set_opt_pane_g6

0xbb0e,	// (0x00042d35) bg_set_opt_pane_g7

0xbb16,	// (0x00042d3d) bg_set_opt_pane_g8

0xbb1e,	// (0x00042d45) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x000468e3) bg_set_opt_pane_g

0x1ec2,	// (0x000390e9) control_top_pane_stacon_ParamLimits

0x1ec2,	// (0x000390e9) control_top_pane_stacon

0x1f15,	// (0x0003913c) signal_pane_stacon_ParamLimits

0x1f15,	// (0x0003913c) signal_pane_stacon

0xc1a0,	// (0x000433c7) stacon_top_pane_g1_ParamLimits

0xc1a0,	// (0x000433c7) stacon_top_pane_g1

0x1f3a,	// (0x00039161) title_pane_stacon_ParamLimits

0x1f3a,	// (0x00039161) title_pane_stacon

0x1f64,	// (0x0003918b) uni_indicator_pane_stacon_ParamLimits

0x1f64,	// (0x0003918b) uni_indicator_pane_stacon

0x1f79,	// (0x000391a0) battery_pane_stacon_ParamLimits

0x1f79,	// (0x000391a0) battery_pane_stacon

0x1fbd,	// (0x000391e4) control_bottom_pane_stacon_ParamLimits

0x1fbd,	// (0x000391e4) control_bottom_pane_stacon

0x1fe0,	// (0x00039207) navi_pane_stacon_ParamLimits

0x1fe0,	// (0x00039207) navi_pane_stacon

0xc1c2,	// (0x000433e9) stacon_bottom_pane_g1_ParamLimits

0xc1c2,	// (0x000433e9) stacon_bottom_pane_g1

0x1abf,	// (0x00038ce6) aid_levels_signal_lsc_ParamLimits

0x1abf,	// (0x00038ce6) aid_levels_signal_lsc

0x1ad6,	// (0x00038cfd) signal_pane_stacon_g1_ParamLimits

0x1ad6,	// (0x00038cfd) signal_pane_stacon_g1

0x1aea,	// (0x00038d11) signal_pane_stacon_g2_ParamLimits

0x1aea,	// (0x00038d11) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x000468f6) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000468f6) signal_pane_stacon_g

0x1b1f,	// (0x00038d46) title_pane_stacon_t1_ParamLimits

0x1b1f,	// (0x00038d46) title_pane_stacon_t1

0xbd69,	// (0x00042f90) uni_indicator_pane_stacon_g1

0xbd73,	// (0x00042f9a) uni_indicator_pane_stacon_g2

0xbd7d,	// (0x00042fa4) uni_indicator_pane_stacon_g3

0xbd87,	// (0x00042fae) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x00046902) uni_indicator_pane_stacon_g

0x1b44,	// (0x00038d6b) control_top_pane_stacon_g1

0x1b4c,	// (0x00038d73) control_top_pane_stacon_t1_ParamLimits

0x1b4c,	// (0x00038d73) control_top_pane_stacon_t1

0x1b83,	// (0x00038daa) aid_levels_battery_lsc_ParamLimits

0x1b83,	// (0x00038daa) aid_levels_battery_lsc

0x1b9b,	// (0x00038dc2) battery_pane_stacon_g1_ParamLimits

0x1b9b,	// (0x00038dc2) battery_pane_stacon_g1

0x1bae,	// (0x00038dd5) battery_pane_stacon_g2_ParamLimits

0x1bae,	// (0x00038dd5) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0004690b) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0004690b) battery_pane_stacon_g

0x1bec,	// (0x00038e13) navi_icon_pane_stacon

0x1c00,	// (0x00038e27) navi_navi_pane_stacon

0x1bec,	// (0x00038e13) navi_text_pane_stacon

0x1b44,	// (0x00038d6b) control_bottom_pane_stacon_g1

0x1c14,	// (0x00038e3b) control_bottom_pane_stacon_t1_ParamLimits

0x1c14,	// (0x00038e3b) control_bottom_pane_stacon_t1

0x9a43,	// (0x00040c6a) grid_app_pane_ParamLimits

0x9a43,	// (0x00040c6a) grid_app_pane

0x9a79,	// (0x00040ca0) scroll_pane_cp15_ParamLimits

0x9a79,	// (0x00040ca0) scroll_pane_cp15

0x9a92,	// (0x00040cb9) cell_app_pane_ParamLimits

0x9a92,	// (0x00040cb9) cell_app_pane

0x9ad9,	// (0x00040d00) cell_app_pane_g1_ParamLimits

0x9ad9,	// (0x00040d00) cell_app_pane_g1

0xbdab,	// (0x00042fd2) cell_app_pane_g2_ParamLimits

0xbdab,	// (0x00042fd2) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x00046910) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x00046910) cell_app_pane_g

0x9af9,	// (0x00040d20) cell_app_pane_t1_ParamLimits

0x9af9,	// (0x00040d20) cell_app_pane_t1

0xbdb7,	// (0x00042fde) grid_highlight_pane_ParamLimits

0xbdb7,	// (0x00042fde) grid_highlight_pane

0xbade,	// (0x00042d05) cell_highlight_pane_g1

0xbae6,	// (0x00042d0d) cell_highlight_pane_g2

0xbaee,	// (0x00042d15) cell_highlight_pane_g3

0xbaf6,	// (0x00042d1d) cell_highlight_pane_g4

0xbafe,	// (0x00042d25) cell_highlight_pane_g5

0xbb06,	// (0x00042d2d) cell_highlight_pane_g6

0xbb0e,	// (0x00042d35) cell_highlight_pane_g7

0xbb16,	// (0x00042d3d) cell_highlight_pane_g8

0xbb1e,	// (0x00042d45) cell_highlight_pane_g9

0xb41c,	// (0x00042643) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x000468be) cell_highlight_pane_g

0xbdc8,	// (0x00042fef) bg_scroll_pane

0x1cf6,	// (0x00038f1d) scroll_handle_pane

0xbe0f,	// (0x00043036) scroll_bg_pane_g1

0xbe24,	// (0x0004304b) scroll_bg_pane_g2

0xbe3c,	// (0x00043063) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x00046915) scroll_bg_pane_g

0xbe51,	// (0x00043078) scroll_handle_focus_pane_ParamLimits

0xbe51,	// (0x00043078) scroll_handle_focus_pane

0xbe0f,	// (0x00043036) scroll_handle_pane_g1

0xbe5e,	// (0x00043085) scroll_handle_pane_g2

0xbe3c,	// (0x00043063) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0004691c) scroll_handle_pane_g

0xbb2f,	// (0x00042d56) bg_popup_sub_pane_cp21_ParamLimits

0xbb2f,	// (0x00042d56) bg_popup_sub_pane_cp21

0xbe72,	// (0x00043099) popup_fep_japan_predictive_window_t1_ParamLimits

0xbe72,	// (0x00043099) popup_fep_japan_predictive_window_t1

0xbe89,	// (0x000430b0) popup_fep_japan_predictive_window_t2_ParamLimits

0xbe89,	// (0x000430b0) popup_fep_japan_predictive_window_t2

0xbebc,	// (0x000430e3) popup_fep_japan_predictive_window_t3_ParamLimits

0xbebc,	// (0x000430e3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x00046923) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x00046923) popup_fep_japan_predictive_window_t

0xb426,	// (0x0004264d) bg_popup_sub_pane_cp23

0xbef3,	// (0x0004311a) listscroll_japin_cand_pane

0xbefb,	// (0x00043122) popup_fep_japan_candidate_window_t1

0xbf09,	// (0x00043130) candidate_pane_ParamLimits

0xbf09,	// (0x00043130) candidate_pane

0xbf1b,	// (0x00043142) scroll_pane_cp30

0xbf23,	// (0x0004314a) list_single_popup_jap_candidate_pane_ParamLimits

0xbf23,	// (0x0004314a) list_single_popup_jap_candidate_pane

0xb426,	// (0x0004264d) list_highlight_pane_cp30

0xbf37,	// (0x0004315e) list_single_popup_jap_candidate_pane_t1

0xbf46,	// (0x0004316d) level_1_signal

0xbf53,	// (0x0004317a) level_2_signal

0xbf60,	// (0x00043187) level_3_signal

0xbf6d,	// (0x00043194) level_4_signal

0xbf7a,	// (0x000431a1) level_5_signal

0xbf87,	// (0x000431ae) level_6_signal

0xbf94,	// (0x000431bb) level_7_signal

0xbf46,	// (0x0004316d) level_1_battery

0xbf53,	// (0x0004317a) level_2_battery

0xbf60,	// (0x00043187) level_3_battery

0xbf6d,	// (0x00043194) level_4_battery

0xbf7a,	// (0x000431a1) level_5_battery

0xbf87,	// (0x000431ae) level_6_battery

0xbf94,	// (0x000431bb) level_7_battery

0xbfb9,	// (0x000431e0) list_menu_pane_ParamLimits

0xbfb9,	// (0x000431e0) list_menu_pane

0xbfcf,	// (0x000431f6) scroll_pane_cp25_ParamLimits

0xbfcf,	// (0x000431f6) scroll_pane_cp25

0xbfe8,	// (0x0004320f) list_double2_graphic_pane_cp2_ParamLimits

0xbfe8,	// (0x0004320f) list_double2_graphic_pane_cp2

0xbfe8,	// (0x0004320f) list_double2_large_graphic_pane_cp2_ParamLimits

0xbfe8,	// (0x0004320f) list_double2_large_graphic_pane_cp2

0xbfe8,	// (0x0004320f) list_double2_pane_cp2_ParamLimits

0xbfe8,	// (0x0004320f) list_double2_pane_cp2

0xbfe8,	// (0x0004320f) list_double_graphic_pane_cp2_ParamLimits

0xbfe8,	// (0x0004320f) list_double_graphic_pane_cp2

0xbfe8,	// (0x0004320f) list_double_large_graphic_pane_cp2_ParamLimits

0xbfe8,	// (0x0004320f) list_double_large_graphic_pane_cp2

0xbfe8,	// (0x0004320f) list_double_number_pane_cp2_ParamLimits

0xbfe8,	// (0x0004320f) list_double_number_pane_cp2

0xbfe8,	// (0x0004320f) list_double_pane_cp2_ParamLimits

0xbfe8,	// (0x0004320f) list_double_pane_cp2

0xc00a,	// (0x00043231) list_single_2graphic_pane_cp2_ParamLimits

0xc00a,	// (0x00043231) list_single_2graphic_pane_cp2

0xc00a,	// (0x00043231) list_single_graphic_heading_pane_cp2_ParamLimits

0xc00a,	// (0x00043231) list_single_graphic_heading_pane_cp2

0xc00a,	// (0x00043231) list_single_graphic_pane_cp2_ParamLimits

0xc00a,	// (0x00043231) list_single_graphic_pane_cp2

0xc00a,	// (0x00043231) list_single_heading_pane_cp2_ParamLimits

0xc00a,	// (0x00043231) list_single_heading_pane_cp2

0xc021,	// (0x00043248) list_single_large_graphic_pane_cp2_ParamLimits

0xc021,	// (0x00043248) list_single_large_graphic_pane_cp2

0xc00a,	// (0x00043231) list_single_number_heading_pane_cp2_ParamLimits

0xc00a,	// (0x00043231) list_single_number_heading_pane_cp2

0xc00a,	// (0x00043231) list_single_number_pane_cp2_ParamLimits

0xc00a,	// (0x00043231) list_single_number_pane_cp2

0xc00a,	// (0x00043231) list_single_pane_cp2_ParamLimits

0xc00a,	// (0x00043231) list_single_pane_cp2

0xc03b,	// (0x00043262) bg_popup_sub_pane_cp22

0x1e0a,	// (0x00039031) popup_side_volume_key_window_g1

0x1e34,	// (0x0003905b) popup_side_volume_key_window_t1

0x1e50,	// (0x00039077) volume_small_pane_cp1

0xb474,	// (0x0004269b) bg_popup_sub_pane_cp24_ParamLimits

0xb474,	// (0x0004269b) bg_popup_sub_pane_cp24

0xc051,	// (0x00043278) fep_china_uni_candidate_pane_ParamLimits

0xc051,	// (0x00043278) fep_china_uni_candidate_pane

0xc065,	// (0x0004328c) fep_china_uni_entry_pane

0xc075,	// (0x0004329c) popup_fep_china_uni_window_g1

0xc091,	// (0x000432b8) fep_china_uni_entry_pane_g1

0xc099,	// (0x000432c0) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x00046954) fep_china_uni_entry_pane_g

0xc0a1,	// (0x000432c8) fep_entry_item_pane

0xc0ab,	// (0x000432d2) fep_candidate_item_pane

0xc0b3,	// (0x000432da) fep_china_uni_candidate_pane_g1

0xc0bb,	// (0x000432e2) fep_china_uni_candidate_pane_g2

0xc0c3,	// (0x000432ea) fep_china_uni_candidate_pane_g3

0xc0cb,	// (0x000432f2) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x00046959) fep_china_uni_candidate_pane_g

0xb41c,	// (0x00042643) fep_entry_item_pane_g1

0xc0d3,	// (0x000432fa) fep_entry_item_pane_t1_ParamLimits

0xc0d3,	// (0x000432fa) fep_entry_item_pane_t1

0xc0e9,	// (0x00043310) fep_candidate_item_pane_t1_ParamLimits

0xc0e9,	// (0x00043310) fep_candidate_item_pane_t1

0xc0fe,	// (0x00043325) fep_candidate_item_pane_t2_ParamLimits

0xc0fe,	// (0x00043325) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x00046962) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x00046962) fep_candidate_item_pane_t

0xb482,	// (0x000426a9) list_highlight_pane_cp31_ParamLimits

0xb482,	// (0x000426a9) list_highlight_pane_cp31

0xc110,	// (0x00043337) level_1_signal_lsc

0xc119,	// (0x00043340) level_2_signal_lsc

0xc122,	// (0x00043349) level_3_signal_lsc

0xc12b,	// (0x00043352) level_4_signal_lsc

0xc134,	// (0x0004335b) level_5_signal_lsc

0xc13d,	// (0x00043364) level_6_signal_lsc

0xc146,	// (0x0004336d) level_7_signal_lsc

0xc146,	// (0x0004336d) level_1_battery_lsc

0xc14f,	// (0x00043376) level_2_battery_lsc

0xc158,	// (0x0004337f) level_3_battery_lsc

0xc161,	// (0x00043388) level_4_battery_lsc

0xc16a,	// (0x00043391) level_5_battery_lsc

0xc173,	// (0x0004339a) level_6_battery_lsc

0xc110,	// (0x00043337) level_7_battery_lsc

0xc17c,	// (0x000433a3) scroll_handle_focus_pane_g1

0xc185,	// (0x000433ac) scroll_handle_focus_pane_g2

0xc18e,	// (0x000433b5) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x00046967) scroll_handle_focus_pane_g

0x7c75,	// (0x0003ee9c) list_single_2graphic_pane_g1_ParamLimits

0x7c75,	// (0x0003ee9c) list_single_2graphic_pane_g1

0x77d6,	// (0x0003e9fd) list_single_2graphic_pane_g2_ParamLimits

0x77d6,	// (0x0003e9fd) list_single_2graphic_pane_g2

0x1995,	// (0x00038bbc) list_single_2graphic_pane_g3_ParamLimits

0x1995,	// (0x00038bbc) list_single_2graphic_pane_g3

0x7c81,	// (0x0003eea8) list_single_2graphic_pane_g4_ParamLimits

0x7c81,	// (0x0003eea8) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0004696e) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0004696e) list_single_2graphic_pane_g

0x7c8d,	// (0x0003eeb4) list_single_2graphic_pane_t1_ParamLimits

0x7c8d,	// (0x0003eeb4) list_single_2graphic_pane_t1

0x8113,	// (0x0003f33a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8113,	// (0x0003f33a) list_double2_graphic_large_graphic_pane_g1

0x80f9,	// (0x0003f320) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x80f9,	// (0x0003f320) list_double2_graphic_large_graphic_pane_g2

0x80e1,	// (0x0003f308) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x80e1,	// (0x0003f308) list_double2_graphic_large_graphic_pane_g3

0x8125,	// (0x0003f34c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8125,	// (0x0003f34c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x00046977) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x00046977) list_double2_graphic_large_graphic_pane_g

0x7cbb,	// (0x0003eee2) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7cbb,	// (0x0003eee2) list_double2_graphic_large_graphic_pane_t1

0x7cd1,	// (0x0003eef8) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7cd1,	// (0x0003eef8) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x00046980) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x00046980) list_double2_graphic_large_graphic_pane_t

0xc250,	// (0x00043477) popup_fast_swap_window_ParamLimits

0xc250,	// (0x00043477) popup_fast_swap_window

0xc26c,	// (0x00043493) popup_side_volume_key_window

0xc286,	// (0x000434ad) stacon_top_pane

0xc290,	// (0x000434b7) status_pane_ParamLimits

0xc290,	// (0x000434b7) status_pane

0xc286,	// (0x000434ad) status_small_pane

0xb426,	// (0x0004264d) control_pane

0xb426,	// (0x0004264d) stacon_bottom_pane

0xba66,	// (0x00042c8d) scroll_pane_cp121

0xba5d,	// (0x00042c84) set_content_pane

0x9b8b,	// (0x00040db2) bg_active_tab_pane_g1_cp1

0xc197,	// (0x000433be) bg_active_tab_pane_g2_cp1

0x9b94,	// (0x00040dbb) bg_active_tab_pane_g3_cp1

0x9b8b,	// (0x00040db2) bg_passive_tab_pane_g1_cp1

0xc197,	// (0x000433be) bg_passive_tab_pane_g2_cp1

0x9b94,	// (0x00040dbb) bg_passive_tab_pane_g3_cp1

0x9b9d,	// (0x00040dc4) bg_active_tab_pane_g1_cp2

0xc197,	// (0x000433be) bg_active_tab_pane_g2_cp2

0x9ba6,	// (0x00040dcd) bg_active_tab_pane_g3_cp2

0x9b9d,	// (0x00040dc4) bg_passive_tab_pane_g1_cp2

0xc197,	// (0x000433be) bg_passive_tab_pane_g2_cp2

0x9ba6,	// (0x00040dcd) bg_passive_tab_pane_g3_cp2

0x9baf,	// (0x00040dd6) bg_active_tab_pane_g1_cp3

0xc197,	// (0x000433be) bg_active_tab_pane_g2_cp3

0x9bb8,	// (0x00040ddf) bg_active_tab_pane_g3_cp3

0x9baf,	// (0x00040dd6) bg_passive_tab_pane_g1_cp3

0xc197,	// (0x000433be) bg_passive_tab_pane_g2_cp3

0x9bb8,	// (0x00040ddf) bg_passive_tab_pane_g3_cp3

0x9bc1,	// (0x00040de8) bg_active_tab_pane_g1_cp4

0xc197,	// (0x000433be) bg_active_tab_pane_g2_cp4

0x9bca,	// (0x00040df1) bg_active_tab_pane_g3_cp4

0x9bc1,	// (0x00040de8) bg_passive_tab_pane_g1_cp4

0xc197,	// (0x000433be) bg_passive_tab_pane_g2_cp4

0x9bca,	// (0x00040df1) bg_passive_tab_pane_g3_cp4

0xc1de,	// (0x00043405) bg_active_tab_pane_g1_cp5

0xc197,	// (0x000433be) bg_active_tab_pane_g2_cp5

0xc1e7,	// (0x0004340e) bg_active_tab_pane_g3_cp5

0xc1de,	// (0x00043405) bg_passive_tab_pane_g1_cp5

0xc197,	// (0x000433be) bg_passive_tab_pane_g2_cp5

0xc1e7,	// (0x0004340e) bg_passive_tab_pane_g3_cp5

0xd379,	// (0x000445a0) list_set_graphic_pane_ParamLimits

0xd379,	// (0x000445a0) list_set_graphic_pane

0xb426,	// (0x0004264d) bg_set_opt_pane_cp4

0xc1f0,	// (0x00043417) list_set_graphic_pane_g1_ParamLimits

0xc1f0,	// (0x00043417) list_set_graphic_pane_g1

0xc1fc,	// (0x00043423) list_set_graphic_pane_g2_ParamLimits

0xc1fc,	// (0x00043423) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x00046985) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x00046985) list_set_graphic_pane_g

0x0009,

0xfada,	// (0x00046d01) volume_small_pane_cp_g

0x9bd3,	// (0x00040dfa) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9bd3,	// (0x00040dfa) list_double2_large_graphic_pane_g1_cp2

0x9be1,	// (0x00040e08) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9be1,	// (0x00040e08) list_double2_large_graphic_pane_g2_cp2

0xc220,	// (0x00043447) list_double2_large_graphic_pane_g3_cp2

0xc228,	// (0x0004344f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc228,	// (0x0004344f) list_double2_large_graphic_pane_t1_cp2

0xc23e,	// (0x00043465) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc23e,	// (0x00043465) list_double2_large_graphic_pane_t2_cp2

0xa344,	// (0x0004156b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa344,	// (0x0004156b) list_double_large_graphic_pane_g1_cp2

0xa357,	// (0x0004157e) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa357,	// (0x0004157e) list_double_large_graphic_pane_g2_cp2

0xc371,	// (0x00043598) list_double_large_graphic_pane_g3_cp2

0xd7eb,	// (0x00044a12) list_double_large_graphic_pane_g4_cp

0xd7f3,	// (0x00044a1a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd7f3,	// (0x00044a1a) list_double_large_graphic_pane_t1_cp2

0xd80a,	// (0x00044a31) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd80a,	// (0x00044a31) list_double_large_graphic_pane_t2_cp2

0x9bf2,	// (0x00040e19) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9bf2,	// (0x00040e19) list_double2_graphic_pane_g1_cp2

0x9c00,	// (0x00040e27) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9c00,	// (0x00040e27) list_double2_graphic_pane_g2_cp2

0x9c11,	// (0x00040e38) list_double2_graphic_pane_g3_cp2

0xc29e,	// (0x000434c5) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc29e,	// (0x000434c5) list_double2_graphic_pane_t1_cp2

0xc2b4,	// (0x000434db) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc2b4,	// (0x000434db) list_double2_graphic_pane_t2_cp2

0xc2c6,	// (0x000434ed) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc2c6,	// (0x000434ed) list_single_number_heading_pane_g1_cp2

0xc2d2,	// (0x000434f9) list_single_number_heading_pane_g2_cp2

0xc2da,	// (0x00043501) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc2da,	// (0x00043501) list_single_number_heading_pane_t1_cp2

0x9c1b,	// (0x00040e42) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9c1b,	// (0x00040e42) list_single_number_heading_pane_t2_cp2

0xc2f0,	// (0x00043517) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc2f0,	// (0x00043517) list_single_number_heading_pane_t3_cp2

0xc2c6,	// (0x000434ed) list_single_heading_pane_g1_cp2_ParamLimits

0xc2c6,	// (0x000434ed) list_single_heading_pane_g1_cp2

0xc2d2,	// (0x000434f9) list_single_heading_pane_g2_cp2

0xc2da,	// (0x00043501) list_single_heading_pane_t1_cp2_ParamLimits

0xc2da,	// (0x00043501) list_single_heading_pane_t1_cp2

0xa330,	// (0x00041557) list_single_heading_pane_t2_cp2_ParamLimits

0xa330,	// (0x00041557) list_single_heading_pane_t2_cp2

0xd54f,	// (0x00044776) list_double_graphic_pane_g1_cp2_ParamLimits

0xd54f,	// (0x00044776) list_double_graphic_pane_g1_cp2

0xd55b,	// (0x00044782) list_double_graphic_pane_g2_cp2_ParamLimits

0xd55b,	// (0x00044782) list_double_graphic_pane_g2_cp2

0xd56a,	// (0x00044791) list_double_graphic_pane_g3_cp2

0xd572,	// (0x00044799) list_double_graphic_pane_t1_cp2_ParamLimits

0xd572,	// (0x00044799) list_double_graphic_pane_t1_cp2

0xd588,	// (0x000447af) list_double_graphic_pane_t2_cp2_ParamLimits

0xd588,	// (0x000447af) list_double_graphic_pane_t2_cp2

0xc365,	// (0x0004358c) list_double_number_pane_g1_cp2_ParamLimits

0xc365,	// (0x0004358c) list_double_number_pane_g1_cp2

0xc371,	// (0x00043598) list_double_number_pane_g2_cp2

0xa31c,	// (0x00041543) list_double_number_pane_t1_cp2_ParamLimits

0xa31c,	// (0x00041543) list_double_number_pane_t1_cp2

0xd527,	// (0x0004474e) list_double_number_pane_t2_cp2_ParamLimits

0xd527,	// (0x0004474e) list_double_number_pane_t2_cp2

0xd53d,	// (0x00044764) list_double_number_pane_t3_cp2_ParamLimits

0xd53d,	// (0x00044764) list_double_number_pane_t3_cp2

0xa26a,	// (0x00041491) list_single_graphic_pane_g1_cp2_ParamLimits

0xa26a,	// (0x00041491) list_single_graphic_pane_g1_cp2

0xc3b1,	// (0x000435d8) list_single_graphic_pane_g2_cp2_ParamLimits

0xc3b1,	// (0x000435d8) list_single_graphic_pane_g2_cp2

0xc3bd,	// (0x000435e4) list_single_graphic_pane_g3_cp2

0xd496,	// (0x000446bd) list_single_graphic_pane_t1_cp2_ParamLimits

0xd496,	// (0x000446bd) list_single_graphic_pane_t1_cp2

0xc3b1,	// (0x000435d8) list_single_number_pane_g1_cp2_ParamLimits

0xc3b1,	// (0x000435d8) list_single_number_pane_g1_cp2

0xc3bd,	// (0x000435e4) list_single_number_pane_g2_cp2

0xd496,	// (0x000446bd) list_single_number_pane_t1_cp2_ParamLimits

0xd496,	// (0x000446bd) list_single_number_pane_t1_cp2

0xa256,	// (0x0004147d) list_single_number_pane_t2_cp2_ParamLimits

0xa256,	// (0x0004147d) list_single_number_pane_t2_cp2

0x9be1,	// (0x00040e08) list_double2_pane_g1_cp2_ParamLimits

0x9be1,	// (0x00040e08) list_double2_pane_g1_cp2

0xc220,	// (0x00043447) list_double2_pane_g2_cp2

0xc33d,	// (0x00043564) list_double2_pane_t1_cp2_ParamLimits

0xc33d,	// (0x00043564) list_double2_pane_t1_cp2

0xc353,	// (0x0004357a) list_double2_pane_t2_cp2_ParamLimits

0xc353,	// (0x0004357a) list_double2_pane_t2_cp2

0xc365,	// (0x0004358c) list_double_pane_g1_cp2_ParamLimits

0xc365,	// (0x0004358c) list_double_pane_g1_cp2

0xc371,	// (0x00043598) list_double_pane_g2_cp2

0xc379,	// (0x000435a0) list_double_pane_t1_cp2_ParamLimits

0xc379,	// (0x000435a0) list_double_pane_t1_cp2

0xc38f,	// (0x000435b6) list_double_pane_t2_cp2_ParamLimits

0xc38f,	// (0x000435b6) list_double_pane_t2_cp2

0xc3a1,	// (0x000435c8) list_single_pane_cp2_g3

0xc3b1,	// (0x000435d8) list_single_pane_g1_cp2_ParamLimits

0xc3b1,	// (0x000435d8) list_single_pane_g1_cp2

0xc3bd,	// (0x000435e4) list_single_pane_g2_cp2

0xc3c5,	// (0x000435ec) list_single_pane_t1_cp2_ParamLimits

0xc3c5,	// (0x000435ec) list_single_pane_t1_cp2

0x9c47,	// (0x00040e6e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9c47,	// (0x00040e6e) list_single_large_graphic_pane_g1_cp2

0xc3dd,	// (0x00043604) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc3dd,	// (0x00043604) list_single_large_graphic_pane_g2_cp2

0xc3e9,	// (0x00043610) list_single_large_graphic_pane_g3_cp2

0xc3f1,	// (0x00043618) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc3f1,	// (0x00043618) list_single_large_graphic_pane_g4_cp1

0xc40b,	// (0x00043632) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc40b,	// (0x00043632) list_single_large_graphic_pane_t1_cp2

0xd474,	// (0x0004469b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd474,	// (0x0004469b) list_single_graphic_heading_pane_g1_cp2

0xa231,	// (0x00041458) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa231,	// (0x00041458) list_single_graphic_heading_pane_g4_cp2

0xc3bd,	// (0x000435e4) list_single_graphic_heading_pane_g5_cp2

0xd480,	// (0x000446a7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd480,	// (0x000446a7) list_single_graphic_heading_pane_t1_cp2

0xa242,	// (0x00041469) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa242,	// (0x00041469) list_single_graphic_heading_pane_t2_cp2

0xd446,	// (0x0004466d) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd446,	// (0x0004466d) list_single_2graphic_pane_g1_cp2

0xa231,	// (0x00041458) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa231,	// (0x00041458) list_single_2graphic_pane_g2_cp2

0xc3bd,	// (0x000435e4) list_single_2graphic_pane_g3_cp2

0xd452,	// (0x00044679) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd452,	// (0x00044679) list_single_2graphic_pane_g4_cp2

0xd45e,	// (0x00044685) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd45e,	// (0x00044685) list_single_2graphic_pane_t1_cp2

0xb41c,	// (0x00042643) list_highlight_pane_g10_cp1

0xd01a,	// (0x00044241) list_highlight_pane_g1_cp1

0xd022,	// (0x00044249) list_highlight_pane_g2_cp1

0xd02a,	// (0x00044251) list_highlight_pane_g3_cp1

0xd032,	// (0x00044259) list_highlight_pane_g4_cp1

0xd03a,	// (0x00044261) list_highlight_pane_g5_cp1

0xd042,	// (0x00044269) list_highlight_pane_g6_cp1

0xd04a,	// (0x00044271) list_highlight_pane_g7_cp1

0xd052,	// (0x00044279) list_highlight_pane_g8_cp1

0xd05a,	// (0x00044281) list_highlight_pane_g9_cp1

0xa1f3,	// (0x0004141a) form_field_slider_pane_t3

0xa203,	// (0x0004142a) form_field_slider_pane_t4

0xcf4e,	// (0x00044175) slider_form_pane_ParamLimits

0xcf4e,	// (0x00044175) slider_form_pane

0xb426,	// (0x0004264d) control_abbreviations

0xb426,	// (0x0004264d) control_conventions

0xb426,	// (0x0004264d) control_definitions

0xb426,	// (0x0004264d) format_table_attribute

0xd63f,	// (0x00044866) bg_popup_preview_window_pane_g9

0xb426,	// (0x0004264d) format_table_data2

0xb426,	// (0x0004264d) format_table_data3

0xb426,	// (0x0004264d) format_table_data_example

0x0008,

0xb426,	// (0x0004264d) intro_purpose

0xf8f5,	// (0x00046b1c) bg_popup_preview_window_pane_g

0xb426,	// (0x0004264d) texts_category

0xb426,	// (0x0004264d) texts_graphics

0xc421,	// (0x00043648) text_digital

0xc430,	// (0x00043657) text_primary

0xc43f,	// (0x00043666) text_primary_small

0xc44e,	// (0x00043675) text_secondary

0xc45d,	// (0x00043684) text_title

0xdaca,	// (0x00044cf1) bg_passive_tab_pane_g1_cp3_srt

0xc197,	// (0x000433be) bg_passive_tab_pane_g2_cp3_srt

0xdad3,	// (0x00044cfa) bg_passive_tab_pane_g3_cp3_srt

0xb474,	// (0x0004269b) bg_active_tab_pane_cp3_srt_ParamLimits

0xb474,	// (0x0004269b) bg_active_tab_pane_cp3_srt

0xdadc,	// (0x00044d03) tabs_4_active_pane_srt_g1

0xa5cd,	// (0x000417f4) tabs_4_active_pane_srt_t1_ParamLimits

0xa5cd,	// (0x000417f4) tabs_4_active_pane_srt_t1

0xdaca,	// (0x00044cf1) bg_active_tab_pane_g1_cp3_copy1

0xc197,	// (0x000433be) bg_active_tab_pane_g2_cp3_copy1

0xdad3,	// (0x00044cfa) bg_active_tab_pane_g3_cp3_copy1

0xb482,	// (0x000426a9) tabs_2_long_active_pane_srt_ParamLimits

0xb482,	// (0x000426a9) tabs_2_long_active_pane_srt

0xb482,	// (0x000426a9) tabs_2_long_passive_pane_srt_ParamLimits

0xb482,	// (0x000426a9) tabs_2_long_passive_pane_srt

0xbbe7,	// (0x00042e0e) bg_passive_tab_pane_cp4_srt_ParamLimits

0xbbe7,	// (0x00042e0e) bg_passive_tab_pane_cp4_srt

0xd9e6,	// (0x00044c0d) bg_passive_tab_pane_g1_cp4_srt

0xc197,	// (0x000433be) bg_passive_tab_pane_g2_cp4_srt

0xd9ef,	// (0x00044c16) bg_passive_tab_pane_g3_cp4_srt

0xb482,	// (0x000426a9) bg_active_tab_pane_cp4_srt_ParamLimits

0xb482,	// (0x000426a9) bg_active_tab_pane_cp4_srt

0xa3fb,	// (0x00041622) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa3fb,	// (0x00041622) tabs_2_long_active_pane_srt_t1

0xd9e6,	// (0x00044c0d) bg_active_tab_pane_g1_cp4_srt

0xc197,	// (0x000433be) bg_active_tab_pane_g2_cp4_srt

0xd9ef,	// (0x00044c16) bg_active_tab_pane_g3_cp4_srt

0xb474,	// (0x0004269b) tabs_3_long_active_pane_srt_ParamLimits

0xb474,	// (0x0004269b) tabs_3_long_active_pane_srt

0xb474,	// (0x0004269b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb474,	// (0x0004269b) tabs_3_long_passive_pane_cp_srt

0xb474,	// (0x0004269b) tabs_3_long_passive_pane_srt_ParamLimits

0xb474,	// (0x0004269b) tabs_3_long_passive_pane_srt

0xbbe7,	// (0x00042e0e) bg_passive_tab_pane_cp5_srt_ParamLimits

0xbbe7,	// (0x00042e0e) bg_passive_tab_pane_cp5_srt

0xc1de,	// (0x00043405) bg_passive_tab_pane_g1_cp5_srt

0xc197,	// (0x000433be) bg_passive_tab_pane_g2_cp5_srt

0xc1e7,	// (0x0004340e) bg_passive_tab_pane_g3_cp5_srt

0xb482,	// (0x000426a9) bg_active_tab_pane_cp5_srt_ParamLimits

0xb482,	// (0x000426a9) bg_active_tab_pane_cp5_srt

0xa3e5,	// (0x0004160c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa3e5,	// (0x0004160c) tabs_3_long_active_pane_srt_t1

0xc1de,	// (0x00043405) bg_active_tab_pane_g1_cp5_srt

0xc197,	// (0x000433be) bg_active_tab_pane_g2_cp5_srt

0xc1e7,	// (0x0004340e) bg_active_tab_pane_g3_cp5_srt

0xd9d8,	// (0x00044bff) navi_text_pane_srt_t1

0xd9d0,	// (0x00044bf7) navi_icon_pane_srt_g1

0xc56d,	// (0x00043794) midp_editing_number_pane_srt

0xc46c,	// (0x00043693) midp_ticker_pane_srt

0xc575,	// (0x0004379c) midp_ticker_pane_srt_g1

0xc57d,	// (0x000437a4) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x000469a4) midp_ticker_pane_srt_g

0xc585,	// (0x000437ac) midp_ticker_pane_srt_t1

0xd9c1,	// (0x00044be8) midp_editing_number_pane_t1_copy1

0xbbe7,	// (0x00042e0e) listscroll_midp_pane

0xbbe7,	// (0x00042e0e) midp_form_pane

0xc474,	// (0x0004369b) midp_info_popup_window_ParamLimits

0xc474,	// (0x0004369b) midp_info_popup_window

0xbb2f,	// (0x00042d56) bg_popup_sub_pane_cp50_ParamLimits

0xbb2f,	// (0x00042d56) bg_popup_sub_pane_cp50

0xcc51,	// (0x00043e78) listscroll_midp_info_pane_ParamLimits

0xcc51,	// (0x00043e78) listscroll_midp_info_pane

0xcc39,	// (0x00043e60) listscroll_form_midp_pane_ParamLimits

0xcc39,	// (0x00043e60) listscroll_form_midp_pane

0xcc45,	// (0x00043e6c) scroll_bar_cp050

0xa1e7,	// (0x0004140e) list_midp_pane

0xe446,	// (0x0004566d) signal_pane_g2_cp

0xcb6b,	// (0x00043d92) listscroll_midp_info_pane_t1_ParamLimits

0xcb6b,	// (0x00043d92) listscroll_midp_info_pane_t1

0xcb83,	// (0x00043daa) listscroll_midp_info_pane_t2_ParamLimits

0xcb83,	// (0x00043daa) listscroll_midp_info_pane_t2

0xcbc1,	// (0x00043de8) listscroll_midp_info_pane_t3_ParamLimits

0xcbc1,	// (0x00043de8) listscroll_midp_info_pane_t3

0xcbfb,	// (0x00043e22) listscroll_midp_info_pane_t4_ParamLimits

0xcbfb,	// (0x00043e22) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x00046a57) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x00046a57) listscroll_midp_info_pane_t

0xbbaf,	// (0x00042dd6) scroll_pane_cp21

0xcb0f,	// (0x00043d36) form_midp_field_choice_group_pane

0xcb18,	// (0x00043d3f) form_midp_field_text_pane

0xcb51,	// (0x00043d78) form_midp_field_time_pane

0xcb59,	// (0x00043d80) form_midp_gauge_slider_pane

0xcb62,	// (0x00043d89) form_midp_gauge_wait_pane

0xb426,	// (0x0004264d) form_midp_image_pane

0x7cff,	// (0x0003ef26) list_single_midp_pane_ParamLimits

0x7cff,	// (0x0003ef26) list_single_midp_pane

0xa1c3,	// (0x000413ea) form_midp_field_text_pane_t1

0xc98e,	// (0x00043bb5) input_focus_pane_cp050

0xcafe,	// (0x00043d25) list_midp_form_text_pane

0xcacd,	// (0x00043cf4) form_midp_field_choice_group_pane_t1

0xcadb,	// (0x00043d02) input_focus_pane_cp051

0xcaef,	// (0x00043d16) list_midp_choice_pane

0xb426,	// (0x0004264d) status_idle_pane

0xcab1,	// (0x00043cd8) form_midp_field_time_pane_t1

0xb41c,	// (0x00042643) wait_anim_pane_g2_copy1

0xcabf,	// (0x00043ce6) form_midp_field_time_pane_t2

0x0001,

0xc4df,	// (0x00043706) aid_navinavi_width_2_pane

0xf82b,	// (0x00046a52) form_midp_field_time_pane_t

0xb426,	// (0x0004264d) input_focus_pane_cp052

0xb426,	// (0x0004264d) bg_input_focus_pane_cp040

0xca8d,	// (0x00043cb4) form_midp_gauge_slider_pane_t1

0xca9b,	// (0x00043cc2) form_midp_gauge_slider_pane_t2

0xa1a3,	// (0x000413ca) form_midp_gauge_slider_pane_t3

0xa1b3,	// (0x000413da) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x00046a49) form_midp_gauge_slider_pane_t

0xcaa9,	// (0x00043cd0) form_midp_slider_pane

0xb482,	// (0x000426a9) bg_input_focus_pane_cp041_ParamLimits

0xb482,	// (0x000426a9) bg_input_focus_pane_cp041

0xca5a,	// (0x00043c81) form_midp_gauge_wait_pane_t1_ParamLimits

0xca5a,	// (0x00043c81) form_midp_gauge_wait_pane_t1

0xca6c,	// (0x00043c93) form_midp_gauge_wait_pane_t2_ParamLimits

0xca6c,	// (0x00043c93) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x00046a44) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x00046a44) form_midp_gauge_wait_pane_t

0xca7e,	// (0x00043ca5) form_midp_wait_pane_ParamLimits

0xca7e,	// (0x00043ca5) form_midp_wait_pane

0xca24,	// (0x00043c4b) form_midp_image_pane_g1

0xca2d,	// (0x00043c54) form_midp_image_pane_t1

0xca3c,	// (0x00043c63) form_midp_image_pane_t2

0xca4b,	// (0x00043c72) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x00046a3d) form_midp_image_pane_t

0xca1b,	// (0x00043c42) list_single_midp_pane_g1

0x0bae,	// (0x00037dd5) list_single_midp_pane_t1

0xa18c,	// (0x000413b3) list_midp_form_item_pane_ParamLimits

0xa18c,	// (0x000413b3) list_midp_form_item_pane

0xc487,	// (0x000436ae) list_midp_form_item_pane_t1

0xc496,	// (0x000436bd) midp_ticker_pane_g1

0xc4a2,	// (0x000436c9) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0004698a) midp_ticker_pane_g

0xc4ae,	// (0x000436d5) midp_ticker_pane_t1

0xda71,	// (0x00044c98) midp_editing_number_pane_t1

0xda4f,	// (0x00044c76) midp_editing_number_pane

0xda5e,	// (0x00044c85) midp_ticker_pane

0xd9b1,	// (0x00044bd8) ai_message_heading_pane

0xb426,	// (0x0004264d) bg_popup_window_pane_cp14

0xd9b9,	// (0x00044be0) listscroll_ai_message_pane

0xd93b,	// (0x00044b62) ai_message_heading_pane_g1_ParamLimits

0xd93b,	// (0x00044b62) ai_message_heading_pane_g1

0xd947,	// (0x00044b6e) ai_message_heading_pane_g2_ParamLimits

0xd947,	// (0x00044b6e) ai_message_heading_pane_g2

0xd953,	// (0x00044b7a) ai_message_heading_pane_g3_ParamLimits

0xd953,	// (0x00044b7a) ai_message_heading_pane_g3

0xd95f,	// (0x00044b86) ai_message_heading_pane_g4_ParamLimits

0xd95f,	// (0x00044b86) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x00046b7e) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x00046b7e) ai_message_heading_pane_g

0xd96b,	// (0x00044b92) ai_message_heading_pane_t1_ParamLimits

0xd96b,	// (0x00044b92) ai_message_heading_pane_t1

0xd985,	// (0x00044bac) ai_message_heading_pane_t2_ParamLimits

0xd985,	// (0x00044bac) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x00046b87) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x00046b87) ai_message_heading_pane_t

0xd997,	// (0x00044bbe) bg_popup_heading_pane_cp1_ParamLimits

0xd997,	// (0x00044bbe) bg_popup_heading_pane_cp1

0xd929,	// (0x00044b50) list_ai_message_pane_ParamLimits

0xd929,	// (0x00044b50) list_ai_message_pane

0xbbaf,	// (0x00042dd6) scroll_pane_cp10

0xd8c5,	// (0x00044aec) list_ai_message_pane_g1

0xd8cd,	// (0x00044af4) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x00046b5b) list_ai_message_pane_g

0xd8d5,	// (0x00044afc) list_ai_message_pane_t1_ParamLimits

0xd8d5,	// (0x00044afc) list_ai_message_pane_t1

0xd8ea,	// (0x00044b11) list_ai_message_pane_t2_ParamLimits

0xd8ea,	// (0x00044b11) list_ai_message_pane_t2

0xd8ff,	// (0x00044b26) list_ai_message_pane_t3_ParamLimits

0xd8ff,	// (0x00044b26) list_ai_message_pane_t3

0xd914,	// (0x00044b3b) list_ai_message_pane_t4_ParamLimits

0xd914,	// (0x00044b3b) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x00046b60) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x00046b60) list_ai_message_pane_t

0xa3c0,	// (0x000415e7) cell_ai_soft_ind_pane_ParamLimits

0xa3c0,	// (0x000415e7) cell_ai_soft_ind_pane

0xc4c0,	// (0x000436e7) cell_ai_soft_ind_pane_g1_ParamLimits

0xc4c0,	// (0x000436e7) cell_ai_soft_ind_pane_g1

0xb426,	// (0x0004264d) grid_highlight_cp1

0xc4cd,	// (0x000436f4) text_secondary_cp56_ParamLimits

0xc4cd,	// (0x000436f4) text_secondary_cp56

0xd89a,	// (0x00044ac1) example_general_pane_ParamLimits

0xd89a,	// (0x00044ac1) example_general_pane

0xd8a6,	// (0x00044acd) example_parent_pane_g1_ParamLimits

0xd8a6,	// (0x00044acd) example_parent_pane_g1

0xd8b2,	// (0x00044ad9) example_parent_pane_t1_ParamLimits

0xd8b2,	// (0x00044ad9) example_parent_pane_t1

0x864e,	// (0x0003f875) popup_preview_text_window_ParamLimits

0x864e,	// (0x0003f875) popup_preview_text_window

0xc3a9,	// (0x000435d0) list_single_pane_cp2_g4

0xb651,	// (0x00042878) bg_popup_preview_window_pane_ParamLimits

0xb651,	// (0x00042878) bg_popup_preview_window_pane

0xd647,	// (0x0004486e) popup_preview_text_window_t1_ParamLimits

0xd647,	// (0x0004486e) popup_preview_text_window_t1

0xd665,	// (0x0004488c) popup_preview_text_window_t2_ParamLimits

0xd665,	// (0x0004488c) popup_preview_text_window_t2

0xd6ae,	// (0x000448d5) popup_preview_text_window_t3_ParamLimits

0xd6ae,	// (0x000448d5) popup_preview_text_window_t3

0xd6f3,	// (0x0004491a) popup_preview_text_window_t4_ParamLimits

0xd6f3,	// (0x0004491a) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x00046b2f) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x00046b2f) popup_preview_text_window_t

0xd771,	// (0x00044998) scroll_pane_cp11

0xc89e,	// (0x00043ac5) bg_popup_preview_window_pane_g1

0xd607,	// (0x0004482e) bg_popup_preview_window_pane_g2

0xd60f,	// (0x00044836) bg_popup_preview_window_pane_g3

0xd617,	// (0x0004483e) bg_popup_preview_window_pane_g4

0xd61f,	// (0x00044846) bg_popup_preview_window_pane_g5

0xd627,	// (0x0004484e) bg_popup_preview_window_pane_g6

0xd62f,	// (0x00044856) bg_popup_preview_window_pane_g7

0xd637,	// (0x0004485e) bg_popup_preview_window_pane_g8

0x1237,	// (0x0003845e) aid_popup_width_pane

0x85ca,	// (0x0003f7f1) popup_midp_note_alarm_window_ParamLimits

0x85ca,	// (0x0003f7f1) popup_midp_note_alarm_window

0xba77,	// (0x00042c9e) data_form_pane_ParamLimits

0x7b66,	// (0x0003ed8d) form_field_data_pane_g1

0x7b70,	// (0x0003ed97) form_field_data_pane_t1_ParamLimits

0xba83,	// (0x00042caa) input_focus_pane_ParamLimits

0xba91,	// (0x00042cb8) data_form_wide_pane_ParamLimits

0x08e9,	// (0x00037b10) form_field_data_wide_pane_g1

0x08f5,	// (0x00037b1c) form_field_data_wide_pane_t1_ParamLimits

0xb7f2,	// (0x00042a19) input_focus_pane_cp6_ParamLimits

0x99f6,	// (0x00040c1d) input_popup_find_pane_g1_ParamLimits

0x99f6,	// (0x00040c1d) input_popup_find_pane_g1

0x1bbf,	// (0x00038de6) aid_navi_side_left_pane

0x1bd4,	// (0x00038dfb) aid_navi_side_right_pane

0xd0f7,	// (0x0004431e) bg_popup_window_pane_cp30_ParamLimits

0xd0f7,	// (0x0004431e) bg_popup_window_pane_cp30

0xd171,	// (0x00044398) popup_midp_note_alarm_window_g1_ParamLimits

0xd171,	// (0x00044398) popup_midp_note_alarm_window_g1

0xd1a1,	// (0x000443c8) popup_midp_note_alarm_window_t1_ParamLimits

0xd1a1,	// (0x000443c8) popup_midp_note_alarm_window_t1

0xd242,	// (0x00044469) popup_midp_note_alarm_window_t2_ParamLimits

0xd242,	// (0x00044469) popup_midp_note_alarm_window_t2

0xd2f0,	// (0x00044517) popup_midp_note_alarm_window_t3_ParamLimits

0xd2f0,	// (0x00044517) popup_midp_note_alarm_window_t3

0xd318,	// (0x0004453f) popup_midp_note_alarm_window_t4_ParamLimits

0xd318,	// (0x0004453f) popup_midp_note_alarm_window_t4

0xd338,	// (0x0004455f) popup_midp_note_alarm_window_t5_ParamLimits

0xd338,	// (0x0004455f) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x00046acc) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x00046acc) popup_midp_note_alarm_window_t

0xd416,	// (0x0004463d) wait_bar_pane_cp1_ParamLimits

0xd416,	// (0x0004463d) wait_bar_pane_cp1

0xb426,	// (0x0004264d) wait_anim_pane_copy1

0xb426,	// (0x0004264d) wait_border_pane_copy1

0xce0f,	// (0x00044036) wait_border_pane_g1_copy1

0x090f,	// (0x00037b36) form_field_popup_pane_g1

0x7b8a,	// (0x0003edb1) form_field_popup_pane_t1_ParamLimits

0xba83,	// (0x00042caa) input_focus_pane_cp7_ParamLimits

0xbab1,	// (0x00042cd8) list_form_pane_ParamLimits

0x0931,	// (0x00037b58) form_field_popup_wide_pane_g1

0x0939,	// (0x00037b60) form_field_popup_wide_pane_t1_ParamLimits

0xba83,	// (0x00042caa) input_focus_pane_cp8_ParamLimits

0xbabd,	// (0x00042ce4) list_form_wide_pane_ParamLimits

0xdb03,	// (0x00044d2a) aid_size_cell_graphic_pane

0x7c09,	// (0x0003ee30) data_form_pane_t1_ParamLimits

0x7d2b,	// (0x0003ef52) data_form_wide_pane_t1_ParamLimits

0x9e11,	// (0x00041038) bg_status_flat_pane

0x9655,	// (0x0004087c) title_pane_t1_ParamLimits

0xb43c,	// (0x00042663) title_pane_t2_ParamLimits

0xb462,	// (0x00042689) title_pane_t3_ParamLimits

0xf55d,	// (0x00046784) title_pane_t_ParamLimits

0xbf46,	// (0x0004316d) level_1_signal_ParamLimits

0xbf53,	// (0x0004317a) level_2_signal_ParamLimits

0xbf60,	// (0x00043187) level_3_signal_ParamLimits

0xbf6d,	// (0x00043194) level_4_signal_ParamLimits

0xbf7a,	// (0x000431a1) level_5_signal_ParamLimits

0xbf87,	// (0x000431ae) level_6_signal_ParamLimits

0xbf94,	// (0x000431bb) level_7_signal_ParamLimits

0xbf46,	// (0x0004316d) level_1_battery_ParamLimits

0xbf53,	// (0x0004317a) level_2_battery_ParamLimits

0xbf60,	// (0x00043187) level_3_battery_ParamLimits

0xbf6d,	// (0x00043194) level_4_battery_ParamLimits

0xbf7a,	// (0x000431a1) level_5_battery_ParamLimits

0xbf87,	// (0x000431ae) level_6_battery_ParamLimits

0xbf94,	// (0x000431bb) level_7_battery_ParamLimits

0xd01a,	// (0x00044241) bg_status_flat_pane_g1

0xd022,	// (0x00044249) bg_status_flat_pane_g2

0xd02a,	// (0x00044251) bg_status_flat_pane_g3

0xd032,	// (0x00044259) bg_status_flat_pane_g4

0xd03a,	// (0x00044261) bg_status_flat_pane_g5

0xd042,	// (0x00044269) bg_status_flat_pane_g6

0xd04a,	// (0x00044271) bg_status_flat_pane_g7

0x96e9,	// (0x00040910) tabs_3_active_pane_t1_ParamLimits

0x96e9,	// (0x00040910) tabs_3_passive_pane_t1_ParamLimits

0x9703,	// (0x0004092a) tabs_4_active_pane_t1_ParamLimits

0x9703,	// (0x0004092a) tabs_4_1_passive_pane_t1_ParamLimits

0x9a0c,	// (0x00040c33) tabs_2_active_pane_t1_ParamLimits

0x9a0c,	// (0x00040c33) tabs_2_passive_pane_t1_ParamLimits

0xb482,	// (0x000426a9) bg_active_tab_pane_cp4_ParamLimits

0x9a1e,	// (0x00040c45) tabs_2_long_active_pane_t1_ParamLimits

0xbbe7,	// (0x00042e0e) bg_passive_tab_pane_cp4_ParamLimits

0x2cb4,	// (0x00039edb) list_single_midp_graphic_pane_t1_ParamLimits

0xb482,	// (0x000426a9) bg_active_tab_pane_cp5_ParamLimits

0x9a31,	// (0x00040c58) tabs_3_long_active_pane_t1_ParamLimits

0xbbe7,	// (0x00042e0e) bg_passive_tab_pane_cp5_ParamLimits

0x2cb4,	// (0x00039edb) list_single_midp_graphic_pane_t1

0x9e11,	// (0x00041038) bg_status_flat_pane_ParamLimits

0xc771,	// (0x00043998) indicator_pane_cp2_ParamLimits

0xc771,	// (0x00043998) indicator_pane_cp2

0x9f89,	// (0x000411b0) navi_pane_srt_ParamLimits

0x9f89,	// (0x000411b0) navi_pane_srt

0xc799,	// (0x000439c0) popup_clock_digital_analogue_window_cp1

0xb4c6,	// (0x000426ed) indicator_pane_t1

0xc46c,	// (0x00043693) copy_highlight_pane

0xc46c,	// (0x00043693) cursor_graphics_pane

0xc46c,	// (0x00043693) graphic_within_text_pane

0xc46c,	// (0x00043693) link_highlight_pane

0xd734,	// (0x0004495b) popup_preview_text_window_t5_ParamLimits

0xd734,	// (0x0004495b) popup_preview_text_window_t5

0xc4e7,	// (0x0004370e) cursor_digital_pane

0xc4e7,	// (0x0004370e) cursor_primary_pane

0xc4f8,	// (0x0004371f) cursor_primary_small_pane

0xc500,	// (0x00043727) cursor_secondary_pane

0xc508,	// (0x0004372f) cursor_title_pane

0xc4e7,	// (0x0004370e) link_highlight_digital_pane

0xc4ef,	// (0x00043716) link_highlight_primary_pane

0xc4f8,	// (0x0004371f) link_highlight_primary_small_pane

0xc500,	// (0x00043727) link_highlight_secondary_pane

0xc508,	// (0x0004372f) link_highlight_title_pane

0xc4e7,	// (0x0004370e) copy_highlight_digital_pane

0xc4e7,	// (0x0004370e) copy_highlight_primary_pane

0xc4f8,	// (0x0004371f) copy_highlight_primary_small_pane

0xc500,	// (0x00043727) copy_highlight_secondary_pane

0xc508,	// (0x0004372f) copy_highlight_title_pane

0xc500,	// (0x00043727) graphic_text_digital_pane

0xd09a,	// (0x000442c1) graphic_text_primary_pane

0xd0a3,	// (0x000442ca) graphic_text_primary_small_pane

0xc4f8,	// (0x0004371f) graphic_text_secondary_pane

0xc4e7,	// (0x0004370e) graphic_text_title_pane

0x9cf0,	// (0x00040f17) cursor_primary_pane_g1

0xd08c,	// (0x000442b3) cursor_text_primary_t1

0xa227,	// (0x0004144e) cursor_primary_small_pane_g1

0xd07e,	// (0x000442a5) cursor_text_primary_small_t1

0xa21d,	// (0x00041444) cursor_primary_small_pane_g1_copy1

0xd070,	// (0x00044297) cursor_text_primary_small_t1_copy1

0xd062,	// (0x00044289) cursor_text_title_t1

0xa213,	// (0x0004143a) cursor_title_pane_g1

0x9cf0,	// (0x00040f17) cursor_digital_pane_g1

0xc510,	// (0x00043737) cursor_text_digital_t1

0xd003,	// (0x0004422a) link_highlight_primary_pane_g1

0xd00b,	// (0x00044232) link_highlight_primary_pane_t1

0xc51e,	// (0x00043745) link_highlight_primary_small_pane_g1

0xc526,	// (0x0004374d) link_highlight_primary_small_pane_t1

0xc51e,	// (0x00043745) link_highlight_secondary_pane_g1

0xc535,	// (0x0004375c) link_highlight_secondary_pane_t1

0xcf77,	// (0x0004419e) link_highlight_title_pane_g1

0xcf7f,	// (0x000441a6) link_highlight_title_pane_t1

0xcf60,	// (0x00044187) link_highlight_digital_pane_g1

0xcf68,	// (0x0004418f) link_highlight_digital_pane_t1

0xce54,	// (0x0004407b) copy_highlight_primary_pane_g1

0xce5c,	// (0x00044083) copy_highlight_primary_pane_t1

0xce2e,	// (0x00044055) copy_highlight_primary_small_pane_g1

0xce45,	// (0x0004406c) copy_highlight_primary_small_pane_t1

0xc544,	// (0x0004376b) copy_highlight_secondary_pane_g1

0xc54c,	// (0x00043773) copy_highlight_secondary_pane_t1

0xce2e,	// (0x00044055) copy_highlight_title_pane_g1

0xce36,	// (0x0004405d) copy_highlight_title_pane_t1

0xce54,	// (0x0004407b) copy_highlight_digital_pane_g1

0xdc8d,	// (0x00044eb4) copy_highlight_digital_pane_t1

0xdbe1,	// (0x00044e08) graphic_text_primary_pane_g1

0xdc71,	// (0x00044e98) graphic_text_primary_pane_t1

0xdc7f,	// (0x00044ea6) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x00046bfb) graphic_text_primary_pane_t

0xdc4d,	// (0x00044e74) graphic_text_primary_small_pane_g1

0xdc55,	// (0x00044e7c) graphic_text_primary_small_pane_t1

0xdc63,	// (0x00044e8a) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x00046bf6) graphic_text_primary_small_pane_t

0xdc29,	// (0x00044e50) graphic_text_secondary_pane_g1

0xdc31,	// (0x00044e58) graphic_text_secondary_pane_t1

0xdc3f,	// (0x00044e66) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x00046bf1) graphic_text_secondary_pane_t

0xdc05,	// (0x00044e2c) graphic_text_title_pane_g1

0xdc0d,	// (0x00044e34) graphic_text_title_pane_t1

0xdc1b,	// (0x00044e42) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x00046bec) graphic_text_title_pane_t

0xdbe1,	// (0x00044e08) graphic_text_digital_pane_g1

0xdbe9,	// (0x00044e10) graphic_text_digital_pane_t1

0xdbf7,	// (0x00044e1e) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x00046be7) graphic_text_digital_pane_t

0xb482,	// (0x000426a9) navi_icon_pane_srt_ParamLimits

0xb482,	// (0x000426a9) navi_icon_pane_srt

0xb426,	// (0x0004264d) navi_midp_pane_srt

0xb426,	// (0x0004264d) navi_navi_pane_srt

0xb482,	// (0x000426a9) navi_text_pane_srt_ParamLimits

0xb482,	// (0x000426a9) navi_text_pane_srt

0xdbac,	// (0x00044dd3) navi_navi_icon_text_pane_srt

0xdbb4,	// (0x00044ddb) navi_navi_pane_srt_g1_ParamLimits

0xdbb4,	// (0x00044ddb) navi_navi_pane_srt_g1

0xdbc6,	// (0x00044ded) navi_navi_pane_srt_g2_ParamLimits

0xdbc6,	// (0x00044ded) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x00046be2) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x00046be2) navi_navi_pane_srt_g

0xdbd8,	// (0x00044dff) navi_navi_tabs_pane_srt

0xdbac,	// (0x00044dd3) navi_navi_text_pane_srt

0xdbac,	// (0x00044dd3) navi_navi_volume_pane_srt

0xdb9d,	// (0x00044dc4) navi_navi_text_pane_srt_t1

0x35e5,	// (0x0003a80c) navi_navi_volume_pane_srt_g1

0x35ed,	// (0x0003a814) volume_small_pane_srt_ParamLimits

0x35ed,	// (0x0003a814) volume_small_pane_srt

0x2156,	// (0x0003937d) volume_small_pane_srt_g1_ParamLimits

0x2156,	// (0x0003937d) volume_small_pane_srt_g1

0x2166,	// (0x0003938d) volume_small_pane_srt_g2_ParamLimits

0x2166,	// (0x0003938d) volume_small_pane_srt_g2

0x2177,	// (0x0003939e) volume_small_pane_srt_g3_ParamLimits

0x2177,	// (0x0003939e) volume_small_pane_srt_g3

0x2188,	// (0x000393af) volume_small_pane_srt_g4_ParamLimits

0x2188,	// (0x000393af) volume_small_pane_srt_g4

0x2199,	// (0x000393c0) volume_small_pane_srt_g5_ParamLimits

0x2199,	// (0x000393c0) volume_small_pane_srt_g5

0x21aa,	// (0x000393d1) volume_small_pane_srt_g6_ParamLimits

0x21aa,	// (0x000393d1) volume_small_pane_srt_g6

0x21bb,	// (0x000393e2) volume_small_pane_srt_g7_ParamLimits

0x21bb,	// (0x000393e2) volume_small_pane_srt_g7

0x21cc,	// (0x000393f3) volume_small_pane_srt_g8_ParamLimits

0x21cc,	// (0x000393f3) volume_small_pane_srt_g8

0x21dd,	// (0x00039404) volume_small_pane_srt_g9_ParamLimits

0x21dd,	// (0x00039404) volume_small_pane_srt_g9

0x21ee,	// (0x00039415) volume_small_pane_srt_g10_ParamLimits

0x21ee,	// (0x00039415) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0004698f) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0004698f) volume_small_pane_srt_g

0xb6fa,	// (0x00042921) query_popup_data_pane_cp2

0xdb83,	// (0x00044daa) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xdb83,	// (0x00044daa) navi_navi_icon_text_pane_srt_t1

0xd09a,	// (0x000442c1) navi_tabs_2_long_pane_srt

0xd09a,	// (0x000442c1) navi_tabs_2_pane_srt

0xd09a,	// (0x000442c1) navi_tabs_3_long_pane_srt

0xd09a,	// (0x000442c1) navi_tabs_3_pane_srt

0xd09a,	// (0x000442c1) navi_tabs_4_pane_srt

0x35c5,	// (0x0003a7ec) tabs_2_active_pane_srt_ParamLimits

0x35c5,	// (0x0003a7ec) tabs_2_active_pane_srt

0x35d5,	// (0x0003a7fc) tabs_2_passive_pane_srt_ParamLimits

0x35d5,	// (0x0003a7fc) tabs_2_passive_pane_srt

0xc98e,	// (0x00043bb5) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc98e,	// (0x00043bb5) bg_passive_tab_pane_cp1_srt

0xdb61,	// (0x00044d88) bg_passive_tab_pane_g1_cp1_srt

0xc197,	// (0x000433be) bg_passive_tab_pane_g2_cp1_srt

0xdb6a,	// (0x00044d91) bg_passive_tab_pane_g3_cp1_srt

0xb474,	// (0x0004269b) bg_active_tab_pane_cp1_srt_ParamLimits

0xb474,	// (0x0004269b) bg_active_tab_pane_cp1_srt

0xdb73,	// (0x00044d9a) tabs_2_active_pane_srt_g1

0xa649,	// (0x00041870) tabs_2_active_pane_srt_t1_ParamLimits

0xa649,	// (0x00041870) tabs_2_active_pane_srt_t1

0xdb61,	// (0x00044d88) bg_active_tab_pane_g1_cp1_srt

0xc197,	// (0x000433be) bg_active_tab_pane_g2_cp1_srt

0xdb6a,	// (0x00044d91) bg_active_tab_pane_g3_cp1_srt

0x3580,	// (0x0003a7a7) tabs_3_active_pane_srt_ParamLimits

0x3580,	// (0x0003a7a7) tabs_3_active_pane_srt

0x3591,	// (0x0003a7b8) tabs_3_passive_pane_cp_srt_ParamLimits

0x3591,	// (0x0003a7b8) tabs_3_passive_pane_cp_srt

0x35a2,	// (0x0003a7c9) tabs_3_passive_pane_srt_ParamLimits

0x35a2,	// (0x0003a7c9) tabs_3_passive_pane_srt

0xc98e,	// (0x00043bb5) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc98e,	// (0x00043bb5) bg_passive_tab_pane_cp2_srt

0xc55b,	// (0x00043782) bg_passive_tab_pane_g1_cp2_srt

0xc197,	// (0x000433be) bg_passive_tab_pane_g2_cp2_srt

0xc564,	// (0x0004378b) bg_passive_tab_pane_g3_cp2_srt

0xb474,	// (0x0004269b) bg_active_tab_pane_cp2_srt_ParamLimits

0xb474,	// (0x0004269b) bg_active_tab_pane_cp2_srt

0xdb59,	// (0x00044d80) tabs_3_active_pane_srt_g1

0xa633,	// (0x0004185a) tabs_3_active_pane_srt_t1_ParamLimits

0xa633,	// (0x0004185a) tabs_3_active_pane_srt_t1

0xc55b,	// (0x00043782) bg_active_tab_pane_g1_cp2_srt

0xc197,	// (0x000433be) bg_active_tab_pane_g2_cp2_srt

0xc564,	// (0x0004378b) bg_active_tab_pane_g3_cp2_srt

0x3526,	// (0x0003a74d) tabs_4_active_pane_srt_ParamLimits

0x3526,	// (0x0003a74d) tabs_4_active_pane_srt

0x3538,	// (0x0003a75f) tabs_4_passive_pane_cp2_srt_ParamLimits

0x3538,	// (0x0003a75f) tabs_4_passive_pane_cp2_srt

0x2374,	// (0x0003959b) aid_size_cell_toolbar

0xd38d,	// (0x000445b4) main_idle_act_pane_ParamLimits

0x2521,	// (0x00039748) popup_large_graphic_colour_window_ParamLimits

0x88ce,	// (0x0003faf5) popup_toolbar_window_ParamLimits

0x88ce,	// (0x0003faf5) popup_toolbar_window

0xda80,	// (0x00044ca7) list_single_graphic_2heading_pane_ParamLimits

0xda80,	// (0x00044ca7) list_single_graphic_2heading_pane

0xbd91,	// (0x00042fb8) aid_size_cell_apps_grid_lsc_pane

0xbda3,	// (0x00042fca) aid_size_cell_apps_grid_prt_pane

0xbbe7,	// (0x00042e0e) bg_wml_button_pane_cp1_ParamLimits

0xbbe7,	// (0x00042e0e) bg_wml_button_pane_cp1

0xa1c3,	// (0x000413ea) form_midp_field_text_pane_t1_ParamLimits

0xc98e,	// (0x00043bb5) input_focus_pane_cp050_ParamLimits

0xcafe,	// (0x00043d25) list_midp_form_text_pane_ParamLimits

0xcadb,	// (0x00043d02) input_focus_pane_cp051_ParamLimits

0xcaef,	// (0x00043d16) list_midp_choice_pane_ParamLimits

0xa154,	// (0x0004137b) list_single_2graphic_pane_cp3_ParamLimits

0xa154,	// (0x0004137b) list_single_2graphic_pane_cp3

0xa16a,	// (0x00041391) list_single_midp_graphic_pane_ParamLimits

0xa16a,	// (0x00041391) list_single_midp_graphic_pane

0x0af8,	// (0x00037d1f) list_single_graphic_2heading_pane_g1_ParamLimits

0x0af8,	// (0x00037d1f) list_single_graphic_2heading_pane_g1

0x0b04,	// (0x00037d2b) list_single_graphic_2heading_pane_g4_ParamLimits

0x0b04,	// (0x00037d2b) list_single_graphic_2heading_pane_g4

0x0b10,	// (0x00037d37) list_single_graphic_2heading_pane_g5_ParamLimits

0x0b10,	// (0x00037d37) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x000469e2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x000469e2) list_single_graphic_2heading_pane_g

0x0b1c,	// (0x00037d43) list_single_graphic_2heading_pane_t1_ParamLimits

0x0b1c,	// (0x00037d43) list_single_graphic_2heading_pane_t1

0x0b30,	// (0x00037d57) list_single_graphic_2heading_pane_t2_ParamLimits

0x0b30,	// (0x00037d57) list_single_graphic_2heading_pane_t2

0x0b4a,	// (0x00037d71) list_single_graphic_2heading_pane_t3_ParamLimits

0x0b4a,	// (0x00037d71) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x000469e9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x000469e9) list_single_graphic_2heading_pane_t

0xc7dc,	// (0x00043a03) bg_popup_sub_pane_cp2

0xc806,	// (0x00043a2d) grid_toobar_pane

0x2c39,	// (0x00039e60) cell_toolbar_pane_ParamLimits

0x2c39,	// (0x00039e60) cell_toolbar_pane

0xc842,	// (0x00043a69) cell_toolbar_pane_g1_ParamLimits

0xc842,	// (0x00043a69) cell_toolbar_pane_g1

0xc856,	// (0x00043a7d) cell_toolbar_pane_g2_ParamLimits

0xc856,	// (0x00043a7d) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x000469f7) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x000469f7) cell_toolbar_pane_g

0xc878,	// (0x00043a9f) grid_highlight_pane_cp2_ParamLimits

0xc878,	// (0x00043a9f) grid_highlight_pane_cp2

0xc892,	// (0x00043ab9) toolbar_button_pane

0xc89e,	// (0x00043ac5) toolbar_button_pane_g1

0xc8a6,	// (0x00043acd) toolbar_button_pane_g2

0xc8ae,	// (0x00043ad5) toolbar_button_pane_g3

0xc8b6,	// (0x00043add) toolbar_button_pane_g4

0xc8be,	// (0x00043ae5) toolbar_button_pane_g5

0xc8c6,	// (0x00043aed) toolbar_button_pane_g6

0xc8ce,	// (0x00043af5) toolbar_button_pane_g7

0xc8d6,	// (0x00043afd) toolbar_button_pane_g8

0xc8de,	// (0x00043b05) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x000469fc) toolbar_button_pane_g

0x2c71,	// (0x00039e98) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2c71,	// (0x00039e98) list_single_2graphic_pane_g1_cp3

0x8926,	// (0x0003fb4d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8926,	// (0x0003fb4d) list_single_2graphic_pane_g2_cp3

0xc2d2,	// (0x000434f9) list_single_2graphic_pane_g3_cp3

0x2c8e,	// (0x00039eb5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2c8e,	// (0x00039eb5) list_single_2graphic_pane_g4_cp3

0x2c9a,	// (0x00039ec1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2c9a,	// (0x00039ec1) list_single_2graphic_pane_t1_cp3

0xc2c6,	// (0x000434ed) list_single_midp_graphic_pane_g2_ParamLimits

0xc2c6,	// (0x000434ed) list_single_midp_graphic_pane_g2

0x0ae0,	// (0x00037d07) aid_zoom_text_primary

0x0ae8,	// (0x00037d0f) aid_zoom_text_secondary

0xc618,	// (0x0004383f) status_small_pane_g7_ParamLimits

0xc618,	// (0x0004383f) status_small_pane_g7

0xc63b,	// (0x00043862) status_small_pane_t1_ParamLimits

0x9631,	// (0x00040858) title_pane_g2

0x0003,

0xf554,	// (0x0004677b) title_pane_g

0x98bc,	// (0x00040ae3) aid_size_cell_colour_1_pane_ParamLimits

0x98bc,	// (0x00040ae3) aid_size_cell_colour_1_pane

0x98d0,	// (0x00040af7) aid_size_cell_colour_2_pane_ParamLimits

0x98d0,	// (0x00040af7) aid_size_cell_colour_2_pane

0x98e4,	// (0x00040b0b) aid_size_cell_colour_3_pane_ParamLimits

0x98e4,	// (0x00040b0b) aid_size_cell_colour_3_pane

0x98f8,	// (0x00040b1f) aid_size_cell_colour_4_pane_ParamLimits

0x98f8,	// (0x00040b1f) aid_size_cell_colour_4_pane

0x1afb,	// (0x00038d22) title_pane_stacon_g1_ParamLimits

0x1afb,	// (0x00038d22) title_pane_stacon_g1

0xceb3,	// (0x000440da) popup_note_wait_window_g3_ParamLimits

0xceb3,	// (0x000440da) popup_note_wait_window_g3

0xcf29,	// (0x00044150) popup_note_wait_window_t5_ParamLimits

0xcf29,	// (0x00044150) popup_note_wait_window_t5

0xb426,	// (0x0004264d) main_feb_china_hwr_fs_writing_pane

0x82f6,	// (0x0003f51d) popup_feb_china_hwr_fs_window_ParamLimits

0x82f6,	// (0x0003f51d) popup_feb_china_hwr_fs_window

0x8937,	// (0x0003fb5e) aid_size_cell_hwr_fs_ParamLimits

0x8937,	// (0x0003fb5e) aid_size_cell_hwr_fs

0xc98e,	// (0x00043bb5) bg_popup_sub_pane_cp3_ParamLimits

0xc98e,	// (0x00043bb5) bg_popup_sub_pane_cp3

0x894c,	// (0x0003fb73) grid_hwr_fs_pane_ParamLimits

0x894c,	// (0x0003fb73) grid_hwr_fs_pane

0x2cf7,	// (0x00039f1e) linegrid_hwr_fs_pane_ParamLimits

0x2cf7,	// (0x00039f1e) linegrid_hwr_fs_pane

0x8964,	// (0x0003fb8b) cell_hwr_fs_pane_ParamLimits

0x8964,	// (0x0003fb8b) cell_hwr_fs_pane

0xc99a,	// (0x00043bc1) linegrid_hwr_fs_pane_g1_ParamLimits

0xc99a,	// (0x00043bc1) linegrid_hwr_fs_pane_g1

0xa128,	// (0x0004134f) linegrid_hwr_fs_pane_g2_ParamLimits

0xa128,	// (0x0004134f) linegrid_hwr_fs_pane_g2

0xc9a6,	// (0x00043bcd) linegrid_hwr_fs_pane_g3_ParamLimits

0xc9a6,	// (0x00043bcd) linegrid_hwr_fs_pane_g3

0x2d3b,	// (0x00039f62) linegrid_hwr_fs_pane_g4_ParamLimits

0x2d3b,	// (0x00039f62) linegrid_hwr_fs_pane_g4

0x2d55,	// (0x00039f7c) linegrid_hwr_fs_pane_g5_ParamLimits

0x2d55,	// (0x00039f7c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x00046a22) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00046a22) linegrid_hwr_fs_pane_g

0xc9b2,	// (0x00043bd9) cell_hwr_fs_pane_g1_ParamLimits

0xc9b2,	// (0x00043bd9) cell_hwr_fs_pane_g1

0xc7aa,	// (0x000439d1) cell_hwr_fs_pane_g2_ParamLimits

0xc7aa,	// (0x000439d1) cell_hwr_fs_pane_g2

0xa13a,	// (0x00041361) cell_hwr_fs_pane_g3_ParamLimits

0xa13a,	// (0x00041361) cell_hwr_fs_pane_g3

0xa147,	// (0x0004136e) cell_hwr_fs_pane_g4_ParamLimits

0xa147,	// (0x0004136e) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x00046a2d) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x00046a2d) cell_hwr_fs_pane_g

0x898a,	// (0x0003fbb1) cell_hwr_fs_pane_t1

0xb426,	// (0x0004264d) grid_highlight_pane_cp6

0xb426,	// (0x0004264d) main_idle_act2_pane

0xbb96,	// (0x00042dbd) aid_inside_area_popup_secondary

0xa28e,	// (0x000414b5) aid_inside_area_window_primary_ParamLimits

0xa28e,	// (0x000414b5) aid_inside_area_window_primary

0xdc9c,	// (0x00044ec3) ai2_news_ticker_pane

0xdca4,	// (0x00044ecb) aid_size_cell_ai1_link_ParamLimits

0xdca4,	// (0x00044ecb) aid_size_cell_ai1_link

0xdcbe,	// (0x00044ee5) popup_ai2_data_window_ParamLimits

0xdcbe,	// (0x00044ee5) popup_ai2_data_window

0xdcd2,	// (0x00044ef9) popup_ai2_link_window_ParamLimits

0xdcd2,	// (0x00044ef9) popup_ai2_link_window

0xc98e,	// (0x00043bb5) bg_popup_sub_pane_cp4_ParamLimits

0xc98e,	// (0x00043bb5) bg_popup_sub_pane_cp4

0xdce6,	// (0x00044f0d) grid_ai2_link_pane_ParamLimits

0xdce6,	// (0x00044f0d) grid_ai2_link_pane

0xdcfd,	// (0x00044f24) popup_ai2_link_window_g1_ParamLimits

0xdcfd,	// (0x00044f24) popup_ai2_link_window_g1

0xdd09,	// (0x00044f30) popup_ai2_link_window_g2_ParamLimits

0xdd09,	// (0x00044f30) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x00046c00) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x00046c00) popup_ai2_link_window_g

0xdd18,	// (0x00044f3f) ai2_mp_button_pane

0xdd20,	// (0x00044f47) ai2_mp_volume_pane

0xcadb,	// (0x00043d02) bg_popup_sub_pane_cp5_ParamLimits

0xcadb,	// (0x00043d02) bg_popup_sub_pane_cp5

0xdd28,	// (0x00044f4f) heading_ai2_gene_pane_ParamLimits

0xdd28,	// (0x00044f4f) heading_ai2_gene_pane

0xdd34,	// (0x00044f5b) list_ai2_gene_pane_ParamLimits

0xdd34,	// (0x00044f5b) list_ai2_gene_pane

0xdd7c,	// (0x00044fa3) cell_ai2_link_pane_ParamLimits

0xdd7c,	// (0x00044fa3) cell_ai2_link_pane

0xdd92,	// (0x00044fb9) cell_ai2_link_pane_g1

0xb426,	// (0x0004264d) grid_highlight_pane_cp7

0x3602,	// (0x0003a829) ai2_mp_volume_pane_g1

0xde63,	// (0x0004508a) ai2_mp_volume_pane_g2

0xddd8,	// (0x00044fff) list_ai2_gene_pane_t1

0xde6b,	// (0x00045092) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x00046c19) ai2_mp_volume_pane_g

0x360a,	// (0x0003a831) volume_small_pane_cp3

0xde73,	// (0x0004509a) aid_size_cell_ai2_button

0xde7b,	// (0x000450a2) grid_ai2_button_pane

0xde84,	// (0x000450ab) cell_ai2_button_pane_ParamLimits

0xde84,	// (0x000450ab) cell_ai2_button_pane

0xb41c,	// (0x00042643) cell_ai2_button_pane_g1

0xb426,	// (0x0004264d) grid_highlight_pane_cp8

0xde23,	// (0x0004504a) ai2_gene_pane_t1_ParamLimits

0xde23,	// (0x0004504a) ai2_gene_pane_t1

0x8294,	// (0x0003f4bb) aid_height_parent_landscape

0xa412,	// (0x00041639) aid_height_set_list

0xd38d,	// (0x000445b4) aid_size_parent

0xdb03,	// (0x00044d2a) aid_size_cell_graphic_pane_ParamLimits

0xdd44,	// (0x00044f6b) popup_ai2_data_window_g1_ParamLimits

0xdd44,	// (0x00044f6b) popup_ai2_data_window_g1

0xdd50,	// (0x00044f77) ai2_news_ticker_pane_g1

0xdd58,	// (0x00044f7f) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x00046c05) ai2_news_ticker_pane_g

0xdd60,	// (0x00044f87) ai2_news_ticker_pane_t1

0xdd6e,	// (0x00044f95) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x00046c0a) ai2_news_ticker_pane_t

0xdd9b,	// (0x00044fc2) heading_ai2_gene_pane_g1

0xdda3,	// (0x00044fca) heading_ai2_gene_pane_t1_ParamLimits

0xdda3,	// (0x00044fca) heading_ai2_gene_pane_t1

0xddb8,	// (0x00044fdf) list_highlight_pane_cp6

0xddc0,	// (0x00044fe7) ai2_gene_pane_ParamLimits

0xddc0,	// (0x00044fe7) ai2_gene_pane

0xdde6,	// (0x0004500d) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x00046c0f) list_ai2_gene_pane_t

0xddf4,	// (0x0004501b) list_highlight_pane_cp8_ParamLimits

0xddf4,	// (0x0004501b) list_highlight_pane_cp8

0xde05,	// (0x0004502c) ai2_gene_pane_g1_ParamLimits

0xde05,	// (0x0004502c) ai2_gene_pane_g1

0xde17,	// (0x0004503e) ai2_gene_pane_g2_ParamLimits

0xde17,	// (0x0004503e) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x00046c14) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x00046c14) ai2_gene_pane_g

0xba0d,	// (0x00042c34) scroll_pane_cp12

0x8253,	// (0x0003f47a) control_pane_t3_ParamLimits

0x8253,	// (0x0003f47a) control_pane_t3

0xc62c,	// (0x00043853) status_small_pane_g8_ParamLimits

0xc62c,	// (0x00043853) status_small_pane_g8

0x8389,	// (0x0003f5b0) popup_find_window_ParamLimits

0x8604,	// (0x0003f82b) popup_note_image_window_ParamLimits

0x0b62,	// (0x00037d89) list_double2_graphic_pane_vc_g1_ParamLimits

0x0b62,	// (0x00037d89) list_double2_graphic_pane_vc_g1

0x1989,	// (0x00038bb0) list_double2_graphic_pane_vc_g2_ParamLimits

0x1989,	// (0x00038bb0) list_double2_graphic_pane_vc_g2

0x1995,	// (0x00038bbc) list_double2_graphic_pane_vc_g3_ParamLimits

0x1995,	// (0x00038bbc) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x000469f0) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x000469f0) list_double2_graphic_pane_vc_g

0x0b6e,	// (0x00037d95) list_double2_graphic_pane_vc_t1_ParamLimits

0x0b6e,	// (0x00037d95) list_double2_graphic_pane_vc_t1

0x1989,	// (0x00038bb0) list_single_heading_pane_vc_g1_ParamLimits

0x1989,	// (0x00038bb0) list_single_heading_pane_vc_g1

0x1995,	// (0x00038bbc) list_single_heading_pane_vc_g2_ParamLimits

0x1995,	// (0x00038bbc) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x000467ff) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x000467ff) list_single_heading_pane_vc_g

0x0b84,	// (0x00037dab) list_single_heading_pane_vc_t1_ParamLimits

0x0b84,	// (0x00037dab) list_single_heading_pane_vc_t1

0x0b9a,	// (0x00037dc1) list_single_heading_pane_vc_t2_ParamLimits

0x0b9a,	// (0x00037dc1) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x00046a11) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x00046a11) list_single_heading_pane_vc_t

0xc8e6,	// (0x00043b0d) list_setting_number_pane_vc_g1_ParamLimits

0xc8e6,	// (0x00043b0d) list_setting_number_pane_vc_g1

0xc8f2,	// (0x00043b19) list_setting_number_pane_vc_g2_ParamLimits

0xc8f2,	// (0x00043b19) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x00046a16) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x00046a16) list_setting_number_pane_vc_g

0xc8fe,	// (0x00043b25) list_setting_number_pane_vc_t1_ParamLimits

0xc8fe,	// (0x00043b25) list_setting_number_pane_vc_t1

0xc912,	// (0x00043b39) list_setting_number_pane_vc_t2_ParamLimits

0xc912,	// (0x00043b39) list_setting_number_pane_vc_t2

0xc92c,	// (0x00043b53) list_setting_number_pane_vc_t3_ParamLimits

0xc92c,	// (0x00043b53) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x00046a1b) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x00046a1b) list_setting_number_pane_vc_t

0xc952,	// (0x00043b79) set_value_pane_vc_ParamLimits

0xc952,	// (0x00043b79) set_value_pane_vc

0xda80,	// (0x00044ca7) list_double2_graphic_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_double2_graphic_pane_vc

0xda80,	// (0x00044ca7) list_double2_large_graphic_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_double2_large_graphic_pane_vc

0xda80,	// (0x00044ca7) list_double2_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_double2_pane_vc

0xda80,	// (0x00044ca7) list_double_graphic_heading_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_double_graphic_heading_pane_vc

0xda80,	// (0x00044ca7) list_double_graphic_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_double_graphic_pane_vc

0xda80,	// (0x00044ca7) list_double_heading_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_double_heading_pane_vc

0xda80,	// (0x00044ca7) list_double_large_graphic_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_double_large_graphic_pane_vc

0xda80,	// (0x00044ca7) list_double_number_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_double_number_pane_vc

0xda80,	// (0x00044ca7) list_double_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_double_pane_vc

0xda80,	// (0x00044ca7) list_double_time_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_double_time_pane_vc

0xda80,	// (0x00044ca7) list_setting_number_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_setting_number_pane_vc

0xda80,	// (0x00044ca7) list_setting_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_setting_pane_vc

0xda80,	// (0x00044ca7) list_single_graphic_heading_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_single_graphic_heading_pane_vc

0xda80,	// (0x00044ca7) list_single_heading_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_single_heading_pane_vc

0xda80,	// (0x00044ca7) list_single_number_heading_pane_vc_ParamLimits

0xda80,	// (0x00044ca7) list_single_number_heading_pane_vc

0x0b62,	// (0x00037d89) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0b62,	// (0x00037d89) list_double_graphic_heading_pane_vc_g1

0x1989,	// (0x00038bb0) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1989,	// (0x00038bb0) list_double_graphic_heading_pane_vc_g2

0x1995,	// (0x00038bbc) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1995,	// (0x00038bbc) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x000469f0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x000469f0) list_double_graphic_heading_pane_vc_g

0x0ca1,	// (0x00037ec8) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0ca1,	// (0x00037ec8) list_double_graphic_heading_pane_vc_t1

0x0b84,	// (0x00037dab) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b84,	// (0x00037dab) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x00046c20) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x00046c20) list_double_graphic_heading_pane_vc_t

0xc8e6,	// (0x00043b0d) list_setting_pane_vc_g1_ParamLimits

0xc8e6,	// (0x00043b0d) list_setting_pane_vc_g1

0xc8f2,	// (0x00043b19) list_setting_pane_vc_g2_ParamLimits

0xc8f2,	// (0x00043b19) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x00046a16) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x00046a16) list_setting_pane_vc_g

0xe0bc,	// (0x000452e3) list_setting_pane_vc_t1_ParamLimits

0xe0bc,	// (0x000452e3) list_setting_pane_vc_t1

0xe0d6,	// (0x000452fd) list_setting_pane_vc_t2_ParamLimits

0xe0d6,	// (0x000452fd) list_setting_pane_vc_t2

0x0001,

0xfa3c,	// (0x00046c63) list_setting_pane_vc_t_ParamLimits

0xfa3c,	// (0x00046c63) list_setting_pane_vc_t

0xc952,	// (0x00043b79) set_value_pane_cp_vc_ParamLimits

0xc952,	// (0x00043b79) set_value_pane_cp_vc

0x1989,	// (0x00038bb0) list_single_number_heading_pane_vc_g1_ParamLimits

0x1989,	// (0x00038bb0) list_single_number_heading_pane_vc_g1

0x1995,	// (0x00038bbc) list_single_number_heading_pane_vc_g2_ParamLimits

0x1995,	// (0x00038bbc) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x000467ff) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x000467ff) list_single_number_heading_pane_vc_g

0x0b84,	// (0x00037dab) list_single_number_heading_pane_vc_t1_ParamLimits

0x0b84,	// (0x00037dab) list_single_number_heading_pane_vc_t1

0x0cb5,	// (0x00037edc) list_single_number_heading_pane_vc_t2_ParamLimits

0x0cb5,	// (0x00037edc) list_single_number_heading_pane_vc_t2

0x0cc9,	// (0x00037ef0) list_single_number_heading_pane_vc_t3_ParamLimits

0x0cc9,	// (0x00037ef0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa41,	// (0x00046c68) list_single_number_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x00046c68) list_single_number_heading_pane_vc_t

0x0b62,	// (0x00037d89) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0b62,	// (0x00037d89) list_single_graphic_heading_pane_vc_g1

0x1989,	// (0x00038bb0) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1989,	// (0x00038bb0) list_single_graphic_heading_pane_vc_g4

0x1995,	// (0x00038bbc) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1995,	// (0x00038bbc) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x000469f0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x000469f0) list_single_graphic_heading_pane_vc_g

0x0b84,	// (0x00037dab) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0b84,	// (0x00037dab) list_single_graphic_heading_pane_vc_t1

0x0cdb,	// (0x00037f02) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0cdb,	// (0x00037f02) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x00046c6f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x00046c6f) list_single_graphic_heading_pane_vc_t

0x1989,	// (0x00038bb0) list_double2_pane_vc_g1_ParamLimits

0x1989,	// (0x00038bb0) list_double2_pane_vc_g1

0x1995,	// (0x00038bbc) list_double2_pane_vc_g2_ParamLimits

0x1995,	// (0x00038bbc) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x000467ff) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x000467ff) list_double2_pane_vc_g

0x0cef,	// (0x00037f16) list_double2_pane_vc_t1_ParamLimits

0x0cef,	// (0x00037f16) list_double2_pane_vc_t1

0x3686,	// (0x0003a8ad) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3686,	// (0x0003a8ad) list_double2_large_graphic_pane_vc_g1

0x1989,	// (0x00038bb0) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1989,	// (0x00038bb0) list_double2_large_graphic_pane_vc_g2

0x1995,	// (0x00038bbc) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1995,	// (0x00038bbc) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x00046817) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x00046817) list_double2_large_graphic_pane_vc_g

0x0d05,	// (0x00037f2c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0d05,	// (0x00037f2c) list_double2_large_graphic_pane_vc_t1

0x0d1b,	// (0x00037f42) list_double_time_pane_vc_g1_ParamLimits

0x0d1b,	// (0x00037f42) list_double_time_pane_vc_g1

0x0d27,	// (0x00037f4e) list_double_time_pane_vc_g2_ParamLimits

0x0d27,	// (0x00037f4e) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x00046c74) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x00046c74) list_double_time_pane_vc_g

0x0d33,	// (0x00037f5a) list_double_time_pane_vc_t1_ParamLimits

0x0d33,	// (0x00037f5a) list_double_time_pane_vc_t1

0x0d51,	// (0x00037f78) list_double_time_pane_vc_t2_ParamLimits

0x0d51,	// (0x00037f78) list_double_time_pane_vc_t2

0x0da0,	// (0x00037fc7) list_double_time_pane_vc_t3_ParamLimits

0x0da0,	// (0x00037fc7) list_double_time_pane_vc_t3

0x0db2,	// (0x00037fd9) list_double_time_pane_vc_t4_ParamLimits

0x0db2,	// (0x00037fd9) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x00046c79) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x00046c79) list_double_time_pane_vc_t

0x1989,	// (0x00038bb0) list_double_pane_vc_g1_ParamLimits

0x1989,	// (0x00038bb0) list_double_pane_vc_g1

0x1995,	// (0x00038bbc) list_double_pane_vc_g2_ParamLimits

0x1995,	// (0x00038bbc) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x000467ff) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x000467ff) list_double_pane_vc_g

0x0dc6,	// (0x00037fed) list_double_pane_vc_t1_ParamLimits

0x0dc6,	// (0x00037fed) list_double_pane_vc_t1

0x0dd8,	// (0x00037fff) list_double_pane_vc_t2_ParamLimits

0x0dd8,	// (0x00037fff) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x00046c82) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x00046c82) list_double_pane_vc_t

0x1989,	// (0x00038bb0) list_double_number_pane_vc_g1_ParamLimits

0x1989,	// (0x00038bb0) list_double_number_pane_vc_g1

0x1995,	// (0x00038bbc) list_double_number_pane_vc_g2_ParamLimits

0x1995,	// (0x00038bbc) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x000467ff) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x000467ff) list_double_number_pane_vc_g

0x0df0,	// (0x00038017) list_double_number_pane_vc_t1_ParamLimits

0x0df0,	// (0x00038017) list_double_number_pane_vc_t1

0x0e04,	// (0x0003802b) list_double_number_pane_vc_t2_ParamLimits

0x0e04,	// (0x0003802b) list_double_number_pane_vc_t2

0x0dd8,	// (0x00037fff) list_double_number_pane_vc_t3_ParamLimits

0x0dd8,	// (0x00037fff) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x00046c87) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x00046c87) list_double_number_pane_vc_t

0x3692,	// (0x0003a8b9) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3692,	// (0x0003a8b9) list_double_large_graphic_pane_vc_g1

0x36a3,	// (0x0003a8ca) list_double_large_graphic_pane_vc_g2_ParamLimits

0x36a3,	// (0x0003a8ca) list_double_large_graphic_pane_vc_g2

0x1995,	// (0x00038bbc) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1995,	// (0x00038bbc) list_double_large_graphic_pane_vc_g3

0x0e16,	// (0x0003803d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0e16,	// (0x0003803d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x00046c8e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x00046c8e) list_double_large_graphic_pane_vc_g

0x0e22,	// (0x00038049) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0e22,	// (0x00038049) list_double_large_graphic_pane_vc_t1

0x0e39,	// (0x00038060) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0e39,	// (0x00038060) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x00046c97) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x00046c97) list_double_large_graphic_pane_vc_t

0x1989,	// (0x00038bb0) list_double_heading_pane_vc_g1_ParamLimits

0x1989,	// (0x00038bb0) list_double_heading_pane_vc_g1

0x1995,	// (0x00038bbc) list_double_heading_pane_vc_g2_ParamLimits

0x1995,	// (0x00038bbc) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x000467ff) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x000467ff) list_double_heading_pane_vc_g

0x0e52,	// (0x00038079) list_double_heading_pane_vc_t1_ParamLimits

0x0e52,	// (0x00038079) list_double_heading_pane_vc_t1

0x0b84,	// (0x00037dab) list_double_heading_pane_vc_t2_ParamLimits

0x0b84,	// (0x00037dab) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x00046c9c) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x00046c9c) list_double_heading_pane_vc_t

0x0b62,	// (0x00037d89) list_double_graphic_pane_vc_g1_ParamLimits

0x0b62,	// (0x00037d89) list_double_graphic_pane_vc_g1

0x0e66,	// (0x0003808d) list_double_graphic_pane_vc_g2_ParamLimits

0x0e66,	// (0x0003808d) list_double_graphic_pane_vc_g2

0x0e75,	// (0x0003809c) list_double_graphic_pane_vc_g3_ParamLimits

0x0e75,	// (0x0003809c) list_double_graphic_pane_vc_g3

0x0002,

0xfa7a,	// (0x00046ca1) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x00046ca1) list_double_graphic_pane_vc_g

0x0e81,	// (0x000380a8) list_double_graphic_pane_vc_t1_ParamLimits

0x0e81,	// (0x000380a8) list_double_graphic_pane_vc_t1

0x0dd8,	// (0x00037fff) list_double_graphic_pane_vc_t2_ParamLimits

0x0dd8,	// (0x00037fff) list_double_graphic_pane_vc_t2

0x0001,

0xfa81,	// (0x00046ca8) list_double_graphic_pane_vc_t_ParamLimits

0xfa81,	// (0x00046ca8) list_double_graphic_pane_vc_t

0x1243,	// (0x0003846a) aid_size_cell_fastswap

0x7f11,	// (0x0003f138) aid_size_cell_touch_ParamLimits

0x7f11,	// (0x0003f138) aid_size_cell_touch

0x14a6,	// (0x000386cd) popup_fast_swap_wide_window_ParamLimits

0x14a6,	// (0x000386cd) popup_fast_swap_wide_window

0x805c,	// (0x0003f283) touch_pane_ParamLimits

0x805c,	// (0x0003f283) touch_pane

0xba6f,	// (0x00042c96) button_value_adjust_pane_cp2

0x081b,	// (0x00037a42) button_value_adjust_pane_cp4

0x083b,	// (0x00037a62) form_field_data_pane_cp2

0x7b27,	// (0x0003ed4e) form_field_data_wide_pane_cp2

0xbdc8,	// (0x00042fef) bg_scroll_pane_ParamLimits

0x1cf6,	// (0x00038f1d) scroll_handle_pane_ParamLimits

0x1d0a,	// (0x00038f31) scroll_sc2_down_pane_ParamLimits

0x1d0a,	// (0x00038f31) scroll_sc2_down_pane

0xbdf9,	// (0x00043020) scroll_sc2_up_pane_ParamLimits

0xbdf9,	// (0x00043020) scroll_sc2_up_pane

0xa780,	// (0x000419a7) grid_wheel_folder_pane_g1_ParamLimits

0xa780,	// (0x000419a7) grid_wheel_folder_pane_g1

0x1f9b,	// (0x000391c2) clock_nsta_pane_cp2_ParamLimits

0x1f9b,	// (0x000391c2) clock_nsta_pane_cp2

0xbbe7,	// (0x00042e0e) listscroll_midp_pane_ParamLimits

0x9c55,	// (0x00040e7c) midp_canvas_pane

0xc680,	// (0x000438a7) nsta_clock_indic_pane

0xc6a8,	// (0x000438cf) listscroll_form_pane_vc

0xc6b0,	// (0x000438d7) listscroll_set_pane_vc_ParamLimits

0xc6b0,	// (0x000438d7) listscroll_set_pane_vc

0x9e39,	// (0x00041060) clock_nsta_pane

0x9e63,	// (0x0004108a) indicator_nsta_pane

0xc7dc,	// (0x00043a03) bg_popup_sub_pane_cp2_ParamLimits

0xc7f0,	// (0x00043a17) find_pane_cp2_ParamLimits

0xc7f0,	// (0x00043a17) find_pane_cp2

0xc806,	// (0x00043a2d) grid_toobar_pane_ParamLimits

0xc962,	// (0x00043b89) list_form_gen_pane_vc_ParamLimits

0xc962,	// (0x00043b89) list_form_gen_pane_vc

0xc978,	// (0x00043b9f) scroll_pane_cp8_vc_ParamLimits

0xc978,	// (0x00043b9f) scroll_pane_cp8_vc

0xc9c8,	// (0x00043bef) data_form_wide_pane_vc_ParamLimits

0xc9c8,	// (0x00043bef) data_form_wide_pane_vc

0xc9d4,	// (0x00043bfb) form_field_data_wide_pane_vc_g1

0xc9dc,	// (0x00043c03) form_field_data_wide_pane_vc_t1_ParamLimits

0xc9dc,	// (0x00043c03) form_field_data_wide_pane_vc_t1

0xba83,	// (0x00042caa) input_focus_pane_cp6_vc_ParamLimits

0xba83,	// (0x00042caa) input_focus_pane_cp6_vc

0xa1e7,	// (0x0004140e) list_midp_pane_ParamLimits

0xd39f,	// (0x000445c6) scroll_pane_cp16_ParamLimits

0xd39f,	// (0x000445c6) scroll_pane_cp16

0xcc73,	// (0x00043e9a) button_value_adjust_pane_ParamLimits

0xcc73,	// (0x00043e9a) button_value_adjust_pane

0xa423,	// (0x0004164a) button_value_adjust_pane_cp6_ParamLimits

0xa423,	// (0x0004164a) button_value_adjust_pane_cp6

0xa539,	// (0x00041760) settings_code_pane_cp_ParamLimits

0xa539,	// (0x00041760) settings_code_pane_cp

0xb41c,	// (0x00042643) cell_touch_pane_g1

0xb41c,	// (0x00042643) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x00046935) cell_touch_pane_g

0xa65f,	// (0x00041886) cell_touch_pane_cp_ParamLimits

0xa65f,	// (0x00041886) cell_touch_pane_cp

0xa67b,	// (0x000418a2) cell_touch_pane_ParamLimits

0xa67b,	// (0x000418a2) cell_touch_pane

0xb41c,	// (0x00042643) scroll_sc2_down_pane_g1

0xb41c,	// (0x00042643) scroll_sc2_up_pane_g1

0xb426,	// (0x0004264d) bg_set_opt_pane_cp4_vc

0xde96,	// (0x000450bd) list_set_graphic_pane_vc_g1_ParamLimits

0xde96,	// (0x000450bd) list_set_graphic_pane_vc_g1

0xdea2,	// (0x000450c9) list_set_graphic_pane_vc_g2_ParamLimits

0xdea2,	// (0x000450c9) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x00046c25) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x00046c25) list_set_graphic_pane_vc_g

0xdeae,	// (0x000450d5) text_primary_small_cp13_vc_ParamLimits

0xdeae,	// (0x000450d5) text_primary_small_cp13_vc

0xd379,	// (0x000445a0) list_set_graphic_pane_vc_ParamLimits

0xd379,	// (0x000445a0) list_set_graphic_pane_vc

0xb426,	// (0x0004264d) input_focus_pane_cp2_vc

0xb41c,	// (0x00042643) setting_code_pane_vc_g1

0xb499,	// (0x000426c0) setting_code_pane_vc_t1

0xdec6,	// (0x000450ed) set_text_pane_vc_t1_ParamLimits

0xdec6,	// (0x000450ed) set_text_pane_vc_t1

0xb426,	// (0x0004264d) input_focus_pane_cp1_vc

0xdee5,	// (0x0004510c) list_set_text_pane_vc

0xb41c,	// (0x00042643) setting_text_pane_vc_g1

0xb426,	// (0x0004264d) bg_set_opt_pane_cp2_vc

0xb490,	// (0x000426b7) setting_slider_graphic_pane_vc_g1

0xdeef,	// (0x00045116) setting_slider_graphic_pane_vc_t1

0xdefe,	// (0x00045125) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x00046c2a) setting_slider_graphic_pane_vc_t

0xdf0d,	// (0x00045134) slider_set_pane_cp_vc

0xdf15,	// (0x0004513c) slider_set_pane_vc_g1

0xdf1e,	// (0x00045145) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x00046c2f) slider_set_pane_vc_g

0xbade,	// (0x00042d05) set_opt_bg_pane_g1_copy1

0xbae6,	// (0x00042d0d) set_opt_bg_pane_g2_copy1

0xdf4a,	// (0x00045171) set_opt_bg_pane_g3_copy1

0xbaf6,	// (0x00042d1d) set_opt_bg_pane_g4_copy1

0xbafe,	// (0x00042d25) set_opt_bg_pane_g5_copy1

0xbb06,	// (0x00042d2d) set_opt_bg_pane_g6_copy1

0xdf52,	// (0x00045179) set_opt_bg_pane_g7_copy1

0xdf5c,	// (0x00045183) set_opt_bg_pane_g8_copy1

0xdf64,	// (0x0004518b) set_opt_bg_pane_g9_copy1

0xb426,	// (0x0004264d) bg_set_opt_pane_cp_vc

0xdf6c,	// (0x00045193) setting_slider_pane_vc_t1

0xdf7b,	// (0x000451a2) setting_slider_pane_vc_t2

0xdf8a,	// (0x000451b1) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x00046c3e) setting_slider_pane_vc_t

0xdf99,	// (0x000451c0) slider_set_pane_vc

0x2efb,	// (0x0003a122) volume_set_pane_vc_g1

0x3635,	// (0x0003a85c) volume_set_pane_vc_g2

0x363e,	// (0x0003a865) volume_set_pane_vc_g3

0x3647,	// (0x0003a86e) volume_set_pane_vc_g4

0x3650,	// (0x0003a877) volume_set_pane_vc_g5

0x3659,	// (0x0003a880) volume_set_pane_vc_g6

0x3662,	// (0x0003a889) volume_set_pane_vc_g7

0x366b,	// (0x0003a892) volume_set_pane_vc_g8

0x3674,	// (0x0003a89b) volume_set_pane_vc_g9

0x367d,	// (0x0003a8a4) volume_set_pane_vc_g10

0x0009,

0xfa1e,	// (0x00046c45) volume_set_pane_vc_g

0xdfa1,	// (0x000451c8) volume_set_pane_vc

0xdfab,	// (0x000451d2) button_value_adjust_pane_cp1_vc

0xdfb5,	// (0x000451dc) list_highlight_pane_cp2_vc

0xdfbe,	// (0x000451e5) list_set_pane_vc_ParamLimits

0xdfbe,	// (0x000451e5) list_set_pane_vc

0xe052,	// (0x00045279) main_pane_set_vc_t1_ParamLimits

0xe052,	// (0x00045279) main_pane_set_vc_t1

0xe067,	// (0x0004528e) main_pane_set_vc_t2_ParamLimits

0xe067,	// (0x0004528e) main_pane_set_vc_t2

0xe079,	// (0x000452a0) main_pane_set_vc_t3_ParamLimits

0xe079,	// (0x000452a0) main_pane_set_vc_t3

0xe08b,	// (0x000452b2) main_pane_set_vc_t4_ParamLimits

0xe08b,	// (0x000452b2) main_pane_set_vc_t4

0x0003,

0xfa33,	// (0x00046c5a) main_pane_set_vc_t_ParamLimits

0xfa33,	// (0x00046c5a) main_pane_set_vc_t

0xe09d,	// (0x000452c4) setting_code_pane_vc_ParamLimits

0xe09d,	// (0x000452c4) setting_code_pane_vc

0xe0ac,	// (0x000452d3) setting_slider_graphic_pane_vc

0xe0ac,	// (0x000452d3) setting_slider_pane_vc

0xe0ac,	// (0x000452d3) setting_text_pane_vc

0xe0ac,	// (0x000452d3) setting_volume_pane_vc

0xe0b4,	// (0x000452db) scroll_pane_cp121_vc

0xba5d,	// (0x00042c84) set_content_pane_vc

0xe0ec,	// (0x00045313) button_value_adjust_pane_g1

0xe0f5,	// (0x0004531c) button_value_adjust_pane_g2

0x0001,

0xfa86,	// (0x00046cad) button_value_adjust_pane_g

0xe0fe,	// (0x00045325) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe0fe,	// (0x00045325) form_field_slider_wide_pane_vc_t1

0xe112,	// (0x00045339) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe112,	// (0x00045339) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8b,	// (0x00046cb2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x00046cb2) form_field_slider_wide_pane_vc_t

0xb474,	// (0x0004269b) input_focus_pane_cp10_vc_ParamLimits

0xb474,	// (0x0004269b) input_focus_pane_cp10_vc

0xe13e,	// (0x00045365) slider_cont_pane_cp1_vc_ParamLimits

0xe13e,	// (0x00045365) slider_cont_pane_cp1_vc

0xe14e,	// (0x00045375) slider_form_pane_g1_cp2

0xdf1e,	// (0x00045145) slider_form_pane_g2_cp2

0xe17b,	// (0x000453a2) form_field_slider_pane_vc_t3

0xe189,	// (0x000453b0) form_field_slider_pane_vc_t4

0xe197,	// (0x000453be) slider_form_pane_vc_ParamLimits

0xe197,	// (0x000453be) slider_form_pane_vc

0xe1a4,	// (0x000453cb) form_field_slider_pane_vc_t1_ParamLimits

0xe1a4,	// (0x000453cb) form_field_slider_pane_vc_t1

0xe112,	// (0x00045339) form_field_slider_pane_vc_t2_ParamLimits

0xe112,	// (0x00045339) form_field_slider_pane_vc_t2

0x0001,

0xfa9d,	// (0x00046cc4) form_field_slider_pane_vc_t_ParamLimits

0xfa9d,	// (0x00046cc4) form_field_slider_pane_vc_t

0xb474,	// (0x0004269b) input_focus_pane_cp9_vc_ParamLimits

0xb474,	// (0x0004269b) input_focus_pane_cp9_vc

0xe1c0,	// (0x000453e7) slider_cont_pane_vc_ParamLimits

0xe1c0,	// (0x000453e7) slider_cont_pane_vc

0xe1d2,	// (0x000453f9) list_form_graphic_pane_cp_vc_ParamLimits

0xe1d2,	// (0x000453f9) list_form_graphic_pane_cp_vc

0xc9d4,	// (0x00043bfb) form_field_popup_wide_pane_vc_g1

0xe1e7,	// (0x0004540e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe1e7,	// (0x0004540e) form_field_popup_wide_pane_vc_t1

0xba83,	// (0x00042caa) input_focus_pane_cp8_vc_ParamLimits

0xba83,	// (0x00042caa) input_focus_pane_cp8_vc

0xe22c,	// (0x00045453) list_form_wide_pane_vc_ParamLimits

0xe22c,	// (0x00045453) list_form_wide_pane_vc

0xe238,	// (0x0004545f) list_form_graphic_pane_vc_g1

0xe240,	// (0x00045467) list_form_graphic_pane_vc_t1_ParamLimits

0xe240,	// (0x00045467) list_form_graphic_pane_vc_t1

0xb482,	// (0x000426a9) list_highlight_pane_cp5_vc_ParamLimits

0xb482,	// (0x000426a9) list_highlight_pane_cp5_vc

0xe25c,	// (0x00045483) list_form_graphic_pane_vc_ParamLimits

0xe25c,	// (0x00045483) list_form_graphic_pane_vc

0xc9d4,	// (0x00043bfb) form_field_popup_pane_vc_g1

0xe272,	// (0x00045499) form_field_popup_pane_vc_t1_ParamLimits

0xe272,	// (0x00045499) form_field_popup_pane_vc_t1

0xba83,	// (0x00042caa) input_focus_pane_cp7_vc_ParamLimits

0xba83,	// (0x00042caa) input_focus_pane_cp7_vc

0xe289,	// (0x000454b0) list_form_pane_vc_ParamLimits

0xe289,	// (0x000454b0) list_form_pane_vc

0xe295,	// (0x000454bc) data_form_pane_vc_t1_ParamLimits

0xe295,	// (0x000454bc) data_form_pane_vc_t1

0xbade,	// (0x00042d05) input_focus_pane_vc_g1

0xbae6,	// (0x00042d0d) input_focus_pane_vc_g2

0xbaee,	// (0x00042d15) input_focus_pane_vc_g3

0xbaf6,	// (0x00042d1d) input_focus_pane_vc_g4

0xbafe,	// (0x00042d25) input_focus_pane_vc_g5

0xbb06,	// (0x00042d2d) input_focus_pane_vc_g6

0xbb0e,	// (0x00042d35) input_focus_pane_vc_g7

0xbb16,	// (0x00042d3d) input_focus_pane_vc_g8

0xbb1e,	// (0x00042d45) input_focus_pane_vc_g9

0xb41c,	// (0x00042643) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x000468be) input_focus_pane_vc_g

0xc9c8,	// (0x00043bef) data_form_pane_vc_ParamLimits

0xc9c8,	// (0x00043bef) data_form_pane_vc

0xc9d4,	// (0x00043bfb) form_field_data_pane_vc_g1

0xe2b0,	// (0x000454d7) form_field_data_pane_vc_t1_ParamLimits

0xe2b0,	// (0x000454d7) form_field_data_pane_vc_t1

0xba83,	// (0x00042caa) input_focus_pane_vc_ParamLimits

0xba83,	// (0x00042caa) input_focus_pane_vc

0xe2ca,	// (0x000454f1) button_value_adjust_pane_cp3_vc

0xe2d2,	// (0x000454f9) button_value_adjust_pane_cp5_vc

0xe2da,	// (0x00045501) form_field_data_pane_vc_ParamLimits

0xe2da,	// (0x00045501) form_field_data_pane_vc

0xe2f1,	// (0x00045518) form_field_data_pane_vc_cp2

0xe2f9,	// (0x00045520) form_field_data_wide_pane_vc_ParamLimits

0xe2f9,	// (0x00045520) form_field_data_wide_pane_vc

0xe30f,	// (0x00045536) form_field_data_wide_pane_vc_cp2

0xe317,	// (0x0004553e) form_field_popup_pane_vc_ParamLimits

0xe317,	// (0x0004553e) form_field_popup_pane_vc

0xe32e,	// (0x00045555) form_field_popup_wide_pane_vc_ParamLimits

0xe32e,	// (0x00045555) form_field_popup_wide_pane_vc

0xe344,	// (0x0004556b) form_field_slider_pane_vc_ParamLimits

0xe344,	// (0x0004556b) form_field_slider_pane_vc

0xe357,	// (0x0004557e) form_field_slider_wide_pane_vc_ParamLimits

0xe357,	// (0x0004557e) form_field_slider_wide_pane_vc

0xa699,	// (0x000418c0) grid_touch_1_pane_ParamLimits

0xa699,	// (0x000418c0) grid_touch_1_pane

0xa6ad,	// (0x000418d4) grid_touch_2_pane_ParamLimits

0xa6ad,	// (0x000418d4) grid_touch_2_pane

0xe36a,	// (0x00045591) touch_pane_g1_ParamLimits

0xe36a,	// (0x00045591) touch_pane_g1

0xe378,	// (0x0004559f) cell_app_pane_cp_wide_ParamLimits

0xe378,	// (0x0004559f) cell_app_pane_cp_wide

0xe389,	// (0x000455b0) grid_popup_fast_wide_pane_ParamLimits

0xe389,	// (0x000455b0) grid_popup_fast_wide_pane

0xe39d,	// (0x000455c4) scroll_pane_cp19_ParamLimits

0xe39d,	// (0x000455c4) scroll_pane_cp19

0xb426,	// (0x0004264d) bg_popup_window_pane_cp20

0xe3b1,	// (0x000455d8) listscroll_popup_fast_wide_pane

0xcd1c,	// (0x00043f43) grid_indicator_nsta_pane

0xe3b9,	// (0x000455e0) clock_nsta_pane_g1

0xe3c2,	// (0x000455e9) clock_nsta_pane_t1

0xa6d7,	// (0x000418fe) cell_indicator_nsta_pane_ParamLimits

0xa6d7,	// (0x000418fe) cell_indicator_nsta_pane

0xe36a,	// (0x00045591) cell_indicator_nsta_pane_g1

0xa6f4,	// (0x0004191b) cell_indicator_nsta_pane_g2

0x0001,

0xfaae,	// (0x00046cd5) cell_indicator_nsta_pane_g

0xe3de,	// (0x00045605) clock_nsta_pane_cp

0xe3e6,	// (0x0004560d) indicator_nsta_pane_cp

0xe3ef,	// (0x00045616) nsta_clock_indic_pane_g1

0xb4be,	// (0x000426e5) grid_indicator_pane

0xbeeb,	// (0x00043112) scroll_pane_cp29

0x1eea,	// (0x00039111) indicator_nsta_pane_cp2_ParamLimits

0x1eea,	// (0x00039111) indicator_nsta_pane_cp2

0xb482,	// (0x000426a9) main_apps_wheel_pane

0xcb18,	// (0x00043d3f) form_midp_field_text_pane_ParamLimits

0xcc45,	// (0x00043e6c) scroll_bar_cp050_ParamLimits

0xe458,	// (0x0004567f) cell_indicator_pane_ParamLimits

0xe458,	// (0x0004567f) cell_indicator_pane

0xe475,	// (0x0004569c) cell_indicator_pane_g1

0xa70a,	// (0x00041931) grid_wheel_folder_pane_ParamLimits

0xa70a,	// (0x00041931) grid_wheel_folder_pane

0xa718,	// (0x0004193f) list_wheel_apps_pane_ParamLimits

0xa718,	// (0x0004193f) list_wheel_apps_pane

0xa726,	// (0x0004194d) main_apps_wheel_pane_g1_ParamLimits

0xa726,	// (0x0004194d) main_apps_wheel_pane_g1

0xa732,	// (0x00041959) main_apps_wheel_pane_g2_ParamLimits

0xa732,	// (0x00041959) main_apps_wheel_pane_g2

0x0001,

0xfaca,	// (0x00046cf1) main_apps_wheel_pane_g_ParamLimits

0xfaca,	// (0x00046cf1) main_apps_wheel_pane_g

0xa740,	// (0x00041967) main_apps_wheel_pane_t1_ParamLimits

0xa740,	// (0x00041967) main_apps_wheel_pane_t1

0xa754,	// (0x0004197b) list_wheel_apps_pane_g1

0xa75c,	// (0x00041983) list_wheel_apps_pane_g2

0xa764,	// (0x0004198b) list_wheel_apps_pane_g3

0xa76c,	// (0x00041993) list_wheel_apps_pane_g4

0xa776,	// (0x0004199d) list_wheel_apps_pane_g5

0x0004,

0xfacf,	// (0x00046cf6) list_wheel_apps_pane_g

0xc310,	// (0x00043537) navi_icon_text_pane

0x9d2d,	// (0x00040f54) aid_fill_nsta

0xe47f,	// (0x000456a6) navi_icon_text_pane_g1

0xe48b,	// (0x000456b2) navi_icon_text_pane_t1

0xc208,	// (0x0004342f) list_set_graphic_pane_t1_ParamLimits

0xc208,	// (0x0004342f) list_set_graphic_pane_t1

0xd367,	// (0x0004458e) popup_midp_note_alarm_window_t6_ParamLimits

0xd367,	// (0x0004458e) popup_midp_note_alarm_window_t6

0xd3ab,	// (0x000445d2) popup_midp_note_alarm_window_t7_ParamLimits

0xd3ab,	// (0x000445d2) popup_midp_note_alarm_window_t7

0xd3bd,	// (0x000445e4) popup_midp_note_alarm_window_t8_ParamLimits

0xd3bd,	// (0x000445e4) popup_midp_note_alarm_window_t8

0xd3cf,	// (0x000445f6) popup_midp_note_alarm_window_t9_ParamLimits

0xd3cf,	// (0x000445f6) popup_midp_note_alarm_window_t9

0xd3e1,	// (0x00044608) popup_midp_note_alarm_window_t10_ParamLimits

0xd3e1,	// (0x00044608) popup_midp_note_alarm_window_t10

0xd3f3,	// (0x0004461a) popup_midp_note_alarm_window_t11_ParamLimits

0xd3f3,	// (0x0004461a) popup_midp_note_alarm_window_t11

0xd405,	// (0x0004462c) scroll_pane_cp17_ParamLimits

0xd405,	// (0x0004462c) scroll_pane_cp17

0x2efb,	// (0x0003a122) volume_small_pane_cp_g1

0x37e1,	// (0x0003aa08) volume_small_pane_cp_g2

0x37ea,	// (0x0003aa11) volume_small_pane_cp_g3

0x37f3,	// (0x0003aa1a) volume_small_pane_cp_g4

0x37fc,	// (0x0003aa23) volume_small_pane_cp_g5

0x3805,	// (0x0003aa2c) volume_small_pane_cp_g6

0x380e,	// (0x0003aa35) volume_small_pane_cp_g7

0x3817,	// (0x0003aa3e) volume_small_pane_cp_g8

0x3820,	// (0x0003aa47) volume_small_pane_cp_g9

0x3829,	// (0x0003aa50) volume_small_pane_cp_g10

0xc496,	// (0x000436bd) midp_ticker_pane_g1_ParamLimits

0xc4a2,	// (0x000436c9) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0004698a) midp_ticker_pane_g_ParamLimits

0xc4ae,	// (0x000436d5) midp_ticker_pane_t1_ParamLimits

0x9d51,	// (0x00040f78) aid_fill_nsta_2

0xcc31,	// (0x00043e58) list_form2_midp_pane

0xda4f,	// (0x00044c76) midp_editing_number_pane_ParamLimits

0xda5e,	// (0x00044c85) midp_ticker_pane_ParamLimits

0xe49d,	// (0x000456c4) form2_midp_field_pane

0xe4a5,	// (0x000456cc) scroll_pane_cp51

0xe4c5,	// (0x000456ec) form2_midp_button_pane_ParamLimits

0xe4c5,	// (0x000456ec) form2_midp_button_pane

0xe4d7,	// (0x000456fe) form2_midp_content_pane_ParamLimits

0xe4d7,	// (0x000456fe) form2_midp_content_pane

0xe4f1,	// (0x00045718) form2_midp_field_choice_group_pane

0xe4f9,	// (0x00045720) form2_midp_field_pane_g1

0xe501,	// (0x00045728) form2_midp_field_pane_g2

0xe509,	// (0x00045730) form2_midp_field_pane_g3

0xe511,	// (0x00045738) form2_midp_field_pane_g4

0x0003,

0xfaf4,	// (0x00046d1b) form2_midp_field_pane_g

0xe519,	// (0x00045740) form2_midp_gauge_slider_pane

0xe521,	// (0x00045748) form2_midp_gauge_wait_pane

0xe529,	// (0x00045750) form2_midp_image_pane_ParamLimits

0xe529,	// (0x00045750) form2_midp_image_pane

0xe544,	// (0x0004576b) form2_midp_label_pane_ParamLimits

0xe544,	// (0x0004576b) form2_midp_label_pane

0xa7a9,	// (0x000419d0) form2_midp_label_pane_cp_ParamLimits

0xa7a9,	// (0x000419d0) form2_midp_label_pane_cp

0xe55d,	// (0x00045784) form2_midp_string_pane_ParamLimits

0xe55d,	// (0x00045784) form2_midp_string_pane

0x0e93,	// (0x000380ba) form2_midp_text_pane_ParamLimits

0x0e93,	// (0x000380ba) form2_midp_text_pane

0xe56f,	// (0x00045796) form2_midp_time_pane

0xe57f,	// (0x000457a6) input_focus_pane_cp51_ParamLimits

0xe57f,	// (0x000457a6) input_focus_pane_cp51

0xe597,	// (0x000457be) form2_midp_label_pane_t1_ParamLimits

0xe597,	// (0x000457be) form2_midp_label_pane_t1

0x0eae,	// (0x000380d5) form2_mdip_text_pane_t1_ParamLimits

0x0eae,	// (0x000380d5) form2_mdip_text_pane_t1

0x0eca,	// (0x000380f1) form2_midp_time_pane_t1

0xe5df,	// (0x00045806) form2_midp_gauge_slider_pane_t1

0xa7ca,	// (0x000419f1) form2_midp_gauge_slider_pane_t2

0xa7de,	// (0x00041a05) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafd,	// (0x00046d24) form2_midp_gauge_slider_pane_t

0xe5f1,	// (0x00045818) form2_midp_slider_pane

0xe5fd,	// (0x00045824) form2_midp_gauge_wait_pane_t1

0xe60b,	// (0x00045832) form2_midp_wait_pane_ParamLimits

0xe60b,	// (0x00045832) form2_midp_wait_pane

0xa7f2,	// (0x00041a19) list_single_2graphic_pane_cp4_ParamLimits

0xa7f2,	// (0x00041a19) list_single_2graphic_pane_cp4

0xa16a,	// (0x00041391) list_single_midp_graphic_pane_cp_ParamLimits

0xa16a,	// (0x00041391) list_single_midp_graphic_pane_cp

0xb426,	// (0x0004264d) list_highlight_pane_cp20

0xe636,	// (0x0004585d) list_single_2graphic_pane_g1_cp4

0xdd9b,	// (0x00044fc2) list_single_2graphic_pane_g2_cp4

0xe63e,	// (0x00045865) list_single_2graphic_pane_t1_cp4

0xb482,	// (0x000426a9) list_highlight_pane_cp21

0xe64d,	// (0x00045874) list_single_midp_graphic_pane_g4_cp

0xe65c,	// (0x00045883) list_single_midp_graphic_pane_t1_cp

0xa809,	// (0x00041a30) form2_mdip_string_pane_t1_ParamLimits

0xa809,	// (0x00041a30) form2_mdip_string_pane_t1

0xb426,	// (0x0004264d) bg_wml_button_pane_cp2

0xb41c,	// (0x00042643) form2_midp_image_pane_g1

0x19f4,	// (0x00038c1b) list_double_large_graphic_pane_g5_ParamLimits

0x19f4,	// (0x00038c1b) list_double_large_graphic_pane_g5

0xbbe7,	// (0x00042e0e) midp_form_pane_ParamLimits

0xb482,	// (0x000426a9) main_apps_wheel_pane_ParamLimits

0x8682,	// (0x0003f8a9) popup_preview_window_ParamLimits

0x8682,	// (0x0003f8a9) popup_preview_window

0x28d8,	// (0x00039aff) popup_touch_info_window_ParamLimits

0x28d8,	// (0x00039aff) popup_touch_info_window

0x28f6,	// (0x00039b1d) popup_touch_menu_window_ParamLimits

0x28f6,	// (0x00039b1d) popup_touch_menu_window

0xb412,	// (0x00042639) bg_popup_sub_pane_cp6

0xe671,	// (0x00045898) list_touch_menu_pane

0xe679,	// (0x000458a0) list_single_touch_menu_pane_ParamLimits

0xe679,	// (0x000458a0) list_single_touch_menu_pane

0xe68d,	// (0x000458b4) list_single_touch_menu_pane_t1

0xb482,	// (0x000426a9) bg_popup_sub_pane_cp7_ParamLimits

0xb482,	// (0x000426a9) bg_popup_sub_pane_cp7

0xe69b,	// (0x000458c2) heading_sub_pane

0xe6a3,	// (0x000458ca) list_touch_info_pane_ParamLimits

0xe6a3,	// (0x000458ca) list_touch_info_pane

0xe6b2,	// (0x000458d9) list_single_touch_info_pane_ParamLimits

0xe6b2,	// (0x000458d9) list_single_touch_info_pane

0xe6c4,	// (0x000458eb) list_single_touch_info_pane_t1

0xe6d2,	// (0x000458f9) list_single_touch_info_pane_t2

0x0001,

0xfb0b,	// (0x00046d32) list_single_touch_info_pane_t

0xc46c,	// (0x00043693) bg_popup_heading_pane_cp

0xe6e0,	// (0x00045907) heading_sub_pane_t1

0xc98e,	// (0x00043bb5) bg_popup_preview_window_pane_cp_ParamLimits

0xc98e,	// (0x00043bb5) bg_popup_preview_window_pane_cp

0xe69b,	// (0x000458c2) heading_preview_pane

0xe6a3,	// (0x000458ca) list_preview_pane_ParamLimits

0xe6a3,	// (0x000458ca) list_preview_pane

0xe6ee,	// (0x00045915) popup_preview_window_g1

0xe6b2,	// (0x000458d9) list_single_preview_pane_ParamLimits

0xe6b2,	// (0x000458d9) list_single_preview_pane

0xe6f6,	// (0x0004591d) list_single_preview_pane_g1

0xe6fe,	// (0x00045925) list_single_preview_pane_t1

0xe6c4,	// (0x000458eb) list_single_preview_pane_t2

0x0001,

0xfb10,	// (0x00046d37) list_single_preview_pane_t

0xe70c,	// (0x00045933) bg_popup_heading_pane_cp2_ParamLimits

0xe70c,	// (0x00045933) bg_popup_heading_pane_cp2

0xe722,	// (0x00045949) heading_preview_pane_g1

0xe72a,	// (0x00045951) heading_preview_pane_t1_ParamLimits

0xe72a,	// (0x00045951) heading_preview_pane_t1

0xb4d5,	// (0x000426fc) soft_indicator_pane_t1_ParamLimits

0xb9ea,	// (0x00042c11) scroll_pane_ParamLimits

0xbde7,	// (0x0004300e) scroll_sc2_left_pane

0xbdf0,	// (0x00043017) scroll_sc2_right_pane

0xbe0f,	// (0x00043036) scroll_bg_pane_g1_ParamLimits

0xbe24,	// (0x0004304b) scroll_bg_pane_g2_ParamLimits

0xbe3c,	// (0x00043063) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x00046915) scroll_bg_pane_g_ParamLimits

0xbe0f,	// (0x00043036) scroll_handle_pane_g1_ParamLimits

0xbe5e,	// (0x00043085) scroll_handle_pane_g2_ParamLimits

0xbe3c,	// (0x00043063) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0004691c) scroll_handle_pane_g_ParamLimits

0x23b2,	// (0x000395d9) popup_choice_list_window_ParamLimits

0x23b2,	// (0x000395d9) popup_choice_list_window

0xc7e8,	// (0x00043a0f) choice_list_pane

0xc86a,	// (0x00043a91) cell_toolbar_pane_t1

0xc892,	// (0x00043ab9) toolbar_button_pane_ParamLimits

0xd7c6,	// (0x000449ed) ai_gene_pane_1_t2_ParamLimits

0xd7c6,	// (0x000449ed) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x00046b3f) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x00046b3f) ai_gene_pane_1_t

0xe747,	// (0x0004596e) scroll_sc2_left_pane_g1

0xe747,	// (0x0004596e) scroll_sc2_right_pane_g1

0xbbe7,	// (0x00042e0e) bg_popup_sub_pane_cp10

0xe751,	// (0x00045978) list_choice_list_pane

0xe768,	// (0x0004598f) list_single_choice_list_pane_ParamLimits

0xe768,	// (0x0004598f) list_single_choice_list_pane

0xbbca,	// (0x00042df1) list_single_choice_list_pane_g1

0xbbd2,	// (0x00042df9) list_single_choice_list_pane_t1_ParamLimits

0xbbd2,	// (0x00042df9) list_single_choice_list_pane_t1

0xe77b,	// (0x000459a2) choice_list_pane_g1

0xe783,	// (0x000459aa) choice_list_pane_t1

0xb412,	// (0x00042639) input_focus_pane_cp11

0xbd5c,	// (0x00042f83) title_pane_stacon_g2_ParamLimits

0xbd5c,	// (0x00042f83) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x000468fb) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000468fb) title_pane_stacon_g

0xc46c,	// (0x00043693) cursor_press_pane

0x8341,	// (0x0003f568) popup_fep_hwr_window_ParamLimits

0x8341,	// (0x0003f568) popup_fep_hwr_window

0x24d0,	// (0x000396f7) popup_fep_vkb_window_ParamLimits

0x24d0,	// (0x000396f7) popup_fep_vkb_window

0xe791,	// (0x000459b8) cursor_press_pane_g1

0x0002,

0xfb39,	// (0x00046d60) fep_vkb_side_pane_g_ParamLimits

0x3a35,	// (0x0003ac5c) fep_hwr_candidate_pane_ParamLimits

0x3a35,	// (0x0003ac5c) fep_hwr_candidate_pane

0x3a5f,	// (0x0003ac86) fep_hwr_side_pane_ParamLimits

0x3a5f,	// (0x0003ac86) fep_hwr_side_pane

0x3a7f,	// (0x0003aca6) fep_hwr_top_pane_ParamLimits

0x3a7f,	// (0x0003aca6) fep_hwr_top_pane

0x3a97,	// (0x0003acbe) fep_hwr_write_pane_ParamLimits

0x3a97,	// (0x0003acbe) fep_hwr_write_pane

0xfb39,	// (0x00046d60) fep_vkb_side_pane_g

0xe799,	// (0x000459c0) fep_hwr_top_pane_g1

0xe7ab,	// (0x000459d2) fep_hwr_top_pane_g2

0x3ac3,	// (0x0003acea) fep_hwr_top_pane_g3

0x0002,

0xfb15,	// (0x00046d3c) fep_hwr_top_pane_g

0x3ad8,	// (0x0003acff) fep_hwr_top_text_pane

0xbfb1,	// (0x000431d8) fep_hwr_top_text_pane_g1

0xe7e1,	// (0x00045a08) fep_hwr_top_text_pane_t1

0x3bce,	// (0x0003adf5) fep_hwr_candidate_pane_g1

0xe9ee,	// (0x00045c15) fep_vkb_keypad_pane_g3_ParamLimits

0xe9ee,	// (0x00045c15) fep_vkb_keypad_pane_g3

0xea16,	// (0x00045c3d) fep_vkb_keypad_pane_g4_ParamLimits

0xea16,	// (0x00045c3d) fep_vkb_keypad_pane_g4

0xea85,	// (0x00045cac) fep_vkb_bottom_pane_g2_ParamLimits

0xea85,	// (0x00045cac) fep_vkb_bottom_pane_g2

0x0001,

0xfb40,	// (0x00046d67) fep_vkb_bottom_pane_g_ParamLimits

0xfb40,	// (0x00046d67) fep_vkb_bottom_pane_g

0xe747,	// (0x0004596e) cell_vkb_side_pane_g2

0x0001,

0xfb4a,	// (0x00046d71) cell_vkb_side_pane_g

0xeac9,	// (0x00045cf0) cell_vkb_side_pane_t1

0xead7,	// (0x00045cfe) cell_vkb_side_pane_t1_copy1

0xe747,	// (0x0004596e) bg_fep_vkb_candidate_pane_g2

0xebb3,	// (0x00045dda) cell_vkb_candidate_pane_ParamLimits

0xe7ef,	// (0x00045a16) aid_size_cell_vkb_ParamLimits

0xe7ef,	// (0x00045a16) aid_size_cell_vkb

0xebb3,	// (0x00045dda) cell_vkb_candidate_pane

0x3cd2,	// (0x0003aef9) bg_popup_fep_shadow_pane_g1

0xe86b,	// (0x00045a92) fep_vkb_bottom_pane_ParamLimits

0xe86b,	// (0x00045a92) fep_vkb_bottom_pane

0xe8a8,	// (0x00045acf) fep_vkb_candidate_pane_ParamLimits

0xe8a8,	// (0x00045acf) fep_vkb_candidate_pane

0xe8c4,	// (0x00045aeb) fep_vkb_keypad_pane_ParamLimits

0xe8c4,	// (0x00045aeb) fep_vkb_keypad_pane

0xe90a,	// (0x00045b31) fep_vkb_side_pane_ParamLimits

0xe90a,	// (0x00045b31) fep_vkb_side_pane

0xe946,	// (0x00045b6d) fep_vkb_top_pane_ParamLimits

0xe946,	// (0x00045b6d) fep_vkb_top_pane

0xe982,	// (0x00045ba9) fep_vkb_top_pane_g1_ParamLimits

0xe982,	// (0x00045ba9) fep_vkb_top_pane_g1

0xe991,	// (0x00045bb8) fep_vkb_top_pane_g2_ParamLimits

0xe991,	// (0x00045bb8) fep_vkb_top_pane_g2

0xe9a0,	// (0x00045bc7) fep_vkb_top_pane_g3_ParamLimits

0xe9a0,	// (0x00045bc7) fep_vkb_top_pane_g3

0x0003,

0xfb30,	// (0x00046d57) fep_vkb_top_pane_g_ParamLimits

0xfb30,	// (0x00046d57) fep_vkb_top_pane_g

0xe9be,	// (0x00045be5) fep_vkb_top_text_pane_ParamLimits

0xe9be,	// (0x00045be5) fep_vkb_top_text_pane

0xa8a1,	// (0x00041ac8) fep_vkb_side_pane_g1_ParamLimits

0xa8a1,	// (0x00041ac8) fep_vkb_side_pane_g1

0xe9dd,	// (0x00045c04) grid_vkb_side_pane_ParamLimits

0xe9dd,	// (0x00045c04) grid_vkb_side_pane

0x3cda,	// (0x0003af01) bg_popup_fep_shadow_pane_g2

0x3ce3,	// (0x0003af0a) bg_popup_fep_shadow_pane_g3

0x3ceb,	// (0x0003af12) bg_popup_fep_shadow_pane_g4

0x3cf4,	// (0x0003af1b) bg_popup_fep_shadow_pane_g5

0x3cfe,	// (0x0003af25) bg_popup_fep_shadow_pane_g6

0x3d06,	// (0x0003af2d) bg_popup_fep_shadow_pane_g7

0xbafe,	// (0x00042d25) bg_popup_fep_shadow_pane_g8

0xea34,	// (0x00045c5b) grid_vkb_keypad_number_pane_ParamLimits

0xea34,	// (0x00045c5b) grid_vkb_keypad_number_pane

0xea44,	// (0x00045c6b) grid_vkb_keypad_pane_ParamLimits

0xea44,	// (0x00045c6b) grid_vkb_keypad_pane

0xea6a,	// (0x00045c91) fep_vkb_bottom_pane_g1_ParamLimits

0xea6a,	// (0x00045c91) fep_vkb_bottom_pane_g1

0xea93,	// (0x00045cba) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xea93,	// (0x00045cba) grid_vkb_keypad_bottom_left_pane

0xeaa8,	// (0x00045ccf) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xeaa8,	// (0x00045ccf) grid_vkb_keypad_bottom_right_pane

0xeabd,	// (0x00045ce4) fep_vkb_top_text_pane_g1

0xa8e8,	// (0x00041b0f) fep_vkb_top_text_pane_t1

0xa8fa,	// (0x00041b21) cell_vkb_side_pane_ParamLimits

0xa8fa,	// (0x00041b21) cell_vkb_side_pane

0xe747,	// (0x0004596e) cell_vkb_side_pane_g1

0xeae5,	// (0x00045d0c) cell_vkb_keypad_pane_ParamLimits

0xeae5,	// (0x00045d0c) cell_vkb_keypad_pane

0xeb60,	// (0x00045d87) cell_vkb_keypad_pane_g1

0x0008,

0xfb5d,	// (0x00046d84) bg_popup_fep_shadow_pane_g

0xe747,	// (0x0004596e) cell_hwr_side_pane_g1

0xe747,	// (0x0004596e) cell_hwr_side_pane_g2

0xeb6a,	// (0x00045d91) cell_vkb_keypad_pane_t1

0xa910,	// (0x00041b37) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa910,	// (0x00041b37) cell_vkb_keypad_bottom_left_pane

0xa925,	// (0x00041b4c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa925,	// (0x00041b4c) cell_vkb_keypad_bottom_right_pane

0xe747,	// (0x0004596e) cell_vkb_keypad_bottom_left_pane_g1

0xe747,	// (0x0004596e) cell_vkb_keypad_bottom_right_pane_g1

0xeb78,	// (0x00045d9f) cell_vkb_keypad_number_pane_ParamLimits

0xeb78,	// (0x00045d9f) cell_vkb_keypad_number_pane

0xeb97,	// (0x00045dbe) cell_vkb_keypad_number_pane_g1

0xeba1,	// (0x00045dc8) cell_vkb_keypad_number_pane_g2

0xebaa,	// (0x00045dd1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4f,	// (0x00046d76) cell_vkb_keypad_number_pane_g

0xeb6a,	// (0x00045d91) cell_vkb_keypad_number_pane_t1

0xebd0,	// (0x00045df7) fep_vkb_candidate_pane_g1

0x0001,

0xfb4a,	// (0x00046d71) cell_hwr_side_pane_g

0xebe9,	// (0x00045e10) cell_hwr_side_pane_t1

0x3d18,	// (0x0003af3f) cell_hwr_side_pane_t1_copy1

0xe9b0,	// (0x00045bd7) cell_hwr_candidate_pane_g1

0x3d26,	// (0x0003af4d) cell_hwr_candidate_pane_t1

0xe747,	// (0x0004596e) cell_vkb_candidate_pane_g2

0xec2d,	// (0x00045e54) cell_vkb_candidate_pane_t1

0x39fc,	// (0x0003ac23) bg_popup_fep_shadow_pane_ParamLimits

0x39fc,	// (0x0003ac23) bg_popup_fep_shadow_pane

0xad69,	// (0x00041f90) bg_fep_hwr_top_pane_g4

0xe7bd,	// (0x000459e4) bg_hwr_side_pane_g1_ParamLimits

0xe7bd,	// (0x000459e4) bg_hwr_side_pane_g1

0x8afd,	// (0x0003fd24) cell_hwr_side_pane_ParamLimits

0x8afd,	// (0x0003fd24) cell_hwr_side_pane

0x3b4f,	// (0x0003ad76) fep_hwr_write_pane_g1_ParamLimits

0x3b4f,	// (0x0003ad76) fep_hwr_write_pane_g1

0x3b5c,	// (0x0003ad83) fep_hwr_write_pane_g2_ParamLimits

0x3b5c,	// (0x0003ad83) fep_hwr_write_pane_g2

0x3b69,	// (0x0003ad90) fep_hwr_write_pane_g3_ParamLimits

0x3b69,	// (0x0003ad90) fep_hwr_write_pane_g3

0x8b1d,	// (0x0003fd44) fep_hwr_write_pane_g4_ParamLimits

0x8b1d,	// (0x0003fd44) fep_hwr_write_pane_g4

0x0005,

0xfb1c,	// (0x00046d43) fep_hwr_write_pane_g_ParamLimits

0xfb1c,	// (0x00046d43) fep_hwr_write_pane_g

0xad69,	// (0x00041f90) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xad69,	// (0x00041f90) bg_fep_hwr_candidate_pane_g2

0x3b8c,	// (0x0003adb3) cell_hwr_candidate_pane_ParamLimits

0x3b8c,	// (0x0003adb3) cell_hwr_candidate_pane

0x3bce,	// (0x0003adf5) fep_hwr_candidate_pane_g1_ParamLimits

0xe81d,	// (0x00045a44) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe81d,	// (0x00045a44) bg_popup_fep_shadow_pane_cp2

0xe9b0,	// (0x00045bd7) fep_vkb_top_pane_g4_ParamLimits

0xe9b0,	// (0x00045bd7) fep_vkb_top_pane_g4

0xe9cf,	// (0x00045bf6) fep_vkb_side_pane_g2_ParamLimits

0xe9cf,	// (0x00045bf6) fep_vkb_side_pane_g2

0x7a4d,	// (0x0003ec74) list_setting_pane_t4_ParamLimits

0x7a4d,	// (0x0003ec74) list_setting_pane_t4

0x7acf,	// (0x0003ecf6) list_setting_number_pane_t5_ParamLimits

0x7acf,	// (0x0003ecf6) list_setting_number_pane_t5

0xbff8,	// (0x0004321f) list_double_heading_pane_cp2_ParamLimits

0xbff8,	// (0x0004321f) list_double_heading_pane_cp2

0xba51,	// (0x00042c78) list_double_heading_pane_g1_cp2_ParamLimits

0xba51,	// (0x00042c78) list_double_heading_pane_g1_cp2

0xba9d,	// (0x00042cc4) list_double_heading_pane_g2_cp2_ParamLimits

0xba9d,	// (0x00042cc4) list_double_heading_pane_g2_cp2

0xec3b,	// (0x00045e62) list_double_heading_pane_t1_cp2_ParamLimits

0xec3b,	// (0x00045e62) list_double_heading_pane_t1_cp2

0xec51,	// (0x00045e78) list_double_heading_pane_t2_cp2_ParamLimits

0xec51,	// (0x00045e78) list_double_heading_pane_t2_cp2

0xb40a,	// (0x00042631) aid_value_unit2

0x14f2,	// (0x00038719) popup_preview_fixed_window

0xb5b5,	// (0x000427dc) bg_popup_preview_window_pane_cp02

0xec63,	// (0x00045e8a) list_preview_fixed_pane

0xeceb,	// (0x00045f12) list_empty_pane_fp_ParamLimits

0xeceb,	// (0x00045f12) list_empty_pane_fp

0xeceb,	// (0x00045f12) list_single_cale_day_pane_fp_ParamLimits

0xeceb,	// (0x00045f12) list_single_cale_day_pane_fp

0xeceb,	// (0x00045f12) list_single_graphic_heading_pane_fp_ParamLimits

0xeceb,	// (0x00045f12) list_single_graphic_heading_pane_fp

0xeceb,	// (0x00045f12) list_single_graphic_pane_fp_ParamLimits

0xeceb,	// (0x00045f12) list_single_graphic_pane_fp

0xeceb,	// (0x00045f12) list_single_heading_pane_fp_ParamLimits

0xeceb,	// (0x00045f12) list_single_heading_pane_fp

0xeceb,	// (0x00045f12) list_single_pane_fp_ParamLimits

0xeceb,	// (0x00045f12) list_single_pane_fp

0xed02,	// (0x00045f29) list_single_pane_fp_g1_ParamLimits

0xed02,	// (0x00045f29) list_single_pane_fp_g1

0x19dc,	// (0x00038c03) list_single_pane_fp_g2_ParamLimits

0x19dc,	// (0x00038c03) list_single_pane_fp_g2

0x0edd,	// (0x00038104) list_single_pane_fp_g3_ParamLimits

0x0edd,	// (0x00038104) list_single_pane_fp_g3

0xed0e,	// (0x00045f35) list_single_pane_fp_g4_ParamLimits

0xed0e,	// (0x00045f35) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x00046da5) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x00046da5) list_single_pane_fp_g

0x0ef1,	// (0x00038118) list_single_pane_fp_t1_ParamLimits

0x0ef1,	// (0x00038118) list_single_pane_fp_t1

0x0f08,	// (0x0003812f) list_single_graphic_pane_fp_g1_ParamLimits

0x0f08,	// (0x0003812f) list_single_graphic_pane_fp_g1

0xed02,	// (0x00045f29) list_single_graphic_pane_fp_g2_ParamLimits

0xed02,	// (0x00045f29) list_single_graphic_pane_fp_g2

0x19dc,	// (0x00038c03) list_single_graphic_pane_fp_g3_ParamLimits

0x19dc,	// (0x00038c03) list_single_graphic_pane_fp_g3

0x0edd,	// (0x00038104) list_single_graphic_pane_fp_g4_ParamLimits

0x0edd,	// (0x00038104) list_single_graphic_pane_fp_g4

0xed0e,	// (0x00045f35) list_single_graphic_pane_fp_g5_ParamLimits

0xed0e,	// (0x00045f35) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x00046dae) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x00046dae) list_single_graphic_pane_fp_g

0x0f14,	// (0x0003813b) list_single_graphic_pane_fp_t1_ParamLimits

0x0f14,	// (0x0003813b) list_single_graphic_pane_fp_t1

0x0f08,	// (0x0003812f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0f08,	// (0x0003812f) list_single_graphic_heading_pane_fp_g1

0xed02,	// (0x00045f29) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xed02,	// (0x00045f29) list_single_graphic_heading_pane_fp_g2

0x19dc,	// (0x00038c03) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x19dc,	// (0x00038c03) list_single_graphic_heading_pane_fp_g3

0x0edd,	// (0x00038104) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0edd,	// (0x00038104) list_single_graphic_heading_pane_fp_g4

0xed0e,	// (0x00045f35) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xed0e,	// (0x00045f35) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x00046dae) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x00046dae) list_single_graphic_heading_pane_fp_g

0x0f2a,	// (0x00038151) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0f2a,	// (0x00038151) list_single_graphic_heading_pane_fp_t1

0x0f40,	// (0x00038167) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0f40,	// (0x00038167) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x00046db9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x00046db9) list_single_graphic_heading_pane_fp_t

0x0f52,	// (0x00038179) list_single_cale_day_pane_fp_g1_ParamLimits

0x0f52,	// (0x00038179) list_single_cale_day_pane_fp_g1

0xed1a,	// (0x00045f41) list_single_cale_day_pane_fp_g2_ParamLimits

0xed1a,	// (0x00045f41) list_single_cale_day_pane_fp_g2

0x0f8a,	// (0x000381b1) list_single_cale_day_pane_fp_g3_ParamLimits

0x0f8a,	// (0x000381b1) list_single_cale_day_pane_fp_g3

0x0fb2,	// (0x000381d9) list_single_cale_day_pane_fp_g4_ParamLimits

0x0fb2,	// (0x000381d9) list_single_cale_day_pane_fp_g4

0x0fd6,	// (0x000381fd) list_single_cale_day_pane_fp_g5_ParamLimits

0x0fd6,	// (0x000381fd) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x00046dbe) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x00046dbe) list_single_cale_day_pane_fp_g

0x0ffa,	// (0x00038221) list_single_cale_day_pane_fp_t1_ParamLimits

0x0ffa,	// (0x00038221) list_single_cale_day_pane_fp_t1

0x1020,	// (0x00038247) list_single_cale_day_pane_fp_t2_ParamLimits

0x1020,	// (0x00038247) list_single_cale_day_pane_fp_t2

0x1039,	// (0x00038260) list_single_cale_day_pane_fp_t3_ParamLimits

0x1039,	// (0x00038260) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x00046dc9) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x00046dc9) list_single_cale_day_pane_fp_t

0xed02,	// (0x00045f29) list_empty_pane_fp_g1_ParamLimits

0xed02,	// (0x00045f29) list_empty_pane_fp_g1

0x1052,	// (0x00038279) list_empty_pane_fp_t1

0x1060,	// (0x00038287) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x00046dd0) list_empty_pane_fp_t

0xed02,	// (0x00045f29) list_single_heading_pane_fp_g1_ParamLimits

0xed02,	// (0x00045f29) list_single_heading_pane_fp_g1

0x19dc,	// (0x00038c03) list_single_heading_pane_fp_g2_ParamLimits

0x19dc,	// (0x00038c03) list_single_heading_pane_fp_g2

0x0edd,	// (0x00038104) list_single_heading_pane_fp_g3_ParamLimits

0x0edd,	// (0x00038104) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x00046dd5) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x00046dd5) list_single_heading_pane_fp_g

0x106e,	// (0x00038295) list_single_heading_pane_fp_t1_ParamLimits

0x106e,	// (0x00038295) list_single_heading_pane_fp_t1

0x1080,	// (0x000382a7) list_single_heading_pane_fp_t2_ParamLimits

0x1080,	// (0x000382a7) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x00046ddc) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x00046ddc) list_single_heading_pane_fp_t

0xbbf3,	// (0x00042e1a) aid_size_cell_fast

0xb598,	// (0x000427bf) soft_indicator_pane_cp1_t1

0xbc30,	// (0x00042e57) cell_app_pane_cp2_ParamLimits

0xbc30,	// (0x00042e57) cell_app_pane_cp2

0x3a1e,	// (0x0003ac45) fep_hwr_candidate_drop_down_list_pane

0xad77,	// (0x00041f9e) fep_hwr_candidate_pane_g3_ParamLimits

0xad77,	// (0x00041f9e) fep_hwr_candidate_pane_g3

0xad84,	// (0x00041fab) fep_hwr_candidate_pane_g4_ParamLimits

0xad84,	// (0x00041fab) fep_hwr_candidate_pane_g4

0x0002,

0xfb29,	// (0x00046d50) fep_hwr_candidate_pane_g_ParamLimits

0xfb29,	// (0x00046d50) fep_hwr_candidate_pane_g

0xe897,	// (0x00045abe) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe897,	// (0x00045abe) fep_vkb_candidate_drop_down_list_pane

0xebd8,	// (0x00045dff) fep_vkb_candidate_pane_g3

0xebe0,	// (0x00045e07) fep_vkb_candidate_pane_g4

0x0002,

0xfb56,	// (0x00046d7d) fep_vkb_candidate_pane_g

0xe9b0,	// (0x00045bd7) cell_hwr_candidate_pane_g1_ParamLimits

0xec79,	// (0x00045ea0) cell_hwr_candidate_pane_g3_ParamLimits

0xec79,	// (0x00045ea0) cell_hwr_candidate_pane_g3

0xec9a,	// (0x00045ec1) cell_hwr_candidate_pane_g4_ParamLimits

0xec9a,	// (0x00045ec1) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x00046d97) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x00046d97) cell_hwr_candidate_pane_g

0xebf7,	// (0x00045e1e) cell_vkb_candidate_pane_g3_ParamLimits

0xebf7,	// (0x00045e1e) cell_vkb_candidate_pane_g3

0xec12,	// (0x00045e39) cell_vkb_candidate_pane_g4_ParamLimits

0xec12,	// (0x00045e39) cell_vkb_candidate_pane_g4

0xed26,	// (0x00045f4d) cell_app_pane_cp2_g1_ParamLimits

0xed26,	// (0x00045f4d) cell_app_pane_cp2_g1

0xed44,	// (0x00045f6b) cell_app_pane_cp2_g2_ParamLimits

0xed44,	// (0x00045f6b) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x00046de1) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x00046de1) cell_app_pane_cp2_g

0xed50,	// (0x00045f77) cell_app_pane_cp2_t1_ParamLimits

0xed50,	// (0x00045f77) cell_app_pane_cp2_t1

0xba83,	// (0x00042caa) grid_highlight_pane_cp1_ParamLimits

0xba83,	// (0x00042caa) grid_highlight_pane_cp1

0x3d44,	// (0x0003af6b) cell_hwr_candidate_pane_cp1_ParamLimits

0x3d44,	// (0x0003af6b) cell_hwr_candidate_pane_cp1

0xe9b0,	// (0x00045bd7) fep_hwr_candidate_drop_down_list_pane_g1

0xed62,	// (0x00045f89) fep_hwr_candidate_drop_down_list_pane_g2

0xed6f,	// (0x00045f96) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x00046de6) fep_hwr_candidate_drop_down_list_pane_g

0x3d63,	// (0x0003af8a) fep_hwr_candidate_drop_down_list_scroll_pane

0x3d6c,	// (0x0003af93) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x3d6c,	// (0x0003af93) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x3d79,	// (0x0003afa0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x3d79,	// (0x0003afa0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x3d86,	// (0x0003afad) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x3d86,	// (0x0003afad) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xebf7,	// (0x00045e1e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xebf7,	// (0x00045e1e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xec12,	// (0x00045e39) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xec12,	// (0x00045e39) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x3d93,	// (0x0003afba) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x3d93,	// (0x0003afba) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x3dae,	// (0x0003afd5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x3dae,	// (0x0003afd5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xed7c,	// (0x00045fa3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xed7c,	// (0x00045fa3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x00046ded) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x00046ded) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xed97,	// (0x00045fbe) cell_vkb_candidate_pane_cp1_ParamLimits

0xed97,	// (0x00045fbe) cell_vkb_candidate_pane_cp1

0xe9b0,	// (0x00045bd7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe9b0,	// (0x00045bd7) fep_vkb_candidate_drop_down_list_pane_g1

0xed62,	// (0x00045f89) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xed62,	// (0x00045f89) fep_vkb_candidate_drop_down_list_pane_g2

0xed6f,	// (0x00045f96) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xed6f,	// (0x00045f96) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x00046de6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbf,	// (0x00046de6) fep_vkb_candidate_drop_down_list_pane_g

0xedb7,	// (0x00045fde) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xedb7,	// (0x00045fde) fep_vkb_candidate_drop_down_list_scroll_pane

0xedc4,	// (0x00045feb) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xedc4,	// (0x00045feb) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xedd1,	// (0x00045ff8) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xedd1,	// (0x00045ff8) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xeddd,	// (0x00046004) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xeddd,	// (0x00046004) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xec79,	// (0x00045ea0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xec79,	// (0x00045ea0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xec9a,	// (0x00045ec1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xec9a,	// (0x00045ec1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xede9,	// (0x00046010) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xede9,	// (0x00046010) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xee0a,	// (0x00046031) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xee0a,	// (0x00046031) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xed7c,	// (0x00045fa3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xed7c,	// (0x00045fa3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x00046dfe) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x00046dfe) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x961e,	// (0x00040845) title_pane_g1_ParamLimits

0x9631,	// (0x00040858) title_pane_g2_ParamLimits

0xf554,	// (0x0004677b) title_pane_g_ParamLimits

0xbfa1,	// (0x000431c8) aid_call2_pane

0xbfa9,	// (0x000431d0) aid_call_pane

0xbfb1,	// (0x000431d8) popup_clock_analogue_window_g1

0xbfb1,	// (0x000431d8) popup_clock_analogue_window_g2

0x1d1f,	// (0x00038f46) popup_clock_analogue_window_g3

0x1d28,	// (0x00038f4f) popup_clock_analogue_window_g4

0xb41c,	// (0x00042643) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0004692a) popup_clock_analogue_window_g

0x1d30,	// (0x00038f57) popup_clock_analogue_window_t1

0x1d3e,	// (0x00038f65) clock_digital_number_pane_ParamLimits

0x1d3e,	// (0x00038f65) clock_digital_number_pane

0x1d4a,	// (0x00038f71) clock_digital_number_pane_cp02_ParamLimits

0x1d4a,	// (0x00038f71) clock_digital_number_pane_cp02

0x1d56,	// (0x00038f7d) clock_digital_number_pane_cp03_ParamLimits

0x1d56,	// (0x00038f7d) clock_digital_number_pane_cp03

0x1d62,	// (0x00038f89) clock_digital_number_pane_cp04_ParamLimits

0x1d62,	// (0x00038f89) clock_digital_number_pane_cp04

0x1d6e,	// (0x00038f95) clock_digital_separator_pane_ParamLimits

0x1d6e,	// (0x00038f95) clock_digital_separator_pane

0x1d7a,	// (0x00038fa1) popup_clock_digital_window_t1_ParamLimits

0x1d7a,	// (0x00038fa1) popup_clock_digital_window_t1

0xb41c,	// (0x00042643) clock_digital_number_pane_g1

0xb41c,	// (0x00042643) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x00046935) clock_digital_number_pane_g

0xb41c,	// (0x00042643) clock_digital_separator_pane_g1

0xb41c,	// (0x00042643) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x00046935) clock_digital_separator_pane_g

0x9d2d,	// (0x00040f54) aid_fill_nsta_ParamLimits

0x9e63,	// (0x0004108a) indicator_nsta_pane_ParamLimits

0xc791,	// (0x000439b8) popup_clock_analogue_window

0xc791,	// (0x000439b8) popup_clock_digital_window

0xcd1c,	// (0x00043f43) grid_indicator_nsta_pane_ParamLimits

0xe3d0,	// (0x000455f7) clock_nsta_pane_t2

0x0001,

0xfaa9,	// (0x00046cd0) clock_nsta_pane_t

0x1ce3,	// (0x00038f0a) aid_size_max_handle

0x810a,	// (0x0003f331) aid_size_min_handle

0xc46c,	// (0x00043693) editor_scroll_pane

0xee2b,	// (0x00046052) ex_editor_pane

0xbbaf,	// (0x00042dd6) scroll_pane_cp13

0xba16,	// (0x00042c3d) scroll_pane_cp14

0xbfe0,	// (0x00043207) scroll_pane_cp36

0xc00a,	// (0x00043231) list_single_graphic_hl_pane_cp2_ParamLimits

0xc00a,	// (0x00043231) list_single_graphic_hl_pane_cp2

0xa58b,	// (0x000417b2) list_single_graphic_hl_pane_ParamLimits

0xa58b,	// (0x000417b2) list_single_graphic_hl_pane

0x1096,	// (0x000382bd) aid_size_min_hl_cp1

0xee33,	// (0x0004605a) list_highlight_pane_cp34_ParamLimits

0xee33,	// (0x0004605a) list_highlight_pane_cp34

0xee44,	// (0x0004606b) list_single_graphic_hl_pane_g1_ParamLimits

0xee44,	// (0x0004606b) list_single_graphic_hl_pane_g1

0x7d7d,	// (0x0003efa4) list_single_graphic_hl_pane_g2_ParamLimits

0x7d7d,	// (0x0003efa4) list_single_graphic_hl_pane_g2

0x7d7d,	// (0x0003efa4) list_single_graphic_hl_pane_g3_ParamLimits

0x7d7d,	// (0x0003efa4) list_single_graphic_hl_pane_g3

0x4057,	// (0x0003b27e) list_single_graphic_hl_pane_g4_ParamLimits

0x4057,	// (0x0003b27e) list_single_graphic_hl_pane_g4

0x8b32,	// (0x0003fd59) list_single_graphic_hl_pane_g5_ParamLimits

0x8b32,	// (0x0003fd59) list_single_graphic_hl_pane_g5

0x0004,

0xfbe8,	// (0x00046e0f) list_single_graphic_hl_pane_g_ParamLimits

0xfbe8,	// (0x00046e0f) list_single_graphic_hl_pane_g

0x7d89,	// (0x0003efb0) list_single_graphic_hl_pane_t1_ParamLimits

0x7d89,	// (0x0003efb0) list_single_graphic_hl_pane_t1

0xee51,	// (0x00046078) aid_size_min_hl_cp2

0xee5a,	// (0x00046081) list_highlight_pane_cp34_cp2_ParamLimits

0xee5a,	// (0x00046081) list_highlight_pane_cp34_cp2

0xee44,	// (0x0004606b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xee44,	// (0x0004606b) list_single_graphic_hl_pane_g1_cp2

0xee67,	// (0x0004608e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xee67,	// (0x0004608e) list_single_graphic_hl_pane_g2_cp2

0xa940,	// (0x00041b67) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xa940,	// (0x00041b67) list_single_graphic_hl_pane_g3_cp2

0xc3b1,	// (0x000435d8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc3b1,	// (0x000435d8) list_single_graphic_hl_pane_g4_cp2

0xee73,	// (0x0004609a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xee73,	// (0x0004609a) list_single_graphic_hl_pane_g5_cp2

0x817f,	// (0x0003f3a6) control_pane_g4_ParamLimits

0x817f,	// (0x0003f3a6) control_pane_g4

0xbbe7,	// (0x00042e0e) bg_popup_sub_pane_cp10_ParamLimits

0xe751,	// (0x00045978) list_choice_list_pane_ParamLimits

0xe760,	// (0x00045987) scroll_pane_cp23

0xb5b5,	// (0x000427dc) bg_popup_preview_window_pane_cp02_ParamLimits

0xec63,	// (0x00045e8a) list_preview_fixed_pane_ParamLimits

0xecbb,	// (0x00045ee2) list_preview_fixed_pane_cp_ParamLimits

0xecbb,	// (0x00045ee2) list_preview_fixed_pane_cp

0xecc7,	// (0x00045eee) popup_preview_fixed_window_g1_ParamLimits

0xecc7,	// (0x00045eee) popup_preview_fixed_window_g1

0xecd3,	// (0x00045efa) popup_preview_fixed_window_g2_ParamLimits

0xecd3,	// (0x00045efa) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x00046d9e) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x00046d9e) popup_preview_fixed_window_g

0x1bbf,	// (0x00038de6) aid_navi_side_left_pane_ParamLimits

0x1bd4,	// (0x00038dfb) aid_navi_side_right_pane_ParamLimits

0x1bec,	// (0x00038e13) navi_icon_pane_stacon_ParamLimits

0x1c00,	// (0x00038e27) navi_navi_pane_stacon_ParamLimits

0x1bec,	// (0x00038e13) navi_text_pane_stacon_ParamLimits

0xb412,	// (0x00042639) main_text_info_pane

0xee9d,	// (0x000460c4) listscroll_text_info_pane

0xeea5,	// (0x000460cc) list_text_info_pane_ParamLimits

0xeea5,	// (0x000460cc) list_text_info_pane

0xeeb4,	// (0x000460db) scroll_pane_cp24_ParamLimits

0xeeb4,	// (0x000460db) scroll_pane_cp24

0xa94e,	// (0x00041b75) list_text_info_pane_t1_ParamLimits

0xa94e,	// (0x00041b75) list_text_info_pane_t1

0x82b6,	// (0x0003f4dd) popup_fast_swap2_window_ParamLimits

0x82b6,	// (0x0003f4dd) popup_fast_swap2_window

0xeed2,	// (0x000460f9) aid_size_cell_fast2

0xb412,	// (0x00042639) bg_popup_window_pane_cp17

0xcc5d,	// (0x00043e84) heading_pane_cp2

0xb79b,	// (0x000429c2) listscroll_fast2_pane

0xeedc,	// (0x00046103) grid_fast2_pane

0xeee6,	// (0x0004610d) listscroll_fast2_pane_g1

0xeeee,	// (0x00046115) listscroll_fast2_pane_g2

0x0001,

0x007b,	// (0x000372a2) listscroll_fast2_pane_g

0xbbaf,	// (0x00042dd6) scroll_pane_cp26

0xeef8,	// (0x0004611f) cell_fast2_pane_ParamLimits

0xeef8,	// (0x0004611f) cell_fast2_pane

0xef0d,	// (0x00046134) cell_fast2_pane_g1

0xef16,	// (0x0004613d) cell_fast2_pane_g2

0xef1f,	// (0x00046146) cell_fast2_pane_g3

0x0002,

0x0080,	// (0x000372a7) cell_fast2_pane_g

0xb7dd,	// (0x00042a04) grid_highlight_pane_cp9

0xb7f2,	// (0x00042a19) main_eswt_pane_ParamLimits

0xb7f2,	// (0x00042a19) main_eswt_pane

0xeec9,	// (0x000460f0) list_single_text_info_pane

0xef27,	// (0x0004614e) eswt_ctrl_button_pane

0xef27,	// (0x0004614e) eswt_ctrl_canvas_pane

0xef2f,	// (0x00046156) eswt_ctrl_combo_pane

0xef27,	// (0x0004614e) eswt_ctrl_default_pane

0xef27,	// (0x0004614e) eswt_ctrl_label_pane

0xef37,	// (0x0004615e) eswt_ctrl_wait_pane

0xef3f,	// (0x00046166) eswt_shell_pane

0xb412,	// (0x00042639) listscroll_eswt_app_pane

0xef5f,	// (0x00046186) popup_eswt_tasktip_window_ParamLimits

0xef5f,	// (0x00046186) popup_eswt_tasktip_window

0xc98e,	// (0x00043bb5) bg_popup_window_pane_cp18

0xef70,	// (0x00046197) eswt_control_pane_g1_ParamLimits

0xef70,	// (0x00046197) eswt_control_pane_g1

0xef7d,	// (0x000461a4) eswt_control_pane_g2_ParamLimits

0xef7d,	// (0x000461a4) eswt_control_pane_g2

0xef8a,	// (0x000461b1) eswt_control_pane_g3_ParamLimits

0xef8a,	// (0x000461b1) eswt_control_pane_g3

0xef97,	// (0x000461be) eswt_control_pane_g4_ParamLimits

0xef97,	// (0x000461be) eswt_control_pane_g4

0x0003,

0x0087,	// (0x000372ae) eswt_control_pane_g_ParamLimits

0x0087,	// (0x000372ae) eswt_control_pane_g

0xba83,	// (0x00042caa) bg_button_pane_ParamLimits

0xba83,	// (0x00042caa) bg_button_pane

0xb7f2,	// (0x00042a19) common_borders_pane_copy2_ParamLimits

0xb7f2,	// (0x00042a19) common_borders_pane_copy2

0xefa4,	// (0x000461cb) control_button_pane_g1_ParamLimits

0xefa4,	// (0x000461cb) control_button_pane_g1

0xefb0,	// (0x000461d7) control_button_pane_g2_ParamLimits

0xefb0,	// (0x000461d7) control_button_pane_g2

0xefbc,	// (0x000461e3) control_button_pane_g3_ParamLimits

0xefbc,	// (0x000461e3) control_button_pane_g3

0x0002,

0x0090,	// (0x000372b7) control_button_pane_g_ParamLimits

0x0090,	// (0x000372b7) control_button_pane_g

0xefd0,	// (0x000461f7) control_button_pane_t1

0xefde,	// (0x00046205) control_button_pane_t2

0x0001,

0x0097,	// (0x000372be) control_button_pane_t

0xc89e,	// (0x00043ac5) bg_button_pane_g1

0xc8a6,	// (0x00043acd) bg_button_pane_g2

0xc8ae,	// (0x00043ad5) bg_button_pane_g3

0xc8b6,	// (0x00043add) bg_button_pane_g4

0xc8be,	// (0x00043ae5) bg_button_pane_g5

0xc8c6,	// (0x00043aed) bg_button_pane_g6

0xc8ce,	// (0x00043af5) bg_button_pane_g7

0xc8d6,	// (0x00043afd) bg_button_pane_g8

0xc8de,	// (0x00043b05) bg_button_pane_g9

0x0008,

0xf86c,	// (0x00046a93) bg_button_pane_g

0xe70c,	// (0x00045933) common_borders_pane_ParamLimits

0xe70c,	// (0x00045933) common_borders_pane

0xef70,	// (0x00046197) eswt_control_pane_g1_copy1_ParamLimits

0xef70,	// (0x00046197) eswt_control_pane_g1_copy1

0xef7d,	// (0x000461a4) eswt_control_pane_g2_copy1_ParamLimits

0xef7d,	// (0x000461a4) eswt_control_pane_g2_copy1

0xef8a,	// (0x000461b1) eswt_control_pane_g3_copy1_ParamLimits

0xef8a,	// (0x000461b1) eswt_control_pane_g3_copy1

0xef97,	// (0x000461be) eswt_control_pane_g4_copy1_ParamLimits

0xef97,	// (0x000461be) eswt_control_pane_g4_copy1

0xe747,	// (0x0004596e) bg_eswt_ctrl_canvas_pane_g1

0xe70c,	// (0x00045933) common_borders_pane_cp2_ParamLimits

0xe70c,	// (0x00045933) common_borders_pane_cp2

0xe70c,	// (0x00045933) common_borders_pane_cp3_ParamLimits

0xe70c,	// (0x00045933) common_borders_pane_cp3

0xefec,	// (0x00046213) separator_horizontal_pane

0xeff4,	// (0x0004621b) separator_vertical_pane

0xef70,	// (0x00046197) eswt_control_pane_g1_copy2_ParamLimits

0xef70,	// (0x00046197) eswt_control_pane_g1_copy2

0xef7d,	// (0x000461a4) eswt_control_pane_g2_copy2_ParamLimits

0xef7d,	// (0x000461a4) eswt_control_pane_g2_copy2

0xef8a,	// (0x000461b1) eswt_control_pane_g3_copy2_ParamLimits

0xef8a,	// (0x000461b1) eswt_control_pane_g3_copy2

0xef97,	// (0x000461be) eswt_control_pane_g4_copy2_ParamLimits

0xef97,	// (0x000461be) eswt_control_pane_g4_copy2

0xb412,	// (0x00042639) common_borders_pane_cp4

0xeffd,	// (0x00046224) separator_horizontal_pane_g1

0xf006,	// (0x0004622d) separator_horizontal_pane_g2

0xf00f,	// (0x00046236) separator_horizontal_pane_g3

0x0002,

0x009c,	// (0x000372c3) separator_horizontal_pane_g

0xef70,	// (0x00046197) eswt_control_pane_g1_copy3_ParamLimits

0xef70,	// (0x00046197) eswt_control_pane_g1_copy3

0xef7d,	// (0x000461a4) eswt_control_pane_g2_copy3_ParamLimits

0xef7d,	// (0x000461a4) eswt_control_pane_g2_copy3

0xef8a,	// (0x000461b1) eswt_control_pane_g3_copy3_ParamLimits

0xef8a,	// (0x000461b1) eswt_control_pane_g3_copy3

0xef97,	// (0x000461be) eswt_control_pane_g4_copy3_ParamLimits

0xef97,	// (0x000461be) eswt_control_pane_g4_copy3

0xb412,	// (0x00042639) common_borders_pane_cp5

0xf018,	// (0x0004623f) separator_vertical_pane_g1

0xf021,	// (0x00046248) separator_vertical_pane_g2

0xf02a,	// (0x00046251) separator_vertical_pane_g3

0x0002,

0x00a3,	// (0x000372ca) separator_vertical_pane_g

0xef70,	// (0x00046197) eswt_control_pane_g1_copy4_ParamLimits

0xef70,	// (0x00046197) eswt_control_pane_g1_copy4

0xef7d,	// (0x000461a4) eswt_control_pane_g2_copy4_ParamLimits

0xef7d,	// (0x000461a4) eswt_control_pane_g2_copy4

0xef8a,	// (0x000461b1) eswt_control_pane_g3_copy4_ParamLimits

0xef8a,	// (0x000461b1) eswt_control_pane_g3_copy4

0xef97,	// (0x000461be) eswt_control_pane_g4_copy4_ParamLimits

0xef97,	// (0x000461be) eswt_control_pane_g4_copy4

0xa96c,	// (0x00041b93) eswt_ctrl_combo_button_pane

0xa974,	// (0x00041b9b) eswt_ctrl_input_pane

0xa97c,	// (0x00041ba3) popup_choice_list_window_cp70

0xa984,	// (0x00041bab) eswt_ctrl_input_pane_t1

0xb412,	// (0x00042639) input_focus_pane_cp70

0xe70c,	// (0x00045933) bg_button_pane_cp70_ParamLimits

0xe70c,	// (0x00045933) bg_button_pane_cp70

0xa992,	// (0x00041bb9) eswt_ctrl_combo_button_pane_g1

0xf033,	// (0x0004625a) wait_bar_pane_cp70

0xc98e,	// (0x00043bb5) bg_popup_window_pane_cp70_ParamLimits

0xc98e,	// (0x00043bb5) bg_popup_window_pane_cp70

0xf03b,	// (0x00046262) popup_eswt_tasktip_window_t1

0xf051,	// (0x00046278) wait_bar_pane_cp71_ParamLimits

0xf051,	// (0x00046278) wait_bar_pane_cp71

0xf05d,	// (0x00046284) grid_eswt_app_pane

0xbdf0,	// (0x00043017) scroll_pane_cp70

0xa99a,	// (0x00041bc1) cell_eswt_app_pane_ParamLimits

0xa99a,	// (0x00041bc1) cell_eswt_app_pane

0xa9c4,	// (0x00041beb) cell_eswt_app_pane_g1_ParamLimits

0xa9c4,	// (0x00041beb) cell_eswt_app_pane_g1

0xa9f3,	// (0x00041c1a) cell_eswt_app_pane_g2_ParamLimits

0xa9f3,	// (0x00041c1a) cell_eswt_app_pane_g2

0x0001,

0xfbf3,	// (0x00046e1a) cell_eswt_app_pane_g_ParamLimits

0xfbf3,	// (0x00046e1a) cell_eswt_app_pane_g

0xaa1c,	// (0x00041c43) cell_eswt_app_pane_t1_ParamLimits

0xaa1c,	// (0x00041c43) cell_eswt_app_pane_t1

0xf066,	// (0x0004628d) grid_highlight_pane_cp70_ParamLimits

0xf066,	// (0x0004628d) grid_highlight_pane_cp70

0xc365,	// (0x0004358c) set_content_pane_g1

0xc655,	// (0x0004387c) status_small_volume_pane

0x3efc,	// (0x0003b123) status_small_volume_pane_g1

0x3f04,	// (0x0003b12b) volume_small2_pane

0x3f0d,	// (0x0003b134) volume_small2_pane_g1

0x3f16,	// (0x0003b13d) volume_small2_pane_g2

0x3f1f,	// (0x0003b146) volume_small2_pane_g3

0x3f28,	// (0x0003b14f) volume_small2_pane_g4

0x3f31,	// (0x0003b158) volume_small2_pane_g5

0x3f3a,	// (0x0003b161) volume_small2_pane_g6

0x3f43,	// (0x0003b16a) volume_small2_pane_g7

0x3f4c,	// (0x0003b173) volume_small2_pane_g8

0x3f55,	// (0x0003b17c) volume_small2_pane_g9

0x3f5e,	// (0x0003b185) volume_small2_pane_g10

0x0009,

0xfbf8,	// (0x00046e1f) volume_small2_pane_g

0xeabd,	// (0x00045ce4) fep_vkb_top_text_pane_g1_ParamLimits

0xa8e8,	// (0x00041b0f) fep_vkb_top_text_pane_t1_ParamLimits

0xecdf,	// (0x00045f06) popup_preview_fixed_window_g3_ParamLimits

0xecdf,	// (0x00045f06) popup_preview_fixed_window_g3

0x88b9,	// (0x0003fae0) popup_toolbar_trans_pane

0xa412,	// (0x00041639) aid_height_set_list_ParamLimits

0xd38d,	// (0x000445b4) aid_size_parent_ParamLimits

0xbbe7,	// (0x00042e0e) list_highlight_pane_cp2_ParamLimits

0xc365,	// (0x0004358c) set_content_pane_g1_ParamLimits

0x7d6b,	// (0x0003ef92) list_single_image_pane_ParamLimits

0x7d6b,	// (0x0003ef92) list_single_image_pane

0xaa4e,	// (0x00041c75) aid_size_cell_image_ParamLimits

0xaa4e,	// (0x00041c75) aid_size_cell_image

0xaa5b,	// (0x00041c82) grid_single_image_pane_ParamLimits

0xaa5b,	// (0x00041c82) grid_single_image_pane

0xba51,	// (0x00042c78) list_single_image_pane_g1_ParamLimits

0xba51,	// (0x00042c78) list_single_image_pane_g1

0xba9d,	// (0x00042cc4) list_single_image_pane_g2_ParamLimits

0xba9d,	// (0x00042cc4) list_single_image_pane_g2

0x0001,

0xfc0d,	// (0x00046e34) list_single_image_pane_g_ParamLimits

0xfc0d,	// (0x00046e34) list_single_image_pane_g

0xf072,	// (0x00046299) list_single_image_pane_t1_ParamLimits

0xf072,	// (0x00046299) list_single_image_pane_t1

0xaa67,	// (0x00041c8e) cell_image_list_pane_ParamLimits

0xaa67,	// (0x00041c8e) cell_image_list_pane

0xaa7b,	// (0x00041ca2) cell_image_list_pane_g1

0xaa84,	// (0x00041cab) cell_image_list_pane_g2

0x0001,

0xfc12,	// (0x00046e39) cell_image_list_pane_g

0xf088,	// (0x000462af) aid_size_cell_tb_trans_pane

0xba83,	// (0x00042caa) bg_tb_trans_pane

0xf09a,	// (0x000462c1) grid_tb_trans_pane

0xc89e,	// (0x00043ac5) bg_tb_trans_pane_g1

0xc8a6,	// (0x00043acd) bg_tb_trans_pane_g2

0xc8ae,	// (0x00043ad5) bg_tb_trans_pane_g3

0xc8b6,	// (0x00043add) bg_tb_trans_pane_g4

0xc8be,	// (0x00043ae5) bg_tb_trans_pane_g5

0xc8d6,	// (0x00043afd) bg_tb_trans_pane_g6

0xc8de,	// (0x00043b05) bg_tb_trans_pane_g7

0xc8c6,	// (0x00043aed) bg_tb_trans_pane_g8

0xc8ce,	// (0x00043af5) bg_tb_trans_pane_g9

0x0008,

0xfc17,	// (0x00046e3e) bg_tb_trans_pane_g

0xf0ae,	// (0x000462d5) cell_toolbar_trans_pane_ParamLimits

0xf0ae,	// (0x000462d5) cell_toolbar_trans_pane

0xe747,	// (0x0004596e) cell_toolbar_trans_pane_g1

0xa78d,	// (0x000419b4) list_form2_midp_pane_t1

0xa79b,	// (0x000419c2) list_form2_midp_pane_t2

0x0001,

0xfaef,	// (0x00046d16) list_form2_midp_pane_t

0xe4a5,	// (0x000456cc) scroll_pane_cp51_ParamLimits

0xe61b,	// (0x00045842) form2_midp_wait_pane_g1

0xe624,	// (0x0004584b) form2_midp_wait_pane_g2

0xe62d,	// (0x00045854) form2_midp_wait_pane_g3

0x0002,

0xfb04,	// (0x00046d2b) form2_midp_wait_pane_g

0xb482,	// (0x000426a9) list_highlight_pane_cp21_ParamLimits

0xe64d,	// (0x00045874) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe65c,	// (0x00045883) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xda80,	// (0x00044ca7) list_single_2graphic_im_pane_ParamLimits

0xda80,	// (0x00044ca7) list_single_2graphic_im_pane

0xaa8d,	// (0x00041cb4) list_single_2graphic_im_pane_g1_ParamLimits

0xaa8d,	// (0x00041cb4) list_single_2graphic_im_pane_g1

0xaa9e,	// (0x00041cc5) list_single_2graphic_im_pane_g2_ParamLimits

0xaa9e,	// (0x00041cc5) list_single_2graphic_im_pane_g2

0xaaaa,	// (0x00041cd1) list_single_2graphic_im_pane_g3_ParamLimits

0xaaaa,	// (0x00041cd1) list_single_2graphic_im_pane_g3

0x0003,

0xfc2a,	// (0x00046e51) list_single_2graphic_im_pane_g_ParamLimits

0xfc2a,	// (0x00046e51) list_single_2graphic_im_pane_g

0xaabe,	// (0x00041ce5) list_single_2graphic_im_pane_t1_ParamLimits

0xaabe,	// (0x00041ce5) list_single_2graphic_im_pane_t1

0xeceb,	// (0x00045f12) list_single_graphic_2heading_pane_fp_ParamLimits

0xeceb,	// (0x00045f12) list_single_graphic_2heading_pane_fp

0x0f08,	// (0x0003812f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0f08,	// (0x0003812f) list_single_graphic_2heading_pane_fp_g1

0xed02,	// (0x00045f29) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xed02,	// (0x00045f29) list_single_graphic_2heading_pane_fp_g2

0x19dc,	// (0x00038c03) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x19dc,	// (0x00038c03) list_single_graphic_2heading_pane_fp_g3

0x0edd,	// (0x00038104) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0edd,	// (0x00038104) list_single_graphic_2heading_pane_fp_g4

0xed0e,	// (0x00045f35) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xed0e,	// (0x00045f35) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x00046dae) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x00046dae) list_single_graphic_2heading_pane_fp_g

0x10d5,	// (0x000382fc) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x10d5,	// (0x000382fc) list_single_graphic_2heading_pane_fp_t1

0x0f40,	// (0x00038167) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0f40,	// (0x00038167) list_single_graphic_2heading_pane_fp_t2

0x10eb,	// (0x00038312) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x10eb,	// (0x00038312) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc33,	// (0x00046e5a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc33,	// (0x00046e5a) list_single_graphic_2heading_pane_fp_t

0xe7c9,	// (0x000459f0) fep_hwr_write_pane_g5_ParamLimits

0xe7c9,	// (0x000459f0) fep_hwr_write_pane_g5

0xe7d5,	// (0x000459fc) fep_hwr_write_pane_g6_ParamLimits

0xe7d5,	// (0x000459fc) fep_hwr_write_pane_g6

0xef3f,	// (0x00046166) eswt_shell_pane_ParamLimits

0xc98e,	// (0x00043bb5) bg_popup_window_pane_cp18_ParamLimits

0xd9b1,	// (0x00044bd8) heading_pane_cp70

0xf03b,	// (0x00046262) popup_eswt_tasktip_window_t1_ParamLimits

0x9d88,	// (0x00040faf) aid_touch_tab_arrow_left

0x9d9e,	// (0x00040fc5) aid_touch_tab_arrow_right

0x9649,	// (0x00040870) title_pane_g3_ParamLimits

0x9649,	// (0x00040870) title_pane_g3

0xba36,	// (0x00042c5d) set_value_pane_g1

0x88b9,	// (0x0003fae0) popup_toolbar_trans_pane_ParamLimits

0xf088,	// (0x000462af) aid_size_cell_tb_trans_pane_ParamLimits

0xba83,	// (0x00042caa) bg_tb_trans_pane_ParamLimits

0xf09a,	// (0x000462c1) grid_tb_trans_pane_ParamLimits

0xb5b5,	// (0x000427dc) cont_note_pane_ParamLimits

0xb5b5,	// (0x000427dc) cont_note_pane

0xb7f2,	// (0x00042a19) cont_snote2_single_text_pane_ParamLimits

0xb7f2,	// (0x00042a19) cont_snote2_single_text_pane

0xb7f2,	// (0x00042a19) cont_snote2_single_graphic_pane_ParamLimits

0xb7f2,	// (0x00042a19) cont_snote2_single_graphic_pane

0xce8d,	// (0x000440b4) cont_note_wait_pane_ParamLimits

0xce8d,	// (0x000440b4) cont_note_wait_pane

0xce8d,	// (0x000440b4) cont_note_image_pane_ParamLimits

0xce8d,	// (0x000440b4) cont_note_image_pane

0xf0e0,	// (0x00046307) popup_note2_window_g1_ParamLimits

0xf0e0,	// (0x00046307) popup_note2_window_g1

0xf111,	// (0x00046338) popup_note2_window_t1_ParamLimits

0xf111,	// (0x00046338) popup_note2_window_t1

0xf156,	// (0x0004637d) popup_note2_window_t2_ParamLimits

0xf156,	// (0x0004637d) popup_note2_window_t2

0xf19b,	// (0x000463c2) popup_note2_window_t3_ParamLimits

0xf19b,	// (0x000463c2) popup_note2_window_t3

0xf1e0,	// (0x00046407) popup_note2_window_t4_ParamLimits

0xf1e0,	// (0x00046407) popup_note2_window_t4

0xb62d,	// (0x00042854) popup_note2_window_t5_ParamLimits

0xb62d,	// (0x00042854) popup_note2_window_t5

0x0004,

0xfc3a,	// (0x00046e61) popup_note2_window_t_ParamLimits

0xfc3a,	// (0x00046e61) popup_note2_window_t

0xf20f,	// (0x00046436) popup_note2_image_window_g1_ParamLimits

0xf20f,	// (0x00046436) popup_note2_image_window_g1

0xf21b,	// (0x00046442) popup_note2_image_window_g2_ParamLimits

0xf21b,	// (0x00046442) popup_note2_image_window_g2

0x0001,

0x0101,	// (0x00037328) popup_note2_image_window_g_ParamLimits

0x0101,	// (0x00037328) popup_note2_image_window_g

0xf22d,	// (0x00046454) popup_note2_image_window_t1_ParamLimits

0xf22d,	// (0x00046454) popup_note2_image_window_t1

0xf245,	// (0x0004646c) popup_note2_image_window_t2_ParamLimits

0xf245,	// (0x0004646c) popup_note2_image_window_t2

0xf25d,	// (0x00046484) popup_note2_image_window_t3_ParamLimits

0xf25d,	// (0x00046484) popup_note2_image_window_t3

0x0002,

0x0106,	// (0x0003732d) popup_note2_image_window_t_ParamLimits

0x0106,	// (0x0003732d) popup_note2_image_window_t

0xce9b,	// (0x000440c2) popup_note2_wait_window_g1_ParamLimits

0xce9b,	// (0x000440c2) popup_note2_wait_window_g1

0xcea7,	// (0x000440ce) popup_note2_wait_window_g2_ParamLimits

0xcea7,	// (0x000440ce) popup_note2_wait_window_g2

0xceb3,	// (0x000440da) popup_note2_wait_window_g3_ParamLimits

0xceb3,	// (0x000440da) popup_note2_wait_window_g3

0x0002,

0xf84e,	// (0x00046a75) popup_note2_wait_window_g_ParamLimits

0xf84e,	// (0x00046a75) popup_note2_wait_window_g

0xf279,	// (0x000464a0) popup_note2_wait_window_t1_ParamLimits

0xf279,	// (0x000464a0) popup_note2_wait_window_t1

0xf297,	// (0x000464be) popup_note2_wait_window_t2_ParamLimits

0xf297,	// (0x000464be) popup_note2_wait_window_t2

0xf2b5,	// (0x000464dc) popup_note2_wait_window_t3_ParamLimits

0xf2b5,	// (0x000464dc) popup_note2_wait_window_t3

0xf2c7,	// (0x000464ee) popup_note2_wait_window_t4_ParamLimits

0xf2c7,	// (0x000464ee) popup_note2_wait_window_t4

0x0003,

0x010d,	// (0x00037334) popup_note2_wait_window_t_ParamLimits

0x010d,	// (0x00037334) popup_note2_wait_window_t

0xf2d9,	// (0x00046500) wait_bar2_pane_ParamLimits

0xf2d9,	// (0x00046500) wait_bar2_pane

0xf2f1,	// (0x00046518) popup_snote2_single_text_window_g1_ParamLimits

0xf2f1,	// (0x00046518) popup_snote2_single_text_window_g1

0xf319,	// (0x00046540) popup_snote2_single_text_window_t1_ParamLimits

0xf319,	// (0x00046540) popup_snote2_single_text_window_t1

0xf365,	// (0x0004658c) popup_snote2_single_text_window_t2_ParamLimits

0xf365,	// (0x0004658c) popup_snote2_single_text_window_t2

0xf3b1,	// (0x000465d8) popup_snote2_single_text_window_t3_ParamLimits

0xf3b1,	// (0x000465d8) popup_snote2_single_text_window_t3

0xf3f2,	// (0x00046619) popup_snote2_single_text_window_t4_ParamLimits

0xf3f2,	// (0x00046619) popup_snote2_single_text_window_t4

0xf428,	// (0x0004664f) popup_snote2_single_text_window_t5_ParamLimits

0xf428,	// (0x0004664f) popup_snote2_single_text_window_t5

0x0004,

0x0116,	// (0x0003733d) popup_snote2_single_text_window_t_ParamLimits

0x0116,	// (0x0003733d) popup_snote2_single_text_window_t

0xf453,	// (0x0004667a) popup_snote2_single_graphic_window_g1_ParamLimits

0xf453,	// (0x0004667a) popup_snote2_single_graphic_window_g1

0xf47b,	// (0x000466a2) popup_snote2_single_graphic_window_g2_ParamLimits

0xf47b,	// (0x000466a2) popup_snote2_single_graphic_window_g2

0x0001,

0x0121,	// (0x00037348) popup_snote2_single_graphic_window_g_ParamLimits

0x0121,	// (0x00037348) popup_snote2_single_graphic_window_g

0xf4a3,	// (0x000466ca) popup_snote2_single_graphic_window_t1_ParamLimits

0xf4a3,	// (0x000466ca) popup_snote2_single_graphic_window_t1

0xf4ef,	// (0x00046716) popup_snote2_single_graphic_window_t2_ParamLimits

0xf4ef,	// (0x00046716) popup_snote2_single_graphic_window_t2

0xf3b1,	// (0x000465d8) popup_snote2_single_graphic_window_t3_ParamLimits

0xf3b1,	// (0x000465d8) popup_snote2_single_graphic_window_t3

0xf3f2,	// (0x00046619) popup_snote2_single_graphic_window_t4_ParamLimits

0xf3f2,	// (0x00046619) popup_snote2_single_graphic_window_t4

0xf428,	// (0x0004664f) popup_snote2_single_graphic_window_t5_ParamLimits

0xf428,	// (0x0004664f) popup_snote2_single_graphic_window_t5

0x0004,

0x0126,	// (0x0003734d) popup_snote2_single_graphic_window_t_ParamLimits

0x0126,	// (0x0003734d) popup_snote2_single_graphic_window_t

0xe437,	// (0x0004565e) clock_nsta_pane_cp2_t1

0xe437,	// (0x0004565e) clock_nsta_pane_cp2_t2

0x0001,

0xfac5,	// (0x00046cec) clock_nsta_pane_cp2_t

0x08e9,	// (0x00037b10) form_field_data_wide_pane_g1_ParamLimits

0xba51,	// (0x00042c78) form_field_data_wide_pane_g2_ParamLimits

0xba51,	// (0x00042c78) form_field_data_wide_pane_g2

0xba9d,	// (0x00042cc4) form_field_data_wide_pane_g3_ParamLimits

0xba9d,	// (0x00042cc4) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x000468ad) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x000468ad) form_field_data_wide_pane_g

0xa6c1,	// (0x000418e8) grid_touch_3_pane_ParamLimits

0xa6c1,	// (0x000418e8) grid_touch_3_pane

0xaaef,	// (0x00041d16) cell_touch_3_pane_ParamLimits

0xaaef,	// (0x00041d16) cell_touch_3_pane

0xe747,	// (0x0004596e) cell_touch_3_pane_g1

0xe747,	// (0x0004596e) cell_touch_3_pane_g2

0x0001,

0xfb4a,	// (0x00046d71) cell_touch_3_pane_g

0xb65f,	// (0x00042886) cont_query_data_pane

0xb667,	// (0x0004288e) cont_query_data_pane_cp1

0xf53b,	// (0x00046762) button_value_adjust_pane_cp7

0xf543,	// (0x0004676a) query_popup_pane_cp3

0xc03b,	// (0x00043262) bg_popup_sub_pane_cp22_ParamLimits

0x1dfb,	// (0x00039022) navi_navi_volume_pane_cp2

0x1e16,	// (0x0003903d) popup_side_volume_key_window_g2

0x1e25,	// (0x0003904c) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x00046943) popup_side_volume_key_window_g

0x1e42,	// (0x00039069) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0004694a) popup_side_volume_key_window_t

0xc26c,	// (0x00043493) popup_side_volume_key_window_ParamLimits

0x80d5,	// (0x0003f2fc) list_double_graphic_pane_g4_ParamLimits

0x80d5,	// (0x0003f2fc) list_double_graphic_pane_g4

0x7d57,	// (0x0003ef7e) list_single_2heading_msg_pane_ParamLimits

0x7d57,	// (0x0003ef7e) list_single_2heading_msg_pane

0x7d9f,	// (0x0003efc6) list_single_2heading_msg_pane_g1_ParamLimits

0x7d9f,	// (0x0003efc6) list_single_2heading_msg_pane_g1

0x7dab,	// (0x0003efd2) list_single_2heading_msg_pane_g2_ParamLimits

0x7dab,	// (0x0003efd2) list_single_2heading_msg_pane_g2

0x7dbe,	// (0x0003efe5) list_single_2heading_msg_pane_g3_ParamLimits

0x7dbe,	// (0x0003efe5) list_single_2heading_msg_pane_g3

0x7dca,	// (0x0003eff1) list_single_2heading_msg_pane_g4_ParamLimits

0x7dca,	// (0x0003eff1) list_single_2heading_msg_pane_g4

0x0003,

0xfc45,	// (0x00046e6c) list_single_2heading_msg_pane_g_ParamLimits

0xfc45,	// (0x00046e6c) list_single_2heading_msg_pane_g

0x7de2,	// (0x0003f009) list_single_2heading_msg_pane_t1_ParamLimits

0x7de2,	// (0x0003f009) list_single_2heading_msg_pane_t1

0x7e0a,	// (0x0003f031) list_single_2heading_msg_pane_t2_ParamLimits

0x7e0a,	// (0x0003f031) list_single_2heading_msg_pane_t2

0x7e75,	// (0x0003f09c) list_single_2heading_msg_pane_t3_ParamLimits

0x7e75,	// (0x0003f09c) list_single_2heading_msg_pane_t3

0x11a0,	// (0x000383c7) list_single_2heading_msg_pane_t4_ParamLimits

0x11a0,	// (0x000383c7) list_single_2heading_msg_pane_t4

0x0003,

0xfc4e,	// (0x00046e75) list_single_2heading_msg_pane_t_ParamLimits

0xfc4e,	// (0x00046e75) list_single_2heading_msg_pane_t

0xb430,	// (0x00042657) title_pane_g4_ParamLimits

0xb430,	// (0x00042657) title_pane_g4

0x1b0f,	// (0x00038d36) title_pane_stacon_g3_ParamLimits

0x1b0f,	// (0x00038d36) title_pane_stacon_g3

0xf0d4,	// (0x000462fb) list_single_2graphic_im_pane_g4_ParamLimits

0xf0d4,	// (0x000462fb) list_single_2graphic_im_pane_g4

0xd7e3,	// (0x00044a0a) popup_side_volume_key_window_cp

0xdcb0,	// (0x00044ed7) main_idle_act2_pane_t1

0x2c69,	// (0x00039e90) toolbar_button_pane_g10

0x99b8,	// (0x00040bdf) popup_toolbar_window_cp1

0xe428,	// (0x0004564f) clock_nsta_pane_cp_t1

0xe428,	// (0x0004564f) clock_nsta_pane_cp_t2

0x0001,

0xfac0,	// (0x00046ce7) clock_nsta_pane_cp_t

0x1dfb,	// (0x00039022) navi_navi_volume_pane_cp2_ParamLimits

0x1e0a,	// (0x00039031) popup_side_volume_key_window_g1_ParamLimits

0x1e16,	// (0x0003903d) popup_side_volume_key_window_g2_ParamLimits

0x1e25,	// (0x0003904c) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x00046943) popup_side_volume_key_window_g_ParamLimits

0x3a0a,	// (0x0003ac31) fep_hwr_aid_pane

0xad69,	// (0x00041f90) bg_fep_hwr_top_pane_g4_ParamLimits

0xe799,	// (0x000459c0) fep_hwr_top_pane_g1_ParamLimits

0xe7ab,	// (0x000459d2) fep_hwr_top_pane_g2_ParamLimits

0x3ac3,	// (0x0003acea) fep_hwr_top_pane_g3_ParamLimits

0xfb15,	// (0x00046d3c) fep_hwr_top_pane_g_ParamLimits

0x3ad8,	// (0x0003acff) fep_hwr_top_text_pane_ParamLimits

0xd5b8,	// (0x000447df) aid_touch_tab_arrow_arrow_2

0xd5c1,	// (0x000447e8) aid_touch_tab_arrow_left_2

0x3a1e,	// (0x0003ac45) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x3a55,	// (0x0003ac7c) fep_hwr_prediction_pane

0xe900,	// (0x00045b27) fep_vkb_prediction_pane

0xa8c8,	// (0x00041aef) fep_vkb_side_pane_g3_ParamLimits

0xa8c8,	// (0x00041aef) fep_vkb_side_pane_g3

0xe9b0,	// (0x00045bd7) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xed62,	// (0x00045f89) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xed6f,	// (0x00045f96) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x00046de6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x4087,	// (0x0003b2ae) fep_hwr_prediction_pane_g1

0x4091,	// (0x0003b2b8) fep_hwr_prediction_pane_g2

0x4099,	// (0x0003b2c0) fep_hwr_prediction_pane_g3

0x40a1,	// (0x0003b2c8) fep_hwr_prediction_pane_g4

0x0003,

0xfc57,	// (0x00046e7e) fep_hwr_prediction_pane_g

0x4087,	// (0x0003b2ae) fep_vkb_prediction_pane_g1

0x40a9,	// (0x0003b2d0) fep_vkb_prediction_pane_g2

0x40b1,	// (0x0003b2d8) fep_vkb_prediction_pane_g3

0x40b9,	// (0x0003b2e0) fep_vkb_prediction_pane_g4

0x0003,

0xfc60,	// (0x00046e87) fep_vkb_prediction_pane_g

0xe010,	// (0x00045237) slider_set_pane_g3

0xe024,	// (0x0004524b) slider_set_pane_g4

0xe03c,	// (0x00045263) slider_set_pane_g5

0xe010,	// (0x00045237) slider_set_pane_g6

0x325e,	// (0x0003a485) slider_set_pane_g7

0xda36,	// (0x00044c5d) slider_form_pane_g3

0xda3f,	// (0x00044c66) slider_form_pane_g4

0xda47,	// (0x00044c6e) slider_form_pane_g5

0xda36,	// (0x00044c5d) slider_form_pane_g6

0xa559,	// (0x00041780) slider_form_pane_g7

0xdf26,	// (0x0004514d) slider_set_pane_vc_g3

0xdf2f,	// (0x00045156) slider_set_pane_vc_g4

0xdf38,	// (0x0004515f) slider_set_pane_vc_g5

0xdf26,	// (0x0004514d) slider_set_pane_vc_g6

0xdf41,	// (0x00045168) slider_set_pane_vc_g7

0xe157,	// (0x0004537e) slider_form_pane_vc_g1

0xe160,	// (0x00045387) slider_form_pane_vc_g2

0xe169,	// (0x00045390) slider_form_pane_vc_g3

0xe157,	// (0x0004537e) slider_form_pane_vc_g4

0xe172,	// (0x00045399) slider_form_pane_vc_g5

0x0004,

0xfa92,	// (0x00046cb9) slider_form_pane_vc_g

0xb412,	// (0x00042639) main_idle_act3_pane

0x40c1,	// (0x0003b2e8) ai3_links_pane

0xab39,	// (0x00041d60) popup_ai3_data_window_ParamLimits

0xab39,	// (0x00041d60) popup_ai3_data_window

0xb412,	// (0x00042639) grid_ai3_links_pane

0xab51,	// (0x00041d78) cell_ai3_links_pane_ParamLimits

0xab51,	// (0x00041d78) cell_ai3_links_pane

0x40ca,	// (0x0003b2f1) bg_popup_sub_pane_cp11

0x40d7,	// (0x0003b2fe) cell_ai3_links_pane_g1

0xb412,	// (0x00042639) bg_popup_sub_pane_cp12

0x40fc,	// (0x0003b323) heading_ai3_data_pane

0x4104,	// (0x0003b32b) list_ai3_gene_pane

0x4110,	// (0x0003b337) popup_ai3_data_window_g1

0x4118,	// (0x0003b33f) heading_ai3_data_pane_g1

0x4120,	// (0x0003b347) heading_ai3_data_pane_t1

0x412e,	// (0x0003b355) list_double_ai3_gene_pane_ParamLimits

0x412e,	// (0x0003b355) list_double_ai3_gene_pane

0x413b,	// (0x0003b362) list_single_ai3_gene_pane_ParamLimits

0x413b,	// (0x0003b362) list_single_ai3_gene_pane

0xe70c,	// (0x00045933) list_highlight_pane_cp7_ParamLimits

0xe70c,	// (0x00045933) list_highlight_pane_cp7

0x4148,	// (0x0003b36f) list_single_a13_gene_pane_t1_ParamLimits

0x4148,	// (0x0003b36f) list_single_a13_gene_pane_t1

0x415f,	// (0x0003b386) list_single_ai3_gene_pane_g1

0x4168,	// (0x0003b38f) list_single_ai3_gene_pane_g2

0x0001,

0xfc69,	// (0x00046e90) list_single_ai3_gene_pane_g

0x4170,	// (0x0003b397) list_double_ai3_gene_pane_g1_ParamLimits

0x4170,	// (0x0003b397) list_double_ai3_gene_pane_g1

0x417c,	// (0x0003b3a3) list_double_ai3_gene_pane_t1_ParamLimits

0x417c,	// (0x0003b3a3) list_double_ai3_gene_pane_t1

0x4198,	// (0x0003b3bf) list_double_ai3_gene_pane_t2_ParamLimits

0x4198,	// (0x0003b3bf) list_double_ai3_gene_pane_t2

0x41ad,	// (0x0003b3d4) list_double_ai3_gene_pane_t3_ParamLimits

0x41ad,	// (0x0003b3d4) list_double_ai3_gene_pane_t3

0x0002,

0xfc6e,	// (0x00046e95) list_double_ai3_gene_pane_t_ParamLimits

0xfc6e,	// (0x00046e95) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1101,	// (0x00038328) aid_size_min_col_2

0xab23,	// (0x00041d4a) aid_size_min_msg_ParamLimits

0xab23,	// (0x00041d4a) aid_size_min_msg

0xa8dc,	// (0x00041b03) fep_vkb_top_text_pane_g2_ParamLimits

0xa8dc,	// (0x00041b03) fep_vkb_top_text_pane_g2

0x0001,

0xfb45,	// (0x00046d6c) fep_vkb_top_text_pane_g_ParamLimits

0xfb45,	// (0x00046d6c) fep_vkb_top_text_pane_g

0xb412,	// (0x00042639) main_hc_apps_shell_pane

0x41ca,	// (0x0003b3f1) grid_hc_apps_pane_ParamLimits

0x41ca,	// (0x0003b3f1) grid_hc_apps_pane

0x41d9,	// (0x0003b400) list_hc_apps_pane

0x41e1,	// (0x0003b408) scroll_pane_cp37_ParamLimits

0x41e1,	// (0x0003b408) scroll_pane_cp37

0xab6b,	// (0x00041d92) cell_hc_apps_pane_ParamLimits

0xab6b,	// (0x00041d92) cell_hc_apps_pane

0xac2b,	// (0x00041e52) cell_hc_apps_pane_g1_ParamLimits

0xac2b,	// (0x00041e52) cell_hc_apps_pane_g1

0x41ed,	// (0x0003b414) cell_hc_apps_pane_g2_ParamLimits

0x41ed,	// (0x0003b414) cell_hc_apps_pane_g2

0x4209,	// (0x0003b430) cell_hc_apps_pane_g3_ParamLimits

0x4209,	// (0x0003b430) cell_hc_apps_pane_g3

0x0002,

0xfc75,	// (0x00046e9c) cell_hc_apps_pane_g_ParamLimits

0xfc75,	// (0x00046e9c) cell_hc_apps_pane_g

0xac58,	// (0x00041e7f) cell_hc_apps_pane_t1_ParamLimits

0xac58,	// (0x00041e7f) cell_hc_apps_pane_t1

0xb5b5,	// (0x000427dc) grid_highlight_pane_cp10_ParamLimits

0xb5b5,	// (0x000427dc) grid_highlight_pane_cp10

0xac96,	// (0x00041ebd) list_single_hc_apps_pane_ParamLimits

0xac96,	// (0x00041ebd) list_single_hc_apps_pane

0xacc9,	// (0x00041ef0) list_single_hc_apps_pane_g1

0x8b46,	// (0x0003fd6d) list_single_hc_apps_pane_g2

0x0001,

0xfc7c,	// (0x00046ea3) list_single_hc_apps_pane_g

0x8b5f,	// (0x0003fd86) list_single_hc_apps_pane_g2_copy1

0x7ee3,	// (0x0003f10a) list_single_hc_apps_pane_t1

0xb482,	// (0x000426a9) bg_set_opt_pane_cp_ParamLimits

0x16ca,	// (0x000388f1) setting_slider_pane_t1_ParamLimits

0x16e3,	// (0x0003890a) setting_slider_pane_t2_ParamLimits

0x16fc,	// (0x00038923) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0004678b) setting_slider_pane_t_ParamLimits

0x1713,	// (0x0003893a) slider_set_pane_ParamLimits

0x225d,	// (0x00039484) control_pane_g5_ParamLimits

0x225d,	// (0x00039484) control_pane_g5

0xd9f8,	// (0x00044c1f) slider_set_pane_g1_ParamLimits

0x3252,	// (0x0003a479) slider_set_pane_g2_ParamLimits

0xe010,	// (0x00045237) slider_set_pane_g3_ParamLimits

0xe024,	// (0x0004524b) slider_set_pane_g4_ParamLimits

0xe03c,	// (0x00045263) slider_set_pane_g5_ParamLimits

0xe010,	// (0x00045237) slider_set_pane_g6_ParamLimits

0x325e,	// (0x0003a485) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x00046b91) slider_set_pane_g_ParamLimits

0xc310,	// (0x00043537) navi_icon_text_pane_ParamLimits

0x9d51,	// (0x00040f78) aid_fill_nsta_2_ParamLimits

0x9d88,	// (0x00040faf) aid_touch_tab_arrow_left_ParamLimits

0x9d9e,	// (0x00040fc5) aid_touch_tab_arrow_right_ParamLimits

0x9e39,	// (0x00041060) clock_nsta_pane_ParamLimits

0xd59a,	// (0x000447c1) navi_icon_pane_g1_ParamLimits

0xd5a6,	// (0x000447cd) navi_text_pane_t1_ParamLimits

0xe47f,	// (0x000456a6) navi_icon_text_pane_g1_ParamLimits

0xe48b,	// (0x000456b2) navi_icon_text_pane_t1_ParamLimits

0xacc9,	// (0x00041ef0) list_single_hc_apps_pane_g1_ParamLimits

0x8b46,	// (0x0003fd6d) list_single_hc_apps_pane_g2_ParamLimits

0xfc7c,	// (0x00046ea3) list_single_hc_apps_pane_g_ParamLimits

0x8b5f,	// (0x0003fd86) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7ee3,	// (0x0003f10a) list_single_hc_apps_pane_t1_ParamLimits

0x8047,	// (0x0003f26e) popup_toolbar2_fixed_window_ParamLimits

0x8047,	// (0x0003f26e) popup_toolbar2_fixed_window

0x88af,	// (0x0003fad6) popup_toolbar2_float_window

0xb412,	// (0x00042639) bg_popup_sub_pane_cp27

0x4260,	// (0x0003b487) grid_toolbar2_float_pane

0xb412,	// (0x00042639) bg_popup_sub_pane_cp26

0x4260,	// (0x0003b487) grid_toolbar2_fixed_pane

0xace2,	// (0x00041f09) cell_toolbar2_fixed_pane_ParamLimits

0xace2,	// (0x00041f09) cell_toolbar2_fixed_pane

0xacfc,	// (0x00041f23) cell_toolbar2_fixed_pane_g1

0x4268,	// (0x0003b48f) toolbar2_fixed_button_pane

0xc89e,	// (0x00043ac5) toolbar2_fixed_button_pane_g1

0xc8a6,	// (0x00043acd) toolbar2_fixed_button_pane_g2

0xc8ae,	// (0x00043ad5) toolbar2_fixed_button_pane_g3

0xc8b6,	// (0x00043add) toolbar2_fixed_button_pane_g4

0xc8be,	// (0x00043ae5) toolbar2_fixed_button_pane_g5

0xc8c6,	// (0x00043aed) toolbar2_fixed_button_pane_g6

0xc8ce,	// (0x00043af5) toolbar2_fixed_button_pane_g7

0xc8d6,	// (0x00043afd) toolbar2_fixed_button_pane_g8

0xc8de,	// (0x00043b05) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x00046a93) toolbar2_fixed_button_pane_g

0x4270,	// (0x0003b497) cell_toolbar2_float_pane_ParamLimits

0x4270,	// (0x0003b497) cell_toolbar2_float_pane

0x4281,	// (0x0003b4a8) cell_toolbar2_float_pane_g1

0x4268,	// (0x0003b48f) toolbar2_fixed_button_pane_cp

0xa88f,	// (0x00041ab6) fep_vkb_accented_list_pane_ParamLimits

0xa88f,	// (0x00041ab6) fep_vkb_accented_list_pane

0x3d10,	// (0x0003af37) bg_popup_fep_shadow_pane_g9

0xc46c,	// (0x00043693) bg_popup_fep_shadow_pane_cp3

0xbb96,	// (0x00042dbd) list_accented_list_pane

0x428a,	// (0x0003b4b1) list_single_accented_list_pane_ParamLimits

0x428a,	// (0x0003b4b1) list_single_accented_list_pane

0xc46c,	// (0x00043693) list_highlight_pane_cp10

0x429b,	// (0x0003b4c2) list_single_accented_list_pane_t1

0x87d9,	// (0x0003fa00) popup_slider_window_ParamLimits

0x87d9,	// (0x0003fa00) popup_slider_window

0xf54b,	// (0x00046772) aid_indentation_list_msg

0xae1d,	// (0x00042044) bg_popup_window_pane_cp19

0x4307,	// (0x0003b52e) popup_slider_window_g1

0x4323,	// (0x0003b54a) popup_slider_window_g2

0x433f,	// (0x0003b566) popup_slider_window_g3

0x0005,

0xfc81,	// (0x00046ea8) popup_slider_window_g

0x435b,	// (0x0003b582) popup_slider_window_t1

0x43a1,	// (0x0003b5c8) small_volume_slider_vertical_pane

0xe747,	// (0x0004596e) small_volume_slider_vertical_pane_g1

0xe747,	// (0x0004596e) small_volume_slider_vertical_pane_g2

0x43bd,	// (0x0003b5e4) small_volume_slider_vertical_pane_g3

0x0002,

0xfc93,	// (0x00046eba) small_volume_slider_vertical_pane_g

0x7fb5,	// (0x0003f1dc) area_side_right_pane_ParamLimits

0x7fb5,	// (0x0003f1dc) area_side_right_pane

0x8b7b,	// (0x0003fda2) aid_size_side_button_ParamLimits

0x8b7b,	// (0x0003fda2) aid_size_side_button

0x8b94,	// (0x0003fdbb) grid_sctrl_middle_pane_ParamLimits

0x8b94,	// (0x0003fdbb) grid_sctrl_middle_pane

0x43fa,	// (0x0003b621) sctrl_sk_bottom_pane

0x440b,	// (0x0003b632) sctrl_sk_top_pane

0x441d,	// (0x0003b644) aid_touch_sctrl_top

0xb5b5,	// (0x000427dc) bg_sctrl_sk_pane_ParamLimits

0xb5b5,	// (0x000427dc) bg_sctrl_sk_pane

0x442a,	// (0x0003b651) sctrl_sk_top_pane_g1

0x4437,	// (0x0003b65e) sctrl_sk_top_pane_t1

0x441d,	// (0x0003b644) aid_touch_sctrl_bottom

0xb5b5,	// (0x000427dc) bg_sctrl_sk_pane_cp_ParamLimits

0xb5b5,	// (0x000427dc) bg_sctrl_sk_pane_cp

0x4452,	// (0x0003b679) sctrl_sk_bottom_pane_g1

0x4437,	// (0x0003b65e) sctrl_sk_bottom_pane_t1

0x8bae,	// (0x0003fdd5) cell_sctrl_middle_pane_ParamLimits

0x8bae,	// (0x0003fdd5) cell_sctrl_middle_pane

0x8bbf,	// (0x0003fde6) aid_touch_sctrl_middle_ParamLimits

0x8bbf,	// (0x0003fde6) aid_touch_sctrl_middle

0x8bcc,	// (0x0003fdf3) bg_sctrl_middle_pane_ParamLimits

0x8bcc,	// (0x0003fdf3) bg_sctrl_middle_pane

0x44ac,	// (0x0003b6d3) cell_sctrl_middle_pane_g1_ParamLimits

0x44ac,	// (0x0003b6d3) cell_sctrl_middle_pane_g1

0x8bda,	// (0x0003fe01) cell_sctrl_middle_pane_g2_ParamLimits

0x8bda,	// (0x0003fe01) cell_sctrl_middle_pane_g2

0x0001,

0xfc9f,	// (0x00046ec6) cell_sctrl_middle_pane_g_ParamLimits

0xfc9f,	// (0x00046ec6) cell_sctrl_middle_pane_g

0xc89e,	// (0x00043ac5) bg_sctrl_middle_pane_g1

0xc8a6,	// (0x00043acd) bg_sctrl_middle_pane_g2

0xc8ae,	// (0x00043ad5) bg_sctrl_middle_pane_g3

0xc8b6,	// (0x00043add) bg_sctrl_middle_pane_g4

0xc8be,	// (0x00043ae5) bg_sctrl_middle_pane_g5

0xc8c6,	// (0x00043aed) bg_sctrl_middle_pane_g6

0xc8ce,	// (0x00043af5) bg_sctrl_middle_pane_g7

0xc8d6,	// (0x00043afd) bg_sctrl_middle_pane_g8

0x0007,

0xfca4,	// (0x00046ecb) bg_sctrl_middle_pane_g

0xc8de,	// (0x00043b05) bg_sctrl_middle_pane_g8_copy1

0xc89e,	// (0x00043ac5) bg_sctrl_sk_pane_g1

0xc8a6,	// (0x00043acd) bg_sctrl_sk_pane_g2

0xc8ae,	// (0x00043ad5) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x00046a93) bg_sctrl_sk_pane_g

0xb9b0,	// (0x00042bd7) aid_size_touch_scroll_bar

0xc8b6,	// (0x00043add) bg_sctrl_sk_pane_g4

0xc8be,	// (0x00043ae5) bg_sctrl_sk_pane_g5

0xc8c6,	// (0x00043aed) bg_sctrl_sk_pane_g6

0xc8ce,	// (0x00043af5) bg_sctrl_sk_pane_g7

0xc8d6,	// (0x00043afd) bg_sctrl_sk_pane_g8

0xc8de,	// (0x00043b05) bg_sctrl_sk_pane_g9

0x242a,	// (0x00039651) popup_fep_china_hwr2_fs_candidate_window

0x8313,	// (0x0003f53a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8313,	// (0x0003f53a) popup_fep_china_hwr2_fs_control_window

0xe9b0,	// (0x00045bd7) sctrl_sk_top_pane_g2

0x0001,

0xfc9a,	// (0x00046ec1) sctrl_sk_top_pane_g

0xaed5,	// (0x000420fc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xaed5,	// (0x000420fc) aid_fep_china_hwr2_fs_cell

0xaee9,	// (0x00042110) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xaee9,	// (0x00042110) bg_popup_fep_shadow_pane_cp4

0xaf00,	// (0x00042127) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xaf00,	// (0x00042127) bg_popup_fep_shadow_pane_cp5

0xaf12,	// (0x00042139) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xaf12,	// (0x00042139) popup_fep_china_hwr2_fs_control_bar_grid

0xaf26,	// (0x0004214d) popup_fep_china_hwr2_fs_control_funtion_grid

0x4498,	// (0x0003b6bf) aid_fep_china_hwr2_fs_candi_cell

0xb412,	// (0x00042639) bg_popup_fep_shadow_pane_cp6

0x44a2,	// (0x0003b6c9) popup_fep_china_hwr2_fs_candidate_grid

0xaf2e,	// (0x00042155) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xaf2e,	// (0x00042155) cell_fep_china_hwr2_fs_funtion_grid

0xe747,	// (0x0004596e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x44ac,	// (0x0003b6d3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x44ac,	// (0x0003b6d3) cell_fep_china_hwr2_fs_funtion_grid_g1

0x44ba,	// (0x0003b6e1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x44ba,	// (0x0003b6e1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcb5,	// (0x00046edc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcb5,	// (0x00046edc) cell_fep_china_hwr2_fs_funtion_grid_g

0xaf46,	// (0x0004216d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xaf46,	// (0x0004216d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xaf5b,	// (0x00042182) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xaf5b,	// (0x00042182) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcba,	// (0x00046ee1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcba,	// (0x00046ee1) cell_fep_china_hwr2_fs_funtion_grid_t

0x44d0,	// (0x0003b6f7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x44d8,	// (0x0003b6ff) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x44e0,	// (0x0003b707) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcbf,	// (0x00046ee6) popup_fep_china_hwr2_fs_control_bar_grid_g

0x44e8,	// (0x0003b70f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x44e8,	// (0x0003b70f) cell_fep_china_hwr2_fs_candidate_grid

0x4501,	// (0x0003b728) popup_fep_china_hwr2_fs_candidate_grid_g20

0x4509,	// (0x0003b730) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe747,	// (0x0004596e) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe747,	// (0x0004596e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4a,	// (0x00046d71) cell_fep_china_hwr2_fs_candidate_grid_g

0x4511,	// (0x0003b738) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc6ed,	// (0x00043914) clock_nsta_pane_cp_24_ParamLimits

0xc6ed,	// (0x00043914) clock_nsta_pane_cp_24

0xc755,	// (0x0004397c) indicator_nsta_pane_cp_24_ParamLimits

0xc755,	// (0x0004397c) indicator_nsta_pane_cp_24

0xd4b8,	// (0x000446df) heading_pane_g1

0x0001,

0xf8d1,	// (0x00046af8) heading_pane_g

0xdb3b,	// (0x00044d62) grid_sct_catagory_button_pane

0xd39f,	// (0x000445c6) scroll_pane_cp5_ParamLimits

0xe4b1,	// (0x000456d8) button_value_adjust_pane_cp5_ParamLimits

0xe4b1,	// (0x000456d8) button_value_adjust_pane_cp5

0xe56f,	// (0x00045796) form2_midp_time_pane_ParamLimits

0x451f,	// (0x0003b746) cell_sct_catagory_button_pane_ParamLimits

0x451f,	// (0x0003b746) cell_sct_catagory_button_pane

0xe70c,	// (0x00045933) bg_button_pane_cp01_ParamLimits

0xe70c,	// (0x00045933) bg_button_pane_cp01

0xe747,	// (0x0004596e) cell_sct_catagory_button_pane_g1

0x8852,	// (0x0003fa79) popup_tb_extension_window

0xaf77,	// (0x0004219e) aid_size_cell_ext_ParamLimits

0xaf77,	// (0x0004219e) aid_size_cell_ext

0xb7f2,	// (0x00042a19) bg_tb_trans_pane_cp1_ParamLimits

0xb7f2,	// (0x00042a19) bg_tb_trans_pane_cp1

0xaf9d,	// (0x000421c4) grid_tb_ext_pane_ParamLimits

0xaf9d,	// (0x000421c4) grid_tb_ext_pane

0xafda,	// (0x00042201) cell_tb_ext_pane_ParamLimits

0xafda,	// (0x00042201) cell_tb_ext_pane

0xb002,	// (0x00042229) cell_tb_ext_pane_g1_ParamLimits

0xb002,	// (0x00042229) cell_tb_ext_pane_g1

0x4531,	// (0x0003b758) cell_tb_ext_pane_t1

0xb5b5,	// (0x000427dc) list_highlight_pane_cp11_ParamLimits

0xb5b5,	// (0x000427dc) list_highlight_pane_cp11

0x153d,	// (0x00038764) popup_uni_indicator_window_ParamLimits

0x153d,	// (0x00038764) popup_uni_indicator_window

0xba83,	// (0x00042caa) bg_popup_sub_pane_cp14

0x454c,	// (0x0003b773) list_uniindi_pane

0x4558,	// (0x0003b77f) uniindi_top_pane

0xb5b5,	// (0x000427dc) bg_uniindi_top_pane

0x53c6,	// (0x0003c5ed) uniindi_top_pane_g1

0x53dc,	// (0x0003c603) uniindi_top_pane_g2

0x0003,

0xfcc6,	// (0x00046eed) uniindi_top_pane_g

0x5406,	// (0x0003c62d) uniindi_top_pane_t1

0x5430,	// (0x0003c657) list_single_uniindi_pane_ParamLimits

0x5430,	// (0x0003c657) list_single_uniindi_pane

0xe747,	// (0x0004596e) bg_uniindi_top_pane_g1

0x5442,	// (0x0003c669) list_single_uniindi_pane_g1

0x5455,	// (0x0003c67c) list_single_uniindi_pane_t1

0xb412,	// (0x00042639) control_bg_pane

0x547a,	// (0x0003c6a1) bg_sctrl_sk_pane_cp1

0x5483,	// (0x0003c6aa) bg_sctrl_sk_pane_cp2

0x548c,	// (0x0003c6b3) control_bg_pane_g1

0x5495,	// (0x0003c6bc) control_bg_pane_g2

0x0001,

0xfccf,	// (0x00046ef6) control_bg_pane_g

0xe36a,	// (0x00045591) cell_indicator_nsta_pane_g1_ParamLimits

0xa6f4,	// (0x0004191b) cell_indicator_nsta_pane_g2_ParamLimits

0xfaae,	// (0x00046cd5) cell_indicator_nsta_pane_g_ParamLimits

0x0eca,	// (0x000380f1) form2_midp_time_pane_t1_ParamLimits

0x39fc,	// (0x0003ac23) main_idle_act4_pane_ParamLimits

0x39fc,	// (0x0003ac23) main_idle_act4_pane

0x8852,	// (0x0003fa79) popup_tb_extension_window_ParamLimits

0xafc1,	// (0x000421e8) tb_ext_find_pane_ParamLimits

0xafc1,	// (0x000421e8) tb_ext_find_pane

0x549e,	// (0x0003c6c5) ai_gene_pane_1_cp1

0xc500,	// (0x00043727) ai_gene_pane_2_cp1

0x54a6,	// (0x0003c6cd) list_single_idle_plugin_calendar_pane

0x54af,	// (0x0003c6d6) list_single_idle_plugin_notification_pane

0x54b8,	// (0x0003c6df) list_single_idle_plugin_player_pane

0xb01f,	// (0x00042246) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb01f,	// (0x00042246) list_single_idle_plugin_shortcut_pane

0xb047,	// (0x0004226e) main_idle_act4_pane_t1

0xb05d,	// (0x00042284) main_idle_act4_pane_t2

0x0001,

0xfcd4,	// (0x00046efb) main_idle_act4_pane_t

0xb075,	// (0x0004229c) middle_sk_idle_act4_pane_ParamLimits

0xb075,	// (0x0004229c) middle_sk_idle_act4_pane

0xb091,	// (0x000422b8) popup_clock_digital_analogue_window_cp2

0xb0b8,	// (0x000422df) shortcut_wheel_idle_act4_pane_ParamLimits

0xb0b8,	// (0x000422df) shortcut_wheel_idle_act4_pane

0xe747,	// (0x0004596e) shortcut_wheel_idle_act4_pane_g1

0xe747,	// (0x0004596e) shortcut_wheel_idle_act4_pane_g2

0xe747,	// (0x0004596e) shortcut_wheel_idle_act4_pane_g3

0xe747,	// (0x0004596e) shortcut_wheel_idle_act4_pane_g4

0xe747,	// (0x0004596e) shortcut_wheel_idle_act4_pane_g5

0x554b,	// (0x0003c772) shortcut_wheel_idle_act4_pane_g6

0x5553,	// (0x0003c77a) shortcut_wheel_idle_act4_pane_g7

0x555b,	// (0x0003c782) shortcut_wheel_idle_act4_pane_g8

0x5563,	// (0x0003c78a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfcd9,	// (0x00046f00) shortcut_wheel_idle_act4_pane_g

0xad69,	// (0x00041f90) middle_sk_idle_act4_pane_g1_ParamLimits

0xad69,	// (0x00041f90) middle_sk_idle_act4_pane_g1

0xb135,	// (0x0004235c) middle_sk_idle_act4_pane_g2_ParamLimits

0xb135,	// (0x0004235c) middle_sk_idle_act4_pane_g2

0x0001,

0xfcfc,	// (0x00046f23) middle_sk_idle_act4_pane_g_ParamLimits

0xfcfc,	// (0x00046f23) middle_sk_idle_act4_pane_g

0xb14d,	// (0x00042374) middle_sk_idle_act4_pane_t1_ParamLimits

0xb14d,	// (0x00042374) middle_sk_idle_act4_pane_t1

0xb17c,	// (0x000423a3) grid_ai_shortcut_pane_ParamLimits

0xb17c,	// (0x000423a3) grid_ai_shortcut_pane

0xb199,	// (0x000423c0) list_highlight_pane_cp16_ParamLimits

0xb199,	// (0x000423c0) list_highlight_pane_cp16

0xb1a6,	// (0x000423cd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb1a6,	// (0x000423cd) list_single_idle_plugin_shortcut_pane_g1

0xb1b2,	// (0x000423d9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb1b2,	// (0x000423d9) list_single_idle_plugin_shortcut_pane_g2

0xb1ce,	// (0x000423f5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb1ce,	// (0x000423f5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd01,	// (0x00046f28) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd01,	// (0x00046f28) list_single_idle_plugin_shortcut_pane_g

0xb1e3,	// (0x0004240a) cell_ai_shortcut_pane_ParamLimits

0xb1e3,	// (0x0004240a) cell_ai_shortcut_pane

0xb1f9,	// (0x00042420) cell_ai_shortcut_pane_g1_ParamLimits

0xb1f9,	// (0x00042420) cell_ai_shortcut_pane_g1

0x549e,	// (0x0003c6c5) ai_gene_pane_1_cp2

0x5690,	// (0x0003c8b7) ai_gene_pane_2_cp2

0x5698,	// (0x0003c8bf) list_highlight_pane_cp15

0x56a1,	// (0x0003c8c8) list_single_idle_plugin_calendar_pane_g1

0x5698,	// (0x0003c8bf) list_highlight_pane_cp17

0x56a9,	// (0x0003c8d0) list_single_idle_plugin_calendar_pane_g1_copy1

0x56b1,	// (0x0003c8d8) list_single_idle_plugin_player_pane_g1

0xdd50,	// (0x00044f77) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd08,	// (0x00046f2f) list_single_idle_plugin_player_pane_g

0x56b9,	// (0x0003c8e0) list_single_idle_plugin_player_pane_t1

0x56c7,	// (0x0003c8ee) list_single_idle_plugin_player_pane_t2

0x56d5,	// (0x0003c8fc) list_single_idle_plugin_player_pane_t3

0x56e3,	// (0x0003c90a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd0d,	// (0x00046f34) list_single_idle_plugin_player_pane_t

0x56f1,	// (0x0003c918) wait_bar_pane_cp15

0x56f9,	// (0x0003c920) grid_ai_notification_pane

0xdd50,	// (0x00044f77) list_single_idle_plugin_notification_pane_g1

0xb21b,	// (0x00042442) cell_ai_notification_pane_ParamLimits

0xb21b,	// (0x00042442) cell_ai_notification_pane

0x570f,	// (0x0003c936) cell_ai_notification_pane_g1

0x5717,	// (0x0003c93e) cell_ai_notification_pane_t1

0xb228,	// (0x0004244f) tb_ext_find_button_pane

0xb230,	// (0x00042457) tb_ext_find_pane_g1

0xb238,	// (0x0004245f) tb_ext_find_pane_t1

0xbfb1,	// (0x000431d8) tb_ext_find_button_pane_g1

0x5743,	// (0x0003c96a) tb_ext_find_button_pane_g2

0x0001,

0xfd16,	// (0x00046f3d) tb_ext_find_button_pane_g

0xb047,	// (0x0004226e) main_idle_act4_pane_t1_ParamLimits

0xb05d,	// (0x00042284) main_idle_act4_pane_t2_ParamLimits

0xfcd4,	// (0x00046efb) main_idle_act4_pane_t_ParamLimits

0xb091,	// (0x000422b8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb0a8,	// (0x000422cf) sat_plugin_idle_act4_pane_ParamLimits

0xb0a8,	// (0x000422cf) sat_plugin_idle_act4_pane

0xb246,	// (0x0004246d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb246,	// (0x0004246d) sat_plugin_idle_act4_pane_t1

0xb25e,	// (0x00042485) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb25e,	// (0x00042485) sat_plugin_idle_act4_pane_t2

0xb276,	// (0x0004249d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb276,	// (0x0004249d) sat_plugin_idle_act4_pane_t3

0xb28e,	// (0x000424b5) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb28e,	// (0x000424b5) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd1b,	// (0x00046f42) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd1b,	// (0x00046f42) sat_plugin_idle_act4_pane_t

0x1486,	// (0x000386ad) popup_battery_window_ParamLimits

0x1486,	// (0x000386ad) popup_battery_window

0xb5b5,	// (0x000427dc) bg_popup_sub_pane_cp25_ParamLimits

0xb5b5,	// (0x000427dc) bg_popup_sub_pane_cp25

0x5798,	// (0x0003c9bf) popup_battery_window_g1_ParamLimits

0x5798,	// (0x0003c9bf) popup_battery_window_g1

0x57a4,	// (0x0003c9cb) popup_battery_window_t1_ParamLimits

0x57a4,	// (0x0003c9cb) popup_battery_window_t1

0x57b6,	// (0x0003c9dd) popup_battery_window_t2_ParamLimits

0x57b6,	// (0x0003c9dd) popup_battery_window_t2

0x0001,

0xfd24,	// (0x00046f4b) popup_battery_window_t_ParamLimits

0xfd24,	// (0x00046f4b) popup_battery_window_t

0x9c55,	// (0x00040e7c) midp_canvas_pane_ParamLimits

0x9cb2,	// (0x00040ed9) midp_keypad_pane_ParamLimits

0x9cb2,	// (0x00040ed9) midp_keypad_pane

0xbbe7,	// (0x00042e0e) main_midp_pane_ParamLimits

0xe446,	// (0x0004566d) signal_pane_g2_cp_ParamLimits

0xb2a6,	// (0x000424cd) aid_size_cell_midp_keypad_ParamLimits

0xb2a6,	// (0x000424cd) aid_size_cell_midp_keypad

0xb2c4,	// (0x000424eb) midp_keyp_game_grid_pane_ParamLimits

0xb2c4,	// (0x000424eb) midp_keyp_game_grid_pane

0xb2eb,	// (0x00042512) midp_keyp_rocker_pane_ParamLimits

0xb2eb,	// (0x00042512) midp_keyp_rocker_pane

0xb32c,	// (0x00042553) midp_keyp_sk_left_pane_ParamLimits

0xb32c,	// (0x00042553) midp_keyp_sk_left_pane

0xb380,	// (0x000425a7) midp_keyp_sk_right_pane_ParamLimits

0xb380,	// (0x000425a7) midp_keyp_sk_right_pane

0xb412,	// (0x00042639) bg_button_pane_cp03

0xb3d4,	// (0x000425fb) midp_keyp_sk_left_pane_g1

0xb412,	// (0x00042639) bg_button_pane_cp04

0xb3d4,	// (0x000425fb) midp_keyp_sk_right_pane_g1

0xe747,	// (0x0004596e) midp_keyp_rocker_pane_g1

0xb3dd,	// (0x00042604) keyp_game_cell_pane_ParamLimits

0xb3dd,	// (0x00042604) keyp_game_cell_pane

0xb412,	// (0x00042639) bg_button_pane_cp02

0xb401,	// (0x00042628) keyp_game_cell_pane_g1

0x7ff7,	// (0x0003f21e) popup_fep_vkb2_window_ParamLimits

0x7ff7,	// (0x0003f21e) popup_fep_vkb2_window

0x8be6,	// (0x0003fe0d) aid_size_cell_vkb2_ParamLimits

0x8be6,	// (0x0003fe0d) aid_size_cell_vkb2

0x8c1c,	// (0x0003fe43) popup_fep_vkb2_window_g1_ParamLimits

0x8c1c,	// (0x0003fe43) popup_fep_vkb2_window_g1

0x8c63,	// (0x0003fe8a) vkb2_area_bottom_pane_ParamLimits

0x8c63,	// (0x0003fe8a) vkb2_area_bottom_pane

0x8cb7,	// (0x0003fede) vkb2_area_keypad_pane_ParamLimits

0x8cb7,	// (0x0003fede) vkb2_area_keypad_pane

0x8cff,	// (0x0003ff26) vkb2_area_top_pane_ParamLimits

0x8cff,	// (0x0003ff26) vkb2_area_top_pane

0x8d85,	// (0x0003ffac) vkb2_top_entry_pane_ParamLimits

0x8d85,	// (0x0003ffac) vkb2_top_entry_pane

0x8db2,	// (0x0003ffd9) vkb2_top_grid_left_pane_ParamLimits

0x8db2,	// (0x0003ffd9) vkb2_top_grid_left_pane

0x8dd2,	// (0x0003fff9) vkb2_top_grid_right_pane_ParamLimits

0x8dd2,	// (0x0003fff9) vkb2_top_grid_right_pane

0x4775,	// (0x0003b99c) vkb2_cell_keypad_pane_ParamLimits

0x4775,	// (0x0003b99c) vkb2_cell_keypad_pane

0x8e18,	// (0x0004003f) vkb2_area_bottom_grid_pane_ParamLimits

0x8e18,	// (0x0004003f) vkb2_area_bottom_grid_pane

0x8e42,	// (0x00040069) vkb2_area_bottom_pane_g1_ParamLimits

0x8e42,	// (0x00040069) vkb2_area_bottom_pane_g1

0x8e68,	// (0x0004008f) vkb2_area_bottom_pane_g2_ParamLimits

0x8e68,	// (0x0004008f) vkb2_area_bottom_pane_g2

0x8e99,	// (0x000400c0) vkb2_area_bottom_pane_g3_ParamLimits

0x8e99,	// (0x000400c0) vkb2_area_bottom_pane_g3

0x0002,

0xfd29,	// (0x00046f50) vkb2_area_bottom_pane_g_ParamLimits

0xfd29,	// (0x00046f50) vkb2_area_bottom_pane_g

0x491f,	// (0x0003bb46) vkb2_top_cell_left_pane_ParamLimits

0x491f,	// (0x0003bb46) vkb2_top_cell_left_pane

0x8f03,	// (0x0004012a) vkb2_top_entry_pane_g1_ParamLimits

0x8f03,	// (0x0004012a) vkb2_top_entry_pane_g1

0x8f11,	// (0x00040138) vkb2_top_entry_pane_t1_ParamLimits

0x8f11,	// (0x00040138) vkb2_top_entry_pane_t1

0x5919,	// (0x0003cb40) vkb2_top_entry_pane_t2_ParamLimits

0x5919,	// (0x0003cb40) vkb2_top_entry_pane_t2

0x594b,	// (0x0003cb72) vkb2_top_entry_pane_t3_ParamLimits

0x594b,	// (0x0003cb72) vkb2_top_entry_pane_t3

0x0002,

0xfd30,	// (0x00046f57) vkb2_top_entry_pane_t_ParamLimits

0xfd30,	// (0x00046f57) vkb2_top_entry_pane_t

0x8f4a,	// (0x00040171) vkb2_top_grid_right_pane_g1_ParamLimits

0x8f4a,	// (0x00040171) vkb2_top_grid_right_pane_g1

0x4982,	// (0x0003bba9) vkb2_top_grid_right_pane_g2_ParamLimits

0x4982,	// (0x0003bba9) vkb2_top_grid_right_pane_g2

0x499a,	// (0x0003bbc1) vkb2_top_grid_right_pane_g3_ParamLimits

0x499a,	// (0x0003bbc1) vkb2_top_grid_right_pane_g3

0x8f60,	// (0x00040187) vkb2_top_grid_right_pane_g4_ParamLimits

0x8f60,	// (0x00040187) vkb2_top_grid_right_pane_g4

0x0003,

0xfd37,	// (0x00046f5e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd37,	// (0x00046f5e) vkb2_top_grid_right_pane_g

0x49c8,	// (0x0003bbef) vkb2_top_cell_left_pane_g1

0x49df,	// (0x0003bc06) vkb2_cell_keypad_pane_g1_ParamLimits

0x49df,	// (0x0003bc06) vkb2_cell_keypad_pane_g1

0x596f,	// (0x0003cb96) vkb2_cell_keypad_pane_t1_ParamLimits

0x596f,	// (0x0003cb96) vkb2_cell_keypad_pane_t1

0x49ed,	// (0x0003bc14) vkb2_cell_bottom_grid_pane_ParamLimits

0x49ed,	// (0x0003bc14) vkb2_cell_bottom_grid_pane

0x4a26,	// (0x0003bc4d) vkb2_cell_bottom_grid_pane_g1

0xb0d9,	// (0x00042300) aid_call2_pane_cp02

0xb0e1,	// (0x00042308) aid_call_pane_cp02

0xb0e9,	// (0x00042310) clock_digital_number_pane_cp10

0xb0f1,	// (0x00042318) clock_digital_number_pane_cp11

0xb0f9,	// (0x00042320) clock_digital_number_pane_cp12

0xb101,	// (0x00042328) clock_digital_number_pane_cp13

0xb109,	// (0x00042330) clock_digital_separator_pane_cp10

0xbfb1,	// (0x000431d8) popup_clock_digital_analogue_window_cp2_g1

0xbfb1,	// (0x000431d8) popup_clock_digital_analogue_window_cp2_g2

0xb111,	// (0x00042338) popup_clock_digital_analogue_window_cp2_g3

0xbfb1,	// (0x000431d8) popup_clock_digital_analogue_window_cp2_g4

0xb111,	// (0x00042338) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfcec,	// (0x00046f13) popup_clock_digital_analogue_window_cp2_g

0xb119,	// (0x00042340) popup_clock_digital_analogue_window_cp2_t1

0xb127,	// (0x0004234e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfcf7,	// (0x00046f1e) popup_clock_digital_analogue_window_cp2_t

0xe747,	// (0x0004596e) clock_digital_number_pane_cp10_g1

0xe747,	// (0x0004596e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4a,	// (0x00046d71) clock_digital_number_pane_cp10_g

0xe747,	// (0x0004596e) clock_digital_separator_pane_cp10_g1

0xe747,	// (0x0004596e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4a,	// (0x00046d71) clock_digital_separator_pane_cp10_g

0x53e8,	// (0x0003c60f) uniindi_top_pane_g3

0x53f9,	// (0x0003c620) uniindi_top_pane_g4

0x4800,	// (0x0003ba27) vkb2_row_keypad_pane_ParamLimits

0x4800,	// (0x0003ba27) vkb2_row_keypad_pane

0x4a46,	// (0x0003bc6d) vkb2_cell_t_keypad_pane_ParamLimits

0x4a46,	// (0x0003bc6d) vkb2_cell_t_keypad_pane

0x4a56,	// (0x0003bc7d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x4a56,	// (0x0003bc7d) vkb2_cell_t_keypad_pane_cp08

0x4a69,	// (0x0003bc90) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x4a69,	// (0x0003bc90) vkb2_cell_t_keypad_pane_cp09

0x4a7d,	// (0x0003bca4) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x4a7d,	// (0x0003bca4) vkb2_cell_t_keypad_pane_cp01

0x4a8e,	// (0x0003bcb5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x4a8e,	// (0x0003bcb5) vkb2_cell_t_keypad_pane_cp02

0x4a9f,	// (0x0003bcc6) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x4a9f,	// (0x0003bcc6) vkb2_cell_t_keypad_pane_cp03

0x4ab0,	// (0x0003bcd7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x4ab0,	// (0x0003bcd7) vkb2_cell_t_keypad_pane_cp04

0x4ac1,	// (0x0003bce8) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x4ac1,	// (0x0003bce8) vkb2_cell_t_keypad_pane_cp05

0x4ad2,	// (0x0003bcf9) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x4ad2,	// (0x0003bcf9) vkb2_cell_t_keypad_pane_cp06

0x4ae3,	// (0x0003bd0a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x4ae3,	// (0x0003bd0a) vkb2_cell_t_keypad_pane_cp07

0x4af4,	// (0x0003bd1b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x4af4,	// (0x0003bd1b) vkb2_cell_t_keypad_pane_cp10

0xe9b0,	// (0x00045bd7) vkb2_cell_t_keypad_pane_g1

0x5986,	// (0x0003cbad) vkb2_cell_t_keypad_pane_t1

0xb412,	// (0x00042639) popup_grid_graphic2_window

0x8f76,	// (0x0004019d) aid_size_cell_graphic2_ParamLimits

0x8f76,	// (0x0004019d) aid_size_cell_graphic2

0x8fb4,	// (0x000401db) bg_popup_window_pane_cp21_ParamLimits

0x8fb4,	// (0x000401db) bg_popup_window_pane_cp21

0x8fc2,	// (0x000401e9) graphic2_pages_pane_ParamLimits

0x8fc2,	// (0x000401e9) graphic2_pages_pane

0x9018,	// (0x0004023f) grid_graphic2_control_pane_ParamLimits

0x9018,	// (0x0004023f) grid_graphic2_control_pane

0x9060,	// (0x00040287) grid_graphic2_pane_ParamLimits

0x9060,	// (0x00040287) grid_graphic2_pane

0x90e7,	// (0x0004030e) cell_graphic2_pane

0xb412,	// (0x00042639) main_comp_mode_pane

0x4104,	// (0x0003b32b) list_ai3_gene_pane_ParamLimits

0xae1d,	// (0x00042044) bg_popup_window_pane_cp19_ParamLimits

0x42a9,	// (0x0003b4d0) bg_touch_area_indi_pane_ParamLimits

0x42a9,	// (0x0003b4d0) bg_touch_area_indi_pane

0x42bf,	// (0x0003b4e6) bg_touch_area_indi_pane_cp01_ParamLimits

0x42bf,	// (0x0003b4e6) bg_touch_area_indi_pane_cp01

0x42d5,	// (0x0003b4fc) bg_touch_area_indi_pane_cp02_ParamLimits

0x42d5,	// (0x0003b4fc) bg_touch_area_indi_pane_cp02

0x42ed,	// (0x0003b514) bg_touch_area_indi_pane_cp03_ParamLimits

0x42ed,	// (0x0003b514) bg_touch_area_indi_pane_cp03

0x4307,	// (0x0003b52e) popup_slider_window_g1_ParamLimits

0x4323,	// (0x0003b54a) popup_slider_window_g2_ParamLimits

0x433f,	// (0x0003b566) popup_slider_window_g3_ParamLimits

0xfc81,	// (0x00046ea8) popup_slider_window_g_ParamLimits

0x435b,	// (0x0003b582) popup_slider_window_t1_ParamLimits

0x43a1,	// (0x0003b5c8) small_volume_slider_vertical_pane_ParamLimits

0x90e7,	// (0x0004030e) cell_graphic2_pane_ParamLimits

0x9144,	// (0x0004036b) bg_button_pane_cp10_ParamLimits

0x9144,	// (0x0004036b) bg_button_pane_cp10

0x9157,	// (0x0004037e) bg_button_pane_cp11_ParamLimits

0x9157,	// (0x0004037e) bg_button_pane_cp11

0x916a,	// (0x00040391) graphic2_pages_pane_g1_ParamLimits

0x916a,	// (0x00040391) graphic2_pages_pane_g1

0x9185,	// (0x000403ac) graphic2_pages_pane_g2_ParamLimits

0x9185,	// (0x000403ac) graphic2_pages_pane_g2

0x0001,

0xfd45,	// (0x00046f6c) graphic2_pages_pane_g_ParamLimits

0xfd45,	// (0x00046f6c) graphic2_pages_pane_g

0x919d,	// (0x000403c4) graphic2_pages_pane_t1_ParamLimits

0x919d,	// (0x000403c4) graphic2_pages_pane_t1

0x91b5,	// (0x000403dc) cell_graphic2_control_pane_ParamLimits

0x91b5,	// (0x000403dc) cell_graphic2_control_pane

0x91e7,	// (0x0004040e) cell_graphic2_pane_g1_ParamLimits

0x91e7,	// (0x0004040e) cell_graphic2_pane_g1

0xad77,	// (0x00041f9e) cell_graphic2_pane_g2_ParamLimits

0xad77,	// (0x00041f9e) cell_graphic2_pane_g2

0x91f4,	// (0x0004041b) cell_graphic2_pane_g3_ParamLimits

0x91f4,	// (0x0004041b) cell_graphic2_pane_g3

0xad84,	// (0x00041fab) cell_graphic2_pane_g4_ParamLimits

0xad84,	// (0x00041fab) cell_graphic2_pane_g4

0x9201,	// (0x00040428) cell_graphic2_pane_g5_ParamLimits

0x9201,	// (0x00040428) cell_graphic2_pane_g5

0x0004,

0xfd4a,	// (0x00046f71) cell_graphic2_pane_g_ParamLimits

0xfd4a,	// (0x00046f71) cell_graphic2_pane_g

0x9221,	// (0x00040448) cell_graphic2_pane_t1_ParamLimits

0x9221,	// (0x00040448) cell_graphic2_pane_t1

0xd4ac,	// (0x000446d3) grid_highlight_pane_cp11_ParamLimits

0xd4ac,	// (0x000446d3) grid_highlight_pane_cp11

0xb5b5,	// (0x000427dc) bg_button_pane_cp05

0x9256,	// (0x0004047d) cell_graphic2_control_pane_g1

0xe747,	// (0x0004596e) bg_touch_area_indi_pane_g1

0x5998,	// (0x0003cbbf) aid_cmod_rocker_key_size

0x59a2,	// (0x0003cbc9) aid_cmode_itu_key_size

0x59ac,	// (0x0003cbd3) main_cmode_video_pane

0x59b6,	// (0x0003cbdd) main_comp_mode_itu_pane

0x59c2,	// (0x0003cbe9) main_comp_mode_rocker_pane

0x59ce,	// (0x0003cbf5) cell_cmode_rocker_pane_ParamLimits

0x59ce,	// (0x0003cbf5) cell_cmode_rocker_pane

0x59e0,	// (0x0003cc07) cell_cmode_itu_pane_ParamLimits

0x59e0,	// (0x0003cc07) cell_cmode_itu_pane

0xba83,	// (0x00042caa) bg_button_pane_cp06_ParamLimits

0xba83,	// (0x00042caa) bg_button_pane_cp06

0xe9b0,	// (0x00045bd7) cell_cmode_rocker_pane_g1_ParamLimits

0xe9b0,	// (0x00045bd7) cell_cmode_rocker_pane_g1

0x44ac,	// (0x0003b6d3) cell_cmode_rocker_pane_g2_ParamLimits

0x44ac,	// (0x0003b6d3) cell_cmode_rocker_pane_g2

0x0001,

0xfd5a,	// (0x00046f81) cell_cmode_rocker_pane_g_ParamLimits

0xfd5a,	// (0x00046f81) cell_cmode_rocker_pane_g

0xb412,	// (0x00042639) bg_button_pane_cp07

0x59f5,	// (0x0003cc1c) cell_cmode_itu_pane_g1

0x59fe,	// (0x0003cc25) cell_cmode_itu_pane_t1

0x5a0c,	// (0x0003cc33) cell_cmode_itu_pane_t2

0x0001,

0xfd5f,	// (0x00046f86) cell_cmode_itu_pane_t

0x546a,	// (0x0003c691) aid_touch_ctrl_left

0x5472,	// (0x0003c699) aid_touch_ctrl_right

0xb412,	// (0x00042639) compa_mode_pane

0x927c,	// (0x000404a3) aid_cmod_rocker_key_size_cp

0x9286,	// (0x000404ad) aid_cmode_itu_key_size_cp

0x5a1a,	// (0x0003cc41) compa_mode_pane_g1

0x5a22,	// (0x0003cc49) compa_mode_pane_g2

0x5a2a,	// (0x0003cc51) compa_mode_pane_g3

0x0002,

0xfd64,	// (0x00046f8b) compa_mode_pane_g

0x9290,	// (0x000404b7) main_comp_mode_itu_pane_cp

0x9298,	// (0x000404bf) main_comp_mode_rocker_pane_cp

0x92a0,	// (0x000404c7) cell_cmode_itu_pane_cp_ParamLimits

0x92a0,	// (0x000404c7) cell_cmode_itu_pane_cp

0x92b5,	// (0x000404dc) cell_cmode_rocker_pane_cp_ParamLimits

0x92b5,	// (0x000404dc) cell_cmode_rocker_pane_cp

0xba83,	// (0x00042caa) bg_button_pane_cp06_cp_ParamLimits

0xba83,	// (0x00042caa) bg_button_pane_cp06_cp

0xe9b0,	// (0x00045bd7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe9b0,	// (0x00045bd7) cell_cmode_rocker_pane_g1_cp

0xe747,	// (0x0004596e) cell_cmode_rocker_pane_g2_cp

0xb412,	// (0x00042639) bg_button_pane_cp07_cp

0x92c7,	// (0x000404ee) cell_cmode_itu_pane_g1_cp

0x92d0,	// (0x000404f7) cell_cmode_itu_pane_t1_cp

0x92d0,	// (0x000404f7) cell_cmode_itu_pane_t2_cp

0xa54f,	// (0x00041776) settings_code_pane_cp2

0xb482,	// (0x000426a9) bg_popup_window_pane_cp3_ParamLimits

0xb783,	// (0x000429aa) heading_pane_cp3_ParamLimits

0xb78f,	// (0x000429b6) listscroll_popup_graphic_pane_ParamLimits

0x3a0a,	// (0x0003ac31) fep_hwr_aid_pane_ParamLimits

0x441d,	// (0x0003b644) aid_touch_sctrl_top_ParamLimits

0x442a,	// (0x0003b651) sctrl_sk_top_pane_g1_ParamLimits

0xe9b0,	// (0x00045bd7) sctrl_sk_top_pane_g2_ParamLimits

0xfc9a,	// (0x00046ec1) sctrl_sk_top_pane_g_ParamLimits

0x4437,	// (0x0003b65e) sctrl_sk_top_pane_t1_ParamLimits

0x441d,	// (0x0003b644) aid_touch_sctrl_bottom_ParamLimits

0x4437,	// (0x0003b65e) sctrl_sk_bottom_pane_t1_ParamLimits

0x53b4,	// (0x0003c5db) aid_area_touch_clock

0x8d47,	// (0x0003ff6e) aid_vkb2_area_top_pane_cell_ParamLimits

0x8d47,	// (0x0003ff6e) aid_vkb2_area_top_pane_cell

0x8df2,	// (0x00040019) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8df2,	// (0x00040019) aid_vkb2_area_bottom_pane_cell

0x5911,	// (0x0003cb38) popup_char_count_window

0x5a32,	// (0x0003cc59) popup_char_count_window_g1

0x5a3b,	// (0x0003cc62) popup_char_count_window_g2

0x5a44,	// (0x0003cc6b) popup_char_count_window_g3

0x0002,

0xfd6b,	// (0x00046f92) popup_char_count_window_g

0x5a4d,	// (0x0003cc74) popup_char_count_window_t1

0x45a5,	// (0x0003b7cc) popup_fep_char_preview_window_ParamLimits

0x45a5,	// (0x0003b7cc) popup_fep_char_preview_window

0x8d67,	// (0x0003ff8e) vkb2_top_candi_pane_ParamLimits

0x8d67,	// (0x0003ff8e) vkb2_top_candi_pane

0x92de,	// (0x00040505) cell_vkb2_top_candi_pane_ParamLimits

0x92de,	// (0x00040505) cell_vkb2_top_candi_pane

0xce8d,	// (0x000440b4) bg_popup_fep_char_preview_window_ParamLimits

0xce8d,	// (0x000440b4) bg_popup_fep_char_preview_window

0x4b09,	// (0x0003bd30) popup_fep_char_preview_window_t1_ParamLimits

0x4b09,	// (0x0003bd30) popup_fep_char_preview_window_t1

0x5a5b,	// (0x0003cc82) bg_popup_fep_char_preview_window_g1

0x5a63,	// (0x0003cc8a) bg_popup_fep_char_preview_window_g2

0x5a6b,	// (0x0003cc92) bg_popup_fep_char_preview_window_g3

0x5a73,	// (0x0003cc9a) bg_popup_fep_char_preview_window_g4

0x5a7b,	// (0x0003cca2) bg_popup_fep_char_preview_window_g5

0x4b43,	// (0x0003bd6a) bg_popup_fep_char_preview_window_g6

0x5a83,	// (0x0003ccaa) bg_popup_fep_char_preview_window_g7

0x5a8b,	// (0x0003ccb2) bg_popup_fep_char_preview_window_g8

0x5a93,	// (0x0003ccba) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd72,	// (0x00046f99) bg_popup_fep_char_preview_window_g

0xe9b0,	// (0x00045bd7) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe9b0,	// (0x00045bd7) cell_vkb2_top_candi_pane_g1

0xec79,	// (0x00045ea0) cell_vkb2_top_candi_pane_g2_ParamLimits

0xec79,	// (0x00045ea0) cell_vkb2_top_candi_pane_g2

0xec9a,	// (0x00045ec1) cell_vkb2_top_candi_pane_g3_ParamLimits

0xec9a,	// (0x00045ec1) cell_vkb2_top_candi_pane_g3

0x4b4b,	// (0x0003bd72) cell_vkb2_top_candi_pane_g4_ParamLimits

0x4b4b,	// (0x0003bd72) cell_vkb2_top_candi_pane_g4

0x5a9b,	// (0x0003ccc2) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5a9b,	// (0x0003ccc2) cell_vkb2_top_candi_pane_g5

0x44ac,	// (0x0003b6d3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x44ac,	// (0x0003b6d3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd85,	// (0x00046fac) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd85,	// (0x00046fac) cell_vkb2_top_candi_pane_g

0x4b6c,	// (0x0003bd93) cell_vkb2_top_candi_pane_t1

0x323e,	// (0x0003a465) aid_size_touch_slider_mark_ParamLimits

0x323e,	// (0x0003a465) aid_size_touch_slider_mark

0x8ffe,	// (0x00040225) grid_graphic2_catg_pane_ParamLimits

0x8ffe,	// (0x00040225) grid_graphic2_catg_pane

0x90ba,	// (0x000402e1) popup_grid_graphic2_window_t1_ParamLimits

0x90ba,	// (0x000402e1) popup_grid_graphic2_window_t1

0x90d0,	// (0x000402f7) popup_grid_graphic2_window_t2_ParamLimits

0x90d0,	// (0x000402f7) popup_grid_graphic2_window_t2

0x0001,

0xfd40,	// (0x00046f67) popup_grid_graphic2_window_t_ParamLimits

0xfd40,	// (0x00046f67) popup_grid_graphic2_window_t

0xb5b5,	// (0x000427dc) bg_button_pane_cp05_ParamLimits

0x9256,	// (0x0004047d) cell_graphic2_control_pane_g1_ParamLimits

0x9344,	// (0x0004056b) cell_graphic2_catg_pane_ParamLimits

0x9344,	// (0x0004056b) cell_graphic2_catg_pane

0xb412,	// (0x00042639) bg_button_pane_cp12

0x9356,	// (0x0004057d) cell_graphic2_catg_pane_g1

0x4531,	// (0x0003b758) cell_tb_ext_pane_t1_ParamLimits

0x493f,	// (0x0003bb66) vkb2_top_cell_right_narrow_pane_ParamLimits

0x493f,	// (0x0003bb66) vkb2_top_cell_right_narrow_pane

0x4957,	// (0x0003bb7e) vkb2_top_cell_right_wide_pane_ParamLimits

0x4957,	// (0x0003bb7e) vkb2_top_cell_right_wide_pane

0x39fc,	// (0x0003ac23) bg_vkb2_func_pane_ParamLimits

0x39fc,	// (0x0003ac23) bg_vkb2_func_pane

0x49c8,	// (0x0003bbef) vkb2_top_cell_left_pane_g1_ParamLimits

0x39fc,	// (0x0003ac23) bg_vkb2_fuc_pane_cp03_ParamLimits

0x39fc,	// (0x0003ac23) bg_vkb2_fuc_pane_cp03

0x4a26,	// (0x0003bc4d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc8a6,	// (0x00043acd) bg_vkb2_func_pane_g1

0xc8ae,	// (0x00043ad5) bg_vkb2_func_pane_g2

0xc8be,	// (0x00043ae5) bg_vkb2_func_pane_g3

0xc8b6,	// (0x00043add) bg_vkb2_func_pane_g4

0xc8c6,	// (0x00043aed) bg_vkb2_func_pane_g5

0xc8ce,	// (0x00043af5) bg_vkb2_func_pane_g6

0xc8d6,	// (0x00043afd) bg_vkb2_func_pane_g7

0xc8de,	// (0x00043b05) bg_vkb2_func_pane_g8

0xc89e,	// (0x00043ac5) bg_vkb2_func_pane_g9

0x0008,

0xfd92,	// (0x00046fb9) bg_vkb2_func_pane_g

0x39fc,	// (0x0003ac23) bg_vkb2_fuc_pane_cp01_ParamLimits

0x39fc,	// (0x0003ac23) bg_vkb2_fuc_pane_cp01

0x49c8,	// (0x0003bbef) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x49c8,	// (0x0003bbef) vkb2_top_cell_right_wide_pane_g1

0x39fc,	// (0x0003ac23) bg_vkb2_fuc_pane_cp02_ParamLimits

0x39fc,	// (0x0003ac23) bg_vkb2_fuc_pane_cp02

0x4a26,	// (0x0003bc4d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x4a26,	// (0x0003bc4d) vkb2_top_cell_right_narrow_pane_g1

0xad2f,	// (0x00041f56) aid_touch_area_decrease_ParamLimits

0xad2f,	// (0x00041f56) aid_touch_area_decrease

0xad91,	// (0x00041fb8) aid_touch_area_increase_ParamLimits

0xad91,	// (0x00041fb8) aid_touch_area_increase

0xadb9,	// (0x00041fe0) aid_touch_area_mute_ParamLimits

0xadb9,	// (0x00041fe0) aid_touch_area_mute

0xade9,	// (0x00042010) aid_touch_area_slider_ParamLimits

0xade9,	// (0x00042010) aid_touch_area_slider

0xae29,	// (0x00042050) popup_slider_window_g4_ParamLimits

0xae29,	// (0x00042050) popup_slider_window_g4

0xae51,	// (0x00042078) popup_slider_window_g5_ParamLimits

0xae51,	// (0x00042078) popup_slider_window_g5

0xae85,	// (0x000420ac) popup_slider_window_g6_ParamLimits

0xae85,	// (0x000420ac) popup_slider_window_g6

0x4389,	// (0x0003b5b0) popup_slider_window_t2_ParamLimits

0x4389,	// (0x0003b5b0) popup_slider_window_t2

0x0001,

0xfc8e,	// (0x00046eb5) popup_slider_window_t_ParamLimits

0xfc8e,	// (0x00046eb5) popup_slider_window_t

0xaea1,	// (0x000420c8) slider_pane_ParamLimits

0xaea1,	// (0x000420c8) slider_pane

0x5abc,	// (0x0003cce3) slider_pane_g1_ParamLimits

0x5abc,	// (0x0003cce3) slider_pane_g1

0x5ad0,	// (0x0003ccf7) slider_pane_g2_ParamLimits

0x5ad0,	// (0x0003ccf7) slider_pane_g2

0x5ae6,	// (0x0003cd0d) slider_pane_g3_ParamLimits

0x5ae6,	// (0x0003cd0d) slider_pane_g3

0x0003,

0xfda5,	// (0x00046fcc) slider_pane_g_ParamLimits

0xfda5,	// (0x00046fcc) slider_pane_g

0x889a,	// (0x0003fac1) popup_tb_float_extension_window_ParamLimits

0x889a,	// (0x0003fac1) popup_tb_float_extension_window

0x5b12,	// (0x0003cd39) aid_size_cell_tb_float_ext

0xb412,	// (0x00042639) bg_popup_sub_window_cp28

0x5b1e,	// (0x0003cd45) grid_tb_float_ext_pane

0x5b28,	// (0x0003cd4f) cell_tb_float_ext_pane_ParamLimits

0x5b28,	// (0x0003cd4f) cell_tb_float_ext_pane

0x5b42,	// (0x0003cd69) cell_tb_float_ext_pane_g1

0x5b4b,	// (0x0003cd72) grid_highlight_pane_cp12

0x8b10,	// (0x0003fd37) cell_last_hwr_side_pane_ParamLimits

0x8b10,	// (0x0003fd37) cell_last_hwr_side_pane

0xe747,	// (0x0004596e) cell_last_hwr_side_pane_g1

0x5b54,	// (0x0003cd7b) cell_last_hwr_side_pane_g2

0x0001,

0xfdae,	// (0x00046fd5) cell_last_hwr_side_pane_g

0x8ece,	// (0x000400f5) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8ece,	// (0x000400f5) vkb2_area_bottom_space_btn_pane

0xe9b0,	// (0x00045bd7) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5986,	// (0x0003cbad) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x4b6c,	// (0x0003bd93) cell_vkb2_top_candi_pane_t1_ParamLimits

0x4b8b,	// (0x0003bdb2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x4b8b,	// (0x0003bdb2) vkb2_area_bottom_space_btn_pane_g1

0x4bc5,	// (0x0003bdec) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x4bc5,	// (0x0003bdec) vkb2_area_bottom_space_btn_pane_g2

0x4bfb,	// (0x0003be22) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x4bfb,	// (0x0003be22) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdb3,	// (0x00046fda) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdb3,	// (0x00046fda) vkb2_area_bottom_space_btn_pane_g

0x3ab1,	// (0x0003acd8) cel_fep_hwr_func_pane_ParamLimits

0x3ab1,	// (0x0003acd8) cel_fep_hwr_func_pane

0x8ae5,	// (0x0003fd0c) cell_hwr_side_button_pane_ParamLimits

0x8ae5,	// (0x0003fd0c) cell_hwr_side_button_pane

0x53b4,	// (0x0003c5db) aid_area_touch_clock_ParamLimits

0xb5b5,	// (0x000427dc) bg_uniindi_top_pane_ParamLimits

0x53c6,	// (0x0003c5ed) uniindi_top_pane_g1_ParamLimits

0x53dc,	// (0x0003c603) uniindi_top_pane_g2_ParamLimits

0x53e8,	// (0x0003c60f) uniindi_top_pane_g3_ParamLimits

0x53f9,	// (0x0003c620) uniindi_top_pane_g4_ParamLimits

0xfcc6,	// (0x00046eed) uniindi_top_pane_g_ParamLimits

0x5406,	// (0x0003c62d) uniindi_top_pane_t1_ParamLimits

0xb5b5,	// (0x000427dc) bg_vkb2_func_pane_cp01_ParamLimits

0xb5b5,	// (0x000427dc) bg_vkb2_func_pane_cp01

0x5f23,	// (0x0003d14a) cel_fep_hwr_func_pane_g1_ParamLimits

0x5f23,	// (0x0003d14a) cel_fep_hwr_func_pane_g1

0xb5b5,	// (0x000427dc) bg_vkb2_func_pane_cp02_ParamLimits

0xb5b5,	// (0x000427dc) bg_vkb2_func_pane_cp02

0x5f23,	// (0x0003d14a) cell_hwr_side_button_pane_g1_ParamLimits

0x5f23,	// (0x0003d14a) cell_hwr_side_button_pane_g1

0xc7b6,	// (0x000439dd) status_pane_g4_ParamLimits

0xc7b6,	// (0x000439dd) status_pane_g4

0xc7ce,	// (0x000439f5) status_pane_t1

0xe5d7,	// (0x000457fe) form2_midp_gauge_slider_cont_pane

0xe5df,	// (0x00045806) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa7ca,	// (0x000419f1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa7de,	// (0x00041a05) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafd,	// (0x00046d24) form2_midp_gauge_slider_pane_t_ParamLimits

0xe5f1,	// (0x00045818) form2_midp_slider_pane_ParamLimits

0x4565,	// (0x0003b78c) aid_size_cell_func_vkb2_ParamLimits

0x4565,	// (0x0003b78c) aid_size_cell_func_vkb2

0x5afe,	// (0x0003cd25) slider_pane_g4_ParamLimits

0x5afe,	// (0x0003cd25) slider_pane_g4

0x935f,	// (0x00040586) form2_midp_gauge_slider_pane_t2_cp01

0x936f,	// (0x00040596) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x936f,	// (0x00040596) form2_midp_gauge_slider_pane_t3_cp01

0x4c70,	// (0x0003be97) form2_midp_slider_pane_cp01

0xb412,	// (0x00042639) navi_smil_pane

0x5f53,	// (0x0003d17a) navi_smil_pane_g1

0x5f5b,	// (0x0003d182) navi_smil_pane_t1

0x5f31,	// (0x0003d158) form2_midp_slider_pane_g1

0x5f3a,	// (0x0003d161) form2_midp_slider_pane_g2

0x5f42,	// (0x0003d169) form2_midp_slider_pane_g3

0x5f31,	// (0x0003d158) form2_midp_slider_pane_g4

0x938e,	// (0x000405b5) form2_midp_slider_pane_g5

0x0004,

0xfdbc,	// (0x00046fe3) form2_midp_slider_pane_g

0x4c35,	// (0x0003be5c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x4c35,	// (0x0003be5c) vkb2_area_bottom_space_btn_pane_g4

0x9e84,	// (0x000410ab) lc0_navi_pane_ParamLimits

0x9e84,	// (0x000410ab) lc0_navi_pane

0x9eee,	// (0x00041115) lc0_stat_indi_pane_ParamLimits

0x9eee,	// (0x00041115) lc0_stat_indi_pane

0x9f03,	// (0x0004112a) ls0_title_pane_ParamLimits

0x9f03,	// (0x0004112a) ls0_title_pane

0xba83,	// (0x00042caa) bg_popup_sub_pane_cp14_ParamLimits

0x454c,	// (0x0003b773) list_uniindi_pane_ParamLimits

0x4558,	// (0x0003b77f) uniindi_top_pane_ParamLimits

0x5442,	// (0x0003c669) list_single_uniindi_pane_g1_ParamLimits

0x5455,	// (0x0003c67c) list_single_uniindi_pane_t1_ParamLimits

0x9399,	// (0x000405c0) lc0_stat_clock_pane_ParamLimits

0x9399,	// (0x000405c0) lc0_stat_clock_pane

0x93a6,	// (0x000405cd) lc0_stat_indi_pane_g1_ParamLimits

0x93a6,	// (0x000405cd) lc0_stat_indi_pane_g1

0x93b3,	// (0x000405da) lc0_stat_indi_pane_g2_ParamLimits

0x93b3,	// (0x000405da) lc0_stat_indi_pane_g2

0x0001,

0xfdc7,	// (0x00046fee) lc0_stat_indi_pane_g_ParamLimits

0xfdc7,	// (0x00046fee) lc0_stat_indi_pane_g

0x93c0,	// (0x000405e7) lc0_uni_indicator_pane_ParamLimits

0x93c0,	// (0x000405e7) lc0_uni_indicator_pane

0x5f69,	// (0x0003d190) ls0_title_pane_g1_ParamLimits

0x5f69,	// (0x0003d190) ls0_title_pane_g1

0x93cd,	// (0x000405f4) ls0_title_pane_t1_ParamLimits

0x93cd,	// (0x000405f4) ls0_title_pane_t1

0x93fb,	// (0x00040622) lc0_uni_indicator_pane_g1_ParamLimits

0x93fb,	// (0x00040622) lc0_uni_indicator_pane_g1

0x5f7d,	// (0x0003d1a4) lc0_stat_clock_pane_t1

0xb412,	// (0x00042639) main_ai5_pane

0x5f8b,	// (0x0003d1b2) ai5_sk_pane_ParamLimits

0x5f8b,	// (0x0003d1b2) ai5_sk_pane

0x942a,	// (0x00040651) cell_ai5_widget_pane_ParamLimits

0x942a,	// (0x00040651) cell_ai5_widget_pane

0x5f98,	// (0x0003d1bf) aid_size_cell_widget_grid

0x5fae,	// (0x0003d1d5) bg_ai5_widget_pane_ParamLimits

0x5fae,	// (0x0003d1d5) bg_ai5_widget_pane

0x6018,	// (0x0003d23f) cell_ai5_widget_pane_g2

0x6028,	// (0x0003d24f) cell_ai5_widget_pane_g3

0x6047,	// (0x0003d26e) cell_ai5_widget_pane_g4

0x6053,	// (0x0003d27a) cell_ai5_widget_pane_g5

0x605f,	// (0x0003d286) cell_ai5_widget_pane_g6

0x606b,	// (0x0003d292) cell_ai5_widget_pane_g7

0x60b3,	// (0x0003d2da) cell_ai5_widget_pane_t1_ParamLimits

0x60b3,	// (0x0003d2da) cell_ai5_widget_pane_t1

0x60d0,	// (0x0003d2f7) cell_ai5_widget_pane_t2_ParamLimits

0x60d0,	// (0x0003d2f7) cell_ai5_widget_pane_t2

0x60e8,	// (0x0003d30f) cell_ai5_widget_pane_t3_ParamLimits

0x60e8,	// (0x0003d30f) cell_ai5_widget_pane_t3

0x6100,	// (0x0003d327) cell_ai5_widget_pane_t4_ParamLimits

0x6100,	// (0x0003d327) cell_ai5_widget_pane_t4

0x611a,	// (0x0003d341) cell_ai5_widget_pane_t5_ParamLimits

0x611a,	// (0x0003d341) cell_ai5_widget_pane_t5

0x6139,	// (0x0003d360) cell_ai5_widget_pane_t6_ParamLimits

0x6139,	// (0x0003d360) cell_ai5_widget_pane_t6

0x614b,	// (0x0003d372) cell_ai5_widget_pane_t7_ParamLimits

0x614b,	// (0x0003d372) cell_ai5_widget_pane_t7

0x6164,	// (0x0003d38b) cell_ai5_widget_pane_t8_ParamLimits

0x6164,	// (0x0003d38b) cell_ai5_widget_pane_t8

0x0009,

0xfde1,	// (0x00047008) cell_ai5_widget_pane_t_ParamLimits

0xfde1,	// (0x00047008) cell_ai5_widget_pane_t

0x61b0,	// (0x0003d3d7) grid_ai5_widget_pane

0xba83,	// (0x00042caa) highlight_cell_ai5_widget_pane_ParamLimits

0xba83,	// (0x00042caa) highlight_cell_ai5_widget_pane

0x9495,	// (0x000406bc) ai5_sk_left_pane

0x949f,	// (0x000406c6) ai5_sk_middle_pane

0x94a9,	// (0x000406d0) ai5_sk_right_pane

0x61c4,	// (0x0003d3eb) bg_ai5_widget_pane_g1_ParamLimits

0x61c4,	// (0x0003d3eb) bg_ai5_widget_pane_g1

0x61d0,	// (0x0003d3f7) bg_ai5_widget_pane_g2_ParamLimits

0x61d0,	// (0x0003d3f7) bg_ai5_widget_pane_g2

0x61dc,	// (0x0003d403) bg_ai5_widget_pane_g3_ParamLimits

0x61dc,	// (0x0003d403) bg_ai5_widget_pane_g3

0x61e8,	// (0x0003d40f) bg_ai5_widget_pane_g4_ParamLimits

0x61e8,	// (0x0003d40f) bg_ai5_widget_pane_g4

0x61f4,	// (0x0003d41b) bg_ai5_widget_pane_g5_ParamLimits

0x61f4,	// (0x0003d41b) bg_ai5_widget_pane_g5

0x6200,	// (0x0003d427) bg_ai5_widget_pane_g6_ParamLimits

0x6200,	// (0x0003d427) bg_ai5_widget_pane_g6

0x620c,	// (0x0003d433) bg_ai5_widget_pane_g7_ParamLimits

0x620c,	// (0x0003d433) bg_ai5_widget_pane_g7

0x6218,	// (0x0003d43f) bg_ai5_widget_pane_g8_ParamLimits

0x6218,	// (0x0003d43f) bg_ai5_widget_pane_g8

0x6224,	// (0x0003d44b) bg_ai5_widget_pane_g9_ParamLimits

0x6224,	// (0x0003d44b) bg_ai5_widget_pane_g9

0x0008,

0xfdf6,	// (0x0004701d) bg_ai5_widget_pane_g_ParamLimits

0xfdf6,	// (0x0004701d) bg_ai5_widget_pane_g

0x6257,	// (0x0003d47e) cell_shortcut_ai5_widget_pane_ParamLimits

0x6257,	// (0x0003d47e) cell_shortcut_ai5_widget_pane

0xc46c,	// (0x00043693) bg_cell_shortcut_ai5_widget_pane

0x6268,	// (0x0003d48f) cell_grid_ai5_widget_pane_g1

0x6271,	// (0x0003d498) highlight_cell_shortcut_ai5_widget_pane

0xc8ae,	// (0x00043ad5) ai5_sk_left_pane_g1

0x6279,	// (0x0003d4a0) ai5_sk_left_pane_g2

0x6281,	// (0x0003d4a8) ai5_sk_left_pane_g3

0x6289,	// (0x0003d4b0) ai5_sk_left_pane_g4

0x0003,

0xfe09,	// (0x00047030) ai5_sk_left_pane_g

0x6291,	// (0x0003d4b8) ai5_sk_left_pane_t1

0xc8a6,	// (0x00043acd) ai5_sk_right_pane_g1

0x629f,	// (0x0003d4c6) ai5_sk_right_pane_g2

0x62a7,	// (0x0003d4ce) ai5_sk_right_pane_g3

0x62af,	// (0x0003d4d6) ai5_sk_right_pane_g4

0x0003,

0xfe12,	// (0x00047039) ai5_sk_right_pane_g

0x62b7,	// (0x0003d4de) ai5_sk_right_pane_t1

0xc8a6,	// (0x00043acd) ai5_sk_middle_pane_g1

0xc8ae,	// (0x00043ad5) ai5_sk_middle_pane_g2

0xc8c6,	// (0x00043aed) ai5_sk_middle_pane_g3

0x62a7,	// (0x0003d4ce) ai5_sk_middle_pane_g4

0x6281,	// (0x0003d4a8) ai5_sk_middle_pane_g5

0x62c5,	// (0x0003d4ec) ai5_sk_middle_pane_g6

0x94b3,	// (0x000406da) ai5_sk_middle_pane_g7

0x0006,

0xfe1b,	// (0x00047042) ai5_sk_middle_pane_g

0x9d70,	// (0x00040f97) aid_touch_area_size_lc0_ParamLimits

0x9d70,	// (0x00040f97) aid_touch_area_size_lc0

0x3d26,	// (0x0003af4d) cell_hwr_candidate_pane_t1_ParamLimits

0xc6d8,	// (0x000438ff) aid_touch_navi_pane

0x9ff6,	// (0x0004121d) status_dt_navi_pane_ParamLimits

0x9ff6,	// (0x0004121d) status_dt_navi_pane

0xa00e,	// (0x00041235) status_dt_sta_pane_ParamLimits

0xa00e,	// (0x00041235) status_dt_sta_pane

0x94bb,	// (0x000406e2) dt_sta_controll_pane

0x94c8,	// (0x000406ef) dt_sta_indi_pane

0x94d5,	// (0x000406fc) dt_sta_title_pane

0xb5b5,	// (0x000427dc) bg_dt_sta_indi_pane_ParamLimits

0xb5b5,	// (0x000427dc) bg_dt_sta_indi_pane

0x62cd,	// (0x0003d4f4) dt_sta_battery_pane

0x62d5,	// (0x0003d4fc) dt_sta_indi_pane_g1

0x62de,	// (0x0003d505) dt_sta_indi_pane_g2

0x62e7,	// (0x0003d50e) dt_sta_indi_pane_g3

0x0002,

0xfe2a,	// (0x00047051) dt_sta_indi_pane_g

0x62f0,	// (0x0003d517) dt_sta_signal_pane

0xba83,	// (0x00042caa) bg_dt_sta_title_pane_ParamLimits

0xba83,	// (0x00042caa) bg_dt_sta_title_pane

0xd56a,	// (0x00044791) dt_sta_title_pane_g1

0x62f9,	// (0x0003d520) dt_sta_title_pane_t1_ParamLimits

0x62f9,	// (0x0003d520) dt_sta_title_pane_t1

0xb412,	// (0x00042639) bg_dt_sta_control_pane

0x630e,	// (0x0003d535) dt_sta_controll_pane_g1

0x6317,	// (0x0003d53e) bg_dt_sta_title_pane_g1

0x6320,	// (0x0003d547) bg_dt_sta_title_pane_g2

0x6329,	// (0x0003d550) bg_dt_sta_title_pane_g3

0x0002,

0xfe31,	// (0x00047058) bg_dt_sta_title_pane_g

0xe747,	// (0x0004596e) bg_dt_sta_indi_pane_g1

0x6332,	// (0x0003d559) dt_sta_signal_pane_g1

0x633a,	// (0x0003d561) dt_sta_signal_pane_g2

0x0001,

0xfe38,	// (0x0004705f) dt_sta_signal_pane_g

0x6342,	// (0x0003d569) dt_sta_battery_pane_g1

0x634b,	// (0x0003d572) dt_sta_battery_pane_t1

0xe747,	// (0x0004596e) bg_dt_sta_control_pane_g1

0xc05d,	// (0x00043284) fep_china_uni_eep_pane

0xc065,	// (0x0004328c) fep_china_uni_entry_pane_ParamLimits

0xc075,	// (0x0004329c) popup_fep_china_uni_window_g1_ParamLimits

0xc085,	// (0x000432ac) popup_fep_china_uni_window_g2_ParamLimits

0xc085,	// (0x000432ac) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0004694f) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0004694f) popup_fep_china_uni_window_g

0x635a,	// (0x0003d581) fep_china_uni_eep_pane_g1

0x6362,	// (0x0003d589) fep_china_uni_eep_pane_t1

0x5f4a,	// (0x0003d171) aid_touch_area_size_smil_player

0xc789,	// (0x000439b0) lc0_clock_pane

0xc7c2,	// (0x000439e9) status_pane_g5_ParamLimits

0xc7c2,	// (0x000439e9) status_pane_g5

0x842e,	// (0x0003f655) popup_keymap_window

0xc7a2,	// (0x000439c9) status_icon_pane

0x6028,	// (0x0003d24f) cell_ai5_widget_pane_g3_ParamLimits

0x6047,	// (0x0003d26e) cell_ai5_widget_pane_g4_ParamLimits

0x6053,	// (0x0003d27a) cell_ai5_widget_pane_g5_ParamLimits

0x6077,	// (0x0003d29e) cell_ai5_widget_pane_g8_ParamLimits

0x6077,	// (0x0003d29e) cell_ai5_widget_pane_g8

0x608b,	// (0x0003d2b2) cell_ai5_widget_pane_g9_ParamLimits

0x608b,	// (0x0003d2b2) cell_ai5_widget_pane_g9

0x609f,	// (0x0003d2c6) cell_ai5_widget_pane_g10_ParamLimits

0x609f,	// (0x0003d2c6) cell_ai5_widget_pane_g10

0x6371,	// (0x0003d598) status_icon_pane_g1

0xb412,	// (0x00042639) bg_popup_sub_pane_cp13

0x6379,	// (0x0003d5a0) popup_keymap_window_t1

0x9cfa,	// (0x00040f21) control_pane_g6_ParamLimits

0x9cfa,	// (0x00040f21) control_pane_g6

0x9d07,	// (0x00040f2e) control_pane_g7_ParamLimits

0x9d07,	// (0x00040f2e) control_pane_g7

0x9d14,	// (0x00040f3b) control_pane_g8_ParamLimits

0x9d14,	// (0x00040f3b) control_pane_g8

0x94bb,	// (0x000406e2) dt_sta_controll_pane_ParamLimits

0x94c8,	// (0x000406ef) dt_sta_indi_pane_ParamLimits

0x94d5,	// (0x000406fc) dt_sta_title_pane_ParamLimits

0xb9b9,	// (0x00042be0) aid_size_touch_scroll_bar_cale

0x149a,	// (0x000386c1) popup_discreet_window_ParamLimits

0x149a,	// (0x000386c1) popup_discreet_window

0x803d,	// (0x0003f264) popup_sk_window

0xce8d,	// (0x000440b4) bg_popup_sub_pane_cp28_ParamLimits

0xce8d,	// (0x000440b4) bg_popup_sub_pane_cp28

0x6387,	// (0x0003d5ae) popup_discreet_window_g1_ParamLimits

0x6387,	// (0x0003d5ae) popup_discreet_window_g1

0x63a7,	// (0x0003d5ce) popup_discreet_window_t1_ParamLimits

0x63a7,	// (0x0003d5ce) popup_discreet_window_t1

0x63c5,	// (0x0003d5ec) popup_discreet_window_t2_ParamLimits

0x63c5,	// (0x0003d5ec) popup_discreet_window_t2

0x0002,

0xfe3d,	// (0x00047064) popup_discreet_window_t_ParamLimits

0xfe3d,	// (0x00047064) popup_discreet_window_t

0x4e23,	// (0x0003c04a) popup_sk_window_g1

0x4e2d,	// (0x0003c054) popup_sk_window_g2

0x0001,

0xfe44,	// (0x0004706b) popup_sk_window_g

0x4e37,	// (0x0003c05e) popup_sk_window_t1

0x4e45,	// (0x0003c06c) popup_sk_window_t1_copy1

0x6018,	// (0x0003d23f) cell_ai5_widget_pane_g2_ParamLimits

0x6176,	// (0x0003d39d) cell_ai5_widget_pane_t9_ParamLimits

0x6176,	// (0x0003d39d) cell_ai5_widget_pane_t9

0xb412,	// (0x00042639) main_fep_fshwr2_pane

0x94e7,	// (0x0004070e) aid_fshwr2_btn_pane

0x94f6,	// (0x0004071d) aid_fshwr2_syb_pane

0x9508,	// (0x0004072f) aid_fshwr2_txt_pane

0x9517,	// (0x0004073e) fshwr2_func_candi_pane

0x9528,	// (0x0004074f) fshwr2_hwr_syb_pane

0x9543,	// (0x0004076a) fshwr2_icf_pane

0xb412,	// (0x00042639) fshwr2_icf_bg_pane

0x955b,	// (0x00040782) fshwr2_icf_pane_t1_ParamLimits

0x955b,	// (0x00040782) fshwr2_icf_pane_t1

0xe747,	// (0x0004596e) fshwr2_func_candi_pane_g1

0x6417,	// (0x0003d63e) fshwr2_func_candi_row_pane_ParamLimits

0x6417,	// (0x0003d63e) fshwr2_func_candi_row_pane

0x9575,	// (0x0004079c) cell_fshwr2_syb_pane_ParamLimits

0x9575,	// (0x0004079c) cell_fshwr2_syb_pane

0xe9b0,	// (0x00045bd7) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe9b0,	// (0x00045bd7) fshwr2_hwr_syb_pane_g1

0xb412,	// (0x00042639) bg_popup_call_pane_cp01

0x6428,	// (0x0003d64f) fshwr2_func_candi_cell_pane_ParamLimits

0x6428,	// (0x0003d64f) fshwr2_func_candi_cell_pane

0x6459,	// (0x0003d680) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6459,	// (0x0003d680) fshwr2_func_candi_cell_bg_pane

0x6473,	// (0x0003d69a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6473,	// (0x0003d69a) fshwr2_func_candi_cell_pane_g1

0x6493,	// (0x0003d6ba) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6493,	// (0x0003d6ba) fshwr2_func_candi_cell_pane_t1

0xb412,	// (0x00042639) bg_button_pane_cp08

0xc46c,	// (0x00043693) cell_fshwr2_syb_bg_pane

0x958f,	// (0x000407b6) cell_fshwr2_syb_bg_pane_g1

0x64a6,	// (0x0003d6cd) cell_fshwr2_syb_bg_pane_t1

0xba83,	// (0x00042caa) main_tmo_pane

0xa395,	// (0x000415bc) uni_indicator_pane_g1_ParamLimits

0xa3aa,	// (0x000415d1) uni_indicator_pane_g2_ParamLimits

0xd848,	// (0x00044a6f) uni_indicator_pane_g3_ParamLimits

0xd85e,	// (0x00044a85) uni_indicator_pane_g4_ParamLimits

0xd85e,	// (0x00044a85) uni_indicator_pane_g4

0xd872,	// (0x00044a99) uni_indicator_pane_g5_ParamLimits

0xd872,	// (0x00044a99) uni_indicator_pane_g5

0xd886,	// (0x00044aad) uni_indicator_pane_g6_ParamLimits

0xd886,	// (0x00044aad) uni_indicator_pane_g6

0xf927,	// (0x00046b4e) uni_indicator_pane_g_ParamLimits

0xad11,	// (0x00041f38) popup_tmo_note_window_ParamLimits

0xad11,	// (0x00041f38) popup_tmo_note_window

0xba83,	// (0x00042caa) fshwr2_bg_pane

0x6484,	// (0x0003d6ab) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6484,	// (0x0003d6ab) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe49,	// (0x00047070) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe49,	// (0x00047070) fshwr2_func_candi_cell_pane_g

0xe747,	// (0x0004596e) bg_popup_window_pane_cp01

0x64b5,	// (0x0003d6dc) bg_popup_window_pane_g1_cp01

0x64be,	// (0x0003d6e5) bg_popup_window_pane_cp22_ParamLimits

0x64be,	// (0x0003d6e5) bg_popup_window_pane_cp22

0x64cc,	// (0x0003d6f3) listscroll_tmo_link_pane_ParamLimits

0x64cc,	// (0x0003d6f3) listscroll_tmo_link_pane

0x650c,	// (0x0003d733) popup_tmo_note_window_g1_ParamLimits

0x650c,	// (0x0003d733) popup_tmo_note_window_g1

0x6519,	// (0x0003d740) tmo_note_info_pane_ParamLimits

0x6519,	// (0x0003d740) tmo_note_info_pane

0x9597,	// (0x000407be) list_tmo_note_info_pane_g1_ParamLimits

0x9597,	// (0x000407be) list_tmo_note_info_pane_g1

0x6533,	// (0x0003d75a) list_tmo_note_info_pane_g2_ParamLimits

0x6533,	// (0x0003d75a) list_tmo_note_info_pane_g2

0x0001,

0xfe4e,	// (0x00047075) list_tmo_note_info_pane_g_ParamLimits

0xfe4e,	// (0x00047075) list_tmo_note_info_pane_g

0x654f,	// (0x0003d776) list_tmo_note_info_text_pane_ParamLimits

0x654f,	// (0x0003d776) list_tmo_note_info_text_pane

0x6591,	// (0x0003d7b8) list_tmo_link_pane

0x659e,	// (0x0003d7c5) scroll_pane_cp20

0x65ab,	// (0x0003d7d2) list_single_tmo_link_pane_ParamLimits

0x65ab,	// (0x0003d7d2) list_single_tmo_link_pane

0x65bb,	// (0x0003d7e2) list_single_tmo_link_pane_t1

0x65c9,	// (0x0003d7f0) list_tmo_note_info_text_pane_t1_ParamLimits

0x65c9,	// (0x0003d7f0) list_tmo_note_info_text_pane_t1

0x99c2,	// (0x00040be9) aid_size_touch_scroll_bar_cp01_ParamLimits

0x99c2,	// (0x00040be9) aid_size_touch_scroll_bar_cp01

0x7ba4,	// (0x0003edcb) aid_size_touch_slider_marker

0x802d,	// (0x0003f254) popup_settings_window_ParamLimits

0x802d,	// (0x0003f254) popup_settings_window

0x0af0,	// (0x00037d17) popup_candi_list_indi_window

0xc6d8,	// (0x000438ff) aid_touch_navi_pane_ParamLimits

0x43f1,	// (0x0003b618) rs_clock_indi_pane

0x43fa,	// (0x0003b621) sctrl_sk_bottom_pane_ParamLimits

0x440b,	// (0x0003b632) sctrl_sk_top_pane_ParamLimits

0x45bf,	// (0x0003b7e6) popup_fep_tooltip_window

0x5f98,	// (0x0003d1bf) aid_size_cell_widget_grid_ParamLimits

0x600c,	// (0x0003d233) cell_ai5_widget_pane_g1_ParamLimits

0x600c,	// (0x0003d233) cell_ai5_widget_pane_g1

0x605f,	// (0x0003d286) cell_ai5_widget_pane_g6_ParamLimits

0x606b,	// (0x0003d292) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfdcc,	// (0x00046ff3) cell_ai5_widget_pane_g_ParamLimits

0xfdcc,	// (0x00046ff3) cell_ai5_widget_pane_g

0x619a,	// (0x0003d3c1) cell_ai5_widget_pane_t10_ParamLimits

0x619a,	// (0x0003d3c1) cell_ai5_widget_pane_t10

0x61b0,	// (0x0003d3d7) grid_ai5_widget_pane_ParamLimits

0x6230,	// (0x0003d457) cell_contacts_ai5_widget_pane_ParamLimits

0x6230,	// (0x0003d457) cell_contacts_ai5_widget_pane

0x63da,	// (0x0003d601) popup_discreet_window_t3_ParamLimits

0x63da,	// (0x0003d601) popup_discreet_window_t3

0x4ebd,	// (0x0003c0e4) popup_fshwr2_char_preview_window_ParamLimits

0x4ebd,	// (0x0003c0e4) popup_fshwr2_char_preview_window

0x95ae,	// (0x000407d5) tmo_note_info_pane_t1

0x95c3,	// (0x000407ea) tmo_note_info_pane_t2

0x95dc,	// (0x00040803) tmo_note_info_pane_t3

0x656d,	// (0x0003d794) tmo_note_info_pane_t4

0x657f,	// (0x0003d7a6) tmo_note_info_pane_t5

0x0004,

0xfe53,	// (0x0004707a) tmo_note_info_pane_t

0x6591,	// (0x0003d7b8) list_tmo_link_pane_ParamLimits

0x659e,	// (0x0003d7c5) scroll_pane_cp20_ParamLimits

0xb412,	// (0x00042639) bg_popup_fep_char_preview_window_cp01

0x65e2,	// (0x0003d809) popup_fshwr2_char_preview_window_t1

0x65f0,	// (0x0003d817) popup_candi_list_indi_window_g1

0x65f9,	// (0x0003d820) bg_cell_contacts_ai5_widget_pane

0x6605,	// (0x0003d82c) cell_contacts_ai5_widget_pane_g1

0x6618,	// (0x0003d83f) cell_contacts_ai5_widget_pane_g2

0x6624,	// (0x0003d84b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe5e,	// (0x00047085) cell_contacts_ai5_widget_pane_g

0x6636,	// (0x0003d85d) cell_contacts_ai5_widget_pane_t1

0xba83,	// (0x00042caa) highlight_cell_shortcut_ai5_widget_pane_cp01

0x66b0,	// (0x0003d8d7) settings_container_pane

0xc46c,	// (0x00043693) listscroll_set_pane_copy1

0xe0b4,	// (0x000452db) scroll_pane_cp121_copy1

0x66bc,	// (0x0003d8e3) set_content_pane_copy1

0x66c4,	// (0x0003d8eb) aid_height_set_list_copy1_ParamLimits

0x66c4,	// (0x0003d8eb) aid_height_set_list_copy1

0xd38d,	// (0x000445b4) aid_size_parent_copy1_ParamLimits

0xd38d,	// (0x000445b4) aid_size_parent_copy1

0x66d0,	// (0x0003d8f7) button_value_adjust_pane_cp6_copy1_ParamLimits

0x66d0,	// (0x0003d8f7) button_value_adjust_pane_cp6_copy1

0xbbe7,	// (0x00042e0e) list_highlight_pane_cp2_copy1_ParamLimits

0xbbe7,	// (0x00042e0e) list_highlight_pane_cp2_copy1

0x66e4,	// (0x0003d90b) list_set_pane_copy1_ParamLimits

0x66e4,	// (0x0003d90b) list_set_pane_copy1

0x664b,	// (0x0003d872) main_pane_set_t1_copy1_ParamLimits

0x664b,	// (0x0003d872) main_pane_set_t1_copy1

0x6685,	// (0x0003d8ac) main_pane_set_t2_copy1_ParamLimits

0x6685,	// (0x0003d8ac) main_pane_set_t2_copy1

0x6791,	// (0x0003d9b8) main_pane_set_t3_copy1

0x679f,	// (0x0003d9c6) main_pane_set_t4_copy1

0x66a4,	// (0x0003d8cb) set_content_pane_g1_copy1_ParamLimits

0x66a4,	// (0x0003d8cb) set_content_pane_g1_copy1

0x67ad,	// (0x0003d9d4) setting_code_pane_copy1

0x67b5,	// (0x0003d9dc) setting_slider_graphic_pane_copy1

0x67b5,	// (0x0003d9dc) setting_slider_pane_copy1

0x67b5,	// (0x0003d9dc) setting_text_pane_copy1

0x67b5,	// (0x0003d9dc) setting_volume_pane_copy1

0x67ad,	// (0x0003d9d4) settings_code_pane_cp2_copy1

0x67bd,	// (0x0003d9e4) settings_code_pane_cp_copy1_ParamLimits

0x67bd,	// (0x0003d9e4) settings_code_pane_cp_copy1

0x67d1,	// (0x0003d9f8) volume_set_pane_copy1

0x67d9,	// (0x0003da00) volume_set_pane_g10_copy1

0x67e1,	// (0x0003da08) volume_set_pane_g1_copy1

0x67e9,	// (0x0003da10) volume_set_pane_g2_copy1

0x67f1,	// (0x0003da18) volume_set_pane_g3_copy1

0x67f9,	// (0x0003da20) volume_set_pane_g4_copy1

0x6801,	// (0x0003da28) volume_set_pane_g5_copy1

0x6809,	// (0x0003da30) volume_set_pane_g6_copy1

0x6811,	// (0x0003da38) volume_set_pane_g7_copy1

0x6819,	// (0x0003da40) volume_set_pane_g8_copy1

0x6821,	// (0x0003da48) volume_set_pane_g9_copy1

0xb482,	// (0x000426a9) bg_set_opt_pane_cp_copy1_ParamLimits

0xb482,	// (0x000426a9) bg_set_opt_pane_cp_copy1

0x6829,	// (0x0003da50) setting_slider_pane_t1_copy1_ParamLimits

0x6829,	// (0x0003da50) setting_slider_pane_t1_copy1

0x6847,	// (0x0003da6e) setting_slider_pane_t2_copy1_ParamLimits

0x6847,	// (0x0003da6e) setting_slider_pane_t2_copy1

0x6861,	// (0x0003da88) setting_slider_pane_t3_copy1_ParamLimits

0x6861,	// (0x0003da88) setting_slider_pane_t3_copy1

0x6879,	// (0x0003daa0) slider_set_pane_copy1_ParamLimits

0x6879,	// (0x0003daa0) slider_set_pane_copy1

0xbade,	// (0x00042d05) set_opt_bg_pane_g1_copy2

0xbae6,	// (0x00042d0d) set_opt_bg_pane_g2_copy2

0x688f,	// (0x0003dab6) set_opt_bg_pane_g3_copy2

0xbaf6,	// (0x00042d1d) set_opt_bg_pane_g4_copy2

0xbafe,	// (0x00042d25) set_opt_bg_pane_g5_copy2

0xbb06,	// (0x00042d2d) set_opt_bg_pane_g6_copy2

0x6899,	// (0x0003dac0) set_opt_bg_pane_g7_copy2

0x68a1,	// (0x0003dac8) set_opt_bg_pane_g8_copy2

0x68ab,	// (0x0003dad2) set_opt_bg_pane_g9_copy2

0x68b5,	// (0x0003dadc) aid_size_touch_slider_mark_copy1_ParamLimits

0x68b5,	// (0x0003dadc) aid_size_touch_slider_mark_copy1

0x68c9,	// (0x0003daf0) slider_set_pane_g1_copy1

0x68d2,	// (0x0003daf9) slider_set_pane_g2_copy1

0xe010,	// (0x00045237) slider_set_pane_g3_copy1_ParamLimits

0xe010,	// (0x00045237) slider_set_pane_g3_copy1

0xe024,	// (0x0004524b) slider_set_pane_g4_copy1_ParamLimits

0xe024,	// (0x0004524b) slider_set_pane_g4_copy1

0xe03c,	// (0x00045263) slider_set_pane_g5_copy1_ParamLimits

0xe03c,	// (0x00045263) slider_set_pane_g5_copy1

0xe010,	// (0x00045237) slider_set_pane_g6_copy1_ParamLimits

0xe010,	// (0x00045237) slider_set_pane_g6_copy1

0x68da,	// (0x0003db01) slider_set_pane_g7_copy1_ParamLimits

0x68da,	// (0x0003db01) slider_set_pane_g7_copy1

0xb426,	// (0x0004264d) bg_set_opt_pane_cp2_copy1

0x68f0,	// (0x0003db17) setting_slider_graphic_pane_g1_copy1

0x68f9,	// (0x0003db20) setting_slider_graphic_pane_t1_copy1

0x6909,	// (0x0003db30) setting_slider_graphic_pane_t2_copy1

0x6919,	// (0x0003db40) slider_set_pane_cp_copy1

0x6929,	// (0x0003db50) input_focus_pane_cp1_copy1

0x6932,	// (0x0003db59) list_set_text_pane_copy1

0x693a,	// (0x0003db61) setting_text_pane_g1_copy1

0x11f3,	// (0x0003841a) set_text_pane_t1_copy1

0x6929,	// (0x0003db50) input_focus_pane_cp2_copy1

0x693a,	// (0x0003db61) setting_code_pane_g1_copy1

0x6943,	// (0x0003db6a) setting_code_pane_t1_copy1

0xd379,	// (0x000445a0) list_set_graphic_pane_copy1

0xb426,	// (0x0004264d) bg_set_opt_pane_cp4_copy1

0xc1f0,	// (0x00043417) list_set_graphic_pane_g1_copy1_ParamLimits

0xc1f0,	// (0x00043417) list_set_graphic_pane_g1_copy1

0x6951,	// (0x0003db78) list_set_graphic_pane_g2_copy1

0xc208,	// (0x0004342f) list_set_graphic_pane_t1_copy1_ParamLimits

0xc208,	// (0x0004342f) list_set_graphic_pane_t1_copy1

0xe747,	// (0x0004596e) rs_clock_indi_pane_g1

0x6959,	// (0x0003db80) rs_clock_indi_pane_t1

0x6967,	// (0x0003db8e) rs_indi_pane

0x696f,	// (0x0003db96) rs_indi_pane_g1

0x6978,	// (0x0003db9f) rs_indi_pane_g2

0x6981,	// (0x0003dba8) rs_indi_pane_g3

0x0002,

0xfe65,	// (0x0004708c) rs_indi_pane_g

0xc46c,	// (0x00043693) bg_popup_preview_window_pane_cp03

0x698a,	// (0x0003dbb1) popup_fep_tooltip_window_t1

0xf104,	// (0x0004632b) popup_note2_window_g2_ParamLimits

0xf104,	// (0x0004632b) popup_note2_window_g2

0x0001,

0x00f1,	// (0x00037318) popup_note2_window_g_ParamLimits

0x00f1,	// (0x00037318) popup_note2_window_g

0x40ca,	// (0x0003b2f1) bg_popup_sub_pane_cp11_ParamLimits

0x40d7,	// (0x0003b2fe) cell_ai3_links_pane_g1_ParamLimits

0x40ee,	// (0x0003b315) cell_ai3_links_pane_t1

0x11f3,	// (0x0003841a) set_text_pane_t1_copy1_ParamLimits

0x9c2f,	// (0x00040e56) cell_graphic_popup_pane_cp2_ParamLimits

0x9c2f,	// (0x00040e56) cell_graphic_popup_pane_cp2

0x95f1,	// (0x00040818) cell_graphic_popup_pane_g1_cp2

0xb7cc,	// (0x000429f3) cell_graphic_popup_pane_g2_cp2

0x6998,	// (0x0003dbbf) cell_graphic_popup_pane_g3_cp2

0x69a0,	// (0x0003dbc7) cell_graphic_popup_pane_t2_cp2

0xb7dd,	// (0x00042a04) grid_highlight_pane_cp3_cp2

0xbd91,	// (0x00042fb8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xba83,	// (0x00042caa) main_tmo_pane_ParamLimits

0xad05,	// (0x00041f2c) popup_tmo_big_image_note_window

0x5ffc,	// (0x0003d223) cell_ai5_widget_list_pane

0x6004,	// (0x0003d22b) cell_ai5_widget_lrg_icon_pane

0x95ae,	// (0x000407d5) tmo_note_info_pane_t1_ParamLimits

0x95c3,	// (0x000407ea) tmo_note_info_pane_t2_ParamLimits

0x95dc,	// (0x00040803) tmo_note_info_pane_t3_ParamLimits

0x656d,	// (0x0003d794) tmo_note_info_pane_t4_ParamLimits

0x657f,	// (0x0003d7a6) tmo_note_info_pane_t5_ParamLimits

0xfe53,	// (0x0004707a) tmo_note_info_pane_t_ParamLimits

0x66b0,	// (0x0003d8d7) settings_container_pane_ParamLimits

0x6921,	// (0x0003db48) indicator_popup_pane_cp5

0x6921,	// (0x0003db48) indicator_popup_pane_cp6

0xd379,	// (0x000445a0) list_set_graphic_pane_copy1_ParamLimits

0xb412,	// (0x00042639) bg_popup_window_pane_cp23

0x69ae,	// (0x0003dbd5) popup_tmo_big_image_note_window_g1

0x69b9,	// (0x0003dbe0) popup_tmo_big_image_note_window_t1

0x69c9,	// (0x0003dbf0) popup_tmo_big_image_note_window_t2

0x69d9,	// (0x0003dc00) popup_tmo_big_image_note_window_t3

0x0002,

0xfe6c,	// (0x00047093) popup_tmo_big_image_note_window_t

0x69e9,	// (0x0003dc10) cell_ai5_widget_lrg_icon_pane_g1

0x69f1,	// (0x0003dc18) cell_ai5_widget_lrg_icon_pane_t1

0x69ff,	// (0x0003dc26) cell_ai5_widget_list_row_pane_ParamLimits

0x69ff,	// (0x0003dc26) cell_ai5_widget_list_row_pane

0x6a18,	// (0x0003dc3f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x6a18,	// (0x0003dc3f) cell_ai5_widget_list_row_pane_g1

0x6a25,	// (0x0003dc4c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x6a25,	// (0x0003dc4c) cell_ai5_widget_list_row_pane_t1

0x6a3d,	// (0x0003dc64) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6a3d,	// (0x0003dc64) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfe73,	// (0x0004709a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe73,	// (0x0004709a) cell_ai5_widget_list_row_pane_t

0xb412,	// (0x00042639) main_fep_vtchi_ss_pane

0x6a74,	// (0x0003dc9b) popup_fep_char_pre_window

0x6a7c,	// (0x0003dca3) popup_fep_ituss_window

0x6a9d,	// (0x0003dcc4) popup_fep_vkbss_window

0x6abc,	// (0x0003dce3) grid_vkbss_keypad_pane_ParamLimits

0x6abc,	// (0x0003dce3) grid_vkbss_keypad_pane

0x6acc,	// (0x0003dcf3) ituss_keypad_pane

0x6ae8,	// (0x0003dd0f) aid_vkbss_key_offset_ParamLimits

0x6ae8,	// (0x0003dd0f) aid_vkbss_key_offset

0x6af4,	// (0x0003dd1b) cell_vkbss_key_pane_ParamLimits

0x6af4,	// (0x0003dd1b) cell_vkbss_key_pane

0xcd2a,	// (0x00043f51) bg_cell_vkbss_key_g1_ParamLimits

0xcd2a,	// (0x00043f51) bg_cell_vkbss_key_g1

0x6b0a,	// (0x0003dd31) cell_vkbss_key_3p_pane_ParamLimits

0x6b0a,	// (0x0003dd31) cell_vkbss_key_3p_pane

0x6b24,	// (0x0003dd4b) cell_vkbss_key_g1_ParamLimits

0x6b24,	// (0x0003dd4b) cell_vkbss_key_g1

0x6b3e,	// (0x0003dd65) cell_vkbss_key_t1_ParamLimits

0x6b3e,	// (0x0003dd65) cell_vkbss_key_t1

0x6b69,	// (0x0003dd90) cell_ituss_key_pane_ParamLimits

0x6b69,	// (0x0003dd90) cell_ituss_key_pane

0x6b7a,	// (0x0003dda1) bg_cell_ituss_key_g1_ParamLimits

0x6b7a,	// (0x0003dda1) bg_cell_ituss_key_g1

0x6b86,	// (0x0003ddad) cell_ituss_key_pane_g1_ParamLimits

0x6b86,	// (0x0003ddad) cell_ituss_key_pane_g1

0x6b9a,	// (0x0003ddc1) cell_ituss_key_pane_g2_ParamLimits

0x6b9a,	// (0x0003ddc1) cell_ituss_key_pane_g2

0x0001,

0xfe7a,	// (0x000470a1) cell_ituss_key_pane_g_ParamLimits

0xfe7a,	// (0x000470a1) cell_ituss_key_pane_g

0x6bc5,	// (0x0003ddec) cell_ituss_key_t1_ParamLimits

0x6bc5,	// (0x0003ddec) cell_ituss_key_t1

0x6bf3,	// (0x0003de1a) cell_ituss_key_t2_ParamLimits

0x6bf3,	// (0x0003de1a) cell_ituss_key_t2

0x6c24,	// (0x0003de4b) cell_ituss_key_t3_ParamLimits

0x6c24,	// (0x0003de4b) cell_ituss_key_t3

0x6c55,	// (0x0003de7c) cell_ituss_key_t4_ParamLimits

0x6c55,	// (0x0003de7c) cell_ituss_key_t4

0x0003,

0xfe7f,	// (0x000470a6) cell_ituss_key_t_ParamLimits

0xfe7f,	// (0x000470a6) cell_ituss_key_t

0x6c86,	// (0x0003dead) cell_vkbss_key_3p_pane_g1

0x6c8e,	// (0x0003deb5) cell_vkbss_key_3p_pane_g2

0x6c96,	// (0x0003debd) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe88,	// (0x000470af) cell_vkbss_key_3p_pane_g

0xb412,	// (0x00042639) bg_popup_fep_char_preview_window_cp02

0x6c9e,	// (0x0003dec5) popup_fep_char_pre_window_t1

0x948b,	// (0x000406b2) main_ai5_sk_pane

0x65f9,	// (0x0003d820) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6605,	// (0x0003d82c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6618,	// (0x0003d83f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6624,	// (0x0003d84b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe5e,	// (0x00047085) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6636,	// (0x0003d85d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xba83,	// (0x00042caa) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x95f9,	// (0x00040820) main_ai5_sk_pane_g1

0xccb1,	// (0x00043ed8) popup_query_code_window_g1

0x6a92,	// (0x0003dcb9) popup_fep_vkb_icf_pane

0x6aa6,	// (0x0003dccd) popup_fep_vtchi_icf_pane

0xba83,	// (0x00042caa) bg_icf_pane

0x6cad,	// (0x0003ded4) list_vkb_icf_pane

0xba83,	// (0x00042caa) bg_icf_pane_cp01

0x6cb9,	// (0x0003dee0) vtchi_icf_list_pane

0x6cca,	// (0x0003def1) list_vkb_icf_pane_t1_ParamLimits

0x6cca,	// (0x0003def1) list_vkb_icf_pane_t1

0x6ce4,	// (0x0003df0b) vtchi_icf_list_pane_t1_ParamLimits

0x6ce4,	// (0x0003df0b) vtchi_icf_list_pane_t1

0x6a7c,	// (0x0003dca3) popup_fep_ituss_window_ParamLimits

0x6aa6,	// (0x0003dccd) popup_fep_vtchi_icf_pane_ParamLimits

0x6acc,	// (0x0003dcf3) ituss_keypad_pane_ParamLimits

0x6adc,	// (0x0003dd03) ituss_sks_pane

0xba83,	// (0x00042caa) bg_icf_pane_ParamLimits

0x6a65,	// (0x0003dc8c) icf_edit_indi_pane_ParamLimits

0x6a65,	// (0x0003dc8c) icf_edit_indi_pane

0x6cad,	// (0x0003ded4) list_vkb_icf_pane_ParamLimits

0xba83,	// (0x00042caa) bg_icf_pane_cp01_ParamLimits

0x6a65,	// (0x0003dc8c) icf_edit_indi_pane_cp01_ParamLimits

0x6a65,	// (0x0003dc8c) icf_edit_indi_pane_cp01

0x6cc1,	// (0x0003dee8) vtchi_query_pane

0xe9b0,	// (0x00045bd7) icf_edit_indi_pane_g1_ParamLimits

0xe9b0,	// (0x00045bd7) icf_edit_indi_pane_g1

0x6d75,	// (0x0003df9c) icf_edit_indi_pane_g2_ParamLimits

0x6d75,	// (0x0003df9c) icf_edit_indi_pane_g2

0x0001,

0xfea0,	// (0x000470c7) icf_edit_indi_pane_g_ParamLimits

0xfea0,	// (0x000470c7) icf_edit_indi_pane_g

0x6d84,	// (0x0003dfab) icf_edit_indi_pane_t1

0x6d0b,	// (0x0003df32) bg_input_focus_pane_cp042

0xb9b0,	// (0x00042bd7) vtchi_button_pane

0x6d14,	// (0x0003df3b) vtchi_query_pane_t1

0x6d22,	// (0x0003df49) vtchi_query_pane_t2

0x6d30,	// (0x0003df57) vtchi_query_pane_t3

0x0002,

0xfe8f,	// (0x000470b6) vtchi_query_pane_t

0xb412,	// (0x00042639) bg_button_pane_cp13

0x6d3e,	// (0x0003df65) vtchi_button_pane_g1

0x6d46,	// (0x0003df6d) ituss_sks_pane_g1

0x6d51,	// (0x0003df78) ituss_sks_pane_g2

0x0001,

0xfe96,	// (0x000470bd) ituss_sks_pane_g

0x6d59,	// (0x0003df80) ituss_sks_pane_t1

0x6d67,	// (0x0003df8e) ituss_sks_pane_t2

0x0001,

0xfe9b,	// (0x000470c2) ituss_sks_pane_t

0xe3f7,	// (0x0004561e) indicator_nsta_pane_cp_g1

0xe400,	// (0x00045627) indicator_nsta_pane_cp_g2

0xe408,	// (0x0004562f) indicator_nsta_pane_cp_g3

0xe410,	// (0x00045637) indicator_nsta_pane_cp_g4

0xe418,	// (0x0004563f) indicator_nsta_pane_cp_g5

0xe420,	// (0x00045647) indicator_nsta_pane_cp_g6

0x0005,

0xfab3,	// (0x00046cda) indicator_nsta_pane_cp_g

0x9238,	// (0x0004045f) cell_graphic2_pane_t2_ParamLimits

0x9238,	// (0x0004045f) cell_graphic2_pane_t2

0x0001,

0xfd55,	// (0x00046f7c) cell_graphic2_pane_t_ParamLimits

0xfd55,	// (0x00046f7c) cell_graphic2_pane_t

0x926e,	// (0x00040495) cell_graphic2_control_pane_t1

0x9b5f,	// (0x00040d86) signal_pane_g3_ParamLimits

0x9b5f,	// (0x00040d86) signal_pane_g3

0x9b73,	// (0x00040d9a) signal_pane_g4_ParamLimits

0x9b73,	// (0x00040d9a) signal_pane_g4

0x6a4f,	// (0x0003dc76) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x6a4f,	// (0x0003dc76) cell_ai5_widget_list_row_pane_t3

0x6bb3,	// (0x0003ddda) cell_ituss_key_pane_t1_ParamLimits

0x6bb3,	// (0x0003ddda) cell_ituss_key_pane_t1

0xc9f3,	// (0x00043c1a) form_field_data_wide_pane_vc_t2_ParamLimits

0xc9f3,	// (0x00043c1a) form_field_data_wide_pane_vc_t2

0xca07,	// (0x00043c2e) form_field_data_wide_pane_vc_t3_ParamLimits

0xca07,	// (0x00043c2e) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x00046a36) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x00046a36) form_field_data_wide_pane_vc_t

0xe124,	// (0x0004534b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xe124,	// (0x0004534b) form_field_slider_wide_pane_vc_t3

0xe1fe,	// (0x00045425) form_field_popup_wide_pane_vc_t2_ParamLimits

0xe1fe,	// (0x00045425) form_field_popup_wide_pane_vc_t2

0xe215,	// (0x0004543c) form_field_popup_wide_pane_vc_t3_ParamLimits

0xe215,	// (0x0004543c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa2,	// (0x00046cc9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x00046cc9) form_field_popup_wide_pane_vc_t

0x94e7,	// (0x0004070e) aid_fshwr2_btn_pane_ParamLimits

0x94f6,	// (0x0004071d) aid_fshwr2_syb_pane_ParamLimits

0x9508,	// (0x0004072f) aid_fshwr2_txt_pane_ParamLimits

0xba83,	// (0x00042caa) fshwr2_bg_pane_ParamLimits

0x9517,	// (0x0004073e) fshwr2_func_candi_pane_ParamLimits

0x9528,	// (0x0004074f) fshwr2_hwr_syb_pane_ParamLimits

0x9543,	// (0x0004076a) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large

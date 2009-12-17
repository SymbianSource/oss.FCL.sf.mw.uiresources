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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000ab0f };

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
0x68aa,	// (0x000113b9) Screen

0x68be,	// (0x000113cd) application_window_ParamLimits

0x68be,	// (0x000113cd) application_window

0x68d8,	// (0x000113e7) screen_g1

0x4cb7,	// (0x0000f7c6) area_bottom_pane_ParamLimits

0x4cb7,	// (0x0000f7c6) area_bottom_pane

0x4d77,	// (0x0000f886) area_top_pane_ParamLimits

0x4d77,	// (0x0000f886) area_top_pane

0x4e15,	// (0x0000f924) main_pane_ParamLimits

0x4e15,	// (0x0000f924) main_pane

0x68e2,	// (0x000113f1) misc_graphics

0x9089,	// (0x00013b98) battery_pane_ParamLimits

0x9089,	// (0x00013b98) battery_pane

0x9df2,	// (0x00014901) bg_status_flat_pane_g8

0x9dfa,	// (0x00014909) bg_status_flat_pane_g9

0x9151,	// (0x00013c60) context_pane_ParamLimits

0x9151,	// (0x00013c60) context_pane

0x9275,	// (0x00013d84) navi_pane_ParamLimits

0x9275,	// (0x00013d84) navi_pane

0x9304,	// (0x00013e13) signal_pane_ParamLimits

0x9304,	// (0x00013e13) signal_pane

0x0008,

0xf8ad,	// (0x0001a3bc) bg_status_flat_pane_g

0x9371,	// (0x00013e80) status_pane_g1_ParamLimits

0x9371,	// (0x00013e80) status_pane_g1

0x9385,	// (0x00013e94) status_pane_g2_ParamLimits

0x9385,	// (0x00013e94) status_pane_g2

0x9391,	// (0x00013ea0) status_pane_g3_ParamLimits

0x9391,	// (0x00013ea0) status_pane_g3

0x0004,

0xf7db,	// (0x0001a2ea) status_pane_g_ParamLimits

0xf7db,	// (0x0001a2ea) status_pane_g

0x93c5,	// (0x00013ed4) title_pane_ParamLimits

0x93c5,	// (0x00013ed4) title_pane

0x9402,	// (0x00013f11) uni_indicator_pane_ParamLimits

0x9402,	// (0x00013f11) uni_indicator_pane

0x8976,	// (0x00013485) bg_list_pane_ParamLimits

0x8976,	// (0x00013485) bg_list_pane

0x8996,	// (0x000134a5) find_pane

0x899e,	// (0x000134ad) listscroll_app_pane_ParamLimits

0x899e,	// (0x000134ad) listscroll_app_pane

0x89aa,	// (0x000134b9) listscroll_form_pane

0x89b2,	// (0x000134c1) listscroll_gen_pane_ParamLimits

0x89b2,	// (0x000134c1) listscroll_gen_pane

0x89aa,	// (0x000134b9) listscroll_set_pane

0x7b57,	// (0x00012666) main_idle_act_pane

0x864a,	// (0x00013159) main_idle_trad_pane

0x864a,	// (0x00013159) main_list_empty_pane

0x89d8,	// (0x000134e7) main_midp_pane

0x89e4,	// (0x000134f3) main_pane_g1_ParamLimits

0x89e4,	// (0x000134f3) main_pane_g1

0x89f2,	// (0x00013501) popup_ai_message_window_ParamLimits

0x89f2,	// (0x00013501) popup_ai_message_window

0x8aaa,	// (0x000135b9) popup_fep_china_uni_window_ParamLimits

0x8aaa,	// (0x000135b9) popup_fep_china_uni_window

0x8b0a,	// (0x00013619) popup_fep_japan_candidate_window_ParamLimits

0x8b0a,	// (0x00013619) popup_fep_japan_candidate_window

0x8b34,	// (0x00013643) popup_fep_japan_predictive_window_ParamLimits

0x8b34,	// (0x00013643) popup_fep_japan_predictive_window

0x8b6a,	// (0x00013679) popup_find_window

0x8b77,	// (0x00013686) popup_grid_graphic_window_ParamLimits

0x8b77,	// (0x00013686) popup_grid_graphic_window

0x8ba5,	// (0x000136b4) popup_large_graphic_colour_window

0x8bcb,	// (0x000136da) popup_menu_window_ParamLimits

0x8bcb,	// (0x000136da) popup_menu_window

0x8d95,	// (0x000138a4) popup_note_image_window

0x8d7f,	// (0x0001388e) popup_note_wait_window_ParamLimits

0x8d7f,	// (0x0001388e) popup_note_wait_window

0x8d7f,	// (0x0001388e) popup_note_window_ParamLimits

0x8d7f,	// (0x0001388e) popup_note_window

0x8dfb,	// (0x0001390a) popup_query_code_window_ParamLimits

0x8dfb,	// (0x0001390a) popup_query_code_window

0x8e11,	// (0x00013920) popup_query_data_code_window_ParamLimits

0x8e11,	// (0x00013920) popup_query_data_code_window

0x8e34,	// (0x00013943) popup_query_data_window_ParamLimits

0x8e34,	// (0x00013943) popup_query_data_window

0x8e56,	// (0x00013965) popup_query_sat_info_window_ParamLimits

0x8e56,	// (0x00013965) popup_query_sat_info_window

0x8e95,	// (0x000139a4) popup_snote_single_graphic_window_ParamLimits

0x8e95,	// (0x000139a4) popup_snote_single_graphic_window

0x8e95,	// (0x000139a4) popup_snote_single_text_window_ParamLimits

0x8e95,	// (0x000139a4) popup_snote_single_text_window

0x8eac,	// (0x000139bb) popup_sub_window_general

0x8ff2,	// (0x00013b01) popup_window_general_ParamLimits

0x8ff2,	// (0x00013b01) popup_window_general

0x900b,	// (0x00013b1a) power_save_pane

0x558c,	// (0x0001009b) control_pane_g1_ParamLimits

0x558c,	// (0x0001009b) control_pane_g1

0x55b5,	// (0x000100c4) control_pane_g2_ParamLimits

0x55b5,	// (0x000100c4) control_pane_g2

0x8917,	// (0x00013426) control_pane_g3_ParamLimits

0x8917,	// (0x00013426) control_pane_g3

0x0007,

0xf7c3,	// (0x0001a2d2) control_pane_g_ParamLimits

0xf7c3,	// (0x0001a2d2) control_pane_g

0x55f5,	// (0x00010104) control_pane_t1_ParamLimits

0x55f5,	// (0x00010104) control_pane_t1

0x5647,	// (0x00010156) control_pane_t2_ParamLimits

0x5647,	// (0x00010156) control_pane_t2

0x0002,

0xf7d4,	// (0x0001a2e3) control_pane_t_ParamLimits

0xf7d4,	// (0x0001a2e3) control_pane_t

0x8838,	// (0x00013347) navi_navi_volume_pane_cp1

0x8841,	// (0x00013350) status_small_icon_pane

0x8849,	// (0x00013358) status_small_pane_g1_ParamLimits

0x8849,	// (0x00013358) status_small_pane_g1

0x887d,	// (0x0001338c) status_small_pane_g2_ParamLimits

0x887d,	// (0x0001338c) status_small_pane_g2

0x8889,	// (0x00013398) status_small_pane_g3_ParamLimits

0x8889,	// (0x00013398) status_small_pane_g3

0x8895,	// (0x000133a4) status_small_pane_g4_ParamLimits

0x8895,	// (0x000133a4) status_small_pane_g4

0x88a1,	// (0x000133b0) status_small_pane_g5_ParamLimits

0x88a1,	// (0x000133b0) status_small_pane_g5

0x88b0,	// (0x000133bf) status_small_pane_g6_ParamLimits

0x88b0,	// (0x000133bf) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001a2c1) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001a2c1) status_small_pane_g

0x88e0,	// (0x000133ef) status_small_pane_t1

0x8903,	// (0x00013412) status_small_wait_pane_ParamLimits

0x8903,	// (0x00013412) status_small_wait_pane

0x8055,	// (0x00012b64) aid_levels_signal_ParamLimits

0x8055,	// (0x00012b64) aid_levels_signal

0x8067,	// (0x00012b76) signal_pane_g1_ParamLimits

0x8067,	// (0x00012b76) signal_pane_g1

0x807c,	// (0x00012b8b) signal_pane_g2_ParamLimits

0x807c,	// (0x00012b8b) signal_pane_g2

0x0001,

0xf747,	// (0x0001a256) signal_pane_g_ParamLimits

0xf747,	// (0x0001a256) signal_pane_g

0x8091,	// (0x00012ba0) context_pane_g1

0x68ec,	// (0x000113fb) title_pane_g1

0x6922,	// (0x00011431) title_pane_t1

0x698a,	// (0x00011499) title_pane_t2

0x69b0,	// (0x000114bf) title_pane_t3

0x0002,

0xf59b,	// (0x0001a0aa) title_pane_t

0x941a,	// (0x00013f29) aid_levels_battery_ParamLimits

0x941a,	// (0x00013f29) aid_levels_battery

0x942e,	// (0x00013f3d) battery_pane_g1_ParamLimits

0x942e,	// (0x00013f3d) battery_pane_g1

0x9444,	// (0x00013f53) battery_pane_g2_ParamLimits

0x9444,	// (0x00013f53) battery_pane_g2

0x0001,

0xf7e6,	// (0x0001a2f5) battery_pane_g_ParamLimits

0xf7e6,	// (0x0001a2f5) battery_pane_g

0xa742,	// (0x00015251) uni_indicator_pane_g1

0xa757,	// (0x00015266) uni_indicator_pane_g2

0xa76d,	// (0x0001527c) uni_indicator_pane_g3

0x0005,

0xf955,	// (0x0001a464) uni_indicator_pane_g

0x84b8,	// (0x00012fc7) navi_icon_pane_ParamLimits

0x84b8,	// (0x00012fc7) navi_icon_pane

0x83ff,	// (0x00012f0e) navi_midp_pane

0x84d4,	// (0x00012fe3) navi_navi_pane

0x84de,	// (0x00012fed) navi_text_pane_ParamLimits

0x84de,	// (0x00012fed) navi_text_pane

0x68d8,	// (0x000113e7) status_small_wait_pane_g1

0x6e0e,	// (0x0001191d) status_small_wait_pane_g2

0x0001,

0xf950,	// (0x0001a45f) status_small_wait_pane_g

0xa455,	// (0x00014f64) navi_navi_icon_text_pane

0xa45d,	// (0x00014f6c) navi_navi_pane_g1_ParamLimits

0xa45d,	// (0x00014f6c) navi_navi_pane_g1

0xa46f,	// (0x00014f7e) navi_navi_pane_g2_ParamLimits

0xa46f,	// (0x00014f7e) navi_navi_pane_g2

0x0001,

0xf91e,	// (0x0001a42d) navi_navi_pane_g_ParamLimits

0xf91e,	// (0x0001a42d) navi_navi_pane_g

0xa481,	// (0x00014f90) navi_navi_tabs_pane

0xa48a,	// (0x00014f99) navi_navi_text_pane

0xa455,	// (0x00014f64) navi_navi_volume_pane

0xa42e,	// (0x00014f3d) navi_text_pane_t1

0xa41f,	// (0x00014f2e) navi_icon_pane_g1

0xa372,	// (0x00014e81) navi_navi_text_pane_t1

0x59ea,	// (0x000104f9) navi_navi_volume_pane_g1

0x59f2,	// (0x00010501) volume_small_pane

0xa2d8,	// (0x00014de7) navi_navi_icon_text_pane_g1

0xa2e0,	// (0x00014def) navi_navi_icon_text_pane_t1

0x84d4,	// (0x00012fe3) navi_tabs_2_long_pane

0x84d4,	// (0x00012fe3) navi_tabs_2_pane

0x84d4,	// (0x00012fe3) navi_tabs_3_long_pane

0x84d4,	// (0x00012fe3) navi_tabs_3_pane

0x84d4,	// (0x00012fe3) navi_tabs_4_pane

0x59ca,	// (0x000104d9) tabs_2_active_pane_ParamLimits

0x59ca,	// (0x000104d9) tabs_2_active_pane

0x59da,	// (0x000104e9) tabs_2_passive_pane_ParamLimits

0x59da,	// (0x000104e9) tabs_2_passive_pane

0x5998,	// (0x000104a7) tabs_3_active_pane_ParamLimits

0x5998,	// (0x000104a7) tabs_3_active_pane

0x59a8,	// (0x000104b7) tabs_3_passive_pane_ParamLimits

0x59a8,	// (0x000104b7) tabs_3_passive_pane

0x59b9,	// (0x000104c8) tabs_3_passive_pane_cp_ParamLimits

0x59b9,	// (0x000104c8) tabs_3_passive_pane_cp

0x594c,	// (0x0001045b) tabs_4_active_pane_ParamLimits

0x594c,	// (0x0001045b) tabs_4_active_pane

0x595f,	// (0x0001046e) tabs_4_passive_pane_ParamLimits

0x595f,	// (0x0001046e) tabs_4_passive_pane

0x5970,	// (0x0001047f) tabs_4_passive_pane_cp_ParamLimits

0x5970,	// (0x0001047f) tabs_4_passive_pane_cp

0x5981,	// (0x00010490) tabs_4_passive_pane_cp2_ParamLimits

0x5981,	// (0x00010490) tabs_4_passive_pane_cp2

0x5928,	// (0x00010437) tabs_2_long_active_pane_ParamLimits

0x5928,	// (0x00010437) tabs_2_long_active_pane

0x593a,	// (0x00010449) tabs_2_long_passive_pane_ParamLimits

0x593a,	// (0x00010449) tabs_2_long_passive_pane

0x58e9,	// (0x000103f8) tabs_3_long_active_pane_ParamLimits

0x58e9,	// (0x000103f8) tabs_3_long_active_pane

0x58fc,	// (0x0001040b) tabs_3_long_passive_pane_ParamLimits

0x58fc,	// (0x0001040b) tabs_3_long_passive_pane

0x5915,	// (0x00010424) tabs_3_long_passive_pane_cp_ParamLimits

0x5915,	// (0x00010424) tabs_3_long_passive_pane_cp

0x588f,	// (0x0001039e) volume_small_pane_g1

0x5898,	// (0x000103a7) volume_small_pane_g2

0x58a1,	// (0x000103b0) volume_small_pane_g3

0x58aa,	// (0x000103b9) volume_small_pane_g4

0x58b3,	// (0x000103c2) volume_small_pane_g5

0x58bc,	// (0x000103cb) volume_small_pane_g6

0x58c5,	// (0x000103d4) volume_small_pane_g7

0x58ce,	// (0x000103dd) volume_small_pane_g8

0x58d7,	// (0x000103e6) volume_small_pane_g9

0x58e0,	// (0x000103ef) volume_small_pane_g10

0x0009,

0xf8ea,	// (0x0001a3f9) volume_small_pane_g

0x69c2,	// (0x000114d1) bg_active_tab_pane_cp2_ParamLimits

0x69c2,	// (0x000114d1) bg_active_tab_pane_cp2

0x69d0,	// (0x000114df) tabs_3_active_pane_g1

0x69d8,	// (0x000114e7) tabs_3_active_pane_t1

0x69c2,	// (0x000114d1) bg_passive_tab_pane_cp2_ParamLimits

0x69c2,	// (0x000114d1) bg_passive_tab_pane_cp2

0x69d0,	// (0x000114df) tabs_3_passive_pane_g1

0x69d8,	// (0x000114e7) tabs_3_passive_pane_t1

0x69c2,	// (0x000114d1) bg_active_tab_pane_cp3_ParamLimits

0x69c2,	// (0x000114d1) bg_active_tab_pane_cp3

0x69ea,	// (0x000114f9) tabs_4_active_pane_g1

0x69f2,	// (0x00011501) tabs_4_active_pane_t1

0x69c2,	// (0x000114d1) bg_passive_tab_pane_cp3_ParamLimits

0x69c2,	// (0x000114d1) bg_passive_tab_pane_cp3

0x69ea,	// (0x000114f9) tabs_4_1_passive_pane_g1

0x69f2,	// (0x00011501) tabs_4_1_passive_pane_t1

0x89d8,	// (0x000134e7) list_highlight_pane_cp2

0xa9f9,	// (0x00015508) list_set_pane_ParamLimits

0xa9f9,	// (0x00015508) list_set_pane

0xaac1,	// (0x000155d0) main_pane_set_t1_ParamLimits

0xaac1,	// (0x000155d0) main_pane_set_t1

0xaae1,	// (0x000155f0) main_pane_set_t2_ParamLimits

0xaae1,	// (0x000155f0) main_pane_set_t2

0xaaf5,	// (0x00015604) main_pane_set_t3_ParamLimits

0xaaf5,	// (0x00015604) main_pane_set_t3

0xab09,	// (0x00015618) main_pane_set_t4_ParamLimits

0xab09,	// (0x00015618) main_pane_set_t4

0x0003,

0xf9ba,	// (0x0001a4c9) main_pane_set_t_ParamLimits

0xf9ba,	// (0x0001a4c9) main_pane_set_t

0xab29,	// (0x00015638) setting_code_pane

0xab33,	// (0x00015642) setting_slider_graphic_pane

0xab33,	// (0x00015642) setting_slider_pane

0xab33,	// (0x00015642) setting_text_pane

0xab33,	// (0x00015642) setting_volume_pane

0x506c,	// (0x0000fb7b) volume_set_pane

0x69c2,	// (0x000114d1) bg_set_opt_pane_cp

0x5076,	// (0x0000fb85) setting_slider_pane_t1

0x508c,	// (0x0000fb9b) setting_slider_pane_t2

0x50a6,	// (0x0000fbb5) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001a0b1) setting_slider_pane_t

0x50be,	// (0x0000fbcd) slider_set_pane

0x68e2,	// (0x000113f1) bg_set_opt_pane_cp2

0x6a04,	// (0x00011513) setting_slider_graphic_pane_g1

0x50d4,	// (0x0000fbe3) setting_slider_graphic_pane_t1

0x50e4,	// (0x0000fbf3) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001a0b8) setting_slider_graphic_pane_t

0x50f4,	// (0x0000fc03) slider_set_pane_cp

0x68e2,	// (0x000113f1) input_focus_pane_cp1

0xa9ba,	// (0x000154c9) list_set_text_pane

0x68d8,	// (0x000113e7) setting_text_pane_g1

0x68e2,	// (0x000113f1) input_focus_pane_cp2

0x68d8,	// (0x000113e7) setting_code_pane_g1

0x6a0d,	// (0x0001151c) setting_code_pane_t1

0x6a1b,	// (0x0001152a) set_text_pane_t1_ParamLimits

0x6a1b,	// (0x0001152a) set_text_pane_t1

0x793a,	// (0x00012449) set_opt_bg_pane_g1

0x7942,	// (0x00012451) set_opt_bg_pane_g2

0xa992,	// (0x000154a1) set_opt_bg_pane_g3

0x7952,	// (0x00012461) set_opt_bg_pane_g4

0x795a,	// (0x00012469) set_opt_bg_pane_g5

0x7962,	// (0x00012471) set_opt_bg_pane_g6

0xa99c,	// (0x000154ab) set_opt_bg_pane_g7

0xa9a6,	// (0x000154b5) set_opt_bg_pane_g8

0xa9b0,	// (0x000154bf) set_opt_bg_pane_g9

0x0008,

0xf9a7,	// (0x0001a4b6) set_opt_bg_pane_g

0xa985,	// (0x00015494) slider_set_pane_g1

0x5a73,	// (0x00010582) slider_set_pane_g2

0x0006,

0xf998,	// (0x0001a4a7) slider_set_pane_g

0x59fb,	// (0x0001050a) volume_set_pane_g1

0x5a05,	// (0x00010514) volume_set_pane_g2

0x5a0f,	// (0x0001051e) volume_set_pane_g3

0x5a19,	// (0x00010528) volume_set_pane_g4

0x5a23,	// (0x00010532) volume_set_pane_g5

0x5a2d,	// (0x0001053c) volume_set_pane_g6

0x5a37,	// (0x00010546) volume_set_pane_g7

0x5a41,	// (0x00010550) volume_set_pane_g8

0x5a4b,	// (0x0001055a) volume_set_pane_g9

0x5a55,	// (0x00010564) volume_set_pane_g10

0x0009,

0xf970,	// (0x0001a47f) volume_set_pane_g

0x6a35,	// (0x00011544) indicator_pane_ParamLimits

0x6a35,	// (0x00011544) indicator_pane

0x6a41,	// (0x00011550) main_idle_pane_g2_ParamLimits

0x6a41,	// (0x00011550) main_idle_pane_g2

0x6a69,	// (0x00011578) main_pane_idle_g1_ParamLimits

0x6a69,	// (0x00011578) main_pane_idle_g1

0x6a77,	// (0x00011586) popup_clock_digital_analogue_window_ParamLimits

0x6a77,	// (0x00011586) popup_clock_digital_analogue_window

0x6a8e,	// (0x0001159d) soft_indicator_pane_ParamLimits

0x6a8e,	// (0x0001159d) soft_indicator_pane

0x6a9c,	// (0x000115ab) wallpaper_pane_ParamLimits

0x6a9c,	// (0x000115ab) wallpaper_pane

0x68d8,	// (0x000113e7) wallpaper_pane_g1

0x6ab0,	// (0x000115bf) indicator_pane_g1_ParamLimits

0x6ab0,	// (0x000115bf) indicator_pane_g1

0xae58,	// (0x00015967) navi_navi_icon_text_pane_srt_g1

0x6acb,	// (0x000115da) soft_indicator_pane_t1

0x6ae5,	// (0x000115f4) aid_ps_area_pane

0x6af6,	// (0x00011605) aid_ps_clock_pane

0x6b04,	// (0x00011613) aid_ps_indicator_pane

0x6b10,	// (0x0001161f) indicator_ps_pane_ParamLimits

0x6b10,	// (0x0001161f) indicator_ps_pane

0x6b1f,	// (0x0001162e) power_save_pane_g1_ParamLimits

0x6b1f,	// (0x0001162e) power_save_pane_g1

0x6b2b,	// (0x0001163a) power_save_pane_g2_ParamLimits

0x6b2b,	// (0x0001163a) power_save_pane_g2

0x4c6b,	// (0x0000f77a) aid_navinavi_width_pane

0x6ae5,	// (0x000115f4) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001a0bd) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001a0bd) power_save_pane_g

0x6b39,	// (0x00011648) power_save_pane_t1_ParamLimits

0x6b39,	// (0x00011648) power_save_pane_t1

0x6af6,	// (0x00011605) aid_ps_clock_pane_ParamLimits

0x6b04,	// (0x00011613) aid_ps_indicator_pane_ParamLimits

0x6b4b,	// (0x0001165a) power_save_pane_t4_ParamLimits

0x6b4b,	// (0x0001165a) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001a0c2) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001a0c2) power_save_pane_t

0x6b75,	// (0x00011684) power_save_t3_ParamLimits

0x6b75,	// (0x00011684) power_save_t3

0x6b60,	// (0x0001166f) power_save_t2_ParamLimits

0x6b60,	// (0x0001166f) power_save_t2

0x6b8a,	// (0x00011699) indicator_ps_pane_g1

0x6b93,	// (0x000116a2) ai_gene_pane_ParamLimits

0x6b93,	// (0x000116a2) ai_gene_pane

0x6b9f,	// (0x000116ae) ai_links_pane_ParamLimits

0x6b9f,	// (0x000116ae) ai_links_pane

0x6bab,	// (0x000116ba) indicator_pane_cp1_ParamLimits

0x6bab,	// (0x000116ba) indicator_pane_cp1

0x6bb7,	// (0x000116c6) main_pane_idle_g1_cp_ParamLimits

0x6bb7,	// (0x000116c6) main_pane_idle_g1_cp

0x6bc3,	// (0x000116d2) popup_ai_links_title_window

0x6bcc,	// (0x000116db) soft_indicator_pane_cp1_ParamLimits

0x6bcc,	// (0x000116db) soft_indicator_pane_cp1

0xa730,	// (0x0001523f) ai_links_pane_g1

0xa739,	// (0x00015248) grid_ai_links_pane

0xa715,	// (0x00015224) ai_gene_pane_1

0xa71e,	// (0x0001522d) ai_gene_pane_2

0xa727,	// (0x00015236) list_highlight_pane_cp4

0xa6f5,	// (0x00015204) cell_ai_link_pane_ParamLimits

0xa6f5,	// (0x00015204) cell_ai_link_pane

0xa6ed,	// (0x000151fc) cell_ai_link_pane_g1

0x6e0e,	// (0x0001191d) cell_ai_link_pane_g2

0x0001,

0xf94b,	// (0x0001a45a) cell_ai_link_pane_g

0x68e2,	// (0x000113f1) grid_highlight_cp2

0x68e2,	// (0x000113f1) bg_popup_sub_pane_cp1

0x6be6,	// (0x000116f5) popup_ai_links_title_window_t1

0xa639,	// (0x00015148) ai_gene_pane_1_g1_ParamLimits

0xa639,	// (0x00015148) ai_gene_pane_1_g1

0xa645,	// (0x00015154) ai_gene_pane_1_g2_ParamLimits

0xa645,	// (0x00015154) ai_gene_pane_1_g2

0x0001,

0xf941,	// (0x0001a450) ai_gene_pane_1_g_ParamLimits

0xf941,	// (0x0001a450) ai_gene_pane_1_g

0xa652,	// (0x00015161) ai_gene_pane_1_t1_ParamLimits

0xa652,	// (0x00015161) ai_gene_pane_1_t1

0xa686,	// (0x00015195) grid_ai_soft_ind_pane

0xa624,	// (0x00015133) ai_gene_pane_2_t1_ParamLimits

0xa624,	// (0x00015133) ai_gene_pane_2_t1

0x6bf5,	// (0x00011704) main_pane_empty_t1_ParamLimits

0x6bf5,	// (0x00011704) main_pane_empty_t1

0x6c0d,	// (0x0001171c) main_pane_empty_t2_ParamLimits

0x6c0d,	// (0x0001171c) main_pane_empty_t2

0x6c22,	// (0x00011731) main_pane_empty_t3_ParamLimits

0x6c22,	// (0x00011731) main_pane_empty_t3

0x6c34,	// (0x00011743) main_pane_empty_t4_ParamLimits

0x6c34,	// (0x00011743) main_pane_empty_t4

0x6c46,	// (0x00011755) main_pane_empty_t5_ParamLimits

0x6c46,	// (0x00011755) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001a0c7) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001a0c7) main_pane_empty_t

0x7a18,	// (0x00012527) bg_popup_window_pane_ParamLimits

0x7a18,	// (0x00012527) bg_popup_window_pane

0xa380,	// (0x00014e8f) find_popup_pane_cp2_ParamLimits

0xa380,	// (0x00014e8f) find_popup_pane_cp2

0xa38c,	// (0x00014e9b) heading_pane_ParamLimits

0xa38c,	// (0x00014e9b) heading_pane

0x68e2,	// (0x000113f1) bg_popup_sub_pane

0xa2fa,	// (0x00014e09) bg_popup_window_pane_g1_ParamLimits

0xa2fa,	// (0x00014e09) bg_popup_window_pane_g1

0xa306,	// (0x00014e15) bg_popup_window_pane_g2_ParamLimits

0xa306,	// (0x00014e15) bg_popup_window_pane_g2

0xa312,	// (0x00014e21) bg_popup_window_pane_g3_ParamLimits

0xa312,	// (0x00014e21) bg_popup_window_pane_g3

0xa31e,	// (0x00014e2d) bg_popup_window_pane_g4_ParamLimits

0xa31e,	// (0x00014e2d) bg_popup_window_pane_g4

0xa32a,	// (0x00014e39) bg_popup_window_pane_g5_ParamLimits

0xa32a,	// (0x00014e39) bg_popup_window_pane_g5

0xa336,	// (0x00014e45) bg_popup_window_pane_g6_ParamLimits

0xa336,	// (0x00014e45) bg_popup_window_pane_g6

0xa342,	// (0x00014e51) bg_popup_window_pane_g7_ParamLimits

0xa342,	// (0x00014e51) bg_popup_window_pane_g7

0xa34e,	// (0x00014e5d) bg_popup_window_pane_g8_ParamLimits

0xa34e,	// (0x00014e5d) bg_popup_window_pane_g8

0xa35a,	// (0x00014e69) bg_popup_window_pane_g9_ParamLimits

0xa35a,	// (0x00014e69) bg_popup_window_pane_g9

0xa366,	// (0x00014e75) bg_popup_window_pane_g10_ParamLimits

0xa366,	// (0x00014e75) bg_popup_window_pane_g10

0x0009,

0xf909,	// (0x0001a418) bg_popup_window_pane_g_ParamLimits

0xf909,	// (0x0001a418) bg_popup_window_pane_g

0xa28f,	// (0x00014d9e) bg_popup_heading_pane_ParamLimits

0xa28f,	// (0x00014d9e) bg_popup_heading_pane

0x5afb,	// (0x0001060a) tabs_4_passive_pane_cp_srt_ParamLimits

0x5afb,	// (0x0001060a) tabs_4_passive_pane_cp_srt

0x5b0d,	// (0x0001061c) tabs_4_passive_pane_srt_ParamLimits

0xa2a3,	// (0x00014db2) heading_pane_g2

0x5b0d,	// (0x0001061c) tabs_4_passive_pane_srt

0x89d8,	// (0x000134e7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x89d8,	// (0x000134e7) bg_passive_tab_pane_cp3_srt

0xa2ab,	// (0x00014dba) heading_pane_t1_ParamLimits

0xa2ab,	// (0x00014dba) heading_pane_t1

0xa2c2,	// (0x00014dd1) heading_pane_t2_ParamLimits

0xa2c2,	// (0x00014dd1) heading_pane_t2

0x0001,

0xf904,	// (0x0001a413) heading_pane_t_ParamLimits

0xf904,	// (0x0001a413) heading_pane_t

0x9dba,	// (0x000148c9) bg_popup_heading_pane_g1

0x9e69,	// (0x00014978) bg_popup_heading_pane_g2

0x9e73,	// (0x00014982) bg_popup_heading_pane_g3

0x9e7d,	// (0x0001498c) bg_popup_heading_pane_g4

0x9e87,	// (0x00014996) bg_popup_heading_pane_g5

0x9e91,	// (0x000149a0) bg_popup_heading_pane_g6

0x9e99,	// (0x000149a8) bg_popup_heading_pane_g7

0x9ea1,	// (0x000149b0) bg_popup_heading_pane_g8

0x9eab,	// (0x000149ba) bg_popup_heading_pane_g9

0x0008,

0xf8c0,	// (0x0001a3cf) bg_popup_heading_pane_g

0x954a,	// (0x00014059) bg_popup_sub_pane_g1

0x955a,	// (0x00014069) bg_popup_sub_pane_g2

0x9552,	// (0x00014061) bg_popup_sub_pane_g3

0x956a,	// (0x00014079) bg_popup_sub_pane_g4

0x9562,	// (0x00014071) bg_popup_sub_pane_g5

0x9572,	// (0x00014081) bg_popup_sub_pane_g6

0x957a,	// (0x00014089) bg_popup_sub_pane_g7

0x958a,	// (0x00014099) bg_popup_sub_pane_g8

0x9582,	// (0x00014091) bg_popup_sub_pane_g9

0x0008,

0xf89a,	// (0x0001a3a9) bg_popup_sub_pane_g

0x6c58,	// (0x00011767) bg_popup_window_pane_cp5_ParamLimits

0x6c58,	// (0x00011767) bg_popup_window_pane_cp5

0x6c74,	// (0x00011783) popup_note_window_g1_ParamLimits

0x6c74,	// (0x00011783) popup_note_window_g1

0x6c80,	// (0x0001178f) popup_note_window_t1_ParamLimits

0x6c80,	// (0x0001178f) popup_note_window_t1

0x6c96,	// (0x000117a5) popup_note_window_t2_ParamLimits

0x6c96,	// (0x000117a5) popup_note_window_t2

0x6cac,	// (0x000117bb) popup_note_window_t3_ParamLimits

0x6cac,	// (0x000117bb) popup_note_window_t3

0x6cc2,	// (0x000117d1) popup_note_window_t4_ParamLimits

0x6cc2,	// (0x000117d1) popup_note_window_t4

0x6cea,	// (0x000117f9) popup_note_window_t5_ParamLimits

0x6cea,	// (0x000117f9) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001a0d2) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001a0d2) popup_note_window_t

0x6d0e,	// (0x0001181d) bg_popup_window_pane_cp6_ParamLimits

0x6d0e,	// (0x0001181d) bg_popup_window_pane_cp6

0x9d36,	// (0x00014845) popup_note_image_window_g1_ParamLimits

0x9d36,	// (0x00014845) popup_note_image_window_g1

0x9d42,	// (0x00014851) popup_note_image_window_g2_ParamLimits

0x9d42,	// (0x00014851) popup_note_image_window_g2

0x0001,

0xf88e,	// (0x0001a39d) popup_note_image_window_g_ParamLimits

0xf88e,	// (0x0001a39d) popup_note_image_window_g

0x9d5b,	// (0x0001486a) popup_note_image_window_t1_ParamLimits

0x9d5b,	// (0x0001486a) popup_note_image_window_t1

0x9d74,	// (0x00014883) popup_note_image_window_t2_ParamLimits

0x9d74,	// (0x00014883) popup_note_image_window_t2

0x9d8d,	// (0x0001489c) popup_note_image_window_t3_ParamLimits

0x9d8d,	// (0x0001489c) popup_note_image_window_t3

0x0002,

0xf893,	// (0x0001a3a2) popup_note_image_window_t_ParamLimits

0xf893,	// (0x0001a3a2) popup_note_image_window_t

0x9bf6,	// (0x00014705) bg_popup_window_pane_cp7_ParamLimits

0x9bf6,	// (0x00014705) bg_popup_window_pane_cp7

0x9c26,	// (0x00014735) popup_note_wait_window_g1_ParamLimits

0x9c26,	// (0x00014735) popup_note_wait_window_g1

0x9c32,	// (0x00014741) popup_note_wait_window_g2_ParamLimits

0x9c32,	// (0x00014741) popup_note_wait_window_g2

0x0002,

0xf87c,	// (0x0001a38b) popup_note_wait_window_g_ParamLimits

0xf87c,	// (0x0001a38b) popup_note_wait_window_g

0x9c4a,	// (0x00014759) popup_note_wait_window_t1_ParamLimits

0x9c4a,	// (0x00014759) popup_note_wait_window_t1

0x9c71,	// (0x00014780) popup_note_wait_window_t2_ParamLimits

0x9c71,	// (0x00014780) popup_note_wait_window_t2

0x9c8f,	// (0x0001479e) popup_note_wait_window_t3_ParamLimits

0x9c8f,	// (0x0001479e) popup_note_wait_window_t3

0x9ca2,	// (0x000147b1) popup_note_wait_window_t4_ParamLimits

0x9ca2,	// (0x000147b1) popup_note_wait_window_t4

0x0004,

0xf883,	// (0x0001a392) popup_note_wait_window_t_ParamLimits

0xf883,	// (0x0001a392) popup_note_wait_window_t

0x9cc7,	// (0x000147d6) wait_bar_pane_ParamLimits

0x9cc7,	// (0x000147d6) wait_bar_pane

0x68e2,	// (0x000113f1) wait_anim_pane

0x68e2,	// (0x000113f1) wait_border_pane

0x68d8,	// (0x000113e7) wait_anim_pane_g1

0x68d8,	// (0x000113e7) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001a251) wait_anim_pane_g

0x9b9a,	// (0x000146a9) wait_border_pane_g1

0x9ba5,	// (0x000146b4) wait_border_pane_g2

0x9bae,	// (0x000146bd) wait_border_pane_g3

0x0002,

0xf875,	// (0x0001a384) wait_border_pane_g

0x9af6,	// (0x00014605) bg_popup_window_pane_cp16_ParamLimits

0x9af6,	// (0x00014605) bg_popup_window_pane_cp16

0x9b04,	// (0x00014613) indicator_popup_pane_cp4_ParamLimits

0x9b04,	// (0x00014613) indicator_popup_pane_cp4

0x9b18,	// (0x00014627) popup_query_data_window_t1_ParamLimits

0x9b18,	// (0x00014627) popup_query_data_window_t1

0x9b2a,	// (0x00014639) popup_query_data_window_t2_ParamLimits

0x9b2a,	// (0x00014639) popup_query_data_window_t2

0x9b43,	// (0x00014652) popup_query_data_window_t3_ParamLimits

0x9b43,	// (0x00014652) popup_query_data_window_t3

0x0002,

0xf86e,	// (0x0001a37d) popup_query_data_window_t_ParamLimits

0xf86e,	// (0x0001a37d) popup_query_data_window_t

0x9b5d,	// (0x0001466c) query_popup_data_pane_ParamLimits

0x9b5d,	// (0x0001466c) query_popup_data_pane

0x9b71,	// (0x00014680) query_popup_data_pane_cp1_ParamLimits

0x9b71,	// (0x00014680) query_popup_data_pane_cp1

0x6d0e,	// (0x0001181d) bg_popup_window_pane_cp10_ParamLimits

0x6d0e,	// (0x0001181d) bg_popup_window_pane_cp10

0x9a59,	// (0x00014568) indicator_popup_pane_ParamLimits

0x9a59,	// (0x00014568) indicator_popup_pane

0x6d6f,	// (0x0001187e) popup_query_code_window_t1_ParamLimits

0x6d6f,	// (0x0001187e) popup_query_code_window_t1

0x9a71,	// (0x00014580) popup_query_code_window_t2_ParamLimits

0x9a71,	// (0x00014580) popup_query_code_window_t2

0x9aaf,	// (0x000145be) popup_query_code_window_t3_ParamLimits

0x9aaf,	// (0x000145be) popup_query_code_window_t3

0x0002,

0xf867,	// (0x0001a376) popup_query_code_window_t_ParamLimits

0xf867,	// (0x0001a376) popup_query_code_window_t

0x9ade,	// (0x000145ed) query_popup_pane_ParamLimits

0x9ade,	// (0x000145ed) query_popup_pane

0x6d0e,	// (0x0001181d) bg_popup_window_pane_cp15_ParamLimits

0x6d0e,	// (0x0001181d) bg_popup_window_pane_cp15

0x6d2e,	// (0x0001183d) indicator_popup_pane_cp1_ParamLimits

0x6d2e,	// (0x0001183d) indicator_popup_pane_cp1

0x6d41,	// (0x00011850) indicator_popup_pane_cp2_ParamLimits

0x6d41,	// (0x00011850) indicator_popup_pane_cp2

0x6d5c,	// (0x0001186b) popup_query_data_code_window_g1_ParamLimits

0x6d5c,	// (0x0001186b) popup_query_data_code_window_g1

0x6d6f,	// (0x0001187e) popup_query_data_code_window_t1_ParamLimits

0x6d6f,	// (0x0001187e) popup_query_data_code_window_t1

0x6d81,	// (0x00011890) popup_query_data_code_window_t2_ParamLimits

0x6d81,	// (0x00011890) popup_query_data_code_window_t2

0x6d93,	// (0x000118a2) popup_query_data_code_window_t3_ParamLimits

0x6d93,	// (0x000118a2) popup_query_data_code_window_t3

0x6da9,	// (0x000118b8) popup_query_data_code_window_t4_ParamLimits

0x6da9,	// (0x000118b8) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001a0dd) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001a0dd) popup_query_data_code_window_t

0x579b,	// (0x000102aa) list_single_midp_graphic_pane_g3

0x6dc3,	// (0x000118d2) query_popup_data_pane_cp2_ParamLimits

0x6dd6,	// (0x000118e5) query_popup_pane_cp2_ParamLimits

0x6dd6,	// (0x000118e5) query_popup_pane_cp2

0x68e2,	// (0x000113f1) bg_popup_window_pane_cp11

0x9a2d,	// (0x0001453c) heading_pane_cp5

0x6ec6,	// (0x000119d5) listscroll_popup_info_pane

0x68e2,	// (0x000113f1) input_focus_pane_cp3

0x6df1,	// (0x00011900) query_popup_pane_t1

0x6dff,	// (0x0001190e) list_popup_info_pane_ParamLimits

0x6dff,	// (0x0001190e) list_popup_info_pane

0x6e0e,	// (0x0001191d) listscroll_popup_info_pane_g1

0x6e16,	// (0x00011925) scroll_pane_cp7

0x6e20,	// (0x0001192f) popup_info_list_pane_t1_ParamLimits

0x6e20,	// (0x0001192f) popup_info_list_pane_t1

0x6e3a,	// (0x00011949) popup_info_list_pane_t2_ParamLimits

0x6e3a,	// (0x00011949) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001a0e6) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001a0e6) popup_info_list_pane_t

0x68e2,	// (0x000113f1) bg_popup_window_pane_cp12

0xae72,	// (0x00015981) find_popup_pane

0x69c2,	// (0x000114d1) bg_popup_window_pane_cp3

0x6e54,	// (0x00011963) heading_pane_cp3

0x6e60,	// (0x0001196f) listscroll_popup_graphic_pane

0x68e2,	// (0x000113f1) bg_popup_window_pane_cp4

0x6ebc,	// (0x000119cb) heading_pane_cp4

0x6ec6,	// (0x000119d5) listscroll_popup_colour_pane

0x6ece,	// (0x000119dd) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6ece,	// (0x000119dd) cell_large_graphic_colour_none_popup_pane

0x6ee2,	// (0x000119f1) grid_large_graphic_colour_popup_pane_ParamLimits

0x6ee2,	// (0x000119f1) grid_large_graphic_colour_popup_pane

0x6f0e,	// (0x00011a1d) listscroll_popup_colour_pane_g1_ParamLimits

0x6f0e,	// (0x00011a1d) listscroll_popup_colour_pane_g1

0x6f25,	// (0x00011a34) listscroll_popup_colour_pane_g2_ParamLimits

0x6f25,	// (0x00011a34) listscroll_popup_colour_pane_g2

0x6f3c,	// (0x00011a4b) listscroll_popup_colour_pane_g3_ParamLimits

0x6f3c,	// (0x00011a4b) listscroll_popup_colour_pane_g3

0x6f4c,	// (0x00011a5b) listscroll_popup_colour_pane_g4_ParamLimits

0x6f4c,	// (0x00011a5b) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001a0eb) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001a0eb) listscroll_popup_colour_pane_g

0x6f60,	// (0x00011a6f) scroll_pane_cp6_ParamLimits

0x6f60,	// (0x00011a6f) scroll_pane_cp6

0x6f72,	// (0x00011a81) cell_large_graphic_colour_popup_pane_ParamLimits

0x6f72,	// (0x00011a81) cell_large_graphic_colour_popup_pane

0x6f97,	// (0x00011aa6) cell_large_graphic_colour_none_popup_pane_t1

0x68e2,	// (0x000113f1) grid_highlight_pane_cp5

0x6fa6,	// (0x00011ab5) cell_large_graphic_colour_popup_pane_g1

0x6fae,	// (0x00011abd) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001a0f4) cell_large_graphic_colour_popup_pane_g

0x6fb6,	// (0x00011ac5) cell_large_graphic_colour_popup_pane_g2_copy1

0x6fbf,	// (0x00011ace) grid_highlight_pane_cp4

0x6fc7,	// (0x00011ad6) bg_popup_window_pane_cp8_ParamLimits

0x6fc7,	// (0x00011ad6) bg_popup_window_pane_cp8

0x6fe2,	// (0x00011af1) popup_snote_single_text_window_g1_ParamLimits

0x6fe2,	// (0x00011af1) popup_snote_single_text_window_g1

0x6ff4,	// (0x00011b03) popup_snote_single_text_window_t1_ParamLimits

0x6ff4,	// (0x00011b03) popup_snote_single_text_window_t1

0x7007,	// (0x00011b16) popup_snote_single_text_window_t2_ParamLimits

0x7007,	// (0x00011b16) popup_snote_single_text_window_t2

0x701a,	// (0x00011b29) popup_snote_single_text_window_t3_ParamLimits

0x701a,	// (0x00011b29) popup_snote_single_text_window_t3

0x7053,	// (0x00011b62) popup_snote_single_text_window_t4_ParamLimits

0x7053,	// (0x00011b62) popup_snote_single_text_window_t4

0x7087,	// (0x00011b96) popup_snote_single_text_window_t5_ParamLimits

0x7087,	// (0x00011b96) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001a0f9) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001a0f9) popup_snote_single_text_window_t

0x70b6,	// (0x00011bc5) bg_popup_window_pane_cp9_ParamLimits

0x70b6,	// (0x00011bc5) bg_popup_window_pane_cp9

0x6fe2,	// (0x00011af1) popup_snote_single_graphic_window_g1_ParamLimits

0x6fe2,	// (0x00011af1) popup_snote_single_graphic_window_g1

0x70c4,	// (0x00011bd3) popup_snote_single_graphic_window_g2_ParamLimits

0x70c4,	// (0x00011bd3) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001a104) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001a104) popup_snote_single_graphic_window_g

0x70d0,	// (0x00011bdf) popup_snote_single_graphic_window_t1_ParamLimits

0x70d0,	// (0x00011bdf) popup_snote_single_graphic_window_t1

0x70e3,	// (0x00011bf2) popup_snote_single_graphic_window_t2_ParamLimits

0x70e3,	// (0x00011bf2) popup_snote_single_graphic_window_t2

0x70f6,	// (0x00011c05) popup_snote_single_graphic_window_t3_ParamLimits

0x70f6,	// (0x00011c05) popup_snote_single_graphic_window_t3

0x712f,	// (0x00011c3e) popup_snote_single_graphic_window_t4_ParamLimits

0x712f,	// (0x00011c3e) popup_snote_single_graphic_window_t4

0x7163,	// (0x00011c72) popup_snote_single_graphic_window_t5_ParamLimits

0x7163,	// (0x00011c72) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001a109) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001a109) popup_snote_single_graphic_window_t

0xadb0,	// (0x000158bf) grid_graphic_popup_pane_ParamLimits

0xadb0,	// (0x000158bf) grid_graphic_popup_pane

0xadde,	// (0x000158ed) listscroll_popup_graphic_pane_g1_ParamLimits

0xadde,	// (0x000158ed) listscroll_popup_graphic_pane_g1

0xadf2,	// (0x00015901) listscroll_popup_graphic_pane_g2_ParamLimits

0xadf2,	// (0x00015901) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e4,	// (0x0001a4f3) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e4,	// (0x0001a4f3) listscroll_popup_graphic_pane_g

0xae06,	// (0x00015915) scroll_pane_cp5

0xad58,	// (0x00015867) cell_graphic_popup_pane_ParamLimits

0xad58,	// (0x00015867) cell_graphic_popup_pane

0xad39,	// (0x00015848) cell_graphic_popup_pane_g1

0xad41,	// (0x00015850) cell_graphic_popup_pane_g2

0x6fb6,	// (0x00011ac5) cell_graphic_popup_pane_g3

0x0002,

0xf9dd,	// (0x0001a4ec) cell_graphic_popup_pane_g

0xad4a,	// (0x00015859) cell_graphic_popup_pane_t2

0x6fbf,	// (0x00011ace) grid_highlight_pane_cp3

0x71a4,	// (0x00011cb3) list_gen_pane_ParamLimits

0x71a4,	// (0x00011cb3) list_gen_pane

0x71d6,	// (0x00011ce5) scroll_pane

0xac9b,	// (0x000157aa) bg_list_pane_g1_ParamLimits

0xac9b,	// (0x000157aa) bg_list_pane_g1

0xacb6,	// (0x000157c5) bg_list_pane_g2_ParamLimits

0xacb6,	// (0x000157c5) bg_list_pane_g2

0xacc9,	// (0x000157d8) bg_list_pane_g3_ParamLimits

0xacc9,	// (0x000157d8) bg_list_pane_g3

0xacdb,	// (0x000157ea) bg_list_pane_g4_ParamLimits

0xacdb,	// (0x000157ea) bg_list_pane_g4

0xaced,	// (0x000157fc) bg_list_pane_g5_ParamLimits

0xaced,	// (0x000157fc) bg_list_pane_g5

0x0004,

0xf9d2,	// (0x0001a4e1) bg_list_pane_g_ParamLimits

0xf9d2,	// (0x0001a4e1) bg_list_pane_g

0xabec,	// (0x000156fb) list_double2_graphic_large_graphic_pane_ParamLimits

0xabec,	// (0x000156fb) list_double2_graphic_large_graphic_pane

0xabec,	// (0x000156fb) list_double2_graphic_pane_ParamLimits

0xabec,	// (0x000156fb) list_double2_graphic_pane

0xabec,	// (0x000156fb) list_double2_large_graphic_pane_ParamLimits

0xabec,	// (0x000156fb) list_double2_large_graphic_pane

0xabec,	// (0x000156fb) list_double2_pane_ParamLimits

0xabec,	// (0x000156fb) list_double2_pane

0xabec,	// (0x000156fb) list_double_graphic_heading_pane_ParamLimits

0xabec,	// (0x000156fb) list_double_graphic_heading_pane

0xabec,	// (0x000156fb) list_double_graphic_pane_ParamLimits

0xabec,	// (0x000156fb) list_double_graphic_pane

0xabec,	// (0x000156fb) list_double_heading_pane_ParamLimits

0xabec,	// (0x000156fb) list_double_heading_pane

0xabec,	// (0x000156fb) list_double_large_graphic_pane_ParamLimits

0xabec,	// (0x000156fb) list_double_large_graphic_pane

0xabec,	// (0x000156fb) list_double_number_pane_ParamLimits

0xabec,	// (0x000156fb) list_double_number_pane

0xabec,	// (0x000156fb) list_double_pane_ParamLimits

0xabec,	// (0x000156fb) list_double_pane

0xabec,	// (0x000156fb) list_double_time_pane_ParamLimits

0xabec,	// (0x000156fb) list_double_time_pane

0xabec,	// (0x000156fb) list_setting_number_pane_ParamLimits

0xabec,	// (0x000156fb) list_setting_number_pane

0xabec,	// (0x000156fb) list_setting_pane_ParamLimits

0xabec,	// (0x000156fb) list_setting_pane

0xac2b,	// (0x0001573a) list_single_2graphic_pane_ParamLimits

0xac2b,	// (0x0001573a) list_single_2graphic_pane

0xac2b,	// (0x0001573a) list_single_graphic_heading_pane_ParamLimits

0xac2b,	// (0x0001573a) list_single_graphic_heading_pane

0xac2b,	// (0x0001573a) list_single_graphic_pane_ParamLimits

0xac2b,	// (0x0001573a) list_single_graphic_pane

0xac2b,	// (0x0001573a) list_single_heading_pane_ParamLimits

0xac2b,	// (0x0001573a) list_single_heading_pane

0xac83,	// (0x00015792) list_single_large_graphic_pane_ParamLimits

0xac83,	// (0x00015792) list_single_large_graphic_pane

0xac2b,	// (0x0001573a) list_single_number_heading_pane_ParamLimits

0xac2b,	// (0x0001573a) list_single_number_heading_pane

0xac2b,	// (0x0001573a) list_single_number_pane_ParamLimits

0xac2b,	// (0x0001573a) list_single_number_pane

0xac2b,	// (0x0001573a) list_single_pane_ParamLimits

0xac2b,	// (0x0001573a) list_single_pane

0x68e2,	// (0x000113f1) list_highlight_pane_cp1

0x7216,	// (0x00011d25) list_single_pane_g1_ParamLimits

0x7216,	// (0x00011d25) list_single_pane_g1

0x7222,	// (0x00011d31) list_single_pane_g2_ParamLimits

0x7222,	// (0x00011d31) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001a11b) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001a11b) list_single_pane_g

0xaba5,	// (0x000156b4) list_single_pane_t1_ParamLimits

0xaba5,	// (0x000156b4) list_single_pane_t1

0x7216,	// (0x00011d25) list_single_number_pane_g1_ParamLimits

0x7216,	// (0x00011d25) list_single_number_pane_g1

0x7222,	// (0x00011d31) list_single_number_pane_g2_ParamLimits

0x7222,	// (0x00011d31) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001a11b) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001a11b) list_single_number_pane_g

0xa901,	// (0x00015410) list_single_number_pane_t1_ParamLimits

0xa901,	// (0x00015410) list_single_number_pane_t1

0xa917,	// (0x00015426) list_single_number_pane_t2_ParamLimits

0xa917,	// (0x00015426) list_single_number_pane_t2

0x0001,

0xf993,	// (0x0001a4a2) list_single_number_pane_t_ParamLimits

0xf993,	// (0x0001a4a2) list_single_number_pane_t

0x720a,	// (0x00011d19) list_single_graphic_pane_g1_ParamLimits

0x720a,	// (0x00011d19) list_single_graphic_pane_g1

0x7216,	// (0x00011d25) list_single_graphic_pane_g2_ParamLimits

0x7216,	// (0x00011d25) list_single_graphic_pane_g2

0x7222,	// (0x00011d31) list_single_graphic_pane_g3_ParamLimits

0x7222,	// (0x00011d31) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001a114) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001a114) list_single_graphic_pane_g

0x722e,	// (0x00011d3d) list_single_graphic_pane_t1_ParamLimits

0x722e,	// (0x00011d3d) list_single_graphic_pane_t1

0x7216,	// (0x00011d25) list_single_heading_pane_g1_ParamLimits

0x7216,	// (0x00011d25) list_single_heading_pane_g1

0x7222,	// (0x00011d31) list_single_heading_pane_g2_ParamLimits

0x7222,	// (0x00011d31) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001a11b) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001a11b) list_single_heading_pane_g

0x7244,	// (0x00011d53) list_single_heading_pane_t1_ParamLimits

0x7244,	// (0x00011d53) list_single_heading_pane_t1

0x725a,	// (0x00011d69) list_single_heading_pane_t2_ParamLimits

0x725a,	// (0x00011d69) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001a120) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001a120) list_single_heading_pane_t

0x7216,	// (0x00011d25) list_single_number_heading_pane_g1_ParamLimits

0x7216,	// (0x00011d25) list_single_number_heading_pane_g1

0x7222,	// (0x00011d31) list_single_number_heading_pane_g2_ParamLimits

0x7222,	// (0x00011d31) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001a11b) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001a11b) list_single_number_heading_pane_g

0x7244,	// (0x00011d53) list_single_number_heading_pane_t1_ParamLimits

0x7244,	// (0x00011d53) list_single_number_heading_pane_t1

0x726c,	// (0x00011d7b) list_single_number_heading_pane_t2_ParamLimits

0x726c,	// (0x00011d7b) list_single_number_heading_pane_t2

0x727e,	// (0x00011d8d) list_single_number_heading_pane_t3_ParamLimits

0x727e,	// (0x00011d8d) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001a125) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001a125) list_single_number_heading_pane_t

0x7290,	// (0x00011d9f) list_single_graphic_heading_pane_g1_ParamLimits

0x7290,	// (0x00011d9f) list_single_graphic_heading_pane_g1

0x729c,	// (0x00011dab) list_single_graphic_heading_pane_g4_ParamLimits

0x729c,	// (0x00011dab) list_single_graphic_heading_pane_g4

0x7222,	// (0x00011d31) list_single_graphic_heading_pane_g5_ParamLimits

0x7222,	// (0x00011d31) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001a12c) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001a12c) list_single_graphic_heading_pane_g

0x7244,	// (0x00011d53) list_single_graphic_heading_pane_t1_ParamLimits

0x7244,	// (0x00011d53) list_single_graphic_heading_pane_t1

0x72ad,	// (0x00011dbc) list_single_graphic_heading_pane_t2_ParamLimits

0x72ad,	// (0x00011dbc) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001a133) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001a133) list_single_graphic_heading_pane_t

0x72bf,	// (0x00011dce) list_single_large_graphic_pane_g1_ParamLimits

0x72bf,	// (0x00011dce) list_single_large_graphic_pane_g1

0x72cb,	// (0x00011dda) list_single_large_graphic_pane_g2_ParamLimits

0x72cb,	// (0x00011dda) list_single_large_graphic_pane_g2

0x72d7,	// (0x00011de6) list_single_large_graphic_pane_g3_ParamLimits

0x72d7,	// (0x00011de6) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001a138) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001a138) list_single_large_graphic_pane_g

0x9ba5,	// (0x000146b4) wait_border_pane_g2_copy1

0x72e3,	// (0x00011df2) list_single_large_graphic_pane_g4_cp2

0x72eb,	// (0x00011dfa) list_single_large_graphic_pane_t1_ParamLimits

0x72eb,	// (0x00011dfa) list_single_large_graphic_pane_t1

0x7301,	// (0x00011e10) list_double_pane_g1_ParamLimits

0x7301,	// (0x00011e10) list_double_pane_g1

0x730d,	// (0x00011e1c) list_double_pane_g2_ParamLimits

0x730d,	// (0x00011e1c) list_double_pane_g2

0x0001,

0xf630,	// (0x0001a13f) list_double_pane_g_ParamLimits

0xf630,	// (0x0001a13f) list_double_pane_g

0x7319,	// (0x00011e28) list_double_pane_t1_ParamLimits

0x7319,	// (0x00011e28) list_double_pane_t1

0x732f,	// (0x00011e3e) list_double_pane_t2_ParamLimits

0x732f,	// (0x00011e3e) list_double_pane_t2

0x0001,

0xf635,	// (0x0001a144) list_double_pane_t_ParamLimits

0xf635,	// (0x0001a144) list_double_pane_t

0x7341,	// (0x00011e50) list_double2_pane_g1_ParamLimits

0x7341,	// (0x00011e50) list_double2_pane_g1

0x7352,	// (0x00011e61) list_double2_pane_g2_ParamLimits

0x7352,	// (0x00011e61) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001a149) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001a149) list_double2_pane_g

0x735e,	// (0x00011e6d) list_double2_pane_t1_ParamLimits

0x735e,	// (0x00011e6d) list_double2_pane_t1

0x7374,	// (0x00011e83) list_double2_pane_t2_ParamLimits

0x7374,	// (0x00011e83) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001a14e) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001a14e) list_double2_pane_t

0x7301,	// (0x00011e10) list_double_number_pane_g1_ParamLimits

0x7301,	// (0x00011e10) list_double_number_pane_g1

0x730d,	// (0x00011e1c) list_double_number_pane_g2_ParamLimits

0x730d,	// (0x00011e1c) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001a13f) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001a13f) list_double_number_pane_g

0x7386,	// (0x00011e95) list_double_number_pane_t1_ParamLimits

0x7386,	// (0x00011e95) list_double_number_pane_t1

0x7398,	// (0x00011ea7) list_double_number_pane_t2_ParamLimits

0x7398,	// (0x00011ea7) list_double_number_pane_t2

0x73ae,	// (0x00011ebd) list_double_number_pane_t3_ParamLimits

0x73ae,	// (0x00011ebd) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001a153) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001a153) list_double_number_pane_t

0x73c0,	// (0x00011ecf) list_double_graphic_pane_g1_ParamLimits

0x73c0,	// (0x00011ecf) list_double_graphic_pane_g1

0x73cc,	// (0x00011edb) list_double_graphic_pane_g2_ParamLimits

0x73cc,	// (0x00011edb) list_double_graphic_pane_g2

0x73db,	// (0x00011eea) list_double_graphic_pane_g3_ParamLimits

0x73db,	// (0x00011eea) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001a15a) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001a15a) list_double_graphic_pane_g

0x73f3,	// (0x00011f02) list_double_graphic_pane_t1_ParamLimits

0x73f3,	// (0x00011f02) list_double_graphic_pane_t1

0x7409,	// (0x00011f18) list_double_graphic_pane_t2_ParamLimits

0x7409,	// (0x00011f18) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001a163) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001a163) list_double_graphic_pane_t

0x741b,	// (0x00011f2a) list_double2_graphic_pane_g1_ParamLimits

0x741b,	// (0x00011f2a) list_double2_graphic_pane_g1

0x7427,	// (0x00011f36) list_double2_graphic_pane_g2_ParamLimits

0x7427,	// (0x00011f36) list_double2_graphic_pane_g2

0x7352,	// (0x00011e61) list_double2_graphic_pane_g3_ParamLimits

0x7352,	// (0x00011e61) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001a168) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001a168) list_double2_graphic_pane_g

0x7433,	// (0x00011f42) list_double2_graphic_pane_t1_ParamLimits

0x7433,	// (0x00011f42) list_double2_graphic_pane_t1

0x7449,	// (0x00011f58) list_double2_graphic_pane_t2_ParamLimits

0x7449,	// (0x00011f58) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001a16f) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001a16f) list_double2_graphic_pane_t

0x745b,	// (0x00011f6a) list_double_large_graphic_pane_g1_ParamLimits

0x745b,	// (0x00011f6a) list_double_large_graphic_pane_g1

0x7486,	// (0x00011f95) list_double_large_graphic_pane_g2_ParamLimits

0x7486,	// (0x00011f95) list_double_large_graphic_pane_g2

0x730d,	// (0x00011e1c) list_double_large_graphic_pane_g3_ParamLimits

0x730d,	// (0x00011e1c) list_double_large_graphic_pane_g3

0x7497,	// (0x00011fa6) list_double_large_graphic_pane_g4_ParamLimits

0x7497,	// (0x00011fa6) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001a174) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001a174) list_double_large_graphic_pane_g

0x74bf,	// (0x00011fce) list_double_large_graphic_pane_t1_ParamLimits

0x74bf,	// (0x00011fce) list_double_large_graphic_pane_t1

0x74d8,	// (0x00011fe7) list_double_large_graphic_pane_t2_ParamLimits

0x74d8,	// (0x00011fe7) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001a17f) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001a17f) list_double_large_graphic_pane_t

0x74ea,	// (0x00011ff9) list_double2_large_graphic_pane_g1_ParamLimits

0x74ea,	// (0x00011ff9) list_double2_large_graphic_pane_g1

0x7341,	// (0x00011e50) list_double2_large_graphic_pane_g2_ParamLimits

0x7341,	// (0x00011e50) list_double2_large_graphic_pane_g2

0x7352,	// (0x00011e61) list_double2_large_graphic_pane_g3_ParamLimits

0x7352,	// (0x00011e61) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001a184) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001a184) list_double2_large_graphic_pane_g

0x74f6,	// (0x00012005) list_double2_large_graphic_pane_t1_ParamLimits

0x74f6,	// (0x00012005) list_double2_large_graphic_pane_t1

0x750c,	// (0x0001201b) list_double2_large_graphic_pane_t2_ParamLimits

0x750c,	// (0x0001201b) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001a18b) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001a18b) list_double2_large_graphic_pane_t

0x751e,	// (0x0001202d) list_double_heading_pane_g1_ParamLimits

0x751e,	// (0x0001202d) list_double_heading_pane_g1

0x752f,	// (0x0001203e) list_double_heading_pane_g2_ParamLimits

0x752f,	// (0x0001203e) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001a190) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001a190) list_double_heading_pane_g

0x753b,	// (0x0001204a) list_double_heading_pane_t1_ParamLimits

0x753b,	// (0x0001204a) list_double_heading_pane_t1

0x7551,	// (0x00012060) list_double_heading_pane_t2_ParamLimits

0x7551,	// (0x00012060) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001a195) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001a195) list_double_heading_pane_t

0x7563,	// (0x00012072) list_double_graphic_heading_pane_g1_ParamLimits

0x7563,	// (0x00012072) list_double_graphic_heading_pane_g1

0x751e,	// (0x0001202d) list_double_graphic_heading_pane_g2_ParamLimits

0x751e,	// (0x0001202d) list_double_graphic_heading_pane_g2

0x752f,	// (0x0001203e) list_double_graphic_heading_pane_g3_ParamLimits

0x752f,	// (0x0001203e) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001a19a) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001a19a) list_double_graphic_heading_pane_g

0x756f,	// (0x0001207e) list_double_graphic_heading_pane_t1_ParamLimits

0x756f,	// (0x0001207e) list_double_graphic_heading_pane_t1

0x7585,	// (0x00012094) list_double_graphic_heading_pane_t2_ParamLimits

0x7585,	// (0x00012094) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001a1a1) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001a1a1) list_double_graphic_heading_pane_t

0x7486,	// (0x00011f95) list_double_time_pane_g1_ParamLimits

0x7486,	// (0x00011f95) list_double_time_pane_g1

0x730d,	// (0x00011e1c) list_double_time_pane_g2_ParamLimits

0x730d,	// (0x00011e1c) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0001a1a6) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0001a1a6) list_double_time_pane_g

0x7597,	// (0x000120a6) list_double_time_pane_t1_ParamLimits

0x7597,	// (0x000120a6) list_double_time_pane_t1

0x75ad,	// (0x000120bc) list_double_time_pane_t2_ParamLimits

0x75ad,	// (0x000120bc) list_double_time_pane_t2

0x75bf,	// (0x000120ce) list_double_time_pane_t3_ParamLimits

0x75bf,	// (0x000120ce) list_double_time_pane_t3

0x75d1,	// (0x000120e0) list_double_time_pane_t4_ParamLimits

0x75d1,	// (0x000120e0) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0001a1ab) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0001a1ab) list_double_time_pane_t

0x7427,	// (0x00011f36) list_setting_pane_g1_ParamLimits

0x7427,	// (0x00011f36) list_setting_pane_g1

0x7352,	// (0x00011e61) list_setting_pane_g2_ParamLimits

0x7352,	// (0x00011e61) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0001a1b4) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0001a1b4) list_setting_pane_g

0x75e3,	// (0x000120f2) list_setting_pane_t1_ParamLimits

0x75e3,	// (0x000120f2) list_setting_pane_t1

0x75fa,	// (0x00012109) list_setting_pane_t2_ParamLimits

0x75fa,	// (0x00012109) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0001a1b9) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0001a1b9) list_setting_pane_t

0x7639,	// (0x00012148) set_value_pane_cp_ParamLimits

0x7639,	// (0x00012148) set_value_pane_cp

0x7427,	// (0x00011f36) list_setting_number_pane_g1_ParamLimits

0x7427,	// (0x00011f36) list_setting_number_pane_g1

0x7352,	// (0x00011e61) list_setting_number_pane_g2_ParamLimits

0x7352,	// (0x00011e61) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x0001a1b4) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x0001a1b4) list_setting_number_pane_g

0x7647,	// (0x00012156) list_setting_number_pane_t1_ParamLimits

0x7647,	// (0x00012156) list_setting_number_pane_t1

0x765b,	// (0x0001216a) list_setting_number_pane_t2_ParamLimits

0x765b,	// (0x0001216a) list_setting_number_pane_t2

0x7672,	// (0x00012181) list_setting_number_pane_t3_ParamLimits

0x7672,	// (0x00012181) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001a1c0) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001a1c0) list_setting_number_pane_t

0x7639,	// (0x00012148) set_value_pane_ParamLimits

0x7639,	// (0x00012148) set_value_pane

0x76b5,	// (0x000121c4) bg_set_opt_pane_ParamLimits

0x76b5,	// (0x000121c4) bg_set_opt_pane

0x76d6,	// (0x000121e5) set_value_pane_t1

0x76e4,	// (0x000121f3) slider_set_pane_cp3

0x76ed,	// (0x000121fc) volume_small_pane_cp

0x76f6,	// (0x00012205) list_form_gen_pane

0x76ff,	// (0x0001220e) scroll_pane_cp8

0x7718,	// (0x00012227) form_field_data_pane_ParamLimits

0x7718,	// (0x00012227) form_field_data_pane

0x773e,	// (0x0001224d) form_field_data_wide_pane_ParamLimits

0x773e,	// (0x0001224d) form_field_data_wide_pane

0x7765,	// (0x00012274) form_field_popup_pane_ParamLimits

0x7765,	// (0x00012274) form_field_popup_pane

0x7787,	// (0x00012296) form_field_popup_wide_pane_ParamLimits

0x7787,	// (0x00012296) form_field_popup_wide_pane

0x77a8,	// (0x000122b7) form_field_slider_pane_ParamLimits

0x77a8,	// (0x000122b7) form_field_slider_pane

0x77bb,	// (0x000122ca) form_field_slider_wide_pane_ParamLimits

0x77bb,	// (0x000122ca) form_field_slider_wide_pane

0x77ce,	// (0x000122dd) data_form_pane

0x77e4,	// (0x000122f3) form_field_data_pane_t1

0x77fe,	// (0x0001230d) input_focus_pane

0x780c,	// (0x0001231b) data_form_wide_pane

0x7844,	// (0x00012353) form_field_data_wide_pane_t1

0x6fd4,	// (0x00011ae3) input_focus_pane_cp6

0x7866,	// (0x00012375) form_field_popup_pane_t1

0x77fe,	// (0x0001230d) input_focus_pane_cp7

0x7880,	// (0x0001238f) list_form_pane

0x7894,	// (0x000123a3) form_field_popup_wide_pane_t1

0x77fe,	// (0x0001230d) input_focus_pane_cp8

0x78a9,	// (0x000123b8) list_form_wide_pane

0x78c0,	// (0x000123cf) form_field_slider_pane_t1_ParamLimits

0x78c0,	// (0x000123cf) form_field_slider_pane_t1

0x78d4,	// (0x000123e3) form_field_slider_pane_t2_ParamLimits

0x78d4,	// (0x000123e3) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001a1d0) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001a1d0) form_field_slider_pane_t

0x6c58,	// (0x00011767) input_focus_pane_cp9_ParamLimits

0x6c58,	// (0x00011767) input_focus_pane_cp9

0x78e6,	// (0x000123f5) slider_cont_pane_ParamLimits

0x78e6,	// (0x000123f5) slider_cont_pane

0x78fa,	// (0x00012409) form_field_slider_wide_pane_t1_ParamLimits

0x78fa,	// (0x00012409) form_field_slider_wide_pane_t1

0x790c,	// (0x0001241b) form_field_slider_wide_pane_t2_ParamLimits

0x790c,	// (0x0001241b) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0001a1d5) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0001a1d5) form_field_slider_wide_pane_t

0x6c58,	// (0x00011767) input_focus_pane_cp10_ParamLimits

0x6c58,	// (0x00011767) input_focus_pane_cp10

0x791e,	// (0x0001242d) slider_cont_pane_cp1_ParamLimits

0x791e,	// (0x0001242d) slider_cont_pane_cp1

0x7932,	// (0x00012441) slider_form_pane_cp

0x793a,	// (0x00012449) input_focus_pane_g1

0x7942,	// (0x00012451) input_focus_pane_g2

0x794a,	// (0x00012459) input_focus_pane_g3

0x7952,	// (0x00012461) input_focus_pane_g4

0x795a,	// (0x00012469) input_focus_pane_g5

0x7962,	// (0x00012471) input_focus_pane_g6

0x796a,	// (0x00012479) input_focus_pane_g7

0x7972,	// (0x00012481) input_focus_pane_g8

0x797a,	// (0x00012489) input_focus_pane_g9

0x68d8,	// (0x000113e7) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001a1da) input_focus_pane_g

0x9bae,	// (0x000146bd) wait_border_pane_g3_copy1

0x7982,	// (0x00012491) data_form_pane_t1

0x68d8,	// (0x000113e7) wait_anim_pane_g1_copy1

0xab86,	// (0x00015695) data_form_wide_pane_t1

0x79a1,	// (0x000124b0) list_form_graphic_pane_cp_ParamLimits

0x79a1,	// (0x000124b0) list_form_graphic_pane_cp

0xab5b,	// (0x0001566a) slider_form_pane_g1

0xab64,	// (0x00015673) slider_form_pane_g2

0x0006,

0xf9c3,	// (0x0001a4d2) slider_form_pane_g

0x79a1,	// (0x000124b0) list_form_graphic_pane_ParamLimits

0x79a1,	// (0x000124b0) list_form_graphic_pane

0x79b3,	// (0x000124c2) list_form_graphic_pane_g1

0x79bb,	// (0x000124ca) list_form_graphic_pane_t1_ParamLimits

0x79bb,	// (0x000124ca) list_form_graphic_pane_t1

0x69c2,	// (0x000114d1) list_highlight_pane_cp5_ParamLimits

0x69c2,	// (0x000114d1) list_highlight_pane_cp5

0x79d0,	// (0x000124df) find_pane_g1

0x79d9,	// (0x000124e8) input_find_pane

0x79e2,	// (0x000124f1) input_find_pane_g1_ParamLimits

0x79e2,	// (0x000124f1) input_find_pane_g1

0x79ee,	// (0x000124fd) input_find_pane_t1_ParamLimits

0x79ee,	// (0x000124fd) input_find_pane_t1

0x7a03,	// (0x00012512) input_find_pane_t2_ParamLimits

0x7a03,	// (0x00012512) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001a1ef) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001a1ef) input_find_pane_t

0x7a18,	// (0x00012527) input_focus_pane_cp5_ParamLimits

0x7a18,	// (0x00012527) input_focus_pane_cp5

0x7a32,	// (0x00012541) bg_popup_window_pane_cp2_ParamLimits

0x7a32,	// (0x00012541) bg_popup_window_pane_cp2

0x7a3f,	// (0x0001254e) listscroll_menu_pane_ParamLimits

0x7a3f,	// (0x0001254e) listscroll_menu_pane

0x7a4b,	// (0x0001255a) popup_submenu_window_ParamLimits

0x7a4b,	// (0x0001255a) popup_submenu_window

0x7a7b,	// (0x0001258a) find_popup_pane_g1

0x7a83,	// (0x00012592) input_popup_find_pane_cp

0x7a18,	// (0x00012527) input_focus_pane_cp4_ParamLimits

0x7a18,	// (0x00012527) input_focus_pane_cp4

0x7a9b,	// (0x000125aa) input_popup_find_pane_t1_ParamLimits

0x7a9b,	// (0x000125aa) input_popup_find_pane_t1

0x68e2,	// (0x000113f1) bg_popup_sub_pane_cp

0x7ac9,	// (0x000125d8) listscroll_popup_sub_pane

0x7ad1,	// (0x000125e0) list_submenu_pane_ParamLimits

0x7ad1,	// (0x000125e0) list_submenu_pane

0x7ae2,	// (0x000125f1) scroll_pane_cp4

0x7aea,	// (0x000125f9) list_single_popup_submenu_pane_ParamLimits

0x7aea,	// (0x000125f9) list_single_popup_submenu_pane

0x7aff,	// (0x0001260e) list_single_popup_submenu_pane_g1

0x7b07,	// (0x00012616) list_single_popup_submenu_pane_t1_ParamLimits

0x7b07,	// (0x00012616) list_single_popup_submenu_pane_t1

0x69c2,	// (0x000114d1) bg_active_tab_pane_cp1_ParamLimits

0x69c2,	// (0x000114d1) bg_active_tab_pane_cp1

0x7b1c,	// (0x0001262b) tabs_2_active_pane_g1

0x7b24,	// (0x00012633) tabs_2_active_pane_t1

0x69c2,	// (0x000114d1) bg_passive_tab_pane_cp1_ParamLimits

0x69c2,	// (0x000114d1) bg_passive_tab_pane_cp1

0x7b1c,	// (0x0001262b) tabs_2_passive_pane_g1

0x7b24,	// (0x00012633) tabs_2_passive_pane_t1

0x7b36,	// (0x00012645) bg_active_tab_pane_cp4

0x7b44,	// (0x00012653) tabs_2_long_active_pane_t1

0x7b57,	// (0x00012666) bg_passive_tab_pane_cp4

0x57a3,	// (0x000102b2) list_single_midp_graphic_pane_g4_ParamLimits

0x7b36,	// (0x00012645) bg_active_tab_pane_cp5

0x7b63,	// (0x00012672) tabs_3_long_active_pane_t1

0x7b57,	// (0x00012666) bg_passive_tab_pane_cp5

0x57a3,	// (0x000102b2) list_single_midp_graphic_pane_g4

0x69c2,	// (0x000114d1) bg_popup_window_pane_cp13_ParamLimits

0x69c2,	// (0x000114d1) bg_popup_window_pane_cp13

0x7b7e,	// (0x0001268d) listscroll_popup_fast_pane_ParamLimits

0x7b7e,	// (0x0001268d) listscroll_popup_fast_pane

0x7b8d,	// (0x0001269c) grid_popup_fast_pane_ParamLimits

0x7b8d,	// (0x0001269c) grid_popup_fast_pane

0x7b9f,	// (0x000126ae) scroll_pane_cp9_ParamLimits

0x7b9f,	// (0x000126ae) scroll_pane_cp9

0xc947,	// (0x00017456) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc947,	// (0x00017456) list_single_graphic_hl_pane_t1_cp2

0x7bc3,	// (0x000126d2) input_focus_pane_cp20_ParamLimits

0x7bc3,	// (0x000126d2) input_focus_pane_cp20

0x7bd1,	// (0x000126e0) query_popup_data_pane_t1_ParamLimits

0x7bd1,	// (0x000126e0) query_popup_data_pane_t1

0x7be4,	// (0x000126f3) query_popup_data_pane_t2_ParamLimits

0x7be4,	// (0x000126f3) query_popup_data_pane_t2

0x7c2a,	// (0x00012739) query_popup_data_pane_t3_ParamLimits

0x7c2a,	// (0x00012739) query_popup_data_pane_t3

0x7c6b,	// (0x0001277a) query_popup_data_pane_t4_ParamLimits

0x7c6b,	// (0x0001277a) query_popup_data_pane_t4

0x7ca7,	// (0x000127b6) query_popup_data_pane_t5_ParamLimits

0x7ca7,	// (0x000127b6) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0001a1f4) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0001a1f4) query_popup_data_pane_t

0x793a,	// (0x00012449) bg_set_opt_pane_g1

0x7942,	// (0x00012451) bg_set_opt_pane_g2

0x794a,	// (0x00012459) bg_set_opt_pane_g3

0x7952,	// (0x00012461) bg_set_opt_pane_g4

0x795a,	// (0x00012469) bg_set_opt_pane_g5

0x7962,	// (0x00012471) bg_set_opt_pane_g6

0x796a,	// (0x00012479) bg_set_opt_pane_g7

0x7972,	// (0x00012481) bg_set_opt_pane_g8

0x797a,	// (0x00012489) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001a1ff) bg_set_opt_pane_g

0x539f,	// (0x0000feae) control_top_pane_stacon_ParamLimits

0x539f,	// (0x0000feae) control_top_pane_stacon

0x53f2,	// (0x0000ff01) signal_pane_stacon_ParamLimits

0x53f2,	// (0x0000ff01) signal_pane_stacon

0x82df,	// (0x00012dee) stacon_top_pane_g1_ParamLimits

0x82df,	// (0x00012dee) stacon_top_pane_g1

0x5417,	// (0x0000ff26) title_pane_stacon_ParamLimits

0x5417,	// (0x0000ff26) title_pane_stacon

0x5441,	// (0x0000ff50) uni_indicator_pane_stacon_ParamLimits

0x5441,	// (0x0000ff50) uni_indicator_pane_stacon

0x5459,	// (0x0000ff68) battery_pane_stacon_ParamLimits

0x5459,	// (0x0000ff68) battery_pane_stacon

0x549d,	// (0x0000ffac) control_bottom_pane_stacon_ParamLimits

0x549d,	// (0x0000ffac) control_bottom_pane_stacon

0x54c0,	// (0x0000ffcf) navi_pane_stacon_ParamLimits

0x54c0,	// (0x0000ffcf) navi_pane_stacon

0x8301,	// (0x00012e10) stacon_bottom_pane_g1_ParamLimits

0x8301,	// (0x00012e10) stacon_bottom_pane_g1

0x50fc,	// (0x0000fc0b) aid_levels_signal_lsc_ParamLimits

0x50fc,	// (0x0000fc0b) aid_levels_signal_lsc

0x5113,	// (0x0000fc22) signal_pane_stacon_g1_ParamLimits

0x5113,	// (0x0000fc22) signal_pane_stacon_g1

0x5127,	// (0x0000fc36) signal_pane_stacon_g2_ParamLimits

0x5127,	// (0x0000fc36) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0001a212) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0001a212) signal_pane_stacon_g

0x515c,	// (0x0000fc6b) title_pane_stacon_t1_ParamLimits

0x515c,	// (0x0000fc6b) title_pane_stacon_t1

0x7ceb,	// (0x000127fa) uni_indicator_pane_stacon_g1

0x7cf5,	// (0x00012804) uni_indicator_pane_stacon_g2

0x7cff,	// (0x0001280e) uni_indicator_pane_stacon_g3

0x7d09,	// (0x00012818) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001a21e) uni_indicator_pane_stacon_g

0x5181,	// (0x0000fc90) control_top_pane_stacon_g1

0x5189,	// (0x0000fc98) control_top_pane_stacon_t1_ParamLimits

0x5189,	// (0x0000fc98) control_top_pane_stacon_t1

0x51c0,	// (0x0000fccf) aid_levels_battery_lsc_ParamLimits

0x51c0,	// (0x0000fccf) aid_levels_battery_lsc

0x51d8,	// (0x0000fce7) battery_pane_stacon_g1_ParamLimits

0x51d8,	// (0x0000fce7) battery_pane_stacon_g1

0x51eb,	// (0x0000fcfa) battery_pane_stacon_g2_ParamLimits

0x51eb,	// (0x0000fcfa) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0001a227) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0001a227) battery_pane_stacon_g

0x5229,	// (0x0000fd38) navi_icon_pane_stacon

0x523d,	// (0x0000fd4c) navi_navi_pane_stacon

0x5229,	// (0x0000fd38) navi_text_pane_stacon

0x5181,	// (0x0000fc90) control_bottom_pane_stacon_g1

0x5253,	// (0x0000fd62) control_bottom_pane_stacon_t1_ParamLimits

0x5253,	// (0x0000fd62) control_bottom_pane_stacon_t1

0x7d2d,	// (0x0001283c) grid_app_pane_ParamLimits

0x7d2d,	// (0x0001283c) grid_app_pane

0x7d51,	// (0x00012860) scroll_pane_cp15_ParamLimits

0x7d51,	// (0x00012860) scroll_pane_cp15

0x7d66,	// (0x00012875) cell_app_pane_ParamLimits

0x7d66,	// (0x00012875) cell_app_pane

0x7d92,	// (0x000128a1) cell_app_pane_g1_ParamLimits

0x7d92,	// (0x000128a1) cell_app_pane_g1

0x7db6,	// (0x000128c5) cell_app_pane_g2_ParamLimits

0x7db6,	// (0x000128c5) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001a22c) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001a22c) cell_app_pane_g

0x7dc2,	// (0x000128d1) cell_app_pane_t1_ParamLimits

0x7dc2,	// (0x000128d1) cell_app_pane_t1

0x7dd4,	// (0x000128e3) grid_highlight_pane_ParamLimits

0x7dd4,	// (0x000128e3) grid_highlight_pane

0x793a,	// (0x00012449) cell_highlight_pane_g1

0x7942,	// (0x00012451) cell_highlight_pane_g2

0x794a,	// (0x00012459) cell_highlight_pane_g3

0x7952,	// (0x00012461) cell_highlight_pane_g4

0x795a,	// (0x00012469) cell_highlight_pane_g5

0x7962,	// (0x00012471) cell_highlight_pane_g6

0x796a,	// (0x00012479) cell_highlight_pane_g7

0x7972,	// (0x00012481) cell_highlight_pane_g8

0x797a,	// (0x00012489) cell_highlight_pane_g9

0x68d8,	// (0x000113e7) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001a1da) cell_highlight_pane_g

0x7de5,	// (0x000128f4) bg_scroll_pane

0x529d,	// (0x0000fdac) scroll_handle_pane

0x7e2c,	// (0x0001293b) scroll_bg_pane_g1

0x7e41,	// (0x00012950) scroll_bg_pane_g2

0x7e59,	// (0x00012968) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001a231) scroll_bg_pane_g

0x7e6e,	// (0x0001297d) scroll_handle_focus_pane_ParamLimits

0x7e6e,	// (0x0001297d) scroll_handle_focus_pane

0x7e2c,	// (0x0001293b) scroll_handle_pane_g1

0x7e7b,	// (0x0001298a) scroll_handle_pane_g2

0x7e59,	// (0x00012968) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0001a238) scroll_handle_pane_g

0x7a18,	// (0x00012527) bg_popup_sub_pane_cp21_ParamLimits

0x7a18,	// (0x00012527) bg_popup_sub_pane_cp21

0x7e8f,	// (0x0001299e) popup_fep_japan_predictive_window_t1_ParamLimits

0x7e8f,	// (0x0001299e) popup_fep_japan_predictive_window_t1

0x7ea6,	// (0x000129b5) popup_fep_japan_predictive_window_t2_ParamLimits

0x7ea6,	// (0x000129b5) popup_fep_japan_predictive_window_t2

0x7ed9,	// (0x000129e8) popup_fep_japan_predictive_window_t3_ParamLimits

0x7ed9,	// (0x000129e8) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001a23f) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001a23f) popup_fep_japan_predictive_window_t

0x68e2,	// (0x000113f1) bg_popup_sub_pane_cp23

0x7f10,	// (0x00012a1f) listscroll_japin_cand_pane

0x7f18,	// (0x00012a27) popup_fep_japan_candidate_window_t1

0x7f26,	// (0x00012a35) candidate_pane_ParamLimits

0x7f26,	// (0x00012a35) candidate_pane

0x7f38,	// (0x00012a47) scroll_pane_cp30

0x7f42,	// (0x00012a51) list_single_popup_jap_candidate_pane_ParamLimits

0x7f42,	// (0x00012a51) list_single_popup_jap_candidate_pane

0x68e2,	// (0x000113f1) list_highlight_pane_cp30

0x7f56,	// (0x00012a65) list_single_popup_jap_candidate_pane_t1

0x7f65,	// (0x00012a74) level_1_signal

0x7f72,	// (0x00012a81) level_2_signal

0x7f7f,	// (0x00012a8e) level_3_signal

0x7f8c,	// (0x00012a9b) level_4_signal

0x7f99,	// (0x00012aa8) level_5_signal

0x7fa6,	// (0x00012ab5) level_6_signal

0x7fb3,	// (0x00012ac2) level_7_signal

0x7f65,	// (0x00012a74) level_1_battery

0x7f72,	// (0x00012a81) level_2_battery

0x7f7f,	// (0x00012a8e) level_3_battery

0x7f8c,	// (0x00012a9b) level_4_battery

0x7f99,	// (0x00012aa8) level_5_battery

0x7fa6,	// (0x00012ab5) level_6_battery

0x7fb3,	// (0x00012ac2) level_7_battery

0x7fd8,	// (0x00012ae7) list_menu_pane_ParamLimits

0x7fd8,	// (0x00012ae7) list_menu_pane

0x7fe9,	// (0x00012af8) scroll_pane_cp25_ParamLimits

0x7fe9,	// (0x00012af8) scroll_pane_cp25

0x8002,	// (0x00012b11) list_double2_graphic_pane_cp2_ParamLimits

0x8002,	// (0x00012b11) list_double2_graphic_pane_cp2

0x8002,	// (0x00012b11) list_double2_large_graphic_pane_cp2_ParamLimits

0x8002,	// (0x00012b11) list_double2_large_graphic_pane_cp2

0x8002,	// (0x00012b11) list_double2_pane_cp2_ParamLimits

0x8002,	// (0x00012b11) list_double2_pane_cp2

0x8002,	// (0x00012b11) list_double_graphic_pane_cp2_ParamLimits

0x8002,	// (0x00012b11) list_double_graphic_pane_cp2

0x8002,	// (0x00012b11) list_double_large_graphic_pane_cp2_ParamLimits

0x8002,	// (0x00012b11) list_double_large_graphic_pane_cp2

0x8002,	// (0x00012b11) list_double_number_pane_cp2_ParamLimits

0x8002,	// (0x00012b11) list_double_number_pane_cp2

0x8002,	// (0x00012b11) list_double_pane_cp2_ParamLimits

0x8002,	// (0x00012b11) list_double_pane_cp2

0x8028,	// (0x00012b37) list_single_2graphic_pane_cp2_ParamLimits

0x8028,	// (0x00012b37) list_single_2graphic_pane_cp2

0x8028,	// (0x00012b37) list_single_graphic_heading_pane_cp2_ParamLimits

0x8028,	// (0x00012b37) list_single_graphic_heading_pane_cp2

0x8028,	// (0x00012b37) list_single_graphic_pane_cp2_ParamLimits

0x8028,	// (0x00012b37) list_single_graphic_pane_cp2

0x8028,	// (0x00012b37) list_single_heading_pane_cp2_ParamLimits

0x8028,	// (0x00012b37) list_single_heading_pane_cp2

0x8045,	// (0x00012b54) list_single_large_graphic_pane_cp2_ParamLimits

0x8045,	// (0x00012b54) list_single_large_graphic_pane_cp2

0x8028,	// (0x00012b37) list_single_number_heading_pane_cp2_ParamLimits

0x8028,	// (0x00012b37) list_single_number_heading_pane_cp2

0x8028,	// (0x00012b37) list_single_number_pane_cp2_ParamLimits

0x8028,	// (0x00012b37) list_single_number_pane_cp2

0x8028,	// (0x00012b37) list_single_pane_cp2_ParamLimits

0x8028,	// (0x00012b37) list_single_pane_cp2

0x809a,	// (0x00012ba9) bg_popup_sub_pane_cp22

0x534f,	// (0x0000fe5e) popup_side_volume_key_window_g1

0x5379,	// (0x0000fe88) popup_side_volume_key_window_t1

0x5397,	// (0x0000fea6) volume_small_pane_cp1

0x6c58,	// (0x00011767) bg_popup_sub_pane_cp24_ParamLimits

0x6c58,	// (0x00011767) bg_popup_sub_pane_cp24

0x80b0,	// (0x00012bbf) fep_china_uni_candidate_pane_ParamLimits

0x80b0,	// (0x00012bbf) fep_china_uni_candidate_pane

0x80c4,	// (0x00012bd3) fep_china_uni_entry_pane

0x80d4,	// (0x00012be3) popup_fep_china_uni_window_g1

0x80f0,	// (0x00012bff) fep_china_uni_entry_pane_g1

0x80fa,	// (0x00012c09) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0001a26c) fep_china_uni_entry_pane_g

0x8104,	// (0x00012c13) fep_entry_item_pane

0x810e,	// (0x00012c1d) fep_candidate_item_pane

0x8116,	// (0x00012c25) fep_china_uni_candidate_pane_g1

0x8120,	// (0x00012c2f) fep_china_uni_candidate_pane_g2

0x8128,	// (0x00012c37) fep_china_uni_candidate_pane_g3

0x8130,	// (0x00012c3f) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0001a271) fep_china_uni_candidate_pane_g

0x68d8,	// (0x000113e7) fep_entry_item_pane_g1

0x813a,	// (0x00012c49) fep_entry_item_pane_t1_ParamLimits

0x813a,	// (0x00012c49) fep_entry_item_pane_t1

0x8150,	// (0x00012c5f) fep_candidate_item_pane_t1_ParamLimits

0x8150,	// (0x00012c5f) fep_candidate_item_pane_t1

0x8165,	// (0x00012c74) fep_candidate_item_pane_t2_ParamLimits

0x8165,	// (0x00012c74) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0001a27a) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0001a27a) fep_candidate_item_pane_t

0x69c2,	// (0x000114d1) list_highlight_pane_cp31_ParamLimits

0x69c2,	// (0x000114d1) list_highlight_pane_cp31

0x8177,	// (0x00012c86) level_1_signal_lsc

0x8180,	// (0x00012c8f) level_2_signal_lsc

0x8189,	// (0x00012c98) level_3_signal_lsc

0x8192,	// (0x00012ca1) level_4_signal_lsc

0x819b,	// (0x00012caa) level_5_signal_lsc

0x81a4,	// (0x00012cb3) level_6_signal_lsc

0x81ad,	// (0x00012cbc) level_7_signal_lsc

0x81ad,	// (0x00012cbc) level_1_battery_lsc

0x81b6,	// (0x00012cc5) level_2_battery_lsc

0x81bf,	// (0x00012cce) level_3_battery_lsc

0x81c8,	// (0x00012cd7) level_4_battery_lsc

0x81d1,	// (0x00012ce0) level_5_battery_lsc

0x81da,	// (0x00012ce9) level_6_battery_lsc

0x8177,	// (0x00012c86) level_7_battery_lsc

0x81e3,	// (0x00012cf2) scroll_handle_focus_pane_g1

0x81ec,	// (0x00012cfb) scroll_handle_focus_pane_g2

0x81f5,	// (0x00012d04) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0001a27f) scroll_handle_focus_pane_g

0x81fe,	// (0x00012d0d) list_single_2graphic_pane_g1_ParamLimits

0x81fe,	// (0x00012d0d) list_single_2graphic_pane_g1

0x729c,	// (0x00011dab) list_single_2graphic_pane_g2_ParamLimits

0x729c,	// (0x00011dab) list_single_2graphic_pane_g2

0x7222,	// (0x00011d31) list_single_2graphic_pane_g3_ParamLimits

0x7222,	// (0x00011d31) list_single_2graphic_pane_g3

0x820a,	// (0x00012d19) list_single_2graphic_pane_g4_ParamLimits

0x820a,	// (0x00012d19) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001a286) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001a286) list_single_2graphic_pane_g

0x8216,	// (0x00012d25) list_single_2graphic_pane_t1_ParamLimits

0x8216,	// (0x00012d25) list_single_2graphic_pane_t1

0x8244,	// (0x00012d53) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8244,	// (0x00012d53) list_double2_graphic_large_graphic_pane_g1

0x7341,	// (0x00011e50) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7341,	// (0x00011e50) list_double2_graphic_large_graphic_pane_g2

0x7352,	// (0x00011e61) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7352,	// (0x00011e61) list_double2_graphic_large_graphic_pane_g3

0x8256,	// (0x00012d65) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8256,	// (0x00012d65) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0001a28f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0001a28f) list_double2_graphic_large_graphic_pane_g

0x8262,	// (0x00012d71) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8262,	// (0x00012d71) list_double2_graphic_large_graphic_pane_t1

0x8278,	// (0x00012d87) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8278,	// (0x00012d87) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001a298) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001a298) list_double2_graphic_large_graphic_pane_t

0x83c3,	// (0x00012ed2) popup_fast_swap_window_ParamLimits

0x83c3,	// (0x00012ed2) popup_fast_swap_window

0x83e1,	// (0x00012ef0) popup_side_volume_key_window

0x83ff,	// (0x00012f0e) stacon_top_pane

0x8409,	// (0x00012f18) status_pane_ParamLimits

0x8409,	// (0x00012f18) status_pane

0x83ff,	// (0x00012f0e) status_small_pane

0x68e2,	// (0x000113f1) control_pane

0x68e2,	// (0x000113f1) stacon_bottom_pane

0x76ff,	// (0x0001220e) scroll_pane_cp121

0x76f6,	// (0x00012205) set_content_pane

0x828a,	// (0x00012d99) bg_active_tab_pane_g1_cp1

0x8293,	// (0x00012da2) bg_active_tab_pane_g2_cp1

0x829c,	// (0x00012dab) bg_active_tab_pane_g3_cp1

0x828a,	// (0x00012d99) bg_passive_tab_pane_g1_cp1

0x8293,	// (0x00012da2) bg_passive_tab_pane_g2_cp1

0x829c,	// (0x00012dab) bg_passive_tab_pane_g3_cp1

0x82a5,	// (0x00012db4) bg_active_tab_pane_g1_cp2

0x8293,	// (0x00012da2) bg_active_tab_pane_g2_cp2

0x82ae,	// (0x00012dbd) bg_active_tab_pane_g3_cp2

0x82a5,	// (0x00012db4) bg_passive_tab_pane_g1_cp2

0x8293,	// (0x00012da2) bg_passive_tab_pane_g2_cp2

0x82ae,	// (0x00012dbd) bg_passive_tab_pane_g3_cp2

0x82b7,	// (0x00012dc6) bg_active_tab_pane_g1_cp3

0x8293,	// (0x00012da2) bg_active_tab_pane_g2_cp3

0x82c0,	// (0x00012dcf) bg_active_tab_pane_g3_cp3

0x82b7,	// (0x00012dc6) bg_passive_tab_pane_g1_cp3

0x8293,	// (0x00012da2) bg_passive_tab_pane_g2_cp3

0x82c0,	// (0x00012dcf) bg_passive_tab_pane_g3_cp3

0x82c9,	// (0x00012dd8) bg_active_tab_pane_g1_cp4

0x8293,	// (0x00012da2) bg_active_tab_pane_g2_cp4

0x82d4,	// (0x00012de3) bg_active_tab_pane_g3_cp4

0x82c9,	// (0x00012dd8) bg_passive_tab_pane_g1_cp4

0x8293,	// (0x00012da2) bg_passive_tab_pane_g2_cp4

0x82d4,	// (0x00012de3) bg_passive_tab_pane_g3_cp4

0x831d,	// (0x00012e2c) bg_active_tab_pane_g1_cp5

0x8293,	// (0x00012da2) bg_active_tab_pane_g2_cp5

0x8326,	// (0x00012e35) bg_active_tab_pane_g3_cp5

0x831d,	// (0x00012e2c) bg_passive_tab_pane_g1_cp5

0x8293,	// (0x00012da2) bg_passive_tab_pane_g2_cp5

0x8326,	// (0x00012e35) bg_passive_tab_pane_g3_cp5

0x832f,	// (0x00012e3e) list_set_graphic_pane_ParamLimits

0x832f,	// (0x00012e3e) list_set_graphic_pane

0x68e2,	// (0x000113f1) bg_set_opt_pane_cp4

0x8344,	// (0x00012e53) list_set_graphic_pane_g1_ParamLimits

0x8344,	// (0x00012e53) list_set_graphic_pane_g1

0x8350,	// (0x00012e5f) list_set_graphic_pane_g2_ParamLimits

0x8350,	// (0x00012e5f) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0001a29d) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0001a29d) list_set_graphic_pane_g

0x0009,

0xfaf0,	// (0x0001a5ff) volume_small_pane_cp_g

0x8374,	// (0x00012e83) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8374,	// (0x00012e83) list_double2_large_graphic_pane_g1_cp2

0x8382,	// (0x00012e91) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8382,	// (0x00012e91) list_double2_large_graphic_pane_g2_cp2

0x8393,	// (0x00012ea2) list_double2_large_graphic_pane_g3_cp2

0x839b,	// (0x00012eaa) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x839b,	// (0x00012eaa) list_double2_large_graphic_pane_t1_cp2

0x83b1,	// (0x00012ec0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x83b1,	// (0x00012ec0) list_double2_large_graphic_pane_t2_cp2

0xa698,	// (0x000151a7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa698,	// (0x000151a7) list_double_large_graphic_pane_g1_cp2

0xa6ab,	// (0x000151ba) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa6ab,	// (0x000151ba) list_double_large_graphic_pane_g2_cp2

0x8527,	// (0x00013036) list_double_large_graphic_pane_g3_cp2

0xa6bc,	// (0x000151cb) list_double_large_graphic_pane_g4_cp

0xa6c4,	// (0x000151d3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa6c4,	// (0x000151d3) list_double_large_graphic_pane_t1_cp2

0xa6db,	// (0x000151ea) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa6db,	// (0x000151ea) list_double_large_graphic_pane_t2_cp2

0x8417,	// (0x00012f26) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8417,	// (0x00012f26) list_double2_graphic_pane_g1_cp2

0x8425,	// (0x00012f34) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8425,	// (0x00012f34) list_double2_graphic_pane_g2_cp2

0x8436,	// (0x00012f45) list_double2_graphic_pane_g3_cp2

0x8440,	// (0x00012f4f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8440,	// (0x00012f4f) list_double2_graphic_pane_t1_cp2

0x8456,	// (0x00012f65) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8456,	// (0x00012f65) list_double2_graphic_pane_t2_cp2

0x8468,	// (0x00012f77) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8468,	// (0x00012f77) list_single_number_heading_pane_g1_cp2

0x8474,	// (0x00012f83) list_single_number_heading_pane_g2_cp2

0x847c,	// (0x00012f8b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x847c,	// (0x00012f8b) list_single_number_heading_pane_t1_cp2

0x8492,	// (0x00012fa1) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8492,	// (0x00012fa1) list_single_number_heading_pane_t2_cp2

0x84a6,	// (0x00012fb5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x84a6,	// (0x00012fb5) list_single_number_heading_pane_t3_cp2

0x8468,	// (0x00012f77) list_single_heading_pane_g1_cp2_ParamLimits

0x8468,	// (0x00012f77) list_single_heading_pane_g1_cp2

0x8474,	// (0x00012f83) list_single_heading_pane_g2_cp2

0x847c,	// (0x00012f8b) list_single_heading_pane_t1_cp2_ParamLimits

0x847c,	// (0x00012f8b) list_single_heading_pane_t1_cp2

0xa492,	// (0x00014fa1) list_single_heading_pane_t2_cp2_ParamLimits

0xa492,	// (0x00014fa1) list_single_heading_pane_t2_cp2

0xa3d4,	// (0x00014ee3) list_double_graphic_pane_g1_cp2_ParamLimits

0xa3d4,	// (0x00014ee3) list_double_graphic_pane_g1_cp2

0xa3e0,	// (0x00014eef) list_double_graphic_pane_g2_cp2_ParamLimits

0xa3e0,	// (0x00014eef) list_double_graphic_pane_g2_cp2

0xa3ef,	// (0x00014efe) list_double_graphic_pane_g3_cp2

0xa3f7,	// (0x00014f06) list_double_graphic_pane_t1_cp2_ParamLimits

0xa3f7,	// (0x00014f06) list_double_graphic_pane_t1_cp2

0xa40d,	// (0x00014f1c) list_double_graphic_pane_t2_cp2_ParamLimits

0xa40d,	// (0x00014f1c) list_double_graphic_pane_t2_cp2

0x851b,	// (0x0001302a) list_double_number_pane_g1_cp2_ParamLimits

0x851b,	// (0x0001302a) list_double_number_pane_g1_cp2

0x8527,	// (0x00013036) list_double_number_pane_g2_cp2

0xa398,	// (0x00014ea7) list_double_number_pane_t1_cp2_ParamLimits

0xa398,	// (0x00014ea7) list_double_number_pane_t1_cp2

0xa3ac,	// (0x00014ebb) list_double_number_pane_t2_cp2_ParamLimits

0xa3ac,	// (0x00014ebb) list_double_number_pane_t2_cp2

0xa3c2,	// (0x00014ed1) list_double_number_pane_t3_cp2_ParamLimits

0xa3c2,	// (0x00014ed1) list_double_number_pane_t3_cp2

0xa281,	// (0x00014d90) list_single_graphic_pane_g1_cp2_ParamLimits

0xa281,	// (0x00014d90) list_single_graphic_pane_g1_cp2

0x8581,	// (0x00013090) list_single_graphic_pane_g2_cp2_ParamLimits

0x8581,	// (0x00013090) list_single_graphic_pane_g2_cp2

0x858d,	// (0x0001309c) list_single_graphic_pane_g3_cp2

0xa257,	// (0x00014d66) list_single_graphic_pane_t1_cp2_ParamLimits

0xa257,	// (0x00014d66) list_single_graphic_pane_t1_cp2

0x8581,	// (0x00013090) list_single_number_pane_g1_cp2_ParamLimits

0x8581,	// (0x00013090) list_single_number_pane_g1_cp2

0x858d,	// (0x0001309c) list_single_number_pane_g2_cp2

0xa257,	// (0x00014d66) list_single_number_pane_t1_cp2_ParamLimits

0xa257,	// (0x00014d66) list_single_number_pane_t1_cp2

0xa26d,	// (0x00014d7c) list_single_number_pane_t2_cp2_ParamLimits

0xa26d,	// (0x00014d7c) list_single_number_pane_t2_cp2

0x8382,	// (0x00012e91) list_double2_pane_g1_cp2_ParamLimits

0x8382,	// (0x00012e91) list_double2_pane_g1_cp2

0x8393,	// (0x00012ea2) list_double2_pane_g2_cp2

0x84f3,	// (0x00013002) list_double2_pane_t1_cp2_ParamLimits

0x84f3,	// (0x00013002) list_double2_pane_t1_cp2

0x8509,	// (0x00013018) list_double2_pane_t2_cp2_ParamLimits

0x8509,	// (0x00013018) list_double2_pane_t2_cp2

0x851b,	// (0x0001302a) list_double_pane_g1_cp2_ParamLimits

0x851b,	// (0x0001302a) list_double_pane_g1_cp2

0x8527,	// (0x00013036) list_double_pane_g2_cp2

0x852f,	// (0x0001303e) list_double_pane_t1_cp2_ParamLimits

0x852f,	// (0x0001303e) list_double_pane_t1_cp2

0x8545,	// (0x00013054) list_double_pane_t2_cp2_ParamLimits

0x8545,	// (0x00013054) list_double_pane_t2_cp2

0x8571,	// (0x00013080) list_single_pane_cp2_g3

0x8581,	// (0x00013090) list_single_pane_g1_cp2_ParamLimits

0x8581,	// (0x00013090) list_single_pane_g1_cp2

0x858d,	// (0x0001309c) list_single_pane_g2_cp2

0x8595,	// (0x000130a4) list_single_pane_t1_cp2_ParamLimits

0x8595,	// (0x000130a4) list_single_pane_t1_cp2

0x85ad,	// (0x000130bc) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x85ad,	// (0x000130bc) list_single_large_graphic_pane_g1_cp2

0x85bb,	// (0x000130ca) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x85bb,	// (0x000130ca) list_single_large_graphic_pane_g2_cp2

0x85c7,	// (0x000130d6) list_single_large_graphic_pane_g3_cp2

0x85cf,	// (0x000130de) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x85cf,	// (0x000130de) list_single_large_graphic_pane_g4_cp1

0x85e9,	// (0x000130f8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x85e9,	// (0x000130f8) list_single_large_graphic_pane_t1_cp2

0xa221,	// (0x00014d30) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa221,	// (0x00014d30) list_single_graphic_heading_pane_g1_cp2

0xa1ee,	// (0x00014cfd) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa1ee,	// (0x00014cfd) list_single_graphic_heading_pane_g4_cp2

0x858d,	// (0x0001309c) list_single_graphic_heading_pane_g5_cp2

0xa22d,	// (0x00014d3c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa22d,	// (0x00014d3c) list_single_graphic_heading_pane_t1_cp2

0xa243,	// (0x00014d52) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa243,	// (0x00014d52) list_single_graphic_heading_pane_t2_cp2

0xa1e2,	// (0x00014cf1) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa1e2,	// (0x00014cf1) list_single_2graphic_pane_g1_cp2

0xa1ee,	// (0x00014cfd) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa1ee,	// (0x00014cfd) list_single_2graphic_pane_g2_cp2

0x858d,	// (0x0001309c) list_single_2graphic_pane_g3_cp2

0xa1ff,	// (0x00014d0e) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa1ff,	// (0x00014d0e) list_single_2graphic_pane_g4_cp2

0xa20b,	// (0x00014d1a) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa20b,	// (0x00014d1a) list_single_2graphic_pane_t1_cp2

0x68d8,	// (0x000113e7) list_highlight_pane_g10_cp1

0x9dba,	// (0x000148c9) list_highlight_pane_g1_cp1

0x9dc2,	// (0x000148d1) list_highlight_pane_g2_cp1

0x9dca,	// (0x000148d9) list_highlight_pane_g3_cp1

0x9dd2,	// (0x000148e1) list_highlight_pane_g4_cp1

0x9dda,	// (0x000148e9) list_highlight_pane_g5_cp1

0x9de2,	// (0x000148f1) list_highlight_pane_g6_cp1

0x9dea,	// (0x000148f9) list_highlight_pane_g7_cp1

0x9df2,	// (0x00014901) list_highlight_pane_g8_cp1

0x9dfa,	// (0x00014909) list_highlight_pane_g9_cp1

0x9cda,	// (0x000147e9) form_field_slider_pane_t3

0x9ce8,	// (0x000147f7) form_field_slider_pane_t4

0x9cf6,	// (0x00014805) slider_form_pane_ParamLimits

0x9cf6,	// (0x00014805) slider_form_pane

0x68e2,	// (0x000113f1) control_abbreviations

0x68e2,	// (0x000113f1) control_conventions

0x68e2,	// (0x000113f1) control_definitions

0x68e2,	// (0x000113f1) format_table_attribute

0xa4e8,	// (0x00014ff7) bg_popup_preview_window_pane_g9

0x68e2,	// (0x000113f1) format_table_data2

0x68e2,	// (0x000113f1) format_table_data3

0x68e2,	// (0x000113f1) format_table_data_example

0x0008,

0x68e2,	// (0x000113f1) intro_purpose

0xf923,	// (0x0001a432) bg_popup_preview_window_pane_g

0x68e2,	// (0x000113f1) texts_category

0x68e2,	// (0x000113f1) texts_graphics

0x85ff,	// (0x0001310e) text_digital

0x860e,	// (0x0001311d) text_primary

0x861d,	// (0x0001312c) text_primary_small

0x862c,	// (0x0001313b) text_secondary

0x863b,	// (0x0001314a) text_title

0xad0d,	// (0x0001581c) bg_passive_tab_pane_g1_cp3_srt

0x8293,	// (0x00012da2) bg_passive_tab_pane_g2_cp3_srt

0xad16,	// (0x00015825) bg_passive_tab_pane_g3_cp3_srt

0x69c2,	// (0x000114d1) bg_active_tab_pane_cp3_srt_ParamLimits

0x69c2,	// (0x000114d1) bg_active_tab_pane_cp3_srt

0xad1f,	// (0x0001582e) tabs_4_active_pane_srt_g1

0xad27,	// (0x00015836) tabs_4_active_pane_srt_t1_ParamLimits

0xad27,	// (0x00015836) tabs_4_active_pane_srt_t1

0xad0d,	// (0x0001581c) bg_active_tab_pane_g1_cp3_copy1

0x8293,	// (0x00012da2) bg_active_tab_pane_g2_cp3_copy1

0xad16,	// (0x00015825) bg_active_tab_pane_g3_cp3_copy1

0x69c2,	// (0x000114d1) tabs_2_long_active_pane_srt_ParamLimits

0x69c2,	// (0x000114d1) tabs_2_long_active_pane_srt

0x69c2,	// (0x000114d1) tabs_2_long_passive_pane_srt_ParamLimits

0x69c2,	// (0x000114d1) tabs_2_long_passive_pane_srt

0x7b57,	// (0x00012666) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7b57,	// (0x00012666) bg_passive_tab_pane_cp4_srt

0xa960,	// (0x0001546f) bg_passive_tab_pane_g1_cp4_srt

0x8293,	// (0x00012da2) bg_passive_tab_pane_g2_cp4_srt

0xa969,	// (0x00015478) bg_passive_tab_pane_g3_cp4_srt

0x7b36,	// (0x00012645) bg_active_tab_pane_cp4_srt_ParamLimits

0x7b36,	// (0x00012645) bg_active_tab_pane_cp4_srt

0xa972,	// (0x00015481) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa972,	// (0x00015481) tabs_2_long_active_pane_srt_t1

0xa960,	// (0x0001546f) bg_active_tab_pane_g1_cp4_srt

0x8293,	// (0x00012da2) bg_active_tab_pane_g2_cp4_srt

0xa969,	// (0x00015478) bg_active_tab_pane_g3_cp4_srt

0x6c58,	// (0x00011767) tabs_3_long_active_pane_srt_ParamLimits

0x6c58,	// (0x00011767) tabs_3_long_active_pane_srt

0x6c58,	// (0x00011767) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6c58,	// (0x00011767) tabs_3_long_passive_pane_cp_srt

0x6c58,	// (0x00011767) tabs_3_long_passive_pane_srt_ParamLimits

0x6c58,	// (0x00011767) tabs_3_long_passive_pane_srt

0x7b57,	// (0x00012666) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7b57,	// (0x00012666) bg_passive_tab_pane_cp5_srt

0x831d,	// (0x00012e2c) bg_passive_tab_pane_g1_cp5_srt

0x8293,	// (0x00012da2) bg_passive_tab_pane_g2_cp5_srt

0x8326,	// (0x00012e35) bg_passive_tab_pane_g3_cp5_srt

0x7b36,	// (0x00012645) bg_active_tab_pane_cp5_srt_ParamLimits

0x7b36,	// (0x00012645) bg_active_tab_pane_cp5_srt

0xa94e,	// (0x0001545d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa94e,	// (0x0001545d) tabs_3_long_active_pane_srt_t1

0x831d,	// (0x00012e2c) bg_active_tab_pane_g1_cp5_srt

0x8293,	// (0x00012da2) bg_active_tab_pane_g2_cp5_srt

0x8326,	// (0x00012e35) bg_active_tab_pane_g3_cp5_srt

0xa940,	// (0x0001544f) navi_text_pane_srt_t1

0xa938,	// (0x00015447) navi_icon_pane_srt_g1

0x8812,	// (0x00013321) midp_editing_number_pane_srt

0x864a,	// (0x00013159) midp_ticker_pane_srt

0x881a,	// (0x00013329) midp_ticker_pane_srt_g1

0x8822,	// (0x00013331) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001a2bc) midp_ticker_pane_srt_g

0x882a,	// (0x00013339) midp_ticker_pane_srt_t1

0xa929,	// (0x00015438) midp_editing_number_pane_t1_copy1

0x8652,	// (0x00013161) listscroll_midp_pane

0x8652,	// (0x00013161) midp_form_pane

0x86c0,	// (0x000131cf) midp_info_popup_window_ParamLimits

0x86c0,	// (0x000131cf) midp_info_popup_window

0x7a18,	// (0x00012527) bg_popup_sub_pane_cp50_ParamLimits

0x7a18,	// (0x00012527) bg_popup_sub_pane_cp50

0x9a21,	// (0x00014530) listscroll_midp_info_pane_ParamLimits

0x9a21,	// (0x00014530) listscroll_midp_info_pane

0x9a09,	// (0x00014518) listscroll_form_midp_pane_ParamLimits

0x9a09,	// (0x00014518) listscroll_form_midp_pane

0x9a15,	// (0x00014524) scroll_bar_cp050

0x99e9,	// (0x000144f8) list_midp_pane

0xb964,	// (0x00016473) signal_pane_g2_cp

0x9923,	// (0x00014432) listscroll_midp_info_pane_t1_ParamLimits

0x9923,	// (0x00014432) listscroll_midp_info_pane_t1

0x993b,	// (0x0001444a) listscroll_midp_info_pane_t2_ParamLimits

0x993b,	// (0x0001444a) listscroll_midp_info_pane_t2

0x9979,	// (0x00014488) listscroll_midp_info_pane_t3_ParamLimits

0x9979,	// (0x00014488) listscroll_midp_info_pane_t3

0x99b3,	// (0x000144c2) listscroll_midp_info_pane_t4_ParamLimits

0x99b3,	// (0x000144c2) listscroll_midp_info_pane_t4

0x0003,

0xf85e,	// (0x0001a36d) listscroll_midp_info_pane_t_ParamLimits

0xf85e,	// (0x0001a36d) listscroll_midp_info_pane_t

0x7ae2,	// (0x000125f1) scroll_pane_cp21

0x98bd,	// (0x000143cc) form_midp_field_choice_group_pane

0x98c6,	// (0x000143d5) form_midp_field_text_pane

0x9909,	// (0x00014418) form_midp_field_time_pane

0x9911,	// (0x00014420) form_midp_gauge_slider_pane

0x991a,	// (0x00014429) form_midp_gauge_wait_pane

0x68e2,	// (0x000113f1) form_midp_image_pane

0x989d,	// (0x000143ac) list_single_midp_pane_ParamLimits

0x989d,	// (0x000143ac) list_single_midp_pane

0x9861,	// (0x00014370) form_midp_field_text_pane_t1

0x9666,	// (0x00014175) input_focus_pane_cp050

0x988c,	// (0x0001439b) list_midp_form_text_pane

0x9830,	// (0x0001433f) form_midp_field_choice_group_pane_t1

0x983e,	// (0x0001434d) input_focus_pane_cp051

0x9852,	// (0x00014361) list_midp_choice_pane

0x68e2,	// (0x000113f1) status_idle_pane

0x9814,	// (0x00014323) form_midp_field_time_pane_t1

0x68d8,	// (0x000113e7) wait_anim_pane_g2_copy1

0x9822,	// (0x00014331) form_midp_field_time_pane_t2

0x0001,

0x8770,	// (0x0001327f) aid_navinavi_width_2_pane

0xf859,	// (0x0001a368) form_midp_field_time_pane_t

0x68e2,	// (0x000113f1) input_focus_pane_cp052

0x68e2,	// (0x000113f1) bg_input_focus_pane_cp040

0x97d4,	// (0x000142e3) form_midp_gauge_slider_pane_t1

0x97e2,	// (0x000142f1) form_midp_gauge_slider_pane_t2

0x97f0,	// (0x000142ff) form_midp_gauge_slider_pane_t3

0x97fe,	// (0x0001430d) form_midp_gauge_slider_pane_t4

0x0003,

0xf850,	// (0x0001a35f) form_midp_gauge_slider_pane_t

0x980c,	// (0x0001431b) form_midp_slider_pane

0x69c2,	// (0x000114d1) bg_input_focus_pane_cp041_ParamLimits

0x69c2,	// (0x000114d1) bg_input_focus_pane_cp041

0x97a1,	// (0x000142b0) form_midp_gauge_wait_pane_t1_ParamLimits

0x97a1,	// (0x000142b0) form_midp_gauge_wait_pane_t1

0x97b3,	// (0x000142c2) form_midp_gauge_wait_pane_t2_ParamLimits

0x97b3,	// (0x000142c2) form_midp_gauge_wait_pane_t2

0x0001,

0xf84b,	// (0x0001a35a) form_midp_gauge_wait_pane_t_ParamLimits

0xf84b,	// (0x0001a35a) form_midp_gauge_wait_pane_t

0x97c5,	// (0x000142d4) form_midp_wait_pane_ParamLimits

0x97c5,	// (0x000142d4) form_midp_wait_pane

0x9769,	// (0x00014278) form_midp_image_pane_g1

0x9772,	// (0x00014281) form_midp_image_pane_t1

0x9781,	// (0x00014290) form_midp_image_pane_t2

0x9790,	// (0x0001429f) form_midp_image_pane_t3

0x0002,

0xf844,	// (0x0001a353) form_midp_image_pane_t

0x9751,	// (0x00014260) list_single_midp_pane_g1

0x975a,	// (0x00014269) list_single_midp_pane_t1

0x9737,	// (0x00014246) list_midp_form_item_pane_ParamLimits

0x9737,	// (0x00014246) list_midp_form_item_pane

0x8718,	// (0x00013227) list_midp_form_item_pane_t1

0x8727,	// (0x00013236) midp_ticker_pane_g1

0x8733,	// (0x00013242) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0001a2a2) midp_ticker_pane_g

0x873f,	// (0x0001324e) midp_ticker_pane_t1

0xabdd,	// (0x000156ec) midp_editing_number_pane_t1

0xabbb,	// (0x000156ca) midp_editing_number_pane

0xabca,	// (0x000156d9) midp_ticker_pane

0xa8f1,	// (0x00015400) ai_message_heading_pane

0x68e2,	// (0x000113f1) bg_popup_window_pane_cp14

0xa8f9,	// (0x00015408) listscroll_ai_message_pane

0xa877,	// (0x00015386) ai_message_heading_pane_g1_ParamLimits

0xa877,	// (0x00015386) ai_message_heading_pane_g1

0xa883,	// (0x00015392) ai_message_heading_pane_g2_ParamLimits

0xa883,	// (0x00015392) ai_message_heading_pane_g2

0xa891,	// (0x000153a0) ai_message_heading_pane_g3_ParamLimits

0xa891,	// (0x000153a0) ai_message_heading_pane_g3

0xa89d,	// (0x000153ac) ai_message_heading_pane_g4_ParamLimits

0xa89d,	// (0x000153ac) ai_message_heading_pane_g4

0x0003,

0xf985,	// (0x0001a494) ai_message_heading_pane_g_ParamLimits

0xf985,	// (0x0001a494) ai_message_heading_pane_g

0xa8a9,	// (0x000153b8) ai_message_heading_pane_t1_ParamLimits

0xa8a9,	// (0x000153b8) ai_message_heading_pane_t1

0xa8c3,	// (0x000153d2) ai_message_heading_pane_t2_ParamLimits

0xa8c3,	// (0x000153d2) ai_message_heading_pane_t2

0x0001,

0xf98e,	// (0x0001a49d) ai_message_heading_pane_t_ParamLimits

0xf98e,	// (0x0001a49d) ai_message_heading_pane_t

0xa8d7,	// (0x000153e6) bg_popup_heading_pane_cp1_ParamLimits

0xa8d7,	// (0x000153e6) bg_popup_heading_pane_cp1

0xa865,	// (0x00015374) list_ai_message_pane_ParamLimits

0xa865,	// (0x00015374) list_ai_message_pane

0x7ae2,	// (0x000125f1) scroll_pane_cp10

0xa801,	// (0x00015310) list_ai_message_pane_g1

0xa809,	// (0x00015318) list_ai_message_pane_g2

0x0001,

0xf962,	// (0x0001a471) list_ai_message_pane_g

0xa811,	// (0x00015320) list_ai_message_pane_t1_ParamLimits

0xa811,	// (0x00015320) list_ai_message_pane_t1

0xa826,	// (0x00015335) list_ai_message_pane_t2_ParamLimits

0xa826,	// (0x00015335) list_ai_message_pane_t2

0xa83b,	// (0x0001534a) list_ai_message_pane_t3_ParamLimits

0xa83b,	// (0x0001534a) list_ai_message_pane_t3

0xa850,	// (0x0001535f) list_ai_message_pane_t4_ParamLimits

0xa850,	// (0x0001535f) list_ai_message_pane_t4

0x0003,

0xf967,	// (0x0001a476) list_ai_message_pane_t_ParamLimits

0xf967,	// (0x0001a476) list_ai_message_pane_t

0xa7ea,	// (0x000152f9) cell_ai_soft_ind_pane_ParamLimits

0xa7ea,	// (0x000152f9) cell_ai_soft_ind_pane

0x8751,	// (0x00013260) cell_ai_soft_ind_pane_g1_ParamLimits

0x8751,	// (0x00013260) cell_ai_soft_ind_pane_g1

0x68e2,	// (0x000113f1) grid_highlight_cp1

0x875e,	// (0x0001326d) text_secondary_cp56_ParamLimits

0x875e,	// (0x0001326d) text_secondary_cp56

0xa7bf,	// (0x000152ce) example_general_pane_ParamLimits

0xa7bf,	// (0x000152ce) example_general_pane

0xa7cb,	// (0x000152da) example_parent_pane_g1_ParamLimits

0xa7cb,	// (0x000152da) example_parent_pane_g1

0xa7d7,	// (0x000152e6) example_parent_pane_t1_ParamLimits

0xa7d7,	// (0x000152e6) example_parent_pane_t1

0x8da3,	// (0x000138b2) popup_preview_text_window_ParamLimits

0x8da3,	// (0x000138b2) popup_preview_text_window

0x8579,	// (0x00013088) list_single_pane_cp2_g4

0x6d0e,	// (0x0001181d) bg_popup_preview_window_pane_ParamLimits

0x6d0e,	// (0x0001181d) bg_popup_preview_window_pane

0xa4f2,	// (0x00015001) popup_preview_text_window_t1_ParamLimits

0xa4f2,	// (0x00015001) popup_preview_text_window_t1

0xa510,	// (0x0001501f) popup_preview_text_window_t2_ParamLimits

0xa510,	// (0x0001501f) popup_preview_text_window_t2

0xa559,	// (0x00015068) popup_preview_text_window_t3_ParamLimits

0xa559,	// (0x00015068) popup_preview_text_window_t3

0xa59e,	// (0x000150ad) popup_preview_text_window_t4_ParamLimits

0xa59e,	// (0x000150ad) popup_preview_text_window_t4

0x0004,

0xf936,	// (0x0001a445) popup_preview_text_window_t_ParamLimits

0xf936,	// (0x0001a445) popup_preview_text_window_t

0xa61c,	// (0x0001512b) scroll_pane_cp11

0x954a,	// (0x00014059) bg_popup_preview_window_pane_g1

0xa4a6,	// (0x00014fb5) bg_popup_preview_window_pane_g2

0xa4b0,	// (0x00014fbf) bg_popup_preview_window_pane_g3

0xa4ba,	// (0x00014fc9) bg_popup_preview_window_pane_g4

0xa4c4,	// (0x00014fd3) bg_popup_preview_window_pane_g5

0xa4ce,	// (0x00014fdd) bg_popup_preview_window_pane_g6

0xa4d6,	// (0x00014fe5) bg_popup_preview_window_pane_g7

0xa4de,	// (0x00014fed) bg_popup_preview_window_pane_g8

0x4c77,	// (0x0000f786) aid_popup_width_pane

0x8d7f,	// (0x0001388e) popup_midp_note_alarm_window_ParamLimits

0x8d7f,	// (0x0001388e) popup_midp_note_alarm_window

0x77ce,	// (0x000122dd) data_form_pane_ParamLimits

0x77da,	// (0x000122e9) form_field_data_pane_g1

0x77e4,	// (0x000122f3) form_field_data_pane_t1_ParamLimits

0x77fe,	// (0x0001230d) input_focus_pane_ParamLimits

0x780c,	// (0x0001231b) data_form_wide_pane_ParamLimits

0x7818,	// (0x00012327) form_field_data_wide_pane_g1

0x7844,	// (0x00012353) form_field_data_wide_pane_t1_ParamLimits

0x6fd4,	// (0x00011ae3) input_focus_pane_cp6_ParamLimits

0x7a8d,	// (0x0001259c) input_popup_find_pane_g1_ParamLimits

0x7a8d,	// (0x0001259c) input_popup_find_pane_g1

0x51fc,	// (0x0000fd0b) aid_navi_side_left_pane

0x5211,	// (0x0000fd20) aid_navi_side_right_pane

0x9eb5,	// (0x000149c4) bg_popup_window_pane_cp30_ParamLimits

0x9eb5,	// (0x000149c4) bg_popup_window_pane_cp30

0x9f2f,	// (0x00014a3e) popup_midp_note_alarm_window_g1_ParamLimits

0x9f2f,	// (0x00014a3e) popup_midp_note_alarm_window_g1

0x9f5f,	// (0x00014a6e) popup_midp_note_alarm_window_t1_ParamLimits

0x9f5f,	// (0x00014a6e) popup_midp_note_alarm_window_t1

0xa000,	// (0x00014b0f) popup_midp_note_alarm_window_t2_ParamLimits

0xa000,	// (0x00014b0f) popup_midp_note_alarm_window_t2

0xa0ae,	// (0x00014bbd) popup_midp_note_alarm_window_t3_ParamLimits

0xa0ae,	// (0x00014bbd) popup_midp_note_alarm_window_t3

0xa0e0,	// (0x00014bef) popup_midp_note_alarm_window_t4_ParamLimits

0xa0e0,	// (0x00014bef) popup_midp_note_alarm_window_t4

0xa106,	// (0x00014c15) popup_midp_note_alarm_window_t5_ParamLimits

0xa106,	// (0x00014c15) popup_midp_note_alarm_window_t5

0x000a,

0xf8d3,	// (0x0001a3e2) popup_midp_note_alarm_window_t_ParamLimits

0xf8d3,	// (0x0001a3e2) popup_midp_note_alarm_window_t

0xa1b2,	// (0x00014cc1) wait_bar_pane_cp1_ParamLimits

0xa1b2,	// (0x00014cc1) wait_bar_pane_cp1

0x68e2,	// (0x000113f1) wait_anim_pane_copy1

0x68e2,	// (0x000113f1) wait_border_pane_copy1

0x9b9a,	// (0x000146a9) wait_border_pane_g1_copy1

0x785e,	// (0x0001236d) form_field_popup_pane_g1

0x7866,	// (0x00012375) form_field_popup_pane_t1_ParamLimits

0x77fe,	// (0x0001230d) input_focus_pane_cp7_ParamLimits

0x7880,	// (0x0001238f) list_form_pane_ParamLimits

0x788c,	// (0x0001239b) form_field_popup_wide_pane_g1

0x7894,	// (0x000123a3) form_field_popup_wide_pane_t1_ParamLimits

0x77fe,	// (0x0001230d) input_focus_pane_cp8_ParamLimits

0x78a9,	// (0x000123b8) list_form_wide_pane_ParamLimits

0xad9a,	// (0x000158a9) aid_size_cell_graphic_pane

0x7982,	// (0x00012491) data_form_pane_t1_ParamLimits

0xab86,	// (0x00015695) data_form_wide_pane_t1_ParamLimits

0x90ca,	// (0x00013bd9) bg_status_flat_pane

0x6922,	// (0x00011431) title_pane_t1_ParamLimits

0x698a,	// (0x00011499) title_pane_t2_ParamLimits

0x69b0,	// (0x000114bf) title_pane_t3_ParamLimits

0xf59b,	// (0x0001a0aa) title_pane_t_ParamLimits

0x7f65,	// (0x00012a74) level_1_signal_ParamLimits

0x7f72,	// (0x00012a81) level_2_signal_ParamLimits

0x7f7f,	// (0x00012a8e) level_3_signal_ParamLimits

0x7f8c,	// (0x00012a9b) level_4_signal_ParamLimits

0x7f99,	// (0x00012aa8) level_5_signal_ParamLimits

0x7fa6,	// (0x00012ab5) level_6_signal_ParamLimits

0x7fb3,	// (0x00012ac2) level_7_signal_ParamLimits

0x7f65,	// (0x00012a74) level_1_battery_ParamLimits

0x7f72,	// (0x00012a81) level_2_battery_ParamLimits

0x7f7f,	// (0x00012a8e) level_3_battery_ParamLimits

0x7f8c,	// (0x00012a9b) level_4_battery_ParamLimits

0x7f99,	// (0x00012aa8) level_5_battery_ParamLimits

0x7fa6,	// (0x00012ab5) level_6_battery_ParamLimits

0x7fb3,	// (0x00012ac2) level_7_battery_ParamLimits

0x9dba,	// (0x000148c9) bg_status_flat_pane_g1

0x9dc2,	// (0x000148d1) bg_status_flat_pane_g2

0x9dca,	// (0x000148d9) bg_status_flat_pane_g3

0x9dd2,	// (0x000148e1) bg_status_flat_pane_g4

0x9dda,	// (0x000148e9) bg_status_flat_pane_g5

0x9de2,	// (0x000148f1) bg_status_flat_pane_g6

0x9dea,	// (0x000148f9) bg_status_flat_pane_g7

0x69d8,	// (0x000114e7) tabs_3_active_pane_t1_ParamLimits

0x69d8,	// (0x000114e7) tabs_3_passive_pane_t1_ParamLimits

0x69f2,	// (0x00011501) tabs_4_active_pane_t1_ParamLimits

0x69f2,	// (0x00011501) tabs_4_1_passive_pane_t1_ParamLimits

0x7b24,	// (0x00012633) tabs_2_active_pane_t1_ParamLimits

0x7b24,	// (0x00012633) tabs_2_passive_pane_t1_ParamLimits

0x7b36,	// (0x00012645) bg_active_tab_pane_cp4_ParamLimits

0x7b44,	// (0x00012653) tabs_2_long_active_pane_t1_ParamLimits

0x7b57,	// (0x00012666) bg_passive_tab_pane_cp4_ParamLimits

0x57d6,	// (0x000102e5) list_single_midp_graphic_pane_t1_ParamLimits

0x7b36,	// (0x00012645) bg_active_tab_pane_cp5_ParamLimits

0x7b63,	// (0x00012672) tabs_3_long_active_pane_t1_ParamLimits

0x7b57,	// (0x00012666) bg_passive_tab_pane_cp5_ParamLimits

0x57d6,	// (0x000102e5) list_single_midp_graphic_pane_t1

0x90ca,	// (0x00013bd9) bg_status_flat_pane_ParamLimits

0x9195,	// (0x00013ca4) indicator_pane_cp2_ParamLimits

0x9195,	// (0x00013ca4) indicator_pane_cp2

0x92d7,	// (0x00013de6) navi_pane_srt_ParamLimits

0x92d7,	// (0x00013de6) navi_pane_srt

0x92fb,	// (0x00013e0a) popup_clock_digital_analogue_window_cp1

0x6abc,	// (0x000115cb) indicator_pane_t1

0x864a,	// (0x00013159) copy_highlight_pane

0x864a,	// (0x00013159) cursor_graphics_pane

0x864a,	// (0x00013159) graphic_within_text_pane

0x864a,	// (0x00013159) link_highlight_pane

0xa5df,	// (0x000150ee) popup_preview_text_window_t5_ParamLimits

0xa5df,	// (0x000150ee) popup_preview_text_window_t5

0x877a,	// (0x00013289) cursor_digital_pane

0x877a,	// (0x00013289) cursor_primary_pane

0x878b,	// (0x0001329a) cursor_primary_small_pane

0x8793,	// (0x000132a2) cursor_secondary_pane

0x879b,	// (0x000132aa) cursor_title_pane

0x877a,	// (0x00013289) link_highlight_digital_pane

0x8782,	// (0x00013291) link_highlight_primary_pane

0x878b,	// (0x0001329a) link_highlight_primary_small_pane

0x8793,	// (0x000132a2) link_highlight_secondary_pane

0x879b,	// (0x000132aa) link_highlight_title_pane

0x877a,	// (0x00013289) copy_highlight_digital_pane

0x877a,	// (0x00013289) copy_highlight_primary_pane

0x878b,	// (0x0001329a) copy_highlight_primary_small_pane

0x8793,	// (0x000132a2) copy_highlight_secondary_pane

0x879b,	// (0x000132aa) copy_highlight_title_pane

0x8793,	// (0x000132a2) graphic_text_digital_pane

0x9e58,	// (0x00014967) graphic_text_primary_pane

0x9e61,	// (0x00014970) graphic_text_primary_small_pane

0x878b,	// (0x0001329a) graphic_text_secondary_pane

0x877a,	// (0x00013289) graphic_text_title_pane

0x87a3,	// (0x000132b2) cursor_primary_pane_g1

0x9e4a,	// (0x00014959) cursor_text_primary_t1

0x9e32,	// (0x00014941) cursor_primary_small_pane_g1

0x9e3c,	// (0x0001494b) cursor_text_primary_small_t1

0x9e1a,	// (0x00014929) cursor_primary_small_pane_g1_copy1

0x9e24,	// (0x00014933) cursor_text_primary_small_t1_copy1

0x9e02,	// (0x00014911) cursor_text_title_t1

0x9e10,	// (0x0001491f) cursor_title_pane_g1

0x87a3,	// (0x000132b2) cursor_digital_pane_g1

0x87ad,	// (0x000132bc) cursor_text_digital_t1

0x87bb,	// (0x000132ca) link_highlight_primary_pane_g1

0x9dab,	// (0x000148ba) link_highlight_primary_pane_t1

0x87bb,	// (0x000132ca) link_highlight_primary_small_pane_g1

0x87c3,	// (0x000132d2) link_highlight_primary_small_pane_t1

0x87d2,	// (0x000132e1) link_highlight_secondary_pane_g1

0x87da,	// (0x000132e9) link_highlight_secondary_pane_t1

0x9d1f,	// (0x0001482e) link_highlight_title_pane_g1

0x9d27,	// (0x00014836) link_highlight_title_pane_t1

0x9d08,	// (0x00014817) link_highlight_digital_pane_g1

0x9d10,	// (0x0001481f) link_highlight_digital_pane_t1

0x9bd0,	// (0x000146df) copy_highlight_primary_pane_g1

0x9be7,	// (0x000146f6) copy_highlight_primary_pane_t1

0x9bd0,	// (0x000146df) copy_highlight_primary_small_pane_g1

0x9bd8,	// (0x000146e7) copy_highlight_primary_small_pane_t1

0x87e9,	// (0x000132f8) copy_highlight_secondary_pane_g1

0x87f1,	// (0x00013300) copy_highlight_secondary_pane_t1

0x9bb9,	// (0x000146c8) copy_highlight_title_pane_g1

0x9bc1,	// (0x000146d0) copy_highlight_title_pane_t1

0x9bd0,	// (0x000146df) copy_highlight_digital_pane_g1

0xaf6a,	// (0x00015a79) copy_highlight_digital_pane_t1

0xaebe,	// (0x000159cd) graphic_text_primary_pane_g1

0xaf4e,	// (0x00015a5d) graphic_text_primary_pane_t1

0xaf5c,	// (0x00015a6b) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x0001a511) graphic_text_primary_pane_t

0xaf2a,	// (0x00015a39) graphic_text_primary_small_pane_g1

0xaf32,	// (0x00015a41) graphic_text_primary_small_pane_t1

0xaf40,	// (0x00015a4f) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x0001a50c) graphic_text_primary_small_pane_t

0xaf06,	// (0x00015a15) graphic_text_secondary_pane_g1

0xaf0e,	// (0x00015a1d) graphic_text_secondary_pane_t1

0xaf1c,	// (0x00015a2b) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x0001a507) graphic_text_secondary_pane_t

0xaee2,	// (0x000159f1) graphic_text_title_pane_g1

0xaeea,	// (0x000159f9) graphic_text_title_pane_t1

0xaef8,	// (0x00015a07) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x0001a502) graphic_text_title_pane_t

0xaebe,	// (0x000159cd) graphic_text_digital_pane_g1

0xaec6,	// (0x000159d5) graphic_text_digital_pane_t1

0xaed4,	// (0x000159e3) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x0001a4fd) graphic_text_digital_pane_t

0x69c2,	// (0x000114d1) navi_icon_pane_srt_ParamLimits

0x69c2,	// (0x000114d1) navi_icon_pane_srt

0x68e2,	// (0x000113f1) navi_midp_pane_srt

0x68e2,	// (0x000113f1) navi_navi_pane_srt

0x69c2,	// (0x000114d1) navi_text_pane_srt_ParamLimits

0x69c2,	// (0x000114d1) navi_text_pane_srt

0xae89,	// (0x00015998) navi_navi_icon_text_pane_srt

0xae91,	// (0x000159a0) navi_navi_pane_srt_g1_ParamLimits

0xae91,	// (0x000159a0) navi_navi_pane_srt_g1

0xaea3,	// (0x000159b2) navi_navi_pane_srt_g2_ParamLimits

0xaea3,	// (0x000159b2) navi_navi_pane_srt_g2

0x0001,

0xf9e9,	// (0x0001a4f8) navi_navi_pane_srt_g_ParamLimits

0xf9e9,	// (0x0001a4f8) navi_navi_pane_srt_g

0xaeb5,	// (0x000159c4) navi_navi_tabs_pane_srt

0xae89,	// (0x00015998) navi_navi_text_pane_srt

0xae89,	// (0x00015998) navi_navi_volume_pane_srt

0xae7a,	// (0x00015989) navi_navi_text_pane_srt_t1

0x5b72,	// (0x00010681) navi_navi_volume_pane_srt_g1

0x5b7a,	// (0x00010689) volume_small_pane_srt_ParamLimits

0x5b7a,	// (0x00010689) volume_small_pane_srt

0x54e3,	// (0x0000fff2) volume_small_pane_srt_g1_ParamLimits

0x54e3,	// (0x0000fff2) volume_small_pane_srt_g1

0x54f3,	// (0x00010002) volume_small_pane_srt_g2_ParamLimits

0x54f3,	// (0x00010002) volume_small_pane_srt_g2

0x5504,	// (0x00010013) volume_small_pane_srt_g3_ParamLimits

0x5504,	// (0x00010013) volume_small_pane_srt_g3

0x5515,	// (0x00010024) volume_small_pane_srt_g4_ParamLimits

0x5515,	// (0x00010024) volume_small_pane_srt_g4

0x5526,	// (0x00010035) volume_small_pane_srt_g5_ParamLimits

0x5526,	// (0x00010035) volume_small_pane_srt_g5

0x5537,	// (0x00010046) volume_small_pane_srt_g6_ParamLimits

0x5537,	// (0x00010046) volume_small_pane_srt_g6

0x5548,	// (0x00010057) volume_small_pane_srt_g7_ParamLimits

0x5548,	// (0x00010057) volume_small_pane_srt_g7

0x5559,	// (0x00010068) volume_small_pane_srt_g8_ParamLimits

0x5559,	// (0x00010068) volume_small_pane_srt_g8

0x556a,	// (0x00010079) volume_small_pane_srt_g9_ParamLimits

0x556a,	// (0x00010079) volume_small_pane_srt_g9

0x557b,	// (0x0001008a) volume_small_pane_srt_g10_ParamLimits

0x557b,	// (0x0001008a) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001a2a7) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001a2a7) volume_small_pane_srt_g

0x6dc3,	// (0x000118d2) query_popup_data_pane_cp2

0xae60,	// (0x0001596f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xae60,	// (0x0001596f) navi_navi_icon_text_pane_srt_t1

0x9e58,	// (0x00014967) navi_tabs_2_long_pane_srt

0x9e58,	// (0x00014967) navi_tabs_2_pane_srt

0x9e58,	// (0x00014967) navi_tabs_3_long_pane_srt

0x9e58,	// (0x00014967) navi_tabs_3_pane_srt

0x9e58,	// (0x00014967) navi_tabs_4_pane_srt

0x5b52,	// (0x00010661) tabs_2_active_pane_srt_ParamLimits

0x5b52,	// (0x00010661) tabs_2_active_pane_srt

0x5b62,	// (0x00010671) tabs_2_passive_pane_srt_ParamLimits

0x5b62,	// (0x00010671) tabs_2_passive_pane_srt

0x89d8,	// (0x000134e7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x89d8,	// (0x000134e7) bg_passive_tab_pane_cp1_srt

0xae2c,	// (0x0001593b) bg_passive_tab_pane_g1_cp1_srt

0x8293,	// (0x00012da2) bg_passive_tab_pane_g2_cp1_srt

0xae35,	// (0x00015944) bg_passive_tab_pane_g3_cp1_srt

0x69c2,	// (0x000114d1) bg_active_tab_pane_cp1_srt_ParamLimits

0x69c2,	// (0x000114d1) bg_active_tab_pane_cp1_srt

0xae3e,	// (0x0001594d) tabs_2_active_pane_srt_g1

0xae46,	// (0x00015955) tabs_2_active_pane_srt_t1_ParamLimits

0xae46,	// (0x00015955) tabs_2_active_pane_srt_t1

0xae2c,	// (0x0001593b) bg_active_tab_pane_g1_cp1_srt

0x8293,	// (0x00012da2) bg_active_tab_pane_g2_cp1_srt

0xae35,	// (0x00015944) bg_active_tab_pane_g3_cp1_srt

0x5b1f,	// (0x0001062e) tabs_3_active_pane_srt_ParamLimits

0x5b1f,	// (0x0001062e) tabs_3_active_pane_srt

0x5b30,	// (0x0001063f) tabs_3_passive_pane_cp_srt_ParamLimits

0x5b30,	// (0x0001063f) tabs_3_passive_pane_cp_srt

0x5b41,	// (0x00010650) tabs_3_passive_pane_srt_ParamLimits

0x5b41,	// (0x00010650) tabs_3_passive_pane_srt

0x89d8,	// (0x000134e7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x89d8,	// (0x000134e7) bg_passive_tab_pane_cp2_srt

0x8800,	// (0x0001330f) bg_passive_tab_pane_g1_cp2_srt

0x8293,	// (0x00012da2) bg_passive_tab_pane_g2_cp2_srt

0x8809,	// (0x00013318) bg_passive_tab_pane_g3_cp2_srt

0x69c2,	// (0x000114d1) bg_active_tab_pane_cp2_srt_ParamLimits

0x69c2,	// (0x000114d1) bg_active_tab_pane_cp2_srt

0xae12,	// (0x00015921) tabs_3_active_pane_srt_g1

0xae1a,	// (0x00015929) tabs_3_active_pane_srt_t1_ParamLimits

0xae1a,	// (0x00015929) tabs_3_active_pane_srt_t1

0x8800,	// (0x0001330f) bg_active_tab_pane_g1_cp2_srt

0x8293,	// (0x00012da2) bg_active_tab_pane_g2_cp2_srt

0x8809,	// (0x00013318) bg_active_tab_pane_g3_cp2_srt

0x5ad7,	// (0x000105e6) tabs_4_active_pane_srt_ParamLimits

0x5ad7,	// (0x000105e6) tabs_4_active_pane_srt

0x5ae9,	// (0x000105f8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5ae9,	// (0x000105f8) tabs_4_passive_pane_cp2_srt

0x895e,	// (0x0001346d) aid_size_cell_toolbar

0x7b57,	// (0x00012666) main_idle_act_pane_ParamLimits

0x8ba5,	// (0x000136b4) popup_large_graphic_colour_window_ParamLimits

0x8f4c,	// (0x00013a5b) popup_toolbar_window_ParamLimits

0x8f4c,	// (0x00013a5b) popup_toolbar_window

0xac00,	// (0x0001570f) list_single_graphic_2heading_pane_ParamLimits

0xac00,	// (0x0001570f) list_single_graphic_2heading_pane

0x7d13,	// (0x00012822) aid_size_cell_apps_grid_lsc_pane

0x7d25,	// (0x00012834) aid_size_cell_apps_grid_prt_pane

0x89d8,	// (0x000134e7) bg_wml_button_pane_cp1_ParamLimits

0x89d8,	// (0x000134e7) bg_wml_button_pane_cp1

0x9861,	// (0x00014370) form_midp_field_text_pane_t1_ParamLimits

0x9666,	// (0x00014175) input_focus_pane_cp050_ParamLimits

0x988c,	// (0x0001439b) list_midp_form_text_pane_ParamLimits

0x983e,	// (0x0001434d) input_focus_pane_cp051_ParamLimits

0x9852,	// (0x00014361) list_midp_choice_pane_ParamLimits

0x96f7,	// (0x00014206) list_single_2graphic_pane_cp3_ParamLimits

0x96f7,	// (0x00014206) list_single_2graphic_pane_cp3

0x9710,	// (0x0001421f) list_single_midp_graphic_pane_ParamLimits

0x9710,	// (0x0001421f) list_single_midp_graphic_pane

0x56da,	// (0x000101e9) list_single_graphic_2heading_pane_g1_ParamLimits

0x56da,	// (0x000101e9) list_single_graphic_2heading_pane_g1

0x56e6,	// (0x000101f5) list_single_graphic_2heading_pane_g4_ParamLimits

0x56e6,	// (0x000101f5) list_single_graphic_2heading_pane_g4

0x56f2,	// (0x00010201) list_single_graphic_2heading_pane_g5_ParamLimits

0x56f2,	// (0x00010201) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001a2fa) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001a2fa) list_single_graphic_2heading_pane_g

0x56fe,	// (0x0001020d) list_single_graphic_2heading_pane_t1_ParamLimits

0x56fe,	// (0x0001020d) list_single_graphic_2heading_pane_t1

0x5712,	// (0x00010221) list_single_graphic_2heading_pane_t2_ParamLimits

0x5712,	// (0x00010221) list_single_graphic_2heading_pane_t2

0x572e,	// (0x0001023d) list_single_graphic_2heading_pane_t3_ParamLimits

0x572e,	// (0x0001023d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001a301) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001a301) list_single_graphic_2heading_pane_t

0x945a,	// (0x00013f69) bg_popup_sub_pane_cp2

0x9484,	// (0x00013f93) grid_toobar_pane

0x5746,	// (0x00010255) cell_toolbar_pane_ParamLimits

0x5746,	// (0x00010255) cell_toolbar_pane

0x94ee,	// (0x00013ffd) cell_toolbar_pane_g1_ParamLimits

0x94ee,	// (0x00013ffd) cell_toolbar_pane_g1

0x9502,	// (0x00014011) cell_toolbar_pane_g2_ParamLimits

0x9502,	// (0x00014011) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0001a30f) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0001a30f) cell_toolbar_pane_g

0x9524,	// (0x00014033) grid_highlight_pane_cp2_ParamLimits

0x9524,	// (0x00014033) grid_highlight_pane_cp2

0x953e,	// (0x0001404d) toolbar_button_pane

0x954a,	// (0x00014059) toolbar_button_pane_g1

0x9552,	// (0x00014061) toolbar_button_pane_g2

0x955a,	// (0x00014069) toolbar_button_pane_g3

0x9562,	// (0x00014071) toolbar_button_pane_g4

0x956a,	// (0x00014079) toolbar_button_pane_g5

0x9572,	// (0x00014081) toolbar_button_pane_g6

0x957a,	// (0x00014089) toolbar_button_pane_g7

0x9582,	// (0x00014091) toolbar_button_pane_g8

0x958a,	// (0x00014099) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0001a314) toolbar_button_pane_g

0x577e,	// (0x0001028d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x577e,	// (0x0001028d) list_single_2graphic_pane_g1_cp3

0x578a,	// (0x00010299) list_single_2graphic_pane_g2_cp3_ParamLimits

0x578a,	// (0x00010299) list_single_2graphic_pane_g2_cp3

0x579b,	// (0x000102aa) list_single_2graphic_pane_g3_cp3

0x57a3,	// (0x000102b2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x57a3,	// (0x000102b2) list_single_2graphic_pane_g4_cp3

0x57af,	// (0x000102be) list_single_2graphic_pane_t1_cp3_ParamLimits

0x57af,	// (0x000102be) list_single_2graphic_pane_t1_cp3

0x57ca,	// (0x000102d9) list_single_midp_graphic_pane_g2_ParamLimits

0x57ca,	// (0x000102d9) list_single_midp_graphic_pane_g2

0x8966,	// (0x00013475) aid_zoom_text_primary

0x896e,	// (0x0001347d) aid_zoom_text_secondary

0x88bd,	// (0x000133cc) status_small_pane_g7_ParamLimits

0x88bd,	// (0x000133cc) status_small_pane_g7

0x88e0,	// (0x000133ef) status_small_pane_t1_ParamLimits

0x68f9,	// (0x00011408) title_pane_g2

0x0003,

0xf592,	// (0x0001a0a1) title_pane_g

0x6e6c,	// (0x0001197b) aid_size_cell_colour_1_pane_ParamLimits

0x6e6c,	// (0x0001197b) aid_size_cell_colour_1_pane

0x6e80,	// (0x0001198f) aid_size_cell_colour_2_pane_ParamLimits

0x6e80,	// (0x0001198f) aid_size_cell_colour_2_pane

0x6e94,	// (0x000119a3) aid_size_cell_colour_3_pane_ParamLimits

0x6e94,	// (0x000119a3) aid_size_cell_colour_3_pane

0x6ea8,	// (0x000119b7) aid_size_cell_colour_4_pane_ParamLimits

0x6ea8,	// (0x000119b7) aid_size_cell_colour_4_pane

0x5138,	// (0x0000fc47) title_pane_stacon_g1_ParamLimits

0x5138,	// (0x0000fc47) title_pane_stacon_g1

0x9c3e,	// (0x0001474d) popup_note_wait_window_g3_ParamLimits

0x9c3e,	// (0x0001474d) popup_note_wait_window_g3

0x9cb5,	// (0x000147c4) popup_note_wait_window_t5_ParamLimits

0x9cb5,	// (0x000147c4) popup_note_wait_window_t5

0x68e2,	// (0x000113f1) main_feb_china_hwr_fs_writing_pane

0x8a6c,	// (0x0001357b) popup_feb_china_hwr_fs_window_ParamLimits

0x8a6c,	// (0x0001357b) popup_feb_china_hwr_fs_window

0x57ec,	// (0x000102fb) aid_size_cell_hwr_fs_ParamLimits

0x57ec,	// (0x000102fb) aid_size_cell_hwr_fs

0x9666,	// (0x00014175) bg_popup_sub_pane_cp3_ParamLimits

0x9666,	// (0x00014175) bg_popup_sub_pane_cp3

0x5801,	// (0x00010310) grid_hwr_fs_pane_ParamLimits

0x5801,	// (0x00010310) grid_hwr_fs_pane

0x5819,	// (0x00010328) linegrid_hwr_fs_pane_ParamLimits

0x5819,	// (0x00010328) linegrid_hwr_fs_pane

0x5829,	// (0x00010338) cell_hwr_fs_pane_ParamLimits

0x5829,	// (0x00010338) cell_hwr_fs_pane

0x9672,	// (0x00014181) linegrid_hwr_fs_pane_g1_ParamLimits

0x9672,	// (0x00014181) linegrid_hwr_fs_pane_g1

0x967e,	// (0x0001418d) linegrid_hwr_fs_pane_g2_ParamLimits

0x967e,	// (0x0001418d) linegrid_hwr_fs_pane_g2

0x9690,	// (0x0001419f) linegrid_hwr_fs_pane_g3_ParamLimits

0x9690,	// (0x0001419f) linegrid_hwr_fs_pane_g3

0x584d,	// (0x0001035c) linegrid_hwr_fs_pane_g4_ParamLimits

0x584d,	// (0x0001035c) linegrid_hwr_fs_pane_g4

0x586b,	// (0x0001037a) linegrid_hwr_fs_pane_g5_ParamLimits

0x586b,	// (0x0001037a) linegrid_hwr_fs_pane_g5

0x0004,

0xf830,	// (0x0001a33f) linegrid_hwr_fs_pane_g_ParamLimits

0xf830,	// (0x0001a33f) linegrid_hwr_fs_pane_g

0x969c,	// (0x000141ab) cell_hwr_fs_pane_g1_ParamLimits

0x969c,	// (0x000141ab) cell_hwr_fs_pane_g1

0x9391,	// (0x00013ea0) cell_hwr_fs_pane_g2_ParamLimits

0x9391,	// (0x00013ea0) cell_hwr_fs_pane_g2

0x96b2,	// (0x000141c1) cell_hwr_fs_pane_g3_ParamLimits

0x96b2,	// (0x000141c1) cell_hwr_fs_pane_g3

0x96bf,	// (0x000141ce) cell_hwr_fs_pane_g4_ParamLimits

0x96bf,	// (0x000141ce) cell_hwr_fs_pane_g4

0x0003,

0xf83b,	// (0x0001a34a) cell_hwr_fs_pane_g_ParamLimits

0xf83b,	// (0x0001a34a) cell_hwr_fs_pane_g

0x5881,	// (0x00010390) cell_hwr_fs_pane_t1

0x68e2,	// (0x000113f1) grid_highlight_pane_cp6

0x68e2,	// (0x000113f1) main_idle_act2_pane

0x7ac9,	// (0x000125d8) aid_inside_area_popup_secondary

0xa2ee,	// (0x00014dfd) aid_inside_area_window_primary_ParamLimits

0xa2ee,	// (0x00014dfd) aid_inside_area_window_primary

0xaf79,	// (0x00015a88) ai2_news_ticker_pane

0xaf81,	// (0x00015a90) aid_size_cell_ai1_link_ParamLimits

0xaf81,	// (0x00015a90) aid_size_cell_ai1_link

0xaf9b,	// (0x00015aaa) popup_ai2_data_window_ParamLimits

0xaf9b,	// (0x00015aaa) popup_ai2_data_window

0xafb9,	// (0x00015ac8) popup_ai2_link_window_ParamLimits

0xafb9,	// (0x00015ac8) popup_ai2_link_window

0x9666,	// (0x00014175) bg_popup_sub_pane_cp4_ParamLimits

0x9666,	// (0x00014175) bg_popup_sub_pane_cp4

0xafcf,	// (0x00015ade) grid_ai2_link_pane_ParamLimits

0xafcf,	// (0x00015ade) grid_ai2_link_pane

0xafe6,	// (0x00015af5) popup_ai2_link_window_g1_ParamLimits

0xafe6,	// (0x00015af5) popup_ai2_link_window_g1

0xaff2,	// (0x00015b01) popup_ai2_link_window_g2_ParamLimits

0xaff2,	// (0x00015b01) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x0001a516) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x0001a516) popup_ai2_link_window_g

0xb003,	// (0x00015b12) ai2_mp_button_pane

0xb00b,	// (0x00015b1a) ai2_mp_volume_pane

0x983e,	// (0x0001434d) bg_popup_sub_pane_cp5_ParamLimits

0x983e,	// (0x0001434d) bg_popup_sub_pane_cp5

0xb013,	// (0x00015b22) heading_ai2_gene_pane_ParamLimits

0xb013,	// (0x00015b22) heading_ai2_gene_pane

0xb01f,	// (0x00015b2e) list_ai2_gene_pane_ParamLimits

0xb01f,	// (0x00015b2e) list_ai2_gene_pane

0xb067,	// (0x00015b76) cell_ai2_link_pane_ParamLimits

0xb067,	// (0x00015b76) cell_ai2_link_pane

0xb07d,	// (0x00015b8c) cell_ai2_link_pane_g1

0x68e2,	// (0x000113f1) grid_highlight_pane_cp7

0x5b8f,	// (0x0001069e) ai2_mp_volume_pane_g1

0xb150,	// (0x00015c5f) ai2_mp_volume_pane_g2

0xb0c5,	// (0x00015bd4) list_ai2_gene_pane_t1

0xb158,	// (0x00015c67) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x0001a52f) ai2_mp_volume_pane_g

0x5b97,	// (0x000106a6) volume_small_pane_cp3

0xb160,	// (0x00015c6f) aid_size_cell_ai2_button

0xb168,	// (0x00015c77) grid_ai2_button_pane

0xb171,	// (0x00015c80) cell_ai2_button_pane_ParamLimits

0xb171,	// (0x00015c80) cell_ai2_button_pane

0x68d8,	// (0x000113e7) cell_ai2_button_pane_g1

0x68e2,	// (0x000113f1) grid_highlight_pane_cp8

0xb110,	// (0x00015c1f) ai2_gene_pane_t1_ParamLimits

0xb110,	// (0x00015c1f) ai2_gene_pane_t1

0x8954,	// (0x00013463) aid_height_parent_landscape

0xa9c2,	// (0x000154d1) aid_height_set_list

0xa9d3,	// (0x000154e2) aid_size_parent

0xad9a,	// (0x000158a9) aid_size_cell_graphic_pane_ParamLimits

0xb02f,	// (0x00015b3e) popup_ai2_data_window_g1_ParamLimits

0xb02f,	// (0x00015b3e) popup_ai2_data_window_g1

0xb03b,	// (0x00015b4a) ai2_news_ticker_pane_g1

0xb043,	// (0x00015b52) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x0001a51b) ai2_news_ticker_pane_g

0xb04b,	// (0x00015b5a) ai2_news_ticker_pane_t1

0xb059,	// (0x00015b68) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x0001a520) ai2_news_ticker_pane_t

0xb086,	// (0x00015b95) heading_ai2_gene_pane_g1

0xb08e,	// (0x00015b9d) heading_ai2_gene_pane_t1_ParamLimits

0xb08e,	// (0x00015b9d) heading_ai2_gene_pane_t1

0xb0a3,	// (0x00015bb2) list_highlight_pane_cp6

0xb0ab,	// (0x00015bba) ai2_gene_pane_ParamLimits

0xb0ab,	// (0x00015bba) ai2_gene_pane

0xb0d3,	// (0x00015be2) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x0001a525) list_ai2_gene_pane_t

0xb0e1,	// (0x00015bf0) list_highlight_pane_cp8_ParamLimits

0xb0e1,	// (0x00015bf0) list_highlight_pane_cp8

0xb0f2,	// (0x00015c01) ai2_gene_pane_g1_ParamLimits

0xb0f2,	// (0x00015c01) ai2_gene_pane_g1

0xb104,	// (0x00015c13) ai2_gene_pane_g2_ParamLimits

0xb104,	// (0x00015c13) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x0001a52a) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x0001a52a) ai2_gene_pane_g

0x71f9,	// (0x00011d08) scroll_pane_cp12

0x5699,	// (0x000101a8) control_pane_t3_ParamLimits

0x5699,	// (0x000101a8) control_pane_t3

0x88d1,	// (0x000133e0) status_small_pane_g8_ParamLimits

0x88d1,	// (0x000133e0) status_small_pane_g8

0x8b6a,	// (0x00013679) popup_find_window_ParamLimits

0x8d95,	// (0x000138a4) popup_note_image_window_ParamLimits

0x94c0,	// (0x00013fcf) list_double2_graphic_pane_vc_g1_ParamLimits

0x94c0,	// (0x00013fcf) list_double2_graphic_pane_vc_g1

0x85bb,	// (0x000130ca) list_double2_graphic_pane_vc_g2_ParamLimits

0x85bb,	// (0x000130ca) list_double2_graphic_pane_vc_g2

0x94cc,	// (0x00013fdb) list_double2_graphic_pane_vc_g3_ParamLimits

0x94cc,	// (0x00013fdb) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0001a308) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a308) list_double2_graphic_pane_vc_g

0x94d8,	// (0x00013fe7) list_double2_graphic_pane_vc_t1_ParamLimits

0x94d8,	// (0x00013fe7) list_double2_graphic_pane_vc_t1

0x85bb,	// (0x000130ca) list_single_heading_pane_vc_g1_ParamLimits

0x85bb,	// (0x000130ca) list_single_heading_pane_vc_g1

0x94cc,	// (0x00013fdb) list_single_heading_pane_vc_g2_ParamLimits

0x94cc,	// (0x00013fdb) list_single_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x0001a329) list_single_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x0001a329) list_single_heading_pane_vc_g

0x9592,	// (0x000140a1) list_single_heading_pane_vc_t1_ParamLimits

0x9592,	// (0x000140a1) list_single_heading_pane_vc_t1

0x95a8,	// (0x000140b7) list_single_heading_pane_vc_t2_ParamLimits

0x95a8,	// (0x000140b7) list_single_heading_pane_vc_t2

0x0001,

0xf81f,	// (0x0001a32e) list_single_heading_pane_vc_t_ParamLimits

0xf81f,	// (0x0001a32e) list_single_heading_pane_vc_t

0x95bc,	// (0x000140cb) list_setting_number_pane_vc_g1_ParamLimits

0x95bc,	// (0x000140cb) list_setting_number_pane_vc_g1

0x95c8,	// (0x000140d7) list_setting_number_pane_vc_g2_ParamLimits

0x95c8,	// (0x000140d7) list_setting_number_pane_vc_g2

0x0001,

0xf824,	// (0x0001a333) list_setting_number_pane_vc_g_ParamLimits

0xf824,	// (0x0001a333) list_setting_number_pane_vc_g

0x95d4,	// (0x000140e3) list_setting_number_pane_vc_t1_ParamLimits

0x95d4,	// (0x000140e3) list_setting_number_pane_vc_t1

0x95e8,	// (0x000140f7) list_setting_number_pane_vc_t2_ParamLimits

0x95e8,	// (0x000140f7) list_setting_number_pane_vc_t2

0x9604,	// (0x00014113) list_setting_number_pane_vc_t3_ParamLimits

0x9604,	// (0x00014113) list_setting_number_pane_vc_t3

0x0002,

0xf829,	// (0x0001a338) list_setting_number_pane_vc_t_ParamLimits

0xf829,	// (0x0001a338) list_setting_number_pane_vc_t

0x962c,	// (0x0001413b) set_value_pane_vc_ParamLimits

0x962c,	// (0x0001413b) set_value_pane_vc

0xac00,	// (0x0001570f) list_double2_graphic_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_double2_graphic_pane_vc

0xac00,	// (0x0001570f) list_double2_large_graphic_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_double2_large_graphic_pane_vc

0xac00,	// (0x0001570f) list_double2_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_double2_pane_vc

0xac00,	// (0x0001570f) list_double_graphic_heading_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_double_graphic_heading_pane_vc

0xac00,	// (0x0001570f) list_double_graphic_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_double_graphic_pane_vc

0xac00,	// (0x0001570f) list_double_heading_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_double_heading_pane_vc

0xac00,	// (0x0001570f) list_double_large_graphic_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_double_large_graphic_pane_vc

0xac00,	// (0x0001570f) list_double_number_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_double_number_pane_vc

0xac00,	// (0x0001570f) list_double_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_double_pane_vc

0xac00,	// (0x0001570f) list_double_time_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_double_time_pane_vc

0xac00,	// (0x0001570f) list_setting_number_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_setting_number_pane_vc

0xac00,	// (0x0001570f) list_setting_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_setting_pane_vc

0xac00,	// (0x0001570f) list_single_graphic_heading_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_single_graphic_heading_pane_vc

0xac00,	// (0x0001570f) list_single_heading_pane_vc_ParamLimits

0xac00,	// (0x0001570f) list_single_heading_pane_vc

0xac14,	// (0x00015723) list_single_number_heading_pane_vc_ParamLimits

0xac14,	// (0x00015723) list_single_number_heading_pane_vc

0x94c0,	// (0x00013fcf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x94c0,	// (0x00013fcf) list_double_graphic_heading_pane_vc_g1

0xb1a4,	// (0x00015cb3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb1a4,	// (0x00015cb3) list_double_graphic_heading_pane_vc_g2

0xb1b0,	// (0x00015cbf) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb1b0,	// (0x00015cbf) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa27,	// (0x0001a536) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa27,	// (0x0001a536) list_double_graphic_heading_pane_vc_g

0xb1bc,	// (0x00015ccb) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb1bc,	// (0x00015ccb) list_double_graphic_heading_pane_vc_t1

0x9592,	// (0x000140a1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9592,	// (0x000140a1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa2e,	// (0x0001a53d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0001a53d) list_double_graphic_heading_pane_vc_t

0x95bc,	// (0x000140cb) list_setting_pane_vc_g1_ParamLimits

0x95bc,	// (0x000140cb) list_setting_pane_vc_g1

0x95c8,	// (0x000140d7) list_setting_pane_vc_g2_ParamLimits

0x95c8,	// (0x000140d7) list_setting_pane_vc_g2

0x0001,

0xf824,	// (0x0001a333) list_setting_pane_vc_g_ParamLimits

0xf824,	// (0x0001a333) list_setting_pane_vc_g

0xb3d9,	// (0x00015ee8) list_setting_pane_vc_t1_ParamLimits

0xb3d9,	// (0x00015ee8) list_setting_pane_vc_t1

0xb3ed,	// (0x00015efc) list_setting_pane_vc_t2_ParamLimits

0xb3ed,	// (0x00015efc) list_setting_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001a56b) list_setting_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001a56b) list_setting_pane_vc_t

0x962c,	// (0x0001413b) set_value_pane_cp_vc_ParamLimits

0x962c,	// (0x0001413b) set_value_pane_cp_vc

0x85bb,	// (0x000130ca) list_single_number_heading_pane_vc_g1_ParamLimits

0x85bb,	// (0x000130ca) list_single_number_heading_pane_vc_g1

0x94cc,	// (0x00013fdb) list_single_number_heading_pane_vc_g2_ParamLimits

0x94cc,	// (0x00013fdb) list_single_number_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x0001a329) list_single_number_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x0001a329) list_single_number_heading_pane_vc_g

0x9592,	// (0x000140a1) list_single_number_heading_pane_vc_t1_ParamLimits

0x9592,	// (0x000140a1) list_single_number_heading_pane_vc_t1

0xb40f,	// (0x00015f1e) list_single_number_heading_pane_vc_t2_ParamLimits

0xb40f,	// (0x00015f1e) list_single_number_heading_pane_vc_t2

0xb423,	// (0x00015f32) list_single_number_heading_pane_vc_t3_ParamLimits

0xb423,	// (0x00015f32) list_single_number_heading_pane_vc_t3

0x0002,

0xfa61,	// (0x0001a570) list_single_number_heading_pane_vc_t_ParamLimits

0xfa61,	// (0x0001a570) list_single_number_heading_pane_vc_t

0x94c0,	// (0x00013fcf) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x94c0,	// (0x00013fcf) list_single_graphic_heading_pane_vc_g1

0x85bb,	// (0x000130ca) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x85bb,	// (0x000130ca) list_single_graphic_heading_pane_vc_g4

0x94cc,	// (0x00013fdb) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x94cc,	// (0x00013fdb) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0001a308) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a308) list_single_graphic_heading_pane_vc_g

0x9592,	// (0x000140a1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9592,	// (0x000140a1) list_single_graphic_heading_pane_vc_t1

0xb435,	// (0x00015f44) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb435,	// (0x00015f44) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001a577) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001a577) list_single_graphic_heading_pane_vc_t

0x85bb,	// (0x000130ca) list_double2_pane_vc_g1_ParamLimits

0x85bb,	// (0x000130ca) list_double2_pane_vc_g1

0x94cc,	// (0x00013fdb) list_double2_pane_vc_g2_ParamLimits

0x94cc,	// (0x00013fdb) list_double2_pane_vc_g2

0x0001,

0xf81a,	// (0x0001a329) list_double2_pane_vc_g_ParamLimits

0xf81a,	// (0x0001a329) list_double2_pane_vc_g

0xb48b,	// (0x00015f9a) list_double2_pane_vc_t1_ParamLimits

0xb48b,	// (0x00015f9a) list_double2_pane_vc_t1

0xb4a1,	// (0x00015fb0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb4a1,	// (0x00015fb0) list_double2_large_graphic_pane_vc_g1

0x85bb,	// (0x000130ca) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x85bb,	// (0x000130ca) list_double2_large_graphic_pane_vc_g2

0x94cc,	// (0x00013fdb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x94cc,	// (0x00013fdb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa6d,	// (0x0001a57c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001a57c) list_double2_large_graphic_pane_vc_g

0xb4ad,	// (0x00015fbc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb4ad,	// (0x00015fbc) list_double2_large_graphic_pane_vc_t1

0xb4c3,	// (0x00015fd2) list_double_time_pane_vc_g1_ParamLimits

0xb4c3,	// (0x00015fd2) list_double_time_pane_vc_g1

0xb4cf,	// (0x00015fde) list_double_time_pane_vc_g2_ParamLimits

0xb4cf,	// (0x00015fde) list_double_time_pane_vc_g2

0x0001,

0xfa74,	// (0x0001a583) list_double_time_pane_vc_g_ParamLimits

0xfa74,	// (0x0001a583) list_double_time_pane_vc_g

0xb4db,	// (0x00015fea) list_double_time_pane_vc_t1_ParamLimits

0xb4db,	// (0x00015fea) list_double_time_pane_vc_t1

0xb4f4,	// (0x00016003) list_double_time_pane_vc_t2_ParamLimits

0xb4f4,	// (0x00016003) list_double_time_pane_vc_t2

0xb514,	// (0x00016023) list_double_time_pane_vc_t3_ParamLimits

0xb514,	// (0x00016023) list_double_time_pane_vc_t3

0xb52c,	// (0x0001603b) list_double_time_pane_vc_t4_ParamLimits

0xb52c,	// (0x0001603b) list_double_time_pane_vc_t4

0x0003,

0xfa79,	// (0x0001a588) list_double_time_pane_vc_t_ParamLimits

0xfa79,	// (0x0001a588) list_double_time_pane_vc_t

0x85bb,	// (0x000130ca) list_double_pane_vc_g1_ParamLimits

0x85bb,	// (0x000130ca) list_double_pane_vc_g1

0x94cc,	// (0x00013fdb) list_double_pane_vc_g2_ParamLimits

0x94cc,	// (0x00013fdb) list_double_pane_vc_g2

0x0001,

0xf81a,	// (0x0001a329) list_double_pane_vc_g_ParamLimits

0xf81a,	// (0x0001a329) list_double_pane_vc_g

0xb540,	// (0x0001604f) list_double_pane_vc_t1_ParamLimits

0xb540,	// (0x0001604f) list_double_pane_vc_t1

0xb552,	// (0x00016061) list_double_pane_vc_t2_ParamLimits

0xb552,	// (0x00016061) list_double_pane_vc_t2

0x0001,

0xfa82,	// (0x0001a591) list_double_pane_vc_t_ParamLimits

0xfa82,	// (0x0001a591) list_double_pane_vc_t

0x85bb,	// (0x000130ca) list_double_number_pane_vc_g1_ParamLimits

0x85bb,	// (0x000130ca) list_double_number_pane_vc_g1

0x94cc,	// (0x00013fdb) list_double_number_pane_vc_g2_ParamLimits

0x94cc,	// (0x00013fdb) list_double_number_pane_vc_g2

0x0001,

0xf81a,	// (0x0001a329) list_double_number_pane_vc_g_ParamLimits

0xf81a,	// (0x0001a329) list_double_number_pane_vc_g

0xb56a,	// (0x00016079) list_double_number_pane_vc_t1_ParamLimits

0xb56a,	// (0x00016079) list_double_number_pane_vc_t1

0xb57e,	// (0x0001608d) list_double_number_pane_vc_t2_ParamLimits

0xb57e,	// (0x0001608d) list_double_number_pane_vc_t2

0xb552,	// (0x00016061) list_double_number_pane_vc_t3_ParamLimits

0xb552,	// (0x00016061) list_double_number_pane_vc_t3

0x0002,

0xfa87,	// (0x0001a596) list_double_number_pane_vc_t_ParamLimits

0xfa87,	// (0x0001a596) list_double_number_pane_vc_t

0xb590,	// (0x0001609f) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb590,	// (0x0001609f) list_double_large_graphic_pane_vc_g1

0xb59c,	// (0x000160ab) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb59c,	// (0x000160ab) list_double_large_graphic_pane_vc_g2

0x94cc,	// (0x00013fdb) list_double_large_graphic_pane_vc_g3_ParamLimits

0x94cc,	// (0x00013fdb) list_double_large_graphic_pane_vc_g3

0xb5ab,	// (0x000160ba) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb5ab,	// (0x000160ba) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa8e,	// (0x0001a59d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa8e,	// (0x0001a59d) list_double_large_graphic_pane_vc_g

0xb5b7,	// (0x000160c6) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb5b7,	// (0x000160c6) list_double_large_graphic_pane_vc_t1

0xb5c9,	// (0x000160d8) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb5c9,	// (0x000160d8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa97,	// (0x0001a5a6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa97,	// (0x0001a5a6) list_double_large_graphic_pane_vc_t

0xb1a4,	// (0x00015cb3) list_double_heading_pane_vc_g1_ParamLimits

0xb1a4,	// (0x00015cb3) list_double_heading_pane_vc_g1

0xb1b0,	// (0x00015cbf) list_double_heading_pane_vc_g2_ParamLimits

0xb1b0,	// (0x00015cbf) list_double_heading_pane_vc_g2

0x0001,

0xfa9c,	// (0x0001a5ab) list_double_heading_pane_vc_g_ParamLimits

0xfa9c,	// (0x0001a5ab) list_double_heading_pane_vc_g

0xb5e2,	// (0x000160f1) list_double_heading_pane_vc_t1_ParamLimits

0xb5e2,	// (0x000160f1) list_double_heading_pane_vc_t1

0x9592,	// (0x000140a1) list_double_heading_pane_vc_t2_ParamLimits

0x9592,	// (0x000140a1) list_double_heading_pane_vc_t2

0x0001,

0xfaa1,	// (0x0001a5b0) list_double_heading_pane_vc_t_ParamLimits

0xfaa1,	// (0x0001a5b0) list_double_heading_pane_vc_t

0x94c0,	// (0x00013fcf) list_double_graphic_pane_vc_g1_ParamLimits

0x94c0,	// (0x00013fcf) list_double_graphic_pane_vc_g1

0xb5f6,	// (0x00016105) list_double_graphic_pane_vc_g2_ParamLimits

0xb5f6,	// (0x00016105) list_double_graphic_pane_vc_g2

0xb605,	// (0x00016114) list_double_graphic_pane_vc_g3_ParamLimits

0xb605,	// (0x00016114) list_double_graphic_pane_vc_g3

0x0002,

0xfaa6,	// (0x0001a5b5) list_double_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0001a5b5) list_double_graphic_pane_vc_g

0xb611,	// (0x00016120) list_double_graphic_pane_vc_t1_ParamLimits

0xb611,	// (0x00016120) list_double_graphic_pane_vc_t1

0xb552,	// (0x00016061) list_double_graphic_pane_vc_t2_ParamLimits

0xb552,	// (0x00016061) list_double_graphic_pane_vc_t2

0x0001,

0xfaad,	// (0x0001a5bc) list_double_graphic_pane_vc_t_ParamLimits

0xfaad,	// (0x0001a5bc) list_double_graphic_pane_vc_t

0x4c83,	// (0x0000f792) aid_size_cell_fastswap

0x4c8b,	// (0x0000f79a) aid_size_cell_touch_ParamLimits

0x4c8b,	// (0x0000f79a) aid_size_cell_touch

0x4ef6,	// (0x0000fa05) popup_fast_swap_wide_window_ParamLimits

0x4ef6,	// (0x0000fa05) popup_fast_swap_wide_window

0x500c,	// (0x0000fb1b) touch_pane_ParamLimits

0x500c,	// (0x0000fb1b) touch_pane

0x7708,	// (0x00012217) button_value_adjust_pane_cp2

0x7710,	// (0x0001221f) button_value_adjust_pane_cp4

0x7736,	// (0x00012245) form_field_data_pane_cp2

0x775b,	// (0x0001226a) form_field_data_wide_pane_cp2

0x7de5,	// (0x000128f4) bg_scroll_pane_ParamLimits

0x529d,	// (0x0000fdac) scroll_handle_pane_ParamLimits

0x52b1,	// (0x0000fdc0) scroll_sc2_down_pane_ParamLimits

0x52b1,	// (0x0000fdc0) scroll_sc2_down_pane

0x7e16,	// (0x00012925) scroll_sc2_up_pane_ParamLimits

0x7e16,	// (0x00012925) scroll_sc2_up_pane

0xba4c,	// (0x0001655b) grid_wheel_folder_pane_g1_ParamLimits

0xba4c,	// (0x0001655b) grid_wheel_folder_pane_g1

0x547b,	// (0x0000ff8a) clock_nsta_pane_cp2_ParamLimits

0x547b,	// (0x0000ff8a) clock_nsta_pane_cp2

0x8652,	// (0x00013161) listscroll_midp_pane_ParamLimits

0x865e,	// (0x0001316d) midp_canvas_pane

0x894c,	// (0x0001345b) nsta_clock_indic_pane

0x89aa,	// (0x000134b9) listscroll_form_pane_vc

0x89c6,	// (0x000134d5) listscroll_set_pane_vc_ParamLimits

0x89c6,	// (0x000134d5) listscroll_set_pane_vc

0x90e6,	// (0x00013bf5) clock_nsta_pane

0x9163,	// (0x00013c72) indicator_nsta_pane

0x945a,	// (0x00013f69) bg_popup_sub_pane_cp2_ParamLimits

0x946e,	// (0x00013f7d) find_pane_cp2_ParamLimits

0x946e,	// (0x00013f7d) find_pane_cp2

0x9484,	// (0x00013f93) grid_toobar_pane_ParamLimits

0x963a,	// (0x00014149) list_form_gen_pane_vc_ParamLimits

0x963a,	// (0x00014149) list_form_gen_pane_vc

0x9650,	// (0x0001415f) scroll_pane_cp8_vc_ParamLimits

0x9650,	// (0x0001415f) scroll_pane_cp8_vc

0x96cc,	// (0x000141db) data_form_wide_pane_vc_ParamLimits

0x96cc,	// (0x000141db) data_form_wide_pane_vc

0x96d8,	// (0x000141e7) form_field_data_wide_pane_vc_g1

0x96e0,	// (0x000141ef) form_field_data_wide_pane_vc_t1_ParamLimits

0x96e0,	// (0x000141ef) form_field_data_wide_pane_vc_t1

0x77fe,	// (0x0001230d) input_focus_pane_cp6_vc_ParamLimits

0x77fe,	// (0x0001230d) input_focus_pane_cp6_vc

0x99e9,	// (0x000144f8) list_midp_pane_ParamLimits

0x99f5,	// (0x00014504) scroll_pane_cp16_ParamLimits

0x99f5,	// (0x00014504) scroll_pane_cp16

0x9a35,	// (0x00014544) button_value_adjust_pane_ParamLimits

0x9a35,	// (0x00014544) button_value_adjust_pane

0xa9e5,	// (0x000154f4) button_value_adjust_pane_cp6_ParamLimits

0xa9e5,	// (0x000154f4) button_value_adjust_pane_cp6

0xab3f,	// (0x0001564e) settings_code_pane_cp_ParamLimits

0xab3f,	// (0x0001564e) settings_code_pane_cp

0x68d8,	// (0x000113e7) cell_touch_pane_g1

0x68d8,	// (0x000113e7) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001a251) cell_touch_pane_g

0xb183,	// (0x00015c92) cell_touch_pane_cp_ParamLimits

0xb183,	// (0x00015c92) cell_touch_pane_cp

0xb193,	// (0x00015ca2) cell_touch_pane_ParamLimits

0xb193,	// (0x00015ca2) cell_touch_pane

0x68d8,	// (0x000113e7) scroll_sc2_down_pane_g1

0x68d8,	// (0x000113e7) scroll_sc2_up_pane_g1

0x68e2,	// (0x000113f1) bg_set_opt_pane_cp4_vc

0xb1d0,	// (0x00015cdf) list_set_graphic_pane_vc_g1_ParamLimits

0xb1d0,	// (0x00015cdf) list_set_graphic_pane_vc_g1

0xb1dc,	// (0x00015ceb) list_set_graphic_pane_vc_g2_ParamLimits

0xb1dc,	// (0x00015ceb) list_set_graphic_pane_vc_g2

0x0001,

0xfa33,	// (0x0001a542) list_set_graphic_pane_vc_g_ParamLimits

0xfa33,	// (0x0001a542) list_set_graphic_pane_vc_g

0xb1e8,	// (0x00015cf7) text_primary_small_cp13_vc_ParamLimits

0xb1e8,	// (0x00015cf7) text_primary_small_cp13_vc

0xb200,	// (0x00015d0f) list_set_graphic_pane_vc_ParamLimits

0xb200,	// (0x00015d0f) list_set_graphic_pane_vc

0x68e2,	// (0x000113f1) input_focus_pane_cp2_vc

0x68d8,	// (0x000113e7) setting_code_pane_vc_g1

0xb214,	// (0x00015d23) setting_code_pane_vc_t1

0xb222,	// (0x00015d31) set_text_pane_vc_t1_ParamLimits

0xb222,	// (0x00015d31) set_text_pane_vc_t1

0x68e2,	// (0x000113f1) input_focus_pane_cp1_vc

0xb240,	// (0x00015d4f) list_set_text_pane_vc

0x68d8,	// (0x000113e7) setting_text_pane_vc_g1

0x68e2,	// (0x000113f1) bg_set_opt_pane_cp2_vc

0xb24a,	// (0x00015d59) setting_slider_graphic_pane_vc_g1

0xb252,	// (0x00015d61) setting_slider_graphic_pane_vc_t1

0xb260,	// (0x00015d6f) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa38,	// (0x0001a547) setting_slider_graphic_pane_vc_t

0xb26e,	// (0x00015d7d) slider_set_pane_cp_vc

0xb276,	// (0x00015d85) slider_set_pane_vc_g1

0xb27f,	// (0x00015d8e) slider_set_pane_vc_g2

0x0006,

0xfa3d,	// (0x0001a54c) slider_set_pane_vc_g

0x793a,	// (0x00012449) set_opt_bg_pane_g1_copy1

0x7942,	// (0x00012451) set_opt_bg_pane_g2_copy1

0xb2ab,	// (0x00015dba) set_opt_bg_pane_g3_copy1

0x7952,	// (0x00012461) set_opt_bg_pane_g4_copy1

0x795a,	// (0x00012469) set_opt_bg_pane_g5_copy1

0x7962,	// (0x00012471) set_opt_bg_pane_g6_copy1

0xb2b5,	// (0x00015dc4) set_opt_bg_pane_g7_copy1

0xb2bf,	// (0x00015dce) set_opt_bg_pane_g8_copy1

0xb2c9,	// (0x00015dd8) set_opt_bg_pane_g9_copy1

0x68e2,	// (0x000113f1) bg_set_opt_pane_cp_vc

0xb2d3,	// (0x00015de2) setting_slider_pane_vc_t1

0xb252,	// (0x00015d61) setting_slider_pane_vc_t2

0xb260,	// (0x00015d6f) setting_slider_pane_vc_t3

0x0002,

0xfa4c,	// (0x0001a55b) setting_slider_pane_vc_t

0xb26e,	// (0x00015d7d) slider_set_pane_vc

0x588f,	// (0x0001039e) volume_set_pane_vc_g1

0x5898,	// (0x000103a7) volume_set_pane_vc_g2

0x58a1,	// (0x000103b0) volume_set_pane_vc_g3

0x58aa,	// (0x000103b9) volume_set_pane_vc_g4

0x58b3,	// (0x000103c2) volume_set_pane_vc_g5

0x58bc,	// (0x000103cb) volume_set_pane_vc_g6

0x58c5,	// (0x000103d4) volume_set_pane_vc_g7

0x58ce,	// (0x000103dd) volume_set_pane_vc_g8

0x58d7,	// (0x000103e6) volume_set_pane_vc_g9

0x58e0,	// (0x000103ef) volume_set_pane_vc_g10

0x0009,

0xf8ea,	// (0x0001a3f9) volume_set_pane_vc_g

0xb2e2,	// (0x00015df1) volume_set_pane_vc

0xb2ea,	// (0x00015df9) button_value_adjust_pane_cp1_vc

0xb2f4,	// (0x00015e03) list_highlight_pane_cp2_vc

0xb2fd,	// (0x00015e0c) list_set_pane_vc_ParamLimits

0xb2fd,	// (0x00015e0c) list_set_pane_vc

0xb367,	// (0x00015e76) main_pane_set_vc_t1_ParamLimits

0xb367,	// (0x00015e76) main_pane_set_vc_t1

0xb37c,	// (0x00015e8b) main_pane_set_vc_t2_ParamLimits

0xb37c,	// (0x00015e8b) main_pane_set_vc_t2

0xb38e,	// (0x00015e9d) main_pane_set_vc_t3_ParamLimits

0xb38e,	// (0x00015e9d) main_pane_set_vc_t3

0xb3a2,	// (0x00015eb1) main_pane_set_vc_t4_ParamLimits

0xb3a2,	// (0x00015eb1) main_pane_set_vc_t4

0x0003,

0xfa53,	// (0x0001a562) main_pane_set_vc_t_ParamLimits

0xfa53,	// (0x0001a562) main_pane_set_vc_t

0xb3b6,	// (0x00015ec5) setting_code_pane_vc_ParamLimits

0xb3b6,	// (0x00015ec5) setting_code_pane_vc

0xb3c7,	// (0x00015ed6) setting_slider_graphic_pane_vc

0xb3c7,	// (0x00015ed6) setting_slider_pane_vc

0xb3c7,	// (0x00015ed6) setting_text_pane_vc

0xb3c7,	// (0x00015ed6) setting_volume_pane_vc

0xb3d1,	// (0x00015ee0) scroll_pane_cp121_vc

0x76f6,	// (0x00012205) set_content_pane_vc

0xb623,	// (0x00016132) button_value_adjust_pane_g1

0xb62c,	// (0x0001613b) button_value_adjust_pane_g2

0x0001,

0xfab2,	// (0x0001a5c1) button_value_adjust_pane_g

0xb635,	// (0x00016144) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb635,	// (0x00016144) form_field_slider_wide_pane_vc_t1

0xb649,	// (0x00016158) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb649,	// (0x00016158) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab7,	// (0x0001a5c6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab7,	// (0x0001a5c6) form_field_slider_wide_pane_vc_t

0x6c58,	// (0x00011767) input_focus_pane_cp10_vc_ParamLimits

0x6c58,	// (0x00011767) input_focus_pane_cp10_vc

0xb65b,	// (0x0001616a) slider_cont_pane_cp1_vc_ParamLimits

0xb65b,	// (0x0001616a) slider_cont_pane_cp1_vc

0xb276,	// (0x00015d85) slider_form_pane_g1_cp2

0xb27f,	// (0x00015d8e) slider_form_pane_g2_cp2

0xb674,	// (0x00016183) form_field_slider_pane_vc_t3

0xb682,	// (0x00016191) form_field_slider_pane_vc_t4

0xb690,	// (0x0001619f) slider_form_pane_vc_ParamLimits

0xb690,	// (0x0001619f) slider_form_pane_vc

0xb69d,	// (0x000161ac) form_field_slider_pane_vc_t1_ParamLimits

0xb69d,	// (0x000161ac) form_field_slider_pane_vc_t1

0xb649,	// (0x00016158) form_field_slider_pane_vc_t2_ParamLimits

0xb649,	// (0x00016158) form_field_slider_pane_vc_t2

0x0001,

0xfac7,	// (0x0001a5d6) form_field_slider_pane_vc_t_ParamLimits

0xfac7,	// (0x0001a5d6) form_field_slider_pane_vc_t

0x6c58,	// (0x00011767) input_focus_pane_cp9_vc_ParamLimits

0x6c58,	// (0x00011767) input_focus_pane_cp9_vc

0xb6b9,	// (0x000161c8) slider_cont_pane_vc_ParamLimits

0xb6b9,	// (0x000161c8) slider_cont_pane_vc

0xb6cb,	// (0x000161da) list_form_graphic_pane_cp_vc_ParamLimits

0xb6cb,	// (0x000161da) list_form_graphic_pane_cp_vc

0x96d8,	// (0x000141e7) form_field_popup_wide_pane_vc_g1

0xb6e0,	// (0x000161ef) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb6e0,	// (0x000161ef) form_field_popup_wide_pane_vc_t1

0x77fe,	// (0x0001230d) input_focus_pane_cp8_vc_ParamLimits

0x77fe,	// (0x0001230d) input_focus_pane_cp8_vc

0xb6f7,	// (0x00016206) list_form_wide_pane_vc_ParamLimits

0xb6f7,	// (0x00016206) list_form_wide_pane_vc

0xb703,	// (0x00016212) list_form_graphic_pane_vc_g1

0xb70b,	// (0x0001621a) list_form_graphic_pane_vc_t1_ParamLimits

0xb70b,	// (0x0001621a) list_form_graphic_pane_vc_t1

0x69c2,	// (0x000114d1) list_highlight_pane_cp5_vc_ParamLimits

0x69c2,	// (0x000114d1) list_highlight_pane_cp5_vc

0xb727,	// (0x00016236) list_form_graphic_pane_vc_ParamLimits

0xb727,	// (0x00016236) list_form_graphic_pane_vc

0x96d8,	// (0x000141e7) form_field_popup_pane_vc_g1

0xb73d,	// (0x0001624c) form_field_popup_pane_vc_t1_ParamLimits

0xb73d,	// (0x0001624c) form_field_popup_pane_vc_t1

0x77fe,	// (0x0001230d) input_focus_pane_cp7_vc_ParamLimits

0x77fe,	// (0x0001230d) input_focus_pane_cp7_vc

0xb754,	// (0x00016263) list_form_pane_vc_ParamLimits

0xb754,	// (0x00016263) list_form_pane_vc

0xb760,	// (0x0001626f) data_form_pane_vc_t1_ParamLimits

0xb760,	// (0x0001626f) data_form_pane_vc_t1

0x793a,	// (0x00012449) input_focus_pane_vc_g1

0x7942,	// (0x00012451) input_focus_pane_vc_g2

0x794a,	// (0x00012459) input_focus_pane_vc_g3

0x7952,	// (0x00012461) input_focus_pane_vc_g4

0x795a,	// (0x00012469) input_focus_pane_vc_g5

0x7962,	// (0x00012471) input_focus_pane_vc_g6

0x796a,	// (0x00012479) input_focus_pane_vc_g7

0x7972,	// (0x00012481) input_focus_pane_vc_g8

0x797a,	// (0x00012489) input_focus_pane_vc_g9

0x68d8,	// (0x000113e7) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001a1da) input_focus_pane_vc_g

0x96cc,	// (0x000141db) data_form_pane_vc_ParamLimits

0x96cc,	// (0x000141db) data_form_pane_vc

0x96d8,	// (0x000141e7) form_field_data_pane_vc_g1

0xb77d,	// (0x0001628c) form_field_data_pane_vc_t1_ParamLimits

0xb77d,	// (0x0001628c) form_field_data_pane_vc_t1

0x77fe,	// (0x0001230d) input_focus_pane_vc_ParamLimits

0x77fe,	// (0x0001230d) input_focus_pane_vc

0xb797,	// (0x000162a6) button_value_adjust_pane_cp3_vc

0xb79f,	// (0x000162ae) button_value_adjust_pane_cp5_vc

0xb7a7,	// (0x000162b6) form_field_data_pane_vc_ParamLimits

0xb7a7,	// (0x000162b6) form_field_data_pane_vc

0xb7c2,	// (0x000162d1) form_field_data_pane_vc_cp2

0xb7ca,	// (0x000162d9) form_field_data_wide_pane_vc_ParamLimits

0xb7ca,	// (0x000162d9) form_field_data_wide_pane_vc

0xb7e4,	// (0x000162f3) form_field_data_wide_pane_vc_cp2

0xb7ec,	// (0x000162fb) form_field_popup_pane_vc_ParamLimits

0xb7ec,	// (0x000162fb) form_field_popup_pane_vc

0xb807,	// (0x00016316) form_field_popup_wide_pane_vc_ParamLimits

0xb807,	// (0x00016316) form_field_popup_wide_pane_vc

0xb821,	// (0x00016330) form_field_slider_pane_vc_ParamLimits

0xb821,	// (0x00016330) form_field_slider_pane_vc

0xb834,	// (0x00016343) form_field_slider_wide_pane_vc_ParamLimits

0xb834,	// (0x00016343) form_field_slider_wide_pane_vc

0xb847,	// (0x00016356) grid_touch_1_pane_ParamLimits

0xb847,	// (0x00016356) grid_touch_1_pane

0xb853,	// (0x00016362) grid_touch_2_pane_ParamLimits

0xb853,	// (0x00016362) grid_touch_2_pane

0x8917,	// (0x00013426) touch_pane_g1_ParamLimits

0x8917,	// (0x00013426) touch_pane_g1

0xb86d,	// (0x0001637c) cell_app_pane_cp_wide_ParamLimits

0xb86d,	// (0x0001637c) cell_app_pane_cp_wide

0xb87e,	// (0x0001638d) grid_popup_fast_wide_pane_ParamLimits

0xb87e,	// (0x0001638d) grid_popup_fast_wide_pane

0xb892,	// (0x000163a1) scroll_pane_cp19_ParamLimits

0xb892,	// (0x000163a1) scroll_pane_cp19

0x68e2,	// (0x000113f1) bg_popup_window_pane_cp20

0xb8a6,	// (0x000163b5) listscroll_popup_fast_wide_pane

0x69c2,	// (0x000114d1) grid_indicator_nsta_pane

0xb8ae,	// (0x000163bd) clock_nsta_pane_g1

0xb8b7,	// (0x000163c6) clock_nsta_pane_t1

0xb8d3,	// (0x000163e2) cell_indicator_nsta_pane_ParamLimits

0xb8d3,	// (0x000163e2) cell_indicator_nsta_pane

0xb90b,	// (0x0001641a) cell_indicator_nsta_pane_g1

0xb919,	// (0x00016428) cell_indicator_nsta_pane_g2

0x0001,

0xfad1,	// (0x0001a5e0) cell_indicator_nsta_pane_g

0xb92e,	// (0x0001643d) clock_nsta_pane_cp

0xb936,	// (0x00016445) indicator_nsta_pane_cp

0xb93e,	// (0x0001644d) nsta_clock_indic_pane_g1

0x6aa8,	// (0x000115b7) grid_indicator_pane

0x7f08,	// (0x00012a17) scroll_pane_cp29

0x53c7,	// (0x0000fed6) indicator_nsta_pane_cp2_ParamLimits

0x53c7,	// (0x0000fed6) indicator_nsta_pane_cp2

0x69c2,	// (0x000114d1) main_apps_wheel_pane

0x98c6,	// (0x000143d5) form_midp_field_text_pane_ParamLimits

0x9a15,	// (0x00014524) scroll_bar_cp050_ParamLimits

0xb976,	// (0x00016485) cell_indicator_pane_ParamLimits

0xb976,	// (0x00016485) cell_indicator_pane

0xb98e,	// (0x0001649d) cell_indicator_pane_g1

0xb998,	// (0x000164a7) grid_wheel_folder_pane_ParamLimits

0xb998,	// (0x000164a7) grid_wheel_folder_pane

0xb9ac,	// (0x000164bb) list_wheel_apps_pane_ParamLimits

0xb9ac,	// (0x000164bb) list_wheel_apps_pane

0xb9bf,	// (0x000164ce) main_apps_wheel_pane_g1_ParamLimits

0xb9bf,	// (0x000164ce) main_apps_wheel_pane_g1

0xb9db,	// (0x000164ea) main_apps_wheel_pane_g2_ParamLimits

0xb9db,	// (0x000164ea) main_apps_wheel_pane_g2

0x0001,

0xfae0,	// (0x0001a5ef) main_apps_wheel_pane_g_ParamLimits

0xfae0,	// (0x0001a5ef) main_apps_wheel_pane_g

0xb9f7,	// (0x00016506) main_apps_wheel_pane_t1_ParamLimits

0xb9f7,	// (0x00016506) main_apps_wheel_pane_t1

0xba20,	// (0x0001652f) list_wheel_apps_pane_g1

0xba28,	// (0x00016537) list_wheel_apps_pane_g2

0xba30,	// (0x0001653f) list_wheel_apps_pane_g3

0xba38,	// (0x00016547) list_wheel_apps_pane_g4

0xba42,	// (0x00016551) list_wheel_apps_pane_g5

0x0004,

0xfae5,	// (0x0001a5f4) list_wheel_apps_pane_g

0x84c6,	// (0x00012fd5) navi_icon_text_pane

0x9013,	// (0x00013b22) aid_fill_nsta

0xba63,	// (0x00016572) navi_icon_text_pane_g1

0xba72,	// (0x00016581) navi_icon_text_pane_t1

0x835c,	// (0x00012e6b) list_set_graphic_pane_t1_ParamLimits

0x835c,	// (0x00012e6b) list_set_graphic_pane_t1

0xa135,	// (0x00014c44) popup_midp_note_alarm_window_t6_ParamLimits

0xa135,	// (0x00014c44) popup_midp_note_alarm_window_t6

0xa147,	// (0x00014c56) popup_midp_note_alarm_window_t7_ParamLimits

0xa147,	// (0x00014c56) popup_midp_note_alarm_window_t7

0xa159,	// (0x00014c68) popup_midp_note_alarm_window_t8_ParamLimits

0xa159,	// (0x00014c68) popup_midp_note_alarm_window_t8

0xa16b,	// (0x00014c7a) popup_midp_note_alarm_window_t9_ParamLimits

0xa16b,	// (0x00014c7a) popup_midp_note_alarm_window_t9

0xa17d,	// (0x00014c8c) popup_midp_note_alarm_window_t10_ParamLimits

0xa17d,	// (0x00014c8c) popup_midp_note_alarm_window_t10

0xa18f,	// (0x00014c9e) popup_midp_note_alarm_window_t11_ParamLimits

0xa18f,	// (0x00014c9e) popup_midp_note_alarm_window_t11

0xa1a1,	// (0x00014cb0) scroll_pane_cp17_ParamLimits

0xa1a1,	// (0x00014cb0) scroll_pane_cp17

0x588f,	// (0x0001039e) volume_small_pane_cp_g1

0x5ba0,	// (0x000106af) volume_small_pane_cp_g2

0x5ba9,	// (0x000106b8) volume_small_pane_cp_g3

0x5bb2,	// (0x000106c1) volume_small_pane_cp_g4

0x5bbb,	// (0x000106ca) volume_small_pane_cp_g5

0x5bc4,	// (0x000106d3) volume_small_pane_cp_g6

0x5bcd,	// (0x000106dc) volume_small_pane_cp_g7

0x5bd6,	// (0x000106e5) volume_small_pane_cp_g8

0x5bdf,	// (0x000106ee) volume_small_pane_cp_g9

0x5be8,	// (0x000106f7) volume_small_pane_cp_g10

0x8727,	// (0x00013236) midp_ticker_pane_g1_ParamLimits

0x8733,	// (0x00013242) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0001a2a2) midp_ticker_pane_g_ParamLimits

0x873f,	// (0x0001324e) midp_ticker_pane_t1_ParamLimits

0x9029,	// (0x00013b38) aid_fill_nsta_2

0x9a01,	// (0x00014510) list_form2_midp_pane

0xabbb,	// (0x000156ca) midp_editing_number_pane_ParamLimits

0xabca,	// (0x000156d9) midp_ticker_pane_ParamLimits

0xba87,	// (0x00016596) form2_midp_field_pane

0xbaab,	// (0x000165ba) scroll_pane_cp51

0xbacb,	// (0x000165da) form2_midp_button_pane_ParamLimits

0xbacb,	// (0x000165da) form2_midp_button_pane

0xbadd,	// (0x000165ec) form2_midp_content_pane_ParamLimits

0xbadd,	// (0x000165ec) form2_midp_content_pane

0xbaf7,	// (0x00016606) form2_midp_field_choice_group_pane

0xbaff,	// (0x0001660e) form2_midp_field_pane_g1

0xbb07,	// (0x00016616) form2_midp_field_pane_g2

0xbb0f,	// (0x0001661e) form2_midp_field_pane_g3

0xbb17,	// (0x00016626) form2_midp_field_pane_g4

0x0003,

0xfb0a,	// (0x0001a619) form2_midp_field_pane_g

0xbb1f,	// (0x0001662e) form2_midp_gauge_slider_pane

0xbb27,	// (0x00016636) form2_midp_gauge_wait_pane

0xbb2f,	// (0x0001663e) form2_midp_image_pane_ParamLimits

0xbb2f,	// (0x0001663e) form2_midp_image_pane

0xbb4a,	// (0x00016659) form2_midp_label_pane_ParamLimits

0xbb4a,	// (0x00016659) form2_midp_label_pane

0xbb69,	// (0x00016678) form2_midp_label_pane_cp_ParamLimits

0xbb69,	// (0x00016678) form2_midp_label_pane_cp

0xbb8a,	// (0x00016699) form2_midp_string_pane_ParamLimits

0xbb8a,	// (0x00016699) form2_midp_string_pane

0xbb9c,	// (0x000166ab) form2_midp_text_pane_ParamLimits

0xbb9c,	// (0x000166ab) form2_midp_text_pane

0xbbbd,	// (0x000166cc) form2_midp_time_pane

0xbbcd,	// (0x000166dc) input_focus_pane_cp51_ParamLimits

0xbbcd,	// (0x000166dc) input_focus_pane_cp51

0xbbe5,	// (0x000166f4) form2_midp_label_pane_t1_ParamLimits

0xbbe5,	// (0x000166f4) form2_midp_label_pane_t1

0xbc2b,	// (0x0001673a) form2_mdip_text_pane_t1_ParamLimits

0xbc2b,	// (0x0001673a) form2_mdip_text_pane_t1

0xbc4d,	// (0x0001675c) form2_midp_time_pane_t1

0xbc68,	// (0x00016777) form2_midp_gauge_slider_pane_t1

0xbc7a,	// (0x00016789) form2_midp_gauge_slider_pane_t2

0xbc8c,	// (0x0001679b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb13,	// (0x0001a622) form2_midp_gauge_slider_pane_t

0xbc9e,	// (0x000167ad) form2_midp_slider_pane

0xbcaa,	// (0x000167b9) form2_midp_gauge_wait_pane_t1

0xbcb8,	// (0x000167c7) form2_midp_wait_pane_ParamLimits

0xbcb8,	// (0x000167c7) form2_midp_wait_pane

0x96f7,	// (0x00014206) list_single_2graphic_pane_cp4_ParamLimits

0x96f7,	// (0x00014206) list_single_2graphic_pane_cp4

0xbce3,	// (0x000167f2) list_single_midp_graphic_pane_cp_ParamLimits

0xbce3,	// (0x000167f2) list_single_midp_graphic_pane_cp

0x68e2,	// (0x000113f1) list_highlight_pane_cp20

0xbd07,	// (0x00016816) list_single_2graphic_pane_g1_cp4

0xb086,	// (0x00015b95) list_single_2graphic_pane_g2_cp4

0xbd0f,	// (0x0001681e) list_single_2graphic_pane_t1_cp4

0x69c2,	// (0x000114d1) list_highlight_pane_cp21

0xbd1e,	// (0x0001682d) list_single_midp_graphic_pane_g4_cp

0xbd2d,	// (0x0001683c) list_single_midp_graphic_pane_t1_cp

0xbd42,	// (0x00016851) form2_mdip_string_pane_t1_ParamLimits

0xbd42,	// (0x00016851) form2_mdip_string_pane_t1

0x68e2,	// (0x000113f1) bg_wml_button_pane_cp2

0x68d8,	// (0x000113e7) form2_midp_image_pane_g1

0x74aa,	// (0x00011fb9) list_double_large_graphic_pane_g5_ParamLimits

0x74aa,	// (0x00011fb9) list_double_large_graphic_pane_g5

0x8652,	// (0x00013161) midp_form_pane_ParamLimits

0x69c2,	// (0x000114d1) main_apps_wheel_pane_ParamLimits

0x8dbd,	// (0x000138cc) popup_preview_window_ParamLimits

0x8dbd,	// (0x000138cc) popup_preview_window

0x8fa4,	// (0x00013ab3) popup_touch_info_window_ParamLimits

0x8fa4,	// (0x00013ab3) popup_touch_info_window

0x8fc6,	// (0x00013ad5) popup_touch_menu_window_ParamLimits

0x8fc6,	// (0x00013ad5) popup_touch_menu_window

0x68ce,	// (0x000113dd) bg_popup_sub_pane_cp6

0xbde7,	// (0x000168f6) list_touch_menu_pane

0xbdef,	// (0x000168fe) list_single_touch_menu_pane_ParamLimits

0xbdef,	// (0x000168fe) list_single_touch_menu_pane

0xbe0a,	// (0x00016919) list_single_touch_menu_pane_t1

0x69c2,	// (0x000114d1) bg_popup_sub_pane_cp7_ParamLimits

0x69c2,	// (0x000114d1) bg_popup_sub_pane_cp7

0xbe18,	// (0x00016927) heading_sub_pane

0xbe20,	// (0x0001692f) list_touch_info_pane_ParamLimits

0xbe20,	// (0x0001692f) list_touch_info_pane

0xbe2f,	// (0x0001693e) list_single_touch_info_pane_ParamLimits

0xbe2f,	// (0x0001693e) list_single_touch_info_pane

0xbe41,	// (0x00016950) list_single_touch_info_pane_t1

0xbe4f,	// (0x0001695e) list_single_touch_info_pane_t2

0x0001,

0xfb21,	// (0x0001a630) list_single_touch_info_pane_t

0x864a,	// (0x00013159) bg_popup_heading_pane_cp

0xbe5d,	// (0x0001696c) heading_sub_pane_t1

0x9666,	// (0x00014175) bg_popup_preview_window_pane_cp_ParamLimits

0x9666,	// (0x00014175) bg_popup_preview_window_pane_cp

0xbe18,	// (0x00016927) heading_preview_pane

0xbe20,	// (0x0001692f) list_preview_pane_ParamLimits

0xbe20,	// (0x0001692f) list_preview_pane

0xbe6b,	// (0x0001697a) popup_preview_window_g1

0xbe2f,	// (0x0001693e) list_single_preview_pane_ParamLimits

0xbe2f,	// (0x0001693e) list_single_preview_pane

0xbe73,	// (0x00016982) list_single_preview_pane_g1

0xbe7b,	// (0x0001698a) list_single_preview_pane_t1

0xbe41,	// (0x00016950) list_single_preview_pane_t2

0x0001,

0xfb26,	// (0x0001a635) list_single_preview_pane_t

0xbe89,	// (0x00016998) bg_popup_heading_pane_cp2_ParamLimits

0xbe89,	// (0x00016998) bg_popup_heading_pane_cp2

0xbe9f,	// (0x000169ae) heading_preview_pane_g1

0xbea7,	// (0x000169b6) heading_preview_pane_t1_ParamLimits

0xbea7,	// (0x000169b6) heading_preview_pane_t1

0x6acb,	// (0x000115da) soft_indicator_pane_t1_ParamLimits

0x71d6,	// (0x00011ce5) scroll_pane_ParamLimits

0x7e04,	// (0x00012913) scroll_sc2_left_pane

0x7e0d,	// (0x0001291c) scroll_sc2_right_pane

0x7e2c,	// (0x0001293b) scroll_bg_pane_g1_ParamLimits

0x7e41,	// (0x00012950) scroll_bg_pane_g2_ParamLimits

0x7e59,	// (0x00012968) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001a231) scroll_bg_pane_g_ParamLimits

0x7e2c,	// (0x0001293b) scroll_handle_pane_g1_ParamLimits

0x7e7b,	// (0x0001298a) scroll_handle_pane_g2_ParamLimits

0x7e59,	// (0x00012968) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0001a238) scroll_handle_pane_g_ParamLimits

0x8a08,	// (0x00013517) popup_choice_list_window_ParamLimits

0x8a08,	// (0x00013517) popup_choice_list_window

0x9466,	// (0x00013f75) choice_list_pane

0x9516,	// (0x00014025) cell_toolbar_pane_t1

0x953e,	// (0x0001404d) toolbar_button_pane_ParamLimits

0xa671,	// (0x00015180) ai_gene_pane_1_t2_ParamLimits

0xa671,	// (0x00015180) ai_gene_pane_1_t2

0x0001,

0xf946,	// (0x0001a455) ai_gene_pane_1_t_ParamLimits

0xf946,	// (0x0001a455) ai_gene_pane_1_t

0xbec4,	// (0x000169d3) scroll_sc2_left_pane_g1

0xbec4,	// (0x000169d3) scroll_sc2_right_pane_g1

0x89d8,	// (0x000134e7) bg_popup_sub_pane_cp10

0xbece,	// (0x000169dd) list_choice_list_pane

0xbee5,	// (0x000169f4) list_single_choice_list_pane_ParamLimits

0xbee5,	// (0x000169f4) list_single_choice_list_pane

0xbef9,	// (0x00016a08) list_single_choice_list_pane_g1

0xbf01,	// (0x00016a10) list_single_choice_list_pane_t1_ParamLimits

0xbf01,	// (0x00016a10) list_single_choice_list_pane_t1

0xbf16,	// (0x00016a25) choice_list_pane_g1

0xbf1e,	// (0x00016a2d) choice_list_pane_t1

0x68ce,	// (0x000113dd) input_focus_pane_cp11

0x7cde,	// (0x000127ed) title_pane_stacon_g2_ParamLimits

0x7cde,	// (0x000127ed) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001a217) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001a217) title_pane_stacon_g

0x864a,	// (0x00013159) cursor_press_pane

0x8abe,	// (0x000135cd) popup_fep_hwr_window_ParamLimits

0x8abe,	// (0x000135cd) popup_fep_hwr_window

0x8b48,	// (0x00013657) popup_fep_vkb_window_ParamLimits

0x8b48,	// (0x00013657) popup_fep_vkb_window

0xbf2c,	// (0x00016a3b) cursor_press_pane_g1

0x0002,

0xfb4f,	// (0x0001a65e) fep_vkb_side_pane_g_ParamLimits

0x5c2a,	// (0x00010739) fep_hwr_candidate_pane_ParamLimits

0x5c2a,	// (0x00010739) fep_hwr_candidate_pane

0x5c54,	// (0x00010763) fep_hwr_side_pane_ParamLimits

0x5c54,	// (0x00010763) fep_hwr_side_pane

0x5c76,	// (0x00010785) fep_hwr_top_pane_ParamLimits

0x5c76,	// (0x00010785) fep_hwr_top_pane

0x5c8e,	// (0x0001079d) fep_hwr_write_pane_ParamLimits

0x5c8e,	// (0x0001079d) fep_hwr_write_pane

0xfb4f,	// (0x0001a65e) fep_vkb_side_pane_g

0xbf34,	// (0x00016a43) fep_hwr_top_pane_g1

0xbf46,	// (0x00016a55) fep_hwr_top_pane_g2

0x5cc8,	// (0x000107d7) fep_hwr_top_pane_g3

0x0002,

0xfb2b,	// (0x0001a63a) fep_hwr_top_pane_g

0x5cdd,	// (0x000107ec) fep_hwr_top_text_pane

0x7fd0,	// (0x00012adf) fep_hwr_top_text_pane_g1

0xbf7c,	// (0x00016a8b) fep_hwr_top_text_pane_t1

0x5de7,	// (0x000108f6) fep_hwr_candidate_pane_g1

0xc1d5,	// (0x00016ce4) fep_vkb_keypad_pane_g3_ParamLimits

0xc1d5,	// (0x00016ce4) fep_vkb_keypad_pane_g3

0xc201,	// (0x00016d10) fep_vkb_keypad_pane_g4_ParamLimits

0xc201,	// (0x00016d10) fep_vkb_keypad_pane_g4

0xc278,	// (0x00016d87) fep_vkb_bottom_pane_g2_ParamLimits

0xc278,	// (0x00016d87) fep_vkb_bottom_pane_g2

0x0001,

0xfb56,	// (0x0001a665) fep_vkb_bottom_pane_g_ParamLimits

0xfb56,	// (0x0001a665) fep_vkb_bottom_pane_g

0xbec4,	// (0x000169d3) cell_vkb_side_pane_g2

0x0001,

0xfb60,	// (0x0001a66f) cell_vkb_side_pane_g

0xc303,	// (0x00016e12) cell_vkb_side_pane_t1

0xc311,	// (0x00016e20) cell_vkb_side_pane_t1_copy1

0xbec4,	// (0x000169d3) bg_fep_vkb_candidate_pane_g2

0xc455,	// (0x00016f64) cell_vkb_candidate_pane_ParamLimits

0xbf8a,	// (0x00016a99) aid_size_cell_vkb_ParamLimits

0xbf8a,	// (0x00016a99) aid_size_cell_vkb

0xc455,	// (0x00016f64) cell_vkb_candidate_pane

0x5e0e,	// (0x0001091d) bg_popup_fep_shadow_pane_g1

0xc01c,	// (0x00016b2b) fep_vkb_bottom_pane_ParamLimits

0xc01c,	// (0x00016b2b) fep_vkb_bottom_pane

0xc059,	// (0x00016b68) fep_vkb_candidate_pane_ParamLimits

0xc059,	// (0x00016b68) fep_vkb_candidate_pane

0xc075,	// (0x00016b84) fep_vkb_keypad_pane_ParamLimits

0xc075,	// (0x00016b84) fep_vkb_keypad_pane

0xc0a8,	// (0x00016bb7) fep_vkb_side_pane_ParamLimits

0xc0a8,	// (0x00016bb7) fep_vkb_side_pane

0xc0e4,	// (0x00016bf3) fep_vkb_top_pane_ParamLimits

0xc0e4,	// (0x00016bf3) fep_vkb_top_pane

0xc120,	// (0x00016c2f) fep_vkb_top_pane_g1_ParamLimits

0xc120,	// (0x00016c2f) fep_vkb_top_pane_g1

0xc12f,	// (0x00016c3e) fep_vkb_top_pane_g2_ParamLimits

0xc12f,	// (0x00016c3e) fep_vkb_top_pane_g2

0xc13e,	// (0x00016c4d) fep_vkb_top_pane_g3_ParamLimits

0xc13e,	// (0x00016c4d) fep_vkb_top_pane_g3

0x0003,

0xfb46,	// (0x0001a655) fep_vkb_top_pane_g_ParamLimits

0xfb46,	// (0x0001a655) fep_vkb_top_pane_g

0xc15c,	// (0x00016c6b) fep_vkb_top_text_pane_ParamLimits

0xc15c,	// (0x00016c6b) fep_vkb_top_text_pane

0xc16d,	// (0x00016c7c) fep_vkb_side_pane_g1_ParamLimits

0xc16d,	// (0x00016c7c) fep_vkb_side_pane_g1

0xc1c4,	// (0x00016cd3) grid_vkb_side_pane_ParamLimits

0xc1c4,	// (0x00016cd3) grid_vkb_side_pane

0x5e16,	// (0x00010925) bg_popup_fep_shadow_pane_g2

0x5e1f,	// (0x0001092e) bg_popup_fep_shadow_pane_g3

0x5e27,	// (0x00010936) bg_popup_fep_shadow_pane_g4

0x5e30,	// (0x0001093f) bg_popup_fep_shadow_pane_g5

0x5e3a,	// (0x00010949) bg_popup_fep_shadow_pane_g6

0x5e42,	// (0x00010951) bg_popup_fep_shadow_pane_g7

0x7952,	// (0x00012461) bg_popup_fep_shadow_pane_g8

0xc223,	// (0x00016d32) grid_vkb_keypad_number_pane_ParamLimits

0xc223,	// (0x00016d32) grid_vkb_keypad_number_pane

0xc237,	// (0x00016d46) grid_vkb_keypad_pane_ParamLimits

0xc237,	// (0x00016d46) grid_vkb_keypad_pane

0xc25d,	// (0x00016d6c) fep_vkb_bottom_pane_g1_ParamLimits

0xc25d,	// (0x00016d6c) fep_vkb_bottom_pane_g1

0xc286,	// (0x00016d95) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc286,	// (0x00016d95) grid_vkb_keypad_bottom_left_pane

0xc29b,	// (0x00016daa) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc29b,	// (0x00016daa) grid_vkb_keypad_bottom_right_pane

0xc2b0,	// (0x00016dbf) fep_vkb_top_text_pane_g1

0xc2cb,	// (0x00016dda) fep_vkb_top_text_pane_t1

0xc2e0,	// (0x00016def) cell_vkb_side_pane_ParamLimits

0xc2e0,	// (0x00016def) cell_vkb_side_pane

0xbec4,	// (0x000169d3) cell_vkb_side_pane_g1

0xc31f,	// (0x00016e2e) cell_vkb_keypad_pane_ParamLimits

0xc31f,	// (0x00016e2e) cell_vkb_keypad_pane

0xc3ac,	// (0x00016ebb) cell_vkb_keypad_pane_g1

0x0008,

0xfb73,	// (0x0001a682) bg_popup_fep_shadow_pane_g

0x5e54,	// (0x00010963) cell_hwr_side_pane_g1

0x5e54,	// (0x00010963) cell_hwr_side_pane_g2

0xc3b6,	// (0x00016ec5) cell_vkb_keypad_pane_t1

0xc3c4,	// (0x00016ed3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc3c4,	// (0x00016ed3) cell_vkb_keypad_bottom_left_pane

0xc3e1,	// (0x00016ef0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc3e1,	// (0x00016ef0) cell_vkb_keypad_bottom_right_pane

0xbec4,	// (0x000169d3) cell_vkb_keypad_bottom_left_pane_g1

0xbec4,	// (0x000169d3) cell_vkb_keypad_bottom_right_pane_g1

0xc41a,	// (0x00016f29) cell_vkb_keypad_number_pane_ParamLimits

0xc41a,	// (0x00016f29) cell_vkb_keypad_number_pane

0xc439,	// (0x00016f48) cell_vkb_keypad_number_pane_g1

0xc443,	// (0x00016f52) cell_vkb_keypad_number_pane_g2

0xc44c,	// (0x00016f5b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb65,	// (0x0001a674) cell_vkb_keypad_number_pane_g

0xc3b6,	// (0x00016ec5) cell_vkb_keypad_number_pane_t1

0xc476,	// (0x00016f85) fep_vkb_candidate_pane_g1

0x0001,

0xfb86,	// (0x0001a695) cell_hwr_side_pane_g

0xc48f,	// (0x00016f9e) cell_hwr_side_pane_t1

0x5e5e,	// (0x0001096d) cell_hwr_side_pane_t1_copy1

0x5e6c,	// (0x0001097b) cell_hwr_candidate_pane_g1

0x5e9b,	// (0x000109aa) cell_hwr_candidate_pane_t1

0xbec4,	// (0x000169d3) cell_vkb_candidate_pane_g2

0xc4d3,	// (0x00016fe2) cell_vkb_candidate_pane_t1

0x5bf1,	// (0x00010700) bg_popup_fep_shadow_pane_ParamLimits

0x5bf1,	// (0x00010700) bg_popup_fep_shadow_pane

0x5ca8,	// (0x000107b7) bg_fep_hwr_top_pane_g4

0xbf58,	// (0x00016a67) bg_hwr_side_pane_g1_ParamLimits

0xbf58,	// (0x00016a67) bg_hwr_side_pane_g1

0x5d1b,	// (0x0001082a) cell_hwr_side_pane_ParamLimits

0x5d1b,	// (0x0001082a) cell_hwr_side_pane

0x5d58,	// (0x00010867) fep_hwr_write_pane_g1_ParamLimits

0x5d58,	// (0x00010867) fep_hwr_write_pane_g1

0x5d65,	// (0x00010874) fep_hwr_write_pane_g2_ParamLimits

0x5d65,	// (0x00010874) fep_hwr_write_pane_g2

0x5d72,	// (0x00010881) fep_hwr_write_pane_g3_ParamLimits

0x5d72,	// (0x00010881) fep_hwr_write_pane_g3

0x5d80,	// (0x0001088f) fep_hwr_write_pane_g4_ParamLimits

0x5d80,	// (0x0001088f) fep_hwr_write_pane_g4

0x0005,

0xfb32,	// (0x0001a641) fep_hwr_write_pane_g_ParamLimits

0xfb32,	// (0x0001a641) fep_hwr_write_pane_g

0x5ca8,	// (0x000107b7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5ca8,	// (0x000107b7) bg_fep_hwr_candidate_pane_g2

0x5d95,	// (0x000108a4) cell_hwr_candidate_pane_ParamLimits

0x5d95,	// (0x000108a4) cell_hwr_candidate_pane

0x5de7,	// (0x000108f6) fep_hwr_candidate_pane_g1_ParamLimits

0xbfb8,	// (0x00016ac7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbfb8,	// (0x00016ac7) bg_popup_fep_shadow_pane_cp2

0xc14e,	// (0x00016c5d) fep_vkb_top_pane_g4_ParamLimits

0xc14e,	// (0x00016c5d) fep_vkb_top_pane_g4

0xc1a2,	// (0x00016cb1) fep_vkb_side_pane_g2_ParamLimits

0xc1a2,	// (0x00016cb1) fep_vkb_side_pane_g2

0x760e,	// (0x0001211d) list_setting_pane_t4_ParamLimits

0x760e,	// (0x0001211d) list_setting_pane_t4

0x768a,	// (0x00012199) list_setting_number_pane_t5_ParamLimits

0x768a,	// (0x00012199) list_setting_number_pane_t5

0x8012,	// (0x00012b21) list_double_heading_pane_cp2_ParamLimits

0x8012,	// (0x00012b21) list_double_heading_pane_cp2

0x7824,	// (0x00012333) list_double_heading_pane_g1_cp2_ParamLimits

0x7824,	// (0x00012333) list_double_heading_pane_g1_cp2

0x7830,	// (0x0001233f) list_double_heading_pane_g2_cp2_ParamLimits

0x7830,	// (0x0001233f) list_double_heading_pane_g2_cp2

0xc4e1,	// (0x00016ff0) list_double_heading_pane_t1_cp2_ParamLimits

0xc4e1,	// (0x00016ff0) list_double_heading_pane_t1_cp2

0xc4f7,	// (0x00017006) list_double_heading_pane_t2_cp2_ParamLimits

0xc4f7,	// (0x00017006) list_double_heading_pane_t2_cp2

0x68b6,	// (0x000113c5) aid_value_unit2

0x4f54,	// (0x0000fa63) popup_preview_fixed_window

0x6c66,	// (0x00011775) bg_popup_preview_window_pane_cp02

0xc509,	// (0x00017018) list_preview_fixed_pane

0xc54f,	// (0x0001705e) list_empty_pane_fp_ParamLimits

0xc54f,	// (0x0001705e) list_empty_pane_fp

0xc54f,	// (0x0001705e) list_single_cale_day_pane_fp_ParamLimits

0xc54f,	// (0x0001705e) list_single_cale_day_pane_fp

0xc54f,	// (0x0001705e) list_single_graphic_heading_pane_fp_ParamLimits

0xc54f,	// (0x0001705e) list_single_graphic_heading_pane_fp

0xc54f,	// (0x0001705e) list_single_graphic_pane_fp_ParamLimits

0xc54f,	// (0x0001705e) list_single_graphic_pane_fp

0xc54f,	// (0x0001705e) list_single_heading_pane_fp_ParamLimits

0xc54f,	// (0x0001705e) list_single_heading_pane_fp

0xc54f,	// (0x0001705e) list_single_pane_fp_ParamLimits

0xc54f,	// (0x0001705e) list_single_pane_fp

0xc568,	// (0x00017077) list_single_pane_fp_g1_ParamLimits

0xc568,	// (0x00017077) list_single_pane_fp_g1

0xc574,	// (0x00017083) list_single_pane_fp_g2_ParamLimits

0xc574,	// (0x00017083) list_single_pane_fp_g2

0xc580,	// (0x0001708f) list_single_pane_fp_g3_ParamLimits

0xc580,	// (0x0001708f) list_single_pane_fp_g3

0xc594,	// (0x000170a3) list_single_pane_fp_g4_ParamLimits

0xc594,	// (0x000170a3) list_single_pane_fp_g4

0x0003,

0xfb99,	// (0x0001a6a8) list_single_pane_fp_g_ParamLimits

0xfb99,	// (0x0001a6a8) list_single_pane_fp_g

0xc5a0,	// (0x000170af) list_single_pane_fp_t1_ParamLimits

0xc5a0,	// (0x000170af) list_single_pane_fp_t1

0xc5b7,	// (0x000170c6) list_single_graphic_pane_fp_g1_ParamLimits

0xc5b7,	// (0x000170c6) list_single_graphic_pane_fp_g1

0xc568,	// (0x00017077) list_single_graphic_pane_fp_g2_ParamLimits

0xc568,	// (0x00017077) list_single_graphic_pane_fp_g2

0xc574,	// (0x00017083) list_single_graphic_pane_fp_g3_ParamLimits

0xc574,	// (0x00017083) list_single_graphic_pane_fp_g3

0xc580,	// (0x0001708f) list_single_graphic_pane_fp_g4_ParamLimits

0xc580,	// (0x0001708f) list_single_graphic_pane_fp_g4

0xc594,	// (0x000170a3) list_single_graphic_pane_fp_g5_ParamLimits

0xc594,	// (0x000170a3) list_single_graphic_pane_fp_g5

0x0004,

0xfba2,	// (0x0001a6b1) list_single_graphic_pane_fp_g_ParamLimits

0xfba2,	// (0x0001a6b1) list_single_graphic_pane_fp_g

0xc5c3,	// (0x000170d2) list_single_graphic_pane_fp_t1_ParamLimits

0xc5c3,	// (0x000170d2) list_single_graphic_pane_fp_t1

0xc5b7,	// (0x000170c6) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc5b7,	// (0x000170c6) list_single_graphic_heading_pane_fp_g1

0xc568,	// (0x00017077) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc568,	// (0x00017077) list_single_graphic_heading_pane_fp_g2

0xc574,	// (0x00017083) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc574,	// (0x00017083) list_single_graphic_heading_pane_fp_g3

0xc580,	// (0x0001708f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc580,	// (0x0001708f) list_single_graphic_heading_pane_fp_g4

0xc594,	// (0x000170a3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc594,	// (0x000170a3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba2,	// (0x0001a6b1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0001a6b1) list_single_graphic_heading_pane_fp_g

0xc5d9,	// (0x000170e8) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc5d9,	// (0x000170e8) list_single_graphic_heading_pane_fp_t1

0xc5ef,	// (0x000170fe) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc5ef,	// (0x000170fe) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0001a6bc) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0001a6bc) list_single_graphic_heading_pane_fp_t

0xc601,	// (0x00017110) list_single_cale_day_pane_fp_g1_ParamLimits

0xc601,	// (0x00017110) list_single_cale_day_pane_fp_g1

0xc639,	// (0x00017148) list_single_cale_day_pane_fp_g2_ParamLimits

0xc639,	// (0x00017148) list_single_cale_day_pane_fp_g2

0xc645,	// (0x00017154) list_single_cale_day_pane_fp_g3_ParamLimits

0xc645,	// (0x00017154) list_single_cale_day_pane_fp_g3

0xc66d,	// (0x0001717c) list_single_cale_day_pane_fp_g4_ParamLimits

0xc66d,	// (0x0001717c) list_single_cale_day_pane_fp_g4

0xc691,	// (0x000171a0) list_single_cale_day_pane_fp_g5_ParamLimits

0xc691,	// (0x000171a0) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb2,	// (0x0001a6c1) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb2,	// (0x0001a6c1) list_single_cale_day_pane_fp_g

0xc6b5,	// (0x000171c4) list_single_cale_day_pane_fp_t1_ParamLimits

0xc6b5,	// (0x000171c4) list_single_cale_day_pane_fp_t1

0xc6db,	// (0x000171ea) list_single_cale_day_pane_fp_t2_ParamLimits

0xc6db,	// (0x000171ea) list_single_cale_day_pane_fp_t2

0xc6f4,	// (0x00017203) list_single_cale_day_pane_fp_t3_ParamLimits

0xc6f4,	// (0x00017203) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbd,	// (0x0001a6cc) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbd,	// (0x0001a6cc) list_single_cale_day_pane_fp_t

0xc568,	// (0x00017077) list_empty_pane_fp_g1_ParamLimits

0xc568,	// (0x00017077) list_empty_pane_fp_g1

0xc70d,	// (0x0001721c) list_empty_pane_fp_t1

0xc71b,	// (0x0001722a) list_empty_pane_fp_t2

0x0001,

0xfbc4,	// (0x0001a6d3) list_empty_pane_fp_t

0xc568,	// (0x00017077) list_single_heading_pane_fp_g1_ParamLimits

0xc568,	// (0x00017077) list_single_heading_pane_fp_g1

0xc574,	// (0x00017083) list_single_heading_pane_fp_g2_ParamLimits

0xc574,	// (0x00017083) list_single_heading_pane_fp_g2

0xc580,	// (0x0001708f) list_single_heading_pane_fp_g3_ParamLimits

0xc580,	// (0x0001708f) list_single_heading_pane_fp_g3

0x0002,

0xfbc9,	// (0x0001a6d8) list_single_heading_pane_fp_g_ParamLimits

0xfbc9,	// (0x0001a6d8) list_single_heading_pane_fp_g

0xc729,	// (0x00017238) list_single_heading_pane_fp_t1_ParamLimits

0xc729,	// (0x00017238) list_single_heading_pane_fp_t1

0xc73b,	// (0x0001724a) list_single_heading_pane_fp_t2_ParamLimits

0xc73b,	// (0x0001724a) list_single_heading_pane_fp_t2

0x0001,

0xfbd0,	// (0x0001a6df) list_single_heading_pane_fp_t_ParamLimits

0xfbd0,	// (0x0001a6df) list_single_heading_pane_fp_t

0x7b75,	// (0x00012684) aid_size_cell_fast

0x6bd8,	// (0x000116e7) soft_indicator_pane_cp1_t1

0x7bb2,	// (0x000126c1) cell_app_pane_cp2_ParamLimits

0x7bb2,	// (0x000126c1) cell_app_pane_cp2

0x5c13,	// (0x00010722) fep_hwr_candidate_drop_down_list_pane

0x5e01,	// (0x00010910) fep_hwr_candidate_pane_g3_ParamLimits

0x5e01,	// (0x00010910) fep_hwr_candidate_pane_g3

0x40b8,	// (0x0000ebc7) fep_hwr_candidate_pane_g4_ParamLimits

0x40b8,	// (0x0000ebc7) fep_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0001a64e) fep_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0001a64e) fep_hwr_candidate_pane_g

0xc048,	// (0x00016b57) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc048,	// (0x00016b57) fep_vkb_candidate_drop_down_list_pane

0xc47e,	// (0x00016f8d) fep_vkb_candidate_pane_g3

0xc486,	// (0x00016f95) fep_vkb_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0001a67b) fep_vkb_candidate_pane_g

0x5e6c,	// (0x0001097b) cell_hwr_candidate_pane_g1_ParamLimits

0x5e7a,	// (0x00010989) cell_hwr_candidate_pane_g3_ParamLimits

0x5e7a,	// (0x00010989) cell_hwr_candidate_pane_g3

0xe593,	// (0x000190a2) cell_hwr_candidate_pane_g4_ParamLimits

0xe593,	// (0x000190a2) cell_hwr_candidate_pane_g4

0x0002,

0xfb8b,	// (0x0001a69a) cell_hwr_candidate_pane_g_ParamLimits

0xfb8b,	// (0x0001a69a) cell_hwr_candidate_pane_g

0xc49d,	// (0x00016fac) cell_vkb_candidate_pane_g3_ParamLimits

0xc49d,	// (0x00016fac) cell_vkb_candidate_pane_g3

0xc4b8,	// (0x00016fc7) cell_vkb_candidate_pane_g4_ParamLimits

0xc4b8,	// (0x00016fc7) cell_vkb_candidate_pane_g4

0xc751,	// (0x00017260) cell_app_pane_cp2_g1_ParamLimits

0xc751,	// (0x00017260) cell_app_pane_cp2_g1

0xc76f,	// (0x0001727e) cell_app_pane_cp2_g2_ParamLimits

0xc76f,	// (0x0001727e) cell_app_pane_cp2_g2

0x0001,

0xfbd5,	// (0x0001a6e4) cell_app_pane_cp2_g_ParamLimits

0xfbd5,	// (0x0001a6e4) cell_app_pane_cp2_g

0xc77b,	// (0x0001728a) cell_app_pane_cp2_t1_ParamLimits

0xc77b,	// (0x0001728a) cell_app_pane_cp2_t1

0x77fe,	// (0x0001230d) grid_highlight_pane_cp1_ParamLimits

0x77fe,	// (0x0001230d) grid_highlight_pane_cp1

0x5eb9,	// (0x000109c8) cell_hwr_candidate_pane_cp1_ParamLimits

0x5eb9,	// (0x000109c8) cell_hwr_candidate_pane_cp1

0x5e6c,	// (0x0001097b) fep_hwr_candidate_drop_down_list_pane_g1

0x5edd,	// (0x000109ec) fep_hwr_candidate_drop_down_list_pane_g2

0x5eea,	// (0x000109f9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0001a6e9) fep_hwr_candidate_drop_down_list_pane_g

0x5ef7,	// (0x00010a06) fep_hwr_candidate_drop_down_list_scroll_pane

0x5f00,	// (0x00010a0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5f00,	// (0x00010a0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5f0d,	// (0x00010a1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5f0d,	// (0x00010a1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5f1a,	// (0x00010a29) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5f1a,	// (0x00010a29) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5f27,	// (0x00010a36) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5f27,	// (0x00010a36) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5f42,	// (0x00010a51) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5f42,	// (0x00010a51) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5f5d,	// (0x00010a6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5f5d,	// (0x00010a6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5f78,	// (0x00010a87) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5f78,	// (0x00010a87) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5f93,	// (0x00010aa2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5f93,	// (0x00010aa2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0001a6f0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0001a6f0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc78d,	// (0x0001729c) cell_vkb_candidate_pane_cp1_ParamLimits

0xc78d,	// (0x0001729c) cell_vkb_candidate_pane_cp1

0xc14e,	// (0x00016c5d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc14e,	// (0x00016c5d) fep_vkb_candidate_drop_down_list_pane_g1

0xc7b3,	// (0x000172c2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7b3,	// (0x000172c2) fep_vkb_candidate_drop_down_list_pane_g2

0xc7c0,	// (0x000172cf) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7c0,	// (0x000172cf) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf2,	// (0x0001a701) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf2,	// (0x0001a701) fep_vkb_candidate_drop_down_list_pane_g

0xc7cd,	// (0x000172dc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7cd,	// (0x000172dc) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7da,	// (0x000172e9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7da,	// (0x000172e9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7e7,	// (0x000172f6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7e7,	// (0x000172f6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7f3,	// (0x00017302) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7f3,	// (0x00017302) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7ff,	// (0x0001730e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7ff,	// (0x0001730e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc820,	// (0x0001732f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc820,	// (0x0001732f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc841,	// (0x00017350) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc841,	// (0x00017350) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc862,	// (0x00017371) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc862,	// (0x00017371) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc883,	// (0x00017392) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc883,	// (0x00017392) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf9,	// (0x0001a708) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf9,	// (0x0001a708) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x68ec,	// (0x000113fb) title_pane_g1_ParamLimits

0x68f9,	// (0x00011408) title_pane_g2_ParamLimits

0xf592,	// (0x0001a0a1) title_pane_g_ParamLimits

0x7fc0,	// (0x00012acf) aid_call2_pane

0x7fc8,	// (0x00012ad7) aid_call_pane

0x7fd0,	// (0x00012adf) popup_clock_analogue_window_g1

0x7fd0,	// (0x00012adf) popup_clock_analogue_window_g2

0x52c6,	// (0x0000fdd5) popup_clock_analogue_window_g3

0x52cf,	// (0x0000fdde) popup_clock_analogue_window_g4

0x68d8,	// (0x000113e7) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0001a246) popup_clock_analogue_window_g

0x52d7,	// (0x0000fde6) popup_clock_analogue_window_t1

0x52e5,	// (0x0000fdf4) clock_digital_number_pane_ParamLimits

0x52e5,	// (0x0000fdf4) clock_digital_number_pane

0x52f1,	// (0x0000fe00) clock_digital_number_pane_cp02_ParamLimits

0x52f1,	// (0x0000fe00) clock_digital_number_pane_cp02

0x52fd,	// (0x0000fe0c) clock_digital_number_pane_cp03_ParamLimits

0x52fd,	// (0x0000fe0c) clock_digital_number_pane_cp03

0x5309,	// (0x0000fe18) clock_digital_number_pane_cp04_ParamLimits

0x5309,	// (0x0000fe18) clock_digital_number_pane_cp04

0x5315,	// (0x0000fe24) clock_digital_separator_pane_ParamLimits

0x5315,	// (0x0000fe24) clock_digital_separator_pane

0x5321,	// (0x0000fe30) popup_clock_digital_window_t1_ParamLimits

0x5321,	// (0x0000fe30) popup_clock_digital_window_t1

0x68d8,	// (0x000113e7) clock_digital_number_pane_g1

0x68d8,	// (0x000113e7) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001a251) clock_digital_number_pane_g

0x68d8,	// (0x000113e7) clock_digital_separator_pane_g1

0x68d8,	// (0x000113e7) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001a251) clock_digital_separator_pane_g

0x9013,	// (0x00013b22) aid_fill_nsta_ParamLimits

0x9163,	// (0x00013c72) indicator_nsta_pane_ParamLimits

0x92f3,	// (0x00013e02) popup_clock_analogue_window

0x92f3,	// (0x00013e02) popup_clock_digital_window

0x69c2,	// (0x000114d1) grid_indicator_nsta_pane_ParamLimits

0xb8c5,	// (0x000163d4) clock_nsta_pane_t2

0x0001,

0xfacc,	// (0x0001a5db) clock_nsta_pane_t

0x528a,	// (0x0000fd99) aid_size_max_handle

0x5294,	// (0x0000fda3) aid_size_min_handle

0x864a,	// (0x00013159) editor_scroll_pane

0xc89e,	// (0x000173ad) ex_editor_pane

0x7ae2,	// (0x000125f1) scroll_pane_cp13

0x7202,	// (0x00011d11) scroll_pane_cp14

0x7ffa,	// (0x00012b09) scroll_pane_cp36

0x8028,	// (0x00012b37) list_single_graphic_hl_pane_cp2_ParamLimits

0x8028,	// (0x00012b37) list_single_graphic_hl_pane_cp2

0xac5b,	// (0x0001576a) list_single_graphic_hl_pane_ParamLimits

0xac5b,	// (0x0001576a) list_single_graphic_hl_pane

0xc8a6,	// (0x000173b5) aid_size_min_hl_cp1

0xc8af,	// (0x000173be) list_highlight_pane_cp34_ParamLimits

0xc8af,	// (0x000173be) list_highlight_pane_cp34

0xc8c0,	// (0x000173cf) list_single_graphic_hl_pane_g1_ParamLimits

0xc8c0,	// (0x000173cf) list_single_graphic_hl_pane_g1

0xc8cd,	// (0x000173dc) list_single_graphic_hl_pane_g2_ParamLimits

0xc8cd,	// (0x000173dc) list_single_graphic_hl_pane_g2

0xc8cd,	// (0x000173dc) list_single_graphic_hl_pane_g3_ParamLimits

0xc8cd,	// (0x000173dc) list_single_graphic_hl_pane_g3

0xb1a4,	// (0x00015cb3) list_single_graphic_hl_pane_g4_ParamLimits

0xb1a4,	// (0x00015cb3) list_single_graphic_hl_pane_g4

0xc8d9,	// (0x000173e8) list_single_graphic_hl_pane_g5_ParamLimits

0xc8d9,	// (0x000173e8) list_single_graphic_hl_pane_g5

0x0004,

0xfc0a,	// (0x0001a719) list_single_graphic_hl_pane_g_ParamLimits

0xfc0a,	// (0x0001a719) list_single_graphic_hl_pane_g

0xc8ed,	// (0x000173fc) list_single_graphic_hl_pane_t1_ParamLimits

0xc8ed,	// (0x000173fc) list_single_graphic_hl_pane_t1

0xc903,	// (0x00017412) aid_size_min_hl_cp2

0xc90c,	// (0x0001741b) list_highlight_pane_cp34_cp2_ParamLimits

0xc90c,	// (0x0001741b) list_highlight_pane_cp34_cp2

0xc8c0,	// (0x000173cf) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8c0,	// (0x000173cf) list_single_graphic_hl_pane_g1_cp2

0xc919,	// (0x00017428) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc919,	// (0x00017428) list_single_graphic_hl_pane_g2_cp2

0xc925,	// (0x00017434) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc925,	// (0x00017434) list_single_graphic_hl_pane_g3_cp2

0x7216,	// (0x00011d25) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7216,	// (0x00011d25) list_single_graphic_hl_pane_g4_cp2

0xc933,	// (0x00017442) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc933,	// (0x00017442) list_single_graphic_hl_pane_g5_cp2

0x55da,	// (0x000100e9) control_pane_g4_ParamLimits

0x55da,	// (0x000100e9) control_pane_g4

0x89d8,	// (0x000134e7) bg_popup_sub_pane_cp10_ParamLimits

0xbece,	// (0x000169dd) list_choice_list_pane_ParamLimits

0xbedd,	// (0x000169ec) scroll_pane_cp23

0x6c66,	// (0x00011775) bg_popup_preview_window_pane_cp02_ParamLimits

0xc509,	// (0x00017018) list_preview_fixed_pane_ParamLimits

0xc51f,	// (0x0001702e) list_preview_fixed_pane_cp_ParamLimits

0xc51f,	// (0x0001702e) list_preview_fixed_pane_cp

0xc52b,	// (0x0001703a) popup_preview_fixed_window_g1_ParamLimits

0xc52b,	// (0x0001703a) popup_preview_fixed_window_g1

0xc537,	// (0x00017046) popup_preview_fixed_window_g2_ParamLimits

0xc537,	// (0x00017046) popup_preview_fixed_window_g2

0x0002,

0xfb92,	// (0x0001a6a1) popup_preview_fixed_window_g_ParamLimits

0xfb92,	// (0x0001a6a1) popup_preview_fixed_window_g

0x51fc,	// (0x0000fd0b) aid_navi_side_left_pane_ParamLimits

0x5211,	// (0x0000fd20) aid_navi_side_right_pane_ParamLimits

0x5229,	// (0x0000fd38) navi_icon_pane_stacon_ParamLimits

0x523d,	// (0x0000fd4c) navi_navi_pane_stacon_ParamLimits

0x5229,	// (0x0000fd38) navi_text_pane_stacon_ParamLimits

0x68ce,	// (0x000113dd) main_text_info_pane

0xc95d,	// (0x0001746c) listscroll_text_info_pane

0xc965,	// (0x00017474) list_text_info_pane_ParamLimits

0xc965,	// (0x00017474) list_text_info_pane

0xc974,	// (0x00017483) scroll_pane_cp24_ParamLimits

0xc974,	// (0x00017483) scroll_pane_cp24

0xc992,	// (0x000174a1) list_text_info_pane_t1_ParamLimits

0xc992,	// (0x000174a1) list_text_info_pane_t1

0x8a26,	// (0x00013535) popup_fast_swap2_window_ParamLimits

0x8a26,	// (0x00013535) popup_fast_swap2_window

0xc9b7,	// (0x000174c6) aid_size_cell_fast2

0x68ce,	// (0x000113dd) bg_popup_window_pane_cp17

0x9a2d,	// (0x0001453c) heading_pane_cp2

0x6ec6,	// (0x000119d5) listscroll_fast2_pane

0xc9c1,	// (0x000174d0) grid_fast2_pane

0xc9cb,	// (0x000174da) listscroll_fast2_pane_g1

0xc9d5,	// (0x000174e4) listscroll_fast2_pane_g2

0x0001,

0xfc15,	// (0x0001a724) listscroll_fast2_pane_g

0x7ae2,	// (0x000125f1) scroll_pane_cp26

0xc9df,	// (0x000174ee) cell_fast2_pane_ParamLimits

0xc9df,	// (0x000174ee) cell_fast2_pane

0xc9f6,	// (0x00017505) cell_fast2_pane_g1

0xc9ff,	// (0x0001750e) cell_fast2_pane_g2

0xca08,	// (0x00017517) cell_fast2_pane_g3

0x0002,

0xfc1a,	// (0x0001a729) cell_fast2_pane_g

0x6fbf,	// (0x00011ace) grid_highlight_pane_cp9

0x6fd4,	// (0x00011ae3) main_eswt_pane_ParamLimits

0x6fd4,	// (0x00011ae3) main_eswt_pane

0xc989,	// (0x00017498) list_single_text_info_pane

0xca10,	// (0x0001751f) eswt_ctrl_button_pane

0xca10,	// (0x0001751f) eswt_ctrl_canvas_pane

0xca18,	// (0x00017527) eswt_ctrl_combo_pane

0xca10,	// (0x0001751f) eswt_ctrl_default_pane

0xca10,	// (0x0001751f) eswt_ctrl_label_pane

0xca20,	// (0x0001752f) eswt_ctrl_wait_pane

0xca28,	// (0x00017537) eswt_shell_pane

0x68ce,	// (0x000113dd) listscroll_eswt_app_pane

0xca48,	// (0x00017557) popup_eswt_tasktip_window_ParamLimits

0xca48,	// (0x00017557) popup_eswt_tasktip_window

0x9666,	// (0x00014175) bg_popup_window_pane_cp18

0xca59,	// (0x00017568) eswt_control_pane_g1_ParamLimits

0xca59,	// (0x00017568) eswt_control_pane_g1

0xca66,	// (0x00017575) eswt_control_pane_g2_ParamLimits

0xca66,	// (0x00017575) eswt_control_pane_g2

0xca73,	// (0x00017582) eswt_control_pane_g3_ParamLimits

0xca73,	// (0x00017582) eswt_control_pane_g3

0xca80,	// (0x0001758f) eswt_control_pane_g4_ParamLimits

0xca80,	// (0x0001758f) eswt_control_pane_g4

0x0003,

0xfc21,	// (0x0001a730) eswt_control_pane_g_ParamLimits

0xfc21,	// (0x0001a730) eswt_control_pane_g

0x77fe,	// (0x0001230d) bg_button_pane_ParamLimits

0x77fe,	// (0x0001230d) bg_button_pane

0x6fd4,	// (0x00011ae3) common_borders_pane_copy2_ParamLimits

0x6fd4,	// (0x00011ae3) common_borders_pane_copy2

0xca8d,	// (0x0001759c) control_button_pane_g1_ParamLimits

0xca8d,	// (0x0001759c) control_button_pane_g1

0xca99,	// (0x000175a8) control_button_pane_g2_ParamLimits

0xca99,	// (0x000175a8) control_button_pane_g2

0xcaa5,	// (0x000175b4) control_button_pane_g3_ParamLimits

0xcaa5,	// (0x000175b4) control_button_pane_g3

0x0002,

0xfc2a,	// (0x0001a739) control_button_pane_g_ParamLimits

0xfc2a,	// (0x0001a739) control_button_pane_g

0xcab9,	// (0x000175c8) control_button_pane_t1

0xcac7,	// (0x000175d6) control_button_pane_t2

0x0001,

0xfc31,	// (0x0001a740) control_button_pane_t

0x954a,	// (0x00014059) bg_button_pane_g1

0x955a,	// (0x00014069) bg_button_pane_g2

0x9552,	// (0x00014061) bg_button_pane_g3

0x956a,	// (0x00014079) bg_button_pane_g4

0x9562,	// (0x00014071) bg_button_pane_g5

0x9572,	// (0x00014081) bg_button_pane_g6

0x957a,	// (0x00014089) bg_button_pane_g7

0x958a,	// (0x00014099) bg_button_pane_g8

0x9582,	// (0x00014091) bg_button_pane_g9

0x0008,

0xf89a,	// (0x0001a3a9) bg_button_pane_g

0xbe89,	// (0x00016998) common_borders_pane_ParamLimits

0xbe89,	// (0x00016998) common_borders_pane

0xca59,	// (0x00017568) eswt_control_pane_g1_copy1_ParamLimits

0xca59,	// (0x00017568) eswt_control_pane_g1_copy1

0xca66,	// (0x00017575) eswt_control_pane_g2_copy1_ParamLimits

0xca66,	// (0x00017575) eswt_control_pane_g2_copy1

0xca73,	// (0x00017582) eswt_control_pane_g3_copy1_ParamLimits

0xca73,	// (0x00017582) eswt_control_pane_g3_copy1

0xca80,	// (0x0001758f) eswt_control_pane_g4_copy1_ParamLimits

0xca80,	// (0x0001758f) eswt_control_pane_g4_copy1

0xbec4,	// (0x000169d3) bg_eswt_ctrl_canvas_pane_g1

0xbe89,	// (0x00016998) common_borders_pane_cp2_ParamLimits

0xbe89,	// (0x00016998) common_borders_pane_cp2

0xbe89,	// (0x00016998) common_borders_pane_cp3_ParamLimits

0xbe89,	// (0x00016998) common_borders_pane_cp3

0xcad5,	// (0x000175e4) separator_horizontal_pane

0xcadd,	// (0x000175ec) separator_vertical_pane

0xca59,	// (0x00017568) eswt_control_pane_g1_copy2_ParamLimits

0xca59,	// (0x00017568) eswt_control_pane_g1_copy2

0xca66,	// (0x00017575) eswt_control_pane_g2_copy2_ParamLimits

0xca66,	// (0x00017575) eswt_control_pane_g2_copy2

0xca73,	// (0x00017582) eswt_control_pane_g3_copy2_ParamLimits

0xca73,	// (0x00017582) eswt_control_pane_g3_copy2

0xca80,	// (0x0001758f) eswt_control_pane_g4_copy2_ParamLimits

0xca80,	// (0x0001758f) eswt_control_pane_g4_copy2

0x68ce,	// (0x000113dd) common_borders_pane_cp4

0xcae6,	// (0x000175f5) separator_horizontal_pane_g1

0xcaef,	// (0x000175fe) separator_horizontal_pane_g2

0xcaf8,	// (0x00017607) separator_horizontal_pane_g3

0x0002,

0xfc36,	// (0x0001a745) separator_horizontal_pane_g

0xca59,	// (0x00017568) eswt_control_pane_g1_copy3_ParamLimits

0xca59,	// (0x00017568) eswt_control_pane_g1_copy3

0xca66,	// (0x00017575) eswt_control_pane_g2_copy3_ParamLimits

0xca66,	// (0x00017575) eswt_control_pane_g2_copy3

0xca73,	// (0x00017582) eswt_control_pane_g3_copy3_ParamLimits

0xca73,	// (0x00017582) eswt_control_pane_g3_copy3

0xca80,	// (0x0001758f) eswt_control_pane_g4_copy3_ParamLimits

0xca80,	// (0x0001758f) eswt_control_pane_g4_copy3

0x68ce,	// (0x000113dd) common_borders_pane_cp5

0xcb01,	// (0x00017610) separator_vertical_pane_g1

0xcb0a,	// (0x00017619) separator_vertical_pane_g2

0xcb13,	// (0x00017622) separator_vertical_pane_g3

0x0002,

0xfc3d,	// (0x0001a74c) separator_vertical_pane_g

0xca59,	// (0x00017568) eswt_control_pane_g1_copy4_ParamLimits

0xca59,	// (0x00017568) eswt_control_pane_g1_copy4

0xca66,	// (0x00017575) eswt_control_pane_g2_copy4_ParamLimits

0xca66,	// (0x00017575) eswt_control_pane_g2_copy4

0xca73,	// (0x00017582) eswt_control_pane_g3_copy4_ParamLimits

0xca73,	// (0x00017582) eswt_control_pane_g3_copy4

0xca80,	// (0x0001758f) eswt_control_pane_g4_copy4_ParamLimits

0xca80,	// (0x0001758f) eswt_control_pane_g4_copy4

0xcb1c,	// (0x0001762b) eswt_ctrl_combo_button_pane

0xcb24,	// (0x00017633) eswt_ctrl_input_pane

0xcb2c,	// (0x0001763b) popup_choice_list_window_cp70

0xcb34,	// (0x00017643) eswt_ctrl_input_pane_t1

0x68ce,	// (0x000113dd) input_focus_pane_cp70

0xbe89,	// (0x00016998) bg_button_pane_cp70_ParamLimits

0xbe89,	// (0x00016998) bg_button_pane_cp70

0xcb42,	// (0x00017651) eswt_ctrl_combo_button_pane_g1

0xcb4a,	// (0x00017659) wait_bar_pane_cp70

0x9666,	// (0x00014175) bg_popup_window_pane_cp70_ParamLimits

0x9666,	// (0x00014175) bg_popup_window_pane_cp70

0xcb52,	// (0x00017661) popup_eswt_tasktip_window_t1

0xcb68,	// (0x00017677) wait_bar_pane_cp71_ParamLimits

0xcb68,	// (0x00017677) wait_bar_pane_cp71

0xcb74,	// (0x00017683) grid_eswt_app_pane

0x7e04,	// (0x00012913) scroll_pane_cp70

0xcb7d,	// (0x0001768c) cell_eswt_app_pane_ParamLimits

0xcb7d,	// (0x0001768c) cell_eswt_app_pane

0xcbaf,	// (0x000176be) cell_eswt_app_pane_g1_ParamLimits

0xcbaf,	// (0x000176be) cell_eswt_app_pane_g1

0xcbde,	// (0x000176ed) cell_eswt_app_pane_g2_ParamLimits

0xcbde,	// (0x000176ed) cell_eswt_app_pane_g2

0x0001,

0xfc44,	// (0x0001a753) cell_eswt_app_pane_g_ParamLimits

0xfc44,	// (0x0001a753) cell_eswt_app_pane_g

0xcc07,	// (0x00017716) cell_eswt_app_pane_t1_ParamLimits

0xcc07,	// (0x00017716) cell_eswt_app_pane_t1

0xcc39,	// (0x00017748) grid_highlight_pane_cp70_ParamLimits

0xcc39,	// (0x00017748) grid_highlight_pane_cp70

0xab1d,	// (0x0001562c) set_content_pane_g1

0x88fa,	// (0x00013409) status_small_volume_pane

0x5fae,	// (0x00010abd) status_small_volume_pane_g1

0x5fb6,	// (0x00010ac5) volume_small2_pane

0x5fbf,	// (0x00010ace) volume_small2_pane_g1

0x5fc8,	// (0x00010ad7) volume_small2_pane_g2

0x5fd1,	// (0x00010ae0) volume_small2_pane_g3

0x5fda,	// (0x00010ae9) volume_small2_pane_g4

0x5fe3,	// (0x00010af2) volume_small2_pane_g5

0x5fec,	// (0x00010afb) volume_small2_pane_g6

0x5ff5,	// (0x00010b04) volume_small2_pane_g7

0x5ffe,	// (0x00010b0d) volume_small2_pane_g8

0x6007,	// (0x00010b16) volume_small2_pane_g9

0x6010,	// (0x00010b1f) volume_small2_pane_g10

0x0009,

0xfc49,	// (0x0001a758) volume_small2_pane_g

0xc2b0,	// (0x00016dbf) fep_vkb_top_text_pane_g1_ParamLimits

0xc2cb,	// (0x00016dda) fep_vkb_top_text_pane_t1_ParamLimits

0xc543,	// (0x00017052) popup_preview_fixed_window_g3_ParamLimits

0xc543,	// (0x00017052) popup_preview_fixed_window_g3

0x8f37,	// (0x00013a46) popup_toolbar_trans_pane

0xa9c2,	// (0x000154d1) aid_height_set_list_ParamLimits

0xa9d3,	// (0x000154e2) aid_size_parent_ParamLimits

0x89d8,	// (0x000134e7) list_highlight_pane_cp2_ParamLimits

0xab1d,	// (0x0001562c) set_content_pane_g1_ParamLimits

0xac6f,	// (0x0001577e) list_single_image_pane_ParamLimits

0xac6f,	// (0x0001577e) list_single_image_pane

0xcc45,	// (0x00017754) aid_size_cell_image_ParamLimits

0xcc45,	// (0x00017754) aid_size_cell_image

0xcc52,	// (0x00017761) grid_single_image_pane_ParamLimits

0xcc52,	// (0x00017761) grid_single_image_pane

0x7824,	// (0x00012333) list_single_image_pane_g1_ParamLimits

0x7824,	// (0x00012333) list_single_image_pane_g1

0x7830,	// (0x0001233f) list_single_image_pane_g2_ParamLimits

0x7830,	// (0x0001233f) list_single_image_pane_g2

0x0001,

0xfc5e,	// (0x0001a76d) list_single_image_pane_g_ParamLimits

0xfc5e,	// (0x0001a76d) list_single_image_pane_g

0xcc60,	// (0x0001776f) list_single_image_pane_t1_ParamLimits

0xcc60,	// (0x0001776f) list_single_image_pane_t1

0xcc76,	// (0x00017785) cell_image_list_pane_ParamLimits

0xcc76,	// (0x00017785) cell_image_list_pane

0xcc8c,	// (0x0001779b) cell_image_list_pane_g1

0xcc95,	// (0x000177a4) cell_image_list_pane_g2

0x0001,

0xfc63,	// (0x0001a772) cell_image_list_pane_g

0xcc9e,	// (0x000177ad) aid_size_cell_tb_trans_pane

0x77fe,	// (0x0001230d) bg_tb_trans_pane

0xccb0,	// (0x000177bf) grid_tb_trans_pane

0x954a,	// (0x00014059) bg_tb_trans_pane_g1

0x955a,	// (0x00014069) bg_tb_trans_pane_g2

0x9552,	// (0x00014061) bg_tb_trans_pane_g3

0x956a,	// (0x00014079) bg_tb_trans_pane_g4

0x9562,	// (0x00014071) bg_tb_trans_pane_g5

0x958a,	// (0x00014099) bg_tb_trans_pane_g6

0x9582,	// (0x00014091) bg_tb_trans_pane_g7

0x9572,	// (0x00014081) bg_tb_trans_pane_g8

0x957a,	// (0x00014089) bg_tb_trans_pane_g9

0x0008,

0xfc68,	// (0x0001a777) bg_tb_trans_pane_g

0xccc4,	// (0x000177d3) cell_toolbar_trans_pane_ParamLimits

0xccc4,	// (0x000177d3) cell_toolbar_trans_pane

0xbec4,	// (0x000169d3) cell_toolbar_trans_pane_g1

0xba8f,	// (0x0001659e) list_form2_midp_pane_t1

0xba9d,	// (0x000165ac) list_form2_midp_pane_t2

0x0001,

0xfb05,	// (0x0001a614) list_form2_midp_pane_t

0xbaab,	// (0x000165ba) scroll_pane_cp51_ParamLimits

0xbcc8,	// (0x000167d7) form2_midp_wait_pane_g1

0xbcd1,	// (0x000167e0) form2_midp_wait_pane_g2

0xbcda,	// (0x000167e9) form2_midp_wait_pane_g3

0x0002,

0xfb1a,	// (0x0001a629) form2_midp_wait_pane_g

0x69c2,	// (0x000114d1) list_highlight_pane_cp21_ParamLimits

0xbd1e,	// (0x0001682d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd2d,	// (0x0001683c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xac14,	// (0x00015723) list_single_2graphic_im_pane_ParamLimits

0xac14,	// (0x00015723) list_single_2graphic_im_pane

0xccea,	// (0x000177f9) list_single_2graphic_im_pane_g1_ParamLimits

0xccea,	// (0x000177f9) list_single_2graphic_im_pane_g1

0xccfb,	// (0x0001780a) list_single_2graphic_im_pane_g2_ParamLimits

0xccfb,	// (0x0001780a) list_single_2graphic_im_pane_g2

0xcd07,	// (0x00017816) list_single_2graphic_im_pane_g3_ParamLimits

0xcd07,	// (0x00017816) list_single_2graphic_im_pane_g3

0x0003,

0xfc7b,	// (0x0001a78a) list_single_2graphic_im_pane_g_ParamLimits

0xfc7b,	// (0x0001a78a) list_single_2graphic_im_pane_g

0xcd27,	// (0x00017836) list_single_2graphic_im_pane_t1_ParamLimits

0xcd27,	// (0x00017836) list_single_2graphic_im_pane_t1

0xc54f,	// (0x0001705e) list_single_graphic_2heading_pane_fp_ParamLimits

0xc54f,	// (0x0001705e) list_single_graphic_2heading_pane_fp

0xc5b7,	// (0x000170c6) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc5b7,	// (0x000170c6) list_single_graphic_2heading_pane_fp_g1

0xc568,	// (0x00017077) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc568,	// (0x00017077) list_single_graphic_2heading_pane_fp_g2

0xc574,	// (0x00017083) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc574,	// (0x00017083) list_single_graphic_2heading_pane_fp_g3

0xc580,	// (0x0001708f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc580,	// (0x0001708f) list_single_graphic_2heading_pane_fp_g4

0xc594,	// (0x000170a3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc594,	// (0x000170a3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba2,	// (0x0001a6b1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0001a6b1) list_single_graphic_2heading_pane_fp_g

0xcd58,	// (0x00017867) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcd58,	// (0x00017867) list_single_graphic_2heading_pane_fp_t1

0xc5ef,	// (0x000170fe) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc5ef,	// (0x000170fe) list_single_graphic_2heading_pane_fp_t2

0xcd6e,	// (0x0001787d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcd6e,	// (0x0001787d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc84,	// (0x0001a793) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc84,	// (0x0001a793) list_single_graphic_2heading_pane_fp_t

0xbf64,	// (0x00016a73) fep_hwr_write_pane_g5_ParamLimits

0xbf64,	// (0x00016a73) fep_hwr_write_pane_g5

0xbf70,	// (0x00016a7f) fep_hwr_write_pane_g6_ParamLimits

0xbf70,	// (0x00016a7f) fep_hwr_write_pane_g6

0xca28,	// (0x00017537) eswt_shell_pane_ParamLimits

0x9666,	// (0x00014175) bg_popup_window_pane_cp18_ParamLimits

0xa8f1,	// (0x00015400) heading_pane_cp70

0xcb52,	// (0x00017661) popup_eswt_tasktip_window_t1_ParamLimits

0x906a,	// (0x00013b79) aid_touch_tab_arrow_left

0x9079,	// (0x00013b88) aid_touch_tab_arrow_right

0x690a,	// (0x00011419) title_pane_g3_ParamLimits

0x690a,	// (0x00011419) title_pane_g3

0x76cd,	// (0x000121dc) set_value_pane_g1

0x8f37,	// (0x00013a46) popup_toolbar_trans_pane_ParamLimits

0xcc9e,	// (0x000177ad) aid_size_cell_tb_trans_pane_ParamLimits

0x77fe,	// (0x0001230d) bg_tb_trans_pane_ParamLimits

0xccb0,	// (0x000177bf) grid_tb_trans_pane_ParamLimits

0x6c66,	// (0x00011775) cont_note_pane_ParamLimits

0x6c66,	// (0x00011775) cont_note_pane

0x6fd4,	// (0x00011ae3) cont_snote2_single_text_pane_ParamLimits

0x6fd4,	// (0x00011ae3) cont_snote2_single_text_pane

0x6fd4,	// (0x00011ae3) cont_snote2_single_graphic_pane_ParamLimits

0x6fd4,	// (0x00011ae3) cont_snote2_single_graphic_pane

0x9c18,	// (0x00014727) cont_note_wait_pane_ParamLimits

0x9c18,	// (0x00014727) cont_note_wait_pane

0x9c18,	// (0x00014727) cont_note_image_pane_ParamLimits

0x9c18,	// (0x00014727) cont_note_image_pane

0xcd84,	// (0x00017893) popup_note2_window_g1_ParamLimits

0xcd84,	// (0x00017893) popup_note2_window_g1

0xcdb5,	// (0x000178c4) popup_note2_window_t1_ParamLimits

0xcdb5,	// (0x000178c4) popup_note2_window_t1

0xcdfa,	// (0x00017909) popup_note2_window_t2_ParamLimits

0xcdfa,	// (0x00017909) popup_note2_window_t2

0xce3f,	// (0x0001794e) popup_note2_window_t3_ParamLimits

0xce3f,	// (0x0001794e) popup_note2_window_t3

0xce84,	// (0x00017993) popup_note2_window_t4_ParamLimits

0xce84,	// (0x00017993) popup_note2_window_t4

0x6cea,	// (0x000117f9) popup_note2_window_t5_ParamLimits

0x6cea,	// (0x000117f9) popup_note2_window_t5

0x0004,

0xfc90,	// (0x0001a79f) popup_note2_window_t_ParamLimits

0xfc90,	// (0x0001a79f) popup_note2_window_t

0xceb3,	// (0x000179c2) popup_note2_image_window_g1_ParamLimits

0xceb3,	// (0x000179c2) popup_note2_image_window_g1

0xcebf,	// (0x000179ce) popup_note2_image_window_g2_ParamLimits

0xcebf,	// (0x000179ce) popup_note2_image_window_g2

0x0001,

0xfc9b,	// (0x0001a7aa) popup_note2_image_window_g_ParamLimits

0xfc9b,	// (0x0001a7aa) popup_note2_image_window_g

0xced1,	// (0x000179e0) popup_note2_image_window_t1_ParamLimits

0xced1,	// (0x000179e0) popup_note2_image_window_t1

0xcee9,	// (0x000179f8) popup_note2_image_window_t2_ParamLimits

0xcee9,	// (0x000179f8) popup_note2_image_window_t2

0xcf01,	// (0x00017a10) popup_note2_image_window_t3_ParamLimits

0xcf01,	// (0x00017a10) popup_note2_image_window_t3

0x0002,

0xfca0,	// (0x0001a7af) popup_note2_image_window_t_ParamLimits

0xfca0,	// (0x0001a7af) popup_note2_image_window_t

0x9c26,	// (0x00014735) popup_note2_wait_window_g1_ParamLimits

0x9c26,	// (0x00014735) popup_note2_wait_window_g1

0xcf1d,	// (0x00017a2c) popup_note2_wait_window_g2_ParamLimits

0xcf1d,	// (0x00017a2c) popup_note2_wait_window_g2

0x9c3e,	// (0x0001474d) popup_note2_wait_window_g3_ParamLimits

0x9c3e,	// (0x0001474d) popup_note2_wait_window_g3

0x0002,

0xfca7,	// (0x0001a7b6) popup_note2_wait_window_g_ParamLimits

0xfca7,	// (0x0001a7b6) popup_note2_wait_window_g

0xcf29,	// (0x00017a38) popup_note2_wait_window_t1_ParamLimits

0xcf29,	// (0x00017a38) popup_note2_wait_window_t1

0xcf47,	// (0x00017a56) popup_note2_wait_window_t2_ParamLimits

0xcf47,	// (0x00017a56) popup_note2_wait_window_t2

0xcf65,	// (0x00017a74) popup_note2_wait_window_t3_ParamLimits

0xcf65,	// (0x00017a74) popup_note2_wait_window_t3

0xcf77,	// (0x00017a86) popup_note2_wait_window_t4_ParamLimits

0xcf77,	// (0x00017a86) popup_note2_wait_window_t4

0x0003,

0xfcae,	// (0x0001a7bd) popup_note2_wait_window_t_ParamLimits

0xfcae,	// (0x0001a7bd) popup_note2_wait_window_t

0xcf89,	// (0x00017a98) wait_bar2_pane_ParamLimits

0xcf89,	// (0x00017a98) wait_bar2_pane

0xcfa1,	// (0x00017ab0) popup_snote2_single_text_window_g1_ParamLimits

0xcfa1,	// (0x00017ab0) popup_snote2_single_text_window_g1

0xcfc9,	// (0x00017ad8) popup_snote2_single_text_window_t1_ParamLimits

0xcfc9,	// (0x00017ad8) popup_snote2_single_text_window_t1

0xd015,	// (0x00017b24) popup_snote2_single_text_window_t2_ParamLimits

0xd015,	// (0x00017b24) popup_snote2_single_text_window_t2

0xd061,	// (0x00017b70) popup_snote2_single_text_window_t3_ParamLimits

0xd061,	// (0x00017b70) popup_snote2_single_text_window_t3

0xd0a2,	// (0x00017bb1) popup_snote2_single_text_window_t4_ParamLimits

0xd0a2,	// (0x00017bb1) popup_snote2_single_text_window_t4

0xd0d8,	// (0x00017be7) popup_snote2_single_text_window_t5_ParamLimits

0xd0d8,	// (0x00017be7) popup_snote2_single_text_window_t5

0x0004,

0xfcb7,	// (0x0001a7c6) popup_snote2_single_text_window_t_ParamLimits

0xfcb7,	// (0x0001a7c6) popup_snote2_single_text_window_t

0xd103,	// (0x00017c12) popup_snote2_single_graphic_window_g1_ParamLimits

0xd103,	// (0x00017c12) popup_snote2_single_graphic_window_g1

0xd12b,	// (0x00017c3a) popup_snote2_single_graphic_window_g2_ParamLimits

0xd12b,	// (0x00017c3a) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc2,	// (0x0001a7d1) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc2,	// (0x0001a7d1) popup_snote2_single_graphic_window_g

0xd153,	// (0x00017c62) popup_snote2_single_graphic_window_t1_ParamLimits

0xd153,	// (0x00017c62) popup_snote2_single_graphic_window_t1

0xd19f,	// (0x00017cae) popup_snote2_single_graphic_window_t2_ParamLimits

0xd19f,	// (0x00017cae) popup_snote2_single_graphic_window_t2

0xd061,	// (0x00017b70) popup_snote2_single_graphic_window_t3_ParamLimits

0xd061,	// (0x00017b70) popup_snote2_single_graphic_window_t3

0xd0a2,	// (0x00017bb1) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0a2,	// (0x00017bb1) popup_snote2_single_graphic_window_t4

0xd0d8,	// (0x00017be7) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0d8,	// (0x00017be7) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc7,	// (0x0001a7d6) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc7,	// (0x0001a7d6) popup_snote2_single_graphic_window_t

0xb955,	// (0x00016464) clock_nsta_pane_cp2_t1

0xb955,	// (0x00016464) clock_nsta_pane_cp2_t2

0x0001,

0xfadb,	// (0x0001a5ea) clock_nsta_pane_cp2_t

0x7818,	// (0x00012327) form_field_data_wide_pane_g1_ParamLimits

0x7824,	// (0x00012333) form_field_data_wide_pane_g2_ParamLimits

0x7824,	// (0x00012333) form_field_data_wide_pane_g2

0x7830,	// (0x0001233f) form_field_data_wide_pane_g3_ParamLimits

0x7830,	// (0x0001233f) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001a1c9) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001a1c9) form_field_data_wide_pane_g

0xb861,	// (0x00016370) grid_touch_3_pane_ParamLimits

0xb861,	// (0x00016370) grid_touch_3_pane

0xd1eb,	// (0x00017cfa) cell_touch_3_pane_ParamLimits

0xd1eb,	// (0x00017cfa) cell_touch_3_pane

0xbec4,	// (0x000169d3) cell_touch_3_pane_g1

0xbec4,	// (0x000169d3) cell_touch_3_pane_g2

0x0001,

0xfb60,	// (0x0001a66f) cell_touch_3_pane_g

0x6d1c,	// (0x0001182b) cont_query_data_pane

0x6d24,	// (0x00011833) cont_query_data_pane_cp1

0xd21e,	// (0x00017d2d) button_value_adjust_pane_cp7

0xd226,	// (0x00017d35) query_popup_pane_cp3

0x809a,	// (0x00012ba9) bg_popup_sub_pane_cp22_ParamLimits

0x5340,	// (0x0000fe4f) navi_navi_volume_pane_cp2

0x535b,	// (0x0000fe6a) popup_side_volume_key_window_g2

0x536a,	// (0x0000fe79) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0001a25b) popup_side_volume_key_window_g

0x5387,	// (0x0000fe96) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0001a262) popup_side_volume_key_window_t

0x83e1,	// (0x00012ef0) popup_side_volume_key_window_ParamLimits

0x73e7,	// (0x00011ef6) list_double_graphic_pane_g4_ParamLimits

0x73e7,	// (0x00011ef6) list_double_graphic_pane_g4

0xac43,	// (0x00015752) list_single_2heading_msg_pane_ParamLimits

0xac43,	// (0x00015752) list_single_2heading_msg_pane

0xd257,	// (0x00017d66) list_single_2heading_msg_pane_g1_ParamLimits

0xd257,	// (0x00017d66) list_single_2heading_msg_pane_g1

0x7216,	// (0x00011d25) list_single_2heading_msg_pane_g2_ParamLimits

0x7216,	// (0x00011d25) list_single_2heading_msg_pane_g2

0xd263,	// (0x00017d72) list_single_2heading_msg_pane_g3_ParamLimits

0xd263,	// (0x00017d72) list_single_2heading_msg_pane_g3

0xd26f,	// (0x00017d7e) list_single_2heading_msg_pane_g4_ParamLimits

0xd26f,	// (0x00017d7e) list_single_2heading_msg_pane_g4

0x0003,

0xfcd2,	// (0x0001a7e1) list_single_2heading_msg_pane_g_ParamLimits

0xfcd2,	// (0x0001a7e1) list_single_2heading_msg_pane_g

0xd287,	// (0x00017d96) list_single_2heading_msg_pane_t1_ParamLimits

0xd287,	// (0x00017d96) list_single_2heading_msg_pane_t1

0xd2af,	// (0x00017dbe) list_single_2heading_msg_pane_t2_ParamLimits

0xd2af,	// (0x00017dbe) list_single_2heading_msg_pane_t2

0xd2de,	// (0x00017ded) list_single_2heading_msg_pane_t3_ParamLimits

0xd2de,	// (0x00017ded) list_single_2heading_msg_pane_t3

0xd317,	// (0x00017e26) list_single_2heading_msg_pane_t4_ParamLimits

0xd317,	// (0x00017e26) list_single_2heading_msg_pane_t4

0x0003,

0xfcdb,	// (0x0001a7ea) list_single_2heading_msg_pane_t_ParamLimits

0xfcdb,	// (0x0001a7ea) list_single_2heading_msg_pane_t

0x6916,	// (0x00011425) title_pane_g4_ParamLimits

0x6916,	// (0x00011425) title_pane_g4

0x514c,	// (0x0000fc5b) title_pane_stacon_g3_ParamLimits

0x514c,	// (0x0000fc5b) title_pane_stacon_g3

0xcd1b,	// (0x0001782a) list_single_2graphic_im_pane_g4_ParamLimits

0xcd1b,	// (0x0001782a) list_single_2graphic_im_pane_g4

0xa68e,	// (0x0001519d) popup_side_volume_key_window_cp

0xaf8d,	// (0x00015a9c) main_idle_act2_pane_t1

0x5776,	// (0x00010285) toolbar_button_pane_g10

0x71cc,	// (0x00011cdb) popup_toolbar_window_cp1

0xb946,	// (0x00016455) clock_nsta_pane_cp_t1

0xb946,	// (0x00016455) clock_nsta_pane_cp_t2

0x0001,

0xfad6,	// (0x0001a5e5) clock_nsta_pane_cp_t

0x5340,	// (0x0000fe4f) navi_navi_volume_pane_cp2_ParamLimits

0x534f,	// (0x0000fe5e) popup_side_volume_key_window_g1_ParamLimits

0x535b,	// (0x0000fe6a) popup_side_volume_key_window_g2_ParamLimits

0x536a,	// (0x0000fe79) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0001a25b) popup_side_volume_key_window_g_ParamLimits

0x5bff,	// (0x0001070e) fep_hwr_aid_pane

0x5ca8,	// (0x000107b7) bg_fep_hwr_top_pane_g4_ParamLimits

0xbf34,	// (0x00016a43) fep_hwr_top_pane_g1_ParamLimits

0xbf46,	// (0x00016a55) fep_hwr_top_pane_g2_ParamLimits

0x5cc8,	// (0x000107d7) fep_hwr_top_pane_g3_ParamLimits

0xfb2b,	// (0x0001a63a) fep_hwr_top_pane_g_ParamLimits

0x5cdd,	// (0x000107ec) fep_hwr_top_text_pane_ParamLimits

0xa443,	// (0x00014f52) aid_touch_tab_arrow_arrow_2

0xa44c,	// (0x00014f5b) aid_touch_tab_arrow_left_2

0x5c13,	// (0x00010722) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5c4a,	// (0x00010759) fep_hwr_prediction_pane

0xc09c,	// (0x00016bab) fep_vkb_prediction_pane

0xc1b0,	// (0x00016cbf) fep_vkb_side_pane_g3_ParamLimits

0xc1b0,	// (0x00016cbf) fep_vkb_side_pane_g3

0x5e6c,	// (0x0001097b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5edd,	// (0x000109ec) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5eea,	// (0x000109f9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbda,	// (0x0001a6e9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6019,	// (0x00010b28) fep_hwr_prediction_pane_g1

0x6023,	// (0x00010b32) fep_hwr_prediction_pane_g2

0x602b,	// (0x00010b3a) fep_hwr_prediction_pane_g3

0x6033,	// (0x00010b42) fep_hwr_prediction_pane_g4

0x0003,

0xfce4,	// (0x0001a7f3) fep_hwr_prediction_pane_g

0xd33c,	// (0x00017e4b) fep_vkb_prediction_pane_g1

0xd346,	// (0x00017e55) fep_vkb_prediction_pane_g2

0xd34e,	// (0x00017e5d) fep_vkb_prediction_pane_g3

0xd356,	// (0x00017e65) fep_vkb_prediction_pane_g4

0x0003,

0xfced,	// (0x0001a7fc) fep_vkb_prediction_pane_g

0x5a7f,	// (0x0001058e) slider_set_pane_g3

0x5a93,	// (0x000105a2) slider_set_pane_g4

0x5aab,	// (0x000105ba) slider_set_pane_g5

0x5a7f,	// (0x0001058e) slider_set_pane_g6

0x5ac1,	// (0x000105d0) slider_set_pane_g7

0xab64,	// (0x00015673) slider_form_pane_g3

0xab6d,	// (0x0001567c) slider_form_pane_g4

0xab75,	// (0x00015684) slider_form_pane_g5

0xab64,	// (0x00015673) slider_form_pane_g6

0xab7d,	// (0x0001568c) slider_form_pane_g7

0xb287,	// (0x00015d96) slider_set_pane_vc_g3

0xb290,	// (0x00015d9f) slider_set_pane_vc_g4

0xb299,	// (0x00015da8) slider_set_pane_vc_g5

0xb287,	// (0x00015d96) slider_set_pane_vc_g6

0xb2a2,	// (0x00015db1) slider_set_pane_vc_g7

0xb287,	// (0x00015d96) slider_form_pane_vc_g1

0xb290,	// (0x00015d9f) slider_form_pane_vc_g2

0xb299,	// (0x00015da8) slider_form_pane_vc_g3

0xb287,	// (0x00015d96) slider_form_pane_vc_g4

0xb66b,	// (0x0001617a) slider_form_pane_vc_g5

0x0004,

0xfabc,	// (0x0001a5cb) slider_form_pane_vc_g

0x68ce,	// (0x000113dd) main_idle_act3_pane

0xd35e,	// (0x00017e6d) ai3_links_pane

0xd367,	// (0x00017e76) popup_ai3_data_window_ParamLimits

0xd367,	// (0x00017e76) popup_ai3_data_window

0x68ce,	// (0x000113dd) grid_ai3_links_pane

0xd385,	// (0x00017e94) cell_ai3_links_pane_ParamLimits

0xd385,	// (0x00017e94) cell_ai3_links_pane

0xd39f,	// (0x00017eae) bg_popup_sub_pane_cp11

0xd3ac,	// (0x00017ebb) cell_ai3_links_pane_g1

0x68ce,	// (0x000113dd) bg_popup_sub_pane_cp12

0xd3d1,	// (0x00017ee0) heading_ai3_data_pane

0xd3d9,	// (0x00017ee8) list_ai3_gene_pane

0xd3e5,	// (0x00017ef4) popup_ai3_data_window_g1

0xd3ed,	// (0x00017efc) heading_ai3_data_pane_g1

0xd3f5,	// (0x00017f04) heading_ai3_data_pane_t1

0xd403,	// (0x00017f12) list_double_ai3_gene_pane_ParamLimits

0xd403,	// (0x00017f12) list_double_ai3_gene_pane

0xd410,	// (0x00017f1f) list_single_ai3_gene_pane_ParamLimits

0xd410,	// (0x00017f1f) list_single_ai3_gene_pane

0xbe89,	// (0x00016998) list_highlight_pane_cp7_ParamLimits

0xbe89,	// (0x00016998) list_highlight_pane_cp7

0xd41d,	// (0x00017f2c) list_single_a13_gene_pane_t1_ParamLimits

0xd41d,	// (0x00017f2c) list_single_a13_gene_pane_t1

0xd434,	// (0x00017f43) list_single_ai3_gene_pane_g1

0xd43d,	// (0x00017f4c) list_single_ai3_gene_pane_g2

0x0001,

0xfcf6,	// (0x0001a805) list_single_ai3_gene_pane_g

0xd445,	// (0x00017f54) list_double_ai3_gene_pane_g1_ParamLimits

0xd445,	// (0x00017f54) list_double_ai3_gene_pane_g1

0xd451,	// (0x00017f60) list_double_ai3_gene_pane_t1_ParamLimits

0xd451,	// (0x00017f60) list_double_ai3_gene_pane_t1

0xd46d,	// (0x00017f7c) list_double_ai3_gene_pane_t2_ParamLimits

0xd46d,	// (0x00017f7c) list_double_ai3_gene_pane_t2

0xd482,	// (0x00017f91) list_double_ai3_gene_pane_t3_ParamLimits

0xd482,	// (0x00017f91) list_double_ai3_gene_pane_t3

0x0002,

0xfcfb,	// (0x0001a80a) list_double_ai3_gene_pane_t_ParamLimits

0xfcfb,	// (0x0001a80a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd237,	// (0x00017d46) aid_size_min_col_2

0xd241,	// (0x00017d50) aid_size_min_msg_ParamLimits

0xd241,	// (0x00017d50) aid_size_min_msg

0xc2bc,	// (0x00016dcb) fep_vkb_top_text_pane_g2_ParamLimits

0xc2bc,	// (0x00016dcb) fep_vkb_top_text_pane_g2

0x0001,

0xfb5b,	// (0x0001a66a) fep_vkb_top_text_pane_g_ParamLimits

0xfb5b,	// (0x0001a66a) fep_vkb_top_text_pane_g

0x68ce,	// (0x000113dd) main_hc_apps_shell_pane

0xd49f,	// (0x00017fae) grid_hc_apps_pane_ParamLimits

0xd49f,	// (0x00017fae) grid_hc_apps_pane

0xd4ae,	// (0x00017fbd) list_hc_apps_pane

0xd4b6,	// (0x00017fc5) scroll_pane_cp37_ParamLimits

0xd4b6,	// (0x00017fc5) scroll_pane_cp37

0xd4c2,	// (0x00017fd1) cell_hc_apps_pane_ParamLimits

0xd4c2,	// (0x00017fd1) cell_hc_apps_pane

0xd57a,	// (0x00018089) cell_hc_apps_pane_g1_ParamLimits

0xd57a,	// (0x00018089) cell_hc_apps_pane_g1

0xd5ab,	// (0x000180ba) cell_hc_apps_pane_g2_ParamLimits

0xd5ab,	// (0x000180ba) cell_hc_apps_pane_g2

0xd5c7,	// (0x000180d6) cell_hc_apps_pane_g3_ParamLimits

0xd5c7,	// (0x000180d6) cell_hc_apps_pane_g3

0x0002,

0xfd02,	// (0x0001a811) cell_hc_apps_pane_g_ParamLimits

0xfd02,	// (0x0001a811) cell_hc_apps_pane_g

0xd5e9,	// (0x000180f8) cell_hc_apps_pane_t1_ParamLimits

0xd5e9,	// (0x000180f8) cell_hc_apps_pane_t1

0x6c66,	// (0x00011775) grid_highlight_pane_cp10_ParamLimits

0x6c66,	// (0x00011775) grid_highlight_pane_cp10

0xd629,	// (0x00018138) list_single_hc_apps_pane_ParamLimits

0xd629,	// (0x00018138) list_single_hc_apps_pane

0xd668,	// (0x00018177) list_single_hc_apps_pane_g1

0xd681,	// (0x00018190) list_single_hc_apps_pane_g2

0x0001,

0xfd09,	// (0x0001a818) list_single_hc_apps_pane_g

0xd69a,	// (0x000181a9) list_single_hc_apps_pane_g2_copy1

0xd6b6,	// (0x000181c5) list_single_hc_apps_pane_t1

0x69c2,	// (0x000114d1) bg_set_opt_pane_cp_ParamLimits

0x5076,	// (0x0000fb85) setting_slider_pane_t1_ParamLimits

0x508c,	// (0x0000fb9b) setting_slider_pane_t2_ParamLimits

0x50a6,	// (0x0000fbb5) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001a0b1) setting_slider_pane_t_ParamLimits

0x50be,	// (0x0000fbcd) slider_set_pane_ParamLimits

0x55e6,	// (0x000100f5) control_pane_g5_ParamLimits

0x55e6,	// (0x000100f5) control_pane_g5

0xa985,	// (0x00015494) slider_set_pane_g1_ParamLimits

0x5a73,	// (0x00010582) slider_set_pane_g2_ParamLimits

0x5a7f,	// (0x0001058e) slider_set_pane_g3_ParamLimits

0x5a93,	// (0x000105a2) slider_set_pane_g4_ParamLimits

0x5aab,	// (0x000105ba) slider_set_pane_g5_ParamLimits

0x5a7f,	// (0x0001058e) slider_set_pane_g6_ParamLimits

0x5ac1,	// (0x000105d0) slider_set_pane_g7_ParamLimits

0xf998,	// (0x0001a4a7) slider_set_pane_g_ParamLimits

0x84c6,	// (0x00012fd5) navi_icon_text_pane_ParamLimits

0x9029,	// (0x00013b38) aid_fill_nsta_2_ParamLimits

0x906a,	// (0x00013b79) aid_touch_tab_arrow_left_ParamLimits

0x9079,	// (0x00013b88) aid_touch_tab_arrow_right_ParamLimits

0x90e6,	// (0x00013bf5) clock_nsta_pane_ParamLimits

0xa41f,	// (0x00014f2e) navi_icon_pane_g1_ParamLimits

0xa42e,	// (0x00014f3d) navi_text_pane_t1_ParamLimits

0xba63,	// (0x00016572) navi_icon_text_pane_g1_ParamLimits

0xba72,	// (0x00016581) navi_icon_text_pane_t1_ParamLimits

0xd668,	// (0x00018177) list_single_hc_apps_pane_g1_ParamLimits

0xd681,	// (0x00018190) list_single_hc_apps_pane_g2_ParamLimits

0xfd09,	// (0x0001a818) list_single_hc_apps_pane_g_ParamLimits

0xd69a,	// (0x000181a9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd6b6,	// (0x000181c5) list_single_hc_apps_pane_t1_ParamLimits

0x4f80,	// (0x0000fa8f) popup_toolbar2_fixed_window_ParamLimits

0x4f80,	// (0x0000fa8f) popup_toolbar2_fixed_window

0x8f2d,	// (0x00013a3c) popup_toolbar2_float_window

0x68ce,	// (0x000113dd) bg_popup_sub_pane_cp27

0xd6e4,	// (0x000181f3) grid_toolbar2_float_pane

0x68ce,	// (0x000113dd) bg_popup_sub_pane_cp26

0xd6e4,	// (0x000181f3) grid_toolbar2_fixed_pane

0xd6ec,	// (0x000181fb) cell_toolbar2_fixed_pane_ParamLimits

0xd6ec,	// (0x000181fb) cell_toolbar2_fixed_pane

0xd6fc,	// (0x0001820b) cell_toolbar2_fixed_pane_g1

0xd705,	// (0x00018214) toolbar2_fixed_button_pane

0x954a,	// (0x00014059) toolbar2_fixed_button_pane_g1

0x955a,	// (0x00014069) toolbar2_fixed_button_pane_g2

0x9552,	// (0x00014061) toolbar2_fixed_button_pane_g3

0x956a,	// (0x00014079) toolbar2_fixed_button_pane_g4

0x9562,	// (0x00014071) toolbar2_fixed_button_pane_g5

0x9572,	// (0x00014081) toolbar2_fixed_button_pane_g6

0x957a,	// (0x00014089) toolbar2_fixed_button_pane_g7

0x958a,	// (0x00014099) toolbar2_fixed_button_pane_g8

0x9582,	// (0x00014091) toolbar2_fixed_button_pane_g9

0x0008,

0xf89a,	// (0x0001a3a9) toolbar2_fixed_button_pane_g

0xd70d,	// (0x0001821c) cell_toolbar2_float_pane_ParamLimits

0xd70d,	// (0x0001821c) cell_toolbar2_float_pane

0xd71e,	// (0x0001822d) cell_toolbar2_float_pane_g1

0xd705,	// (0x00018214) toolbar2_fixed_button_pane_cp

0xc00a,	// (0x00016b19) fep_vkb_accented_list_pane_ParamLimits

0xc00a,	// (0x00016b19) fep_vkb_accented_list_pane

0x5e4c,	// (0x0001095b) bg_popup_fep_shadow_pane_g9

0x864a,	// (0x00013159) bg_popup_fep_shadow_pane_cp3

0x7ac9,	// (0x000125d8) list_accented_list_pane

0xd727,	// (0x00018236) list_single_accented_list_pane_ParamLimits

0xd727,	// (0x00018236) list_single_accented_list_pane

0x864a,	// (0x00013159) list_highlight_pane_cp10

0xd738,	// (0x00018247) list_single_accented_list_pane_t1

0x8e73,	// (0x00013982) popup_slider_window_ParamLimits

0x8e73,	// (0x00013982) popup_slider_window

0xd22e,	// (0x00017d3d) aid_indentation_list_msg

0xd804,	// (0x00018313) bg_popup_window_pane_cp19

0xd872,	// (0x00018381) popup_slider_window_g1

0xd88e,	// (0x0001839d) popup_slider_window_g2

0xd8aa,	// (0x000183b9) popup_slider_window_g3

0x0005,

0xfd0e,	// (0x0001a81d) popup_slider_window_g

0xd906,	// (0x00018415) popup_slider_window_t1

0xd97a,	// (0x00018489) small_volume_slider_vertical_pane

0xbec4,	// (0x000169d3) small_volume_slider_vertical_pane_g1

0xbec4,	// (0x000169d3) small_volume_slider_vertical_pane_g2

0xd996,	// (0x000184a5) small_volume_slider_vertical_pane_g3

0x0002,

0xfd20,	// (0x0001a82f) small_volume_slider_vertical_pane_g

0x4d2e,	// (0x0000f83d) area_side_right_pane_ParamLimits

0x4d2e,	// (0x0000f83d) area_side_right_pane

0x603b,	// (0x00010b4a) aid_size_side_button_ParamLimits

0x603b,	// (0x00010b4a) aid_size_side_button

0x604f,	// (0x00010b5e) grid_sctrl_middle_pane_ParamLimits

0x604f,	// (0x00010b5e) grid_sctrl_middle_pane

0x606f,	// (0x00010b7e) sctrl_sk_bottom_pane

0x6080,	// (0x00010b8f) sctrl_sk_top_pane

0x6092,	// (0x00010ba1) aid_touch_sctrl_top

0x609f,	// (0x00010bae) bg_sctrl_sk_pane_ParamLimits

0x609f,	// (0x00010bae) bg_sctrl_sk_pane

0x60ad,	// (0x00010bbc) sctrl_sk_top_pane_g1

0x60ba,	// (0x00010bc9) sctrl_sk_top_pane_t1

0x6092,	// (0x00010ba1) aid_touch_sctrl_bottom

0x609f,	// (0x00010bae) bg_sctrl_sk_pane_cp_ParamLimits

0x609f,	// (0x00010bae) bg_sctrl_sk_pane_cp

0x60d5,	// (0x00010be4) sctrl_sk_bottom_pane_g1

0x60ba,	// (0x00010bc9) sctrl_sk_bottom_pane_t1

0x60de,	// (0x00010bed) cell_sctrl_middle_pane_ParamLimits

0x60de,	// (0x00010bed) cell_sctrl_middle_pane

0x60fb,	// (0x00010c0a) aid_touch_sctrl_middle_ParamLimits

0x60fb,	// (0x00010c0a) aid_touch_sctrl_middle

0x610d,	// (0x00010c1c) bg_sctrl_middle_pane_ParamLimits

0x610d,	// (0x00010c1c) bg_sctrl_middle_pane

0x5e6c,	// (0x0001097b) cell_sctrl_middle_pane_g1_ParamLimits

0x5e6c,	// (0x0001097b) cell_sctrl_middle_pane_g1

0x611b,	// (0x00010c2a) cell_sctrl_middle_pane_g2_ParamLimits

0x611b,	// (0x00010c2a) cell_sctrl_middle_pane_g2

0x0001,

0xfd2c,	// (0x0001a83b) cell_sctrl_middle_pane_g_ParamLimits

0xfd2c,	// (0x0001a83b) cell_sctrl_middle_pane_g

0x954a,	// (0x00014059) bg_sctrl_middle_pane_g1

0x9552,	// (0x00014061) bg_sctrl_middle_pane_g2

0x955a,	// (0x00014069) bg_sctrl_middle_pane_g3

0x9562,	// (0x00014071) bg_sctrl_middle_pane_g4

0x956a,	// (0x00014079) bg_sctrl_middle_pane_g5

0x9572,	// (0x00014081) bg_sctrl_middle_pane_g6

0x957a,	// (0x00014089) bg_sctrl_middle_pane_g7

0x9582,	// (0x00014091) bg_sctrl_middle_pane_g8

0x0007,

0xfd31,	// (0x0001a840) bg_sctrl_middle_pane_g

0x958a,	// (0x00014099) bg_sctrl_middle_pane_g8_copy1

0x954a,	// (0x00014059) bg_sctrl_sk_pane_g1

0x955a,	// (0x00014069) bg_sctrl_sk_pane_g2

0x9552,	// (0x00014061) bg_sctrl_sk_pane_g3

0x0008,

0xf89a,	// (0x0001a3a9) bg_sctrl_sk_pane_g

0x7192,	// (0x00011ca1) aid_size_touch_scroll_bar

0x956a,	// (0x00014079) bg_sctrl_sk_pane_g4

0x9562,	// (0x00014071) bg_sctrl_sk_pane_g5

0x9572,	// (0x00014081) bg_sctrl_sk_pane_g6

0x957a,	// (0x00014089) bg_sctrl_sk_pane_g7

0x958a,	// (0x00014099) bg_sctrl_sk_pane_g8

0x9582,	// (0x00014091) bg_sctrl_sk_pane_g9

0x8a8a,	// (0x00013599) popup_fep_china_hwr2_fs_candidate_window

0x8a94,	// (0x000135a3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8a94,	// (0x000135a3) popup_fep_china_hwr2_fs_control_window

0x5e6c,	// (0x0001097b) sctrl_sk_top_pane_g2

0x0001,

0xfd27,	// (0x0001a836) sctrl_sk_top_pane_g

0xd99f,	// (0x000184ae) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd99f,	// (0x000184ae) aid_fep_china_hwr2_fs_cell

0xd9b2,	// (0x000184c1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9b2,	// (0x000184c1) bg_popup_fep_shadow_pane_cp4

0xd9cb,	// (0x000184da) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9cb,	// (0x000184da) bg_popup_fep_shadow_pane_cp5

0xd9dd,	// (0x000184ec) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9dd,	// (0x000184ec) popup_fep_china_hwr2_fs_control_bar_grid

0xd9ed,	// (0x000184fc) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9f5,	// (0x00018504) aid_fep_china_hwr2_fs_candi_cell

0x68ce,	// (0x000113dd) bg_popup_fep_shadow_pane_cp6

0xd9ff,	// (0x0001850e) popup_fep_china_hwr2_fs_candidate_grid

0xda09,	// (0x00018518) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda09,	// (0x00018518) cell_fep_china_hwr2_fs_funtion_grid

0xbec4,	// (0x000169d3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda21,	// (0x00018530) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda21,	// (0x00018530) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda2f,	// (0x0001853e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda2f,	// (0x0001853e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd42,	// (0x0001a851) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd42,	// (0x0001a851) cell_fep_china_hwr2_fs_funtion_grid_g

0xda45,	// (0x00018554) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda45,	// (0x00018554) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda5a,	// (0x00018569) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda5a,	// (0x00018569) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd47,	// (0x0001a856) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd47,	// (0x0001a856) cell_fep_china_hwr2_fs_funtion_grid_t

0xda76,	// (0x00018585) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda7e,	// (0x0001858d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda86,	// (0x00018595) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd4c,	// (0x0001a85b) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda8e,	// (0x0001859d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda8e,	// (0x0001859d) cell_fep_china_hwr2_fs_candidate_grid

0xdaad,	// (0x000185bc) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdab5,	// (0x000185c4) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbec4,	// (0x000169d3) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbec4,	// (0x000169d3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb60,	// (0x0001a66f) cell_fep_china_hwr2_fs_candidate_grid_g

0xdabd,	// (0x000185cc) cell_fep_china_hwr2_fs_candidate_grid_t1

0x90f9,	// (0x00013c08) clock_nsta_pane_cp_24_ParamLimits

0x90f9,	// (0x00013c08) clock_nsta_pane_cp_24

0x9179,	// (0x00013c88) indicator_nsta_pane_cp_24_ParamLimits

0x9179,	// (0x00013c88) indicator_nsta_pane_cp_24

0xa29b,	// (0x00014daa) heading_pane_g1

0x0001,

0xf8ff,	// (0x0001a40e) heading_pane_g

0xadd4,	// (0x000158e3) grid_sct_catagory_button_pane

0xae06,	// (0x00015915) scroll_pane_cp5_ParamLimits

0xbab7,	// (0x000165c6) button_value_adjust_pane_cp5_ParamLimits

0xbab7,	// (0x000165c6) button_value_adjust_pane_cp5

0xbbbd,	// (0x000166cc) form2_midp_time_pane_ParamLimits

0xdacb,	// (0x000185da) cell_sct_catagory_button_pane_ParamLimits

0xdacb,	// (0x000185da) cell_sct_catagory_button_pane

0xbe89,	// (0x00016998) bg_button_pane_cp01_ParamLimits

0xbe89,	// (0x00016998) bg_button_pane_cp01

0xbec4,	// (0x000169d3) cell_sct_catagory_button_pane_g1

0x8eb4,	// (0x000139c3) popup_tb_extension_window

0xdadd,	// (0x000185ec) aid_size_cell_ext_ParamLimits

0xdadd,	// (0x000185ec) aid_size_cell_ext

0x6c66,	// (0x00011775) bg_tb_trans_pane_cp1_ParamLimits

0x6c66,	// (0x00011775) bg_tb_trans_pane_cp1

0xdafd,	// (0x0001860c) grid_tb_ext_pane_ParamLimits

0xdafd,	// (0x0001860c) grid_tb_ext_pane

0xdb2d,	// (0x0001863c) cell_tb_ext_pane_ParamLimits

0xdb2d,	// (0x0001863c) cell_tb_ext_pane

0xdb44,	// (0x00018653) cell_tb_ext_pane_g1_ParamLimits

0xdb44,	// (0x00018653) cell_tb_ext_pane_g1

0xdb61,	// (0x00018670) cell_tb_ext_pane_t1

0x6c66,	// (0x00011775) list_highlight_pane_cp11_ParamLimits

0x6c66,	// (0x00011775) list_highlight_pane_cp11

0x4f9f,	// (0x0000faae) popup_uni_indicator_window_ParamLimits

0x4f9f,	// (0x0000faae) popup_uni_indicator_window

0x77fe,	// (0x0001230d) bg_popup_sub_pane_cp14

0xdb7c,	// (0x0001868b) list_uniindi_pane

0xdb88,	// (0x00018697) uniindi_top_pane

0x6c66,	// (0x00011775) bg_uniindi_top_pane

0xdba9,	// (0x000186b8) uniindi_top_pane_g1

0xdbbf,	// (0x000186ce) uniindi_top_pane_g2

0x0003,

0xfd53,	// (0x0001a862) uniindi_top_pane_g

0xdbe9,	// (0x000186f8) uniindi_top_pane_t1

0xdc15,	// (0x00018724) list_single_uniindi_pane_ParamLimits

0xdc15,	// (0x00018724) list_single_uniindi_pane

0xbec4,	// (0x000169d3) bg_uniindi_top_pane_g1

0xdc27,	// (0x00018736) list_single_uniindi_pane_g1

0xdc3a,	// (0x00018749) list_single_uniindi_pane_t1

0x4e0b,	// (0x0000f91a) control_bg_pane

0xdc5f,	// (0x0001876e) bg_sctrl_sk_pane_cp1

0xdc68,	// (0x00018777) bg_sctrl_sk_pane_cp2

0xdc71,	// (0x00018780) control_bg_pane_g1

0xdc7a,	// (0x00018789) control_bg_pane_g2

0x0001,

0xfd5c,	// (0x0001a86b) control_bg_pane_g

0xb90b,	// (0x0001641a) cell_indicator_nsta_pane_g1_ParamLimits

0xb919,	// (0x00016428) cell_indicator_nsta_pane_g2_ParamLimits

0xfad1,	// (0x0001a5e0) cell_indicator_nsta_pane_g_ParamLimits

0xbc4d,	// (0x0001675c) form2_midp_time_pane_t1_ParamLimits

0x6fd4,	// (0x00011ae3) main_idle_act4_pane_ParamLimits

0x6fd4,	// (0x00011ae3) main_idle_act4_pane

0x8eb4,	// (0x000139c3) popup_tb_extension_window_ParamLimits

0xdb1f,	// (0x0001862e) tb_ext_find_pane_ParamLimits

0xdb1f,	// (0x0001862e) tb_ext_find_pane

0xdc83,	// (0x00018792) ai_gene_pane_1_cp1

0x8793,	// (0x000132a2) ai_gene_pane_2_cp1

0xdc8b,	// (0x0001879a) list_single_idle_plugin_calendar_pane

0xdc94,	// (0x000187a3) list_single_idle_plugin_notification_pane

0xdc9d,	// (0x000187ac) list_single_idle_plugin_player_pane

0xdca6,	// (0x000187b5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdca6,	// (0x000187b5) list_single_idle_plugin_shortcut_pane

0xdcc8,	// (0x000187d7) main_idle_act4_pane_t1

0xdcda,	// (0x000187e9) main_idle_act4_pane_t2

0x0001,

0xfd61,	// (0x0001a870) main_idle_act4_pane_t

0xdcec,	// (0x000187fb) middle_sk_idle_act4_pane_ParamLimits

0xdcec,	// (0x000187fb) middle_sk_idle_act4_pane

0xdd02,	// (0x00018811) popup_clock_digital_analogue_window_cp2

0xdd1c,	// (0x0001882b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd1c,	// (0x0001882b) shortcut_wheel_idle_act4_pane

0xbec4,	// (0x000169d3) shortcut_wheel_idle_act4_pane_g1

0xbec4,	// (0x000169d3) shortcut_wheel_idle_act4_pane_g2

0xbec4,	// (0x000169d3) shortcut_wheel_idle_act4_pane_g3

0xbec4,	// (0x000169d3) shortcut_wheel_idle_act4_pane_g4

0xbec4,	// (0x000169d3) shortcut_wheel_idle_act4_pane_g5

0xdd30,	// (0x0001883f) shortcut_wheel_idle_act4_pane_g6

0xdd38,	// (0x00018847) shortcut_wheel_idle_act4_pane_g7

0xdd40,	// (0x0001884f) shortcut_wheel_idle_act4_pane_g8

0xdd48,	// (0x00018857) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd66,	// (0x0001a875) shortcut_wheel_idle_act4_pane_g

0xc14e,	// (0x00016c5d) middle_sk_idle_act4_pane_g1_ParamLimits

0xc14e,	// (0x00016c5d) middle_sk_idle_act4_pane_g1

0xddac,	// (0x000188bb) middle_sk_idle_act4_pane_g2_ParamLimits

0xddac,	// (0x000188bb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd89,	// (0x0001a898) middle_sk_idle_act4_pane_g_ParamLimits

0xfd89,	// (0x0001a898) middle_sk_idle_act4_pane_g

0xddb8,	// (0x000188c7) middle_sk_idle_act4_pane_t1_ParamLimits

0xddb8,	// (0x000188c7) middle_sk_idle_act4_pane_t1

0xddd5,	// (0x000188e4) grid_ai_shortcut_pane_ParamLimits

0xddd5,	// (0x000188e4) grid_ai_shortcut_pane

0xddee,	// (0x000188fd) list_highlight_pane_cp16_ParamLimits

0xddee,	// (0x000188fd) list_highlight_pane_cp16

0xddfb,	// (0x0001890a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddfb,	// (0x0001890a) list_single_idle_plugin_shortcut_pane_g1

0xde07,	// (0x00018916) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde07,	// (0x00018916) list_single_idle_plugin_shortcut_pane_g2

0xde21,	// (0x00018930) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde21,	// (0x00018930) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8e,	// (0x0001a89d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8e,	// (0x0001a89d) list_single_idle_plugin_shortcut_pane_g

0xde34,	// (0x00018943) cell_ai_shortcut_pane_ParamLimits

0xde34,	// (0x00018943) cell_ai_shortcut_pane

0xde57,	// (0x00018966) cell_ai_shortcut_pane_g1_ParamLimits

0xde57,	// (0x00018966) cell_ai_shortcut_pane_g1

0xdc83,	// (0x00018792) ai_gene_pane_1_cp2

0xde79,	// (0x00018988) ai_gene_pane_2_cp2

0xde81,	// (0x00018990) list_highlight_pane_cp15

0xde8a,	// (0x00018999) list_single_idle_plugin_calendar_pane_g1

0xde81,	// (0x00018990) list_highlight_pane_cp17

0xde92,	// (0x000189a1) list_single_idle_plugin_calendar_pane_g1_copy1

0xde9a,	// (0x000189a9) list_single_idle_plugin_player_pane_g1

0xb03b,	// (0x00015b4a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd95,	// (0x0001a8a4) list_single_idle_plugin_player_pane_g

0xdea2,	// (0x000189b1) list_single_idle_plugin_player_pane_t1

0xdeb0,	// (0x000189bf) list_single_idle_plugin_player_pane_t2

0xdebe,	// (0x000189cd) list_single_idle_plugin_player_pane_t3

0xdecc,	// (0x000189db) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9a,	// (0x0001a8a9) list_single_idle_plugin_player_pane_t

0xdeda,	// (0x000189e9) wait_bar_pane_cp15

0xdee2,	// (0x000189f1) grid_ai_notification_pane

0xb03b,	// (0x00015b4a) list_single_idle_plugin_notification_pane_g1

0xdeeb,	// (0x000189fa) cell_ai_notification_pane_ParamLimits

0xdeeb,	// (0x000189fa) cell_ai_notification_pane

0xdef8,	// (0x00018a07) cell_ai_notification_pane_g1

0xdf00,	// (0x00018a0f) cell_ai_notification_pane_t1

0xdf0e,	// (0x00018a1d) tb_ext_find_button_pane

0xdf16,	// (0x00018a25) tb_ext_find_pane_g1

0xdf1e,	// (0x00018a2d) tb_ext_find_pane_t1

0x7fd0,	// (0x00012adf) tb_ext_find_button_pane_g1

0xdf2c,	// (0x00018a3b) tb_ext_find_button_pane_g2

0x0001,

0xfda3,	// (0x0001a8b2) tb_ext_find_button_pane_g

0xdcc8,	// (0x000187d7) main_idle_act4_pane_t1_ParamLimits

0xdcda,	// (0x000187e9) main_idle_act4_pane_t2_ParamLimits

0xfd61,	// (0x0001a870) main_idle_act4_pane_t_ParamLimits

0xdd02,	// (0x00018811) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd10,	// (0x0001881f) sat_plugin_idle_act4_pane_ParamLimits

0xdd10,	// (0x0001881f) sat_plugin_idle_act4_pane

0xdf35,	// (0x00018a44) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf35,	// (0x00018a44) sat_plugin_idle_act4_pane_t1

0xdf48,	// (0x00018a57) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf48,	// (0x00018a57) sat_plugin_idle_act4_pane_t2

0xdf5b,	// (0x00018a6a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf5b,	// (0x00018a6a) sat_plugin_idle_act4_pane_t3

0xdf6e,	// (0x00018a7d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf6e,	// (0x00018a7d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda8,	// (0x0001a8b7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda8,	// (0x0001a8b7) sat_plugin_idle_act4_pane_t

0x4ed0,	// (0x0000f9df) popup_battery_window_ParamLimits

0x4ed0,	// (0x0000f9df) popup_battery_window

0x6c66,	// (0x00011775) bg_popup_sub_pane_cp25_ParamLimits

0x6c66,	// (0x00011775) bg_popup_sub_pane_cp25

0xdf81,	// (0x00018a90) popup_battery_window_g1_ParamLimits

0xdf81,	// (0x00018a90) popup_battery_window_g1

0xdf8d,	// (0x00018a9c) popup_battery_window_t1_ParamLimits

0xdf8d,	// (0x00018a9c) popup_battery_window_t1

0xdf9f,	// (0x00018aae) popup_battery_window_t2_ParamLimits

0xdf9f,	// (0x00018aae) popup_battery_window_t2

0x0001,

0xfdb1,	// (0x0001a8c0) popup_battery_window_t_ParamLimits

0xfdb1,	// (0x0001a8c0) popup_battery_window_t

0x865e,	// (0x0001316d) midp_canvas_pane_ParamLimits

0x86d5,	// (0x000131e4) midp_keypad_pane_ParamLimits

0x86d5,	// (0x000131e4) midp_keypad_pane

0x89d8,	// (0x000134e7) main_midp_pane_ParamLimits

0xb964,	// (0x00016473) signal_pane_g2_cp_ParamLimits

0xdfbc,	// (0x00018acb) aid_size_cell_midp_keypad_ParamLimits

0xdfbc,	// (0x00018acb) aid_size_cell_midp_keypad

0xdfd6,	// (0x00018ae5) midp_keyp_game_grid_pane_ParamLimits

0xdfd6,	// (0x00018ae5) midp_keyp_game_grid_pane

0xdff6,	// (0x00018b05) midp_keyp_rocker_pane_ParamLimits

0xdff6,	// (0x00018b05) midp_keyp_rocker_pane

0xe025,	// (0x00018b34) midp_keyp_sk_left_pane_ParamLimits

0xe025,	// (0x00018b34) midp_keyp_sk_left_pane

0xe07f,	// (0x00018b8e) midp_keyp_sk_right_pane_ParamLimits

0xe07f,	// (0x00018b8e) midp_keyp_sk_right_pane

0x68ce,	// (0x000113dd) bg_button_pane_cp03

0xe0d9,	// (0x00018be8) midp_keyp_sk_left_pane_g1

0x68ce,	// (0x000113dd) bg_button_pane_cp04

0xe0d9,	// (0x00018be8) midp_keyp_sk_right_pane_g1

0xbec4,	// (0x000169d3) midp_keyp_rocker_pane_g1

0xe0e2,	// (0x00018bf1) keyp_game_cell_pane_ParamLimits

0xe0e2,	// (0x00018bf1) keyp_game_cell_pane

0x68ce,	// (0x000113dd) bg_button_pane_cp02

0xe0f5,	// (0x00018c04) keyp_game_cell_pane_g1

0x4f1a,	// (0x0000fa29) popup_fep_vkb2_window_ParamLimits

0x4f1a,	// (0x0000fa29) popup_fep_vkb2_window

0x613d,	// (0x00010c4c) aid_size_cell_vkb2_ParamLimits

0x613d,	// (0x00010c4c) aid_size_cell_vkb2

0x6189,	// (0x00010c98) popup_fep_vkb2_window_g1_ParamLimits

0x6189,	// (0x00010c98) popup_fep_vkb2_window_g1

0x61d1,	// (0x00010ce0) vkb2_area_bottom_pane_ParamLimits

0x61d1,	// (0x00010ce0) vkb2_area_bottom_pane

0x6225,	// (0x00010d34) vkb2_area_keypad_pane_ParamLimits

0x6225,	// (0x00010d34) vkb2_area_keypad_pane

0x626b,	// (0x00010d7a) vkb2_area_top_pane_ParamLimits

0x626b,	// (0x00010d7a) vkb2_area_top_pane

0x62e5,	// (0x00010df4) vkb2_top_entry_pane_ParamLimits

0x62e5,	// (0x00010df4) vkb2_top_entry_pane

0x630f,	// (0x00010e1e) vkb2_top_grid_left_pane_ParamLimits

0x630f,	// (0x00010e1e) vkb2_top_grid_left_pane

0x632d,	// (0x00010e3c) vkb2_top_grid_right_pane_ParamLimits

0x632d,	// (0x00010e3c) vkb2_top_grid_right_pane

0x634b,	// (0x00010e5a) vkb2_cell_keypad_pane_ParamLimits

0x634b,	// (0x00010e5a) vkb2_cell_keypad_pane

0x6401,	// (0x00010f10) vkb2_area_bottom_grid_pane_ParamLimits

0x6401,	// (0x00010f10) vkb2_area_bottom_grid_pane

0x6427,	// (0x00010f36) vkb2_area_bottom_pane_g1_ParamLimits

0x6427,	// (0x00010f36) vkb2_area_bottom_pane_g1

0x644b,	// (0x00010f5a) vkb2_area_bottom_pane_g2_ParamLimits

0x644b,	// (0x00010f5a) vkb2_area_bottom_pane_g2

0x6479,	// (0x00010f88) vkb2_area_bottom_pane_g3_ParamLimits

0x6479,	// (0x00010f88) vkb2_area_bottom_pane_g3

0x0002,

0xfdb6,	// (0x0001a8c5) vkb2_area_bottom_pane_g_ParamLimits

0xfdb6,	// (0x0001a8c5) vkb2_area_bottom_pane_g

0x64da,	// (0x00010fe9) vkb2_top_cell_left_pane_ParamLimits

0x64da,	// (0x00010fe9) vkb2_top_cell_left_pane

0xe106,	// (0x00018c15) vkb2_top_entry_pane_g1_ParamLimits

0xe106,	// (0x00018c15) vkb2_top_entry_pane_g1

0xe114,	// (0x00018c23) vkb2_top_entry_pane_t1_ParamLimits

0xe114,	// (0x00018c23) vkb2_top_entry_pane_t1

0xe12c,	// (0x00018c3b) vkb2_top_entry_pane_t2_ParamLimits

0xe12c,	// (0x00018c3b) vkb2_top_entry_pane_t2

0xe144,	// (0x00018c53) vkb2_top_entry_pane_t3_ParamLimits

0xe144,	// (0x00018c53) vkb2_top_entry_pane_t3

0x0002,

0xfdbd,	// (0x0001a8cc) vkb2_top_entry_pane_t_ParamLimits

0xfdbd,	// (0x0001a8cc) vkb2_top_entry_pane_t

0x6527,	// (0x00011036) vkb2_top_grid_right_pane_g1_ParamLimits

0x6527,	// (0x00011036) vkb2_top_grid_right_pane_g1

0x653d,	// (0x0001104c) vkb2_top_grid_right_pane_g2_ParamLimits

0x653d,	// (0x0001104c) vkb2_top_grid_right_pane_g2

0x6555,	// (0x00011064) vkb2_top_grid_right_pane_g3_ParamLimits

0x6555,	// (0x00011064) vkb2_top_grid_right_pane_g3

0x656d,	// (0x0001107c) vkb2_top_grid_right_pane_g4_ParamLimits

0x656d,	// (0x0001107c) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc4,	// (0x0001a8d3) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc4,	// (0x0001a8d3) vkb2_top_grid_right_pane_g

0x6583,	// (0x00011092) vkb2_top_cell_left_pane_g1

0x659a,	// (0x000110a9) vkb2_cell_keypad_pane_g1_ParamLimits

0x659a,	// (0x000110a9) vkb2_cell_keypad_pane_g1

0xe15a,	// (0x00018c69) vkb2_cell_keypad_pane_t1_ParamLimits

0xe15a,	// (0x00018c69) vkb2_cell_keypad_pane_t1

0x65be,	// (0x000110cd) vkb2_cell_bottom_grid_pane_ParamLimits

0x65be,	// (0x000110cd) vkb2_cell_bottom_grid_pane

0x65f7,	// (0x00011106) vkb2_cell_bottom_grid_pane_g1

0xdd50,	// (0x0001885f) aid_call2_pane_cp02

0xdd58,	// (0x00018867) aid_call_pane_cp02

0xdd60,	// (0x0001886f) clock_digital_number_pane_cp10

0xdd68,	// (0x00018877) clock_digital_number_pane_cp11

0xdd70,	// (0x0001887f) clock_digital_number_pane_cp12

0xdd78,	// (0x00018887) clock_digital_number_pane_cp13

0xdd80,	// (0x0001888f) clock_digital_separator_pane_cp10

0x7fd0,	// (0x00012adf) popup_clock_digital_analogue_window_cp2_g1

0x7fd0,	// (0x00012adf) popup_clock_digital_analogue_window_cp2_g2

0xdd88,	// (0x00018897) popup_clock_digital_analogue_window_cp2_g3

0x7fd0,	// (0x00012adf) popup_clock_digital_analogue_window_cp2_g4

0xdd88,	// (0x00018897) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd79,	// (0x0001a888) popup_clock_digital_analogue_window_cp2_g

0xdd90,	// (0x0001889f) popup_clock_digital_analogue_window_cp2_t1

0xdd9e,	// (0x000188ad) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd84,	// (0x0001a893) popup_clock_digital_analogue_window_cp2_t

0xbec4,	// (0x000169d3) clock_digital_number_pane_cp10_g1

0xbec4,	// (0x000169d3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb60,	// (0x0001a66f) clock_digital_number_pane_cp10_g

0xbec4,	// (0x000169d3) clock_digital_separator_pane_cp10_g1

0xbec4,	// (0x000169d3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb60,	// (0x0001a66f) clock_digital_separator_pane_cp10_g

0xdbcb,	// (0x000186da) uniindi_top_pane_g3

0xdbdc,	// (0x000186eb) uniindi_top_pane_g4

0x63bb,	// (0x00010eca) vkb2_row_keypad_pane_ParamLimits

0x63bb,	// (0x00010eca) vkb2_row_keypad_pane

0x6613,	// (0x00011122) vkb2_cell_t_keypad_pane_ParamLimits

0x6613,	// (0x00011122) vkb2_cell_t_keypad_pane

0x6623,	// (0x00011132) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6623,	// (0x00011132) vkb2_cell_t_keypad_pane_cp08

0x6638,	// (0x00011147) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6638,	// (0x00011147) vkb2_cell_t_keypad_pane_cp09

0x664c,	// (0x0001115b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x664c,	// (0x0001115b) vkb2_cell_t_keypad_pane_cp01

0x665d,	// (0x0001116c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x665d,	// (0x0001116c) vkb2_cell_t_keypad_pane_cp02

0x666e,	// (0x0001117d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x666e,	// (0x0001117d) vkb2_cell_t_keypad_pane_cp03

0x667f,	// (0x0001118e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x667f,	// (0x0001118e) vkb2_cell_t_keypad_pane_cp04

0x6690,	// (0x0001119f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6690,	// (0x0001119f) vkb2_cell_t_keypad_pane_cp05

0x66a1,	// (0x000111b0) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x66a1,	// (0x000111b0) vkb2_cell_t_keypad_pane_cp06

0x66b4,	// (0x000111c3) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x66b4,	// (0x000111c3) vkb2_cell_t_keypad_pane_cp07

0x66c9,	// (0x000111d8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x66c9,	// (0x000111d8) vkb2_cell_t_keypad_pane_cp10

0x5e6c,	// (0x0001097b) vkb2_cell_t_keypad_pane_g1

0xe171,	// (0x00018c80) vkb2_cell_t_keypad_pane_t1

0x4e0b,	// (0x0000f91a) popup_grid_graphic2_window

0xe183,	// (0x00018c92) aid_size_cell_graphic2_ParamLimits

0xe183,	// (0x00018c92) aid_size_cell_graphic2

0xc194,	// (0x00016ca3) bg_popup_window_pane_cp21_ParamLimits

0xc194,	// (0x00016ca3) bg_popup_window_pane_cp21

0xe1af,	// (0x00018cbe) graphic2_pages_pane_ParamLimits

0xe1af,	// (0x00018cbe) graphic2_pages_pane

0xe1f5,	// (0x00018d04) grid_graphic2_control_pane_ParamLimits

0xe1f5,	// (0x00018d04) grid_graphic2_control_pane

0xe223,	// (0x00018d32) grid_graphic2_pane_ParamLimits

0xe223,	// (0x00018d32) grid_graphic2_pane

0xe285,	// (0x00018d94) cell_graphic2_pane

0x68ce,	// (0x000113dd) main_comp_mode_pane

0xd3d9,	// (0x00017ee8) list_ai3_gene_pane_ParamLimits

0xd804,	// (0x00018313) bg_popup_window_pane_cp19_ParamLimits

0xd810,	// (0x0001831f) bg_touch_area_indi_pane_ParamLimits

0xd810,	// (0x0001831f) bg_touch_area_indi_pane

0xd826,	// (0x00018335) bg_touch_area_indi_pane_cp01_ParamLimits

0xd826,	// (0x00018335) bg_touch_area_indi_pane_cp01

0xd83e,	// (0x0001834d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd83e,	// (0x0001834d) bg_touch_area_indi_pane_cp02

0xd858,	// (0x00018367) bg_touch_area_indi_pane_cp03_ParamLimits

0xd858,	// (0x00018367) bg_touch_area_indi_pane_cp03

0xd872,	// (0x00018381) popup_slider_window_g1_ParamLimits

0xd88e,	// (0x0001839d) popup_slider_window_g2_ParamLimits

0xd8aa,	// (0x000183b9) popup_slider_window_g3_ParamLimits

0xfd0e,	// (0x0001a81d) popup_slider_window_g_ParamLimits

0xd906,	// (0x00018415) popup_slider_window_t1_ParamLimits

0xd97a,	// (0x00018489) small_volume_slider_vertical_pane_ParamLimits

0xe285,	// (0x00018d94) cell_graphic2_pane_ParamLimits

0xe2da,	// (0x00018de9) bg_button_pane_cp10_ParamLimits

0xe2da,	// (0x00018de9) bg_button_pane_cp10

0xe2ef,	// (0x00018dfe) bg_button_pane_cp11_ParamLimits

0xe2ef,	// (0x00018dfe) bg_button_pane_cp11

0xe304,	// (0x00018e13) graphic2_pages_pane_g1_ParamLimits

0xe304,	// (0x00018e13) graphic2_pages_pane_g1

0xe31f,	// (0x00018e2e) graphic2_pages_pane_g2_ParamLimits

0xe31f,	// (0x00018e2e) graphic2_pages_pane_g2

0x0001,

0xfdd2,	// (0x0001a8e1) graphic2_pages_pane_g_ParamLimits

0xfdd2,	// (0x0001a8e1) graphic2_pages_pane_g

0xe337,	// (0x00018e46) graphic2_pages_pane_t1_ParamLimits

0xe337,	// (0x00018e46) graphic2_pages_pane_t1

0xe34d,	// (0x00018e5c) cell_graphic2_control_pane_ParamLimits

0xe34d,	// (0x00018e5c) cell_graphic2_control_pane

0xe367,	// (0x00018e76) cell_graphic2_pane_g1_ParamLimits

0xe367,	// (0x00018e76) cell_graphic2_pane_g1

0xe374,	// (0x00018e83) cell_graphic2_pane_g2_ParamLimits

0xe374,	// (0x00018e83) cell_graphic2_pane_g2

0xe381,	// (0x00018e90) cell_graphic2_pane_g3_ParamLimits

0xe381,	// (0x00018e90) cell_graphic2_pane_g3

0xe38e,	// (0x00018e9d) cell_graphic2_pane_g4_ParamLimits

0xe38e,	// (0x00018e9d) cell_graphic2_pane_g4

0xe39b,	// (0x00018eaa) cell_graphic2_pane_g5_ParamLimits

0xe39b,	// (0x00018eaa) cell_graphic2_pane_g5

0x0004,

0xfdd7,	// (0x0001a8e6) cell_graphic2_pane_g_ParamLimits

0xfdd7,	// (0x0001a8e6) cell_graphic2_pane_g

0xe3b6,	// (0x00018ec5) cell_graphic2_pane_t1_ParamLimits

0xe3b6,	// (0x00018ec5) cell_graphic2_pane_t1

0x9666,	// (0x00014175) grid_highlight_pane_cp11_ParamLimits

0x9666,	// (0x00014175) grid_highlight_pane_cp11

0x77fe,	// (0x0001230d) bg_button_pane_cp05

0xe3cc,	// (0x00018edb) cell_graphic2_control_pane_g1

0xbec4,	// (0x000169d3) bg_touch_area_indi_pane_g1

0xe3d9,	// (0x00018ee8) aid_cmod_rocker_key_size

0xe3e3,	// (0x00018ef2) aid_cmode_itu_key_size

0xe3ed,	// (0x00018efc) main_cmode_video_pane

0xe3f7,	// (0x00018f06) main_comp_mode_itu_pane

0xe403,	// (0x00018f12) main_comp_mode_rocker_pane

0xe40f,	// (0x00018f1e) cell_cmode_rocker_pane_ParamLimits

0xe40f,	// (0x00018f1e) cell_cmode_rocker_pane

0xe423,	// (0x00018f32) cell_cmode_itu_pane_ParamLimits

0xe423,	// (0x00018f32) cell_cmode_itu_pane

0x77fe,	// (0x0001230d) bg_button_pane_cp06_ParamLimits

0x77fe,	// (0x0001230d) bg_button_pane_cp06

0xc14e,	// (0x00016c5d) cell_cmode_rocker_pane_g1_ParamLimits

0xc14e,	// (0x00016c5d) cell_cmode_rocker_pane_g1

0xda21,	// (0x00018530) cell_cmode_rocker_pane_g2_ParamLimits

0xda21,	// (0x00018530) cell_cmode_rocker_pane_g2

0x0001,

0xfde2,	// (0x0001a8f1) cell_cmode_rocker_pane_g_ParamLimits

0xfde2,	// (0x0001a8f1) cell_cmode_rocker_pane_g

0x68ce,	// (0x000113dd) bg_button_pane_cp07

0xe43a,	// (0x00018f49) cell_cmode_itu_pane_g1

0xe443,	// (0x00018f52) cell_cmode_itu_pane_t1

0xe451,	// (0x00018f60) cell_cmode_itu_pane_t2

0x0001,

0xfde7,	// (0x0001a8f6) cell_cmode_itu_pane_t

0xdc4f,	// (0x0001875e) aid_touch_ctrl_left

0xdc57,	// (0x00018766) aid_touch_ctrl_right

0x68ce,	// (0x000113dd) compa_mode_pane

0xe45f,	// (0x00018f6e) aid_cmod_rocker_key_size_cp

0xe469,	// (0x00018f78) aid_cmode_itu_key_size_cp

0xe473,	// (0x00018f82) compa_mode_pane_g1

0xe47b,	// (0x00018f8a) compa_mode_pane_g2

0xe483,	// (0x00018f92) compa_mode_pane_g3

0x0002,

0xfdec,	// (0x0001a8fb) compa_mode_pane_g

0xe48b,	// (0x00018f9a) main_comp_mode_itu_pane_cp

0xe493,	// (0x00018fa2) main_comp_mode_rocker_pane_cp

0xe49b,	// (0x00018faa) cell_cmode_itu_pane_cp_ParamLimits

0xe49b,	// (0x00018faa) cell_cmode_itu_pane_cp

0xe4b0,	// (0x00018fbf) cell_cmode_rocker_pane_cp_ParamLimits

0xe4b0,	// (0x00018fbf) cell_cmode_rocker_pane_cp

0x77fe,	// (0x0001230d) bg_button_pane_cp06_cp_ParamLimits

0x77fe,	// (0x0001230d) bg_button_pane_cp06_cp

0xc14e,	// (0x00016c5d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc14e,	// (0x00016c5d) cell_cmode_rocker_pane_g1_cp

0xbec4,	// (0x000169d3) cell_cmode_rocker_pane_g2_cp

0x68ce,	// (0x000113dd) bg_button_pane_cp07_cp

0xe4c2,	// (0x00018fd1) cell_cmode_itu_pane_g1_cp

0xe4cb,	// (0x00018fda) cell_cmode_itu_pane_t1_cp

0xe4cb,	// (0x00018fda) cell_cmode_itu_pane_t2_cp

0xab53,	// (0x00015662) settings_code_pane_cp2

0x69c2,	// (0x000114d1) bg_popup_window_pane_cp3_ParamLimits

0x6e54,	// (0x00011963) heading_pane_cp3_ParamLimits

0x6e60,	// (0x0001196f) listscroll_popup_graphic_pane_ParamLimits

0x5bff,	// (0x0001070e) fep_hwr_aid_pane_ParamLimits

0x6092,	// (0x00010ba1) aid_touch_sctrl_top_ParamLimits

0x60ad,	// (0x00010bbc) sctrl_sk_top_pane_g1_ParamLimits

0x5e6c,	// (0x0001097b) sctrl_sk_top_pane_g2_ParamLimits

0xfd27,	// (0x0001a836) sctrl_sk_top_pane_g_ParamLimits

0x60ba,	// (0x00010bc9) sctrl_sk_top_pane_t1_ParamLimits

0x6092,	// (0x00010ba1) aid_touch_sctrl_bottom_ParamLimits

0x60ba,	// (0x00010bc9) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb95,	// (0x000186a4) aid_area_touch_clock

0x62ad,	// (0x00010dbc) aid_vkb2_area_top_pane_cell_ParamLimits

0x62ad,	// (0x00010dbc) aid_vkb2_area_top_pane_cell

0x63dd,	// (0x00010eec) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x63dd,	// (0x00010eec) aid_vkb2_area_bottom_pane_cell

0xe0fe,	// (0x00018c0d) popup_char_count_window

0xe4d9,	// (0x00018fe8) popup_char_count_window_g1

0xe4e2,	// (0x00018ff1) popup_char_count_window_g2

0xe4eb,	// (0x00018ffa) popup_char_count_window_g3

0x0002,

0xfdf3,	// (0x0001a902) popup_char_count_window_g

0xe4f4,	// (0x00019003) popup_char_count_window_t1

0x6167,	// (0x00010c76) popup_fep_char_preview_window_ParamLimits

0x6167,	// (0x00010c76) popup_fep_char_preview_window

0x62cb,	// (0x00010dda) vkb2_top_candi_pane_ParamLimits

0x62cb,	// (0x00010dda) vkb2_top_candi_pane

0xe502,	// (0x00019011) cell_vkb2_top_candi_pane_ParamLimits

0xe502,	// (0x00019011) cell_vkb2_top_candi_pane

0x66de,	// (0x000111ed) bg_popup_fep_char_preview_window_ParamLimits

0x66de,	// (0x000111ed) bg_popup_fep_char_preview_window

0x66ec,	// (0x000111fb) popup_fep_char_preview_window_t1_ParamLimits

0x66ec,	// (0x000111fb) popup_fep_char_preview_window_t1

0xe553,	// (0x00019062) bg_popup_fep_char_preview_window_g1

0xe55b,	// (0x0001906a) bg_popup_fep_char_preview_window_g2

0xe563,	// (0x00019072) bg_popup_fep_char_preview_window_g3

0xe56b,	// (0x0001907a) bg_popup_fep_char_preview_window_g4

0xe573,	// (0x00019082) bg_popup_fep_char_preview_window_g5

0x6726,	// (0x00011235) bg_popup_fep_char_preview_window_g6

0xe57b,	// (0x0001908a) bg_popup_fep_char_preview_window_g7

0xe583,	// (0x00019092) bg_popup_fep_char_preview_window_g8

0xe58b,	// (0x0001909a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfa,	// (0x0001a909) bg_popup_fep_char_preview_window_g

0x5e6c,	// (0x0001097b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5e6c,	// (0x0001097b) cell_vkb2_top_candi_pane_g1

0x5e7a,	// (0x00010989) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5e7a,	// (0x00010989) cell_vkb2_top_candi_pane_g2

0xe593,	// (0x000190a2) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe593,	// (0x000190a2) cell_vkb2_top_candi_pane_g3

0x672e,	// (0x0001123d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x672e,	// (0x0001123d) cell_vkb2_top_candi_pane_g4

0xc820,	// (0x0001732f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc820,	// (0x0001732f) cell_vkb2_top_candi_pane_g5

0x674f,	// (0x0001125e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x674f,	// (0x0001125e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0d,	// (0x0001a91c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0d,	// (0x0001a91c) cell_vkb2_top_candi_pane_g

0x675d,	// (0x0001126c) cell_vkb2_top_candi_pane_t1

0x5a5f,	// (0x0001056e) aid_size_touch_slider_mark_ParamLimits

0x5a5f,	// (0x0001056e) aid_size_touch_slider_mark

0xe1e5,	// (0x00018cf4) grid_graphic2_catg_pane_ParamLimits

0xe1e5,	// (0x00018cf4) grid_graphic2_catg_pane

0xe25f,	// (0x00018d6e) popup_grid_graphic2_window_t1_ParamLimits

0xe25f,	// (0x00018d6e) popup_grid_graphic2_window_t1

0xe271,	// (0x00018d80) popup_grid_graphic2_window_t2_ParamLimits

0xe271,	// (0x00018d80) popup_grid_graphic2_window_t2

0x0001,

0xfdcd,	// (0x0001a8dc) popup_grid_graphic2_window_t_ParamLimits

0xfdcd,	// (0x0001a8dc) popup_grid_graphic2_window_t

0x77fe,	// (0x0001230d) bg_button_pane_cp05_ParamLimits

0xe3cc,	// (0x00018edb) cell_graphic2_control_pane_g1_ParamLimits

0xe5b4,	// (0x000190c3) cell_graphic2_catg_pane_ParamLimits

0xe5b4,	// (0x000190c3) cell_graphic2_catg_pane

0x68ce,	// (0x000113dd) bg_button_pane_cp12

0xe5c6,	// (0x000190d5) cell_graphic2_catg_pane_g1

0xdb61,	// (0x00018670) cell_tb_ext_pane_t1_ParamLimits

0x64fa,	// (0x00011009) vkb2_top_cell_right_narrow_pane_ParamLimits

0x64fa,	// (0x00011009) vkb2_top_cell_right_narrow_pane

0x6512,	// (0x00011021) vkb2_top_cell_right_wide_pane_ParamLimits

0x6512,	// (0x00011021) vkb2_top_cell_right_wide_pane

0x5bf1,	// (0x00010700) bg_vkb2_func_pane_ParamLimits

0x5bf1,	// (0x00010700) bg_vkb2_func_pane

0x6583,	// (0x00011092) vkb2_top_cell_left_pane_g1_ParamLimits

0x5bf1,	// (0x00010700) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5bf1,	// (0x00010700) bg_vkb2_fuc_pane_cp03

0x65f7,	// (0x00011106) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9552,	// (0x00014061) bg_vkb2_func_pane_g1

0x955a,	// (0x00014069) bg_vkb2_func_pane_g2

0x956a,	// (0x00014079) bg_vkb2_func_pane_g3

0x9562,	// (0x00014071) bg_vkb2_func_pane_g4

0x9572,	// (0x00014081) bg_vkb2_func_pane_g5

0x957a,	// (0x00014089) bg_vkb2_func_pane_g6

0x9582,	// (0x00014091) bg_vkb2_func_pane_g7

0x958a,	// (0x00014099) bg_vkb2_func_pane_g8

0x954a,	// (0x00014059) bg_vkb2_func_pane_g9

0x0008,

0xfe1a,	// (0x0001a929) bg_vkb2_func_pane_g

0x5bf1,	// (0x00010700) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5bf1,	// (0x00010700) bg_vkb2_fuc_pane_cp01

0x6583,	// (0x00011092) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6583,	// (0x00011092) vkb2_top_cell_right_wide_pane_g1

0x5bf1,	// (0x00010700) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5bf1,	// (0x00010700) bg_vkb2_fuc_pane_cp02

0x65f7,	// (0x00011106) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x65f7,	// (0x00011106) vkb2_top_cell_right_narrow_pane_g1

0xd782,	// (0x00018291) aid_touch_area_decrease_ParamLimits

0xd782,	// (0x00018291) aid_touch_area_decrease

0xd7a6,	// (0x000182b5) aid_touch_area_increase_ParamLimits

0xd7a6,	// (0x000182b5) aid_touch_area_increase

0xd7b2,	// (0x000182c1) aid_touch_area_mute_ParamLimits

0xd7b2,	// (0x000182c1) aid_touch_area_mute

0xd7d6,	// (0x000182e5) aid_touch_area_slider_ParamLimits

0xd7d6,	// (0x000182e5) aid_touch_area_slider

0xd8c6,	// (0x000183d5) popup_slider_window_g4_ParamLimits

0xd8c6,	// (0x000183d5) popup_slider_window_g4

0xd8d2,	// (0x000183e1) popup_slider_window_g5_ParamLimits

0xd8d2,	// (0x000183e1) popup_slider_window_g5

0xd8f4,	// (0x00018403) popup_slider_window_g6_ParamLimits

0xd8f4,	// (0x00018403) popup_slider_window_g6

0xd934,	// (0x00018443) popup_slider_window_t2_ParamLimits

0xd934,	// (0x00018443) popup_slider_window_t2

0x0001,

0xfd1b,	// (0x0001a82a) popup_slider_window_t_ParamLimits

0xfd1b,	// (0x0001a82a) popup_slider_window_t

0xd94c,	// (0x0001845b) slider_pane_ParamLimits

0xd94c,	// (0x0001845b) slider_pane

0xe5cf,	// (0x000190de) slider_pane_g1_ParamLimits

0xe5cf,	// (0x000190de) slider_pane_g1

0xe5e3,	// (0x000190f2) slider_pane_g2_ParamLimits

0xe5e3,	// (0x000190f2) slider_pane_g2

0xe5f9,	// (0x00019108) slider_pane_g3_ParamLimits

0xe5f9,	// (0x00019108) slider_pane_g3

0x0003,

0xfe2d,	// (0x0001a93c) slider_pane_g_ParamLimits

0xfe2d,	// (0x0001a93c) slider_pane_g

0x8f16,	// (0x00013a25) popup_tb_float_extension_window_ParamLimits

0x8f16,	// (0x00013a25) popup_tb_float_extension_window

0xe625,	// (0x00019134) aid_size_cell_tb_float_ext

0x68ce,	// (0x000113dd) bg_popup_sub_window_cp28

0xe631,	// (0x00019140) grid_tb_float_ext_pane

0xe63d,	// (0x0001914c) cell_tb_float_ext_pane_ParamLimits

0xe63d,	// (0x0001914c) cell_tb_float_ext_pane

0xe659,	// (0x00019168) cell_tb_float_ext_pane_g1

0xe662,	// (0x00019171) grid_highlight_pane_cp12

0x5d46,	// (0x00010855) cell_last_hwr_side_pane_ParamLimits

0x5d46,	// (0x00010855) cell_last_hwr_side_pane

0xbec4,	// (0x000169d3) cell_last_hwr_side_pane_g1

0xe66b,	// (0x0001917a) cell_last_hwr_side_pane_g2

0x0001,

0xfe36,	// (0x0001a945) cell_last_hwr_side_pane_g

0x64a9,	// (0x00010fb8) vkb2_area_bottom_space_btn_pane_ParamLimits

0x64a9,	// (0x00010fb8) vkb2_area_bottom_space_btn_pane

0x5e6c,	// (0x0001097b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe171,	// (0x00018c80) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x675d,	// (0x0001126c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x677b,	// (0x0001128a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x677b,	// (0x0001128a) vkb2_area_bottom_space_btn_pane_g1

0x67b5,	// (0x000112c4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x67b5,	// (0x000112c4) vkb2_area_bottom_space_btn_pane_g2

0x67eb,	// (0x000112fa) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x67eb,	// (0x000112fa) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3b,	// (0x0001a94a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3b,	// (0x0001a94a) vkb2_area_bottom_space_btn_pane_g

0x5cb6,	// (0x000107c5) cel_fep_hwr_func_pane_ParamLimits

0x5cb6,	// (0x000107c5) cel_fep_hwr_func_pane

0x5cf2,	// (0x00010801) cell_hwr_side_button_pane_ParamLimits

0x5cf2,	// (0x00010801) cell_hwr_side_button_pane

0xdb95,	// (0x000186a4) aid_area_touch_clock_ParamLimits

0x6c66,	// (0x00011775) bg_uniindi_top_pane_ParamLimits

0xdba9,	// (0x000186b8) uniindi_top_pane_g1_ParamLimits

0xdbbf,	// (0x000186ce) uniindi_top_pane_g2_ParamLimits

0xdbcb,	// (0x000186da) uniindi_top_pane_g3_ParamLimits

0xdbdc,	// (0x000186eb) uniindi_top_pane_g4_ParamLimits

0xfd53,	// (0x0001a862) uniindi_top_pane_g_ParamLimits

0xdbe9,	// (0x000186f8) uniindi_top_pane_t1_ParamLimits

0x6c66,	// (0x00011775) bg_vkb2_func_pane_cp01_ParamLimits

0x6c66,	// (0x00011775) bg_vkb2_func_pane_cp01

0xe674,	// (0x00019183) cel_fep_hwr_func_pane_g1_ParamLimits

0xe674,	// (0x00019183) cel_fep_hwr_func_pane_g1

0x6c66,	// (0x00011775) bg_vkb2_func_pane_cp02_ParamLimits

0x6c66,	// (0x00011775) bg_vkb2_func_pane_cp02

0xe674,	// (0x00019183) cell_hwr_side_button_pane_g1_ParamLimits

0xe674,	// (0x00019183) cell_hwr_side_button_pane_g1

0x939d,	// (0x00013eac) status_pane_g4_ParamLimits

0x939d,	// (0x00013eac) status_pane_g4

0x93b7,	// (0x00013ec6) status_pane_t1

0xbc60,	// (0x0001676f) form2_midp_gauge_slider_cont_pane

0xbc68,	// (0x00016777) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbc7a,	// (0x00016789) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbc8c,	// (0x0001679b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb13,	// (0x0001a622) form2_midp_gauge_slider_pane_t_ParamLimits

0xbc9e,	// (0x000167ad) form2_midp_slider_pane_ParamLimits

0x612f,	// (0x00010c3e) aid_size_cell_func_vkb2_ParamLimits

0x612f,	// (0x00010c3e) aid_size_cell_func_vkb2

0xe611,	// (0x00019120) slider_pane_g4_ParamLimits

0xe611,	// (0x00019120) slider_pane_g4

0x6835,	// (0x00011344) form2_midp_gauge_slider_pane_t2_cp01

0x6843,	// (0x00011352) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6843,	// (0x00011352) form2_midp_gauge_slider_pane_t3_cp01

0x6860,	// (0x0001136f) form2_midp_slider_pane_cp01

0x68ce,	// (0x000113dd) navi_smil_pane

0xe6ad,	// (0x000191bc) navi_smil_pane_g1

0xe6b5,	// (0x000191c4) navi_smil_pane_t1

0xe682,	// (0x00019191) form2_midp_slider_pane_g1

0xe68b,	// (0x0001919a) form2_midp_slider_pane_g2

0xe693,	// (0x000191a2) form2_midp_slider_pane_g3

0xe682,	// (0x00019191) form2_midp_slider_pane_g4

0xe69b,	// (0x000191aa) form2_midp_slider_pane_g5

0x0004,

0xfe44,	// (0x0001a953) form2_midp_slider_pane_g

0x6825,	// (0x00011334) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6825,	// (0x00011334) vkb2_area_bottom_space_btn_pane_g4

0x91b5,	// (0x00013cc4) lc0_navi_pane_ParamLimits

0x91b5,	// (0x00013cc4) lc0_navi_pane

0x9231,	// (0x00013d40) lc0_stat_indi_pane_ParamLimits

0x9231,	// (0x00013d40) lc0_stat_indi_pane

0x9248,	// (0x00013d57) ls0_title_pane_ParamLimits

0x9248,	// (0x00013d57) ls0_title_pane

0x77fe,	// (0x0001230d) bg_popup_sub_pane_cp14_ParamLimits

0xdb7c,	// (0x0001868b) list_uniindi_pane_ParamLimits

0xdb88,	// (0x00018697) uniindi_top_pane_ParamLimits

0xdc27,	// (0x00018736) list_single_uniindi_pane_g1_ParamLimits

0xdc3a,	// (0x00018749) list_single_uniindi_pane_t1_ParamLimits

0x6869,	// (0x00011378) lc0_stat_clock_pane_ParamLimits

0x6869,	// (0x00011378) lc0_stat_clock_pane

0xe6c3,	// (0x000191d2) lc0_stat_indi_pane_g1_ParamLimits

0xe6c3,	// (0x000191d2) lc0_stat_indi_pane_g1

0xe6d0,	// (0x000191df) lc0_stat_indi_pane_g2_ParamLimits

0xe6d0,	// (0x000191df) lc0_stat_indi_pane_g2

0x0001,

0xfe4f,	// (0x0001a95e) lc0_stat_indi_pane_g_ParamLimits

0xfe4f,	// (0x0001a95e) lc0_stat_indi_pane_g

0x6876,	// (0x00011385) lc0_uni_indicator_pane_ParamLimits

0x6876,	// (0x00011385) lc0_uni_indicator_pane

0xe6dd,	// (0x000191ec) ls0_title_pane_g1_ParamLimits

0xe6dd,	// (0x000191ec) ls0_title_pane_g1

0xe6f1,	// (0x00019200) ls0_title_pane_t1_ParamLimits

0xe6f1,	// (0x00019200) ls0_title_pane_t1

0x6883,	// (0x00011392) lc0_uni_indicator_pane_g1_ParamLimits

0x6883,	// (0x00011392) lc0_uni_indicator_pane_g1

0xe727,	// (0x00019236) lc0_stat_clock_pane_t1

0x68ce,	// (0x000113dd) main_ai5_pane

0xe735,	// (0x00019244) ai5_sk_pane_ParamLimits

0xe735,	// (0x00019244) ai5_sk_pane

0xe742,	// (0x00019251) cell_ai5_widget_pane_ParamLimits

0xe742,	// (0x00019251) cell_ai5_widget_pane

0xe7b8,	// (0x000192c7) aid_size_cell_widget_grid

0xe7cc,	// (0x000192db) bg_ai5_widget_pane_ParamLimits

0xe7cc,	// (0x000192db) bg_ai5_widget_pane

0xe7f4,	// (0x00019303) cell_ai5_widget_pane_g2

0xe804,	// (0x00019313) cell_ai5_widget_pane_g3

0xe818,	// (0x00019327) cell_ai5_widget_pane_g4

0xe824,	// (0x00019333) cell_ai5_widget_pane_g5

0xe830,	// (0x0001933f) cell_ai5_widget_pane_g6

0xe83e,	// (0x0001934d) cell_ai5_widget_pane_g7

0xe886,	// (0x00019395) cell_ai5_widget_pane_t1_ParamLimits

0xe886,	// (0x00019395) cell_ai5_widget_pane_t1

0xe8a3,	// (0x000193b2) cell_ai5_widget_pane_t2_ParamLimits

0xe8a3,	// (0x000193b2) cell_ai5_widget_pane_t2

0xe8bb,	// (0x000193ca) cell_ai5_widget_pane_t3_ParamLimits

0xe8bb,	// (0x000193ca) cell_ai5_widget_pane_t3

0xe8d3,	// (0x000193e2) cell_ai5_widget_pane_t4_ParamLimits

0xe8d3,	// (0x000193e2) cell_ai5_widget_pane_t4

0xe8ed,	// (0x000193fc) cell_ai5_widget_pane_t5_ParamLimits

0xe8ed,	// (0x000193fc) cell_ai5_widget_pane_t5

0xe90c,	// (0x0001941b) cell_ai5_widget_pane_t6_ParamLimits

0xe90c,	// (0x0001941b) cell_ai5_widget_pane_t6

0xe91e,	// (0x0001942d) cell_ai5_widget_pane_t7_ParamLimits

0xe91e,	// (0x0001942d) cell_ai5_widget_pane_t7

0xe937,	// (0x00019446) cell_ai5_widget_pane_t8_ParamLimits

0xe937,	// (0x00019446) cell_ai5_widget_pane_t8

0x0009,

0xfe69,	// (0x0001a978) cell_ai5_widget_pane_t_ParamLimits

0xfe69,	// (0x0001a978) cell_ai5_widget_pane_t

0xe97f,	// (0x0001948e) grid_ai5_widget_pane

0x77fe,	// (0x0001230d) highlight_cell_ai5_widget_pane_ParamLimits

0x77fe,	// (0x0001230d) highlight_cell_ai5_widget_pane

0xe996,	// (0x000194a5) ai5_sk_left_pane

0xe9a0,	// (0x000194af) ai5_sk_middle_pane

0xe9aa,	// (0x000194b9) ai5_sk_right_pane

0xe9b4,	// (0x000194c3) bg_ai5_widget_pane_g1_ParamLimits

0xe9b4,	// (0x000194c3) bg_ai5_widget_pane_g1

0xe9c0,	// (0x000194cf) bg_ai5_widget_pane_g2_ParamLimits

0xe9c0,	// (0x000194cf) bg_ai5_widget_pane_g2

0xe9cc,	// (0x000194db) bg_ai5_widget_pane_g3_ParamLimits

0xe9cc,	// (0x000194db) bg_ai5_widget_pane_g3

0xe9d8,	// (0x000194e7) bg_ai5_widget_pane_g4_ParamLimits

0xe9d8,	// (0x000194e7) bg_ai5_widget_pane_g4

0xe9e4,	// (0x000194f3) bg_ai5_widget_pane_g5_ParamLimits

0xe9e4,	// (0x000194f3) bg_ai5_widget_pane_g5

0xe9f0,	// (0x000194ff) bg_ai5_widget_pane_g6_ParamLimits

0xe9f0,	// (0x000194ff) bg_ai5_widget_pane_g6

0xe9fc,	// (0x0001950b) bg_ai5_widget_pane_g7_ParamLimits

0xe9fc,	// (0x0001950b) bg_ai5_widget_pane_g7

0xea08,	// (0x00019517) bg_ai5_widget_pane_g8_ParamLimits

0xea08,	// (0x00019517) bg_ai5_widget_pane_g8

0xea14,	// (0x00019523) bg_ai5_widget_pane_g9_ParamLimits

0xea14,	// (0x00019523) bg_ai5_widget_pane_g9

0x0008,

0xfe7e,	// (0x0001a98d) bg_ai5_widget_pane_g_ParamLimits

0xfe7e,	// (0x0001a98d) bg_ai5_widget_pane_g

0xea39,	// (0x00019548) cell_shortcut_ai5_widget_pane_ParamLimits

0xea39,	// (0x00019548) cell_shortcut_ai5_widget_pane

0x6aa8,	// (0x000115b7) bg_cell_shortcut_ai5_widget_pane

0xea4b,	// (0x0001955a) cell_grid_ai5_widget_pane_g1

0xea54,	// (0x00019563) highlight_cell_shortcut_ai5_widget_pane

0x9552,	// (0x00014061) ai5_sk_left_pane_g1

0xea5c,	// (0x0001956b) ai5_sk_left_pane_g2

0xea64,	// (0x00019573) ai5_sk_left_pane_g3

0xea6c,	// (0x0001957b) ai5_sk_left_pane_g4

0x0003,

0xfe91,	// (0x0001a9a0) ai5_sk_left_pane_g

0xea74,	// (0x00019583) ai5_sk_left_pane_t1

0x955a,	// (0x00014069) ai5_sk_right_pane_g1

0xea82,	// (0x00019591) ai5_sk_right_pane_g2

0xea8a,	// (0x00019599) ai5_sk_right_pane_g3

0xea92,	// (0x000195a1) ai5_sk_right_pane_g4

0x0003,

0xfe9a,	// (0x0001a9a9) ai5_sk_right_pane_g

0xea9a,	// (0x000195a9) ai5_sk_right_pane_t1

0x955a,	// (0x00014069) ai5_sk_middle_pane_g1

0x9552,	// (0x00014061) ai5_sk_middle_pane_g2

0x9572,	// (0x00014081) ai5_sk_middle_pane_g3

0xea8a,	// (0x00019599) ai5_sk_middle_pane_g4

0xea64,	// (0x00019573) ai5_sk_middle_pane_g5

0xeaa8,	// (0x000195b7) ai5_sk_middle_pane_g6

0xeab0,	// (0x000195bf) ai5_sk_middle_pane_g7

0x0006,

0xfea3,	// (0x0001a9b2) ai5_sk_middle_pane_g

0x9037,	// (0x00013b46) aid_touch_area_size_lc0_ParamLimits

0x9037,	// (0x00013b46) aid_touch_area_size_lc0

0x5e9b,	// (0x000109aa) cell_hwr_candidate_pane_t1_ParamLimits

0x9055,	// (0x00013b64) aid_touch_navi_pane

0x9347,	// (0x00013e56) status_dt_navi_pane_ParamLimits

0x9347,	// (0x00013e56) status_dt_navi_pane

0x9354,	// (0x00013e63) status_dt_sta_pane_ParamLimits

0x9354,	// (0x00013e63) status_dt_sta_pane

0xeab8,	// (0x000195c7) dt_sta_controll_pane

0xeac5,	// (0x000195d4) dt_sta_indi_pane

0xead6,	// (0x000195e5) dt_sta_title_pane

0x6c66,	// (0x00011775) bg_dt_sta_indi_pane_ParamLimits

0x6c66,	// (0x00011775) bg_dt_sta_indi_pane

0xeae9,	// (0x000195f8) dt_sta_battery_pane

0xeaf1,	// (0x00019600) dt_sta_indi_pane_g1

0xeafa,	// (0x00019609) dt_sta_indi_pane_g2

0xeb03,	// (0x00019612) dt_sta_indi_pane_g3

0x0002,

0xfeb2,	// (0x0001a9c1) dt_sta_indi_pane_g

0xeb0c,	// (0x0001961b) dt_sta_signal_pane

0x77fe,	// (0x0001230d) bg_dt_sta_title_pane_ParamLimits

0x77fe,	// (0x0001230d) bg_dt_sta_title_pane

0xeb15,	// (0x00019624) dt_sta_title_pane_g1

0xeb1d,	// (0x0001962c) dt_sta_title_pane_t1_ParamLimits

0xeb1d,	// (0x0001962c) dt_sta_title_pane_t1

0x68ce,	// (0x000113dd) bg_dt_sta_control_pane

0xeb32,	// (0x00019641) dt_sta_controll_pane_g1

0xeb3b,	// (0x0001964a) bg_dt_sta_title_pane_g1

0xeb44,	// (0x00019653) bg_dt_sta_title_pane_g2

0xeb4d,	// (0x0001965c) bg_dt_sta_title_pane_g3

0x0002,

0xfeb9,	// (0x0001a9c8) bg_dt_sta_title_pane_g

0xbec4,	// (0x000169d3) bg_dt_sta_indi_pane_g1

0xeb56,	// (0x00019665) dt_sta_signal_pane_g1

0xeb5e,	// (0x0001966d) dt_sta_signal_pane_g2

0x0001,

0xfec0,	// (0x0001a9cf) dt_sta_signal_pane_g

0xeb66,	// (0x00019675) dt_sta_battery_pane_g1

0xeb6f,	// (0x0001967e) dt_sta_battery_pane_t1

0xbec4,	// (0x000169d3) bg_dt_sta_control_pane_g1

0x80bc,	// (0x00012bcb) fep_china_uni_eep_pane

0x80c4,	// (0x00012bd3) fep_china_uni_entry_pane_ParamLimits

0x80d4,	// (0x00012be3) popup_fep_china_uni_window_g1_ParamLimits

0x80e4,	// (0x00012bf3) popup_fep_china_uni_window_g2_ParamLimits

0x80e4,	// (0x00012bf3) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0001a267) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0001a267) popup_fep_china_uni_window_g

0xeb7e,	// (0x0001968d) fep_china_uni_eep_pane_g1

0xeb86,	// (0x00019695) fep_china_uni_eep_pane_t1

0xe6a4,	// (0x000191b3) aid_touch_area_size_smil_player

0x91ad,	// (0x00013cbc) lc0_clock_pane

0x93ab,	// (0x00013eba) status_pane_g5_ParamLimits

0x93ab,	// (0x00013eba) status_pane_g5

0x8b9b,	// (0x000136aa) popup_keymap_window

0x9369,	// (0x00013e78) status_icon_pane

0xe804,	// (0x00019313) cell_ai5_widget_pane_g3_ParamLimits

0xe818,	// (0x00019327) cell_ai5_widget_pane_g4_ParamLimits

0xe824,	// (0x00019333) cell_ai5_widget_pane_g5_ParamLimits

0xe84a,	// (0x00019359) cell_ai5_widget_pane_g8_ParamLimits

0xe84a,	// (0x00019359) cell_ai5_widget_pane_g8

0xe85e,	// (0x0001936d) cell_ai5_widget_pane_g9_ParamLimits

0xe85e,	// (0x0001936d) cell_ai5_widget_pane_g9

0xe872,	// (0x00019381) cell_ai5_widget_pane_g10_ParamLimits

0xe872,	// (0x00019381) cell_ai5_widget_pane_g10

0xeb95,	// (0x000196a4) status_icon_pane_g1

0x68ce,	// (0x000113dd) bg_popup_sub_pane_cp13

0xeb9d,	// (0x000196ac) popup_keymap_window_t1

0x8925,	// (0x00013434) control_pane_g6_ParamLimits

0x8925,	// (0x00013434) control_pane_g6

0x8932,	// (0x00013441) control_pane_g7_ParamLimits

0x8932,	// (0x00013441) control_pane_g7

0x893f,	// (0x0001344e) control_pane_g8_ParamLimits

0x893f,	// (0x0001344e) control_pane_g8

0xeab8,	// (0x000195c7) dt_sta_controll_pane_ParamLimits

0xeac5,	// (0x000195d4) dt_sta_indi_pane_ParamLimits

0xead6,	// (0x000195e5) dt_sta_title_pane_ParamLimits

0x719b,	// (0x00011caa) aid_size_touch_scroll_bar_cale

0x4ee8,	// (0x0000f9f7) popup_discreet_window_ParamLimits

0x4ee8,	// (0x0000f9f7) popup_discreet_window

0x4f76,	// (0x0000fa85) popup_sk_window

0x9c18,	// (0x00014727) bg_popup_sub_pane_cp28_ParamLimits

0x9c18,	// (0x00014727) bg_popup_sub_pane_cp28

0xebab,	// (0x000196ba) popup_discreet_window_g1_ParamLimits

0xebab,	// (0x000196ba) popup_discreet_window_g1

0xebcb,	// (0x000196da) popup_discreet_window_t1_ParamLimits

0xebcb,	// (0x000196da) popup_discreet_window_t1

0xebe9,	// (0x000196f8) popup_discreet_window_t2_ParamLimits

0xebe9,	// (0x000196f8) popup_discreet_window_t2

0x0002,

0xfec5,	// (0x0001a9d4) popup_discreet_window_t_ParamLimits

0xfec5,	// (0x0001a9d4) popup_discreet_window_t

0x6896,	// (0x000113a5) popup_sk_window_g1

0x68a0,	// (0x000113af) popup_sk_window_g2

0x0001,

0xfecc,	// (0x0001a9db) popup_sk_window_g

0xec3b,	// (0x0001974a) popup_sk_window_t1

0xec49,	// (0x00019758) popup_sk_window_t1_copy1

0xe7f4,	// (0x00019303) cell_ai5_widget_pane_g2_ParamLimits

0xe949,	// (0x00019458) cell_ai5_widget_pane_t9_ParamLimits

0xe949,	// (0x00019458) cell_ai5_widget_pane_t9

0x68ce,	// (0x000113dd) main_fep_fshwr2_pane

0xec57,	// (0x00019766) aid_fshwr2_btn_pane

0xec5f,	// (0x0001976e) aid_fshwr2_syb_pane

0xec67,	// (0x00019776) aid_fshwr2_txt_pane

0xec6f,	// (0x0001977e) fshwr2_func_candi_pane

0xec79,	// (0x00019788) fshwr2_hwr_syb_pane

0xec83,	// (0x00019792) fshwr2_icf_pane

0x68ce,	// (0x000113dd) fshwr2_icf_bg_pane

0xeca5,	// (0x000197b4) fshwr2_icf_pane_t1_ParamLimits

0xeca5,	// (0x000197b4) fshwr2_icf_pane_t1

0xbec4,	// (0x000169d3) fshwr2_func_candi_pane_g1

0xecbc,	// (0x000197cb) fshwr2_func_candi_row_pane_ParamLimits

0xecbc,	// (0x000197cb) fshwr2_func_candi_row_pane

0xeccd,	// (0x000197dc) cell_fshwr2_syb_pane_ParamLimits

0xeccd,	// (0x000197dc) cell_fshwr2_syb_pane

0xc14e,	// (0x00016c5d) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc14e,	// (0x00016c5d) fshwr2_hwr_syb_pane_g1

0x68ce,	// (0x000113dd) bg_popup_call_pane_cp01

0xece7,	// (0x000197f6) fshwr2_func_candi_cell_pane_ParamLimits

0xece7,	// (0x000197f6) fshwr2_func_candi_cell_pane

0xed19,	// (0x00019828) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed19,	// (0x00019828) fshwr2_func_candi_cell_bg_pane

0xed33,	// (0x00019842) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed33,	// (0x00019842) fshwr2_func_candi_cell_pane_g1

0xed53,	// (0x00019862) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed53,	// (0x00019862) fshwr2_func_candi_cell_pane_t1

0x68ce,	// (0x000113dd) bg_button_pane_cp08

0x864a,	// (0x00013159) cell_fshwr2_syb_bg_pane

0xed66,	// (0x00019875) cell_fshwr2_syb_bg_pane_g1

0xed6e,	// (0x0001987d) cell_fshwr2_syb_bg_pane_t1

0x77fe,	// (0x0001230d) main_tmo_pane

0xa742,	// (0x00015251) uni_indicator_pane_g1_ParamLimits

0xa757,	// (0x00015266) uni_indicator_pane_g2_ParamLimits

0xa76d,	// (0x0001527c) uni_indicator_pane_g3_ParamLimits

0xa783,	// (0x00015292) uni_indicator_pane_g4_ParamLimits

0xa783,	// (0x00015292) uni_indicator_pane_g4

0xa797,	// (0x000152a6) uni_indicator_pane_g5_ParamLimits

0xa797,	// (0x000152a6) uni_indicator_pane_g5

0xa7ab,	// (0x000152ba) uni_indicator_pane_g6_ParamLimits

0xa7ab,	// (0x000152ba) uni_indicator_pane_g6

0xf955,	// (0x0001a464) uni_indicator_pane_g_ParamLimits

0xd752,	// (0x00018261) popup_tmo_note_window_ParamLimits

0xd752,	// (0x00018261) popup_tmo_note_window

0x68ce,	// (0x000113dd) fshwr2_bg_pane

0xed44,	// (0x00019853) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed44,	// (0x00019853) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed1,	// (0x0001a9e0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed1,	// (0x0001a9e0) fshwr2_func_candi_cell_pane_g

0xbec4,	// (0x000169d3) bg_popup_window_pane_cp01

0xed7d,	// (0x0001988c) bg_popup_window_pane_g1_cp01

0xed86,	// (0x00019895) bg_popup_window_pane_cp22_ParamLimits

0xed86,	// (0x00019895) bg_popup_window_pane_cp22

0xed94,	// (0x000198a3) listscroll_tmo_link_pane_ParamLimits

0xed94,	// (0x000198a3) listscroll_tmo_link_pane

0xedd4,	// (0x000198e3) popup_tmo_note_window_g1_ParamLimits

0xedd4,	// (0x000198e3) popup_tmo_note_window_g1

0xede1,	// (0x000198f0) tmo_note_info_pane_ParamLimits

0xede1,	// (0x000198f0) tmo_note_info_pane

0xedfb,	// (0x0001990a) list_tmo_note_info_pane_g1_ParamLimits

0xedfb,	// (0x0001990a) list_tmo_note_info_pane_g1

0xee12,	// (0x00019921) list_tmo_note_info_pane_g2_ParamLimits

0xee12,	// (0x00019921) list_tmo_note_info_pane_g2

0x0001,

0xfed6,	// (0x0001a9e5) list_tmo_note_info_pane_g_ParamLimits

0xfed6,	// (0x0001a9e5) list_tmo_note_info_pane_g

0xee2e,	// (0x0001993d) list_tmo_note_info_text_pane_ParamLimits

0xee2e,	// (0x0001993d) list_tmo_note_info_text_pane

0xeeb3,	// (0x000199c2) list_tmo_link_pane

0xeec0,	// (0x000199cf) scroll_pane_cp20

0xeecd,	// (0x000199dc) list_single_tmo_link_pane_ParamLimits

0xeecd,	// (0x000199dc) list_single_tmo_link_pane

0xeedd,	// (0x000199ec) list_single_tmo_link_pane_t1

0xeeeb,	// (0x000199fa) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeeb,	// (0x000199fa) list_tmo_note_info_text_pane_t1

0x7a26,	// (0x00012535) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7a26,	// (0x00012535) aid_size_touch_scroll_bar_cp01

0x78b8,	// (0x000123c7) aid_size_touch_slider_marker

0x4f5e,	// (0x0000fa6d) popup_settings_window_ParamLimits

0x4f5e,	// (0x0000fa6d) popup_settings_window

0x8a00,	// (0x0001350f) popup_candi_list_indi_window

0x9055,	// (0x00013b64) aid_touch_navi_pane_ParamLimits

0x6066,	// (0x00010b75) rs_clock_indi_pane

0x606f,	// (0x00010b7e) sctrl_sk_bottom_pane_ParamLimits

0x6080,	// (0x00010b8f) sctrl_sk_top_pane_ParamLimits

0x6181,	// (0x00010c90) popup_fep_tooltip_window

0xe7b8,	// (0x000192c7) aid_size_cell_widget_grid_ParamLimits

0xe7e8,	// (0x000192f7) cell_ai5_widget_pane_g1_ParamLimits

0xe7e8,	// (0x000192f7) cell_ai5_widget_pane_g1

0xe830,	// (0x0001933f) cell_ai5_widget_pane_g6_ParamLimits

0xe83e,	// (0x0001934d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe54,	// (0x0001a963) cell_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0001a963) cell_ai5_widget_pane_g

0xe96d,	// (0x0001947c) cell_ai5_widget_pane_t10_ParamLimits

0xe96d,	// (0x0001947c) cell_ai5_widget_pane_t10

0xe97f,	// (0x0001948e) grid_ai5_widget_pane_ParamLimits

0xea20,	// (0x0001952f) cell_contacts_ai5_widget_pane_ParamLimits

0xea20,	// (0x0001952f) cell_contacts_ai5_widget_pane

0xebfe,	// (0x0001970d) popup_discreet_window_t3_ParamLimits

0xebfe,	// (0x0001970d) popup_discreet_window_t3

0xec8d,	// (0x0001979c) popup_fshwr2_char_preview_window_ParamLimits

0xec8d,	// (0x0001979c) popup_fshwr2_char_preview_window

0xee4c,	// (0x0001995b) tmo_note_info_pane_t1

0xee61,	// (0x00019970) tmo_note_info_pane_t2

0xee7a,	// (0x00019989) tmo_note_info_pane_t3

0xee8f,	// (0x0001999e) tmo_note_info_pane_t4

0xeea1,	// (0x000199b0) tmo_note_info_pane_t5

0x0004,

0xfedb,	// (0x0001a9ea) tmo_note_info_pane_t

0xeeb3,	// (0x000199c2) list_tmo_link_pane_ParamLimits

0xeec0,	// (0x000199cf) scroll_pane_cp20_ParamLimits

0x68ce,	// (0x000113dd) bg_popup_fep_char_preview_window_cp01

0xef04,	// (0x00019a13) popup_fshwr2_char_preview_window_t1

0xef12,	// (0x00019a21) popup_candi_list_indi_window_g1

0xef1b,	// (0x00019a2a) bg_cell_contacts_ai5_widget_pane

0xef27,	// (0x00019a36) cell_contacts_ai5_widget_pane_g1

0xef3b,	// (0x00019a4a) cell_contacts_ai5_widget_pane_g2

0xef4a,	// (0x00019a59) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee6,	// (0x0001a9f5) cell_contacts_ai5_widget_pane_g

0xef5d,	// (0x00019a6c) cell_contacts_ai5_widget_pane_t1

0x77fe,	// (0x0001230d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd7,	// (0x00019ae6) settings_container_pane

0x864a,	// (0x00013159) listscroll_set_pane_copy1

0xb3d1,	// (0x00015ee0) scroll_pane_cp121_copy1

0xefe3,	// (0x00019af2) set_content_pane_copy1

0xefeb,	// (0x00019afa) aid_height_set_list_copy1_ParamLimits

0xefeb,	// (0x00019afa) aid_height_set_list_copy1

0xa9d3,	// (0x000154e2) aid_size_parent_copy1_ParamLimits

0xa9d3,	// (0x000154e2) aid_size_parent_copy1

0xeff7,	// (0x00019b06) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff7,	// (0x00019b06) button_value_adjust_pane_cp6_copy1

0x89d8,	// (0x000134e7) list_highlight_pane_cp2_copy1_ParamLimits

0x89d8,	// (0x000134e7) list_highlight_pane_cp2_copy1

0xf00b,	// (0x00019b1a) list_set_pane_copy1_ParamLimits

0xf00b,	// (0x00019b1a) list_set_pane_copy1

0xef72,	// (0x00019a81) main_pane_set_t1_copy1_ParamLimits

0xef72,	// (0x00019a81) main_pane_set_t1_copy1

0xefac,	// (0x00019abb) main_pane_set_t2_copy1_ParamLimits

0xefac,	// (0x00019abb) main_pane_set_t2_copy1

0xf0d2,	// (0x00019be1) main_pane_set_t3_copy1

0xf0e0,	// (0x00019bef) main_pane_set_t4_copy1

0xefcb,	// (0x00019ada) set_content_pane_g1_copy1_ParamLimits

0xefcb,	// (0x00019ada) set_content_pane_g1_copy1

0xf0ee,	// (0x00019bfd) setting_code_pane_copy1

0xf0f8,	// (0x00019c07) setting_slider_graphic_pane_copy1

0xf0f8,	// (0x00019c07) setting_slider_pane_copy1

0xf102,	// (0x00019c11) setting_text_pane_copy1

0xf10c,	// (0x00019c1b) setting_volume_pane_copy1

0xf115,	// (0x00019c24) settings_code_pane_cp2_copy1

0xf11d,	// (0x00019c2c) settings_code_pane_cp_copy1_ParamLimits

0xf11d,	// (0x00019c2c) settings_code_pane_cp_copy1

0xf131,	// (0x00019c40) volume_set_pane_copy1

0xf13d,	// (0x00019c4c) volume_set_pane_g10_copy1

0xf149,	// (0x00019c58) volume_set_pane_g1_copy1

0xf153,	// (0x00019c62) volume_set_pane_g2_copy1

0xf15d,	// (0x00019c6c) volume_set_pane_g3_copy1

0xf167,	// (0x00019c76) volume_set_pane_g4_copy1

0xf171,	// (0x00019c80) volume_set_pane_g5_copy1

0xf17b,	// (0x00019c8a) volume_set_pane_g6_copy1

0xf185,	// (0x00019c94) volume_set_pane_g7_copy1

0xf18f,	// (0x00019c9e) volume_set_pane_g8_copy1

0xf199,	// (0x00019ca8) volume_set_pane_g9_copy1

0x69c2,	// (0x000114d1) bg_set_opt_pane_cp_copy1_ParamLimits

0x69c2,	// (0x000114d1) bg_set_opt_pane_cp_copy1

0xf1a3,	// (0x00019cb2) setting_slider_pane_t1_copy1_ParamLimits

0xf1a3,	// (0x00019cb2) setting_slider_pane_t1_copy1

0xf1c1,	// (0x00019cd0) setting_slider_pane_t2_copy1_ParamLimits

0xf1c1,	// (0x00019cd0) setting_slider_pane_t2_copy1

0xf1db,	// (0x00019cea) setting_slider_pane_t3_copy1_ParamLimits

0xf1db,	// (0x00019cea) setting_slider_pane_t3_copy1

0xf1f3,	// (0x00019d02) slider_set_pane_copy1_ParamLimits

0xf1f3,	// (0x00019d02) slider_set_pane_copy1

0x793a,	// (0x00012449) set_opt_bg_pane_g1_copy2

0x7942,	// (0x00012451) set_opt_bg_pane_g2_copy2

0xf209,	// (0x00019d18) set_opt_bg_pane_g3_copy2

0x7952,	// (0x00012461) set_opt_bg_pane_g4_copy2

0x795a,	// (0x00012469) set_opt_bg_pane_g5_copy2

0x7962,	// (0x00012471) set_opt_bg_pane_g6_copy2

0xf213,	// (0x00019d22) set_opt_bg_pane_g7_copy2

0xf21d,	// (0x00019d2c) set_opt_bg_pane_g8_copy2

0xf227,	// (0x00019d36) set_opt_bg_pane_g9_copy2

0xf231,	// (0x00019d40) aid_size_touch_slider_mark_copy1_ParamLimits

0xf231,	// (0x00019d40) aid_size_touch_slider_mark_copy1

0xf245,	// (0x00019d54) slider_set_pane_g1_copy1

0xf24e,	// (0x00019d5d) slider_set_pane_g2_copy1

0xb449,	// (0x00015f58) slider_set_pane_g3_copy1_ParamLimits

0xb449,	// (0x00015f58) slider_set_pane_g3_copy1

0xb45d,	// (0x00015f6c) slider_set_pane_g4_copy1_ParamLimits

0xb45d,	// (0x00015f6c) slider_set_pane_g4_copy1

0xb475,	// (0x00015f84) slider_set_pane_g5_copy1_ParamLimits

0xb475,	// (0x00015f84) slider_set_pane_g5_copy1

0xb449,	// (0x00015f58) slider_set_pane_g6_copy1_ParamLimits

0xb449,	// (0x00015f58) slider_set_pane_g6_copy1

0xf256,	// (0x00019d65) slider_set_pane_g7_copy1_ParamLimits

0xf256,	// (0x00019d65) slider_set_pane_g7_copy1

0x68e2,	// (0x000113f1) bg_set_opt_pane_cp2_copy1

0xf26c,	// (0x00019d7b) setting_slider_graphic_pane_g1_copy1

0xf275,	// (0x00019d84) setting_slider_graphic_pane_t1_copy1

0xf285,	// (0x00019d94) setting_slider_graphic_pane_t2_copy1

0xf295,	// (0x00019da4) slider_set_pane_cp_copy1

0xf2a5,	// (0x00019db4) input_focus_pane_cp1_copy1

0xf2ae,	// (0x00019dbd) list_set_text_pane_copy1

0xf2b6,	// (0x00019dc5) setting_text_pane_g1_copy1

0x6a1b,	// (0x0001152a) set_text_pane_t1_copy1

0xf2a5,	// (0x00019db4) input_focus_pane_cp2_copy1

0xf2b6,	// (0x00019dc5) setting_code_pane_g1_copy1

0xf2bf,	// (0x00019dce) setting_code_pane_t1_copy1

0xf2cd,	// (0x00019ddc) list_set_graphic_pane_copy1

0x68e2,	// (0x000113f1) bg_set_opt_pane_cp4_copy1

0x8344,	// (0x00012e53) list_set_graphic_pane_g1_copy1_ParamLimits

0x8344,	// (0x00012e53) list_set_graphic_pane_g1_copy1

0xf2df,	// (0x00019dee) list_set_graphic_pane_g2_copy1

0x835c,	// (0x00012e6b) list_set_graphic_pane_t1_copy1_ParamLimits

0x835c,	// (0x00012e6b) list_set_graphic_pane_t1_copy1

0xbec4,	// (0x000169d3) rs_clock_indi_pane_g1

0xf2e7,	// (0x00019df6) rs_clock_indi_pane_t1

0xf2f5,	// (0x00019e04) rs_indi_pane

0xf2fd,	// (0x00019e0c) rs_indi_pane_g1

0xf306,	// (0x00019e15) rs_indi_pane_g2

0xf30f,	// (0x00019e1e) rs_indi_pane_g3

0x0002,

0xfeed,	// (0x0001a9fc) rs_indi_pane_g

0x864a,	// (0x00013159) bg_popup_preview_window_pane_cp03

0xf318,	// (0x00019e27) popup_fep_tooltip_window_t1

0xcda8,	// (0x000178b7) popup_note2_window_g2_ParamLimits

0xcda8,	// (0x000178b7) popup_note2_window_g2

0x0001,

0xfc8b,	// (0x0001a79a) popup_note2_window_g_ParamLimits

0xfc8b,	// (0x0001a79a) popup_note2_window_g

0xd39f,	// (0x00017eae) bg_popup_sub_pane_cp11_ParamLimits

0xd3ac,	// (0x00017ebb) cell_ai3_links_pane_g1_ParamLimits

0xd3c3,	// (0x00017ed2) cell_ai3_links_pane_t1

0x6a1b,	// (0x0001152a) set_text_pane_t1_copy1_ParamLimits

0x8557,	// (0x00013066) cell_graphic_popup_pane_cp2_ParamLimits

0x8557,	// (0x00013066) cell_graphic_popup_pane_cp2

0xf326,	// (0x00019e35) cell_graphic_popup_pane_g1_cp2

0x6fae,	// (0x00011abd) cell_graphic_popup_pane_g2_cp2

0xf32e,	// (0x00019e3d) cell_graphic_popup_pane_g3_cp2

0xf336,	// (0x00019e45) cell_graphic_popup_pane_t2_cp2

0x6fbf,	// (0x00011ace) grid_highlight_pane_cp3_cp2

0x7d13,	// (0x00012822) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x77fe,	// (0x0001230d) main_tmo_pane_ParamLimits

0xd746,	// (0x00018255) popup_tmo_big_image_note_window

0xe7d8,	// (0x000192e7) cell_ai5_widget_list_pane

0xe7e0,	// (0x000192ef) cell_ai5_widget_lrg_icon_pane

0xee4c,	// (0x0001995b) tmo_note_info_pane_t1_ParamLimits

0xee61,	// (0x00019970) tmo_note_info_pane_t2_ParamLimits

0xee7a,	// (0x00019989) tmo_note_info_pane_t3_ParamLimits

0xee8f,	// (0x0001999e) tmo_note_info_pane_t4_ParamLimits

0xeea1,	// (0x000199b0) tmo_note_info_pane_t5_ParamLimits

0xfedb,	// (0x0001a9ea) tmo_note_info_pane_t_ParamLimits

0xefd7,	// (0x00019ae6) settings_container_pane_ParamLimits

0xf29d,	// (0x00019dac) indicator_popup_pane_cp5

0xf29d,	// (0x00019dac) indicator_popup_pane_cp6

0xf2cd,	// (0x00019ddc) list_set_graphic_pane_copy1_ParamLimits

0x68ce,	// (0x000113dd) bg_popup_window_pane_cp23

0xf344,	// (0x00019e53) popup_tmo_big_image_note_window_g1

0xf350,	// (0x00019e5f) popup_tmo_big_image_note_window_t1

0xf360,	// (0x00019e6f) popup_tmo_big_image_note_window_t2

0xf370,	// (0x00019e7f) popup_tmo_big_image_note_window_t3

0x0002,

0xfef4,	// (0x0001aa03) popup_tmo_big_image_note_window_t

0xf380,	// (0x00019e8f) cell_ai5_widget_lrg_icon_pane_g1

0xf388,	// (0x00019e97) cell_ai5_widget_lrg_icon_pane_t1

0xf396,	// (0x00019ea5) cell_ai5_widget_list_row_pane_ParamLimits

0xf396,	// (0x00019ea5) cell_ai5_widget_list_row_pane

0xf3af,	// (0x00019ebe) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3af,	// (0x00019ebe) cell_ai5_widget_list_row_pane_g1

0xf3bc,	// (0x00019ecb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3bc,	// (0x00019ecb) cell_ai5_widget_list_row_pane_t1

0xf3d4,	// (0x00019ee3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3d4,	// (0x00019ee3) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfefb,	// (0x0001aa0a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfefb,	// (0x0001aa0a) cell_ai5_widget_list_row_pane_t

0x4e0b,	// (0x0000f91a) main_fep_vtchi_ss_pane

0xf3e6,	// (0x00019ef5) popup_fep_char_pre_window

0xf3ee,	// (0x00019efd) popup_fep_ituss_window

0xf3f9,	// (0x00019f08) popup_fep_vkbss_window

0xf404,	// (0x00019f13) grid_vkbss_keypad_pane_ParamLimits

0xf404,	// (0x00019f13) grid_vkbss_keypad_pane

0xf414,	// (0x00019f23) ituss_keypad_pane

0xf41c,	// (0x00019f2b) aid_vkbss_key_offset_ParamLimits

0xf41c,	// (0x00019f2b) aid_vkbss_key_offset

0xf42b,	// (0x00019f3a) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x00019f3a) cell_vkbss_key_pane

0xf441,	// (0x00019f50) bg_cell_vkbss_key_g1_ParamLimits

0xf441,	// (0x00019f50) bg_cell_vkbss_key_g1

0xf44d,	// (0x00019f5c) cell_vkbss_key_3p_pane_ParamLimits

0xf44d,	// (0x00019f5c) cell_vkbss_key_3p_pane

0xf467,	// (0x00019f76) cell_vkbss_key_g1_ParamLimits

0xf467,	// (0x00019f76) cell_vkbss_key_g1

0xf481,	// (0x00019f90) cell_vkbss_key_t1_ParamLimits

0xf481,	// (0x00019f90) cell_vkbss_key_t1

0xf4ac,	// (0x00019fbb) cell_ituss_key_pane_ParamLimits

0xf4ac,	// (0x00019fbb) cell_ituss_key_pane

0xf4bb,	// (0x00019fca) bg_cell_ituss_key_g1_ParamLimits

0xf4bb,	// (0x00019fca) bg_cell_ituss_key_g1

0xf4c7,	// (0x00019fd6) cell_ituss_key_pane_g1_ParamLimits

0xf4c7,	// (0x00019fd6) cell_ituss_key_pane_g1

0xf4d3,	// (0x00019fe2) cell_ituss_key_pane_g2_ParamLimits

0xf4d3,	// (0x00019fe2) cell_ituss_key_pane_g2

0x0001,

0xff00,	// (0x0001aa0f) cell_ituss_key_pane_g_ParamLimits

0xff00,	// (0x0001aa0f) cell_ituss_key_pane_g

0xf4e7,	// (0x00019ff6) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x00019ff6) cell_ituss_key_t1

0xf505,	// (0x0001a014) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x0001a014) cell_ituss_key_t2

0xf524,	// (0x0001a033) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x0001a033) cell_ituss_key_t3

0xf543,	// (0x0001a052) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x0001a052) cell_ituss_key_t4

0x0003,

0xff05,	// (0x0001aa14) cell_ituss_key_t_ParamLimits

0xff05,	// (0x0001aa14) cell_ituss_key_t

0xf562,	// (0x0001a071) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x0001a079) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0001a081) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0e,	// (0x0001aa1d) cell_vkbss_key_3p_pane_g

0x68ce,	// (0x000113dd) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0001a089) popup_fep_char_pre_window_t1

0xe7ae,	// (0x000192bd) main_ai5_sk_pane

0xef1b,	// (0x00019a2a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef27,	// (0x00019a36) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef3b,	// (0x00019a4a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4a,	// (0x00019a59) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee6,	// (0x0001a9f5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5d,	// (0x00019a6c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x77fe,	// (0x0001230d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0001a098) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal

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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002b8a3 };

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
0xdaa7,	// (0x0003934a) Screen

0xdab1,	// (0x00039354) application_window_ParamLimits

0xdab1,	// (0x00039354) application_window

0x7492,	// (0x00032d35) screen_g1

0xdabf,	// (0x00039362) area_bottom_pane_ParamLimits

0xdabf,	// (0x00039362) area_bottom_pane

0x7520,	// (0x00032dc3) area_top_pane_ParamLimits

0x7520,	// (0x00032dc3) area_top_pane

0x7598,	// (0x00032e3b) main_pane_ParamLimits

0x7598,	// (0x00032e3b) main_pane

0x7651,	// (0x00032ef4) misc_graphics

0xe1bf,	// (0x00039a62) battery_pane_ParamLimits

0xe1bf,	// (0x00039a62) battery_pane

0xb2d7,	// (0x00036b7a) bg_status_flat_pane_g8

0xb2df,	// (0x00036b82) bg_status_flat_pane_g9

0xaa0e,	// (0x000362b1) context_pane_ParamLimits

0xaa0e,	// (0x000362b1) context_pane

0xe2f1,	// (0x00039b94) navi_pane_ParamLimits

0xe2f1,	// (0x00039b94) navi_pane

0xe35d,	// (0x00039c00) signal_pane_ParamLimits

0xe35d,	// (0x00039c00) signal_pane

0x0008,

0xf879,	// (0x0003b11c) bg_status_flat_pane_g

0xe3be,	// (0x00039c61) status_pane_g1_ParamLimits

0xe3be,	// (0x00039c61) status_pane_g1

0xaa74,	// (0x00036317) status_pane_g2_ParamLimits

0xaa74,	// (0x00036317) status_pane_g2

0xaa80,	// (0x00036323) status_pane_g3_ParamLimits

0xaa80,	// (0x00036323) status_pane_g3

0x0004,

0xf7a5,	// (0x0003b048) status_pane_g_ParamLimits

0xf7a5,	// (0x0003b048) status_pane_g

0xe3ca,	// (0x00039c6d) title_pane_ParamLimits

0xe3ca,	// (0x00039c6d) title_pane

0xe407,	// (0x00039caa) uni_indicator_pane_ParamLimits

0xe407,	// (0x00039caa) uni_indicator_pane

0xa965,	// (0x00036208) bg_list_pane_ParamLimits

0xa965,	// (0x00036208) bg_list_pane

0x6d9d,	// (0x00032640) find_pane

0xe162,	// (0x00039a05) listscroll_app_pane_ParamLimits

0xe162,	// (0x00039a05) listscroll_app_pane

0xa985,	// (0x00036228) listscroll_form_pane

0x6da5,	// (0x00032648) listscroll_gen_pane_ParamLimits

0x6da5,	// (0x00032648) listscroll_gen_pane

0x8dac,	// (0x0003464f) listscroll_set_pane

0xde07,	// (0x000396aa) main_idle_act_pane

0xa7d0,	// (0x00036073) main_idle_trad_pane

0xa7d0,	// (0x00036073) main_list_empty_pane

0x8db4,	// (0x00034657) main_midp_pane

0xa99f,	// (0x00036242) main_pane_g1_ParamLimits

0xa99f,	// (0x00036242) main_pane_g1

0x8dc0,	// (0x00034663) popup_ai_message_window_ParamLimits

0x8dc0,	// (0x00034663) popup_ai_message_window

0x8e56,	// (0x000346f9) popup_fep_china_uni_window_ParamLimits

0x8e56,	// (0x000346f9) popup_fep_china_uni_window

0x8e94,	// (0x00034737) popup_fep_japan_candidate_window_ParamLimits

0x8e94,	// (0x00034737) popup_fep_japan_candidate_window

0x8eb2,	// (0x00034755) popup_fep_japan_predictive_window_ParamLimits

0x8eb2,	// (0x00034755) popup_fep_japan_predictive_window

0x8ede,	// (0x00034781) popup_find_window

0x8eeb,	// (0x0003478e) popup_grid_graphic_window_ParamLimits

0x8eeb,	// (0x0003478e) popup_grid_graphic_window

0x8f09,	// (0x000347ac) popup_large_graphic_colour_window

0x8f28,	// (0x000347cb) popup_menu_window_ParamLimits

0x8f28,	// (0x000347cb) popup_menu_window

0x9060,	// (0x00034903) popup_note_image_window

0x904e,	// (0x000348f1) popup_note_wait_window_ParamLimits

0x904e,	// (0x000348f1) popup_note_wait_window

0x904e,	// (0x000348f1) popup_note_window_ParamLimits

0x904e,	// (0x000348f1) popup_note_window

0x90b4,	// (0x00034957) popup_query_code_window_ParamLimits

0x90b4,	// (0x00034957) popup_query_code_window

0x90c6,	// (0x00034969) popup_query_data_code_window_ParamLimits

0x90c6,	// (0x00034969) popup_query_data_code_window

0x90db,	// (0x0003497e) popup_query_data_window_ParamLimits

0x90db,	// (0x0003497e) popup_query_data_window

0x90f1,	// (0x00034994) popup_query_sat_info_window_ParamLimits

0x90f1,	// (0x00034994) popup_query_sat_info_window

0x9122,	// (0x000349c5) popup_snote_single_graphic_window_ParamLimits

0x9122,	// (0x000349c5) popup_snote_single_graphic_window

0x9122,	// (0x000349c5) popup_snote_single_text_window_ParamLimits

0x9122,	// (0x000349c5) popup_snote_single_text_window

0x9135,	// (0x000349d8) popup_sub_window_general

0x9239,	// (0x00034adc) popup_window_general_ParamLimits

0x9239,	// (0x00034adc) popup_window_general

0xa9ad,	// (0x00036250) power_save_pane

0x8c48,	// (0x000344eb) control_pane_g1_ParamLimits

0x8c48,	// (0x000344eb) control_pane_g1

0x8c69,	// (0x0003450c) control_pane_g2_ParamLimits

0x8c69,	// (0x0003450c) control_pane_g2

0xa957,	// (0x000361fa) control_pane_g3_ParamLimits

0xa957,	// (0x000361fa) control_pane_g3

0x0007,

0xf78d,	// (0x0003b030) control_pane_g_ParamLimits

0xf78d,	// (0x0003b030) control_pane_g

0x8cab,	// (0x0003454e) control_pane_t1_ParamLimits

0x8cab,	// (0x0003454e) control_pane_t1

0x8cfd,	// (0x000345a0) control_pane_t2_ParamLimits

0x8cfd,	// (0x000345a0) control_pane_t2

0x0002,

0xf79e,	// (0x0003b041) control_pane_t_ParamLimits

0xf79e,	// (0x0003b041) control_pane_t

0xa8ff,	// (0x000361a2) navi_navi_volume_pane_cp1

0xa907,	// (0x000361aa) status_small_icon_pane

0xa90f,	// (0x000361b2) status_small_pane_g1_ParamLimits

0xa90f,	// (0x000361b2) status_small_pane_g1

0xe0ba,	// (0x0003995d) status_small_pane_g2_ParamLimits

0xe0ba,	// (0x0003995d) status_small_pane_g2

0xe0c6,	// (0x00039969) status_small_pane_g3_ParamLimits

0xe0c6,	// (0x00039969) status_small_pane_g3

0xe0d2,	// (0x00039975) status_small_pane_g4_ParamLimits

0xe0d2,	// (0x00039975) status_small_pane_g4

0xe0de,	// (0x00039981) status_small_pane_g5_ParamLimits

0xe0de,	// (0x00039981) status_small_pane_g5

0xa943,	// (0x000361e6) status_small_pane_g6_ParamLimits

0xa943,	// (0x000361e6) status_small_pane_g6

0x0007,

0xf77c,	// (0x0003b01f) status_small_pane_g_ParamLimits

0xf77c,	// (0x0003b01f) status_small_pane_g

0xe10d,	// (0x000399b0) status_small_pane_t1

0xe127,	// (0x000399ca) status_small_wait_pane_ParamLimits

0xe127,	// (0x000399ca) status_small_wait_pane

0xdf42,	// (0x000397e5) aid_levels_signal_ParamLimits

0xdf42,	// (0x000397e5) aid_levels_signal

0xdf53,	// (0x000397f6) signal_pane_g1_ParamLimits

0xdf53,	// (0x000397f6) signal_pane_g1

0xdf69,	// (0x0003980c) signal_pane_g2_ParamLimits

0xdf69,	// (0x0003980c) signal_pane_g2

0x0003,

0xf70d,	// (0x0003afb0) signal_pane_g_ParamLimits

0xf70d,	// (0x0003afb0) signal_pane_g

0x85ef,	// (0x00033e92) context_pane_g1

0xdb24,	// (0x000393c7) title_pane_g1

0xdb4e,	// (0x000393f1) title_pane_t1

0x77ad,	// (0x00033050) title_pane_t2

0x77d3,	// (0x00033076) title_pane_t3

0x0002,

0xf557,	// (0x0003adfa) title_pane_t

0xe41d,	// (0x00039cc0) aid_levels_battery_ParamLimits

0xe41d,	// (0x00039cc0) aid_levels_battery

0xe430,	// (0x00039cd3) battery_pane_g1_ParamLimits

0xe430,	// (0x00039cd3) battery_pane_g1

0xe445,	// (0x00039ce8) battery_pane_g2_ParamLimits

0xe445,	// (0x00039ce8) battery_pane_g2

0x0001,

0xf7b0,	// (0x0003b053) battery_pane_g_ParamLimits

0xf7b0,	// (0x0003b053) battery_pane_g

0xe5a1,	// (0x00039e44) uni_indicator_pane_g1

0xe5b7,	// (0x00039e5a) uni_indicator_pane_g2

0xe5cd,	// (0x00039e70) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0003b1c4) uni_indicator_pane_g

0x7f7e,	// (0x00033821) navi_icon_pane_ParamLimits

0x7f7e,	// (0x00033821) navi_icon_pane

0x7651,	// (0x00032ef4) navi_midp_pane

0x7651,	// (0x00032ef4) navi_navi_pane

0x7f7e,	// (0x00033821) navi_text_pane_ParamLimits

0x7f7e,	// (0x00033821) navi_text_pane

0x7492,	// (0x00032d35) status_small_wait_pane_g1

0x7b72,	// (0x00033415) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0003b1bf) status_small_wait_pane_g

0xb841,	// (0x000370e4) navi_navi_icon_text_pane

0xb849,	// (0x000370ec) navi_navi_pane_g1_ParamLimits

0xb849,	// (0x000370ec) navi_navi_pane_g1

0xb85b,	// (0x000370fe) navi_navi_pane_g2_ParamLimits

0xb85b,	// (0x000370fe) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0003b18d) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0003b18d) navi_navi_pane_g

0xb86d,	// (0x00037110) navi_navi_tabs_pane

0xb841,	// (0x000370e4) navi_navi_text_pane

0xb841,	// (0x000370e4) navi_navi_volume_pane

0xb81d,	// (0x000370c0) navi_text_pane_t1

0xb811,	// (0x000370b4) navi_icon_pane_g1

0xb765,	// (0x00037008) navi_navi_text_pane_t1

0x94b8,	// (0x00034d5b) navi_navi_volume_pane_g1

0x94c0,	// (0x00034d63) volume_small_pane

0xe4ee,	// (0x00039d91) navi_navi_icon_text_pane_g1

0xe4f6,	// (0x00039d99) navi_navi_icon_text_pane_t1

0xb31f,	// (0x00036bc2) navi_tabs_2_long_pane

0xb31f,	// (0x00036bc2) navi_tabs_2_pane

0xb31f,	// (0x00036bc2) navi_tabs_3_long_pane

0xb31f,	// (0x00036bc2) navi_tabs_3_pane

0xb31f,	// (0x00036bc2) navi_tabs_4_pane

0x9498,	// (0x00034d3b) tabs_2_active_pane_ParamLimits

0x9498,	// (0x00034d3b) tabs_2_active_pane

0x94a8,	// (0x00034d4b) tabs_2_passive_pane_ParamLimits

0x94a8,	// (0x00034d4b) tabs_2_passive_pane

0x9466,	// (0x00034d09) tabs_3_active_pane_ParamLimits

0x9466,	// (0x00034d09) tabs_3_active_pane

0x9476,	// (0x00034d19) tabs_3_passive_pane_ParamLimits

0x9476,	// (0x00034d19) tabs_3_passive_pane

0x9487,	// (0x00034d2a) tabs_3_passive_pane_cp_ParamLimits

0x9487,	// (0x00034d2a) tabs_3_passive_pane_cp

0x9422,	// (0x00034cc5) tabs_4_active_pane_ParamLimits

0x9422,	// (0x00034cc5) tabs_4_active_pane

0x9433,	// (0x00034cd6) tabs_4_passive_pane_ParamLimits

0x9433,	// (0x00034cd6) tabs_4_passive_pane

0x9444,	// (0x00034ce7) tabs_4_passive_pane_cp_ParamLimits

0x9444,	// (0x00034ce7) tabs_4_passive_pane_cp

0x9455,	// (0x00034cf8) tabs_4_passive_pane_cp2_ParamLimits

0x9455,	// (0x00034cf8) tabs_4_passive_pane_cp2

0x9402,	// (0x00034ca5) tabs_2_long_active_pane_ParamLimits

0x9402,	// (0x00034ca5) tabs_2_long_active_pane

0x9412,	// (0x00034cb5) tabs_2_long_passive_pane_ParamLimits

0x9412,	// (0x00034cb5) tabs_2_long_passive_pane

0x93cd,	// (0x00034c70) tabs_3_long_active_pane_ParamLimits

0x93cd,	// (0x00034c70) tabs_3_long_active_pane

0x93de,	// (0x00034c81) tabs_3_long_passive_pane_ParamLimits

0x93de,	// (0x00034c81) tabs_3_long_passive_pane

0x93f1,	// (0x00034c94) tabs_3_long_passive_pane_cp_ParamLimits

0x93f1,	// (0x00034c94) tabs_3_long_passive_pane_cp

0x9373,	// (0x00034c16) volume_small_pane_g1

0x937c,	// (0x00034c1f) volume_small_pane_g2

0x9385,	// (0x00034c28) volume_small_pane_g3

0x938e,	// (0x00034c31) volume_small_pane_g4

0x9397,	// (0x00034c3a) volume_small_pane_g5

0x93a0,	// (0x00034c43) volume_small_pane_g6

0x93a9,	// (0x00034c4c) volume_small_pane_g7

0x93b2,	// (0x00034c55) volume_small_pane_g8

0x93bb,	// (0x00034c5e) volume_small_pane_g9

0x93c4,	// (0x00034c67) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0003b159) volume_small_pane_g

0x77e5,	// (0x00033088) bg_active_tab_pane_cp2_ParamLimits

0x77e5,	// (0x00033088) bg_active_tab_pane_cp2

0x77f3,	// (0x00033096) tabs_3_active_pane_g1

0xdbb6,	// (0x00039459) tabs_3_active_pane_t1

0x77e5,	// (0x00033088) bg_passive_tab_pane_cp2_ParamLimits

0x77e5,	// (0x00033088) bg_passive_tab_pane_cp2

0x77f3,	// (0x00033096) tabs_3_passive_pane_g1

0xdbb6,	// (0x00039459) tabs_3_passive_pane_t1

0x77e5,	// (0x00033088) bg_active_tab_pane_cp3_ParamLimits

0x77e5,	// (0x00033088) bg_active_tab_pane_cp3

0xdbc8,	// (0x0003946b) tabs_4_active_pane_g1

0xdbd0,	// (0x00039473) tabs_4_active_pane_t1

0x77e5,	// (0x00033088) bg_passive_tab_pane_cp3_ParamLimits

0x77e5,	// (0x00033088) bg_passive_tab_pane_cp3

0xdbc8,	// (0x0003946b) tabs_4_1_passive_pane_g1

0xdbd0,	// (0x00039473) tabs_4_1_passive_pane_t1

0x8db4,	// (0x00034657) list_highlight_pane_cp2

0xe622,	// (0x00039ec5) list_set_pane_ParamLimits

0xe622,	// (0x00039ec5) list_set_pane

0xe6b0,	// (0x00039f53) main_pane_set_t1_ParamLimits

0xe6b0,	// (0x00039f53) main_pane_set_t1

0xe6d0,	// (0x00039f73) main_pane_set_t2_ParamLimits

0xe6d0,	// (0x00039f73) main_pane_set_t2

0xe6e2,	// (0x00039f85) main_pane_set_t3_ParamLimits

0xe6e2,	// (0x00039f85) main_pane_set_t3

0xe6f4,	// (0x00039f97) main_pane_set_t4_ParamLimits

0xe6f4,	// (0x00039f97) main_pane_set_t4

0x0003,

0xf986,	// (0x0003b229) main_pane_set_t_ParamLimits

0xf986,	// (0x0003b229) main_pane_set_t

0xe706,	// (0x00039fa9) setting_code_pane

0xe70e,	// (0x00039fb1) setting_slider_graphic_pane

0xe70e,	// (0x00039fb1) setting_slider_pane

0xe70e,	// (0x00039fb1) setting_text_pane

0xe70e,	// (0x00039fb1) setting_volume_pane

0x77fb,	// (0x0003309e) volume_set_pane

0x77e5,	// (0x00033088) bg_set_opt_pane_cp

0x7803,	// (0x000330a6) setting_slider_pane_t1

0x7819,	// (0x000330bc) setting_slider_pane_t2

0x7832,	// (0x000330d5) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003ae01) setting_slider_pane_t

0x7849,	// (0x000330ec) slider_set_pane

0x7651,	// (0x00032ef4) bg_set_opt_pane_cp2

0x785f,	// (0x00033102) setting_slider_graphic_pane_g1

0x7868,	// (0x0003310b) setting_slider_graphic_pane_t1

0x7877,	// (0x0003311a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003ae08) setting_slider_graphic_pane_t

0x7886,	// (0x00033129) slider_set_pane_cp

0x7651,	// (0x00032ef4) input_focus_pane_cp1

0xbc8e,	// (0x00037531) list_set_text_pane

0x7492,	// (0x00032d35) setting_text_pane_g1

0x7651,	// (0x00032ef4) input_focus_pane_cp2

0x7492,	// (0x00032d35) setting_code_pane_g1

0x788e,	// (0x00033131) setting_code_pane_t1

0x666b,	// (0x00031f0e) set_text_pane_t1_ParamLimits

0x666b,	// (0x00031f0e) set_text_pane_t1

0x7f2d,	// (0x000337d0) set_opt_bg_pane_g1

0x7f35,	// (0x000337d8) set_opt_bg_pane_g2

0xe5e2,	// (0x00039e85) set_opt_bg_pane_g3

0x7f45,	// (0x000337e8) set_opt_bg_pane_g4

0x7f4d,	// (0x000337f0) set_opt_bg_pane_g5

0x7f55,	// (0x000337f8) set_opt_bg_pane_g6

0xe5ea,	// (0x00039e8d) set_opt_bg_pane_g7

0xe5f2,	// (0x00039e95) set_opt_bg_pane_g8

0xe5fa,	// (0x00039e9d) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0003b216) set_opt_bg_pane_g

0xbc81,	// (0x00037524) slider_set_pane_g1

0x952d,	// (0x00034dd0) slider_set_pane_g2

0x0006,

0xf964,	// (0x0003b207) slider_set_pane_g

0x94c9,	// (0x00034d6c) volume_set_pane_g1

0x94d1,	// (0x00034d74) volume_set_pane_g2

0x94d9,	// (0x00034d7c) volume_set_pane_g3

0x94e1,	// (0x00034d84) volume_set_pane_g4

0x94e9,	// (0x00034d8c) volume_set_pane_g5

0x94f1,	// (0x00034d94) volume_set_pane_g6

0x94f9,	// (0x00034d9c) volume_set_pane_g7

0x9501,	// (0x00034da4) volume_set_pane_g8

0x9509,	// (0x00034dac) volume_set_pane_g9

0x9511,	// (0x00034db4) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0003b1df) volume_set_pane_g

0xdbe2,	// (0x00039485) indicator_pane_ParamLimits

0xdbe2,	// (0x00039485) indicator_pane

0xdbee,	// (0x00039491) main_idle_pane_g2_ParamLimits

0xdbee,	// (0x00039491) main_idle_pane_g2

0xdc12,	// (0x000394b5) main_pane_idle_g1_ParamLimits

0xdc12,	// (0x000394b5) main_pane_idle_g1

0x789c,	// (0x0003313f) popup_clock_digital_analogue_window_ParamLimits

0x789c,	// (0x0003313f) popup_clock_digital_analogue_window

0xdc1f,	// (0x000394c2) soft_indicator_pane_ParamLimits

0xdc1f,	// (0x000394c2) soft_indicator_pane

0xdc2b,	// (0x000394ce) wallpaper_pane_ParamLimits

0xdc2b,	// (0x000394ce) wallpaper_pane

0x7492,	// (0x00032d35) wallpaper_pane_g1

0xdc37,	// (0x000394da) indicator_pane_g1_ParamLimits

0xdc37,	// (0x000394da) indicator_pane_g1

0xbdb6,	// (0x00037659) navi_navi_icon_text_pane_srt_g1

0x78ca,	// (0x0003316d) soft_indicator_pane_t1

0x78e4,	// (0x00033187) aid_ps_area_pane

0xdc43,	// (0x000394e6) aid_ps_clock_pane

0x78f5,	// (0x00033198) aid_ps_indicator_pane

0x7901,	// (0x000331a4) indicator_ps_pane_ParamLimits

0x7901,	// (0x000331a4) indicator_ps_pane

0x7910,	// (0x000331b3) power_save_pane_g1_ParamLimits

0x7910,	// (0x000331b3) power_save_pane_g1

0x791c,	// (0x000331bf) power_save_pane_g2_ParamLimits

0x791c,	// (0x000331bf) power_save_pane_g2

0x749c,	// (0x00032d3f) aid_navinavi_width_pane

0x78e4,	// (0x00033187) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003ae0d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003ae0d) power_save_pane_g

0x792a,	// (0x000331cd) power_save_pane_t1_ParamLimits

0x792a,	// (0x000331cd) power_save_pane_t1

0xdc43,	// (0x000394e6) aid_ps_clock_pane_ParamLimits

0x78f5,	// (0x00033198) aid_ps_indicator_pane_ParamLimits

0x793c,	// (0x000331df) power_save_pane_t4_ParamLimits

0x793c,	// (0x000331df) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003ae12) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003ae12) power_save_pane_t

0x7966,	// (0x00033209) power_save_t3_ParamLimits

0x7966,	// (0x00033209) power_save_t3

0x7951,	// (0x000331f4) power_save_t2_ParamLimits

0x7951,	// (0x000331f4) power_save_t2

0x797b,	// (0x0003321e) indicator_ps_pane_g1

0xdc4f,	// (0x000394f2) ai_gene_pane_ParamLimits

0xdc4f,	// (0x000394f2) ai_gene_pane

0xdc5b,	// (0x000394fe) ai_links_pane_ParamLimits

0xdc5b,	// (0x000394fe) ai_links_pane

0xdc67,	// (0x0003950a) indicator_pane_cp1_ParamLimits

0xdc67,	// (0x0003950a) indicator_pane_cp1

0xdc73,	// (0x00039516) main_pane_idle_g1_cp_ParamLimits

0xdc73,	// (0x00039516) main_pane_idle_g1_cp

0x7984,	// (0x00033227) popup_ai_links_title_window

0xdc7f,	// (0x00039522) soft_indicator_pane_cp1_ParamLimits

0xdc7f,	// (0x00039522) soft_indicator_pane_cp1

0xbad7,	// (0x0003737a) ai_links_pane_g1

0xbae0,	// (0x00037383) grid_ai_links_pane

0xe598,	// (0x00039e3b) ai_gene_pane_1

0xbac5,	// (0x00037368) ai_gene_pane_2

0xbace,	// (0x00037371) list_highlight_pane_cp4

0xe57c,	// (0x00039e1f) cell_ai_link_pane_ParamLimits

0xe57c,	// (0x00039e1f) cell_ai_link_pane

0xbabd,	// (0x00037360) cell_ai_link_pane_g1

0x7b72,	// (0x00033415) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0003b1ba) cell_ai_link_pane_g

0x7651,	// (0x00032ef4) grid_highlight_cp2

0x7651,	// (0x00032ef4) bg_popup_sub_pane_cp1

0x799b,	// (0x0003323e) popup_ai_links_title_window_t1

0xba0f,	// (0x000372b2) ai_gene_pane_1_g1_ParamLimits

0xba0f,	// (0x000372b2) ai_gene_pane_1_g1

0xba1b,	// (0x000372be) ai_gene_pane_1_g2_ParamLimits

0xba1b,	// (0x000372be) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0003b1b0) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0003b1b0) ai_gene_pane_1_g

0xba28,	// (0x000372cb) ai_gene_pane_1_t1_ParamLimits

0xba28,	// (0x000372cb) ai_gene_pane_1_t1

0xba5c,	// (0x000372ff) grid_ai_soft_ind_pane

0xb9fa,	// (0x0003729d) ai_gene_pane_2_t1_ParamLimits

0xb9fa,	// (0x0003729d) ai_gene_pane_2_t1

0xdc8b,	// (0x0003952e) main_pane_empty_t1_ParamLimits

0xdc8b,	// (0x0003952e) main_pane_empty_t1

0xdca8,	// (0x0003954b) main_pane_empty_t2_ParamLimits

0xdca8,	// (0x0003954b) main_pane_empty_t2

0xdcc0,	// (0x00039563) main_pane_empty_t3_ParamLimits

0xdcc0,	// (0x00039563) main_pane_empty_t3

0xdcd3,	// (0x00039576) main_pane_empty_t4_ParamLimits

0xdcd3,	// (0x00039576) main_pane_empty_t4

0xdce6,	// (0x00039589) main_pane_empty_t5_ParamLimits

0xdce6,	// (0x00039589) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003ae17) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003ae17) main_pane_empty_t

0x7f7e,	// (0x00033821) bg_popup_window_pane_ParamLimits

0x7f7e,	// (0x00033821) bg_popup_window_pane

0xb774,	// (0x00037017) find_popup_pane_cp2_ParamLimits

0xb774,	// (0x00037017) find_popup_pane_cp2

0xb780,	// (0x00037023) heading_pane_ParamLimits

0xb780,	// (0x00037023) heading_pane

0x7651,	// (0x00032ef4) bg_popup_sub_pane

0xe510,	// (0x00039db3) bg_popup_window_pane_g1_ParamLimits

0xe510,	// (0x00039db3) bg_popup_window_pane_g1

0xe51c,	// (0x00039dbf) bg_popup_window_pane_g2_ParamLimits

0xe51c,	// (0x00039dbf) bg_popup_window_pane_g2

0xe528,	// (0x00039dcb) bg_popup_window_pane_g3_ParamLimits

0xe528,	// (0x00039dcb) bg_popup_window_pane_g3

0xe534,	// (0x00039dd7) bg_popup_window_pane_g4_ParamLimits

0xe534,	// (0x00039dd7) bg_popup_window_pane_g4

0xe540,	// (0x00039de3) bg_popup_window_pane_g5_ParamLimits

0xe540,	// (0x00039de3) bg_popup_window_pane_g5

0xe54c,	// (0x00039def) bg_popup_window_pane_g6_ParamLimits

0xe54c,	// (0x00039def) bg_popup_window_pane_g6

0xe558,	// (0x00039dfb) bg_popup_window_pane_g7_ParamLimits

0xe558,	// (0x00039dfb) bg_popup_window_pane_g7

0xe564,	// (0x00039e07) bg_popup_window_pane_g8_ParamLimits

0xe564,	// (0x00039e07) bg_popup_window_pane_g8

0xe570,	// (0x00039e13) bg_popup_window_pane_g9_ParamLimits

0xe570,	// (0x00039e13) bg_popup_window_pane_g9

0xb759,	// (0x00036ffc) bg_popup_window_pane_g10_ParamLimits

0xb759,	// (0x00036ffc) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0003b178) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0003b178) bg_popup_window_pane_g

0xb710,	// (0x00036fb3) bg_popup_heading_pane_ParamLimits

0xb710,	// (0x00036fb3) bg_popup_heading_pane

0x95fa,	// (0x00034e9d) tabs_4_passive_pane_cp_srt_ParamLimits

0x95fa,	// (0x00034e9d) tabs_4_passive_pane_cp_srt

0x960c,	// (0x00034eaf) tabs_4_passive_pane_srt_ParamLimits

0xb724,	// (0x00036fc7) heading_pane_g2

0x960c,	// (0x00034eaf) tabs_4_passive_pane_srt

0x8db4,	// (0x00034657) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8db4,	// (0x00034657) bg_passive_tab_pane_cp3_srt

0xb72c,	// (0x00036fcf) heading_pane_t1_ParamLimits

0xb72c,	// (0x00036fcf) heading_pane_t1

0xb743,	// (0x00036fe6) heading_pane_t2_ParamLimits

0xb743,	// (0x00036fe6) heading_pane_t2

0x0001,

0xf8d0,	// (0x0003b173) heading_pane_t_ParamLimits

0xf8d0,	// (0x0003b173) heading_pane_t

0xb29f,	// (0x00036b42) bg_popup_heading_pane_g1

0xb330,	// (0x00036bd3) bg_popup_heading_pane_g2

0xb338,	// (0x00036bdb) bg_popup_heading_pane_g3

0xb340,	// (0x00036be3) bg_popup_heading_pane_g4

0xb348,	// (0x00036beb) bg_popup_heading_pane_g5

0xb350,	// (0x00036bf3) bg_popup_heading_pane_g6

0xb358,	// (0x00036bfb) bg_popup_heading_pane_g7

0xb360,	// (0x00036c03) bg_popup_heading_pane_g8

0xb368,	// (0x00036c0b) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0003b12f) bg_popup_heading_pane_g

0xab68,	// (0x0003640b) bg_popup_sub_pane_g1

0xab70,	// (0x00036413) bg_popup_sub_pane_g2

0xab78,	// (0x0003641b) bg_popup_sub_pane_g3

0xab80,	// (0x00036423) bg_popup_sub_pane_g4

0xab88,	// (0x0003642b) bg_popup_sub_pane_g5

0xab90,	// (0x00036433) bg_popup_sub_pane_g6

0xab98,	// (0x0003643b) bg_popup_sub_pane_g7

0xaba0,	// (0x00036443) bg_popup_sub_pane_g8

0xaba8,	// (0x0003644b) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0003b109) bg_popup_sub_pane_g

0x79aa,	// (0x0003324d) bg_popup_window_pane_cp5_ParamLimits

0x79aa,	// (0x0003324d) bg_popup_window_pane_cp5

0x79c6,	// (0x00033269) popup_note_window_g1_ParamLimits

0x79c6,	// (0x00033269) popup_note_window_g1

0x79d2,	// (0x00033275) popup_note_window_t1_ParamLimits

0x79d2,	// (0x00033275) popup_note_window_t1

0x79e8,	// (0x0003328b) popup_note_window_t2_ParamLimits

0x79e8,	// (0x0003328b) popup_note_window_t2

0x79fe,	// (0x000332a1) popup_note_window_t3_ParamLimits

0x79fe,	// (0x000332a1) popup_note_window_t3

0x7a14,	// (0x000332b7) popup_note_window_t4_ParamLimits

0x7a14,	// (0x000332b7) popup_note_window_t4

0x7a3c,	// (0x000332df) popup_note_window_t5_ParamLimits

0x7a3c,	// (0x000332df) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003ae22) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003ae22) popup_note_window_t

0x7a86,	// (0x00033329) bg_popup_window_pane_cp6_ParamLimits

0x7a86,	// (0x00033329) bg_popup_window_pane_cp6

0xb21b,	// (0x00036abe) popup_note_image_window_g1_ParamLimits

0xb21b,	// (0x00036abe) popup_note_image_window_g1

0xb227,	// (0x00036aca) popup_note_image_window_g2_ParamLimits

0xb227,	// (0x00036aca) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0003b0fd) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0003b0fd) popup_note_image_window_g

0xb240,	// (0x00036ae3) popup_note_image_window_t1_ParamLimits

0xb240,	// (0x00036ae3) popup_note_image_window_t1

0xb259,	// (0x00036afc) popup_note_image_window_t2_ParamLimits

0xb259,	// (0x00036afc) popup_note_image_window_t2

0xb272,	// (0x00036b15) popup_note_image_window_t3_ParamLimits

0xb272,	// (0x00036b15) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0003b102) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0003b102) popup_note_image_window_t

0xb106,	// (0x000369a9) bg_popup_window_pane_cp7_ParamLimits

0xb106,	// (0x000369a9) bg_popup_window_pane_cp7

0xb136,	// (0x000369d9) popup_note_wait_window_g1_ParamLimits

0xb136,	// (0x000369d9) popup_note_wait_window_g1

0xb142,	// (0x000369e5) popup_note_wait_window_g2_ParamLimits

0xb142,	// (0x000369e5) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0003b0eb) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0003b0eb) popup_note_wait_window_g

0xb15a,	// (0x000369fd) popup_note_wait_window_t1_ParamLimits

0xb15a,	// (0x000369fd) popup_note_wait_window_t1

0xb181,	// (0x00036a24) popup_note_wait_window_t2_ParamLimits

0xb181,	// (0x00036a24) popup_note_wait_window_t2

0xb19e,	// (0x00036a41) popup_note_wait_window_t3_ParamLimits

0xb19e,	// (0x00036a41) popup_note_wait_window_t3

0xb1b1,	// (0x00036a54) popup_note_wait_window_t4_ParamLimits

0xb1b1,	// (0x00036a54) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0003b0f2) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0003b0f2) popup_note_wait_window_t

0xb1d6,	// (0x00036a79) wait_bar_pane_ParamLimits

0xb1d6,	// (0x00036a79) wait_bar_pane

0x7651,	// (0x00032ef4) wait_anim_pane

0x7651,	// (0x00032ef4) wait_border_pane

0x7492,	// (0x00032d35) wait_anim_pane_g1

0x7492,	// (0x00032d35) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0003afab) wait_anim_pane_g

0xb0b6,	// (0x00036959) wait_border_pane_g1

0xb0bf,	// (0x00036962) wait_border_pane_g2

0xb0c8,	// (0x0003696b) wait_border_pane_g3

0x0002,

0xf841,	// (0x0003b0e4) wait_border_pane_g

0xaf26,	// (0x000367c9) bg_popup_window_pane_cp16_ParamLimits

0xaf26,	// (0x000367c9) bg_popup_window_pane_cp16

0xb026,	// (0x000368c9) indicator_popup_pane_cp4_ParamLimits

0xb026,	// (0x000368c9) indicator_popup_pane_cp4

0xb03a,	// (0x000368dd) popup_query_data_window_t1_ParamLimits

0xb03a,	// (0x000368dd) popup_query_data_window_t1

0xb04c,	// (0x000368ef) popup_query_data_window_t2_ParamLimits

0xb04c,	// (0x000368ef) popup_query_data_window_t2

0xb065,	// (0x00036908) popup_query_data_window_t3_ParamLimits

0xb065,	// (0x00036908) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0003b0dd) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0003b0dd) popup_query_data_window_t

0xb07f,	// (0x00036922) query_popup_data_pane_ParamLimits

0xb07f,	// (0x00036922) query_popup_data_pane

0xb093,	// (0x00036936) query_popup_data_pane_cp1_ParamLimits

0xb093,	// (0x00036936) query_popup_data_pane_cp1

0xaf26,	// (0x000367c9) bg_popup_window_pane_cp10_ParamLimits

0xaf26,	// (0x000367c9) bg_popup_window_pane_cp10

0xaf58,	// (0x000367fb) indicator_popup_pane_ParamLimits

0xaf58,	// (0x000367fb) indicator_popup_pane

0xaf7a,	// (0x0003681d) popup_query_code_window_t1_ParamLimits

0xaf7a,	// (0x0003681d) popup_query_code_window_t1

0xaf94,	// (0x00036837) popup_query_code_window_t2_ParamLimits

0xaf94,	// (0x00036837) popup_query_code_window_t2

0xafdd,	// (0x00036880) popup_query_code_window_t3_ParamLimits

0xafdd,	// (0x00036880) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0003b0d6) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0003b0d6) popup_query_code_window_t

0xb00c,	// (0x000368af) query_popup_pane_ParamLimits

0xb00c,	// (0x000368af) query_popup_pane

0x7a86,	// (0x00033329) bg_popup_window_pane_cp15_ParamLimits

0x7a86,	// (0x00033329) bg_popup_window_pane_cp15

0x7aa4,	// (0x00033347) indicator_popup_pane_cp1_ParamLimits

0x7aa4,	// (0x00033347) indicator_popup_pane_cp1

0x7ab7,	// (0x0003335a) indicator_popup_pane_cp2_ParamLimits

0x7ab7,	// (0x0003335a) indicator_popup_pane_cp2

0x7aca,	// (0x0003336d) popup_query_data_code_window_g1_ParamLimits

0x7aca,	// (0x0003336d) popup_query_data_code_window_g1

0x7add,	// (0x00033380) popup_query_data_code_window_t1_ParamLimits

0x7add,	// (0x00033380) popup_query_data_code_window_t1

0x7aef,	// (0x00033392) popup_query_data_code_window_t2_ParamLimits

0x7aef,	// (0x00033392) popup_query_data_code_window_t2

0x7b01,	// (0x000333a4) popup_query_data_code_window_t3_ParamLimits

0x7b01,	// (0x000333a4) popup_query_data_code_window_t3

0x7b17,	// (0x000333ba) popup_query_data_code_window_t4_ParamLimits

0x7b17,	// (0x000333ba) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003ae2d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003ae2d) popup_query_data_code_window_t

0x8a5c,	// (0x000342ff) list_single_midp_graphic_pane_g3

0x7b2f,	// (0x000333d2) query_popup_data_pane_cp2_ParamLimits

0x7b42,	// (0x000333e5) query_popup_pane_cp2_ParamLimits

0x7b42,	// (0x000333e5) query_popup_pane_cp2

0x7651,	// (0x00032ef4) bg_popup_window_pane_cp11

0xaf12,	// (0x000367b5) heading_pane_cp5

0x7bce,	// (0x00033471) listscroll_popup_info_pane

0x7651,	// (0x00032ef4) input_focus_pane_cp3

0x7b55,	// (0x000333f8) query_popup_pane_t1

0x7b63,	// (0x00033406) list_popup_info_pane_ParamLimits

0x7b63,	// (0x00033406) list_popup_info_pane

0x7b72,	// (0x00033415) listscroll_popup_info_pane_g1

0x7b7a,	// (0x0003341d) scroll_pane_cp7

0x7b82,	// (0x00033425) popup_info_list_pane_t1_ParamLimits

0x7b82,	// (0x00033425) popup_info_list_pane_t1

0x7b9c,	// (0x0003343f) popup_info_list_pane_t2_ParamLimits

0x7b9c,	// (0x0003343f) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003ae36) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003ae36) popup_info_list_pane_t

0x7651,	// (0x00032ef4) bg_popup_window_pane_cp12

0xbdd0,	// (0x00037673) find_popup_pane

0x77e5,	// (0x00033088) bg_popup_window_pane_cp3

0x7bb6,	// (0x00033459) heading_pane_cp3

0x7bc2,	// (0x00033465) listscroll_popup_graphic_pane

0x7651,	// (0x00032ef4) bg_popup_window_pane_cp4

0xdd49,	// (0x000395ec) heading_pane_cp4

0x7bce,	// (0x00033471) listscroll_popup_colour_pane

0x7bd6,	// (0x00033479) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7bd6,	// (0x00033479) cell_large_graphic_colour_none_popup_pane

0xdd51,	// (0x000395f4) grid_large_graphic_colour_popup_pane_ParamLimits

0xdd51,	// (0x000395f4) grid_large_graphic_colour_popup_pane

0xdd6d,	// (0x00039610) listscroll_popup_colour_pane_g1_ParamLimits

0xdd6d,	// (0x00039610) listscroll_popup_colour_pane_g1

0xdd84,	// (0x00039627) listscroll_popup_colour_pane_g2_ParamLimits

0xdd84,	// (0x00039627) listscroll_popup_colour_pane_g2

0x7be6,	// (0x00033489) listscroll_popup_colour_pane_g3_ParamLimits

0x7be6,	// (0x00033489) listscroll_popup_colour_pane_g3

0xdd98,	// (0x0003963b) listscroll_popup_colour_pane_g4_ParamLimits

0xdd98,	// (0x0003963b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003ae3b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003ae3b) listscroll_popup_colour_pane_g

0x7bf6,	// (0x00033499) scroll_pane_cp6_ParamLimits

0x7bf6,	// (0x00033499) scroll_pane_cp6

0xdda7,	// (0x0003964a) cell_large_graphic_colour_popup_pane_ParamLimits

0xdda7,	// (0x0003964a) cell_large_graphic_colour_popup_pane

0x7c08,	// (0x000334ab) cell_large_graphic_colour_none_popup_pane_t1

0x7651,	// (0x00032ef4) grid_highlight_pane_cp5

0x7c17,	// (0x000334ba) cell_large_graphic_colour_popup_pane_g1

0x7c1f,	// (0x000334c2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003ae44) cell_large_graphic_colour_popup_pane_g

0x7c27,	// (0x000334ca) cell_large_graphic_colour_popup_pane_g2_copy1

0x7c30,	// (0x000334d3) grid_highlight_pane_cp4

0x7c38,	// (0x000334db) bg_popup_window_pane_cp8_ParamLimits

0x7c38,	// (0x000334db) bg_popup_window_pane_cp8

0x7c53,	// (0x000334f6) popup_snote_single_text_window_g1_ParamLimits

0x7c53,	// (0x000334f6) popup_snote_single_text_window_g1

0x7c65,	// (0x00033508) popup_snote_single_text_window_t1_ParamLimits

0x7c65,	// (0x00033508) popup_snote_single_text_window_t1

0x7c78,	// (0x0003351b) popup_snote_single_text_window_t2_ParamLimits

0x7c78,	// (0x0003351b) popup_snote_single_text_window_t2

0x7c8b,	// (0x0003352e) popup_snote_single_text_window_t3_ParamLimits

0x7c8b,	// (0x0003352e) popup_snote_single_text_window_t3

0x7cc4,	// (0x00033567) popup_snote_single_text_window_t4_ParamLimits

0x7cc4,	// (0x00033567) popup_snote_single_text_window_t4

0x7cf8,	// (0x0003359b) popup_snote_single_text_window_t5_ParamLimits

0x7cf8,	// (0x0003359b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003ae49) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003ae49) popup_snote_single_text_window_t

0x7d27,	// (0x000335ca) bg_popup_window_pane_cp9_ParamLimits

0x7d27,	// (0x000335ca) bg_popup_window_pane_cp9

0x7c53,	// (0x000334f6) popup_snote_single_graphic_window_g1_ParamLimits

0x7c53,	// (0x000334f6) popup_snote_single_graphic_window_g1

0x7d35,	// (0x000335d8) popup_snote_single_graphic_window_g2_ParamLimits

0x7d35,	// (0x000335d8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003ae54) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003ae54) popup_snote_single_graphic_window_g

0x7d41,	// (0x000335e4) popup_snote_single_graphic_window_t1_ParamLimits

0x7d41,	// (0x000335e4) popup_snote_single_graphic_window_t1

0x7d54,	// (0x000335f7) popup_snote_single_graphic_window_t2_ParamLimits

0x7d54,	// (0x000335f7) popup_snote_single_graphic_window_t2

0x7c8b,	// (0x0003352e) popup_snote_single_graphic_window_t3_ParamLimits

0x7c8b,	// (0x0003352e) popup_snote_single_graphic_window_t3

0x7cc4,	// (0x00033567) popup_snote_single_graphic_window_t4_ParamLimits

0x7cc4,	// (0x00033567) popup_snote_single_graphic_window_t4

0x7cf8,	// (0x0003359b) popup_snote_single_graphic_window_t5_ParamLimits

0x7cf8,	// (0x0003359b) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003ae59) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003ae59) popup_snote_single_graphic_window_t

0xe7d5,	// (0x0003a078) grid_graphic_popup_pane_ParamLimits

0xe7d5,	// (0x0003a078) grid_graphic_popup_pane

0xe7f8,	// (0x0003a09b) listscroll_popup_graphic_pane_g1_ParamLimits

0xe7f8,	// (0x0003a09b) listscroll_popup_graphic_pane_g1

0xe80c,	// (0x0003a0af) listscroll_popup_graphic_pane_g2_ParamLimits

0xe80c,	// (0x0003a0af) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0003b253) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0003b253) listscroll_popup_graphic_pane_g

0xbd88,	// (0x0003762b) scroll_pane_cp5

0xe78e,	// (0x0003a031) cell_graphic_popup_pane_ParamLimits

0xe78e,	// (0x0003a031) cell_graphic_popup_pane

0xbd53,	// (0x000375f6) cell_graphic_popup_pane_g1

0xbd5b,	// (0x000375fe) cell_graphic_popup_pane_g2

0x7c27,	// (0x000334ca) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0003b24c) cell_graphic_popup_pane_g

0xbd64,	// (0x00037607) cell_graphic_popup_pane_t2

0x7c30,	// (0x000334d3) grid_highlight_pane_cp3

0x7d79,	// (0x0003361c) list_gen_pane_ParamLimits

0x7d79,	// (0x0003361c) list_gen_pane

0x7da2,	// (0x00033645) scroll_pane

0xe75f,	// (0x0003a002) bg_list_pane_g1_ParamLimits

0xe75f,	// (0x0003a002) bg_list_pane_g1

0xbd02,	// (0x000375a5) bg_list_pane_g2_ParamLimits

0xbd02,	// (0x000375a5) bg_list_pane_g2

0xbd15,	// (0x000375b8) bg_list_pane_g3_ParamLimits

0xbd15,	// (0x000375b8) bg_list_pane_g3

0xbd27,	// (0x000375ca) bg_list_pane_g4_ParamLimits

0xbd27,	// (0x000375ca) bg_list_pane_g4

0xe776,	// (0x0003a019) bg_list_pane_g5_ParamLimits

0xe776,	// (0x0003a019) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0003b241) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0003b241) bg_list_pane_g

0xe73b,	// (0x00039fde) list_double2_graphic_large_graphic_pane_ParamLimits

0xe73b,	// (0x00039fde) list_double2_graphic_large_graphic_pane

0xe73b,	// (0x00039fde) list_double2_graphic_pane_ParamLimits

0xe73b,	// (0x00039fde) list_double2_graphic_pane

0xe73b,	// (0x00039fde) list_double2_large_graphic_pane_ParamLimits

0xe73b,	// (0x00039fde) list_double2_large_graphic_pane

0xe73b,	// (0x00039fde) list_double2_pane_ParamLimits

0xe73b,	// (0x00039fde) list_double2_pane

0xe73b,	// (0x00039fde) list_double_graphic_heading_pane_ParamLimits

0xe73b,	// (0x00039fde) list_double_graphic_heading_pane

0xe73b,	// (0x00039fde) list_double_graphic_pane_ParamLimits

0xe73b,	// (0x00039fde) list_double_graphic_pane

0xe73b,	// (0x00039fde) list_double_heading_pane_ParamLimits

0xe73b,	// (0x00039fde) list_double_heading_pane

0xe73b,	// (0x00039fde) list_double_large_graphic_pane_ParamLimits

0xe73b,	// (0x00039fde) list_double_large_graphic_pane

0xe73b,	// (0x00039fde) list_double_number_pane_ParamLimits

0xe73b,	// (0x00039fde) list_double_number_pane

0xe73b,	// (0x00039fde) list_double_pane_ParamLimits

0xe73b,	// (0x00039fde) list_double_pane

0xe73b,	// (0x00039fde) list_double_time_pane_ParamLimits

0xe73b,	// (0x00039fde) list_double_time_pane

0xe73b,	// (0x00039fde) list_setting_number_pane_ParamLimits

0xe73b,	// (0x00039fde) list_setting_number_pane

0xe73b,	// (0x00039fde) list_setting_pane_ParamLimits

0xe73b,	// (0x00039fde) list_setting_pane

0x6f39,	// (0x000327dc) list_single_2graphic_pane_ParamLimits

0x6f39,	// (0x000327dc) list_single_2graphic_pane

0x6f39,	// (0x000327dc) list_single_graphic_heading_pane_ParamLimits

0x6f39,	// (0x000327dc) list_single_graphic_heading_pane

0x6f39,	// (0x000327dc) list_single_graphic_pane_ParamLimits

0x6f39,	// (0x000327dc) list_single_graphic_pane

0x6f39,	// (0x000327dc) list_single_heading_pane_ParamLimits

0x6f39,	// (0x000327dc) list_single_heading_pane

0x95c0,	// (0x00034e63) list_single_large_graphic_pane_ParamLimits

0x95c0,	// (0x00034e63) list_single_large_graphic_pane

0x6f39,	// (0x000327dc) list_single_number_heading_pane_ParamLimits

0x6f39,	// (0x000327dc) list_single_number_heading_pane

0x6f39,	// (0x000327dc) list_single_number_pane_ParamLimits

0x6f39,	// (0x000327dc) list_single_number_pane

0x6f39,	// (0x000327dc) list_single_pane_ParamLimits

0x6f39,	// (0x000327dc) list_single_pane

0x7651,	// (0x00032ef4) list_highlight_pane_cp1

0x7dd7,	// (0x0003367a) list_single_pane_g1_ParamLimits

0x7dd7,	// (0x0003367a) list_single_pane_g1

0x7de3,	// (0x00033686) list_single_pane_g2_ParamLimits

0x7de3,	// (0x00033686) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0003ae75) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0003ae75) list_single_pane_g

0x6f0f,	// (0x000327b2) list_single_pane_t1_ParamLimits

0x6f0f,	// (0x000327b2) list_single_pane_t1

0x7dd7,	// (0x0003367a) list_single_number_pane_g1_ParamLimits

0x7dd7,	// (0x0003367a) list_single_number_pane_g1

0x7de3,	// (0x00033686) list_single_number_pane_g2_ParamLimits

0x7de3,	// (0x00033686) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0003ae75) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0003ae75) list_single_number_pane_g

0x6692,	// (0x00031f35) list_single_number_pane_t1_ParamLimits

0x6692,	// (0x00031f35) list_single_number_pane_t1

0x6ece,	// (0x00032771) list_single_number_pane_t2_ParamLimits

0x6ece,	// (0x00032771) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0003b202) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0003b202) list_single_number_pane_t

0x6686,	// (0x00031f29) list_single_graphic_pane_g1_ParamLimits

0x6686,	// (0x00031f29) list_single_graphic_pane_g1

0x7dd7,	// (0x0003367a) list_single_graphic_pane_g2_ParamLimits

0x7dd7,	// (0x0003367a) list_single_graphic_pane_g2

0x7de3,	// (0x00033686) list_single_graphic_pane_g3_ParamLimits

0x7de3,	// (0x00033686) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003ae64) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003ae64) list_single_graphic_pane_g

0x6692,	// (0x00031f35) list_single_graphic_pane_t1_ParamLimits

0x6692,	// (0x00031f35) list_single_graphic_pane_t1

0x66a8,	// (0x00031f4b) list_single_heading_pane_g1_ParamLimits

0x66a8,	// (0x00031f4b) list_single_heading_pane_g1

0x7de3,	// (0x00033686) list_single_heading_pane_g2_ParamLimits

0x7de3,	// (0x00033686) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003ae6b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003ae6b) list_single_heading_pane_g

0x66bb,	// (0x00031f5e) list_single_heading_pane_t1_ParamLimits

0x66bb,	// (0x00031f5e) list_single_heading_pane_t1

0x66d1,	// (0x00031f74) list_single_heading_pane_t2_ParamLimits

0x66d1,	// (0x00031f74) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003ae70) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003ae70) list_single_heading_pane_t

0x7dd7,	// (0x0003367a) list_single_number_heading_pane_g1_ParamLimits

0x7dd7,	// (0x0003367a) list_single_number_heading_pane_g1

0x7de3,	// (0x00033686) list_single_number_heading_pane_g2_ParamLimits

0x7de3,	// (0x00033686) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0003ae75) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0003ae75) list_single_number_heading_pane_g

0x66e3,	// (0x00031f86) list_single_number_heading_pane_t1_ParamLimits

0x66e3,	// (0x00031f86) list_single_number_heading_pane_t1

0x66f9,	// (0x00031f9c) list_single_number_heading_pane_t2_ParamLimits

0x66f9,	// (0x00031f9c) list_single_number_heading_pane_t2

0x670b,	// (0x00031fae) list_single_number_heading_pane_t3_ParamLimits

0x670b,	// (0x00031fae) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0003ae7a) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0003ae7a) list_single_number_heading_pane_t

0x671d,	// (0x00031fc0) list_single_graphic_heading_pane_g1_ParamLimits

0x671d,	// (0x00031fc0) list_single_graphic_heading_pane_g1

0x7def,	// (0x00033692) list_single_graphic_heading_pane_g4_ParamLimits

0x7def,	// (0x00033692) list_single_graphic_heading_pane_g4

0x7de3,	// (0x00033686) list_single_graphic_heading_pane_g5_ParamLimits

0x7de3,	// (0x00033686) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0003ae81) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0003ae81) list_single_graphic_heading_pane_g

0x66e3,	// (0x00031f86) list_single_graphic_heading_pane_t1_ParamLimits

0x66e3,	// (0x00031f86) list_single_graphic_heading_pane_t1

0x6731,	// (0x00031fd4) list_single_graphic_heading_pane_t2_ParamLimits

0x6731,	// (0x00031fd4) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0003ae88) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0003ae88) list_single_graphic_heading_pane_t

0x7dfe,	// (0x000336a1) list_single_large_graphic_pane_g1_ParamLimits

0x7dfe,	// (0x000336a1) list_single_large_graphic_pane_g1

0x7e0a,	// (0x000336ad) list_single_large_graphic_pane_g2_ParamLimits

0x7e0a,	// (0x000336ad) list_single_large_graphic_pane_g2

0x7e16,	// (0x000336b9) list_single_large_graphic_pane_g3_ParamLimits

0x7e16,	// (0x000336b9) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0003ae8d) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0003ae8d) list_single_large_graphic_pane_g

0xb0bf,	// (0x00036962) wait_border_pane_g2_copy1

0x7e22,	// (0x000336c5) list_single_large_graphic_pane_g4_cp2

0x6749,	// (0x00031fec) list_single_large_graphic_pane_t1_ParamLimits

0x6749,	// (0x00031fec) list_single_large_graphic_pane_t1

0x7e2a,	// (0x000336cd) list_double_pane_g1_ParamLimits

0x7e2a,	// (0x000336cd) list_double_pane_g1

0x7e36,	// (0x000336d9) list_double_pane_g2_ParamLimits

0x7e36,	// (0x000336d9) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0003ae94) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0003ae94) list_double_pane_g

0x675f,	// (0x00032002) list_double_pane_t1_ParamLimits

0x675f,	// (0x00032002) list_double_pane_t1

0x6775,	// (0x00032018) list_double_pane_t2_ParamLimits

0x6775,	// (0x00032018) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0003ae99) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0003ae99) list_double_pane_t

0x6787,	// (0x0003202a) list_double2_pane_g1_ParamLimits

0x6787,	// (0x0003202a) list_double2_pane_g1

0x6796,	// (0x00032039) list_double2_pane_g2_ParamLimits

0x6796,	// (0x00032039) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0003ae9e) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0003ae9e) list_double2_pane_g

0x67a2,	// (0x00032045) list_double2_pane_t1_ParamLimits

0x67a2,	// (0x00032045) list_double2_pane_t1

0x67b8,	// (0x0003205b) list_double2_pane_t2_ParamLimits

0x67b8,	// (0x0003205b) list_double2_pane_t2

0x0001,

0xf600,	// (0x0003aea3) list_double2_pane_t_ParamLimits

0xf600,	// (0x0003aea3) list_double2_pane_t

0x7e2a,	// (0x000336cd) list_double_number_pane_g1_ParamLimits

0x7e2a,	// (0x000336cd) list_double_number_pane_g1

0x7e36,	// (0x000336d9) list_double_number_pane_g2_ParamLimits

0x7e36,	// (0x000336d9) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0003ae94) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0003ae94) list_double_number_pane_g

0x67ca,	// (0x0003206d) list_double_number_pane_t1_ParamLimits

0x67ca,	// (0x0003206d) list_double_number_pane_t1

0x67dc,	// (0x0003207f) list_double_number_pane_t2_ParamLimits

0x67dc,	// (0x0003207f) list_double_number_pane_t2

0x67f2,	// (0x00032095) list_double_number_pane_t3_ParamLimits

0x67f2,	// (0x00032095) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0003aea8) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0003aea8) list_double_number_pane_t

0x6804,	// (0x000320a7) list_double_graphic_pane_g1_ParamLimits

0x6804,	// (0x000320a7) list_double_graphic_pane_g1

0x6810,	// (0x000320b3) list_double_graphic_pane_g2_ParamLimits

0x6810,	// (0x000320b3) list_double_graphic_pane_g2

0x681f,	// (0x000320c2) list_double_graphic_pane_g3_ParamLimits

0x681f,	// (0x000320c2) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0003aeaf) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0003aeaf) list_double_graphic_pane_g

0x682b,	// (0x000320ce) list_double_graphic_pane_t1_ParamLimits

0x682b,	// (0x000320ce) list_double_graphic_pane_t1

0x6841,	// (0x000320e4) list_double_graphic_pane_t2_ParamLimits

0x6841,	// (0x000320e4) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0003aeb8) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0003aeb8) list_double_graphic_pane_t

0x6853,	// (0x000320f6) list_double2_graphic_pane_g1_ParamLimits

0x6853,	// (0x000320f6) list_double2_graphic_pane_g1

0x7e4e,	// (0x000336f1) list_double2_graphic_pane_g2_ParamLimits

0x7e4e,	// (0x000336f1) list_double2_graphic_pane_g2

0x7e5a,	// (0x000336fd) list_double2_graphic_pane_g3_ParamLimits

0x7e5a,	// (0x000336fd) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0003aebd) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0003aebd) list_double2_graphic_pane_g

0x685f,	// (0x00032102) list_double2_graphic_pane_t1_ParamLimits

0x685f,	// (0x00032102) list_double2_graphic_pane_t1

0x6875,	// (0x00032118) list_double2_graphic_pane_t2_ParamLimits

0x6875,	// (0x00032118) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0003aec4) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0003aec4) list_double2_graphic_pane_t

0x6887,	// (0x0003212a) list_double_large_graphic_pane_g1_ParamLimits

0x6887,	// (0x0003212a) list_double_large_graphic_pane_g1

0x68a4,	// (0x00032147) list_double_large_graphic_pane_g2_ParamLimits

0x68a4,	// (0x00032147) list_double_large_graphic_pane_g2

0x7e36,	// (0x000336d9) list_double_large_graphic_pane_g3_ParamLimits

0x7e36,	// (0x000336d9) list_double_large_graphic_pane_g3

0x68b8,	// (0x0003215b) list_double_large_graphic_pane_g4_ParamLimits

0x68b8,	// (0x0003215b) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0003aec9) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0003aec9) list_double_large_graphic_pane_g

0x68c9,	// (0x0003216c) list_double_large_graphic_pane_t1_ParamLimits

0x68c9,	// (0x0003216c) list_double_large_graphic_pane_t1

0x68e2,	// (0x00032185) list_double_large_graphic_pane_t2_ParamLimits

0x68e2,	// (0x00032185) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0003aed4) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0003aed4) list_double_large_graphic_pane_t

0x7e7b,	// (0x0003371e) list_double2_large_graphic_pane_g1_ParamLimits

0x7e7b,	// (0x0003371e) list_double2_large_graphic_pane_g1

0x7e87,	// (0x0003372a) list_double2_large_graphic_pane_g2_ParamLimits

0x7e87,	// (0x0003372a) list_double2_large_graphic_pane_g2

0x7e5a,	// (0x000336fd) list_double2_large_graphic_pane_g3_ParamLimits

0x7e5a,	// (0x000336fd) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0003aed9) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0003aed9) list_double2_large_graphic_pane_g

0x68f4,	// (0x00032197) list_double2_large_graphic_pane_t1_ParamLimits

0x68f4,	// (0x00032197) list_double2_large_graphic_pane_t1

0x690a,	// (0x000321ad) list_double2_large_graphic_pane_t2_ParamLimits

0x690a,	// (0x000321ad) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0003aee0) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0003aee0) list_double2_large_graphic_pane_t

0x691c,	// (0x000321bf) list_double_heading_pane_g1_ParamLimits

0x691c,	// (0x000321bf) list_double_heading_pane_g1

0x692b,	// (0x000321ce) list_double_heading_pane_g2_ParamLimits

0x692b,	// (0x000321ce) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0003aee5) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0003aee5) list_double_heading_pane_g

0x6937,	// (0x000321da) list_double_heading_pane_t1_ParamLimits

0x6937,	// (0x000321da) list_double_heading_pane_t1

0x67b8,	// (0x0003205b) list_double_heading_pane_t2_ParamLimits

0x67b8,	// (0x0003205b) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0003aeea) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0003aeea) list_double_heading_pane_t

0x694d,	// (0x000321f0) list_double_graphic_heading_pane_g1_ParamLimits

0x694d,	// (0x000321f0) list_double_graphic_heading_pane_g1

0x691c,	// (0x000321bf) list_double_graphic_heading_pane_g2_ParamLimits

0x691c,	// (0x000321bf) list_double_graphic_heading_pane_g2

0x692b,	// (0x000321ce) list_double_graphic_heading_pane_g3_ParamLimits

0x692b,	// (0x000321ce) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0003aeef) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0003aeef) list_double_graphic_heading_pane_g

0x6959,	// (0x000321fc) list_double_graphic_heading_pane_t1_ParamLimits

0x6959,	// (0x000321fc) list_double_graphic_heading_pane_t1

0x6875,	// (0x00032118) list_double_graphic_heading_pane_t2_ParamLimits

0x6875,	// (0x00032118) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0003aef6) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0003aef6) list_double_graphic_heading_pane_t

0x696f,	// (0x00032212) list_double_time_pane_g1_ParamLimits

0x696f,	// (0x00032212) list_double_time_pane_g1

0x697e,	// (0x00032221) list_double_time_pane_g2_ParamLimits

0x697e,	// (0x00032221) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0003aefb) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0003aefb) list_double_time_pane_g

0x698a,	// (0x0003222d) list_double_time_pane_t1_ParamLimits

0x698a,	// (0x0003222d) list_double_time_pane_t1

0x69a0,	// (0x00032243) list_double_time_pane_t2_ParamLimits

0x69a0,	// (0x00032243) list_double_time_pane_t2

0x69b2,	// (0x00032255) list_double_time_pane_t3_ParamLimits

0x69b2,	// (0x00032255) list_double_time_pane_t3

0x69c4,	// (0x00032267) list_double_time_pane_t4_ParamLimits

0x69c4,	// (0x00032267) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0003af00) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0003af00) list_double_time_pane_t

0x69d6,	// (0x00032279) list_setting_pane_g1_ParamLimits

0x69d6,	// (0x00032279) list_setting_pane_g1

0x6796,	// (0x00032039) list_setting_pane_g2_ParamLimits

0x6796,	// (0x00032039) list_setting_pane_g2

0x0001,

0xf666,	// (0x0003af09) list_setting_pane_g_ParamLimits

0xf666,	// (0x0003af09) list_setting_pane_g

0x69e2,	// (0x00032285) list_setting_pane_t1_ParamLimits

0x69e2,	// (0x00032285) list_setting_pane_t1

0x69fc,	// (0x0003229f) list_setting_pane_t2_ParamLimits

0x69fc,	// (0x0003229f) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0003af0e) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0003af0e) list_setting_pane_t

0x6a39,	// (0x000322dc) set_value_pane_cp_ParamLimits

0x6a39,	// (0x000322dc) set_value_pane_cp

0x6a45,	// (0x000322e8) list_setting_number_pane_g1_ParamLimits

0x6a45,	// (0x000322e8) list_setting_number_pane_g1

0x6a51,	// (0x000322f4) list_setting_number_pane_g2_ParamLimits

0x6a51,	// (0x000322f4) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0003af15) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0003af15) list_setting_number_pane_g

0x6a5d,	// (0x00032300) list_setting_number_pane_t1_ParamLimits

0x6a5d,	// (0x00032300) list_setting_number_pane_t1

0x6a74,	// (0x00032317) list_setting_number_pane_t2_ParamLimits

0x6a74,	// (0x00032317) list_setting_number_pane_t2

0x6a8e,	// (0x00032331) list_setting_number_pane_t3_ParamLimits

0x6a8e,	// (0x00032331) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0003af1a) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0003af1a) list_setting_number_pane_t

0x6a39,	// (0x000322dc) set_value_pane_ParamLimits

0x6a39,	// (0x000322dc) set_value_pane

0x7e96,	// (0x00033739) bg_set_opt_pane_ParamLimits

0x7e96,	// (0x00033739) bg_set_opt_pane

0x6acf,	// (0x00032372) set_value_pane_t1

0x7eb7,	// (0x0003375a) slider_set_pane_cp3

0x7ec0,	// (0x00033763) volume_small_pane_cp

0x7ec9,	// (0x0003376c) list_form_gen_pane

0x7dc6,	// (0x00033669) scroll_pane_cp8

0x6aed,	// (0x00032390) form_field_data_pane_ParamLimits

0x6aed,	// (0x00032390) form_field_data_pane

0x6b0d,	// (0x000323b0) form_field_data_wide_pane_ParamLimits

0x6b0d,	// (0x000323b0) form_field_data_wide_pane

0x6b2c,	// (0x000323cf) form_field_popup_pane_ParamLimits

0x6b2c,	// (0x000323cf) form_field_popup_pane

0x6b44,	// (0x000323e7) form_field_popup_wide_pane_ParamLimits

0x6b44,	// (0x000323e7) form_field_popup_wide_pane

0x6b5b,	// (0x000323fe) form_field_slider_pane_ParamLimits

0x6b5b,	// (0x000323fe) form_field_slider_pane

0x6b6e,	// (0x00032411) form_field_slider_wide_pane_ParamLimits

0x6b6e,	// (0x00032411) form_field_slider_wide_pane

0x7ed2,	// (0x00033775) data_form_pane

0x6b89,	// (0x0003242c) form_field_data_pane_t1

0x7ede,	// (0x00033781) input_focus_pane

0x7eec,	// (0x0003378f) data_form_wide_pane

0x6bad,	// (0x00032450) form_field_data_wide_pane_t1

0x7c45,	// (0x000334e8) input_focus_pane_cp6

0x6bcf,	// (0x00032472) form_field_popup_pane_t1

0x7ede,	// (0x00033781) input_focus_pane_cp7

0x7ed2,	// (0x00033775) list_form_pane

0x6bef,	// (0x00032492) form_field_popup_wide_pane_t1

0x7ede,	// (0x00033781) input_focus_pane_cp8

0x7f0c,	// (0x000337af) list_form_wide_pane

0x6c0c,	// (0x000324af) form_field_slider_pane_t1_ParamLimits

0x6c0c,	// (0x000324af) form_field_slider_pane_t1

0x6c22,	// (0x000324c5) form_field_slider_pane_t2_ParamLimits

0x6c22,	// (0x000324c5) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0003af2a) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0003af2a) form_field_slider_pane_t

0x79aa,	// (0x0003324d) input_focus_pane_cp9_ParamLimits

0x79aa,	// (0x0003324d) input_focus_pane_cp9

0x6c37,	// (0x000324da) slider_cont_pane_ParamLimits

0x6c37,	// (0x000324da) slider_cont_pane

0x7f1b,	// (0x000337be) form_field_slider_wide_pane_t1_ParamLimits

0x7f1b,	// (0x000337be) form_field_slider_wide_pane_t1

0x6c4b,	// (0x000324ee) form_field_slider_wide_pane_t2_ParamLimits

0x6c4b,	// (0x000324ee) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0003af2f) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0003af2f) form_field_slider_wide_pane_t

0x79aa,	// (0x0003324d) input_focus_pane_cp10_ParamLimits

0x79aa,	// (0x0003324d) input_focus_pane_cp10

0x6c5d,	// (0x00032500) slider_cont_pane_cp1_ParamLimits

0x6c5d,	// (0x00032500) slider_cont_pane_cp1

0x6c73,	// (0x00032516) slider_form_pane_cp

0x7f2d,	// (0x000337d0) input_focus_pane_g1

0x7f35,	// (0x000337d8) input_focus_pane_g2

0x7f3d,	// (0x000337e0) input_focus_pane_g3

0x7f45,	// (0x000337e8) input_focus_pane_g4

0x7f4d,	// (0x000337f0) input_focus_pane_g5

0x7f55,	// (0x000337f8) input_focus_pane_g6

0x7f5d,	// (0x00033800) input_focus_pane_g7

0x7f65,	// (0x00033808) input_focus_pane_g8

0x7f6d,	// (0x00033810) input_focus_pane_g9

0x7492,	// (0x00032d35) input_focus_pane_g10

0x0009,

0xf691,	// (0x0003af34) input_focus_pane_g

0xb0c8,	// (0x0003696b) wait_border_pane_g3_copy1

0x6c7b,	// (0x0003251e) data_form_pane_t1

0x7492,	// (0x00032d35) wait_anim_pane_g1_copy1

0x6ee0,	// (0x00032783) data_form_wide_pane_t1

0x6c95,	// (0x00032538) list_form_graphic_pane_cp_ParamLimits

0x6c95,	// (0x00032538) list_form_graphic_pane_cp

0xbca8,	// (0x0003754b) slider_form_pane_g1

0xbcb1,	// (0x00037554) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0003b232) slider_form_pane_g

0x6ca9,	// (0x0003254c) list_form_graphic_pane_ParamLimits

0x6ca9,	// (0x0003254c) list_form_graphic_pane

0x6cbf,	// (0x00032562) list_form_graphic_pane_g1

0x6cc7,	// (0x0003256a) list_form_graphic_pane_t1_ParamLimits

0x6cc7,	// (0x0003256a) list_form_graphic_pane_t1

0x77e5,	// (0x00033088) list_highlight_pane_cp5_ParamLimits

0x77e5,	// (0x00033088) list_highlight_pane_cp5

0x6cdc,	// (0x0003257f) find_pane_g1

0x7f75,	// (0x00033818) input_find_pane

0x6ce5,	// (0x00032588) input_find_pane_g1_ParamLimits

0x6ce5,	// (0x00032588) input_find_pane_g1

0x6cf1,	// (0x00032594) input_find_pane_t1_ParamLimits

0x6cf1,	// (0x00032594) input_find_pane_t1

0x6d06,	// (0x000325a9) input_find_pane_t2_ParamLimits

0x6d06,	// (0x000325a9) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0003af49) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0003af49) input_find_pane_t

0x7f7e,	// (0x00033821) input_focus_pane_cp5_ParamLimits

0x7f7e,	// (0x00033821) input_focus_pane_cp5

0x79aa,	// (0x0003324d) bg_popup_window_pane_cp2_ParamLimits

0x79aa,	// (0x0003324d) bg_popup_window_pane_cp2

0x7f98,	// (0x0003383b) listscroll_menu_pane_ParamLimits

0x7f98,	// (0x0003383b) listscroll_menu_pane

0x7fa4,	// (0x00033847) popup_submenu_window_ParamLimits

0x7fa4,	// (0x00033847) popup_submenu_window

0x7fc8,	// (0x0003386b) find_popup_pane_g1

0x7fd0,	// (0x00033873) input_popup_find_pane_cp

0x7f7e,	// (0x00033821) input_focus_pane_cp4_ParamLimits

0x7f7e,	// (0x00033821) input_focus_pane_cp4

0x7fda,	// (0x0003387d) input_popup_find_pane_t1_ParamLimits

0x7fda,	// (0x0003387d) input_popup_find_pane_t1

0x7651,	// (0x00032ef4) bg_popup_sub_pane_cp

0x8008,	// (0x000338ab) listscroll_popup_sub_pane

0x8010,	// (0x000338b3) list_submenu_pane_ParamLimits

0x8010,	// (0x000338b3) list_submenu_pane

0x8021,	// (0x000338c4) scroll_pane_cp4

0x8029,	// (0x000338cc) list_single_popup_submenu_pane_ParamLimits

0x8029,	// (0x000338cc) list_single_popup_submenu_pane

0x803b,	// (0x000338de) list_single_popup_submenu_pane_g1

0x8043,	// (0x000338e6) list_single_popup_submenu_pane_t1_ParamLimits

0x8043,	// (0x000338e6) list_single_popup_submenu_pane_t1

0x77e5,	// (0x00033088) bg_active_tab_pane_cp1_ParamLimits

0x77e5,	// (0x00033088) bg_active_tab_pane_cp1

0xddda,	// (0x0003967d) tabs_2_active_pane_g1

0xdde2,	// (0x00039685) tabs_2_active_pane_t1

0x77e5,	// (0x00033088) bg_passive_tab_pane_cp1_ParamLimits

0x77e5,	// (0x00033088) bg_passive_tab_pane_cp1

0xddda,	// (0x0003967d) tabs_2_passive_pane_g1

0xdde2,	// (0x00039685) tabs_2_passive_pane_t1

0xa786,	// (0x00036029) bg_active_tab_pane_cp4

0xddf4,	// (0x00039697) tabs_2_long_active_pane_t1

0xde07,	// (0x000396aa) bg_passive_tab_pane_cp4

0xabb0,	// (0x00036453) list_single_midp_graphic_pane_g4_ParamLimits

0xa786,	// (0x00036029) bg_active_tab_pane_cp5

0xde13,	// (0x000396b6) tabs_3_long_active_pane_t1

0xde07,	// (0x000396aa) bg_passive_tab_pane_cp5

0xabb0,	// (0x00036453) list_single_midp_graphic_pane_g4

0x77e5,	// (0x00033088) bg_popup_window_pane_cp13_ParamLimits

0x77e5,	// (0x00033088) bg_popup_window_pane_cp13

0x8061,	// (0x00033904) listscroll_popup_fast_pane_ParamLimits

0x8061,	// (0x00033904) listscroll_popup_fast_pane

0x8070,	// (0x00033913) grid_popup_fast_pane_ParamLimits

0x8070,	// (0x00033913) grid_popup_fast_pane

0x8082,	// (0x00033925) scroll_pane_cp9_ParamLimits

0x8082,	// (0x00033925) scroll_pane_cp9

0xcfb9,	// (0x0003885c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcfb9,	// (0x0003885c) list_single_graphic_hl_pane_t1_cp2

0x80a6,	// (0x00033949) input_focus_pane_cp20_ParamLimits

0x80a6,	// (0x00033949) input_focus_pane_cp20

0x80b4,	// (0x00033957) query_popup_data_pane_t1_ParamLimits

0x80b4,	// (0x00033957) query_popup_data_pane_t1

0x80c7,	// (0x0003396a) query_popup_data_pane_t2_ParamLimits

0x80c7,	// (0x0003396a) query_popup_data_pane_t2

0x810d,	// (0x000339b0) query_popup_data_pane_t3_ParamLimits

0x810d,	// (0x000339b0) query_popup_data_pane_t3

0x814e,	// (0x000339f1) query_popup_data_pane_t4_ParamLimits

0x814e,	// (0x000339f1) query_popup_data_pane_t4

0x818a,	// (0x00033a2d) query_popup_data_pane_t5_ParamLimits

0x818a,	// (0x00033a2d) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0003af4e) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0003af4e) query_popup_data_pane_t

0x7f2d,	// (0x000337d0) bg_set_opt_pane_g1

0x7f35,	// (0x000337d8) bg_set_opt_pane_g2

0x7f3d,	// (0x000337e0) bg_set_opt_pane_g3

0x7f45,	// (0x000337e8) bg_set_opt_pane_g4

0x7f4d,	// (0x000337f0) bg_set_opt_pane_g5

0x7f55,	// (0x000337f8) bg_set_opt_pane_g6

0x7f5d,	// (0x00033800) bg_set_opt_pane_g7

0x7f65,	// (0x00033808) bg_set_opt_pane_g8

0x7f6d,	// (0x00033810) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0003af59) bg_set_opt_pane_g

0x87c1,	// (0x00034064) control_top_pane_stacon_ParamLimits

0x87c1,	// (0x00034064) control_top_pane_stacon

0x8814,	// (0x000340b7) signal_pane_stacon_ParamLimits

0x8814,	// (0x000340b7) signal_pane_stacon

0x8839,	// (0x000340dc) stacon_top_pane_g1_ParamLimits

0x8839,	// (0x000340dc) stacon_top_pane_g1

0x885b,	// (0x000340fe) title_pane_stacon_ParamLimits

0x885b,	// (0x000340fe) title_pane_stacon

0x887d,	// (0x00034120) uni_indicator_pane_stacon_ParamLimits

0x887d,	// (0x00034120) uni_indicator_pane_stacon

0x8892,	// (0x00034135) battery_pane_stacon_ParamLimits

0x8892,	// (0x00034135) battery_pane_stacon

0x88d2,	// (0x00034175) control_bottom_pane_stacon_ParamLimits

0x88d2,	// (0x00034175) control_bottom_pane_stacon

0x88f1,	// (0x00034194) navi_pane_stacon_ParamLimits

0x88f1,	// (0x00034194) navi_pane_stacon

0x8910,	// (0x000341b3) stacon_bottom_pane_g1_ParamLimits

0x8910,	// (0x000341b3) stacon_bottom_pane_g1

0x81c1,	// (0x00033a64) aid_levels_signal_lsc_ParamLimits

0x81c1,	// (0x00033a64) aid_levels_signal_lsc

0x81ce,	// (0x00033a71) signal_pane_stacon_g1_ParamLimits

0x81ce,	// (0x00033a71) signal_pane_stacon_g1

0x81da,	// (0x00033a7d) signal_pane_stacon_g2_ParamLimits

0x81da,	// (0x00033a7d) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0003af6c) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003af6c) signal_pane_stacon_g

0x821b,	// (0x00033abe) title_pane_stacon_t1_ParamLimits

0x821b,	// (0x00033abe) title_pane_stacon_t1

0x8240,	// (0x00033ae3) uni_indicator_pane_stacon_g1

0x824a,	// (0x00033aed) uni_indicator_pane_stacon_g2

0x8254,	// (0x00033af7) uni_indicator_pane_stacon_g3

0x825e,	// (0x00033b01) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0003af78) uni_indicator_pane_stacon_g

0x8268,	// (0x00033b0b) control_top_pane_stacon_g1

0x8270,	// (0x00033b13) control_top_pane_stacon_t1_ParamLimits

0x8270,	// (0x00033b13) control_top_pane_stacon_t1

0x82a1,	// (0x00033b44) aid_levels_battery_lsc_ParamLimits

0x82a1,	// (0x00033b44) aid_levels_battery_lsc

0x82af,	// (0x00033b52) battery_pane_stacon_g1_ParamLimits

0x82af,	// (0x00033b52) battery_pane_stacon_g1

0x82bb,	// (0x00033b5e) battery_pane_stacon_g2_ParamLimits

0x82bb,	// (0x00033b5e) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0003af81) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0003af81) battery_pane_stacon_g

0x82ea,	// (0x00033b8d) navi_icon_pane_stacon

0x82fa,	// (0x00033b9d) navi_navi_pane_stacon

0x82ea,	// (0x00033b8d) navi_text_pane_stacon

0x8268,	// (0x00033b0b) control_bottom_pane_stacon_g1

0x830a,	// (0x00033bad) control_bottom_pane_stacon_t1_ParamLimits

0x830a,	// (0x00033bad) control_bottom_pane_stacon_t1

0xde25,	// (0x000396c8) grid_app_pane_ParamLimits

0xde25,	// (0x000396c8) grid_app_pane

0xde41,	// (0x000396e4) scroll_pane_cp15_ParamLimits

0xde41,	// (0x000396e4) scroll_pane_cp15

0xde52,	// (0x000396f5) cell_app_pane_ParamLimits

0xde52,	// (0x000396f5) cell_app_pane

0xde76,	// (0x00039719) cell_app_pane_g1_ParamLimits

0xde76,	// (0x00039719) cell_app_pane_g1

0x8355,	// (0x00033bf8) cell_app_pane_g2_ParamLimits

0x8355,	// (0x00033bf8) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0003af86) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0003af86) cell_app_pane_g

0xde9a,	// (0x0003973d) cell_app_pane_t1_ParamLimits

0xde9a,	// (0x0003973d) cell_app_pane_t1

0x8361,	// (0x00033c04) grid_highlight_pane_ParamLimits

0x8361,	// (0x00033c04) grid_highlight_pane

0x7f2d,	// (0x000337d0) cell_highlight_pane_g1

0x7f35,	// (0x000337d8) cell_highlight_pane_g2

0x7f3d,	// (0x000337e0) cell_highlight_pane_g3

0x7f45,	// (0x000337e8) cell_highlight_pane_g4

0x7f4d,	// (0x000337f0) cell_highlight_pane_g5

0x7f55,	// (0x000337f8) cell_highlight_pane_g6

0x7f5d,	// (0x00033800) cell_highlight_pane_g7

0x7f65,	// (0x00033808) cell_highlight_pane_g8

0x7f6d,	// (0x00033810) cell_highlight_pane_g9

0x7492,	// (0x00032d35) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0003af34) cell_highlight_pane_g

0x8385,	// (0x00033c28) bg_scroll_pane

0x83a4,	// (0x00033c47) scroll_handle_pane

0x83f5,	// (0x00033c98) scroll_bg_pane_g1

0x840a,	// (0x00033cad) scroll_bg_pane_g2

0x8422,	// (0x00033cc5) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0003af8b) scroll_bg_pane_g

0x8437,	// (0x00033cda) scroll_handle_focus_pane_ParamLimits

0x8437,	// (0x00033cda) scroll_handle_focus_pane

0x83f5,	// (0x00033c98) scroll_handle_pane_g1

0x8444,	// (0x00033ce7) scroll_handle_pane_g2

0x8422,	// (0x00033cc5) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0003af92) scroll_handle_pane_g

0x7f7e,	// (0x00033821) bg_popup_sub_pane_cp21_ParamLimits

0x7f7e,	// (0x00033821) bg_popup_sub_pane_cp21

0x8458,	// (0x00033cfb) popup_fep_japan_predictive_window_t1_ParamLimits

0x8458,	// (0x00033cfb) popup_fep_japan_predictive_window_t1

0x846f,	// (0x00033d12) popup_fep_japan_predictive_window_t2_ParamLimits

0x846f,	// (0x00033d12) popup_fep_japan_predictive_window_t2

0x84a2,	// (0x00033d45) popup_fep_japan_predictive_window_t3_ParamLimits

0x84a2,	// (0x00033d45) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0003af99) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0003af99) popup_fep_japan_predictive_window_t

0x7651,	// (0x00032ef4) bg_popup_sub_pane_cp23

0x84d9,	// (0x00033d7c) listscroll_japin_cand_pane

0x84e1,	// (0x00033d84) popup_fep_japan_candidate_window_t1

0x84ef,	// (0x00033d92) candidate_pane_ParamLimits

0x84ef,	// (0x00033d92) candidate_pane

0x8502,	// (0x00033da5) scroll_pane_cp30

0x850a,	// (0x00033dad) list_single_popup_jap_candidate_pane_ParamLimits

0x850a,	// (0x00033dad) list_single_popup_jap_candidate_pane

0x7651,	// (0x00032ef4) list_highlight_pane_cp30

0x851f,	// (0x00033dc2) list_single_popup_jap_candidate_pane_t1

0xdeb1,	// (0x00039754) level_1_signal

0xdebe,	// (0x00039761) level_2_signal

0xdecb,	// (0x0003976e) level_3_signal

0xded8,	// (0x0003977b) level_4_signal

0xdee5,	// (0x00039788) level_5_signal

0xdef2,	// (0x00039795) level_6_signal

0xdeff,	// (0x000397a2) level_7_signal

0xdeb1,	// (0x00039754) level_1_battery

0xdebe,	// (0x00039761) level_2_battery

0xdecb,	// (0x0003976e) level_3_battery

0xded8,	// (0x0003977b) level_4_battery

0xdee5,	// (0x00039788) level_5_battery

0xdef2,	// (0x00039795) level_6_battery

0xdeff,	// (0x000397a2) level_7_battery

0x8565,	// (0x00033e08) list_menu_pane_ParamLimits

0x8565,	// (0x00033e08) list_menu_pane

0x857b,	// (0x00033e1e) scroll_pane_cp25_ParamLimits

0x857b,	// (0x00033e1e) scroll_pane_cp25

0xdf0c,	// (0x000397af) list_double2_graphic_pane_cp2_ParamLimits

0xdf0c,	// (0x000397af) list_double2_graphic_pane_cp2

0xdf0c,	// (0x000397af) list_double2_large_graphic_pane_cp2_ParamLimits

0xdf0c,	// (0x000397af) list_double2_large_graphic_pane_cp2

0xdf0c,	// (0x000397af) list_double2_pane_cp2_ParamLimits

0xdf0c,	// (0x000397af) list_double2_pane_cp2

0xdf0c,	// (0x000397af) list_double_graphic_pane_cp2_ParamLimits

0xdf0c,	// (0x000397af) list_double_graphic_pane_cp2

0xdf0c,	// (0x000397af) list_double_large_graphic_pane_cp2_ParamLimits

0xdf0c,	// (0x000397af) list_double_large_graphic_pane_cp2

0xdf0c,	// (0x000397af) list_double_number_pane_cp2_ParamLimits

0xdf0c,	// (0x000397af) list_double_number_pane_cp2

0xdf0c,	// (0x000397af) list_double_pane_cp2_ParamLimits

0xdf0c,	// (0x000397af) list_double_pane_cp2

0xdf1c,	// (0x000397bf) list_single_2graphic_pane_cp2_ParamLimits

0xdf1c,	// (0x000397bf) list_single_2graphic_pane_cp2

0xdf1c,	// (0x000397bf) list_single_graphic_heading_pane_cp2_ParamLimits

0xdf1c,	// (0x000397bf) list_single_graphic_heading_pane_cp2

0xdf1c,	// (0x000397bf) list_single_graphic_pane_cp2_ParamLimits

0xdf1c,	// (0x000397bf) list_single_graphic_pane_cp2

0xdf1c,	// (0x000397bf) list_single_heading_pane_cp2_ParamLimits

0xdf1c,	// (0x000397bf) list_single_heading_pane_cp2

0xdf31,	// (0x000397d4) list_single_large_graphic_pane_cp2_ParamLimits

0xdf31,	// (0x000397d4) list_single_large_graphic_pane_cp2

0xdf1c,	// (0x000397bf) list_single_number_heading_pane_cp2_ParamLimits

0xdf1c,	// (0x000397bf) list_single_number_heading_pane_cp2

0xdf1c,	// (0x000397bf) list_single_number_pane_cp2_ParamLimits

0xdf1c,	// (0x000397bf) list_single_number_pane_cp2

0xdf1c,	// (0x000397bf) list_single_pane_cp2_ParamLimits

0xdf1c,	// (0x000397bf) list_single_pane_cp2

0x85f8,	// (0x00033e9b) bg_popup_sub_pane_cp22

0x861a,	// (0x00033ebd) popup_side_volume_key_window_g1

0x863e,	// (0x00033ee1) popup_side_volume_key_window_t1

0x865a,	// (0x00033efd) volume_small_pane_cp1

0x79aa,	// (0x0003324d) bg_popup_sub_pane_cp24_ParamLimits

0x79aa,	// (0x0003324d) bg_popup_sub_pane_cp24

0x8662,	// (0x00033f05) fep_china_uni_candidate_pane_ParamLimits

0x8662,	// (0x00033f05) fep_china_uni_candidate_pane

0x8676,	// (0x00033f19) fep_china_uni_entry_pane

0x8686,	// (0x00033f29) popup_fep_china_uni_window_g1

0x86a2,	// (0x00033f45) fep_china_uni_entry_pane_g1

0x86aa,	// (0x00033f4d) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0003afca) fep_china_uni_entry_pane_g

0x86b2,	// (0x00033f55) fep_entry_item_pane

0x86bc,	// (0x00033f5f) fep_candidate_item_pane

0x86c4,	// (0x00033f67) fep_china_uni_candidate_pane_g1

0x86cc,	// (0x00033f6f) fep_china_uni_candidate_pane_g2

0x86d4,	// (0x00033f77) fep_china_uni_candidate_pane_g3

0x86dc,	// (0x00033f7f) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0003afcf) fep_china_uni_candidate_pane_g

0x7492,	// (0x00032d35) fep_entry_item_pane_g1

0x86e4,	// (0x00033f87) fep_entry_item_pane_t1_ParamLimits

0x86e4,	// (0x00033f87) fep_entry_item_pane_t1

0x86fa,	// (0x00033f9d) fep_candidate_item_pane_t1_ParamLimits

0x86fa,	// (0x00033f9d) fep_candidate_item_pane_t1

0x870f,	// (0x00033fb2) fep_candidate_item_pane_t2_ParamLimits

0x870f,	// (0x00033fb2) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0003afd8) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0003afd8) fep_candidate_item_pane_t

0x77e5,	// (0x00033088) list_highlight_pane_cp31_ParamLimits

0x77e5,	// (0x00033088) list_highlight_pane_cp31

0x8721,	// (0x00033fc4) level_1_signal_lsc

0x872a,	// (0x00033fcd) level_2_signal_lsc

0x8733,	// (0x00033fd6) level_3_signal_lsc

0x873c,	// (0x00033fdf) level_4_signal_lsc

0x8745,	// (0x00033fe8) level_5_signal_lsc

0x874e,	// (0x00033ff1) level_6_signal_lsc

0x8757,	// (0x00033ffa) level_7_signal_lsc

0x8757,	// (0x00033ffa) level_1_battery_lsc

0x8760,	// (0x00034003) level_2_battery_lsc

0x8769,	// (0x0003400c) level_3_battery_lsc

0x8772,	// (0x00034015) level_4_battery_lsc

0x877b,	// (0x0003401e) level_5_battery_lsc

0x8784,	// (0x00034027) level_6_battery_lsc

0x8721,	// (0x00033fc4) level_7_battery_lsc

0x878d,	// (0x00034030) scroll_handle_focus_pane_g1

0x8796,	// (0x00034039) scroll_handle_focus_pane_g2

0x879f,	// (0x00034042) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0003afdd) scroll_handle_focus_pane_g

0x6d1b,	// (0x000325be) list_single_2graphic_pane_g1_ParamLimits

0x6d1b,	// (0x000325be) list_single_2graphic_pane_g1

0x7def,	// (0x00033692) list_single_2graphic_pane_g2_ParamLimits

0x7def,	// (0x00033692) list_single_2graphic_pane_g2

0x7de3,	// (0x00033686) list_single_2graphic_pane_g3_ParamLimits

0x7de3,	// (0x00033686) list_single_2graphic_pane_g3

0x6d27,	// (0x000325ca) list_single_2graphic_pane_g4_ParamLimits

0x6d27,	// (0x000325ca) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0003afe4) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0003afe4) list_single_2graphic_pane_g

0x6d33,	// (0x000325d6) list_single_2graphic_pane_t1_ParamLimits

0x6d33,	// (0x000325d6) list_single_2graphic_pane_t1

0x87a8,	// (0x0003404b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x87a8,	// (0x0003404b) list_double2_graphic_large_graphic_pane_g1

0x7e87,	// (0x0003372a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7e87,	// (0x0003372a) list_double2_graphic_large_graphic_pane_g2

0x7e5a,	// (0x000336fd) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7e5a,	// (0x000336fd) list_double2_graphic_large_graphic_pane_g3

0x6d61,	// (0x00032604) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6d61,	// (0x00032604) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0003afed) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0003afed) list_double2_graphic_large_graphic_pane_g

0x6d6d,	// (0x00032610) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6d6d,	// (0x00032610) list_double2_graphic_large_graphic_pane_t1

0x6d83,	// (0x00032626) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6d83,	// (0x00032626) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0003aff6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0003aff6) list_double2_graphic_large_graphic_pane_t

0x89b7,	// (0x0003425a) popup_fast_swap_window_ParamLimits

0x89b7,	// (0x0003425a) popup_fast_swap_window

0x89d3,	// (0x00034276) popup_side_volume_key_window

0x89ed,	// (0x00034290) stacon_top_pane

0x89f7,	// (0x0003429a) status_pane_ParamLimits

0x89f7,	// (0x0003429a) status_pane

0xe002,	// (0x000398a5) status_small_pane

0x7651,	// (0x00032ef4) control_pane

0x7651,	// (0x00032ef4) stacon_bottom_pane

0x7dc6,	// (0x00033669) scroll_pane_cp121

0x7ec9,	// (0x0003376c) set_content_pane

0xdfa4,	// (0x00039847) bg_active_tab_pane_g1_cp1

0x87b8,	// (0x0003405b) bg_active_tab_pane_g2_cp1

0xdfad,	// (0x00039850) bg_active_tab_pane_g3_cp1

0xdfa4,	// (0x00039847) bg_passive_tab_pane_g1_cp1

0x87b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp1

0xdfad,	// (0x00039850) bg_passive_tab_pane_g3_cp1

0xdfb6,	// (0x00039859) bg_active_tab_pane_g1_cp2

0x87b8,	// (0x0003405b) bg_active_tab_pane_g2_cp2

0xdfbf,	// (0x00039862) bg_active_tab_pane_g3_cp2

0xdfb6,	// (0x00039859) bg_passive_tab_pane_g1_cp2

0x87b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp2

0xdfbf,	// (0x00039862) bg_passive_tab_pane_g3_cp2

0xdfc8,	// (0x0003986b) bg_active_tab_pane_g1_cp3

0x87b8,	// (0x0003405b) bg_active_tab_pane_g2_cp3

0xdfd1,	// (0x00039874) bg_active_tab_pane_g3_cp3

0xdfc8,	// (0x0003986b) bg_passive_tab_pane_g1_cp3

0x87b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp3

0xdfd1,	// (0x00039874) bg_passive_tab_pane_g3_cp3

0xdfda,	// (0x0003987d) bg_active_tab_pane_g1_cp4

0x87b8,	// (0x0003405b) bg_active_tab_pane_g2_cp4

0xdfe3,	// (0x00039886) bg_active_tab_pane_g3_cp4

0xdfda,	// (0x0003987d) bg_passive_tab_pane_g1_cp4

0x87b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp4

0xdfe3,	// (0x00039886) bg_passive_tab_pane_g3_cp4

0x892c,	// (0x000341cf) bg_active_tab_pane_g1_cp5

0x87b8,	// (0x0003405b) bg_active_tab_pane_g2_cp5

0x8935,	// (0x000341d8) bg_active_tab_pane_g3_cp5

0x892c,	// (0x000341cf) bg_passive_tab_pane_g1_cp5

0x87b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp5

0x8935,	// (0x000341d8) bg_passive_tab_pane_g3_cp5

0xdfec,	// (0x0003988f) list_set_graphic_pane_ParamLimits

0xdfec,	// (0x0003988f) list_set_graphic_pane

0x7651,	// (0x00032ef4) bg_set_opt_pane_cp4

0x893e,	// (0x000341e1) list_set_graphic_pane_g1_ParamLimits

0x893e,	// (0x000341e1) list_set_graphic_pane_g1

0x894a,	// (0x000341ed) list_set_graphic_pane_g2_ParamLimits

0x894a,	// (0x000341ed) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0003affb) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0003affb) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0003b374) volume_small_pane_cp_g

0x896c,	// (0x0003420f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x896c,	// (0x0003420f) list_double2_large_graphic_pane_g1_cp2

0x8978,	// (0x0003421b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8978,	// (0x0003421b) list_double2_large_graphic_pane_g2_cp2

0x8987,	// (0x0003422a) list_double2_large_graphic_pane_g3_cp2

0x898f,	// (0x00034232) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x898f,	// (0x00034232) list_double2_large_graphic_pane_t1_cp2

0x89a5,	// (0x00034248) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x89a5,	// (0x00034248) list_double2_large_graphic_pane_t2_cp2

0xba6c,	// (0x0003730f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xba6c,	// (0x0003730f) list_double_large_graphic_pane_g1_cp2

0xba7d,	// (0x00037320) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xba7d,	// (0x00037320) list_double_large_graphic_pane_g2_cp2

0x8ad2,	// (0x00034375) list_double_large_graphic_pane_g3_cp2

0xba8c,	// (0x0003732f) list_double_large_graphic_pane_g4_cp

0xba94,	// (0x00037337) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xba94,	// (0x00037337) list_double_large_graphic_pane_t1_cp2

0xbaab,	// (0x0003734e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xbaab,	// (0x0003734e) list_double_large_graphic_pane_t2_cp2

0x8a05,	// (0x000342a8) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8a05,	// (0x000342a8) list_double2_graphic_pane_g1_cp2

0x8a11,	// (0x000342b4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8a11,	// (0x000342b4) list_double2_graphic_pane_g2_cp2

0x8a20,	// (0x000342c3) list_double2_graphic_pane_g3_cp2

0x8a28,	// (0x000342cb) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8a28,	// (0x000342cb) list_double2_graphic_pane_t1_cp2

0x8a3e,	// (0x000342e1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8a3e,	// (0x000342e1) list_double2_graphic_pane_t2_cp2

0x8a50,	// (0x000342f3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8a50,	// (0x000342f3) list_single_number_heading_pane_g1_cp2

0x8a5c,	// (0x000342ff) list_single_number_heading_pane_g2_cp2

0x8a64,	// (0x00034307) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8a64,	// (0x00034307) list_single_number_heading_pane_t1_cp2

0x8a7a,	// (0x0003431d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8a7a,	// (0x0003431d) list_single_number_heading_pane_t2_cp2

0x8a8c,	// (0x0003432f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8a8c,	// (0x0003432f) list_single_number_heading_pane_t3_cp2

0x8a50,	// (0x000342f3) list_single_heading_pane_g1_cp2_ParamLimits

0x8a50,	// (0x000342f3) list_single_heading_pane_g1_cp2

0x8a5c,	// (0x000342ff) list_single_heading_pane_g2_cp2

0x8a64,	// (0x00034307) list_single_heading_pane_t1_cp2_ParamLimits

0x8a64,	// (0x00034307) list_single_heading_pane_t1_cp2

0xb876,	// (0x00037119) list_single_heading_pane_t2_cp2_ParamLimits

0xb876,	// (0x00037119) list_single_heading_pane_t2_cp2

0xb7c6,	// (0x00037069) list_double_graphic_pane_g1_cp2_ParamLimits

0xb7c6,	// (0x00037069) list_double_graphic_pane_g1_cp2

0xb7d2,	// (0x00037075) list_double_graphic_pane_g2_cp2_ParamLimits

0xb7d2,	// (0x00037075) list_double_graphic_pane_g2_cp2

0xb7e1,	// (0x00037084) list_double_graphic_pane_g3_cp2

0xb7e9,	// (0x0003708c) list_double_graphic_pane_t1_cp2_ParamLimits

0xb7e9,	// (0x0003708c) list_double_graphic_pane_t1_cp2

0xb7ff,	// (0x000370a2) list_double_graphic_pane_t2_cp2_ParamLimits

0xb7ff,	// (0x000370a2) list_double_graphic_pane_t2_cp2

0x8ac6,	// (0x00034369) list_double_number_pane_g1_cp2_ParamLimits

0x8ac6,	// (0x00034369) list_double_number_pane_g1_cp2

0x8ad2,	// (0x00034375) list_double_number_pane_g2_cp2

0xb78c,	// (0x0003702f) list_double_number_pane_t1_cp2_ParamLimits

0xb78c,	// (0x0003702f) list_double_number_pane_t1_cp2

0xb79e,	// (0x00037041) list_double_number_pane_t2_cp2_ParamLimits

0xb79e,	// (0x00037041) list_double_number_pane_t2_cp2

0xb7b4,	// (0x00037057) list_double_number_pane_t3_cp2_ParamLimits

0xb7b4,	// (0x00037057) list_double_number_pane_t3_cp2

0xb704,	// (0x00036fa7) list_single_graphic_pane_g1_cp2_ParamLimits

0xb704,	// (0x00036fa7) list_single_graphic_pane_g1_cp2

0x8a50,	// (0x000342f3) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a50,	// (0x000342f3) list_single_graphic_pane_g2_cp2

0x8a5c,	// (0x000342ff) list_single_graphic_pane_g3_cp2

0xb6dc,	// (0x00036f7f) list_single_graphic_pane_t1_cp2_ParamLimits

0xb6dc,	// (0x00036f7f) list_single_graphic_pane_t1_cp2

0x8a50,	// (0x000342f3) list_single_number_pane_g1_cp2_ParamLimits

0x8a50,	// (0x000342f3) list_single_number_pane_g1_cp2

0x8a5c,	// (0x000342ff) list_single_number_pane_g2_cp2

0xb6dc,	// (0x00036f7f) list_single_number_pane_t1_cp2_ParamLimits

0xb6dc,	// (0x00036f7f) list_single_number_pane_t1_cp2

0xb6f2,	// (0x00036f95) list_single_number_pane_t2_cp2_ParamLimits

0xb6f2,	// (0x00036f95) list_single_number_pane_t2_cp2

0x8978,	// (0x0003421b) list_double2_pane_g1_cp2_ParamLimits

0x8978,	// (0x0003421b) list_double2_pane_g1_cp2

0x8987,	// (0x0003422a) list_double2_pane_g2_cp2

0x8a9e,	// (0x00034341) list_double2_pane_t1_cp2_ParamLimits

0x8a9e,	// (0x00034341) list_double2_pane_t1_cp2

0x8ab4,	// (0x00034357) list_double2_pane_t2_cp2_ParamLimits

0x8ab4,	// (0x00034357) list_double2_pane_t2_cp2

0x8ac6,	// (0x00034369) list_double_pane_g1_cp2_ParamLimits

0x8ac6,	// (0x00034369) list_double_pane_g1_cp2

0x8ad2,	// (0x00034375) list_double_pane_g2_cp2

0x8ada,	// (0x0003437d) list_double_pane_t1_cp2_ParamLimits

0x8ada,	// (0x0003437d) list_double_pane_t1_cp2

0x8af0,	// (0x00034393) list_double_pane_t2_cp2_ParamLimits

0x8af0,	// (0x00034393) list_double_pane_t2_cp2

0x8b18,	// (0x000343bb) list_single_pane_cp2_g3

0x8a50,	// (0x000342f3) list_single_pane_g1_cp2_ParamLimits

0x8a50,	// (0x000342f3) list_single_pane_g1_cp2

0x8a5c,	// (0x000342ff) list_single_pane_g2_cp2

0x8b28,	// (0x000343cb) list_single_pane_t1_cp2_ParamLimits

0x8b28,	// (0x000343cb) list_single_pane_t1_cp2

0x8b40,	// (0x000343e3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8b40,	// (0x000343e3) list_single_large_graphic_pane_g1_cp2

0x8b4c,	// (0x000343ef) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8b4c,	// (0x000343ef) list_single_large_graphic_pane_g2_cp2

0x8b58,	// (0x000343fb) list_single_large_graphic_pane_g3_cp2

0x8b60,	// (0x00034403) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8b60,	// (0x00034403) list_single_large_graphic_pane_g4_cp1

0x8b7a,	// (0x0003441d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8b7a,	// (0x0003441d) list_single_large_graphic_pane_t1_cp2

0xb6be,	// (0x00036f61) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb6be,	// (0x00036f61) list_single_graphic_heading_pane_g1_cp2

0xb699,	// (0x00036f3c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb699,	// (0x00036f3c) list_single_graphic_heading_pane_g4_cp2

0x8a5c,	// (0x000342ff) list_single_graphic_heading_pane_g5_cp2

0x8a64,	// (0x00034307) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x8a64,	// (0x00034307) list_single_graphic_heading_pane_t1_cp2

0xb6ca,	// (0x00036f6d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb6ca,	// (0x00036f6d) list_single_graphic_heading_pane_t2_cp2

0xb68d,	// (0x00036f30) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb68d,	// (0x00036f30) list_single_2graphic_pane_g1_cp2

0xb699,	// (0x00036f3c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb699,	// (0x00036f3c) list_single_2graphic_pane_g2_cp2

0x8a5c,	// (0x000342ff) list_single_2graphic_pane_g3_cp2

0xabb0,	// (0x00036453) list_single_2graphic_pane_g4_cp2_ParamLimits

0xabb0,	// (0x00036453) list_single_2graphic_pane_g4_cp2

0xb6a8,	// (0x00036f4b) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb6a8,	// (0x00036f4b) list_single_2graphic_pane_t1_cp2

0x7492,	// (0x00032d35) list_highlight_pane_g10_cp1

0xb29f,	// (0x00036b42) list_highlight_pane_g1_cp1

0xb2a7,	// (0x00036b4a) list_highlight_pane_g2_cp1

0xb2af,	// (0x00036b52) list_highlight_pane_g3_cp1

0xb2b7,	// (0x00036b5a) list_highlight_pane_g4_cp1

0xb2bf,	// (0x00036b62) list_highlight_pane_g5_cp1

0xb2c7,	// (0x00036b6a) list_highlight_pane_g6_cp1

0xb2cf,	// (0x00036b72) list_highlight_pane_g7_cp1

0xb2d7,	// (0x00036b7a) list_highlight_pane_g8_cp1

0xb2df,	// (0x00036b82) list_highlight_pane_g9_cp1

0xe4ba,	// (0x00039d5d) form_field_slider_pane_t3

0xe4c8,	// (0x00039d6b) form_field_slider_pane_t4

0xb1e9,	// (0x00036a8c) slider_form_pane_ParamLimits

0xb1e9,	// (0x00036a8c) slider_form_pane

0x7651,	// (0x00032ef4) control_abbreviations

0x7651,	// (0x00032ef4) control_conventions

0x7651,	// (0x00032ef4) control_definitions

0x7651,	// (0x00032ef4) format_table_attribute

0xb8c0,	// (0x00037163) bg_popup_preview_window_pane_g9

0x7651,	// (0x00032ef4) format_table_data2

0x7651,	// (0x00032ef4) format_table_data3

0x7651,	// (0x00032ef4) format_table_data_example

0x0008,

0x7651,	// (0x00032ef4) intro_purpose

0xf8ef,	// (0x0003b192) bg_popup_preview_window_pane_g

0x7651,	// (0x00032ef4) texts_category

0x7651,	// (0x00032ef4) texts_graphics

0x8b90,	// (0x00034433) text_digital

0xa794,	// (0x00036037) text_primary

0xa7a3,	// (0x00036046) text_primary_small

0xa7b2,	// (0x00036055) text_secondary

0xa7c1,	// (0x00036064) text_title

0xbd39,	// (0x000375dc) bg_passive_tab_pane_g1_cp3_srt

0x87b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp3_srt

0xbd42,	// (0x000375e5) bg_passive_tab_pane_g3_cp3_srt

0x77e5,	// (0x00033088) bg_active_tab_pane_cp3_srt_ParamLimits

0x77e5,	// (0x00033088) bg_active_tab_pane_cp3_srt

0xbd4b,	// (0x000375ee) tabs_4_active_pane_srt_g1

0xdbd0,	// (0x00039473) tabs_4_active_pane_srt_t1_ParamLimits

0xdbd0,	// (0x00039473) tabs_4_active_pane_srt_t1

0xbd39,	// (0x000375dc) bg_active_tab_pane_g1_cp3_copy1

0x87b8,	// (0x0003405b) bg_active_tab_pane_g2_cp3_copy1

0xbd42,	// (0x000375e5) bg_active_tab_pane_g3_cp3_copy1

0x77e5,	// (0x00033088) tabs_2_long_active_pane_srt_ParamLimits

0x77e5,	// (0x00033088) tabs_2_long_active_pane_srt

0x77e5,	// (0x00033088) tabs_2_long_passive_pane_srt_ParamLimits

0x77e5,	// (0x00033088) tabs_2_long_passive_pane_srt

0xde07,	// (0x000396aa) bg_passive_tab_pane_cp4_srt_ParamLimits

0xde07,	// (0x000396aa) bg_passive_tab_pane_cp4_srt

0xbc6f,	// (0x00037512) bg_passive_tab_pane_g1_cp4_srt

0x87b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp4_srt

0xbc78,	// (0x0003751b) bg_passive_tab_pane_g3_cp4_srt

0xa786,	// (0x00036029) bg_active_tab_pane_cp4_srt_ParamLimits

0xa786,	// (0x00036029) bg_active_tab_pane_cp4_srt

0xddf4,	// (0x00039697) tabs_2_long_active_pane_srt_t1_ParamLimits

0xddf4,	// (0x00039697) tabs_2_long_active_pane_srt_t1

0xbc6f,	// (0x00037512) bg_active_tab_pane_g1_cp4_srt

0x87b8,	// (0x0003405b) bg_active_tab_pane_g2_cp4_srt

0xbc78,	// (0x0003751b) bg_active_tab_pane_g3_cp4_srt

0x79aa,	// (0x0003324d) tabs_3_long_active_pane_srt_ParamLimits

0x79aa,	// (0x0003324d) tabs_3_long_active_pane_srt

0x79aa,	// (0x0003324d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x79aa,	// (0x0003324d) tabs_3_long_passive_pane_cp_srt

0x79aa,	// (0x0003324d) tabs_3_long_passive_pane_srt_ParamLimits

0x79aa,	// (0x0003324d) tabs_3_long_passive_pane_srt

0xde07,	// (0x000396aa) bg_passive_tab_pane_cp5_srt_ParamLimits

0xde07,	// (0x000396aa) bg_passive_tab_pane_cp5_srt

0x892c,	// (0x000341cf) bg_passive_tab_pane_g1_cp5_srt

0x87b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp5_srt

0x8935,	// (0x000341d8) bg_passive_tab_pane_g3_cp5_srt

0xa786,	// (0x00036029) bg_active_tab_pane_cp5_srt_ParamLimits

0xa786,	// (0x00036029) bg_active_tab_pane_cp5_srt

0xde13,	// (0x000396b6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xde13,	// (0x000396b6) tabs_3_long_active_pane_srt_t1

0x892c,	// (0x000341cf) bg_active_tab_pane_g1_cp5_srt

0x87b8,	// (0x0003405b) bg_active_tab_pane_g2_cp5_srt

0x8935,	// (0x000341d8) bg_active_tab_pane_g3_cp5_srt

0xbc61,	// (0x00037504) navi_text_pane_srt_t1

0xbc59,	// (0x000374fc) navi_icon_pane_srt_g1

0xa8d9,	// (0x0003617c) midp_editing_number_pane_srt

0xa7d0,	// (0x00036073) midp_ticker_pane_srt

0xa8e1,	// (0x00036184) midp_ticker_pane_srt_g1

0xa8e9,	// (0x0003618c) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0003b01a) midp_ticker_pane_srt_g

0xa8f1,	// (0x00036194) midp_ticker_pane_srt_t1

0xbc4a,	// (0x000374ed) midp_editing_number_pane_t1_copy1

0xe00b,	// (0x000398ae) listscroll_midp_pane

0xe00b,	// (0x000398ae) midp_form_pane

0xa7d8,	// (0x0003607b) midp_info_popup_window_ParamLimits

0xa7d8,	// (0x0003607b) midp_info_popup_window

0x7f7e,	// (0x00033821) bg_popup_sub_pane_cp50_ParamLimits

0x7f7e,	// (0x00033821) bg_popup_sub_pane_cp50

0xaf06,	// (0x000367a9) listscroll_midp_info_pane_ParamLimits

0xaf06,	// (0x000367a9) listscroll_midp_info_pane

0xaeee,	// (0x00036791) listscroll_form_midp_pane_ParamLimits

0xaeee,	// (0x00036791) listscroll_form_midp_pane

0xaefa,	// (0x0003679d) scroll_bar_cp050

0xe4a2,	// (0x00039d45) list_midp_pane

0xc561,	// (0x00037e04) signal_pane_g2_cp

0xae20,	// (0x000366c3) listscroll_midp_info_pane_t1_ParamLimits

0xae20,	// (0x000366c3) listscroll_midp_info_pane_t1

0xae38,	// (0x000366db) listscroll_midp_info_pane_t2_ParamLimits

0xae38,	// (0x000366db) listscroll_midp_info_pane_t2

0xae76,	// (0x00036719) listscroll_midp_info_pane_t3_ParamLimits

0xae76,	// (0x00036719) listscroll_midp_info_pane_t3

0xaeb0,	// (0x00036753) listscroll_midp_info_pane_t4_ParamLimits

0xaeb0,	// (0x00036753) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0003b0cd) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0003b0cd) listscroll_midp_info_pane_t

0x8021,	// (0x000338c4) scroll_pane_cp21

0xadc4,	// (0x00036667) form_midp_field_choice_group_pane

0xadcd,	// (0x00036670) form_midp_field_text_pane

0xae06,	// (0x000366a9) form_midp_field_time_pane

0xae0e,	// (0x000366b1) form_midp_gauge_slider_pane

0xae17,	// (0x000366ba) form_midp_gauge_wait_pane

0x7651,	// (0x00032ef4) form_midp_image_pane

0x6eb9,	// (0x0003275c) list_single_midp_pane_ParamLimits

0x6eb9,	// (0x0003275c) list_single_midp_pane

0xad92,	// (0x00036635) form_midp_field_text_pane_t1

0xabe8,	// (0x0003648b) input_focus_pane_cp050

0xadb3,	// (0x00036656) list_midp_form_text_pane

0xad61,	// (0x00036604) form_midp_field_choice_group_pane_t1

0xad6f,	// (0x00036612) input_focus_pane_cp051

0xad83,	// (0x00036626) list_midp_choice_pane

0x7651,	// (0x00032ef4) status_idle_pane

0xad45,	// (0x000365e8) form_midp_field_time_pane_t1

0x7492,	// (0x00032d35) wait_anim_pane_g2_copy1

0xad53,	// (0x000365f6) form_midp_field_time_pane_t2

0x0001,

0xa843,	// (0x000360e6) aid_navinavi_width_2_pane

0xf825,	// (0x0003b0c8) form_midp_field_time_pane_t

0x7651,	// (0x00032ef4) input_focus_pane_cp052

0x7651,	// (0x00032ef4) bg_input_focus_pane_cp040

0xad21,	// (0x000365c4) form_midp_gauge_slider_pane_t1

0xad2f,	// (0x000365d2) form_midp_gauge_slider_pane_t2

0xe486,	// (0x00039d29) form_midp_gauge_slider_pane_t3

0xe494,	// (0x00039d37) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0003b0bf) form_midp_gauge_slider_pane_t

0xad3d,	// (0x000365e0) form_midp_slider_pane

0x77e5,	// (0x00033088) bg_input_focus_pane_cp041_ParamLimits

0x77e5,	// (0x00033088) bg_input_focus_pane_cp041

0xacf1,	// (0x00036594) form_midp_gauge_wait_pane_t1_ParamLimits

0xacf1,	// (0x00036594) form_midp_gauge_wait_pane_t1

0xad03,	// (0x000365a6) form_midp_gauge_wait_pane_t2_ParamLimits

0xad03,	// (0x000365a6) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0003b0ba) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0003b0ba) form_midp_gauge_wait_pane_t

0xad15,	// (0x000365b8) form_midp_wait_pane_ParamLimits

0xad15,	// (0x000365b8) form_midp_wait_pane

0xacbb,	// (0x0003655e) form_midp_image_pane_g1

0xacc4,	// (0x00036567) form_midp_image_pane_t1

0xacd3,	// (0x00036576) form_midp_image_pane_t2

0xace2,	// (0x00036585) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0003b0b3) form_midp_image_pane_t

0xacb2,	// (0x00036555) list_single_midp_pane_g1

0x6eaa,	// (0x0003274d) list_single_midp_pane_t1

0xac9e,	// (0x00036541) list_midp_form_item_pane_ParamLimits

0xac9e,	// (0x00036541) list_midp_form_item_pane

0xa7eb,	// (0x0003608e) list_midp_form_item_pane_t1

0xa7fa,	// (0x0003609d) midp_ticker_pane_g1

0xa806,	// (0x000360a9) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0003b000) midp_ticker_pane_g

0xa812,	// (0x000360b5) midp_ticker_pane_t1

0xbc4a,	// (0x000374ed) midp_editing_number_pane_t1

0xbcd2,	// (0x00037575) midp_editing_number_pane

0xbcde,	// (0x00037581) midp_ticker_pane

0xbc3a,	// (0x000374dd) ai_message_heading_pane

0x7651,	// (0x00032ef4) bg_popup_window_pane_cp14

0xbc42,	// (0x000374e5) listscroll_ai_message_pane

0xbbc4,	// (0x00037467) ai_message_heading_pane_g1_ParamLimits

0xbbc4,	// (0x00037467) ai_message_heading_pane_g1

0xbbd0,	// (0x00037473) ai_message_heading_pane_g2_ParamLimits

0xbbd0,	// (0x00037473) ai_message_heading_pane_g2

0xbbdc,	// (0x0003747f) ai_message_heading_pane_g3_ParamLimits

0xbbdc,	// (0x0003747f) ai_message_heading_pane_g3

0xbbe8,	// (0x0003748b) ai_message_heading_pane_g4_ParamLimits

0xbbe8,	// (0x0003748b) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0003b1f4) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0003b1f4) ai_message_heading_pane_g

0xbbf4,	// (0x00037497) ai_message_heading_pane_t1_ParamLimits

0xbbf4,	// (0x00037497) ai_message_heading_pane_t1

0xbc0e,	// (0x000374b1) ai_message_heading_pane_t2_ParamLimits

0xbc0e,	// (0x000374b1) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0003b1fd) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0003b1fd) ai_message_heading_pane_t

0xbc20,	// (0x000374c3) bg_popup_heading_pane_cp1_ParamLimits

0xbc20,	// (0x000374c3) bg_popup_heading_pane_cp1

0xbbb2,	// (0x00037455) list_ai_message_pane_ParamLimits

0xbbb2,	// (0x00037455) list_ai_message_pane

0x8021,	// (0x000338c4) scroll_pane_cp10

0xbb4e,	// (0x000373f1) list_ai_message_pane_g1

0xbb56,	// (0x000373f9) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0003b1d1) list_ai_message_pane_g

0xbb5e,	// (0x00037401) list_ai_message_pane_t1_ParamLimits

0xbb5e,	// (0x00037401) list_ai_message_pane_t1

0xbb73,	// (0x00037416) list_ai_message_pane_t2_ParamLimits

0xbb73,	// (0x00037416) list_ai_message_pane_t2

0xbb88,	// (0x0003742b) list_ai_message_pane_t3_ParamLimits

0xbb88,	// (0x0003742b) list_ai_message_pane_t3

0xbb9d,	// (0x00037440) list_ai_message_pane_t4_ParamLimits

0xbb9d,	// (0x00037440) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0003b1d6) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0003b1d6) list_ai_message_pane_t

0xbb3c,	// (0x000373df) cell_ai_soft_ind_pane_ParamLimits

0xbb3c,	// (0x000373df) cell_ai_soft_ind_pane

0xa824,	// (0x000360c7) cell_ai_soft_ind_pane_g1_ParamLimits

0xa824,	// (0x000360c7) cell_ai_soft_ind_pane_g1

0x7651,	// (0x00032ef4) grid_highlight_cp1

0xa831,	// (0x000360d4) text_secondary_cp56_ParamLimits

0xa831,	// (0x000360d4) text_secondary_cp56

0xbb11,	// (0x000373b4) example_general_pane_ParamLimits

0xbb11,	// (0x000373b4) example_general_pane

0xbb1d,	// (0x000373c0) example_parent_pane_g1_ParamLimits

0xbb1d,	// (0x000373c0) example_parent_pane_g1

0xbb29,	// (0x000373cc) example_parent_pane_t1_ParamLimits

0xbb29,	// (0x000373cc) example_parent_pane_t1

0x906c,	// (0x0003490f) popup_preview_text_window_ParamLimits

0x906c,	// (0x0003490f) popup_preview_text_window

0x8b20,	// (0x000343c3) list_single_pane_cp2_g4

0x7a86,	// (0x00033329) bg_popup_preview_window_pane_ParamLimits

0x7a86,	// (0x00033329) bg_popup_preview_window_pane

0xb8c8,	// (0x0003716b) popup_preview_text_window_t1_ParamLimits

0xb8c8,	// (0x0003716b) popup_preview_text_window_t1

0xb8e6,	// (0x00037189) popup_preview_text_window_t2_ParamLimits

0xb8e6,	// (0x00037189) popup_preview_text_window_t2

0xb92f,	// (0x000371d2) popup_preview_text_window_t3_ParamLimits

0xb92f,	// (0x000371d2) popup_preview_text_window_t3

0xb974,	// (0x00037217) popup_preview_text_window_t4_ParamLimits

0xb974,	// (0x00037217) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0003b1a5) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0003b1a5) popup_preview_text_window_t

0xb9f2,	// (0x00037295) scroll_pane_cp11

0xab68,	// (0x0003640b) bg_popup_preview_window_pane_g1

0xb888,	// (0x0003712b) bg_popup_preview_window_pane_g2

0xb890,	// (0x00037133) bg_popup_preview_window_pane_g3

0xb898,	// (0x0003713b) bg_popup_preview_window_pane_g4

0xb8a0,	// (0x00037143) bg_popup_preview_window_pane_g5

0xb8a8,	// (0x0003714b) bg_popup_preview_window_pane_g6

0xb8b0,	// (0x00037153) bg_popup_preview_window_pane_g7

0xb8b8,	// (0x0003715b) bg_popup_preview_window_pane_g8

0x74a4,	// (0x00032d47) aid_popup_width_pane

0x904e,	// (0x000348f1) popup_midp_note_alarm_window_ParamLimits

0x904e,	// (0x000348f1) popup_midp_note_alarm_window

0x7ed2,	// (0x00033775) data_form_pane_ParamLimits

0x6b81,	// (0x00032424) form_field_data_pane_g1

0x6b89,	// (0x0003242c) form_field_data_pane_t1_ParamLimits

0x7ede,	// (0x00033781) input_focus_pane_ParamLimits

0x7eec,	// (0x0003378f) data_form_wide_pane_ParamLimits

0x6ba1,	// (0x00032444) form_field_data_wide_pane_g1

0x6bad,	// (0x00032450) form_field_data_wide_pane_t1_ParamLimits

0x7c45,	// (0x000334e8) input_focus_pane_cp6_ParamLimits

0xddce,	// (0x00039671) input_popup_find_pane_g1_ParamLimits

0xddce,	// (0x00039671) input_popup_find_pane_g1

0x82cb,	// (0x00033b6e) aid_navi_side_left_pane

0x82db,	// (0x00033b7e) aid_navi_side_right_pane

0xb370,	// (0x00036c13) bg_popup_window_pane_cp30_ParamLimits

0xb370,	// (0x00036c13) bg_popup_window_pane_cp30

0xb3ea,	// (0x00036c8d) popup_midp_note_alarm_window_g1_ParamLimits

0xb3ea,	// (0x00036c8d) popup_midp_note_alarm_window_g1

0xb41a,	// (0x00036cbd) popup_midp_note_alarm_window_t1_ParamLimits

0xb41a,	// (0x00036cbd) popup_midp_note_alarm_window_t1

0xb4bb,	// (0x00036d5e) popup_midp_note_alarm_window_t2_ParamLimits

0xb4bb,	// (0x00036d5e) popup_midp_note_alarm_window_t2

0xb569,	// (0x00036e0c) popup_midp_note_alarm_window_t3_ParamLimits

0xb569,	// (0x00036e0c) popup_midp_note_alarm_window_t3

0xb591,	// (0x00036e34) popup_midp_note_alarm_window_t4_ParamLimits

0xb591,	// (0x00036e34) popup_midp_note_alarm_window_t4

0xb5b1,	// (0x00036e54) popup_midp_note_alarm_window_t5_ParamLimits

0xb5b1,	// (0x00036e54) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0003b142) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0003b142) popup_midp_note_alarm_window_t

0xb65d,	// (0x00036f00) wait_bar_pane_cp1_ParamLimits

0xb65d,	// (0x00036f00) wait_bar_pane_cp1

0x7651,	// (0x00032ef4) wait_anim_pane_copy1

0x7651,	// (0x00032ef4) wait_border_pane_copy1

0xb0b6,	// (0x00036959) wait_border_pane_g1_copy1

0x6bc7,	// (0x0003246a) form_field_popup_pane_g1

0x6bcf,	// (0x00032472) form_field_popup_pane_t1_ParamLimits

0x7ede,	// (0x00033781) input_focus_pane_cp7_ParamLimits

0x7ed2,	// (0x00033775) list_form_pane_ParamLimits

0x6be7,	// (0x0003248a) form_field_popup_wide_pane_g1

0x6bef,	// (0x00032492) form_field_popup_wide_pane_t1_ParamLimits

0x7ede,	// (0x00033781) input_focus_pane_cp8_ParamLimits

0x7f0c,	// (0x000337af) list_form_wide_pane_ParamLimits

0xbd72,	// (0x00037615) aid_size_cell_graphic_pane

0x6c7b,	// (0x0003251e) data_form_pane_t1_ParamLimits

0x6ee0,	// (0x00032783) data_form_wide_pane_t1_ParamLimits

0xe1fe,	// (0x00039aa1) bg_status_flat_pane

0xdb4e,	// (0x000393f1) title_pane_t1_ParamLimits

0x77ad,	// (0x00033050) title_pane_t2_ParamLimits

0x77d3,	// (0x00033076) title_pane_t3_ParamLimits

0xf557,	// (0x0003adfa) title_pane_t_ParamLimits

0xdeb1,	// (0x00039754) level_1_signal_ParamLimits

0xdebe,	// (0x00039761) level_2_signal_ParamLimits

0xdecb,	// (0x0003976e) level_3_signal_ParamLimits

0xded8,	// (0x0003977b) level_4_signal_ParamLimits

0xdee5,	// (0x00039788) level_5_signal_ParamLimits

0xdef2,	// (0x00039795) level_6_signal_ParamLimits

0xdeff,	// (0x000397a2) level_7_signal_ParamLimits

0xdeb1,	// (0x00039754) level_1_battery_ParamLimits

0xdebe,	// (0x00039761) level_2_battery_ParamLimits

0xdecb,	// (0x0003976e) level_3_battery_ParamLimits

0xded8,	// (0x0003977b) level_4_battery_ParamLimits

0xdee5,	// (0x00039788) level_5_battery_ParamLimits

0xdef2,	// (0x00039795) level_6_battery_ParamLimits

0xdeff,	// (0x000397a2) level_7_battery_ParamLimits

0xb29f,	// (0x00036b42) bg_status_flat_pane_g1

0xb2a7,	// (0x00036b4a) bg_status_flat_pane_g2

0xb2af,	// (0x00036b52) bg_status_flat_pane_g3

0xb2b7,	// (0x00036b5a) bg_status_flat_pane_g4

0xb2bf,	// (0x00036b62) bg_status_flat_pane_g5

0xb2c7,	// (0x00036b6a) bg_status_flat_pane_g6

0xb2cf,	// (0x00036b72) bg_status_flat_pane_g7

0xdbb6,	// (0x00039459) tabs_3_active_pane_t1_ParamLimits

0xdbb6,	// (0x00039459) tabs_3_passive_pane_t1_ParamLimits

0xdbd0,	// (0x00039473) tabs_4_active_pane_t1_ParamLimits

0xdbd0,	// (0x00039473) tabs_4_1_passive_pane_t1_ParamLimits

0xdde2,	// (0x00039685) tabs_2_active_pane_t1_ParamLimits

0xdde2,	// (0x00039685) tabs_2_passive_pane_t1_ParamLimits

0xa786,	// (0x00036029) bg_active_tab_pane_cp4_ParamLimits

0xddf4,	// (0x00039697) tabs_2_long_active_pane_t1_ParamLimits

0xde07,	// (0x000396aa) bg_passive_tab_pane_cp4_ParamLimits

0x92b0,	// (0x00034b53) list_single_midp_graphic_pane_t1_ParamLimits

0xa786,	// (0x00036029) bg_active_tab_pane_cp5_ParamLimits

0xde13,	// (0x000396b6) tabs_3_long_active_pane_t1_ParamLimits

0xde07,	// (0x000396aa) bg_passive_tab_pane_cp5_ParamLimits

0x92b0,	// (0x00034b53) list_single_midp_graphic_pane_t1

0xe1fe,	// (0x00039aa1) bg_status_flat_pane_ParamLimits

0xaa3b,	// (0x000362de) indicator_pane_cp2_ParamLimits

0xaa3b,	// (0x000362de) indicator_pane_cp2

0xe341,	// (0x00039be4) navi_pane_srt_ParamLimits

0xe341,	// (0x00039be4) navi_pane_srt

0xaa63,	// (0x00036306) popup_clock_digital_analogue_window_cp1

0x78bb,	// (0x0003315e) indicator_pane_t1

0xa7d0,	// (0x00036073) copy_highlight_pane

0xa7d0,	// (0x00036073) cursor_graphics_pane

0xa7d0,	// (0x00036073) graphic_within_text_pane

0xa7d0,	// (0x00036073) link_highlight_pane

0xb9b5,	// (0x00037258) popup_preview_text_window_t5_ParamLimits

0xb9b5,	// (0x00037258) popup_preview_text_window_t5

0xa84b,	// (0x000360ee) cursor_digital_pane

0xa84b,	// (0x000360ee) cursor_primary_pane

0xa85c,	// (0x000360ff) cursor_primary_small_pane

0xa864,	// (0x00036107) cursor_secondary_pane

0xa86c,	// (0x0003610f) cursor_title_pane

0xa84b,	// (0x000360ee) link_highlight_digital_pane

0xa853,	// (0x000360f6) link_highlight_primary_pane

0xa85c,	// (0x000360ff) link_highlight_primary_small_pane

0xa864,	// (0x00036107) link_highlight_secondary_pane

0xa86c,	// (0x0003610f) link_highlight_title_pane

0xa84b,	// (0x000360ee) copy_highlight_digital_pane

0xa84b,	// (0x000360ee) copy_highlight_primary_pane

0xa85c,	// (0x000360ff) copy_highlight_primary_small_pane

0xa864,	// (0x00036107) copy_highlight_secondary_pane

0xa86c,	// (0x0003610f) copy_highlight_title_pane

0xa864,	// (0x00036107) graphic_text_digital_pane

0xb31f,	// (0x00036bc2) graphic_text_primary_pane

0xb328,	// (0x00036bcb) graphic_text_primary_small_pane

0xa85c,	// (0x000360ff) graphic_text_secondary_pane

0xa84b,	// (0x000360ee) graphic_text_title_pane

0xe0b2,	// (0x00039955) cursor_primary_pane_g1

0xb311,	// (0x00036bb4) cursor_text_primary_t1

0xe4e6,	// (0x00039d89) cursor_primary_small_pane_g1

0xb303,	// (0x00036ba6) cursor_text_primary_small_t1

0xe4de,	// (0x00039d81) cursor_primary_small_pane_g1_copy1

0xb2f5,	// (0x00036b98) cursor_text_primary_small_t1_copy1

0xb2e7,	// (0x00036b8a) cursor_text_title_t1

0xe4d6,	// (0x00039d79) cursor_title_pane_g1

0xe0b2,	// (0x00039955) cursor_digital_pane_g1

0xa874,	// (0x00036117) cursor_text_digital_t1

0xa882,	// (0x00036125) link_highlight_primary_pane_g1

0xb290,	// (0x00036b33) link_highlight_primary_pane_t1

0xa882,	// (0x00036125) link_highlight_primary_small_pane_g1

0xa88a,	// (0x0003612d) link_highlight_primary_small_pane_t1

0xa899,	// (0x0003613c) link_highlight_secondary_pane_g1

0xa8a1,	// (0x00036144) link_highlight_secondary_pane_t1

0xb1f5,	// (0x00036a98) link_highlight_title_pane_g1

0xb20c,	// (0x00036aaf) link_highlight_title_pane_t1

0xb1f5,	// (0x00036a98) link_highlight_digital_pane_g1

0xb1fd,	// (0x00036aa0) link_highlight_digital_pane_t1

0xb0d1,	// (0x00036974) copy_highlight_primary_pane_g1

0xb0f7,	// (0x0003699a) copy_highlight_primary_pane_t1

0xb0d1,	// (0x00036974) copy_highlight_primary_small_pane_g1

0xb0e8,	// (0x0003698b) copy_highlight_primary_small_pane_t1

0xa8b0,	// (0x00036153) copy_highlight_secondary_pane_g1

0xa8b8,	// (0x0003615b) copy_highlight_secondary_pane_t1

0xb0d1,	// (0x00036974) copy_highlight_title_pane_g1

0xb0d9,	// (0x0003697c) copy_highlight_title_pane_t1

0xb0d1,	// (0x00036974) copy_highlight_digital_pane_g1

0xbe93,	// (0x00037736) copy_highlight_digital_pane_t1

0xbde7,	// (0x0003768a) graphic_text_primary_pane_g1

0xbe77,	// (0x0003771a) graphic_text_primary_pane_t1

0xbe85,	// (0x00037728) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003b26c) graphic_text_primary_pane_t

0xbe53,	// (0x000376f6) graphic_text_primary_small_pane_g1

0xbe5b,	// (0x000376fe) graphic_text_primary_small_pane_t1

0xbe69,	// (0x0003770c) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003b267) graphic_text_primary_small_pane_t

0xbe2f,	// (0x000376d2) graphic_text_secondary_pane_g1

0xbe37,	// (0x000376da) graphic_text_secondary_pane_t1

0xbe45,	// (0x000376e8) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003b262) graphic_text_secondary_pane_t

0xbe0b,	// (0x000376ae) graphic_text_title_pane_g1

0xbe13,	// (0x000376b6) graphic_text_title_pane_t1

0xbe21,	// (0x000376c4) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003b25d) graphic_text_title_pane_t

0xbde7,	// (0x0003768a) graphic_text_digital_pane_g1

0xbdef,	// (0x00037692) graphic_text_digital_pane_t1

0xbdfd,	// (0x000376a0) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003b258) graphic_text_digital_pane_t

0x77e5,	// (0x00033088) navi_icon_pane_srt_ParamLimits

0x77e5,	// (0x00033088) navi_icon_pane_srt

0x7651,	// (0x00032ef4) navi_midp_pane_srt

0x7651,	// (0x00032ef4) navi_navi_pane_srt

0x77e5,	// (0x00033088) navi_text_pane_srt_ParamLimits

0x77e5,	// (0x00033088) navi_text_pane_srt

0xb841,	// (0x000370e4) navi_navi_icon_text_pane_srt

0xb849,	// (0x000370ec) navi_navi_pane_srt_g1_ParamLimits

0xb849,	// (0x000370ec) navi_navi_pane_srt_g1

0xb85b,	// (0x000370fe) navi_navi_pane_srt_g2_ParamLimits

0xb85b,	// (0x000370fe) navi_navi_pane_srt_g2

0x0001,

0xf8ea,	// (0x0003b18d) navi_navi_pane_srt_g_ParamLimits

0xf8ea,	// (0x0003b18d) navi_navi_pane_srt_g

0xb86d,	// (0x00037110) navi_navi_tabs_pane_srt

0xb841,	// (0x000370e4) navi_navi_text_pane_srt

0xb841,	// (0x000370e4) navi_navi_volume_pane_srt

0xbdd8,	// (0x0003767b) navi_navi_text_pane_srt_t1

0x9671,	// (0x00034f14) navi_navi_volume_pane_srt_g1

0x9679,	// (0x00034f1c) volume_small_pane_srt_ParamLimits

0x9679,	// (0x00034f1c) volume_small_pane_srt

0x8b9f,	// (0x00034442) volume_small_pane_srt_g1_ParamLimits

0x8b9f,	// (0x00034442) volume_small_pane_srt_g1

0x8baf,	// (0x00034452) volume_small_pane_srt_g2_ParamLimits

0x8baf,	// (0x00034452) volume_small_pane_srt_g2

0x8bc0,	// (0x00034463) volume_small_pane_srt_g3_ParamLimits

0x8bc0,	// (0x00034463) volume_small_pane_srt_g3

0x8bd1,	// (0x00034474) volume_small_pane_srt_g4_ParamLimits

0x8bd1,	// (0x00034474) volume_small_pane_srt_g4

0x8be2,	// (0x00034485) volume_small_pane_srt_g5_ParamLimits

0x8be2,	// (0x00034485) volume_small_pane_srt_g5

0x8bf3,	// (0x00034496) volume_small_pane_srt_g6_ParamLimits

0x8bf3,	// (0x00034496) volume_small_pane_srt_g6

0x8c04,	// (0x000344a7) volume_small_pane_srt_g7_ParamLimits

0x8c04,	// (0x000344a7) volume_small_pane_srt_g7

0x8c15,	// (0x000344b8) volume_small_pane_srt_g8_ParamLimits

0x8c15,	// (0x000344b8) volume_small_pane_srt_g8

0x8c26,	// (0x000344c9) volume_small_pane_srt_g9_ParamLimits

0x8c26,	// (0x000344c9) volume_small_pane_srt_g9

0x8c37,	// (0x000344da) volume_small_pane_srt_g10_ParamLimits

0x8c37,	// (0x000344da) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0003b005) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0003b005) volume_small_pane_srt_g

0x7b2f,	// (0x000333d2) query_popup_data_pane_cp2

0xbdbe,	// (0x00037661) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xbdbe,	// (0x00037661) navi_navi_icon_text_pane_srt_t1

0xb31f,	// (0x00036bc2) navi_tabs_2_long_pane_srt

0xb31f,	// (0x00036bc2) navi_tabs_2_pane_srt

0xb31f,	// (0x00036bc2) navi_tabs_3_long_pane_srt

0xb31f,	// (0x00036bc2) navi_tabs_3_pane_srt

0xb31f,	// (0x00036bc2) navi_tabs_4_pane_srt

0x9651,	// (0x00034ef4) tabs_2_active_pane_srt_ParamLimits

0x9651,	// (0x00034ef4) tabs_2_active_pane_srt

0x9661,	// (0x00034f04) tabs_2_passive_pane_srt_ParamLimits

0x9661,	// (0x00034f04) tabs_2_passive_pane_srt

0x8db4,	// (0x00034657) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8db4,	// (0x00034657) bg_passive_tab_pane_cp1_srt

0xbd9c,	// (0x0003763f) bg_passive_tab_pane_g1_cp1_srt

0x87b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp1_srt

0xbda5,	// (0x00037648) bg_passive_tab_pane_g3_cp1_srt

0x77e5,	// (0x00033088) bg_active_tab_pane_cp1_srt_ParamLimits

0x77e5,	// (0x00033088) bg_active_tab_pane_cp1_srt

0xbdae,	// (0x00037651) tabs_2_active_pane_srt_g1

0xdde2,	// (0x00039685) tabs_2_active_pane_srt_t1_ParamLimits

0xdde2,	// (0x00039685) tabs_2_active_pane_srt_t1

0xbd9c,	// (0x0003763f) bg_active_tab_pane_g1_cp1_srt

0x87b8,	// (0x0003405b) bg_active_tab_pane_g2_cp1_srt

0xbda5,	// (0x00037648) bg_active_tab_pane_g3_cp1_srt

0x961e,	// (0x00034ec1) tabs_3_active_pane_srt_ParamLimits

0x961e,	// (0x00034ec1) tabs_3_active_pane_srt

0x962f,	// (0x00034ed2) tabs_3_passive_pane_cp_srt_ParamLimits

0x962f,	// (0x00034ed2) tabs_3_passive_pane_cp_srt

0x9640,	// (0x00034ee3) tabs_3_passive_pane_srt_ParamLimits

0x9640,	// (0x00034ee3) tabs_3_passive_pane_srt

0x8db4,	// (0x00034657) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8db4,	// (0x00034657) bg_passive_tab_pane_cp2_srt

0xa8c7,	// (0x0003616a) bg_passive_tab_pane_g1_cp2_srt

0x87b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp2_srt

0xa8d0,	// (0x00036173) bg_passive_tab_pane_g3_cp2_srt

0x77e5,	// (0x00033088) bg_active_tab_pane_cp2_srt_ParamLimits

0x77e5,	// (0x00033088) bg_active_tab_pane_cp2_srt

0xbd94,	// (0x00037637) tabs_3_active_pane_srt_g1

0xdbb6,	// (0x00039459) tabs_3_active_pane_srt_t1_ParamLimits

0xdbb6,	// (0x00039459) tabs_3_active_pane_srt_t1

0xa8c7,	// (0x0003616a) bg_active_tab_pane_g1_cp2_srt

0x87b8,	// (0x0003405b) bg_active_tab_pane_g2_cp2_srt

0xa8d0,	// (0x00036173) bg_active_tab_pane_g3_cp2_srt

0x95d6,	// (0x00034e79) tabs_4_active_pane_srt_ParamLimits

0x95d6,	// (0x00034e79) tabs_4_active_pane_srt

0x95e8,	// (0x00034e8b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x95e8,	// (0x00034e8b) tabs_4_passive_pane_cp2_srt

0x8d9c,	// (0x0003463f) aid_size_cell_toolbar

0xde07,	// (0x000396aa) main_idle_act_pane_ParamLimits

0x8f09,	// (0x000347ac) popup_large_graphic_colour_window_ParamLimits

0x91bd,	// (0x00034a60) popup_toolbar_window_ParamLimits

0x91bd,	// (0x00034a60) popup_toolbar_window

0x9591,	// (0x00034e34) list_single_graphic_2heading_pane_ParamLimits

0x9591,	// (0x00034e34) list_single_graphic_2heading_pane

0x833b,	// (0x00033bde) aid_size_cell_apps_grid_lsc_pane

0x834d,	// (0x00033bf0) aid_size_cell_apps_grid_prt_pane

0x8db4,	// (0x00034657) bg_wml_button_pane_cp1_ParamLimits

0x8db4,	// (0x00034657) bg_wml_button_pane_cp1

0xad92,	// (0x00036635) form_midp_field_text_pane_t1_ParamLimits

0xabe8,	// (0x0003648b) input_focus_pane_cp050_ParamLimits

0xadb3,	// (0x00036656) list_midp_form_text_pane_ParamLimits

0xad6f,	// (0x00036612) input_focus_pane_cp051_ParamLimits

0xad83,	// (0x00036626) list_midp_choice_pane_ParamLimits

0xac6c,	// (0x0003650f) list_single_2graphic_pane_cp3_ParamLimits

0xac6c,	// (0x0003650f) list_single_2graphic_pane_cp3

0xac7f,	// (0x00036522) list_single_midp_graphic_pane_ParamLimits

0xac7f,	// (0x00036522) list_single_midp_graphic_pane

0x6dc2,	// (0x00032665) list_single_graphic_2heading_pane_g1_ParamLimits

0x6dc2,	// (0x00032665) list_single_graphic_2heading_pane_g1

0x6dce,	// (0x00032671) list_single_graphic_2heading_pane_g4_ParamLimits

0x6dce,	// (0x00032671) list_single_graphic_2heading_pane_g4

0x697e,	// (0x00032221) list_single_graphic_2heading_pane_g5_ParamLimits

0x697e,	// (0x00032221) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0003b058) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0003b058) list_single_graphic_2heading_pane_g

0x6dda,	// (0x0003267d) list_single_graphic_2heading_pane_t1_ParamLimits

0x6dda,	// (0x0003267d) list_single_graphic_2heading_pane_t1

0x6dee,	// (0x00032691) list_single_graphic_2heading_pane_t2_ParamLimits

0x6dee,	// (0x00032691) list_single_graphic_2heading_pane_t2

0x6e08,	// (0x000326ab) list_single_graphic_2heading_pane_t3_ParamLimits

0x6e08,	// (0x000326ab) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0003b05f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0003b05f) list_single_graphic_2heading_pane_t

0xaab2,	// (0x00036355) bg_popup_sub_pane_cp2

0xaad8,	// (0x0003637b) grid_toobar_pane

0x924c,	// (0x00034aef) cell_toolbar_pane_ParamLimits

0x924c,	// (0x00034aef) cell_toolbar_pane

0xab0e,	// (0x000363b1) cell_toolbar_pane_g1_ParamLimits

0xab0e,	// (0x000363b1) cell_toolbar_pane_g1

0xab20,	// (0x000363c3) cell_toolbar_pane_g2_ParamLimits

0xab20,	// (0x000363c3) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0003b06d) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0003b06d) cell_toolbar_pane_g

0xab42,	// (0x000363e5) grid_highlight_pane_cp2_ParamLimits

0xab42,	// (0x000363e5) grid_highlight_pane_cp2

0xab5c,	// (0x000363ff) toolbar_button_pane

0xab68,	// (0x0003640b) toolbar_button_pane_g1

0xab70,	// (0x00036413) toolbar_button_pane_g2

0xab78,	// (0x0003641b) toolbar_button_pane_g3

0xab80,	// (0x00036423) toolbar_button_pane_g4

0xab88,	// (0x0003642b) toolbar_button_pane_g5

0xab90,	// (0x00036433) toolbar_button_pane_g6

0xab98,	// (0x0003643b) toolbar_button_pane_g7

0xaba0,	// (0x00036443) toolbar_button_pane_g8

0xaba8,	// (0x0003644b) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0003b072) toolbar_button_pane_g

0x927b,	// (0x00034b1e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x927b,	// (0x00034b1e) list_single_2graphic_pane_g1_cp3

0x9287,	// (0x00034b2a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9287,	// (0x00034b2a) list_single_2graphic_pane_g2_cp3

0x8a5c,	// (0x000342ff) list_single_2graphic_pane_g3_cp3

0xabb0,	// (0x00036453) list_single_2graphic_pane_g4_cp3_ParamLimits

0xabb0,	// (0x00036453) list_single_2graphic_pane_g4_cp3

0x9296,	// (0x00034b39) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9296,	// (0x00034b39) list_single_2graphic_pane_t1_cp3

0x8a50,	// (0x000342f3) list_single_midp_graphic_pane_g2_ParamLimits

0x8a50,	// (0x000342f3) list_single_midp_graphic_pane_g2

0x6d95,	// (0x00032638) aid_zoom_text_primary

0x8da4,	// (0x00034647) aid_zoom_text_secondary

0xe0ea,	// (0x0003998d) status_small_pane_g7_ParamLimits

0xe0ea,	// (0x0003998d) status_small_pane_g7

0xe10d,	// (0x000399b0) status_small_pane_t1_ParamLimits

0xdb31,	// (0x000393d4) title_pane_g2

0x0003,

0xf54e,	// (0x0003adf1) title_pane_g

0xdcf9,	// (0x0003959c) aid_size_cell_colour_1_pane_ParamLimits

0xdcf9,	// (0x0003959c) aid_size_cell_colour_1_pane

0xdd0d,	// (0x000395b0) aid_size_cell_colour_2_pane_ParamLimits

0xdd0d,	// (0x000395b0) aid_size_cell_colour_2_pane

0xdd21,	// (0x000395c4) aid_size_cell_colour_3_pane_ParamLimits

0xdd21,	// (0x000395c4) aid_size_cell_colour_3_pane

0xdd35,	// (0x000395d8) aid_size_cell_colour_4_pane_ParamLimits

0xdd35,	// (0x000395d8) aid_size_cell_colour_4_pane

0x81ea,	// (0x00033a8d) title_pane_stacon_g1_ParamLimits

0x81ea,	// (0x00033a8d) title_pane_stacon_g1

0xb14e,	// (0x000369f1) popup_note_wait_window_g3_ParamLimits

0xb14e,	// (0x000369f1) popup_note_wait_window_g3

0xb1c4,	// (0x00036a67) popup_note_wait_window_t5_ParamLimits

0xb1c4,	// (0x00036a67) popup_note_wait_window_t5

0x7651,	// (0x00032ef4) main_feb_china_hwr_fs_writing_pane

0x8e1e,	// (0x000346c1) popup_feb_china_hwr_fs_window_ParamLimits

0x8e1e,	// (0x000346c1) popup_feb_china_hwr_fs_window

0x92de,	// (0x00034b81) aid_size_cell_hwr_fs_ParamLimits

0x92de,	// (0x00034b81) aid_size_cell_hwr_fs

0xabe8,	// (0x0003648b) bg_popup_sub_pane_cp3_ParamLimits

0xabe8,	// (0x0003648b) bg_popup_sub_pane_cp3

0x92f3,	// (0x00034b96) grid_hwr_fs_pane_ParamLimits

0x92f3,	// (0x00034b96) grid_hwr_fs_pane

0x9307,	// (0x00034baa) linegrid_hwr_fs_pane_ParamLimits

0x9307,	// (0x00034baa) linegrid_hwr_fs_pane

0x9317,	// (0x00034bba) cell_hwr_fs_pane_ParamLimits

0x9317,	// (0x00034bba) cell_hwr_fs_pane

0xabf4,	// (0x00036497) linegrid_hwr_fs_pane_g1_ParamLimits

0xabf4,	// (0x00036497) linegrid_hwr_fs_pane_g1

0xe45a,	// (0x00039cfd) linegrid_hwr_fs_pane_g2_ParamLimits

0xe45a,	// (0x00039cfd) linegrid_hwr_fs_pane_g2

0xac00,	// (0x000364a3) linegrid_hwr_fs_pane_g3_ParamLimits

0xac00,	// (0x000364a3) linegrid_hwr_fs_pane_g3

0x9335,	// (0x00034bd8) linegrid_hwr_fs_pane_g4_ParamLimits

0x9335,	// (0x00034bd8) linegrid_hwr_fs_pane_g4

0x934f,	// (0x00034bf2) linegrid_hwr_fs_pane_g5_ParamLimits

0x934f,	// (0x00034bf2) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0003b098) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0003b098) linegrid_hwr_fs_pane_g

0xac0c,	// (0x000364af) cell_hwr_fs_pane_g1_ParamLimits

0xac0c,	// (0x000364af) cell_hwr_fs_pane_g1

0xaa80,	// (0x00036323) cell_hwr_fs_pane_g2_ParamLimits

0xaa80,	// (0x00036323) cell_hwr_fs_pane_g2

0xe46c,	// (0x00039d0f) cell_hwr_fs_pane_g3_ParamLimits

0xe46c,	// (0x00039d0f) cell_hwr_fs_pane_g3

0xe479,	// (0x00039d1c) cell_hwr_fs_pane_g4_ParamLimits

0xe479,	// (0x00039d1c) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0003b0a3) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0003b0a3) cell_hwr_fs_pane_g

0x9365,	// (0x00034c08) cell_hwr_fs_pane_t1

0x7651,	// (0x00032ef4) grid_highlight_pane_cp6

0x7651,	// (0x00032ef4) main_idle_act2_pane

0x8008,	// (0x000338ab) aid_inside_area_popup_secondary

0xe504,	// (0x00039da7) aid_inside_area_window_primary_ParamLimits

0xe504,	// (0x00039da7) aid_inside_area_window_primary

0xbea2,	// (0x00037745) ai2_news_ticker_pane

0xbeaa,	// (0x0003774d) aid_size_cell_ai1_link_ParamLimits

0xbeaa,	// (0x0003774d) aid_size_cell_ai1_link

0xe820,	// (0x0003a0c3) popup_ai2_data_window_ParamLimits

0xe820,	// (0x0003a0c3) popup_ai2_data_window

0xbec4,	// (0x00037767) popup_ai2_link_window_ParamLimits

0xbec4,	// (0x00037767) popup_ai2_link_window

0xabe8,	// (0x0003648b) bg_popup_sub_pane_cp4_ParamLimits

0xabe8,	// (0x0003648b) bg_popup_sub_pane_cp4

0xbed8,	// (0x0003777b) grid_ai2_link_pane_ParamLimits

0xbed8,	// (0x0003777b) grid_ai2_link_pane

0xbeef,	// (0x00037792) popup_ai2_link_window_g1_ParamLimits

0xbeef,	// (0x00037792) popup_ai2_link_window_g1

0xbefb,	// (0x0003779e) popup_ai2_link_window_g2_ParamLimits

0xbefb,	// (0x0003779e) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003b271) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003b271) popup_ai2_link_window_g

0xbf0a,	// (0x000377ad) ai2_mp_button_pane

0xbf12,	// (0x000377b5) ai2_mp_volume_pane

0xad6f,	// (0x00036612) bg_popup_sub_pane_cp5_ParamLimits

0xad6f,	// (0x00036612) bg_popup_sub_pane_cp5

0xbf1a,	// (0x000377bd) heading_ai2_gene_pane_ParamLimits

0xbf1a,	// (0x000377bd) heading_ai2_gene_pane

0xbf26,	// (0x000377c9) list_ai2_gene_pane_ParamLimits

0xbf26,	// (0x000377c9) list_ai2_gene_pane

0xbf6e,	// (0x00037811) cell_ai2_link_pane_ParamLimits

0xbf6e,	// (0x00037811) cell_ai2_link_pane

0xbf84,	// (0x00037827) cell_ai2_link_pane_g1

0x7651,	// (0x00032ef4) grid_highlight_pane_cp7

0x968e,	// (0x00034f31) ai2_mp_volume_pane_g1

0xc019,	// (0x000378bc) ai2_mp_volume_pane_g2

0xe84b,	// (0x0003a0ee) list_ai2_gene_pane_t1

0xc021,	// (0x000378c4) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003b28a) ai2_mp_volume_pane_g

0x9696,	// (0x00034f39) volume_small_pane_cp3

0xc029,	// (0x000378cc) aid_size_cell_ai2_button

0xc031,	// (0x000378d4) grid_ai2_button_pane

0xc03a,	// (0x000378dd) cell_ai2_button_pane_ParamLimits

0xc03a,	// (0x000378dd) cell_ai2_button_pane

0x7492,	// (0x00032d35) cell_ai2_button_pane_g1

0x7651,	// (0x00032ef4) grid_highlight_pane_cp8

0xbfd9,	// (0x0003787c) ai2_gene_pane_t1_ParamLimits

0xbfd9,	// (0x0003787c) ai2_gene_pane_t1

0x8d92,	// (0x00034635) aid_height_parent_landscape

0xe602,	// (0x00039ea5) aid_height_set_list

0xbc96,	// (0x00037539) aid_size_parent

0xbd72,	// (0x00037615) aid_size_cell_graphic_pane_ParamLimits

0xbf36,	// (0x000377d9) popup_ai2_data_window_g1_ParamLimits

0xbf36,	// (0x000377d9) popup_ai2_data_window_g1

0xbf42,	// (0x000377e5) ai2_news_ticker_pane_g1

0xbf4a,	// (0x000377ed) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003b276) ai2_news_ticker_pane_g

0xbf52,	// (0x000377f5) ai2_news_ticker_pane_t1

0xbf60,	// (0x00037803) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003b27b) ai2_news_ticker_pane_t

0xbd53,	// (0x000375f6) heading_ai2_gene_pane_g1

0xbf8d,	// (0x00037830) heading_ai2_gene_pane_t1_ParamLimits

0xbf8d,	// (0x00037830) heading_ai2_gene_pane_t1

0xbfa2,	// (0x00037845) list_highlight_pane_cp6

0xe834,	// (0x0003a0d7) ai2_gene_pane_ParamLimits

0xe834,	// (0x0003a0d7) ai2_gene_pane

0xe859,	// (0x0003a0fc) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003b280) list_ai2_gene_pane_t

0xbfaa,	// (0x0003784d) list_highlight_pane_cp8_ParamLimits

0xbfaa,	// (0x0003784d) list_highlight_pane_cp8

0xbfbb,	// (0x0003785e) ai2_gene_pane_g1_ParamLimits

0xbfbb,	// (0x0003785e) ai2_gene_pane_g1

0xbfcd,	// (0x00037870) ai2_gene_pane_g2_ParamLimits

0xbfcd,	// (0x00037870) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003b285) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003b285) ai2_gene_pane_g

0x7dc6,	// (0x00033669) scroll_pane_cp12

0x8d49,	// (0x000345ec) control_pane_t3_ParamLimits

0x8d49,	// (0x000345ec) control_pane_t3

0xe0fe,	// (0x000399a1) status_small_pane_g8_ParamLimits

0xe0fe,	// (0x000399a1) status_small_pane_g8

0x8ede,	// (0x00034781) popup_find_window_ParamLimits

0x9060,	// (0x00034903) popup_note_image_window_ParamLimits

0x6804,	// (0x000320a7) list_double2_graphic_pane_vc_g1_ParamLimits

0x6804,	// (0x000320a7) list_double2_graphic_pane_vc_g1

0x7e2a,	// (0x000336cd) list_double2_graphic_pane_vc_g2_ParamLimits

0x7e2a,	// (0x000336cd) list_double2_graphic_pane_vc_g2

0x7e36,	// (0x000336d9) list_double2_graphic_pane_vc_g3_ParamLimits

0x7e36,	// (0x000336d9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0003b066) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0003b066) list_double2_graphic_pane_vc_g

0x67dc,	// (0x0003207f) list_double2_graphic_pane_vc_t1_ParamLimits

0x67dc,	// (0x0003207f) list_double2_graphic_pane_vc_t1

0x7e2a,	// (0x000336cd) list_single_heading_pane_vc_g1_ParamLimits

0x7e2a,	// (0x000336cd) list_single_heading_pane_vc_g1

0x7e36,	// (0x000336d9) list_single_heading_pane_vc_g2_ParamLimits

0x7e36,	// (0x000336d9) list_single_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x0003ae94) list_single_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x0003ae94) list_single_heading_pane_vc_g

0x6e20,	// (0x000326c3) list_single_heading_pane_vc_t1_ParamLimits

0x6e20,	// (0x000326c3) list_single_heading_pane_vc_t1

0x6e36,	// (0x000326d9) list_single_heading_pane_vc_t2_ParamLimits

0x6e36,	// (0x000326d9) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0003b087) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003b087) list_single_heading_pane_vc_t

0x92c6,	// (0x00034b69) list_setting_number_pane_vc_g1_ParamLimits

0x92c6,	// (0x00034b69) list_setting_number_pane_vc_g1

0x92d2,	// (0x00034b75) list_setting_number_pane_vc_g2_ParamLimits

0x92d2,	// (0x00034b75) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003b08c) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003b08c) list_setting_number_pane_vc_g

0x6e48,	// (0x000326eb) list_setting_number_pane_vc_t1_ParamLimits

0x6e48,	// (0x000326eb) list_setting_number_pane_vc_t1

0x6e5c,	// (0x000326ff) list_setting_number_pane_vc_t2_ParamLimits

0x6e5c,	// (0x000326ff) list_setting_number_pane_vc_t2

0x6e78,	// (0x0003271b) list_setting_number_pane_vc_t3_ParamLimits

0x6e78,	// (0x0003271b) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0003b091) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0003b091) list_setting_number_pane_vc_t

0x6e9e,	// (0x00032741) set_value_pane_vc_ParamLimits

0x6e9e,	// (0x00032741) set_value_pane_vc

0x9591,	// (0x00034e34) list_double2_graphic_pane_vc_ParamLimits

0x9591,	// (0x00034e34) list_double2_graphic_pane_vc

0xbcf1,	// (0x00037594) list_double2_large_graphic_pane_vc_ParamLimits

0xbcf1,	// (0x00037594) list_double2_large_graphic_pane_vc

0x9591,	// (0x00034e34) list_double2_pane_vc_ParamLimits

0x9591,	// (0x00034e34) list_double2_pane_vc

0x9591,	// (0x00034e34) list_double_graphic_heading_pane_vc_ParamLimits

0x9591,	// (0x00034e34) list_double_graphic_heading_pane_vc

0x9591,	// (0x00034e34) list_double_graphic_pane_vc_ParamLimits

0x9591,	// (0x00034e34) list_double_graphic_pane_vc

0x9591,	// (0x00034e34) list_double_heading_pane_vc_ParamLimits

0x9591,	// (0x00034e34) list_double_heading_pane_vc

0x95a4,	// (0x00034e47) list_double_large_graphic_pane_vc_ParamLimits

0x95a4,	// (0x00034e47) list_double_large_graphic_pane_vc

0x9591,	// (0x00034e34) list_double_number_pane_vc_ParamLimits

0x9591,	// (0x00034e34) list_double_number_pane_vc

0x9591,	// (0x00034e34) list_double_pane_vc_ParamLimits

0x9591,	// (0x00034e34) list_double_pane_vc

0x9591,	// (0x00034e34) list_double_time_pane_vc_ParamLimits

0x9591,	// (0x00034e34) list_double_time_pane_vc

0x9591,	// (0x00034e34) list_setting_number_pane_vc_ParamLimits

0x9591,	// (0x00034e34) list_setting_number_pane_vc

0x9591,	// (0x00034e34) list_setting_pane_vc_ParamLimits

0x9591,	// (0x00034e34) list_setting_pane_vc

0x9591,	// (0x00034e34) list_single_graphic_heading_pane_vc_ParamLimits

0x9591,	// (0x00034e34) list_single_graphic_heading_pane_vc

0x9591,	// (0x00034e34) list_single_heading_pane_vc_ParamLimits

0x9591,	// (0x00034e34) list_single_heading_pane_vc

0x6f25,	// (0x000327c8) list_single_number_heading_pane_vc_ParamLimits

0x6f25,	// (0x000327c8) list_single_number_heading_pane_vc

0x6804,	// (0x000320a7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x6804,	// (0x000320a7) list_double_graphic_heading_pane_vc_g1

0x7e2a,	// (0x000336cd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7e2a,	// (0x000336cd) list_double_graphic_heading_pane_vc_g2

0x7e36,	// (0x000336d9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7e36,	// (0x000336d9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0003b066) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0003b066) list_double_graphic_heading_pane_vc_g

0x6f78,	// (0x0003281b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6f78,	// (0x0003281b) list_double_graphic_heading_pane_vc_t1

0x6f8e,	// (0x00032831) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6f8e,	// (0x00032831) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0003b291) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0003b291) list_double_graphic_heading_pane_vc_t

0x92c6,	// (0x00034b69) list_setting_pane_vc_g1_ParamLimits

0x92c6,	// (0x00034b69) list_setting_pane_vc_g1

0x92d2,	// (0x00034b75) list_setting_pane_vc_g2_ParamLimits

0x92d2,	// (0x00034b75) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003b08c) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003b08c) list_setting_pane_vc_g

0x6fa6,	// (0x00032849) list_setting_pane_vc_t1_ParamLimits

0x6fa6,	// (0x00032849) list_setting_pane_vc_t1

0x6fba,	// (0x0003285d) list_setting_pane_vc_t2_ParamLimits

0x6fba,	// (0x0003285d) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x0003b2d4) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x0003b2d4) list_setting_pane_vc_t

0x6e9e,	// (0x00032741) set_value_pane_cp_vc_ParamLimits

0x6e9e,	// (0x00032741) set_value_pane_cp_vc

0x7e2a,	// (0x000336cd) list_single_number_heading_pane_vc_g1_ParamLimits

0x7e2a,	// (0x000336cd) list_single_number_heading_pane_vc_g1

0x7e36,	// (0x000336d9) list_single_number_heading_pane_vc_g2_ParamLimits

0x7e36,	// (0x000336d9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x0003ae94) list_single_number_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x0003ae94) list_single_number_heading_pane_vc_g

0x6e20,	// (0x000326c3) list_single_number_heading_pane_vc_t1_ParamLimits

0x6e20,	// (0x000326c3) list_single_number_heading_pane_vc_t1

0x6fce,	// (0x00032871) list_single_number_heading_pane_vc_t2_ParamLimits

0x6fce,	// (0x00032871) list_single_number_heading_pane_vc_t2

0x6fe0,	// (0x00032883) list_single_number_heading_pane_vc_t3_ParamLimits

0x6fe0,	// (0x00032883) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0003b2d9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0003b2d9) list_single_number_heading_pane_vc_t

0x6804,	// (0x000320a7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6804,	// (0x000320a7) list_single_graphic_heading_pane_vc_g1

0x7e2a,	// (0x000336cd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7e2a,	// (0x000336cd) list_single_graphic_heading_pane_vc_g4

0x7e36,	// (0x000336d9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7e36,	// (0x000336d9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0003b066) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0003b066) list_single_graphic_heading_pane_vc_g

0x6e20,	// (0x000326c3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6e20,	// (0x000326c3) list_single_graphic_heading_pane_vc_t1

0x6ff2,	// (0x00032895) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6ff2,	// (0x00032895) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x0003b2e0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0003b2e0) list_single_graphic_heading_pane_vc_t

0x7e2a,	// (0x000336cd) list_double2_pane_vc_g1_ParamLimits

0x7e2a,	// (0x000336cd) list_double2_pane_vc_g1

0x7e36,	// (0x000336d9) list_double2_pane_vc_g2_ParamLimits

0x7e36,	// (0x000336d9) list_double2_pane_vc_g2

0x0001,

0xf5f1,	// (0x0003ae94) list_double2_pane_vc_g_ParamLimits

0xf5f1,	// (0x0003ae94) list_double2_pane_vc_g

0x675f,	// (0x00032002) list_double2_pane_vc_t1_ParamLimits

0x675f,	// (0x00032002) list_double2_pane_vc_t1

0x7dfe,	// (0x000336a1) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7dfe,	// (0x000336a1) list_double2_large_graphic_pane_vc_g1

0x7e0a,	// (0x000336ad) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7e0a,	// (0x000336ad) list_double2_large_graphic_pane_vc_g2

0x7e16,	// (0x000336b9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7e16,	// (0x000336b9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0003ae8d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0003ae8d) list_double2_large_graphic_pane_vc_g

0x6749,	// (0x00031fec) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6749,	// (0x00031fec) list_double2_large_graphic_pane_vc_t1

0x96f0,	// (0x00034f93) list_double_time_pane_vc_g1_ParamLimits

0x96f0,	// (0x00034f93) list_double_time_pane_vc_g1

0x96fc,	// (0x00034f9f) list_double_time_pane_vc_g2_ParamLimits

0x96fc,	// (0x00034f9f) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x0003b2e5) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x0003b2e5) list_double_time_pane_vc_g

0x7004,	// (0x000328a7) list_double_time_pane_vc_t1_ParamLimits

0x7004,	// (0x000328a7) list_double_time_pane_vc_t1

0x7022,	// (0x000328c5) list_double_time_pane_vc_t2_ParamLimits

0x7022,	// (0x000328c5) list_double_time_pane_vc_t2

0x7066,	// (0x00032909) list_double_time_pane_vc_t3_ParamLimits

0x7066,	// (0x00032909) list_double_time_pane_vc_t3

0x7078,	// (0x0003291b) list_double_time_pane_vc_t4_ParamLimits

0x7078,	// (0x0003291b) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x0003b2ea) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x0003b2ea) list_double_time_pane_vc_t

0x7e2a,	// (0x000336cd) list_double_pane_vc_g1_ParamLimits

0x7e2a,	// (0x000336cd) list_double_pane_vc_g1

0x7e36,	// (0x000336d9) list_double_pane_vc_g2_ParamLimits

0x7e36,	// (0x000336d9) list_double_pane_vc_g2

0x0001,

0xf5f1,	// (0x0003ae94) list_double_pane_vc_g_ParamLimits

0xf5f1,	// (0x0003ae94) list_double_pane_vc_g

0x708a,	// (0x0003292d) list_double_pane_vc_t1_ParamLimits

0x708a,	// (0x0003292d) list_double_pane_vc_t1

0x709c,	// (0x0003293f) list_double_pane_vc_t2_ParamLimits

0x709c,	// (0x0003293f) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x0003b2f3) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x0003b2f3) list_double_pane_vc_t

0x7e2a,	// (0x000336cd) list_double_number_pane_vc_g1_ParamLimits

0x7e2a,	// (0x000336cd) list_double_number_pane_vc_g1

0x7e36,	// (0x000336d9) list_double_number_pane_vc_g2_ParamLimits

0x7e36,	// (0x000336d9) list_double_number_pane_vc_g2

0x0001,

0xf5f1,	// (0x0003ae94) list_double_number_pane_vc_g_ParamLimits

0xf5f1,	// (0x0003ae94) list_double_number_pane_vc_g

0x70b2,	// (0x00032955) list_double_number_pane_vc_t1_ParamLimits

0x70b2,	// (0x00032955) list_double_number_pane_vc_t1

0x70c6,	// (0x00032969) list_double_number_pane_vc_t2_ParamLimits

0x70c6,	// (0x00032969) list_double_number_pane_vc_t2

0x70d8,	// (0x0003297b) list_double_number_pane_vc_t3_ParamLimits

0x70d8,	// (0x0003297b) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x0003b2f8) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x0003b2f8) list_double_number_pane_vc_t

0x9708,	// (0x00034fab) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9708,	// (0x00034fab) list_double_large_graphic_pane_vc_g1

0x9730,	// (0x00034fd3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9730,	// (0x00034fd3) list_double_large_graphic_pane_vc_g2

0x9744,	// (0x00034fe7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9744,	// (0x00034fe7) list_double_large_graphic_pane_vc_g3

0x70ee,	// (0x00032991) list_double_large_graphic_pane_vc_g4_ParamLimits

0x70ee,	// (0x00032991) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x0003b2ff) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x0003b2ff) list_double_large_graphic_pane_vc_g

0x70fe,	// (0x000329a1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x70fe,	// (0x000329a1) list_double_large_graphic_pane_vc_t1

0x7118,	// (0x000329bb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7118,	// (0x000329bb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x0003b308) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x0003b308) list_double_large_graphic_pane_vc_t

0x7e2a,	// (0x000336cd) list_double_heading_pane_vc_g1_ParamLimits

0x7e2a,	// (0x000336cd) list_double_heading_pane_vc_g1

0x7e36,	// (0x000336d9) list_double_heading_pane_vc_g2_ParamLimits

0x7e36,	// (0x000336d9) list_double_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x0003ae94) list_double_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x0003ae94) list_double_heading_pane_vc_g

0x7138,	// (0x000329db) list_double_heading_pane_vc_t1_ParamLimits

0x7138,	// (0x000329db) list_double_heading_pane_vc_t1

0x6e20,	// (0x000326c3) list_double_heading_pane_vc_t2_ParamLimits

0x6e20,	// (0x000326c3) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x0003b30d) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0003b30d) list_double_heading_pane_vc_t

0x714a,	// (0x000329ed) list_double_graphic_pane_vc_g1_ParamLimits

0x714a,	// (0x000329ed) list_double_graphic_pane_vc_g1

0x9753,	// (0x00034ff6) list_double_graphic_pane_vc_g2_ParamLimits

0x9753,	// (0x00034ff6) list_double_graphic_pane_vc_g2

0x7e2a,	// (0x000336cd) list_double_graphic_pane_vc_g3_ParamLimits

0x7e2a,	// (0x000336cd) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x0003b312) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0003b312) list_double_graphic_pane_vc_g

0x7156,	// (0x000329f9) list_double_graphic_pane_vc_t1_ParamLimits

0x7156,	// (0x000329f9) list_double_graphic_pane_vc_t1

0x7174,	// (0x00032a17) list_double_graphic_pane_vc_t2_ParamLimits

0x7174,	// (0x00032a17) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0003b31b) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0003b31b) list_double_graphic_pane_vc_t

0x74ac,	// (0x00032d4f) aid_size_cell_fastswap

0x74b4,	// (0x00032d57) aid_size_cell_touch_ParamLimits

0x74b4,	// (0x00032d57) aid_size_cell_touch

0x767b,	// (0x00032f1e) popup_fast_swap_wide_window_ParamLimits

0x767b,	// (0x00032f1e) popup_fast_swap_wide_window

0x7741,	// (0x00032fe4) touch_pane_ParamLimits

0x7741,	// (0x00032fe4) touch_pane

0x6add,	// (0x00032380) button_value_adjust_pane_cp2

0x6ae5,	// (0x00032388) button_value_adjust_pane_cp4

0x6b05,	// (0x000323a8) form_field_data_pane_cp2

0x6b24,	// (0x000323c7) form_field_data_wide_pane_cp2

0x8385,	// (0x00033c28) bg_scroll_pane_ParamLimits

0x83a4,	// (0x00033c47) scroll_handle_pane_ParamLimits

0x83b8,	// (0x00033c5b) scroll_sc2_down_pane_ParamLimits

0x83b8,	// (0x00033c5b) scroll_sc2_down_pane

0x83df,	// (0x00033c82) scroll_sc2_up_pane_ParamLimits

0x83df,	// (0x00033c82) scroll_sc2_up_pane

0xe97b,	// (0x0003a21e) grid_wheel_folder_pane_g1_ParamLimits

0xe97b,	// (0x0003a21e) grid_wheel_folder_pane_g1

0x88b4,	// (0x00034157) clock_nsta_pane_cp2_ParamLimits

0x88b4,	// (0x00034157) clock_nsta_pane_cp2

0xe00b,	// (0x000398ae) listscroll_midp_pane_ParamLimits

0xe017,	// (0x000398ba) midp_canvas_pane

0x8d8a,	// (0x0003462d) nsta_clock_indic_pane

0xa985,	// (0x00036228) listscroll_form_pane_vc

0xa98d,	// (0x00036230) listscroll_set_pane_vc_ParamLimits

0xa98d,	// (0x00036230) listscroll_set_pane_vc

0xe21a,	// (0x00039abd) clock_nsta_pane

0xe227,	// (0x00039aca) indicator_nsta_pane

0xaab2,	// (0x00036355) bg_popup_sub_pane_cp2_ParamLimits

0xaac6,	// (0x00036369) find_pane_cp2_ParamLimits

0xaac6,	// (0x00036369) find_pane_cp2

0xaad8,	// (0x0003637b) grid_toobar_pane_ParamLimits

0xabbc,	// (0x0003645f) list_form_gen_pane_vc_ParamLimits

0xabbc,	// (0x0003645f) list_form_gen_pane_vc

0xabd2,	// (0x00036475) scroll_pane_cp8_vc_ParamLimits

0xabd2,	// (0x00036475) scroll_pane_cp8_vc

0xac22,	// (0x000364c5) data_form_wide_pane_vc_ParamLimits

0xac22,	// (0x000364c5) data_form_wide_pane_vc

0xac2e,	// (0x000364d1) form_field_data_wide_pane_vc_g1

0xac36,	// (0x000364d9) form_field_data_wide_pane_vc_t1_ParamLimits

0xac36,	// (0x000364d9) form_field_data_wide_pane_vc_t1

0x7ede,	// (0x00033781) input_focus_pane_cp6_vc_ParamLimits

0x7ede,	// (0x00033781) input_focus_pane_cp6_vc

0xe4a2,	// (0x00039d45) list_midp_pane_ParamLimits

0xe4ae,	// (0x00039d51) scroll_pane_cp16_ParamLimits

0xe4ae,	// (0x00039d51) scroll_pane_cp16

0xaf34,	// (0x000367d7) button_value_adjust_pane_ParamLimits

0xaf34,	// (0x000367d7) button_value_adjust_pane

0xe60e,	// (0x00039eb1) button_value_adjust_pane_cp6_ParamLimits

0xe60e,	// (0x00039eb1) button_value_adjust_pane_cp6

0xe716,	// (0x00039fb9) settings_code_pane_cp_ParamLimits

0xe716,	// (0x00039fb9) settings_code_pane_cp

0x7492,	// (0x00032d35) cell_touch_pane_g1

0x7492,	// (0x00032d35) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0003afab) cell_touch_pane_g

0xe867,	// (0x0003a10a) cell_touch_pane_cp_ParamLimits

0xe867,	// (0x0003a10a) cell_touch_pane_cp

0xe877,	// (0x0003a11a) cell_touch_pane_ParamLimits

0xe877,	// (0x0003a11a) cell_touch_pane

0x7492,	// (0x00032d35) scroll_sc2_down_pane_g1

0x7492,	// (0x00032d35) scroll_sc2_up_pane_g1

0x7651,	// (0x00032ef4) bg_set_opt_pane_cp4_vc

0xc04c,	// (0x000378ef) list_set_graphic_pane_vc_g1_ParamLimits

0xc04c,	// (0x000378ef) list_set_graphic_pane_vc_g1

0xc058,	// (0x000378fb) list_set_graphic_pane_vc_g2_ParamLimits

0xc058,	// (0x000378fb) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0003b296) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0003b296) list_set_graphic_pane_vc_g

0xc064,	// (0x00037907) text_primary_small_cp13_vc_ParamLimits

0xc064,	// (0x00037907) text_primary_small_cp13_vc

0xc07c,	// (0x0003791f) list_set_graphic_pane_vc_ParamLimits

0xc07c,	// (0x0003791f) list_set_graphic_pane_vc

0x7651,	// (0x00032ef4) input_focus_pane_cp2_vc

0x7492,	// (0x00032d35) setting_code_pane_vc_g1

0xc08f,	// (0x00037932) setting_code_pane_vc_t1

0xc09d,	// (0x00037940) set_text_pane_vc_t1_ParamLimits

0xc09d,	// (0x00037940) set_text_pane_vc_t1

0x7651,	// (0x00032ef4) input_focus_pane_cp1_vc

0xc0b8,	// (0x0003795b) list_set_text_pane_vc

0x7492,	// (0x00032d35) setting_text_pane_vc_g1

0x7651,	// (0x00032ef4) bg_set_opt_pane_cp2_vc

0xc0c2,	// (0x00037965) setting_slider_graphic_pane_vc_g1

0xc0ca,	// (0x0003796d) setting_slider_graphic_pane_vc_t1

0xc0d8,	// (0x0003797b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0003b29b) setting_slider_graphic_pane_vc_t

0xc0e6,	// (0x00037989) slider_set_pane_cp_vc

0xc0ee,	// (0x00037991) slider_set_pane_vc_g1

0xc0f7,	// (0x0003799a) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0003b2a0) slider_set_pane_vc_g

0x7f2d,	// (0x000337d0) set_opt_bg_pane_g1_copy1

0x7f35,	// (0x000337d8) set_opt_bg_pane_g2_copy1

0xc123,	// (0x000379c6) set_opt_bg_pane_g3_copy1

0x7f45,	// (0x000337e8) set_opt_bg_pane_g4_copy1

0x7f4d,	// (0x000337f0) set_opt_bg_pane_g5_copy1

0x7f55,	// (0x000337f8) set_opt_bg_pane_g6_copy1

0xc12b,	// (0x000379ce) set_opt_bg_pane_g7_copy1

0xc133,	// (0x000379d6) set_opt_bg_pane_g8_copy1

0xc13b,	// (0x000379de) set_opt_bg_pane_g9_copy1

0x7651,	// (0x00032ef4) bg_set_opt_pane_cp_vc

0xc143,	// (0x000379e6) setting_slider_pane_vc_t1

0xc0ca,	// (0x0003796d) setting_slider_pane_vc_t2

0xc0d8,	// (0x0003797b) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0003b2af) setting_slider_pane_vc_t

0xc0e6,	// (0x00037989) slider_set_pane_vc

0x9373,	// (0x00034c16) volume_set_pane_vc_g1

0x969f,	// (0x00034f42) volume_set_pane_vc_g2

0x96a8,	// (0x00034f4b) volume_set_pane_vc_g3

0x96b1,	// (0x00034f54) volume_set_pane_vc_g4

0x96ba,	// (0x00034f5d) volume_set_pane_vc_g5

0x96c3,	// (0x00034f66) volume_set_pane_vc_g6

0x96cc,	// (0x00034f6f) volume_set_pane_vc_g7

0x96d5,	// (0x00034f78) volume_set_pane_vc_g8

0x96de,	// (0x00034f81) volume_set_pane_vc_g9

0x96e7,	// (0x00034f8a) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x0003b2b6) volume_set_pane_vc_g

0xc152,	// (0x000379f5) volume_set_pane_vc

0xc15a,	// (0x000379fd) button_value_adjust_pane_cp1_vc

0xc164,	// (0x00037a07) list_highlight_pane_cp2_vc

0xc16d,	// (0x00037a10) list_set_pane_vc_ParamLimits

0xc16d,	// (0x00037a10) list_set_pane_vc

0xc1bf,	// (0x00037a62) main_pane_set_vc_t1_ParamLimits

0xc1bf,	// (0x00037a62) main_pane_set_vc_t1

0xc1d4,	// (0x00037a77) main_pane_set_vc_t2_ParamLimits

0xc1d4,	// (0x00037a77) main_pane_set_vc_t2

0xc1e6,	// (0x00037a89) main_pane_set_vc_t3_ParamLimits

0xc1e6,	// (0x00037a89) main_pane_set_vc_t3

0xc1f8,	// (0x00037a9b) main_pane_set_vc_t4_ParamLimits

0xc1f8,	// (0x00037a9b) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x0003b2cb) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x0003b2cb) main_pane_set_vc_t

0xc20a,	// (0x00037aad) setting_code_pane_vc_ParamLimits

0xc20a,	// (0x00037aad) setting_code_pane_vc

0xc219,	// (0x00037abc) setting_slider_graphic_pane_vc

0xc219,	// (0x00037abc) setting_slider_pane_vc

0xc219,	// (0x00037abc) setting_text_pane_vc

0xc219,	// (0x00037abc) setting_volume_pane_vc

0xc221,	// (0x00037ac4) scroll_pane_cp121_vc

0x7ec9,	// (0x0003376c) set_content_pane_vc

0xc229,	// (0x00037acc) button_value_adjust_pane_g1

0xc232,	// (0x00037ad5) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x0003b320) button_value_adjust_pane_g

0xc23b,	// (0x00037ade) form_field_slider_wide_pane_vc_t1_ParamLimits

0xc23b,	// (0x00037ade) form_field_slider_wide_pane_vc_t1

0xc251,	// (0x00037af4) form_field_slider_wide_pane_vc_t2_ParamLimits

0xc251,	// (0x00037af4) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0003b325) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0003b325) form_field_slider_wide_pane_vc_t

0x79aa,	// (0x0003324d) input_focus_pane_cp10_vc_ParamLimits

0x79aa,	// (0x0003324d) input_focus_pane_cp10_vc

0xc27c,	// (0x00037b1f) slider_cont_pane_cp1_vc_ParamLimits

0xc27c,	// (0x00037b1f) slider_cont_pane_cp1_vc

0xc0ee,	// (0x00037991) slider_form_pane_g1_cp2

0xc0f7,	// (0x0003799a) slider_form_pane_g2_cp2

0xc297,	// (0x00037b3a) form_field_slider_pane_vc_t3

0xc2a5,	// (0x00037b48) form_field_slider_pane_vc_t4

0xc2b3,	// (0x00037b56) slider_form_pane_vc_ParamLimits

0xc2b3,	// (0x00037b56) slider_form_pane_vc

0xc2c0,	// (0x00037b63) form_field_slider_pane_vc_t1_ParamLimits

0xc2c0,	// (0x00037b63) form_field_slider_pane_vc_t1

0xc2d6,	// (0x00037b79) form_field_slider_pane_vc_t2_ParamLimits

0xc2d6,	// (0x00037b79) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0003b337) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0003b337) form_field_slider_pane_vc_t

0x79aa,	// (0x0003324d) input_focus_pane_cp9_vc_ParamLimits

0x79aa,	// (0x0003324d) input_focus_pane_cp9_vc

0xc2e8,	// (0x00037b8b) slider_cont_pane_vc_ParamLimits

0xc2e8,	// (0x00037b8b) slider_cont_pane_vc

0xc2fa,	// (0x00037b9d) list_form_graphic_pane_cp_vc_ParamLimits

0xc2fa,	// (0x00037b9d) list_form_graphic_pane_cp_vc

0xac2e,	// (0x000364d1) form_field_popup_wide_pane_vc_g1

0xc30f,	// (0x00037bb2) form_field_popup_wide_pane_vc_t1_ParamLimits

0xc30f,	// (0x00037bb2) form_field_popup_wide_pane_vc_t1

0x7ede,	// (0x00033781) input_focus_pane_cp8_vc_ParamLimits

0x7ede,	// (0x00033781) input_focus_pane_cp8_vc

0xc34e,	// (0x00037bf1) list_form_wide_pane_vc_ParamLimits

0xc34e,	// (0x00037bf1) list_form_wide_pane_vc

0xc35a,	// (0x00037bfd) list_form_graphic_pane_vc_g1

0xc362,	// (0x00037c05) list_form_graphic_pane_vc_t1_ParamLimits

0xc362,	// (0x00037c05) list_form_graphic_pane_vc_t1

0x77e5,	// (0x00033088) list_highlight_pane_cp5_vc_ParamLimits

0x77e5,	// (0x00033088) list_highlight_pane_cp5_vc

0xc37e,	// (0x00037c21) list_form_graphic_pane_vc_ParamLimits

0xc37e,	// (0x00037c21) list_form_graphic_pane_vc

0xac2e,	// (0x000364d1) form_field_popup_pane_vc_g1

0xc394,	// (0x00037c37) form_field_popup_pane_vc_t1_ParamLimits

0xc394,	// (0x00037c37) form_field_popup_pane_vc_t1

0x7ede,	// (0x00033781) input_focus_pane_cp7_vc_ParamLimits

0x7ede,	// (0x00033781) input_focus_pane_cp7_vc

0xc3a9,	// (0x00037c4c) list_form_pane_vc_ParamLimits

0xc3a9,	// (0x00037c4c) list_form_pane_vc

0xc3b5,	// (0x00037c58) data_form_pane_vc_t1_ParamLimits

0xc3b5,	// (0x00037c58) data_form_pane_vc_t1

0x7f2d,	// (0x000337d0) input_focus_pane_vc_g1

0x7f35,	// (0x000337d8) input_focus_pane_vc_g2

0x7f3d,	// (0x000337e0) input_focus_pane_vc_g3

0x7f45,	// (0x000337e8) input_focus_pane_vc_g4

0x7f4d,	// (0x000337f0) input_focus_pane_vc_g5

0x7f55,	// (0x000337f8) input_focus_pane_vc_g6

0x7f5d,	// (0x00033800) input_focus_pane_vc_g7

0x7f65,	// (0x00033808) input_focus_pane_vc_g8

0x7f6d,	// (0x00033810) input_focus_pane_vc_g9

0x7492,	// (0x00032d35) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0003af34) input_focus_pane_vc_g

0xac22,	// (0x000364c5) data_form_pane_vc_ParamLimits

0xac22,	// (0x000364c5) data_form_pane_vc

0xac2e,	// (0x000364d1) form_field_data_pane_vc_g1

0xc3d0,	// (0x00037c73) form_field_data_pane_vc_t1_ParamLimits

0xc3d0,	// (0x00037c73) form_field_data_pane_vc_t1

0x7ede,	// (0x00033781) input_focus_pane_vc_ParamLimits

0x7ede,	// (0x00033781) input_focus_pane_vc

0xc3e6,	// (0x00037c89) button_value_adjust_pane_cp3_vc

0xc3ee,	// (0x00037c91) button_value_adjust_pane_cp5_vc

0xc3f6,	// (0x00037c99) form_field_data_pane_vc_ParamLimits

0xc3f6,	// (0x00037c99) form_field_data_pane_vc

0xc40d,	// (0x00037cb0) form_field_data_pane_vc_cp2

0xc415,	// (0x00037cb8) form_field_data_wide_pane_vc_ParamLimits

0xc415,	// (0x00037cb8) form_field_data_wide_pane_vc

0xc42b,	// (0x00037cce) form_field_data_wide_pane_vc_cp2

0xc433,	// (0x00037cd6) form_field_popup_pane_vc_ParamLimits

0xc433,	// (0x00037cd6) form_field_popup_pane_vc

0xc44a,	// (0x00037ced) form_field_popup_wide_pane_vc_ParamLimits

0xc44a,	// (0x00037ced) form_field_popup_wide_pane_vc

0xc460,	// (0x00037d03) form_field_slider_pane_vc_ParamLimits

0xc460,	// (0x00037d03) form_field_slider_pane_vc

0xc473,	// (0x00037d16) form_field_slider_wide_pane_vc_ParamLimits

0xc473,	// (0x00037d16) form_field_slider_wide_pane_vc

0xe889,	// (0x0003a12c) grid_touch_1_pane_ParamLimits

0xe889,	// (0x0003a12c) grid_touch_1_pane

0xe895,	// (0x0003a138) grid_touch_2_pane_ParamLimits

0xe895,	// (0x0003a138) grid_touch_2_pane

0xa957,	// (0x000361fa) touch_pane_g1_ParamLimits

0xa957,	// (0x000361fa) touch_pane_g1

0xc486,	// (0x00037d29) cell_app_pane_cp_wide_ParamLimits

0xc486,	// (0x00037d29) cell_app_pane_cp_wide

0xc496,	// (0x00037d39) grid_popup_fast_wide_pane_ParamLimits

0xc496,	// (0x00037d39) grid_popup_fast_wide_pane

0xc4aa,	// (0x00037d4d) scroll_pane_cp19_ParamLimits

0xc4aa,	// (0x00037d4d) scroll_pane_cp19

0x7651,	// (0x00032ef4) bg_popup_window_pane_cp20

0xc4be,	// (0x00037d61) listscroll_popup_fast_wide_pane

0x77e5,	// (0x00033088) grid_indicator_nsta_pane

0xc4c6,	// (0x00037d69) clock_nsta_pane_g1

0xc4cf,	// (0x00037d72) clock_nsta_pane_t1

0xe8ad,	// (0x0003a150) cell_indicator_nsta_pane_ParamLimits

0xe8ad,	// (0x0003a150) cell_indicator_nsta_pane

0xc4eb,	// (0x00037d8e) cell_indicator_nsta_pane_g1

0xe8de,	// (0x0003a181) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0003b348) cell_indicator_nsta_pane_g

0xc4f9,	// (0x00037d9c) clock_nsta_pane_cp

0xc501,	// (0x00037da4) indicator_nsta_pane_cp

0xc50a,	// (0x00037dad) nsta_clock_indic_pane_g1

0x78b3,	// (0x00033156) grid_indicator_pane

0x84d1,	// (0x00033d74) scroll_pane_cp29

0x87e9,	// (0x0003408c) indicator_nsta_pane_cp2_ParamLimits

0x87e9,	// (0x0003408c) indicator_nsta_pane_cp2

0x77e5,	// (0x00033088) main_apps_wheel_pane

0xadcd,	// (0x00036670) form_midp_field_text_pane_ParamLimits

0xaefa,	// (0x0003679d) scroll_bar_cp050_ParamLimits

0xc573,	// (0x00037e16) cell_indicator_pane_ParamLimits

0xc573,	// (0x00037e16) cell_indicator_pane

0xc589,	// (0x00037e2c) cell_indicator_pane_g1

0xe8eb,	// (0x0003a18e) grid_wheel_folder_pane_ParamLimits

0xe8eb,	// (0x0003a18e) grid_wheel_folder_pane

0xe8fd,	// (0x0003a1a0) list_wheel_apps_pane_ParamLimits

0xe8fd,	// (0x0003a1a0) list_wheel_apps_pane

0xe90c,	// (0x0003a1af) main_apps_wheel_pane_g1_ParamLimits

0xe90c,	// (0x0003a1af) main_apps_wheel_pane_g1

0xe920,	// (0x0003a1c3) main_apps_wheel_pane_g2_ParamLimits

0xe920,	// (0x0003a1c3) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0003b364) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0003b364) main_apps_wheel_pane_g

0xe934,	// (0x0003a1d7) main_apps_wheel_pane_t1_ParamLimits

0xe934,	// (0x0003a1d7) main_apps_wheel_pane_t1

0xe953,	// (0x0003a1f6) list_wheel_apps_pane_g1

0xe95b,	// (0x0003a1fe) list_wheel_apps_pane_g2

0xe963,	// (0x0003a206) list_wheel_apps_pane_g3

0xe96b,	// (0x0003a20e) list_wheel_apps_pane_g4

0xe973,	// (0x0003a216) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0003b369) list_wheel_apps_pane_g

0x77e5,	// (0x00033088) navi_icon_text_pane

0xe16e,	// (0x00039a11) aid_fill_nsta

0xc593,	// (0x00037e36) navi_icon_text_pane_g1

0xc59f,	// (0x00037e42) navi_icon_text_pane_t1

0x8956,	// (0x000341f9) list_set_graphic_pane_t1_ParamLimits

0x8956,	// (0x000341f9) list_set_graphic_pane_t1

0xb5e0,	// (0x00036e83) popup_midp_note_alarm_window_t6_ParamLimits

0xb5e0,	// (0x00036e83) popup_midp_note_alarm_window_t6

0xb5f2,	// (0x00036e95) popup_midp_note_alarm_window_t7_ParamLimits

0xb5f2,	// (0x00036e95) popup_midp_note_alarm_window_t7

0xb604,	// (0x00036ea7) popup_midp_note_alarm_window_t8_ParamLimits

0xb604,	// (0x00036ea7) popup_midp_note_alarm_window_t8

0xb616,	// (0x00036eb9) popup_midp_note_alarm_window_t9_ParamLimits

0xb616,	// (0x00036eb9) popup_midp_note_alarm_window_t9

0xb628,	// (0x00036ecb) popup_midp_note_alarm_window_t10_ParamLimits

0xb628,	// (0x00036ecb) popup_midp_note_alarm_window_t10

0xb63a,	// (0x00036edd) popup_midp_note_alarm_window_t11_ParamLimits

0xb63a,	// (0x00036edd) popup_midp_note_alarm_window_t11

0xb64c,	// (0x00036eef) scroll_pane_cp17_ParamLimits

0xb64c,	// (0x00036eef) scroll_pane_cp17

0x9373,	// (0x00034c16) volume_small_pane_cp_g1

0x9770,	// (0x00035013) volume_small_pane_cp_g2

0x9779,	// (0x0003501c) volume_small_pane_cp_g3

0x9782,	// (0x00035025) volume_small_pane_cp_g4

0x93a0,	// (0x00034c43) volume_small_pane_cp_g5

0x978b,	// (0x0003502e) volume_small_pane_cp_g6

0x9794,	// (0x00035037) volume_small_pane_cp_g7

0x979d,	// (0x00035040) volume_small_pane_cp_g8

0x97a6,	// (0x00035049) volume_small_pane_cp_g9

0x97af,	// (0x00035052) volume_small_pane_cp_g10

0xa7fa,	// (0x0003609d) midp_ticker_pane_g1_ParamLimits

0xa806,	// (0x000360a9) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0003b000) midp_ticker_pane_g_ParamLimits

0xa812,	// (0x000360b5) midp_ticker_pane_t1_ParamLimits

0xe17e,	// (0x00039a21) aid_fill_nsta_2

0xaee6,	// (0x00036789) list_form2_midp_pane

0xbcd2,	// (0x00037575) midp_editing_number_pane_ParamLimits

0xbcde,	// (0x00037581) midp_ticker_pane_ParamLimits

0xc5b1,	// (0x00037e54) form2_midp_field_pane

0xc5b9,	// (0x00037e5c) scroll_pane_cp51

0xc5d9,	// (0x00037e7c) form2_midp_button_pane_ParamLimits

0xc5d9,	// (0x00037e7c) form2_midp_button_pane

0xc5eb,	// (0x00037e8e) form2_midp_content_pane_ParamLimits

0xc5eb,	// (0x00037e8e) form2_midp_content_pane

0xc605,	// (0x00037ea8) form2_midp_field_choice_group_pane

0xc60d,	// (0x00037eb0) form2_midp_field_pane_g1

0xc615,	// (0x00037eb8) form2_midp_field_pane_g2

0xc61d,	// (0x00037ec0) form2_midp_field_pane_g3

0xc625,	// (0x00037ec8) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0003b38e) form2_midp_field_pane_g

0xc62d,	// (0x00037ed0) form2_midp_gauge_slider_pane

0xc635,	// (0x00037ed8) form2_midp_gauge_wait_pane

0xc63d,	// (0x00037ee0) form2_midp_image_pane_ParamLimits

0xc63d,	// (0x00037ee0) form2_midp_image_pane

0xc658,	// (0x00037efb) form2_midp_label_pane_ParamLimits

0xc658,	// (0x00037efb) form2_midp_label_pane

0xe9ae,	// (0x0003a251) form2_midp_label_pane_cp_ParamLimits

0xe9ae,	// (0x0003a251) form2_midp_label_pane_cp

0xc671,	// (0x00037f14) form2_midp_string_pane_ParamLimits

0xc671,	// (0x00037f14) form2_midp_string_pane

0x7192,	// (0x00032a35) form2_midp_text_pane_ParamLimits

0x7192,	// (0x00032a35) form2_midp_text_pane

0xc683,	// (0x00037f26) form2_midp_time_pane

0xc693,	// (0x00037f36) input_focus_pane_cp51_ParamLimits

0xc693,	// (0x00037f36) input_focus_pane_cp51

0xc6ab,	// (0x00037f4e) form2_midp_label_pane_t1_ParamLimits

0xc6ab,	// (0x00037f4e) form2_midp_label_pane_t1

0x71ab,	// (0x00032a4e) form2_mdip_text_pane_t1_ParamLimits

0x71ab,	// (0x00032a4e) form2_mdip_text_pane_t1

0x71c4,	// (0x00032a67) form2_midp_time_pane_t1

0xc6f3,	// (0x00037f96) form2_midp_gauge_slider_pane_t1

0xe9cd,	// (0x0003a270) form2_midp_gauge_slider_pane_t2

0xe9df,	// (0x0003a282) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0003b397) form2_midp_gauge_slider_pane_t

0xc705,	// (0x00037fa8) form2_midp_slider_pane

0xc711,	// (0x00037fb4) form2_midp_gauge_wait_pane_t1

0xc71f,	// (0x00037fc2) form2_midp_wait_pane_ParamLimits

0xc71f,	// (0x00037fc2) form2_midp_wait_pane

0xac6c,	// (0x0003650f) list_single_2graphic_pane_cp4_ParamLimits

0xac6c,	// (0x0003650f) list_single_2graphic_pane_cp4

0xc74a,	// (0x00037fed) list_single_midp_graphic_pane_cp_ParamLimits

0xc74a,	// (0x00037fed) list_single_midp_graphic_pane_cp

0x7651,	// (0x00032ef4) list_highlight_pane_cp20

0xc768,	// (0x0003800b) list_single_2graphic_pane_g1_cp4

0xbd53,	// (0x000375f6) list_single_2graphic_pane_g2_cp4

0xc770,	// (0x00038013) list_single_2graphic_pane_t1_cp4

0x77e5,	// (0x00033088) list_highlight_pane_cp21

0xc77f,	// (0x00038022) list_single_midp_graphic_pane_g4_cp

0xc78e,	// (0x00038031) list_single_midp_graphic_pane_t1_cp

0xc7a3,	// (0x00038046) form2_mdip_string_pane_t1_ParamLimits

0xc7a3,	// (0x00038046) form2_mdip_string_pane_t1

0x7651,	// (0x00032ef4) bg_wml_button_pane_cp2

0x7492,	// (0x00032d35) form2_midp_image_pane_g1

0x7e66,	// (0x00033709) list_double_large_graphic_pane_g5_ParamLimits

0x7e66,	// (0x00033709) list_double_large_graphic_pane_g5

0xe00b,	// (0x000398ae) midp_form_pane_ParamLimits

0x77e5,	// (0x00033088) main_apps_wheel_pane_ParamLimits

0x9084,	// (0x00034927) popup_preview_window_ParamLimits

0x9084,	// (0x00034927) popup_preview_window

0x91ff,	// (0x00034aa2) popup_touch_info_window_ParamLimits

0x91ff,	// (0x00034aa2) popup_touch_info_window

0x921d,	// (0x00034ac0) popup_touch_menu_window_ParamLimits

0x921d,	// (0x00034ac0) popup_touch_menu_window

0x7488,	// (0x00032d2b) bg_popup_sub_pane_cp6

0xc80d,	// (0x000380b0) list_touch_menu_pane

0xc815,	// (0x000380b8) list_single_touch_menu_pane_ParamLimits

0xc815,	// (0x000380b8) list_single_touch_menu_pane

0xc82c,	// (0x000380cf) list_single_touch_menu_pane_t1

0x77e5,	// (0x00033088) bg_popup_sub_pane_cp7_ParamLimits

0x77e5,	// (0x00033088) bg_popup_sub_pane_cp7

0xc83a,	// (0x000380dd) heading_sub_pane

0xc842,	// (0x000380e5) list_touch_info_pane_ParamLimits

0xc842,	// (0x000380e5) list_touch_info_pane

0xc851,	// (0x000380f4) list_single_touch_info_pane_ParamLimits

0xc851,	// (0x000380f4) list_single_touch_info_pane

0xc862,	// (0x00038105) list_single_touch_info_pane_t1

0xc870,	// (0x00038113) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0003b3a5) list_single_touch_info_pane_t

0xa7d0,	// (0x00036073) bg_popup_heading_pane_cp

0xc87e,	// (0x00038121) heading_sub_pane_t1

0xabe8,	// (0x0003648b) bg_popup_preview_window_pane_cp_ParamLimits

0xabe8,	// (0x0003648b) bg_popup_preview_window_pane_cp

0xc83a,	// (0x000380dd) heading_preview_pane

0xc842,	// (0x000380e5) list_preview_pane_ParamLimits

0xc842,	// (0x000380e5) list_preview_pane

0xc88c,	// (0x0003812f) popup_preview_window_g1

0xc851,	// (0x000380f4) list_single_preview_pane_ParamLimits

0xc851,	// (0x000380f4) list_single_preview_pane

0xc894,	// (0x00038137) list_single_preview_pane_g1

0xc89c,	// (0x0003813f) list_single_preview_pane_t1

0xc862,	// (0x00038105) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0003b3aa) list_single_preview_pane_t

0xc8aa,	// (0x0003814d) bg_popup_heading_pane_cp2_ParamLimits

0xc8aa,	// (0x0003814d) bg_popup_heading_pane_cp2

0xc8c0,	// (0x00038163) heading_preview_pane_g1

0xc8c8,	// (0x0003816b) heading_preview_pane_t1_ParamLimits

0xc8c8,	// (0x0003816b) heading_preview_pane_t1

0x78ca,	// (0x0003316d) soft_indicator_pane_t1_ParamLimits

0x7da2,	// (0x00033645) scroll_pane_ParamLimits

0x83cd,	// (0x00033c70) scroll_sc2_left_pane

0x83d6,	// (0x00033c79) scroll_sc2_right_pane

0x83f5,	// (0x00033c98) scroll_bg_pane_g1_ParamLimits

0x840a,	// (0x00033cad) scroll_bg_pane_g2_ParamLimits

0x8422,	// (0x00033cc5) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0003af8b) scroll_bg_pane_g_ParamLimits

0x83f5,	// (0x00033c98) scroll_handle_pane_g1_ParamLimits

0x8444,	// (0x00033ce7) scroll_handle_pane_g2_ParamLimits

0x8422,	// (0x00033cc5) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0003af92) scroll_handle_pane_g_ParamLimits

0x8dcc,	// (0x0003466f) popup_choice_list_window_ParamLimits

0x8dcc,	// (0x0003466f) popup_choice_list_window

0xaabe,	// (0x00036361) choice_list_pane

0xab34,	// (0x000363d7) cell_toolbar_pane_t1

0xab5c,	// (0x000363ff) toolbar_button_pane_ParamLimits

0xba47,	// (0x000372ea) ai_gene_pane_1_t2_ParamLimits

0xba47,	// (0x000372ea) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0003b1b5) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0003b1b5) ai_gene_pane_1_t

0xc8e5,	// (0x00038188) scroll_sc2_left_pane_g1

0xc8e5,	// (0x00038188) scroll_sc2_right_pane_g1

0x8db4,	// (0x00034657) bg_popup_sub_pane_cp10

0xc8ef,	// (0x00038192) list_choice_list_pane

0xc906,	// (0x000381a9) list_single_choice_list_pane_ParamLimits

0xc906,	// (0x000381a9) list_single_choice_list_pane

0xc918,	// (0x000381bb) list_single_choice_list_pane_g1

0x8043,	// (0x000338e6) list_single_choice_list_pane_t1_ParamLimits

0x8043,	// (0x000338e6) list_single_choice_list_pane_t1

0xc920,	// (0x000381c3) choice_list_pane_g1

0xc928,	// (0x000381cb) choice_list_pane_t1

0x7488,	// (0x00032d2b) input_focus_pane_cp11

0x81fe,	// (0x00033aa1) title_pane_stacon_g2_ParamLimits

0x81fe,	// (0x00033aa1) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0003af71) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0003af71) title_pane_stacon_g

0xa7d0,	// (0x00036073) cursor_press_pane

0x8e68,	// (0x0003470b) popup_fep_hwr_window_ParamLimits

0x8e68,	// (0x0003470b) popup_fep_hwr_window

0x8ec4,	// (0x00034767) popup_fep_vkb_window_ParamLimits

0x8ec4,	// (0x00034767) popup_fep_vkb_window

0xc936,	// (0x000381d9) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0003b3d3) fep_vkb_side_pane_g_ParamLimits

0x97ed,	// (0x00035090) fep_hwr_candidate_pane_ParamLimits

0x97ed,	// (0x00035090) fep_hwr_candidate_pane

0x9815,	// (0x000350b8) fep_hwr_side_pane_ParamLimits

0x9815,	// (0x000350b8) fep_hwr_side_pane

0x9835,	// (0x000350d8) fep_hwr_top_pane_ParamLimits

0x9835,	// (0x000350d8) fep_hwr_top_pane

0x984d,	// (0x000350f0) fep_hwr_write_pane_ParamLimits

0x984d,	// (0x000350f0) fep_hwr_write_pane

0xfb30,	// (0x0003b3d3) fep_vkb_side_pane_g

0xc93e,	// (0x000381e1) fep_hwr_top_pane_g1

0xc950,	// (0x000381f3) fep_hwr_top_pane_g2

0x9879,	// (0x0003511c) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0003b3af) fep_hwr_top_pane_g

0x988e,	// (0x00035131) fep_hwr_top_text_pane

0x853e,	// (0x00033de1) fep_hwr_top_text_pane_g1

0xc986,	// (0x00038229) fep_hwr_top_text_pane_t1

0x997c,	// (0x0003521f) fep_hwr_candidate_pane_g1

0xcb4f,	// (0x000383f2) fep_vkb_keypad_pane_g3_ParamLimits

0xcb4f,	// (0x000383f2) fep_vkb_keypad_pane_g3

0xcb71,	// (0x00038414) fep_vkb_keypad_pane_g4_ParamLimits

0xcb71,	// (0x00038414) fep_vkb_keypad_pane_g4

0xcbe0,	// (0x00038483) fep_vkb_bottom_pane_g2_ParamLimits

0xcbe0,	// (0x00038483) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0003b3da) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0003b3da) fep_vkb_bottom_pane_g

0xc8e5,	// (0x00038188) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x0003b3e4) cell_vkb_side_pane_g

0xcc24,	// (0x000384c7) cell_vkb_side_pane_t1

0xcc32,	// (0x000384d5) cell_vkb_side_pane_t1_copy1

0xc8e5,	// (0x00038188) bg_fep_vkb_candidate_pane_g2

0xcd00,	// (0x000385a3) cell_vkb_candidate_pane_ParamLimits

0xc994,	// (0x00038237) aid_size_cell_vkb_ParamLimits

0xc994,	// (0x00038237) aid_size_cell_vkb

0xcd00,	// (0x000385a3) cell_vkb_candidate_pane

0x9996,	// (0x00035239) bg_popup_fep_shadow_pane_g1

0xc9fe,	// (0x000382a1) fep_vkb_bottom_pane_ParamLimits

0xc9fe,	// (0x000382a1) fep_vkb_bottom_pane

0xca3b,	// (0x000382de) fep_vkb_candidate_pane_ParamLimits

0xca3b,	// (0x000382de) fep_vkb_candidate_pane

0xca57,	// (0x000382fa) fep_vkb_keypad_pane_ParamLimits

0xca57,	// (0x000382fa) fep_vkb_keypad_pane

0xca8b,	// (0x0003832e) fep_vkb_side_pane_ParamLimits

0xca8b,	// (0x0003832e) fep_vkb_side_pane

0xcab7,	// (0x0003835a) fep_vkb_top_pane_ParamLimits

0xcab7,	// (0x0003835a) fep_vkb_top_pane

0xcae3,	// (0x00038386) fep_vkb_top_pane_g1_ParamLimits

0xcae3,	// (0x00038386) fep_vkb_top_pane_g1

0xcaf2,	// (0x00038395) fep_vkb_top_pane_g2_ParamLimits

0xcaf2,	// (0x00038395) fep_vkb_top_pane_g2

0xcb01,	// (0x000383a4) fep_vkb_top_pane_g3_ParamLimits

0xcb01,	// (0x000383a4) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0003b3ca) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0003b3ca) fep_vkb_top_pane_g

0xcb1f,	// (0x000383c2) fep_vkb_top_text_pane_ParamLimits

0xcb1f,	// (0x000383c2) fep_vkb_top_text_pane

0xe9fd,	// (0x0003a2a0) fep_vkb_side_pane_g1_ParamLimits

0xe9fd,	// (0x0003a2a0) fep_vkb_side_pane_g1

0xcb3e,	// (0x000383e1) grid_vkb_side_pane_ParamLimits

0xcb3e,	// (0x000383e1) grid_vkb_side_pane

0x999e,	// (0x00035241) bg_popup_fep_shadow_pane_g2

0x99a7,	// (0x0003524a) bg_popup_fep_shadow_pane_g3

0x99af,	// (0x00035252) bg_popup_fep_shadow_pane_g4

0x99b8,	// (0x0003525b) bg_popup_fep_shadow_pane_g5

0x99c0,	// (0x00035263) bg_popup_fep_shadow_pane_g6

0x99c8,	// (0x0003526b) bg_popup_fep_shadow_pane_g7

0x7f4d,	// (0x000337f0) bg_popup_fep_shadow_pane_g8

0xcb8f,	// (0x00038432) grid_vkb_keypad_number_pane_ParamLimits

0xcb8f,	// (0x00038432) grid_vkb_keypad_number_pane

0xcb9f,	// (0x00038442) grid_vkb_keypad_pane_ParamLimits

0xcb9f,	// (0x00038442) grid_vkb_keypad_pane

0xcbc5,	// (0x00038468) fep_vkb_bottom_pane_g1_ParamLimits

0xcbc5,	// (0x00038468) fep_vkb_bottom_pane_g1

0xcbee,	// (0x00038491) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xcbee,	// (0x00038491) grid_vkb_keypad_bottom_left_pane

0xcc03,	// (0x000384a6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xcc03,	// (0x000384a6) grid_vkb_keypad_bottom_right_pane

0xcc18,	// (0x000384bb) fep_vkb_top_text_pane_g1

0xea47,	// (0x0003a2ea) fep_vkb_top_text_pane_t1

0xea5c,	// (0x0003a2ff) cell_vkb_side_pane_ParamLimits

0xea5c,	// (0x0003a2ff) cell_vkb_side_pane

0xc8e5,	// (0x00038188) cell_vkb_side_pane_g1

0xcc40,	// (0x000384e3) cell_vkb_keypad_pane_ParamLimits

0xcc40,	// (0x000384e3) cell_vkb_keypad_pane

0xccad,	// (0x00038550) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x0003b3f7) bg_popup_fep_shadow_pane_g

0xc8e5,	// (0x00038188) cell_hwr_side_pane_g1

0xc8e5,	// (0x00038188) cell_hwr_side_pane_g2

0xccb7,	// (0x0003855a) cell_vkb_keypad_pane_t1

0xea7f,	// (0x0003a322) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xea7f,	// (0x0003a322) cell_vkb_keypad_bottom_left_pane

0xea9c,	// (0x0003a33f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xea9c,	// (0x0003a33f) cell_vkb_keypad_bottom_right_pane

0xc8e5,	// (0x00038188) cell_vkb_keypad_bottom_left_pane_g1

0xc8e5,	// (0x00038188) cell_vkb_keypad_bottom_right_pane_g1

0xccc5,	// (0x00038568) cell_vkb_keypad_number_pane_ParamLimits

0xccc5,	// (0x00038568) cell_vkb_keypad_number_pane

0xcce4,	// (0x00038587) cell_vkb_keypad_number_pane_g1

0xccee,	// (0x00038591) cell_vkb_keypad_number_pane_g2

0xccf7,	// (0x0003859a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0003b3e9) cell_vkb_keypad_number_pane_g

0xccb7,	// (0x0003855a) cell_vkb_keypad_number_pane_t1

0xcd19,	// (0x000385bc) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x0003b3e4) cell_hwr_side_pane_g

0xcd32,	// (0x000385d5) cell_hwr_side_pane_t1

0x99d8,	// (0x0003527b) cell_hwr_side_pane_t1_copy1

0xcb11,	// (0x000383b4) cell_hwr_candidate_pane_g1

0x99e6,	// (0x00035289) cell_hwr_candidate_pane_t1

0xc8e5,	// (0x00038188) cell_vkb_candidate_pane_g2

0xcdb8,	// (0x0003865b) cell_vkb_candidate_pane_t1

0x97b8,	// (0x0003505b) bg_popup_fep_shadow_pane_ParamLimits

0x97b8,	// (0x0003505b) bg_popup_fep_shadow_pane

0x2f03,	// (0x0002e7a6) bg_fep_hwr_top_pane_g4

0xc962,	// (0x00038205) bg_hwr_side_pane_g1_ParamLimits

0xc962,	// (0x00038205) bg_hwr_side_pane_g1

0x98ca,	// (0x0003516d) cell_hwr_side_pane_ParamLimits

0x98ca,	// (0x0003516d) cell_hwr_side_pane

0x9905,	// (0x000351a8) fep_hwr_write_pane_g1_ParamLimits

0x9905,	// (0x000351a8) fep_hwr_write_pane_g1

0x9912,	// (0x000351b5) fep_hwr_write_pane_g2_ParamLimits

0x9912,	// (0x000351b5) fep_hwr_write_pane_g2

0x991f,	// (0x000351c2) fep_hwr_write_pane_g3_ParamLimits

0x991f,	// (0x000351c2) fep_hwr_write_pane_g3

0x992d,	// (0x000351d0) fep_hwr_write_pane_g4_ParamLimits

0x992d,	// (0x000351d0) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0003b3b6) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0003b3b6) fep_hwr_write_pane_g

0x2f03,	// (0x0002e7a6) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2f03,	// (0x0002e7a6) bg_fep_hwr_candidate_pane_g2

0x9942,	// (0x000351e5) cell_hwr_candidate_pane_ParamLimits

0x9942,	// (0x000351e5) cell_hwr_candidate_pane

0x997c,	// (0x0003521f) fep_hwr_candidate_pane_g1_ParamLimits

0xc9c2,	// (0x00038265) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc9c2,	// (0x00038265) bg_popup_fep_shadow_pane_cp2

0xcb11,	// (0x000383b4) fep_vkb_top_pane_g4_ParamLimits

0xcb11,	// (0x000383b4) fep_vkb_top_pane_g4

0xcb30,	// (0x000383d3) fep_vkb_side_pane_g2_ParamLimits

0xcb30,	// (0x000383d3) fep_vkb_side_pane_g2

0x6a0e,	// (0x000322b1) list_setting_pane_t4_ParamLimits

0x6a0e,	// (0x000322b1) list_setting_pane_t4

0x6aa4,	// (0x00032347) list_setting_number_pane_t5_ParamLimits

0x6aa4,	// (0x00032347) list_setting_number_pane_t5

0xdf0c,	// (0x000397af) list_double_heading_pane_cp2_ParamLimits

0xdf0c,	// (0x000397af) list_double_heading_pane_cp2

0x8a50,	// (0x000342f3) list_double_heading_pane_g1_cp2_ParamLimits

0x8a50,	// (0x000342f3) list_double_heading_pane_g1_cp2

0xcdc6,	// (0x00038669) list_double_heading_pane_g2_cp2_ParamLimits

0xcdc6,	// (0x00038669) list_double_heading_pane_g2_cp2

0xcdda,	// (0x0003867d) list_double_heading_pane_t1_cp2_ParamLimits

0xcdda,	// (0x0003867d) list_double_heading_pane_t1_cp2

0xcdf0,	// (0x00038693) list_double_heading_pane_t2_cp2_ParamLimits

0xcdf0,	// (0x00038693) list_double_heading_pane_t2_cp2

0x7480,	// (0x00032d23) aid_value_unit2

0x76b7,	// (0x00032f5a) popup_preview_fixed_window

0x79b8,	// (0x0003325b) bg_popup_preview_window_pane_cp02

0xce02,	// (0x000386a5) list_preview_fixed_pane

0xce48,	// (0x000386eb) list_empty_pane_fp_ParamLimits

0xce48,	// (0x000386eb) list_empty_pane_fp

0xce48,	// (0x000386eb) list_single_cale_day_pane_fp_ParamLimits

0xce48,	// (0x000386eb) list_single_cale_day_pane_fp

0xce48,	// (0x000386eb) list_single_graphic_heading_pane_fp_ParamLimits

0xce48,	// (0x000386eb) list_single_graphic_heading_pane_fp

0xce48,	// (0x000386eb) list_single_graphic_pane_fp_ParamLimits

0xce48,	// (0x000386eb) list_single_graphic_pane_fp

0xce48,	// (0x000386eb) list_single_heading_pane_fp_ParamLimits

0xce48,	// (0x000386eb) list_single_heading_pane_fp

0xce48,	// (0x000386eb) list_single_pane_fp_ParamLimits

0xce48,	// (0x000386eb) list_single_pane_fp

0xce5c,	// (0x000386ff) list_single_pane_fp_g1_ParamLimits

0xce5c,	// (0x000386ff) list_single_pane_fp_g1

0x7e2a,	// (0x000336cd) list_single_pane_fp_g2_ParamLimits

0x7e2a,	// (0x000336cd) list_single_pane_fp_g2

0x9a03,	// (0x000352a6) list_single_pane_fp_g3_ParamLimits

0x9a03,	// (0x000352a6) list_single_pane_fp_g3

0xce68,	// (0x0003870b) list_single_pane_fp_g4_ParamLimits

0xce68,	// (0x0003870b) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0003b418) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0003b418) list_single_pane_fp_g

0x71d7,	// (0x00032a7a) list_single_pane_fp_t1_ParamLimits

0x71d7,	// (0x00032a7a) list_single_pane_fp_t1

0x71ee,	// (0x00032a91) list_single_graphic_pane_fp_g1_ParamLimits

0x71ee,	// (0x00032a91) list_single_graphic_pane_fp_g1

0xce5c,	// (0x000386ff) list_single_graphic_pane_fp_g2_ParamLimits

0xce5c,	// (0x000386ff) list_single_graphic_pane_fp_g2

0x7e2a,	// (0x000336cd) list_single_graphic_pane_fp_g3_ParamLimits

0x7e2a,	// (0x000336cd) list_single_graphic_pane_fp_g3

0x9a03,	// (0x000352a6) list_single_graphic_pane_fp_g4_ParamLimits

0x9a03,	// (0x000352a6) list_single_graphic_pane_fp_g4

0xce68,	// (0x0003870b) list_single_graphic_pane_fp_g5_ParamLimits

0xce68,	// (0x0003870b) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003b421) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003b421) list_single_graphic_pane_fp_g

0x71fa,	// (0x00032a9d) list_single_graphic_pane_fp_t1_ParamLimits

0x71fa,	// (0x00032a9d) list_single_graphic_pane_fp_t1

0x71ee,	// (0x00032a91) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x71ee,	// (0x00032a91) list_single_graphic_heading_pane_fp_g1

0xce5c,	// (0x000386ff) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xce5c,	// (0x000386ff) list_single_graphic_heading_pane_fp_g2

0x7e2a,	// (0x000336cd) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7e2a,	// (0x000336cd) list_single_graphic_heading_pane_fp_g3

0x9a03,	// (0x000352a6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x9a03,	// (0x000352a6) list_single_graphic_heading_pane_fp_g4

0xce68,	// (0x0003870b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xce68,	// (0x0003870b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003b421) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003b421) list_single_graphic_heading_pane_fp_g

0x7210,	// (0x00032ab3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7210,	// (0x00032ab3) list_single_graphic_heading_pane_fp_t1

0x7226,	// (0x00032ac9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7226,	// (0x00032ac9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0003b42c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0003b42c) list_single_graphic_heading_pane_fp_t

0x7238,	// (0x00032adb) list_single_cale_day_pane_fp_g1_ParamLimits

0x7238,	// (0x00032adb) list_single_cale_day_pane_fp_g1

0xce74,	// (0x00038717) list_single_cale_day_pane_fp_g2_ParamLimits

0xce74,	// (0x00038717) list_single_cale_day_pane_fp_g2

0x9a17,	// (0x000352ba) list_single_cale_day_pane_fp_g3_ParamLimits

0x9a17,	// (0x000352ba) list_single_cale_day_pane_fp_g3

0x9a3f,	// (0x000352e2) list_single_cale_day_pane_fp_g4_ParamLimits

0x9a3f,	// (0x000352e2) list_single_cale_day_pane_fp_g4

0x9a63,	// (0x00035306) list_single_cale_day_pane_fp_g5_ParamLimits

0x9a63,	// (0x00035306) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003b431) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003b431) list_single_cale_day_pane_fp_g

0x7270,	// (0x00032b13) list_single_cale_day_pane_fp_t1_ParamLimits

0x7270,	// (0x00032b13) list_single_cale_day_pane_fp_t1

0x7296,	// (0x00032b39) list_single_cale_day_pane_fp_t2_ParamLimits

0x7296,	// (0x00032b39) list_single_cale_day_pane_fp_t2

0x72af,	// (0x00032b52) list_single_cale_day_pane_fp_t3_ParamLimits

0x72af,	// (0x00032b52) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x0003b43c) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x0003b43c) list_single_cale_day_pane_fp_t

0xce5c,	// (0x000386ff) list_empty_pane_fp_g1_ParamLimits

0xce5c,	// (0x000386ff) list_empty_pane_fp_g1

0x72c8,	// (0x00032b6b) list_empty_pane_fp_t1

0x72d6,	// (0x00032b79) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0003b443) list_empty_pane_fp_t

0xce5c,	// (0x000386ff) list_single_heading_pane_fp_g1_ParamLimits

0xce5c,	// (0x000386ff) list_single_heading_pane_fp_g1

0x7e2a,	// (0x000336cd) list_single_heading_pane_fp_g2_ParamLimits

0x7e2a,	// (0x000336cd) list_single_heading_pane_fp_g2

0x9a03,	// (0x000352a6) list_single_heading_pane_fp_g3_ParamLimits

0x9a03,	// (0x000352a6) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0003b448) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0003b448) list_single_heading_pane_fp_g

0x72e4,	// (0x00032b87) list_single_heading_pane_fp_t1_ParamLimits

0x72e4,	// (0x00032b87) list_single_heading_pane_fp_t1

0x72f6,	// (0x00032b99) list_single_heading_pane_fp_t2_ParamLimits

0x72f6,	// (0x00032b99) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0003b44f) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0003b44f) list_single_heading_pane_fp_t

0x8058,	// (0x000338fb) aid_size_cell_fast

0x798d,	// (0x00033230) soft_indicator_pane_cp1_t1

0x8095,	// (0x00033938) cell_app_pane_cp2_ParamLimits

0x8095,	// (0x00033938) cell_app_pane_cp2

0x97da,	// (0x0003507d) fep_hwr_candidate_drop_down_list_pane

0x3221,	// (0x0002eac4) fep_hwr_candidate_pane_g3_ParamLimits

0x3221,	// (0x0002eac4) fep_hwr_candidate_pane_g3

0x322e,	// (0x0002ead1) fep_hwr_candidate_pane_g4_ParamLimits

0x322e,	// (0x0002ead1) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0003b3c3) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0003b3c3) fep_hwr_candidate_pane_g

0xca2a,	// (0x000382cd) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xca2a,	// (0x000382cd) fep_vkb_candidate_drop_down_list_pane

0xcd21,	// (0x000385c4) fep_vkb_candidate_pane_g3

0xcd29,	// (0x000385cc) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0003b3f0) fep_vkb_candidate_pane_g

0xcb11,	// (0x000383b4) cell_hwr_candidate_pane_g1_ParamLimits

0xcd40,	// (0x000385e3) cell_hwr_candidate_pane_g3_ParamLimits

0xcd40,	// (0x000385e3) cell_hwr_candidate_pane_g3

0xcd61,	// (0x00038604) cell_hwr_candidate_pane_g4_ParamLimits

0xcd61,	// (0x00038604) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x0003b40a) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x0003b40a) cell_hwr_candidate_pane_g

0xcd82,	// (0x00038625) cell_vkb_candidate_pane_g3_ParamLimits

0xcd82,	// (0x00038625) cell_vkb_candidate_pane_g3

0xcd9d,	// (0x00038640) cell_vkb_candidate_pane_g4_ParamLimits

0xcd9d,	// (0x00038640) cell_vkb_candidate_pane_g4

0xce80,	// (0x00038723) cell_app_pane_cp2_g1_ParamLimits

0xce80,	// (0x00038723) cell_app_pane_cp2_g1

0xce9e,	// (0x00038741) cell_app_pane_cp2_g2_ParamLimits

0xce9e,	// (0x00038741) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0003b454) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0003b454) cell_app_pane_cp2_g

0xceaa,	// (0x0003874d) cell_app_pane_cp2_t1_ParamLimits

0xceaa,	// (0x0003874d) cell_app_pane_cp2_t1

0x7ede,	// (0x00033781) grid_highlight_pane_cp1_ParamLimits

0x7ede,	// (0x00033781) grid_highlight_pane_cp1

0x9a87,	// (0x0003532a) cell_hwr_candidate_pane_cp1_ParamLimits

0x9a87,	// (0x0003532a) cell_hwr_candidate_pane_cp1

0xcb11,	// (0x000383b4) fep_hwr_candidate_drop_down_list_pane_g1

0xcebc,	// (0x0003875f) fep_hwr_candidate_drop_down_list_pane_g2

0xcec9,	// (0x0003876c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0003b459) fep_hwr_candidate_drop_down_list_pane_g

0x9aa5,	// (0x00035348) fep_hwr_candidate_drop_down_list_scroll_pane

0x9aae,	// (0x00035351) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9aae,	// (0x00035351) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x9abb,	// (0x0003535e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9abb,	// (0x0003535e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x9ac8,	// (0x0003536b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9ac8,	// (0x0003536b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xcd82,	// (0x00038625) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xcd82,	// (0x00038625) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xcd9d,	// (0x00038640) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xcd9d,	// (0x00038640) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9ad5,	// (0x00035378) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9ad5,	// (0x00035378) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x9af0,	// (0x00035393) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9af0,	// (0x00035393) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x9b0b,	// (0x000353ae) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9b0b,	// (0x000353ae) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0003b460) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0003b460) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xead5,	// (0x0003a378) cell_vkb_candidate_pane_cp1_ParamLimits

0xead5,	// (0x0003a378) cell_vkb_candidate_pane_cp1

0xcb11,	// (0x000383b4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xcb11,	// (0x000383b4) fep_vkb_candidate_drop_down_list_pane_g1

0xcebc,	// (0x0003875f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xcebc,	// (0x0003875f) fep_vkb_candidate_drop_down_list_pane_g2

0xcec9,	// (0x0003876c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xcec9,	// (0x0003876c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0003b459) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x0003b459) fep_vkb_candidate_drop_down_list_pane_g

0xced6,	// (0x00038779) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xced6,	// (0x00038779) fep_vkb_candidate_drop_down_list_scroll_pane

0xcee3,	// (0x00038786) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xcee3,	// (0x00038786) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xcef0,	// (0x00038793) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xcef0,	// (0x00038793) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xcefc,	// (0x0003879f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xcefc,	// (0x0003879f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xcd40,	// (0x000385e3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xcd40,	// (0x000385e3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xcd61,	// (0x00038604) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xcd61,	// (0x00038604) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xcf08,	// (0x000387ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xcf08,	// (0x000387ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xcf29,	// (0x000387cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcf29,	// (0x000387cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcf4a,	// (0x000387ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcf4a,	// (0x000387ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0003b471) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0003b471) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xdb24,	// (0x000393c7) title_pane_g1_ParamLimits

0xdb31,	// (0x000393d4) title_pane_g2_ParamLimits

0xf54e,	// (0x0003adf1) title_pane_g_ParamLimits

0x852e,	// (0x00033dd1) aid_call2_pane

0x8536,	// (0x00033dd9) aid_call_pane

0x853e,	// (0x00033de1) popup_clock_analogue_window_g1

0x853e,	// (0x00033de1) popup_clock_analogue_window_g2

0x8546,	// (0x00033de9) popup_clock_analogue_window_g3

0x854f,	// (0x00033df2) popup_clock_analogue_window_g4

0x7492,	// (0x00032d35) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0003afa0) popup_clock_analogue_window_g

0x8557,	// (0x00033dfa) popup_clock_analogue_window_t1

0x8594,	// (0x00033e37) clock_digital_number_pane_ParamLimits

0x8594,	// (0x00033e37) clock_digital_number_pane

0x85a0,	// (0x00033e43) clock_digital_number_pane_cp02_ParamLimits

0x85a0,	// (0x00033e43) clock_digital_number_pane_cp02

0x85ac,	// (0x00033e4f) clock_digital_number_pane_cp03_ParamLimits

0x85ac,	// (0x00033e4f) clock_digital_number_pane_cp03

0x85b8,	// (0x00033e5b) clock_digital_number_pane_cp04_ParamLimits

0x85b8,	// (0x00033e5b) clock_digital_number_pane_cp04

0x85c4,	// (0x00033e67) clock_digital_separator_pane_ParamLimits

0x85c4,	// (0x00033e67) clock_digital_separator_pane

0x85d0,	// (0x00033e73) popup_clock_digital_window_t1_ParamLimits

0x85d0,	// (0x00033e73) popup_clock_digital_window_t1

0x7492,	// (0x00032d35) clock_digital_number_pane_g1

0x7492,	// (0x00032d35) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0003afab) clock_digital_number_pane_g

0x7492,	// (0x00032d35) clock_digital_separator_pane_g1

0x7492,	// (0x00032d35) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0003afab) clock_digital_separator_pane_g

0xe16e,	// (0x00039a11) aid_fill_nsta_ParamLimits

0xe227,	// (0x00039aca) indicator_nsta_pane_ParamLimits

0xaa5b,	// (0x000362fe) popup_clock_analogue_window

0xaa5b,	// (0x000362fe) popup_clock_digital_window

0x77e5,	// (0x00033088) grid_indicator_nsta_pane_ParamLimits

0xc4dd,	// (0x00037d80) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0003b343) clock_nsta_pane_t

0x8372,	// (0x00033c15) aid_size_max_handle

0x837c,	// (0x00033c1f) aid_size_min_handle

0xa7d0,	// (0x00036073) editor_scroll_pane

0xcf65,	// (0x00038808) ex_editor_pane

0x8021,	// (0x000338c4) scroll_pane_cp13

0x7dcf,	// (0x00033672) scroll_pane_cp14

0x858c,	// (0x00033e2f) scroll_pane_cp36

0xdf1c,	// (0x000397bf) list_single_graphic_hl_pane_cp2_ParamLimits

0xdf1c,	// (0x000397bf) list_single_graphic_hl_pane_cp2

0x6f64,	// (0x00032807) list_single_graphic_hl_pane_ParamLimits

0x6f64,	// (0x00032807) list_single_graphic_hl_pane

0x730c,	// (0x00032baf) aid_size_min_hl_cp1

0xcf6d,	// (0x00038810) list_highlight_pane_cp34_ParamLimits

0xcf6d,	// (0x00038810) list_highlight_pane_cp34

0xcf7e,	// (0x00038821) list_single_graphic_hl_pane_g1_ParamLimits

0xcf7e,	// (0x00038821) list_single_graphic_hl_pane_g1

0x7315,	// (0x00032bb8) list_single_graphic_hl_pane_g2_ParamLimits

0x7315,	// (0x00032bb8) list_single_graphic_hl_pane_g2

0x7315,	// (0x00032bb8) list_single_graphic_hl_pane_g3_ParamLimits

0x7315,	// (0x00032bb8) list_single_graphic_hl_pane_g3

0x7e2a,	// (0x000336cd) list_single_graphic_hl_pane_g4_ParamLimits

0x7e2a,	// (0x000336cd) list_single_graphic_hl_pane_g4

0x9a03,	// (0x000352a6) list_single_graphic_hl_pane_g5_ParamLimits

0x9a03,	// (0x000352a6) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0003b482) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0003b482) list_single_graphic_hl_pane_g

0x682b,	// (0x000320ce) list_single_graphic_hl_pane_t1_ParamLimits

0x682b,	// (0x000320ce) list_single_graphic_hl_pane_t1

0xcf8b,	// (0x0003882e) aid_size_min_hl_cp2

0xcf94,	// (0x00038837) list_highlight_pane_cp34_cp2_ParamLimits

0xcf94,	// (0x00038837) list_highlight_pane_cp34_cp2

0xcf7e,	// (0x00038821) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcf7e,	// (0x00038821) list_single_graphic_hl_pane_g1_cp2

0xcfa1,	// (0x00038844) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcfa1,	// (0x00038844) list_single_graphic_hl_pane_g2_cp2

0xcfad,	// (0x00038850) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcfad,	// (0x00038850) list_single_graphic_hl_pane_g3_cp2

0x8a50,	// (0x000342f3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8a50,	// (0x000342f3) list_single_graphic_hl_pane_g4_cp2

0xcdc6,	// (0x00038669) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcdc6,	// (0x00038669) list_single_graphic_hl_pane_g5_cp2

0x8c8a,	// (0x0003452d) control_pane_g4_ParamLimits

0x8c8a,	// (0x0003452d) control_pane_g4

0x8db4,	// (0x00034657) bg_popup_sub_pane_cp10_ParamLimits

0xc8ef,	// (0x00038192) list_choice_list_pane_ParamLimits

0xc8fe,	// (0x000381a1) scroll_pane_cp23

0x79b8,	// (0x0003325b) bg_popup_preview_window_pane_cp02_ParamLimits

0xce02,	// (0x000386a5) list_preview_fixed_pane_ParamLimits

0xce18,	// (0x000386bb) list_preview_fixed_pane_cp_ParamLimits

0xce18,	// (0x000386bb) list_preview_fixed_pane_cp

0xce24,	// (0x000386c7) popup_preview_fixed_window_g1_ParamLimits

0xce24,	// (0x000386c7) popup_preview_fixed_window_g1

0xce30,	// (0x000386d3) popup_preview_fixed_window_g2_ParamLimits

0xce30,	// (0x000386d3) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x0003b411) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x0003b411) popup_preview_fixed_window_g

0x82cb,	// (0x00033b6e) aid_navi_side_left_pane_ParamLimits

0x82db,	// (0x00033b7e) aid_navi_side_right_pane_ParamLimits

0x82ea,	// (0x00033b8d) navi_icon_pane_stacon_ParamLimits

0x82fa,	// (0x00033b9d) navi_navi_pane_stacon_ParamLimits

0x82ea,	// (0x00033b8d) navi_text_pane_stacon_ParamLimits

0x7488,	// (0x00032d2b) main_text_info_pane

0xcfcf,	// (0x00038872) listscroll_text_info_pane

0xcfd7,	// (0x0003887a) list_text_info_pane_ParamLimits

0xcfd7,	// (0x0003887a) list_text_info_pane

0xcfe6,	// (0x00038889) scroll_pane_cp24_ParamLimits

0xcfe6,	// (0x00038889) scroll_pane_cp24

0xeaf8,	// (0x0003a39b) list_text_info_pane_t1_ParamLimits

0xeaf8,	// (0x0003a39b) list_text_info_pane_t1

0x8de6,	// (0x00034689) popup_fast_swap2_window_ParamLimits

0x8de6,	// (0x00034689) popup_fast_swap2_window

0xd004,	// (0x000388a7) aid_size_cell_fast2

0x7488,	// (0x00032d2b) bg_popup_window_pane_cp17

0xaf12,	// (0x000367b5) heading_pane_cp2

0x7bce,	// (0x00033471) listscroll_fast2_pane

0xd00e,	// (0x000388b1) grid_fast2_pane

0xd016,	// (0x000388b9) listscroll_fast2_pane_g1

0xd01e,	// (0x000388c1) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x0003b48d) listscroll_fast2_pane_g

0x8021,	// (0x000338c4) scroll_pane_cp26

0xd026,	// (0x000388c9) cell_fast2_pane_ParamLimits

0xd026,	// (0x000388c9) cell_fast2_pane

0xd03c,	// (0x000388df) cell_fast2_pane_g1

0xd045,	// (0x000388e8) cell_fast2_pane_g2

0xd04e,	// (0x000388f1) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0003b492) cell_fast2_pane_g

0x7c30,	// (0x000334d3) grid_highlight_pane_cp9

0x7c45,	// (0x000334e8) main_eswt_pane_ParamLimits

0x7c45,	// (0x000334e8) main_eswt_pane

0xcffb,	// (0x0003889e) list_single_text_info_pane

0xd056,	// (0x000388f9) eswt_ctrl_button_pane

0xd056,	// (0x000388f9) eswt_ctrl_canvas_pane

0xd05e,	// (0x00038901) eswt_ctrl_combo_pane

0xd056,	// (0x000388f9) eswt_ctrl_default_pane

0xd056,	// (0x000388f9) eswt_ctrl_label_pane

0xd066,	// (0x00038909) eswt_ctrl_wait_pane

0xd06e,	// (0x00038911) eswt_shell_pane

0x7488,	// (0x00032d2b) listscroll_eswt_app_pane

0xd08a,	// (0x0003892d) popup_eswt_tasktip_window_ParamLimits

0xd08a,	// (0x0003892d) popup_eswt_tasktip_window

0xabe8,	// (0x0003648b) bg_popup_window_pane_cp18

0xd09b,	// (0x0003893e) eswt_control_pane_g1_ParamLimits

0xd09b,	// (0x0003893e) eswt_control_pane_g1

0xd0a8,	// (0x0003894b) eswt_control_pane_g2_ParamLimits

0xd0a8,	// (0x0003894b) eswt_control_pane_g2

0xd0b5,	// (0x00038958) eswt_control_pane_g3_ParamLimits

0xd0b5,	// (0x00038958) eswt_control_pane_g3

0xd0c2,	// (0x00038965) eswt_control_pane_g4_ParamLimits

0xd0c2,	// (0x00038965) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x0003b499) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x0003b499) eswt_control_pane_g

0x7ede,	// (0x00033781) bg_button_pane_ParamLimits

0x7ede,	// (0x00033781) bg_button_pane

0x7c45,	// (0x000334e8) common_borders_pane_copy2_ParamLimits

0x7c45,	// (0x000334e8) common_borders_pane_copy2

0xd0cf,	// (0x00038972) control_button_pane_g1_ParamLimits

0xd0cf,	// (0x00038972) control_button_pane_g1

0xd0db,	// (0x0003897e) control_button_pane_g2_ParamLimits

0xd0db,	// (0x0003897e) control_button_pane_g2

0xd0e7,	// (0x0003898a) control_button_pane_g3_ParamLimits

0xd0e7,	// (0x0003898a) control_button_pane_g3

0x0002,

0xfbff,	// (0x0003b4a2) control_button_pane_g_ParamLimits

0xfbff,	// (0x0003b4a2) control_button_pane_g

0xd0fb,	// (0x0003899e) control_button_pane_t1

0xd109,	// (0x000389ac) control_button_pane_t2

0x0001,

0xfc06,	// (0x0003b4a9) control_button_pane_t

0xab68,	// (0x0003640b) bg_button_pane_g1

0xab70,	// (0x00036413) bg_button_pane_g2

0xab78,	// (0x0003641b) bg_button_pane_g3

0xab80,	// (0x00036423) bg_button_pane_g4

0xab88,	// (0x0003642b) bg_button_pane_g5

0xab90,	// (0x00036433) bg_button_pane_g6

0xab98,	// (0x0003643b) bg_button_pane_g7

0xaba0,	// (0x00036443) bg_button_pane_g8

0xaba8,	// (0x0003644b) bg_button_pane_g9

0x0008,

0xf866,	// (0x0003b109) bg_button_pane_g

0xc8aa,	// (0x0003814d) common_borders_pane_ParamLimits

0xc8aa,	// (0x0003814d) common_borders_pane

0xd09b,	// (0x0003893e) eswt_control_pane_g1_copy1_ParamLimits

0xd09b,	// (0x0003893e) eswt_control_pane_g1_copy1

0xd0a8,	// (0x0003894b) eswt_control_pane_g2_copy1_ParamLimits

0xd0a8,	// (0x0003894b) eswt_control_pane_g2_copy1

0xd0b5,	// (0x00038958) eswt_control_pane_g3_copy1_ParamLimits

0xd0b5,	// (0x00038958) eswt_control_pane_g3_copy1

0xd0c2,	// (0x00038965) eswt_control_pane_g4_copy1_ParamLimits

0xd0c2,	// (0x00038965) eswt_control_pane_g4_copy1

0xc8e5,	// (0x00038188) bg_eswt_ctrl_canvas_pane_g1

0xc8aa,	// (0x0003814d) common_borders_pane_cp2_ParamLimits

0xc8aa,	// (0x0003814d) common_borders_pane_cp2

0xc8aa,	// (0x0003814d) common_borders_pane_cp3_ParamLimits

0xc8aa,	// (0x0003814d) common_borders_pane_cp3

0xd117,	// (0x000389ba) separator_horizontal_pane

0x83cd,	// (0x00033c70) separator_vertical_pane

0xd09b,	// (0x0003893e) eswt_control_pane_g1_copy2_ParamLimits

0xd09b,	// (0x0003893e) eswt_control_pane_g1_copy2

0xd0a8,	// (0x0003894b) eswt_control_pane_g2_copy2_ParamLimits

0xd0a8,	// (0x0003894b) eswt_control_pane_g2_copy2

0xd0b5,	// (0x00038958) eswt_control_pane_g3_copy2_ParamLimits

0xd0b5,	// (0x00038958) eswt_control_pane_g3_copy2

0xd0c2,	// (0x00038965) eswt_control_pane_g4_copy2_ParamLimits

0xd0c2,	// (0x00038965) eswt_control_pane_g4_copy2

0x7488,	// (0x00032d2b) common_borders_pane_cp4

0xd11f,	// (0x000389c2) separator_horizontal_pane_g1

0xd128,	// (0x000389cb) separator_horizontal_pane_g2

0xd131,	// (0x000389d4) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x0003b4ae) separator_horizontal_pane_g

0xd09b,	// (0x0003893e) eswt_control_pane_g1_copy3_ParamLimits

0xd09b,	// (0x0003893e) eswt_control_pane_g1_copy3

0xd0a8,	// (0x0003894b) eswt_control_pane_g2_copy3_ParamLimits

0xd0a8,	// (0x0003894b) eswt_control_pane_g2_copy3

0xd0b5,	// (0x00038958) eswt_control_pane_g3_copy3_ParamLimits

0xd0b5,	// (0x00038958) eswt_control_pane_g3_copy3

0xd0c2,	// (0x00038965) eswt_control_pane_g4_copy3_ParamLimits

0xd0c2,	// (0x00038965) eswt_control_pane_g4_copy3

0x7488,	// (0x00032d2b) common_borders_pane_cp5

0xd13a,	// (0x000389dd) separator_vertical_pane_g1

0xd143,	// (0x000389e6) separator_vertical_pane_g2

0xd14c,	// (0x000389ef) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x0003b4b5) separator_vertical_pane_g

0xd09b,	// (0x0003893e) eswt_control_pane_g1_copy4_ParamLimits

0xd09b,	// (0x0003893e) eswt_control_pane_g1_copy4

0xd0a8,	// (0x0003894b) eswt_control_pane_g2_copy4_ParamLimits

0xd0a8,	// (0x0003894b) eswt_control_pane_g2_copy4

0xd0b5,	// (0x00038958) eswt_control_pane_g3_copy4_ParamLimits

0xd0b5,	// (0x00038958) eswt_control_pane_g3_copy4

0xd0c2,	// (0x00038965) eswt_control_pane_g4_copy4_ParamLimits

0xd0c2,	// (0x00038965) eswt_control_pane_g4_copy4

0xeb15,	// (0x0003a3b8) eswt_ctrl_combo_button_pane

0xeb1d,	// (0x0003a3c0) eswt_ctrl_input_pane

0xeb25,	// (0x0003a3c8) popup_choice_list_window_cp70

0xeb2d,	// (0x0003a3d0) eswt_ctrl_input_pane_t1

0x7488,	// (0x00032d2b) input_focus_pane_cp70

0xc8aa,	// (0x0003814d) bg_button_pane_cp70_ParamLimits

0xc8aa,	// (0x0003814d) bg_button_pane_cp70

0xeb3b,	// (0x0003a3de) eswt_ctrl_combo_button_pane_g1

0xd155,	// (0x000389f8) wait_bar_pane_cp70

0xabe8,	// (0x0003648b) bg_popup_window_pane_cp70_ParamLimits

0xabe8,	// (0x0003648b) bg_popup_window_pane_cp70

0xd15d,	// (0x00038a00) popup_eswt_tasktip_window_t1

0xd173,	// (0x00038a16) wait_bar_pane_cp71_ParamLimits

0xd173,	// (0x00038a16) wait_bar_pane_cp71

0xd17f,	// (0x00038a22) grid_eswt_app_pane

0x83d6,	// (0x00033c79) scroll_pane_cp70

0xeb43,	// (0x0003a3e6) cell_eswt_app_pane_ParamLimits

0xeb43,	// (0x0003a3e6) cell_eswt_app_pane

0xeb6b,	// (0x0003a40e) cell_eswt_app_pane_g1_ParamLimits

0xeb6b,	// (0x0003a40e) cell_eswt_app_pane_g1

0xeb9a,	// (0x0003a43d) cell_eswt_app_pane_g2_ParamLimits

0xeb9a,	// (0x0003a43d) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x0003b4bc) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x0003b4bc) cell_eswt_app_pane_g

0xebc3,	// (0x0003a466) cell_eswt_app_pane_t1_ParamLimits

0xebc3,	// (0x0003a466) cell_eswt_app_pane_t1

0xd188,	// (0x00038a2b) grid_highlight_pane_cp70_ParamLimits

0xd188,	// (0x00038a2b) grid_highlight_pane_cp70

0x7e4e,	// (0x000336f1) set_content_pane_g1

0xa94f,	// (0x000361f2) status_small_volume_pane

0x9b26,	// (0x000353c9) status_small_volume_pane_g1

0x9b2e,	// (0x000353d1) volume_small2_pane

0x9b37,	// (0x000353da) volume_small2_pane_g1

0x9b40,	// (0x000353e3) volume_small2_pane_g2

0x9b49,	// (0x000353ec) volume_small2_pane_g3

0x9b52,	// (0x000353f5) volume_small2_pane_g4

0x9b5b,	// (0x000353fe) volume_small2_pane_g5

0x9b64,	// (0x00035407) volume_small2_pane_g6

0x9b6d,	// (0x00035410) volume_small2_pane_g7

0x9b76,	// (0x00035419) volume_small2_pane_g8

0x9b7f,	// (0x00035422) volume_small2_pane_g9

0x9b88,	// (0x0003542b) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x0003b4c1) volume_small2_pane_g

0xcc18,	// (0x000384bb) fep_vkb_top_text_pane_g1_ParamLimits

0xea47,	// (0x0003a2ea) fep_vkb_top_text_pane_t1_ParamLimits

0xce3c,	// (0x000386df) popup_preview_fixed_window_g3_ParamLimits

0xce3c,	// (0x000386df) popup_preview_fixed_window_g3

0x91a8,	// (0x00034a4b) popup_toolbar_trans_pane

0xe602,	// (0x00039ea5) aid_height_set_list_ParamLimits

0xbc96,	// (0x00037539) aid_size_parent_ParamLimits

0x8db4,	// (0x00034657) list_highlight_pane_cp2_ParamLimits

0x7e4e,	// (0x000336f1) set_content_pane_g1_ParamLimits

0xe74d,	// (0x00039ff0) list_single_image_pane_ParamLimits

0xe74d,	// (0x00039ff0) list_single_image_pane

0xebf5,	// (0x0003a498) aid_size_cell_image_ParamLimits

0xebf5,	// (0x0003a498) aid_size_cell_image

0xec02,	// (0x0003a4a5) grid_single_image_pane_ParamLimits

0xec02,	// (0x0003a4a5) grid_single_image_pane

0x7e4e,	// (0x000336f1) list_single_image_pane_g1_ParamLimits

0x7e4e,	// (0x000336f1) list_single_image_pane_g1

0x7ef8,	// (0x0003379b) list_single_image_pane_g2_ParamLimits

0x7ef8,	// (0x0003379b) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x0003b4d6) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x0003b4d6) list_single_image_pane_g

0xd194,	// (0x00038a37) list_single_image_pane_t1_ParamLimits

0xd194,	// (0x00038a37) list_single_image_pane_t1

0xec0e,	// (0x0003a4b1) cell_image_list_pane_ParamLimits

0xec0e,	// (0x0003a4b1) cell_image_list_pane

0xec21,	// (0x0003a4c4) cell_image_list_pane_g1

0xec2a,	// (0x0003a4cd) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x0003b4db) cell_image_list_pane_g

0xd1aa,	// (0x00038a4d) aid_size_cell_tb_trans_pane

0x7ede,	// (0x00033781) bg_tb_trans_pane

0xd1bc,	// (0x00038a5f) grid_tb_trans_pane

0xab68,	// (0x0003640b) bg_tb_trans_pane_g1

0xab70,	// (0x00036413) bg_tb_trans_pane_g2

0xab78,	// (0x0003641b) bg_tb_trans_pane_g3

0xab80,	// (0x00036423) bg_tb_trans_pane_g4

0xab88,	// (0x0003642b) bg_tb_trans_pane_g5

0xaba0,	// (0x00036443) bg_tb_trans_pane_g6

0xaba8,	// (0x0003644b) bg_tb_trans_pane_g7

0xab90,	// (0x00036433) bg_tb_trans_pane_g8

0xab98,	// (0x0003643b) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x0003b4e0) bg_tb_trans_pane_g

0xd1d0,	// (0x00038a73) cell_toolbar_trans_pane_ParamLimits

0xd1d0,	// (0x00038a73) cell_toolbar_trans_pane

0xc8e5,	// (0x00038188) cell_toolbar_trans_pane_g1

0xe992,	// (0x0003a235) list_form2_midp_pane_t1

0xe9a0,	// (0x0003a243) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0003b389) list_form2_midp_pane_t

0xc5b9,	// (0x00037e5c) scroll_pane_cp51_ParamLimits

0xc72f,	// (0x00037fd2) form2_midp_wait_pane_g1

0xc738,	// (0x00037fdb) form2_midp_wait_pane_g2

0xc741,	// (0x00037fe4) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0003b39e) form2_midp_wait_pane_g

0x77e5,	// (0x00033088) list_highlight_pane_cp21_ParamLimits

0xc77f,	// (0x00038022) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc78e,	// (0x00038031) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6f25,	// (0x000327c8) list_single_2graphic_im_pane_ParamLimits

0x6f25,	// (0x000327c8) list_single_2graphic_im_pane

0xec33,	// (0x0003a4d6) list_single_2graphic_im_pane_g1_ParamLimits

0xec33,	// (0x0003a4d6) list_single_2graphic_im_pane_g1

0xec44,	// (0x0003a4e7) list_single_2graphic_im_pane_g2_ParamLimits

0xec44,	// (0x0003a4e7) list_single_2graphic_im_pane_g2

0xec50,	// (0x0003a4f3) list_single_2graphic_im_pane_g3_ParamLimits

0xec50,	// (0x0003a4f3) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x0003b4f3) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x0003b4f3) list_single_2graphic_im_pane_g

0xec64,	// (0x0003a507) list_single_2graphic_im_pane_t1_ParamLimits

0xec64,	// (0x0003a507) list_single_2graphic_im_pane_t1

0xce48,	// (0x000386eb) list_single_graphic_2heading_pane_fp_ParamLimits

0xce48,	// (0x000386eb) list_single_graphic_2heading_pane_fp

0x71ee,	// (0x00032a91) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x71ee,	// (0x00032a91) list_single_graphic_2heading_pane_fp_g1

0xce5c,	// (0x000386ff) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xce5c,	// (0x000386ff) list_single_graphic_2heading_pane_fp_g2

0x7e2a,	// (0x000336cd) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7e2a,	// (0x000336cd) list_single_graphic_2heading_pane_fp_g3

0x9a03,	// (0x000352a6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x9a03,	// (0x000352a6) list_single_graphic_2heading_pane_fp_g4

0xce68,	// (0x0003870b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xce68,	// (0x0003870b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003b421) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003b421) list_single_graphic_2heading_pane_fp_g

0x7321,	// (0x00032bc4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7321,	// (0x00032bc4) list_single_graphic_2heading_pane_fp_t1

0x7226,	// (0x00032ac9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7226,	// (0x00032ac9) list_single_graphic_2heading_pane_fp_t2

0x7337,	// (0x00032bda) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7337,	// (0x00032bda) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x0003b4fc) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x0003b4fc) list_single_graphic_2heading_pane_fp_t

0xc96e,	// (0x00038211) fep_hwr_write_pane_g5_ParamLimits

0xc96e,	// (0x00038211) fep_hwr_write_pane_g5

0xc97a,	// (0x0003821d) fep_hwr_write_pane_g6_ParamLimits

0xc97a,	// (0x0003821d) fep_hwr_write_pane_g6

0xd06e,	// (0x00038911) eswt_shell_pane_ParamLimits

0xabe8,	// (0x0003648b) bg_popup_window_pane_cp18_ParamLimits

0xbc3a,	// (0x000374dd) heading_pane_cp70

0xd15d,	// (0x00038a00) popup_eswt_tasktip_window_t1_ParamLimits

0xe1a4,	// (0x00039a47) aid_touch_tab_arrow_left

0xe1b0,	// (0x00039a53) aid_touch_tab_arrow_right

0xdb42,	// (0x000393e5) title_pane_g3_ParamLimits

0xdb42,	// (0x000393e5) title_pane_g3

0x7eae,	// (0x00033751) set_value_pane_g1

0x91a8,	// (0x00034a4b) popup_toolbar_trans_pane_ParamLimits

0xd1aa,	// (0x00038a4d) aid_size_cell_tb_trans_pane_ParamLimits

0x7ede,	// (0x00033781) bg_tb_trans_pane_ParamLimits

0xd1bc,	// (0x00038a5f) grid_tb_trans_pane_ParamLimits

0x79b8,	// (0x0003325b) cont_note_pane_ParamLimits

0x79b8,	// (0x0003325b) cont_note_pane

0x7c45,	// (0x000334e8) cont_snote2_single_text_pane_ParamLimits

0x7c45,	// (0x000334e8) cont_snote2_single_text_pane

0x7c45,	// (0x000334e8) cont_snote2_single_graphic_pane_ParamLimits

0x7c45,	// (0x000334e8) cont_snote2_single_graphic_pane

0xb128,	// (0x000369cb) cont_note_wait_pane_ParamLimits

0xb128,	// (0x000369cb) cont_note_wait_pane

0xb128,	// (0x000369cb) cont_note_image_pane_ParamLimits

0xb128,	// (0x000369cb) cont_note_image_pane

0xd202,	// (0x00038aa5) popup_note2_window_g1_ParamLimits

0xd202,	// (0x00038aa5) popup_note2_window_g1

0xd233,	// (0x00038ad6) popup_note2_window_t1_ParamLimits

0xd233,	// (0x00038ad6) popup_note2_window_t1

0xd278,	// (0x00038b1b) popup_note2_window_t2_ParamLimits

0xd278,	// (0x00038b1b) popup_note2_window_t2

0xd2bd,	// (0x00038b60) popup_note2_window_t3_ParamLimits

0xd2bd,	// (0x00038b60) popup_note2_window_t3

0xd302,	// (0x00038ba5) popup_note2_window_t4_ParamLimits

0xd302,	// (0x00038ba5) popup_note2_window_t4

0x7a3c,	// (0x000332df) popup_note2_window_t5_ParamLimits

0x7a3c,	// (0x000332df) popup_note2_window_t5

0x0004,

0xfc65,	// (0x0003b508) popup_note2_window_t_ParamLimits

0xfc65,	// (0x0003b508) popup_note2_window_t

0xd331,	// (0x00038bd4) popup_note2_image_window_g1_ParamLimits

0xd331,	// (0x00038bd4) popup_note2_image_window_g1

0xd33d,	// (0x00038be0) popup_note2_image_window_g2_ParamLimits

0xd33d,	// (0x00038be0) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x0003b513) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x0003b513) popup_note2_image_window_g

0xd34f,	// (0x00038bf2) popup_note2_image_window_t1_ParamLimits

0xd34f,	// (0x00038bf2) popup_note2_image_window_t1

0xd367,	// (0x00038c0a) popup_note2_image_window_t2_ParamLimits

0xd367,	// (0x00038c0a) popup_note2_image_window_t2

0xd37f,	// (0x00038c22) popup_note2_image_window_t3_ParamLimits

0xd37f,	// (0x00038c22) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x0003b518) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x0003b518) popup_note2_image_window_t

0xb136,	// (0x000369d9) popup_note2_wait_window_g1_ParamLimits

0xb136,	// (0x000369d9) popup_note2_wait_window_g1

0xb142,	// (0x000369e5) popup_note2_wait_window_g2_ParamLimits

0xb142,	// (0x000369e5) popup_note2_wait_window_g2

0xb14e,	// (0x000369f1) popup_note2_wait_window_g3_ParamLimits

0xb14e,	// (0x000369f1) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x0003b0eb) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x0003b0eb) popup_note2_wait_window_g

0xd39b,	// (0x00038c3e) popup_note2_wait_window_t1_ParamLimits

0xd39b,	// (0x00038c3e) popup_note2_wait_window_t1

0xd3b9,	// (0x00038c5c) popup_note2_wait_window_t2_ParamLimits

0xd3b9,	// (0x00038c5c) popup_note2_wait_window_t2

0xd3d7,	// (0x00038c7a) popup_note2_wait_window_t3_ParamLimits

0xd3d7,	// (0x00038c7a) popup_note2_wait_window_t3

0xd3e9,	// (0x00038c8c) popup_note2_wait_window_t4_ParamLimits

0xd3e9,	// (0x00038c8c) popup_note2_wait_window_t4

0x0003,

0xfc7c,	// (0x0003b51f) popup_note2_wait_window_t_ParamLimits

0xfc7c,	// (0x0003b51f) popup_note2_wait_window_t

0xd3fb,	// (0x00038c9e) wait_bar2_pane_ParamLimits

0xd3fb,	// (0x00038c9e) wait_bar2_pane

0xd413,	// (0x00038cb6) popup_snote2_single_text_window_g1_ParamLimits

0xd413,	// (0x00038cb6) popup_snote2_single_text_window_g1

0xd43b,	// (0x00038cde) popup_snote2_single_text_window_t1_ParamLimits

0xd43b,	// (0x00038cde) popup_snote2_single_text_window_t1

0xd487,	// (0x00038d2a) popup_snote2_single_text_window_t2_ParamLimits

0xd487,	// (0x00038d2a) popup_snote2_single_text_window_t2

0xd4d3,	// (0x00038d76) popup_snote2_single_text_window_t3_ParamLimits

0xd4d3,	// (0x00038d76) popup_snote2_single_text_window_t3

0xd514,	// (0x00038db7) popup_snote2_single_text_window_t4_ParamLimits

0xd514,	// (0x00038db7) popup_snote2_single_text_window_t4

0xd54a,	// (0x00038ded) popup_snote2_single_text_window_t5_ParamLimits

0xd54a,	// (0x00038ded) popup_snote2_single_text_window_t5

0x0004,

0xfc85,	// (0x0003b528) popup_snote2_single_text_window_t_ParamLimits

0xfc85,	// (0x0003b528) popup_snote2_single_text_window_t

0xd575,	// (0x00038e18) popup_snote2_single_graphic_window_g1_ParamLimits

0xd575,	// (0x00038e18) popup_snote2_single_graphic_window_g1

0xd59d,	// (0x00038e40) popup_snote2_single_graphic_window_g2_ParamLimits

0xd59d,	// (0x00038e40) popup_snote2_single_graphic_window_g2

0x0001,

0xfc90,	// (0x0003b533) popup_snote2_single_graphic_window_g_ParamLimits

0xfc90,	// (0x0003b533) popup_snote2_single_graphic_window_g

0xd5c5,	// (0x00038e68) popup_snote2_single_graphic_window_t1_ParamLimits

0xd5c5,	// (0x00038e68) popup_snote2_single_graphic_window_t1

0xd611,	// (0x00038eb4) popup_snote2_single_graphic_window_t2_ParamLimits

0xd611,	// (0x00038eb4) popup_snote2_single_graphic_window_t2

0xd4d3,	// (0x00038d76) popup_snote2_single_graphic_window_t3_ParamLimits

0xd4d3,	// (0x00038d76) popup_snote2_single_graphic_window_t3

0xd514,	// (0x00038db7) popup_snote2_single_graphic_window_t4_ParamLimits

0xd514,	// (0x00038db7) popup_snote2_single_graphic_window_t4

0xd54a,	// (0x00038ded) popup_snote2_single_graphic_window_t5_ParamLimits

0xd54a,	// (0x00038ded) popup_snote2_single_graphic_window_t5

0x0004,

0xfc95,	// (0x0003b538) popup_snote2_single_graphic_window_t_ParamLimits

0xfc95,	// (0x0003b538) popup_snote2_single_graphic_window_t

0xc552,	// (0x00037df5) clock_nsta_pane_cp2_t1

0xc552,	// (0x00037df5) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0003b35f) clock_nsta_pane_cp2_t

0x6ba1,	// (0x00032444) form_field_data_wide_pane_g1_ParamLimits

0x7e4e,	// (0x000336f1) form_field_data_wide_pane_g2_ParamLimits

0x7e4e,	// (0x000336f1) form_field_data_wide_pane_g2

0x7ef8,	// (0x0003379b) form_field_data_wide_pane_g3_ParamLimits

0x7ef8,	// (0x0003379b) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0003af23) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0003af23) form_field_data_wide_pane_g

0xe8a1,	// (0x0003a144) grid_touch_3_pane_ParamLimits

0xe8a1,	// (0x0003a144) grid_touch_3_pane

0xec95,	// (0x0003a538) cell_touch_3_pane_ParamLimits

0xec95,	// (0x0003a538) cell_touch_3_pane

0xc8e5,	// (0x00038188) cell_touch_3_pane_g1

0xc8e5,	// (0x00038188) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x0003b3e4) cell_touch_3_pane_g

0x7a94,	// (0x00033337) cont_query_data_pane

0x7a9c,	// (0x0003333f) cont_query_data_pane_cp1

0xd65d,	// (0x00038f00) button_value_adjust_pane_cp7

0xd665,	// (0x00038f08) query_popup_pane_cp3

0x85f8,	// (0x00033e9b) bg_popup_sub_pane_cp22_ParamLimits

0x860e,	// (0x00033eb1) navi_navi_volume_pane_cp2

0x8626,	// (0x00033ec9) popup_side_volume_key_window_g2

0x8632,	// (0x00033ed5) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0003afb9) popup_side_volume_key_window_g

0x864c,	// (0x00033eef) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0003afc0) popup_side_volume_key_window_t

0x89d3,	// (0x00034276) popup_side_volume_key_window_ParamLimits

0x7e42,	// (0x000336e5) list_double_graphic_pane_g4_ParamLimits

0x7e42,	// (0x000336e5) list_double_graphic_pane_g4

0x6f4e,	// (0x000327f1) list_single_2heading_msg_pane_ParamLimits

0x6f4e,	// (0x000327f1) list_single_2heading_msg_pane

0x7355,	// (0x00032bf8) list_single_2heading_msg_pane_g1_ParamLimits

0x7355,	// (0x00032bf8) list_single_2heading_msg_pane_g1

0x8a50,	// (0x000342f3) list_single_2heading_msg_pane_g2_ParamLimits

0x8a50,	// (0x000342f3) list_single_2heading_msg_pane_g2

0x7361,	// (0x00032c04) list_single_2heading_msg_pane_g3_ParamLimits

0x7361,	// (0x00032c04) list_single_2heading_msg_pane_g3

0x736d,	// (0x00032c10) list_single_2heading_msg_pane_g4_ParamLimits

0x736d,	// (0x00032c10) list_single_2heading_msg_pane_g4

0x0003,

0xfca0,	// (0x0003b543) list_single_2heading_msg_pane_g_ParamLimits

0xfca0,	// (0x0003b543) list_single_2heading_msg_pane_g

0x7385,	// (0x00032c28) list_single_2heading_msg_pane_t1_ParamLimits

0x7385,	// (0x00032c28) list_single_2heading_msg_pane_t1

0x73ad,	// (0x00032c50) list_single_2heading_msg_pane_t2_ParamLimits

0x73ad,	// (0x00032c50) list_single_2heading_msg_pane_t2

0x73dc,	// (0x00032c7f) list_single_2heading_msg_pane_t3_ParamLimits

0x73dc,	// (0x00032c7f) list_single_2heading_msg_pane_t3

0x7415,	// (0x00032cb8) list_single_2heading_msg_pane_t4_ParamLimits

0x7415,	// (0x00032cb8) list_single_2heading_msg_pane_t4

0x0003,

0xfca9,	// (0x0003b54c) list_single_2heading_msg_pane_t_ParamLimits

0xfca9,	// (0x0003b54c) list_single_2heading_msg_pane_t

0x77a1,	// (0x00033044) title_pane_g4_ParamLimits

0x77a1,	// (0x00033044) title_pane_g4

0x820b,	// (0x00033aae) title_pane_stacon_g3_ParamLimits

0x820b,	// (0x00033aae) title_pane_stacon_g3

0xd1f6,	// (0x00038a99) list_single_2graphic_im_pane_g4_ParamLimits

0xd1f6,	// (0x00038a99) list_single_2graphic_im_pane_g4

0xba64,	// (0x00037307) popup_side_volume_key_window_cp

0xbeb6,	// (0x00037759) main_idle_act2_pane_t1

0x9273,	// (0x00034b16) toolbar_button_pane_g10

0xddc6,	// (0x00039669) popup_toolbar_window_cp1

0xc543,	// (0x00037de6) clock_nsta_pane_cp_t1

0xc543,	// (0x00037de6) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0003b35a) clock_nsta_pane_cp_t

0x860e,	// (0x00033eb1) navi_navi_volume_pane_cp2_ParamLimits

0x861a,	// (0x00033ebd) popup_side_volume_key_window_g1_ParamLimits

0x8626,	// (0x00033ec9) popup_side_volume_key_window_g2_ParamLimits

0x8632,	// (0x00033ed5) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0003afb9) popup_side_volume_key_window_g_ParamLimits

0x97c6,	// (0x00035069) fep_hwr_aid_pane

0x2f03,	// (0x0002e7a6) bg_fep_hwr_top_pane_g4_ParamLimits

0xc93e,	// (0x000381e1) fep_hwr_top_pane_g1_ParamLimits

0xc950,	// (0x000381f3) fep_hwr_top_pane_g2_ParamLimits

0x9879,	// (0x0003511c) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0003b3af) fep_hwr_top_pane_g_ParamLimits

0x988e,	// (0x00035131) fep_hwr_top_text_pane_ParamLimits

0xb82f,	// (0x000370d2) aid_touch_tab_arrow_arrow_2

0xb838,	// (0x000370db) aid_touch_tab_arrow_left_2

0x97da,	// (0x0003507d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x980d,	// (0x000350b0) fep_hwr_prediction_pane

0xca83,	// (0x00038326) fep_vkb_prediction_pane

0xea24,	// (0x0003a2c7) fep_vkb_side_pane_g3_ParamLimits

0xea24,	// (0x0003a2c7) fep_vkb_side_pane_g3

0xcb11,	// (0x000383b4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xcebc,	// (0x0003875f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xcec9,	// (0x0003876c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x0003b459) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd676,	// (0x00038f19) fep_hwr_prediction_pane_g1

0x9b91,	// (0x00035434) fep_hwr_prediction_pane_g2

0x9b99,	// (0x0003543c) fep_hwr_prediction_pane_g3

0x9ba1,	// (0x00035444) fep_hwr_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0003b555) fep_hwr_prediction_pane_g

0xd676,	// (0x00038f19) fep_vkb_prediction_pane_g1

0xd680,	// (0x00038f23) fep_vkb_prediction_pane_g2

0xd688,	// (0x00038f2b) fep_vkb_prediction_pane_g3

0xd690,	// (0x00038f33) fep_vkb_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0003b55e) fep_vkb_prediction_pane_g

0x9539,	// (0x00034ddc) slider_set_pane_g3

0x954d,	// (0x00034df0) slider_set_pane_g4

0x9565,	// (0x00034e08) slider_set_pane_g5

0x9539,	// (0x00034ddc) slider_set_pane_g6

0x957b,	// (0x00034e1e) slider_set_pane_g7

0xbcb9,	// (0x0003755c) slider_form_pane_g3

0xbcc2,	// (0x00037565) slider_form_pane_g4

0xbcca,	// (0x0003756d) slider_form_pane_g5

0xbcb9,	// (0x0003755c) slider_form_pane_g6

0xe732,	// (0x00039fd5) slider_form_pane_g7

0xc0ff,	// (0x000379a2) slider_set_pane_vc_g3

0xc108,	// (0x000379ab) slider_set_pane_vc_g4

0xc111,	// (0x000379b4) slider_set_pane_vc_g5

0xc0ff,	// (0x000379a2) slider_set_pane_vc_g6

0xc11a,	// (0x000379bd) slider_set_pane_vc_g7

0xc0ff,	// (0x000379a2) slider_form_pane_vc_g1

0xc108,	// (0x000379ab) slider_form_pane_vc_g2

0xc111,	// (0x000379b4) slider_form_pane_vc_g3

0xc0ff,	// (0x000379a2) slider_form_pane_vc_g4

0xc28e,	// (0x00037b31) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0003b32c) slider_form_pane_vc_g

0x7488,	// (0x00032d2b) main_idle_act3_pane

0xd698,	// (0x00038f3b) ai3_links_pane

0xed87,	// (0x0003a62a) popup_ai3_data_window_ParamLimits

0xed87,	// (0x0003a62a) popup_ai3_data_window

0x7488,	// (0x00032d2b) grid_ai3_links_pane

0xed9f,	// (0x0003a642) cell_ai3_links_pane_ParamLimits

0xed9f,	// (0x0003a642) cell_ai3_links_pane

0xd6a1,	// (0x00038f44) bg_popup_sub_pane_cp11

0xd6ae,	// (0x00038f51) cell_ai3_links_pane_g1

0x7488,	// (0x00032d2b) bg_popup_sub_pane_cp12

0xd6d3,	// (0x00038f76) heading_ai3_data_pane

0xd6db,	// (0x00038f7e) list_ai3_gene_pane

0xd6e7,	// (0x00038f8a) popup_ai3_data_window_g1

0xd6ef,	// (0x00038f92) heading_ai3_data_pane_g1

0xd6f7,	// (0x00038f9a) heading_ai3_data_pane_t1

0xd705,	// (0x00038fa8) list_double_ai3_gene_pane_ParamLimits

0xd705,	// (0x00038fa8) list_double_ai3_gene_pane

0xd712,	// (0x00038fb5) list_single_ai3_gene_pane_ParamLimits

0xd712,	// (0x00038fb5) list_single_ai3_gene_pane

0xc8aa,	// (0x0003814d) list_highlight_pane_cp7_ParamLimits

0xc8aa,	// (0x0003814d) list_highlight_pane_cp7

0xd71f,	// (0x00038fc2) list_single_a13_gene_pane_t1_ParamLimits

0xd71f,	// (0x00038fc2) list_single_a13_gene_pane_t1

0xd736,	// (0x00038fd9) list_single_ai3_gene_pane_g1

0xd73f,	// (0x00038fe2) list_single_ai3_gene_pane_g2

0x0001,

0xfcc4,	// (0x0003b567) list_single_ai3_gene_pane_g

0xd747,	// (0x00038fea) list_double_ai3_gene_pane_g1_ParamLimits

0xd747,	// (0x00038fea) list_double_ai3_gene_pane_g1

0xd753,	// (0x00038ff6) list_double_ai3_gene_pane_t1_ParamLimits

0xd753,	// (0x00038ff6) list_double_ai3_gene_pane_t1

0xd76f,	// (0x00039012) list_double_ai3_gene_pane_t2_ParamLimits

0xd76f,	// (0x00039012) list_double_ai3_gene_pane_t2

0xd784,	// (0x00039027) list_double_ai3_gene_pane_t3_ParamLimits

0xd784,	// (0x00039027) list_double_ai3_gene_pane_t3

0x0002,

0xfcc9,	// (0x0003b56c) list_double_ai3_gene_pane_t_ParamLimits

0xfcc9,	// (0x0003b56c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x734d,	// (0x00032bf0) aid_size_min_col_2

0xed73,	// (0x0003a616) aid_size_min_msg_ParamLimits

0xed73,	// (0x0003a616) aid_size_min_msg

0xea38,	// (0x0003a2db) fep_vkb_top_text_pane_g2_ParamLimits

0xea38,	// (0x0003a2db) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x0003b3df) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x0003b3df) fep_vkb_top_text_pane_g

0x7488,	// (0x00032d2b) main_hc_apps_shell_pane

0xd7a1,	// (0x00039044) grid_hc_apps_pane_ParamLimits

0xd7a1,	// (0x00039044) grid_hc_apps_pane

0xd7b0,	// (0x00039053) list_hc_apps_pane

0xd7b8,	// (0x0003905b) scroll_pane_cp37_ParamLimits

0xd7b8,	// (0x0003905b) scroll_pane_cp37

0xedb3,	// (0x0003a656) cell_hc_apps_pane_ParamLimits

0xedb3,	// (0x0003a656) cell_hc_apps_pane

0xee41,	// (0x0003a6e4) cell_hc_apps_pane_g1_ParamLimits

0xee41,	// (0x0003a6e4) cell_hc_apps_pane_g1

0xd7c4,	// (0x00039067) cell_hc_apps_pane_g2_ParamLimits

0xd7c4,	// (0x00039067) cell_hc_apps_pane_g2

0xd7e0,	// (0x00039083) cell_hc_apps_pane_g3_ParamLimits

0xd7e0,	// (0x00039083) cell_hc_apps_pane_g3

0x0002,

0xfcd0,	// (0x0003b573) cell_hc_apps_pane_g_ParamLimits

0xfcd0,	// (0x0003b573) cell_hc_apps_pane_g

0xee6e,	// (0x0003a711) cell_hc_apps_pane_t1_ParamLimits

0xee6e,	// (0x0003a711) cell_hc_apps_pane_t1

0x79b8,	// (0x0003325b) grid_highlight_pane_cp10_ParamLimits

0x79b8,	// (0x0003325b) grid_highlight_pane_cp10

0xeeac,	// (0x0003a74f) list_single_hc_apps_pane_ParamLimits

0xeeac,	// (0x0003a74f) list_single_hc_apps_pane

0xeedc,	// (0x0003a77f) list_single_hc_apps_pane_g1

0x9ba9,	// (0x0003544c) list_single_hc_apps_pane_g2

0x0001,

0xfcd7,	// (0x0003b57a) list_single_hc_apps_pane_g

0x9bc2,	// (0x00035465) list_single_hc_apps_pane_g2_copy1

0x743a,	// (0x00032cdd) list_single_hc_apps_pane_t1

0x77e5,	// (0x00033088) bg_set_opt_pane_cp_ParamLimits

0x7803,	// (0x000330a6) setting_slider_pane_t1_ParamLimits

0x7819,	// (0x000330bc) setting_slider_pane_t2_ParamLimits

0x7832,	// (0x000330d5) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003ae01) setting_slider_pane_t_ParamLimits

0x7849,	// (0x000330ec) slider_set_pane_ParamLimits

0x8c9e,	// (0x00034541) control_pane_g5_ParamLimits

0x8c9e,	// (0x00034541) control_pane_g5

0xbc81,	// (0x00037524) slider_set_pane_g1_ParamLimits

0x952d,	// (0x00034dd0) slider_set_pane_g2_ParamLimits

0x9539,	// (0x00034ddc) slider_set_pane_g3_ParamLimits

0x954d,	// (0x00034df0) slider_set_pane_g4_ParamLimits

0x9565,	// (0x00034e08) slider_set_pane_g5_ParamLimits

0x9539,	// (0x00034ddc) slider_set_pane_g6_ParamLimits

0x957b,	// (0x00034e1e) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0003b207) slider_set_pane_g_ParamLimits

0x77e5,	// (0x00033088) navi_icon_text_pane_ParamLimits

0xe17e,	// (0x00039a21) aid_fill_nsta_2_ParamLimits

0xe1a4,	// (0x00039a47) aid_touch_tab_arrow_left_ParamLimits

0xe1b0,	// (0x00039a53) aid_touch_tab_arrow_right_ParamLimits

0xe21a,	// (0x00039abd) clock_nsta_pane_ParamLimits

0xb811,	// (0x000370b4) navi_icon_pane_g1_ParamLimits

0xb81d,	// (0x000370c0) navi_text_pane_t1_ParamLimits

0xc593,	// (0x00037e36) navi_icon_text_pane_g1_ParamLimits

0xc59f,	// (0x00037e42) navi_icon_text_pane_t1_ParamLimits

0xeedc,	// (0x0003a77f) list_single_hc_apps_pane_g1_ParamLimits

0x9ba9,	// (0x0003544c) list_single_hc_apps_pane_g2_ParamLimits

0xfcd7,	// (0x0003b57a) list_single_hc_apps_pane_g_ParamLimits

0x9bc2,	// (0x00035465) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x743a,	// (0x00032cdd) list_single_hc_apps_pane_t1_ParamLimits

0x76db,	// (0x00032f7e) popup_toolbar2_fixed_window_ParamLimits

0x76db,	// (0x00032f7e) popup_toolbar2_fixed_window

0x91a0,	// (0x00034a43) popup_toolbar2_float_window

0x7488,	// (0x00032d2b) bg_popup_sub_pane_cp27

0xd802,	// (0x000390a5) grid_toolbar2_float_pane

0x7488,	// (0x00032d2b) bg_popup_sub_pane_cp26

0xd802,	// (0x000390a5) grid_toolbar2_fixed_pane

0xeef5,	// (0x0003a798) cell_toolbar2_fixed_pane_ParamLimits

0xeef5,	// (0x0003a798) cell_toolbar2_fixed_pane

0xef06,	// (0x0003a7a9) cell_toolbar2_fixed_pane_g1

0xd80a,	// (0x000390ad) toolbar2_fixed_button_pane

0xab68,	// (0x0003640b) toolbar2_fixed_button_pane_g1

0xab70,	// (0x00036413) toolbar2_fixed_button_pane_g2

0xab78,	// (0x0003641b) toolbar2_fixed_button_pane_g3

0xab80,	// (0x00036423) toolbar2_fixed_button_pane_g4

0xab88,	// (0x0003642b) toolbar2_fixed_button_pane_g5

0xab90,	// (0x00036433) toolbar2_fixed_button_pane_g6

0xab98,	// (0x0003643b) toolbar2_fixed_button_pane_g7

0xaba0,	// (0x00036443) toolbar2_fixed_button_pane_g8

0xaba8,	// (0x0003644b) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0003b109) toolbar2_fixed_button_pane_g

0xd812,	// (0x000390b5) cell_toolbar2_float_pane_ParamLimits

0xd812,	// (0x000390b5) cell_toolbar2_float_pane

0xd823,	// (0x000390c6) cell_toolbar2_float_pane_g1

0xd80a,	// (0x000390ad) toolbar2_fixed_button_pane_cp

0xe9f1,	// (0x0003a294) fep_vkb_accented_list_pane_ParamLimits

0xe9f1,	// (0x0003a294) fep_vkb_accented_list_pane

0x99d0,	// (0x00035273) bg_popup_fep_shadow_pane_g9

0xa7d0,	// (0x00036073) bg_popup_fep_shadow_pane_cp3

0x8008,	// (0x000338ab) list_accented_list_pane

0xd82c,	// (0x000390cf) list_single_accented_list_pane_ParamLimits

0xd82c,	// (0x000390cf) list_single_accented_list_pane

0xa7d0,	// (0x00036073) list_highlight_pane_cp10

0xd83d,	// (0x000390e0) list_single_accented_list_pane_t1

0x9106,	// (0x000349a9) popup_slider_window_ParamLimits

0x9106,	// (0x000349a9) popup_slider_window

0xd66d,	// (0x00038f10) aid_indentation_list_msg

0xefa1,	// (0x0003a844) bg_popup_window_pane_cp19

0xd8a3,	// (0x00039146) popup_slider_window_g1

0xd8bf,	// (0x00039162) popup_slider_window_g2

0xd8db,	// (0x0003917e) popup_slider_window_g3

0x0005,

0xfcdc,	// (0x0003b57f) popup_slider_window_g

0xd8f7,	// (0x0003919a) popup_slider_window_t1

0xd93b,	// (0x000391de) small_volume_slider_vertical_pane

0xc8e5,	// (0x00038188) small_volume_slider_vertical_pane_g1

0xc8e5,	// (0x00038188) small_volume_slider_vertical_pane_g2

0xd957,	// (0x000391fa) small_volume_slider_vertical_pane_g3

0x0002,

0xfcee,	// (0x0003b591) small_volume_slider_vertical_pane_g

0x74d7,	// (0x00032d7a) area_side_right_pane_ParamLimits

0x74d7,	// (0x00032d7a) area_side_right_pane

0x9bde,	// (0x00035481) aid_size_side_button_ParamLimits

0x9bde,	// (0x00035481) aid_size_side_button

0x9bf2,	// (0x00035495) grid_sctrl_middle_pane_ParamLimits

0x9bf2,	// (0x00035495) grid_sctrl_middle_pane

0x9c0e,	// (0x000354b1) sctrl_sk_bottom_pane

0x9c1f,	// (0x000354c2) sctrl_sk_top_pane

0x9c31,	// (0x000354d4) aid_touch_sctrl_top

0x79b8,	// (0x0003325b) bg_sctrl_sk_pane_ParamLimits

0x79b8,	// (0x0003325b) bg_sctrl_sk_pane

0x9c3e,	// (0x000354e1) sctrl_sk_top_pane_g1

0x9c4b,	// (0x000354ee) sctrl_sk_top_pane_t1

0x9c31,	// (0x000354d4) aid_touch_sctrl_bottom

0x79b8,	// (0x0003325b) bg_sctrl_sk_pane_cp_ParamLimits

0x79b8,	// (0x0003325b) bg_sctrl_sk_pane_cp

0x9c66,	// (0x00035509) sctrl_sk_bottom_pane_g1

0x9c4b,	// (0x000354ee) sctrl_sk_bottom_pane_t1

0x9c6f,	// (0x00035512) cell_sctrl_middle_pane_ParamLimits

0x9c6f,	// (0x00035512) cell_sctrl_middle_pane

0x9c8a,	// (0x0003552d) aid_touch_sctrl_middle_ParamLimits

0x9c8a,	// (0x0003552d) aid_touch_sctrl_middle

0x7ede,	// (0x00033781) bg_sctrl_middle_pane_ParamLimits

0x7ede,	// (0x00033781) bg_sctrl_middle_pane

0xcb11,	// (0x000383b4) cell_sctrl_middle_pane_g1_ParamLimits

0xcb11,	// (0x000383b4) cell_sctrl_middle_pane_g1

0x9c9b,	// (0x0003553e) cell_sctrl_middle_pane_g2_ParamLimits

0x9c9b,	// (0x0003553e) cell_sctrl_middle_pane_g2

0x0001,

0xfcfa,	// (0x0003b59d) cell_sctrl_middle_pane_g_ParamLimits

0xfcfa,	// (0x0003b59d) cell_sctrl_middle_pane_g

0xab68,	// (0x0003640b) bg_sctrl_middle_pane_g1

0xab70,	// (0x00036413) bg_sctrl_middle_pane_g2

0xab78,	// (0x0003641b) bg_sctrl_middle_pane_g3

0xab80,	// (0x00036423) bg_sctrl_middle_pane_g4

0xab88,	// (0x0003642b) bg_sctrl_middle_pane_g5

0xab90,	// (0x00036433) bg_sctrl_middle_pane_g6

0xab98,	// (0x0003643b) bg_sctrl_middle_pane_g7

0xaba0,	// (0x00036443) bg_sctrl_middle_pane_g8

0x0007,

0xfcff,	// (0x0003b5a2) bg_sctrl_middle_pane_g

0xaba8,	// (0x0003644b) bg_sctrl_middle_pane_g8_copy1

0xab68,	// (0x0003640b) bg_sctrl_sk_pane_g1

0xab70,	// (0x00036413) bg_sctrl_sk_pane_g2

0xab78,	// (0x0003641b) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0003b109) bg_sctrl_sk_pane_g

0x7d67,	// (0x0003360a) aid_size_touch_scroll_bar

0xab80,	// (0x00036423) bg_sctrl_sk_pane_g4

0xab88,	// (0x0003642b) bg_sctrl_sk_pane_g5

0xab90,	// (0x00036433) bg_sctrl_sk_pane_g6

0xab98,	// (0x0003643b) bg_sctrl_sk_pane_g7

0xaba0,	// (0x00036443) bg_sctrl_sk_pane_g8

0xaba8,	// (0x0003644b) bg_sctrl_sk_pane_g9

0x8e3c,	// (0x000346df) popup_fep_china_hwr2_fs_candidate_window

0x8e44,	// (0x000346e7) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8e44,	// (0x000346e7) popup_fep_china_hwr2_fs_control_window

0xcb11,	// (0x000383b4) sctrl_sk_top_pane_g2

0x0001,

0xfcf5,	// (0x0003b598) sctrl_sk_top_pane_g

0xf01b,	// (0x0003a8be) aid_fep_china_hwr2_fs_cell_ParamLimits

0xf01b,	// (0x0003a8be) aid_fep_china_hwr2_fs_cell

0xf02c,	// (0x0003a8cf) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xf02c,	// (0x0003a8cf) bg_popup_fep_shadow_pane_cp4

0xf043,	// (0x0003a8e6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xf043,	// (0x0003a8e6) bg_popup_fep_shadow_pane_cp5

0xf055,	// (0x0003a8f8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xf055,	// (0x0003a8f8) popup_fep_china_hwr2_fs_control_bar_grid

0xf065,	// (0x0003a908) popup_fep_china_hwr2_fs_control_funtion_grid

0xd960,	// (0x00039203) aid_fep_china_hwr2_fs_candi_cell

0x7488,	// (0x00032d2b) bg_popup_fep_shadow_pane_cp6

0xd96a,	// (0x0003920d) popup_fep_china_hwr2_fs_candidate_grid

0xf06d,	// (0x0003a910) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xf06d,	// (0x0003a910) cell_fep_china_hwr2_fs_funtion_grid

0xc8e5,	// (0x00038188) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd972,	// (0x00039215) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd972,	// (0x00039215) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd980,	// (0x00039223) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd980,	// (0x00039223) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd10,	// (0x0003b5b3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd10,	// (0x0003b5b3) cell_fep_china_hwr2_fs_funtion_grid_g

0xf085,	// (0x0003a928) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xf085,	// (0x0003a928) cell_fep_china_hwr2_fs_funtion_grid_t1

0xf09a,	// (0x0003a93d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xf09a,	// (0x0003a93d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd15,	// (0x0003b5b8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd15,	// (0x0003b5b8) cell_fep_china_hwr2_fs_funtion_grid_t

0xd996,	// (0x00039239) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd99e,	// (0x00039241) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd9a6,	// (0x00039249) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1a,	// (0x0003b5bd) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd9ae,	// (0x00039251) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd9ae,	// (0x00039251) cell_fep_china_hwr2_fs_candidate_grid

0xd9c7,	// (0x0003926a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd9cf,	// (0x00039272) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc8e5,	// (0x00038188) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc8e5,	// (0x00038188) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x0003b3e4) cell_fep_china_hwr2_fs_candidate_grid_g

0xd9d7,	// (0x0003927a) cell_fep_china_hwr2_fs_candidate_grid_t1

0xa9c1,	// (0x00036264) clock_nsta_pane_cp_24_ParamLimits

0xa9c1,	// (0x00036264) clock_nsta_pane_cp_24

0xaa1e,	// (0x000362c1) indicator_nsta_pane_cp_24_ParamLimits

0xaa1e,	// (0x000362c1) indicator_nsta_pane_cp_24

0xb71c,	// (0x00036fbf) heading_pane_g1

0x0001,

0xf8cb,	// (0x0003b16e) heading_pane_g

0xe7f0,	// (0x0003a093) grid_sct_catagory_button_pane

0xbd88,	// (0x0003762b) scroll_pane_cp5_ParamLimits

0xc5c5,	// (0x00037e68) button_value_adjust_pane_cp5_ParamLimits

0xc5c5,	// (0x00037e68) button_value_adjust_pane_cp5

0xc683,	// (0x00037f26) form2_midp_time_pane_ParamLimits

0xd9e5,	// (0x00039288) cell_sct_catagory_button_pane_ParamLimits

0xd9e5,	// (0x00039288) cell_sct_catagory_button_pane

0xc8aa,	// (0x0003814d) bg_button_pane_cp01_ParamLimits

0xc8aa,	// (0x0003814d) bg_button_pane_cp01

0xc8e5,	// (0x00038188) cell_sct_catagory_button_pane_g1

0x913d,	// (0x000349e0) popup_tb_extension_window

0xf0b6,	// (0x0003a959) aid_size_cell_ext_ParamLimits

0xf0b6,	// (0x0003a959) aid_size_cell_ext

0x79b8,	// (0x0003325b) bg_tb_trans_pane_cp1_ParamLimits

0x79b8,	// (0x0003325b) bg_tb_trans_pane_cp1

0xf0d6,	// (0x0003a979) grid_tb_ext_pane_ParamLimits

0xf0d6,	// (0x0003a979) grid_tb_ext_pane

0xf0fc,	// (0x0003a99f) cell_tb_ext_pane_ParamLimits

0xf0fc,	// (0x0003a99f) cell_tb_ext_pane

0xf111,	// (0x0003a9b4) cell_tb_ext_pane_g1_ParamLimits

0xf111,	// (0x0003a9b4) cell_tb_ext_pane_g1

0xd9f7,	// (0x0003929a) cell_tb_ext_pane_t1

0x79b8,	// (0x0003325b) list_highlight_pane_cp11_ParamLimits

0x79b8,	// (0x0003325b) list_highlight_pane_cp11

0x76fa,	// (0x00032f9d) popup_uni_indicator_window_ParamLimits

0x76fa,	// (0x00032f9d) popup_uni_indicator_window

0x7ede,	// (0x00033781) bg_popup_sub_pane_cp14

0xda12,	// (0x000392b5) list_uniindi_pane

0xda1e,	// (0x000392c1) uniindi_top_pane

0x79b8,	// (0x0003325b) bg_uniindi_top_pane

0xda3d,	// (0x000392e0) uniindi_top_pane_g1

0xda53,	// (0x000392f6) uniindi_top_pane_g2

0x0003,

0xfd21,	// (0x0003b5c4) uniindi_top_pane_g

0xda7d,	// (0x00039320) uniindi_top_pane_t1

0xecc2,	// (0x0003a565) list_single_uniindi_pane_ParamLimits

0xecc2,	// (0x0003a565) list_single_uniindi_pane

0xc8e5,	// (0x00038188) bg_uniindi_top_pane_g1

0xecd4,	// (0x0003a577) list_single_uniindi_pane_g1

0xece7,	// (0x0003a58a) list_single_uniindi_pane_t1

0x7488,	// (0x00032d2b) control_bg_pane

0xed0c,	// (0x0003a5af) bg_sctrl_sk_pane_cp1

0xed15,	// (0x0003a5b8) bg_sctrl_sk_pane_cp2

0xed1e,	// (0x0003a5c1) control_bg_pane_g1

0xed27,	// (0x0003a5ca) control_bg_pane_g2

0x0001,

0xfd2a,	// (0x0003b5cd) control_bg_pane_g

0xc4eb,	// (0x00037d8e) cell_indicator_nsta_pane_g1_ParamLimits

0xe8de,	// (0x0003a181) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0003b348) cell_indicator_nsta_pane_g_ParamLimits

0x71c4,	// (0x00032a67) form2_midp_time_pane_t1_ParamLimits

0x7c45,	// (0x000334e8) main_idle_act4_pane_ParamLimits

0x7c45,	// (0x000334e8) main_idle_act4_pane

0x913d,	// (0x000349e0) popup_tb_extension_window_ParamLimits

0xf0f0,	// (0x0003a993) tb_ext_find_pane_ParamLimits

0xf0f0,	// (0x0003a993) tb_ext_find_pane

0xed30,	// (0x0003a5d3) ai_gene_pane_1_cp1

0xa864,	// (0x00036107) ai_gene_pane_2_cp1

0xed38,	// (0x0003a5db) list_single_idle_plugin_calendar_pane

0xed41,	// (0x0003a5e4) list_single_idle_plugin_notification_pane

0xed4a,	// (0x0003a5ed) list_single_idle_plugin_player_pane

0xf12e,	// (0x0003a9d1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf12e,	// (0x0003a9d1) list_single_idle_plugin_shortcut_pane

0xf150,	// (0x0003a9f3) main_idle_act4_pane_t1

0xf162,	// (0x0003aa05) main_idle_act4_pane_t2

0x0001,

0xfd2f,	// (0x0003b5d2) main_idle_act4_pane_t

0xf174,	// (0x0003aa17) middle_sk_idle_act4_pane_ParamLimits

0xf174,	// (0x0003aa17) middle_sk_idle_act4_pane

0xf18a,	// (0x0003aa2d) popup_clock_digital_analogue_window_cp2

0xf1a4,	// (0x0003aa47) shortcut_wheel_idle_act4_pane_ParamLimits

0xf1a4,	// (0x0003aa47) shortcut_wheel_idle_act4_pane

0xc8e5,	// (0x00038188) shortcut_wheel_idle_act4_pane_g1

0xc8e5,	// (0x00038188) shortcut_wheel_idle_act4_pane_g2

0xc8e5,	// (0x00038188) shortcut_wheel_idle_act4_pane_g3

0xc8e5,	// (0x00038188) shortcut_wheel_idle_act4_pane_g4

0xc8e5,	// (0x00038188) shortcut_wheel_idle_act4_pane_g5

0xed53,	// (0x0003a5f6) shortcut_wheel_idle_act4_pane_g6

0xed5b,	// (0x0003a5fe) shortcut_wheel_idle_act4_pane_g7

0xed63,	// (0x0003a606) shortcut_wheel_idle_act4_pane_g8

0xed6b,	// (0x0003a60e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd34,	// (0x0003b5d7) shortcut_wheel_idle_act4_pane_g

0xcb11,	// (0x000383b4) middle_sk_idle_act4_pane_g1_ParamLimits

0xcb11,	// (0x000383b4) middle_sk_idle_act4_pane_g1

0xf214,	// (0x0003aab7) middle_sk_idle_act4_pane_g2_ParamLimits

0xf214,	// (0x0003aab7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd57,	// (0x0003b5fa) middle_sk_idle_act4_pane_g_ParamLimits

0xfd57,	// (0x0003b5fa) middle_sk_idle_act4_pane_g

0xf220,	// (0x0003aac3) middle_sk_idle_act4_pane_t1_ParamLimits

0xf220,	// (0x0003aac3) middle_sk_idle_act4_pane_t1

0xf23d,	// (0x0003aae0) grid_ai_shortcut_pane_ParamLimits

0xf23d,	// (0x0003aae0) grid_ai_shortcut_pane

0xf256,	// (0x0003aaf9) list_highlight_pane_cp16_ParamLimits

0xf256,	// (0x0003aaf9) list_highlight_pane_cp16

0xf263,	// (0x0003ab06) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf263,	// (0x0003ab06) list_single_idle_plugin_shortcut_pane_g1

0xf26f,	// (0x0003ab12) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf26f,	// (0x0003ab12) list_single_idle_plugin_shortcut_pane_g2

0xf287,	// (0x0003ab2a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf287,	// (0x0003ab2a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5c,	// (0x0003b5ff) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5c,	// (0x0003b5ff) list_single_idle_plugin_shortcut_pane_g

0xf29a,	// (0x0003ab3d) cell_ai_shortcut_pane_ParamLimits

0xf29a,	// (0x0003ab3d) cell_ai_shortcut_pane

0xf2bb,	// (0x0003ab5e) cell_ai_shortcut_pane_g1_ParamLimits

0xf2bb,	// (0x0003ab5e) cell_ai_shortcut_pane_g1

0xed30,	// (0x0003a5d3) ai_gene_pane_1_cp2

0xf2dd,	// (0x0003ab80) ai_gene_pane_2_cp2

0xf2e5,	// (0x0003ab88) list_highlight_pane_cp15

0xf2ee,	// (0x0003ab91) list_single_idle_plugin_calendar_pane_g1

0xf2e5,	// (0x0003ab88) list_highlight_pane_cp17

0xf2f6,	// (0x0003ab99) list_single_idle_plugin_calendar_pane_g1_copy1

0xf2fe,	// (0x0003aba1) list_single_idle_plugin_player_pane_g1

0xbf42,	// (0x000377e5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd63,	// (0x0003b606) list_single_idle_plugin_player_pane_g

0xf306,	// (0x0003aba9) list_single_idle_plugin_player_pane_t1

0xf314,	// (0x0003abb7) list_single_idle_plugin_player_pane_t2

0xf322,	// (0x0003abc5) list_single_idle_plugin_player_pane_t3

0xf330,	// (0x0003abd3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd68,	// (0x0003b60b) list_single_idle_plugin_player_pane_t

0xf33e,	// (0x0003abe1) wait_bar_pane_cp15

0xf346,	// (0x0003abe9) grid_ai_notification_pane

0xbf42,	// (0x000377e5) list_single_idle_plugin_notification_pane_g1

0xf34f,	// (0x0003abf2) cell_ai_notification_pane_ParamLimits

0xf34f,	// (0x0003abf2) cell_ai_notification_pane

0xf35c,	// (0x0003abff) cell_ai_notification_pane_g1

0xf364,	// (0x0003ac07) cell_ai_notification_pane_t1

0xf372,	// (0x0003ac15) tb_ext_find_button_pane

0xf37a,	// (0x0003ac1d) tb_ext_find_pane_g1

0xf382,	// (0x0003ac25) tb_ext_find_pane_t1

0x853e,	// (0x00033de1) tb_ext_find_button_pane_g1

0xf390,	// (0x0003ac33) tb_ext_find_button_pane_g2

0x0001,

0xfd71,	// (0x0003b614) tb_ext_find_button_pane_g

0xf150,	// (0x0003a9f3) main_idle_act4_pane_t1_ParamLimits

0xf162,	// (0x0003aa05) main_idle_act4_pane_t2_ParamLimits

0xfd2f,	// (0x0003b5d2) main_idle_act4_pane_t_ParamLimits

0xf18a,	// (0x0003aa2d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf198,	// (0x0003aa3b) sat_plugin_idle_act4_pane_ParamLimits

0xf198,	// (0x0003aa3b) sat_plugin_idle_act4_pane

0xf399,	// (0x0003ac3c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf399,	// (0x0003ac3c) sat_plugin_idle_act4_pane_t1

0xf3ac,	// (0x0003ac4f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf3ac,	// (0x0003ac4f) sat_plugin_idle_act4_pane_t2

0xf3bf,	// (0x0003ac62) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf3bf,	// (0x0003ac62) sat_plugin_idle_act4_pane_t3

0xf3d2,	// (0x0003ac75) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf3d2,	// (0x0003ac75) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd76,	// (0x0003b619) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd76,	// (0x0003b619) sat_plugin_idle_act4_pane_t

0x765b,	// (0x00032efe) popup_battery_window_ParamLimits

0x765b,	// (0x00032efe) popup_battery_window

0x79b8,	// (0x0003325b) bg_popup_sub_pane_cp25_ParamLimits

0x79b8,	// (0x0003325b) bg_popup_sub_pane_cp25

0xf3e5,	// (0x0003ac88) popup_battery_window_g1_ParamLimits

0xf3e5,	// (0x0003ac88) popup_battery_window_g1

0xf3f1,	// (0x0003ac94) popup_battery_window_t1_ParamLimits

0xf3f1,	// (0x0003ac94) popup_battery_window_t1

0xf403,	// (0x0003aca6) popup_battery_window_t2_ParamLimits

0xf403,	// (0x0003aca6) popup_battery_window_t2

0x0001,

0xfd7f,	// (0x0003b622) popup_battery_window_t_ParamLimits

0xfd7f,	// (0x0003b622) popup_battery_window_t

0xe017,	// (0x000398ba) midp_canvas_pane_ParamLimits

0xe073,	// (0x00039916) midp_keypad_pane_ParamLimits

0xe073,	// (0x00039916) midp_keypad_pane

0x8db4,	// (0x00034657) main_midp_pane_ParamLimits

0xc561,	// (0x00037e04) signal_pane_g2_cp_ParamLimits

0xf420,	// (0x0003acc3) aid_size_cell_midp_keypad_ParamLimits

0xf420,	// (0x0003acc3) aid_size_cell_midp_keypad

0xf43a,	// (0x0003acdd) midp_keyp_game_grid_pane_ParamLimits

0xf43a,	// (0x0003acdd) midp_keyp_game_grid_pane

0xf454,	// (0x0003acf7) midp_keyp_rocker_pane_ParamLimits

0xf454,	// (0x0003acf7) midp_keyp_rocker_pane

0xf481,	// (0x0003ad24) midp_keyp_sk_left_pane_ParamLimits

0xf481,	// (0x0003ad24) midp_keyp_sk_left_pane

0xf4d9,	// (0x0003ad7c) midp_keyp_sk_right_pane_ParamLimits

0xf4d9,	// (0x0003ad7c) midp_keyp_sk_right_pane

0x7488,	// (0x00032d2b) bg_button_pane_cp03

0xf52b,	// (0x0003adce) midp_keyp_sk_left_pane_g1

0x7488,	// (0x00032d2b) bg_button_pane_cp04

0xf52b,	// (0x0003adce) midp_keyp_sk_right_pane_g1

0xc8e5,	// (0x00038188) midp_keyp_rocker_pane_g1

0xf534,	// (0x0003add7) keyp_game_cell_pane_ParamLimits

0xf534,	// (0x0003add7) keyp_game_cell_pane

0x7488,	// (0x00032d2b) bg_button_pane_cp02

0xf545,	// (0x0003ade8) keyp_game_cell_pane_g1

0x7691,	// (0x00032f34) popup_fep_vkb2_window_ParamLimits

0x7691,	// (0x00032f34) popup_fep_vkb2_window

0x9cbf,	// (0x00035562) aid_size_cell_vkb2_ParamLimits

0x9cbf,	// (0x00035562) aid_size_cell_vkb2

0x9d13,	// (0x000355b6) popup_fep_vkb2_window_g1_ParamLimits

0x9d13,	// (0x000355b6) popup_fep_vkb2_window_g1

0x9d5b,	// (0x000355fe) vkb2_area_bottom_pane_ParamLimits

0x9d5b,	// (0x000355fe) vkb2_area_bottom_pane

0x9d93,	// (0x00035636) vkb2_area_keypad_pane_ParamLimits

0x9d93,	// (0x00035636) vkb2_area_keypad_pane

0x9dcb,	// (0x0003566e) vkb2_area_top_pane_ParamLimits

0x9dcb,	// (0x0003566e) vkb2_area_top_pane

0x9e3b,	// (0x000356de) vkb2_top_entry_pane_ParamLimits

0x9e3b,	// (0x000356de) vkb2_top_entry_pane

0x9e65,	// (0x00035708) vkb2_top_grid_left_pane_ParamLimits

0x9e65,	// (0x00035708) vkb2_top_grid_left_pane

0x9e83,	// (0x00035726) vkb2_top_grid_right_pane_ParamLimits

0x9e83,	// (0x00035726) vkb2_top_grid_right_pane

0x9ea1,	// (0x00035744) vkb2_cell_keypad_pane_ParamLimits

0x9ea1,	// (0x00035744) vkb2_cell_keypad_pane

0x9f52,	// (0x000357f5) vkb2_area_bottom_grid_pane_ParamLimits

0x9f52,	// (0x000357f5) vkb2_area_bottom_grid_pane

0x9f76,	// (0x00035819) vkb2_area_bottom_pane_g1_ParamLimits

0x9f76,	// (0x00035819) vkb2_area_bottom_pane_g1

0x9f9a,	// (0x0003583d) vkb2_area_bottom_pane_g2_ParamLimits

0x9f9a,	// (0x0003583d) vkb2_area_bottom_pane_g2

0x9fc8,	// (0x0003586b) vkb2_area_bottom_pane_g3_ParamLimits

0x9fc8,	// (0x0003586b) vkb2_area_bottom_pane_g3

0x0002,

0xfd84,	// (0x0003b627) vkb2_area_bottom_pane_g_ParamLimits

0xfd84,	// (0x0003b627) vkb2_area_bottom_pane_g

0xa019,	// (0x000358bc) vkb2_top_cell_left_pane_ParamLimits

0xa019,	// (0x000358bc) vkb2_top_cell_left_pane

0x1184,	// (0x0002ca27) vkb2_top_entry_pane_g1_ParamLimits

0x1184,	// (0x0002ca27) vkb2_top_entry_pane_g1

0x1192,	// (0x0002ca35) vkb2_top_entry_pane_t1_ParamLimits

0x1192,	// (0x0002ca35) vkb2_top_entry_pane_t1

0x07ed,	// (0x0002c090) vkb2_top_entry_pane_t2_ParamLimits

0x07ed,	// (0x0002c090) vkb2_top_entry_pane_t2

0x081f,	// (0x0002c0c2) vkb2_top_entry_pane_t3_ParamLimits

0x081f,	// (0x0002c0c2) vkb2_top_entry_pane_t3

0x0002,

0xfd8b,	// (0x0003b62e) vkb2_top_entry_pane_t_ParamLimits

0xfd8b,	// (0x0003b62e) vkb2_top_entry_pane_t

0xa066,	// (0x00035909) vkb2_top_grid_right_pane_g1_ParamLimits

0xa066,	// (0x00035909) vkb2_top_grid_right_pane_g1

0xa07c,	// (0x0003591f) vkb2_top_grid_right_pane_g2_ParamLimits

0xa07c,	// (0x0003591f) vkb2_top_grid_right_pane_g2

0xa094,	// (0x00035937) vkb2_top_grid_right_pane_g3_ParamLimits

0xa094,	// (0x00035937) vkb2_top_grid_right_pane_g3

0xa0ac,	// (0x0003594f) vkb2_top_grid_right_pane_g4_ParamLimits

0xa0ac,	// (0x0003594f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd92,	// (0x0003b635) vkb2_top_grid_right_pane_g_ParamLimits

0xfd92,	// (0x0003b635) vkb2_top_grid_right_pane_g

0xa0c2,	// (0x00035965) vkb2_top_cell_left_pane_g1

0xa0d9,	// (0x0003597c) vkb2_cell_keypad_pane_g1_ParamLimits

0xa0d9,	// (0x0003597c) vkb2_cell_keypad_pane_g1

0x0835,	// (0x0002c0d8) vkb2_cell_keypad_pane_t1_ParamLimits

0x0835,	// (0x0002c0d8) vkb2_cell_keypad_pane_t1

0xa0e7,	// (0x0003598a) vkb2_cell_bottom_grid_pane_ParamLimits

0xa0e7,	// (0x0003598a) vkb2_cell_bottom_grid_pane

0xa120,	// (0x000359c3) vkb2_cell_bottom_grid_pane_g1

0xf1b8,	// (0x0003aa5b) aid_call2_pane_cp02

0xf1c0,	// (0x0003aa63) aid_call_pane_cp02

0xf1c8,	// (0x0003aa6b) clock_digital_number_pane_cp10

0xf1d0,	// (0x0003aa73) clock_digital_number_pane_cp11

0xf1d8,	// (0x0003aa7b) clock_digital_number_pane_cp12

0xf1e0,	// (0x0003aa83) clock_digital_number_pane_cp13

0xf1e8,	// (0x0003aa8b) clock_digital_separator_pane_cp10

0x853e,	// (0x00033de1) popup_clock_digital_analogue_window_cp2_g1

0x853e,	// (0x00033de1) popup_clock_digital_analogue_window_cp2_g2

0xf1f0,	// (0x0003aa93) popup_clock_digital_analogue_window_cp2_g3

0x853e,	// (0x00033de1) popup_clock_digital_analogue_window_cp2_g4

0xf1f0,	// (0x0003aa93) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd47,	// (0x0003b5ea) popup_clock_digital_analogue_window_cp2_g

0xf1f8,	// (0x0003aa9b) popup_clock_digital_analogue_window_cp2_t1

0xf206,	// (0x0003aaa9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd52,	// (0x0003b5f5) popup_clock_digital_analogue_window_cp2_t

0xc8e5,	// (0x00038188) clock_digital_number_pane_cp10_g1

0xc8e5,	// (0x00038188) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x0003b3e4) clock_digital_number_pane_cp10_g

0xc8e5,	// (0x00038188) clock_digital_separator_pane_cp10_g1

0xc8e5,	// (0x00038188) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x0003b3e4) clock_digital_separator_pane_cp10_g

0xda5f,	// (0x00039302) uniindi_top_pane_g3

0xda70,	// (0x00039313) uniindi_top_pane_g4

0x9f0c,	// (0x000357af) vkb2_row_keypad_pane_ParamLimits

0x9f0c,	// (0x000357af) vkb2_row_keypad_pane

0xa13c,	// (0x000359df) vkb2_cell_t_keypad_pane_ParamLimits

0xa13c,	// (0x000359df) vkb2_cell_t_keypad_pane

0xa149,	// (0x000359ec) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xa149,	// (0x000359ec) vkb2_cell_t_keypad_pane_cp08

0xa159,	// (0x000359fc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xa159,	// (0x000359fc) vkb2_cell_t_keypad_pane_cp09

0xa16a,	// (0x00035a0d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xa16a,	// (0x00035a0d) vkb2_cell_t_keypad_pane_cp01

0xa17a,	// (0x00035a1d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xa17a,	// (0x00035a1d) vkb2_cell_t_keypad_pane_cp02

0xa18a,	// (0x00035a2d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xa18a,	// (0x00035a2d) vkb2_cell_t_keypad_pane_cp03

0xa19a,	// (0x00035a3d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xa19a,	// (0x00035a3d) vkb2_cell_t_keypad_pane_cp04

0xa1aa,	// (0x00035a4d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xa1aa,	// (0x00035a4d) vkb2_cell_t_keypad_pane_cp05

0xa1ba,	// (0x00035a5d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xa1ba,	// (0x00035a5d) vkb2_cell_t_keypad_pane_cp06

0xa1ca,	// (0x00035a6d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xa1ca,	// (0x00035a6d) vkb2_cell_t_keypad_pane_cp07

0xa1da,	// (0x00035a7d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xa1da,	// (0x00035a7d) vkb2_cell_t_keypad_pane_cp10

0xcb11,	// (0x000383b4) vkb2_cell_t_keypad_pane_g1

0x084c,	// (0x0002c0ef) vkb2_cell_t_keypad_pane_t1

0x7488,	// (0x00032d2b) popup_grid_graphic2_window

0x11c4,	// (0x0002ca67) aid_size_cell_graphic2_ParamLimits

0x11c4,	// (0x0002ca67) aid_size_cell_graphic2

0x11fc,	// (0x0002ca9f) bg_popup_window_pane_cp21_ParamLimits

0x11fc,	// (0x0002ca9f) bg_popup_window_pane_cp21

0x120a,	// (0x0002caad) graphic2_pages_pane_ParamLimits

0x120a,	// (0x0002caad) graphic2_pages_pane

0x1244,	// (0x0002cae7) grid_graphic2_control_pane_ParamLimits

0x1244,	// (0x0002cae7) grid_graphic2_control_pane

0x127a,	// (0x0002cb1d) grid_graphic2_pane_ParamLimits

0x127a,	// (0x0002cb1d) grid_graphic2_pane

0x12da,	// (0x0002cb7d) cell_graphic2_pane

0x7488,	// (0x00032d2b) main_comp_mode_pane

0xd6db,	// (0x00038f7e) list_ai3_gene_pane_ParamLimits

0xefa1,	// (0x0003a844) bg_popup_window_pane_cp19_ParamLimits

0xd84b,	// (0x000390ee) bg_touch_area_indi_pane_ParamLimits

0xd84b,	// (0x000390ee) bg_touch_area_indi_pane

0xd861,	// (0x00039104) bg_touch_area_indi_pane_cp01_ParamLimits

0xd861,	// (0x00039104) bg_touch_area_indi_pane_cp01

0xd877,	// (0x0003911a) bg_touch_area_indi_pane_cp02_ParamLimits

0xd877,	// (0x0003911a) bg_touch_area_indi_pane_cp02

0xd88d,	// (0x00039130) bg_touch_area_indi_pane_cp03_ParamLimits

0xd88d,	// (0x00039130) bg_touch_area_indi_pane_cp03

0xd8a3,	// (0x00039146) popup_slider_window_g1_ParamLimits

0xd8bf,	// (0x00039162) popup_slider_window_g2_ParamLimits

0xd8db,	// (0x0003917e) popup_slider_window_g3_ParamLimits

0xfcdc,	// (0x0003b57f) popup_slider_window_g_ParamLimits

0xd8f7,	// (0x0003919a) popup_slider_window_t1_ParamLimits

0xd93b,	// (0x000391de) small_volume_slider_vertical_pane_ParamLimits

0x12da,	// (0x0002cb7d) cell_graphic2_pane_ParamLimits

0x1316,	// (0x0002cbb9) bg_button_pane_cp10_ParamLimits

0x1316,	// (0x0002cbb9) bg_button_pane_cp10

0x1327,	// (0x0002cbca) bg_button_pane_cp11_ParamLimits

0x1327,	// (0x0002cbca) bg_button_pane_cp11

0x1338,	// (0x0002cbdb) graphic2_pages_pane_g1_ParamLimits

0x1338,	// (0x0002cbdb) graphic2_pages_pane_g1

0x134b,	// (0x0002cbee) graphic2_pages_pane_g2_ParamLimits

0x134b,	// (0x0002cbee) graphic2_pages_pane_g2

0x0001,

0xfda0,	// (0x0003b643) graphic2_pages_pane_g_ParamLimits

0xfda0,	// (0x0003b643) graphic2_pages_pane_g

0x1361,	// (0x0002cc04) graphic2_pages_pane_t1_ParamLimits

0x1361,	// (0x0002cc04) graphic2_pages_pane_t1

0x1377,	// (0x0002cc1a) cell_graphic2_control_pane_ParamLimits

0x1377,	// (0x0002cc1a) cell_graphic2_control_pane

0x1396,	// (0x0002cc39) cell_graphic2_pane_g1_ParamLimits

0x1396,	// (0x0002cc39) cell_graphic2_pane_g1

0x13a3,	// (0x0002cc46) cell_graphic2_pane_g2_ParamLimits

0x13a3,	// (0x0002cc46) cell_graphic2_pane_g2

0x13b0,	// (0x0002cc53) cell_graphic2_pane_g3_ParamLimits

0x13b0,	// (0x0002cc53) cell_graphic2_pane_g3

0x13bd,	// (0x0002cc60) cell_graphic2_pane_g4_ParamLimits

0x13bd,	// (0x0002cc60) cell_graphic2_pane_g4

0x13ca,	// (0x0002cc6d) cell_graphic2_pane_g5_ParamLimits

0x13ca,	// (0x0002cc6d) cell_graphic2_pane_g5

0x0004,

0xfda5,	// (0x0003b648) cell_graphic2_pane_g_ParamLimits

0xfda5,	// (0x0003b648) cell_graphic2_pane_g

0x13e5,	// (0x0002cc88) cell_graphic2_pane_t1_ParamLimits

0x13e5,	// (0x0002cc88) cell_graphic2_pane_t1

0xabe8,	// (0x0003648b) grid_highlight_pane_cp11_ParamLimits

0xabe8,	// (0x0003648b) grid_highlight_pane_cp11

0x79b8,	// (0x0003325b) bg_button_pane_cp05

0x140e,	// (0x0002ccb1) cell_graphic2_control_pane_g1

0xc8e5,	// (0x00038188) bg_touch_area_indi_pane_g1

0x085e,	// (0x0002c101) aid_cmod_rocker_key_size

0x0868,	// (0x0002c10b) aid_cmode_itu_key_size

0x0872,	// (0x0002c115) main_cmode_video_pane

0x087a,	// (0x0002c11d) main_comp_mode_itu_pane

0x0884,	// (0x0002c127) main_comp_mode_rocker_pane

0x088c,	// (0x0002c12f) cell_cmode_rocker_pane_ParamLimits

0x088c,	// (0x0002c12f) cell_cmode_rocker_pane

0x089e,	// (0x0002c141) cell_cmode_itu_pane_ParamLimits

0x089e,	// (0x0002c141) cell_cmode_itu_pane

0x7ede,	// (0x00033781) bg_button_pane_cp06_ParamLimits

0x7ede,	// (0x00033781) bg_button_pane_cp06

0xcb11,	// (0x000383b4) cell_cmode_rocker_pane_g1_ParamLimits

0xcb11,	// (0x000383b4) cell_cmode_rocker_pane_g1

0xd972,	// (0x00039215) cell_cmode_rocker_pane_g2_ParamLimits

0xd972,	// (0x00039215) cell_cmode_rocker_pane_g2

0x0001,

0xfdb5,	// (0x0003b658) cell_cmode_rocker_pane_g_ParamLimits

0xfdb5,	// (0x0003b658) cell_cmode_rocker_pane_g

0x7488,	// (0x00032d2b) bg_button_pane_cp07

0x08b3,	// (0x0002c156) cell_cmode_itu_pane_g1

0x08bc,	// (0x0002c15f) cell_cmode_itu_pane_t1

0x08ca,	// (0x0002c16d) cell_cmode_itu_pane_t2

0x0001,

0xfdba,	// (0x0003b65d) cell_cmode_itu_pane_t

0xecfc,	// (0x0003a59f) aid_touch_ctrl_left

0xed04,	// (0x0003a5a7) aid_touch_ctrl_right

0x7488,	// (0x00032d2b) compa_mode_pane

0x1436,	// (0x0002ccd9) aid_cmod_rocker_key_size_cp

0x1440,	// (0x0002cce3) aid_cmode_itu_key_size_cp

0x08d8,	// (0x0002c17b) compa_mode_pane_g1

0x08e0,	// (0x0002c183) compa_mode_pane_g2

0x08e8,	// (0x0002c18b) compa_mode_pane_g3

0x0002,

0xfdbf,	// (0x0003b662) compa_mode_pane_g

0x144a,	// (0x0002cced) main_comp_mode_itu_pane_cp

0x1452,	// (0x0002ccf5) main_comp_mode_rocker_pane_cp

0x145a,	// (0x0002ccfd) cell_cmode_itu_pane_cp_ParamLimits

0x145a,	// (0x0002ccfd) cell_cmode_itu_pane_cp

0x146f,	// (0x0002cd12) cell_cmode_rocker_pane_cp_ParamLimits

0x146f,	// (0x0002cd12) cell_cmode_rocker_pane_cp

0x7ede,	// (0x00033781) bg_button_pane_cp06_cp_ParamLimits

0x7ede,	// (0x00033781) bg_button_pane_cp06_cp

0xcb11,	// (0x000383b4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xcb11,	// (0x000383b4) cell_cmode_rocker_pane_g1_cp

0xc8e5,	// (0x00038188) cell_cmode_rocker_pane_g2_cp

0x7488,	// (0x00032d2b) bg_button_pane_cp07_cp

0x1481,	// (0x0002cd24) cell_cmode_itu_pane_g1_cp

0x148a,	// (0x0002cd2d) cell_cmode_itu_pane_t1_cp

0x1498,	// (0x0002cd3b) cell_cmode_itu_pane_t2_cp

0xe72a,	// (0x00039fcd) settings_code_pane_cp2

0x77e5,	// (0x00033088) bg_popup_window_pane_cp3_ParamLimits

0x7bb6,	// (0x00033459) heading_pane_cp3_ParamLimits

0x7bc2,	// (0x00033465) listscroll_popup_graphic_pane_ParamLimits

0x97c6,	// (0x00035069) fep_hwr_aid_pane_ParamLimits

0x9c31,	// (0x000354d4) aid_touch_sctrl_top_ParamLimits

0x9c3e,	// (0x000354e1) sctrl_sk_top_pane_g1_ParamLimits

0xcb11,	// (0x000383b4) sctrl_sk_top_pane_g2_ParamLimits

0xfcf5,	// (0x0003b598) sctrl_sk_top_pane_g_ParamLimits

0x9c4b,	// (0x000354ee) sctrl_sk_top_pane_t1_ParamLimits

0x9c31,	// (0x000354d4) aid_touch_sctrl_bottom_ParamLimits

0x9c4b,	// (0x000354ee) sctrl_sk_bottom_pane_t1_ParamLimits

0xda2b,	// (0x000392ce) aid_area_touch_clock

0x9e03,	// (0x000356a6) aid_vkb2_area_top_pane_cell_ParamLimits

0x9e03,	// (0x000356a6) aid_vkb2_area_top_pane_cell

0x9f2e,	// (0x000357d1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9f2e,	// (0x000357d1) aid_vkb2_area_bottom_pane_cell

0x07e5,	// (0x0002c088) popup_char_count_window

0x08f0,	// (0x0002c193) popup_char_count_window_g1

0x08f9,	// (0x0002c19c) popup_char_count_window_g2

0x0902,	// (0x0002c1a5) popup_char_count_window_g3

0x0002,

0xfdc6,	// (0x0003b669) popup_char_count_window_g

0x090b,	// (0x0002c1ae) popup_char_count_window_t1

0x9cf1,	// (0x00035594) popup_fep_char_preview_window_ParamLimits

0x9cf1,	// (0x00035594) popup_fep_char_preview_window

0x9e21,	// (0x000356c4) vkb2_top_candi_pane_ParamLimits

0x9e21,	// (0x000356c4) vkb2_top_candi_pane

0x14a6,	// (0x0002cd49) cell_vkb2_top_candi_pane_ParamLimits

0x14a6,	// (0x0002cd49) cell_vkb2_top_candi_pane

0xb128,	// (0x000369cb) bg_popup_fep_char_preview_window_ParamLimits

0xb128,	// (0x000369cb) bg_popup_fep_char_preview_window

0xa1ef,	// (0x00035a92) popup_fep_char_preview_window_t1_ParamLimits

0xa1ef,	// (0x00035a92) popup_fep_char_preview_window_t1

0x0929,	// (0x0002c1cc) bg_popup_fep_char_preview_window_g1

0x0921,	// (0x0002c1c4) bg_popup_fep_char_preview_window_g2

0x0919,	// (0x0002c1bc) bg_popup_fep_char_preview_window_g3

0x0949,	// (0x0002c1ec) bg_popup_fep_char_preview_window_g4

0x0941,	// (0x0002c1e4) bg_popup_fep_char_preview_window_g5

0xa229,	// (0x00035acc) bg_popup_fep_char_preview_window_g6

0x0939,	// (0x0002c1dc) bg_popup_fep_char_preview_window_g7

0x0931,	// (0x0002c1d4) bg_popup_fep_char_preview_window_g8

0x0951,	// (0x0002c1f4) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcd,	// (0x0003b670) bg_popup_fep_char_preview_window_g

0xcb11,	// (0x000383b4) cell_vkb2_top_candi_pane_g1_ParamLimits

0xcb11,	// (0x000383b4) cell_vkb2_top_candi_pane_g1

0xcd40,	// (0x000385e3) cell_vkb2_top_candi_pane_g2_ParamLimits

0xcd40,	// (0x000385e3) cell_vkb2_top_candi_pane_g2

0xcd61,	// (0x00038604) cell_vkb2_top_candi_pane_g3_ParamLimits

0xcd61,	// (0x00038604) cell_vkb2_top_candi_pane_g3

0xa231,	// (0x00035ad4) cell_vkb2_top_candi_pane_g4_ParamLimits

0xa231,	// (0x00035ad4) cell_vkb2_top_candi_pane_g4

0x044b,	// (0x0002bcee) cell_vkb2_top_candi_pane_g5_ParamLimits

0x044b,	// (0x0002bcee) cell_vkb2_top_candi_pane_g5

0xd972,	// (0x00039215) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd972,	// (0x00039215) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde0,	// (0x0003b683) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde0,	// (0x0003b683) cell_vkb2_top_candi_pane_g

0xa252,	// (0x00035af5) cell_vkb2_top_candi_pane_t1

0x9519,	// (0x00034dbc) aid_size_touch_slider_mark_ParamLimits

0x9519,	// (0x00034dbc) aid_size_touch_slider_mark

0x1238,	// (0x0002cadb) grid_graphic2_catg_pane_ParamLimits

0x1238,	// (0x0002cadb) grid_graphic2_catg_pane

0x12b6,	// (0x0002cb59) popup_grid_graphic2_window_t1_ParamLimits

0x12b6,	// (0x0002cb59) popup_grid_graphic2_window_t1

0x12c8,	// (0x0002cb6b) popup_grid_graphic2_window_t2_ParamLimits

0x12c8,	// (0x0002cb6b) popup_grid_graphic2_window_t2

0x0001,

0xfd9b,	// (0x0003b63e) popup_grid_graphic2_window_t_ParamLimits

0xfd9b,	// (0x0003b63e) popup_grid_graphic2_window_t

0x79b8,	// (0x0003325b) bg_button_pane_cp05_ParamLimits

0x140e,	// (0x0002ccb1) cell_graphic2_control_pane_g1_ParamLimits

0x14df,	// (0x0002cd82) cell_graphic2_catg_pane_ParamLimits

0x14df,	// (0x0002cd82) cell_graphic2_catg_pane

0x7488,	// (0x00032d2b) bg_button_pane_cp12

0x14f1,	// (0x0002cd94) cell_graphic2_catg_pane_g1

0xd9f7,	// (0x0003929a) cell_tb_ext_pane_t1_ParamLimits

0xa039,	// (0x000358dc) vkb2_top_cell_right_narrow_pane_ParamLimits

0xa039,	// (0x000358dc) vkb2_top_cell_right_narrow_pane

0xa051,	// (0x000358f4) vkb2_top_cell_right_wide_pane_ParamLimits

0xa051,	// (0x000358f4) vkb2_top_cell_right_wide_pane

0x97b8,	// (0x0003505b) bg_vkb2_func_pane_ParamLimits

0x97b8,	// (0x0003505b) bg_vkb2_func_pane

0xa0c2,	// (0x00035965) vkb2_top_cell_left_pane_g1_ParamLimits

0x97b8,	// (0x0003505b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x97b8,	// (0x0003505b) bg_vkb2_fuc_pane_cp03

0xa120,	// (0x000359c3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xab70,	// (0x00036413) bg_vkb2_func_pane_g1

0xab78,	// (0x0003641b) bg_vkb2_func_pane_g2

0xab88,	// (0x0003642b) bg_vkb2_func_pane_g3

0xab80,	// (0x00036423) bg_vkb2_func_pane_g4

0xab90,	// (0x00036433) bg_vkb2_func_pane_g5

0xab98,	// (0x0003643b) bg_vkb2_func_pane_g6

0xaba0,	// (0x00036443) bg_vkb2_func_pane_g7

0xaba8,	// (0x0003644b) bg_vkb2_func_pane_g8

0xab68,	// (0x0003640b) bg_vkb2_func_pane_g9

0x0008,

0xfded,	// (0x0003b690) bg_vkb2_func_pane_g

0x97b8,	// (0x0003505b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x97b8,	// (0x0003505b) bg_vkb2_fuc_pane_cp01

0xa0c2,	// (0x00035965) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xa0c2,	// (0x00035965) vkb2_top_cell_right_wide_pane_g1

0x97b8,	// (0x0003505b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x97b8,	// (0x0003505b) bg_vkb2_fuc_pane_cp02

0xa120,	// (0x000359c3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xa120,	// (0x000359c3) vkb2_top_cell_right_narrow_pane_g1

0xef33,	// (0x0003a7d6) aid_touch_area_decrease_ParamLimits

0xef33,	// (0x0003a7d6) aid_touch_area_decrease

0xef4b,	// (0x0003a7ee) aid_touch_area_increase_ParamLimits

0xef4b,	// (0x0003a7ee) aid_touch_area_increase

0xef57,	// (0x0003a7fa) aid_touch_area_mute_ParamLimits

0xef57,	// (0x0003a7fa) aid_touch_area_mute

0xef73,	// (0x0003a816) aid_touch_area_slider_ParamLimits

0xef73,	// (0x0003a816) aid_touch_area_slider

0xefad,	// (0x0003a850) popup_slider_window_g4_ParamLimits

0xefad,	// (0x0003a850) popup_slider_window_g4

0xefb9,	// (0x0003a85c) popup_slider_window_g5_ParamLimits

0xefb9,	// (0x0003a85c) popup_slider_window_g5

0xefdb,	// (0x0003a87e) popup_slider_window_g6_ParamLimits

0xefdb,	// (0x0003a87e) popup_slider_window_g6

0xd923,	// (0x000391c6) popup_slider_window_t2_ParamLimits

0xd923,	// (0x000391c6) popup_slider_window_t2

0x0001,

0xfce9,	// (0x0003b58c) popup_slider_window_t_ParamLimits

0xfce9,	// (0x0003b58c) popup_slider_window_t

0xefed,	// (0x0003a890) slider_pane_ParamLimits

0xefed,	// (0x0003a890) slider_pane

0x0959,	// (0x0002c1fc) slider_pane_g1_ParamLimits

0x0959,	// (0x0002c1fc) slider_pane_g1

0x096d,	// (0x0002c210) slider_pane_g2_ParamLimits

0x096d,	// (0x0002c210) slider_pane_g2

0x0983,	// (0x0002c226) slider_pane_g3_ParamLimits

0x0983,	// (0x0002c226) slider_pane_g3

0x0003,

0xfe00,	// (0x0003b6a3) slider_pane_g_ParamLimits

0xfe00,	// (0x0003b6a3) slider_pane_g

0x918d,	// (0x00034a30) popup_tb_float_extension_window_ParamLimits

0x918d,	// (0x00034a30) popup_tb_float_extension_window

0x09af,	// (0x0002c252) aid_size_cell_tb_float_ext

0x7488,	// (0x00032d2b) bg_popup_sub_window_cp28

0x09ba,	// (0x0002c25d) grid_tb_float_ext_pane

0x09c2,	// (0x0002c265) cell_tb_float_ext_pane_ParamLimits

0x09c2,	// (0x0002c265) cell_tb_float_ext_pane

0x09da,	// (0x0002c27d) cell_tb_float_ext_pane_g1

0x09e3,	// (0x0002c286) grid_highlight_pane_cp12

0x98f3,	// (0x00035196) cell_last_hwr_side_pane_ParamLimits

0x98f3,	// (0x00035196) cell_last_hwr_side_pane

0xc8e5,	// (0x00038188) cell_last_hwr_side_pane_g1

0x09ec,	// (0x0002c28f) cell_last_hwr_side_pane_g2

0x0001,

0xfe09,	// (0x0003b6ac) cell_last_hwr_side_pane_g

0x9ff6,	// (0x00035899) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9ff6,	// (0x00035899) vkb2_area_bottom_space_btn_pane

0xcb11,	// (0x000383b4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x084c,	// (0x0002c0ef) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xa252,	// (0x00035af5) cell_vkb2_top_candi_pane_t1_ParamLimits

0xa268,	// (0x00035b0b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xa268,	// (0x00035b0b) vkb2_area_bottom_space_btn_pane_g1

0xa29e,	// (0x00035b41) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xa29e,	// (0x00035b41) vkb2_area_bottom_space_btn_pane_g2

0xa2d4,	// (0x00035b77) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xa2d4,	// (0x00035b77) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0e,	// (0x0003b6b1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0e,	// (0x0003b6b1) vkb2_area_bottom_space_btn_pane_g

0x9867,	// (0x0003510a) cel_fep_hwr_func_pane_ParamLimits

0x9867,	// (0x0003510a) cel_fep_hwr_func_pane

0x98a3,	// (0x00035146) cell_hwr_side_button_pane_ParamLimits

0x98a3,	// (0x00035146) cell_hwr_side_button_pane

0xda2b,	// (0x000392ce) aid_area_touch_clock_ParamLimits

0x79b8,	// (0x0003325b) bg_uniindi_top_pane_ParamLimits

0xda3d,	// (0x000392e0) uniindi_top_pane_g1_ParamLimits

0xda53,	// (0x000392f6) uniindi_top_pane_g2_ParamLimits

0xda5f,	// (0x00039302) uniindi_top_pane_g3_ParamLimits

0xda70,	// (0x00039313) uniindi_top_pane_g4_ParamLimits

0xfd21,	// (0x0003b5c4) uniindi_top_pane_g_ParamLimits

0xda7d,	// (0x00039320) uniindi_top_pane_t1_ParamLimits

0x79b8,	// (0x0003325b) bg_vkb2_func_pane_cp01_ParamLimits

0x79b8,	// (0x0003325b) bg_vkb2_func_pane_cp01

0x09f5,	// (0x0002c298) cel_fep_hwr_func_pane_g1_ParamLimits

0x09f5,	// (0x0002c298) cel_fep_hwr_func_pane_g1

0x79b8,	// (0x0003325b) bg_vkb2_func_pane_cp02_ParamLimits

0x79b8,	// (0x0003325b) bg_vkb2_func_pane_cp02

0x09f5,	// (0x0002c298) cell_hwr_side_button_pane_g1_ParamLimits

0x09f5,	// (0x0002c298) cell_hwr_side_button_pane_g1

0xaa8c,	// (0x0003632f) status_pane_g4_ParamLimits

0xaa8c,	// (0x0003632f) status_pane_g4

0xaaa4,	// (0x00036347) status_pane_t1

0xc6eb,	// (0x00037f8e) form2_midp_gauge_slider_cont_pane

0xc6f3,	// (0x00037f96) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe9cd,	// (0x0003a270) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe9df,	// (0x0003a282) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0003b397) form2_midp_gauge_slider_pane_t_ParamLimits

0xc705,	// (0x00037fa8) form2_midp_slider_pane_ParamLimits

0x9cb1,	// (0x00035554) aid_size_cell_func_vkb2_ParamLimits

0x9cb1,	// (0x00035554) aid_size_cell_func_vkb2

0x099b,	// (0x0002c23e) slider_pane_g4_ParamLimits

0x099b,	// (0x0002c23e) slider_pane_g4

0xa31a,	// (0x00035bbd) form2_midp_gauge_slider_pane_t2_cp01

0xa328,	// (0x00035bcb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa328,	// (0x00035bcb) form2_midp_gauge_slider_pane_t3_cp01

0xa345,	// (0x00035be8) form2_midp_slider_pane_cp01

0x7488,	// (0x00032d2b) navi_smil_pane

0x0a25,	// (0x0002c2c8) navi_smil_pane_g1

0x0a2d,	// (0x0002c2d0) navi_smil_pane_t1

0x0a03,	// (0x0002c2a6) form2_midp_slider_pane_g1

0x0a0c,	// (0x0002c2af) form2_midp_slider_pane_g2

0x0a14,	// (0x0002c2b7) form2_midp_slider_pane_g3

0x0a03,	// (0x0002c2a6) form2_midp_slider_pane_g4

0x14fa,	// (0x0002cd9d) form2_midp_slider_pane_g5

0x0004,

0xfe17,	// (0x0003b6ba) form2_midp_slider_pane_g

0xa30a,	// (0x00035bad) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xa30a,	// (0x00035bad) vkb2_area_bottom_space_btn_pane_g4

0xe23d,	// (0x00039ae0) lc0_navi_pane_ParamLimits

0xe23d,	// (0x00039ae0) lc0_navi_pane

0xe2b3,	// (0x00039b56) lc0_stat_indi_pane_ParamLimits

0xe2b3,	// (0x00039b56) lc0_stat_indi_pane

0xe2ca,	// (0x00039b6d) ls0_title_pane_ParamLimits

0xe2ca,	// (0x00039b6d) ls0_title_pane

0x7ede,	// (0x00033781) bg_popup_sub_pane_cp14_ParamLimits

0xda12,	// (0x000392b5) list_uniindi_pane_ParamLimits

0xda1e,	// (0x000392c1) uniindi_top_pane_ParamLimits

0xecd4,	// (0x0003a577) list_single_uniindi_pane_g1_ParamLimits

0xece7,	// (0x0003a58a) list_single_uniindi_pane_t1_ParamLimits

0xa34e,	// (0x00035bf1) lc0_stat_clock_pane_ParamLimits

0xa34e,	// (0x00035bf1) lc0_stat_clock_pane

0x1510,	// (0x0002cdb3) lc0_stat_indi_pane_g1_ParamLimits

0x1510,	// (0x0002cdb3) lc0_stat_indi_pane_g1

0x1503,	// (0x0002cda6) lc0_stat_indi_pane_g2_ParamLimits

0x1503,	// (0x0002cda6) lc0_stat_indi_pane_g2

0x0001,

0xfe22,	// (0x0003b6c5) lc0_stat_indi_pane_g_ParamLimits

0xfe22,	// (0x0003b6c5) lc0_stat_indi_pane_g

0xa35b,	// (0x00035bfe) lc0_uni_indicator_pane_ParamLimits

0xa35b,	// (0x00035bfe) lc0_uni_indicator_pane

0x0a3b,	// (0x0002c2de) ls0_title_pane_g1_ParamLimits

0x0a3b,	// (0x0002c2de) ls0_title_pane_g1

0x151d,	// (0x0002cdc0) ls0_title_pane_t1_ParamLimits

0x151d,	// (0x0002cdc0) ls0_title_pane_t1

0xa368,	// (0x00035c0b) lc0_uni_indicator_pane_g1_ParamLimits

0xa368,	// (0x00035c0b) lc0_uni_indicator_pane_g1

0x0a4f,	// (0x0002c2f2) lc0_stat_clock_pane_t1

0x7488,	// (0x00032d2b) main_ai5_pane

0x0a5d,	// (0x0002c300) ai5_sk_pane_ParamLimits

0x0a5d,	// (0x0002c300) ai5_sk_pane

0x1553,	// (0x0002cdf6) cell_ai5_widget_pane_ParamLimits

0x1553,	// (0x0002cdf6) cell_ai5_widget_pane

0x0a6a,	// (0x0002c30d) aid_size_cell_widget_grid

0x0a77,	// (0x0002c31a) bg_ai5_widget_pane_ParamLimits

0x0a77,	// (0x0002c31a) bg_ai5_widget_pane

0x15e6,	// (0x0002ce89) cell_ai5_widget_pane_g2

0x15fa,	// (0x0002ce9d) cell_ai5_widget_pane_g3

0x1614,	// (0x0002ceb7) cell_ai5_widget_pane_g4

0x1624,	// (0x0002cec7) cell_ai5_widget_pane_g5

0x1634,	// (0x0002ced7) cell_ai5_widget_pane_g6

0x1640,	// (0x0002cee3) cell_ai5_widget_pane_g7

0x1688,	// (0x0002cf2b) cell_ai5_widget_pane_t1_ParamLimits

0x1688,	// (0x0002cf2b) cell_ai5_widget_pane_t1

0x16a5,	// (0x0002cf48) cell_ai5_widget_pane_t2_ParamLimits

0x16a5,	// (0x0002cf48) cell_ai5_widget_pane_t2

0x16bd,	// (0x0002cf60) cell_ai5_widget_pane_t3_ParamLimits

0x16bd,	// (0x0002cf60) cell_ai5_widget_pane_t3

0x16d5,	// (0x0002cf78) cell_ai5_widget_pane_t4_ParamLimits

0x16d5,	// (0x0002cf78) cell_ai5_widget_pane_t4

0x16fb,	// (0x0002cf9e) cell_ai5_widget_pane_t5_ParamLimits

0x16fb,	// (0x0002cf9e) cell_ai5_widget_pane_t5

0x0aaf,	// (0x0002c352) cell_ai5_widget_pane_t6_ParamLimits

0x0aaf,	// (0x0002c352) cell_ai5_widget_pane_t6

0x0ac1,	// (0x0002c364) cell_ai5_widget_pane_t7_ParamLimits

0x0ac1,	// (0x0002c364) cell_ai5_widget_pane_t7

0x171a,	// (0x0002cfbd) cell_ai5_widget_pane_t8_ParamLimits

0x171a,	// (0x0002cfbd) cell_ai5_widget_pane_t8

0x0009,

0xfe3c,	// (0x0003b6df) cell_ai5_widget_pane_t_ParamLimits

0xfe3c,	// (0x0003b6df) cell_ai5_widget_pane_t

0x1779,	// (0x0002d01c) grid_ai5_widget_pane

0x7ede,	// (0x00033781) highlight_cell_ai5_widget_pane_ParamLimits

0x7ede,	// (0x00033781) highlight_cell_ai5_widget_pane

0x1785,	// (0x0002d028) ai5_sk_left_pane

0x178f,	// (0x0002d032) ai5_sk_middle_pane

0x1799,	// (0x0002d03c) ai5_sk_right_pane

0x0ada,	// (0x0002c37d) bg_ai5_widget_pane_g1_ParamLimits

0x0ada,	// (0x0002c37d) bg_ai5_widget_pane_g1

0x0ae6,	// (0x0002c389) bg_ai5_widget_pane_g2_ParamLimits

0x0ae6,	// (0x0002c389) bg_ai5_widget_pane_g2

0x0af2,	// (0x0002c395) bg_ai5_widget_pane_g3_ParamLimits

0x0af2,	// (0x0002c395) bg_ai5_widget_pane_g3

0x0afe,	// (0x0002c3a1) bg_ai5_widget_pane_g4_ParamLimits

0x0afe,	// (0x0002c3a1) bg_ai5_widget_pane_g4

0x0b0a,	// (0x0002c3ad) bg_ai5_widget_pane_g5_ParamLimits

0x0b0a,	// (0x0002c3ad) bg_ai5_widget_pane_g5

0x0b16,	// (0x0002c3b9) bg_ai5_widget_pane_g6_ParamLimits

0x0b16,	// (0x0002c3b9) bg_ai5_widget_pane_g6

0x0b22,	// (0x0002c3c5) bg_ai5_widget_pane_g7_ParamLimits

0x0b22,	// (0x0002c3c5) bg_ai5_widget_pane_g7

0x0b2e,	// (0x0002c3d1) bg_ai5_widget_pane_g8_ParamLimits

0x0b2e,	// (0x0002c3d1) bg_ai5_widget_pane_g8

0x0b3a,	// (0x0002c3dd) bg_ai5_widget_pane_g9_ParamLimits

0x0b3a,	// (0x0002c3dd) bg_ai5_widget_pane_g9

0x0008,

0xfe51,	// (0x0003b6f4) bg_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x0003b6f4) bg_ai5_widget_pane_g

0x0b6a,	// (0x0002c40d) cell_shortcut_ai5_widget_pane_ParamLimits

0x0b6a,	// (0x0002c40d) cell_shortcut_ai5_widget_pane

0x0b7b,	// (0x0002c41e) bg_cell_shortcut_ai5_widget_pane

0x7b72,	// (0x00033415) cell_grid_ai5_widget_pane_g1

0xa7d0,	// (0x00036073) highlight_cell_shortcut_ai5_widget_pane

0xab78,	// (0x0003641b) ai5_sk_left_pane_g1

0x0b83,	// (0x0002c426) ai5_sk_left_pane_g2

0x0b8b,	// (0x0002c42e) ai5_sk_left_pane_g3

0x0b93,	// (0x0002c436) ai5_sk_left_pane_g4

0x0003,

0xfe64,	// (0x0003b707) ai5_sk_left_pane_g

0x0b9b,	// (0x0002c43e) ai5_sk_left_pane_t1

0xab70,	// (0x00036413) ai5_sk_right_pane_g1

0x0ba9,	// (0x0002c44c) ai5_sk_right_pane_g2

0x0bb1,	// (0x0002c454) ai5_sk_right_pane_g3

0x0bb9,	// (0x0002c45c) ai5_sk_right_pane_g4

0x0003,

0xfe6d,	// (0x0003b710) ai5_sk_right_pane_g

0x0bc1,	// (0x0002c464) ai5_sk_right_pane_t1

0xab70,	// (0x00036413) ai5_sk_middle_pane_g1

0xab78,	// (0x0003641b) ai5_sk_middle_pane_g2

0xab90,	// (0x00036433) ai5_sk_middle_pane_g3

0x0bb1,	// (0x0002c454) ai5_sk_middle_pane_g4

0x0b8b,	// (0x0002c42e) ai5_sk_middle_pane_g5

0x0bcf,	// (0x0002c472) ai5_sk_middle_pane_g6

0x17a3,	// (0x0002d046) ai5_sk_middle_pane_g7

0x0006,

0xfe76,	// (0x0003b719) ai5_sk_middle_pane_g

0xe18a,	// (0x00039a2d) aid_touch_area_size_lc0_ParamLimits

0xe18a,	// (0x00039a2d) aid_touch_area_size_lc0

0x99e6,	// (0x00035289) cell_hwr_candidate_pane_t1_ParamLimits

0xa9b5,	// (0x00036258) aid_touch_navi_pane

0xe39c,	// (0x00039c3f) status_dt_navi_pane_ParamLimits

0xe39c,	// (0x00039c3f) status_dt_navi_pane

0xe3a9,	// (0x00039c4c) status_dt_sta_pane_ParamLimits

0xe3a9,	// (0x00039c4c) status_dt_sta_pane

0x17ab,	// (0x0002d04e) dt_sta_controll_pane

0x17b8,	// (0x0002d05b) dt_sta_indi_pane

0x17c9,	// (0x0002d06c) dt_sta_title_pane

0x79b8,	// (0x0003325b) bg_dt_sta_indi_pane_ParamLimits

0x79b8,	// (0x0003325b) bg_dt_sta_indi_pane

0x17dc,	// (0x0002d07f) dt_sta_battery_pane

0x17e4,	// (0x0002d087) dt_sta_indi_pane_g1

0x17ed,	// (0x0002d090) dt_sta_indi_pane_g2

0x17f6,	// (0x0002d099) dt_sta_indi_pane_g3

0x0002,

0xfe85,	// (0x0003b728) dt_sta_indi_pane_g

0x17ff,	// (0x0002d0a2) dt_sta_signal_pane

0x7ede,	// (0x00033781) bg_dt_sta_title_pane_ParamLimits

0x7ede,	// (0x00033781) bg_dt_sta_title_pane

0x1808,	// (0x0002d0ab) dt_sta_title_pane_g1

0x1810,	// (0x0002d0b3) dt_sta_title_pane_t1_ParamLimits

0x1810,	// (0x0002d0b3) dt_sta_title_pane_t1

0x7488,	// (0x00032d2b) bg_dt_sta_control_pane

0x1825,	// (0x0002d0c8) dt_sta_controll_pane_g1

0x182e,	// (0x0002d0d1) bg_dt_sta_title_pane_g1

0x1837,	// (0x0002d0da) bg_dt_sta_title_pane_g2

0x1840,	// (0x0002d0e3) bg_dt_sta_title_pane_g3

0x0002,

0xfe8c,	// (0x0003b72f) bg_dt_sta_title_pane_g

0xc8e5,	// (0x00038188) bg_dt_sta_indi_pane_g1

0x1849,	// (0x0002d0ec) dt_sta_signal_pane_g1

0x1851,	// (0x0002d0f4) dt_sta_signal_pane_g2

0x0001,

0xfe93,	// (0x0003b736) dt_sta_signal_pane_g

0x0bd7,	// (0x0002c47a) dt_sta_battery_pane_g1

0x0be0,	// (0x0002c483) dt_sta_battery_pane_t1

0xc8e5,	// (0x00038188) bg_dt_sta_control_pane_g1

0x866e,	// (0x00033f11) fep_china_uni_eep_pane

0x8676,	// (0x00033f19) fep_china_uni_entry_pane_ParamLimits

0x8686,	// (0x00033f29) popup_fep_china_uni_window_g1_ParamLimits

0x8696,	// (0x00033f39) popup_fep_china_uni_window_g2_ParamLimits

0x8696,	// (0x00033f39) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0003afc5) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0003afc5) popup_fep_china_uni_window_g

0x0bef,	// (0x0002c492) fep_china_uni_eep_pane_g1

0x0bf7,	// (0x0002c49a) fep_china_uni_eep_pane_t1

0x0a1c,	// (0x0002c2bf) aid_touch_area_size_smil_player

0xaa53,	// (0x000362f6) lc0_clock_pane

0xaa98,	// (0x0003633b) status_pane_g5_ParamLimits

0xaa98,	// (0x0003633b) status_pane_g5

0x8f01,	// (0x000347a4) popup_keymap_window

0xaa6c,	// (0x0003630f) status_icon_pane

0x15fa,	// (0x0002ce9d) cell_ai5_widget_pane_g3_ParamLimits

0x1614,	// (0x0002ceb7) cell_ai5_widget_pane_g4_ParamLimits

0x1624,	// (0x0002cec7) cell_ai5_widget_pane_g5_ParamLimits

0x164c,	// (0x0002ceef) cell_ai5_widget_pane_g8_ParamLimits

0x164c,	// (0x0002ceef) cell_ai5_widget_pane_g8

0x1660,	// (0x0002cf03) cell_ai5_widget_pane_g9_ParamLimits

0x1660,	// (0x0002cf03) cell_ai5_widget_pane_g9

0x1674,	// (0x0002cf17) cell_ai5_widget_pane_g10_ParamLimits

0x1674,	// (0x0002cf17) cell_ai5_widget_pane_g10

0x0c06,	// (0x0002c4a9) status_icon_pane_g1

0x7488,	// (0x00032d2b) bg_popup_sub_pane_cp13

0x0c0e,	// (0x0002c4b1) popup_keymap_window_t1

0xe13b,	// (0x000399de) control_pane_g6_ParamLimits

0xe13b,	// (0x000399de) control_pane_g6

0xe148,	// (0x000399eb) control_pane_g7_ParamLimits

0xe148,	// (0x000399eb) control_pane_g7

0xe155,	// (0x000399f8) control_pane_g8_ParamLimits

0xe155,	// (0x000399f8) control_pane_g8

0x17ab,	// (0x0002d04e) dt_sta_controll_pane_ParamLimits

0x17b8,	// (0x0002d05b) dt_sta_indi_pane_ParamLimits

0x17c9,	// (0x0002d06c) dt_sta_title_pane_ParamLimits

0x7d70,	// (0x00033613) aid_size_touch_scroll_bar_cale

0x766f,	// (0x00032f12) popup_discreet_window_ParamLimits

0x766f,	// (0x00032f12) popup_discreet_window

0x76d3,	// (0x00032f76) popup_sk_window

0xb128,	// (0x000369cb) bg_popup_sub_pane_cp28_ParamLimits

0xb128,	// (0x000369cb) bg_popup_sub_pane_cp28

0x0c1c,	// (0x0002c4bf) popup_discreet_window_g1_ParamLimits

0x0c1c,	// (0x0002c4bf) popup_discreet_window_g1

0x0c3c,	// (0x0002c4df) popup_discreet_window_t1_ParamLimits

0x0c3c,	// (0x0002c4df) popup_discreet_window_t1

0x0c5a,	// (0x0002c4fd) popup_discreet_window_t2_ParamLimits

0x0c5a,	// (0x0002c4fd) popup_discreet_window_t2

0x0002,

0xfe98,	// (0x0003b73b) popup_discreet_window_t_ParamLimits

0xfe98,	// (0x0003b73b) popup_discreet_window_t

0xa37a,	// (0x00035c1d) popup_sk_window_g1

0xa383,	// (0x00035c26) popup_sk_window_g2

0x0001,

0xfe9f,	// (0x0003b742) popup_sk_window_g

0xa38c,	// (0x00035c2f) popup_sk_window_t1

0xa39a,	// (0x00035c3d) popup_sk_window_t1_copy1

0x15e6,	// (0x0002ce89) cell_ai5_widget_pane_g2_ParamLimits

0x172c,	// (0x0002cfcf) cell_ai5_widget_pane_t9_ParamLimits

0x172c,	// (0x0002cfcf) cell_ai5_widget_pane_t9

0x7488,	// (0x00032d2b) main_fep_fshwr2_pane

0xa3a8,	// (0x00035c4b) aid_fshwr2_btn_pane

0xa3b4,	// (0x00035c57) aid_fshwr2_syb_pane

0xa3c6,	// (0x00035c69) aid_fshwr2_txt_pane

0xa3d2,	// (0x00035c75) fshwr2_func_candi_pane

0xa3e6,	// (0x00035c89) fshwr2_hwr_syb_pane

0xa3f8,	// (0x00035c9b) fshwr2_icf_pane

0x7488,	// (0x00032d2b) fshwr2_icf_bg_pane

0xa420,	// (0x00035cc3) fshwr2_icf_pane_t1_ParamLimits

0xa420,	// (0x00035cc3) fshwr2_icf_pane_t1

0x853e,	// (0x00033de1) fshwr2_func_candi_pane_g1

0x1859,	// (0x0002d0fc) fshwr2_func_candi_row_pane_ParamLimits

0x1859,	// (0x0002d0fc) fshwr2_func_candi_row_pane

0xa438,	// (0x00035cdb) cell_fshwr2_syb_pane_ParamLimits

0xa438,	// (0x00035cdb) cell_fshwr2_syb_pane

0x09f5,	// (0x0002c298) fshwr2_hwr_syb_pane_g1_ParamLimits

0x09f5,	// (0x0002c298) fshwr2_hwr_syb_pane_g1

0x7488,	// (0x00032d2b) bg_popup_call_pane_cp01

0xa457,	// (0x00035cfa) fshwr2_func_candi_cell_pane_ParamLimits

0xa457,	// (0x00035cfa) fshwr2_func_candi_cell_pane

0xb710,	// (0x00036fb3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xb710,	// (0x00036fb3) fshwr2_func_candi_cell_bg_pane

0xa496,	// (0x00035d39) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa496,	// (0x00035d39) fshwr2_func_candi_cell_pane_g1

0xa4b6,	// (0x00035d59) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa4b6,	// (0x00035d59) fshwr2_func_candi_cell_pane_t1

0x7488,	// (0x00032d2b) bg_button_pane_cp08

0x8db4,	// (0x00034657) cell_fshwr2_syb_bg_pane

0xa4c9,	// (0x00035d6c) cell_fshwr2_syb_bg_pane_g1

0xa4dd,	// (0x00035d80) cell_fshwr2_syb_bg_pane_t1

0x7ede,	// (0x00033781) main_tmo_pane

0xe5a1,	// (0x00039e44) uni_indicator_pane_g1_ParamLimits

0xe5b7,	// (0x00039e5a) uni_indicator_pane_g2_ParamLimits

0xe5cd,	// (0x00039e70) uni_indicator_pane_g3_ParamLimits

0xbae9,	// (0x0003738c) uni_indicator_pane_g4_ParamLimits

0xbae9,	// (0x0003738c) uni_indicator_pane_g4

0xbafd,	// (0x000373a0) uni_indicator_pane_g5_ParamLimits

0xbafd,	// (0x000373a0) uni_indicator_pane_g5

0xbafd,	// (0x000373a0) uni_indicator_pane_g6_ParamLimits

0xbafd,	// (0x000373a0) uni_indicator_pane_g6

0xf921,	// (0x0003b1c4) uni_indicator_pane_g_ParamLimits

0xef17,	// (0x0003a7ba) popup_tmo_note_window_ParamLimits

0xef17,	// (0x0003a7ba) popup_tmo_note_window

0x7ede,	// (0x00033781) fshwr2_bg_pane

0xa4a7,	// (0x00035d4a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa4a7,	// (0x00035d4a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea4,	// (0x0003b747) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea4,	// (0x0003b747) fshwr2_func_candi_cell_pane_g

0xc8e5,	// (0x00038188) bg_popup_window_pane_cp01

0xa4f3,	// (0x00035d96) bg_popup_window_pane_g1_cp01

0x0cac,	// (0x0002c54f) bg_popup_window_pane_cp22_ParamLimits

0x0cac,	// (0x0002c54f) bg_popup_window_pane_cp22

0x0cba,	// (0x0002c55d) listscroll_tmo_link_pane_ParamLimits

0x0cba,	// (0x0002c55d) listscroll_tmo_link_pane

0x0cfa,	// (0x0002c59d) popup_tmo_note_window_g1_ParamLimits

0x0cfa,	// (0x0002c59d) popup_tmo_note_window_g1

0x0d07,	// (0x0002c5aa) tmo_note_info_pane_ParamLimits

0x0d07,	// (0x0002c5aa) tmo_note_info_pane

0x187c,	// (0x0002d11f) list_tmo_note_info_pane_g1_ParamLimits

0x187c,	// (0x0002d11f) list_tmo_note_info_pane_g1

0x0d21,	// (0x0002c5c4) list_tmo_note_info_pane_g2_ParamLimits

0x0d21,	// (0x0002c5c4) list_tmo_note_info_pane_g2

0x0001,

0xfea9,	// (0x0003b74c) list_tmo_note_info_pane_g_ParamLimits

0xfea9,	// (0x0003b74c) list_tmo_note_info_pane_g

0x0d3d,	// (0x0002c5e0) list_tmo_note_info_text_pane_ParamLimits

0x0d3d,	// (0x0002c5e0) list_tmo_note_info_text_pane

0x0d7f,	// (0x0002c622) list_tmo_link_pane

0x0d8c,	// (0x0002c62f) scroll_pane_cp20

0x0d99,	// (0x0002c63c) list_single_tmo_link_pane_ParamLimits

0x0d99,	// (0x0002c63c) list_single_tmo_link_pane

0x0da9,	// (0x0002c64c) list_single_tmo_link_pane_t1

0x0db7,	// (0x0002c65a) list_tmo_note_info_text_pane_t1_ParamLimits

0x0db7,	// (0x0002c65a) list_tmo_note_info_text_pane_t1

0x7f8c,	// (0x0003382f) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7f8c,	// (0x0003382f) aid_size_touch_scroll_bar_cp01

0x6c04,	// (0x000324a7) aid_size_touch_slider_marker

0x76bf,	// (0x00032f62) popup_settings_window_ParamLimits

0x76bf,	// (0x00032f62) popup_settings_window

0x6dba,	// (0x0003265d) popup_candi_list_indi_window

0xa9b5,	// (0x00036258) aid_touch_navi_pane_ParamLimits

0x9c05,	// (0x000354a8) rs_clock_indi_pane

0x9c0e,	// (0x000354b1) sctrl_sk_bottom_pane_ParamLimits

0x9c1f,	// (0x000354c2) sctrl_sk_top_pane_ParamLimits

0x9d0b,	// (0x000355ae) popup_fep_tooltip_window

0x0a6a,	// (0x0002c30d) aid_size_cell_widget_grid_ParamLimits

0x15d2,	// (0x0002ce75) cell_ai5_widget_pane_g1_ParamLimits

0x15d2,	// (0x0002ce75) cell_ai5_widget_pane_g1

0x1634,	// (0x0002ced7) cell_ai5_widget_pane_g6_ParamLimits

0x1640,	// (0x0002cee3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe27,	// (0x0003b6ca) cell_ai5_widget_pane_g_ParamLimits

0xfe27,	// (0x0003b6ca) cell_ai5_widget_pane_g

0x175b,	// (0x0002cffe) cell_ai5_widget_pane_t10_ParamLimits

0x175b,	// (0x0002cffe) cell_ai5_widget_pane_t10

0x1779,	// (0x0002d01c) grid_ai5_widget_pane_ParamLimits

0x0b46,	// (0x0002c3e9) cell_contacts_ai5_widget_pane_ParamLimits

0x0b46,	// (0x0002c3e9) cell_contacts_ai5_widget_pane

0x0c6f,	// (0x0002c512) popup_discreet_window_t3_ParamLimits

0x0c6f,	// (0x0002c512) popup_discreet_window_t3

0xa40e,	// (0x00035cb1) popup_fshwr2_char_preview_window_ParamLimits

0xa40e,	// (0x00035cb1) popup_fshwr2_char_preview_window

0x1893,	// (0x0002d136) tmo_note_info_pane_t1

0x18a8,	// (0x0002d14b) tmo_note_info_pane_t2

0x18bd,	// (0x0002d160) tmo_note_info_pane_t3

0x0d5b,	// (0x0002c5fe) tmo_note_info_pane_t4

0x0d6d,	// (0x0002c610) tmo_note_info_pane_t5

0x0004,

0xfeae,	// (0x0003b751) tmo_note_info_pane_t

0x0d7f,	// (0x0002c622) list_tmo_link_pane_ParamLimits

0x0d8c,	// (0x0002c62f) scroll_pane_cp20_ParamLimits

0x7488,	// (0x00032d2b) bg_popup_fep_char_preview_window_cp01

0x0dd0,	// (0x0002c673) popup_fshwr2_char_preview_window_t1

0x0dde,	// (0x0002c681) popup_candi_list_indi_window_g1

0x0de7,	// (0x0002c68a) bg_cell_contacts_ai5_widget_pane

0x0df3,	// (0x0002c696) cell_contacts_ai5_widget_pane_g1

0x0e08,	// (0x0002c6ab) cell_contacts_ai5_widget_pane_g2

0x0e14,	// (0x0002c6b7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb9,	// (0x0003b75c) cell_contacts_ai5_widget_pane_g

0x0e20,	// (0x0002c6c3) cell_contacts_ai5_widget_pane_t1

0x7ede,	// (0x00033781) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1935,	// (0x0002d1d8) settings_container_pane

0xa7d0,	// (0x00036073) listscroll_set_pane_copy1

0xc221,	// (0x00037ac4) scroll_pane_cp121_copy1

0x0e32,	// (0x0002c6d5) set_content_pane_copy1

0x0e3a,	// (0x0002c6dd) aid_height_set_list_copy1_ParamLimits

0x0e3a,	// (0x0002c6dd) aid_height_set_list_copy1

0xbc96,	// (0x00037539) aid_size_parent_copy1_ParamLimits

0xbc96,	// (0x00037539) aid_size_parent_copy1

0x0e46,	// (0x0002c6e9) button_value_adjust_pane_cp6_copy1_ParamLimits

0x0e46,	// (0x0002c6e9) button_value_adjust_pane_cp6_copy1

0x8db4,	// (0x00034657) list_highlight_pane_cp2_copy1_ParamLimits

0x8db4,	// (0x00034657) list_highlight_pane_cp2_copy1

0x1941,	// (0x0002d1e4) list_set_pane_copy1_ParamLimits

0x1941,	// (0x0002d1e4) list_set_pane_copy1

0x18d2,	// (0x0002d175) main_pane_set_t1_copy1_ParamLimits

0x18d2,	// (0x0002d175) main_pane_set_t1_copy1

0x190c,	// (0x0002d1af) main_pane_set_t2_copy1_ParamLimits

0x190c,	// (0x0002d1af) main_pane_set_t2_copy1

0x0e5a,	// (0x0002c6fd) main_pane_set_t3_copy1

0x0e68,	// (0x0002c70b) main_pane_set_t4_copy1

0x1929,	// (0x0002d1cc) set_content_pane_g1_copy1_ParamLimits

0x1929,	// (0x0002d1cc) set_content_pane_g1_copy1

0x0e76,	// (0x0002c719) setting_code_pane_copy1

0x0e7e,	// (0x0002c721) setting_slider_graphic_pane_copy1

0x0e7e,	// (0x0002c721) setting_slider_pane_copy1

0x0e7e,	// (0x0002c721) setting_text_pane_copy1

0x0e7e,	// (0x0002c721) setting_volume_pane_copy1

0x0e86,	// (0x0002c729) settings_code_pane_cp2_copy1

0x0e8e,	// (0x0002c731) settings_code_pane_cp_copy1_ParamLimits

0x0e8e,	// (0x0002c731) settings_code_pane_cp_copy1

0xa4fc,	// (0x00035d9f) volume_set_pane_copy1

0x19cf,	// (0x0002d272) volume_set_pane_g10_copy1

0x19d7,	// (0x0002d27a) volume_set_pane_g1_copy1

0x19df,	// (0x0002d282) volume_set_pane_g2_copy1

0x19e7,	// (0x0002d28a) volume_set_pane_g3_copy1

0x19ef,	// (0x0002d292) volume_set_pane_g4_copy1

0x19f7,	// (0x0002d29a) volume_set_pane_g5_copy1

0x19ff,	// (0x0002d2a2) volume_set_pane_g6_copy1

0x1a07,	// (0x0002d2aa) volume_set_pane_g7_copy1

0x1a0f,	// (0x0002d2b2) volume_set_pane_g8_copy1

0x1a17,	// (0x0002d2ba) volume_set_pane_g9_copy1

0x77e5,	// (0x00033088) bg_set_opt_pane_cp_copy1_ParamLimits

0x77e5,	// (0x00033088) bg_set_opt_pane_cp_copy1

0x7803,	// (0x000330a6) setting_slider_pane_t1_copy1_ParamLimits

0x7803,	// (0x000330a6) setting_slider_pane_t1_copy1

0xa504,	// (0x00035da7) setting_slider_pane_t2_copy1_ParamLimits

0xa504,	// (0x00035da7) setting_slider_pane_t2_copy1

0xa51d,	// (0x00035dc0) setting_slider_pane_t3_copy1_ParamLimits

0xa51d,	// (0x00035dc0) setting_slider_pane_t3_copy1

0x7849,	// (0x000330ec) slider_set_pane_copy1_ParamLimits

0x7849,	// (0x000330ec) slider_set_pane_copy1

0x7f2d,	// (0x000337d0) set_opt_bg_pane_g1_copy2

0x7f35,	// (0x000337d8) set_opt_bg_pane_g2_copy2

0x0ea2,	// (0x0002c745) set_opt_bg_pane_g3_copy2

0x7f45,	// (0x000337e8) set_opt_bg_pane_g4_copy2

0x7f4d,	// (0x000337f0) set_opt_bg_pane_g5_copy2

0x7f55,	// (0x000337f8) set_opt_bg_pane_g6_copy2

0x1a1f,	// (0x0002d2c2) set_opt_bg_pane_g7_copy2

0x0eaa,	// (0x0002c74d) set_opt_bg_pane_g8_copy2

0x0eb2,	// (0x0002c755) set_opt_bg_pane_g9_copy2

0x9519,	// (0x00034dbc) aid_size_touch_slider_mark_copy1_ParamLimits

0x9519,	// (0x00034dbc) aid_size_touch_slider_mark_copy1

0xbca8,	// (0x0003754b) slider_set_pane_g1_copy1

0xbcb1,	// (0x00037554) slider_set_pane_g2_copy1

0x9539,	// (0x00034ddc) slider_set_pane_g3_copy1_ParamLimits

0x9539,	// (0x00034ddc) slider_set_pane_g3_copy1

0x954d,	// (0x00034df0) slider_set_pane_g4_copy1_ParamLimits

0x954d,	// (0x00034df0) slider_set_pane_g4_copy1

0x9565,	// (0x00034e08) slider_set_pane_g5_copy1_ParamLimits

0x9565,	// (0x00034e08) slider_set_pane_g5_copy1

0x9539,	// (0x00034ddc) slider_set_pane_g6_copy1_ParamLimits

0x9539,	// (0x00034ddc) slider_set_pane_g6_copy1

0xa534,	// (0x00035dd7) slider_set_pane_g7_copy1_ParamLimits

0xa534,	// (0x00035dd7) slider_set_pane_g7_copy1

0x7651,	// (0x00032ef4) bg_set_opt_pane_cp2_copy1

0x785f,	// (0x00033102) setting_slider_graphic_pane_g1_copy1

0xa54a,	// (0x00035ded) setting_slider_graphic_pane_t1_copy1

0xa559,	// (0x00035dfc) setting_slider_graphic_pane_t2_copy1

0xa568,	// (0x00035e0b) slider_set_pane_cp_copy1

0x0ec2,	// (0x0002c765) input_focus_pane_cp1_copy1

0x0ecb,	// (0x0002c76e) list_set_text_pane_copy1

0x0ed3,	// (0x0002c776) setting_text_pane_g1_copy1

0x7468,	// (0x00032d0b) set_text_pane_t1_copy1

0x0ec2,	// (0x0002c765) input_focus_pane_cp2_copy1

0x0ed3,	// (0x0002c776) setting_code_pane_g1_copy1

0x0ef5,	// (0x0002c798) setting_code_pane_t1_copy1

0xa570,	// (0x00035e13) list_set_graphic_pane_copy1

0x7651,	// (0x00032ef4) bg_set_opt_pane_cp4_copy1

0x0f03,	// (0x0002c7a6) list_set_graphic_pane_g1_copy1_ParamLimits

0x0f03,	// (0x0002c7a6) list_set_graphic_pane_g1_copy1

0x0f0f,	// (0x0002c7b2) list_set_graphic_pane_g2_copy1

0x8956,	// (0x000341f9) list_set_graphic_pane_t1_copy1_ParamLimits

0x8956,	// (0x000341f9) list_set_graphic_pane_t1_copy1

0xc8e5,	// (0x00038188) rs_clock_indi_pane_g1

0x0f17,	// (0x0002c7ba) rs_clock_indi_pane_t1

0x0f25,	// (0x0002c7c8) rs_indi_pane

0x0f2d,	// (0x0002c7d0) rs_indi_pane_g1

0x0f36,	// (0x0002c7d9) rs_indi_pane_g2

0x0dde,	// (0x0002c681) rs_indi_pane_g3

0x0002,

0xfec0,	// (0x0003b763) rs_indi_pane_g

0xa7d0,	// (0x00036073) bg_popup_preview_window_pane_cp03

0x0f3f,	// (0x0002c7e2) popup_fep_tooltip_window_t1

0xd226,	// (0x00038ac9) popup_note2_window_g2_ParamLimits

0xd226,	// (0x00038ac9) popup_note2_window_g2

0x0001,

0xfc60,	// (0x0003b503) popup_note2_window_g_ParamLimits

0xfc60,	// (0x0003b503) popup_note2_window_g

0xd6a1,	// (0x00038f44) bg_popup_sub_pane_cp11_ParamLimits

0xd6ae,	// (0x00038f51) cell_ai3_links_pane_g1_ParamLimits

0xd6c5,	// (0x00038f68) cell_ai3_links_pane_t1

0x7468,	// (0x00032d0b) set_text_pane_t1_copy1_ParamLimits

0x8b02,	// (0x000343a5) cell_graphic_popup_pane_cp2_ParamLimits

0x8b02,	// (0x000343a5) cell_graphic_popup_pane_cp2

0x0f4d,	// (0x0002c7f0) cell_graphic_popup_pane_g1_cp2

0x7c1f,	// (0x000334c2) cell_graphic_popup_pane_g2_cp2

0x0f55,	// (0x0002c7f8) cell_graphic_popup_pane_g3_cp2

0x0f5d,	// (0x0002c800) cell_graphic_popup_pane_t2_cp2

0x7c30,	// (0x000334d3) grid_highlight_pane_cp3_cp2

0x833b,	// (0x00033bde) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7ede,	// (0x00033781) main_tmo_pane_ParamLimits

0xef0f,	// (0x0003a7b2) popup_tmo_big_image_note_window

0x0aa7,	// (0x0002c34a) cell_ai5_widget_list_pane

0x15c9,	// (0x0002ce6c) cell_ai5_widget_lrg_icon_pane

0x1893,	// (0x0002d136) tmo_note_info_pane_t1_ParamLimits

0x18a8,	// (0x0002d14b) tmo_note_info_pane_t2_ParamLimits

0x18bd,	// (0x0002d160) tmo_note_info_pane_t3_ParamLimits

0x0d5b,	// (0x0002c5fe) tmo_note_info_pane_t4_ParamLimits

0x0d6d,	// (0x0002c610) tmo_note_info_pane_t5_ParamLimits

0xfeae,	// (0x0003b751) tmo_note_info_pane_t_ParamLimits

0x1935,	// (0x0002d1d8) settings_container_pane_ParamLimits

0x0eba,	// (0x0002c75d) indicator_popup_pane_cp5

0x0eba,	// (0x0002c75d) indicator_popup_pane_cp6

0xa570,	// (0x00035e13) list_set_graphic_pane_copy1_ParamLimits

0x7488,	// (0x00032d2b) bg_popup_window_pane_cp23

0x0f6b,	// (0x0002c80e) popup_tmo_big_image_note_window_g1

0x0f74,	// (0x0002c817) popup_tmo_big_image_note_window_t1

0x0f82,	// (0x0002c825) popup_tmo_big_image_note_window_t2

0x0f90,	// (0x0002c833) popup_tmo_big_image_note_window_t3

0x0002,

0xfec7,	// (0x0003b76a) popup_tmo_big_image_note_window_t

0xc8e5,	// (0x00038188) cell_ai5_widget_lrg_icon_pane_g1

0x0f9e,	// (0x0002c841) cell_ai5_widget_lrg_icon_pane_t1

0xa584,	// (0x00035e27) cell_ai5_widget_list_row_pane_ParamLimits

0xa584,	// (0x00035e27) cell_ai5_widget_list_row_pane

0xa59b,	// (0x00035e3e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa59b,	// (0x00035e3e) cell_ai5_widget_list_row_pane_g1

0xa5a8,	// (0x00035e4b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa5a8,	// (0x00035e4b) cell_ai5_widget_list_row_pane_t1

0xa5d6,	// (0x00035e79) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa5d6,	// (0x00035e79) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfece,	// (0x0003b771) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfece,	// (0x0003b771) cell_ai5_widget_list_row_pane_t

0x7488,	// (0x00032d2b) main_fep_vtchi_ss_pane

0x0fcc,	// (0x0002c86f) popup_fep_char_pre_window

0x0fd4,	// (0x0002c877) popup_fep_ituss_window

0xa60d,	// (0x00035eb0) popup_fep_vkbss_window

0x0ffc,	// (0x0002c89f) grid_vkbss_keypad_pane_ParamLimits

0x0ffc,	// (0x0002c89f) grid_vkbss_keypad_pane

0x100c,	// (0x0002c8af) ituss_keypad_pane

0xa624,	// (0x00035ec7) aid_vkbss_key_offset_ParamLimits

0xa624,	// (0x00035ec7) aid_vkbss_key_offset

0xa630,	// (0x00035ed3) cell_vkbss_key_pane_ParamLimits

0xa630,	// (0x00035ed3) cell_vkbss_key_pane

0xaa74,	// (0x00036317) bg_cell_vkbss_key_g1_ParamLimits

0xaa74,	// (0x00036317) bg_cell_vkbss_key_g1

0x101b,	// (0x0002c8be) cell_vkbss_key_3p_pane_ParamLimits

0x101b,	// (0x0002c8be) cell_vkbss_key_3p_pane

0x1035,	// (0x0002c8d8) cell_vkbss_key_g1_ParamLimits

0x1035,	// (0x0002c8d8) cell_vkbss_key_g1

0x104f,	// (0x0002c8f2) cell_vkbss_key_t1_ParamLimits

0x104f,	// (0x0002c8f2) cell_vkbss_key_t1

0xa646,	// (0x00035ee9) cell_ituss_key_pane_ParamLimits

0xa646,	// (0x00035ee9) cell_ituss_key_pane

0x107a,	// (0x0002c91d) bg_cell_ituss_key_g1_ParamLimits

0x107a,	// (0x0002c91d) bg_cell_ituss_key_g1

0x1086,	// (0x0002c929) cell_ituss_key_pane_g1_ParamLimits

0x1086,	// (0x0002c929) cell_ituss_key_pane_g1

0xa657,	// (0x00035efa) cell_ituss_key_pane_g2_ParamLimits

0xa657,	// (0x00035efa) cell_ituss_key_pane_g2

0x0002,

0xfed5,	// (0x0003b778) cell_ituss_key_pane_g_ParamLimits

0xfed5,	// (0x0003b778) cell_ituss_key_pane_g

0xa683,	// (0x00035f26) cell_ituss_key_t1_ParamLimits

0xa683,	// (0x00035f26) cell_ituss_key_t1

0xa6b9,	// (0x00035f5c) cell_ituss_key_t2_ParamLimits

0xa6b9,	// (0x00035f5c) cell_ituss_key_t2

0xa6ea,	// (0x00035f8d) cell_ituss_key_t3_ParamLimits

0xa6ea,	// (0x00035f8d) cell_ituss_key_t3

0xa6b9,	// (0x00035f5c) cell_ituss_key_t4_ParamLimits

0xa6b9,	// (0x00035f5c) cell_ituss_key_t4

0x0004,

0xfedc,	// (0x0003b77f) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x0003b77f) cell_ituss_key_t

0x10bc,	// (0x0002c95f) cell_vkbss_key_3p_pane_g1

0x10b4,	// (0x0002c957) cell_vkbss_key_3p_pane_g2

0x10ac,	// (0x0002c94f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0003b78a) cell_vkbss_key_3p_pane_g

0xa7d0,	// (0x00036073) bg_popup_fep_char_preview_window_cp02

0x10c4,	// (0x0002c967) popup_fep_char_pre_window_t1

0x15b6,	// (0x0002ce59) main_ai5_sk_pane

0x0de7,	// (0x0002c68a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x0df3,	// (0x0002c696) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x0e08,	// (0x0002c6ab) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x0e14,	// (0x0002c6b7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb9,	// (0x0003b75c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x0e20,	// (0x0002c6c3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7ede,	// (0x00033781) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xa72d,	// (0x00035fd0) main_ai5_sk_pane_g1

0xaf72,	// (0x00036815) popup_query_code_window_g1

0xa5fe,	// (0x00035ea1) popup_fep_vkb_icf_pane

0x0fe6,	// (0x0002c889) popup_fep_vtchi_icf_pane

0x10d2,	// (0x0002c975) bg_icf_pane

0x10de,	// (0x0002c981) list_vkb_icf_pane

0x10ea,	// (0x0002c98d) bg_icf_pane_cp01

0x10fd,	// (0x0002c9a0) vtchi_icf_list_pane

0xa736,	// (0x00035fd9) list_vkb_icf_pane_t1_ParamLimits

0xa736,	// (0x00035fd9) list_vkb_icf_pane_t1

0x110d,	// (0x0002c9b0) vtchi_icf_list_pane_t1_ParamLimits

0x110d,	// (0x0002c9b0) vtchi_icf_list_pane_t1

0x0fd4,	// (0x0002c877) popup_fep_ituss_window_ParamLimits

0x0fe6,	// (0x0002c889) popup_fep_vtchi_icf_pane_ParamLimits

0x100c,	// (0x0002c8af) ituss_keypad_pane_ParamLimits

0xa61a,	// (0x00035ebd) ituss_sks_pane

0x10d2,	// (0x0002c975) bg_icf_pane_ParamLimits

0x0fac,	// (0x0002c84f) icf_edit_indi_pane_ParamLimits

0x0fac,	// (0x0002c84f) icf_edit_indi_pane

0x10de,	// (0x0002c981) list_vkb_icf_pane_ParamLimits

0x10ea,	// (0x0002c98d) bg_icf_pane_cp01_ParamLimits

0x0fbf,	// (0x0002c862) icf_edit_indi_pane_cp01_ParamLimits

0x0fbf,	// (0x0002c862) icf_edit_indi_pane_cp01

0x1105,	// (0x0002c9a8) vtchi_query_pane

0x09f5,	// (0x0002c298) icf_edit_indi_pane_g1_ParamLimits

0x09f5,	// (0x0002c298) icf_edit_indi_pane_g1

0xa75a,	// (0x00035ffd) icf_edit_indi_pane_g2_ParamLimits

0xa75a,	// (0x00035ffd) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0003b7a2) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0003b7a2) icf_edit_indi_pane_g

0xa76a,	// (0x0003600d) icf_edit_indi_pane_t1

0x1124,	// (0x0002c9c7) bg_input_focus_pane_cp042

0x112d,	// (0x0002c9d0) vtchi_button_pane

0x1136,	// (0x0002c9d9) vtchi_query_pane_t1

0x1144,	// (0x0002c9e7) vtchi_query_pane_t2

0x1152,	// (0x0002c9f5) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0003b791) vtchi_query_pane_t

0x7488,	// (0x00032d2b) bg_button_pane_cp13

0x1160,	// (0x0002ca03) vtchi_button_pane_g1

0xa748,	// (0x00035feb) ituss_sks_pane_g1

0xa751,	// (0x00035ff4) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0003b798) ituss_sks_pane_g

0x1176,	// (0x0002ca19) ituss_sks_pane_t1

0x1168,	// (0x0002ca0b) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0003b79d) ituss_sks_pane_t

0xc512,	// (0x00037db5) indicator_nsta_pane_cp_g1

0xc51b,	// (0x00037dbe) indicator_nsta_pane_cp_g2

0xc523,	// (0x00037dc6) indicator_nsta_pane_cp_g3

0xc52b,	// (0x00037dce) indicator_nsta_pane_cp_g4

0xc533,	// (0x00037dd6) indicator_nsta_pane_cp_g5

0xc53b,	// (0x00037dde) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0003b34d) indicator_nsta_pane_cp_g

0x13fb,	// (0x0002cc9e) cell_graphic2_pane_t2_ParamLimits

0x13fb,	// (0x0002cc9e) cell_graphic2_pane_t2

0x0001,

0xfdb0,	// (0x0003b653) cell_graphic2_pane_t_ParamLimits

0xfdb0,	// (0x0003b653) cell_graphic2_pane_t

0x1428,	// (0x0002cccb) cell_graphic2_control_pane_t1

0xdf7f,	// (0x00039822) signal_pane_g3_ParamLimits

0xdf7f,	// (0x00039822) signal_pane_g3

0xdf90,	// (0x00039833) signal_pane_g4_ParamLimits

0xdf90,	// (0x00039833) signal_pane_g4

0xa5e8,	// (0x00035e8b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa5e8,	// (0x00035e8b) cell_ai5_widget_list_row_pane_t3

0x109a,	// (0x0002c93d) cell_ituss_key_pane_t1_ParamLimits

0x109a,	// (0x0002c93d) cell_ituss_key_pane_t1

0xac48,	// (0x000364eb) form_field_data_wide_pane_vc_t2_ParamLimits

0xac48,	// (0x000364eb) form_field_data_wide_pane_vc_t2

0xac5a,	// (0x000364fd) form_field_data_wide_pane_vc_t3_ParamLimits

0xac5a,	// (0x000364fd) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0003b0ac) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0003b0ac) form_field_data_wide_pane_vc_t

0xc266,	// (0x00037b09) form_field_slider_wide_pane_vc_t3_ParamLimits

0xc266,	// (0x00037b09) form_field_slider_wide_pane_vc_t3

0xc324,	// (0x00037bc7) form_field_popup_wide_pane_vc_t2_ParamLimits

0xc324,	// (0x00037bc7) form_field_popup_wide_pane_vc_t2

0xc339,	// (0x00037bdc) form_field_popup_wide_pane_vc_t3_ParamLimits

0xc339,	// (0x00037bdc) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0003b33c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0003b33c) form_field_popup_wide_pane_vc_t

0xa3a8,	// (0x00035c4b) aid_fshwr2_btn_pane_ParamLimits

0xa3b4,	// (0x00035c57) aid_fshwr2_syb_pane_ParamLimits

0xa3c6,	// (0x00035c69) aid_fshwr2_txt_pane_ParamLimits

0x7ede,	// (0x00033781) fshwr2_bg_pane_ParamLimits

0xa3d2,	// (0x00035c75) fshwr2_func_candi_pane_ParamLimits

0xa3e6,	// (0x00035c89) fshwr2_hwr_syb_pane_ParamLimits

0xa3f8,	// (0x00035c9b) fshwr2_icf_pane_ParamLimits

0x9764,	// (0x00035007) list_double_graphic_pane_vc_g4_ParamLimits

0x9764,	// (0x00035007) list_double_graphic_pane_vc_g4

0xa677,	// (0x00035f1a) cell_ituss_key_pane_g3_ParamLimits

0xa677,	// (0x00035f1a) cell_ituss_key_pane_g3

0xa71b,	// (0x00035fbe) cell_ituss_key_t5_ParamLimits

0xa71b,	// (0x00035fbe) cell_ituss_key_t5

0xa60d,	// (0x00035eb0) popup_fep_vkbss_window_ParamLimits

0x15c0,	// (0x0002ce63) aid_cell_ai5_quarter

0xa76a,	// (0x0003600d) icf_edit_indi_pane_t1_ParamLimits

0x7a60,	// (0x00033303) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7a60,	// (0x00033303) aid_tch_indicator_popup_pane_cp2

0x7a73,	// (0x00033316) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7a73,	// (0x00033316) aid_tch_query_popup_data_pane_cp2

0xaf1a,	// (0x000367bd) aid_tch_query_popup_pane_ParamLimits

0xaf1a,	// (0x000367bd) aid_tch_query_popup_pane

0xaf1a,	// (0x000367bd) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xaf1a,	// (0x000367bd) aid_tch_query_popup_data_pane_cp1

0x8db4,	// (0x00034657) cell_fshwr2_syb_bg_pane_ParamLimits

0xa4c9,	// (0x00035d6c) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xa4dd,	// (0x00035d80) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xa5fe,	// (0x00035ea1) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large

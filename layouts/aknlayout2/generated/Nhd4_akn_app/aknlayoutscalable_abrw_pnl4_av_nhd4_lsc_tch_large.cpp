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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00047229 };

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
0x93b6,	// (0x000505df) Screen

0x93c2,	// (0x000505eb) application_window_ParamLimits

0x93c2,	// (0x000505eb) application_window

0xadc8,	// (0x00051ff1) screen_g1

0x7d1a,	// (0x0004ef43) area_bottom_pane_ParamLimits

0x7d1a,	// (0x0004ef43) area_bottom_pane

0x0507,	// (0x00047730) area_top_pane_ParamLimits

0x0507,	// (0x00047730) area_top_pane

0x05a5,	// (0x000477ce) main_pane_ParamLimits

0x05a5,	// (0x000477ce) main_pane

0xadd2,	// (0x00051ffb) misc_graphics

0xa2c4,	// (0x000514ed) battery_pane_ParamLimits

0xa2c4,	// (0x000514ed) battery_pane

0xd524,	// (0x0005474d) bg_status_flat_pane_g8

0xd52c,	// (0x00054755) bg_status_flat_pane_g9

0xcc9a,	// (0x00053ec3) context_pane_ParamLimits

0xcc9a,	// (0x00053ec3) context_pane

0xa42f,	// (0x00051658) navi_pane_ParamLimits

0xa42f,	// (0x00051658) navi_pane

0xa4a7,	// (0x000516d0) signal_pane_ParamLimits

0xa4a7,	// (0x000516d0) signal_pane

0x0008,

0xf87a,	// (0x00056aa3) bg_status_flat_pane_g

0xa537,	// (0x00051760) status_pane_g1_ParamLimits

0xa537,	// (0x00051760) status_pane_g1

0xa54d,	// (0x00051776) status_pane_g2_ParamLimits

0xa54d,	// (0x00051776) status_pane_g2

0xcd11,	// (0x00053f3a) status_pane_g3_ParamLimits

0xcd11,	// (0x00053f3a) status_pane_g3

0x0004,

0xf7a6,	// (0x000569cf) status_pane_g_ParamLimits

0xf7a6,	// (0x000569cf) status_pane_g

0xa559,	// (0x00051782) title_pane_ParamLimits

0xa559,	// (0x00051782) title_pane

0xa5bc,	// (0x000517e5) uni_indicator_pane_ParamLimits

0xa5bc,	// (0x000517e5) uni_indicator_pane

0xcbdd,	// (0x00053e06) bg_list_pane_ParamLimits

0xcbdd,	// (0x00053e06) bg_list_pane

0x34f6,	// (0x0004a71f) find_pane

0xa233,	// (0x0005145c) listscroll_app_pane_ParamLimits

0xa233,	// (0x0005145c) listscroll_app_pane

0xcbfd,	// (0x00053e26) listscroll_form_pane

0x1448,	// (0x00048671) listscroll_gen_pane_ParamLimits

0x1448,	// (0x00048671) listscroll_gen_pane

0xcbfd,	// (0x00053e26) listscroll_set_pane

0xccde,	// (0x00053f07) main_idle_act_pane

0xc9c1,	// (0x00053bea) main_idle_trad_pane

0xc9c1,	// (0x00053bea) main_list_empty_pane

0xc155,	// (0x0005337e) main_midp_pane

0xcc17,	// (0x00053e40) main_pane_g1_ParamLimits

0xcc17,	// (0x00053e40) main_pane_g1

0x853e,	// (0x0004f767) popup_ai_message_window_ParamLimits

0x853e,	// (0x0004f767) popup_ai_message_window

0x85cf,	// (0x0004f7f8) popup_fep_china_uni_window_ParamLimits

0x85cf,	// (0x0004f7f8) popup_fep_china_uni_window

0x1568,	// (0x00048791) popup_fep_japan_candidate_window_ParamLimits

0x1568,	// (0x00048791) popup_fep_japan_candidate_window

0x1586,	// (0x000487af) popup_fep_japan_predictive_window_ParamLimits

0x1586,	// (0x000487af) popup_fep_japan_predictive_window

0x8629,	// (0x0004f852) popup_find_window

0x8646,	// (0x0004f86f) popup_grid_graphic_window_ParamLimits

0x8646,	// (0x0004f86f) popup_grid_graphic_window

0x15eb,	// (0x00048814) popup_large_graphic_colour_window

0x86de,	// (0x0004f907) popup_menu_window_ParamLimits

0x86de,	// (0x0004f907) popup_menu_window

0x88aa,	// (0x0004fad3) popup_note_image_window

0x8870,	// (0x0004fa99) popup_note_wait_window_ParamLimits

0x8870,	// (0x0004fa99) popup_note_wait_window

0x88c2,	// (0x0004faeb) popup_note_window_ParamLimits

0x88c2,	// (0x0004faeb) popup_note_window

0x8968,	// (0x0004fb91) popup_query_code_window_ParamLimits

0x8968,	// (0x0004fb91) popup_query_code_window

0x1835,	// (0x00048a5e) popup_query_data_code_window_ParamLimits

0x1835,	// (0x00048a5e) popup_query_data_code_window

0x89a2,	// (0x0004fbcb) popup_query_data_window_ParamLimits

0x89a2,	// (0x0004fbcb) popup_query_data_window

0x8a1e,	// (0x0004fc47) popup_query_sat_info_window_ParamLimits

0x8a1e,	// (0x0004fc47) popup_query_sat_info_window

0x8ab5,	// (0x0004fcde) popup_snote_single_graphic_window_ParamLimits

0x8ab5,	// (0x0004fcde) popup_snote_single_graphic_window

0x8ab5,	// (0x0004fcde) popup_snote_single_text_window_ParamLimits

0x8ab5,	// (0x0004fcde) popup_snote_single_text_window

0x18b8,	// (0x00048ae1) popup_sub_window_general

0x19e6,	// (0x00048c0f) popup_window_general_ParamLimits

0x19e6,	// (0x00048c0f) popup_window_general

0xcc25,	// (0x00053e4e) power_save_pane

0x83cd,	// (0x0004f5f6) control_pane_g1_ParamLimits

0x83cd,	// (0x0004f5f6) control_pane_g1

0x83f6,	// (0x0004f61f) control_pane_g2_ParamLimits

0x83f6,	// (0x0004f61f) control_pane_g2

0xcbc7,	// (0x00053df0) control_pane_g3_ParamLimits

0xcbc7,	// (0x00053df0) control_pane_g3

0x0007,

0xf78e,	// (0x000569b7) control_pane_g_ParamLimits

0xf78e,	// (0x000569b7) control_pane_g

0x8437,	// (0x0004f660) control_pane_t1_ParamLimits

0x8437,	// (0x0004f660) control_pane_t1

0x8495,	// (0x0004f6be) control_pane_t2_ParamLimits

0x8495,	// (0x0004f6be) control_pane_t2

0x0002,

0xf79f,	// (0x000569c8) control_pane_t_ParamLimits

0xf79f,	// (0x000569c8) control_pane_t

0xcae8,	// (0x00053d11) navi_navi_volume_pane_cp1

0xcaf1,	// (0x00053d1a) status_small_icon_pane

0xcaf9,	// (0x00053d22) status_small_pane_g1_ParamLimits

0xcaf9,	// (0x00053d22) status_small_pane_g1

0xcb2d,	// (0x00053d56) status_small_pane_g2_ParamLimits

0xcb2d,	// (0x00053d56) status_small_pane_g2

0xcb39,	// (0x00053d62) status_small_pane_g3_ParamLimits

0xcb39,	// (0x00053d62) status_small_pane_g3

0xcb45,	// (0x00053d6e) status_small_pane_g4_ParamLimits

0xcb45,	// (0x00053d6e) status_small_pane_g4

0xcb51,	// (0x00053d7a) status_small_pane_g5_ParamLimits

0xcb51,	// (0x00053d7a) status_small_pane_g5

0xcb60,	// (0x00053d89) status_small_pane_g6_ParamLimits

0xcb60,	// (0x00053d89) status_small_pane_g6

0x0007,

0xf77d,	// (0x000569a6) status_small_pane_g_ParamLimits

0xf77d,	// (0x000569a6) status_small_pane_g

0xcb90,	// (0x00053db9) status_small_pane_t1

0xcbb3,	// (0x00053ddc) status_small_wait_pane_ParamLimits

0xcbb3,	// (0x00053ddc) status_small_wait_pane

0x98a7,	// (0x00050ad0) aid_levels_signal_ParamLimits

0x98a7,	// (0x00050ad0) aid_levels_signal

0x9aee,	// (0x00050d17) signal_pane_g1_ParamLimits

0x9aee,	// (0x00050d17) signal_pane_g1

0x9b09,	// (0x00050d32) signal_pane_g2_ParamLimits

0x9b09,	// (0x00050d32) signal_pane_g2

0x0003,

0xf70e,	// (0x00056937) signal_pane_g_ParamLimits

0xf70e,	// (0x00056937) signal_pane_g

0xc577,	// (0x000537a0) context_pane_g1

0x93d2,	// (0x000505fb) title_pane_g1

0x9409,	// (0x00050632) title_pane_t1

0xade8,	// (0x00052011) title_pane_t2

0xae0e,	// (0x00052037) title_pane_t3

0x0002,

0xf55d,	// (0x00056786) title_pane_t

0xa5e4,	// (0x0005180d) aid_levels_battery_ParamLimits

0xa5e4,	// (0x0005180d) aid_levels_battery

0xa600,	// (0x00051829) battery_pane_g1_ParamLimits

0xa600,	// (0x00051829) battery_pane_g1

0xa61d,	// (0x00051846) battery_pane_g2_ParamLimits

0xa61d,	// (0x00051846) battery_pane_g2

0x0001,

0xf7b1,	// (0x000569da) battery_pane_g_ParamLimits

0xf7b1,	// (0x000569da) battery_pane_g

0xa8b5,	// (0x00051ade) uni_indicator_pane_g1

0xa8ca,	// (0x00051af3) uni_indicator_pane_g2

0xdd05,	// (0x00054f2e) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x00056b4b) uni_indicator_pane_g

0xc857,	// (0x00053a80) navi_icon_pane_ParamLimits

0xc857,	// (0x00053a80) navi_icon_pane

0xc7db,	// (0x00053a04) navi_midp_pane

0xc873,	// (0x00053a9c) navi_navi_pane

0xc87d,	// (0x00053aa6) navi_text_pane_ParamLimits

0xc87d,	// (0x00053aa6) navi_text_pane

0xadc8,	// (0x00051ff1) status_small_wait_pane_g1

0xb5a8,	// (0x000527d1) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x00056b46) status_small_wait_pane_g

0xda87,	// (0x00054cb0) navi_navi_icon_text_pane

0xda8f,	// (0x00054cb8) navi_navi_pane_g1_ParamLimits

0xda8f,	// (0x00054cb8) navi_navi_pane_g1

0xdaa1,	// (0x00054cca) navi_navi_pane_g2_ParamLimits

0xdaa1,	// (0x00054cca) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x00056b14) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x00056b14) navi_navi_pane_g

0xdab3,	// (0x00054cdc) navi_navi_tabs_pane

0xdabc,	// (0x00054ce5) navi_navi_text_pane

0xda87,	// (0x00054cb0) navi_navi_volume_pane

0xa83e,	// (0x00051a67) navi_text_pane_t1

0xda69,	// (0x00054c92) navi_icon_pane_g1

0xd9d0,	// (0x00054bf9) navi_navi_text_pane_t1

0x8d99,	// (0x0004ffc2) navi_navi_volume_pane_g1

0x8da1,	// (0x0004ffca) volume_small_pane

0xa786,	// (0x000519af) navi_navi_icon_text_pane_g1

0xa78e,	// (0x000519b7) navi_navi_icon_text_pane_t1

0xc873,	// (0x00053a9c) navi_tabs_2_long_pane

0xc873,	// (0x00053a9c) navi_tabs_2_pane

0xc873,	// (0x00053a9c) navi_tabs_3_long_pane

0xc873,	// (0x00053a9c) navi_tabs_3_pane

0xc873,	// (0x00053a9c) navi_tabs_4_pane

0x8d79,	// (0x0004ffa2) tabs_2_active_pane_ParamLimits

0x8d79,	// (0x0004ffa2) tabs_2_active_pane

0x8d89,	// (0x0004ffb2) tabs_2_passive_pane_ParamLimits

0x8d89,	// (0x0004ffb2) tabs_2_passive_pane

0x8d47,	// (0x0004ff70) tabs_3_active_pane_ParamLimits

0x8d47,	// (0x0004ff70) tabs_3_active_pane

0x8d57,	// (0x0004ff80) tabs_3_passive_pane_ParamLimits

0x8d57,	// (0x0004ff80) tabs_3_passive_pane

0x8d68,	// (0x0004ff91) tabs_3_passive_pane_cp_ParamLimits

0x8d68,	// (0x0004ff91) tabs_3_passive_pane_cp

0x8d03,	// (0x0004ff2c) tabs_4_active_pane_ParamLimits

0x8d03,	// (0x0004ff2c) tabs_4_active_pane

0x8d14,	// (0x0004ff3d) tabs_4_passive_pane_ParamLimits

0x8d14,	// (0x0004ff3d) tabs_4_passive_pane

0x8d25,	// (0x0004ff4e) tabs_4_passive_pane_cp_ParamLimits

0x8d25,	// (0x0004ff4e) tabs_4_passive_pane_cp

0x8d36,	// (0x0004ff5f) tabs_4_passive_pane_cp2_ParamLimits

0x8d36,	// (0x0004ff5f) tabs_4_passive_pane_cp2

0x8ce3,	// (0x0004ff0c) tabs_2_long_active_pane_ParamLimits

0x8ce3,	// (0x0004ff0c) tabs_2_long_active_pane

0x8cf3,	// (0x0004ff1c) tabs_2_long_passive_pane_ParamLimits

0x8cf3,	// (0x0004ff1c) tabs_2_long_passive_pane

0x8cae,	// (0x0004fed7) tabs_3_long_active_pane_ParamLimits

0x8cae,	// (0x0004fed7) tabs_3_long_active_pane

0x8cbf,	// (0x0004fee8) tabs_3_long_passive_pane_ParamLimits

0x8cbf,	// (0x0004fee8) tabs_3_long_passive_pane

0x8cd2,	// (0x0004fefb) tabs_3_long_passive_pane_cp_ParamLimits

0x8cd2,	// (0x0004fefb) tabs_3_long_passive_pane_cp

0x1b3d,	// (0x00048d66) volume_small_pane_g1

0x8c5d,	// (0x0004fe86) volume_small_pane_g2

0x8c66,	// (0x0004fe8f) volume_small_pane_g3

0x8c6f,	// (0x0004fe98) volume_small_pane_g4

0x8c78,	// (0x0004fea1) volume_small_pane_g5

0x8c81,	// (0x0004feaa) volume_small_pane_g6

0x8c8a,	// (0x0004feb3) volume_small_pane_g7

0x8c93,	// (0x0004febc) volume_small_pane_g8

0x8c9c,	// (0x0004fec5) volume_small_pane_g9

0x8ca5,	// (0x0004fece) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x00056ae0) volume_small_pane_g

0xae20,	// (0x00052049) bg_active_tab_pane_cp2_ParamLimits

0xae20,	// (0x00052049) bg_active_tab_pane_cp2

0x9495,	// (0x000506be) tabs_3_active_pane_g1

0x949d,	// (0x000506c6) tabs_3_active_pane_t1

0xae20,	// (0x00052049) bg_passive_tab_pane_cp2_ParamLimits

0xae20,	// (0x00052049) bg_passive_tab_pane_cp2

0x9495,	// (0x000506be) tabs_3_passive_pane_g1

0x949d,	// (0x000506c6) tabs_3_passive_pane_t1

0xae20,	// (0x00052049) bg_active_tab_pane_cp3_ParamLimits

0xae20,	// (0x00052049) bg_active_tab_pane_cp3

0x94af,	// (0x000506d8) tabs_4_active_pane_g1

0x94b7,	// (0x000506e0) tabs_4_active_pane_t1

0xae20,	// (0x00052049) bg_passive_tab_pane_cp3_ParamLimits

0xae20,	// (0x00052049) bg_passive_tab_pane_cp3

0x94af,	// (0x000506d8) tabs_4_1_passive_pane_g1

0x94b7,	// (0x000506e0) tabs_4_1_passive_pane_t1

0xc155,	// (0x0005337e) list_highlight_pane_cp2

0xa954,	// (0x00051b7d) list_set_pane_ParamLimits

0xa954,	// (0x00051b7d) list_set_pane

0xa9ee,	// (0x00051c17) main_pane_set_t1_ParamLimits

0xa9ee,	// (0x00051c17) main_pane_set_t1

0xaa0e,	// (0x00051c37) main_pane_set_t2_ParamLimits

0xaa0e,	// (0x00051c37) main_pane_set_t2

0xaa22,	// (0x00051c4b) main_pane_set_t3_ParamLimits

0xaa22,	// (0x00051c4b) main_pane_set_t3

0xaa34,	// (0x00051c5d) main_pane_set_t4_ParamLimits

0xaa34,	// (0x00051c5d) main_pane_set_t4

0x0003,

0xf987,	// (0x00056bb0) main_pane_set_t_ParamLimits

0xf987,	// (0x00056bb0) main_pane_set_t

0xaa46,	// (0x00051c6f) setting_code_pane

0xaa4e,	// (0x00051c77) setting_slider_graphic_pane

0xaa4e,	// (0x00051c77) setting_slider_pane

0xaa4e,	// (0x00051c77) setting_text_pane

0xaa4e,	// (0x00051c77) setting_volume_pane

0x07dc,	// (0x00047a05) volume_set_pane

0xae2e,	// (0x00052057) bg_set_opt_pane_cp

0x07e4,	// (0x00047a0d) setting_slider_pane_t1

0x07fd,	// (0x00047a26) setting_slider_pane_t2

0x0817,	// (0x00047a40) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0005678d) setting_slider_pane_t

0x082f,	// (0x00047a58) slider_set_pane

0xadd2,	// (0x00051ffb) bg_set_opt_pane_cp2

0xae3c,	// (0x00052065) setting_slider_graphic_pane_g1

0x0845,	// (0x00047a6e) setting_slider_graphic_pane_t1

0x0855,	// (0x00047a7e) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00056794) setting_slider_graphic_pane_t

0x0865,	// (0x00047a8e) slider_set_pane_cp

0xadd2,	// (0x00051ffb) input_focus_pane_cp1

0xdee2,	// (0x0005510b) list_set_text_pane

0xadc8,	// (0x00051ff1) setting_text_pane_g1

0xadd2,	// (0x00051ffb) input_focus_pane_cp2

0xadc8,	// (0x00051ff1) setting_code_pane_g1

0xae45,	// (0x0005206e) setting_code_pane_t1

0x086d,	// (0x00047a96) set_text_pane_t1_ParamLimits

0x086d,	// (0x00047a96) set_text_pane_t1

0xba89,	// (0x00052cb2) set_opt_bg_pane_g1

0xba91,	// (0x00052cba) set_opt_bg_pane_g2

0xdec2,	// (0x000550eb) set_opt_bg_pane_g3

0xbaa1,	// (0x00052cca) set_opt_bg_pane_g4

0xc06b,	// (0x00053294) set_opt_bg_pane_g5

0xc073,	// (0x0005329c) set_opt_bg_pane_g6

0xdeca,	// (0x000550f3) set_opt_bg_pane_g7

0xded2,	// (0x000550fb) set_opt_bg_pane_g8

0xdeda,	// (0x00055103) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x00056b9d) set_opt_bg_pane_g

0xdeb5,	// (0x000550de) slider_set_pane_g1

0x1cff,	// (0x00048f28) slider_set_pane_g2

0x0006,

0xf965,	// (0x00056b8e) slider_set_pane_g

0x1c9b,	// (0x00048ec4) volume_set_pane_g1

0x1ca3,	// (0x00048ecc) volume_set_pane_g2

0x1cab,	// (0x00048ed4) volume_set_pane_g3

0x1cb3,	// (0x00048edc) volume_set_pane_g4

0x1cbb,	// (0x00048ee4) volume_set_pane_g5

0x1cc3,	// (0x00048eec) volume_set_pane_g6

0x1ccb,	// (0x00048ef4) volume_set_pane_g7

0x1cd3,	// (0x00048efc) volume_set_pane_g8

0x1cdb,	// (0x00048f04) volume_set_pane_g9

0x1ce3,	// (0x00048f0c) volume_set_pane_g10

0x0009,

0xf93d,	// (0x00056b66) volume_set_pane_g

0x94c9,	// (0x000506f2) indicator_pane_ParamLimits

0x94c9,	// (0x000506f2) indicator_pane

0x94f1,	// (0x0005071a) main_idle_pane_g2_ParamLimits

0x94f1,	// (0x0005071a) main_idle_pane_g2

0x9529,	// (0x00050752) main_pane_idle_g1_ParamLimits

0x9529,	// (0x00050752) main_pane_idle_g1

0xae53,	// (0x0005207c) popup_clock_digital_analogue_window_ParamLimits

0xae53,	// (0x0005207c) popup_clock_digital_analogue_window

0x9550,	// (0x00050779) soft_indicator_pane_ParamLimits

0x9550,	// (0x00050779) soft_indicator_pane

0x956a,	// (0x00050793) wallpaper_pane_ParamLimits

0x956a,	// (0x00050793) wallpaper_pane

0xadc8,	// (0x00051ff1) wallpaper_pane_g1

0x957c,	// (0x000507a5) indicator_pane_g1_ParamLimits

0x957c,	// (0x000507a5) indicator_pane_g1

0xe04e,	// (0x00055277) navi_navi_icon_text_pane_srt_g1

0xae81,	// (0x000520aa) soft_indicator_pane_t1

0xae9b,	// (0x000520c4) aid_ps_area_pane

0x9592,	// (0x000507bb) aid_ps_clock_pane

0xaeac,	// (0x000520d5) aid_ps_indicator_pane

0xaeb8,	// (0x000520e1) indicator_ps_pane_ParamLimits

0xaeb8,	// (0x000520e1) indicator_ps_pane

0xaec7,	// (0x000520f0) power_save_pane_g1_ParamLimits

0xaec7,	// (0x000520f0) power_save_pane_g1

0xaed3,	// (0x000520fc) power_save_pane_g2_ParamLimits

0xaed3,	// (0x000520fc) power_save_pane_g2

0x03fb,	// (0x00047624) aid_navinavi_width_pane

0xae9b,	// (0x000520c4) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00056799) power_save_pane_g_ParamLimits

0xf570,	// (0x00056799) power_save_pane_g

0xaee1,	// (0x0005210a) power_save_pane_t1_ParamLimits

0xaee1,	// (0x0005210a) power_save_pane_t1

0x9592,	// (0x000507bb) aid_ps_clock_pane_ParamLimits

0xaeac,	// (0x000520d5) aid_ps_indicator_pane_ParamLimits

0xaef3,	// (0x0005211c) power_save_pane_t4_ParamLimits

0xaef3,	// (0x0005211c) power_save_pane_t4

0x0001,

0xf575,	// (0x0005679e) power_save_pane_t_ParamLimits

0xf575,	// (0x0005679e) power_save_pane_t

0xaf1d,	// (0x00052146) power_save_t3_ParamLimits

0xaf1d,	// (0x00052146) power_save_t3

0xaf08,	// (0x00052131) power_save_t2_ParamLimits

0xaf08,	// (0x00052131) power_save_t2

0xb3f1,	// (0x0005261a) indicator_ps_pane_g1

0x95a0,	// (0x000507c9) ai_gene_pane_ParamLimits

0x95a0,	// (0x000507c9) ai_gene_pane

0x95b7,	// (0x000507e0) ai_links_pane_ParamLimits

0x95b7,	// (0x000507e0) ai_links_pane

0x95cf,	// (0x000507f8) indicator_pane_cp1_ParamLimits

0x95cf,	// (0x000507f8) indicator_pane_cp1

0x95de,	// (0x00050807) main_pane_idle_g1_cp_ParamLimits

0x95de,	// (0x00050807) main_pane_idle_g1_cp

0xb3fa,	// (0x00052623) popup_ai_links_title_window

0x95f6,	// (0x0005081f) soft_indicator_pane_cp1_ParamLimits

0x95f6,	// (0x0005081f) soft_indicator_pane_cp1

0xdcf3,	// (0x00054f1c) ai_links_pane_g1

0xdcfc,	// (0x00054f25) grid_ai_links_pane

0xa8ac,	// (0x00051ad5) ai_gene_pane_1

0xdce1,	// (0x00054f0a) ai_gene_pane_2

0xdcea,	// (0x00054f13) list_highlight_pane_cp4

0xa888,	// (0x00051ab1) cell_ai_link_pane_ParamLimits

0xa888,	// (0x00051ab1) cell_ai_link_pane

0xdcd9,	// (0x00054f02) cell_ai_link_pane_g1

0xb5a8,	// (0x000527d1) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x00056b41) cell_ai_link_pane_g

0xadd2,	// (0x00051ffb) grid_highlight_cp2

0xadd2,	// (0x00051ffb) bg_popup_sub_pane_cp1

0xb411,	// (0x0005263a) popup_ai_links_title_window_t1

0xdc4b,	// (0x00054e74) ai_gene_pane_1_g1_ParamLimits

0xdc4b,	// (0x00054e74) ai_gene_pane_1_g1

0xdc57,	// (0x00054e80) ai_gene_pane_1_g2_ParamLimits

0xdc57,	// (0x00054e80) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x00056b37) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x00056b37) ai_gene_pane_1_g

0xdc64,	// (0x00054e8d) ai_gene_pane_1_t1_ParamLimits

0xdc64,	// (0x00054e8d) ai_gene_pane_1_t1

0xdc98,	// (0x00054ec1) grid_ai_soft_ind_pane

0xdc36,	// (0x00054e5f) ai_gene_pane_2_t1_ParamLimits

0xdc36,	// (0x00054e5f) ai_gene_pane_2_t1

0x960a,	// (0x00050833) main_pane_empty_t1_ParamLimits

0x960a,	// (0x00050833) main_pane_empty_t1

0x9622,	// (0x0005084b) main_pane_empty_t2_ParamLimits

0x9622,	// (0x0005084b) main_pane_empty_t2

0x9637,	// (0x00050860) main_pane_empty_t3_ParamLimits

0x9637,	// (0x00050860) main_pane_empty_t3

0x9649,	// (0x00050872) main_pane_empty_t4_ParamLimits

0x9649,	// (0x00050872) main_pane_empty_t4

0x965b,	// (0x00050884) main_pane_empty_t5_ParamLimits

0x965b,	// (0x00050884) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000567a3) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000567a3) main_pane_empty_t

0xc09c,	// (0x000532c5) bg_popup_window_pane_ParamLimits

0xc09c,	// (0x000532c5) bg_popup_window_pane

0xd9de,	// (0x00054c07) find_popup_pane_cp2_ParamLimits

0xd9de,	// (0x00054c07) find_popup_pane_cp2

0xd9ea,	// (0x00054c13) heading_pane_ParamLimits

0xd9ea,	// (0x00054c13) heading_pane

0xadd2,	// (0x00051ffb) bg_popup_sub_pane

0xa7ab,	// (0x000519d4) bg_popup_window_pane_g1_ParamLimits

0xa7ab,	// (0x000519d4) bg_popup_window_pane_g1

0xa7ba,	// (0x000519e3) bg_popup_window_pane_g2_ParamLimits

0xa7ba,	// (0x000519e3) bg_popup_window_pane_g2

0xa7c6,	// (0x000519ef) bg_popup_window_pane_g3_ParamLimits

0xa7c6,	// (0x000519ef) bg_popup_window_pane_g3

0xa7d2,	// (0x000519fb) bg_popup_window_pane_g4_ParamLimits

0xa7d2,	// (0x000519fb) bg_popup_window_pane_g4

0xa7e1,	// (0x00051a0a) bg_popup_window_pane_g5_ParamLimits

0xa7e1,	// (0x00051a0a) bg_popup_window_pane_g5

0xa7f1,	// (0x00051a1a) bg_popup_window_pane_g6_ParamLimits

0xa7f1,	// (0x00051a1a) bg_popup_window_pane_g6

0xa7fd,	// (0x00051a26) bg_popup_window_pane_g7_ParamLimits

0xa7fd,	// (0x00051a26) bg_popup_window_pane_g7

0xa80c,	// (0x00051a35) bg_popup_window_pane_g8_ParamLimits

0xa80c,	// (0x00051a35) bg_popup_window_pane_g8

0xa81b,	// (0x00051a44) bg_popup_window_pane_g9_ParamLimits

0xa81b,	// (0x00051a44) bg_popup_window_pane_g9

0xd9c4,	// (0x00054bed) bg_popup_window_pane_g10_ParamLimits

0xd9c4,	// (0x00054bed) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x00056aff) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x00056aff) bg_popup_window_pane_g

0xd97b,	// (0x00054ba4) bg_popup_heading_pane_ParamLimits

0xd97b,	// (0x00054ba4) bg_popup_heading_pane

0x1d87,	// (0x00048fb0) tabs_4_passive_pane_cp_srt_ParamLimits

0x1d87,	// (0x00048fb0) tabs_4_passive_pane_cp_srt

0x1d99,	// (0x00048fc2) tabs_4_passive_pane_srt_ParamLimits

0xd98f,	// (0x00054bb8) heading_pane_g2

0x1d99,	// (0x00048fc2) tabs_4_passive_pane_srt

0xce7b,	// (0x000540a4) bg_passive_tab_pane_cp3_srt_ParamLimits

0xce7b,	// (0x000540a4) bg_passive_tab_pane_cp3_srt

0xd997,	// (0x00054bc0) heading_pane_t1_ParamLimits

0xd997,	// (0x00054bc0) heading_pane_t1

0xd9ae,	// (0x00054bd7) heading_pane_t2_ParamLimits

0xd9ae,	// (0x00054bd7) heading_pane_t2

0x0001,

0xf8d1,	// (0x00056afa) heading_pane_t_ParamLimits

0xf8d1,	// (0x00056afa) heading_pane_t

0xd4ec,	// (0x00054715) bg_popup_heading_pane_g1

0xd57d,	// (0x000547a6) bg_popup_heading_pane_g2

0xd587,	// (0x000547b0) bg_popup_heading_pane_g3

0xd591,	// (0x000547ba) bg_popup_heading_pane_g4

0xd59b,	// (0x000547c4) bg_popup_heading_pane_g5

0xd5a5,	// (0x000547ce) bg_popup_heading_pane_g6

0xd5ad,	// (0x000547d6) bg_popup_heading_pane_g7

0xd5b5,	// (0x000547de) bg_popup_heading_pane_g8

0xd5bf,	// (0x000547e8) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x00056ab6) bg_popup_heading_pane_g

0xce07,	// (0x00054030) bg_popup_sub_pane_g1

0xce17,	// (0x00054040) bg_popup_sub_pane_g2

0xce0f,	// (0x00054038) bg_popup_sub_pane_g3

0xce27,	// (0x00054050) bg_popup_sub_pane_g4

0xce1f,	// (0x00054048) bg_popup_sub_pane_g5

0xce2f,	// (0x00054058) bg_popup_sub_pane_g6

0xce37,	// (0x00054060) bg_popup_sub_pane_g7

0xce47,	// (0x00054070) bg_popup_sub_pane_g8

0xce3f,	// (0x00054068) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x00056a90) bg_popup_sub_pane_g

0xae20,	// (0x00052049) bg_popup_window_pane_cp5_ParamLimits

0xae20,	// (0x00052049) bg_popup_window_pane_cp5

0xb42e,	// (0x00052657) popup_note_window_g1_ParamLimits

0xb42e,	// (0x00052657) popup_note_window_g1

0xb43a,	// (0x00052663) popup_note_window_t1_ParamLimits

0xb43a,	// (0x00052663) popup_note_window_t1

0xb44c,	// (0x00052675) popup_note_window_t2_ParamLimits

0xb44c,	// (0x00052675) popup_note_window_t2

0xb45e,	// (0x00052687) popup_note_window_t3_ParamLimits

0xb45e,	// (0x00052687) popup_note_window_t3

0xb470,	// (0x00052699) popup_note_window_t4_ParamLimits

0xb470,	// (0x00052699) popup_note_window_t4

0xb498,	// (0x000526c1) popup_note_window_t5_ParamLimits

0xb498,	// (0x000526c1) popup_note_window_t5

0x0004,

0xf585,	// (0x000567ae) popup_note_window_t_ParamLimits

0xf585,	// (0x000567ae) popup_note_window_t

0xb4bc,	// (0x000526e5) bg_popup_window_pane_cp6_ParamLimits

0xb4bc,	// (0x000526e5) bg_popup_window_pane_cp6

0xd460,	// (0x00054689) popup_note_image_window_g1_ParamLimits

0xd460,	// (0x00054689) popup_note_image_window_g1

0xd46c,	// (0x00054695) popup_note_image_window_g2_ParamLimits

0xd46c,	// (0x00054695) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x00056a84) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x00056a84) popup_note_image_window_g

0xd485,	// (0x000546ae) popup_note_image_window_t1_ParamLimits

0xd485,	// (0x000546ae) popup_note_image_window_t1

0xd49e,	// (0x000546c7) popup_note_image_window_t2_ParamLimits

0xd49e,	// (0x000546c7) popup_note_image_window_t2

0xd4b7,	// (0x000546e0) popup_note_image_window_t3_ParamLimits

0xd4b7,	// (0x000546e0) popup_note_image_window_t3

0x0002,

0xf860,	// (0x00056a89) popup_note_image_window_t_ParamLimits

0xf860,	// (0x00056a89) popup_note_image_window_t

0xd33d,	// (0x00054566) bg_popup_window_pane_cp7_ParamLimits

0xd33d,	// (0x00054566) bg_popup_window_pane_cp7

0xd36d,	// (0x00054596) popup_note_wait_window_g1_ParamLimits

0xd36d,	// (0x00054596) popup_note_wait_window_g1

0xd379,	// (0x000545a2) popup_note_wait_window_g2_ParamLimits

0xd379,	// (0x000545a2) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x00056a72) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x00056a72) popup_note_wait_window_g

0xd391,	// (0x000545ba) popup_note_wait_window_t1_ParamLimits

0xd391,	// (0x000545ba) popup_note_wait_window_t1

0xd3b8,	// (0x000545e1) popup_note_wait_window_t2_ParamLimits

0xd3b8,	// (0x000545e1) popup_note_wait_window_t2

0xd3d5,	// (0x000545fe) popup_note_wait_window_t3_ParamLimits

0xd3d5,	// (0x000545fe) popup_note_wait_window_t3

0xd3e8,	// (0x00054611) popup_note_wait_window_t4_ParamLimits

0xd3e8,	// (0x00054611) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x00056a79) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x00056a79) popup_note_wait_window_t

0xd40d,	// (0x00054636) wait_bar_pane_ParamLimits

0xd40d,	// (0x00054636) wait_bar_pane

0xadd2,	// (0x00051ffb) wait_anim_pane

0xadd2,	// (0x00051ffb) wait_border_pane

0xadc8,	// (0x00051ff1) wait_anim_pane_g1

0xadc8,	// (0x00051ff1) wait_anim_pane_g2

0x0001,

0xf709,	// (0x00056932) wait_anim_pane_g

0xd2e1,	// (0x0005450a) wait_border_pane_g1

0xd2ec,	// (0x00054515) wait_border_pane_g2

0xd2f5,	// (0x0005451e) wait_border_pane_g3

0x0002,

0xf842,	// (0x00056a6b) wait_border_pane_g

0xd151,	// (0x0005437a) bg_popup_window_pane_cp16_ParamLimits

0xd151,	// (0x0005437a) bg_popup_window_pane_cp16

0xd251,	// (0x0005447a) indicator_popup_pane_cp4_ParamLimits

0xd251,	// (0x0005447a) indicator_popup_pane_cp4

0xd265,	// (0x0005448e) popup_query_data_window_t1_ParamLimits

0xd265,	// (0x0005448e) popup_query_data_window_t1

0xd277,	// (0x000544a0) popup_query_data_window_t2_ParamLimits

0xd277,	// (0x000544a0) popup_query_data_window_t2

0xd290,	// (0x000544b9) popup_query_data_window_t3_ParamLimits

0xd290,	// (0x000544b9) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x00056a64) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x00056a64) popup_query_data_window_t

0xd2aa,	// (0x000544d3) query_popup_data_pane_ParamLimits

0xd2aa,	// (0x000544d3) query_popup_data_pane

0xd2be,	// (0x000544e7) query_popup_data_pane_cp1_ParamLimits

0xd2be,	// (0x000544e7) query_popup_data_pane_cp1

0xd151,	// (0x0005437a) bg_popup_window_pane_cp10_ParamLimits

0xd151,	// (0x0005437a) bg_popup_window_pane_cp10

0xd183,	// (0x000543ac) indicator_popup_pane_ParamLimits

0xd183,	// (0x000543ac) indicator_popup_pane

0xd1a5,	// (0x000543ce) popup_query_code_window_t1_ParamLimits

0xd1a5,	// (0x000543ce) popup_query_code_window_t1

0xd1bf,	// (0x000543e8) popup_query_code_window_t2_ParamLimits

0xd1bf,	// (0x000543e8) popup_query_code_window_t2

0xd208,	// (0x00054431) popup_query_code_window_t3_ParamLimits

0xd208,	// (0x00054431) popup_query_code_window_t3

0x0002,

0xf834,	// (0x00056a5d) popup_query_code_window_t_ParamLimits

0xf834,	// (0x00056a5d) popup_query_code_window_t

0xd237,	// (0x00054460) query_popup_pane_ParamLimits

0xd237,	// (0x00054460) query_popup_pane

0xb4bc,	// (0x000526e5) bg_popup_window_pane_cp15_ParamLimits

0xb4bc,	// (0x000526e5) bg_popup_window_pane_cp15

0xb4da,	// (0x00052703) indicator_popup_pane_cp1_ParamLimits

0xb4da,	// (0x00052703) indicator_popup_pane_cp1

0xb4ed,	// (0x00052716) indicator_popup_pane_cp2_ParamLimits

0xb4ed,	// (0x00052716) indicator_popup_pane_cp2

0xb500,	// (0x00052729) popup_query_data_code_window_g1_ParamLimits

0xb500,	// (0x00052729) popup_query_data_code_window_g1

0xb513,	// (0x0005273c) popup_query_data_code_window_t1_ParamLimits

0xb513,	// (0x0005273c) popup_query_data_code_window_t1

0xb525,	// (0x0005274e) popup_query_data_code_window_t2_ParamLimits

0xb525,	// (0x0005274e) popup_query_data_code_window_t2

0xb537,	// (0x00052760) popup_query_data_code_window_t3_ParamLimits

0xb537,	// (0x00052760) popup_query_data_code_window_t3

0xb54d,	// (0x00052776) popup_query_data_code_window_t4_ParamLimits

0xb54d,	// (0x00052776) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000567b9) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000567b9) popup_query_data_code_window_t

0x1a50,	// (0x00048c79) list_single_midp_graphic_pane_g3

0xb565,	// (0x0005278e) query_popup_data_pane_cp2_ParamLimits

0xb578,	// (0x000527a1) query_popup_pane_cp2_ParamLimits

0xb578,	// (0x000527a1) query_popup_pane_cp2

0xadd2,	// (0x00051ffb) bg_popup_window_pane_cp11

0xd149,	// (0x00054372) heading_pane_cp5

0xb606,	// (0x0005282f) listscroll_popup_info_pane

0xadd2,	// (0x00051ffb) input_focus_pane_cp3

0xb58b,	// (0x000527b4) query_popup_pane_t1

0xb599,	// (0x000527c2) list_popup_info_pane_ParamLimits

0xb599,	// (0x000527c2) list_popup_info_pane

0xb5a8,	// (0x000527d1) listscroll_popup_info_pane_g1

0xb5b0,	// (0x000527d9) scroll_pane_cp7

0xb5ba,	// (0x000527e3) popup_info_list_pane_t1_ParamLimits

0xb5ba,	// (0x000527e3) popup_info_list_pane_t1

0xb5d4,	// (0x000527fd) popup_info_list_pane_t2_ParamLimits

0xb5d4,	// (0x000527fd) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000567c2) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000567c2) popup_info_list_pane_t

0xadd2,	// (0x00051ffb) bg_popup_window_pane_cp12

0xe068,	// (0x00055291) find_popup_pane

0xae2e,	// (0x00052057) bg_popup_window_pane_cp3

0xb5ee,	// (0x00052817) heading_pane_cp3

0xb5fa,	// (0x00052823) listscroll_popup_graphic_pane

0xadd2,	// (0x00051ffb) bg_popup_window_pane_cp4

0x96bd,	// (0x000508e6) heading_pane_cp4

0xb606,	// (0x0005282f) listscroll_popup_colour_pane

0xb60e,	// (0x00052837) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb60e,	// (0x00052837) cell_large_graphic_colour_none_popup_pane

0x96c5,	// (0x000508ee) grid_large_graphic_colour_popup_pane_ParamLimits

0x96c5,	// (0x000508ee) grid_large_graphic_colour_popup_pane

0xb622,	// (0x0005284b) listscroll_popup_colour_pane_g1_ParamLimits

0xb622,	// (0x0005284b) listscroll_popup_colour_pane_g1

0xb639,	// (0x00052862) listscroll_popup_colour_pane_g2_ParamLimits

0xb639,	// (0x00052862) listscroll_popup_colour_pane_g2

0xb650,	// (0x00052879) listscroll_popup_colour_pane_g3_ParamLimits

0xb650,	// (0x00052879) listscroll_popup_colour_pane_g3

0x96e9,	// (0x00050912) listscroll_popup_colour_pane_g4_ParamLimits

0x96e9,	// (0x00050912) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000567c7) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000567c7) listscroll_popup_colour_pane_g

0xb660,	// (0x00052889) scroll_pane_cp6_ParamLimits

0xb660,	// (0x00052889) scroll_pane_cp6

0x96f8,	// (0x00050921) cell_large_graphic_colour_popup_pane_ParamLimits

0x96f8,	// (0x00050921) cell_large_graphic_colour_popup_pane

0xb672,	// (0x0005289b) cell_large_graphic_colour_none_popup_pane_t1

0xadd2,	// (0x00051ffb) grid_highlight_pane_cp5

0xb681,	// (0x000528aa) cell_large_graphic_colour_popup_pane_g1

0xb689,	// (0x000528b2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000567d0) cell_large_graphic_colour_popup_pane_g

0xb691,	// (0x000528ba) cell_large_graphic_colour_popup_pane_g2_copy1

0xb69a,	// (0x000528c3) grid_highlight_pane_cp4

0xb6a2,	// (0x000528cb) bg_popup_window_pane_cp8_ParamLimits

0xb6a2,	// (0x000528cb) bg_popup_window_pane_cp8

0xb6bd,	// (0x000528e6) popup_snote_single_text_window_g1_ParamLimits

0xb6bd,	// (0x000528e6) popup_snote_single_text_window_g1

0xb6cf,	// (0x000528f8) popup_snote_single_text_window_t1_ParamLimits

0xb6cf,	// (0x000528f8) popup_snote_single_text_window_t1

0xb6e2,	// (0x0005290b) popup_snote_single_text_window_t2_ParamLimits

0xb6e2,	// (0x0005290b) popup_snote_single_text_window_t2

0xb6f5,	// (0x0005291e) popup_snote_single_text_window_t3_ParamLimits

0xb6f5,	// (0x0005291e) popup_snote_single_text_window_t3

0xb72e,	// (0x00052957) popup_snote_single_text_window_t4_ParamLimits

0xb72e,	// (0x00052957) popup_snote_single_text_window_t4

0xb762,	// (0x0005298b) popup_snote_single_text_window_t5_ParamLimits

0xb762,	// (0x0005298b) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000567d5) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000567d5) popup_snote_single_text_window_t

0xb791,	// (0x000529ba) bg_popup_window_pane_cp9_ParamLimits

0xb791,	// (0x000529ba) bg_popup_window_pane_cp9

0xb6bd,	// (0x000528e6) popup_snote_single_graphic_window_g1_ParamLimits

0xb6bd,	// (0x000528e6) popup_snote_single_graphic_window_g1

0xb79f,	// (0x000529c8) popup_snote_single_graphic_window_g2_ParamLimits

0xb79f,	// (0x000529c8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000567e0) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000567e0) popup_snote_single_graphic_window_g

0xb7ab,	// (0x000529d4) popup_snote_single_graphic_window_t1_ParamLimits

0xb7ab,	// (0x000529d4) popup_snote_single_graphic_window_t1

0xb7be,	// (0x000529e7) popup_snote_single_graphic_window_t2_ParamLimits

0xb7be,	// (0x000529e7) popup_snote_single_graphic_window_t2

0xb7d1,	// (0x000529fa) popup_snote_single_graphic_window_t3_ParamLimits

0xb7d1,	// (0x000529fa) popup_snote_single_graphic_window_t3

0xb80a,	// (0x00052a33) popup_snote_single_graphic_window_t4_ParamLimits

0xb80a,	// (0x00052a33) popup_snote_single_graphic_window_t4

0xb83e,	// (0x00052a67) popup_snote_single_graphic_window_t5_ParamLimits

0xb83e,	// (0x00052a67) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000567e5) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000567e5) popup_snote_single_graphic_window_t

0xdff0,	// (0x00055219) grid_graphic_popup_pane_ParamLimits

0xdff0,	// (0x00055219) grid_graphic_popup_pane

0xe018,	// (0x00055241) listscroll_popup_graphic_pane_g1_ParamLimits

0xe018,	// (0x00055241) listscroll_popup_graphic_pane_g1

0xab3d,	// (0x00051d66) listscroll_popup_graphic_pane_g2_ParamLimits

0xab3d,	// (0x00051d66) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x00056bda) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x00056bda) listscroll_popup_graphic_pane_g

0xd96f,	// (0x00054b98) scroll_pane_cp5

0xab01,	// (0x00051d2a) cell_graphic_popup_pane_ParamLimits

0xab01,	// (0x00051d2a) cell_graphic_popup_pane

0xdfbb,	// (0x000551e4) cell_graphic_popup_pane_g1

0xdfc3,	// (0x000551ec) cell_graphic_popup_pane_g2

0xb691,	// (0x000528ba) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x00056bd3) cell_graphic_popup_pane_g

0xdfcc,	// (0x000551f5) cell_graphic_popup_pane_t2

0xb69a,	// (0x000528c3) grid_highlight_pane_cp3

0xb87f,	// (0x00052aa8) list_gen_pane_ParamLimits

0xb87f,	// (0x00052aa8) list_gen_pane

0xb8a7,	// (0x00052ad0) scroll_pane

0xaabc,	// (0x00051ce5) bg_list_pane_g1_ParamLimits

0xaabc,	// (0x00051ce5) bg_list_pane_g1

0xdf50,	// (0x00055179) bg_list_pane_g2_ParamLimits

0xdf50,	// (0x00055179) bg_list_pane_g2

0xdf63,	// (0x0005518c) bg_list_pane_g3_ParamLimits

0xdf63,	// (0x0005518c) bg_list_pane_g3

0xdf75,	// (0x0005519e) bg_list_pane_g4_ParamLimits

0xdf75,	// (0x0005519e) bg_list_pane_g4

0xaad7,	// (0x00051d00) bg_list_pane_g5_ParamLimits

0xaad7,	// (0x00051d00) bg_list_pane_g5

0x0004,

0xf99f,	// (0x00056bc8) bg_list_pane_g_ParamLimits

0xf99f,	// (0x00056bc8) bg_list_pane_g

0x98bf,	// (0x00050ae8) list_double2_graphic_large_graphic_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_double2_graphic_large_graphic_pane

0x98bf,	// (0x00050ae8) list_double2_graphic_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_double2_graphic_pane

0x98bf,	// (0x00050ae8) list_double2_large_graphic_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_double2_large_graphic_pane

0x98bf,	// (0x00050ae8) list_double2_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_double2_pane

0x98bf,	// (0x00050ae8) list_double_graphic_heading_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_double_graphic_heading_pane

0x98bf,	// (0x00050ae8) list_double_graphic_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_double_graphic_pane

0x98bf,	// (0x00050ae8) list_double_heading_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_double_heading_pane

0x98bf,	// (0x00050ae8) list_double_large_graphic_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_double_large_graphic_pane

0x98bf,	// (0x00050ae8) list_double_number_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_double_number_pane

0x98bf,	// (0x00050ae8) list_double_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_double_pane

0x98bf,	// (0x00050ae8) list_double_time_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_double_time_pane

0x98bf,	// (0x00050ae8) list_setting_number_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_setting_number_pane

0x98bf,	// (0x00050ae8) list_setting_pane_ParamLimits

0x98bf,	// (0x00050ae8) list_setting_pane

0xaa81,	// (0x00051caa) list_single_2graphic_pane_ParamLimits

0xaa81,	// (0x00051caa) list_single_2graphic_pane

0xaa81,	// (0x00051caa) list_single_graphic_heading_pane_ParamLimits

0xaa81,	// (0x00051caa) list_single_graphic_heading_pane

0xaa81,	// (0x00051caa) list_single_graphic_pane_ParamLimits

0xaa81,	// (0x00051caa) list_single_graphic_pane

0xaa81,	// (0x00051caa) list_single_heading_pane_ParamLimits

0xaa81,	// (0x00051caa) list_single_heading_pane

0xaaa9,	// (0x00051cd2) list_single_large_graphic_pane_ParamLimits

0xaaa9,	// (0x00051cd2) list_single_large_graphic_pane

0xaa81,	// (0x00051caa) list_single_number_heading_pane_ParamLimits

0xaa81,	// (0x00051caa) list_single_number_heading_pane

0xaa81,	// (0x00051caa) list_single_number_pane_ParamLimits

0xaa81,	// (0x00051caa) list_single_number_pane

0xaa81,	// (0x00051caa) list_single_pane_ParamLimits

0xaa81,	// (0x00051caa) list_single_pane

0xadd2,	// (0x00051ffb) list_highlight_pane_cp1

0x2f7a,	// (0x0004a1a3) list_single_pane_g1_ParamLimits

0x2f7a,	// (0x0004a1a3) list_single_pane_g1

0x2f86,	// (0x0004a1af) list_single_pane_g2_ParamLimits

0x2f86,	// (0x0004a1af) list_single_pane_g2

0x0001,

0xf5d8,	// (0x00056801) list_single_pane_g_ParamLimits

0xf5d8,	// (0x00056801) list_single_pane_g

0x3d44,	// (0x0004af6d) list_single_pane_t1_ParamLimits

0x3d44,	// (0x0004af6d) list_single_pane_t1

0x2f7a,	// (0x0004a1a3) list_single_number_pane_g1_ParamLimits

0x2f7a,	// (0x0004a1a3) list_single_number_pane_g1

0x2f86,	// (0x0004a1af) list_single_number_pane_g2_ParamLimits

0x2f86,	// (0x0004a1af) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x00056801) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x00056801) list_single_number_pane_g

0x382c,	// (0x0004aa55) list_single_number_pane_t1_ParamLimits

0x382c,	// (0x0004aa55) list_single_number_pane_t1

0x3c10,	// (0x0004ae39) list_single_number_pane_t2_ParamLimits

0x3c10,	// (0x0004ae39) list_single_number_pane_t2

0x0001,

0xf960,	// (0x00056b89) list_single_number_pane_t_ParamLimits

0xf960,	// (0x00056b89) list_single_number_pane_t

0x0886,	// (0x00047aaf) list_single_graphic_pane_g1_ParamLimits

0x0886,	// (0x00047aaf) list_single_graphic_pane_g1

0x2f7a,	// (0x0004a1a3) list_single_graphic_pane_g2_ParamLimits

0x2f7a,	// (0x0004a1a3) list_single_graphic_pane_g2

0x2f86,	// (0x0004a1af) list_single_graphic_pane_g3_ParamLimits

0x2f86,	// (0x0004a1af) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000567f0) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000567f0) list_single_graphic_pane_g

0x0892,	// (0x00047abb) list_single_graphic_pane_t1_ParamLimits

0x0892,	// (0x00047abb) list_single_graphic_pane_t1

0x08a8,	// (0x00047ad1) list_single_heading_pane_g1_ParamLimits

0x08a8,	// (0x00047ad1) list_single_heading_pane_g1

0x2f86,	// (0x0004a1af) list_single_heading_pane_g2_ParamLimits

0x2f86,	// (0x0004a1af) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000567f7) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000567f7) list_single_heading_pane_g

0x08bb,	// (0x00047ae4) list_single_heading_pane_t1_ParamLimits

0x08bb,	// (0x00047ae4) list_single_heading_pane_t1

0x2f92,	// (0x0004a1bb) list_single_heading_pane_t2_ParamLimits

0x2f92,	// (0x0004a1bb) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000567fc) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000567fc) list_single_heading_pane_t

0x2f7a,	// (0x0004a1a3) list_single_number_heading_pane_g1_ParamLimits

0x2f7a,	// (0x0004a1a3) list_single_number_heading_pane_g1

0x2f86,	// (0x0004a1af) list_single_number_heading_pane_g2_ParamLimits

0x2f86,	// (0x0004a1af) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x00056801) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x00056801) list_single_number_heading_pane_g

0x08d1,	// (0x00047afa) list_single_number_heading_pane_t1_ParamLimits

0x08d1,	// (0x00047afa) list_single_number_heading_pane_t1

0x08e7,	// (0x00047b10) list_single_number_heading_pane_t2_ParamLimits

0x08e7,	// (0x00047b10) list_single_number_heading_pane_t2

0x08f9,	// (0x00047b22) list_single_number_heading_pane_t3_ParamLimits

0x08f9,	// (0x00047b22) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x00056806) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x00056806) list_single_number_heading_pane_t

0x090b,	// (0x00047b34) list_single_graphic_heading_pane_g1_ParamLimits

0x090b,	// (0x00047b34) list_single_graphic_heading_pane_g1

0x7e93,	// (0x0004f0bc) list_single_graphic_heading_pane_g4_ParamLimits

0x7e93,	// (0x0004f0bc) list_single_graphic_heading_pane_g4

0x2f86,	// (0x0004a1af) list_single_graphic_heading_pane_g5_ParamLimits

0x2f86,	// (0x0004a1af) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0005680d) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005680d) list_single_graphic_heading_pane_g

0x08d1,	// (0x00047afa) list_single_graphic_heading_pane_t1_ParamLimits

0x08d1,	// (0x00047afa) list_single_graphic_heading_pane_t1

0x0932,	// (0x00047b5b) list_single_graphic_heading_pane_t2_ParamLimits

0x0932,	// (0x00047b5b) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x00056814) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x00056814) list_single_graphic_heading_pane_t

0x44da,	// (0x0004b703) list_single_large_graphic_pane_g1_ParamLimits

0x44da,	// (0x0004b703) list_single_large_graphic_pane_g1

0x44e6,	// (0x0004b70f) list_single_large_graphic_pane_g2_ParamLimits

0x44e6,	// (0x0004b70f) list_single_large_graphic_pane_g2

0x44f2,	// (0x0004b71b) list_single_large_graphic_pane_g3_ParamLimits

0x44f2,	// (0x0004b71b) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00056819) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00056819) list_single_large_graphic_pane_g

0xd2ec,	// (0x00054515) wait_border_pane_g2_copy1

0x9721,	// (0x0005094a) list_single_large_graphic_pane_g4_cp2

0x3de8,	// (0x0004b011) list_single_large_graphic_pane_t1_ParamLimits

0x3de8,	// (0x0004b011) list_single_large_graphic_pane_t1

0x7ea4,	// (0x0004f0cd) list_double_pane_g1_ParamLimits

0x7ea4,	// (0x0004f0cd) list_double_pane_g1

0x7eb0,	// (0x0004f0d9) list_double_pane_g2_ParamLimits

0x7eb0,	// (0x0004f0d9) list_double_pane_g2

0x0001,

0xf5f7,	// (0x00056820) list_double_pane_g_ParamLimits

0xf5f7,	// (0x00056820) list_double_pane_g

0x7ebc,	// (0x0004f0e5) list_double_pane_t1_ParamLimits

0x7ebc,	// (0x0004f0e5) list_double_pane_t1

0x7ed2,	// (0x0004f0fb) list_double_pane_t2_ParamLimits

0x7ed2,	// (0x0004f0fb) list_double_pane_t2

0x0001,

0xf5fc,	// (0x00056825) list_double_pane_t_ParamLimits

0xf5fc,	// (0x00056825) list_double_pane_t

0x7ee4,	// (0x0004f10d) list_double2_pane_g1_ParamLimits

0x7ee4,	// (0x0004f10d) list_double2_pane_g1

0x7ef5,	// (0x0004f11e) list_double2_pane_g2_ParamLimits

0x7ef5,	// (0x0004f11e) list_double2_pane_g2

0x0001,

0xf601,	// (0x0005682a) list_double2_pane_g_ParamLimits

0xf601,	// (0x0005682a) list_double2_pane_g

0x7f01,	// (0x0004f12a) list_double2_pane_t1_ParamLimits

0x7f01,	// (0x0004f12a) list_double2_pane_t1

0x7f17,	// (0x0004f140) list_double2_pane_t2_ParamLimits

0x7f17,	// (0x0004f140) list_double2_pane_t2

0x0001,

0xf606,	// (0x0005682f) list_double2_pane_t_ParamLimits

0xf606,	// (0x0005682f) list_double2_pane_t

0x7ea4,	// (0x0004f0cd) list_double_number_pane_g1_ParamLimits

0x7ea4,	// (0x0004f0cd) list_double_number_pane_g1

0x7eb0,	// (0x0004f0d9) list_double_number_pane_g2_ParamLimits

0x7eb0,	// (0x0004f0d9) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x00056820) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x00056820) list_double_number_pane_g

0x7f29,	// (0x0004f152) list_double_number_pane_t1_ParamLimits

0x7f29,	// (0x0004f152) list_double_number_pane_t1

0x7f3b,	// (0x0004f164) list_double_number_pane_t2_ParamLimits

0x7f3b,	// (0x0004f164) list_double_number_pane_t2

0x7f51,	// (0x0004f17a) list_double_number_pane_t3_ParamLimits

0x7f51,	// (0x0004f17a) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00056834) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00056834) list_double_number_pane_t

0x7f63,	// (0x0004f18c) list_double_graphic_pane_g1_ParamLimits

0x7f63,	// (0x0004f18c) list_double_graphic_pane_g1

0x7f6f,	// (0x0004f198) list_double_graphic_pane_g2_ParamLimits

0x7f6f,	// (0x0004f198) list_double_graphic_pane_g2

0x7f7e,	// (0x0004f1a7) list_double_graphic_pane_g3_ParamLimits

0x7f7e,	// (0x0004f1a7) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0005683b) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0005683b) list_double_graphic_pane_g

0x7f96,	// (0x0004f1bf) list_double_graphic_pane_t1_ParamLimits

0x7f96,	// (0x0004f1bf) list_double_graphic_pane_t1

0x7fac,	// (0x0004f1d5) list_double_graphic_pane_t2_ParamLimits

0x7fac,	// (0x0004f1d5) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00056844) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00056844) list_double_graphic_pane_t

0x7f63,	// (0x0004f18c) list_double2_graphic_pane_g1_ParamLimits

0x7f63,	// (0x0004f18c) list_double2_graphic_pane_g1

0x7ea4,	// (0x0004f0cd) list_double2_graphic_pane_g2_ParamLimits

0x7ea4,	// (0x0004f0cd) list_double2_graphic_pane_g2

0x7eb0,	// (0x0004f0d9) list_double2_graphic_pane_g3_ParamLimits

0x7eb0,	// (0x0004f0d9) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x00056849) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x00056849) list_double2_graphic_pane_g

0x7f3b,	// (0x0004f164) list_double2_graphic_pane_t1_ParamLimits

0x7f3b,	// (0x0004f164) list_double2_graphic_pane_t1

0x7fbe,	// (0x0004f1e7) list_double2_graphic_pane_t2_ParamLimits

0x7fbe,	// (0x0004f1e7) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00056850) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00056850) list_double2_graphic_pane_t

0x7fd0,	// (0x0004f1f9) list_double_large_graphic_pane_g1_ParamLimits

0x7fd0,	// (0x0004f1f9) list_double_large_graphic_pane_g1

0x7ffb,	// (0x0004f224) list_double_large_graphic_pane_g2_ParamLimits

0x7ffb,	// (0x0004f224) list_double_large_graphic_pane_g2

0x7eb0,	// (0x0004f0d9) list_double_large_graphic_pane_g3_ParamLimits

0x7eb0,	// (0x0004f0d9) list_double_large_graphic_pane_g3

0x8011,	// (0x0004f23a) list_double_large_graphic_pane_g4_ParamLimits

0x8011,	// (0x0004f23a) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00056855) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00056855) list_double_large_graphic_pane_g

0x8024,	// (0x0004f24d) list_double_large_graphic_pane_t1_ParamLimits

0x8024,	// (0x0004f24d) list_double_large_graphic_pane_t1

0x803d,	// (0x0004f266) list_double_large_graphic_pane_t2_ParamLimits

0x803d,	// (0x0004f266) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00056860) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00056860) list_double_large_graphic_pane_t

0x804f,	// (0x0004f278) list_double2_large_graphic_pane_g1_ParamLimits

0x804f,	// (0x0004f278) list_double2_large_graphic_pane_g1

0x805b,	// (0x0004f284) list_double2_large_graphic_pane_g2_ParamLimits

0x805b,	// (0x0004f284) list_double2_large_graphic_pane_g2

0x7eb0,	// (0x0004f0d9) list_double2_large_graphic_pane_g3_ParamLimits

0x7eb0,	// (0x0004f0d9) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00056865) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00056865) list_double2_large_graphic_pane_g

0x806c,	// (0x0004f295) list_double2_large_graphic_pane_t1_ParamLimits

0x806c,	// (0x0004f295) list_double2_large_graphic_pane_t1

0x8082,	// (0x0004f2ab) list_double2_large_graphic_pane_t2_ParamLimits

0x8082,	// (0x0004f2ab) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0005686c) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0005686c) list_double2_large_graphic_pane_t

0x8094,	// (0x0004f2bd) list_double_heading_pane_g1_ParamLimits

0x8094,	// (0x0004f2bd) list_double_heading_pane_g1

0x9729,	// (0x00050952) list_double_heading_pane_g2_ParamLimits

0x9729,	// (0x00050952) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x00056871) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x00056871) list_double_heading_pane_g

0x80a5,	// (0x0004f2ce) list_double_heading_pane_t1_ParamLimits

0x80a5,	// (0x0004f2ce) list_double_heading_pane_t1

0x80bb,	// (0x0004f2e4) list_double_heading_pane_t2_ParamLimits

0x80bb,	// (0x0004f2e4) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x00056876) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x00056876) list_double_heading_pane_t

0x7f63,	// (0x0004f18c) list_double_graphic_heading_pane_g1_ParamLimits

0x7f63,	// (0x0004f18c) list_double_graphic_heading_pane_g1

0x8094,	// (0x0004f2bd) list_double_graphic_heading_pane_g2_ParamLimits

0x8094,	// (0x0004f2bd) list_double_graphic_heading_pane_g2

0x9729,	// (0x00050952) list_double_graphic_heading_pane_g3_ParamLimits

0x9729,	// (0x00050952) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0005687b) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0005687b) list_double_graphic_heading_pane_g

0x80cd,	// (0x0004f2f6) list_double_graphic_heading_pane_t1_ParamLimits

0x80cd,	// (0x0004f2f6) list_double_graphic_heading_pane_t1

0x80e3,	// (0x0004f30c) list_double_graphic_heading_pane_t2_ParamLimits

0x80e3,	// (0x0004f30c) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x00056882) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x00056882) list_double_graphic_heading_pane_t

0x7ee4,	// (0x0004f10d) list_double_time_pane_g1_ParamLimits

0x7ee4,	// (0x0004f10d) list_double_time_pane_g1

0x7ef5,	// (0x0004f11e) list_double_time_pane_g2_ParamLimits

0x7ef5,	// (0x0004f11e) list_double_time_pane_g2

0x0001,

0xf601,	// (0x0005682a) list_double_time_pane_g_ParamLimits

0xf601,	// (0x0005682a) list_double_time_pane_g

0x80f5,	// (0x0004f31e) list_double_time_pane_t1_ParamLimits

0x80f5,	// (0x0004f31e) list_double_time_pane_t1

0x810b,	// (0x0004f334) list_double_time_pane_t2_ParamLimits

0x810b,	// (0x0004f334) list_double_time_pane_t2

0x811d,	// (0x0004f346) list_double_time_pane_t3_ParamLimits

0x811d,	// (0x0004f346) list_double_time_pane_t3

0x812f,	// (0x0004f358) list_double_time_pane_t4_ParamLimits

0x812f,	// (0x0004f358) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00056887) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00056887) list_double_time_pane_t

0x8141,	// (0x0004f36a) list_setting_pane_g1_ParamLimits

0x8141,	// (0x0004f36a) list_setting_pane_g1

0x814d,	// (0x0004f376) list_setting_pane_g2_ParamLimits

0x814d,	// (0x0004f376) list_setting_pane_g2

0x0001,

0xf667,	// (0x00056890) list_setting_pane_g_ParamLimits

0xf667,	// (0x00056890) list_setting_pane_g

0x8159,	// (0x0004f382) list_setting_pane_t1_ParamLimits

0x8159,	// (0x0004f382) list_setting_pane_t1

0x8173,	// (0x0004f39c) list_setting_pane_t2_ParamLimits

0x8173,	// (0x0004f39c) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00056895) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00056895) list_setting_pane_t

0x81b0,	// (0x0004f3d9) set_value_pane_cp_ParamLimits

0x81b0,	// (0x0004f3d9) set_value_pane_cp

0x81bc,	// (0x0004f3e5) list_setting_number_pane_g1_ParamLimits

0x81bc,	// (0x0004f3e5) list_setting_number_pane_g1

0x81c8,	// (0x0004f3f1) list_setting_number_pane_g2_ParamLimits

0x81c8,	// (0x0004f3f1) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0005689c) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0005689c) list_setting_number_pane_g

0x81d4,	// (0x0004f3fd) list_setting_number_pane_t1_ParamLimits

0x81d4,	// (0x0004f3fd) list_setting_number_pane_t1

0x81ed,	// (0x0004f416) list_setting_number_pane_t2_ParamLimits

0x81ed,	// (0x0004f416) list_setting_number_pane_t2

0x8207,	// (0x0004f430) list_setting_number_pane_t3_ParamLimits

0x8207,	// (0x0004f430) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x000568a1) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x000568a1) list_setting_number_pane_t

0x81b0,	// (0x0004f3d9) set_value_pane_ParamLimits

0x81b0,	// (0x0004f3d9) set_value_pane

0xb8db,	// (0x00052b04) bg_set_opt_pane_ParamLimits

0xb8db,	// (0x00052b04) bg_set_opt_pane

0x0cf8,	// (0x00047f21) set_value_pane_t1

0xb8fc,	// (0x00052b25) slider_set_pane_cp3

0xb905,	// (0x00052b2e) volume_small_pane_cp

0xb90e,	// (0x00052b37) list_form_gen_pane

0xb917,	// (0x00052b40) scroll_pane_cp8

0x824a,	// (0x0004f473) form_field_data_pane_ParamLimits

0x824a,	// (0x0004f473) form_field_data_pane

0x8261,	// (0x0004f48a) form_field_data_wide_pane_ParamLimits

0x8261,	// (0x0004f48a) form_field_data_wide_pane

0x8281,	// (0x0004f4aa) form_field_popup_pane_ParamLimits

0x8281,	// (0x0004f4aa) form_field_popup_pane

0x82a1,	// (0x0004f4ca) form_field_popup_wide_pane_ParamLimits

0x82a1,	// (0x0004f4ca) form_field_popup_wide_pane

0x0d8e,	// (0x00047fb7) form_field_slider_pane_ParamLimits

0x0d8e,	// (0x00047fb7) form_field_slider_pane

0x0da1,	// (0x00047fca) form_field_slider_wide_pane_ParamLimits

0x0da1,	// (0x00047fca) form_field_slider_wide_pane

0xb928,	// (0x00052b51) data_form_pane

0x82c2,	// (0x0004f4eb) form_field_data_pane_t1

0xba2e,	// (0x00052c57) input_focus_pane

0x0dd8,	// (0x00048001) data_form_wide_pane

0x0df5,	// (0x0004801e) form_field_data_wide_pane_t1

0xb6af,	// (0x000528d8) input_focus_pane_cp6

0x82dc,	// (0x0004f505) form_field_popup_pane_t1

0xba2e,	// (0x00052c57) input_focus_pane_cp7

0xba5c,	// (0x00052c85) list_form_pane

0x0e39,	// (0x00048062) form_field_popup_wide_pane_t1

0xba2e,	// (0x00052c57) input_focus_pane_cp8

0xba68,	// (0x00052c91) list_form_wide_pane

0x82fe,	// (0x0004f527) form_field_slider_pane_t1_ParamLimits

0x82fe,	// (0x0004f527) form_field_slider_pane_t1

0x8316,	// (0x0004f53f) form_field_slider_pane_t2_ParamLimits

0x8316,	// (0x0004f53f) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x000568b1) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x000568b1) form_field_slider_pane_t

0xae20,	// (0x00052049) input_focus_pane_cp9_ParamLimits

0xae20,	// (0x00052049) input_focus_pane_cp9

0x832b,	// (0x0004f554) slider_cont_pane_ParamLimits

0x832b,	// (0x0004f554) slider_cont_pane

0xba77,	// (0x00052ca0) form_field_slider_wide_pane_t1_ParamLimits

0xba77,	// (0x00052ca0) form_field_slider_wide_pane_t1

0x304f,	// (0x0004a278) form_field_slider_wide_pane_t2_ParamLimits

0x304f,	// (0x0004a278) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x000568b6) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x000568b6) form_field_slider_wide_pane_t

0xae20,	// (0x00052049) input_focus_pane_cp10_ParamLimits

0xae20,	// (0x00052049) input_focus_pane_cp10

0x833f,	// (0x0004f568) slider_cont_pane_cp1_ParamLimits

0x833f,	// (0x0004f568) slider_cont_pane_cp1

0x8353,	// (0x0004f57c) slider_form_pane_cp

0xba89,	// (0x00052cb2) input_focus_pane_g1

0xba91,	// (0x00052cba) input_focus_pane_g2

0xba99,	// (0x00052cc2) input_focus_pane_g3

0xbaa1,	// (0x00052cca) input_focus_pane_g4

0xc06b,	// (0x00053294) input_focus_pane_g5

0xc073,	// (0x0005329c) input_focus_pane_g6

0xc07b,	// (0x000532a4) input_focus_pane_g7

0xc083,	// (0x000532ac) input_focus_pane_g8

0xc08b,	// (0x000532b4) input_focus_pane_g9

0xadc8,	// (0x00051ff1) input_focus_pane_g10

0x0009,

0xf692,	// (0x000568bb) input_focus_pane_g

0xd2f5,	// (0x0005451e) wait_border_pane_g3_copy1

0x835b,	// (0x0004f584) data_form_pane_t1

0xadc8,	// (0x00051ff1) wait_anim_pane_g1_copy1

0x8daa,	// (0x0004ffd3) data_form_wide_pane_t1

0x8375,	// (0x0004f59e) list_form_graphic_pane_cp_ParamLimits

0x8375,	// (0x0004f59e) list_form_graphic_pane_cp

0xdeea,	// (0x00055113) slider_form_pane_g1

0xdef3,	// (0x0005511c) slider_form_pane_g2

0x0006,

0xf990,	// (0x00056bb9) slider_form_pane_g

0x8375,	// (0x0004f59e) list_form_graphic_pane_ParamLimits

0x8375,	// (0x0004f59e) list_form_graphic_pane

0x30af,	// (0x0004a2d8) list_form_graphic_pane_g1

0x30b7,	// (0x0004a2e0) list_form_graphic_pane_t1_ParamLimits

0x30b7,	// (0x0004a2e0) list_form_graphic_pane_t1

0xae2e,	// (0x00052057) list_highlight_pane_cp5_ParamLimits

0xae2e,	// (0x00052057) list_highlight_pane_cp5

0x30cc,	// (0x0004a2f5) find_pane_g1

0xc093,	// (0x000532bc) input_find_pane

0x30d5,	// (0x0004a2fe) input_find_pane_g1_ParamLimits

0x30d5,	// (0x0004a2fe) input_find_pane_g1

0x30e1,	// (0x0004a30a) input_find_pane_t1_ParamLimits

0x30e1,	// (0x0004a30a) input_find_pane_t1

0x30f6,	// (0x0004a31f) input_find_pane_t2_ParamLimits

0x30f6,	// (0x0004a31f) input_find_pane_t2

0x0001,

0xf6a7,	// (0x000568d0) input_find_pane_t_ParamLimits

0xf6a7,	// (0x000568d0) input_find_pane_t

0xc09c,	// (0x000532c5) input_focus_pane_cp5_ParamLimits

0xc09c,	// (0x000532c5) input_focus_pane_cp5

0xc0aa,	// (0x000532d3) bg_popup_window_pane_cp2_ParamLimits

0xc0aa,	// (0x000532d3) bg_popup_window_pane_cp2

0xc0b7,	// (0x000532e0) listscroll_menu_pane_ParamLimits

0xc0b7,	// (0x000532e0) listscroll_menu_pane

0x9741,	// (0x0005096a) popup_submenu_window_ParamLimits

0x9741,	// (0x0005096a) popup_submenu_window

0xc0c3,	// (0x000532ec) find_popup_pane_g1

0xc0cb,	// (0x000532f4) input_popup_find_pane_cp

0xc09c,	// (0x000532c5) input_focus_pane_cp4_ParamLimits

0xc09c,	// (0x000532c5) input_focus_pane_cp4

0xc0d5,	// (0x000532fe) input_popup_find_pane_t1_ParamLimits

0xc0d5,	// (0x000532fe) input_popup_find_pane_t1

0xadd2,	// (0x00051ffb) bg_popup_sub_pane_cp

0xc103,	// (0x0005332c) listscroll_popup_sub_pane

0xc10b,	// (0x00053334) list_submenu_pane_ParamLimits

0xc10b,	// (0x00053334) list_submenu_pane

0xc11c,	// (0x00053345) scroll_pane_cp4

0xc124,	// (0x0005334d) list_single_popup_submenu_pane_ParamLimits

0xc124,	// (0x0005334d) list_single_popup_submenu_pane

0xc138,	// (0x00053361) list_single_popup_submenu_pane_g1

0xc140,	// (0x00053369) list_single_popup_submenu_pane_t1_ParamLimits

0xc140,	// (0x00053369) list_single_popup_submenu_pane_t1

0xae20,	// (0x00052049) bg_active_tab_pane_cp1_ParamLimits

0xae20,	// (0x00052049) bg_active_tab_pane_cp1

0x9777,	// (0x000509a0) tabs_2_active_pane_g1

0x977f,	// (0x000509a8) tabs_2_active_pane_t1

0xae20,	// (0x00052049) bg_passive_tab_pane_cp1_ParamLimits

0xae20,	// (0x00052049) bg_passive_tab_pane_cp1

0x9777,	// (0x000509a0) tabs_2_passive_pane_g1

0x977f,	// (0x000509a8) tabs_2_passive_pane_t1

0xae2e,	// (0x00052057) bg_active_tab_pane_cp4

0x9791,	// (0x000509ba) tabs_2_long_active_pane_t1

0xc155,	// (0x0005337e) bg_passive_tab_pane_cp4

0x1a58,	// (0x00048c81) list_single_midp_graphic_pane_g4_ParamLimits

0xae2e,	// (0x00052057) bg_active_tab_pane_cp5

0x97a4,	// (0x000509cd) tabs_3_long_active_pane_t1

0xc155,	// (0x0005337e) bg_passive_tab_pane_cp5

0x1a58,	// (0x00048c81) list_single_midp_graphic_pane_g4

0xae2e,	// (0x00052057) bg_popup_window_pane_cp13_ParamLimits

0xae2e,	// (0x00052057) bg_popup_window_pane_cp13

0xc16a,	// (0x00053393) listscroll_popup_fast_pane_ParamLimits

0xc16a,	// (0x00053393) listscroll_popup_fast_pane

0xc176,	// (0x0005339f) grid_popup_fast_pane_ParamLimits

0xc176,	// (0x0005339f) grid_popup_fast_pane

0xc188,	// (0x000533b1) scroll_pane_cp9_ParamLimits

0xc188,	// (0x000533b1) scroll_pane_cp9

0xf24b,	// (0x00056474) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf24b,	// (0x00056474) list_single_graphic_hl_pane_t1_cp2

0xc1ac,	// (0x000533d5) input_focus_pane_cp20_ParamLimits

0xc1ac,	// (0x000533d5) input_focus_pane_cp20

0xc1ba,	// (0x000533e3) query_popup_data_pane_t1_ParamLimits

0xc1ba,	// (0x000533e3) query_popup_data_pane_t1

0xc1cd,	// (0x000533f6) query_popup_data_pane_t2_ParamLimits

0xc1cd,	// (0x000533f6) query_popup_data_pane_t2

0xc213,	// (0x0005343c) query_popup_data_pane_t3_ParamLimits

0xc213,	// (0x0005343c) query_popup_data_pane_t3

0xc254,	// (0x0005347d) query_popup_data_pane_t4_ParamLimits

0xc254,	// (0x0005347d) query_popup_data_pane_t4

0xc290,	// (0x000534b9) query_popup_data_pane_t5_ParamLimits

0xc290,	// (0x000534b9) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x000568d5) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x000568d5) query_popup_data_pane_t

0xba89,	// (0x00052cb2) bg_set_opt_pane_g1

0xba91,	// (0x00052cba) bg_set_opt_pane_g2

0xba99,	// (0x00052cc2) bg_set_opt_pane_g3

0xbaa1,	// (0x00052cca) bg_set_opt_pane_g4

0xc06b,	// (0x00053294) bg_set_opt_pane_g5

0xc073,	// (0x0005329c) bg_set_opt_pane_g6

0xc07b,	// (0x000532a4) bg_set_opt_pane_g7

0xc083,	// (0x000532ac) bg_set_opt_pane_g8

0xc08b,	// (0x000532b4) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x000568e0) bg_set_opt_pane_g

0x1104,	// (0x0004832d) control_top_pane_stacon_ParamLimits

0x1104,	// (0x0004832d) control_top_pane_stacon

0x1157,	// (0x00048380) signal_pane_stacon_ParamLimits

0x1157,	// (0x00048380) signal_pane_stacon

0xc6f7,	// (0x00053920) stacon_top_pane_g1_ParamLimits

0xc6f7,	// (0x00053920) stacon_top_pane_g1

0x117c,	// (0x000483a5) title_pane_stacon_ParamLimits

0x117c,	// (0x000483a5) title_pane_stacon

0x11a6,	// (0x000483cf) uni_indicator_pane_stacon_ParamLimits

0x11a6,	// (0x000483cf) uni_indicator_pane_stacon

0x11bb,	// (0x000483e4) battery_pane_stacon_ParamLimits

0x11bb,	// (0x000483e4) battery_pane_stacon

0x11ff,	// (0x00048428) control_bottom_pane_stacon_ParamLimits

0x11ff,	// (0x00048428) control_bottom_pane_stacon

0x1222,	// (0x0004844b) navi_pane_stacon_ParamLimits

0x1222,	// (0x0004844b) navi_pane_stacon

0xc719,	// (0x00053942) stacon_bottom_pane_g1_ParamLimits

0xc719,	// (0x00053942) stacon_bottom_pane_g1

0x0e6e,	// (0x00048097) aid_levels_signal_lsc_ParamLimits

0x0e6e,	// (0x00048097) aid_levels_signal_lsc

0x0e85,	// (0x000480ae) signal_pane_stacon_g1_ParamLimits

0x0e85,	// (0x000480ae) signal_pane_stacon_g1

0x0e99,	// (0x000480c2) signal_pane_stacon_g2_ParamLimits

0x0e99,	// (0x000480c2) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x000568f3) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x000568f3) signal_pane_stacon_g

0x0ece,	// (0x000480f7) title_pane_stacon_t1_ParamLimits

0x0ece,	// (0x000480f7) title_pane_stacon_t1

0xc2d4,	// (0x000534fd) uni_indicator_pane_stacon_g1

0xc2de,	// (0x00053507) uni_indicator_pane_stacon_g2

0xc2e8,	// (0x00053511) uni_indicator_pane_stacon_g3

0xc2f2,	// (0x0005351b) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x000568ff) uni_indicator_pane_stacon_g

0x0ef3,	// (0x0004811c) control_top_pane_stacon_g1

0x0efb,	// (0x00048124) control_top_pane_stacon_t1_ParamLimits

0x0efb,	// (0x00048124) control_top_pane_stacon_t1

0x0f32,	// (0x0004815b) aid_levels_battery_lsc_ParamLimits

0x0f32,	// (0x0004815b) aid_levels_battery_lsc

0x0f4a,	// (0x00048173) battery_pane_stacon_g1_ParamLimits

0x0f4a,	// (0x00048173) battery_pane_stacon_g1

0x0f5d,	// (0x00048186) battery_pane_stacon_g2_ParamLimits

0x0f5d,	// (0x00048186) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00056908) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00056908) battery_pane_stacon_g

0x0f9b,	// (0x000481c4) navi_icon_pane_stacon

0x0faf,	// (0x000481d8) navi_navi_pane_stacon

0x0f9b,	// (0x000481c4) navi_text_pane_stacon

0x0ef3,	// (0x0004811c) control_bottom_pane_stacon_g1

0x0fc3,	// (0x000481ec) control_bottom_pane_stacon_t1_ParamLimits

0x0fc3,	// (0x000481ec) control_bottom_pane_stacon_t1

0x97b6,	// (0x000509df) grid_app_pane_ParamLimits

0x97b6,	// (0x000509df) grid_app_pane

0x97ec,	// (0x00050a15) scroll_pane_cp15_ParamLimits

0x97ec,	// (0x00050a15) scroll_pane_cp15

0x9805,	// (0x00050a2e) cell_app_pane_ParamLimits

0x9805,	// (0x00050a2e) cell_app_pane

0x984c,	// (0x00050a75) cell_app_pane_g1_ParamLimits

0x984c,	// (0x00050a75) cell_app_pane_g1

0xc316,	// (0x0005353f) cell_app_pane_g2_ParamLimits

0xc316,	// (0x0005353f) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0005690d) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0005690d) cell_app_pane_g

0x986c,	// (0x00050a95) cell_app_pane_t1_ParamLimits

0x986c,	// (0x00050a95) cell_app_pane_t1

0xc322,	// (0x0005354b) grid_highlight_pane_ParamLimits

0xc322,	// (0x0005354b) grid_highlight_pane

0xba89,	// (0x00052cb2) cell_highlight_pane_g1

0xba91,	// (0x00052cba) cell_highlight_pane_g2

0xba99,	// (0x00052cc2) cell_highlight_pane_g3

0xbaa1,	// (0x00052cca) cell_highlight_pane_g4

0xc06b,	// (0x00053294) cell_highlight_pane_g5

0xc073,	// (0x0005329c) cell_highlight_pane_g6

0xc07b,	// (0x000532a4) cell_highlight_pane_g7

0xc083,	// (0x000532ac) cell_highlight_pane_g8

0xc08b,	// (0x000532b4) cell_highlight_pane_g9

0xadc8,	// (0x00051ff1) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x000568bb) cell_highlight_pane_g

0xc333,	// (0x0005355c) bg_scroll_pane

0x100d,	// (0x00048236) scroll_handle_pane

0xc37a,	// (0x000535a3) scroll_bg_pane_g1

0xc38f,	// (0x000535b8) scroll_bg_pane_g2

0xc3a7,	// (0x000535d0) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x00056912) scroll_bg_pane_g

0xc3bc,	// (0x000535e5) scroll_handle_focus_pane_ParamLimits

0xc3bc,	// (0x000535e5) scroll_handle_focus_pane

0xc37a,	// (0x000535a3) scroll_handle_pane_g1

0xc3c9,	// (0x000535f2) scroll_handle_pane_g2

0xc3a7,	// (0x000535d0) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00056919) scroll_handle_pane_g

0xc09c,	// (0x000532c5) bg_popup_sub_pane_cp21_ParamLimits

0xc09c,	// (0x000532c5) bg_popup_sub_pane_cp21

0xc3dd,	// (0x00053606) popup_fep_japan_predictive_window_t1_ParamLimits

0xc3dd,	// (0x00053606) popup_fep_japan_predictive_window_t1

0xc3f7,	// (0x00053620) popup_fep_japan_predictive_window_t2_ParamLimits

0xc3f7,	// (0x00053620) popup_fep_japan_predictive_window_t2

0xc42a,	// (0x00053653) popup_fep_japan_predictive_window_t3_ParamLimits

0xc42a,	// (0x00053653) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x00056920) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x00056920) popup_fep_japan_predictive_window_t

0xadd2,	// (0x00051ffb) bg_popup_sub_pane_cp23

0xc461,	// (0x0005368a) listscroll_japin_cand_pane

0xc469,	// (0x00053692) popup_fep_japan_candidate_window_t1

0xc477,	// (0x000536a0) candidate_pane_ParamLimits

0xc477,	// (0x000536a0) candidate_pane

0xc489,	// (0x000536b2) scroll_pane_cp30

0xc491,	// (0x000536ba) list_single_popup_jap_candidate_pane_ParamLimits

0xc491,	// (0x000536ba) list_single_popup_jap_candidate_pane

0xadd2,	// (0x00051ffb) list_highlight_pane_cp30

0xc4a5,	// (0x000536ce) list_single_popup_jap_candidate_pane_t1

0xc4b4,	// (0x000536dd) level_1_signal

0xc4c1,	// (0x000536ea) level_2_signal

0xc4ce,	// (0x000536f7) level_3_signal

0xc4db,	// (0x00053704) level_4_signal

0xc4e8,	// (0x00053711) level_5_signal

0xc4f5,	// (0x0005371e) level_6_signal

0xc502,	// (0x0005372b) level_7_signal

0xc4b4,	// (0x000536dd) level_1_battery

0xc4c1,	// (0x000536ea) level_2_battery

0xc4ce,	// (0x000536f7) level_3_battery

0xc4db,	// (0x00053704) level_4_battery

0xc4e8,	// (0x00053711) level_5_battery

0xc4f5,	// (0x0005371e) level_6_battery

0xc502,	// (0x0005372b) level_7_battery

0xc527,	// (0x00053750) list_menu_pane_ParamLimits

0xc527,	// (0x00053750) list_menu_pane

0xc53d,	// (0x00053766) scroll_pane_cp25_ParamLimits

0xc53d,	// (0x00053766) scroll_pane_cp25

0xc556,	// (0x0005377f) list_double2_graphic_pane_cp2_ParamLimits

0xc556,	// (0x0005377f) list_double2_graphic_pane_cp2

0xc556,	// (0x0005377f) list_double2_large_graphic_pane_cp2_ParamLimits

0xc556,	// (0x0005377f) list_double2_large_graphic_pane_cp2

0xc556,	// (0x0005377f) list_double2_pane_cp2_ParamLimits

0xc556,	// (0x0005377f) list_double2_pane_cp2

0xc556,	// (0x0005377f) list_double_graphic_pane_cp2_ParamLimits

0xc556,	// (0x0005377f) list_double_graphic_pane_cp2

0xc556,	// (0x0005377f) list_double_large_graphic_pane_cp2_ParamLimits

0xc556,	// (0x0005377f) list_double_large_graphic_pane_cp2

0xc556,	// (0x0005377f) list_double_number_pane_cp2_ParamLimits

0xc556,	// (0x0005377f) list_double_number_pane_cp2

0xc556,	// (0x0005377f) list_double_pane_cp2_ParamLimits

0xc556,	// (0x0005377f) list_double_pane_cp2

0x9894,	// (0x00050abd) list_single_2graphic_pane_cp2_ParamLimits

0x9894,	// (0x00050abd) list_single_2graphic_pane_cp2

0x9894,	// (0x00050abd) list_single_graphic_heading_pane_cp2_ParamLimits

0x9894,	// (0x00050abd) list_single_graphic_heading_pane_cp2

0x9894,	// (0x00050abd) list_single_graphic_pane_cp2_ParamLimits

0x9894,	// (0x00050abd) list_single_graphic_pane_cp2

0x9894,	// (0x00050abd) list_single_heading_pane_cp2_ParamLimits

0x9894,	// (0x00050abd) list_single_heading_pane_cp2

0xc566,	// (0x0005378f) list_single_large_graphic_pane_cp2_ParamLimits

0xc566,	// (0x0005378f) list_single_large_graphic_pane_cp2

0x9894,	// (0x00050abd) list_single_number_heading_pane_cp2_ParamLimits

0x9894,	// (0x00050abd) list_single_number_heading_pane_cp2

0x9894,	// (0x00050abd) list_single_number_pane_cp2_ParamLimits

0x9894,	// (0x00050abd) list_single_number_pane_cp2

0x9894,	// (0x00050abd) list_single_pane_cp2_ParamLimits

0x9894,	// (0x00050abd) list_single_pane_cp2

0xc580,	// (0x000537a9) bg_popup_sub_pane_cp22

0x10bc,	// (0x000482e5) popup_side_volume_key_window_g1

0x10e0,	// (0x00048309) popup_side_volume_key_window_t1

0x10fc,	// (0x00048325) volume_small_pane_cp1

0xae20,	// (0x00052049) bg_popup_sub_pane_cp24_ParamLimits

0xae20,	// (0x00052049) bg_popup_sub_pane_cp24

0xc596,	// (0x000537bf) fep_china_uni_candidate_pane_ParamLimits

0xc596,	// (0x000537bf) fep_china_uni_candidate_pane

0xc5aa,	// (0x000537d3) fep_china_uni_entry_pane

0xc5ba,	// (0x000537e3) popup_fep_china_uni_window_g1

0xc5d6,	// (0x000537ff) fep_china_uni_entry_pane_g1

0xc5de,	// (0x00053807) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x00056951) fep_china_uni_entry_pane_g

0xc5e6,	// (0x0005380f) fep_entry_item_pane

0xc5f0,	// (0x00053819) fep_candidate_item_pane

0xc5f8,	// (0x00053821) fep_china_uni_candidate_pane_g1

0xc600,	// (0x00053829) fep_china_uni_candidate_pane_g2

0xc608,	// (0x00053831) fep_china_uni_candidate_pane_g3

0xc610,	// (0x00053839) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x00056956) fep_china_uni_candidate_pane_g

0xadc8,	// (0x00051ff1) fep_entry_item_pane_g1

0xc618,	// (0x00053841) fep_entry_item_pane_t1_ParamLimits

0xc618,	// (0x00053841) fep_entry_item_pane_t1

0xc62e,	// (0x00053857) fep_candidate_item_pane_t1_ParamLimits

0xc62e,	// (0x00053857) fep_candidate_item_pane_t1

0xc643,	// (0x0005386c) fep_candidate_item_pane_t2_ParamLimits

0xc643,	// (0x0005386c) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0005695f) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0005695f) fep_candidate_item_pane_t

0xae2e,	// (0x00052057) list_highlight_pane_cp31_ParamLimits

0xae2e,	// (0x00052057) list_highlight_pane_cp31

0xc655,	// (0x0005387e) level_1_signal_lsc

0xc65e,	// (0x00053887) level_2_signal_lsc

0xc667,	// (0x00053890) level_3_signal_lsc

0xc670,	// (0x00053899) level_4_signal_lsc

0xc679,	// (0x000538a2) level_5_signal_lsc

0xc682,	// (0x000538ab) level_6_signal_lsc

0xc68b,	// (0x000538b4) level_7_signal_lsc

0xc68b,	// (0x000538b4) level_1_battery_lsc

0xc694,	// (0x000538bd) level_2_battery_lsc

0xc69d,	// (0x000538c6) level_3_battery_lsc

0xc6a6,	// (0x000538cf) level_4_battery_lsc

0xc6af,	// (0x000538d8) level_5_battery_lsc

0xc6b8,	// (0x000538e1) level_6_battery_lsc

0xc655,	// (0x0005387e) level_7_battery_lsc

0xc6c1,	// (0x000538ea) scroll_handle_focus_pane_g1

0xc6ca,	// (0x000538f3) scroll_handle_focus_pane_g2

0xc6d3,	// (0x000538fc) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00056964) scroll_handle_focus_pane_g

0x32b7,	// (0x0004a4e0) list_single_2graphic_pane_g1_ParamLimits

0x32b7,	// (0x0004a4e0) list_single_2graphic_pane_g1

0x7e93,	// (0x0004f0bc) list_single_2graphic_pane_g2_ParamLimits

0x7e93,	// (0x0004f0bc) list_single_2graphic_pane_g2

0x2f86,	// (0x0004a1af) list_single_2graphic_pane_g3_ParamLimits

0x2f86,	// (0x0004a1af) list_single_2graphic_pane_g3

0x32c3,	// (0x0004a4ec) list_single_2graphic_pane_g4_ParamLimits

0x32c3,	// (0x0004a4ec) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0005696b) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0005696b) list_single_2graphic_pane_g

0x32d4,	// (0x0004a4fd) list_single_2graphic_pane_t1_ParamLimits

0x32d4,	// (0x0004a4fd) list_single_2graphic_pane_t1

0x8387,	// (0x0004f5b0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8387,	// (0x0004f5b0) list_double2_graphic_large_graphic_pane_g1

0x805b,	// (0x0004f284) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x805b,	// (0x0004f284) list_double2_graphic_large_graphic_pane_g2

0x7eb0,	// (0x0004f0d9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7eb0,	// (0x0004f0d9) list_double2_graphic_large_graphic_pane_g3

0x8399,	// (0x0004f5c2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8399,	// (0x0004f5c2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00056974) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00056974) list_double2_graphic_large_graphic_pane_g

0x83a5,	// (0x0004f5ce) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x83a5,	// (0x0004f5ce) list_double2_graphic_large_graphic_pane_t1

0x83bb,	// (0x0004f5e4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x83bb,	// (0x0004f5e4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0005697d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0005697d) list_double2_graphic_large_graphic_pane_t

0xc7a5,	// (0x000539ce) popup_fast_swap_window_ParamLimits

0xc7a5,	// (0x000539ce) popup_fast_swap_window

0xc7c1,	// (0x000539ea) popup_side_volume_key_window

0xc7db,	// (0x00053a04) stacon_top_pane

0xc7e5,	// (0x00053a0e) status_pane_ParamLimits

0xc7e5,	// (0x00053a0e) status_pane

0xc7db,	// (0x00053a04) status_small_pane

0xadd2,	// (0x00051ffb) control_pane

0xadd2,	// (0x00051ffb) stacon_bottom_pane

0xb917,	// (0x00052b40) scroll_pane_cp121

0xb90e,	// (0x00052b37) set_content_pane

0xc6dc,	// (0x00053905) bg_active_tab_pane_g1_cp1

0xc6e5,	// (0x0005390e) bg_active_tab_pane_g2_cp1

0xc6ee,	// (0x00053917) bg_active_tab_pane_g3_cp1

0xc6dc,	// (0x00053905) bg_passive_tab_pane_g1_cp1

0xc6e5,	// (0x0005390e) bg_passive_tab_pane_g2_cp1

0xc6ee,	// (0x00053917) bg_passive_tab_pane_g3_cp1

0x9b51,	// (0x00050d7a) bg_active_tab_pane_g1_cp2

0xc6e5,	// (0x0005390e) bg_active_tab_pane_g2_cp2

0x9b5a,	// (0x00050d83) bg_active_tab_pane_g3_cp2

0x9b51,	// (0x00050d7a) bg_passive_tab_pane_g1_cp2

0xc6e5,	// (0x0005390e) bg_passive_tab_pane_g2_cp2

0x9b5a,	// (0x00050d83) bg_passive_tab_pane_g3_cp2

0x9b63,	// (0x00050d8c) bg_active_tab_pane_g1_cp3

0xc6e5,	// (0x0005390e) bg_active_tab_pane_g2_cp3

0x9b6c,	// (0x00050d95) bg_active_tab_pane_g3_cp3

0x9b63,	// (0x00050d8c) bg_passive_tab_pane_g1_cp3

0xc6e5,	// (0x0005390e) bg_passive_tab_pane_g2_cp3

0x9b6c,	// (0x00050d95) bg_passive_tab_pane_g3_cp3

0x9b75,	// (0x00050d9e) bg_active_tab_pane_g1_cp4

0xc6e5,	// (0x0005390e) bg_active_tab_pane_g2_cp4

0x9b7e,	// (0x00050da7) bg_active_tab_pane_g3_cp4

0x9b75,	// (0x00050d9e) bg_passive_tab_pane_g1_cp4

0xc6e5,	// (0x0005390e) bg_passive_tab_pane_g2_cp4

0x9b7e,	// (0x00050da7) bg_passive_tab_pane_g3_cp4

0xc735,	// (0x0005395e) bg_active_tab_pane_g1_cp5

0xc6e5,	// (0x0005390e) bg_active_tab_pane_g2_cp5

0xc73e,	// (0x00053967) bg_active_tab_pane_g3_cp5

0xc735,	// (0x0005395e) bg_passive_tab_pane_g1_cp5

0xc6e5,	// (0x0005390e) bg_passive_tab_pane_g2_cp5

0xc73e,	// (0x00053967) bg_passive_tab_pane_g3_cp5

0xd95c,	// (0x00054b85) list_set_graphic_pane_ParamLimits

0xd95c,	// (0x00054b85) list_set_graphic_pane

0xadd2,	// (0x00051ffb) bg_set_opt_pane_cp4

0xc747,	// (0x00053970) list_set_graphic_pane_g1_ParamLimits

0xc747,	// (0x00053970) list_set_graphic_pane_g1

0xc753,	// (0x0005397c) list_set_graphic_pane_g2_ParamLimits

0xc753,	// (0x0005397c) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x00056982) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x00056982) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x00056cfe) volume_small_pane_cp_g

0x9b87,	// (0x00050db0) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9b87,	// (0x00050db0) list_double2_large_graphic_pane_g1_cp2

0x9b95,	// (0x00050dbe) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9b95,	// (0x00050dbe) list_double2_large_graphic_pane_g2_cp2

0xc775,	// (0x0005399e) list_double2_large_graphic_pane_g3_cp2

0xc77d,	// (0x000539a6) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc77d,	// (0x000539a6) list_double2_large_graphic_pane_t1_cp2

0xc793,	// (0x000539bc) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc793,	// (0x000539bc) list_double2_large_graphic_pane_t2_cp2

0xa864,	// (0x00051a8d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa864,	// (0x00051a8d) list_double_large_graphic_pane_g1_cp2

0xa877,	// (0x00051aa0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa877,	// (0x00051aa0) list_double_large_graphic_pane_g2_cp2

0xc8c6,	// (0x00053aef) list_double_large_graphic_pane_g3_cp2

0xdca8,	// (0x00054ed1) list_double_large_graphic_pane_g4_cp

0xdcb0,	// (0x00054ed9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xdcb0,	// (0x00054ed9) list_double_large_graphic_pane_t1_cp2

0xdcc7,	// (0x00054ef0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xdcc7,	// (0x00054ef0) list_double_large_graphic_pane_t2_cp2

0x9ba6,	// (0x00050dcf) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9ba6,	// (0x00050dcf) list_double2_graphic_pane_g1_cp2

0x9bb4,	// (0x00050ddd) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9bb4,	// (0x00050ddd) list_double2_graphic_pane_g2_cp2

0x9bc5,	// (0x00050dee) list_double2_graphic_pane_g3_cp2

0xc7f3,	// (0x00053a1c) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc7f3,	// (0x00053a1c) list_double2_graphic_pane_t1_cp2

0xc809,	// (0x00053a32) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc809,	// (0x00053a32) list_double2_graphic_pane_t2_cp2

0xc81b,	// (0x00053a44) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc81b,	// (0x00053a44) list_single_number_heading_pane_g1_cp2

0xc827,	// (0x00053a50) list_single_number_heading_pane_g2_cp2

0xc82f,	// (0x00053a58) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc82f,	// (0x00053a58) list_single_number_heading_pane_t1_cp2

0xa12d,	// (0x00051356) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa12d,	// (0x00051356) list_single_number_heading_pane_t2_cp2

0xc845,	// (0x00053a6e) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc845,	// (0x00053a6e) list_single_number_heading_pane_t3_cp2

0xc81b,	// (0x00053a44) list_single_heading_pane_g1_cp2_ParamLimits

0xc81b,	// (0x00053a44) list_single_heading_pane_g1_cp2

0xc827,	// (0x00053a50) list_single_heading_pane_g2_cp2

0xc82f,	// (0x00053a58) list_single_heading_pane_t1_cp2_ParamLimits

0xc82f,	// (0x00053a58) list_single_heading_pane_t1_cp2

0xa850,	// (0x00051a79) list_single_heading_pane_t2_cp2_ParamLimits

0xa850,	// (0x00051a79) list_single_heading_pane_t2_cp2

0xda1e,	// (0x00054c47) list_double_graphic_pane_g1_cp2_ParamLimits

0xda1e,	// (0x00054c47) list_double_graphic_pane_g1_cp2

0xda2a,	// (0x00054c53) list_double_graphic_pane_g2_cp2_ParamLimits

0xda2a,	// (0x00054c53) list_double_graphic_pane_g2_cp2

0xda39,	// (0x00054c62) list_double_graphic_pane_g3_cp2

0xda41,	// (0x00054c6a) list_double_graphic_pane_t1_cp2_ParamLimits

0xda41,	// (0x00054c6a) list_double_graphic_pane_t1_cp2

0xda57,	// (0x00054c80) list_double_graphic_pane_t2_cp2_ParamLimits

0xda57,	// (0x00054c80) list_double_graphic_pane_t2_cp2

0xc8ba,	// (0x00053ae3) list_double_number_pane_g1_cp2_ParamLimits

0xc8ba,	// (0x00053ae3) list_double_number_pane_g1_cp2

0xc8c6,	// (0x00053aef) list_double_number_pane_g2_cp2

0xa82a,	// (0x00051a53) list_double_number_pane_t1_cp2_ParamLimits

0xa82a,	// (0x00051a53) list_double_number_pane_t1_cp2

0xd9f6,	// (0x00054c1f) list_double_number_pane_t2_cp2_ParamLimits

0xd9f6,	// (0x00054c1f) list_double_number_pane_t2_cp2

0xda0c,	// (0x00054c35) list_double_number_pane_t3_cp2_ParamLimits

0xda0c,	// (0x00054c35) list_double_number_pane_t3_cp2

0xa778,	// (0x000519a1) list_single_graphic_pane_g1_cp2_ParamLimits

0xa778,	// (0x000519a1) list_single_graphic_pane_g1_cp2

0xc906,	// (0x00053b2f) list_single_graphic_pane_g2_cp2_ParamLimits

0xc906,	// (0x00053b2f) list_single_graphic_pane_g2_cp2

0xc912,	// (0x00053b3b) list_single_graphic_pane_g3_cp2

0xd946,	// (0x00054b6f) list_single_graphic_pane_t1_cp2_ParamLimits

0xd946,	// (0x00054b6f) list_single_graphic_pane_t1_cp2

0xc906,	// (0x00053b2f) list_single_number_pane_g1_cp2_ParamLimits

0xc906,	// (0x00053b2f) list_single_number_pane_g1_cp2

0xc912,	// (0x00053b3b) list_single_number_pane_g2_cp2

0xd946,	// (0x00054b6f) list_single_number_pane_t1_cp2_ParamLimits

0xd946,	// (0x00054b6f) list_single_number_pane_t1_cp2

0xa764,	// (0x0005198d) list_single_number_pane_t2_cp2_ParamLimits

0xa764,	// (0x0005198d) list_single_number_pane_t2_cp2

0x9b95,	// (0x00050dbe) list_double2_pane_g1_cp2_ParamLimits

0x9b95,	// (0x00050dbe) list_double2_pane_g1_cp2

0xc775,	// (0x0005399e) list_double2_pane_g2_cp2

0xc892,	// (0x00053abb) list_double2_pane_t1_cp2_ParamLimits

0xc892,	// (0x00053abb) list_double2_pane_t1_cp2

0xc8a8,	// (0x00053ad1) list_double2_pane_t2_cp2_ParamLimits

0xc8a8,	// (0x00053ad1) list_double2_pane_t2_cp2

0xc8ba,	// (0x00053ae3) list_double_pane_g1_cp2_ParamLimits

0xc8ba,	// (0x00053ae3) list_double_pane_g1_cp2

0xc8c6,	// (0x00053aef) list_double_pane_g2_cp2

0xc8ce,	// (0x00053af7) list_double_pane_t1_cp2_ParamLimits

0xc8ce,	// (0x00053af7) list_double_pane_t1_cp2

0xc8e4,	// (0x00053b0d) list_double_pane_t2_cp2_ParamLimits

0xc8e4,	// (0x00053b0d) list_double_pane_t2_cp2

0xc8f6,	// (0x00053b1f) list_single_pane_cp2_g3

0xc906,	// (0x00053b2f) list_single_pane_g1_cp2_ParamLimits

0xc906,	// (0x00053b2f) list_single_pane_g1_cp2

0xc912,	// (0x00053b3b) list_single_pane_g2_cp2

0xc91a,	// (0x00053b43) list_single_pane_t1_cp2_ParamLimits

0xc91a,	// (0x00053b43) list_single_pane_t1_cp2

0xa159,	// (0x00051382) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa159,	// (0x00051382) list_single_large_graphic_pane_g1_cp2

0xc932,	// (0x00053b5b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc932,	// (0x00053b5b) list_single_large_graphic_pane_g2_cp2

0xc93e,	// (0x00053b67) list_single_large_graphic_pane_g3_cp2

0xc946,	// (0x00053b6f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc946,	// (0x00053b6f) list_single_large_graphic_pane_g4_cp1

0xc960,	// (0x00053b89) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc960,	// (0x00053b89) list_single_large_graphic_pane_t1_cp2

0xd924,	// (0x00054b4d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd924,	// (0x00054b4d) list_single_graphic_heading_pane_g1_cp2

0xa73f,	// (0x00051968) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa73f,	// (0x00051968) list_single_graphic_heading_pane_g4_cp2

0xc912,	// (0x00053b3b) list_single_graphic_heading_pane_g5_cp2

0xd930,	// (0x00054b59) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd930,	// (0x00054b59) list_single_graphic_heading_pane_t1_cp2

0xa750,	// (0x00051979) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa750,	// (0x00051979) list_single_graphic_heading_pane_t2_cp2

0xd8f6,	// (0x00054b1f) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd8f6,	// (0x00054b1f) list_single_2graphic_pane_g1_cp2

0xa73f,	// (0x00051968) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa73f,	// (0x00051968) list_single_2graphic_pane_g2_cp2

0xc912,	// (0x00053b3b) list_single_2graphic_pane_g3_cp2

0xd902,	// (0x00054b2b) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd902,	// (0x00054b2b) list_single_2graphic_pane_g4_cp2

0xd90e,	// (0x00054b37) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd90e,	// (0x00054b37) list_single_2graphic_pane_t1_cp2

0xadc8,	// (0x00051ff1) list_highlight_pane_g10_cp1

0xd4ec,	// (0x00054715) list_highlight_pane_g1_cp1

0xd4f4,	// (0x0005471d) list_highlight_pane_g2_cp1

0xd4fc,	// (0x00054725) list_highlight_pane_g3_cp1

0xd504,	// (0x0005472d) list_highlight_pane_g4_cp1

0xd50c,	// (0x00054735) list_highlight_pane_g5_cp1

0xd514,	// (0x0005473d) list_highlight_pane_g6_cp1

0xd51c,	// (0x00054745) list_highlight_pane_g7_cp1

0xd524,	// (0x0005474d) list_highlight_pane_g8_cp1

0xd52c,	// (0x00054755) list_highlight_pane_g9_cp1

0xa701,	// (0x0005192a) form_field_slider_pane_t3

0xa711,	// (0x0005193a) form_field_slider_pane_t4

0xd420,	// (0x00054649) slider_form_pane_ParamLimits

0xd420,	// (0x00054649) slider_form_pane

0xadd2,	// (0x00051ffb) control_abbreviations

0xadd2,	// (0x00051ffb) control_conventions

0xadd2,	// (0x00051ffb) control_definitions

0xadd2,	// (0x00051ffb) format_table_attribute

0xdafc,	// (0x00054d25) bg_popup_preview_window_pane_g9

0xadd2,	// (0x00051ffb) format_table_data2

0xadd2,	// (0x00051ffb) format_table_data3

0xadd2,	// (0x00051ffb) format_table_data_example

0x0008,

0xadd2,	// (0x00051ffb) intro_purpose

0xf8f0,	// (0x00056b19) bg_popup_preview_window_pane_g

0xadd2,	// (0x00051ffb) texts_category

0xadd2,	// (0x00051ffb) texts_graphics

0xc976,	// (0x00053b9f) text_digital

0xc985,	// (0x00053bae) text_primary

0xc994,	// (0x00053bbd) text_primary_small

0xc9a3,	// (0x00053bcc) text_secondary

0xc9b2,	// (0x00053bdb) text_title

0xdfa1,	// (0x000551ca) bg_passive_tab_pane_g1_cp3_srt

0xc6e5,	// (0x0005390e) bg_passive_tab_pane_g2_cp3_srt

0xdfaa,	// (0x000551d3) bg_passive_tab_pane_g3_cp3_srt

0xae20,	// (0x00052049) bg_active_tab_pane_cp3_srt_ParamLimits

0xae20,	// (0x00052049) bg_active_tab_pane_cp3_srt

0xdfb3,	// (0x000551dc) tabs_4_active_pane_srt_g1

0xaaeb,	// (0x00051d14) tabs_4_active_pane_srt_t1_ParamLimits

0xaaeb,	// (0x00051d14) tabs_4_active_pane_srt_t1

0xdfa1,	// (0x000551ca) bg_active_tab_pane_g1_cp3_copy1

0xc6e5,	// (0x0005390e) bg_active_tab_pane_g2_cp3_copy1

0xdfaa,	// (0x000551d3) bg_active_tab_pane_g3_cp3_copy1

0xae2e,	// (0x00052057) tabs_2_long_active_pane_srt_ParamLimits

0xae2e,	// (0x00052057) tabs_2_long_active_pane_srt

0xae2e,	// (0x00052057) tabs_2_long_passive_pane_srt_ParamLimits

0xae2e,	// (0x00052057) tabs_2_long_passive_pane_srt

0xc155,	// (0x0005337e) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc155,	// (0x0005337e) bg_passive_tab_pane_cp4_srt

0xdea3,	// (0x000550cc) bg_passive_tab_pane_g1_cp4_srt

0xc6e5,	// (0x0005390e) bg_passive_tab_pane_g2_cp4_srt

0xdeac,	// (0x000550d5) bg_passive_tab_pane_g3_cp4_srt

0xae2e,	// (0x00052057) bg_active_tab_pane_cp4_srt_ParamLimits

0xae2e,	// (0x00052057) bg_active_tab_pane_cp4_srt

0xa918,	// (0x00051b41) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa918,	// (0x00051b41) tabs_2_long_active_pane_srt_t1

0xdea3,	// (0x000550cc) bg_active_tab_pane_g1_cp4_srt

0xc6e5,	// (0x0005390e) bg_active_tab_pane_g2_cp4_srt

0xdeac,	// (0x000550d5) bg_active_tab_pane_g3_cp4_srt

0xae20,	// (0x00052049) tabs_3_long_active_pane_srt_ParamLimits

0xae20,	// (0x00052049) tabs_3_long_active_pane_srt

0xae20,	// (0x00052049) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xae20,	// (0x00052049) tabs_3_long_passive_pane_cp_srt

0xae20,	// (0x00052049) tabs_3_long_passive_pane_srt_ParamLimits

0xae20,	// (0x00052049) tabs_3_long_passive_pane_srt

0xc155,	// (0x0005337e) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc155,	// (0x0005337e) bg_passive_tab_pane_cp5_srt

0xc735,	// (0x0005395e) bg_passive_tab_pane_g1_cp5_srt

0xc6e5,	// (0x0005390e) bg_passive_tab_pane_g2_cp5_srt

0xc73e,	// (0x00053967) bg_passive_tab_pane_g3_cp5_srt

0xae2e,	// (0x00052057) bg_active_tab_pane_cp5_srt_ParamLimits

0xae2e,	// (0x00052057) bg_active_tab_pane_cp5_srt

0xa902,	// (0x00051b2b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa902,	// (0x00051b2b) tabs_3_long_active_pane_srt_t1

0xc735,	// (0x0005395e) bg_active_tab_pane_g1_cp5_srt

0xc6e5,	// (0x0005390e) bg_active_tab_pane_g2_cp5_srt

0xc73e,	// (0x00053967) bg_active_tab_pane_g3_cp5_srt

0xde95,	// (0x000550be) navi_text_pane_srt_t1

0xde8d,	// (0x000550b6) navi_icon_pane_srt_g1

0xcac2,	// (0x00053ceb) midp_editing_number_pane_srt

0xc9c1,	// (0x00053bea) midp_ticker_pane_srt

0xcaca,	// (0x00053cf3) midp_ticker_pane_srt_g1

0xcad2,	// (0x00053cfb) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x000569a1) midp_ticker_pane_srt_g

0xcada,	// (0x00053d03) midp_ticker_pane_srt_t1

0xde7e,	// (0x000550a7) midp_editing_number_pane_t1_copy1

0xc155,	// (0x0005337e) listscroll_midp_pane

0xc155,	// (0x0005337e) midp_form_pane

0xc9c9,	// (0x00053bf2) midp_info_popup_window_ParamLimits

0xc9c9,	// (0x00053bf2) midp_info_popup_window

0xc09c,	// (0x000532c5) bg_popup_sub_pane_cp50_ParamLimits

0xc09c,	// (0x000532c5) bg_popup_sub_pane_cp50

0xd13d,	// (0x00054366) listscroll_midp_info_pane_ParamLimits

0xd13d,	// (0x00054366) listscroll_midp_info_pane

0xd125,	// (0x0005434e) listscroll_form_midp_pane_ParamLimits

0xd125,	// (0x0005434e) listscroll_form_midp_pane

0xd131,	// (0x0005435a) scroll_bar_cp050

0xa6f5,	// (0x0005191e) list_midp_pane

0xe8aa,	// (0x00055ad3) signal_pane_g2_cp

0xd057,	// (0x00054280) listscroll_midp_info_pane_t1_ParamLimits

0xd057,	// (0x00054280) listscroll_midp_info_pane_t1

0xd06f,	// (0x00054298) listscroll_midp_info_pane_t2_ParamLimits

0xd06f,	// (0x00054298) listscroll_midp_info_pane_t2

0xd0ad,	// (0x000542d6) listscroll_midp_info_pane_t3_ParamLimits

0xd0ad,	// (0x000542d6) listscroll_midp_info_pane_t3

0xd0e7,	// (0x00054310) listscroll_midp_info_pane_t4_ParamLimits

0xd0e7,	// (0x00054310) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x00056a54) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x00056a54) listscroll_midp_info_pane_t

0xc11c,	// (0x00053345) scroll_pane_cp21

0xcff9,	// (0x00054222) form_midp_field_choice_group_pane

0xd002,	// (0x0005422b) form_midp_field_text_pane

0xd03d,	// (0x00054266) form_midp_field_time_pane

0xd045,	// (0x0005426e) form_midp_gauge_slider_pane

0xd04e,	// (0x00054277) form_midp_gauge_wait_pane

0xadd2,	// (0x00051ffb) form_midp_image_pane

0x8c44,	// (0x0004fe6d) list_single_midp_pane_ParamLimits

0x8c44,	// (0x0004fe6d) list_single_midp_pane

0xa6d2,	// (0x000518fb) form_midp_field_text_pane_t1

0xce7b,	// (0x000540a4) input_focus_pane_cp050

0xcfe8,	// (0x00054211) list_midp_form_text_pane

0xcfb7,	// (0x000541e0) form_midp_field_choice_group_pane_t1

0xcfc5,	// (0x000541ee) input_focus_pane_cp051

0xcfd9,	// (0x00054202) list_midp_choice_pane

0xadd2,	// (0x00051ffb) status_idle_pane

0xcf9b,	// (0x000541c4) form_midp_field_time_pane_t1

0xadc8,	// (0x00051ff1) wait_anim_pane_g2_copy1

0xcfa9,	// (0x000541d2) form_midp_field_time_pane_t2

0x0001,

0xca34,	// (0x00053c5d) aid_navinavi_width_2_pane

0xf826,	// (0x00056a4f) form_midp_field_time_pane_t

0xadd2,	// (0x00051ffb) input_focus_pane_cp052

0xadd2,	// (0x00051ffb) bg_input_focus_pane_cp040

0xcf77,	// (0x000541a0) form_midp_gauge_slider_pane_t1

0xcf85,	// (0x000541ae) form_midp_gauge_slider_pane_t2

0xa6b2,	// (0x000518db) form_midp_gauge_slider_pane_t3

0xa6c2,	// (0x000518eb) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x00056a46) form_midp_gauge_slider_pane_t

0xcf93,	// (0x000541bc) form_midp_slider_pane

0xae2e,	// (0x00052057) bg_input_focus_pane_cp041_ParamLimits

0xae2e,	// (0x00052057) bg_input_focus_pane_cp041

0xcf44,	// (0x0005416d) form_midp_gauge_wait_pane_t1_ParamLimits

0xcf44,	// (0x0005416d) form_midp_gauge_wait_pane_t1

0xcf56,	// (0x0005417f) form_midp_gauge_wait_pane_t2_ParamLimits

0xcf56,	// (0x0005417f) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x00056a41) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x00056a41) form_midp_gauge_wait_pane_t

0xcf68,	// (0x00054191) form_midp_wait_pane_ParamLimits

0xcf68,	// (0x00054191) form_midp_wait_pane

0xcf0e,	// (0x00054137) form_midp_image_pane_g1

0xcf17,	// (0x00054140) form_midp_image_pane_t1

0xcf26,	// (0x0005414f) form_midp_image_pane_t2

0xcf35,	// (0x0005415e) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x00056a3a) form_midp_image_pane_t

0xcf05,	// (0x0005412e) list_single_midp_pane_g1

0x3991,	// (0x0004abba) list_single_midp_pane_t1

0xa69c,	// (0x000518c5) list_midp_form_item_pane_ParamLimits

0xa69c,	// (0x000518c5) list_midp_form_item_pane

0xc9dc,	// (0x00053c05) list_midp_form_item_pane_t1

0xc9eb,	// (0x00053c14) midp_ticker_pane_g1

0xc9f7,	// (0x00053c20) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00056987) midp_ticker_pane_g

0xca03,	// (0x00053c2c) midp_ticker_pane_t1

0xdf2e,	// (0x00055157) midp_editing_number_pane_t1

0xdf0c,	// (0x00055135) midp_editing_number_pane

0xdf1b,	// (0x00055144) midp_ticker_pane

0xde6e,	// (0x00055097) ai_message_heading_pane

0xadd2,	// (0x00051ffb) bg_popup_window_pane_cp14

0xde76,	// (0x0005509f) listscroll_ai_message_pane

0xddf8,	// (0x00055021) ai_message_heading_pane_g1_ParamLimits

0xddf8,	// (0x00055021) ai_message_heading_pane_g1

0xde04,	// (0x0005502d) ai_message_heading_pane_g2_ParamLimits

0xde04,	// (0x0005502d) ai_message_heading_pane_g2

0xde10,	// (0x00055039) ai_message_heading_pane_g3_ParamLimits

0xde10,	// (0x00055039) ai_message_heading_pane_g3

0xde1c,	// (0x00055045) ai_message_heading_pane_g4_ParamLimits

0xde1c,	// (0x00055045) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x00056b7b) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x00056b7b) ai_message_heading_pane_g

0xde28,	// (0x00055051) ai_message_heading_pane_t1_ParamLimits

0xde28,	// (0x00055051) ai_message_heading_pane_t1

0xde42,	// (0x0005506b) ai_message_heading_pane_t2_ParamLimits

0xde42,	// (0x0005506b) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x00056b84) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x00056b84) ai_message_heading_pane_t

0xde54,	// (0x0005507d) bg_popup_heading_pane_cp1_ParamLimits

0xde54,	// (0x0005507d) bg_popup_heading_pane_cp1

0xdde6,	// (0x0005500f) list_ai_message_pane_ParamLimits

0xdde6,	// (0x0005500f) list_ai_message_pane

0xc11c,	// (0x00053345) scroll_pane_cp10

0xdd82,	// (0x00054fab) list_ai_message_pane_g1

0xdd8a,	// (0x00054fb3) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x00056b58) list_ai_message_pane_g

0xdd92,	// (0x00054fbb) list_ai_message_pane_t1_ParamLimits

0xdd92,	// (0x00054fbb) list_ai_message_pane_t1

0xdda7,	// (0x00054fd0) list_ai_message_pane_t2_ParamLimits

0xdda7,	// (0x00054fd0) list_ai_message_pane_t2

0xddbc,	// (0x00054fe5) list_ai_message_pane_t3_ParamLimits

0xddbc,	// (0x00054fe5) list_ai_message_pane_t3

0xddd1,	// (0x00054ffa) list_ai_message_pane_t4_ParamLimits

0xddd1,	// (0x00054ffa) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x00056b5d) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x00056b5d) list_ai_message_pane_t

0xa8e0,	// (0x00051b09) cell_ai_soft_ind_pane_ParamLimits

0xa8e0,	// (0x00051b09) cell_ai_soft_ind_pane

0xca15,	// (0x00053c3e) cell_ai_soft_ind_pane_g1_ParamLimits

0xca15,	// (0x00053c3e) cell_ai_soft_ind_pane_g1

0xadd2,	// (0x00051ffb) grid_highlight_cp1

0xca22,	// (0x00053c4b) text_secondary_cp56_ParamLimits

0xca22,	// (0x00053c4b) text_secondary_cp56

0xdd57,	// (0x00054f80) example_general_pane_ParamLimits

0xdd57,	// (0x00054f80) example_general_pane

0xdd63,	// (0x00054f8c) example_parent_pane_g1_ParamLimits

0xdd63,	// (0x00054f8c) example_parent_pane_g1

0xdd6f,	// (0x00054f98) example_parent_pane_t1_ParamLimits

0xdd6f,	// (0x00054f98) example_parent_pane_t1

0x88f4,	// (0x0004fb1d) popup_preview_text_window_ParamLimits

0x88f4,	// (0x0004fb1d) popup_preview_text_window

0xc8fe,	// (0x00053b27) list_single_pane_cp2_g4

0xb4bc,	// (0x000526e5) bg_popup_preview_window_pane_ParamLimits

0xb4bc,	// (0x000526e5) bg_popup_preview_window_pane

0xdb04,	// (0x00054d2d) popup_preview_text_window_t1_ParamLimits

0xdb04,	// (0x00054d2d) popup_preview_text_window_t1

0xdb22,	// (0x00054d4b) popup_preview_text_window_t2_ParamLimits

0xdb22,	// (0x00054d4b) popup_preview_text_window_t2

0xdb6b,	// (0x00054d94) popup_preview_text_window_t3_ParamLimits

0xdb6b,	// (0x00054d94) popup_preview_text_window_t3

0xdbb0,	// (0x00054dd9) popup_preview_text_window_t4_ParamLimits

0xdbb0,	// (0x00054dd9) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x00056b2c) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x00056b2c) popup_preview_text_window_t

0xdc2e,	// (0x00054e57) scroll_pane_cp11

0xce07,	// (0x00054030) bg_popup_preview_window_pane_g1

0xdac4,	// (0x00054ced) bg_popup_preview_window_pane_g2

0xdacc,	// (0x00054cf5) bg_popup_preview_window_pane_g3

0xdad4,	// (0x00054cfd) bg_popup_preview_window_pane_g4

0xdadc,	// (0x00054d05) bg_popup_preview_window_pane_g5

0xdae4,	// (0x00054d0d) bg_popup_preview_window_pane_g6

0xdaec,	// (0x00054d15) bg_popup_preview_window_pane_g7

0xdaf4,	// (0x00054d1d) bg_popup_preview_window_pane_g8

0x0407,	// (0x00047630) aid_popup_width_pane

0x8870,	// (0x0004fa99) popup_midp_note_alarm_window_ParamLimits

0x8870,	// (0x0004fa99) popup_midp_note_alarm_window

0xb928,	// (0x00052b51) data_form_pane_ParamLimits

0x82b8,	// (0x0004f4e1) form_field_data_pane_g1

0x82c2,	// (0x0004f4eb) form_field_data_pane_t1_ParamLimits

0xba2e,	// (0x00052c57) input_focus_pane_ParamLimits

0x0dd8,	// (0x00048001) data_form_wide_pane_ParamLimits

0x0de9,	// (0x00048012) form_field_data_wide_pane_g1

0x0df5,	// (0x0004801e) form_field_data_wide_pane_t1_ParamLimits

0xb6af,	// (0x000528d8) input_focus_pane_cp6_ParamLimits

0x9769,	// (0x00050992) input_popup_find_pane_g1_ParamLimits

0x9769,	// (0x00050992) input_popup_find_pane_g1

0x0f6e,	// (0x00048197) aid_navi_side_left_pane

0x0f83,	// (0x000481ac) aid_navi_side_right_pane

0xd5c9,	// (0x000547f2) bg_popup_window_pane_cp30_ParamLimits

0xd5c9,	// (0x000547f2) bg_popup_window_pane_cp30

0xd643,	// (0x0005486c) popup_midp_note_alarm_window_g1_ParamLimits

0xd643,	// (0x0005486c) popup_midp_note_alarm_window_g1

0xd673,	// (0x0005489c) popup_midp_note_alarm_window_t1_ParamLimits

0xd673,	// (0x0005489c) popup_midp_note_alarm_window_t1

0xd714,	// (0x0005493d) popup_midp_note_alarm_window_t2_ParamLimits

0xd714,	// (0x0005493d) popup_midp_note_alarm_window_t2

0xd7c2,	// (0x000549eb) popup_midp_note_alarm_window_t3_ParamLimits

0xd7c2,	// (0x000549eb) popup_midp_note_alarm_window_t3

0xd7f4,	// (0x00054a1d) popup_midp_note_alarm_window_t4_ParamLimits

0xd7f4,	// (0x00054a1d) popup_midp_note_alarm_window_t4

0xd81a,	// (0x00054a43) popup_midp_note_alarm_window_t5_ParamLimits

0xd81a,	// (0x00054a43) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x00056ac9) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x00056ac9) popup_midp_note_alarm_window_t

0xd8c6,	// (0x00054aef) wait_bar_pane_cp1_ParamLimits

0xd8c6,	// (0x00054aef) wait_bar_pane_cp1

0xadd2,	// (0x00051ffb) wait_anim_pane_copy1

0xadd2,	// (0x00051ffb) wait_border_pane_copy1

0xd2e1,	// (0x0005450a) wait_border_pane_g1_copy1

0x0e0f,	// (0x00048038) form_field_popup_pane_g1

0x82dc,	// (0x0004f505) form_field_popup_pane_t1_ParamLimits

0xba2e,	// (0x00052c57) input_focus_pane_cp7_ParamLimits

0xba5c,	// (0x00052c85) list_form_pane_ParamLimits

0x0e31,	// (0x0004805a) form_field_popup_wide_pane_g1

0x0e39,	// (0x00048062) form_field_popup_wide_pane_t1_ParamLimits

0xba2e,	// (0x00052c57) input_focus_pane_cp8_ParamLimits

0xba68,	// (0x00052c91) list_form_wide_pane_ParamLimits

0xdfda,	// (0x00055203) aid_size_cell_graphic_pane

0x835b,	// (0x0004f584) data_form_pane_t1_ParamLimits

0x8daa,	// (0x0004ffd3) data_form_wide_pane_t1_ParamLimits

0xa323,	// (0x0005154c) bg_status_flat_pane

0x9409,	// (0x00050632) title_pane_t1_ParamLimits

0xade8,	// (0x00052011) title_pane_t2_ParamLimits

0xae0e,	// (0x00052037) title_pane_t3_ParamLimits

0xf55d,	// (0x00056786) title_pane_t_ParamLimits

0xc4b4,	// (0x000536dd) level_1_signal_ParamLimits

0xc4c1,	// (0x000536ea) level_2_signal_ParamLimits

0xc4ce,	// (0x000536f7) level_3_signal_ParamLimits

0xc4db,	// (0x00053704) level_4_signal_ParamLimits

0xc4e8,	// (0x00053711) level_5_signal_ParamLimits

0xc4f5,	// (0x0005371e) level_6_signal_ParamLimits

0xc502,	// (0x0005372b) level_7_signal_ParamLimits

0xc4b4,	// (0x000536dd) level_1_battery_ParamLimits

0xc4c1,	// (0x000536ea) level_2_battery_ParamLimits

0xc4ce,	// (0x000536f7) level_3_battery_ParamLimits

0xc4db,	// (0x00053704) level_4_battery_ParamLimits

0xc4e8,	// (0x00053711) level_5_battery_ParamLimits

0xc4f5,	// (0x0005371e) level_6_battery_ParamLimits

0xc502,	// (0x0005372b) level_7_battery_ParamLimits

0xd4ec,	// (0x00054715) bg_status_flat_pane_g1

0xd4f4,	// (0x0005471d) bg_status_flat_pane_g2

0xd4fc,	// (0x00054725) bg_status_flat_pane_g3

0xd504,	// (0x0005472d) bg_status_flat_pane_g4

0xd50c,	// (0x00054735) bg_status_flat_pane_g5

0xd514,	// (0x0005473d) bg_status_flat_pane_g6

0xd51c,	// (0x00054745) bg_status_flat_pane_g7

0x949d,	// (0x000506c6) tabs_3_active_pane_t1_ParamLimits

0x949d,	// (0x000506c6) tabs_3_passive_pane_t1_ParamLimits

0x94b7,	// (0x000506e0) tabs_4_active_pane_t1_ParamLimits

0x94b7,	// (0x000506e0) tabs_4_1_passive_pane_t1_ParamLimits

0x977f,	// (0x000509a8) tabs_2_active_pane_t1_ParamLimits

0x977f,	// (0x000509a8) tabs_2_passive_pane_t1_ParamLimits

0xae2e,	// (0x00052057) bg_active_tab_pane_cp4_ParamLimits

0x9791,	// (0x000509ba) tabs_2_long_active_pane_t1_ParamLimits

0xc155,	// (0x0005337e) bg_passive_tab_pane_cp4_ParamLimits

0x1a8a,	// (0x00048cb3) list_single_midp_graphic_pane_t1_ParamLimits

0xae2e,	// (0x00052057) bg_active_tab_pane_cp5_ParamLimits

0x97a4,	// (0x000509cd) tabs_3_long_active_pane_t1_ParamLimits

0xc155,	// (0x0005337e) bg_passive_tab_pane_cp5_ParamLimits

0x1a8a,	// (0x00048cb3) list_single_midp_graphic_pane_t1

0xa323,	// (0x0005154c) bg_status_flat_pane_ParamLimits

0xccc6,	// (0x00053eef) indicator_pane_cp2_ParamLimits

0xccc6,	// (0x00053eef) indicator_pane_cp2

0xa49b,	// (0x000516c4) navi_pane_srt_ParamLimits

0xa49b,	// (0x000516c4) navi_pane_srt

0xcd00,	// (0x00053f29) popup_clock_digital_analogue_window_cp1

0xae72,	// (0x0005209b) indicator_pane_t1

0xc9c1,	// (0x00053bea) copy_highlight_pane

0xc9c1,	// (0x00053bea) cursor_graphics_pane

0xc9c1,	// (0x00053bea) graphic_within_text_pane

0xc9c1,	// (0x00053bea) link_highlight_pane

0xdbf1,	// (0x00054e1a) popup_preview_text_window_t5_ParamLimits

0xdbf1,	// (0x00054e1a) popup_preview_text_window_t5

0xca3c,	// (0x00053c65) cursor_digital_pane

0xca3c,	// (0x00053c65) cursor_primary_pane

0xca4d,	// (0x00053c76) cursor_primary_small_pane

0xca55,	// (0x00053c7e) cursor_secondary_pane

0xca5d,	// (0x00053c86) cursor_title_pane

0xca3c,	// (0x00053c65) link_highlight_digital_pane

0xca44,	// (0x00053c6d) link_highlight_primary_pane

0xca4d,	// (0x00053c76) link_highlight_primary_small_pane

0xca55,	// (0x00053c7e) link_highlight_secondary_pane

0xca5d,	// (0x00053c86) link_highlight_title_pane

0xca3c,	// (0x00053c65) copy_highlight_digital_pane

0xca3c,	// (0x00053c65) copy_highlight_primary_pane

0xca4d,	// (0x00053c76) copy_highlight_primary_small_pane

0xca55,	// (0x00053c7e) copy_highlight_secondary_pane

0xca5d,	// (0x00053c86) copy_highlight_title_pane

0xca55,	// (0x00053c7e) graphic_text_digital_pane

0xd56c,	// (0x00054795) graphic_text_primary_pane

0xd575,	// (0x0005479e) graphic_text_primary_small_pane

0xca4d,	// (0x00053c76) graphic_text_secondary_pane

0xca3c,	// (0x00053c65) graphic_text_title_pane

0xa202,	// (0x0005142b) cursor_primary_pane_g1

0xd55e,	// (0x00054787) cursor_text_primary_t1

0xa735,	// (0x0005195e) cursor_primary_small_pane_g1

0xd550,	// (0x00054779) cursor_text_primary_small_t1

0xa72b,	// (0x00051954) cursor_primary_small_pane_g1_copy1

0xd542,	// (0x0005476b) cursor_text_primary_small_t1_copy1

0xd534,	// (0x0005475d) cursor_text_title_t1

0xa721,	// (0x0005194a) cursor_title_pane_g1

0xa202,	// (0x0005142b) cursor_digital_pane_g1

0xca65,	// (0x00053c8e) cursor_text_digital_t1

0xd4d5,	// (0x000546fe) link_highlight_primary_pane_g1

0xd4dd,	// (0x00054706) link_highlight_primary_pane_t1

0xca73,	// (0x00053c9c) link_highlight_primary_small_pane_g1

0xca7b,	// (0x00053ca4) link_highlight_primary_small_pane_t1

0xca73,	// (0x00053c9c) link_highlight_secondary_pane_g1

0xca8a,	// (0x00053cb3) link_highlight_secondary_pane_t1

0xd449,	// (0x00054672) link_highlight_title_pane_g1

0xd451,	// (0x0005467a) link_highlight_title_pane_t1

0xd432,	// (0x0005465b) link_highlight_digital_pane_g1

0xd43a,	// (0x00054663) link_highlight_digital_pane_t1

0xd326,	// (0x0005454f) copy_highlight_primary_pane_g1

0xd32e,	// (0x00054557) copy_highlight_primary_pane_t1

0xd300,	// (0x00054529) copy_highlight_primary_small_pane_g1

0xd317,	// (0x00054540) copy_highlight_primary_small_pane_t1

0xca99,	// (0x00053cc2) copy_highlight_secondary_pane_g1

0xcaa1,	// (0x00053cca) copy_highlight_secondary_pane_t1

0xd300,	// (0x00054529) copy_highlight_title_pane_g1

0xd308,	// (0x00054531) copy_highlight_title_pane_t1

0xd326,	// (0x0005454f) copy_highlight_digital_pane_g1

0xe160,	// (0x00055389) copy_highlight_digital_pane_t1

0xe0b4,	// (0x000552dd) graphic_text_primary_pane_g1

0xe144,	// (0x0005536d) graphic_text_primary_pane_t1

0xe152,	// (0x0005537b) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x00056bf8) graphic_text_primary_pane_t

0xe120,	// (0x00055349) graphic_text_primary_small_pane_g1

0xe128,	// (0x00055351) graphic_text_primary_small_pane_t1

0xe136,	// (0x0005535f) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x00056bf3) graphic_text_primary_small_pane_t

0xe0fc,	// (0x00055325) graphic_text_secondary_pane_g1

0xe104,	// (0x0005532d) graphic_text_secondary_pane_t1

0xe112,	// (0x0005533b) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x00056bee) graphic_text_secondary_pane_t

0xe0d8,	// (0x00055301) graphic_text_title_pane_g1

0xe0e0,	// (0x00055309) graphic_text_title_pane_t1

0xe0ee,	// (0x00055317) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x00056be9) graphic_text_title_pane_t

0xe0b4,	// (0x000552dd) graphic_text_digital_pane_g1

0xe0bc,	// (0x000552e5) graphic_text_digital_pane_t1

0xe0ca,	// (0x000552f3) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x00056be4) graphic_text_digital_pane_t

0xae2e,	// (0x00052057) navi_icon_pane_srt_ParamLimits

0xae2e,	// (0x00052057) navi_icon_pane_srt

0xadd2,	// (0x00051ffb) navi_midp_pane_srt

0xadd2,	// (0x00051ffb) navi_navi_pane_srt

0xae2e,	// (0x00052057) navi_text_pane_srt_ParamLimits

0xae2e,	// (0x00052057) navi_text_pane_srt

0xe07f,	// (0x000552a8) navi_navi_icon_text_pane_srt

0xe087,	// (0x000552b0) navi_navi_pane_srt_g1_ParamLimits

0xe087,	// (0x000552b0) navi_navi_pane_srt_g1

0xe099,	// (0x000552c2) navi_navi_pane_srt_g2_ParamLimits

0xe099,	// (0x000552c2) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x00056bdf) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x00056bdf) navi_navi_pane_srt_g

0xe0ab,	// (0x000552d4) navi_navi_tabs_pane_srt

0xe07f,	// (0x000552a8) navi_navi_text_pane_srt

0xe07f,	// (0x000552a8) navi_navi_volume_pane_srt

0xe070,	// (0x00055299) navi_navi_text_pane_srt_t1

0x1dfe,	// (0x00049027) navi_navi_volume_pane_srt_g1

0x1e06,	// (0x0004902f) volume_small_pane_srt_ParamLimits

0x1e06,	// (0x0004902f) volume_small_pane_srt

0x1245,	// (0x0004846e) volume_small_pane_srt_g1_ParamLimits

0x1245,	// (0x0004846e) volume_small_pane_srt_g1

0x1255,	// (0x0004847e) volume_small_pane_srt_g2_ParamLimits

0x1255,	// (0x0004847e) volume_small_pane_srt_g2

0x1266,	// (0x0004848f) volume_small_pane_srt_g3_ParamLimits

0x1266,	// (0x0004848f) volume_small_pane_srt_g3

0x1277,	// (0x000484a0) volume_small_pane_srt_g4_ParamLimits

0x1277,	// (0x000484a0) volume_small_pane_srt_g4

0x1288,	// (0x000484b1) volume_small_pane_srt_g5_ParamLimits

0x1288,	// (0x000484b1) volume_small_pane_srt_g5

0x1299,	// (0x000484c2) volume_small_pane_srt_g6_ParamLimits

0x1299,	// (0x000484c2) volume_small_pane_srt_g6

0x12aa,	// (0x000484d3) volume_small_pane_srt_g7_ParamLimits

0x12aa,	// (0x000484d3) volume_small_pane_srt_g7

0x12bb,	// (0x000484e4) volume_small_pane_srt_g8_ParamLimits

0x12bb,	// (0x000484e4) volume_small_pane_srt_g8

0x12cc,	// (0x000484f5) volume_small_pane_srt_g9_ParamLimits

0x12cc,	// (0x000484f5) volume_small_pane_srt_g9

0x12dd,	// (0x00048506) volume_small_pane_srt_g10_ParamLimits

0x12dd,	// (0x00048506) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0005698c) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0005698c) volume_small_pane_srt_g

0xb565,	// (0x0005278e) query_popup_data_pane_cp2

0xe056,	// (0x0005527f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe056,	// (0x0005527f) navi_navi_icon_text_pane_srt_t1

0xd56c,	// (0x00054795) navi_tabs_2_long_pane_srt

0xd56c,	// (0x00054795) navi_tabs_2_pane_srt

0xd56c,	// (0x00054795) navi_tabs_3_long_pane_srt

0xd56c,	// (0x00054795) navi_tabs_3_pane_srt

0xd56c,	// (0x00054795) navi_tabs_4_pane_srt

0x1dde,	// (0x00049007) tabs_2_active_pane_srt_ParamLimits

0x1dde,	// (0x00049007) tabs_2_active_pane_srt

0x1dee,	// (0x00049017) tabs_2_passive_pane_srt_ParamLimits

0x1dee,	// (0x00049017) tabs_2_passive_pane_srt

0xce7b,	// (0x000540a4) bg_passive_tab_pane_cp1_srt_ParamLimits

0xce7b,	// (0x000540a4) bg_passive_tab_pane_cp1_srt

0xe034,	// (0x0005525d) bg_passive_tab_pane_g1_cp1_srt

0xc6e5,	// (0x0005390e) bg_passive_tab_pane_g2_cp1_srt

0xe03d,	// (0x00055266) bg_passive_tab_pane_g3_cp1_srt

0xae20,	// (0x00052049) bg_active_tab_pane_cp1_srt_ParamLimits

0xae20,	// (0x00052049) bg_active_tab_pane_cp1_srt

0xe046,	// (0x0005526f) tabs_2_active_pane_srt_g1

0xab67,	// (0x00051d90) tabs_2_active_pane_srt_t1_ParamLimits

0xab67,	// (0x00051d90) tabs_2_active_pane_srt_t1

0xe034,	// (0x0005525d) bg_active_tab_pane_g1_cp1_srt

0xc6e5,	// (0x0005390e) bg_active_tab_pane_g2_cp1_srt

0xe03d,	// (0x00055266) bg_active_tab_pane_g3_cp1_srt

0x1dab,	// (0x00048fd4) tabs_3_active_pane_srt_ParamLimits

0x1dab,	// (0x00048fd4) tabs_3_active_pane_srt

0x1dbc,	// (0x00048fe5) tabs_3_passive_pane_cp_srt_ParamLimits

0x1dbc,	// (0x00048fe5) tabs_3_passive_pane_cp_srt

0x1dcd,	// (0x00048ff6) tabs_3_passive_pane_srt_ParamLimits

0x1dcd,	// (0x00048ff6) tabs_3_passive_pane_srt

0xce7b,	// (0x000540a4) bg_passive_tab_pane_cp2_srt_ParamLimits

0xce7b,	// (0x000540a4) bg_passive_tab_pane_cp2_srt

0xcab0,	// (0x00053cd9) bg_passive_tab_pane_g1_cp2_srt

0xc6e5,	// (0x0005390e) bg_passive_tab_pane_g2_cp2_srt

0xcab9,	// (0x00053ce2) bg_passive_tab_pane_g3_cp2_srt

0xae20,	// (0x00052049) bg_active_tab_pane_cp2_srt_ParamLimits

0xae20,	// (0x00052049) bg_active_tab_pane_cp2_srt

0xe02c,	// (0x00055255) tabs_3_active_pane_srt_g1

0xab51,	// (0x00051d7a) tabs_3_active_pane_srt_t1_ParamLimits

0xab51,	// (0x00051d7a) tabs_3_active_pane_srt_t1

0xcab0,	// (0x00053cd9) bg_active_tab_pane_g1_cp2_srt

0xc6e5,	// (0x0005390e) bg_active_tab_pane_g2_cp2_srt

0xcab9,	// (0x00053ce2) bg_active_tab_pane_g3_cp2_srt

0x1d63,	// (0x00048f8c) tabs_4_active_pane_srt_ParamLimits

0x1d63,	// (0x00048f8c) tabs_4_active_pane_srt

0x1d75,	// (0x00048f9e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1d75,	// (0x00048f9e) tabs_4_passive_pane_cp2_srt

0x1440,	// (0x00048669) aid_size_cell_toolbar

0xccde,	// (0x00053f07) main_idle_act_pane_ParamLimits

0x15eb,	// (0x00048814) popup_large_graphic_colour_window_ParamLimits

0x8b7a,	// (0x0004fda3) popup_toolbar_window_ParamLimits

0x8b7a,	// (0x0004fda3) popup_toolbar_window

0xdf3d,	// (0x00055166) list_single_graphic_2heading_pane_ParamLimits

0xdf3d,	// (0x00055166) list_single_graphic_2heading_pane

0xc2fc,	// (0x00053525) aid_size_cell_apps_grid_lsc_pane

0xc30e,	// (0x00053537) aid_size_cell_apps_grid_prt_pane

0xc155,	// (0x0005337e) bg_wml_button_pane_cp1_ParamLimits

0xc155,	// (0x0005337e) bg_wml_button_pane_cp1

0xa6d2,	// (0x000518fb) form_midp_field_text_pane_t1_ParamLimits

0xce7b,	// (0x000540a4) input_focus_pane_cp050_ParamLimits

0xcfe8,	// (0x00054211) list_midp_form_text_pane_ParamLimits

0xcfc5,	// (0x000541ee) input_focus_pane_cp051_ParamLimits

0xcfd9,	// (0x00054202) list_midp_choice_pane_ParamLimits

0xa666,	// (0x0005188f) list_single_2graphic_pane_cp3_ParamLimits

0xa666,	// (0x0005188f) list_single_2graphic_pane_cp3

0xa67b,	// (0x000518a4) list_single_midp_graphic_pane_ParamLimits

0xa67b,	// (0x000518a4) list_single_midp_graphic_pane

0x038f,	// (0x000475b8) list_single_graphic_2heading_pane_g1_ParamLimits

0x038f,	// (0x000475b8) list_single_graphic_2heading_pane_g1

0x039b,	// (0x000475c4) list_single_graphic_2heading_pane_g4_ParamLimits

0x039b,	// (0x000475c4) list_single_graphic_2heading_pane_g4

0x03a7,	// (0x000475d0) list_single_graphic_2heading_pane_g5_ParamLimits

0x03a7,	// (0x000475d0) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x000569df) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x000569df) list_single_graphic_2heading_pane_g

0x03b3,	// (0x000475dc) list_single_graphic_2heading_pane_t1_ParamLimits

0x03b3,	// (0x000475dc) list_single_graphic_2heading_pane_t1

0x03c7,	// (0x000475f0) list_single_graphic_2heading_pane_t2_ParamLimits

0x03c7,	// (0x000475f0) list_single_graphic_2heading_pane_t2

0x03e3,	// (0x0004760c) list_single_graphic_2heading_pane_t3_ParamLimits

0x03e3,	// (0x0004760c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x000569e6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x000569e6) list_single_graphic_2heading_pane_t

0xcd45,	// (0x00053f6e) bg_popup_sub_pane_cp2

0xcd6f,	// (0x00053f98) grid_toobar_pane

0x19fb,	// (0x00048c24) cell_toolbar_pane_ParamLimits

0x19fb,	// (0x00048c24) cell_toolbar_pane

0xcdab,	// (0x00053fd4) cell_toolbar_pane_g1_ParamLimits

0xcdab,	// (0x00053fd4) cell_toolbar_pane_g1

0xcdbf,	// (0x00053fe8) cell_toolbar_pane_g2_ParamLimits

0xcdbf,	// (0x00053fe8) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x000569f4) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x000569f4) cell_toolbar_pane_g

0xcde1,	// (0x0005400a) grid_highlight_pane_cp2_ParamLimits

0xcde1,	// (0x0005400a) grid_highlight_pane_cp2

0xcdfb,	// (0x00054024) toolbar_button_pane

0xce07,	// (0x00054030) toolbar_button_pane_g1

0xce0f,	// (0x00054038) toolbar_button_pane_g2

0xce17,	// (0x00054040) toolbar_button_pane_g3

0xce1f,	// (0x00054048) toolbar_button_pane_g4

0xce27,	// (0x00054050) toolbar_button_pane_g5

0xce2f,	// (0x00054058) toolbar_button_pane_g6

0xce37,	// (0x00054060) toolbar_button_pane_g7

0xce3f,	// (0x00054068) toolbar_button_pane_g8

0xce47,	// (0x00054070) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x000569f9) toolbar_button_pane_g

0x1a33,	// (0x00048c5c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1a33,	// (0x00048c5c) list_single_2graphic_pane_g1_cp3

0x8bd2,	// (0x0004fdfb) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8bd2,	// (0x0004fdfb) list_single_2graphic_pane_g2_cp3

0x1a50,	// (0x00048c79) list_single_2graphic_pane_g3_cp3

0x1a58,	// (0x00048c81) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1a58,	// (0x00048c81) list_single_2graphic_pane_g4_cp3

0x1a64,	// (0x00048c8d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1a64,	// (0x00048c8d) list_single_2graphic_pane_t1_cp3

0x1a7e,	// (0x00048ca7) list_single_midp_graphic_pane_g2_ParamLimits

0x1a7e,	// (0x00048ca7) list_single_midp_graphic_pane_g2

0x037f,	// (0x000475a8) aid_zoom_text_primary

0x0387,	// (0x000475b0) aid_zoom_text_secondary

0xcb6d,	// (0x00053d96) status_small_pane_g7_ParamLimits

0xcb6d,	// (0x00053d96) status_small_pane_g7

0xcb90,	// (0x00053db9) status_small_pane_t1_ParamLimits

0x93e5,	// (0x0005060e) title_pane_g2

0x0003,

0xf554,	// (0x0005677d) title_pane_g

0x966d,	// (0x00050896) aid_size_cell_colour_1_pane_ParamLimits

0x966d,	// (0x00050896) aid_size_cell_colour_1_pane

0x9681,	// (0x000508aa) aid_size_cell_colour_2_pane_ParamLimits

0x9681,	// (0x000508aa) aid_size_cell_colour_2_pane

0x9695,	// (0x000508be) aid_size_cell_colour_3_pane_ParamLimits

0x9695,	// (0x000508be) aid_size_cell_colour_3_pane

0x96a9,	// (0x000508d2) aid_size_cell_colour_4_pane_ParamLimits

0x96a9,	// (0x000508d2) aid_size_cell_colour_4_pane

0x0eaa,	// (0x000480d3) title_pane_stacon_g1_ParamLimits

0x0eaa,	// (0x000480d3) title_pane_stacon_g1

0xd385,	// (0x000545ae) popup_note_wait_window_g3_ParamLimits

0xd385,	// (0x000545ae) popup_note_wait_window_g3

0xd3fb,	// (0x00054624) popup_note_wait_window_t5_ParamLimits

0xd3fb,	// (0x00054624) popup_note_wait_window_t5

0xadd2,	// (0x00051ffb) main_feb_china_hwr_fs_writing_pane

0x8596,	// (0x0004f7bf) popup_feb_china_hwr_fs_window_ParamLimits

0x8596,	// (0x0004f7bf) popup_feb_china_hwr_fs_window

0x8be3,	// (0x0004fe0c) aid_size_cell_hwr_fs_ParamLimits

0x8be3,	// (0x0004fe0c) aid_size_cell_hwr_fs

0xce7b,	// (0x000540a4) bg_popup_sub_pane_cp3_ParamLimits

0xce7b,	// (0x000540a4) bg_popup_sub_pane_cp3

0x8bf8,	// (0x0004fe21) grid_hwr_fs_pane_ParamLimits

0x8bf8,	// (0x0004fe21) grid_hwr_fs_pane

0x1acd,	// (0x00048cf6) linegrid_hwr_fs_pane_ParamLimits

0x1acd,	// (0x00048cf6) linegrid_hwr_fs_pane

0x8c10,	// (0x0004fe39) cell_hwr_fs_pane_ParamLimits

0x8c10,	// (0x0004fe39) cell_hwr_fs_pane

0xce87,	// (0x000540b0) linegrid_hwr_fs_pane_g1_ParamLimits

0xce87,	// (0x000540b0) linegrid_hwr_fs_pane_g1

0xa63a,	// (0x00051863) linegrid_hwr_fs_pane_g2_ParamLimits

0xa63a,	// (0x00051863) linegrid_hwr_fs_pane_g2

0xce93,	// (0x000540bc) linegrid_hwr_fs_pane_g3_ParamLimits

0xce93,	// (0x000540bc) linegrid_hwr_fs_pane_g3

0x1aff,	// (0x00048d28) linegrid_hwr_fs_pane_g4_ParamLimits

0x1aff,	// (0x00048d28) linegrid_hwr_fs_pane_g4

0x1b19,	// (0x00048d42) linegrid_hwr_fs_pane_g5_ParamLimits

0x1b19,	// (0x00048d42) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x00056a1f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00056a1f) linegrid_hwr_fs_pane_g

0xce9f,	// (0x000540c8) cell_hwr_fs_pane_g1_ParamLimits

0xce9f,	// (0x000540c8) cell_hwr_fs_pane_g1

0xcd11,	// (0x00053f3a) cell_hwr_fs_pane_g2_ParamLimits

0xcd11,	// (0x00053f3a) cell_hwr_fs_pane_g2

0xa64c,	// (0x00051875) cell_hwr_fs_pane_g3_ParamLimits

0xa64c,	// (0x00051875) cell_hwr_fs_pane_g3

0xa659,	// (0x00051882) cell_hwr_fs_pane_g4_ParamLimits

0xa659,	// (0x00051882) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00056a2a) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00056a2a) cell_hwr_fs_pane_g

0x8c36,	// (0x0004fe5f) cell_hwr_fs_pane_t1

0xadd2,	// (0x00051ffb) grid_highlight_pane_cp6

0xadd2,	// (0x00051ffb) main_idle_act2_pane

0xc103,	// (0x0005332c) aid_inside_area_popup_secondary

0xa79c,	// (0x000519c5) aid_inside_area_window_primary_ParamLimits

0xa79c,	// (0x000519c5) aid_inside_area_window_primary

0xe16f,	// (0x00055398) ai2_news_ticker_pane

0xe177,	// (0x000553a0) aid_size_cell_ai1_link_ParamLimits

0xe177,	// (0x000553a0) aid_size_cell_ai1_link

0xe191,	// (0x000553ba) popup_ai2_data_window_ParamLimits

0xe191,	// (0x000553ba) popup_ai2_data_window

0xe1a5,	// (0x000553ce) popup_ai2_link_window_ParamLimits

0xe1a5,	// (0x000553ce) popup_ai2_link_window

0xce7b,	// (0x000540a4) bg_popup_sub_pane_cp4_ParamLimits

0xce7b,	// (0x000540a4) bg_popup_sub_pane_cp4

0xe1b9,	// (0x000553e2) grid_ai2_link_pane_ParamLimits

0xe1b9,	// (0x000553e2) grid_ai2_link_pane

0xe1d0,	// (0x000553f9) popup_ai2_link_window_g1_ParamLimits

0xe1d0,	// (0x000553f9) popup_ai2_link_window_g1

0xe1dc,	// (0x00055405) popup_ai2_link_window_g2_ParamLimits

0xe1dc,	// (0x00055405) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x00056bfd) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x00056bfd) popup_ai2_link_window_g

0xe1eb,	// (0x00055414) ai2_mp_button_pane

0xe1f3,	// (0x0005541c) ai2_mp_volume_pane

0xcfc5,	// (0x000541ee) bg_popup_sub_pane_cp5_ParamLimits

0xcfc5,	// (0x000541ee) bg_popup_sub_pane_cp5

0xe1fb,	// (0x00055424) heading_ai2_gene_pane_ParamLimits

0xe1fb,	// (0x00055424) heading_ai2_gene_pane

0xe207,	// (0x00055430) list_ai2_gene_pane_ParamLimits

0xe207,	// (0x00055430) list_ai2_gene_pane

0xe24f,	// (0x00055478) cell_ai2_link_pane_ParamLimits

0xe24f,	// (0x00055478) cell_ai2_link_pane

0xe265,	// (0x0005548e) cell_ai2_link_pane_g1

0xadd2,	// (0x00051ffb) grid_highlight_pane_cp7

0x1e1b,	// (0x00049044) ai2_mp_volume_pane_g1

0xe336,	// (0x0005555f) ai2_mp_volume_pane_g2

0xe2ab,	// (0x000554d4) list_ai2_gene_pane_t1

0xe33e,	// (0x00055567) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x00056c16) ai2_mp_volume_pane_g

0x1e23,	// (0x0004904c) volume_small_pane_cp3

0xe346,	// (0x0005556f) aid_size_cell_ai2_button

0xe34e,	// (0x00055577) grid_ai2_button_pane

0xe357,	// (0x00055580) cell_ai2_button_pane_ParamLimits

0xe357,	// (0x00055580) cell_ai2_button_pane

0xadc8,	// (0x00051ff1) cell_ai2_button_pane_g1

0xadd2,	// (0x00051ffb) grid_highlight_pane_cp8

0xe2f6,	// (0x0005551f) ai2_gene_pane_t1_ParamLimits

0xe2f6,	// (0x0005551f) ai2_gene_pane_t1

0x8534,	// (0x0004f75d) aid_height_parent_landscape

0xa92f,	// (0x00051b58) aid_height_set_list

0xccde,	// (0x00053f07) aid_size_parent

0xdfda,	// (0x00055203) aid_size_cell_graphic_pane_ParamLimits

0xe217,	// (0x00055440) popup_ai2_data_window_g1_ParamLimits

0xe217,	// (0x00055440) popup_ai2_data_window_g1

0xe223,	// (0x0005544c) ai2_news_ticker_pane_g1

0xe22b,	// (0x00055454) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x00056c02) ai2_news_ticker_pane_g

0xe233,	// (0x0005545c) ai2_news_ticker_pane_t1

0xe241,	// (0x0005546a) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x00056c07) ai2_news_ticker_pane_t

0xe26e,	// (0x00055497) heading_ai2_gene_pane_g1

0xe276,	// (0x0005549f) heading_ai2_gene_pane_t1_ParamLimits

0xe276,	// (0x0005549f) heading_ai2_gene_pane_t1

0xe28b,	// (0x000554b4) list_highlight_pane_cp6

0xe293,	// (0x000554bc) ai2_gene_pane_ParamLimits

0xe293,	// (0x000554bc) ai2_gene_pane

0xe2b9,	// (0x000554e2) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x00056c0c) list_ai2_gene_pane_t

0xe2c7,	// (0x000554f0) list_highlight_pane_cp8_ParamLimits

0xe2c7,	// (0x000554f0) list_highlight_pane_cp8

0xe2d8,	// (0x00055501) ai2_gene_pane_g1_ParamLimits

0xe2d8,	// (0x00055501) ai2_gene_pane_g1

0xe2ea,	// (0x00055513) ai2_gene_pane_g2_ParamLimits

0xe2ea,	// (0x00055513) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x00056c11) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x00056c11) ai2_gene_pane_g

0xb8ca,	// (0x00052af3) scroll_pane_cp12

0x84f3,	// (0x0004f71c) control_pane_t3_ParamLimits

0x84f3,	// (0x0004f71c) control_pane_t3

0xcb81,	// (0x00053daa) status_small_pane_g8_ParamLimits

0xcb81,	// (0x00053daa) status_small_pane_g8

0x8629,	// (0x0004f852) popup_find_window_ParamLimits

0x88aa,	// (0x0004fad3) popup_note_image_window_ParamLimits

0x3820,	// (0x0004aa49) list_double2_graphic_pane_vc_g1_ParamLimits

0x3820,	// (0x0004aa49) list_double2_graphic_pane_vc_g1

0x2f7a,	// (0x0004a1a3) list_double2_graphic_pane_vc_g2_ParamLimits

0x2f7a,	// (0x0004a1a3) list_double2_graphic_pane_vc_g2

0x2f86,	// (0x0004a1af) list_double2_graphic_pane_vc_g3_ParamLimits

0x2f86,	// (0x0004a1af) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x000569ed) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x000569ed) list_double2_graphic_pane_vc_g

0x382c,	// (0x0004aa55) list_double2_graphic_pane_vc_t1_ParamLimits

0x382c,	// (0x0004aa55) list_double2_graphic_pane_vc_t1

0x2f7a,	// (0x0004a1a3) list_single_heading_pane_vc_g1_ParamLimits

0x2f7a,	// (0x0004a1a3) list_single_heading_pane_vc_g1

0x2f86,	// (0x0004a1af) list_single_heading_pane_vc_g2_ParamLimits

0x2f86,	// (0x0004a1af) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00056801) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00056801) list_single_heading_pane_vc_g

0x3842,	// (0x0004aa6b) list_single_heading_pane_vc_t1_ParamLimits

0x3842,	// (0x0004aa6b) list_single_heading_pane_vc_t1

0x3858,	// (0x0004aa81) list_single_heading_pane_vc_t2_ParamLimits

0x3858,	// (0x0004aa81) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x00056a0e) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x00056a0e) list_single_heading_pane_vc_t

0x6dca,	// (0x0004dff3) list_setting_number_pane_vc_g1_ParamLimits

0x6dca,	// (0x0004dff3) list_setting_number_pane_vc_g1

0x6dd6,	// (0x0004dfff) list_setting_number_pane_vc_g2_ParamLimits

0x6dd6,	// (0x0004dfff) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00056a13) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00056a13) list_setting_number_pane_vc_g

0x386c,	// (0x0004aa95) list_setting_number_pane_vc_t1_ParamLimits

0x386c,	// (0x0004aa95) list_setting_number_pane_vc_t1

0x3880,	// (0x0004aaa9) list_setting_number_pane_vc_t2_ParamLimits

0x3880,	// (0x0004aaa9) list_setting_number_pane_vc_t2

0x389a,	// (0x0004aac3) list_setting_number_pane_vc_t3_ParamLimits

0x389a,	// (0x0004aac3) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x00056a18) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x00056a18) list_setting_number_pane_vc_t

0x38c2,	// (0x0004aaeb) set_value_pane_vc_ParamLimits

0x38c2,	// (0x0004aaeb) set_value_pane_vc

0xdf3d,	// (0x00055166) list_double2_graphic_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_double2_graphic_pane_vc

0x431d,	// (0x0004b546) list_double2_large_graphic_pane_vc_ParamLimits

0x431d,	// (0x0004b546) list_double2_large_graphic_pane_vc

0xdf3d,	// (0x00055166) list_double2_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_double2_pane_vc

0xdf3d,	// (0x00055166) list_double_graphic_heading_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_double_graphic_heading_pane_vc

0xdf3d,	// (0x00055166) list_double_graphic_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_double_graphic_pane_vc

0xdf3d,	// (0x00055166) list_double_heading_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_double_heading_pane_vc

0x431d,	// (0x0004b546) list_double_large_graphic_pane_vc_ParamLimits

0x431d,	// (0x0004b546) list_double_large_graphic_pane_vc

0xdf3d,	// (0x00055166) list_double_number_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_double_number_pane_vc

0xdf3d,	// (0x00055166) list_double_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_double_pane_vc

0xdf3d,	// (0x00055166) list_double_time_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_double_time_pane_vc

0xdf3d,	// (0x00055166) list_setting_number_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_setting_number_pane_vc

0xdf3d,	// (0x00055166) list_setting_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_setting_pane_vc

0xdf3d,	// (0x00055166) list_single_graphic_heading_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_single_graphic_heading_pane_vc

0xdf3d,	// (0x00055166) list_single_heading_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_single_heading_pane_vc

0xdf3d,	// (0x00055166) list_single_number_heading_pane_vc_ParamLimits

0xdf3d,	// (0x00055166) list_single_number_heading_pane_vc

0x3820,	// (0x0004aa49) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3820,	// (0x0004aa49) list_double_graphic_heading_pane_vc_g1

0x2f7a,	// (0x0004a1a3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2f7a,	// (0x0004a1a3) list_double_graphic_heading_pane_vc_g2

0x2f86,	// (0x0004a1af) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2f86,	// (0x0004a1af) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c4,	// (0x000569ed) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x000569ed) list_double_graphic_heading_pane_vc_g

0x3d5a,	// (0x0004af83) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3d5a,	// (0x0004af83) list_double_graphic_heading_pane_vc_t1

0x3d76,	// (0x0004af9f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3d76,	// (0x0004af9f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f4,	// (0x00056c1d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f4,	// (0x00056c1d) list_double_graphic_heading_pane_vc_t

0x6dca,	// (0x0004dff3) list_setting_pane_vc_g1_ParamLimits

0x6dca,	// (0x0004dff3) list_setting_pane_vc_g1

0x6dd6,	// (0x0004dfff) list_setting_pane_vc_g2_ParamLimits

0x6dd6,	// (0x0004dfff) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x00056a13) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x00056a13) list_setting_pane_vc_g

0x3d8e,	// (0x0004afb7) list_setting_pane_vc_t1_ParamLimits

0x3d8e,	// (0x0004afb7) list_setting_pane_vc_t1

0x3da8,	// (0x0004afd1) list_setting_pane_vc_t2_ParamLimits

0x3da8,	// (0x0004afd1) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x00056c60) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x00056c60) list_setting_pane_vc_t

0x38c2,	// (0x0004aaeb) set_value_pane_cp_vc_ParamLimits

0x38c2,	// (0x0004aaeb) set_value_pane_cp_vc

0x2f7a,	// (0x0004a1a3) list_single_number_heading_pane_vc_g1_ParamLimits

0x2f7a,	// (0x0004a1a3) list_single_number_heading_pane_vc_g1

0x2f86,	// (0x0004a1af) list_single_number_heading_pane_vc_g2_ParamLimits

0x2f86,	// (0x0004a1af) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00056801) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00056801) list_single_number_heading_pane_vc_g

0x3842,	// (0x0004aa6b) list_single_number_heading_pane_vc_t1_ParamLimits

0x3842,	// (0x0004aa6b) list_single_number_heading_pane_vc_t1

0x3dc0,	// (0x0004afe9) list_single_number_heading_pane_vc_t2_ParamLimits

0x3dc0,	// (0x0004afe9) list_single_number_heading_pane_vc_t2

0x08f9,	// (0x00047b22) list_single_number_heading_pane_vc_t3_ParamLimits

0x08f9,	// (0x00047b22) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x00056c65) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x00056c65) list_single_number_heading_pane_vc_t

0x3820,	// (0x0004aa49) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3820,	// (0x0004aa49) list_single_graphic_heading_pane_vc_g1

0x2f7a,	// (0x0004a1a3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2f7a,	// (0x0004a1a3) list_single_graphic_heading_pane_vc_g4

0x2f86,	// (0x0004a1af) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2f86,	// (0x0004a1af) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x000569ed) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x000569ed) list_single_graphic_heading_pane_vc_g

0x3842,	// (0x0004aa6b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3842,	// (0x0004aa6b) list_single_graphic_heading_pane_vc_t1

0x3dd4,	// (0x0004affd) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3dd4,	// (0x0004affd) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x00056c6c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00056c6c) list_single_graphic_heading_pane_vc_t

0x2f7a,	// (0x0004a1a3) list_double2_pane_vc_g1_ParamLimits

0x2f7a,	// (0x0004a1a3) list_double2_pane_vc_g1

0x2f86,	// (0x0004a1af) list_double2_pane_vc_g2_ParamLimits

0x2f86,	// (0x0004a1af) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x00056801) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x00056801) list_double2_pane_vc_g

0x3d44,	// (0x0004af6d) list_double2_pane_vc_t1_ParamLimits

0x3d44,	// (0x0004af6d) list_double2_pane_vc_t1

0x44da,	// (0x0004b703) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x44da,	// (0x0004b703) list_double2_large_graphic_pane_vc_g1

0x44e6,	// (0x0004b70f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x44e6,	// (0x0004b70f) list_double2_large_graphic_pane_vc_g2

0x44f2,	// (0x0004b71b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x44f2,	// (0x0004b71b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x00056819) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x00056819) list_double2_large_graphic_pane_vc_g

0x3de8,	// (0x0004b011) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3de8,	// (0x0004b011) list_double2_large_graphic_pane_vc_t1

0x3dfe,	// (0x0004b027) list_double_time_pane_vc_g1_ParamLimits

0x3dfe,	// (0x0004b027) list_double_time_pane_vc_g1

0x3e0a,	// (0x0004b033) list_double_time_pane_vc_g2_ParamLimits

0x3e0a,	// (0x0004b033) list_double_time_pane_vc_g2

0x0001,

0xfa48,	// (0x00056c71) list_double_time_pane_vc_g_ParamLimits

0xfa48,	// (0x00056c71) list_double_time_pane_vc_g

0x3e16,	// (0x0004b03f) list_double_time_pane_vc_t1_ParamLimits

0x3e16,	// (0x0004b03f) list_double_time_pane_vc_t1

0x3e3a,	// (0x0004b063) list_double_time_pane_vc_t2_ParamLimits

0x3e3a,	// (0x0004b063) list_double_time_pane_vc_t2

0x3e84,	// (0x0004b0ad) list_double_time_pane_vc_t3_ParamLimits

0x3e84,	// (0x0004b0ad) list_double_time_pane_vc_t3

0x3e96,	// (0x0004b0bf) list_double_time_pane_vc_t4_ParamLimits

0x3e96,	// (0x0004b0bf) list_double_time_pane_vc_t4

0x0003,

0xfa4d,	// (0x00056c76) list_double_time_pane_vc_t_ParamLimits

0xfa4d,	// (0x00056c76) list_double_time_pane_vc_t

0x2f7a,	// (0x0004a1a3) list_double_pane_vc_g1_ParamLimits

0x2f7a,	// (0x0004a1a3) list_double_pane_vc_g1

0x2f86,	// (0x0004a1af) list_double_pane_vc_g2_ParamLimits

0x2f86,	// (0x0004a1af) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x00056801) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x00056801) list_double_pane_vc_g

0x3eaa,	// (0x0004b0d3) list_double_pane_vc_t1_ParamLimits

0x3eaa,	// (0x0004b0d3) list_double_pane_vc_t1

0x3ebe,	// (0x0004b0e7) list_double_pane_vc_t2_ParamLimits

0x3ebe,	// (0x0004b0e7) list_double_pane_vc_t2

0x0001,

0xfa56,	// (0x00056c7f) list_double_pane_vc_t_ParamLimits

0xfa56,	// (0x00056c7f) list_double_pane_vc_t

0x2f7a,	// (0x0004a1a3) list_double_number_pane_vc_g1_ParamLimits

0x2f7a,	// (0x0004a1a3) list_double_number_pane_vc_g1

0x2f86,	// (0x0004a1af) list_double_number_pane_vc_g2_ParamLimits

0x2f86,	// (0x0004a1af) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x00056801) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x00056801) list_double_number_pane_vc_g

0x3ed6,	// (0x0004b0ff) list_double_number_pane_vc_t1_ParamLimits

0x3ed6,	// (0x0004b0ff) list_double_number_pane_vc_t1

0x3eea,	// (0x0004b113) list_double_number_pane_vc_t2_ParamLimits

0x3eea,	// (0x0004b113) list_double_number_pane_vc_t2

0x3ebe,	// (0x0004b0e7) list_double_number_pane_vc_t3_ParamLimits

0x3ebe,	// (0x0004b0e7) list_double_number_pane_vc_t3

0x0002,

0xfa5b,	// (0x00056c84) list_double_number_pane_vc_t_ParamLimits

0xfa5b,	// (0x00056c84) list_double_number_pane_vc_t

0x44fe,	// (0x0004b727) list_double_large_graphic_pane_vc_g1_ParamLimits

0x44fe,	// (0x0004b727) list_double_large_graphic_pane_vc_g1

0x450f,	// (0x0004b738) list_double_large_graphic_pane_vc_g2_ParamLimits

0x450f,	// (0x0004b738) list_double_large_graphic_pane_vc_g2

0x44f2,	// (0x0004b71b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x44f2,	// (0x0004b71b) list_double_large_graphic_pane_vc_g3

0x3efe,	// (0x0004b127) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3efe,	// (0x0004b127) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa62,	// (0x00056c8b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa62,	// (0x00056c8b) list_double_large_graphic_pane_vc_g

0x3f0a,	// (0x0004b133) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3f0a,	// (0x0004b133) list_double_large_graphic_pane_vc_t1

0x3f23,	// (0x0004b14c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3f23,	// (0x0004b14c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6b,	// (0x00056c94) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6b,	// (0x00056c94) list_double_large_graphic_pane_vc_t

0x2f7a,	// (0x0004a1a3) list_double_heading_pane_vc_g1_ParamLimits

0x2f7a,	// (0x0004a1a3) list_double_heading_pane_vc_g1

0x2f86,	// (0x0004a1af) list_double_heading_pane_vc_g2_ParamLimits

0x2f86,	// (0x0004a1af) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00056801) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00056801) list_double_heading_pane_vc_g

0x3f3c,	// (0x0004b165) list_double_heading_pane_vc_t1_ParamLimits

0x3f3c,	// (0x0004b165) list_double_heading_pane_vc_t1

0x3842,	// (0x0004aa6b) list_double_heading_pane_vc_t2_ParamLimits

0x3842,	// (0x0004aa6b) list_double_heading_pane_vc_t2

0x0001,

0xfa70,	// (0x00056c99) list_double_heading_pane_vc_t_ParamLimits

0xfa70,	// (0x00056c99) list_double_heading_pane_vc_t

0x3820,	// (0x0004aa49) list_double_graphic_pane_vc_g1_ParamLimits

0x3820,	// (0x0004aa49) list_double_graphic_pane_vc_g1

0x3f50,	// (0x0004b179) list_double_graphic_pane_vc_g2_ParamLimits

0x3f50,	// (0x0004b179) list_double_graphic_pane_vc_g2

0xe375,	// (0x0005559e) list_double_graphic_pane_vc_g3_ParamLimits

0xe375,	// (0x0005559e) list_double_graphic_pane_vc_g3

0x0002,

0xfa75,	// (0x00056c9e) list_double_graphic_pane_vc_g_ParamLimits

0xfa75,	// (0x00056c9e) list_double_graphic_pane_vc_g

0x3f5f,	// (0x0004b188) list_double_graphic_pane_vc_t1_ParamLimits

0x3f5f,	// (0x0004b188) list_double_graphic_pane_vc_t1

0x3f73,	// (0x0004b19c) list_double_graphic_pane_vc_t2_ParamLimits

0x3f73,	// (0x0004b19c) list_double_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x00056ca5) list_double_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x00056ca5) list_double_graphic_pane_vc_t

0x0413,	// (0x0004763c) aid_size_cell_fastswap

0x7cf2,	// (0x0004ef1b) aid_size_cell_touch_ParamLimits

0x7cf2,	// (0x0004ef1b) aid_size_cell_touch

0x0680,	// (0x000478a9) popup_fast_swap_wide_window_ParamLimits

0x0680,	// (0x000478a9) popup_fast_swap_wide_window

0x7e3d,	// (0x0004f066) touch_pane_ParamLimits

0x7e3d,	// (0x0004f066) touch_pane

0xb920,	// (0x00052b49) button_value_adjust_pane_cp2

0x0d06,	// (0x00047f2f) button_value_adjust_pane_cp4

0x0d28,	// (0x00047f51) form_field_data_pane_cp2

0x8277,	// (0x0004f4a0) form_field_data_wide_pane_cp2

0xc333,	// (0x0005355c) bg_scroll_pane_ParamLimits

0x100d,	// (0x00048236) scroll_handle_pane_ParamLimits

0x1021,	// (0x0004824a) scroll_sc2_down_pane_ParamLimits

0x1021,	// (0x0004824a) scroll_sc2_down_pane

0xc364,	// (0x0005358d) scroll_sc2_up_pane_ParamLimits

0xc364,	// (0x0005358d) scroll_sc2_up_pane

0xac9e,	// (0x00051ec7) grid_wheel_folder_pane_g1_ParamLimits

0xac9e,	// (0x00051ec7) grid_wheel_folder_pane_g1

0x11dd,	// (0x00048406) clock_nsta_pane_cp2_ParamLimits

0x11dd,	// (0x00048406) clock_nsta_pane_cp2

0xc155,	// (0x0005337e) listscroll_midp_pane_ParamLimits

0xa167,	// (0x00051390) midp_canvas_pane

0xcbd5,	// (0x00053dfe) nsta_clock_indic_pane

0xcbfd,	// (0x00053e26) listscroll_form_pane_vc

0xcc05,	// (0x00053e2e) listscroll_set_pane_vc_ParamLimits

0xcc05,	// (0x00053e2e) listscroll_set_pane_vc

0xa34b,	// (0x00051574) clock_nsta_pane

0xa375,	// (0x0005159e) indicator_nsta_pane

0xcd45,	// (0x00053f6e) bg_popup_sub_pane_cp2_ParamLimits

0xcd59,	// (0x00053f82) find_pane_cp2_ParamLimits

0xcd59,	// (0x00053f82) find_pane_cp2

0xcd6f,	// (0x00053f98) grid_toobar_pane_ParamLimits

0xce4f,	// (0x00054078) list_form_gen_pane_vc_ParamLimits

0xce4f,	// (0x00054078) list_form_gen_pane_vc

0xce65,	// (0x0005408e) scroll_pane_cp8_vc_ParamLimits

0xce65,	// (0x0005408e) scroll_pane_cp8_vc

0xceb5,	// (0x000540de) data_form_wide_pane_vc_ParamLimits

0xceb5,	// (0x000540de) data_form_wide_pane_vc

0xcec1,	// (0x000540ea) form_field_data_wide_pane_vc_g1

0xcec9,	// (0x000540f2) form_field_data_wide_pane_vc_t1_ParamLimits

0xcec9,	// (0x000540f2) form_field_data_wide_pane_vc_t1

0xba2e,	// (0x00052c57) input_focus_pane_cp6_vc_ParamLimits

0xba2e,	// (0x00052c57) input_focus_pane_cp6_vc

0xa6f5,	// (0x0005191e) list_midp_pane_ParamLimits

0xd96f,	// (0x00054b98) scroll_pane_cp16_ParamLimits

0xd96f,	// (0x00054b98) scroll_pane_cp16

0xd15f,	// (0x00054388) button_value_adjust_pane_ParamLimits

0xd15f,	// (0x00054388) button_value_adjust_pane

0xa940,	// (0x00051b69) button_value_adjust_pane_cp6_ParamLimits

0xa940,	// (0x00051b69) button_value_adjust_pane_cp6

0xaa56,	// (0x00051c7f) settings_code_pane_cp_ParamLimits

0xaa56,	// (0x00051c7f) settings_code_pane_cp

0xadc8,	// (0x00051ff1) cell_touch_pane_g1

0xadc8,	// (0x00051ff1) cell_touch_pane_g2

0x0001,

0xf709,	// (0x00056932) cell_touch_pane_g

0xab7d,	// (0x00051da6) cell_touch_pane_cp_ParamLimits

0xab7d,	// (0x00051da6) cell_touch_pane_cp

0xab99,	// (0x00051dc2) cell_touch_pane_ParamLimits

0xab99,	// (0x00051dc2) cell_touch_pane

0xadc8,	// (0x00051ff1) scroll_sc2_down_pane_g1

0xadc8,	// (0x00051ff1) scroll_sc2_up_pane_g1

0xadd2,	// (0x00051ffb) bg_set_opt_pane_cp4_vc

0xe369,	// (0x00055592) list_set_graphic_pane_vc_g1_ParamLimits

0xe369,	// (0x00055592) list_set_graphic_pane_vc_g1

0xe375,	// (0x0005559e) list_set_graphic_pane_vc_g2_ParamLimits

0xe375,	// (0x0005559e) list_set_graphic_pane_vc_g2

0x0001,

0xf9f9,	// (0x00056c22) list_set_graphic_pane_vc_g_ParamLimits

0xf9f9,	// (0x00056c22) list_set_graphic_pane_vc_g

0xe381,	// (0x000555aa) text_primary_small_cp13_vc_ParamLimits

0xe381,	// (0x000555aa) text_primary_small_cp13_vc

0xd95c,	// (0x00054b85) list_set_graphic_pane_vc_ParamLimits

0xd95c,	// (0x00054b85) list_set_graphic_pane_vc

0xadd2,	// (0x00051ffb) input_focus_pane_cp2_vc

0xadc8,	// (0x00051ff1) setting_code_pane_vc_g1

0xae45,	// (0x0005206e) setting_code_pane_vc_t1

0xe399,	// (0x000555c2) set_text_pane_vc_t1_ParamLimits

0xe399,	// (0x000555c2) set_text_pane_vc_t1

0xadd2,	// (0x00051ffb) input_focus_pane_cp1_vc

0xe3b6,	// (0x000555df) list_set_text_pane_vc

0xadc8,	// (0x00051ff1) setting_text_pane_vc_g1

0xadd2,	// (0x00051ffb) bg_set_opt_pane_cp2_vc

0xae3c,	// (0x00052065) setting_slider_graphic_pane_vc_g1

0xe3c0,	// (0x000555e9) setting_slider_graphic_pane_vc_t1

0xe3d0,	// (0x000555f9) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fe,	// (0x00056c27) setting_slider_graphic_pane_vc_t

0xe3e0,	// (0x00055609) slider_set_pane_cp_vc

0xe3e8,	// (0x00055611) slider_set_pane_vc_g1

0xe3f1,	// (0x0005561a) slider_set_pane_vc_g2

0x0006,

0xfa03,	// (0x00056c2c) slider_set_pane_vc_g

0xba89,	// (0x00052cb2) set_opt_bg_pane_g1_copy1

0xba91,	// (0x00052cba) set_opt_bg_pane_g2_copy1

0xe41d,	// (0x00055646) set_opt_bg_pane_g3_copy1

0xbaa1,	// (0x00052cca) set_opt_bg_pane_g4_copy1

0xc06b,	// (0x00053294) set_opt_bg_pane_g5_copy1

0xc073,	// (0x0005329c) set_opt_bg_pane_g6_copy1

0xe425,	// (0x0005564e) set_opt_bg_pane_g7_copy1

0xe42f,	// (0x00055658) set_opt_bg_pane_g8_copy1

0xe437,	// (0x00055660) set_opt_bg_pane_g9_copy1

0xadd2,	// (0x00051ffb) bg_set_opt_pane_cp_vc

0xe43f,	// (0x00055668) setting_slider_pane_vc_t1

0xe44e,	// (0x00055677) setting_slider_pane_vc_t2

0xe45e,	// (0x00055687) setting_slider_pane_vc_t3

0x0002,

0xfa12,	// (0x00056c3b) setting_slider_pane_vc_t

0xe46e,	// (0x00055697) slider_set_pane_vc

0x1b3d,	// (0x00048d66) volume_set_pane_vc_g1

0x1e2c,	// (0x00049055) volume_set_pane_vc_g2

0x1e35,	// (0x0004905e) volume_set_pane_vc_g3

0x1e3e,	// (0x00049067) volume_set_pane_vc_g4

0x1e47,	// (0x00049070) volume_set_pane_vc_g5

0x1e50,	// (0x00049079) volume_set_pane_vc_g6

0x1b6a,	// (0x00048d93) volume_set_pane_vc_g7

0x1e59,	// (0x00049082) volume_set_pane_vc_g8

0x1e62,	// (0x0004908b) volume_set_pane_vc_g9

0x1e6b,	// (0x00049094) volume_set_pane_vc_g10

0x0009,

0xfa19,	// (0x00056c42) volume_set_pane_vc_g

0xe476,	// (0x0005569f) volume_set_pane_vc

0xe47e,	// (0x000556a7) button_value_adjust_pane_cp1_vc

0xe488,	// (0x000556b1) list_highlight_pane_cp2_vc

0xe491,	// (0x000556ba) list_set_pane_vc_ParamLimits

0xe491,	// (0x000556ba) list_set_pane_vc

0xe4ef,	// (0x00055718) main_pane_set_vc_t1_ParamLimits

0xe4ef,	// (0x00055718) main_pane_set_vc_t1

0xe504,	// (0x0005572d) main_pane_set_vc_t2_ParamLimits

0xe504,	// (0x0005572d) main_pane_set_vc_t2

0xe516,	// (0x0005573f) main_pane_set_vc_t3_ParamLimits

0xe516,	// (0x0005573f) main_pane_set_vc_t3

0xe528,	// (0x00055751) main_pane_set_vc_t4_ParamLimits

0xe528,	// (0x00055751) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x00056c57) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x00056c57) main_pane_set_vc_t

0xe53a,	// (0x00055763) setting_code_pane_vc_ParamLimits

0xe53a,	// (0x00055763) setting_code_pane_vc

0xe549,	// (0x00055772) setting_slider_graphic_pane_vc

0xe549,	// (0x00055772) setting_slider_pane_vc

0xe549,	// (0x00055772) setting_text_pane_vc

0xe549,	// (0x00055772) setting_volume_pane_vc

0xe551,	// (0x0005577a) scroll_pane_cp121_vc

0xb90e,	// (0x00052b37) set_content_pane_vc

0xe559,	// (0x00055782) button_value_adjust_pane_g1

0xe562,	// (0x0005578b) button_value_adjust_pane_g2

0x0001,

0xfa81,	// (0x00056caa) button_value_adjust_pane_g

0xe56b,	// (0x00055794) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe56b,	// (0x00055794) form_field_slider_wide_pane_vc_t1

0xe57f,	// (0x000557a8) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe57f,	// (0x000557a8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa86,	// (0x00056caf) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa86,	// (0x00056caf) form_field_slider_wide_pane_vc_t

0xae20,	// (0x00052049) input_focus_pane_cp10_vc_ParamLimits

0xae20,	// (0x00052049) input_focus_pane_cp10_vc

0xe5ab,	// (0x000557d4) slider_cont_pane_cp1_vc_ParamLimits

0xe5ab,	// (0x000557d4) slider_cont_pane_cp1_vc

0xe5bb,	// (0x000557e4) slider_form_pane_g1_cp2

0xe3f1,	// (0x0005561a) slider_form_pane_g2_cp2

0xe5e8,	// (0x00055811) form_field_slider_pane_vc_t3

0xe5f6,	// (0x0005581f) form_field_slider_pane_vc_t4

0xe604,	// (0x0005582d) slider_form_pane_vc_ParamLimits

0xe604,	// (0x0005582d) slider_form_pane_vc

0xe611,	// (0x0005583a) form_field_slider_pane_vc_t1_ParamLimits

0xe611,	// (0x0005583a) form_field_slider_pane_vc_t1

0xe57f,	// (0x000557a8) form_field_slider_pane_vc_t2_ParamLimits

0xe57f,	// (0x000557a8) form_field_slider_pane_vc_t2

0x0001,

0xfa98,	// (0x00056cc1) form_field_slider_pane_vc_t_ParamLimits

0xfa98,	// (0x00056cc1) form_field_slider_pane_vc_t

0xae20,	// (0x00052049) input_focus_pane_cp9_vc_ParamLimits

0xae20,	// (0x00052049) input_focus_pane_cp9_vc

0xe62d,	// (0x00055856) slider_cont_pane_vc_ParamLimits

0xe62d,	// (0x00055856) slider_cont_pane_vc

0xe63f,	// (0x00055868) list_form_graphic_pane_cp_vc_ParamLimits

0xe63f,	// (0x00055868) list_form_graphic_pane_cp_vc

0xcec1,	// (0x000540ea) form_field_popup_wide_pane_vc_g1

0xe654,	// (0x0005587d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe654,	// (0x0005587d) form_field_popup_wide_pane_vc_t1

0xba2e,	// (0x00052c57) input_focus_pane_cp8_vc_ParamLimits

0xba2e,	// (0x00052c57) input_focus_pane_cp8_vc

0xe699,	// (0x000558c2) list_form_wide_pane_vc_ParamLimits

0xe699,	// (0x000558c2) list_form_wide_pane_vc

0xe6a5,	// (0x000558ce) list_form_graphic_pane_vc_g1

0xe6ad,	// (0x000558d6) list_form_graphic_pane_vc_t1_ParamLimits

0xe6ad,	// (0x000558d6) list_form_graphic_pane_vc_t1

0xae2e,	// (0x00052057) list_highlight_pane_cp5_vc_ParamLimits

0xae2e,	// (0x00052057) list_highlight_pane_cp5_vc

0xe6c9,	// (0x000558f2) list_form_graphic_pane_vc_ParamLimits

0xe6c9,	// (0x000558f2) list_form_graphic_pane_vc

0xcec1,	// (0x000540ea) form_field_popup_pane_vc_g1

0xe6df,	// (0x00055908) form_field_popup_pane_vc_t1_ParamLimits

0xe6df,	// (0x00055908) form_field_popup_pane_vc_t1

0xba2e,	// (0x00052c57) input_focus_pane_cp7_vc_ParamLimits

0xba2e,	// (0x00052c57) input_focus_pane_cp7_vc

0xe6f6,	// (0x0005591f) list_form_pane_vc_ParamLimits

0xe6f6,	// (0x0005591f) list_form_pane_vc

0xe702,	// (0x0005592b) data_form_pane_vc_t1_ParamLimits

0xe702,	// (0x0005592b) data_form_pane_vc_t1

0xba89,	// (0x00052cb2) input_focus_pane_vc_g1

0xba91,	// (0x00052cba) input_focus_pane_vc_g2

0xba99,	// (0x00052cc2) input_focus_pane_vc_g3

0xbaa1,	// (0x00052cca) input_focus_pane_vc_g4

0xc06b,	// (0x00053294) input_focus_pane_vc_g5

0xc073,	// (0x0005329c) input_focus_pane_vc_g6

0xc07b,	// (0x000532a4) input_focus_pane_vc_g7

0xc083,	// (0x000532ac) input_focus_pane_vc_g8

0xc08b,	// (0x000532b4) input_focus_pane_vc_g9

0xadc8,	// (0x00051ff1) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x000568bb) input_focus_pane_vc_g

0xceb5,	// (0x000540de) data_form_pane_vc_ParamLimits

0xceb5,	// (0x000540de) data_form_pane_vc

0xcec1,	// (0x000540ea) form_field_data_pane_vc_g1

0xe71d,	// (0x00055946) form_field_data_pane_vc_t1_ParamLimits

0xe71d,	// (0x00055946) form_field_data_pane_vc_t1

0xba2e,	// (0x00052c57) input_focus_pane_vc_ParamLimits

0xba2e,	// (0x00052c57) input_focus_pane_vc

0xe737,	// (0x00055960) button_value_adjust_pane_cp3_vc

0xe73f,	// (0x00055968) button_value_adjust_pane_cp5_vc

0xe747,	// (0x00055970) form_field_data_pane_vc_ParamLimits

0xe747,	// (0x00055970) form_field_data_pane_vc

0xe75e,	// (0x00055987) form_field_data_pane_vc_cp2

0xe766,	// (0x0005598f) form_field_data_wide_pane_vc_ParamLimits

0xe766,	// (0x0005598f) form_field_data_wide_pane_vc

0xe77c,	// (0x000559a5) form_field_data_wide_pane_vc_cp2

0xe784,	// (0x000559ad) form_field_popup_pane_vc_ParamLimits

0xe784,	// (0x000559ad) form_field_popup_pane_vc

0xe79b,	// (0x000559c4) form_field_popup_wide_pane_vc_ParamLimits

0xe79b,	// (0x000559c4) form_field_popup_wide_pane_vc

0xe7b1,	// (0x000559da) form_field_slider_pane_vc_ParamLimits

0xe7b1,	// (0x000559da) form_field_slider_pane_vc

0xe7c4,	// (0x000559ed) form_field_slider_wide_pane_vc_ParamLimits

0xe7c4,	// (0x000559ed) form_field_slider_wide_pane_vc

0xabb7,	// (0x00051de0) grid_touch_1_pane_ParamLimits

0xabb7,	// (0x00051de0) grid_touch_1_pane

0xabcb,	// (0x00051df4) grid_touch_2_pane_ParamLimits

0xabcb,	// (0x00051df4) grid_touch_2_pane

0xe7d7,	// (0x00055a00) touch_pane_g1_ParamLimits

0xe7d7,	// (0x00055a00) touch_pane_g1

0xe7e5,	// (0x00055a0e) cell_app_pane_cp_wide_ParamLimits

0xe7e5,	// (0x00055a0e) cell_app_pane_cp_wide

0xe7f6,	// (0x00055a1f) grid_popup_fast_wide_pane_ParamLimits

0xe7f6,	// (0x00055a1f) grid_popup_fast_wide_pane

0xe80a,	// (0x00055a33) scroll_pane_cp19_ParamLimits

0xe80a,	// (0x00055a33) scroll_pane_cp19

0xadd2,	// (0x00051ffb) bg_popup_window_pane_cp20

0xe81e,	// (0x00055a47) listscroll_popup_fast_wide_pane

0xdf87,	// (0x000551b0) grid_indicator_nsta_pane

0xe826,	// (0x00055a4f) clock_nsta_pane_g1

0xe82f,	// (0x00055a58) clock_nsta_pane_t1

0xabf5,	// (0x00051e1e) cell_indicator_nsta_pane_ParamLimits

0xabf5,	// (0x00051e1e) cell_indicator_nsta_pane

0xe7d7,	// (0x00055a00) cell_indicator_nsta_pane_g1

0xac12,	// (0x00051e3b) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x00056cd2) cell_indicator_nsta_pane_g

0xe84b,	// (0x00055a74) clock_nsta_pane_cp

0xe853,	// (0x00055a7c) indicator_nsta_pane_cp

0xe85b,	// (0x00055a84) nsta_clock_indic_pane_g1

0xae6a,	// (0x00052093) grid_indicator_pane

0xc459,	// (0x00053682) scroll_pane_cp29

0x112c,	// (0x00048355) indicator_nsta_pane_cp2_ParamLimits

0x112c,	// (0x00048355) indicator_nsta_pane_cp2

0xae2e,	// (0x00052057) main_apps_wheel_pane

0xd002,	// (0x0005422b) form_midp_field_text_pane_ParamLimits

0xd131,	// (0x0005435a) scroll_bar_cp050_ParamLimits

0xe8bc,	// (0x00055ae5) cell_indicator_pane_ParamLimits

0xe8bc,	// (0x00055ae5) cell_indicator_pane

0xe8d7,	// (0x00055b00) cell_indicator_pane_g1

0xac28,	// (0x00051e51) grid_wheel_folder_pane_ParamLimits

0xac28,	// (0x00051e51) grid_wheel_folder_pane

0xac36,	// (0x00051e5f) list_wheel_apps_pane_ParamLimits

0xac36,	// (0x00051e5f) list_wheel_apps_pane

0xac44,	// (0x00051e6d) main_apps_wheel_pane_g1_ParamLimits

0xac44,	// (0x00051e6d) main_apps_wheel_pane_g1

0xac50,	// (0x00051e79) main_apps_wheel_pane_g2_ParamLimits

0xac50,	// (0x00051e79) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x00056cee) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x00056cee) main_apps_wheel_pane_g

0xac5e,	// (0x00051e87) main_apps_wheel_pane_t1_ParamLimits

0xac5e,	// (0x00051e87) main_apps_wheel_pane_t1

0xac72,	// (0x00051e9b) list_wheel_apps_pane_g1

0xac7a,	// (0x00051ea3) list_wheel_apps_pane_g2

0xac82,	// (0x00051eab) list_wheel_apps_pane_g3

0xac8a,	// (0x00051eb3) list_wheel_apps_pane_g4

0xac94,	// (0x00051ebd) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x00056cf3) list_wheel_apps_pane_g

0xc865,	// (0x00053a8e) navi_icon_text_pane

0xa23f,	// (0x00051468) aid_fill_nsta

0xe8e1,	// (0x00055b0a) navi_icon_text_pane_g1

0xe8ed,	// (0x00055b16) navi_icon_text_pane_t1

0xc75f,	// (0x00053988) list_set_graphic_pane_t1_ParamLimits

0xc75f,	// (0x00053988) list_set_graphic_pane_t1

0xd849,	// (0x00054a72) popup_midp_note_alarm_window_t6_ParamLimits

0xd849,	// (0x00054a72) popup_midp_note_alarm_window_t6

0xd85b,	// (0x00054a84) popup_midp_note_alarm_window_t7_ParamLimits

0xd85b,	// (0x00054a84) popup_midp_note_alarm_window_t7

0xd86d,	// (0x00054a96) popup_midp_note_alarm_window_t8_ParamLimits

0xd86d,	// (0x00054a96) popup_midp_note_alarm_window_t8

0xd87f,	// (0x00054aa8) popup_midp_note_alarm_window_t9_ParamLimits

0xd87f,	// (0x00054aa8) popup_midp_note_alarm_window_t9

0xd891,	// (0x00054aba) popup_midp_note_alarm_window_t10_ParamLimits

0xd891,	// (0x00054aba) popup_midp_note_alarm_window_t10

0xd8a3,	// (0x00054acc) popup_midp_note_alarm_window_t11_ParamLimits

0xd8a3,	// (0x00054acc) popup_midp_note_alarm_window_t11

0xd8b5,	// (0x00054ade) scroll_pane_cp17_ParamLimits

0xd8b5,	// (0x00054ade) scroll_pane_cp17

0x1b3d,	// (0x00048d66) volume_small_pane_cp_g1

0x1e74,	// (0x0004909d) volume_small_pane_cp_g2

0x1e7d,	// (0x000490a6) volume_small_pane_cp_g3

0x1b4f,	// (0x00048d78) volume_small_pane_cp_g4

0x1e86,	// (0x000490af) volume_small_pane_cp_g5

0x1e47,	// (0x00049070) volume_small_pane_cp_g6

0x1b61,	// (0x00048d8a) volume_small_pane_cp_g7

0x1e8f,	// (0x000490b8) volume_small_pane_cp_g8

0x1e98,	// (0x000490c1) volume_small_pane_cp_g9

0x1b73,	// (0x00048d9c) volume_small_pane_cp_g10

0xc9eb,	// (0x00053c14) midp_ticker_pane_g1_ParamLimits

0xc9f7,	// (0x00053c20) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00056987) midp_ticker_pane_g_ParamLimits

0xca03,	// (0x00053c2c) midp_ticker_pane_t1_ParamLimits

0xa263,	// (0x0005148c) aid_fill_nsta_2

0xd11d,	// (0x00054346) list_form2_midp_pane

0xdf0c,	// (0x00055135) midp_editing_number_pane_ParamLimits

0xdf1b,	// (0x00055144) midp_ticker_pane_ParamLimits

0xe8ff,	// (0x00055b28) form2_midp_field_pane

0xe907,	// (0x00055b30) scroll_pane_cp51

0xe927,	// (0x00055b50) form2_midp_button_pane_ParamLimits

0xe927,	// (0x00055b50) form2_midp_button_pane

0xe939,	// (0x00055b62) form2_midp_content_pane_ParamLimits

0xe939,	// (0x00055b62) form2_midp_content_pane

0xe953,	// (0x00055b7c) form2_midp_field_choice_group_pane

0xe95b,	// (0x00055b84) form2_midp_field_pane_g1

0xe963,	// (0x00055b8c) form2_midp_field_pane_g2

0xe96b,	// (0x00055b94) form2_midp_field_pane_g3

0xe973,	// (0x00055b9c) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x00056d18) form2_midp_field_pane_g

0xe97b,	// (0x00055ba4) form2_midp_gauge_slider_pane

0xe983,	// (0x00055bac) form2_midp_gauge_wait_pane

0xe98b,	// (0x00055bb4) form2_midp_image_pane_ParamLimits

0xe98b,	// (0x00055bb4) form2_midp_image_pane

0xe9a6,	// (0x00055bcf) form2_midp_label_pane_ParamLimits

0xe9a6,	// (0x00055bcf) form2_midp_label_pane

0xacc7,	// (0x00051ef0) form2_midp_label_pane_cp_ParamLimits

0xacc7,	// (0x00051ef0) form2_midp_label_pane_cp

0xe9bf,	// (0x00055be8) form2_midp_string_pane_ParamLimits

0xe9bf,	// (0x00055be8) form2_midp_string_pane

0x8dd8,	// (0x00050001) form2_midp_text_pane_ParamLimits

0x8dd8,	// (0x00050001) form2_midp_text_pane

0xe9d1,	// (0x00055bfa) form2_midp_time_pane

0xe9e1,	// (0x00055c0a) input_focus_pane_cp51_ParamLimits

0xe9e1,	// (0x00055c0a) input_focus_pane_cp51

0xe9f9,	// (0x00055c22) form2_midp_label_pane_t1_ParamLimits

0xe9f9,	// (0x00055c22) form2_midp_label_pane_t1

0x8df1,	// (0x0005001a) form2_mdip_text_pane_t1_ParamLimits

0x8df1,	// (0x0005001a) form2_mdip_text_pane_t1

0x3fc2,	// (0x0004b1eb) form2_midp_time_pane_t1

0xea41,	// (0x00055c6a) form2_midp_gauge_slider_pane_t1

0xace8,	// (0x00051f11) form2_midp_gauge_slider_pane_t2

0xacfc,	// (0x00051f25) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x00056d21) form2_midp_gauge_slider_pane_t

0xea53,	// (0x00055c7c) form2_midp_slider_pane

0xea5f,	// (0x00055c88) form2_midp_gauge_wait_pane_t1

0xea6d,	// (0x00055c96) form2_midp_wait_pane_ParamLimits

0xea6d,	// (0x00055c96) form2_midp_wait_pane

0xad10,	// (0x00051f39) list_single_2graphic_pane_cp4_ParamLimits

0xad10,	// (0x00051f39) list_single_2graphic_pane_cp4

0xa67b,	// (0x000518a4) list_single_midp_graphic_pane_cp_ParamLimits

0xa67b,	// (0x000518a4) list_single_midp_graphic_pane_cp

0xadd2,	// (0x00051ffb) list_highlight_pane_cp20

0xea99,	// (0x00055cc2) list_single_2graphic_pane_g1_cp4

0xe26e,	// (0x00055497) list_single_2graphic_pane_g2_cp4

0xeaa1,	// (0x00055cca) list_single_2graphic_pane_t1_cp4

0xae2e,	// (0x00052057) list_highlight_pane_cp21

0xeab0,	// (0x00055cd9) list_single_midp_graphic_pane_g4_cp

0xeabf,	// (0x00055ce8) list_single_midp_graphic_pane_t1_cp

0xad26,	// (0x00051f4f) form2_mdip_string_pane_t1_ParamLimits

0xad26,	// (0x00051f4f) form2_mdip_string_pane_t1

0xadd2,	// (0x00051ffb) bg_wml_button_pane_cp2

0xadc8,	// (0x00051ff1) form2_midp_image_pane_g1

0x2fe8,	// (0x0004a211) list_double_large_graphic_pane_g5_ParamLimits

0x2fe8,	// (0x0004a211) list_double_large_graphic_pane_g5

0xc155,	// (0x0005337e) midp_form_pane_ParamLimits

0xae2e,	// (0x00052057) main_apps_wheel_pane_ParamLimits

0x8928,	// (0x0004fb51) popup_preview_window_ParamLimits

0x8928,	// (0x0004fb51) popup_preview_window

0x19a8,	// (0x00048bd1) popup_touch_info_window_ParamLimits

0x19a8,	// (0x00048bd1) popup_touch_info_window

0x19c6,	// (0x00048bef) popup_touch_menu_window_ParamLimits

0x19c6,	// (0x00048bef) popup_touch_menu_window

0xadbe,	// (0x00051fe7) bg_popup_sub_pane_cp6

0xead4,	// (0x00055cfd) list_touch_menu_pane

0xeadc,	// (0x00055d05) list_single_touch_menu_pane_ParamLimits

0xeadc,	// (0x00055d05) list_single_touch_menu_pane

0xeaf0,	// (0x00055d19) list_single_touch_menu_pane_t1

0xae2e,	// (0x00052057) bg_popup_sub_pane_cp7_ParamLimits

0xae2e,	// (0x00052057) bg_popup_sub_pane_cp7

0xeafe,	// (0x00055d27) heading_sub_pane

0xeb06,	// (0x00055d2f) list_touch_info_pane_ParamLimits

0xeb06,	// (0x00055d2f) list_touch_info_pane

0xeb15,	// (0x00055d3e) list_single_touch_info_pane_ParamLimits

0xeb15,	// (0x00055d3e) list_single_touch_info_pane

0xeb27,	// (0x00055d50) list_single_touch_info_pane_t1

0xeb35,	// (0x00055d5e) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x00056d2f) list_single_touch_info_pane_t

0xc9c1,	// (0x00053bea) bg_popup_heading_pane_cp

0xeb43,	// (0x00055d6c) heading_sub_pane_t1

0xce7b,	// (0x000540a4) bg_popup_preview_window_pane_cp_ParamLimits

0xce7b,	// (0x000540a4) bg_popup_preview_window_pane_cp

0xeafe,	// (0x00055d27) heading_preview_pane

0xeb06,	// (0x00055d2f) list_preview_pane_ParamLimits

0xeb06,	// (0x00055d2f) list_preview_pane

0xeb51,	// (0x00055d7a) popup_preview_window_g1

0xeb15,	// (0x00055d3e) list_single_preview_pane_ParamLimits

0xeb15,	// (0x00055d3e) list_single_preview_pane

0xeb59,	// (0x00055d82) list_single_preview_pane_g1

0xeb61,	// (0x00055d8a) list_single_preview_pane_t1

0xeb27,	// (0x00055d50) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x00056d34) list_single_preview_pane_t

0xeb6f,	// (0x00055d98) bg_popup_heading_pane_cp2_ParamLimits

0xeb6f,	// (0x00055d98) bg_popup_heading_pane_cp2

0xeb85,	// (0x00055dae) heading_preview_pane_g1

0xeb8d,	// (0x00055db6) heading_preview_pane_t1_ParamLimits

0xeb8d,	// (0x00055db6) heading_preview_pane_t1

0xae81,	// (0x000520aa) soft_indicator_pane_t1_ParamLimits

0xb8a7,	// (0x00052ad0) scroll_pane_ParamLimits

0xc352,	// (0x0005357b) scroll_sc2_left_pane

0xc35b,	// (0x00053584) scroll_sc2_right_pane

0xc37a,	// (0x000535a3) scroll_bg_pane_g1_ParamLimits

0xc38f,	// (0x000535b8) scroll_bg_pane_g2_ParamLimits

0xc3a7,	// (0x000535d0) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x00056912) scroll_bg_pane_g_ParamLimits

0xc37a,	// (0x000535a3) scroll_handle_pane_g1_ParamLimits

0xc3c9,	// (0x000535f2) scroll_handle_pane_g2_ParamLimits

0xc3a7,	// (0x000535d0) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00056919) scroll_handle_pane_g_ParamLimits

0x1478,	// (0x000486a1) popup_choice_list_window_ParamLimits

0x1478,	// (0x000486a1) popup_choice_list_window

0xcd51,	// (0x00053f7a) choice_list_pane

0xcdd3,	// (0x00053ffc) cell_toolbar_pane_t1

0xcdfb,	// (0x00054024) toolbar_button_pane_ParamLimits

0xdc83,	// (0x00054eac) ai_gene_pane_1_t2_ParamLimits

0xdc83,	// (0x00054eac) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x00056b3c) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x00056b3c) ai_gene_pane_1_t

0xebaa,	// (0x00055dd3) scroll_sc2_left_pane_g1

0xebaa,	// (0x00055dd3) scroll_sc2_right_pane_g1

0xc155,	// (0x0005337e) bg_popup_sub_pane_cp10

0xebb4,	// (0x00055ddd) list_choice_list_pane

0xebcd,	// (0x00055df6) list_single_choice_list_pane_ParamLimits

0xebcd,	// (0x00055df6) list_single_choice_list_pane

0xec22,	// (0x00055e4b) list_single_choice_list_pane_g1

0xc140,	// (0x00053369) list_single_choice_list_pane_t1_ParamLimits

0xc140,	// (0x00053369) list_single_choice_list_pane_t1

0xec2a,	// (0x00055e53) choice_list_pane_g1

0xec32,	// (0x00055e5b) choice_list_pane_t1

0xadbe,	// (0x00051fe7) input_focus_pane_cp11

0xc2c7,	// (0x000534f0) title_pane_stacon_g2_ParamLimits

0xc2c7,	// (0x000534f0) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x000568f8) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000568f8) title_pane_stacon_g

0xc9c1,	// (0x00053bea) cursor_press_pane

0x85e1,	// (0x0004f80a) popup_fep_hwr_window_ParamLimits

0x85e1,	// (0x0004f80a) popup_fep_hwr_window

0x1598,	// (0x000487c1) popup_fep_vkb_window_ParamLimits

0x1598,	// (0x000487c1) popup_fep_vkb_window

0xec40,	// (0x00055e69) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x00056d5d) fep_vkb_side_pane_g_ParamLimits

0x1eda,	// (0x00049103) fep_hwr_candidate_pane_ParamLimits

0x1eda,	// (0x00049103) fep_hwr_candidate_pane

0x1f04,	// (0x0004912d) fep_hwr_side_pane_ParamLimits

0x1f04,	// (0x0004912d) fep_hwr_side_pane

0x1f24,	// (0x0004914d) fep_hwr_top_pane_ParamLimits

0x1f24,	// (0x0004914d) fep_hwr_top_pane

0x1f3c,	// (0x00049165) fep_hwr_write_pane_ParamLimits

0x1f3c,	// (0x00049165) fep_hwr_write_pane

0xfb34,	// (0x00056d5d) fep_vkb_side_pane_g

0xec48,	// (0x00055e71) fep_hwr_top_pane_g1

0xec5a,	// (0x00055e83) fep_hwr_top_pane_g2

0x1f76,	// (0x0004919f) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x00056d39) fep_hwr_top_pane_g

0x1f8b,	// (0x000491b4) fep_hwr_top_text_pane

0xc51f,	// (0x00053748) fep_hwr_top_text_pane_g1

0xec90,	// (0x00055eb9) fep_hwr_top_text_pane_t1

0x2081,	// (0x000492aa) fep_hwr_candidate_pane_g1

0xedbb,	// (0x00055fe4) fep_vkb_keypad_pane_g3_ParamLimits

0xedbb,	// (0x00055fe4) fep_vkb_keypad_pane_g3

0xede3,	// (0x0005600c) fep_vkb_keypad_pane_g4_ParamLimits

0xede3,	// (0x0005600c) fep_vkb_keypad_pane_g4

0xee52,	// (0x0005607b) fep_vkb_bottom_pane_g2_ParamLimits

0xee52,	// (0x0005607b) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x00056d64) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x00056d64) fep_vkb_bottom_pane_g

0xebaa,	// (0x00055dd3) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x00056d6e) cell_vkb_side_pane_g

0xee96,	// (0x000560bf) cell_vkb_side_pane_t1

0xeea4,	// (0x000560cd) cell_vkb_side_pane_t1_copy1

0xebaa,	// (0x00055dd3) bg_fep_vkb_candidate_pane_g2

0xef7a,	// (0x000561a3) cell_vkb_candidate_pane_ParamLimits

0xec9e,	// (0x00055ec7) aid_size_cell_vkb_ParamLimits

0xec9e,	// (0x00055ec7) aid_size_cell_vkb

0xef7a,	// (0x000561a3) cell_vkb_candidate_pane

0x20a8,	// (0x000492d1) bg_popup_fep_shadow_pane_g1

0xaf32,	// (0x0005215b) fep_vkb_bottom_pane_ParamLimits

0xaf32,	// (0x0005215b) fep_vkb_bottom_pane

0xed29,	// (0x00055f52) fep_vkb_candidate_pane_ParamLimits

0xed29,	// (0x00055f52) fep_vkb_candidate_pane

0xaf57,	// (0x00052180) fep_vkb_keypad_pane_ParamLimits

0xaf57,	// (0x00052180) fep_vkb_keypad_pane

0xaf8c,	// (0x000521b5) fep_vkb_side_pane_ParamLimits

0xaf8c,	// (0x000521b5) fep_vkb_side_pane

0xafc8,	// (0x000521f1) fep_vkb_top_pane_ParamLimits

0xafc8,	// (0x000521f1) fep_vkb_top_pane

0xed4f,	// (0x00055f78) fep_vkb_top_pane_g1_ParamLimits

0xed4f,	// (0x00055f78) fep_vkb_top_pane_g1

0xed5e,	// (0x00055f87) fep_vkb_top_pane_g2_ParamLimits

0xed5e,	// (0x00055f87) fep_vkb_top_pane_g2

0xed6d,	// (0x00055f96) fep_vkb_top_pane_g3_ParamLimits

0xed6d,	// (0x00055f96) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x00056d54) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x00056d54) fep_vkb_top_pane_g

0xed8b,	// (0x00055fb4) fep_vkb_top_text_pane_ParamLimits

0xed8b,	// (0x00055fb4) fep_vkb_top_text_pane

0xaffd,	// (0x00052226) fep_vkb_side_pane_g1_ParamLimits

0xaffd,	// (0x00052226) fep_vkb_side_pane_g1

0xedaa,	// (0x00055fd3) grid_vkb_side_pane_ParamLimits

0xedaa,	// (0x00055fd3) grid_vkb_side_pane

0x20b0,	// (0x000492d9) bg_popup_fep_shadow_pane_g2

0x20b9,	// (0x000492e2) bg_popup_fep_shadow_pane_g3

0x20c1,	// (0x000492ea) bg_popup_fep_shadow_pane_g4

0x20ca,	// (0x000492f3) bg_popup_fep_shadow_pane_g5

0x20d4,	// (0x000492fd) bg_popup_fep_shadow_pane_g6

0x20dc,	// (0x00049305) bg_popup_fep_shadow_pane_g7

0xbaa1,	// (0x00052cca) bg_popup_fep_shadow_pane_g8

0xee01,	// (0x0005602a) grid_vkb_keypad_number_pane_ParamLimits

0xee01,	// (0x0005602a) grid_vkb_keypad_number_pane

0xee11,	// (0x0005603a) grid_vkb_keypad_pane_ParamLimits

0xee11,	// (0x0005603a) grid_vkb_keypad_pane

0xee37,	// (0x00056060) fep_vkb_bottom_pane_g1_ParamLimits

0xee37,	// (0x00056060) fep_vkb_bottom_pane_g1

0xee60,	// (0x00056089) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xee60,	// (0x00056089) grid_vkb_keypad_bottom_left_pane

0xee75,	// (0x0005609e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xee75,	// (0x0005609e) grid_vkb_keypad_bottom_right_pane

0xee8a,	// (0x000560b3) fep_vkb_top_text_pane_g1

0xb044,	// (0x0005226d) fep_vkb_top_text_pane_t1

0xb056,	// (0x0005227f) cell_vkb_side_pane_ParamLimits

0xb056,	// (0x0005227f) cell_vkb_side_pane

0xebaa,	// (0x00055dd3) cell_vkb_side_pane_g1

0xeeb2,	// (0x000560db) cell_vkb_keypad_pane_ParamLimits

0xeeb2,	// (0x000560db) cell_vkb_keypad_pane

0xef27,	// (0x00056150) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x00056d81) bg_popup_fep_shadow_pane_g

0x20ee,	// (0x00049317) cell_hwr_side_pane_g1

0x20ee,	// (0x00049317) cell_hwr_side_pane_g2

0xef31,	// (0x0005615a) cell_vkb_keypad_pane_t1

0xb06c,	// (0x00052295) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb06c,	// (0x00052295) cell_vkb_keypad_bottom_left_pane

0xb081,	// (0x000522aa) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb081,	// (0x000522aa) cell_vkb_keypad_bottom_right_pane

0xebaa,	// (0x00055dd3) cell_vkb_keypad_bottom_left_pane_g1

0xebaa,	// (0x00055dd3) cell_vkb_keypad_bottom_right_pane_g1

0xef3f,	// (0x00056168) cell_vkb_keypad_number_pane_ParamLimits

0xef3f,	// (0x00056168) cell_vkb_keypad_number_pane

0xef5e,	// (0x00056187) cell_vkb_keypad_number_pane_g1

0xef68,	// (0x00056191) cell_vkb_keypad_number_pane_g2

0xef71,	// (0x0005619a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x00056d73) cell_vkb_keypad_number_pane_g

0xef31,	// (0x0005615a) cell_vkb_keypad_number_pane_t1

0xef95,	// (0x000561be) fep_vkb_candidate_pane_g1

0x0001,

0xfb6b,	// (0x00056d94) cell_hwr_side_pane_g

0xefae,	// (0x000561d7) cell_hwr_side_pane_t1

0x20f8,	// (0x00049321) cell_hwr_side_pane_t1_copy1

0x2106,	// (0x0004932f) cell_hwr_candidate_pane_g1

0x2135,	// (0x0004935e) cell_hwr_candidate_pane_t1

0xebaa,	// (0x00055dd3) cell_vkb_candidate_pane_g2

0xeff2,	// (0x0005621b) cell_vkb_candidate_pane_t1

0x1ea1,	// (0x000490ca) bg_popup_fep_shadow_pane_ParamLimits

0x1ea1,	// (0x000490ca) bg_popup_fep_shadow_pane

0x1f56,	// (0x0004917f) bg_fep_hwr_top_pane_g4

0xec6c,	// (0x00055e95) bg_hwr_side_pane_g1_ParamLimits

0xec6c,	// (0x00055e95) bg_hwr_side_pane_g1

0x8e24,	// (0x0005004d) cell_hwr_side_pane_ParamLimits

0x8e24,	// (0x0005004d) cell_hwr_side_pane

0x2002,	// (0x0004922b) fep_hwr_write_pane_g1_ParamLimits

0x2002,	// (0x0004922b) fep_hwr_write_pane_g1

0x200f,	// (0x00049238) fep_hwr_write_pane_g2_ParamLimits

0x200f,	// (0x00049238) fep_hwr_write_pane_g2

0x201c,	// (0x00049245) fep_hwr_write_pane_g3_ParamLimits

0x201c,	// (0x00049245) fep_hwr_write_pane_g3

0x8e44,	// (0x0005006d) fep_hwr_write_pane_g4_ParamLimits

0x8e44,	// (0x0005006d) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x00056d40) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x00056d40) fep_hwr_write_pane_g

0x1f56,	// (0x0004917f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1f56,	// (0x0004917f) bg_fep_hwr_candidate_pane_g2

0x203f,	// (0x00049268) cell_hwr_candidate_pane_ParamLimits

0x203f,	// (0x00049268) cell_hwr_candidate_pane

0x2081,	// (0x000492aa) fep_hwr_candidate_pane_g1_ParamLimits

0xeccc,	// (0x00055ef5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xeccc,	// (0x00055ef5) bg_popup_fep_shadow_pane_cp2

0xed7d,	// (0x00055fa6) fep_vkb_top_pane_g4_ParamLimits

0xed7d,	// (0x00055fa6) fep_vkb_top_pane_g4

0xed9c,	// (0x00055fc5) fep_vkb_side_pane_g2_ParamLimits

0xed9c,	// (0x00055fc5) fep_vkb_side_pane_g2

0x8185,	// (0x0004f3ae) list_setting_pane_t4_ParamLimits

0x8185,	// (0x0004f3ae) list_setting_pane_t4

0x821f,	// (0x0004f448) list_setting_number_pane_t5_ParamLimits

0x821f,	// (0x0004f448) list_setting_number_pane_t5

0x9883,	// (0x00050aac) list_double_heading_pane_cp2_ParamLimits

0x9883,	// (0x00050aac) list_double_heading_pane_cp2

0xba3c,	// (0x00052c65) list_double_heading_pane_g1_cp2_ParamLimits

0xba3c,	// (0x00052c65) list_double_heading_pane_g1_cp2

0xba48,	// (0x00052c71) list_double_heading_pane_g2_cp2_ParamLimits

0xba48,	// (0x00052c71) list_double_heading_pane_g2_cp2

0xf000,	// (0x00056229) list_double_heading_pane_t1_cp2_ParamLimits

0xf000,	// (0x00056229) list_double_heading_pane_t1_cp2

0xf016,	// (0x0005623f) list_double_heading_pane_t2_cp2_ParamLimits

0xf016,	// (0x0005623f) list_double_heading_pane_t2_cp2

0xadb6,	// (0x00051fdf) aid_value_unit2

0x06cc,	// (0x000478f5) popup_preview_fixed_window

0xb420,	// (0x00052649) bg_popup_preview_window_pane_cp02

0xf028,	// (0x00056251) list_preview_fixed_pane

0xf06e,	// (0x00056297) list_empty_pane_fp_ParamLimits

0xf06e,	// (0x00056297) list_empty_pane_fp

0xf06e,	// (0x00056297) list_single_cale_day_pane_fp_ParamLimits

0xf06e,	// (0x00056297) list_single_cale_day_pane_fp

0xf06e,	// (0x00056297) list_single_graphic_heading_pane_fp_ParamLimits

0xf06e,	// (0x00056297) list_single_graphic_heading_pane_fp

0xf06e,	// (0x00056297) list_single_graphic_pane_fp_ParamLimits

0xf06e,	// (0x00056297) list_single_graphic_pane_fp

0xf06e,	// (0x00056297) list_single_heading_pane_fp_ParamLimits

0xf06e,	// (0x00056297) list_single_heading_pane_fp

0xf06e,	// (0x00056297) list_single_pane_fp_ParamLimits

0xf06e,	// (0x00056297) list_single_pane_fp

0xf084,	// (0x000562ad) list_single_pane_fp_g1_ParamLimits

0xf084,	// (0x000562ad) list_single_pane_fp_g1

0xba3c,	// (0x00052c65) list_single_pane_fp_g2_ParamLimits

0xba3c,	// (0x00052c65) list_single_pane_fp_g2

0xba48,	// (0x00052c71) list_single_pane_fp_g3_ParamLimits

0xba48,	// (0x00052c71) list_single_pane_fp_g3

0xf090,	// (0x000562b9) list_single_pane_fp_g4_ParamLimits

0xf090,	// (0x000562b9) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x00056da7) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x00056da7) list_single_pane_fp_g

0x3fd5,	// (0x0004b1fe) list_single_pane_fp_t1_ParamLimits

0x3fd5,	// (0x0004b1fe) list_single_pane_fp_t1

0x3fec,	// (0x0004b215) list_single_graphic_pane_fp_g1_ParamLimits

0x3fec,	// (0x0004b215) list_single_graphic_pane_fp_g1

0xf084,	// (0x000562ad) list_single_graphic_pane_fp_g2_ParamLimits

0xf084,	// (0x000562ad) list_single_graphic_pane_fp_g2

0xba3c,	// (0x00052c65) list_single_graphic_pane_fp_g3_ParamLimits

0xba3c,	// (0x00052c65) list_single_graphic_pane_fp_g3

0xba48,	// (0x00052c71) list_single_graphic_pane_fp_g4_ParamLimits

0xba48,	// (0x00052c71) list_single_graphic_pane_fp_g4

0xf090,	// (0x000562b9) list_single_graphic_pane_fp_g5_ParamLimits

0xf090,	// (0x000562b9) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x00056db0) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x00056db0) list_single_graphic_pane_fp_g

0x3ff8,	// (0x0004b221) list_single_graphic_pane_fp_t1_ParamLimits

0x3ff8,	// (0x0004b221) list_single_graphic_pane_fp_t1

0x3fec,	// (0x0004b215) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3fec,	// (0x0004b215) list_single_graphic_heading_pane_fp_g1

0xf084,	// (0x000562ad) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf084,	// (0x000562ad) list_single_graphic_heading_pane_fp_g2

0xba3c,	// (0x00052c65) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xba3c,	// (0x00052c65) list_single_graphic_heading_pane_fp_g3

0xba48,	// (0x00052c71) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xba48,	// (0x00052c71) list_single_graphic_heading_pane_fp_g4

0xf090,	// (0x000562b9) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf090,	// (0x000562b9) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x00056db0) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x00056db0) list_single_graphic_heading_pane_fp_g

0x400e,	// (0x0004b237) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x400e,	// (0x0004b237) list_single_graphic_heading_pane_fp_t1

0x4024,	// (0x0004b24d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4024,	// (0x0004b24d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x00056dbb) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x00056dbb) list_single_graphic_heading_pane_fp_t

0x4036,	// (0x0004b25f) list_single_cale_day_pane_fp_g1_ParamLimits

0x4036,	// (0x0004b25f) list_single_cale_day_pane_fp_g1

0xf09c,	// (0x000562c5) list_single_cale_day_pane_fp_g2_ParamLimits

0xf09c,	// (0x000562c5) list_single_cale_day_pane_fp_g2

0x49b4,	// (0x0004bbdd) list_single_cale_day_pane_fp_g3_ParamLimits

0x49b4,	// (0x0004bbdd) list_single_cale_day_pane_fp_g3

0x49dc,	// (0x0004bc05) list_single_cale_day_pane_fp_g4_ParamLimits

0x49dc,	// (0x0004bc05) list_single_cale_day_pane_fp_g4

0x4a00,	// (0x0004bc29) list_single_cale_day_pane_fp_g5_ParamLimits

0x4a00,	// (0x0004bc29) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x00056dc0) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x00056dc0) list_single_cale_day_pane_fp_g

0x406e,	// (0x0004b297) list_single_cale_day_pane_fp_t1_ParamLimits

0x406e,	// (0x0004b297) list_single_cale_day_pane_fp_t1

0x4094,	// (0x0004b2bd) list_single_cale_day_pane_fp_t2_ParamLimits

0x4094,	// (0x0004b2bd) list_single_cale_day_pane_fp_t2

0x40ad,	// (0x0004b2d6) list_single_cale_day_pane_fp_t3_ParamLimits

0x40ad,	// (0x0004b2d6) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x00056dcb) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x00056dcb) list_single_cale_day_pane_fp_t

0xf084,	// (0x000562ad) list_empty_pane_fp_g1_ParamLimits

0xf084,	// (0x000562ad) list_empty_pane_fp_g1

0x40c6,	// (0x0004b2ef) list_empty_pane_fp_t1

0x40d4,	// (0x0004b2fd) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x00056dd2) list_empty_pane_fp_t

0xf084,	// (0x000562ad) list_single_heading_pane_fp_g1_ParamLimits

0xf084,	// (0x000562ad) list_single_heading_pane_fp_g1

0xba3c,	// (0x00052c65) list_single_heading_pane_fp_g2_ParamLimits

0xba3c,	// (0x00052c65) list_single_heading_pane_fp_g2

0xba48,	// (0x00052c71) list_single_heading_pane_fp_g3_ParamLimits

0xba48,	// (0x00052c71) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x00056dd7) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x00056dd7) list_single_heading_pane_fp_g

0x40e2,	// (0x0004b30b) list_single_heading_pane_fp_t1_ParamLimits

0x40e2,	// (0x0004b30b) list_single_heading_pane_fp_t1

0x40f4,	// (0x0004b31d) list_single_heading_pane_fp_t2_ParamLimits

0x40f4,	// (0x0004b31d) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x00056dde) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x00056dde) list_single_heading_pane_fp_t

0xc161,	// (0x0005338a) aid_size_cell_fast

0xb403,	// (0x0005262c) soft_indicator_pane_cp1_t1

0xc19b,	// (0x000533c4) cell_app_pane_cp2_ParamLimits

0xc19b,	// (0x000533c4) cell_app_pane_cp2

0x1ec3,	// (0x000490ec) fep_hwr_candidate_drop_down_list_pane

0x209b,	// (0x000492c4) fep_hwr_candidate_pane_g3_ParamLimits

0x209b,	// (0x000492c4) fep_hwr_candidate_pane_g3

0x9bcf,	// (0x00050df8) fep_hwr_candidate_pane_g4_ParamLimits

0x9bcf,	// (0x00050df8) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x00056d4d) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x00056d4d) fep_hwr_candidate_pane_g

0xed18,	// (0x00055f41) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xed18,	// (0x00055f41) fep_vkb_candidate_drop_down_list_pane

0xef9d,	// (0x000561c6) fep_vkb_candidate_pane_g3

0xefa5,	// (0x000561ce) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x00056d7a) fep_vkb_candidate_pane_g

0x2106,	// (0x0004932f) cell_hwr_candidate_pane_g1_ParamLimits

0x2114,	// (0x0004933d) cell_hwr_candidate_pane_g3_ParamLimits

0x2114,	// (0x0004933d) cell_hwr_candidate_pane_g3

0x59df,	// (0x0004cc08) cell_hwr_candidate_pane_g4_ParamLimits

0x59df,	// (0x0004cc08) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x00056d99) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x00056d99) cell_hwr_candidate_pane_g

0xefbc,	// (0x000561e5) cell_vkb_candidate_pane_g3_ParamLimits

0xefbc,	// (0x000561e5) cell_vkb_candidate_pane_g3

0xefd7,	// (0x00056200) cell_vkb_candidate_pane_g4_ParamLimits

0xefd7,	// (0x00056200) cell_vkb_candidate_pane_g4

0xf0a8,	// (0x000562d1) cell_app_pane_cp2_g1_ParamLimits

0xf0a8,	// (0x000562d1) cell_app_pane_cp2_g1

0xf0c6,	// (0x000562ef) cell_app_pane_cp2_g2_ParamLimits

0xf0c6,	// (0x000562ef) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x00056de3) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x00056de3) cell_app_pane_cp2_g

0xf0d2,	// (0x000562fb) cell_app_pane_cp2_t1_ParamLimits

0xf0d2,	// (0x000562fb) cell_app_pane_cp2_t1

0xba2e,	// (0x00052c57) grid_highlight_pane_cp1_ParamLimits

0xba2e,	// (0x00052c57) grid_highlight_pane_cp1

0x2153,	// (0x0004937c) cell_hwr_candidate_pane_cp1_ParamLimits

0x2153,	// (0x0004937c) cell_hwr_candidate_pane_cp1

0x2106,	// (0x0004932f) fep_hwr_candidate_drop_down_list_pane_g1

0x2172,	// (0x0004939b) fep_hwr_candidate_drop_down_list_pane_g2

0x217f,	// (0x000493a8) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x00056de8) fep_hwr_candidate_drop_down_list_pane_g

0x218c,	// (0x000493b5) fep_hwr_candidate_drop_down_list_scroll_pane

0x2195,	// (0x000493be) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2195,	// (0x000493be) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x21a2,	// (0x000493cb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x21a2,	// (0x000493cb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x21af,	// (0x000493d8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x21af,	// (0x000493d8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x21bc,	// (0x000493e5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x21bc,	// (0x000493e5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x21d7,	// (0x00049400) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x21d7,	// (0x00049400) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x21f2,	// (0x0004941b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x21f2,	// (0x0004941b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x220d,	// (0x00049436) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x220d,	// (0x00049436) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2228,	// (0x00049451) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2228,	// (0x00049451) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x00056def) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x00056def) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf0e4,	// (0x0005630d) cell_vkb_candidate_pane_cp1_ParamLimits

0xf0e4,	// (0x0005630d) cell_vkb_candidate_pane_cp1

0xed7d,	// (0x00055fa6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xed7d,	// (0x00055fa6) fep_vkb_candidate_drop_down_list_pane_g1

0xf104,	// (0x0005632d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf104,	// (0x0005632d) fep_vkb_candidate_drop_down_list_pane_g2

0xf111,	// (0x0005633a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf111,	// (0x0005633a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x00056e00) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x00056e00) fep_vkb_candidate_drop_down_list_pane_g

0xf11e,	// (0x00056347) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf11e,	// (0x00056347) fep_vkb_candidate_drop_down_list_scroll_pane

0xf12b,	// (0x00056354) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf12b,	// (0x00056354) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf138,	// (0x00056361) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf138,	// (0x00056361) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf144,	// (0x0005636d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf144,	// (0x0005636d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf150,	// (0x00056379) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf150,	// (0x00056379) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf171,	// (0x0005639a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf171,	// (0x0005639a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf192,	// (0x000563bb) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf192,	// (0x000563bb) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf1b3,	// (0x000563dc) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf1b3,	// (0x000563dc) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf1d4,	// (0x000563fd) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf1d4,	// (0x000563fd) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x00056e07) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x00056e07) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x93d2,	// (0x000505fb) title_pane_g1_ParamLimits

0x93e5,	// (0x0005060e) title_pane_g2_ParamLimits

0xf554,	// (0x0005677d) title_pane_g_ParamLimits

0xc50f,	// (0x00053738) aid_call2_pane

0xc517,	// (0x00053740) aid_call_pane

0xc51f,	// (0x00053748) popup_clock_analogue_window_g1

0xc51f,	// (0x00053748) popup_clock_analogue_window_g2

0x1036,	// (0x0004825f) popup_clock_analogue_window_g3

0x103f,	// (0x00048268) popup_clock_analogue_window_g4

0xadc8,	// (0x00051ff1) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00056927) popup_clock_analogue_window_g

0x1047,	// (0x00048270) popup_clock_analogue_window_t1

0x1055,	// (0x0004827e) clock_digital_number_pane_ParamLimits

0x1055,	// (0x0004827e) clock_digital_number_pane

0x1061,	// (0x0004828a) clock_digital_number_pane_cp02_ParamLimits

0x1061,	// (0x0004828a) clock_digital_number_pane_cp02

0x106d,	// (0x00048296) clock_digital_number_pane_cp03_ParamLimits

0x106d,	// (0x00048296) clock_digital_number_pane_cp03

0x1079,	// (0x000482a2) clock_digital_number_pane_cp04_ParamLimits

0x1079,	// (0x000482a2) clock_digital_number_pane_cp04

0x1085,	// (0x000482ae) clock_digital_separator_pane_ParamLimits

0x1085,	// (0x000482ae) clock_digital_separator_pane

0x1091,	// (0x000482ba) popup_clock_digital_window_t1_ParamLimits

0x1091,	// (0x000482ba) popup_clock_digital_window_t1

0xadc8,	// (0x00051ff1) clock_digital_number_pane_g1

0xadc8,	// (0x00051ff1) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x00056932) clock_digital_number_pane_g

0xadc8,	// (0x00051ff1) clock_digital_separator_pane_g1

0xadc8,	// (0x00051ff1) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x00056932) clock_digital_separator_pane_g

0xa23f,	// (0x00051468) aid_fill_nsta_ParamLimits

0xa375,	// (0x0005159e) indicator_nsta_pane_ParamLimits

0xccf8,	// (0x00053f21) popup_clock_analogue_window

0xccf8,	// (0x00053f21) popup_clock_digital_window

0xdf87,	// (0x000551b0) grid_indicator_nsta_pane_ParamLimits

0xe83d,	// (0x00055a66) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x00056ccd) clock_nsta_pane_t

0x0ffa,	// (0x00048223) aid_size_max_handle

0x1004,	// (0x0004822d) aid_size_min_handle

0xc9c1,	// (0x00053bea) editor_scroll_pane

0xf1ef,	// (0x00056418) ex_editor_pane

0xc11c,	// (0x00053345) scroll_pane_cp13

0xb8d3,	// (0x00052afc) scroll_pane_cp14

0xc54e,	// (0x00053777) scroll_pane_cp36

0x9894,	// (0x00050abd) list_single_graphic_hl_pane_cp2_ParamLimits

0x9894,	// (0x00050abd) list_single_graphic_hl_pane_cp2

0x98d1,	// (0x00050afa) list_single_graphic_hl_pane_ParamLimits

0x98d1,	// (0x00050afa) list_single_graphic_hl_pane

0x410a,	// (0x0004b333) aid_size_min_hl_cp1

0xf1f7,	// (0x00056420) list_highlight_pane_cp34_ParamLimits

0xf1f7,	// (0x00056420) list_highlight_pane_cp34

0xf208,	// (0x00056431) list_single_graphic_hl_pane_g1_ParamLimits

0xf208,	// (0x00056431) list_single_graphic_hl_pane_g1

0x8e59,	// (0x00050082) list_single_graphic_hl_pane_g2_ParamLimits

0x8e59,	// (0x00050082) list_single_graphic_hl_pane_g2

0x8e59,	// (0x00050082) list_single_graphic_hl_pane_g3_ParamLimits

0x8e59,	// (0x00050082) list_single_graphic_hl_pane_g3

0xc932,	// (0x00053b5b) list_single_graphic_hl_pane_g4_ParamLimits

0xc932,	// (0x00053b5b) list_single_graphic_hl_pane_g4

0x98f5,	// (0x00050b1e) list_single_graphic_hl_pane_g5_ParamLimits

0x98f5,	// (0x00050b1e) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x00056e18) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x00056e18) list_single_graphic_hl_pane_g

0x8e65,	// (0x0005008e) list_single_graphic_hl_pane_t1_ParamLimits

0x8e65,	// (0x0005008e) list_single_graphic_hl_pane_t1

0xf215,	// (0x0005643e) aid_size_min_hl_cp2

0xf21e,	// (0x00056447) list_highlight_pane_cp34_cp2_ParamLimits

0xf21e,	// (0x00056447) list_highlight_pane_cp34_cp2

0xf208,	// (0x00056431) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf208,	// (0x00056431) list_single_graphic_hl_pane_g1_cp2

0xf22b,	// (0x00056454) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf22b,	// (0x00056454) list_single_graphic_hl_pane_g2_cp2

0xb09c,	// (0x000522c5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb09c,	// (0x000522c5) list_single_graphic_hl_pane_g3_cp2

0xc906,	// (0x00053b2f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc906,	// (0x00053b2f) list_single_graphic_hl_pane_g4_cp2

0xf237,	// (0x00056460) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf237,	// (0x00056460) list_single_graphic_hl_pane_g5_cp2

0x841f,	// (0x0004f648) control_pane_g4_ParamLimits

0x841f,	// (0x0004f648) control_pane_g4

0xc155,	// (0x0005337e) bg_popup_sub_pane_cp10_ParamLimits

0xebb4,	// (0x00055ddd) list_choice_list_pane_ParamLimits

0xebc3,	// (0x00055dec) scroll_pane_cp23

0xb420,	// (0x00052649) bg_popup_preview_window_pane_cp02_ParamLimits

0xf028,	// (0x00056251) list_preview_fixed_pane_ParamLimits

0xf03e,	// (0x00056267) list_preview_fixed_pane_cp_ParamLimits

0xf03e,	// (0x00056267) list_preview_fixed_pane_cp

0xf04a,	// (0x00056273) popup_preview_fixed_window_g1_ParamLimits

0xf04a,	// (0x00056273) popup_preview_fixed_window_g1

0xf056,	// (0x0005627f) popup_preview_fixed_window_g2_ParamLimits

0xf056,	// (0x0005627f) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x00056da0) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x00056da0) popup_preview_fixed_window_g

0x0f6e,	// (0x00048197) aid_navi_side_left_pane_ParamLimits

0x0f83,	// (0x000481ac) aid_navi_side_right_pane_ParamLimits

0x0f9b,	// (0x000481c4) navi_icon_pane_stacon_ParamLimits

0x0faf,	// (0x000481d8) navi_navi_pane_stacon_ParamLimits

0x0f9b,	// (0x000481c4) navi_text_pane_stacon_ParamLimits

0x059b,	// (0x000477c4) main_text_info_pane

0xf261,	// (0x0005648a) listscroll_text_info_pane

0xf269,	// (0x00056492) list_text_info_pane_ParamLimits

0xf269,	// (0x00056492) list_text_info_pane

0xf278,	// (0x000564a1) scroll_pane_cp24_ParamLimits

0xf278,	// (0x000564a1) scroll_pane_cp24

0xb0aa,	// (0x000522d3) list_text_info_pane_t1_ParamLimits

0xb0aa,	// (0x000522d3) list_text_info_pane_t1

0x8556,	// (0x0004f77f) popup_fast_swap2_window_ParamLimits

0x8556,	// (0x0004f77f) popup_fast_swap2_window

0xf296,	// (0x000564bf) aid_size_cell_fast2

0xadbe,	// (0x00051fe7) bg_popup_window_pane_cp17

0xd149,	// (0x00054372) heading_pane_cp2

0xb606,	// (0x0005282f) listscroll_fast2_pane

0xf2a0,	// (0x000564c9) grid_fast2_pane

0xf2aa,	// (0x000564d3) listscroll_fast2_pane_g1

0xf2b2,	// (0x000564db) listscroll_fast2_pane_g2

0x0001,

0x0062,	// (0x0004728b) listscroll_fast2_pane_g

0xc11c,	// (0x00053345) scroll_pane_cp26

0xf2bc,	// (0x000564e5) cell_fast2_pane_ParamLimits

0xf2bc,	// (0x000564e5) cell_fast2_pane

0xf2d1,	// (0x000564fa) cell_fast2_pane_g1

0xf2da,	// (0x00056503) cell_fast2_pane_g2

0xf2e3,	// (0x0005650c) cell_fast2_pane_g3

0x0002,

0x0067,	// (0x00047290) cell_fast2_pane_g

0xb69a,	// (0x000528c3) grid_highlight_pane_cp9

0x145c,	// (0x00048685) main_eswt_pane_ParamLimits

0x145c,	// (0x00048685) main_eswt_pane

0xf28d,	// (0x000564b6) list_single_text_info_pane

0xf2eb,	// (0x00056514) eswt_ctrl_button_pane

0xf2eb,	// (0x00056514) eswt_ctrl_canvas_pane

0xf2f3,	// (0x0005651c) eswt_ctrl_combo_pane

0xf2eb,	// (0x00056514) eswt_ctrl_default_pane

0xf2eb,	// (0x00056514) eswt_ctrl_label_pane

0xf2fb,	// (0x00056524) eswt_ctrl_wait_pane

0xf303,	// (0x0005652c) eswt_shell_pane

0xadbe,	// (0x00051fe7) listscroll_eswt_app_pane

0xf323,	// (0x0005654c) popup_eswt_tasktip_window_ParamLimits

0xf323,	// (0x0005654c) popup_eswt_tasktip_window

0xce7b,	// (0x000540a4) bg_popup_window_pane_cp18

0xf334,	// (0x0005655d) eswt_control_pane_g1_ParamLimits

0xf334,	// (0x0005655d) eswt_control_pane_g1

0xf341,	// (0x0005656a) eswt_control_pane_g2_ParamLimits

0xf341,	// (0x0005656a) eswt_control_pane_g2

0xf34e,	// (0x00056577) eswt_control_pane_g3_ParamLimits

0xf34e,	// (0x00056577) eswt_control_pane_g3

0xf35b,	// (0x00056584) eswt_control_pane_g4_ParamLimits

0xf35b,	// (0x00056584) eswt_control_pane_g4

0x0003,

0x006e,	// (0x00047297) eswt_control_pane_g_ParamLimits

0x006e,	// (0x00047297) eswt_control_pane_g

0xba2e,	// (0x00052c57) bg_button_pane_ParamLimits

0xba2e,	// (0x00052c57) bg_button_pane

0xb6af,	// (0x000528d8) common_borders_pane_copy2_ParamLimits

0xb6af,	// (0x000528d8) common_borders_pane_copy2

0xf368,	// (0x00056591) control_button_pane_g1_ParamLimits

0xf368,	// (0x00056591) control_button_pane_g1

0xf374,	// (0x0005659d) control_button_pane_g2_ParamLimits

0xf374,	// (0x0005659d) control_button_pane_g2

0xf380,	// (0x000565a9) control_button_pane_g3_ParamLimits

0xf380,	// (0x000565a9) control_button_pane_g3

0x0002,

0x0077,	// (0x000472a0) control_button_pane_g_ParamLimits

0x0077,	// (0x000472a0) control_button_pane_g

0xf394,	// (0x000565bd) control_button_pane_t1

0xf3a2,	// (0x000565cb) control_button_pane_t2

0x0001,

0x007e,	// (0x000472a7) control_button_pane_t

0xce07,	// (0x00054030) bg_button_pane_g1

0xce17,	// (0x00054040) bg_button_pane_g2

0xce0f,	// (0x00054038) bg_button_pane_g3

0xce27,	// (0x00054050) bg_button_pane_g4

0xce1f,	// (0x00054048) bg_button_pane_g5

0xce2f,	// (0x00054058) bg_button_pane_g6

0xce37,	// (0x00054060) bg_button_pane_g7

0xce47,	// (0x00054070) bg_button_pane_g8

0xce3f,	// (0x00054068) bg_button_pane_g9

0x0008,

0xf867,	// (0x00056a90) bg_button_pane_g

0xeb6f,	// (0x00055d98) common_borders_pane_ParamLimits

0xeb6f,	// (0x00055d98) common_borders_pane

0xf334,	// (0x0005655d) eswt_control_pane_g1_copy1_ParamLimits

0xf334,	// (0x0005655d) eswt_control_pane_g1_copy1

0xf341,	// (0x0005656a) eswt_control_pane_g2_copy1_ParamLimits

0xf341,	// (0x0005656a) eswt_control_pane_g2_copy1

0xf34e,	// (0x00056577) eswt_control_pane_g3_copy1_ParamLimits

0xf34e,	// (0x00056577) eswt_control_pane_g3_copy1

0xf35b,	// (0x00056584) eswt_control_pane_g4_copy1_ParamLimits

0xf35b,	// (0x00056584) eswt_control_pane_g4_copy1

0xebaa,	// (0x00055dd3) bg_eswt_ctrl_canvas_pane_g1

0xeb6f,	// (0x00055d98) common_borders_pane_cp2_ParamLimits

0xeb6f,	// (0x00055d98) common_borders_pane_cp2

0xeb6f,	// (0x00055d98) common_borders_pane_cp3_ParamLimits

0xeb6f,	// (0x00055d98) common_borders_pane_cp3

0xf3b0,	// (0x000565d9) separator_horizontal_pane

0xf3b8,	// (0x000565e1) separator_vertical_pane

0xf334,	// (0x0005655d) eswt_control_pane_g1_copy2_ParamLimits

0xf334,	// (0x0005655d) eswt_control_pane_g1_copy2

0xf341,	// (0x0005656a) eswt_control_pane_g2_copy2_ParamLimits

0xf341,	// (0x0005656a) eswt_control_pane_g2_copy2

0xf34e,	// (0x00056577) eswt_control_pane_g3_copy2_ParamLimits

0xf34e,	// (0x00056577) eswt_control_pane_g3_copy2

0xf35b,	// (0x00056584) eswt_control_pane_g4_copy2_ParamLimits

0xf35b,	// (0x00056584) eswt_control_pane_g4_copy2

0xadbe,	// (0x00051fe7) common_borders_pane_cp4

0xf3c1,	// (0x000565ea) separator_horizontal_pane_g1

0xf3ca,	// (0x000565f3) separator_horizontal_pane_g2

0xf3d3,	// (0x000565fc) separator_horizontal_pane_g3

0x0002,

0x0083,	// (0x000472ac) separator_horizontal_pane_g

0xf334,	// (0x0005655d) eswt_control_pane_g1_copy3_ParamLimits

0xf334,	// (0x0005655d) eswt_control_pane_g1_copy3

0xf341,	// (0x0005656a) eswt_control_pane_g2_copy3_ParamLimits

0xf341,	// (0x0005656a) eswt_control_pane_g2_copy3

0xf34e,	// (0x00056577) eswt_control_pane_g3_copy3_ParamLimits

0xf34e,	// (0x00056577) eswt_control_pane_g3_copy3

0xf35b,	// (0x00056584) eswt_control_pane_g4_copy3_ParamLimits

0xf35b,	// (0x00056584) eswt_control_pane_g4_copy3

0xadbe,	// (0x00051fe7) common_borders_pane_cp5

0xf3dc,	// (0x00056605) separator_vertical_pane_g1

0xf3e5,	// (0x0005660e) separator_vertical_pane_g2

0xf3ee,	// (0x00056617) separator_vertical_pane_g3

0x0002,

0x008a,	// (0x000472b3) separator_vertical_pane_g

0xf334,	// (0x0005655d) eswt_control_pane_g1_copy4_ParamLimits

0xf334,	// (0x0005655d) eswt_control_pane_g1_copy4

0xf341,	// (0x0005656a) eswt_control_pane_g2_copy4_ParamLimits

0xf341,	// (0x0005656a) eswt_control_pane_g2_copy4

0xf34e,	// (0x00056577) eswt_control_pane_g3_copy4_ParamLimits

0xf34e,	// (0x00056577) eswt_control_pane_g3_copy4

0xf35b,	// (0x00056584) eswt_control_pane_g4_copy4_ParamLimits

0xf35b,	// (0x00056584) eswt_control_pane_g4_copy4

0xf3f7,	// (0x00056620) eswt_ctrl_combo_button_pane

0xf3ff,	// (0x00056628) eswt_ctrl_input_pane

0xf407,	// (0x00056630) popup_choice_list_window_cp70

0xf40f,	// (0x00056638) eswt_ctrl_input_pane_t1

0xadbe,	// (0x00051fe7) input_focus_pane_cp70

0xeb6f,	// (0x00055d98) bg_button_pane_cp70_ParamLimits

0xeb6f,	// (0x00055d98) bg_button_pane_cp70

0xf41d,	// (0x00056646) eswt_ctrl_combo_button_pane_g1

0xf425,	// (0x0005664e) wait_bar_pane_cp70

0xce7b,	// (0x000540a4) bg_popup_window_pane_cp70_ParamLimits

0xce7b,	// (0x000540a4) bg_popup_window_pane_cp70

0xf42d,	// (0x00056656) popup_eswt_tasktip_window_t1

0xf443,	// (0x0005666c) wait_bar_pane_cp71_ParamLimits

0xf443,	// (0x0005666c) wait_bar_pane_cp71

0xf44f,	// (0x00056678) grid_eswt_app_pane

0xc352,	// (0x0005357b) scroll_pane_cp70

0xb0c7,	// (0x000522f0) cell_eswt_app_pane_ParamLimits

0xb0c7,	// (0x000522f0) cell_eswt_app_pane

0xb0f1,	// (0x0005231a) cell_eswt_app_pane_g1_ParamLimits

0xb0f1,	// (0x0005231a) cell_eswt_app_pane_g1

0xb120,	// (0x00052349) cell_eswt_app_pane_g2_ParamLimits

0xb120,	// (0x00052349) cell_eswt_app_pane_g2

0x0001,

0xfbfa,	// (0x00056e23) cell_eswt_app_pane_g_ParamLimits

0xfbfa,	// (0x00056e23) cell_eswt_app_pane_g

0xb144,	// (0x0005236d) cell_eswt_app_pane_t1_ParamLimits

0xb144,	// (0x0005236d) cell_eswt_app_pane_t1

0xf458,	// (0x00056681) grid_highlight_pane_cp70_ParamLimits

0xf458,	// (0x00056681) grid_highlight_pane_cp70

0xc8ba,	// (0x00053ae3) set_content_pane_g1

0xcbaa,	// (0x00053dd3) status_small_volume_pane

0x2243,	// (0x0004946c) status_small_volume_pane_g1

0x224b,	// (0x00049474) volume_small2_pane

0x2254,	// (0x0004947d) volume_small2_pane_g1

0x225d,	// (0x00049486) volume_small2_pane_g2

0x2266,	// (0x0004948f) volume_small2_pane_g3

0x226f,	// (0x00049498) volume_small2_pane_g4

0x2278,	// (0x000494a1) volume_small2_pane_g5

0x2281,	// (0x000494aa) volume_small2_pane_g6

0x228a,	// (0x000494b3) volume_small2_pane_g7

0x2293,	// (0x000494bc) volume_small2_pane_g8

0x229c,	// (0x000494c5) volume_small2_pane_g9

0x22a5,	// (0x000494ce) volume_small2_pane_g10

0x0009,

0xfbff,	// (0x00056e28) volume_small2_pane_g

0xee8a,	// (0x000560b3) fep_vkb_top_text_pane_g1_ParamLimits

0xb044,	// (0x0005226d) fep_vkb_top_text_pane_t1_ParamLimits

0xf062,	// (0x0005628b) popup_preview_fixed_window_g3_ParamLimits

0xf062,	// (0x0005628b) popup_preview_fixed_window_g3

0x8b65,	// (0x0004fd8e) popup_toolbar_trans_pane

0xa92f,	// (0x00051b58) aid_height_set_list_ParamLimits

0xccde,	// (0x00053f07) aid_size_parent_ParamLimits

0xc155,	// (0x0005337e) list_highlight_pane_cp2_ParamLimits

0xc8ba,	// (0x00053ae3) set_content_pane_g1_ParamLimits

0x98e3,	// (0x00050b0c) list_single_image_pane_ParamLimits

0x98e3,	// (0x00050b0c) list_single_image_pane

0xb176,	// (0x0005239f) aid_size_cell_image_ParamLimits

0xb176,	// (0x0005239f) aid_size_cell_image

0xb183,	// (0x000523ac) grid_single_image_pane_ParamLimits

0xb183,	// (0x000523ac) grid_single_image_pane

0xf464,	// (0x0005668d) list_single_image_pane_g1_ParamLimits

0xf464,	// (0x0005668d) list_single_image_pane_g1

0xf470,	// (0x00056699) list_single_image_pane_g2_ParamLimits

0xf470,	// (0x00056699) list_single_image_pane_g2

0x0001,

0x00ab,	// (0x000472d4) list_single_image_pane_g_ParamLimits

0x00ab,	// (0x000472d4) list_single_image_pane_g

0xf484,	// (0x000566ad) list_single_image_pane_t1_ParamLimits

0xf484,	// (0x000566ad) list_single_image_pane_t1

0xb18f,	// (0x000523b8) cell_image_list_pane_ParamLimits

0xb18f,	// (0x000523b8) cell_image_list_pane

0xb1a3,	// (0x000523cc) cell_image_list_pane_g1

0xb1ac,	// (0x000523d5) cell_image_list_pane_g2

0x0001,

0xfc14,	// (0x00056e3d) cell_image_list_pane_g

0xf49a,	// (0x000566c3) aid_size_cell_tb_trans_pane

0xba2e,	// (0x00052c57) bg_tb_trans_pane

0xf4ac,	// (0x000566d5) grid_tb_trans_pane

0xce07,	// (0x00054030) bg_tb_trans_pane_g1

0xce17,	// (0x00054040) bg_tb_trans_pane_g2

0xce0f,	// (0x00054038) bg_tb_trans_pane_g3

0xce27,	// (0x00054050) bg_tb_trans_pane_g4

0xce1f,	// (0x00054048) bg_tb_trans_pane_g5

0xce47,	// (0x00054070) bg_tb_trans_pane_g6

0xce3f,	// (0x00054068) bg_tb_trans_pane_g7

0xce2f,	// (0x00054058) bg_tb_trans_pane_g8

0xce37,	// (0x00054060) bg_tb_trans_pane_g9

0x0008,

0xfc19,	// (0x00056e42) bg_tb_trans_pane_g

0xf4c0,	// (0x000566e9) cell_toolbar_trans_pane_ParamLimits

0xf4c0,	// (0x000566e9) cell_toolbar_trans_pane

0xebaa,	// (0x00055dd3) cell_toolbar_trans_pane_g1

0xacab,	// (0x00051ed4) list_form2_midp_pane_t1

0xacb9,	// (0x00051ee2) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x00056d13) list_form2_midp_pane_t

0xe907,	// (0x00055b30) scroll_pane_cp51_ParamLimits

0xea7e,	// (0x00055ca7) form2_midp_wait_pane_g1

0xea87,	// (0x00055cb0) form2_midp_wait_pane_g2

0xea90,	// (0x00055cb9) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x00056d28) form2_midp_wait_pane_g

0xae2e,	// (0x00052057) list_highlight_pane_cp21_ParamLimits

0xeab0,	// (0x00055cd9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeabf,	// (0x00055ce8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xdf3d,	// (0x00055166) list_single_2graphic_im_pane_ParamLimits

0xdf3d,	// (0x00055166) list_single_2graphic_im_pane

0xf4e6,	// (0x0005670f) list_single_2graphic_im_pane_g1_ParamLimits

0xf4e6,	// (0x0005670f) list_single_2graphic_im_pane_g1

0xf4f7,	// (0x00056720) list_single_2graphic_im_pane_g2_ParamLimits

0xf4f7,	// (0x00056720) list_single_2graphic_im_pane_g2

0xf503,	// (0x0005672c) list_single_2graphic_im_pane_g3_ParamLimits

0xf503,	// (0x0005672c) list_single_2graphic_im_pane_g3

0x0003,

0x00c8,	// (0x000472f1) list_single_2graphic_im_pane_g_ParamLimits

0x00c8,	// (0x000472f1) list_single_2graphic_im_pane_g

0xf523,	// (0x0005674c) list_single_2graphic_im_pane_t1_ParamLimits

0xf523,	// (0x0005674c) list_single_2graphic_im_pane_t1

0xf06e,	// (0x00056297) list_single_graphic_2heading_pane_fp_ParamLimits

0xf06e,	// (0x00056297) list_single_graphic_2heading_pane_fp

0x3fec,	// (0x0004b215) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3fec,	// (0x0004b215) list_single_graphic_2heading_pane_fp_g1

0xf084,	// (0x000562ad) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf084,	// (0x000562ad) list_single_graphic_2heading_pane_fp_g2

0xba3c,	// (0x00052c65) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xba3c,	// (0x00052c65) list_single_graphic_2heading_pane_fp_g3

0xba48,	// (0x00052c71) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xba48,	// (0x00052c71) list_single_graphic_2heading_pane_fp_g4

0xf090,	// (0x000562b9) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf090,	// (0x000562b9) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x00056db0) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x00056db0) list_single_graphic_2heading_pane_fp_g

0x4135,	// (0x0004b35e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4135,	// (0x0004b35e) list_single_graphic_2heading_pane_fp_t1

0x4024,	// (0x0004b24d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4024,	// (0x0004b24d) list_single_graphic_2heading_pane_fp_t2

0x414b,	// (0x0004b374) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x414b,	// (0x0004b374) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc2c,	// (0x00056e55) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc2c,	// (0x00056e55) list_single_graphic_2heading_pane_fp_t

0xec78,	// (0x00055ea1) fep_hwr_write_pane_g5_ParamLimits

0xec78,	// (0x00055ea1) fep_hwr_write_pane_g5

0xec84,	// (0x00055ead) fep_hwr_write_pane_g6_ParamLimits

0xec84,	// (0x00055ead) fep_hwr_write_pane_g6

0xf303,	// (0x0005652c) eswt_shell_pane_ParamLimits

0xce7b,	// (0x000540a4) bg_popup_window_pane_cp18_ParamLimits

0xde6e,	// (0x00055097) heading_pane_cp70

0xf42d,	// (0x00056656) popup_eswt_tasktip_window_t1_ParamLimits

0xa29a,	// (0x000514c3) aid_touch_tab_arrow_left

0xa2b0,	// (0x000514d9) aid_touch_tab_arrow_right

0x93fd,	// (0x00050626) title_pane_g3_ParamLimits

0x93fd,	// (0x00050626) title_pane_g3

0xb8f3,	// (0x00052b1c) set_value_pane_g1

0x8b65,	// (0x0004fd8e) popup_toolbar_trans_pane_ParamLimits

0xf49a,	// (0x000566c3) aid_size_cell_tb_trans_pane_ParamLimits

0xba2e,	// (0x00052c57) bg_tb_trans_pane_ParamLimits

0xf4ac,	// (0x000566d5) grid_tb_trans_pane_ParamLimits

0xb420,	// (0x00052649) cont_note_pane_ParamLimits

0xb420,	// (0x00052649) cont_note_pane

0xb6af,	// (0x000528d8) cont_snote2_single_text_pane_ParamLimits

0xb6af,	// (0x000528d8) cont_snote2_single_text_pane

0xb6af,	// (0x000528d8) cont_snote2_single_graphic_pane_ParamLimits

0xb6af,	// (0x000528d8) cont_snote2_single_graphic_pane

0xd35f,	// (0x00054588) cont_note_wait_pane_ParamLimits

0xd35f,	// (0x00054588) cont_note_wait_pane

0xd35f,	// (0x00054588) cont_note_image_pane_ParamLimits

0xd35f,	// (0x00054588) cont_note_image_pane

0x4b73,	// (0x0004bd9c) popup_note2_window_g1_ParamLimits

0x4b73,	// (0x0004bd9c) popup_note2_window_g1

0x4ba4,	// (0x0004bdcd) popup_note2_window_t1_ParamLimits

0x4ba4,	// (0x0004bdcd) popup_note2_window_t1

0x4be9,	// (0x0004be12) popup_note2_window_t2_ParamLimits

0x4be9,	// (0x0004be12) popup_note2_window_t2

0x4c2e,	// (0x0004be57) popup_note2_window_t3_ParamLimits

0x4c2e,	// (0x0004be57) popup_note2_window_t3

0x4c73,	// (0x0004be9c) popup_note2_window_t4_ParamLimits

0x4c73,	// (0x0004be9c) popup_note2_window_t4

0xb498,	// (0x000526c1) popup_note2_window_t5_ParamLimits

0xb498,	// (0x000526c1) popup_note2_window_t5

0x0004,

0xfc38,	// (0x00056e61) popup_note2_window_t_ParamLimits

0xfc38,	// (0x00056e61) popup_note2_window_t

0x4ca2,	// (0x0004becb) popup_note2_image_window_g1_ParamLimits

0x4ca2,	// (0x0004becb) popup_note2_image_window_g1

0x4cae,	// (0x0004bed7) popup_note2_image_window_g2_ParamLimits

0x4cae,	// (0x0004bed7) popup_note2_image_window_g2

0x0001,

0xfc43,	// (0x00056e6c) popup_note2_image_window_g_ParamLimits

0xfc43,	// (0x00056e6c) popup_note2_image_window_g

0x4cc0,	// (0x0004bee9) popup_note2_image_window_t1_ParamLimits

0x4cc0,	// (0x0004bee9) popup_note2_image_window_t1

0x4cd8,	// (0x0004bf01) popup_note2_image_window_t2_ParamLimits

0x4cd8,	// (0x0004bf01) popup_note2_image_window_t2

0x4cf0,	// (0x0004bf19) popup_note2_image_window_t3_ParamLimits

0x4cf0,	// (0x0004bf19) popup_note2_image_window_t3

0x0002,

0xfc48,	// (0x00056e71) popup_note2_image_window_t_ParamLimits

0xfc48,	// (0x00056e71) popup_note2_image_window_t

0xd36d,	// (0x00054596) popup_note2_wait_window_g1_ParamLimits

0xd36d,	// (0x00054596) popup_note2_wait_window_g1

0x4d0c,	// (0x0004bf35) popup_note2_wait_window_g2_ParamLimits

0x4d0c,	// (0x0004bf35) popup_note2_wait_window_g2

0xd385,	// (0x000545ae) popup_note2_wait_window_g3_ParamLimits

0xd385,	// (0x000545ae) popup_note2_wait_window_g3

0x0002,

0xfc4f,	// (0x00056e78) popup_note2_wait_window_g_ParamLimits

0xfc4f,	// (0x00056e78) popup_note2_wait_window_g

0x4d18,	// (0x0004bf41) popup_note2_wait_window_t1_ParamLimits

0x4d18,	// (0x0004bf41) popup_note2_wait_window_t1

0x4d36,	// (0x0004bf5f) popup_note2_wait_window_t2_ParamLimits

0x4d36,	// (0x0004bf5f) popup_note2_wait_window_t2

0x4d54,	// (0x0004bf7d) popup_note2_wait_window_t3_ParamLimits

0x4d54,	// (0x0004bf7d) popup_note2_wait_window_t3

0x4d66,	// (0x0004bf8f) popup_note2_wait_window_t4_ParamLimits

0x4d66,	// (0x0004bf8f) popup_note2_wait_window_t4

0x0003,

0xfc56,	// (0x00056e7f) popup_note2_wait_window_t_ParamLimits

0xfc56,	// (0x00056e7f) popup_note2_wait_window_t

0x4d78,	// (0x0004bfa1) wait_bar2_pane_ParamLimits

0x4d78,	// (0x0004bfa1) wait_bar2_pane

0x4d90,	// (0x0004bfb9) popup_snote2_single_text_window_g1_ParamLimits

0x4d90,	// (0x0004bfb9) popup_snote2_single_text_window_g1

0x4db8,	// (0x0004bfe1) popup_snote2_single_text_window_t1_ParamLimits

0x4db8,	// (0x0004bfe1) popup_snote2_single_text_window_t1

0x4e04,	// (0x0004c02d) popup_snote2_single_text_window_t2_ParamLimits

0x4e04,	// (0x0004c02d) popup_snote2_single_text_window_t2

0x4e50,	// (0x0004c079) popup_snote2_single_text_window_t3_ParamLimits

0x4e50,	// (0x0004c079) popup_snote2_single_text_window_t3

0x4e91,	// (0x0004c0ba) popup_snote2_single_text_window_t4_ParamLimits

0x4e91,	// (0x0004c0ba) popup_snote2_single_text_window_t4

0x4ec7,	// (0x0004c0f0) popup_snote2_single_text_window_t5_ParamLimits

0x4ec7,	// (0x0004c0f0) popup_snote2_single_text_window_t5

0x0004,

0xfc5f,	// (0x00056e88) popup_snote2_single_text_window_t_ParamLimits

0xfc5f,	// (0x00056e88) popup_snote2_single_text_window_t

0x4ef2,	// (0x0004c11b) popup_snote2_single_graphic_window_g1_ParamLimits

0x4ef2,	// (0x0004c11b) popup_snote2_single_graphic_window_g1

0x4f1a,	// (0x0004c143) popup_snote2_single_graphic_window_g2_ParamLimits

0x4f1a,	// (0x0004c143) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6a,	// (0x00056e93) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6a,	// (0x00056e93) popup_snote2_single_graphic_window_g

0x4f42,	// (0x0004c16b) popup_snote2_single_graphic_window_t1_ParamLimits

0x4f42,	// (0x0004c16b) popup_snote2_single_graphic_window_t1

0x4f8e,	// (0x0004c1b7) popup_snote2_single_graphic_window_t2_ParamLimits

0x4f8e,	// (0x0004c1b7) popup_snote2_single_graphic_window_t2

0x4e50,	// (0x0004c079) popup_snote2_single_graphic_window_t3_ParamLimits

0x4e50,	// (0x0004c079) popup_snote2_single_graphic_window_t3

0x4e91,	// (0x0004c0ba) popup_snote2_single_graphic_window_t4_ParamLimits

0x4e91,	// (0x0004c0ba) popup_snote2_single_graphic_window_t4

0x4ec7,	// (0x0004c0f0) popup_snote2_single_graphic_window_t5_ParamLimits

0x4ec7,	// (0x0004c0f0) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6f,	// (0x00056e98) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6f,	// (0x00056e98) popup_snote2_single_graphic_window_t

0xe89b,	// (0x00055ac4) clock_nsta_pane_cp2_t1

0xe89b,	// (0x00055ac4) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x00056ce9) clock_nsta_pane_cp2_t

0x0de9,	// (0x00048012) form_field_data_wide_pane_g1_ParamLimits

0xba3c,	// (0x00052c65) form_field_data_wide_pane_g2_ParamLimits

0xba3c,	// (0x00052c65) form_field_data_wide_pane_g2

0xba48,	// (0x00052c71) form_field_data_wide_pane_g3_ParamLimits

0xba48,	// (0x00052c71) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x000568aa) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x000568aa) form_field_data_wide_pane_g

0xabdf,	// (0x00051e08) grid_touch_3_pane_ParamLimits

0xabdf,	// (0x00051e08) grid_touch_3_pane

0xb1b5,	// (0x000523de) cell_touch_3_pane_ParamLimits

0xb1b5,	// (0x000523de) cell_touch_3_pane

0xebaa,	// (0x00055dd3) cell_touch_3_pane_g1

0xebaa,	// (0x00055dd3) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x00056d6e) cell_touch_3_pane_g

0xb4ca,	// (0x000526f3) cont_query_data_pane

0xb4d2,	// (0x000526fb) cont_query_data_pane_cp1

0x4fda,	// (0x0004c203) button_value_adjust_pane_cp7

0x4fe2,	// (0x0004c20b) query_popup_pane_cp3

0xc580,	// (0x000537a9) bg_popup_sub_pane_cp22_ParamLimits

0x10b0,	// (0x000482d9) navi_navi_volume_pane_cp2

0x10c8,	// (0x000482f1) popup_side_volume_key_window_g2

0x10d4,	// (0x000482fd) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x00056940) popup_side_volume_key_window_g

0x10ee,	// (0x00048317) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00056947) popup_side_volume_key_window_t

0xc7c1,	// (0x000539ea) popup_side_volume_key_window_ParamLimits

0x7f8a,	// (0x0004f1b3) list_double_graphic_pane_g4_ParamLimits

0x7f8a,	// (0x0004f1b3) list_double_graphic_pane_g4

0xaa95,	// (0x00051cbe) list_single_2heading_msg_pane_ParamLimits

0xaa95,	// (0x00051cbe) list_single_2heading_msg_pane

0x9909,	// (0x00050b32) list_single_2heading_msg_pane_g1_ParamLimits

0x9909,	// (0x00050b32) list_single_2heading_msg_pane_g1

0x9915,	// (0x00050b3e) list_single_2heading_msg_pane_g2_ParamLimits

0x9915,	// (0x00050b3e) list_single_2heading_msg_pane_g2

0x9928,	// (0x00050b51) list_single_2heading_msg_pane_g3_ParamLimits

0x9928,	// (0x00050b51) list_single_2heading_msg_pane_g3

0x500b,	// (0x0004c234) list_single_2heading_msg_pane_g4_ParamLimits

0x500b,	// (0x0004c234) list_single_2heading_msg_pane_g4

0x0003,

0xfc7a,	// (0x00056ea3) list_single_2heading_msg_pane_g_ParamLimits

0xfc7a,	// (0x00056ea3) list_single_2heading_msg_pane_g

0x416b,	// (0x0004b394) list_single_2heading_msg_pane_t1_ParamLimits

0x416b,	// (0x0004b394) list_single_2heading_msg_pane_t1

0x8e7b,	// (0x000500a4) list_single_2heading_msg_pane_t2_ParamLimits

0x8e7b,	// (0x000500a4) list_single_2heading_msg_pane_t2

0x9934,	// (0x00050b5d) list_single_2heading_msg_pane_t3_ParamLimits

0x9934,	// (0x00050b5d) list_single_2heading_msg_pane_t3

0x4200,	// (0x0004b429) list_single_2heading_msg_pane_t4_ParamLimits

0x4200,	// (0x0004b429) list_single_2heading_msg_pane_t4

0x0003,

0xfc83,	// (0x00056eac) list_single_2heading_msg_pane_t_ParamLimits

0xfc83,	// (0x00056eac) list_single_2heading_msg_pane_t

0xaddc,	// (0x00052005) title_pane_g4_ParamLimits

0xaddc,	// (0x00052005) title_pane_g4

0x0ebe,	// (0x000480e7) title_pane_stacon_g3_ParamLimits

0x0ebe,	// (0x000480e7) title_pane_stacon_g3

0xf517,	// (0x00056740) list_single_2graphic_im_pane_g4_ParamLimits

0xf517,	// (0x00056740) list_single_2graphic_im_pane_g4

0xdca0,	// (0x00054ec9) popup_side_volume_key_window_cp

0xe183,	// (0x000553ac) main_idle_act2_pane_t1

0x1a2b,	// (0x00048c54) toolbar_button_pane_g10

0x9717,	// (0x00050940) popup_toolbar_window_cp1

0xe88c,	// (0x00055ab5) clock_nsta_pane_cp_t1

0xe88c,	// (0x00055ab5) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x00056ce4) clock_nsta_pane_cp_t

0x10b0,	// (0x000482d9) navi_navi_volume_pane_cp2_ParamLimits

0x10bc,	// (0x000482e5) popup_side_volume_key_window_g1_ParamLimits

0x10c8,	// (0x000482f1) popup_side_volume_key_window_g2_ParamLimits

0x10d4,	// (0x000482fd) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x00056940) popup_side_volume_key_window_g_ParamLimits

0x1eaf,	// (0x000490d8) fep_hwr_aid_pane

0x1f56,	// (0x0004917f) bg_fep_hwr_top_pane_g4_ParamLimits

0xec48,	// (0x00055e71) fep_hwr_top_pane_g1_ParamLimits

0xec5a,	// (0x00055e83) fep_hwr_top_pane_g2_ParamLimits

0x1f76,	// (0x0004919f) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x00056d39) fep_hwr_top_pane_g_ParamLimits

0x1f8b,	// (0x000491b4) fep_hwr_top_text_pane_ParamLimits

0xda75,	// (0x00054c9e) aid_touch_tab_arrow_arrow_2

0xda7e,	// (0x00054ca7) aid_touch_tab_arrow_left_2

0x1ec3,	// (0x000490ec) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1efa,	// (0x00049123) fep_hwr_prediction_pane

0xed45,	// (0x00055f6e) fep_vkb_prediction_pane

0xb024,	// (0x0005224d) fep_vkb_side_pane_g3_ParamLimits

0xb024,	// (0x0005224d) fep_vkb_side_pane_g3

0x2106,	// (0x0004932f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x2172,	// (0x0004939b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x217f,	// (0x000493a8) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x00056de8) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x22ae,	// (0x000494d7) fep_hwr_prediction_pane_g1

0x22b8,	// (0x000494e1) fep_hwr_prediction_pane_g2

0x22c0,	// (0x000494e9) fep_hwr_prediction_pane_g3

0x22c8,	// (0x000494f1) fep_hwr_prediction_pane_g4

0x0003,

0xfc8c,	// (0x00056eb5) fep_hwr_prediction_pane_g

0x5023,	// (0x0004c24c) fep_vkb_prediction_pane_g1

0x502d,	// (0x0004c256) fep_vkb_prediction_pane_g2

0x5035,	// (0x0004c25e) fep_vkb_prediction_pane_g3

0x503d,	// (0x0004c266) fep_vkb_prediction_pane_g4

0x0003,

0xfc95,	// (0x00056ebe) fep_vkb_prediction_pane_g

0x1d0b,	// (0x00048f34) slider_set_pane_g3

0x1d1f,	// (0x00048f48) slider_set_pane_g4

0x1d37,	// (0x00048f60) slider_set_pane_g5

0x1d0b,	// (0x00048f34) slider_set_pane_g6

0x1d4d,	// (0x00048f76) slider_set_pane_g7

0xdef3,	// (0x0005511c) slider_form_pane_g3

0xdefc,	// (0x00055125) slider_form_pane_g4

0xdf04,	// (0x0005512d) slider_form_pane_g5

0xdef3,	// (0x0005511c) slider_form_pane_g6

0xaa76,	// (0x00051c9f) slider_form_pane_g7

0xe3f9,	// (0x00055622) slider_set_pane_vc_g3

0xe402,	// (0x0005562b) slider_set_pane_vc_g4

0xe40b,	// (0x00055634) slider_set_pane_vc_g5

0xe3f9,	// (0x00055622) slider_set_pane_vc_g6

0xe414,	// (0x0005563d) slider_set_pane_vc_g7

0xe5c4,	// (0x000557ed) slider_form_pane_vc_g1

0xe5cd,	// (0x000557f6) slider_form_pane_vc_g2

0xe5d6,	// (0x000557ff) slider_form_pane_vc_g3

0xe5c4,	// (0x000557ed) slider_form_pane_vc_g4

0xe5df,	// (0x00055808) slider_form_pane_vc_g5

0x0004,

0xfa8d,	// (0x00056cb6) slider_form_pane_vc_g

0x059b,	// (0x000477c4) main_idle_act3_pane

0x5045,	// (0x0004c26e) ai3_links_pane

0xb1fe,	// (0x00052427) popup_ai3_data_window_ParamLimits

0xb1fe,	// (0x00052427) popup_ai3_data_window

0xadbe,	// (0x00051fe7) grid_ai3_links_pane

0xb216,	// (0x0005243f) cell_ai3_links_pane_ParamLimits

0xb216,	// (0x0005243f) cell_ai3_links_pane

0x504e,	// (0x0004c277) bg_popup_sub_pane_cp11

0x505b,	// (0x0004c284) cell_ai3_links_pane_g1

0xadbe,	// (0x00051fe7) bg_popup_sub_pane_cp12

0x5080,	// (0x0004c2a9) heading_ai3_data_pane

0x5088,	// (0x0004c2b1) list_ai3_gene_pane

0x5094,	// (0x0004c2bd) popup_ai3_data_window_g1

0x509c,	// (0x0004c2c5) heading_ai3_data_pane_g1

0x50a4,	// (0x0004c2cd) heading_ai3_data_pane_t1

0x50b2,	// (0x0004c2db) list_double_ai3_gene_pane_ParamLimits

0x50b2,	// (0x0004c2db) list_double_ai3_gene_pane

0x50bf,	// (0x0004c2e8) list_single_ai3_gene_pane_ParamLimits

0x50bf,	// (0x0004c2e8) list_single_ai3_gene_pane

0xeb6f,	// (0x00055d98) list_highlight_pane_cp7_ParamLimits

0xeb6f,	// (0x00055d98) list_highlight_pane_cp7

0x50cc,	// (0x0004c2f5) list_single_a13_gene_pane_t1_ParamLimits

0x50cc,	// (0x0004c2f5) list_single_a13_gene_pane_t1

0x50e3,	// (0x0004c30c) list_single_ai3_gene_pane_g1

0x50ec,	// (0x0004c315) list_single_ai3_gene_pane_g2

0x0001,

0xfc9e,	// (0x00056ec7) list_single_ai3_gene_pane_g

0x50f4,	// (0x0004c31d) list_double_ai3_gene_pane_g1_ParamLimits

0x50f4,	// (0x0004c31d) list_double_ai3_gene_pane_g1

0x5100,	// (0x0004c329) list_double_ai3_gene_pane_t1_ParamLimits

0x5100,	// (0x0004c329) list_double_ai3_gene_pane_t1

0x511c,	// (0x0004c345) list_double_ai3_gene_pane_t2_ParamLimits

0x511c,	// (0x0004c345) list_double_ai3_gene_pane_t2

0x5131,	// (0x0004c35a) list_double_ai3_gene_pane_t3_ParamLimits

0x5131,	// (0x0004c35a) list_double_ai3_gene_pane_t3

0x0002,

0xfca3,	// (0x00056ecc) list_double_ai3_gene_pane_t_ParamLimits

0xfca3,	// (0x00056ecc) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4161,	// (0x0004b38a) aid_size_min_col_2

0xb1e8,	// (0x00052411) aid_size_min_msg_ParamLimits

0xb1e8,	// (0x00052411) aid_size_min_msg

0xb038,	// (0x00052261) fep_vkb_top_text_pane_g2_ParamLimits

0xb038,	// (0x00052261) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x00056d69) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x00056d69) fep_vkb_top_text_pane_g

0x059b,	// (0x000477c4) main_hc_apps_shell_pane

0x514e,	// (0x0004c377) grid_hc_apps_pane_ParamLimits

0x514e,	// (0x0004c377) grid_hc_apps_pane

0x515d,	// (0x0004c386) list_hc_apps_pane

0x5165,	// (0x0004c38e) scroll_pane_cp37_ParamLimits

0x5165,	// (0x0004c38e) scroll_pane_cp37

0xb230,	// (0x00052459) cell_hc_apps_pane_ParamLimits

0xb230,	// (0x00052459) cell_hc_apps_pane

0xb2ee,	// (0x00052517) cell_hc_apps_pane_g1_ParamLimits

0xb2ee,	// (0x00052517) cell_hc_apps_pane_g1

0x5171,	// (0x0004c39a) cell_hc_apps_pane_g2_ParamLimits

0x5171,	// (0x0004c39a) cell_hc_apps_pane_g2

0x518d,	// (0x0004c3b6) cell_hc_apps_pane_g3_ParamLimits

0x518d,	// (0x0004c3b6) cell_hc_apps_pane_g3

0x0002,

0xfcaa,	// (0x00056ed3) cell_hc_apps_pane_g_ParamLimits

0xfcaa,	// (0x00056ed3) cell_hc_apps_pane_g

0xb31b,	// (0x00052544) cell_hc_apps_pane_t1_ParamLimits

0xb31b,	// (0x00052544) cell_hc_apps_pane_t1

0xb420,	// (0x00052649) grid_highlight_pane_cp10_ParamLimits

0xb420,	// (0x00052649) grid_highlight_pane_cp10

0xb359,	// (0x00052582) list_single_hc_apps_pane_ParamLimits

0xb359,	// (0x00052582) list_single_hc_apps_pane

0xb38a,	// (0x000525b3) list_single_hc_apps_pane_g1

0x99a2,	// (0x00050bcb) list_single_hc_apps_pane_g2

0x0001,

0xfcb1,	// (0x00056eda) list_single_hc_apps_pane_g

0x99bb,	// (0x00050be4) list_single_hc_apps_pane_g2_copy1

0x99d7,	// (0x00050c00) list_single_hc_apps_pane_t1

0xae2e,	// (0x00052057) bg_set_opt_pane_cp_ParamLimits

0x07e4,	// (0x00047a0d) setting_slider_pane_t1_ParamLimits

0x07fd,	// (0x00047a26) setting_slider_pane_t2_ParamLimits

0x0817,	// (0x00047a40) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0005678d) setting_slider_pane_t_ParamLimits

0x082f,	// (0x00047a58) slider_set_pane_ParamLimits

0x1350,	// (0x00048579) control_pane_g5_ParamLimits

0x1350,	// (0x00048579) control_pane_g5

0xdeb5,	// (0x000550de) slider_set_pane_g1_ParamLimits

0x1cff,	// (0x00048f28) slider_set_pane_g2_ParamLimits

0x1d0b,	// (0x00048f34) slider_set_pane_g3_ParamLimits

0x1d1f,	// (0x00048f48) slider_set_pane_g4_ParamLimits

0x1d37,	// (0x00048f60) slider_set_pane_g5_ParamLimits

0x1d0b,	// (0x00048f34) slider_set_pane_g6_ParamLimits

0x1d4d,	// (0x00048f76) slider_set_pane_g7_ParamLimits

0xf965,	// (0x00056b8e) slider_set_pane_g_ParamLimits

0xc865,	// (0x00053a8e) navi_icon_text_pane_ParamLimits

0xa263,	// (0x0005148c) aid_fill_nsta_2_ParamLimits

0xa29a,	// (0x000514c3) aid_touch_tab_arrow_left_ParamLimits

0xa2b0,	// (0x000514d9) aid_touch_tab_arrow_right_ParamLimits

0xa34b,	// (0x00051574) clock_nsta_pane_ParamLimits

0xda69,	// (0x00054c92) navi_icon_pane_g1_ParamLimits

0xa83e,	// (0x00051a67) navi_text_pane_t1_ParamLimits

0xe8e1,	// (0x00055b0a) navi_icon_text_pane_g1_ParamLimits

0xe8ed,	// (0x00055b16) navi_icon_text_pane_t1_ParamLimits

0xb38a,	// (0x000525b3) list_single_hc_apps_pane_g1_ParamLimits

0x99a2,	// (0x00050bcb) list_single_hc_apps_pane_g2_ParamLimits

0xfcb1,	// (0x00056eda) list_single_hc_apps_pane_g_ParamLimits

0x99bb,	// (0x00050be4) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x99d7,	// (0x00050c00) list_single_hc_apps_pane_t1_ParamLimits

0x7e28,	// (0x0004f051) popup_toolbar2_fixed_window_ParamLimits

0x7e28,	// (0x0004f051) popup_toolbar2_fixed_window

0x8b5b,	// (0x0004fd84) popup_toolbar2_float_window

0xadbe,	// (0x00051fe7) bg_popup_sub_pane_cp27

0x51e4,	// (0x0004c40d) grid_toolbar2_float_pane

0xadbe,	// (0x00051fe7) bg_popup_sub_pane_cp26

0x51e4,	// (0x0004c40d) grid_toolbar2_fixed_pane

0xb3a3,	// (0x000525cc) cell_toolbar2_fixed_pane_ParamLimits

0xb3a3,	// (0x000525cc) cell_toolbar2_fixed_pane

0xb3be,	// (0x000525e7) cell_toolbar2_fixed_pane_g1

0x1807,	// (0x00048a30) toolbar2_fixed_button_pane

0xce07,	// (0x00054030) toolbar2_fixed_button_pane_g1

0xce17,	// (0x00054040) toolbar2_fixed_button_pane_g2

0xce0f,	// (0x00054038) toolbar2_fixed_button_pane_g3

0xce27,	// (0x00054050) toolbar2_fixed_button_pane_g4

0xce1f,	// (0x00054048) toolbar2_fixed_button_pane_g5

0xce2f,	// (0x00054058) toolbar2_fixed_button_pane_g6

0xce37,	// (0x00054060) toolbar2_fixed_button_pane_g7

0xce47,	// (0x00054070) toolbar2_fixed_button_pane_g8

0xce3f,	// (0x00054068) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x00056a90) toolbar2_fixed_button_pane_g

0x51ec,	// (0x0004c415) cell_toolbar2_float_pane_ParamLimits

0x51ec,	// (0x0004c415) cell_toolbar2_float_pane

0x5200,	// (0x0004c429) cell_toolbar2_float_pane_g1

0x1807,	// (0x00048a30) toolbar2_fixed_button_pane_cp

0xada4,	// (0x00051fcd) fep_vkb_accented_list_pane_ParamLimits

0xada4,	// (0x00051fcd) fep_vkb_accented_list_pane

0x20e6,	// (0x0004930f) bg_popup_fep_shadow_pane_g9

0xc9c1,	// (0x00053bea) bg_popup_fep_shadow_pane_cp3

0xc103,	// (0x0005332c) list_accented_list_pane

0x5209,	// (0x0004c432) list_single_accented_list_pane_ParamLimits

0x5209,	// (0x0004c432) list_single_accented_list_pane

0xc9c1,	// (0x00053bea) list_highlight_pane_cp10

0x521a,	// (0x0004c443) list_single_accented_list_pane_t1

0x8a85,	// (0x0004fcae) popup_slider_window_ParamLimits

0x8a85,	// (0x0004fcae) popup_slider_window

0x4fea,	// (0x0004c213) aid_indentation_list_msg

0xb9fa,	// (0x00052c23) bg_popup_window_pane_cp19

0x5286,	// (0x0004c4af) popup_slider_window_g1

0x52a2,	// (0x0004c4cb) popup_slider_window_g2

0x52be,	// (0x0004c4e7) popup_slider_window_g3

0x0005,

0xfcb6,	// (0x00056edf) popup_slider_window_g

0x52da,	// (0x0004c503) popup_slider_window_t1

0x54b4,	// (0x0004c6dd) small_volume_slider_vertical_pane

0xebaa,	// (0x00055dd3) small_volume_slider_vertical_pane_g1

0xebaa,	// (0x00055dd3) small_volume_slider_vertical_pane_g2

0x54d0,	// (0x0004c6f9) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc8,	// (0x00056ef1) small_volume_slider_vertical_pane_g

0x7d96,	// (0x0004efbf) area_side_right_pane_ParamLimits

0x7d96,	// (0x0004efbf) area_side_right_pane

0x8ee6,	// (0x0005010f) aid_size_side_button_ParamLimits

0x8ee6,	// (0x0005010f) aid_size_side_button

0x8eff,	// (0x00050128) grid_sctrl_middle_pane_ParamLimits

0x8eff,	// (0x00050128) grid_sctrl_middle_pane

0x2303,	// (0x0004952c) sctrl_sk_bottom_pane

0x2314,	// (0x0004953d) sctrl_sk_top_pane

0x2326,	// (0x0004954f) aid_touch_sctrl_top

0x2333,	// (0x0004955c) bg_sctrl_sk_pane_ParamLimits

0x2333,	// (0x0004955c) bg_sctrl_sk_pane

0x2341,	// (0x0004956a) sctrl_sk_top_pane_g1

0x234e,	// (0x00049577) sctrl_sk_top_pane_t1

0x2326,	// (0x0004954f) aid_touch_sctrl_bottom

0x2333,	// (0x0004955c) bg_sctrl_sk_pane_cp_ParamLimits

0x2333,	// (0x0004955c) bg_sctrl_sk_pane_cp

0x2369,	// (0x00049592) sctrl_sk_bottom_pane_g1

0x234e,	// (0x00049577) sctrl_sk_bottom_pane_t1

0x8f19,	// (0x00050142) cell_sctrl_middle_pane_ParamLimits

0x8f19,	// (0x00050142) cell_sctrl_middle_pane

0x8f2a,	// (0x00050153) aid_touch_sctrl_middle_ParamLimits

0x8f2a,	// (0x00050153) aid_touch_sctrl_middle

0x8f37,	// (0x00050160) bg_sctrl_middle_pane_ParamLimits

0x8f37,	// (0x00050160) bg_sctrl_middle_pane

0x29da,	// (0x00049c03) cell_sctrl_middle_pane_g1_ParamLimits

0x29da,	// (0x00049c03) cell_sctrl_middle_pane_g1

0x8f45,	// (0x0005016e) cell_sctrl_middle_pane_g2_ParamLimits

0x8f45,	// (0x0005016e) cell_sctrl_middle_pane_g2

0x0001,

0xfcd4,	// (0x00056efd) cell_sctrl_middle_pane_g_ParamLimits

0xfcd4,	// (0x00056efd) cell_sctrl_middle_pane_g

0xce07,	// (0x00054030) bg_sctrl_middle_pane_g1

0xce0f,	// (0x00054038) bg_sctrl_middle_pane_g2

0xce17,	// (0x00054040) bg_sctrl_middle_pane_g3

0xce1f,	// (0x00054048) bg_sctrl_middle_pane_g4

0xce27,	// (0x00054050) bg_sctrl_middle_pane_g5

0xce2f,	// (0x00054058) bg_sctrl_middle_pane_g6

0xce37,	// (0x00054060) bg_sctrl_middle_pane_g7

0xce3f,	// (0x00054068) bg_sctrl_middle_pane_g8

0x0007,

0x017e,	// (0x000473a7) bg_sctrl_middle_pane_g

0xce47,	// (0x00054070) bg_sctrl_middle_pane_g8_copy1

0xce07,	// (0x00054030) bg_sctrl_sk_pane_g1

0xce17,	// (0x00054040) bg_sctrl_sk_pane_g2

0xce0f,	// (0x00054038) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x00056a90) bg_sctrl_sk_pane_g

0xb86d,	// (0x00052a96) aid_size_touch_scroll_bar

0xce27,	// (0x00054050) bg_sctrl_sk_pane_g4

0xce1f,	// (0x00054048) bg_sctrl_sk_pane_g5

0xce2f,	// (0x00054058) bg_sctrl_sk_pane_g6

0xce37,	// (0x00054060) bg_sctrl_sk_pane_g7

0xce47,	// (0x00054070) bg_sctrl_sk_pane_g8

0xce3f,	// (0x00054068) bg_sctrl_sk_pane_g9

0x14f2,	// (0x0004871b) popup_fep_china_hwr2_fs_candidate_window

0x85b3,	// (0x0004f7dc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x85b3,	// (0x0004f7dc) popup_fep_china_hwr2_fs_control_window

0x2106,	// (0x0004932f) sctrl_sk_top_pane_g2

0x0001,

0xfccf,	// (0x00056ef8) sctrl_sk_top_pane_g

0xbb2d,	// (0x00052d56) aid_fep_china_hwr2_fs_cell_ParamLimits

0xbb2d,	// (0x00052d56) aid_fep_china_hwr2_fs_cell

0xbb41,	// (0x00052d6a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xbb41,	// (0x00052d6a) bg_popup_fep_shadow_pane_cp4

0xbb58,	// (0x00052d81) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xbb58,	// (0x00052d81) bg_popup_fep_shadow_pane_cp5

0xbb6a,	// (0x00052d93) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xbb6a,	// (0x00052d93) popup_fep_china_hwr2_fs_control_bar_grid

0xbb7e,	// (0x00052da7) popup_fep_china_hwr2_fs_control_funtion_grid

0x54d9,	// (0x0004c702) aid_fep_china_hwr2_fs_candi_cell

0xadbe,	// (0x00051fe7) bg_popup_fep_shadow_pane_cp6

0x54e3,	// (0x0004c70c) popup_fep_china_hwr2_fs_candidate_grid

0xbb86,	// (0x00052daf) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xbb86,	// (0x00052daf) cell_fep_china_hwr2_fs_funtion_grid

0xebaa,	// (0x00055dd3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x54ed,	// (0x0004c716) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x54ed,	// (0x0004c716) cell_fep_china_hwr2_fs_funtion_grid_g1

0x54fb,	// (0x0004c724) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x54fb,	// (0x0004c724) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcd9,	// (0x00056f02) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcd9,	// (0x00056f02) cell_fep_china_hwr2_fs_funtion_grid_g

0xbb9e,	// (0x00052dc7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xbb9e,	// (0x00052dc7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xbbb3,	// (0x00052ddc) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xbbb3,	// (0x00052ddc) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcde,	// (0x00056f07) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcde,	// (0x00056f07) cell_fep_china_hwr2_fs_funtion_grid_t

0x5511,	// (0x0004c73a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5519,	// (0x0004c742) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5521,	// (0x0004c74a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfce3,	// (0x00056f0c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5529,	// (0x0004c752) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5529,	// (0x0004c752) cell_fep_china_hwr2_fs_candidate_grid

0x5542,	// (0x0004c76b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x554a,	// (0x0004c773) popup_fep_china_hwr2_fs_candidate_grid_g21

0xebaa,	// (0x00055dd3) cell_fep_china_hwr2_fs_candidate_grid_g1

0xebaa,	// (0x00055dd3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x00056d6e) cell_fep_china_hwr2_fs_candidate_grid_g

0x5552,	// (0x0004c77b) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcc42,	// (0x00053e6b) clock_nsta_pane_cp_24_ParamLimits

0xcc42,	// (0x00053e6b) clock_nsta_pane_cp_24

0xccaa,	// (0x00053ed3) indicator_nsta_pane_cp_24_ParamLimits

0xccaa,	// (0x00053ed3) indicator_nsta_pane_cp_24

0xd987,	// (0x00054bb0) heading_pane_g1

0x0001,

0xf8cc,	// (0x00056af5) heading_pane_g

0xe010,	// (0x00055239) grid_sct_catagory_button_pane

0xd96f,	// (0x00054b98) scroll_pane_cp5_ParamLimits

0xe913,	// (0x00055b3c) button_value_adjust_pane_cp5_ParamLimits

0xe913,	// (0x00055b3c) button_value_adjust_pane_cp5

0xe9d1,	// (0x00055bfa) form2_midp_time_pane_ParamLimits

0x5560,	// (0x0004c789) cell_sct_catagory_button_pane_ParamLimits

0x5560,	// (0x0004c789) cell_sct_catagory_button_pane

0xeb6f,	// (0x00055d98) bg_button_pane_cp01_ParamLimits

0xeb6f,	// (0x00055d98) bg_button_pane_cp01

0xebaa,	// (0x00055dd3) cell_sct_catagory_button_pane_g1

0x8afe,	// (0x0004fd27) popup_tb_extension_window

0xbbcf,	// (0x00052df8) aid_size_cell_ext_ParamLimits

0xbbcf,	// (0x00052df8) aid_size_cell_ext

0xb6af,	// (0x000528d8) bg_tb_trans_pane_cp1_ParamLimits

0xb6af,	// (0x000528d8) bg_tb_trans_pane_cp1

0xbbf5,	// (0x00052e1e) grid_tb_ext_pane_ParamLimits

0xbbf5,	// (0x00052e1e) grid_tb_ext_pane

0xbc37,	// (0x00052e60) cell_tb_ext_pane_ParamLimits

0xbc37,	// (0x00052e60) cell_tb_ext_pane

0xbc5f,	// (0x00052e88) cell_tb_ext_pane_g1_ParamLimits

0xbc5f,	// (0x00052e88) cell_tb_ext_pane_g1

0x5572,	// (0x0004c79b) cell_tb_ext_pane_t1

0xb420,	// (0x00052649) list_highlight_pane_cp11_ParamLimits

0xb420,	// (0x00052649) list_highlight_pane_cp11

0x0717,	// (0x00047940) popup_uni_indicator_window_ParamLimits

0x0717,	// (0x00047940) popup_uni_indicator_window

0xba2e,	// (0x00052c57) bg_popup_sub_pane_cp14

0x558d,	// (0x0004c7b6) list_uniindi_pane

0x5599,	// (0x0004c7c2) uniindi_top_pane

0xb420,	// (0x00052649) bg_uniindi_top_pane

0x55b8,	// (0x0004c7e1) uniindi_top_pane_g1

0x55ce,	// (0x0004c7f7) uniindi_top_pane_g2

0x0003,

0xfcea,	// (0x00056f13) uniindi_top_pane_g

0x55f8,	// (0x0004c821) uniindi_top_pane_t1

0x5622,	// (0x0004c84b) list_single_uniindi_pane_ParamLimits

0x5622,	// (0x0004c84b) list_single_uniindi_pane

0xebaa,	// (0x00055dd3) bg_uniindi_top_pane_g1

0x5635,	// (0x0004c85e) list_single_uniindi_pane_g1

0x5648,	// (0x0004c871) list_single_uniindi_pane_t1

0x059b,	// (0x000477c4) control_bg_pane

0x566d,	// (0x0004c896) bg_sctrl_sk_pane_cp1

0x5676,	// (0x0004c89f) bg_sctrl_sk_pane_cp2

0x567f,	// (0x0004c8a8) control_bg_pane_g1

0x5688,	// (0x0004c8b1) control_bg_pane_g2

0x0001,

0xfcf3,	// (0x00056f1c) control_bg_pane_g

0xe7d7,	// (0x00055a00) cell_indicator_nsta_pane_g1_ParamLimits

0xac12,	// (0x00051e3b) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x00056cd2) cell_indicator_nsta_pane_g_ParamLimits

0x3fc2,	// (0x0004b1eb) form2_midp_time_pane_t1_ParamLimits

0x1ea1,	// (0x000490ca) main_idle_act4_pane_ParamLimits

0x1ea1,	// (0x000490ca) main_idle_act4_pane

0x8afe,	// (0x0004fd27) popup_tb_extension_window_ParamLimits

0xbc1d,	// (0x00052e46) tb_ext_find_pane_ParamLimits

0xbc1d,	// (0x00052e46) tb_ext_find_pane

0x5691,	// (0x0004c8ba) ai_gene_pane_1_cp1

0xca55,	// (0x00053c7e) ai_gene_pane_2_cp1

0x5699,	// (0x0004c8c2) list_single_idle_plugin_calendar_pane

0x56a2,	// (0x0004c8cb) list_single_idle_plugin_notification_pane

0x56ab,	// (0x0004c8d4) list_single_idle_plugin_player_pane

0xbc7c,	// (0x00052ea5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xbc7c,	// (0x00052ea5) list_single_idle_plugin_shortcut_pane

0xbca4,	// (0x00052ecd) main_idle_act4_pane_t1

0xbcba,	// (0x00052ee3) main_idle_act4_pane_t2

0x0001,

0xfcf8,	// (0x00056f21) main_idle_act4_pane_t

0xbcd2,	// (0x00052efb) middle_sk_idle_act4_pane_ParamLimits

0xbcd2,	// (0x00052efb) middle_sk_idle_act4_pane

0xbcee,	// (0x00052f17) popup_clock_digital_analogue_window_cp2

0xbd15,	// (0x00052f3e) shortcut_wheel_idle_act4_pane_ParamLimits

0xbd15,	// (0x00052f3e) shortcut_wheel_idle_act4_pane

0xebaa,	// (0x00055dd3) shortcut_wheel_idle_act4_pane_g1

0xebaa,	// (0x00055dd3) shortcut_wheel_idle_act4_pane_g2

0xebaa,	// (0x00055dd3) shortcut_wheel_idle_act4_pane_g3

0xebaa,	// (0x00055dd3) shortcut_wheel_idle_act4_pane_g4

0xebaa,	// (0x00055dd3) shortcut_wheel_idle_act4_pane_g5

0x56b4,	// (0x0004c8dd) shortcut_wheel_idle_act4_pane_g6

0x56bc,	// (0x0004c8e5) shortcut_wheel_idle_act4_pane_g7

0x56c4,	// (0x0004c8ed) shortcut_wheel_idle_act4_pane_g8

0x56cc,	// (0x0004c8f5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfcfd,	// (0x00056f26) shortcut_wheel_idle_act4_pane_g

0x8f51,	// (0x0005017a) middle_sk_idle_act4_pane_g1_ParamLimits

0x8f51,	// (0x0005017a) middle_sk_idle_act4_pane_g1

0xbd92,	// (0x00052fbb) middle_sk_idle_act4_pane_g2_ParamLimits

0xbd92,	// (0x00052fbb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd20,	// (0x00056f49) middle_sk_idle_act4_pane_g_ParamLimits

0xfd20,	// (0x00056f49) middle_sk_idle_act4_pane_g

0xbdaa,	// (0x00052fd3) middle_sk_idle_act4_pane_t1_ParamLimits

0xbdaa,	// (0x00052fd3) middle_sk_idle_act4_pane_t1

0xbdd9,	// (0x00053002) grid_ai_shortcut_pane_ParamLimits

0xbdd9,	// (0x00053002) grid_ai_shortcut_pane

0xbdf6,	// (0x0005301f) list_highlight_pane_cp16_ParamLimits

0xbdf6,	// (0x0005301f) list_highlight_pane_cp16

0xbe03,	// (0x0005302c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xbe03,	// (0x0005302c) list_single_idle_plugin_shortcut_pane_g1

0xbe0f,	// (0x00053038) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xbe0f,	// (0x00053038) list_single_idle_plugin_shortcut_pane_g2

0xbe2b,	// (0x00053054) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xbe2b,	// (0x00053054) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd25,	// (0x00056f4e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd25,	// (0x00056f4e) list_single_idle_plugin_shortcut_pane_g

0xbe40,	// (0x00053069) cell_ai_shortcut_pane_ParamLimits

0xbe40,	// (0x00053069) cell_ai_shortcut_pane

0xbe56,	// (0x0005307f) cell_ai_shortcut_pane_g1_ParamLimits

0xbe56,	// (0x0005307f) cell_ai_shortcut_pane_g1

0x5691,	// (0x0004c8ba) ai_gene_pane_1_cp2

0x56d4,	// (0x0004c8fd) ai_gene_pane_2_cp2

0x56dc,	// (0x0004c905) list_highlight_pane_cp15

0x56e5,	// (0x0004c90e) list_single_idle_plugin_calendar_pane_g1

0x56dc,	// (0x0004c905) list_highlight_pane_cp17

0x56ed,	// (0x0004c916) list_single_idle_plugin_calendar_pane_g1_copy1

0x56f5,	// (0x0004c91e) list_single_idle_plugin_player_pane_g1

0xe223,	// (0x0005544c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd2c,	// (0x00056f55) list_single_idle_plugin_player_pane_g

0x56fd,	// (0x0004c926) list_single_idle_plugin_player_pane_t1

0x570b,	// (0x0004c934) list_single_idle_plugin_player_pane_t2

0x5719,	// (0x0004c942) list_single_idle_plugin_player_pane_t3

0x5727,	// (0x0004c950) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd31,	// (0x00056f5a) list_single_idle_plugin_player_pane_t

0x5735,	// (0x0004c95e) wait_bar_pane_cp15

0x573d,	// (0x0004c966) grid_ai_notification_pane

0xe223,	// (0x0005544c) list_single_idle_plugin_notification_pane_g1

0xbe78,	// (0x000530a1) cell_ai_notification_pane_ParamLimits

0xbe78,	// (0x000530a1) cell_ai_notification_pane

0x5746,	// (0x0004c96f) cell_ai_notification_pane_g1

0x574e,	// (0x0004c977) cell_ai_notification_pane_t1

0xbe85,	// (0x000530ae) tb_ext_find_button_pane

0xbe8d,	// (0x000530b6) tb_ext_find_pane_g1

0xbe95,	// (0x000530be) tb_ext_find_pane_t1

0xc51f,	// (0x00053748) tb_ext_find_button_pane_g1

0x5e70,	// (0x0004d099) tb_ext_find_button_pane_g2

0x0001,

0xfd3a,	// (0x00056f63) tb_ext_find_button_pane_g

0xbca4,	// (0x00052ecd) main_idle_act4_pane_t1_ParamLimits

0xbcba,	// (0x00052ee3) main_idle_act4_pane_t2_ParamLimits

0xfcf8,	// (0x00056f21) main_idle_act4_pane_t_ParamLimits

0xbcee,	// (0x00052f17) popup_clock_digital_analogue_window_cp2_ParamLimits

0xbd05,	// (0x00052f2e) sat_plugin_idle_act4_pane_ParamLimits

0xbd05,	// (0x00052f2e) sat_plugin_idle_act4_pane

0xbea3,	// (0x000530cc) sat_plugin_idle_act4_pane_t1_ParamLimits

0xbea3,	// (0x000530cc) sat_plugin_idle_act4_pane_t1

0xbebb,	// (0x000530e4) sat_plugin_idle_act4_pane_t2_ParamLimits

0xbebb,	// (0x000530e4) sat_plugin_idle_act4_pane_t2

0xbed3,	// (0x000530fc) sat_plugin_idle_act4_pane_t3_ParamLimits

0xbed3,	// (0x000530fc) sat_plugin_idle_act4_pane_t3

0xbeeb,	// (0x00053114) sat_plugin_idle_act4_pane_t4_ParamLimits

0xbeeb,	// (0x00053114) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd3f,	// (0x00056f68) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd3f,	// (0x00056f68) sat_plugin_idle_act4_pane_t

0x0660,	// (0x00047889) popup_battery_window_ParamLimits

0x0660,	// (0x00047889) popup_battery_window

0xb420,	// (0x00052649) bg_popup_sub_pane_cp25_ParamLimits

0xb420,	// (0x00052649) bg_popup_sub_pane_cp25

0x5e79,	// (0x0004d0a2) popup_battery_window_g1_ParamLimits

0x5e79,	// (0x0004d0a2) popup_battery_window_g1

0x5e85,	// (0x0004d0ae) popup_battery_window_t1_ParamLimits

0x5e85,	// (0x0004d0ae) popup_battery_window_t1

0x5e97,	// (0x0004d0c0) popup_battery_window_t2_ParamLimits

0x5e97,	// (0x0004d0c0) popup_battery_window_t2

0x0001,

0xfd48,	// (0x00056f71) popup_battery_window_t_ParamLimits

0xfd48,	// (0x00056f71) popup_battery_window_t

0xa167,	// (0x00051390) midp_canvas_pane_ParamLimits

0xa1c4,	// (0x000513ed) midp_keypad_pane_ParamLimits

0xa1c4,	// (0x000513ed) midp_keypad_pane

0xc155,	// (0x0005337e) main_midp_pane_ParamLimits

0xe8aa,	// (0x00055ad3) signal_pane_g2_cp_ParamLimits

0xbf03,	// (0x0005312c) aid_size_cell_midp_keypad_ParamLimits

0xbf03,	// (0x0005312c) aid_size_cell_midp_keypad

0xbf21,	// (0x0005314a) midp_keyp_game_grid_pane_ParamLimits

0xbf21,	// (0x0005314a) midp_keyp_game_grid_pane

0xbf48,	// (0x00053171) midp_keyp_rocker_pane_ParamLimits

0xbf48,	// (0x00053171) midp_keyp_rocker_pane

0xbf91,	// (0x000531ba) midp_keyp_sk_left_pane_ParamLimits

0xbf91,	// (0x000531ba) midp_keyp_sk_left_pane

0xbfe3,	// (0x0005320c) midp_keyp_sk_right_pane_ParamLimits

0xbfe3,	// (0x0005320c) midp_keyp_sk_right_pane

0xadbe,	// (0x00051fe7) bg_button_pane_cp03

0xc035,	// (0x0005325e) midp_keyp_sk_left_pane_g1

0xadbe,	// (0x00051fe7) bg_button_pane_cp04

0xc035,	// (0x0005325e) midp_keyp_sk_right_pane_g1

0xebaa,	// (0x00055dd3) midp_keyp_rocker_pane_g1

0xc03e,	// (0x00053267) keyp_game_cell_pane_ParamLimits

0xc03e,	// (0x00053267) keyp_game_cell_pane

0xadbe,	// (0x00051fe7) bg_button_pane_cp02

0xc062,	// (0x0005328b) keyp_game_cell_pane_g1

0x7dd8,	// (0x0004f001) popup_fep_vkb2_window_ParamLimits

0x7dd8,	// (0x0004f001) popup_fep_vkb2_window

0x8f5f,	// (0x00050188) aid_size_cell_vkb2_ParamLimits

0x8f5f,	// (0x00050188) aid_size_cell_vkb2

0x8f95,	// (0x000501be) popup_fep_vkb2_window_g1_ParamLimits

0x8f95,	// (0x000501be) popup_fep_vkb2_window_g1

0x8fe5,	// (0x0005020e) vkb2_area_bottom_pane_ParamLimits

0x8fe5,	// (0x0005020e) vkb2_area_bottom_pane

0x9039,	// (0x00050262) vkb2_area_keypad_pane_ParamLimits

0x9039,	// (0x00050262) vkb2_area_keypad_pane

0x9081,	// (0x000502aa) vkb2_area_top_pane_ParamLimits

0x9081,	// (0x000502aa) vkb2_area_top_pane

0x9107,	// (0x00050330) vkb2_top_entry_pane_ParamLimits

0x9107,	// (0x00050330) vkb2_top_entry_pane

0x9134,	// (0x0005035d) vkb2_top_grid_left_pane_ParamLimits

0x9134,	// (0x0005035d) vkb2_top_grid_left_pane

0x9154,	// (0x0005037d) vkb2_top_grid_right_pane_ParamLimits

0x9154,	// (0x0005037d) vkb2_top_grid_right_pane

0x25d5,	// (0x000497fe) vkb2_cell_keypad_pane_ParamLimits

0x25d5,	// (0x000497fe) vkb2_cell_keypad_pane

0x919a,	// (0x000503c3) vkb2_area_bottom_grid_pane_ParamLimits

0x919a,	// (0x000503c3) vkb2_area_bottom_grid_pane

0x91c4,	// (0x000503ed) vkb2_area_bottom_pane_g1_ParamLimits

0x91c4,	// (0x000503ed) vkb2_area_bottom_pane_g1

0x91ea,	// (0x00050413) vkb2_area_bottom_pane_g2_ParamLimits

0x91ea,	// (0x00050413) vkb2_area_bottom_pane_g2

0x921b,	// (0x00050444) vkb2_area_bottom_pane_g3_ParamLimits

0x921b,	// (0x00050444) vkb2_area_bottom_pane_g3

0x0002,

0xfd4d,	// (0x00056f76) vkb2_area_bottom_pane_g_ParamLimits

0xfd4d,	// (0x00056f76) vkb2_area_bottom_pane_g

0x277f,	// (0x000499a8) vkb2_top_cell_left_pane_ParamLimits

0x277f,	// (0x000499a8) vkb2_top_cell_left_pane

0x9a05,	// (0x00050c2e) vkb2_top_entry_pane_g1_ParamLimits

0x9a05,	// (0x00050c2e) vkb2_top_entry_pane_g1

0x9a13,	// (0x00050c3c) vkb2_top_entry_pane_t1_ParamLimits

0x9a13,	// (0x00050c3c) vkb2_top_entry_pane_t1

0x5ebc,	// (0x0004d0e5) vkb2_top_entry_pane_t2_ParamLimits

0x5ebc,	// (0x0004d0e5) vkb2_top_entry_pane_t2

0x5eee,	// (0x0004d117) vkb2_top_entry_pane_t3_ParamLimits

0x5eee,	// (0x0004d117) vkb2_top_entry_pane_t3

0x0002,

0xfd54,	// (0x00056f7d) vkb2_top_entry_pane_t_ParamLimits

0xfd54,	// (0x00056f7d) vkb2_top_entry_pane_t

0x9285,	// (0x000504ae) vkb2_top_grid_right_pane_g1_ParamLimits

0x9285,	// (0x000504ae) vkb2_top_grid_right_pane_g1

0x27e2,	// (0x00049a0b) vkb2_top_grid_right_pane_g2_ParamLimits

0x27e2,	// (0x00049a0b) vkb2_top_grid_right_pane_g2

0x27fa,	// (0x00049a23) vkb2_top_grid_right_pane_g3_ParamLimits

0x27fa,	// (0x00049a23) vkb2_top_grid_right_pane_g3

0x929b,	// (0x000504c4) vkb2_top_grid_right_pane_g4_ParamLimits

0x929b,	// (0x000504c4) vkb2_top_grid_right_pane_g4

0x0003,

0xfd5b,	// (0x00056f84) vkb2_top_grid_right_pane_g_ParamLimits

0xfd5b,	// (0x00056f84) vkb2_top_grid_right_pane_g

0x2828,	// (0x00049a51) vkb2_top_cell_left_pane_g1

0x283f,	// (0x00049a68) vkb2_cell_keypad_pane_g1_ParamLimits

0x283f,	// (0x00049a68) vkb2_cell_keypad_pane_g1

0x5f12,	// (0x0004d13b) vkb2_cell_keypad_pane_t1_ParamLimits

0x5f12,	// (0x0004d13b) vkb2_cell_keypad_pane_t1

0x284d,	// (0x00049a76) vkb2_cell_bottom_grid_pane_ParamLimits

0x284d,	// (0x00049a76) vkb2_cell_bottom_grid_pane

0x2886,	// (0x00049aaf) vkb2_cell_bottom_grid_pane_g1

0xbd36,	// (0x00052f5f) aid_call2_pane_cp02

0xbd3e,	// (0x00052f67) aid_call_pane_cp02

0xbd46,	// (0x00052f6f) clock_digital_number_pane_cp10

0xbd4e,	// (0x00052f77) clock_digital_number_pane_cp11

0xbd56,	// (0x00052f7f) clock_digital_number_pane_cp12

0xbd5e,	// (0x00052f87) clock_digital_number_pane_cp13

0xbd66,	// (0x00052f8f) clock_digital_separator_pane_cp10

0xc51f,	// (0x00053748) popup_clock_digital_analogue_window_cp2_g1

0xc51f,	// (0x00053748) popup_clock_digital_analogue_window_cp2_g2

0xbd6e,	// (0x00052f97) popup_clock_digital_analogue_window_cp2_g3

0xc51f,	// (0x00053748) popup_clock_digital_analogue_window_cp2_g4

0xbd6e,	// (0x00052f97) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd10,	// (0x00056f39) popup_clock_digital_analogue_window_cp2_g

0xbd76,	// (0x00052f9f) popup_clock_digital_analogue_window_cp2_t1

0xbd84,	// (0x00052fad) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd1b,	// (0x00056f44) popup_clock_digital_analogue_window_cp2_t

0xebaa,	// (0x00055dd3) clock_digital_number_pane_cp10_g1

0xebaa,	// (0x00055dd3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x00056d6e) clock_digital_number_pane_cp10_g

0xebaa,	// (0x00055dd3) clock_digital_separator_pane_cp10_g1

0xebaa,	// (0x00055dd3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x00056d6e) clock_digital_separator_pane_cp10_g

0x55da,	// (0x0004c803) uniindi_top_pane_g3

0x55eb,	// (0x0004c814) uniindi_top_pane_g4

0x2660,	// (0x00049889) vkb2_row_keypad_pane_ParamLimits

0x2660,	// (0x00049889) vkb2_row_keypad_pane

0x28a6,	// (0x00049acf) vkb2_cell_t_keypad_pane_ParamLimits

0x28a6,	// (0x00049acf) vkb2_cell_t_keypad_pane

0x28b6,	// (0x00049adf) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x28b6,	// (0x00049adf) vkb2_cell_t_keypad_pane_cp08

0x28c9,	// (0x00049af2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x28c9,	// (0x00049af2) vkb2_cell_t_keypad_pane_cp09

0x28dd,	// (0x00049b06) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x28dd,	// (0x00049b06) vkb2_cell_t_keypad_pane_cp01

0x28ee,	// (0x00049b17) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x28ee,	// (0x00049b17) vkb2_cell_t_keypad_pane_cp02

0x28ff,	// (0x00049b28) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x28ff,	// (0x00049b28) vkb2_cell_t_keypad_pane_cp03

0x2910,	// (0x00049b39) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2910,	// (0x00049b39) vkb2_cell_t_keypad_pane_cp04

0x2921,	// (0x00049b4a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2921,	// (0x00049b4a) vkb2_cell_t_keypad_pane_cp05

0x2932,	// (0x00049b5b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2932,	// (0x00049b5b) vkb2_cell_t_keypad_pane_cp06

0x2943,	// (0x00049b6c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2943,	// (0x00049b6c) vkb2_cell_t_keypad_pane_cp07

0x2954,	// (0x00049b7d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2954,	// (0x00049b7d) vkb2_cell_t_keypad_pane_cp10

0x2106,	// (0x0004932f) vkb2_cell_t_keypad_pane_g1

0x5f29,	// (0x0004d152) vkb2_cell_t_keypad_pane_t1

0x059b,	// (0x000477c4) popup_grid_graphic2_window

0x9a4c,	// (0x00050c75) aid_size_cell_graphic2_ParamLimits

0x9a4c,	// (0x00050c75) aid_size_cell_graphic2

0x9a8a,	// (0x00050cb3) bg_popup_window_pane_cp21_ParamLimits

0x9a8a,	// (0x00050cb3) bg_popup_window_pane_cp21

0x9a98,	// (0x00050cc1) graphic2_pages_pane_ParamLimits

0x9a98,	// (0x00050cc1) graphic2_pages_pane

0x9bdc,	// (0x00050e05) grid_graphic2_control_pane_ParamLimits

0x9bdc,	// (0x00050e05) grid_graphic2_control_pane

0x9c24,	// (0x00050e4d) grid_graphic2_pane_ParamLimits

0x9c24,	// (0x00050e4d) grid_graphic2_pane

0x9cab,	// (0x00050ed4) cell_graphic2_pane

0x059b,	// (0x000477c4) main_comp_mode_pane

0x5088,	// (0x0004c2b1) list_ai3_gene_pane_ParamLimits

0xb9fa,	// (0x00052c23) bg_popup_window_pane_cp19_ParamLimits

0x5228,	// (0x0004c451) bg_touch_area_indi_pane_ParamLimits

0x5228,	// (0x0004c451) bg_touch_area_indi_pane

0x523e,	// (0x0004c467) bg_touch_area_indi_pane_cp01_ParamLimits

0x523e,	// (0x0004c467) bg_touch_area_indi_pane_cp01

0x5254,	// (0x0004c47d) bg_touch_area_indi_pane_cp02_ParamLimits

0x5254,	// (0x0004c47d) bg_touch_area_indi_pane_cp02

0x526c,	// (0x0004c495) bg_touch_area_indi_pane_cp03_ParamLimits

0x526c,	// (0x0004c495) bg_touch_area_indi_pane_cp03

0x5286,	// (0x0004c4af) popup_slider_window_g1_ParamLimits

0x52a2,	// (0x0004c4cb) popup_slider_window_g2_ParamLimits

0x52be,	// (0x0004c4e7) popup_slider_window_g3_ParamLimits

0xfcb6,	// (0x00056edf) popup_slider_window_g_ParamLimits

0x52da,	// (0x0004c503) popup_slider_window_t1_ParamLimits

0x54b4,	// (0x0004c6dd) small_volume_slider_vertical_pane_ParamLimits

0x9cab,	// (0x00050ed4) cell_graphic2_pane_ParamLimits

0x9d08,	// (0x00050f31) bg_button_pane_cp10_ParamLimits

0x9d08,	// (0x00050f31) bg_button_pane_cp10

0x9d1b,	// (0x00050f44) bg_button_pane_cp11_ParamLimits

0x9d1b,	// (0x00050f44) bg_button_pane_cp11

0x9d2e,	// (0x00050f57) graphic2_pages_pane_g1_ParamLimits

0x9d2e,	// (0x00050f57) graphic2_pages_pane_g1

0x9d49,	// (0x00050f72) graphic2_pages_pane_g2_ParamLimits

0x9d49,	// (0x00050f72) graphic2_pages_pane_g2

0x0001,

0xfd69,	// (0x00056f92) graphic2_pages_pane_g_ParamLimits

0xfd69,	// (0x00056f92) graphic2_pages_pane_g

0x9d61,	// (0x00050f8a) graphic2_pages_pane_t1_ParamLimits

0x9d61,	// (0x00050f8a) graphic2_pages_pane_t1

0x9d79,	// (0x00050fa2) cell_graphic2_control_pane_ParamLimits

0x9d79,	// (0x00050fa2) cell_graphic2_control_pane

0x9dab,	// (0x00050fd4) cell_graphic2_pane_g1_ParamLimits

0x9dab,	// (0x00050fd4) cell_graphic2_pane_g1

0x92b1,	// (0x000504da) cell_graphic2_pane_g2_ParamLimits

0x92b1,	// (0x000504da) cell_graphic2_pane_g2

0x9bcf,	// (0x00050df8) cell_graphic2_pane_g3_ParamLimits

0x9bcf,	// (0x00050df8) cell_graphic2_pane_g3

0x92be,	// (0x000504e7) cell_graphic2_pane_g4_ParamLimits

0x92be,	// (0x000504e7) cell_graphic2_pane_g4

0x9db8,	// (0x00050fe1) cell_graphic2_pane_g5_ParamLimits

0x9db8,	// (0x00050fe1) cell_graphic2_pane_g5

0x0004,

0xfd6e,	// (0x00056f97) cell_graphic2_pane_g_ParamLimits

0xfd6e,	// (0x00056f97) cell_graphic2_pane_g

0x9dd8,	// (0x00051001) cell_graphic2_pane_t1_ParamLimits

0x9dd8,	// (0x00051001) cell_graphic2_pane_t1

0xd97b,	// (0x00054ba4) grid_highlight_pane_cp11_ParamLimits

0xd97b,	// (0x00054ba4) grid_highlight_pane_cp11

0xb420,	// (0x00052649) bg_button_pane_cp05

0x9e0c,	// (0x00051035) cell_graphic2_control_pane_g1

0xebaa,	// (0x00055dd3) bg_touch_area_indi_pane_g1

0x5f3b,	// (0x0004d164) aid_cmod_rocker_key_size

0x5f45,	// (0x0004d16e) aid_cmode_itu_key_size

0x5f4f,	// (0x0004d178) main_cmode_video_pane

0x5f59,	// (0x0004d182) main_comp_mode_itu_pane

0x5f65,	// (0x0004d18e) main_comp_mode_rocker_pane

0x5f71,	// (0x0004d19a) cell_cmode_rocker_pane_ParamLimits

0x5f71,	// (0x0004d19a) cell_cmode_rocker_pane

0x5f83,	// (0x0004d1ac) cell_cmode_itu_pane_ParamLimits

0x5f83,	// (0x0004d1ac) cell_cmode_itu_pane

0xba2e,	// (0x00052c57) bg_button_pane_cp06_ParamLimits

0xba2e,	// (0x00052c57) bg_button_pane_cp06

0xed7d,	// (0x00055fa6) cell_cmode_rocker_pane_g1_ParamLimits

0xed7d,	// (0x00055fa6) cell_cmode_rocker_pane_g1

0x54ed,	// (0x0004c716) cell_cmode_rocker_pane_g2_ParamLimits

0x54ed,	// (0x0004c716) cell_cmode_rocker_pane_g2

0x0001,

0xfd7e,	// (0x00056fa7) cell_cmode_rocker_pane_g_ParamLimits

0xfd7e,	// (0x00056fa7) cell_cmode_rocker_pane_g

0xadbe,	// (0x00051fe7) bg_button_pane_cp07

0x5f98,	// (0x0004d1c1) cell_cmode_itu_pane_g1

0x5fa1,	// (0x0004d1ca) cell_cmode_itu_pane_t1

0x5faf,	// (0x0004d1d8) cell_cmode_itu_pane_t2

0x0001,

0xfd83,	// (0x00056fac) cell_cmode_itu_pane_t

0x565d,	// (0x0004c886) aid_touch_ctrl_left

0x5665,	// (0x0004c88e) aid_touch_ctrl_right

0xadbe,	// (0x00051fe7) compa_mode_pane

0x9e30,	// (0x00051059) aid_cmod_rocker_key_size_cp

0x9e3a,	// (0x00051063) aid_cmode_itu_key_size_cp

0x5fbd,	// (0x0004d1e6) compa_mode_pane_g1

0x5fc5,	// (0x0004d1ee) compa_mode_pane_g2

0x5fcd,	// (0x0004d1f6) compa_mode_pane_g3

0x0002,

0xfd88,	// (0x00056fb1) compa_mode_pane_g

0x9e44,	// (0x0005106d) main_comp_mode_itu_pane_cp

0x9e4c,	// (0x00051075) main_comp_mode_rocker_pane_cp

0x9e54,	// (0x0005107d) cell_cmode_itu_pane_cp_ParamLimits

0x9e54,	// (0x0005107d) cell_cmode_itu_pane_cp

0x9e69,	// (0x00051092) cell_cmode_rocker_pane_cp_ParamLimits

0x9e69,	// (0x00051092) cell_cmode_rocker_pane_cp

0xba2e,	// (0x00052c57) bg_button_pane_cp06_cp_ParamLimits

0xba2e,	// (0x00052c57) bg_button_pane_cp06_cp

0xed7d,	// (0x00055fa6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xed7d,	// (0x00055fa6) cell_cmode_rocker_pane_g1_cp

0xebaa,	// (0x00055dd3) cell_cmode_rocker_pane_g2_cp

0xadbe,	// (0x00051fe7) bg_button_pane_cp07_cp

0x9e7b,	// (0x000510a4) cell_cmode_itu_pane_g1_cp

0x9e84,	// (0x000510ad) cell_cmode_itu_pane_t1_cp

0x9e84,	// (0x000510ad) cell_cmode_itu_pane_t2_cp

0xaa6c,	// (0x00051c95) settings_code_pane_cp2

0xae2e,	// (0x00052057) bg_popup_window_pane_cp3_ParamLimits

0xb5ee,	// (0x00052817) heading_pane_cp3_ParamLimits

0xb5fa,	// (0x00052823) listscroll_popup_graphic_pane_ParamLimits

0x1eaf,	// (0x000490d8) fep_hwr_aid_pane_ParamLimits

0x2326,	// (0x0004954f) aid_touch_sctrl_top_ParamLimits

0x2341,	// (0x0004956a) sctrl_sk_top_pane_g1_ParamLimits

0x2106,	// (0x0004932f) sctrl_sk_top_pane_g2_ParamLimits

0xfccf,	// (0x00056ef8) sctrl_sk_top_pane_g_ParamLimits

0x234e,	// (0x00049577) sctrl_sk_top_pane_t1_ParamLimits

0x2326,	// (0x0004954f) aid_touch_sctrl_bottom_ParamLimits

0x234e,	// (0x00049577) sctrl_sk_bottom_pane_t1_ParamLimits

0x55a6,	// (0x0004c7cf) aid_area_touch_clock

0x90c9,	// (0x000502f2) aid_vkb2_area_top_pane_cell_ParamLimits

0x90c9,	// (0x000502f2) aid_vkb2_area_top_pane_cell

0x9174,	// (0x0005039d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9174,	// (0x0005039d) aid_vkb2_area_bottom_pane_cell

0x5eb4,	// (0x0004d0dd) popup_char_count_window

0x5fd5,	// (0x0004d1fe) popup_char_count_window_g1

0x5fde,	// (0x0004d207) popup_char_count_window_g2

0x5fe7,	// (0x0004d210) popup_char_count_window_g3

0x0002,

0xfd8f,	// (0x00056fb8) popup_char_count_window_g

0x5ff0,	// (0x0004d219) popup_char_count_window_t1

0x23fd,	// (0x00049626) popup_fep_char_preview_window_ParamLimits

0x23fd,	// (0x00049626) popup_fep_char_preview_window

0x90e9,	// (0x00050312) vkb2_top_candi_pane_ParamLimits

0x90e9,	// (0x00050312) vkb2_top_candi_pane

0x9e92,	// (0x000510bb) cell_vkb2_top_candi_pane_ParamLimits

0x9e92,	// (0x000510bb) cell_vkb2_top_candi_pane

0x2969,	// (0x00049b92) bg_popup_fep_char_preview_window_ParamLimits

0x2969,	// (0x00049b92) bg_popup_fep_char_preview_window

0x2977,	// (0x00049ba0) popup_fep_char_preview_window_t1_ParamLimits

0x2977,	// (0x00049ba0) popup_fep_char_preview_window_t1

0x5ffe,	// (0x0004d227) bg_popup_fep_char_preview_window_g1

0x6006,	// (0x0004d22f) bg_popup_fep_char_preview_window_g2

0x600e,	// (0x0004d237) bg_popup_fep_char_preview_window_g3

0x6016,	// (0x0004d23f) bg_popup_fep_char_preview_window_g4

0x601e,	// (0x0004d247) bg_popup_fep_char_preview_window_g5

0x29b1,	// (0x00049bda) bg_popup_fep_char_preview_window_g6

0x6026,	// (0x0004d24f) bg_popup_fep_char_preview_window_g7

0x602e,	// (0x0004d257) bg_popup_fep_char_preview_window_g8

0x6036,	// (0x0004d25f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd96,	// (0x00056fbf) bg_popup_fep_char_preview_window_g

0x2106,	// (0x0004932f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x2106,	// (0x0004932f) cell_vkb2_top_candi_pane_g1

0x2114,	// (0x0004933d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x2114,	// (0x0004933d) cell_vkb2_top_candi_pane_g2

0x59df,	// (0x0004cc08) cell_vkb2_top_candi_pane_g3_ParamLimits

0x59df,	// (0x0004cc08) cell_vkb2_top_candi_pane_g3

0x29b9,	// (0x00049be2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x29b9,	// (0x00049be2) cell_vkb2_top_candi_pane_g4

0xf171,	// (0x0005639a) cell_vkb2_top_candi_pane_g5_ParamLimits

0xf171,	// (0x0005639a) cell_vkb2_top_candi_pane_g5

0x29da,	// (0x00049c03) cell_vkb2_top_candi_pane_g6_ParamLimits

0x29da,	// (0x00049c03) cell_vkb2_top_candi_pane_g6

0x0005,

0xfda9,	// (0x00056fd2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfda9,	// (0x00056fd2) cell_vkb2_top_candi_pane_g

0x29e8,	// (0x00049c11) cell_vkb2_top_candi_pane_t1

0x1ceb,	// (0x00048f14) aid_size_touch_slider_mark_ParamLimits

0x1ceb,	// (0x00048f14) aid_size_touch_slider_mark

0x9ad4,	// (0x00050cfd) grid_graphic2_catg_pane_ParamLimits

0x9ad4,	// (0x00050cfd) grid_graphic2_catg_pane

0x9c7e,	// (0x00050ea7) popup_grid_graphic2_window_t1_ParamLimits

0x9c7e,	// (0x00050ea7) popup_grid_graphic2_window_t1

0x9c94,	// (0x00050ebd) popup_grid_graphic2_window_t2_ParamLimits

0x9c94,	// (0x00050ebd) popup_grid_graphic2_window_t2

0x0001,

0xfd64,	// (0x00056f8d) popup_grid_graphic2_window_t_ParamLimits

0xfd64,	// (0x00056f8d) popup_grid_graphic2_window_t

0xb420,	// (0x00052649) bg_button_pane_cp05_ParamLimits

0x9e0c,	// (0x00051035) cell_graphic2_control_pane_g1_ParamLimits

0x9ef8,	// (0x00051121) cell_graphic2_catg_pane_ParamLimits

0x9ef8,	// (0x00051121) cell_graphic2_catg_pane

0xadbe,	// (0x00051fe7) bg_button_pane_cp12

0x9f0a,	// (0x00051133) cell_graphic2_catg_pane_g1

0x5572,	// (0x0004c79b) cell_tb_ext_pane_t1_ParamLimits

0x279f,	// (0x000499c8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x279f,	// (0x000499c8) vkb2_top_cell_right_narrow_pane

0x27b7,	// (0x000499e0) vkb2_top_cell_right_wide_pane_ParamLimits

0x27b7,	// (0x000499e0) vkb2_top_cell_right_wide_pane

0x1ea1,	// (0x000490ca) bg_vkb2_func_pane_ParamLimits

0x1ea1,	// (0x000490ca) bg_vkb2_func_pane

0x2828,	// (0x00049a51) vkb2_top_cell_left_pane_g1_ParamLimits

0x1ea1,	// (0x000490ca) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1ea1,	// (0x000490ca) bg_vkb2_fuc_pane_cp03

0x2886,	// (0x00049aaf) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xce0f,	// (0x00054038) bg_vkb2_func_pane_g1

0xce17,	// (0x00054040) bg_vkb2_func_pane_g2

0xce27,	// (0x00054050) bg_vkb2_func_pane_g3

0xce1f,	// (0x00054048) bg_vkb2_func_pane_g4

0xce2f,	// (0x00054058) bg_vkb2_func_pane_g5

0xce37,	// (0x00054060) bg_vkb2_func_pane_g6

0xce3f,	// (0x00054068) bg_vkb2_func_pane_g7

0xce47,	// (0x00054070) bg_vkb2_func_pane_g8

0xce07,	// (0x00054030) bg_vkb2_func_pane_g9

0x0008,

0x026c,	// (0x00047495) bg_vkb2_func_pane_g

0x1ea1,	// (0x000490ca) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1ea1,	// (0x000490ca) bg_vkb2_fuc_pane_cp01

0x2828,	// (0x00049a51) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2828,	// (0x00049a51) vkb2_top_cell_right_wide_pane_g1

0x1ea1,	// (0x000490ca) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1ea1,	// (0x000490ca) bg_vkb2_fuc_pane_cp02

0x2886,	// (0x00049aaf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2886,	// (0x00049aaf) vkb2_top_cell_right_narrow_pane_g1

0xb934,	// (0x00052b5d) aid_touch_area_decrease_ParamLimits

0xb934,	// (0x00052b5d) aid_touch_area_decrease

0xb96e,	// (0x00052b97) aid_touch_area_increase_ParamLimits

0xb96e,	// (0x00052b97) aid_touch_area_increase

0xb996,	// (0x00052bbf) aid_touch_area_mute_ParamLimits

0xb996,	// (0x00052bbf) aid_touch_area_mute

0xb9c6,	// (0x00052bef) aid_touch_area_slider_ParamLimits

0xb9c6,	// (0x00052bef) aid_touch_area_slider

0xba06,	// (0x00052c2f) popup_slider_window_g4_ParamLimits

0xba06,	// (0x00052c2f) popup_slider_window_g4

0xbaa9,	// (0x00052cd2) popup_slider_window_g5_ParamLimits

0xbaa9,	// (0x00052cd2) popup_slider_window_g5

0xbadd,	// (0x00052d06) popup_slider_window_g6_ParamLimits

0xbadd,	// (0x00052d06) popup_slider_window_g6

0x549c,	// (0x0004c6c5) popup_slider_window_t2_ParamLimits

0x549c,	// (0x0004c6c5) popup_slider_window_t2

0x0001,

0xfcc3,	// (0x00056eec) popup_slider_window_t_ParamLimits

0xfcc3,	// (0x00056eec) popup_slider_window_t

0xbaf9,	// (0x00052d22) slider_pane_ParamLimits

0xbaf9,	// (0x00052d22) slider_pane

0x603e,	// (0x0004d267) slider_pane_g1_ParamLimits

0x603e,	// (0x0004d267) slider_pane_g1

0x6052,	// (0x0004d27b) slider_pane_g2_ParamLimits

0x6052,	// (0x0004d27b) slider_pane_g2

0x6068,	// (0x0004d291) slider_pane_g3_ParamLimits

0x6068,	// (0x0004d291) slider_pane_g3

0x0003,

0xfdb6,	// (0x00056fdf) slider_pane_g_ParamLimits

0xfdb6,	// (0x00056fdf) slider_pane_g

0x8b46,	// (0x0004fd6f) popup_tb_float_extension_window_ParamLimits

0x8b46,	// (0x0004fd6f) popup_tb_float_extension_window

0x6094,	// (0x0004d2bd) aid_size_cell_tb_float_ext

0xadbe,	// (0x00051fe7) bg_popup_sub_window_cp28

0x60a0,	// (0x0004d2c9) grid_tb_float_ext_pane

0x60aa,	// (0x0004d2d3) cell_tb_float_ext_pane_ParamLimits

0x60aa,	// (0x0004d2d3) cell_tb_float_ext_pane

0x60c4,	// (0x0004d2ed) cell_tb_float_ext_pane_g1

0x60cd,	// (0x0004d2f6) grid_highlight_pane_cp12

0x8e37,	// (0x00050060) cell_last_hwr_side_pane_ParamLimits

0x8e37,	// (0x00050060) cell_last_hwr_side_pane

0xebaa,	// (0x00055dd3) cell_last_hwr_side_pane_g1

0x60d6,	// (0x0004d2ff) cell_last_hwr_side_pane_g2

0x0001,

0xfdbf,	// (0x00056fe8) cell_last_hwr_side_pane_g

0x9250,	// (0x00050479) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9250,	// (0x00050479) vkb2_area_bottom_space_btn_pane

0x2106,	// (0x0004932f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5f29,	// (0x0004d152) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x29e8,	// (0x00049c11) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2a07,	// (0x00049c30) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2a07,	// (0x00049c30) vkb2_area_bottom_space_btn_pane_g1

0x2a41,	// (0x00049c6a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2a41,	// (0x00049c6a) vkb2_area_bottom_space_btn_pane_g2

0x2a77,	// (0x00049ca0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2a77,	// (0x00049ca0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdc4,	// (0x00056fed) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdc4,	// (0x00056fed) vkb2_area_bottom_space_btn_pane_g

0x1f64,	// (0x0004918d) cel_fep_hwr_func_pane_ParamLimits

0x1f64,	// (0x0004918d) cel_fep_hwr_func_pane

0x8e0c,	// (0x00050035) cell_hwr_side_button_pane_ParamLimits

0x8e0c,	// (0x00050035) cell_hwr_side_button_pane

0x55a6,	// (0x0004c7cf) aid_area_touch_clock_ParamLimits

0xb420,	// (0x00052649) bg_uniindi_top_pane_ParamLimits

0x55b8,	// (0x0004c7e1) uniindi_top_pane_g1_ParamLimits

0x55ce,	// (0x0004c7f7) uniindi_top_pane_g2_ParamLimits

0x55da,	// (0x0004c803) uniindi_top_pane_g3_ParamLimits

0x55eb,	// (0x0004c814) uniindi_top_pane_g4_ParamLimits

0xfcea,	// (0x00056f13) uniindi_top_pane_g_ParamLimits

0x55f8,	// (0x0004c821) uniindi_top_pane_t1_ParamLimits

0xb420,	// (0x00052649) bg_vkb2_func_pane_cp01_ParamLimits

0xb420,	// (0x00052649) bg_vkb2_func_pane_cp01

0x60df,	// (0x0004d308) cel_fep_hwr_func_pane_g1_ParamLimits

0x60df,	// (0x0004d308) cel_fep_hwr_func_pane_g1

0xb420,	// (0x00052649) bg_vkb2_func_pane_cp02_ParamLimits

0xb420,	// (0x00052649) bg_vkb2_func_pane_cp02

0x60df,	// (0x0004d308) cell_hwr_side_button_pane_g1_ParamLimits

0x60df,	// (0x0004d308) cell_hwr_side_button_pane_g1

0xcd1d,	// (0x00053f46) status_pane_g4_ParamLimits

0xcd1d,	// (0x00053f46) status_pane_g4

0xcd37,	// (0x00053f60) status_pane_t1

0xea39,	// (0x00055c62) form2_midp_gauge_slider_cont_pane

0xea41,	// (0x00055c6a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xace8,	// (0x00051f11) form2_midp_gauge_slider_pane_t2_ParamLimits

0xacfc,	// (0x00051f25) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x00056d21) form2_midp_gauge_slider_pane_t_ParamLimits

0xea53,	// (0x00055c7c) form2_midp_slider_pane_ParamLimits

0x23bd,	// (0x000495e6) aid_size_cell_func_vkb2_ParamLimits

0x23bd,	// (0x000495e6) aid_size_cell_func_vkb2

0x6080,	// (0x0004d2a9) slider_pane_g4_ParamLimits

0x6080,	// (0x0004d2a9) slider_pane_g4

0x92cb,	// (0x000504f4) form2_midp_gauge_slider_pane_t2_cp01

0x92db,	// (0x00050504) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x92db,	// (0x00050504) form2_midp_gauge_slider_pane_t3_cp01

0x2aec,	// (0x00049d15) form2_midp_slider_pane_cp01

0xadbe,	// (0x00051fe7) navi_smil_pane

0x610f,	// (0x0004d338) navi_smil_pane_g1

0x6117,	// (0x0004d340) navi_smil_pane_t1

0x60ed,	// (0x0004d316) form2_midp_slider_pane_g1

0x60f6,	// (0x0004d31f) form2_midp_slider_pane_g2

0x60fe,	// (0x0004d327) form2_midp_slider_pane_g3

0x60ed,	// (0x0004d316) form2_midp_slider_pane_g4

0x9f13,	// (0x0005113c) form2_midp_slider_pane_g5

0x0004,

0xfdcd,	// (0x00056ff6) form2_midp_slider_pane_g

0x2ab1,	// (0x00049cda) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2ab1,	// (0x00049cda) vkb2_area_bottom_space_btn_pane_g4

0xa396,	// (0x000515bf) lc0_navi_pane_ParamLimits

0xa396,	// (0x000515bf) lc0_navi_pane

0xa400,	// (0x00051629) lc0_stat_indi_pane_ParamLimits

0xa400,	// (0x00051629) lc0_stat_indi_pane

0xa415,	// (0x0005163e) ls0_title_pane_ParamLimits

0xa415,	// (0x0005163e) ls0_title_pane

0xba2e,	// (0x00052c57) bg_popup_sub_pane_cp14_ParamLimits

0x558d,	// (0x0004c7b6) list_uniindi_pane_ParamLimits

0x5599,	// (0x0004c7c2) uniindi_top_pane_ParamLimits

0x5635,	// (0x0004c85e) list_single_uniindi_pane_g1_ParamLimits

0x5648,	// (0x0004c871) list_single_uniindi_pane_t1_ParamLimits

0x92fa,	// (0x00050523) lc0_stat_clock_pane_ParamLimits

0x92fa,	// (0x00050523) lc0_stat_clock_pane

0x9f1e,	// (0x00051147) lc0_stat_indi_pane_g1_ParamLimits

0x9f1e,	// (0x00051147) lc0_stat_indi_pane_g1

0x9f2b,	// (0x00051154) lc0_stat_indi_pane_g2_ParamLimits

0x9f2b,	// (0x00051154) lc0_stat_indi_pane_g2

0x0001,

0xfdd8,	// (0x00057001) lc0_stat_indi_pane_g_ParamLimits

0xfdd8,	// (0x00057001) lc0_stat_indi_pane_g

0x9307,	// (0x00050530) lc0_uni_indicator_pane_ParamLimits

0x9307,	// (0x00050530) lc0_uni_indicator_pane

0x9f38,	// (0x00051161) ls0_title_pane_g1_ParamLimits

0x9f38,	// (0x00051161) ls0_title_pane_g1

0x9f4c,	// (0x00051175) ls0_title_pane_t1_ParamLimits

0x9f4c,	// (0x00051175) ls0_title_pane_t1

0x9314,	// (0x0005053d) lc0_uni_indicator_pane_g1_ParamLimits

0x9314,	// (0x0005053d) lc0_uni_indicator_pane_g1

0x6125,	// (0x0004d34e) lc0_stat_clock_pane_t1

0x059b,	// (0x000477c4) main_ai5_pane

0x6133,	// (0x0004d35c) ai5_sk_pane_ParamLimits

0x6133,	// (0x0004d35c) ai5_sk_pane

0x9f7a,	// (0x000511a3) cell_ai5_widget_pane_ParamLimits

0x9f7a,	// (0x000511a3) cell_ai5_widget_pane

0x6140,	// (0x0004d369) aid_size_cell_widget_grid

0x6156,	// (0x0004d37f) bg_ai5_widget_pane_ParamLimits

0x6156,	// (0x0004d37f) bg_ai5_widget_pane

0x61c0,	// (0x0004d3e9) cell_ai5_widget_pane_g2

0x61d0,	// (0x0004d3f9) cell_ai5_widget_pane_g3

0x61ef,	// (0x0004d418) cell_ai5_widget_pane_g4

0x61fb,	// (0x0004d424) cell_ai5_widget_pane_g5

0x6207,	// (0x0004d430) cell_ai5_widget_pane_g6

0x6213,	// (0x0004d43c) cell_ai5_widget_pane_g7

0x625b,	// (0x0004d484) cell_ai5_widget_pane_t1_ParamLimits

0x625b,	// (0x0004d484) cell_ai5_widget_pane_t1

0x6278,	// (0x0004d4a1) cell_ai5_widget_pane_t2_ParamLimits

0x6278,	// (0x0004d4a1) cell_ai5_widget_pane_t2

0x6290,	// (0x0004d4b9) cell_ai5_widget_pane_t3_ParamLimits

0x6290,	// (0x0004d4b9) cell_ai5_widget_pane_t3

0x62a8,	// (0x0004d4d1) cell_ai5_widget_pane_t4_ParamLimits

0x62a8,	// (0x0004d4d1) cell_ai5_widget_pane_t4

0x62c2,	// (0x0004d4eb) cell_ai5_widget_pane_t5_ParamLimits

0x62c2,	// (0x0004d4eb) cell_ai5_widget_pane_t5

0x62e1,	// (0x0004d50a) cell_ai5_widget_pane_t6_ParamLimits

0x62e1,	// (0x0004d50a) cell_ai5_widget_pane_t6

0x62f3,	// (0x0004d51c) cell_ai5_widget_pane_t7_ParamLimits

0x62f3,	// (0x0004d51c) cell_ai5_widget_pane_t7

0x630c,	// (0x0004d535) cell_ai5_widget_pane_t8_ParamLimits

0x630c,	// (0x0004d535) cell_ai5_widget_pane_t8

0x0009,

0xfdf2,	// (0x0005701b) cell_ai5_widget_pane_t_ParamLimits

0xfdf2,	// (0x0005701b) cell_ai5_widget_pane_t

0x6358,	// (0x0004d581) grid_ai5_widget_pane

0xba2e,	// (0x00052c57) highlight_cell_ai5_widget_pane_ParamLimits

0xba2e,	// (0x00052c57) highlight_cell_ai5_widget_pane

0x9fe4,	// (0x0005120d) ai5_sk_left_pane

0x9fee,	// (0x00051217) ai5_sk_middle_pane

0x9ff8,	// (0x00051221) ai5_sk_right_pane

0x6370,	// (0x0004d599) bg_ai5_widget_pane_g1_ParamLimits

0x6370,	// (0x0004d599) bg_ai5_widget_pane_g1

0x637c,	// (0x0004d5a5) bg_ai5_widget_pane_g2_ParamLimits

0x637c,	// (0x0004d5a5) bg_ai5_widget_pane_g2

0x6388,	// (0x0004d5b1) bg_ai5_widget_pane_g3_ParamLimits

0x6388,	// (0x0004d5b1) bg_ai5_widget_pane_g3

0x6394,	// (0x0004d5bd) bg_ai5_widget_pane_g4_ParamLimits

0x6394,	// (0x0004d5bd) bg_ai5_widget_pane_g4

0x63a0,	// (0x0004d5c9) bg_ai5_widget_pane_g5_ParamLimits

0x63a0,	// (0x0004d5c9) bg_ai5_widget_pane_g5

0x63ac,	// (0x0004d5d5) bg_ai5_widget_pane_g6_ParamLimits

0x63ac,	// (0x0004d5d5) bg_ai5_widget_pane_g6

0x63b8,	// (0x0004d5e1) bg_ai5_widget_pane_g7_ParamLimits

0x63b8,	// (0x0004d5e1) bg_ai5_widget_pane_g7

0x63c4,	// (0x0004d5ed) bg_ai5_widget_pane_g8_ParamLimits

0x63c4,	// (0x0004d5ed) bg_ai5_widget_pane_g8

0x63d0,	// (0x0004d5f9) bg_ai5_widget_pane_g9_ParamLimits

0x63d0,	// (0x0004d5f9) bg_ai5_widget_pane_g9

0x0008,

0xfe07,	// (0x00057030) bg_ai5_widget_pane_g_ParamLimits

0xfe07,	// (0x00057030) bg_ai5_widget_pane_g

0x6403,	// (0x0004d62c) cell_shortcut_ai5_widget_pane_ParamLimits

0x6403,	// (0x0004d62c) cell_shortcut_ai5_widget_pane

0xc9c1,	// (0x00053bea) bg_cell_shortcut_ai5_widget_pane

0x6414,	// (0x0004d63d) cell_grid_ai5_widget_pane_g1

0x641d,	// (0x0004d646) highlight_cell_shortcut_ai5_widget_pane

0xce0f,	// (0x00054038) ai5_sk_left_pane_g1

0x6425,	// (0x0004d64e) ai5_sk_left_pane_g2

0x642d,	// (0x0004d656) ai5_sk_left_pane_g3

0x6435,	// (0x0004d65e) ai5_sk_left_pane_g4

0x0003,

0xfe1a,	// (0x00057043) ai5_sk_left_pane_g

0x643d,	// (0x0004d666) ai5_sk_left_pane_t1

0xce17,	// (0x00054040) ai5_sk_right_pane_g1

0x644b,	// (0x0004d674) ai5_sk_right_pane_g2

0x6453,	// (0x0004d67c) ai5_sk_right_pane_g3

0x645b,	// (0x0004d684) ai5_sk_right_pane_g4

0x0003,

0xfe23,	// (0x0005704c) ai5_sk_right_pane_g

0x6463,	// (0x0004d68c) ai5_sk_right_pane_t1

0xce17,	// (0x00054040) ai5_sk_middle_pane_g1

0xce0f,	// (0x00054038) ai5_sk_middle_pane_g2

0xce2f,	// (0x00054058) ai5_sk_middle_pane_g3

0x6453,	// (0x0004d67c) ai5_sk_middle_pane_g4

0x642d,	// (0x0004d656) ai5_sk_middle_pane_g5

0x6471,	// (0x0004d69a) ai5_sk_middle_pane_g6

0xa002,	// (0x0005122b) ai5_sk_middle_pane_g7

0x0006,

0xfe2c,	// (0x00057055) ai5_sk_middle_pane_g

0xa282,	// (0x000514ab) aid_touch_area_size_lc0_ParamLimits

0xa282,	// (0x000514ab) aid_touch_area_size_lc0

0x2135,	// (0x0004935e) cell_hwr_candidate_pane_t1_ParamLimits

0xcc2d,	// (0x00053e56) aid_touch_navi_pane

0xa508,	// (0x00051731) status_dt_navi_pane_ParamLimits

0xa508,	// (0x00051731) status_dt_navi_pane

0xa520,	// (0x00051749) status_dt_sta_pane_ParamLimits

0xa520,	// (0x00051749) status_dt_sta_pane

0xa00a,	// (0x00051233) dt_sta_controll_pane

0xa017,	// (0x00051240) dt_sta_indi_pane

0xa024,	// (0x0005124d) dt_sta_title_pane

0xb420,	// (0x00052649) bg_dt_sta_indi_pane_ParamLimits

0xb420,	// (0x00052649) bg_dt_sta_indi_pane

0x6479,	// (0x0004d6a2) dt_sta_battery_pane

0xa036,	// (0x0005125f) dt_sta_indi_pane_g1

0xa03f,	// (0x00051268) dt_sta_indi_pane_g2

0xa048,	// (0x00051271) dt_sta_indi_pane_g3

0x0002,

0xfe3b,	// (0x00057064) dt_sta_indi_pane_g

0xa051,	// (0x0005127a) dt_sta_signal_pane

0xba2e,	// (0x00052c57) bg_dt_sta_title_pane_ParamLimits

0xba2e,	// (0x00052c57) bg_dt_sta_title_pane

0x6481,	// (0x0004d6aa) dt_sta_title_pane_g1

0xa05a,	// (0x00051283) dt_sta_title_pane_t1_ParamLimits

0xa05a,	// (0x00051283) dt_sta_title_pane_t1

0xadbe,	// (0x00051fe7) bg_dt_sta_control_pane

0xa06f,	// (0x00051298) dt_sta_controll_pane_g1

0x6489,	// (0x0004d6b2) bg_dt_sta_title_pane_g1

0x6492,	// (0x0004d6bb) bg_dt_sta_title_pane_g2

0x649b,	// (0x0004d6c4) bg_dt_sta_title_pane_g3

0x0002,

0xfe42,	// (0x0005706b) bg_dt_sta_title_pane_g

0xebaa,	// (0x00055dd3) bg_dt_sta_indi_pane_g1

0x64a4,	// (0x0004d6cd) dt_sta_signal_pane_g1

0x64ac,	// (0x0004d6d5) dt_sta_signal_pane_g2

0x0001,

0xfe49,	// (0x00057072) dt_sta_signal_pane_g

0x64b4,	// (0x0004d6dd) dt_sta_battery_pane_g1

0x64bd,	// (0x0004d6e6) dt_sta_battery_pane_t1

0xebaa,	// (0x00055dd3) bg_dt_sta_control_pane_g1

0xc5a2,	// (0x000537cb) fep_china_uni_eep_pane

0xc5aa,	// (0x000537d3) fep_china_uni_entry_pane_ParamLimits

0xc5ba,	// (0x000537e3) popup_fep_china_uni_window_g1_ParamLimits

0xc5ca,	// (0x000537f3) popup_fep_china_uni_window_g2_ParamLimits

0xc5ca,	// (0x000537f3) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0005694c) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0005694c) popup_fep_china_uni_window_g

0x64cc,	// (0x0004d6f5) fep_china_uni_eep_pane_g1

0x64d4,	// (0x0004d6fd) fep_china_uni_eep_pane_t1

0x6106,	// (0x0004d32f) aid_touch_area_size_smil_player

0xccf0,	// (0x00053f19) lc0_clock_pane

0xcd2b,	// (0x00053f54) status_pane_g5_ParamLimits

0xcd2b,	// (0x00053f54) status_pane_g5

0x86d4,	// (0x0004f8fd) popup_keymap_window

0xcd09,	// (0x00053f32) status_icon_pane

0x61d0,	// (0x0004d3f9) cell_ai5_widget_pane_g3_ParamLimits

0x61ef,	// (0x0004d418) cell_ai5_widget_pane_g4_ParamLimits

0x61fb,	// (0x0004d424) cell_ai5_widget_pane_g5_ParamLimits

0x621f,	// (0x0004d448) cell_ai5_widget_pane_g8_ParamLimits

0x621f,	// (0x0004d448) cell_ai5_widget_pane_g8

0x6233,	// (0x0004d45c) cell_ai5_widget_pane_g9_ParamLimits

0x6233,	// (0x0004d45c) cell_ai5_widget_pane_g9

0x6247,	// (0x0004d470) cell_ai5_widget_pane_g10_ParamLimits

0x6247,	// (0x0004d470) cell_ai5_widget_pane_g10

0x64e3,	// (0x0004d70c) status_icon_pane_g1

0xadbe,	// (0x00051fe7) bg_popup_sub_pane_cp13

0x64eb,	// (0x0004d714) popup_keymap_window_t1

0xa20c,	// (0x00051435) control_pane_g6_ParamLimits

0xa20c,	// (0x00051435) control_pane_g6

0xa219,	// (0x00051442) control_pane_g7_ParamLimits

0xa219,	// (0x00051442) control_pane_g7

0xa226,	// (0x0005144f) control_pane_g8_ParamLimits

0xa226,	// (0x0005144f) control_pane_g8

0xa00a,	// (0x00051233) dt_sta_controll_pane_ParamLimits

0xa017,	// (0x00051240) dt_sta_indi_pane_ParamLimits

0xa024,	// (0x0005124d) dt_sta_title_pane_ParamLimits

0xb876,	// (0x00052a9f) aid_size_touch_scroll_bar_cale

0x0674,	// (0x0004789d) popup_discreet_window_ParamLimits

0x0674,	// (0x0004789d) popup_discreet_window

0x7e1e,	// (0x0004f047) popup_sk_window

0xd35f,	// (0x00054588) bg_popup_sub_pane_cp28_ParamLimits

0xd35f,	// (0x00054588) bg_popup_sub_pane_cp28

0x64f9,	// (0x0004d722) popup_discreet_window_g1_ParamLimits

0x64f9,	// (0x0004d722) popup_discreet_window_g1

0x6519,	// (0x0004d742) popup_discreet_window_t1_ParamLimits

0x6519,	// (0x0004d742) popup_discreet_window_t1

0x6537,	// (0x0004d760) popup_discreet_window_t2_ParamLimits

0x6537,	// (0x0004d760) popup_discreet_window_t2

0x0002,

0xfe4e,	// (0x00057077) popup_discreet_window_t_ParamLimits

0xfe4e,	// (0x00057077) popup_discreet_window_t

0x2b24,	// (0x00049d4d) popup_sk_window_g1

0x2b2e,	// (0x00049d57) popup_sk_window_g2

0x0001,

0xfe55,	// (0x0005707e) popup_sk_window_g

0x2b38,	// (0x00049d61) popup_sk_window_t1

0x2b46,	// (0x00049d6f) popup_sk_window_t1_copy1

0x61c0,	// (0x0004d3e9) cell_ai5_widget_pane_g2_ParamLimits

0x631e,	// (0x0004d547) cell_ai5_widget_pane_t9_ParamLimits

0x631e,	// (0x0004d547) cell_ai5_widget_pane_t9

0xadbe,	// (0x00051fe7) main_fep_fshwr2_pane

0x9342,	// (0x0005056b) aid_fshwr2_btn_pane

0x9351,	// (0x0005057a) aid_fshwr2_syb_pane

0x9363,	// (0x0005058c) aid_fshwr2_txt_pane

0x9372,	// (0x0005059b) fshwr2_func_candi_pane

0x9383,	// (0x000505ac) fshwr2_hwr_syb_pane

0x939e,	// (0x000505c7) fshwr2_icf_pane

0xadbe,	// (0x00051fe7) fshwr2_icf_bg_pane

0xa078,	// (0x000512a1) fshwr2_icf_pane_t1_ParamLimits

0xa078,	// (0x000512a1) fshwr2_icf_pane_t1

0xebaa,	// (0x00055dd3) fshwr2_func_candi_pane_g1

0x6589,	// (0x0004d7b2) fshwr2_func_candi_row_pane_ParamLimits

0x6589,	// (0x0004d7b2) fshwr2_func_candi_row_pane

0xa091,	// (0x000512ba) cell_fshwr2_syb_pane_ParamLimits

0xa091,	// (0x000512ba) cell_fshwr2_syb_pane

0xed7d,	// (0x00055fa6) fshwr2_hwr_syb_pane_g1_ParamLimits

0xed7d,	// (0x00055fa6) fshwr2_hwr_syb_pane_g1

0xadbe,	// (0x00051fe7) bg_popup_call_pane_cp01

0x659a,	// (0x0004d7c3) fshwr2_func_candi_cell_pane_ParamLimits

0x659a,	// (0x0004d7c3) fshwr2_func_candi_cell_pane

0x65c8,	// (0x0004d7f1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x65c8,	// (0x0004d7f1) fshwr2_func_candi_cell_bg_pane

0x65e2,	// (0x0004d80b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x65e2,	// (0x0004d80b) fshwr2_func_candi_cell_pane_g1

0x6602,	// (0x0004d82b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6602,	// (0x0004d82b) fshwr2_func_candi_cell_pane_t1

0xadbe,	// (0x00051fe7) bg_button_pane_cp08

0xc9c1,	// (0x00053bea) cell_fshwr2_syb_bg_pane

0xa0ab,	// (0x000512d4) cell_fshwr2_syb_bg_pane_g1

0xa0b3,	// (0x000512dc) cell_fshwr2_syb_bg_pane_t1

0xba2e,	// (0x00052c57) main_tmo_pane

0xa8b5,	// (0x00051ade) uni_indicator_pane_g1_ParamLimits

0xa8ca,	// (0x00051af3) uni_indicator_pane_g2_ParamLimits

0xdd05,	// (0x00054f2e) uni_indicator_pane_g3_ParamLimits

0xdd1b,	// (0x00054f44) uni_indicator_pane_g4_ParamLimits

0xdd1b,	// (0x00054f44) uni_indicator_pane_g4

0xdd2f,	// (0x00054f58) uni_indicator_pane_g5_ParamLimits

0xdd2f,	// (0x00054f58) uni_indicator_pane_g5

0xdd43,	// (0x00054f6c) uni_indicator_pane_g6_ParamLimits

0xdd43,	// (0x00054f6c) uni_indicator_pane_g6

0xf922,	// (0x00056b4b) uni_indicator_pane_g_ParamLimits

0xb3d3,	// (0x000525fc) popup_tmo_note_window_ParamLimits

0xb3d3,	// (0x000525fc) popup_tmo_note_window

0x239f,	// (0x000495c8) fshwr2_bg_pane

0x65f3,	// (0x0004d81c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x65f3,	// (0x0004d81c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe5a,	// (0x00057083) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe5a,	// (0x00057083) fshwr2_func_candi_cell_pane_g

0xebaa,	// (0x00055dd3) bg_popup_window_pane_cp01

0x6615,	// (0x0004d83e) bg_popup_window_pane_g1_cp01

0x661e,	// (0x0004d847) bg_popup_window_pane_cp22_ParamLimits

0x661e,	// (0x0004d847) bg_popup_window_pane_cp22

0x662c,	// (0x0004d855) listscroll_tmo_link_pane_ParamLimits

0x662c,	// (0x0004d855) listscroll_tmo_link_pane

0x666c,	// (0x0004d895) popup_tmo_note_window_g1_ParamLimits

0x666c,	// (0x0004d895) popup_tmo_note_window_g1

0x6679,	// (0x0004d8a2) tmo_note_info_pane_ParamLimits

0x6679,	// (0x0004d8a2) tmo_note_info_pane

0xa0c2,	// (0x000512eb) list_tmo_note_info_pane_g1_ParamLimits

0xa0c2,	// (0x000512eb) list_tmo_note_info_pane_g1

0x6693,	// (0x0004d8bc) list_tmo_note_info_pane_g2_ParamLimits

0x6693,	// (0x0004d8bc) list_tmo_note_info_pane_g2

0x0001,

0xfe5f,	// (0x00057088) list_tmo_note_info_pane_g_ParamLimits

0xfe5f,	// (0x00057088) list_tmo_note_info_pane_g

0x66af,	// (0x0004d8d8) list_tmo_note_info_text_pane_ParamLimits

0x66af,	// (0x0004d8d8) list_tmo_note_info_text_pane

0x66f1,	// (0x0004d91a) list_tmo_link_pane

0x66fe,	// (0x0004d927) scroll_pane_cp20

0x670b,	// (0x0004d934) list_single_tmo_link_pane_ParamLimits

0x670b,	// (0x0004d934) list_single_tmo_link_pane

0x671b,	// (0x0004d944) list_single_tmo_link_pane_t1

0x6729,	// (0x0004d952) list_tmo_note_info_text_pane_t1_ParamLimits

0x6729,	// (0x0004d952) list_tmo_note_info_text_pane_t1

0x9735,	// (0x0005095e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9735,	// (0x0005095e) aid_size_touch_scroll_bar_cp01

0x82f6,	// (0x0004f51f) aid_size_touch_slider_marker

0x7e0e,	// (0x0004f037) popup_settings_window_ParamLimits

0x7e0e,	// (0x0004f037) popup_settings_window

0x350a,	// (0x0004a733) popup_candi_list_indi_window

0xcc2d,	// (0x00053e56) aid_touch_navi_pane_ParamLimits

0x22fa,	// (0x00049523) rs_clock_indi_pane

0x2303,	// (0x0004952c) sctrl_sk_bottom_pane_ParamLimits

0x2314,	// (0x0004953d) sctrl_sk_top_pane_ParamLimits

0x2417,	// (0x00049640) popup_fep_tooltip_window

0x6140,	// (0x0004d369) aid_size_cell_widget_grid_ParamLimits

0x61b4,	// (0x0004d3dd) cell_ai5_widget_pane_g1_ParamLimits

0x61b4,	// (0x0004d3dd) cell_ai5_widget_pane_g1

0x6207,	// (0x0004d430) cell_ai5_widget_pane_g6_ParamLimits

0x6213,	// (0x0004d43c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfddd,	// (0x00057006) cell_ai5_widget_pane_g_ParamLimits

0xfddd,	// (0x00057006) cell_ai5_widget_pane_g

0x6342,	// (0x0004d56b) cell_ai5_widget_pane_t10_ParamLimits

0x6342,	// (0x0004d56b) cell_ai5_widget_pane_t10

0x6358,	// (0x0004d581) grid_ai5_widget_pane_ParamLimits

0x63dc,	// (0x0004d605) cell_contacts_ai5_widget_pane_ParamLimits

0x63dc,	// (0x0004d605) cell_contacts_ai5_widget_pane

0x654c,	// (0x0004d775) popup_discreet_window_t3_ParamLimits

0x654c,	// (0x0004d775) popup_discreet_window_t3

0x2bb2,	// (0x00049ddb) popup_fshwr2_char_preview_window_ParamLimits

0x2bb2,	// (0x00049ddb) popup_fshwr2_char_preview_window

0xa0d9,	// (0x00051302) tmo_note_info_pane_t1

0xa0ee,	// (0x00051317) tmo_note_info_pane_t2

0xa107,	// (0x00051330) tmo_note_info_pane_t3

0x66cd,	// (0x0004d8f6) tmo_note_info_pane_t4

0x66df,	// (0x0004d908) tmo_note_info_pane_t5

0x0004,

0xfe64,	// (0x0005708d) tmo_note_info_pane_t

0x66f1,	// (0x0004d91a) list_tmo_link_pane_ParamLimits

0x66fe,	// (0x0004d927) scroll_pane_cp20_ParamLimits

0xadbe,	// (0x00051fe7) bg_popup_fep_char_preview_window_cp01

0x6742,	// (0x0004d96b) popup_fshwr2_char_preview_window_t1

0x6750,	// (0x0004d979) popup_candi_list_indi_window_g1

0x6759,	// (0x0004d982) bg_cell_contacts_ai5_widget_pane

0x6765,	// (0x0004d98e) cell_contacts_ai5_widget_pane_g1

0x6778,	// (0x0004d9a1) cell_contacts_ai5_widget_pane_g2

0x6784,	// (0x0004d9ad) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe6f,	// (0x00057098) cell_contacts_ai5_widget_pane_g

0x6796,	// (0x0004d9bf) cell_contacts_ai5_widget_pane_t1

0xba2e,	// (0x00052c57) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6810,	// (0x0004da39) settings_container_pane

0xc9c1,	// (0x00053bea) listscroll_set_pane_copy1

0xe551,	// (0x0005577a) scroll_pane_cp121_copy1

0x681c,	// (0x0004da45) set_content_pane_copy1

0x6824,	// (0x0004da4d) aid_height_set_list_copy1_ParamLimits

0x6824,	// (0x0004da4d) aid_height_set_list_copy1

0xccde,	// (0x00053f07) aid_size_parent_copy1_ParamLimits

0xccde,	// (0x00053f07) aid_size_parent_copy1

0x6830,	// (0x0004da59) button_value_adjust_pane_cp6_copy1_ParamLimits

0x6830,	// (0x0004da59) button_value_adjust_pane_cp6_copy1

0xc155,	// (0x0005337e) list_highlight_pane_cp2_copy1_ParamLimits

0xc155,	// (0x0005337e) list_highlight_pane_cp2_copy1

0x6844,	// (0x0004da6d) list_set_pane_copy1_ParamLimits

0x6844,	// (0x0004da6d) list_set_pane_copy1

0x67ab,	// (0x0004d9d4) main_pane_set_t1_copy1_ParamLimits

0x67ab,	// (0x0004d9d4) main_pane_set_t1_copy1

0x67e5,	// (0x0004da0e) main_pane_set_t2_copy1_ParamLimits

0x67e5,	// (0x0004da0e) main_pane_set_t2_copy1

0x68f1,	// (0x0004db1a) main_pane_set_t3_copy1

0x68ff,	// (0x0004db28) main_pane_set_t4_copy1

0x6804,	// (0x0004da2d) set_content_pane_g1_copy1_ParamLimits

0x6804,	// (0x0004da2d) set_content_pane_g1_copy1

0x690d,	// (0x0004db36) setting_code_pane_copy1

0x6915,	// (0x0004db3e) setting_slider_graphic_pane_copy1

0x6915,	// (0x0004db3e) setting_slider_pane_copy1

0x6915,	// (0x0004db3e) setting_text_pane_copy1

0x6915,	// (0x0004db3e) setting_volume_pane_copy1

0x690d,	// (0x0004db36) settings_code_pane_cp2_copy1

0x691d,	// (0x0004db46) settings_code_pane_cp_copy1_ParamLimits

0x691d,	// (0x0004db46) settings_code_pane_cp_copy1

0x2bc6,	// (0x00049def) volume_set_pane_copy1

0x6931,	// (0x0004db5a) volume_set_pane_g10_copy1

0x6939,	// (0x0004db62) volume_set_pane_g1_copy1

0x6941,	// (0x0004db6a) volume_set_pane_g2_copy1

0x6949,	// (0x0004db72) volume_set_pane_g3_copy1

0x6951,	// (0x0004db7a) volume_set_pane_g4_copy1

0x6959,	// (0x0004db82) volume_set_pane_g5_copy1

0x6961,	// (0x0004db8a) volume_set_pane_g6_copy1

0x6969,	// (0x0004db92) volume_set_pane_g7_copy1

0x6971,	// (0x0004db9a) volume_set_pane_g8_copy1

0x6979,	// (0x0004dba2) volume_set_pane_g9_copy1

0xae2e,	// (0x00052057) bg_set_opt_pane_cp_copy1_ParamLimits

0xae2e,	// (0x00052057) bg_set_opt_pane_cp_copy1

0x2bce,	// (0x00049df7) setting_slider_pane_t1_copy1_ParamLimits

0x2bce,	// (0x00049df7) setting_slider_pane_t1_copy1

0x2bec,	// (0x00049e15) setting_slider_pane_t2_copy1_ParamLimits

0x2bec,	// (0x00049e15) setting_slider_pane_t2_copy1

0x2c06,	// (0x00049e2f) setting_slider_pane_t3_copy1_ParamLimits

0x2c06,	// (0x00049e2f) setting_slider_pane_t3_copy1

0x2c1e,	// (0x00049e47) slider_set_pane_copy1_ParamLimits

0x2c1e,	// (0x00049e47) slider_set_pane_copy1

0xba89,	// (0x00052cb2) set_opt_bg_pane_g1_copy2

0xba91,	// (0x00052cba) set_opt_bg_pane_g2_copy2

0x6981,	// (0x0004dbaa) set_opt_bg_pane_g3_copy2

0xbaa1,	// (0x00052cca) set_opt_bg_pane_g4_copy2

0xc06b,	// (0x00053294) set_opt_bg_pane_g5_copy2

0xc073,	// (0x0005329c) set_opt_bg_pane_g6_copy2

0x698b,	// (0x0004dbb4) set_opt_bg_pane_g7_copy2

0x6993,	// (0x0004dbbc) set_opt_bg_pane_g8_copy2

0x699d,	// (0x0004dbc6) set_opt_bg_pane_g9_copy2

0x69a7,	// (0x0004dbd0) aid_size_touch_slider_mark_copy1_ParamLimits

0x69a7,	// (0x0004dbd0) aid_size_touch_slider_mark_copy1

0x69bb,	// (0x0004dbe4) slider_set_pane_g1_copy1

0x69c4,	// (0x0004dbed) slider_set_pane_g2_copy1

0xebe0,	// (0x00055e09) slider_set_pane_g3_copy1_ParamLimits

0xebe0,	// (0x00055e09) slider_set_pane_g3_copy1

0xebf4,	// (0x00055e1d) slider_set_pane_g4_copy1_ParamLimits

0xebf4,	// (0x00055e1d) slider_set_pane_g4_copy1

0xec0c,	// (0x00055e35) slider_set_pane_g5_copy1_ParamLimits

0xec0c,	// (0x00055e35) slider_set_pane_g5_copy1

0xebe0,	// (0x00055e09) slider_set_pane_g6_copy1_ParamLimits

0xebe0,	// (0x00055e09) slider_set_pane_g6_copy1

0x69cc,	// (0x0004dbf5) slider_set_pane_g7_copy1_ParamLimits

0x69cc,	// (0x0004dbf5) slider_set_pane_g7_copy1

0xadd2,	// (0x00051ffb) bg_set_opt_pane_cp2_copy1

0x69e2,	// (0x0004dc0b) setting_slider_graphic_pane_g1_copy1

0x69eb,	// (0x0004dc14) setting_slider_graphic_pane_t1_copy1

0x69fb,	// (0x0004dc24) setting_slider_graphic_pane_t2_copy1

0x6a0b,	// (0x0004dc34) slider_set_pane_cp_copy1

0x6a1b,	// (0x0004dc44) input_focus_pane_cp1_copy1

0x6a24,	// (0x0004dc4d) list_set_text_pane_copy1

0x6a2c,	// (0x0004dc55) setting_text_pane_g1_copy1

0x4253,	// (0x0004b47c) set_text_pane_t1_copy1

0x6a1b,	// (0x0004dc44) input_focus_pane_cp2_copy1

0x6a2c,	// (0x0004dc55) setting_code_pane_g1_copy1

0x6a35,	// (0x0004dc5e) setting_code_pane_t1_copy1

0xd95c,	// (0x00054b85) list_set_graphic_pane_copy1

0xadd2,	// (0x00051ffb) bg_set_opt_pane_cp4_copy1

0xc747,	// (0x00053970) list_set_graphic_pane_g1_copy1_ParamLimits

0xc747,	// (0x00053970) list_set_graphic_pane_g1_copy1

0x6a43,	// (0x0004dc6c) list_set_graphic_pane_g2_copy1

0xc75f,	// (0x00053988) list_set_graphic_pane_t1_copy1_ParamLimits

0xc75f,	// (0x00053988) list_set_graphic_pane_t1_copy1

0xebaa,	// (0x00055dd3) rs_clock_indi_pane_g1

0x6a4b,	// (0x0004dc74) rs_clock_indi_pane_t1

0x6a59,	// (0x0004dc82) rs_indi_pane

0x6a61,	// (0x0004dc8a) rs_indi_pane_g1

0x6a6a,	// (0x0004dc93) rs_indi_pane_g2

0x6a73,	// (0x0004dc9c) rs_indi_pane_g3

0x0002,

0xfe76,	// (0x0005709f) rs_indi_pane_g

0xc9c1,	// (0x00053bea) bg_popup_preview_window_pane_cp03

0x6a7c,	// (0x0004dca5) popup_fep_tooltip_window_t1

0x4b97,	// (0x0004bdc0) popup_note2_window_g2_ParamLimits

0x4b97,	// (0x0004bdc0) popup_note2_window_g2

0x0001,

0xfc33,	// (0x00056e5c) popup_note2_window_g_ParamLimits

0xfc33,	// (0x00056e5c) popup_note2_window_g

0x504e,	// (0x0004c277) bg_popup_sub_pane_cp11_ParamLimits

0x505b,	// (0x0004c284) cell_ai3_links_pane_g1_ParamLimits

0x5072,	// (0x0004c29b) cell_ai3_links_pane_t1

0x4253,	// (0x0004b47c) set_text_pane_t1_copy1_ParamLimits

0xa141,	// (0x0005136a) cell_graphic_popup_pane_cp2_ParamLimits

0xa141,	// (0x0005136a) cell_graphic_popup_pane_cp2

0xa11c,	// (0x00051345) cell_graphic_popup_pane_g1_cp2

0xb689,	// (0x000528b2) cell_graphic_popup_pane_g2_cp2

0x6a8a,	// (0x0004dcb3) cell_graphic_popup_pane_g3_cp2

0x6a92,	// (0x0004dcbb) cell_graphic_popup_pane_t2_cp2

0xb69a,	// (0x000528c3) grid_highlight_pane_cp3_cp2

0xc2fc,	// (0x00053525) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xba2e,	// (0x00052c57) main_tmo_pane_ParamLimits

0xb3c7,	// (0x000525f0) popup_tmo_big_image_note_window

0x61a4,	// (0x0004d3cd) cell_ai5_widget_list_pane

0x61ac,	// (0x0004d3d5) cell_ai5_widget_lrg_icon_pane

0xa0d9,	// (0x00051302) tmo_note_info_pane_t1_ParamLimits

0xa0ee,	// (0x00051317) tmo_note_info_pane_t2_ParamLimits

0xa107,	// (0x00051330) tmo_note_info_pane_t3_ParamLimits

0x66cd,	// (0x0004d8f6) tmo_note_info_pane_t4_ParamLimits

0x66df,	// (0x0004d908) tmo_note_info_pane_t5_ParamLimits

0xfe64,	// (0x0005708d) tmo_note_info_pane_t_ParamLimits

0x6810,	// (0x0004da39) settings_container_pane_ParamLimits

0x6a13,	// (0x0004dc3c) indicator_popup_pane_cp5

0x6a13,	// (0x0004dc3c) indicator_popup_pane_cp6

0xd95c,	// (0x00054b85) list_set_graphic_pane_copy1_ParamLimits

0xadbe,	// (0x00051fe7) bg_popup_window_pane_cp23

0x6aa0,	// (0x0004dcc9) popup_tmo_big_image_note_window_g1

0x6aa9,	// (0x0004dcd2) popup_tmo_big_image_note_window_t1

0x6ab9,	// (0x0004dce2) popup_tmo_big_image_note_window_t2

0x6ac9,	// (0x0004dcf2) popup_tmo_big_image_note_window_t3

0x0002,

0xfe7d,	// (0x000570a6) popup_tmo_big_image_note_window_t

0x6ad9,	// (0x0004dd02) cell_ai5_widget_lrg_icon_pane_g1

0x6ae1,	// (0x0004dd0a) cell_ai5_widget_lrg_icon_pane_t1

0x6aef,	// (0x0004dd18) cell_ai5_widget_list_row_pane_ParamLimits

0x6aef,	// (0x0004dd18) cell_ai5_widget_list_row_pane

0x6b07,	// (0x0004dd30) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x6b07,	// (0x0004dd30) cell_ai5_widget_list_row_pane_g1

0x6b14,	// (0x0004dd3d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x6b14,	// (0x0004dd3d) cell_ai5_widget_list_row_pane_t1

0x6b2c,	// (0x0004dd55) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6b2c,	// (0x0004dd55) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfe84,	// (0x000570ad) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe84,	// (0x000570ad) cell_ai5_widget_list_row_pane_t

0x059b,	// (0x000477c4) main_fep_vtchi_ss_pane

0x2c43,	// (0x00049e6c) popup_fep_char_pre_window

0x2c4b,	// (0x00049e74) popup_fep_ituss_window

0x2c6c,	// (0x00049e95) popup_fep_vkbss_window

0x6b54,	// (0x0004dd7d) grid_vkbss_keypad_pane_ParamLimits

0x6b54,	// (0x0004dd7d) grid_vkbss_keypad_pane

0x6b64,	// (0x0004dd8d) ituss_keypad_pane

0x2c97,	// (0x00049ec0) aid_vkbss_key_offset_ParamLimits

0x2c97,	// (0x00049ec0) aid_vkbss_key_offset

0x2ca3,	// (0x00049ecc) cell_vkbss_key_pane_ParamLimits

0x2ca3,	// (0x00049ecc) cell_vkbss_key_pane

0xdf95,	// (0x000551be) bg_cell_vkbss_key_g1_ParamLimits

0xdf95,	// (0x000551be) bg_cell_vkbss_key_g1

0x6b74,	// (0x0004dd9d) cell_vkbss_key_3p_pane_ParamLimits

0x6b74,	// (0x0004dd9d) cell_vkbss_key_3p_pane

0x6b8e,	// (0x0004ddb7) cell_vkbss_key_g1_ParamLimits

0x6b8e,	// (0x0004ddb7) cell_vkbss_key_g1

0x6ba8,	// (0x0004ddd1) cell_vkbss_key_t1_ParamLimits

0x6ba8,	// (0x0004ddd1) cell_vkbss_key_t1

0x2cb9,	// (0x00049ee2) cell_ituss_key_pane_ParamLimits

0x2cb9,	// (0x00049ee2) cell_ituss_key_pane

0x6bd3,	// (0x0004ddfc) bg_cell_ituss_key_g1_ParamLimits

0x6bd3,	// (0x0004ddfc) bg_cell_ituss_key_g1

0x6bdf,	// (0x0004de08) cell_ituss_key_pane_g1_ParamLimits

0x6bdf,	// (0x0004de08) cell_ituss_key_pane_g1

0x6bf3,	// (0x0004de1c) cell_ituss_key_pane_g2_ParamLimits

0x6bf3,	// (0x0004de1c) cell_ituss_key_pane_g2

0x0001,

0xfe8b,	// (0x000570b4) cell_ituss_key_pane_g_ParamLimits

0xfe8b,	// (0x000570b4) cell_ituss_key_pane_g

0x6c21,	// (0x0004de4a) cell_ituss_key_t1_ParamLimits

0x6c21,	// (0x0004de4a) cell_ituss_key_t1

0x6c57,	// (0x0004de80) cell_ituss_key_t2_ParamLimits

0x6c57,	// (0x0004de80) cell_ituss_key_t2

0x6c88,	// (0x0004deb1) cell_ituss_key_t3_ParamLimits

0x6c88,	// (0x0004deb1) cell_ituss_key_t3

0x6cc2,	// (0x0004deeb) cell_ituss_key_t4_ParamLimits

0x6cc2,	// (0x0004deeb) cell_ituss_key_t4

0x0003,

0xfe90,	// (0x000570b9) cell_ituss_key_t_ParamLimits

0xfe90,	// (0x000570b9) cell_ituss_key_t

0x6cfc,	// (0x0004df25) cell_vkbss_key_3p_pane_g1

0x6d04,	// (0x0004df2d) cell_vkbss_key_3p_pane_g2

0x6d0c,	// (0x0004df35) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe99,	// (0x000570c2) cell_vkbss_key_3p_pane_g

0xadbe,	// (0x00051fe7) bg_popup_fep_char_preview_window_cp02

0x6d14,	// (0x0004df3d) popup_fep_char_pre_window_t1

0x9fda,	// (0x00051203) main_ai5_sk_pane

0x6759,	// (0x0004d982) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6765,	// (0x0004d98e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6778,	// (0x0004d9a1) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6784,	// (0x0004d9ad) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe6f,	// (0x00057098) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6796,	// (0x0004d9bf) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xba2e,	// (0x00052c57) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xa124,	// (0x0005134d) main_ai5_sk_pane_g1

0xd19d,	// (0x000543c6) popup_query_code_window_g1

0x2c61,	// (0x00049e8a) popup_fep_vkb_icf_pane

0x2c75,	// (0x00049e9e) popup_fep_vtchi_icf_pane

0xba2e,	// (0x00052c57) bg_icf_pane

0x6d23,	// (0x0004df4c) list_vkb_icf_pane

0xba2e,	// (0x00052c57) bg_icf_pane_cp01

0x6d2f,	// (0x0004df58) vtchi_icf_list_pane

0x6d40,	// (0x0004df69) list_vkb_icf_pane_t1_ParamLimits

0x6d40,	// (0x0004df69) list_vkb_icf_pane_t1

0x6d59,	// (0x0004df82) vtchi_icf_list_pane_t1_ParamLimits

0x6d59,	// (0x0004df82) vtchi_icf_list_pane_t1

0x2c4b,	// (0x00049e74) popup_fep_ituss_window_ParamLimits

0x2c75,	// (0x00049e9e) popup_fep_vtchi_icf_pane_ParamLimits

0x6b64,	// (0x0004dd8d) ituss_keypad_pane_ParamLimits

0x2c8b,	// (0x00049eb4) ituss_sks_pane

0xba2e,	// (0x00052c57) bg_icf_pane_ParamLimits

0x2c34,	// (0x00049e5d) icf_edit_indi_pane_ParamLimits

0x2c34,	// (0x00049e5d) icf_edit_indi_pane

0x6d23,	// (0x0004df4c) list_vkb_icf_pane_ParamLimits

0xba2e,	// (0x00052c57) bg_icf_pane_cp01_ParamLimits

0x2c34,	// (0x00049e5d) icf_edit_indi_pane_cp01_ParamLimits

0x2c34,	// (0x00049e5d) icf_edit_indi_pane_cp01

0x6d37,	// (0x0004df60) vtchi_query_pane

0xed7d,	// (0x00055fa6) icf_edit_indi_pane_g1_ParamLimits

0xed7d,	// (0x00055fa6) icf_edit_indi_pane_g1

0x73a1,	// (0x0004e5ca) icf_edit_indi_pane_g2_ParamLimits

0x73a1,	// (0x0004e5ca) icf_edit_indi_pane_g2

0x0001,

0xfeb1,	// (0x000570da) icf_edit_indi_pane_g_ParamLimits

0xfeb1,	// (0x000570da) icf_edit_indi_pane_g

0x73b0,	// (0x0004e5d9) icf_edit_indi_pane_t1

0x6d7c,	// (0x0004dfa5) bg_input_focus_pane_cp042

0xb86d,	// (0x00052a96) vtchi_button_pane

0x6d85,	// (0x0004dfae) vtchi_query_pane_t1

0x6d93,	// (0x0004dfbc) vtchi_query_pane_t2

0x6da1,	// (0x0004dfca) vtchi_query_pane_t3

0x0002,

0xfea0,	// (0x000570c9) vtchi_query_pane_t

0xadbe,	// (0x00051fe7) bg_button_pane_cp13

0x6daf,	// (0x0004dfd8) vtchi_button_pane_g1

0x6db7,	// (0x0004dfe0) ituss_sks_pane_g1

0x6dc2,	// (0x0004dfeb) ituss_sks_pane_g2

0x0001,

0xfea7,	// (0x000570d0) ituss_sks_pane_g

0x7385,	// (0x0004e5ae) ituss_sks_pane_t1

0x7393,	// (0x0004e5bc) ituss_sks_pane_t2

0x0001,

0xfeac,	// (0x000570d5) ituss_sks_pane_t

0xe863,	// (0x00055a8c) indicator_nsta_pane_cp_g1

0xe86c,	// (0x00055a95) indicator_nsta_pane_cp_g2

0xe874,	// (0x00055a9d) indicator_nsta_pane_cp_g3

0xe87c,	// (0x00055aa5) indicator_nsta_pane_cp_g4

0xe884,	// (0x00055aad) indicator_nsta_pane_cp_g5

0xe884,	// (0x00055aad) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x00056cd7) indicator_nsta_pane_cp_g

0x9def,	// (0x00051018) cell_graphic2_pane_t2_ParamLimits

0x9def,	// (0x00051018) cell_graphic2_pane_t2

0x0001,

0xfd79,	// (0x00056fa2) cell_graphic2_pane_t_ParamLimits

0xfd79,	// (0x00056fa2) cell_graphic2_pane_t

0x9e22,	// (0x0005104b) cell_graphic2_control_pane_t1

0x9b25,	// (0x00050d4e) signal_pane_g3_ParamLimits

0x9b25,	// (0x00050d4e) signal_pane_g3

0x9b39,	// (0x00050d62) signal_pane_g4_ParamLimits

0x9b39,	// (0x00050d62) signal_pane_g4

0x6b3e,	// (0x0004dd67) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x6b3e,	// (0x0004dd67) cell_ai5_widget_list_row_pane_t3

0x6c0f,	// (0x0004de38) cell_ituss_key_pane_t1_ParamLimits

0x6c0f,	// (0x0004de38) cell_ituss_key_pane_t1

0xcedd,	// (0x00054106) form_field_data_wide_pane_vc_t2_ParamLimits

0xcedd,	// (0x00054106) form_field_data_wide_pane_vc_t2

0xcef1,	// (0x0005411a) form_field_data_wide_pane_vc_t3_ParamLimits

0xcef1,	// (0x0005411a) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x00056a33) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x00056a33) form_field_data_wide_pane_vc_t

0xe591,	// (0x000557ba) form_field_slider_wide_pane_vc_t3_ParamLimits

0xe591,	// (0x000557ba) form_field_slider_wide_pane_vc_t3

0xe66b,	// (0x00055894) form_field_popup_wide_pane_vc_t2_ParamLimits

0xe66b,	// (0x00055894) form_field_popup_wide_pane_vc_t2

0xe682,	// (0x000558ab) form_field_popup_wide_pane_vc_t3_ParamLimits

0xe682,	// (0x000558ab) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9d,	// (0x00056cc6) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9d,	// (0x00056cc6) form_field_popup_wide_pane_vc_t

0x9342,	// (0x0005056b) aid_fshwr2_btn_pane_ParamLimits

0x9351,	// (0x0005057a) aid_fshwr2_syb_pane_ParamLimits

0x9363,	// (0x0005058c) aid_fshwr2_txt_pane_ParamLimits

0x239f,	// (0x000495c8) fshwr2_bg_pane_ParamLimits

0x9372,	// (0x0005059b) fshwr2_func_candi_pane_ParamLimits

0x9383,	// (0x000505ac) fshwr2_hwr_syb_pane_ParamLimits

0x939e,	// (0x000505c7) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large

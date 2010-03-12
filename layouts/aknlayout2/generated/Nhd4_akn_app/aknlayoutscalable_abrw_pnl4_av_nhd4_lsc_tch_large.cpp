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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00046dfe };

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
0x955b,	// (0x00050359) Screen

0x9567,	// (0x00050365) application_window_ParamLimits

0x9567,	// (0x00050365) application_window

0xafaf,	// (0x00051dad) screen_g1

0x778f,	// (0x0004e58d) area_bottom_pane_ParamLimits

0x778f,	// (0x0004e58d) area_bottom_pane

0x0454,	// (0x00047252) area_top_pane_ParamLimits

0x0454,	// (0x00047252) area_top_pane

0x04f2,	// (0x000472f0) main_pane_ParamLimits

0x04f2,	// (0x000472f0) main_pane

0xafb9,	// (0x00051db7) misc_graphics

0x9db2,	// (0x00050bb0) battery_pane_ParamLimits

0x9db2,	// (0x00050bb0) battery_pane

0xd038,	// (0x00053e36) bg_status_flat_pane_g8

0xd040,	// (0x00053e3e) bg_status_flat_pane_g9

0xc745,	// (0x00053543) context_pane_ParamLimits

0xc745,	// (0x00053543) context_pane

0x9f1d,	// (0x00050d1b) navi_pane_ParamLimits

0x9f1d,	// (0x00050d1b) navi_pane

0x9f95,	// (0x00050d93) signal_pane_ParamLimits

0x9f95,	// (0x00050d93) signal_pane

0x0008,

0xf87f,	// (0x0005667d) bg_status_flat_pane_g

0xa025,	// (0x00050e23) status_pane_g1_ParamLimits

0xa025,	// (0x00050e23) status_pane_g1

0xa03b,	// (0x00050e39) status_pane_g2_ParamLimits

0xa03b,	// (0x00050e39) status_pane_g2

0xc7aa,	// (0x000535a8) status_pane_g3_ParamLimits

0xc7aa,	// (0x000535a8) status_pane_g3

0x0004,

0xf7ab,	// (0x000565a9) status_pane_g_ParamLimits

0xf7ab,	// (0x000565a9) status_pane_g

0xa047,	// (0x00050e45) title_pane_ParamLimits

0xa047,	// (0x00050e45) title_pane

0xa0aa,	// (0x00050ea8) uni_indicator_pane_ParamLimits

0xa0aa,	// (0x00050ea8) uni_indicator_pane

0xc688,	// (0x00053486) bg_list_pane_ParamLimits

0xc688,	// (0x00053486) bg_list_pane

0x800e,	// (0x0004ee0c) find_pane

0x9d21,	// (0x00050b1f) listscroll_app_pane_ParamLimits

0x9d21,	// (0x00050b1f) listscroll_app_pane

0xc6a8,	// (0x000534a6) listscroll_form_pane

0x7753,	// (0x0004e551) listscroll_gen_pane_ParamLimits

0x7753,	// (0x0004e551) listscroll_gen_pane

0xc6a8,	// (0x000534a6) listscroll_set_pane

0xd0a0,	// (0x00053e9e) main_idle_act_pane

0xc46c,	// (0x0005326a) main_idle_trad_pane

0xc46c,	// (0x0005326a) main_list_empty_pane

0xbbe7,	// (0x000529e5) main_midp_pane

0xc6c2,	// (0x000534c0) main_pane_g1_ParamLimits

0xc6c2,	// (0x000534c0) main_pane_g1

0x8016,	// (0x0004ee14) popup_ai_message_window_ParamLimits

0x8016,	// (0x0004ee14) popup_ai_message_window

0x80a7,	// (0x0004eea5) popup_fep_china_uni_window_ParamLimits

0x80a7,	// (0x0004eea5) popup_fep_china_uni_window

0x14fc,	// (0x000482fa) popup_fep_japan_candidate_window_ParamLimits

0x14fc,	// (0x000482fa) popup_fep_japan_candidate_window

0x151a,	// (0x00048318) popup_fep_japan_predictive_window_ParamLimits

0x151a,	// (0x00048318) popup_fep_japan_predictive_window

0x8101,	// (0x0004eeff) popup_find_window

0x811e,	// (0x0004ef1c) popup_grid_graphic_window_ParamLimits

0x811e,	// (0x0004ef1c) popup_grid_graphic_window

0x157d,	// (0x0004837b) popup_large_graphic_colour_window

0x81b0,	// (0x0004efae) popup_menu_window_ParamLimits

0x81b0,	// (0x0004efae) popup_menu_window

0x837c,	// (0x0004f17a) popup_note_image_window

0x8342,	// (0x0004f140) popup_note_wait_window_ParamLimits

0x8342,	// (0x0004f140) popup_note_wait_window

0x8394,	// (0x0004f192) popup_note_window_ParamLimits

0x8394,	// (0x0004f192) popup_note_window

0x843a,	// (0x0004f238) popup_query_code_window_ParamLimits

0x843a,	// (0x0004f238) popup_query_code_window

0x17c7,	// (0x000485c5) popup_query_data_code_window_ParamLimits

0x17c7,	// (0x000485c5) popup_query_data_code_window

0x8474,	// (0x0004f272) popup_query_data_window_ParamLimits

0x8474,	// (0x0004f272) popup_query_data_window

0x84ea,	// (0x0004f2e8) popup_query_sat_info_window_ParamLimits

0x84ea,	// (0x0004f2e8) popup_query_sat_info_window

0x8581,	// (0x0004f37f) popup_snote_single_graphic_window_ParamLimits

0x8581,	// (0x0004f37f) popup_snote_single_graphic_window

0x8581,	// (0x0004f37f) popup_snote_single_text_window_ParamLimits

0x8581,	// (0x0004f37f) popup_snote_single_text_window

0x1844,	// (0x00048642) popup_sub_window_general

0x1972,	// (0x00048770) popup_window_general_ParamLimits

0x1972,	// (0x00048770) popup_window_general

0xc6d0,	// (0x000534ce) power_save_pane

0x7ea1,	// (0x0004ec9f) control_pane_g1_ParamLimits

0x7ea1,	// (0x0004ec9f) control_pane_g1

0x7eca,	// (0x0004ecc8) control_pane_g2_ParamLimits

0x7eca,	// (0x0004ecc8) control_pane_g2

0xc672,	// (0x00053470) control_pane_g3_ParamLimits

0xc672,	// (0x00053470) control_pane_g3

0x0007,

0xf793,	// (0x00056591) control_pane_g_ParamLimits

0xf793,	// (0x00056591) control_pane_g

0x7f07,	// (0x0004ed05) control_pane_t1_ParamLimits

0x7f07,	// (0x0004ed05) control_pane_t1

0x7f65,	// (0x0004ed63) control_pane_t2_ParamLimits

0x7f65,	// (0x0004ed63) control_pane_t2

0x0002,

0xf7a4,	// (0x000565a2) control_pane_t_ParamLimits

0xf7a4,	// (0x000565a2) control_pane_t

0xc593,	// (0x00053391) navi_navi_volume_pane_cp1

0xc59c,	// (0x0005339a) status_small_icon_pane

0xc5a4,	// (0x000533a2) status_small_pane_g1_ParamLimits

0xc5a4,	// (0x000533a2) status_small_pane_g1

0xc5d8,	// (0x000533d6) status_small_pane_g2_ParamLimits

0xc5d8,	// (0x000533d6) status_small_pane_g2

0xc5e4,	// (0x000533e2) status_small_pane_g3_ParamLimits

0xc5e4,	// (0x000533e2) status_small_pane_g3

0xc5f0,	// (0x000533ee) status_small_pane_g4_ParamLimits

0xc5f0,	// (0x000533ee) status_small_pane_g4

0xc5fc,	// (0x000533fa) status_small_pane_g5_ParamLimits

0xc5fc,	// (0x000533fa) status_small_pane_g5

0xc60b,	// (0x00053409) status_small_pane_g6_ParamLimits

0xc60b,	// (0x00053409) status_small_pane_g6

0x0007,

0xf782,	// (0x00056580) status_small_pane_g_ParamLimits

0xf782,	// (0x00056580) status_small_pane_g

0xc63b,	// (0x00053439) status_small_pane_t1

0xc65e,	// (0x0005345c) status_small_wait_pane_ParamLimits

0xc65e,	// (0x0005345c) status_small_wait_pane

0x9a69,	// (0x00050867) aid_levels_signal_ParamLimits

0x9a69,	// (0x00050867) aid_levels_signal

0x9a81,	// (0x0005087f) signal_pane_g1_ParamLimits

0x9a81,	// (0x0005087f) signal_pane_g1

0x9a9c,	// (0x0005089a) signal_pane_g2_ParamLimits

0x9a9c,	// (0x0005089a) signal_pane_g2

0x0003,

0xf713,	// (0x00056511) signal_pane_g_ParamLimits

0xf713,	// (0x00056511) signal_pane_g

0xc032,	// (0x00052e30) context_pane_g1

0x9577,	// (0x00050375) title_pane_g1

0x95ae,	// (0x000503ac) title_pane_t1

0xafcf,	// (0x00051dcd) title_pane_t2

0xaff5,	// (0x00051df3) title_pane_t3

0x0002,

0xf55d,	// (0x0005635b) title_pane_t

0xa0d2,	// (0x00050ed0) aid_levels_battery_ParamLimits

0xa0d2,	// (0x00050ed0) aid_levels_battery

0xa0ee,	// (0x00050eec) battery_pane_g1_ParamLimits

0xa0ee,	// (0x00050eec) battery_pane_g1

0xa10b,	// (0x00050f09) battery_pane_g2_ParamLimits

0xa10b,	// (0x00050f09) battery_pane_g2

0x0001,

0xf7b6,	// (0x000565b4) battery_pane_g_ParamLimits

0xf7b6,	// (0x000565b4) battery_pane_g

0xa395,	// (0x00051193) uni_indicator_pane_g1

0xa3aa,	// (0x000511a8) uni_indicator_pane_g2

0xd848,	// (0x00054646) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x00056725) uni_indicator_pane_g

0xc302,	// (0x00053100) navi_icon_pane_ParamLimits

0xc302,	// (0x00053100) navi_icon_pane

0xc286,	// (0x00053084) navi_midp_pane

0xc31e,	// (0x0005311c) navi_navi_pane

0xc328,	// (0x00053126) navi_text_pane_ParamLimits

0xc328,	// (0x00053126) navi_text_pane

0xafaf,	// (0x00051dad) status_small_wait_pane_g1

0xb73d,	// (0x0005253b) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x00056720) status_small_wait_pane_g

0xd5ca,	// (0x000543c8) navi_navi_icon_text_pane

0xd5d2,	// (0x000543d0) navi_navi_pane_g1_ParamLimits

0xd5d2,	// (0x000543d0) navi_navi_pane_g1

0xd5e4,	// (0x000543e2) navi_navi_pane_g2_ParamLimits

0xd5e4,	// (0x000543e2) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x000566ee) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x000566ee) navi_navi_pane_g

0xd5f6,	// (0x000543f4) navi_navi_tabs_pane

0xd5ff,	// (0x000543fd) navi_navi_text_pane

0xd5ca,	// (0x000543c8) navi_navi_volume_pane

0xd5a6,	// (0x000543a4) navi_text_pane_t1

0xd59a,	// (0x00054398) navi_icon_pane_g1

0xd501,	// (0x000542ff) navi_navi_text_pane_t1

0x8866,	// (0x0004f664) navi_navi_volume_pane_g1

0x886e,	// (0x0004f66c) volume_small_pane

0xa278,	// (0x00051076) navi_navi_icon_text_pane_g1

0xa280,	// (0x0005107e) navi_navi_icon_text_pane_t1

0xc31e,	// (0x0005311c) navi_tabs_2_long_pane

0xc31e,	// (0x0005311c) navi_tabs_2_pane

0xc31e,	// (0x0005311c) navi_tabs_3_long_pane

0xc31e,	// (0x0005311c) navi_tabs_3_pane

0xc31e,	// (0x0005311c) navi_tabs_4_pane

0x8846,	// (0x0004f644) tabs_2_active_pane_ParamLimits

0x8846,	// (0x0004f644) tabs_2_active_pane

0x8856,	// (0x0004f654) tabs_2_passive_pane_ParamLimits

0x8856,	// (0x0004f654) tabs_2_passive_pane

0x8814,	// (0x0004f612) tabs_3_active_pane_ParamLimits

0x8814,	// (0x0004f612) tabs_3_active_pane

0x8824,	// (0x0004f622) tabs_3_passive_pane_ParamLimits

0x8824,	// (0x0004f622) tabs_3_passive_pane

0x8835,	// (0x0004f633) tabs_3_passive_pane_cp_ParamLimits

0x8835,	// (0x0004f633) tabs_3_passive_pane_cp

0x87d0,	// (0x0004f5ce) tabs_4_active_pane_ParamLimits

0x87d0,	// (0x0004f5ce) tabs_4_active_pane

0x87e1,	// (0x0004f5df) tabs_4_passive_pane_ParamLimits

0x87e1,	// (0x0004f5df) tabs_4_passive_pane

0x87f2,	// (0x0004f5f0) tabs_4_passive_pane_cp_ParamLimits

0x87f2,	// (0x0004f5f0) tabs_4_passive_pane_cp

0x8803,	// (0x0004f601) tabs_4_passive_pane_cp2_ParamLimits

0x8803,	// (0x0004f601) tabs_4_passive_pane_cp2

0x87b0,	// (0x0004f5ae) tabs_2_long_active_pane_ParamLimits

0x87b0,	// (0x0004f5ae) tabs_2_long_active_pane

0x87c0,	// (0x0004f5be) tabs_2_long_passive_pane_ParamLimits

0x87c0,	// (0x0004f5be) tabs_2_long_passive_pane

0x877b,	// (0x0004f579) tabs_3_long_active_pane_ParamLimits

0x877b,	// (0x0004f579) tabs_3_long_active_pane

0x878c,	// (0x0004f58a) tabs_3_long_passive_pane_ParamLimits

0x878c,	// (0x0004f58a) tabs_3_long_passive_pane

0x879f,	// (0x0004f59d) tabs_3_long_passive_pane_cp_ParamLimits

0x879f,	// (0x0004f59d) tabs_3_long_passive_pane_cp

0x1ac9,	// (0x000488c7) volume_small_pane_g1

0x872a,	// (0x0004f528) volume_small_pane_g2

0x8733,	// (0x0004f531) volume_small_pane_g3

0x873c,	// (0x0004f53a) volume_small_pane_g4

0x8745,	// (0x0004f543) volume_small_pane_g5

0x874e,	// (0x0004f54c) volume_small_pane_g6

0x8757,	// (0x0004f555) volume_small_pane_g7

0x8760,	// (0x0004f55e) volume_small_pane_g8

0x8769,	// (0x0004f567) volume_small_pane_g9

0x8772,	// (0x0004f570) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x000566ba) volume_small_pane_g

0xb007,	// (0x00051e05) bg_active_tab_pane_cp2_ParamLimits

0xb007,	// (0x00051e05) bg_active_tab_pane_cp2

0x963a,	// (0x00050438) tabs_3_active_pane_g1

0x9642,	// (0x00050440) tabs_3_active_pane_t1

0xb007,	// (0x00051e05) bg_passive_tab_pane_cp2_ParamLimits

0xb007,	// (0x00051e05) bg_passive_tab_pane_cp2

0x963a,	// (0x00050438) tabs_3_passive_pane_g1

0x9642,	// (0x00050440) tabs_3_passive_pane_t1

0xb007,	// (0x00051e05) bg_active_tab_pane_cp3_ParamLimits

0xb007,	// (0x00051e05) bg_active_tab_pane_cp3

0x9654,	// (0x00050452) tabs_4_active_pane_g1

0x965c,	// (0x0005045a) tabs_4_active_pane_t1

0xb007,	// (0x00051e05) bg_passive_tab_pane_cp3_ParamLimits

0xb007,	// (0x00051e05) bg_passive_tab_pane_cp3

0x9654,	// (0x00050452) tabs_4_1_passive_pane_g1

0x965c,	// (0x0005045a) tabs_4_1_passive_pane_t1

0xbbe7,	// (0x000529e5) list_highlight_pane_cp2

0xa437,	// (0x00051235) list_set_pane_ParamLimits

0xa437,	// (0x00051235) list_set_pane

0xa4d1,	// (0x000512cf) main_pane_set_t1_ParamLimits

0xa4d1,	// (0x000512cf) main_pane_set_t1

0xa4f1,	// (0x000512ef) main_pane_set_t2_ParamLimits

0xa4f1,	// (0x000512ef) main_pane_set_t2

0xa505,	// (0x00051303) main_pane_set_t3_ParamLimits

0xa505,	// (0x00051303) main_pane_set_t3

0xa517,	// (0x00051315) main_pane_set_t4_ParamLimits

0xa517,	// (0x00051315) main_pane_set_t4

0x0003,

0xf98c,	// (0x0005678a) main_pane_set_t_ParamLimits

0xf98c,	// (0x0005678a) main_pane_set_t

0xa529,	// (0x00051327) setting_code_pane

0xa531,	// (0x0005132f) setting_slider_graphic_pane

0xa531,	// (0x0005132f) setting_slider_pane

0xa531,	// (0x0005132f) setting_text_pane

0xa531,	// (0x0005132f) setting_volume_pane

0x0723,	// (0x00047521) volume_set_pane

0xb015,	// (0x00051e13) bg_set_opt_pane_cp

0x072b,	// (0x00047529) setting_slider_pane_t1

0x0744,	// (0x00047542) setting_slider_pane_t2

0x075d,	// (0x0004755b) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00056362) setting_slider_pane_t

0x0774,	// (0x00047572) slider_set_pane

0xafb9,	// (0x00051db7) bg_set_opt_pane_cp2

0xb023,	// (0x00051e21) setting_slider_graphic_pane_g1

0x078a,	// (0x00047588) setting_slider_graphic_pane_t1

0x0799,	// (0x00047597) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00056369) setting_slider_graphic_pane_t

0x07a8,	// (0x000475a6) slider_set_pane_cp

0xafb9,	// (0x00051db7) input_focus_pane_cp1

0xda25,	// (0x00054823) list_set_text_pane

0xafaf,	// (0x00051dad) setting_text_pane_g1

0xafb9,	// (0x00051db7) input_focus_pane_cp2

0xafaf,	// (0x00051dad) setting_code_pane_g1

0xb02c,	// (0x00051e2a) setting_code_pane_t1

0x07b0,	// (0x000475ae) set_text_pane_t1_ParamLimits

0x07b0,	// (0x000475ae) set_text_pane_t1

0xbade,	// (0x000528dc) set_opt_bg_pane_g1

0xbae6,	// (0x000528e4) set_opt_bg_pane_g2

0xda05,	// (0x00054803) set_opt_bg_pane_g3

0xbaf6,	// (0x000528f4) set_opt_bg_pane_g4

0xbafe,	// (0x000528fc) set_opt_bg_pane_g5

0xbb06,	// (0x00052904) set_opt_bg_pane_g6

0xda0d,	// (0x0005480b) set_opt_bg_pane_g7

0xda15,	// (0x00054813) set_opt_bg_pane_g8

0xda1d,	// (0x0005481b) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x00056777) set_opt_bg_pane_g

0xd9f8,	// (0x000547f6) slider_set_pane_g1

0x1c97,	// (0x00048a95) slider_set_pane_g2

0x0006,

0xf96a,	// (0x00056768) slider_set_pane_g

0x1c33,	// (0x00048a31) volume_set_pane_g1

0x1c3b,	// (0x00048a39) volume_set_pane_g2

0x1c43,	// (0x00048a41) volume_set_pane_g3

0x1c4b,	// (0x00048a49) volume_set_pane_g4

0x1c53,	// (0x00048a51) volume_set_pane_g5

0x1c5b,	// (0x00048a59) volume_set_pane_g6

0x1c63,	// (0x00048a61) volume_set_pane_g7

0x1c6b,	// (0x00048a69) volume_set_pane_g8

0x1c73,	// (0x00048a71) volume_set_pane_g9

0x1c7b,	// (0x00048a79) volume_set_pane_g10

0x0009,

0xf942,	// (0x00056740) volume_set_pane_g

0x966e,	// (0x0005046c) indicator_pane_ParamLimits

0x966e,	// (0x0005046c) indicator_pane

0x9696,	// (0x00050494) main_idle_pane_g2_ParamLimits

0x9696,	// (0x00050494) main_idle_pane_g2

0x96ce,	// (0x000504cc) main_pane_idle_g1_ParamLimits

0x96ce,	// (0x000504cc) main_pane_idle_g1

0xb03a,	// (0x00051e38) popup_clock_digital_analogue_window_ParamLimits

0xb03a,	// (0x00051e38) popup_clock_digital_analogue_window

0x96f5,	// (0x000504f3) soft_indicator_pane_ParamLimits

0x96f5,	// (0x000504f3) soft_indicator_pane

0x970f,	// (0x0005050d) wallpaper_pane_ParamLimits

0x970f,	// (0x0005050d) wallpaper_pane

0xafaf,	// (0x00051dad) wallpaper_pane_g1

0x9721,	// (0x0005051f) indicator_pane_g1_ParamLimits

0x9721,	// (0x0005051f) indicator_pane_g1

0xdb7b,	// (0x00054979) navi_navi_icon_text_pane_srt_g1

0xb068,	// (0x00051e66) soft_indicator_pane_t1

0xb082,	// (0x00051e80) aid_ps_area_pane

0x973a,	// (0x00050538) aid_ps_clock_pane

0xb093,	// (0x00051e91) aid_ps_indicator_pane

0xb09f,	// (0x00051e9d) indicator_ps_pane_ParamLimits

0xb09f,	// (0x00051e9d) indicator_ps_pane

0xb0ae,	// (0x00051eac) power_save_pane_g1_ParamLimits

0xb0ae,	// (0x00051eac) power_save_pane_g1

0xb0ba,	// (0x00051eb8) power_save_pane_g2_ParamLimits

0xb0ba,	// (0x00051eb8) power_save_pane_g2

0x0348,	// (0x00047146) aid_navinavi_width_pane

0xb082,	// (0x00051e80) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0005636e) power_save_pane_g_ParamLimits

0xf570,	// (0x0005636e) power_save_pane_g

0xb0c8,	// (0x00051ec6) power_save_pane_t1_ParamLimits

0xb0c8,	// (0x00051ec6) power_save_pane_t1

0x973a,	// (0x00050538) aid_ps_clock_pane_ParamLimits

0xb093,	// (0x00051e91) aid_ps_indicator_pane_ParamLimits

0xb0da,	// (0x00051ed8) power_save_pane_t4_ParamLimits

0xb0da,	// (0x00051ed8) power_save_pane_t4

0x0001,

0xf575,	// (0x00056373) power_save_pane_t_ParamLimits

0xf575,	// (0x00056373) power_save_pane_t

0xb104,	// (0x00051f02) power_save_t3_ParamLimits

0xb104,	// (0x00051f02) power_save_t3

0xb0ef,	// (0x00051eed) power_save_t2_ParamLimits

0xb0ef,	// (0x00051eed) power_save_t2

0xb119,	// (0x00051f17) indicator_ps_pane_g1

0x9748,	// (0x00050546) ai_gene_pane_ParamLimits

0x9748,	// (0x00050546) ai_gene_pane

0x975f,	// (0x0005055d) ai_links_pane_ParamLimits

0x975f,	// (0x0005055d) ai_links_pane

0x9777,	// (0x00050575) indicator_pane_cp1_ParamLimits

0x9777,	// (0x00050575) indicator_pane_cp1

0x9786,	// (0x00050584) main_pane_idle_g1_cp_ParamLimits

0x9786,	// (0x00050584) main_pane_idle_g1_cp

0xb122,	// (0x00051f20) popup_ai_links_title_window

0x979e,	// (0x0005059c) soft_indicator_pane_cp1_ParamLimits

0x979e,	// (0x0005059c) soft_indicator_pane_cp1

0xd836,	// (0x00054634) ai_links_pane_g1

0xd83f,	// (0x0005463d) grid_ai_links_pane

0xa38c,	// (0x0005118a) ai_gene_pane_1

0xd824,	// (0x00054622) ai_gene_pane_2

0xd82d,	// (0x0005462b) list_highlight_pane_cp4

0xa368,	// (0x00051166) cell_ai_link_pane_ParamLimits

0xa368,	// (0x00051166) cell_ai_link_pane

0xd81c,	// (0x0005461a) cell_ai_link_pane_g1

0xb73d,	// (0x0005253b) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0005671b) cell_ai_link_pane_g

0xafb9,	// (0x00051db7) grid_highlight_cp2

0xafb9,	// (0x00051db7) bg_popup_sub_pane_cp1

0xb139,	// (0x00051f37) popup_ai_links_title_window_t1

0xd78e,	// (0x0005458c) ai_gene_pane_1_g1_ParamLimits

0xd78e,	// (0x0005458c) ai_gene_pane_1_g1

0xd79a,	// (0x00054598) ai_gene_pane_1_g2_ParamLimits

0xd79a,	// (0x00054598) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x00056711) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x00056711) ai_gene_pane_1_g

0xd7a7,	// (0x000545a5) ai_gene_pane_1_t1_ParamLimits

0xd7a7,	// (0x000545a5) ai_gene_pane_1_t1

0xd7db,	// (0x000545d9) grid_ai_soft_ind_pane

0xd779,	// (0x00054577) ai_gene_pane_2_t1_ParamLimits

0xd779,	// (0x00054577) ai_gene_pane_2_t1

0x97b2,	// (0x000505b0) main_pane_empty_t1_ParamLimits

0x97b2,	// (0x000505b0) main_pane_empty_t1

0x97ca,	// (0x000505c8) main_pane_empty_t2_ParamLimits

0x97ca,	// (0x000505c8) main_pane_empty_t2

0x97df,	// (0x000505dd) main_pane_empty_t3_ParamLimits

0x97df,	// (0x000505dd) main_pane_empty_t3

0x97f1,	// (0x000505ef) main_pane_empty_t4_ParamLimits

0x97f1,	// (0x000505ef) main_pane_empty_t4

0x9803,	// (0x00050601) main_pane_empty_t5_ParamLimits

0x9803,	// (0x00050601) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00056378) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00056378) main_pane_empty_t

0xbb2f,	// (0x0005292d) bg_popup_window_pane_ParamLimits

0xbb2f,	// (0x0005292d) bg_popup_window_pane

0xd50f,	// (0x0005430d) find_popup_pane_cp2_ParamLimits

0xd50f,	// (0x0005430d) find_popup_pane_cp2

0xd51b,	// (0x00054319) heading_pane_ParamLimits

0xd51b,	// (0x00054319) heading_pane

0xafb9,	// (0x00051db7) bg_popup_sub_pane

0xa29d,	// (0x0005109b) bg_popup_window_pane_g1_ParamLimits

0xa29d,	// (0x0005109b) bg_popup_window_pane_g1

0xa2ac,	// (0x000510aa) bg_popup_window_pane_g2_ParamLimits

0xa2ac,	// (0x000510aa) bg_popup_window_pane_g2

0xa2b8,	// (0x000510b6) bg_popup_window_pane_g3_ParamLimits

0xa2b8,	// (0x000510b6) bg_popup_window_pane_g3

0xa2c4,	// (0x000510c2) bg_popup_window_pane_g4_ParamLimits

0xa2c4,	// (0x000510c2) bg_popup_window_pane_g4

0xa2d3,	// (0x000510d1) bg_popup_window_pane_g5_ParamLimits

0xa2d3,	// (0x000510d1) bg_popup_window_pane_g5

0xa2e3,	// (0x000510e1) bg_popup_window_pane_g6_ParamLimits

0xa2e3,	// (0x000510e1) bg_popup_window_pane_g6

0xa2ef,	// (0x000510ed) bg_popup_window_pane_g7_ParamLimits

0xa2ef,	// (0x000510ed) bg_popup_window_pane_g7

0xa2fe,	// (0x000510fc) bg_popup_window_pane_g8_ParamLimits

0xa2fe,	// (0x000510fc) bg_popup_window_pane_g8

0xa30d,	// (0x0005110b) bg_popup_window_pane_g9_ParamLimits

0xa30d,	// (0x0005110b) bg_popup_window_pane_g9

0xd4f5,	// (0x000542f3) bg_popup_window_pane_g10_ParamLimits

0xd4f5,	// (0x000542f3) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x000566d9) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x000566d9) bg_popup_window_pane_g

0xd4ac,	// (0x000542aa) bg_popup_heading_pane_ParamLimits

0xd4ac,	// (0x000542aa) bg_popup_heading_pane

0x1d1f,	// (0x00048b1d) tabs_4_passive_pane_cp_srt_ParamLimits

0x1d1f,	// (0x00048b1d) tabs_4_passive_pane_cp_srt

0x1d31,	// (0x00048b2f) tabs_4_passive_pane_srt_ParamLimits

0xd4c0,	// (0x000542be) heading_pane_g2

0x1d31,	// (0x00048b2f) tabs_4_passive_pane_srt

0xc98e,	// (0x0005378c) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc98e,	// (0x0005378c) bg_passive_tab_pane_cp3_srt

0xd4c8,	// (0x000542c6) heading_pane_t1_ParamLimits

0xd4c8,	// (0x000542c6) heading_pane_t1

0xd4df,	// (0x000542dd) heading_pane_t2_ParamLimits

0xd4df,	// (0x000542dd) heading_pane_t2

0x0001,

0xf8d6,	// (0x000566d4) heading_pane_t_ParamLimits

0xf8d6,	// (0x000566d4) heading_pane_t

0xd000,	// (0x00053dfe) bg_popup_heading_pane_g1

0xd0dd,	// (0x00053edb) bg_popup_heading_pane_g2

0xd0e7,	// (0x00053ee5) bg_popup_heading_pane_g3

0xd0f1,	// (0x00053eef) bg_popup_heading_pane_g4

0xd0fb,	// (0x00053ef9) bg_popup_heading_pane_g5

0xd105,	// (0x00053f03) bg_popup_heading_pane_g6

0xd10d,	// (0x00053f0b) bg_popup_heading_pane_g7

0xd115,	// (0x00053f13) bg_popup_heading_pane_g8

0xd11f,	// (0x00053f1d) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x00056690) bg_popup_heading_pane_g

0xc89e,	// (0x0005369c) bg_popup_sub_pane_g1

0xc8ae,	// (0x000536ac) bg_popup_sub_pane_g2

0xc8a6,	// (0x000536a4) bg_popup_sub_pane_g3

0xc8be,	// (0x000536bc) bg_popup_sub_pane_g4

0xc8b6,	// (0x000536b4) bg_popup_sub_pane_g5

0xc8c6,	// (0x000536c4) bg_popup_sub_pane_g6

0xc8ce,	// (0x000536cc) bg_popup_sub_pane_g7

0xc8de,	// (0x000536dc) bg_popup_sub_pane_g8

0xc8d6,	// (0x000536d4) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0005666a) bg_popup_sub_pane_g

0xb007,	// (0x00051e05) bg_popup_window_pane_cp5_ParamLimits

0xb007,	// (0x00051e05) bg_popup_window_pane_cp5

0xb156,	// (0x00051f54) popup_note_window_g1_ParamLimits

0xb156,	// (0x00051f54) popup_note_window_g1

0xb162,	// (0x00051f60) popup_note_window_t1_ParamLimits

0xb162,	// (0x00051f60) popup_note_window_t1

0xb174,	// (0x00051f72) popup_note_window_t2_ParamLimits

0xb174,	// (0x00051f72) popup_note_window_t2

0xb186,	// (0x00051f84) popup_note_window_t3_ParamLimits

0xb186,	// (0x00051f84) popup_note_window_t3

0xb198,	// (0x00051f96) popup_note_window_t4_ParamLimits

0xb198,	// (0x00051f96) popup_note_window_t4

0xb62d,	// (0x0005242b) popup_note_window_t5_ParamLimits

0xb62d,	// (0x0005242b) popup_note_window_t5

0x0004,

0xf585,	// (0x00056383) popup_note_window_t_ParamLimits

0xf585,	// (0x00056383) popup_note_window_t

0xb651,	// (0x0005244f) bg_popup_window_pane_cp6_ParamLimits

0xb651,	// (0x0005244f) bg_popup_window_pane_cp6

0xcf74,	// (0x00053d72) popup_note_image_window_g1_ParamLimits

0xcf74,	// (0x00053d72) popup_note_image_window_g1

0xcf80,	// (0x00053d7e) popup_note_image_window_g2_ParamLimits

0xcf80,	// (0x00053d7e) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0005665e) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0005665e) popup_note_image_window_g

0xcf99,	// (0x00053d97) popup_note_image_window_t1_ParamLimits

0xcf99,	// (0x00053d97) popup_note_image_window_t1

0xcfb2,	// (0x00053db0) popup_note_image_window_t2_ParamLimits

0xcfb2,	// (0x00053db0) popup_note_image_window_t2

0xcfcb,	// (0x00053dc9) popup_note_image_window_t3_ParamLimits

0xcfcb,	// (0x00053dc9) popup_note_image_window_t3

0x0002,

0xf865,	// (0x00056663) popup_note_image_window_t_ParamLimits

0xf865,	// (0x00056663) popup_note_image_window_t

0xce51,	// (0x00053c4f) bg_popup_window_pane_cp7_ParamLimits

0xce51,	// (0x00053c4f) bg_popup_window_pane_cp7

0xce81,	// (0x00053c7f) popup_note_wait_window_g1_ParamLimits

0xce81,	// (0x00053c7f) popup_note_wait_window_g1

0xce8d,	// (0x00053c8b) popup_note_wait_window_g2_ParamLimits

0xce8d,	// (0x00053c8b) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0005664c) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0005664c) popup_note_wait_window_g

0xcea5,	// (0x00053ca3) popup_note_wait_window_t1_ParamLimits

0xcea5,	// (0x00053ca3) popup_note_wait_window_t1

0xcecc,	// (0x00053cca) popup_note_wait_window_t2_ParamLimits

0xcecc,	// (0x00053cca) popup_note_wait_window_t2

0xcee9,	// (0x00053ce7) popup_note_wait_window_t3_ParamLimits

0xcee9,	// (0x00053ce7) popup_note_wait_window_t3

0xcefc,	// (0x00053cfa) popup_note_wait_window_t4_ParamLimits

0xcefc,	// (0x00053cfa) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x00056653) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x00056653) popup_note_wait_window_t

0xcf21,	// (0x00053d1f) wait_bar_pane_ParamLimits

0xcf21,	// (0x00053d1f) wait_bar_pane

0xafb9,	// (0x00051db7) wait_anim_pane

0xafb9,	// (0x00051db7) wait_border_pane

0xafaf,	// (0x00051dad) wait_anim_pane_g1

0xafaf,	// (0x00051dad) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0005650c) wait_anim_pane_g

0xcdf5,	// (0x00053bf3) wait_border_pane_g1

0xce00,	// (0x00053bfe) wait_border_pane_g2

0xce09,	// (0x00053c07) wait_border_pane_g3

0x0002,

0xf847,	// (0x00056645) wait_border_pane_g

0xcc65,	// (0x00053a63) bg_popup_window_pane_cp16_ParamLimits

0xcc65,	// (0x00053a63) bg_popup_window_pane_cp16

0xcd65,	// (0x00053b63) indicator_popup_pane_cp4_ParamLimits

0xcd65,	// (0x00053b63) indicator_popup_pane_cp4

0xcd79,	// (0x00053b77) popup_query_data_window_t1_ParamLimits

0xcd79,	// (0x00053b77) popup_query_data_window_t1

0xcd8b,	// (0x00053b89) popup_query_data_window_t2_ParamLimits

0xcd8b,	// (0x00053b89) popup_query_data_window_t2

0xcda4,	// (0x00053ba2) popup_query_data_window_t3_ParamLimits

0xcda4,	// (0x00053ba2) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0005663e) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0005663e) popup_query_data_window_t

0xcdbe,	// (0x00053bbc) query_popup_data_pane_ParamLimits

0xcdbe,	// (0x00053bbc) query_popup_data_pane

0xcdd2,	// (0x00053bd0) query_popup_data_pane_cp1_ParamLimits

0xcdd2,	// (0x00053bd0) query_popup_data_pane_cp1

0xcc65,	// (0x00053a63) bg_popup_window_pane_cp10_ParamLimits

0xcc65,	// (0x00053a63) bg_popup_window_pane_cp10

0xcc97,	// (0x00053a95) indicator_popup_pane_ParamLimits

0xcc97,	// (0x00053a95) indicator_popup_pane

0xccb9,	// (0x00053ab7) popup_query_code_window_t1_ParamLimits

0xccb9,	// (0x00053ab7) popup_query_code_window_t1

0xccd3,	// (0x00053ad1) popup_query_code_window_t2_ParamLimits

0xccd3,	// (0x00053ad1) popup_query_code_window_t2

0xcd1c,	// (0x00053b1a) popup_query_code_window_t3_ParamLimits

0xcd1c,	// (0x00053b1a) popup_query_code_window_t3

0x0002,

0xf839,	// (0x00056637) popup_query_code_window_t_ParamLimits

0xf839,	// (0x00056637) popup_query_code_window_t

0xcd4b,	// (0x00053b49) query_popup_pane_ParamLimits

0xcd4b,	// (0x00053b49) query_popup_pane

0xb651,	// (0x0005244f) bg_popup_window_pane_cp15_ParamLimits

0xb651,	// (0x0005244f) bg_popup_window_pane_cp15

0xb66f,	// (0x0005246d) indicator_popup_pane_cp1_ParamLimits

0xb66f,	// (0x0005246d) indicator_popup_pane_cp1

0xb682,	// (0x00052480) indicator_popup_pane_cp2_ParamLimits

0xb682,	// (0x00052480) indicator_popup_pane_cp2

0xb695,	// (0x00052493) popup_query_data_code_window_g1_ParamLimits

0xb695,	// (0x00052493) popup_query_data_code_window_g1

0xb6a8,	// (0x000524a6) popup_query_data_code_window_t1_ParamLimits

0xb6a8,	// (0x000524a6) popup_query_data_code_window_t1

0xb6ba,	// (0x000524b8) popup_query_data_code_window_t2_ParamLimits

0xb6ba,	// (0x000524b8) popup_query_data_code_window_t2

0xb6cc,	// (0x000524ca) popup_query_data_code_window_t3_ParamLimits

0xb6cc,	// (0x000524ca) popup_query_data_code_window_t3

0xb6e2,	// (0x000524e0) popup_query_data_code_window_t4_ParamLimits

0xb6e2,	// (0x000524e0) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0005638e) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0005638e) popup_query_data_code_window_t

0x19dc,	// (0x000487da) list_single_midp_graphic_pane_g3

0xb6fa,	// (0x000524f8) query_popup_data_pane_cp2_ParamLimits

0xb70d,	// (0x0005250b) query_popup_pane_cp2_ParamLimits

0xb70d,	// (0x0005250b) query_popup_pane_cp2

0xafb9,	// (0x00051db7) bg_popup_window_pane_cp11

0xcc5d,	// (0x00053a5b) heading_pane_cp5

0xb79b,	// (0x00052599) listscroll_popup_info_pane

0xafb9,	// (0x00051db7) input_focus_pane_cp3

0xb720,	// (0x0005251e) query_popup_pane_t1

0xb72e,	// (0x0005252c) list_popup_info_pane_ParamLimits

0xb72e,	// (0x0005252c) list_popup_info_pane

0xb73d,	// (0x0005253b) listscroll_popup_info_pane_g1

0xb745,	// (0x00052543) scroll_pane_cp7

0xb74f,	// (0x0005254d) popup_info_list_pane_t1_ParamLimits

0xb74f,	// (0x0005254d) popup_info_list_pane_t1

0xb769,	// (0x00052567) popup_info_list_pane_t2_ParamLimits

0xb769,	// (0x00052567) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00056397) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00056397) popup_info_list_pane_t

0xafb9,	// (0x00051db7) bg_popup_window_pane_cp12

0xdb95,	// (0x00054993) find_popup_pane

0xb015,	// (0x00051e13) bg_popup_window_pane_cp3

0xb783,	// (0x00052581) heading_pane_cp3

0xb78f,	// (0x0005258d) listscroll_popup_graphic_pane

0xafb9,	// (0x00051db7) bg_popup_window_pane_cp4

0x9865,	// (0x00050663) heading_pane_cp4

0xb79b,	// (0x00052599) listscroll_popup_colour_pane

0x986d,	// (0x0005066b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x986d,	// (0x0005066b) cell_large_graphic_colour_none_popup_pane

0x9881,	// (0x0005067f) grid_large_graphic_colour_popup_pane_ParamLimits

0x9881,	// (0x0005067f) grid_large_graphic_colour_popup_pane

0x98a5,	// (0x000506a3) listscroll_popup_colour_pane_g1_ParamLimits

0x98a5,	// (0x000506a3) listscroll_popup_colour_pane_g1

0x98bc,	// (0x000506ba) listscroll_popup_colour_pane_g2_ParamLimits

0x98bc,	// (0x000506ba) listscroll_popup_colour_pane_g2

0x98d3,	// (0x000506d1) listscroll_popup_colour_pane_g3_ParamLimits

0x98d3,	// (0x000506d1) listscroll_popup_colour_pane_g3

0x98e3,	// (0x000506e1) listscroll_popup_colour_pane_g4_ParamLimits

0x98e3,	// (0x000506e1) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0005639c) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0005639c) listscroll_popup_colour_pane_g

0xb7a3,	// (0x000525a1) scroll_pane_cp6_ParamLimits

0xb7a3,	// (0x000525a1) scroll_pane_cp6

0x98f2,	// (0x000506f0) cell_large_graphic_colour_popup_pane_ParamLimits

0x98f2,	// (0x000506f0) cell_large_graphic_colour_popup_pane

0xb7b5,	// (0x000525b3) cell_large_graphic_colour_none_popup_pane_t1

0xafb9,	// (0x00051db7) grid_highlight_pane_cp5

0xb7c4,	// (0x000525c2) cell_large_graphic_colour_popup_pane_g1

0xb7cc,	// (0x000525ca) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000563a5) cell_large_graphic_colour_popup_pane_g

0xb7d4,	// (0x000525d2) cell_large_graphic_colour_popup_pane_g2_copy1

0xb7dd,	// (0x000525db) grid_highlight_pane_cp4

0xb7e5,	// (0x000525e3) bg_popup_window_pane_cp8_ParamLimits

0xb7e5,	// (0x000525e3) bg_popup_window_pane_cp8

0xb800,	// (0x000525fe) popup_snote_single_text_window_g1_ParamLimits

0xb800,	// (0x000525fe) popup_snote_single_text_window_g1

0xb812,	// (0x00052610) popup_snote_single_text_window_t1_ParamLimits

0xb812,	// (0x00052610) popup_snote_single_text_window_t1

0xb825,	// (0x00052623) popup_snote_single_text_window_t2_ParamLimits

0xb825,	// (0x00052623) popup_snote_single_text_window_t2

0xb838,	// (0x00052636) popup_snote_single_text_window_t3_ParamLimits

0xb838,	// (0x00052636) popup_snote_single_text_window_t3

0xb871,	// (0x0005266f) popup_snote_single_text_window_t4_ParamLimits

0xb871,	// (0x0005266f) popup_snote_single_text_window_t4

0xb8a5,	// (0x000526a3) popup_snote_single_text_window_t5_ParamLimits

0xb8a5,	// (0x000526a3) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000563aa) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000563aa) popup_snote_single_text_window_t

0xb8d4,	// (0x000526d2) bg_popup_window_pane_cp9_ParamLimits

0xb8d4,	// (0x000526d2) bg_popup_window_pane_cp9

0xb800,	// (0x000525fe) popup_snote_single_graphic_window_g1_ParamLimits

0xb800,	// (0x000525fe) popup_snote_single_graphic_window_g1

0xb8e2,	// (0x000526e0) popup_snote_single_graphic_window_g2_ParamLimits

0xb8e2,	// (0x000526e0) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000563b5) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000563b5) popup_snote_single_graphic_window_g

0xb8ee,	// (0x000526ec) popup_snote_single_graphic_window_t1_ParamLimits

0xb8ee,	// (0x000526ec) popup_snote_single_graphic_window_t1

0xb901,	// (0x000526ff) popup_snote_single_graphic_window_t2_ParamLimits

0xb901,	// (0x000526ff) popup_snote_single_graphic_window_t2

0xb914,	// (0x00052712) popup_snote_single_graphic_window_t3_ParamLimits

0xb914,	// (0x00052712) popup_snote_single_graphic_window_t3

0xb94d,	// (0x0005274b) popup_snote_single_graphic_window_t4_ParamLimits

0xb94d,	// (0x0005274b) popup_snote_single_graphic_window_t4

0xb981,	// (0x0005277f) popup_snote_single_graphic_window_t5_ParamLimits

0xb981,	// (0x0005277f) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000563ba) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000563ba) popup_snote_single_graphic_window_t

0xdb19,	// (0x00054917) grid_graphic_popup_pane_ParamLimits

0xdb19,	// (0x00054917) grid_graphic_popup_pane

0xdb45,	// (0x00054943) listscroll_popup_graphic_pane_g1_ParamLimits

0xdb45,	// (0x00054943) listscroll_popup_graphic_pane_g1

0xa61f,	// (0x0005141d) listscroll_popup_graphic_pane_g2_ParamLimits

0xa61f,	// (0x0005141d) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x000567b4) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x000567b4) listscroll_popup_graphic_pane_g

0xd0b2,	// (0x00053eb0) scroll_pane_cp5

0xa5e3,	// (0x000513e1) cell_graphic_popup_pane_ParamLimits

0xa5e3,	// (0x000513e1) cell_graphic_popup_pane

0xdae4,	// (0x000548e2) cell_graphic_popup_pane_g1

0xdaec,	// (0x000548ea) cell_graphic_popup_pane_g2

0xb7d4,	// (0x000525d2) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x000567ad) cell_graphic_popup_pane_g

0xdaf5,	// (0x000548f3) cell_graphic_popup_pane_t2

0xb7dd,	// (0x000525db) grid_highlight_pane_cp3

0xb9c2,	// (0x000527c0) list_gen_pane_ParamLimits

0xb9c2,	// (0x000527c0) list_gen_pane

0xb9ea,	// (0x000527e8) scroll_pane

0xa59e,	// (0x0005139c) bg_list_pane_g1_ParamLimits

0xa59e,	// (0x0005139c) bg_list_pane_g1

0xda93,	// (0x00054891) bg_list_pane_g2_ParamLimits

0xda93,	// (0x00054891) bg_list_pane_g2

0xdaa6,	// (0x000548a4) bg_list_pane_g3_ParamLimits

0xdaa6,	// (0x000548a4) bg_list_pane_g3

0xdab8,	// (0x000548b6) bg_list_pane_g4_ParamLimits

0xdab8,	// (0x000548b6) bg_list_pane_g4

0xa5b9,	// (0x000513b7) bg_list_pane_g5_ParamLimits

0xa5b9,	// (0x000513b7) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x000567a2) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x000567a2) bg_list_pane_g

0xa564,	// (0x00051362) list_double2_graphic_large_graphic_pane_ParamLimits

0xa564,	// (0x00051362) list_double2_graphic_large_graphic_pane

0xa564,	// (0x00051362) list_double2_graphic_pane_ParamLimits

0xa564,	// (0x00051362) list_double2_graphic_pane

0xa564,	// (0x00051362) list_double2_large_graphic_pane_ParamLimits

0xa564,	// (0x00051362) list_double2_large_graphic_pane

0xa564,	// (0x00051362) list_double2_pane_ParamLimits

0xa564,	// (0x00051362) list_double2_pane

0xa564,	// (0x00051362) list_double_graphic_heading_pane_ParamLimits

0xa564,	// (0x00051362) list_double_graphic_heading_pane

0xa564,	// (0x00051362) list_double_graphic_pane_ParamLimits

0xa564,	// (0x00051362) list_double_graphic_pane

0xa564,	// (0x00051362) list_double_heading_pane_ParamLimits

0xa564,	// (0x00051362) list_double_heading_pane

0xa564,	// (0x00051362) list_double_large_graphic_pane_ParamLimits

0xa564,	// (0x00051362) list_double_large_graphic_pane

0xa564,	// (0x00051362) list_double_number_pane_ParamLimits

0xa564,	// (0x00051362) list_double_number_pane

0xa564,	// (0x00051362) list_double_pane_ParamLimits

0xa564,	// (0x00051362) list_double_pane

0xa564,	// (0x00051362) list_double_time_pane_ParamLimits

0xa564,	// (0x00051362) list_double_time_pane

0xa564,	// (0x00051362) list_setting_number_pane_ParamLimits

0xa564,	// (0x00051362) list_setting_number_pane

0xa564,	// (0x00051362) list_setting_pane_ParamLimits

0xa564,	// (0x00051362) list_setting_pane

0xa577,	// (0x00051375) list_single_2graphic_pane_ParamLimits

0xa577,	// (0x00051375) list_single_2graphic_pane

0xa577,	// (0x00051375) list_single_graphic_heading_pane_ParamLimits

0xa577,	// (0x00051375) list_single_graphic_heading_pane

0xa577,	// (0x00051375) list_single_graphic_pane_ParamLimits

0xa577,	// (0x00051375) list_single_graphic_pane

0xa577,	// (0x00051375) list_single_heading_pane_ParamLimits

0xa577,	// (0x00051375) list_single_heading_pane

0xa577,	// (0x00051375) list_single_large_graphic_pane_ParamLimits

0xa577,	// (0x00051375) list_single_large_graphic_pane

0xa577,	// (0x00051375) list_single_number_heading_pane_ParamLimits

0xa577,	// (0x00051375) list_single_number_heading_pane

0xa577,	// (0x00051375) list_single_number_pane_ParamLimits

0xa577,	// (0x00051375) list_single_number_pane

0xa577,	// (0x00051375) list_single_pane_ParamLimits

0xa577,	// (0x00051375) list_single_pane

0xafb9,	// (0x00051db7) list_highlight_pane_cp1

0x2ead,	// (0x00049cab) list_single_pane_g1_ParamLimits

0x2ead,	// (0x00049cab) list_single_pane_g1

0x2eb9,	// (0x00049cb7) list_single_pane_g2_ParamLimits

0x2eb9,	// (0x00049cb7) list_single_pane_g2

0x0001,

0xf5d8,	// (0x000563d6) list_single_pane_g_ParamLimits

0xf5d8,	// (0x000563d6) list_single_pane_g

0x3b70,	// (0x0004a96e) list_single_pane_t1_ParamLimits

0x3b70,	// (0x0004a96e) list_single_pane_t1

0x2ead,	// (0x00049cab) list_single_number_pane_g1_ParamLimits

0x2ead,	// (0x00049cab) list_single_number_pane_g1

0x2eb9,	// (0x00049cb7) list_single_number_pane_g2_ParamLimits

0x2eb9,	// (0x00049cb7) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x000563d6) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x000563d6) list_single_number_pane_g

0x36f7,	// (0x0004a4f5) list_single_number_pane_t1_ParamLimits

0x36f7,	// (0x0004a4f5) list_single_number_pane_t1

0x8877,	// (0x0004f675) list_single_number_pane_t2_ParamLimits

0x8877,	// (0x0004f675) list_single_number_pane_t2

0x0001,

0xf965,	// (0x00056763) list_single_number_pane_t_ParamLimits

0xf965,	// (0x00056763) list_single_number_pane_t

0x7908,	// (0x0004e706) list_single_graphic_pane_g1_ParamLimits

0x7908,	// (0x0004e706) list_single_graphic_pane_g1

0x2ead,	// (0x00049cab) list_single_graphic_pane_g2_ParamLimits

0x2ead,	// (0x00049cab) list_single_graphic_pane_g2

0x2eb9,	// (0x00049cb7) list_single_graphic_pane_g3_ParamLimits

0x2eb9,	// (0x00049cb7) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000563c5) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000563c5) list_single_graphic_pane_g

0x7914,	// (0x0004e712) list_single_graphic_pane_t1_ParamLimits

0x7914,	// (0x0004e712) list_single_graphic_pane_t1

0x792a,	// (0x0004e728) list_single_heading_pane_g1_ParamLimits

0x792a,	// (0x0004e728) list_single_heading_pane_g1

0x2eb9,	// (0x00049cb7) list_single_heading_pane_g2_ParamLimits

0x2eb9,	// (0x00049cb7) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000563cc) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000563cc) list_single_heading_pane_g

0x793d,	// (0x0004e73b) list_single_heading_pane_t1_ParamLimits

0x793d,	// (0x0004e73b) list_single_heading_pane_t1

0x7953,	// (0x0004e751) list_single_heading_pane_t2_ParamLimits

0x7953,	// (0x0004e751) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000563d1) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000563d1) list_single_heading_pane_t

0x2ead,	// (0x00049cab) list_single_number_heading_pane_g1_ParamLimits

0x2ead,	// (0x00049cab) list_single_number_heading_pane_g1

0x2eb9,	// (0x00049cb7) list_single_number_heading_pane_g2_ParamLimits

0x2eb9,	// (0x00049cb7) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x000563d6) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x000563d6) list_single_number_heading_pane_g

0x3b86,	// (0x0004a984) list_single_number_heading_pane_t1_ParamLimits

0x3b86,	// (0x0004a984) list_single_number_heading_pane_t1

0x7965,	// (0x0004e763) list_single_number_heading_pane_t2_ParamLimits

0x7965,	// (0x0004e763) list_single_number_heading_pane_t2

0x3b4a,	// (0x0004a948) list_single_number_heading_pane_t3_ParamLimits

0x3b4a,	// (0x0004a948) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x000563db) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x000563db) list_single_number_heading_pane_t

0x7977,	// (0x0004e775) list_single_graphic_heading_pane_g1_ParamLimits

0x7977,	// (0x0004e775) list_single_graphic_heading_pane_g1

0x798b,	// (0x0004e789) list_single_graphic_heading_pane_g4_ParamLimits

0x798b,	// (0x0004e789) list_single_graphic_heading_pane_g4

0x2eb9,	// (0x00049cb7) list_single_graphic_heading_pane_g5_ParamLimits

0x2eb9,	// (0x00049cb7) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x000563e2) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x000563e2) list_single_graphic_heading_pane_g

0x3b86,	// (0x0004a984) list_single_graphic_heading_pane_t1_ParamLimits

0x3b86,	// (0x0004a984) list_single_graphic_heading_pane_t1

0x799c,	// (0x0004e79a) list_single_graphic_heading_pane_t2_ParamLimits

0x799c,	// (0x0004e79a) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x000563e9) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x000563e9) list_single_graphic_heading_pane_t

0x43ad,	// (0x0004b1ab) list_single_large_graphic_pane_g1_ParamLimits

0x43ad,	// (0x0004b1ab) list_single_large_graphic_pane_g1

0x2ead,	// (0x00049cab) list_single_large_graphic_pane_g2_ParamLimits

0x2ead,	// (0x00049cab) list_single_large_graphic_pane_g2

0x2eb9,	// (0x00049cb7) list_single_large_graphic_pane_g3_ParamLimits

0x2eb9,	// (0x00049cb7) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000563ee) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000563ee) list_single_large_graphic_pane_g

0xce00,	// (0x00053bfe) wait_border_pane_g2_copy1

0x8e55,	// (0x0004fc53) list_single_large_graphic_pane_g4_cp2

0x3b86,	// (0x0004a984) list_single_large_graphic_pane_t1_ParamLimits

0x3b86,	// (0x0004a984) list_single_large_graphic_pane_t1

0x2f00,	// (0x00049cfe) list_double_pane_g1_ParamLimits

0x2f00,	// (0x00049cfe) list_double_pane_g1

0x2f0c,	// (0x00049d0a) list_double_pane_g2_ParamLimits

0x2f0c,	// (0x00049d0a) list_double_pane_g2

0x0001,

0xf5f7,	// (0x000563f5) list_double_pane_g_ParamLimits

0xf5f7,	// (0x000563f5) list_double_pane_g

0x79b4,	// (0x0004e7b2) list_double_pane_t1_ParamLimits

0x79b4,	// (0x0004e7b2) list_double_pane_t1

0x79ca,	// (0x0004e7c8) list_double_pane_t2_ParamLimits

0x79ca,	// (0x0004e7c8) list_double_pane_t2

0x0001,

0xf5fc,	// (0x000563fa) list_double_pane_t_ParamLimits

0xf5fc,	// (0x000563fa) list_double_pane_t

0x79dc,	// (0x0004e7da) list_double2_pane_g1_ParamLimits

0x79dc,	// (0x0004e7da) list_double2_pane_g1

0x0b2f,	// (0x0004792d) list_double2_pane_g2_ParamLimits

0x0b2f,	// (0x0004792d) list_double2_pane_g2

0x0001,

0xf601,	// (0x000563ff) list_double2_pane_g_ParamLimits

0xf601,	// (0x000563ff) list_double2_pane_g

0x79ed,	// (0x0004e7eb) list_double2_pane_t1_ParamLimits

0x79ed,	// (0x0004e7eb) list_double2_pane_t1

0x7a03,	// (0x0004e801) list_double2_pane_t2_ParamLimits

0x7a03,	// (0x0004e801) list_double2_pane_t2

0x0001,

0xf606,	// (0x00056404) list_double2_pane_t_ParamLimits

0xf606,	// (0x00056404) list_double2_pane_t

0x2f00,	// (0x00049cfe) list_double_number_pane_g1_ParamLimits

0x2f00,	// (0x00049cfe) list_double_number_pane_g1

0x2f0c,	// (0x00049d0a) list_double_number_pane_g2_ParamLimits

0x2f0c,	// (0x00049d0a) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x000563f5) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x000563f5) list_double_number_pane_g

0x7a15,	// (0x0004e813) list_double_number_pane_t1_ParamLimits

0x7a15,	// (0x0004e813) list_double_number_pane_t1

0x09a2,	// (0x000477a0) list_double_number_pane_t2_ParamLimits

0x09a2,	// (0x000477a0) list_double_number_pane_t2

0x7a27,	// (0x0004e825) list_double_number_pane_t3_ParamLimits

0x7a27,	// (0x0004e825) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00056409) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00056409) list_double_number_pane_t

0x0996,	// (0x00047794) list_double_graphic_pane_g1_ParamLimits

0x0996,	// (0x00047794) list_double_graphic_pane_g1

0x8e5d,	// (0x0004fc5b) list_double_graphic_pane_g2_ParamLimits

0x8e5d,	// (0x0004fc5b) list_double_graphic_pane_g2

0x8e6c,	// (0x0004fc6a) list_double_graphic_pane_g3_ParamLimits

0x8e6c,	// (0x0004fc6a) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00056410) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00056410) list_double_graphic_pane_g

0x7a39,	// (0x0004e837) list_double_graphic_pane_t1_ParamLimits

0x7a39,	// (0x0004e837) list_double_graphic_pane_t1

0x7a4f,	// (0x0004e84d) list_double_graphic_pane_t2_ParamLimits

0x7a4f,	// (0x0004e84d) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00056419) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00056419) list_double_graphic_pane_t

0x7a61,	// (0x0004e85f) list_double2_graphic_pane_g1_ParamLimits

0x7a61,	// (0x0004e85f) list_double2_graphic_pane_g1

0xba1e,	// (0x0005281c) list_double2_graphic_pane_g2_ParamLimits

0xba1e,	// (0x0005281c) list_double2_graphic_pane_g2

0x8e84,	// (0x0004fc82) list_double2_graphic_pane_g3_ParamLimits

0x8e84,	// (0x0004fc82) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0005641e) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0005641e) list_double2_graphic_pane_g

0x7a6d,	// (0x0004e86b) list_double2_graphic_pane_t1_ParamLimits

0x7a6d,	// (0x0004e86b) list_double2_graphic_pane_t1

0x7a83,	// (0x0004e881) list_double2_graphic_pane_t2_ParamLimits

0x7a83,	// (0x0004e881) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00056425) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00056425) list_double2_graphic_pane_t

0x7a95,	// (0x0004e893) list_double_large_graphic_pane_g1_ParamLimits

0x7a95,	// (0x0004e893) list_double_large_graphic_pane_g1

0x7ab4,	// (0x0004e8b2) list_double_large_graphic_pane_g2_ParamLimits

0x7ab4,	// (0x0004e8b2) list_double_large_graphic_pane_g2

0x2f0c,	// (0x00049d0a) list_double_large_graphic_pane_g3_ParamLimits

0x2f0c,	// (0x00049d0a) list_double_large_graphic_pane_g3

0x7aca,	// (0x0004e8c8) list_double_large_graphic_pane_g4_ParamLimits

0x7aca,	// (0x0004e8c8) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0005642a) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0005642a) list_double_large_graphic_pane_g

0x7add,	// (0x0004e8db) list_double_large_graphic_pane_t1_ParamLimits

0x7add,	// (0x0004e8db) list_double_large_graphic_pane_t1

0x7af6,	// (0x0004e8f4) list_double_large_graphic_pane_t2_ParamLimits

0x7af6,	// (0x0004e8f4) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00056435) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00056435) list_double_large_graphic_pane_t

0x8e90,	// (0x0004fc8e) list_double2_large_graphic_pane_g1_ParamLimits

0x8e90,	// (0x0004fc8e) list_double2_large_graphic_pane_g1

0x8e9c,	// (0x0004fc9a) list_double2_large_graphic_pane_g2_ParamLimits

0x8e9c,	// (0x0004fc9a) list_double2_large_graphic_pane_g2

0x8e84,	// (0x0004fc82) list_double2_large_graphic_pane_g3_ParamLimits

0x8e84,	// (0x0004fc82) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0005643a) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0005643a) list_double2_large_graphic_pane_g

0x7b08,	// (0x0004e906) list_double2_large_graphic_pane_t1_ParamLimits

0x7b08,	// (0x0004e906) list_double2_large_graphic_pane_t1

0x7b1e,	// (0x0004e91c) list_double2_large_graphic_pane_t2_ParamLimits

0x7b1e,	// (0x0004e91c) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x00056441) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x00056441) list_double2_large_graphic_pane_t

0x7b30,	// (0x0004e92e) list_double_heading_pane_g1_ParamLimits

0x7b30,	// (0x0004e92e) list_double_heading_pane_g1

0x7b41,	// (0x0004e93f) list_double_heading_pane_g2_ParamLimits

0x7b41,	// (0x0004e93f) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x00056446) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x00056446) list_double_heading_pane_g

0x7b4d,	// (0x0004e94b) list_double_heading_pane_t1_ParamLimits

0x7b4d,	// (0x0004e94b) list_double_heading_pane_t1

0x7a03,	// (0x0004e801) list_double_heading_pane_t2_ParamLimits

0x7a03,	// (0x0004e801) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0005644b) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0005644b) list_double_heading_pane_t

0x0956,	// (0x00047754) list_double_graphic_heading_pane_g1_ParamLimits

0x0956,	// (0x00047754) list_double_graphic_heading_pane_g1

0x7b30,	// (0x0004e92e) list_double_graphic_heading_pane_g2_ParamLimits

0x7b30,	// (0x0004e92e) list_double_graphic_heading_pane_g2

0x7b41,	// (0x0004e93f) list_double_graphic_heading_pane_g3_ParamLimits

0x7b41,	// (0x0004e93f) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x00056450) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x00056450) list_double_graphic_heading_pane_g

0x7b63,	// (0x0004e961) list_double_graphic_heading_pane_t1_ParamLimits

0x7b63,	// (0x0004e961) list_double_graphic_heading_pane_t1

0x7a83,	// (0x0004e881) list_double_graphic_heading_pane_t2_ParamLimits

0x7a83,	// (0x0004e881) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x00056457) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x00056457) list_double_graphic_heading_pane_t

0x7b79,	// (0x0004e977) list_double_time_pane_g1_ParamLimits

0x7b79,	// (0x0004e977) list_double_time_pane_g1

0x08e8,	// (0x000476e6) list_double_time_pane_g2_ParamLimits

0x08e8,	// (0x000476e6) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0005645c) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0005645c) list_double_time_pane_g

0x7b8a,	// (0x0004e988) list_double_time_pane_t1_ParamLimits

0x7b8a,	// (0x0004e988) list_double_time_pane_t1

0x7ba0,	// (0x0004e99e) list_double_time_pane_t2_ParamLimits

0x7ba0,	// (0x0004e99e) list_double_time_pane_t2

0x7bb2,	// (0x0004e9b0) list_double_time_pane_t3_ParamLimits

0x7bb2,	// (0x0004e9b0) list_double_time_pane_t3

0x7bc4,	// (0x0004e9c2) list_double_time_pane_t4_ParamLimits

0x7bc4,	// (0x0004e9c2) list_double_time_pane_t4

0x0003,

0xf663,	// (0x00056461) list_double_time_pane_t_ParamLimits

0xf663,	// (0x00056461) list_double_time_pane_t

0x0b23,	// (0x00047921) list_setting_pane_g1_ParamLimits

0x0b23,	// (0x00047921) list_setting_pane_g1

0x0b2f,	// (0x0004792d) list_setting_pane_g2_ParamLimits

0x0b2f,	// (0x0004792d) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0005646a) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0005646a) list_setting_pane_g

0x7bd6,	// (0x0004e9d4) list_setting_pane_t1_ParamLimits

0x7bd6,	// (0x0004e9d4) list_setting_pane_t1

0x7bf0,	// (0x0004e9ee) list_setting_pane_t2_ParamLimits

0x7bf0,	// (0x0004e9ee) list_setting_pane_t2

0x0002,

0xf671,	// (0x0005646f) list_setting_pane_t_ParamLimits

0xf671,	// (0x0005646f) list_setting_pane_t

0x7c2d,	// (0x0004ea2b) set_value_pane_cp_ParamLimits

0x7c2d,	// (0x0004ea2b) set_value_pane_cp

0x0b9e,	// (0x0004799c) list_setting_number_pane_g1_ParamLimits

0x0b9e,	// (0x0004799c) list_setting_number_pane_g1

0x0baa,	// (0x000479a8) list_setting_number_pane_g2_ParamLimits

0x0baa,	// (0x000479a8) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x00056476) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x00056476) list_setting_number_pane_g

0x7c39,	// (0x0004ea37) list_setting_number_pane_t1_ParamLimits

0x7c39,	// (0x0004ea37) list_setting_number_pane_t1

0x7c52,	// (0x0004ea50) list_setting_number_pane_t2_ParamLimits

0x7c52,	// (0x0004ea50) list_setting_number_pane_t2

0x7c6c,	// (0x0004ea6a) list_setting_number_pane_t3_ParamLimits

0x7c6c,	// (0x0004ea6a) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0005647b) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0005647b) list_setting_number_pane_t

0x7c2d,	// (0x0004ea2b) set_value_pane_ParamLimits

0x7c2d,	// (0x0004ea2b) set_value_pane

0xba2a,	// (0x00052828) bg_set_opt_pane_ParamLimits

0xba2a,	// (0x00052828) bg_set_opt_pane

0x0c2c,	// (0x00047a2a) set_value_pane_t1

0xba4b,	// (0x00052849) slider_set_pane_cp3

0xba54,	// (0x00052852) volume_small_pane_cp

0xba5d,	// (0x0005285b) list_form_gen_pane

0xba66,	// (0x00052864) scroll_pane_cp8

0x7caf,	// (0x0004eaad) form_field_data_pane_ParamLimits

0x7caf,	// (0x0004eaad) form_field_data_pane

0x7cc6,	// (0x0004eac4) form_field_data_wide_pane_ParamLimits

0x7cc6,	// (0x0004eac4) form_field_data_wide_pane

0x7ce6,	// (0x0004eae4) form_field_popup_pane_ParamLimits

0x7ce6,	// (0x0004eae4) form_field_popup_pane

0x7cfe,	// (0x0004eafc) form_field_popup_wide_pane_ParamLimits

0x7cfe,	// (0x0004eafc) form_field_popup_wide_pane

0x0cbe,	// (0x00047abc) form_field_slider_pane_ParamLimits

0x0cbe,	// (0x00047abc) form_field_slider_pane

0x0cd1,	// (0x00047acf) form_field_slider_wide_pane_ParamLimits

0x0cd1,	// (0x00047acf) form_field_slider_wide_pane

0xba77,	// (0x00052875) data_form_pane

0x7d25,	// (0x0004eb23) form_field_data_pane_t1

0xba83,	// (0x00052881) input_focus_pane

0xba91,	// (0x0005288f) data_form_wide_pane

0x0d14,	// (0x00047b12) form_field_data_wide_pane_t1

0xb7f2,	// (0x000525f0) input_focus_pane_cp6

0x7d3f,	// (0x0004eb3d) form_field_popup_pane_t1

0xba83,	// (0x00052881) input_focus_pane_cp7

0xbab1,	// (0x000528af) list_form_pane

0x0d58,	// (0x00047b56) form_field_popup_wide_pane_t1

0xba83,	// (0x00052881) input_focus_pane_cp8

0xbabd,	// (0x000528bb) list_form_wide_pane

0x7d61,	// (0x0004eb5f) form_field_slider_pane_t1_ParamLimits

0x7d61,	// (0x0004eb5f) form_field_slider_pane_t1

0x7d79,	// (0x0004eb77) form_field_slider_pane_t2_ParamLimits

0x7d79,	// (0x0004eb77) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0005648b) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0005648b) form_field_slider_pane_t

0xb007,	// (0x00051e05) input_focus_pane_cp9_ParamLimits

0xb007,	// (0x00051e05) input_focus_pane_cp9

0x7d8e,	// (0x0004eb8c) slider_cont_pane_ParamLimits

0x7d8e,	// (0x0004eb8c) slider_cont_pane

0xbacc,	// (0x000528ca) form_field_slider_wide_pane_t1_ParamLimits

0xbacc,	// (0x000528ca) form_field_slider_wide_pane_t1

0x0db6,	// (0x00047bb4) form_field_slider_wide_pane_t2_ParamLimits

0x0db6,	// (0x00047bb4) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x00056490) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x00056490) form_field_slider_wide_pane_t

0xb007,	// (0x00051e05) input_focus_pane_cp10_ParamLimits

0xb007,	// (0x00051e05) input_focus_pane_cp10

0x7da2,	// (0x0004eba0) slider_cont_pane_cp1_ParamLimits

0x7da2,	// (0x0004eba0) slider_cont_pane_cp1

0x7db6,	// (0x0004ebb4) slider_form_pane_cp

0xbade,	// (0x000528dc) input_focus_pane_g1

0xbae6,	// (0x000528e4) input_focus_pane_g2

0xbaee,	// (0x000528ec) input_focus_pane_g3

0xbaf6,	// (0x000528f4) input_focus_pane_g4

0xbafe,	// (0x000528fc) input_focus_pane_g5

0xbb06,	// (0x00052904) input_focus_pane_g6

0xbb0e,	// (0x0005290c) input_focus_pane_g7

0xbb16,	// (0x00052914) input_focus_pane_g8

0xbb1e,	// (0x0005291c) input_focus_pane_g9

0xafaf,	// (0x00051dad) input_focus_pane_g10

0x0009,

0xf697,	// (0x00056495) input_focus_pane_g

0xce09,	// (0x00053c07) wait_border_pane_g3_copy1

0x7dbe,	// (0x0004ebbc) data_form_pane_t1

0xafaf,	// (0x00051dad) wait_anim_pane_g1_copy1

0x8889,	// (0x0004f687) data_form_wide_pane_t1

0x7dd8,	// (0x0004ebd6) list_form_graphic_pane_cp_ParamLimits

0x7dd8,	// (0x0004ebd6) list_form_graphic_pane_cp

0xda2d,	// (0x0005482b) slider_form_pane_g1

0xda36,	// (0x00054834) slider_form_pane_g2

0x0006,

0xf995,	// (0x00056793) slider_form_pane_g

0x7dd8,	// (0x0004ebd6) list_form_graphic_pane_ParamLimits

0x7dd8,	// (0x0004ebd6) list_form_graphic_pane

0x2f87,	// (0x00049d85) list_form_graphic_pane_g1

0x2f8f,	// (0x00049d8d) list_form_graphic_pane_t1_ParamLimits

0x2f8f,	// (0x00049d8d) list_form_graphic_pane_t1

0xb015,	// (0x00051e13) list_highlight_pane_cp5_ParamLimits

0xb015,	// (0x00051e13) list_highlight_pane_cp5

0x7deb,	// (0x0004ebe9) find_pane_g1

0xbb26,	// (0x00052924) input_find_pane

0x7df4,	// (0x0004ebf2) input_find_pane_g1_ParamLimits

0x7df4,	// (0x0004ebf2) input_find_pane_g1

0x7e00,	// (0x0004ebfe) input_find_pane_t1_ParamLimits

0x7e00,	// (0x0004ebfe) input_find_pane_t1

0x7e15,	// (0x0004ec13) input_find_pane_t2_ParamLimits

0x7e15,	// (0x0004ec13) input_find_pane_t2

0x0001,

0xf6ac,	// (0x000564aa) input_find_pane_t_ParamLimits

0xf6ac,	// (0x000564aa) input_find_pane_t

0xbb2f,	// (0x0005292d) input_focus_pane_cp5_ParamLimits

0xbb2f,	// (0x0005292d) input_focus_pane_cp5

0xbb3d,	// (0x0005293b) bg_popup_window_pane_cp2_ParamLimits

0xbb3d,	// (0x0005293b) bg_popup_window_pane_cp2

0xbb4a,	// (0x00052948) listscroll_menu_pane_ParamLimits

0xbb4a,	// (0x00052948) listscroll_menu_pane

0x9927,	// (0x00050725) popup_submenu_window_ParamLimits

0x9927,	// (0x00050725) popup_submenu_window

0xbb56,	// (0x00052954) find_popup_pane_g1

0xbb5e,	// (0x0005295c) input_popup_find_pane_cp

0xbb2f,	// (0x0005292d) input_focus_pane_cp4_ParamLimits

0xbb2f,	// (0x0005292d) input_focus_pane_cp4

0xbb68,	// (0x00052966) input_popup_find_pane_t1_ParamLimits

0xbb68,	// (0x00052966) input_popup_find_pane_t1

0xafb9,	// (0x00051db7) bg_popup_sub_pane_cp

0xbb96,	// (0x00052994) listscroll_popup_sub_pane

0xbb9e,	// (0x0005299c) list_submenu_pane_ParamLimits

0xbb9e,	// (0x0005299c) list_submenu_pane

0xbbaf,	// (0x000529ad) scroll_pane_cp4

0xbbb7,	// (0x000529b5) list_single_popup_submenu_pane_ParamLimits

0xbbb7,	// (0x000529b5) list_single_popup_submenu_pane

0xbbca,	// (0x000529c8) list_single_popup_submenu_pane_g1

0xbbd2,	// (0x000529d0) list_single_popup_submenu_pane_t1_ParamLimits

0xbbd2,	// (0x000529d0) list_single_popup_submenu_pane_t1

0xb007,	// (0x00051e05) bg_active_tab_pane_cp1_ParamLimits

0xb007,	// (0x00051e05) bg_active_tab_pane_cp1

0x995d,	// (0x0005075b) tabs_2_active_pane_g1

0x9965,	// (0x00050763) tabs_2_active_pane_t1

0xb007,	// (0x00051e05) bg_passive_tab_pane_cp1_ParamLimits

0xb007,	// (0x00051e05) bg_passive_tab_pane_cp1

0x995d,	// (0x0005075b) tabs_2_passive_pane_g1

0x9965,	// (0x00050763) tabs_2_passive_pane_t1

0xb015,	// (0x00051e13) bg_active_tab_pane_cp4

0x9977,	// (0x00050775) tabs_2_long_active_pane_t1

0xbbe7,	// (0x000529e5) bg_passive_tab_pane_cp4

0x19e4,	// (0x000487e2) list_single_midp_graphic_pane_g4_ParamLimits

0xb015,	// (0x00051e13) bg_active_tab_pane_cp5

0x998a,	// (0x00050788) tabs_3_long_active_pane_t1

0xbbe7,	// (0x000529e5) bg_passive_tab_pane_cp5

0x19e4,	// (0x000487e2) list_single_midp_graphic_pane_g4

0xb015,	// (0x00051e13) bg_popup_window_pane_cp13_ParamLimits

0xb015,	// (0x00051e13) bg_popup_window_pane_cp13

0xbbfc,	// (0x000529fa) listscroll_popup_fast_pane_ParamLimits

0xbbfc,	// (0x000529fa) listscroll_popup_fast_pane

0xbc0b,	// (0x00052a09) grid_popup_fast_pane_ParamLimits

0xbc0b,	// (0x00052a09) grid_popup_fast_pane

0xbc1d,	// (0x00052a1b) scroll_pane_cp9_ParamLimits

0xbc1d,	// (0x00052a1b) scroll_pane_cp9

0xee87,	// (0x00055c85) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xee87,	// (0x00055c85) list_single_graphic_hl_pane_t1_cp2

0xbc41,	// (0x00052a3f) input_focus_pane_cp20_ParamLimits

0xbc41,	// (0x00052a3f) input_focus_pane_cp20

0xbc4f,	// (0x00052a4d) query_popup_data_pane_t1_ParamLimits

0xbc4f,	// (0x00052a4d) query_popup_data_pane_t1

0xbc62,	// (0x00052a60) query_popup_data_pane_t2_ParamLimits

0xbc62,	// (0x00052a60) query_popup_data_pane_t2

0xbca8,	// (0x00052aa6) query_popup_data_pane_t3_ParamLimits

0xbca8,	// (0x00052aa6) query_popup_data_pane_t3

0xbce9,	// (0x00052ae7) query_popup_data_pane_t4_ParamLimits

0xbce9,	// (0x00052ae7) query_popup_data_pane_t4

0xbd25,	// (0x00052b23) query_popup_data_pane_t5_ParamLimits

0xbd25,	// (0x00052b23) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x000564af) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x000564af) query_popup_data_pane_t

0xbade,	// (0x000528dc) bg_set_opt_pane_g1

0xbae6,	// (0x000528e4) bg_set_opt_pane_g2

0xbaee,	// (0x000528ec) bg_set_opt_pane_g3

0xbaf6,	// (0x000528f4) bg_set_opt_pane_g4

0xbafe,	// (0x000528fc) bg_set_opt_pane_g5

0xbb06,	// (0x00052904) bg_set_opt_pane_g6

0xbb0e,	// (0x0005290c) bg_set_opt_pane_g7

0xbb16,	// (0x00052914) bg_set_opt_pane_g8

0xbb1e,	// (0x0005291c) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x000564ba) bg_set_opt_pane_g

0x109e,	// (0x00047e9c) control_top_pane_stacon_ParamLimits

0x109e,	// (0x00047e9c) control_top_pane_stacon

0x10f1,	// (0x00047eef) signal_pane_stacon_ParamLimits

0x10f1,	// (0x00047eef) signal_pane_stacon

0xc1a0,	// (0x00052f9e) stacon_top_pane_g1_ParamLimits

0xc1a0,	// (0x00052f9e) stacon_top_pane_g1

0x1116,	// (0x00047f14) title_pane_stacon_ParamLimits

0x1116,	// (0x00047f14) title_pane_stacon

0x1140,	// (0x00047f3e) uni_indicator_pane_stacon_ParamLimits

0x1140,	// (0x00047f3e) uni_indicator_pane_stacon

0x1155,	// (0x00047f53) battery_pane_stacon_ParamLimits

0x1155,	// (0x00047f53) battery_pane_stacon

0x1199,	// (0x00047f97) control_bottom_pane_stacon_ParamLimits

0x1199,	// (0x00047f97) control_bottom_pane_stacon

0x11bc,	// (0x00047fba) navi_pane_stacon_ParamLimits

0x11bc,	// (0x00047fba) navi_pane_stacon

0xc1c2,	// (0x00052fc0) stacon_bottom_pane_g1_ParamLimits

0xc1c2,	// (0x00052fc0) stacon_bottom_pane_g1

0x0dff,	// (0x00047bfd) aid_levels_signal_lsc_ParamLimits

0x0dff,	// (0x00047bfd) aid_levels_signal_lsc

0x0e16,	// (0x00047c14) signal_pane_stacon_g1_ParamLimits

0x0e16,	// (0x00047c14) signal_pane_stacon_g1

0x0e2a,	// (0x00047c28) signal_pane_stacon_g2_ParamLimits

0x0e2a,	// (0x00047c28) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x000564cd) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000564cd) signal_pane_stacon_g

0x0e5f,	// (0x00047c5d) title_pane_stacon_t1_ParamLimits

0x0e5f,	// (0x00047c5d) title_pane_stacon_t1

0xbd69,	// (0x00052b67) uni_indicator_pane_stacon_g1

0xbd73,	// (0x00052b71) uni_indicator_pane_stacon_g2

0xbd7d,	// (0x00052b7b) uni_indicator_pane_stacon_g3

0xbd87,	// (0x00052b85) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x000564d9) uni_indicator_pane_stacon_g

0x0e84,	// (0x00047c82) control_top_pane_stacon_g1

0x0e8c,	// (0x00047c8a) control_top_pane_stacon_t1_ParamLimits

0x0e8c,	// (0x00047c8a) control_top_pane_stacon_t1

0x0ec3,	// (0x00047cc1) aid_levels_battery_lsc_ParamLimits

0x0ec3,	// (0x00047cc1) aid_levels_battery_lsc

0x0edb,	// (0x00047cd9) battery_pane_stacon_g1_ParamLimits

0x0edb,	// (0x00047cd9) battery_pane_stacon_g1

0x0eee,	// (0x00047cec) battery_pane_stacon_g2_ParamLimits

0x0eee,	// (0x00047cec) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x000564e2) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x000564e2) battery_pane_stacon_g

0x0f2c,	// (0x00047d2a) navi_icon_pane_stacon

0x0f40,	// (0x00047d3e) navi_navi_pane_stacon

0x0f2c,	// (0x00047d2a) navi_text_pane_stacon

0x0e84,	// (0x00047c82) control_bottom_pane_stacon_g1

0x0f54,	// (0x00047d52) control_bottom_pane_stacon_t1_ParamLimits

0x0f54,	// (0x00047d52) control_bottom_pane_stacon_t1

0x999c,	// (0x0005079a) grid_app_pane_ParamLimits

0x999c,	// (0x0005079a) grid_app_pane

0x99d2,	// (0x000507d0) scroll_pane_cp15_ParamLimits

0x99d2,	// (0x000507d0) scroll_pane_cp15

0x99eb,	// (0x000507e9) cell_app_pane_ParamLimits

0x99eb,	// (0x000507e9) cell_app_pane

0x9a32,	// (0x00050830) cell_app_pane_g1_ParamLimits

0x9a32,	// (0x00050830) cell_app_pane_g1

0xbdab,	// (0x00052ba9) cell_app_pane_g2_ParamLimits

0xbdab,	// (0x00052ba9) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x000564e7) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x000564e7) cell_app_pane_g

0x9a52,	// (0x00050850) cell_app_pane_t1_ParamLimits

0x9a52,	// (0x00050850) cell_app_pane_t1

0xbdb7,	// (0x00052bb5) grid_highlight_pane_ParamLimits

0xbdb7,	// (0x00052bb5) grid_highlight_pane

0xbade,	// (0x000528dc) cell_highlight_pane_g1

0xbae6,	// (0x000528e4) cell_highlight_pane_g2

0xbaee,	// (0x000528ec) cell_highlight_pane_g3

0xbaf6,	// (0x000528f4) cell_highlight_pane_g4

0xbafe,	// (0x000528fc) cell_highlight_pane_g5

0xbb06,	// (0x00052904) cell_highlight_pane_g6

0xbb0e,	// (0x0005290c) cell_highlight_pane_g7

0xbb16,	// (0x00052914) cell_highlight_pane_g8

0xbb1e,	// (0x0005291c) cell_highlight_pane_g9

0xafaf,	// (0x00051dad) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x00056495) cell_highlight_pane_g

0xbdc8,	// (0x00052bc6) bg_scroll_pane

0x0f9e,	// (0x00047d9c) scroll_handle_pane

0xbe0f,	// (0x00052c0d) scroll_bg_pane_g1

0xbe24,	// (0x00052c22) scroll_bg_pane_g2

0xbe3c,	// (0x00052c3a) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x000564ec) scroll_bg_pane_g

0xbe51,	// (0x00052c4f) scroll_handle_focus_pane_ParamLimits

0xbe51,	// (0x00052c4f) scroll_handle_focus_pane

0xbe0f,	// (0x00052c0d) scroll_handle_pane_g1

0xbe5e,	// (0x00052c5c) scroll_handle_pane_g2

0xbe3c,	// (0x00052c3a) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x000564f3) scroll_handle_pane_g

0xbb2f,	// (0x0005292d) bg_popup_sub_pane_cp21_ParamLimits

0xbb2f,	// (0x0005292d) bg_popup_sub_pane_cp21

0xbe72,	// (0x00052c70) popup_fep_japan_predictive_window_t1_ParamLimits

0xbe72,	// (0x00052c70) popup_fep_japan_predictive_window_t1

0xbe89,	// (0x00052c87) popup_fep_japan_predictive_window_t2_ParamLimits

0xbe89,	// (0x00052c87) popup_fep_japan_predictive_window_t2

0xbebc,	// (0x00052cba) popup_fep_japan_predictive_window_t3_ParamLimits

0xbebc,	// (0x00052cba) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x000564fa) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x000564fa) popup_fep_japan_predictive_window_t

0xafb9,	// (0x00051db7) bg_popup_sub_pane_cp23

0xbef3,	// (0x00052cf1) listscroll_japin_cand_pane

0xbefb,	// (0x00052cf9) popup_fep_japan_candidate_window_t1

0xbf09,	// (0x00052d07) candidate_pane_ParamLimits

0xbf09,	// (0x00052d07) candidate_pane

0xbf1b,	// (0x00052d19) scroll_pane_cp30

0xbf23,	// (0x00052d21) list_single_popup_jap_candidate_pane_ParamLimits

0xbf23,	// (0x00052d21) list_single_popup_jap_candidate_pane

0xafb9,	// (0x00051db7) list_highlight_pane_cp30

0xbf37,	// (0x00052d35) list_single_popup_jap_candidate_pane_t1

0xbf46,	// (0x00052d44) level_1_signal

0xbf53,	// (0x00052d51) level_2_signal

0xbf60,	// (0x00052d5e) level_3_signal

0xbf6d,	// (0x00052d6b) level_4_signal

0xbf7a,	// (0x00052d78) level_5_signal

0xbf87,	// (0x00052d85) level_6_signal

0xbf94,	// (0x00052d92) level_7_signal

0xbf46,	// (0x00052d44) level_1_battery

0xbf53,	// (0x00052d51) level_2_battery

0xbf60,	// (0x00052d5e) level_3_battery

0xbf6d,	// (0x00052d6b) level_4_battery

0xbf7a,	// (0x00052d78) level_5_battery

0xbf87,	// (0x00052d85) level_6_battery

0xbf94,	// (0x00052d92) level_7_battery

0xbfb9,	// (0x00052db7) list_menu_pane_ParamLimits

0xbfb9,	// (0x00052db7) list_menu_pane

0xbfcf,	// (0x00052dcd) scroll_pane_cp25_ParamLimits

0xbfcf,	// (0x00052dcd) scroll_pane_cp25

0xbfe8,	// (0x00052de6) list_double2_graphic_pane_cp2_ParamLimits

0xbfe8,	// (0x00052de6) list_double2_graphic_pane_cp2

0xbfe8,	// (0x00052de6) list_double2_large_graphic_pane_cp2_ParamLimits

0xbfe8,	// (0x00052de6) list_double2_large_graphic_pane_cp2

0xbfe8,	// (0x00052de6) list_double2_pane_cp2_ParamLimits

0xbfe8,	// (0x00052de6) list_double2_pane_cp2

0xbfe8,	// (0x00052de6) list_double_graphic_pane_cp2_ParamLimits

0xbfe8,	// (0x00052de6) list_double_graphic_pane_cp2

0xbfe8,	// (0x00052de6) list_double_large_graphic_pane_cp2_ParamLimits

0xbfe8,	// (0x00052de6) list_double_large_graphic_pane_cp2

0xbfe8,	// (0x00052de6) list_double_number_pane_cp2_ParamLimits

0xbfe8,	// (0x00052de6) list_double_number_pane_cp2

0xbfe8,	// (0x00052de6) list_double_pane_cp2_ParamLimits

0xbfe8,	// (0x00052de6) list_double_pane_cp2

0xc00a,	// (0x00052e08) list_single_2graphic_pane_cp2_ParamLimits

0xc00a,	// (0x00052e08) list_single_2graphic_pane_cp2

0xc00a,	// (0x00052e08) list_single_graphic_heading_pane_cp2_ParamLimits

0xc00a,	// (0x00052e08) list_single_graphic_heading_pane_cp2

0xc00a,	// (0x00052e08) list_single_graphic_pane_cp2_ParamLimits

0xc00a,	// (0x00052e08) list_single_graphic_pane_cp2

0xc00a,	// (0x00052e08) list_single_heading_pane_cp2_ParamLimits

0xc00a,	// (0x00052e08) list_single_heading_pane_cp2

0xc021,	// (0x00052e1f) list_single_large_graphic_pane_cp2_ParamLimits

0xc021,	// (0x00052e1f) list_single_large_graphic_pane_cp2

0xc00a,	// (0x00052e08) list_single_number_heading_pane_cp2_ParamLimits

0xc00a,	// (0x00052e08) list_single_number_heading_pane_cp2

0xc00a,	// (0x00052e08) list_single_number_pane_cp2_ParamLimits

0xc00a,	// (0x00052e08) list_single_number_pane_cp2

0xc00a,	// (0x00052e08) list_single_pane_cp2_ParamLimits

0xc00a,	// (0x00052e08) list_single_pane_cp2

0xc03b,	// (0x00052e39) bg_popup_sub_pane_cp22

0x1050,	// (0x00047e4e) popup_side_volume_key_window_g1

0x107a,	// (0x00047e78) popup_side_volume_key_window_t1

0x1096,	// (0x00047e94) volume_small_pane_cp1

0xb007,	// (0x00051e05) bg_popup_sub_pane_cp24_ParamLimits

0xb007,	// (0x00051e05) bg_popup_sub_pane_cp24

0xc051,	// (0x00052e4f) fep_china_uni_candidate_pane_ParamLimits

0xc051,	// (0x00052e4f) fep_china_uni_candidate_pane

0xc065,	// (0x00052e63) fep_china_uni_entry_pane

0xc075,	// (0x00052e73) popup_fep_china_uni_window_g1

0xc091,	// (0x00052e8f) fep_china_uni_entry_pane_g1

0xc099,	// (0x00052e97) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0005652b) fep_china_uni_entry_pane_g

0xc0a1,	// (0x00052e9f) fep_entry_item_pane

0xc0ab,	// (0x00052ea9) fep_candidate_item_pane

0xc0b3,	// (0x00052eb1) fep_china_uni_candidate_pane_g1

0xc0bb,	// (0x00052eb9) fep_china_uni_candidate_pane_g2

0xc0c3,	// (0x00052ec1) fep_china_uni_candidate_pane_g3

0xc0cb,	// (0x00052ec9) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x00056530) fep_china_uni_candidate_pane_g

0xafaf,	// (0x00051dad) fep_entry_item_pane_g1

0xc0d3,	// (0x00052ed1) fep_entry_item_pane_t1_ParamLimits

0xc0d3,	// (0x00052ed1) fep_entry_item_pane_t1

0xc0e9,	// (0x00052ee7) fep_candidate_item_pane_t1_ParamLimits

0xc0e9,	// (0x00052ee7) fep_candidate_item_pane_t1

0xc0fe,	// (0x00052efc) fep_candidate_item_pane_t2_ParamLimits

0xc0fe,	// (0x00052efc) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x00056539) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x00056539) fep_candidate_item_pane_t

0xb015,	// (0x00051e13) list_highlight_pane_cp31_ParamLimits

0xb015,	// (0x00051e13) list_highlight_pane_cp31

0xc110,	// (0x00052f0e) level_1_signal_lsc

0xc119,	// (0x00052f17) level_2_signal_lsc

0xc122,	// (0x00052f20) level_3_signal_lsc

0xc12b,	// (0x00052f29) level_4_signal_lsc

0xc134,	// (0x00052f32) level_5_signal_lsc

0xc13d,	// (0x00052f3b) level_6_signal_lsc

0xc146,	// (0x00052f44) level_7_signal_lsc

0xc146,	// (0x00052f44) level_1_battery_lsc

0xc14f,	// (0x00052f4d) level_2_battery_lsc

0xc158,	// (0x00052f56) level_3_battery_lsc

0xc161,	// (0x00052f5f) level_4_battery_lsc

0xc16a,	// (0x00052f68) level_5_battery_lsc

0xc173,	// (0x00052f71) level_6_battery_lsc

0xc110,	// (0x00052f0e) level_7_battery_lsc

0xc17c,	// (0x00052f7a) scroll_handle_focus_pane_g1

0xc185,	// (0x00052f83) scroll_handle_focus_pane_g2

0xc18e,	// (0x00052f8c) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0005653e) scroll_handle_focus_pane_g

0x7e33,	// (0x0004ec31) list_single_2graphic_pane_g1_ParamLimits

0x7e33,	// (0x0004ec31) list_single_2graphic_pane_g1

0x798b,	// (0x0004e789) list_single_2graphic_pane_g2_ParamLimits

0x798b,	// (0x0004e789) list_single_2graphic_pane_g2

0x2eb9,	// (0x00049cb7) list_single_2graphic_pane_g3_ParamLimits

0x2eb9,	// (0x00049cb7) list_single_2graphic_pane_g3

0x7e3f,	// (0x0004ec3d) list_single_2graphic_pane_g4_ParamLimits

0x7e3f,	// (0x0004ec3d) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x00056545) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x00056545) list_single_2graphic_pane_g

0x7e4b,	// (0x0004ec49) list_single_2graphic_pane_t1_ParamLimits

0x7e4b,	// (0x0004ec49) list_single_2graphic_pane_t1

0x8ead,	// (0x0004fcab) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8ead,	// (0x0004fcab) list_double2_graphic_large_graphic_pane_g1

0x8e9c,	// (0x0004fc9a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8e9c,	// (0x0004fc9a) list_double2_graphic_large_graphic_pane_g2

0x8e84,	// (0x0004fc82) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8e84,	// (0x0004fc82) list_double2_graphic_large_graphic_pane_g3

0x8ebf,	// (0x0004fcbd) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8ebf,	// (0x0004fcbd) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0005654e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0005654e) list_double2_graphic_large_graphic_pane_g

0x7e79,	// (0x0004ec77) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7e79,	// (0x0004ec77) list_double2_graphic_large_graphic_pane_t1

0x7e8f,	// (0x0004ec8d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7e8f,	// (0x0004ec8d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x00056557) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x00056557) list_double2_graphic_large_graphic_pane_t

0xc250,	// (0x0005304e) popup_fast_swap_window_ParamLimits

0xc250,	// (0x0005304e) popup_fast_swap_window

0xc26c,	// (0x0005306a) popup_side_volume_key_window

0xc286,	// (0x00053084) stacon_top_pane

0xc290,	// (0x0005308e) status_pane_ParamLimits

0xc290,	// (0x0005308e) status_pane

0xc286,	// (0x00053084) status_small_pane

0xafb9,	// (0x00051db7) control_pane

0xafb9,	// (0x00051db7) stacon_bottom_pane

0xba66,	// (0x00052864) scroll_pane_cp121

0xba5d,	// (0x0005285b) set_content_pane

0x9ae4,	// (0x000508e2) bg_active_tab_pane_g1_cp1

0xc197,	// (0x00052f95) bg_active_tab_pane_g2_cp1

0x9aed,	// (0x000508eb) bg_active_tab_pane_g3_cp1

0x9ae4,	// (0x000508e2) bg_passive_tab_pane_g1_cp1

0xc197,	// (0x00052f95) bg_passive_tab_pane_g2_cp1

0x9aed,	// (0x000508eb) bg_passive_tab_pane_g3_cp1

0x9af6,	// (0x000508f4) bg_active_tab_pane_g1_cp2

0xc197,	// (0x00052f95) bg_active_tab_pane_g2_cp2

0x9aff,	// (0x000508fd) bg_active_tab_pane_g3_cp2

0x9af6,	// (0x000508f4) bg_passive_tab_pane_g1_cp2

0xc197,	// (0x00052f95) bg_passive_tab_pane_g2_cp2

0x9aff,	// (0x000508fd) bg_passive_tab_pane_g3_cp2

0x9b08,	// (0x00050906) bg_active_tab_pane_g1_cp3

0xc197,	// (0x00052f95) bg_active_tab_pane_g2_cp3

0x9b11,	// (0x0005090f) bg_active_tab_pane_g3_cp3

0x9b08,	// (0x00050906) bg_passive_tab_pane_g1_cp3

0xc197,	// (0x00052f95) bg_passive_tab_pane_g2_cp3

0x9b11,	// (0x0005090f) bg_passive_tab_pane_g3_cp3

0x9b1a,	// (0x00050918) bg_active_tab_pane_g1_cp4

0xc197,	// (0x00052f95) bg_active_tab_pane_g2_cp4

0x9b23,	// (0x00050921) bg_active_tab_pane_g3_cp4

0x9b1a,	// (0x00050918) bg_passive_tab_pane_g1_cp4

0xc197,	// (0x00052f95) bg_passive_tab_pane_g2_cp4

0x9b23,	// (0x00050921) bg_passive_tab_pane_g3_cp4

0xc1de,	// (0x00052fdc) bg_active_tab_pane_g1_cp5

0xc197,	// (0x00052f95) bg_active_tab_pane_g2_cp5

0xc1e7,	// (0x00052fe5) bg_active_tab_pane_g3_cp5

0xc1de,	// (0x00052fdc) bg_passive_tab_pane_g1_cp5

0xc197,	// (0x00052f95) bg_passive_tab_pane_g2_cp5

0xc1e7,	// (0x00052fe5) bg_passive_tab_pane_g3_cp5

0xd08c,	// (0x00053e8a) list_set_graphic_pane_ParamLimits

0xd08c,	// (0x00053e8a) list_set_graphic_pane

0xafb9,	// (0x00051db7) bg_set_opt_pane_cp4

0xc1f0,	// (0x00052fee) list_set_graphic_pane_g1_ParamLimits

0xc1f0,	// (0x00052fee) list_set_graphic_pane_g1

0xc1fc,	// (0x00052ffa) list_set_graphic_pane_g2_ParamLimits

0xc1fc,	// (0x00052ffa) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0005655c) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0005655c) list_set_graphic_pane_g

0x0009,

0xfada,	// (0x000568d8) volume_small_pane_cp_g

0x9b2c,	// (0x0005092a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9b2c,	// (0x0005092a) list_double2_large_graphic_pane_g1_cp2

0x9be1,	// (0x000509df) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9be1,	// (0x000509df) list_double2_large_graphic_pane_g2_cp2

0xc220,	// (0x0005301e) list_double2_large_graphic_pane_g3_cp2

0xc228,	// (0x00053026) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc228,	// (0x00053026) list_double2_large_graphic_pane_t1_cp2

0xc23e,	// (0x0005303c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc23e,	// (0x0005303c) list_double2_large_graphic_pane_t2_cp2

0xa344,	// (0x00051142) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa344,	// (0x00051142) list_double_large_graphic_pane_g1_cp2

0xa357,	// (0x00051155) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa357,	// (0x00051155) list_double_large_graphic_pane_g2_cp2

0xc371,	// (0x0005316f) list_double_large_graphic_pane_g3_cp2

0xd7eb,	// (0x000545e9) list_double_large_graphic_pane_g4_cp

0xd7f3,	// (0x000545f1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd7f3,	// (0x000545f1) list_double_large_graphic_pane_t1_cp2

0xd80a,	// (0x00054608) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd80a,	// (0x00054608) list_double_large_graphic_pane_t2_cp2

0x9bf2,	// (0x000509f0) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9bf2,	// (0x000509f0) list_double2_graphic_pane_g1_cp2

0x9c00,	// (0x000509fe) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9c00,	// (0x000509fe) list_double2_graphic_pane_g2_cp2

0x9c11,	// (0x00050a0f) list_double2_graphic_pane_g3_cp2

0xc29e,	// (0x0005309c) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc29e,	// (0x0005309c) list_double2_graphic_pane_t1_cp2

0xc2b4,	// (0x000530b2) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc2b4,	// (0x000530b2) list_double2_graphic_pane_t2_cp2

0xc2c6,	// (0x000530c4) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc2c6,	// (0x000530c4) list_single_number_heading_pane_g1_cp2

0xc2d2,	// (0x000530d0) list_single_number_heading_pane_g2_cp2

0xc2da,	// (0x000530d8) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc2da,	// (0x000530d8) list_single_number_heading_pane_t1_cp2

0x9c1b,	// (0x00050a19) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9c1b,	// (0x00050a19) list_single_number_heading_pane_t2_cp2

0xc2f0,	// (0x000530ee) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc2f0,	// (0x000530ee) list_single_number_heading_pane_t3_cp2

0xc2c6,	// (0x000530c4) list_single_heading_pane_g1_cp2_ParamLimits

0xc2c6,	// (0x000530c4) list_single_heading_pane_g1_cp2

0xc2d2,	// (0x000530d0) list_single_heading_pane_g2_cp2

0xc2da,	// (0x000530d8) list_single_heading_pane_t1_cp2_ParamLimits

0xc2da,	// (0x000530d8) list_single_heading_pane_t1_cp2

0xa330,	// (0x0005112e) list_single_heading_pane_t2_cp2_ParamLimits

0xa330,	// (0x0005112e) list_single_heading_pane_t2_cp2

0xd54f,	// (0x0005434d) list_double_graphic_pane_g1_cp2_ParamLimits

0xd54f,	// (0x0005434d) list_double_graphic_pane_g1_cp2

0xd55b,	// (0x00054359) list_double_graphic_pane_g2_cp2_ParamLimits

0xd55b,	// (0x00054359) list_double_graphic_pane_g2_cp2

0xd56a,	// (0x00054368) list_double_graphic_pane_g3_cp2

0xd572,	// (0x00054370) list_double_graphic_pane_t1_cp2_ParamLimits

0xd572,	// (0x00054370) list_double_graphic_pane_t1_cp2

0xd588,	// (0x00054386) list_double_graphic_pane_t2_cp2_ParamLimits

0xd588,	// (0x00054386) list_double_graphic_pane_t2_cp2

0xc365,	// (0x00053163) list_double_number_pane_g1_cp2_ParamLimits

0xc365,	// (0x00053163) list_double_number_pane_g1_cp2

0xc371,	// (0x0005316f) list_double_number_pane_g2_cp2

0xa31c,	// (0x0005111a) list_double_number_pane_t1_cp2_ParamLimits

0xa31c,	// (0x0005111a) list_double_number_pane_t1_cp2

0xd527,	// (0x00054325) list_double_number_pane_t2_cp2_ParamLimits

0xd527,	// (0x00054325) list_double_number_pane_t2_cp2

0xd53d,	// (0x0005433b) list_double_number_pane_t3_cp2_ParamLimits

0xd53d,	// (0x0005433b) list_double_number_pane_t3_cp2

0xa26a,	// (0x00051068) list_single_graphic_pane_g1_cp2_ParamLimits

0xa26a,	// (0x00051068) list_single_graphic_pane_g1_cp2

0xc3b1,	// (0x000531af) list_single_graphic_pane_g2_cp2_ParamLimits

0xc3b1,	// (0x000531af) list_single_graphic_pane_g2_cp2

0xc3bd,	// (0x000531bb) list_single_graphic_pane_g3_cp2

0xd496,	// (0x00054294) list_single_graphic_pane_t1_cp2_ParamLimits

0xd496,	// (0x00054294) list_single_graphic_pane_t1_cp2

0xc3b1,	// (0x000531af) list_single_number_pane_g1_cp2_ParamLimits

0xc3b1,	// (0x000531af) list_single_number_pane_g1_cp2

0xc3bd,	// (0x000531bb) list_single_number_pane_g2_cp2

0xd496,	// (0x00054294) list_single_number_pane_t1_cp2_ParamLimits

0xd496,	// (0x00054294) list_single_number_pane_t1_cp2

0xa256,	// (0x00051054) list_single_number_pane_t2_cp2_ParamLimits

0xa256,	// (0x00051054) list_single_number_pane_t2_cp2

0x9be1,	// (0x000509df) list_double2_pane_g1_cp2_ParamLimits

0x9be1,	// (0x000509df) list_double2_pane_g1_cp2

0xc220,	// (0x0005301e) list_double2_pane_g2_cp2

0xc33d,	// (0x0005313b) list_double2_pane_t1_cp2_ParamLimits

0xc33d,	// (0x0005313b) list_double2_pane_t1_cp2

0xc353,	// (0x00053151) list_double2_pane_t2_cp2_ParamLimits

0xc353,	// (0x00053151) list_double2_pane_t2_cp2

0xc365,	// (0x00053163) list_double_pane_g1_cp2_ParamLimits

0xc365,	// (0x00053163) list_double_pane_g1_cp2

0xc371,	// (0x0005316f) list_double_pane_g2_cp2

0xc379,	// (0x00053177) list_double_pane_t1_cp2_ParamLimits

0xc379,	// (0x00053177) list_double_pane_t1_cp2

0xc38f,	// (0x0005318d) list_double_pane_t2_cp2_ParamLimits

0xc38f,	// (0x0005318d) list_double_pane_t2_cp2

0xc3a1,	// (0x0005319f) list_single_pane_cp2_g3

0xc3b1,	// (0x000531af) list_single_pane_g1_cp2_ParamLimits

0xc3b1,	// (0x000531af) list_single_pane_g1_cp2

0xc3bd,	// (0x000531bb) list_single_pane_g2_cp2

0xc3c5,	// (0x000531c3) list_single_pane_t1_cp2_ParamLimits

0xc3c5,	// (0x000531c3) list_single_pane_t1_cp2

0x9c47,	// (0x00050a45) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9c47,	// (0x00050a45) list_single_large_graphic_pane_g1_cp2

0xc3dd,	// (0x000531db) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc3dd,	// (0x000531db) list_single_large_graphic_pane_g2_cp2

0xc3e9,	// (0x000531e7) list_single_large_graphic_pane_g3_cp2

0xc3f1,	// (0x000531ef) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc3f1,	// (0x000531ef) list_single_large_graphic_pane_g4_cp1

0xc40b,	// (0x00053209) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc40b,	// (0x00053209) list_single_large_graphic_pane_t1_cp2

0xd474,	// (0x00054272) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd474,	// (0x00054272) list_single_graphic_heading_pane_g1_cp2

0xa231,	// (0x0005102f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa231,	// (0x0005102f) list_single_graphic_heading_pane_g4_cp2

0xc3bd,	// (0x000531bb) list_single_graphic_heading_pane_g5_cp2

0xd480,	// (0x0005427e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd480,	// (0x0005427e) list_single_graphic_heading_pane_t1_cp2

0xa242,	// (0x00051040) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa242,	// (0x00051040) list_single_graphic_heading_pane_t2_cp2

0xd446,	// (0x00054244) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd446,	// (0x00054244) list_single_2graphic_pane_g1_cp2

0xa231,	// (0x0005102f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa231,	// (0x0005102f) list_single_2graphic_pane_g2_cp2

0xc3bd,	// (0x000531bb) list_single_2graphic_pane_g3_cp2

0xd452,	// (0x00054250) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd452,	// (0x00054250) list_single_2graphic_pane_g4_cp2

0xd45e,	// (0x0005425c) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd45e,	// (0x0005425c) list_single_2graphic_pane_t1_cp2

0xafaf,	// (0x00051dad) list_highlight_pane_g10_cp1

0xd000,	// (0x00053dfe) list_highlight_pane_g1_cp1

0xd008,	// (0x00053e06) list_highlight_pane_g2_cp1

0xd010,	// (0x00053e0e) list_highlight_pane_g3_cp1

0xd018,	// (0x00053e16) list_highlight_pane_g4_cp1

0xd020,	// (0x00053e1e) list_highlight_pane_g5_cp1

0xd028,	// (0x00053e26) list_highlight_pane_g6_cp1

0xd030,	// (0x00053e2e) list_highlight_pane_g7_cp1

0xd038,	// (0x00053e36) list_highlight_pane_g8_cp1

0xd040,	// (0x00053e3e) list_highlight_pane_g9_cp1

0xa1f3,	// (0x00050ff1) form_field_slider_pane_t3

0xa203,	// (0x00051001) form_field_slider_pane_t4

0xcf34,	// (0x00053d32) slider_form_pane_ParamLimits

0xcf34,	// (0x00053d32) slider_form_pane

0xafb9,	// (0x00051db7) control_abbreviations

0xafb9,	// (0x00051db7) control_conventions

0xafb9,	// (0x00051db7) control_definitions

0xafb9,	// (0x00051db7) format_table_attribute

0xd63f,	// (0x0005443d) bg_popup_preview_window_pane_g9

0xafb9,	// (0x00051db7) format_table_data2

0xafb9,	// (0x00051db7) format_table_data3

0xafb9,	// (0x00051db7) format_table_data_example

0x0008,

0xafb9,	// (0x00051db7) intro_purpose

0xf8f5,	// (0x000566f3) bg_popup_preview_window_pane_g

0xafb9,	// (0x00051db7) texts_category

0xafb9,	// (0x00051db7) texts_graphics

0xc421,	// (0x0005321f) text_digital

0xc430,	// (0x0005322e) text_primary

0xc43f,	// (0x0005323d) text_primary_small

0xc44e,	// (0x0005324c) text_secondary

0xc45d,	// (0x0005325b) text_title

0xdaca,	// (0x000548c8) bg_passive_tab_pane_g1_cp3_srt

0xc197,	// (0x00052f95) bg_passive_tab_pane_g2_cp3_srt

0xdad3,	// (0x000548d1) bg_passive_tab_pane_g3_cp3_srt

0xb007,	// (0x00051e05) bg_active_tab_pane_cp3_srt_ParamLimits

0xb007,	// (0x00051e05) bg_active_tab_pane_cp3_srt

0xdadc,	// (0x000548da) tabs_4_active_pane_srt_g1

0xa5cd,	// (0x000513cb) tabs_4_active_pane_srt_t1_ParamLimits

0xa5cd,	// (0x000513cb) tabs_4_active_pane_srt_t1

0xdaca,	// (0x000548c8) bg_active_tab_pane_g1_cp3_copy1

0xc197,	// (0x00052f95) bg_active_tab_pane_g2_cp3_copy1

0xdad3,	// (0x000548d1) bg_active_tab_pane_g3_cp3_copy1

0xb015,	// (0x00051e13) tabs_2_long_active_pane_srt_ParamLimits

0xb015,	// (0x00051e13) tabs_2_long_active_pane_srt

0xb015,	// (0x00051e13) tabs_2_long_passive_pane_srt_ParamLimits

0xb015,	// (0x00051e13) tabs_2_long_passive_pane_srt

0xbbe7,	// (0x000529e5) bg_passive_tab_pane_cp4_srt_ParamLimits

0xbbe7,	// (0x000529e5) bg_passive_tab_pane_cp4_srt

0xd9e6,	// (0x000547e4) bg_passive_tab_pane_g1_cp4_srt

0xc197,	// (0x00052f95) bg_passive_tab_pane_g2_cp4_srt

0xd9ef,	// (0x000547ed) bg_passive_tab_pane_g3_cp4_srt

0xb015,	// (0x00051e13) bg_active_tab_pane_cp4_srt_ParamLimits

0xb015,	// (0x00051e13) bg_active_tab_pane_cp4_srt

0xa3fb,	// (0x000511f9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa3fb,	// (0x000511f9) tabs_2_long_active_pane_srt_t1

0xd9e6,	// (0x000547e4) bg_active_tab_pane_g1_cp4_srt

0xc197,	// (0x00052f95) bg_active_tab_pane_g2_cp4_srt

0xd9ef,	// (0x000547ed) bg_active_tab_pane_g3_cp4_srt

0xb007,	// (0x00051e05) tabs_3_long_active_pane_srt_ParamLimits

0xb007,	// (0x00051e05) tabs_3_long_active_pane_srt

0xb007,	// (0x00051e05) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb007,	// (0x00051e05) tabs_3_long_passive_pane_cp_srt

0xb007,	// (0x00051e05) tabs_3_long_passive_pane_srt_ParamLimits

0xb007,	// (0x00051e05) tabs_3_long_passive_pane_srt

0xbbe7,	// (0x000529e5) bg_passive_tab_pane_cp5_srt_ParamLimits

0xbbe7,	// (0x000529e5) bg_passive_tab_pane_cp5_srt

0xc1de,	// (0x00052fdc) bg_passive_tab_pane_g1_cp5_srt

0xc197,	// (0x00052f95) bg_passive_tab_pane_g2_cp5_srt

0xc1e7,	// (0x00052fe5) bg_passive_tab_pane_g3_cp5_srt

0xb015,	// (0x00051e13) bg_active_tab_pane_cp5_srt_ParamLimits

0xb015,	// (0x00051e13) bg_active_tab_pane_cp5_srt

0xa3e5,	// (0x000511e3) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa3e5,	// (0x000511e3) tabs_3_long_active_pane_srt_t1

0xc1de,	// (0x00052fdc) bg_active_tab_pane_g1_cp5_srt

0xc197,	// (0x00052f95) bg_active_tab_pane_g2_cp5_srt

0xc1e7,	// (0x00052fe5) bg_active_tab_pane_g3_cp5_srt

0xd9d8,	// (0x000547d6) navi_text_pane_srt_t1

0xd9d0,	// (0x000547ce) navi_icon_pane_srt_g1

0xc56d,	// (0x0005336b) midp_editing_number_pane_srt

0xc46c,	// (0x0005326a) midp_ticker_pane_srt

0xc575,	// (0x00053373) midp_ticker_pane_srt_g1

0xc57d,	// (0x0005337b) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0005657b) midp_ticker_pane_srt_g

0xc585,	// (0x00053383) midp_ticker_pane_srt_t1

0xd9c1,	// (0x000547bf) midp_editing_number_pane_t1_copy1

0xbbe7,	// (0x000529e5) listscroll_midp_pane

0xbbe7,	// (0x000529e5) midp_form_pane

0xc474,	// (0x00053272) midp_info_popup_window_ParamLimits

0xc474,	// (0x00053272) midp_info_popup_window

0xbb2f,	// (0x0005292d) bg_popup_sub_pane_cp50_ParamLimits

0xbb2f,	// (0x0005292d) bg_popup_sub_pane_cp50

0xcc51,	// (0x00053a4f) listscroll_midp_info_pane_ParamLimits

0xcc51,	// (0x00053a4f) listscroll_midp_info_pane

0xcc39,	// (0x00053a37) listscroll_form_midp_pane_ParamLimits

0xcc39,	// (0x00053a37) listscroll_form_midp_pane

0xcc45,	// (0x00053a43) scroll_bar_cp050

0xa1e7,	// (0x00050fe5) list_midp_pane

0xe446,	// (0x00055244) signal_pane_g2_cp

0xcb6b,	// (0x00053969) listscroll_midp_info_pane_t1_ParamLimits

0xcb6b,	// (0x00053969) listscroll_midp_info_pane_t1

0xcb83,	// (0x00053981) listscroll_midp_info_pane_t2_ParamLimits

0xcb83,	// (0x00053981) listscroll_midp_info_pane_t2

0xcbc1,	// (0x000539bf) listscroll_midp_info_pane_t3_ParamLimits

0xcbc1,	// (0x000539bf) listscroll_midp_info_pane_t3

0xcbfb,	// (0x000539f9) listscroll_midp_info_pane_t4_ParamLimits

0xcbfb,	// (0x000539f9) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0005662e) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0005662e) listscroll_midp_info_pane_t

0xbbaf,	// (0x000529ad) scroll_pane_cp21

0xcb0f,	// (0x0005390d) form_midp_field_choice_group_pane

0xcb18,	// (0x00053916) form_midp_field_text_pane

0xcb51,	// (0x0005394f) form_midp_field_time_pane

0xcb59,	// (0x00053957) form_midp_gauge_slider_pane

0xcb62,	// (0x00053960) form_midp_gauge_wait_pane

0xafb9,	// (0x00051db7) form_midp_image_pane

0x8710,	// (0x0004f50e) list_single_midp_pane_ParamLimits

0x8710,	// (0x0004f50e) list_single_midp_pane

0xa1c3,	// (0x00050fc1) form_midp_field_text_pane_t1

0xc98e,	// (0x0005378c) input_focus_pane_cp050

0xcafe,	// (0x000538fc) list_midp_form_text_pane

0xcacd,	// (0x000538cb) form_midp_field_choice_group_pane_t1

0xcadb,	// (0x000538d9) input_focus_pane_cp051

0xcaef,	// (0x000538ed) list_midp_choice_pane

0xafb9,	// (0x00051db7) status_idle_pane

0xcab1,	// (0x000538af) form_midp_field_time_pane_t1

0xafaf,	// (0x00051dad) wait_anim_pane_g2_copy1

0xcabf,	// (0x000538bd) form_midp_field_time_pane_t2

0x0001,

0xc4df,	// (0x000532dd) aid_navinavi_width_2_pane

0xf82b,	// (0x00056629) form_midp_field_time_pane_t

0xafb9,	// (0x00051db7) input_focus_pane_cp052

0xafb9,	// (0x00051db7) bg_input_focus_pane_cp040

0xca8d,	// (0x0005388b) form_midp_gauge_slider_pane_t1

0xca9b,	// (0x00053899) form_midp_gauge_slider_pane_t2

0xa1a3,	// (0x00050fa1) form_midp_gauge_slider_pane_t3

0xa1b3,	// (0x00050fb1) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x00056620) form_midp_gauge_slider_pane_t

0xcaa9,	// (0x000538a7) form_midp_slider_pane

0xb015,	// (0x00051e13) bg_input_focus_pane_cp041_ParamLimits

0xb015,	// (0x00051e13) bg_input_focus_pane_cp041

0xca5a,	// (0x00053858) form_midp_gauge_wait_pane_t1_ParamLimits

0xca5a,	// (0x00053858) form_midp_gauge_wait_pane_t1

0xca6c,	// (0x0005386a) form_midp_gauge_wait_pane_t2_ParamLimits

0xca6c,	// (0x0005386a) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0005661b) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0005661b) form_midp_gauge_wait_pane_t

0xca7e,	// (0x0005387c) form_midp_wait_pane_ParamLimits

0xca7e,	// (0x0005387c) form_midp_wait_pane

0xca24,	// (0x00053822) form_midp_image_pane_g1

0xca2d,	// (0x0005382b) form_midp_image_pane_t1

0xca3c,	// (0x0005383a) form_midp_image_pane_t2

0xca4b,	// (0x00053849) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x00056614) form_midp_image_pane_t

0xca1b,	// (0x00053819) list_single_midp_pane_g1

0x37f9,	// (0x0004a5f7) list_single_midp_pane_t1

0xa18c,	// (0x00050f8a) list_midp_form_item_pane_ParamLimits

0xa18c,	// (0x00050f8a) list_midp_form_item_pane

0xc487,	// (0x00053285) list_midp_form_item_pane_t1

0xc496,	// (0x00053294) midp_ticker_pane_g1

0xc4a2,	// (0x000532a0) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x00056561) midp_ticker_pane_g

0xc4ae,	// (0x000532ac) midp_ticker_pane_t1

0xda71,	// (0x0005486f) midp_editing_number_pane_t1

0xda4f,	// (0x0005484d) midp_editing_number_pane

0xda5e,	// (0x0005485c) midp_ticker_pane

0xd9b1,	// (0x000547af) ai_message_heading_pane

0xafb9,	// (0x00051db7) bg_popup_window_pane_cp14

0xd9b9,	// (0x000547b7) listscroll_ai_message_pane

0xd93b,	// (0x00054739) ai_message_heading_pane_g1_ParamLimits

0xd93b,	// (0x00054739) ai_message_heading_pane_g1

0xd947,	// (0x00054745) ai_message_heading_pane_g2_ParamLimits

0xd947,	// (0x00054745) ai_message_heading_pane_g2

0xd953,	// (0x00054751) ai_message_heading_pane_g3_ParamLimits

0xd953,	// (0x00054751) ai_message_heading_pane_g3

0xd95f,	// (0x0005475d) ai_message_heading_pane_g4_ParamLimits

0xd95f,	// (0x0005475d) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x00056755) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x00056755) ai_message_heading_pane_g

0xd96b,	// (0x00054769) ai_message_heading_pane_t1_ParamLimits

0xd96b,	// (0x00054769) ai_message_heading_pane_t1

0xd985,	// (0x00054783) ai_message_heading_pane_t2_ParamLimits

0xd985,	// (0x00054783) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0005675e) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0005675e) ai_message_heading_pane_t

0xd997,	// (0x00054795) bg_popup_heading_pane_cp1_ParamLimits

0xd997,	// (0x00054795) bg_popup_heading_pane_cp1

0xd929,	// (0x00054727) list_ai_message_pane_ParamLimits

0xd929,	// (0x00054727) list_ai_message_pane

0xbbaf,	// (0x000529ad) scroll_pane_cp10

0xd8c5,	// (0x000546c3) list_ai_message_pane_g1

0xd8cd,	// (0x000546cb) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x00056732) list_ai_message_pane_g

0xd8d5,	// (0x000546d3) list_ai_message_pane_t1_ParamLimits

0xd8d5,	// (0x000546d3) list_ai_message_pane_t1

0xd8ea,	// (0x000546e8) list_ai_message_pane_t2_ParamLimits

0xd8ea,	// (0x000546e8) list_ai_message_pane_t2

0xd8ff,	// (0x000546fd) list_ai_message_pane_t3_ParamLimits

0xd8ff,	// (0x000546fd) list_ai_message_pane_t3

0xd914,	// (0x00054712) list_ai_message_pane_t4_ParamLimits

0xd914,	// (0x00054712) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x00056737) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x00056737) list_ai_message_pane_t

0xa3c0,	// (0x000511be) cell_ai_soft_ind_pane_ParamLimits

0xa3c0,	// (0x000511be) cell_ai_soft_ind_pane

0xc4c0,	// (0x000532be) cell_ai_soft_ind_pane_g1_ParamLimits

0xc4c0,	// (0x000532be) cell_ai_soft_ind_pane_g1

0xafb9,	// (0x00051db7) grid_highlight_cp1

0xc4cd,	// (0x000532cb) text_secondary_cp56_ParamLimits

0xc4cd,	// (0x000532cb) text_secondary_cp56

0xd89a,	// (0x00054698) example_general_pane_ParamLimits

0xd89a,	// (0x00054698) example_general_pane

0xd8a6,	// (0x000546a4) example_parent_pane_g1_ParamLimits

0xd8a6,	// (0x000546a4) example_parent_pane_g1

0xd8b2,	// (0x000546b0) example_parent_pane_t1_ParamLimits

0xd8b2,	// (0x000546b0) example_parent_pane_t1

0x83c6,	// (0x0004f1c4) popup_preview_text_window_ParamLimits

0x83c6,	// (0x0004f1c4) popup_preview_text_window

0xc3a9,	// (0x000531a7) list_single_pane_cp2_g4

0xb651,	// (0x0005244f) bg_popup_preview_window_pane_ParamLimits

0xb651,	// (0x0005244f) bg_popup_preview_window_pane

0xd647,	// (0x00054445) popup_preview_text_window_t1_ParamLimits

0xd647,	// (0x00054445) popup_preview_text_window_t1

0xd665,	// (0x00054463) popup_preview_text_window_t2_ParamLimits

0xd665,	// (0x00054463) popup_preview_text_window_t2

0xd6ae,	// (0x000544ac) popup_preview_text_window_t3_ParamLimits

0xd6ae,	// (0x000544ac) popup_preview_text_window_t3

0xd6f3,	// (0x000544f1) popup_preview_text_window_t4_ParamLimits

0xd6f3,	// (0x000544f1) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x00056706) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x00056706) popup_preview_text_window_t

0xd771,	// (0x0005456f) scroll_pane_cp11

0xc89e,	// (0x0005369c) bg_popup_preview_window_pane_g1

0xd607,	// (0x00054405) bg_popup_preview_window_pane_g2

0xd60f,	// (0x0005440d) bg_popup_preview_window_pane_g3

0xd617,	// (0x00054415) bg_popup_preview_window_pane_g4

0xd61f,	// (0x0005441d) bg_popup_preview_window_pane_g5

0xd627,	// (0x00054425) bg_popup_preview_window_pane_g6

0xd62f,	// (0x0005442d) bg_popup_preview_window_pane_g7

0xd637,	// (0x00054435) bg_popup_preview_window_pane_g8

0x0354,	// (0x00047152) aid_popup_width_pane

0x8342,	// (0x0004f140) popup_midp_note_alarm_window_ParamLimits

0x8342,	// (0x0004f140) popup_midp_note_alarm_window

0xba77,	// (0x00052875) data_form_pane_ParamLimits

0x7d1b,	// (0x0004eb19) form_field_data_pane_g1

0x7d25,	// (0x0004eb23) form_field_data_pane_t1_ParamLimits

0xba83,	// (0x00052881) input_focus_pane_ParamLimits

0xba91,	// (0x0005288f) data_form_wide_pane_ParamLimits

0x0d08,	// (0x00047b06) form_field_data_wide_pane_g1

0x0d14,	// (0x00047b12) form_field_data_wide_pane_t1_ParamLimits

0xb7f2,	// (0x000525f0) input_focus_pane_cp6_ParamLimits

0x994f,	// (0x0005074d) input_popup_find_pane_g1_ParamLimits

0x994f,	// (0x0005074d) input_popup_find_pane_g1

0x0eff,	// (0x00047cfd) aid_navi_side_left_pane

0x0f14,	// (0x00047d12) aid_navi_side_right_pane

0xd129,	// (0x00053f27) bg_popup_window_pane_cp30_ParamLimits

0xd129,	// (0x00053f27) bg_popup_window_pane_cp30

0xd1a3,	// (0x00053fa1) popup_midp_note_alarm_window_g1_ParamLimits

0xd1a3,	// (0x00053fa1) popup_midp_note_alarm_window_g1

0xd1d3,	// (0x00053fd1) popup_midp_note_alarm_window_t1_ParamLimits

0xd1d3,	// (0x00053fd1) popup_midp_note_alarm_window_t1

0xd274,	// (0x00054072) popup_midp_note_alarm_window_t2_ParamLimits

0xd274,	// (0x00054072) popup_midp_note_alarm_window_t2

0xd322,	// (0x00054120) popup_midp_note_alarm_window_t3_ParamLimits

0xd322,	// (0x00054120) popup_midp_note_alarm_window_t3

0xd34a,	// (0x00054148) popup_midp_note_alarm_window_t4_ParamLimits

0xd34a,	// (0x00054148) popup_midp_note_alarm_window_t4

0xd36a,	// (0x00054168) popup_midp_note_alarm_window_t5_ParamLimits

0xd36a,	// (0x00054168) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x000566a3) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x000566a3) popup_midp_note_alarm_window_t

0xd416,	// (0x00054214) wait_bar_pane_cp1_ParamLimits

0xd416,	// (0x00054214) wait_bar_pane_cp1

0xafb9,	// (0x00051db7) wait_anim_pane_copy1

0xafb9,	// (0x00051db7) wait_border_pane_copy1

0xcdf5,	// (0x00053bf3) wait_border_pane_g1_copy1

0x0d2e,	// (0x00047b2c) form_field_popup_pane_g1

0x7d3f,	// (0x0004eb3d) form_field_popup_pane_t1_ParamLimits

0xba83,	// (0x00052881) input_focus_pane_cp7_ParamLimits

0xbab1,	// (0x000528af) list_form_pane_ParamLimits

0x0d50,	// (0x00047b4e) form_field_popup_wide_pane_g1

0x0d58,	// (0x00047b56) form_field_popup_wide_pane_t1_ParamLimits

0xba83,	// (0x00052881) input_focus_pane_cp8_ParamLimits

0xbabd,	// (0x000528bb) list_form_wide_pane_ParamLimits

0xdb03,	// (0x00054901) aid_size_cell_graphic_pane

0x7dbe,	// (0x0004ebbc) data_form_pane_t1_ParamLimits

0x8889,	// (0x0004f687) data_form_wide_pane_t1_ParamLimits

0x9e11,	// (0x00050c0f) bg_status_flat_pane

0x95ae,	// (0x000503ac) title_pane_t1_ParamLimits

0xafcf,	// (0x00051dcd) title_pane_t2_ParamLimits

0xaff5,	// (0x00051df3) title_pane_t3_ParamLimits

0xf55d,	// (0x0005635b) title_pane_t_ParamLimits

0xbf46,	// (0x00052d44) level_1_signal_ParamLimits

0xbf53,	// (0x00052d51) level_2_signal_ParamLimits

0xbf60,	// (0x00052d5e) level_3_signal_ParamLimits

0xbf6d,	// (0x00052d6b) level_4_signal_ParamLimits

0xbf7a,	// (0x00052d78) level_5_signal_ParamLimits

0xbf87,	// (0x00052d85) level_6_signal_ParamLimits

0xbf94,	// (0x00052d92) level_7_signal_ParamLimits

0xbf46,	// (0x00052d44) level_1_battery_ParamLimits

0xbf53,	// (0x00052d51) level_2_battery_ParamLimits

0xbf60,	// (0x00052d5e) level_3_battery_ParamLimits

0xbf6d,	// (0x00052d6b) level_4_battery_ParamLimits

0xbf7a,	// (0x00052d78) level_5_battery_ParamLimits

0xbf87,	// (0x00052d85) level_6_battery_ParamLimits

0xbf94,	// (0x00052d92) level_7_battery_ParamLimits

0xd000,	// (0x00053dfe) bg_status_flat_pane_g1

0xd008,	// (0x00053e06) bg_status_flat_pane_g2

0xd010,	// (0x00053e0e) bg_status_flat_pane_g3

0xd018,	// (0x00053e16) bg_status_flat_pane_g4

0xd020,	// (0x00053e1e) bg_status_flat_pane_g5

0xd028,	// (0x00053e26) bg_status_flat_pane_g6

0xd030,	// (0x00053e2e) bg_status_flat_pane_g7

0x9642,	// (0x00050440) tabs_3_active_pane_t1_ParamLimits

0x9642,	// (0x00050440) tabs_3_passive_pane_t1_ParamLimits

0x965c,	// (0x0005045a) tabs_4_active_pane_t1_ParamLimits

0x965c,	// (0x0005045a) tabs_4_1_passive_pane_t1_ParamLimits

0x9965,	// (0x00050763) tabs_2_active_pane_t1_ParamLimits

0x9965,	// (0x00050763) tabs_2_passive_pane_t1_ParamLimits

0xb015,	// (0x00051e13) bg_active_tab_pane_cp4_ParamLimits

0x9977,	// (0x00050775) tabs_2_long_active_pane_t1_ParamLimits

0xbbe7,	// (0x000529e5) bg_passive_tab_pane_cp4_ParamLimits

0x1a16,	// (0x00048814) list_single_midp_graphic_pane_t1_ParamLimits

0xb015,	// (0x00051e13) bg_active_tab_pane_cp5_ParamLimits

0x998a,	// (0x00050788) tabs_3_long_active_pane_t1_ParamLimits

0xbbe7,	// (0x000529e5) bg_passive_tab_pane_cp5_ParamLimits

0x1a16,	// (0x00048814) list_single_midp_graphic_pane_t1

0x9e11,	// (0x00050c0f) bg_status_flat_pane_ParamLimits

0xc771,	// (0x0005356f) indicator_pane_cp2_ParamLimits

0xc771,	// (0x0005356f) indicator_pane_cp2

0x9f89,	// (0x00050d87) navi_pane_srt_ParamLimits

0x9f89,	// (0x00050d87) navi_pane_srt

0xc799,	// (0x00053597) popup_clock_digital_analogue_window_cp1

0xb059,	// (0x00051e57) indicator_pane_t1

0xc46c,	// (0x0005326a) copy_highlight_pane

0xc46c,	// (0x0005326a) cursor_graphics_pane

0xc46c,	// (0x0005326a) graphic_within_text_pane

0xc46c,	// (0x0005326a) link_highlight_pane

0xd734,	// (0x00054532) popup_preview_text_window_t5_ParamLimits

0xd734,	// (0x00054532) popup_preview_text_window_t5

0xc4e7,	// (0x000532e5) cursor_digital_pane

0xc4e7,	// (0x000532e5) cursor_primary_pane

0xc4f8,	// (0x000532f6) cursor_primary_small_pane

0xc500,	// (0x000532fe) cursor_secondary_pane

0xc508,	// (0x00053306) cursor_title_pane

0xc4e7,	// (0x000532e5) link_highlight_digital_pane

0xc4ef,	// (0x000532ed) link_highlight_primary_pane

0xc4f8,	// (0x000532f6) link_highlight_primary_small_pane

0xc500,	// (0x000532fe) link_highlight_secondary_pane

0xc508,	// (0x00053306) link_highlight_title_pane

0xc4e7,	// (0x000532e5) copy_highlight_digital_pane

0xc4e7,	// (0x000532e5) copy_highlight_primary_pane

0xc4f8,	// (0x000532f6) copy_highlight_primary_small_pane

0xc500,	// (0x000532fe) copy_highlight_secondary_pane

0xc508,	// (0x00053306) copy_highlight_title_pane

0xc500,	// (0x000532fe) graphic_text_digital_pane

0xd0cc,	// (0x00053eca) graphic_text_primary_pane

0xd0d5,	// (0x00053ed3) graphic_text_primary_small_pane

0xc4f8,	// (0x000532f6) graphic_text_secondary_pane

0xc4e7,	// (0x000532e5) graphic_text_title_pane

0x9cf0,	// (0x00050aee) cursor_primary_pane_g1

0xd0be,	// (0x00053ebc) cursor_text_primary_t1

0xa227,	// (0x00051025) cursor_primary_small_pane_g1

0xd064,	// (0x00053e62) cursor_text_primary_small_t1

0xa21d,	// (0x0005101b) cursor_primary_small_pane_g1_copy1

0xd056,	// (0x00053e54) cursor_text_primary_small_t1_copy1

0xd048,	// (0x00053e46) cursor_text_title_t1

0xa213,	// (0x00051011) cursor_title_pane_g1

0x9cf0,	// (0x00050aee) cursor_digital_pane_g1

0xc510,	// (0x0005330e) cursor_text_digital_t1

0xcfe9,	// (0x00053de7) link_highlight_primary_pane_g1

0xcff1,	// (0x00053def) link_highlight_primary_pane_t1

0xc51e,	// (0x0005331c) link_highlight_primary_small_pane_g1

0xc526,	// (0x00053324) link_highlight_primary_small_pane_t1

0xc51e,	// (0x0005331c) link_highlight_secondary_pane_g1

0xc535,	// (0x00053333) link_highlight_secondary_pane_t1

0xcf5d,	// (0x00053d5b) link_highlight_title_pane_g1

0xcf65,	// (0x00053d63) link_highlight_title_pane_t1

0xcf46,	// (0x00053d44) link_highlight_digital_pane_g1

0xcf4e,	// (0x00053d4c) link_highlight_digital_pane_t1

0xce3a,	// (0x00053c38) copy_highlight_primary_pane_g1

0xce42,	// (0x00053c40) copy_highlight_primary_pane_t1

0xce14,	// (0x00053c12) copy_highlight_primary_small_pane_g1

0xce2b,	// (0x00053c29) copy_highlight_primary_small_pane_t1

0xc544,	// (0x00053342) copy_highlight_secondary_pane_g1

0xc54c,	// (0x0005334a) copy_highlight_secondary_pane_t1

0xce14,	// (0x00053c12) copy_highlight_title_pane_g1

0xce1c,	// (0x00053c1a) copy_highlight_title_pane_t1

0xce3a,	// (0x00053c38) copy_highlight_digital_pane_g1

0xdc8d,	// (0x00054a8b) copy_highlight_digital_pane_t1

0xdbe1,	// (0x000549df) graphic_text_primary_pane_g1

0xdc71,	// (0x00054a6f) graphic_text_primary_pane_t1

0xdc7f,	// (0x00054a7d) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x000567d2) graphic_text_primary_pane_t

0xdc4d,	// (0x00054a4b) graphic_text_primary_small_pane_g1

0xdc55,	// (0x00054a53) graphic_text_primary_small_pane_t1

0xdc63,	// (0x00054a61) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x000567cd) graphic_text_primary_small_pane_t

0xdc29,	// (0x00054a27) graphic_text_secondary_pane_g1

0xdc31,	// (0x00054a2f) graphic_text_secondary_pane_t1

0xdc3f,	// (0x00054a3d) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x000567c8) graphic_text_secondary_pane_t

0xdc05,	// (0x00054a03) graphic_text_title_pane_g1

0xdc0d,	// (0x00054a0b) graphic_text_title_pane_t1

0xdc1b,	// (0x00054a19) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x000567c3) graphic_text_title_pane_t

0xdbe1,	// (0x000549df) graphic_text_digital_pane_g1

0xdbe9,	// (0x000549e7) graphic_text_digital_pane_t1

0xdbf7,	// (0x000549f5) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x000567be) graphic_text_digital_pane_t

0xb015,	// (0x00051e13) navi_icon_pane_srt_ParamLimits

0xb015,	// (0x00051e13) navi_icon_pane_srt

0xafb9,	// (0x00051db7) navi_midp_pane_srt

0xafb9,	// (0x00051db7) navi_navi_pane_srt

0xb015,	// (0x00051e13) navi_text_pane_srt_ParamLimits

0xb015,	// (0x00051e13) navi_text_pane_srt

0xdbac,	// (0x000549aa) navi_navi_icon_text_pane_srt

0xdbb4,	// (0x000549b2) navi_navi_pane_srt_g1_ParamLimits

0xdbb4,	// (0x000549b2) navi_navi_pane_srt_g1

0xdbc6,	// (0x000549c4) navi_navi_pane_srt_g2_ParamLimits

0xdbc6,	// (0x000549c4) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x000567b9) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x000567b9) navi_navi_pane_srt_g

0xdbd8,	// (0x000549d6) navi_navi_tabs_pane_srt

0xdbac,	// (0x000549aa) navi_navi_text_pane_srt

0xdbac,	// (0x000549aa) navi_navi_volume_pane_srt

0xdb9d,	// (0x0005499b) navi_navi_text_pane_srt_t1

0x1d96,	// (0x00048b94) navi_navi_volume_pane_srt_g1

0x1d9e,	// (0x00048b9c) volume_small_pane_srt_ParamLimits

0x1d9e,	// (0x00048b9c) volume_small_pane_srt

0x11df,	// (0x00047fdd) volume_small_pane_srt_g1_ParamLimits

0x11df,	// (0x00047fdd) volume_small_pane_srt_g1

0x11ef,	// (0x00047fed) volume_small_pane_srt_g2_ParamLimits

0x11ef,	// (0x00047fed) volume_small_pane_srt_g2

0x1200,	// (0x00047ffe) volume_small_pane_srt_g3_ParamLimits

0x1200,	// (0x00047ffe) volume_small_pane_srt_g3

0x1211,	// (0x0004800f) volume_small_pane_srt_g4_ParamLimits

0x1211,	// (0x0004800f) volume_small_pane_srt_g4

0x1222,	// (0x00048020) volume_small_pane_srt_g5_ParamLimits

0x1222,	// (0x00048020) volume_small_pane_srt_g5

0x1233,	// (0x00048031) volume_small_pane_srt_g6_ParamLimits

0x1233,	// (0x00048031) volume_small_pane_srt_g6

0x1244,	// (0x00048042) volume_small_pane_srt_g7_ParamLimits

0x1244,	// (0x00048042) volume_small_pane_srt_g7

0x1255,	// (0x00048053) volume_small_pane_srt_g8_ParamLimits

0x1255,	// (0x00048053) volume_small_pane_srt_g8

0x1266,	// (0x00048064) volume_small_pane_srt_g9_ParamLimits

0x1266,	// (0x00048064) volume_small_pane_srt_g9

0x1277,	// (0x00048075) volume_small_pane_srt_g10_ParamLimits

0x1277,	// (0x00048075) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x00056566) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x00056566) volume_small_pane_srt_g

0xb6fa,	// (0x000524f8) query_popup_data_pane_cp2

0xdb83,	// (0x00054981) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xdb83,	// (0x00054981) navi_navi_icon_text_pane_srt_t1

0xd0cc,	// (0x00053eca) navi_tabs_2_long_pane_srt

0xd0cc,	// (0x00053eca) navi_tabs_2_pane_srt

0xd0cc,	// (0x00053eca) navi_tabs_3_long_pane_srt

0xd0cc,	// (0x00053eca) navi_tabs_3_pane_srt

0xd0cc,	// (0x00053eca) navi_tabs_4_pane_srt

0x1d76,	// (0x00048b74) tabs_2_active_pane_srt_ParamLimits

0x1d76,	// (0x00048b74) tabs_2_active_pane_srt

0x1d86,	// (0x00048b84) tabs_2_passive_pane_srt_ParamLimits

0x1d86,	// (0x00048b84) tabs_2_passive_pane_srt

0xc98e,	// (0x0005378c) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc98e,	// (0x0005378c) bg_passive_tab_pane_cp1_srt

0xdb61,	// (0x0005495f) bg_passive_tab_pane_g1_cp1_srt

0xc197,	// (0x00052f95) bg_passive_tab_pane_g2_cp1_srt

0xdb6a,	// (0x00054968) bg_passive_tab_pane_g3_cp1_srt

0xb007,	// (0x00051e05) bg_active_tab_pane_cp1_srt_ParamLimits

0xb007,	// (0x00051e05) bg_active_tab_pane_cp1_srt

0xdb73,	// (0x00054971) tabs_2_active_pane_srt_g1

0xa649,	// (0x00051447) tabs_2_active_pane_srt_t1_ParamLimits

0xa649,	// (0x00051447) tabs_2_active_pane_srt_t1

0xdb61,	// (0x0005495f) bg_active_tab_pane_g1_cp1_srt

0xc197,	// (0x00052f95) bg_active_tab_pane_g2_cp1_srt

0xdb6a,	// (0x00054968) bg_active_tab_pane_g3_cp1_srt

0x1d43,	// (0x00048b41) tabs_3_active_pane_srt_ParamLimits

0x1d43,	// (0x00048b41) tabs_3_active_pane_srt

0x1d54,	// (0x00048b52) tabs_3_passive_pane_cp_srt_ParamLimits

0x1d54,	// (0x00048b52) tabs_3_passive_pane_cp_srt

0x1d65,	// (0x00048b63) tabs_3_passive_pane_srt_ParamLimits

0x1d65,	// (0x00048b63) tabs_3_passive_pane_srt

0xc98e,	// (0x0005378c) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc98e,	// (0x0005378c) bg_passive_tab_pane_cp2_srt

0xc55b,	// (0x00053359) bg_passive_tab_pane_g1_cp2_srt

0xc197,	// (0x00052f95) bg_passive_tab_pane_g2_cp2_srt

0xc564,	// (0x00053362) bg_passive_tab_pane_g3_cp2_srt

0xb007,	// (0x00051e05) bg_active_tab_pane_cp2_srt_ParamLimits

0xb007,	// (0x00051e05) bg_active_tab_pane_cp2_srt

0xdb59,	// (0x00054957) tabs_3_active_pane_srt_g1

0xa633,	// (0x00051431) tabs_3_active_pane_srt_t1_ParamLimits

0xa633,	// (0x00051431) tabs_3_active_pane_srt_t1

0xc55b,	// (0x00053359) bg_active_tab_pane_g1_cp2_srt

0xc197,	// (0x00052f95) bg_active_tab_pane_g2_cp2_srt

0xc564,	// (0x00053362) bg_active_tab_pane_g3_cp2_srt

0x1cfb,	// (0x00048af9) tabs_4_active_pane_srt_ParamLimits

0x1cfb,	// (0x00048af9) tabs_4_active_pane_srt

0x1d0d,	// (0x00048b0b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1d0d,	// (0x00048b0b) tabs_4_passive_pane_cp2_srt

0x13d6,	// (0x000481d4) aid_size_cell_toolbar

0xd0a0,	// (0x00053e9e) main_idle_act_pane_ParamLimits

0x157d,	// (0x0004837b) popup_large_graphic_colour_window_ParamLimits

0x8646,	// (0x0004f444) popup_toolbar_window_ParamLimits

0x8646,	// (0x0004f444) popup_toolbar_window

0xda80,	// (0x0005487e) list_single_graphic_2heading_pane_ParamLimits

0xda80,	// (0x0005487e) list_single_graphic_2heading_pane

0xbd91,	// (0x00052b8f) aid_size_cell_apps_grid_lsc_pane

0xbda3,	// (0x00052ba1) aid_size_cell_apps_grid_prt_pane

0xbbe7,	// (0x000529e5) bg_wml_button_pane_cp1_ParamLimits

0xbbe7,	// (0x000529e5) bg_wml_button_pane_cp1

0xa1c3,	// (0x00050fc1) form_midp_field_text_pane_t1_ParamLimits

0xc98e,	// (0x0005378c) input_focus_pane_cp050_ParamLimits

0xcafe,	// (0x000538fc) list_midp_form_text_pane_ParamLimits

0xcadb,	// (0x000538d9) input_focus_pane_cp051_ParamLimits

0xcaef,	// (0x000538ed) list_midp_choice_pane_ParamLimits

0xa154,	// (0x00050f52) list_single_2graphic_pane_cp3_ParamLimits

0xa154,	// (0x00050f52) list_single_2graphic_pane_cp3

0xa16a,	// (0x00050f68) list_single_midp_graphic_pane_ParamLimits

0xa16a,	// (0x00050f68) list_single_midp_graphic_pane

0x02de,	// (0x000470dc) list_single_graphic_2heading_pane_g1_ParamLimits

0x02de,	// (0x000470dc) list_single_graphic_2heading_pane_g1

0x02ea,	// (0x000470e8) list_single_graphic_2heading_pane_g4_ParamLimits

0x02ea,	// (0x000470e8) list_single_graphic_2heading_pane_g4

0x02f6,	// (0x000470f4) list_single_graphic_2heading_pane_g5_ParamLimits

0x02f6,	// (0x000470f4) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x000565b9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x000565b9) list_single_graphic_2heading_pane_g

0x0302,	// (0x00047100) list_single_graphic_2heading_pane_t1_ParamLimits

0x0302,	// (0x00047100) list_single_graphic_2heading_pane_t1

0x0316,	// (0x00047114) list_single_graphic_2heading_pane_t2_ParamLimits

0x0316,	// (0x00047114) list_single_graphic_2heading_pane_t2

0x0330,	// (0x0004712e) list_single_graphic_2heading_pane_t3_ParamLimits

0x0330,	// (0x0004712e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x000565c0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x000565c0) list_single_graphic_2heading_pane_t

0xc7dc,	// (0x000535da) bg_popup_sub_pane_cp2

0xc806,	// (0x00053604) grid_toobar_pane

0x1987,	// (0x00048785) cell_toolbar_pane_ParamLimits

0x1987,	// (0x00048785) cell_toolbar_pane

0xc842,	// (0x00053640) cell_toolbar_pane_g1_ParamLimits

0xc842,	// (0x00053640) cell_toolbar_pane_g1

0xc856,	// (0x00053654) cell_toolbar_pane_g2_ParamLimits

0xc856,	// (0x00053654) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x000565ce) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x000565ce) cell_toolbar_pane_g

0xc878,	// (0x00053676) grid_highlight_pane_cp2_ParamLimits

0xc878,	// (0x00053676) grid_highlight_pane_cp2

0xc892,	// (0x00053690) toolbar_button_pane

0xc89e,	// (0x0005369c) toolbar_button_pane_g1

0xc8a6,	// (0x000536a4) toolbar_button_pane_g2

0xc8ae,	// (0x000536ac) toolbar_button_pane_g3

0xc8b6,	// (0x000536b4) toolbar_button_pane_g4

0xc8be,	// (0x000536bc) toolbar_button_pane_g5

0xc8c6,	// (0x000536c4) toolbar_button_pane_g6

0xc8ce,	// (0x000536cc) toolbar_button_pane_g7

0xc8d6,	// (0x000536d4) toolbar_button_pane_g8

0xc8de,	// (0x000536dc) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x000565d3) toolbar_button_pane_g

0x19bf,	// (0x000487bd) list_single_2graphic_pane_g1_cp3_ParamLimits

0x19bf,	// (0x000487bd) list_single_2graphic_pane_g1_cp3

0x869e,	// (0x0004f49c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x869e,	// (0x0004f49c) list_single_2graphic_pane_g2_cp3

0x19dc,	// (0x000487da) list_single_2graphic_pane_g3_cp3

0x19e4,	// (0x000487e2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x19e4,	// (0x000487e2) list_single_2graphic_pane_g4_cp3

0x19f0,	// (0x000487ee) list_single_2graphic_pane_t1_cp3_ParamLimits

0x19f0,	// (0x000487ee) list_single_2graphic_pane_t1_cp3

0x1a0a,	// (0x00048808) list_single_midp_graphic_pane_g2_ParamLimits

0x1a0a,	// (0x00048808) list_single_midp_graphic_pane_g2

0x02ce,	// (0x000470cc) aid_zoom_text_primary

0x02d6,	// (0x000470d4) aid_zoom_text_secondary

0xc618,	// (0x00053416) status_small_pane_g7_ParamLimits

0xc618,	// (0x00053416) status_small_pane_g7

0xc63b,	// (0x00053439) status_small_pane_t1_ParamLimits

0x958a,	// (0x00050388) title_pane_g2

0x0003,

0xf554,	// (0x00056352) title_pane_g

0x9815,	// (0x00050613) aid_size_cell_colour_1_pane_ParamLimits

0x9815,	// (0x00050613) aid_size_cell_colour_1_pane

0x9829,	// (0x00050627) aid_size_cell_colour_2_pane_ParamLimits

0x9829,	// (0x00050627) aid_size_cell_colour_2_pane

0x983d,	// (0x0005063b) aid_size_cell_colour_3_pane_ParamLimits

0x983d,	// (0x0005063b) aid_size_cell_colour_3_pane

0x9851,	// (0x0005064f) aid_size_cell_colour_4_pane_ParamLimits

0x9851,	// (0x0005064f) aid_size_cell_colour_4_pane

0x0e3b,	// (0x00047c39) title_pane_stacon_g1_ParamLimits

0x0e3b,	// (0x00047c39) title_pane_stacon_g1

0xce99,	// (0x00053c97) popup_note_wait_window_g3_ParamLimits

0xce99,	// (0x00053c97) popup_note_wait_window_g3

0xcf0f,	// (0x00053d0d) popup_note_wait_window_t5_ParamLimits

0xcf0f,	// (0x00053d0d) popup_note_wait_window_t5

0xafb9,	// (0x00051db7) main_feb_china_hwr_fs_writing_pane

0x806e,	// (0x0004ee6c) popup_feb_china_hwr_fs_window_ParamLimits

0x806e,	// (0x0004ee6c) popup_feb_china_hwr_fs_window

0x86af,	// (0x0004f4ad) aid_size_cell_hwr_fs_ParamLimits

0x86af,	// (0x0004f4ad) aid_size_cell_hwr_fs

0xc98e,	// (0x0005378c) bg_popup_sub_pane_cp3_ParamLimits

0xc98e,	// (0x0005378c) bg_popup_sub_pane_cp3

0x86c4,	// (0x0004f4c2) grid_hwr_fs_pane_ParamLimits

0x86c4,	// (0x0004f4c2) grid_hwr_fs_pane

0x1a59,	// (0x00048857) linegrid_hwr_fs_pane_ParamLimits

0x1a59,	// (0x00048857) linegrid_hwr_fs_pane

0x86dc,	// (0x0004f4da) cell_hwr_fs_pane_ParamLimits

0x86dc,	// (0x0004f4da) cell_hwr_fs_pane

0xc99a,	// (0x00053798) linegrid_hwr_fs_pane_g1_ParamLimits

0xc99a,	// (0x00053798) linegrid_hwr_fs_pane_g1

0xa128,	// (0x00050f26) linegrid_hwr_fs_pane_g2_ParamLimits

0xa128,	// (0x00050f26) linegrid_hwr_fs_pane_g2

0xc9a6,	// (0x000537a4) linegrid_hwr_fs_pane_g3_ParamLimits

0xc9a6,	// (0x000537a4) linegrid_hwr_fs_pane_g3

0x1a8b,	// (0x00048889) linegrid_hwr_fs_pane_g4_ParamLimits

0x1a8b,	// (0x00048889) linegrid_hwr_fs_pane_g4

0x1aa5,	// (0x000488a3) linegrid_hwr_fs_pane_g5_ParamLimits

0x1aa5,	// (0x000488a3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x000565f9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x000565f9) linegrid_hwr_fs_pane_g

0xc9b2,	// (0x000537b0) cell_hwr_fs_pane_g1_ParamLimits

0xc9b2,	// (0x000537b0) cell_hwr_fs_pane_g1

0xc7aa,	// (0x000535a8) cell_hwr_fs_pane_g2_ParamLimits

0xc7aa,	// (0x000535a8) cell_hwr_fs_pane_g2

0xa13a,	// (0x00050f38) cell_hwr_fs_pane_g3_ParamLimits

0xa13a,	// (0x00050f38) cell_hwr_fs_pane_g3

0xa147,	// (0x00050f45) cell_hwr_fs_pane_g4_ParamLimits

0xa147,	// (0x00050f45) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x00056604) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x00056604) cell_hwr_fs_pane_g

0x8702,	// (0x0004f500) cell_hwr_fs_pane_t1

0xafb9,	// (0x00051db7) grid_highlight_pane_cp6

0xafb9,	// (0x00051db7) main_idle_act2_pane

0xbb96,	// (0x00052994) aid_inside_area_popup_secondary

0xa28e,	// (0x0005108c) aid_inside_area_window_primary_ParamLimits

0xa28e,	// (0x0005108c) aid_inside_area_window_primary

0xdc9c,	// (0x00054a9a) ai2_news_ticker_pane

0xdca4,	// (0x00054aa2) aid_size_cell_ai1_link_ParamLimits

0xdca4,	// (0x00054aa2) aid_size_cell_ai1_link

0xdcbe,	// (0x00054abc) popup_ai2_data_window_ParamLimits

0xdcbe,	// (0x00054abc) popup_ai2_data_window

0xdcd2,	// (0x00054ad0) popup_ai2_link_window_ParamLimits

0xdcd2,	// (0x00054ad0) popup_ai2_link_window

0xc98e,	// (0x0005378c) bg_popup_sub_pane_cp4_ParamLimits

0xc98e,	// (0x0005378c) bg_popup_sub_pane_cp4

0xdce6,	// (0x00054ae4) grid_ai2_link_pane_ParamLimits

0xdce6,	// (0x00054ae4) grid_ai2_link_pane

0xdcfd,	// (0x00054afb) popup_ai2_link_window_g1_ParamLimits

0xdcfd,	// (0x00054afb) popup_ai2_link_window_g1

0xdd09,	// (0x00054b07) popup_ai2_link_window_g2_ParamLimits

0xdd09,	// (0x00054b07) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x000567d7) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x000567d7) popup_ai2_link_window_g

0xdd18,	// (0x00054b16) ai2_mp_button_pane

0xdd20,	// (0x00054b1e) ai2_mp_volume_pane

0xcadb,	// (0x000538d9) bg_popup_sub_pane_cp5_ParamLimits

0xcadb,	// (0x000538d9) bg_popup_sub_pane_cp5

0xdd28,	// (0x00054b26) heading_ai2_gene_pane_ParamLimits

0xdd28,	// (0x00054b26) heading_ai2_gene_pane

0xdd34,	// (0x00054b32) list_ai2_gene_pane_ParamLimits

0xdd34,	// (0x00054b32) list_ai2_gene_pane

0xdd7c,	// (0x00054b7a) cell_ai2_link_pane_ParamLimits

0xdd7c,	// (0x00054b7a) cell_ai2_link_pane

0xdd92,	// (0x00054b90) cell_ai2_link_pane_g1

0xafb9,	// (0x00051db7) grid_highlight_pane_cp7

0x1db3,	// (0x00048bb1) ai2_mp_volume_pane_g1

0xde63,	// (0x00054c61) ai2_mp_volume_pane_g2

0xddd8,	// (0x00054bd6) list_ai2_gene_pane_t1

0xde6b,	// (0x00054c69) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x000567f0) ai2_mp_volume_pane_g

0x1dbb,	// (0x00048bb9) volume_small_pane_cp3

0xde73,	// (0x00054c71) aid_size_cell_ai2_button

0xde7b,	// (0x00054c79) grid_ai2_button_pane

0xde84,	// (0x00054c82) cell_ai2_button_pane_ParamLimits

0xde84,	// (0x00054c82) cell_ai2_button_pane

0xafaf,	// (0x00051dad) cell_ai2_button_pane_g1

0xafb9,	// (0x00051db7) grid_highlight_pane_cp8

0xde23,	// (0x00054c21) ai2_gene_pane_t1_ParamLimits

0xde23,	// (0x00054c21) ai2_gene_pane_t1

0x8004,	// (0x0004ee02) aid_height_parent_landscape

0xa412,	// (0x00051210) aid_height_set_list

0xd0a0,	// (0x00053e9e) aid_size_parent

0xdb03,	// (0x00054901) aid_size_cell_graphic_pane_ParamLimits

0xdd44,	// (0x00054b42) popup_ai2_data_window_g1_ParamLimits

0xdd44,	// (0x00054b42) popup_ai2_data_window_g1

0xdd50,	// (0x00054b4e) ai2_news_ticker_pane_g1

0xdd58,	// (0x00054b56) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x000567dc) ai2_news_ticker_pane_g

0xdd60,	// (0x00054b5e) ai2_news_ticker_pane_t1

0xdd6e,	// (0x00054b6c) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x000567e1) ai2_news_ticker_pane_t

0xdd9b,	// (0x00054b99) heading_ai2_gene_pane_g1

0xdda3,	// (0x00054ba1) heading_ai2_gene_pane_t1_ParamLimits

0xdda3,	// (0x00054ba1) heading_ai2_gene_pane_t1

0xddb8,	// (0x00054bb6) list_highlight_pane_cp6

0xddc0,	// (0x00054bbe) ai2_gene_pane_ParamLimits

0xddc0,	// (0x00054bbe) ai2_gene_pane

0xdde6,	// (0x00054be4) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x000567e6) list_ai2_gene_pane_t

0xddf4,	// (0x00054bf2) list_highlight_pane_cp8_ParamLimits

0xddf4,	// (0x00054bf2) list_highlight_pane_cp8

0xde05,	// (0x00054c03) ai2_gene_pane_g1_ParamLimits

0xde05,	// (0x00054c03) ai2_gene_pane_g1

0xde17,	// (0x00054c15) ai2_gene_pane_g2_ParamLimits

0xde17,	// (0x00054c15) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x000567eb) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x000567eb) ai2_gene_pane_g

0xba0d,	// (0x0005280b) scroll_pane_cp12

0x7fc3,	// (0x0004edc1) control_pane_t3_ParamLimits

0x7fc3,	// (0x0004edc1) control_pane_t3

0xc62c,	// (0x0005342a) status_small_pane_g8_ParamLimits

0xc62c,	// (0x0005342a) status_small_pane_g8

0x8101,	// (0x0004eeff) popup_find_window_ParamLimits

0x837c,	// (0x0004f17a) popup_note_image_window_ParamLimits

0x36eb,	// (0x0004a4e9) list_double2_graphic_pane_vc_g1_ParamLimits

0x36eb,	// (0x0004a4e9) list_double2_graphic_pane_vc_g1

0x2ead,	// (0x00049cab) list_double2_graphic_pane_vc_g2_ParamLimits

0x2ead,	// (0x00049cab) list_double2_graphic_pane_vc_g2

0x2eb9,	// (0x00049cb7) list_double2_graphic_pane_vc_g3_ParamLimits

0x2eb9,	// (0x00049cb7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x000565c7) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x000565c7) list_double2_graphic_pane_vc_g

0x36f7,	// (0x0004a4f5) list_double2_graphic_pane_vc_t1_ParamLimits

0x36f7,	// (0x0004a4f5) list_double2_graphic_pane_vc_t1

0x2ead,	// (0x00049cab) list_single_heading_pane_vc_g1_ParamLimits

0x2ead,	// (0x00049cab) list_single_heading_pane_vc_g1

0x2eb9,	// (0x00049cb7) list_single_heading_pane_vc_g2_ParamLimits

0x2eb9,	// (0x00049cb7) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x000563d6) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x000563d6) list_single_heading_pane_vc_g

0x370d,	// (0x0004a50b) list_single_heading_pane_vc_t1_ParamLimits

0x370d,	// (0x0004a50b) list_single_heading_pane_vc_t1

0x3723,	// (0x0004a521) list_single_heading_pane_vc_t2_ParamLimits

0x3723,	// (0x0004a521) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x000565e8) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x000565e8) list_single_heading_pane_vc_t

0xc8e6,	// (0x000536e4) list_setting_number_pane_vc_g1_ParamLimits

0xc8e6,	// (0x000536e4) list_setting_number_pane_vc_g1

0xc8f2,	// (0x000536f0) list_setting_number_pane_vc_g2_ParamLimits

0xc8f2,	// (0x000536f0) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x000565ed) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x000565ed) list_setting_number_pane_vc_g

0xc8fe,	// (0x000536fc) list_setting_number_pane_vc_t1_ParamLimits

0xc8fe,	// (0x000536fc) list_setting_number_pane_vc_t1

0xc912,	// (0x00053710) list_setting_number_pane_vc_t2_ParamLimits

0xc912,	// (0x00053710) list_setting_number_pane_vc_t2

0xc92c,	// (0x0005372a) list_setting_number_pane_vc_t3_ParamLimits

0xc92c,	// (0x0005372a) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x000565f2) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x000565f2) list_setting_number_pane_vc_t

0xc952,	// (0x00053750) set_value_pane_vc_ParamLimits

0xc952,	// (0x00053750) set_value_pane_vc

0xda80,	// (0x0005487e) list_double2_graphic_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_double2_graphic_pane_vc

0xda80,	// (0x0005487e) list_double2_large_graphic_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_double2_large_graphic_pane_vc

0xda80,	// (0x0005487e) list_double2_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_double2_pane_vc

0xda80,	// (0x0005487e) list_double_graphic_heading_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_double_graphic_heading_pane_vc

0xda80,	// (0x0005487e) list_double_graphic_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_double_graphic_pane_vc

0xda80,	// (0x0005487e) list_double_heading_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_double_heading_pane_vc

0xda80,	// (0x0005487e) list_double_large_graphic_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_double_large_graphic_pane_vc

0xda80,	// (0x0005487e) list_double_number_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_double_number_pane_vc

0xda80,	// (0x0005487e) list_double_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_double_pane_vc

0xda80,	// (0x0005487e) list_double_time_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_double_time_pane_vc

0xda80,	// (0x0005487e) list_setting_number_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_setting_number_pane_vc

0xda80,	// (0x0005487e) list_setting_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_setting_pane_vc

0xda80,	// (0x0005487e) list_single_graphic_heading_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_single_graphic_heading_pane_vc

0xda80,	// (0x0005487e) list_single_heading_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_single_heading_pane_vc

0xda80,	// (0x0005487e) list_single_number_heading_pane_vc_ParamLimits

0xda80,	// (0x0005487e) list_single_number_heading_pane_vc

0x36eb,	// (0x0004a4e9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x36eb,	// (0x0004a4e9) list_double_graphic_heading_pane_vc_g1

0x2ead,	// (0x00049cab) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2ead,	// (0x00049cab) list_double_graphic_heading_pane_vc_g2

0x2eb9,	// (0x00049cb7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2eb9,	// (0x00049cb7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x000565c7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x000565c7) list_double_graphic_heading_pane_vc_g

0x3b22,	// (0x0004a920) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3b22,	// (0x0004a920) list_double_graphic_heading_pane_vc_t1

0x370d,	// (0x0004a50b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x370d,	// (0x0004a50b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x000567f7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x000567f7) list_double_graphic_heading_pane_vc_t

0xc8e6,	// (0x000536e4) list_setting_pane_vc_g1_ParamLimits

0xc8e6,	// (0x000536e4) list_setting_pane_vc_g1

0xc8f2,	// (0x000536f0) list_setting_pane_vc_g2_ParamLimits

0xc8f2,	// (0x000536f0) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x000565ed) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x000565ed) list_setting_pane_vc_g

0xe07a,	// (0x00054e78) list_setting_pane_vc_t1_ParamLimits

0xe07a,	// (0x00054e78) list_setting_pane_vc_t1

0xe094,	// (0x00054e92) list_setting_pane_vc_t2_ParamLimits

0xe094,	// (0x00054e92) list_setting_pane_vc_t2

0x0001,

0xfa3c,	// (0x0005683a) list_setting_pane_vc_t_ParamLimits

0xfa3c,	// (0x0005683a) list_setting_pane_vc_t

0xc952,	// (0x00053750) set_value_pane_cp_vc_ParamLimits

0xc952,	// (0x00053750) set_value_pane_cp_vc

0x2ead,	// (0x00049cab) list_single_number_heading_pane_vc_g1_ParamLimits

0x2ead,	// (0x00049cab) list_single_number_heading_pane_vc_g1

0x2eb9,	// (0x00049cb7) list_single_number_heading_pane_vc_g2_ParamLimits

0x2eb9,	// (0x00049cb7) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x000563d6) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x000563d6) list_single_number_heading_pane_vc_g

0x370d,	// (0x0004a50b) list_single_number_heading_pane_vc_t1_ParamLimits

0x370d,	// (0x0004a50b) list_single_number_heading_pane_vc_t1

0x3b36,	// (0x0004a934) list_single_number_heading_pane_vc_t2_ParamLimits

0x3b36,	// (0x0004a934) list_single_number_heading_pane_vc_t2

0x3b4a,	// (0x0004a948) list_single_number_heading_pane_vc_t3_ParamLimits

0x3b4a,	// (0x0004a948) list_single_number_heading_pane_vc_t3

0x0002,

0xfa41,	// (0x0005683f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0005683f) list_single_number_heading_pane_vc_t

0x36eb,	// (0x0004a4e9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x36eb,	// (0x0004a4e9) list_single_graphic_heading_pane_vc_g1

0x2ead,	// (0x00049cab) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2ead,	// (0x00049cab) list_single_graphic_heading_pane_vc_g4

0x2eb9,	// (0x00049cb7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2eb9,	// (0x00049cb7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x000565c7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x000565c7) list_single_graphic_heading_pane_vc_g

0x370d,	// (0x0004a50b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x370d,	// (0x0004a50b) list_single_graphic_heading_pane_vc_t1

0x3b5c,	// (0x0004a95a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3b5c,	// (0x0004a95a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x00056846) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x00056846) list_single_graphic_heading_pane_vc_t

0x2ead,	// (0x00049cab) list_double2_pane_vc_g1_ParamLimits

0x2ead,	// (0x00049cab) list_double2_pane_vc_g1

0x2eb9,	// (0x00049cb7) list_double2_pane_vc_g2_ParamLimits

0x2eb9,	// (0x00049cb7) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x000563d6) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x000563d6) list_double2_pane_vc_g

0x3b70,	// (0x0004a96e) list_double2_pane_vc_t1_ParamLimits

0x3b70,	// (0x0004a96e) list_double2_pane_vc_t1

0x43ad,	// (0x0004b1ab) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x43ad,	// (0x0004b1ab) list_double2_large_graphic_pane_vc_g1

0x2ead,	// (0x00049cab) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2ead,	// (0x00049cab) list_double2_large_graphic_pane_vc_g2

0x2eb9,	// (0x00049cb7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2eb9,	// (0x00049cb7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x000563ee) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x000563ee) list_double2_large_graphic_pane_vc_g

0x3b86,	// (0x0004a984) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3b86,	// (0x0004a984) list_double2_large_graphic_pane_vc_t1

0x3b9c,	// (0x0004a99a) list_double_time_pane_vc_g1_ParamLimits

0x3b9c,	// (0x0004a99a) list_double_time_pane_vc_g1

0x3ba8,	// (0x0004a9a6) list_double_time_pane_vc_g2_ParamLimits

0x3ba8,	// (0x0004a9a6) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0005684b) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0005684b) list_double_time_pane_vc_g

0x3bb4,	// (0x0004a9b2) list_double_time_pane_vc_t1_ParamLimits

0x3bb4,	// (0x0004a9b2) list_double_time_pane_vc_t1

0x3bd2,	// (0x0004a9d0) list_double_time_pane_vc_t2_ParamLimits

0x3bd2,	// (0x0004a9d0) list_double_time_pane_vc_t2

0x3c21,	// (0x0004aa1f) list_double_time_pane_vc_t3_ParamLimits

0x3c21,	// (0x0004aa1f) list_double_time_pane_vc_t3

0x3c33,	// (0x0004aa31) list_double_time_pane_vc_t4_ParamLimits

0x3c33,	// (0x0004aa31) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x00056850) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x00056850) list_double_time_pane_vc_t

0x2ead,	// (0x00049cab) list_double_pane_vc_g1_ParamLimits

0x2ead,	// (0x00049cab) list_double_pane_vc_g1

0x2eb9,	// (0x00049cb7) list_double_pane_vc_g2_ParamLimits

0x2eb9,	// (0x00049cb7) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x000563d6) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x000563d6) list_double_pane_vc_g

0x3c47,	// (0x0004aa45) list_double_pane_vc_t1_ParamLimits

0x3c47,	// (0x0004aa45) list_double_pane_vc_t1

0x3c59,	// (0x0004aa57) list_double_pane_vc_t2_ParamLimits

0x3c59,	// (0x0004aa57) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x00056859) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x00056859) list_double_pane_vc_t

0x2ead,	// (0x00049cab) list_double_number_pane_vc_g1_ParamLimits

0x2ead,	// (0x00049cab) list_double_number_pane_vc_g1

0x2eb9,	// (0x00049cb7) list_double_number_pane_vc_g2_ParamLimits

0x2eb9,	// (0x00049cb7) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x000563d6) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x000563d6) list_double_number_pane_vc_g

0x3c71,	// (0x0004aa6f) list_double_number_pane_vc_t1_ParamLimits

0x3c71,	// (0x0004aa6f) list_double_number_pane_vc_t1

0x3c85,	// (0x0004aa83) list_double_number_pane_vc_t2_ParamLimits

0x3c85,	// (0x0004aa83) list_double_number_pane_vc_t2

0x3c59,	// (0x0004aa57) list_double_number_pane_vc_t3_ParamLimits

0x3c59,	// (0x0004aa57) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0005685e) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0005685e) list_double_number_pane_vc_t

0x43b9,	// (0x0004b1b7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x43b9,	// (0x0004b1b7) list_double_large_graphic_pane_vc_g1

0x43ca,	// (0x0004b1c8) list_double_large_graphic_pane_vc_g2_ParamLimits

0x43ca,	// (0x0004b1c8) list_double_large_graphic_pane_vc_g2

0x2eb9,	// (0x00049cb7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2eb9,	// (0x00049cb7) list_double_large_graphic_pane_vc_g3

0x3c97,	// (0x0004aa95) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3c97,	// (0x0004aa95) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x00056865) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x00056865) list_double_large_graphic_pane_vc_g

0x3ca3,	// (0x0004aaa1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3ca3,	// (0x0004aaa1) list_double_large_graphic_pane_vc_t1

0x3cba,	// (0x0004aab8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3cba,	// (0x0004aab8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0005686e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0005686e) list_double_large_graphic_pane_vc_t

0x2ead,	// (0x00049cab) list_double_heading_pane_vc_g1_ParamLimits

0x2ead,	// (0x00049cab) list_double_heading_pane_vc_g1

0x2eb9,	// (0x00049cb7) list_double_heading_pane_vc_g2_ParamLimits

0x2eb9,	// (0x00049cb7) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x000563d6) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x000563d6) list_double_heading_pane_vc_g

0x3cd3,	// (0x0004aad1) list_double_heading_pane_vc_t1_ParamLimits

0x3cd3,	// (0x0004aad1) list_double_heading_pane_vc_t1

0x370d,	// (0x0004a50b) list_double_heading_pane_vc_t2_ParamLimits

0x370d,	// (0x0004a50b) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x00056873) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x00056873) list_double_heading_pane_vc_t

0x36eb,	// (0x0004a4e9) list_double_graphic_pane_vc_g1_ParamLimits

0x36eb,	// (0x0004a4e9) list_double_graphic_pane_vc_g1

0x3ce7,	// (0x0004aae5) list_double_graphic_pane_vc_g2_ParamLimits

0x3ce7,	// (0x0004aae5) list_double_graphic_pane_vc_g2

0x3cf6,	// (0x0004aaf4) list_double_graphic_pane_vc_g3_ParamLimits

0x3cf6,	// (0x0004aaf4) list_double_graphic_pane_vc_g3

0x0002,

0xfa7a,	// (0x00056878) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x00056878) list_double_graphic_pane_vc_g

0x3d02,	// (0x0004ab00) list_double_graphic_pane_vc_t1_ParamLimits

0x3d02,	// (0x0004ab00) list_double_graphic_pane_vc_t1

0x3c59,	// (0x0004aa57) list_double_graphic_pane_vc_t2_ParamLimits

0x3c59,	// (0x0004aa57) list_double_graphic_pane_vc_t2

0x0001,

0xfa81,	// (0x0005687f) list_double_graphic_pane_vc_t_ParamLimits

0xfa81,	// (0x0005687f) list_double_graphic_pane_vc_t

0x0360,	// (0x0004715e) aid_size_cell_fastswap

0x7767,	// (0x0004e565) aid_size_cell_touch_ParamLimits

0x7767,	// (0x0004e565) aid_size_cell_touch

0x05cd,	// (0x000473cb) popup_fast_swap_wide_window_ParamLimits

0x05cd,	// (0x000473cb) popup_fast_swap_wide_window

0x78b2,	// (0x0004e6b0) touch_pane_ParamLimits

0x78b2,	// (0x0004e6b0) touch_pane

0xba6f,	// (0x0005286d) button_value_adjust_pane_cp2

0x0c3a,	// (0x00047a38) button_value_adjust_pane_cp4

0x0c5a,	// (0x00047a58) form_field_data_pane_cp2

0x7cdc,	// (0x0004eada) form_field_data_wide_pane_cp2

0xbdc8,	// (0x00052bc6) bg_scroll_pane_ParamLimits

0x0f9e,	// (0x00047d9c) scroll_handle_pane_ParamLimits

0x0fb2,	// (0x00047db0) scroll_sc2_down_pane_ParamLimits

0x0fb2,	// (0x00047db0) scroll_sc2_down_pane

0xbdf9,	// (0x00052bf7) scroll_sc2_up_pane_ParamLimits

0xbdf9,	// (0x00052bf7) scroll_sc2_up_pane

0xa780,	// (0x0005157e) grid_wheel_folder_pane_g1_ParamLimits

0xa780,	// (0x0005157e) grid_wheel_folder_pane_g1

0x1177,	// (0x00047f75) clock_nsta_pane_cp2_ParamLimits

0x1177,	// (0x00047f75) clock_nsta_pane_cp2

0xbbe7,	// (0x000529e5) listscroll_midp_pane_ParamLimits

0x9c55,	// (0x00050a53) midp_canvas_pane

0xc680,	// (0x0005347e) nsta_clock_indic_pane

0xc6a8,	// (0x000534a6) listscroll_form_pane_vc

0xc6b0,	// (0x000534ae) listscroll_set_pane_vc_ParamLimits

0xc6b0,	// (0x000534ae) listscroll_set_pane_vc

0x9e39,	// (0x00050c37) clock_nsta_pane

0x9e63,	// (0x00050c61) indicator_nsta_pane

0xc7dc,	// (0x000535da) bg_popup_sub_pane_cp2_ParamLimits

0xc7f0,	// (0x000535ee) find_pane_cp2_ParamLimits

0xc7f0,	// (0x000535ee) find_pane_cp2

0xc806,	// (0x00053604) grid_toobar_pane_ParamLimits

0xc962,	// (0x00053760) list_form_gen_pane_vc_ParamLimits

0xc962,	// (0x00053760) list_form_gen_pane_vc

0xc978,	// (0x00053776) scroll_pane_cp8_vc_ParamLimits

0xc978,	// (0x00053776) scroll_pane_cp8_vc

0xc9c8,	// (0x000537c6) data_form_wide_pane_vc_ParamLimits

0xc9c8,	// (0x000537c6) data_form_wide_pane_vc

0xc9d4,	// (0x000537d2) form_field_data_wide_pane_vc_g1

0xc9dc,	// (0x000537da) form_field_data_wide_pane_vc_t1_ParamLimits

0xc9dc,	// (0x000537da) form_field_data_wide_pane_vc_t1

0xba83,	// (0x00052881) input_focus_pane_cp6_vc_ParamLimits

0xba83,	// (0x00052881) input_focus_pane_cp6_vc

0xa1e7,	// (0x00050fe5) list_midp_pane_ParamLimits

0xd0b2,	// (0x00053eb0) scroll_pane_cp16_ParamLimits

0xd0b2,	// (0x00053eb0) scroll_pane_cp16

0xcc73,	// (0x00053a71) button_value_adjust_pane_ParamLimits

0xcc73,	// (0x00053a71) button_value_adjust_pane

0xa423,	// (0x00051221) button_value_adjust_pane_cp6_ParamLimits

0xa423,	// (0x00051221) button_value_adjust_pane_cp6

0xa539,	// (0x00051337) settings_code_pane_cp_ParamLimits

0xa539,	// (0x00051337) settings_code_pane_cp

0xafaf,	// (0x00051dad) cell_touch_pane_g1

0xafaf,	// (0x00051dad) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0005650c) cell_touch_pane_g

0xa65f,	// (0x0005145d) cell_touch_pane_cp_ParamLimits

0xa65f,	// (0x0005145d) cell_touch_pane_cp

0xa67b,	// (0x00051479) cell_touch_pane_ParamLimits

0xa67b,	// (0x00051479) cell_touch_pane

0xafaf,	// (0x00051dad) scroll_sc2_down_pane_g1

0xafaf,	// (0x00051dad) scroll_sc2_up_pane_g1

0xafb9,	// (0x00051db7) bg_set_opt_pane_cp4_vc

0xde96,	// (0x00054c94) list_set_graphic_pane_vc_g1_ParamLimits

0xde96,	// (0x00054c94) list_set_graphic_pane_vc_g1

0xdea2,	// (0x00054ca0) list_set_graphic_pane_vc_g2_ParamLimits

0xdea2,	// (0x00054ca0) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x000567fc) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x000567fc) list_set_graphic_pane_vc_g

0xdeae,	// (0x00054cac) text_primary_small_cp13_vc_ParamLimits

0xdeae,	// (0x00054cac) text_primary_small_cp13_vc

0xd08c,	// (0x00053e8a) list_set_graphic_pane_vc_ParamLimits

0xd08c,	// (0x00053e8a) list_set_graphic_pane_vc

0xafb9,	// (0x00051db7) input_focus_pane_cp2_vc

0xafaf,	// (0x00051dad) setting_code_pane_vc_g1

0xb02c,	// (0x00051e2a) setting_code_pane_vc_t1

0xdec6,	// (0x00054cc4) set_text_pane_vc_t1_ParamLimits

0xdec6,	// (0x00054cc4) set_text_pane_vc_t1

0xafb9,	// (0x00051db7) input_focus_pane_cp1_vc

0xdee5,	// (0x00054ce3) list_set_text_pane_vc

0xafaf,	// (0x00051dad) setting_text_pane_vc_g1

0xafb9,	// (0x00051db7) bg_set_opt_pane_cp2_vc

0xb023,	// (0x00051e21) setting_slider_graphic_pane_vc_g1

0xdeef,	// (0x00054ced) setting_slider_graphic_pane_vc_t1

0xdefe,	// (0x00054cfc) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x00056801) setting_slider_graphic_pane_vc_t

0xdf0d,	// (0x00054d0b) slider_set_pane_cp_vc

0xdf15,	// (0x00054d13) slider_set_pane_vc_g1

0xdf1e,	// (0x00054d1c) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x00056806) slider_set_pane_vc_g

0xbade,	// (0x000528dc) set_opt_bg_pane_g1_copy1

0xbae6,	// (0x000528e4) set_opt_bg_pane_g2_copy1

0xdf4a,	// (0x00054d48) set_opt_bg_pane_g3_copy1

0xbaf6,	// (0x000528f4) set_opt_bg_pane_g4_copy1

0xbafe,	// (0x000528fc) set_opt_bg_pane_g5_copy1

0xbb06,	// (0x00052904) set_opt_bg_pane_g6_copy1

0xdf52,	// (0x00054d50) set_opt_bg_pane_g7_copy1

0xdf5c,	// (0x00054d5a) set_opt_bg_pane_g8_copy1

0xdf64,	// (0x00054d62) set_opt_bg_pane_g9_copy1

0xafb9,	// (0x00051db7) bg_set_opt_pane_cp_vc

0xdf6c,	// (0x00054d6a) setting_slider_pane_vc_t1

0xdf7b,	// (0x00054d79) setting_slider_pane_vc_t2

0xdf8a,	// (0x00054d88) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x00056815) setting_slider_pane_vc_t

0xdf99,	// (0x00054d97) slider_set_pane_vc

0x1ac9,	// (0x000488c7) volume_set_pane_vc_g1

0x1dc4,	// (0x00048bc2) volume_set_pane_vc_g2

0x1dcd,	// (0x00048bcb) volume_set_pane_vc_g3

0x1dd6,	// (0x00048bd4) volume_set_pane_vc_g4

0x1ddf,	// (0x00048bdd) volume_set_pane_vc_g5

0x1de8,	// (0x00048be6) volume_set_pane_vc_g6

0x1df1,	// (0x00048bef) volume_set_pane_vc_g7

0x1dfa,	// (0x00048bf8) volume_set_pane_vc_g8

0x1e03,	// (0x00048c01) volume_set_pane_vc_g9

0x1e0c,	// (0x00048c0a) volume_set_pane_vc_g10

0x0009,

0xfa1e,	// (0x0005681c) volume_set_pane_vc_g

0xdfa1,	// (0x00054d9f) volume_set_pane_vc

0xdfab,	// (0x00054da9) button_value_adjust_pane_cp1_vc

0xdfb5,	// (0x00054db3) list_highlight_pane_cp2_vc

0xdfbe,	// (0x00054dbc) list_set_pane_vc_ParamLimits

0xdfbe,	// (0x00054dbc) list_set_pane_vc

0xe010,	// (0x00054e0e) main_pane_set_vc_t1_ParamLimits

0xe010,	// (0x00054e0e) main_pane_set_vc_t1

0xe025,	// (0x00054e23) main_pane_set_vc_t2_ParamLimits

0xe025,	// (0x00054e23) main_pane_set_vc_t2

0xe037,	// (0x00054e35) main_pane_set_vc_t3_ParamLimits

0xe037,	// (0x00054e35) main_pane_set_vc_t3

0xe049,	// (0x00054e47) main_pane_set_vc_t4_ParamLimits

0xe049,	// (0x00054e47) main_pane_set_vc_t4

0x0003,

0xfa33,	// (0x00056831) main_pane_set_vc_t_ParamLimits

0xfa33,	// (0x00056831) main_pane_set_vc_t

0xe05b,	// (0x00054e59) setting_code_pane_vc_ParamLimits

0xe05b,	// (0x00054e59) setting_code_pane_vc

0xe06a,	// (0x00054e68) setting_slider_graphic_pane_vc

0xe06a,	// (0x00054e68) setting_slider_pane_vc

0xe06a,	// (0x00054e68) setting_text_pane_vc

0xe06a,	// (0x00054e68) setting_volume_pane_vc

0xe072,	// (0x00054e70) scroll_pane_cp121_vc

0xba5d,	// (0x0005285b) set_content_pane_vc

0xe0aa,	// (0x00054ea8) button_value_adjust_pane_g1

0xe0b3,	// (0x00054eb1) button_value_adjust_pane_g2

0x0001,

0xfa86,	// (0x00056884) button_value_adjust_pane_g

0xe0bc,	// (0x00054eba) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe0bc,	// (0x00054eba) form_field_slider_wide_pane_vc_t1

0xe0d0,	// (0x00054ece) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe0d0,	// (0x00054ece) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8b,	// (0x00056889) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x00056889) form_field_slider_wide_pane_vc_t

0xb007,	// (0x00051e05) input_focus_pane_cp10_vc_ParamLimits

0xb007,	// (0x00051e05) input_focus_pane_cp10_vc

0xe0fc,	// (0x00054efa) slider_cont_pane_cp1_vc_ParamLimits

0xe0fc,	// (0x00054efa) slider_cont_pane_cp1_vc

0xe10c,	// (0x00054f0a) slider_form_pane_g1_cp2

0xdf1e,	// (0x00054d1c) slider_form_pane_g2_cp2

0xe139,	// (0x00054f37) form_field_slider_pane_vc_t3

0xe147,	// (0x00054f45) form_field_slider_pane_vc_t4

0xe155,	// (0x00054f53) slider_form_pane_vc_ParamLimits

0xe155,	// (0x00054f53) slider_form_pane_vc

0xe162,	// (0x00054f60) form_field_slider_pane_vc_t1_ParamLimits

0xe162,	// (0x00054f60) form_field_slider_pane_vc_t1

0xe0d0,	// (0x00054ece) form_field_slider_pane_vc_t2_ParamLimits

0xe0d0,	// (0x00054ece) form_field_slider_pane_vc_t2

0x0001,

0xfa9d,	// (0x0005689b) form_field_slider_pane_vc_t_ParamLimits

0xfa9d,	// (0x0005689b) form_field_slider_pane_vc_t

0xb007,	// (0x00051e05) input_focus_pane_cp9_vc_ParamLimits

0xb007,	// (0x00051e05) input_focus_pane_cp9_vc

0xe17e,	// (0x00054f7c) slider_cont_pane_vc_ParamLimits

0xe17e,	// (0x00054f7c) slider_cont_pane_vc

0xe190,	// (0x00054f8e) list_form_graphic_pane_cp_vc_ParamLimits

0xe190,	// (0x00054f8e) list_form_graphic_pane_cp_vc

0xc9d4,	// (0x000537d2) form_field_popup_wide_pane_vc_g1

0xe1a5,	// (0x00054fa3) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe1a5,	// (0x00054fa3) form_field_popup_wide_pane_vc_t1

0xba83,	// (0x00052881) input_focus_pane_cp8_vc_ParamLimits

0xba83,	// (0x00052881) input_focus_pane_cp8_vc

0xe1ea,	// (0x00054fe8) list_form_wide_pane_vc_ParamLimits

0xe1ea,	// (0x00054fe8) list_form_wide_pane_vc

0xe1f6,	// (0x00054ff4) list_form_graphic_pane_vc_g1

0xe1fe,	// (0x00054ffc) list_form_graphic_pane_vc_t1_ParamLimits

0xe1fe,	// (0x00054ffc) list_form_graphic_pane_vc_t1

0xb015,	// (0x00051e13) list_highlight_pane_cp5_vc_ParamLimits

0xb015,	// (0x00051e13) list_highlight_pane_cp5_vc

0xe21a,	// (0x00055018) list_form_graphic_pane_vc_ParamLimits

0xe21a,	// (0x00055018) list_form_graphic_pane_vc

0xc9d4,	// (0x000537d2) form_field_popup_pane_vc_g1

0xe230,	// (0x0005502e) form_field_popup_pane_vc_t1_ParamLimits

0xe230,	// (0x0005502e) form_field_popup_pane_vc_t1

0xba83,	// (0x00052881) input_focus_pane_cp7_vc_ParamLimits

0xba83,	// (0x00052881) input_focus_pane_cp7_vc

0xe247,	// (0x00055045) list_form_pane_vc_ParamLimits

0xe247,	// (0x00055045) list_form_pane_vc

0xe253,	// (0x00055051) data_form_pane_vc_t1_ParamLimits

0xe253,	// (0x00055051) data_form_pane_vc_t1

0xbade,	// (0x000528dc) input_focus_pane_vc_g1

0xbae6,	// (0x000528e4) input_focus_pane_vc_g2

0xbaee,	// (0x000528ec) input_focus_pane_vc_g3

0xbaf6,	// (0x000528f4) input_focus_pane_vc_g4

0xbafe,	// (0x000528fc) input_focus_pane_vc_g5

0xbb06,	// (0x00052904) input_focus_pane_vc_g6

0xbb0e,	// (0x0005290c) input_focus_pane_vc_g7

0xbb16,	// (0x00052914) input_focus_pane_vc_g8

0xbb1e,	// (0x0005291c) input_focus_pane_vc_g9

0xafaf,	// (0x00051dad) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x00056495) input_focus_pane_vc_g

0xc9c8,	// (0x000537c6) data_form_pane_vc_ParamLimits

0xc9c8,	// (0x000537c6) data_form_pane_vc

0xc9d4,	// (0x000537d2) form_field_data_pane_vc_g1

0xe26e,	// (0x0005506c) form_field_data_pane_vc_t1_ParamLimits

0xe26e,	// (0x0005506c) form_field_data_pane_vc_t1

0xba83,	// (0x00052881) input_focus_pane_vc_ParamLimits

0xba83,	// (0x00052881) input_focus_pane_vc

0xe288,	// (0x00055086) button_value_adjust_pane_cp3_vc

0xe290,	// (0x0005508e) button_value_adjust_pane_cp5_vc

0xe298,	// (0x00055096) form_field_data_pane_vc_ParamLimits

0xe298,	// (0x00055096) form_field_data_pane_vc

0xe2af,	// (0x000550ad) form_field_data_pane_vc_cp2

0xe2b7,	// (0x000550b5) form_field_data_wide_pane_vc_ParamLimits

0xe2b7,	// (0x000550b5) form_field_data_wide_pane_vc

0xe2cd,	// (0x000550cb) form_field_data_wide_pane_vc_cp2

0xe2d5,	// (0x000550d3) form_field_popup_pane_vc_ParamLimits

0xe2d5,	// (0x000550d3) form_field_popup_pane_vc

0xe2ec,	// (0x000550ea) form_field_popup_wide_pane_vc_ParamLimits

0xe2ec,	// (0x000550ea) form_field_popup_wide_pane_vc

0xe302,	// (0x00055100) form_field_slider_pane_vc_ParamLimits

0xe302,	// (0x00055100) form_field_slider_pane_vc

0xe315,	// (0x00055113) form_field_slider_wide_pane_vc_ParamLimits

0xe315,	// (0x00055113) form_field_slider_wide_pane_vc

0xa699,	// (0x00051497) grid_touch_1_pane_ParamLimits

0xa699,	// (0x00051497) grid_touch_1_pane

0xa6ad,	// (0x000514ab) grid_touch_2_pane_ParamLimits

0xa6ad,	// (0x000514ab) grid_touch_2_pane

0xe328,	// (0x00055126) touch_pane_g1_ParamLimits

0xe328,	// (0x00055126) touch_pane_g1

0xe336,	// (0x00055134) cell_app_pane_cp_wide_ParamLimits

0xe336,	// (0x00055134) cell_app_pane_cp_wide

0xe347,	// (0x00055145) grid_popup_fast_wide_pane_ParamLimits

0xe347,	// (0x00055145) grid_popup_fast_wide_pane

0xe35b,	// (0x00055159) scroll_pane_cp19_ParamLimits

0xe35b,	// (0x00055159) scroll_pane_cp19

0xafb9,	// (0x00051db7) bg_popup_window_pane_cp20

0xe36f,	// (0x0005516d) listscroll_popup_fast_wide_pane

0xd072,	// (0x00053e70) grid_indicator_nsta_pane

0xe377,	// (0x00055175) clock_nsta_pane_g1

0xe380,	// (0x0005517e) clock_nsta_pane_t1

0xa6d7,	// (0x000514d5) cell_indicator_nsta_pane_ParamLimits

0xa6d7,	// (0x000514d5) cell_indicator_nsta_pane

0xe328,	// (0x00055126) cell_indicator_nsta_pane_g1

0xa6f4,	// (0x000514f2) cell_indicator_nsta_pane_g2

0x0001,

0xfaae,	// (0x000568ac) cell_indicator_nsta_pane_g

0xe39c,	// (0x0005519a) clock_nsta_pane_cp

0xe3a4,	// (0x000551a2) indicator_nsta_pane_cp

0xe3ad,	// (0x000551ab) nsta_clock_indic_pane_g1

0xb051,	// (0x00051e4f) grid_indicator_pane

0xbeeb,	// (0x00052ce9) scroll_pane_cp29

0x10c6,	// (0x00047ec4) indicator_nsta_pane_cp2_ParamLimits

0x10c6,	// (0x00047ec4) indicator_nsta_pane_cp2

0xb015,	// (0x00051e13) main_apps_wheel_pane

0xcb18,	// (0x00053916) form_midp_field_text_pane_ParamLimits

0xcc45,	// (0x00053a43) scroll_bar_cp050_ParamLimits

0xe458,	// (0x00055256) cell_indicator_pane_ParamLimits

0xe458,	// (0x00055256) cell_indicator_pane

0xe475,	// (0x00055273) cell_indicator_pane_g1

0xa70a,	// (0x00051508) grid_wheel_folder_pane_ParamLimits

0xa70a,	// (0x00051508) grid_wheel_folder_pane

0xa718,	// (0x00051516) list_wheel_apps_pane_ParamLimits

0xa718,	// (0x00051516) list_wheel_apps_pane

0xa726,	// (0x00051524) main_apps_wheel_pane_g1_ParamLimits

0xa726,	// (0x00051524) main_apps_wheel_pane_g1

0xa732,	// (0x00051530) main_apps_wheel_pane_g2_ParamLimits

0xa732,	// (0x00051530) main_apps_wheel_pane_g2

0x0001,

0xfaca,	// (0x000568c8) main_apps_wheel_pane_g_ParamLimits

0xfaca,	// (0x000568c8) main_apps_wheel_pane_g

0xa740,	// (0x0005153e) main_apps_wheel_pane_t1_ParamLimits

0xa740,	// (0x0005153e) main_apps_wheel_pane_t1

0xa754,	// (0x00051552) list_wheel_apps_pane_g1

0xa75c,	// (0x0005155a) list_wheel_apps_pane_g2

0xa764,	// (0x00051562) list_wheel_apps_pane_g3

0xa76c,	// (0x0005156a) list_wheel_apps_pane_g4

0xa776,	// (0x00051574) list_wheel_apps_pane_g5

0x0004,

0xfacf,	// (0x000568cd) list_wheel_apps_pane_g

0xc310,	// (0x0005310e) navi_icon_text_pane

0x9d2d,	// (0x00050b2b) aid_fill_nsta

0xe47f,	// (0x0005527d) navi_icon_text_pane_g1

0xe48b,	// (0x00055289) navi_icon_text_pane_t1

0xc208,	// (0x00053006) list_set_graphic_pane_t1_ParamLimits

0xc208,	// (0x00053006) list_set_graphic_pane_t1

0xd399,	// (0x00054197) popup_midp_note_alarm_window_t6_ParamLimits

0xd399,	// (0x00054197) popup_midp_note_alarm_window_t6

0xd3ab,	// (0x000541a9) popup_midp_note_alarm_window_t7_ParamLimits

0xd3ab,	// (0x000541a9) popup_midp_note_alarm_window_t7

0xd3bd,	// (0x000541bb) popup_midp_note_alarm_window_t8_ParamLimits

0xd3bd,	// (0x000541bb) popup_midp_note_alarm_window_t8

0xd3cf,	// (0x000541cd) popup_midp_note_alarm_window_t9_ParamLimits

0xd3cf,	// (0x000541cd) popup_midp_note_alarm_window_t9

0xd3e1,	// (0x000541df) popup_midp_note_alarm_window_t10_ParamLimits

0xd3e1,	// (0x000541df) popup_midp_note_alarm_window_t10

0xd3f3,	// (0x000541f1) popup_midp_note_alarm_window_t11_ParamLimits

0xd3f3,	// (0x000541f1) popup_midp_note_alarm_window_t11

0xd405,	// (0x00054203) scroll_pane_cp17_ParamLimits

0xd405,	// (0x00054203) scroll_pane_cp17

0x1ac9,	// (0x000488c7) volume_small_pane_cp_g1

0x1e15,	// (0x00048c13) volume_small_pane_cp_g2

0x1e1e,	// (0x00048c1c) volume_small_pane_cp_g3

0x1e27,	// (0x00048c25) volume_small_pane_cp_g4

0x1e30,	// (0x00048c2e) volume_small_pane_cp_g5

0x1e39,	// (0x00048c37) volume_small_pane_cp_g6

0x1e42,	// (0x00048c40) volume_small_pane_cp_g7

0x1e4b,	// (0x00048c49) volume_small_pane_cp_g8

0x1e54,	// (0x00048c52) volume_small_pane_cp_g9

0x1e5d,	// (0x00048c5b) volume_small_pane_cp_g10

0xc496,	// (0x00053294) midp_ticker_pane_g1_ParamLimits

0xc4a2,	// (0x000532a0) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x00056561) midp_ticker_pane_g_ParamLimits

0xc4ae,	// (0x000532ac) midp_ticker_pane_t1_ParamLimits

0x9d51,	// (0x00050b4f) aid_fill_nsta_2

0xcc31,	// (0x00053a2f) list_form2_midp_pane

0xda4f,	// (0x0005484d) midp_editing_number_pane_ParamLimits

0xda5e,	// (0x0005485c) midp_ticker_pane_ParamLimits

0xe49d,	// (0x0005529b) form2_midp_field_pane

0xe4a5,	// (0x000552a3) scroll_pane_cp51

0xe4c5,	// (0x000552c3) form2_midp_button_pane_ParamLimits

0xe4c5,	// (0x000552c3) form2_midp_button_pane

0xe4d7,	// (0x000552d5) form2_midp_content_pane_ParamLimits

0xe4d7,	// (0x000552d5) form2_midp_content_pane

0xe4f1,	// (0x000552ef) form2_midp_field_choice_group_pane

0xe4f9,	// (0x000552f7) form2_midp_field_pane_g1

0xe501,	// (0x000552ff) form2_midp_field_pane_g2

0xe509,	// (0x00055307) form2_midp_field_pane_g3

0xe511,	// (0x0005530f) form2_midp_field_pane_g4

0x0003,

0xfaf4,	// (0x000568f2) form2_midp_field_pane_g

0xe519,	// (0x00055317) form2_midp_gauge_slider_pane

0xe521,	// (0x0005531f) form2_midp_gauge_wait_pane

0xe529,	// (0x00055327) form2_midp_image_pane_ParamLimits

0xe529,	// (0x00055327) form2_midp_image_pane

0xe544,	// (0x00055342) form2_midp_label_pane_ParamLimits

0xe544,	// (0x00055342) form2_midp_label_pane

0xa7a9,	// (0x000515a7) form2_midp_label_pane_cp_ParamLimits

0xa7a9,	// (0x000515a7) form2_midp_label_pane_cp

0xe55d,	// (0x0005535b) form2_midp_string_pane_ParamLimits

0xe55d,	// (0x0005535b) form2_midp_string_pane

0x3d14,	// (0x0004ab12) form2_midp_text_pane_ParamLimits

0x3d14,	// (0x0004ab12) form2_midp_text_pane

0xe56f,	// (0x0005536d) form2_midp_time_pane

0xe57f,	// (0x0005537d) input_focus_pane_cp51_ParamLimits

0xe57f,	// (0x0005537d) input_focus_pane_cp51

0xe597,	// (0x00055395) form2_midp_label_pane_t1_ParamLimits

0xe597,	// (0x00055395) form2_midp_label_pane_t1

0x3d2f,	// (0x0004ab2d) form2_mdip_text_pane_t1_ParamLimits

0x3d2f,	// (0x0004ab2d) form2_mdip_text_pane_t1

0x3d4b,	// (0x0004ab49) form2_midp_time_pane_t1

0xe5df,	// (0x000553dd) form2_midp_gauge_slider_pane_t1

0xa7ca,	// (0x000515c8) form2_midp_gauge_slider_pane_t2

0xa7de,	// (0x000515dc) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafd,	// (0x000568fb) form2_midp_gauge_slider_pane_t

0xe5f1,	// (0x000553ef) form2_midp_slider_pane

0xe5fd,	// (0x000553fb) form2_midp_gauge_wait_pane_t1

0xe60b,	// (0x00055409) form2_midp_wait_pane_ParamLimits

0xe60b,	// (0x00055409) form2_midp_wait_pane

0xa7f2,	// (0x000515f0) list_single_2graphic_pane_cp4_ParamLimits

0xa7f2,	// (0x000515f0) list_single_2graphic_pane_cp4

0xa16a,	// (0x00050f68) list_single_midp_graphic_pane_cp_ParamLimits

0xa16a,	// (0x00050f68) list_single_midp_graphic_pane_cp

0xafb9,	// (0x00051db7) list_highlight_pane_cp20

0xe636,	// (0x00055434) list_single_2graphic_pane_g1_cp4

0xdd9b,	// (0x00054b99) list_single_2graphic_pane_g2_cp4

0xe63e,	// (0x0005543c) list_single_2graphic_pane_t1_cp4

0xb015,	// (0x00051e13) list_highlight_pane_cp21

0xe64d,	// (0x0005544b) list_single_midp_graphic_pane_g4_cp

0xe65c,	// (0x0005545a) list_single_midp_graphic_pane_t1_cp

0xa809,	// (0x00051607) form2_mdip_string_pane_t1_ParamLimits

0xa809,	// (0x00051607) form2_mdip_string_pane_t1

0xafb9,	// (0x00051db7) bg_wml_button_pane_cp2

0xafaf,	// (0x00051dad) form2_midp_image_pane_g1

0x2f18,	// (0x00049d16) list_double_large_graphic_pane_g5_ParamLimits

0x2f18,	// (0x00049d16) list_double_large_graphic_pane_g5

0xbbe7,	// (0x000529e5) midp_form_pane_ParamLimits

0xb015,	// (0x00051e13) main_apps_wheel_pane_ParamLimits

0x83fa,	// (0x0004f1f8) popup_preview_window_ParamLimits

0x83fa,	// (0x0004f1f8) popup_preview_window

0x1934,	// (0x00048732) popup_touch_info_window_ParamLimits

0x1934,	// (0x00048732) popup_touch_info_window

0x1952,	// (0x00048750) popup_touch_menu_window_ParamLimits

0x1952,	// (0x00048750) popup_touch_menu_window

0xafa5,	// (0x00051da3) bg_popup_sub_pane_cp6

0xe671,	// (0x0005546f) list_touch_menu_pane

0xe679,	// (0x00055477) list_single_touch_menu_pane_ParamLimits

0xe679,	// (0x00055477) list_single_touch_menu_pane

0xe68d,	// (0x0005548b) list_single_touch_menu_pane_t1

0xb015,	// (0x00051e13) bg_popup_sub_pane_cp7_ParamLimits

0xb015,	// (0x00051e13) bg_popup_sub_pane_cp7

0xe69b,	// (0x00055499) heading_sub_pane

0xe6a3,	// (0x000554a1) list_touch_info_pane_ParamLimits

0xe6a3,	// (0x000554a1) list_touch_info_pane

0xe6b2,	// (0x000554b0) list_single_touch_info_pane_ParamLimits

0xe6b2,	// (0x000554b0) list_single_touch_info_pane

0xe6c4,	// (0x000554c2) list_single_touch_info_pane_t1

0xe6d2,	// (0x000554d0) list_single_touch_info_pane_t2

0x0001,

0xfb0b,	// (0x00056909) list_single_touch_info_pane_t

0xc46c,	// (0x0005326a) bg_popup_heading_pane_cp

0xe6e0,	// (0x000554de) heading_sub_pane_t1

0xc98e,	// (0x0005378c) bg_popup_preview_window_pane_cp_ParamLimits

0xc98e,	// (0x0005378c) bg_popup_preview_window_pane_cp

0xe69b,	// (0x00055499) heading_preview_pane

0xe6a3,	// (0x000554a1) list_preview_pane_ParamLimits

0xe6a3,	// (0x000554a1) list_preview_pane

0xe6ee,	// (0x000554ec) popup_preview_window_g1

0xe6b2,	// (0x000554b0) list_single_preview_pane_ParamLimits

0xe6b2,	// (0x000554b0) list_single_preview_pane

0xe6f6,	// (0x000554f4) list_single_preview_pane_g1

0xe6fe,	// (0x000554fc) list_single_preview_pane_t1

0xe6c4,	// (0x000554c2) list_single_preview_pane_t2

0x0001,

0xfb10,	// (0x0005690e) list_single_preview_pane_t

0xe70c,	// (0x0005550a) bg_popup_heading_pane_cp2_ParamLimits

0xe70c,	// (0x0005550a) bg_popup_heading_pane_cp2

0xe722,	// (0x00055520) heading_preview_pane_g1

0xe72a,	// (0x00055528) heading_preview_pane_t1_ParamLimits

0xe72a,	// (0x00055528) heading_preview_pane_t1

0xb068,	// (0x00051e66) soft_indicator_pane_t1_ParamLimits

0xb9ea,	// (0x000527e8) scroll_pane_ParamLimits

0xbde7,	// (0x00052be5) scroll_sc2_left_pane

0xbdf0,	// (0x00052bee) scroll_sc2_right_pane

0xbe0f,	// (0x00052c0d) scroll_bg_pane_g1_ParamLimits

0xbe24,	// (0x00052c22) scroll_bg_pane_g2_ParamLimits

0xbe3c,	// (0x00052c3a) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x000564ec) scroll_bg_pane_g_ParamLimits

0xbe0f,	// (0x00052c0d) scroll_handle_pane_g1_ParamLimits

0xbe5e,	// (0x00052c5c) scroll_handle_pane_g2_ParamLimits

0xbe3c,	// (0x00052c3a) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x000564f3) scroll_handle_pane_g_ParamLimits

0x140e,	// (0x0004820c) popup_choice_list_window_ParamLimits

0x140e,	// (0x0004820c) popup_choice_list_window

0xc7e8,	// (0x000535e6) choice_list_pane

0xc86a,	// (0x00053668) cell_toolbar_pane_t1

0xc892,	// (0x00053690) toolbar_button_pane_ParamLimits

0xd7c6,	// (0x000545c4) ai_gene_pane_1_t2_ParamLimits

0xd7c6,	// (0x000545c4) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x00056716) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x00056716) ai_gene_pane_1_t

0xe747,	// (0x00055545) scroll_sc2_left_pane_g1

0xe747,	// (0x00055545) scroll_sc2_right_pane_g1

0xbbe7,	// (0x000529e5) bg_popup_sub_pane_cp10

0xe751,	// (0x0005554f) list_choice_list_pane

0xe768,	// (0x00055566) list_single_choice_list_pane_ParamLimits

0xe768,	// (0x00055566) list_single_choice_list_pane

0xbbca,	// (0x000529c8) list_single_choice_list_pane_g1

0xbbd2,	// (0x000529d0) list_single_choice_list_pane_t1_ParamLimits

0xbbd2,	// (0x000529d0) list_single_choice_list_pane_t1

0xe77b,	// (0x00055579) choice_list_pane_g1

0xe783,	// (0x00055581) choice_list_pane_t1

0xafa5,	// (0x00051da3) input_focus_pane_cp11

0xbd5c,	// (0x00052b5a) title_pane_stacon_g2_ParamLimits

0xbd5c,	// (0x00052b5a) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x000564d2) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000564d2) title_pane_stacon_g

0xc46c,	// (0x0005326a) cursor_press_pane

0x80b9,	// (0x0004eeb7) popup_fep_hwr_window_ParamLimits

0x80b9,	// (0x0004eeb7) popup_fep_hwr_window

0x152c,	// (0x0004832a) popup_fep_vkb_window_ParamLimits

0x152c,	// (0x0004832a) popup_fep_vkb_window

0xe791,	// (0x0005558f) cursor_press_pane_g1

0x0002,

0xfb39,	// (0x00056937) fep_vkb_side_pane_g_ParamLimits

0x1e9f,	// (0x00048c9d) fep_hwr_candidate_pane_ParamLimits

0x1e9f,	// (0x00048c9d) fep_hwr_candidate_pane

0x1ec9,	// (0x00048cc7) fep_hwr_side_pane_ParamLimits

0x1ec9,	// (0x00048cc7) fep_hwr_side_pane

0x1ee9,	// (0x00048ce7) fep_hwr_top_pane_ParamLimits

0x1ee9,	// (0x00048ce7) fep_hwr_top_pane

0x1f01,	// (0x00048cff) fep_hwr_write_pane_ParamLimits

0x1f01,	// (0x00048cff) fep_hwr_write_pane

0xfb39,	// (0x00056937) fep_vkb_side_pane_g

0xe799,	// (0x00055597) fep_hwr_top_pane_g1

0xe7ab,	// (0x000555a9) fep_hwr_top_pane_g2

0x1f3b,	// (0x00048d39) fep_hwr_top_pane_g3

0x0002,

0xfb15,	// (0x00056913) fep_hwr_top_pane_g

0x1f50,	// (0x00048d4e) fep_hwr_top_text_pane

0xbfb1,	// (0x00052daf) fep_hwr_top_text_pane_g1

0xe7e1,	// (0x000555df) fep_hwr_top_text_pane_t1

0x2046,	// (0x00048e44) fep_hwr_candidate_pane_g1

0xe9ee,	// (0x000557ec) fep_vkb_keypad_pane_g3_ParamLimits

0xe9ee,	// (0x000557ec) fep_vkb_keypad_pane_g3

0xea16,	// (0x00055814) fep_vkb_keypad_pane_g4_ParamLimits

0xea16,	// (0x00055814) fep_vkb_keypad_pane_g4

0xea85,	// (0x00055883) fep_vkb_bottom_pane_g2_ParamLimits

0xea85,	// (0x00055883) fep_vkb_bottom_pane_g2

0x0001,

0xfb40,	// (0x0005693e) fep_vkb_bottom_pane_g_ParamLimits

0xfb40,	// (0x0005693e) fep_vkb_bottom_pane_g

0xe747,	// (0x00055545) cell_vkb_side_pane_g2

0x0001,

0xfb4a,	// (0x00056948) cell_vkb_side_pane_g

0xeac9,	// (0x000558c7) cell_vkb_side_pane_t1

0xead7,	// (0x000558d5) cell_vkb_side_pane_t1_copy1

0xe747,	// (0x00055545) bg_fep_vkb_candidate_pane_g2

0xebb3,	// (0x000559b1) cell_vkb_candidate_pane_ParamLimits

0xe7ef,	// (0x000555ed) aid_size_cell_vkb_ParamLimits

0xe7ef,	// (0x000555ed) aid_size_cell_vkb

0xebb3,	// (0x000559b1) cell_vkb_candidate_pane

0x206d,	// (0x00048e6b) bg_popup_fep_shadow_pane_g1

0xe86b,	// (0x00055669) fep_vkb_bottom_pane_ParamLimits

0xe86b,	// (0x00055669) fep_vkb_bottom_pane

0xe8a8,	// (0x000556a6) fep_vkb_candidate_pane_ParamLimits

0xe8a8,	// (0x000556a6) fep_vkb_candidate_pane

0xe8c4,	// (0x000556c2) fep_vkb_keypad_pane_ParamLimits

0xe8c4,	// (0x000556c2) fep_vkb_keypad_pane

0xe90a,	// (0x00055708) fep_vkb_side_pane_ParamLimits

0xe90a,	// (0x00055708) fep_vkb_side_pane

0xe946,	// (0x00055744) fep_vkb_top_pane_ParamLimits

0xe946,	// (0x00055744) fep_vkb_top_pane

0xe982,	// (0x00055780) fep_vkb_top_pane_g1_ParamLimits

0xe982,	// (0x00055780) fep_vkb_top_pane_g1

0xe991,	// (0x0005578f) fep_vkb_top_pane_g2_ParamLimits

0xe991,	// (0x0005578f) fep_vkb_top_pane_g2

0xe9a0,	// (0x0005579e) fep_vkb_top_pane_g3_ParamLimits

0xe9a0,	// (0x0005579e) fep_vkb_top_pane_g3

0x0003,

0xfb30,	// (0x0005692e) fep_vkb_top_pane_g_ParamLimits

0xfb30,	// (0x0005692e) fep_vkb_top_pane_g

0xe9be,	// (0x000557bc) fep_vkb_top_text_pane_ParamLimits

0xe9be,	// (0x000557bc) fep_vkb_top_text_pane

0xa8a1,	// (0x0005169f) fep_vkb_side_pane_g1_ParamLimits

0xa8a1,	// (0x0005169f) fep_vkb_side_pane_g1

0xe9dd,	// (0x000557db) grid_vkb_side_pane_ParamLimits

0xe9dd,	// (0x000557db) grid_vkb_side_pane

0x2075,	// (0x00048e73) bg_popup_fep_shadow_pane_g2

0x207e,	// (0x00048e7c) bg_popup_fep_shadow_pane_g3

0x2086,	// (0x00048e84) bg_popup_fep_shadow_pane_g4

0x208f,	// (0x00048e8d) bg_popup_fep_shadow_pane_g5

0x2099,	// (0x00048e97) bg_popup_fep_shadow_pane_g6

0x20a1,	// (0x00048e9f) bg_popup_fep_shadow_pane_g7

0xbaf6,	// (0x000528f4) bg_popup_fep_shadow_pane_g8

0xea34,	// (0x00055832) grid_vkb_keypad_number_pane_ParamLimits

0xea34,	// (0x00055832) grid_vkb_keypad_number_pane

0xea44,	// (0x00055842) grid_vkb_keypad_pane_ParamLimits

0xea44,	// (0x00055842) grid_vkb_keypad_pane

0xea6a,	// (0x00055868) fep_vkb_bottom_pane_g1_ParamLimits

0xea6a,	// (0x00055868) fep_vkb_bottom_pane_g1

0xea93,	// (0x00055891) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xea93,	// (0x00055891) grid_vkb_keypad_bottom_left_pane

0xeaa8,	// (0x000558a6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xeaa8,	// (0x000558a6) grid_vkb_keypad_bottom_right_pane

0xeabd,	// (0x000558bb) fep_vkb_top_text_pane_g1

0xa8e8,	// (0x000516e6) fep_vkb_top_text_pane_t1

0xa8fa,	// (0x000516f8) cell_vkb_side_pane_ParamLimits

0xa8fa,	// (0x000516f8) cell_vkb_side_pane

0xe747,	// (0x00055545) cell_vkb_side_pane_g1

0xeae5,	// (0x000558e3) cell_vkb_keypad_pane_ParamLimits

0xeae5,	// (0x000558e3) cell_vkb_keypad_pane

0xeb60,	// (0x0005595e) cell_vkb_keypad_pane_g1

0x0008,

0xfb5d,	// (0x0005695b) bg_popup_fep_shadow_pane_g

0x20b3,	// (0x00048eb1) cell_hwr_side_pane_g1

0x20b3,	// (0x00048eb1) cell_hwr_side_pane_g2

0xeb6a,	// (0x00055968) cell_vkb_keypad_pane_t1

0xa910,	// (0x0005170e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa910,	// (0x0005170e) cell_vkb_keypad_bottom_left_pane

0xa925,	// (0x00051723) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa925,	// (0x00051723) cell_vkb_keypad_bottom_right_pane

0xe747,	// (0x00055545) cell_vkb_keypad_bottom_left_pane_g1

0xe747,	// (0x00055545) cell_vkb_keypad_bottom_right_pane_g1

0xeb78,	// (0x00055976) cell_vkb_keypad_number_pane_ParamLimits

0xeb78,	// (0x00055976) cell_vkb_keypad_number_pane

0xeb97,	// (0x00055995) cell_vkb_keypad_number_pane_g1

0xeba1,	// (0x0005599f) cell_vkb_keypad_number_pane_g2

0xebaa,	// (0x000559a8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4f,	// (0x0005694d) cell_vkb_keypad_number_pane_g

0xeb6a,	// (0x00055968) cell_vkb_keypad_number_pane_t1

0xebd0,	// (0x000559ce) fep_vkb_candidate_pane_g1

0x0001,

0xfb70,	// (0x0005696e) cell_hwr_side_pane_g

0xebe9,	// (0x000559e7) cell_hwr_side_pane_t1

0x20bd,	// (0x00048ebb) cell_hwr_side_pane_t1_copy1

0x20cb,	// (0x00048ec9) cell_hwr_candidate_pane_g1

0x20fa,	// (0x00048ef8) cell_hwr_candidate_pane_t1

0xe747,	// (0x00055545) cell_vkb_candidate_pane_g2

0xec2d,	// (0x00055a2b) cell_vkb_candidate_pane_t1

0x1e66,	// (0x00048c64) bg_popup_fep_shadow_pane_ParamLimits

0x1e66,	// (0x00048c64) bg_popup_fep_shadow_pane

0x1f1b,	// (0x00048d19) bg_fep_hwr_top_pane_g4

0xe7bd,	// (0x000555bb) bg_hwr_side_pane_g1_ParamLimits

0xe7bd,	// (0x000555bb) bg_hwr_side_pane_g1

0x88f3,	// (0x0004f6f1) cell_hwr_side_pane_ParamLimits

0x88f3,	// (0x0004f6f1) cell_hwr_side_pane

0x1fc7,	// (0x00048dc5) fep_hwr_write_pane_g1_ParamLimits

0x1fc7,	// (0x00048dc5) fep_hwr_write_pane_g1

0x1fd4,	// (0x00048dd2) fep_hwr_write_pane_g2_ParamLimits

0x1fd4,	// (0x00048dd2) fep_hwr_write_pane_g2

0x1fe1,	// (0x00048ddf) fep_hwr_write_pane_g3_ParamLimits

0x1fe1,	// (0x00048ddf) fep_hwr_write_pane_g3

0x8913,	// (0x0004f711) fep_hwr_write_pane_g4_ParamLimits

0x8913,	// (0x0004f711) fep_hwr_write_pane_g4

0x0005,

0xfb1c,	// (0x0005691a) fep_hwr_write_pane_g_ParamLimits

0xfb1c,	// (0x0005691a) fep_hwr_write_pane_g

0x1f1b,	// (0x00048d19) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1f1b,	// (0x00048d19) bg_fep_hwr_candidate_pane_g2

0x2004,	// (0x00048e02) cell_hwr_candidate_pane_ParamLimits

0x2004,	// (0x00048e02) cell_hwr_candidate_pane

0x2046,	// (0x00048e44) fep_hwr_candidate_pane_g1_ParamLimits

0xe81d,	// (0x0005561b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe81d,	// (0x0005561b) bg_popup_fep_shadow_pane_cp2

0xe9b0,	// (0x000557ae) fep_vkb_top_pane_g4_ParamLimits

0xe9b0,	// (0x000557ae) fep_vkb_top_pane_g4

0xe9cf,	// (0x000557cd) fep_vkb_side_pane_g2_ParamLimits

0xe9cf,	// (0x000557cd) fep_vkb_side_pane_g2

0x7c02,	// (0x0004ea00) list_setting_pane_t4_ParamLimits

0x7c02,	// (0x0004ea00) list_setting_pane_t4

0x7c84,	// (0x0004ea82) list_setting_number_pane_t5_ParamLimits

0x7c84,	// (0x0004ea82) list_setting_number_pane_t5

0xbff8,	// (0x00052df6) list_double_heading_pane_cp2_ParamLimits

0xbff8,	// (0x00052df6) list_double_heading_pane_cp2

0xba1e,	// (0x0005281c) list_double_heading_pane_g1_cp2_ParamLimits

0xba1e,	// (0x0005281c) list_double_heading_pane_g1_cp2

0xba9d,	// (0x0005289b) list_double_heading_pane_g2_cp2_ParamLimits

0xba9d,	// (0x0005289b) list_double_heading_pane_g2_cp2

0xec3b,	// (0x00055a39) list_double_heading_pane_t1_cp2_ParamLimits

0xec3b,	// (0x00055a39) list_double_heading_pane_t1_cp2

0xec51,	// (0x00055a4f) list_double_heading_pane_t2_cp2_ParamLimits

0xec51,	// (0x00055a4f) list_double_heading_pane_t2_cp2

0xaf9d,	// (0x00051d9b) aid_value_unit2

0x0619,	// (0x00047417) popup_preview_fixed_window

0xb148,	// (0x00051f46) bg_popup_preview_window_pane_cp02

0xec63,	// (0x00055a61) list_preview_fixed_pane

0xeca9,	// (0x00055aa7) list_empty_pane_fp_ParamLimits

0xeca9,	// (0x00055aa7) list_empty_pane_fp

0xeca9,	// (0x00055aa7) list_single_cale_day_pane_fp_ParamLimits

0xeca9,	// (0x00055aa7) list_single_cale_day_pane_fp

0xeca9,	// (0x00055aa7) list_single_graphic_heading_pane_fp_ParamLimits

0xeca9,	// (0x00055aa7) list_single_graphic_heading_pane_fp

0xeca9,	// (0x00055aa7) list_single_graphic_pane_fp_ParamLimits

0xeca9,	// (0x00055aa7) list_single_graphic_pane_fp

0xeca9,	// (0x00055aa7) list_single_heading_pane_fp_ParamLimits

0xeca9,	// (0x00055aa7) list_single_heading_pane_fp

0xeca9,	// (0x00055aa7) list_single_pane_fp_ParamLimits

0xeca9,	// (0x00055aa7) list_single_pane_fp

0xecc0,	// (0x00055abe) list_single_pane_fp_g1_ParamLimits

0xecc0,	// (0x00055abe) list_single_pane_fp_g1

0x2f00,	// (0x00049cfe) list_single_pane_fp_g2_ParamLimits

0x2f00,	// (0x00049cfe) list_single_pane_fp_g2

0x3d5e,	// (0x0004ab5c) list_single_pane_fp_g3_ParamLimits

0x3d5e,	// (0x0004ab5c) list_single_pane_fp_g3

0xeccc,	// (0x00055aca) list_single_pane_fp_g4_ParamLimits

0xeccc,	// (0x00055aca) list_single_pane_fp_g4

0x0003,

0xfb83,	// (0x00056981) list_single_pane_fp_g_ParamLimits

0xfb83,	// (0x00056981) list_single_pane_fp_g

0x3d72,	// (0x0004ab70) list_single_pane_fp_t1_ParamLimits

0x3d72,	// (0x0004ab70) list_single_pane_fp_t1

0x3d89,	// (0x0004ab87) list_single_graphic_pane_fp_g1_ParamLimits

0x3d89,	// (0x0004ab87) list_single_graphic_pane_fp_g1

0xecc0,	// (0x00055abe) list_single_graphic_pane_fp_g2_ParamLimits

0xecc0,	// (0x00055abe) list_single_graphic_pane_fp_g2

0x2f00,	// (0x00049cfe) list_single_graphic_pane_fp_g3_ParamLimits

0x2f00,	// (0x00049cfe) list_single_graphic_pane_fp_g3

0x3d5e,	// (0x0004ab5c) list_single_graphic_pane_fp_g4_ParamLimits

0x3d5e,	// (0x0004ab5c) list_single_graphic_pane_fp_g4

0xeccc,	// (0x00055aca) list_single_graphic_pane_fp_g5_ParamLimits

0xeccc,	// (0x00055aca) list_single_graphic_pane_fp_g5

0x0004,

0xfb8c,	// (0x0005698a) list_single_graphic_pane_fp_g_ParamLimits

0xfb8c,	// (0x0005698a) list_single_graphic_pane_fp_g

0x3d95,	// (0x0004ab93) list_single_graphic_pane_fp_t1_ParamLimits

0x3d95,	// (0x0004ab93) list_single_graphic_pane_fp_t1

0x3d89,	// (0x0004ab87) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3d89,	// (0x0004ab87) list_single_graphic_heading_pane_fp_g1

0xecc0,	// (0x00055abe) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xecc0,	// (0x00055abe) list_single_graphic_heading_pane_fp_g2

0x2f00,	// (0x00049cfe) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2f00,	// (0x00049cfe) list_single_graphic_heading_pane_fp_g3

0x3d5e,	// (0x0004ab5c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3d5e,	// (0x0004ab5c) list_single_graphic_heading_pane_fp_g4

0xeccc,	// (0x00055aca) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xeccc,	// (0x00055aca) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0005698a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0005698a) list_single_graphic_heading_pane_fp_g

0x3dab,	// (0x0004aba9) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3dab,	// (0x0004aba9) list_single_graphic_heading_pane_fp_t1

0x3dc1,	// (0x0004abbf) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3dc1,	// (0x0004abbf) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x00056995) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x00056995) list_single_graphic_heading_pane_fp_t

0x3dd3,	// (0x0004abd1) list_single_cale_day_pane_fp_g1_ParamLimits

0x3dd3,	// (0x0004abd1) list_single_cale_day_pane_fp_g1

0xecd8,	// (0x00055ad6) list_single_cale_day_pane_fp_g2_ParamLimits

0xecd8,	// (0x00055ad6) list_single_cale_day_pane_fp_g2

0x3e0b,	// (0x0004ac09) list_single_cale_day_pane_fp_g3_ParamLimits

0x3e0b,	// (0x0004ac09) list_single_cale_day_pane_fp_g3

0x3e33,	// (0x0004ac31) list_single_cale_day_pane_fp_g4_ParamLimits

0x3e33,	// (0x0004ac31) list_single_cale_day_pane_fp_g4

0x3e57,	// (0x0004ac55) list_single_cale_day_pane_fp_g5_ParamLimits

0x3e57,	// (0x0004ac55) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9c,	// (0x0005699a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9c,	// (0x0005699a) list_single_cale_day_pane_fp_g

0x3e7b,	// (0x0004ac79) list_single_cale_day_pane_fp_t1_ParamLimits

0x3e7b,	// (0x0004ac79) list_single_cale_day_pane_fp_t1

0x3ea1,	// (0x0004ac9f) list_single_cale_day_pane_fp_t2_ParamLimits

0x3ea1,	// (0x0004ac9f) list_single_cale_day_pane_fp_t2

0x3eba,	// (0x0004acb8) list_single_cale_day_pane_fp_t3_ParamLimits

0x3eba,	// (0x0004acb8) list_single_cale_day_pane_fp_t3

0x0002,

0xfba7,	// (0x000569a5) list_single_cale_day_pane_fp_t_ParamLimits

0xfba7,	// (0x000569a5) list_single_cale_day_pane_fp_t

0xecc0,	// (0x00055abe) list_empty_pane_fp_g1_ParamLimits

0xecc0,	// (0x00055abe) list_empty_pane_fp_g1

0x3ed3,	// (0x0004acd1) list_empty_pane_fp_t1

0x3ee1,	// (0x0004acdf) list_empty_pane_fp_t2

0x0001,

0xfbae,	// (0x000569ac) list_empty_pane_fp_t

0xecc0,	// (0x00055abe) list_single_heading_pane_fp_g1_ParamLimits

0xecc0,	// (0x00055abe) list_single_heading_pane_fp_g1

0x2f00,	// (0x00049cfe) list_single_heading_pane_fp_g2_ParamLimits

0x2f00,	// (0x00049cfe) list_single_heading_pane_fp_g2

0x3d5e,	// (0x0004ab5c) list_single_heading_pane_fp_g3_ParamLimits

0x3d5e,	// (0x0004ab5c) list_single_heading_pane_fp_g3

0x0002,

0xfbb3,	// (0x000569b1) list_single_heading_pane_fp_g_ParamLimits

0xfbb3,	// (0x000569b1) list_single_heading_pane_fp_g

0x3eef,	// (0x0004aced) list_single_heading_pane_fp_t1_ParamLimits

0x3eef,	// (0x0004aced) list_single_heading_pane_fp_t1

0x3f01,	// (0x0004acff) list_single_heading_pane_fp_t2_ParamLimits

0x3f01,	// (0x0004acff) list_single_heading_pane_fp_t2

0x0001,

0xfbba,	// (0x000569b8) list_single_heading_pane_fp_t_ParamLimits

0xfbba,	// (0x000569b8) list_single_heading_pane_fp_t

0xbbf3,	// (0x000529f1) aid_size_cell_fast

0xb12b,	// (0x00051f29) soft_indicator_pane_cp1_t1

0xbc30,	// (0x00052a2e) cell_app_pane_cp2_ParamLimits

0xbc30,	// (0x00052a2e) cell_app_pane_cp2

0x1e88,	// (0x00048c86) fep_hwr_candidate_drop_down_list_pane

0x2060,	// (0x00048e5e) fep_hwr_candidate_pane_g3_ParamLimits

0x2060,	// (0x00048e5e) fep_hwr_candidate_pane_g3

0x8ecb,	// (0x0004fcc9) fep_hwr_candidate_pane_g4_ParamLimits

0x8ecb,	// (0x0004fcc9) fep_hwr_candidate_pane_g4

0x0002,

0xfb29,	// (0x00056927) fep_hwr_candidate_pane_g_ParamLimits

0xfb29,	// (0x00056927) fep_hwr_candidate_pane_g

0xe897,	// (0x00055695) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe897,	// (0x00055695) fep_vkb_candidate_drop_down_list_pane

0xebd8,	// (0x000559d6) fep_vkb_candidate_pane_g3

0xebe0,	// (0x000559de) fep_vkb_candidate_pane_g4

0x0002,

0xfb56,	// (0x00056954) fep_vkb_candidate_pane_g

0x20cb,	// (0x00048ec9) cell_hwr_candidate_pane_g1_ParamLimits

0x20d9,	// (0x00048ed7) cell_hwr_candidate_pane_g3_ParamLimits

0x20d9,	// (0x00048ed7) cell_hwr_candidate_pane_g3

0x5538,	// (0x0004c336) cell_hwr_candidate_pane_g4_ParamLimits

0x5538,	// (0x0004c336) cell_hwr_candidate_pane_g4

0x0002,

0xfb75,	// (0x00056973) cell_hwr_candidate_pane_g_ParamLimits

0xfb75,	// (0x00056973) cell_hwr_candidate_pane_g

0xebf7,	// (0x000559f5) cell_vkb_candidate_pane_g3_ParamLimits

0xebf7,	// (0x000559f5) cell_vkb_candidate_pane_g3

0xec12,	// (0x00055a10) cell_vkb_candidate_pane_g4_ParamLimits

0xec12,	// (0x00055a10) cell_vkb_candidate_pane_g4

0xece4,	// (0x00055ae2) cell_app_pane_cp2_g1_ParamLimits

0xece4,	// (0x00055ae2) cell_app_pane_cp2_g1

0xed02,	// (0x00055b00) cell_app_pane_cp2_g2_ParamLimits

0xed02,	// (0x00055b00) cell_app_pane_cp2_g2

0x0001,

0xfbbf,	// (0x000569bd) cell_app_pane_cp2_g_ParamLimits

0xfbbf,	// (0x000569bd) cell_app_pane_cp2_g

0xed0e,	// (0x00055b0c) cell_app_pane_cp2_t1_ParamLimits

0xed0e,	// (0x00055b0c) cell_app_pane_cp2_t1

0xba83,	// (0x00052881) grid_highlight_pane_cp1_ParamLimits

0xba83,	// (0x00052881) grid_highlight_pane_cp1

0x2118,	// (0x00048f16) cell_hwr_candidate_pane_cp1_ParamLimits

0x2118,	// (0x00048f16) cell_hwr_candidate_pane_cp1

0x20cb,	// (0x00048ec9) fep_hwr_candidate_drop_down_list_pane_g1

0x2137,	// (0x00048f35) fep_hwr_candidate_drop_down_list_pane_g2

0x2144,	// (0x00048f42) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc4,	// (0x000569c2) fep_hwr_candidate_drop_down_list_pane_g

0x2151,	// (0x00048f4f) fep_hwr_candidate_drop_down_list_scroll_pane

0x215a,	// (0x00048f58) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x215a,	// (0x00048f58) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2167,	// (0x00048f65) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2167,	// (0x00048f65) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2174,	// (0x00048f72) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2174,	// (0x00048f72) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x2181,	// (0x00048f7f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x2181,	// (0x00048f7f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x219c,	// (0x00048f9a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x219c,	// (0x00048f9a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x21b7,	// (0x00048fb5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x21b7,	// (0x00048fb5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x21d2,	// (0x00048fd0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x21d2,	// (0x00048fd0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x21ed,	// (0x00048feb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x21ed,	// (0x00048feb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x000569c9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x000569c9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xed20,	// (0x00055b1e) cell_vkb_candidate_pane_cp1_ParamLimits

0xed20,	// (0x00055b1e) cell_vkb_candidate_pane_cp1

0xe9b0,	// (0x000557ae) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe9b0,	// (0x000557ae) fep_vkb_candidate_drop_down_list_pane_g1

0xed40,	// (0x00055b3e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xed40,	// (0x00055b3e) fep_vkb_candidate_drop_down_list_pane_g2

0xed4d,	// (0x00055b4b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xed4d,	// (0x00055b4b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdc,	// (0x000569da) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdc,	// (0x000569da) fep_vkb_candidate_drop_down_list_pane_g

0xed5a,	// (0x00055b58) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xed5a,	// (0x00055b58) fep_vkb_candidate_drop_down_list_scroll_pane

0xed67,	// (0x00055b65) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xed67,	// (0x00055b65) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xed74,	// (0x00055b72) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xed74,	// (0x00055b72) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xed80,	// (0x00055b7e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xed80,	// (0x00055b7e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xed8c,	// (0x00055b8a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xed8c,	// (0x00055b8a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xedad,	// (0x00055bab) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xedad,	// (0x00055bab) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xedce,	// (0x00055bcc) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xedce,	// (0x00055bcc) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xedef,	// (0x00055bed) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xedef,	// (0x00055bed) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xee10,	// (0x00055c0e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xee10,	// (0x00055c0e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x000569e1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x000569e1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9577,	// (0x00050375) title_pane_g1_ParamLimits

0x958a,	// (0x00050388) title_pane_g2_ParamLimits

0xf554,	// (0x00056352) title_pane_g_ParamLimits

0xbfa1,	// (0x00052d9f) aid_call2_pane

0xbfa9,	// (0x00052da7) aid_call_pane

0xbfb1,	// (0x00052daf) popup_clock_analogue_window_g1

0xbfb1,	// (0x00052daf) popup_clock_analogue_window_g2

0x0fc7,	// (0x00047dc5) popup_clock_analogue_window_g3

0x0fd0,	// (0x00047dce) popup_clock_analogue_window_g4

0xafaf,	// (0x00051dad) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x00056501) popup_clock_analogue_window_g

0x0fd8,	// (0x00047dd6) popup_clock_analogue_window_t1

0x0fe6,	// (0x00047de4) clock_digital_number_pane_ParamLimits

0x0fe6,	// (0x00047de4) clock_digital_number_pane

0x0ff2,	// (0x00047df0) clock_digital_number_pane_cp02_ParamLimits

0x0ff2,	// (0x00047df0) clock_digital_number_pane_cp02

0x0ffe,	// (0x00047dfc) clock_digital_number_pane_cp03_ParamLimits

0x0ffe,	// (0x00047dfc) clock_digital_number_pane_cp03

0x100a,	// (0x00047e08) clock_digital_number_pane_cp04_ParamLimits

0x100a,	// (0x00047e08) clock_digital_number_pane_cp04

0x1016,	// (0x00047e14) clock_digital_separator_pane_ParamLimits

0x1016,	// (0x00047e14) clock_digital_separator_pane

0x1022,	// (0x00047e20) popup_clock_digital_window_t1_ParamLimits

0x1022,	// (0x00047e20) popup_clock_digital_window_t1

0xafaf,	// (0x00051dad) clock_digital_number_pane_g1

0xafaf,	// (0x00051dad) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0005650c) clock_digital_number_pane_g

0xafaf,	// (0x00051dad) clock_digital_separator_pane_g1

0xafaf,	// (0x00051dad) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0005650c) clock_digital_separator_pane_g

0x9d2d,	// (0x00050b2b) aid_fill_nsta_ParamLimits

0x9e63,	// (0x00050c61) indicator_nsta_pane_ParamLimits

0xc791,	// (0x0005358f) popup_clock_analogue_window

0xc791,	// (0x0005358f) popup_clock_digital_window

0xd072,	// (0x00053e70) grid_indicator_nsta_pane_ParamLimits

0xe38e,	// (0x0005518c) clock_nsta_pane_t2

0x0001,

0xfaa9,	// (0x000568a7) clock_nsta_pane_t

0x0f8b,	// (0x00047d89) aid_size_max_handle

0x7e2a,	// (0x0004ec28) aid_size_min_handle

0xc46c,	// (0x0005326a) editor_scroll_pane

0xee2b,	// (0x00055c29) ex_editor_pane

0xbbaf,	// (0x000529ad) scroll_pane_cp13

0xba16,	// (0x00052814) scroll_pane_cp14

0xbfe0,	// (0x00052dde) scroll_pane_cp36

0xc00a,	// (0x00052e08) list_single_graphic_hl_pane_cp2_ParamLimits

0xc00a,	// (0x00052e08) list_single_graphic_hl_pane_cp2

0xa58b,	// (0x00051389) list_single_graphic_hl_pane_ParamLimits

0xa58b,	// (0x00051389) list_single_graphic_hl_pane

0x3f17,	// (0x0004ad15) aid_size_min_hl_cp1

0xee33,	// (0x00055c31) list_highlight_pane_cp34_ParamLimits

0xee33,	// (0x00055c31) list_highlight_pane_cp34

0xee44,	// (0x00055c42) list_single_graphic_hl_pane_g1_ParamLimits

0xee44,	// (0x00055c42) list_single_graphic_hl_pane_g1

0x8928,	// (0x0004f726) list_single_graphic_hl_pane_g2_ParamLimits

0x8928,	// (0x0004f726) list_single_graphic_hl_pane_g2

0x8928,	// (0x0004f726) list_single_graphic_hl_pane_g3_ParamLimits

0x8928,	// (0x0004f726) list_single_graphic_hl_pane_g3

0x49df,	// (0x0004b7dd) list_single_graphic_hl_pane_g4_ParamLimits

0x49df,	// (0x0004b7dd) list_single_graphic_hl_pane_g4

0x8ed8,	// (0x0004fcd6) list_single_graphic_hl_pane_g5_ParamLimits

0x8ed8,	// (0x0004fcd6) list_single_graphic_hl_pane_g5

0x0004,

0xfbf4,	// (0x000569f2) list_single_graphic_hl_pane_g_ParamLimits

0xfbf4,	// (0x000569f2) list_single_graphic_hl_pane_g

0x8934,	// (0x0004f732) list_single_graphic_hl_pane_t1_ParamLimits

0x8934,	// (0x0004f732) list_single_graphic_hl_pane_t1

0xee51,	// (0x00055c4f) aid_size_min_hl_cp2

0xee5a,	// (0x00055c58) list_highlight_pane_cp34_cp2_ParamLimits

0xee5a,	// (0x00055c58) list_highlight_pane_cp34_cp2

0xee44,	// (0x00055c42) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xee44,	// (0x00055c42) list_single_graphic_hl_pane_g1_cp2

0xee67,	// (0x00055c65) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xee67,	// (0x00055c65) list_single_graphic_hl_pane_g2_cp2

0xa940,	// (0x0005173e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xa940,	// (0x0005173e) list_single_graphic_hl_pane_g3_cp2

0xc3b1,	// (0x000531af) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc3b1,	// (0x000531af) list_single_graphic_hl_pane_g4_cp2

0xee73,	// (0x00055c71) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xee73,	// (0x00055c71) list_single_graphic_hl_pane_g5_cp2

0x7eef,	// (0x0004eced) control_pane_g4_ParamLimits

0x7eef,	// (0x0004eced) control_pane_g4

0xbbe7,	// (0x000529e5) bg_popup_sub_pane_cp10_ParamLimits

0xe751,	// (0x0005554f) list_choice_list_pane_ParamLimits

0xe760,	// (0x0005555e) scroll_pane_cp23

0xb148,	// (0x00051f46) bg_popup_preview_window_pane_cp02_ParamLimits

0xec63,	// (0x00055a61) list_preview_fixed_pane_ParamLimits

0xec79,	// (0x00055a77) list_preview_fixed_pane_cp_ParamLimits

0xec79,	// (0x00055a77) list_preview_fixed_pane_cp

0xec85,	// (0x00055a83) popup_preview_fixed_window_g1_ParamLimits

0xec85,	// (0x00055a83) popup_preview_fixed_window_g1

0xec91,	// (0x00055a8f) popup_preview_fixed_window_g2_ParamLimits

0xec91,	// (0x00055a8f) popup_preview_fixed_window_g2

0x0002,

0xfb7c,	// (0x0005697a) popup_preview_fixed_window_g_ParamLimits

0xfb7c,	// (0x0005697a) popup_preview_fixed_window_g

0x0eff,	// (0x00047cfd) aid_navi_side_left_pane_ParamLimits

0x0f14,	// (0x00047d12) aid_navi_side_right_pane_ParamLimits

0x0f2c,	// (0x00047d2a) navi_icon_pane_stacon_ParamLimits

0x0f40,	// (0x00047d3e) navi_navi_pane_stacon_ParamLimits

0x0f2c,	// (0x00047d2a) navi_text_pane_stacon_ParamLimits

0x04e8,	// (0x000472e6) main_text_info_pane

0xee9d,	// (0x00055c9b) listscroll_text_info_pane

0xeea5,	// (0x00055ca3) list_text_info_pane_ParamLimits

0xeea5,	// (0x00055ca3) list_text_info_pane

0xeeb4,	// (0x00055cb2) scroll_pane_cp24_ParamLimits

0xeeb4,	// (0x00055cb2) scroll_pane_cp24

0xa94e,	// (0x0005174c) list_text_info_pane_t1_ParamLimits

0xa94e,	// (0x0005174c) list_text_info_pane_t1

0x802e,	// (0x0004ee2c) popup_fast_swap2_window_ParamLimits

0x802e,	// (0x0004ee2c) popup_fast_swap2_window

0xeed2,	// (0x00055cd0) aid_size_cell_fast2

0xafa5,	// (0x00051da3) bg_popup_window_pane_cp17

0xcc5d,	// (0x00053a5b) heading_pane_cp2

0xb79b,	// (0x00052599) listscroll_fast2_pane

0xeedc,	// (0x00055cda) grid_fast2_pane

0xeee6,	// (0x00055ce4) listscroll_fast2_pane_g1

0xeeee,	// (0x00055cec) listscroll_fast2_pane_g2

0x0001,

0xfbff,	// (0x000569fd) listscroll_fast2_pane_g

0xbbaf,	// (0x000529ad) scroll_pane_cp26

0xeef8,	// (0x00055cf6) cell_fast2_pane_ParamLimits

0xeef8,	// (0x00055cf6) cell_fast2_pane

0xef0d,	// (0x00055d0b) cell_fast2_pane_g1

0xef16,	// (0x00055d14) cell_fast2_pane_g2

0xef1f,	// (0x00055d1d) cell_fast2_pane_g3

0x0002,

0xfc04,	// (0x00056a02) cell_fast2_pane_g

0xb7dd,	// (0x000525db) grid_highlight_pane_cp9

0x13f2,	// (0x000481f0) main_eswt_pane_ParamLimits

0x13f2,	// (0x000481f0) main_eswt_pane

0xeec9,	// (0x00055cc7) list_single_text_info_pane

0xef27,	// (0x00055d25) eswt_ctrl_button_pane

0xef27,	// (0x00055d25) eswt_ctrl_canvas_pane

0xef2f,	// (0x00055d2d) eswt_ctrl_combo_pane

0xef27,	// (0x00055d25) eswt_ctrl_default_pane

0xef27,	// (0x00055d25) eswt_ctrl_label_pane

0xef37,	// (0x00055d35) eswt_ctrl_wait_pane

0xef3f,	// (0x00055d3d) eswt_shell_pane

0xafa5,	// (0x00051da3) listscroll_eswt_app_pane

0xef5f,	// (0x00055d5d) popup_eswt_tasktip_window_ParamLimits

0xef5f,	// (0x00055d5d) popup_eswt_tasktip_window

0xc98e,	// (0x0005378c) bg_popup_window_pane_cp18

0xef70,	// (0x00055d6e) eswt_control_pane_g1_ParamLimits

0xef70,	// (0x00055d6e) eswt_control_pane_g1

0xef7d,	// (0x00055d7b) eswt_control_pane_g2_ParamLimits

0xef7d,	// (0x00055d7b) eswt_control_pane_g2

0xef8a,	// (0x00055d88) eswt_control_pane_g3_ParamLimits

0xef8a,	// (0x00055d88) eswt_control_pane_g3

0xef97,	// (0x00055d95) eswt_control_pane_g4_ParamLimits

0xef97,	// (0x00055d95) eswt_control_pane_g4

0x0003,

0xfc0b,	// (0x00056a09) eswt_control_pane_g_ParamLimits

0xfc0b,	// (0x00056a09) eswt_control_pane_g

0xba83,	// (0x00052881) bg_button_pane_ParamLimits

0xba83,	// (0x00052881) bg_button_pane

0xb7f2,	// (0x000525f0) common_borders_pane_copy2_ParamLimits

0xb7f2,	// (0x000525f0) common_borders_pane_copy2

0xefa4,	// (0x00055da2) control_button_pane_g1_ParamLimits

0xefa4,	// (0x00055da2) control_button_pane_g1

0xefb0,	// (0x00055dae) control_button_pane_g2_ParamLimits

0xefb0,	// (0x00055dae) control_button_pane_g2

0xefbc,	// (0x00055dba) control_button_pane_g3_ParamLimits

0xefbc,	// (0x00055dba) control_button_pane_g3

0x0002,

0xfc14,	// (0x00056a12) control_button_pane_g_ParamLimits

0xfc14,	// (0x00056a12) control_button_pane_g

0xefd0,	// (0x00055dce) control_button_pane_t1

0xefde,	// (0x00055ddc) control_button_pane_t2

0x0001,

0xfc1b,	// (0x00056a19) control_button_pane_t

0xc89e,	// (0x0005369c) bg_button_pane_g1

0xc8ae,	// (0x000536ac) bg_button_pane_g2

0xc8a6,	// (0x000536a4) bg_button_pane_g3

0xc8be,	// (0x000536bc) bg_button_pane_g4

0xc8b6,	// (0x000536b4) bg_button_pane_g5

0xc8c6,	// (0x000536c4) bg_button_pane_g6

0xc8ce,	// (0x000536cc) bg_button_pane_g7

0xc8de,	// (0x000536dc) bg_button_pane_g8

0xc8d6,	// (0x000536d4) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0005666a) bg_button_pane_g

0xe70c,	// (0x0005550a) common_borders_pane_ParamLimits

0xe70c,	// (0x0005550a) common_borders_pane

0xef70,	// (0x00055d6e) eswt_control_pane_g1_copy1_ParamLimits

0xef70,	// (0x00055d6e) eswt_control_pane_g1_copy1

0xef7d,	// (0x00055d7b) eswt_control_pane_g2_copy1_ParamLimits

0xef7d,	// (0x00055d7b) eswt_control_pane_g2_copy1

0xef8a,	// (0x00055d88) eswt_control_pane_g3_copy1_ParamLimits

0xef8a,	// (0x00055d88) eswt_control_pane_g3_copy1

0xef97,	// (0x00055d95) eswt_control_pane_g4_copy1_ParamLimits

0xef97,	// (0x00055d95) eswt_control_pane_g4_copy1

0xe747,	// (0x00055545) bg_eswt_ctrl_canvas_pane_g1

0xe70c,	// (0x0005550a) common_borders_pane_cp2_ParamLimits

0xe70c,	// (0x0005550a) common_borders_pane_cp2

0xe70c,	// (0x0005550a) common_borders_pane_cp3_ParamLimits

0xe70c,	// (0x0005550a) common_borders_pane_cp3

0xefec,	// (0x00055dea) separator_horizontal_pane

0xeff4,	// (0x00055df2) separator_vertical_pane

0xef70,	// (0x00055d6e) eswt_control_pane_g1_copy2_ParamLimits

0xef70,	// (0x00055d6e) eswt_control_pane_g1_copy2

0xef7d,	// (0x00055d7b) eswt_control_pane_g2_copy2_ParamLimits

0xef7d,	// (0x00055d7b) eswt_control_pane_g2_copy2

0xef8a,	// (0x00055d88) eswt_control_pane_g3_copy2_ParamLimits

0xef8a,	// (0x00055d88) eswt_control_pane_g3_copy2

0xef97,	// (0x00055d95) eswt_control_pane_g4_copy2_ParamLimits

0xef97,	// (0x00055d95) eswt_control_pane_g4_copy2

0xafa5,	// (0x00051da3) common_borders_pane_cp4

0xeffd,	// (0x00055dfb) separator_horizontal_pane_g1

0xf006,	// (0x00055e04) separator_horizontal_pane_g2

0xf00f,	// (0x00055e0d) separator_horizontal_pane_g3

0x0002,

0xfc20,	// (0x00056a1e) separator_horizontal_pane_g

0xef70,	// (0x00055d6e) eswt_control_pane_g1_copy3_ParamLimits

0xef70,	// (0x00055d6e) eswt_control_pane_g1_copy3

0xef7d,	// (0x00055d7b) eswt_control_pane_g2_copy3_ParamLimits

0xef7d,	// (0x00055d7b) eswt_control_pane_g2_copy3

0xef8a,	// (0x00055d88) eswt_control_pane_g3_copy3_ParamLimits

0xef8a,	// (0x00055d88) eswt_control_pane_g3_copy3

0xef97,	// (0x00055d95) eswt_control_pane_g4_copy3_ParamLimits

0xef97,	// (0x00055d95) eswt_control_pane_g4_copy3

0xafa5,	// (0x00051da3) common_borders_pane_cp5

0xf018,	// (0x00055e16) separator_vertical_pane_g1

0xf021,	// (0x00055e1f) separator_vertical_pane_g2

0xf02a,	// (0x00055e28) separator_vertical_pane_g3

0x0002,

0xfc27,	// (0x00056a25) separator_vertical_pane_g

0xef70,	// (0x00055d6e) eswt_control_pane_g1_copy4_ParamLimits

0xef70,	// (0x00055d6e) eswt_control_pane_g1_copy4

0xef7d,	// (0x00055d7b) eswt_control_pane_g2_copy4_ParamLimits

0xef7d,	// (0x00055d7b) eswt_control_pane_g2_copy4

0xef8a,	// (0x00055d88) eswt_control_pane_g3_copy4_ParamLimits

0xef8a,	// (0x00055d88) eswt_control_pane_g3_copy4

0xef97,	// (0x00055d95) eswt_control_pane_g4_copy4_ParamLimits

0xef97,	// (0x00055d95) eswt_control_pane_g4_copy4

0xa96c,	// (0x0005176a) eswt_ctrl_combo_button_pane

0xa974,	// (0x00051772) eswt_ctrl_input_pane

0xa97c,	// (0x0005177a) popup_choice_list_window_cp70

0xa984,	// (0x00051782) eswt_ctrl_input_pane_t1

0xafa5,	// (0x00051da3) input_focus_pane_cp70

0xe70c,	// (0x0005550a) bg_button_pane_cp70_ParamLimits

0xe70c,	// (0x0005550a) bg_button_pane_cp70

0xa992,	// (0x00051790) eswt_ctrl_combo_button_pane_g1

0xf033,	// (0x00055e31) wait_bar_pane_cp70

0xc98e,	// (0x0005378c) bg_popup_window_pane_cp70_ParamLimits

0xc98e,	// (0x0005378c) bg_popup_window_pane_cp70

0xf03b,	// (0x00055e39) popup_eswt_tasktip_window_t1

0xf051,	// (0x00055e4f) wait_bar_pane_cp71_ParamLimits

0xf051,	// (0x00055e4f) wait_bar_pane_cp71

0xf05d,	// (0x00055e5b) grid_eswt_app_pane

0xbde7,	// (0x00052be5) scroll_pane_cp70

0xa99a,	// (0x00051798) cell_eswt_app_pane_ParamLimits

0xa99a,	// (0x00051798) cell_eswt_app_pane

0xa9c4,	// (0x000517c2) cell_eswt_app_pane_g1_ParamLimits

0xa9c4,	// (0x000517c2) cell_eswt_app_pane_g1

0xa9f3,	// (0x000517f1) cell_eswt_app_pane_g2_ParamLimits

0xa9f3,	// (0x000517f1) cell_eswt_app_pane_g2

0x0001,

0x001c,	// (0x00046e1a) cell_eswt_app_pane_g_ParamLimits

0x001c,	// (0x00046e1a) cell_eswt_app_pane_g

0xaa1c,	// (0x0005181a) cell_eswt_app_pane_t1_ParamLimits

0xaa1c,	// (0x0005181a) cell_eswt_app_pane_t1

0xf066,	// (0x00055e64) grid_highlight_pane_cp70_ParamLimits

0xf066,	// (0x00055e64) grid_highlight_pane_cp70

0xc365,	// (0x00053163) set_content_pane_g1

0xc655,	// (0x00053453) status_small_volume_pane

0x2208,	// (0x00049006) status_small_volume_pane_g1

0x2210,	// (0x0004900e) volume_small2_pane

0x2219,	// (0x00049017) volume_small2_pane_g1

0x2222,	// (0x00049020) volume_small2_pane_g2

0x222b,	// (0x00049029) volume_small2_pane_g3

0x2234,	// (0x00049032) volume_small2_pane_g4

0x223d,	// (0x0004903b) volume_small2_pane_g5

0x2246,	// (0x00049044) volume_small2_pane_g6

0x224f,	// (0x0004904d) volume_small2_pane_g7

0x2258,	// (0x00049056) volume_small2_pane_g8

0x2261,	// (0x0004905f) volume_small2_pane_g9

0x226a,	// (0x00049068) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x00056a2c) volume_small2_pane_g

0xeabd,	// (0x000558bb) fep_vkb_top_text_pane_g1_ParamLimits

0xa8e8,	// (0x000516e6) fep_vkb_top_text_pane_t1_ParamLimits

0xec9d,	// (0x00055a9b) popup_preview_fixed_window_g3_ParamLimits

0xec9d,	// (0x00055a9b) popup_preview_fixed_window_g3

0x8631,	// (0x0004f42f) popup_toolbar_trans_pane

0xa412,	// (0x00051210) aid_height_set_list_ParamLimits

0xd0a0,	// (0x00053e9e) aid_size_parent_ParamLimits

0xbbe7,	// (0x000529e5) list_highlight_pane_cp2_ParamLimits

0xc365,	// (0x00053163) set_content_pane_g1_ParamLimits

0x88c9,	// (0x0004f6c7) list_single_image_pane_ParamLimits

0x88c9,	// (0x0004f6c7) list_single_image_pane

0xaa4e,	// (0x0005184c) aid_size_cell_image_ParamLimits

0xaa4e,	// (0x0005184c) aid_size_cell_image

0xaa5b,	// (0x00051859) grid_single_image_pane_ParamLimits

0xaa5b,	// (0x00051859) grid_single_image_pane

0xba1e,	// (0x0005281c) list_single_image_pane_g1_ParamLimits

0xba1e,	// (0x0005281c) list_single_image_pane_g1

0xba9d,	// (0x0005289b) list_single_image_pane_g2_ParamLimits

0xba9d,	// (0x0005289b) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x00056a41) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x00056a41) list_single_image_pane_g

0xf072,	// (0x00055e70) list_single_image_pane_t1_ParamLimits

0xf072,	// (0x00055e70) list_single_image_pane_t1

0xaa67,	// (0x00051865) cell_image_list_pane_ParamLimits

0xaa67,	// (0x00051865) cell_image_list_pane

0xaa7b,	// (0x00051879) cell_image_list_pane_g1

0xaa84,	// (0x00051882) cell_image_list_pane_g2

0x0001,

0x003b,	// (0x00046e39) cell_image_list_pane_g

0xf088,	// (0x00055e86) aid_size_cell_tb_trans_pane

0xba83,	// (0x00052881) bg_tb_trans_pane

0xf09a,	// (0x00055e98) grid_tb_trans_pane

0xc89e,	// (0x0005369c) bg_tb_trans_pane_g1

0xc8ae,	// (0x000536ac) bg_tb_trans_pane_g2

0xc8a6,	// (0x000536a4) bg_tb_trans_pane_g3

0xc8be,	// (0x000536bc) bg_tb_trans_pane_g4

0xc8b6,	// (0x000536b4) bg_tb_trans_pane_g5

0xc8de,	// (0x000536dc) bg_tb_trans_pane_g6

0xc8d6,	// (0x000536d4) bg_tb_trans_pane_g7

0xc8c6,	// (0x000536c4) bg_tb_trans_pane_g8

0xc8ce,	// (0x000536cc) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x00056a46) bg_tb_trans_pane_g

0xf0ae,	// (0x00055eac) cell_toolbar_trans_pane_ParamLimits

0xf0ae,	// (0x00055eac) cell_toolbar_trans_pane

0xe747,	// (0x00055545) cell_toolbar_trans_pane_g1

0xa78d,	// (0x0005158b) list_form2_midp_pane_t1

0xa79b,	// (0x00051599) list_form2_midp_pane_t2

0x0001,

0xfaef,	// (0x000568ed) list_form2_midp_pane_t

0xe4a5,	// (0x000552a3) scroll_pane_cp51_ParamLimits

0xe61b,	// (0x00055419) form2_midp_wait_pane_g1

0xe624,	// (0x00055422) form2_midp_wait_pane_g2

0xe62d,	// (0x0005542b) form2_midp_wait_pane_g3

0x0002,

0xfb04,	// (0x00056902) form2_midp_wait_pane_g

0xb015,	// (0x00051e13) list_highlight_pane_cp21_ParamLimits

0xe64d,	// (0x0005544b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe65c,	// (0x0005545a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xda80,	// (0x0005487e) list_single_2graphic_im_pane_ParamLimits

0xda80,	// (0x0005487e) list_single_2graphic_im_pane

0xaa8d,	// (0x0005188b) list_single_2graphic_im_pane_g1_ParamLimits

0xaa8d,	// (0x0005188b) list_single_2graphic_im_pane_g1

0xaa9e,	// (0x0005189c) list_single_2graphic_im_pane_g2_ParamLimits

0xaa9e,	// (0x0005189c) list_single_2graphic_im_pane_g2

0xaaaa,	// (0x000518a8) list_single_2graphic_im_pane_g3_ParamLimits

0xaaaa,	// (0x000518a8) list_single_2graphic_im_pane_g3

0x0003,

0x0053,	// (0x00046e51) list_single_2graphic_im_pane_g_ParamLimits

0x0053,	// (0x00046e51) list_single_2graphic_im_pane_g

0xaabe,	// (0x000518bc) list_single_2graphic_im_pane_t1_ParamLimits

0xaabe,	// (0x000518bc) list_single_2graphic_im_pane_t1

0xeca9,	// (0x00055aa7) list_single_graphic_2heading_pane_fp_ParamLimits

0xeca9,	// (0x00055aa7) list_single_graphic_2heading_pane_fp

0x3d89,	// (0x0004ab87) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3d89,	// (0x0004ab87) list_single_graphic_2heading_pane_fp_g1

0xecc0,	// (0x00055abe) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xecc0,	// (0x00055abe) list_single_graphic_2heading_pane_fp_g2

0x2f00,	// (0x00049cfe) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2f00,	// (0x00049cfe) list_single_graphic_2heading_pane_fp_g3

0x3d5e,	// (0x0004ab5c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3d5e,	// (0x0004ab5c) list_single_graphic_2heading_pane_fp_g4

0xeccc,	// (0x00055aca) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xeccc,	// (0x00055aca) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0005698a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0005698a) list_single_graphic_2heading_pane_fp_g

0x3f56,	// (0x0004ad54) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3f56,	// (0x0004ad54) list_single_graphic_2heading_pane_fp_t1

0x3dc1,	// (0x0004abbf) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3dc1,	// (0x0004abbf) list_single_graphic_2heading_pane_fp_t2

0x3f6c,	// (0x0004ad6a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3f6c,	// (0x0004ad6a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5b,	// (0x00056a59) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5b,	// (0x00056a59) list_single_graphic_2heading_pane_fp_t

0xe7c9,	// (0x000555c7) fep_hwr_write_pane_g5_ParamLimits

0xe7c9,	// (0x000555c7) fep_hwr_write_pane_g5

0xe7d5,	// (0x000555d3) fep_hwr_write_pane_g6_ParamLimits

0xe7d5,	// (0x000555d3) fep_hwr_write_pane_g6

0xef3f,	// (0x00055d3d) eswt_shell_pane_ParamLimits

0xc98e,	// (0x0005378c) bg_popup_window_pane_cp18_ParamLimits

0xd9b1,	// (0x000547af) heading_pane_cp70

0xf03b,	// (0x00055e39) popup_eswt_tasktip_window_t1_ParamLimits

0x9d88,	// (0x00050b86) aid_touch_tab_arrow_left

0x9d9e,	// (0x00050b9c) aid_touch_tab_arrow_right

0x95a2,	// (0x000503a0) title_pane_g3_ParamLimits

0x95a2,	// (0x000503a0) title_pane_g3

0xba42,	// (0x00052840) set_value_pane_g1

0x8631,	// (0x0004f42f) popup_toolbar_trans_pane_ParamLimits

0xf088,	// (0x00055e86) aid_size_cell_tb_trans_pane_ParamLimits

0xba83,	// (0x00052881) bg_tb_trans_pane_ParamLimits

0xf09a,	// (0x00055e98) grid_tb_trans_pane_ParamLimits

0xb148,	// (0x00051f46) cont_note_pane_ParamLimits

0xb148,	// (0x00051f46) cont_note_pane

0xb7f2,	// (0x000525f0) cont_snote2_single_text_pane_ParamLimits

0xb7f2,	// (0x000525f0) cont_snote2_single_text_pane

0xb7f2,	// (0x000525f0) cont_snote2_single_graphic_pane_ParamLimits

0xb7f2,	// (0x000525f0) cont_snote2_single_graphic_pane

0xce73,	// (0x00053c71) cont_note_wait_pane_ParamLimits

0xce73,	// (0x00053c71) cont_note_wait_pane

0xce73,	// (0x00053c71) cont_note_image_pane_ParamLimits

0xce73,	// (0x00053c71) cont_note_image_pane

0xf0e0,	// (0x00055ede) popup_note2_window_g1_ParamLimits

0xf0e0,	// (0x00055ede) popup_note2_window_g1

0xf111,	// (0x00055f0f) popup_note2_window_t1_ParamLimits

0xf111,	// (0x00055f0f) popup_note2_window_t1

0xf156,	// (0x00055f54) popup_note2_window_t2_ParamLimits

0xf156,	// (0x00055f54) popup_note2_window_t2

0xf19b,	// (0x00055f99) popup_note2_window_t3_ParamLimits

0xf19b,	// (0x00055f99) popup_note2_window_t3

0xf1e0,	// (0x00055fde) popup_note2_window_t4_ParamLimits

0xf1e0,	// (0x00055fde) popup_note2_window_t4

0xb62d,	// (0x0005242b) popup_note2_window_t5_ParamLimits

0xb62d,	// (0x0005242b) popup_note2_window_t5

0x0004,

0x0063,	// (0x00046e61) popup_note2_window_t_ParamLimits

0x0063,	// (0x00046e61) popup_note2_window_t

0xf20f,	// (0x0005600d) popup_note2_image_window_g1_ParamLimits

0xf20f,	// (0x0005600d) popup_note2_image_window_g1

0xf21b,	// (0x00056019) popup_note2_image_window_g2_ParamLimits

0xf21b,	// (0x00056019) popup_note2_image_window_g2

0x0001,

0xfc67,	// (0x00056a65) popup_note2_image_window_g_ParamLimits

0xfc67,	// (0x00056a65) popup_note2_image_window_g

0xf22d,	// (0x0005602b) popup_note2_image_window_t1_ParamLimits

0xf22d,	// (0x0005602b) popup_note2_image_window_t1

0xf245,	// (0x00056043) popup_note2_image_window_t2_ParamLimits

0xf245,	// (0x00056043) popup_note2_image_window_t2

0xf25d,	// (0x0005605b) popup_note2_image_window_t3_ParamLimits

0xf25d,	// (0x0005605b) popup_note2_image_window_t3

0x0002,

0xfc6c,	// (0x00056a6a) popup_note2_image_window_t_ParamLimits

0xfc6c,	// (0x00056a6a) popup_note2_image_window_t

0xce81,	// (0x00053c7f) popup_note2_wait_window_g1_ParamLimits

0xce81,	// (0x00053c7f) popup_note2_wait_window_g1

0xce8d,	// (0x00053c8b) popup_note2_wait_window_g2_ParamLimits

0xce8d,	// (0x00053c8b) popup_note2_wait_window_g2

0xce99,	// (0x00053c97) popup_note2_wait_window_g3_ParamLimits

0xce99,	// (0x00053c97) popup_note2_wait_window_g3

0x0002,

0xf84e,	// (0x0005664c) popup_note2_wait_window_g_ParamLimits

0xf84e,	// (0x0005664c) popup_note2_wait_window_g

0xf279,	// (0x00056077) popup_note2_wait_window_t1_ParamLimits

0xf279,	// (0x00056077) popup_note2_wait_window_t1

0xf297,	// (0x00056095) popup_note2_wait_window_t2_ParamLimits

0xf297,	// (0x00056095) popup_note2_wait_window_t2

0xf2b5,	// (0x000560b3) popup_note2_wait_window_t3_ParamLimits

0xf2b5,	// (0x000560b3) popup_note2_wait_window_t3

0xf2c7,	// (0x000560c5) popup_note2_wait_window_t4_ParamLimits

0xf2c7,	// (0x000560c5) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x00056a71) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x00056a71) popup_note2_wait_window_t

0xf2d9,	// (0x000560d7) wait_bar2_pane_ParamLimits

0xf2d9,	// (0x000560d7) wait_bar2_pane

0xf2f1,	// (0x000560ef) popup_snote2_single_text_window_g1_ParamLimits

0xf2f1,	// (0x000560ef) popup_snote2_single_text_window_g1

0xf319,	// (0x00056117) popup_snote2_single_text_window_t1_ParamLimits

0xf319,	// (0x00056117) popup_snote2_single_text_window_t1

0xf365,	// (0x00056163) popup_snote2_single_text_window_t2_ParamLimits

0xf365,	// (0x00056163) popup_snote2_single_text_window_t2

0xf3b1,	// (0x000561af) popup_snote2_single_text_window_t3_ParamLimits

0xf3b1,	// (0x000561af) popup_snote2_single_text_window_t3

0xf3f2,	// (0x000561f0) popup_snote2_single_text_window_t4_ParamLimits

0xf3f2,	// (0x000561f0) popup_snote2_single_text_window_t4

0xf428,	// (0x00056226) popup_snote2_single_text_window_t5_ParamLimits

0xf428,	// (0x00056226) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x00056a7a) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x00056a7a) popup_snote2_single_text_window_t

0xf453,	// (0x00056251) popup_snote2_single_graphic_window_g1_ParamLimits

0xf453,	// (0x00056251) popup_snote2_single_graphic_window_g1

0xf47b,	// (0x00056279) popup_snote2_single_graphic_window_g2_ParamLimits

0xf47b,	// (0x00056279) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x00056a85) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x00056a85) popup_snote2_single_graphic_window_g

0xf4a3,	// (0x000562a1) popup_snote2_single_graphic_window_t1_ParamLimits

0xf4a3,	// (0x000562a1) popup_snote2_single_graphic_window_t1

0xf4ef,	// (0x000562ed) popup_snote2_single_graphic_window_t2_ParamLimits

0xf4ef,	// (0x000562ed) popup_snote2_single_graphic_window_t2

0xf3b1,	// (0x000561af) popup_snote2_single_graphic_window_t3_ParamLimits

0xf3b1,	// (0x000561af) popup_snote2_single_graphic_window_t3

0xf3f2,	// (0x000561f0) popup_snote2_single_graphic_window_t4_ParamLimits

0xf3f2,	// (0x000561f0) popup_snote2_single_graphic_window_t4

0xf428,	// (0x00056226) popup_snote2_single_graphic_window_t5_ParamLimits

0xf428,	// (0x00056226) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x00056a8a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x00056a8a) popup_snote2_single_graphic_window_t

0xe3f5,	// (0x000551f3) clock_nsta_pane_cp2_t1

0xe3f5,	// (0x000551f3) clock_nsta_pane_cp2_t2

0x0001,

0xfac5,	// (0x000568c3) clock_nsta_pane_cp2_t

0x0d08,	// (0x00047b06) form_field_data_wide_pane_g1_ParamLimits

0xba1e,	// (0x0005281c) form_field_data_wide_pane_g2_ParamLimits

0xba1e,	// (0x0005281c) form_field_data_wide_pane_g2

0xba9d,	// (0x0005289b) form_field_data_wide_pane_g3_ParamLimits

0xba9d,	// (0x0005289b) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x00056484) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x00056484) form_field_data_wide_pane_g

0xa6c1,	// (0x000514bf) grid_touch_3_pane_ParamLimits

0xa6c1,	// (0x000514bf) grid_touch_3_pane

0xaaef,	// (0x000518ed) cell_touch_3_pane_ParamLimits

0xaaef,	// (0x000518ed) cell_touch_3_pane

0xe747,	// (0x00055545) cell_touch_3_pane_g1

0xe747,	// (0x00055545) cell_touch_3_pane_g2

0x0001,

0xfb4a,	// (0x00056948) cell_touch_3_pane_g

0xb65f,	// (0x0005245d) cont_query_data_pane

0xb667,	// (0x00052465) cont_query_data_pane_cp1

0xf53b,	// (0x00056339) button_value_adjust_pane_cp7

0xf543,	// (0x00056341) query_popup_pane_cp3

0xc03b,	// (0x00052e39) bg_popup_sub_pane_cp22_ParamLimits

0x1041,	// (0x00047e3f) navi_navi_volume_pane_cp2

0x105c,	// (0x00047e5a) popup_side_volume_key_window_g2

0x106b,	// (0x00047e69) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0005651a) popup_side_volume_key_window_g

0x1088,	// (0x00047e86) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x00056521) popup_side_volume_key_window_t

0xc26c,	// (0x0005306a) popup_side_volume_key_window_ParamLimits

0x8e78,	// (0x0004fc76) list_double_graphic_pane_g4_ParamLimits

0x8e78,	// (0x0004fc76) list_double_graphic_pane_g4

0x88b5,	// (0x0004f6b3) list_single_2heading_msg_pane_ParamLimits

0x88b5,	// (0x0004f6b3) list_single_2heading_msg_pane

0x894a,	// (0x0004f748) list_single_2heading_msg_pane_g1_ParamLimits

0x894a,	// (0x0004f748) list_single_2heading_msg_pane_g1

0x8956,	// (0x0004f754) list_single_2heading_msg_pane_g2_ParamLimits

0x8956,	// (0x0004f754) list_single_2heading_msg_pane_g2

0x8969,	// (0x0004f767) list_single_2heading_msg_pane_g3_ParamLimits

0x8969,	// (0x0004f767) list_single_2heading_msg_pane_g3

0x8975,	// (0x0004f773) list_single_2heading_msg_pane_g4_ParamLimits

0x8975,	// (0x0004f773) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x00056a95) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x00056a95) list_single_2heading_msg_pane_g

0x898d,	// (0x0004f78b) list_single_2heading_msg_pane_t1_ParamLimits

0x898d,	// (0x0004f78b) list_single_2heading_msg_pane_t1

0x8eec,	// (0x0004fcea) list_single_2heading_msg_pane_t2_ParamLimits

0x8eec,	// (0x0004fcea) list_single_2heading_msg_pane_t2

0x8f57,	// (0x0004fd55) list_single_2heading_msg_pane_t3_ParamLimits

0x8f57,	// (0x0004fd55) list_single_2heading_msg_pane_t3

0x4021,	// (0x0004ae1f) list_single_2heading_msg_pane_t4_ParamLimits

0x4021,	// (0x0004ae1f) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x00056a9e) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x00056a9e) list_single_2heading_msg_pane_t

0xafc3,	// (0x00051dc1) title_pane_g4_ParamLimits

0xafc3,	// (0x00051dc1) title_pane_g4

0x0e4f,	// (0x00047c4d) title_pane_stacon_g3_ParamLimits

0x0e4f,	// (0x00047c4d) title_pane_stacon_g3

0xf0d4,	// (0x00055ed2) list_single_2graphic_im_pane_g4_ParamLimits

0xf0d4,	// (0x00055ed2) list_single_2graphic_im_pane_g4

0xd7e3,	// (0x000545e1) popup_side_volume_key_window_cp

0xdcb0,	// (0x00054aae) main_idle_act2_pane_t1

0x19b7,	// (0x000487b5) toolbar_button_pane_g10

0x9911,	// (0x0005070f) popup_toolbar_window_cp1

0xe3e6,	// (0x000551e4) clock_nsta_pane_cp_t1

0xe3e6,	// (0x000551e4) clock_nsta_pane_cp_t2

0x0001,

0xfac0,	// (0x000568be) clock_nsta_pane_cp_t

0x1041,	// (0x00047e3f) navi_navi_volume_pane_cp2_ParamLimits

0x1050,	// (0x00047e4e) popup_side_volume_key_window_g1_ParamLimits

0x105c,	// (0x00047e5a) popup_side_volume_key_window_g2_ParamLimits

0x106b,	// (0x00047e69) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0005651a) popup_side_volume_key_window_g_ParamLimits

0x1e74,	// (0x00048c72) fep_hwr_aid_pane

0x1f1b,	// (0x00048d19) bg_fep_hwr_top_pane_g4_ParamLimits

0xe799,	// (0x00055597) fep_hwr_top_pane_g1_ParamLimits

0xe7ab,	// (0x000555a9) fep_hwr_top_pane_g2_ParamLimits

0x1f3b,	// (0x00048d39) fep_hwr_top_pane_g3_ParamLimits

0xfb15,	// (0x00056913) fep_hwr_top_pane_g_ParamLimits

0x1f50,	// (0x00048d4e) fep_hwr_top_text_pane_ParamLimits

0xd5b8,	// (0x000543b6) aid_touch_tab_arrow_arrow_2

0xd5c1,	// (0x000543bf) aid_touch_tab_arrow_left_2

0x1e88,	// (0x00048c86) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1ebf,	// (0x00048cbd) fep_hwr_prediction_pane

0xe900,	// (0x000556fe) fep_vkb_prediction_pane

0xa8c8,	// (0x000516c6) fep_vkb_side_pane_g3_ParamLimits

0xa8c8,	// (0x000516c6) fep_vkb_side_pane_g3

0x20cb,	// (0x00048ec9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x2137,	// (0x00048f35) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x2144,	// (0x00048f42) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc4,	// (0x000569c2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x2273,	// (0x00049071) fep_hwr_prediction_pane_g1

0x227d,	// (0x0004907b) fep_hwr_prediction_pane_g2

0x2285,	// (0x00049083) fep_hwr_prediction_pane_g3

0x228d,	// (0x0004908b) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x00056aa7) fep_hwr_prediction_pane_g

0x4a0f,	// (0x0004b80d) fep_vkb_prediction_pane_g1

0x4a19,	// (0x0004b817) fep_vkb_prediction_pane_g2

0x4a21,	// (0x0004b81f) fep_vkb_prediction_pane_g3

0x4a29,	// (0x0004b827) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x00056ab0) fep_vkb_prediction_pane_g

0x1ca3,	// (0x00048aa1) slider_set_pane_g3

0x1cb7,	// (0x00048ab5) slider_set_pane_g4

0x1ccf,	// (0x00048acd) slider_set_pane_g5

0x1ca3,	// (0x00048aa1) slider_set_pane_g6

0x1ce5,	// (0x00048ae3) slider_set_pane_g7

0xda36,	// (0x00054834) slider_form_pane_g3

0xda3f,	// (0x0005483d) slider_form_pane_g4

0xda47,	// (0x00054845) slider_form_pane_g5

0xda36,	// (0x00054834) slider_form_pane_g6

0xa559,	// (0x00051357) slider_form_pane_g7

0xdf26,	// (0x00054d24) slider_set_pane_vc_g3

0xdf2f,	// (0x00054d2d) slider_set_pane_vc_g4

0xdf38,	// (0x00054d36) slider_set_pane_vc_g5

0xdf26,	// (0x00054d24) slider_set_pane_vc_g6

0xdf41,	// (0x00054d3f) slider_set_pane_vc_g7

0xe115,	// (0x00054f13) slider_form_pane_vc_g1

0xe11e,	// (0x00054f1c) slider_form_pane_vc_g2

0xe127,	// (0x00054f25) slider_form_pane_vc_g3

0xe115,	// (0x00054f13) slider_form_pane_vc_g4

0xe130,	// (0x00054f2e) slider_form_pane_vc_g5

0x0004,

0xfa92,	// (0x00056890) slider_form_pane_vc_g

0x04e8,	// (0x000472e6) main_idle_act3_pane

0x4a31,	// (0x0004b82f) ai3_links_pane

0xab39,	// (0x00051937) popup_ai3_data_window_ParamLimits

0xab39,	// (0x00051937) popup_ai3_data_window

0xafa5,	// (0x00051da3) grid_ai3_links_pane

0xab51,	// (0x0005194f) cell_ai3_links_pane_ParamLimits

0xab51,	// (0x0005194f) cell_ai3_links_pane

0x4a3a,	// (0x0004b838) bg_popup_sub_pane_cp11

0x4a47,	// (0x0004b845) cell_ai3_links_pane_g1

0xafa5,	// (0x00051da3) bg_popup_sub_pane_cp12

0x4a6c,	// (0x0004b86a) heading_ai3_data_pane

0x4a74,	// (0x0004b872) list_ai3_gene_pane

0x4a80,	// (0x0004b87e) popup_ai3_data_window_g1

0x4a88,	// (0x0004b886) heading_ai3_data_pane_g1

0x4a90,	// (0x0004b88e) heading_ai3_data_pane_t1

0x4a9e,	// (0x0004b89c) list_double_ai3_gene_pane_ParamLimits

0x4a9e,	// (0x0004b89c) list_double_ai3_gene_pane

0x4aab,	// (0x0004b8a9) list_single_ai3_gene_pane_ParamLimits

0x4aab,	// (0x0004b8a9) list_single_ai3_gene_pane

0xe70c,	// (0x0005550a) list_highlight_pane_cp7_ParamLimits

0xe70c,	// (0x0005550a) list_highlight_pane_cp7

0x4ab8,	// (0x0004b8b6) list_single_a13_gene_pane_t1_ParamLimits

0x4ab8,	// (0x0004b8b6) list_single_a13_gene_pane_t1

0x4acf,	// (0x0004b8cd) list_single_ai3_gene_pane_g1

0x4ad8,	// (0x0004b8d6) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x00056ab9) list_single_ai3_gene_pane_g

0x4ae0,	// (0x0004b8de) list_double_ai3_gene_pane_g1_ParamLimits

0x4ae0,	// (0x0004b8de) list_double_ai3_gene_pane_g1

0x4aec,	// (0x0004b8ea) list_double_ai3_gene_pane_t1_ParamLimits

0x4aec,	// (0x0004b8ea) list_double_ai3_gene_pane_t1

0x4b08,	// (0x0004b906) list_double_ai3_gene_pane_t2_ParamLimits

0x4b08,	// (0x0004b906) list_double_ai3_gene_pane_t2

0x4b1d,	// (0x0004b91b) list_double_ai3_gene_pane_t3_ParamLimits

0x4b1d,	// (0x0004b91b) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x00056abe) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x00056abe) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3f82,	// (0x0004ad80) aid_size_min_col_2

0xab23,	// (0x00051921) aid_size_min_msg_ParamLimits

0xab23,	// (0x00051921) aid_size_min_msg

0xa8dc,	// (0x000516da) fep_vkb_top_text_pane_g2_ParamLimits

0xa8dc,	// (0x000516da) fep_vkb_top_text_pane_g2

0x0001,

0xfb45,	// (0x00056943) fep_vkb_top_text_pane_g_ParamLimits

0xfb45,	// (0x00056943) fep_vkb_top_text_pane_g

0x04e8,	// (0x000472e6) main_hc_apps_shell_pane

0x4b3a,	// (0x0004b938) grid_hc_apps_pane_ParamLimits

0x4b3a,	// (0x0004b938) grid_hc_apps_pane

0x4b49,	// (0x0004b947) list_hc_apps_pane

0x4b51,	// (0x0004b94f) scroll_pane_cp37_ParamLimits

0x4b51,	// (0x0004b94f) scroll_pane_cp37

0xab6b,	// (0x00051969) cell_hc_apps_pane_ParamLimits

0xab6b,	// (0x00051969) cell_hc_apps_pane

0xac2b,	// (0x00051a29) cell_hc_apps_pane_g1_ParamLimits

0xac2b,	// (0x00051a29) cell_hc_apps_pane_g1

0x4b5d,	// (0x0004b95b) cell_hc_apps_pane_g2_ParamLimits

0x4b5d,	// (0x0004b95b) cell_hc_apps_pane_g2

0x4b79,	// (0x0004b977) cell_hc_apps_pane_g3_ParamLimits

0x4b79,	// (0x0004b977) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x00056ac5) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x00056ac5) cell_hc_apps_pane_g

0xac58,	// (0x00051a56) cell_hc_apps_pane_t1_ParamLimits

0xac58,	// (0x00051a56) cell_hc_apps_pane_t1

0xb148,	// (0x00051f46) grid_highlight_pane_cp10_ParamLimits

0xb148,	// (0x00051f46) grid_highlight_pane_cp10

0xac96,	// (0x00051a94) list_single_hc_apps_pane_ParamLimits

0xac96,	// (0x00051a94) list_single_hc_apps_pane

0xacc9,	// (0x00051ac7) list_single_hc_apps_pane_g1

0x8fc5,	// (0x0004fdc3) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x00056acc) list_single_hc_apps_pane_g

0x8fde,	// (0x0004fddc) list_single_hc_apps_pane_g2_copy1

0x8ffa,	// (0x0004fdf8) list_single_hc_apps_pane_t1

0xb015,	// (0x00051e13) bg_set_opt_pane_cp_ParamLimits

0x072b,	// (0x00047529) setting_slider_pane_t1_ParamLimits

0x0744,	// (0x00047542) setting_slider_pane_t2_ParamLimits

0x075d,	// (0x0004755b) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00056362) setting_slider_pane_t_ParamLimits

0x0774,	// (0x00047572) slider_set_pane_ParamLimits

0x12e6,	// (0x000480e4) control_pane_g5_ParamLimits

0x12e6,	// (0x000480e4) control_pane_g5

0xd9f8,	// (0x000547f6) slider_set_pane_g1_ParamLimits

0x1c97,	// (0x00048a95) slider_set_pane_g2_ParamLimits

0x1ca3,	// (0x00048aa1) slider_set_pane_g3_ParamLimits

0x1cb7,	// (0x00048ab5) slider_set_pane_g4_ParamLimits

0x1ccf,	// (0x00048acd) slider_set_pane_g5_ParamLimits

0x1ca3,	// (0x00048aa1) slider_set_pane_g6_ParamLimits

0x1ce5,	// (0x00048ae3) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x00056768) slider_set_pane_g_ParamLimits

0xc310,	// (0x0005310e) navi_icon_text_pane_ParamLimits

0x9d51,	// (0x00050b4f) aid_fill_nsta_2_ParamLimits

0x9d88,	// (0x00050b86) aid_touch_tab_arrow_left_ParamLimits

0x9d9e,	// (0x00050b9c) aid_touch_tab_arrow_right_ParamLimits

0x9e39,	// (0x00050c37) clock_nsta_pane_ParamLimits

0xd59a,	// (0x00054398) navi_icon_pane_g1_ParamLimits

0xd5a6,	// (0x000543a4) navi_text_pane_t1_ParamLimits

0xe47f,	// (0x0005527d) navi_icon_text_pane_g1_ParamLimits

0xe48b,	// (0x00055289) navi_icon_text_pane_t1_ParamLimits

0xacc9,	// (0x00051ac7) list_single_hc_apps_pane_g1_ParamLimits

0x8fc5,	// (0x0004fdc3) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x00056acc) list_single_hc_apps_pane_g_ParamLimits

0x8fde,	// (0x0004fddc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8ffa,	// (0x0004fdf8) list_single_hc_apps_pane_t1_ParamLimits

0x789d,	// (0x0004e69b) popup_toolbar2_fixed_window_ParamLimits

0x789d,	// (0x0004e69b) popup_toolbar2_fixed_window

0x8627,	// (0x0004f425) popup_toolbar2_float_window

0xafa5,	// (0x00051da3) bg_popup_sub_pane_cp27

0x4bd0,	// (0x0004b9ce) grid_toolbar2_float_pane

0xafa5,	// (0x00051da3) bg_popup_sub_pane_cp26

0x4bd0,	// (0x0004b9ce) grid_toolbar2_fixed_pane

0xace2,	// (0x00051ae0) cell_toolbar2_fixed_pane_ParamLimits

0xace2,	// (0x00051ae0) cell_toolbar2_fixed_pane

0xacfc,	// (0x00051afa) cell_toolbar2_fixed_pane_g1

0x4bd8,	// (0x0004b9d6) toolbar2_fixed_button_pane

0xc89e,	// (0x0005369c) toolbar2_fixed_button_pane_g1

0xc8ae,	// (0x000536ac) toolbar2_fixed_button_pane_g2

0xc8a6,	// (0x000536a4) toolbar2_fixed_button_pane_g3

0xc8be,	// (0x000536bc) toolbar2_fixed_button_pane_g4

0xc8b6,	// (0x000536b4) toolbar2_fixed_button_pane_g5

0xc8c6,	// (0x000536c4) toolbar2_fixed_button_pane_g6

0xc8ce,	// (0x000536cc) toolbar2_fixed_button_pane_g7

0xc8de,	// (0x000536dc) toolbar2_fixed_button_pane_g8

0xc8d6,	// (0x000536d4) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0005666a) toolbar2_fixed_button_pane_g

0x4be0,	// (0x0004b9de) cell_toolbar2_float_pane_ParamLimits

0x4be0,	// (0x0004b9de) cell_toolbar2_float_pane

0x4bf1,	// (0x0004b9ef) cell_toolbar2_float_pane_g1

0x4bd8,	// (0x0004b9d6) toolbar2_fixed_button_pane_cp

0xa88f,	// (0x0005168d) fep_vkb_accented_list_pane_ParamLimits

0xa88f,	// (0x0005168d) fep_vkb_accented_list_pane

0x20ab,	// (0x00048ea9) bg_popup_fep_shadow_pane_g9

0xc46c,	// (0x0005326a) bg_popup_fep_shadow_pane_cp3

0xbb96,	// (0x00052994) list_accented_list_pane

0x4bfa,	// (0x0004b9f8) list_single_accented_list_pane_ParamLimits

0x4bfa,	// (0x0004b9f8) list_single_accented_list_pane

0xc46c,	// (0x0005326a) list_highlight_pane_cp10

0x4c0b,	// (0x0004ba09) list_single_accented_list_pane_t1

0x8551,	// (0x0004f34f) popup_slider_window_ParamLimits

0x8551,	// (0x0004f34f) popup_slider_window

0xf54b,	// (0x00056349) aid_indentation_list_msg

0xadf5,	// (0x00051bf3) bg_popup_window_pane_cp19

0x4c77,	// (0x0004ba75) popup_slider_window_g1

0x4c93,	// (0x0004ba91) popup_slider_window_g2

0x4caf,	// (0x0004baad) popup_slider_window_g3

0x0005,

0xfcd3,	// (0x00056ad1) popup_slider_window_g

0x4ccb,	// (0x0004bac9) popup_slider_window_t1

0x4d11,	// (0x0004bb0f) small_volume_slider_vertical_pane

0xe747,	// (0x00055545) small_volume_slider_vertical_pane_g1

0xe747,	// (0x00055545) small_volume_slider_vertical_pane_g2

0x4d2d,	// (0x0004bb2b) small_volume_slider_vertical_pane_g3

0x0002,

0xfce5,	// (0x00056ae3) small_volume_slider_vertical_pane_g

0x780b,	// (0x0004e609) area_side_right_pane_ParamLimits

0x780b,	// (0x0004e609) area_side_right_pane

0x89b5,	// (0x0004f7b3) aid_size_side_button_ParamLimits

0x89b5,	// (0x0004f7b3) aid_size_side_button

0x89ce,	// (0x0004f7cc) grid_sctrl_middle_pane_ParamLimits

0x89ce,	// (0x0004f7cc) grid_sctrl_middle_pane

0x22c9,	// (0x000490c7) sctrl_sk_bottom_pane

0x22da,	// (0x000490d8) sctrl_sk_top_pane

0x22ec,	// (0x000490ea) aid_touch_sctrl_top

0x22f9,	// (0x000490f7) bg_sctrl_sk_pane_ParamLimits

0x22f9,	// (0x000490f7) bg_sctrl_sk_pane

0x2307,	// (0x00049105) sctrl_sk_top_pane_g1

0x2314,	// (0x00049112) sctrl_sk_top_pane_t1

0x22ec,	// (0x000490ea) aid_touch_sctrl_bottom

0x22f9,	// (0x000490f7) bg_sctrl_sk_pane_cp_ParamLimits

0x22f9,	// (0x000490f7) bg_sctrl_sk_pane_cp

0x232f,	// (0x0004912d) sctrl_sk_bottom_pane_g1

0x2314,	// (0x00049112) sctrl_sk_bottom_pane_t1

0x89e8,	// (0x0004f7e6) cell_sctrl_middle_pane_ParamLimits

0x89e8,	// (0x0004f7e6) cell_sctrl_middle_pane

0x89f9,	// (0x0004f7f7) aid_touch_sctrl_middle_ParamLimits

0x89f9,	// (0x0004f7f7) aid_touch_sctrl_middle

0x8a06,	// (0x0004f804) bg_sctrl_middle_pane_ParamLimits

0x8a06,	// (0x0004f804) bg_sctrl_middle_pane

0x2998,	// (0x00049796) cell_sctrl_middle_pane_g1_ParamLimits

0x2998,	// (0x00049796) cell_sctrl_middle_pane_g1

0x8a14,	// (0x0004f812) cell_sctrl_middle_pane_g2_ParamLimits

0x8a14,	// (0x0004f812) cell_sctrl_middle_pane_g2

0x0001,

0xfcf1,	// (0x00056aef) cell_sctrl_middle_pane_g_ParamLimits

0xfcf1,	// (0x00056aef) cell_sctrl_middle_pane_g

0xc89e,	// (0x0005369c) bg_sctrl_middle_pane_g1

0xc8a6,	// (0x000536a4) bg_sctrl_middle_pane_g2

0xc8ae,	// (0x000536ac) bg_sctrl_middle_pane_g3

0xc8b6,	// (0x000536b4) bg_sctrl_middle_pane_g4

0xc8be,	// (0x000536bc) bg_sctrl_middle_pane_g5

0xc8c6,	// (0x000536c4) bg_sctrl_middle_pane_g6

0xc8ce,	// (0x000536cc) bg_sctrl_middle_pane_g7

0xc8d6,	// (0x000536d4) bg_sctrl_middle_pane_g8

0x0007,

0x00cd,	// (0x00046ecb) bg_sctrl_middle_pane_g

0xc8de,	// (0x000536dc) bg_sctrl_middle_pane_g8_copy1

0xc89e,	// (0x0005369c) bg_sctrl_sk_pane_g1

0xc8ae,	// (0x000536ac) bg_sctrl_sk_pane_g2

0xc8a6,	// (0x000536a4) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0005666a) bg_sctrl_sk_pane_g

0xb9b0,	// (0x000527ae) aid_size_touch_scroll_bar

0xc8be,	// (0x000536bc) bg_sctrl_sk_pane_g4

0xc8b6,	// (0x000536b4) bg_sctrl_sk_pane_g5

0xc8c6,	// (0x000536c4) bg_sctrl_sk_pane_g6

0xc8ce,	// (0x000536cc) bg_sctrl_sk_pane_g7

0xc8de,	// (0x000536dc) bg_sctrl_sk_pane_g8

0xc8d6,	// (0x000536d4) bg_sctrl_sk_pane_g9

0x1486,	// (0x00048284) popup_fep_china_hwr2_fs_candidate_window

0x808b,	// (0x0004ee89) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x808b,	// (0x0004ee89) popup_fep_china_hwr2_fs_control_window

0x20cb,	// (0x00048ec9) sctrl_sk_top_pane_g2

0x0001,

0xfcec,	// (0x00056aea) sctrl_sk_top_pane_g

0xaead,	// (0x00051cab) aid_fep_china_hwr2_fs_cell_ParamLimits

0xaead,	// (0x00051cab) aid_fep_china_hwr2_fs_cell

0xaec1,	// (0x00051cbf) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xaec1,	// (0x00051cbf) bg_popup_fep_shadow_pane_cp4

0xaed8,	// (0x00051cd6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xaed8,	// (0x00051cd6) bg_popup_fep_shadow_pane_cp5

0xaeea,	// (0x00051ce8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xaeea,	// (0x00051ce8) popup_fep_china_hwr2_fs_control_bar_grid

0xaefe,	// (0x00051cfc) popup_fep_china_hwr2_fs_control_funtion_grid

0x4d36,	// (0x0004bb34) aid_fep_china_hwr2_fs_candi_cell

0xafa5,	// (0x00051da3) bg_popup_fep_shadow_pane_cp6

0x4d40,	// (0x0004bb3e) popup_fep_china_hwr2_fs_candidate_grid

0xaf06,	// (0x00051d04) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xaf06,	// (0x00051d04) cell_fep_china_hwr2_fs_funtion_grid

0xe747,	// (0x00055545) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x4d4a,	// (0x0004bb48) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x4d4a,	// (0x0004bb48) cell_fep_china_hwr2_fs_funtion_grid_g1

0x4d58,	// (0x0004bb56) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x4d58,	// (0x0004bb56) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf6,	// (0x00056af4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf6,	// (0x00056af4) cell_fep_china_hwr2_fs_funtion_grid_g

0xaf1e,	// (0x00051d1c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xaf1e,	// (0x00051d1c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xaf33,	// (0x00051d31) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xaf33,	// (0x00051d31) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfb,	// (0x00056af9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfb,	// (0x00056af9) cell_fep_china_hwr2_fs_funtion_grid_t

0x4d6e,	// (0x0004bb6c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x4d76,	// (0x0004bb74) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x4d7e,	// (0x0004bb7c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd00,	// (0x00056afe) popup_fep_china_hwr2_fs_control_bar_grid_g

0x4d86,	// (0x0004bb84) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x4d86,	// (0x0004bb84) cell_fep_china_hwr2_fs_candidate_grid

0x4d9f,	// (0x0004bb9d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x4da7,	// (0x0004bba5) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe747,	// (0x00055545) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe747,	// (0x00055545) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4a,	// (0x00056948) cell_fep_china_hwr2_fs_candidate_grid_g

0x4daf,	// (0x0004bbad) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc6ed,	// (0x000534eb) clock_nsta_pane_cp_24_ParamLimits

0xc6ed,	// (0x000534eb) clock_nsta_pane_cp_24

0xc755,	// (0x00053553) indicator_nsta_pane_cp_24_ParamLimits

0xc755,	// (0x00053553) indicator_nsta_pane_cp_24

0xd4b8,	// (0x000542b6) heading_pane_g1

0x0001,

0xf8d1,	// (0x000566cf) heading_pane_g

0xdb3b,	// (0x00054939) grid_sct_catagory_button_pane

0xd0b2,	// (0x00053eb0) scroll_pane_cp5_ParamLimits

0xe4b1,	// (0x000552af) button_value_adjust_pane_cp5_ParamLimits

0xe4b1,	// (0x000552af) button_value_adjust_pane_cp5

0xe56f,	// (0x0005536d) form2_midp_time_pane_ParamLimits

0x4dbd,	// (0x0004bbbb) cell_sct_catagory_button_pane_ParamLimits

0x4dbd,	// (0x0004bbbb) cell_sct_catagory_button_pane

0xe70c,	// (0x0005550a) bg_button_pane_cp01_ParamLimits

0xe70c,	// (0x0005550a) bg_button_pane_cp01

0xe747,	// (0x00055545) cell_sct_catagory_button_pane_g1

0x85ca,	// (0x0004f3c8) popup_tb_extension_window

0xaf4f,	// (0x00051d4d) aid_size_cell_ext_ParamLimits

0xaf4f,	// (0x00051d4d) aid_size_cell_ext

0xb7f2,	// (0x000525f0) bg_tb_trans_pane_cp1_ParamLimits

0xb7f2,	// (0x000525f0) bg_tb_trans_pane_cp1

0xb1c0,	// (0x00051fbe) grid_tb_ext_pane_ParamLimits

0xb1c0,	// (0x00051fbe) grid_tb_ext_pane

0xb1fd,	// (0x00051ffb) cell_tb_ext_pane_ParamLimits

0xb1fd,	// (0x00051ffb) cell_tb_ext_pane

0xb225,	// (0x00052023) cell_tb_ext_pane_g1_ParamLimits

0xb225,	// (0x00052023) cell_tb_ext_pane_g1

0x4dcf,	// (0x0004bbcd) cell_tb_ext_pane_t1

0xb148,	// (0x00051f46) list_highlight_pane_cp11_ParamLimits

0xb148,	// (0x00051f46) list_highlight_pane_cp11

0x0664,	// (0x00047462) popup_uni_indicator_window_ParamLimits

0x0664,	// (0x00047462) popup_uni_indicator_window

0xba83,	// (0x00052881) bg_popup_sub_pane_cp14

0x4dea,	// (0x0004bbe8) list_uniindi_pane

0x4df6,	// (0x0004bbf4) uniindi_top_pane

0xb148,	// (0x00051f46) bg_uniindi_top_pane

0x5252,	// (0x0004c050) uniindi_top_pane_g1

0x5268,	// (0x0004c066) uniindi_top_pane_g2

0x0003,

0xfd07,	// (0x00056b05) uniindi_top_pane_g

0x5292,	// (0x0004c090) uniindi_top_pane_t1

0x52bc,	// (0x0004c0ba) list_single_uniindi_pane_ParamLimits

0x52bc,	// (0x0004c0ba) list_single_uniindi_pane

0xe747,	// (0x00055545) bg_uniindi_top_pane_g1

0x52ce,	// (0x0004c0cc) list_single_uniindi_pane_g1

0x52e1,	// (0x0004c0df) list_single_uniindi_pane_t1

0x04e8,	// (0x000472e6) control_bg_pane

0x5306,	// (0x0004c104) bg_sctrl_sk_pane_cp1

0x530f,	// (0x0004c10d) bg_sctrl_sk_pane_cp2

0x5559,	// (0x0004c357) control_bg_pane_g1

0x5562,	// (0x0004c360) control_bg_pane_g2

0x0001,

0xfd10,	// (0x00056b0e) control_bg_pane_g

0xe328,	// (0x00055126) cell_indicator_nsta_pane_g1_ParamLimits

0xa6f4,	// (0x000514f2) cell_indicator_nsta_pane_g2_ParamLimits

0xfaae,	// (0x000568ac) cell_indicator_nsta_pane_g_ParamLimits

0x3d4b,	// (0x0004ab49) form2_midp_time_pane_t1_ParamLimits

0x1e66,	// (0x00048c64) main_idle_act4_pane_ParamLimits

0x1e66,	// (0x00048c64) main_idle_act4_pane

0x85ca,	// (0x0004f3c8) popup_tb_extension_window_ParamLimits

0xb1e4,	// (0x00051fe2) tb_ext_find_pane_ParamLimits

0xb1e4,	// (0x00051fe2) tb_ext_find_pane

0x556b,	// (0x0004c369) ai_gene_pane_1_cp1

0xc500,	// (0x000532fe) ai_gene_pane_2_cp1

0x5573,	// (0x0004c371) list_single_idle_plugin_calendar_pane

0x557c,	// (0x0004c37a) list_single_idle_plugin_notification_pane

0x5585,	// (0x0004c383) list_single_idle_plugin_player_pane

0xb242,	// (0x00052040) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb242,	// (0x00052040) list_single_idle_plugin_shortcut_pane

0xb26a,	// (0x00052068) main_idle_act4_pane_t1

0xb280,	// (0x0005207e) main_idle_act4_pane_t2

0x0001,

0xfd15,	// (0x00056b13) main_idle_act4_pane_t

0xb298,	// (0x00052096) middle_sk_idle_act4_pane_ParamLimits

0xb298,	// (0x00052096) middle_sk_idle_act4_pane

0xb2b4,	// (0x000520b2) popup_clock_digital_analogue_window_cp2

0xb2db,	// (0x000520d9) shortcut_wheel_idle_act4_pane_ParamLimits

0xb2db,	// (0x000520d9) shortcut_wheel_idle_act4_pane

0xe747,	// (0x00055545) shortcut_wheel_idle_act4_pane_g1

0xe747,	// (0x00055545) shortcut_wheel_idle_act4_pane_g2

0xe747,	// (0x00055545) shortcut_wheel_idle_act4_pane_g3

0xe747,	// (0x00055545) shortcut_wheel_idle_act4_pane_g4

0xe747,	// (0x00055545) shortcut_wheel_idle_act4_pane_g5

0x5618,	// (0x0004c416) shortcut_wheel_idle_act4_pane_g6

0x5620,	// (0x0004c41e) shortcut_wheel_idle_act4_pane_g7

0x5628,	// (0x0004c426) shortcut_wheel_idle_act4_pane_g8

0x5630,	// (0x0004c42e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1a,	// (0x00056b18) shortcut_wheel_idle_act4_pane_g

0xaf75,	// (0x00051d73) middle_sk_idle_act4_pane_g1_ParamLimits

0xaf75,	// (0x00051d73) middle_sk_idle_act4_pane_g1

0xb358,	// (0x00052156) middle_sk_idle_act4_pane_g2_ParamLimits

0xb358,	// (0x00052156) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3d,	// (0x00056b3b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3d,	// (0x00056b3b) middle_sk_idle_act4_pane_g

0xb370,	// (0x0005216e) middle_sk_idle_act4_pane_t1_ParamLimits

0xb370,	// (0x0005216e) middle_sk_idle_act4_pane_t1

0xb39f,	// (0x0005219d) grid_ai_shortcut_pane_ParamLimits

0xb39f,	// (0x0005219d) grid_ai_shortcut_pane

0xb3bc,	// (0x000521ba) list_highlight_pane_cp16_ParamLimits

0xb3bc,	// (0x000521ba) list_highlight_pane_cp16

0xb3c9,	// (0x000521c7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb3c9,	// (0x000521c7) list_single_idle_plugin_shortcut_pane_g1

0xb3d5,	// (0x000521d3) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb3d5,	// (0x000521d3) list_single_idle_plugin_shortcut_pane_g2

0xb3f1,	// (0x000521ef) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb3f1,	// (0x000521ef) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd42,	// (0x00056b40) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd42,	// (0x00056b40) list_single_idle_plugin_shortcut_pane_g

0xb406,	// (0x00052204) cell_ai_shortcut_pane_ParamLimits

0xb406,	// (0x00052204) cell_ai_shortcut_pane

0xb41c,	// (0x0005221a) cell_ai_shortcut_pane_g1_ParamLimits

0xb41c,	// (0x0005221a) cell_ai_shortcut_pane_g1

0x556b,	// (0x0004c369) ai_gene_pane_1_cp2

0x575d,	// (0x0004c55b) ai_gene_pane_2_cp2

0x5765,	// (0x0004c563) list_highlight_pane_cp15

0x576e,	// (0x0004c56c) list_single_idle_plugin_calendar_pane_g1

0x5765,	// (0x0004c563) list_highlight_pane_cp17

0x5776,	// (0x0004c574) list_single_idle_plugin_calendar_pane_g1_copy1

0x577e,	// (0x0004c57c) list_single_idle_plugin_player_pane_g1

0xdd50,	// (0x00054b4e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd49,	// (0x00056b47) list_single_idle_plugin_player_pane_g

0x5786,	// (0x0004c584) list_single_idle_plugin_player_pane_t1

0x5794,	// (0x0004c592) list_single_idle_plugin_player_pane_t2

0x57a2,	// (0x0004c5a0) list_single_idle_plugin_player_pane_t3

0x57b0,	// (0x0004c5ae) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4e,	// (0x00056b4c) list_single_idle_plugin_player_pane_t

0x57be,	// (0x0004c5bc) wait_bar_pane_cp15

0x57c6,	// (0x0004c5c4) grid_ai_notification_pane

0xdd50,	// (0x00054b4e) list_single_idle_plugin_notification_pane_g1

0xb43e,	// (0x0005223c) cell_ai_notification_pane_ParamLimits

0xb43e,	// (0x0005223c) cell_ai_notification_pane

0x57dc,	// (0x0004c5da) cell_ai_notification_pane_g1

0x57e4,	// (0x0004c5e2) cell_ai_notification_pane_t1

0xb44b,	// (0x00052249) tb_ext_find_button_pane

0xb453,	// (0x00052251) tb_ext_find_pane_g1

0xb45b,	// (0x00052259) tb_ext_find_pane_t1

0xbfb1,	// (0x00052daf) tb_ext_find_button_pane_g1

0x5810,	// (0x0004c60e) tb_ext_find_button_pane_g2

0x0001,

0xfd57,	// (0x00056b55) tb_ext_find_button_pane_g

0xb26a,	// (0x00052068) main_idle_act4_pane_t1_ParamLimits

0xb280,	// (0x0005207e) main_idle_act4_pane_t2_ParamLimits

0xfd15,	// (0x00056b13) main_idle_act4_pane_t_ParamLimits

0xb2b4,	// (0x000520b2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb2cb,	// (0x000520c9) sat_plugin_idle_act4_pane_ParamLimits

0xb2cb,	// (0x000520c9) sat_plugin_idle_act4_pane

0xb469,	// (0x00052267) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb469,	// (0x00052267) sat_plugin_idle_act4_pane_t1

0xb481,	// (0x0005227f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb481,	// (0x0005227f) sat_plugin_idle_act4_pane_t2

0xb499,	// (0x00052297) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb499,	// (0x00052297) sat_plugin_idle_act4_pane_t3

0xb4b1,	// (0x000522af) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb4b1,	// (0x000522af) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5c,	// (0x00056b5a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5c,	// (0x00056b5a) sat_plugin_idle_act4_pane_t

0x05ad,	// (0x000473ab) popup_battery_window_ParamLimits

0x05ad,	// (0x000473ab) popup_battery_window

0xb148,	// (0x00051f46) bg_popup_sub_pane_cp25_ParamLimits

0xb148,	// (0x00051f46) bg_popup_sub_pane_cp25

0x5865,	// (0x0004c663) popup_battery_window_g1_ParamLimits

0x5865,	// (0x0004c663) popup_battery_window_g1

0x5871,	// (0x0004c66f) popup_battery_window_t1_ParamLimits

0x5871,	// (0x0004c66f) popup_battery_window_t1

0x5883,	// (0x0004c681) popup_battery_window_t2_ParamLimits

0x5883,	// (0x0004c681) popup_battery_window_t2

0x0001,

0xfd65,	// (0x00056b63) popup_battery_window_t_ParamLimits

0xfd65,	// (0x00056b63) popup_battery_window_t

0x9c55,	// (0x00050a53) midp_canvas_pane_ParamLimits

0x9cb2,	// (0x00050ab0) midp_keypad_pane_ParamLimits

0x9cb2,	// (0x00050ab0) midp_keypad_pane

0xbbe7,	// (0x000529e5) main_midp_pane_ParamLimits

0xe446,	// (0x00055244) signal_pane_g2_cp_ParamLimits

0xb4c9,	// (0x000522c7) aid_size_cell_midp_keypad_ParamLimits

0xb4c9,	// (0x000522c7) aid_size_cell_midp_keypad

0xb4e7,	// (0x000522e5) midp_keyp_game_grid_pane_ParamLimits

0xb4e7,	// (0x000522e5) midp_keyp_game_grid_pane

0xb50e,	// (0x0005230c) midp_keyp_rocker_pane_ParamLimits

0xb50e,	// (0x0005230c) midp_keyp_rocker_pane

0xb54f,	// (0x0005234d) midp_keyp_sk_left_pane_ParamLimits

0xb54f,	// (0x0005234d) midp_keyp_sk_left_pane

0xb5a3,	// (0x000523a1) midp_keyp_sk_right_pane_ParamLimits

0xb5a3,	// (0x000523a1) midp_keyp_sk_right_pane

0xafa5,	// (0x00051da3) bg_button_pane_cp03

0xb5f7,	// (0x000523f5) midp_keyp_sk_left_pane_g1

0xafa5,	// (0x00051da3) bg_button_pane_cp04

0xb5f7,	// (0x000523f5) midp_keyp_sk_right_pane_g1

0xe747,	// (0x00055545) midp_keyp_rocker_pane_g1

0xb600,	// (0x000523fe) keyp_game_cell_pane_ParamLimits

0xb600,	// (0x000523fe) keyp_game_cell_pane

0xafa5,	// (0x00051da3) bg_button_pane_cp02

0xb624,	// (0x00052422) keyp_game_cell_pane_g1

0x784d,	// (0x0004e64b) popup_fep_vkb2_window_ParamLimits

0x784d,	// (0x0004e64b) popup_fep_vkb2_window

0x8a20,	// (0x0004f81e) aid_size_cell_vkb2_ParamLimits

0x8a20,	// (0x0004f81e) aid_size_cell_vkb2

0x8a56,	// (0x0004f854) popup_fep_vkb2_window_g1_ParamLimits

0x8a56,	// (0x0004f854) popup_fep_vkb2_window_g1

0x8a9d,	// (0x0004f89b) vkb2_area_bottom_pane_ParamLimits

0x8a9d,	// (0x0004f89b) vkb2_area_bottom_pane

0x8af1,	// (0x0004f8ef) vkb2_area_keypad_pane_ParamLimits

0x8af1,	// (0x0004f8ef) vkb2_area_keypad_pane

0x8b39,	// (0x0004f937) vkb2_area_top_pane_ParamLimits

0x8b39,	// (0x0004f937) vkb2_area_top_pane

0x8bbf,	// (0x0004f9bd) vkb2_top_entry_pane_ParamLimits

0x8bbf,	// (0x0004f9bd) vkb2_top_entry_pane

0x8bec,	// (0x0004f9ea) vkb2_top_grid_left_pane_ParamLimits

0x8bec,	// (0x0004f9ea) vkb2_top_grid_left_pane

0x8c0c,	// (0x0004fa0a) vkb2_top_grid_right_pane_ParamLimits

0x8c0c,	// (0x0004fa0a) vkb2_top_grid_right_pane

0x2593,	// (0x00049391) vkb2_cell_keypad_pane_ParamLimits

0x2593,	// (0x00049391) vkb2_cell_keypad_pane

0x8c52,	// (0x0004fa50) vkb2_area_bottom_grid_pane_ParamLimits

0x8c52,	// (0x0004fa50) vkb2_area_bottom_grid_pane

0x8c7c,	// (0x0004fa7a) vkb2_area_bottom_pane_g1_ParamLimits

0x8c7c,	// (0x0004fa7a) vkb2_area_bottom_pane_g1

0x8ca2,	// (0x0004faa0) vkb2_area_bottom_pane_g2_ParamLimits

0x8ca2,	// (0x0004faa0) vkb2_area_bottom_pane_g2

0x8cd3,	// (0x0004fad1) vkb2_area_bottom_pane_g3_ParamLimits

0x8cd3,	// (0x0004fad1) vkb2_area_bottom_pane_g3

0x0002,

0xfd6a,	// (0x00056b68) vkb2_area_bottom_pane_g_ParamLimits

0xfd6a,	// (0x00056b68) vkb2_area_bottom_pane_g

0x273d,	// (0x0004953b) vkb2_top_cell_left_pane_ParamLimits

0x273d,	// (0x0004953b) vkb2_top_cell_left_pane

0x9028,	// (0x0004fe26) vkb2_top_entry_pane_g1_ParamLimits

0x9028,	// (0x0004fe26) vkb2_top_entry_pane_g1

0x9036,	// (0x0004fe34) vkb2_top_entry_pane_t1_ParamLimits

0x9036,	// (0x0004fe34) vkb2_top_entry_pane_t1

0x5a26,	// (0x0004c824) vkb2_top_entry_pane_t2_ParamLimits

0x5a26,	// (0x0004c824) vkb2_top_entry_pane_t2

0x5a58,	// (0x0004c856) vkb2_top_entry_pane_t3_ParamLimits

0x5a58,	// (0x0004c856) vkb2_top_entry_pane_t3

0x0002,

0xfd71,	// (0x00056b6f) vkb2_top_entry_pane_t_ParamLimits

0xfd71,	// (0x00056b6f) vkb2_top_entry_pane_t

0x8d3d,	// (0x0004fb3b) vkb2_top_grid_right_pane_g1_ParamLimits

0x8d3d,	// (0x0004fb3b) vkb2_top_grid_right_pane_g1

0x27a0,	// (0x0004959e) vkb2_top_grid_right_pane_g2_ParamLimits

0x27a0,	// (0x0004959e) vkb2_top_grid_right_pane_g2

0x27b8,	// (0x000495b6) vkb2_top_grid_right_pane_g3_ParamLimits

0x27b8,	// (0x000495b6) vkb2_top_grid_right_pane_g3

0x8d53,	// (0x0004fb51) vkb2_top_grid_right_pane_g4_ParamLimits

0x8d53,	// (0x0004fb51) vkb2_top_grid_right_pane_g4

0x0003,

0xfd78,	// (0x00056b76) vkb2_top_grid_right_pane_g_ParamLimits

0xfd78,	// (0x00056b76) vkb2_top_grid_right_pane_g

0x27e6,	// (0x000495e4) vkb2_top_cell_left_pane_g1

0x27fd,	// (0x000495fb) vkb2_cell_keypad_pane_g1_ParamLimits

0x27fd,	// (0x000495fb) vkb2_cell_keypad_pane_g1

0x5a7c,	// (0x0004c87a) vkb2_cell_keypad_pane_t1_ParamLimits

0x5a7c,	// (0x0004c87a) vkb2_cell_keypad_pane_t1

0x280b,	// (0x00049609) vkb2_cell_bottom_grid_pane_ParamLimits

0x280b,	// (0x00049609) vkb2_cell_bottom_grid_pane

0x2844,	// (0x00049642) vkb2_cell_bottom_grid_pane_g1

0xb2fc,	// (0x000520fa) aid_call2_pane_cp02

0xb304,	// (0x00052102) aid_call_pane_cp02

0xb30c,	// (0x0005210a) clock_digital_number_pane_cp10

0xb314,	// (0x00052112) clock_digital_number_pane_cp11

0xb31c,	// (0x0005211a) clock_digital_number_pane_cp12

0xb324,	// (0x00052122) clock_digital_number_pane_cp13

0xb32c,	// (0x0005212a) clock_digital_separator_pane_cp10

0xbfb1,	// (0x00052daf) popup_clock_digital_analogue_window_cp2_g1

0xbfb1,	// (0x00052daf) popup_clock_digital_analogue_window_cp2_g2

0xb334,	// (0x00052132) popup_clock_digital_analogue_window_cp2_g3

0xbfb1,	// (0x00052daf) popup_clock_digital_analogue_window_cp2_g4

0xb334,	// (0x00052132) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2d,	// (0x00056b2b) popup_clock_digital_analogue_window_cp2_g

0xb33c,	// (0x0005213a) popup_clock_digital_analogue_window_cp2_t1

0xb34a,	// (0x00052148) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd38,	// (0x00056b36) popup_clock_digital_analogue_window_cp2_t

0xe747,	// (0x00055545) clock_digital_number_pane_cp10_g1

0xe747,	// (0x00055545) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4a,	// (0x00056948) clock_digital_number_pane_cp10_g

0xe747,	// (0x00055545) clock_digital_separator_pane_cp10_g1

0xe747,	// (0x00055545) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4a,	// (0x00056948) clock_digital_separator_pane_cp10_g

0x5274,	// (0x0004c072) uniindi_top_pane_g3

0x5285,	// (0x0004c083) uniindi_top_pane_g4

0x261e,	// (0x0004941c) vkb2_row_keypad_pane_ParamLimits

0x261e,	// (0x0004941c) vkb2_row_keypad_pane

0x2864,	// (0x00049662) vkb2_cell_t_keypad_pane_ParamLimits

0x2864,	// (0x00049662) vkb2_cell_t_keypad_pane

0x2874,	// (0x00049672) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2874,	// (0x00049672) vkb2_cell_t_keypad_pane_cp08

0x2887,	// (0x00049685) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2887,	// (0x00049685) vkb2_cell_t_keypad_pane_cp09

0x289b,	// (0x00049699) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x289b,	// (0x00049699) vkb2_cell_t_keypad_pane_cp01

0x28ac,	// (0x000496aa) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x28ac,	// (0x000496aa) vkb2_cell_t_keypad_pane_cp02

0x28bd,	// (0x000496bb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x28bd,	// (0x000496bb) vkb2_cell_t_keypad_pane_cp03

0x28ce,	// (0x000496cc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x28ce,	// (0x000496cc) vkb2_cell_t_keypad_pane_cp04

0x28df,	// (0x000496dd) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x28df,	// (0x000496dd) vkb2_cell_t_keypad_pane_cp05

0x28f0,	// (0x000496ee) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x28f0,	// (0x000496ee) vkb2_cell_t_keypad_pane_cp06

0x2901,	// (0x000496ff) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2901,	// (0x000496ff) vkb2_cell_t_keypad_pane_cp07

0x2912,	// (0x00049710) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2912,	// (0x00049710) vkb2_cell_t_keypad_pane_cp10

0x20cb,	// (0x00048ec9) vkb2_cell_t_keypad_pane_g1

0x5a93,	// (0x0004c891) vkb2_cell_t_keypad_pane_t1

0x04e8,	// (0x000472e6) popup_grid_graphic2_window

0x906f,	// (0x0004fe6d) aid_size_cell_graphic2_ParamLimits

0x906f,	// (0x0004fe6d) aid_size_cell_graphic2

0x90ad,	// (0x0004feab) bg_popup_window_pane_cp21_ParamLimits

0x90ad,	// (0x0004feab) bg_popup_window_pane_cp21

0x90bb,	// (0x0004feb9) graphic2_pages_pane_ParamLimits

0x90bb,	// (0x0004feb9) graphic2_pages_pane

0x9111,	// (0x0004ff0f) grid_graphic2_control_pane_ParamLimits

0x9111,	// (0x0004ff0f) grid_graphic2_control_pane

0x9159,	// (0x0004ff57) grid_graphic2_pane_ParamLimits

0x9159,	// (0x0004ff57) grid_graphic2_pane

0x91e0,	// (0x0004ffde) cell_graphic2_pane

0x04e8,	// (0x000472e6) main_comp_mode_pane

0x4a74,	// (0x0004b872) list_ai3_gene_pane_ParamLimits

0xadf5,	// (0x00051bf3) bg_popup_window_pane_cp19_ParamLimits

0x4c19,	// (0x0004ba17) bg_touch_area_indi_pane_ParamLimits

0x4c19,	// (0x0004ba17) bg_touch_area_indi_pane

0x4c2f,	// (0x0004ba2d) bg_touch_area_indi_pane_cp01_ParamLimits

0x4c2f,	// (0x0004ba2d) bg_touch_area_indi_pane_cp01

0x4c45,	// (0x0004ba43) bg_touch_area_indi_pane_cp02_ParamLimits

0x4c45,	// (0x0004ba43) bg_touch_area_indi_pane_cp02

0x4c5d,	// (0x0004ba5b) bg_touch_area_indi_pane_cp03_ParamLimits

0x4c5d,	// (0x0004ba5b) bg_touch_area_indi_pane_cp03

0x4c77,	// (0x0004ba75) popup_slider_window_g1_ParamLimits

0x4c93,	// (0x0004ba91) popup_slider_window_g2_ParamLimits

0x4caf,	// (0x0004baad) popup_slider_window_g3_ParamLimits

0xfcd3,	// (0x00056ad1) popup_slider_window_g_ParamLimits

0x4ccb,	// (0x0004bac9) popup_slider_window_t1_ParamLimits

0x4d11,	// (0x0004bb0f) small_volume_slider_vertical_pane_ParamLimits

0x91e0,	// (0x0004ffde) cell_graphic2_pane_ParamLimits

0x923d,	// (0x0005003b) bg_button_pane_cp10_ParamLimits

0x923d,	// (0x0005003b) bg_button_pane_cp10

0x9250,	// (0x0005004e) bg_button_pane_cp11_ParamLimits

0x9250,	// (0x0005004e) bg_button_pane_cp11

0x9263,	// (0x00050061) graphic2_pages_pane_g1_ParamLimits

0x9263,	// (0x00050061) graphic2_pages_pane_g1

0x927e,	// (0x0005007c) graphic2_pages_pane_g2_ParamLimits

0x927e,	// (0x0005007c) graphic2_pages_pane_g2

0x0001,

0xfd86,	// (0x00056b84) graphic2_pages_pane_g_ParamLimits

0xfd86,	// (0x00056b84) graphic2_pages_pane_g

0x9296,	// (0x00050094) graphic2_pages_pane_t1_ParamLimits

0x9296,	// (0x00050094) graphic2_pages_pane_t1

0x92ae,	// (0x000500ac) cell_graphic2_control_pane_ParamLimits

0x92ae,	// (0x000500ac) cell_graphic2_control_pane

0x92e0,	// (0x000500de) cell_graphic2_pane_g1_ParamLimits

0x92e0,	// (0x000500de) cell_graphic2_pane_g1

0xaf83,	// (0x00051d81) cell_graphic2_pane_g2_ParamLimits

0xaf83,	// (0x00051d81) cell_graphic2_pane_g2

0x8ecb,	// (0x0004fcc9) cell_graphic2_pane_g3_ParamLimits

0x8ecb,	// (0x0004fcc9) cell_graphic2_pane_g3

0xaf90,	// (0x00051d8e) cell_graphic2_pane_g4_ParamLimits

0xaf90,	// (0x00051d8e) cell_graphic2_pane_g4

0x92ed,	// (0x000500eb) cell_graphic2_pane_g5_ParamLimits

0x92ed,	// (0x000500eb) cell_graphic2_pane_g5

0x0004,

0xfd8b,	// (0x00056b89) cell_graphic2_pane_g_ParamLimits

0xfd8b,	// (0x00056b89) cell_graphic2_pane_g

0x930d,	// (0x0005010b) cell_graphic2_pane_t1_ParamLimits

0x930d,	// (0x0005010b) cell_graphic2_pane_t1

0xd4ac,	// (0x000542aa) grid_highlight_pane_cp11_ParamLimits

0xd4ac,	// (0x000542aa) grid_highlight_pane_cp11

0xb148,	// (0x00051f46) bg_button_pane_cp05

0x9342,	// (0x00050140) cell_graphic2_control_pane_g1

0xe747,	// (0x00055545) bg_touch_area_indi_pane_g1

0x5add,	// (0x0004c8db) aid_cmod_rocker_key_size

0x5ae7,	// (0x0004c8e5) aid_cmode_itu_key_size

0x5af1,	// (0x0004c8ef) main_cmode_video_pane

0x5afb,	// (0x0004c8f9) main_comp_mode_itu_pane

0x5b07,	// (0x0004c905) main_comp_mode_rocker_pane

0x5b13,	// (0x0004c911) cell_cmode_rocker_pane_ParamLimits

0x5b13,	// (0x0004c911) cell_cmode_rocker_pane

0x5b25,	// (0x0004c923) cell_cmode_itu_pane_ParamLimits

0x5b25,	// (0x0004c923) cell_cmode_itu_pane

0xba83,	// (0x00052881) bg_button_pane_cp06_ParamLimits

0xba83,	// (0x00052881) bg_button_pane_cp06

0xe9b0,	// (0x000557ae) cell_cmode_rocker_pane_g1_ParamLimits

0xe9b0,	// (0x000557ae) cell_cmode_rocker_pane_g1

0x4d4a,	// (0x0004bb48) cell_cmode_rocker_pane_g2_ParamLimits

0x4d4a,	// (0x0004bb48) cell_cmode_rocker_pane_g2

0x0001,

0xfd9b,	// (0x00056b99) cell_cmode_rocker_pane_g_ParamLimits

0xfd9b,	// (0x00056b99) cell_cmode_rocker_pane_g

0xafa5,	// (0x00051da3) bg_button_pane_cp07

0x5b3a,	// (0x0004c938) cell_cmode_itu_pane_g1

0x5b43,	// (0x0004c941) cell_cmode_itu_pane_t1

0x5b51,	// (0x0004c94f) cell_cmode_itu_pane_t2

0x0001,

0xfda0,	// (0x00056b9e) cell_cmode_itu_pane_t

0x52f6,	// (0x0004c0f4) aid_touch_ctrl_left

0x52fe,	// (0x0004c0fc) aid_touch_ctrl_right

0xafa5,	// (0x00051da3) compa_mode_pane

0x9368,	// (0x00050166) aid_cmod_rocker_key_size_cp

0x9372,	// (0x00050170) aid_cmode_itu_key_size_cp

0x5b5f,	// (0x0004c95d) compa_mode_pane_g1

0x5b67,	// (0x0004c965) compa_mode_pane_g2

0x5b6f,	// (0x0004c96d) compa_mode_pane_g3

0x0002,

0xfda5,	// (0x00056ba3) compa_mode_pane_g

0x937c,	// (0x0005017a) main_comp_mode_itu_pane_cp

0x9384,	// (0x00050182) main_comp_mode_rocker_pane_cp

0x938c,	// (0x0005018a) cell_cmode_itu_pane_cp_ParamLimits

0x938c,	// (0x0005018a) cell_cmode_itu_pane_cp

0x93a1,	// (0x0005019f) cell_cmode_rocker_pane_cp_ParamLimits

0x93a1,	// (0x0005019f) cell_cmode_rocker_pane_cp

0xba83,	// (0x00052881) bg_button_pane_cp06_cp_ParamLimits

0xba83,	// (0x00052881) bg_button_pane_cp06_cp

0xe9b0,	// (0x000557ae) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe9b0,	// (0x000557ae) cell_cmode_rocker_pane_g1_cp

0xe747,	// (0x00055545) cell_cmode_rocker_pane_g2_cp

0xafa5,	// (0x00051da3) bg_button_pane_cp07_cp

0x93b3,	// (0x000501b1) cell_cmode_itu_pane_g1_cp

0x93bc,	// (0x000501ba) cell_cmode_itu_pane_t1_cp

0x93bc,	// (0x000501ba) cell_cmode_itu_pane_t2_cp

0xa54f,	// (0x0005134d) settings_code_pane_cp2

0xb015,	// (0x00051e13) bg_popup_window_pane_cp3_ParamLimits

0xb783,	// (0x00052581) heading_pane_cp3_ParamLimits

0xb78f,	// (0x0005258d) listscroll_popup_graphic_pane_ParamLimits

0x1e74,	// (0x00048c72) fep_hwr_aid_pane_ParamLimits

0x22ec,	// (0x000490ea) aid_touch_sctrl_top_ParamLimits

0x2307,	// (0x00049105) sctrl_sk_top_pane_g1_ParamLimits

0x20cb,	// (0x00048ec9) sctrl_sk_top_pane_g2_ParamLimits

0xfcec,	// (0x00056aea) sctrl_sk_top_pane_g_ParamLimits

0x2314,	// (0x00049112) sctrl_sk_top_pane_t1_ParamLimits

0x22ec,	// (0x000490ea) aid_touch_sctrl_bottom_ParamLimits

0x2314,	// (0x00049112) sctrl_sk_bottom_pane_t1_ParamLimits

0x5240,	// (0x0004c03e) aid_area_touch_clock

0x8b81,	// (0x0004f97f) aid_vkb2_area_top_pane_cell_ParamLimits

0x8b81,	// (0x0004f97f) aid_vkb2_area_top_pane_cell

0x8c2c,	// (0x0004fa2a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8c2c,	// (0x0004fa2a) aid_vkb2_area_bottom_pane_cell

0x59de,	// (0x0004c7dc) popup_char_count_window

0x5b77,	// (0x0004c975) popup_char_count_window_g1

0x5b80,	// (0x0004c97e) popup_char_count_window_g2

0x5b89,	// (0x0004c987) popup_char_count_window_g3

0x0002,

0xfdac,	// (0x00056baa) popup_char_count_window_g

0x5b92,	// (0x0004c990) popup_char_count_window_t1

0x23c3,	// (0x000491c1) popup_fep_char_preview_window_ParamLimits

0x23c3,	// (0x000491c1) popup_fep_char_preview_window

0x8ba1,	// (0x0004f99f) vkb2_top_candi_pane_ParamLimits

0x8ba1,	// (0x0004f99f) vkb2_top_candi_pane

0x93ca,	// (0x000501c8) cell_vkb2_top_candi_pane_ParamLimits

0x93ca,	// (0x000501c8) cell_vkb2_top_candi_pane

0x2927,	// (0x00049725) bg_popup_fep_char_preview_window_ParamLimits

0x2927,	// (0x00049725) bg_popup_fep_char_preview_window

0x2935,	// (0x00049733) popup_fep_char_preview_window_t1_ParamLimits

0x2935,	// (0x00049733) popup_fep_char_preview_window_t1

0x5ba0,	// (0x0004c99e) bg_popup_fep_char_preview_window_g1

0x5ba8,	// (0x0004c9a6) bg_popup_fep_char_preview_window_g2

0x5bb0,	// (0x0004c9ae) bg_popup_fep_char_preview_window_g3

0x5bb8,	// (0x0004c9b6) bg_popup_fep_char_preview_window_g4

0x5bc0,	// (0x0004c9be) bg_popup_fep_char_preview_window_g5

0x296f,	// (0x0004976d) bg_popup_fep_char_preview_window_g6

0x5bc8,	// (0x0004c9c6) bg_popup_fep_char_preview_window_g7

0x5bd0,	// (0x0004c9ce) bg_popup_fep_char_preview_window_g8

0x5bd8,	// (0x0004c9d6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdb3,	// (0x00056bb1) bg_popup_fep_char_preview_window_g

0x20cb,	// (0x00048ec9) cell_vkb2_top_candi_pane_g1_ParamLimits

0x20cb,	// (0x00048ec9) cell_vkb2_top_candi_pane_g1

0x20d9,	// (0x00048ed7) cell_vkb2_top_candi_pane_g2_ParamLimits

0x20d9,	// (0x00048ed7) cell_vkb2_top_candi_pane_g2

0x5538,	// (0x0004c336) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5538,	// (0x0004c336) cell_vkb2_top_candi_pane_g3

0x2977,	// (0x00049775) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2977,	// (0x00049775) cell_vkb2_top_candi_pane_g4

0xedad,	// (0x00055bab) cell_vkb2_top_candi_pane_g5_ParamLimits

0xedad,	// (0x00055bab) cell_vkb2_top_candi_pane_g5

0x2998,	// (0x00049796) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2998,	// (0x00049796) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc6,	// (0x00056bc4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc6,	// (0x00056bc4) cell_vkb2_top_candi_pane_g

0x29a6,	// (0x000497a4) cell_vkb2_top_candi_pane_t1

0x1c83,	// (0x00048a81) aid_size_touch_slider_mark_ParamLimits

0x1c83,	// (0x00048a81) aid_size_touch_slider_mark

0x90f7,	// (0x0004fef5) grid_graphic2_catg_pane_ParamLimits

0x90f7,	// (0x0004fef5) grid_graphic2_catg_pane

0x91b3,	// (0x0004ffb1) popup_grid_graphic2_window_t1_ParamLimits

0x91b3,	// (0x0004ffb1) popup_grid_graphic2_window_t1

0x91c9,	// (0x0004ffc7) popup_grid_graphic2_window_t2_ParamLimits

0x91c9,	// (0x0004ffc7) popup_grid_graphic2_window_t2

0x0001,

0xfd81,	// (0x00056b7f) popup_grid_graphic2_window_t_ParamLimits

0xfd81,	// (0x00056b7f) popup_grid_graphic2_window_t

0xb148,	// (0x00051f46) bg_button_pane_cp05_ParamLimits

0x9342,	// (0x00050140) cell_graphic2_control_pane_g1_ParamLimits

0x9430,	// (0x0005022e) cell_graphic2_catg_pane_ParamLimits

0x9430,	// (0x0005022e) cell_graphic2_catg_pane

0xafa5,	// (0x00051da3) bg_button_pane_cp12

0x9442,	// (0x00050240) cell_graphic2_catg_pane_g1

0x4dcf,	// (0x0004bbcd) cell_tb_ext_pane_t1_ParamLimits

0x275d,	// (0x0004955b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x275d,	// (0x0004955b) vkb2_top_cell_right_narrow_pane

0x2775,	// (0x00049573) vkb2_top_cell_right_wide_pane_ParamLimits

0x2775,	// (0x00049573) vkb2_top_cell_right_wide_pane

0x1e66,	// (0x00048c64) bg_vkb2_func_pane_ParamLimits

0x1e66,	// (0x00048c64) bg_vkb2_func_pane

0x27e6,	// (0x000495e4) vkb2_top_cell_left_pane_g1_ParamLimits

0x1e66,	// (0x00048c64) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1e66,	// (0x00048c64) bg_vkb2_fuc_pane_cp03

0x2844,	// (0x00049642) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc8a6,	// (0x000536a4) bg_vkb2_func_pane_g1

0xc8ae,	// (0x000536ac) bg_vkb2_func_pane_g2

0xc8be,	// (0x000536bc) bg_vkb2_func_pane_g3

0xc8b6,	// (0x000536b4) bg_vkb2_func_pane_g4

0xc8c6,	// (0x000536c4) bg_vkb2_func_pane_g5

0xc8ce,	// (0x000536cc) bg_vkb2_func_pane_g6

0xc8d6,	// (0x000536d4) bg_vkb2_func_pane_g7

0xc8de,	// (0x000536dc) bg_vkb2_func_pane_g8

0xc89e,	// (0x0005369c) bg_vkb2_func_pane_g9

0x0008,

0x01bb,	// (0x00046fb9) bg_vkb2_func_pane_g

0x1e66,	// (0x00048c64) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1e66,	// (0x00048c64) bg_vkb2_fuc_pane_cp01

0x27e6,	// (0x000495e4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x27e6,	// (0x000495e4) vkb2_top_cell_right_wide_pane_g1

0x1e66,	// (0x00048c64) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1e66,	// (0x00048c64) bg_vkb2_fuc_pane_cp02

0x2844,	// (0x00049642) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2844,	// (0x00049642) vkb2_top_cell_right_narrow_pane_g1

0xad2f,	// (0x00051b2d) aid_touch_area_decrease_ParamLimits

0xad2f,	// (0x00051b2d) aid_touch_area_decrease

0xad69,	// (0x00051b67) aid_touch_area_increase_ParamLimits

0xad69,	// (0x00051b67) aid_touch_area_increase

0xad91,	// (0x00051b8f) aid_touch_area_mute_ParamLimits

0xad91,	// (0x00051b8f) aid_touch_area_mute

0xadc1,	// (0x00051bbf) aid_touch_area_slider_ParamLimits

0xadc1,	// (0x00051bbf) aid_touch_area_slider

0xae01,	// (0x00051bff) popup_slider_window_g4_ParamLimits

0xae01,	// (0x00051bff) popup_slider_window_g4

0xae29,	// (0x00051c27) popup_slider_window_g5_ParamLimits

0xae29,	// (0x00051c27) popup_slider_window_g5

0xae5d,	// (0x00051c5b) popup_slider_window_g6_ParamLimits

0xae5d,	// (0x00051c5b) popup_slider_window_g6

0x4cf9,	// (0x0004baf7) popup_slider_window_t2_ParamLimits

0x4cf9,	// (0x0004baf7) popup_slider_window_t2

0x0001,

0xfce0,	// (0x00056ade) popup_slider_window_t_ParamLimits

0xfce0,	// (0x00056ade) popup_slider_window_t

0xae79,	// (0x00051c77) slider_pane_ParamLimits

0xae79,	// (0x00051c77) slider_pane

0x5be0,	// (0x0004c9de) slider_pane_g1_ParamLimits

0x5be0,	// (0x0004c9de) slider_pane_g1

0x5bf4,	// (0x0004c9f2) slider_pane_g2_ParamLimits

0x5bf4,	// (0x0004c9f2) slider_pane_g2

0x5c0a,	// (0x0004ca08) slider_pane_g3_ParamLimits

0x5c0a,	// (0x0004ca08) slider_pane_g3

0x0003,

0xfdd3,	// (0x00056bd1) slider_pane_g_ParamLimits

0xfdd3,	// (0x00056bd1) slider_pane_g

0x8612,	// (0x0004f410) popup_tb_float_extension_window_ParamLimits

0x8612,	// (0x0004f410) popup_tb_float_extension_window

0x5c36,	// (0x0004ca34) aid_size_cell_tb_float_ext

0xafa5,	// (0x00051da3) bg_popup_sub_window_cp28

0x5c42,	// (0x0004ca40) grid_tb_float_ext_pane

0x5c4c,	// (0x0004ca4a) cell_tb_float_ext_pane_ParamLimits

0x5c4c,	// (0x0004ca4a) cell_tb_float_ext_pane

0x5c66,	// (0x0004ca64) cell_tb_float_ext_pane_g1

0x5c6f,	// (0x0004ca6d) grid_highlight_pane_cp12

0x8906,	// (0x0004f704) cell_last_hwr_side_pane_ParamLimits

0x8906,	// (0x0004f704) cell_last_hwr_side_pane

0xe747,	// (0x00055545) cell_last_hwr_side_pane_g1

0x5c78,	// (0x0004ca76) cell_last_hwr_side_pane_g2

0x0001,

0xfddc,	// (0x00056bda) cell_last_hwr_side_pane_g

0x8d08,	// (0x0004fb06) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8d08,	// (0x0004fb06) vkb2_area_bottom_space_btn_pane

0x20cb,	// (0x00048ec9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5a93,	// (0x0004c891) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x29a6,	// (0x000497a4) cell_vkb2_top_candi_pane_t1_ParamLimits

0x29c5,	// (0x000497c3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x29c5,	// (0x000497c3) vkb2_area_bottom_space_btn_pane_g1

0x29ff,	// (0x000497fd) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x29ff,	// (0x000497fd) vkb2_area_bottom_space_btn_pane_g2

0x2a35,	// (0x00049833) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2a35,	// (0x00049833) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde1,	// (0x00056bdf) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde1,	// (0x00056bdf) vkb2_area_bottom_space_btn_pane_g

0x1f29,	// (0x00048d27) cel_fep_hwr_func_pane_ParamLimits

0x1f29,	// (0x00048d27) cel_fep_hwr_func_pane

0x88db,	// (0x0004f6d9) cell_hwr_side_button_pane_ParamLimits

0x88db,	// (0x0004f6d9) cell_hwr_side_button_pane

0x5240,	// (0x0004c03e) aid_area_touch_clock_ParamLimits

0xb148,	// (0x00051f46) bg_uniindi_top_pane_ParamLimits

0x5252,	// (0x0004c050) uniindi_top_pane_g1_ParamLimits

0x5268,	// (0x0004c066) uniindi_top_pane_g2_ParamLimits

0x5274,	// (0x0004c072) uniindi_top_pane_g3_ParamLimits

0x5285,	// (0x0004c083) uniindi_top_pane_g4_ParamLimits

0xfd07,	// (0x00056b05) uniindi_top_pane_g_ParamLimits

0x5292,	// (0x0004c090) uniindi_top_pane_t1_ParamLimits

0xb148,	// (0x00051f46) bg_vkb2_func_pane_cp01_ParamLimits

0xb148,	// (0x00051f46) bg_vkb2_func_pane_cp01

0x5fcf,	// (0x0004cdcd) cel_fep_hwr_func_pane_g1_ParamLimits

0x5fcf,	// (0x0004cdcd) cel_fep_hwr_func_pane_g1

0xb148,	// (0x00051f46) bg_vkb2_func_pane_cp02_ParamLimits

0xb148,	// (0x00051f46) bg_vkb2_func_pane_cp02

0x5fcf,	// (0x0004cdcd) cell_hwr_side_button_pane_g1_ParamLimits

0x5fcf,	// (0x0004cdcd) cell_hwr_side_button_pane_g1

0xc7b6,	// (0x000535b4) status_pane_g4_ParamLimits

0xc7b6,	// (0x000535b4) status_pane_g4

0xc7ce,	// (0x000535cc) status_pane_t1

0xe5d7,	// (0x000553d5) form2_midp_gauge_slider_cont_pane

0xe5df,	// (0x000553dd) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa7ca,	// (0x000515c8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa7de,	// (0x000515dc) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafd,	// (0x000568fb) form2_midp_gauge_slider_pane_t_ParamLimits

0xe5f1,	// (0x000553ef) form2_midp_slider_pane_ParamLimits

0x2383,	// (0x00049181) aid_size_cell_func_vkb2_ParamLimits

0x2383,	// (0x00049181) aid_size_cell_func_vkb2

0x5c22,	// (0x0004ca20) slider_pane_g4_ParamLimits

0x5c22,	// (0x0004ca20) slider_pane_g4

0x8d69,	// (0x0004fb67) form2_midp_gauge_slider_pane_t2_cp01

0x8d79,	// (0x0004fb77) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8d79,	// (0x0004fb77) form2_midp_gauge_slider_pane_t3_cp01

0x2aaa,	// (0x000498a8) form2_midp_slider_pane_cp01

0xafa5,	// (0x00051da3) navi_smil_pane

0x5fff,	// (0x0004cdfd) navi_smil_pane_g1

0x6007,	// (0x0004ce05) navi_smil_pane_t1

0x5fdd,	// (0x0004cddb) form2_midp_slider_pane_g1

0x5fe6,	// (0x0004cde4) form2_midp_slider_pane_g2

0x5fee,	// (0x0004cdec) form2_midp_slider_pane_g3

0x5fdd,	// (0x0004cddb) form2_midp_slider_pane_g4

0x944b,	// (0x00050249) form2_midp_slider_pane_g5

0x0004,

0xfdea,	// (0x00056be8) form2_midp_slider_pane_g

0x2a6f,	// (0x0004986d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2a6f,	// (0x0004986d) vkb2_area_bottom_space_btn_pane_g4

0x9e84,	// (0x00050c82) lc0_navi_pane_ParamLimits

0x9e84,	// (0x00050c82) lc0_navi_pane

0x9eee,	// (0x00050cec) lc0_stat_indi_pane_ParamLimits

0x9eee,	// (0x00050cec) lc0_stat_indi_pane

0x9f03,	// (0x00050d01) ls0_title_pane_ParamLimits

0x9f03,	// (0x00050d01) ls0_title_pane

0xba83,	// (0x00052881) bg_popup_sub_pane_cp14_ParamLimits

0x4dea,	// (0x0004bbe8) list_uniindi_pane_ParamLimits

0x4df6,	// (0x0004bbf4) uniindi_top_pane_ParamLimits

0x52ce,	// (0x0004c0cc) list_single_uniindi_pane_g1_ParamLimits

0x52e1,	// (0x0004c0df) list_single_uniindi_pane_t1_ParamLimits

0x8d98,	// (0x0004fb96) lc0_stat_clock_pane_ParamLimits

0x8d98,	// (0x0004fb96) lc0_stat_clock_pane

0x9456,	// (0x00050254) lc0_stat_indi_pane_g1_ParamLimits

0x9456,	// (0x00050254) lc0_stat_indi_pane_g1

0x9463,	// (0x00050261) lc0_stat_indi_pane_g2_ParamLimits

0x9463,	// (0x00050261) lc0_stat_indi_pane_g2

0x0001,

0xfdf5,	// (0x00056bf3) lc0_stat_indi_pane_g_ParamLimits

0xfdf5,	// (0x00056bf3) lc0_stat_indi_pane_g

0x8da5,	// (0x0004fba3) lc0_uni_indicator_pane_ParamLimits

0x8da5,	// (0x0004fba3) lc0_uni_indicator_pane

0x6015,	// (0x0004ce13) ls0_title_pane_g1_ParamLimits

0x6015,	// (0x0004ce13) ls0_title_pane_g1

0x9470,	// (0x0005026e) ls0_title_pane_t1_ParamLimits

0x9470,	// (0x0005026e) ls0_title_pane_t1

0x8db2,	// (0x0004fbb0) lc0_uni_indicator_pane_g1_ParamLimits

0x8db2,	// (0x0004fbb0) lc0_uni_indicator_pane_g1

0x6029,	// (0x0004ce27) lc0_stat_clock_pane_t1

0x04e8,	// (0x000472e6) main_ai5_pane

0x6037,	// (0x0004ce35) ai5_sk_pane_ParamLimits

0x6037,	// (0x0004ce35) ai5_sk_pane

0x949e,	// (0x0005029c) cell_ai5_widget_pane_ParamLimits

0x949e,	// (0x0005029c) cell_ai5_widget_pane

0x6044,	// (0x0004ce42) aid_size_cell_widget_grid

0x605a,	// (0x0004ce58) bg_ai5_widget_pane_ParamLimits

0x605a,	// (0x0004ce58) bg_ai5_widget_pane

0x60c4,	// (0x0004cec2) cell_ai5_widget_pane_g2

0x60d4,	// (0x0004ced2) cell_ai5_widget_pane_g3

0x60f3,	// (0x0004cef1) cell_ai5_widget_pane_g4

0x60ff,	// (0x0004cefd) cell_ai5_widget_pane_g5

0x610b,	// (0x0004cf09) cell_ai5_widget_pane_g6

0x6117,	// (0x0004cf15) cell_ai5_widget_pane_g7

0x615f,	// (0x0004cf5d) cell_ai5_widget_pane_t1_ParamLimits

0x615f,	// (0x0004cf5d) cell_ai5_widget_pane_t1

0x617c,	// (0x0004cf7a) cell_ai5_widget_pane_t2_ParamLimits

0x617c,	// (0x0004cf7a) cell_ai5_widget_pane_t2

0x6194,	// (0x0004cf92) cell_ai5_widget_pane_t3_ParamLimits

0x6194,	// (0x0004cf92) cell_ai5_widget_pane_t3

0x61ac,	// (0x0004cfaa) cell_ai5_widget_pane_t4_ParamLimits

0x61ac,	// (0x0004cfaa) cell_ai5_widget_pane_t4

0x61c6,	// (0x0004cfc4) cell_ai5_widget_pane_t5_ParamLimits

0x61c6,	// (0x0004cfc4) cell_ai5_widget_pane_t5

0x61e5,	// (0x0004cfe3) cell_ai5_widget_pane_t6_ParamLimits

0x61e5,	// (0x0004cfe3) cell_ai5_widget_pane_t6

0x61f7,	// (0x0004cff5) cell_ai5_widget_pane_t7_ParamLimits

0x61f7,	// (0x0004cff5) cell_ai5_widget_pane_t7

0x6210,	// (0x0004d00e) cell_ai5_widget_pane_t8_ParamLimits

0x6210,	// (0x0004d00e) cell_ai5_widget_pane_t8

0x0009,

0xfe0f,	// (0x00056c0d) cell_ai5_widget_pane_t_ParamLimits

0xfe0f,	// (0x00056c0d) cell_ai5_widget_pane_t

0x625c,	// (0x0004d05a) grid_ai5_widget_pane

0xba83,	// (0x00052881) highlight_cell_ai5_widget_pane_ParamLimits

0xba83,	// (0x00052881) highlight_cell_ai5_widget_pane

0x9509,	// (0x00050307) ai5_sk_left_pane

0x9513,	// (0x00050311) ai5_sk_middle_pane

0x951d,	// (0x0005031b) ai5_sk_right_pane

0x6270,	// (0x0004d06e) bg_ai5_widget_pane_g1_ParamLimits

0x6270,	// (0x0004d06e) bg_ai5_widget_pane_g1

0x627c,	// (0x0004d07a) bg_ai5_widget_pane_g2_ParamLimits

0x627c,	// (0x0004d07a) bg_ai5_widget_pane_g2

0x6288,	// (0x0004d086) bg_ai5_widget_pane_g3_ParamLimits

0x6288,	// (0x0004d086) bg_ai5_widget_pane_g3

0x6294,	// (0x0004d092) bg_ai5_widget_pane_g4_ParamLimits

0x6294,	// (0x0004d092) bg_ai5_widget_pane_g4

0x62a0,	// (0x0004d09e) bg_ai5_widget_pane_g5_ParamLimits

0x62a0,	// (0x0004d09e) bg_ai5_widget_pane_g5

0x62ac,	// (0x0004d0aa) bg_ai5_widget_pane_g6_ParamLimits

0x62ac,	// (0x0004d0aa) bg_ai5_widget_pane_g6

0x62b8,	// (0x0004d0b6) bg_ai5_widget_pane_g7_ParamLimits

0x62b8,	// (0x0004d0b6) bg_ai5_widget_pane_g7

0x62c4,	// (0x0004d0c2) bg_ai5_widget_pane_g8_ParamLimits

0x62c4,	// (0x0004d0c2) bg_ai5_widget_pane_g8

0x62d0,	// (0x0004d0ce) bg_ai5_widget_pane_g9_ParamLimits

0x62d0,	// (0x0004d0ce) bg_ai5_widget_pane_g9

0x0008,

0xfe24,	// (0x00056c22) bg_ai5_widget_pane_g_ParamLimits

0xfe24,	// (0x00056c22) bg_ai5_widget_pane_g

0x6303,	// (0x0004d101) cell_shortcut_ai5_widget_pane_ParamLimits

0x6303,	// (0x0004d101) cell_shortcut_ai5_widget_pane

0xc46c,	// (0x0005326a) bg_cell_shortcut_ai5_widget_pane

0x6314,	// (0x0004d112) cell_grid_ai5_widget_pane_g1

0x631d,	// (0x0004d11b) highlight_cell_shortcut_ai5_widget_pane

0xc8a6,	// (0x000536a4) ai5_sk_left_pane_g1

0x6325,	// (0x0004d123) ai5_sk_left_pane_g2

0x632d,	// (0x0004d12b) ai5_sk_left_pane_g3

0x6335,	// (0x0004d133) ai5_sk_left_pane_g4

0x0003,

0xfe37,	// (0x00056c35) ai5_sk_left_pane_g

0x633d,	// (0x0004d13b) ai5_sk_left_pane_t1

0xc8ae,	// (0x000536ac) ai5_sk_right_pane_g1

0x634b,	// (0x0004d149) ai5_sk_right_pane_g2

0x6353,	// (0x0004d151) ai5_sk_right_pane_g3

0x635b,	// (0x0004d159) ai5_sk_right_pane_g4

0x0003,

0xfe40,	// (0x00056c3e) ai5_sk_right_pane_g

0x6363,	// (0x0004d161) ai5_sk_right_pane_t1

0xc8ae,	// (0x000536ac) ai5_sk_middle_pane_g1

0xc8a6,	// (0x000536a4) ai5_sk_middle_pane_g2

0xc8c6,	// (0x000536c4) ai5_sk_middle_pane_g3

0x6353,	// (0x0004d151) ai5_sk_middle_pane_g4

0x632d,	// (0x0004d12b) ai5_sk_middle_pane_g5

0x6371,	// (0x0004d16f) ai5_sk_middle_pane_g6

0x9527,	// (0x00050325) ai5_sk_middle_pane_g7

0x0006,

0xfe49,	// (0x00056c47) ai5_sk_middle_pane_g

0x9d70,	// (0x00050b6e) aid_touch_area_size_lc0_ParamLimits

0x9d70,	// (0x00050b6e) aid_touch_area_size_lc0

0x20fa,	// (0x00048ef8) cell_hwr_candidate_pane_t1_ParamLimits

0xc6d8,	// (0x000534d6) aid_touch_navi_pane

0x9ff6,	// (0x00050df4) status_dt_navi_pane_ParamLimits

0x9ff6,	// (0x00050df4) status_dt_navi_pane

0xa00e,	// (0x00050e0c) status_dt_sta_pane_ParamLimits

0xa00e,	// (0x00050e0c) status_dt_sta_pane

0x952f,	// (0x0005032d) dt_sta_controll_pane

0x953c,	// (0x0005033a) dt_sta_indi_pane

0x9549,	// (0x00050347) dt_sta_title_pane

0xb148,	// (0x00051f46) bg_dt_sta_indi_pane_ParamLimits

0xb148,	// (0x00051f46) bg_dt_sta_indi_pane

0x6379,	// (0x0004d177) dt_sta_battery_pane

0x6381,	// (0x0004d17f) dt_sta_indi_pane_g1

0x638a,	// (0x0004d188) dt_sta_indi_pane_g2

0x6393,	// (0x0004d191) dt_sta_indi_pane_g3

0x0002,

0xfe58,	// (0x00056c56) dt_sta_indi_pane_g

0x639c,	// (0x0004d19a) dt_sta_signal_pane

0xba83,	// (0x00052881) bg_dt_sta_title_pane_ParamLimits

0xba83,	// (0x00052881) bg_dt_sta_title_pane

0xd56a,	// (0x00054368) dt_sta_title_pane_g1

0x63a5,	// (0x0004d1a3) dt_sta_title_pane_t1_ParamLimits

0x63a5,	// (0x0004d1a3) dt_sta_title_pane_t1

0xafa5,	// (0x00051da3) bg_dt_sta_control_pane

0x63ba,	// (0x0004d1b8) dt_sta_controll_pane_g1

0x63c3,	// (0x0004d1c1) bg_dt_sta_title_pane_g1

0x63cc,	// (0x0004d1ca) bg_dt_sta_title_pane_g2

0x63d5,	// (0x0004d1d3) bg_dt_sta_title_pane_g3

0x0002,

0xfe5f,	// (0x00056c5d) bg_dt_sta_title_pane_g

0xe747,	// (0x00055545) bg_dt_sta_indi_pane_g1

0x63de,	// (0x0004d1dc) dt_sta_signal_pane_g1

0x63e6,	// (0x0004d1e4) dt_sta_signal_pane_g2

0x0001,

0xfe66,	// (0x00056c64) dt_sta_signal_pane_g

0x63ee,	// (0x0004d1ec) dt_sta_battery_pane_g1

0x63f7,	// (0x0004d1f5) dt_sta_battery_pane_t1

0xe747,	// (0x00055545) bg_dt_sta_control_pane_g1

0xc05d,	// (0x00052e5b) fep_china_uni_eep_pane

0xc065,	// (0x00052e63) fep_china_uni_entry_pane_ParamLimits

0xc075,	// (0x00052e73) popup_fep_china_uni_window_g1_ParamLimits

0xc085,	// (0x00052e83) popup_fep_china_uni_window_g2_ParamLimits

0xc085,	// (0x00052e83) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x00056526) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x00056526) popup_fep_china_uni_window_g

0x6406,	// (0x0004d204) fep_china_uni_eep_pane_g1

0x640e,	// (0x0004d20c) fep_china_uni_eep_pane_t1

0x5ff6,	// (0x0004cdf4) aid_touch_area_size_smil_player

0xc789,	// (0x00053587) lc0_clock_pane

0xc7c2,	// (0x000535c0) status_pane_g5_ParamLimits

0xc7c2,	// (0x000535c0) status_pane_g5

0x81a6,	// (0x0004efa4) popup_keymap_window

0xc7a2,	// (0x000535a0) status_icon_pane

0x60d4,	// (0x0004ced2) cell_ai5_widget_pane_g3_ParamLimits

0x60f3,	// (0x0004cef1) cell_ai5_widget_pane_g4_ParamLimits

0x60ff,	// (0x0004cefd) cell_ai5_widget_pane_g5_ParamLimits

0x6123,	// (0x0004cf21) cell_ai5_widget_pane_g8_ParamLimits

0x6123,	// (0x0004cf21) cell_ai5_widget_pane_g8

0x6137,	// (0x0004cf35) cell_ai5_widget_pane_g9_ParamLimits

0x6137,	// (0x0004cf35) cell_ai5_widget_pane_g9

0x614b,	// (0x0004cf49) cell_ai5_widget_pane_g10_ParamLimits

0x614b,	// (0x0004cf49) cell_ai5_widget_pane_g10

0x641d,	// (0x0004d21b) status_icon_pane_g1

0xafa5,	// (0x00051da3) bg_popup_sub_pane_cp13

0x6425,	// (0x0004d223) popup_keymap_window_t1

0x9cfa,	// (0x00050af8) control_pane_g6_ParamLimits

0x9cfa,	// (0x00050af8) control_pane_g6

0x9d07,	// (0x00050b05) control_pane_g7_ParamLimits

0x9d07,	// (0x00050b05) control_pane_g7

0x9d14,	// (0x00050b12) control_pane_g8_ParamLimits

0x9d14,	// (0x00050b12) control_pane_g8

0x952f,	// (0x0005032d) dt_sta_controll_pane_ParamLimits

0x953c,	// (0x0005033a) dt_sta_indi_pane_ParamLimits

0x9549,	// (0x00050347) dt_sta_title_pane_ParamLimits

0xb9b9,	// (0x000527b7) aid_size_touch_scroll_bar_cale

0x05c1,	// (0x000473bf) popup_discreet_window_ParamLimits

0x05c1,	// (0x000473bf) popup_discreet_window

0x7893,	// (0x0004e691) popup_sk_window

0xce73,	// (0x00053c71) bg_popup_sub_pane_cp28_ParamLimits

0xce73,	// (0x00053c71) bg_popup_sub_pane_cp28

0x6433,	// (0x0004d231) popup_discreet_window_g1_ParamLimits

0x6433,	// (0x0004d231) popup_discreet_window_g1

0x6453,	// (0x0004d251) popup_discreet_window_t1_ParamLimits

0x6453,	// (0x0004d251) popup_discreet_window_t1

0x6471,	// (0x0004d26f) popup_discreet_window_t2_ParamLimits

0x6471,	// (0x0004d26f) popup_discreet_window_t2

0x0002,

0xfe6b,	// (0x00056c69) popup_discreet_window_t_ParamLimits

0xfe6b,	// (0x00056c69) popup_discreet_window_t

0x2ae3,	// (0x000498e1) popup_sk_window_g1

0x2aed,	// (0x000498eb) popup_sk_window_g2

0x0001,

0xfe72,	// (0x00056c70) popup_sk_window_g

0x2af7,	// (0x000498f5) popup_sk_window_t1

0x2b05,	// (0x00049903) popup_sk_window_t1_copy1

0x60c4,	// (0x0004cec2) cell_ai5_widget_pane_g2_ParamLimits

0x6222,	// (0x0004d020) cell_ai5_widget_pane_t9_ParamLimits

0x6222,	// (0x0004d020) cell_ai5_widget_pane_t9

0xafa5,	// (0x00051da3) main_fep_fshwr2_pane

0x8de1,	// (0x0004fbdf) aid_fshwr2_btn_pane

0x8df0,	// (0x0004fbee) aid_fshwr2_syb_pane

0x8e02,	// (0x0004fc00) aid_fshwr2_txt_pane

0x8e11,	// (0x0004fc0f) fshwr2_func_candi_pane

0x8e22,	// (0x0004fc20) fshwr2_hwr_syb_pane

0x8e3d,	// (0x0004fc3b) fshwr2_icf_pane

0xafa5,	// (0x00051da3) fshwr2_icf_bg_pane

0x9b3a,	// (0x00050938) fshwr2_icf_pane_t1_ParamLimits

0x9b3a,	// (0x00050938) fshwr2_icf_pane_t1

0xe747,	// (0x00055545) fshwr2_func_candi_pane_g1

0x64c3,	// (0x0004d2c1) fshwr2_func_candi_row_pane_ParamLimits

0x64c3,	// (0x0004d2c1) fshwr2_func_candi_row_pane

0x9b54,	// (0x00050952) cell_fshwr2_syb_pane_ParamLimits

0x9b54,	// (0x00050952) cell_fshwr2_syb_pane

0xe9b0,	// (0x000557ae) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe9b0,	// (0x000557ae) fshwr2_hwr_syb_pane_g1

0xafa5,	// (0x00051da3) bg_popup_call_pane_cp01

0x64d4,	// (0x0004d2d2) fshwr2_func_candi_cell_pane_ParamLimits

0x64d4,	// (0x0004d2d2) fshwr2_func_candi_cell_pane

0x6505,	// (0x0004d303) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6505,	// (0x0004d303) fshwr2_func_candi_cell_bg_pane

0x651f,	// (0x0004d31d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x651f,	// (0x0004d31d) fshwr2_func_candi_cell_pane_g1

0x653f,	// (0x0004d33d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x653f,	// (0x0004d33d) fshwr2_func_candi_cell_pane_t1

0xafa5,	// (0x00051da3) bg_button_pane_cp08

0xc46c,	// (0x0005326a) cell_fshwr2_syb_bg_pane

0x9b6e,	// (0x0005096c) cell_fshwr2_syb_bg_pane_g1

0x6552,	// (0x0004d350) cell_fshwr2_syb_bg_pane_t1

0xba83,	// (0x00052881) main_tmo_pane

0xa395,	// (0x00051193) uni_indicator_pane_g1_ParamLimits

0xa3aa,	// (0x000511a8) uni_indicator_pane_g2_ParamLimits

0xd848,	// (0x00054646) uni_indicator_pane_g3_ParamLimits

0xd85e,	// (0x0005465c) uni_indicator_pane_g4_ParamLimits

0xd85e,	// (0x0005465c) uni_indicator_pane_g4

0xd872,	// (0x00054670) uni_indicator_pane_g5_ParamLimits

0xd872,	// (0x00054670) uni_indicator_pane_g5

0xd886,	// (0x00054684) uni_indicator_pane_g6_ParamLimits

0xd886,	// (0x00054684) uni_indicator_pane_g6

0xf927,	// (0x00056725) uni_indicator_pane_g_ParamLimits

0xad11,	// (0x00051b0f) popup_tmo_note_window_ParamLimits

0xad11,	// (0x00051b0f) popup_tmo_note_window

0x2365,	// (0x00049163) fshwr2_bg_pane

0x6530,	// (0x0004d32e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6530,	// (0x0004d32e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe77,	// (0x00056c75) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe77,	// (0x00056c75) fshwr2_func_candi_cell_pane_g

0xe747,	// (0x00055545) bg_popup_window_pane_cp01

0x6561,	// (0x0004d35f) bg_popup_window_pane_g1_cp01

0x656a,	// (0x0004d368) bg_popup_window_pane_cp22_ParamLimits

0x656a,	// (0x0004d368) bg_popup_window_pane_cp22

0x6578,	// (0x0004d376) listscroll_tmo_link_pane_ParamLimits

0x6578,	// (0x0004d376) listscroll_tmo_link_pane

0x65b8,	// (0x0004d3b6) popup_tmo_note_window_g1_ParamLimits

0x65b8,	// (0x0004d3b6) popup_tmo_note_window_g1

0x65c5,	// (0x0004d3c3) tmo_note_info_pane_ParamLimits

0x65c5,	// (0x0004d3c3) tmo_note_info_pane

0x9b76,	// (0x00050974) list_tmo_note_info_pane_g1_ParamLimits

0x9b76,	// (0x00050974) list_tmo_note_info_pane_g1

0x65df,	// (0x0004d3dd) list_tmo_note_info_pane_g2_ParamLimits

0x65df,	// (0x0004d3dd) list_tmo_note_info_pane_g2

0x0001,

0xfe7c,	// (0x00056c7a) list_tmo_note_info_pane_g_ParamLimits

0xfe7c,	// (0x00056c7a) list_tmo_note_info_pane_g

0x65fb,	// (0x0004d3f9) list_tmo_note_info_text_pane_ParamLimits

0x65fb,	// (0x0004d3f9) list_tmo_note_info_text_pane

0x663d,	// (0x0004d43b) list_tmo_link_pane

0x664a,	// (0x0004d448) scroll_pane_cp20

0x6657,	// (0x0004d455) list_single_tmo_link_pane_ParamLimits

0x6657,	// (0x0004d455) list_single_tmo_link_pane

0x6667,	// (0x0004d465) list_single_tmo_link_pane_t1

0x6675,	// (0x0004d473) list_tmo_note_info_text_pane_t1_ParamLimits

0x6675,	// (0x0004d473) list_tmo_note_info_text_pane_t1

0x991b,	// (0x00050719) aid_size_touch_scroll_bar_cp01_ParamLimits

0x991b,	// (0x00050719) aid_size_touch_scroll_bar_cp01

0x7d59,	// (0x0004eb57) aid_size_touch_slider_marker

0x7883,	// (0x0004e681) popup_settings_window_ParamLimits

0x7883,	// (0x0004e681) popup_settings_window

0x33d5,	// (0x0004a1d3) popup_candi_list_indi_window

0xc6d8,	// (0x000534d6) aid_touch_navi_pane_ParamLimits

0x22c0,	// (0x000490be) rs_clock_indi_pane

0x22c9,	// (0x000490c7) sctrl_sk_bottom_pane_ParamLimits

0x22da,	// (0x000490d8) sctrl_sk_top_pane_ParamLimits

0x23dd,	// (0x000491db) popup_fep_tooltip_window

0x6044,	// (0x0004ce42) aid_size_cell_widget_grid_ParamLimits

0x60b8,	// (0x0004ceb6) cell_ai5_widget_pane_g1_ParamLimits

0x60b8,	// (0x0004ceb6) cell_ai5_widget_pane_g1

0x610b,	// (0x0004cf09) cell_ai5_widget_pane_g6_ParamLimits

0x6117,	// (0x0004cf15) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfdfa,	// (0x00056bf8) cell_ai5_widget_pane_g_ParamLimits

0xfdfa,	// (0x00056bf8) cell_ai5_widget_pane_g

0x6246,	// (0x0004d044) cell_ai5_widget_pane_t10_ParamLimits

0x6246,	// (0x0004d044) cell_ai5_widget_pane_t10

0x625c,	// (0x0004d05a) grid_ai5_widget_pane_ParamLimits

0x62dc,	// (0x0004d0da) cell_contacts_ai5_widget_pane_ParamLimits

0x62dc,	// (0x0004d0da) cell_contacts_ai5_widget_pane

0x6486,	// (0x0004d284) popup_discreet_window_t3_ParamLimits

0x6486,	// (0x0004d284) popup_discreet_window_t3

0x2b7d,	// (0x0004997b) popup_fshwr2_char_preview_window_ParamLimits

0x2b7d,	// (0x0004997b) popup_fshwr2_char_preview_window

0x9b8d,	// (0x0005098b) tmo_note_info_pane_t1

0x9ba2,	// (0x000509a0) tmo_note_info_pane_t2

0x9bbb,	// (0x000509b9) tmo_note_info_pane_t3

0x6619,	// (0x0004d417) tmo_note_info_pane_t4

0x662b,	// (0x0004d429) tmo_note_info_pane_t5

0x0004,

0xfe81,	// (0x00056c7f) tmo_note_info_pane_t

0x663d,	// (0x0004d43b) list_tmo_link_pane_ParamLimits

0x664a,	// (0x0004d448) scroll_pane_cp20_ParamLimits

0xafa5,	// (0x00051da3) bg_popup_fep_char_preview_window_cp01

0x668e,	// (0x0004d48c) popup_fshwr2_char_preview_window_t1

0x669c,	// (0x0004d49a) popup_candi_list_indi_window_g1

0x66a5,	// (0x0004d4a3) bg_cell_contacts_ai5_widget_pane

0x66b1,	// (0x0004d4af) cell_contacts_ai5_widget_pane_g1

0x66c4,	// (0x0004d4c2) cell_contacts_ai5_widget_pane_g2

0x66d0,	// (0x0004d4ce) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe8c,	// (0x00056c8a) cell_contacts_ai5_widget_pane_g

0x66e2,	// (0x0004d4e0) cell_contacts_ai5_widget_pane_t1

0xba83,	// (0x00052881) highlight_cell_shortcut_ai5_widget_pane_cp01

0x675c,	// (0x0004d55a) settings_container_pane

0xc46c,	// (0x0005326a) listscroll_set_pane_copy1

0xe072,	// (0x00054e70) scroll_pane_cp121_copy1

0x6768,	// (0x0004d566) set_content_pane_copy1

0x6770,	// (0x0004d56e) aid_height_set_list_copy1_ParamLimits

0x6770,	// (0x0004d56e) aid_height_set_list_copy1

0xd0a0,	// (0x00053e9e) aid_size_parent_copy1_ParamLimits

0xd0a0,	// (0x00053e9e) aid_size_parent_copy1

0x677c,	// (0x0004d57a) button_value_adjust_pane_cp6_copy1_ParamLimits

0x677c,	// (0x0004d57a) button_value_adjust_pane_cp6_copy1

0xbbe7,	// (0x000529e5) list_highlight_pane_cp2_copy1_ParamLimits

0xbbe7,	// (0x000529e5) list_highlight_pane_cp2_copy1

0x6790,	// (0x0004d58e) list_set_pane_copy1_ParamLimits

0x6790,	// (0x0004d58e) list_set_pane_copy1

0x66f7,	// (0x0004d4f5) main_pane_set_t1_copy1_ParamLimits

0x66f7,	// (0x0004d4f5) main_pane_set_t1_copy1

0x6731,	// (0x0004d52f) main_pane_set_t2_copy1_ParamLimits

0x6731,	// (0x0004d52f) main_pane_set_t2_copy1

0x683d,	// (0x0004d63b) main_pane_set_t3_copy1

0x684b,	// (0x0004d649) main_pane_set_t4_copy1

0x6750,	// (0x0004d54e) set_content_pane_g1_copy1_ParamLimits

0x6750,	// (0x0004d54e) set_content_pane_g1_copy1

0x6859,	// (0x0004d657) setting_code_pane_copy1

0x6861,	// (0x0004d65f) setting_slider_graphic_pane_copy1

0x6861,	// (0x0004d65f) setting_slider_pane_copy1

0x6861,	// (0x0004d65f) setting_text_pane_copy1

0x6861,	// (0x0004d65f) setting_volume_pane_copy1

0x6859,	// (0x0004d657) settings_code_pane_cp2_copy1

0x6869,	// (0x0004d667) settings_code_pane_cp_copy1_ParamLimits

0x6869,	// (0x0004d667) settings_code_pane_cp_copy1

0x687d,	// (0x0004d67b) volume_set_pane_copy1

0x6885,	// (0x0004d683) volume_set_pane_g10_copy1

0x688d,	// (0x0004d68b) volume_set_pane_g1_copy1

0x6895,	// (0x0004d693) volume_set_pane_g2_copy1

0x689d,	// (0x0004d69b) volume_set_pane_g3_copy1

0x68a5,	// (0x0004d6a3) volume_set_pane_g4_copy1

0x68ad,	// (0x0004d6ab) volume_set_pane_g5_copy1

0x68b5,	// (0x0004d6b3) volume_set_pane_g6_copy1

0x68bd,	// (0x0004d6bb) volume_set_pane_g7_copy1

0x68c5,	// (0x0004d6c3) volume_set_pane_g8_copy1

0x68cd,	// (0x0004d6cb) volume_set_pane_g9_copy1

0xb015,	// (0x00051e13) bg_set_opt_pane_cp_copy1_ParamLimits

0xb015,	// (0x00051e13) bg_set_opt_pane_cp_copy1

0x68d5,	// (0x0004d6d3) setting_slider_pane_t1_copy1_ParamLimits

0x68d5,	// (0x0004d6d3) setting_slider_pane_t1_copy1

0x68f3,	// (0x0004d6f1) setting_slider_pane_t2_copy1_ParamLimits

0x68f3,	// (0x0004d6f1) setting_slider_pane_t2_copy1

0x690d,	// (0x0004d70b) setting_slider_pane_t3_copy1_ParamLimits

0x690d,	// (0x0004d70b) setting_slider_pane_t3_copy1

0x6925,	// (0x0004d723) slider_set_pane_copy1_ParamLimits

0x6925,	// (0x0004d723) slider_set_pane_copy1

0xbade,	// (0x000528dc) set_opt_bg_pane_g1_copy2

0xbae6,	// (0x000528e4) set_opt_bg_pane_g2_copy2

0x693b,	// (0x0004d739) set_opt_bg_pane_g3_copy2

0xbaf6,	// (0x000528f4) set_opt_bg_pane_g4_copy2

0xbafe,	// (0x000528fc) set_opt_bg_pane_g5_copy2

0xbb06,	// (0x00052904) set_opt_bg_pane_g6_copy2

0x6945,	// (0x0004d743) set_opt_bg_pane_g7_copy2

0x694d,	// (0x0004d74b) set_opt_bg_pane_g8_copy2

0x6957,	// (0x0004d755) set_opt_bg_pane_g9_copy2

0x6961,	// (0x0004d75f) aid_size_touch_slider_mark_copy1_ParamLimits

0x6961,	// (0x0004d75f) aid_size_touch_slider_mark_copy1

0x6975,	// (0x0004d773) slider_set_pane_g1_copy1

0x697e,	// (0x0004d77c) slider_set_pane_g2_copy1

0xe404,	// (0x00055202) slider_set_pane_g3_copy1_ParamLimits

0xe404,	// (0x00055202) slider_set_pane_g3_copy1

0xe418,	// (0x00055216) slider_set_pane_g4_copy1_ParamLimits

0xe418,	// (0x00055216) slider_set_pane_g4_copy1

0xe430,	// (0x0005522e) slider_set_pane_g5_copy1_ParamLimits

0xe430,	// (0x0005522e) slider_set_pane_g5_copy1

0xe404,	// (0x00055202) slider_set_pane_g6_copy1_ParamLimits

0xe404,	// (0x00055202) slider_set_pane_g6_copy1

0x6986,	// (0x0004d784) slider_set_pane_g7_copy1_ParamLimits

0x6986,	// (0x0004d784) slider_set_pane_g7_copy1

0xafb9,	// (0x00051db7) bg_set_opt_pane_cp2_copy1

0x699c,	// (0x0004d79a) setting_slider_graphic_pane_g1_copy1

0x69a5,	// (0x0004d7a3) setting_slider_graphic_pane_t1_copy1

0x69b5,	// (0x0004d7b3) setting_slider_graphic_pane_t2_copy1

0x69c5,	// (0x0004d7c3) slider_set_pane_cp_copy1

0x69d5,	// (0x0004d7d3) input_focus_pane_cp1_copy1

0x69de,	// (0x0004d7dc) list_set_text_pane_copy1

0x69e6,	// (0x0004d7e4) setting_text_pane_g1_copy1

0x4074,	// (0x0004ae72) set_text_pane_t1_copy1

0x69d5,	// (0x0004d7d3) input_focus_pane_cp2_copy1

0x69e6,	// (0x0004d7e4) setting_code_pane_g1_copy1

0x69ef,	// (0x0004d7ed) setting_code_pane_t1_copy1

0xd08c,	// (0x00053e8a) list_set_graphic_pane_copy1

0xafb9,	// (0x00051db7) bg_set_opt_pane_cp4_copy1

0xc1f0,	// (0x00052fee) list_set_graphic_pane_g1_copy1_ParamLimits

0xc1f0,	// (0x00052fee) list_set_graphic_pane_g1_copy1

0x69fd,	// (0x0004d7fb) list_set_graphic_pane_g2_copy1

0xc208,	// (0x00053006) list_set_graphic_pane_t1_copy1_ParamLimits

0xc208,	// (0x00053006) list_set_graphic_pane_t1_copy1

0xe747,	// (0x00055545) rs_clock_indi_pane_g1

0x6a05,	// (0x0004d803) rs_clock_indi_pane_t1

0x6a13,	// (0x0004d811) rs_indi_pane

0x6a1b,	// (0x0004d819) rs_indi_pane_g1

0x6a24,	// (0x0004d822) rs_indi_pane_g2

0x6a2d,	// (0x0004d82b) rs_indi_pane_g3

0x0002,

0xfe93,	// (0x00056c91) rs_indi_pane_g

0xc46c,	// (0x0005326a) bg_popup_preview_window_pane_cp03

0x6a36,	// (0x0004d834) popup_fep_tooltip_window_t1

0xf104,	// (0x00055f02) popup_note2_window_g2_ParamLimits

0xf104,	// (0x00055f02) popup_note2_window_g2

0x0001,

0xfc62,	// (0x00056a60) popup_note2_window_g_ParamLimits

0xfc62,	// (0x00056a60) popup_note2_window_g

0x4a3a,	// (0x0004b838) bg_popup_sub_pane_cp11_ParamLimits

0x4a47,	// (0x0004b845) cell_ai3_links_pane_g1_ParamLimits

0x4a5e,	// (0x0004b85c) cell_ai3_links_pane_t1

0x4074,	// (0x0004ae72) set_text_pane_t1_copy1_ParamLimits

0x9c2f,	// (0x00050a2d) cell_graphic_popup_pane_cp2_ParamLimits

0x9c2f,	// (0x00050a2d) cell_graphic_popup_pane_cp2

0x9bd0,	// (0x000509ce) cell_graphic_popup_pane_g1_cp2

0xb7cc,	// (0x000525ca) cell_graphic_popup_pane_g2_cp2

0x6a44,	// (0x0004d842) cell_graphic_popup_pane_g3_cp2

0x6a4c,	// (0x0004d84a) cell_graphic_popup_pane_t2_cp2

0xb7dd,	// (0x000525db) grid_highlight_pane_cp3_cp2

0xbd91,	// (0x00052b8f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xba83,	// (0x00052881) main_tmo_pane_ParamLimits

0xad05,	// (0x00051b03) popup_tmo_big_image_note_window

0x60a8,	// (0x0004cea6) cell_ai5_widget_list_pane

0x60b0,	// (0x0004ceae) cell_ai5_widget_lrg_icon_pane

0x9b8d,	// (0x0005098b) tmo_note_info_pane_t1_ParamLimits

0x9ba2,	// (0x000509a0) tmo_note_info_pane_t2_ParamLimits

0x9bbb,	// (0x000509b9) tmo_note_info_pane_t3_ParamLimits

0x6619,	// (0x0004d417) tmo_note_info_pane_t4_ParamLimits

0x662b,	// (0x0004d429) tmo_note_info_pane_t5_ParamLimits

0xfe81,	// (0x00056c7f) tmo_note_info_pane_t_ParamLimits

0x675c,	// (0x0004d55a) settings_container_pane_ParamLimits

0x69cd,	// (0x0004d7cb) indicator_popup_pane_cp5

0x69cd,	// (0x0004d7cb) indicator_popup_pane_cp6

0xd08c,	// (0x00053e8a) list_set_graphic_pane_copy1_ParamLimits

0xafa5,	// (0x00051da3) bg_popup_window_pane_cp23

0x6a5a,	// (0x0004d858) popup_tmo_big_image_note_window_g1

0x6a65,	// (0x0004d863) popup_tmo_big_image_note_window_t1

0x6a75,	// (0x0004d873) popup_tmo_big_image_note_window_t2

0x6a85,	// (0x0004d883) popup_tmo_big_image_note_window_t3

0x0002,

0xfe9a,	// (0x00056c98) popup_tmo_big_image_note_window_t

0x6a95,	// (0x0004d893) cell_ai5_widget_lrg_icon_pane_g1

0x6a9d,	// (0x0004d89b) cell_ai5_widget_lrg_icon_pane_t1

0x6aab,	// (0x0004d8a9) cell_ai5_widget_list_row_pane_ParamLimits

0x6aab,	// (0x0004d8a9) cell_ai5_widget_list_row_pane

0x6ac4,	// (0x0004d8c2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x6ac4,	// (0x0004d8c2) cell_ai5_widget_list_row_pane_g1

0x6ad1,	// (0x0004d8cf) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x6ad1,	// (0x0004d8cf) cell_ai5_widget_list_row_pane_t1

0x6ae9,	// (0x0004d8e7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6ae9,	// (0x0004d8e7) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea1,	// (0x00056c9f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea1,	// (0x00056c9f) cell_ai5_widget_list_row_pane_t

0x04e8,	// (0x000472e6) main_fep_vtchi_ss_pane

0x6b20,	// (0x0004d91e) popup_fep_char_pre_window

0x6b28,	// (0x0004d926) popup_fep_ituss_window

0x6b49,	// (0x0004d947) popup_fep_vkbss_window

0x6b68,	// (0x0004d966) grid_vkbss_keypad_pane_ParamLimits

0x6b68,	// (0x0004d966) grid_vkbss_keypad_pane

0x6b78,	// (0x0004d976) ituss_keypad_pane

0x6b94,	// (0x0004d992) aid_vkbss_key_offset_ParamLimits

0x6b94,	// (0x0004d992) aid_vkbss_key_offset

0x6ba0,	// (0x0004d99e) cell_vkbss_key_pane_ParamLimits

0x6ba0,	// (0x0004d99e) cell_vkbss_key_pane

0xd080,	// (0x00053e7e) bg_cell_vkbss_key_g1_ParamLimits

0xd080,	// (0x00053e7e) bg_cell_vkbss_key_g1

0x6bb6,	// (0x0004d9b4) cell_vkbss_key_3p_pane_ParamLimits

0x6bb6,	// (0x0004d9b4) cell_vkbss_key_3p_pane

0x6bd0,	// (0x0004d9ce) cell_vkbss_key_g1_ParamLimits

0x6bd0,	// (0x0004d9ce) cell_vkbss_key_g1

0x6bea,	// (0x0004d9e8) cell_vkbss_key_t1_ParamLimits

0x6bea,	// (0x0004d9e8) cell_vkbss_key_t1

0x6c15,	// (0x0004da13) cell_ituss_key_pane_ParamLimits

0x6c15,	// (0x0004da13) cell_ituss_key_pane

0x6c26,	// (0x0004da24) bg_cell_ituss_key_g1_ParamLimits

0x6c26,	// (0x0004da24) bg_cell_ituss_key_g1

0x6c32,	// (0x0004da30) cell_ituss_key_pane_g1_ParamLimits

0x6c32,	// (0x0004da30) cell_ituss_key_pane_g1

0x6c46,	// (0x0004da44) cell_ituss_key_pane_g2_ParamLimits

0x6c46,	// (0x0004da44) cell_ituss_key_pane_g2

0x0001,

0xfea8,	// (0x00056ca6) cell_ituss_key_pane_g_ParamLimits

0xfea8,	// (0x00056ca6) cell_ituss_key_pane_g

0x6c71,	// (0x0004da6f) cell_ituss_key_t1_ParamLimits

0x6c71,	// (0x0004da6f) cell_ituss_key_t1

0x6c9f,	// (0x0004da9d) cell_ituss_key_t2_ParamLimits

0x6c9f,	// (0x0004da9d) cell_ituss_key_t2

0x6cd0,	// (0x0004dace) cell_ituss_key_t3_ParamLimits

0x6cd0,	// (0x0004dace) cell_ituss_key_t3

0x6d01,	// (0x0004daff) cell_ituss_key_t4_ParamLimits

0x6d01,	// (0x0004daff) cell_ituss_key_t4

0x0003,

0xfead,	// (0x00056cab) cell_ituss_key_t_ParamLimits

0xfead,	// (0x00056cab) cell_ituss_key_t

0x6d32,	// (0x0004db30) cell_vkbss_key_3p_pane_g1

0x6d3a,	// (0x0004db38) cell_vkbss_key_3p_pane_g2

0x6d42,	// (0x0004db40) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeb6,	// (0x00056cb4) cell_vkbss_key_3p_pane_g

0xafa5,	// (0x00051da3) bg_popup_fep_char_preview_window_cp02

0x6d4a,	// (0x0004db48) popup_fep_char_pre_window_t1

0x94ff,	// (0x000502fd) main_ai5_sk_pane

0x66a5,	// (0x0004d4a3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x66b1,	// (0x0004d4af) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x66c4,	// (0x0004d4c2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x66d0,	// (0x0004d4ce) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe8c,	// (0x00056c8a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x66e2,	// (0x0004d4e0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xba83,	// (0x00052881) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x9bd8,	// (0x000509d6) main_ai5_sk_pane_g1

0xccb1,	// (0x00053aaf) popup_query_code_window_g1

0x6b3e,	// (0x0004d93c) popup_fep_vkb_icf_pane

0x6b52,	// (0x0004d950) popup_fep_vtchi_icf_pane

0xba83,	// (0x00052881) bg_icf_pane

0x6d59,	// (0x0004db57) list_vkb_icf_pane

0xba83,	// (0x00052881) bg_icf_pane_cp01

0x6d65,	// (0x0004db63) vtchi_icf_list_pane

0x6d76,	// (0x0004db74) list_vkb_icf_pane_t1_ParamLimits

0x6d76,	// (0x0004db74) list_vkb_icf_pane_t1

0x6d90,	// (0x0004db8e) vtchi_icf_list_pane_t1_ParamLimits

0x6d90,	// (0x0004db8e) vtchi_icf_list_pane_t1

0x6b28,	// (0x0004d926) popup_fep_ituss_window_ParamLimits

0x6b52,	// (0x0004d950) popup_fep_vtchi_icf_pane_ParamLimits

0x6b78,	// (0x0004d976) ituss_keypad_pane_ParamLimits

0x6b88,	// (0x0004d986) ituss_sks_pane

0xba83,	// (0x00052881) bg_icf_pane_ParamLimits

0x6b11,	// (0x0004d90f) icf_edit_indi_pane_ParamLimits

0x6b11,	// (0x0004d90f) icf_edit_indi_pane

0x6d59,	// (0x0004db57) list_vkb_icf_pane_ParamLimits

0xba83,	// (0x00052881) bg_icf_pane_cp01_ParamLimits

0x6b11,	// (0x0004d90f) icf_edit_indi_pane_cp01_ParamLimits

0x6b11,	// (0x0004d90f) icf_edit_indi_pane_cp01

0x6d6d,	// (0x0004db6b) vtchi_query_pane

0xe9b0,	// (0x000557ae) icf_edit_indi_pane_g1_ParamLimits

0xe9b0,	// (0x000557ae) icf_edit_indi_pane_g1

0x6e21,	// (0x0004dc1f) icf_edit_indi_pane_g2_ParamLimits

0x6e21,	// (0x0004dc1f) icf_edit_indi_pane_g2

0x0001,

0xfece,	// (0x00056ccc) icf_edit_indi_pane_g_ParamLimits

0xfece,	// (0x00056ccc) icf_edit_indi_pane_g

0x6e30,	// (0x0004dc2e) icf_edit_indi_pane_t1

0x6db7,	// (0x0004dbb5) bg_input_focus_pane_cp042

0xb9b0,	// (0x000527ae) vtchi_button_pane

0x6dc0,	// (0x0004dbbe) vtchi_query_pane_t1

0x6dce,	// (0x0004dbcc) vtchi_query_pane_t2

0x6ddc,	// (0x0004dbda) vtchi_query_pane_t3

0x0002,

0xfebd,	// (0x00056cbb) vtchi_query_pane_t

0xafa5,	// (0x00051da3) bg_button_pane_cp13

0x6dea,	// (0x0004dbe8) vtchi_button_pane_g1

0x6df2,	// (0x0004dbf0) ituss_sks_pane_g1

0x6dfd,	// (0x0004dbfb) ituss_sks_pane_g2

0x0001,

0xfec4,	// (0x00056cc2) ituss_sks_pane_g

0x6e05,	// (0x0004dc03) ituss_sks_pane_t1

0x6e13,	// (0x0004dc11) ituss_sks_pane_t2

0x0001,

0xfec9,	// (0x00056cc7) ituss_sks_pane_t

0xe3b5,	// (0x000551b3) indicator_nsta_pane_cp_g1

0xe3be,	// (0x000551bc) indicator_nsta_pane_cp_g2

0xe3c6,	// (0x000551c4) indicator_nsta_pane_cp_g3

0xe3ce,	// (0x000551cc) indicator_nsta_pane_cp_g4

0xe3d6,	// (0x000551d4) indicator_nsta_pane_cp_g5

0xe3de,	// (0x000551dc) indicator_nsta_pane_cp_g6

0x0005,

0xfab3,	// (0x000568b1) indicator_nsta_pane_cp_g

0x9324,	// (0x00050122) cell_graphic2_pane_t2_ParamLimits

0x9324,	// (0x00050122) cell_graphic2_pane_t2

0x0001,

0xfd96,	// (0x00056b94) cell_graphic2_pane_t_ParamLimits

0xfd96,	// (0x00056b94) cell_graphic2_pane_t

0x935a,	// (0x00050158) cell_graphic2_control_pane_t1

0x9ab8,	// (0x000508b6) signal_pane_g3_ParamLimits

0x9ab8,	// (0x000508b6) signal_pane_g3

0x9acc,	// (0x000508ca) signal_pane_g4_ParamLimits

0x9acc,	// (0x000508ca) signal_pane_g4

0x6afb,	// (0x0004d8f9) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x6afb,	// (0x0004d8f9) cell_ai5_widget_list_row_pane_t3

0x6c5f,	// (0x0004da5d) cell_ituss_key_pane_t1_ParamLimits

0x6c5f,	// (0x0004da5d) cell_ituss_key_pane_t1

0xc9f3,	// (0x000537f1) form_field_data_wide_pane_vc_t2_ParamLimits

0xc9f3,	// (0x000537f1) form_field_data_wide_pane_vc_t2

0xca07,	// (0x00053805) form_field_data_wide_pane_vc_t3_ParamLimits

0xca07,	// (0x00053805) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0005660d) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0005660d) form_field_data_wide_pane_vc_t

0xe0e2,	// (0x00054ee0) form_field_slider_wide_pane_vc_t3_ParamLimits

0xe0e2,	// (0x00054ee0) form_field_slider_wide_pane_vc_t3

0xe1bc,	// (0x00054fba) form_field_popup_wide_pane_vc_t2_ParamLimits

0xe1bc,	// (0x00054fba) form_field_popup_wide_pane_vc_t2

0xe1d3,	// (0x00054fd1) form_field_popup_wide_pane_vc_t3_ParamLimits

0xe1d3,	// (0x00054fd1) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa2,	// (0x000568a0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x000568a0) form_field_popup_wide_pane_vc_t

0x8de1,	// (0x0004fbdf) aid_fshwr2_btn_pane_ParamLimits

0x8df0,	// (0x0004fbee) aid_fshwr2_syb_pane_ParamLimits

0x8e02,	// (0x0004fc00) aid_fshwr2_txt_pane_ParamLimits

0x2365,	// (0x00049163) fshwr2_bg_pane_ParamLimits

0x8e11,	// (0x0004fc0f) fshwr2_func_candi_pane_ParamLimits

0x8e22,	// (0x0004fc20) fshwr2_hwr_syb_pane_ParamLimits

0x8e3d,	// (0x0004fc3b) fshwr2_icf_pane_ParamLimits
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

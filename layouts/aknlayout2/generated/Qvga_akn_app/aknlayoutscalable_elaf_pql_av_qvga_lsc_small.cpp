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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000120ad };

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
0xaea7,	// (0x0001cf54) Screen

0xaeb1,	// (0x0001cf5e) application_window_ParamLimits

0xaeb1,	// (0x0001cf5e) application_window

0xdc7c,	// (0x0001fd29) screen_g1

0xaedf,	// (0x0001cf8c) area_bottom_pane_ParamLimits

0xaedf,	// (0x0001cf8c) area_bottom_pane

0xdc86,	// (0x0001fd33) area_top_pane_ParamLimits

0xdc86,	// (0x0001fd33) area_top_pane

0x4587,	// (0x00016634) main_pane_ParamLimits

0x4587,	// (0x00016634) main_pane

0xdcfe,	// (0x0001fdab) misc_graphics

0xbe78,	// (0x0001df25) battery_pane_ParamLimits

0xbe78,	// (0x0001df25) battery_pane

0x1846,	// (0x000138f3) bg_status_flat_pane_g8

0x184e,	// (0x000138fb) bg_status_flat_pane_g9

0x0fa0,	// (0x0001304d) context_pane_ParamLimits

0x0fa0,	// (0x0001304d) context_pane

0xbfd2,	// (0x0001e07f) navi_pane_ParamLimits

0xbfd2,	// (0x0001e07f) navi_pane

0xc047,	// (0x0001e0f4) signal_pane_ParamLimits

0xc047,	// (0x0001e0f4) signal_pane

0x0008,

0xf89f,	// (0x0002194c) bg_status_flat_pane_g

0xc0d3,	// (0x0001e180) status_pane_g1_ParamLimits

0xc0d3,	// (0x0001e180) status_pane_g1

0xc0df,	// (0x0001e18c) status_pane_g2_ParamLimits

0xc0df,	// (0x0001e18c) status_pane_g2

0x1006,	// (0x000130b3) status_pane_g3_ParamLimits

0x1006,	// (0x000130b3) status_pane_g3

0x0004,

0xf7e0,	// (0x0002188d) status_pane_g_ParamLimits

0xf7e0,	// (0x0002188d) status_pane_g

0xc0eb,	// (0x0001e198) title_pane_ParamLimits

0xc0eb,	// (0x0001e198) title_pane

0xc146,	// (0x0001e1f3) uni_indicator_pane_ParamLimits

0xc146,	// (0x0001e1f3) uni_indicator_pane

0x0dfa,	// (0x00012ea7) bg_list_pane_ParamLimits

0x0dfa,	// (0x00012ea7) bg_list_pane

0xac05,	// (0x0001ccb2) find_pane

0xb85d,	// (0x0001d90a) listscroll_app_pane_ParamLimits

0xb85d,	// (0x0001d90a) listscroll_app_pane

0x0e1a,	// (0x00012ec7) listscroll_form_pane

0xac0d,	// (0x0001ccba) listscroll_gen_pane_ParamLimits

0xac0d,	// (0x0001ccba) listscroll_gen_pane

0x0e1a,	// (0x00012ec7) listscroll_set_pane

0xb869,	// (0x0001d916) main_idle_act_pane

0xf378,	// (0x00021425) main_idle_trad_pane

0xf378,	// (0x00021425) main_list_empty_pane

0x0dd6,	// (0x00012e83) main_midp_pane

0x0e34,	// (0x00012ee1) main_pane_g1_ParamLimits

0x0e34,	// (0x00012ee1) main_pane_g1

0xb87c,	// (0x0001d929) popup_ai_message_window_ParamLimits

0xb87c,	// (0x0001d929) popup_ai_message_window

0xb900,	// (0x0001d9ad) popup_fep_china_uni_window_ParamLimits

0xb900,	// (0x0001d9ad) popup_fep_china_uni_window

0x0e6c,	// (0x00012f19) popup_fep_japan_candidate_window_ParamLimits

0x0e6c,	// (0x00012f19) popup_fep_japan_candidate_window

0x0e8a,	// (0x00012f37) popup_fep_japan_predictive_window_ParamLimits

0x0e8a,	// (0x00012f37) popup_fep_japan_predictive_window

0xb93e,	// (0x0001d9eb) popup_find_window

0xb957,	// (0x0001da04) popup_grid_graphic_window_ParamLimits

0xb957,	// (0x0001da04) popup_grid_graphic_window

0x0eb6,	// (0x00012f63) popup_large_graphic_colour_window

0xb9d3,	// (0x0001da80) popup_menu_window_ParamLimits

0xb9d3,	// (0x0001da80) popup_menu_window

0xbb31,	// (0x0001dbde) popup_note_image_window

0xbaf9,	// (0x0001dba6) popup_note_wait_window_ParamLimits

0xbaf9,	// (0x0001dba6) popup_note_wait_window

0xbb47,	// (0x0001dbf4) popup_note_window_ParamLimits

0xbb47,	// (0x0001dbf4) popup_note_window

0xbbdb,	// (0x0001dc88) popup_query_code_window_ParamLimits

0xbbdb,	// (0x0001dc88) popup_query_code_window

0x0ed5,	// (0x00012f82) popup_query_data_code_window_ParamLimits

0x0ed5,	// (0x00012f82) popup_query_data_code_window

0xbc13,	// (0x0001dcc0) popup_query_data_window_ParamLimits

0xbc13,	// (0x0001dcc0) popup_query_data_window

0xbc87,	// (0x0001dd34) popup_query_sat_info_window_ParamLimits

0xbc87,	// (0x0001dd34) popup_query_sat_info_window

0xbd14,	// (0x0001ddc1) popup_snote_single_graphic_window_ParamLimits

0xbd14,	// (0x0001ddc1) popup_snote_single_graphic_window

0xbd14,	// (0x0001ddc1) popup_snote_single_text_window_ParamLimits

0xbd14,	// (0x0001ddc1) popup_snote_single_text_window

0x0eea,	// (0x00012f97) popup_sub_window_general

0x0f2c,	// (0x00012fd9) popup_window_general_ParamLimits

0x0f2c,	// (0x00012fd9) popup_window_general

0x0f3f,	// (0x00012fec) power_save_pane

0xb70f,	// (0x0001d7bc) control_pane_g1_ParamLimits

0xb70f,	// (0x0001d7bc) control_pane_g1

0x4c0f,	// (0x00016cbc) control_pane_g2_ParamLimits

0x4c0f,	// (0x00016cbc) control_pane_g2

0xf584,	// (0x00021631) control_pane_g3_ParamLimits

0xf584,	// (0x00021631) control_pane_g3

0x0007,

0xf7c8,	// (0x00021875) control_pane_g_ParamLimits

0xf7c8,	// (0x00021875) control_pane_g

0xb763,	// (0x0001d810) control_pane_t1_ParamLimits

0xb763,	// (0x0001d810) control_pane_t1

0xb7bf,	// (0x0001d86c) control_pane_t2_ParamLimits

0xb7bf,	// (0x0001d86c) control_pane_t2

0x0002,

0xf7d9,	// (0x00021886) control_pane_t_ParamLimits

0xf7d9,	// (0x00021886) control_pane_t

0xf4a7,	// (0x00021554) navi_navi_volume_pane_cp1

0xf4b0,	// (0x0002155d) status_small_icon_pane

0xf4b8,	// (0x00021565) status_small_pane_g1_ParamLimits

0xf4b8,	// (0x00021565) status_small_pane_g1

0xf4ec,	// (0x00021599) status_small_pane_g2_ParamLimits

0xf4ec,	// (0x00021599) status_small_pane_g2

0xf4f8,	// (0x000215a5) status_small_pane_g3_ParamLimits

0xf4f8,	// (0x000215a5) status_small_pane_g3

0xf504,	// (0x000215b1) status_small_pane_g4_ParamLimits

0xf504,	// (0x000215b1) status_small_pane_g4

0xf510,	// (0x000215bd) status_small_pane_g5_ParamLimits

0xf510,	// (0x000215bd) status_small_pane_g5

0xf51d,	// (0x000215ca) status_small_pane_g6_ParamLimits

0xf51d,	// (0x000215ca) status_small_pane_g6

0x0007,

0xf7b7,	// (0x00021864) status_small_pane_g_ParamLimits

0xf7b7,	// (0x00021864) status_small_pane_g

0xf54d,	// (0x000215fa) status_small_pane_t1

0xf570,	// (0x0002161d) status_small_wait_pane_ParamLimits

0xf570,	// (0x0002161d) status_small_wait_pane

0xb5d5,	// (0x0001d682) aid_levels_signal_ParamLimits

0xb5d5,	// (0x0001d682) aid_levels_signal

0xb5e9,	// (0x0001d696) signal_pane_g1_ParamLimits

0xb5e9,	// (0x0001d696) signal_pane_g1

0xb603,	// (0x0001d6b0) signal_pane_g2_ParamLimits

0xb603,	// (0x0001d6b0) signal_pane_g2

0x0001,

0xf74c,	// (0x000217f9) signal_pane_g_ParamLimits

0xf74c,	// (0x000217f9) signal_pane_g

0xeeff,	// (0x00020fac) context_pane_g1

0xb02f,	// (0x0001d0dc) title_pane_g1

0xb071,	// (0x0001d11e) title_pane_t1

0xdd14,	// (0x0001fdc1) title_pane_t2

0xdd3a,	// (0x0001fde7) title_pane_t3

0x0002,

0xf59b,	// (0x00021648) title_pane_t

0xc16c,	// (0x0001e219) aid_levels_battery_ParamLimits

0xc16c,	// (0x0001e219) aid_levels_battery

0xc184,	// (0x0001e231) battery_pane_g1_ParamLimits

0xc184,	// (0x0001e231) battery_pane_g1

0xc19f,	// (0x0001e24c) battery_pane_g2_ParamLimits

0xc19f,	// (0x0001e24c) battery_pane_g2

0x0001,

0xf7eb,	// (0x00021898) battery_pane_g_ParamLimits

0xf7eb,	// (0x00021898) battery_pane_g

0xc50e,	// (0x0001e5bb) uni_indicator_pane_g1

0xc523,	// (0x0001e5d0) uni_indicator_pane_g2

0xc539,	// (0x0001e5e6) uni_indicator_pane_g3

0x0005,

0xf947,	// (0x000219f4) uni_indicator_pane_g

0xea73,	// (0x00020b20) navi_icon_pane_ParamLimits

0xea73,	// (0x00020b20) navi_icon_pane

0xdcfe,	// (0x0001fdab) navi_midp_pane

0xdcfe,	// (0x0001fdab) navi_navi_pane

0xea73,	// (0x00020b20) navi_text_pane_ParamLimits

0xea73,	// (0x00020b20) navi_text_pane

0xdc7c,	// (0x0001fd29) status_small_wait_pane_g1

0xe055,	// (0x00020102) status_small_wait_pane_g2

0x0001,

0xf942,	// (0x000219ef) status_small_wait_pane_g

0xc4b4,	// (0x0001e561) navi_navi_icon_text_pane

0xc4bc,	// (0x0001e569) navi_navi_pane_g1_ParamLimits

0xc4bc,	// (0x0001e569) navi_navi_pane_g1

0xc4ce,	// (0x0001e57b) navi_navi_pane_g2_ParamLimits

0xc4ce,	// (0x0001e57b) navi_navi_pane_g2

0x0001,

0xf910,	// (0x000219bd) navi_navi_pane_g_ParamLimits

0xf910,	// (0x000219bd) navi_navi_pane_g

0xc4e0,	// (0x0001e58d) navi_navi_tabs_pane

0xc4b4,	// (0x0001e561) navi_navi_text_pane

0xc4b4,	// (0x0001e561) navi_navi_volume_pane

0x1d8c,	// (0x00013e39) navi_text_pane_t1

0x1d80,	// (0x00013e2d) navi_icon_pane_g1

0x1cd4,	// (0x00013d81) navi_navi_text_pane_t1

0x57b8,	// (0x00017865) navi_navi_volume_pane_g1

0xc4ab,	// (0x0001e558) volume_small_pane

0xc407,	// (0x0001e4b4) navi_navi_icon_text_pane_g1

0xc40f,	// (0x0001e4bc) navi_navi_icon_text_pane_t1

0x188e,	// (0x0001393b) navi_tabs_2_long_pane

0x188e,	// (0x0001393b) navi_tabs_2_pane

0x188e,	// (0x0001393b) navi_tabs_3_long_pane

0x188e,	// (0x0001393b) navi_tabs_3_pane

0x188e,	// (0x0001393b) navi_tabs_4_pane

0xc3e7,	// (0x0001e494) tabs_2_active_pane_ParamLimits

0xc3e7,	// (0x0001e494) tabs_2_active_pane

0xc3f7,	// (0x0001e4a4) tabs_2_passive_pane_ParamLimits

0xc3f7,	// (0x0001e4a4) tabs_2_passive_pane

0xc3b5,	// (0x0001e462) tabs_3_active_pane_ParamLimits

0xc3b5,	// (0x0001e462) tabs_3_active_pane

0xc3c5,	// (0x0001e472) tabs_3_passive_pane_ParamLimits

0xc3c5,	// (0x0001e472) tabs_3_passive_pane

0xc3d6,	// (0x0001e483) tabs_3_passive_pane_cp_ParamLimits

0xc3d6,	// (0x0001e483) tabs_3_passive_pane_cp

0xc371,	// (0x0001e41e) tabs_4_active_pane_ParamLimits

0xc371,	// (0x0001e41e) tabs_4_active_pane

0xc382,	// (0x0001e42f) tabs_4_passive_pane_ParamLimits

0xc382,	// (0x0001e42f) tabs_4_passive_pane

0xc393,	// (0x0001e440) tabs_4_passive_pane_cp_ParamLimits

0xc393,	// (0x0001e440) tabs_4_passive_pane_cp

0xc3a4,	// (0x0001e451) tabs_4_passive_pane_cp2_ParamLimits

0xc3a4,	// (0x0001e451) tabs_4_passive_pane_cp2

0xc351,	// (0x0001e3fe) tabs_2_long_active_pane_ParamLimits

0xc351,	// (0x0001e3fe) tabs_2_long_active_pane

0xc361,	// (0x0001e40e) tabs_2_long_passive_pane_ParamLimits

0xc361,	// (0x0001e40e) tabs_2_long_passive_pane

0xc31a,	// (0x0001e3c7) tabs_3_long_active_pane_ParamLimits

0xc31a,	// (0x0001e3c7) tabs_3_long_active_pane

0xc32d,	// (0x0001e3da) tabs_3_long_passive_pane_ParamLimits

0xc32d,	// (0x0001e3da) tabs_3_long_passive_pane

0xc33e,	// (0x0001e3eb) tabs_3_long_passive_pane_cp_ParamLimits

0xc33e,	// (0x0001e3eb) tabs_3_long_passive_pane_cp

0x55e5,	// (0x00017692) volume_small_pane_g1

0x55ee,	// (0x0001769b) volume_small_pane_g2

0x55f7,	// (0x000176a4) volume_small_pane_g3

0x5600,	// (0x000176ad) volume_small_pane_g4

0x5609,	// (0x000176b6) volume_small_pane_g5

0x5612,	// (0x000176bf) volume_small_pane_g6

0x561b,	// (0x000176c8) volume_small_pane_g7

0x5624,	// (0x000176d1) volume_small_pane_g8

0x562d,	// (0x000176da) volume_small_pane_g9

0x5636,	// (0x000176e3) volume_small_pane_g10

0x0009,

0xf8dc,	// (0x00021989) volume_small_pane_g

0xdd4c,	// (0x0001fdf9) bg_active_tab_pane_cp2_ParamLimits

0xdd4c,	// (0x0001fdf9) bg_active_tab_pane_cp2

0xdd5a,	// (0x0001fe07) tabs_3_active_pane_g1

0xb0fe,	// (0x0001d1ab) tabs_3_active_pane_t1

0xdd4c,	// (0x0001fdf9) bg_passive_tab_pane_cp2_ParamLimits

0xdd4c,	// (0x0001fdf9) bg_passive_tab_pane_cp2

0xdd5a,	// (0x0001fe07) tabs_3_passive_pane_g1

0xb0fe,	// (0x0001d1ab) tabs_3_passive_pane_t1

0xdd4c,	// (0x0001fdf9) bg_active_tab_pane_cp3_ParamLimits

0xdd4c,	// (0x0001fdf9) bg_active_tab_pane_cp3

0x2225,	// (0x000142d2) tabs_4_active_pane_g1

0xb114,	// (0x0001d1c1) tabs_4_active_pane_t1

0xdd4c,	// (0x0001fdf9) bg_passive_tab_pane_cp3_ParamLimits

0xdd4c,	// (0x0001fdf9) bg_passive_tab_pane_cp3

0x2225,	// (0x000142d2) tabs_4_1_passive_pane_g1

0xb114,	// (0x0001d1c1) tabs_4_1_passive_pane_t1

0x0dd6,	// (0x00012e83) list_highlight_pane_cp2

0xc5f5,	// (0x0001e6a2) list_set_pane_ParamLimits

0xc5f5,	// (0x0001e6a2) list_set_pane

0xc683,	// (0x0001e730) main_pane_set_t1_ParamLimits

0xc683,	// (0x0001e730) main_pane_set_t1

0xc6a3,	// (0x0001e750) main_pane_set_t2_ParamLimits

0xc6a3,	// (0x0001e750) main_pane_set_t2

0xc6b7,	// (0x0001e764) main_pane_set_t3_ParamLimits

0xc6b7,	// (0x0001e764) main_pane_set_t3

0xc6c9,	// (0x0001e776) main_pane_set_t4_ParamLimits

0xc6c9,	// (0x0001e776) main_pane_set_t4

0x0003,

0xf9ac,	// (0x00021a59) main_pane_set_t_ParamLimits

0xf9ac,	// (0x00021a59) main_pane_set_t

0xc6db,	// (0x0001e788) setting_code_pane

0xc6e3,	// (0x0001e790) setting_slider_graphic_pane

0xc6e3,	// (0x0001e790) setting_slider_pane

0xc6e3,	// (0x0001e790) setting_text_pane

0xc6e3,	// (0x0001e790) setting_volume_pane

0xb12a,	// (0x0001d1d7) volume_set_pane

0xdd62,	// (0x0001fe0f) bg_set_opt_pane_cp

0xdd70,	// (0x0001fe1d) setting_slider_pane_t1

0xb132,	// (0x0001d1df) setting_slider_pane_t2

0xb14b,	// (0x0001d1f8) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002164f) setting_slider_pane_t

0xdd86,	// (0x0001fe33) slider_set_pane

0xdcfe,	// (0x0001fdab) bg_set_opt_pane_cp2

0xdd9c,	// (0x0001fe49) setting_slider_graphic_pane_g1

0xb162,	// (0x0001d20f) setting_slider_graphic_pane_t1

0xb171,	// (0x0001d21e) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00021656) setting_slider_graphic_pane_t

0xb180,	// (0x0001d22d) slider_set_pane_cp

0xdcfe,	// (0x0001fdab) input_focus_pane_cp1

0x2253,	// (0x00014300) list_set_text_pane

0xdc7c,	// (0x0001fd29) setting_text_pane_g1

0xdcfe,	// (0x0001fdab) input_focus_pane_cp2

0xdc7c,	// (0x0001fd29) setting_code_pane_g1

0xdda5,	// (0x0001fe52) setting_code_pane_t1

0xa68e,	// (0x0001c73b) set_text_pane_t1_ParamLimits

0xa68e,	// (0x0001c73b) set_text_pane_t1

0xea0e,	// (0x00020abb) set_opt_bg_pane_g1

0xea16,	// (0x00020ac3) set_opt_bg_pane_g2

0xc5b5,	// (0x0001e662) set_opt_bg_pane_g3

0xea26,	// (0x00020ad3) set_opt_bg_pane_g4

0xea2e,	// (0x00020adb) set_opt_bg_pane_g5

0xea36,	// (0x00020ae3) set_opt_bg_pane_g6

0xc5bd,	// (0x0001e66a) set_opt_bg_pane_g7

0xc5c5,	// (0x0001e672) set_opt_bg_pane_g8

0xc5cd,	// (0x0001e67a) set_opt_bg_pane_g9

0x0008,

0xf999,	// (0x00021a46) set_opt_bg_pane_g

0x21cf,	// (0x0001427c) slider_set_pane_g1

0x587f,	// (0x0001792c) slider_set_pane_g2

0x0006,

0xf98a,	// (0x00021a37) slider_set_pane_g

0xc54f,	// (0x0001e5fc) volume_set_pane_g1

0xc557,	// (0x0001e604) volume_set_pane_g2

0xc55f,	// (0x0001e60c) volume_set_pane_g3

0xc567,	// (0x0001e614) volume_set_pane_g4

0xc56f,	// (0x0001e61c) volume_set_pane_g5

0xc577,	// (0x0001e624) volume_set_pane_g6

0xc57f,	// (0x0001e62c) volume_set_pane_g7

0xc587,	// (0x0001e634) volume_set_pane_g8

0xc58f,	// (0x0001e63c) volume_set_pane_g9

0xc597,	// (0x0001e644) volume_set_pane_g10

0x0009,

0xf962,	// (0x00021a0f) volume_set_pane_g

0xb188,	// (0x0001d235) indicator_pane_ParamLimits

0xb188,	// (0x0001d235) indicator_pane

0xb1b0,	// (0x0001d25d) main_idle_pane_g2_ParamLimits

0xb1b0,	// (0x0001d25d) main_idle_pane_g2

0xb1e0,	// (0x0001d28d) main_pane_idle_g1_ParamLimits

0xb1e0,	// (0x0001d28d) main_pane_idle_g1

0xddb3,	// (0x0001fe60) popup_clock_digital_analogue_window_ParamLimits

0xddb3,	// (0x0001fe60) popup_clock_digital_analogue_window

0xb205,	// (0x0001d2b2) soft_indicator_pane_ParamLimits

0xb205,	// (0x0001d2b2) soft_indicator_pane

0xb21f,	// (0x0001d2cc) wallpaper_pane_ParamLimits

0xb21f,	// (0x0001d2cc) wallpaper_pane

0xdc7c,	// (0x0001fd29) wallpaper_pane_g1

0xb231,	// (0x0001d2de) indicator_pane_g1_ParamLimits

0xb231,	// (0x0001d2de) indicator_pane_g1

0x2360,	// (0x0001440d) navi_navi_icon_text_pane_srt_g1

0xdde1,	// (0x0001fe8e) soft_indicator_pane_t1

0xddfb,	// (0x0001fea8) aid_ps_area_pane

0xb24a,	// (0x0001d2f7) aid_ps_clock_pane

0xde0c,	// (0x0001feb9) aid_ps_indicator_pane

0xde18,	// (0x0001fec5) indicator_ps_pane_ParamLimits

0xde18,	// (0x0001fec5) indicator_ps_pane

0xde27,	// (0x0001fed4) power_save_pane_g1_ParamLimits

0xde27,	// (0x0001fed4) power_save_pane_g1

0xde33,	// (0x0001fee0) power_save_pane_g2_ParamLimits

0xde33,	// (0x0001fee0) power_save_pane_g2

0x4503,	// (0x000165b0) aid_navinavi_width_pane

0xddfb,	// (0x0001fea8) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002165b) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002165b) power_save_pane_g

0xde41,	// (0x0001feee) power_save_pane_t1_ParamLimits

0xde41,	// (0x0001feee) power_save_pane_t1

0xb24a,	// (0x0001d2f7) aid_ps_clock_pane_ParamLimits

0xde0c,	// (0x0001feb9) aid_ps_indicator_pane_ParamLimits

0xde53,	// (0x0001ff00) power_save_pane_t4_ParamLimits

0xde53,	// (0x0001ff00) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00021660) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00021660) power_save_pane_t

0xde7d,	// (0x0001ff2a) power_save_t3_ParamLimits

0xde7d,	// (0x0001ff2a) power_save_t3

0xde68,	// (0x0001ff15) power_save_t2_ParamLimits

0xde68,	// (0x0001ff15) power_save_t2

0xde92,	// (0x0001ff3f) indicator_ps_pane_g1

0xb256,	// (0x0001d303) ai_gene_pane_ParamLimits

0xb256,	// (0x0001d303) ai_gene_pane

0xb26d,	// (0x0001d31a) ai_links_pane_ParamLimits

0xb26d,	// (0x0001d31a) ai_links_pane

0xb27f,	// (0x0001d32c) indicator_pane_cp1_ParamLimits

0xb27f,	// (0x0001d32c) indicator_pane_cp1

0xb28e,	// (0x0001d33b) main_pane_idle_g1_cp_ParamLimits

0xb28e,	// (0x0001d33b) main_pane_idle_g1_cp

0xde9b,	// (0x0001ff48) popup_ai_links_title_window

0xb2a6,	// (0x0001d353) soft_indicator_pane_cp1_ParamLimits

0xb2a6,	// (0x0001d353) soft_indicator_pane_cp1

0x2011,	// (0x000140be) ai_links_pane_g1

0x201a,	// (0x000140c7) grid_ai_links_pane

0xc505,	// (0x0001e5b2) ai_gene_pane_1

0x1fff,	// (0x000140ac) ai_gene_pane_2

0x2008,	// (0x000140b5) list_highlight_pane_cp4

0xc4e9,	// (0x0001e596) cell_ai_link_pane_ParamLimits

0xc4e9,	// (0x0001e596) cell_ai_link_pane

0x1ff7,	// (0x000140a4) cell_ai_link_pane_g1

0xe055,	// (0x00020102) cell_ai_link_pane_g2

0x0001,

0xf93d,	// (0x000219ea) cell_ai_link_pane_g

0xdcfe,	// (0x0001fdab) grid_highlight_cp2

0xdcfe,	// (0x0001fdab) bg_popup_sub_pane_cp1

0xdeb2,	// (0x0001ff5f) popup_ai_links_title_window_t1

0x1f49,	// (0x00013ff6) ai_gene_pane_1_g1_ParamLimits

0x1f49,	// (0x00013ff6) ai_gene_pane_1_g1

0x1f55,	// (0x00014002) ai_gene_pane_1_g2_ParamLimits

0x1f55,	// (0x00014002) ai_gene_pane_1_g2

0x0001,

0xf933,	// (0x000219e0) ai_gene_pane_1_g_ParamLimits

0xf933,	// (0x000219e0) ai_gene_pane_1_g

0x1f62,	// (0x0001400f) ai_gene_pane_1_t1_ParamLimits

0x1f62,	// (0x0001400f) ai_gene_pane_1_t1

0x1f96,	// (0x00014043) grid_ai_soft_ind_pane

0x1f34,	// (0x00013fe1) ai_gene_pane_2_t1_ParamLimits

0x1f34,	// (0x00013fe1) ai_gene_pane_2_t1

0xb2ba,	// (0x0001d367) main_pane_empty_t1_ParamLimits

0xb2ba,	// (0x0001d367) main_pane_empty_t1

0xb2d7,	// (0x0001d384) main_pane_empty_t2_ParamLimits

0xb2d7,	// (0x0001d384) main_pane_empty_t2

0xb2ef,	// (0x0001d39c) main_pane_empty_t3_ParamLimits

0xb2ef,	// (0x0001d39c) main_pane_empty_t3

0xb302,	// (0x0001d3af) main_pane_empty_t4_ParamLimits

0xb302,	// (0x0001d3af) main_pane_empty_t4

0xb315,	// (0x0001d3c2) main_pane_empty_t5_ParamLimits

0xb315,	// (0x0001d3c2) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00021665) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00021665) main_pane_empty_t

0xea73,	// (0x00020b20) bg_popup_window_pane_ParamLimits

0xea73,	// (0x00020b20) bg_popup_window_pane

0x1ce3,	// (0x00013d90) find_popup_pane_cp2_ParamLimits

0x1ce3,	// (0x00013d90) find_popup_pane_cp2

0x1cef,	// (0x00013d9c) heading_pane_ParamLimits

0x1cef,	// (0x00013d9c) heading_pane

0xdcfe,	// (0x0001fdab) bg_popup_sub_pane

0xc42c,	// (0x0001e4d9) bg_popup_window_pane_g1_ParamLimits

0xc42c,	// (0x0001e4d9) bg_popup_window_pane_g1

0xc43b,	// (0x0001e4e8) bg_popup_window_pane_g2_ParamLimits

0xc43b,	// (0x0001e4e8) bg_popup_window_pane_g2

0xc447,	// (0x0001e4f4) bg_popup_window_pane_g3_ParamLimits

0xc447,	// (0x0001e4f4) bg_popup_window_pane_g3

0xc453,	// (0x0001e500) bg_popup_window_pane_g4_ParamLimits

0xc453,	// (0x0001e500) bg_popup_window_pane_g4

0xc462,	// (0x0001e50f) bg_popup_window_pane_g5_ParamLimits

0xc462,	// (0x0001e50f) bg_popup_window_pane_g5

0xc472,	// (0x0001e51f) bg_popup_window_pane_g6_ParamLimits

0xc472,	// (0x0001e51f) bg_popup_window_pane_g6

0xc47e,	// (0x0001e52b) bg_popup_window_pane_g7_ParamLimits

0xc47e,	// (0x0001e52b) bg_popup_window_pane_g7

0xc48d,	// (0x0001e53a) bg_popup_window_pane_g8_ParamLimits

0xc48d,	// (0x0001e53a) bg_popup_window_pane_g8

0xc49c,	// (0x0001e549) bg_popup_window_pane_g9_ParamLimits

0xc49c,	// (0x0001e549) bg_popup_window_pane_g9

0x1cc8,	// (0x00013d75) bg_popup_window_pane_g10_ParamLimits

0x1cc8,	// (0x00013d75) bg_popup_window_pane_g10

0x0009,

0xf8fb,	// (0x000219a8) bg_popup_window_pane_g_ParamLimits

0xf8fb,	// (0x000219a8) bg_popup_window_pane_g

0x1c7f,	// (0x00013d2c) bg_popup_heading_pane_ParamLimits

0x1c7f,	// (0x00013d2c) bg_popup_heading_pane

0x5b2f,	// (0x00017bdc) tabs_4_passive_pane_cp_srt_ParamLimits

0x5b2f,	// (0x00017bdc) tabs_4_passive_pane_cp_srt

0x5b41,	// (0x00017bee) tabs_4_passive_pane_srt_ParamLimits

0x1c93,	// (0x00013d40) heading_pane_g2

0x5b41,	// (0x00017bee) tabs_4_passive_pane_srt

0x1204,	// (0x000132b1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1204,	// (0x000132b1) bg_passive_tab_pane_cp3_srt

0x1c9b,	// (0x00013d48) heading_pane_t1_ParamLimits

0x1c9b,	// (0x00013d48) heading_pane_t1

0x1cb2,	// (0x00013d5f) heading_pane_t2_ParamLimits

0x1cb2,	// (0x00013d5f) heading_pane_t2

0x0001,

0xf8f6,	// (0x000219a3) heading_pane_t_ParamLimits

0xf8f6,	// (0x000219a3) heading_pane_t

0x180e,	// (0x000138bb) bg_popup_heading_pane_g1

0x189f,	// (0x0001394c) bg_popup_heading_pane_g2

0x18a7,	// (0x00013954) bg_popup_heading_pane_g3

0x18af,	// (0x0001395c) bg_popup_heading_pane_g4

0x18b7,	// (0x00013964) bg_popup_heading_pane_g5

0x18bf,	// (0x0001396c) bg_popup_heading_pane_g6

0x18c7,	// (0x00013974) bg_popup_heading_pane_g7

0x18cf,	// (0x0001397c) bg_popup_heading_pane_g8

0x18d7,	// (0x00013984) bg_popup_heading_pane_g9

0x0008,

0xf8b2,	// (0x0002195f) bg_popup_heading_pane_g

0x10ee,	// (0x0001319b) bg_popup_sub_pane_g1

0x10fe,	// (0x000131ab) bg_popup_sub_pane_g2

0x10f6,	// (0x000131a3) bg_popup_sub_pane_g3

0x110e,	// (0x000131bb) bg_popup_sub_pane_g4

0x1106,	// (0x000131b3) bg_popup_sub_pane_g5

0x1116,	// (0x000131c3) bg_popup_sub_pane_g6

0x111e,	// (0x000131cb) bg_popup_sub_pane_g7

0x112e,	// (0x000131db) bg_popup_sub_pane_g8

0x1126,	// (0x000131d3) bg_popup_sub_pane_g9

0x0008,

0xf88c,	// (0x00021939) bg_popup_sub_pane_g

0xdd4c,	// (0x0001fdf9) bg_popup_window_pane_cp5_ParamLimits

0xdd4c,	// (0x0001fdf9) bg_popup_window_pane_cp5

0xdecf,	// (0x0001ff7c) popup_note_window_g1_ParamLimits

0xdecf,	// (0x0001ff7c) popup_note_window_g1

0xdedb,	// (0x0001ff88) popup_note_window_t1_ParamLimits

0xdedb,	// (0x0001ff88) popup_note_window_t1

0xdef1,	// (0x0001ff9e) popup_note_window_t2_ParamLimits

0xdef1,	// (0x0001ff9e) popup_note_window_t2

0xdf07,	// (0x0001ffb4) popup_note_window_t3_ParamLimits

0xdf07,	// (0x0001ffb4) popup_note_window_t3

0xdf1d,	// (0x0001ffca) popup_note_window_t4_ParamLimits

0xdf1d,	// (0x0001ffca) popup_note_window_t4

0xdf45,	// (0x0001fff2) popup_note_window_t5_ParamLimits

0xdf45,	// (0x0001fff2) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00021670) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00021670) popup_note_window_t

0xdf69,	// (0x00020016) bg_popup_window_pane_cp6_ParamLimits

0xdf69,	// (0x00020016) bg_popup_window_pane_cp6

0x178a,	// (0x00013837) popup_note_image_window_g1_ParamLimits

0x178a,	// (0x00013837) popup_note_image_window_g1

0x1796,	// (0x00013843) popup_note_image_window_g2_ParamLimits

0x1796,	// (0x00013843) popup_note_image_window_g2

0x0001,

0xf880,	// (0x0002192d) popup_note_image_window_g_ParamLimits

0xf880,	// (0x0002192d) popup_note_image_window_g

0x17af,	// (0x0001385c) popup_note_image_window_t1_ParamLimits

0x17af,	// (0x0001385c) popup_note_image_window_t1

0x17c8,	// (0x00013875) popup_note_image_window_t2_ParamLimits

0x17c8,	// (0x00013875) popup_note_image_window_t2

0x17e1,	// (0x0001388e) popup_note_image_window_t3_ParamLimits

0x17e1,	// (0x0001388e) popup_note_image_window_t3

0x0002,

0xf885,	// (0x00021932) popup_note_image_window_t_ParamLimits

0xf885,	// (0x00021932) popup_note_image_window_t

0x1675,	// (0x00013722) bg_popup_window_pane_cp7_ParamLimits

0x1675,	// (0x00013722) bg_popup_window_pane_cp7

0x16a5,	// (0x00013752) popup_note_wait_window_g1_ParamLimits

0x16a5,	// (0x00013752) popup_note_wait_window_g1

0x16b1,	// (0x0001375e) popup_note_wait_window_g2_ParamLimits

0x16b1,	// (0x0001375e) popup_note_wait_window_g2

0x0002,

0xf86e,	// (0x0002191b) popup_note_wait_window_g_ParamLimits

0xf86e,	// (0x0002191b) popup_note_wait_window_g

0x16c9,	// (0x00013776) popup_note_wait_window_t1_ParamLimits

0x16c9,	// (0x00013776) popup_note_wait_window_t1

0x16f0,	// (0x0001379d) popup_note_wait_window_t2_ParamLimits

0x16f0,	// (0x0001379d) popup_note_wait_window_t2

0x170d,	// (0x000137ba) popup_note_wait_window_t3_ParamLimits

0x170d,	// (0x000137ba) popup_note_wait_window_t3

0x1720,	// (0x000137cd) popup_note_wait_window_t4_ParamLimits

0x1720,	// (0x000137cd) popup_note_wait_window_t4

0x0004,

0xf875,	// (0x00021922) popup_note_wait_window_t_ParamLimits

0xf875,	// (0x00021922) popup_note_wait_window_t

0x1745,	// (0x000137f2) wait_bar_pane_ParamLimits

0x1745,	// (0x000137f2) wait_bar_pane

0xdcfe,	// (0x0001fdab) wait_anim_pane

0xdcfe,	// (0x0001fdab) wait_border_pane

0xdc7c,	// (0x0001fd29) wait_anim_pane_g1

0xdc7c,	// (0x0001fd29) wait_anim_pane_g2

0x0001,

0xf747,	// (0x000217f4) wait_anim_pane_g

0x1625,	// (0x000136d2) wait_border_pane_g1

0x162e,	// (0x000136db) wait_border_pane_g2

0x1637,	// (0x000136e4) wait_border_pane_g3

0x0002,

0xf867,	// (0x00021914) wait_border_pane_g

0x157b,	// (0x00013628) bg_popup_window_pane_cp16_ParamLimits

0x157b,	// (0x00013628) bg_popup_window_pane_cp16

0x1589,	// (0x00013636) indicator_popup_pane_cp4_ParamLimits

0x1589,	// (0x00013636) indicator_popup_pane_cp4

0x159d,	// (0x0001364a) popup_query_data_window_t1_ParamLimits

0x159d,	// (0x0001364a) popup_query_data_window_t1

0x15af,	// (0x0001365c) popup_query_data_window_t2_ParamLimits

0x15af,	// (0x0001365c) popup_query_data_window_t2

0x15c8,	// (0x00013675) popup_query_data_window_t3_ParamLimits

0x15c8,	// (0x00013675) popup_query_data_window_t3

0x0002,

0xf860,	// (0x0002190d) popup_query_data_window_t_ParamLimits

0xf860,	// (0x0002190d) popup_query_data_window_t

0x15e2,	// (0x0001368f) query_popup_data_pane_ParamLimits

0x15e2,	// (0x0001368f) query_popup_data_pane

0x15f6,	// (0x000136a3) query_popup_data_pane_cp1_ParamLimits

0x15f6,	// (0x000136a3) query_popup_data_pane_cp1

0xdf69,	// (0x00020016) bg_popup_window_pane_cp10_ParamLimits

0xdf69,	// (0x00020016) bg_popup_window_pane_cp10

0x14de,	// (0x0001358b) indicator_popup_pane_ParamLimits

0x14de,	// (0x0001358b) indicator_popup_pane

0xdfc0,	// (0x0002006d) popup_query_code_window_t1_ParamLimits

0xdfc0,	// (0x0002006d) popup_query_code_window_t1

0x14f6,	// (0x000135a3) popup_query_code_window_t2_ParamLimits

0x14f6,	// (0x000135a3) popup_query_code_window_t2

0x1534,	// (0x000135e1) popup_query_code_window_t3_ParamLimits

0x1534,	// (0x000135e1) popup_query_code_window_t3

0x0002,

0xf859,	// (0x00021906) popup_query_code_window_t_ParamLimits

0xf859,	// (0x00021906) popup_query_code_window_t

0x1563,	// (0x00013610) query_popup_pane_ParamLimits

0x1563,	// (0x00013610) query_popup_pane

0xdf69,	// (0x00020016) bg_popup_window_pane_cp15_ParamLimits

0xdf69,	// (0x00020016) bg_popup_window_pane_cp15

0xdf87,	// (0x00020034) indicator_popup_pane_cp1_ParamLimits

0xdf87,	// (0x00020034) indicator_popup_pane_cp1

0xdf9a,	// (0x00020047) indicator_popup_pane_cp2_ParamLimits

0xdf9a,	// (0x00020047) indicator_popup_pane_cp2

0xdfad,	// (0x0002005a) popup_query_data_code_window_g1_ParamLimits

0xdfad,	// (0x0002005a) popup_query_data_code_window_g1

0xdfc0,	// (0x0002006d) popup_query_data_code_window_t1_ParamLimits

0xdfc0,	// (0x0002006d) popup_query_data_code_window_t1

0xdfd2,	// (0x0002007f) popup_query_data_code_window_t2_ParamLimits

0xdfd2,	// (0x0002007f) popup_query_data_code_window_t2

0xdfe4,	// (0x00020091) popup_query_data_code_window_t3_ParamLimits

0xdfe4,	// (0x00020091) popup_query_data_code_window_t3

0xdffa,	// (0x000200a7) popup_query_data_code_window_t4_ParamLimits

0xdffa,	// (0x000200a7) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002167b) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002167b) popup_query_data_code_window_t

0xf1f9,	// (0x000212a6) list_single_midp_graphic_pane_g3

0xe012,	// (0x000200bf) query_popup_data_pane_cp2_ParamLimits

0xe025,	// (0x000200d2) query_popup_pane_cp2_ParamLimits

0xe025,	// (0x000200d2) query_popup_pane_cp2

0xdcfe,	// (0x0001fdab) bg_popup_window_pane_cp11

0x14b2,	// (0x0001355f) heading_pane_cp5

0xe0b1,	// (0x0002015e) listscroll_popup_info_pane

0xdcfe,	// (0x0001fdab) input_focus_pane_cp3

0xe038,	// (0x000200e5) query_popup_pane_t1

0xe046,	// (0x000200f3) list_popup_info_pane_ParamLimits

0xe046,	// (0x000200f3) list_popup_info_pane

0xe055,	// (0x00020102) listscroll_popup_info_pane_g1

0xe05d,	// (0x0002010a) scroll_pane_cp7

0xe065,	// (0x00020112) popup_info_list_pane_t1_ParamLimits

0xe065,	// (0x00020112) popup_info_list_pane_t1

0xe07f,	// (0x0002012c) popup_info_list_pane_t2_ParamLimits

0xe07f,	// (0x0002012c) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00021684) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00021684) popup_info_list_pane_t

0xdcfe,	// (0x0001fdab) bg_popup_window_pane_cp12

0x237a,	// (0x00014427) find_popup_pane

0xdd62,	// (0x0001fe0f) bg_popup_window_pane_cp3

0xe099,	// (0x00020146) heading_pane_cp3

0xe0a5,	// (0x00020152) listscroll_popup_graphic_pane

0xdcfe,	// (0x0001fdab) bg_popup_window_pane_cp4

0xb378,	// (0x0001d425) heading_pane_cp4

0xe0b1,	// (0x0002015e) listscroll_popup_colour_pane

0xe0b9,	// (0x00020166) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xe0b9,	// (0x00020166) cell_large_graphic_colour_none_popup_pane

0xb380,	// (0x0001d42d) grid_large_graphic_colour_popup_pane_ParamLimits

0xb380,	// (0x0001d42d) grid_large_graphic_colour_popup_pane

0xb39c,	// (0x0001d449) listscroll_popup_colour_pane_g1_ParamLimits

0xb39c,	// (0x0001d449) listscroll_popup_colour_pane_g1

0xb3b3,	// (0x0001d460) listscroll_popup_colour_pane_g2_ParamLimits

0xb3b3,	// (0x0001d460) listscroll_popup_colour_pane_g2

0xe0c9,	// (0x00020176) listscroll_popup_colour_pane_g3_ParamLimits

0xe0c9,	// (0x00020176) listscroll_popup_colour_pane_g3

0xb3c7,	// (0x0001d474) listscroll_popup_colour_pane_g4_ParamLimits

0xb3c7,	// (0x0001d474) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00021689) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00021689) listscroll_popup_colour_pane_g

0xe0d9,	// (0x00020186) scroll_pane_cp6_ParamLimits

0xe0d9,	// (0x00020186) scroll_pane_cp6

0xb3d6,	// (0x0001d483) cell_large_graphic_colour_popup_pane_ParamLimits

0xb3d6,	// (0x0001d483) cell_large_graphic_colour_popup_pane

0xe0eb,	// (0x00020198) cell_large_graphic_colour_none_popup_pane_t1

0xdcfe,	// (0x0001fdab) grid_highlight_pane_cp5

0xe0fa,	// (0x000201a7) cell_large_graphic_colour_popup_pane_g1

0xe102,	// (0x000201af) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00021692) cell_large_graphic_colour_popup_pane_g

0xe10a,	// (0x000201b7) cell_large_graphic_colour_popup_pane_g2_copy1

0xe113,	// (0x000201c0) grid_highlight_pane_cp4

0xe11b,	// (0x000201c8) bg_popup_window_pane_cp8_ParamLimits

0xe11b,	// (0x000201c8) bg_popup_window_pane_cp8

0xe136,	// (0x000201e3) popup_snote_single_text_window_g1_ParamLimits

0xe136,	// (0x000201e3) popup_snote_single_text_window_g1

0xe148,	// (0x000201f5) popup_snote_single_text_window_t1_ParamLimits

0xe148,	// (0x000201f5) popup_snote_single_text_window_t1

0xe15b,	// (0x00020208) popup_snote_single_text_window_t2_ParamLimits

0xe15b,	// (0x00020208) popup_snote_single_text_window_t2

0xe16e,	// (0x0002021b) popup_snote_single_text_window_t3_ParamLimits

0xe16e,	// (0x0002021b) popup_snote_single_text_window_t3

0xe1a7,	// (0x00020254) popup_snote_single_text_window_t4_ParamLimits

0xe1a7,	// (0x00020254) popup_snote_single_text_window_t4

0xe1db,	// (0x00020288) popup_snote_single_text_window_t5_ParamLimits

0xe1db,	// (0x00020288) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00021697) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00021697) popup_snote_single_text_window_t

0xe20a,	// (0x000202b7) bg_popup_window_pane_cp9_ParamLimits

0xe20a,	// (0x000202b7) bg_popup_window_pane_cp9

0xe136,	// (0x000201e3) popup_snote_single_graphic_window_g1_ParamLimits

0xe136,	// (0x000201e3) popup_snote_single_graphic_window_g1

0xe218,	// (0x000202c5) popup_snote_single_graphic_window_g2_ParamLimits

0xe218,	// (0x000202c5) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x000216a2) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x000216a2) popup_snote_single_graphic_window_g

0xe224,	// (0x000202d1) popup_snote_single_graphic_window_t1_ParamLimits

0xe224,	// (0x000202d1) popup_snote_single_graphic_window_t1

0xe237,	// (0x000202e4) popup_snote_single_graphic_window_t2_ParamLimits

0xe237,	// (0x000202e4) popup_snote_single_graphic_window_t2

0xe16e,	// (0x0002021b) popup_snote_single_graphic_window_t3_ParamLimits

0xe16e,	// (0x0002021b) popup_snote_single_graphic_window_t3

0xe1a7,	// (0x00020254) popup_snote_single_graphic_window_t4_ParamLimits

0xe1a7,	// (0x00020254) popup_snote_single_graphic_window_t4

0xe1db,	// (0x00020288) popup_snote_single_graphic_window_t5_ParamLimits

0xe1db,	// (0x00020288) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x000216a7) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x000216a7) popup_snote_single_graphic_window_t

0xc7de,	// (0x0001e88b) grid_graphic_popup_pane_ParamLimits

0xc7de,	// (0x0001e88b) grid_graphic_popup_pane

0xc801,	// (0x0001e8ae) listscroll_popup_graphic_pane_g1_ParamLimits

0xc801,	// (0x0001e8ae) listscroll_popup_graphic_pane_g1

0xc815,	// (0x0001e8c2) listscroll_popup_graphic_pane_g2_ParamLimits

0xc815,	// (0x0001e8c2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9d6,	// (0x00021a83) listscroll_popup_graphic_pane_g_ParamLimits

0xf9d6,	// (0x00021a83) listscroll_popup_graphic_pane_g

0x2247,	// (0x000142f4) scroll_pane_cp5

0xc799,	// (0x0001e846) cell_graphic_popup_pane_ParamLimits

0xc799,	// (0x0001e846) cell_graphic_popup_pane

0x2323,	// (0x000143d0) cell_graphic_popup_pane_g1

0x232b,	// (0x000143d8) cell_graphic_popup_pane_g2

0xe10a,	// (0x000201b7) cell_graphic_popup_pane_g3

0x0002,

0xf9cf,	// (0x00021a7c) cell_graphic_popup_pane_g

0x2334,	// (0x000143e1) cell_graphic_popup_pane_t2

0xe113,	// (0x000201c0) grid_highlight_pane_cp3

0xe25c,	// (0x00020309) list_gen_pane_ParamLimits

0xe25c,	// (0x00020309) list_gen_pane

0xe285,	// (0x00020332) scroll_pane

0xc76c,	// (0x0001e819) bg_list_pane_g1_ParamLimits

0xc76c,	// (0x0001e819) bg_list_pane_g1

0x22da,	// (0x00014387) bg_list_pane_g2_ParamLimits

0x22da,	// (0x00014387) bg_list_pane_g2

0x22ed,	// (0x0001439a) bg_list_pane_g3_ParamLimits

0x22ed,	// (0x0001439a) bg_list_pane_g3

0x22ff,	// (0x000143ac) bg_list_pane_g4_ParamLimits

0x22ff,	// (0x000143ac) bg_list_pane_g4

0xc787,	// (0x0001e834) bg_list_pane_g5_ParamLimits

0xc787,	// (0x0001e834) bg_list_pane_g5

0x0004,

0xf9c4,	// (0x00021a71) bg_list_pane_g_ParamLimits

0xf9c4,	// (0x00021a71) bg_list_pane_g

0xc710,	// (0x0001e7bd) list_double2_graphic_large_graphic_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_double2_graphic_large_graphic_pane

0xc710,	// (0x0001e7bd) list_double2_graphic_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_double2_graphic_pane

0xc710,	// (0x0001e7bd) list_double2_large_graphic_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_double2_large_graphic_pane

0xc722,	// (0x0001e7cf) list_double2_pane_ParamLimits

0xc722,	// (0x0001e7cf) list_double2_pane

0xc710,	// (0x0001e7bd) list_double_graphic_heading_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_double_graphic_heading_pane

0xc710,	// (0x0001e7bd) list_double_graphic_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_double_graphic_pane

0xc710,	// (0x0001e7bd) list_double_heading_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_double_heading_pane

0xc710,	// (0x0001e7bd) list_double_large_graphic_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_double_large_graphic_pane

0xc710,	// (0x0001e7bd) list_double_number_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_double_number_pane

0xc710,	// (0x0001e7bd) list_double_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_double_pane

0xc710,	// (0x0001e7bd) list_double_time_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_double_time_pane

0xc710,	// (0x0001e7bd) list_setting_number_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_setting_number_pane

0xc710,	// (0x0001e7bd) list_setting_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_setting_pane

0xac75,	// (0x0001cd22) list_single_2graphic_pane_ParamLimits

0xac75,	// (0x0001cd22) list_single_2graphic_pane

0xac75,	// (0x0001cd22) list_single_graphic_heading_pane_ParamLimits

0xac75,	// (0x0001cd22) list_single_graphic_heading_pane

0xac75,	// (0x0001cd22) list_single_graphic_pane_ParamLimits

0xac75,	// (0x0001cd22) list_single_graphic_pane

0xac75,	// (0x0001cd22) list_single_heading_pane_ParamLimits

0xac75,	// (0x0001cd22) list_single_heading_pane

0xc710,	// (0x0001e7bd) list_single_large_graphic_pane_ParamLimits

0xc710,	// (0x0001e7bd) list_single_large_graphic_pane

0xac75,	// (0x0001cd22) list_single_number_heading_pane_ParamLimits

0xac75,	// (0x0001cd22) list_single_number_heading_pane

0xac75,	// (0x0001cd22) list_single_number_pane_ParamLimits

0xac75,	// (0x0001cd22) list_single_number_pane

0xac75,	// (0x0001cd22) list_single_pane_ParamLimits

0xac75,	// (0x0001cd22) list_single_pane

0xdcfe,	// (0x0001fdab) list_highlight_pane_cp1

0x3d92,	// (0x00015e3f) list_single_pane_g1_ParamLimits

0x3d92,	// (0x00015e3f) list_single_pane_g1

0x3d9e,	// (0x00015e4b) list_single_pane_g2_ParamLimits

0x3d9e,	// (0x00015e4b) list_single_pane_g2

0x0001,

0xf60c,	// (0x000216b9) list_single_pane_g_ParamLimits

0xf60c,	// (0x000216b9) list_single_pane_g

0x3f57,	// (0x00016004) list_single_pane_t1_ParamLimits

0x3f57,	// (0x00016004) list_single_pane_t1

0x3d92,	// (0x00015e3f) list_single_number_pane_g1_ParamLimits

0x3d92,	// (0x00015e3f) list_single_number_pane_g1

0x3d9e,	// (0x00015e4b) list_single_number_pane_g2_ParamLimits

0x3d9e,	// (0x00015e4b) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x000216b9) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x000216b9) list_single_number_pane_g

0x3df0,	// (0x00015e9d) list_single_number_pane_t1_ParamLimits

0x3df0,	// (0x00015e9d) list_single_number_pane_t1

0xac38,	// (0x0001cce5) list_single_number_pane_t2_ParamLimits

0xac38,	// (0x0001cce5) list_single_number_pane_t2

0x0001,

0xf985,	// (0x00021a32) list_single_number_pane_t_ParamLimits

0xf985,	// (0x00021a32) list_single_number_pane_t

0x3667,	// (0x00015714) list_single_graphic_pane_g1_ParamLimits

0x3667,	// (0x00015714) list_single_graphic_pane_g1

0x3d92,	// (0x00015e3f) list_single_graphic_pane_g2_ParamLimits

0x3d92,	// (0x00015e3f) list_single_graphic_pane_g2

0x3d9e,	// (0x00015e4b) list_single_graphic_pane_g3_ParamLimits

0x3d9e,	// (0x00015e4b) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x000216b2) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x000216b2) list_single_graphic_pane_g

0x3df0,	// (0x00015e9d) list_single_graphic_pane_t1_ParamLimits

0x3df0,	// (0x00015e9d) list_single_graphic_pane_t1

0x3d92,	// (0x00015e3f) list_single_heading_pane_g1_ParamLimits

0x3d92,	// (0x00015e3f) list_single_heading_pane_g1

0x3d9e,	// (0x00015e4b) list_single_heading_pane_g2_ParamLimits

0x3d9e,	// (0x00015e4b) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x000216b9) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x000216b9) list_single_heading_pane_g

0xa6a8,	// (0x0001c755) list_single_heading_pane_t1_ParamLimits

0xa6a8,	// (0x0001c755) list_single_heading_pane_t1

0xa6be,	// (0x0001c76b) list_single_heading_pane_t2_ParamLimits

0xa6be,	// (0x0001c76b) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x000216be) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x000216be) list_single_heading_pane_t

0x3d92,	// (0x00015e3f) list_single_number_heading_pane_g1_ParamLimits

0x3d92,	// (0x00015e3f) list_single_number_heading_pane_g1

0x3d9e,	// (0x00015e4b) list_single_number_heading_pane_g2_ParamLimits

0x3d9e,	// (0x00015e4b) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x000216b9) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x000216b9) list_single_number_heading_pane_g

0xa6a8,	// (0x0001c755) list_single_number_heading_pane_t1_ParamLimits

0xa6a8,	// (0x0001c755) list_single_number_heading_pane_t1

0xa6d0,	// (0x0001c77d) list_single_number_heading_pane_t2_ParamLimits

0xa6d0,	// (0x0001c77d) list_single_number_heading_pane_t2

0x3f33,	// (0x00015fe0) list_single_number_heading_pane_t3_ParamLimits

0x3f33,	// (0x00015fe0) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x000216c3) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x000216c3) list_single_number_heading_pane_t

0x3667,	// (0x00015714) list_single_graphic_heading_pane_g1_ParamLimits

0x3667,	// (0x00015714) list_single_graphic_heading_pane_g1

0xa6e2,	// (0x0001c78f) list_single_graphic_heading_pane_g4_ParamLimits

0xa6e2,	// (0x0001c78f) list_single_graphic_heading_pane_g4

0x3d9e,	// (0x00015e4b) list_single_graphic_heading_pane_g5_ParamLimits

0x3d9e,	// (0x00015e4b) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x000216ca) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x000216ca) list_single_graphic_heading_pane_g

0xa6a8,	// (0x0001c755) list_single_graphic_heading_pane_t1_ParamLimits

0xa6a8,	// (0x0001c755) list_single_graphic_heading_pane_t1

0xa6f3,	// (0x0001c7a0) list_single_graphic_heading_pane_t2_ParamLimits

0xa6f3,	// (0x0001c7a0) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x000216d1) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x000216d1) list_single_graphic_heading_pane_t

0x3f6d,	// (0x0001601a) list_single_large_graphic_pane_g1_ParamLimits

0x3f6d,	// (0x0001601a) list_single_large_graphic_pane_g1

0x3f79,	// (0x00016026) list_single_large_graphic_pane_g2_ParamLimits

0x3f79,	// (0x00016026) list_single_large_graphic_pane_g2

0x3f85,	// (0x00016032) list_single_large_graphic_pane_g3_ParamLimits

0x3f85,	// (0x00016032) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x000216d6) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x000216d6) list_single_large_graphic_pane_g

0x162e,	// (0x000136db) wait_border_pane_g2_copy1

0xa705,	// (0x0001c7b2) list_single_large_graphic_pane_g4_cp2

0x3f91,	// (0x0001603e) list_single_large_graphic_pane_t1_ParamLimits

0x3f91,	// (0x0001603e) list_single_large_graphic_pane_t1

0x3673,	// (0x00015720) list_double_pane_g1_ParamLimits

0x3673,	// (0x00015720) list_double_pane_g1

0x367f,	// (0x0001572c) list_double_pane_g2_ParamLimits

0x367f,	// (0x0001572c) list_double_pane_g2

0x0001,

0xf630,	// (0x000216dd) list_double_pane_g_ParamLimits

0xf630,	// (0x000216dd) list_double_pane_g

0x3e95,	// (0x00015f42) list_double_pane_t1_ParamLimits

0x3e95,	// (0x00015f42) list_double_pane_t1

0xa70d,	// (0x0001c7ba) list_double_pane_t2_ParamLimits

0xa70d,	// (0x0001c7ba) list_double_pane_t2

0x0001,

0xf635,	// (0x000216e2) list_double_pane_t_ParamLimits

0xf635,	// (0x000216e2) list_double_pane_t

0xa71f,	// (0x0001c7cc) list_double2_pane_g1_ParamLimits

0xa71f,	// (0x0001c7cc) list_double2_pane_g1

0x3852,	// (0x000158ff) list_double2_pane_g2_ParamLimits

0x3852,	// (0x000158ff) list_double2_pane_g2

0x0001,

0xf63a,	// (0x000216e7) list_double2_pane_g_ParamLimits

0xf63a,	// (0x000216e7) list_double2_pane_g

0xa730,	// (0x0001c7dd) list_double2_pane_t1_ParamLimits

0xa730,	// (0x0001c7dd) list_double2_pane_t1

0xa746,	// (0x0001c7f3) list_double2_pane_t2_ParamLimits

0xa746,	// (0x0001c7f3) list_double2_pane_t2

0x0001,

0xf63f,	// (0x000216ec) list_double2_pane_t_ParamLimits

0xf63f,	// (0x000216ec) list_double2_pane_t

0x3673,	// (0x00015720) list_double_number_pane_g1_ParamLimits

0x3673,	// (0x00015720) list_double_number_pane_g1

0x367f,	// (0x0001572c) list_double_number_pane_g2_ParamLimits

0x367f,	// (0x0001572c) list_double_number_pane_g2

0x0001,

0xf630,	// (0x000216dd) list_double_number_pane_g_ParamLimits

0xf630,	// (0x000216dd) list_double_number_pane_g

0xa758,	// (0x0001c805) list_double_number_pane_t1_ParamLimits

0xa758,	// (0x0001c805) list_double_number_pane_t1

0x368b,	// (0x00015738) list_double_number_pane_t2_ParamLimits

0x368b,	// (0x00015738) list_double_number_pane_t2

0xa76a,	// (0x0001c817) list_double_number_pane_t3_ParamLimits

0xa76a,	// (0x0001c817) list_double_number_pane_t3

0x0002,

0xf644,	// (0x000216f1) list_double_number_pane_t_ParamLimits

0xf644,	// (0x000216f1) list_double_number_pane_t

0x3667,	// (0x00015714) list_double_graphic_pane_g1_ParamLimits

0x3667,	// (0x00015714) list_double_graphic_pane_g1

0xa77c,	// (0x0001c829) list_double_graphic_pane_g2_ParamLimits

0xa77c,	// (0x0001c829) list_double_graphic_pane_g2

0xa78b,	// (0x0001c838) list_double_graphic_pane_g3_ParamLimits

0xa78b,	// (0x0001c838) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x000216f8) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x000216f8) list_double_graphic_pane_g

0xa7a3,	// (0x0001c850) list_double_graphic_pane_t1_ParamLimits

0xa7a3,	// (0x0001c850) list_double_graphic_pane_t1

0xa7b9,	// (0x0001c866) list_double_graphic_pane_t2_ParamLimits

0xa7b9,	// (0x0001c866) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00021701) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00021701) list_double_graphic_pane_t

0xa7cb,	// (0x0001c878) list_double2_graphic_pane_g1_ParamLimits

0xa7cb,	// (0x0001c878) list_double2_graphic_pane_g1

0x3673,	// (0x00015720) list_double2_graphic_pane_g2_ParamLimits

0x3673,	// (0x00015720) list_double2_graphic_pane_g2

0x367f,	// (0x0001572c) list_double2_graphic_pane_g3_ParamLimits

0x367f,	// (0x0001572c) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00021706) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00021706) list_double2_graphic_pane_g

0xa7d7,	// (0x0001c884) list_double2_graphic_pane_t1_ParamLimits

0xa7d7,	// (0x0001c884) list_double2_graphic_pane_t1

0xa7ed,	// (0x0001c89a) list_double2_graphic_pane_t2_ParamLimits

0xa7ed,	// (0x0001c89a) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0002170d) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0002170d) list_double2_graphic_pane_t

0xa7ff,	// (0x0001c8ac) list_double_large_graphic_pane_g1_ParamLimits

0xa7ff,	// (0x0001c8ac) list_double_large_graphic_pane_g1

0xa828,	// (0x0001c8d5) list_double_large_graphic_pane_g2_ParamLimits

0xa828,	// (0x0001c8d5) list_double_large_graphic_pane_g2

0x367f,	// (0x0001572c) list_double_large_graphic_pane_g3_ParamLimits

0x367f,	// (0x0001572c) list_double_large_graphic_pane_g3

0xa839,	// (0x0001c8e6) list_double_large_graphic_pane_g4_ParamLimits

0xa839,	// (0x0001c8e6) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00021712) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00021712) list_double_large_graphic_pane_g

0xa84a,	// (0x0001c8f7) list_double_large_graphic_pane_t1_ParamLimits

0xa84a,	// (0x0001c8f7) list_double_large_graphic_pane_t1

0xa863,	// (0x0001c910) list_double_large_graphic_pane_t2_ParamLimits

0xa863,	// (0x0001c910) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0002171d) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0002171d) list_double_large_graphic_pane_t

0xa875,	// (0x0001c922) list_double2_large_graphic_pane_g1_ParamLimits

0xa875,	// (0x0001c922) list_double2_large_graphic_pane_g1

0xa881,	// (0x0001c92e) list_double2_large_graphic_pane_g2_ParamLimits

0xa881,	// (0x0001c92e) list_double2_large_graphic_pane_g2

0xa892,	// (0x0001c93f) list_double2_large_graphic_pane_g3_ParamLimits

0xa892,	// (0x0001c93f) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00021722) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00021722) list_double2_large_graphic_pane_g

0xa89e,	// (0x0001c94b) list_double2_large_graphic_pane_t1_ParamLimits

0xa89e,	// (0x0001c94b) list_double2_large_graphic_pane_t1

0xa8b4,	// (0x0001c961) list_double2_large_graphic_pane_t2_ParamLimits

0xa8b4,	// (0x0001c961) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00021729) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00021729) list_double2_large_graphic_pane_t

0xa8c6,	// (0x0001c973) list_double_heading_pane_g1_ParamLimits

0xa8c6,	// (0x0001c973) list_double_heading_pane_g1

0xa8d7,	// (0x0001c984) list_double_heading_pane_g2_ParamLimits

0xa8d7,	// (0x0001c984) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0002172e) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0002172e) list_double_heading_pane_g

0xa8e3,	// (0x0001c990) list_double_heading_pane_t1_ParamLimits

0xa8e3,	// (0x0001c990) list_double_heading_pane_t1

0xa8f9,	// (0x0001c9a6) list_double_heading_pane_t2_ParamLimits

0xa8f9,	// (0x0001c9a6) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x00021733) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x00021733) list_double_heading_pane_t

0xa90b,	// (0x0001c9b8) list_double_graphic_heading_pane_g1_ParamLimits

0xa90b,	// (0x0001c9b8) list_double_graphic_heading_pane_g1

0xa8c6,	// (0x0001c973) list_double_graphic_heading_pane_g2_ParamLimits

0xa8c6,	// (0x0001c973) list_double_graphic_heading_pane_g2

0xa8d7,	// (0x0001c984) list_double_graphic_heading_pane_g3_ParamLimits

0xa8d7,	// (0x0001c984) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00021738) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00021738) list_double_graphic_heading_pane_g

0xa917,	// (0x0001c9c4) list_double_graphic_heading_pane_t1_ParamLimits

0xa917,	// (0x0001c9c4) list_double_graphic_heading_pane_t1

0xa7ed,	// (0x0001c89a) list_double_graphic_heading_pane_t2_ParamLimits

0xa7ed,	// (0x0001c89a) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0002173f) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0002173f) list_double_graphic_heading_pane_t

0xa828,	// (0x0001c8d5) list_double_time_pane_g1_ParamLimits

0xa828,	// (0x0001c8d5) list_double_time_pane_g1

0x367f,	// (0x0001572c) list_double_time_pane_g2_ParamLimits

0x367f,	// (0x0001572c) list_double_time_pane_g2

0x0001,

0xf697,	// (0x00021744) list_double_time_pane_g_ParamLimits

0xf697,	// (0x00021744) list_double_time_pane_g

0x36a1,	// (0x0001574e) list_double_time_pane_t1_ParamLimits

0x36a1,	// (0x0001574e) list_double_time_pane_t1

0xa92d,	// (0x0001c9da) list_double_time_pane_t2_ParamLimits

0xa92d,	// (0x0001c9da) list_double_time_pane_t2

0xa93f,	// (0x0001c9ec) list_double_time_pane_t3_ParamLimits

0xa93f,	// (0x0001c9ec) list_double_time_pane_t3

0xa951,	// (0x0001c9fe) list_double_time_pane_t4_ParamLimits

0xa951,	// (0x0001c9fe) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x00021749) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x00021749) list_double_time_pane_t

0xa963,	// (0x0001ca10) list_setting_pane_g1_ParamLimits

0xa963,	// (0x0001ca10) list_setting_pane_g1

0xa8d7,	// (0x0001c984) list_setting_pane_g2_ParamLimits

0xa8d7,	// (0x0001c984) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x00021752) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x00021752) list_setting_pane_g

0xa96f,	// (0x0001ca1c) list_setting_pane_t1_ParamLimits

0xa96f,	// (0x0001ca1c) list_setting_pane_t1

0xa986,	// (0x0001ca33) list_setting_pane_t2_ParamLimits

0xa986,	// (0x0001ca33) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x00021757) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x00021757) list_setting_pane_t

0xa9c3,	// (0x0001ca70) set_value_pane_cp_ParamLimits

0xa9c3,	// (0x0001ca70) set_value_pane_cp

0xa9cf,	// (0x0001ca7c) list_setting_number_pane_g1_ParamLimits

0xa9cf,	// (0x0001ca7c) list_setting_number_pane_g1

0xa9db,	// (0x0001ca88) list_setting_number_pane_g2_ParamLimits

0xa9db,	// (0x0001ca88) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x0002175e) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x0002175e) list_setting_number_pane_g

0xa9e7,	// (0x0001ca94) list_setting_number_pane_t1_ParamLimits

0xa9e7,	// (0x0001ca94) list_setting_number_pane_t1

0xa9fb,	// (0x0001caa8) list_setting_number_pane_t2_ParamLimits

0xa9fb,	// (0x0001caa8) list_setting_number_pane_t2

0xaa12,	// (0x0001cabf) list_setting_number_pane_t3_ParamLimits

0xaa12,	// (0x0001cabf) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x00021763) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x00021763) list_setting_number_pane_t

0xa9c3,	// (0x0001ca70) set_value_pane_ParamLimits

0xa9c3,	// (0x0001ca70) set_value_pane

0xe977,	// (0x00020a24) bg_set_opt_pane_ParamLimits

0xe977,	// (0x00020a24) bg_set_opt_pane

0x3ac5,	// (0x00015b72) set_value_pane_t1

0xe998,	// (0x00020a45) slider_set_pane_cp3

0xe9a1,	// (0x00020a4e) volume_small_pane_cp

0xe9aa,	// (0x00020a57) list_form_gen_pane

0xe2a9,	// (0x00020356) scroll_pane_cp8

0xaa55,	// (0x0001cb02) form_field_data_pane_ParamLimits

0xaa55,	// (0x0001cb02) form_field_data_pane

0xaa6c,	// (0x0001cb19) form_field_data_wide_pane_ParamLimits

0xaa6c,	// (0x0001cb19) form_field_data_wide_pane

0xaa8c,	// (0x0001cb39) form_field_popup_pane_ParamLimits

0xaa8c,	// (0x0001cb39) form_field_popup_pane

0xaaa4,	// (0x0001cb51) form_field_popup_wide_pane_ParamLimits

0xaaa4,	// (0x0001cb51) form_field_popup_wide_pane

0x3b49,	// (0x00015bf6) form_field_slider_pane_ParamLimits

0x3b49,	// (0x00015bf6) form_field_slider_pane

0x3b5c,	// (0x00015c09) form_field_slider_wide_pane_ParamLimits

0x3b5c,	// (0x00015c09) form_field_slider_wide_pane

0xe9b3,	// (0x00020a60) data_form_pane

0xb3fd,	// (0x0001d4aa) form_field_data_pane_t1

0xe9bf,	// (0x00020a6c) input_focus_pane

0xe9cd,	// (0x00020a7a) data_form_wide_pane

0x3b83,	// (0x00015c30) form_field_data_wide_pane_t1

0xe128,	// (0x000201d5) input_focus_pane_cp6

0xaac5,	// (0x0001cb72) form_field_popup_pane_t1

0xe9bf,	// (0x00020a6c) input_focus_pane_cp7

0xe9b3,	// (0x00020a60) list_form_pane

0x3bc5,	// (0x00015c72) form_field_popup_wide_pane_t1

0xe9bf,	// (0x00020a6c) input_focus_pane_cp8

0xe9ed,	// (0x00020a9a) list_form_wide_pane

0xaae5,	// (0x0001cb92) form_field_slider_pane_t1_ParamLimits

0xaae5,	// (0x0001cb92) form_field_slider_pane_t1

0xaafb,	// (0x0001cba8) form_field_slider_pane_t2_ParamLimits

0xaafb,	// (0x0001cba8) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x00021773) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x00021773) form_field_slider_pane_t

0xdd4c,	// (0x0001fdf9) input_focus_pane_cp9_ParamLimits

0xdd4c,	// (0x0001fdf9) input_focus_pane_cp9

0xab10,	// (0x0001cbbd) slider_cont_pane_ParamLimits

0xab10,	// (0x0001cbbd) slider_cont_pane

0xe9fc,	// (0x00020aa9) form_field_slider_wide_pane_t1_ParamLimits

0xe9fc,	// (0x00020aa9) form_field_slider_wide_pane_t1

0x3c1a,	// (0x00015cc7) form_field_slider_wide_pane_t2_ParamLimits

0x3c1a,	// (0x00015cc7) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x00021778) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x00021778) form_field_slider_wide_pane_t

0xdd4c,	// (0x0001fdf9) input_focus_pane_cp10_ParamLimits

0xdd4c,	// (0x0001fdf9) input_focus_pane_cp10

0xab24,	// (0x0001cbd1) slider_cont_pane_cp1_ParamLimits

0xab24,	// (0x0001cbd1) slider_cont_pane_cp1

0xab3a,	// (0x0001cbe7) slider_form_pane_cp

0xea0e,	// (0x00020abb) input_focus_pane_g1

0xea16,	// (0x00020ac3) input_focus_pane_g2

0xea1e,	// (0x00020acb) input_focus_pane_g3

0xea26,	// (0x00020ad3) input_focus_pane_g4

0xea2e,	// (0x00020adb) input_focus_pane_g5

0xea36,	// (0x00020ae3) input_focus_pane_g6

0xea3e,	// (0x00020aeb) input_focus_pane_g7

0xea46,	// (0x00020af3) input_focus_pane_g8

0xea4e,	// (0x00020afb) input_focus_pane_g9

0xdc7c,	// (0x0001fd29) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x0002177d) input_focus_pane_g

0x1637,	// (0x000136e4) wait_border_pane_g3_copy1

0xab42,	// (0x0001cbef) data_form_pane_t1

0xdc7c,	// (0x0001fd29) wait_anim_pane_g1_copy1

0xac4a,	// (0x0001ccf7) data_form_wide_pane_t1

0xea56,	// (0x00020b03) list_form_graphic_pane_cp_ParamLimits

0xea56,	// (0x00020b03) list_form_graphic_pane_cp

0x226d,	// (0x0001431a) slider_form_pane_g1

0x2276,	// (0x00014323) slider_form_pane_g2

0x0006,

0xf9b5,	// (0x00021a62) slider_form_pane_g

0xab5b,	// (0x0001cc08) list_form_graphic_pane_ParamLimits

0xab5b,	// (0x0001cc08) list_form_graphic_pane

0x3c7a,	// (0x00015d27) list_form_graphic_pane_g1

0x3c82,	// (0x00015d2f) list_form_graphic_pane_t1_ParamLimits

0x3c82,	// (0x00015d2f) list_form_graphic_pane_t1

0xdd62,	// (0x0001fe0f) list_highlight_pane_cp5_ParamLimits

0xdd62,	// (0x0001fe0f) list_highlight_pane_cp5

0xab70,	// (0x0001cc1d) find_pane_g1

0xea6a,	// (0x00020b17) input_find_pane

0xab7b,	// (0x0001cc28) input_find_pane_g1_ParamLimits

0xab7b,	// (0x0001cc28) input_find_pane_g1

0x3cac,	// (0x00015d59) input_find_pane_t1_ParamLimits

0x3cac,	// (0x00015d59) input_find_pane_t1

0x3cc1,	// (0x00015d6e) input_find_pane_t2_ParamLimits

0x3cc1,	// (0x00015d6e) input_find_pane_t2

0x0001,

0xf6e5,	// (0x00021792) input_find_pane_t_ParamLimits

0xf6e5,	// (0x00021792) input_find_pane_t

0xea73,	// (0x00020b20) input_focus_pane_cp5_ParamLimits

0xea73,	// (0x00020b20) input_focus_pane_cp5

0xdd4c,	// (0x0001fdf9) bg_popup_window_pane_cp2_ParamLimits

0xdd4c,	// (0x0001fdf9) bg_popup_window_pane_cp2

0xea8d,	// (0x00020b3a) listscroll_menu_pane_ParamLimits

0xea8d,	// (0x00020b3a) listscroll_menu_pane

0xea99,	// (0x00020b46) popup_submenu_window_ParamLimits

0xea99,	// (0x00020b46) popup_submenu_window

0xeabd,	// (0x00020b6a) find_popup_pane_g1

0xeac5,	// (0x00020b72) input_popup_find_pane_cp

0xea73,	// (0x00020b20) input_focus_pane_cp4_ParamLimits

0xea73,	// (0x00020b20) input_focus_pane_cp4

0xeacf,	// (0x00020b7c) input_popup_find_pane_t1_ParamLimits

0xeacf,	// (0x00020b7c) input_popup_find_pane_t1

0xdcfe,	// (0x0001fdab) bg_popup_sub_pane_cp

0xeafd,	// (0x00020baa) listscroll_popup_sub_pane

0xeb05,	// (0x00020bb2) list_submenu_pane_ParamLimits

0xeb05,	// (0x00020bb2) list_submenu_pane

0xeb16,	// (0x00020bc3) scroll_pane_cp4

0xea56,	// (0x00020b03) list_single_popup_submenu_pane_ParamLimits

0xea56,	// (0x00020b03) list_single_popup_submenu_pane

0xeb1e,	// (0x00020bcb) list_single_popup_submenu_pane_g1

0xeb26,	// (0x00020bd3) list_single_popup_submenu_pane_t1_ParamLimits

0xeb26,	// (0x00020bd3) list_single_popup_submenu_pane_t1

0xdd4c,	// (0x0001fdf9) bg_active_tab_pane_cp1_ParamLimits

0xdd4c,	// (0x0001fdf9) bg_active_tab_pane_cp1

0x222d,	// (0x000142da) tabs_2_active_pane_g1

0xb421,	// (0x0001d4ce) tabs_2_active_pane_t1

0xdd4c,	// (0x0001fdf9) bg_passive_tab_pane_cp1_ParamLimits

0xdd4c,	// (0x0001fdf9) bg_passive_tab_pane_cp1

0x222d,	// (0x000142da) tabs_2_passive_pane_g1

0xb421,	// (0x0001d4ce) tabs_2_passive_pane_t1

0xdd62,	// (0x0001fe0f) bg_active_tab_pane_cp4

0xb437,	// (0x0001d4e4) tabs_2_long_active_pane_t1

0x0dd6,	// (0x00012e83) bg_passive_tab_pane_cp4

0x1619,	// (0x000136c6) list_single_midp_graphic_pane_g4_ParamLimits

0xdd62,	// (0x0001fe0f) bg_active_tab_pane_cp5

0xb44e,	// (0x0001d4fb) tabs_3_long_active_pane_t1

0x0dd6,	// (0x00012e83) bg_passive_tab_pane_cp5

0x1619,	// (0x000136c6) list_single_midp_graphic_pane_g4

0xdd62,	// (0x0001fe0f) bg_popup_window_pane_cp13_ParamLimits

0xdd62,	// (0x0001fe0f) bg_popup_window_pane_cp13

0xeb44,	// (0x00020bf1) listscroll_popup_fast_pane_ParamLimits

0xeb44,	// (0x00020bf1) listscroll_popup_fast_pane

0xeb53,	// (0x00020c00) grid_popup_fast_pane_ParamLimits

0xeb53,	// (0x00020c00) grid_popup_fast_pane

0xeb65,	// (0x00020c12) scroll_pane_cp9_ParamLimits

0xeb65,	// (0x00020c12) scroll_pane_cp9

0x6c7e,	// (0x00018d2b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6c7e,	// (0x00018d2b) list_single_graphic_hl_pane_t1_cp2

0xeb89,	// (0x00020c36) input_focus_pane_cp20_ParamLimits

0xeb89,	// (0x00020c36) input_focus_pane_cp20

0xeb97,	// (0x00020c44) query_popup_data_pane_t1_ParamLimits

0xeb97,	// (0x00020c44) query_popup_data_pane_t1

0xebaa,	// (0x00020c57) query_popup_data_pane_t2_ParamLimits

0xebaa,	// (0x00020c57) query_popup_data_pane_t2

0xebf0,	// (0x00020c9d) query_popup_data_pane_t3_ParamLimits

0xebf0,	// (0x00020c9d) query_popup_data_pane_t3

0xec31,	// (0x00020cde) query_popup_data_pane_t4_ParamLimits

0xec31,	// (0x00020cde) query_popup_data_pane_t4

0xec6d,	// (0x00020d1a) query_popup_data_pane_t5_ParamLimits

0xec6d,	// (0x00020d1a) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x00021797) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x00021797) query_popup_data_pane_t

0xea0e,	// (0x00020abb) bg_set_opt_pane_g1

0xea16,	// (0x00020ac3) bg_set_opt_pane_g2

0xea1e,	// (0x00020acb) bg_set_opt_pane_g3

0xea26,	// (0x00020ad3) bg_set_opt_pane_g4

0xea2e,	// (0x00020adb) bg_set_opt_pane_g5

0xea36,	// (0x00020ae3) bg_set_opt_pane_g6

0xea3e,	// (0x00020aeb) bg_set_opt_pane_g7

0xea46,	// (0x00020af3) bg_set_opt_pane_g8

0xea4e,	// (0x00020afb) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x000217a2) bg_set_opt_pane_g

0x4a18,	// (0x00016ac5) control_top_pane_stacon_ParamLimits

0x4a18,	// (0x00016ac5) control_top_pane_stacon

0x4a6b,	// (0x00016b18) signal_pane_stacon_ParamLimits

0x4a6b,	// (0x00016b18) signal_pane_stacon

0xf08b,	// (0x00021138) stacon_top_pane_g1_ParamLimits

0xf08b,	// (0x00021138) stacon_top_pane_g1

0x4a90,	// (0x00016b3d) title_pane_stacon_ParamLimits

0x4a90,	// (0x00016b3d) title_pane_stacon

0x4ab2,	// (0x00016b5f) uni_indicator_pane_stacon_ParamLimits

0x4ab2,	// (0x00016b5f) uni_indicator_pane_stacon

0x4ac7,	// (0x00016b74) battery_pane_stacon_ParamLimits

0x4ac7,	// (0x00016b74) battery_pane_stacon

0x4b07,	// (0x00016bb4) control_bottom_pane_stacon_ParamLimits

0x4b07,	// (0x00016bb4) control_bottom_pane_stacon

0x4b26,	// (0x00016bd3) navi_pane_stacon_ParamLimits

0x4b26,	// (0x00016bd3) navi_pane_stacon

0xf0ad,	// (0x0002115a) stacon_bottom_pane_g1_ParamLimits

0xf0ad,	// (0x0002115a) stacon_bottom_pane_g1

0xeca4,	// (0x00020d51) aid_levels_signal_lsc_ParamLimits

0xeca4,	// (0x00020d51) aid_levels_signal_lsc

0x47e4,	// (0x00016891) signal_pane_stacon_g1_ParamLimits

0x47e4,	// (0x00016891) signal_pane_stacon_g1

0x47f0,	// (0x0001689d) signal_pane_stacon_g2_ParamLimits

0x47f0,	// (0x0001689d) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x000217b5) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x000217b5) signal_pane_stacon_g

0x4824,	// (0x000168d1) title_pane_stacon_t1_ParamLimits

0x4824,	// (0x000168d1) title_pane_stacon_t1

0xecbe,	// (0x00020d6b) uni_indicator_pane_stacon_g1

0xecc8,	// (0x00020d75) uni_indicator_pane_stacon_g2

0xecd2,	// (0x00020d7f) uni_indicator_pane_stacon_g3

0xecdc,	// (0x00020d89) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x000217c1) uni_indicator_pane_stacon_g

0x4849,	// (0x000168f6) control_top_pane_stacon_g1

0x4851,	// (0x000168fe) control_top_pane_stacon_t1_ParamLimits

0x4851,	// (0x000168fe) control_top_pane_stacon_t1

0xece6,	// (0x00020d93) aid_levels_battery_lsc_ParamLimits

0xece6,	// (0x00020d93) aid_levels_battery_lsc

0x4882,	// (0x0001692f) battery_pane_stacon_g1_ParamLimits

0x4882,	// (0x0001692f) battery_pane_stacon_g1

0x488e,	// (0x0001693b) battery_pane_stacon_g2_ParamLimits

0x488e,	// (0x0001693b) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x000217ca) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x000217ca) battery_pane_stacon_g

0x48bd,	// (0x0001696a) navi_icon_pane_stacon

0x48cd,	// (0x0001697a) navi_navi_pane_stacon

0x48bd,	// (0x0001696a) navi_text_pane_stacon

0x4849,	// (0x000168f6) control_bottom_pane_stacon_g1

0x48dd,	// (0x0001698a) control_bottom_pane_stacon_t1_ParamLimits

0x48dd,	// (0x0001698a) control_bottom_pane_stacon_t1

0xb464,	// (0x0001d511) grid_app_pane_ParamLimits

0xb464,	// (0x0001d511) grid_app_pane

0xb492,	// (0x0001d53f) scroll_pane_cp15_ParamLimits

0xb492,	// (0x0001d53f) scroll_pane_cp15

0xb4a9,	// (0x0001d556) cell_app_pane_ParamLimits

0xb4a9,	// (0x0001d556) cell_app_pane

0xb4e8,	// (0x0001d595) cell_app_pane_g1_ParamLimits

0xb4e8,	// (0x0001d595) cell_app_pane_g1

0xed0e,	// (0x00020dbb) cell_app_pane_g2_ParamLimits

0xed0e,	// (0x00020dbb) cell_app_pane_g2

0x0001,

0xf722,	// (0x000217cf) cell_app_pane_g_ParamLimits

0xf722,	// (0x000217cf) cell_app_pane_g

0xed1a,	// (0x00020dc7) cell_app_pane_t1_ParamLimits

0xed1a,	// (0x00020dc7) cell_app_pane_t1

0xed2c,	// (0x00020dd9) grid_highlight_pane_ParamLimits

0xed2c,	// (0x00020dd9) grid_highlight_pane

0xea0e,	// (0x00020abb) cell_highlight_pane_g1

0xea16,	// (0x00020ac3) cell_highlight_pane_g2

0xea1e,	// (0x00020acb) cell_highlight_pane_g3

0xea26,	// (0x00020ad3) cell_highlight_pane_g4

0xea2e,	// (0x00020adb) cell_highlight_pane_g5

0xea36,	// (0x00020ae3) cell_highlight_pane_g6

0xea3e,	// (0x00020aeb) cell_highlight_pane_g7

0xea46,	// (0x00020af3) cell_highlight_pane_g8

0xea4e,	// (0x00020afb) cell_highlight_pane_g9

0xdc7c,	// (0x0001fd29) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x0002177d) cell_highlight_pane_g

0xed3d,	// (0x00020dea) bg_scroll_pane

0x4921,	// (0x000169ce) scroll_handle_pane

0xed84,	// (0x00020e31) scroll_bg_pane_g1

0xed99,	// (0x00020e46) scroll_bg_pane_g2

0xedb1,	// (0x00020e5e) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x000217d4) scroll_bg_pane_g

0xedc6,	// (0x00020e73) scroll_handle_focus_pane_ParamLimits

0xedc6,	// (0x00020e73) scroll_handle_focus_pane

0xed84,	// (0x00020e31) scroll_handle_pane_g1

0xedd3,	// (0x00020e80) scroll_handle_pane_g2

0xedb1,	// (0x00020e5e) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x000217db) scroll_handle_pane_g

0xea73,	// (0x00020b20) bg_popup_sub_pane_cp21_ParamLimits

0xea73,	// (0x00020b20) bg_popup_sub_pane_cp21

0xede7,	// (0x00020e94) popup_fep_japan_predictive_window_t1_ParamLimits

0xede7,	// (0x00020e94) popup_fep_japan_predictive_window_t1

0xedfe,	// (0x00020eab) popup_fep_japan_predictive_window_t2_ParamLimits

0xedfe,	// (0x00020eab) popup_fep_japan_predictive_window_t2

0xee31,	// (0x00020ede) popup_fep_japan_predictive_window_t3_ParamLimits

0xee31,	// (0x00020ede) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x000217e2) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x000217e2) popup_fep_japan_predictive_window_t

0xdcfe,	// (0x0001fdab) bg_popup_sub_pane_cp23

0xee68,	// (0x00020f15) listscroll_japin_cand_pane

0xee70,	// (0x00020f1d) popup_fep_japan_candidate_window_t1

0xee7e,	// (0x00020f2b) candidate_pane_ParamLimits

0xee7e,	// (0x00020f2b) candidate_pane

0xee91,	// (0x00020f3e) scroll_pane_cp30

0xee99,	// (0x00020f46) list_single_popup_jap_candidate_pane_ParamLimits

0xee99,	// (0x00020f46) list_single_popup_jap_candidate_pane

0xdcfe,	// (0x0001fdab) list_highlight_pane_cp30

0xeeae,	// (0x00020f5b) list_single_popup_jap_candidate_pane_t1

0xb515,	// (0x0001d5c2) level_1_signal

0xb527,	// (0x0001d5d4) level_2_signal

0xb53a,	// (0x0001d5e7) level_3_signal

0xb54d,	// (0x0001d5fa) level_4_signal

0xb560,	// (0x0001d60d) level_5_signal

0xb573,	// (0x0001d620) level_6_signal

0xb586,	// (0x0001d633) level_7_signal

0xb515,	// (0x0001d5c2) level_1_battery

0xb527,	// (0x0001d5d4) level_2_battery

0xb53a,	// (0x0001d5e7) level_3_battery

0xb54d,	// (0x0001d5fa) level_4_battery

0xb560,	// (0x0001d60d) level_5_battery

0xb573,	// (0x0001d620) level_6_battery

0xb586,	// (0x0001d633) level_7_battery

0xeed5,	// (0x00020f82) list_menu_pane_ParamLimits

0xeed5,	// (0x00020f82) list_menu_pane

0xeee6,	// (0x00020f93) scroll_pane_cp25_ParamLimits

0xeee6,	// (0x00020f93) scroll_pane_cp25

0xb599,	// (0x0001d646) list_double2_graphic_pane_cp2_ParamLimits

0xb599,	// (0x0001d646) list_double2_graphic_pane_cp2

0xb599,	// (0x0001d646) list_double2_large_graphic_pane_cp2_ParamLimits

0xb599,	// (0x0001d646) list_double2_large_graphic_pane_cp2

0xb599,	// (0x0001d646) list_double2_pane_cp2_ParamLimits

0xb599,	// (0x0001d646) list_double2_pane_cp2

0xb599,	// (0x0001d646) list_double_graphic_pane_cp2_ParamLimits

0xb599,	// (0x0001d646) list_double_graphic_pane_cp2

0xb599,	// (0x0001d646) list_double_large_graphic_pane_cp2_ParamLimits

0xb599,	// (0x0001d646) list_double_large_graphic_pane_cp2

0xb599,	// (0x0001d646) list_double_number_pane_cp2_ParamLimits

0xb599,	// (0x0001d646) list_double_number_pane_cp2

0xb599,	// (0x0001d646) list_double_pane_cp2_ParamLimits

0xb599,	// (0x0001d646) list_double_pane_cp2

0xb5b4,	// (0x0001d661) list_single_2graphic_pane_cp2_ParamLimits

0xb5b4,	// (0x0001d661) list_single_2graphic_pane_cp2

0xb5b4,	// (0x0001d661) list_single_graphic_heading_pane_cp2_ParamLimits

0xb5b4,	// (0x0001d661) list_single_graphic_heading_pane_cp2

0xb5b4,	// (0x0001d661) list_single_graphic_pane_cp2_ParamLimits

0xb5b4,	// (0x0001d661) list_single_graphic_pane_cp2

0xb5b4,	// (0x0001d661) list_single_heading_pane_cp2_ParamLimits

0xb5b4,	// (0x0001d661) list_single_heading_pane_cp2

0xb5c5,	// (0x0001d672) list_single_large_graphic_pane_cp2_ParamLimits

0xb5c5,	// (0x0001d672) list_single_large_graphic_pane_cp2

0xb5b4,	// (0x0001d661) list_single_number_heading_pane_cp2_ParamLimits

0xb5b4,	// (0x0001d661) list_single_number_heading_pane_cp2

0xb5b4,	// (0x0001d661) list_single_number_pane_cp2_ParamLimits

0xb5b4,	// (0x0001d661) list_single_number_pane_cp2

0xb5b4,	// (0x0001d661) list_single_pane_cp2_ParamLimits

0xb5b4,	// (0x0001d661) list_single_pane_cp2

0xef08,	// (0x00020fb5) bg_popup_sub_pane_cp22

0x49d0,	// (0x00016a7d) popup_side_volume_key_window_g1

0x49f4,	// (0x00016aa1) popup_side_volume_key_window_t1

0x4a10,	// (0x00016abd) volume_small_pane_cp1

0xdd4c,	// (0x0001fdf9) bg_popup_sub_pane_cp24_ParamLimits

0xdd4c,	// (0x0001fdf9) bg_popup_sub_pane_cp24

0xef3c,	// (0x00020fe9) fep_china_uni_candidate_pane_ParamLimits

0xef3c,	// (0x00020fe9) fep_china_uni_candidate_pane

0xef50,	// (0x00020ffd) fep_china_uni_entry_pane

0xef60,	// (0x0002100d) popup_fep_china_uni_window_g1

0xef7c,	// (0x00021029) fep_china_uni_entry_pane_g1

0xef84,	// (0x00021031) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x0002180f) fep_china_uni_entry_pane_g

0xef8c,	// (0x00021039) fep_entry_item_pane

0xef96,	// (0x00021043) fep_candidate_item_pane

0xef9e,	// (0x0002104b) fep_china_uni_candidate_pane_g1

0xefa6,	// (0x00021053) fep_china_uni_candidate_pane_g2

0xefae,	// (0x0002105b) fep_china_uni_candidate_pane_g3

0xefb6,	// (0x00021063) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x00021814) fep_china_uni_candidate_pane_g

0xdc7c,	// (0x0001fd29) fep_entry_item_pane_g1

0xefbe,	// (0x0002106b) fep_entry_item_pane_t1_ParamLimits

0xefbe,	// (0x0002106b) fep_entry_item_pane_t1

0xefd4,	// (0x00021081) fep_candidate_item_pane_t1_ParamLimits

0xefd4,	// (0x00021081) fep_candidate_item_pane_t1

0xefe9,	// (0x00021096) fep_candidate_item_pane_t2_ParamLimits

0xefe9,	// (0x00021096) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x0002181d) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x0002181d) fep_candidate_item_pane_t

0xdd62,	// (0x0001fe0f) list_highlight_pane_cp31_ParamLimits

0xdd62,	// (0x0001fe0f) list_highlight_pane_cp31

0xeffb,	// (0x000210a8) level_1_signal_lsc

0xf004,	// (0x000210b1) level_2_signal_lsc

0xf00d,	// (0x000210ba) level_3_signal_lsc

0xf016,	// (0x000210c3) level_4_signal_lsc

0xf01f,	// (0x000210cc) level_5_signal_lsc

0xf028,	// (0x000210d5) level_6_signal_lsc

0xf031,	// (0x000210de) level_7_signal_lsc

0xf031,	// (0x000210de) level_1_battery_lsc

0xf03a,	// (0x000210e7) level_2_battery_lsc

0xf043,	// (0x000210f0) level_3_battery_lsc

0xf04c,	// (0x000210f9) level_4_battery_lsc

0xf055,	// (0x00021102) level_5_battery_lsc

0xf05e,	// (0x0002110b) level_6_battery_lsc

0xeffb,	// (0x000210a8) level_7_battery_lsc

0xf067,	// (0x00021114) scroll_handle_focus_pane_g1

0xf070,	// (0x0002111d) scroll_handle_focus_pane_g2

0xf079,	// (0x00021126) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x00021822) scroll_handle_focus_pane_g

0x3cd6,	// (0x00015d83) list_single_2graphic_pane_g1_ParamLimits

0x3cd6,	// (0x00015d83) list_single_2graphic_pane_g1

0xa6e2,	// (0x0001c78f) list_single_2graphic_pane_g2_ParamLimits

0xa6e2,	// (0x0001c78f) list_single_2graphic_pane_g2

0x3d9e,	// (0x00015e4b) list_single_2graphic_pane_g3_ParamLimits

0x3d9e,	// (0x00015e4b) list_single_2graphic_pane_g3

0xab87,	// (0x0001cc34) list_single_2graphic_pane_g4_ParamLimits

0xab87,	// (0x0001cc34) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x00021829) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x00021829) list_single_2graphic_pane_g

0xab93,	// (0x0001cc40) list_single_2graphic_pane_t1_ParamLimits

0xab93,	// (0x0001cc40) list_single_2graphic_pane_t1

0xabc1,	// (0x0001cc6e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xabc1,	// (0x0001cc6e) list_double2_graphic_large_graphic_pane_g1

0xa881,	// (0x0001c92e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa881,	// (0x0001c92e) list_double2_graphic_large_graphic_pane_g2

0xa892,	// (0x0001c93f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa892,	// (0x0001c93f) list_double2_graphic_large_graphic_pane_g3

0xabd1,	// (0x0001cc7e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xabd1,	// (0x0001cc7e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x00021832) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x00021832) list_double2_graphic_large_graphic_pane_g

0xabdd,	// (0x0001cc8a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xabdd,	// (0x0001cc8a) list_double2_graphic_large_graphic_pane_t1

0xabf3,	// (0x0001cca0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xabf3,	// (0x0001cca0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x0002183b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x0002183b) list_double2_graphic_large_graphic_pane_t

0xf154,	// (0x00021201) popup_fast_swap_window_ParamLimits

0xf154,	// (0x00021201) popup_fast_swap_window

0xf170,	// (0x0002121d) popup_side_volume_key_window

0xf18a,	// (0x00021237) stacon_top_pane

0xf194,	// (0x00021241) status_pane_ParamLimits

0xf194,	// (0x00021241) status_pane

0xf18a,	// (0x00021237) status_small_pane

0xdcfe,	// (0x0001fdab) control_pane

0xdcfe,	// (0x0001fdab) stacon_bottom_pane

0xe2a9,	// (0x00020356) scroll_pane_cp121

0xe9aa,	// (0x00020a57) set_content_pane

0x223e,	// (0x000142eb) bg_active_tab_pane_g1_cp1

0xf082,	// (0x0002112f) bg_active_tab_pane_g2_cp1

0x2235,	// (0x000142e2) bg_active_tab_pane_g3_cp1

0x223e,	// (0x000142eb) bg_passive_tab_pane_g1_cp1

0xf082,	// (0x0002112f) bg_passive_tab_pane_g2_cp1

0x2235,	// (0x000142e2) bg_passive_tab_pane_g3_cp1

0xb61e,	// (0x0001d6cb) bg_active_tab_pane_g1_cp2

0xf082,	// (0x0002112f) bg_active_tab_pane_g2_cp2

0xb627,	// (0x0001d6d4) bg_active_tab_pane_g3_cp2

0xb61e,	// (0x0001d6cb) bg_passive_tab_pane_g1_cp2

0xf082,	// (0x0002112f) bg_passive_tab_pane_g2_cp2

0xb627,	// (0x0001d6d4) bg_passive_tab_pane_g3_cp2

0xb630,	// (0x0001d6dd) bg_active_tab_pane_g1_cp3

0xf082,	// (0x0002112f) bg_active_tab_pane_g2_cp3

0xb639,	// (0x0001d6e6) bg_active_tab_pane_g3_cp3

0xb630,	// (0x0001d6dd) bg_passive_tab_pane_g1_cp3

0xf082,	// (0x0002112f) bg_passive_tab_pane_g2_cp3

0xb639,	// (0x0001d6e6) bg_passive_tab_pane_g3_cp3

0xb642,	// (0x0001d6ef) bg_active_tab_pane_g1_cp4

0xf082,	// (0x0002112f) bg_active_tab_pane_g2_cp4

0xb64b,	// (0x0001d6f8) bg_active_tab_pane_g3_cp4

0xb642,	// (0x0001d6ef) bg_passive_tab_pane_g1_cp4

0xf082,	// (0x0002112f) bg_passive_tab_pane_g2_cp4

0xb64b,	// (0x0001d6f8) bg_passive_tab_pane_g3_cp4

0xf0c9,	// (0x00021176) bg_active_tab_pane_g1_cp5

0xf082,	// (0x0002112f) bg_active_tab_pane_g2_cp5

0xf0d2,	// (0x0002117f) bg_active_tab_pane_g3_cp5

0xf0c9,	// (0x00021176) bg_passive_tab_pane_g1_cp5

0xf082,	// (0x0002112f) bg_passive_tab_pane_g2_cp5

0xf0d2,	// (0x0002117f) bg_passive_tab_pane_g3_cp5

0xb654,	// (0x0001d701) list_set_graphic_pane_ParamLimits

0xb654,	// (0x0001d701) list_set_graphic_pane

0xdcfe,	// (0x0001fdab) bg_set_opt_pane_cp4

0xf0db,	// (0x00021188) list_set_graphic_pane_g1_ParamLimits

0xf0db,	// (0x00021188) list_set_graphic_pane_g1

0xf0e7,	// (0x00021194) list_set_graphic_pane_g2_ParamLimits

0xf0e7,	// (0x00021194) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x00021840) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x00021840) list_set_graphic_pane_g

0x0009,

0xfaeb,	// (0x00021b98) volume_small_pane_cp_g

0xf109,	// (0x000211b6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xf109,	// (0x000211b6) list_double2_large_graphic_pane_g1_cp2

0xf115,	// (0x000211c2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf115,	// (0x000211c2) list_double2_large_graphic_pane_g2_cp2

0xf124,	// (0x000211d1) list_double2_large_graphic_pane_g3_cp2

0xf12c,	// (0x000211d9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf12c,	// (0x000211d9) list_double2_large_graphic_pane_t1_cp2

0xf142,	// (0x000211ef) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf142,	// (0x000211ef) list_double2_large_graphic_pane_t2_cp2

0x1fa6,	// (0x00014053) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x1fa6,	// (0x00014053) list_double_large_graphic_pane_g1_cp2

0x1fb7,	// (0x00014064) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x1fb7,	// (0x00014064) list_double_large_graphic_pane_g2_cp2

0xf26f,	// (0x0002131c) list_double_large_graphic_pane_g3_cp2

0x1fc6,	// (0x00014073) list_double_large_graphic_pane_g4_cp

0x1fce,	// (0x0001407b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x1fce,	// (0x0001407b) list_double_large_graphic_pane_t1_cp2

0x1fe5,	// (0x00014092) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x1fe5,	// (0x00014092) list_double_large_graphic_pane_t2_cp2

0xf1a2,	// (0x0002124f) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf1a2,	// (0x0002124f) list_double2_graphic_pane_g1_cp2

0xf1ae,	// (0x0002125b) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf1ae,	// (0x0002125b) list_double2_graphic_pane_g2_cp2

0xf1bd,	// (0x0002126a) list_double2_graphic_pane_g3_cp2

0xf1c5,	// (0x00021272) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf1c5,	// (0x00021272) list_double2_graphic_pane_t1_cp2

0xf1db,	// (0x00021288) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf1db,	// (0x00021288) list_double2_graphic_pane_t2_cp2

0xf1ed,	// (0x0002129a) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf1ed,	// (0x0002129a) list_single_number_heading_pane_g1_cp2

0xf1f9,	// (0x000212a6) list_single_number_heading_pane_g2_cp2

0xf201,	// (0x000212ae) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf201,	// (0x000212ae) list_single_number_heading_pane_t1_cp2

0xf217,	// (0x000212c4) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf217,	// (0x000212c4) list_single_number_heading_pane_t2_cp2

0xf229,	// (0x000212d6) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf229,	// (0x000212d6) list_single_number_heading_pane_t3_cp2

0xf1ed,	// (0x0002129a) list_single_heading_pane_g1_cp2_ParamLimits

0xf1ed,	// (0x0002129a) list_single_heading_pane_g1_cp2

0xf1f9,	// (0x000212a6) list_single_heading_pane_g2_cp2

0xf201,	// (0x000212ae) list_single_heading_pane_t1_cp2_ParamLimits

0xf201,	// (0x000212ae) list_single_heading_pane_t1_cp2

0x1db0,	// (0x00013e5d) list_single_heading_pane_t2_cp2_ParamLimits

0x1db0,	// (0x00013e5d) list_single_heading_pane_t2_cp2

0x1d35,	// (0x00013de2) list_double_graphic_pane_g1_cp2_ParamLimits

0x1d35,	// (0x00013de2) list_double_graphic_pane_g1_cp2

0x1d41,	// (0x00013dee) list_double_graphic_pane_g2_cp2_ParamLimits

0x1d41,	// (0x00013dee) list_double_graphic_pane_g2_cp2

0x1d50,	// (0x00013dfd) list_double_graphic_pane_g3_cp2

0x1d58,	// (0x00013e05) list_double_graphic_pane_t1_cp2_ParamLimits

0x1d58,	// (0x00013e05) list_double_graphic_pane_t1_cp2

0x1d6e,	// (0x00013e1b) list_double_graphic_pane_t2_cp2_ParamLimits

0x1d6e,	// (0x00013e1b) list_double_graphic_pane_t2_cp2

0xf263,	// (0x00021310) list_double_number_pane_g1_cp2_ParamLimits

0xf263,	// (0x00021310) list_double_number_pane_g1_cp2

0xf26f,	// (0x0002131c) list_double_number_pane_g2_cp2

0x1cfb,	// (0x00013da8) list_double_number_pane_t1_cp2_ParamLimits

0x1cfb,	// (0x00013da8) list_double_number_pane_t1_cp2

0x1d0d,	// (0x00013dba) list_double_number_pane_t2_cp2_ParamLimits

0x1d0d,	// (0x00013dba) list_double_number_pane_t2_cp2

0x1d23,	// (0x00013dd0) list_double_number_pane_t3_cp2_ParamLimits

0x1d23,	// (0x00013dd0) list_double_number_pane_t3_cp2

0x1c73,	// (0x00013d20) list_single_graphic_pane_g1_cp2_ParamLimits

0x1c73,	// (0x00013d20) list_single_graphic_pane_g1_cp2

0xf1ed,	// (0x0002129a) list_single_graphic_pane_g2_cp2_ParamLimits

0xf1ed,	// (0x0002129a) list_single_graphic_pane_g2_cp2

0xf1f9,	// (0x000212a6) list_single_graphic_pane_g3_cp2

0x1c4b,	// (0x00013cf8) list_single_graphic_pane_t1_cp2_ParamLimits

0x1c4b,	// (0x00013cf8) list_single_graphic_pane_t1_cp2

0xf1ed,	// (0x0002129a) list_single_number_pane_g1_cp2_ParamLimits

0xf1ed,	// (0x0002129a) list_single_number_pane_g1_cp2

0xf1f9,	// (0x000212a6) list_single_number_pane_g2_cp2

0x1c4b,	// (0x00013cf8) list_single_number_pane_t1_cp2_ParamLimits

0x1c4b,	// (0x00013cf8) list_single_number_pane_t1_cp2

0x1c61,	// (0x00013d0e) list_single_number_pane_t2_cp2_ParamLimits

0x1c61,	// (0x00013d0e) list_single_number_pane_t2_cp2

0xf115,	// (0x000211c2) list_double2_pane_g1_cp2_ParamLimits

0xf115,	// (0x000211c2) list_double2_pane_g1_cp2

0xf124,	// (0x000211d1) list_double2_pane_g2_cp2

0xf23b,	// (0x000212e8) list_double2_pane_t1_cp2_ParamLimits

0xf23b,	// (0x000212e8) list_double2_pane_t1_cp2

0xf251,	// (0x000212fe) list_double2_pane_t2_cp2_ParamLimits

0xf251,	// (0x000212fe) list_double2_pane_t2_cp2

0xf263,	// (0x00021310) list_double_pane_g1_cp2_ParamLimits

0xf263,	// (0x00021310) list_double_pane_g1_cp2

0xf26f,	// (0x0002131c) list_double_pane_g2_cp2

0xf277,	// (0x00021324) list_double_pane_t1_cp2_ParamLimits

0xf277,	// (0x00021324) list_double_pane_t1_cp2

0xf28d,	// (0x0002133a) list_double_pane_t2_cp2_ParamLimits

0xf28d,	// (0x0002133a) list_double_pane_t2_cp2

0xf2b5,	// (0x00021362) list_single_pane_cp2_g3

0xf1ed,	// (0x0002129a) list_single_pane_g1_cp2_ParamLimits

0xf1ed,	// (0x0002129a) list_single_pane_g1_cp2

0xf1f9,	// (0x000212a6) list_single_pane_g2_cp2

0xf2c5,	// (0x00021372) list_single_pane_t1_cp2_ParamLimits

0xf2c5,	// (0x00021372) list_single_pane_t1_cp2

0xf2dd,	// (0x0002138a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xf2dd,	// (0x0002138a) list_single_large_graphic_pane_g1_cp2

0xf2e9,	// (0x00021396) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf2e9,	// (0x00021396) list_single_large_graphic_pane_g2_cp2

0xf2f5,	// (0x000213a2) list_single_large_graphic_pane_g3_cp2

0xf2fd,	// (0x000213aa) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xf2fd,	// (0x000213aa) list_single_large_graphic_pane_g4_cp1

0xf317,	// (0x000213c4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf317,	// (0x000213c4) list_single_large_graphic_pane_t1_cp2

0x1c2d,	// (0x00013cda) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x1c2d,	// (0x00013cda) list_single_graphic_heading_pane_g1_cp2

0x1c08,	// (0x00013cb5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x1c08,	// (0x00013cb5) list_single_graphic_heading_pane_g4_cp2

0xf1f9,	// (0x000212a6) list_single_graphic_heading_pane_g5_cp2

0xf201,	// (0x000212ae) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xf201,	// (0x000212ae) list_single_graphic_heading_pane_t1_cp2

0x1c39,	// (0x00013ce6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x1c39,	// (0x00013ce6) list_single_graphic_heading_pane_t2_cp2

0x1bfc,	// (0x00013ca9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x1bfc,	// (0x00013ca9) list_single_2graphic_pane_g1_cp2

0x1c08,	// (0x00013cb5) list_single_2graphic_pane_g2_cp2_ParamLimits

0x1c08,	// (0x00013cb5) list_single_2graphic_pane_g2_cp2

0xf1f9,	// (0x000212a6) list_single_2graphic_pane_g3_cp2

0x1619,	// (0x000136c6) list_single_2graphic_pane_g4_cp2_ParamLimits

0x1619,	// (0x000136c6) list_single_2graphic_pane_g4_cp2

0x1c17,	// (0x00013cc4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x1c17,	// (0x00013cc4) list_single_2graphic_pane_t1_cp2

0xdc7c,	// (0x0001fd29) list_highlight_pane_g10_cp1

0x180e,	// (0x000138bb) list_highlight_pane_g1_cp1

0x1816,	// (0x000138c3) list_highlight_pane_g2_cp1

0x181e,	// (0x000138cb) list_highlight_pane_g3_cp1

0x1826,	// (0x000138d3) list_highlight_pane_g4_cp1

0x182e,	// (0x000138db) list_highlight_pane_g5_cp1

0x1836,	// (0x000138e3) list_highlight_pane_g6_cp1

0x183e,	// (0x000138eb) list_highlight_pane_g7_cp1

0x1846,	// (0x000138f3) list_highlight_pane_g8_cp1

0x184e,	// (0x000138fb) list_highlight_pane_g9_cp1

0xc2e0,	// (0x0001e38d) form_field_slider_pane_t3

0xc2ee,	// (0x0001e39b) form_field_slider_pane_t4

0x1758,	// (0x00013805) slider_form_pane_ParamLimits

0x1758,	// (0x00013805) slider_form_pane

0xdcfe,	// (0x0001fdab) control_abbreviations

0xdcfe,	// (0x0001fdab) control_conventions

0xdcfe,	// (0x0001fdab) control_definitions

0xdcfe,	// (0x0001fdab) format_table_attribute

0x1dfa,	// (0x00013ea7) bg_popup_preview_window_pane_g9

0xdcfe,	// (0x0001fdab) format_table_data2

0xdcfe,	// (0x0001fdab) format_table_data3

0xdcfe,	// (0x0001fdab) format_table_data_example

0x0008,

0xdcfe,	// (0x0001fdab) intro_purpose

0xf915,	// (0x000219c2) bg_popup_preview_window_pane_g

0xdcfe,	// (0x0001fdab) texts_category

0xdcfe,	// (0x0001fdab) texts_graphics

0xf32d,	// (0x000213da) text_digital

0xf33c,	// (0x000213e9) text_primary

0xf34b,	// (0x000213f8) text_primary_small

0xf35a,	// (0x00021407) text_secondary

0xf369,	// (0x00021416) text_title

0x231a,	// (0x000143c7) bg_passive_tab_pane_g1_cp3_srt

0xf082,	// (0x0002112f) bg_passive_tab_pane_g2_cp3_srt

0x2311,	// (0x000143be) bg_passive_tab_pane_g3_cp3_srt

0xdd4c,	// (0x0001fdf9) bg_active_tab_pane_cp3_srt_ParamLimits

0xdd4c,	// (0x0001fdf9) bg_active_tab_pane_cp3_srt

0x2225,	// (0x000142d2) tabs_4_active_pane_srt_g1

0xb114,	// (0x0001d1c1) tabs_4_active_pane_srt_t1_ParamLimits

0xb114,	// (0x0001d1c1) tabs_4_active_pane_srt_t1

0x231a,	// (0x000143c7) bg_active_tab_pane_g1_cp3_copy1

0xf082,	// (0x0002112f) bg_active_tab_pane_g2_cp3_copy1

0x2311,	// (0x000143be) bg_active_tab_pane_g3_cp3_copy1

0xdd62,	// (0x0001fe0f) tabs_2_long_active_pane_srt_ParamLimits

0xdd62,	// (0x0001fe0f) tabs_2_long_active_pane_srt

0xdd62,	// (0x0001fe0f) tabs_2_long_passive_pane_srt_ParamLimits

0xdd62,	// (0x0001fe0f) tabs_2_long_passive_pane_srt

0x0dd6,	// (0x00012e83) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0dd6,	// (0x00012e83) bg_passive_tab_pane_cp4_srt

0x21c6,	// (0x00014273) bg_passive_tab_pane_g1_cp4_srt

0xf082,	// (0x0002112f) bg_passive_tab_pane_g2_cp4_srt

0x21bd,	// (0x0001426a) bg_passive_tab_pane_g3_cp4_srt

0xdd62,	// (0x0001fe0f) bg_active_tab_pane_cp4_srt_ParamLimits

0xdd62,	// (0x0001fe0f) bg_active_tab_pane_cp4_srt

0xb437,	// (0x0001d4e4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb437,	// (0x0001d4e4) tabs_2_long_active_pane_srt_t1

0x21c6,	// (0x00014273) bg_active_tab_pane_g1_cp4_srt

0xf082,	// (0x0002112f) bg_active_tab_pane_g2_cp4_srt

0x21bd,	// (0x0001426a) bg_active_tab_pane_g3_cp4_srt

0xdd4c,	// (0x0001fdf9) tabs_3_long_active_pane_srt_ParamLimits

0xdd4c,	// (0x0001fdf9) tabs_3_long_active_pane_srt

0xdd4c,	// (0x0001fdf9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xdd4c,	// (0x0001fdf9) tabs_3_long_passive_pane_cp_srt

0xdd4c,	// (0x0001fdf9) tabs_3_long_passive_pane_srt_ParamLimits

0xdd4c,	// (0x0001fdf9) tabs_3_long_passive_pane_srt

0x0dd6,	// (0x00012e83) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0dd6,	// (0x00012e83) bg_passive_tab_pane_cp5_srt

0xf0c9,	// (0x00021176) bg_passive_tab_pane_g1_cp5_srt

0xf082,	// (0x0002112f) bg_passive_tab_pane_g2_cp5_srt

0xf0d2,	// (0x0002117f) bg_passive_tab_pane_g3_cp5_srt

0xdd62,	// (0x0001fe0f) bg_active_tab_pane_cp5_srt_ParamLimits

0xdd62,	// (0x0001fe0f) bg_active_tab_pane_cp5_srt

0xb44e,	// (0x0001d4fb) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb44e,	// (0x0001d4fb) tabs_3_long_active_pane_srt_t1

0xf0c9,	// (0x00021176) bg_active_tab_pane_g1_cp5_srt

0xf082,	// (0x0002112f) bg_active_tab_pane_g2_cp5_srt

0xf0d2,	// (0x0002117f) bg_active_tab_pane_g3_cp5_srt

0x21af,	// (0x0001425c) navi_text_pane_srt_t1

0x21a7,	// (0x00014254) navi_icon_pane_srt_g1

0xf481,	// (0x0002152e) midp_editing_number_pane_srt

0xf378,	// (0x00021425) midp_ticker_pane_srt

0xf489,	// (0x00021536) midp_ticker_pane_srt_g1

0xf491,	// (0x0002153e) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x0002185f) midp_ticker_pane_srt_g

0xf499,	// (0x00021546) midp_ticker_pane_srt_t1

0x2198,	// (0x00014245) midp_editing_number_pane_t1_copy1

0xb668,	// (0x0001d715) listscroll_midp_pane

0xb668,	// (0x0001d715) midp_form_pane

0xf380,	// (0x0002142d) midp_info_popup_window_ParamLimits

0xf380,	// (0x0002142d) midp_info_popup_window

0xea73,	// (0x00020b20) bg_popup_sub_pane_cp50_ParamLimits

0xea73,	// (0x00020b20) bg_popup_sub_pane_cp50

0x14a6,	// (0x00013553) listscroll_midp_info_pane_ParamLimits

0x14a6,	// (0x00013553) listscroll_midp_info_pane

0x148e,	// (0x0001353b) listscroll_form_midp_pane_ParamLimits

0x148e,	// (0x0001353b) listscroll_form_midp_pane

0x149a,	// (0x00013547) scroll_bar_cp050

0xc2d4,	// (0x0001e381) list_midp_pane

0x2cb1,	// (0x00014d5e) signal_pane_g2_cp

0x13c0,	// (0x0001346d) listscroll_midp_info_pane_t1_ParamLimits

0x13c0,	// (0x0001346d) listscroll_midp_info_pane_t1

0x13d8,	// (0x00013485) listscroll_midp_info_pane_t2_ParamLimits

0x13d8,	// (0x00013485) listscroll_midp_info_pane_t2

0x1416,	// (0x000134c3) listscroll_midp_info_pane_t3_ParamLimits

0x1416,	// (0x000134c3) listscroll_midp_info_pane_t3

0x1450,	// (0x000134fd) listscroll_midp_info_pane_t4_ParamLimits

0x1450,	// (0x000134fd) listscroll_midp_info_pane_t4

0x0003,

0xf850,	// (0x000218fd) listscroll_midp_info_pane_t_ParamLimits

0xf850,	// (0x000218fd) listscroll_midp_info_pane_t

0xeb16,	// (0x00020bc3) scroll_pane_cp21

0x1364,	// (0x00013411) form_midp_field_choice_group_pane

0x136d,	// (0x0001341a) form_midp_field_text_pane

0x13a6,	// (0x00013453) form_midp_field_time_pane

0x13ae,	// (0x0001345b) form_midp_gauge_slider_pane

0x13b7,	// (0x00013464) form_midp_gauge_wait_pane

0xdcfe,	// (0x0001fdab) form_midp_image_pane

0xac22,	// (0x0001cccf) list_single_midp_pane_ParamLimits

0xac22,	// (0x0001cccf) list_single_midp_pane

0xc2b3,	// (0x0001e360) form_midp_field_text_pane_t1

0x1204,	// (0x000132b1) input_focus_pane_cp050

0x1353,	// (0x00013400) list_midp_form_text_pane

0x1322,	// (0x000133cf) form_midp_field_choice_group_pane_t1

0x1330,	// (0x000133dd) input_focus_pane_cp051

0x1344,	// (0x000133f1) list_midp_choice_pane

0xdcfe,	// (0x0001fdab) status_idle_pane

0x1306,	// (0x000133b3) form_midp_field_time_pane_t1

0xdc7c,	// (0x0001fd29) wait_anim_pane_g2_copy1

0x1314,	// (0x000133c1) form_midp_field_time_pane_t2

0x0001,

0xf3eb,	// (0x00021498) aid_navinavi_width_2_pane

0xf84b,	// (0x000218f8) form_midp_field_time_pane_t

0xdcfe,	// (0x0001fdab) input_focus_pane_cp052

0xdcfe,	// (0x0001fdab) bg_input_focus_pane_cp040

0x12e2,	// (0x0001338f) form_midp_gauge_slider_pane_t1

0x12f0,	// (0x0001339d) form_midp_gauge_slider_pane_t2

0xc297,	// (0x0001e344) form_midp_gauge_slider_pane_t3

0xc2a5,	// (0x0001e352) form_midp_gauge_slider_pane_t4

0x0003,

0xf842,	// (0x000218ef) form_midp_gauge_slider_pane_t

0x12fe,	// (0x000133ab) form_midp_slider_pane

0xdd62,	// (0x0001fe0f) bg_input_focus_pane_cp041_ParamLimits

0xdd62,	// (0x0001fe0f) bg_input_focus_pane_cp041

0x12b2,	// (0x0001335f) form_midp_gauge_wait_pane_t1_ParamLimits

0x12b2,	// (0x0001335f) form_midp_gauge_wait_pane_t1

0x12c4,	// (0x00013371) form_midp_gauge_wait_pane_t2_ParamLimits

0x12c4,	// (0x00013371) form_midp_gauge_wait_pane_t2

0x0001,

0xf83d,	// (0x000218ea) form_midp_gauge_wait_pane_t_ParamLimits

0xf83d,	// (0x000218ea) form_midp_gauge_wait_pane_t

0x12d6,	// (0x00013383) form_midp_wait_pane_ParamLimits

0x12d6,	// (0x00013383) form_midp_wait_pane

0x127c,	// (0x00013329) form_midp_image_pane_g1

0x1285,	// (0x00013332) form_midp_image_pane_t1

0x1294,	// (0x00013341) form_midp_image_pane_t2

0x12a3,	// (0x00013350) form_midp_image_pane_t3

0x0002,

0xf836,	// (0x000218e3) form_midp_image_pane_t

0x1264,	// (0x00013311) list_single_midp_pane_g1

0x3e2e,	// (0x00015edb) list_single_midp_pane_t1

0xc283,	// (0x0001e330) list_midp_form_item_pane_ParamLimits

0xc283,	// (0x0001e330) list_midp_form_item_pane

0xf393,	// (0x00021440) list_midp_form_item_pane_t1

0xf3a2,	// (0x0002144f) midp_ticker_pane_g1

0xf3ae,	// (0x0002145b) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x00021845) midp_ticker_pane_g

0xf3ba,	// (0x00021467) midp_ticker_pane_t1

0x2198,	// (0x00014245) midp_editing_number_pane_t1

0x2297,	// (0x00014344) midp_editing_number_pane

0x22a3,	// (0x00014350) midp_ticker_pane

0x2188,	// (0x00014235) ai_message_heading_pane

0xdcfe,	// (0x0001fdab) bg_popup_window_pane_cp14

0x2190,	// (0x0001423d) listscroll_ai_message_pane

0x2112,	// (0x000141bf) ai_message_heading_pane_g1_ParamLimits

0x2112,	// (0x000141bf) ai_message_heading_pane_g1

0x211e,	// (0x000141cb) ai_message_heading_pane_g2_ParamLimits

0x211e,	// (0x000141cb) ai_message_heading_pane_g2

0x212a,	// (0x000141d7) ai_message_heading_pane_g3_ParamLimits

0x212a,	// (0x000141d7) ai_message_heading_pane_g3

0x2136,	// (0x000141e3) ai_message_heading_pane_g4_ParamLimits

0x2136,	// (0x000141e3) ai_message_heading_pane_g4

0x0003,

0xf977,	// (0x00021a24) ai_message_heading_pane_g_ParamLimits

0xf977,	// (0x00021a24) ai_message_heading_pane_g

0x2142,	// (0x000141ef) ai_message_heading_pane_t1_ParamLimits

0x2142,	// (0x000141ef) ai_message_heading_pane_t1

0x215c,	// (0x00014209) ai_message_heading_pane_t2_ParamLimits

0x215c,	// (0x00014209) ai_message_heading_pane_t2

0x0001,

0xf980,	// (0x00021a2d) ai_message_heading_pane_t_ParamLimits

0xf980,	// (0x00021a2d) ai_message_heading_pane_t

0x216e,	// (0x0001421b) bg_popup_heading_pane_cp1_ParamLimits

0x216e,	// (0x0001421b) bg_popup_heading_pane_cp1

0x2100,	// (0x000141ad) list_ai_message_pane_ParamLimits

0x2100,	// (0x000141ad) list_ai_message_pane

0xeb16,	// (0x00020bc3) scroll_pane_cp10

0x209c,	// (0x00014149) list_ai_message_pane_g1

0x20a4,	// (0x00014151) list_ai_message_pane_g2

0x0001,

0xf954,	// (0x00021a01) list_ai_message_pane_g

0x20ac,	// (0x00014159) list_ai_message_pane_t1_ParamLimits

0x20ac,	// (0x00014159) list_ai_message_pane_t1

0x20c1,	// (0x0001416e) list_ai_message_pane_t2_ParamLimits

0x20c1,	// (0x0001416e) list_ai_message_pane_t2

0x20d6,	// (0x00014183) list_ai_message_pane_t3_ParamLimits

0x20d6,	// (0x00014183) list_ai_message_pane_t3

0x20eb,	// (0x00014198) list_ai_message_pane_t4_ParamLimits

0x20eb,	// (0x00014198) list_ai_message_pane_t4

0x0003,

0xf959,	// (0x00021a06) list_ai_message_pane_t_ParamLimits

0xf959,	// (0x00021a06) list_ai_message_pane_t

0x208a,	// (0x00014137) cell_ai_soft_ind_pane_ParamLimits

0x208a,	// (0x00014137) cell_ai_soft_ind_pane

0xf3cc,	// (0x00021479) cell_ai_soft_ind_pane_g1_ParamLimits

0xf3cc,	// (0x00021479) cell_ai_soft_ind_pane_g1

0xdcfe,	// (0x0001fdab) grid_highlight_cp1

0xf3d9,	// (0x00021486) text_secondary_cp56_ParamLimits

0xf3d9,	// (0x00021486) text_secondary_cp56

0x205f,	// (0x0001410c) example_general_pane_ParamLimits

0x205f,	// (0x0001410c) example_general_pane

0x206b,	// (0x00014118) example_parent_pane_g1_ParamLimits

0x206b,	// (0x00014118) example_parent_pane_g1

0x2077,	// (0x00014124) example_parent_pane_t1_ParamLimits

0x2077,	// (0x00014124) example_parent_pane_t1

0xbb77,	// (0x0001dc24) popup_preview_text_window_ParamLimits

0xbb77,	// (0x0001dc24) popup_preview_text_window

0xf2bd,	// (0x0002136a) list_single_pane_cp2_g4

0xdf69,	// (0x00020016) bg_popup_preview_window_pane_ParamLimits

0xdf69,	// (0x00020016) bg_popup_preview_window_pane

0x1e02,	// (0x00013eaf) popup_preview_text_window_t1_ParamLimits

0x1e02,	// (0x00013eaf) popup_preview_text_window_t1

0x1e20,	// (0x00013ecd) popup_preview_text_window_t2_ParamLimits

0x1e20,	// (0x00013ecd) popup_preview_text_window_t2

0x1e69,	// (0x00013f16) popup_preview_text_window_t3_ParamLimits

0x1e69,	// (0x00013f16) popup_preview_text_window_t3

0x1eae,	// (0x00013f5b) popup_preview_text_window_t4_ParamLimits

0x1eae,	// (0x00013f5b) popup_preview_text_window_t4

0x0004,

0xf928,	// (0x000219d5) popup_preview_text_window_t_ParamLimits

0xf928,	// (0x000219d5) popup_preview_text_window_t

0x1f2c,	// (0x00013fd9) scroll_pane_cp11

0x10ee,	// (0x0001319b) bg_popup_preview_window_pane_g1

0x1dc2,	// (0x00013e6f) bg_popup_preview_window_pane_g2

0x1dca,	// (0x00013e77) bg_popup_preview_window_pane_g3

0x1dd2,	// (0x00013e7f) bg_popup_preview_window_pane_g4

0x1dda,	// (0x00013e87) bg_popup_preview_window_pane_g5

0x1de2,	// (0x00013e8f) bg_popup_preview_window_pane_g6

0x1dea,	// (0x00013e97) bg_popup_preview_window_pane_g7

0x1df2,	// (0x00013e9f) bg_popup_preview_window_pane_g8

0x450b,	// (0x000165b8) aid_popup_width_pane

0xbaf9,	// (0x0001dba6) popup_midp_note_alarm_window_ParamLimits

0xbaf9,	// (0x0001dba6) popup_midp_note_alarm_window

0xe9b3,	// (0x00020a60) data_form_pane_ParamLimits

0xaabb,	// (0x0001cb68) form_field_data_pane_g1

0xb3fd,	// (0x0001d4aa) form_field_data_pane_t1_ParamLimits

0xe9bf,	// (0x00020a6c) input_focus_pane_ParamLimits

0xe9cd,	// (0x00020a7a) data_form_wide_pane_ParamLimits

0x3b77,	// (0x00015c24) form_field_data_wide_pane_g1

0x3b83,	// (0x00015c30) form_field_data_wide_pane_t1_ParamLimits

0xe128,	// (0x000201d5) input_focus_pane_cp6_ParamLimits

0xb415,	// (0x0001d4c2) input_popup_find_pane_g1_ParamLimits

0xb415,	// (0x0001d4c2) input_popup_find_pane_g1

0x489e,	// (0x0001694b) aid_navi_side_left_pane

0x48ae,	// (0x0001695b) aid_navi_side_right_pane

0x18df,	// (0x0001398c) bg_popup_window_pane_cp30_ParamLimits

0x18df,	// (0x0001398c) bg_popup_window_pane_cp30

0x1959,	// (0x00013a06) popup_midp_note_alarm_window_g1_ParamLimits

0x1959,	// (0x00013a06) popup_midp_note_alarm_window_g1

0x1989,	// (0x00013a36) popup_midp_note_alarm_window_t1_ParamLimits

0x1989,	// (0x00013a36) popup_midp_note_alarm_window_t1

0x1a2a,	// (0x00013ad7) popup_midp_note_alarm_window_t2_ParamLimits

0x1a2a,	// (0x00013ad7) popup_midp_note_alarm_window_t2

0x1ad8,	// (0x00013b85) popup_midp_note_alarm_window_t3_ParamLimits

0x1ad8,	// (0x00013b85) popup_midp_note_alarm_window_t3

0x1b00,	// (0x00013bad) popup_midp_note_alarm_window_t4_ParamLimits

0x1b00,	// (0x00013bad) popup_midp_note_alarm_window_t4

0x1b20,	// (0x00013bcd) popup_midp_note_alarm_window_t5_ParamLimits

0x1b20,	// (0x00013bcd) popup_midp_note_alarm_window_t5

0x000a,

0xf8c5,	// (0x00021972) popup_midp_note_alarm_window_t_ParamLimits

0xf8c5,	// (0x00021972) popup_midp_note_alarm_window_t

0x1bcc,	// (0x00013c79) wait_bar_pane_cp1_ParamLimits

0x1bcc,	// (0x00013c79) wait_bar_pane_cp1

0xdcfe,	// (0x0001fdab) wait_anim_pane_copy1

0xdcfe,	// (0x0001fdab) wait_border_pane_copy1

0x1625,	// (0x000136d2) wait_border_pane_g1_copy1

0x3b9d,	// (0x00015c4a) form_field_popup_pane_g1

0xaac5,	// (0x0001cb72) form_field_popup_pane_t1_ParamLimits

0xe9bf,	// (0x00020a6c) input_focus_pane_cp7_ParamLimits

0xe9b3,	// (0x00020a60) list_form_pane_ParamLimits

0x3bbd,	// (0x00015c6a) form_field_popup_wide_pane_g1

0x3bc5,	// (0x00015c72) form_field_popup_wide_pane_t1_ParamLimits

0xe9bf,	// (0x00020a6c) input_focus_pane_cp8_ParamLimits

0xe9ed,	// (0x00020a9a) list_form_wide_pane_ParamLimits

0x2342,	// (0x000143ef) aid_size_cell_graphic_pane

0xab42,	// (0x0001cbef) data_form_pane_t1_ParamLimits

0xac4a,	// (0x0001ccf7) data_form_wide_pane_t1_ParamLimits

0xbed5,	// (0x0001df82) bg_status_flat_pane

0xb071,	// (0x0001d11e) title_pane_t1_ParamLimits

0xdd14,	// (0x0001fdc1) title_pane_t2_ParamLimits

0xdd3a,	// (0x0001fde7) title_pane_t3_ParamLimits

0xf59b,	// (0x00021648) title_pane_t_ParamLimits

0xb515,	// (0x0001d5c2) level_1_signal_ParamLimits

0xb527,	// (0x0001d5d4) level_2_signal_ParamLimits

0xb53a,	// (0x0001d5e7) level_3_signal_ParamLimits

0xb54d,	// (0x0001d5fa) level_4_signal_ParamLimits

0xb560,	// (0x0001d60d) level_5_signal_ParamLimits

0xb573,	// (0x0001d620) level_6_signal_ParamLimits

0xb586,	// (0x0001d633) level_7_signal_ParamLimits

0xb515,	// (0x0001d5c2) level_1_battery_ParamLimits

0xb527,	// (0x0001d5d4) level_2_battery_ParamLimits

0xb53a,	// (0x0001d5e7) level_3_battery_ParamLimits

0xb54d,	// (0x0001d5fa) level_4_battery_ParamLimits

0xb560,	// (0x0001d60d) level_5_battery_ParamLimits

0xb573,	// (0x0001d620) level_6_battery_ParamLimits

0xb586,	// (0x0001d633) level_7_battery_ParamLimits

0x180e,	// (0x000138bb) bg_status_flat_pane_g1

0x1816,	// (0x000138c3) bg_status_flat_pane_g2

0x181e,	// (0x000138cb) bg_status_flat_pane_g3

0x1826,	// (0x000138d3) bg_status_flat_pane_g4

0x182e,	// (0x000138db) bg_status_flat_pane_g5

0x1836,	// (0x000138e3) bg_status_flat_pane_g6

0x183e,	// (0x000138eb) bg_status_flat_pane_g7

0xb0fe,	// (0x0001d1ab) tabs_3_active_pane_t1_ParamLimits

0xb0fe,	// (0x0001d1ab) tabs_3_passive_pane_t1_ParamLimits

0xb114,	// (0x0001d1c1) tabs_4_active_pane_t1_ParamLimits

0xb114,	// (0x0001d1c1) tabs_4_1_passive_pane_t1_ParamLimits

0xb421,	// (0x0001d4ce) tabs_2_active_pane_t1_ParamLimits

0xb421,	// (0x0001d4ce) tabs_2_passive_pane_t1_ParamLimits

0xdd62,	// (0x0001fe0f) bg_active_tab_pane_cp4_ParamLimits

0xb437,	// (0x0001d4e4) tabs_2_long_active_pane_t1_ParamLimits

0x0dd6,	// (0x00012e83) bg_passive_tab_pane_cp4_ParamLimits

0x5439,	// (0x000174e6) list_single_midp_graphic_pane_t1_ParamLimits

0xdd62,	// (0x0001fe0f) bg_active_tab_pane_cp5_ParamLimits

0xb44e,	// (0x0001d4fb) tabs_3_long_active_pane_t1_ParamLimits

0x0dd6,	// (0x00012e83) bg_passive_tab_pane_cp5_ParamLimits

0x5439,	// (0x000174e6) list_single_midp_graphic_pane_t1

0xbed5,	// (0x0001df82) bg_status_flat_pane_ParamLimits

0x0fcd,	// (0x0001307a) indicator_pane_cp2_ParamLimits

0x0fcd,	// (0x0001307a) indicator_pane_cp2

0xc03b,	// (0x0001e0e8) navi_pane_srt_ParamLimits

0xc03b,	// (0x0001e0e8) navi_pane_srt

0x0ff5,	// (0x000130a2) popup_clock_digital_analogue_window_cp1

0xddd2,	// (0x0001fe7f) indicator_pane_t1

0xf378,	// (0x00021425) copy_highlight_pane

0xf378,	// (0x00021425) cursor_graphics_pane

0xf378,	// (0x00021425) graphic_within_text_pane

0xf378,	// (0x00021425) link_highlight_pane

0x1eef,	// (0x00013f9c) popup_preview_text_window_t5_ParamLimits

0x1eef,	// (0x00013f9c) popup_preview_text_window_t5

0xf3f3,	// (0x000214a0) cursor_digital_pane

0xf3f3,	// (0x000214a0) cursor_primary_pane

0xf404,	// (0x000214b1) cursor_primary_small_pane

0xf40c,	// (0x000214b9) cursor_secondary_pane

0xf414,	// (0x000214c1) cursor_title_pane

0xf3f3,	// (0x000214a0) link_highlight_digital_pane

0xf3fb,	// (0x000214a8) link_highlight_primary_pane

0xf404,	// (0x000214b1) link_highlight_primary_small_pane

0xf40c,	// (0x000214b9) link_highlight_secondary_pane

0xf414,	// (0x000214c1) link_highlight_title_pane

0xf3f3,	// (0x000214a0) copy_highlight_digital_pane

0xf3f3,	// (0x000214a0) copy_highlight_primary_pane

0xf404,	// (0x000214b1) copy_highlight_primary_small_pane

0xf40c,	// (0x000214b9) copy_highlight_secondary_pane

0xf414,	// (0x000214c1) copy_highlight_title_pane

0xf40c,	// (0x000214b9) graphic_text_digital_pane

0x188e,	// (0x0001393b) graphic_text_primary_pane

0x1897,	// (0x00013944) graphic_text_primary_small_pane

0xf404,	// (0x000214b1) graphic_text_secondary_pane

0xf3f3,	// (0x000214a0) graphic_text_title_pane

0xb705,	// (0x0001d7b2) cursor_primary_pane_g1

0x1880,	// (0x0001392d) cursor_text_primary_t1

0xc310,	// (0x0001e3bd) cursor_primary_small_pane_g1

0x1872,	// (0x0001391f) cursor_text_primary_small_t1

0xc306,	// (0x0001e3b3) cursor_primary_small_pane_g1_copy1

0x1864,	// (0x00013911) cursor_text_primary_small_t1_copy1

0x1856,	// (0x00013903) cursor_text_title_t1

0xc2fc,	// (0x0001e3a9) cursor_title_pane_g1

0xb705,	// (0x0001d7b2) cursor_digital_pane_g1

0xf41c,	// (0x000214c9) cursor_text_digital_t1

0xf42a,	// (0x000214d7) link_highlight_primary_pane_g1

0x17ff,	// (0x000138ac) link_highlight_primary_pane_t1

0xf42a,	// (0x000214d7) link_highlight_primary_small_pane_g1

0xf432,	// (0x000214df) link_highlight_primary_small_pane_t1

0xf441,	// (0x000214ee) link_highlight_secondary_pane_g1

0xf449,	// (0x000214f6) link_highlight_secondary_pane_t1

0x1764,	// (0x00013811) link_highlight_title_pane_g1

0x177b,	// (0x00013828) link_highlight_title_pane_t1

0x1764,	// (0x00013811) link_highlight_digital_pane_g1

0x176c,	// (0x00013819) link_highlight_digital_pane_t1

0x1640,	// (0x000136ed) copy_highlight_primary_pane_g1

0x1666,	// (0x00013713) copy_highlight_primary_pane_t1

0x1640,	// (0x000136ed) copy_highlight_primary_small_pane_g1

0x1657,	// (0x00013704) copy_highlight_primary_small_pane_t1

0xf458,	// (0x00021505) copy_highlight_secondary_pane_g1

0xf460,	// (0x0002150d) copy_highlight_secondary_pane_t1

0x1640,	// (0x000136ed) copy_highlight_title_pane_g1

0x1648,	// (0x000136f5) copy_highlight_title_pane_t1

0x1640,	// (0x000136ed) copy_highlight_digital_pane_g1

0x2495,	// (0x00014542) copy_highlight_digital_pane_t1

0x23e9,	// (0x00014496) graphic_text_primary_pane_g1

0x2479,	// (0x00014526) graphic_text_primary_pane_t1

0x2487,	// (0x00014534) graphic_text_primary_pane_t2

0x0001,

0xf9f4,	// (0x00021aa1) graphic_text_primary_pane_t

0x2455,	// (0x00014502) graphic_text_primary_small_pane_g1

0x245d,	// (0x0001450a) graphic_text_primary_small_pane_t1

0x246b,	// (0x00014518) graphic_text_primary_small_pane_t2

0x0001,

0xf9ef,	// (0x00021a9c) graphic_text_primary_small_pane_t

0x2431,	// (0x000144de) graphic_text_secondary_pane_g1

0x2439,	// (0x000144e6) graphic_text_secondary_pane_t1

0x2447,	// (0x000144f4) graphic_text_secondary_pane_t2

0x0001,

0xf9ea,	// (0x00021a97) graphic_text_secondary_pane_t

0x240d,	// (0x000144ba) graphic_text_title_pane_g1

0x2415,	// (0x000144c2) graphic_text_title_pane_t1

0x2423,	// (0x000144d0) graphic_text_title_pane_t2

0x0001,

0xf9e5,	// (0x00021a92) graphic_text_title_pane_t

0x23e9,	// (0x00014496) graphic_text_digital_pane_g1

0x23f1,	// (0x0001449e) graphic_text_digital_pane_t1

0x23ff,	// (0x000144ac) graphic_text_digital_pane_t2

0x0001,

0xf9e0,	// (0x00021a8d) graphic_text_digital_pane_t

0xdd62,	// (0x0001fe0f) navi_icon_pane_srt_ParamLimits

0xdd62,	// (0x0001fe0f) navi_icon_pane_srt

0xdcfe,	// (0x0001fdab) navi_midp_pane_srt

0xdcfe,	// (0x0001fdab) navi_navi_pane_srt

0xdd62,	// (0x0001fe0f) navi_text_pane_srt_ParamLimits

0xdd62,	// (0x0001fe0f) navi_text_pane_srt

0x21dc,	// (0x00014289) navi_navi_icon_text_pane_srt

0x21f6,	// (0x000142a3) navi_navi_pane_srt_g1_ParamLimits

0x21f6,	// (0x000142a3) navi_navi_pane_srt_g1

0x21e4,	// (0x00014291) navi_navi_pane_srt_g2_ParamLimits

0x21e4,	// (0x00014291) navi_navi_pane_srt_g2

0x0001,

0xf9db,	// (0x00021a88) navi_navi_pane_srt_g_ParamLimits

0xf9db,	// (0x00021a88) navi_navi_pane_srt_g

0x2208,	// (0x000142b5) navi_navi_tabs_pane_srt

0x21dc,	// (0x00014289) navi_navi_text_pane_srt

0x21dc,	// (0x00014289) navi_navi_volume_pane_srt

0x2382,	// (0x0001442f) navi_navi_text_pane_srt_t1

0x5ba6,	// (0x00017c53) navi_navi_volume_pane_srt_g1

0x5bae,	// (0x00017c5b) volume_small_pane_srt_ParamLimits

0x5bae,	// (0x00017c5b) volume_small_pane_srt

0x4b45,	// (0x00016bf2) volume_small_pane_srt_g1_ParamLimits

0x4b45,	// (0x00016bf2) volume_small_pane_srt_g1

0x4b55,	// (0x00016c02) volume_small_pane_srt_g2_ParamLimits

0x4b55,	// (0x00016c02) volume_small_pane_srt_g2

0x4b66,	// (0x00016c13) volume_small_pane_srt_g3_ParamLimits

0x4b66,	// (0x00016c13) volume_small_pane_srt_g3

0x4b77,	// (0x00016c24) volume_small_pane_srt_g4_ParamLimits

0x4b77,	// (0x00016c24) volume_small_pane_srt_g4

0x4b88,	// (0x00016c35) volume_small_pane_srt_g5_ParamLimits

0x4b88,	// (0x00016c35) volume_small_pane_srt_g5

0x4b99,	// (0x00016c46) volume_small_pane_srt_g6_ParamLimits

0x4b99,	// (0x00016c46) volume_small_pane_srt_g6

0x4baa,	// (0x00016c57) volume_small_pane_srt_g7_ParamLimits

0x4baa,	// (0x00016c57) volume_small_pane_srt_g7

0x4bbb,	// (0x00016c68) volume_small_pane_srt_g8_ParamLimits

0x4bbb,	// (0x00016c68) volume_small_pane_srt_g8

0x4bcc,	// (0x00016c79) volume_small_pane_srt_g9_ParamLimits

0x4bcc,	// (0x00016c79) volume_small_pane_srt_g9

0x4bdd,	// (0x00016c8a) volume_small_pane_srt_g10_ParamLimits

0x4bdd,	// (0x00016c8a) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x0002184a) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x0002184a) volume_small_pane_srt_g

0xe012,	// (0x000200bf) query_popup_data_pane_cp2

0x2368,	// (0x00014415) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2368,	// (0x00014415) navi_navi_icon_text_pane_srt_t1

0x188e,	// (0x0001393b) navi_tabs_2_long_pane_srt

0x188e,	// (0x0001393b) navi_tabs_2_pane_srt

0x188e,	// (0x0001393b) navi_tabs_3_long_pane_srt

0x188e,	// (0x0001393b) navi_tabs_3_pane_srt

0x188e,	// (0x0001393b) navi_tabs_4_pane_srt

0x5b86,	// (0x00017c33) tabs_2_active_pane_srt_ParamLimits

0x5b86,	// (0x00017c33) tabs_2_active_pane_srt

0x5b96,	// (0x00017c43) tabs_2_passive_pane_srt_ParamLimits

0x5b96,	// (0x00017c43) tabs_2_passive_pane_srt

0x1204,	// (0x000132b1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1204,	// (0x000132b1) bg_passive_tab_pane_cp1_srt

0x223e,	// (0x000142eb) bg_passive_tab_pane_g1_cp1_srt

0xf082,	// (0x0002112f) bg_passive_tab_pane_g2_cp1_srt

0x2235,	// (0x000142e2) bg_passive_tab_pane_g3_cp1_srt

0xdd4c,	// (0x0001fdf9) bg_active_tab_pane_cp1_srt_ParamLimits

0xdd4c,	// (0x0001fdf9) bg_active_tab_pane_cp1_srt

0x222d,	// (0x000142da) tabs_2_active_pane_srt_g1

0xb421,	// (0x0001d4ce) tabs_2_active_pane_srt_t1_ParamLimits

0xb421,	// (0x0001d4ce) tabs_2_active_pane_srt_t1

0x223e,	// (0x000142eb) bg_active_tab_pane_g1_cp1_srt

0xf082,	// (0x0002112f) bg_active_tab_pane_g2_cp1_srt

0x2235,	// (0x000142e2) bg_active_tab_pane_g3_cp1_srt

0x5b53,	// (0x00017c00) tabs_3_active_pane_srt_ParamLimits

0x5b53,	// (0x00017c00) tabs_3_active_pane_srt

0x5b64,	// (0x00017c11) tabs_3_passive_pane_cp_srt_ParamLimits

0x5b64,	// (0x00017c11) tabs_3_passive_pane_cp_srt

0x5b75,	// (0x00017c22) tabs_3_passive_pane_srt_ParamLimits

0x5b75,	// (0x00017c22) tabs_3_passive_pane_srt

0x1204,	// (0x000132b1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1204,	// (0x000132b1) bg_passive_tab_pane_cp2_srt

0xf46f,	// (0x0002151c) bg_passive_tab_pane_g1_cp2_srt

0xf082,	// (0x0002112f) bg_passive_tab_pane_g2_cp2_srt

0xf478,	// (0x00021525) bg_passive_tab_pane_g3_cp2_srt

0xdd4c,	// (0x0001fdf9) bg_active_tab_pane_cp2_srt_ParamLimits

0xdd4c,	// (0x0001fdf9) bg_active_tab_pane_cp2_srt

0x2358,	// (0x00014405) tabs_3_active_pane_srt_g1

0xb0fe,	// (0x0001d1ab) tabs_3_active_pane_srt_t1_ParamLimits

0xb0fe,	// (0x0001d1ab) tabs_3_active_pane_srt_t1

0xf46f,	// (0x0002151c) bg_active_tab_pane_g1_cp2_srt

0xf082,	// (0x0002112f) bg_active_tab_pane_g2_cp2_srt

0xf478,	// (0x00021525) bg_active_tab_pane_g3_cp2_srt

0x5b0b,	// (0x00017bb8) tabs_4_active_pane_srt_ParamLimits

0x5b0b,	// (0x00017bb8) tabs_4_active_pane_srt

0x5b1d,	// (0x00017bca) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5b1d,	// (0x00017bca) tabs_4_passive_pane_cp2_srt

0x0de2,	// (0x00012e8f) aid_size_cell_toolbar

0xb869,	// (0x0001d916) main_idle_act_pane_ParamLimits

0x0eb6,	// (0x00012f63) popup_large_graphic_colour_window_ParamLimits

0xbdc7,	// (0x0001de74) popup_toolbar_window_ParamLimits

0xbdc7,	// (0x0001de74) popup_toolbar_window

0x3eab,	// (0x00015f58) list_single_graphic_2heading_pane_ParamLimits

0x3eab,	// (0x00015f58) list_single_graphic_2heading_pane

0xecf4,	// (0x00020da1) aid_size_cell_apps_grid_lsc_pane

0xed06,	// (0x00020db3) aid_size_cell_apps_grid_prt_pane

0x0dd6,	// (0x00012e83) bg_wml_button_pane_cp1_ParamLimits

0x0dd6,	// (0x00012e83) bg_wml_button_pane_cp1

0xc2b3,	// (0x0001e360) form_midp_field_text_pane_t1_ParamLimits

0x1204,	// (0x000132b1) input_focus_pane_cp050_ParamLimits

0x1353,	// (0x00013400) list_midp_form_text_pane_ParamLimits

0x1330,	// (0x000133dd) input_focus_pane_cp051_ParamLimits

0x1344,	// (0x000133f1) list_midp_choice_pane_ParamLimits

0xc251,	// (0x0001e2fe) list_single_2graphic_pane_cp3_ParamLimits

0xc251,	// (0x0001e2fe) list_single_2graphic_pane_cp3

0xc264,	// (0x0001e311) list_single_midp_graphic_pane_ParamLimits

0xc264,	// (0x0001e311) list_single_midp_graphic_pane

0x3667,	// (0x00015714) list_single_graphic_2heading_pane_g1_ParamLimits

0x3667,	// (0x00015714) list_single_graphic_2heading_pane_g1

0x3d92,	// (0x00015e3f) list_single_graphic_2heading_pane_g4_ParamLimits

0x3d92,	// (0x00015e3f) list_single_graphic_2heading_pane_g4

0x3d9e,	// (0x00015e4b) list_single_graphic_2heading_pane_g5_ParamLimits

0x3d9e,	// (0x00015e4b) list_single_graphic_2heading_pane_g5

0x0002,

0xf605,	// (0x000216b2) list_single_graphic_2heading_pane_g_ParamLimits

0xf605,	// (0x000216b2) list_single_graphic_2heading_pane_g

0x3daa,	// (0x00015e57) list_single_graphic_2heading_pane_t1_ParamLimits

0x3daa,	// (0x00015e57) list_single_graphic_2heading_pane_t1

0x3dbe,	// (0x00015e6b) list_single_graphic_2heading_pane_t2_ParamLimits

0x3dbe,	// (0x00015e6b) list_single_graphic_2heading_pane_t2

0x3dd8,	// (0x00015e85) list_single_graphic_2heading_pane_t3_ParamLimits

0x3dd8,	// (0x00015e85) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f0,	// (0x0002189d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f0,	// (0x0002189d) list_single_graphic_2heading_pane_t

0x1038,	// (0x000130e5) bg_popup_sub_pane_cp2

0x105e,	// (0x0001310b) grid_toobar_pane

0x53d5,	// (0x00017482) cell_toolbar_pane_ParamLimits

0x53d5,	// (0x00017482) cell_toolbar_pane

0x1094,	// (0x00013141) cell_toolbar_pane_g1_ParamLimits

0x1094,	// (0x00013141) cell_toolbar_pane_g1

0x10a6,	// (0x00013153) cell_toolbar_pane_g2_ParamLimits

0x10a6,	// (0x00013153) cell_toolbar_pane_g2

0x0001,

0xf7f7,	// (0x000218a4) cell_toolbar_pane_g_ParamLimits

0xf7f7,	// (0x000218a4) cell_toolbar_pane_g

0x10c8,	// (0x00013175) grid_highlight_pane_cp2_ParamLimits

0x10c8,	// (0x00013175) grid_highlight_pane_cp2

0x10e2,	// (0x0001318f) toolbar_button_pane

0x10ee,	// (0x0001319b) toolbar_button_pane_g1

0x10fe,	// (0x000131ab) toolbar_button_pane_g2

0x10f6,	// (0x000131a3) toolbar_button_pane_g3

0x110e,	// (0x000131bb) toolbar_button_pane_g4

0x1106,	// (0x000131b3) toolbar_button_pane_g5

0x1116,	// (0x000131c3) toolbar_button_pane_g6

0x111e,	// (0x000131cb) toolbar_button_pane_g7

0x112e,	// (0x000131db) toolbar_button_pane_g8

0x1126,	// (0x000131d3) toolbar_button_pane_g9

0x0009,

0xf7fc,	// (0x000218a9) toolbar_button_pane_g

0x5404,	// (0x000174b1) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5404,	// (0x000174b1) list_single_2graphic_pane_g1_cp3

0xc1b9,	// (0x0001e266) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc1b9,	// (0x0001e266) list_single_2graphic_pane_g2_cp3

0xf1f9,	// (0x000212a6) list_single_2graphic_pane_g3_cp3

0x1619,	// (0x000136c6) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1619,	// (0x000136c6) list_single_2graphic_pane_g4_cp3

0x541f,	// (0x000174cc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x541f,	// (0x000174cc) list_single_2graphic_pane_t1_cp3

0xf1ed,	// (0x0002129a) list_single_midp_graphic_pane_g2_ParamLimits

0xf1ed,	// (0x0002129a) list_single_midp_graphic_pane_g2

0x0df2,	// (0x00012e9f) aid_zoom_text_primary

0x3d65,	// (0x00015e12) aid_zoom_text_secondary

0xf52a,	// (0x000215d7) status_small_pane_g7_ParamLimits

0xf52a,	// (0x000215d7) status_small_pane_g7

0xf54d,	// (0x000215fa) status_small_pane_t1_ParamLimits

0xb046,	// (0x0001d0f3) title_pane_g2

0x0003,

0xf592,	// (0x0002163f) title_pane_g

0xb328,	// (0x0001d3d5) aid_size_cell_colour_1_pane_ParamLimits

0xb328,	// (0x0001d3d5) aid_size_cell_colour_1_pane

0xb33c,	// (0x0001d3e9) aid_size_cell_colour_2_pane_ParamLimits

0xb33c,	// (0x0001d3e9) aid_size_cell_colour_2_pane

0xb350,	// (0x0001d3fd) aid_size_cell_colour_3_pane_ParamLimits

0xb350,	// (0x0001d3fd) aid_size_cell_colour_3_pane

0xb364,	// (0x0001d411) aid_size_cell_colour_4_pane_ParamLimits

0xb364,	// (0x0001d411) aid_size_cell_colour_4_pane

0x4800,	// (0x000168ad) title_pane_stacon_g1_ParamLimits

0x4800,	// (0x000168ad) title_pane_stacon_g1

0x16bd,	// (0x0001376a) popup_note_wait_window_g3_ParamLimits

0x16bd,	// (0x0001376a) popup_note_wait_window_g3

0x1733,	// (0x000137e0) popup_note_wait_window_t5_ParamLimits

0x1733,	// (0x000137e0) popup_note_wait_window_t5

0xdcfe,	// (0x0001fdab) main_feb_china_hwr_fs_writing_pane

0xb8ca,	// (0x0001d977) popup_feb_china_hwr_fs_window_ParamLimits

0xb8ca,	// (0x0001d977) popup_feb_china_hwr_fs_window

0xc1ca,	// (0x0001e277) aid_size_cell_hwr_fs_ParamLimits

0xc1ca,	// (0x0001e277) aid_size_cell_hwr_fs

0x1204,	// (0x000132b1) bg_popup_sub_pane_cp3_ParamLimits

0x1204,	// (0x000132b1) bg_popup_sub_pane_cp3

0xc1df,	// (0x0001e28c) grid_hwr_fs_pane_ParamLimits

0xc1df,	// (0x0001e28c) grid_hwr_fs_pane

0x5478,	// (0x00017525) linegrid_hwr_fs_pane_ParamLimits

0x5478,	// (0x00017525) linegrid_hwr_fs_pane

0xc1f7,	// (0x0001e2a4) cell_hwr_fs_pane_ParamLimits

0xc1f7,	// (0x0001e2a4) cell_hwr_fs_pane

0x1210,	// (0x000132bd) linegrid_hwr_fs_pane_g1_ParamLimits

0x1210,	// (0x000132bd) linegrid_hwr_fs_pane_g1

0xc217,	// (0x0001e2c4) linegrid_hwr_fs_pane_g2_ParamLimits

0xc217,	// (0x0001e2c4) linegrid_hwr_fs_pane_g2

0x121c,	// (0x000132c9) linegrid_hwr_fs_pane_g3_ParamLimits

0x121c,	// (0x000132c9) linegrid_hwr_fs_pane_g3

0x54b8,	// (0x00017565) linegrid_hwr_fs_pane_g4_ParamLimits

0x54b8,	// (0x00017565) linegrid_hwr_fs_pane_g4

0x54d2,	// (0x0001757f) linegrid_hwr_fs_pane_g5_ParamLimits

0x54d2,	// (0x0001757f) linegrid_hwr_fs_pane_g5

0x0004,

0xf822,	// (0x000218cf) linegrid_hwr_fs_pane_g_ParamLimits

0xf822,	// (0x000218cf) linegrid_hwr_fs_pane_g

0x1228,	// (0x000132d5) cell_hwr_fs_pane_g1_ParamLimits

0x1228,	// (0x000132d5) cell_hwr_fs_pane_g1

0x1006,	// (0x000130b3) cell_hwr_fs_pane_g2_ParamLimits

0x1006,	// (0x000130b3) cell_hwr_fs_pane_g2

0xc229,	// (0x0001e2d6) cell_hwr_fs_pane_g3_ParamLimits

0xc229,	// (0x0001e2d6) cell_hwr_fs_pane_g3

0xc236,	// (0x0001e2e3) cell_hwr_fs_pane_g4_ParamLimits

0xc236,	// (0x0001e2e3) cell_hwr_fs_pane_g4

0x0003,

0xf82d,	// (0x000218da) cell_hwr_fs_pane_g_ParamLimits

0xf82d,	// (0x000218da) cell_hwr_fs_pane_g

0xc243,	// (0x0001e2f0) cell_hwr_fs_pane_t1

0xdcfe,	// (0x0001fdab) grid_highlight_pane_cp6

0xdcfe,	// (0x0001fdab) main_idle_act2_pane

0xeafd,	// (0x00020baa) aid_inside_area_popup_secondary

0xc41d,	// (0x0001e4ca) aid_inside_area_window_primary_ParamLimits

0xc41d,	// (0x0001e4ca) aid_inside_area_window_primary

0x24a4,	// (0x00014551) ai2_news_ticker_pane

0x24ac,	// (0x00014559) aid_size_cell_ai1_link_ParamLimits

0x24ac,	// (0x00014559) aid_size_cell_ai1_link

0xc829,	// (0x0001e8d6) popup_ai2_data_window_ParamLimits

0xc829,	// (0x0001e8d6) popup_ai2_data_window

0x24c6,	// (0x00014573) popup_ai2_link_window_ParamLimits

0x24c6,	// (0x00014573) popup_ai2_link_window

0x1204,	// (0x000132b1) bg_popup_sub_pane_cp4_ParamLimits

0x1204,	// (0x000132b1) bg_popup_sub_pane_cp4

0x24da,	// (0x00014587) grid_ai2_link_pane_ParamLimits

0x24da,	// (0x00014587) grid_ai2_link_pane

0x24f1,	// (0x0001459e) popup_ai2_link_window_g1_ParamLimits

0x24f1,	// (0x0001459e) popup_ai2_link_window_g1

0x24fd,	// (0x000145aa) popup_ai2_link_window_g2_ParamLimits

0x24fd,	// (0x000145aa) popup_ai2_link_window_g2

0x0001,

0xf9f9,	// (0x00021aa6) popup_ai2_link_window_g_ParamLimits

0xf9f9,	// (0x00021aa6) popup_ai2_link_window_g

0x250c,	// (0x000145b9) ai2_mp_button_pane

0x2514,	// (0x000145c1) ai2_mp_volume_pane

0x1330,	// (0x000133dd) bg_popup_sub_pane_cp5_ParamLimits

0x1330,	// (0x000133dd) bg_popup_sub_pane_cp5

0x251c,	// (0x000145c9) heading_ai2_gene_pane_ParamLimits

0x251c,	// (0x000145c9) heading_ai2_gene_pane

0x2528,	// (0x000145d5) list_ai2_gene_pane_ParamLimits

0x2528,	// (0x000145d5) list_ai2_gene_pane

0x2570,	// (0x0001461d) cell_ai2_link_pane_ParamLimits

0x2570,	// (0x0001461d) cell_ai2_link_pane

0x2586,	// (0x00014633) cell_ai2_link_pane_g1

0xdcfe,	// (0x0001fdab) grid_highlight_pane_cp7

0x5c0a,	// (0x00017cb7) ai2_mp_volume_pane_g1

0x2636,	// (0x000146e3) ai2_mp_volume_pane_g2

0xc853,	// (0x0001e900) list_ai2_gene_pane_t1

0x262e,	// (0x000146db) ai2_mp_volume_pane_g3

0x0002,

0xfa12,	// (0x00021abf) ai2_mp_volume_pane_g

0x5c12,	// (0x00017cbf) volume_small_pane_cp3

0x263e,	// (0x000146eb) aid_size_cell_ai2_button

0x2646,	// (0x000146f3) grid_ai2_button_pane

0x264f,	// (0x000146fc) cell_ai2_button_pane_ParamLimits

0x264f,	// (0x000146fc) cell_ai2_button_pane

0xdc7c,	// (0x0001fd29) cell_ai2_button_pane_g1

0xdcfe,	// (0x0001fdab) grid_highlight_pane_cp8

0x25ee,	// (0x0001469b) ai2_gene_pane_t1_ParamLimits

0x25ee,	// (0x0001469b) ai2_gene_pane_t1

0xb855,	// (0x0001d902) aid_height_parent_landscape

0xc5d5,	// (0x0001e682) aid_height_set_list

0x225b,	// (0x00014308) aid_size_parent

0x2342,	// (0x000143ef) aid_size_cell_graphic_pane_ParamLimits

0x2538,	// (0x000145e5) popup_ai2_data_window_g1_ParamLimits

0x2538,	// (0x000145e5) popup_ai2_data_window_g1

0x2544,	// (0x000145f1) ai2_news_ticker_pane_g1

0x254c,	// (0x000145f9) ai2_news_ticker_pane_g2

0x0001,

0xf9fe,	// (0x00021aab) ai2_news_ticker_pane_g

0x2554,	// (0x00014601) ai2_news_ticker_pane_t1

0x2562,	// (0x0001460f) ai2_news_ticker_pane_t2

0x0001,

0xfa03,	// (0x00021ab0) ai2_news_ticker_pane_t

0x2323,	// (0x000143d0) heading_ai2_gene_pane_g1

0x258f,	// (0x0001463c) heading_ai2_gene_pane_t1_ParamLimits

0x258f,	// (0x0001463c) heading_ai2_gene_pane_t1

0x25b7,	// (0x00014664) list_highlight_pane_cp6

0xc83d,	// (0x0001e8ea) ai2_gene_pane_ParamLimits

0xc83d,	// (0x0001e8ea) ai2_gene_pane

0xc861,	// (0x0001e90e) list_ai2_gene_pane_t2

0x0001,

0xfa08,	// (0x00021ab5) list_ai2_gene_pane_t

0x25bf,	// (0x0001466c) list_highlight_pane_cp8_ParamLimits

0x25bf,	// (0x0001466c) list_highlight_pane_cp8

0x25d0,	// (0x0001467d) ai2_gene_pane_g1_ParamLimits

0x25d0,	// (0x0001467d) ai2_gene_pane_g1

0x25e2,	// (0x0001468f) ai2_gene_pane_g2_ParamLimits

0x25e2,	// (0x0001468f) ai2_gene_pane_g2

0x0001,

0xfa0d,	// (0x00021aba) ai2_gene_pane_g_ParamLimits

0xfa0d,	// (0x00021aba) ai2_gene_pane_g

0xe2a9,	// (0x00020356) scroll_pane_cp12

0xb814,	// (0x0001d8c1) control_pane_t3_ParamLimits

0xb814,	// (0x0001d8c1) control_pane_t3

0xf53e,	// (0x000215eb) status_small_pane_g8_ParamLimits

0xf53e,	// (0x000215eb) status_small_pane_g8

0xb93e,	// (0x0001d9eb) popup_find_window_ParamLimits

0xbb31,	// (0x0001dbde) popup_note_image_window_ParamLimits

0x3667,	// (0x00015714) list_double2_graphic_pane_vc_g1_ParamLimits

0x3667,	// (0x00015714) list_double2_graphic_pane_vc_g1

0x3d92,	// (0x00015e3f) list_double2_graphic_pane_vc_g2_ParamLimits

0x3d92,	// (0x00015e3f) list_double2_graphic_pane_vc_g2

0x3d9e,	// (0x00015e4b) list_double2_graphic_pane_vc_g3_ParamLimits

0x3d9e,	// (0x00015e4b) list_double2_graphic_pane_vc_g3

0x0002,

0xf605,	// (0x000216b2) list_double2_graphic_pane_vc_g_ParamLimits

0xf605,	// (0x000216b2) list_double2_graphic_pane_vc_g

0x3df0,	// (0x00015e9d) list_double2_graphic_pane_vc_t1_ParamLimits

0x3df0,	// (0x00015e9d) list_double2_graphic_pane_vc_t1

0x3d92,	// (0x00015e3f) list_single_heading_pane_vc_g1_ParamLimits

0x3d92,	// (0x00015e3f) list_single_heading_pane_vc_g1

0x3d9e,	// (0x00015e4b) list_single_heading_pane_vc_g2_ParamLimits

0x3d9e,	// (0x00015e4b) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x000216b9) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x000216b9) list_single_heading_pane_vc_g

0x3e06,	// (0x00015eb3) list_single_heading_pane_vc_t1_ParamLimits

0x3e06,	// (0x00015eb3) list_single_heading_pane_vc_t1

0x3e1c,	// (0x00015ec9) list_single_heading_pane_vc_t2_ParamLimits

0x3e1c,	// (0x00015ec9) list_single_heading_pane_vc_t2

0x0001,

0xf811,	// (0x000218be) list_single_heading_pane_vc_t_ParamLimits

0xf811,	// (0x000218be) list_single_heading_pane_vc_t

0x115e,	// (0x0001320b) list_setting_number_pane_vc_g1_ParamLimits

0x115e,	// (0x0001320b) list_setting_number_pane_vc_g1

0x116a,	// (0x00013217) list_setting_number_pane_vc_g2_ParamLimits

0x116a,	// (0x00013217) list_setting_number_pane_vc_g2

0x0001,

0xf816,	// (0x000218c3) list_setting_number_pane_vc_g_ParamLimits

0xf816,	// (0x000218c3) list_setting_number_pane_vc_g

0x1176,	// (0x00013223) list_setting_number_pane_vc_t1_ParamLimits

0x1176,	// (0x00013223) list_setting_number_pane_vc_t1

0x118a,	// (0x00013237) list_setting_number_pane_vc_t2_ParamLimits

0x118a,	// (0x00013237) list_setting_number_pane_vc_t2

0x11a6,	// (0x00013253) list_setting_number_pane_vc_t3_ParamLimits

0x11a6,	// (0x00013253) list_setting_number_pane_vc_t3

0x0002,

0xf81b,	// (0x000218c8) list_setting_number_pane_vc_t_ParamLimits

0xf81b,	// (0x000218c8) list_setting_number_pane_vc_t

0x11cc,	// (0x00013279) set_value_pane_vc_ParamLimits

0x11cc,	// (0x00013279) set_value_pane_vc

0x3eab,	// (0x00015f58) list_double2_graphic_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_double2_graphic_pane_vc

0x22c9,	// (0x00014376) list_double2_large_graphic_pane_vc_ParamLimits

0x22c9,	// (0x00014376) list_double2_large_graphic_pane_vc

0x3eab,	// (0x00015f58) list_double2_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_double2_pane_vc

0x3eab,	// (0x00015f58) list_double_graphic_heading_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_double_graphic_heading_pane_vc

0x3eab,	// (0x00015f58) list_double_graphic_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_double_graphic_pane_vc

0x3eab,	// (0x00015f58) list_double_heading_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_double_heading_pane_vc

0x22c9,	// (0x00014376) list_double_large_graphic_pane_vc_ParamLimits

0x22c9,	// (0x00014376) list_double_large_graphic_pane_vc

0x3eab,	// (0x00015f58) list_double_number_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_double_number_pane_vc

0x3eab,	// (0x00015f58) list_double_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_double_pane_vc

0x3eab,	// (0x00015f58) list_double_time_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_double_time_pane_vc

0x3eab,	// (0x00015f58) list_setting_number_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_setting_number_pane_vc

0x3eab,	// (0x00015f58) list_setting_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_setting_pane_vc

0x3eab,	// (0x00015f58) list_single_graphic_heading_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_single_graphic_heading_pane_vc

0x3eab,	// (0x00015f58) list_single_heading_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_single_heading_pane_vc

0x3eab,	// (0x00015f58) list_single_number_heading_pane_vc_ParamLimits

0x3eab,	// (0x00015f58) list_single_number_heading_pane_vc

0x3f03,	// (0x00015fb0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3f03,	// (0x00015fb0) list_double_graphic_heading_pane_vc_g1

0x3d92,	// (0x00015e3f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3d92,	// (0x00015e3f) list_double_graphic_heading_pane_vc_g2

0x3d9e,	// (0x00015e4b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3d9e,	// (0x00015e4b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa19,	// (0x00021ac6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa19,	// (0x00021ac6) list_double_graphic_heading_pane_vc_g

0x3f0f,	// (0x00015fbc) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3f0f,	// (0x00015fbc) list_double_graphic_heading_pane_vc_t1

0x3e06,	// (0x00015eb3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3e06,	// (0x00015eb3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa20,	// (0x00021acd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa20,	// (0x00021acd) list_double_graphic_heading_pane_vc_t

0x115e,	// (0x0001320b) list_setting_pane_vc_g1_ParamLimits

0x115e,	// (0x0001320b) list_setting_pane_vc_g1

0x116a,	// (0x00013217) list_setting_pane_vc_g2_ParamLimits

0x116a,	// (0x00013217) list_setting_pane_vc_g2

0x0001,

0xf816,	// (0x000218c3) list_setting_pane_vc_g_ParamLimits

0xf816,	// (0x000218c3) list_setting_pane_vc_g

0x284f,	// (0x000148fc) list_setting_pane_vc_t1_ParamLimits

0x284f,	// (0x000148fc) list_setting_pane_vc_t1

0x2863,	// (0x00014910) list_setting_pane_vc_t2_ParamLimits

0x2863,	// (0x00014910) list_setting_pane_vc_t2

0x0001,

0xfa63,	// (0x00021b10) list_setting_pane_vc_t_ParamLimits

0xfa63,	// (0x00021b10) list_setting_pane_vc_t

0x11cc,	// (0x00013279) set_value_pane_cp_vc_ParamLimits

0x11cc,	// (0x00013279) set_value_pane_cp_vc

0x3d92,	// (0x00015e3f) list_single_number_heading_pane_vc_g1_ParamLimits

0x3d92,	// (0x00015e3f) list_single_number_heading_pane_vc_g1

0x3d9e,	// (0x00015e4b) list_single_number_heading_pane_vc_g2_ParamLimits

0x3d9e,	// (0x00015e4b) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x000216b9) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x000216b9) list_single_number_heading_pane_vc_g

0x3e06,	// (0x00015eb3) list_single_number_heading_pane_vc_t1_ParamLimits

0x3e06,	// (0x00015eb3) list_single_number_heading_pane_vc_t1

0x3f21,	// (0x00015fce) list_single_number_heading_pane_vc_t2_ParamLimits

0x3f21,	// (0x00015fce) list_single_number_heading_pane_vc_t2

0x3f33,	// (0x00015fe0) list_single_number_heading_pane_vc_t3_ParamLimits

0x3f33,	// (0x00015fe0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa68,	// (0x00021b15) list_single_number_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x00021b15) list_single_number_heading_pane_vc_t

0x3667,	// (0x00015714) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3667,	// (0x00015714) list_single_graphic_heading_pane_vc_g1

0x3d92,	// (0x00015e3f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3d92,	// (0x00015e3f) list_single_graphic_heading_pane_vc_g4

0x3d9e,	// (0x00015e4b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3d9e,	// (0x00015e4b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf605,	// (0x000216b2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x000216b2) list_single_graphic_heading_pane_vc_g

0x3e06,	// (0x00015eb3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3e06,	// (0x00015eb3) list_single_graphic_heading_pane_vc_t1

0x3f45,	// (0x00015ff2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3f45,	// (0x00015ff2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6f,	// (0x00021b1c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x00021b1c) list_single_graphic_heading_pane_vc_t

0x3d92,	// (0x00015e3f) list_double2_pane_vc_g1_ParamLimits

0x3d92,	// (0x00015e3f) list_double2_pane_vc_g1

0x3d9e,	// (0x00015e4b) list_double2_pane_vc_g2_ParamLimits

0x3d9e,	// (0x00015e4b) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x000216b9) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x000216b9) list_double2_pane_vc_g

0x3f57,	// (0x00016004) list_double2_pane_vc_t1_ParamLimits

0x3f57,	// (0x00016004) list_double2_pane_vc_t1

0x3f6d,	// (0x0001601a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3f6d,	// (0x0001601a) list_double2_large_graphic_pane_vc_g1

0x3f79,	// (0x00016026) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3f79,	// (0x00016026) list_double2_large_graphic_pane_vc_g2

0x3f85,	// (0x00016032) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3f85,	// (0x00016032) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x000216d6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x000216d6) list_double2_large_graphic_pane_vc_g

0x3f91,	// (0x0001603e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3f91,	// (0x0001603e) list_double2_large_graphic_pane_vc_t1

0x3fa7,	// (0x00016054) list_double_time_pane_vc_g1_ParamLimits

0x3fa7,	// (0x00016054) list_double_time_pane_vc_g1

0x3fb3,	// (0x00016060) list_double_time_pane_vc_g2_ParamLimits

0x3fb3,	// (0x00016060) list_double_time_pane_vc_g2

0x0001,

0xfa74,	// (0x00021b21) list_double_time_pane_vc_g_ParamLimits

0xfa74,	// (0x00021b21) list_double_time_pane_vc_g

0x3fbf,	// (0x0001606c) list_double_time_pane_vc_t1_ParamLimits

0x3fbf,	// (0x0001606c) list_double_time_pane_vc_t1

0x3fd8,	// (0x00016085) list_double_time_pane_vc_t2_ParamLimits

0x3fd8,	// (0x00016085) list_double_time_pane_vc_t2

0x4011,	// (0x000160be) list_double_time_pane_vc_t3_ParamLimits

0x4011,	// (0x000160be) list_double_time_pane_vc_t3

0x4029,	// (0x000160d6) list_double_time_pane_vc_t4_ParamLimits

0x4029,	// (0x000160d6) list_double_time_pane_vc_t4

0x0003,

0xfa79,	// (0x00021b26) list_double_time_pane_vc_t_ParamLimits

0xfa79,	// (0x00021b26) list_double_time_pane_vc_t

0x3d92,	// (0x00015e3f) list_double_pane_vc_g1_ParamLimits

0x3d92,	// (0x00015e3f) list_double_pane_vc_g1

0x3d9e,	// (0x00015e4b) list_double_pane_vc_g2_ParamLimits

0x3d9e,	// (0x00015e4b) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x000216b9) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x000216b9) list_double_pane_vc_g

0x403b,	// (0x000160e8) list_double_pane_vc_t1_ParamLimits

0x403b,	// (0x000160e8) list_double_pane_vc_t1

0x404d,	// (0x000160fa) list_double_pane_vc_t2_ParamLimits

0x404d,	// (0x000160fa) list_double_pane_vc_t2

0x0001,

0xfa82,	// (0x00021b2f) list_double_pane_vc_t_ParamLimits

0xfa82,	// (0x00021b2f) list_double_pane_vc_t

0x3d92,	// (0x00015e3f) list_double_number_pane_vc_g1_ParamLimits

0x3d92,	// (0x00015e3f) list_double_number_pane_vc_g1

0x3d9e,	// (0x00015e4b) list_double_number_pane_vc_g2_ParamLimits

0x3d9e,	// (0x00015e4b) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x000216b9) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x000216b9) list_double_number_pane_vc_g

0x4063,	// (0x00016110) list_double_number_pane_vc_t1_ParamLimits

0x4063,	// (0x00016110) list_double_number_pane_vc_t1

0x4077,	// (0x00016124) list_double_number_pane_vc_t2_ParamLimits

0x4077,	// (0x00016124) list_double_number_pane_vc_t2

0x404d,	// (0x000160fa) list_double_number_pane_vc_t3_ParamLimits

0x404d,	// (0x000160fa) list_double_number_pane_vc_t3

0x0002,

0xfa87,	// (0x00021b34) list_double_number_pane_vc_t_ParamLimits

0xfa87,	// (0x00021b34) list_double_number_pane_vc_t

0x4089,	// (0x00016136) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4089,	// (0x00016136) list_double_large_graphic_pane_vc_g1

0x4095,	// (0x00016142) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4095,	// (0x00016142) list_double_large_graphic_pane_vc_g2

0x3f85,	// (0x00016032) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3f85,	// (0x00016032) list_double_large_graphic_pane_vc_g3

0x40a4,	// (0x00016151) list_double_large_graphic_pane_vc_g4_ParamLimits

0x40a4,	// (0x00016151) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa8e,	// (0x00021b3b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa8e,	// (0x00021b3b) list_double_large_graphic_pane_vc_g

0x40b0,	// (0x0001615d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x40b0,	// (0x0001615d) list_double_large_graphic_pane_vc_t1

0x40c2,	// (0x0001616f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x40c2,	// (0x0001616f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa97,	// (0x00021b44) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa97,	// (0x00021b44) list_double_large_graphic_pane_vc_t

0x3d92,	// (0x00015e3f) list_double_heading_pane_vc_g1_ParamLimits

0x3d92,	// (0x00015e3f) list_double_heading_pane_vc_g1

0x3d9e,	// (0x00015e4b) list_double_heading_pane_vc_g2_ParamLimits

0x3d9e,	// (0x00015e4b) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x000216b9) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x000216b9) list_double_heading_pane_vc_g

0x40d9,	// (0x00016186) list_double_heading_pane_vc_t1_ParamLimits

0x40d9,	// (0x00016186) list_double_heading_pane_vc_t1

0x3e06,	// (0x00015eb3) list_double_heading_pane_vc_t2_ParamLimits

0x3e06,	// (0x00015eb3) list_double_heading_pane_vc_t2

0x0001,

0xfa9c,	// (0x00021b49) list_double_heading_pane_vc_t_ParamLimits

0xfa9c,	// (0x00021b49) list_double_heading_pane_vc_t

0x40eb,	// (0x00016198) list_double_graphic_pane_vc_g1_ParamLimits

0x40eb,	// (0x00016198) list_double_graphic_pane_vc_g1

0x40fb,	// (0x000161a8) list_double_graphic_pane_vc_g2_ParamLimits

0x40fb,	// (0x000161a8) list_double_graphic_pane_vc_g2

0x410a,	// (0x000161b7) list_double_graphic_pane_vc_g3_ParamLimits

0x410a,	// (0x000161b7) list_double_graphic_pane_vc_g3

0x0002,

0xfaa1,	// (0x00021b4e) list_double_graphic_pane_vc_g_ParamLimits

0xfaa1,	// (0x00021b4e) list_double_graphic_pane_vc_g

0x4116,	// (0x000161c3) list_double_graphic_pane_vc_t1_ParamLimits

0x4116,	// (0x000161c3) list_double_graphic_pane_vc_t1

0x404d,	// (0x000160fa) list_double_graphic_pane_vc_t2_ParamLimits

0x404d,	// (0x000160fa) list_double_graphic_pane_vc_t2

0x0001,

0xfaa8,	// (0x00021b55) list_double_graphic_pane_vc_t_ParamLimits

0xfaa8,	// (0x00021b55) list_double_graphic_pane_vc_t

0x4513,	// (0x000165c0) aid_size_cell_fastswap

0xaebf,	// (0x0001cf6c) aid_size_cell_touch_ParamLimits

0xaebf,	// (0x0001cf6c) aid_size_cell_touch

0x4660,	// (0x0001670d) popup_fast_swap_wide_window_ParamLimits

0x4660,	// (0x0001670d) popup_fast_swap_wide_window

0xafd9,	// (0x0001d086) touch_pane_ParamLimits

0xafd9,	// (0x0001d086) touch_pane

0x3ad3,	// (0x00015b80) button_value_adjust_pane_cp2

0x2b8e,	// (0x00014c3b) button_value_adjust_pane_cp4

0x3af3,	// (0x00015ba0) form_field_data_pane_cp2

0xaa82,	// (0x0001cb2f) form_field_data_wide_pane_cp2

0xed3d,	// (0x00020dea) bg_scroll_pane_ParamLimits

0x4921,	// (0x000169ce) scroll_handle_pane_ParamLimits

0x4935,	// (0x000169e2) scroll_sc2_down_pane_ParamLimits

0x4935,	// (0x000169e2) scroll_sc2_down_pane

0xed6e,	// (0x00020e1b) scroll_sc2_up_pane_ParamLimits

0xed6e,	// (0x00020e1b) scroll_sc2_up_pane

0xc985,	// (0x0001ea32) grid_wheel_folder_pane_g1_ParamLimits

0xc985,	// (0x0001ea32) grid_wheel_folder_pane_g1

0x4ae9,	// (0x00016b96) clock_nsta_pane_cp2_ParamLimits

0x4ae9,	// (0x00016b96) clock_nsta_pane_cp2

0xb668,	// (0x0001d715) listscroll_midp_pane_ParamLimits

0xb678,	// (0x0001d725) midp_canvas_pane

0x4d28,	// (0x00016dd5) nsta_clock_indic_pane

0x0e1a,	// (0x00012ec7) listscroll_form_pane_vc

0x0e22,	// (0x00012ecf) listscroll_set_pane_vc_ParamLimits

0x0e22,	// (0x00012ecf) listscroll_set_pane_vc

0xbefd,	// (0x0001dfaa) clock_nsta_pane

0xbf20,	// (0x0001dfcd) indicator_nsta_pane

0x1038,	// (0x000130e5) bg_popup_sub_pane_cp2_ParamLimits

0x104c,	// (0x000130f9) find_pane_cp2_ParamLimits

0x104c,	// (0x000130f9) find_pane_cp2

0x105e,	// (0x0001310b) grid_toobar_pane_ParamLimits

0x11d8,	// (0x00013285) list_form_gen_pane_vc_ParamLimits

0x11d8,	// (0x00013285) list_form_gen_pane_vc

0x11ee,	// (0x0001329b) scroll_pane_cp8_vc_ParamLimits

0x11ee,	// (0x0001329b) scroll_pane_cp8_vc

0x123e,	// (0x000132eb) data_form_wide_pane_vc_ParamLimits

0x123e,	// (0x000132eb) data_form_wide_pane_vc

0x124a,	// (0x000132f7) form_field_data_wide_pane_vc_g1

0x1252,	// (0x000132ff) form_field_data_wide_pane_vc_t1_ParamLimits

0x1252,	// (0x000132ff) form_field_data_wide_pane_vc_t1

0xe9bf,	// (0x00020a6c) input_focus_pane_cp6_vc_ParamLimits

0xe9bf,	// (0x00020a6c) input_focus_pane_cp6_vc

0xc2d4,	// (0x0001e381) list_midp_pane_ParamLimits

0x2247,	// (0x000142f4) scroll_pane_cp16_ParamLimits

0x2247,	// (0x000142f4) scroll_pane_cp16

0x14ba,	// (0x00013567) button_value_adjust_pane_ParamLimits

0x14ba,	// (0x00013567) button_value_adjust_pane

0xc5e1,	// (0x0001e68e) button_value_adjust_pane_cp6_ParamLimits

0xc5e1,	// (0x0001e68e) button_value_adjust_pane_cp6

0xc6eb,	// (0x0001e798) settings_code_pane_cp_ParamLimits

0xc6eb,	// (0x0001e798) settings_code_pane_cp

0xdc7c,	// (0x0001fd29) cell_touch_pane_g1

0xdc7c,	// (0x0001fd29) cell_touch_pane_g2

0x0001,

0xf747,	// (0x000217f4) cell_touch_pane_g

0xc86f,	// (0x0001e91c) cell_touch_pane_cp_ParamLimits

0xc86f,	// (0x0001e91c) cell_touch_pane_cp

0xc88b,	// (0x0001e938) cell_touch_pane_ParamLimits

0xc88b,	// (0x0001e938) cell_touch_pane

0xdc7c,	// (0x0001fd29) scroll_sc2_down_pane_g1

0xdc7c,	// (0x0001fd29) scroll_sc2_up_pane_g1

0xdcfe,	// (0x0001fdab) bg_set_opt_pane_cp4_vc

0x2673,	// (0x00014720) list_set_graphic_pane_vc_g1_ParamLimits

0x2673,	// (0x00014720) list_set_graphic_pane_vc_g1

0x267f,	// (0x0001472c) list_set_graphic_pane_vc_g2_ParamLimits

0x267f,	// (0x0001472c) list_set_graphic_pane_vc_g2

0x0001,

0xfa25,	// (0x00021ad2) list_set_graphic_pane_vc_g_ParamLimits

0xfa25,	// (0x00021ad2) list_set_graphic_pane_vc_g

0x268b,	// (0x00014738) text_primary_small_cp13_vc_ParamLimits

0x268b,	// (0x00014738) text_primary_small_cp13_vc

0x25a4,	// (0x00014651) list_set_graphic_pane_vc_ParamLimits

0x25a4,	// (0x00014651) list_set_graphic_pane_vc

0xdcfe,	// (0x0001fdab) input_focus_pane_cp2_vc

0xdc7c,	// (0x0001fd29) setting_code_pane_vc_g1

0x26a3,	// (0x00014750) setting_code_pane_vc_t1

0x26b1,	// (0x0001475e) set_text_pane_vc_t1_ParamLimits

0x26b1,	// (0x0001475e) set_text_pane_vc_t1

0xdcfe,	// (0x0001fdab) input_focus_pane_cp1_vc

0x26cc,	// (0x00014779) list_set_text_pane_vc

0xdc7c,	// (0x0001fd29) setting_text_pane_vc_g1

0xdcfe,	// (0x0001fdab) bg_set_opt_pane_cp2_vc

0x26d6,	// (0x00014783) setting_slider_graphic_pane_vc_g1

0x26de,	// (0x0001478b) setting_slider_graphic_pane_vc_t1

0x26ec,	// (0x00014799) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2a,	// (0x00021ad7) setting_slider_graphic_pane_vc_t

0x26fa,	// (0x000147a7) slider_set_pane_cp_vc

0x2702,	// (0x000147af) slider_set_pane_vc_g1

0x270b,	// (0x000147b8) slider_set_pane_vc_g2

0x0006,

0xfa2f,	// (0x00021adc) slider_set_pane_vc_g

0xea0e,	// (0x00020abb) set_opt_bg_pane_g1_copy1

0xea16,	// (0x00020ac3) set_opt_bg_pane_g2_copy1

0x2737,	// (0x000147e4) set_opt_bg_pane_g3_copy1

0xea26,	// (0x00020ad3) set_opt_bg_pane_g4_copy1

0xea2e,	// (0x00020adb) set_opt_bg_pane_g5_copy1

0xea36,	// (0x00020ae3) set_opt_bg_pane_g6_copy1

0x273f,	// (0x000147ec) set_opt_bg_pane_g7_copy1

0x2747,	// (0x000147f4) set_opt_bg_pane_g8_copy1

0x274f,	// (0x000147fc) set_opt_bg_pane_g9_copy1

0xdcfe,	// (0x0001fdab) bg_set_opt_pane_cp_vc

0x2757,	// (0x00014804) setting_slider_pane_vc_t1

0x26de,	// (0x0001478b) setting_slider_pane_vc_t2

0x26ec,	// (0x00014799) setting_slider_pane_vc_t3

0x0002,

0xfa3e,	// (0x00021aeb) setting_slider_pane_vc_t

0x26fa,	// (0x000147a7) slider_set_pane_vc

0x55e5,	// (0x00017692) volume_set_pane_vc_g1

0x5c3d,	// (0x00017cea) volume_set_pane_vc_g2

0x5c46,	// (0x00017cf3) volume_set_pane_vc_g3

0x5c4f,	// (0x00017cfc) volume_set_pane_vc_g4

0x5c58,	// (0x00017d05) volume_set_pane_vc_g5

0x5c61,	// (0x00017d0e) volume_set_pane_vc_g6

0x5c6a,	// (0x00017d17) volume_set_pane_vc_g7

0x5c73,	// (0x00017d20) volume_set_pane_vc_g8

0x5c7c,	// (0x00017d29) volume_set_pane_vc_g9

0x5c85,	// (0x00017d32) volume_set_pane_vc_g10

0x0009,

0xfa45,	// (0x00021af2) volume_set_pane_vc_g

0x2766,	// (0x00014813) volume_set_pane_vc

0x276e,	// (0x0001481b) button_value_adjust_pane_cp1_vc

0x2778,	// (0x00014825) list_highlight_pane_cp2_vc

0x2781,	// (0x0001482e) list_set_pane_vc_ParamLimits

0x2781,	// (0x0001482e) list_set_pane_vc

0x27d3,	// (0x00014880) main_pane_set_vc_t1_ParamLimits

0x27d3,	// (0x00014880) main_pane_set_vc_t1

0x27fa,	// (0x000148a7) main_pane_set_vc_t2_ParamLimits

0x27fa,	// (0x000148a7) main_pane_set_vc_t2

0x280c,	// (0x000148b9) main_pane_set_vc_t3_ParamLimits

0x280c,	// (0x000148b9) main_pane_set_vc_t3

0x281e,	// (0x000148cb) main_pane_set_vc_t4_ParamLimits

0x281e,	// (0x000148cb) main_pane_set_vc_t4

0x0003,

0xfa5a,	// (0x00021b07) main_pane_set_vc_t_ParamLimits

0xfa5a,	// (0x00021b07) main_pane_set_vc_t

0x2830,	// (0x000148dd) setting_code_pane_vc_ParamLimits

0x2830,	// (0x000148dd) setting_code_pane_vc

0x283f,	// (0x000148ec) setting_slider_graphic_pane_vc

0x283f,	// (0x000148ec) setting_slider_pane_vc

0x283f,	// (0x000148ec) setting_text_pane_vc

0x283f,	// (0x000148ec) setting_volume_pane_vc

0x2847,	// (0x000148f4) scroll_pane_cp121_vc

0xe9aa,	// (0x00020a57) set_content_pane_vc

0x29fa,	// (0x00014aa7) button_value_adjust_pane_g1

0x2a03,	// (0x00014ab0) button_value_adjust_pane_g2

0x0001,

0xfaad,	// (0x00021b5a) button_value_adjust_pane_g

0x2a0c,	// (0x00014ab9) form_field_slider_wide_pane_vc_t1_ParamLimits

0x2a0c,	// (0x00014ab9) form_field_slider_wide_pane_vc_t1

0x2a22,	// (0x00014acf) form_field_slider_wide_pane_vc_t2_ParamLimits

0x2a22,	// (0x00014acf) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab2,	// (0x00021b5f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab2,	// (0x00021b5f) form_field_slider_wide_pane_vc_t

0xdd4c,	// (0x0001fdf9) input_focus_pane_cp10_vc_ParamLimits

0xdd4c,	// (0x0001fdf9) input_focus_pane_cp10_vc

0x2a37,	// (0x00014ae4) slider_cont_pane_cp1_vc_ParamLimits

0x2a37,	// (0x00014ae4) slider_cont_pane_cp1_vc

0x2702,	// (0x000147af) slider_form_pane_g1_cp2

0x270b,	// (0x000147b8) slider_form_pane_g2_cp2

0x2a52,	// (0x00014aff) form_field_slider_pane_vc_t3

0x2a60,	// (0x00014b0d) form_field_slider_pane_vc_t4

0x2a6e,	// (0x00014b1b) slider_form_pane_vc_ParamLimits

0x2a6e,	// (0x00014b1b) slider_form_pane_vc

0x2a7b,	// (0x00014b28) form_field_slider_pane_vc_t1_ParamLimits

0x2a7b,	// (0x00014b28) form_field_slider_pane_vc_t1

0x2a91,	// (0x00014b3e) form_field_slider_pane_vc_t2_ParamLimits

0x2a91,	// (0x00014b3e) form_field_slider_pane_vc_t2

0x0001,

0xfac2,	// (0x00021b6f) form_field_slider_pane_vc_t_ParamLimits

0xfac2,	// (0x00021b6f) form_field_slider_pane_vc_t

0xdd4c,	// (0x0001fdf9) input_focus_pane_cp9_vc_ParamLimits

0xdd4c,	// (0x0001fdf9) input_focus_pane_cp9_vc

0x2aa3,	// (0x00014b50) slider_cont_pane_vc_ParamLimits

0x2aa3,	// (0x00014b50) slider_cont_pane_vc

0x2ab5,	// (0x00014b62) list_form_graphic_pane_cp_vc_ParamLimits

0x2ab5,	// (0x00014b62) list_form_graphic_pane_cp_vc

0x124a,	// (0x000132f7) form_field_popup_wide_pane_vc_g1

0x2ae1,	// (0x00014b8e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x2ae1,	// (0x00014b8e) form_field_popup_wide_pane_vc_t1

0xe9bf,	// (0x00020a6c) input_focus_pane_cp8_vc_ParamLimits

0xe9bf,	// (0x00020a6c) input_focus_pane_cp8_vc

0x2af6,	// (0x00014ba3) list_form_wide_pane_vc_ParamLimits

0x2af6,	// (0x00014ba3) list_form_wide_pane_vc

0x2b02,	// (0x00014baf) list_form_graphic_pane_vc_g1

0x2b0a,	// (0x00014bb7) list_form_graphic_pane_vc_t1_ParamLimits

0x2b0a,	// (0x00014bb7) list_form_graphic_pane_vc_t1

0xdd62,	// (0x0001fe0f) list_highlight_pane_cp5_vc_ParamLimits

0xdd62,	// (0x0001fe0f) list_highlight_pane_cp5_vc

0x2b26,	// (0x00014bd3) list_form_graphic_pane_vc_ParamLimits

0x2b26,	// (0x00014bd3) list_form_graphic_pane_vc

0x124a,	// (0x000132f7) form_field_popup_pane_vc_g1

0x2b3c,	// (0x00014be9) form_field_popup_pane_vc_t1_ParamLimits

0x2b3c,	// (0x00014be9) form_field_popup_pane_vc_t1

0xe9bf,	// (0x00020a6c) input_focus_pane_cp7_vc_ParamLimits

0xe9bf,	// (0x00020a6c) input_focus_pane_cp7_vc

0x2b51,	// (0x00014bfe) list_form_pane_vc_ParamLimits

0x2b51,	// (0x00014bfe) list_form_pane_vc

0x2b5d,	// (0x00014c0a) data_form_pane_vc_t1_ParamLimits

0x2b5d,	// (0x00014c0a) data_form_pane_vc_t1

0xea0e,	// (0x00020abb) input_focus_pane_vc_g1

0xea16,	// (0x00020ac3) input_focus_pane_vc_g2

0xea1e,	// (0x00020acb) input_focus_pane_vc_g3

0xea26,	// (0x00020ad3) input_focus_pane_vc_g4

0xea2e,	// (0x00020adb) input_focus_pane_vc_g5

0xea36,	// (0x00020ae3) input_focus_pane_vc_g6

0xea3e,	// (0x00020aeb) input_focus_pane_vc_g7

0xea46,	// (0x00020af3) input_focus_pane_vc_g8

0xea4e,	// (0x00020afb) input_focus_pane_vc_g9

0xdc7c,	// (0x0001fd29) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x0002177d) input_focus_pane_vc_g

0x123e,	// (0x000132eb) data_form_pane_vc_ParamLimits

0x123e,	// (0x000132eb) data_form_pane_vc

0x124a,	// (0x000132f7) form_field_data_pane_vc_g1

0x2b78,	// (0x00014c25) form_field_data_pane_vc_t1_ParamLimits

0x2b78,	// (0x00014c25) form_field_data_pane_vc_t1

0xe9bf,	// (0x00020a6c) input_focus_pane_vc_ParamLimits

0xe9bf,	// (0x00020a6c) input_focus_pane_vc

0xef1e,	// (0x00020fcb) button_value_adjust_pane_cp3_vc

0x2b8e,	// (0x00014c3b) button_value_adjust_pane_cp5_vc

0x2aca,	// (0x00014b77) form_field_data_pane_vc_ParamLimits

0x2aca,	// (0x00014b77) form_field_data_pane_vc

0xef26,	// (0x00020fd3) form_field_data_pane_vc_cp2

0x2b96,	// (0x00014c43) form_field_data_wide_pane_vc_ParamLimits

0x2b96,	// (0x00014c43) form_field_data_wide_pane_vc

0x2bac,	// (0x00014c59) form_field_data_wide_pane_vc_cp2

0x2bb4,	// (0x00014c61) form_field_popup_pane_vc_ParamLimits

0x2bb4,	// (0x00014c61) form_field_popup_pane_vc

0x2bcb,	// (0x00014c78) form_field_popup_wide_pane_vc_ParamLimits

0x2bcb,	// (0x00014c78) form_field_popup_wide_pane_vc

0x2be1,	// (0x00014c8e) form_field_slider_pane_vc_ParamLimits

0x2be1,	// (0x00014c8e) form_field_slider_pane_vc

0x2bf4,	// (0x00014ca1) form_field_slider_wide_pane_vc_ParamLimits

0x2bf4,	// (0x00014ca1) form_field_slider_wide_pane_vc

0xc8a9,	// (0x0001e956) grid_touch_1_pane_ParamLimits

0xc8a9,	// (0x0001e956) grid_touch_1_pane

0xc8bd,	// (0x0001e96a) grid_touch_2_pane_ParamLimits

0xc8bd,	// (0x0001e96a) grid_touch_2_pane

0x2c6c,	// (0x00014d19) touch_pane_g1_ParamLimits

0x2c6c,	// (0x00014d19) touch_pane_g1

0x2c07,	// (0x00014cb4) cell_app_pane_cp_wide_ParamLimits

0x2c07,	// (0x00014cb4) cell_app_pane_cp_wide

0x2c17,	// (0x00014cc4) grid_popup_fast_wide_pane_ParamLimits

0x2c17,	// (0x00014cc4) grid_popup_fast_wide_pane

0x2c2b,	// (0x00014cd8) scroll_pane_cp19_ParamLimits

0x2c2b,	// (0x00014cd8) scroll_pane_cp19

0xdcfe,	// (0x0001fdab) bg_popup_window_pane_cp20

0x2c3f,	// (0x00014cec) listscroll_popup_fast_wide_pane

0xef2e,	// (0x00020fdb) grid_indicator_nsta_pane

0x2c47,	// (0x00014cf4) clock_nsta_pane_g1

0x2c50,	// (0x00014cfd) clock_nsta_pane_t1

0xc8e7,	// (0x0001e994) cell_indicator_nsta_pane_ParamLimits

0xc8e7,	// (0x0001e994) cell_indicator_nsta_pane

0x2c6c,	// (0x00014d19) cell_indicator_nsta_pane_g1

0xc904,	// (0x0001e9b1) cell_indicator_nsta_pane_g2

0x0001,

0xfacc,	// (0x00021b79) cell_indicator_nsta_pane_g

0x2c7a,	// (0x00014d27) clock_nsta_pane_cp

0x2c82,	// (0x00014d2f) indicator_nsta_pane_cp

0x2c8b,	// (0x00014d38) nsta_clock_indic_pane_g1

0xddca,	// (0x0001fe77) grid_indicator_pane

0xee60,	// (0x00020f0d) scroll_pane_cp29

0x4a40,	// (0x00016aed) indicator_nsta_pane_cp2_ParamLimits

0x4a40,	// (0x00016aed) indicator_nsta_pane_cp2

0xdd62,	// (0x0001fe0f) main_apps_wheel_pane

0x136d,	// (0x0001341a) form_midp_field_text_pane_ParamLimits

0x149a,	// (0x00013547) scroll_bar_cp050_ParamLimits

0x2cc3,	// (0x00014d70) cell_indicator_pane_ParamLimits

0x2cc3,	// (0x00014d70) cell_indicator_pane

0x2cd9,	// (0x00014d86) cell_indicator_pane_g1

0xc919,	// (0x0001e9c6) grid_wheel_folder_pane_ParamLimits

0xc919,	// (0x0001e9c6) grid_wheel_folder_pane

0xc927,	// (0x0001e9d4) list_wheel_apps_pane_ParamLimits

0xc927,	// (0x0001e9d4) list_wheel_apps_pane

0xc933,	// (0x0001e9e0) main_apps_wheel_pane_g1_ParamLimits

0xc933,	// (0x0001e9e0) main_apps_wheel_pane_g1

0xc93f,	// (0x0001e9ec) main_apps_wheel_pane_g2_ParamLimits

0xc93f,	// (0x0001e9ec) main_apps_wheel_pane_g2

0x0001,

0xfadb,	// (0x00021b88) main_apps_wheel_pane_g_ParamLimits

0xfadb,	// (0x00021b88) main_apps_wheel_pane_g

0xc94b,	// (0x0001e9f8) main_apps_wheel_pane_t1_ParamLimits

0xc94b,	// (0x0001e9f8) main_apps_wheel_pane_t1

0xc95d,	// (0x0001ea0a) list_wheel_apps_pane_g1

0xc965,	// (0x0001ea12) list_wheel_apps_pane_g2

0xc96d,	// (0x0001ea1a) list_wheel_apps_pane_g3

0xc975,	// (0x0001ea22) list_wheel_apps_pane_g4

0xc97d,	// (0x0001ea2a) list_wheel_apps_pane_g5

0x0004,

0xfae0,	// (0x00021b8d) list_wheel_apps_pane_g

0xdd62,	// (0x0001fe0f) navi_icon_text_pane

0xbe09,	// (0x0001deb6) aid_fill_nsta

0x5da6,	// (0x00017e53) navi_icon_text_pane_g1

0x5db2,	// (0x00017e5f) navi_icon_text_pane_t1

0xf0f3,	// (0x000211a0) list_set_graphic_pane_t1_ParamLimits

0xf0f3,	// (0x000211a0) list_set_graphic_pane_t1

0x1b4f,	// (0x00013bfc) popup_midp_note_alarm_window_t6_ParamLimits

0x1b4f,	// (0x00013bfc) popup_midp_note_alarm_window_t6

0x1b61,	// (0x00013c0e) popup_midp_note_alarm_window_t7_ParamLimits

0x1b61,	// (0x00013c0e) popup_midp_note_alarm_window_t7

0x1b73,	// (0x00013c20) popup_midp_note_alarm_window_t8_ParamLimits

0x1b73,	// (0x00013c20) popup_midp_note_alarm_window_t8

0x1b85,	// (0x00013c32) popup_midp_note_alarm_window_t9_ParamLimits

0x1b85,	// (0x00013c32) popup_midp_note_alarm_window_t9

0x1b97,	// (0x00013c44) popup_midp_note_alarm_window_t10_ParamLimits

0x1b97,	// (0x00013c44) popup_midp_note_alarm_window_t10

0x1ba9,	// (0x00013c56) popup_midp_note_alarm_window_t11_ParamLimits

0x1ba9,	// (0x00013c56) popup_midp_note_alarm_window_t11

0x1bbb,	// (0x00013c68) scroll_pane_cp17_ParamLimits

0x1bbb,	// (0x00013c68) scroll_pane_cp17

0x55e5,	// (0x00017692) volume_small_pane_cp_g1

0x5dc4,	// (0x00017e71) volume_small_pane_cp_g2

0x5dcd,	// (0x00017e7a) volume_small_pane_cp_g3

0x5dd6,	// (0x00017e83) volume_small_pane_cp_g4

0x5612,	// (0x000176bf) volume_small_pane_cp_g5

0x5ddf,	// (0x00017e8c) volume_small_pane_cp_g6

0x5de8,	// (0x00017e95) volume_small_pane_cp_g7

0x5df1,	// (0x00017e9e) volume_small_pane_cp_g8

0x5dfa,	// (0x00017ea7) volume_small_pane_cp_g9

0x5e03,	// (0x00017eb0) volume_small_pane_cp_g10

0xf3a2,	// (0x0002144f) midp_ticker_pane_g1_ParamLimits

0xf3ae,	// (0x0002145b) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x00021845) midp_ticker_pane_g_ParamLimits

0xf3ba,	// (0x00021467) midp_ticker_pane_t1_ParamLimits

0xbe1f,	// (0x0001decc) aid_fill_nsta_2

0x1486,	// (0x00013533) list_form2_midp_pane

0x2297,	// (0x00014344) midp_editing_number_pane_ParamLimits

0x22a3,	// (0x00014350) midp_ticker_pane_ParamLimits

0x5e0c,	// (0x00017eb9) form2_midp_field_pane

0x5e30,	// (0x00017edd) scroll_pane_cp51

0x5e50,	// (0x00017efd) form2_midp_button_pane_ParamLimits

0x5e50,	// (0x00017efd) form2_midp_button_pane

0x5e62,	// (0x00017f0f) form2_midp_content_pane_ParamLimits

0x5e62,	// (0x00017f0f) form2_midp_content_pane

0x5e7c,	// (0x00017f29) form2_midp_field_choice_group_pane

0x5e84,	// (0x00017f31) form2_midp_field_pane_g1

0x5e8c,	// (0x00017f39) form2_midp_field_pane_g2

0x5e94,	// (0x00017f41) form2_midp_field_pane_g3

0x5e9c,	// (0x00017f49) form2_midp_field_pane_g4

0x0003,

0xfb05,	// (0x00021bb2) form2_midp_field_pane_g

0x5ea4,	// (0x00017f51) form2_midp_gauge_slider_pane

0x5eac,	// (0x00017f59) form2_midp_gauge_wait_pane

0x5eb4,	// (0x00017f61) form2_midp_image_pane_ParamLimits

0x5eb4,	// (0x00017f61) form2_midp_image_pane

0x5ecf,	// (0x00017f7c) form2_midp_label_pane_ParamLimits

0x5ecf,	// (0x00017f7c) form2_midp_label_pane

0xc9b2,	// (0x0001ea5f) form2_midp_label_pane_cp_ParamLimits

0xc9b2,	// (0x0001ea5f) form2_midp_label_pane_cp

0x5f07,	// (0x00017fb4) form2_midp_string_pane_ParamLimits

0x5f07,	// (0x00017fb4) form2_midp_string_pane

0xac8a,	// (0x0001cd37) form2_midp_text_pane_ParamLimits

0xac8a,	// (0x0001cd37) form2_midp_text_pane

0x5f19,	// (0x00017fc6) form2_midp_time_pane

0x5f29,	// (0x00017fd6) input_focus_pane_cp51_ParamLimits

0x5f29,	// (0x00017fd6) input_focus_pane_cp51

0x5f41,	// (0x00017fee) form2_midp_label_pane_t1_ParamLimits

0x5f41,	// (0x00017fee) form2_midp_label_pane_t1

0xaca3,	// (0x0001cd50) form2_mdip_text_pane_t1_ParamLimits

0xaca3,	// (0x0001cd50) form2_mdip_text_pane_t1

0x415e,	// (0x0001620b) form2_midp_time_pane_t1

0x5f89,	// (0x00018036) form2_midp_gauge_slider_pane_t1

0xc9d1,	// (0x0001ea7e) form2_midp_gauge_slider_pane_t2

0xc9e3,	// (0x0001ea90) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0e,	// (0x00021bbb) form2_midp_gauge_slider_pane_t

0x5fbf,	// (0x0001806c) form2_midp_slider_pane

0x5fcb,	// (0x00018078) form2_midp_gauge_wait_pane_t1

0x5fd9,	// (0x00018086) form2_midp_wait_pane_ParamLimits

0x5fd9,	// (0x00018086) form2_midp_wait_pane

0xc251,	// (0x0001e2fe) list_single_2graphic_pane_cp4_ParamLimits

0xc251,	// (0x0001e2fe) list_single_2graphic_pane_cp4

0xc9f5,	// (0x0001eaa2) list_single_midp_graphic_pane_cp_ParamLimits

0xc9f5,	// (0x0001eaa2) list_single_midp_graphic_pane_cp

0xdcfe,	// (0x0001fdab) list_highlight_pane_cp20

0x6004,	// (0x000180b1) list_single_2graphic_pane_g1_cp4

0x2323,	// (0x000143d0) list_single_2graphic_pane_g2_cp4

0x600c,	// (0x000180b9) list_single_2graphic_pane_t1_cp4

0xdd62,	// (0x0001fe0f) list_highlight_pane_cp21

0x601b,	// (0x000180c8) list_single_midp_graphic_pane_g4_cp

0x602a,	// (0x000180d7) list_single_midp_graphic_pane_t1_cp

0xca13,	// (0x0001eac0) form2_mdip_string_pane_t1_ParamLimits

0xca13,	// (0x0001eac0) form2_mdip_string_pane_t1

0xdcfe,	// (0x0001fdab) bg_wml_button_pane_cp2

0xdc7c,	// (0x0001fd29) form2_midp_image_pane_g1

0x38aa,	// (0x00015957) list_double_large_graphic_pane_g5_ParamLimits

0x38aa,	// (0x00015957) list_double_large_graphic_pane_g5

0xb668,	// (0x0001d715) midp_form_pane_ParamLimits

0xdd62,	// (0x0001fe0f) main_apps_wheel_pane_ParamLimits

0xbbab,	// (0x0001dc58) popup_preview_window_ParamLimits

0xbbab,	// (0x0001dc58) popup_preview_window

0x0ef2,	// (0x00012f9f) popup_touch_info_window_ParamLimits

0x0ef2,	// (0x00012f9f) popup_touch_info_window

0x0f10,	// (0x00012fbd) popup_touch_menu_window_ParamLimits

0x0f10,	// (0x00012fbd) popup_touch_menu_window

0xdc72,	// (0x0001fd1f) bg_popup_sub_pane_cp6

0x60b7,	// (0x00018164) list_touch_menu_pane

0x60bf,	// (0x0001816c) list_single_touch_menu_pane_ParamLimits

0x60bf,	// (0x0001816c) list_single_touch_menu_pane

0x60d6,	// (0x00018183) list_single_touch_menu_pane_t1

0xdd62,	// (0x0001fe0f) bg_popup_sub_pane_cp7_ParamLimits

0xdd62,	// (0x0001fe0f) bg_popup_sub_pane_cp7

0x60e4,	// (0x00018191) heading_sub_pane

0x60ec,	// (0x00018199) list_touch_info_pane_ParamLimits

0x60ec,	// (0x00018199) list_touch_info_pane

0x60fb,	// (0x000181a8) list_single_touch_info_pane_ParamLimits

0x60fb,	// (0x000181a8) list_single_touch_info_pane

0x610c,	// (0x000181b9) list_single_touch_info_pane_t1

0x611a,	// (0x000181c7) list_single_touch_info_pane_t2

0x0001,

0xfb1c,	// (0x00021bc9) list_single_touch_info_pane_t

0xf378,	// (0x00021425) bg_popup_heading_pane_cp

0x6128,	// (0x000181d5) heading_sub_pane_t1

0x1204,	// (0x000132b1) bg_popup_preview_window_pane_cp_ParamLimits

0x1204,	// (0x000132b1) bg_popup_preview_window_pane_cp

0x60e4,	// (0x00018191) heading_preview_pane

0x60ec,	// (0x00018199) list_preview_pane_ParamLimits

0x60ec,	// (0x00018199) list_preview_pane

0x6136,	// (0x000181e3) popup_preview_window_g1

0x60fb,	// (0x000181a8) list_single_preview_pane_ParamLimits

0x60fb,	// (0x000181a8) list_single_preview_pane

0x613e,	// (0x000181eb) list_single_preview_pane_g1

0x6146,	// (0x000181f3) list_single_preview_pane_t1

0x610c,	// (0x000181b9) list_single_preview_pane_t2

0x0001,

0xfb21,	// (0x00021bce) list_single_preview_pane_t

0x6154,	// (0x00018201) bg_popup_heading_pane_cp2_ParamLimits

0x6154,	// (0x00018201) bg_popup_heading_pane_cp2

0x616a,	// (0x00018217) heading_preview_pane_g1

0x6172,	// (0x0001821f) heading_preview_pane_t1_ParamLimits

0x6172,	// (0x0001821f) heading_preview_pane_t1

0xdde1,	// (0x0001fe8e) soft_indicator_pane_t1_ParamLimits

0xe285,	// (0x00020332) scroll_pane_ParamLimits

0xed5c,	// (0x00020e09) scroll_sc2_left_pane

0xed65,	// (0x00020e12) scroll_sc2_right_pane

0xed84,	// (0x00020e31) scroll_bg_pane_g1_ParamLimits

0xed99,	// (0x00020e46) scroll_bg_pane_g2_ParamLimits

0xedb1,	// (0x00020e5e) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x000217d4) scroll_bg_pane_g_ParamLimits

0xed84,	// (0x00020e31) scroll_handle_pane_g1_ParamLimits

0xedd3,	// (0x00020e80) scroll_handle_pane_g2_ParamLimits

0xedb1,	// (0x00020e5e) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x000217db) scroll_handle_pane_g_ParamLimits

0x0e4a,	// (0x00012ef7) popup_choice_list_window_ParamLimits

0x0e4a,	// (0x00012ef7) popup_choice_list_window

0x1044,	// (0x000130f1) choice_list_pane

0x10ba,	// (0x00013167) cell_toolbar_pane_t1

0x10e2,	// (0x0001318f) toolbar_button_pane_ParamLimits

0x1f81,	// (0x0001402e) ai_gene_pane_1_t2_ParamLimits

0x1f81,	// (0x0001402e) ai_gene_pane_1_t2

0x0001,

0xf938,	// (0x000219e5) ai_gene_pane_1_t_ParamLimits

0xf938,	// (0x000219e5) ai_gene_pane_1_t

0x618f,	// (0x0001823c) scroll_sc2_left_pane_g1

0x618f,	// (0x0001823c) scroll_sc2_right_pane_g1

0x0dd6,	// (0x00012e83) bg_popup_sub_pane_cp10

0x6199,	// (0x00018246) list_choice_list_pane

0x61b0,	// (0x0001825d) list_single_choice_list_pane_ParamLimits

0x61b0,	// (0x0001825d) list_single_choice_list_pane

0x61c4,	// (0x00018271) list_single_choice_list_pane_g1

0xeb26,	// (0x00020bd3) list_single_choice_list_pane_t1_ParamLimits

0xeb26,	// (0x00020bd3) list_single_choice_list_pane_t1

0x61cc,	// (0x00018279) choice_list_pane_g1

0x61d4,	// (0x00018281) choice_list_pane_t1

0xdc72,	// (0x0001fd1f) input_focus_pane_cp11

0xecb1,	// (0x00020d5e) title_pane_stacon_g2_ParamLimits

0xecb1,	// (0x00020d5e) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x000217ba) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x000217ba) title_pane_stacon_g

0xf378,	// (0x00021425) cursor_press_pane

0xb912,	// (0x0001d9bf) popup_fep_hwr_window_ParamLimits

0xb912,	// (0x0001d9bf) popup_fep_hwr_window

0x0e9c,	// (0x00012f49) popup_fep_vkb_window_ParamLimits

0x0e9c,	// (0x00012f49) popup_fep_vkb_window

0x61e2,	// (0x0001828f) cursor_press_pane_g1

0x0002,

0xfb4a,	// (0x00021bf7) fep_vkb_side_pane_g_ParamLimits

0x621f,	// (0x000182cc) fep_hwr_candidate_pane_ParamLimits

0x621f,	// (0x000182cc) fep_hwr_candidate_pane

0x6247,	// (0x000182f4) fep_hwr_side_pane_ParamLimits

0x6247,	// (0x000182f4) fep_hwr_side_pane

0x6267,	// (0x00018314) fep_hwr_top_pane_ParamLimits

0x6267,	// (0x00018314) fep_hwr_top_pane

0x627f,	// (0x0001832c) fep_hwr_write_pane_ParamLimits

0x627f,	// (0x0001832c) fep_hwr_write_pane

0xfb4a,	// (0x00021bf7) fep_vkb_side_pane_g

0x62b9,	// (0x00018366) fep_hwr_top_pane_g1

0x62cb,	// (0x00018378) fep_hwr_top_pane_g2

0x62dd,	// (0x0001838a) fep_hwr_top_pane_g3

0x0002,

0xfb26,	// (0x00021bd3) fep_hwr_top_pane_g

0x62f2,	// (0x0001839f) fep_hwr_top_text_pane

0xeecd,	// (0x00020f7a) fep_hwr_top_text_pane_g1

0x63ca,	// (0x00018477) fep_hwr_top_text_pane_t1

0x6412,	// (0x000184bf) fep_hwr_candidate_pane_g1

0x6648,	// (0x000186f5) fep_vkb_keypad_pane_g3_ParamLimits

0x6648,	// (0x000186f5) fep_vkb_keypad_pane_g3

0x666a,	// (0x00018717) fep_vkb_keypad_pane_g4_ParamLimits

0x666a,	// (0x00018717) fep_vkb_keypad_pane_g4

0x66d9,	// (0x00018786) fep_vkb_bottom_pane_g2_ParamLimits

0x66d9,	// (0x00018786) fep_vkb_bottom_pane_g2

0x0001,

0xfb51,	// (0x00021bfe) fep_vkb_bottom_pane_g_ParamLimits

0xfb51,	// (0x00021bfe) fep_vkb_bottom_pane_g

0x618f,	// (0x0001823c) cell_vkb_side_pane_g2

0x0001,

0xfb5b,	// (0x00021c08) cell_vkb_side_pane_g

0x6764,	// (0x00018811) cell_vkb_side_pane_t1

0x6772,	// (0x0001881f) cell_vkb_side_pane_t1_copy1

0x618f,	// (0x0001823c) bg_fep_vkb_candidate_pane_g2

0x6896,	// (0x00018943) cell_vkb_candidate_pane_ParamLimits

0x6446,	// (0x000184f3) aid_size_cell_vkb_ParamLimits

0x6446,	// (0x000184f3) aid_size_cell_vkb

0x6896,	// (0x00018943) cell_vkb_candidate_pane

0x68c8,	// (0x00018975) bg_popup_fep_shadow_pane_g1

0x64bc,	// (0x00018569) fep_vkb_bottom_pane_ParamLimits

0x64bc,	// (0x00018569) fep_vkb_bottom_pane

0x64f9,	// (0x000185a6) fep_vkb_candidate_pane_ParamLimits

0x64f9,	// (0x000185a6) fep_vkb_candidate_pane

0x6515,	// (0x000185c2) fep_vkb_keypad_pane_ParamLimits

0x6515,	// (0x000185c2) fep_vkb_keypad_pane

0x6549,	// (0x000185f6) fep_vkb_side_pane_ParamLimits

0x6549,	// (0x000185f6) fep_vkb_side_pane

0x6575,	// (0x00018622) fep_vkb_top_pane_ParamLimits

0x6575,	// (0x00018622) fep_vkb_top_pane

0x65a1,	// (0x0001864e) fep_vkb_top_pane_g1_ParamLimits

0x65a1,	// (0x0001864e) fep_vkb_top_pane_g1

0x65b0,	// (0x0001865d) fep_vkb_top_pane_g2_ParamLimits

0x65b0,	// (0x0001865d) fep_vkb_top_pane_g2

0x65bf,	// (0x0001866c) fep_vkb_top_pane_g3_ParamLimits

0x65bf,	// (0x0001866c) fep_vkb_top_pane_g3

0x0003,

0xfb41,	// (0x00021bee) fep_vkb_top_pane_g_ParamLimits

0xfb41,	// (0x00021bee) fep_vkb_top_pane_g

0x65dd,	// (0x0001868a) fep_vkb_top_text_pane_ParamLimits

0x65dd,	// (0x0001868a) fep_vkb_top_text_pane

0xcada,	// (0x0001eb87) fep_vkb_side_pane_g1_ParamLimits

0xcada,	// (0x0001eb87) fep_vkb_side_pane_g1

0x6637,	// (0x000186e4) grid_vkb_side_pane_ParamLimits

0x6637,	// (0x000186e4) grid_vkb_side_pane

0x68d0,	// (0x0001897d) bg_popup_fep_shadow_pane_g2

0x68d9,	// (0x00018986) bg_popup_fep_shadow_pane_g3

0x68e1,	// (0x0001898e) bg_popup_fep_shadow_pane_g4

0x68ea,	// (0x00018997) bg_popup_fep_shadow_pane_g5

0x68f2,	// (0x0001899f) bg_popup_fep_shadow_pane_g6

0x68fa,	// (0x000189a7) bg_popup_fep_shadow_pane_g7

0xea2e,	// (0x00020adb) bg_popup_fep_shadow_pane_g8

0x6688,	// (0x00018735) grid_vkb_keypad_number_pane_ParamLimits

0x6688,	// (0x00018735) grid_vkb_keypad_number_pane

0x6698,	// (0x00018745) grid_vkb_keypad_pane_ParamLimits

0x6698,	// (0x00018745) grid_vkb_keypad_pane

0x66be,	// (0x0001876b) fep_vkb_bottom_pane_g1_ParamLimits

0x66be,	// (0x0001876b) fep_vkb_bottom_pane_g1

0x66e7,	// (0x00018794) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x66e7,	// (0x00018794) grid_vkb_keypad_bottom_left_pane

0x66fc,	// (0x000187a9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x66fc,	// (0x000187a9) grid_vkb_keypad_bottom_right_pane

0x6711,	// (0x000187be) fep_vkb_top_text_pane_g1

0xcb21,	// (0x0001ebce) fep_vkb_top_text_pane_t1

0xcb33,	// (0x0001ebe0) cell_vkb_side_pane_ParamLimits

0xcb33,	// (0x0001ebe0) cell_vkb_side_pane

0x618f,	// (0x0001823c) cell_vkb_side_pane_g1

0x6780,	// (0x0001882d) cell_vkb_keypad_pane_ParamLimits

0x6780,	// (0x0001882d) cell_vkb_keypad_pane

0x67ed,	// (0x0001889a) cell_vkb_keypad_pane_g1

0x0008,

0xfb6e,	// (0x00021c1b) bg_popup_fep_shadow_pane_g

0x618f,	// (0x0001823c) cell_hwr_side_pane_g1

0x618f,	// (0x0001823c) cell_hwr_side_pane_g2

0x67f7,	// (0x000188a4) cell_vkb_keypad_pane_t1

0xcb49,	// (0x0001ebf6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcb49,	// (0x0001ebf6) cell_vkb_keypad_bottom_left_pane

0xcb5e,	// (0x0001ec0b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcb5e,	// (0x0001ec0b) cell_vkb_keypad_bottom_right_pane

0x618f,	// (0x0001823c) cell_vkb_keypad_bottom_left_pane_g1

0x618f,	// (0x0001823c) cell_vkb_keypad_bottom_right_pane_g1

0x685b,	// (0x00018908) cell_vkb_keypad_number_pane_ParamLimits

0x685b,	// (0x00018908) cell_vkb_keypad_number_pane

0x687a,	// (0x00018927) cell_vkb_keypad_number_pane_g1

0x6884,	// (0x00018931) cell_vkb_keypad_number_pane_g2

0x688d,	// (0x0001893a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb60,	// (0x00021c0d) cell_vkb_keypad_number_pane_g

0x67f7,	// (0x000188a4) cell_vkb_keypad_number_pane_t1

0x68af,	// (0x0001895c) fep_vkb_candidate_pane_g1

0x0001,

0xfb5b,	// (0x00021c08) cell_hwr_side_pane_g

0x690a,	// (0x000189b7) cell_hwr_side_pane_t1

0x6918,	// (0x000189c5) cell_hwr_side_pane_t1_copy1

0x65cf,	// (0x0001867c) cell_hwr_candidate_pane_g1

0x6968,	// (0x00018a15) cell_hwr_candidate_pane_t1

0x618f,	// (0x0001823c) cell_vkb_candidate_pane_g2

0x69bb,	// (0x00018a68) cell_vkb_candidate_pane_t1

0x61ea,	// (0x00018297) bg_popup_fep_shadow_pane_ParamLimits

0x61ea,	// (0x00018297) bg_popup_fep_shadow_pane

0x6299,	// (0x00018346) bg_fep_hwr_top_pane_g4

0x6307,	// (0x000183b4) bg_hwr_side_pane_g1_ParamLimits

0x6307,	// (0x000183b4) bg_hwr_side_pane_g1

0xca95,	// (0x0001eb42) cell_hwr_side_pane_ParamLimits

0xca95,	// (0x0001eb42) cell_hwr_side_pane

0x6375,	// (0x00018422) fep_hwr_write_pane_g1_ParamLimits

0x6375,	// (0x00018422) fep_hwr_write_pane_g1

0x6382,	// (0x0001842f) fep_hwr_write_pane_g2_ParamLimits

0x6382,	// (0x0001842f) fep_hwr_write_pane_g2

0x638f,	// (0x0001843c) fep_hwr_write_pane_g3_ParamLimits

0x638f,	// (0x0001843c) fep_hwr_write_pane_g3

0xcab5,	// (0x0001eb62) fep_hwr_write_pane_g4_ParamLimits

0xcab5,	// (0x0001eb62) fep_hwr_write_pane_g4

0x0005,

0xfb2d,	// (0x00021bda) fep_hwr_write_pane_g_ParamLimits

0xfb2d,	// (0x00021bda) fep_hwr_write_pane_g

0x6299,	// (0x00018346) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6299,	// (0x00018346) bg_fep_hwr_candidate_pane_g2

0x63d8,	// (0x00018485) cell_hwr_candidate_pane_ParamLimits

0x63d8,	// (0x00018485) cell_hwr_candidate_pane

0x6412,	// (0x000184bf) fep_hwr_candidate_pane_g1_ParamLimits

0x6474,	// (0x00018521) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6474,	// (0x00018521) bg_popup_fep_shadow_pane_cp2

0x65cf,	// (0x0001867c) fep_vkb_top_pane_g4_ParamLimits

0x65cf,	// (0x0001867c) fep_vkb_top_pane_g4

0x6615,	// (0x000186c2) fep_vkb_side_pane_g2_ParamLimits

0x6615,	// (0x000186c2) fep_vkb_side_pane_g2

0xa998,	// (0x0001ca45) list_setting_pane_t4_ParamLimits

0xa998,	// (0x0001ca45) list_setting_pane_t4

0xaa2a,	// (0x0001cad7) list_setting_number_pane_t5_ParamLimits

0xaa2a,	// (0x0001cad7) list_setting_number_pane_t5

0xb5a8,	// (0x0001d655) list_double_heading_pane_cp2_ParamLimits

0xb5a8,	// (0x0001d655) list_double_heading_pane_cp2

0xf1ed,	// (0x0002129a) list_double_heading_pane_g1_cp2_ParamLimits

0xf1ed,	// (0x0002129a) list_double_heading_pane_g1_cp2

0x69c9,	// (0x00018a76) list_double_heading_pane_g2_cp2_ParamLimits

0x69c9,	// (0x00018a76) list_double_heading_pane_g2_cp2

0x69dd,	// (0x00018a8a) list_double_heading_pane_t1_cp2_ParamLimits

0x69dd,	// (0x00018a8a) list_double_heading_pane_t1_cp2

0x69f3,	// (0x00018aa0) list_double_heading_pane_t2_cp2_ParamLimits

0x69f3,	// (0x00018aa0) list_double_heading_pane_t2_cp2

0xdc6a,	// (0x0001fd17) aid_value_unit2

0x469c,	// (0x00016749) popup_preview_fixed_window

0xdec1,	// (0x0001ff6e) bg_popup_preview_window_pane_cp02

0x6a05,	// (0x00018ab2) list_preview_fixed_pane

0x6a4b,	// (0x00018af8) list_empty_pane_fp_ParamLimits

0x6a4b,	// (0x00018af8) list_empty_pane_fp

0x6a4b,	// (0x00018af8) list_single_cale_day_pane_fp_ParamLimits

0x6a4b,	// (0x00018af8) list_single_cale_day_pane_fp

0x6a4b,	// (0x00018af8) list_single_graphic_heading_pane_fp_ParamLimits

0x6a4b,	// (0x00018af8) list_single_graphic_heading_pane_fp

0x6a4b,	// (0x00018af8) list_single_graphic_pane_fp_ParamLimits

0x6a4b,	// (0x00018af8) list_single_graphic_pane_fp

0x6a4b,	// (0x00018af8) list_single_heading_pane_fp_ParamLimits

0x6a4b,	// (0x00018af8) list_single_heading_pane_fp

0x6a4b,	// (0x00018af8) list_single_pane_fp_ParamLimits

0x6a4b,	// (0x00018af8) list_single_pane_fp

0x6a5f,	// (0x00018b0c) list_single_pane_fp_g1_ParamLimits

0x6a5f,	// (0x00018b0c) list_single_pane_fp_g1

0x39cb,	// (0x00015a78) list_single_pane_fp_g2_ParamLimits

0x39cb,	// (0x00015a78) list_single_pane_fp_g2

0x4171,	// (0x0001621e) list_single_pane_fp_g3_ParamLimits

0x4171,	// (0x0001621e) list_single_pane_fp_g3

0x6a6b,	// (0x00018b18) list_single_pane_fp_g4_ParamLimits

0x6a6b,	// (0x00018b18) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x00021c3c) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x00021c3c) list_single_pane_fp_g

0x4185,	// (0x00016232) list_single_pane_fp_t1_ParamLimits

0x4185,	// (0x00016232) list_single_pane_fp_t1

0x419c,	// (0x00016249) list_single_graphic_pane_fp_g1_ParamLimits

0x419c,	// (0x00016249) list_single_graphic_pane_fp_g1

0x6a5f,	// (0x00018b0c) list_single_graphic_pane_fp_g2_ParamLimits

0x6a5f,	// (0x00018b0c) list_single_graphic_pane_fp_g2

0x39cb,	// (0x00015a78) list_single_graphic_pane_fp_g3_ParamLimits

0x39cb,	// (0x00015a78) list_single_graphic_pane_fp_g3

0x4171,	// (0x0001621e) list_single_graphic_pane_fp_g4_ParamLimits

0x4171,	// (0x0001621e) list_single_graphic_pane_fp_g4

0x6a6b,	// (0x00018b18) list_single_graphic_pane_fp_g5_ParamLimits

0x6a6b,	// (0x00018b18) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x00021c45) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x00021c45) list_single_graphic_pane_fp_g

0x41a8,	// (0x00016255) list_single_graphic_pane_fp_t1_ParamLimits

0x41a8,	// (0x00016255) list_single_graphic_pane_fp_t1

0x419c,	// (0x00016249) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x419c,	// (0x00016249) list_single_graphic_heading_pane_fp_g1

0x6a5f,	// (0x00018b0c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6a5f,	// (0x00018b0c) list_single_graphic_heading_pane_fp_g2

0x39cb,	// (0x00015a78) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x39cb,	// (0x00015a78) list_single_graphic_heading_pane_fp_g3

0x4171,	// (0x0001621e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4171,	// (0x0001621e) list_single_graphic_heading_pane_fp_g4

0x6a6b,	// (0x00018b18) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6a6b,	// (0x00018b18) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00021c45) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00021c45) list_single_graphic_heading_pane_fp_g

0x41be,	// (0x0001626b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x41be,	// (0x0001626b) list_single_graphic_heading_pane_fp_t1

0x41d4,	// (0x00016281) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x41d4,	// (0x00016281) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x00021c50) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x00021c50) list_single_graphic_heading_pane_fp_t

0x41e6,	// (0x00016293) list_single_cale_day_pane_fp_g1_ParamLimits

0x41e6,	// (0x00016293) list_single_cale_day_pane_fp_g1

0x6a77,	// (0x00018b24) list_single_cale_day_pane_fp_g2_ParamLimits

0x6a77,	// (0x00018b24) list_single_cale_day_pane_fp_g2

0x421e,	// (0x000162cb) list_single_cale_day_pane_fp_g3_ParamLimits

0x421e,	// (0x000162cb) list_single_cale_day_pane_fp_g3

0x4246,	// (0x000162f3) list_single_cale_day_pane_fp_g4_ParamLimits

0x4246,	// (0x000162f3) list_single_cale_day_pane_fp_g4

0x426a,	// (0x00016317) list_single_cale_day_pane_fp_g5_ParamLimits

0x426a,	// (0x00016317) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x00021c55) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x00021c55) list_single_cale_day_pane_fp_g

0x428e,	// (0x0001633b) list_single_cale_day_pane_fp_t1_ParamLimits

0x428e,	// (0x0001633b) list_single_cale_day_pane_fp_t1

0x42b4,	// (0x00016361) list_single_cale_day_pane_fp_t2_ParamLimits

0x42b4,	// (0x00016361) list_single_cale_day_pane_fp_t2

0x42cd,	// (0x0001637a) list_single_cale_day_pane_fp_t3_ParamLimits

0x42cd,	// (0x0001637a) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x00021c60) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x00021c60) list_single_cale_day_pane_fp_t

0x6a5f,	// (0x00018b0c) list_empty_pane_fp_g1_ParamLimits

0x6a5f,	// (0x00018b0c) list_empty_pane_fp_g1

0x42e6,	// (0x00016393) list_empty_pane_fp_t1

0x42f4,	// (0x000163a1) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x00021c67) list_empty_pane_fp_t

0x6a5f,	// (0x00018b0c) list_single_heading_pane_fp_g1_ParamLimits

0x6a5f,	// (0x00018b0c) list_single_heading_pane_fp_g1

0x39cb,	// (0x00015a78) list_single_heading_pane_fp_g2_ParamLimits

0x39cb,	// (0x00015a78) list_single_heading_pane_fp_g2

0x4171,	// (0x0001621e) list_single_heading_pane_fp_g3_ParamLimits

0x4171,	// (0x0001621e) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x00021c6c) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x00021c6c) list_single_heading_pane_fp_g

0x4302,	// (0x000163af) list_single_heading_pane_fp_t1_ParamLimits

0x4302,	// (0x000163af) list_single_heading_pane_fp_t1

0x4314,	// (0x000163c1) list_single_heading_pane_fp_t2_ParamLimits

0x4314,	// (0x000163c1) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x00021c73) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x00021c73) list_single_heading_pane_fp_t

0xeb3b,	// (0x00020be8) aid_size_cell_fast

0xdea4,	// (0x0001ff51) soft_indicator_pane_cp1_t1

0xeb78,	// (0x00020c25) cell_app_pane_cp2_ParamLimits

0xeb78,	// (0x00020c25) cell_app_pane_cp2

0x620c,	// (0x000182b9) fep_hwr_candidate_drop_down_list_pane

0x642c,	// (0x000184d9) fep_hwr_candidate_pane_g3_ParamLimits

0x642c,	// (0x000184d9) fep_hwr_candidate_pane_g3

0x6439,	// (0x000184e6) fep_hwr_candidate_pane_g4_ParamLimits

0x6439,	// (0x000184e6) fep_hwr_candidate_pane_g4

0x0002,

0xfb3a,	// (0x00021be7) fep_hwr_candidate_pane_g_ParamLimits

0xfb3a,	// (0x00021be7) fep_hwr_candidate_pane_g

0x64e8,	// (0x00018595) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x64e8,	// (0x00018595) fep_vkb_candidate_drop_down_list_pane

0x68b7,	// (0x00018964) fep_vkb_candidate_pane_g3

0x68bf,	// (0x0001896c) fep_vkb_candidate_pane_g4

0x0002,

0xfb67,	// (0x00021c14) fep_vkb_candidate_pane_g

0x65cf,	// (0x0001867c) cell_hwr_candidate_pane_g1_ParamLimits

0x6926,	// (0x000189d3) cell_hwr_candidate_pane_g3_ParamLimits

0x6926,	// (0x000189d3) cell_hwr_candidate_pane_g3

0x6947,	// (0x000189f4) cell_hwr_candidate_pane_g4_ParamLimits

0x6947,	// (0x000189f4) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x00021c2e) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x00021c2e) cell_hwr_candidate_pane_g

0x6985,	// (0x00018a32) cell_vkb_candidate_pane_g3_ParamLimits

0x6985,	// (0x00018a32) cell_vkb_candidate_pane_g3

0x69a0,	// (0x00018a4d) cell_vkb_candidate_pane_g4_ParamLimits

0x69a0,	// (0x00018a4d) cell_vkb_candidate_pane_g4

0x6a83,	// (0x00018b30) cell_app_pane_cp2_g1_ParamLimits

0x6a83,	// (0x00018b30) cell_app_pane_cp2_g1

0x6aa1,	// (0x00018b4e) cell_app_pane_cp2_g2_ParamLimits

0x6aa1,	// (0x00018b4e) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x00021c78) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x00021c78) cell_app_pane_cp2_g

0x6aad,	// (0x00018b5a) cell_app_pane_cp2_t1_ParamLimits

0x6aad,	// (0x00018b5a) cell_app_pane_cp2_t1

0xe9bf,	// (0x00020a6c) grid_highlight_pane_cp1_ParamLimits

0xe9bf,	// (0x00020a6c) grid_highlight_pane_cp1

0x6abf,	// (0x00018b6c) cell_hwr_candidate_pane_cp1_ParamLimits

0x6abf,	// (0x00018b6c) cell_hwr_candidate_pane_cp1

0x65cf,	// (0x0001867c) fep_hwr_candidate_drop_down_list_pane_g1

0x6add,	// (0x00018b8a) fep_hwr_candidate_drop_down_list_pane_g2

0x6aea,	// (0x00018b97) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x00021c7d) fep_hwr_candidate_drop_down_list_pane_g

0x6af7,	// (0x00018ba4) fep_hwr_candidate_drop_down_list_scroll_pane

0x6b00,	// (0x00018bad) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6b00,	// (0x00018bad) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6b0d,	// (0x00018bba) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6b0d,	// (0x00018bba) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6b1a,	// (0x00018bc7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6b1a,	// (0x00018bc7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6985,	// (0x00018a32) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6985,	// (0x00018a32) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x69a0,	// (0x00018a4d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x69a0,	// (0x00018a4d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6b27,	// (0x00018bd4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6b27,	// (0x00018bd4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6b42,	// (0x00018bef) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6b42,	// (0x00018bef) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6b5d,	// (0x00018c0a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6b5d,	// (0x00018c0a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x00021c84) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x00021c84) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xcb79,	// (0x0001ec26) cell_vkb_candidate_pane_cp1_ParamLimits

0xcb79,	// (0x0001ec26) cell_vkb_candidate_pane_cp1

0x65cf,	// (0x0001867c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x65cf,	// (0x0001867c) fep_vkb_candidate_drop_down_list_pane_g1

0x6add,	// (0x00018b8a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6add,	// (0x00018b8a) fep_vkb_candidate_drop_down_list_pane_g2

0x6aea,	// (0x00018b97) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6aea,	// (0x00018b97) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x00021c7d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd0,	// (0x00021c7d) fep_vkb_candidate_drop_down_list_pane_g

0x6b9b,	// (0x00018c48) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6b9b,	// (0x00018c48) fep_vkb_candidate_drop_down_list_scroll_pane

0x6ba8,	// (0x00018c55) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6ba8,	// (0x00018c55) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6bb5,	// (0x00018c62) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6bb5,	// (0x00018c62) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6bc1,	// (0x00018c6e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6bc1,	// (0x00018c6e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6926,	// (0x000189d3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6926,	// (0x000189d3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6947,	// (0x000189f4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6947,	// (0x000189f4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6bcd,	// (0x00018c7a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6bcd,	// (0x00018c7a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6bee,	// (0x00018c9b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6bee,	// (0x00018c9b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6c0f,	// (0x00018cbc) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6c0f,	// (0x00018cbc) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x00021c95) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x00021c95) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb02f,	// (0x0001d0dc) title_pane_g1_ParamLimits

0xb046,	// (0x0001d0f3) title_pane_g2_ParamLimits

0xf592,	// (0x0002163f) title_pane_g_ParamLimits

0xeebd,	// (0x00020f6a) aid_call2_pane

0xeec5,	// (0x00020f72) aid_call_pane

0xeecd,	// (0x00020f7a) popup_clock_analogue_window_g1

0xeecd,	// (0x00020f7a) popup_clock_analogue_window_g2

0x494a,	// (0x000169f7) popup_clock_analogue_window_g3

0x4953,	// (0x00016a00) popup_clock_analogue_window_g4

0xdc7c,	// (0x0001fd29) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x000217e9) popup_clock_analogue_window_g

0x495b,	// (0x00016a08) popup_clock_analogue_window_t1

0x4969,	// (0x00016a16) clock_digital_number_pane_ParamLimits

0x4969,	// (0x00016a16) clock_digital_number_pane

0x4975,	// (0x00016a22) clock_digital_number_pane_cp02_ParamLimits

0x4975,	// (0x00016a22) clock_digital_number_pane_cp02

0x4981,	// (0x00016a2e) clock_digital_number_pane_cp03_ParamLimits

0x4981,	// (0x00016a2e) clock_digital_number_pane_cp03

0x498d,	// (0x00016a3a) clock_digital_number_pane_cp04_ParamLimits

0x498d,	// (0x00016a3a) clock_digital_number_pane_cp04

0x4999,	// (0x00016a46) clock_digital_separator_pane_ParamLimits

0x4999,	// (0x00016a46) clock_digital_separator_pane

0x49a5,	// (0x00016a52) popup_clock_digital_window_t1_ParamLimits

0x49a5,	// (0x00016a52) popup_clock_digital_window_t1

0xdc7c,	// (0x0001fd29) clock_digital_number_pane_g1

0xdc7c,	// (0x0001fd29) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x000217f4) clock_digital_number_pane_g

0xdc7c,	// (0x0001fd29) clock_digital_separator_pane_g1

0xdc7c,	// (0x0001fd29) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x000217f4) clock_digital_separator_pane_g

0xbe09,	// (0x0001deb6) aid_fill_nsta_ParamLimits

0xbf20,	// (0x0001dfcd) indicator_nsta_pane_ParamLimits

0x0fed,	// (0x0001309a) popup_clock_analogue_window

0x0fed,	// (0x0001309a) popup_clock_digital_window

0xef2e,	// (0x00020fdb) grid_indicator_nsta_pane_ParamLimits

0x2c5e,	// (0x00014d0b) clock_nsta_pane_t2

0x0001,

0xfac7,	// (0x00021b74) clock_nsta_pane_t

0x490e,	// (0x000169bb) aid_size_max_handle

0xb50c,	// (0x0001d5b9) aid_size_min_handle

0xf378,	// (0x00021425) editor_scroll_pane

0x6c2a,	// (0x00018cd7) ex_editor_pane

0xeb16,	// (0x00020bc3) scroll_pane_cp13

0xe2b2,	// (0x0002035f) scroll_pane_cp14

0xeef7,	// (0x00020fa4) scroll_pane_cp36

0xb5b4,	// (0x0001d661) list_single_graphic_hl_pane_cp2_ParamLimits

0xb5b4,	// (0x0001d661) list_single_graphic_hl_pane_cp2

0xc748,	// (0x0001e7f5) list_single_graphic_hl_pane_ParamLimits

0xc748,	// (0x0001e7f5) list_single_graphic_hl_pane

0x432a,	// (0x000163d7) aid_size_min_hl_cp1

0x6c32,	// (0x00018cdf) list_highlight_pane_cp34_ParamLimits

0x6c32,	// (0x00018cdf) list_highlight_pane_cp34

0x6c43,	// (0x00018cf0) list_single_graphic_hl_pane_g1_ParamLimits

0x6c43,	// (0x00018cf0) list_single_graphic_hl_pane_g1

0xacbe,	// (0x0001cd6b) list_single_graphic_hl_pane_g2_ParamLimits

0xacbe,	// (0x0001cd6b) list_single_graphic_hl_pane_g2

0xacbe,	// (0x0001cd6b) list_single_graphic_hl_pane_g3_ParamLimits

0xacbe,	// (0x0001cd6b) list_single_graphic_hl_pane_g3

0xacca,	// (0x0001cd77) list_single_graphic_hl_pane_g4_ParamLimits

0xacca,	// (0x0001cd77) list_single_graphic_hl_pane_g4

0xacd6,	// (0x0001cd83) list_single_graphic_hl_pane_g5_ParamLimits

0xacd6,	// (0x0001cd83) list_single_graphic_hl_pane_g5

0x0004,

0xfbf9,	// (0x00021ca6) list_single_graphic_hl_pane_g_ParamLimits

0xfbf9,	// (0x00021ca6) list_single_graphic_hl_pane_g

0xacea,	// (0x0001cd97) list_single_graphic_hl_pane_t1_ParamLimits

0xacea,	// (0x0001cd97) list_single_graphic_hl_pane_t1

0x6c50,	// (0x00018cfd) aid_size_min_hl_cp2

0x6c59,	// (0x00018d06) list_highlight_pane_cp34_cp2_ParamLimits

0x6c59,	// (0x00018d06) list_highlight_pane_cp34_cp2

0x6c43,	// (0x00018cf0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6c43,	// (0x00018cf0) list_single_graphic_hl_pane_g1_cp2

0x6c66,	// (0x00018d13) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6c66,	// (0x00018d13) list_single_graphic_hl_pane_g2_cp2

0x6c72,	// (0x00018d1f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6c72,	// (0x00018d1f) list_single_graphic_hl_pane_g3_cp2

0xf1ed,	// (0x0002129a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xf1ed,	// (0x0002129a) list_single_graphic_hl_pane_g4_cp2

0x69c9,	// (0x00018a76) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x69c9,	// (0x00018a76) list_single_graphic_hl_pane_g5_cp2

0xb730,	// (0x0001d7dd) control_pane_g4_ParamLimits

0xb730,	// (0x0001d7dd) control_pane_g4

0x0dd6,	// (0x00012e83) bg_popup_sub_pane_cp10_ParamLimits

0x6199,	// (0x00018246) list_choice_list_pane_ParamLimits

0x61a8,	// (0x00018255) scroll_pane_cp23

0xdec1,	// (0x0001ff6e) bg_popup_preview_window_pane_cp02_ParamLimits

0x6a05,	// (0x00018ab2) list_preview_fixed_pane_ParamLimits

0x6a1b,	// (0x00018ac8) list_preview_fixed_pane_cp_ParamLimits

0x6a1b,	// (0x00018ac8) list_preview_fixed_pane_cp

0x6a27,	// (0x00018ad4) popup_preview_fixed_window_g1_ParamLimits

0x6a27,	// (0x00018ad4) popup_preview_fixed_window_g1

0x6a33,	// (0x00018ae0) popup_preview_fixed_window_g2_ParamLimits

0x6a33,	// (0x00018ae0) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x00021c35) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x00021c35) popup_preview_fixed_window_g

0x489e,	// (0x0001694b) aid_navi_side_left_pane_ParamLimits

0x48ae,	// (0x0001695b) aid_navi_side_right_pane_ParamLimits

0x48bd,	// (0x0001696a) navi_icon_pane_stacon_ParamLimits

0x48cd,	// (0x0001697a) navi_navi_pane_stacon_ParamLimits

0x48bd,	// (0x0001696a) navi_text_pane_stacon_ParamLimits

0xdc72,	// (0x0001fd1f) main_text_info_pane

0x6c94,	// (0x00018d41) listscroll_text_info_pane

0x6c9c,	// (0x00018d49) list_text_info_pane_ParamLimits

0x6c9c,	// (0x00018d49) list_text_info_pane

0x6cab,	// (0x00018d58) scroll_pane_cp24_ParamLimits

0x6cab,	// (0x00018d58) scroll_pane_cp24

0xcb99,	// (0x0001ec46) list_text_info_pane_t1_ParamLimits

0xcb99,	// (0x0001ec46) list_text_info_pane_t1

0xb892,	// (0x0001d93f) popup_fast_swap2_window_ParamLimits

0xb892,	// (0x0001d93f) popup_fast_swap2_window

0x6ce6,	// (0x00018d93) aid_size_cell_fast2

0xdc72,	// (0x0001fd1f) bg_popup_window_pane_cp17

0x14b2,	// (0x0001355f) heading_pane_cp2

0xe0b1,	// (0x0002015e) listscroll_fast2_pane

0x6cf0,	// (0x00018d9d) grid_fast2_pane

0x6cf8,	// (0x00018da5) listscroll_fast2_pane_g1

0x6d00,	// (0x00018dad) listscroll_fast2_pane_g2

0x0001,

0xfc04,	// (0x00021cb1) listscroll_fast2_pane_g

0xeb16,	// (0x00020bc3) scroll_pane_cp26

0x6d08,	// (0x00018db5) cell_fast2_pane_ParamLimits

0x6d08,	// (0x00018db5) cell_fast2_pane

0x6d1e,	// (0x00018dcb) cell_fast2_pane_g1

0x6d27,	// (0x00018dd4) cell_fast2_pane_g2

0x6d30,	// (0x00018ddd) cell_fast2_pane_g3

0x0002,

0xfc09,	// (0x00021cb6) cell_fast2_pane_g

0xe113,	// (0x000201c0) grid_highlight_pane_cp9

0xe128,	// (0x000201d5) main_eswt_pane_ParamLimits

0xe128,	// (0x000201d5) main_eswt_pane

0x6cc0,	// (0x00018d6d) list_single_text_info_pane

0x6d38,	// (0x00018de5) eswt_ctrl_button_pane

0x6d38,	// (0x00018de5) eswt_ctrl_canvas_pane

0x6d40,	// (0x00018ded) eswt_ctrl_combo_pane

0x6d38,	// (0x00018de5) eswt_ctrl_default_pane

0x6d38,	// (0x00018de5) eswt_ctrl_label_pane

0x6d48,	// (0x00018df5) eswt_ctrl_wait_pane

0x6d50,	// (0x00018dfd) eswt_shell_pane

0xdc72,	// (0x0001fd1f) listscroll_eswt_app_pane

0x6d6c,	// (0x00018e19) popup_eswt_tasktip_window_ParamLimits

0x6d6c,	// (0x00018e19) popup_eswt_tasktip_window

0x1204,	// (0x000132b1) bg_popup_window_pane_cp18

0x6d7d,	// (0x00018e2a) eswt_control_pane_g1_ParamLimits

0x6d7d,	// (0x00018e2a) eswt_control_pane_g1

0x6d8a,	// (0x00018e37) eswt_control_pane_g2_ParamLimits

0x6d8a,	// (0x00018e37) eswt_control_pane_g2

0x6d97,	// (0x00018e44) eswt_control_pane_g3_ParamLimits

0x6d97,	// (0x00018e44) eswt_control_pane_g3

0x6da4,	// (0x00018e51) eswt_control_pane_g4_ParamLimits

0x6da4,	// (0x00018e51) eswt_control_pane_g4

0x0003,

0xfc10,	// (0x00021cbd) eswt_control_pane_g_ParamLimits

0xfc10,	// (0x00021cbd) eswt_control_pane_g

0xe9bf,	// (0x00020a6c) bg_button_pane_ParamLimits

0xe9bf,	// (0x00020a6c) bg_button_pane

0xe128,	// (0x000201d5) common_borders_pane_copy2_ParamLimits

0xe128,	// (0x000201d5) common_borders_pane_copy2

0x6db1,	// (0x00018e5e) control_button_pane_g1_ParamLimits

0x6db1,	// (0x00018e5e) control_button_pane_g1

0x6dbd,	// (0x00018e6a) control_button_pane_g2_ParamLimits

0x6dbd,	// (0x00018e6a) control_button_pane_g2

0x6dc9,	// (0x00018e76) control_button_pane_g3_ParamLimits

0x6dc9,	// (0x00018e76) control_button_pane_g3

0x0002,

0xfc19,	// (0x00021cc6) control_button_pane_g_ParamLimits

0xfc19,	// (0x00021cc6) control_button_pane_g

0x6ddd,	// (0x00018e8a) control_button_pane_t1

0x6deb,	// (0x00018e98) control_button_pane_t2

0x0001,

0xfc20,	// (0x00021ccd) control_button_pane_t

0x10ee,	// (0x0001319b) bg_button_pane_g1

0x10fe,	// (0x000131ab) bg_button_pane_g2

0x10f6,	// (0x000131a3) bg_button_pane_g3

0x110e,	// (0x000131bb) bg_button_pane_g4

0x1106,	// (0x000131b3) bg_button_pane_g5

0x1116,	// (0x000131c3) bg_button_pane_g6

0x111e,	// (0x000131cb) bg_button_pane_g7

0x112e,	// (0x000131db) bg_button_pane_g8

0x1126,	// (0x000131d3) bg_button_pane_g9

0x0008,

0xf88c,	// (0x00021939) bg_button_pane_g

0x6154,	// (0x00018201) common_borders_pane_ParamLimits

0x6154,	// (0x00018201) common_borders_pane

0x6d7d,	// (0x00018e2a) eswt_control_pane_g1_copy1_ParamLimits

0x6d7d,	// (0x00018e2a) eswt_control_pane_g1_copy1

0x6d8a,	// (0x00018e37) eswt_control_pane_g2_copy1_ParamLimits

0x6d8a,	// (0x00018e37) eswt_control_pane_g2_copy1

0x6d97,	// (0x00018e44) eswt_control_pane_g3_copy1_ParamLimits

0x6d97,	// (0x00018e44) eswt_control_pane_g3_copy1

0x6da4,	// (0x00018e51) eswt_control_pane_g4_copy1_ParamLimits

0x6da4,	// (0x00018e51) eswt_control_pane_g4_copy1

0x618f,	// (0x0001823c) bg_eswt_ctrl_canvas_pane_g1

0x6154,	// (0x00018201) common_borders_pane_cp2_ParamLimits

0x6154,	// (0x00018201) common_borders_pane_cp2

0x6154,	// (0x00018201) common_borders_pane_cp3_ParamLimits

0x6154,	// (0x00018201) common_borders_pane_cp3

0x6df9,	// (0x00018ea6) separator_horizontal_pane

0xed5c,	// (0x00020e09) separator_vertical_pane

0x6d7d,	// (0x00018e2a) eswt_control_pane_g1_copy2_ParamLimits

0x6d7d,	// (0x00018e2a) eswt_control_pane_g1_copy2

0x6d8a,	// (0x00018e37) eswt_control_pane_g2_copy2_ParamLimits

0x6d8a,	// (0x00018e37) eswt_control_pane_g2_copy2

0x6d97,	// (0x00018e44) eswt_control_pane_g3_copy2_ParamLimits

0x6d97,	// (0x00018e44) eswt_control_pane_g3_copy2

0x6da4,	// (0x00018e51) eswt_control_pane_g4_copy2_ParamLimits

0x6da4,	// (0x00018e51) eswt_control_pane_g4_copy2

0xdc72,	// (0x0001fd1f) common_borders_pane_cp4

0x6e01,	// (0x00018eae) separator_horizontal_pane_g1

0x6e0a,	// (0x00018eb7) separator_horizontal_pane_g2

0x6e13,	// (0x00018ec0) separator_horizontal_pane_g3

0x0002,

0xfc25,	// (0x00021cd2) separator_horizontal_pane_g

0x6d7d,	// (0x00018e2a) eswt_control_pane_g1_copy3_ParamLimits

0x6d7d,	// (0x00018e2a) eswt_control_pane_g1_copy3

0x6d8a,	// (0x00018e37) eswt_control_pane_g2_copy3_ParamLimits

0x6d8a,	// (0x00018e37) eswt_control_pane_g2_copy3

0x6d97,	// (0x00018e44) eswt_control_pane_g3_copy3_ParamLimits

0x6d97,	// (0x00018e44) eswt_control_pane_g3_copy3

0x6da4,	// (0x00018e51) eswt_control_pane_g4_copy3_ParamLimits

0x6da4,	// (0x00018e51) eswt_control_pane_g4_copy3

0xdc72,	// (0x0001fd1f) common_borders_pane_cp5

0x6e1c,	// (0x00018ec9) separator_vertical_pane_g1

0x6e25,	// (0x00018ed2) separator_vertical_pane_g2

0x6e2e,	// (0x00018edb) separator_vertical_pane_g3

0x0002,

0xfc2c,	// (0x00021cd9) separator_vertical_pane_g

0x6d7d,	// (0x00018e2a) eswt_control_pane_g1_copy4_ParamLimits

0x6d7d,	// (0x00018e2a) eswt_control_pane_g1_copy4

0x6d8a,	// (0x00018e37) eswt_control_pane_g2_copy4_ParamLimits

0x6d8a,	// (0x00018e37) eswt_control_pane_g2_copy4

0x6d97,	// (0x00018e44) eswt_control_pane_g3_copy4_ParamLimits

0x6d97,	// (0x00018e44) eswt_control_pane_g3_copy4

0x6da4,	// (0x00018e51) eswt_control_pane_g4_copy4_ParamLimits

0x6da4,	// (0x00018e51) eswt_control_pane_g4_copy4

0xcbb4,	// (0x0001ec61) eswt_ctrl_combo_button_pane

0xcbbc,	// (0x0001ec69) eswt_ctrl_input_pane

0xcbc4,	// (0x0001ec71) popup_choice_list_window_cp70

0xcbcc,	// (0x0001ec79) eswt_ctrl_input_pane_t1

0xdc72,	// (0x0001fd1f) input_focus_pane_cp70

0x6154,	// (0x00018201) bg_button_pane_cp70_ParamLimits

0x6154,	// (0x00018201) bg_button_pane_cp70

0xcbda,	// (0x0001ec87) eswt_ctrl_combo_button_pane_g1

0x6e65,	// (0x00018f12) wait_bar_pane_cp70

0x1204,	// (0x000132b1) bg_popup_window_pane_cp70_ParamLimits

0x1204,	// (0x000132b1) bg_popup_window_pane_cp70

0x6e6d,	// (0x00018f1a) popup_eswt_tasktip_window_t1

0x6e83,	// (0x00018f30) wait_bar_pane_cp71_ParamLimits

0x6e83,	// (0x00018f30) wait_bar_pane_cp71

0x6e8f,	// (0x00018f3c) grid_eswt_app_pane

0xed65,	// (0x00020e12) scroll_pane_cp70

0xcbe2,	// (0x0001ec8f) cell_eswt_app_pane_ParamLimits

0xcbe2,	// (0x0001ec8f) cell_eswt_app_pane

0xcc0a,	// (0x0001ecb7) cell_eswt_app_pane_g1_ParamLimits

0xcc0a,	// (0x0001ecb7) cell_eswt_app_pane_g1

0xcc39,	// (0x0001ece6) cell_eswt_app_pane_g2_ParamLimits

0xcc39,	// (0x0001ece6) cell_eswt_app_pane_g2

0x0001,

0xfc33,	// (0x00021ce0) cell_eswt_app_pane_g_ParamLimits

0xfc33,	// (0x00021ce0) cell_eswt_app_pane_g

0xcc62,	// (0x0001ed0f) cell_eswt_app_pane_t1_ParamLimits

0xcc62,	// (0x0001ed0f) cell_eswt_app_pane_t1

0x6f4a,	// (0x00018ff7) grid_highlight_pane_cp70_ParamLimits

0x6f4a,	// (0x00018ff7) grid_highlight_pane_cp70

0xe2ba,	// (0x00020367) set_content_pane_g1

0xf567,	// (0x00021614) status_small_volume_pane

0x6f56,	// (0x00019003) status_small_volume_pane_g1

0x6f5e,	// (0x0001900b) volume_small2_pane

0x6f67,	// (0x00019014) volume_small2_pane_g1

0x6f70,	// (0x0001901d) volume_small2_pane_g2

0x6f79,	// (0x00019026) volume_small2_pane_g3

0x6f82,	// (0x0001902f) volume_small2_pane_g4

0x6f8b,	// (0x00019038) volume_small2_pane_g5

0x6f94,	// (0x00019041) volume_small2_pane_g6

0x6f9d,	// (0x0001904a) volume_small2_pane_g7

0x6fa6,	// (0x00019053) volume_small2_pane_g8

0x6faf,	// (0x0001905c) volume_small2_pane_g9

0x6fb8,	// (0x00019065) volume_small2_pane_g10

0x0009,

0xfc38,	// (0x00021ce5) volume_small2_pane_g

0x6711,	// (0x000187be) fep_vkb_top_text_pane_g1_ParamLimits

0xcb21,	// (0x0001ebce) fep_vkb_top_text_pane_t1_ParamLimits

0x6a3f,	// (0x00018aec) popup_preview_fixed_window_g3_ParamLimits

0x6a3f,	// (0x00018aec) popup_preview_fixed_window_g3

0xbdb2,	// (0x0001de5f) popup_toolbar_trans_pane

0xc5d5,	// (0x0001e682) aid_height_set_list_ParamLimits

0x225b,	// (0x00014308) aid_size_parent_ParamLimits

0x0dd6,	// (0x00012e83) list_highlight_pane_cp2_ParamLimits

0xe2ba,	// (0x00020367) set_content_pane_g1_ParamLimits

0xc75b,	// (0x0001e808) list_single_image_pane_ParamLimits

0xc75b,	// (0x0001e808) list_single_image_pane

0xcc94,	// (0x0001ed41) aid_size_cell_image_ParamLimits

0xcc94,	// (0x0001ed41) aid_size_cell_image

0xcca1,	// (0x0001ed4e) grid_single_image_pane_ParamLimits

0xcca1,	// (0x0001ed4e) grid_single_image_pane

0xe2ba,	// (0x00020367) list_single_image_pane_g1_ParamLimits

0xe2ba,	// (0x00020367) list_single_image_pane_g1

0xe9d9,	// (0x00020a86) list_single_image_pane_g2_ParamLimits

0xe9d9,	// (0x00020a86) list_single_image_pane_g2

0x0001,

0xfc4d,	// (0x00021cfa) list_single_image_pane_g_ParamLimits

0xfc4d,	// (0x00021cfa) list_single_image_pane_g

0x2391,	// (0x0001443e) list_single_image_pane_t1_ParamLimits

0x2391,	// (0x0001443e) list_single_image_pane_t1

0xccad,	// (0x0001ed5a) cell_image_list_pane_ParamLimits

0xccad,	// (0x0001ed5a) cell_image_list_pane

0xccc1,	// (0x0001ed6e) cell_image_list_pane_g1

0xccca,	// (0x0001ed77) cell_image_list_pane_g2

0x0001,

0xfc52,	// (0x00021cff) cell_image_list_pane_g

0x6fff,	// (0x000190ac) aid_size_cell_tb_trans_pane

0xe9bf,	// (0x00020a6c) bg_tb_trans_pane

0x7011,	// (0x000190be) grid_tb_trans_pane

0x10ee,	// (0x0001319b) bg_tb_trans_pane_g1

0x10fe,	// (0x000131ab) bg_tb_trans_pane_g2

0x10f6,	// (0x000131a3) bg_tb_trans_pane_g3

0x110e,	// (0x000131bb) bg_tb_trans_pane_g4

0x1106,	// (0x000131b3) bg_tb_trans_pane_g5

0x112e,	// (0x000131db) bg_tb_trans_pane_g6

0x1126,	// (0x000131d3) bg_tb_trans_pane_g7

0x1116,	// (0x000131c3) bg_tb_trans_pane_g8

0x111e,	// (0x000131cb) bg_tb_trans_pane_g9

0x0008,

0xfc57,	// (0x00021d04) bg_tb_trans_pane_g

0x7025,	// (0x000190d2) cell_toolbar_trans_pane_ParamLimits

0x7025,	// (0x000190d2) cell_toolbar_trans_pane

0x618f,	// (0x0001823c) cell_toolbar_trans_pane_g1

0xc996,	// (0x0001ea43) list_form2_midp_pane_t1

0xc9a4,	// (0x0001ea51) list_form2_midp_pane_t2

0x0001,

0xfb00,	// (0x00021bad) list_form2_midp_pane_t

0x5e30,	// (0x00017edd) scroll_pane_cp51_ParamLimits

0x5fe9,	// (0x00018096) form2_midp_wait_pane_g1

0x5ff2,	// (0x0001809f) form2_midp_wait_pane_g2

0x5ffb,	// (0x000180a8) form2_midp_wait_pane_g3

0x0002,

0xfb15,	// (0x00021bc2) form2_midp_wait_pane_g

0xdd62,	// (0x0001fe0f) list_highlight_pane_cp21_ParamLimits

0x601b,	// (0x000180c8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x602a,	// (0x000180d7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3eab,	// (0x00015f58) list_single_2graphic_im_pane_ParamLimits

0x3eab,	// (0x00015f58) list_single_2graphic_im_pane

0xccd3,	// (0x0001ed80) list_single_2graphic_im_pane_g1_ParamLimits

0xccd3,	// (0x0001ed80) list_single_2graphic_im_pane_g1

0xcce4,	// (0x0001ed91) list_single_2graphic_im_pane_g2_ParamLimits

0xcce4,	// (0x0001ed91) list_single_2graphic_im_pane_g2

0xccf0,	// (0x0001ed9d) list_single_2graphic_im_pane_g3_ParamLimits

0xccf0,	// (0x0001ed9d) list_single_2graphic_im_pane_g3

0x0003,

0xfc6a,	// (0x00021d17) list_single_2graphic_im_pane_g_ParamLimits

0xfc6a,	// (0x00021d17) list_single_2graphic_im_pane_g

0xcd04,	// (0x0001edb1) list_single_2graphic_im_pane_t1_ParamLimits

0xcd04,	// (0x0001edb1) list_single_2graphic_im_pane_t1

0x6a4b,	// (0x00018af8) list_single_graphic_2heading_pane_fp_ParamLimits

0x6a4b,	// (0x00018af8) list_single_graphic_2heading_pane_fp

0x419c,	// (0x00016249) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x419c,	// (0x00016249) list_single_graphic_2heading_pane_fp_g1

0x6a5f,	// (0x00018b0c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6a5f,	// (0x00018b0c) list_single_graphic_2heading_pane_fp_g2

0x39cb,	// (0x00015a78) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x39cb,	// (0x00015a78) list_single_graphic_2heading_pane_fp_g3

0x4171,	// (0x0001621e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4171,	// (0x0001621e) list_single_graphic_2heading_pane_fp_g4

0x6a6b,	// (0x00018b18) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6a6b,	// (0x00018b18) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00021c45) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00021c45) list_single_graphic_2heading_pane_fp_g

0x4369,	// (0x00016416) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4369,	// (0x00016416) list_single_graphic_2heading_pane_fp_t1

0x41d4,	// (0x00016281) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x41d4,	// (0x00016281) list_single_graphic_2heading_pane_fp_t2

0x437f,	// (0x0001642c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x437f,	// (0x0001642c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc73,	// (0x00021d20) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc73,	// (0x00021d20) list_single_graphic_2heading_pane_fp_t

0x63b2,	// (0x0001845f) fep_hwr_write_pane_g5_ParamLimits

0x63b2,	// (0x0001845f) fep_hwr_write_pane_g5

0x63be,	// (0x0001846b) fep_hwr_write_pane_g6_ParamLimits

0x63be,	// (0x0001846b) fep_hwr_write_pane_g6

0x6d50,	// (0x00018dfd) eswt_shell_pane_ParamLimits

0x1204,	// (0x000132b1) bg_popup_window_pane_cp18_ParamLimits

0x2188,	// (0x00014235) heading_pane_cp70

0x6e6d,	// (0x00018f1a) popup_eswt_tasktip_window_t1_ParamLimits

0xbe4d,	// (0x0001defa) aid_touch_tab_arrow_left

0xbe61,	// (0x0001df0e) aid_touch_tab_arrow_right

0xb065,	// (0x0001d112) title_pane_g3_ParamLimits

0xb065,	// (0x0001d112) title_pane_g3

0xe98f,	// (0x00020a3c) set_value_pane_g1

0xbdb2,	// (0x0001de5f) popup_toolbar_trans_pane_ParamLimits

0x6fff,	// (0x000190ac) aid_size_cell_tb_trans_pane_ParamLimits

0xe9bf,	// (0x00020a6c) bg_tb_trans_pane_ParamLimits

0x7011,	// (0x000190be) grid_tb_trans_pane_ParamLimits

0xdec1,	// (0x0001ff6e) cont_note_pane_ParamLimits

0xdec1,	// (0x0001ff6e) cont_note_pane

0xe128,	// (0x000201d5) cont_snote2_single_text_pane_ParamLimits

0xe128,	// (0x000201d5) cont_snote2_single_text_pane

0xe128,	// (0x000201d5) cont_snote2_single_graphic_pane_ParamLimits

0xe128,	// (0x000201d5) cont_snote2_single_graphic_pane

0x1697,	// (0x00013744) cont_note_wait_pane_ParamLimits

0x1697,	// (0x00013744) cont_note_wait_pane

0x1697,	// (0x00013744) cont_note_image_pane_ParamLimits

0x1697,	// (0x00013744) cont_note_image_pane

0x70b9,	// (0x00019166) popup_note2_window_g1_ParamLimits

0x70b9,	// (0x00019166) popup_note2_window_g1

0x70ea,	// (0x00019197) popup_note2_window_t1_ParamLimits

0x70ea,	// (0x00019197) popup_note2_window_t1

0x712f,	// (0x000191dc) popup_note2_window_t2_ParamLimits

0x712f,	// (0x000191dc) popup_note2_window_t2

0x7174,	// (0x00019221) popup_note2_window_t3_ParamLimits

0x7174,	// (0x00019221) popup_note2_window_t3

0x71b9,	// (0x00019266) popup_note2_window_t4_ParamLimits

0x71b9,	// (0x00019266) popup_note2_window_t4

0xdf45,	// (0x0001fff2) popup_note2_window_t5_ParamLimits

0xdf45,	// (0x0001fff2) popup_note2_window_t5

0x0004,

0xfc7f,	// (0x00021d2c) popup_note2_window_t_ParamLimits

0xfc7f,	// (0x00021d2c) popup_note2_window_t

0x71e8,	// (0x00019295) popup_note2_image_window_g1_ParamLimits

0x71e8,	// (0x00019295) popup_note2_image_window_g1

0x71f4,	// (0x000192a1) popup_note2_image_window_g2_ParamLimits

0x71f4,	// (0x000192a1) popup_note2_image_window_g2

0x0001,

0xfc8a,	// (0x00021d37) popup_note2_image_window_g_ParamLimits

0xfc8a,	// (0x00021d37) popup_note2_image_window_g

0x7206,	// (0x000192b3) popup_note2_image_window_t1_ParamLimits

0x7206,	// (0x000192b3) popup_note2_image_window_t1

0x721e,	// (0x000192cb) popup_note2_image_window_t2_ParamLimits

0x721e,	// (0x000192cb) popup_note2_image_window_t2

0x7236,	// (0x000192e3) popup_note2_image_window_t3_ParamLimits

0x7236,	// (0x000192e3) popup_note2_image_window_t3

0x0002,

0xfc8f,	// (0x00021d3c) popup_note2_image_window_t_ParamLimits

0xfc8f,	// (0x00021d3c) popup_note2_image_window_t

0x16a5,	// (0x00013752) popup_note2_wait_window_g1_ParamLimits

0x16a5,	// (0x00013752) popup_note2_wait_window_g1

0x16b1,	// (0x0001375e) popup_note2_wait_window_g2_ParamLimits

0x16b1,	// (0x0001375e) popup_note2_wait_window_g2

0x16bd,	// (0x0001376a) popup_note2_wait_window_g3_ParamLimits

0x16bd,	// (0x0001376a) popup_note2_wait_window_g3

0x0002,

0xf86e,	// (0x0002191b) popup_note2_wait_window_g_ParamLimits

0xf86e,	// (0x0002191b) popup_note2_wait_window_g

0x7252,	// (0x000192ff) popup_note2_wait_window_t1_ParamLimits

0x7252,	// (0x000192ff) popup_note2_wait_window_t1

0x7270,	// (0x0001931d) popup_note2_wait_window_t2_ParamLimits

0x7270,	// (0x0001931d) popup_note2_wait_window_t2

0x728e,	// (0x0001933b) popup_note2_wait_window_t3_ParamLimits

0x728e,	// (0x0001933b) popup_note2_wait_window_t3

0x72a0,	// (0x0001934d) popup_note2_wait_window_t4_ParamLimits

0x72a0,	// (0x0001934d) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x00021d43) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x00021d43) popup_note2_wait_window_t

0x72b2,	// (0x0001935f) wait_bar2_pane_ParamLimits

0x72b2,	// (0x0001935f) wait_bar2_pane

0x72ca,	// (0x00019377) popup_snote2_single_text_window_g1_ParamLimits

0x72ca,	// (0x00019377) popup_snote2_single_text_window_g1

0x72f2,	// (0x0001939f) popup_snote2_single_text_window_t1_ParamLimits

0x72f2,	// (0x0001939f) popup_snote2_single_text_window_t1

0x733e,	// (0x000193eb) popup_snote2_single_text_window_t2_ParamLimits

0x733e,	// (0x000193eb) popup_snote2_single_text_window_t2

0x738a,	// (0x00019437) popup_snote2_single_text_window_t3_ParamLimits

0x738a,	// (0x00019437) popup_snote2_single_text_window_t3

0x73cb,	// (0x00019478) popup_snote2_single_text_window_t4_ParamLimits

0x73cb,	// (0x00019478) popup_snote2_single_text_window_t4

0x7401,	// (0x000194ae) popup_snote2_single_text_window_t5_ParamLimits

0x7401,	// (0x000194ae) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x00021d4c) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x00021d4c) popup_snote2_single_text_window_t

0x742c,	// (0x000194d9) popup_snote2_single_graphic_window_g1_ParamLimits

0x742c,	// (0x000194d9) popup_snote2_single_graphic_window_g1

0x7454,	// (0x00019501) popup_snote2_single_graphic_window_g2_ParamLimits

0x7454,	// (0x00019501) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x00021d57) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x00021d57) popup_snote2_single_graphic_window_g

0x747c,	// (0x00019529) popup_snote2_single_graphic_window_t1_ParamLimits

0x747c,	// (0x00019529) popup_snote2_single_graphic_window_t1

0x74c8,	// (0x00019575) popup_snote2_single_graphic_window_t2_ParamLimits

0x74c8,	// (0x00019575) popup_snote2_single_graphic_window_t2

0x738a,	// (0x00019437) popup_snote2_single_graphic_window_t3_ParamLimits

0x738a,	// (0x00019437) popup_snote2_single_graphic_window_t3

0x73cb,	// (0x00019478) popup_snote2_single_graphic_window_t4_ParamLimits

0x73cb,	// (0x00019478) popup_snote2_single_graphic_window_t4

0x7401,	// (0x000194ae) popup_snote2_single_graphic_window_t5_ParamLimits

0x7401,	// (0x000194ae) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x00021d5c) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x00021d5c) popup_snote2_single_graphic_window_t

0x2ca2,	// (0x00014d4f) clock_nsta_pane_cp2_t1

0x2ca2,	// (0x00014d4f) clock_nsta_pane_cp2_t2

0x0001,

0xfad6,	// (0x00021b83) clock_nsta_pane_cp2_t

0x3b77,	// (0x00015c24) form_field_data_wide_pane_g1_ParamLimits

0xe2ba,	// (0x00020367) form_field_data_wide_pane_g2_ParamLimits

0xe2ba,	// (0x00020367) form_field_data_wide_pane_g2

0xe9d9,	// (0x00020a86) form_field_data_wide_pane_g3_ParamLimits

0xe9d9,	// (0x00020a86) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x0002176c) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x0002176c) form_field_data_wide_pane_g

0xc8d1,	// (0x0001e97e) grid_touch_3_pane_ParamLimits

0xc8d1,	// (0x0001e97e) grid_touch_3_pane

0xcd35,	// (0x0001ede2) cell_touch_3_pane_ParamLimits

0xcd35,	// (0x0001ede2) cell_touch_3_pane

0x618f,	// (0x0001823c) cell_touch_3_pane_g1

0x618f,	// (0x0001823c) cell_touch_3_pane_g2

0x0001,

0xfb5b,	// (0x00021c08) cell_touch_3_pane_g

0xdf77,	// (0x00020024) cont_query_data_pane

0xdf7f,	// (0x0002002c) cont_query_data_pane_cp1

0x7541,	// (0x000195ee) button_value_adjust_pane_cp7

0x7549,	// (0x000195f6) query_popup_pane_cp3

0xef08,	// (0x00020fb5) bg_popup_sub_pane_cp22_ParamLimits

0x49c4,	// (0x00016a71) navi_navi_volume_pane_cp2

0x49dc,	// (0x00016a89) popup_side_volume_key_window_g2

0x49e8,	// (0x00016a95) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x000217fe) popup_side_volume_key_window_g

0x4a02,	// (0x00016aaf) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x00021805) popup_side_volume_key_window_t

0xf170,	// (0x0002121d) popup_side_volume_key_window_ParamLimits

0xa797,	// (0x0001c844) list_double_graphic_pane_g4_ParamLimits

0xa797,	// (0x0001c844) list_double_graphic_pane_g4

0xc733,	// (0x0001e7e0) list_single_2heading_msg_pane_ParamLimits

0xc733,	// (0x0001e7e0) list_single_2heading_msg_pane

0xad00,	// (0x0001cdad) list_single_2heading_msg_pane_g1_ParamLimits

0xad00,	// (0x0001cdad) list_single_2heading_msg_pane_g1

0xad0c,	// (0x0001cdb9) list_single_2heading_msg_pane_g2_ParamLimits

0xad0c,	// (0x0001cdb9) list_single_2heading_msg_pane_g2

0xad1f,	// (0x0001cdcc) list_single_2heading_msg_pane_g3_ParamLimits

0xad1f,	// (0x0001cdcc) list_single_2heading_msg_pane_g3

0xad2b,	// (0x0001cdd8) list_single_2heading_msg_pane_g4_ParamLimits

0xad2b,	// (0x0001cdd8) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x00021d67) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x00021d67) list_single_2heading_msg_pane_g

0xad43,	// (0x0001cdf0) list_single_2heading_msg_pane_t1_ParamLimits

0xad43,	// (0x0001cdf0) list_single_2heading_msg_pane_t1

0xad6b,	// (0x0001ce18) list_single_2heading_msg_pane_t2_ParamLimits

0xad6b,	// (0x0001ce18) list_single_2heading_msg_pane_t2

0xadd6,	// (0x0001ce83) list_single_2heading_msg_pane_t3_ParamLimits

0xadd6,	// (0x0001ce83) list_single_2heading_msg_pane_t3

0x4462,	// (0x0001650f) list_single_2heading_msg_pane_t4_ParamLimits

0x4462,	// (0x0001650f) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x00021d70) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x00021d70) list_single_2heading_msg_pane_t

0xdd08,	// (0x0001fdb5) title_pane_g4_ParamLimits

0xdd08,	// (0x0001fdb5) title_pane_g4

0x4814,	// (0x000168c1) title_pane_stacon_g3_ParamLimits

0x4814,	// (0x000168c1) title_pane_stacon_g3

0x707c,	// (0x00019129) list_single_2graphic_im_pane_g4_ParamLimits

0x707c,	// (0x00019129) list_single_2graphic_im_pane_g4

0x1f9e,	// (0x0001404b) popup_side_volume_key_window_cp

0x24b8,	// (0x00014565) main_idle_act2_pane_t1

0x53fc,	// (0x000174a9) toolbar_button_pane_g10

0xb3f5,	// (0x0001d4a2) popup_toolbar_window_cp1

0x2c93,	// (0x00014d40) clock_nsta_pane_cp_t1

0x2c93,	// (0x00014d40) clock_nsta_pane_cp_t2

0x0001,

0xfad1,	// (0x00021b7e) clock_nsta_pane_cp_t

0x49c4,	// (0x00016a71) navi_navi_volume_pane_cp2_ParamLimits

0x49d0,	// (0x00016a7d) popup_side_volume_key_window_g1_ParamLimits

0x49dc,	// (0x00016a89) popup_side_volume_key_window_g2_ParamLimits

0x49e8,	// (0x00016a95) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x000217fe) popup_side_volume_key_window_g_ParamLimits

0x61f8,	// (0x000182a5) fep_hwr_aid_pane

0x6299,	// (0x00018346) bg_fep_hwr_top_pane_g4_ParamLimits

0x62b9,	// (0x00018366) fep_hwr_top_pane_g1_ParamLimits

0x62cb,	// (0x00018378) fep_hwr_top_pane_g2_ParamLimits

0x62dd,	// (0x0001838a) fep_hwr_top_pane_g3_ParamLimits

0xfb26,	// (0x00021bd3) fep_hwr_top_pane_g_ParamLimits

0x62f2,	// (0x0001839f) fep_hwr_top_text_pane_ParamLimits

0x1da7,	// (0x00013e54) aid_touch_tab_arrow_arrow_2

0x1d9e,	// (0x00013e4b) aid_touch_tab_arrow_left_2

0x620c,	// (0x000182b9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x623f,	// (0x000182ec) fep_hwr_prediction_pane

0x6541,	// (0x000185ee) fep_vkb_prediction_pane

0xcb01,	// (0x0001ebae) fep_vkb_side_pane_g3_ParamLimits

0xcb01,	// (0x0001ebae) fep_vkb_side_pane_g3

0x65cf,	// (0x0001867c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6add,	// (0x00018b8a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6aea,	// (0x00018b97) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x00021c7d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x756e,	// (0x0001961b) fep_hwr_prediction_pane_g1

0x7578,	// (0x00019625) fep_hwr_prediction_pane_g2

0x7580,	// (0x0001962d) fep_hwr_prediction_pane_g3

0x7588,	// (0x00019635) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x00021d79) fep_hwr_prediction_pane_g

0x756e,	// (0x0001961b) fep_vkb_prediction_pane_g1

0x7590,	// (0x0001963d) fep_vkb_prediction_pane_g2

0x7598,	// (0x00019645) fep_vkb_prediction_pane_g3

0x75a0,	// (0x0001964d) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x00021d82) fep_vkb_prediction_pane_g

0x23a7,	// (0x00014454) slider_set_pane_g3

0x23bb,	// (0x00014468) slider_set_pane_g4

0x23d3,	// (0x00014480) slider_set_pane_g5

0x23a7,	// (0x00014454) slider_set_pane_g6

0xc59f,	// (0x0001e64c) slider_set_pane_g7

0x227e,	// (0x0001432b) slider_form_pane_g3

0x2287,	// (0x00014334) slider_form_pane_g4

0x228f,	// (0x0001433c) slider_form_pane_g5

0x227e,	// (0x0001432b) slider_form_pane_g6

0xc707,	// (0x0001e7b4) slider_form_pane_g7

0x2713,	// (0x000147c0) slider_set_pane_vc_g3

0x271c,	// (0x000147c9) slider_set_pane_vc_g4

0x2725,	// (0x000147d2) slider_set_pane_vc_g5

0x2713,	// (0x000147c0) slider_set_pane_vc_g6

0x272e,	// (0x000147db) slider_set_pane_vc_g7

0x2713,	// (0x000147c0) slider_form_pane_vc_g1

0x271c,	// (0x000147c9) slider_form_pane_vc_g2

0x2725,	// (0x000147d2) slider_form_pane_vc_g3

0x2713,	// (0x000147c0) slider_form_pane_vc_g4

0x2a49,	// (0x00014af6) slider_form_pane_vc_g5

0x0004,

0xfab7,	// (0x00021b64) slider_form_pane_vc_g

0xdc72,	// (0x0001fd1f) main_idle_act3_pane

0x75a8,	// (0x00019655) ai3_links_pane

0xcd7c,	// (0x0001ee29) popup_ai3_data_window_ParamLimits

0xcd7c,	// (0x0001ee29) popup_ai3_data_window

0xdc72,	// (0x0001fd1f) grid_ai3_links_pane

0xcd94,	// (0x0001ee41) cell_ai3_links_pane_ParamLimits

0xcd94,	// (0x0001ee41) cell_ai3_links_pane

0x75dd,	// (0x0001968a) bg_popup_sub_pane_cp11

0x75ea,	// (0x00019697) cell_ai3_links_pane_g1

0xdc72,	// (0x0001fd1f) bg_popup_sub_pane_cp12

0x760f,	// (0x000196bc) heading_ai3_data_pane

0x7617,	// (0x000196c4) list_ai3_gene_pane

0x7623,	// (0x000196d0) popup_ai3_data_window_g1

0x762b,	// (0x000196d8) heading_ai3_data_pane_g1

0x7633,	// (0x000196e0) heading_ai3_data_pane_t1

0x7641,	// (0x000196ee) list_double_ai3_gene_pane_ParamLimits

0x7641,	// (0x000196ee) list_double_ai3_gene_pane

0x764e,	// (0x000196fb) list_single_ai3_gene_pane_ParamLimits

0x764e,	// (0x000196fb) list_single_ai3_gene_pane

0x6154,	// (0x00018201) list_highlight_pane_cp7_ParamLimits

0x6154,	// (0x00018201) list_highlight_pane_cp7

0x765b,	// (0x00019708) list_single_a13_gene_pane_t1_ParamLimits

0x765b,	// (0x00019708) list_single_a13_gene_pane_t1

0x7672,	// (0x0001971f) list_single_ai3_gene_pane_g1

0x767b,	// (0x00019728) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x00021d8b) list_single_ai3_gene_pane_g

0x7683,	// (0x00019730) list_double_ai3_gene_pane_g1_ParamLimits

0x7683,	// (0x00019730) list_double_ai3_gene_pane_g1

0x768f,	// (0x0001973c) list_double_ai3_gene_pane_t1_ParamLimits

0x768f,	// (0x0001973c) list_double_ai3_gene_pane_t1

0x76ab,	// (0x00019758) list_double_ai3_gene_pane_t2_ParamLimits

0x76ab,	// (0x00019758) list_double_ai3_gene_pane_t2

0x76c0,	// (0x0001976d) list_double_ai3_gene_pane_t3_ParamLimits

0x76c0,	// (0x0001976d) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x00021d90) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x00021d90) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4395,	// (0x00016442) aid_size_min_col_2

0xcd68,	// (0x0001ee15) aid_size_min_msg_ParamLimits

0xcd68,	// (0x0001ee15) aid_size_min_msg

0xcb15,	// (0x0001ebc2) fep_vkb_top_text_pane_g2_ParamLimits

0xcb15,	// (0x0001ebc2) fep_vkb_top_text_pane_g2

0x0001,

0xfb56,	// (0x00021c03) fep_vkb_top_text_pane_g_ParamLimits

0xfb56,	// (0x00021c03) fep_vkb_top_text_pane_g

0xdc72,	// (0x0001fd1f) main_hc_apps_shell_pane

0x76dd,	// (0x0001978a) grid_hc_apps_pane_ParamLimits

0x76dd,	// (0x0001978a) grid_hc_apps_pane

0x76ec,	// (0x00019799) list_hc_apps_pane

0x76f4,	// (0x000197a1) scroll_pane_cp37_ParamLimits

0x76f4,	// (0x000197a1) scroll_pane_cp37

0xcdaa,	// (0x0001ee57) cell_hc_apps_pane_ParamLimits

0xcdaa,	// (0x0001ee57) cell_hc_apps_pane

0xce44,	// (0x0001eef1) cell_hc_apps_pane_g1_ParamLimits

0xce44,	// (0x0001eef1) cell_hc_apps_pane_g1

0x77bb,	// (0x00019868) cell_hc_apps_pane_g2_ParamLimits

0x77bb,	// (0x00019868) cell_hc_apps_pane_g2

0x77d7,	// (0x00019884) cell_hc_apps_pane_g3_ParamLimits

0x77d7,	// (0x00019884) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x00021d97) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x00021d97) cell_hc_apps_pane_g

0xce71,	// (0x0001ef1e) cell_hc_apps_pane_t1_ParamLimits

0xce71,	// (0x0001ef1e) cell_hc_apps_pane_t1

0xdec1,	// (0x0001ff6e) grid_highlight_pane_cp10_ParamLimits

0xdec1,	// (0x0001ff6e) grid_highlight_pane_cp10

0xceaf,	// (0x0001ef5c) list_single_hc_apps_pane_ParamLimits

0xceaf,	// (0x0001ef5c) list_single_hc_apps_pane

0xcedb,	// (0x0001ef88) list_single_hc_apps_pane_g1

0xae44,	// (0x0001cef1) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x00021d9e) list_single_hc_apps_pane_g

0xae5d,	// (0x0001cf0a) list_single_hc_apps_pane_g2_copy1

0xae79,	// (0x0001cf26) list_single_hc_apps_pane_t1

0xdd62,	// (0x0001fe0f) bg_set_opt_pane_cp_ParamLimits

0xdd70,	// (0x0001fe1d) setting_slider_pane_t1_ParamLimits

0xb132,	// (0x0001d1df) setting_slider_pane_t2_ParamLimits

0xb14b,	// (0x0001d1f8) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002164f) setting_slider_pane_t_ParamLimits

0xdd86,	// (0x0001fe33) slider_set_pane_ParamLimits

0x4c3c,	// (0x00016ce9) control_pane_g5_ParamLimits

0x4c3c,	// (0x00016ce9) control_pane_g5

0x21cf,	// (0x0001427c) slider_set_pane_g1_ParamLimits

0x587f,	// (0x0001792c) slider_set_pane_g2_ParamLimits

0x23a7,	// (0x00014454) slider_set_pane_g3_ParamLimits

0x23bb,	// (0x00014468) slider_set_pane_g4_ParamLimits

0x23d3,	// (0x00014480) slider_set_pane_g5_ParamLimits

0x23a7,	// (0x00014454) slider_set_pane_g6_ParamLimits

0xc59f,	// (0x0001e64c) slider_set_pane_g7_ParamLimits

0xf98a,	// (0x00021a37) slider_set_pane_g_ParamLimits

0xdd62,	// (0x0001fe0f) navi_icon_text_pane_ParamLimits

0xbe1f,	// (0x0001decc) aid_fill_nsta_2_ParamLimits

0xbe4d,	// (0x0001defa) aid_touch_tab_arrow_left_ParamLimits

0xbe61,	// (0x0001df0e) aid_touch_tab_arrow_right_ParamLimits

0xbefd,	// (0x0001dfaa) clock_nsta_pane_ParamLimits

0x1d80,	// (0x00013e2d) navi_icon_pane_g1_ParamLimits

0x1d8c,	// (0x00013e39) navi_text_pane_t1_ParamLimits

0x5da6,	// (0x00017e53) navi_icon_text_pane_g1_ParamLimits

0x5db2,	// (0x00017e5f) navi_icon_text_pane_t1_ParamLimits

0xcedb,	// (0x0001ef88) list_single_hc_apps_pane_g1_ParamLimits

0xae44,	// (0x0001cef1) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x00021d9e) list_single_hc_apps_pane_g_ParamLimits

0xae5d,	// (0x0001cf0a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xae79,	// (0x0001cf26) list_single_hc_apps_pane_t1_ParamLimits

0xafc4,	// (0x0001d071) popup_toolbar2_fixed_window_ParamLimits

0xafc4,	// (0x0001d071) popup_toolbar2_fixed_window

0xbdaa,	// (0x0001de57) popup_toolbar2_float_window

0xdc72,	// (0x0001fd1f) bg_popup_sub_pane_cp27

0x7880,	// (0x0001992d) grid_toolbar2_float_pane

0xdc72,	// (0x0001fd1f) bg_popup_sub_pane_cp26

0x7880,	// (0x0001992d) grid_toolbar2_fixed_pane

0xcef4,	// (0x0001efa1) cell_toolbar2_fixed_pane_ParamLimits

0xcef4,	// (0x0001efa1) cell_toolbar2_fixed_pane

0xcf0f,	// (0x0001efbc) cell_toolbar2_fixed_pane_g1

0x78a2,	// (0x0001994f) toolbar2_fixed_button_pane

0x10ee,	// (0x0001319b) toolbar2_fixed_button_pane_g1

0x10fe,	// (0x000131ab) toolbar2_fixed_button_pane_g2

0x10f6,	// (0x000131a3) toolbar2_fixed_button_pane_g3

0x110e,	// (0x000131bb) toolbar2_fixed_button_pane_g4

0x1106,	// (0x000131b3) toolbar2_fixed_button_pane_g5

0x1116,	// (0x000131c3) toolbar2_fixed_button_pane_g6

0x111e,	// (0x000131cb) toolbar2_fixed_button_pane_g7

0x112e,	// (0x000131db) toolbar2_fixed_button_pane_g8

0x1126,	// (0x000131d3) toolbar2_fixed_button_pane_g9

0x0008,

0xf88c,	// (0x00021939) toolbar2_fixed_button_pane_g

0x78aa,	// (0x00019957) cell_toolbar2_float_pane_ParamLimits

0x78aa,	// (0x00019957) cell_toolbar2_float_pane

0x78bb,	// (0x00019968) cell_toolbar2_float_pane_g1

0x78a2,	// (0x0001994f) toolbar2_fixed_button_pane_cp

0xcaca,	// (0x0001eb77) fep_vkb_accented_list_pane_ParamLimits

0xcaca,	// (0x0001eb77) fep_vkb_accented_list_pane

0x6902,	// (0x000189af) bg_popup_fep_shadow_pane_g9

0xf378,	// (0x00021425) bg_popup_fep_shadow_pane_cp3

0xeafd,	// (0x00020baa) list_accented_list_pane

0x78c4,	// (0x00019971) list_single_accented_list_pane_ParamLimits

0x78c4,	// (0x00019971) list_single_accented_list_pane

0xf378,	// (0x00021425) list_highlight_pane_cp10

0x78d5,	// (0x00019982) list_single_accented_list_pane_t1

0xbcec,	// (0x0001dd99) popup_slider_window_ParamLimits

0xbcec,	// (0x0001dd99) popup_slider_window

0x7551,	// (0x000195fe) aid_indentation_list_msg

0xcfee,	// (0x0001f09b) bg_popup_window_pane_cp19

0x79d9,	// (0x00019a86) popup_slider_window_g1

0x79f5,	// (0x00019aa2) popup_slider_window_g2

0x7a11,	// (0x00019abe) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x00021da3) popup_slider_window_g

0x7a6d,	// (0x00019b1a) popup_slider_window_t1

0x7adf,	// (0x00019b8c) small_volume_slider_vertical_pane

0x618f,	// (0x0001823c) small_volume_slider_vertical_pane_g1

0x618f,	// (0x0001823c) small_volume_slider_vertical_pane_g2

0x7afb,	// (0x00019ba8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x00021db5) small_volume_slider_vertical_pane_g

0xaf48,	// (0x0001cff5) area_side_right_pane_ParamLimits

0xaf48,	// (0x0001cff5) area_side_right_pane

0xd0a6,	// (0x0001f153) aid_size_side_button_ParamLimits

0xd0a6,	// (0x0001f153) aid_size_side_button

0xd0bf,	// (0x0001f16c) grid_sctrl_middle_pane_ParamLimits

0xd0bf,	// (0x0001f16c) grid_sctrl_middle_pane

0x7b34,	// (0x00019be1) sctrl_sk_bottom_pane

0x7b45,	// (0x00019bf2) sctrl_sk_top_pane

0x7b57,	// (0x00019c04) aid_touch_sctrl_top

0xdec1,	// (0x0001ff6e) bg_sctrl_sk_pane_ParamLimits

0xdec1,	// (0x0001ff6e) bg_sctrl_sk_pane

0x7b64,	// (0x00019c11) sctrl_sk_top_pane_g1

0x7b71,	// (0x00019c1e) sctrl_sk_top_pane_t1

0x7b57,	// (0x00019c04) aid_touch_sctrl_bottom

0xdec1,	// (0x0001ff6e) bg_sctrl_sk_pane_cp_ParamLimits

0xdec1,	// (0x0001ff6e) bg_sctrl_sk_pane_cp

0x7b8c,	// (0x00019c39) sctrl_sk_bottom_pane_g1

0x7b71,	// (0x00019c1e) sctrl_sk_bottom_pane_t1

0xd0d5,	// (0x0001f182) cell_sctrl_middle_pane_ParamLimits

0xd0d5,	// (0x0001f182) cell_sctrl_middle_pane

0xd0e6,	// (0x0001f193) aid_touch_sctrl_middle_ParamLimits

0xd0e6,	// (0x0001f193) aid_touch_sctrl_middle

0xd0f3,	// (0x0001f1a0) bg_sctrl_middle_pane_ParamLimits

0xd0f3,	// (0x0001f1a0) bg_sctrl_middle_pane

0x7c53,	// (0x00019d00) cell_sctrl_middle_pane_g1_ParamLimits

0x7c53,	// (0x00019d00) cell_sctrl_middle_pane_g1

0xd101,	// (0x0001f1ae) cell_sctrl_middle_pane_g2_ParamLimits

0xd101,	// (0x0001f1ae) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x00021dc1) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x00021dc1) cell_sctrl_middle_pane_g

0x10ee,	// (0x0001319b) bg_sctrl_middle_pane_g1

0x10fe,	// (0x000131ab) bg_sctrl_middle_pane_g2

0x10f6,	// (0x000131a3) bg_sctrl_middle_pane_g3

0x110e,	// (0x000131bb) bg_sctrl_middle_pane_g4

0x1106,	// (0x000131b3) bg_sctrl_middle_pane_g5

0x1116,	// (0x000131c3) bg_sctrl_middle_pane_g6

0x111e,	// (0x000131cb) bg_sctrl_middle_pane_g7

0x112e,	// (0x000131db) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x00021dc6) bg_sctrl_middle_pane_g

0x1126,	// (0x000131d3) bg_sctrl_middle_pane_g8_copy1

0x10ee,	// (0x0001319b) bg_sctrl_sk_pane_g1

0x10fe,	// (0x000131ab) bg_sctrl_sk_pane_g2

0x10f6,	// (0x000131a3) bg_sctrl_sk_pane_g3

0x0008,

0xf88c,	// (0x00021939) bg_sctrl_sk_pane_g

0xe24a,	// (0x000202f7) aid_size_touch_scroll_bar

0x110e,	// (0x000131bb) bg_sctrl_sk_pane_g4

0x1106,	// (0x000131b3) bg_sctrl_sk_pane_g5

0x1116,	// (0x000131c3) bg_sctrl_sk_pane_g6

0x111e,	// (0x000131cb) bg_sctrl_sk_pane_g7

0x112e,	// (0x000131db) bg_sctrl_sk_pane_g8

0x1126,	// (0x000131d3) bg_sctrl_sk_pane_g9

0x0e64,	// (0x00012f11) popup_fep_china_hwr2_fs_candidate_window

0xb8e7,	// (0x0001d994) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb8e7,	// (0x0001d994) popup_fep_china_hwr2_fs_control_window

0x65cf,	// (0x0001867c) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x00021dbc) sctrl_sk_top_pane_g

0xd10e,	// (0x0001f1bb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd10e,	// (0x0001f1bb) aid_fep_china_hwr2_fs_cell

0xd122,	// (0x0001f1cf) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd122,	// (0x0001f1cf) bg_popup_fep_shadow_pane_cp4

0xd139,	// (0x0001f1e6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd139,	// (0x0001f1e6) bg_popup_fep_shadow_pane_cp5

0xd14b,	// (0x0001f1f8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd14b,	// (0x0001f1f8) popup_fep_china_hwr2_fs_control_bar_grid

0xd15f,	// (0x0001f20c) popup_fep_china_hwr2_fs_control_funtion_grid

0x7c29,	// (0x00019cd6) aid_fep_china_hwr2_fs_candi_cell

0xdc72,	// (0x0001fd1f) bg_popup_fep_shadow_pane_cp6

0x7c33,	// (0x00019ce0) popup_fep_china_hwr2_fs_candidate_grid

0xd167,	// (0x0001f214) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd167,	// (0x0001f214) cell_fep_china_hwr2_fs_funtion_grid

0x618f,	// (0x0001823c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7c53,	// (0x00019d00) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7c53,	// (0x00019d00) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7c61,	// (0x00019d0e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7c61,	// (0x00019d0e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x00021dd7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x00021dd7) cell_fep_china_hwr2_fs_funtion_grid_g

0xd17f,	// (0x0001f22c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd17f,	// (0x0001f22c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd194,	// (0x0001f241) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd194,	// (0x0001f241) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x00021ddc) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x00021ddc) cell_fep_china_hwr2_fs_funtion_grid_t

0x7ca8,	// (0x00019d55) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7cb0,	// (0x00019d5d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7cb8,	// (0x00019d65) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x00021de1) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7cc0,	// (0x00019d6d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7cc0,	// (0x00019d6d) cell_fep_china_hwr2_fs_candidate_grid

0x7cd9,	// (0x00019d86) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7ce1,	// (0x00019d8e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x618f,	// (0x0001823c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x618f,	// (0x0001823c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5b,	// (0x00021c08) cell_fep_china_hwr2_fs_candidate_grid_g

0x7ce9,	// (0x00019d96) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0f53,	// (0x00013000) clock_nsta_pane_cp_24_ParamLimits

0x0f53,	// (0x00013000) clock_nsta_pane_cp_24

0x0fb0,	// (0x0001305d) indicator_nsta_pane_cp_24_ParamLimits

0x0fb0,	// (0x0001305d) indicator_nsta_pane_cp_24

0x1c8b,	// (0x00013d38) heading_pane_g1

0x0001,

0xf8f1,	// (0x0002199e) heading_pane_g

0xc7f9,	// (0x0001e8a6) grid_sct_catagory_button_pane

0x2247,	// (0x000142f4) scroll_pane_cp5_ParamLimits

0x5e3c,	// (0x00017ee9) button_value_adjust_pane_cp5_ParamLimits

0x5e3c,	// (0x00017ee9) button_value_adjust_pane_cp5

0x5f19,	// (0x00017fc6) form2_midp_time_pane_ParamLimits

0x7cf7,	// (0x00019da4) cell_sct_catagory_button_pane_ParamLimits

0x7cf7,	// (0x00019da4) cell_sct_catagory_button_pane

0x6154,	// (0x00018201) bg_button_pane_cp01_ParamLimits

0x6154,	// (0x00018201) bg_button_pane_cp01

0x618f,	// (0x0001823c) cell_sct_catagory_button_pane_g1

0xbd5b,	// (0x0001de08) popup_tb_extension_window

0xd1b0,	// (0x0001f25d) aid_size_cell_ext_ParamLimits

0xd1b0,	// (0x0001f25d) aid_size_cell_ext

0xe128,	// (0x000201d5) bg_tb_trans_pane_cp1_ParamLimits

0xe128,	// (0x000201d5) bg_tb_trans_pane_cp1

0xd1d6,	// (0x0001f283) grid_tb_ext_pane_ParamLimits

0xd1d6,	// (0x0001f283) grid_tb_ext_pane

0xd20c,	// (0x0001f2b9) cell_tb_ext_pane_ParamLimits

0xd20c,	// (0x0001f2b9) cell_tb_ext_pane

0xd230,	// (0x0001f2dd) cell_tb_ext_pane_g1_ParamLimits

0xd230,	// (0x0001f2dd) cell_tb_ext_pane_g1

0x7d81,	// (0x00019e2e) cell_tb_ext_pane_t1

0xdec1,	// (0x0001ff6e) list_highlight_pane_cp11_ParamLimits

0xdec1,	// (0x0001ff6e) list_highlight_pane_cp11

0x46df,	// (0x0001678c) popup_uni_indicator_window_ParamLimits

0x46df,	// (0x0001678c) popup_uni_indicator_window

0xe9bf,	// (0x00020a6c) bg_popup_sub_pane_cp14

0x7d9c,	// (0x00019e49) list_uniindi_pane

0x7da8,	// (0x00019e55) uniindi_top_pane

0xdec1,	// (0x0001ff6e) bg_uniindi_top_pane

0x7dc7,	// (0x00019e74) uniindi_top_pane_g1

0x7ddd,	// (0x00019e8a) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x00021de8) uniindi_top_pane_g

0x7e07,	// (0x00019eb4) uniindi_top_pane_t1

0x7e31,	// (0x00019ede) list_single_uniindi_pane_ParamLimits

0x7e31,	// (0x00019ede) list_single_uniindi_pane

0x618f,	// (0x0001823c) bg_uniindi_top_pane_g1

0x7e43,	// (0x00019ef0) list_single_uniindi_pane_g1

0x7e56,	// (0x00019f03) list_single_uniindi_pane_t1

0xdc72,	// (0x0001fd1f) control_bg_pane

0x7e7b,	// (0x00019f28) bg_sctrl_sk_pane_cp1

0x7e84,	// (0x00019f31) bg_sctrl_sk_pane_cp2

0x7e8d,	// (0x00019f3a) control_bg_pane_g1

0x7e96,	// (0x00019f43) control_bg_pane_g2

0x0001,

0xfd44,	// (0x00021df1) control_bg_pane_g

0x2c6c,	// (0x00014d19) cell_indicator_nsta_pane_g1_ParamLimits

0xc904,	// (0x0001e9b1) cell_indicator_nsta_pane_g2_ParamLimits

0xfacc,	// (0x00021b79) cell_indicator_nsta_pane_g_ParamLimits

0x415e,	// (0x0001620b) form2_midp_time_pane_t1_ParamLimits

0x61ea,	// (0x00018297) main_idle_act4_pane_ParamLimits

0x61ea,	// (0x00018297) main_idle_act4_pane

0xbd5b,	// (0x0001de08) popup_tb_extension_window_ParamLimits

0xd1f6,	// (0x0001f2a3) tb_ext_find_pane_ParamLimits

0xd1f6,	// (0x0001f2a3) tb_ext_find_pane

0x7e9f,	// (0x00019f4c) ai_gene_pane_1_cp1

0xf40c,	// (0x000214b9) ai_gene_pane_2_cp1

0x7ea7,	// (0x00019f54) list_single_idle_plugin_calendar_pane

0x7eb0,	// (0x00019f5d) list_single_idle_plugin_notification_pane

0x7eb9,	// (0x00019f66) list_single_idle_plugin_player_pane

0xd24d,	// (0x0001f2fa) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd24d,	// (0x0001f2fa) list_single_idle_plugin_shortcut_pane

0xd275,	// (0x0001f322) main_idle_act4_pane_t1

0xd28b,	// (0x0001f338) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x00021df6) main_idle_act4_pane_t

0xd2a1,	// (0x0001f34e) middle_sk_idle_act4_pane_ParamLimits

0xd2a1,	// (0x0001f34e) middle_sk_idle_act4_pane

0xd2bd,	// (0x0001f36a) popup_clock_digital_analogue_window_cp2

0xd2e3,	// (0x0001f390) shortcut_wheel_idle_act4_pane_ParamLimits

0xd2e3,	// (0x0001f390) shortcut_wheel_idle_act4_pane

0x618f,	// (0x0001823c) shortcut_wheel_idle_act4_pane_g1

0x618f,	// (0x0001823c) shortcut_wheel_idle_act4_pane_g2

0x618f,	// (0x0001823c) shortcut_wheel_idle_act4_pane_g3

0x618f,	// (0x0001823c) shortcut_wheel_idle_act4_pane_g4

0x618f,	// (0x0001823c) shortcut_wheel_idle_act4_pane_g5

0x7f4c,	// (0x00019ff9) shortcut_wheel_idle_act4_pane_g6

0x7f54,	// (0x0001a001) shortcut_wheel_idle_act4_pane_g7

0x7f5c,	// (0x0001a009) shortcut_wheel_idle_act4_pane_g8

0x7f64,	// (0x0001a011) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x00021dfb) shortcut_wheel_idle_act4_pane_g

0x6299,	// (0x00018346) middle_sk_idle_act4_pane_g1_ParamLimits

0x6299,	// (0x00018346) middle_sk_idle_act4_pane_g1

0xd35e,	// (0x0001f40b) middle_sk_idle_act4_pane_g2_ParamLimits

0xd35e,	// (0x0001f40b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x00021e1e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x00021e1e) middle_sk_idle_act4_pane_g

0xd376,	// (0x0001f423) middle_sk_idle_act4_pane_t1_ParamLimits

0xd376,	// (0x0001f423) middle_sk_idle_act4_pane_t1

0xd3a5,	// (0x0001f452) grid_ai_shortcut_pane_ParamLimits

0xd3a5,	// (0x0001f452) grid_ai_shortcut_pane

0xd3c2,	// (0x0001f46f) list_highlight_pane_cp16_ParamLimits

0xd3c2,	// (0x0001f46f) list_highlight_pane_cp16

0xd3cf,	// (0x0001f47c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd3cf,	// (0x0001f47c) list_single_idle_plugin_shortcut_pane_g1

0xd3db,	// (0x0001f488) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd3db,	// (0x0001f488) list_single_idle_plugin_shortcut_pane_g2

0xd3f7,	// (0x0001f4a4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd3f7,	// (0x0001f4a4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x00021e23) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x00021e23) list_single_idle_plugin_shortcut_pane_g

0xd40c,	// (0x0001f4b9) cell_ai_shortcut_pane_ParamLimits

0xd40c,	// (0x0001f4b9) cell_ai_shortcut_pane

0xd422,	// (0x0001f4cf) cell_ai_shortcut_pane_g1_ParamLimits

0xd422,	// (0x0001f4cf) cell_ai_shortcut_pane_g1

0x7e9f,	// (0x00019f4c) ai_gene_pane_1_cp2

0x8091,	// (0x0001a13e) ai_gene_pane_2_cp2

0x8099,	// (0x0001a146) list_highlight_pane_cp15

0x80a2,	// (0x0001a14f) list_single_idle_plugin_calendar_pane_g1

0x8099,	// (0x0001a146) list_highlight_pane_cp17

0x80aa,	// (0x0001a157) list_single_idle_plugin_calendar_pane_g1_copy1

0x80b2,	// (0x0001a15f) list_single_idle_plugin_player_pane_g1

0x2544,	// (0x000145f1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x00021e2a) list_single_idle_plugin_player_pane_g

0x80ba,	// (0x0001a167) list_single_idle_plugin_player_pane_t1

0x80c8,	// (0x0001a175) list_single_idle_plugin_player_pane_t2

0x80d6,	// (0x0001a183) list_single_idle_plugin_player_pane_t3

0x80e4,	// (0x0001a191) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x00021e2f) list_single_idle_plugin_player_pane_t

0x80f2,	// (0x0001a19f) wait_bar_pane_cp15

0x80fa,	// (0x0001a1a7) grid_ai_notification_pane

0x2544,	// (0x000145f1) list_single_idle_plugin_notification_pane_g1

0xd444,	// (0x0001f4f1) cell_ai_notification_pane_ParamLimits

0xd444,	// (0x0001f4f1) cell_ai_notification_pane

0x8110,	// (0x0001a1bd) cell_ai_notification_pane_g1

0x8118,	// (0x0001a1c5) cell_ai_notification_pane_t1

0xd451,	// (0x0001f4fe) tb_ext_find_button_pane

0xd459,	// (0x0001f506) tb_ext_find_pane_g1

0xd461,	// (0x0001f50e) tb_ext_find_pane_t1

0xeecd,	// (0x00020f7a) tb_ext_find_button_pane_g1

0x8144,	// (0x0001a1f1) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x00021e38) tb_ext_find_button_pane_g

0xd275,	// (0x0001f322) main_idle_act4_pane_t1_ParamLimits

0xd28b,	// (0x0001f338) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x00021df6) main_idle_act4_pane_t_ParamLimits

0xd2bd,	// (0x0001f36a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd2d3,	// (0x0001f380) sat_plugin_idle_act4_pane_ParamLimits

0xd2d3,	// (0x0001f380) sat_plugin_idle_act4_pane

0xd46f,	// (0x0001f51c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd46f,	// (0x0001f51c) sat_plugin_idle_act4_pane_t1

0xd487,	// (0x0001f534) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd487,	// (0x0001f534) sat_plugin_idle_act4_pane_t2

0xd49f,	// (0x0001f54c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd49f,	// (0x0001f54c) sat_plugin_idle_act4_pane_t3

0xd4b7,	// (0x0001f564) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd4b7,	// (0x0001f564) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x00021e3d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x00021e3d) sat_plugin_idle_act4_pane_t

0x4640,	// (0x000166ed) popup_battery_window_ParamLimits

0x4640,	// (0x000166ed) popup_battery_window

0xdec1,	// (0x0001ff6e) bg_popup_sub_pane_cp25_ParamLimits

0xdec1,	// (0x0001ff6e) bg_popup_sub_pane_cp25

0x8199,	// (0x0001a246) popup_battery_window_g1_ParamLimits

0x8199,	// (0x0001a246) popup_battery_window_g1

0x81a5,	// (0x0001a252) popup_battery_window_t1_ParamLimits

0x81a5,	// (0x0001a252) popup_battery_window_t1

0x81b7,	// (0x0001a264) popup_battery_window_t2_ParamLimits

0x81b7,	// (0x0001a264) popup_battery_window_t2

0x0001,

0xfd99,	// (0x00021e46) popup_battery_window_t_ParamLimits

0xfd99,	// (0x00021e46) popup_battery_window_t

0xb678,	// (0x0001d725) midp_canvas_pane_ParamLimits

0xb6cd,	// (0x0001d77a) midp_keypad_pane_ParamLimits

0xb6cd,	// (0x0001d77a) midp_keypad_pane

0x0dd6,	// (0x00012e83) main_midp_pane_ParamLimits

0x2cb1,	// (0x00014d5e) signal_pane_g2_cp_ParamLimits

0xd4cf,	// (0x0001f57c) aid_size_cell_midp_keypad_ParamLimits

0xd4cf,	// (0x0001f57c) aid_size_cell_midp_keypad

0xd4ed,	// (0x0001f59a) midp_keyp_game_grid_pane_ParamLimits

0xd4ed,	// (0x0001f59a) midp_keyp_game_grid_pane

0xd50c,	// (0x0001f5b9) midp_keyp_rocker_pane_ParamLimits

0xd50c,	// (0x0001f5b9) midp_keyp_rocker_pane

0xd54d,	// (0x0001f5fa) midp_keyp_sk_left_pane_ParamLimits

0xd54d,	// (0x0001f5fa) midp_keyp_sk_left_pane

0xd59f,	// (0x0001f64c) midp_keyp_sk_right_pane_ParamLimits

0xd59f,	// (0x0001f64c) midp_keyp_sk_right_pane

0xdc72,	// (0x0001fd1f) bg_button_pane_cp03

0xd5eb,	// (0x0001f698) midp_keyp_sk_left_pane_g1

0xdc72,	// (0x0001fd1f) bg_button_pane_cp04

0xd5eb,	// (0x0001f698) midp_keyp_sk_right_pane_g1

0x618f,	// (0x0001823c) midp_keyp_rocker_pane_g1

0xd5f4,	// (0x0001f6a1) keyp_game_cell_pane_ParamLimits

0xd5f4,	// (0x0001f6a1) keyp_game_cell_pane

0xdc72,	// (0x0001fd1f) bg_button_pane_cp02

0xd616,	// (0x0001f6c3) keyp_game_cell_pane_g1

0xaf8a,	// (0x0001d037) popup_fep_vkb2_window_ParamLimits

0xaf8a,	// (0x0001d037) popup_fep_vkb2_window

0xd61f,	// (0x0001f6cc) aid_size_cell_vkb2_ParamLimits

0xd61f,	// (0x0001f6cc) aid_size_cell_vkb2

0xd655,	// (0x0001f702) popup_fep_vkb2_window_g1_ParamLimits

0xd655,	// (0x0001f702) popup_fep_vkb2_window_g1

0xd6a5,	// (0x0001f752) vkb2_area_bottom_pane_ParamLimits

0xd6a5,	// (0x0001f752) vkb2_area_bottom_pane

0xd6e3,	// (0x0001f790) vkb2_area_keypad_pane_ParamLimits

0xd6e3,	// (0x0001f790) vkb2_area_keypad_pane

0xd721,	// (0x0001f7ce) vkb2_area_top_pane_ParamLimits

0xd721,	// (0x0001f7ce) vkb2_area_top_pane

0xd79d,	// (0x0001f84a) vkb2_top_entry_pane_ParamLimits

0xd79d,	// (0x0001f84a) vkb2_top_entry_pane

0xd7ca,	// (0x0001f877) vkb2_top_grid_left_pane_ParamLimits

0xd7ca,	// (0x0001f877) vkb2_top_grid_left_pane

0xd7ea,	// (0x0001f897) vkb2_top_grid_right_pane_ParamLimits

0xd7ea,	// (0x0001f897) vkb2_top_grid_right_pane

0x84f2,	// (0x0001a59f) vkb2_cell_keypad_pane_ParamLimits

0x84f2,	// (0x0001a59f) vkb2_cell_keypad_pane

0xd830,	// (0x0001f8dd) vkb2_area_bottom_grid_pane_ParamLimits

0xd830,	// (0x0001f8dd) vkb2_area_bottom_grid_pane

0xd856,	// (0x0001f903) vkb2_area_bottom_pane_g1_ParamLimits

0xd856,	// (0x0001f903) vkb2_area_bottom_pane_g1

0xd87c,	// (0x0001f929) vkb2_area_bottom_pane_g2_ParamLimits

0xd87c,	// (0x0001f929) vkb2_area_bottom_pane_g2

0xd8ad,	// (0x0001f95a) vkb2_area_bottom_pane_g3_ParamLimits

0xd8ad,	// (0x0001f95a) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x00021e4b) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x00021e4b) vkb2_area_bottom_pane_g

0x866a,	// (0x0001a717) vkb2_top_cell_left_pane_ParamLimits

0x866a,	// (0x0001a717) vkb2_top_cell_left_pane

0xd903,	// (0x0001f9b0) vkb2_top_entry_pane_g1_ParamLimits

0xd903,	// (0x0001f9b0) vkb2_top_entry_pane_g1

0xd911,	// (0x0001f9be) vkb2_top_entry_pane_t1_ParamLimits

0xd911,	// (0x0001f9be) vkb2_top_entry_pane_t1

0x86d2,	// (0x0001a77f) vkb2_top_entry_pane_t2_ParamLimits

0x86d2,	// (0x0001a77f) vkb2_top_entry_pane_t2

0x8704,	// (0x0001a7b1) vkb2_top_entry_pane_t3_ParamLimits

0x8704,	// (0x0001a7b1) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x00021e52) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x00021e52) vkb2_top_entry_pane_t

0xd94a,	// (0x0001f9f7) vkb2_top_grid_right_pane_g1_ParamLimits

0xd94a,	// (0x0001f9f7) vkb2_top_grid_right_pane_g1

0x875d,	// (0x0001a80a) vkb2_top_grid_right_pane_g2_ParamLimits

0x875d,	// (0x0001a80a) vkb2_top_grid_right_pane_g2

0x8775,	// (0x0001a822) vkb2_top_grid_right_pane_g3_ParamLimits

0x8775,	// (0x0001a822) vkb2_top_grid_right_pane_g3

0xd960,	// (0x0001fa0d) vkb2_top_grid_right_pane_g4_ParamLimits

0xd960,	// (0x0001fa0d) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x00021e59) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x00021e59) vkb2_top_grid_right_pane_g

0x87a3,	// (0x0001a850) vkb2_top_cell_left_pane_g1

0x87ba,	// (0x0001a867) vkb2_cell_keypad_pane_g1_ParamLimits

0x87ba,	// (0x0001a867) vkb2_cell_keypad_pane_g1

0x87c8,	// (0x0001a875) vkb2_cell_keypad_pane_t1_ParamLimits

0x87c8,	// (0x0001a875) vkb2_cell_keypad_pane_t1

0x87df,	// (0x0001a88c) vkb2_cell_bottom_grid_pane_ParamLimits

0x87df,	// (0x0001a88c) vkb2_cell_bottom_grid_pane

0x8818,	// (0x0001a8c5) vkb2_cell_bottom_grid_pane_g1

0xd302,	// (0x0001f3af) aid_call2_pane_cp02

0xd30a,	// (0x0001f3b7) aid_call_pane_cp02

0xd312,	// (0x0001f3bf) clock_digital_number_pane_cp10

0xd31a,	// (0x0001f3c7) clock_digital_number_pane_cp11

0xd322,	// (0x0001f3cf) clock_digital_number_pane_cp12

0xd32a,	// (0x0001f3d7) clock_digital_number_pane_cp13

0xd332,	// (0x0001f3df) clock_digital_separator_pane_cp10

0xeecd,	// (0x00020f7a) popup_clock_digital_analogue_window_cp2_g1

0xeecd,	// (0x00020f7a) popup_clock_digital_analogue_window_cp2_g2

0xd33a,	// (0x0001f3e7) popup_clock_digital_analogue_window_cp2_g3

0xeecd,	// (0x00020f7a) popup_clock_digital_analogue_window_cp2_g4

0xd33a,	// (0x0001f3e7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x00021e0e) popup_clock_digital_analogue_window_cp2_g

0xd342,	// (0x0001f3ef) popup_clock_digital_analogue_window_cp2_t1

0xd350,	// (0x0001f3fd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x00021e19) popup_clock_digital_analogue_window_cp2_t

0x618f,	// (0x0001823c) clock_digital_number_pane_cp10_g1

0x618f,	// (0x0001823c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5b,	// (0x00021c08) clock_digital_number_pane_cp10_g

0x618f,	// (0x0001823c) clock_digital_separator_pane_cp10_g1

0x618f,	// (0x0001823c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5b,	// (0x00021c08) clock_digital_separator_pane_cp10_g

0x7de9,	// (0x00019e96) uniindi_top_pane_g3

0x7dfa,	// (0x00019ea7) uniindi_top_pane_g4

0x855d,	// (0x0001a60a) vkb2_row_keypad_pane_ParamLimits

0x855d,	// (0x0001a60a) vkb2_row_keypad_pane

0x8834,	// (0x0001a8e1) vkb2_cell_t_keypad_pane_ParamLimits

0x8834,	// (0x0001a8e1) vkb2_cell_t_keypad_pane

0x8841,	// (0x0001a8ee) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8841,	// (0x0001a8ee) vkb2_cell_t_keypad_pane_cp08

0x8851,	// (0x0001a8fe) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8851,	// (0x0001a8fe) vkb2_cell_t_keypad_pane_cp09

0x8862,	// (0x0001a90f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8862,	// (0x0001a90f) vkb2_cell_t_keypad_pane_cp01

0x8872,	// (0x0001a91f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8872,	// (0x0001a91f) vkb2_cell_t_keypad_pane_cp02

0x8882,	// (0x0001a92f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8882,	// (0x0001a92f) vkb2_cell_t_keypad_pane_cp03

0x8892,	// (0x0001a93f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8892,	// (0x0001a93f) vkb2_cell_t_keypad_pane_cp04

0x88a2,	// (0x0001a94f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x88a2,	// (0x0001a94f) vkb2_cell_t_keypad_pane_cp05

0x88b2,	// (0x0001a95f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x88b2,	// (0x0001a95f) vkb2_cell_t_keypad_pane_cp06

0x88c2,	// (0x0001a96f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x88c2,	// (0x0001a96f) vkb2_cell_t_keypad_pane_cp07

0x88d2,	// (0x0001a97f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x88d2,	// (0x0001a97f) vkb2_cell_t_keypad_pane_cp10

0x65cf,	// (0x0001867c) vkb2_cell_t_keypad_pane_g1

0x88e7,	// (0x0001a994) vkb2_cell_t_keypad_pane_t1

0xdc72,	// (0x0001fd1f) popup_grid_graphic2_window

0xd976,	// (0x0001fa23) aid_size_cell_graphic2_ParamLimits

0xd976,	// (0x0001fa23) aid_size_cell_graphic2

0x1697,	// (0x00013744) bg_popup_window_pane_cp21_ParamLimits

0x1697,	// (0x00013744) bg_popup_window_pane_cp21

0xd9a8,	// (0x0001fa55) graphic2_pages_pane_ParamLimits

0xd9a8,	// (0x0001fa55) graphic2_pages_pane

0xd9f1,	// (0x0001fa9e) grid_graphic2_control_pane_ParamLimits

0xd9f1,	// (0x0001fa9e) grid_graphic2_control_pane

0xda1f,	// (0x0001facc) grid_graphic2_pane_ParamLimits

0xda1f,	// (0x0001facc) grid_graphic2_pane

0xda7e,	// (0x0001fb2b) cell_graphic2_pane

0xdc72,	// (0x0001fd1f) main_comp_mode_pane

0x7617,	// (0x000196c4) list_ai3_gene_pane_ParamLimits

0xcfee,	// (0x0001f09b) bg_popup_window_pane_cp19_ParamLimits

0x7981,	// (0x00019a2e) bg_touch_area_indi_pane_ParamLimits

0x7981,	// (0x00019a2e) bg_touch_area_indi_pane

0x7997,	// (0x00019a44) bg_touch_area_indi_pane_cp01_ParamLimits

0x7997,	// (0x00019a44) bg_touch_area_indi_pane_cp01

0x79ad,	// (0x00019a5a) bg_touch_area_indi_pane_cp02_ParamLimits

0x79ad,	// (0x00019a5a) bg_touch_area_indi_pane_cp02

0x79c3,	// (0x00019a70) bg_touch_area_indi_pane_cp03_ParamLimits

0x79c3,	// (0x00019a70) bg_touch_area_indi_pane_cp03

0x79d9,	// (0x00019a86) popup_slider_window_g1_ParamLimits

0x79f5,	// (0x00019aa2) popup_slider_window_g2_ParamLimits

0x7a11,	// (0x00019abe) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x00021da3) popup_slider_window_g_ParamLimits

0x7a6d,	// (0x00019b1a) popup_slider_window_t1_ParamLimits

0x7adf,	// (0x00019b8c) small_volume_slider_vertical_pane_ParamLimits

0xda7e,	// (0x0001fb2b) cell_graphic2_pane_ParamLimits

0xdac7,	// (0x0001fb74) bg_button_pane_cp10_ParamLimits

0xdac7,	// (0x0001fb74) bg_button_pane_cp10

0xdad8,	// (0x0001fb85) bg_button_pane_cp11_ParamLimits

0xdad8,	// (0x0001fb85) bg_button_pane_cp11

0xdae9,	// (0x0001fb96) graphic2_pages_pane_g1_ParamLimits

0xdae9,	// (0x0001fb96) graphic2_pages_pane_g1

0xdb04,	// (0x0001fbb1) graphic2_pages_pane_g2_ParamLimits

0xdb04,	// (0x0001fbb1) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x00021e67) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x00021e67) graphic2_pages_pane_g

0xdb1c,	// (0x0001fbc9) graphic2_pages_pane_t1_ParamLimits

0xdb1c,	// (0x0001fbc9) graphic2_pages_pane_t1

0xdb34,	// (0x0001fbe1) cell_graphic2_control_pane_ParamLimits

0xdb34,	// (0x0001fbe1) cell_graphic2_control_pane

0xdb4e,	// (0x0001fbfb) cell_graphic2_pane_g1_ParamLimits

0xdb4e,	// (0x0001fbfb) cell_graphic2_pane_g1

0x642c,	// (0x000184d9) cell_graphic2_pane_g2_ParamLimits

0x642c,	// (0x000184d9) cell_graphic2_pane_g2

0xdb5b,	// (0x0001fc08) cell_graphic2_pane_g3_ParamLimits

0xdb5b,	// (0x0001fc08) cell_graphic2_pane_g3

0x6439,	// (0x000184e6) cell_graphic2_pane_g4_ParamLimits

0x6439,	// (0x000184e6) cell_graphic2_pane_g4

0xdb68,	// (0x0001fc15) cell_graphic2_pane_g5_ParamLimits

0xdb68,	// (0x0001fc15) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x00021e6c) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x00021e6c) cell_graphic2_pane_g

0xdb88,	// (0x0001fc35) cell_graphic2_pane_t1_ParamLimits

0xdb88,	// (0x0001fc35) cell_graphic2_pane_t1

0x1c7f,	// (0x00013d2c) grid_highlight_pane_cp11_ParamLimits

0x1c7f,	// (0x00013d2c) grid_highlight_pane_cp11

0xe9bf,	// (0x00020a6c) bg_button_pane_cp05

0xdb9f,	// (0x0001fc4c) cell_graphic2_control_pane_g1

0x618f,	// (0x0001823c) bg_touch_area_indi_pane_g1

0x8b01,	// (0x0001abae) aid_cmod_rocker_key_size

0x8b0b,	// (0x0001abb8) aid_cmode_itu_key_size

0x8b15,	// (0x0001abc2) main_cmode_video_pane

0x8b1d,	// (0x0001abca) main_comp_mode_itu_pane

0x8b27,	// (0x0001abd4) main_comp_mode_rocker_pane

0x8b2f,	// (0x0001abdc) cell_cmode_rocker_pane_ParamLimits

0x8b2f,	// (0x0001abdc) cell_cmode_rocker_pane

0x8b41,	// (0x0001abee) cell_cmode_itu_pane_ParamLimits

0x8b41,	// (0x0001abee) cell_cmode_itu_pane

0xe9bf,	// (0x00020a6c) bg_button_pane_cp06_ParamLimits

0xe9bf,	// (0x00020a6c) bg_button_pane_cp06

0x65cf,	// (0x0001867c) cell_cmode_rocker_pane_g1_ParamLimits

0x65cf,	// (0x0001867c) cell_cmode_rocker_pane_g1

0x7c53,	// (0x00019d00) cell_cmode_rocker_pane_g2_ParamLimits

0x7c53,	// (0x00019d00) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x00021e77) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x00021e77) cell_cmode_rocker_pane_g

0xdc72,	// (0x0001fd1f) bg_button_pane_cp07

0x8b56,	// (0x0001ac03) cell_cmode_itu_pane_g1

0x8b5f,	// (0x0001ac0c) cell_cmode_itu_pane_t1

0x8b6d,	// (0x0001ac1a) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x00021e7c) cell_cmode_itu_pane_t

0x7e6b,	// (0x00019f18) aid_touch_ctrl_left

0x7e73,	// (0x00019f20) aid_touch_ctrl_right

0xdc72,	// (0x0001fd1f) compa_mode_pane

0xdbac,	// (0x0001fc59) aid_cmod_rocker_key_size_cp

0xdbb6,	// (0x0001fc63) aid_cmode_itu_key_size_cp

0x8b8f,	// (0x0001ac3c) compa_mode_pane_g1

0x8b97,	// (0x0001ac44) compa_mode_pane_g2

0x8b9f,	// (0x0001ac4c) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x00021e81) compa_mode_pane_g

0xdbc0,	// (0x0001fc6d) main_comp_mode_itu_pane_cp

0xdbca,	// (0x0001fc77) main_comp_mode_rocker_pane_cp

0xdbd4,	// (0x0001fc81) cell_cmode_itu_pane_cp_ParamLimits

0xdbd4,	// (0x0001fc81) cell_cmode_itu_pane_cp

0xdbe9,	// (0x0001fc96) cell_cmode_rocker_pane_cp_ParamLimits

0xdbe9,	// (0x0001fc96) cell_cmode_rocker_pane_cp

0xe9bf,	// (0x00020a6c) bg_button_pane_cp06_cp_ParamLimits

0xe9bf,	// (0x00020a6c) bg_button_pane_cp06_cp

0x65cf,	// (0x0001867c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x65cf,	// (0x0001867c) cell_cmode_rocker_pane_g1_cp

0x618f,	// (0x0001823c) cell_cmode_rocker_pane_g2_cp

0xdc72,	// (0x0001fd1f) bg_button_pane_cp07_cp

0xdbfb,	// (0x0001fca8) cell_cmode_itu_pane_g1_cp

0xdc04,	// (0x0001fcb1) cell_cmode_itu_pane_t1_cp

0xdc12,	// (0x0001fcbf) cell_cmode_itu_pane_t2_cp

0xc6ff,	// (0x0001e7ac) settings_code_pane_cp2

0xdd62,	// (0x0001fe0f) bg_popup_window_pane_cp3_ParamLimits

0xe099,	// (0x00020146) heading_pane_cp3_ParamLimits

0xe0a5,	// (0x00020152) listscroll_popup_graphic_pane_ParamLimits

0x61f8,	// (0x000182a5) fep_hwr_aid_pane_ParamLimits

0x7b57,	// (0x00019c04) aid_touch_sctrl_top_ParamLimits

0x7b64,	// (0x00019c11) sctrl_sk_top_pane_g1_ParamLimits

0x65cf,	// (0x0001867c) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x00021dbc) sctrl_sk_top_pane_g_ParamLimits

0x7b71,	// (0x00019c1e) sctrl_sk_top_pane_t1_ParamLimits

0x7b57,	// (0x00019c04) aid_touch_sctrl_bottom_ParamLimits

0x7b71,	// (0x00019c1e) sctrl_sk_bottom_pane_t1_ParamLimits

0x7db5,	// (0x00019e62) aid_area_touch_clock

0xd75f,	// (0x0001f80c) aid_vkb2_area_top_pane_cell_ParamLimits

0xd75f,	// (0x0001f80c) aid_vkb2_area_top_pane_cell

0xd80a,	// (0x0001f8b7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd80a,	// (0x0001f8b7) aid_vkb2_area_bottom_pane_cell

0x868a,	// (0x0001a737) popup_char_count_window

0x8c03,	// (0x0001acb0) popup_char_count_window_g1

0x8c0c,	// (0x0001acb9) popup_char_count_window_g2

0x8c15,	// (0x0001acc2) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x00021e88) popup_char_count_window_g

0x8c1e,	// (0x0001accb) popup_char_count_window_t1

0x8342,	// (0x0001a3ef) popup_fep_char_preview_window_ParamLimits

0x8342,	// (0x0001a3ef) popup_fep_char_preview_window

0xd77f,	// (0x0001f82c) vkb2_top_candi_pane_ParamLimits

0xd77f,	// (0x0001f82c) vkb2_top_candi_pane

0xdc20,	// (0x0001fccd) cell_vkb2_top_candi_pane_ParamLimits

0xdc20,	// (0x0001fccd) cell_vkb2_top_candi_pane

0x1697,	// (0x00013744) bg_popup_fep_char_preview_window_ParamLimits

0x1697,	// (0x00013744) bg_popup_fep_char_preview_window

0x8c65,	// (0x0001ad12) popup_fep_char_preview_window_t1_ParamLimits

0x8c65,	// (0x0001ad12) popup_fep_char_preview_window_t1

0x8c9f,	// (0x0001ad4c) bg_popup_fep_char_preview_window_g1

0x8ca7,	// (0x0001ad54) bg_popup_fep_char_preview_window_g2

0x8caf,	// (0x0001ad5c) bg_popup_fep_char_preview_window_g3

0x8cb7,	// (0x0001ad64) bg_popup_fep_char_preview_window_g4

0x8cbf,	// (0x0001ad6c) bg_popup_fep_char_preview_window_g5

0x8cc7,	// (0x0001ad74) bg_popup_fep_char_preview_window_g6

0x8ccf,	// (0x0001ad7c) bg_popup_fep_char_preview_window_g7

0x8cd7,	// (0x0001ad84) bg_popup_fep_char_preview_window_g8

0x8cdf,	// (0x0001ad8c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x00021e8f) bg_popup_fep_char_preview_window_g

0x65cf,	// (0x0001867c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x65cf,	// (0x0001867c) cell_vkb2_top_candi_pane_g1

0x6926,	// (0x000189d3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6926,	// (0x000189d3) cell_vkb2_top_candi_pane_g2

0x6947,	// (0x000189f4) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6947,	// (0x000189f4) cell_vkb2_top_candi_pane_g3

0x8ce7,	// (0x0001ad94) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8ce7,	// (0x0001ad94) cell_vkb2_top_candi_pane_g4

0x8d08,	// (0x0001adb5) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8d08,	// (0x0001adb5) cell_vkb2_top_candi_pane_g5

0x7c53,	// (0x00019d00) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7c53,	// (0x00019d00) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x00021ea2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x00021ea2) cell_vkb2_top_candi_pane_g

0x8d29,	// (0x0001add6) cell_vkb2_top_candi_pane_t1

0x2211,	// (0x000142be) aid_size_touch_slider_mark_ParamLimits

0x2211,	// (0x000142be) aid_size_touch_slider_mark

0xd9dc,	// (0x0001fa89) grid_graphic2_catg_pane_ParamLimits

0xd9dc,	// (0x0001fa89) grid_graphic2_catg_pane

0xda53,	// (0x0001fb00) popup_grid_graphic2_window_t1_ParamLimits

0xda53,	// (0x0001fb00) popup_grid_graphic2_window_t1

0xda68,	// (0x0001fb15) popup_grid_graphic2_window_t2_ParamLimits

0xda68,	// (0x0001fb15) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x00021e62) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x00021e62) popup_grid_graphic2_window_t

0xe9bf,	// (0x00020a6c) bg_button_pane_cp05_ParamLimits

0xdb9f,	// (0x0001fc4c) cell_graphic2_control_pane_g1_ParamLimits

0x7e31,	// (0x00019ede) cell_graphic2_catg_pane_ParamLimits

0x7e31,	// (0x00019ede) cell_graphic2_catg_pane

0xdc72,	// (0x0001fd1f) bg_button_pane_cp12

0xe2c6,	// (0x00020373) cell_graphic2_catg_pane_g1

0x7d81,	// (0x00019e2e) cell_tb_ext_pane_t1_ParamLimits

0x871a,	// (0x0001a7c7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x871a,	// (0x0001a7c7) vkb2_top_cell_right_narrow_pane

0x8732,	// (0x0001a7df) vkb2_top_cell_right_wide_pane_ParamLimits

0x8732,	// (0x0001a7df) vkb2_top_cell_right_wide_pane

0x61ea,	// (0x00018297) bg_vkb2_func_pane_ParamLimits

0x61ea,	// (0x00018297) bg_vkb2_func_pane

0x87a3,	// (0x0001a850) vkb2_top_cell_left_pane_g1_ParamLimits

0x61ea,	// (0x00018297) bg_vkb2_fuc_pane_cp03_ParamLimits

0x61ea,	// (0x00018297) bg_vkb2_fuc_pane_cp03

0x8818,	// (0x0001a8c5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x10fe,	// (0x000131ab) bg_vkb2_func_pane_g1

0x10f6,	// (0x000131a3) bg_vkb2_func_pane_g2

0x1106,	// (0x000131b3) bg_vkb2_func_pane_g3

0x110e,	// (0x000131bb) bg_vkb2_func_pane_g4

0x1116,	// (0x000131c3) bg_vkb2_func_pane_g5

0x111e,	// (0x000131cb) bg_vkb2_func_pane_g6

0x112e,	// (0x000131db) bg_vkb2_func_pane_g7

0x1126,	// (0x000131d3) bg_vkb2_func_pane_g8

0x10ee,	// (0x0001319b) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x00021eaf) bg_vkb2_func_pane_g

0x61ea,	// (0x00018297) bg_vkb2_fuc_pane_cp01_ParamLimits

0x61ea,	// (0x00018297) bg_vkb2_fuc_pane_cp01

0x87a3,	// (0x0001a850) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x87a3,	// (0x0001a850) vkb2_top_cell_right_wide_pane_g1

0x61ea,	// (0x00018297) bg_vkb2_fuc_pane_cp02_ParamLimits

0x61ea,	// (0x00018297) bg_vkb2_fuc_pane_cp02

0x8818,	// (0x0001a8c5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8818,	// (0x0001a8c5) vkb2_top_cell_right_narrow_pane_g1

0xcf3c,	// (0x0001efe9) aid_touch_area_decrease_ParamLimits

0xcf3c,	// (0x0001efe9) aid_touch_area_decrease

0xcf6a,	// (0x0001f017) aid_touch_area_increase_ParamLimits

0xcf6a,	// (0x0001f017) aid_touch_area_increase

0xcf92,	// (0x0001f03f) aid_touch_area_mute_ParamLimits

0xcf92,	// (0x0001f03f) aid_touch_area_mute

0xcfba,	// (0x0001f067) aid_touch_area_slider_ParamLimits

0xcfba,	// (0x0001f067) aid_touch_area_slider

0xcffa,	// (0x0001f0a7) popup_slider_window_g4_ParamLimits

0xcffa,	// (0x0001f0a7) popup_slider_window_g4

0xd022,	// (0x0001f0cf) popup_slider_window_g5_ParamLimits

0xd022,	// (0x0001f0cf) popup_slider_window_g5

0xd056,	// (0x0001f103) popup_slider_window_g6_ParamLimits

0xd056,	// (0x0001f103) popup_slider_window_g6

0x7a99,	// (0x00019b46) popup_slider_window_t2_ParamLimits

0x7a99,	// (0x00019b46) popup_slider_window_t2

0x0001,

0xfd03,	// (0x00021db0) popup_slider_window_t_ParamLimits

0xfd03,	// (0x00021db0) popup_slider_window_t

0xd072,	// (0x0001f11f) slider_pane_ParamLimits

0xd072,	// (0x0001f11f) slider_pane

0x8d5a,	// (0x0001ae07) slider_pane_g1_ParamLimits

0x8d5a,	// (0x0001ae07) slider_pane_g1

0x8d6e,	// (0x0001ae1b) slider_pane_g2_ParamLimits

0x8d6e,	// (0x0001ae1b) slider_pane_g2

0x8d84,	// (0x0001ae31) slider_pane_g3_ParamLimits

0x8d84,	// (0x0001ae31) slider_pane_g3

0x0003,

0xfe15,	// (0x00021ec2) slider_pane_g_ParamLimits

0xfe15,	// (0x00021ec2) slider_pane_g

0xbd97,	// (0x0001de44) popup_tb_float_extension_window_ParamLimits

0xbd97,	// (0x0001de44) popup_tb_float_extension_window

0x8db0,	// (0x0001ae5d) aid_size_cell_tb_float_ext

0xdc72,	// (0x0001fd1f) bg_popup_sub_window_cp28

0x8dbb,	// (0x0001ae68) grid_tb_float_ext_pane

0x8dc3,	// (0x0001ae70) cell_tb_float_ext_pane_ParamLimits

0x8dc3,	// (0x0001ae70) cell_tb_float_ext_pane

0x8ddb,	// (0x0001ae88) cell_tb_float_ext_pane_g1

0x8de4,	// (0x0001ae91) grid_highlight_pane_cp12

0xcaa8,	// (0x0001eb55) cell_last_hwr_side_pane_ParamLimits

0xcaa8,	// (0x0001eb55) cell_last_hwr_side_pane

0x618f,	// (0x0001823c) cell_last_hwr_side_pane_g1

0x8ded,	// (0x0001ae9a) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x00021ecb) cell_last_hwr_side_pane_g

0xd8de,	// (0x0001f98b) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd8de,	// (0x0001f98b) vkb2_area_bottom_space_btn_pane

0x65cf,	// (0x0001867c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x88e7,	// (0x0001a994) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8d29,	// (0x0001add6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8df6,	// (0x0001aea3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8df6,	// (0x0001aea3) vkb2_area_bottom_space_btn_pane_g1

0x8e2c,	// (0x0001aed9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8e2c,	// (0x0001aed9) vkb2_area_bottom_space_btn_pane_g2

0x8e62,	// (0x0001af0f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8e62,	// (0x0001af0f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x00021ed0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x00021ed0) vkb2_area_bottom_space_btn_pane_g

0x62a7,	// (0x00018354) cel_fep_hwr_func_pane_ParamLimits

0x62a7,	// (0x00018354) cel_fep_hwr_func_pane

0xca7d,	// (0x0001eb2a) cell_hwr_side_button_pane_ParamLimits

0xca7d,	// (0x0001eb2a) cell_hwr_side_button_pane

0x7db5,	// (0x00019e62) aid_area_touch_clock_ParamLimits

0xdec1,	// (0x0001ff6e) bg_uniindi_top_pane_ParamLimits

0x7dc7,	// (0x00019e74) uniindi_top_pane_g1_ParamLimits

0x7ddd,	// (0x00019e8a) uniindi_top_pane_g2_ParamLimits

0x7de9,	// (0x00019e96) uniindi_top_pane_g3_ParamLimits

0x7dfa,	// (0x00019ea7) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x00021de8) uniindi_top_pane_g_ParamLimits

0x7e07,	// (0x00019eb4) uniindi_top_pane_t1_ParamLimits

0xdec1,	// (0x0001ff6e) bg_vkb2_func_pane_cp01_ParamLimits

0xdec1,	// (0x0001ff6e) bg_vkb2_func_pane_cp01

0x8ea8,	// (0x0001af55) cel_fep_hwr_func_pane_g1_ParamLimits

0x8ea8,	// (0x0001af55) cel_fep_hwr_func_pane_g1

0xdec1,	// (0x0001ff6e) bg_vkb2_func_pane_cp02_ParamLimits

0xdec1,	// (0x0001ff6e) bg_vkb2_func_pane_cp02

0x8ea8,	// (0x0001af55) cell_hwr_side_button_pane_g1_ParamLimits

0x8ea8,	// (0x0001af55) cell_hwr_side_button_pane_g1

0x1012,	// (0x000130bf) status_pane_g4_ParamLimits

0x1012,	// (0x000130bf) status_pane_g4

0x102a,	// (0x000130d7) status_pane_t1

0x5f81,	// (0x0001802e) form2_midp_gauge_slider_cont_pane

0x5f89,	// (0x00018036) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc9d1,	// (0x0001ea7e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc9e3,	// (0x0001ea90) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0e,	// (0x00021bbb) form2_midp_gauge_slider_pane_t_ParamLimits

0x5fbf,	// (0x0001806c) form2_midp_slider_pane_ParamLimits

0x8302,	// (0x0001a3af) aid_size_cell_func_vkb2_ParamLimits

0x8302,	// (0x0001a3af) aid_size_cell_func_vkb2

0x8d9c,	// (0x0001ae49) slider_pane_g4_ParamLimits

0x8d9c,	// (0x0001ae49) slider_pane_g4

0xe2cf,	// (0x0002037c) form2_midp_gauge_slider_pane_t2_cp01

0xe2dd,	// (0x0002038a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe2dd,	// (0x0002038a) form2_midp_gauge_slider_pane_t3_cp01

0x8ee1,	// (0x0001af8e) form2_midp_slider_pane_cp01

0xdc72,	// (0x0001fd1f) navi_smil_pane

0x8f15,	// (0x0001afc2) navi_smil_pane_g1

0x8f1d,	// (0x0001afca) navi_smil_pane_t1

0x8eea,	// (0x0001af97) form2_midp_slider_pane_g1

0x8ef3,	// (0x0001afa0) form2_midp_slider_pane_g2

0x8efb,	// (0x0001afa8) form2_midp_slider_pane_g3

0x8eea,	// (0x0001af97) form2_midp_slider_pane_g4

0xe2fa,	// (0x000203a7) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x00021ed9) form2_midp_slider_pane_g

0x8e98,	// (0x0001af45) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8e98,	// (0x0001af45) vkb2_area_bottom_space_btn_pane_g4

0xbf39,	// (0x0001dfe6) lc0_navi_pane_ParamLimits

0xbf39,	// (0x0001dfe6) lc0_navi_pane

0xbfa3,	// (0x0001e050) lc0_stat_indi_pane_ParamLimits

0xbfa3,	// (0x0001e050) lc0_stat_indi_pane

0xbfb8,	// (0x0001e065) ls0_title_pane_ParamLimits

0xbfb8,	// (0x0001e065) ls0_title_pane

0xe9bf,	// (0x00020a6c) bg_popup_sub_pane_cp14_ParamLimits

0x7d9c,	// (0x00019e49) list_uniindi_pane_ParamLimits

0x7da8,	// (0x00019e55) uniindi_top_pane_ParamLimits

0x7e43,	// (0x00019ef0) list_single_uniindi_pane_g1_ParamLimits

0x7e56,	// (0x00019f03) list_single_uniindi_pane_t1_ParamLimits

0xe303,	// (0x000203b0) lc0_stat_clock_pane_ParamLimits

0xe303,	// (0x000203b0) lc0_stat_clock_pane

0xe310,	// (0x000203bd) lc0_stat_indi_pane_g1_ParamLimits

0xe310,	// (0x000203bd) lc0_stat_indi_pane_g1

0xe31d,	// (0x000203ca) lc0_stat_indi_pane_g2_ParamLimits

0xe31d,	// (0x000203ca) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x00021ee4) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x00021ee4) lc0_stat_indi_pane_g

0xe32a,	// (0x000203d7) lc0_uni_indicator_pane_ParamLimits

0xe32a,	// (0x000203d7) lc0_uni_indicator_pane

0x8f5f,	// (0x0001b00c) ls0_title_pane_g1_ParamLimits

0x8f5f,	// (0x0001b00c) ls0_title_pane_g1

0xe337,	// (0x000203e4) ls0_title_pane_t1_ParamLimits

0xe337,	// (0x000203e4) ls0_title_pane_t1

0xe365,	// (0x00020412) lc0_uni_indicator_pane_g1_ParamLimits

0xe365,	// (0x00020412) lc0_uni_indicator_pane_g1

0x8fbb,	// (0x0001b068) lc0_stat_clock_pane_t1

0xdc72,	// (0x0001fd1f) main_ai5_pane

0x8fc9,	// (0x0001b076) ai5_sk_pane_ParamLimits

0x8fc9,	// (0x0001b076) ai5_sk_pane

0xe37a,	// (0x00020427) cell_ai5_widget_pane_ParamLimits

0xe37a,	// (0x00020427) cell_ai5_widget_pane

0xe3e1,	// (0x0002048e) aid_size_cell_widget_grid

0x9043,	// (0x0001b0f0) bg_ai5_widget_pane_ParamLimits

0x9043,	// (0x0001b0f0) bg_ai5_widget_pane

0xe40f,	// (0x000204bc) cell_ai5_widget_pane_g2

0xe41f,	// (0x000204cc) cell_ai5_widget_pane_g3

0xe433,	// (0x000204e0) cell_ai5_widget_pane_g4

0xe43f,	// (0x000204ec) cell_ai5_widget_pane_g5

0xe44b,	// (0x000204f8) cell_ai5_widget_pane_g6

0xe457,	// (0x00020504) cell_ai5_widget_pane_g7

0xe49f,	// (0x0002054c) cell_ai5_widget_pane_t1_ParamLimits

0xe49f,	// (0x0002054c) cell_ai5_widget_pane_t1

0xe4bc,	// (0x00020569) cell_ai5_widget_pane_t2_ParamLimits

0xe4bc,	// (0x00020569) cell_ai5_widget_pane_t2

0xe4d4,	// (0x00020581) cell_ai5_widget_pane_t3_ParamLimits

0xe4d4,	// (0x00020581) cell_ai5_widget_pane_t3

0xe4ec,	// (0x00020599) cell_ai5_widget_pane_t4_ParamLimits

0xe4ec,	// (0x00020599) cell_ai5_widget_pane_t4

0xe506,	// (0x000205b3) cell_ai5_widget_pane_t5_ParamLimits

0xe506,	// (0x000205b3) cell_ai5_widget_pane_t5

0x9181,	// (0x0001b22e) cell_ai5_widget_pane_t6_ParamLimits

0x9181,	// (0x0001b22e) cell_ai5_widget_pane_t6

0x9193,	// (0x0001b240) cell_ai5_widget_pane_t7_ParamLimits

0x9193,	// (0x0001b240) cell_ai5_widget_pane_t7

0xe525,	// (0x000205d2) cell_ai5_widget_pane_t8_ParamLimits

0xe525,	// (0x000205d2) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x00021efe) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x00021efe) cell_ai5_widget_pane_t

0xe56d,	// (0x0002061a) grid_ai5_widget_pane

0xe9bf,	// (0x00020a6c) highlight_cell_ai5_widget_pane_ParamLimits

0xe9bf,	// (0x00020a6c) highlight_cell_ai5_widget_pane

0xe581,	// (0x0002062e) ai5_sk_left_pane

0xe58b,	// (0x00020638) ai5_sk_middle_pane

0xe595,	// (0x00020642) ai5_sk_right_pane

0x9228,	// (0x0001b2d5) bg_ai5_widget_pane_g1_ParamLimits

0x9228,	// (0x0001b2d5) bg_ai5_widget_pane_g1

0x9234,	// (0x0001b2e1) bg_ai5_widget_pane_g2_ParamLimits

0x9234,	// (0x0001b2e1) bg_ai5_widget_pane_g2

0x9240,	// (0x0001b2ed) bg_ai5_widget_pane_g3_ParamLimits

0x9240,	// (0x0001b2ed) bg_ai5_widget_pane_g3

0x924c,	// (0x0001b2f9) bg_ai5_widget_pane_g4_ParamLimits

0x924c,	// (0x0001b2f9) bg_ai5_widget_pane_g4

0x9258,	// (0x0001b305) bg_ai5_widget_pane_g5_ParamLimits

0x9258,	// (0x0001b305) bg_ai5_widget_pane_g5

0x9264,	// (0x0001b311) bg_ai5_widget_pane_g6_ParamLimits

0x9264,	// (0x0001b311) bg_ai5_widget_pane_g6

0x9270,	// (0x0001b31d) bg_ai5_widget_pane_g7_ParamLimits

0x9270,	// (0x0001b31d) bg_ai5_widget_pane_g7

0x927c,	// (0x0001b329) bg_ai5_widget_pane_g8_ParamLimits

0x927c,	// (0x0001b329) bg_ai5_widget_pane_g8

0x9288,	// (0x0001b335) bg_ai5_widget_pane_g9_ParamLimits

0x9288,	// (0x0001b335) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x00021f13) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x00021f13) bg_ai5_widget_pane_g

0xe59f,	// (0x0002064c) cell_shortcut_ai5_widget_pane_ParamLimits

0xe59f,	// (0x0002064c) cell_shortcut_ai5_widget_pane

0xddca,	// (0x0001fe77) bg_cell_shortcut_ai5_widget_pane

0xe5b1,	// (0x0002065e) cell_grid_ai5_widget_pane_g1

0x92cb,	// (0x0001b378) highlight_cell_shortcut_ai5_widget_pane

0x10f6,	// (0x000131a3) ai5_sk_left_pane_g1

0x92d3,	// (0x0001b380) ai5_sk_left_pane_g2

0x92db,	// (0x0001b388) ai5_sk_left_pane_g3

0x92e3,	// (0x0001b390) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x00021f26) ai5_sk_left_pane_g

0x92eb,	// (0x0001b398) ai5_sk_left_pane_t1

0x10fe,	// (0x000131ab) ai5_sk_right_pane_g1

0x92f9,	// (0x0001b3a6) ai5_sk_right_pane_g2

0x9301,	// (0x0001b3ae) ai5_sk_right_pane_g3

0x9309,	// (0x0001b3b6) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x00021f2f) ai5_sk_right_pane_g

0x9311,	// (0x0001b3be) ai5_sk_right_pane_t1

0x10fe,	// (0x000131ab) ai5_sk_middle_pane_g1

0x10f6,	// (0x000131a3) ai5_sk_middle_pane_g2

0x1116,	// (0x000131c3) ai5_sk_middle_pane_g3

0x9301,	// (0x0001b3ae) ai5_sk_middle_pane_g4

0x92db,	// (0x0001b388) ai5_sk_middle_pane_g5

0x931f,	// (0x0001b3cc) ai5_sk_middle_pane_g6

0xe5ba,	// (0x00020667) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x00021f38) ai5_sk_middle_pane_g

0xbe37,	// (0x0001dee4) aid_touch_area_size_lc0_ParamLimits

0xbe37,	// (0x0001dee4) aid_touch_area_size_lc0

0x6968,	// (0x00018a15) cell_hwr_candidate_pane_t1_ParamLimits

0x0f47,	// (0x00012ff4) aid_touch_navi_pane

0xc0a4,	// (0x0001e151) status_dt_navi_pane_ParamLimits

0xc0a4,	// (0x0001e151) status_dt_navi_pane

0xc0bc,	// (0x0001e169) status_dt_sta_pane_ParamLimits

0xc0bc,	// (0x0001e169) status_dt_sta_pane

0xe5c2,	// (0x0002066f) dt_sta_controll_pane

0xe5cf,	// (0x0002067c) dt_sta_indi_pane

0xe5dc,	// (0x00020689) dt_sta_title_pane

0xdec1,	// (0x0001ff6e) bg_dt_sta_indi_pane_ParamLimits

0xdec1,	// (0x0001ff6e) bg_dt_sta_indi_pane

0xe5ee,	// (0x0002069b) dt_sta_battery_pane

0xe5f6,	// (0x000206a3) dt_sta_indi_pane_g1

0xe5ff,	// (0x000206ac) dt_sta_indi_pane_g2

0xe608,	// (0x000206b5) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x00021f47) dt_sta_indi_pane_g

0xe611,	// (0x000206be) dt_sta_signal_pane

0xe9bf,	// (0x00020a6c) bg_dt_sta_title_pane_ParamLimits

0xe9bf,	// (0x00020a6c) bg_dt_sta_title_pane

0xe61a,	// (0x000206c7) dt_sta_title_pane_g1

0xe622,	// (0x000206cf) dt_sta_title_pane_t1_ParamLimits

0xe622,	// (0x000206cf) dt_sta_title_pane_t1

0xdc72,	// (0x0001fd1f) bg_dt_sta_control_pane

0xe637,	// (0x000206e4) dt_sta_controll_pane_g1

0xe640,	// (0x000206ed) bg_dt_sta_title_pane_g1

0xe649,	// (0x000206f6) bg_dt_sta_title_pane_g2

0xe652,	// (0x000206ff) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x00021f4e) bg_dt_sta_title_pane_g

0x618f,	// (0x0001823c) bg_dt_sta_indi_pane_g1

0xe65b,	// (0x00020708) dt_sta_signal_pane_g1

0xe663,	// (0x00020710) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x00021f55) dt_sta_signal_pane_g

0x93dd,	// (0x0001b48a) dt_sta_battery_pane_g1

0x93e6,	// (0x0001b493) dt_sta_battery_pane_t1

0x618f,	// (0x0001823c) bg_dt_sta_control_pane_g1

0xef48,	// (0x00020ff5) fep_china_uni_eep_pane

0xef50,	// (0x00020ffd) fep_china_uni_entry_pane_ParamLimits

0xef60,	// (0x0002100d) popup_fep_china_uni_window_g1_ParamLimits

0xef70,	// (0x0002101d) popup_fep_china_uni_window_g2_ParamLimits

0xef70,	// (0x0002101d) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x0002180a) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x0002180a) popup_fep_china_uni_window_g

0x93f5,	// (0x0001b4a2) fep_china_uni_eep_pane_g1

0x93fd,	// (0x0001b4aa) fep_china_uni_eep_pane_t1

0x8f0c,	// (0x0001afb9) aid_touch_area_size_smil_player

0x0fe5,	// (0x00013092) lc0_clock_pane

0x101e,	// (0x000130cb) status_pane_g5_ParamLimits

0x101e,	// (0x000130cb) status_pane_g5

0xb9cb,	// (0x0001da78) popup_keymap_window

0x0ffe,	// (0x000130ab) status_icon_pane

0xe41f,	// (0x000204cc) cell_ai5_widget_pane_g3_ParamLimits

0xe433,	// (0x000204e0) cell_ai5_widget_pane_g4_ParamLimits

0xe43f,	// (0x000204ec) cell_ai5_widget_pane_g5_ParamLimits

0xe463,	// (0x00020510) cell_ai5_widget_pane_g8_ParamLimits

0xe463,	// (0x00020510) cell_ai5_widget_pane_g8

0xe477,	// (0x00020524) cell_ai5_widget_pane_g9_ParamLimits

0xe477,	// (0x00020524) cell_ai5_widget_pane_g9

0xe48b,	// (0x00020538) cell_ai5_widget_pane_g10_ParamLimits

0xe48b,	// (0x00020538) cell_ai5_widget_pane_g10

0x940c,	// (0x0001b4b9) status_icon_pane_g1

0xdc72,	// (0x0001fd1f) bg_popup_sub_pane_cp13

0x9414,	// (0x0001b4c1) popup_keymap_window_t1

0xb73c,	// (0x0001d7e9) control_pane_g6_ParamLimits

0xb73c,	// (0x0001d7e9) control_pane_g6

0xb749,	// (0x0001d7f6) control_pane_g7_ParamLimits

0xb749,	// (0x0001d7f6) control_pane_g7

0xb756,	// (0x0001d803) control_pane_g8_ParamLimits

0xb756,	// (0x0001d803) control_pane_g8

0xe5c2,	// (0x0002066f) dt_sta_controll_pane_ParamLimits

0xe5cf,	// (0x0002067c) dt_sta_indi_pane_ParamLimits

0xe5dc,	// (0x00020689) dt_sta_title_pane_ParamLimits

0xe253,	// (0x00020300) aid_size_touch_scroll_bar_cale

0x4654,	// (0x00016701) popup_discreet_window_ParamLimits

0x4654,	// (0x00016701) popup_discreet_window

0xafbc,	// (0x0001d069) popup_sk_window

0x1697,	// (0x00013744) bg_popup_sub_pane_cp28_ParamLimits

0x1697,	// (0x00013744) bg_popup_sub_pane_cp28

0x9422,	// (0x0001b4cf) popup_discreet_window_g1_ParamLimits

0x9422,	// (0x0001b4cf) popup_discreet_window_g1

0x9442,	// (0x0001b4ef) popup_discreet_window_t1_ParamLimits

0x9442,	// (0x0001b4ef) popup_discreet_window_t1

0x9460,	// (0x0001b50d) popup_discreet_window_t2_ParamLimits

0x9460,	// (0x0001b50d) popup_discreet_window_t2

0x0002,

0xfead,	// (0x00021f5a) popup_discreet_window_t_ParamLimits

0xfead,	// (0x00021f5a) popup_discreet_window_t

0x94b2,	// (0x0001b55f) popup_sk_window_g1

0x94bb,	// (0x0001b568) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x00021f61) popup_sk_window_g

0x94c4,	// (0x0001b571) popup_sk_window_t1

0x94d2,	// (0x0001b57f) popup_sk_window_t1_copy1

0xe40f,	// (0x000204bc) cell_ai5_widget_pane_g2_ParamLimits

0xe537,	// (0x000205e4) cell_ai5_widget_pane_t9_ParamLimits

0xe537,	// (0x000205e4) cell_ai5_widget_pane_t9

0xdc72,	// (0x0001fd1f) main_fep_fshwr2_pane

0xe66b,	// (0x00020718) aid_fshwr2_btn_pane

0xe673,	// (0x00020720) aid_fshwr2_syb_pane

0xe67b,	// (0x00020728) aid_fshwr2_txt_pane

0xe683,	// (0x00020730) fshwr2_func_candi_pane

0xe68b,	// (0x00020738) fshwr2_hwr_syb_pane

0xe693,	// (0x00020740) fshwr2_icf_pane

0xdc72,	// (0x0001fd1f) fshwr2_icf_bg_pane

0xe69b,	// (0x00020748) fshwr2_icf_pane_t1_ParamLimits

0xe69b,	// (0x00020748) fshwr2_icf_pane_t1

0x618f,	// (0x0001823c) fshwr2_func_candi_pane_g1

0x9539,	// (0x0001b5e6) fshwr2_func_candi_row_pane_ParamLimits

0x9539,	// (0x0001b5e6) fshwr2_func_candi_row_pane

0xe6b3,	// (0x00020760) cell_fshwr2_syb_pane_ParamLimits

0xe6b3,	// (0x00020760) cell_fshwr2_syb_pane

0x65cf,	// (0x0001867c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x65cf,	// (0x0001867c) fshwr2_hwr_syb_pane_g1

0xdc72,	// (0x0001fd1f) bg_popup_call_pane_cp01

0x9561,	// (0x0001b60e) fshwr2_func_candi_cell_pane_ParamLimits

0x9561,	// (0x0001b60e) fshwr2_func_candi_cell_pane

0x958c,	// (0x0001b639) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x958c,	// (0x0001b639) fshwr2_func_candi_cell_bg_pane

0x95a6,	// (0x0001b653) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x95a6,	// (0x0001b653) fshwr2_func_candi_cell_pane_g1

0x95c6,	// (0x0001b673) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x95c6,	// (0x0001b673) fshwr2_func_candi_cell_pane_t1

0xdc72,	// (0x0001fd1f) bg_button_pane_cp08

0xf378,	// (0x00021425) cell_fshwr2_syb_bg_pane

0xe6ca,	// (0x00020777) cell_fshwr2_syb_bg_pane_g1

0xe6d2,	// (0x0002077f) cell_fshwr2_syb_bg_pane_t1

0xe9bf,	// (0x00020a6c) main_tmo_pane

0xc50e,	// (0x0001e5bb) uni_indicator_pane_g1_ParamLimits

0xc523,	// (0x0001e5d0) uni_indicator_pane_g2_ParamLimits

0xc539,	// (0x0001e5e6) uni_indicator_pane_g3_ParamLimits

0x2023,	// (0x000140d0) uni_indicator_pane_g4_ParamLimits

0x2023,	// (0x000140d0) uni_indicator_pane_g4

0x2037,	// (0x000140e4) uni_indicator_pane_g5_ParamLimits

0x2037,	// (0x000140e4) uni_indicator_pane_g5

0x204b,	// (0x000140f8) uni_indicator_pane_g6_ParamLimits

0x204b,	// (0x000140f8) uni_indicator_pane_g6

0xf947,	// (0x000219f4) uni_indicator_pane_g_ParamLimits

0xcf20,	// (0x0001efcd) popup_tmo_note_window_ParamLimits

0xcf20,	// (0x0001efcd) popup_tmo_note_window

0xdc72,	// (0x0001fd1f) fshwr2_bg_pane

0x95b7,	// (0x0001b664) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x95b7,	// (0x0001b664) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x00021f66) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x00021f66) fshwr2_func_candi_cell_pane_g

0x618f,	// (0x0001823c) bg_popup_window_pane_cp01

0x95f0,	// (0x0001b69d) bg_popup_window_pane_g1_cp01

0x95f9,	// (0x0001b6a6) bg_popup_window_pane_cp22_ParamLimits

0x95f9,	// (0x0001b6a6) bg_popup_window_pane_cp22

0x9607,	// (0x0001b6b4) listscroll_tmo_link_pane_ParamLimits

0x9607,	// (0x0001b6b4) listscroll_tmo_link_pane

0x9647,	// (0x0001b6f4) popup_tmo_note_window_g1_ParamLimits

0x9647,	// (0x0001b6f4) popup_tmo_note_window_g1

0x9654,	// (0x0001b701) tmo_note_info_pane_ParamLimits

0x9654,	// (0x0001b701) tmo_note_info_pane

0xe6e1,	// (0x0002078e) list_tmo_note_info_pane_g1_ParamLimits

0xe6e1,	// (0x0002078e) list_tmo_note_info_pane_g1

0x9685,	// (0x0001b732) list_tmo_note_info_pane_g2_ParamLimits

0x9685,	// (0x0001b732) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x00021f6b) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x00021f6b) list_tmo_note_info_pane_g

0x96a1,	// (0x0001b74e) list_tmo_note_info_text_pane_ParamLimits

0x96a1,	// (0x0001b74e) list_tmo_note_info_text_pane

0x9722,	// (0x0001b7cf) list_tmo_link_pane

0x972f,	// (0x0001b7dc) scroll_pane_cp20

0x973c,	// (0x0001b7e9) list_single_tmo_link_pane_ParamLimits

0x973c,	// (0x0001b7e9) list_single_tmo_link_pane

0x974c,	// (0x0001b7f9) list_single_tmo_link_pane_t1

0x975a,	// (0x0001b807) list_tmo_note_info_text_pane_t1_ParamLimits

0x975a,	// (0x0001b807) list_tmo_note_info_text_pane_t1

0xea81,	// (0x00020b2e) aid_size_touch_scroll_bar_cp01_ParamLimits

0xea81,	// (0x00020b2e) aid_size_touch_scroll_bar_cp01

0xaadd,	// (0x0001cb8a) aid_size_touch_slider_marker

0xafb0,	// (0x0001d05d) popup_settings_window_ParamLimits

0xafb0,	// (0x0001d05d) popup_settings_window

0x3d8a,	// (0x00015e37) popup_candi_list_indi_window

0x0f47,	// (0x00012ff4) aid_touch_navi_pane_ParamLimits

0x7b2b,	// (0x00019bd8) rs_clock_indi_pane

0x7b34,	// (0x00019be1) sctrl_sk_bottom_pane_ParamLimits

0x7b45,	// (0x00019bf2) sctrl_sk_top_pane_ParamLimits

0x835c,	// (0x0001a409) popup_fep_tooltip_window

0xe3e1,	// (0x0002048e) aid_size_cell_widget_grid_ParamLimits

0xe403,	// (0x000204b0) cell_ai5_widget_pane_g1_ParamLimits

0xe403,	// (0x000204b0) cell_ai5_widget_pane_g1

0xe44b,	// (0x000204f8) cell_ai5_widget_pane_g6_ParamLimits

0xe457,	// (0x00020504) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x00021ee9) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x00021ee9) cell_ai5_widget_pane_g

0xe55b,	// (0x00020608) cell_ai5_widget_pane_t10_ParamLimits

0xe55b,	// (0x00020608) cell_ai5_widget_pane_t10

0xe56d,	// (0x0002061a) grid_ai5_widget_pane_ParamLimits

0x9294,	// (0x0001b341) cell_contacts_ai5_widget_pane_ParamLimits

0x9294,	// (0x0001b341) cell_contacts_ai5_widget_pane

0x9475,	// (0x0001b522) popup_discreet_window_t3_ParamLimits

0x9475,	// (0x0001b522) popup_discreet_window_t3

0x9510,	// (0x0001b5bd) popup_fshwr2_char_preview_window_ParamLimits

0x9510,	// (0x0001b5bd) popup_fshwr2_char_preview_window

0xe6f8,	// (0x000207a5) tmo_note_info_pane_t1

0xe70d,	// (0x000207ba) tmo_note_info_pane_t2

0xe722,	// (0x000207cf) tmo_note_info_pane_t3

0x96fe,	// (0x0001b7ab) tmo_note_info_pane_t4

0x9710,	// (0x0001b7bd) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x00021f70) tmo_note_info_pane_t

0x9722,	// (0x0001b7cf) list_tmo_link_pane_ParamLimits

0x972f,	// (0x0001b7dc) scroll_pane_cp20_ParamLimits

0xdc72,	// (0x0001fd1f) bg_popup_fep_char_preview_window_cp01

0x9773,	// (0x0001b820) popup_fshwr2_char_preview_window_t1

0x9781,	// (0x0001b82e) popup_candi_list_indi_window_g1

0x978a,	// (0x0001b837) bg_cell_contacts_ai5_widget_pane

0x9796,	// (0x0001b843) cell_contacts_ai5_widget_pane_g1

0x97aa,	// (0x0001b857) cell_contacts_ai5_widget_pane_g2

0x97b9,	// (0x0001b866) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x00021f7b) cell_contacts_ai5_widget_pane_g

0x97cc,	// (0x0001b879) cell_contacts_ai5_widget_pane_t1

0xe9bf,	// (0x00020a6c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe79a,	// (0x00020847) settings_container_pane

0xf378,	// (0x00021425) listscroll_set_pane_copy1

0x2847,	// (0x000148f4) scroll_pane_cp121_copy1

0x9850,	// (0x0001b8fd) set_content_pane_copy1

0x9858,	// (0x0001b905) aid_height_set_list_copy1_ParamLimits

0x9858,	// (0x0001b905) aid_height_set_list_copy1

0x225b,	// (0x00014308) aid_size_parent_copy1_ParamLimits

0x225b,	// (0x00014308) aid_size_parent_copy1

0xe7a6,	// (0x00020853) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe7a6,	// (0x00020853) button_value_adjust_pane_cp6_copy1

0x0dd6,	// (0x00012e83) list_highlight_pane_cp2_copy1_ParamLimits

0x0dd6,	// (0x00012e83) list_highlight_pane_cp2_copy1

0xe7ba,	// (0x00020867) list_set_pane_copy1_ParamLimits

0xe7ba,	// (0x00020867) list_set_pane_copy1

0xe737,	// (0x000207e4) main_pane_set_t1_copy1_ParamLimits

0xe737,	// (0x000207e4) main_pane_set_t1_copy1

0xe771,	// (0x0002081e) main_pane_set_t2_copy1_ParamLimits

0xe771,	// (0x0002081e) main_pane_set_t2_copy1

0x9906,	// (0x0001b9b3) main_pane_set_t3_copy1

0x9914,	// (0x0001b9c1) main_pane_set_t4_copy1

0xe78e,	// (0x0002083b) set_content_pane_g1_copy1_ParamLimits

0xe78e,	// (0x0002083b) set_content_pane_g1_copy1

0xe848,	// (0x000208f5) setting_code_pane_copy1

0x992a,	// (0x0001b9d7) setting_slider_graphic_pane_copy1

0x992a,	// (0x0001b9d7) setting_slider_pane_copy1

0x9932,	// (0x0001b9df) setting_text_pane_copy1

0x992a,	// (0x0001b9d7) setting_volume_pane_copy1

0xe850,	// (0x000208fd) settings_code_pane_cp2_copy1

0xe858,	// (0x00020905) settings_code_pane_cp_copy1_ParamLimits

0xe858,	// (0x00020905) settings_code_pane_cp_copy1

0xe86c,	// (0x00020919) volume_set_pane_copy1

0xe874,	// (0x00020921) volume_set_pane_g10_copy1

0xe87c,	// (0x00020929) volume_set_pane_g1_copy1

0xe884,	// (0x00020931) volume_set_pane_g2_copy1

0xe88c,	// (0x00020939) volume_set_pane_g3_copy1

0xe894,	// (0x00020941) volume_set_pane_g4_copy1

0xe89c,	// (0x00020949) volume_set_pane_g5_copy1

0xe8a4,	// (0x00020951) volume_set_pane_g6_copy1

0xe8ac,	// (0x00020959) volume_set_pane_g7_copy1

0xe8b4,	// (0x00020961) volume_set_pane_g8_copy1

0xe8bc,	// (0x00020969) volume_set_pane_g9_copy1

0xdd62,	// (0x0001fe0f) bg_set_opt_pane_cp_copy1_ParamLimits

0xdd62,	// (0x0001fe0f) bg_set_opt_pane_cp_copy1

0xdd70,	// (0x0001fe1d) setting_slider_pane_t1_copy1_ParamLimits

0xdd70,	// (0x0001fe1d) setting_slider_pane_t1_copy1

0x99ae,	// (0x0001ba5b) setting_slider_pane_t2_copy1_ParamLimits

0x99ae,	// (0x0001ba5b) setting_slider_pane_t2_copy1

0x99c7,	// (0x0001ba74) setting_slider_pane_t3_copy1_ParamLimits

0x99c7,	// (0x0001ba74) setting_slider_pane_t3_copy1

0xdd86,	// (0x0001fe33) slider_set_pane_copy1_ParamLimits

0xdd86,	// (0x0001fe33) slider_set_pane_copy1

0xea0e,	// (0x00020abb) set_opt_bg_pane_g1_copy2

0xea16,	// (0x00020ac3) set_opt_bg_pane_g2_copy2

0x99de,	// (0x0001ba8b) set_opt_bg_pane_g3_copy2

0xea26,	// (0x00020ad3) set_opt_bg_pane_g4_copy2

0xea2e,	// (0x00020adb) set_opt_bg_pane_g5_copy2

0xea36,	// (0x00020ae3) set_opt_bg_pane_g6_copy2

0xe8c4,	// (0x00020971) set_opt_bg_pane_g7_copy2

0x99ee,	// (0x0001ba9b) set_opt_bg_pane_g8_copy2

0x99f6,	// (0x0001baa3) set_opt_bg_pane_g9_copy2

0x2211,	// (0x000142be) aid_size_touch_slider_mark_copy1_ParamLimits

0x2211,	// (0x000142be) aid_size_touch_slider_mark_copy1

0x226d,	// (0x0001431a) slider_set_pane_g1_copy1

0x2276,	// (0x00014323) slider_set_pane_g2_copy1

0x23a7,	// (0x00014454) slider_set_pane_g3_copy1_ParamLimits

0x23a7,	// (0x00014454) slider_set_pane_g3_copy1

0x23bb,	// (0x00014468) slider_set_pane_g4_copy1_ParamLimits

0x23bb,	// (0x00014468) slider_set_pane_g4_copy1

0x23d3,	// (0x00014480) slider_set_pane_g5_copy1_ParamLimits

0x23d3,	// (0x00014480) slider_set_pane_g5_copy1

0x23a7,	// (0x00014454) slider_set_pane_g6_copy1_ParamLimits

0x23a7,	// (0x00014454) slider_set_pane_g6_copy1

0xe8cc,	// (0x00020979) slider_set_pane_g7_copy1_ParamLimits

0xe8cc,	// (0x00020979) slider_set_pane_g7_copy1

0xdcfe,	// (0x0001fdab) bg_set_opt_pane_cp2_copy1

0xdd9c,	// (0x0001fe49) setting_slider_graphic_pane_g1_copy1

0xe8e2,	// (0x0002098f) setting_slider_graphic_pane_t1_copy1

0xe8f1,	// (0x0002099e) setting_slider_graphic_pane_t2_copy1

0xe900,	// (0x000209ad) slider_set_pane_cp_copy1

0x9a42,	// (0x0001baef) input_focus_pane_cp1_copy1

0x9a4b,	// (0x0001baf8) list_set_text_pane_copy1

0x9a53,	// (0x0001bb00) setting_text_pane_g1_copy1

0x44ea,	// (0x00016597) set_text_pane_t1_copy1

0x9a42,	// (0x0001baef) input_focus_pane_cp2_copy1

0x9a53,	// (0x0001bb00) setting_code_pane_g1_copy1

0x9a5c,	// (0x0001bb09) setting_code_pane_t1_copy1

0xb654,	// (0x0001d701) list_set_graphic_pane_copy1

0xdcfe,	// (0x0001fdab) bg_set_opt_pane_cp4_copy1

0x9a7e,	// (0x0001bb2b) list_set_graphic_pane_g1_copy1_ParamLimits

0x9a7e,	// (0x0001bb2b) list_set_graphic_pane_g1_copy1

0x9a8a,	// (0x0001bb37) list_set_graphic_pane_g2_copy1

0xf0f3,	// (0x000211a0) list_set_graphic_pane_t1_copy1_ParamLimits

0xf0f3,	// (0x000211a0) list_set_graphic_pane_t1_copy1

0x618f,	// (0x0001823c) rs_clock_indi_pane_g1

0x9a92,	// (0x0001bb3f) rs_clock_indi_pane_t1

0x9aa0,	// (0x0001bb4d) rs_indi_pane

0x9aa8,	// (0x0001bb55) rs_indi_pane_g1

0x9ab1,	// (0x0001bb5e) rs_indi_pane_g2

0x9781,	// (0x0001b82e) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x00021f82) rs_indi_pane_g

0xf378,	// (0x00021425) bg_popup_preview_window_pane_cp03

0x9aba,	// (0x0001bb67) popup_fep_tooltip_window_t1

0x70dd,	// (0x0001918a) popup_note2_window_g2_ParamLimits

0x70dd,	// (0x0001918a) popup_note2_window_g2

0x0001,

0xfc7a,	// (0x00021d27) popup_note2_window_g_ParamLimits

0xfc7a,	// (0x00021d27) popup_note2_window_g

0x75dd,	// (0x0001968a) bg_popup_sub_pane_cp11_ParamLimits

0x75ea,	// (0x00019697) cell_ai3_links_pane_g1_ParamLimits

0x7601,	// (0x000196ae) cell_ai3_links_pane_t1

0x44ea,	// (0x00016597) set_text_pane_t1_copy1_ParamLimits

0xf29f,	// (0x0002134c) cell_graphic_popup_pane_cp2_ParamLimits

0xf29f,	// (0x0002134c) cell_graphic_popup_pane_cp2

0x9ac8,	// (0x0001bb75) cell_graphic_popup_pane_g1_cp2

0xe102,	// (0x000201af) cell_graphic_popup_pane_g2_cp2

0x9ad0,	// (0x0001bb7d) cell_graphic_popup_pane_g3_cp2

0x9ad8,	// (0x0001bb85) cell_graphic_popup_pane_t2_cp2

0xe113,	// (0x000201c0) grid_highlight_pane_cp3_cp2

0xecf4,	// (0x00020da1) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe9bf,	// (0x00020a6c) main_tmo_pane_ParamLimits

0xcf18,	// (0x0001efc5) popup_tmo_big_image_note_window

0xe3f3,	// (0x000204a0) cell_ai5_widget_list_pane

0xe3fb,	// (0x000204a8) cell_ai5_widget_lrg_icon_pane

0xe6f8,	// (0x000207a5) tmo_note_info_pane_t1_ParamLimits

0xe70d,	// (0x000207ba) tmo_note_info_pane_t2_ParamLimits

0xe722,	// (0x000207cf) tmo_note_info_pane_t3_ParamLimits

0x96fe,	// (0x0001b7ab) tmo_note_info_pane_t4_ParamLimits

0x9710,	// (0x0001b7bd) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x00021f70) tmo_note_info_pane_t_ParamLimits

0xe79a,	// (0x00020847) settings_container_pane_ParamLimits

0x9a3a,	// (0x0001bae7) indicator_popup_pane_cp5

0x9a3a,	// (0x0001bae7) indicator_popup_pane_cp6

0xb654,	// (0x0001d701) list_set_graphic_pane_copy1_ParamLimits

0xdc72,	// (0x0001fd1f) bg_popup_window_pane_cp23

0x9ae6,	// (0x0001bb93) popup_tmo_big_image_note_window_g1

0x9aef,	// (0x0001bb9c) popup_tmo_big_image_note_window_t1

0x9afd,	// (0x0001bbaa) popup_tmo_big_image_note_window_t2

0x9b0b,	// (0x0001bbb8) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x00021f89) popup_tmo_big_image_note_window_t

0xe908,	// (0x000209b5) cell_ai5_widget_lrg_icon_pane_g1

0xe910,	// (0x000209bd) cell_ai5_widget_lrg_icon_pane_t1

0xe91e,	// (0x000209cb) cell_ai5_widget_list_row_pane_ParamLimits

0xe91e,	// (0x000209cb) cell_ai5_widget_list_row_pane

0xe937,	// (0x000209e4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe937,	// (0x000209e4) cell_ai5_widget_list_row_pane_g1

0xe944,	// (0x000209f1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe944,	// (0x000209f1) cell_ai5_widget_list_row_pane_t1

0xe95c,	// (0x00020a09) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe95c,	// (0x00020a09) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee3,	// (0x00021f90) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x00021f90) cell_ai5_widget_list_row_pane_t

0xdc72,	// (0x0001fd1f) main_fep_vtchi_ss_pane

0x9b7f,	// (0x0001bc2c) popup_fep_char_pre_window

0x9b87,	// (0x0001bc34) popup_fep_ituss_window

0x9b90,	// (0x0001bc3d) popup_fep_vkbss_window

0x9b99,	// (0x0001bc46) grid_vkbss_keypad_pane_ParamLimits

0x9b99,	// (0x0001bc46) grid_vkbss_keypad_pane

0x9ba9,	// (0x0001bc56) ituss_keypad_pane

0x9bb1,	// (0x0001bc5e) aid_vkbss_key_offset_ParamLimits

0x9bb1,	// (0x0001bc5e) aid_vkbss_key_offset

0x9bc0,	// (0x0001bc6d) cell_vkbss_key_pane_ParamLimits

0x9bc0,	// (0x0001bc6d) cell_vkbss_key_pane

0x9bd6,	// (0x0001bc83) bg_cell_vkbss_key_g1_ParamLimits

0x9bd6,	// (0x0001bc83) bg_cell_vkbss_key_g1

0x9be2,	// (0x0001bc8f) cell_vkbss_key_3p_pane_ParamLimits

0x9be2,	// (0x0001bc8f) cell_vkbss_key_3p_pane

0x9bf6,	// (0x0001bca3) cell_vkbss_key_g1_ParamLimits

0x9bf6,	// (0x0001bca3) cell_vkbss_key_g1

0x9c0a,	// (0x0001bcb7) cell_vkbss_key_t1_ParamLimits

0x9c0a,	// (0x0001bcb7) cell_vkbss_key_t1

0x9c35,	// (0x0001bce2) cell_ituss_key_pane_ParamLimits

0x9c35,	// (0x0001bce2) cell_ituss_key_pane

0x9c44,	// (0x0001bcf1) bg_cell_ituss_key_g1_ParamLimits

0x9c44,	// (0x0001bcf1) bg_cell_ituss_key_g1

0x9c50,	// (0x0001bcfd) cell_ituss_key_pane_g1_ParamLimits

0x9c50,	// (0x0001bcfd) cell_ituss_key_pane_g1

0x9c5c,	// (0x0001bd09) cell_ituss_key_pane_g2_ParamLimits

0x9c5c,	// (0x0001bd09) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x00021f95) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x00021f95) cell_ituss_key_pane_g

0x9c6f,	// (0x0001bd1c) cell_ituss_key_t1_ParamLimits

0x9c6f,	// (0x0001bd1c) cell_ituss_key_t1

0x9c8d,	// (0x0001bd3a) cell_ituss_key_t2_ParamLimits

0x9c8d,	// (0x0001bd3a) cell_ituss_key_t2

0x9cac,	// (0x0001bd59) cell_ituss_key_t3_ParamLimits

0x9cac,	// (0x0001bd59) cell_ituss_key_t3

0x9ccb,	// (0x0001bd78) cell_ituss_key_t4_ParamLimits

0x9ccb,	// (0x0001bd78) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x00021f9a) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x00021f9a) cell_ituss_key_t

0x9cea,	// (0x0001bd97) cell_vkbss_key_3p_pane_g1

0x9cf2,	// (0x0001bd9f) cell_vkbss_key_3p_pane_g2

0x9cfa,	// (0x0001bda7) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x00021fa3) cell_vkbss_key_3p_pane_g

0xdc72,	// (0x0001fd1f) bg_popup_fep_char_preview_window_cp02

0x9d02,	// (0x0001bdaf) popup_fep_char_pre_window_t1

0xe3d7,	// (0x00020484) main_ai5_sk_pane

0x978a,	// (0x0001b837) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9796,	// (0x0001b843) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x97aa,	// (0x0001b857) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x97b9,	// (0x0001b866) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x00021f7b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x97cc,	// (0x0001b879) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe9bf,	// (0x00020a6c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe96e,	// (0x00020a1b) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small

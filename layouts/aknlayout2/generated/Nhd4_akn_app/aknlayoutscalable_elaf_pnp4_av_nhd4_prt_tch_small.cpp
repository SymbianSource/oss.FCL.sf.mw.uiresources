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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001ff67 };

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
0x6566,	// (0x000264cd) Screen

0x6572,	// (0x000264d9) application_window_ParamLimits

0x6572,	// (0x000264d9) application_window

0x1a03,	// (0x0002196a) screen_g1

0x65ce,	// (0x00026535) area_bottom_pane_ParamLimits

0x65ce,	// (0x00026535) area_bottom_pane

0x668e,	// (0x000265f5) area_top_pane_ParamLimits

0x668e,	// (0x000265f5) area_top_pane

0x6722,	// (0x00026689) main_pane_ParamLimits

0x6722,	// (0x00026689) main_pane

0x1a0d,	// (0x00021974) misc_graphics

0x80b3,	// (0x0002801a) battery_pane_ParamLimits

0x80b3,	// (0x0002801a) battery_pane

0xa269,	// (0x0002a1d0) bg_status_flat_pane_g8

0xa271,	// (0x0002a1d8) bg_status_flat_pane_g9

0x817b,	// (0x000280e2) context_pane_ParamLimits

0x817b,	// (0x000280e2) context_pane

0x8291,	// (0x000281f8) navi_pane_ParamLimits

0x8291,	// (0x000281f8) navi_pane

0x8315,	// (0x0002827c) signal_pane_ParamLimits

0x8315,	// (0x0002827c) signal_pane

0x0008,

0xf840,	// (0x0002f7a7) bg_status_flat_pane_g

0x8382,	// (0x000282e9) status_pane_g1_ParamLimits

0x8382,	// (0x000282e9) status_pane_g1

0x8396,	// (0x000282fd) status_pane_g2_ParamLimits

0x8396,	// (0x000282fd) status_pane_g2

0x83a2,	// (0x00028309) status_pane_g3_ParamLimits

0x83a2,	// (0x00028309) status_pane_g3

0x0004,

0xf76c,	// (0x0002f6d3) status_pane_g_ParamLimits

0xf76c,	// (0x0002f6d3) status_pane_g

0x83d6,	// (0x0002833d) title_pane_ParamLimits

0x83d6,	// (0x0002833d) title_pane

0x8413,	// (0x0002837a) uni_indicator_pane_ParamLimits

0x8413,	// (0x0002837a) uni_indicator_pane

0x2921,	// (0x00022888) bg_list_pane_ParamLimits

0x2921,	// (0x00022888) bg_list_pane

0x5c0f,	// (0x00025b76) find_pane

0x2053,	// (0x00021fba) listscroll_app_pane_ParamLimits

0x2053,	// (0x00021fba) listscroll_app_pane

0x2941,	// (0x000228a8) listscroll_form_pane

0x5c17,	// (0x00025b7e) listscroll_gen_pane_ParamLimits

0x5c17,	// (0x00025b7e) listscroll_gen_pane

0x7a94,	// (0x000279fb) listscroll_set_pane

0x6ff7,	// (0x00026f5e) main_idle_act_pane

0x27b5,	// (0x0002271c) main_idle_trad_pane

0x27b5,	// (0x0002271c) main_list_empty_pane

0x2053,	// (0x00021fba) main_midp_pane

0x295b,	// (0x000228c2) main_pane_g1_ParamLimits

0x295b,	// (0x000228c2) main_pane_g1

0x7a9c,	// (0x00027a03) popup_ai_message_window_ParamLimits

0x7a9c,	// (0x00027a03) popup_ai_message_window

0x7b40,	// (0x00027aa7) popup_fep_china_uni_window_ParamLimits

0x7b40,	// (0x00027aa7) popup_fep_china_uni_window

0x7b9a,	// (0x00027b01) popup_fep_japan_candidate_window_ParamLimits

0x7b9a,	// (0x00027b01) popup_fep_japan_candidate_window

0x7bb8,	// (0x00027b1f) popup_fep_japan_predictive_window_ParamLimits

0x7bb8,	// (0x00027b1f) popup_fep_japan_predictive_window

0x7be8,	// (0x00027b4f) popup_find_window

0x7bf5,	// (0x00027b5c) popup_grid_graphic_window_ParamLimits

0x7bf5,	// (0x00027b5c) popup_grid_graphic_window

0x7c1f,	// (0x00027b86) popup_large_graphic_colour_window

0x7c45,	// (0x00027bac) popup_menu_window_ParamLimits

0x7c45,	// (0x00027bac) popup_menu_window

0x7e01,	// (0x00027d68) popup_note_image_window

0x7ded,	// (0x00027d54) popup_note_wait_window_ParamLimits

0x7ded,	// (0x00027d54) popup_note_wait_window

0x7ded,	// (0x00027d54) popup_note_window_ParamLimits

0x7ded,	// (0x00027d54) popup_note_window

0x7e57,	// (0x00027dbe) popup_query_code_window_ParamLimits

0x7e57,	// (0x00027dbe) popup_query_code_window

0x7e6b,	// (0x00027dd2) popup_query_data_code_window_ParamLimits

0x7e6b,	// (0x00027dd2) popup_query_data_code_window

0x7e88,	// (0x00027def) popup_query_data_window_ParamLimits

0x7e88,	// (0x00027def) popup_query_data_window

0x7ea4,	// (0x00027e0b) popup_query_sat_info_window_ParamLimits

0x7ea4,	// (0x00027e0b) popup_query_sat_info_window

0x7edd,	// (0x00027e44) popup_snote_single_graphic_window_ParamLimits

0x7edd,	// (0x00027e44) popup_snote_single_graphic_window

0x7edd,	// (0x00027e44) popup_snote_single_text_window_ParamLimits

0x7edd,	// (0x00027e44) popup_snote_single_text_window

0x7ef2,	// (0x00027e59) popup_sub_window_general

0x8022,	// (0x00027f89) popup_window_general_ParamLimits

0x8022,	// (0x00027f89) popup_window_general

0x8037,	// (0x00027f9e) power_save_pane

0x78fb,	// (0x00027862) control_pane_g1_ParamLimits

0x78fb,	// (0x00027862) control_pane_g1

0x7922,	// (0x00027889) control_pane_g2_ParamLimits

0x7922,	// (0x00027889) control_pane_g2

0x290b,	// (0x00022872) control_pane_g3_ParamLimits

0x290b,	// (0x00022872) control_pane_g3

0x0007,

0xf754,	// (0x0002f6bb) control_pane_g_ParamLimits

0xf754,	// (0x0002f6bb) control_pane_g

0x7993,	// (0x000278fa) control_pane_t1_ParamLimits

0x7993,	// (0x000278fa) control_pane_t1

0x79e9,	// (0x00027950) control_pane_t2_ParamLimits

0x79e9,	// (0x00027950) control_pane_t2

0x0002,

0xf765,	// (0x0002f6cc) control_pane_t_ParamLimits

0xf765,	// (0x0002f6cc) control_pane_t

0x7874,	// (0x000277db) navi_navi_volume_pane_cp1

0x787c,	// (0x000277e3) status_small_icon_pane

0x28b7,	// (0x0002281e) status_small_pane_g1_ParamLimits

0x28b7,	// (0x0002281e) status_small_pane_g1

0x7884,	// (0x000277eb) status_small_pane_g2_ParamLimits

0x7884,	// (0x000277eb) status_small_pane_g2

0x28eb,	// (0x00022852) status_small_pane_g3_ParamLimits

0x28eb,	// (0x00022852) status_small_pane_g3

0x7890,	// (0x000277f7) status_small_pane_g4_ParamLimits

0x7890,	// (0x000277f7) status_small_pane_g4

0x789c,	// (0x00027803) status_small_pane_g5_ParamLimits

0x789c,	// (0x00027803) status_small_pane_g5

0x78aa,	// (0x00027811) status_small_pane_g6_ParamLimits

0x78aa,	// (0x00027811) status_small_pane_g6

0x0007,

0xf743,	// (0x0002f6aa) status_small_pane_g_ParamLimits

0xf743,	// (0x0002f6aa) status_small_pane_g

0x78c5,	// (0x0002782c) status_small_pane_t1

0x78e7,	// (0x0002784e) status_small_wait_pane_ParamLimits

0x78e7,	// (0x0002784e) status_small_wait_pane

0x73e0,	// (0x00027347) aid_levels_signal_ParamLimits

0x73e0,	// (0x00027347) aid_levels_signal

0x73f2,	// (0x00027359) signal_pane_g1_ParamLimits

0x73f2,	// (0x00027359) signal_pane_g1

0x7407,	// (0x0002736e) signal_pane_g2_ParamLimits

0x7407,	// (0x0002736e) signal_pane_g2

0x0003,

0xf6d4,	// (0x0002f63b) signal_pane_g_ParamLimits

0xf6d4,	// (0x0002f63b) signal_pane_g

0x23bb,	// (0x00022322) context_pane_g1

0x6963,	// (0x000268ca) title_pane_g1

0x698d,	// (0x000268f4) title_pane_t1

0x1a23,	// (0x0002198a) title_pane_t2

0x1a49,	// (0x000219b0) title_pane_t3

0x0002,

0xf532,	// (0x0002f499) title_pane_t

0x842b,	// (0x00028392) aid_levels_battery_ParamLimits

0x842b,	// (0x00028392) aid_levels_battery

0x843f,	// (0x000283a6) battery_pane_g1_ParamLimits

0x843f,	// (0x000283a6) battery_pane_g1

0x8455,	// (0x000283bc) battery_pane_g2_ParamLimits

0x8455,	// (0x000283bc) battery_pane_g2

0x0001,

0xf777,	// (0x0002f6de) battery_pane_g_ParamLimits

0xf777,	// (0x0002f6de) battery_pane_g

0xab8d,	// (0x0002aaf4) uni_indicator_pane_g1

0xaba0,	// (0x0002ab07) uni_indicator_pane_g2

0xabb2,	// (0x0002ab19) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x0002f84f) uni_indicator_pane_g

0x2658,	// (0x000225bf) navi_icon_pane_ParamLimits

0x2658,	// (0x000225bf) navi_icon_pane

0x25ad,	// (0x00022514) navi_midp_pane

0x2674,	// (0x000225db) navi_navi_pane

0x267e,	// (0x000225e5) navi_text_pane_ParamLimits

0x267e,	// (0x000225e5) navi_text_pane

0x1a03,	// (0x0002196a) status_small_wait_pane_g1

0x1cb4,	// (0x00021c1b) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x0002f84a) status_small_wait_pane_g

0xa8b4,	// (0x0002a81b) navi_navi_icon_text_pane

0xa8bc,	// (0x0002a823) navi_navi_pane_g1_ParamLimits

0xa8bc,	// (0x0002a823) navi_navi_pane_g1

0xa8ce,	// (0x0002a835) navi_navi_pane_g2_ParamLimits

0xa8ce,	// (0x0002a835) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x0002f818) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x0002f818) navi_navi_pane_g

0xa8e0,	// (0x0002a847) navi_navi_tabs_pane

0xa8e9,	// (0x0002a850) navi_navi_text_pane

0xa8b4,	// (0x0002a81b) navi_navi_volume_pane

0xa890,	// (0x0002a7f7) navi_text_pane_t1

0xa884,	// (0x0002a7eb) navi_icon_pane_g1

0xa7d7,	// (0x0002a73e) navi_navi_text_pane_t1

0x8fac,	// (0x00028f13) navi_navi_volume_pane_g1

0x8fb4,	// (0x00028f1b) volume_small_pane

0xa73d,	// (0x0002a6a4) navi_navi_icon_text_pane_g1

0xa745,	// (0x0002a6ac) navi_navi_icon_text_pane_t1

0x2674,	// (0x000225db) navi_tabs_2_long_pane

0x2674,	// (0x000225db) navi_tabs_2_pane

0x2674,	// (0x000225db) navi_tabs_3_long_pane

0x2674,	// (0x000225db) navi_tabs_3_pane

0x2674,	// (0x000225db) navi_tabs_4_pane

0x8f8c,	// (0x00028ef3) tabs_2_active_pane_ParamLimits

0x8f8c,	// (0x00028ef3) tabs_2_active_pane

0x8f9c,	// (0x00028f03) tabs_2_passive_pane_ParamLimits

0x8f9c,	// (0x00028f03) tabs_2_passive_pane

0x8f5a,	// (0x00028ec1) tabs_3_active_pane_ParamLimits

0x8f5a,	// (0x00028ec1) tabs_3_active_pane

0x8f6a,	// (0x00028ed1) tabs_3_passive_pane_ParamLimits

0x8f6a,	// (0x00028ed1) tabs_3_passive_pane

0x8f7b,	// (0x00028ee2) tabs_3_passive_pane_cp_ParamLimits

0x8f7b,	// (0x00028ee2) tabs_3_passive_pane_cp

0x8f16,	// (0x00028e7d) tabs_4_active_pane_ParamLimits

0x8f16,	// (0x00028e7d) tabs_4_active_pane

0x8f27,	// (0x00028e8e) tabs_4_passive_pane_ParamLimits

0x8f27,	// (0x00028e8e) tabs_4_passive_pane

0x8f38,	// (0x00028e9f) tabs_4_passive_pane_cp_ParamLimits

0x8f38,	// (0x00028e9f) tabs_4_passive_pane_cp

0x8f49,	// (0x00028eb0) tabs_4_passive_pane_cp2_ParamLimits

0x8f49,	// (0x00028eb0) tabs_4_passive_pane_cp2

0x8ef2,	// (0x00028e59) tabs_2_long_active_pane_ParamLimits

0x8ef2,	// (0x00028e59) tabs_2_long_active_pane

0x8f04,	// (0x00028e6b) tabs_2_long_passive_pane_ParamLimits

0x8f04,	// (0x00028e6b) tabs_2_long_passive_pane

0x8ead,	// (0x00028e14) tabs_3_long_active_pane_ParamLimits

0x8ead,	// (0x00028e14) tabs_3_long_active_pane

0x8ec6,	// (0x00028e2d) tabs_3_long_passive_pane_ParamLimits

0x8ec6,	// (0x00028e2d) tabs_3_long_passive_pane

0x8ed9,	// (0x00028e40) tabs_3_long_passive_pane_cp_ParamLimits

0x8ed9,	// (0x00028e40) tabs_3_long_passive_pane_cp

0x8e53,	// (0x00028dba) volume_small_pane_g1

0x8e5c,	// (0x00028dc3) volume_small_pane_g2

0x8e65,	// (0x00028dcc) volume_small_pane_g3

0x8e6e,	// (0x00028dd5) volume_small_pane_g4

0x8e77,	// (0x00028dde) volume_small_pane_g5

0x8e80,	// (0x00028de7) volume_small_pane_g6

0x8e89,	// (0x00028df0) volume_small_pane_g7

0x8e92,	// (0x00028df9) volume_small_pane_g8

0x8e9b,	// (0x00028e02) volume_small_pane_g9

0x8ea4,	// (0x00028e0b) volume_small_pane_g10

0x0009,

0xf87d,	// (0x0002f7e4) volume_small_pane_g

0x1a69,	// (0x000219d0) bg_active_tab_pane_cp2_ParamLimits

0x1a69,	// (0x000219d0) bg_active_tab_pane_cp2

0x69f5,	// (0x0002695c) tabs_3_active_pane_g1

0x69fd,	// (0x00026964) tabs_3_active_pane_t1

0x1a69,	// (0x000219d0) bg_passive_tab_pane_cp2_ParamLimits

0x1a69,	// (0x000219d0) bg_passive_tab_pane_cp2

0x69f5,	// (0x0002695c) tabs_3_passive_pane_g1

0x69fd,	// (0x00026964) tabs_3_passive_pane_t1

0x1a69,	// (0x000219d0) bg_active_tab_pane_cp3_ParamLimits

0x1a69,	// (0x000219d0) bg_active_tab_pane_cp3

0x6a0f,	// (0x00026976) tabs_4_active_pane_g1

0x6a17,	// (0x0002697e) tabs_4_active_pane_t1

0x1a69,	// (0x000219d0) bg_passive_tab_pane_cp3_ParamLimits

0x1a69,	// (0x000219d0) bg_passive_tab_pane_cp3

0x6a0f,	// (0x00026976) tabs_4_1_passive_pane_g1

0x6a17,	// (0x0002697e) tabs_4_1_passive_pane_t1

0x2053,	// (0x00021fba) list_highlight_pane_cp2

0xadf5,	// (0x0002ad5c) list_set_pane_ParamLimits

0xadf5,	// (0x0002ad5c) list_set_pane

0xae97,	// (0x0002adfe) main_pane_set_t1_ParamLimits

0xae97,	// (0x0002adfe) main_pane_set_t1

0xaeb7,	// (0x0002ae1e) main_pane_set_t2_ParamLimits

0xaeb7,	// (0x0002ae1e) main_pane_set_t2

0xaecb,	// (0x0002ae32) main_pane_set_t3_ParamLimits

0xaecb,	// (0x0002ae32) main_pane_set_t3

0xaedd,	// (0x0002ae44) main_pane_set_t4_ParamLimits

0xaedd,	// (0x0002ae44) main_pane_set_t4

0x0003,

0xf94d,	// (0x0002f8b4) main_pane_set_t_ParamLimits

0xf94d,	// (0x0002f8b4) main_pane_set_t

0xaeef,	// (0x0002ae56) setting_code_pane

0xaefb,	// (0x0002ae62) setting_slider_graphic_pane

0xaefb,	// (0x0002ae62) setting_slider_pane

0xaefb,	// (0x0002ae62) setting_text_pane

0xaefb,	// (0x0002ae62) setting_volume_pane

0x6a29,	// (0x00026990) volume_set_pane

0x1a69,	// (0x000219d0) bg_set_opt_pane_cp

0x6a31,	// (0x00026998) setting_slider_pane_t1

0x6a4a,	// (0x000269b1) setting_slider_pane_t2

0x6a64,	// (0x000269cb) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002f4a0) setting_slider_pane_t

0x6a7c,	// (0x000269e3) slider_set_pane

0x1a0d,	// (0x00021974) bg_set_opt_pane_cp2

0x1a77,	// (0x000219de) setting_slider_graphic_pane_g1

0x6a92,	// (0x000269f9) setting_slider_graphic_pane_t1

0x6aa2,	// (0x00026a09) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002f4a7) setting_slider_graphic_pane_t

0x6ab2,	// (0x00026a19) slider_set_pane_cp

0x1a0d,	// (0x00021974) input_focus_pane_cp1

0xadb4,	// (0x0002ad1b) list_set_text_pane

0x1a03,	// (0x0002196a) setting_text_pane_g1

0x1a0d,	// (0x00021974) input_focus_pane_cp2

0x1a03,	// (0x0002196a) setting_code_pane_g1

0x1a80,	// (0x000219e7) setting_code_pane_t1

0x5512,	// (0x00025479) set_text_pane_t1_ParamLimits

0x5512,	// (0x00025479) set_text_pane_t1

0x1f69,	// (0x00021ed0) set_opt_bg_pane_g1

0x1f71,	// (0x00021ed8) set_opt_bg_pane_g2

0xad8e,	// (0x0002acf5) set_opt_bg_pane_g3

0x1f81,	// (0x00021ee8) set_opt_bg_pane_g4

0x1f89,	// (0x00021ef0) set_opt_bg_pane_g5

0x1f91,	// (0x00021ef8) set_opt_bg_pane_g6

0xad98,	// (0x0002acff) set_opt_bg_pane_g7

0xada0,	// (0x0002ad07) set_opt_bg_pane_g8

0xadaa,	// (0x0002ad11) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x0002f8a1) set_opt_bg_pane_g

0xad81,	// (0x0002ace8) slider_set_pane_g1

0x9021,	// (0x00028f88) slider_set_pane_g2

0x0006,

0xf92b,	// (0x0002f892) slider_set_pane_g

0x8fbd,	// (0x00028f24) volume_set_pane_g1

0x8fc5,	// (0x00028f2c) volume_set_pane_g2

0x8fcd,	// (0x00028f34) volume_set_pane_g3

0x8fd5,	// (0x00028f3c) volume_set_pane_g4

0x8fdd,	// (0x00028f44) volume_set_pane_g5

0x8fe5,	// (0x00028f4c) volume_set_pane_g6

0x8fed,	// (0x00028f54) volume_set_pane_g7

0x8ff5,	// (0x00028f5c) volume_set_pane_g8

0x8ffd,	// (0x00028f64) volume_set_pane_g9

0x9005,	// (0x00028f6c) volume_set_pane_g10

0x0009,

0xf903,	// (0x0002f86a) volume_set_pane_g

0x6aba,	// (0x00026a21) indicator_pane_ParamLimits

0x6aba,	// (0x00026a21) indicator_pane

0x6ac6,	// (0x00026a2d) main_idle_pane_g2_ParamLimits

0x6ac6,	// (0x00026a2d) main_idle_pane_g2

0x6aee,	// (0x00026a55) main_pane_idle_g1_ParamLimits

0x6aee,	// (0x00026a55) main_pane_idle_g1

0x1aa8,	// (0x00021a0f) popup_clock_digital_analogue_window_ParamLimits

0x1aa8,	// (0x00021a0f) popup_clock_digital_analogue_window

0x6afb,	// (0x00026a62) soft_indicator_pane_ParamLimits

0x6afb,	// (0x00026a62) soft_indicator_pane

0x6b07,	// (0x00026a6e) wallpaper_pane_ParamLimits

0x6b07,	// (0x00026a6e) wallpaper_pane

0x1a03,	// (0x0002196a) wallpaper_pane_g1

0x6b13,	// (0x00026a7a) indicator_pane_g1_ParamLimits

0x6b13,	// (0x00026a7a) indicator_pane_g1

0xb1c7,	// (0x0002b12e) navi_navi_icon_text_pane_srt_g1

0x1ad6,	// (0x00021a3d) soft_indicator_pane_t1

0x1af0,	// (0x00021a57) aid_ps_area_pane

0x6b1f,	// (0x00026a86) aid_ps_clock_pane

0x1b01,	// (0x00021a68) aid_ps_indicator_pane

0x1b0d,	// (0x00021a74) indicator_ps_pane_ParamLimits

0x1b0d,	// (0x00021a74) indicator_ps_pane

0x1b1c,	// (0x00021a83) power_save_pane_g1_ParamLimits

0x1b1c,	// (0x00021a83) power_save_pane_g1

0x1b28,	// (0x00021a8f) power_save_pane_g2_ParamLimits

0x1b28,	// (0x00021a8f) power_save_pane_g2

0x6582,	// (0x000264e9) aid_navinavi_width_pane

0x1af0,	// (0x00021a57) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002f4ac) power_save_pane_g_ParamLimits

0xf545,	// (0x0002f4ac) power_save_pane_g

0x1b36,	// (0x00021a9d) power_save_pane_t1_ParamLimits

0x1b36,	// (0x00021a9d) power_save_pane_t1

0x6b1f,	// (0x00026a86) aid_ps_clock_pane_ParamLimits

0x1b01,	// (0x00021a68) aid_ps_indicator_pane_ParamLimits

0x1b48,	// (0x00021aaf) power_save_pane_t4_ParamLimits

0x1b48,	// (0x00021aaf) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002f4b1) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002f4b1) power_save_pane_t

0x1b72,	// (0x00021ad9) power_save_t3_ParamLimits

0x1b72,	// (0x00021ad9) power_save_t3

0x1b5d,	// (0x00021ac4) power_save_t2_ParamLimits

0x1b5d,	// (0x00021ac4) power_save_t2

0x1b87,	// (0x00021aee) indicator_ps_pane_g1

0x6b2d,	// (0x00026a94) ai_gene_pane_ParamLimits

0x6b2d,	// (0x00026a94) ai_gene_pane

0x6b39,	// (0x00026aa0) ai_links_pane_ParamLimits

0x6b39,	// (0x00026aa0) ai_links_pane

0x6b45,	// (0x00026aac) indicator_pane_cp1_ParamLimits

0x6b45,	// (0x00026aac) indicator_pane_cp1

0x6b51,	// (0x00026ab8) main_pane_idle_g1_cp_ParamLimits

0x6b51,	// (0x00026ab8) main_pane_idle_g1_cp

0x6b5d,	// (0x00026ac4) popup_ai_links_title_window

0x6b66,	// (0x00026acd) soft_indicator_pane_cp1_ParamLimits

0x6b66,	// (0x00026acd) soft_indicator_pane_cp1

0xab7b,	// (0x0002aae2) ai_links_pane_g1

0xab84,	// (0x0002aaeb) grid_ai_links_pane

0xab5e,	// (0x0002aac5) ai_gene_pane_1

0xab69,	// (0x0002aad0) ai_gene_pane_2

0xab72,	// (0x0002aad9) list_highlight_pane_cp4

0xab42,	// (0x0002aaa9) cell_ai_link_pane_ParamLimits

0xab42,	// (0x0002aaa9) cell_ai_link_pane

0xab3a,	// (0x0002aaa1) cell_ai_link_pane_g1

0x1cb4,	// (0x00021c1b) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x0002f845) cell_ai_link_pane_g

0x1a0d,	// (0x00021974) grid_highlight_cp2

0x1a0d,	// (0x00021974) bg_popup_sub_pane_cp1

0x1b9e,	// (0x00021b05) popup_ai_links_title_window_t1

0xaa8a,	// (0x0002a9f1) ai_gene_pane_1_g1_ParamLimits

0xaa8a,	// (0x0002a9f1) ai_gene_pane_1_g1

0xaa96,	// (0x0002a9fd) ai_gene_pane_1_g2_ParamLimits

0xaa96,	// (0x0002a9fd) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x0002f83b) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x0002f83b) ai_gene_pane_1_g

0xaaa3,	// (0x0002aa0a) ai_gene_pane_1_t1_ParamLimits

0xaaa3,	// (0x0002aa0a) ai_gene_pane_1_t1

0xaad7,	// (0x0002aa3e) grid_ai_soft_ind_pane

0xaa75,	// (0x0002a9dc) ai_gene_pane_2_t1_ParamLimits

0xaa75,	// (0x0002a9dc) ai_gene_pane_2_t1

0x6b72,	// (0x00026ad9) main_pane_empty_t1_ParamLimits

0x6b72,	// (0x00026ad9) main_pane_empty_t1

0x6b8a,	// (0x00026af1) main_pane_empty_t2_ParamLimits

0x6b8a,	// (0x00026af1) main_pane_empty_t2

0x6b9f,	// (0x00026b06) main_pane_empty_t3_ParamLimits

0x6b9f,	// (0x00026b06) main_pane_empty_t3

0x6bb1,	// (0x00026b18) main_pane_empty_t4_ParamLimits

0x6bb1,	// (0x00026b18) main_pane_empty_t4

0x6bc3,	// (0x00026b2a) main_pane_empty_t5_ParamLimits

0x6bc3,	// (0x00026b2a) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002f4b6) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002f4b6) main_pane_empty_t

0x1fee,	// (0x00021f55) bg_popup_window_pane_ParamLimits

0x1fee,	// (0x00021f55) bg_popup_window_pane

0xa7e5,	// (0x0002a74c) find_popup_pane_cp2_ParamLimits

0xa7e5,	// (0x0002a74c) find_popup_pane_cp2

0xa7f1,	// (0x0002a758) heading_pane_ParamLimits

0xa7f1,	// (0x0002a758) heading_pane

0x1a0d,	// (0x00021974) bg_popup_sub_pane

0xa75f,	// (0x0002a6c6) bg_popup_window_pane_g1_ParamLimits

0xa75f,	// (0x0002a6c6) bg_popup_window_pane_g1

0xa76b,	// (0x0002a6d2) bg_popup_window_pane_g2_ParamLimits

0xa76b,	// (0x0002a6d2) bg_popup_window_pane_g2

0xa777,	// (0x0002a6de) bg_popup_window_pane_g3_ParamLimits

0xa777,	// (0x0002a6de) bg_popup_window_pane_g3

0xa783,	// (0x0002a6ea) bg_popup_window_pane_g4_ParamLimits

0xa783,	// (0x0002a6ea) bg_popup_window_pane_g4

0xa78f,	// (0x0002a6f6) bg_popup_window_pane_g5_ParamLimits

0xa78f,	// (0x0002a6f6) bg_popup_window_pane_g5

0xa79b,	// (0x0002a702) bg_popup_window_pane_g6_ParamLimits

0xa79b,	// (0x0002a702) bg_popup_window_pane_g6

0xa7a7,	// (0x0002a70e) bg_popup_window_pane_g7_ParamLimits

0xa7a7,	// (0x0002a70e) bg_popup_window_pane_g7

0xa7b3,	// (0x0002a71a) bg_popup_window_pane_g8_ParamLimits

0xa7b3,	// (0x0002a71a) bg_popup_window_pane_g8

0xa7bf,	// (0x0002a726) bg_popup_window_pane_g9_ParamLimits

0xa7bf,	// (0x0002a726) bg_popup_window_pane_g9

0xa7cb,	// (0x0002a732) bg_popup_window_pane_g10_ParamLimits

0xa7cb,	// (0x0002a732) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x0002f803) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x0002f803) bg_popup_window_pane_g

0xa6f4,	// (0x0002a65b) bg_popup_heading_pane_ParamLimits

0xa6f4,	// (0x0002a65b) bg_popup_heading_pane

0x90a9,	// (0x00029010) tabs_4_passive_pane_cp_srt_ParamLimits

0x90a9,	// (0x00029010) tabs_4_passive_pane_cp_srt

0x90bb,	// (0x00029022) tabs_4_passive_pane_srt_ParamLimits

0xa708,	// (0x0002a66f) heading_pane_g2

0x90bb,	// (0x00029022) tabs_4_passive_pane_srt

0x2053,	// (0x00021fba) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2053,	// (0x00021fba) bg_passive_tab_pane_cp3_srt

0xa710,	// (0x0002a677) heading_pane_t1_ParamLimits

0xa710,	// (0x0002a677) heading_pane_t1

0xa727,	// (0x0002a68e) heading_pane_t2_ParamLimits

0xa727,	// (0x0002a68e) heading_pane_t2

0x0001,

0xf897,	// (0x0002f7fe) heading_pane_t_ParamLimits

0xf897,	// (0x0002f7fe) heading_pane_t

0xa231,	// (0x0002a198) bg_popup_heading_pane_g1

0xa2e0,	// (0x0002a247) bg_popup_heading_pane_g2

0xa2ea,	// (0x0002a251) bg_popup_heading_pane_g3

0xa2f4,	// (0x0002a25b) bg_popup_heading_pane_g4

0xa2fe,	// (0x0002a265) bg_popup_heading_pane_g5

0xa308,	// (0x0002a26f) bg_popup_heading_pane_g6

0xa310,	// (0x0002a277) bg_popup_heading_pane_g7

0xa318,	// (0x0002a27f) bg_popup_heading_pane_g8

0xa322,	// (0x0002a289) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x0002f7ba) bg_popup_heading_pane_g

0x855a,	// (0x000284c1) bg_popup_sub_pane_g1

0x8562,	// (0x000284c9) bg_popup_sub_pane_g2

0x856a,	// (0x000284d1) bg_popup_sub_pane_g3

0x8572,	// (0x000284d9) bg_popup_sub_pane_g4

0x857a,	// (0x000284e1) bg_popup_sub_pane_g5

0x8582,	// (0x000284e9) bg_popup_sub_pane_g6

0x858a,	// (0x000284f1) bg_popup_sub_pane_g7

0x8592,	// (0x000284f9) bg_popup_sub_pane_g8

0x859a,	// (0x00028501) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x0002f794) bg_popup_sub_pane_g

0x1a5b,	// (0x000219c2) bg_popup_window_pane_cp5_ParamLimits

0x1a5b,	// (0x000219c2) bg_popup_window_pane_cp5

0x1bbb,	// (0x00021b22) popup_note_window_g1_ParamLimits

0x1bbb,	// (0x00021b22) popup_note_window_g1

0x1bc7,	// (0x00021b2e) popup_note_window_t1_ParamLimits

0x1bc7,	// (0x00021b2e) popup_note_window_t1

0x1bdd,	// (0x00021b44) popup_note_window_t2_ParamLimits

0x1bdd,	// (0x00021b44) popup_note_window_t2

0x1bf3,	// (0x00021b5a) popup_note_window_t3_ParamLimits

0x1bf3,	// (0x00021b5a) popup_note_window_t3

0x1c09,	// (0x00021b70) popup_note_window_t4_ParamLimits

0x1c09,	// (0x00021b70) popup_note_window_t4

0x1c31,	// (0x00021b98) popup_note_window_t5_ParamLimits

0x1c31,	// (0x00021b98) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002f4c1) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002f4c1) popup_note_window_t

0x1c55,	// (0x00021bbc) bg_popup_window_pane_cp6_ParamLimits

0x1c55,	// (0x00021bbc) bg_popup_window_pane_cp6

0x8e15,	// (0x00028d7c) popup_note_image_window_g1_ParamLimits

0x8e15,	// (0x00028d7c) popup_note_image_window_g1

0x8e21,	// (0x00028d88) popup_note_image_window_g2_ParamLimits

0x8e21,	// (0x00028d88) popup_note_image_window_g2

0x0001,

0xf821,	// (0x0002f788) popup_note_image_window_g_ParamLimits

0xf821,	// (0x0002f788) popup_note_image_window_g

0x8e3a,	// (0x00028da1) popup_note_image_window_t1_ParamLimits

0x8e3a,	// (0x00028da1) popup_note_image_window_t1

0xa1eb,	// (0x0002a152) popup_note_image_window_t2_ParamLimits

0xa1eb,	// (0x0002a152) popup_note_image_window_t2

0xa204,	// (0x0002a16b) popup_note_image_window_t3_ParamLimits

0xa204,	// (0x0002a16b) popup_note_image_window_t3

0x0002,

0xf826,	// (0x0002f78d) popup_note_image_window_t_ParamLimits

0xf826,	// (0x0002f78d) popup_note_image_window_t

0x8cde,	// (0x00028c45) bg_popup_window_pane_cp7_ParamLimits

0x8cde,	// (0x00028c45) bg_popup_window_pane_cp7

0x8d0e,	// (0x00028c75) popup_note_wait_window_g1_ParamLimits

0x8d0e,	// (0x00028c75) popup_note_wait_window_g1

0x8d1a,	// (0x00028c81) popup_note_wait_window_g2_ParamLimits

0x8d1a,	// (0x00028c81) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x0002f776) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x0002f776) popup_note_wait_window_g

0x8d32,	// (0x00028c99) popup_note_wait_window_t1_ParamLimits

0x8d32,	// (0x00028c99) popup_note_wait_window_t1

0x8d59,	// (0x00028cc0) popup_note_wait_window_t2_ParamLimits

0x8d59,	// (0x00028cc0) popup_note_wait_window_t2

0x8d76,	// (0x00028cdd) popup_note_wait_window_t3_ParamLimits

0x8d76,	// (0x00028cdd) popup_note_wait_window_t3

0x8d89,	// (0x00028cf0) popup_note_wait_window_t4_ParamLimits

0x8d89,	// (0x00028cf0) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x0002f77d) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x0002f77d) popup_note_wait_window_t

0x8dae,	// (0x00028d15) wait_bar_pane_ParamLimits

0x8dae,	// (0x00028d15) wait_bar_pane

0x1a0d,	// (0x00021974) wait_anim_pane

0x1a0d,	// (0x00021974) wait_border_pane

0x1a03,	// (0x0002196a) wait_anim_pane_g1

0x1a03,	// (0x0002196a) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x0002f636) wait_anim_pane_g

0x8c8a,	// (0x00028bf1) wait_border_pane_g1

0x8c95,	// (0x00028bfc) wait_border_pane_g2

0x8c9e,	// (0x00028c05) wait_border_pane_g3

0x0002,

0xf808,	// (0x0002f76f) wait_border_pane_g

0x8af5,	// (0x00028a5c) bg_popup_window_pane_cp16_ParamLimits

0x8af5,	// (0x00028a5c) bg_popup_window_pane_cp16

0x8bf5,	// (0x00028b5c) indicator_popup_pane_cp4_ParamLimits

0x8bf5,	// (0x00028b5c) indicator_popup_pane_cp4

0x8c09,	// (0x00028b70) popup_query_data_window_t1_ParamLimits

0x8c09,	// (0x00028b70) popup_query_data_window_t1

0x8c1b,	// (0x00028b82) popup_query_data_window_t2_ParamLimits

0x8c1b,	// (0x00028b82) popup_query_data_window_t2

0x8c34,	// (0x00028b9b) popup_query_data_window_t3_ParamLimits

0x8c34,	// (0x00028b9b) popup_query_data_window_t3

0x0002,

0xf801,	// (0x0002f768) popup_query_data_window_t_ParamLimits

0xf801,	// (0x0002f768) popup_query_data_window_t

0x8c4e,	// (0x00028bb5) query_popup_data_pane_ParamLimits

0x8c4e,	// (0x00028bb5) query_popup_data_pane

0x8c62,	// (0x00028bc9) query_popup_data_pane_cp1_ParamLimits

0x8c62,	// (0x00028bc9) query_popup_data_pane_cp1

0x8af5,	// (0x00028a5c) bg_popup_window_pane_cp10_ParamLimits

0x8af5,	// (0x00028a5c) bg_popup_window_pane_cp10

0x8b27,	// (0x00028a8e) indicator_popup_pane_ParamLimits

0x8b27,	// (0x00028a8e) indicator_popup_pane

0x8b49,	// (0x00028ab0) popup_query_code_window_t1_ParamLimits

0x8b49,	// (0x00028ab0) popup_query_code_window_t1

0x8b63,	// (0x00028aca) popup_query_code_window_t2_ParamLimits

0x8b63,	// (0x00028aca) popup_query_code_window_t2

0x8bac,	// (0x00028b13) popup_query_code_window_t3_ParamLimits

0x8bac,	// (0x00028b13) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x0002f761) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x0002f761) popup_query_code_window_t

0x8bdb,	// (0x00028b42) query_popup_pane_ParamLimits

0x8bdb,	// (0x00028b42) query_popup_pane

0x1c55,	// (0x00021bbc) bg_popup_window_pane_cp15_ParamLimits

0x1c55,	// (0x00021bbc) bg_popup_window_pane_cp15

0x6bfd,	// (0x00026b64) indicator_popup_pane_cp1_ParamLimits

0x6bfd,	// (0x00026b64) indicator_popup_pane_cp1

0x6c10,	// (0x00026b77) indicator_popup_pane_cp2_ParamLimits

0x6c10,	// (0x00026b77) indicator_popup_pane_cp2

0x6c23,	// (0x00026b8a) popup_query_data_code_window_g1_ParamLimits

0x6c23,	// (0x00026b8a) popup_query_data_code_window_g1

0x1c73,	// (0x00021bda) popup_query_data_code_window_t1_ParamLimits

0x1c73,	// (0x00021bda) popup_query_data_code_window_t1

0x1c85,	// (0x00021bec) popup_query_data_code_window_t2_ParamLimits

0x1c85,	// (0x00021bec) popup_query_data_code_window_t2

0x6c36,	// (0x00026b9d) popup_query_data_code_window_t3_ParamLimits

0x6c36,	// (0x00026b9d) popup_query_data_code_window_t3

0x6c4c,	// (0x00026bb3) popup_query_data_code_window_t4_ParamLimits

0x6c4c,	// (0x00026bb3) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002f4cc) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002f4cc) popup_query_data_code_window_t

0x2616,	// (0x0002257d) list_single_midp_graphic_pane_g3

0x6c64,	// (0x00026bcb) query_popup_data_pane_cp2_ParamLimits

0x6c77,	// (0x00026bde) query_popup_pane_cp2_ParamLimits

0x6c77,	// (0x00026bde) query_popup_pane_cp2

0x1a0d,	// (0x00021974) bg_popup_window_pane_cp11

0x8ad9,	// (0x00028a40) heading_pane_cp5

0x8ae1,	// (0x00028a48) listscroll_popup_info_pane

0x1a0d,	// (0x00021974) input_focus_pane_cp3

0x1c97,	// (0x00021bfe) query_popup_pane_t1

0x1ca5,	// (0x00021c0c) list_popup_info_pane_ParamLimits

0x1ca5,	// (0x00021c0c) list_popup_info_pane

0x1cb4,	// (0x00021c1b) listscroll_popup_info_pane_g1

0x1cbc,	// (0x00021c23) scroll_pane_cp7

0x6c8a,	// (0x00026bf1) popup_info_list_pane_t1_ParamLimits

0x6c8a,	// (0x00026bf1) popup_info_list_pane_t1

0x6ca4,	// (0x00026c0b) popup_info_list_pane_t2_ParamLimits

0x6ca4,	// (0x00026c0b) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002f4d5) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002f4d5) popup_info_list_pane_t

0x1a0d,	// (0x00021974) bg_popup_window_pane_cp12

0xb1e1,	// (0x0002b148) find_popup_pane

0x1a69,	// (0x000219d0) bg_popup_window_pane_cp3

0x1cc6,	// (0x00021c2d) heading_pane_cp3

0x1cd5,	// (0x00021c3c) listscroll_popup_graphic_pane

0x1a0d,	// (0x00021974) bg_popup_window_pane_cp4

0x6d0e,	// (0x00026c75) heading_pane_cp4

0x1ce5,	// (0x00021c4c) listscroll_popup_colour_pane

0x6d18,	// (0x00026c7f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6d18,	// (0x00026c7f) cell_large_graphic_colour_none_popup_pane

0x6d2c,	// (0x00026c93) grid_large_graphic_colour_popup_pane_ParamLimits

0x6d2c,	// (0x00026c93) grid_large_graphic_colour_popup_pane

0x6d50,	// (0x00026cb7) listscroll_popup_colour_pane_g1_ParamLimits

0x6d50,	// (0x00026cb7) listscroll_popup_colour_pane_g1

0x6d67,	// (0x00026cce) listscroll_popup_colour_pane_g2_ParamLimits

0x6d67,	// (0x00026cce) listscroll_popup_colour_pane_g2

0x6d7e,	// (0x00026ce5) listscroll_popup_colour_pane_g3_ParamLimits

0x6d7e,	// (0x00026ce5) listscroll_popup_colour_pane_g3

0x6d8e,	// (0x00026cf5) listscroll_popup_colour_pane_g4_ParamLimits

0x6d8e,	// (0x00026cf5) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002f4da) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002f4da) listscroll_popup_colour_pane_g

0x1ced,	// (0x00021c54) scroll_pane_cp6_ParamLimits

0x1ced,	// (0x00021c54) scroll_pane_cp6

0x6d9e,	// (0x00026d05) cell_large_graphic_colour_popup_pane_ParamLimits

0x6d9e,	// (0x00026d05) cell_large_graphic_colour_popup_pane

0x6dbd,	// (0x00026d24) cell_large_graphic_colour_none_popup_pane_t1

0x1a0d,	// (0x00021974) grid_highlight_pane_cp5

0x1cff,	// (0x00021c66) cell_large_graphic_colour_popup_pane_g1

0x1d07,	// (0x00021c6e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002f4e3) cell_large_graphic_colour_popup_pane_g

0x1d0f,	// (0x00021c76) cell_large_graphic_colour_popup_pane_g2_copy1

0x1d18,	// (0x00021c7f) grid_highlight_pane_cp4

0x1d20,	// (0x00021c87) bg_popup_window_pane_cp8_ParamLimits

0x1d20,	// (0x00021c87) bg_popup_window_pane_cp8

0x6dcc,	// (0x00026d33) popup_snote_single_text_window_g1_ParamLimits

0x6dcc,	// (0x00026d33) popup_snote_single_text_window_g1

0x6dde,	// (0x00026d45) popup_snote_single_text_window_t1_ParamLimits

0x6dde,	// (0x00026d45) popup_snote_single_text_window_t1

0x6df1,	// (0x00026d58) popup_snote_single_text_window_t2_ParamLimits

0x6df1,	// (0x00026d58) popup_snote_single_text_window_t2

0x6e04,	// (0x00026d6b) popup_snote_single_text_window_t3_ParamLimits

0x6e04,	// (0x00026d6b) popup_snote_single_text_window_t3

0x6e3d,	// (0x00026da4) popup_snote_single_text_window_t4_ParamLimits

0x6e3d,	// (0x00026da4) popup_snote_single_text_window_t4

0x6e71,	// (0x00026dd8) popup_snote_single_text_window_t5_ParamLimits

0x6e71,	// (0x00026dd8) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002f4e8) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002f4e8) popup_snote_single_text_window_t

0x1d3b,	// (0x00021ca2) bg_popup_window_pane_cp9_ParamLimits

0x1d3b,	// (0x00021ca2) bg_popup_window_pane_cp9

0x6dcc,	// (0x00026d33) popup_snote_single_graphic_window_g1_ParamLimits

0x6dcc,	// (0x00026d33) popup_snote_single_graphic_window_g1

0x1d49,	// (0x00021cb0) popup_snote_single_graphic_window_g2_ParamLimits

0x1d49,	// (0x00021cb0) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002f4f3) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002f4f3) popup_snote_single_graphic_window_g

0x1d55,	// (0x00021cbc) popup_snote_single_graphic_window_t1_ParamLimits

0x1d55,	// (0x00021cbc) popup_snote_single_graphic_window_t1

0x1d68,	// (0x00021ccf) popup_snote_single_graphic_window_t2_ParamLimits

0x1d68,	// (0x00021ccf) popup_snote_single_graphic_window_t2

0x6ea0,	// (0x00026e07) popup_snote_single_graphic_window_t3_ParamLimits

0x6ea0,	// (0x00026e07) popup_snote_single_graphic_window_t3

0x6ed9,	// (0x00026e40) popup_snote_single_graphic_window_t4_ParamLimits

0x6ed9,	// (0x00026e40) popup_snote_single_graphic_window_t4

0x6f0d,	// (0x00026e74) popup_snote_single_graphic_window_t5_ParamLimits

0x6f0d,	// (0x00026e74) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002f4f8) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002f4f8) popup_snote_single_graphic_window_t

0xb123,	// (0x0002b08a) grid_graphic_popup_pane_ParamLimits

0xb123,	// (0x0002b08a) grid_graphic_popup_pane

0xb14d,	// (0x0002b0b4) listscroll_popup_graphic_pane_g1_ParamLimits

0xb14d,	// (0x0002b0b4) listscroll_popup_graphic_pane_g1

0xb161,	// (0x0002b0c8) listscroll_popup_graphic_pane_g2_ParamLimits

0xb161,	// (0x0002b0c8) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x0002f8de) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x0002f8de) listscroll_popup_graphic_pane_g

0xb175,	// (0x0002b0dc) scroll_pane_cp5

0xb0b9,	// (0x0002b020) cell_graphic_popup_pane_ParamLimits

0xb0b9,	// (0x0002b020) cell_graphic_popup_pane

0xb09a,	// (0x0002b001) cell_graphic_popup_pane_g1

0xb0a2,	// (0x0002b009) cell_graphic_popup_pane_g2

0x1d0f,	// (0x00021c76) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x0002f8d7) cell_graphic_popup_pane_g

0xb0ab,	// (0x0002b012) cell_graphic_popup_pane_t2

0x1d18,	// (0x00021c7f) grid_highlight_pane_cp3

0x1d8d,	// (0x00021cf4) list_gen_pane_ParamLimits

0x1d8d,	// (0x00021cf4) list_gen_pane

0x1db5,	// (0x00021d1c) scroll_pane

0xaff2,	// (0x0002af59) bg_list_pane_g1_ParamLimits

0xaff2,	// (0x0002af59) bg_list_pane_g1

0xb00f,	// (0x0002af76) bg_list_pane_g2_ParamLimits

0xb00f,	// (0x0002af76) bg_list_pane_g2

0xb024,	// (0x0002af8b) bg_list_pane_g3_ParamLimits

0xb024,	// (0x0002af8b) bg_list_pane_g3

0xb038,	// (0x0002af9f) bg_list_pane_g4_ParamLimits

0xb038,	// (0x0002af9f) bg_list_pane_g4

0xb04c,	// (0x0002afb3) bg_list_pane_g5_ParamLimits

0xb04c,	// (0x0002afb3) bg_list_pane_g5

0x0004,

0xf965,	// (0x0002f8cc) bg_list_pane_g_ParamLimits

0xf965,	// (0x0002f8cc) bg_list_pane_g

0x5de7,	// (0x00025d4e) list_double2_graphic_large_graphic_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_double2_graphic_large_graphic_pane

0x5de7,	// (0x00025d4e) list_double2_graphic_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_double2_graphic_pane

0x5de7,	// (0x00025d4e) list_double2_large_graphic_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_double2_large_graphic_pane

0x5de7,	// (0x00025d4e) list_double2_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_double2_pane

0x5de7,	// (0x00025d4e) list_double_graphic_heading_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_double_graphic_heading_pane

0x5de7,	// (0x00025d4e) list_double_graphic_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_double_graphic_pane

0x5de7,	// (0x00025d4e) list_double_heading_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_double_heading_pane

0x5de7,	// (0x00025d4e) list_double_large_graphic_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_double_large_graphic_pane

0x5de7,	// (0x00025d4e) list_double_number_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_double_number_pane

0x5de7,	// (0x00025d4e) list_double_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_double_pane

0x5de7,	// (0x00025d4e) list_double_time_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_double_time_pane

0x5de7,	// (0x00025d4e) list_setting_number_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_setting_number_pane

0x5de7,	// (0x00025d4e) list_setting_pane_ParamLimits

0x5de7,	// (0x00025d4e) list_setting_pane

0x5e47,	// (0x00025dae) list_single_2graphic_pane_ParamLimits

0x5e47,	// (0x00025dae) list_single_2graphic_pane

0x5e47,	// (0x00025dae) list_single_graphic_heading_pane_ParamLimits

0x5e47,	// (0x00025dae) list_single_graphic_heading_pane

0x5e47,	// (0x00025dae) list_single_graphic_pane_ParamLimits

0x5e47,	// (0x00025dae) list_single_graphic_pane

0x5e47,	// (0x00025dae) list_single_heading_pane_ParamLimits

0x5e47,	// (0x00025dae) list_single_heading_pane

0xafcf,	// (0x0002af36) list_single_large_graphic_pane_ParamLimits

0xafcf,	// (0x0002af36) list_single_large_graphic_pane

0x5e47,	// (0x00025dae) list_single_number_heading_pane_ParamLimits

0x5e47,	// (0x00025dae) list_single_number_heading_pane

0x5e47,	// (0x00025dae) list_single_number_pane_ParamLimits

0x5e47,	// (0x00025dae) list_single_number_pane

0x5e47,	// (0x00025dae) list_single_pane_ParamLimits

0x5e47,	// (0x00025dae) list_single_pane

0x1a0d,	// (0x00021974) list_highlight_pane_cp1

0x5539,	// (0x000254a0) list_single_pane_g1_ParamLimits

0x5539,	// (0x000254a0) list_single_pane_g1

0x5545,	// (0x000254ac) list_single_pane_g2_ParamLimits

0x5545,	// (0x000254ac) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002f50a) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002f50a) list_single_pane_g

0x5dd1,	// (0x00025d38) list_single_pane_t1_ParamLimits

0x5dd1,	// (0x00025d38) list_single_pane_t1

0x5539,	// (0x000254a0) list_single_number_pane_g1_ParamLimits

0x5539,	// (0x000254a0) list_single_number_pane_g1

0x5545,	// (0x000254ac) list_single_number_pane_g2_ParamLimits

0x5545,	// (0x000254ac) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002f50a) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002f50a) list_single_number_pane_g

0x5551,	// (0x000254b8) list_single_number_pane_t1_ParamLimits

0x5551,	// (0x000254b8) list_single_number_pane_t1

0x5d93,	// (0x00025cfa) list_single_number_pane_t2_ParamLimits

0x5d93,	// (0x00025cfa) list_single_number_pane_t2

0x0001,

0xf926,	// (0x0002f88d) list_single_number_pane_t_ParamLimits

0xf926,	// (0x0002f88d) list_single_number_pane_t

0x552d,	// (0x00025494) list_single_graphic_pane_g1_ParamLimits

0x552d,	// (0x00025494) list_single_graphic_pane_g1

0x5539,	// (0x000254a0) list_single_graphic_pane_g2_ParamLimits

0x5539,	// (0x000254a0) list_single_graphic_pane_g2

0x5545,	// (0x000254ac) list_single_graphic_pane_g3_ParamLimits

0x5545,	// (0x000254ac) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002f503) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002f503) list_single_graphic_pane_g

0x5551,	// (0x000254b8) list_single_graphic_pane_t1_ParamLimits

0x5551,	// (0x000254b8) list_single_graphic_pane_t1

0x5539,	// (0x000254a0) list_single_heading_pane_g1_ParamLimits

0x5539,	// (0x000254a0) list_single_heading_pane_g1

0x5545,	// (0x000254ac) list_single_heading_pane_g2_ParamLimits

0x5545,	// (0x000254ac) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002f50a) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002f50a) list_single_heading_pane_g

0x5567,	// (0x000254ce) list_single_heading_pane_t1_ParamLimits

0x5567,	// (0x000254ce) list_single_heading_pane_t1

0x557d,	// (0x000254e4) list_single_heading_pane_t2_ParamLimits

0x557d,	// (0x000254e4) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002f50f) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002f50f) list_single_heading_pane_t

0x5539,	// (0x000254a0) list_single_number_heading_pane_g1_ParamLimits

0x5539,	// (0x000254a0) list_single_number_heading_pane_g1

0x5545,	// (0x000254ac) list_single_number_heading_pane_g2_ParamLimits

0x5545,	// (0x000254ac) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002f50a) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002f50a) list_single_number_heading_pane_g

0x5567,	// (0x000254ce) list_single_number_heading_pane_t1_ParamLimits

0x5567,	// (0x000254ce) list_single_number_heading_pane_t1

0x558f,	// (0x000254f6) list_single_number_heading_pane_t2_ParamLimits

0x558f,	// (0x000254f6) list_single_number_heading_pane_t2

0x55a1,	// (0x00025508) list_single_number_heading_pane_t3_ParamLimits

0x55a1,	// (0x00025508) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002f514) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002f514) list_single_number_heading_pane_t

0x55b3,	// (0x0002551a) list_single_graphic_heading_pane_g1_ParamLimits

0x55b3,	// (0x0002551a) list_single_graphic_heading_pane_g1

0x55bf,	// (0x00025526) list_single_graphic_heading_pane_g4_ParamLimits

0x55bf,	// (0x00025526) list_single_graphic_heading_pane_g4

0x5545,	// (0x000254ac) list_single_graphic_heading_pane_g5_ParamLimits

0x5545,	// (0x000254ac) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002f51b) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002f51b) list_single_graphic_heading_pane_g

0x5567,	// (0x000254ce) list_single_graphic_heading_pane_t1_ParamLimits

0x5567,	// (0x000254ce) list_single_graphic_heading_pane_t1

0x55d0,	// (0x00025537) list_single_graphic_heading_pane_t2_ParamLimits

0x55d0,	// (0x00025537) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002f522) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002f522) list_single_graphic_heading_pane_t

0x55e2,	// (0x00025549) list_single_large_graphic_pane_g1_ParamLimits

0x55e2,	// (0x00025549) list_single_large_graphic_pane_g1

0x55ee,	// (0x00025555) list_single_large_graphic_pane_g2_ParamLimits

0x55ee,	// (0x00025555) list_single_large_graphic_pane_g2

0x55fa,	// (0x00025561) list_single_large_graphic_pane_g3_ParamLimits

0x55fa,	// (0x00025561) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002f527) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002f527) list_single_large_graphic_pane_g

0x8c95,	// (0x00028bfc) wait_border_pane_g2_copy1

0x5606,	// (0x0002556d) list_single_large_graphic_pane_g4_cp2

0x560e,	// (0x00025575) list_single_large_graphic_pane_t1_ParamLimits

0x560e,	// (0x00025575) list_single_large_graphic_pane_t1

0x5624,	// (0x0002558b) list_double_pane_g1_ParamLimits

0x5624,	// (0x0002558b) list_double_pane_g1

0x5630,	// (0x00025597) list_double_pane_g2_ParamLimits

0x5630,	// (0x00025597) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002f52e) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002f52e) list_double_pane_g

0x563c,	// (0x000255a3) list_double_pane_t1_ParamLimits

0x563c,	// (0x000255a3) list_double_pane_t1

0x5652,	// (0x000255b9) list_double_pane_t2_ParamLimits

0x5652,	// (0x000255b9) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002f533) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002f533) list_double_pane_t

0x5664,	// (0x000255cb) list_double2_pane_g1_ParamLimits

0x5664,	// (0x000255cb) list_double2_pane_g1

0x5630,	// (0x00025597) list_double2_pane_g2_ParamLimits

0x5630,	// (0x00025597) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002f538) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002f538) list_double2_pane_g

0x563c,	// (0x000255a3) list_double2_pane_t1_ParamLimits

0x563c,	// (0x000255a3) list_double2_pane_t1

0x5675,	// (0x000255dc) list_double2_pane_t2_ParamLimits

0x5675,	// (0x000255dc) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002f53d) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002f53d) list_double2_pane_t

0x5624,	// (0x0002558b) list_double_number_pane_g1_ParamLimits

0x5624,	// (0x0002558b) list_double_number_pane_g1

0x5630,	// (0x00025597) list_double_number_pane_g2_ParamLimits

0x5630,	// (0x00025597) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002f52e) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002f52e) list_double_number_pane_g

0x5687,	// (0x000255ee) list_double_number_pane_t1_ParamLimits

0x5687,	// (0x000255ee) list_double_number_pane_t1

0x5699,	// (0x00025600) list_double_number_pane_t2_ParamLimits

0x5699,	// (0x00025600) list_double_number_pane_t2

0x56af,	// (0x00025616) list_double_number_pane_t3_ParamLimits

0x56af,	// (0x00025616) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002f542) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002f542) list_double_number_pane_t

0x56c1,	// (0x00025628) list_double_graphic_pane_g1_ParamLimits

0x56c1,	// (0x00025628) list_double_graphic_pane_g1

0x56cd,	// (0x00025634) list_double_graphic_pane_g2_ParamLimits

0x56cd,	// (0x00025634) list_double_graphic_pane_g2

0x56dc,	// (0x00025643) list_double_graphic_pane_g3_ParamLimits

0x56dc,	// (0x00025643) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002f549) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002f549) list_double_graphic_pane_g

0x5699,	// (0x00025600) list_double_graphic_pane_t1_ParamLimits

0x5699,	// (0x00025600) list_double_graphic_pane_t1

0x56af,	// (0x00025616) list_double_graphic_pane_t2_ParamLimits

0x56af,	// (0x00025616) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002f552) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002f552) list_double_graphic_pane_t

0x56c1,	// (0x00025628) list_double2_graphic_pane_g1_ParamLimits

0x56c1,	// (0x00025628) list_double2_graphic_pane_g1

0x56f4,	// (0x0002565b) list_double2_graphic_pane_g2_ParamLimits

0x56f4,	// (0x0002565b) list_double2_graphic_pane_g2

0x5700,	// (0x00025667) list_double2_graphic_pane_g3_ParamLimits

0x5700,	// (0x00025667) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002f557) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002f557) list_double2_graphic_pane_g

0x5699,	// (0x00025600) list_double2_graphic_pane_t1_ParamLimits

0x5699,	// (0x00025600) list_double2_graphic_pane_t1

0x570c,	// (0x00025673) list_double2_graphic_pane_t2_ParamLimits

0x570c,	// (0x00025673) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002f55e) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002f55e) list_double2_graphic_pane_t

0x571e,	// (0x00025685) list_double_large_graphic_pane_g1_ParamLimits

0x571e,	// (0x00025685) list_double_large_graphic_pane_g1

0x5664,	// (0x000255cb) list_double_large_graphic_pane_g2_ParamLimits

0x5664,	// (0x000255cb) list_double_large_graphic_pane_g2

0x5630,	// (0x00025597) list_double_large_graphic_pane_g3_ParamLimits

0x5630,	// (0x00025597) list_double_large_graphic_pane_g3

0x5731,	// (0x00025698) list_double_large_graphic_pane_g4_ParamLimits

0x5731,	// (0x00025698) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002f563) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002f563) list_double_large_graphic_pane_g

0x5758,	// (0x000256bf) list_double_large_graphic_pane_t1_ParamLimits

0x5758,	// (0x000256bf) list_double_large_graphic_pane_t1

0x5771,	// (0x000256d8) list_double_large_graphic_pane_t2_ParamLimits

0x5771,	// (0x000256d8) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002f56e) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002f56e) list_double_large_graphic_pane_t

0x5783,	// (0x000256ea) list_double2_large_graphic_pane_g1_ParamLimits

0x5783,	// (0x000256ea) list_double2_large_graphic_pane_g1

0x5664,	// (0x000255cb) list_double2_large_graphic_pane_g2_ParamLimits

0x5664,	// (0x000255cb) list_double2_large_graphic_pane_g2

0x5630,	// (0x00025597) list_double2_large_graphic_pane_g3_ParamLimits

0x5630,	// (0x00025597) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002f573) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002f573) list_double2_large_graphic_pane_g

0x5699,	// (0x00025600) list_double2_large_graphic_pane_t1_ParamLimits

0x5699,	// (0x00025600) list_double2_large_graphic_pane_t1

0x570c,	// (0x00025673) list_double2_large_graphic_pane_t2_ParamLimits

0x570c,	// (0x00025673) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002f55e) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002f55e) list_double2_large_graphic_pane_t

0x578f,	// (0x000256f6) list_double_heading_pane_g1_ParamLimits

0x578f,	// (0x000256f6) list_double_heading_pane_g1

0x57a0,	// (0x00025707) list_double_heading_pane_g2_ParamLimits

0x57a0,	// (0x00025707) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0002f57a) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0002f57a) list_double_heading_pane_g

0x57ac,	// (0x00025713) list_double_heading_pane_t1_ParamLimits

0x57ac,	// (0x00025713) list_double_heading_pane_t1

0x570c,	// (0x00025673) list_double_heading_pane_t2_ParamLimits

0x570c,	// (0x00025673) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0002f57f) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0002f57f) list_double_heading_pane_t

0x57c2,	// (0x00025729) list_double_graphic_heading_pane_g1_ParamLimits

0x57c2,	// (0x00025729) list_double_graphic_heading_pane_g1

0x578f,	// (0x000256f6) list_double_graphic_heading_pane_g2_ParamLimits

0x578f,	// (0x000256f6) list_double_graphic_heading_pane_g2

0x57a0,	// (0x00025707) list_double_graphic_heading_pane_g3_ParamLimits

0x57a0,	// (0x00025707) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0002f584) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002f584) list_double_graphic_heading_pane_g

0x57ac,	// (0x00025713) list_double_graphic_heading_pane_t1_ParamLimits

0x57ac,	// (0x00025713) list_double_graphic_heading_pane_t1

0x570c,	// (0x00025673) list_double_graphic_heading_pane_t2_ParamLimits

0x570c,	// (0x00025673) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0002f57f) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0002f57f) list_double_graphic_heading_pane_t

0x5664,	// (0x000255cb) list_double_time_pane_g1_ParamLimits

0x5664,	// (0x000255cb) list_double_time_pane_g1

0x5630,	// (0x00025597) list_double_time_pane_g2_ParamLimits

0x5630,	// (0x00025597) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x0002f538) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x0002f538) list_double_time_pane_g

0x57ce,	// (0x00025735) list_double_time_pane_t1_ParamLimits

0x57ce,	// (0x00025735) list_double_time_pane_t1

0x57e4,	// (0x0002574b) list_double_time_pane_t2_ParamLimits

0x57e4,	// (0x0002574b) list_double_time_pane_t2

0x57f6,	// (0x0002575d) list_double_time_pane_t3_ParamLimits

0x57f6,	// (0x0002575d) list_double_time_pane_t3

0x5808,	// (0x0002576f) list_double_time_pane_t4_ParamLimits

0x5808,	// (0x0002576f) list_double_time_pane_t4

0x0003,

0xf624,	// (0x0002f58b) list_double_time_pane_t_ParamLimits

0xf624,	// (0x0002f58b) list_double_time_pane_t

0x581a,	// (0x00025781) list_setting_pane_g1_ParamLimits

0x581a,	// (0x00025781) list_setting_pane_g1

0x5826,	// (0x0002578d) list_setting_pane_g2_ParamLimits

0x5826,	// (0x0002578d) list_setting_pane_g2

0x0001,

0xf62d,	// (0x0002f594) list_setting_pane_g_ParamLimits

0xf62d,	// (0x0002f594) list_setting_pane_g

0x5832,	// (0x00025799) list_setting_pane_t1_ParamLimits

0x5832,	// (0x00025799) list_setting_pane_t1

0x5849,	// (0x000257b0) list_setting_pane_t2_ParamLimits

0x5849,	// (0x000257b0) list_setting_pane_t2

0x0002,

0xf632,	// (0x0002f599) list_setting_pane_t_ParamLimits

0xf632,	// (0x0002f599) list_setting_pane_t

0x5886,	// (0x000257ed) set_value_pane_cp_ParamLimits

0x5886,	// (0x000257ed) set_value_pane_cp

0x5892,	// (0x000257f9) list_setting_number_pane_g1_ParamLimits

0x5892,	// (0x000257f9) list_setting_number_pane_g1

0x589e,	// (0x00025805) list_setting_number_pane_g2_ParamLimits

0x589e,	// (0x00025805) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x0002f5a0) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x0002f5a0) list_setting_number_pane_g

0x58aa,	// (0x00025811) list_setting_number_pane_t1_ParamLimits

0x58aa,	// (0x00025811) list_setting_number_pane_t1

0x58be,	// (0x00025825) list_setting_number_pane_t2_ParamLimits

0x58be,	// (0x00025825) list_setting_number_pane_t2

0x58d5,	// (0x0002583c) list_setting_number_pane_t3_ParamLimits

0x58d5,	// (0x0002583c) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x0002f5a5) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x0002f5a5) list_setting_number_pane_t

0x5886,	// (0x000257ed) set_value_pane_ParamLimits

0x5886,	// (0x000257ed) set_value_pane

0x1e22,	// (0x00021d89) bg_set_opt_pane_ParamLimits

0x1e22,	// (0x00021d89) bg_set_opt_pane

0x5918,	// (0x0002587f) set_value_pane_t1

0x1e51,	// (0x00021db8) slider_set_pane_cp3

0x6f46,	// (0x00026ead) volume_small_pane_cp

0x1e5a,	// (0x00021dc1) list_form_gen_pane

0x1e63,	// (0x00021dca) scroll_pane_cp8

0x592e,	// (0x00025895) form_field_data_pane_ParamLimits

0x592e,	// (0x00025895) form_field_data_pane

0x594e,	// (0x000258b5) form_field_data_wide_pane_ParamLimits

0x594e,	// (0x000258b5) form_field_data_wide_pane

0x596f,	// (0x000258d6) form_field_popup_pane_ParamLimits

0x596f,	// (0x000258d6) form_field_popup_pane

0x598d,	// (0x000258f4) form_field_popup_wide_pane_ParamLimits

0x598d,	// (0x000258f4) form_field_popup_wide_pane

0x59aa,	// (0x00025911) form_field_slider_pane_ParamLimits

0x59aa,	// (0x00025911) form_field_slider_pane

0x59bd,	// (0x00025924) form_field_slider_wide_pane_ParamLimits

0x59bd,	// (0x00025924) form_field_slider_wide_pane

0x1e97,	// (0x00021dfe) data_form_pane

0x59da,	// (0x00025941) form_field_data_pane_t1

0x1ea3,	// (0x00021e0a) input_focus_pane

0x59f2,	// (0x00025959) data_form_wide_pane

0x5a0f,	// (0x00025976) form_field_data_wide_pane_t1

0x1d2d,	// (0x00021c94) input_focus_pane_cp6

0x5a31,	// (0x00025998) form_field_popup_pane_t1

0x1ea3,	// (0x00021e0a) input_focus_pane_cp7

0x1f10,	// (0x00021e77) list_form_pane

0x5a51,	// (0x000259b8) form_field_popup_wide_pane_t1

0x1ea3,	// (0x00021e0a) input_focus_pane_cp8

0x1f39,	// (0x00021ea0) list_form_wide_pane

0x5a6e,	// (0x000259d5) form_field_slider_pane_t1_ParamLimits

0x5a6e,	// (0x000259d5) form_field_slider_pane_t1

0x5a84,	// (0x000259eb) form_field_slider_pane_t2_ParamLimits

0x5a84,	// (0x000259eb) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x0002f5b5) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x0002f5b5) form_field_slider_pane_t

0x1a5b,	// (0x000219c2) input_focus_pane_cp9_ParamLimits

0x1a5b,	// (0x000219c2) input_focus_pane_cp9

0x5a99,	// (0x00025a00) slider_cont_pane_ParamLimits

0x5a99,	// (0x00025a00) slider_cont_pane

0x1f45,	// (0x00021eac) form_field_slider_wide_pane_t1_ParamLimits

0x1f45,	// (0x00021eac) form_field_slider_wide_pane_t1

0x5aad,	// (0x00025a14) form_field_slider_wide_pane_t2_ParamLimits

0x5aad,	// (0x00025a14) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x0002f5ba) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x0002f5ba) form_field_slider_wide_pane_t

0x1a5b,	// (0x000219c2) input_focus_pane_cp10_ParamLimits

0x1a5b,	// (0x000219c2) input_focus_pane_cp10

0x5abf,	// (0x00025a26) slider_cont_pane_cp1_ParamLimits

0x5abf,	// (0x00025a26) slider_cont_pane_cp1

0x5ad3,	// (0x00025a3a) slider_form_pane_cp

0x1f69,	// (0x00021ed0) input_focus_pane_g1

0x1f71,	// (0x00021ed8) input_focus_pane_g2

0x1f79,	// (0x00021ee0) input_focus_pane_g3

0x1f81,	// (0x00021ee8) input_focus_pane_g4

0x1f89,	// (0x00021ef0) input_focus_pane_g5

0x1f91,	// (0x00021ef8) input_focus_pane_g6

0x1f99,	// (0x00021f00) input_focus_pane_g7

0x1fa1,	// (0x00021f08) input_focus_pane_g8

0x1fa9,	// (0x00021f10) input_focus_pane_g9

0x1a03,	// (0x0002196a) input_focus_pane_g10

0x0009,

0xf658,	// (0x0002f5bf) input_focus_pane_g

0x8c9e,	// (0x00028c05) wait_border_pane_g3_copy1

0x5adb,	// (0x00025a42) data_form_pane_t1

0x1a03,	// (0x0002196a) wait_anim_pane_g1_copy1

0x5da5,	// (0x00025d0c) data_form_wide_pane_t1

0x5af6,	// (0x00025a5d) list_form_graphic_pane_cp_ParamLimits

0x5af6,	// (0x00025a5d) list_form_graphic_pane_cp

0xaf25,	// (0x0002ae8c) slider_form_pane_g1

0xaf2e,	// (0x0002ae95) slider_form_pane_g2

0x0006,

0xf956,	// (0x0002f8bd) slider_form_pane_g

0x5b0a,	// (0x00025a71) list_form_graphic_pane_ParamLimits

0x5b0a,	// (0x00025a71) list_form_graphic_pane

0x5b21,	// (0x00025a88) list_form_graphic_pane_g1

0x5b29,	// (0x00025a90) list_form_graphic_pane_t1_ParamLimits

0x5b29,	// (0x00025a90) list_form_graphic_pane_t1

0x1a69,	// (0x000219d0) list_highlight_pane_cp5_ParamLimits

0x1a69,	// (0x000219d0) list_highlight_pane_cp5

0x5b3e,	// (0x00025aa5) find_pane_g1

0x1fb1,	// (0x00021f18) input_find_pane

0x5b47,	// (0x00025aae) input_find_pane_g1_ParamLimits

0x5b47,	// (0x00025aae) input_find_pane_g1

0x5b53,	// (0x00025aba) input_find_pane_t1_ParamLimits

0x5b53,	// (0x00025aba) input_find_pane_t1

0x5b68,	// (0x00025acf) input_find_pane_t2_ParamLimits

0x5b68,	// (0x00025acf) input_find_pane_t2

0x0001,

0xf66d,	// (0x0002f5d4) input_find_pane_t_ParamLimits

0xf66d,	// (0x0002f5d4) input_find_pane_t

0x1fba,	// (0x00021f21) input_focus_pane_cp5_ParamLimits

0x1fba,	// (0x00021f21) input_focus_pane_cp5

0x1fcd,	// (0x00021f34) bg_popup_window_pane_cp2_ParamLimits

0x1fcd,	// (0x00021f34) bg_popup_window_pane_cp2

0x1fda,	// (0x00021f41) listscroll_menu_pane_ParamLimits

0x1fda,	// (0x00021f41) listscroll_menu_pane

0x6f5b,	// (0x00026ec2) popup_submenu_window_ParamLimits

0x6f5b,	// (0x00026ec2) popup_submenu_window

0x1fe6,	// (0x00021f4d) find_popup_pane_g1

0x6f83,	// (0x00026eea) input_popup_find_pane_cp

0x1fee,	// (0x00021f55) input_focus_pane_cp4_ParamLimits

0x1fee,	// (0x00021f55) input_focus_pane_cp4

0x1ffc,	// (0x00021f63) input_popup_find_pane_t1_ParamLimits

0x1ffc,	// (0x00021f63) input_popup_find_pane_t1

0x1a0d,	// (0x00021974) bg_popup_sub_pane_cp

0x202a,	// (0x00021f91) listscroll_popup_sub_pane

0x2032,	// (0x00021f99) list_submenu_pane_ParamLimits

0x2032,	// (0x00021f99) list_submenu_pane

0x2043,	// (0x00021faa) scroll_pane_cp4

0x6f9b,	// (0x00026f02) list_single_popup_submenu_pane_ParamLimits

0x6f9b,	// (0x00026f02) list_single_popup_submenu_pane

0x2971,	// (0x000228d8) list_single_popup_submenu_pane_g1

0x6faf,	// (0x00026f16) list_single_popup_submenu_pane_t1_ParamLimits

0x6faf,	// (0x00026f16) list_single_popup_submenu_pane_t1

0x1a69,	// (0x000219d0) bg_active_tab_pane_cp1_ParamLimits

0x1a69,	// (0x000219d0) bg_active_tab_pane_cp1

0x204b,	// (0x00021fb2) tabs_2_active_pane_g1

0x6fc4,	// (0x00026f2b) tabs_2_active_pane_t1

0x1a69,	// (0x000219d0) bg_passive_tab_pane_cp1_ParamLimits

0x1a69,	// (0x000219d0) bg_passive_tab_pane_cp1

0x204b,	// (0x00021fb2) tabs_2_passive_pane_g1

0x6fc4,	// (0x00026f2b) tabs_2_passive_pane_t1

0x6fd6,	// (0x00026f3d) bg_active_tab_pane_cp4

0x6fe4,	// (0x00026f4b) tabs_2_long_active_pane_t1

0x6ff7,	// (0x00026f5e) bg_passive_tab_pane_cp4

0x85c7,	// (0x0002852e) list_single_midp_graphic_pane_g4_ParamLimits

0x6fd6,	// (0x00026f3d) bg_active_tab_pane_cp5

0x7003,	// (0x00026f6a) tabs_3_long_active_pane_t1

0x6ff7,	// (0x00026f5e) bg_passive_tab_pane_cp5

0x85c7,	// (0x0002852e) list_single_midp_graphic_pane_g4

0x1a69,	// (0x000219d0) bg_popup_window_pane_cp13_ParamLimits

0x1a69,	// (0x000219d0) bg_popup_window_pane_cp13

0x205f,	// (0x00021fc6) listscroll_popup_fast_pane_ParamLimits

0x205f,	// (0x00021fc6) listscroll_popup_fast_pane

0x206b,	// (0x00021fd2) grid_popup_fast_pane_ParamLimits

0x206b,	// (0x00021fd2) grid_popup_fast_pane

0x207d,	// (0x00021fe4) scroll_pane_cp9_ParamLimits

0x207d,	// (0x00021fe4) scroll_pane_cp9

0xc85e,	// (0x0002c7c5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc85e,	// (0x0002c7c5) list_single_graphic_hl_pane_t1_cp2

0x2090,	// (0x00021ff7) input_focus_pane_cp20_ParamLimits

0x2090,	// (0x00021ff7) input_focus_pane_cp20

0x209e,	// (0x00022005) query_popup_data_pane_t1_ParamLimits

0x209e,	// (0x00022005) query_popup_data_pane_t1

0x20b1,	// (0x00022018) query_popup_data_pane_t2_ParamLimits

0x20b1,	// (0x00022018) query_popup_data_pane_t2

0x20f7,	// (0x0002205e) query_popup_data_pane_t3_ParamLimits

0x20f7,	// (0x0002205e) query_popup_data_pane_t3

0x2138,	// (0x0002209f) query_popup_data_pane_t4_ParamLimits

0x2138,	// (0x0002209f) query_popup_data_pane_t4

0x2174,	// (0x000220db) query_popup_data_pane_t5_ParamLimits

0x2174,	// (0x000220db) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x0002f5d9) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x0002f5d9) query_popup_data_pane_t

0x1f69,	// (0x00021ed0) bg_set_opt_pane_g1

0x1f71,	// (0x00021ed8) bg_set_opt_pane_g2

0x1f79,	// (0x00021ee0) bg_set_opt_pane_g3

0x1f81,	// (0x00021ee8) bg_set_opt_pane_g4

0x1f89,	// (0x00021ef0) bg_set_opt_pane_g5

0x1f91,	// (0x00021ef8) bg_set_opt_pane_g6

0x1f99,	// (0x00021f00) bg_set_opt_pane_g7

0x1fa1,	// (0x00021f08) bg_set_opt_pane_g8

0x1fa9,	// (0x00021f10) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x0002f5e4) bg_set_opt_pane_g

0x7504,	// (0x0002746b) control_top_pane_stacon_ParamLimits

0x7504,	// (0x0002746b) control_top_pane_stacon

0x7557,	// (0x000274be) signal_pane_stacon_ParamLimits

0x7557,	// (0x000274be) signal_pane_stacon

0x2500,	// (0x00022467) stacon_top_pane_g1_ParamLimits

0x2500,	// (0x00022467) stacon_top_pane_g1

0x757c,	// (0x000274e3) title_pane_stacon_ParamLimits

0x757c,	// (0x000274e3) title_pane_stacon

0x75a6,	// (0x0002750d) uni_indicator_pane_stacon_ParamLimits

0x75a6,	// (0x0002750d) uni_indicator_pane_stacon

0x75bb,	// (0x00027522) battery_pane_stacon_ParamLimits

0x75bb,	// (0x00027522) battery_pane_stacon

0x75ff,	// (0x00027566) control_bottom_pane_stacon_ParamLimits

0x75ff,	// (0x00027566) control_bottom_pane_stacon

0x7622,	// (0x00027589) navi_pane_stacon_ParamLimits

0x7622,	// (0x00027589) navi_pane_stacon

0x2522,	// (0x00022489) stacon_bottom_pane_g1_ParamLimits

0x2522,	// (0x00022489) stacon_bottom_pane_g1

0x702f,	// (0x00026f96) aid_levels_signal_lsc_ParamLimits

0x702f,	// (0x00026f96) aid_levels_signal_lsc

0x7045,	// (0x00026fac) signal_pane_stacon_g1_ParamLimits

0x7045,	// (0x00026fac) signal_pane_stacon_g1

0x7059,	// (0x00026fc0) signal_pane_stacon_g2_ParamLimits

0x7059,	// (0x00026fc0) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x0002f5f7) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x0002f5f7) signal_pane_stacon_g

0x708e,	// (0x00026ff5) title_pane_stacon_t1_ParamLimits

0x708e,	// (0x00026ff5) title_pane_stacon_t1

0x21cc,	// (0x00022133) uni_indicator_pane_stacon_g1

0x21d6,	// (0x0002213d) uni_indicator_pane_stacon_g2

0x21b8,	// (0x0002211f) uni_indicator_pane_stacon_g3

0x21c2,	// (0x00022129) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x0002f603) uni_indicator_pane_stacon_g

0x70b3,	// (0x0002701a) control_top_pane_stacon_g1

0x70bb,	// (0x00027022) control_top_pane_stacon_t1_ParamLimits

0x70bb,	// (0x00027022) control_top_pane_stacon_t1

0x70f2,	// (0x00027059) aid_levels_battery_lsc_ParamLimits

0x70f2,	// (0x00027059) aid_levels_battery_lsc

0x7109,	// (0x00027070) battery_pane_stacon_g1_ParamLimits

0x7109,	// (0x00027070) battery_pane_stacon_g1

0x711c,	// (0x00027083) battery_pane_stacon_g2_ParamLimits

0x711c,	// (0x00027083) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x0002f60c) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x0002f60c) battery_pane_stacon_g

0x715a,	// (0x000270c1) navi_icon_pane_stacon

0x716e,	// (0x000270d5) navi_navi_pane_stacon

0x715a,	// (0x000270c1) navi_text_pane_stacon

0x70b3,	// (0x0002701a) control_bottom_pane_stacon_g1

0x7182,	// (0x000270e9) control_bottom_pane_stacon_t1_ParamLimits

0x7182,	// (0x000270e9) control_bottom_pane_stacon_t1

0x71b9,	// (0x00027120) grid_app_pane_ParamLimits

0x71b9,	// (0x00027120) grid_app_pane

0x71db,	// (0x00027142) scroll_pane_cp15_ParamLimits

0x71db,	// (0x00027142) scroll_pane_cp15

0x71ee,	// (0x00027155) cell_app_pane_ParamLimits

0x71ee,	// (0x00027155) cell_app_pane

0x7216,	// (0x0002717d) cell_app_pane_g1_ParamLimits

0x7216,	// (0x0002717d) cell_app_pane_g1

0x21fa,	// (0x00022161) cell_app_pane_g2_ParamLimits

0x21fa,	// (0x00022161) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x0002f611) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x0002f611) cell_app_pane_g

0x723a,	// (0x000271a1) cell_app_pane_t1_ParamLimits

0x723a,	// (0x000271a1) cell_app_pane_t1

0x2206,	// (0x0002216d) grid_highlight_pane_ParamLimits

0x2206,	// (0x0002216d) grid_highlight_pane

0x1f69,	// (0x00021ed0) cell_highlight_pane_g1

0x1f71,	// (0x00021ed8) cell_highlight_pane_g2

0x1f79,	// (0x00021ee0) cell_highlight_pane_g3

0x1f81,	// (0x00021ee8) cell_highlight_pane_g4

0x1f89,	// (0x00021ef0) cell_highlight_pane_g5

0x1f91,	// (0x00021ef8) cell_highlight_pane_g6

0x1f99,	// (0x00021f00) cell_highlight_pane_g7

0x1fa1,	// (0x00021f08) cell_highlight_pane_g8

0x1fa9,	// (0x00021f10) cell_highlight_pane_g9

0x1a03,	// (0x0002196a) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x0002f5bf) cell_highlight_pane_g

0x2217,	// (0x0002217e) bg_scroll_pane

0x7264,	// (0x000271cb) scroll_handle_pane

0x225e,	// (0x000221c5) scroll_bg_pane_g1

0x2273,	// (0x000221da) scroll_bg_pane_g2

0x228b,	// (0x000221f2) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x0002f616) scroll_bg_pane_g

0x728d,	// (0x000271f4) scroll_handle_focus_pane_ParamLimits

0x728d,	// (0x000271f4) scroll_handle_focus_pane

0x225e,	// (0x000221c5) scroll_handle_pane_g1

0x22a0,	// (0x00022207) scroll_handle_pane_g2

0x228b,	// (0x000221f2) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x0002f61d) scroll_handle_pane_g

0x1fee,	// (0x00021f55) bg_popup_sub_pane_cp21_ParamLimits

0x1fee,	// (0x00021f55) bg_popup_sub_pane_cp21

0x729a,	// (0x00027201) popup_fep_japan_predictive_window_t1_ParamLimits

0x729a,	// (0x00027201) popup_fep_japan_predictive_window_t1

0x72b4,	// (0x0002721b) popup_fep_japan_predictive_window_t2_ParamLimits

0x72b4,	// (0x0002721b) popup_fep_japan_predictive_window_t2

0x72e7,	// (0x0002724e) popup_fep_japan_predictive_window_t3_ParamLimits

0x72e7,	// (0x0002724e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x0002f624) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x0002f624) popup_fep_japan_predictive_window_t

0x1a0d,	// (0x00021974) bg_popup_sub_pane_cp23

0x299e,	// (0x00022905) listscroll_japin_cand_pane

0x22b4,	// (0x0002221b) popup_fep_japan_candidate_window_t1

0x22c2,	// (0x00022229) candidate_pane_ParamLimits

0x22c2,	// (0x00022229) candidate_pane

0x731e,	// (0x00027285) scroll_pane_cp30

0x22d4,	// (0x0002223b) list_single_popup_jap_candidate_pane_ParamLimits

0x22d4,	// (0x0002223b) list_single_popup_jap_candidate_pane

0x1a0d,	// (0x00021974) list_highlight_pane_cp30

0x22e9,	// (0x00022250) list_single_popup_jap_candidate_pane_t1

0x22f8,	// (0x0002225f) level_1_signal

0x2305,	// (0x0002226c) level_2_signal

0x2312,	// (0x00022279) level_3_signal

0x231f,	// (0x00022286) level_4_signal

0x232c,	// (0x00022293) level_5_signal

0x2339,	// (0x000222a0) level_6_signal

0x2346,	// (0x000222ad) level_7_signal

0x22f8,	// (0x0002225f) level_1_battery

0x2305,	// (0x0002226c) level_2_battery

0x2312,	// (0x00022279) level_3_battery

0x231f,	// (0x00022286) level_4_battery

0x232c,	// (0x00022293) level_5_battery

0x2339,	// (0x000222a0) level_6_battery

0x2346,	// (0x000222ad) level_7_battery

0x236b,	// (0x000222d2) list_menu_pane_ParamLimits

0x236b,	// (0x000222d2) list_menu_pane

0x2381,	// (0x000222e8) scroll_pane_cp25_ParamLimits

0x2381,	// (0x000222e8) scroll_pane_cp25

0x239a,	// (0x00022301) list_double2_graphic_pane_cp2_ParamLimits

0x239a,	// (0x00022301) list_double2_graphic_pane_cp2

0x239a,	// (0x00022301) list_double2_large_graphic_pane_cp2_ParamLimits

0x239a,	// (0x00022301) list_double2_large_graphic_pane_cp2

0x239a,	// (0x00022301) list_double2_pane_cp2_ParamLimits

0x239a,	// (0x00022301) list_double2_pane_cp2

0x239a,	// (0x00022301) list_double_graphic_pane_cp2_ParamLimits

0x239a,	// (0x00022301) list_double_graphic_pane_cp2

0x239a,	// (0x00022301) list_double_large_graphic_pane_cp2_ParamLimits

0x239a,	// (0x00022301) list_double_large_graphic_pane_cp2

0x239a,	// (0x00022301) list_double_number_pane_cp2_ParamLimits

0x239a,	// (0x00022301) list_double_number_pane_cp2

0x239a,	// (0x00022301) list_double_pane_cp2_ParamLimits

0x239a,	// (0x00022301) list_double_pane_cp2

0x7359,	// (0x000272c0) list_single_2graphic_pane_cp2_ParamLimits

0x7359,	// (0x000272c0) list_single_2graphic_pane_cp2

0x7359,	// (0x000272c0) list_single_graphic_heading_pane_cp2_ParamLimits

0x7359,	// (0x000272c0) list_single_graphic_heading_pane_cp2

0x7359,	// (0x000272c0) list_single_graphic_pane_cp2_ParamLimits

0x7359,	// (0x000272c0) list_single_graphic_pane_cp2

0x7359,	// (0x000272c0) list_single_heading_pane_cp2_ParamLimits

0x7359,	// (0x000272c0) list_single_heading_pane_cp2

0x23aa,	// (0x00022311) list_single_large_graphic_pane_cp2_ParamLimits

0x23aa,	// (0x00022311) list_single_large_graphic_pane_cp2

0x7359,	// (0x000272c0) list_single_number_heading_pane_cp2_ParamLimits

0x7359,	// (0x000272c0) list_single_number_heading_pane_cp2

0x7359,	// (0x000272c0) list_single_number_pane_cp2_ParamLimits

0x7359,	// (0x000272c0) list_single_number_pane_cp2

0x736f,	// (0x000272d6) list_single_pane_cp2_ParamLimits

0x736f,	// (0x000272d6) list_single_pane_cp2

0x23c4,	// (0x0002232b) bg_popup_sub_pane_cp22

0x7447,	// (0x000273ae) popup_side_volume_key_window_g1

0x746b,	// (0x000273d2) popup_side_volume_key_window_t1

0x7487,	// (0x000273ee) volume_small_pane_cp1

0x1a5b,	// (0x000219c2) bg_popup_sub_pane_cp24_ParamLimits

0x1a5b,	// (0x000219c2) bg_popup_sub_pane_cp24

0x23da,	// (0x00022341) fep_china_uni_candidate_pane_ParamLimits

0x23da,	// (0x00022341) fep_china_uni_candidate_pane

0x23ee,	// (0x00022355) fep_china_uni_entry_pane

0x23fe,	// (0x00022365) popup_fep_china_uni_window_g1

0x748f,	// (0x000273f6) fep_china_uni_entry_pane_g1

0x7497,	// (0x000273fe) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x0002f655) fep_china_uni_entry_pane_g

0x241a,	// (0x00022381) fep_entry_item_pane

0x2424,	// (0x0002238b) fep_candidate_item_pane

0x749f,	// (0x00027406) fep_china_uni_candidate_pane_g1

0x242c,	// (0x00022393) fep_china_uni_candidate_pane_g2

0x2434,	// (0x0002239b) fep_china_uni_candidate_pane_g3

0x74a7,	// (0x0002740e) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x0002f65a) fep_china_uni_candidate_pane_g

0x1a03,	// (0x0002196a) fep_entry_item_pane_g1

0x243c,	// (0x000223a3) fep_entry_item_pane_t1_ParamLimits

0x243c,	// (0x000223a3) fep_entry_item_pane_t1

0x2452,	// (0x000223b9) fep_candidate_item_pane_t1_ParamLimits

0x2452,	// (0x000223b9) fep_candidate_item_pane_t1

0x2467,	// (0x000223ce) fep_candidate_item_pane_t2_ParamLimits

0x2467,	// (0x000223ce) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x0002f663) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x0002f663) fep_candidate_item_pane_t

0x1a69,	// (0x000219d0) list_highlight_pane_cp31_ParamLimits

0x1a69,	// (0x000219d0) list_highlight_pane_cp31

0x2479,	// (0x000223e0) level_1_signal_lsc

0x2482,	// (0x000223e9) level_2_signal_lsc

0x248b,	// (0x000223f2) level_3_signal_lsc

0x2494,	// (0x000223fb) level_4_signal_lsc

0x249d,	// (0x00022404) level_5_signal_lsc

0x24a6,	// (0x0002240d) level_6_signal_lsc

0x24af,	// (0x00022416) level_7_signal_lsc

0x24af,	// (0x00022416) level_1_battery_lsc

0x24b8,	// (0x0002241f) level_2_battery_lsc

0x24c1,	// (0x00022428) level_3_battery_lsc

0x24ca,	// (0x00022431) level_4_battery_lsc

0x24d3,	// (0x0002243a) level_5_battery_lsc

0x24dc,	// (0x00022443) level_6_battery_lsc

0x2479,	// (0x000223e0) level_7_battery_lsc

0x24e5,	// (0x0002244c) scroll_handle_focus_pane_g1

0x24ee,	// (0x00022455) scroll_handle_focus_pane_g2

0x24f7,	// (0x0002245e) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x0002f668) scroll_handle_focus_pane_g

0x5b7d,	// (0x00025ae4) list_single_2graphic_pane_g1_ParamLimits

0x5b7d,	// (0x00025ae4) list_single_2graphic_pane_g1

0x55bf,	// (0x00025526) list_single_2graphic_pane_g2_ParamLimits

0x55bf,	// (0x00025526) list_single_2graphic_pane_g2

0x5545,	// (0x000254ac) list_single_2graphic_pane_g3_ParamLimits

0x5545,	// (0x000254ac) list_single_2graphic_pane_g3

0x5b89,	// (0x00025af0) list_single_2graphic_pane_g4_ParamLimits

0x5b89,	// (0x00025af0) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x0002f66f) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x0002f66f) list_single_2graphic_pane_g

0x5b95,	// (0x00025afc) list_single_2graphic_pane_t1_ParamLimits

0x5b95,	// (0x00025afc) list_single_2graphic_pane_t1

0x5bc3,	// (0x00025b2a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5bc3,	// (0x00025b2a) list_double2_graphic_large_graphic_pane_g1

0x5664,	// (0x000255cb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5664,	// (0x000255cb) list_double2_graphic_large_graphic_pane_g2

0x5630,	// (0x00025597) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5630,	// (0x00025597) list_double2_graphic_large_graphic_pane_g3

0x5bd3,	// (0x00025b3a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5bd3,	// (0x00025b3a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x0002f678) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x0002f678) list_double2_graphic_large_graphic_pane_g

0x5bdf,	// (0x00025b46) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5bdf,	// (0x00025b46) list_double2_graphic_large_graphic_pane_t1

0x5bf5,	// (0x00025b5c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5bf5,	// (0x00025b5c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x0002f681) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x0002f681) list_double2_graphic_large_graphic_pane_t

0x7681,	// (0x000275e8) popup_fast_swap_window_ParamLimits

0x7681,	// (0x000275e8) popup_fast_swap_window

0x769d,	// (0x00027604) popup_side_volume_key_window

0x25ad,	// (0x00022514) stacon_top_pane

0x25b7,	// (0x0002251e) status_pane_ParamLimits

0x25b7,	// (0x0002251e) status_pane

0x19f9,	// (0x00021960) status_small_pane

0x1a0d,	// (0x00021974) control_pane

0x1a0d,	// (0x00021974) stacon_bottom_pane

0x1e63,	// (0x00021dca) scroll_pane_cp121

0x1e5a,	// (0x00021dc1) set_content_pane

0x74af,	// (0x00027416) bg_active_tab_pane_g1_cp1

0x74b8,	// (0x0002741f) bg_active_tab_pane_g2_cp1

0x74c1,	// (0x00027428) bg_active_tab_pane_g3_cp1

0x74af,	// (0x00027416) bg_passive_tab_pane_g1_cp1

0x74b8,	// (0x0002741f) bg_passive_tab_pane_g2_cp1

0x74c1,	// (0x00027428) bg_passive_tab_pane_g3_cp1

0x74ca,	// (0x00027431) bg_active_tab_pane_g1_cp2

0x74b8,	// (0x0002741f) bg_active_tab_pane_g2_cp2

0x74d3,	// (0x0002743a) bg_active_tab_pane_g3_cp2

0x74ca,	// (0x00027431) bg_passive_tab_pane_g1_cp2

0x74b8,	// (0x0002741f) bg_passive_tab_pane_g2_cp2

0x74d3,	// (0x0002743a) bg_passive_tab_pane_g3_cp2

0x74dc,	// (0x00027443) bg_active_tab_pane_g1_cp3

0x74b8,	// (0x0002741f) bg_active_tab_pane_g2_cp3

0x74e5,	// (0x0002744c) bg_active_tab_pane_g3_cp3

0x74dc,	// (0x00027443) bg_passive_tab_pane_g1_cp3

0x74b8,	// (0x0002741f) bg_passive_tab_pane_g2_cp3

0x74e5,	// (0x0002744c) bg_passive_tab_pane_g3_cp3

0x74ee,	// (0x00027455) bg_active_tab_pane_g1_cp4

0x74b8,	// (0x0002741f) bg_active_tab_pane_g2_cp4

0x74f9,	// (0x00027460) bg_active_tab_pane_g3_cp4

0x74ee,	// (0x00027455) bg_passive_tab_pane_g1_cp4

0x74b8,	// (0x0002741f) bg_passive_tab_pane_g2_cp4

0x74f9,	// (0x00027460) bg_passive_tab_pane_g3_cp4

0x7645,	// (0x000275ac) bg_active_tab_pane_g1_cp5

0x74b8,	// (0x0002741f) bg_active_tab_pane_g2_cp5

0x764e,	// (0x000275b5) bg_active_tab_pane_g3_cp5

0x7645,	// (0x000275ac) bg_passive_tab_pane_g1_cp5

0x74b8,	// (0x0002741f) bg_passive_tab_pane_g2_cp5

0x764e,	// (0x000275b5) bg_passive_tab_pane_g3_cp5

0x7657,	// (0x000275be) list_set_graphic_pane_ParamLimits

0x7657,	// (0x000275be) list_set_graphic_pane

0x1a0d,	// (0x00021974) bg_set_opt_pane_cp4

0x253e,	// (0x000224a5) list_set_graphic_pane_g1_ParamLimits

0x253e,	// (0x000224a5) list_set_graphic_pane_g1

0x254a,	// (0x000224b1) list_set_graphic_pane_g2_ParamLimits

0x254a,	// (0x000224b1) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x0002f686) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x0002f686) list_set_graphic_pane_g

0x0009,

0xfab7,	// (0x0002fa1e) volume_small_pane_cp_g

0x7675,	// (0x000275dc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7675,	// (0x000275dc) list_double2_large_graphic_pane_g1_cp2

0x256c,	// (0x000224d3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x256c,	// (0x000224d3) list_double2_large_graphic_pane_g2_cp2

0x257d,	// (0x000224e4) list_double2_large_graphic_pane_g3_cp2

0x2585,	// (0x000224ec) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2585,	// (0x000224ec) list_double2_large_graphic_pane_t1_cp2

0x259b,	// (0x00022502) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x259b,	// (0x00022502) list_double2_large_graphic_pane_t2_cp2

0xaae7,	// (0x0002aa4e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaae7,	// (0x0002aa4e) list_double_large_graphic_pane_g1_cp2

0xaaf8,	// (0x0002aa5f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaaf8,	// (0x0002aa5f) list_double_large_graphic_pane_g2_cp2

0x26c7,	// (0x0002262e) list_double_large_graphic_pane_g3_cp2

0xab09,	// (0x0002aa70) list_double_large_graphic_pane_g4_cp

0xab11,	// (0x0002aa78) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab11,	// (0x0002aa78) list_double_large_graphic_pane_t1_cp2

0xab28,	// (0x0002aa8f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab28,	// (0x0002aa8f) list_double_large_graphic_pane_t2_cp2

0x25c5,	// (0x0002252c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x25c5,	// (0x0002252c) list_double2_graphic_pane_g1_cp2

0x25d3,	// (0x0002253a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x25d3,	// (0x0002253a) list_double2_graphic_pane_g2_cp2

0x25e4,	// (0x0002254b) list_double2_graphic_pane_g3_cp2

0x25ee,	// (0x00022555) list_double2_graphic_pane_t1_cp2_ParamLimits

0x25ee,	// (0x00022555) list_double2_graphic_pane_t1_cp2

0x2604,	// (0x0002256b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2604,	// (0x0002256b) list_double2_graphic_pane_t2_cp2

0x1df5,	// (0x00021d5c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1df5,	// (0x00021d5c) list_single_number_heading_pane_g1_cp2

0x2616,	// (0x0002257d) list_single_number_heading_pane_g2_cp2

0x261e,	// (0x00022585) list_single_number_heading_pane_t1_cp2_ParamLimits

0x261e,	// (0x00022585) list_single_number_heading_pane_t1_cp2

0x2634,	// (0x0002259b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2634,	// (0x0002259b) list_single_number_heading_pane_t2_cp2

0x2646,	// (0x000225ad) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2646,	// (0x000225ad) list_single_number_heading_pane_t3_cp2

0x1df5,	// (0x00021d5c) list_single_heading_pane_g1_cp2_ParamLimits

0x1df5,	// (0x00021d5c) list_single_heading_pane_g1_cp2

0x2616,	// (0x0002257d) list_single_heading_pane_g2_cp2

0x261e,	// (0x00022585) list_single_heading_pane_t1_cp2_ParamLimits

0x261e,	// (0x00022585) list_single_heading_pane_t1_cp2

0xa8f1,	// (0x0002a858) list_single_heading_pane_t2_cp2_ParamLimits

0xa8f1,	// (0x0002a858) list_single_heading_pane_t2_cp2

0xa839,	// (0x0002a7a0) list_double_graphic_pane_g1_cp2_ParamLimits

0xa839,	// (0x0002a7a0) list_double_graphic_pane_g1_cp2

0xa845,	// (0x0002a7ac) list_double_graphic_pane_g2_cp2_ParamLimits

0xa845,	// (0x0002a7ac) list_double_graphic_pane_g2_cp2

0xa854,	// (0x0002a7bb) list_double_graphic_pane_g3_cp2

0xa85c,	// (0x0002a7c3) list_double_graphic_pane_t1_cp2_ParamLimits

0xa85c,	// (0x0002a7c3) list_double_graphic_pane_t1_cp2

0xa872,	// (0x0002a7d9) list_double_graphic_pane_t2_cp2_ParamLimits

0xa872,	// (0x0002a7d9) list_double_graphic_pane_t2_cp2

0x26bb,	// (0x00022622) list_double_number_pane_g1_cp2_ParamLimits

0x26bb,	// (0x00022622) list_double_number_pane_g1_cp2

0x26c7,	// (0x0002262e) list_double_number_pane_g2_cp2

0xa7fd,	// (0x0002a764) list_double_number_pane_t1_cp2_ParamLimits

0xa7fd,	// (0x0002a764) list_double_number_pane_t1_cp2

0xa811,	// (0x0002a778) list_double_number_pane_t2_cp2_ParamLimits

0xa811,	// (0x0002a778) list_double_number_pane_t2_cp2

0xa827,	// (0x0002a78e) list_double_number_pane_t3_cp2_ParamLimits

0xa827,	// (0x0002a78e) list_double_number_pane_t3_cp2

0xa6e6,	// (0x0002a64d) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6e6,	// (0x0002a64d) list_single_graphic_pane_g1_cp2

0x1de9,	// (0x00021d50) list_single_graphic_pane_g2_cp2_ParamLimits

0x1de9,	// (0x00021d50) list_single_graphic_pane_g2_cp2

0x2720,	// (0x00022687) list_single_graphic_pane_g3_cp2

0xa6bc,	// (0x0002a623) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0002a623) list_single_graphic_pane_t1_cp2

0x1de9,	// (0x00021d50) list_single_number_pane_g1_cp2_ParamLimits

0x1de9,	// (0x00021d50) list_single_number_pane_g1_cp2

0x2720,	// (0x00022687) list_single_number_pane_g2_cp2

0xa6bc,	// (0x0002a623) list_single_number_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0002a623) list_single_number_pane_t1_cp2

0xa6d2,	// (0x0002a639) list_single_number_pane_t2_cp2_ParamLimits

0xa6d2,	// (0x0002a639) list_single_number_pane_t2_cp2

0x256c,	// (0x000224d3) list_double2_pane_g1_cp2_ParamLimits

0x256c,	// (0x000224d3) list_double2_pane_g1_cp2

0x257d,	// (0x000224e4) list_double2_pane_g2_cp2

0x2693,	// (0x000225fa) list_double2_pane_t1_cp2_ParamLimits

0x2693,	// (0x000225fa) list_double2_pane_t1_cp2

0x26a9,	// (0x00022610) list_double2_pane_t2_cp2_ParamLimits

0x26a9,	// (0x00022610) list_double2_pane_t2_cp2

0x26bb,	// (0x00022622) list_double_pane_g1_cp2_ParamLimits

0x26bb,	// (0x00022622) list_double_pane_g1_cp2

0x26c7,	// (0x0002262e) list_double_pane_g2_cp2

0x26cf,	// (0x00022636) list_double_pane_t1_cp2_ParamLimits

0x26cf,	// (0x00022636) list_double_pane_t1_cp2

0x26e5,	// (0x0002264c) list_double_pane_t2_cp2_ParamLimits

0x26e5,	// (0x0002264c) list_double_pane_t2_cp2

0x76b7,	// (0x0002761e) list_single_pane_cp2_g3

0x1de9,	// (0x00021d50) list_single_pane_g1_cp2_ParamLimits

0x1de9,	// (0x00021d50) list_single_pane_g1_cp2

0x2720,	// (0x00022687) list_single_pane_g2_cp2

0x2728,	// (0x0002268f) list_single_pane_t1_cp2_ParamLimits

0x2728,	// (0x0002268f) list_single_pane_t1_cp2

0x76bf,	// (0x00027626) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x76bf,	// (0x00027626) list_single_large_graphic_pane_g1_cp2

0x2740,	// (0x000226a7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2740,	// (0x000226a7) list_single_large_graphic_pane_g2_cp2

0x274c,	// (0x000226b3) list_single_large_graphic_pane_g3_cp2

0x76cb,	// (0x00027632) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x76cb,	// (0x00027632) list_single_large_graphic_pane_g4_cp1

0x2754,	// (0x000226bb) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2754,	// (0x000226bb) list_single_large_graphic_pane_t1_cp2

0xa688,	// (0x0002a5ef) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa688,	// (0x0002a5ef) list_single_graphic_heading_pane_g1_cp2

0xa655,	// (0x0002a5bc) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa655,	// (0x0002a5bc) list_single_graphic_heading_pane_g4_cp2

0x2720,	// (0x00022687) list_single_graphic_heading_pane_g5_cp2

0xa694,	// (0x0002a5fb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa694,	// (0x0002a5fb) list_single_graphic_heading_pane_t1_cp2

0xa6aa,	// (0x0002a611) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6aa,	// (0x0002a611) list_single_graphic_heading_pane_t2_cp2

0xa649,	// (0x0002a5b0) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa649,	// (0x0002a5b0) list_single_2graphic_pane_g1_cp2

0xa655,	// (0x0002a5bc) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa655,	// (0x0002a5bc) list_single_2graphic_pane_g2_cp2

0x2720,	// (0x00022687) list_single_2graphic_pane_g3_cp2

0xa666,	// (0x0002a5cd) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa666,	// (0x0002a5cd) list_single_2graphic_pane_g4_cp2

0xa672,	// (0x0002a5d9) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa672,	// (0x0002a5d9) list_single_2graphic_pane_t1_cp2

0x1a03,	// (0x0002196a) list_highlight_pane_g10_cp1

0xa231,	// (0x0002a198) list_highlight_pane_g1_cp1

0xa239,	// (0x0002a1a0) list_highlight_pane_g2_cp1

0xa241,	// (0x0002a1a8) list_highlight_pane_g3_cp1

0xa249,	// (0x0002a1b0) list_highlight_pane_g4_cp1

0xa251,	// (0x0002a1b8) list_highlight_pane_g5_cp1

0xa259,	// (0x0002a1c0) list_highlight_pane_g6_cp1

0xa261,	// (0x0002a1c8) list_highlight_pane_g7_cp1

0xa269,	// (0x0002a1d0) list_highlight_pane_g8_cp1

0xa271,	// (0x0002a1d8) list_highlight_pane_g9_cp1

0x8dc1,	// (0x00028d28) form_field_slider_pane_t3

0x8dcf,	// (0x00028d36) form_field_slider_pane_t4

0x8ddd,	// (0x00028d44) slider_form_pane_ParamLimits

0x8ddd,	// (0x00028d44) slider_form_pane

0x1a0d,	// (0x00021974) control_abbreviations

0x1a0d,	// (0x00021974) control_conventions

0x1a0d,	// (0x00021974) control_definitions

0x1a0d,	// (0x00021974) format_table_attribute

0xa93b,	// (0x0002a8a2) bg_popup_preview_window_pane_g9

0x1a0d,	// (0x00021974) format_table_data2

0x1a0d,	// (0x00021974) format_table_data3

0x1a0d,	// (0x00021974) format_table_data_example

0x0008,

0x1a0d,	// (0x00021974) intro_purpose

0xf8b6,	// (0x0002f81d) bg_popup_preview_window_pane_g

0x1a0d,	// (0x00021974) texts_category

0x1a0d,	// (0x00021974) texts_graphics

0x276a,	// (0x000226d1) text_digital

0x2779,	// (0x000226e0) text_primary

0x2788,	// (0x000226ef) text_primary_small

0x2797,	// (0x000226fe) text_secondary

0x27a6,	// (0x0002270d) text_title

0xb06e,	// (0x0002afd5) bg_passive_tab_pane_g1_cp3_srt

0x74b8,	// (0x0002741f) bg_passive_tab_pane_g2_cp3_srt

0xb077,	// (0x0002afde) bg_passive_tab_pane_g3_cp3_srt

0x1a69,	// (0x000219d0) bg_active_tab_pane_cp3_srt_ParamLimits

0x1a69,	// (0x000219d0) bg_active_tab_pane_cp3_srt

0xb080,	// (0x0002afe7) tabs_4_active_pane_srt_g1

0xb088,	// (0x0002afef) tabs_4_active_pane_srt_t1_ParamLimits

0xb088,	// (0x0002afef) tabs_4_active_pane_srt_t1

0xb06e,	// (0x0002afd5) bg_active_tab_pane_g1_cp3_copy1

0x74b8,	// (0x0002741f) bg_active_tab_pane_g2_cp3_copy1

0xb077,	// (0x0002afde) bg_active_tab_pane_g3_cp3_copy1

0x1a69,	// (0x000219d0) tabs_2_long_active_pane_srt_ParamLimits

0x1a69,	// (0x000219d0) tabs_2_long_active_pane_srt

0x1a69,	// (0x000219d0) tabs_2_long_passive_pane_srt_ParamLimits

0x1a69,	// (0x000219d0) tabs_2_long_passive_pane_srt

0x6ff7,	// (0x00026f5e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6ff7,	// (0x00026f5e) bg_passive_tab_pane_cp4_srt

0xad5c,	// (0x0002acc3) bg_passive_tab_pane_g1_cp4_srt

0x74b8,	// (0x0002741f) bg_passive_tab_pane_g2_cp4_srt

0xad65,	// (0x0002accc) bg_passive_tab_pane_g3_cp4_srt

0x6fd6,	// (0x00026f3d) bg_active_tab_pane_cp4_srt_ParamLimits

0x6fd6,	// (0x00026f3d) bg_active_tab_pane_cp4_srt

0xad6e,	// (0x0002acd5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad6e,	// (0x0002acd5) tabs_2_long_active_pane_srt_t1

0xad5c,	// (0x0002acc3) bg_active_tab_pane_g1_cp4_srt

0x74b8,	// (0x0002741f) bg_active_tab_pane_g2_cp4_srt

0xad65,	// (0x0002accc) bg_active_tab_pane_g3_cp4_srt

0x1a5b,	// (0x000219c2) tabs_3_long_active_pane_srt_ParamLimits

0x1a5b,	// (0x000219c2) tabs_3_long_active_pane_srt

0x1a5b,	// (0x000219c2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1a5b,	// (0x000219c2) tabs_3_long_passive_pane_cp_srt

0x1a5b,	// (0x000219c2) tabs_3_long_passive_pane_srt_ParamLimits

0x1a5b,	// (0x000219c2) tabs_3_long_passive_pane_srt

0x6ff7,	// (0x00026f5e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6ff7,	// (0x00026f5e) bg_passive_tab_pane_cp5_srt

0x7645,	// (0x000275ac) bg_passive_tab_pane_g1_cp5_srt

0x74b8,	// (0x0002741f) bg_passive_tab_pane_g2_cp5_srt

0x764e,	// (0x000275b5) bg_passive_tab_pane_g3_cp5_srt

0x6fd6,	// (0x00026f3d) bg_active_tab_pane_cp5_srt_ParamLimits

0x6fd6,	// (0x00026f3d) bg_active_tab_pane_cp5_srt

0xad4a,	// (0x0002acb1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad4a,	// (0x0002acb1) tabs_3_long_active_pane_srt_t1

0x7645,	// (0x000275ac) bg_active_tab_pane_g1_cp5_srt

0x74b8,	// (0x0002741f) bg_active_tab_pane_g2_cp5_srt

0x764e,	// (0x000275b5) bg_active_tab_pane_g3_cp5_srt

0xad3c,	// (0x0002aca3) navi_text_pane_srt_t1

0xad34,	// (0x0002ac9b) navi_icon_pane_srt_g1

0x2891,	// (0x000227f8) midp_editing_number_pane_srt

0x27b5,	// (0x0002271c) midp_ticker_pane_srt

0x2899,	// (0x00022800) midp_ticker_pane_srt_g1

0x28a1,	// (0x00022808) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x0002f6a5) midp_ticker_pane_srt_g

0x28a9,	// (0x00022810) midp_ticker_pane_srt_t1

0xad25,	// (0x0002ac8c) midp_editing_number_pane_t1_copy1

0x76e5,	// (0x0002764c) listscroll_midp_pane

0x76e5,	// (0x0002764c) midp_form_pane

0x7757,	// (0x000276be) midp_info_popup_window_ParamLimits

0x7757,	// (0x000276be) midp_info_popup_window

0x1fee,	// (0x00021f55) bg_popup_sub_pane_cp50_ParamLimits

0x1fee,	// (0x00021f55) bg_popup_sub_pane_cp50

0x8acd,	// (0x00028a34) listscroll_midp_info_pane_ParamLimits

0x8acd,	// (0x00028a34) listscroll_midp_info_pane

0x8aad,	// (0x00028a14) listscroll_form_midp_pane_ParamLimits

0x8aad,	// (0x00028a14) listscroll_form_midp_pane

0x8ab9,	// (0x00028a20) scroll_bar_cp050

0x8a8d,	// (0x000289f4) list_midp_pane

0xbad9,	// (0x0002ba40) signal_pane_g2_cp

0x89c7,	// (0x0002892e) listscroll_midp_info_pane_t1_ParamLimits

0x89c7,	// (0x0002892e) listscroll_midp_info_pane_t1

0x89df,	// (0x00028946) listscroll_midp_info_pane_t2_ParamLimits

0x89df,	// (0x00028946) listscroll_midp_info_pane_t2

0x8a1d,	// (0x00028984) listscroll_midp_info_pane_t3_ParamLimits

0x8a1d,	// (0x00028984) listscroll_midp_info_pane_t3

0x8a57,	// (0x000289be) listscroll_midp_info_pane_t4_ParamLimits

0x8a57,	// (0x000289be) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x0002f758) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x0002f758) listscroll_midp_info_pane_t

0x2043,	// (0x00021faa) scroll_pane_cp21

0x8967,	// (0x000288ce) form_midp_field_choice_group_pane

0x8970,	// (0x000288d7) form_midp_field_text_pane

0x89ad,	// (0x00028914) form_midp_field_time_pane

0x89b5,	// (0x0002891c) form_midp_gauge_slider_pane

0x89be,	// (0x00028925) form_midp_gauge_wait_pane

0x1a0d,	// (0x00021974) form_midp_image_pane

0x5d60,	// (0x00025cc7) list_single_midp_pane_ParamLimits

0x5d60,	// (0x00025cc7) list_single_midp_pane

0x891c,	// (0x00028883) form_midp_field_text_pane_t1

0x865e,	// (0x000285c5) input_focus_pane_cp050

0x8956,	// (0x000288bd) list_midp_form_text_pane

0x88eb,	// (0x00028852) form_midp_field_choice_group_pane_t1

0x88f9,	// (0x00028860) input_focus_pane_cp051

0x890d,	// (0x00028874) list_midp_choice_pane

0x1a0d,	// (0x00021974) status_idle_pane

0x88cf,	// (0x00028836) form_midp_field_time_pane_t1

0x1a03,	// (0x0002196a) wait_anim_pane_g2_copy1

0x88dd,	// (0x00028844) form_midp_field_time_pane_t2

0x0001,

0x2815,	// (0x0002277c) aid_navinavi_width_2_pane

0xf7ec,	// (0x0002f753) form_midp_field_time_pane_t

0x1a0d,	// (0x00021974) input_focus_pane_cp052

0x1a0d,	// (0x00021974) bg_input_focus_pane_cp040

0x888f,	// (0x000287f6) form_midp_gauge_slider_pane_t1

0x889d,	// (0x00028804) form_midp_gauge_slider_pane_t2

0x88ab,	// (0x00028812) form_midp_gauge_slider_pane_t3

0x88b9,	// (0x00028820) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x0002f74a) form_midp_gauge_slider_pane_t

0x88c7,	// (0x0002882e) form_midp_slider_pane

0x1a69,	// (0x000219d0) bg_input_focus_pane_cp041_ParamLimits

0x1a69,	// (0x000219d0) bg_input_focus_pane_cp041

0x885c,	// (0x000287c3) form_midp_gauge_wait_pane_t1_ParamLimits

0x885c,	// (0x000287c3) form_midp_gauge_wait_pane_t1

0x886e,	// (0x000287d5) form_midp_gauge_wait_pane_t2_ParamLimits

0x886e,	// (0x000287d5) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x0002f745) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x0002f745) form_midp_gauge_wait_pane_t

0x8880,	// (0x000287e7) form_midp_wait_pane_ParamLimits

0x8880,	// (0x000287e7) form_midp_wait_pane

0x8826,	// (0x0002878d) form_midp_image_pane_g1

0x882f,	// (0x00028796) form_midp_image_pane_t1

0x883e,	// (0x000287a5) form_midp_image_pane_t2

0x884d,	// (0x000287b4) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x0002f73e) form_midp_image_pane_t

0x881d,	// (0x00028784) list_single_midp_pane_g1

0x5d51,	// (0x00025cb8) list_single_midp_pane_t1

0x87f4,	// (0x0002875b) list_midp_form_item_pane_ParamLimits

0x87f4,	// (0x0002875b) list_midp_form_item_pane

0x27bd,	// (0x00022724) list_midp_form_item_pane_t1

0x27cc,	// (0x00022733) midp_ticker_pane_g1

0x27d8,	// (0x0002273f) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x0002f68b) midp_ticker_pane_g

0x27e4,	// (0x0002274b) midp_ticker_pane_t1

0xaf72,	// (0x0002aed9) midp_editing_number_pane_t1

0xaf50,	// (0x0002aeb7) midp_editing_number_pane

0xaf5f,	// (0x0002aec6) midp_ticker_pane

0xad15,	// (0x0002ac7c) ai_message_heading_pane

0x1a0d,	// (0x00021974) bg_popup_window_pane_cp14

0xad1d,	// (0x0002ac84) listscroll_ai_message_pane

0xac9f,	// (0x0002ac06) ai_message_heading_pane_g1_ParamLimits

0xac9f,	// (0x0002ac06) ai_message_heading_pane_g1

0xacab,	// (0x0002ac12) ai_message_heading_pane_g2_ParamLimits

0xacab,	// (0x0002ac12) ai_message_heading_pane_g2

0xacb7,	// (0x0002ac1e) ai_message_heading_pane_g3_ParamLimits

0xacb7,	// (0x0002ac1e) ai_message_heading_pane_g3

0xacc3,	// (0x0002ac2a) ai_message_heading_pane_g4_ParamLimits

0xacc3,	// (0x0002ac2a) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x0002f87f) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x0002f87f) ai_message_heading_pane_g

0xaccf,	// (0x0002ac36) ai_message_heading_pane_t1_ParamLimits

0xaccf,	// (0x0002ac36) ai_message_heading_pane_t1

0xace9,	// (0x0002ac50) ai_message_heading_pane_t2_ParamLimits

0xace9,	// (0x0002ac50) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x0002f888) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x0002f888) ai_message_heading_pane_t

0xacfb,	// (0x0002ac62) bg_popup_heading_pane_cp1_ParamLimits

0xacfb,	// (0x0002ac62) bg_popup_heading_pane_cp1

0xac8d,	// (0x0002abf4) list_ai_message_pane_ParamLimits

0xac8d,	// (0x0002abf4) list_ai_message_pane

0x2043,	// (0x00021faa) scroll_pane_cp10

0xac29,	// (0x0002ab90) list_ai_message_pane_g1

0xac31,	// (0x0002ab98) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x0002f85c) list_ai_message_pane_g

0xac39,	// (0x0002aba0) list_ai_message_pane_t1_ParamLimits

0xac39,	// (0x0002aba0) list_ai_message_pane_t1

0xac4e,	// (0x0002abb5) list_ai_message_pane_t2_ParamLimits

0xac4e,	// (0x0002abb5) list_ai_message_pane_t2

0xac63,	// (0x0002abca) list_ai_message_pane_t3_ParamLimits

0xac63,	// (0x0002abca) list_ai_message_pane_t3

0xac78,	// (0x0002abdf) list_ai_message_pane_t4_ParamLimits

0xac78,	// (0x0002abdf) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x0002f861) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x0002f861) list_ai_message_pane_t

0xac14,	// (0x0002ab7b) cell_ai_soft_ind_pane_ParamLimits

0xac14,	// (0x0002ab7b) cell_ai_soft_ind_pane

0x27f6,	// (0x0002275d) cell_ai_soft_ind_pane_g1_ParamLimits

0x27f6,	// (0x0002275d) cell_ai_soft_ind_pane_g1

0x1a0d,	// (0x00021974) grid_highlight_cp1

0x2803,	// (0x0002276a) text_secondary_cp56_ParamLimits

0x2803,	// (0x0002276a) text_secondary_cp56

0xabe9,	// (0x0002ab50) example_general_pane_ParamLimits

0xabe9,	// (0x0002ab50) example_general_pane

0xabf5,	// (0x0002ab5c) example_parent_pane_g1_ParamLimits

0xabf5,	// (0x0002ab5c) example_parent_pane_g1

0xac01,	// (0x0002ab68) example_parent_pane_t1_ParamLimits

0xac01,	// (0x0002ab68) example_parent_pane_t1

0x7e0f,	// (0x00027d76) popup_preview_text_window_ParamLimits

0x7e0f,	// (0x00027d76) popup_preview_text_window

0x2718,	// (0x0002267f) list_single_pane_cp2_g4

0x1c55,	// (0x00021bbc) bg_popup_preview_window_pane_ParamLimits

0x1c55,	// (0x00021bbc) bg_popup_preview_window_pane

0xa943,	// (0x0002a8aa) popup_preview_text_window_t1_ParamLimits

0xa943,	// (0x0002a8aa) popup_preview_text_window_t1

0xa961,	// (0x0002a8c8) popup_preview_text_window_t2_ParamLimits

0xa961,	// (0x0002a8c8) popup_preview_text_window_t2

0xa9aa,	// (0x0002a911) popup_preview_text_window_t3_ParamLimits

0xa9aa,	// (0x0002a911) popup_preview_text_window_t3

0xa9ef,	// (0x0002a956) popup_preview_text_window_t4_ParamLimits

0xa9ef,	// (0x0002a956) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x0002f830) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x0002f830) popup_preview_text_window_t

0xaa6d,	// (0x0002a9d4) scroll_pane_cp11

0x855a,	// (0x000284c1) bg_popup_preview_window_pane_g1

0xa903,	// (0x0002a86a) bg_popup_preview_window_pane_g2

0xa90b,	// (0x0002a872) bg_popup_preview_window_pane_g3

0xa913,	// (0x0002a87a) bg_popup_preview_window_pane_g4

0xa91b,	// (0x0002a882) bg_popup_preview_window_pane_g5

0xa923,	// (0x0002a88a) bg_popup_preview_window_pane_g6

0xa92b,	// (0x0002a892) bg_popup_preview_window_pane_g7

0xa933,	// (0x0002a89a) bg_popup_preview_window_pane_g8

0x658e,	// (0x000264f5) aid_popup_width_pane

0x7ded,	// (0x00027d54) popup_midp_note_alarm_window_ParamLimits

0x7ded,	// (0x00027d54) popup_midp_note_alarm_window

0x1e97,	// (0x00021dfe) data_form_pane_ParamLimits

0x59d0,	// (0x00025937) form_field_data_pane_g1

0x59da,	// (0x00025941) form_field_data_pane_t1_ParamLimits

0x1ea3,	// (0x00021e0a) input_focus_pane_ParamLimits

0x59f2,	// (0x00025959) data_form_wide_pane_ParamLimits

0x5a03,	// (0x0002596a) form_field_data_wide_pane_g1

0x5a0f,	// (0x00025976) form_field_data_wide_pane_t1_ParamLimits

0x1d2d,	// (0x00021c94) input_focus_pane_cp6_ParamLimits

0x6f8d,	// (0x00026ef4) input_popup_find_pane_g1_ParamLimits

0x6f8d,	// (0x00026ef4) input_popup_find_pane_g1

0x712d,	// (0x00027094) aid_navi_side_left_pane

0x7142,	// (0x000270a9) aid_navi_side_right_pane

0xa32c,	// (0x0002a293) bg_popup_window_pane_cp30_ParamLimits

0xa32c,	// (0x0002a293) bg_popup_window_pane_cp30

0xa3a6,	// (0x0002a30d) popup_midp_note_alarm_window_g1_ParamLimits

0xa3a6,	// (0x0002a30d) popup_midp_note_alarm_window_g1

0xa3d6,	// (0x0002a33d) popup_midp_note_alarm_window_t1_ParamLimits

0xa3d6,	// (0x0002a33d) popup_midp_note_alarm_window_t1

0xa477,	// (0x0002a3de) popup_midp_note_alarm_window_t2_ParamLimits

0xa477,	// (0x0002a3de) popup_midp_note_alarm_window_t2

0xa525,	// (0x0002a48c) popup_midp_note_alarm_window_t3_ParamLimits

0xa525,	// (0x0002a48c) popup_midp_note_alarm_window_t3

0xa54d,	// (0x0002a4b4) popup_midp_note_alarm_window_t4_ParamLimits

0xa54d,	// (0x0002a4b4) popup_midp_note_alarm_window_t4

0xa56d,	// (0x0002a4d4) popup_midp_note_alarm_window_t5_ParamLimits

0xa56d,	// (0x0002a4d4) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x0002f7cd) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x0002f7cd) popup_midp_note_alarm_window_t

0xa619,	// (0x0002a580) wait_bar_pane_cp1_ParamLimits

0xa619,	// (0x0002a580) wait_bar_pane_cp1

0x1a0d,	// (0x00021974) wait_anim_pane_copy1

0x1a0d,	// (0x00021974) wait_border_pane_copy1

0x8c8a,	// (0x00028bf1) wait_border_pane_g1_copy1

0x5a29,	// (0x00025990) form_field_popup_pane_g1

0x5a31,	// (0x00025998) form_field_popup_pane_t1_ParamLimits

0x1ea3,	// (0x00021e0a) input_focus_pane_cp7_ParamLimits

0x1f10,	// (0x00021e77) list_form_pane_ParamLimits

0x5a49,	// (0x000259b0) form_field_popup_wide_pane_g1

0x5a51,	// (0x000259b8) form_field_popup_wide_pane_t1_ParamLimits

0x1ea3,	// (0x00021e0a) input_focus_pane_cp8_ParamLimits

0x1f39,	// (0x00021ea0) list_form_wide_pane_ParamLimits

0xb10b,	// (0x0002b072) aid_size_cell_graphic_pane

0x5adb,	// (0x00025a42) data_form_pane_t1_ParamLimits

0x5da5,	// (0x00025d0c) data_form_wide_pane_t1_ParamLimits

0x80f4,	// (0x0002805b) bg_status_flat_pane

0x698d,	// (0x000268f4) title_pane_t1_ParamLimits

0x1a23,	// (0x0002198a) title_pane_t2_ParamLimits

0x1a49,	// (0x000219b0) title_pane_t3_ParamLimits

0xf532,	// (0x0002f499) title_pane_t_ParamLimits

0x22f8,	// (0x0002225f) level_1_signal_ParamLimits

0x2305,	// (0x0002226c) level_2_signal_ParamLimits

0x2312,	// (0x00022279) level_3_signal_ParamLimits

0x231f,	// (0x00022286) level_4_signal_ParamLimits

0x232c,	// (0x00022293) level_5_signal_ParamLimits

0x2339,	// (0x000222a0) level_6_signal_ParamLimits

0x2346,	// (0x000222ad) level_7_signal_ParamLimits

0x22f8,	// (0x0002225f) level_1_battery_ParamLimits

0x2305,	// (0x0002226c) level_2_battery_ParamLimits

0x2312,	// (0x00022279) level_3_battery_ParamLimits

0x231f,	// (0x00022286) level_4_battery_ParamLimits

0x232c,	// (0x00022293) level_5_battery_ParamLimits

0x2339,	// (0x000222a0) level_6_battery_ParamLimits

0x2346,	// (0x000222ad) level_7_battery_ParamLimits

0xa231,	// (0x0002a198) bg_status_flat_pane_g1

0xa239,	// (0x0002a1a0) bg_status_flat_pane_g2

0xa241,	// (0x0002a1a8) bg_status_flat_pane_g3

0xa249,	// (0x0002a1b0) bg_status_flat_pane_g4

0xa251,	// (0x0002a1b8) bg_status_flat_pane_g5

0xa259,	// (0x0002a1c0) bg_status_flat_pane_g6

0xa261,	// (0x0002a1c8) bg_status_flat_pane_g7

0x69fd,	// (0x00026964) tabs_3_active_pane_t1_ParamLimits

0x69fd,	// (0x00026964) tabs_3_passive_pane_t1_ParamLimits

0x6a17,	// (0x0002697e) tabs_4_active_pane_t1_ParamLimits

0x6a17,	// (0x0002697e) tabs_4_1_passive_pane_t1_ParamLimits

0x6fc4,	// (0x00026f2b) tabs_2_active_pane_t1_ParamLimits

0x6fc4,	// (0x00026f2b) tabs_2_passive_pane_t1_ParamLimits

0x6fd6,	// (0x00026f3d) bg_active_tab_pane_cp4_ParamLimits

0x6fe4,	// (0x00026f4b) tabs_2_long_active_pane_t1_ParamLimits

0x6ff7,	// (0x00026f5e) bg_passive_tab_pane_cp4_ParamLimits

0x85ef,	// (0x00028556) list_single_midp_graphic_pane_t1_ParamLimits

0x6fd6,	// (0x00026f3d) bg_active_tab_pane_cp5_ParamLimits

0x7003,	// (0x00026f6a) tabs_3_long_active_pane_t1_ParamLimits

0x6ff7,	// (0x00026f5e) bg_passive_tab_pane_cp5_ParamLimits

0x85ef,	// (0x00028556) list_single_midp_graphic_pane_t1

0x80f4,	// (0x0002805b) bg_status_flat_pane_ParamLimits

0x81bd,	// (0x00028124) indicator_pane_cp2_ParamLimits

0x81bd,	// (0x00028124) indicator_pane_cp2

0x82e8,	// (0x0002824f) navi_pane_srt_ParamLimits

0x82e8,	// (0x0002824f) navi_pane_srt

0x830c,	// (0x00028273) popup_clock_digital_analogue_window_cp1

0x1ac7,	// (0x00021a2e) indicator_pane_t1

0x27b5,	// (0x0002271c) copy_highlight_pane

0x27b5,	// (0x0002271c) cursor_graphics_pane

0x27b5,	// (0x0002271c) graphic_within_text_pane

0x27b5,	// (0x0002271c) link_highlight_pane

0xaa30,	// (0x0002a997) popup_preview_text_window_t5_ParamLimits

0xaa30,	// (0x0002a997) popup_preview_text_window_t5

0x281d,	// (0x00022784) cursor_digital_pane

0x281d,	// (0x00022784) cursor_primary_pane

0x282e,	// (0x00022795) cursor_primary_small_pane

0x2836,	// (0x0002279d) cursor_secondary_pane

0x283e,	// (0x000227a5) cursor_title_pane

0x281d,	// (0x00022784) link_highlight_digital_pane

0x2825,	// (0x0002278c) link_highlight_primary_pane

0x282e,	// (0x00022795) link_highlight_primary_small_pane

0x2836,	// (0x0002279d) link_highlight_secondary_pane

0x283e,	// (0x000227a5) link_highlight_title_pane

0x281d,	// (0x00022784) copy_highlight_digital_pane

0x281d,	// (0x00022784) copy_highlight_primary_pane

0x282e,	// (0x00022795) copy_highlight_primary_small_pane

0x2836,	// (0x0002279d) copy_highlight_secondary_pane

0x283e,	// (0x000227a5) copy_highlight_title_pane

0x2836,	// (0x0002279d) graphic_text_digital_pane

0xa2cf,	// (0x0002a236) graphic_text_primary_pane

0xa2d8,	// (0x0002a23f) graphic_text_primary_small_pane

0x282e,	// (0x00022795) graphic_text_secondary_pane

0x281d,	// (0x00022784) graphic_text_title_pane

0x77af,	// (0x00027716) cursor_primary_pane_g1

0xa2c1,	// (0x0002a228) cursor_text_primary_t1

0xa2a9,	// (0x0002a210) cursor_primary_small_pane_g1

0xa2b3,	// (0x0002a21a) cursor_text_primary_small_t1

0xa291,	// (0x0002a1f8) cursor_primary_small_pane_g1_copy1

0xa29b,	// (0x0002a202) cursor_text_primary_small_t1_copy1

0xa279,	// (0x0002a1e0) cursor_text_title_t1

0xa287,	// (0x0002a1ee) cursor_title_pane_g1

0x77af,	// (0x00027716) cursor_digital_pane_g1

0x2846,	// (0x000227ad) cursor_text_digital_t1

0x2854,	// (0x000227bb) link_highlight_primary_pane_g1

0xa222,	// (0x0002a189) link_highlight_primary_pane_t1

0x2854,	// (0x000227bb) link_highlight_primary_small_pane_g1

0x285c,	// (0x000227c3) link_highlight_primary_small_pane_t1

0x2854,	// (0x000227bb) link_highlight_secondary_pane_g1

0x286b,	// (0x000227d2) link_highlight_secondary_pane_t1

0x8def,	// (0x00028d56) link_highlight_title_pane_g1

0x8e06,	// (0x00028d6d) link_highlight_title_pane_t1

0x8def,	// (0x00028d56) link_highlight_digital_pane_g1

0x8df7,	// (0x00028d5e) link_highlight_digital_pane_t1

0x8ca9,	// (0x00028c10) copy_highlight_primary_pane_g1

0x8ccf,	// (0x00028c36) copy_highlight_primary_pane_t1

0x8ca9,	// (0x00028c10) copy_highlight_primary_small_pane_g1

0x8cc0,	// (0x00028c27) copy_highlight_primary_small_pane_t1

0x287a,	// (0x000227e1) copy_highlight_secondary_pane_g1

0x2882,	// (0x000227e9) copy_highlight_secondary_pane_t1

0x8ca9,	// (0x00028c10) copy_highlight_title_pane_g1

0x8cb1,	// (0x00028c18) copy_highlight_title_pane_t1

0x8ca9,	// (0x00028c10) copy_highlight_digital_pane_g1

0xb2d9,	// (0x0002b240) copy_highlight_digital_pane_t1

0xb22d,	// (0x0002b194) graphic_text_primary_pane_g1

0xb2bd,	// (0x0002b224) graphic_text_primary_pane_t1

0xb2cb,	// (0x0002b232) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x0002f8fc) graphic_text_primary_pane_t

0xb299,	// (0x0002b200) graphic_text_primary_small_pane_g1

0xb2a1,	// (0x0002b208) graphic_text_primary_small_pane_t1

0xb2af,	// (0x0002b216) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x0002f8f7) graphic_text_primary_small_pane_t

0xb275,	// (0x0002b1dc) graphic_text_secondary_pane_g1

0xb27d,	// (0x0002b1e4) graphic_text_secondary_pane_t1

0xb28b,	// (0x0002b1f2) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x0002f8f2) graphic_text_secondary_pane_t

0xb251,	// (0x0002b1b8) graphic_text_title_pane_g1

0xb259,	// (0x0002b1c0) graphic_text_title_pane_t1

0xb267,	// (0x0002b1ce) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x0002f8ed) graphic_text_title_pane_t

0xb22d,	// (0x0002b194) graphic_text_digital_pane_g1

0xb235,	// (0x0002b19c) graphic_text_digital_pane_t1

0xb243,	// (0x0002b1aa) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x0002f8e8) graphic_text_digital_pane_t

0x1a69,	// (0x000219d0) navi_icon_pane_srt_ParamLimits

0x1a69,	// (0x000219d0) navi_icon_pane_srt

0x1a0d,	// (0x00021974) navi_midp_pane_srt

0x1a0d,	// (0x00021974) navi_navi_pane_srt

0x1a69,	// (0x000219d0) navi_text_pane_srt_ParamLimits

0x1a69,	// (0x000219d0) navi_text_pane_srt

0xb1f8,	// (0x0002b15f) navi_navi_icon_text_pane_srt

0xb200,	// (0x0002b167) navi_navi_pane_srt_g1_ParamLimits

0xb200,	// (0x0002b167) navi_navi_pane_srt_g1

0xb212,	// (0x0002b179) navi_navi_pane_srt_g2_ParamLimits

0xb212,	// (0x0002b179) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x0002f8e3) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x0002f8e3) navi_navi_pane_srt_g

0xb224,	// (0x0002b18b) navi_navi_tabs_pane_srt

0xb1f8,	// (0x0002b15f) navi_navi_text_pane_srt

0xb1f8,	// (0x0002b15f) navi_navi_volume_pane_srt

0xb1e9,	// (0x0002b150) navi_navi_text_pane_srt_t1

0x9120,	// (0x00029087) navi_navi_volume_pane_srt_g1

0x9128,	// (0x0002908f) volume_small_pane_srt_ParamLimits

0x9128,	// (0x0002908f) volume_small_pane_srt

0x77b9,	// (0x00027720) volume_small_pane_srt_g1_ParamLimits

0x77b9,	// (0x00027720) volume_small_pane_srt_g1

0x77c9,	// (0x00027730) volume_small_pane_srt_g2_ParamLimits

0x77c9,	// (0x00027730) volume_small_pane_srt_g2

0x77da,	// (0x00027741) volume_small_pane_srt_g3_ParamLimits

0x77da,	// (0x00027741) volume_small_pane_srt_g3

0x77eb,	// (0x00027752) volume_small_pane_srt_g4_ParamLimits

0x77eb,	// (0x00027752) volume_small_pane_srt_g4

0x77fc,	// (0x00027763) volume_small_pane_srt_g5_ParamLimits

0x77fc,	// (0x00027763) volume_small_pane_srt_g5

0x780d,	// (0x00027774) volume_small_pane_srt_g6_ParamLimits

0x780d,	// (0x00027774) volume_small_pane_srt_g6

0x781e,	// (0x00027785) volume_small_pane_srt_g7_ParamLimits

0x781e,	// (0x00027785) volume_small_pane_srt_g7

0x782f,	// (0x00027796) volume_small_pane_srt_g8_ParamLimits

0x782f,	// (0x00027796) volume_small_pane_srt_g8

0x7840,	// (0x000277a7) volume_small_pane_srt_g9_ParamLimits

0x7840,	// (0x000277a7) volume_small_pane_srt_g9

0x7851,	// (0x000277b8) volume_small_pane_srt_g10_ParamLimits

0x7851,	// (0x000277b8) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x0002f690) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x0002f690) volume_small_pane_srt_g

0x6c64,	// (0x00026bcb) query_popup_data_pane_cp2

0xb1cf,	// (0x0002b136) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1cf,	// (0x0002b136) navi_navi_icon_text_pane_srt_t1

0xa2cf,	// (0x0002a236) navi_tabs_2_long_pane_srt

0xa2cf,	// (0x0002a236) navi_tabs_2_pane_srt

0xa2cf,	// (0x0002a236) navi_tabs_3_long_pane_srt

0xa2cf,	// (0x0002a236) navi_tabs_3_pane_srt

0xa2cf,	// (0x0002a236) navi_tabs_4_pane_srt

0x9100,	// (0x00029067) tabs_2_active_pane_srt_ParamLimits

0x9100,	// (0x00029067) tabs_2_active_pane_srt

0x9110,	// (0x00029077) tabs_2_passive_pane_srt_ParamLimits

0x9110,	// (0x00029077) tabs_2_passive_pane_srt

0x2053,	// (0x00021fba) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2053,	// (0x00021fba) bg_passive_tab_pane_cp1_srt

0xb19b,	// (0x0002b102) bg_passive_tab_pane_g1_cp1_srt

0x74b8,	// (0x0002741f) bg_passive_tab_pane_g2_cp1_srt

0xb1a4,	// (0x0002b10b) bg_passive_tab_pane_g3_cp1_srt

0x1a69,	// (0x000219d0) bg_active_tab_pane_cp1_srt_ParamLimits

0x1a69,	// (0x000219d0) bg_active_tab_pane_cp1_srt

0xb1ad,	// (0x0002b114) tabs_2_active_pane_srt_g1

0xb1b5,	// (0x0002b11c) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b5,	// (0x0002b11c) tabs_2_active_pane_srt_t1

0xb19b,	// (0x0002b102) bg_active_tab_pane_g1_cp1_srt

0x74b8,	// (0x0002741f) bg_active_tab_pane_g2_cp1_srt

0xb1a4,	// (0x0002b10b) bg_active_tab_pane_g3_cp1_srt

0x90cd,	// (0x00029034) tabs_3_active_pane_srt_ParamLimits

0x90cd,	// (0x00029034) tabs_3_active_pane_srt

0x90de,	// (0x00029045) tabs_3_passive_pane_cp_srt_ParamLimits

0x90de,	// (0x00029045) tabs_3_passive_pane_cp_srt

0x90ef,	// (0x00029056) tabs_3_passive_pane_srt_ParamLimits

0x90ef,	// (0x00029056) tabs_3_passive_pane_srt

0x2053,	// (0x00021fba) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2053,	// (0x00021fba) bg_passive_tab_pane_cp2_srt

0x7862,	// (0x000277c9) bg_passive_tab_pane_g1_cp2_srt

0x74b8,	// (0x0002741f) bg_passive_tab_pane_g2_cp2_srt

0x786b,	// (0x000277d2) bg_passive_tab_pane_g3_cp2_srt

0x1a69,	// (0x000219d0) bg_active_tab_pane_cp2_srt_ParamLimits

0x1a69,	// (0x000219d0) bg_active_tab_pane_cp2_srt

0xb181,	// (0x0002b0e8) tabs_3_active_pane_srt_g1

0xb189,	// (0x0002b0f0) tabs_3_active_pane_srt_t1_ParamLimits

0xb189,	// (0x0002b0f0) tabs_3_active_pane_srt_t1

0x7862,	// (0x000277c9) bg_active_tab_pane_g1_cp2_srt

0x74b8,	// (0x0002741f) bg_active_tab_pane_g2_cp2_srt

0x786b,	// (0x000277d2) bg_active_tab_pane_g3_cp2_srt

0x9085,	// (0x00028fec) tabs_4_active_pane_srt_ParamLimits

0x9085,	// (0x00028fec) tabs_4_active_pane_srt

0x9097,	// (0x00028ffe) tabs_4_passive_pane_cp2_srt_ParamLimits

0x9097,	// (0x00028ffe) tabs_4_passive_pane_cp2_srt

0x7a84,	// (0x000279eb) aid_size_cell_toolbar

0x6ff7,	// (0x00026f5e) main_idle_act_pane_ParamLimits

0x7c1f,	// (0x00027b86) popup_large_graphic_colour_window_ParamLimits

0x7f8a,	// (0x00027ef1) popup_toolbar_window_ParamLimits

0x7f8a,	// (0x00027ef1) popup_toolbar_window

0xaf81,	// (0x0002aee8) list_single_graphic_2heading_pane_ParamLimits

0xaf81,	// (0x0002aee8) list_single_graphic_2heading_pane

0x21e0,	// (0x00022147) aid_size_cell_apps_grid_lsc_pane

0x21f2,	// (0x00022159) aid_size_cell_apps_grid_prt_pane

0x2053,	// (0x00021fba) bg_wml_button_pane_cp1_ParamLimits

0x2053,	// (0x00021fba) bg_wml_button_pane_cp1

0x891c,	// (0x00028883) form_midp_field_text_pane_t1_ParamLimits

0x865e,	// (0x000285c5) input_focus_pane_cp050_ParamLimits

0x8956,	// (0x000288bd) list_midp_form_text_pane_ParamLimits

0x88f9,	// (0x00028860) input_focus_pane_cp051_ParamLimits

0x890d,	// (0x00028874) list_midp_choice_pane_ParamLimits

0x879c,	// (0x00028703) list_single_2graphic_pane_cp3_ParamLimits

0x879c,	// (0x00028703) list_single_2graphic_pane_cp3

0x87c1,	// (0x00028728) list_single_midp_graphic_pane_ParamLimits

0x87c1,	// (0x00028728) list_single_midp_graphic_pane

0x5c33,	// (0x00025b9a) list_single_graphic_2heading_pane_g1_ParamLimits

0x5c33,	// (0x00025b9a) list_single_graphic_2heading_pane_g1

0x5539,	// (0x000254a0) list_single_graphic_2heading_pane_g4_ParamLimits

0x5539,	// (0x000254a0) list_single_graphic_2heading_pane_g4

0x5545,	// (0x000254ac) list_single_graphic_2heading_pane_g5_ParamLimits

0x5545,	// (0x000254ac) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x0002f6e3) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x0002f6e3) list_single_graphic_2heading_pane_g

0x5c3f,	// (0x00025ba6) list_single_graphic_2heading_pane_t1_ParamLimits

0x5c3f,	// (0x00025ba6) list_single_graphic_2heading_pane_t1

0x5c53,	// (0x00025bba) list_single_graphic_2heading_pane_t2_ParamLimits

0x5c53,	// (0x00025bba) list_single_graphic_2heading_pane_t2

0x5c6d,	// (0x00025bd4) list_single_graphic_2heading_pane_t3_ParamLimits

0x5c6d,	// (0x00025bd4) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x0002f6ea) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x0002f6ea) list_single_graphic_2heading_pane_t

0x8468,	// (0x000283cf) bg_popup_sub_pane_cp2

0x8492,	// (0x000283f9) grid_toobar_pane

0x84ce,	// (0x00028435) cell_toolbar_pane_ParamLimits

0x84ce,	// (0x00028435) cell_toolbar_pane

0x84fe,	// (0x00028465) cell_toolbar_pane_g1_ParamLimits

0x84fe,	// (0x00028465) cell_toolbar_pane_g1

0x8512,	// (0x00028479) cell_toolbar_pane_g2_ParamLimits

0x8512,	// (0x00028479) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x0002f6f8) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x0002f6f8) cell_toolbar_pane_g

0x8534,	// (0x0002849b) grid_highlight_pane_cp2_ParamLimits

0x8534,	// (0x0002849b) grid_highlight_pane_cp2

0x854e,	// (0x000284b5) toolbar_button_pane

0x855a,	// (0x000284c1) toolbar_button_pane_g1

0x8562,	// (0x000284c9) toolbar_button_pane_g2

0x856a,	// (0x000284d1) toolbar_button_pane_g3

0x8572,	// (0x000284d9) toolbar_button_pane_g4

0x857a,	// (0x000284e1) toolbar_button_pane_g5

0x8582,	// (0x000284e9) toolbar_button_pane_g6

0x858a,	// (0x000284f1) toolbar_button_pane_g7

0x8592,	// (0x000284f9) toolbar_button_pane_g8

0x859a,	// (0x00028501) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x0002f6fd) toolbar_button_pane_g

0x85aa,	// (0x00028511) list_single_2graphic_pane_g1_cp3_ParamLimits

0x85aa,	// (0x00028511) list_single_2graphic_pane_g1_cp3

0x85b6,	// (0x0002851d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x85b6,	// (0x0002851d) list_single_2graphic_pane_g2_cp3

0x2616,	// (0x0002257d) list_single_2graphic_pane_g3_cp3

0x85c7,	// (0x0002852e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x85c7,	// (0x0002852e) list_single_2graphic_pane_g4_cp3

0x85d3,	// (0x0002853a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x85d3,	// (0x0002853a) list_single_2graphic_pane_t1_cp3

0x1df5,	// (0x00021d5c) list_single_midp_graphic_pane_g2_ParamLimits

0x1df5,	// (0x00021d5c) list_single_midp_graphic_pane_g2

0x7a8c,	// (0x000279f3) aid_zoom_text_primary

0x5c07,	// (0x00025b6e) aid_zoom_text_secondary

0x28f7,	// (0x0002285e) status_small_pane_g7_ParamLimits

0x28f7,	// (0x0002285e) status_small_pane_g7

0x78c5,	// (0x0002782c) status_small_pane_t1_ParamLimits

0x6970,	// (0x000268d7) title_pane_g2

0x0003,

0xf529,	// (0x0002f490) title_pane_g

0x6cbe,	// (0x00026c25) aid_size_cell_colour_1_pane_ParamLimits

0x6cbe,	// (0x00026c25) aid_size_cell_colour_1_pane

0x6cd2,	// (0x00026c39) aid_size_cell_colour_2_pane_ParamLimits

0x6cd2,	// (0x00026c39) aid_size_cell_colour_2_pane

0x6ce6,	// (0x00026c4d) aid_size_cell_colour_3_pane_ParamLimits

0x6ce6,	// (0x00026c4d) aid_size_cell_colour_3_pane

0x6cfa,	// (0x00026c61) aid_size_cell_colour_4_pane_ParamLimits

0x6cfa,	// (0x00026c61) aid_size_cell_colour_4_pane

0x706a,	// (0x00026fd1) title_pane_stacon_g1_ParamLimits

0x706a,	// (0x00026fd1) title_pane_stacon_g1

0x8d26,	// (0x00028c8d) popup_note_wait_window_g3_ParamLimits

0x8d26,	// (0x00028c8d) popup_note_wait_window_g3

0x8d9c,	// (0x00028d03) popup_note_wait_window_t5_ParamLimits

0x8d9c,	// (0x00028d03) popup_note_wait_window_t5

0x1a0d,	// (0x00021974) main_feb_china_hwr_fs_writing_pane

0x7b06,	// (0x00027a6d) popup_feb_china_hwr_fs_window_ParamLimits

0x7b06,	// (0x00027a6d) popup_feb_china_hwr_fs_window

0x8649,	// (0x000285b0) aid_size_cell_hwr_fs_ParamLimits

0x8649,	// (0x000285b0) aid_size_cell_hwr_fs

0x865e,	// (0x000285c5) bg_popup_sub_pane_cp3_ParamLimits

0x865e,	// (0x000285c5) bg_popup_sub_pane_cp3

0x866a,	// (0x000285d1) grid_hwr_fs_pane_ParamLimits

0x866a,	// (0x000285d1) grid_hwr_fs_pane

0x8682,	// (0x000285e9) linegrid_hwr_fs_pane_ParamLimits

0x8682,	// (0x000285e9) linegrid_hwr_fs_pane

0x8692,	// (0x000285f9) cell_hwr_fs_pane_ParamLimits

0x8692,	// (0x000285f9) cell_hwr_fs_pane

0x86b4,	// (0x0002861b) linegrid_hwr_fs_pane_g1_ParamLimits

0x86b4,	// (0x0002861b) linegrid_hwr_fs_pane_g1

0x86c0,	// (0x00028627) linegrid_hwr_fs_pane_g2_ParamLimits

0x86c0,	// (0x00028627) linegrid_hwr_fs_pane_g2

0x86d2,	// (0x00028639) linegrid_hwr_fs_pane_g3_ParamLimits

0x86d2,	// (0x00028639) linegrid_hwr_fs_pane_g3

0x86de,	// (0x00028645) linegrid_hwr_fs_pane_g4_ParamLimits

0x86de,	// (0x00028645) linegrid_hwr_fs_pane_g4

0x86f8,	// (0x0002865f) linegrid_hwr_fs_pane_g5_ParamLimits

0x86f8,	// (0x0002865f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x0002f723) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x0002f723) linegrid_hwr_fs_pane_g

0x870e,	// (0x00028675) cell_hwr_fs_pane_g1_ParamLimits

0x870e,	// (0x00028675) cell_hwr_fs_pane_g1

0x83a2,	// (0x00028309) cell_hwr_fs_pane_g2_ParamLimits

0x83a2,	// (0x00028309) cell_hwr_fs_pane_g2

0x8724,	// (0x0002868b) cell_hwr_fs_pane_g3_ParamLimits

0x8724,	// (0x0002868b) cell_hwr_fs_pane_g3

0x8731,	// (0x00028698) cell_hwr_fs_pane_g4_ParamLimits

0x8731,	// (0x00028698) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x0002f72e) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x0002f72e) cell_hwr_fs_pane_g

0x873e,	// (0x000286a5) cell_hwr_fs_pane_t1

0x1a0d,	// (0x00021974) grid_highlight_pane_cp6

0x1a0d,	// (0x00021974) main_idle_act2_pane

0x202a,	// (0x00021f91) aid_inside_area_popup_secondary

0xa753,	// (0x0002a6ba) aid_inside_area_window_primary_ParamLimits

0xa753,	// (0x0002a6ba) aid_inside_area_window_primary

0xb2e8,	// (0x0002b24f) ai2_news_ticker_pane

0xb2f0,	// (0x0002b257) aid_size_cell_ai1_link_ParamLimits

0xb2f0,	// (0x0002b257) aid_size_cell_ai1_link

0xb30a,	// (0x0002b271) popup_ai2_data_window_ParamLimits

0xb30a,	// (0x0002b271) popup_ai2_data_window

0xb320,	// (0x0002b287) popup_ai2_link_window_ParamLimits

0xb320,	// (0x0002b287) popup_ai2_link_window

0x865e,	// (0x000285c5) bg_popup_sub_pane_cp4_ParamLimits

0x865e,	// (0x000285c5) bg_popup_sub_pane_cp4

0xb334,	// (0x0002b29b) grid_ai2_link_pane_ParamLimits

0xb334,	// (0x0002b29b) grid_ai2_link_pane

0xb34b,	// (0x0002b2b2) popup_ai2_link_window_g1_ParamLimits

0xb34b,	// (0x0002b2b2) popup_ai2_link_window_g1

0xb357,	// (0x0002b2be) popup_ai2_link_window_g2_ParamLimits

0xb357,	// (0x0002b2be) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x0002f901) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x0002f901) popup_ai2_link_window_g

0xb366,	// (0x0002b2cd) ai2_mp_button_pane

0xb36e,	// (0x0002b2d5) ai2_mp_volume_pane

0x88f9,	// (0x00028860) bg_popup_sub_pane_cp5_ParamLimits

0x88f9,	// (0x00028860) bg_popup_sub_pane_cp5

0xb376,	// (0x0002b2dd) heading_ai2_gene_pane_ParamLimits

0xb376,	// (0x0002b2dd) heading_ai2_gene_pane

0xb382,	// (0x0002b2e9) list_ai2_gene_pane_ParamLimits

0xb382,	// (0x0002b2e9) list_ai2_gene_pane

0xb3ca,	// (0x0002b331) cell_ai2_link_pane_ParamLimits

0xb3ca,	// (0x0002b331) cell_ai2_link_pane

0xb3e0,	// (0x0002b347) cell_ai2_link_pane_g1

0x1a0d,	// (0x00021974) grid_highlight_pane_cp7

0x913d,	// (0x000290a4) ai2_mp_volume_pane_g1

0xb4b0,	// (0x0002b417) ai2_mp_volume_pane_g2

0xb425,	// (0x0002b38c) list_ai2_gene_pane_t1

0xb4b8,	// (0x0002b41f) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x0002f91a) ai2_mp_volume_pane_g

0x9145,	// (0x000290ac) volume_small_pane_cp3

0xb4c0,	// (0x0002b427) aid_size_cell_ai2_button

0xb4c8,	// (0x0002b42f) grid_ai2_button_pane

0xb4d1,	// (0x0002b438) cell_ai2_button_pane_ParamLimits

0xb4d1,	// (0x0002b438) cell_ai2_button_pane

0x1a03,	// (0x0002196a) cell_ai2_button_pane_g1

0x1a0d,	// (0x00021974) grid_highlight_pane_cp8

0xb470,	// (0x0002b3d7) ai2_gene_pane_t1_ParamLimits

0xb470,	// (0x0002b3d7) ai2_gene_pane_t1

0x7a7a,	// (0x000279e1) aid_height_parent_landscape

0xadbc,	// (0x0002ad23) aid_height_set_list

0xadcd,	// (0x0002ad34) aid_size_parent

0xb10b,	// (0x0002b072) aid_size_cell_graphic_pane_ParamLimits

0xb392,	// (0x0002b2f9) popup_ai2_data_window_g1_ParamLimits

0xb392,	// (0x0002b2f9) popup_ai2_data_window_g1

0xb39e,	// (0x0002b305) ai2_news_ticker_pane_g1

0xb3a6,	// (0x0002b30d) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x0002f906) ai2_news_ticker_pane_g

0xb3ae,	// (0x0002b315) ai2_news_ticker_pane_t1

0xb3bc,	// (0x0002b323) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x0002f90b) ai2_news_ticker_pane_t

0xb3e9,	// (0x0002b350) heading_ai2_gene_pane_g1

0xb3f1,	// (0x0002b358) heading_ai2_gene_pane_t1_ParamLimits

0xb3f1,	// (0x0002b358) heading_ai2_gene_pane_t1

0xb406,	// (0x0002b36d) list_highlight_pane_cp6

0xb40e,	// (0x0002b375) ai2_gene_pane_ParamLimits

0xb40e,	// (0x0002b375) ai2_gene_pane

0xb433,	// (0x0002b39a) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x0002f910) list_ai2_gene_pane_t

0xb441,	// (0x0002b3a8) list_highlight_pane_cp8_ParamLimits

0xb441,	// (0x0002b3a8) list_highlight_pane_cp8

0xb452,	// (0x0002b3b9) ai2_gene_pane_g1_ParamLimits

0xb452,	// (0x0002b3b9) ai2_gene_pane_g1

0xb464,	// (0x0002b3cb) ai2_gene_pane_g2_ParamLimits

0xb464,	// (0x0002b3cb) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x0002f915) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x0002f915) ai2_gene_pane_g

0x1dd8,	// (0x00021d3f) scroll_pane_cp12

0x7a37,	// (0x0002799e) control_pane_t3_ParamLimits

0x7a37,	// (0x0002799e) control_pane_t3

0x78b6,	// (0x0002781d) status_small_pane_g8_ParamLimits

0x78b6,	// (0x0002781d) status_small_pane_g8

0x7be8,	// (0x00027b4f) popup_find_window_ParamLimits

0x7e01,	// (0x00027d68) popup_note_image_window_ParamLimits

0x5c85,	// (0x00025bec) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c85,	// (0x00025bec) list_double2_graphic_pane_vc_g1

0x5c91,	// (0x00025bf8) list_double2_graphic_pane_vc_g2_ParamLimits

0x5c91,	// (0x00025bf8) list_double2_graphic_pane_vc_g2

0x5c9d,	// (0x00025c04) list_double2_graphic_pane_vc_g3_ParamLimits

0x5c9d,	// (0x00025c04) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x0002f6f1) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x0002f6f1) list_double2_graphic_pane_vc_g

0x5ca9,	// (0x00025c10) list_double2_graphic_pane_vc_t1_ParamLimits

0x5ca9,	// (0x00025c10) list_double2_graphic_pane_vc_t1

0x5539,	// (0x000254a0) list_single_heading_pane_vc_g1_ParamLimits

0x5539,	// (0x000254a0) list_single_heading_pane_vc_g1

0x5545,	// (0x000254ac) list_single_heading_pane_vc_g2_ParamLimits

0x5545,	// (0x000254ac) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f50a) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f50a) list_single_heading_pane_vc_g

0x5cbf,	// (0x00025c26) list_single_heading_pane_vc_t1_ParamLimits

0x5cbf,	// (0x00025c26) list_single_heading_pane_vc_t1

0x5cd5,	// (0x00025c3c) list_single_heading_pane_vc_t2_ParamLimits

0x5cd5,	// (0x00025c3c) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x0002f712) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x0002f712) list_single_heading_pane_vc_t

0x8605,	// (0x0002856c) list_setting_number_pane_vc_g1_ParamLimits

0x8605,	// (0x0002856c) list_setting_number_pane_vc_g1

0x8611,	// (0x00028578) list_setting_number_pane_vc_g2_ParamLimits

0x8611,	// (0x00028578) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x0002f717) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002f717) list_setting_number_pane_vc_g

0x5ce7,	// (0x00025c4e) list_setting_number_pane_vc_t1_ParamLimits

0x5ce7,	// (0x00025c4e) list_setting_number_pane_vc_t1

0x5cfb,	// (0x00025c62) list_setting_number_pane_vc_t2_ParamLimits

0x5cfb,	// (0x00025c62) list_setting_number_pane_vc_t2

0x5d17,	// (0x00025c7e) list_setting_number_pane_vc_t3_ParamLimits

0x5d17,	// (0x00025c7e) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x0002f71c) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x0002f71c) list_setting_number_pane_vc_t

0x5d41,	// (0x00025ca8) set_value_pane_vc_ParamLimits

0x5d41,	// (0x00025ca8) set_value_pane_vc

0xaf81,	// (0x0002aee8) list_double2_graphic_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_double2_graphic_pane_vc

0xaf81,	// (0x0002aee8) list_double2_large_graphic_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_double2_large_graphic_pane_vc

0xaf81,	// (0x0002aee8) list_double2_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_double2_pane_vc

0xaf81,	// (0x0002aee8) list_double_graphic_heading_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_double_graphic_heading_pane_vc

0xaf81,	// (0x0002aee8) list_double_graphic_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_double_graphic_pane_vc

0xaf81,	// (0x0002aee8) list_double_heading_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_double_heading_pane_vc

0x5e06,	// (0x00025d6d) list_double_large_graphic_pane_vc_ParamLimits

0x5e06,	// (0x00025d6d) list_double_large_graphic_pane_vc

0xaf81,	// (0x0002aee8) list_double_number_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_double_number_pane_vc

0xaf81,	// (0x0002aee8) list_double_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_double_pane_vc

0xaf81,	// (0x0002aee8) list_double_time_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_double_time_pane_vc

0xaf81,	// (0x0002aee8) list_setting_number_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_setting_number_pane_vc

0xaf81,	// (0x0002aee8) list_setting_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_setting_pane_vc

0xaf81,	// (0x0002aee8) list_single_graphic_heading_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_single_graphic_heading_pane_vc

0xaf81,	// (0x0002aee8) list_single_heading_pane_vc_ParamLimits

0xaf81,	// (0x0002aee8) list_single_heading_pane_vc

0x5e25,	// (0x00025d8c) list_single_number_heading_pane_vc_ParamLimits

0x5e25,	// (0x00025d8c) list_single_number_heading_pane_vc

0x5e8d,	// (0x00025df4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5e8d,	// (0x00025df4) list_double_graphic_heading_pane_vc_g1

0x5c91,	// (0x00025bf8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5c91,	// (0x00025bf8) list_double_graphic_heading_pane_vc_g2

0x5c9d,	// (0x00025c04) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5c9d,	// (0x00025c04) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x0002f921) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x0002f921) list_double_graphic_heading_pane_vc_g

0x5e99,	// (0x00025e00) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5e99,	// (0x00025e00) list_double_graphic_heading_pane_vc_t1

0x5ead,	// (0x00025e14) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5ead,	// (0x00025e14) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x0002f928) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x0002f928) list_double_graphic_heading_pane_vc_t

0x8605,	// (0x0002856c) list_setting_pane_vc_g1_ParamLimits

0x8605,	// (0x0002856c) list_setting_pane_vc_g1

0x8611,	// (0x00028578) list_setting_pane_vc_g2_ParamLimits

0x8611,	// (0x00028578) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x0002f717) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002f717) list_setting_pane_vc_g

0x5ec5,	// (0x00025e2c) list_setting_pane_vc_t1_ParamLimits

0x5ec5,	// (0x00025e2c) list_setting_pane_vc_t1

0x5ee1,	// (0x00025e48) list_setting_pane_vc_t2_ParamLimits

0x5ee1,	// (0x00025e48) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x0002f96b) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x0002f96b) list_setting_pane_vc_t

0x5d41,	// (0x00025ca8) set_value_pane_cp_vc_ParamLimits

0x5d41,	// (0x00025ca8) set_value_pane_cp_vc

0x5539,	// (0x000254a0) list_single_number_heading_pane_vc_g1_ParamLimits

0x5539,	// (0x000254a0) list_single_number_heading_pane_vc_g1

0x5545,	// (0x000254ac) list_single_number_heading_pane_vc_g2_ParamLimits

0x5545,	// (0x000254ac) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f50a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f50a) list_single_number_heading_pane_vc_g

0x5567,	// (0x000254ce) list_single_number_heading_pane_vc_t1_ParamLimits

0x5567,	// (0x000254ce) list_single_number_heading_pane_vc_t1

0x5efb,	// (0x00025e62) list_single_number_heading_pane_vc_t2_ParamLimits

0x5efb,	// (0x00025e62) list_single_number_heading_pane_vc_t2

0x5f11,	// (0x00025e78) list_single_number_heading_pane_vc_t3_ParamLimits

0x5f11,	// (0x00025e78) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x0002f970) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0002f970) list_single_number_heading_pane_vc_t

0x5f23,	// (0x00025e8a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5f23,	// (0x00025e8a) list_single_graphic_heading_pane_vc_g1

0x5539,	// (0x000254a0) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5539,	// (0x000254a0) list_single_graphic_heading_pane_vc_g4

0x5545,	// (0x000254ac) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5545,	// (0x000254ac) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x0002f977) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x0002f977) list_single_graphic_heading_pane_vc_g

0x5567,	// (0x000254ce) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5567,	// (0x000254ce) list_single_graphic_heading_pane_vc_t1

0x5f2f,	// (0x00025e96) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5f2f,	// (0x00025e96) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x0002f97e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x0002f97e) list_single_graphic_heading_pane_vc_t

0x5539,	// (0x000254a0) list_double2_pane_vc_g1_ParamLimits

0x5539,	// (0x000254a0) list_double2_pane_vc_g1

0x5545,	// (0x000254ac) list_double2_pane_vc_g2_ParamLimits

0x5545,	// (0x000254ac) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f50a) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f50a) list_double2_pane_vc_g

0x5f41,	// (0x00025ea8) list_double2_pane_vc_t1_ParamLimits

0x5f41,	// (0x00025ea8) list_double2_pane_vc_t1

0x5f59,	// (0x00025ec0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5f59,	// (0x00025ec0) list_double2_large_graphic_pane_vc_g1

0x5539,	// (0x000254a0) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5539,	// (0x000254a0) list_double2_large_graphic_pane_vc_g2

0x5545,	// (0x000254ac) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5545,	// (0x000254ac) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1c,	// (0x0002f983) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1c,	// (0x0002f983) list_double2_large_graphic_pane_vc_g

0x5ca9,	// (0x00025c10) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5ca9,	// (0x00025c10) list_double2_large_graphic_pane_vc_t1

0x5f65,	// (0x00025ecc) list_double_time_pane_vc_g1_ParamLimits

0x5f65,	// (0x00025ecc) list_double_time_pane_vc_g1

0x5f71,	// (0x00025ed8) list_double_time_pane_vc_g2_ParamLimits

0x5f71,	// (0x00025ed8) list_double_time_pane_vc_g2

0x0001,

0xfa23,	// (0x0002f98a) list_double_time_pane_vc_g_ParamLimits

0xfa23,	// (0x0002f98a) list_double_time_pane_vc_g

0x5f7d,	// (0x00025ee4) list_double_time_pane_vc_t1_ParamLimits

0x5f7d,	// (0x00025ee4) list_double_time_pane_vc_t1

0x5fa1,	// (0x00025f08) list_double_time_pane_vc_t2_ParamLimits

0x5fa1,	// (0x00025f08) list_double_time_pane_vc_t2

0x5ff0,	// (0x00025f57) list_double_time_pane_vc_t3_ParamLimits

0x5ff0,	// (0x00025f57) list_double_time_pane_vc_t3

0x6002,	// (0x00025f69) list_double_time_pane_vc_t4_ParamLimits

0x6002,	// (0x00025f69) list_double_time_pane_vc_t4

0x0003,

0xfa28,	// (0x0002f98f) list_double_time_pane_vc_t_ParamLimits

0xfa28,	// (0x0002f98f) list_double_time_pane_vc_t

0x5539,	// (0x000254a0) list_double_pane_vc_g1_ParamLimits

0x5539,	// (0x000254a0) list_double_pane_vc_g1

0x5545,	// (0x000254ac) list_double_pane_vc_g2_ParamLimits

0x5545,	// (0x000254ac) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f50a) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f50a) list_double_pane_vc_g

0x6016,	// (0x00025f7d) list_double_pane_vc_t1_ParamLimits

0x6016,	// (0x00025f7d) list_double_pane_vc_t1

0x602a,	// (0x00025f91) list_double_pane_vc_t2_ParamLimits

0x602a,	// (0x00025f91) list_double_pane_vc_t2

0x0001,

0xfa31,	// (0x0002f998) list_double_pane_vc_t_ParamLimits

0xfa31,	// (0x0002f998) list_double_pane_vc_t

0x5539,	// (0x000254a0) list_double_number_pane_vc_g1_ParamLimits

0x5539,	// (0x000254a0) list_double_number_pane_vc_g1

0x5545,	// (0x000254ac) list_double_number_pane_vc_g2_ParamLimits

0x5545,	// (0x000254ac) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f50a) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f50a) list_double_number_pane_vc_g

0x6042,	// (0x00025fa9) list_double_number_pane_vc_t1_ParamLimits

0x6042,	// (0x00025fa9) list_double_number_pane_vc_t1

0x6016,	// (0x00025f7d) list_double_number_pane_vc_t2_ParamLimits

0x6016,	// (0x00025f7d) list_double_number_pane_vc_t2

0x6054,	// (0x00025fbb) list_double_number_pane_vc_t3_ParamLimits

0x6054,	// (0x00025fbb) list_double_number_pane_vc_t3

0x0002,

0xfa36,	// (0x0002f99d) list_double_number_pane_vc_t_ParamLimits

0xfa36,	// (0x0002f99d) list_double_number_pane_vc_t

0x606c,	// (0x00025fd3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x606c,	// (0x00025fd3) list_double_large_graphic_pane_vc_g1

0x6088,	// (0x00025fef) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6088,	// (0x00025fef) list_double_large_graphic_pane_vc_g2

0x609c,	// (0x00026003) list_double_large_graphic_pane_vc_g3_ParamLimits

0x609c,	// (0x00026003) list_double_large_graphic_pane_vc_g3

0x60ab,	// (0x00026012) list_double_large_graphic_pane_vc_g4_ParamLimits

0x60ab,	// (0x00026012) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3d,	// (0x0002f9a4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0002f9a4) list_double_large_graphic_pane_vc_g

0x60b7,	// (0x0002601e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x60b7,	// (0x0002601e) list_double_large_graphic_pane_vc_t1

0x60d3,	// (0x0002603a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x60d3,	// (0x0002603a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x0002f9ad) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x0002f9ad) list_double_large_graphic_pane_vc_t

0x5c91,	// (0x00025bf8) list_double_heading_pane_vc_g1_ParamLimits

0x5c91,	// (0x00025bf8) list_double_heading_pane_vc_g1

0x5c9d,	// (0x00025c04) list_double_heading_pane_vc_g2_ParamLimits

0x5c9d,	// (0x00025c04) list_double_heading_pane_vc_g2

0x0001,

0xfa4b,	// (0x0002f9b2) list_double_heading_pane_vc_g_ParamLimits

0xfa4b,	// (0x0002f9b2) list_double_heading_pane_vc_g

0x60f5,	// (0x0002605c) list_double_heading_pane_vc_t1_ParamLimits

0x60f5,	// (0x0002605c) list_double_heading_pane_vc_t1

0x6109,	// (0x00026070) list_double_heading_pane_vc_t2_ParamLimits

0x6109,	// (0x00026070) list_double_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0002f9b7) list_double_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0002f9b7) list_double_heading_pane_vc_t

0x6121,	// (0x00026088) list_double_graphic_pane_vc_g1_ParamLimits

0x6121,	// (0x00026088) list_double_graphic_pane_vc_g1

0x6134,	// (0x0002609b) list_double_graphic_pane_vc_g2_ParamLimits

0x6134,	// (0x0002609b) list_double_graphic_pane_vc_g2

0x5539,	// (0x000254a0) list_double_graphic_pane_vc_g3_ParamLimits

0x5539,	// (0x000254a0) list_double_graphic_pane_vc_g3

0x0003,

0xfa55,	// (0x0002f9bc) list_double_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0002f9bc) list_double_graphic_pane_vc_g

0x6151,	// (0x000260b8) list_double_graphic_pane_vc_t1_ParamLimits

0x6151,	// (0x000260b8) list_double_graphic_pane_vc_t1

0x6170,	// (0x000260d7) list_double_graphic_pane_vc_t2_ParamLimits

0x6170,	// (0x000260d7) list_double_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0002f9c5) list_double_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0002f9c5) list_double_graphic_pane_vc_t

0x659a,	// (0x00026501) aid_size_cell_fastswap

0x65a2,	// (0x00026509) aid_size_cell_touch_ParamLimits

0x65a2,	// (0x00026509) aid_size_cell_touch

0x67fd,	// (0x00026764) popup_fast_swap_wide_window_ParamLimits

0x67fd,	// (0x00026764) popup_fast_swap_wide_window

0x6903,	// (0x0002686a) touch_pane_ParamLimits

0x6903,	// (0x0002686a) touch_pane

0x1e6c,	// (0x00021dd3) button_value_adjust_pane_cp2

0x5926,	// (0x0002588d) button_value_adjust_pane_cp4

0x5946,	// (0x000258ad) form_field_data_pane_cp2

0x5965,	// (0x000258cc) form_field_data_wide_pane_cp2

0x2217,	// (0x0002217e) bg_scroll_pane_ParamLimits

0x7264,	// (0x000271cb) scroll_handle_pane_ParamLimits

0x7278,	// (0x000271df) scroll_sc2_down_pane_ParamLimits

0x7278,	// (0x000271df) scroll_sc2_down_pane

0x2248,	// (0x000221af) scroll_sc2_up_pane_ParamLimits

0x2248,	// (0x000221af) scroll_sc2_up_pane

0xbbb2,	// (0x0002bb19) grid_wheel_folder_pane_g1_ParamLimits

0xbbb2,	// (0x0002bb19) grid_wheel_folder_pane_g1

0x75dd,	// (0x00027544) clock_nsta_pane_cp2_ParamLimits

0x75dd,	// (0x00027544) clock_nsta_pane_cp2

0x76e5,	// (0x0002764c) listscroll_midp_pane_ParamLimits

0x76f1,	// (0x00027658) midp_canvas_pane

0x2919,	// (0x00022880) nsta_clock_indic_pane

0x2941,	// (0x000228a8) listscroll_form_pane_vc

0x2949,	// (0x000228b0) listscroll_set_pane_vc_ParamLimits

0x2949,	// (0x000228b0) listscroll_set_pane_vc

0x8110,	// (0x00028077) clock_nsta_pane

0x818b,	// (0x000280f2) indicator_nsta_pane

0x8468,	// (0x000283cf) bg_popup_sub_pane_cp2_ParamLimits

0x847c,	// (0x000283e3) find_pane_cp2_ParamLimits

0x847c,	// (0x000283e3) find_pane_cp2

0x8492,	// (0x000283f9) grid_toobar_pane_ParamLimits

0x861d,	// (0x00028584) list_form_gen_pane_vc_ParamLimits

0x861d,	// (0x00028584) list_form_gen_pane_vc

0x8633,	// (0x0002859a) scroll_pane_cp8_vc_ParamLimits

0x8633,	// (0x0002859a) scroll_pane_cp8_vc

0x874c,	// (0x000286b3) data_form_wide_pane_vc_ParamLimits

0x874c,	// (0x000286b3) data_form_wide_pane_vc

0x8758,	// (0x000286bf) form_field_data_wide_pane_vc_g1

0x8760,	// (0x000286c7) form_field_data_wide_pane_vc_t1_ParamLimits

0x8760,	// (0x000286c7) form_field_data_wide_pane_vc_t1

0x1ea3,	// (0x00021e0a) input_focus_pane_cp6_vc_ParamLimits

0x1ea3,	// (0x00021e0a) input_focus_pane_cp6_vc

0x8a8d,	// (0x000289f4) list_midp_pane_ParamLimits

0x8a99,	// (0x00028a00) scroll_pane_cp16_ParamLimits

0x8a99,	// (0x00028a00) scroll_pane_cp16

0x8b03,	// (0x00028a6a) button_value_adjust_pane_ParamLimits

0x8b03,	// (0x00028a6a) button_value_adjust_pane

0xaddf,	// (0x0002ad46) button_value_adjust_pane_cp6_ParamLimits

0xaddf,	// (0x0002ad46) button_value_adjust_pane_cp6

0xaf05,	// (0x0002ae6c) settings_code_pane_cp_ParamLimits

0xaf05,	// (0x0002ae6c) settings_code_pane_cp

0x1a03,	// (0x0002196a) cell_touch_pane_g1

0x1a03,	// (0x0002196a) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x0002f636) cell_touch_pane_g

0xb4e3,	// (0x0002b44a) cell_touch_pane_cp_ParamLimits

0xb4e3,	// (0x0002b44a) cell_touch_pane_cp

0xb4f3,	// (0x0002b45a) cell_touch_pane_ParamLimits

0xb4f3,	// (0x0002b45a) cell_touch_pane

0x1a03,	// (0x0002196a) scroll_sc2_down_pane_g1

0x1a03,	// (0x0002196a) scroll_sc2_up_pane_g1

0x1a0d,	// (0x00021974) bg_set_opt_pane_cp4_vc

0xb505,	// (0x0002b46c) list_set_graphic_pane_vc_g1_ParamLimits

0xb505,	// (0x0002b46c) list_set_graphic_pane_vc_g1

0xb511,	// (0x0002b478) list_set_graphic_pane_vc_g2_ParamLimits

0xb511,	// (0x0002b478) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x0002f92d) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x0002f92d) list_set_graphic_pane_vc_g

0xb51d,	// (0x0002b484) text_primary_small_cp13_vc_ParamLimits

0xb51d,	// (0x0002b484) text_primary_small_cp13_vc

0xb535,	// (0x0002b49c) list_set_graphic_pane_vc_ParamLimits

0xb535,	// (0x0002b49c) list_set_graphic_pane_vc

0x1a0d,	// (0x00021974) input_focus_pane_cp2_vc

0x1a03,	// (0x0002196a) setting_code_pane_vc_g1

0x1a80,	// (0x000219e7) setting_code_pane_vc_t1

0xb548,	// (0x0002b4af) set_text_pane_vc_t1_ParamLimits

0xb548,	// (0x0002b4af) set_text_pane_vc_t1

0x1a0d,	// (0x00021974) input_focus_pane_cp1_vc

0xb565,	// (0x0002b4cc) list_set_text_pane_vc

0x1a03,	// (0x0002196a) setting_text_pane_vc_g1

0x1a0d,	// (0x00021974) bg_set_opt_pane_cp2_vc

0x1a77,	// (0x000219de) setting_slider_graphic_pane_vc_g1

0xb56f,	// (0x0002b4d6) setting_slider_graphic_pane_vc_t1

0xb57f,	// (0x0002b4e6) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x0002f932) setting_slider_graphic_pane_vc_t

0xb58f,	// (0x0002b4f6) slider_set_pane_cp_vc

0xb597,	// (0x0002b4fe) slider_set_pane_vc_g1

0xb5a0,	// (0x0002b507) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x0002f937) slider_set_pane_vc_g

0x1f69,	// (0x00021ed0) set_opt_bg_pane_g1_copy1

0x1f71,	// (0x00021ed8) set_opt_bg_pane_g2_copy1

0xb5cc,	// (0x0002b533) set_opt_bg_pane_g3_copy1

0x1f81,	// (0x00021ee8) set_opt_bg_pane_g4_copy1

0x1f89,	// (0x00021ef0) set_opt_bg_pane_g5_copy1

0x1f91,	// (0x00021ef8) set_opt_bg_pane_g6_copy1

0xb5d4,	// (0x0002b53b) set_opt_bg_pane_g7_copy1

0xb5de,	// (0x0002b545) set_opt_bg_pane_g8_copy1

0xb5e6,	// (0x0002b54d) set_opt_bg_pane_g9_copy1

0x1a0d,	// (0x00021974) bg_set_opt_pane_cp_vc

0xb5ee,	// (0x0002b555) setting_slider_pane_vc_t1

0xb5fd,	// (0x0002b564) setting_slider_pane_vc_t2

0xb60d,	// (0x0002b574) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x0002f946) setting_slider_pane_vc_t

0xb61d,	// (0x0002b584) slider_set_pane_vc

0x8e53,	// (0x00028dba) volume_set_pane_vc_g1

0x914e,	// (0x000290b5) volume_set_pane_vc_g2

0x9157,	// (0x000290be) volume_set_pane_vc_g3

0x9160,	// (0x000290c7) volume_set_pane_vc_g4

0x9169,	// (0x000290d0) volume_set_pane_vc_g5

0x9172,	// (0x000290d9) volume_set_pane_vc_g6

0x917b,	// (0x000290e2) volume_set_pane_vc_g7

0x9184,	// (0x000290eb) volume_set_pane_vc_g8

0x918d,	// (0x000290f4) volume_set_pane_vc_g9

0x9196,	// (0x000290fd) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x0002f94d) volume_set_pane_vc_g

0xb625,	// (0x0002b58c) volume_set_pane_vc

0xb62f,	// (0x0002b596) button_value_adjust_pane_cp1_vc

0xb639,	// (0x0002b5a0) list_highlight_pane_cp2_vc

0xb642,	// (0x0002b5a9) list_set_pane_vc_ParamLimits

0xb642,	// (0x0002b5a9) list_set_pane_vc

0xb6a0,	// (0x0002b607) main_pane_set_vc_t1_ParamLimits

0xb6a0,	// (0x0002b607) main_pane_set_vc_t1

0xb6b5,	// (0x0002b61c) main_pane_set_vc_t2_ParamLimits

0xb6b5,	// (0x0002b61c) main_pane_set_vc_t2

0xb6c7,	// (0x0002b62e) main_pane_set_vc_t3_ParamLimits

0xb6c7,	// (0x0002b62e) main_pane_set_vc_t3

0xb6d9,	// (0x0002b640) main_pane_set_vc_t4_ParamLimits

0xb6d9,	// (0x0002b640) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x0002f962) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x0002f962) main_pane_set_vc_t

0xb6eb,	// (0x0002b652) setting_code_pane_vc_ParamLimits

0xb6eb,	// (0x0002b652) setting_code_pane_vc

0xb6fa,	// (0x0002b661) setting_slider_graphic_pane_vc

0xb6fa,	// (0x0002b661) setting_slider_pane_vc

0xb6fa,	// (0x0002b661) setting_text_pane_vc

0xb6fa,	// (0x0002b661) setting_volume_pane_vc

0xb702,	// (0x0002b669) scroll_pane_cp121_vc

0x1e5a,	// (0x00021dc1) set_content_pane_vc

0xb70a,	// (0x0002b671) button_value_adjust_pane_g1

0xb713,	// (0x0002b67a) button_value_adjust_pane_g2

0x0001,

0xfa63,	// (0x0002f9ca) button_value_adjust_pane_g

0xb71c,	// (0x0002b683) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb71c,	// (0x0002b683) form_field_slider_wide_pane_vc_t1

0xb730,	// (0x0002b697) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb730,	// (0x0002b697) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa68,	// (0x0002f9cf) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x0002f9cf) form_field_slider_wide_pane_vc_t

0x1a5b,	// (0x000219c2) input_focus_pane_cp10_vc_ParamLimits

0x1a5b,	// (0x000219c2) input_focus_pane_cp10_vc

0xb75e,	// (0x0002b6c5) slider_cont_pane_cp1_vc_ParamLimits

0xb75e,	// (0x0002b6c5) slider_cont_pane_cp1_vc

0xb770,	// (0x0002b6d7) slider_form_pane_g1_cp2

0xb5a0,	// (0x0002b507) slider_form_pane_g2_cp2

0xb79d,	// (0x0002b704) form_field_slider_pane_vc_t3

0xb7ab,	// (0x0002b712) form_field_slider_pane_vc_t4

0xb7b9,	// (0x0002b720) slider_form_pane_vc_ParamLimits

0xb7b9,	// (0x0002b720) slider_form_pane_vc

0xb7c6,	// (0x0002b72d) form_field_slider_pane_vc_t1_ParamLimits

0xb7c6,	// (0x0002b72d) form_field_slider_pane_vc_t1

0xb730,	// (0x0002b697) form_field_slider_pane_vc_t2_ParamLimits

0xb730,	// (0x0002b697) form_field_slider_pane_vc_t2

0x0001,

0xfa7a,	// (0x0002f9e1) form_field_slider_pane_vc_t_ParamLimits

0xfa7a,	// (0x0002f9e1) form_field_slider_pane_vc_t

0x1a5b,	// (0x000219c2) input_focus_pane_cp9_vc_ParamLimits

0x1a5b,	// (0x000219c2) input_focus_pane_cp9_vc

0xb7e2,	// (0x0002b749) slider_cont_pane_vc_ParamLimits

0xb7e2,	// (0x0002b749) slider_cont_pane_vc

0xb7f6,	// (0x0002b75d) list_form_graphic_pane_cp_vc_ParamLimits

0xb7f6,	// (0x0002b75d) list_form_graphic_pane_cp_vc

0x8758,	// (0x000286bf) form_field_popup_wide_pane_vc_g1

0xb80b,	// (0x0002b772) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb80b,	// (0x0002b772) form_field_popup_wide_pane_vc_t1

0x1ea3,	// (0x00021e0a) input_focus_pane_cp8_vc_ParamLimits

0x1ea3,	// (0x00021e0a) input_focus_pane_cp8_vc

0xb850,	// (0x0002b7b7) list_form_wide_pane_vc_ParamLimits

0xb850,	// (0x0002b7b7) list_form_wide_pane_vc

0xb85c,	// (0x0002b7c3) list_form_graphic_pane_vc_g1

0xb864,	// (0x0002b7cb) list_form_graphic_pane_vc_t1_ParamLimits

0xb864,	// (0x0002b7cb) list_form_graphic_pane_vc_t1

0x1a69,	// (0x000219d0) list_highlight_pane_cp5_vc_ParamLimits

0x1a69,	// (0x000219d0) list_highlight_pane_cp5_vc

0xb880,	// (0x0002b7e7) list_form_graphic_pane_vc_ParamLimits

0xb880,	// (0x0002b7e7) list_form_graphic_pane_vc

0x8758,	// (0x000286bf) form_field_popup_pane_vc_g1

0xb896,	// (0x0002b7fd) form_field_popup_pane_vc_t1_ParamLimits

0xb896,	// (0x0002b7fd) form_field_popup_pane_vc_t1

0x1ea3,	// (0x00021e0a) input_focus_pane_cp7_vc_ParamLimits

0x1ea3,	// (0x00021e0a) input_focus_pane_cp7_vc

0xb8ad,	// (0x0002b814) list_form_pane_vc_ParamLimits

0xb8ad,	// (0x0002b814) list_form_pane_vc

0xb8b9,	// (0x0002b820) data_form_pane_vc_t1_ParamLimits

0xb8b9,	// (0x0002b820) data_form_pane_vc_t1

0x1f69,	// (0x00021ed0) input_focus_pane_vc_g1

0x1f71,	// (0x00021ed8) input_focus_pane_vc_g2

0x1f79,	// (0x00021ee0) input_focus_pane_vc_g3

0x1f81,	// (0x00021ee8) input_focus_pane_vc_g4

0x1f89,	// (0x00021ef0) input_focus_pane_vc_g5

0x1f91,	// (0x00021ef8) input_focus_pane_vc_g6

0x1f99,	// (0x00021f00) input_focus_pane_vc_g7

0x1fa1,	// (0x00021f08) input_focus_pane_vc_g8

0x1fa9,	// (0x00021f10) input_focus_pane_vc_g9

0x1a03,	// (0x0002196a) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x0002f5bf) input_focus_pane_vc_g

0x874c,	// (0x000286b3) data_form_pane_vc_ParamLimits

0x874c,	// (0x000286b3) data_form_pane_vc

0x8758,	// (0x000286bf) form_field_data_pane_vc_g1

0xb8d4,	// (0x0002b83b) form_field_data_pane_vc_t1_ParamLimits

0xb8d4,	// (0x0002b83b) form_field_data_pane_vc_t1

0x1ea3,	// (0x00021e0a) input_focus_pane_vc_ParamLimits

0x1ea3,	// (0x00021e0a) input_focus_pane_vc

0xb8ee,	// (0x0002b855) button_value_adjust_pane_cp3_vc

0xb8f6,	// (0x0002b85d) button_value_adjust_pane_cp5_vc

0xb8fe,	// (0x0002b865) form_field_data_pane_vc_ParamLimits

0xb8fe,	// (0x0002b865) form_field_data_pane_vc

0xb915,	// (0x0002b87c) form_field_data_pane_vc_cp2

0xb91d,	// (0x0002b884) form_field_data_wide_pane_vc_ParamLimits

0xb91d,	// (0x0002b884) form_field_data_wide_pane_vc

0xb933,	// (0x0002b89a) form_field_data_wide_pane_vc_cp2

0xb93b,	// (0x0002b8a2) form_field_popup_pane_vc_ParamLimits

0xb93b,	// (0x0002b8a2) form_field_popup_pane_vc

0xb952,	// (0x0002b8b9) form_field_popup_wide_pane_vc_ParamLimits

0xb952,	// (0x0002b8b9) form_field_popup_wide_pane_vc

0xb968,	// (0x0002b8cf) form_field_slider_pane_vc_ParamLimits

0xb968,	// (0x0002b8cf) form_field_slider_pane_vc

0xb97b,	// (0x0002b8e2) form_field_slider_wide_pane_vc_ParamLimits

0xb97b,	// (0x0002b8e2) form_field_slider_wide_pane_vc

0xb98e,	// (0x0002b8f5) grid_touch_1_pane_ParamLimits

0xb98e,	// (0x0002b8f5) grid_touch_1_pane

0xb99a,	// (0x0002b901) grid_touch_2_pane_ParamLimits

0xb99a,	// (0x0002b901) grid_touch_2_pane

0x290b,	// (0x00022872) touch_pane_g1_ParamLimits

0x290b,	// (0x00022872) touch_pane_g1

0xb9b2,	// (0x0002b919) cell_app_pane_cp_wide_ParamLimits

0xb9b2,	// (0x0002b919) cell_app_pane_cp_wide

0xb9c3,	// (0x0002b92a) grid_popup_fast_wide_pane_ParamLimits

0xb9c3,	// (0x0002b92a) grid_popup_fast_wide_pane

0xb9d7,	// (0x0002b93e) scroll_pane_cp19_ParamLimits

0xb9d7,	// (0x0002b93e) scroll_pane_cp19

0x1a0d,	// (0x00021974) bg_popup_window_pane_cp20

0xb9eb,	// (0x0002b952) listscroll_popup_fast_wide_pane

0xb9f3,	// (0x0002b95a) grid_indicator_nsta_pane

0xba05,	// (0x0002b96c) clock_nsta_pane_g1

0xba0e,	// (0x0002b975) clock_nsta_pane_t1

0xba2a,	// (0x0002b991) cell_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x0002b991) cell_indicator_nsta_pane

0xba5f,	// (0x0002b9c6) cell_indicator_nsta_pane_g1

0xba6d,	// (0x0002b9d4) cell_indicator_nsta_pane_g2

0x0001,

0xfa8b,	// (0x0002f9f2) cell_indicator_nsta_pane_g

0xba7f,	// (0x0002b9e6) clock_nsta_pane_cp

0xba88,	// (0x0002b9ef) indicator_nsta_pane_cp

0xba92,	// (0x0002b9f9) nsta_clock_indic_pane_g1

0x1abf,	// (0x00021a26) grid_indicator_pane

0x7316,	// (0x0002727d) scroll_pane_cp29

0x752c,	// (0x00027493) indicator_nsta_pane_cp2_ParamLimits

0x752c,	// (0x00027493) indicator_nsta_pane_cp2

0x1a69,	// (0x000219d0) main_apps_wheel_pane

0x8970,	// (0x000288d7) form_midp_field_text_pane_ParamLimits

0x8ab9,	// (0x00028a20) scroll_bar_cp050_ParamLimits

0xbaeb,	// (0x0002ba52) cell_indicator_pane_ParamLimits

0xbaeb,	// (0x0002ba52) cell_indicator_pane

0xbb04,	// (0x0002ba6b) cell_indicator_pane_g1

0xbb0e,	// (0x0002ba75) grid_wheel_folder_pane_ParamLimits

0xbb0e,	// (0x0002ba75) grid_wheel_folder_pane

0xbb24,	// (0x0002ba8b) list_wheel_apps_pane_ParamLimits

0xbb24,	// (0x0002ba8b) list_wheel_apps_pane

0xbb35,	// (0x0002ba9c) main_apps_wheel_pane_g1_ParamLimits

0xbb35,	// (0x0002ba9c) main_apps_wheel_pane_g1

0xbb49,	// (0x0002bab0) main_apps_wheel_pane_g2_ParamLimits

0xbb49,	// (0x0002bab0) main_apps_wheel_pane_g2

0x0001,

0xfaa7,	// (0x0002fa0e) main_apps_wheel_pane_g_ParamLimits

0xfaa7,	// (0x0002fa0e) main_apps_wheel_pane_g

0xbb61,	// (0x0002bac8) main_apps_wheel_pane_t1_ParamLimits

0xbb61,	// (0x0002bac8) main_apps_wheel_pane_t1

0xbb84,	// (0x0002baeb) list_wheel_apps_pane_g1

0xbb8c,	// (0x0002baf3) list_wheel_apps_pane_g2

0xbb94,	// (0x0002bafb) list_wheel_apps_pane_g3

0xbb9e,	// (0x0002bb05) list_wheel_apps_pane_g4

0xbba8,	// (0x0002bb0f) list_wheel_apps_pane_g5

0x0004,

0xfaac,	// (0x0002fa13) list_wheel_apps_pane_g

0x2666,	// (0x000225cd) navi_icon_text_pane

0x803f,	// (0x00027fa6) aid_fill_nsta

0xbbcb,	// (0x0002bb32) navi_icon_text_pane_g1

0xbbd7,	// (0x0002bb3e) navi_icon_text_pane_t1

0x2556,	// (0x000224bd) list_set_graphic_pane_t1_ParamLimits

0x2556,	// (0x000224bd) list_set_graphic_pane_t1

0xa59c,	// (0x0002a503) popup_midp_note_alarm_window_t6_ParamLimits

0xa59c,	// (0x0002a503) popup_midp_note_alarm_window_t6

0xa5ae,	// (0x0002a515) popup_midp_note_alarm_window_t7_ParamLimits

0xa5ae,	// (0x0002a515) popup_midp_note_alarm_window_t7

0xa5c0,	// (0x0002a527) popup_midp_note_alarm_window_t8_ParamLimits

0xa5c0,	// (0x0002a527) popup_midp_note_alarm_window_t8

0xa5d2,	// (0x0002a539) popup_midp_note_alarm_window_t9_ParamLimits

0xa5d2,	// (0x0002a539) popup_midp_note_alarm_window_t9

0xa5e4,	// (0x0002a54b) popup_midp_note_alarm_window_t10_ParamLimits

0xa5e4,	// (0x0002a54b) popup_midp_note_alarm_window_t10

0xa5f6,	// (0x0002a55d) popup_midp_note_alarm_window_t11_ParamLimits

0xa5f6,	// (0x0002a55d) popup_midp_note_alarm_window_t11

0xa608,	// (0x0002a56f) scroll_pane_cp17_ParamLimits

0xa608,	// (0x0002a56f) scroll_pane_cp17

0x8e53,	// (0x00028dba) volume_small_pane_cp_g1

0x919f,	// (0x00029106) volume_small_pane_cp_g2

0x91a8,	// (0x0002910f) volume_small_pane_cp_g3

0x91b1,	// (0x00029118) volume_small_pane_cp_g4

0x91ba,	// (0x00029121) volume_small_pane_cp_g5

0x9169,	// (0x000290d0) volume_small_pane_cp_g6

0x91c3,	// (0x0002912a) volume_small_pane_cp_g7

0x91cc,	// (0x00029133) volume_small_pane_cp_g8

0x91d5,	// (0x0002913c) volume_small_pane_cp_g9

0x91de,	// (0x00029145) volume_small_pane_cp_g10

0x27cc,	// (0x00022733) midp_ticker_pane_g1_ParamLimits

0x27d8,	// (0x0002273f) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x0002f68b) midp_ticker_pane_g_ParamLimits

0x27e4,	// (0x0002274b) midp_ticker_pane_t1_ParamLimits

0x8055,	// (0x00027fbc) aid_fill_nsta_2

0x8aa5,	// (0x00028a0c) list_form2_midp_pane

0xaf50,	// (0x0002aeb7) midp_editing_number_pane_ParamLimits

0xaf5f,	// (0x0002aec6) midp_ticker_pane_ParamLimits

0xbbe9,	// (0x0002bb50) form2_midp_field_pane

0xbc0d,	// (0x0002bb74) scroll_pane_cp51

0xbc2d,	// (0x0002bb94) form2_midp_button_pane_ParamLimits

0xbc2d,	// (0x0002bb94) form2_midp_button_pane

0xbc3f,	// (0x0002bba6) form2_midp_content_pane_ParamLimits

0xbc3f,	// (0x0002bba6) form2_midp_content_pane

0xbc59,	// (0x0002bbc0) form2_midp_field_choice_group_pane

0xbc61,	// (0x0002bbc8) form2_midp_field_pane_g1

0xbc69,	// (0x0002bbd0) form2_midp_field_pane_g2

0xbc71,	// (0x0002bbd8) form2_midp_field_pane_g3

0xbc79,	// (0x0002bbe0) form2_midp_field_pane_g4

0x0003,

0xfad1,	// (0x0002fa38) form2_midp_field_pane_g

0xbc81,	// (0x0002bbe8) form2_midp_gauge_slider_pane

0xbc89,	// (0x0002bbf0) form2_midp_gauge_wait_pane

0xbc91,	// (0x0002bbf8) form2_midp_image_pane_ParamLimits

0xbc91,	// (0x0002bbf8) form2_midp_image_pane

0xbcac,	// (0x0002bc13) form2_midp_label_pane_ParamLimits

0xbcac,	// (0x0002bc13) form2_midp_label_pane

0xbcc5,	// (0x0002bc2c) form2_midp_label_pane_cp_ParamLimits

0xbcc5,	// (0x0002bc2c) form2_midp_label_pane_cp

0xbce6,	// (0x0002bc4d) form2_midp_string_pane_ParamLimits

0xbce6,	// (0x0002bc4d) form2_midp_string_pane

0x619a,	// (0x00026101) form2_midp_text_pane_ParamLimits

0x619a,	// (0x00026101) form2_midp_text_pane

0xbcf8,	// (0x0002bc5f) form2_midp_time_pane

0xbd08,	// (0x0002bc6f) input_focus_pane_cp51_ParamLimits

0xbd08,	// (0x0002bc6f) input_focus_pane_cp51

0xbd20,	// (0x0002bc87) form2_midp_label_pane_t1_ParamLimits

0xbd20,	// (0x0002bc87) form2_midp_label_pane_t1

0x61b3,	// (0x0002611a) form2_mdip_text_pane_t1_ParamLimits

0x61b3,	// (0x0002611a) form2_mdip_text_pane_t1

0x61d1,	// (0x00026138) form2_midp_time_pane_t1

0xbd69,	// (0x0002bcd0) form2_midp_gauge_slider_pane_t1

0xbd7b,	// (0x0002bce2) form2_midp_gauge_slider_pane_t2

0xbd8d,	// (0x0002bcf4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfada,	// (0x0002fa41) form2_midp_gauge_slider_pane_t

0xbd9f,	// (0x0002bd06) form2_midp_slider_pane

0xbdab,	// (0x0002bd12) form2_midp_gauge_wait_pane_t1

0xbdb9,	// (0x0002bd20) form2_midp_wait_pane_ParamLimits

0xbdb9,	// (0x0002bd20) form2_midp_wait_pane

0xbde4,	// (0x0002bd4b) list_single_2graphic_pane_cp4_ParamLimits

0xbde4,	// (0x0002bd4b) list_single_2graphic_pane_cp4

0x87c1,	// (0x00028728) list_single_midp_graphic_pane_cp_ParamLimits

0x87c1,	// (0x00028728) list_single_midp_graphic_pane_cp

0x1a0d,	// (0x00021974) list_highlight_pane_cp20

0xbe0c,	// (0x0002bd73) list_single_2graphic_pane_g1_cp4

0xb3e9,	// (0x0002b350) list_single_2graphic_pane_g2_cp4

0xbe14,	// (0x0002bd7b) list_single_2graphic_pane_t1_cp4

0x1a69,	// (0x000219d0) list_highlight_pane_cp21

0xbe23,	// (0x0002bd8a) list_single_midp_graphic_pane_g4_cp

0xbe32,	// (0x0002bd99) list_single_midp_graphic_pane_t1_cp

0xbe47,	// (0x0002bdae) form2_mdip_string_pane_t1_ParamLimits

0xbe47,	// (0x0002bdae) form2_mdip_string_pane_t1

0x1a0d,	// (0x00021974) bg_wml_button_pane_cp2

0x1a03,	// (0x0002196a) form2_midp_image_pane_g1

0x5743,	// (0x000256aa) list_double_large_graphic_pane_g5_ParamLimits

0x5743,	// (0x000256aa) list_double_large_graphic_pane_g5

0x76e5,	// (0x0002764c) midp_form_pane_ParamLimits

0x1a69,	// (0x000219d0) main_apps_wheel_pane_ParamLimits

0x7e27,	// (0x00027d8e) popup_preview_window_ParamLimits

0x7e27,	// (0x00027d8e) popup_preview_window

0x7fe2,	// (0x00027f49) popup_touch_info_window_ParamLimits

0x7fe2,	// (0x00027f49) popup_touch_info_window

0x8000,	// (0x00027f67) popup_touch_menu_window_ParamLimits

0x8000,	// (0x00027f67) popup_touch_menu_window

0x19f9,	// (0x00021960) bg_popup_sub_pane_cp6

0xbf4e,	// (0x0002beb5) list_touch_menu_pane

0xbf56,	// (0x0002bebd) list_single_touch_menu_pane_ParamLimits

0xbf56,	// (0x0002bebd) list_single_touch_menu_pane

0xbf6c,	// (0x0002bed3) list_single_touch_menu_pane_t1

0x1a69,	// (0x000219d0) bg_popup_sub_pane_cp7_ParamLimits

0x1a69,	// (0x000219d0) bg_popup_sub_pane_cp7

0xbf7a,	// (0x0002bee1) heading_sub_pane

0xbf82,	// (0x0002bee9) list_touch_info_pane_ParamLimits

0xbf82,	// (0x0002bee9) list_touch_info_pane

0xbf91,	// (0x0002bef8) list_single_touch_info_pane_ParamLimits

0xbf91,	// (0x0002bef8) list_single_touch_info_pane

0xbfa3,	// (0x0002bf0a) list_single_touch_info_pane_t1

0xbfb1,	// (0x0002bf18) list_single_touch_info_pane_t2

0x0001,

0xfae8,	// (0x0002fa4f) list_single_touch_info_pane_t

0x27b5,	// (0x0002271c) bg_popup_heading_pane_cp

0xbfbf,	// (0x0002bf26) heading_sub_pane_t1

0x865e,	// (0x000285c5) bg_popup_preview_window_pane_cp_ParamLimits

0x865e,	// (0x000285c5) bg_popup_preview_window_pane_cp

0xbf7a,	// (0x0002bee1) heading_preview_pane

0xbf82,	// (0x0002bee9) list_preview_pane_ParamLimits

0xbf82,	// (0x0002bee9) list_preview_pane

0xbfcd,	// (0x0002bf34) popup_preview_window_g1

0xbf91,	// (0x0002bef8) list_single_preview_pane_ParamLimits

0xbf91,	// (0x0002bef8) list_single_preview_pane

0xbfd5,	// (0x0002bf3c) list_single_preview_pane_g1

0xbfdd,	// (0x0002bf44) list_single_preview_pane_t1

0xbfa3,	// (0x0002bf0a) list_single_preview_pane_t2

0x0001,

0xfaed,	// (0x0002fa54) list_single_preview_pane_t

0xbfeb,	// (0x0002bf52) bg_popup_heading_pane_cp2_ParamLimits

0xbfeb,	// (0x0002bf52) bg_popup_heading_pane_cp2

0xc001,	// (0x0002bf68) heading_preview_pane_g1

0xc009,	// (0x0002bf70) heading_preview_pane_t1_ParamLimits

0xc009,	// (0x0002bf70) heading_preview_pane_t1

0x1ad6,	// (0x00021a3d) soft_indicator_pane_t1_ParamLimits

0x1db5,	// (0x00021d1c) scroll_pane_ParamLimits

0x223f,	// (0x000221a6) scroll_sc2_left_pane

0x2236,	// (0x0002219d) scroll_sc2_right_pane

0x225e,	// (0x000221c5) scroll_bg_pane_g1_ParamLimits

0x2273,	// (0x000221da) scroll_bg_pane_g2_ParamLimits

0x228b,	// (0x000221f2) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x0002f616) scroll_bg_pane_g_ParamLimits

0x225e,	// (0x000221c5) scroll_handle_pane_g1_ParamLimits

0x22a0,	// (0x00022207) scroll_handle_pane_g2_ParamLimits

0x228b,	// (0x000221f2) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x0002f61d) scroll_handle_pane_g_ParamLimits

0x7aaa,	// (0x00027a11) popup_choice_list_window_ParamLimits

0x7aaa,	// (0x00027a11) popup_choice_list_window

0x8474,	// (0x000283db) choice_list_pane

0x8526,	// (0x0002848d) cell_toolbar_pane_t1

0x854e,	// (0x000284b5) toolbar_button_pane_ParamLimits

0xaac2,	// (0x0002aa29) ai_gene_pane_1_t2_ParamLimits

0xaac2,	// (0x0002aa29) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x0002f840) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x0002f840) ai_gene_pane_1_t

0xc026,	// (0x0002bf8d) scroll_sc2_left_pane_g1

0xc026,	// (0x0002bf8d) scroll_sc2_right_pane_g1

0x2053,	// (0x00021fba) bg_popup_sub_pane_cp10

0xc030,	// (0x0002bf97) list_choice_list_pane

0xc049,	// (0x0002bfb0) list_single_choice_list_pane_ParamLimits

0xc049,	// (0x0002bfb0) list_single_choice_list_pane

0xc05c,	// (0x0002bfc3) list_single_choice_list_pane_g1

0x6faf,	// (0x00026f16) list_single_choice_list_pane_t1_ParamLimits

0x6faf,	// (0x00026f16) list_single_choice_list_pane_t1

0xc064,	// (0x0002bfcb) choice_list_pane_g1

0xc06c,	// (0x0002bfd3) choice_list_pane_t1

0x19f9,	// (0x00021960) input_focus_pane_cp11

0x21ab,	// (0x00022112) title_pane_stacon_g2_ParamLimits

0x21ab,	// (0x00022112) title_pane_stacon_g2

0x0002,

0xf695,	// (0x0002f5fc) title_pane_stacon_g_ParamLimits

0xf695,	// (0x0002f5fc) title_pane_stacon_g

0x27b5,	// (0x0002271c) cursor_press_pane

0x7b52,	// (0x00027ab9) popup_fep_hwr_window_ParamLimits

0x7b52,	// (0x00027ab9) popup_fep_hwr_window

0x7bca,	// (0x00027b31) popup_fep_vkb_window_ParamLimits

0x7bca,	// (0x00027b31) popup_fep_vkb_window

0xc07a,	// (0x0002bfe1) cursor_press_pane_g1

0x0002,

0xfb16,	// (0x0002fa7d) fep_vkb_side_pane_g_ParamLimits

0x9220,	// (0x00029187) fep_hwr_candidate_pane_ParamLimits

0x9220,	// (0x00029187) fep_hwr_candidate_pane

0x924a,	// (0x000291b1) fep_hwr_side_pane_ParamLimits

0x924a,	// (0x000291b1) fep_hwr_side_pane

0x926a,	// (0x000291d1) fep_hwr_top_pane_ParamLimits

0x926a,	// (0x000291d1) fep_hwr_top_pane

0x9282,	// (0x000291e9) fep_hwr_write_pane_ParamLimits

0x9282,	// (0x000291e9) fep_hwr_write_pane

0xfb16,	// (0x0002fa7d) fep_vkb_side_pane_g

0xc082,	// (0x0002bfe9) fep_hwr_top_pane_g1

0xc094,	// (0x0002bffb) fep_hwr_top_pane_g2

0x92ae,	// (0x00029215) fep_hwr_top_pane_g3

0x0002,

0xfaf2,	// (0x0002fa59) fep_hwr_top_pane_g

0x92c3,	// (0x0002922a) fep_hwr_top_text_pane

0x2363,	// (0x000222ca) fep_hwr_top_text_pane_g1

0xc0ca,	// (0x0002c031) fep_hwr_top_text_pane_t1

0x93b9,	// (0x00029320) fep_hwr_candidate_pane_g1

0xc30f,	// (0x0002c276) fep_vkb_keypad_pane_g3_ParamLimits

0xc30f,	// (0x0002c276) fep_vkb_keypad_pane_g3

0xc337,	// (0x0002c29e) fep_vkb_keypad_pane_g4_ParamLimits

0xc337,	// (0x0002c29e) fep_vkb_keypad_pane_g4

0xc3a6,	// (0x0002c30d) fep_vkb_bottom_pane_g2_ParamLimits

0xc3a6,	// (0x0002c30d) fep_vkb_bottom_pane_g2

0x0001,

0xfb1d,	// (0x0002fa84) fep_vkb_bottom_pane_g_ParamLimits

0xfb1d,	// (0x0002fa84) fep_vkb_bottom_pane_g

0xc026,	// (0x0002bf8d) cell_vkb_side_pane_g2

0x0001,

0xfb27,	// (0x0002fa8e) cell_vkb_side_pane_g

0xc431,	// (0x0002c398) cell_vkb_side_pane_t1

0xc43f,	// (0x0002c3a6) cell_vkb_side_pane_t1_copy1

0xc026,	// (0x0002bf8d) bg_fep_vkb_candidate_pane_g2

0xc56b,	// (0x0002c4d2) cell_vkb_candidate_pane_ParamLimits

0xc0d8,	// (0x0002c03f) aid_size_cell_vkb_ParamLimits

0xc0d8,	// (0x0002c03f) aid_size_cell_vkb

0xc56b,	// (0x0002c4d2) cell_vkb_candidate_pane

0x93d3,	// (0x0002933a) bg_popup_fep_shadow_pane_g1

0xc166,	// (0x0002c0cd) fep_vkb_bottom_pane_ParamLimits

0xc166,	// (0x0002c0cd) fep_vkb_bottom_pane

0xc19c,	// (0x0002c103) fep_vkb_candidate_pane_ParamLimits

0xc19c,	// (0x0002c103) fep_vkb_candidate_pane

0xc1b8,	// (0x0002c11f) fep_vkb_keypad_pane_ParamLimits

0xc1b8,	// (0x0002c11f) fep_vkb_keypad_pane

0xc1f7,	// (0x0002c15e) fep_vkb_side_pane_ParamLimits

0xc1f7,	// (0x0002c15e) fep_vkb_side_pane

0xc233,	// (0x0002c19a) fep_vkb_top_pane_ParamLimits

0xc233,	// (0x0002c19a) fep_vkb_top_pane

0xc268,	// (0x0002c1cf) fep_vkb_top_pane_g1_ParamLimits

0xc268,	// (0x0002c1cf) fep_vkb_top_pane_g1

0xc277,	// (0x0002c1de) fep_vkb_top_pane_g2_ParamLimits

0xc277,	// (0x0002c1de) fep_vkb_top_pane_g2

0xc286,	// (0x0002c1ed) fep_vkb_top_pane_g3_ParamLimits

0xc286,	// (0x0002c1ed) fep_vkb_top_pane_g3

0x0003,

0xfb0d,	// (0x0002fa74) fep_vkb_top_pane_g_ParamLimits

0xfb0d,	// (0x0002fa74) fep_vkb_top_pane_g

0xc2a4,	// (0x0002c20b) fep_vkb_top_text_pane_ParamLimits

0xc2a4,	// (0x0002c20b) fep_vkb_top_text_pane

0xc2b5,	// (0x0002c21c) fep_vkb_side_pane_g1_ParamLimits

0xc2b5,	// (0x0002c21c) fep_vkb_side_pane_g1

0xc2fe,	// (0x0002c265) grid_vkb_side_pane_ParamLimits

0xc2fe,	// (0x0002c265) grid_vkb_side_pane

0x93db,	// (0x00029342) bg_popup_fep_shadow_pane_g2

0x93e4,	// (0x0002934b) bg_popup_fep_shadow_pane_g3

0x93ec,	// (0x00029353) bg_popup_fep_shadow_pane_g4

0x93f5,	// (0x0002935c) bg_popup_fep_shadow_pane_g5

0x93ff,	// (0x00029366) bg_popup_fep_shadow_pane_g6

0x9407,	// (0x0002936e) bg_popup_fep_shadow_pane_g7

0x1f89,	// (0x00021ef0) bg_popup_fep_shadow_pane_g8

0xc355,	// (0x0002c2bc) grid_vkb_keypad_number_pane_ParamLimits

0xc355,	// (0x0002c2bc) grid_vkb_keypad_number_pane

0xc365,	// (0x0002c2cc) grid_vkb_keypad_pane_ParamLimits

0xc365,	// (0x0002c2cc) grid_vkb_keypad_pane

0xc38b,	// (0x0002c2f2) fep_vkb_bottom_pane_g1_ParamLimits

0xc38b,	// (0x0002c2f2) fep_vkb_bottom_pane_g1

0xc3b4,	// (0x0002c31b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3b4,	// (0x0002c31b) grid_vkb_keypad_bottom_left_pane

0xc3c9,	// (0x0002c330) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3c9,	// (0x0002c330) grid_vkb_keypad_bottom_right_pane

0xc3de,	// (0x0002c345) fep_vkb_top_text_pane_g1

0xc3f9,	// (0x0002c360) fep_vkb_top_text_pane_t1

0xc40e,	// (0x0002c375) cell_vkb_side_pane_ParamLimits

0xc40e,	// (0x0002c375) cell_vkb_side_pane

0xc026,	// (0x0002bf8d) cell_vkb_side_pane_g1

0xc44d,	// (0x0002c3b4) cell_vkb_keypad_pane_ParamLimits

0xc44d,	// (0x0002c3b4) cell_vkb_keypad_pane

0xc4c2,	// (0x0002c429) cell_vkb_keypad_pane_g1

0x0008,

0xfb3a,	// (0x0002faa1) bg_popup_fep_shadow_pane_g

0xc026,	// (0x0002bf8d) cell_hwr_side_pane_g1

0xc026,	// (0x0002bf8d) cell_hwr_side_pane_g2

0xc4cc,	// (0x0002c433) cell_vkb_keypad_pane_t1

0xc4da,	// (0x0002c441) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4da,	// (0x0002c441) cell_vkb_keypad_bottom_left_pane

0xc4f7,	// (0x0002c45e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4f7,	// (0x0002c45e) cell_vkb_keypad_bottom_right_pane

0xc026,	// (0x0002bf8d) cell_vkb_keypad_bottom_left_pane_g1

0xc026,	// (0x0002bf8d) cell_vkb_keypad_bottom_right_pane_g1

0xc530,	// (0x0002c497) cell_vkb_keypad_number_pane_ParamLimits

0xc530,	// (0x0002c497) cell_vkb_keypad_number_pane

0xc54f,	// (0x0002c4b6) cell_vkb_keypad_number_pane_g1

0xc559,	// (0x0002c4c0) cell_vkb_keypad_number_pane_g2

0xc562,	// (0x0002c4c9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2c,	// (0x0002fa93) cell_vkb_keypad_number_pane_g

0xc4cc,	// (0x0002c433) cell_vkb_keypad_number_pane_t1

0xc586,	// (0x0002c4ed) fep_vkb_candidate_pane_g1

0x0001,

0xfb27,	// (0x0002fa8e) cell_hwr_side_pane_g

0xc59f,	// (0x0002c506) cell_hwr_side_pane_t1

0x9419,	// (0x00029380) cell_hwr_side_pane_t1_copy1

0xc296,	// (0x0002c1fd) cell_hwr_candidate_pane_g1

0x9427,	// (0x0002938e) cell_hwr_candidate_pane_t1

0xc026,	// (0x0002bf8d) cell_vkb_candidate_pane_g2

0xc625,	// (0x0002c58c) cell_vkb_candidate_pane_t1

0x91e7,	// (0x0002914e) bg_popup_fep_shadow_pane_ParamLimits

0x91e7,	// (0x0002914e) bg_popup_fep_shadow_pane

0x19c9,	// (0x00021930) bg_fep_hwr_top_pane_g4

0xc0a6,	// (0x0002c00d) bg_hwr_side_pane_g1_ParamLimits

0xc0a6,	// (0x0002c00d) bg_hwr_side_pane_g1

0x92ff,	// (0x00029266) cell_hwr_side_pane_ParamLimits

0x92ff,	// (0x00029266) cell_hwr_side_pane

0x933a,	// (0x000292a1) fep_hwr_write_pane_g1_ParamLimits

0x933a,	// (0x000292a1) fep_hwr_write_pane_g1

0x9347,	// (0x000292ae) fep_hwr_write_pane_g2_ParamLimits

0x9347,	// (0x000292ae) fep_hwr_write_pane_g2

0x9354,	// (0x000292bb) fep_hwr_write_pane_g3_ParamLimits

0x9354,	// (0x000292bb) fep_hwr_write_pane_g3

0x9362,	// (0x000292c9) fep_hwr_write_pane_g4_ParamLimits

0x9362,	// (0x000292c9) fep_hwr_write_pane_g4

0x0005,

0xfaf9,	// (0x0002fa60) fep_hwr_write_pane_g_ParamLimits

0xfaf9,	// (0x0002fa60) fep_hwr_write_pane_g

0x19c9,	// (0x00021930) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x19c9,	// (0x00021930) bg_fep_hwr_candidate_pane_g2

0x9377,	// (0x000292de) cell_hwr_candidate_pane_ParamLimits

0x9377,	// (0x000292de) cell_hwr_candidate_pane

0x93b9,	// (0x00029320) fep_hwr_candidate_pane_g1_ParamLimits

0xc106,	// (0x0002c06d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc106,	// (0x0002c06d) bg_popup_fep_shadow_pane_cp2

0xc296,	// (0x0002c1fd) fep_vkb_top_pane_g4_ParamLimits

0xc296,	// (0x0002c1fd) fep_vkb_top_pane_g4

0xc2dc,	// (0x0002c243) fep_vkb_side_pane_g2_ParamLimits

0xc2dc,	// (0x0002c243) fep_vkb_side_pane_g2

0x585b,	// (0x000257c2) list_setting_pane_t4_ParamLimits

0x585b,	// (0x000257c2) list_setting_pane_t4

0x58ed,	// (0x00025854) list_setting_number_pane_t5_ParamLimits

0x58ed,	// (0x00025854) list_setting_number_pane_t5

0x7345,	// (0x000272ac) list_double_heading_pane_cp2_ParamLimits

0x7345,	// (0x000272ac) list_double_heading_pane_cp2

0x2986,	// (0x000228ed) list_double_heading_pane_g1_cp2_ParamLimits

0x2986,	// (0x000228ed) list_double_heading_pane_g1_cp2

0xc633,	// (0x0002c59a) list_double_heading_pane_g2_cp2_ParamLimits

0xc633,	// (0x0002c59a) list_double_heading_pane_g2_cp2

0xc647,	// (0x0002c5ae) list_double_heading_pane_t1_cp2_ParamLimits

0xc647,	// (0x0002c5ae) list_double_heading_pane_t1_cp2

0xc65d,	// (0x0002c5c4) list_double_heading_pane_t2_cp2_ParamLimits

0xc65d,	// (0x0002c5c4) list_double_heading_pane_t2_cp2

0x19f1,	// (0x00021958) aid_value_unit2

0x6849,	// (0x000267b0) popup_preview_fixed_window

0x1bad,	// (0x00021b14) bg_popup_preview_window_pane_cp02

0xc66f,	// (0x0002c5d6) list_preview_fixed_pane

0xc6b5,	// (0x0002c61c) list_empty_pane_fp_ParamLimits

0xc6b5,	// (0x0002c61c) list_empty_pane_fp

0xc6b5,	// (0x0002c61c) list_single_cale_day_pane_fp_ParamLimits

0xc6b5,	// (0x0002c61c) list_single_cale_day_pane_fp

0xc6b5,	// (0x0002c61c) list_single_graphic_heading_pane_fp_ParamLimits

0xc6b5,	// (0x0002c61c) list_single_graphic_heading_pane_fp

0xc6b5,	// (0x0002c61c) list_single_graphic_pane_fp_ParamLimits

0xc6b5,	// (0x0002c61c) list_single_graphic_pane_fp

0xc6b5,	// (0x0002c61c) list_single_heading_pane_fp_ParamLimits

0xc6b5,	// (0x0002c61c) list_single_heading_pane_fp

0xc6b5,	// (0x0002c61c) list_single_pane_fp_ParamLimits

0xc6b5,	// (0x0002c61c) list_single_pane_fp

0xc6cb,	// (0x0002c632) list_single_pane_fp_g1_ParamLimits

0xc6cb,	// (0x0002c632) list_single_pane_fp_g1

0x56f4,	// (0x0002565b) list_single_pane_fp_g2_ParamLimits

0x56f4,	// (0x0002565b) list_single_pane_fp_g2

0x61e4,	// (0x0002614b) list_single_pane_fp_g3_ParamLimits

0x61e4,	// (0x0002614b) list_single_pane_fp_g3

0xc6d7,	// (0x0002c63e) list_single_pane_fp_g4_ParamLimits

0xc6d7,	// (0x0002c63e) list_single_pane_fp_g4

0x0003,

0xfb5b,	// (0x0002fac2) list_single_pane_fp_g_ParamLimits

0xfb5b,	// (0x0002fac2) list_single_pane_fp_g

0x61f8,	// (0x0002615f) list_single_pane_fp_t1_ParamLimits

0x61f8,	// (0x0002615f) list_single_pane_fp_t1

0x620f,	// (0x00026176) list_single_graphic_pane_fp_g1_ParamLimits

0x620f,	// (0x00026176) list_single_graphic_pane_fp_g1

0xc6cb,	// (0x0002c632) list_single_graphic_pane_fp_g2_ParamLimits

0xc6cb,	// (0x0002c632) list_single_graphic_pane_fp_g2

0x56f4,	// (0x0002565b) list_single_graphic_pane_fp_g3_ParamLimits

0x56f4,	// (0x0002565b) list_single_graphic_pane_fp_g3

0x61e4,	// (0x0002614b) list_single_graphic_pane_fp_g4_ParamLimits

0x61e4,	// (0x0002614b) list_single_graphic_pane_fp_g4

0xc6d7,	// (0x0002c63e) list_single_graphic_pane_fp_g5_ParamLimits

0xc6d7,	// (0x0002c63e) list_single_graphic_pane_fp_g5

0x0004,

0xfb64,	// (0x0002facb) list_single_graphic_pane_fp_g_ParamLimits

0xfb64,	// (0x0002facb) list_single_graphic_pane_fp_g

0x621b,	// (0x00026182) list_single_graphic_pane_fp_t1_ParamLimits

0x621b,	// (0x00026182) list_single_graphic_pane_fp_t1

0x620f,	// (0x00026176) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x620f,	// (0x00026176) list_single_graphic_heading_pane_fp_g1

0xc6cb,	// (0x0002c632) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6cb,	// (0x0002c632) list_single_graphic_heading_pane_fp_g2

0x56f4,	// (0x0002565b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x56f4,	// (0x0002565b) list_single_graphic_heading_pane_fp_g3

0x61e4,	// (0x0002614b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x61e4,	// (0x0002614b) list_single_graphic_heading_pane_fp_g4

0xc6d7,	// (0x0002c63e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6d7,	// (0x0002c63e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb64,	// (0x0002facb) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb64,	// (0x0002facb) list_single_graphic_heading_pane_fp_g

0x6231,	// (0x00026198) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6231,	// (0x00026198) list_single_graphic_heading_pane_fp_t1

0x6247,	// (0x000261ae) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6247,	// (0x000261ae) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6f,	// (0x0002fad6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6f,	// (0x0002fad6) list_single_graphic_heading_pane_fp_t

0x6259,	// (0x000261c0) list_single_cale_day_pane_fp_g1_ParamLimits

0x6259,	// (0x000261c0) list_single_cale_day_pane_fp_g1

0xc6e3,	// (0x0002c64a) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6e3,	// (0x0002c64a) list_single_cale_day_pane_fp_g2

0x6291,	// (0x000261f8) list_single_cale_day_pane_fp_g3_ParamLimits

0x6291,	// (0x000261f8) list_single_cale_day_pane_fp_g3

0x62b9,	// (0x00026220) list_single_cale_day_pane_fp_g4_ParamLimits

0x62b9,	// (0x00026220) list_single_cale_day_pane_fp_g4

0x62dd,	// (0x00026244) list_single_cale_day_pane_fp_g5_ParamLimits

0x62dd,	// (0x00026244) list_single_cale_day_pane_fp_g5

0x0004,

0xfb74,	// (0x0002fadb) list_single_cale_day_pane_fp_g_ParamLimits

0xfb74,	// (0x0002fadb) list_single_cale_day_pane_fp_g

0x6301,	// (0x00026268) list_single_cale_day_pane_fp_t1_ParamLimits

0x6301,	// (0x00026268) list_single_cale_day_pane_fp_t1

0x6327,	// (0x0002628e) list_single_cale_day_pane_fp_t2_ParamLimits

0x6327,	// (0x0002628e) list_single_cale_day_pane_fp_t2

0x6340,	// (0x000262a7) list_single_cale_day_pane_fp_t3_ParamLimits

0x6340,	// (0x000262a7) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7f,	// (0x0002fae6) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7f,	// (0x0002fae6) list_single_cale_day_pane_fp_t

0xc6cb,	// (0x0002c632) list_empty_pane_fp_g1_ParamLimits

0xc6cb,	// (0x0002c632) list_empty_pane_fp_g1

0x6359,	// (0x000262c0) list_empty_pane_fp_t1

0x6367,	// (0x000262ce) list_empty_pane_fp_t2

0x0001,

0xfb86,	// (0x0002faed) list_empty_pane_fp_t

0xc6cb,	// (0x0002c632) list_single_heading_pane_fp_g1_ParamLimits

0xc6cb,	// (0x0002c632) list_single_heading_pane_fp_g1

0x56f4,	// (0x0002565b) list_single_heading_pane_fp_g2_ParamLimits

0x56f4,	// (0x0002565b) list_single_heading_pane_fp_g2

0x61e4,	// (0x0002614b) list_single_heading_pane_fp_g3_ParamLimits

0x61e4,	// (0x0002614b) list_single_heading_pane_fp_g3

0x0002,

0xfb8b,	// (0x0002faf2) list_single_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002faf2) list_single_heading_pane_fp_g

0x6375,	// (0x000262dc) list_single_heading_pane_fp_t1_ParamLimits

0x6375,	// (0x000262dc) list_single_heading_pane_fp_t1

0x6387,	// (0x000262ee) list_single_heading_pane_fp_t2_ParamLimits

0x6387,	// (0x000262ee) list_single_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0002faf9) list_single_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0002faf9) list_single_heading_pane_fp_t

0x7015,	// (0x00026f7c) aid_size_cell_fast

0x1b90,	// (0x00021af7) soft_indicator_pane_cp1_t1

0x701e,	// (0x00026f85) cell_app_pane_cp2_ParamLimits

0x701e,	// (0x00026f85) cell_app_pane_cp2

0x9209,	// (0x00029170) fep_hwr_candidate_drop_down_list_pane

0x19d7,	// (0x0002193e) fep_hwr_candidate_pane_g3_ParamLimits

0x19d7,	// (0x0002193e) fep_hwr_candidate_pane_g3

0x19e4,	// (0x0002194b) fep_hwr_candidate_pane_g4_ParamLimits

0x19e4,	// (0x0002194b) fep_hwr_candidate_pane_g4

0x0002,

0xfb06,	// (0x0002fa6d) fep_hwr_candidate_pane_g_ParamLimits

0xfb06,	// (0x0002fa6d) fep_hwr_candidate_pane_g

0xc18b,	// (0x0002c0f2) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc18b,	// (0x0002c0f2) fep_vkb_candidate_drop_down_list_pane

0xc58e,	// (0x0002c4f5) fep_vkb_candidate_pane_g3

0xc596,	// (0x0002c4fd) fep_vkb_candidate_pane_g4

0x0002,

0xfb33,	// (0x0002fa9a) fep_vkb_candidate_pane_g

0xc296,	// (0x0002c1fd) cell_hwr_candidate_pane_g1_ParamLimits

0xc5ad,	// (0x0002c514) cell_hwr_candidate_pane_g3_ParamLimits

0xc5ad,	// (0x0002c514) cell_hwr_candidate_pane_g3

0xc5ce,	// (0x0002c535) cell_hwr_candidate_pane_g4_ParamLimits

0xc5ce,	// (0x0002c535) cell_hwr_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0002fab4) cell_hwr_candidate_pane_g_ParamLimits

0xfb4d,	// (0x0002fab4) cell_hwr_candidate_pane_g

0xc5ef,	// (0x0002c556) cell_vkb_candidate_pane_g3_ParamLimits

0xc5ef,	// (0x0002c556) cell_vkb_candidate_pane_g3

0xc60a,	// (0x0002c571) cell_vkb_candidate_pane_g4_ParamLimits

0xc60a,	// (0x0002c571) cell_vkb_candidate_pane_g4

0xc6ef,	// (0x0002c656) cell_app_pane_cp2_g1_ParamLimits

0xc6ef,	// (0x0002c656) cell_app_pane_cp2_g1

0xc70d,	// (0x0002c674) cell_app_pane_cp2_g2_ParamLimits

0xc70d,	// (0x0002c674) cell_app_pane_cp2_g2

0x0001,

0xfb97,	// (0x0002fafe) cell_app_pane_cp2_g_ParamLimits

0xfb97,	// (0x0002fafe) cell_app_pane_cp2_g

0xc719,	// (0x0002c680) cell_app_pane_cp2_t1_ParamLimits

0xc719,	// (0x0002c680) cell_app_pane_cp2_t1

0x1ea3,	// (0x00021e0a) grid_highlight_pane_cp1_ParamLimits

0x1ea3,	// (0x00021e0a) grid_highlight_pane_cp1

0x9445,	// (0x000293ac) cell_hwr_candidate_pane_cp1_ParamLimits

0x9445,	// (0x000293ac) cell_hwr_candidate_pane_cp1

0xc296,	// (0x0002c1fd) fep_hwr_candidate_drop_down_list_pane_g1

0xc72b,	// (0x0002c692) fep_hwr_candidate_drop_down_list_pane_g2

0xc738,	// (0x0002c69f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9c,	// (0x0002fb03) fep_hwr_candidate_drop_down_list_pane_g

0x9464,	// (0x000293cb) fep_hwr_candidate_drop_down_list_scroll_pane

0x946d,	// (0x000293d4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x946d,	// (0x000293d4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x947a,	// (0x000293e1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x947a,	// (0x000293e1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x9487,	// (0x000293ee) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9487,	// (0x000293ee) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5ef,	// (0x0002c556) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5ef,	// (0x0002c556) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc60a,	// (0x0002c571) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc60a,	// (0x0002c571) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9494,	// (0x000293fb) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9494,	// (0x000293fb) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x94af,	// (0x00029416) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x94af,	// (0x00029416) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x94ca,	// (0x00029431) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x94ca,	// (0x00029431) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba3,	// (0x0002fb0a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba3,	// (0x0002fb0a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc745,	// (0x0002c6ac) cell_vkb_candidate_pane_cp1_ParamLimits

0xc745,	// (0x0002c6ac) cell_vkb_candidate_pane_cp1

0xc296,	// (0x0002c1fd) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc296,	// (0x0002c1fd) fep_vkb_candidate_drop_down_list_pane_g1

0xc72b,	// (0x0002c692) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc72b,	// (0x0002c692) fep_vkb_candidate_drop_down_list_pane_g2

0xc738,	// (0x0002c69f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc738,	// (0x0002c69f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9c,	// (0x0002fb03) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9c,	// (0x0002fb03) fep_vkb_candidate_drop_down_list_pane_g

0xc765,	// (0x0002c6cc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc765,	// (0x0002c6cc) fep_vkb_candidate_drop_down_list_scroll_pane

0xc772,	// (0x0002c6d9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc772,	// (0x0002c6d9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc77f,	// (0x0002c6e6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc77f,	// (0x0002c6e6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc78b,	// (0x0002c6f2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc78b,	// (0x0002c6f2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5ad,	// (0x0002c514) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5ad,	// (0x0002c514) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5ce,	// (0x0002c535) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5ce,	// (0x0002c535) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc797,	// (0x0002c6fe) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc797,	// (0x0002c6fe) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7b8,	// (0x0002c71f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7b8,	// (0x0002c71f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7d9,	// (0x0002c740) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7d9,	// (0x0002c740) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb4,	// (0x0002fb1b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb4,	// (0x0002fb1b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6963,	// (0x000268ca) title_pane_g1_ParamLimits

0x6970,	// (0x000268d7) title_pane_g2_ParamLimits

0xf529,	// (0x0002f490) title_pane_g_ParamLimits

0x235b,	// (0x000222c2) aid_call2_pane

0x2353,	// (0x000222ba) aid_call_pane

0x2363,	// (0x000222ca) popup_clock_analogue_window_g1

0x2363,	// (0x000222ca) popup_clock_analogue_window_g2

0x7326,	// (0x0002728d) popup_clock_analogue_window_g3

0x732f,	// (0x00027296) popup_clock_analogue_window_g4

0x1a03,	// (0x0002196a) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x0002f62b) popup_clock_analogue_window_g

0x7337,	// (0x0002729e) popup_clock_analogue_window_t1

0x7385,	// (0x000272ec) clock_digital_number_pane_ParamLimits

0x7385,	// (0x000272ec) clock_digital_number_pane

0x7391,	// (0x000272f8) clock_digital_number_pane_cp02_ParamLimits

0x7391,	// (0x000272f8) clock_digital_number_pane_cp02

0x739d,	// (0x00027304) clock_digital_number_pane_cp03_ParamLimits

0x739d,	// (0x00027304) clock_digital_number_pane_cp03

0x73a9,	// (0x00027310) clock_digital_number_pane_cp04_ParamLimits

0x73a9,	// (0x00027310) clock_digital_number_pane_cp04

0x73b5,	// (0x0002731c) clock_digital_separator_pane_ParamLimits

0x73b5,	// (0x0002731c) clock_digital_separator_pane

0x73c1,	// (0x00027328) popup_clock_digital_window_t1_ParamLimits

0x73c1,	// (0x00027328) popup_clock_digital_window_t1

0x1a03,	// (0x0002196a) clock_digital_number_pane_g1

0x1a03,	// (0x0002196a) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x0002f636) clock_digital_number_pane_g

0x1a03,	// (0x0002196a) clock_digital_separator_pane_g1

0x1a03,	// (0x0002196a) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x0002f636) clock_digital_separator_pane_g

0x803f,	// (0x00027fa6) aid_fill_nsta_ParamLimits

0x818b,	// (0x000280f2) indicator_nsta_pane_ParamLimits

0x8304,	// (0x0002826b) popup_clock_analogue_window

0x8304,	// (0x0002826b) popup_clock_digital_window

0xb9f3,	// (0x0002b95a) grid_indicator_nsta_pane_ParamLimits

0xba1c,	// (0x0002b983) clock_nsta_pane_t2

0x0001,

0xfa86,	// (0x0002f9ed) clock_nsta_pane_t

0x7251,	// (0x000271b8) aid_size_max_handle

0x725b,	// (0x000271c2) aid_size_min_handle

0x27b5,	// (0x0002271c) editor_scroll_pane

0xc7f4,	// (0x0002c75b) ex_editor_pane

0x2043,	// (0x00021faa) scroll_pane_cp13

0x1de1,	// (0x00021d48) scroll_pane_cp14

0x2392,	// (0x000222f9) scroll_pane_cp36

0x7359,	// (0x000272c0) list_single_graphic_hl_pane_cp2_ParamLimits

0x7359,	// (0x000272c0) list_single_graphic_hl_pane_cp2

0xaf94,	// (0x0002aefb) list_single_graphic_hl_pane_ParamLimits

0xaf94,	// (0x0002aefb) list_single_graphic_hl_pane

0xd6aa,	// (0x0002d611) aid_size_min_hl_cp1

0xc7fc,	// (0x0002c763) list_highlight_pane_cp34_ParamLimits

0xc7fc,	// (0x0002c763) list_highlight_pane_cp34

0xc80d,	// (0x0002c774) list_single_graphic_hl_pane_g1_ParamLimits

0xc80d,	// (0x0002c774) list_single_graphic_hl_pane_g1

0x639d,	// (0x00026304) list_single_graphic_hl_pane_g2_ParamLimits

0x639d,	// (0x00026304) list_single_graphic_hl_pane_g2

0x639d,	// (0x00026304) list_single_graphic_hl_pane_g3_ParamLimits

0x639d,	// (0x00026304) list_single_graphic_hl_pane_g3

0x5c91,	// (0x00025bf8) list_single_graphic_hl_pane_g4_ParamLimits

0x5c91,	// (0x00025bf8) list_single_graphic_hl_pane_g4

0x63a9,	// (0x00026310) list_single_graphic_hl_pane_g5_ParamLimits

0x63a9,	// (0x00026310) list_single_graphic_hl_pane_g5

0x0004,

0xfbc5,	// (0x0002fb2c) list_single_graphic_hl_pane_g_ParamLimits

0xfbc5,	// (0x0002fb2c) list_single_graphic_hl_pane_g

0x63bd,	// (0x00026324) list_single_graphic_hl_pane_t1_ParamLimits

0x63bd,	// (0x00026324) list_single_graphic_hl_pane_t1

0xc81a,	// (0x0002c781) aid_size_min_hl_cp2

0xc823,	// (0x0002c78a) list_highlight_pane_cp34_cp2_ParamLimits

0xc823,	// (0x0002c78a) list_highlight_pane_cp34_cp2

0xc80d,	// (0x0002c774) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc80d,	// (0x0002c774) list_single_graphic_hl_pane_g1_cp2

0xc830,	// (0x0002c797) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc830,	// (0x0002c797) list_single_graphic_hl_pane_g2_cp2

0xc83c,	// (0x0002c7a3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc83c,	// (0x0002c7a3) list_single_graphic_hl_pane_g3_cp2

0x1de9,	// (0x00021d50) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1de9,	// (0x00021d50) list_single_graphic_hl_pane_g4_cp2

0xc84a,	// (0x0002c7b1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc84a,	// (0x0002c7b1) list_single_graphic_hl_pane_g5_cp2

0x7949,	// (0x000278b0) control_pane_g4_ParamLimits

0x7949,	// (0x000278b0) control_pane_g4

0x2053,	// (0x00021fba) bg_popup_sub_pane_cp10_ParamLimits

0xc030,	// (0x0002bf97) list_choice_list_pane_ParamLimits

0xc03f,	// (0x0002bfa6) scroll_pane_cp23

0x1bad,	// (0x00021b14) bg_popup_preview_window_pane_cp02_ParamLimits

0xc66f,	// (0x0002c5d6) list_preview_fixed_pane_ParamLimits

0xc685,	// (0x0002c5ec) list_preview_fixed_pane_cp_ParamLimits

0xc685,	// (0x0002c5ec) list_preview_fixed_pane_cp

0xc691,	// (0x0002c5f8) popup_preview_fixed_window_g1_ParamLimits

0xc691,	// (0x0002c5f8) popup_preview_fixed_window_g1

0xc69d,	// (0x0002c604) popup_preview_fixed_window_g2_ParamLimits

0xc69d,	// (0x0002c604) popup_preview_fixed_window_g2

0x0002,

0xfb54,	// (0x0002fabb) popup_preview_fixed_window_g_ParamLimits

0xfb54,	// (0x0002fabb) popup_preview_fixed_window_g

0x712d,	// (0x00027094) aid_navi_side_left_pane_ParamLimits

0x7142,	// (0x000270a9) aid_navi_side_right_pane_ParamLimits

0x715a,	// (0x000270c1) navi_icon_pane_stacon_ParamLimits

0x716e,	// (0x000270d5) navi_navi_pane_stacon_ParamLimits

0x715a,	// (0x000270c1) navi_text_pane_stacon_ParamLimits

0x19f9,	// (0x00021960) main_text_info_pane

0xc874,	// (0x0002c7db) listscroll_text_info_pane

0xc87c,	// (0x0002c7e3) list_text_info_pane_ParamLimits

0xc87c,	// (0x0002c7e3) list_text_info_pane

0xc88b,	// (0x0002c7f2) scroll_pane_cp24_ParamLimits

0xc88b,	// (0x0002c7f2) scroll_pane_cp24

0xc8a9,	// (0x0002c810) list_text_info_pane_t1_ParamLimits

0xc8a9,	// (0x0002c810) list_text_info_pane_t1

0x7ac6,	// (0x00027a2d) popup_fast_swap2_window_ParamLimits

0x7ac6,	// (0x00027a2d) popup_fast_swap2_window

0xc8dd,	// (0x0002c844) aid_size_cell_fast2

0x19f9,	// (0x00021960) bg_popup_window_pane_cp17

0xc8e7,	// (0x0002c84e) heading_pane_cp2

0xc8ef,	// (0x0002c856) listscroll_fast2_pane

0xc8f7,	// (0x0002c85e) grid_fast2_pane

0xc901,	// (0x0002c868) listscroll_fast2_pane_g1

0xc909,	// (0x0002c870) listscroll_fast2_pane_g2

0x0001,

0xfbd0,	// (0x0002fb37) listscroll_fast2_pane_g

0x2043,	// (0x00021faa) scroll_pane_cp26

0xc913,	// (0x0002c87a) cell_fast2_pane_ParamLimits

0xc913,	// (0x0002c87a) cell_fast2_pane

0xc928,	// (0x0002c88f) cell_fast2_pane_g1

0xc931,	// (0x0002c898) cell_fast2_pane_g2

0xc93a,	// (0x0002c8a1) cell_fast2_pane_g3

0x0002,

0xfbd5,	// (0x0002fb3c) cell_fast2_pane_g

0x1d18,	// (0x00021c7f) grid_highlight_pane_cp9

0x1d2d,	// (0x00021c94) main_eswt_pane_ParamLimits

0x1d2d,	// (0x00021c94) main_eswt_pane

0xc8a0,	// (0x0002c807) list_single_text_info_pane

0xc942,	// (0x0002c8a9) eswt_ctrl_button_pane

0xc942,	// (0x0002c8a9) eswt_ctrl_canvas_pane

0xc94a,	// (0x0002c8b1) eswt_ctrl_combo_pane

0xc942,	// (0x0002c8a9) eswt_ctrl_default_pane

0xc942,	// (0x0002c8a9) eswt_ctrl_label_pane

0xc952,	// (0x0002c8b9) eswt_ctrl_wait_pane

0xc95a,	// (0x0002c8c1) eswt_shell_pane

0x19f9,	// (0x00021960) listscroll_eswt_app_pane

0xc97a,	// (0x0002c8e1) popup_eswt_tasktip_window_ParamLimits

0xc97a,	// (0x0002c8e1) popup_eswt_tasktip_window

0x865e,	// (0x000285c5) bg_popup_window_pane_cp18

0xc993,	// (0x0002c8fa) eswt_control_pane_g1_ParamLimits

0xc993,	// (0x0002c8fa) eswt_control_pane_g1

0xc9a0,	// (0x0002c907) eswt_control_pane_g2_ParamLimits

0xc9a0,	// (0x0002c907) eswt_control_pane_g2

0xc9ad,	// (0x0002c914) eswt_control_pane_g3_ParamLimits

0xc9ad,	// (0x0002c914) eswt_control_pane_g3

0xc9ba,	// (0x0002c921) eswt_control_pane_g4_ParamLimits

0xc9ba,	// (0x0002c921) eswt_control_pane_g4

0x0003,

0xfbdc,	// (0x0002fb43) eswt_control_pane_g_ParamLimits

0xfbdc,	// (0x0002fb43) eswt_control_pane_g

0x1ea3,	// (0x00021e0a) bg_button_pane_ParamLimits

0x1ea3,	// (0x00021e0a) bg_button_pane

0x1d2d,	// (0x00021c94) common_borders_pane_copy2_ParamLimits

0x1d2d,	// (0x00021c94) common_borders_pane_copy2

0xc9c7,	// (0x0002c92e) control_button_pane_g1_ParamLimits

0xc9c7,	// (0x0002c92e) control_button_pane_g1

0xc9d3,	// (0x0002c93a) control_button_pane_g2_ParamLimits

0xc9d3,	// (0x0002c93a) control_button_pane_g2

0xc9df,	// (0x0002c946) control_button_pane_g3_ParamLimits

0xc9df,	// (0x0002c946) control_button_pane_g3

0x0002,

0xfbe5,	// (0x0002fb4c) control_button_pane_g_ParamLimits

0xfbe5,	// (0x0002fb4c) control_button_pane_g

0xc9f3,	// (0x0002c95a) control_button_pane_t1

0xca01,	// (0x0002c968) control_button_pane_t2

0x0001,

0xfbec,	// (0x0002fb53) control_button_pane_t

0x855a,	// (0x000284c1) bg_button_pane_g1

0x8562,	// (0x000284c9) bg_button_pane_g2

0x856a,	// (0x000284d1) bg_button_pane_g3

0x8572,	// (0x000284d9) bg_button_pane_g4

0x857a,	// (0x000284e1) bg_button_pane_g5

0x8582,	// (0x000284e9) bg_button_pane_g6

0x858a,	// (0x000284f1) bg_button_pane_g7

0x8592,	// (0x000284f9) bg_button_pane_g8

0x859a,	// (0x00028501) bg_button_pane_g9

0x0008,

0xf82d,	// (0x0002f794) bg_button_pane_g

0xbfeb,	// (0x0002bf52) common_borders_pane_ParamLimits

0xbfeb,	// (0x0002bf52) common_borders_pane

0xc993,	// (0x0002c8fa) eswt_control_pane_g1_copy1_ParamLimits

0xc993,	// (0x0002c8fa) eswt_control_pane_g1_copy1

0xc9a0,	// (0x0002c907) eswt_control_pane_g2_copy1_ParamLimits

0xc9a0,	// (0x0002c907) eswt_control_pane_g2_copy1

0xc9ad,	// (0x0002c914) eswt_control_pane_g3_copy1_ParamLimits

0xc9ad,	// (0x0002c914) eswt_control_pane_g3_copy1

0xc9ba,	// (0x0002c921) eswt_control_pane_g4_copy1_ParamLimits

0xc9ba,	// (0x0002c921) eswt_control_pane_g4_copy1

0xc026,	// (0x0002bf8d) bg_eswt_ctrl_canvas_pane_g1

0xbfeb,	// (0x0002bf52) common_borders_pane_cp2_ParamLimits

0xbfeb,	// (0x0002bf52) common_borders_pane_cp2

0xbfeb,	// (0x0002bf52) common_borders_pane_cp3_ParamLimits

0xbfeb,	// (0x0002bf52) common_borders_pane_cp3

0xca0f,	// (0x0002c976) separator_horizontal_pane

0xca17,	// (0x0002c97e) separator_vertical_pane

0xc993,	// (0x0002c8fa) eswt_control_pane_g1_copy2_ParamLimits

0xc993,	// (0x0002c8fa) eswt_control_pane_g1_copy2

0xc9a0,	// (0x0002c907) eswt_control_pane_g2_copy2_ParamLimits

0xc9a0,	// (0x0002c907) eswt_control_pane_g2_copy2

0xc9ad,	// (0x0002c914) eswt_control_pane_g3_copy2_ParamLimits

0xc9ad,	// (0x0002c914) eswt_control_pane_g3_copy2

0xc9ba,	// (0x0002c921) eswt_control_pane_g4_copy2_ParamLimits

0xc9ba,	// (0x0002c921) eswt_control_pane_g4_copy2

0x19f9,	// (0x00021960) common_borders_pane_cp4

0xca20,	// (0x0002c987) separator_horizontal_pane_g1

0xca29,	// (0x0002c990) separator_horizontal_pane_g2

0xca32,	// (0x0002c999) separator_horizontal_pane_g3

0x0002,

0xfbf1,	// (0x0002fb58) separator_horizontal_pane_g

0xc993,	// (0x0002c8fa) eswt_control_pane_g1_copy3_ParamLimits

0xc993,	// (0x0002c8fa) eswt_control_pane_g1_copy3

0xc9a0,	// (0x0002c907) eswt_control_pane_g2_copy3_ParamLimits

0xc9a0,	// (0x0002c907) eswt_control_pane_g2_copy3

0xc9ad,	// (0x0002c914) eswt_control_pane_g3_copy3_ParamLimits

0xc9ad,	// (0x0002c914) eswt_control_pane_g3_copy3

0xc9ba,	// (0x0002c921) eswt_control_pane_g4_copy3_ParamLimits

0xc9ba,	// (0x0002c921) eswt_control_pane_g4_copy3

0x19f9,	// (0x00021960) common_borders_pane_cp5

0xca3b,	// (0x0002c9a2) separator_vertical_pane_g1

0xca44,	// (0x0002c9ab) separator_vertical_pane_g2

0xca4d,	// (0x0002c9b4) separator_vertical_pane_g3

0x0002,

0xfbf8,	// (0x0002fb5f) separator_vertical_pane_g

0xc993,	// (0x0002c8fa) eswt_control_pane_g1_copy4_ParamLimits

0xc993,	// (0x0002c8fa) eswt_control_pane_g1_copy4

0xc9a0,	// (0x0002c907) eswt_control_pane_g2_copy4_ParamLimits

0xc9a0,	// (0x0002c907) eswt_control_pane_g2_copy4

0xc9ad,	// (0x0002c914) eswt_control_pane_g3_copy4_ParamLimits

0xc9ad,	// (0x0002c914) eswt_control_pane_g3_copy4

0xc9ba,	// (0x0002c921) eswt_control_pane_g4_copy4_ParamLimits

0xc9ba,	// (0x0002c921) eswt_control_pane_g4_copy4

0xca56,	// (0x0002c9bd) eswt_ctrl_combo_button_pane

0xca5e,	// (0x0002c9c5) eswt_ctrl_input_pane

0xca66,	// (0x0002c9cd) popup_choice_list_window_cp70

0xca6e,	// (0x0002c9d5) eswt_ctrl_input_pane_t1

0x19f9,	// (0x00021960) input_focus_pane_cp70

0xbfeb,	// (0x0002bf52) bg_button_pane_cp70_ParamLimits

0xbfeb,	// (0x0002bf52) bg_button_pane_cp70

0xca7c,	// (0x0002c9e3) eswt_ctrl_combo_button_pane_g1

0xca84,	// (0x0002c9eb) wait_bar_pane_cp70

0x865e,	// (0x000285c5) bg_popup_window_pane_cp70_ParamLimits

0x865e,	// (0x000285c5) bg_popup_window_pane_cp70

0xca8c,	// (0x0002c9f3) popup_eswt_tasktip_window_t1

0xcaa2,	// (0x0002ca09) wait_bar_pane_cp71_ParamLimits

0xcaa2,	// (0x0002ca09) wait_bar_pane_cp71

0xcaae,	// (0x0002ca15) grid_eswt_app_pane

0x2236,	// (0x0002219d) scroll_pane_cp70

0xcab7,	// (0x0002ca1e) cell_eswt_app_pane_ParamLimits

0xcab7,	// (0x0002ca1e) cell_eswt_app_pane

0xcae7,	// (0x0002ca4e) cell_eswt_app_pane_g1_ParamLimits

0xcae7,	// (0x0002ca4e) cell_eswt_app_pane_g1

0xcb16,	// (0x0002ca7d) cell_eswt_app_pane_g2_ParamLimits

0xcb16,	// (0x0002ca7d) cell_eswt_app_pane_g2

0x0001,

0xfbff,	// (0x0002fb66) cell_eswt_app_pane_g_ParamLimits

0xfbff,	// (0x0002fb66) cell_eswt_app_pane_g

0xcb3a,	// (0x0002caa1) cell_eswt_app_pane_t1_ParamLimits

0xcb3a,	// (0x0002caa1) cell_eswt_app_pane_t1

0xcb6c,	// (0x0002cad3) grid_highlight_pane_cp70_ParamLimits

0xcb6c,	// (0x0002cad3) grid_highlight_pane_cp70

0x26bb,	// (0x00022622) set_content_pane_g1

0x78df,	// (0x00027846) status_small_volume_pane

0x94e5,	// (0x0002944c) status_small_volume_pane_g1

0x94ed,	// (0x00029454) volume_small2_pane

0x94f6,	// (0x0002945d) volume_small2_pane_g1

0x94ff,	// (0x00029466) volume_small2_pane_g2

0x9508,	// (0x0002946f) volume_small2_pane_g3

0x9511,	// (0x00029478) volume_small2_pane_g4

0x951a,	// (0x00029481) volume_small2_pane_g5

0x9523,	// (0x0002948a) volume_small2_pane_g6

0x952c,	// (0x00029493) volume_small2_pane_g7

0x9535,	// (0x0002949c) volume_small2_pane_g8

0x953e,	// (0x000294a5) volume_small2_pane_g9

0x9547,	// (0x000294ae) volume_small2_pane_g10

0x0009,

0xfc04,	// (0x0002fb6b) volume_small2_pane_g

0xc3de,	// (0x0002c345) fep_vkb_top_text_pane_g1_ParamLimits

0xc3f9,	// (0x0002c360) fep_vkb_top_text_pane_t1_ParamLimits

0xc6a9,	// (0x0002c610) popup_preview_fixed_window_g3_ParamLimits

0xc6a9,	// (0x0002c610) popup_preview_fixed_window_g3

0x7f75,	// (0x00027edc) popup_toolbar_trans_pane

0xadbc,	// (0x0002ad23) aid_height_set_list_ParamLimits

0xadcd,	// (0x0002ad34) aid_size_parent_ParamLimits

0x2053,	// (0x00021fba) list_highlight_pane_cp2_ParamLimits

0x26bb,	// (0x00022622) set_content_pane_g1_ParamLimits

0xafb3,	// (0x0002af1a) list_single_image_pane_ParamLimits

0xafb3,	// (0x0002af1a) list_single_image_pane

0xcb78,	// (0x0002cadf) aid_size_cell_image_ParamLimits

0xcb78,	// (0x0002cadf) aid_size_cell_image

0xcb85,	// (0x0002caec) grid_single_image_pane_ParamLimits

0xcb85,	// (0x0002caec) grid_single_image_pane

0x2992,	// (0x000228f9) list_single_image_pane_g1_ParamLimits

0x2992,	// (0x000228f9) list_single_image_pane_g1

0xcb91,	// (0x0002caf8) list_single_image_pane_g2_ParamLimits

0xcb91,	// (0x0002caf8) list_single_image_pane_g2

0x0001,

0xfc19,	// (0x0002fb80) list_single_image_pane_g_ParamLimits

0xfc19,	// (0x0002fb80) list_single_image_pane_g

0xcba5,	// (0x0002cb0c) list_single_image_pane_t1_ParamLimits

0xcba5,	// (0x0002cb0c) list_single_image_pane_t1

0xcbbb,	// (0x0002cb22) cell_image_list_pane_ParamLimits

0xcbbb,	// (0x0002cb22) cell_image_list_pane

0xcbcf,	// (0x0002cb36) cell_image_list_pane_g1

0xcbd8,	// (0x0002cb3f) cell_image_list_pane_g2

0x0001,

0xfc1e,	// (0x0002fb85) cell_image_list_pane_g

0xcbe1,	// (0x0002cb48) aid_size_cell_tb_trans_pane

0x1ea3,	// (0x00021e0a) bg_tb_trans_pane

0xcbf3,	// (0x0002cb5a) grid_tb_trans_pane

0x855a,	// (0x000284c1) bg_tb_trans_pane_g1

0x8562,	// (0x000284c9) bg_tb_trans_pane_g2

0x856a,	// (0x000284d1) bg_tb_trans_pane_g3

0x8572,	// (0x000284d9) bg_tb_trans_pane_g4

0x857a,	// (0x000284e1) bg_tb_trans_pane_g5

0x8592,	// (0x000284f9) bg_tb_trans_pane_g6

0x859a,	// (0x00028501) bg_tb_trans_pane_g7

0x8582,	// (0x000284e9) bg_tb_trans_pane_g8

0x858a,	// (0x000284f1) bg_tb_trans_pane_g9

0x0008,

0xfc23,	// (0x0002fb8a) bg_tb_trans_pane_g

0xcc07,	// (0x0002cb6e) cell_toolbar_trans_pane_ParamLimits

0xcc07,	// (0x0002cb6e) cell_toolbar_trans_pane

0xc026,	// (0x0002bf8d) cell_toolbar_trans_pane_g1

0xbbf1,	// (0x0002bb58) list_form2_midp_pane_t1

0xbbff,	// (0x0002bb66) list_form2_midp_pane_t2

0x0001,

0xfacc,	// (0x0002fa33) list_form2_midp_pane_t

0xbc0d,	// (0x0002bb74) scroll_pane_cp51_ParamLimits

0xbdc9,	// (0x0002bd30) form2_midp_wait_pane_g1

0xbdd2,	// (0x0002bd39) form2_midp_wait_pane_g2

0xbddb,	// (0x0002bd42) form2_midp_wait_pane_g3

0x0002,

0xfae1,	// (0x0002fa48) form2_midp_wait_pane_g

0x1a69,	// (0x000219d0) list_highlight_pane_cp21_ParamLimits

0xbe23,	// (0x0002bd8a) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe32,	// (0x0002bd99) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5e25,	// (0x00025d8c) list_single_2graphic_im_pane_ParamLimits

0x5e25,	// (0x00025d8c) list_single_2graphic_im_pane

0xcc2d,	// (0x0002cb94) list_single_2graphic_im_pane_g1_ParamLimits

0xcc2d,	// (0x0002cb94) list_single_2graphic_im_pane_g1

0xcc3e,	// (0x0002cba5) list_single_2graphic_im_pane_g2_ParamLimits

0xcc3e,	// (0x0002cba5) list_single_2graphic_im_pane_g2

0xcc4a,	// (0x0002cbb1) list_single_2graphic_im_pane_g3_ParamLimits

0xcc4a,	// (0x0002cbb1) list_single_2graphic_im_pane_g3

0x0003,

0xfc36,	// (0x0002fb9d) list_single_2graphic_im_pane_g_ParamLimits

0xfc36,	// (0x0002fb9d) list_single_2graphic_im_pane_g

0xcc6a,	// (0x0002cbd1) list_single_2graphic_im_pane_t1_ParamLimits

0xcc6a,	// (0x0002cbd1) list_single_2graphic_im_pane_t1

0xc6b5,	// (0x0002c61c) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6b5,	// (0x0002c61c) list_single_graphic_2heading_pane_fp

0x620f,	// (0x00026176) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x620f,	// (0x00026176) list_single_graphic_2heading_pane_fp_g1

0xc6cb,	// (0x0002c632) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6cb,	// (0x0002c632) list_single_graphic_2heading_pane_fp_g2

0x56f4,	// (0x0002565b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x56f4,	// (0x0002565b) list_single_graphic_2heading_pane_fp_g3

0x61e4,	// (0x0002614b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x61e4,	// (0x0002614b) list_single_graphic_2heading_pane_fp_g4

0xc6d7,	// (0x0002c63e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6d7,	// (0x0002c63e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb64,	// (0x0002facb) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb64,	// (0x0002facb) list_single_graphic_2heading_pane_fp_g

0x63d3,	// (0x0002633a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x63d3,	// (0x0002633a) list_single_graphic_2heading_pane_fp_t1

0x6247,	// (0x000261ae) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6247,	// (0x000261ae) list_single_graphic_2heading_pane_fp_t2

0x63e9,	// (0x00026350) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x63e9,	// (0x00026350) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3f,	// (0x0002fba6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3f,	// (0x0002fba6) list_single_graphic_2heading_pane_fp_t

0xc0b2,	// (0x0002c019) fep_hwr_write_pane_g5_ParamLimits

0xc0b2,	// (0x0002c019) fep_hwr_write_pane_g5

0xc0be,	// (0x0002c025) fep_hwr_write_pane_g6_ParamLimits

0xc0be,	// (0x0002c025) fep_hwr_write_pane_g6

0xc95a,	// (0x0002c8c1) eswt_shell_pane_ParamLimits

0x865e,	// (0x000285c5) bg_popup_window_pane_cp18_ParamLimits

0xc98b,	// (0x0002c8f2) heading_pane_cp70

0xca8c,	// (0x0002c9f3) popup_eswt_tasktip_window_t1_ParamLimits

0x8094,	// (0x00027ffb) aid_touch_tab_arrow_left

0x80a3,	// (0x0002800a) aid_touch_tab_arrow_right

0x6981,	// (0x000268e8) title_pane_g3_ParamLimits

0x6981,	// (0x000268e8) title_pane_g3

0x1e3a,	// (0x00021da1) set_value_pane_g1

0x7f75,	// (0x00027edc) popup_toolbar_trans_pane_ParamLimits

0xcbe1,	// (0x0002cb48) aid_size_cell_tb_trans_pane_ParamLimits

0x1ea3,	// (0x00021e0a) bg_tb_trans_pane_ParamLimits

0xcbf3,	// (0x0002cb5a) grid_tb_trans_pane_ParamLimits

0x1bad,	// (0x00021b14) cont_note_pane_ParamLimits

0x1bad,	// (0x00021b14) cont_note_pane

0x1d2d,	// (0x00021c94) cont_snote2_single_text_pane_ParamLimits

0x1d2d,	// (0x00021c94) cont_snote2_single_text_pane

0x1d2d,	// (0x00021c94) cont_snote2_single_graphic_pane_ParamLimits

0x1d2d,	// (0x00021c94) cont_snote2_single_graphic_pane

0x8d00,	// (0x00028c67) cont_note_wait_pane_ParamLimits

0x8d00,	// (0x00028c67) cont_note_wait_pane

0x8d00,	// (0x00028c67) cont_note_image_pane_ParamLimits

0x8d00,	// (0x00028c67) cont_note_image_pane

0xcc9b,	// (0x0002cc02) popup_note2_window_g1_ParamLimits

0xcc9b,	// (0x0002cc02) popup_note2_window_g1

0xcccc,	// (0x0002cc33) popup_note2_window_t1_ParamLimits

0xcccc,	// (0x0002cc33) popup_note2_window_t1

0xcd11,	// (0x0002cc78) popup_note2_window_t2_ParamLimits

0xcd11,	// (0x0002cc78) popup_note2_window_t2

0xcd56,	// (0x0002ccbd) popup_note2_window_t3_ParamLimits

0xcd56,	// (0x0002ccbd) popup_note2_window_t3

0xcd9b,	// (0x0002cd02) popup_note2_window_t4_ParamLimits

0xcd9b,	// (0x0002cd02) popup_note2_window_t4

0x1c31,	// (0x00021b98) popup_note2_window_t5_ParamLimits

0x1c31,	// (0x00021b98) popup_note2_window_t5

0x0004,

0xfc4b,	// (0x0002fbb2) popup_note2_window_t_ParamLimits

0xfc4b,	// (0x0002fbb2) popup_note2_window_t

0xcdca,	// (0x0002cd31) popup_note2_image_window_g1_ParamLimits

0xcdca,	// (0x0002cd31) popup_note2_image_window_g1

0xcdd6,	// (0x0002cd3d) popup_note2_image_window_g2_ParamLimits

0xcdd6,	// (0x0002cd3d) popup_note2_image_window_g2

0x0001,

0xfc56,	// (0x0002fbbd) popup_note2_image_window_g_ParamLimits

0xfc56,	// (0x0002fbbd) popup_note2_image_window_g

0xcde8,	// (0x0002cd4f) popup_note2_image_window_t1_ParamLimits

0xcde8,	// (0x0002cd4f) popup_note2_image_window_t1

0xce00,	// (0x0002cd67) popup_note2_image_window_t2_ParamLimits

0xce00,	// (0x0002cd67) popup_note2_image_window_t2

0xce18,	// (0x0002cd7f) popup_note2_image_window_t3_ParamLimits

0xce18,	// (0x0002cd7f) popup_note2_image_window_t3

0x0002,

0xfc5b,	// (0x0002fbc2) popup_note2_image_window_t_ParamLimits

0xfc5b,	// (0x0002fbc2) popup_note2_image_window_t

0x8d0e,	// (0x00028c75) popup_note2_wait_window_g1_ParamLimits

0x8d0e,	// (0x00028c75) popup_note2_wait_window_g1

0x8d1a,	// (0x00028c81) popup_note2_wait_window_g2_ParamLimits

0x8d1a,	// (0x00028c81) popup_note2_wait_window_g2

0x8d26,	// (0x00028c8d) popup_note2_wait_window_g3_ParamLimits

0x8d26,	// (0x00028c8d) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x0002f776) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x0002f776) popup_note2_wait_window_g

0xce34,	// (0x0002cd9b) popup_note2_wait_window_t1_ParamLimits

0xce34,	// (0x0002cd9b) popup_note2_wait_window_t1

0xce52,	// (0x0002cdb9) popup_note2_wait_window_t2_ParamLimits

0xce52,	// (0x0002cdb9) popup_note2_wait_window_t2

0xce70,	// (0x0002cdd7) popup_note2_wait_window_t3_ParamLimits

0xce70,	// (0x0002cdd7) popup_note2_wait_window_t3

0xce82,	// (0x0002cde9) popup_note2_wait_window_t4_ParamLimits

0xce82,	// (0x0002cde9) popup_note2_wait_window_t4

0x0003,

0xfc62,	// (0x0002fbc9) popup_note2_wait_window_t_ParamLimits

0xfc62,	// (0x0002fbc9) popup_note2_wait_window_t

0xce94,	// (0x0002cdfb) wait_bar2_pane_ParamLimits

0xce94,	// (0x0002cdfb) wait_bar2_pane

0xceac,	// (0x0002ce13) popup_snote2_single_text_window_g1_ParamLimits

0xceac,	// (0x0002ce13) popup_snote2_single_text_window_g1

0xced4,	// (0x0002ce3b) popup_snote2_single_text_window_t1_ParamLimits

0xced4,	// (0x0002ce3b) popup_snote2_single_text_window_t1

0xcf20,	// (0x0002ce87) popup_snote2_single_text_window_t2_ParamLimits

0xcf20,	// (0x0002ce87) popup_snote2_single_text_window_t2

0xcf6c,	// (0x0002ced3) popup_snote2_single_text_window_t3_ParamLimits

0xcf6c,	// (0x0002ced3) popup_snote2_single_text_window_t3

0xcfad,	// (0x0002cf14) popup_snote2_single_text_window_t4_ParamLimits

0xcfad,	// (0x0002cf14) popup_snote2_single_text_window_t4

0xcfe3,	// (0x0002cf4a) popup_snote2_single_text_window_t5_ParamLimits

0xcfe3,	// (0x0002cf4a) popup_snote2_single_text_window_t5

0x0004,

0xfc6b,	// (0x0002fbd2) popup_snote2_single_text_window_t_ParamLimits

0xfc6b,	// (0x0002fbd2) popup_snote2_single_text_window_t

0xd00e,	// (0x0002cf75) popup_snote2_single_graphic_window_g1_ParamLimits

0xd00e,	// (0x0002cf75) popup_snote2_single_graphic_window_g1

0xd036,	// (0x0002cf9d) popup_snote2_single_graphic_window_g2_ParamLimits

0xd036,	// (0x0002cf9d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc76,	// (0x0002fbdd) popup_snote2_single_graphic_window_g_ParamLimits

0xfc76,	// (0x0002fbdd) popup_snote2_single_graphic_window_g

0xd05e,	// (0x0002cfc5) popup_snote2_single_graphic_window_t1_ParamLimits

0xd05e,	// (0x0002cfc5) popup_snote2_single_graphic_window_t1

0xd0aa,	// (0x0002d011) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0aa,	// (0x0002d011) popup_snote2_single_graphic_window_t2

0xcf6c,	// (0x0002ced3) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf6c,	// (0x0002ced3) popup_snote2_single_graphic_window_t3

0xcfad,	// (0x0002cf14) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfad,	// (0x0002cf14) popup_snote2_single_graphic_window_t4

0xcfe3,	// (0x0002cf4a) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfe3,	// (0x0002cf4a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7b,	// (0x0002fbe2) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7b,	// (0x0002fbe2) popup_snote2_single_graphic_window_t

0xbaca,	// (0x0002ba31) clock_nsta_pane_cp2_t1

0xbaca,	// (0x0002ba31) clock_nsta_pane_cp2_t2

0x0001,

0xfaa2,	// (0x0002fa09) clock_nsta_pane_cp2_t

0x5a03,	// (0x0002596a) form_field_data_wide_pane_g1_ParamLimits

0x1ece,	// (0x00021e35) form_field_data_wide_pane_g2_ParamLimits

0x1ece,	// (0x00021e35) form_field_data_wide_pane_g2

0x1eda,	// (0x00021e41) form_field_data_wide_pane_g3_ParamLimits

0x1eda,	// (0x00021e41) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x0002f5ae) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x0002f5ae) form_field_data_wide_pane_g

0xb9a6,	// (0x0002b90d) grid_touch_3_pane_ParamLimits

0xb9a6,	// (0x0002b90d) grid_touch_3_pane

0xd0f6,	// (0x0002d05d) cell_touch_3_pane_ParamLimits

0xd0f6,	// (0x0002d05d) cell_touch_3_pane

0xc026,	// (0x0002bf8d) cell_touch_3_pane_g1

0xc026,	// (0x0002bf8d) cell_touch_3_pane_g2

0x0001,

0xfb27,	// (0x0002fa8e) cell_touch_3_pane_g

0x1c63,	// (0x00021bca) cont_query_data_pane

0x1c6b,	// (0x00021bd2) cont_query_data_pane_cp1

0xd124,	// (0x0002d08b) button_value_adjust_pane_cp7

0xd12c,	// (0x0002d093) query_popup_pane_cp3

0x23c4,	// (0x0002232b) bg_popup_sub_pane_cp22_ParamLimits

0x743b,	// (0x000273a2) navi_navi_volume_pane_cp2

0x7453,	// (0x000273ba) popup_side_volume_key_window_g2

0x745f,	// (0x000273c6) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x0002f644) popup_side_volume_key_window_g

0x7479,	// (0x000273e0) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x0002f64b) popup_side_volume_key_window_t

0x769d,	// (0x00027604) popup_side_volume_key_window_ParamLimits

0x56e8,	// (0x0002564f) list_double_graphic_pane_g4_ParamLimits

0x56e8,	// (0x0002564f) list_double_graphic_pane_g4

0x5e6a,	// (0x00025dd1) list_single_2heading_msg_pane_ParamLimits

0x5e6a,	// (0x00025dd1) list_single_2heading_msg_pane

0x6409,	// (0x00026370) list_single_2heading_msg_pane_g1_ParamLimits

0x6409,	// (0x00026370) list_single_2heading_msg_pane_g1

0x5539,	// (0x000254a0) list_single_2heading_msg_pane_g2_ParamLimits

0x5539,	// (0x000254a0) list_single_2heading_msg_pane_g2

0x5f65,	// (0x00025ecc) list_single_2heading_msg_pane_g3_ParamLimits

0x5f65,	// (0x00025ecc) list_single_2heading_msg_pane_g3

0x6415,	// (0x0002637c) list_single_2heading_msg_pane_g4_ParamLimits

0x6415,	// (0x0002637c) list_single_2heading_msg_pane_g4

0x0003,

0xfc86,	// (0x0002fbed) list_single_2heading_msg_pane_g_ParamLimits

0xfc86,	// (0x0002fbed) list_single_2heading_msg_pane_g

0x642d,	// (0x00026394) list_single_2heading_msg_pane_t1_ParamLimits

0x642d,	// (0x00026394) list_single_2heading_msg_pane_t1

0x6455,	// (0x000263bc) list_single_2heading_msg_pane_t2_ParamLimits

0x6455,	// (0x000263bc) list_single_2heading_msg_pane_t2

0x6489,	// (0x000263f0) list_single_2heading_msg_pane_t3_ParamLimits

0x6489,	// (0x000263f0) list_single_2heading_msg_pane_t3

0x64c2,	// (0x00026429) list_single_2heading_msg_pane_t4_ParamLimits

0x64c2,	// (0x00026429) list_single_2heading_msg_pane_t4

0x0003,

0xfc8f,	// (0x0002fbf6) list_single_2heading_msg_pane_t_ParamLimits

0xfc8f,	// (0x0002fbf6) list_single_2heading_msg_pane_t

0x1a17,	// (0x0002197e) title_pane_g4_ParamLimits

0x1a17,	// (0x0002197e) title_pane_g4

0x707e,	// (0x00026fe5) title_pane_stacon_g3_ParamLimits

0x707e,	// (0x00026fe5) title_pane_stacon_g3

0xcc5e,	// (0x0002cbc5) list_single_2graphic_im_pane_g4_ParamLimits

0xcc5e,	// (0x0002cbc5) list_single_2graphic_im_pane_g4

0xaadf,	// (0x0002aa46) popup_side_volume_key_window_cp

0xb2fc,	// (0x0002b263) main_idle_act2_pane_t1

0x85a2,	// (0x00028509) toolbar_button_pane_g10

0x6f3c,	// (0x00026ea3) popup_toolbar_window_cp1

0xbabb,	// (0x0002ba22) clock_nsta_pane_cp_t1

0xbabb,	// (0x0002ba22) clock_nsta_pane_cp_t2

0x0001,

0xfa9d,	// (0x0002fa04) clock_nsta_pane_cp_t

0x743b,	// (0x000273a2) navi_navi_volume_pane_cp2_ParamLimits

0x7447,	// (0x000273ae) popup_side_volume_key_window_g1_ParamLimits

0x7453,	// (0x000273ba) popup_side_volume_key_window_g2_ParamLimits

0x745f,	// (0x000273c6) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x0002f644) popup_side_volume_key_window_g_ParamLimits

0x91f5,	// (0x0002915c) fep_hwr_aid_pane

0x19c9,	// (0x00021930) bg_fep_hwr_top_pane_g4_ParamLimits

0xc082,	// (0x0002bfe9) fep_hwr_top_pane_g1_ParamLimits

0xc094,	// (0x0002bffb) fep_hwr_top_pane_g2_ParamLimits

0x92ae,	// (0x00029215) fep_hwr_top_pane_g3_ParamLimits

0xfaf2,	// (0x0002fa59) fep_hwr_top_pane_g_ParamLimits

0x92c3,	// (0x0002922a) fep_hwr_top_text_pane_ParamLimits

0xa8a2,	// (0x0002a809) aid_touch_tab_arrow_arrow_2

0xa8ab,	// (0x0002a812) aid_touch_tab_arrow_left_2

0x9209,	// (0x00029170) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x9240,	// (0x000291a7) fep_hwr_prediction_pane

0xc1ed,	// (0x0002c154) fep_vkb_prediction_pane

0xc2ea,	// (0x0002c251) fep_vkb_side_pane_g3_ParamLimits

0xc2ea,	// (0x0002c251) fep_vkb_side_pane_g3

0xc296,	// (0x0002c1fd) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc72b,	// (0x0002c692) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc738,	// (0x0002c69f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9c,	// (0x0002fb03) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd151,	// (0x0002d0b8) fep_hwr_prediction_pane_g1

0x9550,	// (0x000294b7) fep_hwr_prediction_pane_g2

0x9558,	// (0x000294bf) fep_hwr_prediction_pane_g3

0x9560,	// (0x000294c7) fep_hwr_prediction_pane_g4

0x0003,

0xfc98,	// (0x0002fbff) fep_hwr_prediction_pane_g

0xd151,	// (0x0002d0b8) fep_vkb_prediction_pane_g1

0xd15b,	// (0x0002d0c2) fep_vkb_prediction_pane_g2

0xd163,	// (0x0002d0ca) fep_vkb_prediction_pane_g3

0xd16b,	// (0x0002d0d2) fep_vkb_prediction_pane_g4

0x0003,

0xfca1,	// (0x0002fc08) fep_vkb_prediction_pane_g

0x902d,	// (0x00028f94) slider_set_pane_g3

0x9041,	// (0x00028fa8) slider_set_pane_g4

0x9059,	// (0x00028fc0) slider_set_pane_g5

0x902d,	// (0x00028f94) slider_set_pane_g6

0x906f,	// (0x00028fd6) slider_set_pane_g7

0xaf2e,	// (0x0002ae95) slider_form_pane_g3

0xaf37,	// (0x0002ae9e) slider_form_pane_g4

0xaf3f,	// (0x0002aea6) slider_form_pane_g5

0xaf2e,	// (0x0002ae95) slider_form_pane_g6

0xaf47,	// (0x0002aeae) slider_form_pane_g7

0xb5a8,	// (0x0002b50f) slider_set_pane_vc_g3

0xb5b1,	// (0x0002b518) slider_set_pane_vc_g4

0xb5ba,	// (0x0002b521) slider_set_pane_vc_g5

0xb5a8,	// (0x0002b50f) slider_set_pane_vc_g6

0xb5c3,	// (0x0002b52a) slider_set_pane_vc_g7

0xb779,	// (0x0002b6e0) slider_form_pane_vc_g1

0xb782,	// (0x0002b6e9) slider_form_pane_vc_g2

0xb78b,	// (0x0002b6f2) slider_form_pane_vc_g3

0xb779,	// (0x0002b6e0) slider_form_pane_vc_g4

0xb794,	// (0x0002b6fb) slider_form_pane_vc_g5

0x0004,

0xfa6f,	// (0x0002f9d6) slider_form_pane_vc_g

0x19f9,	// (0x00021960) main_idle_act3_pane

0xd173,	// (0x0002d0da) ai3_links_pane

0xd17c,	// (0x0002d0e3) popup_ai3_data_window_ParamLimits

0xd17c,	// (0x0002d0e3) popup_ai3_data_window

0x19f9,	// (0x00021960) grid_ai3_links_pane

0xd194,	// (0x0002d0fb) cell_ai3_links_pane_ParamLimits

0xd194,	// (0x0002d0fb) cell_ai3_links_pane

0xd1ac,	// (0x0002d113) bg_popup_sub_pane_cp11

0xd1b9,	// (0x0002d120) cell_ai3_links_pane_g1

0x19f9,	// (0x00021960) bg_popup_sub_pane_cp12

0xd1de,	// (0x0002d145) heading_ai3_data_pane

0xd1e6,	// (0x0002d14d) list_ai3_gene_pane

0xd1f2,	// (0x0002d159) popup_ai3_data_window_g1

0xd1fa,	// (0x0002d161) heading_ai3_data_pane_g1

0xd202,	// (0x0002d169) heading_ai3_data_pane_t1

0xd210,	// (0x0002d177) list_double_ai3_gene_pane_ParamLimits

0xd210,	// (0x0002d177) list_double_ai3_gene_pane

0xd21d,	// (0x0002d184) list_single_ai3_gene_pane_ParamLimits

0xd21d,	// (0x0002d184) list_single_ai3_gene_pane

0xbfeb,	// (0x0002bf52) list_highlight_pane_cp7_ParamLimits

0xbfeb,	// (0x0002bf52) list_highlight_pane_cp7

0xd22a,	// (0x0002d191) list_single_a13_gene_pane_t1_ParamLimits

0xd22a,	// (0x0002d191) list_single_a13_gene_pane_t1

0xd241,	// (0x0002d1a8) list_single_ai3_gene_pane_g1

0xd24a,	// (0x0002d1b1) list_single_ai3_gene_pane_g2

0x0001,

0xfcaa,	// (0x0002fc11) list_single_ai3_gene_pane_g

0xd252,	// (0x0002d1b9) list_double_ai3_gene_pane_g1_ParamLimits

0xd252,	// (0x0002d1b9) list_double_ai3_gene_pane_g1

0xd25e,	// (0x0002d1c5) list_double_ai3_gene_pane_t1_ParamLimits

0xd25e,	// (0x0002d1c5) list_double_ai3_gene_pane_t1

0xd27a,	// (0x0002d1e1) list_double_ai3_gene_pane_t2_ParamLimits

0xd27a,	// (0x0002d1e1) list_double_ai3_gene_pane_t2

0xd28f,	// (0x0002d1f6) list_double_ai3_gene_pane_t3_ParamLimits

0xd28f,	// (0x0002d1f6) list_double_ai3_gene_pane_t3

0x0002,

0xfcaf,	// (0x0002fc16) list_double_ai3_gene_pane_t_ParamLimits

0xfcaf,	// (0x0002fc16) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x63ff,	// (0x00026366) aid_size_min_col_2

0xd13d,	// (0x0002d0a4) aid_size_min_msg_ParamLimits

0xd13d,	// (0x0002d0a4) aid_size_min_msg

0xc3ea,	// (0x0002c351) fep_vkb_top_text_pane_g2_ParamLimits

0xc3ea,	// (0x0002c351) fep_vkb_top_text_pane_g2

0x0001,

0xfb22,	// (0x0002fa89) fep_vkb_top_text_pane_g_ParamLimits

0xfb22,	// (0x0002fa89) fep_vkb_top_text_pane_g

0x19f9,	// (0x00021960) main_hc_apps_shell_pane

0xd2ac,	// (0x0002d213) grid_hc_apps_pane_ParamLimits

0xd2ac,	// (0x0002d213) grid_hc_apps_pane

0xd2be,	// (0x0002d225) list_hc_apps_pane

0xd2c6,	// (0x0002d22d) scroll_pane_cp37_ParamLimits

0xd2c6,	// (0x0002d22d) scroll_pane_cp37

0xd2d2,	// (0x0002d239) cell_hc_apps_pane_ParamLimits

0xd2d2,	// (0x0002d239) cell_hc_apps_pane

0xd380,	// (0x0002d2e7) cell_hc_apps_pane_g1_ParamLimits

0xd380,	// (0x0002d2e7) cell_hc_apps_pane_g1

0xd3b0,	// (0x0002d317) cell_hc_apps_pane_g2_ParamLimits

0xd3b0,	// (0x0002d317) cell_hc_apps_pane_g2

0xd3cc,	// (0x0002d333) cell_hc_apps_pane_g3_ParamLimits

0xd3cc,	// (0x0002d333) cell_hc_apps_pane_g3

0x0002,

0xfcb6,	// (0x0002fc1d) cell_hc_apps_pane_g_ParamLimits

0xfcb6,	// (0x0002fc1d) cell_hc_apps_pane_g

0xd3ee,	// (0x0002d355) cell_hc_apps_pane_t1_ParamLimits

0xd3ee,	// (0x0002d355) cell_hc_apps_pane_t1

0x1bad,	// (0x00021b14) grid_highlight_pane_cp10_ParamLimits

0x1bad,	// (0x00021b14) grid_highlight_pane_cp10

0xd42e,	// (0x0002d395) list_single_hc_apps_pane_ParamLimits

0xd42e,	// (0x0002d395) list_single_hc_apps_pane

0xd491,	// (0x0002d3f8) list_single_hc_apps_pane_g1

0x64e7,	// (0x0002644e) list_single_hc_apps_pane_g2

0x0001,

0xfcbd,	// (0x0002fc24) list_single_hc_apps_pane_g

0x6500,	// (0x00026467) list_single_hc_apps_pane_g2_copy1

0x651c,	// (0x00026483) list_single_hc_apps_pane_t1

0x1a69,	// (0x000219d0) bg_set_opt_pane_cp_ParamLimits

0x6a31,	// (0x00026998) setting_slider_pane_t1_ParamLimits

0x6a4a,	// (0x000269b1) setting_slider_pane_t2_ParamLimits

0x6a64,	// (0x000269cb) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002f4a0) setting_slider_pane_t_ParamLimits

0x6a7c,	// (0x000269e3) slider_set_pane_ParamLimits

0x795d,	// (0x000278c4) control_pane_g5_ParamLimits

0x795d,	// (0x000278c4) control_pane_g5

0xad81,	// (0x0002ace8) slider_set_pane_g1_ParamLimits

0x9021,	// (0x00028f88) slider_set_pane_g2_ParamLimits

0x902d,	// (0x00028f94) slider_set_pane_g3_ParamLimits

0x9041,	// (0x00028fa8) slider_set_pane_g4_ParamLimits

0x9059,	// (0x00028fc0) slider_set_pane_g5_ParamLimits

0x902d,	// (0x00028f94) slider_set_pane_g6_ParamLimits

0x906f,	// (0x00028fd6) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x0002f892) slider_set_pane_g_ParamLimits

0x2666,	// (0x000225cd) navi_icon_text_pane_ParamLimits

0x8055,	// (0x00027fbc) aid_fill_nsta_2_ParamLimits

0x8094,	// (0x00027ffb) aid_touch_tab_arrow_left_ParamLimits

0x80a3,	// (0x0002800a) aid_touch_tab_arrow_right_ParamLimits

0x8110,	// (0x00028077) clock_nsta_pane_ParamLimits

0xa884,	// (0x0002a7eb) navi_icon_pane_g1_ParamLimits

0xa890,	// (0x0002a7f7) navi_text_pane_t1_ParamLimits

0xbbcb,	// (0x0002bb32) navi_icon_text_pane_g1_ParamLimits

0xbbd7,	// (0x0002bb3e) navi_icon_text_pane_t1_ParamLimits

0xd491,	// (0x0002d3f8) list_single_hc_apps_pane_g1_ParamLimits

0x64e7,	// (0x0002644e) list_single_hc_apps_pane_g2_ParamLimits

0xfcbd,	// (0x0002fc24) list_single_hc_apps_pane_g_ParamLimits

0x6500,	// (0x00026467) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x651c,	// (0x00026483) list_single_hc_apps_pane_t1_ParamLimits

0x6875,	// (0x000267dc) popup_toolbar2_fixed_window_ParamLimits

0x6875,	// (0x000267dc) popup_toolbar2_fixed_window

0x7f6b,	// (0x00027ed2) popup_toolbar2_float_window

0x19f9,	// (0x00021960) bg_popup_sub_pane_cp27

0xd4aa,	// (0x0002d411) grid_toolbar2_float_pane

0x19f9,	// (0x00021960) bg_popup_sub_pane_cp26

0xd4aa,	// (0x0002d411) grid_toolbar2_fixed_pane

0xd4b2,	// (0x0002d419) cell_toolbar2_fixed_pane_ParamLimits

0xd4b2,	// (0x0002d419) cell_toolbar2_fixed_pane

0xd4c2,	// (0x0002d429) cell_toolbar2_fixed_pane_g1

0x84aa,	// (0x00028411) toolbar2_fixed_button_pane

0x855a,	// (0x000284c1) toolbar2_fixed_button_pane_g1

0x8562,	// (0x000284c9) toolbar2_fixed_button_pane_g2

0x856a,	// (0x000284d1) toolbar2_fixed_button_pane_g3

0x8572,	// (0x000284d9) toolbar2_fixed_button_pane_g4

0x857a,	// (0x000284e1) toolbar2_fixed_button_pane_g5

0x8582,	// (0x000284e9) toolbar2_fixed_button_pane_g6

0x858a,	// (0x000284f1) toolbar2_fixed_button_pane_g7

0x8592,	// (0x000284f9) toolbar2_fixed_button_pane_g8

0x859a,	// (0x00028501) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x0002f794) toolbar2_fixed_button_pane_g

0xd4cb,	// (0x0002d432) cell_toolbar2_float_pane_ParamLimits

0xd4cb,	// (0x0002d432) cell_toolbar2_float_pane

0xd4dc,	// (0x0002d443) cell_toolbar2_float_pane_g1

0x84aa,	// (0x00028411) toolbar2_fixed_button_pane_cp

0xc154,	// (0x0002c0bb) fep_vkb_accented_list_pane_ParamLimits

0xc154,	// (0x0002c0bb) fep_vkb_accented_list_pane

0x9411,	// (0x00029378) bg_popup_fep_shadow_pane_g9

0x27b5,	// (0x0002271c) bg_popup_fep_shadow_pane_cp3

0x202a,	// (0x00021f91) list_accented_list_pane

0xd4e5,	// (0x0002d44c) list_single_accented_list_pane_ParamLimits

0xd4e5,	// (0x0002d44c) list_single_accented_list_pane

0x27b5,	// (0x0002271c) list_highlight_pane_cp10

0xd4f6,	// (0x0002d45d) list_single_accented_list_pane_t1

0x7ebb,	// (0x00027e22) popup_slider_window_ParamLimits

0x7ebb,	// (0x00027e22) popup_slider_window

0xd134,	// (0x0002d09b) aid_indentation_list_msg

0xd5b4,	// (0x0002d51b) bg_popup_window_pane_cp19

0xd61c,	// (0x0002d583) popup_slider_window_g1

0xd638,	// (0x0002d59f) popup_slider_window_g2

0xd654,	// (0x0002d5bb) popup_slider_window_g3

0x0005,

0xfcc2,	// (0x0002fc29) popup_slider_window_g

0xd6c3,	// (0x0002d62a) popup_slider_window_t1

0xd737,	// (0x0002d69e) small_volume_slider_vertical_pane

0xc026,	// (0x0002bf8d) small_volume_slider_vertical_pane_g1

0xc026,	// (0x0002bf8d) small_volume_slider_vertical_pane_g2

0xd753,	// (0x0002d6ba) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd4,	// (0x0002fc3b) small_volume_slider_vertical_pane_g

0x6645,	// (0x000265ac) area_side_right_pane_ParamLimits

0x6645,	// (0x000265ac) area_side_right_pane

0x9568,	// (0x000294cf) aid_size_side_button_ParamLimits

0x9568,	// (0x000294cf) aid_size_side_button

0x957c,	// (0x000294e3) grid_sctrl_middle_pane_ParamLimits

0x957c,	// (0x000294e3) grid_sctrl_middle_pane

0x959b,	// (0x00029502) sctrl_sk_bottom_pane

0x95ac,	// (0x00029513) sctrl_sk_top_pane

0x95be,	// (0x00029525) aid_touch_sctrl_top

0x1bad,	// (0x00021b14) bg_sctrl_sk_pane_ParamLimits

0x1bad,	// (0x00021b14) bg_sctrl_sk_pane

0x95cb,	// (0x00029532) sctrl_sk_top_pane_g1

0x95d8,	// (0x0002953f) sctrl_sk_top_pane_t1

0x95be,	// (0x00029525) aid_touch_sctrl_bottom

0x1bad,	// (0x00021b14) bg_sctrl_sk_pane_cp_ParamLimits

0x1bad,	// (0x00021b14) bg_sctrl_sk_pane_cp

0x95f3,	// (0x0002955a) sctrl_sk_bottom_pane_g1

0x95d8,	// (0x0002953f) sctrl_sk_bottom_pane_t1

0x95fc,	// (0x00029563) cell_sctrl_middle_pane_ParamLimits

0x95fc,	// (0x00029563) cell_sctrl_middle_pane

0x9617,	// (0x0002957e) aid_touch_sctrl_middle_ParamLimits

0x9617,	// (0x0002957e) aid_touch_sctrl_middle

0x1ea3,	// (0x00021e0a) bg_sctrl_middle_pane_ParamLimits

0x1ea3,	// (0x00021e0a) bg_sctrl_middle_pane

0xc296,	// (0x0002c1fd) cell_sctrl_middle_pane_g1_ParamLimits

0xc296,	// (0x0002c1fd) cell_sctrl_middle_pane_g1

0x9629,	// (0x00029590) cell_sctrl_middle_pane_g2_ParamLimits

0x9629,	// (0x00029590) cell_sctrl_middle_pane_g2

0x0001,

0xfce0,	// (0x0002fc47) cell_sctrl_middle_pane_g_ParamLimits

0xfce0,	// (0x0002fc47) cell_sctrl_middle_pane_g

0x855a,	// (0x000284c1) bg_sctrl_middle_pane_g1

0x8562,	// (0x000284c9) bg_sctrl_middle_pane_g2

0x856a,	// (0x000284d1) bg_sctrl_middle_pane_g3

0x8572,	// (0x000284d9) bg_sctrl_middle_pane_g4

0x857a,	// (0x000284e1) bg_sctrl_middle_pane_g5

0x8582,	// (0x000284e9) bg_sctrl_middle_pane_g6

0x858a,	// (0x000284f1) bg_sctrl_middle_pane_g7

0x8592,	// (0x000284f9) bg_sctrl_middle_pane_g8

0x0007,

0xfce5,	// (0x0002fc4c) bg_sctrl_middle_pane_g

0x859a,	// (0x00028501) bg_sctrl_middle_pane_g8_copy1

0x855a,	// (0x000284c1) bg_sctrl_sk_pane_g1

0x8562,	// (0x000284c9) bg_sctrl_sk_pane_g2

0x856a,	// (0x000284d1) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x0002f794) bg_sctrl_sk_pane_g

0x1d7b,	// (0x00021ce2) aid_size_touch_scroll_bar

0x8572,	// (0x000284d9) bg_sctrl_sk_pane_g4

0x857a,	// (0x000284e1) bg_sctrl_sk_pane_g5

0x8582,	// (0x000284e9) bg_sctrl_sk_pane_g6

0x858a,	// (0x000284f1) bg_sctrl_sk_pane_g7

0x8592,	// (0x000284f9) bg_sctrl_sk_pane_g8

0x859a,	// (0x00028501) bg_sctrl_sk_pane_g9

0x7b24,	// (0x00027a8b) popup_fep_china_hwr2_fs_candidate_window

0x7b2e,	// (0x00027a95) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7b2e,	// (0x00027a95) popup_fep_china_hwr2_fs_control_window

0xc296,	// (0x0002c1fd) sctrl_sk_top_pane_g2

0x0001,

0xfcdb,	// (0x0002fc42) sctrl_sk_top_pane_g

0xd75c,	// (0x0002d6c3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd75c,	// (0x0002d6c3) aid_fep_china_hwr2_fs_cell

0xd76e,	// (0x0002d6d5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd76e,	// (0x0002d6d5) bg_popup_fep_shadow_pane_cp4

0xd785,	// (0x0002d6ec) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd785,	// (0x0002d6ec) bg_popup_fep_shadow_pane_cp5

0xd797,	// (0x0002d6fe) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd797,	// (0x0002d6fe) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a7,	// (0x0002d70e) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7af,	// (0x0002d716) aid_fep_china_hwr2_fs_candi_cell

0x19f9,	// (0x00021960) bg_popup_fep_shadow_pane_cp6

0xd7b9,	// (0x0002d720) popup_fep_china_hwr2_fs_candidate_grid

0xd7c3,	// (0x0002d72a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7c3,	// (0x0002d72a) cell_fep_china_hwr2_fs_funtion_grid

0xc026,	// (0x0002bf8d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7db,	// (0x0002d742) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7db,	// (0x0002d742) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7e9,	// (0x0002d750) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7e9,	// (0x0002d750) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf6,	// (0x0002fc5d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf6,	// (0x0002fc5d) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7ff,	// (0x0002d766) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7ff,	// (0x0002d766) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd814,	// (0x0002d77b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd814,	// (0x0002d77b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfb,	// (0x0002fc62) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfb,	// (0x0002fc62) cell_fep_china_hwr2_fs_funtion_grid_t

0xd830,	// (0x0002d797) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd838,	// (0x0002d79f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd840,	// (0x0002d7a7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd00,	// (0x0002fc67) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd848,	// (0x0002d7af) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd848,	// (0x0002d7af) cell_fep_china_hwr2_fs_candidate_grid

0xd861,	// (0x0002d7c8) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd869,	// (0x0002d7d0) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc026,	// (0x0002bf8d) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc026,	// (0x0002bf8d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb27,	// (0x0002fa8e) cell_fep_china_hwr2_fs_candidate_grid_g

0xd871,	// (0x0002d7d8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8123,	// (0x0002808a) clock_nsta_pane_cp_24_ParamLimits

0x8123,	// (0x0002808a) clock_nsta_pane_cp_24

0x81a1,	// (0x00028108) indicator_nsta_pane_cp_24_ParamLimits

0x81a1,	// (0x00028108) indicator_nsta_pane_cp_24

0xa700,	// (0x0002a667) heading_pane_g1

0x0001,

0xf892,	// (0x0002f7f9) heading_pane_g

0xb145,	// (0x0002b0ac) grid_sct_catagory_button_pane

0xb175,	// (0x0002b0dc) scroll_pane_cp5_ParamLimits

0xbc19,	// (0x0002bb80) button_value_adjust_pane_cp5_ParamLimits

0xbc19,	// (0x0002bb80) button_value_adjust_pane_cp5

0xbcf8,	// (0x0002bc5f) form2_midp_time_pane_ParamLimits

0xd87f,	// (0x0002d7e6) cell_sct_catagory_button_pane_ParamLimits

0xd87f,	// (0x0002d7e6) cell_sct_catagory_button_pane

0xbfeb,	// (0x0002bf52) bg_button_pane_cp01_ParamLimits

0xbfeb,	// (0x0002bf52) bg_button_pane_cp01

0xc026,	// (0x0002bf8d) cell_sct_catagory_button_pane_g1

0x7efa,	// (0x00027e61) popup_tb_extension_window

0xd891,	// (0x0002d7f8) aid_size_cell_ext_ParamLimits

0xd891,	// (0x0002d7f8) aid_size_cell_ext

0x1bad,	// (0x00021b14) bg_tb_trans_pane_cp1_ParamLimits

0x1bad,	// (0x00021b14) bg_tb_trans_pane_cp1

0xd8b1,	// (0x0002d818) grid_tb_ext_pane_ParamLimits

0xd8b1,	// (0x0002d818) grid_tb_ext_pane

0xd8e1,	// (0x0002d848) cell_tb_ext_pane_ParamLimits

0xd8e1,	// (0x0002d848) cell_tb_ext_pane

0xd8f8,	// (0x0002d85f) cell_tb_ext_pane_g1_ParamLimits

0xd8f8,	// (0x0002d85f) cell_tb_ext_pane_g1

0xd915,	// (0x0002d87c) cell_tb_ext_pane_t1

0x1bad,	// (0x00021b14) list_highlight_pane_cp11_ParamLimits

0x1bad,	// (0x00021b14) list_highlight_pane_cp11

0x6894,	// (0x000267fb) popup_uni_indicator_window_ParamLimits

0x6894,	// (0x000267fb) popup_uni_indicator_window

0x1ea3,	// (0x00021e0a) bg_popup_sub_pane_cp14

0xd931,	// (0x0002d898) list_uniindi_pane

0xd93d,	// (0x0002d8a4) uniindi_top_pane

0x1bad,	// (0x00021b14) bg_uniindi_top_pane

0xd95c,	// (0x0002d8c3) uniindi_top_pane_g1

0xd972,	// (0x0002d8d9) uniindi_top_pane_g2

0x0003,

0xfd07,	// (0x0002fc6e) uniindi_top_pane_g

0xd99c,	// (0x0002d903) uniindi_top_pane_t1

0xd9c6,	// (0x0002d92d) list_single_uniindi_pane_ParamLimits

0xd9c6,	// (0x0002d92d) list_single_uniindi_pane

0xc026,	// (0x0002bf8d) bg_uniindi_top_pane_g1

0xd9d9,	// (0x0002d940) list_single_uniindi_pane_g1

0xd9ec,	// (0x0002d953) list_single_uniindi_pane_t1

0x19f9,	// (0x00021960) control_bg_pane

0xda11,	// (0x0002d978) bg_sctrl_sk_pane_cp1

0xda1a,	// (0x0002d981) bg_sctrl_sk_pane_cp2

0xda23,	// (0x0002d98a) control_bg_pane_g1

0xda2c,	// (0x0002d993) control_bg_pane_g2

0x0001,

0xfd10,	// (0x0002fc77) control_bg_pane_g

0xba5f,	// (0x0002b9c6) cell_indicator_nsta_pane_g1_ParamLimits

0xba6d,	// (0x0002b9d4) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8b,	// (0x0002f9f2) cell_indicator_nsta_pane_g_ParamLimits

0x61d1,	// (0x00026138) form2_midp_time_pane_t1_ParamLimits

0x1d2d,	// (0x00021c94) main_idle_act4_pane_ParamLimits

0x1d2d,	// (0x00021c94) main_idle_act4_pane

0x7efa,	// (0x00027e61) popup_tb_extension_window_ParamLimits

0xd8d1,	// (0x0002d838) tb_ext_find_pane_ParamLimits

0xd8d1,	// (0x0002d838) tb_ext_find_pane

0xda35,	// (0x0002d99c) ai_gene_pane_1_cp1

0x2836,	// (0x0002279d) ai_gene_pane_2_cp1

0xda3d,	// (0x0002d9a4) list_single_idle_plugin_calendar_pane

0xda46,	// (0x0002d9ad) list_single_idle_plugin_notification_pane

0xda4f,	// (0x0002d9b6) list_single_idle_plugin_player_pane

0xda58,	// (0x0002d9bf) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda58,	// (0x0002d9bf) list_single_idle_plugin_shortcut_pane

0xda7a,	// (0x0002d9e1) main_idle_act4_pane_t1

0xda8c,	// (0x0002d9f3) main_idle_act4_pane_t2

0x0001,

0xfd15,	// (0x0002fc7c) main_idle_act4_pane_t

0xda9e,	// (0x0002da05) middle_sk_idle_act4_pane_ParamLimits

0xda9e,	// (0x0002da05) middle_sk_idle_act4_pane

0xdab4,	// (0x0002da1b) popup_clock_digital_analogue_window_cp2

0xdace,	// (0x0002da35) shortcut_wheel_idle_act4_pane_ParamLimits

0xdace,	// (0x0002da35) shortcut_wheel_idle_act4_pane

0xc026,	// (0x0002bf8d) shortcut_wheel_idle_act4_pane_g1

0xc026,	// (0x0002bf8d) shortcut_wheel_idle_act4_pane_g2

0xc026,	// (0x0002bf8d) shortcut_wheel_idle_act4_pane_g3

0xc026,	// (0x0002bf8d) shortcut_wheel_idle_act4_pane_g4

0xc026,	// (0x0002bf8d) shortcut_wheel_idle_act4_pane_g5

0xdae2,	// (0x0002da49) shortcut_wheel_idle_act4_pane_g6

0xdaea,	// (0x0002da51) shortcut_wheel_idle_act4_pane_g7

0xdaf2,	// (0x0002da59) shortcut_wheel_idle_act4_pane_g8

0xdafa,	// (0x0002da61) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1a,	// (0x0002fc81) shortcut_wheel_idle_act4_pane_g

0xc296,	// (0x0002c1fd) middle_sk_idle_act4_pane_g1_ParamLimits

0xc296,	// (0x0002c1fd) middle_sk_idle_act4_pane_g1

0xdb5e,	// (0x0002dac5) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb5e,	// (0x0002dac5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3d,	// (0x0002fca4) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3d,	// (0x0002fca4) middle_sk_idle_act4_pane_g

0xdb6a,	// (0x0002dad1) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb6a,	// (0x0002dad1) middle_sk_idle_act4_pane_t1

0xdb87,	// (0x0002daee) grid_ai_shortcut_pane_ParamLimits

0xdb87,	// (0x0002daee) grid_ai_shortcut_pane

0xdba0,	// (0x0002db07) list_highlight_pane_cp16_ParamLimits

0xdba0,	// (0x0002db07) list_highlight_pane_cp16

0xdbad,	// (0x0002db14) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbad,	// (0x0002db14) list_single_idle_plugin_shortcut_pane_g1

0xdbb9,	// (0x0002db20) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb9,	// (0x0002db20) list_single_idle_plugin_shortcut_pane_g2

0xdbd1,	// (0x0002db38) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbd1,	// (0x0002db38) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd42,	// (0x0002fca9) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd42,	// (0x0002fca9) list_single_idle_plugin_shortcut_pane_g

0xdbe4,	// (0x0002db4b) cell_ai_shortcut_pane_ParamLimits

0xdbe4,	// (0x0002db4b) cell_ai_shortcut_pane

0xdc08,	// (0x0002db6f) cell_ai_shortcut_pane_g1_ParamLimits

0xdc08,	// (0x0002db6f) cell_ai_shortcut_pane_g1

0xda35,	// (0x0002d99c) ai_gene_pane_1_cp2

0xdc2a,	// (0x0002db91) ai_gene_pane_2_cp2

0xdc32,	// (0x0002db99) list_highlight_pane_cp15

0xdc3b,	// (0x0002dba2) list_single_idle_plugin_calendar_pane_g1

0xdc32,	// (0x0002db99) list_highlight_pane_cp17

0xdc43,	// (0x0002dbaa) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc4b,	// (0x0002dbb2) list_single_idle_plugin_player_pane_g1

0xb39e,	// (0x0002b305) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd49,	// (0x0002fcb0) list_single_idle_plugin_player_pane_g

0xdc53,	// (0x0002dbba) list_single_idle_plugin_player_pane_t1

0xdc61,	// (0x0002dbc8) list_single_idle_plugin_player_pane_t2

0xdc6f,	// (0x0002dbd6) list_single_idle_plugin_player_pane_t3

0xdc7d,	// (0x0002dbe4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4e,	// (0x0002fcb5) list_single_idle_plugin_player_pane_t

0xdc8b,	// (0x0002dbf2) wait_bar_pane_cp15

0xdc93,	// (0x0002dbfa) grid_ai_notification_pane

0xb39e,	// (0x0002b305) list_single_idle_plugin_notification_pane_g1

0xdc9c,	// (0x0002dc03) cell_ai_notification_pane_ParamLimits

0xdc9c,	// (0x0002dc03) cell_ai_notification_pane

0xdca9,	// (0x0002dc10) cell_ai_notification_pane_g1

0xdcb1,	// (0x0002dc18) cell_ai_notification_pane_t1

0xdcbf,	// (0x0002dc26) tb_ext_find_button_pane

0xdcc7,	// (0x0002dc2e) tb_ext_find_pane_g1

0xdccf,	// (0x0002dc36) tb_ext_find_pane_t1

0x2363,	// (0x000222ca) tb_ext_find_button_pane_g1

0xdcdd,	// (0x0002dc44) tb_ext_find_button_pane_g2

0x0001,

0xfd57,	// (0x0002fcbe) tb_ext_find_button_pane_g

0xda7a,	// (0x0002d9e1) main_idle_act4_pane_t1_ParamLimits

0xda8c,	// (0x0002d9f3) main_idle_act4_pane_t2_ParamLimits

0xfd15,	// (0x0002fc7c) main_idle_act4_pane_t_ParamLimits

0xdab4,	// (0x0002da1b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdac2,	// (0x0002da29) sat_plugin_idle_act4_pane_ParamLimits

0xdac2,	// (0x0002da29) sat_plugin_idle_act4_pane

0xdce6,	// (0x0002dc4d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdce6,	// (0x0002dc4d) sat_plugin_idle_act4_pane_t1

0xdcf9,	// (0x0002dc60) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf9,	// (0x0002dc60) sat_plugin_idle_act4_pane_t2

0xdd0c,	// (0x0002dc73) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd0c,	// (0x0002dc73) sat_plugin_idle_act4_pane_t3

0xdd1f,	// (0x0002dc86) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd1f,	// (0x0002dc86) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5c,	// (0x0002fcc3) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5c,	// (0x0002fcc3) sat_plugin_idle_act4_pane_t

0x67dd,	// (0x00026744) popup_battery_window_ParamLimits

0x67dd,	// (0x00026744) popup_battery_window

0x1bad,	// (0x00021b14) bg_popup_sub_pane_cp25_ParamLimits

0x1bad,	// (0x00021b14) bg_popup_sub_pane_cp25

0xdd32,	// (0x0002dc99) popup_battery_window_g1_ParamLimits

0xdd32,	// (0x0002dc99) popup_battery_window_g1

0xdd3e,	// (0x0002dca5) popup_battery_window_t1_ParamLimits

0xdd3e,	// (0x0002dca5) popup_battery_window_t1

0xdd50,	// (0x0002dcb7) popup_battery_window_t2_ParamLimits

0xdd50,	// (0x0002dcb7) popup_battery_window_t2

0x0001,

0xfd65,	// (0x0002fccc) popup_battery_window_t_ParamLimits

0xfd65,	// (0x0002fccc) popup_battery_window_t

0x76f1,	// (0x00027658) midp_canvas_pane_ParamLimits

0x776a,	// (0x000276d1) midp_keypad_pane_ParamLimits

0x776a,	// (0x000276d1) midp_keypad_pane

0x2053,	// (0x00021fba) main_midp_pane_ParamLimits

0xbad9,	// (0x0002ba40) signal_pane_g2_cp_ParamLimits

0xdd6d,	// (0x0002dcd4) aid_size_cell_midp_keypad_ParamLimits

0xdd6d,	// (0x0002dcd4) aid_size_cell_midp_keypad

0xdd87,	// (0x0002dcee) midp_keyp_game_grid_pane_ParamLimits

0xdd87,	// (0x0002dcee) midp_keyp_game_grid_pane

0xdda7,	// (0x0002dd0e) midp_keyp_rocker_pane_ParamLimits

0xdda7,	// (0x0002dd0e) midp_keyp_rocker_pane

0xdde0,	// (0x0002dd47) midp_keyp_sk_left_pane_ParamLimits

0xdde0,	// (0x0002dd47) midp_keyp_sk_left_pane

0xde3a,	// (0x0002dda1) midp_keyp_sk_right_pane_ParamLimits

0xde3a,	// (0x0002dda1) midp_keyp_sk_right_pane

0x19f9,	// (0x00021960) bg_button_pane_cp03

0xde94,	// (0x0002ddfb) midp_keyp_sk_left_pane_g1

0x19f9,	// (0x00021960) bg_button_pane_cp04

0xde94,	// (0x0002ddfb) midp_keyp_sk_right_pane_g1

0xc026,	// (0x0002bf8d) midp_keyp_rocker_pane_g1

0xde9d,	// (0x0002de04) keyp_game_cell_pane_ParamLimits

0xde9d,	// (0x0002de04) keyp_game_cell_pane

0x19f9,	// (0x00021960) bg_button_pane_cp02

0xdeb0,	// (0x0002de17) keyp_game_cell_pane_g1

0x6813,	// (0x0002677a) popup_fep_vkb2_window_ParamLimits

0x6813,	// (0x0002677a) popup_fep_vkb2_window

0x9647,	// (0x000295ae) aid_size_cell_vkb2_ParamLimits

0x9647,	// (0x000295ae) aid_size_cell_vkb2

0x9693,	// (0x000295fa) popup_fep_vkb2_window_g1_ParamLimits

0x9693,	// (0x000295fa) popup_fep_vkb2_window_g1

0x96db,	// (0x00029642) vkb2_area_bottom_pane_ParamLimits

0x96db,	// (0x00029642) vkb2_area_bottom_pane

0x9727,	// (0x0002968e) vkb2_area_keypad_pane_ParamLimits

0x9727,	// (0x0002968e) vkb2_area_keypad_pane

0x9769,	// (0x000296d0) vkb2_area_top_pane_ParamLimits

0x9769,	// (0x000296d0) vkb2_area_top_pane

0x97e8,	// (0x0002974f) vkb2_top_entry_pane_ParamLimits

0x97e8,	// (0x0002974f) vkb2_top_entry_pane

0x9812,	// (0x00029779) vkb2_top_grid_left_pane_ParamLimits

0x9812,	// (0x00029779) vkb2_top_grid_left_pane

0x9831,	// (0x00029798) vkb2_top_grid_right_pane_ParamLimits

0x9831,	// (0x00029798) vkb2_top_grid_right_pane

0x9850,	// (0x000297b7) vkb2_cell_keypad_pane_ParamLimits

0x9850,	// (0x000297b7) vkb2_cell_keypad_pane

0x9921,	// (0x00029888) vkb2_area_bottom_grid_pane_ParamLimits

0x9921,	// (0x00029888) vkb2_area_bottom_grid_pane

0x9947,	// (0x000298ae) vkb2_area_bottom_pane_g1_ParamLimits

0x9947,	// (0x000298ae) vkb2_area_bottom_pane_g1

0x996b,	// (0x000298d2) vkb2_area_bottom_pane_g2_ParamLimits

0x996b,	// (0x000298d2) vkb2_area_bottom_pane_g2

0x9999,	// (0x00029900) vkb2_area_bottom_pane_g3_ParamLimits

0x9999,	// (0x00029900) vkb2_area_bottom_pane_g3

0x0002,

0xfd6a,	// (0x0002fcd1) vkb2_area_bottom_pane_g_ParamLimits

0xfd6a,	// (0x0002fcd1) vkb2_area_bottom_pane_g

0x99fa,	// (0x00029961) vkb2_top_cell_left_pane_ParamLimits

0x99fa,	// (0x00029961) vkb2_top_cell_left_pane

0xdec1,	// (0x0002de28) vkb2_top_entry_pane_g1_ParamLimits

0xdec1,	// (0x0002de28) vkb2_top_entry_pane_g1

0xdecf,	// (0x0002de36) vkb2_top_entry_pane_t1_ParamLimits

0xdecf,	// (0x0002de36) vkb2_top_entry_pane_t1

0xdf01,	// (0x0002de68) vkb2_top_entry_pane_t2_ParamLimits

0xdf01,	// (0x0002de68) vkb2_top_entry_pane_t2

0xdf33,	// (0x0002de9a) vkb2_top_entry_pane_t3_ParamLimits

0xdf33,	// (0x0002de9a) vkb2_top_entry_pane_t3

0x0002,

0xfd71,	// (0x0002fcd8) vkb2_top_entry_pane_t_ParamLimits

0xfd71,	// (0x0002fcd8) vkb2_top_entry_pane_t

0x9a47,	// (0x000299ae) vkb2_top_grid_right_pane_g1_ParamLimits

0x9a47,	// (0x000299ae) vkb2_top_grid_right_pane_g1

0x9a5d,	// (0x000299c4) vkb2_top_grid_right_pane_g2_ParamLimits

0x9a5d,	// (0x000299c4) vkb2_top_grid_right_pane_g2

0x9a75,	// (0x000299dc) vkb2_top_grid_right_pane_g3_ParamLimits

0x9a75,	// (0x000299dc) vkb2_top_grid_right_pane_g3

0x9a8d,	// (0x000299f4) vkb2_top_grid_right_pane_g4_ParamLimits

0x9a8d,	// (0x000299f4) vkb2_top_grid_right_pane_g4

0x0003,

0xfd78,	// (0x0002fcdf) vkb2_top_grid_right_pane_g_ParamLimits

0xfd78,	// (0x0002fcdf) vkb2_top_grid_right_pane_g

0x9aa3,	// (0x00029a0a) vkb2_top_cell_left_pane_g1

0x9aba,	// (0x00029a21) vkb2_cell_keypad_pane_g1_ParamLimits

0x9aba,	// (0x00029a21) vkb2_cell_keypad_pane_g1

0xdf57,	// (0x0002debe) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf57,	// (0x0002debe) vkb2_cell_keypad_pane_t1

0x9ac8,	// (0x00029a2f) vkb2_cell_bottom_grid_pane_ParamLimits

0x9ac8,	// (0x00029a2f) vkb2_cell_bottom_grid_pane

0x9b01,	// (0x00029a68) vkb2_cell_bottom_grid_pane_g1

0xdb02,	// (0x0002da69) aid_call2_pane_cp02

0xdb0a,	// (0x0002da71) aid_call_pane_cp02

0xdb12,	// (0x0002da79) clock_digital_number_pane_cp10

0xdb1a,	// (0x0002da81) clock_digital_number_pane_cp11

0xdb22,	// (0x0002da89) clock_digital_number_pane_cp12

0xdb2a,	// (0x0002da91) clock_digital_number_pane_cp13

0xdb32,	// (0x0002da99) clock_digital_separator_pane_cp10

0x2363,	// (0x000222ca) popup_clock_digital_analogue_window_cp2_g1

0x2363,	// (0x000222ca) popup_clock_digital_analogue_window_cp2_g2

0xdb3a,	// (0x0002daa1) popup_clock_digital_analogue_window_cp2_g3

0x2363,	// (0x000222ca) popup_clock_digital_analogue_window_cp2_g4

0xdb3a,	// (0x0002daa1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2d,	// (0x0002fc94) popup_clock_digital_analogue_window_cp2_g

0xdb42,	// (0x0002daa9) popup_clock_digital_analogue_window_cp2_t1

0xdb50,	// (0x0002dab7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd38,	// (0x0002fc9f) popup_clock_digital_analogue_window_cp2_t

0xc026,	// (0x0002bf8d) clock_digital_number_pane_cp10_g1

0xc026,	// (0x0002bf8d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb27,	// (0x0002fa8e) clock_digital_number_pane_cp10_g

0xc026,	// (0x0002bf8d) clock_digital_separator_pane_cp10_g1

0xc026,	// (0x0002bf8d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb27,	// (0x0002fa8e) clock_digital_separator_pane_cp10_g

0xd97e,	// (0x0002d8e5) uniindi_top_pane_g3

0xd98f,	// (0x0002d8f6) uniindi_top_pane_g4

0x98db,	// (0x00029842) vkb2_row_keypad_pane_ParamLimits

0x98db,	// (0x00029842) vkb2_row_keypad_pane

0x9b21,	// (0x00029a88) vkb2_cell_t_keypad_pane_ParamLimits

0x9b21,	// (0x00029a88) vkb2_cell_t_keypad_pane

0x9b31,	// (0x00029a98) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9b31,	// (0x00029a98) vkb2_cell_t_keypad_pane_cp08

0x9b44,	// (0x00029aab) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9b44,	// (0x00029aab) vkb2_cell_t_keypad_pane_cp09

0x9b58,	// (0x00029abf) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9b58,	// (0x00029abf) vkb2_cell_t_keypad_pane_cp01

0x9b69,	// (0x00029ad0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9b69,	// (0x00029ad0) vkb2_cell_t_keypad_pane_cp02

0x9b7a,	// (0x00029ae1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9b7a,	// (0x00029ae1) vkb2_cell_t_keypad_pane_cp03

0x9b8b,	// (0x00029af2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9b8b,	// (0x00029af2) vkb2_cell_t_keypad_pane_cp04

0x9b9c,	// (0x00029b03) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9b9c,	// (0x00029b03) vkb2_cell_t_keypad_pane_cp05

0x9bad,	// (0x00029b14) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9bad,	// (0x00029b14) vkb2_cell_t_keypad_pane_cp06

0x9bbe,	// (0x00029b25) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9bbe,	// (0x00029b25) vkb2_cell_t_keypad_pane_cp07

0x9bcf,	// (0x00029b36) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9bcf,	// (0x00029b36) vkb2_cell_t_keypad_pane_cp10

0xc296,	// (0x0002c1fd) vkb2_cell_t_keypad_pane_g1

0xdf6e,	// (0x0002ded5) vkb2_cell_t_keypad_pane_t1

0x19f9,	// (0x00021960) popup_grid_graphic2_window

0xdf80,	// (0x0002dee7) aid_size_cell_graphic2_ParamLimits

0xdf80,	// (0x0002dee7) aid_size_cell_graphic2

0xdfb8,	// (0x0002df1f) bg_popup_window_pane_cp21_ParamLimits

0xdfb8,	// (0x0002df1f) bg_popup_window_pane_cp21

0xdfc6,	// (0x0002df2d) graphic2_pages_pane_ParamLimits

0xdfc6,	// (0x0002df2d) graphic2_pages_pane

0xe00c,	// (0x0002df73) grid_graphic2_control_pane_ParamLimits

0xe00c,	// (0x0002df73) grid_graphic2_control_pane

0xe04a,	// (0x0002dfb1) grid_graphic2_pane_ParamLimits

0xe04a,	// (0x0002dfb1) grid_graphic2_pane

0xe0be,	// (0x0002e025) cell_graphic2_pane

0x19f9,	// (0x00021960) main_comp_mode_pane

0xd1e6,	// (0x0002d14d) list_ai3_gene_pane_ParamLimits

0xd5b4,	// (0x0002d51b) bg_popup_window_pane_cp19_ParamLimits

0xd5c0,	// (0x0002d527) bg_touch_area_indi_pane_ParamLimits

0xd5c0,	// (0x0002d527) bg_touch_area_indi_pane

0xd5d6,	// (0x0002d53d) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5d6,	// (0x0002d53d) bg_touch_area_indi_pane_cp01

0xd5ec,	// (0x0002d553) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ec,	// (0x0002d553) bg_touch_area_indi_pane_cp02

0xd602,	// (0x0002d569) bg_touch_area_indi_pane_cp03_ParamLimits

0xd602,	// (0x0002d569) bg_touch_area_indi_pane_cp03

0xd61c,	// (0x0002d583) popup_slider_window_g1_ParamLimits

0xd638,	// (0x0002d59f) popup_slider_window_g2_ParamLimits

0xd654,	// (0x0002d5bb) popup_slider_window_g3_ParamLimits

0xfcc2,	// (0x0002fc29) popup_slider_window_g_ParamLimits

0xd6c3,	// (0x0002d62a) popup_slider_window_t1_ParamLimits

0xd737,	// (0x0002d69e) small_volume_slider_vertical_pane_ParamLimits

0xe0be,	// (0x0002e025) cell_graphic2_pane_ParamLimits

0xe10d,	// (0x0002e074) bg_button_pane_cp10_ParamLimits

0xe10d,	// (0x0002e074) bg_button_pane_cp10

0xe120,	// (0x0002e087) bg_button_pane_cp11_ParamLimits

0xe120,	// (0x0002e087) bg_button_pane_cp11

0xe133,	// (0x0002e09a) graphic2_pages_pane_g1_ParamLimits

0xe133,	// (0x0002e09a) graphic2_pages_pane_g1

0xe14e,	// (0x0002e0b5) graphic2_pages_pane_g2_ParamLimits

0xe14e,	// (0x0002e0b5) graphic2_pages_pane_g2

0x0001,

0xfd86,	// (0x0002fced) graphic2_pages_pane_g_ParamLimits

0xfd86,	// (0x0002fced) graphic2_pages_pane_g

0xe166,	// (0x0002e0cd) graphic2_pages_pane_t1_ParamLimits

0xe166,	// (0x0002e0cd) graphic2_pages_pane_t1

0xe17e,	// (0x0002e0e5) cell_graphic2_control_pane_ParamLimits

0xe17e,	// (0x0002e0e5) cell_graphic2_control_pane

0xe19c,	// (0x0002e103) cell_graphic2_pane_g1_ParamLimits

0xe19c,	// (0x0002e103) cell_graphic2_pane_g1

0xe1a9,	// (0x0002e110) cell_graphic2_pane_g2_ParamLimits

0xe1a9,	// (0x0002e110) cell_graphic2_pane_g2

0xe1b6,	// (0x0002e11d) cell_graphic2_pane_g3_ParamLimits

0xe1b6,	// (0x0002e11d) cell_graphic2_pane_g3

0xe1c3,	// (0x0002e12a) cell_graphic2_pane_g4_ParamLimits

0xe1c3,	// (0x0002e12a) cell_graphic2_pane_g4

0xe1d0,	// (0x0002e137) cell_graphic2_pane_g5_ParamLimits

0xe1d0,	// (0x0002e137) cell_graphic2_pane_g5

0x0004,

0xfd8b,	// (0x0002fcf2) cell_graphic2_pane_g_ParamLimits

0xfd8b,	// (0x0002fcf2) cell_graphic2_pane_g

0xe1e9,	// (0x0002e150) cell_graphic2_pane_t1_ParamLimits

0xe1e9,	// (0x0002e150) cell_graphic2_pane_t1

0x865e,	// (0x000285c5) grid_highlight_pane_cp11_ParamLimits

0x865e,	// (0x000285c5) grid_highlight_pane_cp11

0x1bad,	// (0x00021b14) bg_button_pane_cp05

0xe21f,	// (0x0002e186) cell_graphic2_control_pane_g1

0xc026,	// (0x0002bf8d) bg_touch_area_indi_pane_g1

0xe247,	// (0x0002e1ae) aid_cmod_rocker_key_size

0xe251,	// (0x0002e1b8) aid_cmode_itu_key_size

0xe25b,	// (0x0002e1c2) main_cmode_video_pane

0xe265,	// (0x0002e1cc) main_comp_mode_itu_pane

0xe271,	// (0x0002e1d8) main_comp_mode_rocker_pane

0xe27d,	// (0x0002e1e4) cell_cmode_rocker_pane_ParamLimits

0xe27d,	// (0x0002e1e4) cell_cmode_rocker_pane

0xe28f,	// (0x0002e1f6) cell_cmode_itu_pane_ParamLimits

0xe28f,	// (0x0002e1f6) cell_cmode_itu_pane

0x1ea3,	// (0x00021e0a) bg_button_pane_cp06_ParamLimits

0x1ea3,	// (0x00021e0a) bg_button_pane_cp06

0xc296,	// (0x0002c1fd) cell_cmode_rocker_pane_g1_ParamLimits

0xc296,	// (0x0002c1fd) cell_cmode_rocker_pane_g1

0xd7db,	// (0x0002d742) cell_cmode_rocker_pane_g2_ParamLimits

0xd7db,	// (0x0002d742) cell_cmode_rocker_pane_g2

0x0001,

0xfd9b,	// (0x0002fd02) cell_cmode_rocker_pane_g_ParamLimits

0xfd9b,	// (0x0002fd02) cell_cmode_rocker_pane_g

0x19f9,	// (0x00021960) bg_button_pane_cp07

0xe2a4,	// (0x0002e20b) cell_cmode_itu_pane_g1

0xe2ad,	// (0x0002e214) cell_cmode_itu_pane_t1

0xe2bb,	// (0x0002e222) cell_cmode_itu_pane_t2

0x0001,

0xfda0,	// (0x0002fd07) cell_cmode_itu_pane_t

0xda01,	// (0x0002d968) aid_touch_ctrl_left

0xda09,	// (0x0002d970) aid_touch_ctrl_right

0x19f9,	// (0x00021960) compa_mode_pane

0xe2c9,	// (0x0002e230) aid_cmod_rocker_key_size_cp

0xe2d3,	// (0x0002e23a) aid_cmode_itu_key_size_cp

0xe2dd,	// (0x0002e244) compa_mode_pane_g1

0xe2e5,	// (0x0002e24c) compa_mode_pane_g2

0xe2ed,	// (0x0002e254) compa_mode_pane_g3

0x0002,

0xfda5,	// (0x0002fd0c) compa_mode_pane_g

0xe2f5,	// (0x0002e25c) main_comp_mode_itu_pane_cp

0xe2fd,	// (0x0002e264) main_comp_mode_rocker_pane_cp

0xe305,	// (0x0002e26c) cell_cmode_itu_pane_cp_ParamLimits

0xe305,	// (0x0002e26c) cell_cmode_itu_pane_cp

0xe31a,	// (0x0002e281) cell_cmode_rocker_pane_cp_ParamLimits

0xe31a,	// (0x0002e281) cell_cmode_rocker_pane_cp

0x1ea3,	// (0x00021e0a) bg_button_pane_cp06_cp_ParamLimits

0x1ea3,	// (0x00021e0a) bg_button_pane_cp06_cp

0xc296,	// (0x0002c1fd) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc296,	// (0x0002c1fd) cell_cmode_rocker_pane_g1_cp

0xc026,	// (0x0002bf8d) cell_cmode_rocker_pane_g2_cp

0x19f9,	// (0x00021960) bg_button_pane_cp07_cp

0xe32c,	// (0x0002e293) cell_cmode_itu_pane_g1_cp

0xe335,	// (0x0002e29c) cell_cmode_itu_pane_t1_cp

0xe335,	// (0x0002e29c) cell_cmode_itu_pane_t2_cp

0xaf1b,	// (0x0002ae82) settings_code_pane_cp2

0x1a69,	// (0x000219d0) bg_popup_window_pane_cp3_ParamLimits

0x1cc6,	// (0x00021c2d) heading_pane_cp3_ParamLimits

0x1cd5,	// (0x00021c3c) listscroll_popup_graphic_pane_ParamLimits

0x91f5,	// (0x0002915c) fep_hwr_aid_pane_ParamLimits

0x95be,	// (0x00029525) aid_touch_sctrl_top_ParamLimits

0x95cb,	// (0x00029532) sctrl_sk_top_pane_g1_ParamLimits

0xc296,	// (0x0002c1fd) sctrl_sk_top_pane_g2_ParamLimits

0xfcdb,	// (0x0002fc42) sctrl_sk_top_pane_g_ParamLimits

0x95d8,	// (0x0002953f) sctrl_sk_top_pane_t1_ParamLimits

0x95be,	// (0x00029525) aid_touch_sctrl_bottom_ParamLimits

0x95d8,	// (0x0002953f) sctrl_sk_bottom_pane_t1_ParamLimits

0xd94a,	// (0x0002d8b1) aid_area_touch_clock

0x97af,	// (0x00029716) aid_vkb2_area_top_pane_cell_ParamLimits

0x97af,	// (0x00029716) aid_vkb2_area_top_pane_cell

0x98fd,	// (0x00029864) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x98fd,	// (0x00029864) aid_vkb2_area_bottom_pane_cell

0xdeb9,	// (0x0002de20) popup_char_count_window

0xe343,	// (0x0002e2aa) popup_char_count_window_g1

0xe34c,	// (0x0002e2b3) popup_char_count_window_g2

0xe355,	// (0x0002e2bc) popup_char_count_window_g3

0x0002,

0xfdac,	// (0x0002fd13) popup_char_count_window_g

0xe35e,	// (0x0002e2c5) popup_char_count_window_t1

0x9671,	// (0x000295d8) popup_fep_char_preview_window_ParamLimits

0x9671,	// (0x000295d8) popup_fep_char_preview_window

0x97cd,	// (0x00029734) vkb2_top_candi_pane_ParamLimits

0x97cd,	// (0x00029734) vkb2_top_candi_pane

0xe36c,	// (0x0002e2d3) cell_vkb2_top_candi_pane_ParamLimits

0xe36c,	// (0x0002e2d3) cell_vkb2_top_candi_pane

0x8d00,	// (0x00028c67) bg_popup_fep_char_preview_window_ParamLimits

0x8d00,	// (0x00028c67) bg_popup_fep_char_preview_window

0x9be4,	// (0x00029b4b) popup_fep_char_preview_window_t1_ParamLimits

0x9be4,	// (0x00029b4b) popup_fep_char_preview_window_t1

0xe3b6,	// (0x0002e31d) bg_popup_fep_char_preview_window_g1

0xe3be,	// (0x0002e325) bg_popup_fep_char_preview_window_g2

0xe3c6,	// (0x0002e32d) bg_popup_fep_char_preview_window_g3

0xe3ce,	// (0x0002e335) bg_popup_fep_char_preview_window_g4

0xe3d6,	// (0x0002e33d) bg_popup_fep_char_preview_window_g5

0xe3de,	// (0x0002e345) bg_popup_fep_char_preview_window_g6

0xe3e6,	// (0x0002e34d) bg_popup_fep_char_preview_window_g7

0xe3ee,	// (0x0002e355) bg_popup_fep_char_preview_window_g8

0xe3f6,	// (0x0002e35d) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb3,	// (0x0002fd1a) bg_popup_fep_char_preview_window_g

0xc296,	// (0x0002c1fd) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc296,	// (0x0002c1fd) cell_vkb2_top_candi_pane_g1

0xc5ad,	// (0x0002c514) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5ad,	// (0x0002c514) cell_vkb2_top_candi_pane_g2

0xc5ce,	// (0x0002c535) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5ce,	// (0x0002c535) cell_vkb2_top_candi_pane_g3

0x9c26,	// (0x00029b8d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9c26,	// (0x00029b8d) cell_vkb2_top_candi_pane_g4

0xe3fe,	// (0x0002e365) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3fe,	// (0x0002e365) cell_vkb2_top_candi_pane_g5

0xd7db,	// (0x0002d742) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7db,	// (0x0002d742) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc8,	// (0x0002fd2f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc8,	// (0x0002fd2f) cell_vkb2_top_candi_pane_g

0x9c47,	// (0x00029bae) cell_vkb2_top_candi_pane_t1

0x900d,	// (0x00028f74) aid_size_touch_slider_mark_ParamLimits

0x900d,	// (0x00028f74) aid_size_touch_slider_mark

0xdffc,	// (0x0002df63) grid_graphic2_catg_pane_ParamLimits

0xdffc,	// (0x0002df63) grid_graphic2_catg_pane

0xe09a,	// (0x0002e001) popup_grid_graphic2_window_t1_ParamLimits

0xe09a,	// (0x0002e001) popup_grid_graphic2_window_t1

0xe0ac,	// (0x0002e013) popup_grid_graphic2_window_t2_ParamLimits

0xe0ac,	// (0x0002e013) popup_grid_graphic2_window_t2

0x0001,

0xfd81,	// (0x0002fce8) popup_grid_graphic2_window_t_ParamLimits

0xfd81,	// (0x0002fce8) popup_grid_graphic2_window_t

0x1bad,	// (0x00021b14) bg_button_pane_cp05_ParamLimits

0xe21f,	// (0x0002e186) cell_graphic2_control_pane_g1_ParamLimits

0xe41f,	// (0x0002e386) cell_graphic2_catg_pane_ParamLimits

0xe41f,	// (0x0002e386) cell_graphic2_catg_pane

0x19f9,	// (0x00021960) bg_button_pane_cp12

0xe431,	// (0x0002e398) cell_graphic2_catg_pane_g1

0xd915,	// (0x0002d87c) cell_tb_ext_pane_t1_ParamLimits

0x9a1a,	// (0x00029981) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9a1a,	// (0x00029981) vkb2_top_cell_right_narrow_pane

0x9a32,	// (0x00029999) vkb2_top_cell_right_wide_pane_ParamLimits

0x9a32,	// (0x00029999) vkb2_top_cell_right_wide_pane

0x91e7,	// (0x0002914e) bg_vkb2_func_pane_ParamLimits

0x91e7,	// (0x0002914e) bg_vkb2_func_pane

0x9aa3,	// (0x00029a0a) vkb2_top_cell_left_pane_g1_ParamLimits

0x91e7,	// (0x0002914e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x91e7,	// (0x0002914e) bg_vkb2_fuc_pane_cp03

0x9b01,	// (0x00029a68) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8562,	// (0x000284c9) bg_vkb2_func_pane_g1

0x856a,	// (0x000284d1) bg_vkb2_func_pane_g2

0x857a,	// (0x000284e1) bg_vkb2_func_pane_g3

0x8572,	// (0x000284d9) bg_vkb2_func_pane_g4

0x8582,	// (0x000284e9) bg_vkb2_func_pane_g5

0x858a,	// (0x000284f1) bg_vkb2_func_pane_g6

0x8592,	// (0x000284f9) bg_vkb2_func_pane_g7

0x859a,	// (0x00028501) bg_vkb2_func_pane_g8

0x855a,	// (0x000284c1) bg_vkb2_func_pane_g9

0x0008,

0xfdd5,	// (0x0002fd3c) bg_vkb2_func_pane_g

0x91e7,	// (0x0002914e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x91e7,	// (0x0002914e) bg_vkb2_fuc_pane_cp01

0x9aa3,	// (0x00029a0a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9aa3,	// (0x00029a0a) vkb2_top_cell_right_wide_pane_g1

0x91e7,	// (0x0002914e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x91e7,	// (0x0002914e) bg_vkb2_fuc_pane_cp02

0x9c66,	// (0x00029bcd) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9c66,	// (0x00029bcd) vkb2_top_cell_right_narrow_pane_g1

0xd52e,	// (0x0002d495) aid_touch_area_decrease_ParamLimits

0xd52e,	// (0x0002d495) aid_touch_area_decrease

0xd552,	// (0x0002d4b9) aid_touch_area_increase_ParamLimits

0xd552,	// (0x0002d4b9) aid_touch_area_increase

0xd56a,	// (0x0002d4d1) aid_touch_area_mute_ParamLimits

0xd56a,	// (0x0002d4d1) aid_touch_area_mute

0xd586,	// (0x0002d4ed) aid_touch_area_slider_ParamLimits

0xd586,	// (0x0002d4ed) aid_touch_area_slider

0xd670,	// (0x0002d5d7) popup_slider_window_g4_ParamLimits

0xd670,	// (0x0002d5d7) popup_slider_window_g4

0xd688,	// (0x0002d5ef) popup_slider_window_g5_ParamLimits

0xd688,	// (0x0002d5ef) popup_slider_window_g5

0xd6b3,	// (0x0002d61a) popup_slider_window_g6_ParamLimits

0xd6b3,	// (0x0002d61a) popup_slider_window_g6

0xd6f1,	// (0x0002d658) popup_slider_window_t2_ParamLimits

0xd6f1,	// (0x0002d658) popup_slider_window_t2

0x0001,

0xfccf,	// (0x0002fc36) popup_slider_window_t_ParamLimits

0xfccf,	// (0x0002fc36) popup_slider_window_t

0xd709,	// (0x0002d670) slider_pane_ParamLimits

0xd709,	// (0x0002d670) slider_pane

0xe43a,	// (0x0002e3a1) slider_pane_g1_ParamLimits

0xe43a,	// (0x0002e3a1) slider_pane_g1

0xe44e,	// (0x0002e3b5) slider_pane_g2_ParamLimits

0xe44e,	// (0x0002e3b5) slider_pane_g2

0xe464,	// (0x0002e3cb) slider_pane_g3_ParamLimits

0xe464,	// (0x0002e3cb) slider_pane_g3

0x0003,

0xfde8,	// (0x0002fd4f) slider_pane_g_ParamLimits

0xfde8,	// (0x0002fd4f) slider_pane_g

0x7f56,	// (0x00027ebd) popup_tb_float_extension_window_ParamLimits

0x7f56,	// (0x00027ebd) popup_tb_float_extension_window

0xe490,	// (0x0002e3f7) aid_size_cell_tb_float_ext

0x19f9,	// (0x00021960) bg_popup_sub_window_cp28

0xe49c,	// (0x0002e403) grid_tb_float_ext_pane

0xe4a6,	// (0x0002e40d) cell_tb_float_ext_pane_ParamLimits

0xe4a6,	// (0x0002e40d) cell_tb_float_ext_pane

0xe4c0,	// (0x0002e427) cell_tb_float_ext_pane_g1

0xe4c9,	// (0x0002e430) grid_highlight_pane_cp12

0x9328,	// (0x0002928f) cell_last_hwr_side_pane_ParamLimits

0x9328,	// (0x0002928f) cell_last_hwr_side_pane

0xc026,	// (0x0002bf8d) cell_last_hwr_side_pane_g1

0xe4d2,	// (0x0002e439) cell_last_hwr_side_pane_g2

0x0001,

0xfdf1,	// (0x0002fd58) cell_last_hwr_side_pane_g

0x99c9,	// (0x00029930) vkb2_area_bottom_space_btn_pane_ParamLimits

0x99c9,	// (0x00029930) vkb2_area_bottom_space_btn_pane

0xc296,	// (0x0002c1fd) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf6e,	// (0x0002ded5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9c47,	// (0x00029bae) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9c86,	// (0x00029bed) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9c86,	// (0x00029bed) vkb2_area_bottom_space_btn_pane_g1

0x9cc0,	// (0x00029c27) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9cc0,	// (0x00029c27) vkb2_area_bottom_space_btn_pane_g2

0x9cf6,	// (0x00029c5d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9cf6,	// (0x00029c5d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf6,	// (0x0002fd5d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf6,	// (0x0002fd5d) vkb2_area_bottom_space_btn_pane_g

0x929c,	// (0x00029203) cel_fep_hwr_func_pane_ParamLimits

0x929c,	// (0x00029203) cel_fep_hwr_func_pane

0x92d8,	// (0x0002923f) cell_hwr_side_button_pane_ParamLimits

0x92d8,	// (0x0002923f) cell_hwr_side_button_pane

0xd94a,	// (0x0002d8b1) aid_area_touch_clock_ParamLimits

0x1bad,	// (0x00021b14) bg_uniindi_top_pane_ParamLimits

0xd95c,	// (0x0002d8c3) uniindi_top_pane_g1_ParamLimits

0xd972,	// (0x0002d8d9) uniindi_top_pane_g2_ParamLimits

0xd97e,	// (0x0002d8e5) uniindi_top_pane_g3_ParamLimits

0xd98f,	// (0x0002d8f6) uniindi_top_pane_g4_ParamLimits

0xfd07,	// (0x0002fc6e) uniindi_top_pane_g_ParamLimits

0xd99c,	// (0x0002d903) uniindi_top_pane_t1_ParamLimits

0x1bad,	// (0x00021b14) bg_vkb2_func_pane_cp01_ParamLimits

0x1bad,	// (0x00021b14) bg_vkb2_func_pane_cp01

0xe4db,	// (0x0002e442) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4db,	// (0x0002e442) cel_fep_hwr_func_pane_g1

0x1bad,	// (0x00021b14) bg_vkb2_func_pane_cp02_ParamLimits

0x1bad,	// (0x00021b14) bg_vkb2_func_pane_cp02

0xe4db,	// (0x0002e442) cell_hwr_side_button_pane_g1_ParamLimits

0xe4db,	// (0x0002e442) cell_hwr_side_button_pane_g1

0x83ae,	// (0x00028315) status_pane_g4_ParamLimits

0x83ae,	// (0x00028315) status_pane_g4

0x83c8,	// (0x0002832f) status_pane_t1

0xbd61,	// (0x0002bcc8) form2_midp_gauge_slider_cont_pane

0xbd69,	// (0x0002bcd0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd7b,	// (0x0002bce2) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd8d,	// (0x0002bcf4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfada,	// (0x0002fa41) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd9f,	// (0x0002bd06) form2_midp_slider_pane_ParamLimits

0x9639,	// (0x000295a0) aid_size_cell_func_vkb2_ParamLimits

0x9639,	// (0x000295a0) aid_size_cell_func_vkb2

0xe47c,	// (0x0002e3e3) slider_pane_g4_ParamLimits

0xe47c,	// (0x0002e3e3) slider_pane_g4

0x9d40,	// (0x00029ca7) form2_midp_gauge_slider_pane_t2_cp01

0x9d4e,	// (0x00029cb5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9d4e,	// (0x00029cb5) form2_midp_gauge_slider_pane_t3_cp01

0x9d6b,	// (0x00029cd2) form2_midp_slider_pane_cp01

0x19f9,	// (0x00021960) navi_smil_pane

0xe514,	// (0x0002e47b) navi_smil_pane_g1

0xe51c,	// (0x0002e483) navi_smil_pane_t1

0xe4e9,	// (0x0002e450) form2_midp_slider_pane_g1

0xe4f2,	// (0x0002e459) form2_midp_slider_pane_g2

0xe4fa,	// (0x0002e461) form2_midp_slider_pane_g3

0xe4e9,	// (0x0002e450) form2_midp_slider_pane_g4

0xe502,	// (0x0002e469) form2_midp_slider_pane_g5

0x0004,

0xfdff,	// (0x0002fd66) form2_midp_slider_pane_g

0x9d30,	// (0x00029c97) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9d30,	// (0x00029c97) vkb2_area_bottom_space_btn_pane_g4

0x81dd,	// (0x00028144) lc0_navi_pane_ParamLimits

0x81dd,	// (0x00028144) lc0_navi_pane

0x8253,	// (0x000281ba) lc0_stat_indi_pane_ParamLimits

0x8253,	// (0x000281ba) lc0_stat_indi_pane

0x826a,	// (0x000281d1) ls0_title_pane_ParamLimits

0x826a,	// (0x000281d1) ls0_title_pane

0x1ea3,	// (0x00021e0a) bg_popup_sub_pane_cp14_ParamLimits

0xd931,	// (0x0002d898) list_uniindi_pane_ParamLimits

0xd93d,	// (0x0002d8a4) uniindi_top_pane_ParamLimits

0xd9d9,	// (0x0002d940) list_single_uniindi_pane_g1_ParamLimits

0xd9ec,	// (0x0002d953) list_single_uniindi_pane_t1_ParamLimits

0x9d74,	// (0x00029cdb) lc0_stat_clock_pane_ParamLimits

0x9d74,	// (0x00029cdb) lc0_stat_clock_pane

0xe52a,	// (0x0002e491) lc0_stat_indi_pane_g1_ParamLimits

0xe52a,	// (0x0002e491) lc0_stat_indi_pane_g1

0xe537,	// (0x0002e49e) lc0_stat_indi_pane_g2_ParamLimits

0xe537,	// (0x0002e49e) lc0_stat_indi_pane_g2

0x0001,

0xfe0a,	// (0x0002fd71) lc0_stat_indi_pane_g_ParamLimits

0xfe0a,	// (0x0002fd71) lc0_stat_indi_pane_g

0x9d81,	// (0x00029ce8) lc0_uni_indicator_pane_ParamLimits

0x9d81,	// (0x00029ce8) lc0_uni_indicator_pane

0xe544,	// (0x0002e4ab) ls0_title_pane_g1_ParamLimits

0xe544,	// (0x0002e4ab) ls0_title_pane_g1

0xe558,	// (0x0002e4bf) ls0_title_pane_t1_ParamLimits

0xe558,	// (0x0002e4bf) ls0_title_pane_t1

0x9d8e,	// (0x00029cf5) lc0_uni_indicator_pane_g1_ParamLimits

0x9d8e,	// (0x00029cf5) lc0_uni_indicator_pane_g1

0xe58e,	// (0x0002e4f5) lc0_stat_clock_pane_t1

0x19f9,	// (0x00021960) main_ai5_pane

0xe59c,	// (0x0002e503) ai5_sk_pane_ParamLimits

0xe59c,	// (0x0002e503) ai5_sk_pane

0xe5a9,	// (0x0002e510) cell_ai5_widget_pane_ParamLimits

0xe5a9,	// (0x0002e510) cell_ai5_widget_pane

0xe669,	// (0x0002e5d0) aid_size_cell_widget_grid

0xe677,	// (0x0002e5de) bg_ai5_widget_pane_ParamLimits

0xe677,	// (0x0002e5de) bg_ai5_widget_pane

0xe6f3,	// (0x0002e65a) cell_ai5_widget_pane_g2

0xe707,	// (0x0002e66e) cell_ai5_widget_pane_g3

0xe721,	// (0x0002e688) cell_ai5_widget_pane_g4

0xe731,	// (0x0002e698) cell_ai5_widget_pane_g5

0xe741,	// (0x0002e6a8) cell_ai5_widget_pane_g6

0xe74d,	// (0x0002e6b4) cell_ai5_widget_pane_g7

0xe7b9,	// (0x0002e720) cell_ai5_widget_pane_t1_ParamLimits

0xe7b9,	// (0x0002e720) cell_ai5_widget_pane_t1

0xe7d6,	// (0x0002e73d) cell_ai5_widget_pane_t2_ParamLimits

0xe7d6,	// (0x0002e73d) cell_ai5_widget_pane_t2

0xe7ee,	// (0x0002e755) cell_ai5_widget_pane_t3_ParamLimits

0xe7ee,	// (0x0002e755) cell_ai5_widget_pane_t3

0xe806,	// (0x0002e76d) cell_ai5_widget_pane_t4_ParamLimits

0xe806,	// (0x0002e76d) cell_ai5_widget_pane_t4

0xe82c,	// (0x0002e793) cell_ai5_widget_pane_t5_ParamLimits

0xe82c,	// (0x0002e793) cell_ai5_widget_pane_t5

0xe84b,	// (0x0002e7b2) cell_ai5_widget_pane_t6_ParamLimits

0xe84b,	// (0x0002e7b2) cell_ai5_widget_pane_t6

0xe85d,	// (0x0002e7c4) cell_ai5_widget_pane_t7_ParamLimits

0xe85d,	// (0x0002e7c4) cell_ai5_widget_pane_t7

0xe87c,	// (0x0002e7e3) cell_ai5_widget_pane_t8_ParamLimits

0xe87c,	// (0x0002e7e3) cell_ai5_widget_pane_t8

0x000b,

0xfe2a,	// (0x0002fd91) cell_ai5_widget_pane_t_ParamLimits

0xfe2a,	// (0x0002fd91) cell_ai5_widget_pane_t

0xe900,	// (0x0002e867) grid_ai5_widget_pane

0x1ea3,	// (0x00021e0a) highlight_cell_ai5_widget_pane_ParamLimits

0x1ea3,	// (0x00021e0a) highlight_cell_ai5_widget_pane

0xe90e,	// (0x0002e875) ai5_sk_left_pane

0xe918,	// (0x0002e87f) ai5_sk_middle_pane

0xe922,	// (0x0002e889) ai5_sk_right_pane

0xe92c,	// (0x0002e893) bg_ai5_widget_pane_g1_ParamLimits

0xe92c,	// (0x0002e893) bg_ai5_widget_pane_g1

0xe938,	// (0x0002e89f) bg_ai5_widget_pane_g2_ParamLimits

0xe938,	// (0x0002e89f) bg_ai5_widget_pane_g2

0xe944,	// (0x0002e8ab) bg_ai5_widget_pane_g3_ParamLimits

0xe944,	// (0x0002e8ab) bg_ai5_widget_pane_g3

0xe950,	// (0x0002e8b7) bg_ai5_widget_pane_g4_ParamLimits

0xe950,	// (0x0002e8b7) bg_ai5_widget_pane_g4

0xe95c,	// (0x0002e8c3) bg_ai5_widget_pane_g5_ParamLimits

0xe95c,	// (0x0002e8c3) bg_ai5_widget_pane_g5

0xe968,	// (0x0002e8cf) bg_ai5_widget_pane_g6_ParamLimits

0xe968,	// (0x0002e8cf) bg_ai5_widget_pane_g6

0xe974,	// (0x0002e8db) bg_ai5_widget_pane_g7_ParamLimits

0xe974,	// (0x0002e8db) bg_ai5_widget_pane_g7

0xe980,	// (0x0002e8e7) bg_ai5_widget_pane_g8_ParamLimits

0xe980,	// (0x0002e8e7) bg_ai5_widget_pane_g8

0xe98c,	// (0x0002e8f3) bg_ai5_widget_pane_g9_ParamLimits

0xe98c,	// (0x0002e8f3) bg_ai5_widget_pane_g9

0x0008,

0xfe43,	// (0x0002fdaa) bg_ai5_widget_pane_g_ParamLimits

0xfe43,	// (0x0002fdaa) bg_ai5_widget_pane_g

0xe9be,	// (0x0002e925) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9be,	// (0x0002e925) cell_shortcut_ai5_widget_pane

0x27b5,	// (0x0002271c) bg_cell_shortcut_ai5_widget_pane

0xe9cf,	// (0x0002e936) cell_grid_ai5_widget_pane_g1

0x27b5,	// (0x0002271c) highlight_cell_shortcut_ai5_widget_pane

0x856a,	// (0x000284d1) ai5_sk_left_pane_g1

0xe9d8,	// (0x0002e93f) ai5_sk_left_pane_g2

0xe9e0,	// (0x0002e947) ai5_sk_left_pane_g3

0xe9e8,	// (0x0002e94f) ai5_sk_left_pane_g4

0x0003,

0xfe56,	// (0x0002fdbd) ai5_sk_left_pane_g

0xe9f0,	// (0x0002e957) ai5_sk_left_pane_t1

0x8562,	// (0x000284c9) ai5_sk_right_pane_g1

0xe9fe,	// (0x0002e965) ai5_sk_right_pane_g2

0xea06,	// (0x0002e96d) ai5_sk_right_pane_g3

0xea0e,	// (0x0002e975) ai5_sk_right_pane_g4

0x0003,

0xfe5f,	// (0x0002fdc6) ai5_sk_right_pane_g

0xea16,	// (0x0002e97d) ai5_sk_right_pane_t1

0x8562,	// (0x000284c9) ai5_sk_middle_pane_g1

0x856a,	// (0x000284d1) ai5_sk_middle_pane_g2

0x8582,	// (0x000284e9) ai5_sk_middle_pane_g3

0xea06,	// (0x0002e96d) ai5_sk_middle_pane_g4

0xe9e0,	// (0x0002e947) ai5_sk_middle_pane_g5

0xea24,	// (0x0002e98b) ai5_sk_middle_pane_g6

0xea2c,	// (0x0002e993) ai5_sk_middle_pane_g7

0x0006,

0xfe68,	// (0x0002fdcf) ai5_sk_middle_pane_g

0x8063,	// (0x00027fca) aid_touch_area_size_lc0_ParamLimits

0x8063,	// (0x00027fca) aid_touch_area_size_lc0

0x9427,	// (0x0002938e) cell_hwr_candidate_pane_t1_ParamLimits

0x807f,	// (0x00027fe6) aid_touch_navi_pane

0x8358,	// (0x000282bf) status_dt_navi_pane_ParamLimits

0x8358,	// (0x000282bf) status_dt_navi_pane

0x8365,	// (0x000282cc) status_dt_sta_pane_ParamLimits

0x8365,	// (0x000282cc) status_dt_sta_pane

0xea34,	// (0x0002e99b) dt_sta_controll_pane

0xea41,	// (0x0002e9a8) dt_sta_indi_pane

0xea52,	// (0x0002e9b9) dt_sta_title_pane

0x1bad,	// (0x00021b14) bg_dt_sta_indi_pane_ParamLimits

0x1bad,	// (0x00021b14) bg_dt_sta_indi_pane

0xea65,	// (0x0002e9cc) dt_sta_battery_pane

0xea6d,	// (0x0002e9d4) dt_sta_indi_pane_g1

0xea76,	// (0x0002e9dd) dt_sta_indi_pane_g2

0xea7f,	// (0x0002e9e6) dt_sta_indi_pane_g3

0x0002,

0xfe77,	// (0x0002fdde) dt_sta_indi_pane_g

0xea88,	// (0x0002e9ef) dt_sta_signal_pane

0x1ea3,	// (0x00021e0a) bg_dt_sta_title_pane_ParamLimits

0x1ea3,	// (0x00021e0a) bg_dt_sta_title_pane

0xa854,	// (0x0002a7bb) dt_sta_title_pane_g1

0xea91,	// (0x0002e9f8) dt_sta_title_pane_t1_ParamLimits

0xea91,	// (0x0002e9f8) dt_sta_title_pane_t1

0x19f9,	// (0x00021960) bg_dt_sta_control_pane

0xeaa6,	// (0x0002ea0d) dt_sta_controll_pane_g1

0xeaaf,	// (0x0002ea16) bg_dt_sta_title_pane_g1

0xeab8,	// (0x0002ea1f) bg_dt_sta_title_pane_g2

0xeac1,	// (0x0002ea28) bg_dt_sta_title_pane_g3

0x0002,

0xfe7e,	// (0x0002fde5) bg_dt_sta_title_pane_g

0xc026,	// (0x0002bf8d) bg_dt_sta_indi_pane_g1

0xeaca,	// (0x0002ea31) dt_sta_signal_pane_g1

0xead2,	// (0x0002ea39) dt_sta_signal_pane_g2

0x0001,

0xfe85,	// (0x0002fdec) dt_sta_signal_pane_g

0xeada,	// (0x0002ea41) dt_sta_battery_pane_g1

0xeae3,	// (0x0002ea4a) dt_sta_battery_pane_t1

0xc026,	// (0x0002bf8d) bg_dt_sta_control_pane_g1

0x23e6,	// (0x0002234d) fep_china_uni_eep_pane

0x23ee,	// (0x00022355) fep_china_uni_entry_pane_ParamLimits

0x23fe,	// (0x00022365) popup_fep_china_uni_window_g1_ParamLimits

0x240e,	// (0x00022375) popup_fep_china_uni_window_g2_ParamLimits

0x240e,	// (0x00022375) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x0002f650) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x0002f650) popup_fep_china_uni_window_g

0xeaf2,	// (0x0002ea59) fep_china_uni_eep_pane_g1

0xeafa,	// (0x0002ea61) fep_china_uni_eep_pane_t1

0xe50b,	// (0x0002e472) aid_touch_area_size_smil_player

0x81d5,	// (0x0002813c) lc0_clock_pane

0x83bc,	// (0x00028323) status_pane_g5_ParamLimits

0x83bc,	// (0x00028323) status_pane_g5

0x7c17,	// (0x00027b7e) popup_keymap_window

0x837a,	// (0x000282e1) status_icon_pane

0xe707,	// (0x0002e66e) cell_ai5_widget_pane_g3_ParamLimits

0xe721,	// (0x0002e688) cell_ai5_widget_pane_g4_ParamLimits

0xe731,	// (0x0002e698) cell_ai5_widget_pane_g5_ParamLimits

0xe759,	// (0x0002e6c0) cell_ai5_widget_pane_g8_ParamLimits

0xe759,	// (0x0002e6c0) cell_ai5_widget_pane_g8

0xe76d,	// (0x0002e6d4) cell_ai5_widget_pane_g9_ParamLimits

0xe76d,	// (0x0002e6d4) cell_ai5_widget_pane_g9

0xe781,	// (0x0002e6e8) cell_ai5_widget_pane_g10_ParamLimits

0xe781,	// (0x0002e6e8) cell_ai5_widget_pane_g10

0xeb09,	// (0x0002ea70) status_icon_pane_g1

0x19f9,	// (0x00021960) bg_popup_sub_pane_cp13

0xeb11,	// (0x0002ea78) popup_keymap_window_t1

0x796c,	// (0x000278d3) control_pane_g6_ParamLimits

0x796c,	// (0x000278d3) control_pane_g6

0x7979,	// (0x000278e0) control_pane_g7_ParamLimits

0x7979,	// (0x000278e0) control_pane_g7

0x7986,	// (0x000278ed) control_pane_g8_ParamLimits

0x7986,	// (0x000278ed) control_pane_g8

0xea34,	// (0x0002e99b) dt_sta_controll_pane_ParamLimits

0xea41,	// (0x0002e9a8) dt_sta_indi_pane_ParamLimits

0xea52,	// (0x0002e9b9) dt_sta_title_pane_ParamLimits

0x1d84,	// (0x00021ceb) aid_size_touch_scroll_bar_cale

0x67f1,	// (0x00026758) popup_discreet_window_ParamLimits

0x67f1,	// (0x00026758) popup_discreet_window

0x686b,	// (0x000267d2) popup_sk_window

0x8d00,	// (0x00028c67) bg_popup_sub_pane_cp28_ParamLimits

0x8d00,	// (0x00028c67) bg_popup_sub_pane_cp28

0xeb1f,	// (0x0002ea86) popup_discreet_window_g1_ParamLimits

0xeb1f,	// (0x0002ea86) popup_discreet_window_g1

0xeb3f,	// (0x0002eaa6) popup_discreet_window_t1_ParamLimits

0xeb3f,	// (0x0002eaa6) popup_discreet_window_t1

0xeb5d,	// (0x0002eac4) popup_discreet_window_t2_ParamLimits

0xeb5d,	// (0x0002eac4) popup_discreet_window_t2

0x0002,

0xfe8a,	// (0x0002fdf1) popup_discreet_window_t_ParamLimits

0xfe8a,	// (0x0002fdf1) popup_discreet_window_t

0x9da2,	// (0x00029d09) popup_sk_window_g1

0x9dac,	// (0x00029d13) popup_sk_window_g2

0x0001,

0xfe91,	// (0x0002fdf8) popup_sk_window_g

0x9db4,	// (0x00029d1b) popup_sk_window_t1

0x9dc2,	// (0x00029d29) popup_sk_window_t1_copy1

0xe6f3,	// (0x0002e65a) cell_ai5_widget_pane_g2_ParamLimits

0xe88e,	// (0x0002e7f5) cell_ai5_widget_pane_t9_ParamLimits

0xe88e,	// (0x0002e7f5) cell_ai5_widget_pane_t9

0x19f9,	// (0x00021960) main_fep_fshwr2_pane

0x9dd0,	// (0x00029d37) aid_fshwr2_btn_pane

0x9de4,	// (0x00029d4b) aid_fshwr2_syb_pane

0x9df8,	// (0x00029d5f) aid_fshwr2_txt_pane

0x9e08,	// (0x00029d6f) fshwr2_func_candi_pane

0x9e2c,	// (0x00029d93) fshwr2_hwr_syb_pane

0x9e46,	// (0x00029dad) fshwr2_icf_pane

0x19f9,	// (0x00021960) fshwr2_icf_bg_pane

0x9e74,	// (0x00029ddb) fshwr2_icf_pane_t1_ParamLimits

0x9e74,	// (0x00029ddb) fshwr2_icf_pane_t1

0x2363,	// (0x000222ca) fshwr2_func_candi_pane_g1

0xebaf,	// (0x0002eb16) fshwr2_func_candi_row_pane_ParamLimits

0xebaf,	// (0x0002eb16) fshwr2_func_candi_row_pane

0x9e8d,	// (0x00029df4) cell_fshwr2_syb_pane_ParamLimits

0x9e8d,	// (0x00029df4) cell_fshwr2_syb_pane

0xe4db,	// (0x0002e442) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4db,	// (0x0002e442) fshwr2_hwr_syb_pane_g1

0x19f9,	// (0x00021960) bg_popup_call_pane_cp01

0x9eb0,	// (0x00029e17) fshwr2_func_candi_cell_pane_ParamLimits

0x9eb0,	// (0x00029e17) fshwr2_func_candi_cell_pane

0xa6f4,	// (0x0002a65b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6f4,	// (0x0002a65b) fshwr2_func_candi_cell_bg_pane

0x9efb,	// (0x00029e62) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9efb,	// (0x00029e62) fshwr2_func_candi_cell_pane_g1

0x9f1b,	// (0x00029e82) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f1b,	// (0x00029e82) fshwr2_func_candi_cell_pane_t1

0x19f9,	// (0x00021960) bg_button_pane_cp08

0x2053,	// (0x00021fba) cell_fshwr2_syb_bg_pane

0x9f2e,	// (0x00029e95) cell_fshwr2_syb_bg_pane_g1

0x9f42,	// (0x00029ea9) cell_fshwr2_syb_bg_pane_t1

0x1ea3,	// (0x00021e0a) main_tmo_pane

0xab8d,	// (0x0002aaf4) uni_indicator_pane_g1_ParamLimits

0xaba0,	// (0x0002ab07) uni_indicator_pane_g2_ParamLimits

0xabb2,	// (0x0002ab19) uni_indicator_pane_g3_ParamLimits

0xabc1,	// (0x0002ab28) uni_indicator_pane_g4_ParamLimits

0xabc1,	// (0x0002ab28) uni_indicator_pane_g4

0xabd5,	// (0x0002ab3c) uni_indicator_pane_g5_ParamLimits

0xabd5,	// (0x0002ab3c) uni_indicator_pane_g5

0xabd5,	// (0x0002ab3c) uni_indicator_pane_g6_ParamLimits

0xabd5,	// (0x0002ab3c) uni_indicator_pane_g6

0xf8e8,	// (0x0002f84f) uni_indicator_pane_g_ParamLimits

0xd510,	// (0x0002d477) popup_tmo_note_window_ParamLimits

0xd510,	// (0x0002d477) popup_tmo_note_window

0x1ea3,	// (0x00021e0a) fshwr2_bg_pane

0x9f0c,	// (0x00029e73) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f0c,	// (0x00029e73) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe96,	// (0x0002fdfd) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe96,	// (0x0002fdfd) fshwr2_func_candi_cell_pane_g

0xc026,	// (0x0002bf8d) bg_popup_window_pane_cp01

0x9f58,	// (0x00029ebf) bg_popup_window_pane_g1_cp01

0xebd6,	// (0x0002eb3d) bg_popup_window_pane_cp22_ParamLimits

0xebd6,	// (0x0002eb3d) bg_popup_window_pane_cp22

0xebe4,	// (0x0002eb4b) listscroll_tmo_link_pane_ParamLimits

0xebe4,	// (0x0002eb4b) listscroll_tmo_link_pane

0xec24,	// (0x0002eb8b) popup_tmo_note_window_g1_ParamLimits

0xec24,	// (0x0002eb8b) popup_tmo_note_window_g1

0xec31,	// (0x0002eb98) tmo_note_info_pane_ParamLimits

0xec31,	// (0x0002eb98) tmo_note_info_pane

0xec4b,	// (0x0002ebb2) list_tmo_note_info_pane_g1_ParamLimits

0xec4b,	// (0x0002ebb2) list_tmo_note_info_pane_g1

0xec62,	// (0x0002ebc9) list_tmo_note_info_pane_g2_ParamLimits

0xec62,	// (0x0002ebc9) list_tmo_note_info_pane_g2

0x0001,

0xfe9b,	// (0x0002fe02) list_tmo_note_info_pane_g_ParamLimits

0xfe9b,	// (0x0002fe02) list_tmo_note_info_pane_g

0xec7e,	// (0x0002ebe5) list_tmo_note_info_text_pane_ParamLimits

0xec7e,	// (0x0002ebe5) list_tmo_note_info_text_pane

0xecff,	// (0x0002ec66) list_tmo_link_pane

0xed0c,	// (0x0002ec73) scroll_pane_cp20

0xed19,	// (0x0002ec80) list_single_tmo_link_pane_ParamLimits

0xed19,	// (0x0002ec80) list_single_tmo_link_pane

0xed29,	// (0x0002ec90) list_single_tmo_link_pane_t1

0xed37,	// (0x0002ec9e) list_tmo_note_info_text_pane_t1_ParamLimits

0xed37,	// (0x0002ec9e) list_tmo_note_info_text_pane_t1

0x6f4f,	// (0x00026eb6) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6f4f,	// (0x00026eb6) aid_size_touch_scroll_bar_cp01

0x5a66,	// (0x000259cd) aid_size_touch_slider_marker

0x6853,	// (0x000267ba) popup_settings_window_ParamLimits

0x6853,	// (0x000267ba) popup_settings_window

0x5c2b,	// (0x00025b92) popup_candi_list_indi_window

0x807f,	// (0x00027fe6) aid_touch_navi_pane_ParamLimits

0x9592,	// (0x000294f9) rs_clock_indi_pane

0x959b,	// (0x00029502) sctrl_sk_bottom_pane_ParamLimits

0x95ac,	// (0x00029513) sctrl_sk_top_pane_ParamLimits

0x968b,	// (0x000295f2) popup_fep_tooltip_window

0xe669,	// (0x0002e5d0) aid_size_cell_widget_grid_ParamLimits

0xe6de,	// (0x0002e645) cell_ai5_widget_pane_g1_ParamLimits

0xe6de,	// (0x0002e645) cell_ai5_widget_pane_g1

0xe741,	// (0x0002e6a8) cell_ai5_widget_pane_g6_ParamLimits

0xe74d,	// (0x0002e6b4) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0f,	// (0x0002fd76) cell_ai5_widget_pane_g_ParamLimits

0xfe0f,	// (0x0002fd76) cell_ai5_widget_pane_g

0xe8bd,	// (0x0002e824) cell_ai5_widget_pane_t10_ParamLimits

0xe8bd,	// (0x0002e824) cell_ai5_widget_pane_t10

0xe900,	// (0x0002e867) grid_ai5_widget_pane_ParamLimits

0xe998,	// (0x0002e8ff) cell_contacts_ai5_widget_pane_ParamLimits

0xe998,	// (0x0002e8ff) cell_contacts_ai5_widget_pane

0xeb72,	// (0x0002ead9) popup_discreet_window_t3_ParamLimits

0xeb72,	// (0x0002ead9) popup_discreet_window_t3

0x9e5e,	// (0x00029dc5) popup_fshwr2_char_preview_window_ParamLimits

0x9e5e,	// (0x00029dc5) popup_fshwr2_char_preview_window

0xec9c,	// (0x0002ec03) tmo_note_info_pane_t1

0xecb1,	// (0x0002ec18) tmo_note_info_pane_t2

0xecc6,	// (0x0002ec2d) tmo_note_info_pane_t3

0xecdb,	// (0x0002ec42) tmo_note_info_pane_t4

0xeced,	// (0x0002ec54) tmo_note_info_pane_t5

0x0004,

0xfea0,	// (0x0002fe07) tmo_note_info_pane_t

0xecff,	// (0x0002ec66) list_tmo_link_pane_ParamLimits

0xed0c,	// (0x0002ec73) scroll_pane_cp20_ParamLimits

0x19f9,	// (0x00021960) bg_popup_fep_char_preview_window_cp01

0xed50,	// (0x0002ecb7) popup_fshwr2_char_preview_window_t1

0xed5e,	// (0x0002ecc5) popup_candi_list_indi_window_g1

0xed67,	// (0x0002ecce) bg_cell_contacts_ai5_widget_pane

0xed73,	// (0x0002ecda) cell_contacts_ai5_widget_pane_g1

0xc70d,	// (0x0002c674) cell_contacts_ai5_widget_pane_g2

0xed88,	// (0x0002ecef) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeab,	// (0x0002fe12) cell_contacts_ai5_widget_pane_g

0xed94,	// (0x0002ecfb) cell_contacts_ai5_widget_pane_t1

0x1ea3,	// (0x00021e0a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0b,	// (0x0002ed72) settings_container_pane

0x27b5,	// (0x0002271c) listscroll_set_pane_copy1

0xb702,	// (0x0002b669) scroll_pane_cp121_copy1

0x8aa5,	// (0x00028a0c) set_content_pane_copy1

0xee17,	// (0x0002ed7e) aid_height_set_list_copy1_ParamLimits

0xee17,	// (0x0002ed7e) aid_height_set_list_copy1

0xadcd,	// (0x0002ad34) aid_size_parent_copy1_ParamLimits

0xadcd,	// (0x0002ad34) aid_size_parent_copy1

0xee23,	// (0x0002ed8a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee23,	// (0x0002ed8a) button_value_adjust_pane_cp6_copy1

0x2053,	// (0x00021fba) list_highlight_pane_cp2_copy1_ParamLimits

0x2053,	// (0x00021fba) list_highlight_pane_cp2_copy1

0xee37,	// (0x0002ed9e) list_set_pane_copy1_ParamLimits

0xee37,	// (0x0002ed9e) list_set_pane_copy1

0xeda6,	// (0x0002ed0d) main_pane_set_t1_copy1_ParamLimits

0xeda6,	// (0x0002ed0d) main_pane_set_t1_copy1

0xede0,	// (0x0002ed47) main_pane_set_t2_copy1_ParamLimits

0xede0,	// (0x0002ed47) main_pane_set_t2_copy1

0xeee4,	// (0x0002ee4b) main_pane_set_t3_copy1

0xeef2,	// (0x0002ee59) main_pane_set_t4_copy1

0xedff,	// (0x0002ed66) set_content_pane_g1_copy1_ParamLimits

0xedff,	// (0x0002ed66) set_content_pane_g1_copy1

0xef00,	// (0x0002ee67) setting_code_pane_copy1

0xef08,	// (0x0002ee6f) setting_slider_graphic_pane_copy1

0xef08,	// (0x0002ee6f) setting_slider_pane_copy1

0xef10,	// (0x0002ee77) setting_text_pane_copy1

0xef10,	// (0x0002ee77) setting_volume_pane_copy1

0xef00,	// (0x0002ee67) settings_code_pane_cp2_copy1

0xef18,	// (0x0002ee7f) settings_code_pane_cp_copy1_ParamLimits

0xef18,	// (0x0002ee7f) settings_code_pane_cp_copy1

0x9f61,	// (0x00029ec8) volume_set_pane_copy1

0xef2c,	// (0x0002ee93) volume_set_pane_g10_copy1

0xef34,	// (0x0002ee9b) volume_set_pane_g1_copy1

0xef3c,	// (0x0002eea3) volume_set_pane_g2_copy1

0xef44,	// (0x0002eeab) volume_set_pane_g3_copy1

0xef4c,	// (0x0002eeb3) volume_set_pane_g4_copy1

0xef54,	// (0x0002eebb) volume_set_pane_g5_copy1

0xef5c,	// (0x0002eec3) volume_set_pane_g6_copy1

0xef64,	// (0x0002eecb) volume_set_pane_g7_copy1

0xef6c,	// (0x0002eed3) volume_set_pane_g8_copy1

0xef74,	// (0x0002eedb) volume_set_pane_g9_copy1

0x1a69,	// (0x000219d0) bg_set_opt_pane_cp_copy1_ParamLimits

0x1a69,	// (0x000219d0) bg_set_opt_pane_cp_copy1

0x9f69,	// (0x00029ed0) setting_slider_pane_t1_copy1_ParamLimits

0x9f69,	// (0x00029ed0) setting_slider_pane_t1_copy1

0x9f88,	// (0x00029eef) setting_slider_pane_t2_copy1_ParamLimits

0x9f88,	// (0x00029eef) setting_slider_pane_t2_copy1

0x9fa2,	// (0x00029f09) setting_slider_pane_t3_copy1_ParamLimits

0x9fa2,	// (0x00029f09) setting_slider_pane_t3_copy1

0x9fba,	// (0x00029f21) slider_set_pane_copy1_ParamLimits

0x9fba,	// (0x00029f21) slider_set_pane_copy1

0x1f69,	// (0x00021ed0) set_opt_bg_pane_g1_copy2

0x1f71,	// (0x00021ed8) set_opt_bg_pane_g2_copy2

0xef7c,	// (0x0002eee3) set_opt_bg_pane_g3_copy2

0x1f81,	// (0x00021ee8) set_opt_bg_pane_g4_copy2

0x1f89,	// (0x00021ef0) set_opt_bg_pane_g5_copy2

0x1f91,	// (0x00021ef8) set_opt_bg_pane_g6_copy2

0xef86,	// (0x0002eeed) set_opt_bg_pane_g7_copy2

0xef8e,	// (0x0002eef5) set_opt_bg_pane_g8_copy2

0xef98,	// (0x0002eeff) set_opt_bg_pane_g9_copy2

0x9fd0,	// (0x00029f37) aid_size_touch_slider_mark_copy1_ParamLimits

0x9fd0,	// (0x00029f37) aid_size_touch_slider_mark_copy1

0xefa2,	// (0x0002ef09) slider_set_pane_g1_copy1

0x9fe4,	// (0x00029f4b) slider_set_pane_g2_copy1

0x902d,	// (0x00028f94) slider_set_pane_g3_copy1_ParamLimits

0x902d,	// (0x00028f94) slider_set_pane_g3_copy1

0x9041,	// (0x00028fa8) slider_set_pane_g4_copy1_ParamLimits

0x9041,	// (0x00028fa8) slider_set_pane_g4_copy1

0x9059,	// (0x00028fc0) slider_set_pane_g5_copy1_ParamLimits

0x9059,	// (0x00028fc0) slider_set_pane_g5_copy1

0x902d,	// (0x00028f94) slider_set_pane_g6_copy1_ParamLimits

0x902d,	// (0x00028f94) slider_set_pane_g6_copy1

0x9fec,	// (0x00029f53) slider_set_pane_g7_copy1_ParamLimits

0x9fec,	// (0x00029f53) slider_set_pane_g7_copy1

0x1a0d,	// (0x00021974) bg_set_opt_pane_cp2_copy1

0xefab,	// (0x0002ef12) setting_slider_graphic_pane_g1_copy1

0xefb4,	// (0x0002ef1b) setting_slider_graphic_pane_t1_copy1

0xefc4,	// (0x0002ef2b) setting_slider_graphic_pane_t2_copy1

0xefd4,	// (0x0002ef3b) slider_set_pane_cp_copy1

0xefe4,	// (0x0002ef4b) input_focus_pane_cp1_copy1

0xefed,	// (0x0002ef54) list_set_text_pane_copy1

0xeff5,	// (0x0002ef5c) setting_text_pane_g1_copy1

0x654a,	// (0x000264b1) set_text_pane_t1_copy1

0xefe4,	// (0x0002ef4b) input_focus_pane_cp2_copy1

0xeff5,	// (0x0002ef5c) setting_code_pane_g1_copy1

0xeffe,	// (0x0002ef65) setting_code_pane_t1_copy1

0xf00c,	// (0x0002ef73) list_set_graphic_pane_copy1

0x1a0d,	// (0x00021974) bg_set_opt_pane_cp4_copy1

0x253e,	// (0x000224a5) list_set_graphic_pane_g1_copy1_ParamLimits

0x253e,	// (0x000224a5) list_set_graphic_pane_g1_copy1

0xf020,	// (0x0002ef87) list_set_graphic_pane_g2_copy1

0x2556,	// (0x000224bd) list_set_graphic_pane_t1_copy1_ParamLimits

0x2556,	// (0x000224bd) list_set_graphic_pane_t1_copy1

0xc026,	// (0x0002bf8d) rs_clock_indi_pane_g1

0xf028,	// (0x0002ef8f) rs_clock_indi_pane_t1

0xf036,	// (0x0002ef9d) rs_indi_pane

0xf03e,	// (0x0002efa5) rs_indi_pane_g1

0xf047,	// (0x0002efae) rs_indi_pane_g2

0xed5e,	// (0x0002ecc5) rs_indi_pane_g3

0x0002,

0xfeb2,	// (0x0002fe19) rs_indi_pane_g

0x27b5,	// (0x0002271c) bg_popup_preview_window_pane_cp03

0xf050,	// (0x0002efb7) popup_fep_tooltip_window_t1

0xccbf,	// (0x0002cc26) popup_note2_window_g2_ParamLimits

0xccbf,	// (0x0002cc26) popup_note2_window_g2

0x0001,

0xfc46,	// (0x0002fbad) popup_note2_window_g_ParamLimits

0xfc46,	// (0x0002fbad) popup_note2_window_g

0xd1ac,	// (0x0002d113) bg_popup_sub_pane_cp11_ParamLimits

0xd1b9,	// (0x0002d120) cell_ai3_links_pane_g1_ParamLimits

0xd1d0,	// (0x0002d137) cell_ai3_links_pane_t1

0x654a,	// (0x000264b1) set_text_pane_t1_copy1_ParamLimits

0x26f7,	// (0x0002265e) cell_graphic_popup_pane_cp2_ParamLimits

0x26f7,	// (0x0002265e) cell_graphic_popup_pane_cp2

0xf05e,	// (0x0002efc5) cell_graphic_popup_pane_g1_cp2

0x1d07,	// (0x00021c6e) cell_graphic_popup_pane_g2_cp2

0xf066,	// (0x0002efcd) cell_graphic_popup_pane_g3_cp2

0xf06e,	// (0x0002efd5) cell_graphic_popup_pane_t2_cp2

0x1d18,	// (0x00021c7f) grid_highlight_pane_cp3_cp2

0x21e0,	// (0x00022147) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1ea3,	// (0x00021e0a) main_tmo_pane_ParamLimits

0xd504,	// (0x0002d46b) popup_tmo_big_image_note_window

0xe6cd,	// (0x0002e634) cell_ai5_widget_list_pane

0xe6d5,	// (0x0002e63c) cell_ai5_widget_lrg_icon_pane

0xec9c,	// (0x0002ec03) tmo_note_info_pane_t1_ParamLimits

0xecb1,	// (0x0002ec18) tmo_note_info_pane_t2_ParamLimits

0xecc6,	// (0x0002ec2d) tmo_note_info_pane_t3_ParamLimits

0xecdb,	// (0x0002ec42) tmo_note_info_pane_t4_ParamLimits

0xeced,	// (0x0002ec54) tmo_note_info_pane_t5_ParamLimits

0xfea0,	// (0x0002fe07) tmo_note_info_pane_t_ParamLimits

0xee0b,	// (0x0002ed72) settings_container_pane_ParamLimits

0xefdc,	// (0x0002ef43) indicator_popup_pane_cp5

0xefdc,	// (0x0002ef43) indicator_popup_pane_cp6

0xf00c,	// (0x0002ef73) list_set_graphic_pane_copy1_ParamLimits

0x19f9,	// (0x00021960) bg_popup_window_pane_cp23

0xf07c,	// (0x0002efe3) popup_tmo_big_image_note_window_g1

0xf085,	// (0x0002efec) popup_tmo_big_image_note_window_t1

0xf095,	// (0x0002effc) popup_tmo_big_image_note_window_t2

0xf0a5,	// (0x0002f00c) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb9,	// (0x0002fe20) popup_tmo_big_image_note_window_t

0xc026,	// (0x0002bf8d) cell_ai5_widget_lrg_icon_pane_g1

0xf0b5,	// (0x0002f01c) cell_ai5_widget_lrg_icon_pane_t1

0xf0c3,	// (0x0002f02a) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c3,	// (0x0002f02a) cell_ai5_widget_list_row_pane

0xf0da,	// (0x0002f041) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0da,	// (0x0002f041) cell_ai5_widget_list_row_pane_g1

0xf0e7,	// (0x0002f04e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0e7,	// (0x0002f04e) cell_ai5_widget_list_row_pane_t1

0xf112,	// (0x0002f079) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf112,	// (0x0002f079) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec0,	// (0x0002fe27) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec0,	// (0x0002fe27) cell_ai5_widget_list_row_pane_t

0x19f9,	// (0x00021960) main_fep_vtchi_ss_pane

0xf162,	// (0x0002f0c9) popup_fep_char_pre_window

0xf16a,	// (0x0002f0d1) popup_fep_ituss_window

0xf196,	// (0x0002f0fd) popup_fep_vkbss_window

0x2053,	// (0x00021fba) grid_vkbss_keypad_pane_ParamLimits

0x2053,	// (0x00021fba) grid_vkbss_keypad_pane

0xf1d6,	// (0x0002f13d) ituss_keypad_pane

0xa00c,	// (0x00029f73) aid_vkbss_key_offset_ParamLimits

0xa00c,	// (0x00029f73) aid_vkbss_key_offset

0xa018,	// (0x00029f7f) cell_vkbss_key_pane_ParamLimits

0xa018,	// (0x00029f7f) cell_vkbss_key_pane

0xf1e6,	// (0x0002f14d) bg_cell_vkbss_key_g1_ParamLimits

0xf1e6,	// (0x0002f14d) bg_cell_vkbss_key_g1

0xf1f2,	// (0x0002f159) cell_vkbss_key_3p_pane_ParamLimits

0xf1f2,	// (0x0002f159) cell_vkbss_key_3p_pane

0xf228,	// (0x0002f18f) cell_vkbss_key_g1_ParamLimits

0xf228,	// (0x0002f18f) cell_vkbss_key_g1

0xf25e,	// (0x0002f1c5) cell_vkbss_key_t1_ParamLimits

0xf25e,	// (0x0002f1c5) cell_vkbss_key_t1

0xa063,	// (0x00029fca) cell_ituss_key_pane_ParamLimits

0xa063,	// (0x00029fca) cell_ituss_key_pane

0xf2ba,	// (0x0002f221) bg_cell_ituss_key_g1_ParamLimits

0xf2ba,	// (0x0002f221) bg_cell_ituss_key_g1

0xf2c6,	// (0x0002f22d) cell_ituss_key_pane_g1_ParamLimits

0xf2c6,	// (0x0002f22d) cell_ituss_key_pane_g1

0xa074,	// (0x00029fdb) cell_ituss_key_pane_g2_ParamLimits

0xa074,	// (0x00029fdb) cell_ituss_key_pane_g2

0x0005,

0xfec7,	// (0x0002fe2e) cell_ituss_key_pane_g_ParamLimits

0xfec7,	// (0x0002fe2e) cell_ituss_key_pane_g

0xa0f8,	// (0x0002a05f) cell_ituss_key_t1_ParamLimits

0xa0f8,	// (0x0002a05f) cell_ituss_key_t1

0xa132,	// (0x0002a099) cell_ituss_key_t2_ParamLimits

0xa132,	// (0x0002a099) cell_ituss_key_t2

0xa164,	// (0x0002a0cb) cell_ituss_key_t3_ParamLimits

0xa164,	// (0x0002a0cb) cell_ituss_key_t3

0xa195,	// (0x0002a0fc) cell_ituss_key_t4_ParamLimits

0xa195,	// (0x0002a0fc) cell_ituss_key_t4

0x0004,

0xfed4,	// (0x0002fe3b) cell_ituss_key_t_ParamLimits

0xfed4,	// (0x0002fe3b) cell_ituss_key_t

0xf2ec,	// (0x0002f253) cell_vkbss_key_3p_pane_g1

0xf2f4,	// (0x0002f25b) cell_vkbss_key_3p_pane_g2

0xf2fc,	// (0x0002f263) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedf,	// (0x0002fe46) cell_vkbss_key_3p_pane_g

0x27b5,	// (0x0002271c) bg_popup_fep_char_preview_window_cp02

0xf304,	// (0x0002f26b) popup_fep_char_pre_window_t1

0xe65f,	// (0x0002e5c6) main_ai5_sk_pane

0xed67,	// (0x0002ecce) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed73,	// (0x0002ecda) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc70d,	// (0x0002c674) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed88,	// (0x0002ecef) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeab,	// (0x0002fe12) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed94,	// (0x0002ecfb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1ea3,	// (0x00021e0a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf312,	// (0x0002f279) main_ai5_sk_pane_g1

0x8b41,	// (0x00028aa8) popup_query_code_window_g1

0xf180,	// (0x0002f0e7) popup_fep_vkb_icf_pane

0xf1ad,	// (0x0002f114) popup_fep_vtchi_icf_pane

0xf31b,	// (0x0002f282) bg_icf_pane

0xf31b,	// (0x0002f282) list_vkb_icf_pane

0xf327,	// (0x0002f28e) bg_icf_pane_cp01

0xf33a,	// (0x0002f2a1) vtchi_icf_list_pane

0xf39a,	// (0x0002f301) list_vkb_icf_pane_t1_ParamLimits

0xf39a,	// (0x0002f301) list_vkb_icf_pane_t1

0xf3bf,	// (0x0002f326) vtchi_icf_list_pane_t1_ParamLimits

0xf3bf,	// (0x0002f326) vtchi_icf_list_pane_t1

0xf16a,	// (0x0002f0d1) popup_fep_ituss_window_ParamLimits

0xf1ad,	// (0x0002f114) popup_fep_vtchi_icf_pane_ParamLimits

0xf1d6,	// (0x0002f13d) ituss_keypad_pane_ParamLimits

0xa002,	// (0x00029f69) ituss_sks_pane

0xf31b,	// (0x0002f282) bg_icf_pane_ParamLimits

0xf13a,	// (0x0002f0a1) icf_edit_indi_pane_ParamLimits

0xf13a,	// (0x0002f0a1) icf_edit_indi_pane

0xf31b,	// (0x0002f282) list_vkb_icf_pane_ParamLimits

0xf327,	// (0x0002f28e) bg_icf_pane_cp01_ParamLimits

0xf155,	// (0x0002f0bc) icf_edit_indi_pane_cp01_ParamLimits

0xf155,	// (0x0002f0bc) icf_edit_indi_pane_cp01

0xf33a,	// (0x0002f2a1) vtchi_query_pane

0xe4db,	// (0x0002e442) icf_edit_indi_pane_g1_ParamLimits

0xe4db,	// (0x0002e442) icf_edit_indi_pane_g1

0xf43a,	// (0x0002f3a1) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0002f3a1) icf_edit_indi_pane_g2

0x0001,

0xff0a,	// (0x0002fe71) icf_edit_indi_pane_g_ParamLimits

0xff0a,	// (0x0002fe71) icf_edit_indi_pane_g

0xf44e,	// (0x0002f3b5) icf_edit_indi_pane_t1

0xf3e3,	// (0x0002f34a) bg_input_focus_pane_cp042

0x1d7b,	// (0x00021ce2) vtchi_button_pane

0xf3ec,	// (0x0002f353) vtchi_query_pane_t1

0xf3fa,	// (0x0002f361) vtchi_query_pane_t2

0xf408,	// (0x0002f36f) vtchi_query_pane_t3

0x0002,

0xfef9,	// (0x0002fe60) vtchi_query_pane_t

0x19f9,	// (0x00021960) bg_button_pane_cp13

0xf416,	// (0x0002f37d) vtchi_button_pane_g1

0xa1d8,	// (0x0002a13f) ituss_sks_pane_g1

0xa1e3,	// (0x0002a14a) ituss_sks_pane_g2

0x0001,

0xff00,	// (0x0002fe67) ituss_sks_pane_g

0xf41e,	// (0x0002f385) ituss_sks_pane_t1

0xf42c,	// (0x0002f393) ituss_sks_pane_t2

0x0001,

0xff05,	// (0x0002fe6c) ituss_sks_pane_t

0xba9a,	// (0x0002ba01) indicator_nsta_pane_cp_g1

0xbaa3,	// (0x0002ba0a) indicator_nsta_pane_cp_g2

0xbaab,	// (0x0002ba12) indicator_nsta_pane_cp_g3

0xbab3,	// (0x0002ba1a) indicator_nsta_pane_cp_g4

0xbaa3,	// (0x0002ba0a) indicator_nsta_pane_cp_g5

0xbaab,	// (0x0002ba12) indicator_nsta_pane_cp_g6

0x0005,

0xfa90,	// (0x0002f9f7) indicator_nsta_pane_cp_g

0xe20d,	// (0x0002e174) cell_graphic2_pane_t2_ParamLimits

0xe20d,	// (0x0002e174) cell_graphic2_pane_t2

0x0001,

0xfd96,	// (0x0002fcfd) cell_graphic2_pane_t_ParamLimits

0xfd96,	// (0x0002fcfd) cell_graphic2_pane_t

0xe239,	// (0x0002e1a0) cell_graphic2_control_pane_t1

0x7419,	// (0x00027380) signal_pane_g3_ParamLimits

0x7419,	// (0x00027380) signal_pane_g3

0x742b,	// (0x00027392) signal_pane_g4_ParamLimits

0x742b,	// (0x00027392) signal_pane_g4

0xf124,	// (0x0002f08b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf124,	// (0x0002f08b) cell_ai5_widget_list_row_pane_t3

0xf2da,	// (0x0002f241) cell_ituss_key_pane_t1_ParamLimits

0xf2da,	// (0x0002f241) cell_ituss_key_pane_t1

0x8774,	// (0x000286db) form_field_data_wide_pane_vc_t2_ParamLimits

0x8774,	// (0x000286db) form_field_data_wide_pane_vc_t2

0x8788,	// (0x000286ef) form_field_data_wide_pane_vc_t3_ParamLimits

0x8788,	// (0x000286ef) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x0002f737) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x0002f737) form_field_data_wide_pane_vc_t

0xb744,	// (0x0002b6ab) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb744,	// (0x0002b6ab) form_field_slider_wide_pane_vc_t3

0xb822,	// (0x0002b789) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb822,	// (0x0002b789) form_field_popup_wide_pane_vc_t2

0xb839,	// (0x0002b7a0) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb839,	// (0x0002b7a0) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7f,	// (0x0002f9e6) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0002f9e6) form_field_popup_wide_pane_vc_t

0x9dd0,	// (0x00029d37) aid_fshwr2_btn_pane_ParamLimits

0x9de4,	// (0x00029d4b) aid_fshwr2_syb_pane_ParamLimits

0x9df8,	// (0x00029d5f) aid_fshwr2_txt_pane_ParamLimits

0x1ea3,	// (0x00021e0a) fshwr2_bg_pane_ParamLimits

0x9e08,	// (0x00029d6f) fshwr2_func_candi_pane_ParamLimits

0x9e2c,	// (0x00029d93) fshwr2_hwr_syb_pane_ParamLimits

0x9e46,	// (0x00029dad) fshwr2_icf_pane_ParamLimits

0x6145,	// (0x000260ac) list_double_graphic_pane_vc_g4_ParamLimits

0x6145,	// (0x000260ac) list_double_graphic_pane_vc_g4

0xa094,	// (0x00029ffb) cell_ituss_key_pane_g3_ParamLimits

0xa094,	// (0x00029ffb) cell_ituss_key_pane_g3

0xa1c6,	// (0x0002a12d) cell_ituss_key_t5_ParamLimits

0xa1c6,	// (0x0002a12d) cell_ituss_key_t5

0xf196,	// (0x0002f0fd) popup_fep_vkbss_window_ParamLimits

0xd6aa,	// (0x0002d611) aid_cell_ai5_quarter

0xf44e,	// (0x0002f3b5) icf_edit_indi_pane_t1_ParamLimits

0x6bd7,	// (0x00026b3e) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6bd7,	// (0x00026b3e) aid_tch_indicator_popup_pane_cp2

0x6bea,	// (0x00026b51) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6bea,	// (0x00026b51) aid_tch_query_popup_data_pane_cp2

0x8ae9,	// (0x00028a50) aid_tch_query_popup_pane_ParamLimits

0x8ae9,	// (0x00028a50) aid_tch_query_popup_pane

0x8ae9,	// (0x00028a50) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x8ae9,	// (0x00028a50) aid_tch_query_popup_data_pane_cp1

0x2053,	// (0x00021fba) cell_fshwr2_syb_bg_pane_ParamLimits

0x9f2e,	// (0x00029e95) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9f42,	// (0x00029ea9) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf180,	// (0x0002f0e7) popup_fep_vkb_icf_pane_ParamLimits

0x9c1e,	// (0x00029b85) bg_popup_fep_char_preview_window_g10

0xe795,	// (0x0002e6fc) cell_ai5_widget_pane_g11_ParamLimits

0xe795,	// (0x0002e6fc) cell_ai5_widget_pane_g11

0xe7a1,	// (0x0002e708) cell_ai5_widget_pane_g12_ParamLimits

0xe7a1,	// (0x0002e708) cell_ai5_widget_pane_g12

0xe7ad,	// (0x0002e714) cell_ai5_widget_pane_g13_ParamLimits

0xe7ad,	// (0x0002e714) cell_ai5_widget_pane_g13

0xe8dc,	// (0x0002e843) cell_ai5_widget_pane_t11_ParamLimits

0xe8dc,	// (0x0002e843) cell_ai5_widget_pane_t11

0xe8ee,	// (0x0002e855) cell_ai5_widget_pane_t12_ParamLimits

0xe8ee,	// (0x0002e855) cell_ai5_widget_pane_t12

0xa0a0,	// (0x0002a007) cell_ituss_key_pane_g4_ParamLimits

0xa0a0,	// (0x0002a007) cell_ituss_key_pane_g4

0xa0bc,	// (0x0002a023) cell_ituss_key_pane_g5_ParamLimits

0xa0bc,	// (0x0002a023) cell_ituss_key_pane_g5

0xa0d8,	// (0x0002a03f) cell_ituss_key_pane_g6_ParamLimits

0xa0d8,	// (0x0002a03f) cell_ituss_key_pane_g6

0x855a,	// (0x000284c1) bg_icf_pane_g1

0xf342,	// (0x0002f2a9) bg_icf_pane_g2

0xf34e,	// (0x0002f2b5) bg_icf_pane_g3

0xf358,	// (0x0002f2bf) bg_icf_pane_g4

0xf364,	// (0x0002f2cb) bg_icf_pane_g5

0xf36e,	// (0x0002f2d5) bg_icf_pane_g6

0xf37a,	// (0x0002f2e1) bg_icf_pane_g7

0xf384,	// (0x0002f2eb) bg_icf_pane_g8

0xf390,	// (0x0002f2f7) bg_icf_pane_g9

0x0008,

0xfee6,	// (0x0002fe4d) bg_icf_pane_g

0xf1c3,	// (0x0002f12a) popup_hyb_candi_window_ParamLimits

0xf1c3,	// (0x0002f12a) popup_hyb_candi_window

0x865e,	// (0x000285c5) bg_popup_sub_pane_cp01_ParamLimits

0x865e,	// (0x000285c5) bg_popup_sub_pane_cp01

0xf467,	// (0x0002f3ce) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0002f3ce) entry_hyb_candi_pane

0xf476,	// (0x0002f3dd) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0002f3dd) grid_hyb_candi_pane

0xf48b,	// (0x0002f3f2) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0002f3f2) grid_hyb_phrase_pane

0xf49a,	// (0x0002f401) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0002f401) cell_hyb_candi_pane

0xf4bd,	// (0x0002f424) cell_hyb_candi_scroll_pane

0x2363,	// (0x000222ca) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0002f42d) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0002f43b) cell_hyb_phrase_pane

0x2363,	// (0x000222ca) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0002f444) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0002f452) entry_hyb_candi_pane_t1

0x27b5,	// (0x0002271c) input_focus_pane_cp06

0xf4f9,	// (0x0002f460) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0002f468) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0002f470) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0002f478) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0002f480) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0002f488) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small

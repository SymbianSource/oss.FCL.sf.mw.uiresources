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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004b954 };

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
0x8e78,	// (0x000547cc) Screen

0x8e8c,	// (0x000547e0) application_window_ParamLimits

0x8e8c,	// (0x000547e0) application_window

0x8ea6,	// (0x000547fa) screen_g1

0x8ed8,	// (0x0005482c) area_bottom_pane_ParamLimits

0x8ed8,	// (0x0005482c) area_bottom_pane

0xe724,	// (0x0005a078) area_top_pane_ParamLimits

0xe724,	// (0x0005a078) area_top_pane

0xe7b8,	// (0x0005a10c) main_pane_ParamLimits

0xe7b8,	// (0x0005a10c) main_pane

0x8f96,	// (0x000548ea) misc_graphics

0xae89,	// (0x000567dd) battery_pane_ParamLimits

0xae89,	// (0x000567dd) battery_pane

0x2a2f,	// (0x0004e383) bg_status_flat_pane_g8

0x2a37,	// (0x0004e38b) bg_status_flat_pane_g9

0x0728,	// (0x0004c07c) context_pane_ParamLimits

0x0728,	// (0x0004c07c) context_pane

0xaff4,	// (0x00056948) navi_pane_ParamLimits

0xaff4,	// (0x00056948) navi_pane

0xb072,	// (0x000569c6) signal_pane_ParamLimits

0xb072,	// (0x000569c6) signal_pane

0x0008,

0xf83e,	// (0x0005b192) bg_status_flat_pane_g

0xb102,	// (0x00056a56) status_pane_g1_ParamLimits

0xb102,	// (0x00056a56) status_pane_g1

0xb118,	// (0x00056a6c) status_pane_g2_ParamLimits

0xb118,	// (0x00056a6c) status_pane_g2

0x2030,	// (0x0004d984) status_pane_g3_ParamLimits

0x2030,	// (0x0004d984) status_pane_g3

0x0004,

0xf771,	// (0x0005b0c5) status_pane_g_ParamLimits

0xf771,	// (0x0005b0c5) status_pane_g

0xb124,	// (0x00056a78) title_pane_ParamLimits

0xb124,	// (0x00056a78) title_pane

0xb187,	// (0x00056adb) uni_indicator_pane_ParamLimits

0xb187,	// (0x00056adb) uni_indicator_pane

0xc6a0,	// (0x00057ff4) bg_list_pane_ParamLimits

0xc6a0,	// (0x00057ff4) bg_list_pane

0xa677,	// (0x00055fcb) find_pane

0x2244,	// (0x0004db98) listscroll_app_pane_ParamLimits

0x2244,	// (0x0004db98) listscroll_app_pane

0xc6c0,	// (0x00058014) listscroll_form_pane

0xa67f,	// (0x00055fd3) listscroll_gen_pane_ParamLimits

0xa67f,	// (0x00055fd3) listscroll_gen_pane

0x0041,	// (0x0004b995) listscroll_set_pane

0x3593,	// (0x0004eee7) main_idle_act_pane

0xc554,	// (0x00057ea8) main_idle_trad_pane

0xc554,	// (0x00057ea8) main_list_empty_pane

0x9d5e,	// (0x000556b2) main_midp_pane

0xc6da,	// (0x0005802e) main_pane_g1_ParamLimits

0xc6da,	// (0x0005802e) main_pane_g1

0xa693,	// (0x00055fe7) popup_ai_message_window_ParamLimits

0xa693,	// (0x00055fe7) popup_ai_message_window

0xa744,	// (0x00056098) popup_fep_china_uni_window_ParamLimits

0xa744,	// (0x00056098) popup_fep_china_uni_window

0xa79e,	// (0x000560f2) popup_fep_japan_candidate_window_ParamLimits

0xa79e,	// (0x000560f2) popup_fep_japan_candidate_window

0xa7bc,	// (0x00056110) popup_fep_japan_predictive_window_ParamLimits

0xa7bc,	// (0x00056110) popup_fep_japan_predictive_window

0xa7ce,	// (0x00056122) popup_find_window

0xa7eb,	// (0x0005613f) popup_grid_graphic_window_ParamLimits

0xa7eb,	// (0x0005613f) popup_grid_graphic_window

0x01cc,	// (0x0004bb20) popup_large_graphic_colour_window

0xa889,	// (0x000561dd) popup_menu_window_ParamLimits

0xa889,	// (0x000561dd) popup_menu_window

0xaa5b,	// (0x000563af) popup_note_image_window

0xaa21,	// (0x00056375) popup_note_wait_window_ParamLimits

0xaa21,	// (0x00056375) popup_note_wait_window

0xaa73,	// (0x000563c7) popup_note_window_ParamLimits

0xaa73,	// (0x000563c7) popup_note_window

0xab22,	// (0x00056476) popup_query_code_window_ParamLimits

0xab22,	// (0x00056476) popup_query_code_window

0xab5c,	// (0x000564b0) popup_query_data_code_window_ParamLimits

0xab5c,	// (0x000564b0) popup_query_data_code_window

0xab79,	// (0x000564cd) popup_query_data_window_ParamLimits

0xab79,	// (0x000564cd) popup_query_data_window

0xabfb,	// (0x0005654f) popup_query_sat_info_window_ParamLimits

0xabfb,	// (0x0005654f) popup_query_sat_info_window

0xac92,	// (0x000565e6) popup_snote_single_graphic_window_ParamLimits

0xac92,	// (0x000565e6) popup_snote_single_graphic_window

0xac92,	// (0x000565e6) popup_snote_single_text_window_ParamLimits

0xac92,	// (0x000565e6) popup_snote_single_text_window

0x049f,	// (0x0004bdf3) popup_sub_window_general

0xadef,	// (0x00056743) popup_window_general_ParamLimits

0xadef,	// (0x00056743) popup_window_general

0x05e4,	// (0x0004bf38) power_save_pane

0xa4d1,	// (0x00055e25) control_pane_g1_ParamLimits

0xa4d1,	// (0x00055e25) control_pane_g1

0xa4fa,	// (0x00055e4e) control_pane_g2_ParamLimits

0xa4fa,	// (0x00055e4e) control_pane_g2

0xc68a,	// (0x00057fde) control_pane_g3_ParamLimits

0xc68a,	// (0x00057fde) control_pane_g3

0x0007,

0xf759,	// (0x0005b0ad) control_pane_g_ParamLimits

0xf759,	// (0x0005b0ad) control_pane_g

0xa562,	// (0x00055eb6) control_pane_t1_ParamLimits

0xa562,	// (0x00055eb6) control_pane_t1

0xa5ca,	// (0x00055f1e) control_pane_t2_ParamLimits

0xa5ca,	// (0x00055f1e) control_pane_t2

0x0002,

0xf76a,	// (0x0005b0be) control_pane_t_ParamLimits

0xf76a,	// (0x0005b0be) control_pane_t

0xa42a,	// (0x00055d7e) navi_navi_volume_pane_cp1

0xa432,	// (0x00055d86) status_small_icon_pane

0xc656,	// (0x00057faa) status_small_pane_g1_ParamLimits

0xc656,	// (0x00057faa) status_small_pane_g1

0xa43a,	// (0x00055d8e) status_small_pane_g2_ParamLimits

0xa43a,	// (0x00055d8e) status_small_pane_g2

0xa446,	// (0x00055d9a) status_small_pane_g3_ParamLimits

0xa446,	// (0x00055d9a) status_small_pane_g3

0xa452,	// (0x00055da6) status_small_pane_g4_ParamLimits

0xa452,	// (0x00055da6) status_small_pane_g4

0xa45e,	// (0x00055db2) status_small_pane_g5_ParamLimits

0xa45e,	// (0x00055db2) status_small_pane_g5

0xa46c,	// (0x00055dc0) status_small_pane_g6_ParamLimits

0xa46c,	// (0x00055dc0) status_small_pane_g6

0x0007,

0xf748,	// (0x0005b09c) status_small_pane_g_ParamLimits

0xf748,	// (0x0005b09c) status_small_pane_g

0xa49b,	// (0x00055def) status_small_pane_t1

0xa4bd,	// (0x00055e11) status_small_wait_pane_ParamLimits

0xa4bd,	// (0x00055e11) status_small_wait_pane

0xa192,	// (0x00055ae6) aid_levels_signal_ParamLimits

0xa192,	// (0x00055ae6) aid_levels_signal

0xa1aa,	// (0x00055afe) signal_pane_g1_ParamLimits

0xa1aa,	// (0x00055afe) signal_pane_g1

0xa1c5,	// (0x00055b19) signal_pane_g2_ParamLimits

0xa1c5,	// (0x00055b19) signal_pane_g2

0x0003,

0xf6d9,	// (0x0005b02d) signal_pane_g_ParamLimits

0xf6d9,	// (0x0005b02d) signal_pane_g

0xc14e,	// (0x00057aa2) context_pane_g1

0x90e0,	// (0x00054a34) title_pane_g1

0x9123,	// (0x00054a77) title_pane_t1

0x91af,	// (0x00054b03) title_pane_t2

0x91d5,	// (0x00054b29) title_pane_t3

0x0002,

0xf532,	// (0x0005ae86) title_pane_t

0xb1af,	// (0x00056b03) aid_levels_battery_ParamLimits

0xb1af,	// (0x00056b03) aid_levels_battery

0xb1cb,	// (0x00056b1f) battery_pane_g1_ParamLimits

0xb1cb,	// (0x00056b1f) battery_pane_g1

0xb1e8,	// (0x00056b3c) battery_pane_g2_ParamLimits

0xb1e8,	// (0x00056b3c) battery_pane_g2

0x0001,

0xf77c,	// (0x0005b0d0) battery_pane_g_ParamLimits

0xf77c,	// (0x0005b0d0) battery_pane_g

0xc890,	// (0x000581e4) uni_indicator_pane_g1

0xc8a6,	// (0x000581fa) uni_indicator_pane_g2

0xc8bc,	// (0x00058210) uni_indicator_pane_g3

0x0005,

0xf8e6,	// (0x0005b23a) uni_indicator_pane_g

0xc3f7,	// (0x00057d4b) navi_icon_pane_ParamLimits

0xc3f7,	// (0x00057d4b) navi_icon_pane

0xc340,	// (0x00057c94) navi_midp_pane

0xc413,	// (0x00057d67) navi_navi_pane

0xc41d,	// (0x00057d71) navi_text_pane_ParamLimits

0xc41d,	// (0x00057d71) navi_text_pane

0x8ea6,	// (0x000547fa) status_small_wait_pane_g1

0x9755,	// (0x000550a9) status_small_wait_pane_g2

0x0001,

0xf8e1,	// (0x0005b235) status_small_wait_pane_g

0xc7e9,	// (0x0005813d) navi_navi_icon_text_pane

0x3082,	// (0x0004e9d6) navi_navi_pane_g1_ParamLimits

0x3082,	// (0x0004e9d6) navi_navi_pane_g1

0x3094,	// (0x0004e9e8) navi_navi_pane_g2_ParamLimits

0x3094,	// (0x0004e9e8) navi_navi_pane_g2

0x0001,

0xf8af,	// (0x0005b203) navi_navi_pane_g_ParamLimits

0xf8af,	// (0x0005b203) navi_navi_pane_g

0x30a6,	// (0x0004e9fa) navi_navi_tabs_pane

0x30af,	// (0x0004ea03) navi_navi_text_pane

0xc7e9,	// (0x0005813d) navi_navi_volume_pane

0x3056,	// (0x0004e9aa) navi_text_pane_t1

0x304a,	// (0x0004e99e) navi_icon_pane_g1

0x2f9d,	// (0x0004e8f1) navi_navi_text_pane_t1

0xb6ae,	// (0x00057002) navi_navi_volume_pane_g1

0x0baf,	// (0x0004c503) volume_small_pane

0x2f03,	// (0x0004e857) navi_navi_icon_text_pane_g1

0xc741,	// (0x00058095) navi_navi_icon_text_pane_t1

0xc413,	// (0x00057d67) navi_tabs_2_long_pane

0xc413,	// (0x00057d67) navi_tabs_2_pane

0xc413,	// (0x00057d67) navi_tabs_3_long_pane

0xc413,	// (0x00057d67) navi_tabs_3_pane

0xc413,	// (0x00057d67) navi_tabs_4_pane

0x0b87,	// (0x0004c4db) tabs_2_active_pane_ParamLimits

0x0b87,	// (0x0004c4db) tabs_2_active_pane

0x0b97,	// (0x0004c4eb) tabs_2_passive_pane_ParamLimits

0x0b97,	// (0x0004c4eb) tabs_2_passive_pane

0x0b55,	// (0x0004c4a9) tabs_3_active_pane_ParamLimits

0x0b55,	// (0x0004c4a9) tabs_3_active_pane

0x0b65,	// (0x0004c4b9) tabs_3_passive_pane_ParamLimits

0x0b65,	// (0x0004c4b9) tabs_3_passive_pane

0x0b76,	// (0x0004c4ca) tabs_3_passive_pane_cp_ParamLimits

0x0b76,	// (0x0004c4ca) tabs_3_passive_pane_cp

0x0b11,	// (0x0004c465) tabs_4_active_pane_ParamLimits

0x0b11,	// (0x0004c465) tabs_4_active_pane

0x0b22,	// (0x0004c476) tabs_4_passive_pane_ParamLimits

0x0b22,	// (0x0004c476) tabs_4_passive_pane

0x0b33,	// (0x0004c487) tabs_4_passive_pane_cp_ParamLimits

0x0b33,	// (0x0004c487) tabs_4_passive_pane_cp

0x0b44,	// (0x0004c498) tabs_4_passive_pane_cp2_ParamLimits

0x0b44,	// (0x0004c498) tabs_4_passive_pane_cp2

0x0aed,	// (0x0004c441) tabs_2_long_active_pane_ParamLimits

0x0aed,	// (0x0004c441) tabs_2_long_active_pane

0x0aff,	// (0x0004c453) tabs_2_long_passive_pane_ParamLimits

0x0aff,	// (0x0004c453) tabs_2_long_passive_pane

0x0aa8,	// (0x0004c3fc) tabs_3_long_active_pane_ParamLimits

0x0aa8,	// (0x0004c3fc) tabs_3_long_active_pane

0x0ac1,	// (0x0004c415) tabs_3_long_passive_pane_ParamLimits

0x0ac1,	// (0x0004c415) tabs_3_long_passive_pane

0x0ad4,	// (0x0004c428) tabs_3_long_passive_pane_cp_ParamLimits

0x0ad4,	// (0x0004c428) tabs_3_long_passive_pane_cp

0x0a4e,	// (0x0004c3a2) volume_small_pane_g1

0x0a57,	// (0x0004c3ab) volume_small_pane_g2

0x0a60,	// (0x0004c3b4) volume_small_pane_g3

0x0a69,	// (0x0004c3bd) volume_small_pane_g4

0x0a72,	// (0x0004c3c6) volume_small_pane_g5

0x0a7b,	// (0x0004c3cf) volume_small_pane_g6

0x0a84,	// (0x0004c3d8) volume_small_pane_g7

0x0a8d,	// (0x0004c3e1) volume_small_pane_g8

0x0a96,	// (0x0004c3ea) volume_small_pane_g9

0x0a9f,	// (0x0004c3f3) volume_small_pane_g10

0x0009,

0xf87b,	// (0x0005b1cf) volume_small_pane_g

0x91e7,	// (0x00054b3b) bg_active_tab_pane_cp2_ParamLimits

0x91e7,	// (0x00054b3b) bg_active_tab_pane_cp2

0x91f5,	// (0x00054b49) tabs_3_active_pane_g1

0x91fd,	// (0x00054b51) tabs_3_active_pane_t1

0x91e7,	// (0x00054b3b) bg_passive_tab_pane_cp2_ParamLimits

0x91e7,	// (0x00054b3b) bg_passive_tab_pane_cp2

0x91f5,	// (0x00054b49) tabs_3_passive_pane_g1

0x91fd,	// (0x00054b51) tabs_3_passive_pane_t1

0x91e7,	// (0x00054b3b) bg_active_tab_pane_cp3_ParamLimits

0x91e7,	// (0x00054b3b) bg_active_tab_pane_cp3

0x920f,	// (0x00054b63) tabs_4_active_pane_g1

0x9217,	// (0x00054b6b) tabs_4_active_pane_t1

0x91e7,	// (0x00054b3b) bg_passive_tab_pane_cp3_ParamLimits

0x91e7,	// (0x00054b3b) bg_passive_tab_pane_cp3

0x920f,	// (0x00054b63) tabs_4_1_passive_pane_g1

0x9217,	// (0x00054b6b) tabs_4_1_passive_pane_t1

0x9d5e,	// (0x000556b2) list_highlight_pane_cp2

0xc9c2,	// (0x00058316) list_set_pane_ParamLimits

0xc9c2,	// (0x00058316) list_set_pane

0xca5c,	// (0x000583b0) main_pane_set_t1_ParamLimits

0xca5c,	// (0x000583b0) main_pane_set_t1

0xca7c,	// (0x000583d0) main_pane_set_t2_ParamLimits

0xca7c,	// (0x000583d0) main_pane_set_t2

0xca90,	// (0x000583e4) main_pane_set_t3_ParamLimits

0xca90,	// (0x000583e4) main_pane_set_t3

0xcaa2,	// (0x000583f6) main_pane_set_t4_ParamLimits

0xcaa2,	// (0x000583f6) main_pane_set_t4

0x0003,

0xf94b,	// (0x0005b29f) main_pane_set_t_ParamLimits

0xf94b,	// (0x0005b29f) main_pane_set_t

0xcab4,	// (0x00058408) setting_code_pane

0xcabe,	// (0x00058412) setting_slider_graphic_pane

0xcabe,	// (0x00058412) setting_slider_pane

0xcabe,	// (0x00058412) setting_text_pane

0xcabe,	// (0x00058412) setting_volume_pane

0x9229,	// (0x00054b7d) volume_set_pane

0x9231,	// (0x00054b85) bg_set_opt_pane_cp

0x923f,	// (0x00054b93) setting_slider_pane_t1

0x9258,	// (0x00054bac) setting_slider_pane_t2

0x9272,	// (0x00054bc6) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0005ae8d) setting_slider_pane_t

0x928a,	// (0x00054bde) slider_set_pane

0x8f96,	// (0x000548ea) bg_set_opt_pane_cp2

0x92a0,	// (0x00054bf4) setting_slider_graphic_pane_g1

0x92a9,	// (0x00054bfd) setting_slider_graphic_pane_t1

0x92b9,	// (0x00054c0d) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0005ae94) setting_slider_graphic_pane_t

0x92c9,	// (0x00054c1d) slider_set_pane_cp

0x8f96,	// (0x000548ea) input_focus_pane_cp1

0x357a,	// (0x0004eece) list_set_text_pane

0x8ea6,	// (0x000547fa) setting_text_pane_g1

0x8f96,	// (0x000548ea) input_focus_pane_cp2

0x8ea6,	// (0x000547fa) setting_code_pane_g1

0x92d1,	// (0x00054c25) setting_code_pane_t1

0xe893,	// (0x0005a1e7) set_text_pane_t1_ParamLimits

0xe893,	// (0x0005a1e7) set_text_pane_t1

0x9bd2,	// (0x00055526) set_opt_bg_pane_g1

0x9bda,	// (0x0005552e) set_opt_bg_pane_g2

0xc977,	// (0x000582cb) set_opt_bg_pane_g3

0x9bea,	// (0x0005553e) set_opt_bg_pane_g4

0x9bf2,	// (0x00055546) set_opt_bg_pane_g5

0x9bfa,	// (0x0005554e) set_opt_bg_pane_g6

0xc981,	// (0x000582d5) set_opt_bg_pane_g7

0xc989,	// (0x000582dd) set_opt_bg_pane_g8

0xc993,	// (0x000582e7) set_opt_bg_pane_g9

0x0008,

0xf938,	// (0x0005b28c) set_opt_bg_pane_g

0xc96a,	// (0x000582be) slider_set_pane_g1

0x0c1c,	// (0x0004c570) slider_set_pane_g2

0x0006,

0xf929,	// (0x0005b27d) slider_set_pane_g

0xb6b6,	// (0x0005700a) volume_set_pane_g1

0xb6be,	// (0x00057012) volume_set_pane_g2

0xb6c6,	// (0x0005701a) volume_set_pane_g3

0xb6ce,	// (0x00057022) volume_set_pane_g4

0xb6d6,	// (0x0005702a) volume_set_pane_g5

0xb6de,	// (0x00057032) volume_set_pane_g6

0xb6e6,	// (0x0005703a) volume_set_pane_g7

0xb6ee,	// (0x00057042) volume_set_pane_g8

0xb6f6,	// (0x0005704a) volume_set_pane_g9

0xb6fe,	// (0x00057052) volume_set_pane_g10

0x0009,

0xf901,	// (0x0005b255) volume_set_pane_g

0x92df,	// (0x00054c33) indicator_pane_ParamLimits

0x92df,	// (0x00054c33) indicator_pane

0x9307,	// (0x00054c5b) main_idle_pane_g2_ParamLimits

0x9307,	// (0x00054c5b) main_idle_pane_g2

0x933f,	// (0x00054c93) main_pane_idle_g1_ParamLimits

0x933f,	// (0x00054c93) main_pane_idle_g1

0x9366,	// (0x00054cba) popup_clock_digital_analogue_window_ParamLimits

0x9366,	// (0x00054cba) popup_clock_digital_analogue_window

0x937d,	// (0x00054cd1) soft_indicator_pane_ParamLimits

0x937d,	// (0x00054cd1) soft_indicator_pane

0x93a1,	// (0x00054cf5) wallpaper_pane_ParamLimits

0x93a1,	// (0x00054cf5) wallpaper_pane

0x8ea6,	// (0x000547fa) wallpaper_pane_g1

0x93bb,	// (0x00054d0f) indicator_pane_g1_ParamLimits

0x93bb,	// (0x00054d0f) indicator_pane_g1

0x392f,	// (0x0004f283) navi_navi_icon_text_pane_srt_g1

0x93e0,	// (0x00054d34) soft_indicator_pane_t1

0x93fa,	// (0x00054d4e) aid_ps_area_pane

0x940b,	// (0x00054d5f) aid_ps_clock_pane

0x9419,	// (0x00054d6d) aid_ps_indicator_pane

0x9425,	// (0x00054d79) indicator_ps_pane_ParamLimits

0x9425,	// (0x00054d79) indicator_ps_pane

0x9434,	// (0x00054d88) power_save_pane_g1_ParamLimits

0x9434,	// (0x00054d88) power_save_pane_g1

0x9440,	// (0x00054d94) power_save_pane_g2_ParamLimits

0x9440,	// (0x00054d94) power_save_pane_g2

0xe704,	// (0x0005a058) aid_navinavi_width_pane

0x93fa,	// (0x00054d4e) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005ae99) power_save_pane_g_ParamLimits

0xf545,	// (0x0005ae99) power_save_pane_g

0x944e,	// (0x00054da2) power_save_pane_t1_ParamLimits

0x944e,	// (0x00054da2) power_save_pane_t1

0x940b,	// (0x00054d5f) aid_ps_clock_pane_ParamLimits

0x9419,	// (0x00054d6d) aid_ps_indicator_pane_ParamLimits

0x9460,	// (0x00054db4) power_save_pane_t4_ParamLimits

0x9460,	// (0x00054db4) power_save_pane_t4

0x0001,

0xf54a,	// (0x0005ae9e) power_save_pane_t_ParamLimits

0xf54a,	// (0x0005ae9e) power_save_pane_t

0x948a,	// (0x00054dde) power_save_t3_ParamLimits

0x948a,	// (0x00054dde) power_save_t3

0x9475,	// (0x00054dc9) power_save_t2_ParamLimits

0x9475,	// (0x00054dc9) power_save_t2

0x949f,	// (0x00054df3) indicator_ps_pane_g1

0x94a8,	// (0x00054dfc) ai_gene_pane_ParamLimits

0x94a8,	// (0x00054dfc) ai_gene_pane

0x94bf,	// (0x00054e13) ai_links_pane_ParamLimits

0x94bf,	// (0x00054e13) ai_links_pane

0x94d7,	// (0x00054e2b) indicator_pane_cp1_ParamLimits

0x94d7,	// (0x00054e2b) indicator_pane_cp1

0x94e6,	// (0x00054e3a) main_pane_idle_g1_cp_ParamLimits

0x94e6,	// (0x00054e3a) main_pane_idle_g1_cp

0x94fe,	// (0x00054e52) popup_ai_links_title_window

0x9507,	// (0x00054e5b) soft_indicator_pane_cp1_ParamLimits

0x9507,	// (0x00054e5b) soft_indicator_pane_cp1

0x3341,	// (0x0004ec95) ai_links_pane_g1

0x334a,	// (0x0004ec9e) grid_ai_links_pane

0xc887,	// (0x000581db) ai_gene_pane_1

0x332f,	// (0x0004ec83) ai_gene_pane_2

0x3338,	// (0x0004ec8c) list_highlight_pane_cp4

0xc863,	// (0x000581b7) cell_ai_link_pane_ParamLimits

0xc863,	// (0x000581b7) cell_ai_link_pane

0x3300,	// (0x0004ec54) cell_ai_link_pane_g1

0x9755,	// (0x000550a9) cell_ai_link_pane_g2

0x0001,

0xf8dc,	// (0x0005b230) cell_ai_link_pane_g

0x8f96,	// (0x000548ea) grid_highlight_cp2

0x8f96,	// (0x000548ea) bg_popup_sub_pane_cp1

0x9529,	// (0x00054e7d) popup_ai_links_title_window_t1

0x3250,	// (0x0004eba4) ai_gene_pane_1_g1_ParamLimits

0x3250,	// (0x0004eba4) ai_gene_pane_1_g1

0x325c,	// (0x0004ebb0) ai_gene_pane_1_g2_ParamLimits

0x325c,	// (0x0004ebb0) ai_gene_pane_1_g2

0x0001,

0xf8d2,	// (0x0005b226) ai_gene_pane_1_g_ParamLimits

0xf8d2,	// (0x0005b226) ai_gene_pane_1_g

0x3269,	// (0x0004ebbd) ai_gene_pane_1_t1_ParamLimits

0x3269,	// (0x0004ebbd) ai_gene_pane_1_t1

0x329d,	// (0x0004ebf1) grid_ai_soft_ind_pane

0x323b,	// (0x0004eb8f) ai_gene_pane_2_t1_ParamLimits

0x323b,	// (0x0004eb8f) ai_gene_pane_2_t1

0x9538,	// (0x00054e8c) main_pane_empty_t1_ParamLimits

0x9538,	// (0x00054e8c) main_pane_empty_t1

0x9550,	// (0x00054ea4) main_pane_empty_t2_ParamLimits

0x9550,	// (0x00054ea4) main_pane_empty_t2

0x9565,	// (0x00054eb9) main_pane_empty_t3_ParamLimits

0x9565,	// (0x00054eb9) main_pane_empty_t3

0x9577,	// (0x00054ecb) main_pane_empty_t4_ParamLimits

0x9577,	// (0x00054ecb) main_pane_empty_t4

0x9589,	// (0x00054edd) main_pane_empty_t5_ParamLimits

0x9589,	// (0x00054edd) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0005aea3) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0005aea3) main_pane_empty_t

0x9c95,	// (0x000555e9) bg_popup_window_pane_ParamLimits

0x9c95,	// (0x000555e9) bg_popup_window_pane

0xc7dd,	// (0x00058131) find_popup_pane_cp2_ParamLimits

0xc7dd,	// (0x00058131) find_popup_pane_cp2

0x2fb7,	// (0x0004e90b) heading_pane_ParamLimits

0x2fb7,	// (0x0004e90b) heading_pane

0x8f96,	// (0x000548ea) bg_popup_sub_pane

0xc75e,	// (0x000580b2) bg_popup_window_pane_g1_ParamLimits

0xc75e,	// (0x000580b2) bg_popup_window_pane_g1

0xc76d,	// (0x000580c1) bg_popup_window_pane_g2_ParamLimits

0xc76d,	// (0x000580c1) bg_popup_window_pane_g2

0xc779,	// (0x000580cd) bg_popup_window_pane_g3_ParamLimits

0xc779,	// (0x000580cd) bg_popup_window_pane_g3

0xc785,	// (0x000580d9) bg_popup_window_pane_g4_ParamLimits

0xc785,	// (0x000580d9) bg_popup_window_pane_g4

0xc794,	// (0x000580e8) bg_popup_window_pane_g5_ParamLimits

0xc794,	// (0x000580e8) bg_popup_window_pane_g5

0xc7a4,	// (0x000580f8) bg_popup_window_pane_g6_ParamLimits

0xc7a4,	// (0x000580f8) bg_popup_window_pane_g6

0xc7b0,	// (0x00058104) bg_popup_window_pane_g7_ParamLimits

0xc7b0,	// (0x00058104) bg_popup_window_pane_g7

0xc7bf,	// (0x00058113) bg_popup_window_pane_g8_ParamLimits

0xc7bf,	// (0x00058113) bg_popup_window_pane_g8

0xc7ce,	// (0x00058122) bg_popup_window_pane_g9_ParamLimits

0xc7ce,	// (0x00058122) bg_popup_window_pane_g9

0x2f91,	// (0x0004e8e5) bg_popup_window_pane_g10_ParamLimits

0x2f91,	// (0x0004e8e5) bg_popup_window_pane_g10

0x0009,

0xf89a,	// (0x0005b1ee) bg_popup_window_pane_g_ParamLimits

0xf89a,	// (0x0005b1ee) bg_popup_window_pane_g

0x2eba,	// (0x0004e80e) bg_popup_heading_pane_ParamLimits

0x2eba,	// (0x0004e80e) bg_popup_heading_pane

0x0d4f,	// (0x0004c6a3) tabs_4_passive_pane_cp_srt_ParamLimits

0x0d4f,	// (0x0004c6a3) tabs_4_passive_pane_cp_srt

0x0d61,	// (0x0004c6b5) tabs_4_passive_pane_srt_ParamLimits

0x2ece,	// (0x0004e822) heading_pane_g2

0x0d61,	// (0x0004c6b5) tabs_4_passive_pane_srt

0x2244,	// (0x0004db98) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2244,	// (0x0004db98) bg_passive_tab_pane_cp3_srt

0x2ed6,	// (0x0004e82a) heading_pane_t1_ParamLimits

0x2ed6,	// (0x0004e82a) heading_pane_t1

0x2eed,	// (0x0004e841) heading_pane_t2_ParamLimits

0x2eed,	// (0x0004e841) heading_pane_t2

0x0001,

0xf895,	// (0x0005b1e9) heading_pane_t_ParamLimits

0xf895,	// (0x0005b1e9) heading_pane_t

0x29f7,	// (0x0004e34b) bg_popup_heading_pane_g1

0x2aa6,	// (0x0004e3fa) bg_popup_heading_pane_g2

0x2ab0,	// (0x0004e404) bg_popup_heading_pane_g3

0x2aba,	// (0x0004e40e) bg_popup_heading_pane_g4

0x2ac4,	// (0x0004e418) bg_popup_heading_pane_g5

0x2ace,	// (0x0004e422) bg_popup_heading_pane_g6

0x2ad6,	// (0x0004e42a) bg_popup_heading_pane_g7

0x2ade,	// (0x0004e432) bg_popup_heading_pane_g8

0x2ae8,	// (0x0004e43c) bg_popup_heading_pane_g9

0x0008,

0xf851,	// (0x0005b1a5) bg_popup_heading_pane_g

0x21b8,	// (0x0004db0c) bg_popup_sub_pane_g1

0x21c0,	// (0x0004db14) bg_popup_sub_pane_g2

0x21c8,	// (0x0004db1c) bg_popup_sub_pane_g3

0x21d0,	// (0x0004db24) bg_popup_sub_pane_g4

0x21d8,	// (0x0004db2c) bg_popup_sub_pane_g5

0x21e0,	// (0x0004db34) bg_popup_sub_pane_g6

0x21e8,	// (0x0004db3c) bg_popup_sub_pane_g7

0x21f0,	// (0x0004db44) bg_popup_sub_pane_g8

0x21f8,	// (0x0004db4c) bg_popup_sub_pane_g9

0x0008,

0xf82b,	// (0x0005b17f) bg_popup_sub_pane_g

0x91e7,	// (0x00054b3b) bg_popup_window_pane_cp5_ParamLimits

0x91e7,	// (0x00054b3b) bg_popup_window_pane_cp5

0x95a9,	// (0x00054efd) popup_note_window_g1_ParamLimits

0x95a9,	// (0x00054efd) popup_note_window_g1

0x95b5,	// (0x00054f09) popup_note_window_t1_ParamLimits

0x95b5,	// (0x00054f09) popup_note_window_t1

0x95cb,	// (0x00054f1f) popup_note_window_t2_ParamLimits

0x95cb,	// (0x00054f1f) popup_note_window_t2

0x95e1,	// (0x00054f35) popup_note_window_t3_ParamLimits

0x95e1,	// (0x00054f35) popup_note_window_t3

0x95f7,	// (0x00054f4b) popup_note_window_t4_ParamLimits

0x95f7,	// (0x00054f4b) popup_note_window_t4

0x961f,	// (0x00054f73) popup_note_window_t5_ParamLimits

0x961f,	// (0x00054f73) popup_note_window_t5

0x0004,

0xf55a,	// (0x0005aeae) popup_note_window_t_ParamLimits

0xf55a,	// (0x0005aeae) popup_note_window_t

0x9669,	// (0x00054fbd) bg_popup_window_pane_cp6_ParamLimits

0x9669,	// (0x00054fbd) bg_popup_window_pane_cp6

0x2973,	// (0x0004e2c7) popup_note_image_window_g1_ParamLimits

0x2973,	// (0x0004e2c7) popup_note_image_window_g1

0xb5c9,	// (0x00056f1d) popup_note_image_window_g2_ParamLimits

0xb5c9,	// (0x00056f1d) popup_note_image_window_g2

0x0001,

0xf81f,	// (0x0005b173) popup_note_image_window_g_ParamLimits

0xf81f,	// (0x0005b173) popup_note_image_window_g

0x2998,	// (0x0004e2ec) popup_note_image_window_t1_ParamLimits

0x2998,	// (0x0004e2ec) popup_note_image_window_t1

0x29b1,	// (0x0004e305) popup_note_image_window_t2_ParamLimits

0x29b1,	// (0x0004e305) popup_note_image_window_t2

0x29ca,	// (0x0004e31e) popup_note_image_window_t3_ParamLimits

0x29ca,	// (0x0004e31e) popup_note_image_window_t3

0x0002,

0xf824,	// (0x0005b178) popup_note_image_window_t_ParamLimits

0xf824,	// (0x0005b178) popup_note_image_window_t

0x283c,	// (0x0004e190) bg_popup_window_pane_cp7_ParamLimits

0x283c,	// (0x0004e190) bg_popup_window_pane_cp7

0x286c,	// (0x0004e1c0) popup_note_wait_window_g1_ParamLimits

0x286c,	// (0x0004e1c0) popup_note_wait_window_g1

0x2878,	// (0x0004e1cc) popup_note_wait_window_g2_ParamLimits

0x2878,	// (0x0004e1cc) popup_note_wait_window_g2

0x0002,

0xf80d,	// (0x0005b161) popup_note_wait_window_g_ParamLimits

0xf80d,	// (0x0005b161) popup_note_wait_window_g

0x2890,	// (0x0004e1e4) popup_note_wait_window_t1_ParamLimits

0x2890,	// (0x0004e1e4) popup_note_wait_window_t1

0xb56a,	// (0x00056ebe) popup_note_wait_window_t2_ParamLimits

0xb56a,	// (0x00056ebe) popup_note_wait_window_t2

0xb587,	// (0x00056edb) popup_note_wait_window_t3_ParamLimits

0xb587,	// (0x00056edb) popup_note_wait_window_t3

0xb59a,	// (0x00056eee) popup_note_wait_window_t4_ParamLimits

0xb59a,	// (0x00056eee) popup_note_wait_window_t4

0x0004,

0xf814,	// (0x0005b168) popup_note_wait_window_t_ParamLimits

0xf814,	// (0x0005b168) popup_note_wait_window_t

0x290c,	// (0x0004e260) wait_bar_pane_ParamLimits

0x290c,	// (0x0004e260) wait_bar_pane

0x8f96,	// (0x000548ea) wait_anim_pane

0x8f96,	// (0x000548ea) wait_border_pane

0x8ea6,	// (0x000547fa) wait_anim_pane_g1

0x8ea6,	// (0x000547fa) wait_anim_pane_g2

0x0001,

0xf6d4,	// (0x0005b028) wait_anim_pane_g

0x27e8,	// (0x0004e13c) wait_border_pane_g1

0x27f3,	// (0x0004e147) wait_border_pane_g2

0x27fc,	// (0x0004e150) wait_border_pane_g3

0x0002,

0xf806,	// (0x0005b15a) wait_border_pane_g

0x2653,	// (0x0004dfa7) bg_popup_window_pane_cp16_ParamLimits

0x2653,	// (0x0004dfa7) bg_popup_window_pane_cp16

0xb51a,	// (0x00056e6e) indicator_popup_pane_cp4_ParamLimits

0xb51a,	// (0x00056e6e) indicator_popup_pane_cp4

0x2767,	// (0x0004e0bb) popup_query_data_window_t1_ParamLimits

0x2767,	// (0x0004e0bb) popup_query_data_window_t1

0x2779,	// (0x0004e0cd) popup_query_data_window_t2_ParamLimits

0x2779,	// (0x0004e0cd) popup_query_data_window_t2

0x2792,	// (0x0004e0e6) popup_query_data_window_t3_ParamLimits

0x2792,	// (0x0004e0e6) popup_query_data_window_t3

0x0002,

0xf7ff,	// (0x0005b153) popup_query_data_window_t_ParamLimits

0xf7ff,	// (0x0005b153) popup_query_data_window_t

0xb52e,	// (0x00056e82) query_popup_data_pane_ParamLimits

0xb52e,	// (0x00056e82) query_popup_data_pane

0xb542,	// (0x00056e96) query_popup_data_pane_cp1_ParamLimits

0xb542,	// (0x00056e96) query_popup_data_pane_cp1

0x2653,	// (0x0004dfa7) bg_popup_window_pane_cp10_ParamLimits

0x2653,	// (0x0004dfa7) bg_popup_window_pane_cp10

0xb495,	// (0x00056de9) indicator_popup_pane_ParamLimits

0xb495,	// (0x00056de9) indicator_popup_pane

0xb4b7,	// (0x00056e0b) popup_query_code_window_t1_ParamLimits

0xb4b7,	// (0x00056e0b) popup_query_code_window_t1

0xb4d1,	// (0x00056e25) popup_query_code_window_t2_ParamLimits

0xb4d1,	// (0x00056e25) popup_query_code_window_t2

0x270a,	// (0x0004e05e) popup_query_code_window_t3_ParamLimits

0x270a,	// (0x0004e05e) popup_query_code_window_t3

0x0002,

0xf7f8,	// (0x0005b14c) popup_query_code_window_t_ParamLimits

0xf7f8,	// (0x0005b14c) popup_query_code_window_t

0x2739,	// (0x0004e08d) query_popup_pane_ParamLimits

0x2739,	// (0x0004e08d) query_popup_pane

0x9669,	// (0x00054fbd) bg_popup_window_pane_cp15_ParamLimits

0x9669,	// (0x00054fbd) bg_popup_window_pane_cp15

0x9687,	// (0x00054fdb) indicator_popup_pane_cp1_ParamLimits

0x9687,	// (0x00054fdb) indicator_popup_pane_cp1

0x969a,	// (0x00054fee) indicator_popup_pane_cp2_ParamLimits

0x969a,	// (0x00054fee) indicator_popup_pane_cp2

0x96ad,	// (0x00055001) popup_query_data_code_window_g1_ParamLimits

0x96ad,	// (0x00055001) popup_query_data_code_window_g1

0x96c0,	// (0x00055014) popup_query_data_code_window_t1_ParamLimits

0x96c0,	// (0x00055014) popup_query_data_code_window_t1

0x96d2,	// (0x00055026) popup_query_data_code_window_t2_ParamLimits

0x96d2,	// (0x00055026) popup_query_data_code_window_t2

0x96e4,	// (0x00055038) popup_query_data_code_window_t3_ParamLimits

0x96e4,	// (0x00055038) popup_query_data_code_window_t3

0x96fa,	// (0x0005504e) popup_query_data_code_window_t4_ParamLimits

0x96fa,	// (0x0005504e) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0005aeb9) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0005aeb9) popup_query_data_code_window_t

0xc3b5,	// (0x00057d09) list_single_midp_graphic_pane_g3

0x9712,	// (0x00055066) query_popup_data_pane_cp2_ParamLimits

0x9725,	// (0x00055079) query_popup_pane_cp2_ParamLimits

0x9725,	// (0x00055079) query_popup_pane_cp2

0x8f96,	// (0x000548ea) bg_popup_window_pane_cp11

0x2637,	// (0x0004df8b) heading_pane_cp5

0x263f,	// (0x0004df93) listscroll_popup_info_pane

0x8f96,	// (0x000548ea) input_focus_pane_cp3

0x9738,	// (0x0005508c) query_popup_pane_t1

0x9746,	// (0x0005509a) list_popup_info_pane_ParamLimits

0x9746,	// (0x0005509a) list_popup_info_pane

0x9755,	// (0x000550a9) listscroll_popup_info_pane_g1

0x975d,	// (0x000550b1) scroll_pane_cp7

0x9767,	// (0x000550bb) popup_info_list_pane_t1_ParamLimits

0x9767,	// (0x000550bb) popup_info_list_pane_t1

0x9781,	// (0x000550d5) popup_info_list_pane_t2_ParamLimits

0x9781,	// (0x000550d5) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0005aec2) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0005aec2) popup_info_list_pane_t

0x8f96,	// (0x000548ea) bg_popup_window_pane_cp12

0xcc63,	// (0x000585b7) find_popup_pane

0x9231,	// (0x00054b85) bg_popup_window_pane_cp3

0x979b,	// (0x000550ef) heading_pane_cp3

0x97aa,	// (0x000550fe) listscroll_popup_graphic_pane

0x8f96,	// (0x000548ea) bg_popup_window_pane_cp4

0x980a,	// (0x0005515e) heading_pane_cp4

0x9814,	// (0x00055168) listscroll_popup_colour_pane

0x981c,	// (0x00055170) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x981c,	// (0x00055170) cell_large_graphic_colour_none_popup_pane

0x9830,	// (0x00055184) grid_large_graphic_colour_popup_pane_ParamLimits

0x9830,	// (0x00055184) grid_large_graphic_colour_popup_pane

0x9854,	// (0x000551a8) listscroll_popup_colour_pane_g1_ParamLimits

0x9854,	// (0x000551a8) listscroll_popup_colour_pane_g1

0x986b,	// (0x000551bf) listscroll_popup_colour_pane_g2_ParamLimits

0x986b,	// (0x000551bf) listscroll_popup_colour_pane_g2

0x9882,	// (0x000551d6) listscroll_popup_colour_pane_g3_ParamLimits

0x9882,	// (0x000551d6) listscroll_popup_colour_pane_g3

0x9892,	// (0x000551e6) listscroll_popup_colour_pane_g4_ParamLimits

0x9892,	// (0x000551e6) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0005aec7) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0005aec7) listscroll_popup_colour_pane_g

0x98a2,	// (0x000551f6) scroll_pane_cp6_ParamLimits

0x98a2,	// (0x000551f6) scroll_pane_cp6

0x98b4,	// (0x00055208) cell_large_graphic_colour_popup_pane_ParamLimits

0x98b4,	// (0x00055208) cell_large_graphic_colour_popup_pane

0x98d3,	// (0x00055227) cell_large_graphic_colour_none_popup_pane_t1

0x8f96,	// (0x000548ea) grid_highlight_pane_cp5

0x98e2,	// (0x00055236) cell_large_graphic_colour_popup_pane_g1

0x98ea,	// (0x0005523e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0005aed0) cell_large_graphic_colour_popup_pane_g

0x98f2,	// (0x00055246) cell_large_graphic_colour_popup_pane_g2_copy1

0x98fb,	// (0x0005524f) grid_highlight_pane_cp4

0x9903,	// (0x00055257) bg_popup_window_pane_cp8_ParamLimits

0x9903,	// (0x00055257) bg_popup_window_pane_cp8

0x991e,	// (0x00055272) popup_snote_single_text_window_g1_ParamLimits

0x991e,	// (0x00055272) popup_snote_single_text_window_g1

0x9930,	// (0x00055284) popup_snote_single_text_window_t1_ParamLimits

0x9930,	// (0x00055284) popup_snote_single_text_window_t1

0x9943,	// (0x00055297) popup_snote_single_text_window_t2_ParamLimits

0x9943,	// (0x00055297) popup_snote_single_text_window_t2

0x9956,	// (0x000552aa) popup_snote_single_text_window_t3_ParamLimits

0x9956,	// (0x000552aa) popup_snote_single_text_window_t3

0x998f,	// (0x000552e3) popup_snote_single_text_window_t4_ParamLimits

0x998f,	// (0x000552e3) popup_snote_single_text_window_t4

0x99c3,	// (0x00055317) popup_snote_single_text_window_t5_ParamLimits

0x99c3,	// (0x00055317) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0005aed5) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0005aed5) popup_snote_single_text_window_t

0x99f2,	// (0x00055346) bg_popup_window_pane_cp9_ParamLimits

0x99f2,	// (0x00055346) bg_popup_window_pane_cp9

0x991e,	// (0x00055272) popup_snote_single_graphic_window_g1_ParamLimits

0x991e,	// (0x00055272) popup_snote_single_graphic_window_g1

0x9a00,	// (0x00055354) popup_snote_single_graphic_window_g2_ParamLimits

0x9a00,	// (0x00055354) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0005aee0) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0005aee0) popup_snote_single_graphic_window_g

0x9a0c,	// (0x00055360) popup_snote_single_graphic_window_t1_ParamLimits

0x9a0c,	// (0x00055360) popup_snote_single_graphic_window_t1

0x9a1f,	// (0x00055373) popup_snote_single_graphic_window_t2_ParamLimits

0x9a1f,	// (0x00055373) popup_snote_single_graphic_window_t2

0x9956,	// (0x000552aa) popup_snote_single_graphic_window_t3_ParamLimits

0x9956,	// (0x000552aa) popup_snote_single_graphic_window_t3

0x998f,	// (0x000552e3) popup_snote_single_graphic_window_t4_ParamLimits

0x998f,	// (0x000552e3) popup_snote_single_graphic_window_t4

0x9a32,	// (0x00055386) popup_snote_single_graphic_window_t5_ParamLimits

0x9a32,	// (0x00055386) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0005aee5) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0005aee5) popup_snote_single_graphic_window_t

0x388b,	// (0x0004f1df) grid_graphic_popup_pane_ParamLimits

0x388b,	// (0x0004f1df) grid_graphic_popup_pane

0x38b5,	// (0x0004f209) listscroll_popup_graphic_pane_g1_ParamLimits

0x38b5,	// (0x0004f209) listscroll_popup_graphic_pane_g1

0xcc01,	// (0x00058555) listscroll_popup_graphic_pane_g2_ParamLimits

0xcc01,	// (0x00058555) listscroll_popup_graphic_pane_g2

0x0001,

0xf975,	// (0x0005b2c9) listscroll_popup_graphic_pane_g_ParamLimits

0xf975,	// (0x0005b2c9) listscroll_popup_graphic_pane_g

0x38dd,	// (0x0004f231) scroll_pane_cp5

0xcbc0,	// (0x00058514) cell_graphic_popup_pane_ParamLimits

0xcbc0,	// (0x00058514) cell_graphic_popup_pane

0x3802,	// (0x0004f156) cell_graphic_popup_pane_g1

0x380a,	// (0x0004f15e) cell_graphic_popup_pane_g2

0x98f2,	// (0x00055246) cell_graphic_popup_pane_g3

0x0002,

0xf96e,	// (0x0005b2c2) cell_graphic_popup_pane_g

0x3813,	// (0x0004f167) cell_graphic_popup_pane_t2

0x98fb,	// (0x0005524f) grid_highlight_pane_cp3

0x9a73,	// (0x000553c7) list_gen_pane_ParamLimits

0x9a73,	// (0x000553c7) list_gen_pane

0x9aa5,	// (0x000553f9) scroll_pane

0xcb2a,	// (0x0005847e) bg_list_pane_g1_ParamLimits

0xcb2a,	// (0x0005847e) bg_list_pane_g1

0xcb45,	// (0x00058499) bg_list_pane_g2_ParamLimits

0xcb45,	// (0x00058499) bg_list_pane_g2

0xcb58,	// (0x000584ac) bg_list_pane_g3_ParamLimits

0xcb58,	// (0x000584ac) bg_list_pane_g3

0xcb6a,	// (0x000584be) bg_list_pane_g4_ParamLimits

0xcb6a,	// (0x000584be) bg_list_pane_g4

0xcb7c,	// (0x000584d0) bg_list_pane_g5_ParamLimits

0xcb7c,	// (0x000584d0) bg_list_pane_g5

0x0004,

0xf963,	// (0x0005b2b7) bg_list_pane_g_ParamLimits

0xf963,	// (0x0005b2b7) bg_list_pane_g

0xb772,	// (0x000570c6) list_double2_graphic_large_graphic_pane_ParamLimits

0xb772,	// (0x000570c6) list_double2_graphic_large_graphic_pane

0xb772,	// (0x000570c6) list_double2_graphic_pane_ParamLimits

0xb772,	// (0x000570c6) list_double2_graphic_pane

0xb772,	// (0x000570c6) list_double2_large_graphic_pane_ParamLimits

0xb772,	// (0x000570c6) list_double2_large_graphic_pane

0xb772,	// (0x000570c6) list_double2_pane_ParamLimits

0xb772,	// (0x000570c6) list_double2_pane

0xb772,	// (0x000570c6) list_double_graphic_heading_pane_ParamLimits

0xb772,	// (0x000570c6) list_double_graphic_heading_pane

0xb772,	// (0x000570c6) list_double_graphic_pane_ParamLimits

0xb772,	// (0x000570c6) list_double_graphic_pane

0xb772,	// (0x000570c6) list_double_heading_pane_ParamLimits

0xb772,	// (0x000570c6) list_double_heading_pane

0xb772,	// (0x000570c6) list_double_large_graphic_pane_ParamLimits

0xb772,	// (0x000570c6) list_double_large_graphic_pane

0xb772,	// (0x000570c6) list_double_number_pane_ParamLimits

0xb772,	// (0x000570c6) list_double_number_pane

0xb772,	// (0x000570c6) list_double_pane_ParamLimits

0xb772,	// (0x000570c6) list_double_pane

0xb772,	// (0x000570c6) list_double_time_pane_ParamLimits

0xb772,	// (0x000570c6) list_double_time_pane

0xb772,	// (0x000570c6) list_setting_number_pane_ParamLimits

0xb772,	// (0x000570c6) list_setting_number_pane

0xb772,	// (0x000570c6) list_setting_pane_ParamLimits

0xb772,	// (0x000570c6) list_setting_pane

0x9d00,	// (0x00055654) list_single_2graphic_pane_ParamLimits

0x9d00,	// (0x00055654) list_single_2graphic_pane

0x9d00,	// (0x00055654) list_single_graphic_heading_pane_ParamLimits

0x9d00,	// (0x00055654) list_single_graphic_heading_pane

0x9d00,	// (0x00055654) list_single_graphic_pane_ParamLimits

0x9d00,	// (0x00055654) list_single_graphic_pane

0x9d00,	// (0x00055654) list_single_heading_pane_ParamLimits

0x9d00,	// (0x00055654) list_single_heading_pane

0xcb17,	// (0x0005846b) list_single_large_graphic_pane_ParamLimits

0xcb17,	// (0x0005846b) list_single_large_graphic_pane

0x9d00,	// (0x00055654) list_single_number_heading_pane_ParamLimits

0x9d00,	// (0x00055654) list_single_number_heading_pane

0x9d00,	// (0x00055654) list_single_number_pane_ParamLimits

0x9d00,	// (0x00055654) list_single_number_pane

0x9d00,	// (0x00055654) list_single_pane_ParamLimits

0x9d00,	// (0x00055654) list_single_pane

0x8f96,	// (0x000548ea) list_highlight_pane_cp1

0xc027,	// (0x0005797b) list_single_pane_g1_ParamLimits

0xc027,	// (0x0005797b) list_single_pane_g1

0x0942,	// (0x0004c296) list_single_pane_g2_ParamLimits

0x0942,	// (0x0004c296) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0005af01) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0005af01) list_single_pane_g

0x8cd5,	// (0x00054629) list_single_pane_t1_ParamLimits

0x8cd5,	// (0x00054629) list_single_pane_t1

0xc027,	// (0x0005797b) list_single_number_pane_g1_ParamLimits

0xc027,	// (0x0005797b) list_single_number_pane_g1

0x0942,	// (0x0004c296) list_single_number_pane_g2_ParamLimits

0x0942,	// (0x0004c296) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0005af01) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0005af01) list_single_number_pane_g

0xe8b8,	// (0x0005a20c) list_single_number_pane_t1_ParamLimits

0xe8b8,	// (0x0005a20c) list_single_number_pane_t1

0x8c95,	// (0x000545e9) list_single_number_pane_t2_ParamLimits

0x8c95,	// (0x000545e9) list_single_number_pane_t2

0x0001,

0xf924,	// (0x0005b278) list_single_number_pane_t_ParamLimits

0xf924,	// (0x0005b278) list_single_number_pane_t

0xe8ac,	// (0x0005a200) list_single_graphic_pane_g1_ParamLimits

0xe8ac,	// (0x0005a200) list_single_graphic_pane_g1

0xc027,	// (0x0005797b) list_single_graphic_pane_g2_ParamLimits

0xc027,	// (0x0005797b) list_single_graphic_pane_g2

0x0942,	// (0x0004c296) list_single_graphic_pane_g3_ParamLimits

0x0942,	// (0x0004c296) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0005aef0) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0005aef0) list_single_graphic_pane_g

0xe8b8,	// (0x0005a20c) list_single_graphic_pane_t1_ParamLimits

0xe8b8,	// (0x0005a20c) list_single_graphic_pane_t1

0x8663,	// (0x00053fb7) list_single_heading_pane_g1_ParamLimits

0x8663,	// (0x00053fb7) list_single_heading_pane_g1

0x0942,	// (0x0004c296) list_single_heading_pane_g2_ParamLimits

0x0942,	// (0x0004c296) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0005aef7) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0005aef7) list_single_heading_pane_g

0x8676,	// (0x00053fca) list_single_heading_pane_t1_ParamLimits

0x8676,	// (0x00053fca) list_single_heading_pane_t1

0x9ad9,	// (0x0005542d) list_single_heading_pane_t2_ParamLimits

0x9ad9,	// (0x0005542d) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0005aefc) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0005aefc) list_single_heading_pane_t

0xc027,	// (0x0005797b) list_single_number_heading_pane_g1_ParamLimits

0xc027,	// (0x0005797b) list_single_number_heading_pane_g1

0x0942,	// (0x0004c296) list_single_number_heading_pane_g2_ParamLimits

0x0942,	// (0x0004c296) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0005af01) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0005af01) list_single_number_heading_pane_g

0x868c,	// (0x00053fe0) list_single_number_heading_pane_t1_ParamLimits

0x868c,	// (0x00053fe0) list_single_number_heading_pane_t1

0x86a2,	// (0x00053ff6) list_single_number_heading_pane_t2_ParamLimits

0x86a2,	// (0x00053ff6) list_single_number_heading_pane_t2

0x86b4,	// (0x00054008) list_single_number_heading_pane_t3_ParamLimits

0x86b4,	// (0x00054008) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0005af06) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0005af06) list_single_number_heading_pane_t

0x86c6,	// (0x0005401a) list_single_graphic_heading_pane_g1_ParamLimits

0x86c6,	// (0x0005401a) list_single_graphic_heading_pane_g1

0x9aeb,	// (0x0005543f) list_single_graphic_heading_pane_g4_ParamLimits

0x9aeb,	// (0x0005543f) list_single_graphic_heading_pane_g4

0x0942,	// (0x0004c296) list_single_graphic_heading_pane_g5_ParamLimits

0x0942,	// (0x0004c296) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0005af0d) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0005af0d) list_single_graphic_heading_pane_g

0x868c,	// (0x00053fe0) list_single_graphic_heading_pane_t1_ParamLimits

0x868c,	// (0x00053fe0) list_single_graphic_heading_pane_t1

0x86dc,	// (0x00054030) list_single_graphic_heading_pane_t2_ParamLimits

0x86dc,	// (0x00054030) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0005af14) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0005af14) list_single_graphic_heading_pane_t

0x0e45,	// (0x0004c799) list_single_large_graphic_pane_g1_ParamLimits

0x0e45,	// (0x0004c799) list_single_large_graphic_pane_g1

0xf0ba,	// (0x0005aa0e) list_single_large_graphic_pane_g2_ParamLimits

0xf0ba,	// (0x0005aa0e) list_single_large_graphic_pane_g2

0xf0c6,	// (0x0005aa1a) list_single_large_graphic_pane_g3_ParamLimits

0xf0c6,	// (0x0005aa1a) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0005af19) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0005af19) list_single_large_graphic_pane_g

0x27f3,	// (0x0004e147) wait_border_pane_g2_copy1

0x9afc,	// (0x00055450) list_single_large_graphic_pane_g4_cp2

0xe8ce,	// (0x0005a222) list_single_large_graphic_pane_t1_ParamLimits

0xe8ce,	// (0x0005a222) list_single_large_graphic_pane_t1

0x86f4,	// (0x00054048) list_double_pane_g1_ParamLimits

0x86f4,	// (0x00054048) list_double_pane_g1

0x8700,	// (0x00054054) list_double_pane_g2_ParamLimits

0x8700,	// (0x00054054) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0005af20) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0005af20) list_double_pane_g

0x870c,	// (0x00054060) list_double_pane_t1_ParamLimits

0x870c,	// (0x00054060) list_double_pane_t1

0x8722,	// (0x00054076) list_double_pane_t2_ParamLimits

0x8722,	// (0x00054076) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0005af25) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0005af25) list_double_pane_t

0x8734,	// (0x00054088) list_double2_pane_g1_ParamLimits

0x8734,	// (0x00054088) list_double2_pane_g1

0x8745,	// (0x00054099) list_double2_pane_g2_ParamLimits

0x8745,	// (0x00054099) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0005af2a) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0005af2a) list_double2_pane_g

0x8751,	// (0x000540a5) list_double2_pane_t1_ParamLimits

0x8751,	// (0x000540a5) list_double2_pane_t1

0x8767,	// (0x000540bb) list_double2_pane_t2_ParamLimits

0x8767,	// (0x000540bb) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0005af2f) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0005af2f) list_double2_pane_t

0x86f4,	// (0x00054048) list_double_number_pane_g1_ParamLimits

0x86f4,	// (0x00054048) list_double_number_pane_g1

0x8700,	// (0x00054054) list_double_number_pane_g2_ParamLimits

0x8700,	// (0x00054054) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0005af20) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0005af20) list_double_number_pane_g

0x8779,	// (0x000540cd) list_double_number_pane_t1_ParamLimits

0x8779,	// (0x000540cd) list_double_number_pane_t1

0x878b,	// (0x000540df) list_double_number_pane_t2_ParamLimits

0x878b,	// (0x000540df) list_double_number_pane_t2

0x87a1,	// (0x000540f5) list_double_number_pane_t3_ParamLimits

0x87a1,	// (0x000540f5) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0005af34) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0005af34) list_double_number_pane_t

0x87b3,	// (0x00054107) list_double_graphic_pane_g1_ParamLimits

0x87b3,	// (0x00054107) list_double_graphic_pane_g1

0x87bf,	// (0x00054113) list_double_graphic_pane_g2_ParamLimits

0x87bf,	// (0x00054113) list_double_graphic_pane_g2

0x3c79,	// (0x0004f5cd) list_double_graphic_pane_g3_ParamLimits

0x3c79,	// (0x0004f5cd) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0005af3b) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0005af3b) list_double_graphic_pane_g

0x870c,	// (0x00054060) list_double_graphic_pane_t1_ParamLimits

0x870c,	// (0x00054060) list_double_graphic_pane_t1

0x8722,	// (0x00054076) list_double_graphic_pane_t2_ParamLimits

0x8722,	// (0x00054076) list_double_graphic_pane_t2

0x0001,

0xf5d1,	// (0x0005af25) list_double_graphic_pane_t_ParamLimits

0xf5d1,	// (0x0005af25) list_double_graphic_pane_t

0x87da,	// (0x0005412e) list_double2_graphic_pane_g1_ParamLimits

0x87da,	// (0x0005412e) list_double2_graphic_pane_g1

0x87e6,	// (0x0005413a) list_double2_graphic_pane_g2_ParamLimits

0x87e6,	// (0x0005413a) list_double2_graphic_pane_g2

0x9b04,	// (0x00055458) list_double2_graphic_pane_g3_ParamLimits

0x9b04,	// (0x00055458) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0005af44) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0005af44) list_double2_graphic_pane_g

0x87f2,	// (0x00054146) list_double2_graphic_pane_t1_ParamLimits

0x87f2,	// (0x00054146) list_double2_graphic_pane_t1

0x8808,	// (0x0005415c) list_double2_graphic_pane_t2_ParamLimits

0x8808,	// (0x0005415c) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0005af4b) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0005af4b) list_double2_graphic_pane_t

0x881a,	// (0x0005416e) list_double_large_graphic_pane_g1_ParamLimits

0x881a,	// (0x0005416e) list_double_large_graphic_pane_g1

0x8839,	// (0x0005418d) list_double_large_graphic_pane_g2_ParamLimits

0x8839,	// (0x0005418d) list_double_large_graphic_pane_g2

0x8700,	// (0x00054054) list_double_large_graphic_pane_g3_ParamLimits

0x8700,	// (0x00054054) list_double_large_graphic_pane_g3

0x884f,	// (0x000541a3) list_double_large_graphic_pane_g4_ParamLimits

0x884f,	// (0x000541a3) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0005af50) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0005af50) list_double_large_graphic_pane_g

0x8862,	// (0x000541b6) list_double_large_graphic_pane_t1_ParamLimits

0x8862,	// (0x000541b6) list_double_large_graphic_pane_t1

0x887b,	// (0x000541cf) list_double_large_graphic_pane_t2_ParamLimits

0x887b,	// (0x000541cf) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0005af5b) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0005af5b) list_double_large_graphic_pane_t

0x888d,	// (0x000541e1) list_double2_large_graphic_pane_g1_ParamLimits

0x888d,	// (0x000541e1) list_double2_large_graphic_pane_g1

0x9b10,	// (0x00055464) list_double2_large_graphic_pane_g2_ParamLimits

0x9b10,	// (0x00055464) list_double2_large_graphic_pane_g2

0x9b04,	// (0x00055458) list_double2_large_graphic_pane_g3_ParamLimits

0x9b04,	// (0x00055458) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0005af60) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005af60) list_double2_large_graphic_pane_g

0x87f2,	// (0x00054146) list_double2_large_graphic_pane_t1_ParamLimits

0x87f2,	// (0x00054146) list_double2_large_graphic_pane_t1

0x8808,	// (0x0005415c) list_double2_large_graphic_pane_t2_ParamLimits

0x8808,	// (0x0005415c) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0005af4b) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0005af4b) list_double2_large_graphic_pane_t

0x8899,	// (0x000541ed) list_double_heading_pane_g1_ParamLimits

0x8899,	// (0x000541ed) list_double_heading_pane_g1

0xf0e7,	// (0x0005aa3b) list_double_heading_pane_g2_ParamLimits

0xf0e7,	// (0x0005aa3b) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0005af67) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0005af67) list_double_heading_pane_g

0x88aa,	// (0x000541fe) list_double_heading_pane_t1_ParamLimits

0x88aa,	// (0x000541fe) list_double_heading_pane_t1

0x8808,	// (0x0005415c) list_double_heading_pane_t2_ParamLimits

0x8808,	// (0x0005415c) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0005af6c) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0005af6c) list_double_heading_pane_t

0x88c0,	// (0x00054214) list_double_graphic_heading_pane_g1_ParamLimits

0x88c0,	// (0x00054214) list_double_graphic_heading_pane_g1

0x8899,	// (0x000541ed) list_double_graphic_heading_pane_g2_ParamLimits

0x8899,	// (0x000541ed) list_double_graphic_heading_pane_g2

0xf0e7,	// (0x0005aa3b) list_double_graphic_heading_pane_g3_ParamLimits

0xf0e7,	// (0x0005aa3b) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0005af71) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0005af71) list_double_graphic_heading_pane_g

0x88aa,	// (0x000541fe) list_double_graphic_heading_pane_t1_ParamLimits

0x88aa,	// (0x000541fe) list_double_graphic_heading_pane_t1

0x8808,	// (0x0005415c) list_double_graphic_heading_pane_t2_ParamLimits

0x8808,	// (0x0005415c) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0005af6c) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0005af6c) list_double_graphic_heading_pane_t

0x88cc,	// (0x00054220) list_double_time_pane_g1_ParamLimits

0x88cc,	// (0x00054220) list_double_time_pane_g1

0xe8e4,	// (0x0005a238) list_double_time_pane_g2_ParamLimits

0xe8e4,	// (0x0005a238) list_double_time_pane_g2

0x0001,

0xf624,	// (0x0005af78) list_double_time_pane_g_ParamLimits

0xf624,	// (0x0005af78) list_double_time_pane_g

0x88dd,	// (0x00054231) list_double_time_pane_t1_ParamLimits

0x88dd,	// (0x00054231) list_double_time_pane_t1

0x88f3,	// (0x00054247) list_double_time_pane_t2_ParamLimits

0x88f3,	// (0x00054247) list_double_time_pane_t2

0x8905,	// (0x00054259) list_double_time_pane_t3_ParamLimits

0x8905,	// (0x00054259) list_double_time_pane_t3

0x8917,	// (0x0005426b) list_double_time_pane_t4_ParamLimits

0x8917,	// (0x0005426b) list_double_time_pane_t4

0x0003,

0xf629,	// (0x0005af7d) list_double_time_pane_t_ParamLimits

0xf629,	// (0x0005af7d) list_double_time_pane_t

0x8929,	// (0x0005427d) list_setting_pane_g1_ParamLimits

0x8929,	// (0x0005427d) list_setting_pane_g1

0x8935,	// (0x00054289) list_setting_pane_g2_ParamLimits

0x8935,	// (0x00054289) list_setting_pane_g2

0x0001,

0xf632,	// (0x0005af86) list_setting_pane_g_ParamLimits

0xf632,	// (0x0005af86) list_setting_pane_g

0x8941,	// (0x00054295) list_setting_pane_t1_ParamLimits

0x8941,	// (0x00054295) list_setting_pane_t1

0x895b,	// (0x000542af) list_setting_pane_t2_ParamLimits

0x895b,	// (0x000542af) list_setting_pane_t2

0x0002,

0xf637,	// (0x0005af8b) list_setting_pane_t_ParamLimits

0xf637,	// (0x0005af8b) list_setting_pane_t

0x899a,	// (0x000542ee) set_value_pane_cp_ParamLimits

0x899a,	// (0x000542ee) set_value_pane_cp

0x89a6,	// (0x000542fa) list_setting_number_pane_g1_ParamLimits

0x89a6,	// (0x000542fa) list_setting_number_pane_g1

0x89b2,	// (0x00054306) list_setting_number_pane_g2_ParamLimits

0x89b2,	// (0x00054306) list_setting_number_pane_g2

0x0001,

0xf63e,	// (0x0005af92) list_setting_number_pane_g_ParamLimits

0xf63e,	// (0x0005af92) list_setting_number_pane_g

0x89be,	// (0x00054312) list_setting_number_pane_t1_ParamLimits

0x89be,	// (0x00054312) list_setting_number_pane_t1

0x89d7,	// (0x0005432b) list_setting_number_pane_t2_ParamLimits

0x89d7,	// (0x0005432b) list_setting_number_pane_t2

0x89f1,	// (0x00054345) list_setting_number_pane_t3_ParamLimits

0x89f1,	// (0x00054345) list_setting_number_pane_t3

0x0003,

0xf643,	// (0x0005af97) list_setting_number_pane_t_ParamLimits

0xf643,	// (0x0005af97) list_setting_number_pane_t

0x899a,	// (0x000542ee) set_value_pane_ParamLimits

0x899a,	// (0x000542ee) set_value_pane

0x9b21,	// (0x00055475) bg_set_opt_pane_ParamLimits

0x9b21,	// (0x00055475) bg_set_opt_pane

0xe8f0,	// (0x0005a244) set_value_pane_t1

0x9b42,	// (0x00055496) slider_set_pane_cp3

0x9b4b,	// (0x0005549f) volume_small_pane_cp

0x9b54,	// (0x000554a8) list_form_gen_pane

0x9b5d,	// (0x000554b1) scroll_pane_cp8

0x8a34,	// (0x00054388) form_field_data_pane_ParamLimits

0x8a34,	// (0x00054388) form_field_data_pane

0x8a4b,	// (0x0005439f) form_field_data_wide_pane_ParamLimits

0x8a4b,	// (0x0005439f) form_field_data_wide_pane

0x8a6b,	// (0x000543bf) form_field_popup_pane_ParamLimits

0x8a6b,	// (0x000543bf) form_field_popup_pane

0x8a8b,	// (0x000543df) form_field_popup_wide_pane_ParamLimits

0x8a8b,	// (0x000543df) form_field_popup_wide_pane

0xe90e,	// (0x0005a262) form_field_slider_pane_ParamLimits

0xe90e,	// (0x0005a262) form_field_slider_pane

0x8aa2,	// (0x000543f6) form_field_slider_wide_pane_ParamLimits

0x8aa2,	// (0x000543f6) form_field_slider_wide_pane

0x9b6e,	// (0x000554c2) data_form_pane

0x8abf,	// (0x00054413) form_field_data_pane_t1

0x9b7a,	// (0x000554ce) input_focus_pane

0xe921,	// (0x0005a275) data_form_wide_pane

0xe93e,	// (0x0005a292) form_field_data_wide_pane_t1

0x9910,	// (0x00055264) input_focus_pane_cp6

0x8ad9,	// (0x0005442d) form_field_popup_pane_t1

0x9b7a,	// (0x000554ce) input_focus_pane_cp7

0x9ba8,	// (0x000554fc) list_form_pane

0xe968,	// (0x0005a2bc) form_field_popup_wide_pane_t1

0x9b7a,	// (0x000554ce) input_focus_pane_cp8

0x9bb4,	// (0x00055508) list_form_wide_pane

0x8afb,	// (0x0005444f) form_field_slider_pane_t1_ParamLimits

0x8afb,	// (0x0005444f) form_field_slider_pane_t1

0x8b13,	// (0x00054467) form_field_slider_pane_t2_ParamLimits

0x8b13,	// (0x00054467) form_field_slider_pane_t2

0x0001,

0xf653,	// (0x0005afa7) form_field_slider_pane_t_ParamLimits

0xf653,	// (0x0005afa7) form_field_slider_pane_t

0x91e7,	// (0x00054b3b) input_focus_pane_cp9_ParamLimits

0x91e7,	// (0x00054b3b) input_focus_pane_cp9

0x8b28,	// (0x0005447c) slider_cont_pane_ParamLimits

0x8b28,	// (0x0005447c) slider_cont_pane

0x9bc0,	// (0x00055514) form_field_slider_wide_pane_t1_ParamLimits

0x9bc0,	// (0x00055514) form_field_slider_wide_pane_t1

0xe97d,	// (0x0005a2d1) form_field_slider_wide_pane_t2_ParamLimits

0xe97d,	// (0x0005a2d1) form_field_slider_wide_pane_t2

0x0001,

0xf658,	// (0x0005afac) form_field_slider_wide_pane_t_ParamLimits

0xf658,	// (0x0005afac) form_field_slider_wide_pane_t

0x91e7,	// (0x00054b3b) input_focus_pane_cp10_ParamLimits

0x91e7,	// (0x00054b3b) input_focus_pane_cp10

0x8b3c,	// (0x00054490) slider_cont_pane_cp1_ParamLimits

0x8b3c,	// (0x00054490) slider_cont_pane_cp1

0x8b50,	// (0x000544a4) slider_form_pane_cp

0x9bd2,	// (0x00055526) input_focus_pane_g1

0x9bda,	// (0x0005552e) input_focus_pane_g2

0x9be2,	// (0x00055536) input_focus_pane_g3

0x9bea,	// (0x0005553e) input_focus_pane_g4

0x9bf2,	// (0x00055546) input_focus_pane_g5

0x9bfa,	// (0x0005554e) input_focus_pane_g6

0x9c02,	// (0x00055556) input_focus_pane_g7

0x9c0a,	// (0x0005555e) input_focus_pane_g8

0x9c12,	// (0x00055566) input_focus_pane_g9

0x8ea6,	// (0x000547fa) input_focus_pane_g10

0x0009,

0xf65d,	// (0x0005afb1) input_focus_pane_g

0x27fc,	// (0x0004e150) wait_border_pane_g3_copy1

0x8b58,	// (0x000544ac) data_form_pane_t1

0x8ea6,	// (0x000547fa) wait_anim_pane_g1_copy1

0x8ca7,	// (0x000545fb) data_form_wide_pane_t1

0x8b72,	// (0x000544c6) list_form_graphic_pane_cp_ParamLimits

0x8b72,	// (0x000544c6) list_form_graphic_pane_cp

0x36eb,	// (0x0004f03f) slider_form_pane_g1

0x36f4,	// (0x0004f048) slider_form_pane_g2

0x0006,

0xf954,	// (0x0005b2a8) slider_form_pane_g

0x8b84,	// (0x000544d8) list_form_graphic_pane_ParamLimits

0x8b84,	// (0x000544d8) list_form_graphic_pane

0x8b97,	// (0x000544eb) list_form_graphic_pane_g1

0x8b9f,	// (0x000544f3) list_form_graphic_pane_t1_ParamLimits

0x8b9f,	// (0x000544f3) list_form_graphic_pane_t1

0x9231,	// (0x00054b85) list_highlight_pane_cp5_ParamLimits

0x9231,	// (0x00054b85) list_highlight_pane_cp5

0x8bb4,	// (0x00054508) find_pane_g1

0x9c1a,	// (0x0005556e) input_find_pane

0x8bbd,	// (0x00054511) input_find_pane_g1_ParamLimits

0x8bbd,	// (0x00054511) input_find_pane_g1

0x8bc9,	// (0x0005451d) input_find_pane_t1_ParamLimits

0x8bc9,	// (0x0005451d) input_find_pane_t1

0x8bde,	// (0x00054532) input_find_pane_t2_ParamLimits

0x8bde,	// (0x00054532) input_find_pane_t2

0x0001,

0xf672,	// (0x0005afc6) input_find_pane_t_ParamLimits

0xf672,	// (0x0005afc6) input_find_pane_t

0x9c23,	// (0x00055577) input_focus_pane_cp5_ParamLimits

0x9c23,	// (0x00055577) input_focus_pane_cp5

0x9c42,	// (0x00055596) bg_popup_window_pane_cp2_ParamLimits

0x9c42,	// (0x00055596) bg_popup_window_pane_cp2

0x9c4f,	// (0x000555a3) listscroll_menu_pane_ParamLimits

0x9c4f,	// (0x000555a3) listscroll_menu_pane

0x9c5b,	// (0x000555af) popup_submenu_window_ParamLimits

0x9c5b,	// (0x000555af) popup_submenu_window

0x9c83,	// (0x000555d7) find_popup_pane_g1

0x9c8b,	// (0x000555df) input_popup_find_pane_cp

0x9c95,	// (0x000555e9) input_focus_pane_cp4_ParamLimits

0x9c95,	// (0x000555e9) input_focus_pane_cp4

0x9cb1,	// (0x00055605) input_popup_find_pane_t1_ParamLimits

0x9cb1,	// (0x00055605) input_popup_find_pane_t1

0x8f96,	// (0x000548ea) bg_popup_sub_pane_cp

0x9cdf,	// (0x00055633) listscroll_popup_sub_pane

0x9ce7,	// (0x0005563b) list_submenu_pane_ParamLimits

0x9ce7,	// (0x0005563b) list_submenu_pane

0x9cf8,	// (0x0005564c) scroll_pane_cp4

0x9d00,	// (0x00055654) list_single_popup_submenu_pane_ParamLimits

0x9d00,	// (0x00055654) list_single_popup_submenu_pane

0x9d14,	// (0x00055668) list_single_popup_submenu_pane_g1

0x9d1c,	// (0x00055670) list_single_popup_submenu_pane_t1_ParamLimits

0x9d1c,	// (0x00055670) list_single_popup_submenu_pane_t1

0x91e7,	// (0x00054b3b) bg_active_tab_pane_cp1_ParamLimits

0x91e7,	// (0x00054b3b) bg_active_tab_pane_cp1

0x9d31,	// (0x00055685) tabs_2_active_pane_g1

0x9d39,	// (0x0005568d) tabs_2_active_pane_t1

0x91e7,	// (0x00054b3b) bg_passive_tab_pane_cp1_ParamLimits

0x91e7,	// (0x00054b3b) bg_passive_tab_pane_cp1

0x9d31,	// (0x00055685) tabs_2_passive_pane_g1

0x9d39,	// (0x0005568d) tabs_2_passive_pane_t1

0x9231,	// (0x00054b85) bg_active_tab_pane_cp4

0x9d4b,	// (0x0005569f) tabs_2_long_active_pane_t1

0x9d5e,	// (0x000556b2) bg_passive_tab_pane_cp4

0x0973,	// (0x0004c2c7) list_single_midp_graphic_pane_g4_ParamLimits

0x9231,	// (0x00054b85) bg_active_tab_pane_cp5

0x9d6a,	// (0x000556be) tabs_3_long_active_pane_t1

0x9d5e,	// (0x000556b2) bg_passive_tab_pane_cp5

0x0973,	// (0x0004c2c7) list_single_midp_graphic_pane_g4

0x9231,	// (0x00054b85) bg_popup_window_pane_cp13_ParamLimits

0x9231,	// (0x00054b85) bg_popup_window_pane_cp13

0x9d85,	// (0x000556d9) listscroll_popup_fast_pane_ParamLimits

0x9d85,	// (0x000556d9) listscroll_popup_fast_pane

0x9d91,	// (0x000556e5) grid_popup_fast_pane_ParamLimits

0x9d91,	// (0x000556e5) grid_popup_fast_pane

0x9da3,	// (0x000556f7) scroll_pane_cp9_ParamLimits

0x9da3,	// (0x000556f7) scroll_pane_cp9

0x5004,	// (0x00050958) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5004,	// (0x00050958) list_single_graphic_hl_pane_t1_cp2

0x9dc7,	// (0x0005571b) input_focus_pane_cp20_ParamLimits

0x9dc7,	// (0x0005571b) input_focus_pane_cp20

0x9dd5,	// (0x00055729) query_popup_data_pane_t1_ParamLimits

0x9dd5,	// (0x00055729) query_popup_data_pane_t1

0x9de8,	// (0x0005573c) query_popup_data_pane_t2_ParamLimits

0x9de8,	// (0x0005573c) query_popup_data_pane_t2

0x9e2e,	// (0x00055782) query_popup_data_pane_t3_ParamLimits

0x9e2e,	// (0x00055782) query_popup_data_pane_t3

0x9e6f,	// (0x000557c3) query_popup_data_pane_t4_ParamLimits

0x9e6f,	// (0x000557c3) query_popup_data_pane_t4

0x9eab,	// (0x000557ff) query_popup_data_pane_t5_ParamLimits

0x9eab,	// (0x000557ff) query_popup_data_pane_t5

0x0004,

0xf677,	// (0x0005afcb) query_popup_data_pane_t_ParamLimits

0xf677,	// (0x0005afcb) query_popup_data_pane_t

0x9bd2,	// (0x00055526) bg_set_opt_pane_g1

0x9bda,	// (0x0005552e) bg_set_opt_pane_g2

0x9be2,	// (0x00055536) bg_set_opt_pane_g3

0x9bea,	// (0x0005553e) bg_set_opt_pane_g4

0x9bf2,	// (0x00055546) bg_set_opt_pane_g5

0x9bfa,	// (0x0005554e) bg_set_opt_pane_g6

0x9c02,	// (0x00055556) bg_set_opt_pane_g7

0x9c0a,	// (0x0005555e) bg_set_opt_pane_g8

0x9c12,	// (0x00055566) bg_set_opt_pane_g9

0x0008,

0xf682,	// (0x0005afd6) bg_set_opt_pane_g

0xf330,	// (0x0005ac84) control_top_pane_stacon_ParamLimits

0xf330,	// (0x0005ac84) control_top_pane_stacon

0xf383,	// (0x0005acd7) signal_pane_stacon_ParamLimits

0xf383,	// (0x0005acd7) signal_pane_stacon

0xc293,	// (0x00057be7) stacon_top_pane_g1_ParamLimits

0xc293,	// (0x00057be7) stacon_top_pane_g1

0xf3a8,	// (0x0005acfc) title_pane_stacon_ParamLimits

0xf3a8,	// (0x0005acfc) title_pane_stacon

0xf3d2,	// (0x0005ad26) uni_indicator_pane_stacon_ParamLimits

0xf3d2,	// (0x0005ad26) uni_indicator_pane_stacon

0xf3e7,	// (0x0005ad3b) battery_pane_stacon_ParamLimits

0xf3e7,	// (0x0005ad3b) battery_pane_stacon

0xf42b,	// (0x0005ad7f) control_bottom_pane_stacon_ParamLimits

0xf42b,	// (0x0005ad7f) control_bottom_pane_stacon

0xf44e,	// (0x0005ada2) navi_pane_stacon_ParamLimits

0xf44e,	// (0x0005ada2) navi_pane_stacon

0xc2b5,	// (0x00057c09) stacon_bottom_pane_g1_ParamLimits

0xc2b5,	// (0x00057c09) stacon_bottom_pane_g1

0xf0f3,	// (0x0005aa47) aid_levels_signal_lsc_ParamLimits

0xf0f3,	// (0x0005aa47) aid_levels_signal_lsc

0xf109,	// (0x0005aa5d) signal_pane_stacon_g1_ParamLimits

0xf109,	// (0x0005aa5d) signal_pane_stacon_g1

0xf11d,	// (0x0005aa71) signal_pane_stacon_g2_ParamLimits

0xf11d,	// (0x0005aa71) signal_pane_stacon_g2

0x0001,

0xf695,	// (0x0005afe9) signal_pane_stacon_g_ParamLimits

0xf695,	// (0x0005afe9) signal_pane_stacon_g

0xf152,	// (0x0005aaa6) title_pane_stacon_t1_ParamLimits

0xf152,	// (0x0005aaa6) title_pane_stacon_t1

0x9eef,	// (0x00055843) uni_indicator_pane_stacon_g1

0x9ef9,	// (0x0005584d) uni_indicator_pane_stacon_g2

0x9f03,	// (0x00055857) uni_indicator_pane_stacon_g3

0x9f0d,	// (0x00055861) uni_indicator_pane_stacon_g4

0x0003,

0xf6a1,	// (0x0005aff5) uni_indicator_pane_stacon_g

0xf177,	// (0x0005aacb) control_top_pane_stacon_g1

0xf17f,	// (0x0005aad3) control_top_pane_stacon_t1_ParamLimits

0xf17f,	// (0x0005aad3) control_top_pane_stacon_t1

0xf1b6,	// (0x0005ab0a) aid_levels_battery_lsc_ParamLimits

0xf1b6,	// (0x0005ab0a) aid_levels_battery_lsc

0xf1cd,	// (0x0005ab21) battery_pane_stacon_g1_ParamLimits

0xf1cd,	// (0x0005ab21) battery_pane_stacon_g1

0xf1e0,	// (0x0005ab34) battery_pane_stacon_g2_ParamLimits

0xf1e0,	// (0x0005ab34) battery_pane_stacon_g2

0x0001,

0xf6aa,	// (0x0005affe) battery_pane_stacon_g_ParamLimits

0xf6aa,	// (0x0005affe) battery_pane_stacon_g

0xf21e,	// (0x0005ab72) navi_icon_pane_stacon

0xf232,	// (0x0005ab86) navi_navi_pane_stacon

0xf21e,	// (0x0005ab72) navi_text_pane_stacon

0xf177,	// (0x0005aacb) control_bottom_pane_stacon_g1

0xf246,	// (0x0005ab9a) control_bottom_pane_stacon_t1_ParamLimits

0xf246,	// (0x0005ab9a) control_bottom_pane_stacon_t1

0x9f31,	// (0x00055885) grid_app_pane_ParamLimits

0x9f31,	// (0x00055885) grid_app_pane

0x9f69,	// (0x000558bd) scroll_pane_cp15_ParamLimits

0x9f69,	// (0x000558bd) scroll_pane_cp15

0x9f7e,	// (0x000558d2) cell_app_pane_ParamLimits

0x9f7e,	// (0x000558d2) cell_app_pane

0x9fc3,	// (0x00055917) cell_app_pane_g1_ParamLimits

0x9fc3,	// (0x00055917) cell_app_pane_g1

0x9fe7,	// (0x0005593b) cell_app_pane_g2_ParamLimits

0x9fe7,	// (0x0005593b) cell_app_pane_g2

0x0001,

0xf6af,	// (0x0005b003) cell_app_pane_g_ParamLimits

0xf6af,	// (0x0005b003) cell_app_pane_g

0x9ff3,	// (0x00055947) cell_app_pane_t1_ParamLimits

0x9ff3,	// (0x00055947) cell_app_pane_t1

0xa00a,	// (0x0005595e) grid_highlight_pane_ParamLimits

0xa00a,	// (0x0005595e) grid_highlight_pane

0x9bd2,	// (0x00055526) cell_highlight_pane_g1

0x9bda,	// (0x0005552e) cell_highlight_pane_g2

0x9be2,	// (0x00055536) cell_highlight_pane_g3

0x9bea,	// (0x0005553e) cell_highlight_pane_g4

0x9bf2,	// (0x00055546) cell_highlight_pane_g5

0x9bfa,	// (0x0005554e) cell_highlight_pane_g6

0x9c02,	// (0x00055556) cell_highlight_pane_g7

0x9c0a,	// (0x0005555e) cell_highlight_pane_g8

0x9c12,	// (0x00055566) cell_highlight_pane_g9

0x8ea6,	// (0x000547fa) cell_highlight_pane_g10

0x0009,

0xf65d,	// (0x0005afb1) cell_highlight_pane_g

0xa024,	// (0x00055978) bg_scroll_pane

0xa043,	// (0x00055997) scroll_handle_pane

0xa07f,	// (0x000559d3) scroll_bg_pane_g1

0xa094,	// (0x000559e8) scroll_bg_pane_g2

0xa0ac,	// (0x00055a00) scroll_bg_pane_g3

0x0002,

0xf6b4,	// (0x0005b008) scroll_bg_pane_g

0xa0c1,	// (0x00055a15) scroll_handle_focus_pane_ParamLimits

0xa0c1,	// (0x00055a15) scroll_handle_focus_pane

0xa07f,	// (0x000559d3) scroll_handle_pane_g1

0xc033,	// (0x00057987) scroll_handle_pane_g2

0xa0ac,	// (0x00055a00) scroll_handle_pane_g3

0x0002,

0xf6bb,	// (0x0005b00f) scroll_handle_pane_g

0x9c95,	// (0x000555e9) bg_popup_sub_pane_cp21_ParamLimits

0x9c95,	// (0x000555e9) bg_popup_sub_pane_cp21

0xa0ce,	// (0x00055a22) popup_fep_japan_predictive_window_t1_ParamLimits

0xa0ce,	// (0x00055a22) popup_fep_japan_predictive_window_t1

0xa0e5,	// (0x00055a39) popup_fep_japan_predictive_window_t2_ParamLimits

0xa0e5,	// (0x00055a39) popup_fep_japan_predictive_window_t2

0xa118,	// (0x00055a6c) popup_fep_japan_predictive_window_t3_ParamLimits

0xa118,	// (0x00055a6c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c2,	// (0x0005b016) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c2,	// (0x0005b016) popup_fep_japan_predictive_window_t

0x8f96,	// (0x000548ea) bg_popup_sub_pane_cp23

0xa14f,	// (0x00055aa3) listscroll_japin_cand_pane

0xc047,	// (0x0005799b) popup_fep_japan_candidate_window_t1

0xc055,	// (0x000579a9) candidate_pane_ParamLimits

0xc055,	// (0x000579a9) candidate_pane

0xa157,	// (0x00055aab) scroll_pane_cp30

0xc067,	// (0x000579bb) list_single_popup_jap_candidate_pane_ParamLimits

0xc067,	// (0x000579bb) list_single_popup_jap_candidate_pane

0x8f96,	// (0x000548ea) list_highlight_pane_cp30

0xc07c,	// (0x000579d0) list_single_popup_jap_candidate_pane_t1

0xc08b,	// (0x000579df) level_1_signal

0xc098,	// (0x000579ec) level_2_signal

0xc0a5,	// (0x000579f9) level_3_signal

0xc0b2,	// (0x00057a06) level_4_signal

0xc0bf,	// (0x00057a13) level_5_signal

0xc0cc,	// (0x00057a20) level_6_signal

0xc0d9,	// (0x00057a2d) level_7_signal

0xc08b,	// (0x000579df) level_1_battery

0xc098,	// (0x000579ec) level_2_battery

0xc0a5,	// (0x000579f9) level_3_battery

0xc0b2,	// (0x00057a06) level_4_battery

0xc0bf,	// (0x00057a13) level_5_battery

0xc0cc,	// (0x00057a20) level_6_battery

0xc0d9,	// (0x00057a2d) level_7_battery

0xc0fe,	// (0x00057a52) list_menu_pane_ParamLimits

0xc0fe,	// (0x00057a52) list_menu_pane

0xc114,	// (0x00057a68) scroll_pane_cp25_ParamLimits

0xc114,	// (0x00057a68) scroll_pane_cp25

0xa15f,	// (0x00055ab3) list_double2_graphic_pane_cp2_ParamLimits

0xa15f,	// (0x00055ab3) list_double2_graphic_pane_cp2

0xa15f,	// (0x00055ab3) list_double2_large_graphic_pane_cp2_ParamLimits

0xa15f,	// (0x00055ab3) list_double2_large_graphic_pane_cp2

0xa15f,	// (0x00055ab3) list_double2_pane_cp2_ParamLimits

0xa15f,	// (0x00055ab3) list_double2_pane_cp2

0xa15f,	// (0x00055ab3) list_double_graphic_pane_cp2_ParamLimits

0xa15f,	// (0x00055ab3) list_double_graphic_pane_cp2

0xa15f,	// (0x00055ab3) list_double_large_graphic_pane_cp2_ParamLimits

0xa15f,	// (0x00055ab3) list_double_large_graphic_pane_cp2

0xa15f,	// (0x00055ab3) list_double_number_pane_cp2_ParamLimits

0xa15f,	// (0x00055ab3) list_double_number_pane_cp2

0xa15f,	// (0x00055ab3) list_double_pane_cp2_ParamLimits

0xa15f,	// (0x00055ab3) list_double_pane_cp2

0xa16e,	// (0x00055ac2) list_single_2graphic_pane_cp2_ParamLimits

0xa16e,	// (0x00055ac2) list_single_2graphic_pane_cp2

0xa16e,	// (0x00055ac2) list_single_graphic_heading_pane_cp2_ParamLimits

0xa16e,	// (0x00055ac2) list_single_graphic_heading_pane_cp2

0xa16e,	// (0x00055ac2) list_single_graphic_pane_cp2_ParamLimits

0xa16e,	// (0x00055ac2) list_single_graphic_pane_cp2

0xa16e,	// (0x00055ac2) list_single_heading_pane_cp2_ParamLimits

0xa16e,	// (0x00055ac2) list_single_heading_pane_cp2

0xc13d,	// (0x00057a91) list_single_large_graphic_pane_cp2_ParamLimits

0xc13d,	// (0x00057a91) list_single_large_graphic_pane_cp2

0xa16e,	// (0x00055ac2) list_single_number_heading_pane_cp2_ParamLimits

0xa16e,	// (0x00055ac2) list_single_number_heading_pane_cp2

0xa16e,	// (0x00055ac2) list_single_number_pane_cp2_ParamLimits

0xa16e,	// (0x00055ac2) list_single_number_pane_cp2

0xa180,	// (0x00055ad4) list_single_pane_cp2_ParamLimits

0xa180,	// (0x00055ad4) list_single_pane_cp2

0xc157,	// (0x00057aab) bg_popup_sub_pane_cp22

0xf316,	// (0x0005ac6a) popup_side_volume_key_window_g1

0xf322,	// (0x0005ac76) popup_side_volume_key_window_t1

0xa248,	// (0x00055b9c) volume_small_pane_cp1

0x91e7,	// (0x00054b3b) bg_popup_sub_pane_cp24_ParamLimits

0x91e7,	// (0x00054b3b) bg_popup_sub_pane_cp24

0xc16d,	// (0x00057ac1) fep_china_uni_candidate_pane_ParamLimits

0xc16d,	// (0x00057ac1) fep_china_uni_candidate_pane

0xc181,	// (0x00057ad5) fep_china_uni_entry_pane

0xc191,	// (0x00057ae5) popup_fep_china_uni_window_g1

0xa250,	// (0x00055ba4) fep_china_uni_entry_pane_g1

0xa258,	// (0x00055bac) fep_china_uni_entry_pane_g2

0x0001,

0xf6f3,	// (0x0005b047) fep_china_uni_entry_pane_g

0xc1ad,	// (0x00057b01) fep_entry_item_pane

0xc1b7,	// (0x00057b0b) fep_candidate_item_pane

0xa260,	// (0x00055bb4) fep_china_uni_candidate_pane_g1

0xc1bf,	// (0x00057b13) fep_china_uni_candidate_pane_g2

0xc1c7,	// (0x00057b1b) fep_china_uni_candidate_pane_g3

0xa268,	// (0x00055bbc) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f8,	// (0x0005b04c) fep_china_uni_candidate_pane_g

0x8ea6,	// (0x000547fa) fep_entry_item_pane_g1

0xc1cf,	// (0x00057b23) fep_entry_item_pane_t1_ParamLimits

0xc1cf,	// (0x00057b23) fep_entry_item_pane_t1

0xc1e5,	// (0x00057b39) fep_candidate_item_pane_t1_ParamLimits

0xc1e5,	// (0x00057b39) fep_candidate_item_pane_t1

0xc1fa,	// (0x00057b4e) fep_candidate_item_pane_t2_ParamLimits

0xc1fa,	// (0x00057b4e) fep_candidate_item_pane_t2

0x0001,

0xf701,	// (0x0005b055) fep_candidate_item_pane_t_ParamLimits

0xf701,	// (0x0005b055) fep_candidate_item_pane_t

0x9231,	// (0x00054b85) list_highlight_pane_cp31_ParamLimits

0x9231,	// (0x00054b85) list_highlight_pane_cp31

0xc20c,	// (0x00057b60) level_1_signal_lsc

0xc215,	// (0x00057b69) level_2_signal_lsc

0xc21e,	// (0x00057b72) level_3_signal_lsc

0xc227,	// (0x00057b7b) level_4_signal_lsc

0xc230,	// (0x00057b84) level_5_signal_lsc

0xc239,	// (0x00057b8d) level_6_signal_lsc

0xc242,	// (0x00057b96) level_7_signal_lsc

0xc242,	// (0x00057b96) level_1_battery_lsc

0xc24b,	// (0x00057b9f) level_2_battery_lsc

0xc254,	// (0x00057ba8) level_3_battery_lsc

0xc25d,	// (0x00057bb1) level_4_battery_lsc

0xc266,	// (0x00057bba) level_5_battery_lsc

0xc26f,	// (0x00057bc3) level_6_battery_lsc

0xc20c,	// (0x00057b60) level_7_battery_lsc

0xc278,	// (0x00057bcc) scroll_handle_focus_pane_g1

0xc281,	// (0x00057bd5) scroll_handle_focus_pane_g2

0xc28a,	// (0x00057bde) scroll_handle_focus_pane_g3

0x0002,

0xf706,	// (0x0005b05a) scroll_handle_focus_pane_g

0x8bf3,	// (0x00054547) list_single_2graphic_pane_g1_ParamLimits

0x8bf3,	// (0x00054547) list_single_2graphic_pane_g1

0x9aeb,	// (0x0005543f) list_single_2graphic_pane_g2_ParamLimits

0x9aeb,	// (0x0005543f) list_single_2graphic_pane_g2

0x0942,	// (0x0004c296) list_single_2graphic_pane_g3_ParamLimits

0x0942,	// (0x0004c296) list_single_2graphic_pane_g3

0x8bff,	// (0x00054553) list_single_2graphic_pane_g4_ParamLimits

0x8bff,	// (0x00054553) list_single_2graphic_pane_g4

0x0003,

0xf70d,	// (0x0005b061) list_single_2graphic_pane_g_ParamLimits

0xf70d,	// (0x0005b061) list_single_2graphic_pane_g

0x8c0b,	// (0x0005455f) list_single_2graphic_pane_t1_ParamLimits

0x8c0b,	// (0x0005455f) list_single_2graphic_pane_t1

0x8c39,	// (0x0005458d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8c39,	// (0x0005458d) list_double2_graphic_large_graphic_pane_g1

0x9b10,	// (0x00055464) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9b10,	// (0x00055464) list_double2_graphic_large_graphic_pane_g2

0x9b04,	// (0x00055458) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9b04,	// (0x00055458) list_double2_graphic_large_graphic_pane_g3

0x8c4b,	// (0x0005459f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8c4b,	// (0x0005459f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf716,	// (0x0005b06a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf716,	// (0x0005b06a) list_double2_graphic_large_graphic_pane_g

0x8c57,	// (0x000545ab) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8c57,	// (0x000545ab) list_double2_graphic_large_graphic_pane_t1

0x8c6d,	// (0x000545c1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8c6d,	// (0x000545c1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71f,	// (0x0005b073) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71f,	// (0x0005b073) list_double2_graphic_large_graphic_pane_t

0xa2e3,	// (0x00055c37) popup_fast_swap_window_ParamLimits

0xa2e3,	// (0x00055c37) popup_fast_swap_window

0xa2ff,	// (0x00055c53) popup_side_volume_key_window

0xc340,	// (0x00057c94) stacon_top_pane

0xc34a,	// (0x00057c9e) status_pane_ParamLimits

0xc34a,	// (0x00057c9e) status_pane

0xa319,	// (0x00055c6d) status_small_pane

0x8f96,	// (0x000548ea) control_pane

0x8f96,	// (0x000548ea) stacon_bottom_pane

0x9b5d,	// (0x000554b1) scroll_pane_cp121

0x9b54,	// (0x000554a8) set_content_pane

0xa270,	// (0x00055bc4) bg_active_tab_pane_g1_cp1

0xa279,	// (0x00055bcd) bg_active_tab_pane_g2_cp1

0xa282,	// (0x00055bd6) bg_active_tab_pane_g3_cp1

0xa270,	// (0x00055bc4) bg_passive_tab_pane_g1_cp1

0xa279,	// (0x00055bcd) bg_passive_tab_pane_g2_cp1

0xa282,	// (0x00055bd6) bg_passive_tab_pane_g3_cp1

0xa28b,	// (0x00055bdf) bg_active_tab_pane_g1_cp2

0xa279,	// (0x00055bcd) bg_active_tab_pane_g2_cp2

0xa294,	// (0x00055be8) bg_active_tab_pane_g3_cp2

0xa28b,	// (0x00055bdf) bg_passive_tab_pane_g1_cp2

0xa279,	// (0x00055bcd) bg_passive_tab_pane_g2_cp2

0xa294,	// (0x00055be8) bg_passive_tab_pane_g3_cp2

0xa29d,	// (0x00055bf1) bg_active_tab_pane_g1_cp3

0xa279,	// (0x00055bcd) bg_active_tab_pane_g2_cp3

0xa2a6,	// (0x00055bfa) bg_active_tab_pane_g3_cp3

0xa29d,	// (0x00055bf1) bg_passive_tab_pane_g1_cp3

0xa279,	// (0x00055bcd) bg_passive_tab_pane_g2_cp3

0xa2a6,	// (0x00055bfa) bg_passive_tab_pane_g3_cp3

0xa2af,	// (0x00055c03) bg_active_tab_pane_g1_cp4

0xa279,	// (0x00055bcd) bg_active_tab_pane_g2_cp4

0xa2ba,	// (0x00055c0e) bg_active_tab_pane_g3_cp4

0xa2af,	// (0x00055c03) bg_passive_tab_pane_g1_cp4

0xa279,	// (0x00055bcd) bg_passive_tab_pane_g2_cp4

0xa2ba,	// (0x00055c0e) bg_passive_tab_pane_g3_cp4

0xa2c5,	// (0x00055c19) bg_active_tab_pane_g1_cp5

0xa279,	// (0x00055bcd) bg_active_tab_pane_g2_cp5

0xa2ce,	// (0x00055c22) bg_active_tab_pane_g3_cp5

0xa2c5,	// (0x00055c19) bg_passive_tab_pane_g1_cp5

0xa279,	// (0x00055bcd) bg_passive_tab_pane_g2_cp5

0xa2ce,	// (0x00055c22) bg_passive_tab_pane_g3_cp5

0x3c9d,	// (0x0004f5f1) list_set_graphic_pane_ParamLimits

0x3c9d,	// (0x0004f5f1) list_set_graphic_pane

0x8f96,	// (0x000548ea) bg_set_opt_pane_cp4

0xc2d1,	// (0x00057c25) list_set_graphic_pane_g1_ParamLimits

0xc2d1,	// (0x00057c25) list_set_graphic_pane_g1

0xc2dd,	// (0x00057c31) list_set_graphic_pane_g2_ParamLimits

0xc2dd,	// (0x00057c31) list_set_graphic_pane_g2

0x0001,

0xf724,	// (0x0005b078) list_set_graphic_pane_g_ParamLimits

0xf724,	// (0x0005b078) list_set_graphic_pane_g

0x0009,

0xfaa9,	// (0x0005b3fd) volume_small_pane_cp_g

0xa2d7,	// (0x00055c2b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa2d7,	// (0x00055c2b) list_double2_large_graphic_pane_g1_cp2

0xc2ff,	// (0x00057c53) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc2ff,	// (0x00057c53) list_double2_large_graphic_pane_g2_cp2

0xc310,	// (0x00057c64) list_double2_large_graphic_pane_g3_cp2

0xc318,	// (0x00057c6c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc318,	// (0x00057c6c) list_double2_large_graphic_pane_t1_cp2

0xc32e,	// (0x00057c82) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc32e,	// (0x00057c82) list_double2_large_graphic_pane_t2_cp2

0xc852,	// (0x000581a6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc852,	// (0x000581a6) list_double_large_graphic_pane_g1_cp2

0x32be,	// (0x0004ec12) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x32be,	// (0x0004ec12) list_double_large_graphic_pane_g2_cp2

0xc466,	// (0x00057dba) list_double_large_graphic_pane_g3_cp2

0x32cf,	// (0x0004ec23) list_double_large_graphic_pane_g4_cp

0x32d7,	// (0x0004ec2b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x32d7,	// (0x0004ec2b) list_double_large_graphic_pane_t1_cp2

0x32ee,	// (0x0004ec42) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x32ee,	// (0x0004ec42) list_double_large_graphic_pane_t2_cp2

0xc358,	// (0x00057cac) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc358,	// (0x00057cac) list_double2_graphic_pane_g1_cp2

0xc366,	// (0x00057cba) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc366,	// (0x00057cba) list_double2_graphic_pane_g2_cp2

0xc377,	// (0x00057ccb) list_double2_graphic_pane_g3_cp2

0xc381,	// (0x00057cd5) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc381,	// (0x00057cd5) list_double2_graphic_pane_t1_cp2

0xc397,	// (0x00057ceb) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc397,	// (0x00057ceb) list_double2_graphic_pane_t2_cp2

0xc3a9,	// (0x00057cfd) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc3a9,	// (0x00057cfd) list_single_number_heading_pane_g1_cp2

0xc3b5,	// (0x00057d09) list_single_number_heading_pane_g2_cp2

0xc3bd,	// (0x00057d11) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc3bd,	// (0x00057d11) list_single_number_heading_pane_t1_cp2

0xc3d3,	// (0x00057d27) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc3d3,	// (0x00057d27) list_single_number_heading_pane_t2_cp2

0xc3e5,	// (0x00057d39) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc3e5,	// (0x00057d39) list_single_number_heading_pane_t3_cp2

0xc3a9,	// (0x00057cfd) list_single_heading_pane_g1_cp2_ParamLimits

0xc3a9,	// (0x00057cfd) list_single_heading_pane_g1_cp2

0xc3b5,	// (0x00057d09) list_single_heading_pane_g2_cp2

0xc3bd,	// (0x00057d11) list_single_heading_pane_t1_cp2_ParamLimits

0xc3bd,	// (0x00057d11) list_single_heading_pane_t1_cp2

0x30b7,	// (0x0004ea0b) list_single_heading_pane_t2_cp2_ParamLimits

0x30b7,	// (0x0004ea0b) list_single_heading_pane_t2_cp2

0x2fff,	// (0x0004e953) list_double_graphic_pane_g1_cp2_ParamLimits

0x2fff,	// (0x0004e953) list_double_graphic_pane_g1_cp2

0x300b,	// (0x0004e95f) list_double_graphic_pane_g2_cp2_ParamLimits

0x300b,	// (0x0004e95f) list_double_graphic_pane_g2_cp2

0x301a,	// (0x0004e96e) list_double_graphic_pane_g3_cp2

0x3022,	// (0x0004e976) list_double_graphic_pane_t1_cp2_ParamLimits

0x3022,	// (0x0004e976) list_double_graphic_pane_t1_cp2

0x3038,	// (0x0004e98c) list_double_graphic_pane_t2_cp2_ParamLimits

0x3038,	// (0x0004e98c) list_double_graphic_pane_t2_cp2

0xc45a,	// (0x00057dae) list_double_number_pane_g1_cp2_ParamLimits

0xc45a,	// (0x00057dae) list_double_number_pane_g1_cp2

0xc466,	// (0x00057dba) list_double_number_pane_g2_cp2

0x2fc3,	// (0x0004e917) list_double_number_pane_t1_cp2_ParamLimits

0x2fc3,	// (0x0004e917) list_double_number_pane_t1_cp2

0x2fd7,	// (0x0004e92b) list_double_number_pane_t2_cp2_ParamLimits

0x2fd7,	// (0x0004e92b) list_double_number_pane_t2_cp2

0x2fed,	// (0x0004e941) list_double_number_pane_t3_cp2_ParamLimits

0x2fed,	// (0x0004e941) list_double_number_pane_t3_cp2

0x2eac,	// (0x0004e800) list_single_graphic_pane_g1_cp2_ParamLimits

0x2eac,	// (0x0004e800) list_single_graphic_pane_g1_cp2

0xc027,	// (0x0005797b) list_single_graphic_pane_g2_cp2_ParamLimits

0xc027,	// (0x0005797b) list_single_graphic_pane_g2_cp2

0xc4bf,	// (0x00057e13) list_single_graphic_pane_g3_cp2

0x2e82,	// (0x0004e7d6) list_single_graphic_pane_t1_cp2_ParamLimits

0x2e82,	// (0x0004e7d6) list_single_graphic_pane_t1_cp2

0xc027,	// (0x0005797b) list_single_number_pane_g1_cp2_ParamLimits

0xc027,	// (0x0005797b) list_single_number_pane_g1_cp2

0xc4bf,	// (0x00057e13) list_single_number_pane_g2_cp2

0x2e82,	// (0x0004e7d6) list_single_number_pane_t1_cp2_ParamLimits

0x2e82,	// (0x0004e7d6) list_single_number_pane_t1_cp2

0x2e98,	// (0x0004e7ec) list_single_number_pane_t2_cp2_ParamLimits

0x2e98,	// (0x0004e7ec) list_single_number_pane_t2_cp2

0xc2ff,	// (0x00057c53) list_double2_pane_g1_cp2_ParamLimits

0xc2ff,	// (0x00057c53) list_double2_pane_g1_cp2

0xc310,	// (0x00057c64) list_double2_pane_g2_cp2

0xc432,	// (0x00057d86) list_double2_pane_t1_cp2_ParamLimits

0xc432,	// (0x00057d86) list_double2_pane_t1_cp2

0xc448,	// (0x00057d9c) list_double2_pane_t2_cp2_ParamLimits

0xc448,	// (0x00057d9c) list_double2_pane_t2_cp2

0xc45a,	// (0x00057dae) list_double_pane_g1_cp2_ParamLimits

0xc45a,	// (0x00057dae) list_double_pane_g1_cp2

0xc466,	// (0x00057dba) list_double_pane_g2_cp2

0xc46e,	// (0x00057dc2) list_double_pane_t1_cp2_ParamLimits

0xc46e,	// (0x00057dc2) list_double_pane_t1_cp2

0xc484,	// (0x00057dd8) list_double_pane_t2_cp2_ParamLimits

0xc484,	// (0x00057dd8) list_double_pane_t2_cp2

0xa324,	// (0x00055c78) list_single_pane_cp2_g3

0xc027,	// (0x0005797b) list_single_pane_g1_cp2_ParamLimits

0xc027,	// (0x0005797b) list_single_pane_g1_cp2

0xc4bf,	// (0x00057e13) list_single_pane_g2_cp2

0xc4c7,	// (0x00057e1b) list_single_pane_t1_cp2_ParamLimits

0xc4c7,	// (0x00057e1b) list_single_pane_t1_cp2

0xa32c,	// (0x00055c80) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa32c,	// (0x00055c80) list_single_large_graphic_pane_g1_cp2

0xc4df,	// (0x00057e33) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc4df,	// (0x00057e33) list_single_large_graphic_pane_g2_cp2

0xc4eb,	// (0x00057e3f) list_single_large_graphic_pane_g3_cp2

0xa338,	// (0x00055c8c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa338,	// (0x00055c8c) list_single_large_graphic_pane_g4_cp1

0xc4f3,	// (0x00057e47) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc4f3,	// (0x00057e47) list_single_large_graphic_pane_t1_cp2

0x2e4e,	// (0x0004e7a2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2e4e,	// (0x0004e7a2) list_single_graphic_heading_pane_g1_cp2

0x2e1b,	// (0x0004e76f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2e1b,	// (0x0004e76f) list_single_graphic_heading_pane_g4_cp2

0xc4bf,	// (0x00057e13) list_single_graphic_heading_pane_g5_cp2

0x2e5a,	// (0x0004e7ae) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2e5a,	// (0x0004e7ae) list_single_graphic_heading_pane_t1_cp2

0x2e70,	// (0x0004e7c4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2e70,	// (0x0004e7c4) list_single_graphic_heading_pane_t2_cp2

0x2e0f,	// (0x0004e763) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2e0f,	// (0x0004e763) list_single_2graphic_pane_g1_cp2

0x2e1b,	// (0x0004e76f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2e1b,	// (0x0004e76f) list_single_2graphic_pane_g2_cp2

0xc4bf,	// (0x00057e13) list_single_2graphic_pane_g3_cp2

0x2e2c,	// (0x0004e780) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2e2c,	// (0x0004e780) list_single_2graphic_pane_g4_cp2

0x2e38,	// (0x0004e78c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2e38,	// (0x0004e78c) list_single_2graphic_pane_t1_cp2

0x8ea6,	// (0x000547fa) list_highlight_pane_g10_cp1

0x29f7,	// (0x0004e34b) list_highlight_pane_g1_cp1

0x29ff,	// (0x0004e353) list_highlight_pane_g2_cp1

0x2a07,	// (0x0004e35b) list_highlight_pane_g3_cp1

0x2a0f,	// (0x0004e363) list_highlight_pane_g4_cp1

0x2a17,	// (0x0004e36b) list_highlight_pane_g5_cp1

0x2a1f,	// (0x0004e373) list_highlight_pane_g6_cp1

0x2a27,	// (0x0004e37b) list_highlight_pane_g7_cp1

0x2a2f,	// (0x0004e383) list_highlight_pane_g8_cp1

0x2a37,	// (0x0004e38b) list_highlight_pane_g9_cp1

0xb5ad,	// (0x00056f01) form_field_slider_pane_t3

0xb5bb,	// (0x00056f0f) form_field_slider_pane_t4

0x293b,	// (0x0004e28f) slider_form_pane_ParamLimits

0x293b,	// (0x0004e28f) slider_form_pane

0x8f96,	// (0x000548ea) control_abbreviations

0x8f96,	// (0x000548ea) control_conventions

0x8f96,	// (0x000548ea) control_definitions

0x8f96,	// (0x000548ea) format_table_attribute

0xc829,	// (0x0005817d) bg_popup_preview_window_pane_g9

0x8f96,	// (0x000548ea) format_table_data2

0x8f96,	// (0x000548ea) format_table_data3

0x8f96,	// (0x000548ea) format_table_data_example

0x0008,

0x8f96,	// (0x000548ea) intro_purpose

0xf8b4,	// (0x0005b208) bg_popup_preview_window_pane_g

0x8f96,	// (0x000548ea) texts_category

0x8f96,	// (0x000548ea) texts_graphics

0xc509,	// (0x00057e5d) text_digital

0xc518,	// (0x00057e6c) text_primary

0xc527,	// (0x00057e7b) text_primary_small

0xc536,	// (0x00057e8a) text_secondary

0xc545,	// (0x00057e99) text_title

0xcb90,	// (0x000584e4) bg_passive_tab_pane_g1_cp3_srt

0xa279,	// (0x00055bcd) bg_passive_tab_pane_g2_cp3_srt

0xcb99,	// (0x000584ed) bg_passive_tab_pane_g3_cp3_srt

0x91e7,	// (0x00054b3b) bg_active_tab_pane_cp3_srt_ParamLimits

0x91e7,	// (0x00054b3b) bg_active_tab_pane_cp3_srt

0xcba2,	// (0x000584f6) tabs_4_active_pane_srt_g1

0xcbaa,	// (0x000584fe) tabs_4_active_pane_srt_t1_ParamLimits

0xcbaa,	// (0x000584fe) tabs_4_active_pane_srt_t1

0xcb90,	// (0x000584e4) bg_active_tab_pane_g1_cp3_copy1

0xa279,	// (0x00055bcd) bg_active_tab_pane_g2_cp3_copy1

0xcb99,	// (0x000584ed) bg_active_tab_pane_g3_cp3_copy1

0x9231,	// (0x00054b85) tabs_2_long_active_pane_srt_ParamLimits

0x9231,	// (0x00054b85) tabs_2_long_active_pane_srt

0x9231,	// (0x00054b85) tabs_2_long_passive_pane_srt_ParamLimits

0x9231,	// (0x00054b85) tabs_2_long_passive_pane_srt

0x9d5e,	// (0x000556b2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9d5e,	// (0x000556b2) bg_passive_tab_pane_cp4_srt

0xc941,	// (0x00058295) bg_passive_tab_pane_g1_cp4_srt

0xa279,	// (0x00055bcd) bg_passive_tab_pane_g2_cp4_srt

0xc94a,	// (0x0005829e) bg_passive_tab_pane_g3_cp4_srt

0x9231,	// (0x00054b85) bg_active_tab_pane_cp4_srt_ParamLimits

0x9231,	// (0x00054b85) bg_active_tab_pane_cp4_srt

0xc953,	// (0x000582a7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc953,	// (0x000582a7) tabs_2_long_active_pane_srt_t1

0xc941,	// (0x00058295) bg_active_tab_pane_g1_cp4_srt

0xa279,	// (0x00055bcd) bg_active_tab_pane_g2_cp4_srt

0xc94a,	// (0x0005829e) bg_active_tab_pane_g3_cp4_srt

0x91e7,	// (0x00054b3b) tabs_3_long_active_pane_srt_ParamLimits

0x91e7,	// (0x00054b3b) tabs_3_long_active_pane_srt

0x91e7,	// (0x00054b3b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x91e7,	// (0x00054b3b) tabs_3_long_passive_pane_cp_srt

0x91e7,	// (0x00054b3b) tabs_3_long_passive_pane_srt_ParamLimits

0x91e7,	// (0x00054b3b) tabs_3_long_passive_pane_srt

0x9d5e,	// (0x000556b2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9d5e,	// (0x000556b2) bg_passive_tab_pane_cp5_srt

0xa2c5,	// (0x00055c19) bg_passive_tab_pane_g1_cp5_srt

0xa279,	// (0x00055bcd) bg_passive_tab_pane_g2_cp5_srt

0xa2ce,	// (0x00055c22) bg_passive_tab_pane_g3_cp5_srt

0x9231,	// (0x00054b85) bg_active_tab_pane_cp5_srt_ParamLimits

0x9231,	// (0x00054b85) bg_active_tab_pane_cp5_srt

0xc92b,	// (0x0005827f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc92b,	// (0x0005827f) tabs_3_long_active_pane_srt_t1

0xa2c5,	// (0x00055c19) bg_active_tab_pane_g1_cp5_srt

0xa279,	// (0x00055bcd) bg_active_tab_pane_g2_cp5_srt

0xa2ce,	// (0x00055c22) bg_active_tab_pane_g3_cp5_srt

0x3502,	// (0x0004ee56) navi_text_pane_srt_t1

0x34fa,	// (0x0004ee4e) navi_icon_pane_srt_g1

0xc630,	// (0x00057f84) midp_editing_number_pane_srt

0xc554,	// (0x00057ea8) midp_ticker_pane_srt

0xc638,	// (0x00057f8c) midp_ticker_pane_srt_g1

0xc640,	// (0x00057f94) midp_ticker_pane_srt_g2

0x0001,

0xf743,	// (0x0005b097) midp_ticker_pane_srt_g

0xc648,	// (0x00057f9c) midp_ticker_pane_srt_t1

0x34eb,	// (0x0004ee3f) midp_editing_number_pane_t1_copy1

0xa352,	// (0x00055ca6) listscroll_midp_pane

0xa352,	// (0x00055ca6) midp_form_pane

0xa3bd,	// (0x00055d11) midp_info_popup_window_ParamLimits

0xa3bd,	// (0x00055d11) midp_info_popup_window

0x9c95,	// (0x000555e9) bg_popup_sub_pane_cp50_ParamLimits

0x9c95,	// (0x000555e9) bg_popup_sub_pane_cp50

0x262b,	// (0x0004df7f) listscroll_midp_info_pane_ParamLimits

0x262b,	// (0x0004df7f) listscroll_midp_info_pane

0x260b,	// (0x0004df5f) listscroll_form_midp_pane_ParamLimits

0x260b,	// (0x0004df5f) listscroll_form_midp_pane

0x2617,	// (0x0004df6b) scroll_bar_cp050

0x260b,	// (0x0004df5f) list_midp_pane

0xcd34,	// (0x00058688) signal_pane_g2_cp

0x2525,	// (0x0004de79) listscroll_midp_info_pane_t1_ParamLimits

0x2525,	// (0x0004de79) listscroll_midp_info_pane_t1

0xb3e7,	// (0x00056d3b) listscroll_midp_info_pane_t2_ParamLimits

0xb3e7,	// (0x00056d3b) listscroll_midp_info_pane_t2

0xb425,	// (0x00056d79) listscroll_midp_info_pane_t3_ParamLimits

0xb425,	// (0x00056d79) listscroll_midp_info_pane_t3

0xb45f,	// (0x00056db3) listscroll_midp_info_pane_t4_ParamLimits

0xb45f,	// (0x00056db3) listscroll_midp_info_pane_t4

0x0003,

0xf7ef,	// (0x0005b143) listscroll_midp_info_pane_t_ParamLimits

0xf7ef,	// (0x0005b143) listscroll_midp_info_pane_t

0x9cf8,	// (0x0005564c) scroll_pane_cp21

0x24c5,	// (0x0004de19) form_midp_field_choice_group_pane

0xb3aa,	// (0x00056cfe) form_midp_field_text_pane

0x250b,	// (0x0004de5f) form_midp_field_time_pane

0x2513,	// (0x0004de67) form_midp_gauge_slider_pane

0x251c,	// (0x0004de70) form_midp_gauge_wait_pane

0x8f96,	// (0x000548ea) form_midp_image_pane

0x8c7f,	// (0x000545d3) list_single_midp_pane_ParamLimits

0x8c7f,	// (0x000545d3) list_single_midp_pane

0xb388,	// (0x00056cdc) form_midp_field_text_pane_t1

0x2244,	// (0x0004db98) input_focus_pane_cp050

0x24b4,	// (0x0004de08) list_midp_form_text_pane

0x2449,	// (0x0004dd9d) form_midp_field_choice_group_pane_t1

0x2457,	// (0x0004ddab) input_focus_pane_cp051

0x246b,	// (0x0004ddbf) list_midp_choice_pane

0x8f96,	// (0x000548ea) status_idle_pane

0x242d,	// (0x0004dd81) form_midp_field_time_pane_t1

0x8ea6,	// (0x000547fa) wait_anim_pane_g2_copy1

0x243b,	// (0x0004dd8f) form_midp_field_time_pane_t2

0x0001,

0xc5b4,	// (0x00057f08) aid_navinavi_width_2_pane

0xf7ea,	// (0x0005b13e) form_midp_field_time_pane_t

0x8f96,	// (0x000548ea) input_focus_pane_cp052

0x8f96,	// (0x000548ea) bg_input_focus_pane_cp040

0x23ed,	// (0x0004dd41) form_midp_gauge_slider_pane_t1

0x23fb,	// (0x0004dd4f) form_midp_gauge_slider_pane_t2

0xb36c,	// (0x00056cc0) form_midp_gauge_slider_pane_t3

0xb37a,	// (0x00056cce) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e1,	// (0x0005b135) form_midp_gauge_slider_pane_t

0x2425,	// (0x0004dd79) form_midp_slider_pane

0x9231,	// (0x00054b85) bg_input_focus_pane_cp041_ParamLimits

0x9231,	// (0x00054b85) bg_input_focus_pane_cp041

0x23ba,	// (0x0004dd0e) form_midp_gauge_wait_pane_t1_ParamLimits

0x23ba,	// (0x0004dd0e) form_midp_gauge_wait_pane_t1

0x23cc,	// (0x0004dd20) form_midp_gauge_wait_pane_t2_ParamLimits

0x23cc,	// (0x0004dd20) form_midp_gauge_wait_pane_t2

0x0001,

0xf7dc,	// (0x0005b130) form_midp_gauge_wait_pane_t_ParamLimits

0xf7dc,	// (0x0005b130) form_midp_gauge_wait_pane_t

0x23de,	// (0x0004dd32) form_midp_wait_pane_ParamLimits

0x23de,	// (0x0004dd32) form_midp_wait_pane

0xb336,	// (0x00056c8a) form_midp_image_pane_g1

0xb33f,	// (0x00056c93) form_midp_image_pane_t1

0xb34e,	// (0x00056ca2) form_midp_image_pane_t2

0xb35d,	// (0x00056cb1) form_midp_image_pane_t3

0x0002,

0xf7d5,	// (0x0005b129) form_midp_image_pane_t

0x237b,	// (0x0004dccf) list_single_midp_pane_g1

0xea9b,	// (0x0005a3ef) list_single_midp_pane_t1

0xb321,	// (0x00056c75) list_midp_form_item_pane_ParamLimits

0xb321,	// (0x00056c75) list_midp_form_item_pane

0xc55c,	// (0x00057eb0) list_midp_form_item_pane_t1

0xc56b,	// (0x00057ebf) midp_ticker_pane_g1

0xc577,	// (0x00057ecb) midp_ticker_pane_g2

0x0001,

0xf729,	// (0x0005b07d) midp_ticker_pane_g

0xc583,	// (0x00057ed7) midp_ticker_pane_t1

0x3738,	// (0x0004f08c) midp_editing_number_pane_t1

0x3716,	// (0x0004f06a) midp_editing_number_pane

0x3725,	// (0x0004f079) midp_ticker_pane

0x34db,	// (0x0004ee2f) ai_message_heading_pane

0x8f96,	// (0x000548ea) bg_popup_window_pane_cp14

0x34e3,	// (0x0004ee37) listscroll_ai_message_pane

0x3465,	// (0x0004edb9) ai_message_heading_pane_g1_ParamLimits

0x3465,	// (0x0004edb9) ai_message_heading_pane_g1

0xc8f3,	// (0x00058247) ai_message_heading_pane_g2_ParamLimits

0xc8f3,	// (0x00058247) ai_message_heading_pane_g2

0x347d,	// (0x0004edd1) ai_message_heading_pane_g3_ParamLimits

0x347d,	// (0x0004edd1) ai_message_heading_pane_g3

0x3489,	// (0x0004eddd) ai_message_heading_pane_g4_ParamLimits

0x3489,	// (0x0004eddd) ai_message_heading_pane_g4

0x0003,

0xf916,	// (0x0005b26a) ai_message_heading_pane_g_ParamLimits

0xf916,	// (0x0005b26a) ai_message_heading_pane_g

0xc8ff,	// (0x00058253) ai_message_heading_pane_t1_ParamLimits

0xc8ff,	// (0x00058253) ai_message_heading_pane_t1

0xc919,	// (0x0005826d) ai_message_heading_pane_t2_ParamLimits

0xc919,	// (0x0005826d) ai_message_heading_pane_t2

0x0001,

0xf91f,	// (0x0005b273) ai_message_heading_pane_t_ParamLimits

0xf91f,	// (0x0005b273) ai_message_heading_pane_t

0x34c1,	// (0x0004ee15) bg_popup_heading_pane_cp1_ParamLimits

0x34c1,	// (0x0004ee15) bg_popup_heading_pane_cp1

0x3453,	// (0x0004eda7) list_ai_message_pane_ParamLimits

0x3453,	// (0x0004eda7) list_ai_message_pane

0x9cf8,	// (0x0005564c) scroll_pane_cp10

0x33ef,	// (0x0004ed43) list_ai_message_pane_g1

0x33f7,	// (0x0004ed4b) list_ai_message_pane_g2

0x0001,

0xf8f3,	// (0x0005b247) list_ai_message_pane_g

0x33ff,	// (0x0004ed53) list_ai_message_pane_t1_ParamLimits

0x33ff,	// (0x0004ed53) list_ai_message_pane_t1

0x3414,	// (0x0004ed68) list_ai_message_pane_t2_ParamLimits

0x3414,	// (0x0004ed68) list_ai_message_pane_t2

0x3429,	// (0x0004ed7d) list_ai_message_pane_t3_ParamLimits

0x3429,	// (0x0004ed7d) list_ai_message_pane_t3

0x343e,	// (0x0004ed92) list_ai_message_pane_t4_ParamLimits

0x343e,	// (0x0004ed92) list_ai_message_pane_t4

0x0003,

0xf8f8,	// (0x0005b24c) list_ai_message_pane_t_ParamLimits

0xf8f8,	// (0x0005b24c) list_ai_message_pane_t

0xc8cf,	// (0x00058223) cell_ai_soft_ind_pane_ParamLimits

0xc8cf,	// (0x00058223) cell_ai_soft_ind_pane

0xc595,	// (0x00057ee9) cell_ai_soft_ind_pane_g1_ParamLimits

0xc595,	// (0x00057ee9) cell_ai_soft_ind_pane_g1

0x8f96,	// (0x000548ea) grid_highlight_cp1

0xc5a2,	// (0x00057ef6) text_secondary_cp56_ParamLimits

0xc5a2,	// (0x00057ef6) text_secondary_cp56

0x33af,	// (0x0004ed03) example_general_pane_ParamLimits

0x33af,	// (0x0004ed03) example_general_pane

0x33bb,	// (0x0004ed0f) example_parent_pane_g1_ParamLimits

0x33bb,	// (0x0004ed0f) example_parent_pane_g1

0x33c7,	// (0x0004ed1b) example_parent_pane_t1_ParamLimits

0x33c7,	// (0x0004ed1b) example_parent_pane_t1

0xaaa5,	// (0x000563f9) popup_preview_text_window_ParamLimits

0xaaa5,	// (0x000563f9) popup_preview_text_window

0xc4b7,	// (0x00057e0b) list_single_pane_cp2_g4

0x9669,	// (0x00054fbd) bg_popup_preview_window_pane_ParamLimits

0x9669,	// (0x00054fbd) bg_popup_preview_window_pane

0xc831,	// (0x00058185) popup_preview_text_window_t1_ParamLimits

0xc831,	// (0x00058185) popup_preview_text_window_t1

0x3127,	// (0x0004ea7b) popup_preview_text_window_t2_ParamLimits

0x3127,	// (0x0004ea7b) popup_preview_text_window_t2

0x3170,	// (0x0004eac4) popup_preview_text_window_t3_ParamLimits

0x3170,	// (0x0004eac4) popup_preview_text_window_t3

0x31b5,	// (0x0004eb09) popup_preview_text_window_t4_ParamLimits

0x31b5,	// (0x0004eb09) popup_preview_text_window_t4

0x0004,

0xf8c7,	// (0x0005b21b) popup_preview_text_window_t_ParamLimits

0xf8c7,	// (0x0005b21b) popup_preview_text_window_t

0x3233,	// (0x0004eb87) scroll_pane_cp11

0x21b8,	// (0x0004db0c) bg_popup_preview_window_pane_g1

0xc7f1,	// (0x00058145) bg_popup_preview_window_pane_g2

0xc7f9,	// (0x0005814d) bg_popup_preview_window_pane_g3

0xc801,	// (0x00058155) bg_popup_preview_window_pane_g4

0xc809,	// (0x0005815d) bg_popup_preview_window_pane_g5

0xc811,	// (0x00058165) bg_popup_preview_window_pane_g6

0xc819,	// (0x0005816d) bg_popup_preview_window_pane_g7

0xc821,	// (0x00058175) bg_popup_preview_window_pane_g8

0xe710,	// (0x0005a064) aid_popup_width_pane

0xaa21,	// (0x00056375) popup_midp_note_alarm_window_ParamLimits

0xaa21,	// (0x00056375) popup_midp_note_alarm_window

0x9b6e,	// (0x000554c2) data_form_pane_ParamLimits

0x8ab5,	// (0x00054409) form_field_data_pane_g1

0x8abf,	// (0x00054413) form_field_data_pane_t1_ParamLimits

0x9b7a,	// (0x000554ce) input_focus_pane_ParamLimits

0xe921,	// (0x0005a275) data_form_wide_pane_ParamLimits

0xe932,	// (0x0005a286) form_field_data_wide_pane_g1

0xe93e,	// (0x0005a292) form_field_data_wide_pane_t1_ParamLimits

0x9910,	// (0x00055264) input_focus_pane_cp6_ParamLimits

0x9ca3,	// (0x000555f7) input_popup_find_pane_g1_ParamLimits

0x9ca3,	// (0x000555f7) input_popup_find_pane_g1

0xf1f1,	// (0x0005ab45) aid_navi_side_left_pane

0xf206,	// (0x0005ab5a) aid_navi_side_right_pane

0x2af2,	// (0x0004e446) bg_popup_window_pane_cp30_ParamLimits

0x2af2,	// (0x0004e446) bg_popup_window_pane_cp30

0x2b6c,	// (0x0004e4c0) popup_midp_note_alarm_window_g1_ParamLimits

0x2b6c,	// (0x0004e4c0) popup_midp_note_alarm_window_g1

0x2b9c,	// (0x0004e4f0) popup_midp_note_alarm_window_t1_ParamLimits

0x2b9c,	// (0x0004e4f0) popup_midp_note_alarm_window_t1

0xb600,	// (0x00056f54) popup_midp_note_alarm_window_t2_ParamLimits

0xb600,	// (0x00056f54) popup_midp_note_alarm_window_t2

0xc6e8,	// (0x0005803c) popup_midp_note_alarm_window_t3_ParamLimits

0xc6e8,	// (0x0005803c) popup_midp_note_alarm_window_t3

0xc710,	// (0x00058064) popup_midp_note_alarm_window_t4_ParamLimits

0xc710,	// (0x00058064) popup_midp_note_alarm_window_t4

0x2d33,	// (0x0004e687) popup_midp_note_alarm_window_t5_ParamLimits

0x2d33,	// (0x0004e687) popup_midp_note_alarm_window_t5

0x000a,

0xf864,	// (0x0005b1b8) popup_midp_note_alarm_window_t_ParamLimits

0xf864,	// (0x0005b1b8) popup_midp_note_alarm_window_t

0x2ddf,	// (0x0004e733) wait_bar_pane_cp1_ParamLimits

0x2ddf,	// (0x0004e733) wait_bar_pane_cp1

0x8f96,	// (0x000548ea) wait_anim_pane_copy1

0x8f96,	// (0x000548ea) wait_border_pane_copy1

0x27e8,	// (0x0004e13c) wait_border_pane_g1_copy1

0xe958,	// (0x0005a2ac) form_field_popup_pane_g1

0x8ad9,	// (0x0005442d) form_field_popup_pane_t1_ParamLimits

0x9b7a,	// (0x000554ce) input_focus_pane_cp7_ParamLimits

0x9ba8,	// (0x000554fc) list_form_pane_ParamLimits

0xe960,	// (0x0005a2b4) form_field_popup_wide_pane_g1

0xe968,	// (0x0005a2bc) form_field_popup_wide_pane_t1_ParamLimits

0x9b7a,	// (0x000554ce) input_focus_pane_cp8_ParamLimits

0x9bb4,	// (0x00055508) list_form_wide_pane_ParamLimits

0x3873,	// (0x0004f1c7) aid_size_cell_graphic_pane

0x8b58,	// (0x000544ac) data_form_pane_t1_ParamLimits

0x8ca7,	// (0x000545fb) data_form_wide_pane_t1_ParamLimits

0xaee8,	// (0x0005683c) bg_status_flat_pane

0x9123,	// (0x00054a77) title_pane_t1_ParamLimits

0x91af,	// (0x00054b03) title_pane_t2_ParamLimits

0x91d5,	// (0x00054b29) title_pane_t3_ParamLimits

0xf532,	// (0x0005ae86) title_pane_t_ParamLimits

0xc08b,	// (0x000579df) level_1_signal_ParamLimits

0xc098,	// (0x000579ec) level_2_signal_ParamLimits

0xc0a5,	// (0x000579f9) level_3_signal_ParamLimits

0xc0b2,	// (0x00057a06) level_4_signal_ParamLimits

0xc0bf,	// (0x00057a13) level_5_signal_ParamLimits

0xc0cc,	// (0x00057a20) level_6_signal_ParamLimits

0xc0d9,	// (0x00057a2d) level_7_signal_ParamLimits

0xc08b,	// (0x000579df) level_1_battery_ParamLimits

0xc098,	// (0x000579ec) level_2_battery_ParamLimits

0xc0a5,	// (0x000579f9) level_3_battery_ParamLimits

0xc0b2,	// (0x00057a06) level_4_battery_ParamLimits

0xc0bf,	// (0x00057a13) level_5_battery_ParamLimits

0xc0cc,	// (0x00057a20) level_6_battery_ParamLimits

0xc0d9,	// (0x00057a2d) level_7_battery_ParamLimits

0x29f7,	// (0x0004e34b) bg_status_flat_pane_g1

0x29ff,	// (0x0004e353) bg_status_flat_pane_g2

0x2a07,	// (0x0004e35b) bg_status_flat_pane_g3

0x2a0f,	// (0x0004e363) bg_status_flat_pane_g4

0x2a17,	// (0x0004e36b) bg_status_flat_pane_g5

0x2a1f,	// (0x0004e373) bg_status_flat_pane_g6

0x2a27,	// (0x0004e37b) bg_status_flat_pane_g7

0x91fd,	// (0x00054b51) tabs_3_active_pane_t1_ParamLimits

0x91fd,	// (0x00054b51) tabs_3_passive_pane_t1_ParamLimits

0x9217,	// (0x00054b6b) tabs_4_active_pane_t1_ParamLimits

0x9217,	// (0x00054b6b) tabs_4_1_passive_pane_t1_ParamLimits

0x9d39,	// (0x0005568d) tabs_2_active_pane_t1_ParamLimits

0x9d39,	// (0x0005568d) tabs_2_passive_pane_t1_ParamLimits

0x9231,	// (0x00054b85) bg_active_tab_pane_cp4_ParamLimits

0x9d4b,	// (0x0005569f) tabs_2_long_active_pane_t1_ParamLimits

0x9d5e,	// (0x000556b2) bg_passive_tab_pane_cp4_ParamLimits

0x099b,	// (0x0004c2ef) list_single_midp_graphic_pane_t1_ParamLimits

0x9231,	// (0x00054b85) bg_active_tab_pane_cp5_ParamLimits

0x9d6a,	// (0x000556be) tabs_3_long_active_pane_t1_ParamLimits

0x9d5e,	// (0x000556b2) bg_passive_tab_pane_cp5_ParamLimits

0x099b,	// (0x0004c2ef) list_single_midp_graphic_pane_t1

0xaee8,	// (0x0005683c) bg_status_flat_pane_ParamLimits

0x076a,	// (0x0004c0be) indicator_pane_cp2_ParamLimits

0x076a,	// (0x0004c0be) indicator_pane_cp2

0xb066,	// (0x000569ba) navi_pane_srt_ParamLimits

0xb066,	// (0x000569ba) navi_pane_srt

0x08b9,	// (0x0004c20d) popup_clock_digital_analogue_window_cp1

0x93d1,	// (0x00054d25) indicator_pane_t1

0xc554,	// (0x00057ea8) copy_highlight_pane

0xc554,	// (0x00057ea8) cursor_graphics_pane

0xc554,	// (0x00057ea8) graphic_within_text_pane

0xc554,	// (0x00057ea8) link_highlight_pane

0x31f6,	// (0x0004eb4a) popup_preview_text_window_t5_ParamLimits

0x31f6,	// (0x0004eb4a) popup_preview_text_window_t5

0xc5bc,	// (0x00057f10) cursor_digital_pane

0xc5bc,	// (0x00057f10) cursor_primary_pane

0xc5cd,	// (0x00057f21) cursor_primary_small_pane

0xc5d5,	// (0x00057f29) cursor_secondary_pane

0xc5dd,	// (0x00057f31) cursor_title_pane

0xc5bc,	// (0x00057f10) link_highlight_digital_pane

0xc5c4,	// (0x00057f18) link_highlight_primary_pane

0xc5cd,	// (0x00057f21) link_highlight_primary_small_pane

0xc5d5,	// (0x00057f29) link_highlight_secondary_pane

0xc5dd,	// (0x00057f31) link_highlight_title_pane

0xc5bc,	// (0x00057f10) copy_highlight_digital_pane

0xc5bc,	// (0x00057f10) copy_highlight_primary_pane

0xc5cd,	// (0x00057f21) copy_highlight_primary_small_pane

0xc5d5,	// (0x00057f29) copy_highlight_secondary_pane

0xc5dd,	// (0x00057f31) copy_highlight_title_pane

0xc5d5,	// (0x00057f29) graphic_text_digital_pane

0x2a95,	// (0x0004e3e9) graphic_text_primary_pane

0x2a9e,	// (0x0004e3f2) graphic_text_primary_small_pane

0xc5cd,	// (0x00057f21) graphic_text_secondary_pane

0xc5bc,	// (0x00057f10) graphic_text_title_pane

0xa40e,	// (0x00055d62) cursor_primary_pane_g1

0x2a87,	// (0x0004e3db) cursor_text_primary_t1

0xb5f6,	// (0x00056f4a) cursor_primary_small_pane_g1

0x2a79,	// (0x0004e3cd) cursor_text_primary_small_t1

0xb5ec,	// (0x00056f40) cursor_primary_small_pane_g1_copy1

0x2a61,	// (0x0004e3b5) cursor_text_primary_small_t1_copy1

0x2a3f,	// (0x0004e393) cursor_text_title_t1

0xb5e2,	// (0x00056f36) cursor_title_pane_g1

0xa40e,	// (0x00055d62) cursor_digital_pane_g1

0xc5e5,	// (0x00057f39) cursor_text_digital_t1

0xc5f3,	// (0x00057f47) link_highlight_primary_pane_g1

0x29e8,	// (0x0004e33c) link_highlight_primary_pane_t1

0xc5f3,	// (0x00057f47) link_highlight_primary_small_pane_g1

0xc5fb,	// (0x00057f4f) link_highlight_primary_small_pane_t1

0xc5f3,	// (0x00057f47) link_highlight_secondary_pane_g1

0xc60a,	// (0x00057f5e) link_highlight_secondary_pane_t1

0x294d,	// (0x0004e2a1) link_highlight_title_pane_g1

0x2964,	// (0x0004e2b8) link_highlight_title_pane_t1

0x294d,	// (0x0004e2a1) link_highlight_digital_pane_g1

0x2955,	// (0x0004e2a9) link_highlight_digital_pane_t1

0x2807,	// (0x0004e15b) copy_highlight_primary_pane_g1

0x282d,	// (0x0004e181) copy_highlight_primary_pane_t1

0x2807,	// (0x0004e15b) copy_highlight_primary_small_pane_g1

0x281e,	// (0x0004e172) copy_highlight_primary_small_pane_t1

0xc619,	// (0x00057f6d) copy_highlight_secondary_pane_g1

0xc621,	// (0x00057f75) copy_highlight_secondary_pane_t1

0x2807,	// (0x0004e15b) copy_highlight_title_pane_g1

0x280f,	// (0x0004e163) copy_highlight_title_pane_t1

0x2807,	// (0x0004e15b) copy_highlight_digital_pane_g1

0x3a41,	// (0x0004f395) copy_highlight_digital_pane_t1

0x3995,	// (0x0004f2e9) graphic_text_primary_pane_g1

0x3a25,	// (0x0004f379) graphic_text_primary_pane_t1

0x3a33,	// (0x0004f387) graphic_text_primary_pane_t2

0x0001,

0xf993,	// (0x0005b2e7) graphic_text_primary_pane_t

0x3a01,	// (0x0004f355) graphic_text_primary_small_pane_g1

0x3a09,	// (0x0004f35d) graphic_text_primary_small_pane_t1

0x3a17,	// (0x0004f36b) graphic_text_primary_small_pane_t2

0x0001,

0xf98e,	// (0x0005b2e2) graphic_text_primary_small_pane_t

0x39dd,	// (0x0004f331) graphic_text_secondary_pane_g1

0x39e5,	// (0x0004f339) graphic_text_secondary_pane_t1

0x39f3,	// (0x0004f347) graphic_text_secondary_pane_t2

0x0001,

0xf989,	// (0x0005b2dd) graphic_text_secondary_pane_t

0x39b9,	// (0x0004f30d) graphic_text_title_pane_g1

0x39c1,	// (0x0004f315) graphic_text_title_pane_t1

0x39cf,	// (0x0004f323) graphic_text_title_pane_t2

0x0001,

0xf984,	// (0x0005b2d8) graphic_text_title_pane_t

0x3995,	// (0x0004f2e9) graphic_text_digital_pane_g1

0x399d,	// (0x0004f2f1) graphic_text_digital_pane_t1

0x39ab,	// (0x0004f2ff) graphic_text_digital_pane_t2

0x0001,

0xf97f,	// (0x0005b2d3) graphic_text_digital_pane_t

0x9231,	// (0x00054b85) navi_icon_pane_srt_ParamLimits

0x9231,	// (0x00054b85) navi_icon_pane_srt

0x8f96,	// (0x000548ea) navi_midp_pane_srt

0x8f96,	// (0x000548ea) navi_navi_pane_srt

0x9231,	// (0x00054b85) navi_text_pane_srt_ParamLimits

0x9231,	// (0x00054b85) navi_text_pane_srt

0x3960,	// (0x0004f2b4) navi_navi_icon_text_pane_srt

0x3968,	// (0x0004f2bc) navi_navi_pane_srt_g1_ParamLimits

0x3968,	// (0x0004f2bc) navi_navi_pane_srt_g1

0x397a,	// (0x0004f2ce) navi_navi_pane_srt_g2_ParamLimits

0x397a,	// (0x0004f2ce) navi_navi_pane_srt_g2

0x0001,

0xf97a,	// (0x0005b2ce) navi_navi_pane_srt_g_ParamLimits

0xf97a,	// (0x0005b2ce) navi_navi_pane_srt_g

0x398c,	// (0x0004f2e0) navi_navi_tabs_pane_srt

0x3960,	// (0x0004f2b4) navi_navi_text_pane_srt

0x3960,	// (0x0004f2b4) navi_navi_volume_pane_srt

0x3951,	// (0x0004f2a5) navi_navi_text_pane_srt_t1

0x0dc6,	// (0x0004c71a) navi_navi_volume_pane_srt_g1

0x0dce,	// (0x0004c722) volume_small_pane_srt_ParamLimits

0x0dce,	// (0x0004c722) volume_small_pane_srt

0xf471,	// (0x0005adc5) volume_small_pane_srt_g1_ParamLimits

0xf471,	// (0x0005adc5) volume_small_pane_srt_g1

0xf481,	// (0x0005add5) volume_small_pane_srt_g2_ParamLimits

0xf481,	// (0x0005add5) volume_small_pane_srt_g2

0xf492,	// (0x0005ade6) volume_small_pane_srt_g3_ParamLimits

0xf492,	// (0x0005ade6) volume_small_pane_srt_g3

0xf4a3,	// (0x0005adf7) volume_small_pane_srt_g4_ParamLimits

0xf4a3,	// (0x0005adf7) volume_small_pane_srt_g4

0xf4b4,	// (0x0005ae08) volume_small_pane_srt_g5_ParamLimits

0xf4b4,	// (0x0005ae08) volume_small_pane_srt_g5

0xf4c5,	// (0x0005ae19) volume_small_pane_srt_g6_ParamLimits

0xf4c5,	// (0x0005ae19) volume_small_pane_srt_g6

0xf4d6,	// (0x0005ae2a) volume_small_pane_srt_g7_ParamLimits

0xf4d6,	// (0x0005ae2a) volume_small_pane_srt_g7

0xf4e7,	// (0x0005ae3b) volume_small_pane_srt_g8_ParamLimits

0xf4e7,	// (0x0005ae3b) volume_small_pane_srt_g8

0xf4f8,	// (0x0005ae4c) volume_small_pane_srt_g9_ParamLimits

0xf4f8,	// (0x0005ae4c) volume_small_pane_srt_g9

0xf509,	// (0x0005ae5d) volume_small_pane_srt_g10_ParamLimits

0xf509,	// (0x0005ae5d) volume_small_pane_srt_g10

0x0009,

0xf72e,	// (0x0005b082) volume_small_pane_srt_g_ParamLimits

0xf72e,	// (0x0005b082) volume_small_pane_srt_g

0x9712,	// (0x00055066) query_popup_data_pane_cp2

0x3937,	// (0x0004f28b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3937,	// (0x0004f28b) navi_navi_icon_text_pane_srt_t1

0x2a95,	// (0x0004e3e9) navi_tabs_2_long_pane_srt

0x2a95,	// (0x0004e3e9) navi_tabs_2_pane_srt

0x2a95,	// (0x0004e3e9) navi_tabs_3_long_pane_srt

0x2a95,	// (0x0004e3e9) navi_tabs_3_pane_srt

0x2a95,	// (0x0004e3e9) navi_tabs_4_pane_srt

0xb7c9,	// (0x0005711d) tabs_2_active_pane_srt_ParamLimits

0xb7c9,	// (0x0005711d) tabs_2_active_pane_srt

0xb7d9,	// (0x0005712d) tabs_2_passive_pane_srt_ParamLimits

0xb7d9,	// (0x0005712d) tabs_2_passive_pane_srt

0x2244,	// (0x0004db98) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2244,	// (0x0004db98) bg_passive_tab_pane_cp1_srt

0xcc33,	// (0x00058587) bg_passive_tab_pane_g1_cp1_srt

0xa279,	// (0x00055bcd) bg_passive_tab_pane_g2_cp1_srt

0xcc3c,	// (0x00058590) bg_passive_tab_pane_g3_cp1_srt

0x91e7,	// (0x00054b3b) bg_active_tab_pane_cp1_srt_ParamLimits

0x91e7,	// (0x00054b3b) bg_active_tab_pane_cp1_srt

0xcc45,	// (0x00058599) tabs_2_active_pane_srt_g1

0xcc4d,	// (0x000585a1) tabs_2_active_pane_srt_t1_ParamLimits

0xcc4d,	// (0x000585a1) tabs_2_active_pane_srt_t1

0xcc33,	// (0x00058587) bg_active_tab_pane_g1_cp1_srt

0xa279,	// (0x00055bcd) bg_active_tab_pane_g2_cp1_srt

0xcc3c,	// (0x00058590) bg_active_tab_pane_g3_cp1_srt

0xb796,	// (0x000570ea) tabs_3_active_pane_srt_ParamLimits

0xb796,	// (0x000570ea) tabs_3_active_pane_srt

0xb7a7,	// (0x000570fb) tabs_3_passive_pane_cp_srt_ParamLimits

0xb7a7,	// (0x000570fb) tabs_3_passive_pane_cp_srt

0xb7b8,	// (0x0005710c) tabs_3_passive_pane_srt_ParamLimits

0xb7b8,	// (0x0005710c) tabs_3_passive_pane_srt

0x2244,	// (0x0004db98) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2244,	// (0x0004db98) bg_passive_tab_pane_cp2_srt

0xa418,	// (0x00055d6c) bg_passive_tab_pane_g1_cp2_srt

0xa279,	// (0x00055bcd) bg_passive_tab_pane_g2_cp2_srt

0xa421,	// (0x00055d75) bg_passive_tab_pane_g3_cp2_srt

0x91e7,	// (0x00054b3b) bg_active_tab_pane_cp2_srt_ParamLimits

0x91e7,	// (0x00054b3b) bg_active_tab_pane_cp2_srt

0xcc15,	// (0x00058569) tabs_3_active_pane_srt_g1

0xcc1d,	// (0x00058571) tabs_3_active_pane_srt_t1_ParamLimits

0xcc1d,	// (0x00058571) tabs_3_active_pane_srt_t1

0xa418,	// (0x00055d6c) bg_active_tab_pane_g1_cp2_srt

0xa279,	// (0x00055bcd) bg_active_tab_pane_g2_cp2_srt

0xa421,	// (0x00055d75) bg_active_tab_pane_g3_cp2_srt

0x0d2b,	// (0x0004c67f) tabs_4_active_pane_srt_ParamLimits

0x0d2b,	// (0x0004c67f) tabs_4_active_pane_srt

0x0d3d,	// (0x0004c691) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0d3d,	// (0x0004c691) tabs_4_passive_pane_cp2_srt

0x0015,	// (0x0004b969) aid_size_cell_toolbar

0x3593,	// (0x0004eee7) main_idle_act_pane_ParamLimits

0x01cc,	// (0x0004bb20) popup_large_graphic_colour_window_ParamLimits

0xad57,	// (0x000566ab) popup_toolbar_window_ParamLimits

0xad57,	// (0x000566ab) popup_toolbar_window

0x3747,	// (0x0004f09b) list_single_graphic_2heading_pane_ParamLimits

0x3747,	// (0x0004f09b) list_single_graphic_2heading_pane

0x9f17,	// (0x0005586b) aid_size_cell_apps_grid_lsc_pane

0x9f29,	// (0x0005587d) aid_size_cell_apps_grid_prt_pane

0x9d5e,	// (0x000556b2) bg_wml_button_pane_cp1_ParamLimits

0x9d5e,	// (0x000556b2) bg_wml_button_pane_cp1

0xb388,	// (0x00056cdc) form_midp_field_text_pane_t1_ParamLimits

0x2244,	// (0x0004db98) input_focus_pane_cp050_ParamLimits

0x24b4,	// (0x0004de08) list_midp_form_text_pane_ParamLimits

0x2457,	// (0x0004ddab) input_focus_pane_cp051_ParamLimits

0x246b,	// (0x0004ddbf) list_midp_choice_pane_ParamLimits

0xb2ed,	// (0x00056c41) list_single_2graphic_pane_cp3_ParamLimits

0xb2ed,	// (0x00056c41) list_single_2graphic_pane_cp3

0xb301,	// (0x00056c55) list_single_midp_graphic_pane_ParamLimits

0xb301,	// (0x00056c55) list_single_midp_graphic_pane

0xe99f,	// (0x0005a2f3) list_single_graphic_2heading_pane_g1_ParamLimits

0xe99f,	// (0x0005a2f3) list_single_graphic_2heading_pane_g1

0xe9ab,	// (0x0005a2ff) list_single_graphic_2heading_pane_g4_ParamLimits

0xe9ab,	// (0x0005a2ff) list_single_graphic_2heading_pane_g4

0xe9b7,	// (0x0005a30b) list_single_graphic_2heading_pane_g5_ParamLimits

0xe9b7,	// (0x0005a30b) list_single_graphic_2heading_pane_g5

0x0002,

0xf781,	// (0x0005b0d5) list_single_graphic_2heading_pane_g_ParamLimits

0xf781,	// (0x0005b0d5) list_single_graphic_2heading_pane_g

0xe9c3,	// (0x0005a317) list_single_graphic_2heading_pane_t1_ParamLimits

0xe9c3,	// (0x0005a317) list_single_graphic_2heading_pane_t1

0xe9d7,	// (0x0005a32b) list_single_graphic_2heading_pane_t2_ParamLimits

0xe9d7,	// (0x0005a32b) list_single_graphic_2heading_pane_t2

0xe9f1,	// (0x0005a345) list_single_graphic_2heading_pane_t3_ParamLimits

0xe9f1,	// (0x0005a345) list_single_graphic_2heading_pane_t3

0x0002,

0xf788,	// (0x0005b0dc) list_single_graphic_2heading_pane_t_ParamLimits

0xf788,	// (0x0005b0dc) list_single_graphic_2heading_pane_t

0x20f6,	// (0x0004da4a) bg_popup_sub_pane_cp2

0x2120,	// (0x0004da74) grid_toobar_pane

0x0912,	// (0x0004c266) cell_toolbar_pane_ParamLimits

0x0912,	// (0x0004c266) cell_toolbar_pane

0x215c,	// (0x0004dab0) cell_toolbar_pane_g1_ParamLimits

0x215c,	// (0x0004dab0) cell_toolbar_pane_g1

0xb205,	// (0x00056b59) cell_toolbar_pane_g2_ParamLimits

0xb205,	// (0x00056b59) cell_toolbar_pane_g2

0x0001,

0xf78f,	// (0x0005b0e3) cell_toolbar_pane_g_ParamLimits

0xf78f,	// (0x0005b0e3) cell_toolbar_pane_g

0x2192,	// (0x0004dae6) grid_highlight_pane_cp2_ParamLimits

0x2192,	// (0x0004dae6) grid_highlight_pane_cp2

0x21ac,	// (0x0004db00) toolbar_button_pane

0x21b8,	// (0x0004db0c) toolbar_button_pane_g1

0x21c0,	// (0x0004db14) toolbar_button_pane_g2

0x21c8,	// (0x0004db1c) toolbar_button_pane_g3

0x21d0,	// (0x0004db24) toolbar_button_pane_g4

0x21d8,	// (0x0004db2c) toolbar_button_pane_g5

0x21e0,	// (0x0004db34) toolbar_button_pane_g6

0x21e8,	// (0x0004db3c) toolbar_button_pane_g7

0x21f0,	// (0x0004db44) toolbar_button_pane_g8

0x21f8,	// (0x0004db4c) toolbar_button_pane_g9

0x0009,

0xf794,	// (0x0005b0e8) toolbar_button_pane_g

0x0956,	// (0x0004c2aa) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0956,	// (0x0004c2aa) list_single_2graphic_pane_g1_cp3

0xb219,	// (0x00056b6d) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb219,	// (0x00056b6d) list_single_2graphic_pane_g2_cp3

0xc3b5,	// (0x00057d09) list_single_2graphic_pane_g3_cp3

0x0973,	// (0x0004c2c7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0973,	// (0x0004c2c7) list_single_2graphic_pane_g4_cp3

0xb22a,	// (0x00056b7e) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb22a,	// (0x00056b7e) list_single_2graphic_pane_t1_cp3

0xc3a9,	// (0x00057cfd) list_single_midp_graphic_pane_g2_ParamLimits

0xc3a9,	// (0x00057cfd) list_single_midp_graphic_pane_g2

0xe98f,	// (0x0005a2e3) aid_zoom_text_primary

0x001d,	// (0x0004b971) aid_zoom_text_secondary

0xa478,	// (0x00055dcc) status_small_pane_g7_ParamLimits

0xa478,	// (0x00055dcc) status_small_pane_g7

0xa49b,	// (0x00055def) status_small_pane_t1_ParamLimits

0x90f3,	// (0x00054a47) title_pane_g2

0x0003,

0xf529,	// (0x0005ae7d) title_pane_g

0x97ba,	// (0x0005510e) aid_size_cell_colour_1_pane_ParamLimits

0x97ba,	// (0x0005510e) aid_size_cell_colour_1_pane

0x97ce,	// (0x00055122) aid_size_cell_colour_2_pane_ParamLimits

0x97ce,	// (0x00055122) aid_size_cell_colour_2_pane

0x97e2,	// (0x00055136) aid_size_cell_colour_3_pane_ParamLimits

0x97e2,	// (0x00055136) aid_size_cell_colour_3_pane

0x97f6,	// (0x0005514a) aid_size_cell_colour_4_pane_ParamLimits

0x97f6,	// (0x0005514a) aid_size_cell_colour_4_pane

0xf12e,	// (0x0005aa82) title_pane_stacon_g1_ParamLimits

0xf12e,	// (0x0005aa82) title_pane_stacon_g1

0x2884,	// (0x0004e1d8) popup_note_wait_window_g3_ParamLimits

0x2884,	// (0x0004e1d8) popup_note_wait_window_g3

0x28fa,	// (0x0004e24e) popup_note_wait_window_t5_ParamLimits

0x28fa,	// (0x0004e24e) popup_note_wait_window_t5

0x8f96,	// (0x000548ea) main_feb_china_hwr_fs_writing_pane

0xa70b,	// (0x0005605f) popup_feb_china_hwr_fs_window_ParamLimits

0xa70b,	// (0x0005605f) popup_feb_china_hwr_fs_window

0xb246,	// (0x00056b9a) aid_size_cell_hwr_fs_ParamLimits

0xb246,	// (0x00056b9a) aid_size_cell_hwr_fs

0x2244,	// (0x0004db98) bg_popup_sub_pane_cp3_ParamLimits

0x2244,	// (0x0004db98) bg_popup_sub_pane_cp3

0xb25b,	// (0x00056baf) grid_hwr_fs_pane_ParamLimits

0xb25b,	// (0x00056baf) grid_hwr_fs_pane

0x09de,	// (0x0004c332) linegrid_hwr_fs_pane_ParamLimits

0x09de,	// (0x0004c332) linegrid_hwr_fs_pane

0xb273,	// (0x00056bc7) cell_hwr_fs_pane_ParamLimits

0xb273,	// (0x00056bc7) cell_hwr_fs_pane

0x2250,	// (0x0004dba4) linegrid_hwr_fs_pane_g1_ParamLimits

0x2250,	// (0x0004dba4) linegrid_hwr_fs_pane_g1

0xb299,	// (0x00056bed) linegrid_hwr_fs_pane_g2_ParamLimits

0xb299,	// (0x00056bed) linegrid_hwr_fs_pane_g2

0x226e,	// (0x0004dbc2) linegrid_hwr_fs_pane_g3_ParamLimits

0x226e,	// (0x0004dbc2) linegrid_hwr_fs_pane_g3

0xb2ab,	// (0x00056bff) linegrid_hwr_fs_pane_g4_ParamLimits

0xb2ab,	// (0x00056bff) linegrid_hwr_fs_pane_g4

0x0a2a,	// (0x0004c37e) linegrid_hwr_fs_pane_g5_ParamLimits

0x0a2a,	// (0x0004c37e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ba,	// (0x0005b10e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ba,	// (0x0005b10e) linegrid_hwr_fs_pane_g

0x227a,	// (0x0004dbce) cell_hwr_fs_pane_g1_ParamLimits

0x227a,	// (0x0004dbce) cell_hwr_fs_pane_g1

0x2030,	// (0x0004d984) cell_hwr_fs_pane_g2_ParamLimits

0x2030,	// (0x0004d984) cell_hwr_fs_pane_g2

0xb2c5,	// (0x00056c19) cell_hwr_fs_pane_g3_ParamLimits

0xb2c5,	// (0x00056c19) cell_hwr_fs_pane_g3

0xb2d2,	// (0x00056c26) cell_hwr_fs_pane_g4_ParamLimits

0xb2d2,	// (0x00056c26) cell_hwr_fs_pane_g4

0x0003,

0xf7c5,	// (0x0005b119) cell_hwr_fs_pane_g_ParamLimits

0xf7c5,	// (0x0005b119) cell_hwr_fs_pane_g

0xb2df,	// (0x00056c33) cell_hwr_fs_pane_t1

0x8f96,	// (0x000548ea) grid_highlight_pane_cp6

0x8f96,	// (0x000548ea) main_idle_act2_pane

0x9cdf,	// (0x00055633) aid_inside_area_popup_secondary

0xc74f,	// (0x000580a3) aid_inside_area_window_primary_ParamLimits

0xc74f,	// (0x000580a3) aid_inside_area_window_primary

0xcc6b,	// (0x000585bf) ai2_news_ticker_pane

0x3a58,	// (0x0004f3ac) aid_size_cell_ai1_link_ParamLimits

0x3a58,	// (0x0004f3ac) aid_size_cell_ai1_link

0xcc73,	// (0x000585c7) popup_ai2_data_window_ParamLimits

0xcc73,	// (0x000585c7) popup_ai2_data_window

0x3a88,	// (0x0004f3dc) popup_ai2_link_window_ParamLimits

0x3a88,	// (0x0004f3dc) popup_ai2_link_window

0x2244,	// (0x0004db98) bg_popup_sub_pane_cp4_ParamLimits

0x2244,	// (0x0004db98) bg_popup_sub_pane_cp4

0x3a9c,	// (0x0004f3f0) grid_ai2_link_pane_ParamLimits

0x3a9c,	// (0x0004f3f0) grid_ai2_link_pane

0x3ab3,	// (0x0004f407) popup_ai2_link_window_g1_ParamLimits

0x3ab3,	// (0x0004f407) popup_ai2_link_window_g1

0x3abf,	// (0x0004f413) popup_ai2_link_window_g2_ParamLimits

0x3abf,	// (0x0004f413) popup_ai2_link_window_g2

0x0001,

0xf998,	// (0x0005b2ec) popup_ai2_link_window_g_ParamLimits

0xf998,	// (0x0005b2ec) popup_ai2_link_window_g

0x3ace,	// (0x0004f422) ai2_mp_button_pane

0x3ad6,	// (0x0004f42a) ai2_mp_volume_pane

0x2457,	// (0x0004ddab) bg_popup_sub_pane_cp5_ParamLimits

0x2457,	// (0x0004ddab) bg_popup_sub_pane_cp5

0x3ade,	// (0x0004f432) heading_ai2_gene_pane_ParamLimits

0x3ade,	// (0x0004f432) heading_ai2_gene_pane

0x3aea,	// (0x0004f43e) list_ai2_gene_pane_ParamLimits

0x3aea,	// (0x0004f43e) list_ai2_gene_pane

0x3b32,	// (0x0004f486) cell_ai2_link_pane_ParamLimits

0x3b32,	// (0x0004f486) cell_ai2_link_pane

0x3b48,	// (0x0004f49c) cell_ai2_link_pane_g1

0x8f96,	// (0x000548ea) grid_highlight_pane_cp7

0x0de3,	// (0x0004c737) ai2_mp_volume_pane_g1

0x3c18,	// (0x0004f56c) ai2_mp_volume_pane_g2

0x3b8d,	// (0x0004f4e1) list_ai2_gene_pane_t1

0x3c20,	// (0x0004f574) ai2_mp_volume_pane_g3

0x0002,

0xf9b1,	// (0x0005b305) ai2_mp_volume_pane_g

0xb7e9,	// (0x0005713d) volume_small_pane_cp3

0x3c28,	// (0x0004f57c) aid_size_cell_ai2_button

0x3c30,	// (0x0004f584) grid_ai2_button_pane

0x3c39,	// (0x0004f58d) cell_ai2_button_pane_ParamLimits

0x3c39,	// (0x0004f58d) cell_ai2_button_pane

0x8ea6,	// (0x000547fa) cell_ai2_button_pane_g1

0x8f96,	// (0x000548ea) grid_highlight_pane_cp8

0x3bd8,	// (0x0004f52c) ai2_gene_pane_t1_ParamLimits

0x3bd8,	// (0x0004f52c) ai2_gene_pane_t1

0xa66d,	// (0x00055fc1) aid_height_parent_landscape

0xc99d,	// (0x000582f1) aid_height_set_list

0x3593,	// (0x0004eee7) aid_size_parent

0x3873,	// (0x0004f1c7) aid_size_cell_graphic_pane_ParamLimits

0x3afa,	// (0x0004f44e) popup_ai2_data_window_g1_ParamLimits

0x3afa,	// (0x0004f44e) popup_ai2_data_window_g1

0x3b06,	// (0x0004f45a) ai2_news_ticker_pane_g1

0x3b0e,	// (0x0004f462) ai2_news_ticker_pane_g2

0x0001,

0xf99d,	// (0x0005b2f1) ai2_news_ticker_pane_g

0x3b16,	// (0x0004f46a) ai2_news_ticker_pane_t1

0x3b24,	// (0x0004f478) ai2_news_ticker_pane_t2

0x0001,

0xf9a2,	// (0x0005b2f6) ai2_news_ticker_pane_t

0x3b51,	// (0x0004f4a5) heading_ai2_gene_pane_g1

0x3b59,	// (0x0004f4ad) heading_ai2_gene_pane_t1_ParamLimits

0x3b59,	// (0x0004f4ad) heading_ai2_gene_pane_t1

0x3b6e,	// (0x0004f4c2) list_highlight_pane_cp6

0x3b76,	// (0x0004f4ca) ai2_gene_pane_ParamLimits

0x3b76,	// (0x0004f4ca) ai2_gene_pane

0x3b9b,	// (0x0004f4ef) list_ai2_gene_pane_t2

0x0001,

0xf9a7,	// (0x0005b2fb) list_ai2_gene_pane_t

0x3ba9,	// (0x0004f4fd) list_highlight_pane_cp8_ParamLimits

0x3ba9,	// (0x0004f4fd) list_highlight_pane_cp8

0x3bba,	// (0x0004f50e) ai2_gene_pane_g1_ParamLimits

0x3bba,	// (0x0004f50e) ai2_gene_pane_g1

0x3bcc,	// (0x0004f520) ai2_gene_pane_g2_ParamLimits

0x3bcc,	// (0x0004f520) ai2_gene_pane_g2

0x0001,

0xf9ac,	// (0x0005b300) ai2_gene_pane_g_ParamLimits

0xf9ac,	// (0x0005b300) ai2_gene_pane_g

0x9ac8,	// (0x0005541c) scroll_pane_cp12

0xa62a,	// (0x00055f7e) control_pane_t3_ParamLimits

0xa62a,	// (0x00055f7e) control_pane_t3

0xa48c,	// (0x00055de0) status_small_pane_g8_ParamLimits

0xa48c,	// (0x00055de0) status_small_pane_g8

0xa7ce,	// (0x00056122) popup_find_window_ParamLimits

0xaa5b,	// (0x000563af) popup_note_image_window_ParamLimits

0xe8ac,	// (0x0005a200) list_double2_graphic_pane_vc_g1_ParamLimits

0xe8ac,	// (0x0005a200) list_double2_graphic_pane_vc_g1

0xc027,	// (0x0005797b) list_double2_graphic_pane_vc_g2_ParamLimits

0xc027,	// (0x0005797b) list_double2_graphic_pane_vc_g2

0x0942,	// (0x0004c296) list_double2_graphic_pane_vc_g3_ParamLimits

0x0942,	// (0x0004c296) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0005aef0) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0005aef0) list_double2_graphic_pane_vc_g

0xe8b8,	// (0x0005a20c) list_double2_graphic_pane_vc_t1_ParamLimits

0xe8b8,	// (0x0005a20c) list_double2_graphic_pane_vc_t1

0xc027,	// (0x0005797b) list_single_heading_pane_vc_g1_ParamLimits

0xc027,	// (0x0005797b) list_single_heading_pane_vc_g1

0x0942,	// (0x0004c296) list_single_heading_pane_vc_g2_ParamLimits

0x0942,	// (0x0004c296) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005af01) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005af01) list_single_heading_pane_vc_g

0xea09,	// (0x0005a35d) list_single_heading_pane_vc_t1_ParamLimits

0xea09,	// (0x0005a35d) list_single_heading_pane_vc_t1

0xea1f,	// (0x0005a373) list_single_heading_pane_vc_t2_ParamLimits

0xea1f,	// (0x0005a373) list_single_heading_pane_vc_t2

0x0001,

0xf7a9,	// (0x0005b0fd) list_single_heading_pane_vc_t_ParamLimits

0xf7a9,	// (0x0005b0fd) list_single_heading_pane_vc_t

0x2200,	// (0x0004db54) list_setting_number_pane_vc_g1_ParamLimits

0x2200,	// (0x0004db54) list_setting_number_pane_vc_g1

0x220c,	// (0x0004db60) list_setting_number_pane_vc_g2_ParamLimits

0x220c,	// (0x0004db60) list_setting_number_pane_vc_g2

0x0001,

0xf7ae,	// (0x0005b102) list_setting_number_pane_vc_g_ParamLimits

0xf7ae,	// (0x0005b102) list_setting_number_pane_vc_g

0xea31,	// (0x0005a385) list_setting_number_pane_vc_t1_ParamLimits

0xea31,	// (0x0005a385) list_setting_number_pane_vc_t1

0xea45,	// (0x0005a399) list_setting_number_pane_vc_t2_ParamLimits

0xea45,	// (0x0005a399) list_setting_number_pane_vc_t2

0xea61,	// (0x0005a3b5) list_setting_number_pane_vc_t3_ParamLimits

0xea61,	// (0x0005a3b5) list_setting_number_pane_vc_t3

0x0002,

0xf7b3,	// (0x0005b107) list_setting_number_pane_vc_t_ParamLimits

0xf7b3,	// (0x0005b107) list_setting_number_pane_vc_t

0xea8b,	// (0x0005a3df) set_value_pane_vc_ParamLimits

0xea8b,	// (0x0005a3df) set_value_pane_vc

0x3747,	// (0x0004f09b) list_double2_graphic_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_double2_graphic_pane_vc

0x0c9c,	// (0x0004c5f0) list_double2_large_graphic_pane_vc_ParamLimits

0x0c9c,	// (0x0004c5f0) list_double2_large_graphic_pane_vc

0x3747,	// (0x0004f09b) list_double2_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_double2_pane_vc

0x3747,	// (0x0004f09b) list_double_graphic_heading_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_double_graphic_heading_pane_vc

0x3747,	// (0x0004f09b) list_double_graphic_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_double_graphic_pane_vc

0x3747,	// (0x0004f09b) list_double_heading_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_double_heading_pane_vc

0x0cae,	// (0x0004c602) list_double_large_graphic_pane_vc_ParamLimits

0x0cae,	// (0x0004c602) list_double_large_graphic_pane_vc

0x3747,	// (0x0004f09b) list_double_number_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_double_number_pane_vc

0x3747,	// (0x0004f09b) list_double_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_double_pane_vc

0x3747,	// (0x0004f09b) list_double_time_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_double_time_pane_vc

0x3747,	// (0x0004f09b) list_setting_number_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_setting_number_pane_vc

0x3747,	// (0x0004f09b) list_setting_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_setting_pane_vc

0x3747,	// (0x0004f09b) list_single_graphic_heading_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_single_graphic_heading_pane_vc

0x3747,	// (0x0004f09b) list_single_heading_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_single_heading_pane_vc

0x3747,	// (0x0004f09b) list_single_number_heading_pane_vc_ParamLimits

0x3747,	// (0x0004f09b) list_single_number_heading_pane_vc

0xeaaa,	// (0x0005a3fe) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeaaa,	// (0x0005a3fe) list_double_graphic_heading_pane_vc_g1

0xc027,	// (0x0005797b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc027,	// (0x0005797b) list_double_graphic_heading_pane_vc_g2

0x0942,	// (0x0004c296) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0942,	// (0x0004c296) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b8,	// (0x0005b30c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b8,	// (0x0005b30c) list_double_graphic_heading_pane_vc_g

0xeab6,	// (0x0005a40a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeab6,	// (0x0005a40a) list_double_graphic_heading_pane_vc_t1

0xeaca,	// (0x0005a41e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeaca,	// (0x0005a41e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bf,	// (0x0005b313) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bf,	// (0x0005b313) list_double_graphic_heading_pane_vc_t

0x2200,	// (0x0004db54) list_setting_pane_vc_g1_ParamLimits

0x2200,	// (0x0004db54) list_setting_pane_vc_g1

0x220c,	// (0x0004db60) list_setting_pane_vc_g2_ParamLimits

0x220c,	// (0x0004db60) list_setting_pane_vc_g2

0x0001,

0xf7ae,	// (0x0005b102) list_setting_pane_vc_g_ParamLimits

0xf7ae,	// (0x0005b102) list_setting_pane_vc_g

0xeae2,	// (0x0005a436) list_setting_pane_vc_t1_ParamLimits

0xeae2,	// (0x0005a436) list_setting_pane_vc_t1

0xeafe,	// (0x0005a452) list_setting_pane_vc_t2_ParamLimits

0xeafe,	// (0x0005a452) list_setting_pane_vc_t2

0x0001,

0xfa02,	// (0x0005b356) list_setting_pane_vc_t_ParamLimits

0xfa02,	// (0x0005b356) list_setting_pane_vc_t

0xea8b,	// (0x0005a3df) set_value_pane_cp_vc_ParamLimits

0xea8b,	// (0x0005a3df) set_value_pane_cp_vc

0xc027,	// (0x0005797b) list_single_number_heading_pane_vc_g1_ParamLimits

0xc027,	// (0x0005797b) list_single_number_heading_pane_vc_g1

0x0942,	// (0x0004c296) list_single_number_heading_pane_vc_g2_ParamLimits

0x0942,	// (0x0004c296) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005af01) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005af01) list_single_number_heading_pane_vc_g

0xeb18,	// (0x0005a46c) list_single_number_heading_pane_vc_t1_ParamLimits

0xeb18,	// (0x0005a46c) list_single_number_heading_pane_vc_t1

0xeb2e,	// (0x0005a482) list_single_number_heading_pane_vc_t2_ParamLimits

0xeb2e,	// (0x0005a482) list_single_number_heading_pane_vc_t2

0xeb40,	// (0x0005a494) list_single_number_heading_pane_vc_t3_ParamLimits

0xeb40,	// (0x0005a494) list_single_number_heading_pane_vc_t3

0x0002,

0xfa07,	// (0x0005b35b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa07,	// (0x0005b35b) list_single_number_heading_pane_vc_t

0xeb52,	// (0x0005a4a6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeb52,	// (0x0005a4a6) list_single_graphic_heading_pane_vc_g1

0xc027,	// (0x0005797b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc027,	// (0x0005797b) list_single_graphic_heading_pane_vc_g4

0x0942,	// (0x0004c296) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0942,	// (0x0004c296) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0e,	// (0x0005b362) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0e,	// (0x0005b362) list_single_graphic_heading_pane_vc_g

0xea09,	// (0x0005a35d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xea09,	// (0x0005a35d) list_single_graphic_heading_pane_vc_t1

0xeb5e,	// (0x0005a4b2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeb5e,	// (0x0005a4b2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa15,	// (0x0005b369) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa15,	// (0x0005b369) list_single_graphic_heading_pane_vc_t

0xc027,	// (0x0005797b) list_double2_pane_vc_g1_ParamLimits

0xc027,	// (0x0005797b) list_double2_pane_vc_g1

0x0942,	// (0x0004c296) list_double2_pane_vc_g2_ParamLimits

0x0942,	// (0x0004c296) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005af01) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005af01) list_double2_pane_vc_g

0xeb70,	// (0x0005a4c4) list_double2_pane_vc_t1_ParamLimits

0xeb70,	// (0x0005a4c4) list_double2_pane_vc_t1

0x0e45,	// (0x0004c799) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0e45,	// (0x0004c799) list_double2_large_graphic_pane_vc_g1

0xf0ba,	// (0x0005aa0e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf0ba,	// (0x0005aa0e) list_double2_large_graphic_pane_vc_g2

0xf0c6,	// (0x0005aa1a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf0c6,	// (0x0005aa1a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0005af19) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0005af19) list_double2_large_graphic_pane_vc_g

0xe8ce,	// (0x0005a222) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe8ce,	// (0x0005a222) list_double2_large_graphic_pane_vc_t1

0x0e51,	// (0x0004c7a5) list_double_time_pane_vc_g1_ParamLimits

0x0e51,	// (0x0004c7a5) list_double_time_pane_vc_g1

0x0e5d,	// (0x0004c7b1) list_double_time_pane_vc_g2_ParamLimits

0x0e5d,	// (0x0004c7b1) list_double_time_pane_vc_g2

0x0001,

0xfa1a,	// (0x0005b36e) list_double_time_pane_vc_g_ParamLimits

0xfa1a,	// (0x0005b36e) list_double_time_pane_vc_g

0xeb88,	// (0x0005a4dc) list_double_time_pane_vc_t1_ParamLimits

0xeb88,	// (0x0005a4dc) list_double_time_pane_vc_t1

0xebac,	// (0x0005a500) list_double_time_pane_vc_t2_ParamLimits

0xebac,	// (0x0005a500) list_double_time_pane_vc_t2

0xebfb,	// (0x0005a54f) list_double_time_pane_vc_t3_ParamLimits

0xebfb,	// (0x0005a54f) list_double_time_pane_vc_t3

0xec0d,	// (0x0005a561) list_double_time_pane_vc_t4_ParamLimits

0xec0d,	// (0x0005a561) list_double_time_pane_vc_t4

0x0003,

0xfa1f,	// (0x0005b373) list_double_time_pane_vc_t_ParamLimits

0xfa1f,	// (0x0005b373) list_double_time_pane_vc_t

0xc027,	// (0x0005797b) list_double_pane_vc_g1_ParamLimits

0xc027,	// (0x0005797b) list_double_pane_vc_g1

0x0942,	// (0x0004c296) list_double_pane_vc_g2_ParamLimits

0x0942,	// (0x0004c296) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005af01) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005af01) list_double_pane_vc_g

0xec21,	// (0x0005a575) list_double_pane_vc_t1_ParamLimits

0xec21,	// (0x0005a575) list_double_pane_vc_t1

0xec35,	// (0x0005a589) list_double_pane_vc_t2_ParamLimits

0xec35,	// (0x0005a589) list_double_pane_vc_t2

0x0001,

0xfa28,	// (0x0005b37c) list_double_pane_vc_t_ParamLimits

0xfa28,	// (0x0005b37c) list_double_pane_vc_t

0xc027,	// (0x0005797b) list_double_number_pane_vc_g1_ParamLimits

0xc027,	// (0x0005797b) list_double_number_pane_vc_g1

0x0942,	// (0x0004c296) list_double_number_pane_vc_g2_ParamLimits

0x0942,	// (0x0004c296) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005af01) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005af01) list_double_number_pane_vc_g

0xec4d,	// (0x0005a5a1) list_double_number_pane_vc_t1_ParamLimits

0xec4d,	// (0x0005a5a1) list_double_number_pane_vc_t1

0xec21,	// (0x0005a575) list_double_number_pane_vc_t2_ParamLimits

0xec21,	// (0x0005a575) list_double_number_pane_vc_t2

0xec5f,	// (0x0005a5b3) list_double_number_pane_vc_t3_ParamLimits

0xec5f,	// (0x0005a5b3) list_double_number_pane_vc_t3

0x0002,

0xfa2d,	// (0x0005b381) list_double_number_pane_vc_t_ParamLimits

0xfa2d,	// (0x0005b381) list_double_number_pane_vc_t

0x0e69,	// (0x0004c7bd) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0e69,	// (0x0004c7bd) list_double_large_graphic_pane_vc_g1

0x0e85,	// (0x0004c7d9) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0e85,	// (0x0004c7d9) list_double_large_graphic_pane_vc_g2

0x0e99,	// (0x0004c7ed) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0e99,	// (0x0004c7ed) list_double_large_graphic_pane_vc_g3

0xec77,	// (0x0005a5cb) list_double_large_graphic_pane_vc_g4_ParamLimits

0xec77,	// (0x0005a5cb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa34,	// (0x0005b388) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0005b388) list_double_large_graphic_pane_vc_g

0xec86,	// (0x0005a5da) list_double_large_graphic_pane_vc_t1_ParamLimits

0xec86,	// (0x0005a5da) list_double_large_graphic_pane_vc_t1

0xeca2,	// (0x0005a5f6) list_double_large_graphic_pane_vc_t2_ParamLimits

0xeca2,	// (0x0005a5f6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0005b391) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3d,	// (0x0005b391) list_double_large_graphic_pane_vc_t

0xc027,	// (0x0005797b) list_double_heading_pane_vc_g1_ParamLimits

0xc027,	// (0x0005797b) list_double_heading_pane_vc_g1

0x0942,	// (0x0004c296) list_double_heading_pane_vc_g2_ParamLimits

0x0942,	// (0x0004c296) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005af01) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005af01) list_double_heading_pane_vc_g

0xecc4,	// (0x0005a618) list_double_heading_pane_vc_t1_ParamLimits

0xecc4,	// (0x0005a618) list_double_heading_pane_vc_t1

0xecd8,	// (0x0005a62c) list_double_heading_pane_vc_t2_ParamLimits

0xecd8,	// (0x0005a62c) list_double_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0005b396) list_double_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0005b396) list_double_heading_pane_vc_t

0xecf0,	// (0x0005a644) list_double_graphic_pane_vc_g1_ParamLimits

0xecf0,	// (0x0005a644) list_double_graphic_pane_vc_g1

0x0ea8,	// (0x0004c7fc) list_double_graphic_pane_vc_g2_ParamLimits

0x0ea8,	// (0x0004c7fc) list_double_graphic_pane_vc_g2

0xc027,	// (0x0005797b) list_double_graphic_pane_vc_g3_ParamLimits

0xc027,	// (0x0005797b) list_double_graphic_pane_vc_g3

0x0003,

0xfa47,	// (0x0005b39b) list_double_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0005b39b) list_double_graphic_pane_vc_g

0xed03,	// (0x0005a657) list_double_graphic_pane_vc_t1_ParamLimits

0xed03,	// (0x0005a657) list_double_graphic_pane_vc_t1

0xed22,	// (0x0005a676) list_double_graphic_pane_vc_t2_ParamLimits

0xed22,	// (0x0005a676) list_double_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0005b3a4) list_double_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0005b3a4) list_double_graphic_pane_vc_t

0xe71c,	// (0x0005a070) aid_size_cell_fastswap

0x8eb0,	// (0x00054804) aid_size_cell_touch_ParamLimits

0x8eb0,	// (0x00054804) aid_size_cell_touch

0xe873,	// (0x0005a1c7) popup_fast_swap_wide_window_ParamLimits

0xe873,	// (0x0005a1c7) popup_fast_swap_wide_window

0x908a,	// (0x000549de) touch_pane_ParamLimits

0x908a,	// (0x000549de) touch_pane

0x9b66,	// (0x000554ba) button_value_adjust_pane_cp2

0xe8fe,	// (0x0005a252) button_value_adjust_pane_cp4

0xe906,	// (0x0005a25a) form_field_data_pane_cp2

0x8a61,	// (0x000543b5) form_field_data_wide_pane_cp2

0xa024,	// (0x00055978) bg_scroll_pane_ParamLimits

0xa043,	// (0x00055997) scroll_handle_pane_ParamLimits

0xf287,	// (0x0005abdb) scroll_sc2_down_pane_ParamLimits

0xf287,	// (0x0005abdb) scroll_sc2_down_pane

0xa069,	// (0x000559bd) scroll_sc2_up_pane_ParamLimits

0xa069,	// (0x000559bd) scroll_sc2_up_pane

0xcdbc,	// (0x00058710) grid_wheel_folder_pane_g1_ParamLimits

0xcdbc,	// (0x00058710) grid_wheel_folder_pane_g1

0xf409,	// (0x0005ad5d) clock_nsta_pane_cp2_ParamLimits

0xf409,	// (0x0005ad5d) clock_nsta_pane_cp2

0xa352,	// (0x00055ca6) listscroll_midp_pane_ParamLimits

0xa35e,	// (0x00055cb2) midp_canvas_pane

0xc698,	// (0x00057fec) nsta_clock_indic_pane

0xc6c0,	// (0x00058014) listscroll_form_pane_vc

0xc6c8,	// (0x0005801c) listscroll_set_pane_vc_ParamLimits

0xc6c8,	// (0x0005801c) listscroll_set_pane_vc

0xaf10,	// (0x00056864) clock_nsta_pane

0xaf3a,	// (0x0005688e) indicator_nsta_pane

0x20f6,	// (0x0004da4a) bg_popup_sub_pane_cp2_ParamLimits

0x210a,	// (0x0004da5e) find_pane_cp2_ParamLimits

0x210a,	// (0x0004da5e) find_pane_cp2

0x2120,	// (0x0004da74) grid_toobar_pane_ParamLimits

0x2218,	// (0x0004db6c) list_form_gen_pane_vc_ParamLimits

0x2218,	// (0x0004db6c) list_form_gen_pane_vc

0x222e,	// (0x0004db82) scroll_pane_cp8_vc_ParamLimits

0x222e,	// (0x0004db82) scroll_pane_cp8_vc

0x22aa,	// (0x0004dbfe) data_form_wide_pane_vc_ParamLimits

0x22aa,	// (0x0004dbfe) data_form_wide_pane_vc

0x22b6,	// (0x0004dc0a) form_field_data_wide_pane_vc_g1

0x22be,	// (0x0004dc12) form_field_data_wide_pane_vc_t1_ParamLimits

0x22be,	// (0x0004dc12) form_field_data_wide_pane_vc_t1

0x9b7a,	// (0x000554ce) input_focus_pane_cp6_vc_ParamLimits

0x9b7a,	// (0x000554ce) input_focus_pane_cp6_vc

0x260b,	// (0x0004df5f) list_midp_pane_ParamLimits

0x38dd,	// (0x0004f231) scroll_pane_cp16_ParamLimits

0x38dd,	// (0x0004f231) scroll_pane_cp16

0x2661,	// (0x0004dfb5) button_value_adjust_pane_ParamLimits

0x2661,	// (0x0004dfb5) button_value_adjust_pane

0xc9ae,	// (0x00058302) button_value_adjust_pane_cp6_ParamLimits

0xc9ae,	// (0x00058302) button_value_adjust_pane_cp6

0xcac8,	// (0x0005841c) settings_code_pane_cp_ParamLimits

0xcac8,	// (0x0005841c) settings_code_pane_cp

0x8ea6,	// (0x000547fa) cell_touch_pane_g1

0x8ea6,	// (0x000547fa) cell_touch_pane_g2

0x0001,

0xf6d4,	// (0x0005b028) cell_touch_pane_g

0xcc89,	// (0x000585dd) cell_touch_pane_cp_ParamLimits

0xcc89,	// (0x000585dd) cell_touch_pane_cp

0xcca5,	// (0x000585f9) cell_touch_pane_ParamLimits

0xcca5,	// (0x000585f9) cell_touch_pane

0x8ea6,	// (0x000547fa) scroll_sc2_down_pane_g1

0x8ea6,	// (0x000547fa) scroll_sc2_up_pane_g1

0x8f96,	// (0x000548ea) bg_set_opt_pane_cp4_vc

0x3c6d,	// (0x0004f5c1) list_set_graphic_pane_vc_g1_ParamLimits

0x3c6d,	// (0x0004f5c1) list_set_graphic_pane_vc_g1

0x3c79,	// (0x0004f5cd) list_set_graphic_pane_vc_g2_ParamLimits

0x3c79,	// (0x0004f5cd) list_set_graphic_pane_vc_g2

0x0001,

0xf9c4,	// (0x0005b318) list_set_graphic_pane_vc_g_ParamLimits

0xf9c4,	// (0x0005b318) list_set_graphic_pane_vc_g

0x3c85,	// (0x0004f5d9) text_primary_small_cp13_vc_ParamLimits

0x3c85,	// (0x0004f5d9) text_primary_small_cp13_vc

0x3c9d,	// (0x0004f5f1) list_set_graphic_pane_vc_ParamLimits

0x3c9d,	// (0x0004f5f1) list_set_graphic_pane_vc

0x8f96,	// (0x000548ea) input_focus_pane_cp2_vc

0x8ea6,	// (0x000547fa) setting_code_pane_vc_g1

0x92d1,	// (0x00054c25) setting_code_pane_vc_t1

0x3cb0,	// (0x0004f604) set_text_pane_vc_t1_ParamLimits

0x3cb0,	// (0x0004f604) set_text_pane_vc_t1

0x8f96,	// (0x000548ea) input_focus_pane_cp1_vc

0x3ccd,	// (0x0004f621) list_set_text_pane_vc

0x8ea6,	// (0x000547fa) setting_text_pane_vc_g1

0x8f96,	// (0x000548ea) bg_set_opt_pane_cp2_vc

0x92a0,	// (0x00054bf4) setting_slider_graphic_pane_vc_g1

0x3cd7,	// (0x0004f62b) setting_slider_graphic_pane_vc_t1

0x3ce7,	// (0x0004f63b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c9,	// (0x0005b31d) setting_slider_graphic_pane_vc_t

0x3cf7,	// (0x0004f64b) slider_set_pane_cp_vc

0x3cff,	// (0x0004f653) slider_set_pane_vc_g1

0x3d08,	// (0x0004f65c) slider_set_pane_vc_g2

0x0006,

0xf9ce,	// (0x0005b322) slider_set_pane_vc_g

0x9bd2,	// (0x00055526) set_opt_bg_pane_g1_copy1

0x9bda,	// (0x0005552e) set_opt_bg_pane_g2_copy1

0x3d34,	// (0x0004f688) set_opt_bg_pane_g3_copy1

0x9bea,	// (0x0005553e) set_opt_bg_pane_g4_copy1

0x9bf2,	// (0x00055546) set_opt_bg_pane_g5_copy1

0x9bfa,	// (0x0005554e) set_opt_bg_pane_g6_copy1

0x3d3c,	// (0x0004f690) set_opt_bg_pane_g7_copy1

0x3d46,	// (0x0004f69a) set_opt_bg_pane_g8_copy1

0x3d4e,	// (0x0004f6a2) set_opt_bg_pane_g9_copy1

0x8f96,	// (0x000548ea) bg_set_opt_pane_cp_vc

0x3d56,	// (0x0004f6aa) setting_slider_pane_vc_t1

0x3d65,	// (0x0004f6b9) setting_slider_pane_vc_t2

0x3d75,	// (0x0004f6c9) setting_slider_pane_vc_t3

0x0002,

0xf9dd,	// (0x0005b331) setting_slider_pane_vc_t

0x3d85,	// (0x0004f6d9) slider_set_pane_vc

0x0a4e,	// (0x0004c3a2) volume_set_pane_vc_g1

0x0df4,	// (0x0004c748) volume_set_pane_vc_g2

0x0dfd,	// (0x0004c751) volume_set_pane_vc_g3

0x0e06,	// (0x0004c75a) volume_set_pane_vc_g4

0x0e0f,	// (0x0004c763) volume_set_pane_vc_g5

0x0e18,	// (0x0004c76c) volume_set_pane_vc_g6

0x0e21,	// (0x0004c775) volume_set_pane_vc_g7

0x0e2a,	// (0x0004c77e) volume_set_pane_vc_g8

0x0e33,	// (0x0004c787) volume_set_pane_vc_g9

0x0e3c,	// (0x0004c790) volume_set_pane_vc_g10

0x0009,

0xf9e4,	// (0x0005b338) volume_set_pane_vc_g

0x3d8d,	// (0x0004f6e1) volume_set_pane_vc

0x3d97,	// (0x0004f6eb) button_value_adjust_pane_cp1_vc

0x3da1,	// (0x0004f6f5) list_highlight_pane_cp2_vc

0x3daa,	// (0x0004f6fe) list_set_pane_vc_ParamLimits

0x3daa,	// (0x0004f6fe) list_set_pane_vc

0x3e08,	// (0x0004f75c) main_pane_set_vc_t1_ParamLimits

0x3e08,	// (0x0004f75c) main_pane_set_vc_t1

0x3e1d,	// (0x0004f771) main_pane_set_vc_t2_ParamLimits

0x3e1d,	// (0x0004f771) main_pane_set_vc_t2

0x3e2f,	// (0x0004f783) main_pane_set_vc_t3_ParamLimits

0x3e2f,	// (0x0004f783) main_pane_set_vc_t3

0x3e41,	// (0x0004f795) main_pane_set_vc_t4_ParamLimits

0x3e41,	// (0x0004f795) main_pane_set_vc_t4

0x0003,

0xf9f9,	// (0x0005b34d) main_pane_set_vc_t_ParamLimits

0xf9f9,	// (0x0005b34d) main_pane_set_vc_t

0x3e53,	// (0x0004f7a7) setting_code_pane_vc_ParamLimits

0x3e53,	// (0x0004f7a7) setting_code_pane_vc

0x3e62,	// (0x0004f7b6) setting_slider_graphic_pane_vc

0x3e62,	// (0x0004f7b6) setting_slider_pane_vc

0x3e62,	// (0x0004f7b6) setting_text_pane_vc

0x3e62,	// (0x0004f7b6) setting_volume_pane_vc

0x3e6a,	// (0x0004f7be) scroll_pane_cp121_vc

0x9b54,	// (0x000554a8) set_content_pane_vc

0x3e72,	// (0x0004f7c6) button_value_adjust_pane_g1

0x3e7b,	// (0x0004f7cf) button_value_adjust_pane_g2

0x0001,

0xfa55,	// (0x0005b3a9) button_value_adjust_pane_g

0x3e84,	// (0x0004f7d8) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3e84,	// (0x0004f7d8) form_field_slider_wide_pane_vc_t1

0x3e98,	// (0x0004f7ec) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3e98,	// (0x0004f7ec) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5a,	// (0x0005b3ae) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005b3ae) form_field_slider_wide_pane_vc_t

0x91e7,	// (0x00054b3b) input_focus_pane_cp10_vc_ParamLimits

0x91e7,	// (0x00054b3b) input_focus_pane_cp10_vc

0x3ec6,	// (0x0004f81a) slider_cont_pane_cp1_vc_ParamLimits

0x3ec6,	// (0x0004f81a) slider_cont_pane_cp1_vc

0x3ed8,	// (0x0004f82c) slider_form_pane_g1_cp2

0x3d08,	// (0x0004f65c) slider_form_pane_g2_cp2

0x3f05,	// (0x0004f859) form_field_slider_pane_vc_t3

0x3f13,	// (0x0004f867) form_field_slider_pane_vc_t4

0x3f21,	// (0x0004f875) slider_form_pane_vc_ParamLimits

0x3f21,	// (0x0004f875) slider_form_pane_vc

0x3f2e,	// (0x0004f882) form_field_slider_pane_vc_t1_ParamLimits

0x3f2e,	// (0x0004f882) form_field_slider_pane_vc_t1

0x3e98,	// (0x0004f7ec) form_field_slider_pane_vc_t2_ParamLimits

0x3e98,	// (0x0004f7ec) form_field_slider_pane_vc_t2

0x0001,

0xfa6c,	// (0x0005b3c0) form_field_slider_pane_vc_t_ParamLimits

0xfa6c,	// (0x0005b3c0) form_field_slider_pane_vc_t

0x91e7,	// (0x00054b3b) input_focus_pane_cp9_vc_ParamLimits

0x91e7,	// (0x00054b3b) input_focus_pane_cp9_vc

0x3f4a,	// (0x0004f89e) slider_cont_pane_vc_ParamLimits

0x3f4a,	// (0x0004f89e) slider_cont_pane_vc

0x3f5e,	// (0x0004f8b2) list_form_graphic_pane_cp_vc_ParamLimits

0x3f5e,	// (0x0004f8b2) list_form_graphic_pane_cp_vc

0x22b6,	// (0x0004dc0a) form_field_popup_wide_pane_vc_g1

0x3f73,	// (0x0004f8c7) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3f73,	// (0x0004f8c7) form_field_popup_wide_pane_vc_t1

0x9b7a,	// (0x000554ce) input_focus_pane_cp8_vc_ParamLimits

0x9b7a,	// (0x000554ce) input_focus_pane_cp8_vc

0x3fb8,	// (0x0004f90c) list_form_wide_pane_vc_ParamLimits

0x3fb8,	// (0x0004f90c) list_form_wide_pane_vc

0x3fc4,	// (0x0004f918) list_form_graphic_pane_vc_g1

0x3fcc,	// (0x0004f920) list_form_graphic_pane_vc_t1_ParamLimits

0x3fcc,	// (0x0004f920) list_form_graphic_pane_vc_t1

0x9231,	// (0x00054b85) list_highlight_pane_cp5_vc_ParamLimits

0x9231,	// (0x00054b85) list_highlight_pane_cp5_vc

0x3fe8,	// (0x0004f93c) list_form_graphic_pane_vc_ParamLimits

0x3fe8,	// (0x0004f93c) list_form_graphic_pane_vc

0x22b6,	// (0x0004dc0a) form_field_popup_pane_vc_g1

0x3ffe,	// (0x0004f952) form_field_popup_pane_vc_t1_ParamLimits

0x3ffe,	// (0x0004f952) form_field_popup_pane_vc_t1

0x9b7a,	// (0x000554ce) input_focus_pane_cp7_vc_ParamLimits

0x9b7a,	// (0x000554ce) input_focus_pane_cp7_vc

0x4015,	// (0x0004f969) list_form_pane_vc_ParamLimits

0x4015,	// (0x0004f969) list_form_pane_vc

0x4021,	// (0x0004f975) data_form_pane_vc_t1_ParamLimits

0x4021,	// (0x0004f975) data_form_pane_vc_t1

0x9bd2,	// (0x00055526) input_focus_pane_vc_g1

0x9bda,	// (0x0005552e) input_focus_pane_vc_g2

0x9be2,	// (0x00055536) input_focus_pane_vc_g3

0x9bea,	// (0x0005553e) input_focus_pane_vc_g4

0x9bf2,	// (0x00055546) input_focus_pane_vc_g5

0x9bfa,	// (0x0005554e) input_focus_pane_vc_g6

0x9c02,	// (0x00055556) input_focus_pane_vc_g7

0x9c0a,	// (0x0005555e) input_focus_pane_vc_g8

0x9c12,	// (0x00055566) input_focus_pane_vc_g9

0x8ea6,	// (0x000547fa) input_focus_pane_vc_g10

0x0009,

0xf65d,	// (0x0005afb1) input_focus_pane_vc_g

0x22aa,	// (0x0004dbfe) data_form_pane_vc_ParamLimits

0x22aa,	// (0x0004dbfe) data_form_pane_vc

0x22b6,	// (0x0004dc0a) form_field_data_pane_vc_g1

0x403c,	// (0x0004f990) form_field_data_pane_vc_t1_ParamLimits

0x403c,	// (0x0004f990) form_field_data_pane_vc_t1

0x9b7a,	// (0x000554ce) input_focus_pane_vc_ParamLimits

0x9b7a,	// (0x000554ce) input_focus_pane_vc

0x4056,	// (0x0004f9aa) button_value_adjust_pane_cp3_vc

0x405e,	// (0x0004f9b2) button_value_adjust_pane_cp5_vc

0x4066,	// (0x0004f9ba) form_field_data_pane_vc_ParamLimits

0x4066,	// (0x0004f9ba) form_field_data_pane_vc

0x407d,	// (0x0004f9d1) form_field_data_pane_vc_cp2

0x4085,	// (0x0004f9d9) form_field_data_wide_pane_vc_ParamLimits

0x4085,	// (0x0004f9d9) form_field_data_wide_pane_vc

0x409b,	// (0x0004f9ef) form_field_data_wide_pane_vc_cp2

0x40a3,	// (0x0004f9f7) form_field_popup_pane_vc_ParamLimits

0x40a3,	// (0x0004f9f7) form_field_popup_pane_vc

0x40ba,	// (0x0004fa0e) form_field_popup_wide_pane_vc_ParamLimits

0x40ba,	// (0x0004fa0e) form_field_popup_wide_pane_vc

0x40d0,	// (0x0004fa24) form_field_slider_pane_vc_ParamLimits

0x40d0,	// (0x0004fa24) form_field_slider_pane_vc

0x40e3,	// (0x0004fa37) form_field_slider_wide_pane_vc_ParamLimits

0x40e3,	// (0x0004fa37) form_field_slider_wide_pane_vc

0xccc2,	// (0x00058616) grid_touch_1_pane_ParamLimits

0xccc2,	// (0x00058616) grid_touch_1_pane

0xccd6,	// (0x0005862a) grid_touch_2_pane_ParamLimits

0xccd6,	// (0x0005862a) grid_touch_2_pane

0x41c7,	// (0x0004fb1b) touch_pane_g1_ParamLimits

0x41c7,	// (0x0004fb1b) touch_pane_g1

0x411a,	// (0x0004fa6e) cell_app_pane_cp_wide_ParamLimits

0x411a,	// (0x0004fa6e) cell_app_pane_cp_wide

0x412b,	// (0x0004fa7f) grid_popup_fast_wide_pane_ParamLimits

0x412b,	// (0x0004fa7f) grid_popup_fast_wide_pane

0x413f,	// (0x0004fa93) scroll_pane_cp19_ParamLimits

0x413f,	// (0x0004fa93) scroll_pane_cp19

0x8f96,	// (0x000548ea) bg_popup_window_pane_cp20

0x4153,	// (0x0004faa7) listscroll_popup_fast_wide_pane

0xcd00,	// (0x00058654) grid_indicator_nsta_pane

0x416d,	// (0x0004fac1) clock_nsta_pane_g1

0x4176,	// (0x0004faca) clock_nsta_pane_t1

0xcd0c,	// (0x00058660) cell_indicator_nsta_pane_ParamLimits

0xcd0c,	// (0x00058660) cell_indicator_nsta_pane

0x41c7,	// (0x0004fb1b) cell_indicator_nsta_pane_g1

0xcd27,	// (0x0005867b) cell_indicator_nsta_pane_g2

0x0001,

0xfa7d,	// (0x0005b3d1) cell_indicator_nsta_pane_g

0x41e7,	// (0x0004fb3b) clock_nsta_pane_cp

0x41f0,	// (0x0004fb44) indicator_nsta_pane_cp

0x41fa,	// (0x0004fb4e) nsta_clock_indic_pane_g1

0x93b3,	// (0x00054d07) grid_indicator_pane

0xa147,	// (0x00055a9b) scroll_pane_cp29

0xf358,	// (0x0005acac) indicator_nsta_pane_cp2_ParamLimits

0xf358,	// (0x0005acac) indicator_nsta_pane_cp2

0x9231,	// (0x00054b85) main_apps_wheel_pane

0xb3aa,	// (0x00056cfe) form_midp_field_text_pane_ParamLimits

0x2617,	// (0x0004df6b) scroll_bar_cp050_ParamLimits

0x4253,	// (0x0004fba7) cell_indicator_pane_ParamLimits

0x4253,	// (0x0004fba7) cell_indicator_pane

0x426c,	// (0x0004fbc0) cell_indicator_pane_g1

0xcd46,	// (0x0005869a) grid_wheel_folder_pane_ParamLimits

0xcd46,	// (0x0005869a) grid_wheel_folder_pane

0xcd54,	// (0x000586a8) list_wheel_apps_pane_ParamLimits

0xcd54,	// (0x000586a8) list_wheel_apps_pane

0xcd62,	// (0x000586b6) main_apps_wheel_pane_g1_ParamLimits

0xcd62,	// (0x000586b6) main_apps_wheel_pane_g1

0xcd6e,	// (0x000586c2) main_apps_wheel_pane_g2_ParamLimits

0xcd6e,	// (0x000586c2) main_apps_wheel_pane_g2

0x0001,

0xfa99,	// (0x0005b3ed) main_apps_wheel_pane_g_ParamLimits

0xfa99,	// (0x0005b3ed) main_apps_wheel_pane_g

0xcd7c,	// (0x000586d0) main_apps_wheel_pane_t1_ParamLimits

0xcd7c,	// (0x000586d0) main_apps_wheel_pane_t1

0xcd90,	// (0x000586e4) list_wheel_apps_pane_g1

0xcd98,	// (0x000586ec) list_wheel_apps_pane_g2

0xcda0,	// (0x000586f4) list_wheel_apps_pane_g3

0xcda8,	// (0x000586fc) list_wheel_apps_pane_g4

0xcdb2,	// (0x00058706) list_wheel_apps_pane_g5

0x0004,

0xfa9e,	// (0x0005b3f2) list_wheel_apps_pane_g

0xc405,	// (0x00057d59) navi_icon_text_pane

0xae04,	// (0x00056758) aid_fill_nsta

0x4333,	// (0x0004fc87) navi_icon_text_pane_g1

0x433f,	// (0x0004fc93) navi_icon_text_pane_t1

0xc2e9,	// (0x00057c3d) list_set_graphic_pane_t1_ParamLimits

0xc2e9,	// (0x00057c3d) list_set_graphic_pane_t1

0x2d62,	// (0x0004e6b6) popup_midp_note_alarm_window_t6_ParamLimits

0x2d62,	// (0x0004e6b6) popup_midp_note_alarm_window_t6

0x2d74,	// (0x0004e6c8) popup_midp_note_alarm_window_t7_ParamLimits

0x2d74,	// (0x0004e6c8) popup_midp_note_alarm_window_t7

0x2d86,	// (0x0004e6da) popup_midp_note_alarm_window_t8_ParamLimits

0x2d86,	// (0x0004e6da) popup_midp_note_alarm_window_t8

0x2d98,	// (0x0004e6ec) popup_midp_note_alarm_window_t9_ParamLimits

0x2d98,	// (0x0004e6ec) popup_midp_note_alarm_window_t9

0x2daa,	// (0x0004e6fe) popup_midp_note_alarm_window_t10_ParamLimits

0x2daa,	// (0x0004e6fe) popup_midp_note_alarm_window_t10

0x2dbc,	// (0x0004e710) popup_midp_note_alarm_window_t11_ParamLimits

0x2dbc,	// (0x0004e710) popup_midp_note_alarm_window_t11

0xc730,	// (0x00058084) scroll_pane_cp17_ParamLimits

0xc730,	// (0x00058084) scroll_pane_cp17

0x0a4e,	// (0x0004c3a2) volume_small_pane_cp_g1

0x0ec5,	// (0x0004c819) volume_small_pane_cp_g2

0x0ece,	// (0x0004c822) volume_small_pane_cp_g3

0x0ed7,	// (0x0004c82b) volume_small_pane_cp_g4

0x0ee0,	// (0x0004c834) volume_small_pane_cp_g5

0x0e0f,	// (0x0004c763) volume_small_pane_cp_g6

0x0ee9,	// (0x0004c83d) volume_small_pane_cp_g7

0x0ef2,	// (0x0004c846) volume_small_pane_cp_g8

0x0efb,	// (0x0004c84f) volume_small_pane_cp_g9

0x0f04,	// (0x0004c858) volume_small_pane_cp_g10

0xc56b,	// (0x00057ebf) midp_ticker_pane_g1_ParamLimits

0xc577,	// (0x00057ecb) midp_ticker_pane_g2_ParamLimits

0xf729,	// (0x0005b07d) midp_ticker_pane_g_ParamLimits

0xc583,	// (0x00057ed7) midp_ticker_pane_t1_ParamLimits

0xae28,	// (0x0005677c) aid_fill_nsta_2

0x2603,	// (0x0004df57) list_form2_midp_pane

0x3716,	// (0x0004f06a) midp_editing_number_pane_ParamLimits

0x3725,	// (0x0004f079) midp_ticker_pane_ParamLimits

0x4351,	// (0x0004fca5) form2_midp_field_pane

0x4375,	// (0x0004fcc9) scroll_pane_cp51

0x4395,	// (0x0004fce9) form2_midp_button_pane_ParamLimits

0x4395,	// (0x0004fce9) form2_midp_button_pane

0x43a7,	// (0x0004fcfb) form2_midp_content_pane_ParamLimits

0x43a7,	// (0x0004fcfb) form2_midp_content_pane

0x43c1,	// (0x0004fd15) form2_midp_field_choice_group_pane

0x43c9,	// (0x0004fd1d) form2_midp_field_pane_g1

0x43d1,	// (0x0004fd25) form2_midp_field_pane_g2

0x43d9,	// (0x0004fd2d) form2_midp_field_pane_g3

0x43e1,	// (0x0004fd35) form2_midp_field_pane_g4

0x0003,

0xfac3,	// (0x0005b417) form2_midp_field_pane_g

0x43e9,	// (0x0004fd3d) form2_midp_gauge_slider_pane

0x43f1,	// (0x0004fd45) form2_midp_gauge_wait_pane

0x43f9,	// (0x0004fd4d) form2_midp_image_pane_ParamLimits

0x43f9,	// (0x0004fd4d) form2_midp_image_pane

0xcde5,	// (0x00058739) form2_midp_label_pane_ParamLimits

0xcde5,	// (0x00058739) form2_midp_label_pane

0xcdfe,	// (0x00058752) form2_midp_label_pane_cp_ParamLimits

0xcdfe,	// (0x00058752) form2_midp_label_pane_cp

0x444e,	// (0x0004fda2) form2_midp_string_pane_ParamLimits

0x444e,	// (0x0004fda2) form2_midp_string_pane

0x8ceb,	// (0x0005463f) form2_midp_text_pane_ParamLimits

0x8ceb,	// (0x0005463f) form2_midp_text_pane

0x4460,	// (0x0004fdb4) form2_midp_time_pane

0x4470,	// (0x0004fdc4) input_focus_pane_cp51_ParamLimits

0x4470,	// (0x0004fdc4) input_focus_pane_cp51

0xce1d,	// (0x00058771) form2_midp_label_pane_t1_ParamLimits

0xce1d,	// (0x00058771) form2_midp_label_pane_t1

0x8d04,	// (0x00054658) form2_mdip_text_pane_t1_ParamLimits

0x8d04,	// (0x00054658) form2_mdip_text_pane_t1

0xed4c,	// (0x0005a6a0) form2_midp_time_pane_t1

0x44d1,	// (0x0004fe25) form2_midp_gauge_slider_pane_t1

0xce5d,	// (0x000587b1) form2_midp_gauge_slider_pane_t2

0xce6f,	// (0x000587c3) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacc,	// (0x0005b420) form2_midp_gauge_slider_pane_t

0x4507,	// (0x0004fe5b) form2_midp_slider_pane

0x4513,	// (0x0004fe67) form2_midp_gauge_wait_pane_t1

0x4521,	// (0x0004fe75) form2_midp_wait_pane_ParamLimits

0x4521,	// (0x0004fe75) form2_midp_wait_pane

0xce81,	// (0x000587d5) list_single_2graphic_pane_cp4_ParamLimits

0xce81,	// (0x000587d5) list_single_2graphic_pane_cp4

0xb301,	// (0x00056c55) list_single_midp_graphic_pane_cp_ParamLimits

0xb301,	// (0x00056c55) list_single_midp_graphic_pane_cp

0x8f96,	// (0x000548ea) list_highlight_pane_cp20

0x4574,	// (0x0004fec8) list_single_2graphic_pane_g1_cp4

0x3b51,	// (0x0004f4a5) list_single_2graphic_pane_g2_cp4

0x457c,	// (0x0004fed0) list_single_2graphic_pane_t1_cp4

0x9231,	// (0x00054b85) list_highlight_pane_cp21

0x458b,	// (0x0004fedf) list_single_midp_graphic_pane_g4_cp

0x459a,	// (0x0004feee) list_single_midp_graphic_pane_t1_cp

0xce96,	// (0x000587ea) form2_mdip_string_pane_t1_ParamLimits

0xce96,	// (0x000587ea) form2_mdip_string_pane_t1

0x8f96,	// (0x000548ea) bg_wml_button_pane_cp2

0x8ea6,	// (0x000547fa) form2_midp_image_pane_g1

0xf0d2,	// (0x0005aa26) list_double_large_graphic_pane_g5_ParamLimits

0xf0d2,	// (0x0005aa26) list_double_large_graphic_pane_g5

0xa352,	// (0x00055ca6) midp_form_pane_ParamLimits

0x9231,	// (0x00054b85) main_apps_wheel_pane_ParamLimits

0xaae2,	// (0x00056436) popup_preview_window_ParamLimits

0xaae2,	// (0x00056436) popup_preview_window

0xadaf,	// (0x00056703) popup_touch_info_window_ParamLimits

0xadaf,	// (0x00056703) popup_touch_info_window

0xadcd,	// (0x00056721) popup_touch_menu_window_ParamLimits

0xadcd,	// (0x00056721) popup_touch_menu_window

0x8e9c,	// (0x000547f0) bg_popup_sub_pane_cp6

0x46b6,	// (0x0005000a) list_touch_menu_pane

0xcf0c,	// (0x00058860) list_single_touch_menu_pane_ParamLimits

0xcf0c,	// (0x00058860) list_single_touch_menu_pane

0xcf20,	// (0x00058874) list_single_touch_menu_pane_t1

0x9231,	// (0x00054b85) bg_popup_sub_pane_cp7_ParamLimits

0x9231,	// (0x00054b85) bg_popup_sub_pane_cp7

0x46e2,	// (0x00050036) heading_sub_pane

0x46ea,	// (0x0005003e) list_touch_info_pane_ParamLimits

0x46ea,	// (0x0005003e) list_touch_info_pane

0x46f9,	// (0x0005004d) list_single_touch_info_pane_ParamLimits

0x46f9,	// (0x0005004d) list_single_touch_info_pane

0x470b,	// (0x0005005f) list_single_touch_info_pane_t1

0x4719,	// (0x0005006d) list_single_touch_info_pane_t2

0x0001,

0xfada,	// (0x0005b42e) list_single_touch_info_pane_t

0xc554,	// (0x00057ea8) bg_popup_heading_pane_cp

0x4727,	// (0x0005007b) heading_sub_pane_t1

0x2244,	// (0x0004db98) bg_popup_preview_window_pane_cp_ParamLimits

0x2244,	// (0x0004db98) bg_popup_preview_window_pane_cp

0x46e2,	// (0x00050036) heading_preview_pane

0x46ea,	// (0x0005003e) list_preview_pane_ParamLimits

0x46ea,	// (0x0005003e) list_preview_pane

0x4735,	// (0x00050089) popup_preview_window_g1

0x46f9,	// (0x0005004d) list_single_preview_pane_ParamLimits

0x46f9,	// (0x0005004d) list_single_preview_pane

0x473d,	// (0x00050091) list_single_preview_pane_g1

0x4745,	// (0x00050099) list_single_preview_pane_t1

0x470b,	// (0x0005005f) list_single_preview_pane_t2

0x0001,

0xfadf,	// (0x0005b433) list_single_preview_pane_t

0x4753,	// (0x000500a7) bg_popup_heading_pane_cp2_ParamLimits

0x4753,	// (0x000500a7) bg_popup_heading_pane_cp2

0x4769,	// (0x000500bd) heading_preview_pane_g1

0x4771,	// (0x000500c5) heading_preview_pane_t1_ParamLimits

0x4771,	// (0x000500c5) heading_preview_pane_t1

0x93e0,	// (0x00054d34) soft_indicator_pane_t1_ParamLimits

0x9aa5,	// (0x000553f9) scroll_pane_ParamLimits

0xa057,	// (0x000559ab) scroll_sc2_left_pane

0xa060,	// (0x000559b4) scroll_sc2_right_pane

0xa07f,	// (0x000559d3) scroll_bg_pane_g1_ParamLimits

0xa094,	// (0x000559e8) scroll_bg_pane_g2_ParamLimits

0xa0ac,	// (0x00055a00) scroll_bg_pane_g3_ParamLimits

0xf6b4,	// (0x0005b008) scroll_bg_pane_g_ParamLimits

0xa07f,	// (0x000559d3) scroll_handle_pane_g1_ParamLimits

0xc033,	// (0x00057987) scroll_handle_pane_g2_ParamLimits

0xa0ac,	// (0x00055a00) scroll_handle_pane_g3_ParamLimits

0xf6bb,	// (0x0005b00f) scroll_handle_pane_g_ParamLimits

0xa6af,	// (0x00056003) popup_choice_list_window_ParamLimits

0xa6af,	// (0x00056003) popup_choice_list_window

0x2102,	// (0x0004da56) choice_list_pane

0x2184,	// (0x0004dad8) cell_toolbar_pane_t1

0x21ac,	// (0x0004db00) toolbar_button_pane_ParamLimits

0x3288,	// (0x0004ebdc) ai_gene_pane_1_t2_ParamLimits

0x3288,	// (0x0004ebdc) ai_gene_pane_1_t2

0x0001,

0xf8d7,	// (0x0005b22b) ai_gene_pane_1_t_ParamLimits

0xf8d7,	// (0x0005b22b) ai_gene_pane_1_t

0x478e,	// (0x000500e2) scroll_sc2_left_pane_g1

0x478e,	// (0x000500e2) scroll_sc2_right_pane_g1

0x9d5e,	// (0x000556b2) bg_popup_sub_pane_cp10

0x4798,	// (0x000500ec) list_choice_list_pane

0xcaf1,	// (0x00058445) list_single_choice_list_pane_ParamLimits

0xcaf1,	// (0x00058445) list_single_choice_list_pane

0xcf2e,	// (0x00058882) list_single_choice_list_pane_g1

0x9d1c,	// (0x00055670) list_single_choice_list_pane_t1_ParamLimits

0x9d1c,	// (0x00055670) list_single_choice_list_pane_t1

0x47cc,	// (0x00050120) choice_list_pane_g1

0xcf36,	// (0x0005888a) choice_list_pane_t1

0x8e9c,	// (0x000547f0) input_focus_pane_cp11

0x9ee2,	// (0x00055836) title_pane_stacon_g2_ParamLimits

0x9ee2,	// (0x00055836) title_pane_stacon_g2

0x0002,

0xf69a,	// (0x0005afee) title_pane_stacon_g_ParamLimits

0xf69a,	// (0x0005afee) title_pane_stacon_g

0xc554,	// (0x00057ea8) cursor_press_pane

0xa756,	// (0x000560aa) popup_fep_hwr_window_ParamLimits

0xa756,	// (0x000560aa) popup_fep_hwr_window

0x0177,	// (0x0004bacb) popup_fep_vkb_window_ParamLimits

0x0177,	// (0x0004bacb) popup_fep_vkb_window

0xcf44,	// (0x00058898) cursor_press_pane_g1

0x0002,

0xfb08,	// (0x0005b45c) fep_vkb_side_pane_g_ParamLimits

0x0f46,	// (0x0004c89a) fep_hwr_candidate_pane_ParamLimits

0x0f46,	// (0x0004c89a) fep_hwr_candidate_pane

0x0f70,	// (0x0004c8c4) fep_hwr_side_pane_ParamLimits

0x0f70,	// (0x0004c8c4) fep_hwr_side_pane

0x0f90,	// (0x0004c8e4) fep_hwr_top_pane_ParamLimits

0x0f90,	// (0x0004c8e4) fep_hwr_top_pane

0x0fa8,	// (0x0004c8fc) fep_hwr_write_pane_ParamLimits

0x0fa8,	// (0x0004c8fc) fep_hwr_write_pane

0xfb08,	// (0x0005b45c) fep_vkb_side_pane_g

0x47ea,	// (0x0005013e) fep_hwr_top_pane_g1

0x47fc,	// (0x00050150) fep_hwr_top_pane_g2

0x0fd4,	// (0x0004c928) fep_hwr_top_pane_g3

0x0002,

0xfae4,	// (0x0005b438) fep_hwr_top_pane_g

0x0fe9,	// (0x0004c93d) fep_hwr_top_text_pane

0xc0f6,	// (0x00057a4a) fep_hwr_top_text_pane_g1

0x4832,	// (0x00050186) fep_hwr_top_text_pane_t1

0x10df,	// (0x0004ca33) fep_hwr_candidate_pane_g1

0x4a77,	// (0x000503cb) fep_vkb_keypad_pane_g3_ParamLimits

0x4a77,	// (0x000503cb) fep_vkb_keypad_pane_g3

0x4a9f,	// (0x000503f3) fep_vkb_keypad_pane_g4_ParamLimits

0x4a9f,	// (0x000503f3) fep_vkb_keypad_pane_g4

0x4b0e,	// (0x00050462) fep_vkb_bottom_pane_g2_ParamLimits

0x4b0e,	// (0x00050462) fep_vkb_bottom_pane_g2

0x0001,

0xfb0f,	// (0x0005b463) fep_vkb_bottom_pane_g_ParamLimits

0xfb0f,	// (0x0005b463) fep_vkb_bottom_pane_g

0x478e,	// (0x000500e2) cell_vkb_side_pane_g2

0x0001,

0xfb19,	// (0x0005b46d) cell_vkb_side_pane_g

0x4b99,	// (0x000504ed) cell_vkb_side_pane_t1

0x4ba7,	// (0x000504fb) cell_vkb_side_pane_t1_copy1

0x478e,	// (0x000500e2) bg_fep_vkb_candidate_pane_g2

0x4cd3,	// (0x00050627) cell_vkb_candidate_pane_ParamLimits

0x4840,	// (0x00050194) aid_size_cell_vkb_ParamLimits

0x4840,	// (0x00050194) aid_size_cell_vkb

0x4cd3,	// (0x00050627) cell_vkb_candidate_pane

0x10f9,	// (0x0004ca4d) bg_popup_fep_shadow_pane_g1

0xcf86,	// (0x000588da) fep_vkb_bottom_pane_ParamLimits

0xcf86,	// (0x000588da) fep_vkb_bottom_pane

0x4904,	// (0x00050258) fep_vkb_candidate_pane_ParamLimits

0x4904,	// (0x00050258) fep_vkb_candidate_pane

0xcfab,	// (0x000588ff) fep_vkb_keypad_pane_ParamLimits

0xcfab,	// (0x000588ff) fep_vkb_keypad_pane

0xcfe0,	// (0x00058934) fep_vkb_side_pane_ParamLimits

0xcfe0,	// (0x00058934) fep_vkb_side_pane

0xd01c,	// (0x00058970) fep_vkb_top_pane_ParamLimits

0xd01c,	// (0x00058970) fep_vkb_top_pane

0x49d0,	// (0x00050324) fep_vkb_top_pane_g1_ParamLimits

0x49d0,	// (0x00050324) fep_vkb_top_pane_g1

0x49df,	// (0x00050333) fep_vkb_top_pane_g2_ParamLimits

0x49df,	// (0x00050333) fep_vkb_top_pane_g2

0x49ee,	// (0x00050342) fep_vkb_top_pane_g3_ParamLimits

0x49ee,	// (0x00050342) fep_vkb_top_pane_g3

0x0003,

0xfaff,	// (0x0005b453) fep_vkb_top_pane_g_ParamLimits

0xfaff,	// (0x0005b453) fep_vkb_top_pane_g

0x4a0c,	// (0x00050360) fep_vkb_top_text_pane_ParamLimits

0x4a0c,	// (0x00050360) fep_vkb_top_text_pane

0xd051,	// (0x000589a5) fep_vkb_side_pane_g1_ParamLimits

0xd051,	// (0x000589a5) fep_vkb_side_pane_g1

0x4a66,	// (0x000503ba) grid_vkb_side_pane_ParamLimits

0x4a66,	// (0x000503ba) grid_vkb_side_pane

0x1101,	// (0x0004ca55) bg_popup_fep_shadow_pane_g2

0x110a,	// (0x0004ca5e) bg_popup_fep_shadow_pane_g3

0x1112,	// (0x0004ca66) bg_popup_fep_shadow_pane_g4

0x111b,	// (0x0004ca6f) bg_popup_fep_shadow_pane_g5

0x1125,	// (0x0004ca79) bg_popup_fep_shadow_pane_g6

0x112d,	// (0x0004ca81) bg_popup_fep_shadow_pane_g7

0x9bf2,	// (0x00055546) bg_popup_fep_shadow_pane_g8

0x4abd,	// (0x00050411) grid_vkb_keypad_number_pane_ParamLimits

0x4abd,	// (0x00050411) grid_vkb_keypad_number_pane

0x4acd,	// (0x00050421) grid_vkb_keypad_pane_ParamLimits

0x4acd,	// (0x00050421) grid_vkb_keypad_pane

0x4af3,	// (0x00050447) fep_vkb_bottom_pane_g1_ParamLimits

0x4af3,	// (0x00050447) fep_vkb_bottom_pane_g1

0x4b1c,	// (0x00050470) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4b1c,	// (0x00050470) grid_vkb_keypad_bottom_left_pane

0x4b31,	// (0x00050485) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4b31,	// (0x00050485) grid_vkb_keypad_bottom_right_pane

0x4b46,	// (0x0005049a) fep_vkb_top_text_pane_g1

0xd098,	// (0x000589ec) fep_vkb_top_text_pane_t1

0xd0aa,	// (0x000589fe) cell_vkb_side_pane_ParamLimits

0xd0aa,	// (0x000589fe) cell_vkb_side_pane

0x478e,	// (0x000500e2) cell_vkb_side_pane_g1

0x4bb5,	// (0x00050509) cell_vkb_keypad_pane_ParamLimits

0x4bb5,	// (0x00050509) cell_vkb_keypad_pane

0x4c2a,	// (0x0005057e) cell_vkb_keypad_pane_g1

0x0008,

0xfb2c,	// (0x0005b480) bg_popup_fep_shadow_pane_g

0x478e,	// (0x000500e2) cell_hwr_side_pane_g1

0x478e,	// (0x000500e2) cell_hwr_side_pane_g2

0x4c34,	// (0x00050588) cell_vkb_keypad_pane_t1

0xd0c0,	// (0x00058a14) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd0c0,	// (0x00058a14) cell_vkb_keypad_bottom_left_pane

0xd0d5,	// (0x00058a29) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd0d5,	// (0x00058a29) cell_vkb_keypad_bottom_right_pane

0x478e,	// (0x000500e2) cell_vkb_keypad_bottom_left_pane_g1

0x478e,	// (0x000500e2) cell_vkb_keypad_bottom_right_pane_g1

0x4c98,	// (0x000505ec) cell_vkb_keypad_number_pane_ParamLimits

0x4c98,	// (0x000505ec) cell_vkb_keypad_number_pane

0x4cb7,	// (0x0005060b) cell_vkb_keypad_number_pane_g1

0x4cc1,	// (0x00050615) cell_vkb_keypad_number_pane_g2

0x4cca,	// (0x0005061e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1e,	// (0x0005b472) cell_vkb_keypad_number_pane_g

0x4c34,	// (0x00050588) cell_vkb_keypad_number_pane_t1

0x4cee,	// (0x00050642) fep_vkb_candidate_pane_g1

0x0001,

0xfb19,	// (0x0005b46d) cell_hwr_side_pane_g

0x4d07,	// (0x0005065b) cell_hwr_side_pane_t1

0x113f,	// (0x0004ca93) cell_hwr_side_pane_t1_copy1

0x49fe,	// (0x00050352) cell_hwr_candidate_pane_g1

0x114d,	// (0x0004caa1) cell_hwr_candidate_pane_t1

0x478e,	// (0x000500e2) cell_vkb_candidate_pane_g2

0x4d8d,	// (0x000506e1) cell_vkb_candidate_pane_t1

0x0f0d,	// (0x0004c861) bg_popup_fep_shadow_pane_ParamLimits

0x0f0d,	// (0x0004c861) bg_popup_fep_shadow_pane

0xcf4c,	// (0x000588a0) bg_fep_hwr_top_pane_g4

0x480e,	// (0x00050162) bg_hwr_side_pane_g1_ParamLimits

0x480e,	// (0x00050162) bg_hwr_side_pane_g1

0xb80a,	// (0x0005715e) cell_hwr_side_pane_ParamLimits

0xb80a,	// (0x0005715e) cell_hwr_side_pane

0x1060,	// (0x0004c9b4) fep_hwr_write_pane_g1_ParamLimits

0x1060,	// (0x0004c9b4) fep_hwr_write_pane_g1

0x106d,	// (0x0004c9c1) fep_hwr_write_pane_g2_ParamLimits

0x106d,	// (0x0004c9c1) fep_hwr_write_pane_g2

0x107a,	// (0x0004c9ce) fep_hwr_write_pane_g3_ParamLimits

0x107a,	// (0x0004c9ce) fep_hwr_write_pane_g3

0xb82a,	// (0x0005717e) fep_hwr_write_pane_g4_ParamLimits

0xb82a,	// (0x0005717e) fep_hwr_write_pane_g4

0x0005,

0xfaeb,	// (0x0005b43f) fep_hwr_write_pane_g_ParamLimits

0xfaeb,	// (0x0005b43f) fep_hwr_write_pane_g

0xcf4c,	// (0x000588a0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xcf4c,	// (0x000588a0) bg_fep_hwr_candidate_pane_g2

0x109d,	// (0x0004c9f1) cell_hwr_candidate_pane_ParamLimits

0x109d,	// (0x0004c9f1) cell_hwr_candidate_pane

0x10df,	// (0x0004ca33) fep_hwr_candidate_pane_g1_ParamLimits

0x486e,	// (0x000501c2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x486e,	// (0x000501c2) bg_popup_fep_shadow_pane_cp2

0x49fe,	// (0x00050352) fep_vkb_top_pane_g4_ParamLimits

0x49fe,	// (0x00050352) fep_vkb_top_pane_g4

0x4a44,	// (0x00050398) fep_vkb_side_pane_g2_ParamLimits

0x4a44,	// (0x00050398) fep_vkb_side_pane_g2

0x896f,	// (0x000542c3) list_setting_pane_t4_ParamLimits

0x896f,	// (0x000542c3) list_setting_pane_t4

0x8a09,	// (0x0005435d) list_setting_number_pane_t5_ParamLimits

0x8a09,	// (0x0005435d) list_setting_number_pane_t5

0xc12d,	// (0x00057a81) list_double_heading_pane_cp2_ParamLimits

0xc12d,	// (0x00057a81) list_double_heading_pane_cp2

0xd0f0,	// (0x00058a44) list_double_heading_pane_g1_cp2_ParamLimits

0xd0f0,	// (0x00058a44) list_double_heading_pane_g1_cp2

0x4d9b,	// (0x000506ef) list_double_heading_pane_g2_cp2_ParamLimits

0x4d9b,	// (0x000506ef) list_double_heading_pane_g2_cp2

0x4daf,	// (0x00050703) list_double_heading_pane_t1_cp2_ParamLimits

0x4daf,	// (0x00050703) list_double_heading_pane_t1_cp2

0x4dc5,	// (0x00050719) list_double_heading_pane_t2_cp2_ParamLimits

0x4dc5,	// (0x00050719) list_double_heading_pane_t2_cp2

0x8e84,	// (0x000547d8) aid_value_unit2

0xe889,	// (0x0005a1dd) popup_preview_fixed_window

0x959b,	// (0x00054eef) bg_popup_preview_window_pane_cp02

0x4dd7,	// (0x0005072b) list_preview_fixed_pane

0x4e1d,	// (0x00050771) list_empty_pane_fp_ParamLimits

0x4e1d,	// (0x00050771) list_empty_pane_fp

0x4e1d,	// (0x00050771) list_single_cale_day_pane_fp_ParamLimits

0x4e1d,	// (0x00050771) list_single_cale_day_pane_fp

0x4e1d,	// (0x00050771) list_single_graphic_heading_pane_fp_ParamLimits

0x4e1d,	// (0x00050771) list_single_graphic_heading_pane_fp

0x4e1d,	// (0x00050771) list_single_graphic_pane_fp_ParamLimits

0x4e1d,	// (0x00050771) list_single_graphic_pane_fp

0x4e1d,	// (0x00050771) list_single_heading_pane_fp_ParamLimits

0x4e1d,	// (0x00050771) list_single_heading_pane_fp

0x4e1d,	// (0x00050771) list_single_pane_fp_ParamLimits

0x4e1d,	// (0x00050771) list_single_pane_fp

0x4e33,	// (0x00050787) list_single_pane_fp_g1_ParamLimits

0x4e33,	// (0x00050787) list_single_pane_fp_g1

0xd0fc,	// (0x00058a50) list_single_pane_fp_g2_ParamLimits

0xd0fc,	// (0x00058a50) list_single_pane_fp_g2

0x4f9f,	// (0x000508f3) list_single_pane_fp_g3_ParamLimits

0x4f9f,	// (0x000508f3) list_single_pane_fp_g3

0x4e3f,	// (0x00050793) list_single_pane_fp_g4_ParamLimits

0x4e3f,	// (0x00050793) list_single_pane_fp_g4

0x0003,

0xfb4d,	// (0x0005b4a1) list_single_pane_fp_g_ParamLimits

0xfb4d,	// (0x0005b4a1) list_single_pane_fp_g

0xed5f,	// (0x0005a6b3) list_single_pane_fp_t1_ParamLimits

0xed5f,	// (0x0005a6b3) list_single_pane_fp_t1

0xed76,	// (0x0005a6ca) list_single_graphic_pane_fp_g1_ParamLimits

0xed76,	// (0x0005a6ca) list_single_graphic_pane_fp_g1

0x4e33,	// (0x00050787) list_single_graphic_pane_fp_g2_ParamLimits

0x4e33,	// (0x00050787) list_single_graphic_pane_fp_g2

0xd0fc,	// (0x00058a50) list_single_graphic_pane_fp_g3_ParamLimits

0xd0fc,	// (0x00058a50) list_single_graphic_pane_fp_g3

0x4f9f,	// (0x000508f3) list_single_graphic_pane_fp_g4_ParamLimits

0x4f9f,	// (0x000508f3) list_single_graphic_pane_fp_g4

0x4e3f,	// (0x00050793) list_single_graphic_pane_fp_g5_ParamLimits

0x4e3f,	// (0x00050793) list_single_graphic_pane_fp_g5

0x0004,

0xfb56,	// (0x0005b4aa) list_single_graphic_pane_fp_g_ParamLimits

0xfb56,	// (0x0005b4aa) list_single_graphic_pane_fp_g

0xed82,	// (0x0005a6d6) list_single_graphic_pane_fp_t1_ParamLimits

0xed82,	// (0x0005a6d6) list_single_graphic_pane_fp_t1

0xed76,	// (0x0005a6ca) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xed76,	// (0x0005a6ca) list_single_graphic_heading_pane_fp_g1

0x4e33,	// (0x00050787) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4e33,	// (0x00050787) list_single_graphic_heading_pane_fp_g2

0xd0fc,	// (0x00058a50) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd0fc,	// (0x00058a50) list_single_graphic_heading_pane_fp_g3

0x4f9f,	// (0x000508f3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4f9f,	// (0x000508f3) list_single_graphic_heading_pane_fp_g4

0x4e3f,	// (0x00050793) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4e3f,	// (0x00050793) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb56,	// (0x0005b4aa) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb56,	// (0x0005b4aa) list_single_graphic_heading_pane_fp_g

0xed98,	// (0x0005a6ec) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xed98,	// (0x0005a6ec) list_single_graphic_heading_pane_fp_t1

0xedae,	// (0x0005a702) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xedae,	// (0x0005a702) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb61,	// (0x0005b4b5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb61,	// (0x0005b4b5) list_single_graphic_heading_pane_fp_t

0xedc0,	// (0x0005a714) list_single_cale_day_pane_fp_g1_ParamLimits

0xedc0,	// (0x0005a714) list_single_cale_day_pane_fp_g1

0x4e4b,	// (0x0005079f) list_single_cale_day_pane_fp_g2_ParamLimits

0x4e4b,	// (0x0005079f) list_single_cale_day_pane_fp_g2

0x116b,	// (0x0004cabf) list_single_cale_day_pane_fp_g3_ParamLimits

0x116b,	// (0x0004cabf) list_single_cale_day_pane_fp_g3

0x1193,	// (0x0004cae7) list_single_cale_day_pane_fp_g4_ParamLimits

0x1193,	// (0x0004cae7) list_single_cale_day_pane_fp_g4

0x11b7,	// (0x0004cb0b) list_single_cale_day_pane_fp_g5_ParamLimits

0x11b7,	// (0x0004cb0b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb66,	// (0x0005b4ba) list_single_cale_day_pane_fp_g_ParamLimits

0xfb66,	// (0x0005b4ba) list_single_cale_day_pane_fp_g

0xedf8,	// (0x0005a74c) list_single_cale_day_pane_fp_t1_ParamLimits

0xedf8,	// (0x0005a74c) list_single_cale_day_pane_fp_t1

0xee1e,	// (0x0005a772) list_single_cale_day_pane_fp_t2_ParamLimits

0xee1e,	// (0x0005a772) list_single_cale_day_pane_fp_t2

0xee37,	// (0x0005a78b) list_single_cale_day_pane_fp_t3_ParamLimits

0xee37,	// (0x0005a78b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb71,	// (0x0005b4c5) list_single_cale_day_pane_fp_t_ParamLimits

0xfb71,	// (0x0005b4c5) list_single_cale_day_pane_fp_t

0x4e33,	// (0x00050787) list_empty_pane_fp_g1_ParamLimits

0x4e33,	// (0x00050787) list_empty_pane_fp_g1

0xee50,	// (0x0005a7a4) list_empty_pane_fp_t1

0xee5e,	// (0x0005a7b2) list_empty_pane_fp_t2

0x0001,

0xfb78,	// (0x0005b4cc) list_empty_pane_fp_t

0x4e33,	// (0x00050787) list_single_heading_pane_fp_g1_ParamLimits

0x4e33,	// (0x00050787) list_single_heading_pane_fp_g1

0xd0fc,	// (0x00058a50) list_single_heading_pane_fp_g2_ParamLimits

0xd0fc,	// (0x00058a50) list_single_heading_pane_fp_g2

0x4f9f,	// (0x000508f3) list_single_heading_pane_fp_g3_ParamLimits

0x4f9f,	// (0x000508f3) list_single_heading_pane_fp_g3

0x0002,

0xfb7d,	// (0x0005b4d1) list_single_heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x0005b4d1) list_single_heading_pane_fp_g

0xee6c,	// (0x0005a7c0) list_single_heading_pane_fp_t1_ParamLimits

0xee6c,	// (0x0005a7c0) list_single_heading_pane_fp_t1

0xee7e,	// (0x0005a7d2) list_single_heading_pane_fp_t2_ParamLimits

0xee7e,	// (0x0005a7d2) list_single_heading_pane_fp_t2

0x0001,

0xfb84,	// (0x0005b4d8) list_single_heading_pane_fp_t_ParamLimits

0xfb84,	// (0x0005b4d8) list_single_heading_pane_fp_t

0x9d7c,	// (0x000556d0) aid_size_cell_fast

0x951b,	// (0x00054e6f) soft_indicator_pane_cp1_t1

0x9db6,	// (0x0005570a) cell_app_pane_cp2_ParamLimits

0x9db6,	// (0x0005570a) cell_app_pane_cp2

0x0f2f,	// (0x0004c883) fep_hwr_candidate_drop_down_list_pane

0xcf5a,	// (0x000588ae) fep_hwr_candidate_pane_g3_ParamLimits

0xcf5a,	// (0x000588ae) fep_hwr_candidate_pane_g3

0xcf67,	// (0x000588bb) fep_hwr_candidate_pane_g4_ParamLimits

0xcf67,	// (0x000588bb) fep_hwr_candidate_pane_g4

0x0002,

0xfaf8,	// (0x0005b44c) fep_hwr_candidate_pane_g_ParamLimits

0xfaf8,	// (0x0005b44c) fep_hwr_candidate_pane_g

0x48f3,	// (0x00050247) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x48f3,	// (0x00050247) fep_vkb_candidate_drop_down_list_pane

0x4cf6,	// (0x0005064a) fep_vkb_candidate_pane_g3

0x4cfe,	// (0x00050652) fep_vkb_candidate_pane_g4

0x0002,

0xfb25,	// (0x0005b479) fep_vkb_candidate_pane_g

0x49fe,	// (0x00050352) cell_hwr_candidate_pane_g1_ParamLimits

0x4d15,	// (0x00050669) cell_hwr_candidate_pane_g3_ParamLimits

0x4d15,	// (0x00050669) cell_hwr_candidate_pane_g3

0x4d36,	// (0x0005068a) cell_hwr_candidate_pane_g4_ParamLimits

0x4d36,	// (0x0005068a) cell_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0005b493) cell_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0005b493) cell_hwr_candidate_pane_g

0x4d57,	// (0x000506ab) cell_vkb_candidate_pane_g3_ParamLimits

0x4d57,	// (0x000506ab) cell_vkb_candidate_pane_g3

0x4d72,	// (0x000506c6) cell_vkb_candidate_pane_g4_ParamLimits

0x4d72,	// (0x000506c6) cell_vkb_candidate_pane_g4

0xd108,	// (0x00058a5c) cell_app_pane_cp2_g1_ParamLimits

0xd108,	// (0x00058a5c) cell_app_pane_cp2_g1

0x4e75,	// (0x000507c9) cell_app_pane_cp2_g2_ParamLimits

0x4e75,	// (0x000507c9) cell_app_pane_cp2_g2

0x0001,

0xfb89,	// (0x0005b4dd) cell_app_pane_cp2_g_ParamLimits

0xfb89,	// (0x0005b4dd) cell_app_pane_cp2_g

0x4e81,	// (0x000507d5) cell_app_pane_cp2_t1_ParamLimits

0x4e81,	// (0x000507d5) cell_app_pane_cp2_t1

0x9b7a,	// (0x000554ce) grid_highlight_pane_cp1_ParamLimits

0x9b7a,	// (0x000554ce) grid_highlight_pane_cp1

0x11db,	// (0x0004cb2f) cell_hwr_candidate_pane_cp1_ParamLimits

0x11db,	// (0x0004cb2f) cell_hwr_candidate_pane_cp1

0x49fe,	// (0x00050352) fep_hwr_candidate_drop_down_list_pane_g1

0x4e93,	// (0x000507e7) fep_hwr_candidate_drop_down_list_pane_g2

0x4ea0,	// (0x000507f4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8e,	// (0x0005b4e2) fep_hwr_candidate_drop_down_list_pane_g

0x11fa,	// (0x0004cb4e) fep_hwr_candidate_drop_down_list_scroll_pane

0x1203,	// (0x0004cb57) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1203,	// (0x0004cb57) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1210,	// (0x0004cb64) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1210,	// (0x0004cb64) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x121d,	// (0x0004cb71) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x121d,	// (0x0004cb71) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4d57,	// (0x000506ab) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d57,	// (0x000506ab) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4d72,	// (0x000506c6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d72,	// (0x000506c6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x122a,	// (0x0004cb7e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x122a,	// (0x0004cb7e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1245,	// (0x0004cb99) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1245,	// (0x0004cb99) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1260,	// (0x0004cbb4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1260,	// (0x0004cbb4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb95,	// (0x0005b4e9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb95,	// (0x0005b4e9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4ead,	// (0x00050801) cell_vkb_candidate_pane_cp1_ParamLimits

0x4ead,	// (0x00050801) cell_vkb_candidate_pane_cp1

0x49fe,	// (0x00050352) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x49fe,	// (0x00050352) fep_vkb_candidate_drop_down_list_pane_g1

0x4e93,	// (0x000507e7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e93,	// (0x000507e7) fep_vkb_candidate_drop_down_list_pane_g2

0x4ea0,	// (0x000507f4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4ea0,	// (0x000507f4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8e,	// (0x0005b4e2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8e,	// (0x0005b4e2) fep_vkb_candidate_drop_down_list_pane_g

0x4ecd,	// (0x00050821) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4ecd,	// (0x00050821) fep_vkb_candidate_drop_down_list_scroll_pane

0x4eda,	// (0x0005082e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4eda,	// (0x0005082e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4ee7,	// (0x0005083b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4ee7,	// (0x0005083b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4ef3,	// (0x00050847) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4ef3,	// (0x00050847) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4d15,	// (0x00050669) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d15,	// (0x00050669) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4d36,	// (0x0005068a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d36,	// (0x0005068a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4eff,	// (0x00050853) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4eff,	// (0x00050853) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4f20,	// (0x00050874) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4f20,	// (0x00050874) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f41,	// (0x00050895) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f41,	// (0x00050895) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba6,	// (0x0005b4fa) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba6,	// (0x0005b4fa) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x90e0,	// (0x00054a34) title_pane_g1_ParamLimits

0x90f3,	// (0x00054a47) title_pane_g2_ParamLimits

0xf529,	// (0x0005ae7d) title_pane_g_ParamLimits

0xc0e6,	// (0x00057a3a) aid_call2_pane

0xc0ee,	// (0x00057a42) aid_call_pane

0xc0f6,	// (0x00057a4a) popup_clock_analogue_window_g1

0xc0f6,	// (0x00057a4a) popup_clock_analogue_window_g2

0xf29c,	// (0x0005abf0) popup_clock_analogue_window_g3

0xf2a5,	// (0x0005abf9) popup_clock_analogue_window_g4

0x8ea6,	// (0x000547fa) popup_clock_analogue_window_g5

0x0004,

0xf6c9,	// (0x0005b01d) popup_clock_analogue_window_g

0xf2ad,	// (0x0005ac01) popup_clock_analogue_window_t1

0xf2bb,	// (0x0005ac0f) clock_digital_number_pane_ParamLimits

0xf2bb,	// (0x0005ac0f) clock_digital_number_pane

0xf2c7,	// (0x0005ac1b) clock_digital_number_pane_cp02_ParamLimits

0xf2c7,	// (0x0005ac1b) clock_digital_number_pane_cp02

0xf2d3,	// (0x0005ac27) clock_digital_number_pane_cp03_ParamLimits

0xf2d3,	// (0x0005ac27) clock_digital_number_pane_cp03

0xf2df,	// (0x0005ac33) clock_digital_number_pane_cp04_ParamLimits

0xf2df,	// (0x0005ac33) clock_digital_number_pane_cp04

0xf2eb,	// (0x0005ac3f) clock_digital_separator_pane_ParamLimits

0xf2eb,	// (0x0005ac3f) clock_digital_separator_pane

0xf2f7,	// (0x0005ac4b) popup_clock_digital_window_t1_ParamLimits

0xf2f7,	// (0x0005ac4b) popup_clock_digital_window_t1

0x8ea6,	// (0x000547fa) clock_digital_number_pane_g1

0x8ea6,	// (0x000547fa) clock_digital_number_pane_g2

0x0001,

0xf6d4,	// (0x0005b028) clock_digital_number_pane_g

0x8ea6,	// (0x000547fa) clock_digital_separator_pane_g1

0x8ea6,	// (0x000547fa) clock_digital_separator_pane_g2

0x0001,

0xf6d4,	// (0x0005b028) clock_digital_separator_pane_g

0xae04,	// (0x00056758) aid_fill_nsta_ParamLimits

0xaf3a,	// (0x0005688e) indicator_nsta_pane_ParamLimits

0x08b1,	// (0x0004c205) popup_clock_analogue_window

0x08b1,	// (0x0004c205) popup_clock_digital_window

0xcd00,	// (0x00058654) grid_indicator_nsta_pane_ParamLimits

0x4184,	// (0x0004fad8) clock_nsta_pane_t2

0x0001,

0xfa78,	// (0x0005b3cc) clock_nsta_pane_t

0xf27d,	// (0x0005abd1) aid_size_max_handle

0xa01b,	// (0x0005596f) aid_size_min_handle

0xc554,	// (0x00057ea8) editor_scroll_pane

0x4f5c,	// (0x000508b0) ex_editor_pane

0x9cf8,	// (0x0005564c) scroll_pane_cp13

0x9ad1,	// (0x00055425) scroll_pane_cp14

0xc125,	// (0x00057a79) scroll_pane_cp36

0xa16e,	// (0x00055ac2) list_single_graphic_hl_pane_cp2_ParamLimits

0xa16e,	// (0x00055ac2) list_single_graphic_hl_pane_cp2

0xb784,	// (0x000570d8) list_single_graphic_hl_pane_ParamLimits

0xb784,	// (0x000570d8) list_single_graphic_hl_pane

0x8d1e,	// (0x00054672) aid_size_min_hl_cp1

0x4f64,	// (0x000508b8) list_highlight_pane_cp34_ParamLimits

0x4f64,	// (0x000508b8) list_highlight_pane_cp34

0x4fb3,	// (0x00050907) list_single_graphic_hl_pane_g1_ParamLimits

0x4fb3,	// (0x00050907) list_single_graphic_hl_pane_g1

0x8d27,	// (0x0005467b) list_single_graphic_hl_pane_g2_ParamLimits

0x8d27,	// (0x0005467b) list_single_graphic_hl_pane_g2

0x8d27,	// (0x0005467b) list_single_graphic_hl_pane_g3_ParamLimits

0x8d27,	// (0x0005467b) list_single_graphic_hl_pane_g3

0xc4df,	// (0x00057e33) list_single_graphic_hl_pane_g4_ParamLimits

0xc4df,	// (0x00057e33) list_single_graphic_hl_pane_g4

0xb83f,	// (0x00057193) list_single_graphic_hl_pane_g5_ParamLimits

0xb83f,	// (0x00057193) list_single_graphic_hl_pane_g5

0x0004,

0xfbb7,	// (0x0005b50b) list_single_graphic_hl_pane_g_ParamLimits

0xfbb7,	// (0x0005b50b) list_single_graphic_hl_pane_g

0x8d33,	// (0x00054687) list_single_graphic_hl_pane_t1_ParamLimits

0x8d33,	// (0x00054687) list_single_graphic_hl_pane_t1

0x4fc0,	// (0x00050914) aid_size_min_hl_cp2

0x4fc9,	// (0x0005091d) list_highlight_pane_cp34_cp2_ParamLimits

0x4fc9,	// (0x0005091d) list_highlight_pane_cp34_cp2

0x4fb3,	// (0x00050907) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4fb3,	// (0x00050907) list_single_graphic_hl_pane_g1_cp2

0x4fd6,	// (0x0005092a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4fd6,	// (0x0005092a) list_single_graphic_hl_pane_g2_cp2

0xd126,	// (0x00058a7a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd126,	// (0x00058a7a) list_single_graphic_hl_pane_g3_cp2

0xc027,	// (0x0005797b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc027,	// (0x0005797b) list_single_graphic_hl_pane_g4_cp2

0x4ff0,	// (0x00050944) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4ff0,	// (0x00050944) list_single_graphic_hl_pane_g5_cp2

0xa523,	// (0x00055e77) control_pane_g4_ParamLimits

0xa523,	// (0x00055e77) control_pane_g4

0x9d5e,	// (0x000556b2) bg_popup_sub_pane_cp10_ParamLimits

0x4798,	// (0x000500ec) list_choice_list_pane_ParamLimits

0x47a7,	// (0x000500fb) scroll_pane_cp23

0x959b,	// (0x00054eef) bg_popup_preview_window_pane_cp02_ParamLimits

0x4dd7,	// (0x0005072b) list_preview_fixed_pane_ParamLimits

0x4ded,	// (0x00050741) list_preview_fixed_pane_cp_ParamLimits

0x4ded,	// (0x00050741) list_preview_fixed_pane_cp

0x4df9,	// (0x0005074d) popup_preview_fixed_window_g1_ParamLimits

0x4df9,	// (0x0005074d) popup_preview_fixed_window_g1

0x4e05,	// (0x00050759) popup_preview_fixed_window_g2_ParamLimits

0x4e05,	// (0x00050759) popup_preview_fixed_window_g2

0x0002,

0xfb46,	// (0x0005b49a) popup_preview_fixed_window_g_ParamLimits

0xfb46,	// (0x0005b49a) popup_preview_fixed_window_g

0xf1f1,	// (0x0005ab45) aid_navi_side_left_pane_ParamLimits

0xf206,	// (0x0005ab5a) aid_navi_side_right_pane_ParamLimits

0xf21e,	// (0x0005ab72) navi_icon_pane_stacon_ParamLimits

0xf232,	// (0x0005ab86) navi_navi_pane_stacon_ParamLimits

0xf21e,	// (0x0005ab72) navi_text_pane_stacon_ParamLimits

0x8e9c,	// (0x000547f0) main_text_info_pane

0x501a,	// (0x0005096e) listscroll_text_info_pane

0x5022,	// (0x00050976) list_text_info_pane_ParamLimits

0x5022,	// (0x00050976) list_text_info_pane

0x5031,	// (0x00050985) scroll_pane_cp24_ParamLimits

0x5031,	// (0x00050985) scroll_pane_cp24

0xd134,	// (0x00058a88) list_text_info_pane_t1_ParamLimits

0xd134,	// (0x00058a88) list_text_info_pane_t1

0xa6cb,	// (0x0005601f) popup_fast_swap2_window_ParamLimits

0xa6cb,	// (0x0005601f) popup_fast_swap2_window

0x5083,	// (0x000509d7) aid_size_cell_fast2

0x8e9c,	// (0x000547f0) bg_popup_window_pane_cp17

0x2637,	// (0x0004df8b) heading_pane_cp2

0x263f,	// (0x0004df93) listscroll_fast2_pane

0x508d,	// (0x000509e1) grid_fast2_pane

0x5097,	// (0x000509eb) listscroll_fast2_pane_g1

0x509f,	// (0x000509f3) listscroll_fast2_pane_g2

0x0001,

0xfbc2,	// (0x0005b516) listscroll_fast2_pane_g

0x9cf8,	// (0x0005564c) scroll_pane_cp26

0x50a9,	// (0x000509fd) cell_fast2_pane_ParamLimits

0x50a9,	// (0x000509fd) cell_fast2_pane

0x50be,	// (0x00050a12) cell_fast2_pane_g1

0x50c7,	// (0x00050a1b) cell_fast2_pane_g2

0x50d0,	// (0x00050a24) cell_fast2_pane_g3

0x0002,

0xfbc7,	// (0x0005b51b) cell_fast2_pane_g

0x98fb,	// (0x0005524f) grid_highlight_pane_cp9

0x9910,	// (0x00055264) main_eswt_pane_ParamLimits

0x9910,	// (0x00055264) main_eswt_pane

0x5046,	// (0x0005099a) list_single_text_info_pane

0x50d8,	// (0x00050a2c) eswt_ctrl_button_pane

0x50d8,	// (0x00050a2c) eswt_ctrl_canvas_pane

0xd150,	// (0x00058aa4) eswt_ctrl_combo_pane

0x50d8,	// (0x00050a2c) eswt_ctrl_default_pane

0x50d8,	// (0x00050a2c) eswt_ctrl_label_pane

0x50e8,	// (0x00050a3c) eswt_ctrl_wait_pane

0xd158,	// (0x00058aac) eswt_shell_pane

0x8e9c,	// (0x000547f0) listscroll_eswt_app_pane

0x5110,	// (0x00050a64) popup_eswt_tasktip_window_ParamLimits

0x5110,	// (0x00050a64) popup_eswt_tasktip_window

0x2244,	// (0x0004db98) bg_popup_window_pane_cp18

0x5121,	// (0x00050a75) eswt_control_pane_g1_ParamLimits

0x5121,	// (0x00050a75) eswt_control_pane_g1

0x512e,	// (0x00050a82) eswt_control_pane_g2_ParamLimits

0x512e,	// (0x00050a82) eswt_control_pane_g2

0x513b,	// (0x00050a8f) eswt_control_pane_g3_ParamLimits

0x513b,	// (0x00050a8f) eswt_control_pane_g3

0x5148,	// (0x00050a9c) eswt_control_pane_g4_ParamLimits

0x5148,	// (0x00050a9c) eswt_control_pane_g4

0x0003,

0xfbce,	// (0x0005b522) eswt_control_pane_g_ParamLimits

0xfbce,	// (0x0005b522) eswt_control_pane_g

0x9b7a,	// (0x000554ce) bg_button_pane_ParamLimits

0x9b7a,	// (0x000554ce) bg_button_pane

0x9910,	// (0x00055264) common_borders_pane_copy2_ParamLimits

0x9910,	// (0x00055264) common_borders_pane_copy2

0x5155,	// (0x00050aa9) control_button_pane_g1_ParamLimits

0x5155,	// (0x00050aa9) control_button_pane_g1

0x5161,	// (0x00050ab5) control_button_pane_g2_ParamLimits

0x5161,	// (0x00050ab5) control_button_pane_g2

0x516d,	// (0x00050ac1) control_button_pane_g3_ParamLimits

0x516d,	// (0x00050ac1) control_button_pane_g3

0x0002,

0xfbd7,	// (0x0005b52b) control_button_pane_g_ParamLimits

0xfbd7,	// (0x0005b52b) control_button_pane_g

0x5181,	// (0x00050ad5) control_button_pane_t1

0x518f,	// (0x00050ae3) control_button_pane_t2

0x0001,

0xfbde,	// (0x0005b532) control_button_pane_t

0x21b8,	// (0x0004db0c) bg_button_pane_g1

0x21c0,	// (0x0004db14) bg_button_pane_g2

0x21c8,	// (0x0004db1c) bg_button_pane_g3

0x21d0,	// (0x0004db24) bg_button_pane_g4

0x21d8,	// (0x0004db2c) bg_button_pane_g5

0x21e0,	// (0x0004db34) bg_button_pane_g6

0x21e8,	// (0x0004db3c) bg_button_pane_g7

0x21f0,	// (0x0004db44) bg_button_pane_g8

0x21f8,	// (0x0004db4c) bg_button_pane_g9

0x0008,

0xf82b,	// (0x0005b17f) bg_button_pane_g

0x4753,	// (0x000500a7) common_borders_pane_ParamLimits

0x4753,	// (0x000500a7) common_borders_pane

0x5121,	// (0x00050a75) eswt_control_pane_g1_copy1_ParamLimits

0x5121,	// (0x00050a75) eswt_control_pane_g1_copy1

0x512e,	// (0x00050a82) eswt_control_pane_g2_copy1_ParamLimits

0x512e,	// (0x00050a82) eswt_control_pane_g2_copy1

0x513b,	// (0x00050a8f) eswt_control_pane_g3_copy1_ParamLimits

0x513b,	// (0x00050a8f) eswt_control_pane_g3_copy1

0x5148,	// (0x00050a9c) eswt_control_pane_g4_copy1_ParamLimits

0x5148,	// (0x00050a9c) eswt_control_pane_g4_copy1

0x478e,	// (0x000500e2) bg_eswt_ctrl_canvas_pane_g1

0x4753,	// (0x000500a7) common_borders_pane_cp2_ParamLimits

0x4753,	// (0x000500a7) common_borders_pane_cp2

0x4753,	// (0x000500a7) common_borders_pane_cp3_ParamLimits

0x4753,	// (0x000500a7) common_borders_pane_cp3

0x519d,	// (0x00050af1) separator_horizontal_pane

0x51a5,	// (0x00050af9) separator_vertical_pane

0x5121,	// (0x00050a75) eswt_control_pane_g1_copy2_ParamLimits

0x5121,	// (0x00050a75) eswt_control_pane_g1_copy2

0x512e,	// (0x00050a82) eswt_control_pane_g2_copy2_ParamLimits

0x512e,	// (0x00050a82) eswt_control_pane_g2_copy2

0x513b,	// (0x00050a8f) eswt_control_pane_g3_copy2_ParamLimits

0x513b,	// (0x00050a8f) eswt_control_pane_g3_copy2

0x5148,	// (0x00050a9c) eswt_control_pane_g4_copy2_ParamLimits

0x5148,	// (0x00050a9c) eswt_control_pane_g4_copy2

0x8e9c,	// (0x000547f0) common_borders_pane_cp4

0x51ae,	// (0x00050b02) separator_horizontal_pane_g1

0x51b7,	// (0x00050b0b) separator_horizontal_pane_g2

0x51c0,	// (0x00050b14) separator_horizontal_pane_g3

0x0002,

0xfbe3,	// (0x0005b537) separator_horizontal_pane_g

0x5121,	// (0x00050a75) eswt_control_pane_g1_copy3_ParamLimits

0x5121,	// (0x00050a75) eswt_control_pane_g1_copy3

0x512e,	// (0x00050a82) eswt_control_pane_g2_copy3_ParamLimits

0x512e,	// (0x00050a82) eswt_control_pane_g2_copy3

0x513b,	// (0x00050a8f) eswt_control_pane_g3_copy3_ParamLimits

0x513b,	// (0x00050a8f) eswt_control_pane_g3_copy3

0x5148,	// (0x00050a9c) eswt_control_pane_g4_copy3_ParamLimits

0x5148,	// (0x00050a9c) eswt_control_pane_g4_copy3

0x8e9c,	// (0x000547f0) common_borders_pane_cp5

0x51c9,	// (0x00050b1d) separator_vertical_pane_g1

0x51d2,	// (0x00050b26) separator_vertical_pane_g2

0x51db,	// (0x00050b2f) separator_vertical_pane_g3

0x0002,

0xfbea,	// (0x0005b53e) separator_vertical_pane_g

0x5121,	// (0x00050a75) eswt_control_pane_g1_copy4_ParamLimits

0x5121,	// (0x00050a75) eswt_control_pane_g1_copy4

0x512e,	// (0x00050a82) eswt_control_pane_g2_copy4_ParamLimits

0x512e,	// (0x00050a82) eswt_control_pane_g2_copy4

0x513b,	// (0x00050a8f) eswt_control_pane_g3_copy4_ParamLimits

0x513b,	// (0x00050a8f) eswt_control_pane_g3_copy4

0x5148,	// (0x00050a9c) eswt_control_pane_g4_copy4_ParamLimits

0x5148,	// (0x00050a9c) eswt_control_pane_g4_copy4

0xd178,	// (0x00058acc) eswt_ctrl_combo_button_pane

0xd180,	// (0x00058ad4) eswt_ctrl_input_pane

0xd188,	// (0x00058adc) popup_choice_list_window_cp70

0xd190,	// (0x00058ae4) eswt_ctrl_input_pane_t1

0x8e9c,	// (0x000547f0) input_focus_pane_cp70

0x4753,	// (0x000500a7) bg_button_pane_cp70_ParamLimits

0x4753,	// (0x000500a7) bg_button_pane_cp70

0xd19e,	// (0x00058af2) eswt_ctrl_combo_button_pane_g1

0x5212,	// (0x00050b66) wait_bar_pane_cp70

0x2244,	// (0x0004db98) bg_popup_window_pane_cp70_ParamLimits

0x2244,	// (0x0004db98) bg_popup_window_pane_cp70

0x521a,	// (0x00050b6e) popup_eswt_tasktip_window_t1

0x5230,	// (0x00050b84) wait_bar_pane_cp71_ParamLimits

0x5230,	// (0x00050b84) wait_bar_pane_cp71

0x523c,	// (0x00050b90) grid_eswt_app_pane

0xa060,	// (0x000559b4) scroll_pane_cp70

0xd1a6,	// (0x00058afa) cell_eswt_app_pane_ParamLimits

0xd1a6,	// (0x00058afa) cell_eswt_app_pane

0xd1d0,	// (0x00058b24) cell_eswt_app_pane_g1_ParamLimits

0xd1d0,	// (0x00058b24) cell_eswt_app_pane_g1

0xd1ff,	// (0x00058b53) cell_eswt_app_pane_g2_ParamLimits

0xd1ff,	// (0x00058b53) cell_eswt_app_pane_g2

0x0001,

0xfbf1,	// (0x0005b545) cell_eswt_app_pane_g_ParamLimits

0xfbf1,	// (0x0005b545) cell_eswt_app_pane_g

0xd223,	// (0x00058b77) cell_eswt_app_pane_t1_ParamLimits

0xd223,	// (0x00058b77) cell_eswt_app_pane_t1

0x52fa,	// (0x00050c4e) grid_highlight_pane_cp70_ParamLimits

0x52fa,	// (0x00050c4e) grid_highlight_pane_cp70

0xc45a,	// (0x00057dae) set_content_pane_g1

0xa4b5,	// (0x00055e09) status_small_volume_pane

0xb853,	// (0x000571a7) status_small_volume_pane_g1

0xb85b,	// (0x000571af) volume_small2_pane

0xb864,	// (0x000571b8) volume_small2_pane_g1

0xb86d,	// (0x000571c1) volume_small2_pane_g2

0xb876,	// (0x000571ca) volume_small2_pane_g3

0xb87f,	// (0x000571d3) volume_small2_pane_g4

0xb888,	// (0x000571dc) volume_small2_pane_g5

0xb891,	// (0x000571e5) volume_small2_pane_g6

0xb89a,	// (0x000571ee) volume_small2_pane_g7

0xb8a3,	// (0x000571f7) volume_small2_pane_g8

0xb8ac,	// (0x00057200) volume_small2_pane_g9

0xb8b5,	// (0x00057209) volume_small2_pane_g10

0x0009,

0xfbf6,	// (0x0005b54a) volume_small2_pane_g

0x4b46,	// (0x0005049a) fep_vkb_top_text_pane_g1_ParamLimits

0xd098,	// (0x000589ec) fep_vkb_top_text_pane_t1_ParamLimits

0x4e11,	// (0x00050765) popup_preview_fixed_window_g3_ParamLimits

0x4e11,	// (0x00050765) popup_preview_fixed_window_g3

0xad42,	// (0x00056696) popup_toolbar_trans_pane

0xc99d,	// (0x000582f1) aid_height_set_list_ParamLimits

0x3593,	// (0x0004eee7) aid_size_parent_ParamLimits

0x9d5e,	// (0x000556b2) list_highlight_pane_cp2_ParamLimits

0xc45a,	// (0x00057dae) set_content_pane_g1_ParamLimits

0xcb05,	// (0x00058459) list_single_image_pane_ParamLimits

0xcb05,	// (0x00058459) list_single_image_pane

0xd255,	// (0x00058ba9) aid_size_cell_image_ParamLimits

0xd255,	// (0x00058ba9) aid_size_cell_image

0xd262,	// (0x00058bb6) grid_single_image_pane_ParamLimits

0xd262,	// (0x00058bb6) grid_single_image_pane

0xd0fc,	// (0x00058a50) list_single_image_pane_g1_ParamLimits

0xd0fc,	// (0x00058a50) list_single_image_pane_g1

0x4f9f,	// (0x000508f3) list_single_image_pane_g2_ParamLimits

0x4f9f,	// (0x000508f3) list_single_image_pane_g2

0x0001,

0xfc0b,	// (0x0005b55f) list_single_image_pane_g_ParamLimits

0xfc0b,	// (0x0005b55f) list_single_image_pane_g

0x531f,	// (0x00050c73) list_single_image_pane_t1_ParamLimits

0x531f,	// (0x00050c73) list_single_image_pane_t1

0xd26e,	// (0x00058bc2) cell_image_list_pane_ParamLimits

0xd26e,	// (0x00058bc2) cell_image_list_pane

0xd282,	// (0x00058bd6) cell_image_list_pane_g1

0xd28b,	// (0x00058bdf) cell_image_list_pane_g2

0x0001,

0xfc10,	// (0x0005b564) cell_image_list_pane_g

0xd294,	// (0x00058be8) aid_size_cell_tb_trans_pane

0x9b7a,	// (0x000554ce) bg_tb_trans_pane

0xd2a6,	// (0x00058bfa) grid_tb_trans_pane

0x21b8,	// (0x0004db0c) bg_tb_trans_pane_g1

0x21c0,	// (0x0004db14) bg_tb_trans_pane_g2

0x21c8,	// (0x0004db1c) bg_tb_trans_pane_g3

0x21d0,	// (0x0004db24) bg_tb_trans_pane_g4

0x21d8,	// (0x0004db2c) bg_tb_trans_pane_g5

0x21f0,	// (0x0004db44) bg_tb_trans_pane_g6

0x21f8,	// (0x0004db4c) bg_tb_trans_pane_g7

0x21e0,	// (0x0004db34) bg_tb_trans_pane_g8

0x21e8,	// (0x0004db3c) bg_tb_trans_pane_g9

0x0008,

0xfc15,	// (0x0005b569) bg_tb_trans_pane_g

0xd2ba,	// (0x00058c0e) cell_toolbar_trans_pane_ParamLimits

0xd2ba,	// (0x00058c0e) cell_toolbar_trans_pane

0x478e,	// (0x000500e2) cell_toolbar_trans_pane_g1

0xcdc9,	// (0x0005871d) list_form2_midp_pane_t1

0xcdd7,	// (0x0005872b) list_form2_midp_pane_t2

0x0001,

0xfabe,	// (0x0005b412) list_form2_midp_pane_t

0x4375,	// (0x0004fcc9) scroll_pane_cp51_ParamLimits

0x4531,	// (0x0004fe85) form2_midp_wait_pane_g1

0x453a,	// (0x0004fe8e) form2_midp_wait_pane_g2

0x4543,	// (0x0004fe97) form2_midp_wait_pane_g3

0x0002,

0xfad3,	// (0x0005b427) form2_midp_wait_pane_g

0x9231,	// (0x00054b85) list_highlight_pane_cp21_ParamLimits

0x458b,	// (0x0004fedf) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x459a,	// (0x0004feee) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3747,	// (0x0004f09b) list_single_2graphic_im_pane_ParamLimits

0x3747,	// (0x0004f09b) list_single_2graphic_im_pane

0xd2e0,	// (0x00058c34) list_single_2graphic_im_pane_g1_ParamLimits

0xd2e0,	// (0x00058c34) list_single_2graphic_im_pane_g1

0xd2f1,	// (0x00058c45) list_single_2graphic_im_pane_g2_ParamLimits

0xd2f1,	// (0x00058c45) list_single_2graphic_im_pane_g2

0xd2fd,	// (0x00058c51) list_single_2graphic_im_pane_g3_ParamLimits

0xd2fd,	// (0x00058c51) list_single_2graphic_im_pane_g3

0x0003,

0xfc28,	// (0x0005b57c) list_single_2graphic_im_pane_g_ParamLimits

0xfc28,	// (0x0005b57c) list_single_2graphic_im_pane_g

0xd311,	// (0x00058c65) list_single_2graphic_im_pane_t1_ParamLimits

0xd311,	// (0x00058c65) list_single_2graphic_im_pane_t1

0x4e1d,	// (0x00050771) list_single_graphic_2heading_pane_fp_ParamLimits

0x4e1d,	// (0x00050771) list_single_graphic_2heading_pane_fp

0xed76,	// (0x0005a6ca) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xed76,	// (0x0005a6ca) list_single_graphic_2heading_pane_fp_g1

0x4e33,	// (0x00050787) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4e33,	// (0x00050787) list_single_graphic_2heading_pane_fp_g2

0xd0fc,	// (0x00058a50) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd0fc,	// (0x00058a50) list_single_graphic_2heading_pane_fp_g3

0x4f9f,	// (0x000508f3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4f9f,	// (0x000508f3) list_single_graphic_2heading_pane_fp_g4

0x4e3f,	// (0x00050793) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4e3f,	// (0x00050793) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb56,	// (0x0005b4aa) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb56,	// (0x0005b4aa) list_single_graphic_2heading_pane_fp_g

0xee94,	// (0x0005a7e8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xee94,	// (0x0005a7e8) list_single_graphic_2heading_pane_fp_t1

0xedae,	// (0x0005a702) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xedae,	// (0x0005a702) list_single_graphic_2heading_pane_fp_t2

0xeeaa,	// (0x0005a7fe) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xeeaa,	// (0x0005a7fe) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc31,	// (0x0005b585) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc31,	// (0x0005b585) list_single_graphic_2heading_pane_fp_t

0x481a,	// (0x0005016e) fep_hwr_write_pane_g5_ParamLimits

0x481a,	// (0x0005016e) fep_hwr_write_pane_g5

0x4826,	// (0x0005017a) fep_hwr_write_pane_g6_ParamLimits

0x4826,	// (0x0005017a) fep_hwr_write_pane_g6

0xd158,	// (0x00058aac) eswt_shell_pane_ParamLimits

0x2244,	// (0x0004db98) bg_popup_window_pane_cp18_ParamLimits

0x34db,	// (0x0004ee2f) heading_pane_cp70

0x521a,	// (0x00050b6e) popup_eswt_tasktip_window_t1_ParamLimits

0xae5f,	// (0x000567b3) aid_touch_tab_arrow_left

0xae75,	// (0x000567c9) aid_touch_tab_arrow_right

0x910b,	// (0x00054a5f) title_pane_g3_ParamLimits

0x910b,	// (0x00054a5f) title_pane_g3

0x9b39,	// (0x0005548d) set_value_pane_g1

0xad42,	// (0x00056696) popup_toolbar_trans_pane_ParamLimits

0xd294,	// (0x00058be8) aid_size_cell_tb_trans_pane_ParamLimits

0x9b7a,	// (0x000554ce) bg_tb_trans_pane_ParamLimits

0xd2a6,	// (0x00058bfa) grid_tb_trans_pane_ParamLimits

0x959b,	// (0x00054eef) cont_note_pane_ParamLimits

0x959b,	// (0x00054eef) cont_note_pane

0x9910,	// (0x00055264) cont_snote2_single_text_pane_ParamLimits

0x9910,	// (0x00055264) cont_snote2_single_text_pane

0x9910,	// (0x00055264) cont_snote2_single_graphic_pane_ParamLimits

0x9910,	// (0x00055264) cont_snote2_single_graphic_pane

0x285e,	// (0x0004e1b2) cont_note_wait_pane_ParamLimits

0x285e,	// (0x0004e1b2) cont_note_wait_pane

0x285e,	// (0x0004e1b2) cont_note_image_pane_ParamLimits

0x285e,	// (0x0004e1b2) cont_note_image_pane

0x5415,	// (0x00050d69) popup_note2_window_g1_ParamLimits

0x5415,	// (0x00050d69) popup_note2_window_g1

0xd34f,	// (0x00058ca3) popup_note2_window_t1_ParamLimits

0xd34f,	// (0x00058ca3) popup_note2_window_t1

0xd394,	// (0x00058ce8) popup_note2_window_t2_ParamLimits

0xd394,	// (0x00058ce8) popup_note2_window_t2

0xd3d9,	// (0x00058d2d) popup_note2_window_t3_ParamLimits

0xd3d9,	// (0x00058d2d) popup_note2_window_t3

0x5515,	// (0x00050e69) popup_note2_window_t4_ParamLimits

0x5515,	// (0x00050e69) popup_note2_window_t4

0x961f,	// (0x00054f73) popup_note2_window_t5_ParamLimits

0x961f,	// (0x00054f73) popup_note2_window_t5

0x0004,

0xfc3d,	// (0x0005b591) popup_note2_window_t_ParamLimits

0xfc3d,	// (0x0005b591) popup_note2_window_t

0x5544,	// (0x00050e98) popup_note2_image_window_g1_ParamLimits

0x5544,	// (0x00050e98) popup_note2_image_window_g1

0xd41e,	// (0x00058d72) popup_note2_image_window_g2_ParamLimits

0xd41e,	// (0x00058d72) popup_note2_image_window_g2

0x0001,

0xfc48,	// (0x0005b59c) popup_note2_image_window_g_ParamLimits

0xfc48,	// (0x0005b59c) popup_note2_image_window_g

0x5562,	// (0x00050eb6) popup_note2_image_window_t1_ParamLimits

0x5562,	// (0x00050eb6) popup_note2_image_window_t1

0x557a,	// (0x00050ece) popup_note2_image_window_t2_ParamLimits

0x557a,	// (0x00050ece) popup_note2_image_window_t2

0x5592,	// (0x00050ee6) popup_note2_image_window_t3_ParamLimits

0x5592,	// (0x00050ee6) popup_note2_image_window_t3

0x0002,

0xfc4d,	// (0x0005b5a1) popup_note2_image_window_t_ParamLimits

0xfc4d,	// (0x0005b5a1) popup_note2_image_window_t

0x286c,	// (0x0004e1c0) popup_note2_wait_window_g1_ParamLimits

0x286c,	// (0x0004e1c0) popup_note2_wait_window_g1

0x2878,	// (0x0004e1cc) popup_note2_wait_window_g2_ParamLimits

0x2878,	// (0x0004e1cc) popup_note2_wait_window_g2

0x2884,	// (0x0004e1d8) popup_note2_wait_window_g3_ParamLimits

0x2884,	// (0x0004e1d8) popup_note2_wait_window_g3

0x0002,

0xf80d,	// (0x0005b161) popup_note2_wait_window_g_ParamLimits

0xf80d,	// (0x0005b161) popup_note2_wait_window_g

0x55ae,	// (0x00050f02) popup_note2_wait_window_t1_ParamLimits

0x55ae,	// (0x00050f02) popup_note2_wait_window_t1

0x55cc,	// (0x00050f20) popup_note2_wait_window_t2_ParamLimits

0x55cc,	// (0x00050f20) popup_note2_wait_window_t2

0x55ea,	// (0x00050f3e) popup_note2_wait_window_t3_ParamLimits

0x55ea,	// (0x00050f3e) popup_note2_wait_window_t3

0x55fc,	// (0x00050f50) popup_note2_wait_window_t4_ParamLimits

0x55fc,	// (0x00050f50) popup_note2_wait_window_t4

0x0003,

0xfc54,	// (0x0005b5a8) popup_note2_wait_window_t_ParamLimits

0xfc54,	// (0x0005b5a8) popup_note2_wait_window_t

0x560e,	// (0x00050f62) wait_bar2_pane_ParamLimits

0x560e,	// (0x00050f62) wait_bar2_pane

0x5626,	// (0x00050f7a) popup_snote2_single_text_window_g1_ParamLimits

0x5626,	// (0x00050f7a) popup_snote2_single_text_window_g1

0x564e,	// (0x00050fa2) popup_snote2_single_text_window_t1_ParamLimits

0x564e,	// (0x00050fa2) popup_snote2_single_text_window_t1

0x569a,	// (0x00050fee) popup_snote2_single_text_window_t2_ParamLimits

0x569a,	// (0x00050fee) popup_snote2_single_text_window_t2

0x56e6,	// (0x0005103a) popup_snote2_single_text_window_t3_ParamLimits

0x56e6,	// (0x0005103a) popup_snote2_single_text_window_t3

0x5727,	// (0x0005107b) popup_snote2_single_text_window_t4_ParamLimits

0x5727,	// (0x0005107b) popup_snote2_single_text_window_t4

0x575d,	// (0x000510b1) popup_snote2_single_text_window_t5_ParamLimits

0x575d,	// (0x000510b1) popup_snote2_single_text_window_t5

0x0004,

0xfc5d,	// (0x0005b5b1) popup_snote2_single_text_window_t_ParamLimits

0xfc5d,	// (0x0005b5b1) popup_snote2_single_text_window_t

0xd430,	// (0x00058d84) popup_snote2_single_graphic_window_g1_ParamLimits

0xd430,	// (0x00058d84) popup_snote2_single_graphic_window_g1

0x57b0,	// (0x00051104) popup_snote2_single_graphic_window_g2_ParamLimits

0x57b0,	// (0x00051104) popup_snote2_single_graphic_window_g2

0x0001,

0xfc68,	// (0x0005b5bc) popup_snote2_single_graphic_window_g_ParamLimits

0xfc68,	// (0x0005b5bc) popup_snote2_single_graphic_window_g

0x57d8,	// (0x0005112c) popup_snote2_single_graphic_window_t1_ParamLimits

0x57d8,	// (0x0005112c) popup_snote2_single_graphic_window_t1

0x5824,	// (0x00051178) popup_snote2_single_graphic_window_t2_ParamLimits

0x5824,	// (0x00051178) popup_snote2_single_graphic_window_t2

0x56e6,	// (0x0005103a) popup_snote2_single_graphic_window_t3_ParamLimits

0x56e6,	// (0x0005103a) popup_snote2_single_graphic_window_t3

0x5727,	// (0x0005107b) popup_snote2_single_graphic_window_t4_ParamLimits

0x5727,	// (0x0005107b) popup_snote2_single_graphic_window_t4

0x575d,	// (0x000510b1) popup_snote2_single_graphic_window_t5_ParamLimits

0x575d,	// (0x000510b1) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6d,	// (0x0005b5c1) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6d,	// (0x0005b5c1) popup_snote2_single_graphic_window_t

0x4232,	// (0x0004fb86) clock_nsta_pane_cp2_t1

0x4232,	// (0x0004fb86) clock_nsta_pane_cp2_t2

0x0001,

0xfa94,	// (0x0005b3e8) clock_nsta_pane_cp2_t

0xe932,	// (0x0005a286) form_field_data_wide_pane_g1_ParamLimits

0x9b88,	// (0x000554dc) form_field_data_wide_pane_g2_ParamLimits

0x9b88,	// (0x000554dc) form_field_data_wide_pane_g2

0x9b94,	// (0x000554e8) form_field_data_wide_pane_g3_ParamLimits

0x9b94,	// (0x000554e8) form_field_data_wide_pane_g3

0x0002,

0xf64c,	// (0x0005afa0) form_field_data_wide_pane_g_ParamLimits

0xf64c,	// (0x0005afa0) form_field_data_wide_pane_g

0xccea,	// (0x0005863e) grid_touch_3_pane_ParamLimits

0xccea,	// (0x0005863e) grid_touch_3_pane

0xd458,	// (0x00058dac) cell_touch_3_pane_ParamLimits

0xd458,	// (0x00058dac) cell_touch_3_pane

0x478e,	// (0x000500e2) cell_touch_3_pane_g1

0x478e,	// (0x000500e2) cell_touch_3_pane_g2

0x0001,

0xfb19,	// (0x0005b46d) cell_touch_3_pane_g

0x9677,	// (0x00054fcb) cont_query_data_pane

0x967f,	// (0x00054fd3) cont_query_data_pane_cp1

0x589e,	// (0x000511f2) button_value_adjust_pane_cp7

0x58a6,	// (0x000511fa) query_popup_pane_cp3

0xc157,	// (0x00057aab) bg_popup_sub_pane_cp22_ParamLimits

0xa20d,	// (0x00055b61) navi_navi_volume_pane_cp2

0xa21c,	// (0x00055b70) popup_side_volume_key_window_g2

0xa22b,	// (0x00055b7f) popup_side_volume_key_window_g3

0x0002,

0xf6e2,	// (0x0005b036) popup_side_volume_key_window_g

0xa23a,	// (0x00055b8e) popup_side_volume_key_window_t2

0x0001,

0xf6e9,	// (0x0005b03d) popup_side_volume_key_window_t

0xa2ff,	// (0x00055c53) popup_side_volume_key_window_ParamLimits

0x87ce,	// (0x00054122) list_double_graphic_pane_g4_ParamLimits

0x87ce,	// (0x00054122) list_double_graphic_pane_g4

0xcaf1,	// (0x00058445) list_single_2heading_msg_pane_ParamLimits

0xcaf1,	// (0x00058445) list_single_2heading_msg_pane

0xb8be,	// (0x00057212) list_single_2heading_msg_pane_g1_ParamLimits

0xb8be,	// (0x00057212) list_single_2heading_msg_pane_g1

0xb8ca,	// (0x0005721e) list_single_2heading_msg_pane_g2_ParamLimits

0xb8ca,	// (0x0005721e) list_single_2heading_msg_pane_g2

0xb8dd,	// (0x00057231) list_single_2heading_msg_pane_g3_ParamLimits

0xb8dd,	// (0x00057231) list_single_2heading_msg_pane_g3

0xb8e9,	// (0x0005723d) list_single_2heading_msg_pane_g4_ParamLimits

0xb8e9,	// (0x0005723d) list_single_2heading_msg_pane_g4

0x0003,

0xfc78,	// (0x0005b5cc) list_single_2heading_msg_pane_g_ParamLimits

0xfc78,	// (0x0005b5cc) list_single_2heading_msg_pane_g

0x8d49,	// (0x0005469d) list_single_2heading_msg_pane_t1_ParamLimits

0x8d49,	// (0x0005469d) list_single_2heading_msg_pane_t1

0x8d71,	// (0x000546c5) list_single_2heading_msg_pane_t2_ParamLimits

0x8d71,	// (0x000546c5) list_single_2heading_msg_pane_t2

0x8ddc,	// (0x00054730) list_single_2heading_msg_pane_t3_ParamLimits

0x8ddc,	// (0x00054730) list_single_2heading_msg_pane_t3

0xeeca,	// (0x0005a81e) list_single_2heading_msg_pane_t4_ParamLimits

0xeeca,	// (0x0005a81e) list_single_2heading_msg_pane_t4

0x0003,

0xfc81,	// (0x0005b5d5) list_single_2heading_msg_pane_t_ParamLimits

0xfc81,	// (0x0005b5d5) list_single_2heading_msg_pane_t

0x9117,	// (0x00054a6b) title_pane_g4_ParamLimits

0x9117,	// (0x00054a6b) title_pane_g4

0xf142,	// (0x0005aa96) title_pane_stacon_g3_ParamLimits

0xf142,	// (0x0005aa96) title_pane_stacon_g3

0x53d8,	// (0x00050d2c) list_single_2graphic_im_pane_g4_ParamLimits

0x53d8,	// (0x00050d2c) list_single_2graphic_im_pane_g4

0xc84a,	// (0x0005819e) popup_side_volume_key_window_cp

0x3a64,	// (0x0004f3b8) main_idle_act2_pane_t1

0x094e,	// (0x0004c2a2) toolbar_button_pane_g10

0x9a9b,	// (0x000553ef) popup_toolbar_window_cp1

0x4223,	// (0x0004fb77) clock_nsta_pane_cp_t1

0x4223,	// (0x0004fb77) clock_nsta_pane_cp_t2

0x0001,

0xfa8f,	// (0x0005b3e3) clock_nsta_pane_cp_t

0xa20d,	// (0x00055b61) navi_navi_volume_pane_cp2_ParamLimits

0xf316,	// (0x0005ac6a) popup_side_volume_key_window_g1_ParamLimits

0xa21c,	// (0x00055b70) popup_side_volume_key_window_g2_ParamLimits

0xa22b,	// (0x00055b7f) popup_side_volume_key_window_g3_ParamLimits

0xf6e2,	// (0x0005b036) popup_side_volume_key_window_g_ParamLimits

0x0f1b,	// (0x0004c86f) fep_hwr_aid_pane

0xcf4c,	// (0x000588a0) bg_fep_hwr_top_pane_g4_ParamLimits

0x47ea,	// (0x0005013e) fep_hwr_top_pane_g1_ParamLimits

0x47fc,	// (0x00050150) fep_hwr_top_pane_g2_ParamLimits

0x0fd4,	// (0x0004c928) fep_hwr_top_pane_g3_ParamLimits

0xfae4,	// (0x0005b438) fep_hwr_top_pane_g_ParamLimits

0x0fe9,	// (0x0004c93d) fep_hwr_top_text_pane_ParamLimits

0x3068,	// (0x0004e9bc) aid_touch_tab_arrow_arrow_2

0x3071,	// (0x0004e9c5) aid_touch_tab_arrow_left_2

0x0f2f,	// (0x0004c883) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0f66,	// (0x0004c8ba) fep_hwr_prediction_pane

0x4955,	// (0x000502a9) fep_vkb_prediction_pane

0xd078,	// (0x000589cc) fep_vkb_side_pane_g3_ParamLimits

0xd078,	// (0x000589cc) fep_vkb_side_pane_g3

0x49fe,	// (0x00050352) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4e93,	// (0x000507e7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4ea0,	// (0x000507f4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8e,	// (0x0005b4e2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x58cb,	// (0x0005121f) fep_hwr_prediction_pane_g1

0x1316,	// (0x0004cc6a) fep_hwr_prediction_pane_g2

0x131e,	// (0x0004cc72) fep_hwr_prediction_pane_g3

0x1326,	// (0x0004cc7a) fep_hwr_prediction_pane_g4

0x0003,

0xfc8a,	// (0x0005b5de) fep_hwr_prediction_pane_g

0x58cb,	// (0x0005121f) fep_vkb_prediction_pane_g1

0x58d5,	// (0x00051229) fep_vkb_prediction_pane_g2

0x58dd,	// (0x00051231) fep_vkb_prediction_pane_g3

0x58e5,	// (0x00051239) fep_vkb_prediction_pane_g4

0x0003,

0xfc93,	// (0x0005b5e7) fep_vkb_prediction_pane_g

0xb71a,	// (0x0005706e) slider_set_pane_g3

0xb72e,	// (0x00057082) slider_set_pane_g4

0xb746,	// (0x0005709a) slider_set_pane_g5

0xb71a,	// (0x0005706e) slider_set_pane_g6

0xb75c,	// (0x000570b0) slider_set_pane_g7

0x36f4,	// (0x0004f048) slider_form_pane_g3

0x36fd,	// (0x0004f051) slider_form_pane_g4

0x3705,	// (0x0004f059) slider_form_pane_g5

0x36f4,	// (0x0004f048) slider_form_pane_g6

0xcae8,	// (0x0005843c) slider_form_pane_g7

0x3d10,	// (0x0004f664) slider_set_pane_vc_g3

0x3d19,	// (0x0004f66d) slider_set_pane_vc_g4

0x3d22,	// (0x0004f676) slider_set_pane_vc_g5

0x3d10,	// (0x0004f664) slider_set_pane_vc_g6

0x3d2b,	// (0x0004f67f) slider_set_pane_vc_g7

0x3ee1,	// (0x0004f835) slider_form_pane_vc_g1

0x3eea,	// (0x0004f83e) slider_form_pane_vc_g2

0x3ef3,	// (0x0004f847) slider_form_pane_vc_g3

0x3ee1,	// (0x0004f835) slider_form_pane_vc_g4

0x3efc,	// (0x0004f850) slider_form_pane_vc_g5

0x0004,

0xfa61,	// (0x0005b3b5) slider_form_pane_vc_g

0x8e9c,	// (0x000547f0) main_idle_act3_pane

0x58ed,	// (0x00051241) ai3_links_pane

0xd4a1,	// (0x00058df5) popup_ai3_data_window_ParamLimits

0xd4a1,	// (0x00058df5) popup_ai3_data_window

0x8e9c,	// (0x000547f0) grid_ai3_links_pane

0xd4b9,	// (0x00058e0d) cell_ai3_links_pane_ParamLimits

0xd4b9,	// (0x00058e0d) cell_ai3_links_pane

0x5926,	// (0x0005127a) bg_popup_sub_pane_cp11

0x5933,	// (0x00051287) cell_ai3_links_pane_g1

0x8e9c,	// (0x000547f0) bg_popup_sub_pane_cp12

0x5958,	// (0x000512ac) heading_ai3_data_pane

0x5960,	// (0x000512b4) list_ai3_gene_pane

0x596c,	// (0x000512c0) popup_ai3_data_window_g1

0x5974,	// (0x000512c8) heading_ai3_data_pane_g1

0x597c,	// (0x000512d0) heading_ai3_data_pane_t1

0xd4d3,	// (0x00058e27) list_double_ai3_gene_pane_ParamLimits

0xd4d3,	// (0x00058e27) list_double_ai3_gene_pane

0x5997,	// (0x000512eb) list_single_ai3_gene_pane_ParamLimits

0x5997,	// (0x000512eb) list_single_ai3_gene_pane

0x4753,	// (0x000500a7) list_highlight_pane_cp7_ParamLimits

0x4753,	// (0x000500a7) list_highlight_pane_cp7

0x59a4,	// (0x000512f8) list_single_a13_gene_pane_t1_ParamLimits

0x59a4,	// (0x000512f8) list_single_a13_gene_pane_t1

0x59bb,	// (0x0005130f) list_single_ai3_gene_pane_g1

0x59c4,	// (0x00051318) list_single_ai3_gene_pane_g2

0x0001,

0xfc9c,	// (0x0005b5f0) list_single_ai3_gene_pane_g

0x59cc,	// (0x00051320) list_double_ai3_gene_pane_g1_ParamLimits

0x59cc,	// (0x00051320) list_double_ai3_gene_pane_g1

0xd4e0,	// (0x00058e34) list_double_ai3_gene_pane_t1_ParamLimits

0xd4e0,	// (0x00058e34) list_double_ai3_gene_pane_t1

0x59f4,	// (0x00051348) list_double_ai3_gene_pane_t2_ParamLimits

0x59f4,	// (0x00051348) list_double_ai3_gene_pane_t2

0x5a09,	// (0x0005135d) list_double_ai3_gene_pane_t3_ParamLimits

0x5a09,	// (0x0005135d) list_double_ai3_gene_pane_t3

0x0002,

0xfca1,	// (0x0005b5f5) list_double_ai3_gene_pane_t_ParamLimits

0xfca1,	// (0x0005b5f5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xeec0,	// (0x0005a814) aid_size_min_col_2

0xd48b,	// (0x00058ddf) aid_size_min_msg_ParamLimits

0xd48b,	// (0x00058ddf) aid_size_min_msg

0xd08c,	// (0x000589e0) fep_vkb_top_text_pane_g2_ParamLimits

0xd08c,	// (0x000589e0) fep_vkb_top_text_pane_g2

0x0001,

0xfb14,	// (0x0005b468) fep_vkb_top_text_pane_g_ParamLimits

0xfb14,	// (0x0005b468) fep_vkb_top_text_pane_g

0x8e9c,	// (0x000547f0) main_hc_apps_shell_pane

0x5a26,	// (0x0005137a) grid_hc_apps_pane_ParamLimits

0x5a26,	// (0x0005137a) grid_hc_apps_pane

0x5a38,	// (0x0005138c) list_hc_apps_pane

0x5a40,	// (0x00051394) scroll_pane_cp37_ParamLimits

0x5a40,	// (0x00051394) scroll_pane_cp37

0xd4fc,	// (0x00058e50) cell_hc_apps_pane_ParamLimits

0xd4fc,	// (0x00058e50) cell_hc_apps_pane

0xd5ba,	// (0x00058f0e) cell_hc_apps_pane_g1_ParamLimits

0xd5ba,	// (0x00058f0e) cell_hc_apps_pane_g1

0x5b2a,	// (0x0005147e) cell_hc_apps_pane_g2_ParamLimits

0x5b2a,	// (0x0005147e) cell_hc_apps_pane_g2

0x5b46,	// (0x0005149a) cell_hc_apps_pane_g3_ParamLimits

0x5b46,	// (0x0005149a) cell_hc_apps_pane_g3

0x0002,

0xfca8,	// (0x0005b5fc) cell_hc_apps_pane_g_ParamLimits

0xfca8,	// (0x0005b5fc) cell_hc_apps_pane_g

0xd5e6,	// (0x00058f3a) cell_hc_apps_pane_t1_ParamLimits

0xd5e6,	// (0x00058f3a) cell_hc_apps_pane_t1

0x959b,	// (0x00054eef) grid_highlight_pane_cp10_ParamLimits

0x959b,	// (0x00054eef) grid_highlight_pane_cp10

0xd624,	// (0x00058f78) list_single_hc_apps_pane_ParamLimits

0xd624,	// (0x00058f78) list_single_hc_apps_pane

0xd654,	// (0x00058fa8) list_single_hc_apps_pane_g1

0xb901,	// (0x00057255) list_single_hc_apps_pane_g2

0x0001,

0xfcaf,	// (0x0005b603) list_single_hc_apps_pane_g

0xb91a,	// (0x0005726e) list_single_hc_apps_pane_g2_copy1

0x8e4a,	// (0x0005479e) list_single_hc_apps_pane_t1

0x9231,	// (0x00054b85) bg_set_opt_pane_cp_ParamLimits

0x923f,	// (0x00054b93) setting_slider_pane_t1_ParamLimits

0x9258,	// (0x00054bac) setting_slider_pane_t2_ParamLimits

0x9272,	// (0x00054bc6) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0005ae8d) setting_slider_pane_t_ParamLimits

0x928a,	// (0x00054bde) slider_set_pane_ParamLimits

0xf51a,	// (0x0005ae6e) control_pane_g5_ParamLimits

0xf51a,	// (0x0005ae6e) control_pane_g5

0xc96a,	// (0x000582be) slider_set_pane_g1_ParamLimits

0x0c1c,	// (0x0004c570) slider_set_pane_g2_ParamLimits

0xb71a,	// (0x0005706e) slider_set_pane_g3_ParamLimits

0xb72e,	// (0x00057082) slider_set_pane_g4_ParamLimits

0xb746,	// (0x0005709a) slider_set_pane_g5_ParamLimits

0xb71a,	// (0x0005706e) slider_set_pane_g6_ParamLimits

0xb75c,	// (0x000570b0) slider_set_pane_g7_ParamLimits

0xf929,	// (0x0005b27d) slider_set_pane_g_ParamLimits

0xc405,	// (0x00057d59) navi_icon_text_pane_ParamLimits

0xae28,	// (0x0005677c) aid_fill_nsta_2_ParamLimits

0xae5f,	// (0x000567b3) aid_touch_tab_arrow_left_ParamLimits

0xae75,	// (0x000567c9) aid_touch_tab_arrow_right_ParamLimits

0xaf10,	// (0x00056864) clock_nsta_pane_ParamLimits

0x304a,	// (0x0004e99e) navi_icon_pane_g1_ParamLimits

0x3056,	// (0x0004e9aa) navi_text_pane_t1_ParamLimits

0x4333,	// (0x0004fc87) navi_icon_text_pane_g1_ParamLimits

0x433f,	// (0x0004fc93) navi_icon_text_pane_t1_ParamLimits

0xd654,	// (0x00058fa8) list_single_hc_apps_pane_g1_ParamLimits

0xb901,	// (0x00057255) list_single_hc_apps_pane_g2_ParamLimits

0xfcaf,	// (0x0005b603) list_single_hc_apps_pane_g_ParamLimits

0xb91a,	// (0x0005726e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8e4a,	// (0x0005479e) list_single_hc_apps_pane_t1_ParamLimits

0x9010,	// (0x00054964) popup_toolbar2_fixed_window_ParamLimits

0x9010,	// (0x00054964) popup_toolbar2_fixed_window

0xad38,	// (0x0005668c) popup_toolbar2_float_window

0x8e9c,	// (0x000547f0) bg_popup_sub_pane_cp27

0x5c24,	// (0x00051578) grid_toolbar2_float_pane

0x8e9c,	// (0x000547f0) bg_popup_sub_pane_cp26

0x5c24,	// (0x00051578) grid_toolbar2_fixed_pane

0xd66d,	// (0x00058fc1) cell_toolbar2_fixed_pane_ParamLimits

0xd66d,	// (0x00058fc1) cell_toolbar2_fixed_pane

0xd687,	// (0x00058fdb) cell_toolbar2_fixed_pane_g1

0x2138,	// (0x0004da8c) toolbar2_fixed_button_pane

0x21b8,	// (0x0004db0c) toolbar2_fixed_button_pane_g1

0x21c0,	// (0x0004db14) toolbar2_fixed_button_pane_g2

0x21c8,	// (0x0004db1c) toolbar2_fixed_button_pane_g3

0x21d0,	// (0x0004db24) toolbar2_fixed_button_pane_g4

0x21d8,	// (0x0004db2c) toolbar2_fixed_button_pane_g5

0x21e0,	// (0x0004db34) toolbar2_fixed_button_pane_g6

0x21e8,	// (0x0004db3c) toolbar2_fixed_button_pane_g7

0x21f0,	// (0x0004db44) toolbar2_fixed_button_pane_g8

0x21f8,	// (0x0004db4c) toolbar2_fixed_button_pane_g9

0x0008,

0xf82b,	// (0x0005b17f) toolbar2_fixed_button_pane_g

0x5c45,	// (0x00051599) cell_toolbar2_float_pane_ParamLimits

0x5c45,	// (0x00051599) cell_toolbar2_float_pane

0x5c56,	// (0x000515aa) cell_toolbar2_float_pane_g1

0x2138,	// (0x0004da8c) toolbar2_fixed_button_pane_cp

0xcf74,	// (0x000588c8) fep_vkb_accented_list_pane_ParamLimits

0xcf74,	// (0x000588c8) fep_vkb_accented_list_pane

0x1137,	// (0x0004ca8b) bg_popup_fep_shadow_pane_g9

0xc554,	// (0x00057ea8) bg_popup_fep_shadow_pane_cp3

0x9cdf,	// (0x00055633) list_accented_list_pane

0x5c5f,	// (0x000515b3) list_single_accented_list_pane_ParamLimits

0x5c5f,	// (0x000515b3) list_single_accented_list_pane

0xc554,	// (0x00057ea8) list_highlight_pane_cp10

0x5c70,	// (0x000515c4) list_single_accented_list_pane_t1

0xac62,	// (0x000565b6) popup_slider_window_ParamLimits

0xac62,	// (0x000565b6) popup_slider_window

0x58ae,	// (0x00051202) aid_indentation_list_msg

0xd778,	// (0x000590cc) bg_popup_window_pane_cp19

0x5d96,	// (0x000516ea) popup_slider_window_g1

0x5db2,	// (0x00051706) popup_slider_window_g2

0x5dce,	// (0x00051722) popup_slider_window_g3

0x0005,

0xfcb4,	// (0x0005b608) popup_slider_window_g

0x5e34,	// (0x00051788) popup_slider_window_t1

0x5ea8,	// (0x000517fc) small_volume_slider_vertical_pane

0x478e,	// (0x000500e2) small_volume_slider_vertical_pane_g1

0x478e,	// (0x000500e2) small_volume_slider_vertical_pane_g2

0x5ec4,	// (0x00051818) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc6,	// (0x0005b61a) small_volume_slider_vertical_pane_g

0x8f54,	// (0x000548a8) area_side_right_pane_ParamLimits

0x8f54,	// (0x000548a8) area_side_right_pane

0xb936,	// (0x0005728a) aid_size_side_button_ParamLimits

0xb936,	// (0x0005728a) aid_size_side_button

0xb94f,	// (0x000572a3) grid_sctrl_middle_pane_ParamLimits

0xb94f,	// (0x000572a3) grid_sctrl_middle_pane

0x1396,	// (0x0004ccea) sctrl_sk_bottom_pane

0x13a7,	// (0x0004ccfb) sctrl_sk_top_pane

0x13b9,	// (0x0004cd0d) aid_touch_sctrl_top

0x959b,	// (0x00054eef) bg_sctrl_sk_pane_ParamLimits

0x959b,	// (0x00054eef) bg_sctrl_sk_pane

0x13c6,	// (0x0004cd1a) sctrl_sk_top_pane_g1

0x13d3,	// (0x0004cd27) sctrl_sk_top_pane_t1

0x13b9,	// (0x0004cd0d) aid_touch_sctrl_bottom

0x959b,	// (0x00054eef) bg_sctrl_sk_pane_cp_ParamLimits

0x959b,	// (0x00054eef) bg_sctrl_sk_pane_cp

0x13ee,	// (0x0004cd42) sctrl_sk_bottom_pane_g1

0x13d3,	// (0x0004cd27) sctrl_sk_bottom_pane_t1

0xb969,	// (0x000572bd) cell_sctrl_middle_pane_ParamLimits

0xb969,	// (0x000572bd) cell_sctrl_middle_pane

0xb97a,	// (0x000572ce) aid_touch_sctrl_middle_ParamLimits

0xb97a,	// (0x000572ce) aid_touch_sctrl_middle

0xb987,	// (0x000572db) bg_sctrl_middle_pane_ParamLimits

0xb987,	// (0x000572db) bg_sctrl_middle_pane

0x5f4c,	// (0x000518a0) cell_sctrl_middle_pane_g1_ParamLimits

0x5f4c,	// (0x000518a0) cell_sctrl_middle_pane_g1

0xb995,	// (0x000572e9) cell_sctrl_middle_pane_g2_ParamLimits

0xb995,	// (0x000572e9) cell_sctrl_middle_pane_g2

0x0001,

0xfcd2,	// (0x0005b626) cell_sctrl_middle_pane_g_ParamLimits

0xfcd2,	// (0x0005b626) cell_sctrl_middle_pane_g

0x21b8,	// (0x0004db0c) bg_sctrl_middle_pane_g1

0x21c0,	// (0x0004db14) bg_sctrl_middle_pane_g2

0x21c8,	// (0x0004db1c) bg_sctrl_middle_pane_g3

0x21d0,	// (0x0004db24) bg_sctrl_middle_pane_g4

0x21d8,	// (0x0004db2c) bg_sctrl_middle_pane_g5

0x21e0,	// (0x0004db34) bg_sctrl_middle_pane_g6

0x21e8,	// (0x0004db3c) bg_sctrl_middle_pane_g7

0x21f0,	// (0x0004db44) bg_sctrl_middle_pane_g8

0x0007,

0xfcd7,	// (0x0005b62b) bg_sctrl_middle_pane_g

0x21f8,	// (0x0004db4c) bg_sctrl_middle_pane_g8_copy1

0x21b8,	// (0x0004db0c) bg_sctrl_sk_pane_g1

0x21c0,	// (0x0004db14) bg_sctrl_sk_pane_g2

0x21c8,	// (0x0004db1c) bg_sctrl_sk_pane_g3

0x0008,

0xf82b,	// (0x0005b17f) bg_sctrl_sk_pane_g

0x9a61,	// (0x000553b5) aid_size_touch_scroll_bar

0x21d0,	// (0x0004db24) bg_sctrl_sk_pane_g4

0x21d8,	// (0x0004db2c) bg_sctrl_sk_pane_g5

0x21e0,	// (0x0004db34) bg_sctrl_sk_pane_g6

0x21e8,	// (0x0004db3c) bg_sctrl_sk_pane_g7

0x21f0,	// (0x0004db44) bg_sctrl_sk_pane_g8

0x21f8,	// (0x0004db4c) bg_sctrl_sk_pane_g9

0x00d1,	// (0x0004ba25) popup_fep_china_hwr2_fs_candidate_window

0xa728,	// (0x0005607c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa728,	// (0x0005607c) popup_fep_china_hwr2_fs_control_window

0x49fe,	// (0x00050352) sctrl_sk_top_pane_g2

0x0001,

0xfccd,	// (0x0005b621) sctrl_sk_top_pane_g

0xd830,	// (0x00059184) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd830,	// (0x00059184) aid_fep_china_hwr2_fs_cell

0xd844,	// (0x00059198) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd844,	// (0x00059198) bg_popup_fep_shadow_pane_cp4

0xd85b,	// (0x000591af) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd85b,	// (0x000591af) bg_popup_fep_shadow_pane_cp5

0xd86d,	// (0x000591c1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd86d,	// (0x000591c1) popup_fep_china_hwr2_fs_control_bar_grid

0xd881,	// (0x000591d5) popup_fep_china_hwr2_fs_control_funtion_grid

0x5f20,	// (0x00051874) aid_fep_china_hwr2_fs_candi_cell

0x8e9c,	// (0x000547f0) bg_popup_fep_shadow_pane_cp6

0x5f2a,	// (0x0005187e) popup_fep_china_hwr2_fs_candidate_grid

0xd889,	// (0x000591dd) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd889,	// (0x000591dd) cell_fep_china_hwr2_fs_funtion_grid

0x478e,	// (0x000500e2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5f4c,	// (0x000518a0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5f4c,	// (0x000518a0) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5f5a,	// (0x000518ae) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5f5a,	// (0x000518ae) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce8,	// (0x0005b63c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce8,	// (0x0005b63c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8a1,	// (0x000591f5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8a1,	// (0x000591f5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8b6,	// (0x0005920a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8b6,	// (0x0005920a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfced,	// (0x0005b641) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfced,	// (0x0005b641) cell_fep_china_hwr2_fs_funtion_grid_t

0x5fa1,	// (0x000518f5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5fa9,	// (0x000518fd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5fb1,	// (0x00051905) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf2,	// (0x0005b646) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5fb9,	// (0x0005190d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5fb9,	// (0x0005190d) cell_fep_china_hwr2_fs_candidate_grid

0x5fd2,	// (0x00051926) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5fda,	// (0x0005192e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x478e,	// (0x000500e2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x478e,	// (0x000500e2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb19,	// (0x0005b46d) cell_fep_china_hwr2_fs_candidate_grid_g

0x5fe2,	// (0x00051936) cell_fep_china_hwr2_fs_candidate_grid_t1

0x06d0,	// (0x0004c024) clock_nsta_pane_cp_24_ParamLimits

0x06d0,	// (0x0004c024) clock_nsta_pane_cp_24

0x074e,	// (0x0004c0a2) indicator_nsta_pane_cp_24_ParamLimits

0x074e,	// (0x0004c0a2) indicator_nsta_pane_cp_24

0x2ec6,	// (0x0004e81a) heading_pane_g1

0x0001,

0xf890,	// (0x0005b1e4) heading_pane_g

0x38ad,	// (0x0004f201) grid_sct_catagory_button_pane

0x38dd,	// (0x0004f231) scroll_pane_cp5_ParamLimits

0x4381,	// (0x0004fcd5) button_value_adjust_pane_cp5_ParamLimits

0x4381,	// (0x0004fcd5) button_value_adjust_pane_cp5

0x4460,	// (0x0004fdb4) form2_midp_time_pane_ParamLimits

0x5ff0,	// (0x00051944) cell_sct_catagory_button_pane_ParamLimits

0x5ff0,	// (0x00051944) cell_sct_catagory_button_pane

0x4753,	// (0x000500a7) bg_button_pane_cp01_ParamLimits

0x4753,	// (0x000500a7) bg_button_pane_cp01

0x478e,	// (0x000500e2) cell_sct_catagory_button_pane_g1

0xacdb,	// (0x0005662f) popup_tb_extension_window

0xd8d2,	// (0x00059226) aid_size_cell_ext_ParamLimits

0xd8d2,	// (0x00059226) aid_size_cell_ext

0x9910,	// (0x00055264) bg_tb_trans_pane_cp1_ParamLimits

0x9910,	// (0x00055264) bg_tb_trans_pane_cp1

0xd8f8,	// (0x0005924c) grid_tb_ext_pane_ParamLimits

0xd8f8,	// (0x0005924c) grid_tb_ext_pane

0xd937,	// (0x0005928b) cell_tb_ext_pane_ParamLimits

0xd937,	// (0x0005928b) cell_tb_ext_pane

0xd95f,	// (0x000592b3) cell_tb_ext_pane_g1_ParamLimits

0xd95f,	// (0x000592b3) cell_tb_ext_pane_g1

0x6086,	// (0x000519da) cell_tb_ext_pane_t1

0x959b,	// (0x00054eef) list_highlight_pane_cp11_ParamLimits

0x959b,	// (0x00054eef) list_highlight_pane_cp11

0x9025,	// (0x00054979) popup_uni_indicator_window_ParamLimits

0x9025,	// (0x00054979) popup_uni_indicator_window

0x9b7a,	// (0x000554ce) bg_popup_sub_pane_cp14

0xd97c,	// (0x000592d0) list_uniindi_pane

0xd988,	// (0x000592dc) uniindi_top_pane

0x959b,	// (0x00054eef) bg_uniindi_top_pane

0xd9a7,	// (0x000592fb) uniindi_top_pane_g1

0xd9bd,	// (0x00059311) uniindi_top_pane_g2

0x0003,

0xfcf9,	// (0x0005b64d) uniindi_top_pane_g

0xd9da,	// (0x0005932e) uniindi_top_pane_t1

0x6137,	// (0x00051a8b) list_single_uniindi_pane_ParamLimits

0x6137,	// (0x00051a8b) list_single_uniindi_pane

0x478e,	// (0x000500e2) bg_uniindi_top_pane_g1

0x614a,	// (0x00051a9e) list_single_uniindi_pane_g1

0x615d,	// (0x00051ab1) list_single_uniindi_pane_t1

0x8e9c,	// (0x000547f0) control_bg_pane

0x6182,	// (0x00051ad6) bg_sctrl_sk_pane_cp1

0x618b,	// (0x00051adf) bg_sctrl_sk_pane_cp2

0x6194,	// (0x00051ae8) control_bg_pane_g1

0x619d,	// (0x00051af1) control_bg_pane_g2

0x0001,

0xfd02,	// (0x0005b656) control_bg_pane_g

0x41c7,	// (0x0004fb1b) cell_indicator_nsta_pane_g1_ParamLimits

0xcd27,	// (0x0005867b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7d,	// (0x0005b3d1) cell_indicator_nsta_pane_g_ParamLimits

0xed4c,	// (0x0005a6a0) form2_midp_time_pane_t1_ParamLimits

0x0f0d,	// (0x0004c861) main_idle_act4_pane_ParamLimits

0x0f0d,	// (0x0004c861) main_idle_act4_pane

0xacdb,	// (0x0005662f) popup_tb_extension_window_ParamLimits

0xd91d,	// (0x00059271) tb_ext_find_pane_ParamLimits

0xd91d,	// (0x00059271) tb_ext_find_pane

0x61a6,	// (0x00051afa) ai_gene_pane_1_cp1

0xc5d5,	// (0x00057f29) ai_gene_pane_2_cp1

0xda04,	// (0x00059358) list_single_idle_plugin_calendar_pane

0x61b7,	// (0x00051b0b) list_single_idle_plugin_notification_pane

0x61c0,	// (0x00051b14) list_single_idle_plugin_player_pane

0xda0d,	// (0x00059361) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda0d,	// (0x00059361) list_single_idle_plugin_shortcut_pane

0xda35,	// (0x00059389) main_idle_act4_pane_t1

0xda4c,	// (0x000593a0) main_idle_act4_pane_t2

0x0001,

0xfd07,	// (0x0005b65b) main_idle_act4_pane_t

0xda63,	// (0x000593b7) middle_sk_idle_act4_pane_ParamLimits

0xda63,	// (0x000593b7) middle_sk_idle_act4_pane

0xda7f,	// (0x000593d3) popup_clock_digital_analogue_window_cp2

0xdaab,	// (0x000593ff) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaab,	// (0x000593ff) shortcut_wheel_idle_act4_pane

0x478e,	// (0x000500e2) shortcut_wheel_idle_act4_pane_g1

0x478e,	// (0x000500e2) shortcut_wheel_idle_act4_pane_g2

0x478e,	// (0x000500e2) shortcut_wheel_idle_act4_pane_g3

0x478e,	// (0x000500e2) shortcut_wheel_idle_act4_pane_g4

0x478e,	// (0x000500e2) shortcut_wheel_idle_act4_pane_g5

0x6253,	// (0x00051ba7) shortcut_wheel_idle_act4_pane_g6

0x625b,	// (0x00051baf) shortcut_wheel_idle_act4_pane_g7

0x6263,	// (0x00051bb7) shortcut_wheel_idle_act4_pane_g8

0x626b,	// (0x00051bbf) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0c,	// (0x0005b660) shortcut_wheel_idle_act4_pane_g

0xcf4c,	// (0x000588a0) middle_sk_idle_act4_pane_g1_ParamLimits

0xcf4c,	// (0x000588a0) middle_sk_idle_act4_pane_g1

0xdb28,	// (0x0005947c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb28,	// (0x0005947c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2f,	// (0x0005b683) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2f,	// (0x0005b683) middle_sk_idle_act4_pane_g

0xdb40,	// (0x00059494) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb40,	// (0x00059494) middle_sk_idle_act4_pane_t1

0xdb6f,	// (0x000594c3) grid_ai_shortcut_pane_ParamLimits

0xdb6f,	// (0x000594c3) grid_ai_shortcut_pane

0xdb8c,	// (0x000594e0) list_highlight_pane_cp16_ParamLimits

0xdb8c,	// (0x000594e0) list_highlight_pane_cp16

0xdb99,	// (0x000594ed) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb99,	// (0x000594ed) list_single_idle_plugin_shortcut_pane_g1

0xdba5,	// (0x000594f9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdba5,	// (0x000594f9) list_single_idle_plugin_shortcut_pane_g2

0xdbc1,	// (0x00059515) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbc1,	// (0x00059515) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd34,	// (0x0005b688) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd34,	// (0x0005b688) list_single_idle_plugin_shortcut_pane_g

0xdbd6,	// (0x0005952a) cell_ai_shortcut_pane_ParamLimits

0xdbd6,	// (0x0005952a) cell_ai_shortcut_pane

0xdbec,	// (0x00059540) cell_ai_shortcut_pane_g1_ParamLimits

0xdbec,	// (0x00059540) cell_ai_shortcut_pane_g1

0x61a6,	// (0x00051afa) ai_gene_pane_1_cp2

0x639b,	// (0x00051cef) ai_gene_pane_2_cp2

0x63a3,	// (0x00051cf7) list_highlight_pane_cp15

0xdc0e,	// (0x00059562) list_single_idle_plugin_calendar_pane_g1

0x63a3,	// (0x00051cf7) list_highlight_pane_cp17

0x63b4,	// (0x00051d08) list_single_idle_plugin_calendar_pane_g1_copy1

0x63bc,	// (0x00051d10) list_single_idle_plugin_player_pane_g1

0x3b06,	// (0x0004f45a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3b,	// (0x0005b68f) list_single_idle_plugin_player_pane_g

0x63c4,	// (0x00051d18) list_single_idle_plugin_player_pane_t1

0x63d2,	// (0x00051d26) list_single_idle_plugin_player_pane_t2

0x63e0,	// (0x00051d34) list_single_idle_plugin_player_pane_t3

0x63ee,	// (0x00051d42) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd40,	// (0x0005b694) list_single_idle_plugin_player_pane_t

0x63fc,	// (0x00051d50) wait_bar_pane_cp15

0x6404,	// (0x00051d58) grid_ai_notification_pane

0x3b06,	// (0x0004f45a) list_single_idle_plugin_notification_pane_g1

0xdc16,	// (0x0005956a) cell_ai_notification_pane_ParamLimits

0xdc16,	// (0x0005956a) cell_ai_notification_pane

0x641a,	// (0x00051d6e) cell_ai_notification_pane_g1

0x6422,	// (0x00051d76) cell_ai_notification_pane_t1

0xdc23,	// (0x00059577) tb_ext_find_button_pane

0xdc2b,	// (0x0005957f) tb_ext_find_pane_g1

0xdc33,	// (0x00059587) tb_ext_find_pane_t1

0xc0f6,	// (0x00057a4a) tb_ext_find_button_pane_g1

0xdc41,	// (0x00059595) tb_ext_find_button_pane_g2

0x0001,

0xfd49,	// (0x0005b69d) tb_ext_find_button_pane_g

0xda35,	// (0x00059389) main_idle_act4_pane_t1_ParamLimits

0xda4c,	// (0x000593a0) main_idle_act4_pane_t2_ParamLimits

0xfd07,	// (0x0005b65b) main_idle_act4_pane_t_ParamLimits

0xda7f,	// (0x000593d3) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda97,	// (0x000593eb) sat_plugin_idle_act4_pane_ParamLimits

0xda97,	// (0x000593eb) sat_plugin_idle_act4_pane

0xdc4a,	// (0x0005959e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdc4a,	// (0x0005959e) sat_plugin_idle_act4_pane_t1

0xdc62,	// (0x000595b6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdc62,	// (0x000595b6) sat_plugin_idle_act4_pane_t2

0xdc7a,	// (0x000595ce) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdc7a,	// (0x000595ce) sat_plugin_idle_act4_pane_t3

0xdc92,	// (0x000595e6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc92,	// (0x000595e6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4e,	// (0x0005b6a2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4e,	// (0x0005b6a2) sat_plugin_idle_act4_pane_t

0x8fa0,	// (0x000548f4) popup_battery_window_ParamLimits

0x8fa0,	// (0x000548f4) popup_battery_window

0x959b,	// (0x00054eef) bg_popup_sub_pane_cp25_ParamLimits

0x959b,	// (0x00054eef) bg_popup_sub_pane_cp25

0x64a3,	// (0x00051df7) popup_battery_window_g1_ParamLimits

0x64a3,	// (0x00051df7) popup_battery_window_g1

0x64af,	// (0x00051e03) popup_battery_window_t1_ParamLimits

0x64af,	// (0x00051e03) popup_battery_window_t1

0x64c1,	// (0x00051e15) popup_battery_window_t2_ParamLimits

0x64c1,	// (0x00051e15) popup_battery_window_t2

0x0001,

0xfd57,	// (0x0005b6ab) popup_battery_window_t_ParamLimits

0xfd57,	// (0x0005b6ab) popup_battery_window_t

0xa35e,	// (0x00055cb2) midp_canvas_pane_ParamLimits

0xa3d0,	// (0x00055d24) midp_keypad_pane_ParamLimits

0xa3d0,	// (0x00055d24) midp_keypad_pane

0x9d5e,	// (0x000556b2) main_midp_pane_ParamLimits

0xcd34,	// (0x00058688) signal_pane_g2_cp_ParamLimits

0xdcaa,	// (0x000595fe) aid_size_cell_midp_keypad_ParamLimits

0xdcaa,	// (0x000595fe) aid_size_cell_midp_keypad

0xdcc8,	// (0x0005961c) midp_keyp_game_grid_pane_ParamLimits

0xdcc8,	// (0x0005961c) midp_keyp_game_grid_pane

0xdcef,	// (0x00059643) midp_keyp_rocker_pane_ParamLimits

0xdcef,	// (0x00059643) midp_keyp_rocker_pane

0xdd40,	// (0x00059694) midp_keyp_sk_left_pane_ParamLimits

0xdd40,	// (0x00059694) midp_keyp_sk_left_pane

0xdd94,	// (0x000596e8) midp_keyp_sk_right_pane_ParamLimits

0xdd94,	// (0x000596e8) midp_keyp_sk_right_pane

0x8e9c,	// (0x000547f0) bg_button_pane_cp03

0xdde8,	// (0x0005973c) midp_keyp_sk_left_pane_g1

0x8e9c,	// (0x000547f0) bg_button_pane_cp04

0xdde8,	// (0x0005973c) midp_keyp_sk_right_pane_g1

0x478e,	// (0x000500e2) midp_keyp_rocker_pane_g1

0xddf1,	// (0x00059745) keyp_game_cell_pane_ParamLimits

0xddf1,	// (0x00059745) keyp_game_cell_pane

0x8e9c,	// (0x000547f0) bg_button_pane_cp02

0xde15,	// (0x00059769) keyp_game_cell_pane_g1

0x8fc0,	// (0x00054914) popup_fep_vkb2_window_ParamLimits

0x8fc0,	// (0x00054914) popup_fep_vkb2_window

0xb9a1,	// (0x000572f5) aid_size_cell_vkb2_ParamLimits

0xb9a1,	// (0x000572f5) aid_size_cell_vkb2

0xb9d5,	// (0x00057329) popup_fep_vkb2_window_g1_ParamLimits

0xb9d5,	// (0x00057329) popup_fep_vkb2_window_g1

0xba25,	// (0x00057379) vkb2_area_bottom_pane_ParamLimits

0xba25,	// (0x00057379) vkb2_area_bottom_pane

0xba79,	// (0x000573cd) vkb2_area_keypad_pane_ParamLimits

0xba79,	// (0x000573cd) vkb2_area_keypad_pane

0xbac1,	// (0x00057415) vkb2_area_top_pane_ParamLimits

0xbac1,	// (0x00057415) vkb2_area_top_pane

0xbb4d,	// (0x000574a1) vkb2_top_entry_pane_ParamLimits

0xbb4d,	// (0x000574a1) vkb2_top_entry_pane

0xbb7a,	// (0x000574ce) vkb2_top_grid_left_pane_ParamLimits

0xbb7a,	// (0x000574ce) vkb2_top_grid_left_pane

0xbb9b,	// (0x000574ef) vkb2_top_grid_right_pane_ParamLimits

0xbb9b,	// (0x000574ef) vkb2_top_grid_right_pane

0x164b,	// (0x0004cf9f) vkb2_cell_keypad_pane_ParamLimits

0x164b,	// (0x0004cf9f) vkb2_cell_keypad_pane

0xbbe3,	// (0x00057537) vkb2_area_bottom_grid_pane_ParamLimits

0xbbe3,	// (0x00057537) vkb2_area_bottom_grid_pane

0xbc0d,	// (0x00057561) vkb2_area_bottom_pane_g1_ParamLimits

0xbc0d,	// (0x00057561) vkb2_area_bottom_pane_g1

0xbc33,	// (0x00057587) vkb2_area_bottom_pane_g2_ParamLimits

0xbc33,	// (0x00057587) vkb2_area_bottom_pane_g2

0xbc64,	// (0x000575b8) vkb2_area_bottom_pane_g3_ParamLimits

0xbc64,	// (0x000575b8) vkb2_area_bottom_pane_g3

0x0002,

0xfd5c,	// (0x0005b6b0) vkb2_area_bottom_pane_g_ParamLimits

0xfd5c,	// (0x0005b6b0) vkb2_area_bottom_pane_g

0x17f5,	// (0x0004d149) vkb2_top_cell_left_pane_ParamLimits

0x17f5,	// (0x0004d149) vkb2_top_cell_left_pane

0xde1e,	// (0x00059772) vkb2_top_entry_pane_g1_ParamLimits

0xde1e,	// (0x00059772) vkb2_top_entry_pane_g1

0xde2c,	// (0x00059780) vkb2_top_entry_pane_t1_ParamLimits

0xde2c,	// (0x00059780) vkb2_top_entry_pane_t1

0x6672,	// (0x00051fc6) vkb2_top_entry_pane_t2_ParamLimits

0x6672,	// (0x00051fc6) vkb2_top_entry_pane_t2

0x66a4,	// (0x00051ff8) vkb2_top_entry_pane_t3_ParamLimits

0x66a4,	// (0x00051ff8) vkb2_top_entry_pane_t3

0x0002,

0xfd63,	// (0x0005b6b7) vkb2_top_entry_pane_t_ParamLimits

0xfd63,	// (0x0005b6b7) vkb2_top_entry_pane_t

0xbcce,	// (0x00057622) vkb2_top_grid_right_pane_g1_ParamLimits

0xbcce,	// (0x00057622) vkb2_top_grid_right_pane_g1

0x1858,	// (0x0004d1ac) vkb2_top_grid_right_pane_g2_ParamLimits

0x1858,	// (0x0004d1ac) vkb2_top_grid_right_pane_g2

0x1870,	// (0x0004d1c4) vkb2_top_grid_right_pane_g3_ParamLimits

0x1870,	// (0x0004d1c4) vkb2_top_grid_right_pane_g3

0xbce4,	// (0x00057638) vkb2_top_grid_right_pane_g4_ParamLimits

0xbce4,	// (0x00057638) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6a,	// (0x0005b6be) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6a,	// (0x0005b6be) vkb2_top_grid_right_pane_g

0x189e,	// (0x0004d1f2) vkb2_top_cell_left_pane_g1

0x18b5,	// (0x0004d209) vkb2_cell_keypad_pane_g1_ParamLimits

0x18b5,	// (0x0004d209) vkb2_cell_keypad_pane_g1

0x66c8,	// (0x0005201c) vkb2_cell_keypad_pane_t1_ParamLimits

0x66c8,	// (0x0005201c) vkb2_cell_keypad_pane_t1

0x18c3,	// (0x0004d217) vkb2_cell_bottom_grid_pane_ParamLimits

0x18c3,	// (0x0004d217) vkb2_cell_bottom_grid_pane

0x18fc,	// (0x0004d250) vkb2_cell_bottom_grid_pane_g1

0xdacc,	// (0x00059420) aid_call2_pane_cp02

0xdad4,	// (0x00059428) aid_call_pane_cp02

0xdadc,	// (0x00059430) clock_digital_number_pane_cp10

0xdae4,	// (0x00059438) clock_digital_number_pane_cp11

0xdaec,	// (0x00059440) clock_digital_number_pane_cp12

0xdaf4,	// (0x00059448) clock_digital_number_pane_cp13

0xdafc,	// (0x00059450) clock_digital_separator_pane_cp10

0xc0f6,	// (0x00057a4a) popup_clock_digital_analogue_window_cp2_g1

0xc0f6,	// (0x00057a4a) popup_clock_digital_analogue_window_cp2_g2

0xdb04,	// (0x00059458) popup_clock_digital_analogue_window_cp2_g3

0xc0f6,	// (0x00057a4a) popup_clock_digital_analogue_window_cp2_g4

0xdb04,	// (0x00059458) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1f,	// (0x0005b673) popup_clock_digital_analogue_window_cp2_g

0xdb0c,	// (0x00059460) popup_clock_digital_analogue_window_cp2_t1

0xdb1a,	// (0x0005946e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2a,	// (0x0005b67e) popup_clock_digital_analogue_window_cp2_t

0x478e,	// (0x000500e2) clock_digital_number_pane_cp10_g1

0x478e,	// (0x000500e2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb19,	// (0x0005b46d) clock_digital_number_pane_cp10_g

0x478e,	// (0x000500e2) clock_digital_separator_pane_cp10_g1

0x478e,	// (0x000500e2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb19,	// (0x0005b46d) clock_digital_separator_pane_cp10_g

0xd9c9,	// (0x0005931d) uniindi_top_pane_g3

0x6100,	// (0x00051a54) uniindi_top_pane_g4

0x16d6,	// (0x0004d02a) vkb2_row_keypad_pane_ParamLimits

0x16d6,	// (0x0004d02a) vkb2_row_keypad_pane

0x191c,	// (0x0004d270) vkb2_cell_t_keypad_pane_ParamLimits

0x191c,	// (0x0004d270) vkb2_cell_t_keypad_pane

0x192c,	// (0x0004d280) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x192c,	// (0x0004d280) vkb2_cell_t_keypad_pane_cp08

0x193f,	// (0x0004d293) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x193f,	// (0x0004d293) vkb2_cell_t_keypad_pane_cp09

0x1953,	// (0x0004d2a7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1953,	// (0x0004d2a7) vkb2_cell_t_keypad_pane_cp01

0x1964,	// (0x0004d2b8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1964,	// (0x0004d2b8) vkb2_cell_t_keypad_pane_cp02

0x1975,	// (0x0004d2c9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1975,	// (0x0004d2c9) vkb2_cell_t_keypad_pane_cp03

0x1986,	// (0x0004d2da) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1986,	// (0x0004d2da) vkb2_cell_t_keypad_pane_cp04

0x1997,	// (0x0004d2eb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1997,	// (0x0004d2eb) vkb2_cell_t_keypad_pane_cp05

0x19a8,	// (0x0004d2fc) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x19a8,	// (0x0004d2fc) vkb2_cell_t_keypad_pane_cp06

0x19b9,	// (0x0004d30d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x19b9,	// (0x0004d30d) vkb2_cell_t_keypad_pane_cp07

0x19ca,	// (0x0004d31e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x19ca,	// (0x0004d31e) vkb2_cell_t_keypad_pane_cp10

0x49fe,	// (0x00050352) vkb2_cell_t_keypad_pane_g1

0x66df,	// (0x00052033) vkb2_cell_t_keypad_pane_t1

0x8e9c,	// (0x000547f0) popup_grid_graphic2_window

0xde65,	// (0x000597b9) aid_size_cell_graphic2_ParamLimits

0xde65,	// (0x000597b9) aid_size_cell_graphic2

0xdea3,	// (0x000597f7) bg_popup_window_pane_cp21_ParamLimits

0xdea3,	// (0x000597f7) bg_popup_window_pane_cp21

0xdeb1,	// (0x00059805) graphic2_pages_pane_ParamLimits

0xdeb1,	// (0x00059805) graphic2_pages_pane

0xdf07,	// (0x0005985b) grid_graphic2_control_pane_ParamLimits

0xdf07,	// (0x0005985b) grid_graphic2_control_pane

0xdf4f,	// (0x000598a3) grid_graphic2_pane_ParamLimits

0xdf4f,	// (0x000598a3) grid_graphic2_pane

0xdfd6,	// (0x0005992a) cell_graphic2_pane

0x8e9c,	// (0x000547f0) main_comp_mode_pane

0x5960,	// (0x000512b4) list_ai3_gene_pane_ParamLimits

0xd778,	// (0x000590cc) bg_popup_window_pane_cp19_ParamLimits

0x5d3a,	// (0x0005168e) bg_touch_area_indi_pane_ParamLimits

0x5d3a,	// (0x0005168e) bg_touch_area_indi_pane

0x5d50,	// (0x000516a4) bg_touch_area_indi_pane_cp01_ParamLimits

0x5d50,	// (0x000516a4) bg_touch_area_indi_pane_cp01

0x5d66,	// (0x000516ba) bg_touch_area_indi_pane_cp02_ParamLimits

0x5d66,	// (0x000516ba) bg_touch_area_indi_pane_cp02

0x5d7c,	// (0x000516d0) bg_touch_area_indi_pane_cp03_ParamLimits

0x5d7c,	// (0x000516d0) bg_touch_area_indi_pane_cp03

0x5d96,	// (0x000516ea) popup_slider_window_g1_ParamLimits

0x5db2,	// (0x00051706) popup_slider_window_g2_ParamLimits

0x5dce,	// (0x00051722) popup_slider_window_g3_ParamLimits

0xfcb4,	// (0x0005b608) popup_slider_window_g_ParamLimits

0x5e34,	// (0x00051788) popup_slider_window_t1_ParamLimits

0x5ea8,	// (0x000517fc) small_volume_slider_vertical_pane_ParamLimits

0xdfd6,	// (0x0005992a) cell_graphic2_pane_ParamLimits

0xe031,	// (0x00059985) bg_button_pane_cp10_ParamLimits

0xe031,	// (0x00059985) bg_button_pane_cp10

0xe044,	// (0x00059998) bg_button_pane_cp11_ParamLimits

0xe044,	// (0x00059998) bg_button_pane_cp11

0xe057,	// (0x000599ab) graphic2_pages_pane_g1_ParamLimits

0xe057,	// (0x000599ab) graphic2_pages_pane_g1

0xe072,	// (0x000599c6) graphic2_pages_pane_g2_ParamLimits

0xe072,	// (0x000599c6) graphic2_pages_pane_g2

0x0001,

0xfd78,	// (0x0005b6cc) graphic2_pages_pane_g_ParamLimits

0xfd78,	// (0x0005b6cc) graphic2_pages_pane_g

0xe08a,	// (0x000599de) graphic2_pages_pane_t1_ParamLimits

0xe08a,	// (0x000599de) graphic2_pages_pane_t1

0xe0a2,	// (0x000599f6) cell_graphic2_control_pane_ParamLimits

0xe0a2,	// (0x000599f6) cell_graphic2_control_pane

0xe0d4,	// (0x00059a28) cell_graphic2_pane_g1_ParamLimits

0xe0d4,	// (0x00059a28) cell_graphic2_pane_g1

0xcf5a,	// (0x000588ae) cell_graphic2_pane_g2_ParamLimits

0xcf5a,	// (0x000588ae) cell_graphic2_pane_g2

0xe0e1,	// (0x00059a35) cell_graphic2_pane_g3_ParamLimits

0xe0e1,	// (0x00059a35) cell_graphic2_pane_g3

0xcf67,	// (0x000588bb) cell_graphic2_pane_g4_ParamLimits

0xcf67,	// (0x000588bb) cell_graphic2_pane_g4

0xe0ee,	// (0x00059a42) cell_graphic2_pane_g5_ParamLimits

0xe0ee,	// (0x00059a42) cell_graphic2_pane_g5

0x0004,

0xfd7d,	// (0x0005b6d1) cell_graphic2_pane_g_ParamLimits

0xfd7d,	// (0x0005b6d1) cell_graphic2_pane_g

0xe10b,	// (0x00059a5f) cell_graphic2_pane_t1_ParamLimits

0xe10b,	// (0x00059a5f) cell_graphic2_pane_t1

0x2eba,	// (0x0004e80e) grid_highlight_pane_cp11_ParamLimits

0x2eba,	// (0x0004e80e) grid_highlight_pane_cp11

0x959b,	// (0x00054eef) bg_button_pane_cp05

0xe155,	// (0x00059aa9) cell_graphic2_control_pane_g1

0x478e,	// (0x000500e2) bg_touch_area_indi_pane_g1

0x69b8,	// (0x0005230c) aid_cmod_rocker_key_size

0x69c2,	// (0x00052316) aid_cmode_itu_key_size

0x69cc,	// (0x00052320) main_cmode_video_pane

0x69d6,	// (0x0005232a) main_comp_mode_itu_pane

0x69e2,	// (0x00052336) main_comp_mode_rocker_pane

0x69ee,	// (0x00052342) cell_cmode_rocker_pane_ParamLimits

0x69ee,	// (0x00052342) cell_cmode_rocker_pane

0x6a00,	// (0x00052354) cell_cmode_itu_pane_ParamLimits

0x6a00,	// (0x00052354) cell_cmode_itu_pane

0x9b7a,	// (0x000554ce) bg_button_pane_cp06_ParamLimits

0x9b7a,	// (0x000554ce) bg_button_pane_cp06

0x49fe,	// (0x00050352) cell_cmode_rocker_pane_g1_ParamLimits

0x49fe,	// (0x00050352) cell_cmode_rocker_pane_g1

0x5f4c,	// (0x000518a0) cell_cmode_rocker_pane_g2_ParamLimits

0x5f4c,	// (0x000518a0) cell_cmode_rocker_pane_g2

0x0001,

0xfd8d,	// (0x0005b6e1) cell_cmode_rocker_pane_g_ParamLimits

0xfd8d,	// (0x0005b6e1) cell_cmode_rocker_pane_g

0x8e9c,	// (0x000547f0) bg_button_pane_cp07

0x6a15,	// (0x00052369) cell_cmode_itu_pane_g1

0x6a1e,	// (0x00052372) cell_cmode_itu_pane_t1

0x6a2c,	// (0x00052380) cell_cmode_itu_pane_t2

0x0001,

0xfd92,	// (0x0005b6e6) cell_cmode_itu_pane_t

0x6172,	// (0x00051ac6) aid_touch_ctrl_left

0x617a,	// (0x00051ace) aid_touch_ctrl_right

0x8e9c,	// (0x000547f0) compa_mode_pane

0xe17b,	// (0x00059acf) aid_cmod_rocker_key_size_cp

0xe185,	// (0x00059ad9) aid_cmode_itu_key_size_cp

0x6a4e,	// (0x000523a2) compa_mode_pane_g1

0x6a56,	// (0x000523aa) compa_mode_pane_g2

0x6a5e,	// (0x000523b2) compa_mode_pane_g3

0x0002,

0xfd97,	// (0x0005b6eb) compa_mode_pane_g

0xe18f,	// (0x00059ae3) main_comp_mode_itu_pane_cp

0xe197,	// (0x00059aeb) main_comp_mode_rocker_pane_cp

0xe19f,	// (0x00059af3) cell_cmode_itu_pane_cp_ParamLimits

0xe19f,	// (0x00059af3) cell_cmode_itu_pane_cp

0xe1b4,	// (0x00059b08) cell_cmode_rocker_pane_cp_ParamLimits

0xe1b4,	// (0x00059b08) cell_cmode_rocker_pane_cp

0x9b7a,	// (0x000554ce) bg_button_pane_cp06_cp_ParamLimits

0x9b7a,	// (0x000554ce) bg_button_pane_cp06_cp

0x49fe,	// (0x00050352) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x49fe,	// (0x00050352) cell_cmode_rocker_pane_g1_cp

0x478e,	// (0x000500e2) cell_cmode_rocker_pane_g2_cp

0x8e9c,	// (0x000547f0) bg_button_pane_cp07_cp

0xe1c6,	// (0x00059b1a) cell_cmode_itu_pane_g1_cp

0xe1cf,	// (0x00059b23) cell_cmode_itu_pane_t1_cp

0xe1cf,	// (0x00059b23) cell_cmode_itu_pane_t2_cp

0xcade,	// (0x00058432) settings_code_pane_cp2

0x9231,	// (0x00054b85) bg_popup_window_pane_cp3_ParamLimits

0x979b,	// (0x000550ef) heading_pane_cp3_ParamLimits

0x97aa,	// (0x000550fe) listscroll_popup_graphic_pane_ParamLimits

0x0f1b,	// (0x0004c86f) fep_hwr_aid_pane_ParamLimits

0x13b9,	// (0x0004cd0d) aid_touch_sctrl_top_ParamLimits

0x13c6,	// (0x0004cd1a) sctrl_sk_top_pane_g1_ParamLimits

0x49fe,	// (0x00050352) sctrl_sk_top_pane_g2_ParamLimits

0xfccd,	// (0x0005b621) sctrl_sk_top_pane_g_ParamLimits

0x13d3,	// (0x0004cd27) sctrl_sk_top_pane_t1_ParamLimits

0x13b9,	// (0x0004cd0d) aid_touch_sctrl_bottom_ParamLimits

0x13d3,	// (0x0004cd27) sctrl_sk_bottom_pane_t1_ParamLimits

0xd995,	// (0x000592e9) aid_area_touch_clock

0xbb0d,	// (0x00057461) aid_vkb2_area_top_pane_cell_ParamLimits

0xbb0d,	// (0x00057461) aid_vkb2_area_top_pane_cell

0xbbbc,	// (0x00057510) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbbbc,	// (0x00057510) aid_vkb2_area_bottom_pane_cell

0x662a,	// (0x00051f7e) popup_char_count_window

0x6ab4,	// (0x00052408) popup_char_count_window_g1

0x6abd,	// (0x00052411) popup_char_count_window_g2

0x6ac6,	// (0x0005241a) popup_char_count_window_g3

0x0002,

0xfd9e,	// (0x0005b6f2) popup_char_count_window_g

0x6acf,	// (0x00052423) popup_char_count_window_t1

0x146c,	// (0x0004cdc0) popup_fep_char_preview_window_ParamLimits

0x146c,	// (0x0004cdc0) popup_fep_char_preview_window

0xbb2d,	// (0x00057481) vkb2_top_candi_pane_ParamLimits

0xbb2d,	// (0x00057481) vkb2_top_candi_pane

0xe1dd,	// (0x00059b31) cell_vkb2_top_candi_pane_ParamLimits

0xe1dd,	// (0x00059b31) cell_vkb2_top_candi_pane

0x285e,	// (0x0004e1b2) bg_popup_fep_char_preview_window_ParamLimits

0x285e,	// (0x0004e1b2) bg_popup_fep_char_preview_window

0x19df,	// (0x0004d333) popup_fep_char_preview_window_t1_ParamLimits

0x19df,	// (0x0004d333) popup_fep_char_preview_window_t1

0x6b27,	// (0x0005247b) bg_popup_fep_char_preview_window_g1

0x6b2f,	// (0x00052483) bg_popup_fep_char_preview_window_g2

0x6b37,	// (0x0005248b) bg_popup_fep_char_preview_window_g3

0x6b3f,	// (0x00052493) bg_popup_fep_char_preview_window_g4

0x6b47,	// (0x0005249b) bg_popup_fep_char_preview_window_g5

0x6b4f,	// (0x000524a3) bg_popup_fep_char_preview_window_g6

0x6b57,	// (0x000524ab) bg_popup_fep_char_preview_window_g7

0x6b5f,	// (0x000524b3) bg_popup_fep_char_preview_window_g8

0x6b67,	// (0x000524bb) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda5,	// (0x0005b6f9) bg_popup_fep_char_preview_window_g

0x49fe,	// (0x00050352) cell_vkb2_top_candi_pane_g1_ParamLimits

0x49fe,	// (0x00050352) cell_vkb2_top_candi_pane_g1

0x4d15,	// (0x00050669) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4d15,	// (0x00050669) cell_vkb2_top_candi_pane_g2

0x4d36,	// (0x0005068a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4d36,	// (0x0005068a) cell_vkb2_top_candi_pane_g3

0x1a21,	// (0x0004d375) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1a21,	// (0x0004d375) cell_vkb2_top_candi_pane_g4

0x4f75,	// (0x000508c9) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4f75,	// (0x000508c9) cell_vkb2_top_candi_pane_g5

0x5f4c,	// (0x000518a0) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5f4c,	// (0x000518a0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdba,	// (0x0005b70e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdba,	// (0x0005b70e) cell_vkb2_top_candi_pane_g

0x1a42,	// (0x0004d396) cell_vkb2_top_candi_pane_t1

0xb706,	// (0x0005705a) aid_size_touch_slider_mark_ParamLimits

0xb706,	// (0x0005705a) aid_size_touch_slider_mark

0xdeed,	// (0x00059841) grid_graphic2_catg_pane_ParamLimits

0xdeed,	// (0x00059841) grid_graphic2_catg_pane

0xdfa9,	// (0x000598fd) popup_grid_graphic2_window_t1_ParamLimits

0xdfa9,	// (0x000598fd) popup_grid_graphic2_window_t1

0xdfbf,	// (0x00059913) popup_grid_graphic2_window_t2_ParamLimits

0xdfbf,	// (0x00059913) popup_grid_graphic2_window_t2

0x0001,

0xfd73,	// (0x0005b6c7) popup_grid_graphic2_window_t_ParamLimits

0xfd73,	// (0x0005b6c7) popup_grid_graphic2_window_t

0x959b,	// (0x00054eef) bg_button_pane_cp05_ParamLimits

0xe155,	// (0x00059aa9) cell_graphic2_control_pane_g1_ParamLimits

0xe23d,	// (0x00059b91) cell_graphic2_catg_pane_ParamLimits

0xe23d,	// (0x00059b91) cell_graphic2_catg_pane

0x8e9c,	// (0x000547f0) bg_button_pane_cp12

0xe24f,	// (0x00059ba3) cell_graphic2_catg_pane_g1

0x6086,	// (0x000519da) cell_tb_ext_pane_t1_ParamLimits

0x1815,	// (0x0004d169) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1815,	// (0x0004d169) vkb2_top_cell_right_narrow_pane

0x182d,	// (0x0004d181) vkb2_top_cell_right_wide_pane_ParamLimits

0x182d,	// (0x0004d181) vkb2_top_cell_right_wide_pane

0x0f0d,	// (0x0004c861) bg_vkb2_func_pane_ParamLimits

0x0f0d,	// (0x0004c861) bg_vkb2_func_pane

0x189e,	// (0x0004d1f2) vkb2_top_cell_left_pane_g1_ParamLimits

0x0f0d,	// (0x0004c861) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0f0d,	// (0x0004c861) bg_vkb2_fuc_pane_cp03

0x18fc,	// (0x0004d250) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x21c0,	// (0x0004db14) bg_vkb2_func_pane_g1

0x21c8,	// (0x0004db1c) bg_vkb2_func_pane_g2

0x21d8,	// (0x0004db2c) bg_vkb2_func_pane_g3

0x21d0,	// (0x0004db24) bg_vkb2_func_pane_g4

0x21e0,	// (0x0004db34) bg_vkb2_func_pane_g5

0x21e8,	// (0x0004db3c) bg_vkb2_func_pane_g6

0x21f0,	// (0x0004db44) bg_vkb2_func_pane_g7

0x21f8,	// (0x0004db4c) bg_vkb2_func_pane_g8

0x21b8,	// (0x0004db0c) bg_vkb2_func_pane_g9

0x0008,

0xfdc7,	// (0x0005b71b) bg_vkb2_func_pane_g

0x0f0d,	// (0x0004c861) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0f0d,	// (0x0004c861) bg_vkb2_fuc_pane_cp01

0x189e,	// (0x0004d1f2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x189e,	// (0x0004d1f2) vkb2_top_cell_right_wide_pane_g1

0x0f0d,	// (0x0004c861) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0f0d,	// (0x0004c861) bg_vkb2_fuc_pane_cp02

0x1a61,	// (0x0004d3b5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1a61,	// (0x0004d3b5) vkb2_top_cell_right_narrow_pane_g1

0xd6ba,	// (0x0005900e) aid_touch_area_decrease_ParamLimits

0xd6ba,	// (0x0005900e) aid_touch_area_decrease

0xd6f4,	// (0x00059048) aid_touch_area_increase_ParamLimits

0xd6f4,	// (0x00059048) aid_touch_area_increase

0xd71c,	// (0x00059070) aid_touch_area_mute_ParamLimits

0xd71c,	// (0x00059070) aid_touch_area_mute

0xd744,	// (0x00059098) aid_touch_area_slider_ParamLimits

0xd744,	// (0x00059098) aid_touch_area_slider

0xd784,	// (0x000590d8) popup_slider_window_g4_ParamLimits

0xd784,	// (0x000590d8) popup_slider_window_g4

0xd7ac,	// (0x00059100) popup_slider_window_g5_ParamLimits

0xd7ac,	// (0x00059100) popup_slider_window_g5

0xd7e0,	// (0x00059134) popup_slider_window_g6_ParamLimits

0xd7e0,	// (0x00059134) popup_slider_window_g6

0x5e62,	// (0x000517b6) popup_slider_window_t2_ParamLimits

0x5e62,	// (0x000517b6) popup_slider_window_t2

0x0001,

0xfcc1,	// (0x0005b615) popup_slider_window_t_ParamLimits

0xfcc1,	// (0x0005b615) popup_slider_window_t

0xd7fc,	// (0x00059150) slider_pane_ParamLimits

0xd7fc,	// (0x00059150) slider_pane

0x6b8a,	// (0x000524de) slider_pane_g1_ParamLimits

0x6b8a,	// (0x000524de) slider_pane_g1

0x6b9e,	// (0x000524f2) slider_pane_g2_ParamLimits

0x6b9e,	// (0x000524f2) slider_pane_g2

0x6bb4,	// (0x00052508) slider_pane_g3_ParamLimits

0x6bb4,	// (0x00052508) slider_pane_g3

0x0003,

0xfdda,	// (0x0005b72e) slider_pane_g_ParamLimits

0xfdda,	// (0x0005b72e) slider_pane_g

0xad23,	// (0x00056677) popup_tb_float_extension_window_ParamLimits

0xad23,	// (0x00056677) popup_tb_float_extension_window

0x6be0,	// (0x00052534) aid_size_cell_tb_float_ext

0x8e9c,	// (0x000547f0) bg_popup_sub_window_cp28

0xe258,	// (0x00059bac) grid_tb_float_ext_pane

0xe262,	// (0x00059bb6) cell_tb_float_ext_pane_ParamLimits

0xe262,	// (0x00059bb6) cell_tb_float_ext_pane

0xe27c,	// (0x00059bd0) cell_tb_float_ext_pane_g1

0xe285,	// (0x00059bd9) grid_highlight_pane_cp12

0xb81d,	// (0x00057171) cell_last_hwr_side_pane_ParamLimits

0xb81d,	// (0x00057171) cell_last_hwr_side_pane

0x478e,	// (0x000500e2) cell_last_hwr_side_pane_g1

0x6c22,	// (0x00052576) cell_last_hwr_side_pane_g2

0x0001,

0xfde3,	// (0x0005b737) cell_last_hwr_side_pane_g

0xbc99,	// (0x000575ed) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbc99,	// (0x000575ed) vkb2_area_bottom_space_btn_pane

0x49fe,	// (0x00050352) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x66df,	// (0x00052033) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1a42,	// (0x0004d396) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1a81,	// (0x0004d3d5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1a81,	// (0x0004d3d5) vkb2_area_bottom_space_btn_pane_g1

0x1abb,	// (0x0004d40f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1abb,	// (0x0004d40f) vkb2_area_bottom_space_btn_pane_g2

0x1af1,	// (0x0004d445) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1af1,	// (0x0004d445) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde8,	// (0x0005b73c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde8,	// (0x0005b73c) vkb2_area_bottom_space_btn_pane_g

0x0fc2,	// (0x0004c916) cel_fep_hwr_func_pane_ParamLimits

0x0fc2,	// (0x0004c916) cel_fep_hwr_func_pane

0xb7f2,	// (0x00057146) cell_hwr_side_button_pane_ParamLimits

0xb7f2,	// (0x00057146) cell_hwr_side_button_pane

0xd995,	// (0x000592e9) aid_area_touch_clock_ParamLimits

0x959b,	// (0x00054eef) bg_uniindi_top_pane_ParamLimits

0xd9a7,	// (0x000592fb) uniindi_top_pane_g1_ParamLimits

0xd9bd,	// (0x00059311) uniindi_top_pane_g2_ParamLimits

0xd9c9,	// (0x0005931d) uniindi_top_pane_g3_ParamLimits

0x6100,	// (0x00051a54) uniindi_top_pane_g4_ParamLimits

0xfcf9,	// (0x0005b64d) uniindi_top_pane_g_ParamLimits

0xd9da,	// (0x0005932e) uniindi_top_pane_t1_ParamLimits

0x959b,	// (0x00054eef) bg_vkb2_func_pane_cp01_ParamLimits

0x959b,	// (0x00054eef) bg_vkb2_func_pane_cp01

0x6c2b,	// (0x0005257f) cel_fep_hwr_func_pane_g1_ParamLimits

0x6c2b,	// (0x0005257f) cel_fep_hwr_func_pane_g1

0x959b,	// (0x00054eef) bg_vkb2_func_pane_cp02_ParamLimits

0x959b,	// (0x00054eef) bg_vkb2_func_pane_cp02

0x6c2b,	// (0x0005257f) cell_hwr_side_button_pane_g1_ParamLimits

0x6c2b,	// (0x0005257f) cell_hwr_side_button_pane_g1

0x203c,	// (0x0004d990) status_pane_g4_ParamLimits

0x203c,	// (0x0004d990) status_pane_g4

0x2056,	// (0x0004d9aa) status_pane_t1

0x44c9,	// (0x0004fe1d) form2_midp_gauge_slider_cont_pane

0x44d1,	// (0x0004fe25) form2_midp_gauge_slider_pane_t1_ParamLimits

0xce5d,	// (0x000587b1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xce6f,	// (0x000587c3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacc,	// (0x0005b420) form2_midp_gauge_slider_pane_t_ParamLimits

0x4507,	// (0x0004fe5b) form2_midp_slider_pane_ParamLimits

0x1434,	// (0x0004cd88) aid_size_cell_func_vkb2_ParamLimits

0x1434,	// (0x0004cd88) aid_size_cell_func_vkb2

0x6bcc,	// (0x00052520) slider_pane_g4_ParamLimits

0x6bcc,	// (0x00052520) slider_pane_g4

0xbd02,	// (0x00057656) form2_midp_gauge_slider_pane_t2_cp01

0xbd10,	// (0x00057664) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbd10,	// (0x00057664) form2_midp_gauge_slider_pane_t3_cp01

0x1b66,	// (0x0004d4ba) form2_midp_slider_pane_cp01

0x8e9c,	// (0x000547f0) navi_smil_pane

0x6c64,	// (0x000525b8) navi_smil_pane_g1

0x6c6c,	// (0x000525c0) navi_smil_pane_t1

0x6c39,	// (0x0005258d) form2_midp_slider_pane_g1

0x6c42,	// (0x00052596) form2_midp_slider_pane_g2

0x6c4a,	// (0x0005259e) form2_midp_slider_pane_g3

0x6c39,	// (0x0005258d) form2_midp_slider_pane_g4

0xe28e,	// (0x00059be2) form2_midp_slider_pane_g5

0x0004,

0xfdf1,	// (0x0005b745) form2_midp_slider_pane_g

0x1b2b,	// (0x0004d47f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1b2b,	// (0x0004d47f) vkb2_area_bottom_space_btn_pane_g4

0xaf5b,	// (0x000568af) lc0_navi_pane_ParamLimits

0xaf5b,	// (0x000568af) lc0_navi_pane

0xafc5,	// (0x00056919) lc0_stat_indi_pane_ParamLimits

0xafc5,	// (0x00056919) lc0_stat_indi_pane

0xafda,	// (0x0005692e) ls0_title_pane_ParamLimits

0xafda,	// (0x0005692e) ls0_title_pane

0x9b7a,	// (0x000554ce) bg_popup_sub_pane_cp14_ParamLimits

0xd97c,	// (0x000592d0) list_uniindi_pane_ParamLimits

0xd988,	// (0x000592dc) uniindi_top_pane_ParamLimits

0x614a,	// (0x00051a9e) list_single_uniindi_pane_g1_ParamLimits

0x615d,	// (0x00051ab1) list_single_uniindi_pane_t1_ParamLimits

0xbd2d,	// (0x00057681) lc0_stat_clock_pane_ParamLimits

0xbd2d,	// (0x00057681) lc0_stat_clock_pane

0xe299,	// (0x00059bed) lc0_stat_indi_pane_g1_ParamLimits

0xe299,	// (0x00059bed) lc0_stat_indi_pane_g1

0xe2a6,	// (0x00059bfa) lc0_stat_indi_pane_g2_ParamLimits

0xe2a6,	// (0x00059bfa) lc0_stat_indi_pane_g2

0x0001,

0xfdfc,	// (0x0005b750) lc0_stat_indi_pane_g_ParamLimits

0xfdfc,	// (0x0005b750) lc0_stat_indi_pane_g

0xbd3d,	// (0x00057691) lc0_uni_indicator_pane_ParamLimits

0xbd3d,	// (0x00057691) lc0_uni_indicator_pane

0xe2b3,	// (0x00059c07) ls0_title_pane_g1_ParamLimits

0xe2b3,	// (0x00059c07) ls0_title_pane_g1

0xe2c7,	// (0x00059c1b) ls0_title_pane_t1_ParamLimits

0xe2c7,	// (0x00059c1b) ls0_title_pane_t1

0xbd4d,	// (0x000576a1) lc0_uni_indicator_pane_g1_ParamLimits

0xbd4d,	// (0x000576a1) lc0_uni_indicator_pane_g1

0x6cde,	// (0x00052632) lc0_stat_clock_pane_t1

0x8e9c,	// (0x000547f0) main_ai5_pane

0x6cec,	// (0x00052640) ai5_sk_pane_ParamLimits

0x6cec,	// (0x00052640) ai5_sk_pane

0xe2f5,	// (0x00059c49) cell_ai5_widget_pane_ParamLimits

0xe2f5,	// (0x00059c49) cell_ai5_widget_pane

0x6db9,	// (0x0005270d) aid_size_cell_widget_grid

0x6dc7,	// (0x0005271b) bg_ai5_widget_pane_ParamLimits

0x6dc7,	// (0x0005271b) bg_ai5_widget_pane

0x6e43,	// (0x00052797) cell_ai5_widget_pane_g2

0x6e57,	// (0x000527ab) cell_ai5_widget_pane_g3

0x6e71,	// (0x000527c5) cell_ai5_widget_pane_g4

0x6e81,	// (0x000527d5) cell_ai5_widget_pane_g5

0x6e91,	// (0x000527e5) cell_ai5_widget_pane_g6

0x6e9d,	// (0x000527f1) cell_ai5_widget_pane_g7

0x6f09,	// (0x0005285d) cell_ai5_widget_pane_t1_ParamLimits

0x6f09,	// (0x0005285d) cell_ai5_widget_pane_t1

0x6f26,	// (0x0005287a) cell_ai5_widget_pane_t2_ParamLimits

0x6f26,	// (0x0005287a) cell_ai5_widget_pane_t2

0x6f3e,	// (0x00052892) cell_ai5_widget_pane_t3_ParamLimits

0x6f3e,	// (0x00052892) cell_ai5_widget_pane_t3

0x6f56,	// (0x000528aa) cell_ai5_widget_pane_t4_ParamLimits

0x6f56,	// (0x000528aa) cell_ai5_widget_pane_t4

0xe361,	// (0x00059cb5) cell_ai5_widget_pane_t5_ParamLimits

0xe361,	// (0x00059cb5) cell_ai5_widget_pane_t5

0x6f9b,	// (0x000528ef) cell_ai5_widget_pane_t6_ParamLimits

0x6f9b,	// (0x000528ef) cell_ai5_widget_pane_t6

0x6fad,	// (0x00052901) cell_ai5_widget_pane_t7_ParamLimits

0x6fad,	// (0x00052901) cell_ai5_widget_pane_t7

0x6fcc,	// (0x00052920) cell_ai5_widget_pane_t8_ParamLimits

0x6fcc,	// (0x00052920) cell_ai5_widget_pane_t8

0x000b,

0xfe1c,	// (0x0005b770) cell_ai5_widget_pane_t_ParamLimits

0xfe1c,	// (0x0005b770) cell_ai5_widget_pane_t

0x7050,	// (0x000529a4) grid_ai5_widget_pane

0x9b7a,	// (0x000554ce) highlight_cell_ai5_widget_pane_ParamLimits

0x9b7a,	// (0x000554ce) highlight_cell_ai5_widget_pane

0xe381,	// (0x00059cd5) ai5_sk_left_pane

0xe38b,	// (0x00059cdf) ai5_sk_middle_pane

0xe395,	// (0x00059ce9) ai5_sk_right_pane

0x707c,	// (0x000529d0) bg_ai5_widget_pane_g1_ParamLimits

0x707c,	// (0x000529d0) bg_ai5_widget_pane_g1

0x7088,	// (0x000529dc) bg_ai5_widget_pane_g2_ParamLimits

0x7088,	// (0x000529dc) bg_ai5_widget_pane_g2

0x7094,	// (0x000529e8) bg_ai5_widget_pane_g3_ParamLimits

0x7094,	// (0x000529e8) bg_ai5_widget_pane_g3

0x70a0,	// (0x000529f4) bg_ai5_widget_pane_g4_ParamLimits

0x70a0,	// (0x000529f4) bg_ai5_widget_pane_g4

0x70ac,	// (0x00052a00) bg_ai5_widget_pane_g5_ParamLimits

0x70ac,	// (0x00052a00) bg_ai5_widget_pane_g5

0x70b8,	// (0x00052a0c) bg_ai5_widget_pane_g6_ParamLimits

0x70b8,	// (0x00052a0c) bg_ai5_widget_pane_g6

0x70c4,	// (0x00052a18) bg_ai5_widget_pane_g7_ParamLimits

0x70c4,	// (0x00052a18) bg_ai5_widget_pane_g7

0x70d0,	// (0x00052a24) bg_ai5_widget_pane_g8_ParamLimits

0x70d0,	// (0x00052a24) bg_ai5_widget_pane_g8

0x70dc,	// (0x00052a30) bg_ai5_widget_pane_g9_ParamLimits

0x70dc,	// (0x00052a30) bg_ai5_widget_pane_g9

0x0008,

0xfe35,	// (0x0005b789) bg_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x0005b789) bg_ai5_widget_pane_g

0x710e,	// (0x00052a62) cell_shortcut_ai5_widget_pane_ParamLimits

0x710e,	// (0x00052a62) cell_shortcut_ai5_widget_pane

0xc554,	// (0x00057ea8) bg_cell_shortcut_ai5_widget_pane

0x711f,	// (0x00052a73) cell_grid_ai5_widget_pane_g1

0xc554,	// (0x00057ea8) highlight_cell_shortcut_ai5_widget_pane

0x21c8,	// (0x0004db1c) ai5_sk_left_pane_g1

0x7128,	// (0x00052a7c) ai5_sk_left_pane_g2

0x7130,	// (0x00052a84) ai5_sk_left_pane_g3

0x7138,	// (0x00052a8c) ai5_sk_left_pane_g4

0x0003,

0xfe48,	// (0x0005b79c) ai5_sk_left_pane_g

0x7140,	// (0x00052a94) ai5_sk_left_pane_t1

0x21c0,	// (0x0004db14) ai5_sk_right_pane_g1

0x714e,	// (0x00052aa2) ai5_sk_right_pane_g2

0x7156,	// (0x00052aaa) ai5_sk_right_pane_g3

0x715e,	// (0x00052ab2) ai5_sk_right_pane_g4

0x0003,

0xfe51,	// (0x0005b7a5) ai5_sk_right_pane_g

0x7166,	// (0x00052aba) ai5_sk_right_pane_t1

0x21c0,	// (0x0004db14) ai5_sk_middle_pane_g1

0x21c8,	// (0x0004db1c) ai5_sk_middle_pane_g2

0x21e0,	// (0x0004db34) ai5_sk_middle_pane_g3

0x7156,	// (0x00052aaa) ai5_sk_middle_pane_g4

0x7130,	// (0x00052a84) ai5_sk_middle_pane_g5

0x7174,	// (0x00052ac8) ai5_sk_middle_pane_g6

0xe39f,	// (0x00059cf3) ai5_sk_middle_pane_g7

0x0006,

0xfe5a,	// (0x0005b7ae) ai5_sk_middle_pane_g

0xae47,	// (0x0005679b) aid_touch_area_size_lc0_ParamLimits

0xae47,	// (0x0005679b) aid_touch_area_size_lc0

0x114d,	// (0x0004caa1) cell_hwr_candidate_pane_t1_ParamLimits

0x062c,	// (0x0004bf80) aid_touch_navi_pane

0xb0d3,	// (0x00056a27) status_dt_navi_pane_ParamLimits

0xb0d3,	// (0x00056a27) status_dt_navi_pane

0xb0eb,	// (0x00056a3f) status_dt_sta_pane_ParamLimits

0xb0eb,	// (0x00056a3f) status_dt_sta_pane

0xe3a7,	// (0x00059cfb) dt_sta_controll_pane

0xe3b4,	// (0x00059d08) dt_sta_indi_pane

0xe3c1,	// (0x00059d15) dt_sta_title_pane

0x959b,	// (0x00054eef) bg_dt_sta_indi_pane_ParamLimits

0x959b,	// (0x00054eef) bg_dt_sta_indi_pane

0xe3d3,	// (0x00059d27) dt_sta_battery_pane

0xe3db,	// (0x00059d2f) dt_sta_indi_pane_g1

0x71c6,	// (0x00052b1a) dt_sta_indi_pane_g2

0x71cf,	// (0x00052b23) dt_sta_indi_pane_g3

0x0002,

0xfe69,	// (0x0005b7bd) dt_sta_indi_pane_g

0x71d8,	// (0x00052b2c) dt_sta_signal_pane

0x9b7a,	// (0x000554ce) bg_dt_sta_title_pane_ParamLimits

0x9b7a,	// (0x000554ce) bg_dt_sta_title_pane

0x301a,	// (0x0004e96e) dt_sta_title_pane_g1

0xe3e4,	// (0x00059d38) dt_sta_title_pane_t1_ParamLimits

0xe3e4,	// (0x00059d38) dt_sta_title_pane_t1

0x8e9c,	// (0x000547f0) bg_dt_sta_control_pane

0xe3f9,	// (0x00059d4d) dt_sta_controll_pane_g1

0xe402,	// (0x00059d56) bg_dt_sta_title_pane_g1

0xe40b,	// (0x00059d5f) bg_dt_sta_title_pane_g2

0xe414,	// (0x00059d68) bg_dt_sta_title_pane_g3

0x0002,

0xfe70,	// (0x0005b7c4) bg_dt_sta_title_pane_g

0x478e,	// (0x000500e2) bg_dt_sta_indi_pane_g1

0x721a,	// (0x00052b6e) dt_sta_signal_pane_g1

0x7222,	// (0x00052b76) dt_sta_signal_pane_g2

0x0001,

0xfe77,	// (0x0005b7cb) dt_sta_signal_pane_g

0x722a,	// (0x00052b7e) dt_sta_battery_pane_g1

0x7233,	// (0x00052b87) dt_sta_battery_pane_t1

0x478e,	// (0x000500e2) bg_dt_sta_control_pane_g1

0xc179,	// (0x00057acd) fep_china_uni_eep_pane

0xc181,	// (0x00057ad5) fep_china_uni_entry_pane_ParamLimits

0xc191,	// (0x00057ae5) popup_fep_china_uni_window_g1_ParamLimits

0xc1a1,	// (0x00057af5) popup_fep_china_uni_window_g2_ParamLimits

0xc1a1,	// (0x00057af5) popup_fep_china_uni_window_g2

0x0001,

0xf6ee,	// (0x0005b042) popup_fep_china_uni_window_g_ParamLimits

0xf6ee,	// (0x0005b042) popup_fep_china_uni_window_g

0x7242,	// (0x00052b96) fep_china_uni_eep_pane_g1

0x724a,	// (0x00052b9e) fep_china_uni_eep_pane_t1

0x6c5b,	// (0x000525af) aid_touch_area_size_smil_player

0x0782,	// (0x0004c0d6) lc0_clock_pane

0x204a,	// (0x0004d99e) status_pane_g5_ParamLimits

0x204a,	// (0x0004d99e) status_pane_g5

0xa87f,	// (0x000561d3) popup_keymap_window

0x2008,	// (0x0004d95c) status_icon_pane

0x6e57,	// (0x000527ab) cell_ai5_widget_pane_g3_ParamLimits

0x6e71,	// (0x000527c5) cell_ai5_widget_pane_g4_ParamLimits

0x6e81,	// (0x000527d5) cell_ai5_widget_pane_g5_ParamLimits

0x6ea9,	// (0x000527fd) cell_ai5_widget_pane_g8_ParamLimits

0x6ea9,	// (0x000527fd) cell_ai5_widget_pane_g8

0x6ebd,	// (0x00052811) cell_ai5_widget_pane_g9_ParamLimits

0x6ebd,	// (0x00052811) cell_ai5_widget_pane_g9

0x6ed1,	// (0x00052825) cell_ai5_widget_pane_g10_ParamLimits

0x6ed1,	// (0x00052825) cell_ai5_widget_pane_g10

0x7259,	// (0x00052bad) status_icon_pane_g1

0x8e9c,	// (0x000547f0) bg_popup_sub_pane_cp13

0x7261,	// (0x00052bb5) popup_keymap_window_t1

0xa53b,	// (0x00055e8f) control_pane_g6_ParamLimits

0xa53b,	// (0x00055e8f) control_pane_g6

0xa548,	// (0x00055e9c) control_pane_g7_ParamLimits

0xa548,	// (0x00055e9c) control_pane_g7

0xa555,	// (0x00055ea9) control_pane_g8_ParamLimits

0xa555,	// (0x00055ea9) control_pane_g8

0xe3a7,	// (0x00059cfb) dt_sta_controll_pane_ParamLimits

0xe3b4,	// (0x00059d08) dt_sta_indi_pane_ParamLimits

0xe3c1,	// (0x00059d15) dt_sta_title_pane_ParamLimits

0x9a6a,	// (0x000553be) aid_size_touch_scroll_bar_cale

0x8fb4,	// (0x00054908) popup_discreet_window_ParamLimits

0x8fb4,	// (0x00054908) popup_discreet_window

0x9006,	// (0x0005495a) popup_sk_window

0x285e,	// (0x0004e1b2) bg_popup_sub_pane_cp28_ParamLimits

0x285e,	// (0x0004e1b2) bg_popup_sub_pane_cp28

0x726f,	// (0x00052bc3) popup_discreet_window_g1_ParamLimits

0x726f,	// (0x00052bc3) popup_discreet_window_g1

0xe41d,	// (0x00059d71) popup_discreet_window_t1_ParamLimits

0xe41d,	// (0x00059d71) popup_discreet_window_t1

0x72ad,	// (0x00052c01) popup_discreet_window_t2_ParamLimits

0x72ad,	// (0x00052c01) popup_discreet_window_t2

0x0002,

0xfe7c,	// (0x0005b7d0) popup_discreet_window_t_ParamLimits

0xfe7c,	// (0x0005b7d0) popup_discreet_window_t

0x1b9d,	// (0x0004d4f1) popup_sk_window_g1

0x1ba7,	// (0x0004d4fb) popup_sk_window_g2

0x0001,

0xfe83,	// (0x0005b7d7) popup_sk_window_g

0xbd78,	// (0x000576cc) popup_sk_window_t1

0xbd86,	// (0x000576da) popup_sk_window_t1_copy1

0x6e43,	// (0x00052797) cell_ai5_widget_pane_g2_ParamLimits

0x6fde,	// (0x00052932) cell_ai5_widget_pane_t9_ParamLimits

0x6fde,	// (0x00052932) cell_ai5_widget_pane_t9

0x8e9c,	// (0x000547f0) main_fep_fshwr2_pane

0xbd94,	// (0x000576e8) aid_fshwr2_btn_pane

0xbda8,	// (0x000576fc) aid_fshwr2_syb_pane

0xbdbc,	// (0x00057710) aid_fshwr2_txt_pane

0xbdcc,	// (0x00057720) fshwr2_func_candi_pane

0xbdec,	// (0x00057740) fshwr2_hwr_syb_pane

0xbe0e,	// (0x00057762) fshwr2_icf_pane

0x8e9c,	// (0x000547f0) fshwr2_icf_bg_pane

0x1c6f,	// (0x0004d5c3) fshwr2_icf_pane_t1_ParamLimits

0x1c6f,	// (0x0004d5c3) fshwr2_icf_pane_t1

0xc0f6,	// (0x00057a4a) fshwr2_func_candi_pane_g1

0xe43b,	// (0x00059d8f) fshwr2_func_candi_row_pane_ParamLimits

0xe43b,	// (0x00059d8f) fshwr2_func_candi_row_pane

0xbe3e,	// (0x00057792) cell_fshwr2_syb_pane_ParamLimits

0xbe3e,	// (0x00057792) cell_fshwr2_syb_pane

0x6c2b,	// (0x0005257f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6c2b,	// (0x0005257f) fshwr2_hwr_syb_pane_g1

0x8e9c,	// (0x000547f0) bg_popup_call_pane_cp01

0xbe64,	// (0x000577b8) fshwr2_func_candi_cell_pane_ParamLimits

0xbe64,	// (0x000577b8) fshwr2_func_candi_cell_pane

0x2647,	// (0x0004df9b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2647,	// (0x0004df9b) fshwr2_func_candi_cell_bg_pane

0xbeaf,	// (0x00057803) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbeaf,	// (0x00057803) fshwr2_func_candi_cell_pane_g1

0xbee6,	// (0x0005783a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbee6,	// (0x0005783a) fshwr2_func_candi_cell_pane_t1

0x8e9c,	// (0x000547f0) bg_button_pane_cp08

0x9d5e,	// (0x000556b2) cell_fshwr2_syb_bg_pane

0xbf01,	// (0x00057855) cell_fshwr2_syb_bg_pane_g1

0xbf14,	// (0x00057868) cell_fshwr2_syb_bg_pane_t1

0x9b7a,	// (0x000554ce) main_tmo_pane

0xc890,	// (0x000581e4) uni_indicator_pane_g1_ParamLimits

0xc8a6,	// (0x000581fa) uni_indicator_pane_g2_ParamLimits

0xc8bc,	// (0x00058210) uni_indicator_pane_g3_ParamLimits

0x3387,	// (0x0004ecdb) uni_indicator_pane_g4_ParamLimits

0x3387,	// (0x0004ecdb) uni_indicator_pane_g4

0x339b,	// (0x0004ecef) uni_indicator_pane_g5_ParamLimits

0x339b,	// (0x0004ecef) uni_indicator_pane_g5

0x339b,	// (0x0004ecef) uni_indicator_pane_g6_ParamLimits

0x339b,	// (0x0004ecef) uni_indicator_pane_g6

0xf8e6,	// (0x0005b23a) uni_indicator_pane_g_ParamLimits

0xd69c,	// (0x00058ff0) popup_tmo_note_window_ParamLimits

0xd69c,	// (0x00058ff0) popup_tmo_note_window

0x9b7a,	// (0x000554ce) fshwr2_bg_pane

0xbed7,	// (0x0005782b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbed7,	// (0x0005782b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe88,	// (0x0005b7dc) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe88,	// (0x0005b7dc) fshwr2_func_candi_cell_pane_g

0x478e,	// (0x000500e2) bg_popup_window_pane_cp01

0x1d53,	// (0x0004d6a7) bg_popup_window_pane_g1_cp01

0x7326,	// (0x00052c7a) bg_popup_window_pane_cp22_ParamLimits

0x7326,	// (0x00052c7a) bg_popup_window_pane_cp22

0xe45e,	// (0x00059db2) listscroll_tmo_link_pane_ParamLimits

0xe45e,	// (0x00059db2) listscroll_tmo_link_pane

0x7374,	// (0x00052cc8) popup_tmo_note_window_g1_ParamLimits

0x7374,	// (0x00052cc8) popup_tmo_note_window_g1

0xe49e,	// (0x00059df2) tmo_note_info_pane_ParamLimits

0xe49e,	// (0x00059df2) tmo_note_info_pane

0xe4b8,	// (0x00059e0c) list_tmo_note_info_pane_g1_ParamLimits

0xe4b8,	// (0x00059e0c) list_tmo_note_info_pane_g1

0x73b2,	// (0x00052d06) list_tmo_note_info_pane_g2_ParamLimits

0x73b2,	// (0x00052d06) list_tmo_note_info_pane_g2

0x0001,

0xfe8d,	// (0x0005b7e1) list_tmo_note_info_pane_g_ParamLimits

0xfe8d,	// (0x0005b7e1) list_tmo_note_info_pane_g

0x73ce,	// (0x00052d22) list_tmo_note_info_text_pane_ParamLimits

0x73ce,	// (0x00052d22) list_tmo_note_info_text_pane

0x744f,	// (0x00052da3) list_tmo_link_pane

0x745c,	// (0x00052db0) scroll_pane_cp20

0x7469,	// (0x00052dbd) list_single_tmo_link_pane_ParamLimits

0x7469,	// (0x00052dbd) list_single_tmo_link_pane

0x7479,	// (0x00052dcd) list_single_tmo_link_pane_t1

0x7487,	// (0x00052ddb) list_tmo_note_info_text_pane_t1_ParamLimits

0x7487,	// (0x00052ddb) list_tmo_note_info_text_pane_t1

0x9c36,	// (0x0005558a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9c36,	// (0x0005558a) aid_size_touch_scroll_bar_cp01

0x8af3,	// (0x00054447) aid_size_touch_slider_marker

0x8ff6,	// (0x0005494a) popup_settings_window_ParamLimits

0x8ff6,	// (0x0005494a) popup_settings_window

0xe997,	// (0x0005a2eb) popup_candi_list_indi_window

0x062c,	// (0x0004bf80) aid_touch_navi_pane_ParamLimits

0x138d,	// (0x0004cce1) rs_clock_indi_pane

0x1396,	// (0x0004ccea) sctrl_sk_bottom_pane_ParamLimits

0x13a7,	// (0x0004ccfb) sctrl_sk_top_pane_ParamLimits

0xb9cd,	// (0x00057321) popup_fep_tooltip_window

0x6db9,	// (0x0005270d) aid_size_cell_widget_grid_ParamLimits

0x6e2e,	// (0x00052782) cell_ai5_widget_pane_g1_ParamLimits

0x6e2e,	// (0x00052782) cell_ai5_widget_pane_g1

0x6e91,	// (0x000527e5) cell_ai5_widget_pane_g6_ParamLimits

0x6e9d,	// (0x000527f1) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe01,	// (0x0005b755) cell_ai5_widget_pane_g_ParamLimits

0xfe01,	// (0x0005b755) cell_ai5_widget_pane_g

0x700d,	// (0x00052961) cell_ai5_widget_pane_t10_ParamLimits

0x700d,	// (0x00052961) cell_ai5_widget_pane_t10

0x7050,	// (0x000529a4) grid_ai5_widget_pane_ParamLimits

0x70e8,	// (0x00052a3c) cell_contacts_ai5_widget_pane_ParamLimits

0x70e8,	// (0x00052a3c) cell_contacts_ai5_widget_pane

0x72c2,	// (0x00052c16) popup_discreet_window_t3_ParamLimits

0x72c2,	// (0x00052c16) popup_discreet_window_t3

0xbe2a,	// (0x0005777e) popup_fshwr2_char_preview_window_ParamLimits

0xbe2a,	// (0x0005777e) popup_fshwr2_char_preview_window

0xe4cf,	// (0x00059e23) tmo_note_info_pane_t1

0xe4e4,	// (0x00059e38) tmo_note_info_pane_t2

0xe4fb,	// (0x00059e4f) tmo_note_info_pane_t3

0x742b,	// (0x00052d7f) tmo_note_info_pane_t4

0x743d,	// (0x00052d91) tmo_note_info_pane_t5

0x0004,

0xfe92,	// (0x0005b7e6) tmo_note_info_pane_t

0x744f,	// (0x00052da3) list_tmo_link_pane_ParamLimits

0x745c,	// (0x00052db0) scroll_pane_cp20_ParamLimits

0x8e9c,	// (0x000547f0) bg_popup_fep_char_preview_window_cp01

0xe510,	// (0x00059e64) popup_fshwr2_char_preview_window_t1

0x74ae,	// (0x00052e02) popup_candi_list_indi_window_g1

0x74b7,	// (0x00052e0b) bg_cell_contacts_ai5_widget_pane

0x74c3,	// (0x00052e17) cell_contacts_ai5_widget_pane_g1

0x4e75,	// (0x000507c9) cell_contacts_ai5_widget_pane_g2

0x74d8,	// (0x00052e2c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9d,	// (0x0005b7f1) cell_contacts_ai5_widget_pane_g

0x74e4,	// (0x00052e38) cell_contacts_ai5_widget_pane_t1

0x9b7a,	// (0x000554ce) highlight_cell_shortcut_ai5_widget_pane_cp01

0x755b,	// (0x00052eaf) settings_container_pane

0xc554,	// (0x00057ea8) listscroll_set_pane_copy1

0x3e6a,	// (0x0004f7be) scroll_pane_cp121_copy1

0x2603,	// (0x0004df57) set_content_pane_copy1

0xe51e,	// (0x00059e72) aid_height_set_list_copy1_ParamLimits

0xe51e,	// (0x00059e72) aid_height_set_list_copy1

0x3593,	// (0x0004eee7) aid_size_parent_copy1_ParamLimits

0x3593,	// (0x0004eee7) aid_size_parent_copy1

0xe52a,	// (0x00059e7e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe52a,	// (0x00059e7e) button_value_adjust_pane_cp6_copy1

0x9d5e,	// (0x000556b2) list_highlight_pane_cp2_copy1_ParamLimits

0x9d5e,	// (0x000556b2) list_highlight_pane_cp2_copy1

0xe53e,	// (0x00059e92) list_set_pane_copy1_ParamLimits

0xe53e,	// (0x00059e92) list_set_pane_copy1

0x74f6,	// (0x00052e4a) main_pane_set_t1_copy1_ParamLimits

0x74f6,	// (0x00052e4a) main_pane_set_t1_copy1

0x7530,	// (0x00052e84) main_pane_set_t2_copy1_ParamLimits

0x7530,	// (0x00052e84) main_pane_set_t2_copy1

0xe5eb,	// (0x00059f3f) main_pane_set_t3_copy1

0xe5f9,	// (0x00059f4d) main_pane_set_t4_copy1

0x754f,	// (0x00052ea3) set_content_pane_g1_copy1_ParamLimits

0x754f,	// (0x00052ea3) set_content_pane_g1_copy1

0xe607,	// (0x00059f5b) setting_code_pane_copy1

0x7658,	// (0x00052fac) setting_slider_graphic_pane_copy1

0x7658,	// (0x00052fac) setting_slider_pane_copy1

0x7660,	// (0x00052fb4) setting_text_pane_copy1

0x7660,	// (0x00052fb4) setting_volume_pane_copy1

0xe607,	// (0x00059f5b) settings_code_pane_cp2_copy1

0xe60f,	// (0x00059f63) settings_code_pane_cp_copy1_ParamLimits

0xe60f,	// (0x00059f63) settings_code_pane_cp_copy1

0xbf2a,	// (0x0005787e) volume_set_pane_copy1

0xe623,	// (0x00059f77) volume_set_pane_g10_copy1

0xe62b,	// (0x00059f7f) volume_set_pane_g1_copy1

0xe633,	// (0x00059f87) volume_set_pane_g2_copy1

0xe63b,	// (0x00059f8f) volume_set_pane_g3_copy1

0xe643,	// (0x00059f97) volume_set_pane_g4_copy1

0xe64b,	// (0x00059f9f) volume_set_pane_g5_copy1

0xe653,	// (0x00059fa7) volume_set_pane_g6_copy1

0xe65b,	// (0x00059faf) volume_set_pane_g7_copy1

0xe663,	// (0x00059fb7) volume_set_pane_g8_copy1

0xe66b,	// (0x00059fbf) volume_set_pane_g9_copy1

0x9231,	// (0x00054b85) bg_set_opt_pane_cp_copy1_ParamLimits

0x9231,	// (0x00054b85) bg_set_opt_pane_cp_copy1

0xbf32,	// (0x00057886) setting_slider_pane_t1_copy1_ParamLimits

0xbf32,	// (0x00057886) setting_slider_pane_t1_copy1

0xbf51,	// (0x000578a5) setting_slider_pane_t2_copy1_ParamLimits

0xbf51,	// (0x000578a5) setting_slider_pane_t2_copy1

0xbf6b,	// (0x000578bf) setting_slider_pane_t3_copy1_ParamLimits

0xbf6b,	// (0x000578bf) setting_slider_pane_t3_copy1

0xbf83,	// (0x000578d7) slider_set_pane_copy1_ParamLimits

0xbf83,	// (0x000578d7) slider_set_pane_copy1

0x9bd2,	// (0x00055526) set_opt_bg_pane_g1_copy2

0x9bda,	// (0x0005552e) set_opt_bg_pane_g2_copy2

0x76cc,	// (0x00053020) set_opt_bg_pane_g3_copy2

0x9bea,	// (0x0005553e) set_opt_bg_pane_g4_copy2

0x9bf2,	// (0x00055546) set_opt_bg_pane_g5_copy2

0x9bfa,	// (0x0005554e) set_opt_bg_pane_g6_copy2

0xe673,	// (0x00059fc7) set_opt_bg_pane_g7_copy2

0x76de,	// (0x00053032) set_opt_bg_pane_g8_copy2

0x76e8,	// (0x0005303c) set_opt_bg_pane_g9_copy2

0xbf99,	// (0x000578ed) aid_size_touch_slider_mark_copy1_ParamLimits

0xbf99,	// (0x000578ed) aid_size_touch_slider_mark_copy1

0xe67b,	// (0x00059fcf) slider_set_pane_g1_copy1

0x1ddf,	// (0x0004d733) slider_set_pane_g2_copy1

0xb71a,	// (0x0005706e) slider_set_pane_g3_copy1_ParamLimits

0xb71a,	// (0x0005706e) slider_set_pane_g3_copy1

0xb72e,	// (0x00057082) slider_set_pane_g4_copy1_ParamLimits

0xb72e,	// (0x00057082) slider_set_pane_g4_copy1

0xb746,	// (0x0005709a) slider_set_pane_g5_copy1_ParamLimits

0xb746,	// (0x0005709a) slider_set_pane_g5_copy1

0xb71a,	// (0x0005706e) slider_set_pane_g6_copy1_ParamLimits

0xb71a,	// (0x0005706e) slider_set_pane_g6_copy1

0xbfad,	// (0x00057901) slider_set_pane_g7_copy1_ParamLimits

0xbfad,	// (0x00057901) slider_set_pane_g7_copy1

0x8f96,	// (0x000548ea) bg_set_opt_pane_cp2_copy1

0xe684,	// (0x00059fd8) setting_slider_graphic_pane_g1_copy1

0xe68d,	// (0x00059fe1) setting_slider_graphic_pane_t1_copy1

0xe69d,	// (0x00059ff1) setting_slider_graphic_pane_t2_copy1

0xe6ad,	// (0x0005a001) slider_set_pane_cp_copy1

0x7734,	// (0x00053088) input_focus_pane_cp1_copy1

0x773d,	// (0x00053091) list_set_text_pane_copy1

0x7745,	// (0x00053099) setting_text_pane_g1_copy1

0xeeef,	// (0x0005a843) set_text_pane_t1_copy1

0x7734,	// (0x00053088) input_focus_pane_cp2_copy1

0x7745,	// (0x00053099) setting_code_pane_g1_copy1

0x774e,	// (0x000530a2) setting_code_pane_t1_copy1

0x775c,	// (0x000530b0) list_set_graphic_pane_copy1

0x8f96,	// (0x000548ea) bg_set_opt_pane_cp4_copy1

0xc2d1,	// (0x00057c25) list_set_graphic_pane_g1_copy1_ParamLimits

0xc2d1,	// (0x00057c25) list_set_graphic_pane_g1_copy1

0x7770,	// (0x000530c4) list_set_graphic_pane_g2_copy1

0xc2e9,	// (0x00057c3d) list_set_graphic_pane_t1_copy1_ParamLimits

0xc2e9,	// (0x00057c3d) list_set_graphic_pane_t1_copy1

0x478e,	// (0x000500e2) rs_clock_indi_pane_g1

0x7778,	// (0x000530cc) rs_clock_indi_pane_t1

0x7786,	// (0x000530da) rs_indi_pane

0x778e,	// (0x000530e2) rs_indi_pane_g1

0x7797,	// (0x000530eb) rs_indi_pane_g2

0x74ae,	// (0x00052e02) rs_indi_pane_g3

0x0002,

0xfea4,	// (0x0005b7f8) rs_indi_pane_g

0xc554,	// (0x00057ea8) bg_popup_preview_window_pane_cp03

0x77a0,	// (0x000530f4) popup_fep_tooltip_window_t1

0xd342,	// (0x00058c96) popup_note2_window_g2_ParamLimits

0xd342,	// (0x00058c96) popup_note2_window_g2

0x0001,

0xfc38,	// (0x0005b58c) popup_note2_window_g_ParamLimits

0xfc38,	// (0x0005b58c) popup_note2_window_g

0x5926,	// (0x0005127a) bg_popup_sub_pane_cp11_ParamLimits

0x5933,	// (0x00051287) cell_ai3_links_pane_g1_ParamLimits

0x594a,	// (0x0005129e) cell_ai3_links_pane_t1

0xeeef,	// (0x0005a843) set_text_pane_t1_copy1_ParamLimits

0xc496,	// (0x00057dea) cell_graphic_popup_pane_cp2_ParamLimits

0xc496,	// (0x00057dea) cell_graphic_popup_pane_cp2

0xe6bd,	// (0x0005a011) cell_graphic_popup_pane_g1_cp2

0x98ea,	// (0x0005523e) cell_graphic_popup_pane_g2_cp2

0x77b6,	// (0x0005310a) cell_graphic_popup_pane_g3_cp2

0xe6c5,	// (0x0005a019) cell_graphic_popup_pane_t2_cp2

0x98fb,	// (0x0005524f) grid_highlight_pane_cp3_cp2

0x9f17,	// (0x0005586b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x9b7a,	// (0x000554ce) main_tmo_pane_ParamLimits

0xd690,	// (0x00058fe4) popup_tmo_big_image_note_window

0x6e1d,	// (0x00052771) cell_ai5_widget_list_pane

0x6e25,	// (0x00052779) cell_ai5_widget_lrg_icon_pane

0xe4cf,	// (0x00059e23) tmo_note_info_pane_t1_ParamLimits

0xe4e4,	// (0x00059e38) tmo_note_info_pane_t2_ParamLimits

0xe4fb,	// (0x00059e4f) tmo_note_info_pane_t3_ParamLimits

0x742b,	// (0x00052d7f) tmo_note_info_pane_t4_ParamLimits

0x743d,	// (0x00052d91) tmo_note_info_pane_t5_ParamLimits

0xfe92,	// (0x0005b7e6) tmo_note_info_pane_t_ParamLimits

0x755b,	// (0x00052eaf) settings_container_pane_ParamLimits

0xe6b5,	// (0x0005a009) indicator_popup_pane_cp5

0xe6b5,	// (0x0005a009) indicator_popup_pane_cp6

0x775c,	// (0x000530b0) list_set_graphic_pane_copy1_ParamLimits

0x8e9c,	// (0x000547f0) bg_popup_window_pane_cp23

0x77cc,	// (0x00053120) popup_tmo_big_image_note_window_g1

0x77d5,	// (0x00053129) popup_tmo_big_image_note_window_t1

0x77e5,	// (0x00053139) popup_tmo_big_image_note_window_t2

0x77f5,	// (0x00053149) popup_tmo_big_image_note_window_t3

0x0002,

0xfeab,	// (0x0005b7ff) popup_tmo_big_image_note_window_t

0x478e,	// (0x000500e2) cell_ai5_widget_lrg_icon_pane_g1

0x7805,	// (0x00053159) cell_ai5_widget_lrg_icon_pane_t1

0x7813,	// (0x00053167) cell_ai5_widget_list_row_pane_ParamLimits

0x7813,	// (0x00053167) cell_ai5_widget_list_row_pane

0x782a,	// (0x0005317e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x782a,	// (0x0005317e) cell_ai5_widget_list_row_pane_g1

0xe6d3,	// (0x0005a027) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe6d3,	// (0x0005a027) cell_ai5_widget_list_row_pane_t1

0x7862,	// (0x000531b6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7862,	// (0x000531b6) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb2,	// (0x0005b806) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb2,	// (0x0005b806) cell_ai5_widget_list_row_pane_t

0x8e9c,	// (0x000547f0) main_fep_vtchi_ss_pane

0x78b2,	// (0x00053206) popup_fep_char_pre_window

0x78ba,	// (0x0005320e) popup_fep_ituss_window

0xef33,	// (0x0005a887) popup_fep_vkbss_window

0x9d5e,	// (0x000556b2) grid_vkbss_keypad_pane_ParamLimits

0x9d5e,	// (0x000556b2) grid_vkbss_keypad_pane

0x7926,	// (0x0005327a) ituss_keypad_pane

0x1e07,	// (0x0004d75b) aid_vkbss_key_offset_ParamLimits

0x1e07,	// (0x0004d75b) aid_vkbss_key_offset

0xbfc3,	// (0x00057917) cell_vkbss_key_pane_ParamLimits

0xbfc3,	// (0x00057917) cell_vkbss_key_pane

0x7936,	// (0x0005328a) bg_cell_vkbss_key_g1_ParamLimits

0x7936,	// (0x0005328a) bg_cell_vkbss_key_g1

0xef40,	// (0x0005a894) cell_vkbss_key_3p_pane_ParamLimits

0xef40,	// (0x0005a894) cell_vkbss_key_3p_pane

0xef76,	// (0x0005a8ca) cell_vkbss_key_g1_ParamLimits

0xef76,	// (0x0005a8ca) cell_vkbss_key_g1

0xefac,	// (0x0005a900) cell_vkbss_key_t1_ParamLimits

0xefac,	// (0x0005a900) cell_vkbss_key_t1

0x1e6b,	// (0x0004d7bf) cell_ituss_key_pane_ParamLimits

0x1e6b,	// (0x0004d7bf) cell_ituss_key_pane

0x7a0a,	// (0x0005335e) bg_cell_ituss_key_g1_ParamLimits

0x7a0a,	// (0x0005335e) bg_cell_ituss_key_g1

0x7a16,	// (0x0005336a) cell_ituss_key_pane_g1_ParamLimits

0x7a16,	// (0x0005336a) cell_ituss_key_pane_g1

0x1e7c,	// (0x0004d7d0) cell_ituss_key_pane_g2_ParamLimits

0x1e7c,	// (0x0004d7d0) cell_ituss_key_pane_g2

0x0005,

0xfeb9,	// (0x0005b80d) cell_ituss_key_pane_g_ParamLimits

0xfeb9,	// (0x0005b80d) cell_ituss_key_pane_g

0x1f00,	// (0x0004d854) cell_ituss_key_t1_ParamLimits

0x1f00,	// (0x0004d854) cell_ituss_key_t1

0x1f3a,	// (0x0004d88e) cell_ituss_key_t2_ParamLimits

0x1f3a,	// (0x0004d88e) cell_ituss_key_t2

0x1f6c,	// (0x0004d8c0) cell_ituss_key_t3_ParamLimits

0x1f6c,	// (0x0004d8c0) cell_ituss_key_t3

0x1f9d,	// (0x0004d8f1) cell_ituss_key_t4_ParamLimits

0x1f9d,	// (0x0004d8f1) cell_ituss_key_t4

0x0004,

0xfec6,	// (0x0005b81a) cell_ituss_key_t_ParamLimits

0xfec6,	// (0x0005b81a) cell_ituss_key_t

0xf008,	// (0x0005a95c) cell_vkbss_key_3p_pane_g1

0xf010,	// (0x0005a964) cell_vkbss_key_3p_pane_g2

0xf018,	// (0x0005a96c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed1,	// (0x0005b825) cell_vkbss_key_3p_pane_g

0xc554,	// (0x00057ea8) bg_popup_fep_char_preview_window_cp02

0x7a54,	// (0x000533a8) popup_fep_char_pre_window_t1

0xe357,	// (0x00059cab) main_ai5_sk_pane

0x74b7,	// (0x00052e0b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x74c3,	// (0x00052e17) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e75,	// (0x000507c9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x74d8,	// (0x00052e2c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9d,	// (0x0005b7f1) cell_contacts_ai5_widget_pane_g_ParamLimits

0x74e4,	// (0x00052e38) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x9b7a,	// (0x000554ce) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf020,	// (0x0005a974) main_ai5_sk_pane_g1

0xb4af,	// (0x00056e03) popup_query_code_window_g1

0xef24,	// (0x0005a878) popup_fep_vkb_icf_pane

0x78fd,	// (0x00053251) popup_fep_vtchi_icf_pane

0x7a6b,	// (0x000533bf) bg_icf_pane

0x7a6b,	// (0x000533bf) list_vkb_icf_pane

0x7a77,	// (0x000533cb) bg_icf_pane_cp01

0x7a8a,	// (0x000533de) vtchi_icf_list_pane

0xf075,	// (0x0005a9c9) list_vkb_icf_pane_t1_ParamLimits

0xf075,	// (0x0005a9c9) list_vkb_icf_pane_t1

0x7b0c,	// (0x00053460) vtchi_icf_list_pane_t1_ParamLimits

0x7b0c,	// (0x00053460) vtchi_icf_list_pane_t1

0x78ba,	// (0x0005320e) popup_fep_ituss_window_ParamLimits

0x78fd,	// (0x00053251) popup_fep_vtchi_icf_pane_ParamLimits

0x7926,	// (0x0005327a) ituss_keypad_pane_ParamLimits

0x1dfd,	// (0x0004d751) ituss_sks_pane

0x7a6b,	// (0x000533bf) bg_icf_pane_ParamLimits

0xef09,	// (0x0005a85d) icf_edit_indi_pane_ParamLimits

0xef09,	// (0x0005a85d) icf_edit_indi_pane

0x7a6b,	// (0x000533bf) list_vkb_icf_pane_ParamLimits

0x7a77,	// (0x000533cb) bg_icf_pane_cp01_ParamLimits

0x78a5,	// (0x000531f9) icf_edit_indi_pane_cp01_ParamLimits

0x78a5,	// (0x000531f9) icf_edit_indi_pane_cp01

0x7a8a,	// (0x000533de) vtchi_query_pane

0x6c2b,	// (0x0005257f) icf_edit_indi_pane_g1_ParamLimits

0x6c2b,	// (0x0005257f) icf_edit_indi_pane_g1

0xf08d,	// (0x0005a9e1) icf_edit_indi_pane_g2_ParamLimits

0xf08d,	// (0x0005a9e1) icf_edit_indi_pane_g2

0x0001,

0xfefc,	// (0x0005b850) icf_edit_indi_pane_g_ParamLimits

0xfefc,	// (0x0005b850) icf_edit_indi_pane_g

0xf0a1,	// (0x0005a9f5) icf_edit_indi_pane_t1

0x7b2d,	// (0x00053481) bg_input_focus_pane_cp042

0x9a61,	// (0x000553b5) vtchi_button_pane

0x7b36,	// (0x0005348a) vtchi_query_pane_t1

0x7b44,	// (0x00053498) vtchi_query_pane_t2

0x7b52,	// (0x000534a6) vtchi_query_pane_t3

0x0002,

0xfeeb,	// (0x0005b83f) vtchi_query_pane_t

0x8e9c,	// (0x000547f0) bg_button_pane_cp13

0x7b60,	// (0x000534b4) vtchi_button_pane_g1

0x1fe0,	// (0x0004d934) ituss_sks_pane_g1

0x1feb,	// (0x0004d93f) ituss_sks_pane_g2

0x0001,

0xfef2,	// (0x0005b846) ituss_sks_pane_g

0x7b68,	// (0x000534bc) ituss_sks_pane_t1

0x7b76,	// (0x000534ca) ituss_sks_pane_t2

0x0001,

0xfef7,	// (0x0005b84b) ituss_sks_pane_t

0x4202,	// (0x0004fb56) indicator_nsta_pane_cp_g1

0x420b,	// (0x0004fb5f) indicator_nsta_pane_cp_g2

0x4213,	// (0x0004fb67) indicator_nsta_pane_cp_g3

0x421b,	// (0x0004fb6f) indicator_nsta_pane_cp_g4

0x420b,	// (0x0004fb5f) indicator_nsta_pane_cp_g5

0x4213,	// (0x0004fb67) indicator_nsta_pane_cp_g6

0x0005,

0xfa82,	// (0x0005b3d6) indicator_nsta_pane_cp_g

0xe136,	// (0x00059a8a) cell_graphic2_pane_t2_ParamLimits

0xe136,	// (0x00059a8a) cell_graphic2_pane_t2

0x0001,

0xfd88,	// (0x0005b6dc) cell_graphic2_pane_t_ParamLimits

0xfd88,	// (0x0005b6dc) cell_graphic2_pane_t

0xe16d,	// (0x00059ac1) cell_graphic2_control_pane_t1

0xa1e1,	// (0x00055b35) signal_pane_g3_ParamLimits

0xa1e1,	// (0x00055b35) signal_pane_g3

0xa1f5,	// (0x00055b49) signal_pane_g4_ParamLimits

0xa1f5,	// (0x00055b49) signal_pane_g4

0x7874,	// (0x000531c8) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7874,	// (0x000531c8) cell_ai5_widget_list_row_pane_t3

0x7a2a,	// (0x0005337e) cell_ituss_key_pane_t1_ParamLimits

0x7a2a,	// (0x0005337e) cell_ituss_key_pane_t1

0x22d2,	// (0x0004dc26) form_field_data_wide_pane_vc_t2_ParamLimits

0x22d2,	// (0x0004dc26) form_field_data_wide_pane_vc_t2

0x22e6,	// (0x0004dc3a) form_field_data_wide_pane_vc_t3_ParamLimits

0x22e6,	// (0x0004dc3a) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ce,	// (0x0005b122) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ce,	// (0x0005b122) form_field_data_wide_pane_vc_t

0x3eac,	// (0x0004f800) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3eac,	// (0x0004f800) form_field_slider_wide_pane_vc_t3

0x3f8a,	// (0x0004f8de) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3f8a,	// (0x0004f8de) form_field_popup_wide_pane_vc_t2

0x3fa1,	// (0x0004f8f5) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3fa1,	// (0x0004f8f5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa71,	// (0x0005b3c5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x0005b3c5) form_field_popup_wide_pane_vc_t

0xbd94,	// (0x000576e8) aid_fshwr2_btn_pane_ParamLimits

0xbda8,	// (0x000576fc) aid_fshwr2_syb_pane_ParamLimits

0xbdbc,	// (0x00057710) aid_fshwr2_txt_pane_ParamLimits

0x9b7a,	// (0x000554ce) fshwr2_bg_pane_ParamLimits

0xbdcc,	// (0x00057720) fshwr2_func_candi_pane_ParamLimits

0xbdec,	// (0x00057740) fshwr2_hwr_syb_pane_ParamLimits

0xbe0e,	// (0x00057762) fshwr2_icf_pane_ParamLimits

0x0eb9,	// (0x0004c80d) list_double_graphic_pane_vc_g4_ParamLimits

0x0eb9,	// (0x0004c80d) list_double_graphic_pane_vc_g4

0x1e9c,	// (0x0004d7f0) cell_ituss_key_pane_g3_ParamLimits

0x1e9c,	// (0x0004d7f0) cell_ituss_key_pane_g3

0x1fce,	// (0x0004d922) cell_ituss_key_t5_ParamLimits

0x1fce,	// (0x0004d922) cell_ituss_key_t5

0xef33,	// (0x0005a887) popup_fep_vkbss_window_ParamLimits

0x4f96,	// (0x000508ea) aid_cell_ai5_quarter

0xf0a1,	// (0x0005a9f5) icf_edit_indi_pane_t1_ParamLimits

0x9643,	// (0x00054f97) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9643,	// (0x00054f97) aid_tch_indicator_popup_pane_cp2

0x9656,	// (0x00054faa) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9656,	// (0x00054faa) aid_tch_query_popup_data_pane_cp2

0x2647,	// (0x0004df9b) aid_tch_query_popup_pane_ParamLimits

0x2647,	// (0x0004df9b) aid_tch_query_popup_pane

0x2647,	// (0x0004df9b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2647,	// (0x0004df9b) aid_tch_query_popup_data_pane_cp1

0x9d5e,	// (0x000556b2) cell_fshwr2_syb_bg_pane_ParamLimits

0xbf01,	// (0x00057855) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbf14,	// (0x00057868) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xef24,	// (0x0005a878) popup_fep_vkb_icf_pane_ParamLimits

0xbcfa,	// (0x0005764e) bg_popup_fep_char_preview_window_g10

0x6ee5,	// (0x00052839) cell_ai5_widget_pane_g11_ParamLimits

0x6ee5,	// (0x00052839) cell_ai5_widget_pane_g11

0x6ef1,	// (0x00052845) cell_ai5_widget_pane_g12_ParamLimits

0x6ef1,	// (0x00052845) cell_ai5_widget_pane_g12

0x6efd,	// (0x00052851) cell_ai5_widget_pane_g13_ParamLimits

0x6efd,	// (0x00052851) cell_ai5_widget_pane_g13

0x702c,	// (0x00052980) cell_ai5_widget_pane_t11_ParamLimits

0x702c,	// (0x00052980) cell_ai5_widget_pane_t11

0x703e,	// (0x00052992) cell_ai5_widget_pane_t12_ParamLimits

0x703e,	// (0x00052992) cell_ai5_widget_pane_t12

0x1ea8,	// (0x0004d7fc) cell_ituss_key_pane_g4_ParamLimits

0x1ea8,	// (0x0004d7fc) cell_ituss_key_pane_g4

0x1ec4,	// (0x0004d818) cell_ituss_key_pane_g5_ParamLimits

0x1ec4,	// (0x0004d818) cell_ituss_key_pane_g5

0x1ee0,	// (0x0004d834) cell_ituss_key_pane_g6_ParamLimits

0x1ee0,	// (0x0004d834) cell_ituss_key_pane_g6

0x21b8,	// (0x0004db0c) bg_icf_pane_g1

0xf029,	// (0x0005a97d) bg_icf_pane_g2

0xf033,	// (0x0005a987) bg_icf_pane_g3

0xf03b,	// (0x0005a98f) bg_icf_pane_g4

0xf045,	// (0x0005a999) bg_icf_pane_g5

0xf04f,	// (0x0005a9a3) bg_icf_pane_g6

0xf059,	// (0x0005a9ad) bg_icf_pane_g7

0xf061,	// (0x0005a9b5) bg_icf_pane_g8

0xf06b,	// (0x0005a9bf) bg_icf_pane_g9

0x0008,

0xfed8,	// (0x0005b82c) bg_icf_pane_g

0x7913,	// (0x00053267) popup_hyb_candi_window_ParamLimits

0x7913,	// (0x00053267) popup_hyb_candi_window

0x2244,	// (0x0004db98) bg_popup_sub_pane_cp01_ParamLimits

0x2244,	// (0x0004db98) bg_popup_sub_pane_cp01

0x7bb1,	// (0x00053505) entry_hyb_candi_pane_ParamLimits

0x7bb1,	// (0x00053505) entry_hyb_candi_pane

0x7bc0,	// (0x00053514) grid_hyb_candi_pane_ParamLimits

0x7bc0,	// (0x00053514) grid_hyb_candi_pane

0x7bd5,	// (0x00053529) grid_hyb_phrase_pane_ParamLimits

0x7bd5,	// (0x00053529) grid_hyb_phrase_pane

0x7be4,	// (0x00053538) cell_hyb_candi_pane_ParamLimits

0x7be4,	// (0x00053538) cell_hyb_candi_pane

0x7c07,	// (0x0005355b) cell_hyb_candi_scroll_pane

0xc0f6,	// (0x00057a4a) cell_hyb_candi_pane_g1

0x7c10,	// (0x00053564) cell_hyb_candi_pane_t1

0x7c1e,	// (0x00053572) cell_hyb_phrase_pane

0xc0f6,	// (0x00057a4a) cell_hyb_phrase_pane_g1

0x7c27,	// (0x0005357b) cell_hyb_phrase_pane_t1

0x7c35,	// (0x00053589) entry_hyb_candi_pane_t1

0xc554,	// (0x00057ea8) input_focus_pane_cp06

0x7c43,	// (0x00053597) cell_hyb_candi_scroll_pane_g1

0x7c4b,	// (0x0005359f) cell_hyb_candi_scroll_pane_g1_aid

0x7c53,	// (0x000535a7) cell_hyb_candi_scroll_pane_g2

0x7c5b,	// (0x000535af) cell_hyb_candi_scroll_pane_g2_aid

0x7c63,	// (0x000535b7) cell_hyb_candi_scroll_pane_g3

0x7c6b,	// (0x000535bf) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
